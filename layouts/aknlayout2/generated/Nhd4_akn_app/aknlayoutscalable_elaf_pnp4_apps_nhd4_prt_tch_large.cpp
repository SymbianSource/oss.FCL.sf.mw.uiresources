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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0007b4e5 };

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
0x1f09,	// (0x0007d3ee) Screen

0x1f15,	// (0x0007d3fa) application_window

0x1f71,	// (0x0007d456) area_bottom_pane_ParamLimits

0x1f71,	// (0x0007d456) area_bottom_pane

0x1fca,	// (0x0007d4af) area_top_pane_ParamLimits

0x1fca,	// (0x0007d4af) area_top_pane

0x202e,	// (0x0007d513) call_video_uplink_pane_ParamLimits

0x202e,	// (0x0007d513) call_video_uplink_pane

0x206d,	// (0x0007d552) main_pane_ParamLimits

0x206d,	// (0x0007d552) main_pane

0xc922,	// (0x00087e07) context_pane

0x52bd,	// (0x000807a2) navi_pane

0x52e3,	// (0x000807c8) popup_cale_events_window_ParamLimits

0x52e3,	// (0x000807c8) popup_cale_events_window

0xc935,	// (0x00087e1a) popup_mup_playback_window

0x52fb,	// (0x000807e0) signal_pane

0xa84e,	// (0x00085d33) main_browser_pane

0xaa21,	// (0x00085f06) main_burst_pane

0x514d,	// (0x00080632) main_calc_pane

0xc908,	// (0x00087ded) main_cale_day_pane

0x27b5,	// (0x0007dc9a) main_cale_month_pane

0xc908,	// (0x00087ded) main_cale_week_pane

0xaa21,	// (0x00085f06) main_call_pane

0xa522,	// (0x00085a07) main_call_poc_pane

0xaa21,	// (0x00085f06) main_camera_pane

0xaa21,	// (0x00085f06) main_chi_dic_pane

0xb271,	// (0x00086756) main_clock_pane

0xa522,	// (0x00085a07) main_fmradio_pane

0xaa21,	// (0x00085f06) main_graph_messa_pane

0xa522,	// (0x00085a07) main_help_pane

0xa84e,	// (0x00085d33) main_im_pane

0xa77d,	// (0x00085c62) main_image_pane_ParamLimits

0xa77d,	// (0x00085c62) main_image_pane

0xa522,	// (0x00085a07) main_location2_pane

0xaa21,	// (0x00085f06) main_location_pane

0xa77d,	// (0x00085c62) main_messa_pane

0xa522,	// (0x00085a07) main_mp2_pane

0xaa21,	// (0x00085f06) main_mp_pane

0xa522,	// (0x00085a07) main_msg_pane

0xa522,	// (0x00085a07) main_mup_eq_pane

0xa522,	// (0x00085a07) main_mup_pane

0xa84e,	// (0x00085d33) main_notes_pane

0xa522,	// (0x00085a07) main_pec_pane

0xa522,	// (0x00085a07) main_phob_pane

0xa522,	// (0x00085a07) main_pinb_pane

0xa522,	// (0x00085a07) main_postcard_pane

0xa522,	// (0x00085a07) main_qdial_pane

0xaa21,	// (0x00085f06) main_skin_pane

0xa522,	// (0x00085a07) main_smil2_pane

0xaa21,	// (0x00085f06) main_smil_pane

0xaa21,	// (0x00085f06) main_video_pane

0xaa21,	// (0x00085f06) main_video_tele_pane

0xa77d,	// (0x00085c62) main_viewer_pane_ParamLimits

0xa77d,	// (0x00085c62) main_viewer_pane

0xaa21,	// (0x00085f06) main_vorec_pane

0x518b,	// (0x00080670) popup_blid_sat_info_window_ParamLimits

0x518b,	// (0x00080670) popup_blid_sat_info_window

0x51ab,	// (0x00080690) popup_dyc_status_message_window_ParamLimits

0x51ab,	// (0x00080690) popup_dyc_status_message_window

0x51b9,	// (0x0008069e) popup_grid_large_graphic_window_ParamLimits

0x51b9,	// (0x0008069e) popup_grid_large_graphic_window

0x5248,	// (0x0008072d) popup_loc_request_window_ParamLimits

0x5248,	// (0x0008072d) popup_loc_request_window

0x5295,	// (0x0008077a) popup_wml_address_window_ParamLimits

0x5295,	// (0x0008077a) popup_wml_address_window

0x5025,	// (0x0008050a) call_muted_g1

0x4ce1,	// (0x000801c6) popup_call_audio_conf_window_ParamLimits

0x4ce1,	// (0x000801c6) popup_call_audio_conf_window

0x5035,	// (0x0008051a) popup_call_audio_first_window_ParamLimits

0x5035,	// (0x0008051a) popup_call_audio_first_window

0x5075,	// (0x0008055a) popup_call_audio_in_window_ParamLimits

0x5075,	// (0x0008055a) popup_call_audio_in_window

0x5099,	// (0x0008057e) popup_call_audio_out_window_ParamLimits

0x5099,	// (0x0008057e) popup_call_audio_out_window

0x50bb,	// (0x000805a0) popup_call_audio_second_window_ParamLimits

0x50bb,	// (0x000805a0) popup_call_audio_second_window

0x50eb,	// (0x000805d0) popup_call_audio_wait_window_ParamLimits

0x50eb,	// (0x000805d0) popup_call_audio_wait_window

0x510c,	// (0x000805f1) popup_number_entry_window_ParamLimits

0x510c,	// (0x000805f1) popup_number_entry_window

0xa10f,	// (0x000855f4) bg_popup_call_pane_cp05_ParamLimits

0xa10f,	// (0x000855f4) bg_popup_call_pane_cp05

0xa12f,	// (0x00085614) popup_number_entry_window_t1

0xa142,	// (0x00085627) popup_number_entry_window_t2

0xa154,	// (0x00085639) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0008a594) popup_number_entry_window_t

0xa166,	// (0x0008564b) text_title_cp2

0xa179,	// (0x0008565e) bg_popup_call_pane_cp_ParamLimits

0xa179,	// (0x0008565e) bg_popup_call_pane_cp

0xa187,	// (0x0008566c) call_thumbnail_pane

0xa18f,	// (0x00085674) popup_call_audio_in_window_g1_ParamLimits

0xa18f,	// (0x00085674) popup_call_audio_in_window_g1

0xa19b,	// (0x00085680) popup_call_audio_in_window_g2_ParamLimits

0xa19b,	// (0x00085680) popup_call_audio_in_window_g2

0xa1a7,	// (0x0008568c) popup_call_audio_in_window_g3_ParamLimits

0xa1a7,	// (0x0008568c) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0008a59d) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0008a59d) popup_call_audio_in_window_g

0xa1b3,	// (0x00085698) popup_call_audio_in_window_t1_ParamLimits

0xa1b3,	// (0x00085698) popup_call_audio_in_window_t1

0xa1cf,	// (0x000856b4) popup_call_audio_in_window_t2_ParamLimits

0xa1cf,	// (0x000856b4) popup_call_audio_in_window_t2

0xa1eb,	// (0x000856d0) popup_call_audio_in_window_t3_ParamLimits

0xa1eb,	// (0x000856d0) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0008a5a4) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0008a5a4) popup_call_audio_in_window_t

0xa179,	// (0x0008565e) bg_popup_call_pane_cp01_ParamLimits

0xa179,	// (0x0008565e) bg_popup_call_pane_cp01

0xa187,	// (0x0008566c) call_thumbnail_pane_cp02

0xa1fe,	// (0x000856e3) call_type_pane_cp022

0xa206,	// (0x000856eb) popup_call_audio_out_window_g1_ParamLimits

0xa206,	// (0x000856eb) popup_call_audio_out_window_g1

0xa218,	// (0x000856fd) popup_call_audio_out_window_g2_ParamLimits

0xa218,	// (0x000856fd) popup_call_audio_out_window_g2

0xa224,	// (0x00085709) popup_call_audio_out_window_g3_ParamLimits

0xa224,	// (0x00085709) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0008a5ab) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0008a5ab) popup_call_audio_out_window_g

0xa236,	// (0x0008571b) popup_call_audio_out_window_t1_ParamLimits

0xa236,	// (0x0008571b) popup_call_audio_out_window_t1

0xa24e,	// (0x00085733) popup_call_audio_out_window_t2_ParamLimits

0xa24e,	// (0x00085733) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0008a5b2) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0008a5b2) popup_call_audio_out_window_t

0xa263,	// (0x00085748) bg_popup_call_pane_ParamLimits

0xa263,	// (0x00085748) bg_popup_call_pane

0x2271,	// (0x0007d756) call_thumbnail_pane_cp_ParamLimits

0x2271,	// (0x0007d756) call_thumbnail_pane_cp

0xa2e7,	// (0x000857cc) call_type_pane_cp01_ParamLimits

0xa2e7,	// (0x000857cc) call_type_pane_cp01

0xa32b,	// (0x00085810) popup_call_audio_first_window_g1_ParamLimits

0xa32b,	// (0x00085810) popup_call_audio_first_window_g1

0xa377,	// (0x0008585c) popup_call_audio_first_window_g2_ParamLimits

0xa377,	// (0x0008585c) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0008a5b7) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0008a5b7) popup_call_audio_first_window_g

0xa3bb,	// (0x000858a0) popup_call_audio_first_window_t1_ParamLimits

0xa3bb,	// (0x000858a0) popup_call_audio_first_window_t1

0xa467,	// (0x0008594c) popup_call_audio_first_window_t4_ParamLimits

0xa467,	// (0x0008594c) popup_call_audio_first_window_t4

0xa4f3,	// (0x000859d8) popup_call_audio_first_window_t5_ParamLimits

0xa4f3,	// (0x000859d8) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0008a5bc) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0008a5bc) popup_call_audio_first_window_t

0xa522,	// (0x00085a07) bg_popup_call_pane_cp02

0xa52c,	// (0x00085a11) call_type_pane_cp023

0xa534,	// (0x00085a19) popup_call_audio_wait_window_g1

0xa53c,	// (0x00085a21) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0008a5c3) popup_call_audio_wait_window_g

0xa544,	// (0x00085a29) popup_call_audio_wait_window_t3

0xa552,	// (0x00085a37) bg_popup_call_pane_cp03_ParamLimits

0xa552,	// (0x00085a37) bg_popup_call_pane_cp03

0xa5b2,	// (0x00085a97) call_thumbnail_pane_cp011_ParamLimits

0xa5b2,	// (0x00085a97) call_thumbnail_pane_cp011

0xa5be,	// (0x00085aa3) call_type_pane_cp034_ParamLimits

0xa5be,	// (0x00085aa3) call_type_pane_cp034

0xa5fa,	// (0x00085adf) popup_call_audio_second_window_g1_ParamLimits

0xa5fa,	// (0x00085adf) popup_call_audio_second_window_g1

0xa636,	// (0x00085b1b) popup_call_audio_second_window_g2_ParamLimits

0xa636,	// (0x00085b1b) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0008a5c8) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0008a5c8) popup_call_audio_second_window_g

0xa672,	// (0x00085b57) popup_call_audio_second_window_t1_ParamLimits

0xa672,	// (0x00085b57) popup_call_audio_second_window_t1

0xa6f3,	// (0x00085bd8) popup_call_audio_second_window_t2_ParamLimits

0xa6f3,	// (0x00085bd8) popup_call_audio_second_window_t2

0xa729,	// (0x00085c0e) popup_call_audio_second_window_t3_ParamLimits

0xa729,	// (0x00085c0e) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0008a5cd) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0008a5cd) popup_call_audio_second_window_t

0xa522,	// (0x00085a07) bg_popup_call_pane_cp04

0xa75f,	// (0x00085c44) list_conf_pane

0xa767,	// (0x00085c4c) popup_call_audio_conf_window_t1

0xa775,	// (0x00085c5a) call_thumbnail_pane_g1

0xa77d,	// (0x00085c62) bg_pinb_pane_ParamLimits

0xa77d,	// (0x00085c62) bg_pinb_pane

0xa78b,	// (0x00085c70) find_pinb_pane

0xa794,	// (0x00085c79) listscroll_pinb_pane_ParamLimits

0xa794,	// (0x00085c79) listscroll_pinb_pane

0xa7a3,	// (0x00085c88) pinb_bg_pane_g1

0x2295,	// (0x0007d77a) pinb_bg_pane_g2

0x22a1,	// (0x0007d786) pinb_bg_pane_g3

0x22ad,	// (0x0007d792) pinb_bg_pane_g4

0x22b9,	// (0x0007d79e) pinb_bg_pane_g5

0x22c5,	// (0x0007d7aa) pinb_bg_pane_g6

0x22d0,	// (0x0007d7b5) pinb_bg_pane_g7

0x22db,	// (0x0007d7c0) pinb_bg_pane_g8

0x22e6,	// (0x0007d7cb) pinb_bg_pane_g9

0x22f0,	// (0x0007d7d5) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0008a5d4) pinb_bg_pane_g

0x230d,	// (0x0007d7f2) grid_pinb_pane

0x2318,	// (0x0007d7fd) list_pinb_pane

0x2323,	// (0x0007d808) scroll_pane_cp01_ParamLimits

0x2323,	// (0x0007d808) scroll_pane_cp01

0xa7ad,	// (0x00085c92) find_pinb_pane_g1_ParamLimits

0xa7ad,	// (0x00085c92) find_pinb_pane_g1

0xa7c5,	// (0x00085caa) find_pinb_pane_t1

0xa7d7,	// (0x00085cbc) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0008a5ee) find_pinb_pane_t

0xa7ec,	// (0x00085cd1) input_focus_pane_cp01_ParamLimits

0xa7ec,	// (0x00085cd1) input_focus_pane_cp01

0x2335,	// (0x0007d81a) cell_pinb_pane_ParamLimits

0x2335,	// (0x0007d81a) cell_pinb_pane

0x2360,	// (0x0007d845) cell_pinb_pane_g1_ParamLimits

0x2360,	// (0x0007d845) cell_pinb_pane_g1

0xa7f8,	// (0x00085cdd) cell_pinb_pane_g2_ParamLimits

0xa7f8,	// (0x00085cdd) cell_pinb_pane_g2

0xa804,	// (0x00085ce9) cell_pinb_pane_g3_ParamLimits

0xa804,	// (0x00085ce9) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0008a5f3) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0008a5f3) cell_pinb_pane_g

0xa522,	// (0x00085a07) grid_highlight_pane_cp01

0x2375,	// (0x0007d85a) list_pinb_item_pane_ParamLimits

0x2375,	// (0x0007d85a) list_pinb_item_pane

0xa522,	// (0x00085a07) list_highlight_pane_cp02

0x239e,	// (0x0007d883) list_pinb_item_pane_g1_ParamLimits

0x239e,	// (0x0007d883) list_pinb_item_pane_g1

0x23ab,	// (0x0007d890) list_pinb_item_pane_g2_ParamLimits

0x23ab,	// (0x0007d890) list_pinb_item_pane_g2

0x23b7,	// (0x0007d89c) list_pinb_item_pane_g3_ParamLimits

0x23b7,	// (0x0007d89c) list_pinb_item_pane_g3

0x23c8,	// (0x0007d8ad) list_pinb_item_pane_g4_ParamLimits

0x23c8,	// (0x0007d8ad) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0008a5fa) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0008a5fa) list_pinb_item_pane_g

0x23d4,	// (0x0007d8b9) list_pinb_item_pane_t1_ParamLimits

0x23d4,	// (0x0007d8b9) list_pinb_item_pane_t1

0x2405,	// (0x0007d8ea) calc_display_pane

0x2423,	// (0x0007d908) calc_paper_pane

0x243f,	// (0x0007d924) grid_calc_pane

0xa522,	// (0x00085a07) bg_list_pane_cp01

0x246b,	// (0x0007d950) clock_g1

0x2473,	// (0x0007d958) clock_g2

0x0001,

0xf11e,	// (0x0008a603) clock_g

0x247d,	// (0x0007d962) clock_t1_ParamLimits

0x247d,	// (0x0007d962) clock_t1

0x2492,	// (0x0007d977) clock_t2_ParamLimits

0x2492,	// (0x0007d977) clock_t2

0x24a4,	// (0x0007d989) clock_t3_ParamLimits

0x24a4,	// (0x0007d989) clock_t3

0x24b6,	// (0x0007d99b) clock_t4_ParamLimits

0x24b6,	// (0x0007d99b) clock_t4

0x24c8,	// (0x0007d9ad) clock_t5_ParamLimits

0x24c8,	// (0x0007d9ad) clock_t5

0x24dd,	// (0x0007d9c2) clock_t6_ParamLimits

0x24dd,	// (0x0007d9c2) clock_t6

0x24ef,	// (0x0007d9d4) clock_t7_ParamLimits

0x24ef,	// (0x0007d9d4) clock_t7

0x2501,	// (0x0007d9e6) clock_t8_ParamLimits

0x2501,	// (0x0007d9e6) clock_t8

0x2517,	// (0x0007d9fc) clock_t9_ParamLimits

0x2517,	// (0x0007d9fc) clock_t9

0x0008,

0xf123,	// (0x0008a608) clock_t_ParamLimits

0xf123,	// (0x0008a608) clock_t

0xa810,	// (0x00085cf5) popup_clock_analogue_window_cp02

0xa810,	// (0x00085cf5) popup_clock_digital_window_cp01

0xa818,	// (0x00085cfd) listscroll_help_pane

0xa522,	// (0x00085a07) phob_pre_status_pane

0xa822,	// (0x00085d07) grid_qdial_pane

0xa77d,	// (0x00085c62) listscroll_mce_pane

0xa77d,	// (0x00085c62) bg_notes_pane

0xa82c,	// (0x00085d11) list_notes_pane

0x252d,	// (0x0007da12) scroll_pane_cp06

0xa83a,	// (0x00085d1f) bg_calc_paper_pane

0x253c,	// (0x0007da21) list_calc_pane

0xa84e,	// (0x00085d33) bg_calc_display_pane

0x2556,	// (0x0007da3b) calc_display_pane_t1

0x256b,	// (0x0007da50) calc_display_pane_t2

0x2580,	// (0x0007da65) calc_display_pane_t3

0x0002,

0xf136,	// (0x0008a61b) calc_display_pane_t

0x2592,	// (0x0007da77) cell_calc_pane_ParamLimits

0x2592,	// (0x0007da77) cell_calc_pane

0xa85a,	// (0x00085d3f) bg_calc_paper_pane_g1

0xa866,	// (0x00085d4b) bg_calc_paper_pane_g2

0xa872,	// (0x00085d57) bg_calc_paper_pane_g3

0xa87e,	// (0x00085d63) bg_calc_paper_pane_g4

0xa88a,	// (0x00085d6f) bg_calc_paper_pane_g5

0x25bf,	// (0x0007daa4) bg_calc_paper_pane_g6

0x25d0,	// (0x0007dab5) bg_calc_paper_pane_g7

0x25e1,	// (0x0007dac6) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0008a622) bg_calc_paper_pane_g

0x25f2,	// (0x0007dad7) calc_bg_paper_pane_g9

0x2603,	// (0x0007dae8) list_calc_item_pane_ParamLimits

0x2603,	// (0x0007dae8) list_calc_item_pane

0xa896,	// (0x00085d7b) list_calc_item_pane_g1

0x2630,	// (0x0007db15) list_calc_item_pane_t1_ParamLimits

0x2630,	// (0x0007db15) list_calc_item_pane_t1

0x2642,	// (0x0007db27) list_calc_item_pane_t2_ParamLimits

0x2642,	// (0x0007db27) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0008a633) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0008a633) list_calc_item_pane_t

0xa8a3,	// (0x00085d88) cell_calc_pane_g1

0xa8ad,	// (0x00085d92) grid_highlight_pane_cp02

0x2672,	// (0x0007db57) bg_calc_display_pane_g1

0x267b,	// (0x0007db60) bg_calc_display_pane_g2

0x2685,	// (0x0007db6a) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0008a63d) bg_calc_display_pane_g

0x268e,	// (0x0007db73) cell_qdial_pane_ParamLimits

0x268e,	// (0x0007db73) cell_qdial_pane

0x26a2,	// (0x0007db87) cell_qdial_pane_g1_ParamLimits

0x26a2,	// (0x0007db87) cell_qdial_pane_g1

0x26af,	// (0x0007db94) cell_qdial_pane_g2_ParamLimits

0x26af,	// (0x0007db94) cell_qdial_pane_g2

0xa8dd,	// (0x00085dc2) cell_qdial_pane_g3_ParamLimits

0xa8dd,	// (0x00085dc2) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0008a644) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0008a644) cell_qdial_pane_g

0x26cc,	// (0x0007dbb1) cell_qdial_pane_t1_ParamLimits

0x26cc,	// (0x0007dbb1) cell_qdial_pane_t1

0x26e4,	// (0x0007dbc9) cell_qdial_pane_t2_ParamLimits

0x26e4,	// (0x0007dbc9) cell_qdial_pane_t2

0x26f7,	// (0x0007dbdc) cell_qdial_pane_t3_ParamLimits

0x26f7,	// (0x0007dbdc) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0008a64d) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0008a64d) cell_qdial_pane_t

0xa522,	// (0x00085a07) grid_highlight_pane_cp04

0xa8e9,	// (0x00085dce) thumbnail_qdial_pane_ParamLimits

0xa8e9,	// (0x00085dce) thumbnail_qdial_pane

0xa945,	// (0x00085e2a) list_help_pane

0xa94e,	// (0x00085e33) scroll_pane_cp02

0x270a,	// (0x0007dbef) help_list_pane_t1_ParamLimits

0x270a,	// (0x0007dbef) help_list_pane_t1

0x2741,	// (0x0007dc26) bg_notes_pane_g2

0x2749,	// (0x0007dc2e) bg_notes_pane_g3

0x2751,	// (0x0007dc36) notes_bg_pane_g1

0x2759,	// (0x0007dc3e) notes_bg_pane_g4

0x2761,	// (0x0007dc46) notes_bg_pane_g5

0x2769,	// (0x0007dc4e) notes_bg_pane_g6

0x2771,	// (0x0007dc56) notes_bg_pane_g7

0x2779,	// (0x0007dc5e) notes_bg_pane_g8

0x2781,	// (0x0007dc66) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0008a66b) notes_bg_pane_g

0x2789,	// (0x0007dc6e) list_notes_text_pane_ParamLimits

0x2789,	// (0x0007dc6e) list_notes_text_pane

0xa957,	// (0x00085e3c) list_notes_text_pane_g1

0x0c36,	// (0x0007c11b) list_notes_text_pane_t1

0x27b5,	// (0x0007dc9a) listscroll_cale_week_pane

0x27da,	// (0x0007dcbf) bg_cale_heading_pane

0xa97a,	// (0x00085e5f) bg_cale_pane_cp01

0x27fc,	// (0x0007dce1) cale_week_corner_pane

0x2816,	// (0x0007dcfb) cale_week_day_heading_pane

0x2838,	// (0x0007dd1d) cale_week_scroll_pane_g1

0x2855,	// (0x0007dd3a) cale_week_scroll_pane_g2

0x2868,	// (0x0007dd4d) cale_week_scroll_pane_g3

0x287b,	// (0x0007dd60) cale_week_scroll_pane_g4

0x288e,	// (0x0007dd73) cale_week_scroll_pane_g5

0x28a1,	// (0x0007dd86) cale_week_scroll_pane_g6

0x28b4,	// (0x0007dd99) cale_week_scroll_pane_g7

0x28c9,	// (0x0007ddae) cale_week_scroll_pane_g8

0x28de,	// (0x0007ddc3) cale_week_scroll_pane_g9

0x28f1,	// (0x0007ddd6) cale_week_scroll_pane_g10

0x2904,	// (0x0007dde9) cale_week_scroll_pane_g11

0x2917,	// (0x0007ddfc) cale_week_scroll_pane_g12

0x292e,	// (0x0007de13) cale_week_scroll_pane_g13

0x2949,	// (0x0007de2e) cale_week_scroll_pane_g14

0x2964,	// (0x0007de49) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0008a67a) cale_week_scroll_pane_g

0x2994,	// (0x0007de79) cale_week_time_pane

0x29a9,	// (0x0007de8e) grid_cale_week_pane

0xa9a9,	// (0x00085e8e) scroll_pane_cp08

0x29c8,	// (0x0007dead) cell_cale_week_pane_ParamLimits

0x29c8,	// (0x0007dead) cell_cale_week_pane

0x2a2a,	// (0x0007df0f) cale_week_day_heading_pane_t1

0x2a45,	// (0x0007df2a) cale_week_day_heading_pane_t2

0x2a60,	// (0x0007df45) cale_week_day_heading_pane_t3

0x2a7b,	// (0x0007df60) cale_week_day_heading_pane_t4

0x2a96,	// (0x0007df7b) cale_week_day_heading_pane_t5

0x2ab1,	// (0x0007df96) cale_week_day_heading_pane_t6

0x2acc,	// (0x0007dfb1) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0008a69b) cale_week_day_heading_pane_t

0xa9c6,	// (0x00085eab) bg_cale_side_pane

0x2ae7,	// (0x0007dfcc) cale_week_time_pane_t1

0x2b01,	// (0x0007dfe6) cale_week_time_pane_t2

0x2b1b,	// (0x0007e000) cale_week_time_pane_t3

0x2b35,	// (0x0007e01a) cale_week_time_pane_t4

0x2b4f,	// (0x0007e034) cale_week_time_pane_t5

0x2b69,	// (0x0007e04e) cale_week_time_pane_t6

0x2b89,	// (0x0007e06e) cale_week_time_pane_t7

0x2bab,	// (0x0007e090) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0008a6aa) cale_week_time_pane_t

0x2bcf,	// (0x0007e0b4) cell_cale_week_pane_g2

0x2bf3,	// (0x0007e0d8) cell_cale_week_pane_g3_ParamLimits

0x2bf3,	// (0x0007e0d8) cell_cale_week_pane_g3

0xa9d4,	// (0x00085eb9) grid_highlight_pane_cp07

0xa9dc,	// (0x00085ec1) listscroll_gms_pane

0xa9e6,	// (0x00085ecb) grid_gms_pane

0xa9ef,	// (0x00085ed4) listscroll_gms_pane_g1

0xa9f7,	// (0x00085edc) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0008a6bb) listscroll_gms_pane_g

0x2c0b,	// (0x0007e0f0) scroll_pane_cp010

0x2c16,	// (0x0007e0fb) cell_gms_pane_ParamLimits

0x2c16,	// (0x0007e0fb) cell_gms_pane

0x2c26,	// (0x0007e10b) cell_gms_pane_g1

0xa9ff,	// (0x00085ee4) cell_gms_pane_g2

0xaa07,	// (0x00085eec) cell_gms_pane_g3

0xaa10,	// (0x00085ef5) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0008a6c0) cell_gms_pane_g

0xaa19,	// (0x00085efe) grid_highlight_pane_cp09

0x4fcd,	// (0x000804b2) phob_pre_status_pane_g1

0x4fd5,	// (0x000804ba) phob_pre_status_pane_g2

0x4fdd,	// (0x000804c2) phob_pre_status_pane_g3

0x4fe5,	// (0x000804ca) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x0008aabe) phob_pre_status_pane_g

0x4ff5,	// (0x000804da) phob_pre_status_pane_t1

0x5005,	// (0x000804ea) phob_pre_status_pane_t2

0x5015,	// (0x000804fa) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x0008aac9) phob_pre_status_pane_t

0xaa21,	// (0x00085f06) bg_list_pane_cp05

0x2c36,	// (0x0007e11b) grid_vorec_pane

0x2c40,	// (0x0007e125) vorec_t1

0x2c4e,	// (0x0007e133) vorec_t2

0x2c5c,	// (0x0007e141) vorec_t3

0x2c6a,	// (0x0007e14f) vorec_t4

0xa0a9,	// (0x0008558e) vorec_t5

0xa0b7,	// (0x0008559c) vorec_t6

0x0004,

0xf1e4,	// (0x0008a6c9) vorec_t

0xa0c5,	// (0x000855aa) wait_bar_pane_cp01

0x2c86,	// (0x0007e16b) cell_vorec_pane_ParamLimits

0x2c86,	// (0x0007e16b) cell_vorec_pane

0x2c99,	// (0x0007e17e) cell_vorec_pane_g1

0xa522,	// (0x00085a07) grid_highlight_pane_cp05

0x2cb3,	// (0x0007e198) cams_zoom_pane

0x2cbf,	// (0x0007e1a4) image_vga_pane

0x2cce,	// (0x0007e1b3) main_camera_pane_g1

0x2cdc,	// (0x0007e1c1) main_camera_pane_g2

0x2ce8,	// (0x0007e1cd) main_camera_pane_g3

0x2cf4,	// (0x0007e1d9) main_camera_pane_g4

0x2d00,	// (0x0007e1e5) main_camera_pane_g5

0x2d0c,	// (0x0007e1f1) main_camera_pane_g6

0x2d18,	// (0x0007e1fd) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0008a6d4) main_camera_pane_g

0x2d24,	// (0x0007e209) main_camera_pane_t1

0x2d36,	// (0x0007e21b) main_camera_pane_t2

0x0001,

0xf200,	// (0x0008a6e5) main_camera_pane_t

0x2d57,	// (0x0007e23c) cams_zoom_pane_cp_ParamLimits

0x2d57,	// (0x0007e23c) cams_zoom_pane_cp

0x2d7b,	// (0x0007e260) image_cif_pane_ParamLimits

0x2d7b,	// (0x0007e260) image_cif_pane

0x2d99,	// (0x0007e27e) image_subqcif_pane

0x2da1,	// (0x0007e286) main_video_pane_g1_ParamLimits

0x2da1,	// (0x0007e286) main_video_pane_g1

0x2dc1,	// (0x0007e2a6) main_video_pane_g2_ParamLimits

0x2dc1,	// (0x0007e2a6) main_video_pane_g2

0x2df1,	// (0x0007e2d6) main_video_pane_g3_ParamLimits

0x2df1,	// (0x0007e2d6) main_video_pane_g3

0x2e1a,	// (0x0007e2ff) main_video_pane_g4_ParamLimits

0x2e1a,	// (0x0007e2ff) main_video_pane_g4

0x2e43,	// (0x0007e328) main_video_pane_g5_ParamLimits

0x2e43,	// (0x0007e328) main_video_pane_g5

0xaa35,	// (0x00085f1a) main_video_pane_g6_ParamLimits

0xaa35,	// (0x00085f1a) main_video_pane_g6

0x0006,

0xf205,	// (0x0008a6ea) main_video_pane_g_ParamLimits

0xf205,	// (0x0008a6ea) main_video_pane_g

0x2e65,	// (0x0007e34a) main_video_pane_t1_ParamLimits

0x2e65,	// (0x0007e34a) main_video_pane_t1

0xaa4f,	// (0x00085f34) cams_zoom_pane_g1

0xaa58,	// (0x00085f3d) cams_zoom_pane_g2

0xaa61,	// (0x00085f46) cams_zoom_pane_g3

0xaa6a,	// (0x00085f4f) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0008a6f9) cams_zoom_pane_g

0x2eaf,	// (0x0007e394) grid_cams_pane

0x2ebd,	// (0x0007e3a2) linegrid_cams_pane

0x2ecb,	// (0x0007e3b0) cell_cams_pane_ParamLimits

0x2ecb,	// (0x0007e3b0) cell_cams_pane

0xaa73,	// (0x00085f58) cams_burst_image_pane

0xaa7b,	// (0x00085f60) cell_cams_pane_g1

0xa522,	// (0x00085a07) grid_highlight_pane_cp03

0xa8a3,	// (0x00085d88) mp_bg_pane_g1

0xa522,	// (0x00085a07) bg_list_pane_cp03

0xc82d,	// (0x00087d12) bg_mp_pane

0xc835,	// (0x00087d1a) grid_mp_pane

0xc83d,	// (0x00087d22) media_player_g1

0xc845,	// (0x00087d2a) media_player_t1

0xc853,	// (0x00087d38) media_player_t2

0xc861,	// (0x00087d46) media_player_t3

0xc86f,	// (0x00087d54) media_player_t4

0xc87d,	// (0x00087d62) media_player_t5

0xc88b,	// (0x00087d70) media_player_t6

0xc899,	// (0x00087d7e) media_player_t7

0x0006,

0xf5c3,	// (0x0008aaa8) media_player_t

0xc8a7,	// (0x00087d8c) wait_bar_pane_cp02

0xf5a8,	// (0x0008aa8d) main_usb_pane_t

0x4fc4,	// (0x000804a9) cell_mp_pane

0xa8a3,	// (0x00085d88) cell_mp_pane_g1

0xa522,	// (0x00085a07) grid_highlight_pane_cp06

0xaa83,	// (0x00085f68) grid_skin_colour_pane

0xaa8b,	// (0x00085f70) list_highlight_pane_cp03

0x2ede,	// (0x0007e3c3) skin_g1

0xaa93,	// (0x00085f78) skin_t1

0xaaa2,	// (0x00085f87) skin_t2

0x0001,

0xf249,	// (0x0008a72e) skin_t

0x2ee8,	// (0x0007e3cd) cell_skin_colour_pane_ParamLimits

0x2ee8,	// (0x0007e3cd) cell_skin_colour_pane

0xaab0,	// (0x00085f95) cell_skin_colour_pane_g1

0x2f6c,	// (0x0007e451) call_video_g1_ParamLimits

0x2f6c,	// (0x0007e451) call_video_g1

0x2f7c,	// (0x0007e461) call_video_g2_ParamLimits

0x2f7c,	// (0x0007e461) call_video_g2

0x0001,

0xf24e,	// (0x0008a733) call_video_g_ParamLimits

0xf24e,	// (0x0008a733) call_video_g

0x2fd6,	// (0x0007e4bb) call_video_uplink_pane_cp1_ParamLimits

0x2fd6,	// (0x0007e4bb) call_video_uplink_pane_cp1

0xaac2,	// (0x00085fa7) call_video_uplink_pane_cp2

0x30a2,	// (0x0007e587) video_down_crop_pane_ParamLimits

0x30a2,	// (0x0007e587) video_down_crop_pane

0x3194,	// (0x0007e679) video_down_pane_ParamLimits

0x3194,	// (0x0007e679) video_down_pane

0xaaca,	// (0x00085faf) video_down_subqcif_pane_ParamLimits

0xaaca,	// (0x00085faf) video_down_subqcif_pane

0xab4f,	// (0x00086034) video_down_subqcif_pane_cp_ParamLimits

0xab4f,	// (0x00086034) video_down_subqcif_pane_cp

0xab75,	// (0x0008605a) im_reading_pane_ParamLimits

0xab75,	// (0x0008605a) im_reading_pane

0x32b4,	// (0x0007e799) im_writing_pane_ParamLimits

0x32b4,	// (0x0007e799) im_writing_pane

0x32d2,	// (0x0007e7b7) im_reading_pane_t1

0xab8f,	// (0x00086074) list_im_pane

0xaba0,	// (0x00086085) scroll_pane_cp07

0x332a,	// (0x0007e80f) im_writing_pane_t1_ParamLimits

0x332a,	// (0x0007e80f) im_writing_pane_t1

0xabb9,	// (0x0008609e) im_writing_pane_t2_ParamLimits

0xabb9,	// (0x0008609e) im_writing_pane_t2

0x0001,

0xf258,	// (0x0008a73d) im_writing_pane_t_ParamLimits

0xf258,	// (0x0008a73d) im_writing_pane_t

0xa522,	// (0x00085a07) input_focus_pane_cp04

0xa522,	// (0x00085a07) input_focus_pane_cp05

0x333c,	// (0x0007e821) list_im_single_pane_ParamLimits

0x333c,	// (0x0007e821) list_im_single_pane

0x3363,	// (0x0007e848) list_single_im_pane_t1

0x4f88,	// (0x0008046d) blid_accuracy_pane

0x4f90,	// (0x00080475) blid_compass_pane

0x4f9a,	// (0x0008047f) main_location_t1

0x4fa8,	// (0x0008048d) main_location_t2

0x4fb6,	// (0x0008049b) main_location_t3

0x0002,

0xf5d2,	// (0x0008aab7) main_location_t

0xa522,	// (0x00085a07) aid_levels_location

0xa8a3,	// (0x00085d88) blid_accuracy_pane_g1

0xa8a3,	// (0x00085d88) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0008a79f) blid_accuracy_pane_g

0xac01,	// (0x000860e6) wml_content_pane

0xac3f,	// (0x00086124) wml_button_pane_ParamLimits

0xac3f,	// (0x00086124) wml_button_pane

0x3372,	// (0x0007e857) wml_list_single_large_pane_ParamLimits

0x3372,	// (0x0007e857) wml_list_single_large_pane

0x339d,	// (0x0007e882) wml_list_single_medium_pane_ParamLimits

0x339d,	// (0x0007e882) wml_list_single_medium_pane

0x33cf,	// (0x0007e8b4) wml_list_single_small_pane_ParamLimits

0x33cf,	// (0x0007e8b4) wml_list_single_small_pane

0xac53,	// (0x00086138) wml_selection_box_pane_ParamLimits

0xac53,	// (0x00086138) wml_selection_box_pane

0xac66,	// (0x0008614b) wml_list_single_pane_t1

0xac75,	// (0x0008615a) wml_list_single_medium_pane_t1

0xac84,	// (0x00086169) wml_list_single_large_pane_t1

0xac93,	// (0x00086178) input_focus_pane_cp02_ParamLimits

0xac93,	// (0x00086178) input_focus_pane_cp02

0xaca6,	// (0x0008618b) wml_selection_box_pane_g1

0xacaf,	// (0x00086194) wml_selection_box_pane_t1_ParamLimits

0xacaf,	// (0x00086194) wml_selection_box_pane_t1

0xa77d,	// (0x00085c62) bg_wml_button_pane_ParamLimits

0xa77d,	// (0x00085c62) bg_wml_button_pane

0xacc7,	// (0x000861ac) wml_button_pane_g1

0xaccf,	// (0x000861b4) wml_button_pane_t1

0xacc7,	// (0x000861ac) wml_button_bg_pane_g1

0xacdf,	// (0x000861c4) wml_button_bg_pane_g2

0xace7,	// (0x000861cc) wml_button_bg_pane_g3

0xacef,	// (0x000861d4) wml_button_bg_pane_g4

0xacf7,	// (0x000861dc) wml_button_bg_pane_g5

0xacff,	// (0x000861e4) wml_button_bg_pane_g6

0xad07,	// (0x000861ec) wml_button_bg_pane_g7

0xad0f,	// (0x000861f4) wml_button_bg_pane_g8

0xad17,	// (0x000861fc) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0008a742) wml_button_bg_pane_g

0x340c,	// (0x0007e8f1) bg_list_pane_cp02

0xad1f,	// (0x00086204) mce_header_pane_ParamLimits

0xad1f,	// (0x00086204) mce_header_pane

0xad35,	// (0x0008621a) mce_icon_pane

0xad35,	// (0x0008621a) mce_image_pane

0xad3e,	// (0x00086223) mce_text_pane_ParamLimits

0xad3e,	// (0x00086223) mce_text_pane

0x3416,	// (0x0007e8fb) scroll_pane_cp03

0xac37,	// (0x0008611c) scroll_pane_cp04

0xad51,	// (0x00086236) scroll_pane_cp05_ParamLimits

0xad51,	// (0x00086236) scroll_pane_cp05

0x3420,	// (0x0007e905) mce_header_field_pane_ParamLimits

0x3420,	// (0x0007e905) mce_header_field_pane

0x3440,	// (0x0007e925) mce_header_field_pane_2_ParamLimits

0x3440,	// (0x0007e925) mce_header_field_pane_2

0x3456,	// (0x0007e93b) mce_header_field_pane_3

0x345e,	// (0x0007e943) list_single_mce_message_pane_ParamLimits

0x345e,	// (0x0007e943) list_single_mce_message_pane

0x348c,	// (0x0007e971) list_single_mce_smart_pane_ParamLimits

0x348c,	// (0x0007e971) list_single_mce_smart_pane

0xad5d,	// (0x00086242) input_focus_pane_cp03

0xad66,	// (0x0008624b) list_header_data_pane

0x34c5,	// (0x0007e9aa) mce_header_field_pane_t1

0x34d3,	// (0x0007e9b8) list_single_mce_header_pane_ParamLimits

0x34d3,	// (0x0007e9b8) list_single_mce_header_pane

0xad6e,	// (0x00086253) list_single_mce_header_pane_t1

0xad7d,	// (0x00086262) list_single_mce_message_pane_g1

0xad85,	// (0x0008626a) list_single_mce_message_pane_t1

0x3529,	// (0x0007ea0e) bg_cale_heading_pane_cp01_ParamLimits

0x3529,	// (0x0007ea0e) bg_cale_heading_pane_cp01

0xad93,	// (0x00086278) bg_cale_pane_cp02_ParamLimits

0xad93,	// (0x00086278) bg_cale_pane_cp02

0x3577,	// (0x0007ea5c) cale_month_corner_pane

0x3596,	// (0x0007ea7b) cale_month_day_heading_pane_ParamLimits

0x3596,	// (0x0007ea7b) cale_month_day_heading_pane

0x35fc,	// (0x0007eae1) cale_month_pane_g1_ParamLimits

0x35fc,	// (0x0007eae1) cale_month_pane_g1

0x363f,	// (0x0007eb24) cale_month_pane_g2_ParamLimits

0x363f,	// (0x0007eb24) cale_month_pane_g2

0x3679,	// (0x0007eb5e) cale_month_pane_g3_ParamLimits

0x3679,	// (0x0007eb5e) cale_month_pane_g3

0x36c9,	// (0x0007ebae) cale_month_pane_g4_ParamLimits

0x36c9,	// (0x0007ebae) cale_month_pane_g4

0x3719,	// (0x0007ebfe) cale_month_pane_g5_ParamLimits

0x3719,	// (0x0007ebfe) cale_month_pane_g5

0x3769,	// (0x0007ec4e) cale_month_pane_g6_ParamLimits

0x3769,	// (0x0007ec4e) cale_month_pane_g6

0x37b9,	// (0x0007ec9e) cale_month_pane_g7_ParamLimits

0x37b9,	// (0x0007ec9e) cale_month_pane_g7

0x3821,	// (0x0007ed06) cale_month_pane_g8_ParamLimits

0x3821,	// (0x0007ed06) cale_month_pane_g8

0x3889,	// (0x0007ed6e) cale_month_pane_g9_ParamLimits

0x3889,	// (0x0007ed6e) cale_month_pane_g9

0x38e7,	// (0x0007edcc) cale_month_pane_g10_ParamLimits

0x38e7,	// (0x0007edcc) cale_month_pane_g10

0x3945,	// (0x0007ee2a) cale_month_pane_g11_ParamLimits

0x3945,	// (0x0007ee2a) cale_month_pane_g11

0x3999,	// (0x0007ee7e) cale_month_pane_g12_ParamLimits

0x3999,	// (0x0007ee7e) cale_month_pane_g12

0x39ef,	// (0x0007eed4) cale_month_pane_g13_ParamLimits

0x39ef,	// (0x0007eed4) cale_month_pane_g13

0x000c,

0xf270,	// (0x0008a755) cale_month_pane_g_ParamLimits

0xf270,	// (0x0008a755) cale_month_pane_g

0x3a45,	// (0x0007ef2a) cale_month_week_pane

0x3a69,	// (0x0007ef4e) grid_cale_month_pane_ParamLimits

0x3a69,	// (0x0007ef4e) grid_cale_month_pane

0x3ac6,	// (0x0007efab) cale_month_day_heading_pane_t1

0x3b4c,	// (0x0007f031) cale_month_day_heading_pane_t2

0x3bc5,	// (0x0007f0aa) cale_month_day_heading_pane_t3

0x3c3e,	// (0x0007f123) cale_month_day_heading_pane_t4

0x3cb7,	// (0x0007f19c) cale_month_day_heading_pane_t5

0x3d30,	// (0x0007f215) cale_month_day_heading_pane_t6

0x3da9,	// (0x0007f28e) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0008a770) cale_month_day_heading_pane_t

0xa9c6,	// (0x00085eab) bg_cale_side_pane_cp01

0x3e3a,	// (0x0007f31f) cale_month_week_pane_t1

0x3e53,	// (0x0007f338) cale_month_week_pane_t2

0x3e6c,	// (0x0007f351) cale_month_week_pane_t3

0x3e85,	// (0x0007f36a) cale_month_week_pane_t4

0x3ea0,	// (0x0007f385) cale_month_week_pane_t5

0x3ec1,	// (0x0007f3a6) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0008a77f) cale_month_week_pane_t

0x3ee2,	// (0x0007f3c7) cell_cale_month_pane_ParamLimits

0x3ee2,	// (0x0007f3c7) cell_cale_month_pane

0x4008,	// (0x0007f4ed) cell_cale_month_pane_g1

0x4014,	// (0x0007f4f9) cell_cale_month_pane_t1_ParamLimits

0x4014,	// (0x0007f4f9) cell_cale_month_pane_t1

0xa9d4,	// (0x00085eb9) grid_highlight_pane_cp08

0xa8a3,	// (0x00085d88) main_smil_g1

0x4040,	// (0x0007f525) smil_status_pane

0xadd2,	// (0x000862b7) smil_text_pane

0xc70d,	// (0x00087bf2) bg_popup_call3_rect_pane_g8

0xc715,	// (0x00087bfa) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0008aa38) bg_popup_call3_rect_pane_g

0xc9af,	// (0x00087e94) smil_status_volume_pane_g1

0xaddc,	// (0x000862c1) smil_status_pane_t1

0x53b1,	// (0x00080896) volume_smil_pane

0xadf3,	// (0x000862d8) list_smil_text_pane

0x4053,	// (0x0007f538) scroll_pane_cp011

0x405e,	// (0x0007f543) smil_text_list_pane_t1_ParamLimits

0x405e,	// (0x0007f543) smil_text_list_pane_t1

0x40eb,	// (0x0007f5d0) aid_volume_smil_ParamLimits

0x40eb,	// (0x0007f5d0) aid_volume_smil

0xa8a3,	// (0x00085d88) smil_volume_pane_g1

0xa8a3,	// (0x00085d88) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0008a79f) smil_volume_pane_g

0x27b5,	// (0x0007dc9a) listscroll_cale_day_pane

0xadfd,	// (0x000862e2) bg_cale_pane

0xae15,	// (0x000862fa) list_cale_pane

0xae38,	// (0x0008631d) scroll_pane_cp09

0xae49,	// (0x0008632e) cale_bg_pane_g1

0xae51,	// (0x00086336) cale_bg_pane_g2

0xae59,	// (0x0008633e) cale_bg_pane_g3

0xae61,	// (0x00086346) cale_bg_pane_g4

0xae69,	// (0x0008634e) cale_bg_pane_g5

0xae71,	// (0x00086356) cale_bg_pane_g6

0xae79,	// (0x0008635e) cale_bg_pane_g7

0xae81,	// (0x00086366) cale_bg_pane_g8

0xae89,	// (0x0008636e) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0008a7a4) cale_bg_pane_g

0x4115,	// (0x0007f5fa) list_cale_time_pane_ParamLimits

0x4115,	// (0x0007f5fa) list_cale_time_pane

0xae91,	// (0x00086376) list_cale_time_pane_g1_ParamLimits

0xae91,	// (0x00086376) list_cale_time_pane_g1

0xae9d,	// (0x00086382) list_cale_time_pane_g2_ParamLimits

0xae9d,	// (0x00086382) list_cale_time_pane_g2

0x413d,	// (0x0007f622) list_cale_time_pane_g3_ParamLimits

0x413d,	// (0x0007f622) list_cale_time_pane_g3

0x414b,	// (0x0007f630) list_cale_time_pane_g4_ParamLimits

0x414b,	// (0x0007f630) list_cale_time_pane_g4

0x4159,	// (0x0007f63e) list_cale_time_pane_g5_ParamLimits

0x4159,	// (0x0007f63e) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0008a7b7) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0008a7b7) list_cale_time_pane_g

0xaeb7,	// (0x0008639c) list_cale_time_pane_t1_ParamLimits

0xaeb7,	// (0x0008639c) list_cale_time_pane_t1

0xaedf,	// (0x000863c4) list_cale_time_pane_t2_ParamLimits

0xaedf,	// (0x000863c4) list_cale_time_pane_t2

0x4438,	// (0x0007f91d) aid_blid_cardinal_pane

0x447a,	// (0x0007f95f) compass_pane_t4

0xaf07,	// (0x000863ec) list_cale_time_pane_t4_ParamLimits

0xaf07,	// (0x000863ec) list_cale_time_pane_t4

0x4488,	// (0x0007f96d) compass_pane_t5

0x4498,	// (0x0007f97d) compass_pane_t6

0x44a6,	// (0x0007f98b) compass_pane_t7

0xb399,	// (0x0008687e) navi_pane_cc_t1

0xb576,	// (0x00086a5b) aid_phob_thumbnail_center_pane

0x4a89,	// (0x0007ff6e) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0008a7c4) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0008a7c4) list_cale_time_pane_t

0xa179,	// (0x0008565e) bg_popup_window_pane_cp02_ParamLimits

0xa179,	// (0x0008565e) bg_popup_window_pane_cp02

0xaf2f,	// (0x00086414) heading_pane_cp01_ParamLimits

0xaf2f,	// (0x00086414) heading_pane_cp01

0xaf3b,	// (0x00086420) loc_req_pane_ParamLimits

0xaf3b,	// (0x00086420) loc_req_pane

0xaf4b,	// (0x00086430) loc_type_pane_ParamLimits

0xaf4b,	// (0x00086430) loc_type_pane

0xaf5d,	// (0x00086442) loc_type_pane_t1_ParamLimits

0xaf5d,	// (0x00086442) loc_type_pane_t1

0xaf6f,	// (0x00086454) loc_type_pane_t2_ParamLimits

0xaf6f,	// (0x00086454) loc_type_pane_t2

0xaf81,	// (0x00086466) loc_type_pane_t3_ParamLimits

0xaf81,	// (0x00086466) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0008a7cb) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0008a7cb) loc_type_pane_t

0xaf93,	// (0x00086478) list_loc_req_pane

0xaf9d,	// (0x00086482) scroll_pane_cp012

0x0d65,	// (0x0007c24a) list_single_loc_request_popup_menu_pane_ParamLimits

0x0d65,	// (0x0007c24a) list_single_loc_request_popup_menu_pane

0xafa8,	// (0x0008648d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafa8,	// (0x0008648d) list_single_loc_request_popup_menu_pane_g1

0xafb4,	// (0x00086499) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafb4,	// (0x00086499) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0008a7d2) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0008a7d2) list_single_loc_request_popup_menu_pane_g

0xafc0,	// (0x000864a5) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafc0,	// (0x000864a5) list_single_loc_request_popup_menu_pane_t1

0x4167,	// (0x0007f64c) bg_popup_window_pane_cp03_ParamLimits

0x4167,	// (0x0007f64c) bg_popup_window_pane_cp03

0x4175,	// (0x0007f65a) heading_loc_req_pane_ParamLimits

0x4175,	// (0x0007f65a) heading_loc_req_pane

0x4181,	// (0x0007f666) popup_dyc_status_message_window_g1_ParamLimits

0x4181,	// (0x0007f666) popup_dyc_status_message_window_g1

0x418d,	// (0x0007f672) popup_dyc_status_message_window_t1_ParamLimits

0x418d,	// (0x0007f672) popup_dyc_status_message_window_t1

0x419f,	// (0x0007f684) popup_dyc_status_message_window_t2_ParamLimits

0x419f,	// (0x0007f684) popup_dyc_status_message_window_t2

0x41b1,	// (0x0007f696) popup_dyc_status_message_window_t3_ParamLimits

0x41b1,	// (0x0007f696) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0008a7d7) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0008a7d7) popup_dyc_status_message_window_t

0xa522,	// (0x00085a07) bg_heading_pane_cp01

0xafd6,	// (0x000864bb) heading_loc_req_pane_g1

0xafde,	// (0x000864c3) heading_loc_req_pane_g2

0xafe6,	// (0x000864cb) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0008a7de) heading_loc_req_pane_g

0xafee,	// (0x000864d3) heading_loc_req_pane_t1

0xaffd,	// (0x000864e2) bg_popup_sub_pane_cp01_ParamLimits

0xaffd,	// (0x000864e2) bg_popup_sub_pane_cp01

0xb00b,	// (0x000864f0) popup_cale_events_window_g1_ParamLimits

0xb00b,	// (0x000864f0) popup_cale_events_window_g1

0xb037,	// (0x0008651c) popup_cale_events_window_g2_ParamLimits

0xb037,	// (0x0008651c) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0008a812) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0008a812) popup_cale_events_window_g

0xb057,	// (0x0008653c) popup_cale_events_window_t1_ParamLimits

0xb057,	// (0x0008653c) popup_cale_events_window_t1

0xb069,	// (0x0008654e) popup_cale_events_window_t2_ParamLimits

0xb069,	// (0x0008654e) popup_cale_events_window_t2

0xb0a7,	// (0x0008658c) popup_cale_events_window_t3_ParamLimits

0xb0a7,	// (0x0008658c) popup_cale_events_window_t3

0xb0e1,	// (0x000865c6) popup_cale_events_window_t4_ParamLimits

0xb0e1,	// (0x000865c6) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0008a817) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0008a817) popup_cale_events_window_t

0x41db,	// (0x0007f6c0) call_type_pane

0xb2a5,	// (0x0008678a) popup_call_status_window_g1

0x41e7,	// (0x0007f6cc) popup_call_status_window_g2

0x41f3,	// (0x0007f6d8) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0008a820) popup_call_status_window_g

0xb117,	// (0x000865fc) call_type_pane_g1

0xb120,	// (0x00086605) call_type_pane_g2

0x0001,

0xf342,	// (0x0008a827) call_type_pane_g

0xa522,	// (0x00085a07) bg_popup_sub_pane_cp02

0xb129,	// (0x0008660e) listscroll_popup_wml_pane

0xb131,	// (0x00086616) list_wml_pane

0xb13b,	// (0x00086620) scroll_pane_cp013

0xb146,	// (0x0008662b) list_single_graphic_popup_wml_pane_ParamLimits

0xb146,	// (0x0008662b) list_single_graphic_popup_wml_pane

0xa8a3,	// (0x00085d88) list_single_graphic_popup_wml_pane_g1

0xb15a,	// (0x0008663f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0008a82c) list_single_graphic_popup_wml_pane_g

0xb162,	// (0x00086647) list_single_graphic_popup_wml_pane_t1

0xb178,	// (0x0008665d) aid_call_pane

0xa775,	// (0x00085c5a) popup_clock_analogue_window_g1

0xa775,	// (0x00085c5a) popup_clock_analogue_window_g2

0x41ff,	// (0x0007f6e4) popup_clock_analogue_window_g3

0x41ff,	// (0x0007f6e4) popup_clock_analogue_window_g4

0xa8a3,	// (0x00085d88) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0008a831) popup_clock_analogue_window_g

0x4207,	// (0x0007f6ec) popup_clock_analogue_window_t1

0x4215,	// (0x0007f6fa) clock_digital_number_pane_ParamLimits

0x4215,	// (0x0007f6fa) clock_digital_number_pane

0x4221,	// (0x0007f706) clock_digital_number_pane_cp02_ParamLimits

0x4221,	// (0x0007f706) clock_digital_number_pane_cp02

0x422d,	// (0x0007f712) clock_digital_number_pane_cp03_ParamLimits

0x422d,	// (0x0007f712) clock_digital_number_pane_cp03

0x4239,	// (0x0007f71e) clock_digital_number_pane_cp04_ParamLimits

0x4239,	// (0x0007f71e) clock_digital_number_pane_cp04

0x4245,	// (0x0007f72a) clock_digital_separator_pane_ParamLimits

0x4245,	// (0x0007f72a) clock_digital_separator_pane

0x4251,	// (0x0007f736) popup_clock_digital_window_t1

0xa8a3,	// (0x00085d88) clock_digital_number_pane_g1

0xa8a3,	// (0x00085d88) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0008a79f) clock_digital_number_pane_g

0xa8a3,	// (0x00085d88) clock_digital_separator_pane_g1

0xa8a3,	// (0x00085d88) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0008a79f) clock_digital_separator_pane_g

0xa522,	// (0x00085a07) bg_popup_window_pane_cp04

0xb180,	// (0x00086665) heading_pane_cp03

0xb188,	// (0x0008666d) listscroll_popup_gms_pane

0xb190,	// (0x00086675) grid_large_graphic_popup_pane

0xb19a,	// (0x0008667f) listscroll_popup_gms_pane_g1

0xb1a2,	// (0x00086687) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0008a83c) listscroll_popup_gms_pane_g

0xac37,	// (0x0008611c) scroll_pane_cp014

0x426e,	// (0x0007f753) cell_large_graphic_popup_pane_ParamLimits

0x426e,	// (0x0007f753) cell_large_graphic_popup_pane

0x4286,	// (0x0007f76b) cell_large_graphic_popup_pane_g1_ParamLimits

0x4286,	// (0x0007f76b) cell_large_graphic_popup_pane_g1

0xb1aa,	// (0x0008668f) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1aa,	// (0x0008668f) cell_large_graphic_popup_pane_g2

0xb1b6,	// (0x0008669b) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1b6,	// (0x0008669b) cell_large_graphic_popup_pane_g3

0xb1c3,	// (0x000866a8) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1c3,	// (0x000866a8) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0008a841) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0008a841) cell_large_graphic_popup_pane_g

0xb1d3,	// (0x000866b8) grid_highlight_pane_cp010

0xa8a3,	// (0x00085d88) bg_popup_call_pane_g1

0xb1dd,	// (0x000866c2) list_single_graphic_popup_conf_pane_ParamLimits

0xb1dd,	// (0x000866c2) list_single_graphic_popup_conf_pane

0xb1f0,	// (0x000866d5) list_highlight_pane_cp01

0xb1f9,	// (0x000866de) list_single_graphic_popup_conf_pane_g1

0xb201,	// (0x000866e6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0008a84a) list_single_graphic_popup_conf_pane_g

0xb209,	// (0x000866ee) list_single_graphic_popup_conf_pane_t1

0xb217,	// (0x000866fc) linegrid_cams_pane_g1

0x4292,	// (0x0007f777) linegrid_cams_pane_g2

0xaa07,	// (0x00085eec) linegrid_cams_pane_g3

0xb220,	// (0x00086705) linegrid_cams_pane_g4

0x429b,	// (0x0007f780) linegrid_cams_pane_g5

0x42a4,	// (0x0007f789) linegrid_cams_pane_g6

0xaa10,	// (0x00085ef5) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0008a84f) linegrid_cams_pane_g

0xb229,	// (0x0008670e) popup_clock_analogue_window

0xb229,	// (0x0008670e) popup_clock_digital_window

0xa522,	// (0x00085a07) popup_phob_thumbnail_window

0xa8a3,	// (0x00085d88) call_video_uplink_pane_g1

0xb232,	// (0x00086717) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0008a85e) call_video_uplink_pane_g

0xb23a,	// (0x0008671f) video_uplink_pane

0xb242,	// (0x00086727) mce_image_pane_g1

0x42ad,	// (0x0007f792) mce_image_pane_g2

0x42b5,	// (0x0007f79a) mce_image_pane_g3

0x42bd,	// (0x0007f7a2) mce_image_pane_g4

0x42c5,	// (0x0007f7aa) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0008a863) mce_image_pane_g

0xb24c,	// (0x00086731) control_top_pane_stacon_cp01_ParamLimits

0xb24c,	// (0x00086731) control_top_pane_stacon_cp01

0xb260,	// (0x00086745) uni_indicator_pane_stacon_cp01_ParamLimits

0xb260,	// (0x00086745) uni_indicator_pane_stacon_cp01

0xb271,	// (0x00086756) bg_popup_sub_pane_cp03

0x42cd,	// (0x0007f7b2) chi_dic_find_pane

0x42d5,	// (0x0007f7ba) listscroll_chi_dic_pane

0x42de,	// (0x0007f7c3) main_pane_chidic_g1

0x42f1,	// (0x0007f7d6) chi_dic_find_pane_t1

0xb27b,	// (0x00086760) find_chidic_pane

0xb284,	// (0x00086769) chi_dic_list_pane_ParamLimits

0xb284,	// (0x00086769) chi_dic_list_pane

0xb295,	// (0x0008677a) scroll_pane_cp020

0x42ff,	// (0x0007f7e4) find_chidic_pane_t1

0xa522,	// (0x00085a07) input_focus_pane_cp06

0x430e,	// (0x0007f7f3) list_chi_dic_pane_ParamLimits

0x430e,	// (0x0007f7f3) list_chi_dic_pane

0x432b,	// (0x0007f810) list_chi_dic_pane_t1_ParamLimits

0x432b,	// (0x0007f810) list_chi_dic_pane_t1

0xa522,	// (0x00085a07) list_highlight_pane_cp020

0xb29d,	// (0x00086782) bg_cale_heading_pane_g1

0x433e,	// (0x0007f823) bg_cale_heading_pane_g2

0x4346,	// (0x0007f82b) bg_cale_heading_pane_g3

0x434e,	// (0x0007f833) bg_cale_heading_pane_g4

0x4358,	// (0x0007f83d) bg_cale_heading_pane_g5

0x4362,	// (0x0007f847) bg_cale_heading_pane_g6

0x436a,	// (0x0007f84f) bg_cale_heading_pane_g7

0x4372,	// (0x0007f857) bg_cale_heading_pane_g8

0x437c,	// (0x0007f861) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0008a86e) bg_cale_heading_pane_g

0xb29d,	// (0x00086782) bg_cale_side_pane_g1

0x4386,	// (0x0007f86b) bg_cale_side_pane_g2

0x4390,	// (0x0007f875) bg_cale_side_pane_g3

0x439a,	// (0x0007f87f) bg_cale_side_pane_g4

0x43a4,	// (0x0007f889) bg_cale_side_pane_g5

0x43ae,	// (0x0007f893) bg_cale_side_pane_g6

0x43b8,	// (0x0007f89d) bg_cale_side_pane_g7

0x43c2,	// (0x0007f8a7) bg_cale_side_pane_g8

0x43ca,	// (0x0007f8af) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0008a881) bg_cale_side_pane_g

0x43d2,	// (0x0007f8b7) popup_call_status_window_ParamLimits

0x43d2,	// (0x0007f8b7) popup_call_status_window

0xb2b3,	// (0x00086798) stacon_top_pane

0xb2bb,	// (0x000867a0) status_pane_ParamLimits

0xb2bb,	// (0x000867a0) status_pane

0xb2d0,	// (0x000867b5) status_small_pane

0xb2d8,	// (0x000867bd) control_pane

0xa522,	// (0x00085a07) stacon_bottom_pane

0xb2e0,	// (0x000867c5) list_single_mce_smart_pane_t1_ParamLimits

0xb2e0,	// (0x000867c5) list_single_mce_smart_pane_t1

0xb2f3,	// (0x000867d8) list_single_mce_smart_pane_t2_ParamLimits

0xb2f3,	// (0x000867d8) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0008a894) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0008a894) list_single_mce_smart_pane_t

0x43de,	// (0x0007f8c3) compass_pane

0x43ea,	// (0x0007f8cf) main_location2_pane_t1

0x43fe,	// (0x0007f8e3) main_location2_pane_t2

0x4412,	// (0x0007f8f7) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0008a899) main_location2_pane_t

0xb312,	// (0x000867f7) compass_pane_g1_ParamLimits

0xb312,	// (0x000867f7) compass_pane_g1

0x445c,	// (0x0007f941) compass_pane_t1

0x446b,	// (0x0007f950) compass_pane_t2

0x0005,

0xf3bd,	// (0x0008a8a2) compass_pane_t

0x44b6,	// (0x0007f99b) text_secondary_cp61

0xb390,	// (0x00086875) navi_pane_cams_g5

0xb40c,	// (0x000868f1) navi_pane_im_t1

0xb41a,	// (0x000868ff) navi_pane_mp_g1_ParamLimits

0xb41a,	// (0x000868ff) navi_pane_mp_g1

0xb42e,	// (0x00086913) navi_pane_mp_g2_ParamLimits

0xb42e,	// (0x00086913) navi_pane_mp_g2

0xb43a,	// (0x0008691f) navi_pane_mp_g3_ParamLimits

0xb43a,	// (0x0008691f) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0008a8b6) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0008a8b6) navi_pane_mp_g

0xb446,	// (0x0008692b) navi_pane_mp_t1

0xb454,	// (0x00086939) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0008a8bd) navi_pane_mp_t

0xb4bf,	// (0x000869a4) navi_pane_vt_g1

0xb446,	// (0x0008692b) navi_pane_vt_t1

0xb4c7,	// (0x000869ac) navi_slider_pane

0xaa21,	// (0x00085f06) zooming_pane

0xb4d7,	// (0x000869bc) navi_slider_pane_g1

0x44f1,	// (0x0007f9d6) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0008a8c4) navi_slider_pane_g

0xb4fb,	// (0x000869e0) aid_levels_zoom

0xb503,	// (0x000869e8) zooming_pane_g1

0xb50b,	// (0x000869f0) zooming_pane_g2

0xb50b,	// (0x000869f0) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0008a8d3) zooming_pane_g

0xb513,	// (0x000869f8) level_10_zoom

0xb51c,	// (0x00086a01) level_11_zoom

0xb525,	// (0x00086a0a) level_1_zoom

0xb52e,	// (0x00086a13) level_2_zoom

0xb537,	// (0x00086a1c) level_3_zoom

0xb540,	// (0x00086a25) level_4_zoom

0xb549,	// (0x00086a2e) level_5_zoom

0xb552,	// (0x00086a37) level_6_zoom

0xb55b,	// (0x00086a40) level_7_zoom

0xb564,	// (0x00086a49) level_8_zoom

0xb56d,	// (0x00086a52) level_9_zoom

0xb57e,	// (0x00086a63) popup_phob_thumbnail_window_g1

0xb586,	// (0x00086a6b) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0008a8da) popup_phob_thumbnail_window_g

0xc8af,	// (0x00087d94) level_1_location

0xc8b7,	// (0x00087d9c) level_2_location

0xc8bf,	// (0x00087da4) level_3_location

0xc8c7,	// (0x00087dac) level_4_location

0xaa21,	// (0x00085f06) level_5_location

0x4503,	// (0x0007f9e8) mce_icon_pane_g1

0x450b,	// (0x0007f9f0) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0008a8df) mce_icon_pane_g

0x4513,	// (0x0007f9f8) main_mup_pane_g1_ParamLimits

0x4513,	// (0x0007f9f8) main_mup_pane_g1

0x452b,	// (0x0007fa10) main_mup_pane_g2_ParamLimits

0x452b,	// (0x0007fa10) main_mup_pane_g2

0x453f,	// (0x0007fa24) main_mup_pane_g3_ParamLimits

0x453f,	// (0x0007fa24) main_mup_pane_g3

0x4553,	// (0x0007fa38) main_mup_pane_g4_ParamLimits

0x4553,	// (0x0007fa38) main_mup_pane_g4

0x456f,	// (0x0007fa54) main_mup_pane_g5_ParamLimits

0x456f,	// (0x0007fa54) main_mup_pane_g5

0x4590,	// (0x0007fa75) main_mup_pane_g6_ParamLimits

0x4590,	// (0x0007fa75) main_mup_pane_g6

0x45ac,	// (0x0007fa91) main_mup_pane_g7_ParamLimits

0x45ac,	// (0x0007fa91) main_mup_pane_g7

0x45c8,	// (0x0007faad) main_mup_pane_g8_ParamLimits

0x45c8,	// (0x0007faad) main_mup_pane_g8

0x45e4,	// (0x0007fac9) main_mup_pane_g9_ParamLimits

0x45e4,	// (0x0007fac9) main_mup_pane_g9

0x4603,	// (0x0007fae8) main_mup_pane_g10_ParamLimits

0x4603,	// (0x0007fae8) main_mup_pane_g10

0x4622,	// (0x0007fb07) main_mup_pane_g11_ParamLimits

0x4622,	// (0x0007fb07) main_mup_pane_g11

0x463a,	// (0x0007fb1f) main_mup_pane_g12_ParamLimits

0x463a,	// (0x0007fb1f) main_mup_pane_g12

0x4648,	// (0x0007fb2d) main_mup_pane_g13_ParamLimits

0x4648,	// (0x0007fb2d) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0008a8e4) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0008a8e4) main_mup_pane_g

0x465e,	// (0x0007fb43) main_mup_pane_t1_ParamLimits

0x465e,	// (0x0007fb43) main_mup_pane_t1

0x467b,	// (0x0007fb60) main_mup_pane_t2_ParamLimits

0x467b,	// (0x0007fb60) main_mup_pane_t2

0x4695,	// (0x0007fb7a) main_mup_pane_t3_ParamLimits

0x4695,	// (0x0007fb7a) main_mup_pane_t3

0x46af,	// (0x0007fb94) main_mup_pane_t4_ParamLimits

0x46af,	// (0x0007fb94) main_mup_pane_t4

0x46c1,	// (0x0007fba6) main_mup_pane_t5_ParamLimits

0x46c1,	// (0x0007fba6) main_mup_pane_t5

0x46d3,	// (0x0007fbb8) main_mup_pane_t6_ParamLimits

0x46d3,	// (0x0007fbb8) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0008a8ff) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0008a8ff) main_mup_pane_t

0x46e9,	// (0x0007fbce) mup_progress_pane_ParamLimits

0x46e9,	// (0x0007fbce) mup_progress_pane

0x46f5,	// (0x0007fbda) mup_visualizer_pane_ParamLimits

0x46f5,	// (0x0007fbda) mup_visualizer_pane

0x4733,	// (0x0007fc18) mup_volume_pane_ParamLimits

0x4733,	// (0x0007fc18) mup_volume_pane

0xb2a5,	// (0x0008678a) mup_visualizer_pane_g1_ParamLimits

0xb2a5,	// (0x0008678a) mup_visualizer_pane_g1

0xb2a5,	// (0x0008678a) mup_visualizer_pane_g2_ParamLimits

0xb2a5,	// (0x0008678a) mup_visualizer_pane_g2

0xb312,	// (0x000867f7) mup_visualizer_pane_g3_ParamLimits

0xb312,	// (0x000867f7) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0008a90c) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0008a90c) mup_visualizer_pane_g

0xa8a3,	// (0x00085d88) mup_volume_pane_g1

0xb596,	// (0x00086a7b) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0008a913) mup_volume_pane_g

0xa8a3,	// (0x00085d88) mup_progress_pane_g1

0xb59f,	// (0x00086a84) mup_progress_pane_g2

0xb5a8,	// (0x00086a8d) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0008a918) mup_progress_pane_g

0xa522,	// (0x00085a07) bg_popup_window_pane_cp05

0xb5b1,	// (0x00086a96) heading_pane_cp02_ParamLimits

0xb5b1,	// (0x00086a96) heading_pane_cp02

0xb5cb,	// (0x00086ab0) list_popup_blid_pane

0xb5d3,	// (0x00086ab8) list_blid_sat_info_pane_ParamLimits

0xb5d3,	// (0x00086ab8) list_blid_sat_info_pane

0xb5e6,	// (0x00086acb) list_blid_sat_info_pane_g1

0xb5ee,	// (0x00086ad3) list_blid_sat_info_pane_t1

0x483e,	// (0x0007fd23) mup_equalizer_pane_ParamLimits

0x483e,	// (0x0007fd23) mup_equalizer_pane

0x485f,	// (0x0007fd44) mup_equalizer_pane_cp1_ParamLimits

0x485f,	// (0x0007fd44) mup_equalizer_pane_cp1

0x4880,	// (0x0007fd65) mup_equalizer_pane_cp2_ParamLimits

0x4880,	// (0x0007fd65) mup_equalizer_pane_cp2

0x48a1,	// (0x0007fd86) mup_equalizer_pane_cp3_ParamLimits

0x48a1,	// (0x0007fd86) mup_equalizer_pane_cp3

0x48c2,	// (0x0007fda7) mup_equalizer_pane_cp4_ParamLimits

0x48c2,	// (0x0007fda7) mup_equalizer_pane_cp4

0x48e3,	// (0x0007fdc8) mup_equalizer_pane_cp5

0x48f9,	// (0x0007fdde) mup_equalizer_pane_cp6

0x4911,	// (0x0007fdf6) mup_equalizer_pane_cp7

0xc78d,	// (0x00087c72) bg_popup_call_poc_act_pane_g9

0xc795,	// (0x00087c7a) bg_popup_call_poc_act_pane_g10

0xc79d,	// (0x00087c82) bg_popup_call_poc_act_pane_g11

0x000a,

0xa77d,	// (0x00085c62) mup_scale_pane

0xa8a3,	// (0x00085d88) mup_scale_pane_g1

0xb5fc,	// (0x00086ae1) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0008a934) mup_scale_pane_g

0xb620,	// (0x00086b05) msg_data_pane

0xb628,	// (0x00086b0d) scroll_pane_cp017

0x0e4e,	// (0x0007c333) bg_list_pane_cp04_ParamLimits

0x0e4e,	// (0x0007c333) bg_list_pane_cp04

0xb630,	// (0x00086b15) msg_data_pane_g1

0x493b,	// (0x0007fe20) msg_data_pane_g2

0x4943,	// (0x0007fe28) msg_data_pane_g3

0x494b,	// (0x0007fe30) msg_data_pane_g4

0x4953,	// (0x0007fe38) msg_data_pane_g5

0x495b,	// (0x0007fe40) msg_data_pane_g6

0x4963,	// (0x0007fe48) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0008a943) msg_data_pane_g

0x0e72,	// (0x0007c357) msg_text_pane_ParamLimits

0x0e72,	// (0x0007c357) msg_text_pane

0x496b,	// (0x0007fe50) qrid_highlight_pane_cp011_ParamLimits

0x496b,	// (0x0007fe50) qrid_highlight_pane_cp011

0xa522,	// (0x00085a07) msg_body_pane

0xa522,	// (0x00085a07) msg_header_pane

0xb641,	// (0x00086b26) input_focus_pane_cp07

0x0ece,	// (0x0007c3b3) msg_header_pane_t1_ParamLimits

0x0ece,	// (0x0007c3b3) msg_header_pane_t1

0x0ee0,	// (0x0007c3c5) msg_header_pane_t2_ParamLimits

0x0ee0,	// (0x0007c3c5) msg_header_pane_t2

0x0001,

0xf472,	// (0x0008a957) msg_header_pane_t_ParamLimits

0xf472,	// (0x0008a957) msg_header_pane_t

0xb656,	// (0x00086b3b) msg_body_pane_g1

0x0ef2,	// (0x0007c3d7) msg_body_pane_t1_ParamLimits

0x0ef2,	// (0x0007c3d7) msg_body_pane_t1

0x0f23,	// (0x0007c408) msg_body_pane_t2_ParamLimits

0x0f23,	// (0x0007c408) msg_body_pane_t2

0x0f35,	// (0x0007c41a) msg_body_pane_t3_ParamLimits

0x0f35,	// (0x0007c41a) msg_body_pane_t3

0x0002,

0xf477,	// (0x0008a95c) msg_body_pane_t_ParamLimits

0xf477,	// (0x0008a95c) msg_body_pane_t

0x49d9,	// (0x0007febe) main_viewer_pane_g1_ParamLimits

0x49d9,	// (0x0007febe) main_viewer_pane_g1

0x49e5,	// (0x0007feca) main_viewer_pane_g2_ParamLimits

0x49e5,	// (0x0007feca) main_viewer_pane_g2

0x49f1,	// (0x0007fed6) main_viewer_pane_g3_ParamLimits

0x49f1,	// (0x0007fed6) main_viewer_pane_g3

0x4a02,	// (0x0007fee7) main_viewer_pane_g4_ParamLimits

0x4a02,	// (0x0007fee7) main_viewer_pane_g4

0x4a13,	// (0x0007fef8) main_viewer_pane_g5_ParamLimits

0x4a13,	// (0x0007fef8) main_viewer_pane_g5

0x4a13,	// (0x0007fef8) main_viewer_pane_g7_ParamLimits

0x4a13,	// (0x0007fef8) main_viewer_pane_g7

0x4a25,	// (0x0007ff0a) main_viewer_pane_g8_ParamLimits

0x4a25,	// (0x0007ff0a) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0008a96c) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0008a96c) main_viewer_pane_g

0xb65e,	// (0x00086b43) viewer_content_pane_ParamLimits

0xb65e,	// (0x00086b43) viewer_content_pane

0x4a5d,	// (0x0007ff42) main_postcard_pane_g1_ParamLimits

0x4a5d,	// (0x0007ff42) main_postcard_pane_g1

0x4a6b,	// (0x0007ff50) main_postcard_pane_g2_ParamLimits

0x4a6b,	// (0x0007ff50) main_postcard_pane_g2

0x4a79,	// (0x0007ff5e) main_postcard_pane_g3_ParamLimits

0x4a79,	// (0x0007ff5e) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0008a97d) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0008a97d) main_postcard_pane_g

0x4a89,	// (0x0007ff6e) main_postcard_pane_g4

0xc99c,	// (0x00087e81) smil_status_volume_pane_g2

0x4ab5,	// (0x0007ff9a) postcard_pane_ParamLimits

0x4ab5,	// (0x0007ff9a) postcard_pane

0xb2a5,	// (0x0008678a) postcard_pane_g1_ParamLimits

0xb2a5,	// (0x0008678a) postcard_pane_g1

0x4ae7,	// (0x0007ffcc) postcard_pane_g2_ParamLimits

0x4ae7,	// (0x0007ffcc) postcard_pane_g2

0x4af3,	// (0x0007ffd8) postcard_pane_g3_ParamLimits

0x4af3,	// (0x0007ffd8) postcard_pane_g3

0xb66c,	// (0x00086b51) postcard_pane_g4_ParamLimits

0xb66c,	// (0x00086b51) postcard_pane_g4

0x4aff,	// (0x0007ffe4) postcard_pane_g5_ParamLimits

0x4aff,	// (0x0007ffe4) postcard_pane_g5

0x4b0b,	// (0x0007fff0) postcard_pane_g6_ParamLimits

0x4b0b,	// (0x0007fff0) postcard_pane_g6

0xb67a,	// (0x00086b5f) postcard_pane_g7_ParamLimits

0xb67a,	// (0x00086b5f) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0008a98a) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0008a98a) postcard_pane_g

0x4b17,	// (0x0007fffc) main_mp2_pane_g1_ParamLimits

0x4b17,	// (0x0007fffc) main_mp2_pane_g1

0x4b23,	// (0x00080008) main_mp2_pane_g2_ParamLimits

0x4b23,	// (0x00080008) main_mp2_pane_g2

0x4b2f,	// (0x00080014) main_mp2_pane_g3_ParamLimits

0x4b2f,	// (0x00080014) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0008a999) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0008a999) main_mp2_pane_g

0x4b3b,	// (0x00080020) main_mp2_pane_t1_ParamLimits

0x4b3b,	// (0x00080020) main_mp2_pane_t1

0x4b52,	// (0x00080037) main_mp2_pane_t2_ParamLimits

0x4b52,	// (0x00080037) main_mp2_pane_t2

0x4b64,	// (0x00080049) main_mp2_pane_t3_ParamLimits

0x4b64,	// (0x00080049) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0008a9a0) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0008a9a0) main_mp2_pane_t

0xb688,	// (0x00086b6d) pec_content_pane_ParamLimits

0xb688,	// (0x00086b6d) pec_content_pane

0xac37,	// (0x0008611c) scroll_pane_cp015

0xb69a,	// (0x00086b7f) pec_attribute_pane_ParamLimits

0xb69a,	// (0x00086b7f) pec_attribute_pane

0x4b76,	// (0x0008005b) pec_content_pane_g1_ParamLimits

0x4b76,	// (0x0008005b) pec_content_pane_g1

0xb6aa,	// (0x00086b8f) pec_content_pane_t1_ParamLimits

0xb6aa,	// (0x00086b8f) pec_content_pane_t1

0xb6bc,	// (0x00086ba1) pec_content_pane_t2_ParamLimits

0xb6bc,	// (0x00086ba1) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0008a9a7) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0008a9a7) pec_content_pane_t

0x4b82,	// (0x00080067) list_single_graphic_pane_cp01_ParamLimits

0x4b82,	// (0x00080067) list_single_graphic_pane_cp01

0xa77d,	// (0x00085c62) bg_popup_sub_pane_cp04

0xb6ce,	// (0x00086bb3) popup_mup_playback_window_g1

0xb6da,	// (0x00086bbf) popup_mup_playback_window_t1

0xb6ef,	// (0x00086bd4) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0008a9ac) popup_mup_playback_window_t

0xb726,	// (0x00086c0b) main_image_pane_g1_ParamLimits

0xb726,	// (0x00086c0b) main_image_pane_g1

0xb769,	// (0x00086c4e) scroll_pane_cp018_ParamLimits

0xb769,	// (0x00086c4e) scroll_pane_cp018

0xb781,	// (0x00086c66) scroll_pane_cp016_ParamLimits

0xb781,	// (0x00086c66) scroll_pane_cp016

0x4c1c,	// (0x00080101) smil2_image_pane_ParamLimits

0x4c1c,	// (0x00080101) smil2_image_pane

0x4c4c,	// (0x00080131) smil2_root_pane_ParamLimits

0x4c4c,	// (0x00080131) smil2_root_pane

0x4c78,	// (0x0008015d) smil2_text_pane_ParamLimits

0x4c78,	// (0x0008015d) smil2_text_pane

0xa522,	// (0x00085a07) bg_list_pane_cp06

0xb7bd,	// (0x00086ca2) grid_radio_pane

0xa522,	// (0x00085a07) bg_popup_window_pane_cp06

0xb7c5,	// (0x00086caa) main_fmradio_pane_t1

0xb180,	// (0x00086665) heading_pane_cp04

0xb7d3,	// (0x00086cb8) main_fmradio_pane_t2

0xc7e5,	// (0x00087cca) popup_cale_lunar_info_window_g1

0xb7e1,	// (0x00086cc6) main_fmradio_pane_t3

0xc7ed,	// (0x00087cd2) popup_cale_lunar_info_window_g2

0xb7ef,	// (0x00086cd4) main_fmradio_pane_t4

0x0001,

0xb7fd,	// (0x00086ce2) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x0008aa9a) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0008a9c1) main_fmradio_pane_t

0xb80b,	// (0x00086cf0) wait_bar_pane_cp03

0xb813,	// (0x00086cf8) cell_fmradio_pane_ParamLimits

0xb813,	// (0x00086cf8) cell_fmradio_pane

0xb67a,	// (0x00086b5f) cell_fmradio_pane_g1_ParamLimits

0xb67a,	// (0x00086b5f) cell_fmradio_pane_g1

0xa522,	// (0x00085a07) grid_highlight_pane_cp011

0xb826,	// (0x00086d0b) poc_content_pane_ParamLimits

0xb826,	// (0x00086d0b) poc_content_pane

0xb838,	// (0x00086d1d) scroll_pane_cp019

0x4cb8,	// (0x0008019d) popup_call_poc_act_window_ParamLimits

0x4cb8,	// (0x0008019d) popup_call_poc_act_window

0x4cc5,	// (0x000801aa) popup_call_poc_inact_window_ParamLimits

0x4cc5,	// (0x000801aa) popup_call_poc_inact_window

0xf579,	// (0x0008aa5e) bg_popup_call_poc_act_pane_g

0xc7a5,	// (0x00087c8a) bg_popup_call_poc_inact_pane_g1

0xc7ad,	// (0x00087c92) bg_popup_call_poc_inact_pane_g2

0xb840,	// (0x00086d25) popup_call_poc_act_window_g2

0xc7b5,	// (0x00087c9a) bg_popup_call_poc_inact_pane_g3

0xc735,	// (0x00087c1a) bg_popup_call_poc_inact_pane_g4

0xc7bd,	// (0x00087ca2) bg_popup_call_poc_inact_pane_g5

0xb848,	// (0x00086d2d) popup_call_poc_act_window_t1_ParamLimits

0xb848,	// (0x00086d2d) popup_call_poc_act_window_t1

0xb870,	// (0x00086d55) popup_call_poc_act_window_t2_ParamLimits

0xb870,	// (0x00086d55) popup_call_poc_act_window_t2

0xb898,	// (0x00086d7d) popup_call_poc_act_window_t3_ParamLimits

0xb898,	// (0x00086d7d) popup_call_poc_act_window_t3

0xb8c0,	// (0x00086da5) popup_call_poc_act_window_t4_ParamLimits

0xb8c0,	// (0x00086da5) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0008a9cc) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0008a9cc) popup_call_poc_act_window_t

0xc7c5,	// (0x00087caa) bg_popup_call_poc_inact_pane_g6

0xc7cd,	// (0x00087cb2) bg_popup_call_poc_inact_pane_g7

0xc7d5,	// (0x00087cba) bg_popup_call_poc_inact_pane_g8

0xb8d2,	// (0x00086db7) popup_call_poc_inact_window_g2

0xc7dd,	// (0x00087cc2) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x0008aa75) bg_popup_call_poc_inact_pane_g

0xb8da,	// (0x00086dbf) popup_call_poc_inact_window_t1_ParamLimits

0xb8da,	// (0x00086dbf) popup_call_poc_inact_window_t1

0xb8ef,	// (0x00086dd4) popup_call_poc_inact_window_t2_ParamLimits

0xb8ef,	// (0x00086dd4) popup_call_poc_inact_window_t2

0xb904,	// (0x00086de9) popup_call_poc_inact_window_t3_ParamLimits

0xb904,	// (0x00086de9) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0008a9d5) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0008a9d5) popup_call_poc_inact_window_t

0xc922,	// (0x00087e07) context_pane_ParamLimits

0x52fb,	// (0x000807e0) signal_pane_ParamLimits

0xaa21,	// (0x00085f06) main_call2_pane

0x526e,	// (0x00080753) popup_phob_thumbnail2_window_ParamLimits

0x526e,	// (0x00080753) popup_phob_thumbnail2_window

0x4987,	// (0x0007fe6c) aid_hotspot_pointer_arrow_pane

0x498f,	// (0x0007fe74) aid_hotspot_pointer_hand_pane

0x4fed,	// (0x000804d2) phob_pre_status_pane_g5

0x2cb3,	// (0x0007e198) cams_zoom_pane_ParamLimits

0x2cbf,	// (0x0007e1a4) image_vga_pane_ParamLimits

0x2cce,	// (0x0007e1b3) main_camera_pane_g1_ParamLimits

0x2cdc,	// (0x0007e1c1) main_camera_pane_g2_ParamLimits

0x2ce8,	// (0x0007e1cd) main_camera_pane_g3_ParamLimits

0x2cf4,	// (0x0007e1d9) main_camera_pane_g4_ParamLimits

0x2d00,	// (0x0007e1e5) main_camera_pane_g5_ParamLimits

0x2d0c,	// (0x0007e1f1) main_camera_pane_g6_ParamLimits

0x2d18,	// (0x0007e1fd) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0008a6d4) main_camera_pane_g_ParamLimits

0x2d24,	// (0x0007e209) main_camera_pane_t1_ParamLimits

0x2d36,	// (0x0007e21b) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0008a6e5) main_camera_pane_t_ParamLimits

0xa77d,	// (0x00085c62) bg_popup_preview_window_pane_cp01_ParamLimits

0xa77d,	// (0x00085c62) bg_popup_preview_window_pane_cp01

0xb919,	// (0x00086dfe) popup_phob_thumbnail2_window_g1_ParamLimits

0xb919,	// (0x00086dfe) popup_phob_thumbnail2_window_g1

0xa522,	// (0x00085a07) call2_cli_visual_pane

0x4ce1,	// (0x000801c6) popup_call2_audio_conf_window_ParamLimits

0x4ce1,	// (0x000801c6) popup_call2_audio_conf_window

0x4cf6,	// (0x000801db) popup_call2_audio_first_window_ParamLimits

0x4cf6,	// (0x000801db) popup_call2_audio_first_window

0x4d94,	// (0x00080279) popup_call2_audio_in_window_ParamLimits

0x4d94,	// (0x00080279) popup_call2_audio_in_window

0x4dd6,	// (0x000802bb) popup_call2_audio_out_window_ParamLimits

0x4dd6,	// (0x000802bb) popup_call2_audio_out_window

0x4e38,	// (0x0008031d) popup_call2_audio_second_window_ParamLimits

0x4e38,	// (0x0008031d) popup_call2_audio_second_window

0x4e96,	// (0x0008037b) popup_call2_audio_wait_window_ParamLimits

0x4e96,	// (0x0008037b) popup_call2_audio_wait_window

0xa522,	// (0x00085a07) bg_popup_call2_act_pane_cp03

0xa75f,	// (0x00085c44) list_conf_pane_cp

0xb925,	// (0x00086e0a) popup_call2_audio_conf_window_t1

0xb933,	// (0x00086e18) list_single_graphic_popup_conf2_pane_ParamLimits

0xb933,	// (0x00086e18) list_single_graphic_popup_conf2_pane

0xb1f0,	// (0x000866d5) list_highlight_pane_cp04

0xb946,	// (0x00086e2b) list_single_graphic_popup_conf2_pane_g1

0xb201,	// (0x000866e6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0008a9dc) list_single_graphic_popup_conf2_pane_g

0xb950,	// (0x00086e35) list_single_graphic_popup_conf2_pane_t1

0xb95e,	// (0x00086e43) bg_popup_call2_act_pane_cp01_ParamLimits

0xb95e,	// (0x00086e43) bg_popup_call2_act_pane_cp01

0xb9e8,	// (0x00086ecd) call_type_pane_cp05_ParamLimits

0xb9e8,	// (0x00086ecd) call_type_pane_cp05

0xba3c,	// (0x00086f21) popup_call2_audio_second_window_g1_ParamLimits

0xba3c,	// (0x00086f21) popup_call2_audio_second_window_g1

0xba90,	// (0x00086f75) popup_call2_audio_second_window_g2_ParamLimits

0xba90,	// (0x00086f75) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0008a9e1) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0008a9e1) popup_call2_audio_second_window_g

0xbaf5,	// (0x00086fda) popup_call2_audio_second_window_t1_ParamLimits

0xbaf5,	// (0x00086fda) popup_call2_audio_second_window_t1

0xbbb0,	// (0x00087095) popup_call2_audio_second_window_t2_ParamLimits

0xbbb0,	// (0x00087095) popup_call2_audio_second_window_t2

0xbc03,	// (0x000870e8) popup_call2_audio_second_window_t3_ParamLimits

0xbc03,	// (0x000870e8) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0008a9e8) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0008a9e8) popup_call2_audio_second_window_t

0xa522,	// (0x00085a07) bg_popup_call2_in_pane_cp02

0xa52c,	// (0x00085a11) call_type_pane_cp04

0xa534,	// (0x00085a19) popup_call2_audio_wait_window_g1

0xa53c,	// (0x00085a21) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0008a5c3) popup_call2_audio_wait_window_g

0xa544,	// (0x00085a29) popup_call2_audio_wait_window_t3

0xbcf6,	// (0x000871db) bg_popup_call2_act_pane_ParamLimits

0xbcf6,	// (0x000871db) bg_popup_call2_act_pane

0xbdb6,	// (0x0008729b) call_type_pane_cp03_ParamLimits

0xbdb6,	// (0x0008729b) call_type_pane_cp03

0xbe1a,	// (0x000872ff) popup_call2_audio_first_window_g1_ParamLimits

0xbe1a,	// (0x000872ff) popup_call2_audio_first_window_g1

0xbe8a,	// (0x0008736f) popup_call2_audio_first_window_g2_ParamLimits

0xbe8a,	// (0x0008736f) popup_call2_audio_first_window_g2

0xb2a5,	// (0x0008678a) popup_call2_audio_first_window_g3_ParamLimits

0xb2a5,	// (0x0008678a) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0008a9f1) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0008a9f1) popup_call2_audio_first_window_g

0xbf68,	// (0x0008744d) popup_call2_audio_first_window_t1_ParamLimits

0xbf68,	// (0x0008744d) popup_call2_audio_first_window_t1

0xc06b,	// (0x00087550) popup_call2_audio_first_window_t4_ParamLimits

0xc06b,	// (0x00087550) popup_call2_audio_first_window_t4

0xc14e,	// (0x00087633) popup_call2_audio_first_window_t5_ParamLimits

0xc14e,	// (0x00087633) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0008a9fc) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0008a9fc) popup_call2_audio_first_window_t

0xa775,	// (0x00085c5a) bg_popup_call2_act_pane_g1

0xc7f5,	// (0x00087cda) popup_cale_lunar_info_window_t1

0xc803,	// (0x00087ce8) popup_cale_lunar_info_window_t2

0xc811,	// (0x00087cf6) popup_cale_lunar_info_window_t3

0xa522,	// (0x00085a07) bg_popup_call2_bubble_pane

0xc24f,	// (0x00087734) bg_popup_call2_in_pane_cp01_ParamLimits

0xc24f,	// (0x00087734) bg_popup_call2_in_pane_cp01

0xa1fe,	// (0x000856e3) call_type_pane_cp02

0xc297,	// (0x0008777c) popup_call2_audio_out_window_g1_ParamLimits

0xc297,	// (0x0008777c) popup_call2_audio_out_window_g1

0xc2c3,	// (0x000877a8) popup_call2_audio_out_window_g2_ParamLimits

0xc2c3,	// (0x000877a8) popup_call2_audio_out_window_g2

0xc2eb,	// (0x000877d0) popup_call2_audio_out_window_g3_ParamLimits

0xc2eb,	// (0x000877d0) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0008aa05) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0008aa05) popup_call2_audio_out_window_g

0xc326,	// (0x0008780b) popup_call2_audio_out_window_t1_ParamLimits

0xc326,	// (0x0008780b) popup_call2_audio_out_window_t1

0xc385,	// (0x0008786a) popup_call2_audio_out_window_t2_ParamLimits

0xc385,	// (0x0008786a) popup_call2_audio_out_window_t2

0xc3d9,	// (0x000878be) popup_call2_audio_out_window_t3_ParamLimits

0xc3d9,	// (0x000878be) popup_call2_audio_out_window_t3

0xc3ef,	// (0x000878d4) popup_call2_audio_out_window_t4_ParamLimits

0xc3ef,	// (0x000878d4) popup_call2_audio_out_window_t4

0xc405,	// (0x000878ea) popup_call2_audio_out_window_t5_ParamLimits

0xc405,	// (0x000878ea) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0008aa0e) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0008aa0e) popup_call2_audio_out_window_t

0xc469,	// (0x0008794e) bg_popup_call2_in_pane_ParamLimits

0xc469,	// (0x0008794e) bg_popup_call2_in_pane

0xc4c5,	// (0x000879aa) popup_call2_audio_in_window_g1_ParamLimits

0xc4c5,	// (0x000879aa) popup_call2_audio_in_window_g1

0xc4fd,	// (0x000879e2) popup_call2_audio_in_window_g2_ParamLimits

0xc4fd,	// (0x000879e2) popup_call2_audio_in_window_g2

0xc535,	// (0x00087a1a) popup_call2_audio_in_window_g3_ParamLimits

0xc535,	// (0x00087a1a) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0008aa1b) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0008aa1b) popup_call2_audio_in_window_g

0xc58d,	// (0x00087a72) popup_call2_audio_in_window_t1_ParamLimits

0xc58d,	// (0x00087a72) popup_call2_audio_in_window_t1

0xc60d,	// (0x00087af2) popup_call2_audio_in_window_t2_ParamLimits

0xc60d,	// (0x00087af2) popup_call2_audio_in_window_t2

0xc68d,	// (0x00087b72) popup_call2_audio_in_window_t3_ParamLimits

0xc68d,	// (0x00087b72) popup_call2_audio_in_window_t3

0xc6a7,	// (0x00087b8c) popup_call2_audio_in_window_t4_ParamLimits

0xc6a7,	// (0x00087b8c) popup_call2_audio_in_window_t4

0xc6b9,	// (0x00087b9e) popup_call2_audio_in_window_t5_ParamLimits

0xc6b9,	// (0x00087b9e) popup_call2_audio_in_window_t5

0xc6cb,	// (0x00087bb0) popup_call2_audio_in_window_t6_ParamLimits

0xc6cb,	// (0x00087bb0) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0008aa24) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0008aa24) popup_call2_audio_in_window_t

0xa775,	// (0x00085c5a) bg_popup_call2_in_pane_g1

0xc81f,	// (0x00087d04) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x0008aa9f) popup_cale_lunar_info_window_t

0xa77d,	// (0x00085c62) bg_popup_call2_rect_pane_ParamLimits

0xa77d,	// (0x00085c62) bg_popup_call2_rect_pane

0xa522,	// (0x00085a07) call2_cli_visual_graphic_pane

0xa522,	// (0x00085a07) call2_cli_visual_text_pane

0x53a4,	// (0x00080889) smil_status_volume_pane_g3

0x0002,

0xa8a3,	// (0x00085d88) call2_cli_visual_graphic_pane_g1

0xa8a3,	// (0x00085d88) call2_cli_visual_graphic_pane_g2

0xa8a3,	// (0x00085d88) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0008aa31) call2_cli_visual_graphic_pane_g

0xc6dd,	// (0x00087bc2) bg_popup_call2_rect_pane_g1

0xa93d,	// (0x00085e22) bg_popup_call2_rect_pane_g2

0xc6e5,	// (0x00087bca) bg_popup_call2_rect_pane_g3

0xc6ed,	// (0x00087bd2) bg_popup_call2_rect_pane_g4

0xc6f5,	// (0x00087bda) bg_popup_call2_rect_pane_g5

0xc6fd,	// (0x00087be2) bg_popup_call2_rect_pane_g6

0xc705,	// (0x00087bea) bg_popup_call2_rect_pane_g7

0xc70d,	// (0x00087bf2) bg_popup_call2_rect_pane_g8

0xc715,	// (0x00087bfa) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0008aa38) bg_popup_call2_rect_pane_g

0xc71d,	// (0x00087c02) bg_popup_call2_bubble_pane_g1

0xc725,	// (0x00087c0a) bg_popup_call2_bubble_pane_g2

0xc72d,	// (0x00087c12) bg_popup_call2_bubble_pane_g3

0xc735,	// (0x00087c1a) bg_popup_call2_bubble_pane_g4

0xc73d,	// (0x00087c22) bg_popup_call2_bubble_pane_g5

0xc745,	// (0x00087c2a) bg_popup_call2_bubble_pane_g6

0xc74d,	// (0x00087c32) bg_popup_call2_bubble_pane_g7

0xc755,	// (0x00087c3a) bg_popup_call2_bubble_pane_g8

0xc75d,	// (0x00087c42) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0008aa4b) bg_popup_call2_bubble_pane_g

0x27c5,	// (0x0007dcaa) aid_cale_week_size_cell_pane

0x2d48,	// (0x0007e22d) aid_cams_cif_uncrop_pane_ParamLimits

0x2d48,	// (0x0007e22d) aid_cams_cif_uncrop_pane

0x2ea3,	// (0x0007e388) aid_cams_size_cell_ParamLimits

0x2ea3,	// (0x0007e388) aid_cams_size_cell

0x2eaf,	// (0x0007e394) grid_cams_pane_ParamLimits

0x2ebd,	// (0x0007e3a2) linegrid_cams_pane_ParamLimits

0x2f94,	// (0x0007e479) call_video_pane_t1

0x2fb5,	// (0x0007e49a) call_video_pane_t2

0x0001,

0xf253,	// (0x0008a738) call_video_pane_t

0x3503,	// (0x0007e9e8) aid_cale_month_size_cell_pane_ParamLimits

0x3503,	// (0x0007e9e8) aid_cale_month_size_cell_pane

0xf603,	// (0x0008aae8) smil_status_volume_pane_g

0x53b1,	// (0x00080896) volume_smil_pane_ParamLimits

0x1f29,	// (0x0007d40e) aid_popup2_width_pane

0x26bf,	// (0x0007dba4) cell_qdial_pane_g4_ParamLimits

0x26bf,	// (0x0007dba4) cell_qdial_pane_g4

0x4438,	// (0x0007f91d) aid_blid_cardinal_pane_ParamLimits

0x4448,	// (0x0007f92d) aid_blid_destination_pane_ParamLimits

0x4448,	// (0x0007f92d) aid_blid_destination_pane

0xa77d,	// (0x00085c62) bg_popup_call_poc_act_pane_ParamLimits

0xa77d,	// (0x00085c62) bg_popup_call_poc_act_pane

0xa77d,	// (0x00085c62) bg_popup_call_poc_inact_pane_ParamLimits

0xa77d,	// (0x00085c62) bg_popup_call_poc_inact_pane

0xc765,	// (0x00087c4a) bg_popup_call_poc_act_pane_g1

0xc76d,	// (0x00087c52) bg_popup_call_poc_act_pane_g2

0xc775,	// (0x00087c5a) bg_popup_call_poc_act_pane_g3

0xc735,	// (0x00087c1a) bg_popup_call_poc_act_pane_g4

0xc73d,	// (0x00087c22) bg_popup_call_poc_act_pane_g5

0xc77d,	// (0x00087c62) bg_popup_call_poc_act_pane_g6

0xc74d,	// (0x00087c32) bg_popup_call_poc_act_pane_g7

0xc785,	// (0x00087c6a) bg_popup_call_poc_act_pane_g8

0xa522,	// (0x00085a07) main_usb_pane

0x51a1,	// (0x00080686) popup_cale_lunar_info_window

0x32d2,	// (0x0007e7b7) im_reading_pane_t1_ParamLimits

0xab8f,	// (0x00086074) list_im_pane_ParamLimits

0xaba0,	// (0x00086085) scroll_pane_cp07_ParamLimits

0xa522,	// (0x00085a07) grid_highlight_pane_cp012

0xa77d,	// (0x00085c62) mup_scale_pane_ParamLimits

0xb2a5,	// (0x0008678a) main_usb_pane_g1_ParamLimits

0xb2a5,	// (0x0008678a) main_usb_pane_g1

0x4f10,	// (0x000803f5) main_usb_pane_g2_ParamLimits

0x4f10,	// (0x000803f5) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x0008aa88) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x0008aa88) main_usb_pane_g

0x4f1c,	// (0x00080401) main_usb_pane_t1_ParamLimits

0x4f1c,	// (0x00080401) main_usb_pane_t1

0x4f2e,	// (0x00080413) main_usb_pane_t2_ParamLimits

0x4f2e,	// (0x00080413) main_usb_pane_t2

0x4f40,	// (0x00080425) main_usb_pane_t3_ParamLimits

0x4f40,	// (0x00080425) main_usb_pane_t3

0x4f52,	// (0x00080437) main_usb_pane_t4_ParamLimits

0x4f52,	// (0x00080437) main_usb_pane_t4

0x4f64,	// (0x00080449) main_usb_pane_t5_ParamLimits

0x4f64,	// (0x00080449) main_usb_pane_t5

0x4f76,	// (0x0008045b) main_usb_pane_t6_ParamLimits

0x4f76,	// (0x0008045b) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x0008aa8d) main_usb_pane_t_ParamLimits

0x43de,	// (0x0007f8c3) aid_text_placing

0x43ea,	// (0x0007f8cf) main_location2_pane_t1_ParamLimits

0x43fe,	// (0x0007f8e3) main_location2_pane_t2_ParamLimits

0x4412,	// (0x0007f8f7) main_location2_pane_t3_ParamLimits

0x4426,	// (0x0007f90b) main_location2_pane_t4_ParamLimits

0x4426,	// (0x0007f90b) main_location2_pane_t4

0xf3b4,	// (0x0008a899) main_location2_pane_t_ParamLimits

0xa7b9,	// (0x00085c9e) find_pinb_pane_g2_ParamLimits

0xa7b9,	// (0x00085c9e) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0008a5e9) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0008a5e9) find_pinb_pane_g

0xa7c5,	// (0x00085caa) find_pinb_pane_t1_ParamLimits

0xa7d7,	// (0x00085cbc) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0008a5ee) find_pinb_pane_t_ParamLimits

0xa522,	// (0x00085a07) main_call3_pane

0x3ac6,	// (0x0007efab) cale_month_day_heading_pane_t1_ParamLimits

0x3b4c,	// (0x0007f031) cale_month_day_heading_pane_t2_ParamLimits

0x3bc5,	// (0x0007f0aa) cale_month_day_heading_pane_t3_ParamLimits

0x3c3e,	// (0x0007f123) cale_month_day_heading_pane_t4_ParamLimits

0x3cb7,	// (0x0007f19c) cale_month_day_heading_pane_t5_ParamLimits

0x3d30,	// (0x0007f215) cale_month_day_heading_pane_t6_ParamLimits

0x3da9,	// (0x0007f28e) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0008a770) cale_month_day_heading_pane_t_ParamLimits

0xadea,	// (0x000862cf) smil_status_volume_pane

0x4acf,	// (0x0007ffb4) postcard_address_pane_ParamLimits

0x4acf,	// (0x0007ffb4) postcard_address_pane

0x4adb,	// (0x0007ffc0) postcard_message_pane_ParamLimits

0x4adb,	// (0x0007ffc0) postcard_message_pane

0x4ed5,	// (0x000803ba) call2_cli_visual_pane_t1_ParamLimits

0x4ed5,	// (0x000803ba) call2_cli_visual_pane_t1

0x5508,	// (0x000809ed) postcard_message_pane_t1_ParamLimits

0x5508,	// (0x000809ed) postcard_message_pane_t1

0x54f1,	// (0x000809d6) postcard_address_pane_t1_ParamLimits

0x54f1,	// (0x000809d6) postcard_address_pane_t1

0x54e2,	// (0x000809c7) popup_call3_audio_in_window_ParamLimits

0x54e2,	// (0x000809c7) popup_call3_audio_in_window

0x53c6,	// (0x000808ab) bg_popup_call3_in_pane_ParamLimits

0x53c6,	// (0x000808ab) bg_popup_call3_in_pane

0x5428,	// (0x0008090d) popup_call3_audio_in_window_g1_ParamLimits

0x5428,	// (0x0008090d) popup_call3_audio_in_window_g1

0x5440,	// (0x00080925) popup_call3_audio_in_window_g2_ParamLimits

0x5440,	// (0x00080925) popup_call3_audio_in_window_g2

0x5458,	// (0x0008093d) popup_call3_audio_in_window_g3_ParamLimits

0x5458,	// (0x0008093d) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x0008aaef) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x0008aaef) popup_call3_audio_in_window_g

0x5480,	// (0x00080965) popup_call3_audio_in_window_t1_ParamLimits

0x5480,	// (0x00080965) popup_call3_audio_in_window_t1

0x54a8,	// (0x0008098d) popup_call3_audio_in_window_t2_ParamLimits

0x54a8,	// (0x0008098d) popup_call3_audio_in_window_t2

0x54d0,	// (0x000809b5) popup_call3_audio_in_window_t3_ParamLimits

0x54d0,	// (0x000809b5) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x0008aaf8) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x0008aaf8) popup_call3_audio_in_window_t

0xaa21,	// (0x00085f06) bg_popup_call3_rect_pane

0xc6dd,	// (0x00087bc2) bg_popup_call3_rect_pane_g1

0xa93d,	// (0x00085e22) bg_popup_call3_rect_pane_g2

0xc6e5,	// (0x00087bca) bg_popup_call3_rect_pane_g3

0xc6ed,	// (0x00087bd2) bg_popup_call3_rect_pane_g4

0xc6f5,	// (0x00087bda) bg_popup_call3_rect_pane_g5

0xc6fd,	// (0x00087be2) bg_popup_call3_rect_pane_g6

0xc705,	// (0x00087bea) bg_popup_call3_rect_pane_g7

0x474e,	// (0x0007fc33) mup_visualizer_osc_pane

0xb58e,	// (0x00086a73) mup_visualizer_spec_pane

0x53e6,	// (0x000808cb) call3_video_qcif_pane_ParamLimits

0x53e6,	// (0x000808cb) call3_video_qcif_pane

0x53f8,	// (0x000808dd) call3_video_qcif_uncrop_pane_ParamLimits

0x53f8,	// (0x000808dd) call3_video_qcif_uncrop_pane

0x5406,	// (0x000808eb) call3_video_subqcif_pane_ParamLimits

0x5406,	// (0x000808eb) call3_video_subqcif_pane

0x5418,	// (0x000808fd) call3_video_subqcif_uncrop_pane_ParamLimits

0x5418,	// (0x000808fd) call3_video_subqcif_uncrop_pane

0x5470,	// (0x00080955) popup_call3_audio_in_window_g4_ParamLimits

0x5470,	// (0x00080955) popup_call3_audio_in_window_g4

0x5391,	// (0x00080876) mup_spec_half_pane

0x539a,	// (0x0008087f) mup_spec_half_pane_cp

0xc982,	// (0x00087e67) mup_osc_middle_pane

0xc98b,	// (0x00087e70) mup_visualizer_osc_pane_g1

0x5372,	// (0x00080857) mup_spec_bar_pane_ParamLimits

0x5372,	// (0x00080857) mup_spec_bar_pane

0xc96f,	// (0x00087e54) mup_spec_bar_pane_g1

0xc979,	// (0x00087e5e) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0008aae3) mup_spec_bar_pane_g

0x27c5,	// (0x0007dcaa) aid_cale_week_size_cell_pane_ParamLimits

0x27da,	// (0x0007dcbf) bg_cale_heading_pane_ParamLimits

0xa97a,	// (0x00085e5f) bg_cale_pane_cp01_ParamLimits

0x27fc,	// (0x0007dce1) cale_week_corner_pane_ParamLimits

0x2816,	// (0x0007dcfb) cale_week_day_heading_pane_ParamLimits

0x2838,	// (0x0007dd1d) cale_week_scroll_pane_g1_ParamLimits

0x2855,	// (0x0007dd3a) cale_week_scroll_pane_g2_ParamLimits

0x2868,	// (0x0007dd4d) cale_week_scroll_pane_g3_ParamLimits

0x287b,	// (0x0007dd60) cale_week_scroll_pane_g4_ParamLimits

0x288e,	// (0x0007dd73) cale_week_scroll_pane_g5_ParamLimits

0x28a1,	// (0x0007dd86) cale_week_scroll_pane_g6_ParamLimits

0x28b4,	// (0x0007dd99) cale_week_scroll_pane_g7_ParamLimits

0x28c9,	// (0x0007ddae) cale_week_scroll_pane_g8_ParamLimits

0x28de,	// (0x0007ddc3) cale_week_scroll_pane_g9_ParamLimits

0x28f1,	// (0x0007ddd6) cale_week_scroll_pane_g10_ParamLimits

0x2904,	// (0x0007dde9) cale_week_scroll_pane_g11_ParamLimits

0x2917,	// (0x0007ddfc) cale_week_scroll_pane_g12_ParamLimits

0x292e,	// (0x0007de13) cale_week_scroll_pane_g13_ParamLimits

0x2949,	// (0x0007de2e) cale_week_scroll_pane_g14_ParamLimits

0x2964,	// (0x0007de49) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0008a67a) cale_week_scroll_pane_g_ParamLimits

0x2994,	// (0x0007de79) cale_week_time_pane_ParamLimits

0x29a9,	// (0x0007de8e) grid_cale_week_pane_ParamLimits

0xa997,	// (0x00085e7c) listscroll_cale_week_pane_t1

0xa9a9,	// (0x00085e8e) scroll_pane_cp08_ParamLimits

0x3577,	// (0x0007ea5c) cale_month_corner_pane_ParamLimits

0xadc0,	// (0x000862a5) cale_month_pane_t1

0x3a45,	// (0x0007ef2a) cale_month_week_pane_ParamLimits

0xb2a5,	// (0x0008678a) popup_call_status_window_g1_ParamLimits

0x41e7,	// (0x0007f6cc) popup_call_status_window_g2_ParamLimits

0x41f3,	// (0x0007f6d8) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0008a820) popup_call_status_window_g_ParamLimits

0xb170,	// (0x00086655) aid_call2_pane

0x0ec2,	// (0x0007c3a7) msg_header_pane_g1

0x4acf,	// (0x0007ffb4) postcard_address2_pane_ParamLimits

0x4acf,	// (0x0007ffb4) postcard_address2_pane

0x4adb,	// (0x0007ffc0) postcard_message2_pane_ParamLimits

0x4adb,	// (0x0007ffc0) postcard_message2_pane

0x5309,	// (0x000807ee) message2_row_pane_ParamLimits

0x5309,	// (0x000807ee) message2_row_pane

0x5324,	// (0x00080809) address2_row_pane_ParamLimits

0x5324,	// (0x00080809) address2_row_pane

0xc93d,	// (0x00087e22) postcard_message2_row_pane_g1

0xc945,	// (0x00087e2a) postcard_message2_row_pane_t1

0xc93d,	// (0x00087e22) address2_row_pane_g1

0xc945,	// (0x00087e2a) address2_row_pane_t1

0x2c2e,	// (0x0007e113) aid_size_cell_vorec

0xa522,	// (0x00085a07) main_rss_pane

0x5337,	// (0x0008081c) rss_list_single_pane_ParamLimits

0x5337,	// (0x0008081c) rss_list_single_pane

0xc953,	// (0x00087e38) rss_list_single_pane_t1

0xc961,	// (0x00087e46) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x0008aade) rss_list_single_pane_t

0xa522,	// (0x00085a07) main_camera2_pane

0xa522,	// (0x00085a07) main_video2_pane

0x556c,	// (0x00080a51) cams_zoom_pane_cp2_ParamLimits

0x556c,	// (0x00080a51) cams_zoom_pane_cp2

0x5578,	// (0x00080a5d) image2_vga_pane_ParamLimits

0x5578,	// (0x00080a5d) image2_vga_pane

0x5587,	// (0x00080a6c) main_camera2_pane_g1_ParamLimits

0x5587,	// (0x00080a6c) main_camera2_pane_g1

0x5593,	// (0x00080a78) main_camera2_pane_g2_ParamLimits

0x5593,	// (0x00080a78) main_camera2_pane_g2

0x559f,	// (0x00080a84) main_camera2_pane_g3_ParamLimits

0x559f,	// (0x00080a84) main_camera2_pane_g3

0x55ab,	// (0x00080a90) main_camera2_pane_g4_ParamLimits

0x55ab,	// (0x00080a90) main_camera2_pane_g4

0x55b7,	// (0x00080a9c) main_camera2_pane_g5_ParamLimits

0x55b7,	// (0x00080a9c) main_camera2_pane_g5

0x55c3,	// (0x00080aa8) main_camera2_pane_g6_ParamLimits

0x55c3,	// (0x00080aa8) main_camera2_pane_g6

0x55cf,	// (0x00080ab4) main_camera2_pane_g7_ParamLimits

0x55cf,	// (0x00080ab4) main_camera2_pane_g7

0x55db,	// (0x00080ac0) main_camera2_pane_g8_ParamLimits

0x55db,	// (0x00080ac0) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x0008aaff) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x0008aaff) main_camera2_pane_g

0x55f3,	// (0x00080ad8) main_camera2_pane_t1_ParamLimits

0x55f3,	// (0x00080ad8) main_camera2_pane_t1

0x5605,	// (0x00080aea) main_camera2_pane_t2_ParamLimits

0x5605,	// (0x00080aea) main_camera2_pane_t2

0x5617,	// (0x00080afc) main_camera2_pane_t3_ParamLimits

0x5617,	// (0x00080afc) main_camera2_pane_t3

0x5629,	// (0x00080b0e) main_camera2_pane_t4_ParamLimits

0x5629,	// (0x00080b0e) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x0008ab12) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x0008ab12) main_camera2_pane_t

0x568b,	// (0x00080b70) cams_zoom_pane_cp4_ParamLimits

0x568b,	// (0x00080b70) cams_zoom_pane_cp4

0x569b,	// (0x00080b80) image2_cif_pane_ParamLimits

0x569b,	// (0x00080b80) image2_cif_pane

0x56b0,	// (0x00080b95) image2_subqcif_pane_ParamLimits

0x56b0,	// (0x00080b95) image2_subqcif_pane

0x56bf,	// (0x00080ba4) main_video2_pane_g1_ParamLimits

0x56bf,	// (0x00080ba4) main_video2_pane_g1

0x56d1,	// (0x00080bb6) main_video2_pane_g2_ParamLimits

0x56d1,	// (0x00080bb6) main_video2_pane_g2

0x56e1,	// (0x00080bc6) main_video2_pane_g3_ParamLimits

0x56e1,	// (0x00080bc6) main_video2_pane_g3

0x56f1,	// (0x00080bd6) main_video2_pane_g4_ParamLimits

0x56f1,	// (0x00080bd6) main_video2_pane_g4

0x5701,	// (0x00080be6) main_video2_pane_g5_ParamLimits

0x5701,	// (0x00080be6) main_video2_pane_g5

0x5711,	// (0x00080bf6) main_video2_pane_g6_ParamLimits

0x5711,	// (0x00080bf6) main_video2_pane_g6

0x0005,

0xf63c,	// (0x0008ab21) main_video2_pane_g_ParamLimits

0xf63c,	// (0x0008ab21) main_video2_pane_g

0x5723,	// (0x00080c08) main_video2_pane_t1_ParamLimits

0x5723,	// (0x00080c08) main_video2_pane_t1

0x573d,	// (0x00080c22) main_video2_pane_t2_ParamLimits

0x573d,	// (0x00080c22) main_video2_pane_t2

0x5763,	// (0x00080c48) main_video2_pane_t3_ParamLimits

0x5763,	// (0x00080c48) main_video2_pane_t3

0x0002,

0xf649,	// (0x0008ab2e) main_video2_pane_t_ParamLimits

0xf649,	// (0x0008ab2e) main_video2_pane_t

0x502d,	// (0x00080512) call_muted_g2

0x0001,

0xf5eb,	// (0x0008aad0) call_muted_g

0xa522,	// (0x00085a07) main_mup2_pane

0xc9c2,	// (0x00087ea7) main_mup2_pane_g1_ParamLimits

0xc9c2,	// (0x00087ea7) main_mup2_pane_g1

0x5789,	// (0x00080c6e) main_mup2_pane_g2_ParamLimits

0x5789,	// (0x00080c6e) main_mup2_pane_g2

0x5a0b,	// (0x00080ef0) main_mup_pane_g13_cp1

0x5a13,	// (0x00080ef8) mup_volume_pane_cp1

0x57a9,	// (0x00080c8e) main_mup2_pane_g4_ParamLimits

0x57a9,	// (0x00080c8e) main_mup2_pane_g4

0x57be,	// (0x00080ca3) main_mup2_pane_g5_ParamLimits

0x57be,	// (0x00080ca3) main_mup2_pane_g5

0x57d3,	// (0x00080cb8) main_mup2_pane_g6_ParamLimits

0x57d3,	// (0x00080cb8) main_mup2_pane_g6

0x57e8,	// (0x00080ccd) main_mup2_pane_g7_ParamLimits

0x57e8,	// (0x00080ccd) main_mup2_pane_g7

0x0006,

0xf650,	// (0x0008ab35) main_mup2_pane_g_ParamLimits

0xf650,	// (0x0008ab35) main_mup2_pane_g

0x5804,	// (0x00080ce9) main_mup2_pane_t1_ParamLimits

0x5804,	// (0x00080ce9) main_mup2_pane_t1

0x581b,	// (0x00080d00) main_mup2_pane_t2_ParamLimits

0x581b,	// (0x00080d00) main_mup2_pane_t2

0x5832,	// (0x00080d17) main_mup2_pane_t3_ParamLimits

0x5832,	// (0x00080d17) main_mup2_pane_t3

0x5849,	// (0x00080d2e) main_mup2_pane_t4_ParamLimits

0x5849,	// (0x00080d2e) main_mup2_pane_t4

0x5863,	// (0x00080d48) main_mup2_pane_t5_ParamLimits

0x5863,	// (0x00080d48) main_mup2_pane_t5

0x587d,	// (0x00080d62) main_mup2_pane_t6_ParamLimits

0x587d,	// (0x00080d62) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x0008ab44) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x0008ab44) main_mup2_pane_t

0x58b5,	// (0x00080d9a) mup2_visualizer_pane_ParamLimits

0x58b5,	// (0x00080d9a) mup2_visualizer_pane

0x58eb,	// (0x00080dd0) mup_progress_pane_cp_ParamLimits

0x58eb,	// (0x00080dd0) mup_progress_pane_cp

0x59f6,	// (0x00080edb) mup_volume_pane_cp_ParamLimits

0x59f6,	// (0x00080edb) mup_volume_pane_cp

0x5902,	// (0x00080de7) mup2_visualizer_pane_g1_ParamLimits

0x5902,	// (0x00080de7) mup2_visualizer_pane_g1

0xc9ce,	// (0x00087eb3) mup2_visualizer_pane_g2_ParamLimits

0xc9ce,	// (0x00087eb3) mup2_visualizer_pane_g2

0x5917,	// (0x00080dfc) mup2_visualizer_pane_g3_ParamLimits

0x5917,	// (0x00080dfc) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x0008ab51) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x0008ab51) mup2_visualizer_pane_g

0xb7b5,	// (0x00086c9a) aid_size_cell_fmradio

0x5143,	// (0x00080628) aid_height_parent_landcape

0xac1e,	// (0x00086103) wml_content_pane_cp

0xac26,	// (0x0008610b) wml_tabs_pane

0xac2f,	// (0x00086114) popup_wml_miniature_window

0xac37,	// (0x0008611c) scroll_pane_cp021

0xac4b,	// (0x00086130) wml_content_pane_comp8

0xa522,	// (0x00085a07) bg_popup_sub_pane_cp05

0xc9ec,	// (0x00087ed1) popup_wml_miniature_window_g1

0xc9f4,	// (0x00087ed9) wml_miniature_view_pane

0x5925,	// (0x00080e0a) aid_size_wml_view

0x592d,	// (0x00080e12) wml_miniature_view_pane_g1

0x5936,	// (0x00080e1b) wml_miniature_view_pane_g2

0x593f,	// (0x00080e24) wml_miniature_view_pane_g3

0x5947,	// (0x00080e2c) wml_miniature_view_pane_g4

0x594f,	// (0x00080e34) wml_miniature_view_pane_g5

0x5957,	// (0x00080e3c) wml_miniature_view_pane_g6

0x595f,	// (0x00080e44) wml_miniature_view_pane_g7

0x5967,	// (0x00080e4c) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x0008ab58) wml_miniature_view_pane_g

0xc9c2,	// (0x00087ea7) background_graphic_ParamLimits

0xc9c2,	// (0x00087ea7) background_graphic

0xc9fc,	// (0x00087ee1) wml_tabs_2_pane

0xca05,	// (0x00087eea) wml_tabs_3_pane_ParamLimits

0xca05,	// (0x00087eea) wml_tabs_3_pane

0xca17,	// (0x00087efc) wml_tabs_4_pane_ParamLimits

0xca17,	// (0x00087efc) wml_tabs_4_pane

0xca2d,	// (0x00087f12) wml_tabs_5_pane_ParamLimits

0xca2d,	// (0x00087f12) wml_tabs_5_pane

0xca47,	// (0x00087f2c) wml_tabs_pane_g2_ParamLimits

0xca47,	// (0x00087f2c) wml_tabs_pane_g2

0xca5b,	// (0x00087f40) wml_tabs_pane_g3_ParamLimits

0xca5b,	// (0x00087f40) wml_tabs_pane_g3

0x596f,	// (0x00080e54) wml_tabs_2_active_pane_ParamLimits

0x596f,	// (0x00080e54) wml_tabs_2_active_pane

0x597f,	// (0x00080e64) wml_tabs_2_passive_pane_ParamLimits

0x597f,	// (0x00080e64) wml_tabs_2_passive_pane

0x598f,	// (0x00080e74) wml_tabs_3_active_pane_cp_ParamLimits

0x598f,	// (0x00080e74) wml_tabs_3_active_pane_cp

0x59a0,	// (0x00080e85) wml_tabs_3_passive_pane_ParamLimits

0x59a0,	// (0x00080e85) wml_tabs_3_passive_pane

0x59b1,	// (0x00080e96) wml_tabs_3_passive_pane_cp_ParamLimits

0x59b1,	// (0x00080e96) wml_tabs_3_passive_pane_cp

0x59c2,	// (0x00080ea7) tabs_4_active_pane

0x59ca,	// (0x00080eaf) tabs_4_passive_pane

0x59d2,	// (0x00080eb7) tabs_4_passive_pane_cp

0x59da,	// (0x00080ebf) tabs_4_passive_pane_cp2

0x4f08,	// (0x000803ed) aid_height_text

0x4717,	// (0x0007fbfc) mup_volume_cont_pane_ParamLimits

0x4717,	// (0x0007fbfc) mup_volume_cont_pane

0x22fb,	// (0x0007d7e0) aid_size_cell_pinb

0x2305,	// (0x0007d7ea) aid_size_list_pinb

0x58d4,	// (0x00080db9) mup2_volume_cont_pane_ParamLimits

0x58d4,	// (0x00080db9) mup2_volume_cont_pane

0x59e2,	// (0x00080ec7) mup2_volume_cont_pane_g1_ParamLimits

0x59e2,	// (0x00080ec7) mup2_volume_cont_pane_g1

0x1f35,	// (0x0007d41a) aid_size_cell_touch_ParamLimits

0x1f35,	// (0x0007d41a) aid_size_cell_touch

0x21de,	// (0x0007d6c3) touch_pane_ParamLimits

0x21de,	// (0x0007d6c3) touch_pane

0xa105,	// (0x000855ea) main_rss2_pane

0xca78,	// (0x00087f5d) listscroll_rss2_pane

0xca81,	// (0x00087f66) rss2_navigation_pane

0xca89,	// (0x00087f6e) list_rss2_pane

0xb295,	// (0x0008677a) scroll_pane_cp22

0xca91,	// (0x00087f76) rss2_navigation_pane_g1

0xca9a,	// (0x00087f7f) rss2_navigation_pane_g2

0xcaa2,	// (0x00087f87) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x0008ab69) rss2_navigation_pane_g

0xcaaa,	// (0x00087f8f) rss2_navigation_pane_t1

0x5a1b,	// (0x00080f00) rss2_list_single_pane_ParamLimits

0x5a1b,	// (0x00080f00) rss2_list_single_pane

0xcab8,	// (0x00087f9d) rss2_list_single_pane_t2

0xcac6,	// (0x00087fab) rss2_list_single_pane_t3_ParamLimits

0xcac6,	// (0x00087fab) rss2_list_single_pane_t3

0xcae3,	// (0x00087fc8) rss2_list_single_pane_t4

0x404b,	// (0x0007f530) smil_status_pane_g1

0xaae2,	// (0x00085fc7) main_image2_pane_ParamLimits

0xaae2,	// (0x00085fc7) main_image2_pane

0x55e7,	// (0x00080acc) main_camera2_pane_g9_ParamLimits

0x55e7,	// (0x00080acc) main_camera2_pane_g9

0x563b,	// (0x00080b20) main_camera2_pane_t5_ParamLimits

0x563b,	// (0x00080b20) main_camera2_pane_t5

0x564d,	// (0x00080b32) main_camera2_pane_t6_ParamLimits

0x564d,	// (0x00080b32) main_camera2_pane_t6

0x5a4f,	// (0x00080f34) main_image2_pane_g1_ParamLimits

0x5a4f,	// (0x00080f34) main_image2_pane_g1

0x4ca2,	// (0x00080187) smil2_video_pane_ParamLimits

0x4ca2,	// (0x00080187) smil2_video_pane

0x1f69,	// (0x0007d44e) aid_zoom_text_primary_cp

0x2187,	// (0x0007d66c) popup_preview_fixed_window

0xab87,	// (0x0008606c) im_reading_pane_g1

0x5531,	// (0x00080a16) cams2_bc_adjust_pane_cp_ParamLimits

0x5531,	// (0x00080a16) cams2_bc_adjust_pane_cp

0x567d,	// (0x00080b62) cams2_bc_adjust_pane_ParamLimits

0x567d,	// (0x00080b62) cams2_bc_adjust_pane

0x5a5b,	// (0x00080f40) cams2_bc_adjust_pane_g1

0x5a63,	// (0x00080f48) cams2_slider_pane

0x5a6c,	// (0x00080f51) cams2_slider_pane_g1

0x5a75,	// (0x00080f5a) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x0008ab70) cams2_slider_pane_g

0x2405,	// (0x0007d8ea) calc_display_pane_ParamLimits

0x2423,	// (0x0007d908) calc_paper_pane_ParamLimits

0x243f,	// (0x0007d924) grid_calc_pane_ParamLimits

0x4251,	// (0x0007f736) popup_clock_digital_window_t1_ParamLimits

0xb752,	// (0x00086c37) main_image_pane_t1

0x23eb,	// (0x0007d8d0) aid_size_cell_calc_ParamLimits

0x23eb,	// (0x0007d8d0) aid_size_cell_calc

0x517d,	// (0x00080662) popup_blid_sat_info2_window_ParamLimits

0x517d,	// (0x00080662) popup_blid_sat_info2_window

0xcaf9,	// (0x00087fde) aid_size_cell_blid

0xcb01,	// (0x00087fe6) bg_popup_window_pane_cp07

0xcb24,	// (0x00088009) grid_popup_blid_pane

0xcb2e,	// (0x00088013) heading_pane_cp05_ParamLimits

0xcb2e,	// (0x00088013) heading_pane_cp05

0xcbf8,	// (0x000880dd) cell_popup_blid_pane_ParamLimits

0xcbf8,	// (0x000880dd) cell_popup_blid_pane

0xcc1c,	// (0x00088101) cell_popup_blid_pane_g1

0xcc24,	// (0x00088109) cell_popup_blid_pane_t1

0x589a,	// (0x00080d7f) mup2_indicator_pane_ParamLimits

0x589a,	// (0x00080d7f) mup2_indicator_pane

0xaa21,	// (0x00085f06) mup2_visualizer_osc_pane

0xc9da,	// (0x00087ebf) mup2_visualizer_spec_pane_ParamLimits

0xc9da,	// (0x00087ebf) mup2_visualizer_spec_pane

0x5a8f,	// (0x00080f74) mup2_spec_half_pane

0x5a98,	// (0x00080f7d) mup2_spec_half_pane_cp

0x5aa2,	// (0x00080f87) mup2_spec_bar_pane_ParamLimits

0x5aa2,	// (0x00080f87) mup2_spec_bar_pane

0xc96f,	// (0x00087e54) mup2_spec_bar_pane_g1

0xc979,	// (0x00087e5e) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0008aae3) mup2_spec_bar_pane_g

0x5ac1,	// (0x00080fa6) mup2_osc_middle_pane

0xc98b,	// (0x00087e70) mup2_visualizer_osc_pane_g1

0xa12f,	// (0x00085614) popup_number_entry_window_t1_ParamLimits

0xa142,	// (0x00085627) popup_number_entry_window_t2_ParamLimits

0xa154,	// (0x00085639) popup_number_entry_window_t3_ParamLimits

0x2235,	// (0x0007d71a) popup_number_entry_window_t5_ParamLimits

0x2235,	// (0x0007d71a) popup_number_entry_window_t5

0xf0af,	// (0x0008a594) popup_number_entry_window_t_ParamLimits

0xa166,	// (0x0008564b) text_title_cp2_ParamLimits

0x4997,	// (0x0007fe7c) aid_hotspot_pointer_text2_pane

0x4a31,	// (0x0007ff16) main_viewer_pane_g9_ParamLimits

0x4a31,	// (0x0007ff16) main_viewer_pane_g9

0xadc0,	// (0x000862a5) cale_month_pane_t1_ParamLimits

0xadfd,	// (0x000862e2) bg_cale_pane_ParamLimits

0xae15,	// (0x000862fa) list_cale_pane_ParamLimits

0xae26,	// (0x0008630b) listscroll_cale_day_pane_t1

0xae38,	// (0x0008631d) scroll_pane_cp09_ParamLimits

0x4756,	// (0x0007fc3b) main_mup_eq_pane_t1_ParamLimits

0x4756,	// (0x0007fc3b) main_mup_eq_pane_t1

0x4770,	// (0x0007fc55) main_mup_eq_pane_t2_ParamLimits

0x4770,	// (0x0007fc55) main_mup_eq_pane_t2

0x4788,	// (0x0007fc6d) main_mup_eq_pane_t3_ParamLimits

0x4788,	// (0x0007fc6d) main_mup_eq_pane_t3

0x47a0,	// (0x0007fc85) main_mup_eq_pane_t4_ParamLimits

0x47a0,	// (0x0007fc85) main_mup_eq_pane_t4

0x47b8,	// (0x0007fc9d) main_mup_eq_pane_t5_ParamLimits

0x47b8,	// (0x0007fc9d) main_mup_eq_pane_t5

0x47d0,	// (0x0007fcb5) main_mup_eq_pane_t6_ParamLimits

0x47d0,	// (0x0007fcb5) main_mup_eq_pane_t6

0x47e4,	// (0x0007fcc9) main_mup_eq_pane_t7_ParamLimits

0x47e4,	// (0x0007fcc9) main_mup_eq_pane_t7

0x47f8,	// (0x0007fcdd) main_mup_eq_pane_t8_ParamLimits

0x47f8,	// (0x0007fcdd) main_mup_eq_pane_t8

0x480e,	// (0x0007fcf3) main_mup_eq_pane_t9_ParamLimits

0x480e,	// (0x0007fcf3) main_mup_eq_pane_t9

0x4826,	// (0x0007fd0b) main_mup_eq_pane_t10_ParamLimits

0x4826,	// (0x0007fd0b) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0008a91f) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0008a91f) main_mup_eq_pane_t

0x48e3,	// (0x0007fdc8) mup_equalizer_pane_cp5_ParamLimits

0x48f9,	// (0x0007fdde) mup_equalizer_pane_cp6_ParamLimits

0x4911,	// (0x0007fdf6) mup_equalizer_pane_cp7_ParamLimits

0xa105,	// (0x000855ea) main_gallery_pane

0xc994,	// (0x00087e79) smil2_volume_pane

0xc9af,	// (0x00087e94) smil_status_volume_pane_g1_ParamLimits

0xc99c,	// (0x00087e81) smil_status_volume_pane_g2_ParamLimits

0x53a4,	// (0x00080889) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x0008aae8) smil_status_volume_pane_g_ParamLimits

0xcb01,	// (0x00087fe6) bg_popup_window_pane_cp07_ParamLimits

0xcb0f,	// (0x00087ff4) blid_firmament_pane

0x5aca,	// (0x00080faf) aid_size_cell_gallery_ParamLimits

0x5aca,	// (0x00080faf) aid_size_cell_gallery

0x5ad8,	// (0x00080fbd) grid_gallery_pane_ParamLimits

0x5ad8,	// (0x00080fbd) grid_gallery_pane

0x5ae8,	// (0x00080fcd) cell_gallery_pane_ParamLimits

0x5ae8,	// (0x00080fcd) cell_gallery_pane

0xcc32,	// (0x00088117) bg_cell_gallery_focus_pane_ParamLimits

0xcc32,	// (0x00088117) bg_cell_gallery_focus_pane

0xcc44,	// (0x00088129) cell_gallery_pane_g1_ParamLimits

0xcc44,	// (0x00088129) cell_gallery_pane_g1

0x5b36,	// (0x0008101b) cell_gallery_pane_g2_ParamLimits

0x5b36,	// (0x0008101b) cell_gallery_pane_g2

0x5b43,	// (0x00081028) cell_gallery_pane_g3_ParamLimits

0x5b43,	// (0x00081028) cell_gallery_pane_g3

0xcc50,	// (0x00088135) cell_gallery_pane_g4_ParamLimits

0xcc50,	// (0x00088135) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x0008ab96) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x0008ab96) cell_gallery_pane_g

0xcc5c,	// (0x00088141) bg_cell_gallery_focus_pane_g1

0xcc64,	// (0x00088149) bg_cell_gallery_focus_pane_g2

0xcc6c,	// (0x00088151) bg_cell_gallery_focus_pane_g3

0xcc74,	// (0x00088159) bg_cell_gallery_focus_pane_g4

0xcc7c,	// (0x00088161) bg_cell_gallery_focus_pane_g5

0xcc84,	// (0x00088169) bg_cell_gallery_focus_pane_g6

0xcc8c,	// (0x00088171) bg_cell_gallery_focus_pane_g7

0xcc94,	// (0x00088179) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x0008ab9f) bg_cell_gallery_focus_pane_g

0xcc9c,	// (0x00088181) aid_firma_cardinal

0xccb0,	// (0x00088195) blid_firmament_pane_t1

0xccc7,	// (0x000881ac) blid_firmament_pane_t2

0xccde,	// (0x000881c3) blid_firmament_pane_t3

0xccf5,	// (0x000881da) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x0008abb0) blid_firmament_pane_t

0xcd0c,	// (0x000881f1) blid_sat_info_pane

0xcd1c,	// (0x00088201) blid_sat_info_pane_g1

0xcd1c,	// (0x00088201) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x0008abb9) blid_sat_info_pane_g

0xcd26,	// (0x0008820b) blid_sat_info_pane_t1

0xcd34,	// (0x00088219) smil2_volume_content_pane

0xcd3d,	// (0x00088222) smil2_volume_pane_g1

0xaaf0,	// (0x00085fd5) smil2_volume_content_pane_g1

0xcd45,	// (0x0008822a) smil2_volume_content_pane_g2

0xcd4e,	// (0x00088233) smil2_volume_content_pane_g3

0xcd57,	// (0x0008823c) smil2_volume_content_pane_g4

0xcd60,	// (0x00088245) smil2_volume_content_pane_g5

0xcd69,	// (0x0008824e) smil2_volume_content_pane_g6

0xcd72,	// (0x00088257) smil2_volume_content_pane_g7

0xcd7b,	// (0x00088260) smil2_volume_content_pane_g8

0xcd84,	// (0x00088269) smil2_volume_content_pane_g9

0xcd8d,	// (0x00088272) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x0008abbe) smil2_volume_content_pane_g

0x2a2a,	// (0x0007df0f) cale_week_day_heading_pane_t1_ParamLimits

0x2a45,	// (0x0007df2a) cale_week_day_heading_pane_t2_ParamLimits

0x2a60,	// (0x0007df45) cale_week_day_heading_pane_t3_ParamLimits

0x2a7b,	// (0x0007df60) cale_week_day_heading_pane_t4_ParamLimits

0x2a96,	// (0x0007df7b) cale_week_day_heading_pane_t5_ParamLimits

0x2ab1,	// (0x0007df96) cale_week_day_heading_pane_t6_ParamLimits

0x2acc,	// (0x0007dfb1) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0008a69b) cale_week_day_heading_pane_t_ParamLimits

0xa9c6,	// (0x00085eab) bg_cale_side_pane_ParamLimits

0x2ae7,	// (0x0007dfcc) cale_week_time_pane_t1_ParamLimits

0x2b01,	// (0x0007dfe6) cale_week_time_pane_t2_ParamLimits

0x2b1b,	// (0x0007e000) cale_week_time_pane_t3_ParamLimits

0x2b35,	// (0x0007e01a) cale_week_time_pane_t4_ParamLimits

0x2b4f,	// (0x0007e034) cale_week_time_pane_t5_ParamLimits

0x2b69,	// (0x0007e04e) cale_week_time_pane_t6_ParamLimits

0x2b89,	// (0x0007e06e) cale_week_time_pane_t7_ParamLimits

0x2bab,	// (0x0007e090) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0008a6aa) cale_week_time_pane_t_ParamLimits

0x2bcf,	// (0x0007e0b4) cell_cale_week_pane_g2_ParamLimits

0xa9c6,	// (0x00085eab) bg_cale_side_pane_cp01_ParamLimits

0x3e3a,	// (0x0007f31f) cale_month_week_pane_t1_ParamLimits

0x3e53,	// (0x0007f338) cale_month_week_pane_t2_ParamLimits

0x3e6c,	// (0x0007f351) cale_month_week_pane_t3_ParamLimits

0x3e85,	// (0x0007f36a) cale_month_week_pane_t4_ParamLimits

0x3ea0,	// (0x0007f385) cale_month_week_pane_t5_ParamLimits

0x3ec1,	// (0x0007f3a6) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0008a77f) cale_month_week_pane_t_ParamLimits

0x4008,	// (0x0007f4ed) cell_cale_month_pane_g1_ParamLimits

0xa105,	// (0x000855ea) main_cale_event_viewer_pane

0xa105,	// (0x000855ea) listscroll_cale_event_viewer_pane

0xcd96,	// (0x0008827b) list_cale_ev_pane

0xcd9e,	// (0x00088283) scroll_pane_cp023

0xcdaa,	// (0x0008828f) field_cale_ev_pane_ParamLimits

0xcdaa,	// (0x0008828f) field_cale_ev_pane

0xcdc8,	// (0x000882ad) field_cale_ev_content_pane_ParamLimits

0xcdc8,	// (0x000882ad) field_cale_ev_content_pane

0xcdd4,	// (0x000882b9) field_cale_ev_pane_g1_ParamLimits

0xcdd4,	// (0x000882b9) field_cale_ev_pane_g1

0xcde0,	// (0x000882c5) field_cale_ev_pane_g2_ParamLimits

0xcde0,	// (0x000882c5) field_cale_ev_pane_g2

0xcdf8,	// (0x000882dd) field_cale_ev_pane_g3_ParamLimits

0xcdf8,	// (0x000882dd) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x0008abd3) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x0008abd3) field_cale_ev_pane_g

0xce10,	// (0x000882f5) field_cale_ev_pane_t1_ParamLimits

0xce10,	// (0x000882f5) field_cale_ev_pane_t1

0xaaf9,	// (0x00085fde) field_cale_ev_content_pane_t1_ParamLimits

0xaaf9,	// (0x00085fde) field_cale_ev_content_pane_t1

0xb638,	// (0x00086b1d) bg_button_pane_cp01

0x27b5,	// (0x0007dc9a) listscroll_cale_week_pane_ParamLimits

0xa971,	// (0x00085e56) popup_toolbar_window_cp01

0xa997,	// (0x00085e7c) listscroll_cale_week_pane_t1_ParamLimits

0x27b5,	// (0x0007dc9a) listscroll_cale_day_pane_ParamLimits

0xa971,	// (0x00085e56) popup_toolbar_window_cp02

0xae26,	// (0x0008630b) listscroll_cale_day_pane_t1_ParamLimits

0x27b5,	// (0x0007dc9a) main_cale_month_pane_ParamLimits

0x5280,	// (0x00080765) popup_toolbar_window_cp03_ParamLimits

0x5280,	// (0x00080765) popup_toolbar_window_cp03

0x4bb8,	// (0x0008009d) main_image_pane_g2_ParamLimits

0x4bb8,	// (0x0008009d) main_image_pane_g2

0x4bc4,	// (0x000800a9) main_image_pane_g3_ParamLimits

0x4bc4,	// (0x000800a9) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0008a9b1) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0008a9b1) main_image_pane_g

0xb752,	// (0x00086c37) main_image_pane_t1_ParamLimits

0x4bd0,	// (0x000800b5) main_image_pane_t2_ParamLimits

0x4bd0,	// (0x000800b5) main_image_pane_t2

0x4be2,	// (0x000800c7) main_image_pane_t3_ParamLimits

0x4be2,	// (0x000800c7) main_image_pane_t3

0x4bf4,	// (0x000800d9) main_image_pane_t4_ParamLimits

0x4bf4,	// (0x000800d9) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0008a9b8) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0008a9b8) main_image_pane_t

0x4c06,	// (0x000800eb) popup_image_details_window_cp01

0x4c10,	// (0x000800f5) popup_toobar_trans_pane_cp01_ParamLimits

0x4c10,	// (0x000800f5) popup_toobar_trans_pane_cp01

0x51d0,	// (0x000806b5) popup_image_details_window_ParamLimits

0x51d0,	// (0x000806b5) popup_image_details_window

0x51de,	// (0x000806c3) popup_image_focus_window

0x5523,	// (0x00080a08) camera2_autofocus_pane_ParamLimits

0x5523,	// (0x00080a08) camera2_autofocus_pane

0xa105,	// (0x000855ea) bg_popup_sub_pane_cp06

0xce27,	// (0x0008830c) popup_image_focus_window_g1

0xce2f,	// (0x00088314) popup_image_focus_window_g2

0xce37,	// (0x0008831c) popup_image_focus_window_g3

0xce3f,	// (0x00088324) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x0008abda) popup_image_focus_window_g

0xce47,	// (0x0008832c) popup_image_focus_window_t1

0xce55,	// (0x0008833a) popup_image_focus_window_t2

0xce65,	// (0x0008834a) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x0008abe3) popup_image_focus_window_t

0xce73,	// (0x00088358) camera2_autofocus_pane_g1

0xaae2,	// (0x00085fc7) bg_tb_trans_pane_cp01

0xce81,	// (0x00088366) popup_image_details_window_g1

0xce94,	// (0x00088379) popup_image_details_window_g2

0x0002,

0xf710,	// (0x0008abf5) popup_image_details_window_g

0xcebd,	// (0x000883a2) popup_image_details_window_t1

0xcecf,	// (0x000883b4) popup_image_details_window_t2

0xcee8,	// (0x000883cd) popup_image_details_window_t3

0xcefc,	// (0x000883e1) popup_image_details_window_t4

0xcf17,	// (0x000883fc) popup_image_details_window_t5

0x0004,

0xf717,	// (0x0008abfc) popup_image_details_window_t

0xa83a,	// (0x00085d1f) bg_calc_paper_pane_ParamLimits

0xa105,	// (0x000855ea) grid_highlight_pane_cp013

0x253c,	// (0x0007da21) list_calc_pane_ParamLimits

0x254e,	// (0x0007da33) scroll_pane_cp024

0xa84e,	// (0x00085d33) bg_calc_display_pane_ParamLimits

0x2556,	// (0x0007da3b) calc_display_pane_t1_ParamLimits

0x256b,	// (0x0007da50) calc_display_pane_t2_ParamLimits

0x2580,	// (0x0007da65) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0008a61b) calc_display_pane_t_ParamLimits

0x265a,	// (0x0007db3f) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0008a638) cell_calc_pane_g

0x2663,	// (0x0007db48) cell_calc_pane_t1

0xa8ad,	// (0x00085d92) grid_highlight_pane_cp02_ParamLimits

0xa8d1,	// (0x00085db6) toolbar_button_pane_cp01_ParamLimits

0xa8d1,	// (0x00085db6) toolbar_button_pane_cp01

0xb797,	// (0x00086c7c) temp_image_control_pane_ParamLimits

0xb797,	// (0x00086c7c) temp_image_control_pane

0xaae2,	// (0x00085fc7) main_mp3_pane

0xcf31,	// (0x00088416) temp_image_control_pane_g1_ParamLimits

0xcf31,	// (0x00088416) temp_image_control_pane_g1

0xcf3f,	// (0x00088424) temp_image_control_pane_g2_ParamLimits

0xcf3f,	// (0x00088424) temp_image_control_pane_g2

0xcf51,	// (0x00088436) temp_image_control_pane_g3_ParamLimits

0xcf51,	// (0x00088436) temp_image_control_pane_g3

0x5b80,	// (0x00081065) temp_image_control_pane_g4_ParamLimits

0x5b80,	// (0x00081065) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x0008ac07) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x0008ac07) temp_image_control_pane_g

0xcf31,	// (0x00088416) main_mp3_pane_g1

0x5b91,	// (0x00081076) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x0008ac10) main_mp3_pane_g

0xcf94,	// (0x00088479) main_mp3_pane_t1

0xaa29,	// (0x00085f0e) main_camera_pane_g8_ParamLimits

0xaa29,	// (0x00085f0e) main_camera_pane_g8

0x2e59,	// (0x0007e33e) main_video_pane_g7_ParamLimits

0x2e59,	// (0x0007e33e) main_video_pane_g7

0x566b,	// (0x00080b50) main_camera2_pane_t7_ParamLimits

0x566b,	// (0x00080b50) main_camera2_pane_t7

0xabde,	// (0x000860c3) scroll_pane_cp025_ParamLimits

0xabde,	// (0x000860c3) scroll_pane_cp025

0xabf2,	// (0x000860d7) scroll_pane_cp026_ParamLimits

0xabf2,	// (0x000860d7) scroll_pane_cp026

0xac01,	// (0x000860e6) wml_content_pane_ParamLimits

0xa105,	// (0x000855ea) main_touch_calib_pane

0x5c35,	// (0x0008111a) main_touch_calib_pane_g1

0x5c41,	// (0x00081126) main_touch_calib_pane_g2

0x5c4d,	// (0x00081132) main_touch_calib_pane_g3

0x5c59,	// (0x0008113e) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x0008ac2e) main_touch_calib_pane_g

0x5c65,	// (0x0008114a) main_touch_calib_pane_t1

0x5c7e,	// (0x00081163) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x0008ac37) main_touch_calib_pane_t

0xb372,	// (0x00086857) mup_progress_pane_cp02

0xb3a7,	// (0x0008688c) navi_pane_g1

0xb462,	// (0x00086947) navi_pane_mp_t3

0xaae2,	// (0x00085fc7) main_mp3_pane_ParamLimits

0x52bd,	// (0x000807a2) navi_pane_ParamLimits

0xcf31,	// (0x00088416) main_mp3_pane_g1_ParamLimits

0x5b91,	// (0x00081076) main_mp3_pane_g2_ParamLimits

0x5b9d,	// (0x00081082) main_mp3_pane_g3_ParamLimits

0x5b9d,	// (0x00081082) main_mp3_pane_g3

0x5ba9,	// (0x0008108e) main_mp3_pane_g4_ParamLimits

0x5ba9,	// (0x0008108e) main_mp3_pane_g4

0xcf61,	// (0x00088446) main_mp3_pane_g5_ParamLimits

0xcf61,	// (0x00088446) main_mp3_pane_g5

0xcf6f,	// (0x00088454) main_mp3_pane_g6_ParamLimits

0xcf6f,	// (0x00088454) main_mp3_pane_g6

0xcf7c,	// (0x00088461) main_mp3_pane_g7_ParamLimits

0xcf7c,	// (0x00088461) main_mp3_pane_g7

0xcf88,	// (0x0008846d) main_mp3_pane_g8_ParamLimits

0xcf88,	// (0x0008846d) main_mp3_pane_g8

0xf72b,	// (0x0008ac10) main_mp3_pane_g_ParamLimits

0x5bb5,	// (0x0008109a) main_mp3_pane_t2

0x5bc5,	// (0x000810aa) main_mp3_pane_t3

0xcfa2,	// (0x00088487) main_mp3_pane_t4

0xcfb0,	// (0x00088495) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x0008ac21) main_mp3_pane_t

0xcfbe,	// (0x000884a3) mup_progress_pane_cp01

0x1f69,	// (0x0007d44e) aid_zoom_text_secondary2

0xcd96,	// (0x0008827b) list_cale_ev2_pane

0xcd9e,	// (0x00088283) scroll_pane_cp023_ParamLimits

0x5cd9,	// (0x000811be) field_cale_ev2_pane_ParamLimits

0x5cd9,	// (0x000811be) field_cale_ev2_pane

0x5d03,	// (0x000811e8) field_cale_ev2_pane_g1_ParamLimits

0x5d03,	// (0x000811e8) field_cale_ev2_pane_g1

0x5d0f,	// (0x000811f4) field_cale_ev2_pane_g2_ParamLimits

0x5d0f,	// (0x000811f4) field_cale_ev2_pane_g2

0x5d27,	// (0x0008120c) field_cale_ev2_pane_g3_ParamLimits

0x5d27,	// (0x0008120c) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x0008ac42) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x0008ac42) field_cale_ev2_pane_g

0x0f47,	// (0x0007c42c) field_cale_ev2_pane_t1_ParamLimits

0x0f47,	// (0x0007c42c) field_cale_ev2_pane_t1

0x0f5e,	// (0x0007c443) field_cale_ev2_pane_t2_ParamLimits

0x0f5e,	// (0x0007c443) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x0008ac4b) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x0008ac4b) field_cale_ev2_pane_t

0x4a99,	// (0x0007ff7e) main_postcard_pane_g5_ParamLimits

0x4a99,	// (0x0007ff7e) main_postcard_pane_g5

0x4aa7,	// (0x0007ff8c) main_postcard_pane_g6_ParamLimits

0x4aa7,	// (0x0007ff8c) main_postcard_pane_g6

0x2ca3,	// (0x0007e188) camera2_autofocus_pane_cp_ParamLimits

0x2ca3,	// (0x0007e188) camera2_autofocus_pane_cp

0xaae2,	// (0x00085fc7) main_mup3_pane

0x5d8a,	// (0x0008126f) main_mup3_pane_g1_ParamLimits

0x5d8a,	// (0x0008126f) main_mup3_pane_g1

0x5dab,	// (0x00081290) main_mup3_pane_g2_ParamLimits

0x5dab,	// (0x00081290) main_mup3_pane_g2

0x5e25,	// (0x0008130a) main_mup3_pane_g3_ParamLimits

0x5e25,	// (0x0008130a) main_mup3_pane_g3

0x5e68,	// (0x0008134d) main_mup3_pane_g4_ParamLimits

0x5e68,	// (0x0008134d) main_mup3_pane_g4

0x5eab,	// (0x00081390) main_mup3_pane_g5_ParamLimits

0x5eab,	// (0x00081390) main_mup3_pane_g5

0x5eee,	// (0x000813d3) main_mup3_pane_g6_ParamLimits

0x5eee,	// (0x000813d3) main_mup3_pane_g6

0xcfc6,	// (0x000884ab) main_mup3_pane_g7_ParamLimits

0xcfc6,	// (0x000884ab) main_mup3_pane_g7

0x0007,

0xf776,	// (0x0008ac5b) main_mup3_pane_g_ParamLimits

0xf776,	// (0x0008ac5b) main_mup3_pane_g

0x5f64,	// (0x00081449) main_mup3_pane_t1_ParamLimits

0x5f64,	// (0x00081449) main_mup3_pane_t1

0x5fd3,	// (0x000814b8) main_mup3_pane_t2_ParamLimits

0x5fd3,	// (0x000814b8) main_mup3_pane_t2

0x609c,	// (0x00081581) main_mup3_pane_t4_ParamLimits

0x609c,	// (0x00081581) main_mup3_pane_t4

0x60ea,	// (0x000815cf) main_mup3_pane_t5_ParamLimits

0x60ea,	// (0x000815cf) main_mup3_pane_t5

0x619a,	// (0x0008167f) main_mup3_pane_t6_ParamLimits

0x619a,	// (0x0008167f) main_mup3_pane_t6

0x0005,

0xf787,	// (0x0008ac6c) main_mup3_pane_t_ParamLimits

0xf787,	// (0x0008ac6c) main_mup3_pane_t

0x6246,	// (0x0008172b) mup3_progress_pane_ParamLimits

0x6246,	// (0x0008172b) mup3_progress_pane

0x62ba,	// (0x0008179f) popup_mup3_control_window_ParamLimits

0x62ba,	// (0x0008179f) popup_mup3_control_window

0xcfd4,	// (0x000884b9) popup_mup3_text_window

0x62d3,	// (0x000817b8) mup3_progress_pane_t1

0x62f2,	// (0x000817d7) mup3_progress_pane_t2

0xcfdc,	// (0x000884c1) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x0008ac79) mup3_progress_pane_t

0xcff9,	// (0x000884de) mup_progress_pane_cp03

0xa105,	// (0x000855ea) bg_tb_trans_pane_cp04

0x6311,	// (0x000817f6) mup3_volume_pane

0x6319,	// (0x000817fe) popup_mup3_control_window_g1

0x6322,	// (0x00081807) mup3_volume_pane_g1

0x632b,	// (0x00081810) mup3_volume_pane_g2

0x6334,	// (0x00081819) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x0008ac80) mup3_volume_pane_g

0xa105,	// (0x000855ea) bg_tb_trans_pane_cp03

0xd009,	// (0x000884ee) popup_mup3_text_window_g1

0xd011,	// (0x000884f6) popup_mup3_text_window_t1

0xa896,	// (0x00085d7b) list_calc_item_pane_g1_ParamLimits

0xca6f,	// (0x00087f54) mup_volume_pane_cp_g1

0x5c97,	// (0x0008117c) main_touch_calib_pane_t3

0x5cad,	// (0x00081192) main_touch_calib_pane_t4

0x5cc3,	// (0x000811a8) main_touch_calib_pane_t5

0x1f21,	// (0x0007d406) aid_cell_size_toolbar2

0x1f29,	// (0x0007d40e) aid_popup3_width_pane

0x0c26,	// (0x0007c10b) aid_zoom_text_msg_primary

0x2c78,	// (0x0007e15d) vorec_t7

0xa85a,	// (0x00085d3f) bg_calc_paper_pane_g1_ParamLimits

0xa866,	// (0x00085d4b) bg_calc_paper_pane_g2_ParamLimits

0xa872,	// (0x00085d57) bg_calc_paper_pane_g3_ParamLimits

0xa87e,	// (0x00085d63) bg_calc_paper_pane_g4_ParamLimits

0xa88a,	// (0x00085d6f) bg_calc_paper_pane_g5_ParamLimits

0x25bf,	// (0x0007daa4) bg_calc_paper_pane_g6_ParamLimits

0x25d0,	// (0x0007dab5) bg_calc_paper_pane_g7_ParamLimits

0x25e1,	// (0x0007dac6) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0008a622) bg_calc_paper_pane_g_ParamLimits

0x25f2,	// (0x0007dad7) calc_bg_paper_pane_g9_ParamLimits

0x2d8a,	// (0x0007e26f) image_qvga_pane_ParamLimits

0x2d8a,	// (0x0007e26f) image_qvga_pane

0xa77d,	// (0x00085c62) bg_popup_sub_pane_cp04_ParamLimits

0xb6ce,	// (0x00086bb3) popup_mup_playback_window_g1_ParamLimits

0xb6da,	// (0x00086bbf) popup_mup_playback_window_t1_ParamLimits

0xb6ef,	// (0x00086bd4) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0008a9ac) popup_mup_playback_window_t_ParamLimits

0x579a,	// (0x00080c7f) main_mup2_pane_g3_ParamLimits

0x579a,	// (0x00080c7f) main_mup2_pane_g3

0x3042,	// (0x0007e527) popup_toolbar_window_cp04

0xbae4,	// (0x00086fc9) popup_call2_audio_second_window_g3_ParamLimits

0xbae4,	// (0x00086fc9) popup_call2_audio_second_window_g3

0xbeee,	// (0x000873d3) popup_call2_audio_first_window_g4_ParamLimits

0xbeee,	// (0x000873d3) popup_call2_audio_first_window_g4

0xc56d,	// (0x00087a52) popup_call2_audio_in_window_g4_ParamLimits

0xc56d,	// (0x00087a52) popup_call2_audio_in_window_g4

0x4bab,	// (0x00080090) aid_area_sk_bg_cut_ParamLimits

0x4bab,	// (0x00080090) aid_area_sk_bg_cut

0xb704,	// (0x00086be9) aid_area_sk_bg_cut_2_ParamLimits

0xb704,	// (0x00086be9) aid_area_sk_bg_cut_2

0x5b26,	// (0x0008100b) aid_placing_details_win

0x5b2e,	// (0x00081013) aid_placing_details_win_2

0xce73,	// (0x00088358) camera2_autofocus_pane_g1_ParamLimits

0x2178,	// (0x0007d65d) popup_fixed_preview_cale_window_ParamLimits

0x2178,	// (0x0007d65d) popup_fixed_preview_cale_window

0xb4e0,	// (0x000869c5) navi_slider_pane_g3

0xb4e9,	// (0x000869ce) navi_slider_pane_g4

0xb4f2,	// (0x000869d7) navi_slider_pane_g5

0xb4e0,	// (0x000869c5) navi_slider_pane_g6

0x44fa,	// (0x0007f9df) navi_slider_pane_g7

0xb605,	// (0x00086aea) mup_scale_pane_g3

0xb60e,	// (0x00086af3) mup_scale_pane_g4

0xb617,	// (0x00086afc) mup_scale_pane_g5

0x4929,	// (0x0007fe0e) mup_scale_pane_g6

0x4932,	// (0x0007fe17) mup_scale_pane_g7

0xb4e0,	// (0x000869c5) cams2_slider_pane_g3

0xcaf1,	// (0x00087fd6) cams2_slider_pane_g4

0x5a7e,	// (0x00080f63) cams2_slider_pane_g5

0xb4e0,	// (0x000869c5) cams2_slider_pane_g6

0x5a86,	// (0x00080f6b) cams2_slider_pane_g7

0xcd1c,	// (0x00088201) camera2_autofocus_pane_cp_g1

0xc908,	// (0x00087ded) bg_popup_preview_window_pane_cp02_ParamLimits

0xc908,	// (0x00087ded) bg_popup_preview_window_pane_cp02

0xd01f,	// (0x00088504) list_fp_cale_pane_ParamLimits

0xd01f,	// (0x00088504) list_fp_cale_pane

0xd02b,	// (0x00088510) popup_fixed_preview_cale_window_t1_ParamLimits

0xd02b,	// (0x00088510) popup_fixed_preview_cale_window_t1

0x633d,	// (0x00081822) popup_fixed_preview_cale_window_t2_ParamLimits

0x633d,	// (0x00081822) popup_fixed_preview_cale_window_t2

0x6352,	// (0x00081837) popup_fixed_preview_cale_window_t3_ParamLimits

0x6352,	// (0x00081837) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x0008ac87) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x0008ac87) popup_fixed_preview_cale_window_t

0x6367,	// (0x0008184c) list_single_fp_cale_pane_ParamLimits

0x6367,	// (0x0008184c) list_single_fp_cale_pane

0xd049,	// (0x0008852e) list_single_fp_cale_pane_g1_ParamLimits

0xd049,	// (0x0008852e) list_single_fp_cale_pane_g1

0xd055,	// (0x0008853a) list_single_fp_cale_pane_g2_ParamLimits

0xd055,	// (0x0008853a) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x0008ac8e) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x0008ac8e) list_single_fp_cale_pane_g

0xd06e,	// (0x00088553) list_single_fp_cale_pane_t1_ParamLimits

0xd06e,	// (0x00088553) list_single_fp_cale_pane_t1

0xd080,	// (0x00088565) list_single_fp_cale_pane_t2_ParamLimits

0xd080,	// (0x00088565) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x0008ac95) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x0008ac95) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa105,	// (0x000855ea) main_dialer_pane

0x637a,	// (0x0008185f) aid_cell_size_keypad

0x6384,	// (0x00081869) dialer_ne_pane

0x638e,	// (0x00081873) grid_dialer_command_1_pane

0x6396,	// (0x0008187b) grid_dialer_command_2_pane

0x639e,	// (0x00081883) grid_dialer_keypad_pane

0x63b2,	// (0x00081897) bg_popup_call_pane_cp06_ParamLimits

0x63b2,	// (0x00081897) bg_popup_call_pane_cp06

0x63be,	// (0x000818a3) dialer_ne_clear_pane_ParamLimits

0x63be,	// (0x000818a3) dialer_ne_clear_pane

0xd0b3,	// (0x00088598) dialer_ne_pane_g1

0xd0bb,	// (0x000885a0) dialer_ne_pane_t1_ParamLimits

0xd0bb,	// (0x000885a0) dialer_ne_pane_t1

0x63ca,	// (0x000818af) dialer_ne_pane_t2_ParamLimits

0x63ca,	// (0x000818af) dialer_ne_pane_t2

0x63e7,	// (0x000818cc) dialer_ne_pane_t3_ParamLimits

0x63e7,	// (0x000818cc) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x0008ac9a) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x0008ac9a) dialer_ne_pane_t

0x640b,	// (0x000818f0) dialer_ne_pane_t3_copy1_ParamLimits

0x640b,	// (0x000818f0) dialer_ne_pane_t3_copy1

0x642f,	// (0x00081914) cell_dialer_keypad_pane_ParamLimits

0x642f,	// (0x00081914) cell_dialer_keypad_pane

0x6446,	// (0x0008192b) cell_dialer_command_1_pane_ParamLimits

0x6446,	// (0x0008192b) cell_dialer_command_1_pane

0x645c,	// (0x00081941) cell_dialer_command_2_pane_ParamLimits

0x645c,	// (0x00081941) cell_dialer_command_2_pane

0xd0cd,	// (0x000885b2) bg_button_pane_cp02_ParamLimits

0xd0cd,	// (0x000885b2) bg_button_pane_cp02

0x646b,	// (0x00081950) cell_dialer_keypad_pane_g1_ParamLimits

0x646b,	// (0x00081950) cell_dialer_keypad_pane_g1

0xd0cd,	// (0x000885b2) bg_button_pane_cp03_ParamLimits

0xd0cd,	// (0x000885b2) bg_button_pane_cp03

0x6480,	// (0x00081965) cell_dialer_command_1_pane_g1_ParamLimits

0x6480,	// (0x00081965) cell_dialer_command_1_pane_g1

0xd0d9,	// (0x000885be) bg_button_pane_cp04

0x6494,	// (0x00081979) cell_dialer_command_2_pane_g1

0xaa21,	// (0x00085f06) bg_button_pane_cp06

0xd0e1,	// (0x000885c6) dialer_ne_clear_pane_g1

0xb3b3,	// (0x00086898) navi_pane_g2

0xb3e1,	// (0x000868c6) navi_pane_g3

0x0002,

0xf3ca,	// (0x0008a8af) navi_pane_g

0xb470,	// (0x00086955) navi_pane_mv_g2

0xb497,	// (0x0008697c) navi_pane_mv_g5

0x44c5,	// (0x0007f9aa) navi_pane_mv_t1

0xa84e,	// (0x00085d33) main_clock2_pane

0xe72a,	// (0x00089c0f) main_clock2_list_pane_ParamLimits

0xe72a,	// (0x00089c0f) main_clock2_list_pane

0x64f0,	// (0x000819d5) main_clock2_pane_t1_ParamLimits

0x64f0,	// (0x000819d5) main_clock2_pane_t1

0x651e,	// (0x00081a03) main_clock2_pane_t2_ParamLimits

0x651e,	// (0x00081a03) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x0008aca6) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x0008aca6) main_clock2_pane_t

0x6583,	// (0x00081a68) popup_clock_analogue_window_cp03_ParamLimits

0x6583,	// (0x00081a68) popup_clock_analogue_window_cp03

0x65a1,	// (0x00081a86) popup_clock_digital_window_cp02_ParamLimits

0x65a1,	// (0x00081a86) popup_clock_digital_window_cp02

0x6616,	// (0x00081afb) main_clock2_list_single_pane_ParamLimits

0x6616,	// (0x00081afb) main_clock2_list_single_pane

0xaa21,	// (0x00085f06) list_highlight_pane_cp05

0xd11b,	// (0x00088600) main_clock2_list_single_pane_t1

0x3042,	// (0x0007e527) popup_toolbar_window_cp04_ParamLimits

0x5b50,	// (0x00081035) camera2_autofocus_pane_g2_ParamLimits

0x5b50,	// (0x00081035) camera2_autofocus_pane_g2

0x5b5c,	// (0x00081041) camera2_autofocus_pane_g3_ParamLimits

0x5b5c,	// (0x00081041) camera2_autofocus_pane_g3

0x5b68,	// (0x0008104d) camera2_autofocus_pane_g4_ParamLimits

0x5b68,	// (0x0008104d) camera2_autofocus_pane_g4

0x5b74,	// (0x00081059) camera2_autofocus_pane_g5_ParamLimits

0x5b74,	// (0x00081059) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x0008abea) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x0008abea) camera2_autofocus_pane_g

0x5d4b,	// (0x00081230) camera2_autofocus_pane_cp_g2

0x5d53,	// (0x00081238) camera2_autofocus_pane_cp_g3

0x5d5b,	// (0x00081240) camera2_autofocus_pane_cp_g4

0x5d63,	// (0x00081248) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x0008ac50) camera2_autofocus_pane_cp_g

0x63aa,	// (0x0008188f) popup_dialer_spcha_window

0xa105,	// (0x000855ea) bg_popup_sub_pane_cp07

0xd129,	// (0x0008860e) list_spcha_pane

0xd131,	// (0x00088616) list_single_spcha_pane_ParamLimits

0xd131,	// (0x00088616) list_single_spcha_pane

0xa105,	// (0x000855ea) list_highlight_pane_cp06

0xd142,	// (0x00088627) list_single_spcha_pane_t1

0xc317,	// (0x000877fc) popup_call2_audio_out_window_g4_ParamLimits

0xc317,	// (0x000877fc) popup_call2_audio_out_window_g4

0xa105,	// (0x000855ea) main_imed2_pane

0x51e6,	// (0x000806cb) popup_imed_adjust2_window

0x51f9,	// (0x000806de) popup_imed_trans_window_ParamLimits

0x51f9,	// (0x000806de) popup_imed_trans_window

0xcb5a,	// (0x0008803f) popup_blid_sat_info2_window_t1

0xcb68,	// (0x0008804d) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x0008ab7f) popup_blid_sat_info2_window_t

0x66cb,	// (0x00081bb0) aid_size_cell_colour_35

0x66e5,	// (0x00081bca) aid_size_cell_colour_112

0x66fc,	// (0x00081be1) aid_size_cell_effect

0xaae2,	// (0x00085fc7) bg_tb_trans_pane_cp02

0xb02b,	// (0x00086510) heading_imed_pane

0x6716,	// (0x00081bfb) listscroll_imed_pane

0xd150,	// (0x00088635) heading_imed_pane_g1

0xd158,	// (0x0008863d) heading_imed_pane_t1

0xd166,	// (0x0008864b) grid_imed_colour_35_pane_ParamLimits

0xd166,	// (0x0008864b) grid_imed_colour_35_pane

0x6722,	// (0x00081c07) grid_imed_effect_pane

0xd17e,	// (0x00088663) list_imed_aspect_pane

0x6732,	// (0x00081c17) scroll_pane_cp027_ParamLimits

0x6732,	// (0x00081c17) scroll_pane_cp027

0x673e,	// (0x00081c23) cell_imed_effect_pane_ParamLimits

0x673e,	// (0x00081c23) cell_imed_effect_pane

0xd186,	// (0x0008866b) cell_imed_colour_pane_ParamLimits

0xd186,	// (0x0008866b) cell_imed_colour_pane

0xd1c8,	// (0x000886ad) cell_imed_colour_pane_g1_ParamLimits

0xd1c8,	// (0x000886ad) cell_imed_colour_pane_g1

0xd1d9,	// (0x000886be) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1d9,	// (0x000886be) hgihlgiht_grid_pane_cp016

0x6756,	// (0x00081c3b) cell_imed_effect_pane_g1

0x675e,	// (0x00081c43) grid_highlight_pane_cp017

0xd1ea,	// (0x000886cf) list_imed_single_pane_ParamLimits

0xd1ea,	// (0x000886cf) list_imed_single_pane

0xa105,	// (0x000855ea) list_highlight_pane_cp07

0xd1ff,	// (0x000886e4) list_imed_aspect_pane_comp1_t1

0xc914,	// (0x00087df9) bg_tb_trans_pane_cp05

0xd221,	// (0x00088706) popup_imed_adjust2_window_g1

0xd248,	// (0x0008872d) popup_imed_adjust2_window_t1

0xd260,	// (0x00088745) slider_imed_adjust_pane

0xd274,	// (0x00088759) slider_imed_adjust_pane_g1

0xd284,	// (0x00088769) slider_imed_adjust_pane_g2

0xd294,	// (0x00088779) slider_imed_adjust_pane_g3

0xd2a5,	// (0x0008878a) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x0008acc3) slider_imed_adjust_pane_g

0x6767,	// (0x00081c4c) aid_size_cell_clipart2

0x6773,	// (0x00081c58) grid_imed_clipart_pane

0xd2b6,	// (0x0008879b) scroll_pane_cp031

0x677d,	// (0x00081c62) cell_imed_clipart_pane_ParamLimits

0x677d,	// (0x00081c62) cell_imed_clipart_pane

0x67a0,	// (0x00081c85) cell_imed_clipart_pane_g1

0xa105,	// (0x000855ea) grid_highlight_pane_cp014

0x64d2,	// (0x000819b7) main_clock2_pane_g1_ParamLimits

0x64d2,	// (0x000819b7) main_clock2_pane_g1

0x65bd,	// (0x00081aa2) aid_call2_pane_cp10

0x65cf,	// (0x00081ab4) aid_call_pane_cp10

0xb312,	// (0x000867f7) popup_clock_analogue_window_cp10_g1

0xb312,	// (0x000867f7) popup_clock_analogue_window_cp10_g2

0x65e1,	// (0x00081ac6) popup_clock_analogue_window_cp10_g3

0x65e1,	// (0x00081ac6) popup_clock_analogue_window_cp10_g4

0xb312,	// (0x000867f7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x0008acb1) popup_clock_analogue_window_cp10_g

0x65f7,	// (0x00081adc) popup_clock_analogue_window_cp10_t1

0x6628,	// (0x00081b0d) clock_digital_number_pane_cp10_ParamLimits

0x6628,	// (0x00081b0d) clock_digital_number_pane_cp10

0x6642,	// (0x00081b27) clock_digital_number_pane_cp11_ParamLimits

0x6642,	// (0x00081b27) clock_digital_number_pane_cp11

0x665c,	// (0x00081b41) clock_digital_number_pane_cp12_ParamLimits

0x665c,	// (0x00081b41) clock_digital_number_pane_cp12

0x6676,	// (0x00081b5b) clock_digital_number_pane_cp13_ParamLimits

0x6676,	// (0x00081b5b) clock_digital_number_pane_cp13

0x6690,	// (0x00081b75) clock_digital_separator_pane_cp10_ParamLimits

0x6690,	// (0x00081b75) clock_digital_separator_pane_cp10

0x66aa,	// (0x00081b8f) popup_clock_digital_window_cp02_t1_ParamLimits

0x66aa,	// (0x00081b8f) popup_clock_digital_window_cp02_t1

0xa775,	// (0x00085c5a) clock_digital_number_pane_cp10_g1

0xa775,	// (0x00085c5a) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x0008accc) clock_digital_number_pane_cp10_g

0xa775,	// (0x00085c5a) clock_digital_separator_pane_cp10_g1

0xa775,	// (0x00085c5a) clock_digital_separator_pane_g2_cp10

0xb49f,	// (0x00086984) navi_pane_vded_g4

0xb4a8,	// (0x0008698d) navi_pane_vded_g5

0xb4b1,	// (0x00086996) navi_pane_vded_t1

0xa105,	// (0x000855ea) main_vded_pane

0x67a9,	// (0x00081c8e) main_vded_pane_g1

0x67b5,	// (0x00081c9a) main_vded_pane_g2

0x67bf,	// (0x00081ca4) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x0008acd1) main_vded_pane_g

0x67c9,	// (0x00081cae) main_vded_pane_t1

0x67d7,	// (0x00081cbc) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x0008acd8) main_vded_pane_t

0x67e5,	// (0x00081cca) vded_slider_pane

0x67ef,	// (0x00081cd4) vded_video_pane

0xd2be,	// (0x000887a3) vded_video_pane_g1

0x67f9,	// (0x00081cde) vded_video_pane_g2

0xcd1c,	// (0x00088201) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x0008acdd) vded_video_pane_g

0xd2c8,	// (0x000887ad) vded_slider_pane_g1

0xca6f,	// (0x00087f54) vded_slider_pane_g2

0xd2d1,	// (0x000887b6) vded_slider_pane_g3

0xd2da,	// (0x000887bf) vded_slider_pane_g4

0xd2e3,	// (0x000887c8) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x0008ace4) vded_slider_pane_g

0x62ac,	// (0x00081791) mup3_rocker_pane_ParamLimits

0x62ac,	// (0x00081791) mup3_rocker_pane

0x6802,	// (0x00081ce7) mup3_control_keys_pane_g1

0x680a,	// (0x00081cef) mup3_control_keys_pane_g2

0x6812,	// (0x00081cf7) mup3_control_keys_pane_g3

0x681a,	// (0x00081cff) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x0008acef) mup3_control_keys_pane_g

0x21a0,	// (0x0007d685) popup_toolbar2_fixed_window_cp01_ParamLimits

0x21a0,	// (0x0007d685) popup_toolbar2_fixed_window_cp01

0x62c6,	// (0x000817ab) popup_toolbar2_fixed_window_cp02_ParamLimits

0x62c6,	// (0x000817ab) popup_toolbar2_fixed_window_cp02

0xbc56,	// (0x0008713b) popup_call2_audio_second_window_t4_ParamLimits

0xbc56,	// (0x0008713b) popup_call2_audio_second_window_t4

0xc184,	// (0x00087669) popup_call2_audio_first_window_t6_ParamLimits

0xc184,	// (0x00087669) popup_call2_audio_first_window_t6

0xc41a,	// (0x000878ff) popup_call2_audio_out_window_t6_ParamLimits

0xc41a,	// (0x000878ff) popup_call2_audio_out_window_t6

0xa105,	// (0x000855ea) main_vitu_pane

0x682a,	// (0x00081d0f) aid_size_cell_itu_ParamLimits

0x682a,	// (0x00081d0f) aid_size_cell_itu

0xe72a,	// (0x00089c0f) bg_popup_window_pane_cp08_ParamLimits

0xe72a,	// (0x00089c0f) bg_popup_window_pane_cp08

0x6838,	// (0x00081d1d) field_vitu_entry_pane_ParamLimits

0x6838,	// (0x00081d1d) field_vitu_entry_pane

0x6847,	// (0x00081d2c) grid_vitu_function_pane_ParamLimits

0x6847,	// (0x00081d2c) grid_vitu_function_pane

0x6857,	// (0x00081d3c) grid_vitu_itu_pane_ParamLimits

0x6857,	// (0x00081d3c) grid_vitu_itu_pane

0x6867,	// (0x00081d4c) cell_vitu_itu_pane_ParamLimits

0x6867,	// (0x00081d4c) cell_vitu_itu_pane

0x687c,	// (0x00081d61) cell_vitu_function_pane_ParamLimits

0x687c,	// (0x00081d61) cell_vitu_function_pane

0xaae2,	// (0x00085fc7) bg_popup_sub_pane_cp08_ParamLimits

0xaae2,	// (0x00085fc7) bg_popup_sub_pane_cp08

0x688e,	// (0x00081d73) field_vitu_entry_pane_t1_ParamLimits

0x688e,	// (0x00081d73) field_vitu_entry_pane_t1

0xd304,	// (0x000887e9) field_vitu_entry_pane_t2_ParamLimits

0xd304,	// (0x000887e9) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x0008acfd) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x0008acfd) field_vitu_entry_pane_t

0xd321,	// (0x00088806) bg_button_pane_cp05_ParamLimits

0xd321,	// (0x00088806) bg_button_pane_cp05

0x68ab,	// (0x00081d90) cell_vitu_itu_pane_g1

0x68c3,	// (0x00081da8) cell_vitu_itu_pane_t1_ParamLimits

0x68c3,	// (0x00081da8) cell_vitu_itu_pane_t1

0x68d5,	// (0x00081dba) cell_vitu_itu_pane_t2_ParamLimits

0x68d5,	// (0x00081dba) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x0008ad02) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x0008ad02) cell_vitu_itu_pane_t

0xd32f,	// (0x00088814) bg_button_pane_cp07

0x690a,	// (0x00081def) cell_vitu_function_pane_g1

0x2463,	// (0x0007d948) main_calc_pane_g1

0x1f5d,	// (0x0007d442) aid_visual_content_pane

0xa105,	// (0x000855ea) main_vradio_pane

0x6913,	// (0x00081df8) main_vradio_pane_g1_ParamLimits

0x6913,	// (0x00081df8) main_vradio_pane_g1

0xd339,	// (0x0008881e) main_vradio_pane_g2_ParamLimits

0xd339,	// (0x0008881e) main_vradio_pane_g2

0x0001,

0xf824,	// (0x0008ad09) main_vradio_pane_g_ParamLimits

0xf824,	// (0x0008ad09) main_vradio_pane_g

0x6923,	// (0x00081e08) main_vradio_pane_t1_ParamLimits

0x6923,	// (0x00081e08) main_vradio_pane_t1

0x6935,	// (0x00081e1a) main_vradio_pane_t2_ParamLimits

0x6935,	// (0x00081e1a) main_vradio_pane_t2

0xd346,	// (0x0008882b) main_vradio_pane_t3_ParamLimits

0xd346,	// (0x0008882b) main_vradio_pane_t3

0x0002,

0xf829,	// (0x0008ad0e) main_vradio_pane_t_ParamLimits

0xf829,	// (0x0008ad0e) main_vradio_pane_t

0x6947,	// (0x00081e2c) vradio_rocker_control_pane_ParamLimits

0x6947,	// (0x00081e2c) vradio_rocker_control_pane

0x6953,	// (0x00081e38) vradio_station_info_pane_ParamLimits

0x6953,	// (0x00081e38) vradio_station_info_pane

0xd35a,	// (0x0008883f) vradio_frequency_info_pane_ParamLimits

0xd35a,	// (0x0008883f) vradio_frequency_info_pane

0xcd1c,	// (0x00088201) vradio_station_info_pane_g1

0xd369,	// (0x0008884e) vradio_station_info_pane_t1_ParamLimits

0xd369,	// (0x0008884e) vradio_station_info_pane_t1

0xd38b,	// (0x00088870) vradio_station_info_pane_t2_ParamLimits

0xd38b,	// (0x00088870) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x0008ad15) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x0008ad15) vradio_station_info_pane_t

0xd39d,	// (0x00088882) vradio_tuning_pane

0xd3a5,	// (0x0008888a) vradio_rocker_control_pane_g1

0xd3ad,	// (0x00088892) vradio_rocker_control_pane_g2

0xd3b5,	// (0x0008889a) vradio_rocker_control_pane_g3

0xd3bd,	// (0x000888a2) vradio_rocker_control_pane_g4

0xd3c5,	// (0x000888aa) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x0008ad1a) vradio_rocker_control_pane_g

0x6962,	// (0x00081e47) vradio_frequency_info_pane_g1

0xd3cd,	// (0x000888b2) vradio_frequency_info_pane_t1_ParamLimits

0xd3cd,	// (0x000888b2) vradio_frequency_info_pane_t1

0x696c,	// (0x00081e51) vradio_tuning_pane_g1

0x6975,	// (0x00081e5a) vradio_tuning_pane_t1

0x1fa6,	// (0x0007d48b) area_side_right_pane_ParamLimits

0x1fa6,	// (0x0007d48b) area_side_right_pane

0xc8cf,	// (0x00087db4) status_small_pane_g1

0xc8d7,	// (0x00087dbc) status_small_pane_g2

0xc8e0,	// (0x00087dc5) status_small_pane_g3

0xc8e9,	// (0x00087dce) status_small_pane_g4

0x0003,

0xf5f0,	// (0x0008aad5) status_small_pane_g

0xc8f2,	// (0x00087dd7) status_small_pane_t1

0xa105,	// (0x000855ea) main_video3_pane

0xd3e1,	// (0x000888c6) cams_zoom_vslider_pane

0xd3e9,	// (0x000888ce) image3_wide_pane_ParamLimits

0xd3e9,	// (0x000888ce) image3_wide_pane

0xd403,	// (0x000888e8) image3_wide_small_pane

0xd40f,	// (0x000888f4) main_video3_pane_g1_ParamLimits

0xd40f,	// (0x000888f4) main_video3_pane_g1

0xd42b,	// (0x00088910) main_video3_pane_g2_ParamLimits

0xd42b,	// (0x00088910) main_video3_pane_g2

0x0001,

0xf840,	// (0x0008ad25) main_video3_pane_g_ParamLimits

0xf840,	// (0x0008ad25) main_video3_pane_g

0xd447,	// (0x0008892c) main_video3_pane_t1_ParamLimits

0xd447,	// (0x0008892c) main_video3_pane_t1

0xd472,	// (0x00088957) main_video3_pane_t2_ParamLimits

0xd472,	// (0x00088957) main_video3_pane_t2

0xd49d,	// (0x00088982) main_video3_pane_t3_ParamLimits

0xd49d,	// (0x00088982) main_video3_pane_t3

0x0002,

0xf845,	// (0x0008ad2a) main_video3_pane_t_ParamLimits

0xf845,	// (0x0008ad2a) main_video3_pane_t

0xd4ca,	// (0x000889af) cams_zoom_vslider_pane_g1

0xd4d3,	// (0x000889b8) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x0008ad31) cams_zoom_vslider_pane_g

0xd4db,	// (0x000889c0) small_slider_vertical_pane

0xcd1c,	// (0x00088201) small_slider_vertical_pane_g1

0xcd1c,	// (0x00088201) small_slider_vertical_pane_g2

0xd4e3,	// (0x000889c8) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x0008ad36) small_slider_vertical_pane_g

0xa105,	// (0x000855ea) main_hwr_training_pane

0xd4ec,	// (0x000889d1) hwr_training_instruct_pane_ParamLimits

0xd4ec,	// (0x000889d1) hwr_training_instruct_pane

0x6984,	// (0x00081e69) hwr_training_navi_pane_ParamLimits

0x6984,	// (0x00081e69) hwr_training_navi_pane

0x699e,	// (0x00081e83) hwr_training_write_pane_ParamLimits

0x699e,	// (0x00081e83) hwr_training_write_pane

0xa105,	// (0x000855ea) bg_frame_shadow_pane

0xd523,	// (0x00088a08) hwr_training_write_pane_g1

0xd52b,	// (0x00088a10) hwr_training_write_pane_g2

0xd533,	// (0x00088a18) hwr_training_write_pane_g3

0xd53b,	// (0x00088a20) hwr_training_write_pane_g4

0xd543,	// (0x00088a28) hwr_training_write_pane_g5

0xd54b,	// (0x00088a30) hwr_training_write_pane_g6

0xd553,	// (0x00088a38) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x0008ad3d) hwr_training_write_pane_g

0x69d6,	// (0x00081ebb) hwr_training_navi_pane_g1_ParamLimits

0x69d6,	// (0x00081ebb) hwr_training_navi_pane_g1

0x69e8,	// (0x00081ecd) hwr_training_navi_pane_g2_ParamLimits

0x69e8,	// (0x00081ecd) hwr_training_navi_pane_g2

0x69fa,	// (0x00081edf) hwr_training_navi_pane_g3_ParamLimits

0x69fa,	// (0x00081edf) hwr_training_navi_pane_g3

0x6a0a,	// (0x00081eef) hwr_training_navi_pane_g4_ParamLimits

0x6a0a,	// (0x00081eef) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x0008ad4c) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x0008ad4c) hwr_training_navi_pane_g

0x6a24,	// (0x00081f09) hwr_training_navi_pane_t1

0x6a32,	// (0x00081f17) list_single_hwr_training_instruct_pane_ParamLimits

0x6a32,	// (0x00081f17) list_single_hwr_training_instruct_pane

0xd55b,	// (0x00088a40) list_single_hwr_training_instruct_pane_t1

0xcc5c,	// (0x00088141) bg_frame_shadow_pane_g1

0xd56a,	// (0x00088a4f) bg_frame_shadow_pane_g2

0xd572,	// (0x00088a57) bg_frame_shadow_pane_g3

0xd57a,	// (0x00088a5f) bg_frame_shadow_pane_g4

0xd582,	// (0x00088a67) bg_frame_shadow_pane_g5

0xd58a,	// (0x00088a6f) bg_frame_shadow_pane_g6

0xd592,	// (0x00088a77) bg_frame_shadow_pane_g7

0xa915,	// (0x00085dfa) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x0008ad57) bg_frame_shadow_pane_g

0xa105,	// (0x000855ea) main_video_tele_dialer_pane

0x6a5b,	// (0x00081f40) aid_size_cell_video_keypad_ParamLimits

0x6a5b,	// (0x00081f40) aid_size_cell_video_keypad

0x6a6b,	// (0x00081f50) grid_video_dialer_keypad_pane_ParamLimits

0x6a6b,	// (0x00081f50) grid_video_dialer_keypad_pane

0x6a9f,	// (0x00081f84) video_down_pane_cp_ParamLimits

0x6a9f,	// (0x00081f84) video_down_pane_cp

0x6ac9,	// (0x00081fae) cell_video_dialer_keypad_pane_ParamLimits

0x6ac9,	// (0x00081fae) cell_video_dialer_keypad_pane

0xd59a,	// (0x00088a7f) bg_button_pane_cp08_ParamLimits

0xd59a,	// (0x00088a7f) bg_button_pane_cp08

0x6ade,	// (0x00081fc3) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6ade,	// (0x00081fc3) cell_video_dialer_keypad_pane_g1

0x62a0,	// (0x00081785) mup3_rocker2_pane_ParamLimits

0x62a0,	// (0x00081785) mup3_rocker2_pane

0xcd1c,	// (0x00088201) mup3_rocker2_pane_g1

0x515a,	// (0x0008063f) main_dialer2_pane

0xa105,	// (0x000855ea) main_mp4_pane

0x6b36,	// (0x0008201b) main_mp4_pane_g1_ParamLimits

0x6b36,	// (0x0008201b) main_mp4_pane_g1

0x6b44,	// (0x00082029) main_mp4_pane_g2_ParamLimits

0x6b44,	// (0x00082029) main_mp4_pane_g2

0x6b52,	// (0x00082037) main_mp4_pane_g3_ParamLimits

0x6b52,	// (0x00082037) main_mp4_pane_g3

0x6b97,	// (0x0008207c) main_mp4_pane_g4_ParamLimits

0x6b97,	// (0x0008207c) main_mp4_pane_g4

0x6bc5,	// (0x000820aa) main_mp4_pane_g5_ParamLimits

0x6bc5,	// (0x000820aa) main_mp4_pane_g5

0x0007,

0xf892,	// (0x0008ad77) main_mp4_pane_g_ParamLimits

0xf892,	// (0x0008ad77) main_mp4_pane_g

0x6c39,	// (0x0008211e) main_mp4_pane_t1_ParamLimits

0x6c39,	// (0x0008211e) main_mp4_pane_t1

0x6c95,	// (0x0008217a) main_mp4_pane_t2_ParamLimits

0x6c95,	// (0x0008217a) main_mp4_pane_t2

0xd5a6,	// (0x00088a8b) main_mp4_pane_t3_ParamLimits

0xd5a6,	// (0x00088a8b) main_mp4_pane_t3

0x6ce7,	// (0x000821cc) main_mp4_pane_t4_ParamLimits

0x6ce7,	// (0x000821cc) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x0008ad88) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x0008ad88) main_mp4_pane_t

0x6d2b,	// (0x00082210) mp4_progress_pane_ParamLimits

0x6d2b,	// (0x00082210) mp4_progress_pane

0x6d75,	// (0x0008225a) mp4_rocker_pane_ParamLimits

0x6d75,	// (0x0008225a) mp4_rocker_pane

0xd5f1,	// (0x00088ad6) mp4_progress_pane_t1

0xd60a,	// (0x00088aef) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x0008ad91) mp4_progress_pane_t

0xd623,	// (0x00088b08) mup_progress_pane_cp04

0xcd1c,	// (0x00088201) mp4_rocker_pane_g1

0x6d95,	// (0x0008227a) aid_cell_size_keypad2_ParamLimits

0x6d95,	// (0x0008227a) aid_cell_size_keypad2

0x6da5,	// (0x0008228a) dialer2_ne_pane_ParamLimits

0x6da5,	// (0x0008228a) dialer2_ne_pane

0x6db3,	// (0x00082298) grid_dialer2_keypad_pane_ParamLimits

0x6db3,	// (0x00082298) grid_dialer2_keypad_pane

0xdaec,	// (0x00088fd1) bg_popup_call_pane_cp07_ParamLimits

0xdaec,	// (0x00088fd1) bg_popup_call_pane_cp07

0x6dc3,	// (0x000822a8) dialer2_ne_pane_t1_ParamLimits

0x6dc3,	// (0x000822a8) dialer2_ne_pane_t1

0x6de8,	// (0x000822cd) cell_dialer2_keypad_pane_ParamLimits

0x6de8,	// (0x000822cd) cell_dialer2_keypad_pane

0xd648,	// (0x00088b2d) bg_button_pane_pane_cp04_ParamLimits

0xd648,	// (0x00088b2d) bg_button_pane_pane_cp04

0x6dfd,	// (0x000822e2) cell_dialer2_keypad_pane_g1_ParamLimits

0x6dfd,	// (0x000822e2) cell_dialer2_keypad_pane_g1

0x2f04,	// (0x0007e3e9) aid_placing_vt_set_content_ParamLimits

0x2f04,	// (0x0007e3e9) aid_placing_vt_set_content

0x2f30,	// (0x0007e415) aid_placing_vt_set_title_ParamLimits

0x2f30,	// (0x0007e415) aid_placing_vt_set_title

0xa105,	// (0x000855ea) main_image3_pane

0x6e97,	// (0x0008237c) area_side_right_pane_cp01_ParamLimits

0x6e97,	// (0x0008237c) area_side_right_pane_cp01

0xa8c3,	// (0x00085da8) main_image3_pane_g1_ParamLimits

0xa8c3,	// (0x00085da8) main_image3_pane_g1

0x6ec4,	// (0x000823a9) main_image3_pane_g2_ParamLimits

0x6ec4,	// (0x000823a9) main_image3_pane_g2

0x6edd,	// (0x000823c2) main_image3_pane_g3_ParamLimits

0x6edd,	// (0x000823c2) main_image3_pane_g3

0x6ef6,	// (0x000823db) main_image3_pane_g4_ParamLimits

0x6ef6,	// (0x000823db) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x0008ada0) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x0008ada0) main_image3_pane_g

0x6f0f,	// (0x000823f4) main_image3_pane_t1_ParamLimits

0x6f0f,	// (0x000823f4) main_image3_pane_t1

0x6f34,	// (0x00082419) main_image3_pane_t2_ParamLimits

0x6f34,	// (0x00082419) main_image3_pane_t2

0x6f53,	// (0x00082438) main_image3_pane_t3_ParamLimits

0x6f53,	// (0x00082438) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x0008ada9) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x0008ada9) main_image3_pane_t

0xe72a,	// (0x00089c0f) grid_sctrl_middle_pane_cp01_ParamLimits

0xe72a,	// (0x00089c0f) grid_sctrl_middle_pane_cp01

0x6fb4,	// (0x00082499) cell_sctrl_middle_pane_cp01_ParamLimits

0x6fb4,	// (0x00082499) cell_sctrl_middle_pane_cp01

0x6fc5,	// (0x000824aa) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6fc5,	// (0x000824aa) cell_sctrl_middle_pane_cp01_g1

0xa105,	// (0x000855ea) main_call4_pane

0x6fd2,	// (0x000824b7) aid_size_button_call4_ParamLimits

0x6fd2,	// (0x000824b7) aid_size_button_call4

0x7008,	// (0x000824ed) call4_windows_pane_ParamLimits

0x7008,	// (0x000824ed) call4_windows_pane

0x701d,	// (0x00082502) grid_call4_button_pane_ParamLimits

0x701d,	// (0x00082502) grid_call4_button_pane

0x704b,	// (0x00082530) call4_windows_conf_pane

0x7062,	// (0x00082547) popup_call4_audio_first_window_ParamLimits

0x7062,	// (0x00082547) popup_call4_audio_first_window

0x70b2,	// (0x00082597) popup_call4_audio_second_window_ParamLimits

0x70b2,	// (0x00082597) popup_call4_audio_second_window

0x70cb,	// (0x000825b0) popup_call4_audio_wait_window_ParamLimits

0x70cb,	// (0x000825b0) popup_call4_audio_wait_window

0x70d9,	// (0x000825be) cell_call4_button_pane_ParamLimits

0x70d9,	// (0x000825be) cell_call4_button_pane

0x70fc,	// (0x000825e1) bg_button_pane_cp09_ParamLimits

0x70fc,	// (0x000825e1) bg_button_pane_cp09

0x7108,	// (0x000825ed) cell_call4_button_pane_g1_ParamLimits

0x7108,	// (0x000825ed) cell_call4_button_pane_g1

0x7115,	// (0x000825fa) cell_call4_button_pane_t1_ParamLimits

0x7115,	// (0x000825fa) cell_call4_button_pane_t1

0xd65c,	// (0x00088b41) popup_call4_audio_conf_window_ParamLimits

0xd65c,	// (0x00088b41) popup_call4_audio_conf_window

0x62d3,	// (0x000817b8) mup3_progress_pane_t1_ParamLimits

0x62f2,	// (0x000817d7) mup3_progress_pane_t2_ParamLimits

0xcfdc,	// (0x000884c1) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x0008ac79) mup3_progress_pane_t_ParamLimits

0xcff9,	// (0x000884de) mup_progress_pane_cp03_ParamLimits

0x6822,	// (0x00081d07) mup3_control_keys_pane_g4_copy1

0x6d59,	// (0x0008223e) mp4_rocker2_pane_ParamLimits

0x6d59,	// (0x0008223e) mp4_rocker2_pane

0xd670,	// (0x00088b55) mp4_rocker2_pane_g1

0xd678,	// (0x00088b5d) mp4_rocker2_pane_g2

0x7159,	// (0x0008263e) mp4_rocker2_pane_g3

0x7161,	// (0x00082646) mp4_rocker2_pane_g4

0x7169,	// (0x0008264e) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x0008adb2) mp4_rocker2_pane_g

0xa105,	// (0x000855ea) main_camera4_pane

0xa105,	// (0x000855ea) main_video4_pane

0x6a7b,	// (0x00081f60) main_video_tele_dialer_pane_t1_ParamLimits

0x6a7b,	// (0x00081f60) main_video_tele_dialer_pane_t1

0x6a8d,	// (0x00081f72) main_video_tele_dialer_pane_t2_ParamLimits

0x6a8d,	// (0x00081f72) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x0008ad68) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x0008ad68) main_video_tele_dialer_pane_t

0x7189,	// (0x0008266e) cam4_autofocus_pane_ParamLimits

0x7189,	// (0x0008266e) cam4_autofocus_pane

0x71a3,	// (0x00082688) cam4_image_uncrop_pane_ParamLimits

0x71a3,	// (0x00082688) cam4_image_uncrop_pane

0x71ba,	// (0x0008269f) cam4_indicators_pane_ParamLimits

0x71ba,	// (0x0008269f) cam4_indicators_pane

0x71d6,	// (0x000826bb) main_camera4_pane_g1_ParamLimits

0x71d6,	// (0x000826bb) main_camera4_pane_g1

0x71e2,	// (0x000826c7) main_camera4_pane_g2_ParamLimits

0x71e2,	// (0x000826c7) main_camera4_pane_g2

0x71e2,	// (0x000826c7) main_camera4_pane_g3_ParamLimits

0x71e2,	// (0x000826c7) main_camera4_pane_g3

0x71ee,	// (0x000826d3) main_camera4_pane_g4_ParamLimits

0x71ee,	// (0x000826d3) main_camera4_pane_g4

0x71fa,	// (0x000826df) main_camera4_pane_g5_ParamLimits

0x71fa,	// (0x000826df) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x0008adbd) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x0008adbd) main_camera4_pane_g

0x7214,	// (0x000826f9) main_camera4_pane_t1_ParamLimits

0x7214,	// (0x000826f9) main_camera4_pane_t1

0xcf61,	// (0x00088446) bg_tb_trans_pane_cp06

0x7264,	// (0x00082749) cam4_indicators_pane_g1

0x7275,	// (0x0008275a) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x0008add8) cam4_indicators_pane_g

0x728d,	// (0x00082772) cam4_indicators_pane_t1

0x72b7,	// (0x0008279c) main_video4_pane_g1_ParamLimits

0x72b7,	// (0x0008279c) main_video4_pane_g1

0x72c3,	// (0x000827a8) main_video4_pane_g2_ParamLimits

0x72c3,	// (0x000827a8) main_video4_pane_g2

0x72cf,	// (0x000827b4) main_video4_pane_g3_ParamLimits

0x72cf,	// (0x000827b4) main_video4_pane_g3

0x72db,	// (0x000827c0) main_video4_pane_g4_ParamLimits

0x72db,	// (0x000827c0) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x0008addf) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x0008addf) main_video4_pane_g

0x72fb,	// (0x000827e0) vid4_indicators_pane_ParamLimits

0x72fb,	// (0x000827e0) vid4_indicators_pane

0x731a,	// (0x000827ff) video4_image_uncrop_cif_pane_ParamLimits

0x731a,	// (0x000827ff) video4_image_uncrop_cif_pane

0x7329,	// (0x0008280e) video4_image_uncrop_nhd_pane_ParamLimits

0x7329,	// (0x0008280e) video4_image_uncrop_nhd_pane

0x71a3,	// (0x00082688) video4_image_uncrop_vga_pane_ParamLimits

0x71a3,	// (0x00082688) video4_image_uncrop_vga_pane

0xaae2,	// (0x00085fc7) bg_tb_trans_pane_cp07

0x733e,	// (0x00082823) vid4_indicators_pane_g1

0x7352,	// (0x00082837) vid4_indicators_pane_g2

0x7366,	// (0x0008284b) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x0008adea) vid4_indicators_pane_g

0x7393,	// (0x00082878) vid4_indicators_pane_t1

0x73aa,	// (0x0008288f) cam4_autofocus_pane_g1

0x73b2,	// (0x00082897) cam4_autofocus_pane_g2

0x73ba,	// (0x0008289f) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x0008adf5) cam4_autofocus_pane_g

0x73c2,	// (0x000828a7) cam4_autofocus_pane_g3_copy1

0x6aad,	// (0x00081f92) video_down_pane_cp_t1

0x6abb,	// (0x00081fa0) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x0008ad6d) video_down_pane_cp_t

0xe72a,	// (0x00089c0f) popup_vitu2_window_ParamLimits

0xe72a,	// (0x00089c0f) popup_vitu2_window

0x73ca,	// (0x000828af) aid_size_cell2_itu2_ParamLimits

0x73ca,	// (0x000828af) aid_size_cell2_itu2

0x73ec,	// (0x000828d1) aid_size_cell_itu2_ParamLimits

0x73ec,	// (0x000828d1) aid_size_cell_itu2

0xdaec,	// (0x00088fd1) bg_popup_window_pane_cp09_ParamLimits

0xdaec,	// (0x00088fd1) bg_popup_window_pane_cp09

0x7430,	// (0x00082915) field_vitu2_entry_pane_ParamLimits

0x7430,	// (0x00082915) field_vitu2_entry_pane

0x7450,	// (0x00082935) grid_vitu2_function_pane_ParamLimits

0x7450,	// (0x00082935) grid_vitu2_function_pane

0x7494,	// (0x00082979) grid_vitu2_itu_pane_ParamLimits

0x7494,	// (0x00082979) grid_vitu2_itu_pane

0x750e,	// (0x000829f3) cell_vitu2_itu_pane_ParamLimits

0x750e,	// (0x000829f3) cell_vitu2_itu_pane

0x7527,	// (0x00082a0c) cell_vitu2_function_pane_ParamLimits

0x7527,	// (0x00082a0c) cell_vitu2_function_pane

0xd680,	// (0x00088b65) bg_popup_call_pane_cp08_ParamLimits

0xd680,	// (0x00088b65) bg_popup_call_pane_cp08

0xd697,	// (0x00088b7c) field_vitu2_entry_pane_g1

0xd6a3,	// (0x00088b88) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x0008adfc) field_vitu2_entry_pane_g

0x0f73,	// (0x0007c458) field_vitu2_entry_pane_t1_ParamLimits

0x0f73,	// (0x0007c458) field_vitu2_entry_pane_t1

0x0fa3,	// (0x0007c488) field_vitu2_entry_pane_t2_ParamLimits

0x0fa3,	// (0x0007c488) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x0008ae03) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x0008ae03) field_vitu2_entry_pane_t

0x7568,	// (0x00082a4d) bg_button_pane_cp010_ParamLimits

0x7568,	// (0x00082a4d) bg_button_pane_cp010

0x7576,	// (0x00082a5b) cell_vitu2_itu_pane_g1

0x7596,	// (0x00082a7b) cell_vitu2_itu_pane_t1_ParamLimits

0x7596,	// (0x00082a7b) cell_vitu2_itu_pane_t1

0x0fc0,	// (0x0007c4a5) cell_vitu2_itu_pane_t2_ParamLimits

0x0fc0,	// (0x0007c4a5) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x0008ae0d) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x0008ae0d) cell_vitu2_itu_pane_t

0xaae2,	// (0x00085fc7) bg_button_pane_cp011

0x75e2,	// (0x00082ac7) cell_vitu2_function_pane_g1

0xa105,	// (0x000855ea) main_myfav_hc_pane

0x6f95,	// (0x0008247a) popup_image3_note_pane_ParamLimits

0x6f95,	// (0x0008247a) popup_image3_note_pane

0x6fa3,	// (0x00082488) popup_image3_tool_bar_pane_ParamLimits

0x6fa3,	// (0x00082488) popup_image3_tool_bar_pane

0x1036,	// (0x0007c51b) cell_vitu2_itu_pane_t3_ParamLimits

0x1036,	// (0x0007c51b) cell_vitu2_itu_pane_t3

0xa105,	// (0x000855ea) bg_popup_trans_pane

0xd6c5,	// (0x00088baa) grid_image3_tool_bar_pane

0xd6cf,	// (0x00088bb4) bg_popup_trans_pane_g1

0xace7,	// (0x000861cc) bg_popup_trans_pane_g2

0xd6d7,	// (0x00088bbc) bg_popup_trans_pane_g3

0xd6df,	// (0x00088bc4) bg_popup_trans_pane_g4

0xd6e7,	// (0x00088bcc) bg_popup_trans_pane_g5

0xd6ef,	// (0x00088bd4) bg_popup_trans_pane_g6

0xd6f7,	// (0x00088bdc) bg_popup_trans_pane_g7

0xd6ff,	// (0x00088be4) bg_popup_trans_pane_g8

0xacc7,	// (0x000861ac) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x0008ae14) bg_popup_trans_pane_g

0xd707,	// (0x00088bec) cell_image3_tool_bar_pane_ParamLimits

0xd707,	// (0x00088bec) cell_image3_tool_bar_pane

0xcd1c,	// (0x00088201) cell_image3_tool_bar_pane_g1

0xa105,	// (0x000855ea) bg_popup_trans_pane_cp1

0xd71b,	// (0x00088c00) popup_image3_note_pane_t1

0xd729,	// (0x00088c0e) popup_image3_note_pane_t2

0xd737,	// (0x00088c1c) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x0008ae27) popup_image3_note_pane_t

0xd745,	// (0x00088c2a) popup_image3_note_pane_t3_copy1

0x75f6,	// (0x00082adb) bg_myfav_hc_instruction_pane_ParamLimits

0x75f6,	// (0x00082adb) bg_myfav_hc_instruction_pane

0x760e,	// (0x00082af3) cell_myfav_contact_pane_ParamLimits

0x760e,	// (0x00082af3) cell_myfav_contact_pane

0x7628,	// (0x00082b0d) cell_myfav_contact_pane_cp1_ParamLimits

0x7628,	// (0x00082b0d) cell_myfav_contact_pane_cp1

0x7640,	// (0x00082b25) cell_myfav_contact_pane_cp2_ParamLimits

0x7640,	// (0x00082b25) cell_myfav_contact_pane_cp2

0x7658,	// (0x00082b3d) cell_myfav_contact_pane_cp3_ParamLimits

0x7658,	// (0x00082b3d) cell_myfav_contact_pane_cp3

0x766f,	// (0x00082b54) cell_myfav_contact_pane_cp4_ParamLimits

0x766f,	// (0x00082b54) cell_myfav_contact_pane_cp4

0x7685,	// (0x00082b6a) cell_myfav_contact_pane_cp5_ParamLimits

0x7685,	// (0x00082b6a) cell_myfav_contact_pane_cp5

0x7699,	// (0x00082b7e) cell_myfav_contact_pane_cp6_ParamLimits

0x7699,	// (0x00082b7e) cell_myfav_contact_pane_cp6

0x76ad,	// (0x00082b92) cell_myfav_contact_pane_cp7_ParamLimits

0x76ad,	// (0x00082b92) cell_myfav_contact_pane_cp7

0xd753,	// (0x00088c38) listscroll_gen_pane_cp05

0x76c5,	// (0x00082baa) main_myfav_hc_pane_g1_ParamLimits

0x76c5,	// (0x00082baa) main_myfav_hc_pane_g1

0x76db,	// (0x00082bc0) main_myfav_hc_pane_g2_ParamLimits

0x76db,	// (0x00082bc0) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x0008ae2e) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x0008ae2e) main_myfav_hc_pane_g

0x770b,	// (0x00082bf0) main_myfav_hc_pane_t1_ParamLimits

0x770b,	// (0x00082bf0) main_myfav_hc_pane_t1

0xd75c,	// (0x00088c41) main_myfav_hc_pane_t2_ParamLimits

0xd75c,	// (0x00088c41) main_myfav_hc_pane_t2

0xd76e,	// (0x00088c53) main_myfav_hc_pane_t3_ParamLimits

0xd76e,	// (0x00088c53) main_myfav_hc_pane_t3

0x7722,	// (0x00082c07) main_myfav_hc_pane_t4_ParamLimits

0x7722,	// (0x00082c07) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x0008ae35) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x0008ae35) main_myfav_hc_pane_t

0xcd1c,	// (0x00088201) bg_myfav_hc_instruction_pane_g1

0xd780,	// (0x00088c65) cell_myfav_contact_pane_g1_ParamLimits

0xd780,	// (0x00088c65) cell_myfav_contact_pane_g1

0xd780,	// (0x00088c65) cell_myfav_contact_pane_g2_ParamLimits

0xd780,	// (0x00088c65) cell_myfav_contact_pane_g2

0xd78c,	// (0x00088c71) cell_myfav_contact_pane_g3_ParamLimits

0xd78c,	// (0x00088c71) cell_myfav_contact_pane_g3

0xcfc6,	// (0x000884ab) cell_myfav_contact_pane_g4_ParamLimits

0xcfc6,	// (0x000884ab) cell_myfav_contact_pane_g4

0xd799,	// (0x00088c7e) cell_myfav_contact_pane_g5_ParamLimits

0xd799,	// (0x00088c7e) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x0008ae40) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x0008ae40) cell_myfav_contact_pane_g

0x76f3,	// (0x00082bd8) main_myfav_hc_pane_g3_ParamLimits

0x76f3,	// (0x00082bd8) main_myfav_hc_pane_g3

0x20db,	// (0x0007d5c0) popup_adpt_find_window

0x774c,	// (0x00082c31) afind_page_pane_ParamLimits

0x774c,	// (0x00082c31) afind_page_pane

0x7759,	// (0x00082c3e) aid_size_cell_afind_ParamLimits

0x7759,	// (0x00082c3e) aid_size_cell_afind

0x7773,	// (0x00082c58) bg_popup_sub_pane_cp09_ParamLimits

0x7773,	// (0x00082c58) bg_popup_sub_pane_cp09

0x7780,	// (0x00082c65) find_pane_cp01_ParamLimits

0x7780,	// (0x00082c65) find_pane_cp01

0xd7a5,	// (0x00088c8a) grid_afind_control_pane_ParamLimits

0xd7a5,	// (0x00088c8a) grid_afind_control_pane

0x778d,	// (0x00082c72) grid_afind_pane_ParamLimits

0x778d,	// (0x00082c72) grid_afind_pane

0x77a7,	// (0x00082c8c) cell_afind_pane_ParamLimits

0x77a7,	// (0x00082c8c) cell_afind_pane

0xcd1c,	// (0x00088201) afind_page_pane_g1

0x77ef,	// (0x00082cd4) afind_page_pane_g2

0x77f8,	// (0x00082cdd) afind_page_pane_g3

0x0002,

0xf966,	// (0x0008ae4b) afind_page_pane_g

0x7801,	// (0x00082ce6) afind_page_pane_t1

0xd7b9,	// (0x00088c9e) cell_afind_grid_control_pane_ParamLimits

0xd7b9,	// (0x00088c9e) cell_afind_grid_control_pane

0xd648,	// (0x00088b2d) bg_button_pane_cp69_ParamLimits

0xd648,	// (0x00088b2d) bg_button_pane_cp69

0x7821,	// (0x00082d06) cell_afind_pane_g1_ParamLimits

0x7821,	// (0x00082d06) cell_afind_pane_g1

0x782e,	// (0x00082d13) cell_afind_pane_t1_ParamLimits

0x782e,	// (0x00082d13) cell_afind_pane_t1

0xaa73,	// (0x00085f58) bg_button_pane_cp72

0xd7c8,	// (0x00088cad) cell_afind_grid_control_pane_g1

0x4cd2,	// (0x000801b7) aid_image_placing_area_ParamLimits

0x4cd2,	// (0x000801b7) aid_image_placing_area

0xd2ec,	// (0x000887d1) field_vitu_entry_pane_g1_ParamLimits

0xd2ec,	// (0x000887d1) field_vitu_entry_pane_g1

0xd2f8,	// (0x000887dd) field_vitu_entry_pane_g2_ParamLimits

0xd2f8,	// (0x000887dd) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x0008acf8) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x0008acf8) field_vitu_entry_pane_g

0x68ab,	// (0x00081d90) cell_vitu_itu_pane_g1_ParamLimits

0x68ed,	// (0x00081dd2) cell_vitu_itu_pane_t3_ParamLimits

0x68ed,	// (0x00081dd2) cell_vitu_itu_pane_t3

0xd5f1,	// (0x00088ad6) mp4_progress_pane_t1_ParamLimits

0xd60a,	// (0x00088aef) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x0008ad91) mp4_progress_pane_t_ParamLimits

0xd623,	// (0x00088b08) mup_progress_pane_cp04_ParamLimits

0x7736,	// (0x00082c1b) main_myfav_hc_pane_t5_ParamLimits

0x7736,	// (0x00082c1b) main_myfav_hc_pane_t5

0x0c2e,	// (0x0007c113) aid_zoom_text_primary

0x20db,	// (0x0007d5c0) popup_adpt_find_window_ParamLimits

0xaae2,	// (0x00085fc7) main_cam_set_pane

0x71c8,	// (0x000826ad) cam4_zoom_pane_ParamLimits

0x71c8,	// (0x000826ad) cam4_zoom_pane

0x7840,	// (0x00082d25) main_cam_set_pane_g1_ParamLimits

0x7840,	// (0x00082d25) main_cam_set_pane_g1

0x784e,	// (0x00082d33) main_cam_set_pane_g2_ParamLimits

0x784e,	// (0x00082d33) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x0008ae52) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x0008ae52) main_cam_set_pane_g

0x785a,	// (0x00082d3f) main_cam_set_pane_t1_ParamLimits

0x785a,	// (0x00082d3f) main_cam_set_pane_t1

0x7876,	// (0x00082d5b) main_cset_listscroll_pane_ParamLimits

0x7876,	// (0x00082d5b) main_cset_listscroll_pane

0x78a1,	// (0x00082d86) main_cset_slider_pane_ParamLimits

0x78a1,	// (0x00082d86) main_cset_slider_pane

0xd7d9,	// (0x00088cbe) main_cset_list_pane_ParamLimits

0xd7d9,	// (0x00088cbe) main_cset_list_pane

0xd7e9,	// (0x00088cce) scroll_pane_cp028

0x78c0,	// (0x00082da5) aid_area_touch_slider

0x78dc,	// (0x00082dc1) cset_slider_pane

0x7906,	// (0x00082deb) main_cset_slider_pane_g1

0x791b,	// (0x00082e00) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x0008ae57) main_cset_slider_pane_g

0xd822,	// (0x00088d07) main_cset_slider_pane_t1

0x79e1,	// (0x00082ec6) main_cset_slider_pane_t2

0x79fb,	// (0x00082ee0) main_cset_slider_pane_t3

0x7a15,	// (0x00082efa) main_cset_slider_pane_t4

0x7a33,	// (0x00082f18) main_cset_slider_pane_t5

0x7a51,	// (0x00082f36) main_cset_slider_pane_t6

0x7a68,	// (0x00082f4d) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x0008ae7c) main_cset_slider_pane_t

0x7b76,	// (0x0008305b) cset_list_set_pane_ParamLimits

0x7b76,	// (0x0008305b) cset_list_set_pane

0x7b8f,	// (0x00083074) aid_position_infowindow_above

0x7b97,	// (0x0008307c) aid_position_infowindow_below

0x7b9f,	// (0x00083084) cset_list_set_pane_g1_ParamLimits

0x7b9f,	// (0x00083084) cset_list_set_pane_g1

0x1088,	// (0x0007c56d) cset_list_set_pane_g3_ParamLimits

0x1088,	// (0x0007c56d) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x0008ae9b) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x0008ae9b) cset_list_set_pane_g

0x1097,	// (0x0007c57c) cset_list_set_pane_t1_ParamLimits

0x1097,	// (0x0007c57c) cset_list_set_pane_t1

0xaae2,	// (0x00085fc7) list_highlight_pane_cp021_ParamLimits

0xaae2,	// (0x00085fc7) list_highlight_pane_cp021

0xb605,	// (0x00086aea) cset_slider_pane_g1

0xb617,	// (0x00086afc) cset_slider_pane_g2

0xb60e,	// (0x00086af3) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x0008aea0) cset_slider_pane_g

0x7bab,	// (0x00083090) aid_area_touch_cam4_zoom

0x7bb3,	// (0x00083098) cam4_zoom_cont_pane

0x7bbb,	// (0x000830a0) cam4_zoom_pane_g1

0x7bc3,	// (0x000830a8) cam4_zoom_pane_g2

0x7bcb,	// (0x000830b0) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x0008aea7) cam4_zoom_pane_g

0xd4e3,	// (0x000889c8) cam4_zoom_cont_pane_g1

0xdd64,	// (0x00089249) cam4_zoom_cont_pane_g2

0xdd6d,	// (0x00089252) cam4_zoom_cont_pane_g3

0x0002,

0xf9c9,	// (0x0008aeae) cam4_zoom_cont_pane_g

0x6fec,	// (0x000824d1) call4_image_pane_ParamLimits

0x6fec,	// (0x000824d1) call4_image_pane

0x704b,	// (0x00082530) call4_windows_conf_pane_ParamLimits

0x7090,	// (0x00082575) popup_call4_audio_in_window_ParamLimits

0x7090,	// (0x00082575) popup_call4_audio_in_window

0xa105,	// (0x000855ea) bg_popup_call2_act_pane_cp02

0xd654,	// (0x00088b39) call4_list_conf_pane

0xcd1c,	// (0x00088201) call4_image_pane_g1

0xcd1c,	// (0x00088201) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x0008abb9) call4_image_pane_g

0xd8e4,	// (0x00088dc9) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8e4,	// (0x00088dc9) list_single_graphic_popup_conf4_pane

0xa105,	// (0x000855ea) list_highlight_pane_cp022

0xd8f7,	// (0x00088ddc) list_single_graphic_popup_conf4_pane_g1

0xb201,	// (0x000866e6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d0,	// (0x0008aeb5) list_single_graphic_popup_conf4_pane_g

0xd8ff,	// (0x00088de4) list_single_graphic_popup_conf4_pane_t1

0x3094,	// (0x0007e579) popup_vtel_slider_window_ParamLimits

0x3094,	// (0x0007e579) popup_vtel_slider_window

0xd636,	// (0x00088b1b) dialer2_ne_pane_t2_ParamLimits

0xd636,	// (0x00088b1b) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x0008ad96) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x0008ad96) dialer2_ne_pane_t

0xaae2,	// (0x00085fc7) bg_popup_sub_pane_cp010_ParamLimits

0xaae2,	// (0x00085fc7) bg_popup_sub_pane_cp010

0x7bd3,	// (0x000830b8) popup_vtel_slider_window_g1_ParamLimits

0x7bd3,	// (0x000830b8) popup_vtel_slider_window_g1

0x7bdf,	// (0x000830c4) popup_vtel_slider_window_g2_ParamLimits

0x7bdf,	// (0x000830c4) popup_vtel_slider_window_g2

0x0003,

0xf9d5,	// (0x0008aeba) popup_vtel_slider_window_g_ParamLimits

0xf9d5,	// (0x0008aeba) popup_vtel_slider_window_g

0x7c27,	// (0x0008310c) vtel_slider_pane_ParamLimits

0x7c27,	// (0x0008310c) vtel_slider_pane

0x7c36,	// (0x0008311b) vtel_slider_pane_g1_ParamLimits

0x7c36,	// (0x0008311b) vtel_slider_pane_g1

0x7c43,	// (0x00083128) vtel_slider_pane_g2_ParamLimits

0x7c43,	// (0x00083128) vtel_slider_pane_g2

0x7c50,	// (0x00083135) vtel_slider_pane_g3_ParamLimits

0x7c50,	// (0x00083135) vtel_slider_pane_g3

0x7c36,	// (0x0008311b) vtel_slider_pane_g4_ParamLimits

0x7c36,	// (0x0008311b) vtel_slider_pane_g4

0x7c5d,	// (0x00083142) vtel_slider_pane_g5_ParamLimits

0x7c5d,	// (0x00083142) vtel_slider_pane_g5

0x0004,

0xf9de,	// (0x0008aec3) vtel_slider_pane_g_ParamLimits

0xf9de,	// (0x0008aec3) vtel_slider_pane_g

0xaae2,	// (0x00085fc7) main_gallery2_pane

0x7412,	// (0x000828f7) aid_size_row_itut2_dropdow_list_ParamLimits

0x7412,	// (0x000828f7) aid_size_row_itut2_dropdow_list

0x7472,	// (0x00082957) grid_vitu2_function_top_pane_ParamLimits

0x7472,	// (0x00082957) grid_vitu2_function_top_pane

0x74cc,	// (0x000829b1) popup_vitu2_dropdown_list_window_ParamLimits

0x74cc,	// (0x000829b1) popup_vitu2_dropdown_list_window

0x74ec,	// (0x000829d1) popup_vitu2_match_list_window

0x7c6a,	// (0x0008314f) cell_vitu2_function_top_pane_ParamLimits

0x7c6a,	// (0x0008314f) cell_vitu2_function_top_pane

0x7c84,	// (0x00083169) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7c84,	// (0x00083169) cell_vitu2_function_top_pane_cp01

0x7ca0,	// (0x00083185) cell_vitu2_function_top_wide_pane_ParamLimits

0x7ca0,	// (0x00083185) cell_vitu2_function_top_wide_pane

0xaae2,	// (0x00085fc7) bg_button_pane_cp012

0x7cbc,	// (0x000831a1) cell_vitu2_function_top_pane_g1

0x7cd0,	// (0x000831b5) bg_button_pane_cp013_ParamLimits

0x7cd0,	// (0x000831b5) bg_button_pane_cp013

0x7cec,	// (0x000831d1) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7cec,	// (0x000831d1) cell_vitu2_function_top_wide_pane_g1

0xe72a,	// (0x00089c0f) bg_popup_sub_pane_cp20

0x7d04,	// (0x000831e9) list_vitu2_match_list_pane

0xd6cf,	// (0x00088bb4) bg_popup_sub_pane_cp20_g1

0xd6d7,	// (0x00088bbc) bg_popup_sub_pane_cp20_g2

0xace7,	// (0x000861cc) bg_popup_sub_pane_cp20_g3

0xd6df,	// (0x00088bc4) bg_popup_sub_pane_cp20_g4

0xacc7,	// (0x000861ac) bg_popup_sub_pane_cp20_g5

0xd915,	// (0x00088dfa) bg_popup_sub_pane_cp20_g6

0xd6ef,	// (0x00088bd4) bg_popup_sub_pane_cp20_g7

0xd6f7,	// (0x00088bdc) bg_popup_sub_pane_cp20_g8

0xd6ff,	// (0x00088be4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e9,	// (0x0008aece) bg_popup_sub_pane_cp20_g

0x7d1c,	// (0x00083201) list_vitu2_match_list_item_pane_ParamLimits

0x7d1c,	// (0x00083201) list_vitu2_match_list_item_pane

0x7d2e,	// (0x00083213) list_vitu2_match_list_item_pane_t1

0xa105,	// (0x000855ea) bg_popup_sub_pane_cp21

0xb129,	// (0x0008660e) grid_vitu2_dropdown_list_pane

0x7d48,	// (0x0008322d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7d48,	// (0x0008322d) cell_vitu2_dropdown_list_char_pane

0x7d69,	// (0x0008324e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7d69,	// (0x0008324e) cell_vitu2_dropdown_list_ctrl_pane

0xd91d,	// (0x00088e02) cell_vitu2_dropdown_list_char_pane_g1

0xd926,	// (0x00088e0b) cell_vitu2_dropdown_list_char_pane_g2

0xd92f,	// (0x00088e14) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa06,	// (0x0008aeeb) cell_vitu2_dropdown_list_char_pane_g

0x7d95,	// (0x0008327a) cell_vitu2_dropdown_list_char_pane_t1

0x7da3,	// (0x00083288) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7da3,	// (0x00083288) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7db3,	// (0x00083298) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7db3,	// (0x00083298) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7dc4,	// (0x000832a9) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7dc4,	// (0x000832a9) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7dd4,	// (0x000832b9) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7dd4,	// (0x000832b9) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf61,	// (0x00088446) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf61,	// (0x00088446) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0d,	// (0x0008aef2) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0d,	// (0x0008aef2) cell_vitu2_dropdown_list_ctrl_pane_g

0x7df0,	// (0x000832d5) aid_size_cell_gallery2_ParamLimits

0x7df0,	// (0x000832d5) aid_size_cell_gallery2

0x7e0a,	// (0x000832ef) grid_gallery2_pane_ParamLimits

0x7e0a,	// (0x000832ef) grid_gallery2_pane

0x7e21,	// (0x00083306) scroll_pane_cp029_ParamLimits

0x7e21,	// (0x00083306) scroll_pane_cp029

0x7e31,	// (0x00083316) cell_gallery2_pane_ParamLimits

0x7e31,	// (0x00083316) cell_gallery2_pane

0xd938,	// (0x00088e1d) cell_gallery2_pane_g2

0x7e86,	// (0x0008336b) cell_gallery2_pane_g3

0xd940,	// (0x00088e25) cell_gallery2_pane_g4

0xd948,	// (0x00088e2d) cell_gallery2_pane_g5

0xaa21,	// (0x00085f06) grid_highlight_pane_cp10

0x74ec,	// (0x000829d1) popup_vitu2_match_list_window_ParamLimits

0x74fe,	// (0x000829e3) popup_vitu2_query_window_ParamLimits

0x74fe,	// (0x000829e3) popup_vitu2_query_window

0xa105,	// (0x000855ea) bg_vitu2_candi_button_pane

0xd91d,	// (0x00088e02) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd926,	// (0x00088e0b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd92f,	// (0x00088e14) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x10f6,	// (0x0007c5db) bg_button_pane_cp015

0x7e8e,	// (0x00083373) bg_button_pane_cp016

0x7ea1,	// (0x00083386) bg_button_pane_cp017

0xc914,	// (0x00087df9) bg_popup_sub_pane_cp22

0xd950,	// (0x00088e35) popup_vitu2_query_window_g1

0x1129,	// (0x0007c60e) popup_vitu2_query_window_g2

0x0002,

0xfa18,	// (0x0008aefd) popup_vitu2_query_window_g

0x1146,	// (0x0007c62b) popup_vitu2_query_window_t1_ParamLimits

0x1146,	// (0x0007c62b) popup_vitu2_query_window_t1

0x1179,	// (0x0007c65e) popup_vitu2_query_window_t2_ParamLimits

0x1179,	// (0x0007c65e) popup_vitu2_query_window_t2

0x118b,	// (0x0007c670) popup_vitu2_query_window_t3_ParamLimits

0x118b,	// (0x0007c670) popup_vitu2_query_window_t3

0x7ec5,	// (0x000833aa) popup_vitu2_query_window_t4_ParamLimits

0x7ec5,	// (0x000833aa) popup_vitu2_query_window_t4

0x7ee6,	// (0x000833cb) popup_vitu2_query_window_t5_ParamLimits

0x7ee6,	// (0x000833cb) popup_vitu2_query_window_t5

0x0006,

0xfa1f,	// (0x0008af04) popup_vitu2_query_window_t_ParamLimits

0xfa1f,	// (0x0008af04) popup_vitu2_query_window_t

0xd7d1,	// (0x00088cb6) main_cset_text_pane

0x78c0,	// (0x00082da5) aid_area_touch_slider_ParamLimits

0x78dc,	// (0x00082dc1) cset_slider_pane_ParamLimits

0x7906,	// (0x00082deb) main_cset_slider_pane_g1_ParamLimits

0x791b,	// (0x00082e00) main_cset_slider_pane_g2_ParamLimits

0xd7f2,	// (0x00088cd7) main_cset_slider_pane_g3_ParamLimits

0xd7f2,	// (0x00088cd7) main_cset_slider_pane_g3

0x7930,	// (0x00082e15) main_cset_slider_pane_g4_ParamLimits

0x7930,	// (0x00082e15) main_cset_slider_pane_g4

0x793f,	// (0x00082e24) main_cset_slider_pane_g5_ParamLimits

0x793f,	// (0x00082e24) main_cset_slider_pane_g5

0x794d,	// (0x00082e32) main_cset_slider_pane_g6_ParamLimits

0x794d,	// (0x00082e32) main_cset_slider_pane_g6

0xf972,	// (0x0008ae57) main_cset_slider_pane_g_ParamLimits

0xd822,	// (0x00088d07) main_cset_slider_pane_t1_ParamLimits

0x79e1,	// (0x00082ec6) main_cset_slider_pane_t2_ParamLimits

0x79fb,	// (0x00082ee0) main_cset_slider_pane_t3_ParamLimits

0x7a15,	// (0x00082efa) main_cset_slider_pane_t4_ParamLimits

0x7a33,	// (0x00082f18) main_cset_slider_pane_t5_ParamLimits

0x7a51,	// (0x00082f36) main_cset_slider_pane_t6_ParamLimits

0x7a68,	// (0x00082f4d) main_cset_slider_pane_t7_ParamLimits

0x7a96,	// (0x00082f7b) main_cset_slider_pane_t8_ParamLimits

0x7a96,	// (0x00082f7b) main_cset_slider_pane_t8

0x7abe,	// (0x00082fa3) main_cset_slider_pane_t9_ParamLimits

0x7abe,	// (0x00082fa3) main_cset_slider_pane_t9

0x7ae6,	// (0x00082fcb) main_cset_slider_pane_t10_ParamLimits

0x7ae6,	// (0x00082fcb) main_cset_slider_pane_t10

0x7b0e,	// (0x00082ff3) main_cset_slider_pane_t11_ParamLimits

0x7b0e,	// (0x00082ff3) main_cset_slider_pane_t11

0x7b38,	// (0x0008301d) main_cset_slider_pane_t12_ParamLimits

0x7b38,	// (0x0008301d) main_cset_slider_pane_t12

0x7b57,	// (0x0008303c) main_cset_slider_pane_t13_ParamLimits

0x7b57,	// (0x0008303c) main_cset_slider_pane_t13

0xf997,	// (0x0008ae7c) main_cset_slider_pane_t_ParamLimits

0xa105,	// (0x000855ea) bg_popup_sub_pane_cp011

0xd95c,	// (0x00088e41) main_cset_text_pane_g1

0xd964,	// (0x00088e49) main_cset_text_pane_t1

0xd972,	// (0x00088e57) main_cset_text_pane_t2

0xd980,	// (0x00088e65) main_cset_text_pane_t3

0xd98e,	// (0x00088e73) main_cset_text_pane_t4

0xd99c,	// (0x00088e81) main_cset_text_pane_t5

0xd9aa,	// (0x00088e8f) main_cset_text_pane_t6

0xd9b8,	// (0x00088e9d) main_cset_text_pane_t7

0x0006,

0xfa2e,	// (0x0008af13) main_cset_text_pane_t

0xa105,	// (0x000855ea) main_cam4_burst_pane

0xa105,	// (0x000855ea) main_cam5_pane

0x780f,	// (0x00082cf4) bg_button_pane_cp019

0x7818,	// (0x00082cfd) bg_button_pane_cp020

0xd7fe,	// (0x00088ce3) main_cset_slider_pane_g7_ParamLimits

0xd7fe,	// (0x00088ce3) main_cset_slider_pane_g7

0xd80a,	// (0x00088cef) main_cset_slider_pane_g8_ParamLimits

0xd80a,	// (0x00088cef) main_cset_slider_pane_g8

0x7961,	// (0x00082e46) main_cset_slider_pane_g9_ParamLimits

0x7961,	// (0x00082e46) main_cset_slider_pane_g9

0x796d,	// (0x00082e52) main_cset_slider_pane_g10_ParamLimits

0x796d,	// (0x00082e52) main_cset_slider_pane_g10

0x7979,	// (0x00082e5e) main_cset_slider_pane_g11_ParamLimits

0x7979,	// (0x00082e5e) main_cset_slider_pane_g11

0x7985,	// (0x00082e6a) main_cset_slider_pane_g12_ParamLimits

0x7985,	// (0x00082e6a) main_cset_slider_pane_g12

0x7991,	// (0x00082e76) main_cset_slider_pane_g13_ParamLimits

0x7991,	// (0x00082e76) main_cset_slider_pane_g13

0x799f,	// (0x00082e84) main_cset_slider_pane_g14_ParamLimits

0x799f,	// (0x00082e84) main_cset_slider_pane_g14

0x79ad,	// (0x00082e92) main_cset_slider_pane_g15_ParamLimits

0x79ad,	// (0x00082e92) main_cset_slider_pane_g15

0xd872,	// (0x00088d57) main_cset_slider_pane_t14_ParamLimits

0xd872,	// (0x00088d57) main_cset_slider_pane_t14

0xd8ab,	// (0x00088d90) main_cset_slider_pane_t15_ParamLimits

0xd8ab,	// (0x00088d90) main_cset_slider_pane_t15

0x7f07,	// (0x000833ec) aid_cam4_burst_size_cell_ParamLimits

0x7f07,	// (0x000833ec) aid_cam4_burst_size_cell

0x7f23,	// (0x00083408) grid_cam4_burst_pane_ParamLimits

0x7f23,	// (0x00083408) grid_cam4_burst_pane

0x7f53,	// (0x00083438) linegrid_cam4_burst_pane_ParamLimits

0x7f53,	// (0x00083438) linegrid_cam4_burst_pane

0x7f73,	// (0x00083458) scroll_pane_cp30_ParamLimits

0x7f73,	// (0x00083458) scroll_pane_cp30

0x7f7f,	// (0x00083464) cell_cam4_burst_pane_ParamLimits

0x7f7f,	// (0x00083464) cell_cam4_burst_pane

0xd9c6,	// (0x00088eab) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9c6,	// (0x00088eab) linegrid_cam4_burst_pane_g1

0x7fbb,	// (0x000834a0) linegrid_cam4_burst_pane_g2_ParamLimits

0x7fbb,	// (0x000834a0) linegrid_cam4_burst_pane_g2

0xd9d3,	// (0x00088eb8) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9d3,	// (0x00088eb8) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3d,	// (0x0008af22) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3d,	// (0x0008af22) linegrid_cam4_burst_pane_g

0x7fcc,	// (0x000834b1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7fcc,	// (0x000834b1) linegrid_cam4_burst_pane_g3_copy1

0xd9e0,	// (0x00088ec5) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e0,	// (0x00088ec5) linegrid_cam4_burst_pane_g4

0x7fe6,	// (0x000834cb) linegrid_cam4_burst_pane_g5_ParamLimits

0x7fe6,	// (0x000834cb) linegrid_cam4_burst_pane_g5

0x7ff7,	// (0x000834dc) linegrid_cam4_burst_pane_g6_ParamLimits

0x7ff7,	// (0x000834dc) linegrid_cam4_burst_pane_g6

0xd9ed,	// (0x00088ed2) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9ed,	// (0x00088ed2) linegrid_cam4_burst_pane_g7

0x8008,	// (0x000834ed) cell_cam4_burst_pane_g1

0xda06,	// (0x00088eeb) main_cam5_pane_t1_ParamLimits

0xda06,	// (0x00088eeb) main_cam5_pane_t1

0xda18,	// (0x00088efd) main_cam5_pane_t2_ParamLimits

0xda18,	// (0x00088efd) main_cam5_pane_t2

0xda2a,	// (0x00088f0f) main_cam5_pane_t3_ParamLimits

0xda2a,	// (0x00088f0f) main_cam5_pane_t3

0xda3c,	// (0x00088f21) main_cam5_pane_t4_ParamLimits

0xda3c,	// (0x00088f21) main_cam5_pane_t4

0xda54,	// (0x00088f39) main_cam5_pane_t5_ParamLimits

0xda54,	// (0x00088f39) main_cam5_pane_t5

0xda68,	// (0x00088f4d) main_cam5_pane_t6_ParamLimits

0xda68,	// (0x00088f4d) main_cam5_pane_t6

0xda7c,	// (0x00088f61) main_cam5_pane_t7_ParamLimits

0xda7c,	// (0x00088f61) main_cam5_pane_t7

0xda8e,	// (0x00088f73) main_cam5_pane_t8_ParamLimits

0xda8e,	// (0x00088f73) main_cam5_pane_t8

0xdaaa,	// (0x00088f8f) main_cam5_pane_t9_ParamLimits

0xdaaa,	// (0x00088f8f) main_cam5_pane_t9

0xdabc,	// (0x00088fa1) main_cam5_pane_t10_ParamLimits

0xdabc,	// (0x00088fa1) main_cam5_pane_t10

0xdace,	// (0x00088fb3) main_cam5_pane_t11_ParamLimits

0xdace,	// (0x00088fb3) main_cam5_pane_t11

0xdafa,	// (0x00088fdf) main_cam5_pane_t12_ParamLimits

0xdafa,	// (0x00088fdf) main_cam5_pane_t12

0xdb0f,	// (0x00088ff4) main_cam5_pane_t13_ParamLimits

0xdb0f,	// (0x00088ff4) main_cam5_pane_t13

0x000c,

0xfa49,	// (0x0008af2e) main_cam5_pane_t_ParamLimits

0xfa49,	// (0x0008af2e) main_cam5_pane_t

0x2191,	// (0x0007d676) popup_scut_keymap_window_ParamLimits

0x2191,	// (0x0007d676) popup_scut_keymap_window

0x801b,	// (0x00083500) aid_size_cell_brow_shortcut

0xaa21,	// (0x00085f06) bg_popup_window_pane_cp010

0x8027,	// (0x0008350c) grid_scut_pane

0x8033,	// (0x00083518) cell_scut_pane_ParamLimits

0x8033,	// (0x00083518) cell_scut_pane

0x804a,	// (0x0008352f) cell_scut_pane_g1

0xdb2c,	// (0x00089011) cell_scut_pane_t1

0xdb3b,	// (0x00089020) cell_scut_pane_t2

0x8053,	// (0x00083538) cell_scut_pane_t3

0x0002,

0xfa64,	// (0x0008af49) cell_scut_pane_t

0x5efc,	// (0x000813e1) main_mup3_pane_g8_ParamLimits

0x5efc,	// (0x000813e1) main_mup3_pane_g8

0x7420,	// (0x00082905) area_vitu2_query_pane_ParamLimits

0x7420,	// (0x00082905) area_vitu2_query_pane

0x1108,	// (0x0007c5ed) input_focus_pane_cp08

0xdb4a,	// (0x0008902f) area_vitu2_query_pane_g1

0x1209,	// (0x0007c6ee) area_vitu2_query_pane_g2

0x0001,

0xfa6b,	// (0x0008af50) area_vitu2_query_pane_g

0x8061,	// (0x00083546) area_vitu2_query_pane_t1_ParamLimits

0x8061,	// (0x00083546) area_vitu2_query_pane_t1

0x8075,	// (0x0008355a) area_vitu2_query_pane_t2_ParamLimits

0x8075,	// (0x0008355a) area_vitu2_query_pane_t2

0x121a,	// (0x0007c6ff) area_vitu2_query_pane_t3_ParamLimits

0x121a,	// (0x0007c6ff) area_vitu2_query_pane_t3

0x1242,	// (0x0007c727) area_vitu2_query_pane_t4_ParamLimits

0x1242,	// (0x0007c727) area_vitu2_query_pane_t4

0x126a,	// (0x0007c74f) area_vitu2_query_pane_t5_ParamLimits

0x126a,	// (0x0007c74f) area_vitu2_query_pane_t5

0x1292,	// (0x0007c777) area_vitu2_query_pane_t6_ParamLimits

0x1292,	// (0x0007c777) area_vitu2_query_pane_t6

0x0006,

0xfa70,	// (0x0008af55) area_vitu2_query_pane_t_ParamLimits

0xfa70,	// (0x0008af55) area_vitu2_query_pane_t

0x8089,	// (0x0008356e) bg_button_pane_cp018

0x8097,	// (0x0008357c) bg_button_pane_cp021

0x12de,	// (0x0007c7c3) bg_button_pane_cp022

0x12ef,	// (0x0007c7d4) input_focus_pane_cp09

0xb31e,	// (0x00086803) aid_size_touch_mv_arrow_left

0xb349,	// (0x0008682e) aid_size_touch_mv_arrow_right

0x79c5,	// (0x00082eaa) main_cset_slider_pane_g16_ParamLimits

0x79c5,	// (0x00082eaa) main_cset_slider_pane_g16

0x79d3,	// (0x00082eb8) main_cset_slider_pane_g17_ParamLimits

0x79d3,	// (0x00082eb8) main_cset_slider_pane_g17

0x8008,	// (0x000834ed) cell_cam4_burst_pane_g1_ParamLimits

0xa105,	// (0x000855ea) compa_mode_pane

0x7beb,	// (0x000830d0) popup_vtel_slider_window_g3_ParamLimits

0x7beb,	// (0x000830d0) popup_vtel_slider_window_g3

0x7bff,	// (0x000830e4) popup_vtel_slider_window_g4_ParamLimits

0x7bff,	// (0x000830e4) popup_vtel_slider_window_g4

0x7c13,	// (0x000830f8) popup_vtel_slider_window_t1_ParamLimits

0x7c13,	// (0x000830f8) popup_vtel_slider_window_t1

0xa105,	// (0x000855ea) main_cl_pane

0x51e6,	// (0x000806cb) popup_imed_adjust2_window_ParamLimits

0xc914,	// (0x00087df9) bg_tb_trans_pane_cp05_ParamLimits

0xd221,	// (0x00088706) popup_imed_adjust2_window_g1_ParamLimits

0xd230,	// (0x00088715) popup_imed_adjust2_window_g2_ParamLimits

0xd230,	// (0x00088715) popup_imed_adjust2_window_g2

0xd23c,	// (0x00088721) popup_imed_adjust2_window_g3_ParamLimits

0xd23c,	// (0x00088721) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x0008acbc) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x0008acbc) popup_imed_adjust2_window_g

0xd248,	// (0x0008872d) popup_imed_adjust2_window_t1_ParamLimits

0xd260,	// (0x00088745) slider_imed_adjust_pane_ParamLimits

0xd274,	// (0x00088759) slider_imed_adjust_pane_g1_ParamLimits

0xd284,	// (0x00088769) slider_imed_adjust_pane_g2_ParamLimits

0xd294,	// (0x00088779) slider_imed_adjust_pane_g3_ParamLimits

0xd2a5,	// (0x0008878a) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x0008acc3) slider_imed_adjust_pane_g_ParamLimits

0x7171,	// (0x00082656) aid_touch_area_cam4_ParamLimits

0x7171,	// (0x00082656) aid_touch_area_cam4

0x7181,	// (0x00082666) battery_pane_cp01

0x7208,	// (0x000826ed) main_camera4_pane_g6_ParamLimits

0x7208,	// (0x000826ed) main_camera4_pane_g6

0x7226,	// (0x0008270b) main_camera4_pane_t2_ParamLimits

0x7226,	// (0x0008270b) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x0008adca) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x0008adca) main_camera4_pane_t

0x72a7,	// (0x0008278c) aid_touch_area_vid4_ParamLimits

0x72a7,	// (0x0008278c) aid_touch_area_vid4

0x72e7,	// (0x000827cc) main_video4_pane_g5_ParamLimits

0x72e7,	// (0x000827cc) main_video4_pane_g5

0x730b,	// (0x000827f0) vid4_progress_pane_ParamLimits

0x730b,	// (0x000827f0) vid4_progress_pane

0xd816,	// (0x00088cfb) main_cset_slider_pane_g18_ParamLimits

0xd816,	// (0x00088cfb) main_cset_slider_pane_g18

0xd9fa,	// (0x00088edf) cell_cam4_burst_pane_g2_ParamLimits

0xd9fa,	// (0x00088edf) cell_cam4_burst_pane_g2

0x0001,

0xfa44,	// (0x0008af29) cell_cam4_burst_pane_g_ParamLimits

0xfa44,	// (0x0008af29) cell_cam4_burst_pane_g

0x80a3,	// (0x00083588) bg_cl_pane_ParamLimits

0x80a3,	// (0x00083588) bg_cl_pane

0x80af,	// (0x00083594) cl_header_pane_ParamLimits

0x80af,	// (0x00083594) cl_header_pane

0x80bb,	// (0x000835a0) cl_listscroll_pane_ParamLimits

0x80bb,	// (0x000835a0) cl_listscroll_pane

0xdb56,	// (0x0008903b) bg_cl_pane_g1

0xdb5e,	// (0x00089043) bg_cl_pane_g2

0xdb66,	// (0x0008904b) bg_cl_pane_g3

0xdb6e,	// (0x00089053) bg_cl_pane_g4

0xdb76,	// (0x0008905b) bg_cl_pane_g5

0xdb7e,	// (0x00089063) bg_cl_pane_g6

0xdb86,	// (0x0008906b) bg_cl_pane_g7

0xdb8e,	// (0x00089073) bg_cl_pane_g8

0xdb96,	// (0x0008907b) bg_cl_pane_g9

0x0008,

0xfa7f,	// (0x0008af64) bg_cl_pane_g

0x80c7,	// (0x000835ac) aid_height_cl_leading_ParamLimits

0x80c7,	// (0x000835ac) aid_height_cl_leading

0x80d3,	// (0x000835b8) aid_height_cl_text_ParamLimits

0x80d3,	// (0x000835b8) aid_height_cl_text

0xe72a,	// (0x00089c0f) bg_cl_header_pane_ParamLimits

0xe72a,	// (0x00089c0f) bg_cl_header_pane

0x80eb,	// (0x000835d0) cl_header_pane_g1_ParamLimits

0x80eb,	// (0x000835d0) cl_header_pane_g1

0x80f8,	// (0x000835dd) cl_header_pane_t1_ParamLimits

0x80f8,	// (0x000835dd) cl_header_pane_t1

0xdb9e,	// (0x00089083) cl_list_pane

0xd7e9,	// (0x00088cce) hc_scroll_pane_cp01

0xacc7,	// (0x000861ac) bg_cl_header_pane_g1

0xd6cf,	// (0x00088bb4) bg_cl_header_pane_g2

0xace7,	// (0x000861cc) bg_cl_header_pane_g3

0xd6df,	// (0x00088bc4) bg_cl_header_pane_g4

0xd6d7,	// (0x00088bbc) bg_cl_header_pane_g5

0xd915,	// (0x00088dfa) bg_cl_header_pane_g6

0xd6f7,	// (0x00088bdc) bg_cl_header_pane_g7

0xd6ff,	// (0x00088be4) bg_cl_header_pane_g8

0xd6ef,	// (0x00088bd4) bg_cl_header_pane_g9

0x0008,

0xfa92,	// (0x0008af77) bg_cl_header_pane_g

0x810a,	// (0x000835ef) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x810a,	// (0x000835ef) hc_cl_list_double_graphic_heading_pane

0x811e,	// (0x00083603) hc_cl_list_single_graphic_pane_ParamLimits

0x811e,	// (0x00083603) hc_cl_list_single_graphic_pane

0x8138,	// (0x0008361d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8138,	// (0x0008361d) hc_cl_list_single_graphic_pane_g1

0x8144,	// (0x00083629) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8144,	// (0x00083629) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa5,	// (0x0008af8a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa5,	// (0x0008af8a) hc_cl_list_single_graphic_pane_g

0x8158,	// (0x0008363d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8158,	// (0x0008363d) hc_cl_list_single_graphic_pane_t1

0x8138,	// (0x0008361d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8138,	// (0x0008361d) hc_cl_list_double_graphic_heading_pane_g1

0x816d,	// (0x00083652) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x816d,	// (0x00083652) hc_cl_list_double_graphic_heading_pane_g2

0x8181,	// (0x00083666) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8181,	// (0x00083666) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaa,	// (0x0008af8f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaa,	// (0x0008af8f) hc_cl_list_double_graphic_heading_pane_g

0x8195,	// (0x0008367a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8195,	// (0x0008367a) hc_cl_list_double_graphic_heading_pane_t1

0x81aa,	// (0x0008368f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x81aa,	// (0x0008368f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab1,	// (0x0008af96) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab1,	// (0x0008af96) hc_cl_list_double_graphic_heading_pane_t

0x81c7,	// (0x000836ac) vid4_progress_pane_g1

0x81d7,	// (0x000836bc) vid4_progress_pane_g2

0x81e7,	// (0x000836cc) vid4_progress_pane_g3

0x81f9,	// (0x000836de) vid4_progress_pane_g4

0x0004,

0xfab6,	// (0x0008af9b) vid4_progress_pane_g

0x8211,	// (0x000836f6) vid4_progress_pane_t1

0x8227,	// (0x0008370c) vid4_progress_pane_t2

0x0002,

0xfac1,	// (0x0008afa6) vid4_progress_pane_t

0x8252,	// (0x00083737) wait_bar_pane_cp07

0xcb0f,	// (0x00087ff4) blid_firmament_pane_ParamLimits

0xcb52,	// (0x00088037) popup_blid_sat_info2_window_g1

0xcb76,	// (0x0008805b) popup_blid_sat_info2_window_t3

0xcb84,	// (0x00088069) popup_blid_sat_info2_window_t4

0xcb92,	// (0x00088077) popup_blid_sat_info2_window_t5

0xcba0,	// (0x00088085) popup_blid_sat_info2_window_t6

0xcbb0,	// (0x00088095) popup_blid_sat_info2_window_t7

0xcbbe,	// (0x000880a3) popup_blid_sat_info2_window_t8

0xcbcc,	// (0x000880b1) popup_blid_sat_info2_window_t9

0xcbda,	// (0x000880bf) popup_blid_sat_info2_window_t10

0xcc9c,	// (0x00088181) aid_firma_cardinal_ParamLimits

0xccb0,	// (0x00088195) blid_firmament_pane_t1_ParamLimits

0xccc7,	// (0x000881ac) blid_firmament_pane_t2_ParamLimits

0xccde,	// (0x000881c3) blid_firmament_pane_t3_ParamLimits

0xccf5,	// (0x000881da) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x0008abb0) blid_firmament_pane_t_ParamLimits

0xcd0c,	// (0x000881f1) blid_sat_info_pane_ParamLimits

0xaae2,	// (0x00085fc7) main_cam_set_pane_ParamLimits

0x66cb,	// (0x00081bb0) aid_size_cell_colour_35_ParamLimits

0x66e5,	// (0x00081bca) aid_size_cell_colour_112_ParamLimits

0x66fc,	// (0x00081be1) aid_size_cell_effect_ParamLimits

0xaae2,	// (0x00085fc7) bg_tb_trans_pane_cp02_ParamLimits

0xb02b,	// (0x00086510) heading_imed_pane_ParamLimits

0x6716,	// (0x00081bfb) listscroll_imed_pane_ParamLimits

0xbf00,	// (0x000873e5) popup_call2_audio_first_window_g5_ParamLimits

0xbf00,	// (0x000873e5) popup_call2_audio_first_window_g5

0x6e65,	// (0x0008234a) aid_size_touch_image3_arrow_left_ParamLimits

0x6e65,	// (0x0008234a) aid_size_touch_image3_arrow_left

0x6e7b,	// (0x00082360) aid_size_touch_image3_arrow_right_ParamLimits

0x6e7b,	// (0x00082360) aid_size_touch_image3_arrow_right

0x823c,	// (0x00083721) vid4_progress_pane_t3

0x69b6,	// (0x00081e9b) main_hwr_training_symbol_option_pane_ParamLimits

0x69b6,	// (0x00081e9b) main_hwr_training_symbol_option_pane

0xd50e,	// (0x000889f3) popup_hwr_training_preview_window_ParamLimits

0xd50e,	// (0x000889f3) popup_hwr_training_preview_window

0x6a17,	// (0x00081efc) hwr_training_navi_pane_g5_ParamLimits

0x6a17,	// (0x00081efc) hwr_training_navi_pane_g5

0xd6bd,	// (0x00088ba2) popup_char_count_window

0xe72a,	// (0x00089c0f) bg_popup_sub_pane_cp20_ParamLimits

0x7d04,	// (0x000831e9) list_vitu2_match_list_pane_ParamLimits

0x7d10,	// (0x000831f5) vitu2_page_scroll_pane_ParamLimits

0x7d10,	// (0x000831f5) vitu2_page_scroll_pane

0xdba7,	// (0x0008908c) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdba7,	// (0x0008908c) list_single_hwr_training_symbol_option_pane

0xdbba,	// (0x0008909f) list_single_hwr_training_symbol_option_pane_g1

0xdbc2,	// (0x000890a7) list_single_hwr_training_symbol_option_pane_t1

0xdbd0,	// (0x000890b5) bg_button_pane_cp023

0xdbd9,	// (0x000890be) bg_button_pane_cp024

0x8274,	// (0x00083759) vitu2_page_scroll_pane_g1

0x827c,	// (0x00083761) vitu2_page_scroll_pane_g2

0x0001,

0xfac8,	// (0x0008afad) vitu2_page_scroll_pane_g

0x8284,	// (0x00083769) vitu2_page_scroll_pane_t1

0xaaf0,	// (0x00085fd5) popup_char_count_window_g1

0xdc0c,	// (0x000890f1) popup_char_count_window_g2

0xd5cc,	// (0x00088ab1) popup_char_count_window_g3

0x0002,

0xfacd,	// (0x0008afb2) popup_char_count_window_g

0xdc15,	// (0x000890fa) popup_char_count_window_t1

0xa105,	// (0x000855ea) main_vded2_pane

0xd20d,	// (0x000886f2) aid_size_cell_imed_line

0xd217,	// (0x000886fc) grid_imed_line_width_pane

0x7377,	// (0x0008285c) vid4_indicators_pane_g4

0xdc23,	// (0x00089108) cell_imed_line_width_pane_ParamLimits

0xdc23,	// (0x00089108) cell_imed_line_width_pane

0xdc37,	// (0x0008911c) cell_imed_line_width_pane_g1

0xd5d5,	// (0x00088aba) cell_imed_line_width_pane_g2

0x0001,

0xfad4,	// (0x0008afb9) cell_imed_line_width_pane_g

0x8293,	// (0x00083778) main_vded2_pane_g1_ParamLimits

0x8293,	// (0x00083778) main_vded2_pane_g1

0x82a0,	// (0x00083785) main_vded2_pane_g2_ParamLimits

0x82a0,	// (0x00083785) main_vded2_pane_g2

0x0001,

0xfad9,	// (0x0008afbe) main_vded2_pane_g_ParamLimits

0xfad9,	// (0x0008afbe) main_vded2_pane_g

0x82ae,	// (0x00083793) vded2_slider_pane_ParamLimits

0x82ae,	// (0x00083793) vded2_slider_pane

0x82bb,	// (0x000837a0) aid_size_touch_vded2_end

0x82c5,	// (0x000837aa) aid_size_touch_vded2_playhead

0xdc40,	// (0x00089125) aid_size_touch_vded2_start

0xdc48,	// (0x0008912d) vded2_slider_bg_pane

0xdc51,	// (0x00089136) vded2_slider_pane_g1

0xdc5a,	// (0x0008913f) vded2_slider_pane_g2

0x82cd,	// (0x000837b2) vded2_slider_pane_g3

0x0002,

0xfade,	// (0x0008afc3) vded2_slider_pane_g

0xdc62,	// (0x00089147) vded2_slider_bg_pane_g1

0xdc6b,	// (0x00089150) vded2_slider_bg_pane_g2

0xdc74,	// (0x00089159) vded2_slider_bg_pane_g3

0x0002,

0xfae5,	// (0x0008afca) vded2_slider_bg_pane_g

0x4a3d,	// (0x0007ff22) aid_postcard_touch_down_pane_ParamLimits

0x4a3d,	// (0x0007ff22) aid_postcard_touch_down_pane

0x4a4d,	// (0x0007ff32) aid_postcard_touch_up_pane_ParamLimits

0x4a4d,	// (0x0007ff32) aid_postcard_touch_up_pane

0xa105,	// (0x000855ea) main_blid2_pane

0x5175,	// (0x0008065a) popup_blid2_search_window

0xa105,	// (0x000855ea) blid2_gps_pane

0xa105,	// (0x000855ea) blid2_navig_pane

0xa105,	// (0x000855ea) blid2_search_pane

0xa105,	// (0x000855ea) blid2_tripm_pane

0x82d6,	// (0x000837bb) blid2_search_pane_g1_ParamLimits

0x82d6,	// (0x000837bb) blid2_search_pane_g1

0x82e6,	// (0x000837cb) blid2_search_pane_t1_ParamLimits

0x82e6,	// (0x000837cb) blid2_search_pane_t1

0x82f8,	// (0x000837dd) aid_size_cell_blid2_gps_ParamLimits

0x82f8,	// (0x000837dd) aid_size_cell_blid2_gps

0x8308,	// (0x000837ed) blid2_gps_pane_g1_ParamLimits

0x8308,	// (0x000837ed) blid2_gps_pane_g1

0x8314,	// (0x000837f9) grid_blid2_satellite_pane_ParamLimits

0x8314,	// (0x000837f9) grid_blid2_satellite_pane

0x8324,	// (0x00083809) blid2_navig_pane_g1_ParamLimits

0x8324,	// (0x00083809) blid2_navig_pane_g1

0x8330,	// (0x00083815) blid2_navig_pane_t1_ParamLimits

0x8330,	// (0x00083815) blid2_navig_pane_t1

0x8342,	// (0x00083827) blid2_navig_pane_t2_ParamLimits

0x8342,	// (0x00083827) blid2_navig_pane_t2

0x0001,

0xfaec,	// (0x0008afd1) blid2_navig_pane_t_ParamLimits

0xfaec,	// (0x0008afd1) blid2_navig_pane_t

0x8354,	// (0x00083839) blid2_navig_ring_pane_ParamLimits

0x8354,	// (0x00083839) blid2_navig_ring_pane

0x8364,	// (0x00083849) blid2_speed_pane_ParamLimits

0x8364,	// (0x00083849) blid2_speed_pane

0x8370,	// (0x00083855) blid2_tripm_pane_g1_ParamLimits

0x8370,	// (0x00083855) blid2_tripm_pane_g1

0x8380,	// (0x00083865) blid2_tripm_pane_g2_ParamLimits

0x8380,	// (0x00083865) blid2_tripm_pane_g2

0x838c,	// (0x00083871) blid2_tripm_pane_g3_ParamLimits

0x838c,	// (0x00083871) blid2_tripm_pane_g3

0x8398,	// (0x0008387d) blid2_tripm_pane_g4_ParamLimits

0x8398,	// (0x0008387d) blid2_tripm_pane_g4

0x83a4,	// (0x00083889) blid2_tripm_pane_g5_ParamLimits

0x83a4,	// (0x00083889) blid2_tripm_pane_g5

0x0005,

0xfaf1,	// (0x0008afd6) blid2_tripm_pane_g_ParamLimits

0xfaf1,	// (0x0008afd6) blid2_tripm_pane_g

0x83c0,	// (0x000838a5) blid2_tripm_pane_t1_ParamLimits

0x83c0,	// (0x000838a5) blid2_tripm_pane_t1

0x83d4,	// (0x000838b9) blid2_tripm_pane_t2_ParamLimits

0x83d4,	// (0x000838b9) blid2_tripm_pane_t2

0x83e6,	// (0x000838cb) blid2_tripm_pane_t3_ParamLimits

0x83e6,	// (0x000838cb) blid2_tripm_pane_t3

0x0003,

0xfafe,	// (0x0008afe3) blid2_tripm_pane_t_ParamLimits

0xfafe,	// (0x0008afe3) blid2_tripm_pane_t

0x8418,	// (0x000838fd) cell_blid2_satellite_pane_ParamLimits

0x8418,	// (0x000838fd) cell_blid2_satellite_pane

0x8432,	// (0x00083917) cell_blid2_satellite_pane_g1

0xdc7d,	// (0x00089162) cell_blid2_satellite_pane_t1

0xcd1c,	// (0x00088201) blid2_speed_pane_g1

0xdc8b,	// (0x00089170) blid2_speed_pane_t1

0xdc99,	// (0x0008917e) blid2_speed_pane_t2

0x0001,

0xfb07,	// (0x0008afec) blid2_speed_pane_t

0xcd1c,	// (0x00088201) blid2_navig_ring_pane_g1

0x843b,	// (0x00083920) blid2_navig_ring_pane_g2

0x8443,	// (0x00083928) blid2_navig_ring_pane_g3

0x844b,	// (0x00083930) blid2_navig_ring_pane_g4

0x8453,	// (0x00083938) blid2_navig_ring_pane_g5

0x0004,

0xfb0c,	// (0x0008aff1) blid2_navig_ring_pane_g

0xa105,	// (0x000855ea) bg_popup_window_pane_cp011

0xdca7,	// (0x0008918c) popup_blid2_search_window_g1

0xdcaf,	// (0x00089194) popup_blid2_search_window_t1

0xdcbd,	// (0x000891a2) popup_blid2_search_window_t2

0x0001,

0xfb17,	// (0x0008affc) popup_blid2_search_window_t

0xabd6,	// (0x000860bb) main_browser_pane_g1

0xa84e,	// (0x00085d33) main_browser_pane_ParamLimits

0xaae2,	// (0x00085fc7) bg_button_pane_cp011_ParamLimits

0x75e2,	// (0x00082ac7) cell_vitu2_function_pane_g1_ParamLimits

0xc914,	// (0x00087df9) bg_popup_sub_pane_cp22_ParamLimits

0x1108,	// (0x0007c5ed) input_focus_pane_cp08_ParamLimits

0x7eb4,	// (0x00083399) popup_vitu2_query_button_pane_ParamLimits

0x7eb4,	// (0x00083399) popup_vitu2_query_button_pane

0x111f,	// (0x0007c604) popup_vitu2_query_input_button_pane

0xd950,	// (0x00088e35) popup_vitu2_query_window_g1_ParamLimits

0x1129,	// (0x0007c60e) popup_vitu2_query_window_g2_ParamLimits

0xfa18,	// (0x0008aefd) popup_vitu2_query_window_g_ParamLimits

0xa105,	// (0x000855ea) bg_button_pane_cp026

0x845b,	// (0x00083940) popup_vitu2_query_input_button_pane_g1

0xa105,	// (0x000855ea) bg_button_pane_cp025

0xdccb,	// (0x000891b0) popup_vitu2_query_button_pane_t1

0x5bd5,	// (0x000810ba) main_mp3_pane_t6

0x5be5,	// (0x000810ca) popup_slider_window_cp01

0x725c,	// (0x00082741) cam4_battery_pane

0x7336,	// (0x0008281b) cam4_battery_pane_cp02

0x81bf,	// (0x000836a4) cam4_battery_pane_cp01

0x81bf,	// (0x000836a4) cam4_battery_pane_cp03

0xcd1c,	// (0x00088201) cam4_battery_pane_g1

0xd850,	// (0x00088d35) cam4_battery_pane_g2

0x0001,

0xfb1c,	// (0x0008b001) cam4_battery_pane_g

0xcbe8,	// (0x000880cd) popup_blid_sat_info2_window_t11

0xb31e,	// (0x00086803) aid_size_touch_mv_arrow_left_ParamLimits

0xb349,	// (0x0008682e) aid_size_touch_mv_arrow_right_ParamLimits

0xb3a7,	// (0x0008688c) navi_pane_g1_ParamLimits

0xb3b3,	// (0x00086898) navi_pane_g2_ParamLimits

0xb3e1,	// (0x000868c6) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0008a8af) navi_pane_g_ParamLimits

0x44c5,	// (0x0007f9aa) navi_pane_mv_t1_ParamLimits

0x6722,	// (0x00081c07) grid_imed_effect_pane_ParamLimits

0x2f54,	// (0x0007e439) aid_placing_vt_slider_lsc

0xaab8,	// (0x00085f9d) aid_placing_vt_slider_prt

0xaae2,	// (0x00085fc7) bg_tb_trans_pane_cp01_ParamLimits

0xce81,	// (0x00088366) popup_image_details_window_g1_ParamLimits

0xce94,	// (0x00088379) popup_image_details_window_g2_ParamLimits

0xcea9,	// (0x0008838e) popup_image_details_window_g3_ParamLimits

0xcea9,	// (0x0008838e) popup_image_details_window_g3

0xf710,	// (0x0008abf5) popup_image_details_window_g_ParamLimits

0xcebd,	// (0x000883a2) popup_image_details_window_t1_ParamLimits

0xcecf,	// (0x000883b4) popup_image_details_window_t2_ParamLimits

0xcee8,	// (0x000883cd) popup_image_details_window_t3_ParamLimits

0xcefc,	// (0x000883e1) popup_image_details_window_t4_ParamLimits

0xcf17,	// (0x000883fc) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x0008abfc) popup_image_details_window_t_ParamLimits

0x80df,	// (0x000835c4) cl_header_name_pane_ParamLimits

0x80df,	// (0x000835c4) cl_header_name_pane

0x8463,	// (0x00083948) cl_header_name_pane_t1_ParamLimits

0x8463,	// (0x00083948) cl_header_name_pane_t1

0x847a,	// (0x0008395f) cl_header_name_pane_t2_ParamLimits

0x847a,	// (0x0008395f) cl_header_name_pane_t2

0x84a4,	// (0x00083989) cl_header_name_pane_t3_ParamLimits

0x84a4,	// (0x00083989) cl_header_name_pane_t3

0x0002,

0xfb21,	// (0x0008b006) cl_header_name_pane_t_ParamLimits

0xfb21,	// (0x0008b006) cl_header_name_pane_t

0xb470,	// (0x00086955) navi_pane_mv_g2_ParamLimits

0xd697,	// (0x00088b7c) field_vitu2_entry_pane_g1_ParamLimits

0xd6a3,	// (0x00088b88) field_vitu2_entry_pane_g2_ParamLimits

0xd6af,	// (0x00088b94) field_vitu2_entry_pane_g3_ParamLimits

0xd6af,	// (0x00088b94) field_vitu2_entry_pane_g3

0xf917,	// (0x0008adfc) field_vitu2_entry_pane_g_ParamLimits

0x7576,	// (0x00082a5b) cell_vitu2_itu_pane_g1_ParamLimits

0x7588,	// (0x00082a6d) cell_vitu2_itu_pane_g2_ParamLimits

0x7588,	// (0x00082a6d) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x0008ae08) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x0008ae08) cell_vitu2_itu_pane_g

0xaae2,	// (0x00085fc7) bg_vkb2_func_pane_cp05_ParamLimits

0xaae2,	// (0x00085fc7) bg_vkb2_func_pane_cp05

0xaae2,	// (0x00085fc7) bg_vkb2_func_pane_cp03

0xaae2,	// (0x00085fc7) bg_vkb2_func_pane_cp04

0xaae2,	// (0x00085fc7) bg_vkb2_func_pane_cp10_ParamLimits

0xaae2,	// (0x00085fc7) bg_vkb2_func_pane_cp10

0x12de,	// (0x0007c7c3) bg_vkb2_func_pane_cp08

0x8089,	// (0x0008356e) bg_vkb2_func_pane_cp06

0x8097,	// (0x0008357c) bg_vkb2_func_pane_cp07

0xdbe2,	// (0x000890c7) bg_vkb2_func_pane_cp11_ParamLimits

0xdbe2,	// (0x000890c7) bg_vkb2_func_pane_cp11

0xdbf7,	// (0x000890dc) bg_vkb2_func_pane_cp12_ParamLimits

0xdbf7,	// (0x000890dc) bg_vkb2_func_pane_cp12

0xa105,	// (0x000855ea) bg_vkb2_func_pane_cp09

0xd6cf,	// (0x00088bb4) bg_vkb2_func_pane_g1

0xace7,	// (0x000861cc) bg_vkb2_func_pane_g2

0xd6d7,	// (0x00088bbc) bg_vkb2_func_pane_g3

0xd6df,	// (0x00088bc4) bg_vkb2_func_pane_g4

0xd915,	// (0x00088dfa) bg_vkb2_func_pane_g5

0xd6f7,	// (0x00088bdc) bg_vkb2_func_pane_g6

0xd6ff,	// (0x00088be4) bg_vkb2_func_pane_g7

0xd6ef,	// (0x00088bd4) bg_vkb2_func_pane_g8

0xacc7,	// (0x000861ac) bg_vkb2_func_pane_g9

0x0008,

0xfb28,	// (0x0008b00d) bg_vkb2_func_pane_g

0x83b2,	// (0x00083897) blid2_tripm_pane_g6_ParamLimits

0x83b2,	// (0x00083897) blid2_tripm_pane_g6

0xd5e9,	// (0x00088ace) mp4_progress_pane_g1

0x840c,	// (0x000838f1) blid2_tripm_values_pane_ParamLimits

0x840c,	// (0x000838f1) blid2_tripm_values_pane

0x84c9,	// (0x000839ae) blid2_tripm_values_pane_t1

0x84d7,	// (0x000839bc) blid2_tripm_values_pane_t2

0x84e5,	// (0x000839ca) blid2_tripm_values_pane_t3

0x84f3,	// (0x000839d8) blid2_tripm_values_pane_t4

0x8501,	// (0x000839e6) blid2_tripm_values_pane_t5

0x850f,	// (0x000839f4) blid2_tripm_values_pane_t6

0x851d,	// (0x00083a02) blid2_tripm_values_pane_t7

0x852b,	// (0x00083a10) blid2_tripm_values_pane_t8

0x8539,	// (0x00083a1e) blid2_tripm_values_pane_t9

0x0008,

0xfb3b,	// (0x0008b020) blid2_tripm_values_pane_t

0x2f94,	// (0x0007e479) call_video_pane_t1_ParamLimits

0x2fb5,	// (0x0007e49a) call_video_pane_t2_ParamLimits

0xf253,	// (0x0008a738) call_video_pane_t_ParamLimits

0x0ec2,	// (0x0007c3a7) msg_header_pane_g1_ParamLimits

0xb64a,	// (0x00086b2f) msg_header_pane_g2_ParamLimits

0xb64a,	// (0x00086b2f) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0008a952) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0008a952) msg_header_pane_g

0xa84e,	// (0x00085d33) main_clock2_pane_ParamLimits

0x649c,	// (0x00081981) grid_clock2_toolbar_pane_ParamLimits

0x649c,	// (0x00081981) grid_clock2_toolbar_pane

0x649c,	// (0x00081981) listscroll_clock2_pane_ParamLimits

0x649c,	// (0x00081981) listscroll_clock2_pane

0x654c,	// (0x00081a31) main_clock2_pane_t3_ParamLimits

0x654c,	// (0x00081a31) main_clock2_pane_t3

0x655e,	// (0x00081a43) main_clock2_pane_t4_ParamLimits

0x655e,	// (0x00081a43) main_clock2_pane_t4

0xdcd9,	// (0x000891be) cell_clock2_toolbar_pane

0xdce1,	// (0x000891c6) cell_clock2_toolbar_pane_cp01

0xdce1,	// (0x000891c6) cell_clock2_toolbar_pane_cp02

0xdce9,	// (0x000891ce) cell_clock2_toolbar_pane_cp03

0xdcf1,	// (0x000891d6) list_clock2_pane

0xb295,	// (0x0008677a) scroll_pane_cp10

0xdcf9,	// (0x000891de) list_single_clock2_pane_ParamLimits

0xdcf9,	// (0x000891de) list_single_clock2_pane

0xaa21,	// (0x00085f06) list_highlight_pane_cp08

0xdd06,	// (0x000891eb) list_single_clock2_pane_t1

0xdd14,	// (0x000891f9) list_single_clock2_pane_t2

0x0001,

0xfb4e,	// (0x0008b033) list_single_clock2_pane_t

0xa105,	// (0x000855ea) bg_button_pane_cp10

0xdd22,	// (0x00089207) cell_clock2_toolbar_pane_g1

0x499f,	// (0x0007fe84) aid_main_viewer_pane_g1_ParamLimits

0x499f,	// (0x0007fe84) aid_main_viewer_pane_g1

0x49ab,	// (0x0007fe90) aid_main_viewer_pane_g2_ParamLimits

0x49ab,	// (0x0007fe90) aid_main_viewer_pane_g2

0x49b7,	// (0x0007fe9c) aid_main_viewer_pane_g3_ParamLimits

0x49b7,	// (0x0007fe9c) aid_main_viewer_pane_g3

0x49c8,	// (0x0007fead) aid_main_viewer_pane_g4_ParamLimits

0x49c8,	// (0x0007fead) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0008a963) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0008a963) aid_main_viewer_pane_g

0x514d,	// (0x00080632) main_calc_pane_ParamLimits

0x515a,	// (0x0008063f) main_dialer2_pane_ParamLimits

0xa105,	// (0x000855ea) main_cam6_pane

0xa105,	// (0x000855ea) main_vid6_pane

0x64a8,	// (0x0008198d) listscroll_gen_pane_cp06_ParamLimits

0x64a8,	// (0x0008198d) listscroll_gen_pane_cp06

0x6570,	// (0x00081a55) main_clock2_pane_t5_ParamLimits

0x6570,	// (0x00081a55) main_clock2_pane_t5

0x65bd,	// (0x00081aa2) aid_call2_pane_cp10_ParamLimits

0x65cf,	// (0x00081ab4) aid_call_pane_cp10_ParamLimits

0xb312,	// (0x000867f7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb312,	// (0x000867f7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x65e1,	// (0x00081ac6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x65e1,	// (0x00081ac6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb312,	// (0x000867f7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x0008acb1) popup_clock_analogue_window_cp10_g_ParamLimits

0x65f7,	// (0x00081adc) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6e12,	// (0x000822f7) cell_dialer2_keypad_pane_g2_ParamLimits

0x6e12,	// (0x000822f7) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x0008ad9b) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x0008ad9b) cell_dialer2_keypad_pane_g

0x6e2e,	// (0x00082313) cell_dialer2_keypad_pane_t1

0x78ad,	// (0x00082d92) main_cset_text2_pane_ParamLimits

0x78ad,	// (0x00082d92) main_cset_text2_pane

0xdb4a,	// (0x0008902f) area_vitu2_query_pane_g1_ParamLimits

0x1209,	// (0x0007c6ee) area_vitu2_query_pane_g2_ParamLimits

0xfa6b,	// (0x0008af50) area_vitu2_query_pane_g_ParamLimits

0x12ba,	// (0x0007c79f) area_vitu2_query_pane_t7_ParamLimits

0x12ba,	// (0x0007c79f) area_vitu2_query_pane_t7

0x8089,	// (0x0008356e) bg_button_pane_cp018_ParamLimits

0x8097,	// (0x0008357c) bg_button_pane_cp021_ParamLimits

0x12de,	// (0x0007c7c3) bg_button_pane_cp022_ParamLimits

0x12de,	// (0x0007c7c3) bg_vkb2_func_pane_cp08_ParamLimits

0x8089,	// (0x0008356e) bg_vkb2_func_pane_cp06_ParamLimits

0x8097,	// (0x0008357c) bg_vkb2_func_pane_cp07_ParamLimits

0x12ef,	// (0x0007c7d4) input_focus_pane_cp09_ParamLimits

0x8547,	// (0x00083a2c) cam6_autofocus_pane_ParamLimits

0x8547,	// (0x00083a2c) cam6_autofocus_pane

0x8569,	// (0x00083a4e) cam6_image_uncrop_pane_ParamLimits

0x8569,	// (0x00083a4e) cam6_image_uncrop_pane

0x8596,	// (0x00083a7b) cam6_indi_pane_ParamLimits

0x8596,	// (0x00083a7b) cam6_indi_pane

0x85b0,	// (0x00083a95) cam6_mode_pane_ParamLimits

0x85b0,	// (0x00083a95) cam6_mode_pane

0x85c4,	// (0x00083aa9) cam6_timer_pane_ParamLimits

0x85c4,	// (0x00083aa9) cam6_timer_pane

0x85d5,	// (0x00083aba) cam6_zoom_pane_ParamLimits

0x85d5,	// (0x00083aba) cam6_zoom_pane

0x85ed,	// (0x00083ad2) cam6_mode_pane_g1_ParamLimits

0x85ed,	// (0x00083ad2) cam6_mode_pane_g1

0x85f9,	// (0x00083ade) cam6_mode_pane_g2_ParamLimits

0x85f9,	// (0x00083ade) cam6_mode_pane_g2

0x8605,	// (0x00083aea) cam6_mode_pane_g3_ParamLimits

0x8605,	// (0x00083aea) cam6_mode_pane_g3

0x8611,	// (0x00083af6) cam6_mode_pane_g4_ParamLimits

0x8611,	// (0x00083af6) cam6_mode_pane_g4

0x0003,

0xfb53,	// (0x0008b038) cam6_mode_pane_g_ParamLimits

0xfb53,	// (0x0008b038) cam6_mode_pane_g

0xdaec,	// (0x00088fd1) bg_tb_trans_pane_cp08_ParamLimits

0xdaec,	// (0x00088fd1) bg_tb_trans_pane_cp08

0xdd2a,	// (0x0008920f) cam6_battery_pane_ParamLimits

0xdd2a,	// (0x0008920f) cam6_battery_pane

0xdd40,	// (0x00089225) cam6_indi_pane_g1_ParamLimits

0xdd40,	// (0x00089225) cam6_indi_pane_g1

0xdd52,	// (0x00089237) cam6_indi_pane_g2_ParamLimits

0xdd52,	// (0x00089237) cam6_indi_pane_g2

0xdd76,	// (0x0008925b) cam6_indi_pane_g3_ParamLimits

0xdd76,	// (0x0008925b) cam6_indi_pane_g3

0x0002,

0xfb5c,	// (0x0008b041) cam6_indi_pane_g_ParamLimits

0xfb5c,	// (0x0008b041) cam6_indi_pane_g

0xdd88,	// (0x0008926d) cam6_indi_pane_t1_ParamLimits

0xdd88,	// (0x0008926d) cam6_indi_pane_t1

0x73aa,	// (0x0008288f) cam6_autofocus_pane_g1

0x73b2,	// (0x00082897) cam6_autofocus_pane_g2

0x73ba,	// (0x0008289f) cam6_autofocus_pane_g3

0x73c2,	// (0x000828a7) cam6_autofocus_pane_g4

0x0003,

0xfb63,	// (0x0008b048) cam6_autofocus_pane_g

0xddae,	// (0x00089293) cam6_timer_pane_g1

0xddb6,	// (0x0008929b) cam6_timer_pane_t1

0xddc4,	// (0x000892a9) cam6_zoom_cont_pane

0xddcc,	// (0x000892b1) cam6_zoom_pane_g1

0xddd4,	// (0x000892b9) cam6_zoom_pane_g2

0x861d,	// (0x00083b02) cam6_zoom_pane_g3

0x0002,

0xfb6c,	// (0x0008b051) cam6_zoom_pane_g

0xcd1c,	// (0x00088201) cam6_battery_pane_g1

0xcd1c,	// (0x00088201) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x0008abb9) cam6_battery_pane_g

0xdddc,	// (0x000892c1) cam6_zoom_cont_pane_g1

0xdde5,	// (0x000892ca) cam6_zoom_cont_pane_g2

0xddee,	// (0x000892d3) cam6_zoom_cont_pane_g3

0x0002,

0xfb73,	// (0x0008b058) cam6_zoom_cont_pane_g

0x863a,	// (0x00083b1f) cam6_mode_pane_cp_ParamLimits

0x863a,	// (0x00083b1f) cam6_mode_pane_cp

0x85d5,	// (0x00083aba) cam6_zoom_pane_cp_ParamLimits

0x85d5,	// (0x00083aba) cam6_zoom_pane_cp

0x864e,	// (0x00083b33) vid6_image_uncrop_cif_pane_ParamLimits

0x864e,	// (0x00083b33) vid6_image_uncrop_cif_pane

0x867a,	// (0x00083b5f) vid6_image_uncrop_nhd_pane_ParamLimits

0x867a,	// (0x00083b5f) vid6_image_uncrop_nhd_pane

0x8569,	// (0x00083a4e) vid6_image_uncrop_vga_pane_ParamLimits

0x8569,	// (0x00083a4e) vid6_image_uncrop_vga_pane

0x8697,	// (0x00083b7c) vid6_image_uncrop_wvga_pane_ParamLimits

0x8697,	// (0x00083b7c) vid6_image_uncrop_wvga_pane

0x86b4,	// (0x00083b99) vid6_indi_pane_ParamLimits

0x86b4,	// (0x00083b99) vid6_indi_pane

0xdaec,	// (0x00088fd1) bg_tb_trans_pane_cp09_ParamLimits

0xdaec,	// (0x00088fd1) bg_tb_trans_pane_cp09

0xde06,	// (0x000892eb) cam6_battery_pane_cp_ParamLimits

0xde06,	// (0x000892eb) cam6_battery_pane_cp

0xde12,	// (0x000892f7) vid6_indi_pane_g1_ParamLimits

0xde12,	// (0x000892f7) vid6_indi_pane_g1

0xde24,	// (0x00089309) vid6_indi_pane_g2_ParamLimits

0xde24,	// (0x00089309) vid6_indi_pane_g2

0xde36,	// (0x0008931b) vid6_indi_pane_g3_ParamLimits

0xde36,	// (0x0008931b) vid6_indi_pane_g3

0xde4b,	// (0x00089330) vid6_indi_pane_g4_ParamLimits

0xde4b,	// (0x00089330) vid6_indi_pane_g4

0xde60,	// (0x00089345) vid6_indi_pane_g5_ParamLimits

0xde60,	// (0x00089345) vid6_indi_pane_g5

0x0004,

0xfb7a,	// (0x0008b05f) vid6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0008b05f) vid6_indi_pane_g

0xde7a,	// (0x0008935f) vid6_indi_pane_t1_ParamLimits

0xde7a,	// (0x0008935f) vid6_indi_pane_t1

0xde90,	// (0x00089375) vid6_indi_pane_t2_ParamLimits

0xde90,	// (0x00089375) vid6_indi_pane_t2

0xdeb8,	// (0x0008939d) vid6_indi_pane_t3_ParamLimits

0xdeb8,	// (0x0008939d) vid6_indi_pane_t3

0xdee0,	// (0x000893c5) vid6_indi_pane_t4_ParamLimits

0xdee0,	// (0x000893c5) vid6_indi_pane_t4

0x0003,

0xfb85,	// (0x0008b06a) vid6_indi_pane_t_ParamLimits

0xfb85,	// (0x0008b06a) vid6_indi_pane_t

0xdf04,	// (0x000893e9) wait_bar_pane_cp08

0x86d7,	// (0x00083bbc) main_cset_text2_pane_t1_ParamLimits

0x86d7,	// (0x00083bbc) main_cset_text2_pane_t1

0x8625,	// (0x00083b0a) listscroll_gen_pane_cp06_t1_ParamLimits

0x8625,	// (0x00083b0a) listscroll_gen_pane_cp06_t1

0xa105,	// (0x000855ea) main_cam6_set_pane

0xcf61,	// (0x00088446) bg_tb_trans_pane_cp06_ParamLimits

0x7264,	// (0x00082749) cam4_indicators_pane_g1_ParamLimits

0x7275,	// (0x0008275a) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x0008add8) cam4_indicators_pane_g_ParamLimits

0x728d,	// (0x00082772) cam4_indicators_pane_t1_ParamLimits

0xaae2,	// (0x00085fc7) bg_tb_trans_pane_cp07_ParamLimits

0x733e,	// (0x00082823) vid4_indicators_pane_g1_ParamLimits

0x7352,	// (0x00082837) vid4_indicators_pane_g2_ParamLimits

0x7366,	// (0x0008284b) vid4_indicators_pane_g3_ParamLimits

0x7377,	// (0x0008285c) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x0008adea) vid4_indicators_pane_g_ParamLimits

0x7393,	// (0x00082878) vid4_indicators_pane_t1_ParamLimits

0x81c7,	// (0x000836ac) vid4_progress_pane_g1_ParamLimits

0x81d7,	// (0x000836bc) vid4_progress_pane_g2_ParamLimits

0x81e7,	// (0x000836cc) vid4_progress_pane_g3_ParamLimits

0x81f9,	// (0x000836de) vid4_progress_pane_g4_ParamLimits

0xfab6,	// (0x0008af9b) vid4_progress_pane_g_ParamLimits

0x8211,	// (0x000836f6) vid4_progress_pane_t1_ParamLimits

0x8227,	// (0x0008370c) vid4_progress_pane_t2_ParamLimits

0x823c,	// (0x00083721) vid4_progress_pane_t3_ParamLimits

0xfac1,	// (0x0008afa6) vid4_progress_pane_t_ParamLimits

0x8252,	// (0x00083737) wait_bar_pane_cp07_ParamLimits

0x870e,	// (0x00083bf3) main_cam6_set_pane_g2_ParamLimits

0x870e,	// (0x00083bf3) main_cam6_set_pane_g2

0x871a,	// (0x00083bff) main_cset6_listscroll_pane_ParamLimits

0x871a,	// (0x00083bff) main_cset6_listscroll_pane

0x8745,	// (0x00083c2a) main_cset6_slider_pane_ParamLimits

0x8745,	// (0x00083c2a) main_cset6_slider_pane

0x8751,	// (0x00083c36) main_cset6_text2_pane_ParamLimits

0x8751,	// (0x00083c36) main_cset6_text2_pane

0xdf13,	// (0x000893f8) main_cset6_text_pane

0xdf1b,	// (0x00089400) main_cset_list_pane_copy1_ParamLimits

0xdf1b,	// (0x00089400) main_cset_list_pane_copy1

0xdf2b,	// (0x00089410) scroll_pane_cp028_copy1

0x8764,	// (0x00083c49) cset_list_set_pane_copy1

0x877a,	// (0x00083c5f) aid_position_infowindow_above_copy1

0x8782,	// (0x00083c67) aid_position_infowindow_below_copy1

0x878a,	// (0x00083c6f) cset_list_set_pane_g1_copy1

0x1337,	// (0x0007c81c) cset_list_set_pane_g3_copy1_ParamLimits

0x1337,	// (0x0007c81c) cset_list_set_pane_g3_copy1

0x1346,	// (0x0007c82b) cset_list_set_pane_t1_copy1_ParamLimits

0x1346,	// (0x0007c82b) cset_list_set_pane_t1_copy1

0xaae2,	// (0x00085fc7) list_highlight_pane_cp021_copy1_ParamLimits

0xaae2,	// (0x00085fc7) list_highlight_pane_cp021_copy1

0xdf34,	// (0x00089419) cset6_slider_pane_ParamLimits

0xdf34,	// (0x00089419) cset6_slider_pane

0xdf60,	// (0x00089445) main_cset6_slider_pane_g1_ParamLimits

0xdf60,	// (0x00089445) main_cset6_slider_pane_g1

0x8792,	// (0x00083c77) main_cset6_slider_pane_g2_ParamLimits

0x8792,	// (0x00083c77) main_cset6_slider_pane_g2

0xdf88,	// (0x0008946d) main_cset6_slider_pane_g3_ParamLimits

0xdf88,	// (0x0008946d) main_cset6_slider_pane_g3

0x87ba,	// (0x00083c9f) main_cset6_slider_pane_g4_ParamLimits

0x87ba,	// (0x00083c9f) main_cset6_slider_pane_g4

0x87c6,	// (0x00083cab) main_cset6_slider_pane_g5_ParamLimits

0x87c6,	// (0x00083cab) main_cset6_slider_pane_g5

0xd7fe,	// (0x00088ce3) main_cset6_slider_pane_g7_ParamLimits

0xd7fe,	// (0x00088ce3) main_cset6_slider_pane_g7

0xd80a,	// (0x00088cef) main_cset6_slider_pane_g8_ParamLimits

0xd80a,	// (0x00088cef) main_cset6_slider_pane_g8

0x87d4,	// (0x00083cb9) main_cset6_slider_pane_g9_ParamLimits

0x87d4,	// (0x00083cb9) main_cset6_slider_pane_g9

0x87e0,	// (0x00083cc5) main_cset6_slider_pane_g10_ParamLimits

0x87e0,	// (0x00083cc5) main_cset6_slider_pane_g10

0x87ec,	// (0x00083cd1) main_cset6_slider_pane_g11_ParamLimits

0x87ec,	// (0x00083cd1) main_cset6_slider_pane_g11

0x87f8,	// (0x00083cdd) main_cset6_slider_pane_g12_ParamLimits

0x87f8,	// (0x00083cdd) main_cset6_slider_pane_g12

0xd85a,	// (0x00088d3f) main_cset6_slider_pane_g13_ParamLimits

0xd85a,	// (0x00088d3f) main_cset6_slider_pane_g13

0xd866,	// (0x00088d4b) main_cset6_slider_pane_g14_ParamLimits

0xd866,	// (0x00088d4b) main_cset6_slider_pane_g14

0x8804,	// (0x00083ce9) main_cset6_slider_pane_g15_ParamLimits

0x8804,	// (0x00083ce9) main_cset6_slider_pane_g15

0x881c,	// (0x00083d01) main_cset6_slider_pane_g16_ParamLimits

0x881c,	// (0x00083d01) main_cset6_slider_pane_g16

0x882a,	// (0x00083d0f) main_cset6_slider_pane_g17_ParamLimits

0x882a,	// (0x00083d0f) main_cset6_slider_pane_g17

0x0011,

0xfb8e,	// (0x0008b073) main_cset6_slider_pane_g_ParamLimits

0xfb8e,	// (0x0008b073) main_cset6_slider_pane_g

0xdfa0,	// (0x00089485) main_cset6_slider_pane_t1_ParamLimits

0xdfa0,	// (0x00089485) main_cset6_slider_pane_t1

0x8844,	// (0x00083d29) main_cset6_slider_pane_t2_ParamLimits

0x8844,	// (0x00083d29) main_cset6_slider_pane_t2

0x886f,	// (0x00083d54) main_cset6_slider_pane_t3_ParamLimits

0x886f,	// (0x00083d54) main_cset6_slider_pane_t3

0x889a,	// (0x00083d7f) main_cset6_slider_pane_t4_ParamLimits

0x889a,	// (0x00083d7f) main_cset6_slider_pane_t4

0x88c5,	// (0x00083daa) main_cset6_slider_pane_t5_ParamLimits

0x88c5,	// (0x00083daa) main_cset6_slider_pane_t5

0xdff3,	// (0x000894d8) main_cset6_slider_pane_t7_ParamLimits

0xdff3,	// (0x000894d8) main_cset6_slider_pane_t7

0x88f2,	// (0x00083dd7) main_cset6_slider_pane_t8_ParamLimits

0x88f2,	// (0x00083dd7) main_cset6_slider_pane_t8

0x8916,	// (0x00083dfb) main_cset6_slider_pane_t9_ParamLimits

0x8916,	// (0x00083dfb) main_cset6_slider_pane_t9

0x893a,	// (0x00083e1f) main_cset6_slider_pane_t10_ParamLimits

0x893a,	// (0x00083e1f) main_cset6_slider_pane_t10

0x895e,	// (0x00083e43) main_cset6_slider_pane_t11_ParamLimits

0x895e,	// (0x00083e43) main_cset6_slider_pane_t11

0xe029,	// (0x0008950e) main_cset6_slider_pane_t14_ParamLimits

0xe029,	// (0x0008950e) main_cset6_slider_pane_t14

0xe062,	// (0x00089547) main_cset6_slider_pane_t15_ParamLimits

0xe062,	// (0x00089547) main_cset6_slider_pane_t15

0x000b,

0xfbb3,	// (0x0008b098) main_cset6_slider_pane_t_ParamLimits

0xfbb3,	// (0x0008b098) main_cset6_slider_pane_t

0xd4e3,	// (0x000889c8) cset_slider_pane_g1_copy1

0xdd64,	// (0x00089249) cset_slider_pane_g2_copy1

0xdd6d,	// (0x00089252) cset_slider_pane_g3_copy1

0xa105,	// (0x000855ea) bg_popup_sub_pane_cp011_copy1

0xe09b,	// (0x00089580) main_cset_text_pane_g1_copy1

0xd964,	// (0x00088e49) main_cset_text_pane_t1_copy1

0xd972,	// (0x00088e57) main_cset_text_pane_t2_copy1

0xd980,	// (0x00088e65) main_cset_text_pane_t3_copy1

0xd98e,	// (0x00088e73) main_cset_text_pane_t4_copy1

0xd99c,	// (0x00088e81) main_cset_text_pane_t5_copy1

0xe0a3,	// (0x00089588) main_cset_text_pane_t6_copy1

0xe0b1,	// (0x00089596) main_cset_text_pane_t7_copy1

0x8984,	// (0x00083e69) main_cset_text2_pane_t1_copy1

0xaae2,	// (0x00085fc7) main_ncimui_pane

0x51ab,	// (0x00080690) popup_query_ncimui_window_ParamLimits

0x51ab,	// (0x00080690) popup_query_ncimui_window

0x5d3f,	// (0x00081224) field_cale_ev2_pane_g4_ParamLimits

0x5d3f,	// (0x00081224) field_cale_ev2_pane_g4

0x6af2,	// (0x00081fd7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6af2,	// (0x00081fd7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x0008ad72) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x0008ad72) cell_video_dialer_keypad_pane_g

0x6b0a,	// (0x00081fef) cell_video_dialer_keypad_pane_t1

0xa105,	// (0x000855ea) bg_popup_window_pane_cp012

0xb180,	// (0x00086665) heading_pane_cp06

0xe0dd,	// (0x000895c2) ncim_query_content_pane

0xa105,	// (0x000855ea) bg_popup_heading_pane_cp01

0xe0e5,	// (0x000895ca) ncim_heading_pane_t1

0xe0f3,	// (0x000895d8) ncim_indicator_popup_pane

0xe105,	// (0x000895ea) ncim_query_button_pane

0xe119,	// (0x000895fe) ncim_query_content_pane_t1

0xe12b,	// (0x00089610) ncim_query_content_pane_t2

0x0005,

0xfbf7,	// (0x0008b0dc) ncim_query_content_pane_t

0xe165,	// (0x0008964a) ncim_query_list_pane

0xe177,	// (0x0008965c) ncim_query_popup_pane

0xe0f3,	// (0x000895d8) ncim_indicator_popup_pane_ParamLimits

0x8ad8,	// (0x00083fbd) ncim_query_content_pane_g1_ParamLimits

0x8ad8,	// (0x00083fbd) ncim_query_content_pane_g1

0xe119,	// (0x000895fe) ncim_query_content_pane_t1_ParamLimits

0xe12b,	// (0x00089610) ncim_query_content_pane_t2_ParamLimits

0x8ae4,	// (0x00083fc9) ncim_query_content_pane_t3_ParamLimits

0x8ae4,	// (0x00083fc9) ncim_query_content_pane_t3

0x8b01,	// (0x00083fe6) ncim_query_content_pane_t4_ParamLimits

0x8b01,	// (0x00083fe6) ncim_query_content_pane_t4

0x8b1e,	// (0x00084003) ncim_query_content_pane_t5_ParamLimits

0x8b1e,	// (0x00084003) ncim_query_content_pane_t5

0xe13d,	// (0x00089622) ncim_query_content_pane_t6_ParamLimits

0xe13d,	// (0x00089622) ncim_query_content_pane_t6

0xfbf7,	// (0x0008b0dc) ncim_query_content_pane_t_ParamLimits

0xe165,	// (0x0008964a) ncim_query_list_pane_ParamLimits

0xe177,	// (0x0008965c) ncim_query_popup_pane_ParamLimits

0xe18b,	// (0x00089670) wait_bar_pane_cp04

0xa105,	// (0x000855ea) input_focus_pane_cp011

0xe193,	// (0x00089678) ncim_query_popup_pane_t1

0xe1a1,	// (0x00089686) ncim_list_query_list_pane_ParamLimits

0xe1a1,	// (0x00089686) ncim_list_query_list_pane

0xa105,	// (0x000855ea) bg_button_pane_cp027

0xe1ae,	// (0x00089693) ncim_query_button_pane_g1

0xa105,	// (0x000855ea) list_highlight_pane_cp012

0xe1b8,	// (0x0008969d) ncim_list_query_list_pane_g1

0xe1c0,	// (0x000896a5) ncim_list_query_list_pane_t1

0x7281,	// (0x00082766) cam4_indicators_pane_g3_ParamLimits

0x7281,	// (0x00082766) cam4_indicators_pane_g3

0x7383,	// (0x00082868) vid4_indicators_pane_g5_ParamLimits

0x7383,	// (0x00082868) vid4_indicators_pane_g5

0x8205,	// (0x000836ea) vid4_progress_pane_g5_ParamLimits

0x8205,	// (0x000836ea) vid4_progress_pane_g5

0x89c4,	// (0x00083ea9) main_ncimui_pane_g1

0x8a2c,	// (0x00083f11) ncimui_group_query_pane_ParamLimits

0x8a2c,	// (0x00083f11) ncimui_group_query_pane

0x8a74,	// (0x00083f59) ncimui_list_pane_ParamLimits

0x8a74,	// (0x00083f59) ncimui_list_pane

0x8a9b,	// (0x00083f80) ncimui_text_pane_ParamLimits

0x8a9b,	// (0x00083f80) ncimui_text_pane

0x8b3b,	// (0x00084020) ncimui_text_pane_t1_ParamLimits

0x8b3b,	// (0x00084020) ncimui_text_pane_t1

0xe1ce,	// (0x000896b3) ncimui_list_single_graphic_pane_ParamLimits

0xe1ce,	// (0x000896b3) ncimui_list_single_graphic_pane

0x8b5a,	// (0x0008403f) ncimui_query_pane_ParamLimits

0x8b5a,	// (0x0008403f) ncimui_query_pane

0xa105,	// (0x000855ea) list_highlight_pane_cp013

0xe1de,	// (0x000896c3) ncim_list_query_list_pane_t1_copy1

0xe1ec,	// (0x000896d1) ncim_list_single_graphic_pane_g1

0x8b6d,	// (0x00084052) ncim_query_button_pane_cp01

0x8b79,	// (0x0008405e) ncim_query_entry_pane_ParamLimits

0x8b79,	// (0x0008405e) ncim_query_entry_pane

0x8b8c,	// (0x00084071) ncimui_query_pane_g1

0x8b98,	// (0x0008407d) ncimui_query_pane_t1_ParamLimits

0x8b98,	// (0x0008407d) ncimui_query_pane_t1

0xaae2,	// (0x00085fc7) input_focus_pane_cp012

0xe1f4,	// (0x000896d9) ncim_query_entry_pane_t1

0xa84e,	// (0x00085d33) main_im_pane_ParamLimits

0xaae2,	// (0x00085fc7) main_mobtv_pane_ParamLimits

0xaae2,	// (0x00085fc7) main_mobtv_pane

0x8838,	// (0x00083d1d) main_cset6_slider_pane_g18_ParamLimits

0x8838,	// (0x00083d1d) main_cset6_slider_pane_g18

0xdf94,	// (0x00089479) main_cset6_slider_pane_g19_ParamLimits

0xdf94,	// (0x00089479) main_cset6_slider_pane_g19

0xd6af,	// (0x00088b94) bg_main_mobtv_pane_ParamLimits

0xd6af,	// (0x00088b94) bg_main_mobtv_pane

0x8bb1,	// (0x00084096) main_mobtv_info_pane

0x8bbc,	// (0x000840a1) main_mobtv_loading_pane_ParamLimits

0x8bbc,	// (0x000840a1) main_mobtv_loading_pane

0xe206,	// (0x000896eb) main_mobtv_pg_channel_list_pane

0xe210,	// (0x000896f5) main_mobtv_pg_hdr_pane

0x8bc9,	// (0x000840ae) main_mobtv_programe_curr_pane_ParamLimits

0x8bc9,	// (0x000840ae) main_mobtv_programe_curr_pane

0x8bd6,	// (0x000840bb) main_mobtv_programe_next_pane_ParamLimits

0x8bd6,	// (0x000840bb) main_mobtv_programe_next_pane

0xe219,	// (0x000896fe) popup_mobtv_noti_window

0xcd1c,	// (0x00088201) main_tv_pg_hdr_pane_g1

0xe221,	// (0x00089706) main_tv_pg_hdr_pane_g2

0xe229,	// (0x0008970e) main_tv_pg_hdr_pane_g3

0xe231,	// (0x00089716) main_tv_pg_hdr_pane_g4

0xe239,	// (0x0008971e) main_tv_pg_hdr_pane_g5

0xe243,	// (0x00089728) main_tv_pg_hdr_pane_g6

0xe24d,	// (0x00089732) main_tv_pg_hdr_pane_g7

0xe257,	// (0x0008973c) main_tv_pg_hdr_pane_g8

0xe261,	// (0x00089746) main_tv_pg_hdr_pane_g9

0xe26b,	// (0x00089750) main_tv_pg_hdr_pane_g10

0xe275,	// (0x0008975a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc04,	// (0x0008b0e9) main_tv_pg_hdr_pane_g

0xe27f,	// (0x00089764) main_tv_pg_hdr_pane_t1

0xe28d,	// (0x00089772) main_tv_pg_hdr_pane_t2

0xe29b,	// (0x00089780) main_tv_pg_hdr_pane_t3

0xe2ab,	// (0x00089790) main_tv_pg_hdr_pane_t4

0xe2bb,	// (0x000897a0) main_tv_pg_hdr_pane_t5

0x0004,

0x090c,	// (0x0007bdf1) main_tv_pg_hdr_pane_t

0xe2cb,	// (0x000897b0) single_mobtv_pg_channel_pane_ParamLimits

0xe2cb,	// (0x000897b0) single_mobtv_pg_channel_pane

0xe2dd,	// (0x000897c2) single_mobtv_pg_channel_table_pane

0xadea,	// (0x000862cf) single_mobtv_pg_channel_thumb_pane

0xe2e6,	// (0x000897cb) single_tv_pg_channel_pane_g1

0xe2ef,	// (0x000897d4) single_tv_pg_channel_pane_g2

0x0001,

0x0917,	// (0x0007bdfc) single_tv_pg_channel_pane_g

0xcf61,	// (0x00088446) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf61,	// (0x00088446) bg_single_mobtv_pg_channel_thumb_pane

0xe2f8,	// (0x000897dd) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2f8,	// (0x000897dd) single_mobtv_pg_channel_thumb_pane_g1

0xe306,	// (0x000897eb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe306,	// (0x000897eb) single_mobtv_pg_channel_thumb_pane_g2

0xe312,	// (0x000897f7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe312,	// (0x000897f7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x091c,	// (0x0007be01) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x091c,	// (0x0007be01) single_mobtv_pg_channel_thumb_pane_g

0xe31e,	// (0x00089803) single_mobtv_pg_channel_thumb_pane_t1

0xe32c,	// (0x00089811) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0923,	// (0x0007be08) single_mobtv_pg_channel_thumb_pane_t

0xcd1c,	// (0x00088201) bg_single_mobtv_pg_channel_table_pane_g1

0xcd1c,	// (0x00088201) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x0008abb9) bg_single_mobtv_pg_channel_table_pane_g

0xe33a,	// (0x0008981f) single_mobtv_pg_channel_table_pane_t1

0xe348,	// (0x0008982d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0928,	// (0x0007be0d) single_mobtv_pg_channel_table_pane_t

0x8beb,	// (0x000840d0) main_mobtv_info_pane_g1_ParamLimits

0x8beb,	// (0x000840d0) main_mobtv_info_pane_g1

0x8c07,	// (0x000840ec) main_mobtv_info_pane_t1_ParamLimits

0x8c07,	// (0x000840ec) main_mobtv_info_pane_t1

0x8c7f,	// (0x00084164) main_mobtv_info_pane_t2_ParamLimits

0x8c7f,	// (0x00084164) main_mobtv_info_pane_t2

0x0002,

0xfc20,	// (0x0008b105) main_mobtv_info_pane_t_ParamLimits

0xfc20,	// (0x0008b105) main_mobtv_info_pane_t

0x8d0e,	// (0x000841f3) wait_bar_pane_cp05

0x8d20,	// (0x00084205) main_mobtv_loading_pane_g1_ParamLimits

0x8d20,	// (0x00084205) main_mobtv_loading_pane_g1

0x8d2e,	// (0x00084213) main_mobtv_loading_pane_g2_ParamLimits

0x8d2e,	// (0x00084213) main_mobtv_loading_pane_g2

0x8d3a,	// (0x0008421f) main_mobtv_loading_pane_g3_ParamLimits

0x8d3a,	// (0x0008421f) main_mobtv_loading_pane_g3

0x0002,

0xfc27,	// (0x0008b10c) main_mobtv_loading_pane_g_ParamLimits

0xfc27,	// (0x0008b10c) main_mobtv_loading_pane_g

0xe356,	// (0x0008983b) main_mobtv_loading_pane_t1_ParamLimits

0xe356,	// (0x0008983b) main_mobtv_loading_pane_t1

0xe36e,	// (0x00089853) main_mobtv_loading_pane_t2_ParamLimits

0xe36e,	// (0x00089853) main_mobtv_loading_pane_t2

0x0001,

0x0940,	// (0x0007be25) main_mobtv_loading_pane_t_ParamLimits

0x0940,	// (0x0007be25) main_mobtv_loading_pane_t

0x8d48,	// (0x0008422d) wait_bar_pane_cp06_ParamLimits

0x8d48,	// (0x0008422d) wait_bar_pane_cp06

0xe392,	// (0x00089877) main_mobtv_programe_curr_pane_t1

0xe3a0,	// (0x00089885) main_mobtv_programe_curr_pane_t2

0x0001,

0x0945,	// (0x0007be2a) main_mobtv_programe_curr_pane_t

0xe3ae,	// (0x00089893) main_mobtv_programe_next_pane_t1

0xe3bc,	// (0x000898a1) main_mobtv_programe_next_pane_t2

0xe3ca,	// (0x000898af) main_mobtv_programe_next_pane_t3

0x0002,

0x094a,	// (0x0007be2f) main_mobtv_programe_next_pane_t

0xa105,	// (0x000855ea) bg_popup_mobtv_noti_window_pane

0xe3d8,	// (0x000898bd) popup_mobtv_noti_window_g1

0xe3e0,	// (0x000898c5) popup_mobtv_noti_window_t1

0xe3ee,	// (0x000898d3) popup_mobtv_noti_window_t2

0x0001,

0x0951,	// (0x0007be36) popup_mobtv_noti_window_t

0xcd1c,	// (0x00088201) bg_popup_mobtv_noti_window_pane_g1

0xa105,	// (0x000855ea) sc_clock_pane

0xa105,	// (0x000855ea) main_fs_bigclock_pane

0x83fa,	// (0x000838df) blid2_tripm_pane_t4_ParamLimits

0x83fa,	// (0x000838df) blid2_tripm_pane_t4

0x8d54,	// (0x00084239) sc_clock_pane_g1_ParamLimits

0x8d54,	// (0x00084239) sc_clock_pane_g1

0x8d62,	// (0x00084247) sc_clock_pane_t1_ParamLimits

0x8d62,	// (0x00084247) sc_clock_pane_t1

0x8d75,	// (0x0008425a) sc_clock_pane_t2_ParamLimits

0x8d75,	// (0x0008425a) sc_clock_pane_t2

0x8d87,	// (0x0008426c) sc_clock_pane_t3_ParamLimits

0x8d87,	// (0x0008426c) sc_clock_pane_t3

0x0004,

0xfc2e,	// (0x0008b113) sc_clock_pane_t_ParamLimits

0xfc2e,	// (0x0008b113) sc_clock_pane_t

0x96f0,	// (0x00084bd5) main_fs_bigclock_indicator_pane_ParamLimits

0x96f0,	// (0x00084bd5) main_fs_bigclock_indicator_pane

0x8e0a,	// (0x000842ef) main_fs_bigclock_pane_g1_ParamLimits

0x8e0a,	// (0x000842ef) main_fs_bigclock_pane_g1

0x96fc,	// (0x00084be1) main_fs_bigclock_pane_t1_ParamLimits

0x96fc,	// (0x00084be1) main_fs_bigclock_pane_t1

0x970e,	// (0x00084bf3) main_fs_bigclock_pane_t2_ParamLimits

0x970e,	// (0x00084bf3) main_fs_bigclock_pane_t2

0x9722,	// (0x00084c07) main_fs_bigclock_pane_t3_ParamLimits

0x9722,	// (0x00084c07) main_fs_bigclock_pane_t3

0x0002,

0xfe00,	// (0x0008b2e5) main_fs_bigclock_pane_t_ParamLimits

0xfe00,	// (0x0008b2e5) main_fs_bigclock_pane_t

0xec60,	// (0x0008a145) main_fs_bigclock_indicator_pane_g1

0xe10d,	// (0x000895f2) ncim_query_content_pane_g2_ParamLimits

0xe10d,	// (0x000895f2) ncim_query_content_pane_g2

0x0001,

0xfbf2,	// (0x0008b0d7) ncim_query_content_pane_g_ParamLimits

0xfbf2,	// (0x0008b0d7) ncim_query_content_pane_g

0x8d9b,	// (0x00084280) sc_clock_pane_t4_ParamLimits

0x8d9b,	// (0x00084280) sc_clock_pane_t4

0xaae2,	// (0x00085fc7) main_radioblah_pane

0x7127,	// (0x0008260c) cell_call4_button_pane_t1_copy1_ParamLimits

0x7127,	// (0x0008260c) cell_call4_button_pane_t1_copy1

0x89de,	// (0x00083ec3) main_ncimui_pane_t1_ParamLimits

0x89de,	// (0x00083ec3) main_ncimui_pane_t1

0x89f8,	// (0x00083edd) main_ncimui_pane_t2_ParamLimits

0x89f8,	// (0x00083edd) main_ncimui_pane_t2

0x0002,

0xfbeb,	// (0x0008b0d0) main_ncimui_pane_t_ParamLimits

0xfbeb,	// (0x0008b0d0) main_ncimui_pane_t

0xe534,	// (0x00089a19) main_radioblah_anim_pane_ParamLimits

0xe534,	// (0x00089a19) main_radioblah_anim_pane

0xe545,	// (0x00089a2a) main_radioblah_info_pane_ParamLimits

0xe545,	// (0x00089a2a) main_radioblah_info_pane

0xe559,	// (0x00089a3e) main_radioblah_pane_t1_ParamLimits

0xe559,	// (0x00089a3e) main_radioblah_pane_t1

0xe575,	// (0x00089a5a) main_radioblah_pane_t2_ParamLimits

0xe575,	// (0x00089a5a) main_radioblah_pane_t2

0x0003,

0x0977,	// (0x0007be5c) main_radioblah_pane_t_ParamLimits

0x0977,	// (0x0007be5c) main_radioblah_pane_t

0x8e60,	// (0x00084345) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8e60,	// (0x00084345) main_radioblah_rocker_ctrl_pane

0xe5bd,	// (0x00089aa2) main_radioblah_info_pane_t1_ParamLimits

0xe5bd,	// (0x00089aa2) main_radioblah_info_pane_t1

0x8ea5,	// (0x0008438a) main_radioblah_info_pane_t2_ParamLimits

0x8ea5,	// (0x0008438a) main_radioblah_info_pane_t2

0x0003,

0xfc39,	// (0x0008b11e) main_radioblah_info_pane_t_ParamLimits

0xfc39,	// (0x0008b11e) main_radioblah_info_pane_t

0xcd1c,	// (0x00088201) main_radioblah_rocker_ctrl_pane_g1

0x8f55,	// (0x0008443a) main_radioblah_rocker_ctrl_pane_g2

0x8f5d,	// (0x00084442) main_radioblah_rocker_ctrl_pane_g3

0x8f65,	// (0x0008444a) main_radioblah_rocker_ctrl_pane_g4

0x8f6d,	// (0x00084452) main_radioblah_rocker_ctrl_pane_g5

0x8f75,	// (0x0008445a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc42,	// (0x0008b127) main_radioblah_rocker_ctrl_pane_g

0x8984,	// (0x00083e69) main_cset_text2_pane_t1_copy1_ParamLimits

0x71b2,	// (0x00082697) cam4_image_uncrop_qvga_pane

0x72f3,	// (0x000827d8) vid4_image_uncrop_qcif_pane

0x8588,	// (0x00083a6d) cam6_image_uncrop_qvga_pane_ParamLimits

0x8588,	// (0x00083a6d) cam6_image_uncrop_qvga_pane

0xddf6,	// (0x000892db) vid6_image_uncrop_qcif_pane_ParamLimits

0xddf6,	// (0x000892db) vid6_image_uncrop_qcif_pane

0xa105,	// (0x000855ea) bg_popup_preview_window_pane_cp03

0xe0bf,	// (0x000895a4) list_cset_text2_pane

0xe0c7,	// (0x000895ac) main_cset6_text2_pane_g1

0xe0cf,	// (0x000895b4) main_cset6_text2_pane_t1

0x8f7d,	// (0x00084462) list_cset_text2_pane_t1_ParamLimits

0x8f7d,	// (0x00084462) list_cset_text2_pane_t1

0xaae2,	// (0x00085fc7) main_radioblah_pane_ParamLimits

0x8cfa,	// (0x000841df) main_mobtv_info_pane_t3_ParamLimits

0x8cfa,	// (0x000841df) main_mobtv_info_pane_t3

0x8e4e,	// (0x00084333) main_radioblah_pane_g1

0x8e79,	// (0x0008435e) main_radioblah_info_pane_g1

0x8efa,	// (0x000843df) main_radioblah_info_pane_t3_ParamLimits

0x8efa,	// (0x000843df) main_radioblah_info_pane_t3

0x3fe2,	// (0x0007f4c7) highlight_cell_cale_month_pane_ParamLimits

0x3fe2,	// (0x0007f4c7) highlight_cell_cale_month_pane

0xa105,	// (0x000855ea) main_phob_fisheye_pane

0xd03d,	// (0x00088522) scroll_pane_cp0031_ParamLimits

0xd03d,	// (0x00088522) scroll_pane_cp0031

0xdf04,	// (0x000893e9) wait_bar_pane_cp08_ParamLimits

0x8764,	// (0x00083c49) cset_list_set_pane_copy1_ParamLimits

0xe5f7,	// (0x00089adc) highlight_cell_cale_month_pane_g1

0x8f9e,	// (0x00084483) highlight_cell_cale_month_pane_t1

0xdb9e,	// (0x00089083) list_gen_pane_cp01

0xd7e9,	// (0x00088cce) scroll_pane_01

0x1431,	// (0x0007c916) list_single_double_fisheye_pane

0x143a,	// (0x0007c91f) list_double_fisheye_pane_g1_ParamLimits

0x143a,	// (0x0007c91f) list_double_fisheye_pane_g1

0x8fac,	// (0x00084491) list_double_fisheye_pane_g2_ParamLimits

0x8fac,	// (0x00084491) list_double_fisheye_pane_g2

0x1446,	// (0x0007c92b) list_double_fisheye_pane_g3_ParamLimits

0x1446,	// (0x0007c92b) list_double_fisheye_pane_g3

0x0004,

0xfc4f,	// (0x0008b134) list_double_fisheye_pane_g_ParamLimits

0xfc4f,	// (0x0008b134) list_double_fisheye_pane_g

0x145e,	// (0x0007c943) list_double_fisheye_pane_t1_ParamLimits

0x145e,	// (0x0007c943) list_double_fisheye_pane_t1

0x1479,	// (0x0007c95e) list_double_fisheye_pane_t2_ParamLimits

0x1479,	// (0x0007c95e) list_double_fisheye_pane_t2

0x0001,

0xfc5a,	// (0x0008b13f) list_double_fisheye_pane_t_ParamLimits

0xfc5a,	// (0x0008b13f) list_double_fisheye_pane_t

0xa105,	// (0x000855ea) main_call5_pane

0x8dc1,	// (0x000842a6) sc_swipe_pane_ParamLimits

0x8dc1,	// (0x000842a6) sc_swipe_pane

0x8fdd,	// (0x000844c2) call5_image_pane_ParamLimits

0x8fdd,	// (0x000844c2) call5_image_pane

0x8fed,	// (0x000844d2) call5_swipe_1_pane_ParamLimits

0x8fed,	// (0x000844d2) call5_swipe_1_pane

0x8ff9,	// (0x000844de) call5_swipe_2_pane_ParamLimits

0x8ff9,	// (0x000844de) call5_swipe_2_pane

0x9013,	// (0x000844f8) popup_call5_audio_first_window_ParamLimits

0x9013,	// (0x000844f8) popup_call5_audio_first_window

0xcf61,	// (0x00088446) call5_swipe_1_pane_g1_ParamLimits

0xcf61,	// (0x00088446) call5_swipe_1_pane_g1

0xe5ff,	// (0x00089ae4) call5_swipe_1_pane_g2_ParamLimits

0xe5ff,	// (0x00089ae4) call5_swipe_1_pane_g2

0x0001,

0xfc5f,	// (0x0008b144) call5_swipe_1_pane_g_ParamLimits

0xfc5f,	// (0x0008b144) call5_swipe_1_pane_g

0xe60b,	// (0x00089af0) call5_swipe_1_pane_t1_ParamLimits

0xe60b,	// (0x00089af0) call5_swipe_1_pane_t1

0xcf61,	// (0x00088446) call5_swipe_2_pane_g1_ParamLimits

0xcf61,	// (0x00088446) call5_swipe_2_pane_g1

0xe620,	// (0x00089b05) call5_swipe_2_pane_g2_ParamLimits

0xe620,	// (0x00089b05) call5_swipe_2_pane_g2

0x0001,

0xfc64,	// (0x0008b149) call5_swipe_2_pane_g_ParamLimits

0xfc64,	// (0x0008b149) call5_swipe_2_pane_g

0xe62c,	// (0x00089b11) call5_swipe_2_pane_t1_ParamLimits

0xe62c,	// (0x00089b11) call5_swipe_2_pane_t1

0xe641,	// (0x00089b26) sc_swipe_pane_g1_ParamLimits

0xe641,	// (0x00089b26) sc_swipe_pane_g1

0xe64e,	// (0x00089b33) sc_swipe_pane_g2_ParamLimits

0xe64e,	// (0x00089b33) sc_swipe_pane_g2

0x0001,

0xfc69,	// (0x0008b14e) sc_swipe_pane_g_ParamLimits

0xfc69,	// (0x0008b14e) sc_swipe_pane_g

0xe65a,	// (0x00089b3f) sc_swipe_pane_t1_ParamLimits

0xe65a,	// (0x00089b3f) sc_swipe_pane_t1

0xa105,	// (0x000855ea) main_cmail_launcher_pane

0x9021,	// (0x00084506) aid_size_cell_cmail_l_ParamLimits

0x9021,	// (0x00084506) aid_size_cell_cmail_l

0x902f,	// (0x00084514) grid_cmail_l_pane_ParamLimits

0x902f,	// (0x00084514) grid_cmail_l_pane

0x903f,	// (0x00084524) cell_cmail_l_pane_ParamLimits

0x903f,	// (0x00084524) cell_cmail_l_pane

0xe66f,	// (0x00089b54) cell_cmail_l_pane_g1_ParamLimits

0xe66f,	// (0x00089b54) cell_cmail_l_pane_g1

0xe67b,	// (0x00089b60) cell_cmail_l_pane_t1_ParamLimits

0xe67b,	// (0x00089b60) cell_cmail_l_pane_t1

0xe691,	// (0x00089b76) cell_cmail_l_pane_t2_ParamLimits

0xe691,	// (0x00089b76) cell_cmail_l_pane_t2

0x0001,

0xfc6e,	// (0x0008b153) cell_cmail_l_pane_t_ParamLimits

0xfc6e,	// (0x0008b153) cell_cmail_l_pane_t

0xaae2,	// (0x00085fc7) grid_highlight_pane_cp018_ParamLimits

0xaae2,	// (0x00085fc7) grid_highlight_pane_cp018

0x2042,	// (0x0007d527) main2_pane_ParamLimits

0x2042,	// (0x0007d527) main2_pane

0xa8f5,	// (0x00085dda) popup_sp_fs_action_menu_bg_pane_g1

0xa8fd,	// (0x00085de2) popup_sp_fs_action_menu_bg_pane_g2

0xa905,	// (0x00085dea) popup_sp_fs_action_menu_bg_pane_g3

0xa90d,	// (0x00085df2) popup_sp_fs_action_menu_bg_pane_g4

0xa915,	// (0x00085dfa) popup_sp_fs_action_menu_bg_pane_g5

0xa91d,	// (0x00085e02) popup_sp_fs_action_menu_bg_pane_g6

0xa925,	// (0x00085e0a) popup_sp_fs_action_menu_bg_pane_g7

0xa92d,	// (0x00085e12) popup_sp_fs_action_menu_bg_pane_g8

0xa935,	// (0x00085e1a) popup_sp_fs_action_menu_bg_pane_g9

0xa93d,	// (0x00085e22) popup_sp_fs_action_menu_bg_pane_g10

0xa93d,	// (0x00085e22) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0008a654) popup_sp_fs_action_menu_bg_pane_g

0x0c44,	// (0x0007c129) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0c44,	// (0x0007c129) list_medium_line_x2_t3_g3_g1

0x0c50,	// (0x0007c135) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0c50,	// (0x0007c135) list_medium_line_x2_t3_g3_g2

0x0c5c,	// (0x0007c141) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0c5c,	// (0x0007c141) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0008a702) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0008a702) list_medium_line_x2_t3_g3_g

0x0c68,	// (0x0007c14d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0c68,	// (0x0007c14d) list_medium_line_x2_t3_g3_t1

0x0c7d,	// (0x0007c162) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0c7d,	// (0x0007c162) list_medium_line_x2_t3_g3_t2

0x0c8f,	// (0x0007c174) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0c8f,	// (0x0007c174) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0008a709) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0008a709) list_medium_line_x2_t3_g3_t

0x0c44,	// (0x0007c129) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0c44,	// (0x0007c129) list_medium_line_x2_t3_g2_g1

0x0c5c,	// (0x0007c141) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0c5c,	// (0x0007c141) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0008a710) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0008a710) list_medium_line_x2_t3_g2_g

0x0ca4,	// (0x0007c189) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0ca4,	// (0x0007c189) list_medium_line_x2_t3_g2_t1

0x0cba,	// (0x0007c19f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0cba,	// (0x0007c19f) list_medium_line_x2_t3_g2_t2

0x0c8f,	// (0x0007c174) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0c8f,	// (0x0007c174) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0008a715) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0008a715) list_medium_line_x2_t3_g2_t

0x0c44,	// (0x0007c129) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0c44,	// (0x0007c129) list_medium_line_x2_t4_g4_g1

0x0ccc,	// (0x0007c1b1) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0ccc,	// (0x0007c1b1) list_medium_line_x2_t4_g4_g2

0x0c50,	// (0x0007c135) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0c50,	// (0x0007c135) list_medium_line_x2_t4_g4_g3

0x0cd8,	// (0x0007c1bd) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0cd8,	// (0x0007c1bd) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0008a71c) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0008a71c) list_medium_line_x2_t4_g4_g

0x0ce4,	// (0x0007c1c9) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0ce4,	// (0x0007c1c9) list_medium_line_x2_t4_g4_t1

0x0cfe,	// (0x0007c1e3) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0cfe,	// (0x0007c1e3) list_medium_line_x2_t4_g4_t2

0x0d14,	// (0x0007c1f9) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0d14,	// (0x0007c1f9) list_medium_line_x2_t4_g4_t3

0x0d29,	// (0x0007c20e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0d29,	// (0x0007c20e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0008a725) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0008a725) list_medium_line_x2_t4_g4_t

0x0c44,	// (0x0007c129) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0c44,	// (0x0007c129) list_medium_line_x2_t2_g4_g1

0x0ccc,	// (0x0007c1b1) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0ccc,	// (0x0007c1b1) list_medium_line_x2_t2_g4_g2

0x0c50,	// (0x0007c135) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0c50,	// (0x0007c135) list_medium_line_x2_t2_g4_g3

0x0c5c,	// (0x0007c141) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0c5c,	// (0x0007c141) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0008a78c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0008a78c) list_medium_line_x2_t2_g4_g

0x0d3b,	// (0x0007c220) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0d3b,	// (0x0007c220) list_medium_line_x2_t2_g4_t1

0x0c8f,	// (0x0007c174) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0c8f,	// (0x0007c174) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0008a795) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0008a795) list_medium_line_x2_t2_g4_t

0x0c44,	// (0x0007c129) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0c44,	// (0x0007c129) list_medium_line_x2_t2_g3_g1

0x0c50,	// (0x0007c135) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0c50,	// (0x0007c135) list_medium_line_x2_t2_g3_g2

0x0c5c,	// (0x0007c141) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0c5c,	// (0x0007c141) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0008a702) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0008a702) list_medium_line_x2_t2_g3_g

0x0d50,	// (0x0007c235) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0d50,	// (0x0007c235) list_medium_line_x2_t2_g3_t1

0x0c8f,	// (0x0007c174) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0c8f,	// (0x0007c174) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0008a79a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0008a79a) list_medium_line_x2_t2_g3_t

0x41c3,	// (0x0007f6a8) main_sp_fs_list_pane_ParamLimits

0x41c3,	// (0x0007f6a8) main_sp_fs_list_pane

0x41cf,	// (0x0007f6b4) sp_fs_scroll_pane_ParamLimits

0x41cf,	// (0x0007f6b4) sp_fs_scroll_pane

0x0d7f,	// (0x0007c264) list_medium_line_x2_t3_t1

0x0d8f,	// (0x0007c274) list_medium_line_x2_t3_t2

0x0d9d,	// (0x0007c282) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0008a7e5) list_medium_line_x2_t3_t

0x0dab,	// (0x0007c290) list_medium_line_x3_t4_t1

0x0dbb,	// (0x0007c2a0) list_medium_line_x3_t4_t2

0x0dc9,	// (0x0007c2ae) list_medium_line_x3_t4_t3

0x0d9d,	// (0x0007c282) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0008a7ec) list_medium_line_x3_t4_t

0x0dd7,	// (0x0007c2bc) list_medium_line_x4_t5_t1

0x0de7,	// (0x0007c2cc) list_medium_line_x4_t5_t2

0x0dc9,	// (0x0007c2ae) list_medium_line_x4_t5_t3

0x0df5,	// (0x0007c2da) list_medium_line_x4_t5_t4

0x0d9d,	// (0x0007c282) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0008a7f5) list_medium_line_x4_t5_t

0x0c44,	// (0x0007c129) list_medium_line_t4_g4_g1_ParamLimits

0x0c44,	// (0x0007c129) list_medium_line_t4_g4_g1

0x0cd8,	// (0x0007c1bd) list_medium_line_t4_g4_g2_ParamLimits

0x0cd8,	// (0x0007c1bd) list_medium_line_t4_g4_g2

0x0e03,	// (0x0007c2e8) list_medium_line_t4_g4_g3_ParamLimits

0x0e03,	// (0x0007c2e8) list_medium_line_t4_g4_g3

0x0c5c,	// (0x0007c141) list_medium_line_t4_g4_g4_ParamLimits

0x0c5c,	// (0x0007c141) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0008a800) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0008a800) list_medium_line_t4_g4_g

0x0e0f,	// (0x0007c2f4) list_medium_line_t4_g4_t1_ParamLimits

0x0e0f,	// (0x0007c2f4) list_medium_line_t4_g4_t1

0x0e24,	// (0x0007c309) list_medium_line_t4_g4_t2_ParamLimits

0x0e24,	// (0x0007c309) list_medium_line_t4_g4_t2

0x0e39,	// (0x0007c31e) list_medium_line_t4_g4_t3_ParamLimits

0x0e39,	// (0x0007c31e) list_medium_line_t4_g4_t3

0x0c8f,	// (0x0007c174) list_medium_line_t4_g4_t4_ParamLimits

0x0c8f,	// (0x0007c174) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0008a809) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0008a809) list_medium_line_t4_g4_t

0x42e6,	// (0x0007f7cb) chi_dic_find_pane_g1

0x5168,	// (0x0008064d) main_tport_pane

0x10ac,	// (0x0007c591) list_medium_line_plain_t1

0x10ba,	// (0x0007c59f) list_medium_line_t2_g2_g1_ParamLimits

0x10ba,	// (0x0007c59f) list_medium_line_t2_g2_g1

0x7d3c,	// (0x00083221) list_medium_line_t2_g2_g2_ParamLimits

0x7d3c,	// (0x00083221) list_medium_line_t2_g2_g2

0x0001,

0xf9fc,	// (0x0008aee1) list_medium_line_t2_g2_g_ParamLimits

0xf9fc,	// (0x0008aee1) list_medium_line_t2_g2_g

0x10c6,	// (0x0007c5ab) list_medium_line_t2_g2_t1_ParamLimits

0x10c6,	// (0x0007c5ab) list_medium_line_t2_g2_t1

0x10e0,	// (0x0007c5c5) list_medium_line_t2_g2_t2_ParamLimits

0x10e0,	// (0x0007c5c5) list_medium_line_t2_g2_t2

0x0001,

0xfa01,	// (0x0008aee6) list_medium_line_t2_g2_t_ParamLimits

0xfa01,	// (0x0008aee6) list_medium_line_t2_g2_t

0x1300,	// (0x0007c7e5) aid_sp_fs_list_icon_a_sm

0x8263,	// (0x00083748) aid_sp_fs_list_icon_d

0xab17,	// (0x00085ffc) aid_sp_fs_text_primary

0xab20,	// (0x00086005) aid_sp_fs_text_secondary

0x826b,	// (0x00083750) list_medium_line

0x826b,	// (0x00083750) list_medium_line_g2

0x826b,	// (0x00083750) list_medium_line_g3

0x826b,	// (0x00083750) list_medium_line_plain

0x826b,	// (0x00083750) list_medium_line_plain_t2

0x826b,	// (0x00083750) list_medium_line_plain_t3

0x826b,	// (0x00083750) list_medium_line_right_icon

0x826b,	// (0x00083750) list_medium_line_right_iconx2

0x826b,	// (0x00083750) list_medium_line_t2

0x826b,	// (0x00083750) list_medium_line_t2_g2

0x826b,	// (0x00083750) list_medium_line_t2_g3

0x826b,	// (0x00083750) list_medium_line_t2_right_icon

0x826b,	// (0x00083750) list_medium_line_t2_right_iconx2

0x826b,	// (0x00083750) list_medium_line_t3

0x826b,	// (0x00083750) list_medium_line_t3_g2

0x826b,	// (0x00083750) list_medium_line_t3_g3

0x826b,	// (0x00083750) list_medium_line_t3_right_iconx2

0x1308,	// (0x0007c7ed) list_medium_line_t4_g4

0x1311,	// (0x0007c7f6) list_medium_line_x2

0x1311,	// (0x0007c7f6) list_medium_line_x2_t2_g2

0x1311,	// (0x0007c7f6) list_medium_line_x2_t2_g3

0x1311,	// (0x0007c7f6) list_medium_line_x2_t2_g4

0x1311,	// (0x0007c7f6) list_medium_line_x2_t3

0x1311,	// (0x0007c7f6) list_medium_line_x2_t3_g2

0x1311,	// (0x0007c7f6) list_medium_line_x2_t3_g3

0x1311,	// (0x0007c7f6) list_medium_line_x2_t3_g4

0x1311,	// (0x0007c7f6) list_medium_line_x2_t4_g2

0x1311,	// (0x0007c7f6) list_medium_line_x2_t4_g4

0x131a,	// (0x0007c7ff) list_medium_line_x3

0x131a,	// (0x0007c7ff) list_medium_line_x3_t4

0x131a,	// (0x0007c7ff) list_medium_line_x3_t4_g4

0x1308,	// (0x0007c7ed) list_medium_line_x4_t4

0x1308,	// (0x0007c7ed) list_medium_line_x4_t4_g7

0x1308,	// (0x0007c7ed) list_medium_line_x4_t5

0x1323,	// (0x0007c808) list_single_fs_dyc_pane_ParamLimits

0x1323,	// (0x0007c808) list_single_fs_dyc_pane

0x0c44,	// (0x0007c129) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0c44,	// (0x0007c129) list_medium_line_x4_t4_g7_g1

0x135b,	// (0x0007c840) list_medium_line_x4_t4_g7_g2_ParamLimits

0x135b,	// (0x0007c840) list_medium_line_x4_t4_g7_g2

0x1367,	// (0x0007c84c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1367,	// (0x0007c84c) list_medium_line_x4_t4_g7_g3

0x1376,	// (0x0007c85b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1376,	// (0x0007c85b) list_medium_line_x4_t4_g7_g4

0x1382,	// (0x0007c867) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1382,	// (0x0007c867) list_medium_line_x4_t4_g7_g5

0x1391,	// (0x0007c876) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1391,	// (0x0007c876) list_medium_line_x4_t4_g7_g6

0x13a0,	// (0x0007c885) list_medium_line_x4_t4_g7_g7_ParamLimits

0x13a0,	// (0x0007c885) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcc,	// (0x0008b0b1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcc,	// (0x0008b0b1) list_medium_line_x4_t4_g7_g

0x13ac,	// (0x0007c891) list_medium_line_x4_t4_g7_t1_ParamLimits

0x13ac,	// (0x0007c891) list_medium_line_x4_t4_g7_t1

0x13c1,	// (0x0007c8a6) list_medium_line_x4_t4_g7_t2_ParamLimits

0x13c1,	// (0x0007c8a6) list_medium_line_x4_t4_g7_t2

0x13d6,	// (0x0007c8bb) list_medium_line_x4_t4_g7_t3_ParamLimits

0x13d6,	// (0x0007c8bb) list_medium_line_x4_t4_g7_t3

0x13eb,	// (0x0007c8d0) list_medium_line_x4_t4_g7_t4_ParamLimits

0x13eb,	// (0x0007c8d0) list_medium_line_x4_t4_g7_t4

0x13fd,	// (0x0007c8e2) list_medium_line_x4_t4_g7_t5_ParamLimits

0x13fd,	// (0x0007c8e2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdb,	// (0x0008b0c0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdb,	// (0x0008b0c0) list_medium_line_x4_t4_g7_t

0x140f,	// (0x0007c8f4) list_single_dyc_row_pane_ParamLimits

0x140f,	// (0x0007c8f4) list_single_dyc_row_pane

0x8fd1,	// (0x000844b6) call5_gesture_pane_ParamLimits

0x8fd1,	// (0x000844b6) call5_gesture_pane

0x9005,	// (0x000844ea) call5_windows_pane_ParamLimits

0x9005,	// (0x000844ea) call5_windows_pane

0x9058,	// (0x0008453d) call5_swipe_1_pane_cp_ParamLimits

0x9058,	// (0x0008453d) call5_swipe_1_pane_cp

0x9064,	// (0x00084549) call5_swipe_2_pane_cp_ParamLimits

0x9064,	// (0x00084549) call5_swipe_2_pane_cp

0xaa21,	// (0x00085f06) call5_image_pane_cp

0x9070,	// (0x00084555) popup_call5_audio_first_window_cp_ParamLimits

0x9070,	// (0x00084555) popup_call5_audio_first_window_cp

0xe641,	// (0x00089b26) call5_swipe_1_pane_g1_cp_ParamLimits

0xe641,	// (0x00089b26) call5_swipe_1_pane_g1_cp

0xe6ae,	// (0x00089b93) call5_swipe_1_pane_g2_cp

0xe65a,	// (0x00089b3f) call5_swipe_1_pane_t1_cp_ParamLimits

0xe65a,	// (0x00089b3f) call5_swipe_1_pane_t1_cp

0xe641,	// (0x00089b26) call5_swipe_2_pane_g1_cp_ParamLimits

0xe641,	// (0x00089b26) call5_swipe_2_pane_g1_cp

0xe6b6,	// (0x00089b9b) call5_swipe_2_pane_g2_cp

0xe6be,	// (0x00089ba3) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6be,	// (0x00089ba3) call5_swipe_2_pane_t1_cp

0xaae2,	// (0x00085fc7) main_sp_fs_email_pane

0xe6d3,	// (0x00089bb8) main_sp_fs_listscroll_pane_te

0x907e,	// (0x00084563) popup_sp_fs_action_menu_pane_ParamLimits

0x907e,	// (0x00084563) popup_sp_fs_action_menu_pane

0xcd1c,	// (0x00088201) bg_sp_fs_ctrlbar_pane_g1

0xe6dc,	// (0x00089bc1) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6e5,	// (0x00089bca) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6ee,	// (0x00089bd3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd1c,	// (0x00088201) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc73,	// (0x0008b158) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb01,	// (0x00087fe6) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb01,	// (0x00087fe6) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6f7,	// (0x00089bdc) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6f7,	// (0x00089bdc) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe703,	// (0x00089be8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe703,	// (0x00089be8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc7c,	// (0x0008b161) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc7c,	// (0x0008b161) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe738,	// (0x00089c1d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe738,	// (0x00089c1d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x90c2,	// (0x000845a7) list_medium_line_t2_right_icon_g1

0x149b,	// (0x0007c980) list_medium_line_t2_right_icon_t1

0x14ab,	// (0x0007c990) list_medium_line_t2_right_icon_t2

0x0001,

0xfc81,	// (0x0008b166) list_medium_line_t2_right_icon_t

0xc914,	// (0x00087df9) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc914,	// (0x00087df9) bg_sp_fs_ctrlbar_pane

0x910d,	// (0x000845f2) main_sp_fs_ctrlbar_button_pane_cp01

0x9115,	// (0x000845fa) main_sp_fs_ctrlbar_ddmenu_pane

0xe78a,	// (0x00089c6f) main_sp_fs_ctrlbar_pane_g1

0xe796,	// (0x00089c7b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc86,	// (0x0008b16b) main_sp_fs_ctrlbar_pane_g

0x9151,	// (0x00084636) main_sp_fs_ctrlbar_pane_t1

0x918c,	// (0x00084671) main_sp_fs_ctrlbar_pane

0x91a2,	// (0x00084687) main_sp_fs_listscroll_pane_te_cp01

0x14b9,	// (0x0007c99e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x14b9,	// (0x0007c99e) popup_sp_fs_action_menu_pane_cp01

0xaae2,	// (0x00085fc7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xaae2,	// (0x00085fc7) bg_sp_fs_highlight_list_pane_cp01

0x14e3,	// (0x0007c9c8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x14e3,	// (0x0007c9c8) sp_fs_action_menu_list_gene_pane_g1

0xe7bd,	// (0x00089ca2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7bd,	// (0x00089ca2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc94,	// (0x0008b179) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc94,	// (0x0008b179) sp_fs_action_menu_list_gene_pane_g

0x14f2,	// (0x0007c9d7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x14f2,	// (0x0007c9d7) sp_fs_action_menu_list_gene_pane_t1

0x150a,	// (0x0007c9ef) sp_fs_action_menu_list_gene_pane_ParamLimits

0x150a,	// (0x0007c9ef) sp_fs_action_menu_list_gene_pane

0xe7ca,	// (0x00089caf) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7ca,	// (0x00089caf) popup_sp_fs_action_menu_bg_pane

0x1529,	// (0x0007ca0e) sp_fs_action_menu_list_pane_ParamLimits

0x1529,	// (0x0007ca0e) sp_fs_action_menu_list_pane

0xab29,	// (0x0008600e) sp_fs_scroll_pane_cp01_ParamLimits

0xab29,	// (0x0008600e) sp_fs_scroll_pane_cp01

0x1549,	// (0x0007ca2e) list_medium_line_plain_t2_t1

0x1559,	// (0x0007ca3e) list_medium_line_plain_t2_t2

0x0001,

0xfc99,	// (0x0008b17e) list_medium_line_plain_t2_t

0x1567,	// (0x0007ca4c) list_medium_line_plain_t3_t1

0x1577,	// (0x0007ca5c) list_medium_line_plain_t3_t2

0x1585,	// (0x0007ca6a) list_medium_line_plain_t3_t3

0x0002,

0xfc9e,	// (0x0008b183) list_medium_line_plain_t3_t

0x0c44,	// (0x0007c129) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0c44,	// (0x0007c129) list_medium_line_x2_t2_g2_g1

0x0c5c,	// (0x0007c141) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0c5c,	// (0x0007c141) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0008a710) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0008a710) list_medium_line_x2_t2_g2_g

0x0e0f,	// (0x0007c2f4) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0e0f,	// (0x0007c2f4) list_medium_line_x2_t2_g2_t1

0x0c8f,	// (0x0007c174) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0c8f,	// (0x0007c174) list_medium_line_x2_t2_g2_t2

0x0001,

0xfca5,	// (0x0008b18a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfca5,	// (0x0008b18a) list_medium_line_x2_t2_g2_t

0x0c44,	// (0x0007c129) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0c44,	// (0x0007c129) list_medium_line_x2_t4_g2_g1

0x1593,	// (0x0007ca78) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1593,	// (0x0007ca78) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcaa,	// (0x0008b18f) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcaa,	// (0x0008b18f) list_medium_line_x2_t4_g2_g

0x15a5,	// (0x0007ca8a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x15a5,	// (0x0007ca8a) list_medium_line_x2_t4_g2_t1

0x15bf,	// (0x0007caa4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x15bf,	// (0x0007caa4) list_medium_line_x2_t4_g2_t2

0x15d5,	// (0x0007caba) list_medium_line_x2_t4_g2_t3_ParamLimits

0x15d5,	// (0x0007caba) list_medium_line_x2_t4_g2_t3

0x0c8f,	// (0x0007c174) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0c8f,	// (0x0007c174) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcaf,	// (0x0008b194) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcaf,	// (0x0008b194) list_medium_line_x2_t4_g2_t

0x91b3,	// (0x00084698) list_medium_line_t3_right_iconx2_g1

0x90c2,	// (0x000845a7) list_medium_line_t3_right_iconx2_g2

0x15ea,	// (0x0007cacf) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcb8,	// (0x0008b19d) list_medium_line_t3_right_iconx2_g

0x15f2,	// (0x0007cad7) list_medium_line_t3_right_iconx2_t1

0x1602,	// (0x0007cae7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcbf,	// (0x0008b1a4) list_medium_line_t3_right_iconx2_t

0x0c44,	// (0x0007c129) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0c44,	// (0x0007c129) list_medium_line_x3_t4_g4_g1

0x0c50,	// (0x0007c135) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0c50,	// (0x0007c135) list_medium_line_x3_t4_g4_g2

0x0cd8,	// (0x0007c1bd) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0cd8,	// (0x0007c1bd) list_medium_line_x3_t4_g4_g3

0x1610,	// (0x0007caf5) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1610,	// (0x0007caf5) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcc4,	// (0x0008b1a9) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcc4,	// (0x0008b1a9) list_medium_line_x3_t4_g4_g

0x161c,	// (0x0007cb01) list_medium_line_x3_t4_g4_t1_ParamLimits

0x161c,	// (0x0007cb01) list_medium_line_x3_t4_g4_t1

0x1633,	// (0x0007cb18) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1633,	// (0x0007cb18) list_medium_line_x3_t4_g4_t2

0x0e24,	// (0x0007c309) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0e24,	// (0x0007c309) list_medium_line_x3_t4_g4_t3

0x1648,	// (0x0007cb2d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1648,	// (0x0007cb2d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfccd,	// (0x0008b1b2) list_medium_line_x3_t4_g4_t_ParamLimits

0xfccd,	// (0x0008b1b2) list_medium_line_x3_t4_g4_t

0x1665,	// (0x0007cb4a) list_single_dyc_row_text_pane_t1_ParamLimits

0x1665,	// (0x0007cb4a) list_single_dyc_row_text_pane_t1

0x169c,	// (0x0007cb81) list_single_dyc_row_text_pane_t2_ParamLimits

0x169c,	// (0x0007cb81) list_single_dyc_row_text_pane_t2

0x1712,	// (0x0007cbf7) list_single_dyc_row_text_pane_t3_ParamLimits

0x1712,	// (0x0007cbf7) list_single_dyc_row_text_pane_t3

0x0005,

0xfcd6,	// (0x0008b1bb) list_single_dyc_row_text_pane_t_ParamLimits

0xfcd6,	// (0x0008b1bb) list_single_dyc_row_text_pane_t

0x17e3,	// (0x0007ccc8) list_single_dyc_row_pane_g1_ParamLimits

0x17e3,	// (0x0007ccc8) list_single_dyc_row_pane_g1

0x17ef,	// (0x0007ccd4) list_single_dyc_row_pane_g2_ParamLimits

0x17ef,	// (0x0007ccd4) list_single_dyc_row_pane_g2

0x17fb,	// (0x0007cce0) list_single_dyc_row_pane_g3_ParamLimits

0x17fb,	// (0x0007cce0) list_single_dyc_row_pane_g3

0x1807,	// (0x0007ccec) list_single_dyc_row_pane_g4_ParamLimits

0x1807,	// (0x0007ccec) list_single_dyc_row_pane_g4

0x0003,

0xfce3,	// (0x0008b1c8) list_single_dyc_row_pane_g_ParamLimits

0xfce3,	// (0x0008b1c8) list_single_dyc_row_pane_g

0x1813,	// (0x0007ccf8) list_single_dyc_row_text_pane_ParamLimits

0x1813,	// (0x0007ccf8) list_single_dyc_row_text_pane

0xa105,	// (0x000855ea) bg_sp_fs_scroll_pane

0xe7d8,	// (0x00089cbd) thumb_sp_fs_scroll_pane

0x10ba,	// (0x0007c59f) list_medium_line_g1_ParamLimits

0x10ba,	// (0x0007c59f) list_medium_line_g1

0x1832,	// (0x0007cd17) list_medium_line_t1_ParamLimits

0x1832,	// (0x0007cd17) list_medium_line_t1

0x0c44,	// (0x0007c129) list_medium_line_x2_g1_ParamLimits

0x0c44,	// (0x0007c129) list_medium_line_x2_g1

0x0c50,	// (0x0007c135) list_medium_line_x2_g2_ParamLimits

0x0c50,	// (0x0007c135) list_medium_line_x2_g2

0x0001,

0xfcec,	// (0x0008b1d1) list_medium_line_x2_g_ParamLimits

0xfcec,	// (0x0008b1d1) list_medium_line_x2_g

0x1847,	// (0x0007cd2c) list_medium_line_x2_t1_ParamLimits

0x1847,	// (0x0007cd2c) list_medium_line_x2_t1

0x0c44,	// (0x0007c129) list_medium_line_x3_g1_ParamLimits

0x0c44,	// (0x0007c129) list_medium_line_x3_g1

0x0c50,	// (0x0007c135) list_medium_line_x3_g2_ParamLimits

0x0c50,	// (0x0007c135) list_medium_line_x3_g2

0x0001,

0xfcec,	// (0x0008b1d1) list_medium_line_x3_g_ParamLimits

0xfcec,	// (0x0008b1d1) list_medium_line_x3_g

0x1847,	// (0x0007cd2c) list_medium_line_x3_t1_ParamLimits

0x1847,	// (0x0007cd2c) list_medium_line_x3_t1

0xe7e1,	// (0x00089cc6) thumb_sp_fs_scroll_pane_g1

0xe7ea,	// (0x00089ccf) thumb_sp_fs_scroll_pane_g2

0xe7f3,	// (0x00089cd8) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcf1,	// (0x0008b1d6) thumb_sp_fs_scroll_pane_g

0xe7e1,	// (0x00089cc6) bg_sp_fs_scroll_pane_g1

0xe7ea,	// (0x00089ccf) bg_sp_fs_scroll_pane_g2

0xe7f3,	// (0x00089cd8) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcf1,	// (0x0008b1d6) bg_sp_fs_scroll_pane_g

0x0c44,	// (0x0007c129) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0c44,	// (0x0007c129) list_medium_line_x2_t3_g4_g1

0x0ccc,	// (0x0007c1b1) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0ccc,	// (0x0007c1b1) list_medium_line_x2_t3_g4_g2

0x0c50,	// (0x0007c135) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0c50,	// (0x0007c135) list_medium_line_x2_t3_g4_g3

0x0c5c,	// (0x0007c141) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0c5c,	// (0x0007c141) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0008a78c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0008a78c) list_medium_line_x2_t3_g4_g

0x185d,	// (0x0007cd42) list_medium_line_x2_t3_g4_t1_ParamLimits

0x185d,	// (0x0007cd42) list_medium_line_x2_t3_g4_t1

0x1873,	// (0x0007cd58) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1873,	// (0x0007cd58) list_medium_line_x2_t3_g4_t2

0x0c8f,	// (0x0007c174) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0c8f,	// (0x0007c174) list_medium_line_x2_t3_g4_t3

0x0002,

0xfcf8,	// (0x0008b1dd) list_medium_line_x2_t3_g4_t_ParamLimits

0xfcf8,	// (0x0008b1dd) list_medium_line_x2_t3_g4_t

0x10ba,	// (0x0007c59f) list_medium_line_g2_g1_ParamLimits

0x10ba,	// (0x0007c59f) list_medium_line_g2_g1

0x7d3c,	// (0x00083221) list_medium_line_g2_g2_ParamLimits

0x7d3c,	// (0x00083221) list_medium_line_g2_g2

0x0001,

0xf9fc,	// (0x0008aee1) list_medium_line_g2_g_ParamLimits

0xf9fc,	// (0x0008aee1) list_medium_line_g2_g

0x188d,	// (0x0007cd72) list_medium_line_g2_t1_ParamLimits

0x188d,	// (0x0007cd72) list_medium_line_g2_t1

0x10ba,	// (0x0007c59f) list_medium_line_t3_g2_g1_ParamLimits

0x10ba,	// (0x0007c59f) list_medium_line_t3_g2_g1

0x7d3c,	// (0x00083221) list_medium_line_t3_g2_g2_ParamLimits

0x7d3c,	// (0x00083221) list_medium_line_t3_g2_g2

0x0001,

0xf9fc,	// (0x0008aee1) list_medium_line_t3_g2_g_ParamLimits

0xf9fc,	// (0x0008aee1) list_medium_line_t3_g2_g

0x18a2,	// (0x0007cd87) list_medium_line_t3_g2_t1_ParamLimits

0x18a2,	// (0x0007cd87) list_medium_line_t3_g2_t1

0x18bc,	// (0x0007cda1) list_medium_line_t3_g2_t2_ParamLimits

0x18bc,	// (0x0007cda1) list_medium_line_t3_g2_t2

0x18d2,	// (0x0007cdb7) list_medium_line_t3_g2_t3_ParamLimits

0x18d2,	// (0x0007cdb7) list_medium_line_t3_g2_t3

0x0002,

0xfcff,	// (0x0008b1e4) list_medium_line_t3_g2_t_ParamLimits

0xfcff,	// (0x0008b1e4) list_medium_line_t3_g2_t

0x90c2,	// (0x000845a7) list_medium_line_right_icon_g1

0x18e8,	// (0x0007cdcd) list_medium_line_right_icon_t1

0x10ba,	// (0x0007c59f) list_medium_line_t2_g1_ParamLimits

0x10ba,	// (0x0007c59f) list_medium_line_t2_g1

0x18f6,	// (0x0007cddb) list_medium_line_t2_t1_ParamLimits

0x18f6,	// (0x0007cddb) list_medium_line_t2_t1

0x1910,	// (0x0007cdf5) list_medium_line_t2_t2_ParamLimits

0x1910,	// (0x0007cdf5) list_medium_line_t2_t2

0x0001,

0xfd06,	// (0x0008b1eb) list_medium_line_t2_t_ParamLimits

0xfd06,	// (0x0008b1eb) list_medium_line_t2_t

0x10ba,	// (0x0007c59f) list_medium_line_t3_g1_ParamLimits

0x10ba,	// (0x0007c59f) list_medium_line_t3_g1

0x1925,	// (0x0007ce0a) list_medium_line_t3_t1_ParamLimits

0x1925,	// (0x0007ce0a) list_medium_line_t3_t1

0x193f,	// (0x0007ce24) list_medium_line_t3_t2_ParamLimits

0x193f,	// (0x0007ce24) list_medium_line_t3_t2

0x1955,	// (0x0007ce3a) list_medium_line_t3_t3_ParamLimits

0x1955,	// (0x0007ce3a) list_medium_line_t3_t3

0x0002,

0xfd0b,	// (0x0008b1f0) list_medium_line_t3_t_ParamLimits

0xfd0b,	// (0x0008b1f0) list_medium_line_t3_t

0x10ba,	// (0x0007c59f) list_medium_line_g3_g1_ParamLimits

0x10ba,	// (0x0007c59f) list_medium_line_g3_g1

0x91bb,	// (0x000846a0) list_medium_line_g3_g2_ParamLimits

0x91bb,	// (0x000846a0) list_medium_line_g3_g2

0x7d3c,	// (0x00083221) list_medium_line_g3_g3_ParamLimits

0x7d3c,	// (0x00083221) list_medium_line_g3_g3

0x0002,

0xfd12,	// (0x0008b1f7) list_medium_line_g3_g_ParamLimits

0xfd12,	// (0x0008b1f7) list_medium_line_g3_g

0x196a,	// (0x0007ce4f) list_medium_line_g3_t1_ParamLimits

0x196a,	// (0x0007ce4f) list_medium_line_g3_t1

0x10ba,	// (0x0007c59f) list_medium_line_t2_g3_g1_ParamLimits

0x10ba,	// (0x0007c59f) list_medium_line_t2_g3_g1

0x91bb,	// (0x000846a0) list_medium_line_t2_g3_g2_ParamLimits

0x91bb,	// (0x000846a0) list_medium_line_t2_g3_g2

0x7d3c,	// (0x00083221) list_medium_line_t2_g3_g3_ParamLimits

0x7d3c,	// (0x00083221) list_medium_line_t2_g3_g3

0x0002,

0xfd12,	// (0x0008b1f7) list_medium_line_t2_g3_g_ParamLimits

0xfd12,	// (0x0008b1f7) list_medium_line_t2_g3_g

0x197f,	// (0x0007ce64) list_medium_line_t2_g3_t1_ParamLimits

0x197f,	// (0x0007ce64) list_medium_line_t2_g3_t1

0x1999,	// (0x0007ce7e) list_medium_line_t2_g3_t2_ParamLimits

0x1999,	// (0x0007ce7e) list_medium_line_t2_g3_t2

0x0001,

0xfd19,	// (0x0008b1fe) list_medium_line_t2_g3_t_ParamLimits

0xfd19,	// (0x0008b1fe) list_medium_line_t2_g3_t

0x10ba,	// (0x0007c59f) list_medium_line_t3_g3_g1_ParamLimits

0x10ba,	// (0x0007c59f) list_medium_line_t3_g3_g1

0x91bb,	// (0x000846a0) list_medium_line_t3_g3_g2_ParamLimits

0x91bb,	// (0x000846a0) list_medium_line_t3_g3_g2

0x7d3c,	// (0x00083221) list_medium_line_t3_g3_g3_ParamLimits

0x7d3c,	// (0x00083221) list_medium_line_t3_g3_g3

0x0002,

0xfd12,	// (0x0008b1f7) list_medium_line_t3_g3_g_ParamLimits

0xfd12,	// (0x0008b1f7) list_medium_line_t3_g3_g

0x19af,	// (0x0007ce94) list_medium_line_t3_g3_t1_ParamLimits

0x19af,	// (0x0007ce94) list_medium_line_t3_g3_t1

0x19c8,	// (0x0007cead) list_medium_line_t3_g3_t2_ParamLimits

0x19c8,	// (0x0007cead) list_medium_line_t3_g3_t2

0x19de,	// (0x0007cec3) list_medium_line_t3_g3_t3_ParamLimits

0x19de,	// (0x0007cec3) list_medium_line_t3_g3_t3

0x0002,

0xfd1e,	// (0x0008b203) list_medium_line_t3_g3_t_ParamLimits

0xfd1e,	// (0x0008b203) list_medium_line_t3_g3_t

0x91b3,	// (0x00084698) list_medium_line_right_iconx2_g1

0x90c2,	// (0x000845a7) list_medium_line_right_iconx2_g2

0x0001,

0xfd25,	// (0x0008b20a) list_medium_line_right_iconx2_g

0x91c7,	// (0x000846ac) list_medium_line_right_iconx2_t1

0x91b3,	// (0x00084698) list_medium_line_t2_right_iconx2_g1

0x90c2,	// (0x000845a7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd25,	// (0x0008b20a) list_medium_line_t2_right_iconx2_g

0x19f4,	// (0x0007ced9) list_medium_line_t2_right_iconx2_t1

0x1a04,	// (0x0007cee9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd2a,	// (0x0008b20f) list_medium_line_t2_right_iconx2_t

0x1a12,	// (0x0007cef7) list_medium_line_x4_t4_t1

0x1a20,	// (0x0007cf05) list_medium_line_x4_t4_t2

0x1a30,	// (0x0007cf15) list_medium_line_x4_t4_t3

0x1a40,	// (0x0007cf25) list_medium_line_x4_t4_t4

0x0003,

0xfd2f,	// (0x0008b214) list_medium_line_x4_t4_t

0x91ff,	// (0x000846e4) tport_appsw_pane_ParamLimits

0x91ff,	// (0x000846e4) tport_appsw_pane

0x920d,	// (0x000846f2) tport_contact_pane_ParamLimits

0x920d,	// (0x000846f2) tport_contact_pane

0x921d,	// (0x00084702) tport_listscroll_pane_ParamLimits

0x921d,	// (0x00084702) tport_listscroll_pane

0x922d,	// (0x00084712) cell_tport_appsw_pane_ParamLimits

0x922d,	// (0x00084712) cell_tport_appsw_pane

0xcfc6,	// (0x000884ab) tport_appsw_pane_g1_ParamLimits

0xcfc6,	// (0x000884ab) tport_appsw_pane_g1

0xe7fc,	// (0x00089ce1) tport_contact_pane_g1

0xe805,	// (0x00089cea) tport_contact_pane_t1

0xe813,	// (0x00089cf8) tport_contact_pane_t2

0x0001,

0xfd38,	// (0x0008b21d) tport_contact_pane_t

0xe821,	// (0x00089d06) list_tport_pane

0xe82a,	// (0x00089d0f) scroll_pane_cp_030

0x9260,	// (0x00084745) cell_tport_appsw_pane_g1

0x9270,	// (0x00084755) cell_tport_appsw_pane_t1

0x927e,	// (0x00084763) grid_highlight_pane_cp019

0x9286,	// (0x0008476b) list_tport_double_graphic_pane_ParamLimits

0x9286,	// (0x0008476b) list_tport_double_graphic_pane

0xaae2,	// (0x00085fc7) list_highlight_pane_cp023_ParamLimits

0xaae2,	// (0x00085fc7) list_highlight_pane_cp023

0x9297,	// (0x0008477c) list_tport_double_graphic_pane_g1_ParamLimits

0x9297,	// (0x0008477c) list_tport_double_graphic_pane_g1

0x92a4,	// (0x00084789) list_tport_double_graphic_pane_t1_ParamLimits

0x92a4,	// (0x00084789) list_tport_double_graphic_pane_t1

0x92b9,	// (0x0008479e) list_tport_double_graphic_pane_t2_ParamLimits

0x92b9,	// (0x0008479e) list_tport_double_graphic_pane_t2

0x0001,

0xfd44,	// (0x0008b229) list_tport_double_graphic_pane_t_ParamLimits

0xfd44,	// (0x0008b229) list_tport_double_graphic_pane_t

0xa105,	// (0x000855ea) main_cale_note_pane

0x754e,	// (0x00082a33) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x754e,	// (0x00082a33) cell_vitu2_function_top_wide_pane_cp01

0x8d0e,	// (0x000841f3) wait_bar_pane_cp05_ParamLimits

0xaae2,	// (0x00085fc7) listscroll_cmail_pane

0xe833,	// (0x00089d18) list_cmail_pane

0x92cb,	// (0x000847b0) list_cmail_body_pane

0x92f3,	// (0x000847d8) list_single_cmail_header_caption_pane

0x931f,	// (0x00084804) list_single_cmail_header_detail_pane_ParamLimits

0x931f,	// (0x00084804) list_single_cmail_header_detail_pane

0xe843,	// (0x00089d28) list_single_cmail_header_caption_pane_t1

0x1a50,	// (0x0007cf35) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1a50,	// (0x0007cf35) list_single_cmail_header_detail_pane_g1

0x9358,	// (0x0008483d) list_single_cmail_header_detail_pane_g2_ParamLimits

0x9358,	// (0x0008483d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd49,	// (0x0008b22e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd49,	// (0x0008b22e) list_single_cmail_header_detail_pane_g

0x1a66,	// (0x0007cf4b) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1a66,	// (0x0007cf4b) list_single_cmail_header_detail_pane_t1

0x1ac6,	// (0x0007cfab) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1ac6,	// (0x0007cfab) list_single_cmail_header_editor_pane_bg

0xe2ef,	// (0x000897d4) list_cmail_body_pane_g1

0xe867,	// (0x00089d4c) list_cmail_body_pane_t1

0xd6cf,	// (0x00088bb4) list_single_cmail_header_editor_pane_bg_g1

0xace7,	// (0x000861cc) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6df,	// (0x00088bc4) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6d7,	// (0x00088bbc) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd915,	// (0x00088dfa) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6ff,	// (0x00088be4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6ef,	// (0x00088bd4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6f7,	// (0x00088bdc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacc7,	// (0x000861ac) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9364,	// (0x00084849) calenote_gesture_pane_ParamLimits

0x9364,	// (0x00084849) calenote_gesture_pane

0x937e,	// (0x00084863) calenote_window_pane_ParamLimits

0x937e,	// (0x00084863) calenote_window_pane

0xe875,	// (0x00089d5a) popup_note_window_cp01

0x9396,	// (0x0008487b) calenote_swipe_1_pane_ParamLimits

0x9396,	// (0x0008487b) calenote_swipe_1_pane

0x9064,	// (0x00084549) calenote_swipe_2_pane_ParamLimits

0x9064,	// (0x00084549) calenote_swipe_2_pane

0xe641,	// (0x00089b26) calenote_swipe_1_pane_g1_ParamLimits

0xe641,	// (0x00089b26) calenote_swipe_1_pane_g1

0xe64e,	// (0x00089b33) calenote_swipe_1_pane_g2_ParamLimits

0xe64e,	// (0x00089b33) calenote_swipe_1_pane_g2

0x0001,

0xfc69,	// (0x0008b14e) calenote_swipe_1_pane_g_ParamLimits

0xfc69,	// (0x0008b14e) calenote_swipe_1_pane_g

0xe887,	// (0x00089d6c) calenote_swipe_1_pane_t1_ParamLimits

0xe887,	// (0x00089d6c) calenote_swipe_1_pane_t1

0xe641,	// (0x00089b26) calenote_swipe_2_pane_g1_ParamLimits

0xe641,	// (0x00089b26) calenote_swipe_2_pane_g1

0xe8a6,	// (0x00089d8b) calenote_swipe_2_pane_g2_ParamLimits

0xe8a6,	// (0x00089d8b) calenote_swipe_2_pane_g2

0x0001,

0xfd55,	// (0x0008b23a) calenote_swipe_2_pane_g_ParamLimits

0xfd55,	// (0x0008b23a) calenote_swipe_2_pane_g

0xe8b2,	// (0x00089d97) calenote_swipe_2_pane_t1_ParamLimits

0xe8b2,	// (0x00089d97) calenote_swipe_2_pane_t1

0xa105,	// (0x000855ea) main_mup_navstr_pane

0x61ac,	// (0x00081691) main_mup3_pane_t7_ParamLimits

0x61ac,	// (0x00081691) main_mup3_pane_t7

0x6bf3,	// (0x000820d8) main_mp4_pane_g6_ParamLimits

0x6bf3,	// (0x000820d8) main_mp4_pane_g6

0x6f83,	// (0x00082468) main_image3_pane_t4_ParamLimits

0x6f83,	// (0x00082468) main_image3_pane_t4

0x93a9,	// (0x0008488e) popup_navstr_preview_pane_ParamLimits

0x93a9,	// (0x0008488e) popup_navstr_preview_pane

0x93b5,	// (0x0008489a) scroll_navstr_pane_ParamLimits

0x93b5,	// (0x0008489a) scroll_navstr_pane

0xa105,	// (0x000855ea) bg_popup_preview_window_pane_cp04

0xe8d9,	// (0x00089dbe) popup_navstr_preview_pane_t1

0x93c1,	// (0x000848a6) scroll_navstr_pane_g1_ParamLimits

0x93c1,	// (0x000848a6) scroll_navstr_pane_g1

0x93ce,	// (0x000848b3) scroll_navstr_pane_t1_ParamLimits

0x93ce,	// (0x000848b3) scroll_navstr_pane_t1

0xe87e,	// (0x00089d63) bg_button_pane_cp014

0xe87e,	// (0x00089d63) bg_button_pane_cp030

0x1452,	// (0x0007c937) list_double_fisheye_pane_g4_ParamLimits

0x1452,	// (0x0007c937) list_double_fisheye_pane_g4

0x8fc0,	// (0x000844a5) list_double_fisheye_pane_g5_ParamLimits

0x8fc0,	// (0x000844a5) list_double_fisheye_pane_g5

0xd5dd,	// (0x00088ac2) sp_fs_scroll_pane_cp03

0xe78a,	// (0x00089c6f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe796,	// (0x00089c7b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc86,	// (0x0008b16b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9151,	// (0x00084636) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe83b,	// (0x00089d20) sp_fs_scroll_pane_cp02

0xa960,	// (0x00085e45) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa960,	// (0x00085e45) popup_sp_fs_calendar_preview_list_single_pane

0xa105,	// (0x000855ea) main_cam6_pano_pane

0xaae2,	// (0x00085fc7) main_mup3_pane_ParamLimits

0xa105,	// (0x000855ea) main_phacti_pane

0x8be3,	// (0x000840c8) bg_button_pane_cp11

0x8bfb,	// (0x000840e0) main_mobtv_info_pane_g2_ParamLimits

0x8bfb,	// (0x000840e0) main_mobtv_info_pane_g2

0x0001,

0xfc1b,	// (0x0008b100) main_mobtv_info_pane_g_ParamLimits

0xfc1b,	// (0x0008b100) main_mobtv_info_pane_g

0x8dad,	// (0x00084292) sc_clock_pane_t5_ParamLimits

0x8dad,	// (0x00084292) sc_clock_pane_t5

0x8e4e,	// (0x00084333) main_radioblah_pane_g1_ParamLimits

0xe58d,	// (0x00089a72) main_radioblah_pane_t3_ParamLimits

0xe58d,	// (0x00089a72) main_radioblah_pane_t3

0xe5a5,	// (0x00089a8a) main_radioblah_pane_t4_ParamLimits

0xe5a5,	// (0x00089a8a) main_radioblah_pane_t4

0x8e6c,	// (0x00084351) main_radioblah_text_pane_ParamLimits

0x8e6c,	// (0x00084351) main_radioblah_text_pane

0x8e79,	// (0x0008435e) main_radioblah_info_pane_g1_ParamLimits

0x8f0e,	// (0x000843f3) main_radioblah_info_pane_t4_ParamLimits

0x8f0e,	// (0x000843f3) main_radioblah_info_pane_t4

0xaae2,	// (0x00085fc7) main_sp_fs_calendar_pane

0x93e0,	// (0x000848c5) main_phacti_pane_g1

0x93e8,	// (0x000848cd) phacti_note_pane_ParamLimits

0x93e8,	// (0x000848cd) phacti_note_pane

0xe8f0,	// (0x00089dd5) phacti_term_pane_ParamLimits

0xe8f0,	// (0x00089dd5) phacti_term_pane

0xe905,	// (0x00089dea) phacti_note_pane_t1_ParamLimits

0xe905,	// (0x00089dea) phacti_note_pane_t1

0x1add,	// (0x0007cfc2) phacti_term_pane_g1

0x1ae5,	// (0x0007cfca) phacti_term_pane_t1_ParamLimits

0x1ae5,	// (0x0007cfca) phacti_term_pane_t1

0xe91c,	// (0x00089e01) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe924,	// (0x00089e09) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd5f,	// (0x0008b244) popup_sp_fs_calendar_preview_list_single_pane_g

0xe92c,	// (0x00089e11) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe92c,	// (0x00089e11) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe942,	// (0x00089e27) aid_popup_sp_fs_bg_corner_pane

0xcd1c,	// (0x00088201) popup_sp_fs_calendar_preview_bg_pane_g1

0xa105,	// (0x000855ea) popup_sp_fs_calendar_preview_bg_pane

0x93fe,	// (0x000848e3) popup_sp_fs_calendar_preview_list_pane

0xc914,	// (0x00087df9) bg_main_sp_fs_cale_pane_ParamLimits

0xc914,	// (0x00087df9) bg_main_sp_fs_cale_pane

0x1b18,	// (0x0007cffd) listscroll_cale_mrui_pane_ParamLimits

0x1b18,	// (0x0007cffd) listscroll_cale_mrui_pane

0x1b2d,	// (0x0007d012) listscroll_sp_fs_schedule_track_pane

0x1b36,	// (0x0007d01b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1b36,	// (0x0007d01b) main_sp_fs_ctrlbar_pane_cp01

0xe94a,	// (0x00089e2f) main_sp_fs_ribbon_pane

0x1b49,	// (0x0007d02e) popup_sp_fs_cale_preview_window

0x9453,	// (0x00084938) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9453,	// (0x00084938) list_single_sp_fs_schedule_track_pane

0xe72a,	// (0x00089c0f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe72a,	// (0x00089c0f) bg_sp_fs_highlight_list_pane_cp03

0x9476,	// (0x0008495b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9476,	// (0x0008495b) list_single_sp_fs_schedule_track_pane_g1

0x9482,	// (0x00084967) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9482,	// (0x00084967) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd64,	// (0x0008b249) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd64,	// (0x0008b249) list_single_sp_fs_schedule_track_pane_g

0x948e,	// (0x00084973) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x948e,	// (0x00084973) list_single_sp_fs_schedule_track_pane_t1

0x94a6,	// (0x0008498b) sp_fs_schedule_track_pane_ParamLimits

0x94a6,	// (0x0008498b) sp_fs_schedule_track_pane

0xe952,	// (0x00089e37) sp_fs_schedule_track_pane_g1

0xe95a,	// (0x00089e3f) sp_fs_schedule_track_pane_g2

0xe962,	// (0x00089e47) sp_fs_schedule_track_pane_g3

0xe96a,	// (0x00089e4f) sp_fs_schedule_track_pane_g4

0xe972,	// (0x00089e57) sp_fs_schedule_track_pane_g5

0x0004,

0xfd69,	// (0x0008b24e) sp_fs_schedule_track_pane_g

0xd6cf,	// (0x00088bb4) bg_sp_fs_schedule_viewer_highlight_g1

0xace7,	// (0x000861cc) bg_sp_fs_schedule_viewer_highlight_g2

0xd6d7,	// (0x00088bbc) bg_sp_fs_schedule_viewer_highlight_g3

0xd6df,	// (0x00088bc4) bg_sp_fs_schedule_viewer_highlight_g4

0xd915,	// (0x00088dfa) bg_sp_fs_schedule_viewer_highlight_g5

0xd6ef,	// (0x00088bd4) bg_sp_fs_schedule_viewer_highlight_g6

0xd6f7,	// (0x00088bdc) bg_sp_fs_schedule_viewer_highlight_g7

0xd6ff,	// (0x00088be4) bg_sp_fs_schedule_viewer_highlight_g8

0xacc7,	// (0x000861ac) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd74,	// (0x0008b259) bg_sp_fs_schedule_viewer_highlight_g

0xa105,	// (0x000855ea) bg_main_sp_fs_ribbon_pane

0x94b6,	// (0x0008499b) main_sp_fs_ribbon_pane_g1

0xe97a,	// (0x00089e5f) main_sp_fs_ribbon_pane_t1

0x94bf,	// (0x000849a4) main_sp_fs_ribbon_pane_t2

0xe989,	// (0x00089e6e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd87,	// (0x0008b26c) main_sp_fs_ribbon_pane_t

0xe998,	// (0x00089e7d) main_sp_fs_ribbon_scheduler_pane

0xe9a0,	// (0x00089e85) bg_main_sp_fs_ribbon_pane_g1

0xe9a9,	// (0x00089e8e) bg_main_sp_fs_ribbon_pane_g2

0xe9b2,	// (0x00089e97) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0ad5,	// (0x0007bfba) bg_main_sp_fs_ribbon_pane_g

0xe9ba,	// (0x00089e9f) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c3,	// (0x00089ea8) main_sp_fs_ribbon_scheduler_pane_g2

0xe9cc,	// (0x00089eb1) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0adc,	// (0x0007bfc1) main_sp_fs_ribbon_scheduler_pane_g

0xe9d5,	// (0x00089eba) list_cale_mrui_pane

0x94ce,	// (0x000849b3) sp_fs_scroll_pane_cp07_ParamLimits

0x94ce,	// (0x000849b3) sp_fs_scroll_pane_cp07

0x94ea,	// (0x000849cf) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x94ea,	// (0x000849cf) bg_sp_fs_schedule_viewer_highlight

0xe9e2,	// (0x00089ec7) list_single_sp_fs_schedule_track_pane_cp01

0xe9ea,	// (0x00089ecf) list_sp_fs_schedule_track_pane

0xe9f2,	// (0x00089ed7) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f2,	// (0x00089ed7) sp_fs_scroll_pane_cp06

0xcd1c,	// (0x00088201) bgmain_sp_fs_calendar_pane_g1

0x1b5b,	// (0x0007d040) list_single_cale_mrui_pane_ParamLimits

0x1b5b,	// (0x0007d040) list_single_cale_mrui_pane

0x1b89,	// (0x0007d06e) list_single_cale_mrui_row_pane_ParamLimits

0x1b89,	// (0x0007d06e) list_single_cale_mrui_row_pane

0x1b96,	// (0x0007d07b) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1b96,	// (0x0007d07b) list_single_cale_mrui_row_pane_g1

0x1bce,	// (0x0007d0b3) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1bce,	// (0x0007d0b3) list_single_cale_mrui_row_pane_t1

0x1be0,	// (0x0007d0c5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1be0,	// (0x0007d0c5) list_single_cale_mrui_row_pane_t2

0x1c46,	// (0x0007d12b) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1c46,	// (0x0007d12b) list_single_cale_mrui_row_pane_t3

0x1c75,	// (0x0007d15a) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1c75,	// (0x0007d15a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd95,	// (0x0008b27a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd95,	// (0x0008b27a) list_single_cale_mrui_row_pane_t

0x1ca4,	// (0x0007d189) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1ca4,	// (0x0007d189) list_single_cmail_header_editor_pane_bg_cp01

0x1cc4,	// (0x0007d1a9) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1cc4,	// (0x0007d1a9) list_single_cmail_header_editor_pane_bg_cp02

0x94f7,	// (0x000849dc) main_radioblah_text_pane_t1_ParamLimits

0x94f7,	// (0x000849dc) main_radioblah_text_pane_t1

0xea11,	// (0x00089ef6) cam6_indi_pane_cp01

0xea19,	// (0x00089efe) cam6_mode_pane_cp01

0xea21,	// (0x00089f06) cam6_pano_pane

0xea2a,	// (0x00089f0f) cam6_zoom_pane_cp01

0xea32,	// (0x00089f17) cam6_pano_image_pane

0xea3d,	// (0x00089f22) cam6_pano_pane_g1

0xe2ef,	// (0x000897d4) cam6_pano_pane_g2

0xea46,	// (0x00089f2b) cam6_pano_pane_g3

0xea4f,	// (0x00089f34) cam6_pano_pane_g4

0xd2be,	// (0x000887a3) cam6_pano_pane_g5

0xea58,	// (0x00089f3d) cam6_pano_pane_g6

0xea62,	// (0x00089f47) cam6_pano_pane_g7

0xea6a,	// (0x00089f4f) cam6_pano_pane_g8

0xea73,	// (0x00089f58) cam6_pano_pane_g9

0x0008,

0xfd9e,	// (0x0008b283) cam6_pano_pane_g

0xa105,	// (0x000855ea) main_browser_tag_pane

0xe8d1,	// (0x00089db6) grid_navstr_albumart_pane

0xea7e,	// (0x00089f63) cell_navstr_albumart_pane_ParamLimits

0xea7e,	// (0x00089f63) cell_navstr_albumart_pane

0xea9e,	// (0x00089f83) cell_navstr_albumart_pane_g1

0xc6e5,	// (0x00087bca) cell_navstr_albumart_pane_g2

0xc6f5,	// (0x00087bda) cell_navstr_albumart_pane_g3

0xc6ed,	// (0x00087bd2) cell_navstr_albumart_pane_g4

0x0003,

0xfdb1,	// (0x0008b296) cell_navstr_albumart_pane_g

0x9512,	// (0x000849f7) bt_list_pane_ParamLimits

0x9512,	// (0x000849f7) bt_list_pane

0x9533,	// (0x00084a18) bt_list_pane_t1

0x9542,	// (0x00084a27) bt_list_pane_t2

0x0001,

0xfdba,	// (0x0008b29f) bt_list_pane_t

0xa105,	// (0x000855ea) main_cale_prevew_pane

0x9551,	// (0x00084a36) popup_cale_preview_window_ParamLimits

0x9551,	// (0x00084a36) popup_cale_preview_window

0xaae2,	// (0x00085fc7) bg_popup_preview_window_pane_cp05_ParamLimits

0xaae2,	// (0x00085fc7) bg_popup_preview_window_pane_cp05

0xeaa6,	// (0x00089f8b) list_cale_preview_pane_ParamLimits

0xeaa6,	// (0x00089f8b) list_cale_preview_pane

0x956a,	// (0x00084a4f) list_double_cale_preview_pane_ParamLimits

0x956a,	// (0x00084a4f) list_double_cale_preview_pane

0x957c,	// (0x00084a61) list_single_cale_preview_pane_ParamLimits

0x957c,	// (0x00084a61) list_single_cale_preview_pane

0x9590,	// (0x00084a75) list_single_cale_preview_pane_g1

0x9598,	// (0x00084a7d) list_single_cale_preview_pane_t1_ParamLimits

0x9598,	// (0x00084a7d) list_single_cale_preview_pane_t1

0x95ad,	// (0x00084a92) list_double_cale_preview_pane_g1

0x95b5,	// (0x00084a9a) list_double_cale_preview_pane_t1_ParamLimits

0x95b5,	// (0x00084a9a) list_double_cale_preview_pane_t1

0x95ca,	// (0x00084aaf) list_double_cale_preview_pane_t2_ParamLimits

0x95ca,	// (0x00084aaf) list_double_cale_preview_pane_t2

0x0001,

0xfdbf,	// (0x0008b2a4) list_double_cale_preview_pane_t_ParamLimits

0xfdbf,	// (0x0008b2a4) list_double_cale_preview_pane_t

0xa105,	// (0x000855ea) main_ezdial_pane

0xaae2,	// (0x00085fc7) main_sp_fs_email_pane_ParamLimits

0x90ca,	// (0x000845af) cmail_ddmenu_btn01_pane_ParamLimits

0x90ca,	// (0x000845af) cmail_ddmenu_btn01_pane

0x90df,	// (0x000845c4) cmail_ddmenu_btn02_pane_ParamLimits

0x90df,	// (0x000845c4) cmail_ddmenu_btn02_pane

0x90f7,	// (0x000845dc) cmail_ddmenu_btn03_pane_ParamLimits

0x90f7,	// (0x000845dc) cmail_ddmenu_btn03_pane

0x918c,	// (0x00084671) main_sp_fs_ctrlbar_pane_ParamLimits

0x91a2,	// (0x00084687) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x92cb,	// (0x000847b0) list_cmail_body_pane_ParamLimits

0xe851,	// (0x00089d36) bg_button_pane_cp12

0xe85a,	// (0x00089d3f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe85a,	// (0x00089d3f) list_single_cmail_header_detail_pane_g3

0x1aa2,	// (0x0007cf87) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1aa2,	// (0x0007cf87) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd50,	// (0x0008b235) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd50,	// (0x0008b235) list_single_cmail_header_detail_pane_t

0x1afa,	// (0x0007cfdf) phacti_term_pane_t2_ParamLimits

0x1afa,	// (0x0007cfdf) phacti_term_pane_t2

0x0001,

0xfd5a,	// (0x0008b23f) phacti_term_pane_t_ParamLimits

0xfd5a,	// (0x0008b23f) phacti_term_pane_t

0xeab2,	// (0x00089f97) aid_size_list_single_double

0x95e2,	// (0x00084ac7) popup_ezdial_listscroll_window

0x9606,	// (0x00084aeb) popup_number_entry_window_cp01

0xaa21,	// (0x00085f06) bg_popup_call_pane_cp09

0xeabe,	// (0x00089fa3) ezdial_list_pane

0xeac6,	// (0x00089fab) scroll_pane_cp23

0xcb01,	// (0x00087fe6) bg_button_pane_cp028_ParamLimits

0xcb01,	// (0x00087fe6) bg_button_pane_cp028

0x9614,	// (0x00084af9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9614,	// (0x00084af9) cmail_ddmenu_btn01_pane_g1

0x9624,	// (0x00084b09) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9624,	// (0x00084b09) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdc4,	// (0x0008b2a9) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdc4,	// (0x0008b2a9) cmail_ddmenu_btn01_pane_g

0xeace,	// (0x00089fb3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeace,	// (0x00089fb3) cmail_ddmenu_btn01_pane_t1

0xc914,	// (0x00087df9) bg_button_pane_cp029_ParamLimits

0xc914,	// (0x00087df9) bg_button_pane_cp029

0x9624,	// (0x00084b09) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9624,	// (0x00084b09) cmail_ddmenu_btn02_pane_g1

0x963c,	// (0x00084b21) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x963c,	// (0x00084b21) cmail_ddmenu_btn02_pane_t1

0xe72a,	// (0x00089c0f) bg_button_pane_cp031_ParamLimits

0xe72a,	// (0x00089c0f) bg_button_pane_cp031

0x9624,	// (0x00084b09) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9624,	// (0x00084b09) cmail_ddmenu_btn03_pane_g1

0x963c,	// (0x00084b21) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x963c,	// (0x00084b21) cmail_ddmenu_btn03_pane_t1

0x6e2e,	// (0x00082313) cell_dialer2_keypad_pane_t1_ParamLimits

0x6e48,	// (0x0008232d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6e48,	// (0x0008232d) cell_dialer2_keypad_pane_t1_copy1

0x8a24,	// (0x00083f09) ncimui_group_button_pane

0xaae2,	// (0x00085fc7) main_sp_fs_calendar_pane_ParamLimits

0x92f3,	// (0x000847d8) list_single_cmail_header_caption_pane_ParamLimits

0x1b0f,	// (0x0007cff4) aid_recal_txt_sm_pane

0xa105,	// (0x000855ea) mian_recal_day_pane

0x1b49,	// (0x0007d02e) popup_sp_fs_cale_preview_window_ParamLimits

0xeae3,	// (0x00089fc8) list_recal_day_pane

0x1cfb,	// (0x0007d1e0) list_single_recal_day_pane_ParamLimits

0x1cfb,	// (0x0007d1e0) list_single_recal_day_pane

0xeb0a,	// (0x00089fef) list_single_recal_day_pane_g1_ParamLimits

0xeb0a,	// (0x00089fef) list_single_recal_day_pane_g1

0x1d0d,	// (0x0007d1f2) list_single_recal_day_pane_g2_ParamLimits

0x1d0d,	// (0x0007d1f2) list_single_recal_day_pane_g2

0x1d19,	// (0x0007d1fe) list_single_recal_day_pane_g3_ParamLimits

0x1d19,	// (0x0007d1fe) list_single_recal_day_pane_g3

0x1d25,	// (0x0007d20a) list_single_recal_day_pane_g4_ParamLimits

0x1d25,	// (0x0007d20a) list_single_recal_day_pane_g4

0x1d33,	// (0x0007d218) list_single_recal_day_pane_g5_ParamLimits

0x1d33,	// (0x0007d218) list_single_recal_day_pane_g5

0x1d49,	// (0x0007d22e) list_single_recal_day_pane_g6_ParamLimits

0x1d49,	// (0x0007d22e) list_single_recal_day_pane_g6

0x0004,

0xfdd3,	// (0x0008b2b8) list_single_recal_day_pane_g_ParamLimits

0xfdd3,	// (0x0008b2b8) list_single_recal_day_pane_g

0x1d5d,	// (0x0007d242) list_single_recal_day_pane_t1

0x1d6f,	// (0x0007d254) list_single_recal_day_pane_t2

0x0001,

0xfdde,	// (0x0008b2c3) list_single_recal_day_pane_t

0x9660,	// (0x00084b45) ncimui_query_button_pane_ParamLimits

0x9660,	// (0x00084b45) ncimui_query_button_pane

0x9670,	// (0x00084b55) ncimui_query_button_pane_t1_ParamLimits

0x9670,	// (0x00084b55) ncimui_query_button_pane_t1

0xeb16,	// (0x00089ffb) ncimui_query_button_pane_t2_ParamLimits

0xeb16,	// (0x00089ffb) ncimui_query_button_pane_t2

0x0001,

0xfde3,	// (0x0008b2c8) ncimui_query_button_pane_t_ParamLimits

0xfde3,	// (0x0008b2c8) ncimui_query_button_pane_t

0x9683,	// (0x00084b68) query_button_pane_ParamLimits

0x9683,	// (0x00084b68) query_button_pane

0xa105,	// (0x000855ea) bg_button_pane_cp0028

0xeb29,	// (0x0008a00e) query_button_pane_t1

0x5168,	// (0x0008064d) main_tport_pane_ParamLimits

0x91d5,	// (0x000846ba) bg_popup_window_pane_cp01_ParamLimits

0x91d5,	// (0x000846ba) bg_popup_window_pane_cp01

0x91e3,	// (0x000846c8) heading_pane_cp08_ParamLimits

0x91e3,	// (0x000846c8) heading_pane_cp08

0x91f1,	// (0x000846d6) heading_pane_cp07_ParamLimits

0x91f1,	// (0x000846d6) heading_pane_cp07

0x9260,	// (0x00084745) cell_tport_appsw_pane_g2

0x0002,

0xfd3d,	// (0x0008b222) cell_tport_appsw_pane_g

0x0e6a,	// (0x0007c34f) input_candi_list_open_g1

0xaeaa,	// (0x0008638f) list_cale_time_pane_g6_ParamLimits

0xaeaa,	// (0x0008638f) list_cale_time_pane_g6

0x5bef,	// (0x000810d4) aid_size_touch_calib_1_ParamLimits

0x5bef,	// (0x000810d4) aid_size_touch_calib_1

0x5bfb,	// (0x000810e0) aid_size_touch_calib_2_ParamLimits

0x5bfb,	// (0x000810e0) aid_size_touch_calib_2

0x5c09,	// (0x000810ee) aid_size_touch_calib_3_ParamLimits

0x5c09,	// (0x000810ee) aid_size_touch_calib_3

0x5c19,	// (0x000810fe) aid_size_touch_calib_4_ParamLimits

0x5c19,	// (0x000810fe) aid_size_touch_calib_4

0x5c27,	// (0x0008110c) main_touch_calib_button_group_pane_ParamLimits

0x5c27,	// (0x0008110c) main_touch_calib_button_group_pane

0x5c35,	// (0x0008111a) main_touch_calib_pane_g1_ParamLimits

0x5c41,	// (0x00081126) main_touch_calib_pane_g2_ParamLimits

0x5c4d,	// (0x00081132) main_touch_calib_pane_g3_ParamLimits

0x5c59,	// (0x0008113e) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x0008ac2e) main_touch_calib_pane_g_ParamLimits

0x5c65,	// (0x0008114a) main_touch_calib_pane_t1_ParamLimits

0x5c7e,	// (0x00081163) main_touch_calib_pane_t2_ParamLimits

0x5c97,	// (0x0008117c) main_touch_calib_pane_t3_ParamLimits

0x5cad,	// (0x00081192) main_touch_calib_pane_t4_ParamLimits

0x5cc3,	// (0x000811a8) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x0008ac37) main_touch_calib_pane_t_ParamLimits

0xd061,	// (0x00088546) list_single_fp_cale_pane_g3_ParamLimits

0xd061,	// (0x00088546) list_single_fp_cale_pane_g3

0xaae2,	// (0x00085fc7) bg_button_pane_cp012_ParamLimits

0xaae2,	// (0x00085fc7) bg_vkb2_func_pane_cp03_ParamLimits

0x7cbc,	// (0x000831a1) cell_vitu2_function_top_pane_g1_ParamLimits

0xaae2,	// (0x00085fc7) bg_vkb2_func_pane_cp04_ParamLimits

0x89ac,	// (0x00083e91) main_ncimui_button_group_pane_ParamLimits

0x89ac,	// (0x00083e91) main_ncimui_button_group_pane

0x8a12,	// (0x00083ef7) main_ncimui_pane_t3_ParamLimits

0x8a12,	// (0x00083ef7) main_ncimui_pane_t3

0xe8e7,	// (0x00089dcc) phacti_button_group_pane

0xeab2,	// (0x00089f97) aid_size_list_single_double_ParamLimits

0x95e2,	// (0x00084ac7) popup_ezdial_listscroll_window_ParamLimits

0x9606,	// (0x00084aeb) popup_number_entry_window_cp01_ParamLimits

0x9690,	// (0x00084b75) phacti_button_pane_ParamLimits

0x9690,	// (0x00084b75) phacti_button_pane

0xa105,	// (0x000855ea) bg_button_pane_cp14

0xeb37,	// (0x0008a01c) phacti_button_pane_t1

0x96a1,	// (0x00084b86) main_touch_calib_button_pane_ParamLimits

0x96a1,	// (0x00084b86) main_touch_calib_button_pane

0xa84e,	// (0x00085d33) bg_button_pane_cp18_ParamLimits

0xa84e,	// (0x00085d33) bg_button_pane_cp18

0xeb45,	// (0x0008a02a) main_touch_calib_button_pane_t1_ParamLimits

0xeb45,	// (0x0008a02a) main_touch_calib_button_pane_t1

0xeb5b,	// (0x0008a040) main_touch_calib_button_pane_t2_ParamLimits

0xeb5b,	// (0x0008a040) main_touch_calib_button_pane_t2

0x0001,

0x0b3d,	// (0x0007c022) main_touch_calib_button_pane_t_ParamLimits

0x0b3d,	// (0x0007c022) main_touch_calib_button_pane_t

0xa105,	// (0x000855ea) cell_ncimui_button_pane

0xa105,	// (0x000855ea) bg_button_pane_cp032

0xeb79,	// (0x0008a05e) cell_ncimui_button_pane_t1

0x6ea4,	// (0x00082389) image3_infobar_pane_ParamLimits

0x6ea4,	// (0x00082389) image3_infobar_pane

0x8dcf,	// (0x000842b4) fs_bigclock_status_pane_ParamLimits

0x8dcf,	// (0x000842b4) fs_bigclock_status_pane

0x8ddc,	// (0x000842c1) main_fs_bigclock_clock_pane_ParamLimits

0x8ddc,	// (0x000842c1) main_fs_bigclock_clock_pane

0x8df0,	// (0x000842d5) main_fs_bigclock_indi_pane_ParamLimits

0x8df0,	// (0x000842d5) main_fs_bigclock_indi_pane

0x8e18,	// (0x000842fd) main_fs_bigclock_swipe_pane_ParamLimits

0x8e18,	// (0x000842fd) main_fs_bigclock_swipe_pane

0xa105,	// (0x000855ea) main_fs_clock_dumped_data

0xe3fc,	// (0x000898e1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3fc,	// (0x000898e1) list_single_fs_bigclock_indicator_pane_g1

0xe418,	// (0x000898fd) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe418,	// (0x000898fd) list_single_fs_bigclock_indicator_pane_g2

0xe432,	// (0x00089917) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe432,	// (0x00089917) list_single_fs_bigclock_indicator_pane_g3

0xe44c,	// (0x00089931) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe44c,	// (0x00089931) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0961,	// (0x0007be46) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0961,	// (0x0007be46) list_single_fs_bigclock_indicator_pane_g

0xe477,	// (0x0008995c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe477,	// (0x0008995c) list_single_fs_bigclock_indicator_pane_t1

0xe49f,	// (0x00089984) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe49f,	// (0x00089984) list_single_fs_bigclock_indicator_pane_t2

0xe4c7,	// (0x000899ac) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4c7,	// (0x000899ac) list_single_fs_bigclock_indicator_pane_t3

0xe4ef,	// (0x000899d4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4ef,	// (0x000899d4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x096c,	// (0x0007be51) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x096c,	// (0x0007be51) list_single_fs_bigclock_indicator_pane_t

0xeb87,	// (0x0008a06c) image3_infobar_fav_pane_ParamLimits

0xeb87,	// (0x0008a06c) image3_infobar_fav_pane

0xeb97,	// (0x0008a07c) image3_infobar_loc_pane_ParamLimits

0xeb97,	// (0x0008a07c) image3_infobar_loc_pane

0xebab,	// (0x0008a090) image3_infobar_time_pane_ParamLimits

0xebab,	// (0x0008a090) image3_infobar_time_pane

0xcd1c,	// (0x00088201) image3_infobar_time_pane_g1

0xebbb,	// (0x0008a0a0) image3_infobar_time_pane_t1

0xcd1c,	// (0x00088201) image3_infobar_loc_pane_g1

0xebc9,	// (0x0008a0ae) image3_infobar_loc_pane_g2

0x0001,

0xfde8,	// (0x0008b2cd) image3_infobar_loc_pane_g

0xebd1,	// (0x0008a0b6) image3_infobar_loc_pane_t1

0xcd1c,	// (0x00088201) image3_infobar_fav_pane_g1

0xebdf,	// (0x0008a0c4) image3_infobar_fav_pane_g2

0x0001,

0xfded,	// (0x0008b2d2) image3_infobar_fav_pane_g

0xebe7,	// (0x0008a0cc) fs_bigclock_status_battery_pane

0xebf0,	// (0x0008a0d5) fs_bigclock_status_signal_pane

0xebf9,	// (0x0008a0de) fs_bigclock_status_title_pane

0xec02,	// (0x0008a0e7) fs_bigclock_status_signal_pane_g1

0xec0b,	// (0x0008a0f0) fs_bigclock_status_signal_pane_g2

0x0001,

0x0b4c,	// (0x0007c031) fs_bigclock_status_signal_pane_g

0xec13,	// (0x0008a0f8) fs_bigclock_status_battery_pane_g1

0xec1c,	// (0x0008a101) fs_bigclock_status_battery_pane_g2

0x0001,

0x0b51,	// (0x0007c036) fs_bigclock_status_battery_pane_g

0xec24,	// (0x0008a109) fs_bigclock_status_title_pane_t1

0x96b1,	// (0x00084b96) main_fs_bigclock_clock_pane_g1

0x96b1,	// (0x00084b96) main_fs_bigclock_clock_pane_g2

0x96be,	// (0x00084ba3) main_fs_bigclock_clock_pane_g3

0x96be,	// (0x00084ba3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdf2,	// (0x0008b2d7) main_fs_bigclock_clock_pane_g

0x96ca,	// (0x00084baf) main_fs_bigclock_clock_pane_t1

0x96dd,	// (0x00084bc2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdfb,	// (0x0008b2e0) main_fs_bigclock_clock_pane_t

0xec32,	// (0x0008a117) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec32,	// (0x0008a117) list_single_fs_bigclock_indicator_pane

0xec43,	// (0x0008a128) list_single_fs_bigclock_pane_ParamLimits

0xec43,	// (0x0008a128) list_single_fs_bigclock_pane

0xec69,	// (0x0008a14e) main_fs_bigclock_indicator_pane_t1

0xec78,	// (0x0008a15d) list_single_fs_bigclock_pane_g1

0xec80,	// (0x0008a165) list_single_fs_bigclock_pane_t1

0xcd1c,	// (0x00088201) main_fs_bigclock_swipe_pane_g1

0xecc3,	// (0x0008a1a8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe0c,	// (0x0008b2f1) main_fs_bigclock_swipe_pane_g

0xeccb,	// (0x0008a1b0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeccb,	// (0x0008a1b0) main_fs_bigclock_swipe_pane_t1

0x41db,	// (0x0007f6c0) call_type_pane_ParamLimits

0xa105,	// (0x000855ea) main_btmg_pane

0x1bc2,	// (0x0007d0a7) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1bc2,	// (0x0007d0a7) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd8e,	// (0x0008b273) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd8e,	// (0x0008b273) list_single_cale_mrui_row_pane_g

0x1cea,	// (0x0007d1cf) list_recal_vselct_arw_lo_pane

0xeb02,	// (0x00089fe7) list_recal_vselct_arw_up_pane

0x1cf2,	// (0x0007d1d7) list_recal_vselct_pane

0x9734,	// (0x00084c19) btmg_button_pane

0x9740,	// (0x00084c25) main_btmg_pane_g1

0xa105,	// (0x000855ea) bg_button_pane_cp044

0xece8,	// (0x0008a1cd) btmg_button_pane_t1

0xc900,	// (0x00087de5) aid_listscroll_gen

0xaae2,	// (0x00085fc7) main_cntbar_detail_pane

0xe833,	// (0x00089d18) list_cmail_folder_pane

0xd5dd,	// (0x00088ac2) sp_fs_scroll_pane_cp03_ParamLimits

0x1d81,	// (0x0007d266) list_single_fs_dyc_pane_cp01_ParamLimits

0x1d81,	// (0x0007d266) list_single_fs_dyc_pane_cp01

0xecf6,	// (0x0008a1db) aid_size_cmail_indent

0x1da9,	// (0x0007d28e) list_single_dyc_row_pane_cp01

0x9768,	// (0x00084c4d) cntbar_detail_list_pane_ParamLimits

0x9768,	// (0x00084c4d) cntbar_detail_list_pane

0x97a2,	// (0x00084c87) main_cntbar_detail_cont_pane_ParamLimits

0x97a2,	// (0x00084c87) main_cntbar_detail_cont_pane

0x41cf,	// (0x0007f6b4) scroll_pane_cp032_ParamLimits

0x41cf,	// (0x0007f6b4) scroll_pane_cp032

0x97ae,	// (0x00084c93) cntbar_detail_list_event_pane_ParamLimits

0x97ae,	// (0x00084c93) cntbar_detail_list_event_pane

0x9774,	// (0x00084c59) cntbar_detail_list_shct_pane

0xad35,	// (0x0008621a) aid_list_gen

0xecff,	// (0x0008a1e4) aid_scroll

0xed08,	// (0x0008a1ed) aid_size_touch_scroll_bar

0x1311,	// (0x0007c7f6) aid_list_double

0x97c2,	// (0x00084ca7) aid_list_single

0x826b,	// (0x00083750) aid_list_single_lg

0x1db2,	// (0x0007d297) aid_list_z_g_a_sm

0x97cb,	// (0x00084cb0) aid_list_z_g_d

0x1dba,	// (0x0007d29f) aid_txt_z_prm

0x1dc8,	// (0x0007d2ad) aid_txt_z_prm_cp01

0x1dd6,	// (0x0007d2bb) aid_txt_z_sec

0x97d3,	// (0x00084cb8) main_cntbar_detail_cont_pane_g1_ParamLimits

0x97d3,	// (0x00084cb8) main_cntbar_detail_cont_pane_g1

0x97e0,	// (0x00084cc5) main_cntbar_detail_cont_pane_g2_ParamLimits

0x97e0,	// (0x00084cc5) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe11,	// (0x0008b2f6) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe11,	// (0x0008b2f6) main_cntbar_detail_cont_pane_g

0xed11,	// (0x0008a1f6) main_cntbar_detail_cont_pane_t1

0xed1f,	// (0x0008a204) main_cntbar_detail_cont_pane_t2

0xed2d,	// (0x0008a212) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe16,	// (0x0008b2fb) main_cntbar_detail_cont_pane_t

0x97ec,	// (0x00084cd1) cell_cntbar_detail_list_shct_pane_ParamLimits

0x97ec,	// (0x00084cd1) cell_cntbar_detail_list_shct_pane

0xed3b,	// (0x0008a220) cntbar_detail_list_shct_pane_g1

0xed44,	// (0x0008a229) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe1d,	// (0x0008b302) cntbar_detail_list_shct_pane_g

0x9800,	// (0x00084ce5) cntbar_detail_list_event_pane_g1_ParamLimits

0x9800,	// (0x00084ce5) cntbar_detail_list_event_pane_g1

0x980c,	// (0x00084cf1) cntbar_detail_list_event_pane_g2_ParamLimits

0x980c,	// (0x00084cf1) cntbar_detail_list_event_pane_g2

0x0005,

0xfe22,	// (0x0008b307) cntbar_detail_list_event_pane_g_ParamLimits

0xfe22,	// (0x0008b307) cntbar_detail_list_event_pane_g

0x9878,	// (0x00084d5d) cntbar_detail_list_event_pane_t1_ParamLimits

0x9878,	// (0x00084d5d) cntbar_detail_list_event_pane_t1

0x988d,	// (0x00084d72) cntbar_detail_list_event_pane_t2_ParamLimits

0x988d,	// (0x00084d72) cntbar_detail_list_event_pane_t2

0x0002,

0xfe2f,	// (0x0008b314) cntbar_detail_list_event_pane_t_ParamLimits

0xfe2f,	// (0x0008b314) cntbar_detail_list_event_pane_t

0xcd1c,	// (0x00088201) cell_cntbar_detail_list_shct_pane_g1

0xb48f,	// (0x00086974) navi_pane_mv_g3

0xaae2,	// (0x00085fc7) main_cntbar_detail_pane_ParamLimits

0xa105,	// (0x000855ea) main_notif_wgt_pane

0x6b2e,	// (0x00082013) aid_tch_main_mp4_pane_g4

0x6d8d,	// (0x00082272) popup_slider_window_cp02

0x1ce0,	// (0x0007d1c5) list_recal_day_event_pane

0x9748,	// (0x00084c2d) cntbar_detail_btn_pane_ParamLimits

0x9748,	// (0x00084c2d) cntbar_detail_btn_pane

0x9758,	// (0x00084c3d) cntbar_detail_btn_pane_cp01_ParamLimits

0x9758,	// (0x00084c3d) cntbar_detail_btn_pane_cp01

0x9774,	// (0x00084c59) cntbar_detail_list_shct_pane_ParamLimits

0x9780,	// (0x00084c65) cntbar_detail_pane_g1_ParamLimits

0x9780,	// (0x00084c65) cntbar_detail_pane_g1

0x978c,	// (0x00084c71) cntbar_detail_pane_t1_ParamLimits

0x978c,	// (0x00084c71) cntbar_detail_pane_t1

0x9818,	// (0x00084cfd) cntbar_detail_list_event_pane_g3_ParamLimits

0x9818,	// (0x00084cfd) cntbar_detail_list_event_pane_g3

0x9830,	// (0x00084d15) cntbar_detail_list_event_pane_g4_ParamLimits

0x9830,	// (0x00084d15) cntbar_detail_list_event_pane_g4

0x9848,	// (0x00084d2d) cntbar_detail_list_event_pane_g5_ParamLimits

0x9848,	// (0x00084d2d) cntbar_detail_list_event_pane_g5

0x9860,	// (0x00084d45) cntbar_detail_list_event_pane_g6_ParamLimits

0x9860,	// (0x00084d45) cntbar_detail_list_event_pane_g6

0x98a2,	// (0x00084d87) cntbar_detail_list_event_pane_t3_ParamLimits

0x98a2,	// (0x00084d87) cntbar_detail_list_event_pane_t3

0x98b4,	// (0x00084d99) popup_notif_wgt_window_ParamLimits

0x98b4,	// (0x00084d99) popup_notif_wgt_window

0x98c4,	// (0x00084da9) popup_submenu_window_cp01_ParamLimits

0x98c4,	// (0x00084da9) popup_submenu_window_cp01

0xaa21,	// (0x00085f06) bg_popup_window_pane_cp10

0xed4d,	// (0x0008a232) listscroll_notif_wgt_pane

0xed5f,	// (0x0008a244) list_notif_wgt_window

0xed68,	// (0x0008a24d) scroll_pane_cp033

0x98d2,	// (0x00084db7) list_notif_wgt_row_pane_ParamLimits

0x98d2,	// (0x00084db7) list_notif_wgt_row_pane

0xed71,	// (0x0008a256) aid_size_list_notif_wgt_del

0xed7e,	// (0x0008a263) list_notif_wgt_row_pane_g1

0xed8a,	// (0x0008a26f) list_notif_wgt_row_pane_g2

0xed99,	// (0x0008a27e) list_notif_wgt_row_pane_g3

0x0002,

0xfe36,	// (0x0008b31b) list_notif_wgt_row_pane_g

0xeda6,	// (0x0008a28b) list_notif_wgt_row_pane_t1

0xedbc,	// (0x0008a2a1) list_notif_wgt_row_pane_t2

0xedce,	// (0x0008a2b3) list_notif_wgt_row_pane_t3

0x0002,

0xfe3d,	// (0x0008b322) list_notif_wgt_row_pane_t

0xd91d,	// (0x00088e02) list_recal_day_event_pane_g1

0xede0,	// (0x0008a2c5) list_recal_day_event_pane_t1

0xa105,	// (0x000855ea) bg_button_pane_cp045

0x98e4,	// (0x00084dc9) cntbar_detail_btn_pane_t1

0xc914,	// (0x00087df9) main_callh_pane_ParamLimits

0xc914,	// (0x00087df9) main_callh_pane

0xa105,	// (0x000855ea) main_coverflow0_pane

0xa105,	// (0x000855ea) main_wgtman_pane

0x8e30,	// (0x00084315) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8e30,	// (0x00084315) main_fs_bigclock_unlock_btn_pane

0x9258,	// (0x0008473d) bg_button_pane_cp16

0x9268,	// (0x0008474d) cell_tport_appsw_pane_g3

0x98f2,	// (0x00084dd7) cf0_flow_pane_ParamLimits

0x98f2,	// (0x00084dd7) cf0_flow_pane

0xedef,	// (0x0008a2d4) listscroll_cf0_pane

0xedfa,	// (0x0008a2df) main_cf0_pane_g1

0x9901,	// (0x00084de6) main_cf0_pane_t1_ParamLimits

0x9901,	// (0x00084de6) main_cf0_pane_t1

0x9915,	// (0x00084dfa) main_cf0_pane_t2_ParamLimits

0x9915,	// (0x00084dfa) main_cf0_pane_t2

0x0001,

0xfe49,	// (0x0008b32e) main_cf0_pane_t_ParamLimits

0xfe49,	// (0x0008b32e) main_cf0_pane_t

0xee0c,	// (0x0008a2f1) scroll_pane_cp11

0x9929,	// (0x00084e0e) cf0_flow_pane_g1

0x9931,	// (0x00084e16) cf0_flow_pane_g2

0x0001,

0xfe4e,	// (0x0008b333) cf0_flow_pane_g

0x9939,	// (0x00084e1e) cf0_flow_pane_t1

0xa105,	// (0x000855ea) main_call6_pane

0xa105,	// (0x000855ea) main_calllock_pane

0x9947,	// (0x00084e2c) call6_btn_grp_pane_ParamLimits

0x9947,	// (0x00084e2c) call6_btn_grp_pane

0x9956,	// (0x00084e3b) call6_pane_g1_ParamLimits

0x9956,	// (0x00084e3b) call6_pane_g1

0x9966,	// (0x00084e4b) popup_call6_1st_window_ParamLimits

0x9966,	// (0x00084e4b) popup_call6_1st_window

0x9974,	// (0x00084e59) popup_call6_2nd_window_ParamLimits

0x9974,	// (0x00084e59) popup_call6_2nd_window

0x9982,	// (0x00084e67) cell_call6_btn_pane_ParamLimits

0x9982,	// (0x00084e67) cell_call6_btn_pane

0xaa21,	// (0x00085f06) bg_popup_call2_in_pane_cp03

0xee17,	// (0x0008a2fc) popup_call6_1st_window_g1

0xee1f,	// (0x0008a304) popup_call6_1st_window_g2

0xee27,	// (0x0008a30c) popup_call6_1st_window_g3

0x0002,

0xfe53,	// (0x0008b338) popup_call6_1st_window_g

0xee2f,	// (0x0008a314) popup_call6_1st_window_t1

0xee3e,	// (0x0008a323) popup_call6_1st_window_t2

0xee4c,	// (0x0008a331) popup_call6_1st_window_t3

0x0002,

0xfe5a,	// (0x0008b33f) popup_call6_1st_window_t

0xaa21,	// (0x00085f06) bg_popup_call2_in_pane_cp04

0xee17,	// (0x0008a2fc) popup_call6_2nd_window_g1

0xee1f,	// (0x0008a304) popup_call6_2nd_window_g2

0xee27,	// (0x0008a30c) popup_call6_2nd_window_g3

0x0002,

0xfe53,	// (0x0008b338) popup_call6_2nd_window_g

0xee2f,	// (0x0008a314) popup_call6_2nd_window_t1

0xa105,	// (0x000855ea) bg_button_pane_cp15

0xee5a,	// (0x0008a33f) cell_call6_btn_pane_g1

0x9991,	// (0x00084e76) cell_call6_btn_pane_t1

0x99a0,	// (0x00084e85) listscroll_wgtman_pane_ParamLimits

0x99a0,	// (0x00084e85) listscroll_wgtman_pane

0x99bc,	// (0x00084ea1) wgtman_btn_pane_ParamLimits

0x99bc,	// (0x00084ea1) wgtman_btn_pane

0xb295,	// (0x0008677a) aid_scroll_copy1

0xee63,	// (0x0008a348) list_wgtman_pane

0x99f1,	// (0x00084ed6) wgtman_btn_pane_g1_ParamLimits

0x99f1,	// (0x00084ed6) wgtman_btn_pane_g1

0x9a19,	// (0x00084efe) wgtman_btn_pane_t1_ParamLimits

0x9a19,	// (0x00084efe) wgtman_btn_pane_t1

0xee6d,	// (0x0008a352) wgtman_btn_pane_t2_ParamLimits

0xee6d,	// (0x0008a352) wgtman_btn_pane_t2

0x0001,

0xfe61,	// (0x0008b346) wgtman_btn_pane_t_ParamLimits

0xfe61,	// (0x0008b346) wgtman_btn_pane_t

0x9a50,	// (0x00084f35) listrow_wgtman_pane_ParamLimits

0x9a50,	// (0x00084f35) listrow_wgtman_pane

0x9a6c,	// (0x00084f51) listrow_wgtman_pane_g1

0x9a79,	// (0x00084f5e) listrow_wgtman_pane_g2

0x0001,

0xfe66,	// (0x0008b34b) listrow_wgtman_pane_g

0x1de4,	// (0x0007d2c9) listrow_wgtman_pane_t1

0x1dfc,	// (0x0007d2e1) listrow_wgtman_pane_t2

0x0001,

0xfe6b,	// (0x0008b350) listrow_wgtman_pane_t

0x1e22,	// (0x0007d307) wait_bar_pane_cp09

0xee84,	// (0x0008a369) main_calllock_btn_pane

0xee8e,	// (0x0008a373) main_calllock_pane_g1

0xa105,	// (0x000855ea) bg_button_pane_cp17

0xee5a,	// (0x0008a33f) main_calllock_btn_pane_g1

0xee9a,	// (0x0008a37f) main_calllock_btn_pane_t1

0xa105,	// (0x000855ea) main_dialer3_pane

0xa105,	// (0x000855ea) main_fmrd2_pane

0xcd1c,	// (0x00088201) main_fs_bigclock_unlock_btn_pane_g1

0x9a9f,	// (0x00084f84) main_fs_bigclock_unlock_btn_pane_t1

0x9aad,	// (0x00084f92) area_fmrd2_info_pane_ParamLimits

0x9aad,	// (0x00084f92) area_fmrd2_info_pane

0x9abb,	// (0x00084fa0) area_fmrd2_visual_pane_ParamLimits

0x9abb,	// (0x00084fa0) area_fmrd2_visual_pane

0x9ac9,	// (0x00084fae) fmrd2_indi_pane_ParamLimits

0x9ac9,	// (0x00084fae) fmrd2_indi_pane

0x9ad6,	// (0x00084fbb) area_fmrd2_visual_pane_g1

0x9ade,	// (0x00084fc3) area_fmrd2_visual_pane_t1

0x9aee,	// (0x00084fd3) area_fmrd2_visual_pane_t2

0x9afe,	// (0x00084fe3) area_fmrd2_visual_pane_t3

0x0002,

0xfe75,	// (0x0008b35a) area_fmrd2_visual_pane_t

0x9b0e,	// (0x00084ff3) area_fmrd2_info_pane_g1

0x9b16,	// (0x00084ffb) area_fmrd2_info_pane_t1

0x9b26,	// (0x0008500b) area_fmrd2_info_pane_t2

0x9b36,	// (0x0008501b) area_fmrd2_info_pane_t3

0x9b46,	// (0x0008502b) area_fmrd2_info_pane_t4

0x0003,

0xfe7c,	// (0x0008b361) area_fmrd2_info_pane_t

0x9b54,	// (0x00085039) fmrd2_indi_pane_t1

0x9b64,	// (0x00085049) fmrd2_indi_pane_t2

0x9b74,	// (0x00085059) fmrd2_indi_pane_t3

0x0002,

0xfe85,	// (0x0008b36a) fmrd2_indi_pane_t

0xe45b,	// (0x00089940) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe45b,	// (0x00089940) list_single_fs_bigclock_indicator_pane_g5

0xe50c,	// (0x000899f1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe50c,	// (0x000899f1) list_single_fs_bigclock_indicator_pane_t5

0x9406,	// (0x000848eb) aid_cell_bcale_month_pane_ParamLimits

0x9406,	// (0x000848eb) aid_cell_bcale_month_pane

0x9424,	// (0x00084909) bcale_month_pane_ParamLimits

0x9424,	// (0x00084909) bcale_month_pane

0x9442,	// (0x00084927) bcale_preview_pane_ParamLimits

0x9442,	// (0x00084927) bcale_preview_pane

0xec80,	// (0x0008a165) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9f,	// (0x0008a184) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9f,	// (0x0008a184) list_single_fs_bigclock_pane_t2

0x0001,

0xfe07,	// (0x0008b2ec) list_single_fs_bigclock_pane_t_ParamLimits

0xfe07,	// (0x0008b2ec) list_single_fs_bigclock_pane_t

0x9a97,	// (0x00084f7c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe70,	// (0x0008b355) main_fs_bigclock_unlock_btn_pane_g

0x9b82,	// (0x00085067) aid_dia3_key_size_ParamLimits

0x9b82,	// (0x00085067) aid_dia3_key_size

0x9b8e,	// (0x00085073) aid_dia3_listrow_size_ParamLimits

0x9b8e,	// (0x00085073) aid_dia3_listrow_size

0x9b9e,	// (0x00085083) dia3_keypad_fun_pane_ParamLimits

0x9b9e,	// (0x00085083) dia3_keypad_fun_pane

0x9bb0,	// (0x00085095) dia3_keypad_num_pane_ParamLimits

0x9bb0,	// (0x00085095) dia3_keypad_num_pane

0x9bc2,	// (0x000850a7) dia3_listscroll_pane_ParamLimits

0x9bc2,	// (0x000850a7) dia3_listscroll_pane

0x9bd0,	// (0x000850b5) dia3_numentry_pane_ParamLimits

0x9bd0,	// (0x000850b5) dia3_numentry_pane

0xeea9,	// (0x0008a38e) dia3_list_pane

0xeeb4,	// (0x0008a399) scroll_pane_cp12

0xa105,	// (0x000855ea) bg_dia3_numentry_pane

0x9bde,	// (0x000850c3) dia3_numentry_pane_t1

0x9bed,	// (0x000850d2) cell_dia3_key_num_pane

0x9bf5,	// (0x000850da) cell_dia3_key0_fun_pane_ParamLimits

0x9bf5,	// (0x000850da) cell_dia3_key0_fun_pane

0x9c02,	// (0x000850e7) cell_dia3_key1_fun_pane_ParamLimits

0x9c02,	// (0x000850e7) cell_dia3_key1_fun_pane

0x9c0f,	// (0x000850f4) dia3_listrow_pane

0xe1ae,	// (0x00089693) bg_dia3_numentry_pane_g1

0xa105,	// (0x000855ea) bg_button_pane_cp21

0xeebf,	// (0x0008a3a4) cell_dia3_key_num_pane_t1

0xeecd,	// (0x0008a3b2) cell_dia3_key_num_pane_t2

0xeedc,	// (0x0008a3c1) cell_dia3_key_num_pane_t3

0xeeeb,	// (0x0008a3d0) cell_dia3_key_num_pane_t4

0x0003,

0xfe8c,	// (0x0008b371) cell_dia3_key_num_pane_t

0xa105,	// (0x000855ea) bg_button_pane_cp19

0x9c1c,	// (0x00085101) cell_dia3_key0_fun_pane_g1

0xa105,	// (0x000855ea) bg_button_pane_cp20

0x9c24,	// (0x00085109) cell_dia3_key1_fun_pane_g1

0x9c2c,	// (0x00085111) area_left_week_number_pane

0x9c3f,	// (0x00085124) area_top_day_name_pane

0x9c4d,	// (0x00085132) frame_month_view_pane

0xeefa,	// (0x0008a3df) grid_month_view_pane

0x9c62,	// (0x00085147) cell_top_day_name_pane_ParamLimits

0x9c62,	// (0x00085147) cell_top_day_name_pane

0x9c7c,	// (0x00085161) cell_area_left_week_number_pane_ParamLimits

0x9c7c,	// (0x00085161) cell_area_left_week_number_pane

0x9c9f,	// (0x00085184) cell_month_view_pane_ParamLimits

0x9c9f,	// (0x00085184) cell_month_view_pane

0xef08,	// (0x0008a3ed) frm_month_g1

0x9ccb,	// (0x000851b0) frm_month_g2

0x9cdc,	// (0x000851c1) frm_month_g3

0x9ced,	// (0x000851d2) frm_month_g4

0x9cfe,	// (0x000851e3) frm_month_g5

0x9d11,	// (0x000851f6) frm_month_g6

0x9d24,	// (0x00085209) frm_month_g7

0xef15,	// (0x0008a3fa) frm_month_g8

0x9d37,	// (0x0008521c) frm_month_g9

0x9d44,	// (0x00085229) frm_month_g10

0x9d51,	// (0x00085236) frm_month_g11

0x9d5e,	// (0x00085243) frm_month_g12

0x9d6b,	// (0x00085250) frm_month_g13

0x9d78,	// (0x0008525d) frm_month_g14

0x9d87,	// (0x0008526c) frm_month_g15

0x9d96,	// (0x0008527b) frm_month_g16

0x000f,

0xfe95,	// (0x0008b37a) frm_month_g

0xef22,	// (0x0008a407) cell_top_day_name_pane_t1

0x9da5,	// (0x0008528a) cell_area_left_week_number_pane_g1

0x9db4,	// (0x00085299) cell_area_left_week_number_pane_t1

0xcf61,	// (0x00088446) cell_month_view_pane_g1

0x9dca,	// (0x000852af) cell_month_view_pane_t1

0xa105,	// (0x000855ea) main_fps_pane

0xe752,	// (0x00089c37) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe752,	// (0x00089c37) cmail_ddmenu_btn02_pane_cp1

0xe76e,	// (0x00089c53) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe76e,	// (0x00089c53) cmail_ddmenu_btn02_pane_cp2

0x9630,	// (0x00084b15) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9630,	// (0x00084b15) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdc9,	// (0x0008b2ae) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdc9,	// (0x0008b2ae) cmail_ddmenu_btn02_pane_g

0x964e,	// (0x00084b33) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x964e,	// (0x00084b33) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdce,	// (0x0008b2b3) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdce,	// (0x0008b2b3) cmail_ddmenu_btn02_pane_t

0x9de0,	// (0x000852c5) fps_text_pane_ParamLimits

0x9de0,	// (0x000852c5) fps_text_pane

0x9ded,	// (0x000852d2) main_fps_pane_g1_ParamLimits

0x9ded,	// (0x000852d2) main_fps_pane_g1

0x9dfb,	// (0x000852e0) wait_bar_pane_cp010_ParamLimits

0x9dfb,	// (0x000852e0) wait_bar_pane_cp010

0x9e07,	// (0x000852ec) fps_text_pane_t1_ParamLimits

0x9e07,	// (0x000852ec) fps_text_pane_t1

0x7238,	// (0x0008271d) cam4_image_uncrop_pane_g1

0x7241,	// (0x00082726) cam4_image_uncrop_pane_g2

0x724a,	// (0x0008272f) cam4_image_uncrop_pane_g3

0x7253,	// (0x00082738) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x0008adcf) cam4_image_uncrop_pane_g

0x9c0f,	// (0x000850f4) dia3_listrow_pane_ParamLimits

0xa105,	// (0x000855ea) main_phob2_pane

0x923a,	// (0x0008471f) cell_tport_appsw_pane_cp02_ParamLimits

0x923a,	// (0x0008471f) cell_tport_appsw_pane_cp02

0x9249,	// (0x0008472e) cell_tport_appsw_pane_cp03_ParamLimits

0x9249,	// (0x0008472e) cell_tport_appsw_pane_cp03

0xa105,	// (0x000855ea) phob2_contact_card_pane

0xa105,	// (0x000855ea) phob2_listscroll_pane

0xef35,	// (0x0008a41a) phob2_list_pane

0xef3d,	// (0x0008a422) scroll_pane_cp034

0x9e20,	// (0x00085305) phob2_cc_data_pane_ParamLimits

0x9e20,	// (0x00085305) phob2_cc_data_pane

0x9e3a,	// (0x0008531f) phob2_cc_listscroll_pane_ParamLimits

0x9e3a,	// (0x0008531f) phob2_cc_listscroll_pane

0x9e54,	// (0x00085339) list_double_large_graphic_phob2_pane_ParamLimits

0x9e54,	// (0x00085339) list_double_large_graphic_phob2_pane

0x9e73,	// (0x00085358) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9e73,	// (0x00085358) list_double_large_graphic_phob2_pane_g1

0x1e34,	// (0x0007d319) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1e34,	// (0x0007d319) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfeb6,	// (0x0008b39b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfeb6,	// (0x0008b39b) list_double_large_graphic_phob2_pane_g

0x1e40,	// (0x0007d325) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1e40,	// (0x0007d325) list_double_large_graphic_phob2_pane_t1

0x1e56,	// (0x0007d33b) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1e56,	// (0x0007d33b) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfebb,	// (0x0008b3a0) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfebb,	// (0x0008b3a0) list_double_large_graphic_phob2_pane_t

0xa105,	// (0x000855ea) list_highlight_pane_cp024

0x9e89,	// (0x0008536e) phob2_cc_button_pane

0x9e91,	// (0x00085376) phob2_cc_data_pane_g1_ParamLimits

0x9e91,	// (0x00085376) phob2_cc_data_pane_g1

0x9e9d,	// (0x00085382) phob2_cc_data_pane_g2_ParamLimits

0x9e9d,	// (0x00085382) phob2_cc_data_pane_g2

0x0001,

0xfec0,	// (0x0008b3a5) phob2_cc_data_pane_g_ParamLimits

0xfec0,	// (0x0008b3a5) phob2_cc_data_pane_g

0x9ea9,	// (0x0008538e) phob2_cc_data_pane_t1_ParamLimits

0x9ea9,	// (0x0008538e) phob2_cc_data_pane_t1

0x9ebb,	// (0x000853a0) phob2_cc_data_pane_t2_ParamLimits

0x9ebb,	// (0x000853a0) phob2_cc_data_pane_t2

0x9ecd,	// (0x000853b2) phob2_cc_data_pane_t3_ParamLimits

0x9ecd,	// (0x000853b2) phob2_cc_data_pane_t3

0x0002,

0xfec5,	// (0x0008b3aa) phob2_cc_data_pane_t_ParamLimits

0xfec5,	// (0x0008b3aa) phob2_cc_data_pane_t

0xef45,	// (0x0008a42a) phob2_cc_list_pane_ParamLimits

0xef45,	// (0x0008a42a) phob2_cc_list_pane

0xdae0,	// (0x00088fc5) scroll_pane_cp035_ParamLimits

0xdae0,	// (0x00088fc5) scroll_pane_cp035

0xaae2,	// (0x00085fc7) bg_button_pane_cp033

0xef51,	// (0x0008a436) phob2_cc_button_pane_g1

0xef5d,	// (0x0008a442) phob2_cc_button_pane_t1

0xef72,	// (0x0008a457) phob2_cc_button_pane_t2

0x0001,

0xfecc,	// (0x0008b3b1) phob2_cc_button_pane_t

0x9edf,	// (0x000853c4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9edf,	// (0x000853c4) list_double_large_graphic_phob2_cc_pane

0x9f53,	// (0x00085438) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9f53,	// (0x00085438) list_double_large_graphic_phob2_cc_pane_g1

0x1e6b,	// (0x0007d350) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1e6b,	// (0x0007d350) list_double_large_graphic_phob2_cc_pane_g2

0x1e7a,	// (0x0007d35f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1e7a,	// (0x0007d35f) list_double_large_graphic_phob2_cc_pane_g3

0x1e89,	// (0x0007d36e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1e89,	// (0x0007d36e) list_double_large_graphic_phob2_cc_pane_g4

0x1e9a,	// (0x0007d37f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1e9a,	// (0x0007d37f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfed1,	// (0x0008b3b6) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfed1,	// (0x0008b3b6) list_double_large_graphic_phob2_cc_pane_g

0x1ea9,	// (0x0007d38e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1ea9,	// (0x0007d38e) list_double_large_graphic_phob2_cc_pane_t1

0x1ed2,	// (0x0007d3b7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1ed2,	// (0x0007d3b7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfedc,	// (0x0008b3c1) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfedc,	// (0x0008b3c1) list_double_large_graphic_phob2_cc_pane_t

0xef84,	// (0x0008a469) list_highlight_pane_cp025_ParamLimits

0xef84,	// (0x0008a469) list_highlight_pane_cp025

0xaae2,	// (0x00085fc7) bg_button_pane_cp033_ParamLimits

0xef51,	// (0x0008a436) phob2_cc_button_pane_g1_ParamLimits

0xef5d,	// (0x0008a442) phob2_cc_button_pane_t1_ParamLimits

0xef72,	// (0x0008a457) phob2_cc_button_pane_t2_ParamLimits

0xfecc,	// (0x0008b3b1) phob2_cc_button_pane_t_ParamLimits

0x21d2,	// (0x0007d6b7) popup_wgtman_window

0xd7e9,	// (0x00088cce) scroll_pane_cp038

0x99d9,	// (0x00084ebe) wgtman_btn_pane_cp_01_ParamLimits

0x99d9,	// (0x00084ebe) wgtman_btn_pane_cp_01

0xef92,	// (0x0008a477) wgtman_content_pane

0xef9b,	// (0x0008a480) wgtman_heading_pane

0xa105,	// (0x000855ea) bg_heading_pane_cp02

0xefa4,	// (0x0008a489) wgtman_heading_pane_g1

0xefac,	// (0x0008a491) wgtman_heading_pane_t1

0xefba,	// (0x0008a49f) scroll_pane_cp036

0xefc2,	// (0x0008a4a7) wgtman_list_pane

0xe70f,	// (0x00089bf4) wgtman_list_pane_t1_ParamLimits

0xe70f,	// (0x00089bf4) wgtman_list_pane_t1

0x7197,	// (0x0008267c) cam4_grid_pane

0x10f6,	// (0x0007c5db) bg_button_pane_cp015_ParamLimits

0x7e8e,	// (0x00083373) bg_button_pane_cp016_ParamLimits

0x7ea1,	// (0x00083386) bg_button_pane_cp017_ParamLimits

0x113a,	// (0x0007c61f) popup_vitu2_query_window_g3_ParamLimits

0x113a,	// (0x0007c61f) popup_vitu2_query_window_g3

0x11b3,	// (0x0007c698) popup_vitu2_query_window_t6_ParamLimits

0x11b3,	// (0x0007c698) popup_vitu2_query_window_t6

0x11de,	// (0x0007c6c3) popup_vitu2_query_window_t7_ParamLimits

0x11de,	// (0x0007c6c3) popup_vitu2_query_window_t7

0xdfe1,	// (0x000894c6) cam4_grid_pane_g1

0xdfea,	// (0x000894cf) cam4_grid_pane_g2

0xefca,	// (0x0008a4af) cam4_grid_pane_g3

0xefd3,	// (0x0008a4b8) cam4_grid_pane_g4

0x0003,

0xfee1,	// (0x0008b3c6) cam4_grid_pane_g

0x2f54,	// (0x0007e439) aid_placing_vt_slider_lsc_ParamLimits

0x3294,	// (0x0007e779) vidtel_button_pane_ParamLimits

0x3294,	// (0x0007e779) vidtel_button_pane

0xa105,	// (0x000855ea) bg_button_pane_cp034

0xefde,	// (0x0008a4c3) vidtel_button_pane_g1

0xefe6,	// (0x0008a4cb) vidtel_button_pane_t1

0xd90d,	// (0x00088df2) aid_size_vtel_slider_touch

0xdae0,	// (0x00088fc5) scroll_pane_cp039

0x8b6d,	// (0x00084052) ncim_query_button_pane_cp01_ParamLimits

0x8b8c,	// (0x00084071) ncimui_query_pane_g1_ParamLimits

0xaae2,	// (0x00085fc7) input_focus_pane_cp012_ParamLimits

0xe1f4,	// (0x000896d9) ncim_query_entry_pane_t1_ParamLimits

0xdae0,	// (0x00088fc5) scroll_pane_cp039_ParamLimits

0xb37a,	// (0x0008685f) navi_pane_bcale_mc_g1

0xb382,	// (0x00086867) navi_pane_bcale_mc_t1

0xe7a2,	// (0x00089c87) main_sp_fs_email_pane_g1

0xe7ae,	// (0x00089c93) main_sp_fs_email_pane_g2

0x0001,

0xfc8f,	// (0x0008b174) main_sp_fs_email_pane_g

0xea04,	// (0x00089ee9) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea04,	// (0x00089ee9) list_single_cale_mrui_row_pane_g3

0x1d3f,	// (0x0007d224) list_single_recal_day_pane_g5_event_pane

0x1d55,	// (0x0007d23a) list_single_recal_day_pane_g7

0xeffc,	// (0x0008a4e1) list_recal_day_event_pane_cp01

0xf005,	// (0x0008a4ea) list_recal_vselct_arw_lo_pane_cp01

0xf00d,	// (0x0008a4f2) list_recal_vselct_arw_up_pane_cp01

0xf015,	// (0x0008a4fa) list_recal_vselct_pane_cp01

0xd91d,	// (0x00088e02) list_recal_day_event_pane_cp01_g1

0x1efb,	// (0x0007d3e0) list_recal_day_event_pane_cp01_t1

0x1d5d,	// (0x0007d242) list_single_recal_day_pane_t1_ParamLimits

0x1d6f,	// (0x0007d254) list_single_recal_day_pane_t2_ParamLimits

0xfdde,	// (0x0008b2c3) list_single_recal_day_pane_t_ParamLimits

0xa77d,	// (0x00085c62) bg_notes_pane_ParamLimits

0xa82c,	// (0x00085d11) list_notes_pane_ParamLimits

0x252d,	// (0x0007da12) scroll_pane_cp06_ParamLimits

0xa84e,	// (0x00085d33) main_notes_pane_ParamLimits

0xaae2,	// (0x00085fc7) main_welc_pane

0x9f73,	// (0x00085458) main_welc_body_pane_ParamLimits

0x9f73,	// (0x00085458) main_welc_body_pane

0x9f8c,	// (0x00085471) main_welc_opti_pane_ParamLimits

0x9f8c,	// (0x00085471) main_welc_opti_pane

0x9fcb,	// (0x000854b0) main_welc_pane_t1_ParamLimits

0x9fcb,	// (0x000854b0) main_welc_pane_t1

0xa027,	// (0x0008550c) main_welc_body_row_pane_ParamLimits

0xa027,	// (0x0008550c) main_welc_body_row_pane

0xe72a,	// (0x00089c0f) main_welc_opti_row_pane_ParamLimits

0xe72a,	// (0x00089c0f) main_welc_opti_row_pane

0xf01f,	// (0x0008a504) main_welc_opti_row_pane_g1

0xa050,	// (0x00085535) main_welc_opti_row_pane_t1

0xf027,	// (0x0008a50c) main_welc_body_row_pane_t1

0xed57,	// (0x0008a23c) popup_notif_wgt_heading_pane

0xed71,	// (0x0008a256) aid_size_list_notif_wgt_del_ParamLimits

0xed7e,	// (0x0008a263) list_notif_wgt_row_pane_g1_ParamLimits

0xed8a,	// (0x0008a26f) list_notif_wgt_row_pane_g2_ParamLimits

0xed99,	// (0x0008a27e) list_notif_wgt_row_pane_g3_ParamLimits

0xfe36,	// (0x0008b31b) list_notif_wgt_row_pane_g_ParamLimits

0xeda6,	// (0x0008a28b) list_notif_wgt_row_pane_t1_ParamLimits

0xedbc,	// (0x0008a2a1) list_notif_wgt_row_pane_t2_ParamLimits

0xedce,	// (0x0008a2b3) list_notif_wgt_row_pane_t3_ParamLimits

0xfe3d,	// (0x0008b322) list_notif_wgt_row_pane_t_ParamLimits

0x9a6c,	// (0x00084f51) listrow_wgtman_pane_g1_ParamLimits

0x9a79,	// (0x00084f5e) listrow_wgtman_pane_g2_ParamLimits

0xfe66,	// (0x0008b34b) listrow_wgtman_pane_g_ParamLimits

0x1de4,	// (0x0007d2c9) listrow_wgtman_pane_t1_ParamLimits

0x1dfc,	// (0x0007d2e1) listrow_wgtman_pane_t2_ParamLimits

0xfe6b,	// (0x0008b350) listrow_wgtman_pane_t_ParamLimits

0x1e22,	// (0x0007d307) wait_bar_pane_cp09_ParamLimits

0xa105,	// (0x000855ea) bg_popup_heading_pane_cp02

0xf036,	// (0x0008a51b) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0008a523) popup_notif_wgt_heading_pane_t1

0xa105,	// (0x000855ea) main_vids_pane

0xa105,	// (0x000855ea) vids_listscroll_pane

0xa05f,	// (0x00085544) scroll_pane_cp040

0xa105,	// (0x000855ea) vids_list_pane

0xa06a,	// (0x0008554f) vids_list_double_pane_ParamLimits

0xa06a,	// (0x0008554f) vids_list_double_pane

0xa082,	// (0x00085567) vids_list_double_pane_g1

0xa08b,	// (0x00085570) vids_list_double_pane_t1

0xa09b,	// (0x00085580) vids_list_double_pane_t2

0x0001,

0xfef8,	// (0x0008b3dd) vids_list_double_pane_t

0xaae2,	// (0x00085fc7) main_ncimui_pane_ParamLimits

0x89c4,	// (0x00083ea9) main_ncimui_pane_g1_ParamLimits

0x89d0,	// (0x00083eb5) main_ncimui_pane_g2_ParamLimits

0x89d0,	// (0x00083eb5) main_ncimui_pane_g2

0x0001,

0xfbe6,	// (0x0008b0cb) main_ncimui_pane_g_ParamLimits

0xfbe6,	// (0x0008b0cb) main_ncimui_pane_g

0x9fa5,	// (0x0008548a) main_welc_pane_g1_ParamLimits

0x9fa5,	// (0x0008548a) main_welc_pane_g1

0x9fb1,	// (0x00085496) main_welc_pane_g2_ParamLimits

0x9fb1,	// (0x00085496) main_welc_pane_g2

0x0002,

0xfeea,	// (0x0008b3cf) main_welc_pane_g_ParamLimits

0xfeea,	// (0x0008b3cf) main_welc_pane_g

0xa77d,	// (0x00085c62) listscroll_mce_pane_ParamLimits

0xb4cf,	// (0x000869b4) wait_bar_pane_cp10

0xc908,	// (0x00087ded) main_cale_day_pane_ParamLimits

0xc908,	// (0x00087ded) main_cale_week_pane_ParamLimits

0xa77d,	// (0x00085c62) main_messa_pane_ParamLimits

0x64c6,	// (0x000819ab) main_clock2_btn_pane_ParamLimits

0x64c6,	// (0x000819ab) main_clock2_btn_pane

0xd0e9,	// (0x000885ce) main_clock2_btn_pane_cp01_ParamLimits

0xd0e9,	// (0x000885ce) main_clock2_btn_pane_cp01

0xe9d5,	// (0x00089eba) list_cale_mrui_pane_ParamLimits

0xee04,	// (0x0008a2e9) main_cf0_pane_g2

0x0001,

0xfe44,	// (0x0008b329) main_cf0_pane_g

0x9c2c,	// (0x00085111) area_left_week_number_pane_ParamLimits

0x9c3f,	// (0x00085124) area_top_day_name_pane_ParamLimits

0x9c4d,	// (0x00085132) frame_month_view_pane_ParamLimits

0xeefa,	// (0x0008a3df) grid_month_view_pane_ParamLimits

0xef08,	// (0x0008a3ed) frm_month_g1_ParamLimits

0x9ccb,	// (0x000851b0) frm_month_g2_ParamLimits

0x9cdc,	// (0x000851c1) frm_month_g3_ParamLimits

0x9ced,	// (0x000851d2) frm_month_g4_ParamLimits

0x9cfe,	// (0x000851e3) frm_month_g5_ParamLimits

0x9d11,	// (0x000851f6) frm_month_g6_ParamLimits

0x9d24,	// (0x00085209) frm_month_g7_ParamLimits

0xef15,	// (0x0008a3fa) frm_month_g8_ParamLimits

0x9d37,	// (0x0008521c) frm_month_g9_ParamLimits

0x9d44,	// (0x00085229) frm_month_g10_ParamLimits

0x9d51,	// (0x00085236) frm_month_g11_ParamLimits

0x9d5e,	// (0x00085243) frm_month_g12_ParamLimits

0x9d6b,	// (0x00085250) frm_month_g13_ParamLimits

0x9d78,	// (0x0008525d) frm_month_g14_ParamLimits

0x9d87,	// (0x0008526c) frm_month_g15_ParamLimits

0x9d96,	// (0x0008527b) frm_month_g16_ParamLimits

0xfe95,	// (0x0008b37a) frm_month_g_ParamLimits

0xef22,	// (0x0008a407) cell_top_day_name_pane_t1_ParamLimits

0x9da5,	// (0x0008528a) cell_area_left_week_number_pane_g1_ParamLimits

0x9db4,	// (0x00085299) cell_area_left_week_number_pane_t1_ParamLimits

0xcf61,	// (0x00088446) cell_month_view_pane_g1_ParamLimits

0x9dca,	// (0x000852af) cell_month_view_pane_t1_ParamLimits

0xa775,	// (0x00085c5a) main_clock2_btn_pane_g1

0xf04c,	// (0x0008a531) main_clock2_btn_pane_t1

0xaae2,	// (0x00085fc7) listscroll_cmail_pane_ParamLimits

0xe7a2,	// (0x00089c87) main_sp_fs_email_pane_g1_ParamLimits

0xe7ae,	// (0x00089c93) main_sp_fs_email_pane_g2_ParamLimits

0xfc8f,	// (0x0008b174) main_sp_fs_email_pane_g_ParamLimits

0xeae3,	// (0x00089fc8) list_recal_day_pane_ParamLimits

0xeaf4,	// (0x00089fd9) mian_recal_day_pane_t1

0x1724,	// (0x0007cc09) list_single_dyc_row_text_pane_t4_ParamLimits

0x1724,	// (0x0007cc09) list_single_dyc_row_text_pane_t4

0x175b,	// (0x0007cc40) list_single_dyc_row_text_pane_t5_ParamLimits

0x175b,	// (0x0007cc40) list_single_dyc_row_text_pane_t5

0x17d1,	// (0x0007ccb6) list_single_dyc_row_text_pane_t6_ParamLimits

0x17d1,	// (0x0007ccb6) list_single_dyc_row_text_pane_t6

0x410d,	// (0x0007f5f2) aid_mgn_list_cale_time_pane

0xaae2,	// (0x00085fc7) main_gallery2_pane_ParamLimits

0xd0ff,	// (0x000885e4) main_clock2_pane_cp01_t1

0xd10d,	// (0x000885f2) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x0008aca1) main_clock2_pane_cp01_t

0x297f,	// (0x0007de64) cale_week_scroll_pane_g16_ParamLimits

0x297f,	// (0x0007de64) cale_week_scroll_pane_g16

0xaa21,	// (0x00085f06) vorec_slider_pane

0xefe6,	// (0x0008a4cb) vidtel_button_pane_t1_ParamLimits

0x96b1,	// (0x00084b96) main_fs_bigclock_clock_pane_g1_ParamLimits

0x96b1,	// (0x00084b96) main_fs_bigclock_clock_pane_g2_ParamLimits

0x96be,	// (0x00084ba3) main_fs_bigclock_clock_pane_g3_ParamLimits

0x96be,	// (0x00084ba3) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdf2,	// (0x0008b2d7) main_fs_bigclock_clock_pane_g_ParamLimits

0x96ca,	// (0x00084baf) main_fs_bigclock_clock_pane_t1_ParamLimits

0x96dd,	// (0x00084bc2) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfdfb,	// (0x0008b2e0) main_fs_bigclock_clock_pane_t_ParamLimits

0x5d6b,	// (0x00081250) main_mup3_lyrics_pane_ParamLimits

0x5d6b,	// (0x00081250) main_mup3_lyrics_pane

0xa0cf,	// (0x000855b4) main_mup3_lyrics_pane_t1_ParamLimits

0xa0cf,	// (0x000855b4) main_mup3_lyrics_pane_t1

0x6b18,	// (0x00081ffd) aid_main_mp4_pane_t1_area

0x6b22,	// (0x00082007) aid_main_mp4_pane_t2_area

0x6c21,	// (0x00082106) main_mp4_pane_g7_ParamLimits

0x6c21,	// (0x00082106) main_mp4_pane_g7

0x6c2d,	// (0x00082112) main_mp4_pane_g8_ParamLimits

0x6c2d,	// (0x00082112) main_mp4_pane_g8

0x703f,	// (0x00082524) aid_call6_pane_g1_size

0x9f25,	// (0x0008540a) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9f25,	// (0x0008540a) list_double_large_graphic_phob2_other_pane

0xae49,	// (0x0008632e) list_double_large_graphic_phob2_other_pane_g1

0xa105,	// (0x000855ea) list_highlight_pane_cp026

0xaae2,	// (0x00085fc7) main_welc_pane_ParamLimits

0x911f,	// (0x00084604) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x911f,	// (0x00084604) main_sp_fs_ctrlbar_pane_g3

0x9137,	// (0x0008461c) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9137,	// (0x0008461c) main_sp_fs_ctrlbar_pane_g4

0x9169,	// (0x0008464e) toolbar2_fixed_button_pane_cp01

0x9174,	// (0x00084659) toolbar2_fixed_button_pane_cp02

0x917f,	// (0x00084664) toolbar2_fixed_button_pane_cp03

0x9f64,	// (0x00085449) list_welc_entry_pane_ParamLimits

0x9f64,	// (0x00085449) list_welc_entry_pane

0x9fbf,	// (0x000854a4) main_welc_pane_g3_ParamLimits

0x9fbf,	// (0x000854a4) main_welc_pane_g3

0x9fe5,	// (0x000854ca) main_welc_pane_t2_ParamLimits

0x9fe5,	// (0x000854ca) main_welc_pane_t2

0x9ff9,	// (0x000854de) main_welc_pane_t3_ParamLimits

0x9ff9,	// (0x000854de) main_welc_pane_t3

0x0002,

0xfef1,	// (0x0008b3d6) main_welc_pane_t_ParamLimits

0xfef1,	// (0x0008b3d6) main_welc_pane_t

0xa00b,	// (0x000854f0) welc_button_pane_ParamLimits

0xa00b,	// (0x000854f0) welc_button_pane

0xa019,	// (0x000854fe) welc_service_logo_pane_ParamLimits

0xa019,	// (0x000854fe) welc_service_logo_pane

0xf05a,	// (0x0008a53f) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0008a53f) list_single_welc_entry_pane

0xf06b,	// (0x0008a550) list_single_welc_entry_pane_g1

0xf073,	// (0x0008a558) list_single_welc_entry_pane_t1

0xf081,	// (0x0008a566) list_single_welc_entry_pane_t2

0x0001,

0x0c1c,	// (0x0007c101) list_single_welc_entry_pane_t

0xa105,	// (0x000855ea) bg_button_pane_cp035

0xf08f,	// (0x0008a574) welc_button_pane_t1

0xf09d,	// (0x0008a582) welc_service_logo_pane_g1

0xf0a6,	// (0x0008a58b) welc_service_logo_pane_g2

0x0001,

0x0c21,	// (0x0007c106) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
