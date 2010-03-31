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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000f6f2 };

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
0xfca0,	// (0x0000f392) Screen

0xfcac,	// (0x0000f39e) application_window

0xfce8,	// (0x0000f3da) area_bottom_pane_ParamLimits

0xfce8,	// (0x0000f3da) area_bottom_pane

0xfd21,	// (0x0000f413) area_top_pane_ParamLimits

0xfd21,	// (0x0000f413) area_top_pane

0x95f2,	// (0x00018ce4) call_video_uplink_pane_ParamLimits

0x95f2,	// (0x00018ce4) call_video_uplink_pane

0xfdaf,	// (0x0000f4a1) main_pane_ParamLimits

0xfdaf,	// (0x0000f4a1) main_pane

0xbeb1,	// (0x0001b5a3) context_pane

0x3930,	// (0x00013022) navi_pane

0x3960,	// (0x00013052) popup_cale_events_window_ParamLimits

0x3960,	// (0x00013052) popup_cale_events_window

0xbec4,	// (0x0001b5b6) popup_mup_playback_window

0x3978,	// (0x0001306a) signal_pane

0x9d73,	// (0x00019465) main_browser_pane

0xa9a0,	// (0x0001a092) main_burst_pane

0x3632,	// (0x00012d24) main_calc_pane

0xbe54,	// (0x0001b546) main_cale_day_pane

0x03ff,	// (0x0000faf1) main_cale_month_pane

0xbe54,	// (0x0001b546) main_cale_week_pane

0xa9a0,	// (0x0001a092) main_call_pane

0x9a31,	// (0x00019123) main_call_poc_pane

0xa9a0,	// (0x0001a092) main_camera_pane

0xa9a0,	// (0x0001a092) main_chi_dic_pane

0xa842,	// (0x00019f34) main_clock_pane

0x9a31,	// (0x00019123) main_fmradio_pane

0xa9a0,	// (0x0001a092) main_graph_messa_pane

0x9a31,	// (0x00019123) main_help_pane

0x9d73,	// (0x00019465) main_im_pane

0x9c8c,	// (0x0001937e) main_image_pane_ParamLimits

0x9c8c,	// (0x0001937e) main_image_pane

0x9a31,	// (0x00019123) main_location2_pane

0xa9a0,	// (0x0001a092) main_location_pane

0x9c8c,	// (0x0001937e) main_messa_pane

0x9a31,	// (0x00019123) main_mp2_pane

0xa9a0,	// (0x0001a092) main_mp_pane

0x9a31,	// (0x00019123) main_msg_pane

0x9a31,	// (0x00019123) main_mup_eq_pane

0x9a31,	// (0x00019123) main_mup_pane

0x9d73,	// (0x00019465) main_notes_pane

0x9a31,	// (0x00019123) main_pec_pane

0x9a31,	// (0x00019123) main_phob_pane

0x9a31,	// (0x00019123) main_pinb_pane

0x9a31,	// (0x00019123) main_postcard_pane

0x9a31,	// (0x00019123) main_qdial_pane

0xa9a0,	// (0x0001a092) main_skin_pane

0x9a31,	// (0x00019123) main_smil2_pane

0xa9a0,	// (0x0001a092) main_smil_pane

0xa9a0,	// (0x0001a092) main_video_pane

0xa9a0,	// (0x0001a092) main_video_tele_pane

0x9c8c,	// (0x0001937e) main_viewer_pane_ParamLimits

0x9c8c,	// (0x0001937e) main_viewer_pane

0xa9a0,	// (0x0001a092) main_vorec_pane

0x3688,	// (0x00012d7a) popup_blid_sat_info_window_ParamLimits

0x3688,	// (0x00012d7a) popup_blid_sat_info_window

0x36ec,	// (0x00012dde) popup_dyc_status_message_window_ParamLimits

0x36ec,	// (0x00012dde) popup_dyc_status_message_window

0x3706,	// (0x00012df8) popup_grid_large_graphic_window_ParamLimits

0x3706,	// (0x00012df8) popup_grid_large_graphic_window

0x37c8,	// (0x00012eba) popup_loc_request_window_ParamLimits

0x37c8,	// (0x00012eba) popup_loc_request_window

0x3904,	// (0x00012ff6) popup_wml_address_window_ParamLimits

0x3904,	// (0x00012ff6) popup_wml_address_window

0x3470,	// (0x00012b62) call_muted_g1

0x3104,	// (0x000127f6) popup_call_audio_conf_window_ParamLimits

0x3104,	// (0x000127f6) popup_call_audio_conf_window

0x3480,	// (0x00012b72) popup_call_audio_first_window_ParamLimits

0x3480,	// (0x00012b72) popup_call_audio_first_window

0x34f6,	// (0x00012be8) popup_call_audio_in_window_ParamLimits

0x34f6,	// (0x00012be8) popup_call_audio_in_window

0x3532,	// (0x00012c24) popup_call_audio_out_window_ParamLimits

0x3532,	// (0x00012c24) popup_call_audio_out_window

0x356c,	// (0x00012c5e) popup_call_audio_second_window_ParamLimits

0x356c,	// (0x00012c5e) popup_call_audio_second_window

0x35c2,	// (0x00012cb4) popup_call_audio_wait_window_ParamLimits

0x35c2,	// (0x00012cb4) popup_call_audio_wait_window

0x35f7,	// (0x00012ce9) popup_number_entry_window_ParamLimits

0x35f7,	// (0x00012ce9) popup_number_entry_window

0x961e,	// (0x00018d10) bg_popup_call_pane_cp05_ParamLimits

0x961e,	// (0x00018d10) bg_popup_call_pane_cp05

0x963e,	// (0x00018d30) popup_number_entry_window_t1

0x9651,	// (0x00018d43) popup_number_entry_window_t2

0x9663,	// (0x00018d55) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0001e7bf) popup_number_entry_window_t

0x9675,	// (0x00018d67) text_title_cp2

0x9688,	// (0x00018d7a) bg_popup_call_pane_cp_ParamLimits

0x9688,	// (0x00018d7a) bg_popup_call_pane_cp

0x9696,	// (0x00018d88) call_thumbnail_pane

0x969e,	// (0x00018d90) popup_call_audio_in_window_g1_ParamLimits

0x969e,	// (0x00018d90) popup_call_audio_in_window_g1

0x96aa,	// (0x00018d9c) popup_call_audio_in_window_g2_ParamLimits

0x96aa,	// (0x00018d9c) popup_call_audio_in_window_g2

0x96b6,	// (0x00018da8) popup_call_audio_in_window_g3_ParamLimits

0x96b6,	// (0x00018da8) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0001e7c8) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0001e7c8) popup_call_audio_in_window_g

0x96c2,	// (0x00018db4) popup_call_audio_in_window_t1_ParamLimits

0x96c2,	// (0x00018db4) popup_call_audio_in_window_t1

0x96de,	// (0x00018dd0) popup_call_audio_in_window_t2_ParamLimits

0x96de,	// (0x00018dd0) popup_call_audio_in_window_t2

0x96fa,	// (0x00018dec) popup_call_audio_in_window_t3_ParamLimits

0x96fa,	// (0x00018dec) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0001e7cf) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0001e7cf) popup_call_audio_in_window_t

0x9688,	// (0x00018d7a) bg_popup_call_pane_cp01_ParamLimits

0x9688,	// (0x00018d7a) bg_popup_call_pane_cp01

0x9696,	// (0x00018d88) call_thumbnail_pane_cp02

0x970d,	// (0x00018dff) call_type_pane_cp022

0x9715,	// (0x00018e07) popup_call_audio_out_window_g1_ParamLimits

0x9715,	// (0x00018e07) popup_call_audio_out_window_g1

0x9727,	// (0x00018e19) popup_call_audio_out_window_g2_ParamLimits

0x9727,	// (0x00018e19) popup_call_audio_out_window_g2

0x9733,	// (0x00018e25) popup_call_audio_out_window_g3_ParamLimits

0x9733,	// (0x00018e25) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0001e7d6) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0001e7d6) popup_call_audio_out_window_g

0x9745,	// (0x00018e37) popup_call_audio_out_window_t1_ParamLimits

0x9745,	// (0x00018e37) popup_call_audio_out_window_t1

0x975d,	// (0x00018e4f) popup_call_audio_out_window_t2_ParamLimits

0x975d,	// (0x00018e4f) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0001e7dd) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0001e7dd) popup_call_audio_out_window_t

0x9772,	// (0x00018e64) bg_popup_call_pane_ParamLimits

0x9772,	// (0x00018e64) bg_popup_call_pane

0xff6e,	// (0x0000f660) call_thumbnail_pane_cp_ParamLimits

0xff6e,	// (0x0000f660) call_thumbnail_pane_cp

0x97f6,	// (0x00018ee8) call_type_pane_cp01_ParamLimits

0x97f6,	// (0x00018ee8) call_type_pane_cp01

0x983a,	// (0x00018f2c) popup_call_audio_first_window_g1_ParamLimits

0x983a,	// (0x00018f2c) popup_call_audio_first_window_g1

0x9886,	// (0x00018f78) popup_call_audio_first_window_g2_ParamLimits

0x9886,	// (0x00018f78) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0001e7e2) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0001e7e2) popup_call_audio_first_window_g

0x98ca,	// (0x00018fbc) popup_call_audio_first_window_t1_ParamLimits

0x98ca,	// (0x00018fbc) popup_call_audio_first_window_t1

0x9976,	// (0x00019068) popup_call_audio_first_window_t4_ParamLimits

0x9976,	// (0x00019068) popup_call_audio_first_window_t4

0x9a02,	// (0x000190f4) popup_call_audio_first_window_t5_ParamLimits

0x9a02,	// (0x000190f4) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0001e7e7) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0001e7e7) popup_call_audio_first_window_t

0x9a31,	// (0x00019123) bg_popup_call_pane_cp02

0x9a3b,	// (0x0001912d) call_type_pane_cp023

0x9a43,	// (0x00019135) popup_call_audio_wait_window_g1

0x9a4b,	// (0x0001913d) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0001e7ee) popup_call_audio_wait_window_g

0x9a53,	// (0x00019145) popup_call_audio_wait_window_t3

0x9a61,	// (0x00019153) bg_popup_call_pane_cp03_ParamLimits

0x9a61,	// (0x00019153) bg_popup_call_pane_cp03

0x9ac1,	// (0x000191b3) call_thumbnail_pane_cp011_ParamLimits

0x9ac1,	// (0x000191b3) call_thumbnail_pane_cp011

0x9acd,	// (0x000191bf) call_type_pane_cp034_ParamLimits

0x9acd,	// (0x000191bf) call_type_pane_cp034

0x9b09,	// (0x000191fb) popup_call_audio_second_window_g1_ParamLimits

0x9b09,	// (0x000191fb) popup_call_audio_second_window_g1

0x9b45,	// (0x00019237) popup_call_audio_second_window_g2_ParamLimits

0x9b45,	// (0x00019237) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0001e7f3) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0001e7f3) popup_call_audio_second_window_g

0x9b81,	// (0x00019273) popup_call_audio_second_window_t1_ParamLimits

0x9b81,	// (0x00019273) popup_call_audio_second_window_t1

0x9c02,	// (0x000192f4) popup_call_audio_second_window_t2_ParamLimits

0x9c02,	// (0x000192f4) popup_call_audio_second_window_t2

0x9c38,	// (0x0001932a) popup_call_audio_second_window_t3_ParamLimits

0x9c38,	// (0x0001932a) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0001e7f8) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0001e7f8) popup_call_audio_second_window_t

0x9a31,	// (0x00019123) bg_popup_call_pane_cp04

0x9c6e,	// (0x00019360) list_conf_pane

0x9c76,	// (0x00019368) popup_call_audio_conf_window_t1

0x9c84,	// (0x00019376) call_thumbnail_pane_g1

0x9c8c,	// (0x0001937e) bg_pinb_pane_ParamLimits

0x9c8c,	// (0x0001937e) bg_pinb_pane

0x9c9a,	// (0x0001938c) find_pinb_pane

0x9ca3,	// (0x00019395) listscroll_pinb_pane_ParamLimits

0x9ca3,	// (0x00019395) listscroll_pinb_pane

0x9cb2,	// (0x000193a4) pinb_bg_pane_g1

0xff92,	// (0x0000f684) pinb_bg_pane_g2

0xff9e,	// (0x0000f690) pinb_bg_pane_g3

0xffaa,	// (0x0000f69c) pinb_bg_pane_g4

0xffb6,	// (0x0000f6a8) pinb_bg_pane_g5

0xffc2,	// (0x0000f6b4) pinb_bg_pane_g6

0xffcd,	// (0x0000f6bf) pinb_bg_pane_g7

0xffd8,	// (0x0000f6ca) pinb_bg_pane_g8

0xffe3,	// (0x0000f6d5) pinb_bg_pane_g9

0xffed,	// (0x0000f6df) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0001e7ff) pinb_bg_pane_g

0x000a,	// (0x0000f6fc) grid_pinb_pane

0x0015,	// (0x0000f707) list_pinb_pane

0x0020,	// (0x0000f712) scroll_pane_cp01_ParamLimits

0x0020,	// (0x0000f712) scroll_pane_cp01

0x9cbc,	// (0x000193ae) find_pinb_pane_g1_ParamLimits

0x9cbc,	// (0x000193ae) find_pinb_pane_g1

0x9cd4,	// (0x000193c6) find_pinb_pane_t1

0x9ce6,	// (0x000193d8) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0001e819) find_pinb_pane_t

0x9cfb,	// (0x000193ed) input_focus_pane_cp01_ParamLimits

0x9cfb,	// (0x000193ed) input_focus_pane_cp01

0x0032,	// (0x0000f724) cell_pinb_pane_ParamLimits

0x0032,	// (0x0000f724) cell_pinb_pane

0x0054,	// (0x0000f746) cell_pinb_pane_g1_ParamLimits

0x0054,	// (0x0000f746) cell_pinb_pane_g1

0x0069,	// (0x0000f75b) cell_pinb_pane_g2_ParamLimits

0x0069,	// (0x0000f75b) cell_pinb_pane_g2

0x9d07,	// (0x000193f9) cell_pinb_pane_g3_ParamLimits

0x9d07,	// (0x000193f9) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0001e81e) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0001e81e) cell_pinb_pane_g

0x9a31,	// (0x00019123) grid_highlight_pane_cp01

0x0075,	// (0x0000f767) list_pinb_item_pane_ParamLimits

0x0075,	// (0x0000f767) list_pinb_item_pane

0x9a31,	// (0x00019123) list_highlight_pane_cp02

0x0087,	// (0x0000f779) list_pinb_item_pane_g1_ParamLimits

0x0087,	// (0x0000f779) list_pinb_item_pane_g1

0x0094,	// (0x0000f786) list_pinb_item_pane_g2_ParamLimits

0x0094,	// (0x0000f786) list_pinb_item_pane_g2

0x00a0,	// (0x0000f792) list_pinb_item_pane_g3_ParamLimits

0x00a0,	// (0x0000f792) list_pinb_item_pane_g3

0x00b1,	// (0x0000f7a3) list_pinb_item_pane_g4_ParamLimits

0x00b1,	// (0x0000f7a3) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0001e825) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0001e825) list_pinb_item_pane_g

0x00bd,	// (0x0000f7af) list_pinb_item_pane_t1_ParamLimits

0x00bd,	// (0x0000f7af) list_pinb_item_pane_t1

0x00f2,	// (0x0000f7e4) calc_display_pane

0x011a,	// (0x0000f80c) calc_paper_pane

0x013d,	// (0x0000f82f) grid_calc_pane

0x9a31,	// (0x00019123) bg_list_pane_cp01

0x016b,	// (0x0000f85d) clock_g1

0x0173,	// (0x0000f865) clock_g2

0x0001,

0xf13c,	// (0x0001e82e) clock_g

0x017b,	// (0x0000f86d) clock_t1_ParamLimits

0x017b,	// (0x0000f86d) clock_t1

0x0190,	// (0x0000f882) clock_t2_ParamLimits

0x0190,	// (0x0000f882) clock_t2

0x01a2,	// (0x0000f894) clock_t3_ParamLimits

0x01a2,	// (0x0000f894) clock_t3

0x01b4,	// (0x0000f8a6) clock_t4_ParamLimits

0x01b4,	// (0x0000f8a6) clock_t4

0x01c6,	// (0x0000f8b8) clock_t5_ParamLimits

0x01c6,	// (0x0000f8b8) clock_t5

0x01db,	// (0x0000f8cd) clock_t6_ParamLimits

0x01db,	// (0x0000f8cd) clock_t6

0x01ed,	// (0x0000f8df) clock_t7_ParamLimits

0x01ed,	// (0x0000f8df) clock_t7

0x01ff,	// (0x0000f8f1) clock_t8_ParamLimits

0x01ff,	// (0x0000f8f1) clock_t8

0x0213,	// (0x0000f905) clock_t9_ParamLimits

0x0213,	// (0x0000f905) clock_t9

0x0008,

0xf141,	// (0x0001e833) clock_t_ParamLimits

0xf141,	// (0x0001e833) clock_t

0x9d1b,	// (0x0001940d) popup_clock_analogue_window_cp02

0x9d1b,	// (0x0001940d) popup_clock_digital_window_cp01

0x9d23,	// (0x00019415) listscroll_help_pane

0x9a31,	// (0x00019123) phob_pre_status_pane

0x9d2d,	// (0x0001941f) grid_qdial_pane

0x9c8c,	// (0x0001937e) listscroll_mce_pane

0x9c8c,	// (0x0001937e) bg_notes_pane

0x9d37,	// (0x00019429) list_notes_pane

0x0229,	// (0x0000f91b) scroll_pane_cp06

0x9d45,	// (0x00019437) bg_calc_paper_pane

0x9d59,	// (0x0001944b) list_calc_pane

0x9d73,	// (0x00019465) bg_calc_display_pane

0x023d,	// (0x0000f92f) calc_display_pane_t1

0x024f,	// (0x0000f941) calc_display_pane_t2

0x9d7f,	// (0x00019471) calc_display_pane_t3

0x0002,

0xf154,	// (0x0001e846) calc_display_pane_t

0x0261,	// (0x0000f953) cell_calc_pane_ParamLimits

0x0261,	// (0x0000f953) cell_calc_pane

0x9d91,	// (0x00019483) bg_calc_paper_pane_g1

0x9d9d,	// (0x0001948f) bg_calc_paper_pane_g2

0x9da9,	// (0x0001949b) bg_calc_paper_pane_g3

0x9db5,	// (0x000194a7) bg_calc_paper_pane_g4

0x9dc1,	// (0x000194b3) bg_calc_paper_pane_g5

0x029e,	// (0x0000f990) bg_calc_paper_pane_g6

0x02b1,	// (0x0000f9a3) bg_calc_paper_pane_g7

0x02c4,	// (0x0000f9b6) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0001e84d) bg_calc_paper_pane_g

0x02d5,	// (0x0000f9c7) calc_bg_paper_pane_g9

0x02e6,	// (0x0000f9d8) list_calc_item_pane_ParamLimits

0x02e6,	// (0x0000f9d8) list_calc_item_pane

0x9dcd,	// (0x000194bf) list_calc_item_pane_g1

0x9dda,	// (0x000194cc) list_calc_item_pane_t1_ParamLimits

0x9dda,	// (0x000194cc) list_calc_item_pane_t1

0x02fe,	// (0x0000f9f0) list_calc_item_pane_t2_ParamLimits

0x02fe,	// (0x0000f9f0) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0001e85e) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0001e85e) list_calc_item_pane_t

0x9dec,	// (0x000194de) cell_calc_pane_g1

0x9df6,	// (0x000194e8) grid_highlight_pane_cp02

0x9e18,	// (0x0001950a) bg_calc_display_pane_g1

0x9e21,	// (0x00019513) bg_calc_display_pane_g2

0x9e2b,	// (0x0001951d) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0001e868) bg_calc_display_pane_g

0x0330,	// (0x0000fa22) cell_qdial_pane_ParamLimits

0x0330,	// (0x0000fa22) cell_qdial_pane

0x0344,	// (0x0000fa36) cell_qdial_pane_g1_ParamLimits

0x0344,	// (0x0000fa36) cell_qdial_pane_g1

0x035a,	// (0x0000fa4c) cell_qdial_pane_g2_ParamLimits

0x035a,	// (0x0000fa4c) cell_qdial_pane_g2

0x9e34,	// (0x00019526) cell_qdial_pane_g3_ParamLimits

0x9e34,	// (0x00019526) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0001e86f) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0001e86f) cell_qdial_pane_g

0x0381,	// (0x0000fa73) cell_qdial_pane_t1_ParamLimits

0x0381,	// (0x0000fa73) cell_qdial_pane_t1

0x0399,	// (0x0000fa8b) cell_qdial_pane_t2_ParamLimits

0x0399,	// (0x0000fa8b) cell_qdial_pane_t2

0x03ac,	// (0x0000fa9e) cell_qdial_pane_t3_ParamLimits

0x03ac,	// (0x0000fa9e) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0001e878) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0001e878) cell_qdial_pane_t

0x9a31,	// (0x00019123) grid_highlight_pane_cp04

0x9e40,	// (0x00019532) thumbnail_qdial_pane_ParamLimits

0x9e40,	// (0x00019532) thumbnail_qdial_pane

0x9e9c,	// (0x0001958e) list_help_pane

0x9ea5,	// (0x00019597) scroll_pane_cp02

0x03bf,	// (0x0000fab1) help_list_pane_t1_ParamLimits

0x03bf,	// (0x0000fab1) help_list_pane_t1

0x9eae,	// (0x000195a0) bg_notes_pane_g2

0x9eb6,	// (0x000195a8) bg_notes_pane_g3

0x9ebe,	// (0x000195b0) notes_bg_pane_g1

0x9ec6,	// (0x000195b8) notes_bg_pane_g4

0x9ece,	// (0x000195c0) notes_bg_pane_g5

0x9ed6,	// (0x000195c8) notes_bg_pane_g6

0x9ede,	// (0x000195d0) notes_bg_pane_g7

0x9ee6,	// (0x000195d8) notes_bg_pane_g8

0x9eee,	// (0x000195e0) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0001e896) notes_bg_pane_g

0x03dd,	// (0x0000facf) list_notes_text_pane_ParamLimits

0x03dd,	// (0x0000facf) list_notes_text_pane

0x9ef6,	// (0x000195e8) list_notes_text_pane_g1

0x03f1,	// (0x0000fae3) list_notes_text_pane_t1

0x03ff,	// (0x0000faf1) listscroll_cale_week_pane

0x0435,	// (0x0000fb27) bg_cale_heading_pane

0x9f10,	// (0x00019602) bg_cale_pane_cp01

0x045e,	// (0x0000fb50) cale_week_corner_pane

0x047d,	// (0x0000fb6f) cale_week_day_heading_pane

0x04ab,	// (0x0000fb9d) cale_week_scroll_pane_g1

0x04cf,	// (0x0000fbc1) cale_week_scroll_pane_g2

0x04e7,	// (0x0000fbd9) cale_week_scroll_pane_g3

0x04ff,	// (0x0000fbf1) cale_week_scroll_pane_g4

0x051b,	// (0x0000fc0d) cale_week_scroll_pane_g5

0x053b,	// (0x0000fc2d) cale_week_scroll_pane_g6

0x055b,	// (0x0000fc4d) cale_week_scroll_pane_g7

0x057f,	// (0x0000fc71) cale_week_scroll_pane_g8

0x05a3,	// (0x0000fc95) cale_week_scroll_pane_g9

0x05c0,	// (0x0000fcb2) cale_week_scroll_pane_g10

0x05dd,	// (0x0000fccf) cale_week_scroll_pane_g11

0x05fa,	// (0x0000fcec) cale_week_scroll_pane_g12

0x0617,	// (0x0000fd09) cale_week_scroll_pane_g13

0x0634,	// (0x0000fd26) cale_week_scroll_pane_g14

0x065d,	// (0x0000fd4f) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0001e8a5) cale_week_scroll_pane_g

0x0686,	// (0x0000fd78) cale_week_time_pane

0x06aa,	// (0x0000fd9c) grid_cale_week_pane

0x9f40,	// (0x00019632) scroll_pane_cp08

0x06e1,	// (0x0000fdd3) cell_cale_week_pane_ParamLimits

0x06e1,	// (0x0000fdd3) cell_cale_week_pane

0x0771,	// (0x0000fe63) cale_week_day_heading_pane_t1

0x07bb,	// (0x0000fead) cale_week_day_heading_pane_t2

0x080a,	// (0x0000fefc) cale_week_day_heading_pane_t3

0x0859,	// (0x0000ff4b) cale_week_day_heading_pane_t4

0x08a8,	// (0x0000ff9a) cale_week_day_heading_pane_t5

0x08fb,	// (0x0000ffed) cale_week_day_heading_pane_t6

0x0952,	// (0x00010044) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0001e8c4) cale_week_day_heading_pane_t

0x9f62,	// (0x00019654) bg_cale_side_pane

0x099c,	// (0x0001008e) cale_week_time_pane_t1

0x09d6,	// (0x000100c8) cale_week_time_pane_t2

0x0a10,	// (0x00010102) cale_week_time_pane_t3

0x0a4a,	// (0x0001013c) cale_week_time_pane_t4

0x0a84,	// (0x00010176) cale_week_time_pane_t5

0x0abe,	// (0x000101b0) cale_week_time_pane_t6

0x0af8,	// (0x000101ea) cale_week_time_pane_t7

0x0b32,	// (0x00010224) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0001e8d3) cale_week_time_pane_t

0x0b72,	// (0x00010264) cell_cale_week_pane_g2

0x0b91,	// (0x00010283) cell_cale_week_pane_g3_ParamLimits

0x0b91,	// (0x00010283) cell_cale_week_pane_g3

0x9f70,	// (0x00019662) grid_highlight_pane_cp07

0x9f78,	// (0x0001966a) listscroll_gms_pane

0x9f82,	// (0x00019674) grid_gms_pane

0x9f8b,	// (0x0001967d) listscroll_gms_pane_g1

0x9f93,	// (0x00019685) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0001e8e4) listscroll_gms_pane_g

0x0ba9,	// (0x0001029b) scroll_pane_cp010

0x0bb4,	// (0x000102a6) cell_gms_pane_ParamLimits

0x0bb4,	// (0x000102a6) cell_gms_pane

0x0bce,	// (0x000102c0) cell_gms_pane_g1

0x9f9b,	// (0x0001968d) cell_gms_pane_g2

0x9fa3,	// (0x00019695) cell_gms_pane_g3

0x9fac,	// (0x0001969e) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0001e8e9) cell_gms_pane_g

0x9fb5,	// (0x000196a7) grid_highlight_pane_cp09

0x3418,	// (0x00012b0a) phob_pre_status_pane_g1

0x3420,	// (0x00012b12) phob_pre_status_pane_g2

0x3428,	// (0x00012b1a) phob_pre_status_pane_g3

0x3430,	// (0x00012b22) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0001ecd8) phob_pre_status_pane_g

0x3440,	// (0x00012b32) phob_pre_status_pane_t1

0x3450,	// (0x00012b42) phob_pre_status_pane_t2

0x3460,	// (0x00012b52) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0001ece3) phob_pre_status_pane_t

0x9a31,	// (0x00019123) bg_list_pane_cp05

0x0bde,	// (0x000102d0) grid_vorec_pane

0x0bea,	// (0x000102dc) vorec_t1

0x0bf8,	// (0x000102ea) vorec_t2

0x0c06,	// (0x000102f8) vorec_t3

0x0c14,	// (0x00010306) vorec_t4

0x0c22,	// (0x00010314) vorec_t5

0x9fbd,	// (0x000196af) vorec_t6

0x0006,

0xf200,	// (0x0001e8f2) vorec_t

0x0c3e,	// (0x00010330) wait_bar_pane_cp01

0x0c46,	// (0x00010338) cell_vorec_pane_ParamLimits

0x0c46,	// (0x00010338) cell_vorec_pane

0x9fcb,	// (0x000196bd) cell_vorec_pane_g1

0x9a31,	// (0x00019123) grid_highlight_pane_cp05

0x0c71,	// (0x00010363) cams_zoom_pane

0x0c80,	// (0x00010372) image_vga_pane

0x0c9a,	// (0x0001038c) main_camera_pane_g1

0x0cac,	// (0x0001039e) main_camera_pane_g2

0x0cbc,	// (0x000103ae) main_camera_pane_g3

0x0cd0,	// (0x000103c2) main_camera_pane_g4

0x0ce4,	// (0x000103d6) main_camera_pane_g5

0x0cf8,	// (0x000103ea) main_camera_pane_g6

0x0d0c,	// (0x000103fe) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0001e901) main_camera_pane_g

0x0d20,	// (0x00010412) main_camera_pane_t1

0x0d36,	// (0x00010428) main_camera_pane_t2

0x0001,

0xf220,	// (0x0001e912) main_camera_pane_t

0x0d74,	// (0x00010466) cams_zoom_pane_cp_ParamLimits

0x0d74,	// (0x00010466) cams_zoom_pane_cp

0x0d9c,	// (0x0001048e) image_cif_pane_ParamLimits

0x0d9c,	// (0x0001048e) image_cif_pane

0x0dd7,	// (0x000104c9) image_subqcif_pane

0x0de1,	// (0x000104d3) main_video_pane_g1_ParamLimits

0x0de1,	// (0x000104d3) main_video_pane_g1

0x0e05,	// (0x000104f7) main_video_pane_g2_ParamLimits

0x0e05,	// (0x000104f7) main_video_pane_g2

0x0e3b,	// (0x0001052d) main_video_pane_g3_ParamLimits

0x0e3b,	// (0x0001052d) main_video_pane_g3

0x0e69,	// (0x0001055b) main_video_pane_g4_ParamLimits

0x0e69,	// (0x0001055b) main_video_pane_g4

0x0e97,	// (0x00010589) main_video_pane_g5_ParamLimits

0x0e97,	// (0x00010589) main_video_pane_g5

0x9fe1,	// (0x000196d3) main_video_pane_g6_ParamLimits

0x9fe1,	// (0x000196d3) main_video_pane_g6

0x0006,

0xf225,	// (0x0001e917) main_video_pane_g_ParamLimits

0xf225,	// (0x0001e917) main_video_pane_g

0x0ec0,	// (0x000105b2) main_video_pane_t1_ParamLimits

0x0ec0,	// (0x000105b2) main_video_pane_t1

0x9ffb,	// (0x000196ed) cams_zoom_pane_g1

0xa004,	// (0x000196f6) cams_zoom_pane_g2

0xa00d,	// (0x000196ff) cams_zoom_pane_g3

0xa016,	// (0x00019708) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0001e926) cams_zoom_pane_g

0x0f1d,	// (0x0001060f) grid_cams_pane

0x0f37,	// (0x00010629) linegrid_cams_pane

0x0f49,	// (0x0001063b) cell_cams_pane_ParamLimits

0x0f49,	// (0x0001063b) cell_cams_pane

0xa01f,	// (0x00019711) cams_burst_image_pane

0xa027,	// (0x00019719) cell_cams_pane_g1

0x9a31,	// (0x00019123) grid_highlight_pane_cp03

0x9dec,	// (0x000194de) mp_bg_pane_g1

0x9a31,	// (0x00019123) bg_list_pane_cp03

0xbd77,	// (0x0001b469) bg_mp_pane

0xbd7f,	// (0x0001b471) grid_mp_pane

0xbd87,	// (0x0001b479) media_player_g1

0xbd91,	// (0x0001b483) media_player_t1

0xbd9f,	// (0x0001b491) media_player_t2

0xbdad,	// (0x0001b49f) media_player_t3

0xbdbb,	// (0x0001b4ad) media_player_t4

0xbdc9,	// (0x0001b4bb) media_player_t5

0xbdd7,	// (0x0001b4c9) media_player_t6

0xbde5,	// (0x0001b4d7) media_player_t7

0x0006,

0xf5d0,	// (0x0001ecc2) media_player_t

0xbdf3,	// (0x0001b4e5) wait_bar_pane_cp02

0xf5b5,	// (0x0001eca7) main_usb_pane_t

0x340f,	// (0x00012b01) cell_mp_pane

0x9dec,	// (0x000194de) cell_mp_pane_g1

0x9a31,	// (0x00019123) grid_highlight_pane_cp06

0xa02f,	// (0x00019721) grid_skin_colour_pane

0xa037,	// (0x00019729) list_highlight_pane_cp03

0x106f,	// (0x00010761) skin_g1

0xa03f,	// (0x00019731) skin_t1

0xa04e,	// (0x00019740) skin_t2

0x0001,

0xf269,	// (0x0001e95b) skin_t

0x1077,	// (0x00010769) cell_skin_colour_pane_ParamLimits

0x1077,	// (0x00010769) cell_skin_colour_pane

0xa05c,	// (0x0001974e) cell_skin_colour_pane_g1

0x10ea,	// (0x000107dc) call_video_g1_ParamLimits

0x10ea,	// (0x000107dc) call_video_g1

0x1106,	// (0x000107f8) call_video_g2_ParamLimits

0x1106,	// (0x000107f8) call_video_g2

0x0001,

0xf26e,	// (0x0001e960) call_video_g_ParamLimits

0xf26e,	// (0x0001e960) call_video_g

0x114b,	// (0x0001083d) call_video_uplink_pane_cp1_ParamLimits

0x114b,	// (0x0001083d) call_video_uplink_pane_cp1

0xa06e,	// (0x00019760) call_video_uplink_pane_cp2

0x11ec,	// (0x000108de) video_down_crop_pane_ParamLimits

0x11ec,	// (0x000108de) video_down_crop_pane

0x12d5,	// (0x000109c7) video_down_pane_ParamLimits

0x12d5,	// (0x000109c7) video_down_pane

0xa076,	// (0x00019768) video_down_subqcif_pane_ParamLimits

0xa076,	// (0x00019768) video_down_subqcif_pane

0xa090,	// (0x00019782) video_down_subqcif_pane_cp_ParamLimits

0xa090,	// (0x00019782) video_down_subqcif_pane_cp

0xa0b8,	// (0x000197aa) im_reading_pane_ParamLimits

0xa0b8,	// (0x000197aa) im_reading_pane

0x13de,	// (0x00010ad0) im_writing_pane_ParamLimits

0x13de,	// (0x00010ad0) im_writing_pane

0x13fa,	// (0x00010aec) im_reading_pane_t1

0xa0d2,	// (0x000197c4) list_im_pane

0xa0e3,	// (0x000197d5) scroll_pane_cp07

0x1436,	// (0x00010b28) im_writing_pane_t1_ParamLimits

0x1436,	// (0x00010b28) im_writing_pane_t1

0xa0fc,	// (0x000197ee) im_writing_pane_t2_ParamLimits

0xa0fc,	// (0x000197ee) im_writing_pane_t2

0x0001,

0xf278,	// (0x0001e96a) im_writing_pane_t_ParamLimits

0xf278,	// (0x0001e96a) im_writing_pane_t

0x9a31,	// (0x00019123) input_focus_pane_cp04

0x9a31,	// (0x00019123) input_focus_pane_cp05

0x144b,	// (0x00010b3d) list_im_single_pane_ParamLimits

0x144b,	// (0x00010b3d) list_im_single_pane

0x1461,	// (0x00010b53) list_single_im_pane_t1

0x33cf,	// (0x00012ac1) blid_accuracy_pane

0x33d7,	// (0x00012ac9) blid_compass_pane

0x33e1,	// (0x00012ad3) main_location_t1

0x33f1,	// (0x00012ae3) main_location_t2

0x3401,	// (0x00012af3) main_location_t3

0x0002,

0xf5df,	// (0x0001ecd1) main_location_t

0x9a31,	// (0x00019123) aid_levels_location

0x9dec,	// (0x000194de) blid_accuracy_pane_g1

0x9dec,	// (0x000194de) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0001e9cc) blid_accuracy_pane_g

0xa144,	// (0x00019836) wml_content_pane

0xa182,	// (0x00019874) wml_button_pane_ParamLimits

0xa182,	// (0x00019874) wml_button_pane

0x1470,	// (0x00010b62) wml_list_single_large_pane_ParamLimits

0x1470,	// (0x00010b62) wml_list_single_large_pane

0x1486,	// (0x00010b78) wml_list_single_medium_pane_ParamLimits

0x1486,	// (0x00010b78) wml_list_single_medium_pane

0x149d,	// (0x00010b8f) wml_list_single_small_pane_ParamLimits

0x149d,	// (0x00010b8f) wml_list_single_small_pane

0xa196,	// (0x00019888) wml_selection_box_pane_ParamLimits

0xa196,	// (0x00019888) wml_selection_box_pane

0xa1a9,	// (0x0001989b) wml_list_single_pane_t1

0xa1b8,	// (0x000198aa) wml_list_single_medium_pane_t1

0xa1c7,	// (0x000198b9) wml_list_single_large_pane_t1

0xa1d6,	// (0x000198c8) input_focus_pane_cp02_ParamLimits

0xa1d6,	// (0x000198c8) input_focus_pane_cp02

0xa1e9,	// (0x000198db) wml_selection_box_pane_g1

0xa1f2,	// (0x000198e4) wml_selection_box_pane_t1_ParamLimits

0xa1f2,	// (0x000198e4) wml_selection_box_pane_t1

0x9c8c,	// (0x0001937e) bg_wml_button_pane_ParamLimits

0x9c8c,	// (0x0001937e) bg_wml_button_pane

0xa20a,	// (0x000198fc) wml_button_pane_g1

0xa212,	// (0x00019904) wml_button_pane_t1

0xa20a,	// (0x000198fc) wml_button_bg_pane_g1

0xa222,	// (0x00019914) wml_button_bg_pane_g2

0xa22a,	// (0x0001991c) wml_button_bg_pane_g3

0xa232,	// (0x00019924) wml_button_bg_pane_g4

0xa23a,	// (0x0001992c) wml_button_bg_pane_g5

0xa242,	// (0x00019934) wml_button_bg_pane_g6

0xa24a,	// (0x0001993c) wml_button_bg_pane_g7

0xa252,	// (0x00019944) wml_button_bg_pane_g8

0xa25a,	// (0x0001994c) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0001e96f) wml_button_bg_pane_g

0x14b9,	// (0x00010bab) bg_list_pane_cp02

0xa262,	// (0x00019954) mce_header_pane_ParamLimits

0xa262,	// (0x00019954) mce_header_pane

0xa278,	// (0x0001996a) mce_icon_pane

0xa278,	// (0x0001996a) mce_image_pane

0xa281,	// (0x00019973) mce_text_pane_ParamLimits

0xa281,	// (0x00019973) mce_text_pane

0x14c3,	// (0x00010bb5) scroll_pane_cp03

0xa17a,	// (0x0001986c) scroll_pane_cp04

0xa294,	// (0x00019986) scroll_pane_cp05_ParamLimits

0xa294,	// (0x00019986) scroll_pane_cp05

0x14cd,	// (0x00010bbf) mce_header_field_pane_ParamLimits

0x14cd,	// (0x00010bbf) mce_header_field_pane

0x14e6,	// (0x00010bd8) mce_header_field_pane_2_ParamLimits

0x14e6,	// (0x00010bd8) mce_header_field_pane_2

0x14fc,	// (0x00010bee) mce_header_field_pane_3

0x1504,	// (0x00010bf6) list_single_mce_message_pane_ParamLimits

0x1504,	// (0x00010bf6) list_single_mce_message_pane

0x151d,	// (0x00010c0f) list_single_mce_smart_pane_ParamLimits

0x151d,	// (0x00010c0f) list_single_mce_smart_pane

0xa2a0,	// (0x00019992) input_focus_pane_cp03

0xa2a9,	// (0x0001999b) list_header_data_pane

0x1541,	// (0x00010c33) mce_header_field_pane_t1

0x1551,	// (0x00010c43) list_single_mce_header_pane_ParamLimits

0x1551,	// (0x00010c43) list_single_mce_header_pane

0xa2b1,	// (0x000199a3) list_single_mce_header_pane_t1

0xa2c0,	// (0x000199b2) list_single_mce_message_pane_g1

0xa2c8,	// (0x000199ba) list_single_mce_message_pane_t1

0x158b,	// (0x00010c7d) bg_cale_heading_pane_cp01_ParamLimits

0x158b,	// (0x00010c7d) bg_cale_heading_pane_cp01

0xa2d6,	// (0x000199c8) bg_cale_pane_cp02_ParamLimits

0xa2d6,	// (0x000199c8) bg_cale_pane_cp02

0x15d2,	// (0x00010cc4) cale_month_corner_pane

0x15f1,	// (0x00010ce3) cale_month_day_heading_pane_ParamLimits

0x15f1,	// (0x00010ce3) cale_month_day_heading_pane

0x1650,	// (0x00010d42) cale_month_pane_g1_ParamLimits

0x1650,	// (0x00010d42) cale_month_pane_g1

0x168c,	// (0x00010d7e) cale_month_pane_g2_ParamLimits

0x168c,	// (0x00010d7e) cale_month_pane_g2

0x16c8,	// (0x00010dba) cale_month_pane_g3_ParamLimits

0x16c8,	// (0x00010dba) cale_month_pane_g3

0x171c,	// (0x00010e0e) cale_month_pane_g4_ParamLimits

0x171c,	// (0x00010e0e) cale_month_pane_g4

0x1770,	// (0x00010e62) cale_month_pane_g5_ParamLimits

0x1770,	// (0x00010e62) cale_month_pane_g5

0x17cc,	// (0x00010ebe) cale_month_pane_g6_ParamLimits

0x17cc,	// (0x00010ebe) cale_month_pane_g6

0x1830,	// (0x00010f22) cale_month_pane_g7_ParamLimits

0x1830,	// (0x00010f22) cale_month_pane_g7

0x189c,	// (0x00010f8e) cale_month_pane_g8_ParamLimits

0x189c,	// (0x00010f8e) cale_month_pane_g8

0x1908,	// (0x00010ffa) cale_month_pane_g9_ParamLimits

0x1908,	// (0x00010ffa) cale_month_pane_g9

0x1966,	// (0x00011058) cale_month_pane_g10_ParamLimits

0x1966,	// (0x00011058) cale_month_pane_g10

0x19b8,	// (0x000110aa) cale_month_pane_g11_ParamLimits

0x19b8,	// (0x000110aa) cale_month_pane_g11

0x1a0a,	// (0x000110fc) cale_month_pane_g12_ParamLimits

0x1a0a,	// (0x000110fc) cale_month_pane_g12

0x1a62,	// (0x00011154) cale_month_pane_g13_ParamLimits

0x1a62,	// (0x00011154) cale_month_pane_g13

0x000c,

0xf290,	// (0x0001e982) cale_month_pane_g_ParamLimits

0xf290,	// (0x0001e982) cale_month_pane_g

0x1aba,	// (0x000111ac) cale_month_week_pane

0x1ade,	// (0x000111d0) grid_cale_month_pane_ParamLimits

0x1ade,	// (0x000111d0) grid_cale_month_pane

0x1b34,	// (0x00011226) cale_month_day_heading_pane_t1

0x1bba,	// (0x000112ac) cale_month_day_heading_pane_t2

0x1c4b,	// (0x0001133d) cale_month_day_heading_pane_t3

0x1cdc,	// (0x000113ce) cale_month_day_heading_pane_t4

0x1d6d,	// (0x0001145f) cale_month_day_heading_pane_t5

0x1e0e,	// (0x00011500) cale_month_day_heading_pane_t6

0x1eb3,	// (0x000115a5) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0001e99d) cale_month_day_heading_pane_t

0x9f62,	// (0x00019654) bg_cale_side_pane_cp01

0x1f5c,	// (0x0001164e) cale_month_week_pane_t1

0x1f75,	// (0x00011667) cale_month_week_pane_t2

0x1f8e,	// (0x00011680) cale_month_week_pane_t3

0x1fa7,	// (0x00011699) cale_month_week_pane_t4

0x1fc0,	// (0x000116b2) cale_month_week_pane_t5

0x1fd9,	// (0x000116cb) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0001e9ac) cale_month_week_pane_t

0x1ff8,	// (0x000116ea) cell_cale_month_pane_ParamLimits

0x1ff8,	// (0x000116ea) cell_cale_month_pane

0xa315,	// (0x00019a07) cell_cale_month_pane_g1

0x214c,	// (0x0001183e) cell_cale_month_pane_t1_ParamLimits

0x214c,	// (0x0001183e) cell_cale_month_pane_t1

0x9f70,	// (0x00019662) grid_highlight_pane_cp08

0x9dec,	// (0x000194de) main_smil_g1

0x216c,	// (0x0001185e) smil_status_pane

0xa321,	// (0x00019a13) smil_text_pane

0xbc95,	// (0x0001b387) bg_popup_call3_rect_pane_g8

0xbc9d,	// (0x0001b38f) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0001ec65) bg_popup_call3_rect_pane_g

0xbf2b,	// (0x0001b61d) smil_status_volume_pane_g1

0x217f,	// (0x00011871) smil_status_pane_t1

0xbf5e,	// (0x0001b650) volume_smil_pane

0xa32b,	// (0x00019a1d) list_smil_text_pane

0x2198,	// (0x0001188a) scroll_pane_cp011

0x21a3,	// (0x00011895) smil_text_list_pane_t1_ParamLimits

0x21a3,	// (0x00011895) smil_text_list_pane_t1

0xa335,	// (0x00019a27) aid_volume_smil_ParamLimits

0xa335,	// (0x00019a27) aid_volume_smil

0x9dec,	// (0x000194de) smil_volume_pane_g1

0x9dec,	// (0x000194de) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0001e9cc) smil_volume_pane_g

0x03ff,	// (0x0000faf1) listscroll_cale_day_pane

0xa357,	// (0x00019a49) bg_cale_pane

0xa36f,	// (0x00019a61) list_cale_pane

0xa392,	// (0x00019a84) scroll_pane_cp09

0xa3a3,	// (0x00019a95) cale_bg_pane_g1

0xa3ab,	// (0x00019a9d) cale_bg_pane_g2

0xa3b3,	// (0x00019aa5) cale_bg_pane_g3

0xa3bb,	// (0x00019aad) cale_bg_pane_g4

0xa3c3,	// (0x00019ab5) cale_bg_pane_g5

0xa3cb,	// (0x00019abd) cale_bg_pane_g6

0xa3d3,	// (0x00019ac5) cale_bg_pane_g7

0xa3db,	// (0x00019acd) cale_bg_pane_g8

0xa3e3,	// (0x00019ad5) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0001e9d1) cale_bg_pane_g

0x21dc,	// (0x000118ce) list_cale_time_pane_ParamLimits

0x21dc,	// (0x000118ce) list_cale_time_pane

0xa3f3,	// (0x00019ae5) list_cale_time_pane_g1_ParamLimits

0xa3f3,	// (0x00019ae5) list_cale_time_pane_g1

0xa3ff,	// (0x00019af1) list_cale_time_pane_g2_ParamLimits

0xa3ff,	// (0x00019af1) list_cale_time_pane_g2

0x21f0,	// (0x000118e2) list_cale_time_pane_g3_ParamLimits

0x21f0,	// (0x000118e2) list_cale_time_pane_g3

0x21fe,	// (0x000118f0) list_cale_time_pane_g4_ParamLimits

0x21fe,	// (0x000118f0) list_cale_time_pane_g4

0x220c,	// (0x000118fe) list_cale_time_pane_g5_ParamLimits

0x220c,	// (0x000118fe) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0001e9e4) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0001e9e4) list_cale_time_pane_g

0xa419,	// (0x00019b0b) list_cale_time_pane_t1_ParamLimits

0xa419,	// (0x00019b0b) list_cale_time_pane_t1

0xa441,	// (0x00019b33) list_cale_time_pane_t2_ParamLimits

0xa441,	// (0x00019b33) list_cale_time_pane_t2

0x25ab,	// (0x00011c9d) aid_blid_cardinal_pane

0x25e9,	// (0x00011cdb) compass_pane_t4

0xa469,	// (0x00019b5b) list_cale_time_pane_t4_ParamLimits

0xa469,	// (0x00019b5b) list_cale_time_pane_t4

0x25f7,	// (0x00011ce9) compass_pane_t5

0x2605,	// (0x00011cf7) compass_pane_t6

0x2613,	// (0x00011d05) compass_pane_t7

0xa8f2,	// (0x00019fe4) navi_pane_cc_t1

0xaa59,	// (0x0001a14b) aid_phob_thumbnail_center_pane

0x2d9a,	// (0x0001248c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0001e9f1) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0001e9f1) list_cale_time_pane_t

0x9688,	// (0x00018d7a) bg_popup_window_pane_cp02_ParamLimits

0x9688,	// (0x00018d7a) bg_popup_window_pane_cp02

0xa491,	// (0x00019b83) heading_pane_cp01_ParamLimits

0xa491,	// (0x00019b83) heading_pane_cp01

0xa49d,	// (0x00019b8f) loc_req_pane_ParamLimits

0xa49d,	// (0x00019b8f) loc_req_pane

0xa4ad,	// (0x00019b9f) loc_type_pane_ParamLimits

0xa4ad,	// (0x00019b9f) loc_type_pane

0xa4bf,	// (0x00019bb1) loc_type_pane_t1_ParamLimits

0xa4bf,	// (0x00019bb1) loc_type_pane_t1

0xa4d1,	// (0x00019bc3) loc_type_pane_t2_ParamLimits

0xa4d1,	// (0x00019bc3) loc_type_pane_t2

0xa4e3,	// (0x00019bd5) loc_type_pane_t3_ParamLimits

0xa4e3,	// (0x00019bd5) loc_type_pane_t3

0x0002,

0xf306,	// (0x0001e9f8) loc_type_pane_t_ParamLimits

0xf306,	// (0x0001e9f8) loc_type_pane_t

0xa4f5,	// (0x00019be7) list_loc_req_pane

0xa4ff,	// (0x00019bf1) scroll_pane_cp012

0x221a,	// (0x0001190c) list_single_loc_request_popup_menu_pane_ParamLimits

0x221a,	// (0x0001190c) list_single_loc_request_popup_menu_pane

0xa50a,	// (0x00019bfc) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa50a,	// (0x00019bfc) list_single_loc_request_popup_menu_pane_g1

0xa516,	// (0x00019c08) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa516,	// (0x00019c08) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0001e9ff) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0001e9ff) list_single_loc_request_popup_menu_pane_g

0xa522,	// (0x00019c14) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa522,	// (0x00019c14) list_single_loc_request_popup_menu_pane_t1

0x9c8c,	// (0x0001937e) bg_popup_window_pane_cp03_ParamLimits

0x9c8c,	// (0x0001937e) bg_popup_window_pane_cp03

0xa538,	// (0x00019c2a) heading_loc_req_pane_ParamLimits

0xa538,	// (0x00019c2a) heading_loc_req_pane

0x2227,	// (0x00011919) popup_dyc_status_message_window_g1_ParamLimits

0x2227,	// (0x00011919) popup_dyc_status_message_window_g1

0x223b,	// (0x0001192d) popup_dyc_status_message_window_t1_ParamLimits

0x223b,	// (0x0001192d) popup_dyc_status_message_window_t1

0x2250,	// (0x00011942) popup_dyc_status_message_window_t2_ParamLimits

0x2250,	// (0x00011942) popup_dyc_status_message_window_t2

0x2265,	// (0x00011957) popup_dyc_status_message_window_t3_ParamLimits

0x2265,	// (0x00011957) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0001ea04) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0001ea04) popup_dyc_status_message_window_t

0x9a31,	// (0x00019123) bg_heading_pane_cp01

0xa544,	// (0x00019c36) heading_loc_req_pane_g1

0xa54c,	// (0x00019c3e) heading_loc_req_pane_g2

0xa554,	// (0x00019c46) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0001ea0b) heading_loc_req_pane_g

0xa55c,	// (0x00019c4e) heading_loc_req_pane_t1

0xa56c,	// (0x00019c5e) bg_popup_sub_pane_cp01_ParamLimits

0xa56c,	// (0x00019c5e) bg_popup_sub_pane_cp01

0xa57a,	// (0x00019c6c) popup_cale_events_window_g1_ParamLimits

0xa57a,	// (0x00019c6c) popup_cale_events_window_g1

0xa59a,	// (0x00019c8c) popup_cale_events_window_g2_ParamLimits

0xa59a,	// (0x00019c8c) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0001ea3f) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0001ea3f) popup_cale_events_window_g

0xa5ba,	// (0x00019cac) popup_cale_events_window_t1_ParamLimits

0xa5ba,	// (0x00019cac) popup_cale_events_window_t1

0xa5cc,	// (0x00019cbe) popup_cale_events_window_t2_ParamLimits

0xa5cc,	// (0x00019cbe) popup_cale_events_window_t2

0xa60a,	// (0x00019cfc) popup_cale_events_window_t3_ParamLimits

0xa60a,	// (0x00019cfc) popup_cale_events_window_t3

0xa644,	// (0x00019d36) popup_cale_events_window_t4_ParamLimits

0xa644,	// (0x00019d36) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0001ea44) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0001ea44) popup_cale_events_window_t

0x236a,	// (0x00011a5c) call_type_pane

0x237a,	// (0x00011a6c) popup_call_status_window_g1

0x238e,	// (0x00011a80) popup_call_status_window_g2

0x23a2,	// (0x00011a94) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0001ea4d) popup_call_status_window_g

0xa67a,	// (0x00019d6c) call_type_pane_g1

0xa683,	// (0x00019d75) call_type_pane_g2

0x0001,

0xf362,	// (0x0001ea54) call_type_pane_g

0x9a31,	// (0x00019123) bg_popup_sub_pane_cp02

0xa68c,	// (0x00019d7e) listscroll_popup_wml_pane

0xa694,	// (0x00019d86) list_wml_pane

0xa69e,	// (0x00019d90) scroll_pane_cp013

0xa6a9,	// (0x00019d9b) list_single_graphic_popup_wml_pane_ParamLimits

0xa6a9,	// (0x00019d9b) list_single_graphic_popup_wml_pane

0x9dec,	// (0x000194de) list_single_graphic_popup_wml_pane_g1

0xa6bd,	// (0x00019daf) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0001ea59) list_single_graphic_popup_wml_pane_g

0xa6c5,	// (0x00019db7) list_single_graphic_popup_wml_pane_t1

0xa6db,	// (0x00019dcd) aid_call_pane

0x9c84,	// (0x00019376) popup_clock_analogue_window_g1

0x9c84,	// (0x00019376) popup_clock_analogue_window_g2

0xa6e3,	// (0x00019dd5) popup_clock_analogue_window_g3

0xa6e3,	// (0x00019dd5) popup_clock_analogue_window_g4

0x9dec,	// (0x000194de) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0001ea5e) popup_clock_analogue_window_g

0xa6eb,	// (0x00019ddd) popup_clock_analogue_window_t1

0xa6f9,	// (0x00019deb) clock_digital_number_pane_ParamLimits

0xa6f9,	// (0x00019deb) clock_digital_number_pane

0xa705,	// (0x00019df7) clock_digital_number_pane_cp02_ParamLimits

0xa705,	// (0x00019df7) clock_digital_number_pane_cp02

0xa711,	// (0x00019e03) clock_digital_number_pane_cp03_ParamLimits

0xa711,	// (0x00019e03) clock_digital_number_pane_cp03

0xa71d,	// (0x00019e0f) clock_digital_number_pane_cp04_ParamLimits

0xa71d,	// (0x00019e0f) clock_digital_number_pane_cp04

0xa729,	// (0x00019e1b) clock_digital_separator_pane_ParamLimits

0xa729,	// (0x00019e1b) clock_digital_separator_pane

0xa735,	// (0x00019e27) popup_clock_digital_window_t1

0x9dec,	// (0x000194de) clock_digital_number_pane_g1

0x9dec,	// (0x000194de) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0001e9cc) clock_digital_number_pane_g

0x9dec,	// (0x000194de) clock_digital_separator_pane_g1

0x9dec,	// (0x000194de) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0001e9cc) clock_digital_separator_pane_g

0x9a31,	// (0x00019123) bg_popup_window_pane_cp04

0xa752,	// (0x00019e44) heading_pane_cp03

0xa75a,	// (0x00019e4c) listscroll_popup_gms_pane

0xa762,	// (0x00019e54) grid_large_graphic_popup_pane

0xa76c,	// (0x00019e5e) listscroll_popup_gms_pane_g1

0xa774,	// (0x00019e66) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0001ea69) listscroll_popup_gms_pane_g

0xa17a,	// (0x0001986c) scroll_pane_cp014

0x23b2,	// (0x00011aa4) cell_large_graphic_popup_pane_ParamLimits

0x23b2,	// (0x00011aa4) cell_large_graphic_popup_pane

0x23ca,	// (0x00011abc) cell_large_graphic_popup_pane_g1_ParamLimits

0x23ca,	// (0x00011abc) cell_large_graphic_popup_pane_g1

0xa77c,	// (0x00019e6e) cell_large_graphic_popup_pane_g2_ParamLimits

0xa77c,	// (0x00019e6e) cell_large_graphic_popup_pane_g2

0xa788,	// (0x00019e7a) cell_large_graphic_popup_pane_g3_ParamLimits

0xa788,	// (0x00019e7a) cell_large_graphic_popup_pane_g3

0xa795,	// (0x00019e87) cell_large_graphic_popup_pane_g4_ParamLimits

0xa795,	// (0x00019e87) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0001ea6e) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0001ea6e) cell_large_graphic_popup_pane_g

0xa7a5,	// (0x00019e97) grid_highlight_pane_cp010

0x9dec,	// (0x000194de) bg_popup_call_pane_g1

0xa7af,	// (0x00019ea1) list_single_graphic_popup_conf_pane_ParamLimits

0xa7af,	// (0x00019ea1) list_single_graphic_popup_conf_pane

0xa7c1,	// (0x00019eb3) list_highlight_pane_cp01

0xa7ca,	// (0x00019ebc) list_single_graphic_popup_conf_pane_g1

0xa7d2,	// (0x00019ec4) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0001ea77) list_single_graphic_popup_conf_pane_g

0xa7da,	// (0x00019ecc) list_single_graphic_popup_conf_pane_t1

0xa7e8,	// (0x00019eda) linegrid_cams_pane_g1

0x23d6,	// (0x00011ac8) linegrid_cams_pane_g2

0x9fa3,	// (0x00019695) linegrid_cams_pane_g3

0xa7f1,	// (0x00019ee3) linegrid_cams_pane_g4

0x23df,	// (0x00011ad1) linegrid_cams_pane_g5

0x23e8,	// (0x00011ada) linegrid_cams_pane_g6

0x9fac,	// (0x0001969e) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0001ea7c) linegrid_cams_pane_g

0xa7fa,	// (0x00019eec) popup_clock_analogue_window

0xa7fa,	// (0x00019eec) popup_clock_digital_window

0x9a31,	// (0x00019123) popup_phob_thumbnail_window

0x9dec,	// (0x000194de) call_video_uplink_pane_g1

0xa803,	// (0x00019ef5) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0001ea8b) call_video_uplink_pane_g

0xa80b,	// (0x00019efd) video_uplink_pane

0xa813,	// (0x00019f05) mce_image_pane_g1

0x23f3,	// (0x00011ae5) mce_image_pane_g2

0x23fd,	// (0x00011aef) mce_image_pane_g3

0x2407,	// (0x00011af9) mce_image_pane_g4

0x240f,	// (0x00011b01) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0001ea90) mce_image_pane_g

0xa81d,	// (0x00019f0f) control_top_pane_stacon_cp01_ParamLimits

0xa81d,	// (0x00019f0f) control_top_pane_stacon_cp01

0xa831,	// (0x00019f23) uni_indicator_pane_stacon_cp01_ParamLimits

0xa831,	// (0x00019f23) uni_indicator_pane_stacon_cp01

0xa842,	// (0x00019f34) bg_popup_sub_pane_cp03

0x2417,	// (0x00011b09) chi_dic_find_pane

0x241f,	// (0x00011b11) listscroll_chi_dic_pane

0x2428,	// (0x00011b1a) main_pane_chidic_g1

0x243b,	// (0x00011b2d) chi_dic_find_pane_t1

0xa84c,	// (0x00019f3e) find_chidic_pane

0xa855,	// (0x00019f47) chi_dic_list_pane_ParamLimits

0xa855,	// (0x00019f47) chi_dic_list_pane

0xa866,	// (0x00019f58) scroll_pane_cp020

0x2449,	// (0x00011b3b) find_chidic_pane_t1

0x9a31,	// (0x00019123) input_focus_pane_cp06

0x0075,	// (0x0000f767) list_chi_dic_pane_ParamLimits

0x0075,	// (0x0000f767) list_chi_dic_pane

0x2458,	// (0x00011b4a) list_chi_dic_pane_t1_ParamLimits

0x2458,	// (0x00011b4a) list_chi_dic_pane_t1

0x9a31,	// (0x00019123) list_highlight_pane_cp020

0xa86e,	// (0x00019f60) bg_cale_heading_pane_g1

0x246b,	// (0x00011b5d) bg_cale_heading_pane_g2

0x2473,	// (0x00011b65) bg_cale_heading_pane_g3

0x247b,	// (0x00011b6d) bg_cale_heading_pane_g4

0x2485,	// (0x00011b77) bg_cale_heading_pane_g5

0x248f,	// (0x00011b81) bg_cale_heading_pane_g6

0x2497,	// (0x00011b89) bg_cale_heading_pane_g7

0x249f,	// (0x00011b91) bg_cale_heading_pane_g8

0x24a9,	// (0x00011b9b) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0001ea9b) bg_cale_heading_pane_g

0xa86e,	// (0x00019f60) bg_cale_side_pane_g1

0x24b3,	// (0x00011ba5) bg_cale_side_pane_g2

0x24bd,	// (0x00011baf) bg_cale_side_pane_g3

0x24c7,	// (0x00011bb9) bg_cale_side_pane_g4

0x24d1,	// (0x00011bc3) bg_cale_side_pane_g5

0x24db,	// (0x00011bcd) bg_cale_side_pane_g6

0x24e5,	// (0x00011bd7) bg_cale_side_pane_g7

0x24ef,	// (0x00011be1) bg_cale_side_pane_g8

0x24f7,	// (0x00011be9) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0001eaae) bg_cale_side_pane_g

0x24ff,	// (0x00011bf1) popup_call_status_window_ParamLimits

0x24ff,	// (0x00011bf1) popup_call_status_window

0xa876,	// (0x00019f68) stacon_top_pane

0xa87e,	// (0x00019f70) status_pane_ParamLimits

0xa87e,	// (0x00019f70) status_pane

0xa893,	// (0x00019f85) status_small_pane

0xa89b,	// (0x00019f8d) control_pane

0x9a31,	// (0x00019123) stacon_bottom_pane

0xa8a3,	// (0x00019f95) list_single_mce_smart_pane_t1_ParamLimits

0xa8a3,	// (0x00019f95) list_single_mce_smart_pane_t1

0xa8b6,	// (0x00019fa8) list_single_mce_smart_pane_t2_ParamLimits

0xa8b6,	// (0x00019fa8) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0001eac1) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0001eac1) list_single_mce_smart_pane_t

0x254c,	// (0x00011c3e) compass_pane

0x2557,	// (0x00011c49) main_location2_pane_t1

0x256b,	// (0x00011c5d) main_location2_pane_t2

0x2581,	// (0x00011c73) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0001eac6) main_location2_pane_t

0xa8d5,	// (0x00019fc7) compass_pane_g1_ParamLimits

0xa8d5,	// (0x00019fc7) compass_pane_g1

0x25cb,	// (0x00011cbd) compass_pane_t1

0x25da,	// (0x00011ccc) compass_pane_t2

0x0005,

0xf3dd,	// (0x0001eacf) compass_pane_t

0x2621,	// (0x00011d13) text_secondary_cp61

0xa8e9,	// (0x00019fdb) navi_pane_cams_g5

0xa90c,	// (0x00019ffe) navi_pane_im_t1

0xa91a,	// (0x0001a00c) navi_pane_mp_g1_ParamLimits

0xa91a,	// (0x0001a00c) navi_pane_mp_g1

0xa92e,	// (0x0001a020) navi_pane_mp_g2_ParamLimits

0xa92e,	// (0x0001a020) navi_pane_mp_g2

0xa93a,	// (0x0001a02c) navi_pane_mp_g3_ParamLimits

0xa93a,	// (0x0001a02c) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0001eae3) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0001eae3) navi_pane_mp_g

0xa946,	// (0x0001a038) navi_pane_mp_t1

0xa954,	// (0x0001a046) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0001eaea) navi_pane_mp_t

0xa990,	// (0x0001a082) navi_pane_vt_g1

0xa946,	// (0x0001a038) navi_pane_vt_t1

0xa998,	// (0x0001a08a) navi_slider_pane

0xa9a0,	// (0x0001a092) zooming_pane

0xa9a8,	// (0x0001a09a) navi_slider_pane_g1

0xa9b1,	// (0x0001a0a3) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0001eaf1) navi_slider_pane_g

0xa9de,	// (0x0001a0d0) aid_levels_zoom

0xa9e6,	// (0x0001a0d8) zooming_pane_g1

0xa9ee,	// (0x0001a0e0) zooming_pane_g2

0xa9ee,	// (0x0001a0e0) zooming_pane_g3

0x0002,

0xf40e,	// (0x0001eb00) zooming_pane_g

0xa9f6,	// (0x0001a0e8) level_10_zoom

0xa9ff,	// (0x0001a0f1) level_11_zoom

0xaa08,	// (0x0001a0fa) level_1_zoom

0xaa11,	// (0x0001a103) level_2_zoom

0xaa1a,	// (0x0001a10c) level_3_zoom

0xaa23,	// (0x0001a115) level_4_zoom

0xaa2c,	// (0x0001a11e) level_5_zoom

0xaa35,	// (0x0001a127) level_6_zoom

0xaa3e,	// (0x0001a130) level_7_zoom

0xaa47,	// (0x0001a139) level_8_zoom

0xaa50,	// (0x0001a142) level_9_zoom

0xaa61,	// (0x0001a153) popup_phob_thumbnail_window_g1

0xaa69,	// (0x0001a15b) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0001eb07) popup_phob_thumbnail_window_g

0xbdfb,	// (0x0001b4ed) level_1_location

0xbe03,	// (0x0001b4f5) level_2_location

0xbe0b,	// (0x0001b4fd) level_3_location

0xbe13,	// (0x0001b505) level_4_location

0xa9a0,	// (0x0001a092) level_5_location

0x276a,	// (0x00011e5c) mce_icon_pane_g1

0x2774,	// (0x00011e66) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0001eb0c) mce_icon_pane_g

0x277c,	// (0x00011e6e) main_mup_pane_g1_ParamLimits

0x277c,	// (0x00011e6e) main_mup_pane_g1

0x2792,	// (0x00011e84) main_mup_pane_g2_ParamLimits

0x2792,	// (0x00011e84) main_mup_pane_g2

0x27aa,	// (0x00011e9c) main_mup_pane_g3_ParamLimits

0x27aa,	// (0x00011e9c) main_mup_pane_g3

0x27c2,	// (0x00011eb4) main_mup_pane_g4_ParamLimits

0x27c2,	// (0x00011eb4) main_mup_pane_g4

0x27da,	// (0x00011ecc) main_mup_pane_g5_ParamLimits

0x27da,	// (0x00011ecc) main_mup_pane_g5

0x27f6,	// (0x00011ee8) main_mup_pane_g6_ParamLimits

0x27f6,	// (0x00011ee8) main_mup_pane_g6

0x2810,	// (0x00011f02) main_mup_pane_g7_ParamLimits

0x2810,	// (0x00011f02) main_mup_pane_g7

0x282e,	// (0x00011f20) main_mup_pane_g8_ParamLimits

0x282e,	// (0x00011f20) main_mup_pane_g8

0x284c,	// (0x00011f3e) main_mup_pane_g9_ParamLimits

0x284c,	// (0x00011f3e) main_mup_pane_g9

0x2868,	// (0x00011f5a) main_mup_pane_g10_ParamLimits

0x2868,	// (0x00011f5a) main_mup_pane_g10

0x2886,	// (0x00011f78) main_mup_pane_g11_ParamLimits

0x2886,	// (0x00011f78) main_mup_pane_g11

0x28a0,	// (0x00011f92) main_mup_pane_g12_ParamLimits

0x28a0,	// (0x00011f92) main_mup_pane_g12

0x28b6,	// (0x00011fa8) main_mup_pane_g13_ParamLimits

0x28b6,	// (0x00011fa8) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0001eb11) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0001eb11) main_mup_pane_g

0x28ca,	// (0x00011fbc) main_mup_pane_t1_ParamLimits

0x28ca,	// (0x00011fbc) main_mup_pane_t1

0x28e6,	// (0x00011fd8) main_mup_pane_t2_ParamLimits

0x28e6,	// (0x00011fd8) main_mup_pane_t2

0x28fe,	// (0x00011ff0) main_mup_pane_t3_ParamLimits

0x28fe,	// (0x00011ff0) main_mup_pane_t3

0x2916,	// (0x00012008) main_mup_pane_t4_ParamLimits

0x2916,	// (0x00012008) main_mup_pane_t4

0x2934,	// (0x00012026) main_mup_pane_t5_ParamLimits

0x2934,	// (0x00012026) main_mup_pane_t5

0x2949,	// (0x0001203b) main_mup_pane_t6_ParamLimits

0x2949,	// (0x0001203b) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0001eb2c) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0001eb2c) main_mup_pane_t

0x295b,	// (0x0001204d) mup_progress_pane_ParamLimits

0x295b,	// (0x0001204d) mup_progress_pane

0x2967,	// (0x00012059) mup_visualizer_pane_ParamLimits

0x2967,	// (0x00012059) mup_visualizer_pane

0x299b,	// (0x0001208d) mup_volume_pane_ParamLimits

0x299b,	// (0x0001208d) mup_volume_pane

0xaa71,	// (0x0001a163) mup_visualizer_pane_g1_ParamLimits

0xaa71,	// (0x0001a163) mup_visualizer_pane_g1

0xaa71,	// (0x0001a163) mup_visualizer_pane_g2_ParamLimits

0xaa71,	// (0x0001a163) mup_visualizer_pane_g2

0xa8d5,	// (0x00019fc7) mup_visualizer_pane_g3_ParamLimits

0xa8d5,	// (0x00019fc7) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0001eb39) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0001eb39) mup_visualizer_pane_g

0x9dec,	// (0x000194de) mup_volume_pane_g1

0xaa87,	// (0x0001a179) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0001eb40) mup_volume_pane_g

0x9dec,	// (0x000194de) mup_progress_pane_g1

0xaa90,	// (0x0001a182) mup_progress_pane_g2

0xaa99,	// (0x0001a18b) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0001eb45) mup_progress_pane_g

0x9a31,	// (0x00019123) bg_popup_window_pane_cp05

0xaaa2,	// (0x0001a194) heading_pane_cp02_ParamLimits

0xaaa2,	// (0x0001a194) heading_pane_cp02

0xaabe,	// (0x0001a1b0) list_popup_blid_pane

0xaac6,	// (0x0001a1b8) list_blid_sat_info_pane_ParamLimits

0xaac6,	// (0x0001a1b8) list_blid_sat_info_pane

0xaad9,	// (0x0001a1cb) list_blid_sat_info_pane_g1

0xaae1,	// (0x0001a1d3) list_blid_sat_info_pane_t1

0x2ac5,	// (0x000121b7) mup_equalizer_pane_ParamLimits

0x2ac5,	// (0x000121b7) mup_equalizer_pane

0x2ae6,	// (0x000121d8) mup_equalizer_pane_cp1_ParamLimits

0x2ae6,	// (0x000121d8) mup_equalizer_pane_cp1

0x2b07,	// (0x000121f9) mup_equalizer_pane_cp2_ParamLimits

0x2b07,	// (0x000121f9) mup_equalizer_pane_cp2

0x2b2c,	// (0x0001221e) mup_equalizer_pane_cp3_ParamLimits

0x2b2c,	// (0x0001221e) mup_equalizer_pane_cp3

0x2b55,	// (0x00012247) mup_equalizer_pane_cp4_ParamLimits

0x2b55,	// (0x00012247) mup_equalizer_pane_cp4

0x2b7e,	// (0x00012270) mup_equalizer_pane_cp5

0x2b96,	// (0x00012288) mup_equalizer_pane_cp6

0x2bae,	// (0x000122a0) mup_equalizer_pane_cp7

0xbd15,	// (0x0001b407) bg_popup_call_poc_act_pane_g9

0xbd1d,	// (0x0001b40f) bg_popup_call_poc_act_pane_g10

0xbd25,	// (0x0001b417) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c8c,	// (0x0001937e) mup_scale_pane

0x9dec,	// (0x000194de) mup_scale_pane_g1

0xaaef,	// (0x0001a1e1) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0001eb61) mup_scale_pane_g

0xab13,	// (0x0001a205) msg_data_pane

0xab1b,	// (0x0001a20d) scroll_pane_cp017

0x2bd8,	// (0x000122ca) bg_list_pane_cp04_ParamLimits

0x2bd8,	// (0x000122ca) bg_list_pane_cp04

0xab2b,	// (0x0001a21d) msg_data_pane_g1

0x2bf8,	// (0x000122ea) msg_data_pane_g2

0x2c02,	// (0x000122f4) msg_data_pane_g3

0x2c0c,	// (0x000122fe) msg_data_pane_g4

0x2c14,	// (0x00012306) msg_data_pane_g5

0x2c1c,	// (0x0001230e) msg_data_pane_g6

0x2c24,	// (0x00012316) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0001eb70) msg_data_pane_g

0x2c2c,	// (0x0001231e) msg_text_pane_ParamLimits

0x2c2c,	// (0x0001231e) msg_text_pane

0x2c54,	// (0x00012346) qrid_highlight_pane_cp011_ParamLimits

0x2c54,	// (0x00012346) qrid_highlight_pane_cp011

0x9a31,	// (0x00019123) msg_body_pane

0x9a31,	// (0x00019123) msg_header_pane

0xab33,	// (0x0001a225) input_focus_pane_cp07

0xab48,	// (0x0001a23a) msg_header_pane_t1_ParamLimits

0xab48,	// (0x0001a23a) msg_header_pane_t1

0xab5a,	// (0x0001a24c) msg_header_pane_t2_ParamLimits

0xab5a,	// (0x0001a24c) msg_header_pane_t2

0x0001,

0xf492,	// (0x0001eb84) msg_header_pane_t_ParamLimits

0xf492,	// (0x0001eb84) msg_header_pane_t

0xab6c,	// (0x0001a25e) msg_body_pane_g1

0x2c83,	// (0x00012375) msg_body_pane_t1_ParamLimits

0x2c83,	// (0x00012375) msg_body_pane_t1

0xab74,	// (0x0001a266) msg_body_pane_t2_ParamLimits

0xab74,	// (0x0001a266) msg_body_pane_t2

0xab86,	// (0x0001a278) msg_body_pane_t3_ParamLimits

0xab86,	// (0x0001a278) msg_body_pane_t3

0x0002,

0xf497,	// (0x0001eb89) msg_body_pane_t_ParamLimits

0xf497,	// (0x0001eb89) msg_body_pane_t

0x2cee,	// (0x000123e0) main_viewer_pane_g1_ParamLimits

0x2cee,	// (0x000123e0) main_viewer_pane_g1

0x2cfc,	// (0x000123ee) main_viewer_pane_g2_ParamLimits

0x2cfc,	// (0x000123ee) main_viewer_pane_g2

0x2d0a,	// (0x000123fc) main_viewer_pane_g3_ParamLimits

0x2d0a,	// (0x000123fc) main_viewer_pane_g3

0x2d19,	// (0x0001240b) main_viewer_pane_g4_ParamLimits

0x2d19,	// (0x0001240b) main_viewer_pane_g4

0xabb0,	// (0x0001a2a2) main_viewer_pane_g5_ParamLimits

0xabb0,	// (0x0001a2a2) main_viewer_pane_g5

0xabb0,	// (0x0001a2a2) main_viewer_pane_g7_ParamLimits

0xabb0,	// (0x0001a2a2) main_viewer_pane_g7

0xabc2,	// (0x0001a2b4) main_viewer_pane_g8_ParamLimits

0xabc2,	// (0x0001a2b4) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0001eb99) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0001eb99) main_viewer_pane_g

0xabda,	// (0x0001a2cc) viewer_content_pane_ParamLimits

0xabda,	// (0x0001a2cc) viewer_content_pane

0x2d57,	// (0x00012449) main_postcard_pane_g1_ParamLimits

0x2d57,	// (0x00012449) main_postcard_pane_g1

0x2d6d,	// (0x0001245f) main_postcard_pane_g2_ParamLimits

0x2d6d,	// (0x0001245f) main_postcard_pane_g2

0x2d83,	// (0x00012475) main_postcard_pane_g3_ParamLimits

0x2d83,	// (0x00012475) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0001ebaa) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0001ebaa) main_postcard_pane_g

0x2d9a,	// (0x0001248c) main_postcard_pane_g4

0xbf3e,	// (0x0001b630) smil_status_volume_pane_g2

0x2ddd,	// (0x000124cf) postcard_pane_ParamLimits

0x2ddd,	// (0x000124cf) postcard_pane

0xabe8,	// (0x0001a2da) postcard_pane_g1_ParamLimits

0xabe8,	// (0x0001a2da) postcard_pane_g1

0x2e2d,	// (0x0001251f) postcard_pane_g2_ParamLimits

0x2e2d,	// (0x0001251f) postcard_pane_g2

0x2e39,	// (0x0001252b) postcard_pane_g3_ParamLimits

0x2e39,	// (0x0001252b) postcard_pane_g3

0xabf6,	// (0x0001a2e8) postcard_pane_g4_ParamLimits

0xabf6,	// (0x0001a2e8) postcard_pane_g4

0x2e45,	// (0x00012537) postcard_pane_g5_ParamLimits

0x2e45,	// (0x00012537) postcard_pane_g5

0x2e5a,	// (0x0001254c) postcard_pane_g6_ParamLimits

0x2e5a,	// (0x0001254c) postcard_pane_g6

0xabe8,	// (0x0001a2da) postcard_pane_g7_ParamLimits

0xabe8,	// (0x0001a2da) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0001ebb7) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0001ebb7) postcard_pane_g

0x2e72,	// (0x00012564) main_mp2_pane_g1_ParamLimits

0x2e72,	// (0x00012564) main_mp2_pane_g1

0x2e80,	// (0x00012572) main_mp2_pane_g2_ParamLimits

0x2e80,	// (0x00012572) main_mp2_pane_g2

0x2e8c,	// (0x0001257e) main_mp2_pane_g3_ParamLimits

0x2e8c,	// (0x0001257e) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0001ebc6) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0001ebc6) main_mp2_pane_g

0x2e98,	// (0x0001258a) main_mp2_pane_t1_ParamLimits

0x2e98,	// (0x0001258a) main_mp2_pane_t1

0x2eaf,	// (0x000125a1) main_mp2_pane_t2_ParamLimits

0x2eaf,	// (0x000125a1) main_mp2_pane_t2

0x2ec1,	// (0x000125b3) main_mp2_pane_t3_ParamLimits

0x2ec1,	// (0x000125b3) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0001ebcd) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0001ebcd) main_mp2_pane_t

0xac04,	// (0x0001a2f6) pec_content_pane_ParamLimits

0xac04,	// (0x0001a2f6) pec_content_pane

0xa17a,	// (0x0001986c) scroll_pane_cp015

0xac16,	// (0x0001a308) pec_attribute_pane_ParamLimits

0xac16,	// (0x0001a308) pec_attribute_pane

0x2ed3,	// (0x000125c5) pec_content_pane_g1_ParamLimits

0x2ed3,	// (0x000125c5) pec_content_pane_g1

0xac26,	// (0x0001a318) pec_content_pane_t1_ParamLimits

0xac26,	// (0x0001a318) pec_content_pane_t1

0xac38,	// (0x0001a32a) pec_content_pane_t2_ParamLimits

0xac38,	// (0x0001a32a) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0001ebd4) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0001ebd4) pec_content_pane_t

0x2edf,	// (0x000125d1) list_single_graphic_pane_cp01_ParamLimits

0x2edf,	// (0x000125d1) list_single_graphic_pane_cp01

0x9c8c,	// (0x0001937e) bg_popup_sub_pane_cp04

0xac4a,	// (0x0001a33c) popup_mup_playback_window_g1

0xac56,	// (0x0001a348) popup_mup_playback_window_t1

0xac6b,	// (0x0001a35d) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0001ebd9) popup_mup_playback_window_t

0xaca2,	// (0x0001a394) main_image_pane_g1_ParamLimits

0xaca2,	// (0x0001a394) main_image_pane_g1

0xace5,	// (0x0001a3d7) scroll_pane_cp018_ParamLimits

0xace5,	// (0x0001a3d7) scroll_pane_cp018

0xacfd,	// (0x0001a3ef) scroll_pane_cp016_ParamLimits

0xacfd,	// (0x0001a3ef) scroll_pane_cp016

0x2fae,	// (0x000126a0) smil2_image_pane_ParamLimits

0x2fae,	// (0x000126a0) smil2_image_pane

0x2fe4,	// (0x000126d6) smil2_root_pane_ParamLimits

0x2fe4,	// (0x000126d6) smil2_root_pane

0x301c,	// (0x0001270e) smil2_text_pane_ParamLimits

0x301c,	// (0x0001270e) smil2_text_pane

0x9a31,	// (0x00019123) bg_list_pane_cp06

0xad39,	// (0x0001a42b) grid_radio_pane

0x9a31,	// (0x00019123) bg_popup_window_pane_cp06

0xad43,	// (0x0001a435) main_fmradio_pane_t1

0xa752,	// (0x00019e44) heading_pane_cp04

0xad51,	// (0x0001a443) main_fmradio_pane_t2

0xbd2d,	// (0x0001b41f) popup_cale_lunar_info_window_g1

0xad5f,	// (0x0001a451) main_fmradio_pane_t3

0xbd35,	// (0x0001b427) popup_cale_lunar_info_window_g2

0xad6f,	// (0x0001a461) main_fmradio_pane_t4

0x0001,

0xad7d,	// (0x0001a46f) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0001ecb4) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0001ebee) main_fmradio_pane_t

0xad8b,	// (0x0001a47d) wait_bar_pane_cp03

0xad93,	// (0x0001a485) cell_fmradio_pane_ParamLimits

0xad93,	// (0x0001a485) cell_fmradio_pane

0xabe8,	// (0x0001a2da) cell_fmradio_pane_g1_ParamLimits

0xabe8,	// (0x0001a2da) cell_fmradio_pane_g1

0x9a31,	// (0x00019123) grid_highlight_pane_cp011

0xada8,	// (0x0001a49a) poc_content_pane_ParamLimits

0xada8,	// (0x0001a49a) poc_content_pane

0xadba,	// (0x0001a4ac) scroll_pane_cp019

0x30ac,	// (0x0001279e) popup_call_poc_act_window_ParamLimits

0x30ac,	// (0x0001279e) popup_call_poc_act_window

0x30d0,	// (0x000127c2) popup_call_poc_inact_window_ParamLimits

0x30d0,	// (0x000127c2) popup_call_poc_inact_window

0xf599,	// (0x0001ec8b) bg_popup_call_poc_act_pane_g

0xbca5,	// (0x0001b397) bg_popup_call_poc_inact_pane_g1

0xbcad,	// (0x0001b39f) bg_popup_call_poc_inact_pane_g2

0xadc2,	// (0x0001a4b4) popup_call_poc_act_window_g2

0xbcb5,	// (0x0001b3a7) bg_popup_call_poc_inact_pane_g3

0xbcbd,	// (0x0001b3af) bg_popup_call_poc_inact_pane_g4

0xbcc5,	// (0x0001b3b7) bg_popup_call_poc_inact_pane_g5

0xadca,	// (0x0001a4bc) popup_call_poc_act_window_t1_ParamLimits

0xadca,	// (0x0001a4bc) popup_call_poc_act_window_t1

0xadf2,	// (0x0001a4e4) popup_call_poc_act_window_t2_ParamLimits

0xadf2,	// (0x0001a4e4) popup_call_poc_act_window_t2

0xae1a,	// (0x0001a50c) popup_call_poc_act_window_t3_ParamLimits

0xae1a,	// (0x0001a50c) popup_call_poc_act_window_t3

0xae42,	// (0x0001a534) popup_call_poc_act_window_t4_ParamLimits

0xae42,	// (0x0001a534) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0001ebf9) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0001ebf9) popup_call_poc_act_window_t

0xbccd,	// (0x0001b3bf) bg_popup_call_poc_inact_pane_g6

0xbcd5,	// (0x0001b3c7) bg_popup_call_poc_inact_pane_g7

0xbcdd,	// (0x0001b3cf) bg_popup_call_poc_inact_pane_g8

0xae54,	// (0x0001a546) popup_call_poc_inact_window_g2

0xbce5,	// (0x0001b3d7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0001ec78) bg_popup_call_poc_inact_pane_g

0xae5c,	// (0x0001a54e) popup_call_poc_inact_window_t1_ParamLimits

0xae5c,	// (0x0001a54e) popup_call_poc_inact_window_t1

0xae71,	// (0x0001a563) popup_call_poc_inact_window_t2_ParamLimits

0xae71,	// (0x0001a563) popup_call_poc_inact_window_t2

0xae86,	// (0x0001a578) popup_call_poc_inact_window_t3_ParamLimits

0xae86,	// (0x0001a578) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0001ec02) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0001ec02) popup_call_poc_inact_window_t

0xbeb1,	// (0x0001b5a3) context_pane_ParamLimits

0x3978,	// (0x0001306a) signal_pane_ParamLimits

0xa9a0,	// (0x0001a092) main_call2_pane

0xbe9f,	// (0x0001b591) popup_phob_thumbnail2_window_ParamLimits

0xbe9f,	// (0x0001b591) popup_phob_thumbnail2_window

0xab98,	// (0x0001a28a) aid_hotspot_pointer_arrow_pane

0xaba0,	// (0x0001a292) aid_hotspot_pointer_hand_pane

0x3438,	// (0x00012b2a) phob_pre_status_pane_g5

0x0c71,	// (0x00010363) cams_zoom_pane_ParamLimits

0x0c80,	// (0x00010372) image_vga_pane_ParamLimits

0x0c9a,	// (0x0001038c) main_camera_pane_g1_ParamLimits

0x0cac,	// (0x0001039e) main_camera_pane_g2_ParamLimits

0x0cbc,	// (0x000103ae) main_camera_pane_g3_ParamLimits

0x0cd0,	// (0x000103c2) main_camera_pane_g4_ParamLimits

0x0ce4,	// (0x000103d6) main_camera_pane_g5_ParamLimits

0x0cf8,	// (0x000103ea) main_camera_pane_g6_ParamLimits

0x0d0c,	// (0x000103fe) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0001e901) main_camera_pane_g_ParamLimits

0x0d20,	// (0x00010412) main_camera_pane_t1_ParamLimits

0x0d36,	// (0x00010428) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0001e912) main_camera_pane_t_ParamLimits

0x9c8c,	// (0x0001937e) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c8c,	// (0x0001937e) bg_popup_preview_window_pane_cp01

0xae9b,	// (0x0001a58d) popup_phob_thumbnail2_window_g1_ParamLimits

0xae9b,	// (0x0001a58d) popup_phob_thumbnail2_window_g1

0x9a31,	// (0x00019123) call2_cli_visual_pane

0x3104,	// (0x000127f6) popup_call2_audio_conf_window_ParamLimits

0x3104,	// (0x000127f6) popup_call2_audio_conf_window

0x312c,	// (0x0001281e) popup_call2_audio_first_window_ParamLimits

0x312c,	// (0x0001281e) popup_call2_audio_first_window

0x31c2,	// (0x000128b4) popup_call2_audio_in_window_ParamLimits

0x31c2,	// (0x000128b4) popup_call2_audio_in_window

0x320e,	// (0x00012900) popup_call2_audio_out_window_ParamLimits

0x320e,	// (0x00012900) popup_call2_audio_out_window

0x3280,	// (0x00012972) popup_call2_audio_second_window_ParamLimits

0x3280,	// (0x00012972) popup_call2_audio_second_window

0x32e6,	// (0x000129d8) popup_call2_audio_wait_window_ParamLimits

0x32e6,	// (0x000129d8) popup_call2_audio_wait_window

0x9a31,	// (0x00019123) bg_popup_call2_act_pane_cp03

0x9c6e,	// (0x00019360) list_conf_pane_cp

0xaea7,	// (0x0001a599) popup_call2_audio_conf_window_t1

0xaeb5,	// (0x0001a5a7) list_single_graphic_popup_conf2_pane_ParamLimits

0xaeb5,	// (0x0001a5a7) list_single_graphic_popup_conf2_pane

0xa7c1,	// (0x00019eb3) list_highlight_pane_cp04

0xaec8,	// (0x0001a5ba) list_single_graphic_popup_conf2_pane_g1

0xa7d2,	// (0x00019ec4) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0001ec09) list_single_graphic_popup_conf2_pane_g

0xaed2,	// (0x0001a5c4) list_single_graphic_popup_conf2_pane_t1

0xaee0,	// (0x0001a5d2) bg_popup_call2_act_pane_cp01_ParamLimits

0xaee0,	// (0x0001a5d2) bg_popup_call2_act_pane_cp01

0xaf6a,	// (0x0001a65c) call_type_pane_cp05_ParamLimits

0xaf6a,	// (0x0001a65c) call_type_pane_cp05

0xafbe,	// (0x0001a6b0) popup_call2_audio_second_window_g1_ParamLimits

0xafbe,	// (0x0001a6b0) popup_call2_audio_second_window_g1

0xb012,	// (0x0001a704) popup_call2_audio_second_window_g2_ParamLimits

0xb012,	// (0x0001a704) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0001ec0e) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0001ec0e) popup_call2_audio_second_window_g

0xb077,	// (0x0001a769) popup_call2_audio_second_window_t1_ParamLimits

0xb077,	// (0x0001a769) popup_call2_audio_second_window_t1

0xb132,	// (0x0001a824) popup_call2_audio_second_window_t2_ParamLimits

0xb132,	// (0x0001a824) popup_call2_audio_second_window_t2

0xb185,	// (0x0001a877) popup_call2_audio_second_window_t3_ParamLimits

0xb185,	// (0x0001a877) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0001ec15) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0001ec15) popup_call2_audio_second_window_t

0x9a31,	// (0x00019123) bg_popup_call2_in_pane_cp02

0x9a3b,	// (0x0001912d) call_type_pane_cp04

0x9a43,	// (0x00019135) popup_call2_audio_wait_window_g1

0x9a4b,	// (0x0001913d) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0001e7ee) popup_call2_audio_wait_window_g

0x9a53,	// (0x00019145) popup_call2_audio_wait_window_t3

0xb278,	// (0x0001a96a) bg_popup_call2_act_pane_ParamLimits

0xb278,	// (0x0001a96a) bg_popup_call2_act_pane

0xb338,	// (0x0001aa2a) call_type_pane_cp03_ParamLimits

0xb338,	// (0x0001aa2a) call_type_pane_cp03

0xb39c,	// (0x0001aa8e) popup_call2_audio_first_window_g1_ParamLimits

0xb39c,	// (0x0001aa8e) popup_call2_audio_first_window_g1

0xb40c,	// (0x0001aafe) popup_call2_audio_first_window_g2_ParamLimits

0xb40c,	// (0x0001aafe) popup_call2_audio_first_window_g2

0xaa71,	// (0x0001a163) popup_call2_audio_first_window_g3_ParamLimits

0xaa71,	// (0x0001a163) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0001ec1e) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0001ec1e) popup_call2_audio_first_window_g

0xb4ea,	// (0x0001abdc) popup_call2_audio_first_window_t1_ParamLimits

0xb4ea,	// (0x0001abdc) popup_call2_audio_first_window_t1

0xb5ed,	// (0x0001acdf) popup_call2_audio_first_window_t4_ParamLimits

0xb5ed,	// (0x0001acdf) popup_call2_audio_first_window_t4

0xb6d0,	// (0x0001adc2) popup_call2_audio_first_window_t5_ParamLimits

0xb6d0,	// (0x0001adc2) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0001ec29) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0001ec29) popup_call2_audio_first_window_t

0x9c84,	// (0x00019376) bg_popup_call2_act_pane_g1

0xbd3f,	// (0x0001b431) popup_cale_lunar_info_window_t1

0xbd4d,	// (0x0001b43f) popup_cale_lunar_info_window_t2

0xbd5b,	// (0x0001b44d) popup_cale_lunar_info_window_t3

0x9a31,	// (0x00019123) bg_popup_call2_bubble_pane

0xb7d1,	// (0x0001aec3) bg_popup_call2_in_pane_cp01_ParamLimits

0xb7d1,	// (0x0001aec3) bg_popup_call2_in_pane_cp01

0x970d,	// (0x00018dff) call_type_pane_cp02

0xb819,	// (0x0001af0b) popup_call2_audio_out_window_g1_ParamLimits

0xb819,	// (0x0001af0b) popup_call2_audio_out_window_g1

0xb845,	// (0x0001af37) popup_call2_audio_out_window_g2_ParamLimits

0xb845,	// (0x0001af37) popup_call2_audio_out_window_g2

0xb86d,	// (0x0001af5f) popup_call2_audio_out_window_g3_ParamLimits

0xb86d,	// (0x0001af5f) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0001ec32) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0001ec32) popup_call2_audio_out_window_g

0xb8a8,	// (0x0001af9a) popup_call2_audio_out_window_t1_ParamLimits

0xb8a8,	// (0x0001af9a) popup_call2_audio_out_window_t1

0xb907,	// (0x0001aff9) popup_call2_audio_out_window_t2_ParamLimits

0xb907,	// (0x0001aff9) popup_call2_audio_out_window_t2

0xb95b,	// (0x0001b04d) popup_call2_audio_out_window_t3_ParamLimits

0xb95b,	// (0x0001b04d) popup_call2_audio_out_window_t3

0xb971,	// (0x0001b063) popup_call2_audio_out_window_t4_ParamLimits

0xb971,	// (0x0001b063) popup_call2_audio_out_window_t4

0xb987,	// (0x0001b079) popup_call2_audio_out_window_t5_ParamLimits

0xb987,	// (0x0001b079) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0001ec3b) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0001ec3b) popup_call2_audio_out_window_t

0xb9eb,	// (0x0001b0dd) bg_popup_call2_in_pane_ParamLimits

0xb9eb,	// (0x0001b0dd) bg_popup_call2_in_pane

0xba47,	// (0x0001b139) popup_call2_audio_in_window_g1_ParamLimits

0xba47,	// (0x0001b139) popup_call2_audio_in_window_g1

0xba7f,	// (0x0001b171) popup_call2_audio_in_window_g2_ParamLimits

0xba7f,	// (0x0001b171) popup_call2_audio_in_window_g2

0xbab7,	// (0x0001b1a9) popup_call2_audio_in_window_g3_ParamLimits

0xbab7,	// (0x0001b1a9) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0001ec48) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0001ec48) popup_call2_audio_in_window_g

0xbb0f,	// (0x0001b201) popup_call2_audio_in_window_t1_ParamLimits

0xbb0f,	// (0x0001b201) popup_call2_audio_in_window_t1

0xbb8f,	// (0x0001b281) popup_call2_audio_in_window_t2_ParamLimits

0xbb8f,	// (0x0001b281) popup_call2_audio_in_window_t2

0xbc0f,	// (0x0001b301) popup_call2_audio_in_window_t3_ParamLimits

0xbc0f,	// (0x0001b301) popup_call2_audio_in_window_t3

0xbc29,	// (0x0001b31b) popup_call2_audio_in_window_t4_ParamLimits

0xbc29,	// (0x0001b31b) popup_call2_audio_in_window_t4

0xbc3b,	// (0x0001b32d) popup_call2_audio_in_window_t5_ParamLimits

0xbc3b,	// (0x0001b32d) popup_call2_audio_in_window_t5

0xbc50,	// (0x0001b342) popup_call2_audio_in_window_t6_ParamLimits

0xbc50,	// (0x0001b342) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0001ec51) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0001ec51) popup_call2_audio_in_window_t

0x9c84,	// (0x00019376) bg_popup_call2_in_pane_g1

0xbd69,	// (0x0001b45b) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0001ecb9) popup_cale_lunar_info_window_t

0x9c8c,	// (0x0001937e) bg_popup_call2_rect_pane_ParamLimits

0x9c8c,	// (0x0001937e) bg_popup_call2_rect_pane

0x9a31,	// (0x00019123) call2_cli_visual_graphic_pane

0x9a31,	// (0x00019123) call2_cli_visual_text_pane

0xbf51,	// (0x0001b643) smil_status_volume_pane_g3

0x0002,

0x9dec,	// (0x000194de) call2_cli_visual_graphic_pane_g1

0x9dec,	// (0x000194de) call2_cli_visual_graphic_pane_g2

0x9dec,	// (0x000194de) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0001ec5e) call2_cli_visual_graphic_pane_g

0xbc65,	// (0x0001b357) bg_popup_call2_rect_pane_g1

0x9e94,	// (0x00019586) bg_popup_call2_rect_pane_g2

0xbc6d,	// (0x0001b35f) bg_popup_call2_rect_pane_g3

0xbc75,	// (0x0001b367) bg_popup_call2_rect_pane_g4

0xbc7d,	// (0x0001b36f) bg_popup_call2_rect_pane_g5

0xbc85,	// (0x0001b377) bg_popup_call2_rect_pane_g6

0xbc8d,	// (0x0001b37f) bg_popup_call2_rect_pane_g7

0xbc95,	// (0x0001b387) bg_popup_call2_rect_pane_g8

0xbc9d,	// (0x0001b38f) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0001ec65) bg_popup_call2_rect_pane_g

0xbca5,	// (0x0001b397) bg_popup_call2_bubble_pane_g1

0xbcad,	// (0x0001b39f) bg_popup_call2_bubble_pane_g2

0xbcb5,	// (0x0001b3a7) bg_popup_call2_bubble_pane_g3

0xbcbd,	// (0x0001b3af) bg_popup_call2_bubble_pane_g4

0xbcc5,	// (0x0001b3b7) bg_popup_call2_bubble_pane_g5

0xbccd,	// (0x0001b3bf) bg_popup_call2_bubble_pane_g6

0xbcd5,	// (0x0001b3c7) bg_popup_call2_bubble_pane_g7

0xbcdd,	// (0x0001b3cf) bg_popup_call2_bubble_pane_g8

0xbce5,	// (0x0001b3d7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0001ec78) bg_popup_call2_bubble_pane_g

0x041b,	// (0x0000fb0d) aid_cale_week_size_cell_pane

0x0d50,	// (0x00010442) aid_cams_cif_uncrop_pane_ParamLimits

0x0d50,	// (0x00010442) aid_cams_cif_uncrop_pane

0x0f09,	// (0x000105fb) aid_cams_size_cell_ParamLimits

0x0f09,	// (0x000105fb) aid_cams_size_cell

0x0f1d,	// (0x0001060f) grid_cams_pane_ParamLimits

0x0f37,	// (0x00010629) linegrid_cams_pane_ParamLimits

0x1117,	// (0x00010809) call_video_pane_t1

0x1131,	// (0x00010823) call_video_pane_t2

0x0001,

0xf273,	// (0x0001e965) call_video_pane_t

0x1565,	// (0x00010c57) aid_cale_month_size_cell_pane_ParamLimits

0x1565,	// (0x00010c57) aid_cale_month_size_cell_pane

0xf610,	// (0x0001ed02) smil_status_volume_pane_g

0xbf5e,	// (0x0001b650) volume_smil_pane_ParamLimits

0x95c1,	// (0x00018cb3) aid_popup2_width_pane

0x036b,	// (0x0000fa5d) cell_qdial_pane_g4_ParamLimits

0x036b,	// (0x0000fa5d) cell_qdial_pane_g4

0x25ab,	// (0x00011c9d) aid_blid_cardinal_pane_ParamLimits

0x25b7,	// (0x00011ca9) aid_blid_destination_pane_ParamLimits

0x25b7,	// (0x00011ca9) aid_blid_destination_pane

0x9c8c,	// (0x0001937e) bg_popup_call_poc_act_pane_ParamLimits

0x9c8c,	// (0x0001937e) bg_popup_call_poc_act_pane

0x9c8c,	// (0x0001937e) bg_popup_call_poc_inact_pane_ParamLimits

0x9c8c,	// (0x0001937e) bg_popup_call_poc_inact_pane

0xbced,	// (0x0001b3df) bg_popup_call_poc_act_pane_g1

0xbcf5,	// (0x0001b3e7) bg_popup_call_poc_act_pane_g2

0xbcfd,	// (0x0001b3ef) bg_popup_call_poc_act_pane_g3

0xbcbd,	// (0x0001b3af) bg_popup_call_poc_act_pane_g4

0xbcc5,	// (0x0001b3b7) bg_popup_call_poc_act_pane_g5

0xbd05,	// (0x0001b3f7) bg_popup_call_poc_act_pane_g6

0xbcd5,	// (0x0001b3c7) bg_popup_call_poc_act_pane_g7

0xbd0d,	// (0x0001b3ff) bg_popup_call_poc_act_pane_g8

0x9a31,	// (0x00019123) main_usb_pane

0xbe76,	// (0x0001b568) popup_cale_lunar_info_window

0x13fa,	// (0x00010aec) im_reading_pane_t1_ParamLimits

0xa0d2,	// (0x000197c4) list_im_pane_ParamLimits

0xa0e3,	// (0x000197d5) scroll_pane_cp07_ParamLimits

0x9a31,	// (0x00019123) grid_highlight_pane_cp012

0x9c8c,	// (0x0001937e) mup_scale_pane_ParamLimits

0xabe8,	// (0x0001a2da) main_usb_pane_g1_ParamLimits

0xabe8,	// (0x0001a2da) main_usb_pane_g1

0x3344,	// (0x00012a36) main_usb_pane_g2_ParamLimits

0x3344,	// (0x00012a36) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0001eca2) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0001eca2) main_usb_pane_g

0x335a,	// (0x00012a4c) main_usb_pane_t1_ParamLimits

0x335a,	// (0x00012a4c) main_usb_pane_t1

0x336c,	// (0x00012a5e) main_usb_pane_t2_ParamLimits

0x336c,	// (0x00012a5e) main_usb_pane_t2

0x337e,	// (0x00012a70) main_usb_pane_t3_ParamLimits

0x337e,	// (0x00012a70) main_usb_pane_t3

0x3390,	// (0x00012a82) main_usb_pane_t4_ParamLimits

0x3390,	// (0x00012a82) main_usb_pane_t4

0x33a5,	// (0x00012a97) main_usb_pane_t5_ParamLimits

0x33a5,	// (0x00012a97) main_usb_pane_t5

0x33ba,	// (0x00012aac) main_usb_pane_t6_ParamLimits

0x33ba,	// (0x00012aac) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0001eca7) main_usb_pane_t_ParamLimits

0x254c,	// (0x00011c3e) aid_text_placing

0x2557,	// (0x00011c49) main_location2_pane_t1_ParamLimits

0x256b,	// (0x00011c5d) main_location2_pane_t2_ParamLimits

0x2581,	// (0x00011c73) main_location2_pane_t3_ParamLimits

0x2597,	// (0x00011c89) main_location2_pane_t4_ParamLimits

0x2597,	// (0x00011c89) main_location2_pane_t4

0xf3d4,	// (0x0001eac6) main_location2_pane_t_ParamLimits

0x9cc8,	// (0x000193ba) find_pinb_pane_g2_ParamLimits

0x9cc8,	// (0x000193ba) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0001e814) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0001e814) find_pinb_pane_g

0x9cd4,	// (0x000193c6) find_pinb_pane_t1_ParamLimits

0x9ce6,	// (0x000193d8) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0001e819) find_pinb_pane_t_ParamLimits

0x9a31,	// (0x00019123) main_call3_pane

0x1b34,	// (0x00011226) cale_month_day_heading_pane_t1_ParamLimits

0x1bba,	// (0x000112ac) cale_month_day_heading_pane_t2_ParamLimits

0x1c4b,	// (0x0001133d) cale_month_day_heading_pane_t3_ParamLimits

0x1cdc,	// (0x000113ce) cale_month_day_heading_pane_t4_ParamLimits

0x1d6d,	// (0x0001145f) cale_month_day_heading_pane_t5_ParamLimits

0x1e0e,	// (0x00011500) cale_month_day_heading_pane_t6_ParamLimits

0x1eb3,	// (0x000115a5) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0001e99d) cale_month_day_heading_pane_t_ParamLimits

0x218f,	// (0x00011881) smil_status_volume_pane

0x2e01,	// (0x000124f3) postcard_address_pane_ParamLimits

0x2e01,	// (0x000124f3) postcard_address_pane

0x2e17,	// (0x00012509) postcard_message_pane_ParamLimits

0x2e17,	// (0x00012509) postcard_message_pane

0x3320,	// (0x00012a12) call2_cli_visual_pane_t1_ParamLimits

0x3320,	// (0x00012a12) call2_cli_visual_pane_t1

0x3bad,	// (0x0001329f) postcard_message_pane_t1_ParamLimits

0x3bad,	// (0x0001329f) postcard_message_pane_t1

0x3b96,	// (0x00013288) postcard_address_pane_t1_ParamLimits

0x3b96,	// (0x00013288) postcard_address_pane_t1

0x3b82,	// (0x00013274) popup_call3_audio_in_window_ParamLimits

0x3b82,	// (0x00013274) popup_call3_audio_in_window

0x3a07,	// (0x000130f9) bg_popup_call3_in_pane_ParamLimits

0x3a07,	// (0x000130f9) bg_popup_call3_in_pane

0x3a83,	// (0x00013175) popup_call3_audio_in_window_g1_ParamLimits

0x3a83,	// (0x00013175) popup_call3_audio_in_window_g1

0x3aa3,	// (0x00013195) popup_call3_audio_in_window_g2_ParamLimits

0x3aa3,	// (0x00013195) popup_call3_audio_in_window_g2

0x3ac3,	// (0x000131b5) popup_call3_audio_in_window_g3_ParamLimits

0x3ac3,	// (0x000131b5) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0001ed09) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0001ed09) popup_call3_audio_in_window_g

0x3af4,	// (0x000131e6) popup_call3_audio_in_window_t1_ParamLimits

0x3af4,	// (0x000131e6) popup_call3_audio_in_window_t1

0x3b32,	// (0x00013224) popup_call3_audio_in_window_t2_ParamLimits

0x3b32,	// (0x00013224) popup_call3_audio_in_window_t2

0x3b70,	// (0x00013262) popup_call3_audio_in_window_t3_ParamLimits

0x3b70,	// (0x00013262) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0001ed12) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0001ed12) popup_call3_audio_in_window_t

0xa9a0,	// (0x0001a092) bg_popup_call3_rect_pane

0xbc65,	// (0x0001b357) bg_popup_call3_rect_pane_g1

0x9e94,	// (0x00019586) bg_popup_call3_rect_pane_g2

0xbc6d,	// (0x0001b35f) bg_popup_call3_rect_pane_g3

0xbc75,	// (0x0001b367) bg_popup_call3_rect_pane_g4

0xbc7d,	// (0x0001b36f) bg_popup_call3_rect_pane_g5

0xbc85,	// (0x0001b377) bg_popup_call3_rect_pane_g6

0xbc8d,	// (0x0001b37f) bg_popup_call3_rect_pane_g7

0x29b1,	// (0x000120a3) mup_visualizer_osc_pane

0xaa7f,	// (0x0001a171) mup_visualizer_spec_pane

0x3a37,	// (0x00013129) call3_video_qcif_pane_ParamLimits

0x3a37,	// (0x00013129) call3_video_qcif_pane

0x3a4a,	// (0x0001313c) call3_video_qcif_uncrop_pane_ParamLimits

0x3a4a,	// (0x0001313c) call3_video_qcif_uncrop_pane

0x3a5a,	// (0x0001314c) call3_video_subqcif_pane_ParamLimits

0x3a5a,	// (0x0001314c) call3_video_subqcif_pane

0x3a70,	// (0x00013162) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a70,	// (0x00013162) call3_video_subqcif_uncrop_pane

0x3ae3,	// (0x000131d5) popup_call3_audio_in_window_g4_ParamLimits

0x3ae3,	// (0x000131d5) popup_call3_audio_in_window_g4

0x39f6,	// (0x000130e8) mup_spec_half_pane

0x39ff,	// (0x000130f1) mup_spec_half_pane_cp

0xbf11,	// (0x0001b603) mup_osc_middle_pane

0xbf1a,	// (0x0001b60c) mup_visualizer_osc_pane_g1

0x39d6,	// (0x000130c8) mup_spec_bar_pane_ParamLimits

0x39d6,	// (0x000130c8) mup_spec_bar_pane

0xbefe,	// (0x0001b5f0) mup_spec_bar_pane_g1

0xbf08,	// (0x0001b5fa) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0001ecfd) mup_spec_bar_pane_g

0x041b,	// (0x0000fb0d) aid_cale_week_size_cell_pane_ParamLimits

0x0435,	// (0x0000fb27) bg_cale_heading_pane_ParamLimits

0x9f10,	// (0x00019602) bg_cale_pane_cp01_ParamLimits

0x045e,	// (0x0000fb50) cale_week_corner_pane_ParamLimits

0x047d,	// (0x0000fb6f) cale_week_day_heading_pane_ParamLimits

0x04ab,	// (0x0000fb9d) cale_week_scroll_pane_g1_ParamLimits

0x04cf,	// (0x0000fbc1) cale_week_scroll_pane_g2_ParamLimits

0x04e7,	// (0x0000fbd9) cale_week_scroll_pane_g3_ParamLimits

0x04ff,	// (0x0000fbf1) cale_week_scroll_pane_g4_ParamLimits

0x051b,	// (0x0000fc0d) cale_week_scroll_pane_g5_ParamLimits

0x053b,	// (0x0000fc2d) cale_week_scroll_pane_g6_ParamLimits

0x055b,	// (0x0000fc4d) cale_week_scroll_pane_g7_ParamLimits

0x057f,	// (0x0000fc71) cale_week_scroll_pane_g8_ParamLimits

0x05a3,	// (0x0000fc95) cale_week_scroll_pane_g9_ParamLimits

0x05c0,	// (0x0000fcb2) cale_week_scroll_pane_g10_ParamLimits

0x05dd,	// (0x0000fccf) cale_week_scroll_pane_g11_ParamLimits

0x05fa,	// (0x0000fcec) cale_week_scroll_pane_g12_ParamLimits

0x0617,	// (0x0000fd09) cale_week_scroll_pane_g13_ParamLimits

0x0634,	// (0x0000fd26) cale_week_scroll_pane_g14_ParamLimits

0x065d,	// (0x0000fd4f) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0001e8a5) cale_week_scroll_pane_g_ParamLimits

0x0686,	// (0x0000fd78) cale_week_time_pane_ParamLimits

0x06aa,	// (0x0000fd9c) grid_cale_week_pane_ParamLimits

0x9f2e,	// (0x00019620) listscroll_cale_week_pane_t1

0x9f40,	// (0x00019632) scroll_pane_cp08_ParamLimits

0x15d2,	// (0x00010cc4) cale_month_corner_pane_ParamLimits

0xa303,	// (0x000199f5) cale_month_pane_t1

0x1aba,	// (0x000111ac) cale_month_week_pane_ParamLimits

0x237a,	// (0x00011a6c) popup_call_status_window_g1_ParamLimits

0x238e,	// (0x00011a80) popup_call_status_window_g2_ParamLimits

0x23a2,	// (0x00011a94) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0001ea4d) popup_call_status_window_g_ParamLimits

0xa6d3,	// (0x00019dc5) aid_call2_pane

0x2c75,	// (0x00012367) msg_header_pane_g1

0x2e01,	// (0x000124f3) postcard_address2_pane_ParamLimits

0x2e01,	// (0x000124f3) postcard_address2_pane

0x2e17,	// (0x00012509) postcard_message2_pane_ParamLimits

0x2e17,	// (0x00012509) postcard_message2_pane

0x3986,	// (0x00013078) message2_row_pane_ParamLimits

0x3986,	// (0x00013078) message2_row_pane

0x39a3,	// (0x00013095) address2_row_pane_ParamLimits

0x39a3,	// (0x00013095) address2_row_pane

0xbecc,	// (0x0001b5be) postcard_message2_row_pane_g1

0xbed4,	// (0x0001b5c6) postcard_message2_row_pane_t1

0xbecc,	// (0x0001b5be) address2_row_pane_g1

0xbed4,	// (0x0001b5c6) address2_row_pane_t1

0x0bd6,	// (0x000102c8) aid_size_cell_vorec

0x9a31,	// (0x00019123) main_rss_pane

0x39b6,	// (0x000130a8) rss_list_single_pane_ParamLimits

0x39b6,	// (0x000130a8) rss_list_single_pane

0xbee2,	// (0x0001b5d4) rss_list_single_pane_t1

0xbef0,	// (0x0001b5e2) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0001ecf8) rss_list_single_pane_t

0x9a31,	// (0x00019123) main_camera2_pane

0x9a31,	// (0x00019123) main_video2_pane

0x3c1c,	// (0x0001330e) cams_zoom_pane_cp2_ParamLimits

0x3c1c,	// (0x0001330e) cams_zoom_pane_cp2

0x3c33,	// (0x00013325) image2_vga_pane_ParamLimits

0x3c33,	// (0x00013325) image2_vga_pane

0x3c7b,	// (0x0001336d) main_camera2_pane_g1_ParamLimits

0x3c7b,	// (0x0001336d) main_camera2_pane_g1

0x3c9b,	// (0x0001338d) main_camera2_pane_g2_ParamLimits

0x3c9b,	// (0x0001338d) main_camera2_pane_g2

0x3cb2,	// (0x000133a4) main_camera2_pane_g3_ParamLimits

0x3cb2,	// (0x000133a4) main_camera2_pane_g3

0x3cc9,	// (0x000133bb) main_camera2_pane_g4_ParamLimits

0x3cc9,	// (0x000133bb) main_camera2_pane_g4

0x3ce0,	// (0x000133d2) main_camera2_pane_g5_ParamLimits

0x3ce0,	// (0x000133d2) main_camera2_pane_g5

0x3cf7,	// (0x000133e9) main_camera2_pane_g6_ParamLimits

0x3cf7,	// (0x000133e9) main_camera2_pane_g6

0x3d0e,	// (0x00013400) main_camera2_pane_g7_ParamLimits

0x3d0e,	// (0x00013400) main_camera2_pane_g7

0x3d25,	// (0x00013417) main_camera2_pane_g8_ParamLimits

0x3d25,	// (0x00013417) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0001ed19) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0001ed19) main_camera2_pane_g

0x3d53,	// (0x00013445) main_camera2_pane_t1_ParamLimits

0x3d53,	// (0x00013445) main_camera2_pane_t1

0x3d88,	// (0x0001347a) main_camera2_pane_t2_ParamLimits

0x3d88,	// (0x0001347a) main_camera2_pane_t2

0x3da5,	// (0x00013497) main_camera2_pane_t3_ParamLimits

0x3da5,	// (0x00013497) main_camera2_pane_t3

0x3e03,	// (0x000134f5) main_camera2_pane_t4_ParamLimits

0x3e03,	// (0x000134f5) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0001ed2c) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0001ed2c) main_camera2_pane_t

0x3e8c,	// (0x0001357e) cams_zoom_pane_cp4_ParamLimits

0x3e8c,	// (0x0001357e) cams_zoom_pane_cp4

0x3ea2,	// (0x00013594) image2_cif_pane_ParamLimits

0x3ea2,	// (0x00013594) image2_cif_pane

0x3ecd,	// (0x000135bf) image2_subqcif_pane_ParamLimits

0x3ecd,	// (0x000135bf) image2_subqcif_pane

0x3ee8,	// (0x000135da) main_video2_pane_g1_ParamLimits

0x3ee8,	// (0x000135da) main_video2_pane_g1

0x3f02,	// (0x000135f4) main_video2_pane_g2_ParamLimits

0x3f02,	// (0x000135f4) main_video2_pane_g2

0x3f18,	// (0x0001360a) main_video2_pane_g3_ParamLimits

0x3f18,	// (0x0001360a) main_video2_pane_g3

0x3f2e,	// (0x00013620) main_video2_pane_g4_ParamLimits

0x3f2e,	// (0x00013620) main_video2_pane_g4

0x3f44,	// (0x00013636) main_video2_pane_g5_ParamLimits

0x3f44,	// (0x00013636) main_video2_pane_g5

0x3f5a,	// (0x0001364c) main_video2_pane_g6_ParamLimits

0x3f5a,	// (0x0001364c) main_video2_pane_g6

0x0005,

0xf649,	// (0x0001ed3b) main_video2_pane_g_ParamLimits

0xf649,	// (0x0001ed3b) main_video2_pane_g

0x3f74,	// (0x00013666) main_video2_pane_t1_ParamLimits

0x3f74,	// (0x00013666) main_video2_pane_t1

0x3f98,	// (0x0001368a) main_video2_pane_t2_ParamLimits

0x3f98,	// (0x0001368a) main_video2_pane_t2

0x3fe8,	// (0x000136da) main_video2_pane_t3_ParamLimits

0x3fe8,	// (0x000136da) main_video2_pane_t3

0x0002,

0xf656,	// (0x0001ed48) main_video2_pane_t_ParamLimits

0xf656,	// (0x0001ed48) main_video2_pane_t

0x3478,	// (0x00012b6a) call_muted_g2

0x0001,

0xf5f8,	// (0x0001ecea) call_muted_g

0x9a31,	// (0x00019123) main_mup2_pane

0x4030,	// (0x00013722) main_mup2_pane_g1_ParamLimits

0x4030,	// (0x00013722) main_mup2_pane_g1

0x403c,	// (0x0001372e) main_mup2_pane_g2_ParamLimits

0x403c,	// (0x0001372e) main_mup2_pane_g2

0xc07f,	// (0x0001b771) main_mup_pane_g13_cp1

0xc087,	// (0x0001b779) mup_volume_pane_cp1

0x405a,	// (0x0001374c) main_mup2_pane_g4_ParamLimits

0x405a,	// (0x0001374c) main_mup2_pane_g4

0x406c,	// (0x0001375e) main_mup2_pane_g5_ParamLimits

0x406c,	// (0x0001375e) main_mup2_pane_g5

0x407e,	// (0x00013770) main_mup2_pane_g6_ParamLimits

0x407e,	// (0x00013770) main_mup2_pane_g6

0x4090,	// (0x00013782) main_mup2_pane_g7_ParamLimits

0x4090,	// (0x00013782) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0001ed4f) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0001ed4f) main_mup2_pane_g

0x40a8,	// (0x0001379a) main_mup2_pane_t1_ParamLimits

0x40a8,	// (0x0001379a) main_mup2_pane_t1

0x40be,	// (0x000137b0) main_mup2_pane_t2_ParamLimits

0x40be,	// (0x000137b0) main_mup2_pane_t2

0x40d4,	// (0x000137c6) main_mup2_pane_t3_ParamLimits

0x40d4,	// (0x000137c6) main_mup2_pane_t3

0x40ea,	// (0x000137dc) main_mup2_pane_t4_ParamLimits

0x40ea,	// (0x000137dc) main_mup2_pane_t4

0x4102,	// (0x000137f4) main_mup2_pane_t5_ParamLimits

0x4102,	// (0x000137f4) main_mup2_pane_t5

0x411a,	// (0x0001380c) main_mup2_pane_t6_ParamLimits

0x411a,	// (0x0001380c) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0001ed5e) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0001ed5e) main_mup2_pane_t

0x414a,	// (0x0001383c) mup2_visualizer_pane_ParamLimits

0x414a,	// (0x0001383c) mup2_visualizer_pane

0x4178,	// (0x0001386a) mup_progress_pane_cp_ParamLimits

0x4178,	// (0x0001386a) mup_progress_pane_cp

0xc061,	// (0x0001b753) mup_volume_pane_cp_ParamLimits

0xc061,	// (0x0001b753) mup_volume_pane_cp

0x418e,	// (0x00013880) mup2_visualizer_pane_g1_ParamLimits

0x418e,	// (0x00013880) mup2_visualizer_pane_g1

0xbfa0,	// (0x0001b692) mup2_visualizer_pane_g2_ParamLimits

0xbfa0,	// (0x0001b692) mup2_visualizer_pane_g2

0x41a5,	// (0x00013897) mup2_visualizer_pane_g3_ParamLimits

0x41a5,	// (0x00013897) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0001ed6b) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0001ed6b) mup2_visualizer_pane_g

0xad31,	// (0x0001a423) aid_size_cell_fmradio

0x3628,	// (0x00012d1a) aid_height_parent_landcape

0xa161,	// (0x00019853) wml_content_pane_cp

0xa169,	// (0x0001985b) wml_tabs_pane

0xa172,	// (0x00019864) popup_wml_miniature_window

0xa17a,	// (0x0001986c) scroll_pane_cp021

0xa18e,	// (0x00019880) wml_content_pane_comp8

0x9a31,	// (0x00019123) bg_popup_sub_pane_cp05

0xbfbe,	// (0x0001b6b0) popup_wml_miniature_window_g1

0xbfc6,	// (0x0001b6b8) wml_miniature_view_pane

0x41b1,	// (0x000138a3) aid_size_wml_view

0x41b9,	// (0x000138ab) wml_miniature_view_pane_g1

0x41c2,	// (0x000138b4) wml_miniature_view_pane_g2

0x41cb,	// (0x000138bd) wml_miniature_view_pane_g3

0x41d3,	// (0x000138c5) wml_miniature_view_pane_g4

0x41db,	// (0x000138cd) wml_miniature_view_pane_g5

0x41e3,	// (0x000138d5) wml_miniature_view_pane_g6

0x41eb,	// (0x000138dd) wml_miniature_view_pane_g7

0x41f3,	// (0x000138e5) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0001ed72) wml_miniature_view_pane_g

0xbfce,	// (0x0001b6c0) background_graphic_ParamLimits

0xbfce,	// (0x0001b6c0) background_graphic

0xbfda,	// (0x0001b6cc) wml_tabs_2_pane

0xbfe3,	// (0x0001b6d5) wml_tabs_3_pane_ParamLimits

0xbfe3,	// (0x0001b6d5) wml_tabs_3_pane

0xbff5,	// (0x0001b6e7) wml_tabs_4_pane_ParamLimits

0xbff5,	// (0x0001b6e7) wml_tabs_4_pane

0xc00b,	// (0x0001b6fd) wml_tabs_5_pane_ParamLimits

0xc00b,	// (0x0001b6fd) wml_tabs_5_pane

0xc025,	// (0x0001b717) wml_tabs_pane_g2_ParamLimits

0xc025,	// (0x0001b717) wml_tabs_pane_g2

0xc039,	// (0x0001b72b) wml_tabs_pane_g3_ParamLimits

0xc039,	// (0x0001b72b) wml_tabs_pane_g3

0x41fb,	// (0x000138ed) wml_tabs_2_active_pane_ParamLimits

0x41fb,	// (0x000138ed) wml_tabs_2_active_pane

0x420f,	// (0x00013901) wml_tabs_2_passive_pane_ParamLimits

0x420f,	// (0x00013901) wml_tabs_2_passive_pane

0x4223,	// (0x00013915) wml_tabs_3_active_pane_cp_ParamLimits

0x4223,	// (0x00013915) wml_tabs_3_active_pane_cp

0x4238,	// (0x0001392a) wml_tabs_3_passive_pane_ParamLimits

0x4238,	// (0x0001392a) wml_tabs_3_passive_pane

0x424b,	// (0x0001393d) wml_tabs_3_passive_pane_cp_ParamLimits

0x424b,	// (0x0001393d) wml_tabs_3_passive_pane_cp

0x4262,	// (0x00013954) tabs_4_active_pane

0x426a,	// (0x0001395c) tabs_4_passive_pane

0x4274,	// (0x00013966) tabs_4_passive_pane_cp

0x427c,	// (0x0001396e) tabs_4_passive_pane_cp2

0x333c,	// (0x00012a2e) aid_height_text

0x2983,	// (0x00012075) mup_volume_cont_pane_ParamLimits

0x2983,	// (0x00012075) mup_volume_cont_pane

0xfff8,	// (0x0000f6ea) aid_size_cell_pinb

0x0002,	// (0x0000f6f4) aid_size_list_pinb

0x4164,	// (0x00013856) mup2_volume_cont_pane_ParamLimits

0x4164,	// (0x00013856) mup2_volume_cont_pane

0xc04d,	// (0x0001b73f) mup2_volume_cont_pane_g1_ParamLimits

0xc04d,	// (0x0001b73f) mup2_volume_cont_pane_g1

0xfcb8,	// (0x0000f3aa) aid_size_cell_touch_ParamLimits

0xfcb8,	// (0x0000f3aa) aid_size_cell_touch

0xfee8,	// (0x0000f5da) touch_pane_ParamLimits

0xfee8,	// (0x0000f5da) touch_pane

0x95af,	// (0x00018ca1) main_rss2_pane

0xc08f,	// (0x0001b781) listscroll_rss2_pane

0xc098,	// (0x0001b78a) rss2_navigation_pane

0xc0a0,	// (0x0001b792) list_rss2_pane

0xa866,	// (0x00019f58) scroll_pane_cp22

0xc0a8,	// (0x0001b79a) rss2_navigation_pane_g1

0xc0b1,	// (0x0001b7a3) rss2_navigation_pane_g2

0xc0b9,	// (0x0001b7ab) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0001ed83) rss2_navigation_pane_g

0xc0c1,	// (0x0001b7b3) rss2_navigation_pane_t1

0x4286,	// (0x00013978) rss2_list_single_pane_ParamLimits

0x4286,	// (0x00013978) rss2_list_single_pane

0xc0cf,	// (0x0001b7c1) rss2_list_single_pane_t2

0xc0dd,	// (0x0001b7cf) rss2_list_single_pane_t3_ParamLimits

0xc0dd,	// (0x0001b7cf) rss2_list_single_pane_t3

0xc0fa,	// (0x0001b7ec) rss2_list_single_pane_t4

0x2177,	// (0x00011869) smil_status_pane_g1

0x9610,	// (0x00018d02) main_image2_pane_ParamLimits

0x9610,	// (0x00018d02) main_image2_pane

0x3d3c,	// (0x0001342e) main_camera2_pane_g9_ParamLimits

0x3d3c,	// (0x0001342e) main_camera2_pane_g9

0x3e58,	// (0x0001354a) main_camera2_pane_t5_ParamLimits

0x3e58,	// (0x0001354a) main_camera2_pane_t5

0xbf75,	// (0x0001b667) main_camera2_pane_t6_ParamLimits

0xbf75,	// (0x0001b667) main_camera2_pane_t6

0x429c,	// (0x0001398e) main_image2_pane_g1_ParamLimits

0x429c,	// (0x0001398e) main_image2_pane_g1

0x3056,	// (0x00012748) smil2_video_pane_ParamLimits

0x3056,	// (0x00012748) smil2_video_pane

0x95cd,	// (0x00018cbf) aid_zoom_text_primary_cp

0x9606,	// (0x00018cf8) popup_preview_fixed_window

0xa0ca,	// (0x000197bc) im_reading_pane_g1

0x3c0e,	// (0x00013300) cams2_bc_adjust_pane_cp_ParamLimits

0x3c0e,	// (0x00013300) cams2_bc_adjust_pane_cp

0x3e7e,	// (0x00013570) cams2_bc_adjust_pane_ParamLimits

0x3e7e,	// (0x00013570) cams2_bc_adjust_pane

0xc108,	// (0x0001b7fa) cams2_bc_adjust_pane_g1

0xc110,	// (0x0001b802) cams2_slider_pane

0xc119,	// (0x0001b80b) cams2_slider_pane_g1

0xc122,	// (0x0001b814) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0001ed8a) cams2_slider_pane_g

0x00f2,	// (0x0000f7e4) calc_display_pane_ParamLimits

0x011a,	// (0x0000f80c) calc_paper_pane_ParamLimits

0x013d,	// (0x0000f82f) grid_calc_pane_ParamLimits

0xa735,	// (0x00019e27) popup_clock_digital_window_t1_ParamLimits

0xacce,	// (0x0001a3c0) main_image_pane_t1

0x00d4,	// (0x0000f7c6) aid_size_cell_calc_ParamLimits

0x00d4,	// (0x0000f7c6) aid_size_cell_calc

0x366e,	// (0x00012d60) popup_blid_sat_info2_window_ParamLimits

0x366e,	// (0x00012d60) popup_blid_sat_info2_window

0xc144,	// (0x0001b836) aid_size_cell_blid

0xc14c,	// (0x0001b83e) bg_popup_window_pane_cp07

0xc16f,	// (0x0001b861) grid_popup_blid_pane

0xc179,	// (0x0001b86b) heading_pane_cp05_ParamLimits

0xc179,	// (0x0001b86b) heading_pane_cp05

0xc243,	// (0x0001b935) cell_popup_blid_pane_ParamLimits

0xc243,	// (0x0001b935) cell_popup_blid_pane

0xc26d,	// (0x0001b95f) cell_popup_blid_pane_g1

0xc275,	// (0x0001b967) cell_popup_blid_pane_t1

0x4134,	// (0x00013826) mup2_indicator_pane_ParamLimits

0x4134,	// (0x00013826) mup2_indicator_pane

0xa9a0,	// (0x0001a092) mup2_visualizer_osc_pane

0xbfac,	// (0x0001b69e) mup2_visualizer_spec_pane_ParamLimits

0xbfac,	// (0x0001b69e) mup2_visualizer_spec_pane

0x42b2,	// (0x000139a4) mup2_spec_half_pane

0x42bb,	// (0x000139ad) mup2_spec_half_pane_cp

0x42c3,	// (0x000139b5) mup2_spec_bar_pane_ParamLimits

0x42c3,	// (0x000139b5) mup2_spec_bar_pane

0xbefe,	// (0x0001b5f0) mup2_spec_bar_pane_g1

0xbf08,	// (0x0001b5fa) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0001ecfd) mup2_spec_bar_pane_g

0x42e3,	// (0x000139d5) mup2_osc_middle_pane

0xbf1a,	// (0x0001b60c) mup2_visualizer_osc_pane_g1

0x963e,	// (0x00018d30) popup_number_entry_window_t1_ParamLimits

0x9651,	// (0x00018d43) popup_number_entry_window_t2_ParamLimits

0x9663,	// (0x00018d55) popup_number_entry_window_t3_ParamLimits

0xff3a,	// (0x0000f62c) popup_number_entry_window_t5_ParamLimits

0xff3a,	// (0x0000f62c) popup_number_entry_window_t5

0xf0cd,	// (0x0001e7bf) popup_number_entry_window_t_ParamLimits

0x9675,	// (0x00018d67) text_title_cp2_ParamLimits

0xaba8,	// (0x0001a29a) aid_hotspot_pointer_text2_pane

0xabce,	// (0x0001a2c0) main_viewer_pane_g9_ParamLimits

0xabce,	// (0x0001a2c0) main_viewer_pane_g9

0xa303,	// (0x000199f5) cale_month_pane_t1_ParamLimits

0xa357,	// (0x00019a49) bg_cale_pane_ParamLimits

0xa36f,	// (0x00019a61) list_cale_pane_ParamLimits

0xa380,	// (0x00019a72) listscroll_cale_day_pane_t1

0xa392,	// (0x00019a84) scroll_pane_cp09_ParamLimits

0x29b9,	// (0x000120ab) main_mup_eq_pane_t1_ParamLimits

0x29b9,	// (0x000120ab) main_mup_eq_pane_t1

0x29d5,	// (0x000120c7) main_mup_eq_pane_t2_ParamLimits

0x29d5,	// (0x000120c7) main_mup_eq_pane_t2

0x29f1,	// (0x000120e3) main_mup_eq_pane_t3_ParamLimits

0x29f1,	// (0x000120e3) main_mup_eq_pane_t3

0x2a0f,	// (0x00012101) main_mup_eq_pane_t4_ParamLimits

0x2a0f,	// (0x00012101) main_mup_eq_pane_t4

0x2a2d,	// (0x0001211f) main_mup_eq_pane_t5_ParamLimits

0x2a2d,	// (0x0001211f) main_mup_eq_pane_t5

0x2a4b,	// (0x0001213d) main_mup_eq_pane_t6_ParamLimits

0x2a4b,	// (0x0001213d) main_mup_eq_pane_t6

0x2a61,	// (0x00012153) main_mup_eq_pane_t7_ParamLimits

0x2a61,	// (0x00012153) main_mup_eq_pane_t7

0x2a77,	// (0x00012169) main_mup_eq_pane_t8_ParamLimits

0x2a77,	// (0x00012169) main_mup_eq_pane_t8

0x2a8d,	// (0x0001217f) main_mup_eq_pane_t9_ParamLimits

0x2a8d,	// (0x0001217f) main_mup_eq_pane_t9

0x2aa9,	// (0x0001219b) main_mup_eq_pane_t10_ParamLimits

0x2aa9,	// (0x0001219b) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0001eb4c) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0001eb4c) main_mup_eq_pane_t

0x2b7e,	// (0x00012270) mup_equalizer_pane_cp5_ParamLimits

0x2b96,	// (0x00012288) mup_equalizer_pane_cp6_ParamLimits

0x2bae,	// (0x000122a0) mup_equalizer_pane_cp7_ParamLimits

0x95af,	// (0x00018ca1) main_gallery_pane

0xbf23,	// (0x0001b615) smil2_volume_pane

0xbf2b,	// (0x0001b61d) smil_status_volume_pane_g1_ParamLimits

0xbf3e,	// (0x0001b630) smil_status_volume_pane_g2_ParamLimits

0xbf51,	// (0x0001b643) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0001ed02) smil_status_volume_pane_g_ParamLimits

0xc14c,	// (0x0001b83e) bg_popup_window_pane_cp07_ParamLimits

0xc15a,	// (0x0001b84c) blid_firmament_pane

0x42ec,	// (0x000139de) aid_size_cell_gallery_ParamLimits

0x42ec,	// (0x000139de) aid_size_cell_gallery

0x4302,	// (0x000139f4) grid_gallery_pane_ParamLimits

0x4302,	// (0x000139f4) grid_gallery_pane

0x431d,	// (0x00013a0f) cell_gallery_pane_ParamLimits

0x431d,	// (0x00013a0f) cell_gallery_pane

0xc283,	// (0x0001b975) bg_cell_gallery_focus_pane_ParamLimits

0xc283,	// (0x0001b975) bg_cell_gallery_focus_pane

0xc295,	// (0x0001b987) cell_gallery_pane_g1_ParamLimits

0xc295,	// (0x0001b987) cell_gallery_pane_g1

0x4368,	// (0x00013a5a) cell_gallery_pane_g2_ParamLimits

0x4368,	// (0x00013a5a) cell_gallery_pane_g2

0x4375,	// (0x00013a67) cell_gallery_pane_g3_ParamLimits

0x4375,	// (0x00013a67) cell_gallery_pane_g3

0xc2a1,	// (0x0001b993) cell_gallery_pane_g4_ParamLimits

0xc2a1,	// (0x0001b993) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0001edb0) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0001edb0) cell_gallery_pane_g

0xc2ad,	// (0x0001b99f) bg_cell_gallery_focus_pane_g1

0xc2b5,	// (0x0001b9a7) bg_cell_gallery_focus_pane_g2

0xc2bd,	// (0x0001b9af) bg_cell_gallery_focus_pane_g3

0xc2c5,	// (0x0001b9b7) bg_cell_gallery_focus_pane_g4

0xc2cd,	// (0x0001b9bf) bg_cell_gallery_focus_pane_g5

0xc2d5,	// (0x0001b9c7) bg_cell_gallery_focus_pane_g6

0xc2dd,	// (0x0001b9cf) bg_cell_gallery_focus_pane_g7

0xc2e5,	// (0x0001b9d7) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0001edb9) bg_cell_gallery_focus_pane_g

0xc2ed,	// (0x0001b9df) aid_firma_cardinal

0xc301,	// (0x0001b9f3) blid_firmament_pane_t1

0xc318,	// (0x0001ba0a) blid_firmament_pane_t2

0xc32f,	// (0x0001ba21) blid_firmament_pane_t3

0xc346,	// (0x0001ba38) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0001edca) blid_firmament_pane_t

0xc35d,	// (0x0001ba4f) blid_sat_info_pane

0xc36d,	// (0x0001ba5f) blid_sat_info_pane_g1

0xc36d,	// (0x0001ba5f) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0001edd3) blid_sat_info_pane_g

0xc377,	// (0x0001ba69) blid_sat_info_pane_t1

0xc385,	// (0x0001ba77) smil2_volume_content_pane

0xc38e,	// (0x0001ba80) smil2_volume_pane_g1

0xc396,	// (0x0001ba88) smil2_volume_content_pane_g1

0xc39f,	// (0x0001ba91) smil2_volume_content_pane_g2

0xc3a8,	// (0x0001ba9a) smil2_volume_content_pane_g3

0xc3b1,	// (0x0001baa3) smil2_volume_content_pane_g4

0xc3ba,	// (0x0001baac) smil2_volume_content_pane_g5

0xc3c3,	// (0x0001bab5) smil2_volume_content_pane_g6

0xc3cc,	// (0x0001babe) smil2_volume_content_pane_g7

0xc3d5,	// (0x0001bac7) smil2_volume_content_pane_g8

0xc3de,	// (0x0001bad0) smil2_volume_content_pane_g9

0xc3e7,	// (0x0001bad9) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0001edd8) smil2_volume_content_pane_g

0x0771,	// (0x0000fe63) cale_week_day_heading_pane_t1_ParamLimits

0x07bb,	// (0x0000fead) cale_week_day_heading_pane_t2_ParamLimits

0x080a,	// (0x0000fefc) cale_week_day_heading_pane_t3_ParamLimits

0x0859,	// (0x0000ff4b) cale_week_day_heading_pane_t4_ParamLimits

0x08a8,	// (0x0000ff9a) cale_week_day_heading_pane_t5_ParamLimits

0x08fb,	// (0x0000ffed) cale_week_day_heading_pane_t6_ParamLimits

0x0952,	// (0x00010044) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0001e8c4) cale_week_day_heading_pane_t_ParamLimits

0x9f62,	// (0x00019654) bg_cale_side_pane_ParamLimits

0x099c,	// (0x0001008e) cale_week_time_pane_t1_ParamLimits

0x09d6,	// (0x000100c8) cale_week_time_pane_t2_ParamLimits

0x0a10,	// (0x00010102) cale_week_time_pane_t3_ParamLimits

0x0a4a,	// (0x0001013c) cale_week_time_pane_t4_ParamLimits

0x0a84,	// (0x00010176) cale_week_time_pane_t5_ParamLimits

0x0abe,	// (0x000101b0) cale_week_time_pane_t6_ParamLimits

0x0af8,	// (0x000101ea) cale_week_time_pane_t7_ParamLimits

0x0b32,	// (0x00010224) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0001e8d3) cale_week_time_pane_t_ParamLimits

0x0b72,	// (0x00010264) cell_cale_week_pane_g2_ParamLimits

0x9f62,	// (0x00019654) bg_cale_side_pane_cp01_ParamLimits

0x1f5c,	// (0x0001164e) cale_month_week_pane_t1_ParamLimits

0x1f75,	// (0x00011667) cale_month_week_pane_t2_ParamLimits

0x1f8e,	// (0x00011680) cale_month_week_pane_t3_ParamLimits

0x1fa7,	// (0x00011699) cale_month_week_pane_t4_ParamLimits

0x1fc0,	// (0x000116b2) cale_month_week_pane_t5_ParamLimits

0x1fd9,	// (0x000116cb) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0001e9ac) cale_month_week_pane_t_ParamLimits

0xa315,	// (0x00019a07) cell_cale_month_pane_g1_ParamLimits

0x95af,	// (0x00018ca1) main_cale_event_viewer_pane

0x95af,	// (0x00018ca1) listscroll_cale_event_viewer_pane

0xc3f0,	// (0x0001bae2) list_cale_ev_pane

0xc3f8,	// (0x0001baea) scroll_pane_cp023

0x4382,	// (0x00013a74) field_cale_ev_pane_ParamLimits

0x4382,	// (0x00013a74) field_cale_ev_pane

0xc404,	// (0x0001baf6) field_cale_ev_content_pane_ParamLimits

0xc404,	// (0x0001baf6) field_cale_ev_content_pane

0xc410,	// (0x0001bb02) field_cale_ev_pane_g1_ParamLimits

0xc410,	// (0x0001bb02) field_cale_ev_pane_g1

0xc41c,	// (0x0001bb0e) field_cale_ev_pane_g2_ParamLimits

0xc41c,	// (0x0001bb0e) field_cale_ev_pane_g2

0xc434,	// (0x0001bb26) field_cale_ev_pane_g3_ParamLimits

0xc434,	// (0x0001bb26) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0001eded) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0001eded) field_cale_ev_pane_g

0xc44c,	// (0x0001bb3e) field_cale_ev_pane_t1_ParamLimits

0xc44c,	// (0x0001bb3e) field_cale_ev_pane_t1

0x43a6,	// (0x00013a98) field_cale_ev_content_pane_t1_ParamLimits

0x43a6,	// (0x00013a98) field_cale_ev_content_pane_t1

0x2c6a,	// (0x0001235c) bg_button_pane_cp01

0x03ff,	// (0x0000faf1) listscroll_cale_week_pane_ParamLimits

0x0411,	// (0x0000fb03) popup_toolbar_window_cp01

0x9f2e,	// (0x00019620) listscroll_cale_week_pane_t1_ParamLimits

0x03ff,	// (0x0000faf1) listscroll_cale_day_pane_ParamLimits

0x0411,	// (0x0000fb03) popup_toolbar_window_cp02

0xa380,	// (0x00019a72) listscroll_cale_day_pane_t1_ParamLimits

0x03ff,	// (0x0000faf1) main_cale_month_pane_ParamLimits

0x38ee,	// (0x00012fe0) popup_toolbar_window_cp03_ParamLimits

0x38ee,	// (0x00012fe0) popup_toolbar_window_cp03

0x2f14,	// (0x00012606) main_image_pane_g2_ParamLimits

0x2f14,	// (0x00012606) main_image_pane_g2

0x2f25,	// (0x00012617) main_image_pane_g3_ParamLimits

0x2f25,	// (0x00012617) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0001ebde) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0001ebde) main_image_pane_g

0xacce,	// (0x0001a3c0) main_image_pane_t1_ParamLimits

0x2f36,	// (0x00012628) main_image_pane_t2_ParamLimits

0x2f36,	// (0x00012628) main_image_pane_t2

0x2f48,	// (0x0001263a) main_image_pane_t3_ParamLimits

0x2f48,	// (0x0001263a) main_image_pane_t3

0x2f70,	// (0x00012662) main_image_pane_t4_ParamLimits

0x2f70,	// (0x00012662) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0001ebe5) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0001ebe5) main_image_pane_t

0x2f90,	// (0x00012682) popup_image_details_window_cp01

0x2f9a,	// (0x0001268c) popup_toobar_trans_pane_cp01_ParamLimits

0x2f9a,	// (0x0001268c) popup_toobar_trans_pane_cp01

0x3761,	// (0x00012e53) popup_image_details_window_ParamLimits

0x3761,	// (0x00012e53) popup_image_details_window

0xbe82,	// (0x0001b574) popup_image_focus_window

0x3bc8,	// (0x000132ba) camera2_autofocus_pane_ParamLimits

0x3bc8,	// (0x000132ba) camera2_autofocus_pane

0x95af,	// (0x00018ca1) bg_popup_sub_pane_cp06

0xc463,	// (0x0001bb55) popup_image_focus_window_g1

0xc46b,	// (0x0001bb5d) popup_image_focus_window_g2

0xc473,	// (0x0001bb65) popup_image_focus_window_g3

0xc47b,	// (0x0001bb6d) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0001edf4) popup_image_focus_window_g

0xc483,	// (0x0001bb75) popup_image_focus_window_t1

0xc491,	// (0x0001bb83) popup_image_focus_window_t2

0xc4a1,	// (0x0001bb93) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0001edfd) popup_image_focus_window_t

0xc4af,	// (0x0001bba1) camera2_autofocus_pane_g1

0x9610,	// (0x00018d02) bg_tb_trans_pane_cp01

0xc4bd,	// (0x0001bbaf) popup_image_details_window_g1

0xc4d0,	// (0x0001bbc2) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0001ee0f) popup_image_details_window_g

0xc4f9,	// (0x0001bbeb) popup_image_details_window_t1

0xc50b,	// (0x0001bbfd) popup_image_details_window_t2

0xc524,	// (0x0001bc16) popup_image_details_window_t3

0xc538,	// (0x0001bc2a) popup_image_details_window_t4

0xc553,	// (0x0001bc45) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0001ee16) popup_image_details_window_t

0x9d45,	// (0x00019437) bg_calc_paper_pane_ParamLimits

0x95af,	// (0x00018ca1) grid_highlight_pane_cp013

0x9d59,	// (0x0001944b) list_calc_pane_ParamLimits

0x9d6b,	// (0x0001945d) scroll_pane_cp024

0x9d73,	// (0x00019465) bg_calc_display_pane_ParamLimits

0x023d,	// (0x0000f92f) calc_display_pane_t1_ParamLimits

0x024f,	// (0x0000f941) calc_display_pane_t2_ParamLimits

0x9d7f,	// (0x00019471) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0001e846) calc_display_pane_t_ParamLimits

0x0318,	// (0x0000fa0a) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0001e863) cell_calc_pane_g

0x0321,	// (0x0000fa13) cell_calc_pane_t1

0x9df6,	// (0x000194e8) grid_highlight_pane_cp02_ParamLimits

0x9e0c,	// (0x000194fe) toolbar_button_pane_cp01_ParamLimits

0x9e0c,	// (0x000194fe) toolbar_button_pane_cp01

0xad13,	// (0x0001a405) temp_image_control_pane_ParamLimits

0xad13,	// (0x0001a405) temp_image_control_pane

0x9610,	// (0x00018d02) main_mp3_pane

0xc56d,	// (0x0001bc5f) temp_image_control_pane_g1_ParamLimits

0xc56d,	// (0x0001bc5f) temp_image_control_pane_g1

0xc57b,	// (0x0001bc6d) temp_image_control_pane_g2_ParamLimits

0xc57b,	// (0x0001bc6d) temp_image_control_pane_g2

0xc58d,	// (0x0001bc7f) temp_image_control_pane_g3_ParamLimits

0xc58d,	// (0x0001bc7f) temp_image_control_pane_g3

0x43f7,	// (0x00013ae9) temp_image_control_pane_g4_ParamLimits

0x43f7,	// (0x00013ae9) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0001ee21) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0001ee21) temp_image_control_pane_g

0xc56d,	// (0x0001bc5f) main_mp3_pane_g1

0x440a,	// (0x00013afc) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0001ee2a) main_mp3_pane_g

0xc5d0,	// (0x0001bcc2) main_mp3_pane_t1

0x9fd5,	// (0x000196c7) main_camera_pane_g8_ParamLimits

0x9fd5,	// (0x000196c7) main_camera_pane_g8

0x0eaf,	// (0x000105a1) main_video_pane_g7_ParamLimits

0x0eaf,	// (0x000105a1) main_video_pane_g7

0xbf8e,	// (0x0001b680) main_camera2_pane_t7_ParamLimits

0xbf8e,	// (0x0001b680) main_camera2_pane_t7

0xa121,	// (0x00019813) scroll_pane_cp025_ParamLimits

0xa121,	// (0x00019813) scroll_pane_cp025

0xa135,	// (0x00019827) scroll_pane_cp026_ParamLimits

0xa135,	// (0x00019827) scroll_pane_cp026

0xa144,	// (0x00019836) wml_content_pane_ParamLimits

0x95af,	// (0x00018ca1) main_touch_calib_pane

0x44dc,	// (0x00013bce) main_touch_calib_pane_g1

0x44ee,	// (0x00013be0) main_touch_calib_pane_g2

0x4500,	// (0x00013bf2) main_touch_calib_pane_g3

0x4512,	// (0x00013c04) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0001ee48) main_touch_calib_pane_g

0x4524,	// (0x00013c16) main_touch_calib_pane_t1

0x453e,	// (0x00013c30) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0001ee51) main_touch_calib_pane_t

0xa8e1,	// (0x00019fd3) mup_progress_pane_cp02

0xa900,	// (0x00019ff2) navi_pane_g1

0xa962,	// (0x0001a054) navi_pane_mp_t3

0x9610,	// (0x00018d02) main_mp3_pane_ParamLimits

0x3930,	// (0x00013022) navi_pane_ParamLimits

0xc56d,	// (0x0001bc5f) main_mp3_pane_g1_ParamLimits

0x440a,	// (0x00013afc) main_mp3_pane_g2_ParamLimits

0x4416,	// (0x00013b08) main_mp3_pane_g3_ParamLimits

0x4416,	// (0x00013b08) main_mp3_pane_g3

0x4424,	// (0x00013b16) main_mp3_pane_g4_ParamLimits

0x4424,	// (0x00013b16) main_mp3_pane_g4

0xc59d,	// (0x0001bc8f) main_mp3_pane_g5_ParamLimits

0xc59d,	// (0x0001bc8f) main_mp3_pane_g5

0xc5ab,	// (0x0001bc9d) main_mp3_pane_g6_ParamLimits

0xc5ab,	// (0x0001bc9d) main_mp3_pane_g6

0xc5b8,	// (0x0001bcaa) main_mp3_pane_g7_ParamLimits

0xc5b8,	// (0x0001bcaa) main_mp3_pane_g7

0xc5c4,	// (0x0001bcb6) main_mp3_pane_g8_ParamLimits

0xc5c4,	// (0x0001bcb6) main_mp3_pane_g8

0xf738,	// (0x0001ee2a) main_mp3_pane_g_ParamLimits

0x4430,	// (0x00013b22) main_mp3_pane_t2

0x443e,	// (0x00013b30) main_mp3_pane_t3

0xc5de,	// (0x0001bcd0) main_mp3_pane_t4

0xc5ec,	// (0x0001bcde) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0001ee3b) main_mp3_pane_t

0xc5fa,	// (0x0001bcec) mup_progress_pane_cp01

0x95cd,	// (0x00018cbf) aid_zoom_text_secondary2

0xc3f0,	// (0x0001bae2) list_cale_ev2_pane

0xc3f8,	// (0x0001baea) scroll_pane_cp023_ParamLimits

0x4598,	// (0x00013c8a) field_cale_ev2_pane_ParamLimits

0x4598,	// (0x00013c8a) field_cale_ev2_pane

0x45bc,	// (0x00013cae) field_cale_ev2_pane_g1_ParamLimits

0x45bc,	// (0x00013cae) field_cale_ev2_pane_g1

0x45c8,	// (0x00013cba) field_cale_ev2_pane_g2_ParamLimits

0x45c8,	// (0x00013cba) field_cale_ev2_pane_g2

0x45e0,	// (0x00013cd2) field_cale_ev2_pane_g3_ParamLimits

0x45e0,	// (0x00013cd2) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0001ee5c) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0001ee5c) field_cale_ev2_pane_g

0x45f8,	// (0x00013cea) field_cale_ev2_pane_t1_ParamLimits

0x45f8,	// (0x00013cea) field_cale_ev2_pane_t1

0x460f,	// (0x00013d01) field_cale_ev2_pane_t2_ParamLimits

0x460f,	// (0x00013d01) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0001ee65) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0001ee65) field_cale_ev2_pane_t

0x2db1,	// (0x000124a3) main_postcard_pane_g5_ParamLimits

0x2db1,	// (0x000124a3) main_postcard_pane_g5

0x2dc7,	// (0x000124b9) main_postcard_pane_g6_ParamLimits

0x2dc7,	// (0x000124b9) main_postcard_pane_g6

0x0c5b,	// (0x0001034d) camera2_autofocus_pane_cp_ParamLimits

0x0c5b,	// (0x0001034d) camera2_autofocus_pane_cp

0x9610,	// (0x00018d02) main_mup3_pane

0x4644,	// (0x00013d36) main_mup3_pane_g1_ParamLimits

0x4644,	// (0x00013d36) main_mup3_pane_g1

0x4666,	// (0x00013d58) main_mup3_pane_g2_ParamLimits

0x4666,	// (0x00013d58) main_mup3_pane_g2

0x46e9,	// (0x00013ddb) main_mup3_pane_g3_ParamLimits

0x46e9,	// (0x00013ddb) main_mup3_pane_g3

0x4731,	// (0x00013e23) main_mup3_pane_g4_ParamLimits

0x4731,	// (0x00013e23) main_mup3_pane_g4

0x4777,	// (0x00013e69) main_mup3_pane_g5_ParamLimits

0x4777,	// (0x00013e69) main_mup3_pane_g5

0x47bf,	// (0x00013eb1) main_mup3_pane_g6_ParamLimits

0x47bf,	// (0x00013eb1) main_mup3_pane_g6

0xc60e,	// (0x0001bd00) main_mup3_pane_g7_ParamLimits

0xc60e,	// (0x0001bd00) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0001ee75) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0001ee75) main_mup3_pane_g

0x483f,	// (0x00013f31) main_mup3_pane_t1_ParamLimits

0x483f,	// (0x00013f31) main_mup3_pane_t1

0x48ad,	// (0x00013f9f) main_mup3_pane_t2_ParamLimits

0x48ad,	// (0x00013f9f) main_mup3_pane_t2

0x4983,	// (0x00014075) main_mup3_pane_t4_ParamLimits

0x4983,	// (0x00014075) main_mup3_pane_t4

0x49e1,	// (0x000140d3) main_mup3_pane_t5_ParamLimits

0x49e1,	// (0x000140d3) main_mup3_pane_t5

0x4a9b,	// (0x0001418d) main_mup3_pane_t6_ParamLimits

0x4a9b,	// (0x0001418d) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0001ee86) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0001ee86) main_mup3_pane_t

0x4b53,	// (0x00014245) mup3_progress_pane_ParamLimits

0x4b53,	// (0x00014245) mup3_progress_pane

0x4be5,	// (0x000142d7) popup_mup3_control_window_ParamLimits

0x4be5,	// (0x000142d7) popup_mup3_control_window

0xc61c,	// (0x0001bd0e) popup_mup3_text_window

0x4c1b,	// (0x0001430d) mup3_progress_pane_t1

0x4c39,	// (0x0001432b) mup3_progress_pane_t2

0xc624,	// (0x0001bd16) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0001ee93) mup3_progress_pane_t

0xc641,	// (0x0001bd33) mup_progress_pane_cp03

0x95af,	// (0x00018ca1) bg_tb_trans_pane_cp04

0x4c57,	// (0x00014349) mup3_volume_pane

0x4c5f,	// (0x00014351) popup_mup3_control_window_g1

0x4c68,	// (0x0001435a) mup3_volume_pane_g1

0x4c71,	// (0x00014363) mup3_volume_pane_g2

0x4c7a,	// (0x0001436c) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0001ee9a) mup3_volume_pane_g

0x95af,	// (0x00018ca1) bg_tb_trans_pane_cp03

0xc651,	// (0x0001bd43) popup_mup3_text_window_g1

0xc659,	// (0x0001bd4b) popup_mup3_text_window_t1

0x9dcd,	// (0x000194bf) list_calc_item_pane_g1_ParamLimits

0xc076,	// (0x0001b768) mup_volume_pane_cp_g1

0x4558,	// (0x00013c4a) main_touch_calib_pane_t3

0x456c,	// (0x00013c5e) main_touch_calib_pane_t4

0x4582,	// (0x00013c74) main_touch_calib_pane_t5

0x95b9,	// (0x00018cab) aid_cell_size_toolbar2

0x95c1,	// (0x00018cb3) aid_popup3_width_pane

0x95cd,	// (0x00018cbf) aid_zoom_text_msg_primary

0x0c30,	// (0x00010322) vorec_t7

0x9d91,	// (0x00019483) bg_calc_paper_pane_g1_ParamLimits

0x9d9d,	// (0x0001948f) bg_calc_paper_pane_g2_ParamLimits

0x9da9,	// (0x0001949b) bg_calc_paper_pane_g3_ParamLimits

0x9db5,	// (0x000194a7) bg_calc_paper_pane_g4_ParamLimits

0x9dc1,	// (0x000194b3) bg_calc_paper_pane_g5_ParamLimits

0x029e,	// (0x0000f990) bg_calc_paper_pane_g6_ParamLimits

0x02b1,	// (0x0000f9a3) bg_calc_paper_pane_g7_ParamLimits

0x02c4,	// (0x0000f9b6) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0001e84d) bg_calc_paper_pane_g_ParamLimits

0x02d5,	// (0x0000f9c7) calc_bg_paper_pane_g9_ParamLimits

0x0dbd,	// (0x000104af) image_qvga_pane_ParamLimits

0x0dbd,	// (0x000104af) image_qvga_pane

0x9c8c,	// (0x0001937e) bg_popup_sub_pane_cp04_ParamLimits

0xac4a,	// (0x0001a33c) popup_mup_playback_window_g1_ParamLimits

0xac56,	// (0x0001a348) popup_mup_playback_window_t1_ParamLimits

0xac6b,	// (0x0001a35d) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0001ebd9) popup_mup_playback_window_t_ParamLimits

0x404c,	// (0x0001373e) main_mup2_pane_g3_ParamLimits

0x404c,	// (0x0001373e) main_mup2_pane_g3

0x11b0,	// (0x000108a2) popup_toolbar_window_cp04

0xb066,	// (0x0001a758) popup_call2_audio_second_window_g3_ParamLimits

0xb066,	// (0x0001a758) popup_call2_audio_second_window_g3

0xb470,	// (0x0001ab62) popup_call2_audio_first_window_g4_ParamLimits

0xb470,	// (0x0001ab62) popup_call2_audio_first_window_g4

0xbaef,	// (0x0001b1e1) popup_call2_audio_in_window_g4_ParamLimits

0xbaef,	// (0x0001b1e1) popup_call2_audio_in_window_g4

0x2ef6,	// (0x000125e8) aid_area_sk_bg_cut_ParamLimits

0x2ef6,	// (0x000125e8) aid_area_sk_bg_cut

0xac80,	// (0x0001a372) aid_area_sk_bg_cut_2_ParamLimits

0xac80,	// (0x0001a372) aid_area_sk_bg_cut_2

0x4358,	// (0x00013a4a) aid_placing_details_win

0x4360,	// (0x00013a52) aid_placing_details_win_2

0xc4af,	// (0x0001bba1) camera2_autofocus_pane_g1_ParamLimits

0xfe81,	// (0x0000f573) popup_fixed_preview_cale_window_ParamLimits

0xfe81,	// (0x0000f573) popup_fixed_preview_cale_window

0xa9ba,	// (0x0001a0ac) navi_slider_pane_g3

0xa9c3,	// (0x0001a0b5) navi_slider_pane_g4

0xa9cc,	// (0x0001a0be) navi_slider_pane_g5

0xa9ba,	// (0x0001a0ac) navi_slider_pane_g6

0xa9d5,	// (0x0001a0c7) navi_slider_pane_g7

0xaaf8,	// (0x0001a1ea) mup_scale_pane_g3

0xab01,	// (0x0001a1f3) mup_scale_pane_g4

0xab0a,	// (0x0001a1fc) mup_scale_pane_g5

0x2bc6,	// (0x000122b8) mup_scale_pane_g6

0x2bcf,	// (0x000122c1) mup_scale_pane_g7

0xa9ba,	// (0x0001a0ac) cams2_slider_pane_g3

0xc12b,	// (0x0001b81d) cams2_slider_pane_g4

0xc133,	// (0x0001b825) cams2_slider_pane_g5

0xa9ba,	// (0x0001a0ac) cams2_slider_pane_g6

0xc13b,	// (0x0001b82d) cams2_slider_pane_g7

0xc36d,	// (0x0001ba5f) camera2_autofocus_pane_cp_g1

0xbe54,	// (0x0001b546) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe54,	// (0x0001b546) bg_popup_preview_window_pane_cp02

0xc667,	// (0x0001bd59) list_fp_cale_pane_ParamLimits

0xc667,	// (0x0001bd59) list_fp_cale_pane

0xc673,	// (0x0001bd65) popup_fixed_preview_cale_window_t1_ParamLimits

0xc673,	// (0x0001bd65) popup_fixed_preview_cale_window_t1

0x4c83,	// (0x00014375) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c83,	// (0x00014375) popup_fixed_preview_cale_window_t2

0x4c98,	// (0x0001438a) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c98,	// (0x0001438a) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0001eea1) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0001eea1) popup_fixed_preview_cale_window_t

0x4cad,	// (0x0001439f) list_single_fp_cale_pane_ParamLimits

0x4cad,	// (0x0001439f) list_single_fp_cale_pane

0xc691,	// (0x0001bd83) list_single_fp_cale_pane_g1_ParamLimits

0xc691,	// (0x0001bd83) list_single_fp_cale_pane_g1

0xc69d,	// (0x0001bd8f) list_single_fp_cale_pane_g2_ParamLimits

0xc69d,	// (0x0001bd8f) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0001eea8) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0001eea8) list_single_fp_cale_pane_g

0xc6b6,	// (0x0001bda8) list_single_fp_cale_pane_t1_ParamLimits

0xc6b6,	// (0x0001bda8) list_single_fp_cale_pane_t1

0xc6c8,	// (0x0001bdba) list_single_fp_cale_pane_t2_ParamLimits

0xc6c8,	// (0x0001bdba) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0001eeaf) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0001eeaf) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x95af,	// (0x00018ca1) main_dialer_pane

0x4cc2,	// (0x000143b4) aid_cell_size_keypad

0x4ccc,	// (0x000143be) dialer_ne_pane

0x4cd6,	// (0x000143c8) grid_dialer_command_1_pane

0x4cde,	// (0x000143d0) grid_dialer_command_2_pane

0x4ce6,	// (0x000143d8) grid_dialer_keypad_pane

0x4cf8,	// (0x000143ea) bg_popup_call_pane_cp06_ParamLimits

0x4cf8,	// (0x000143ea) bg_popup_call_pane_cp06

0x4d04,	// (0x000143f6) dialer_ne_clear_pane_ParamLimits

0x4d04,	// (0x000143f6) dialer_ne_clear_pane

0xc6fb,	// (0x0001bded) dialer_ne_pane_g1

0xc703,	// (0x0001bdf5) dialer_ne_pane_t1_ParamLimits

0xc703,	// (0x0001bdf5) dialer_ne_pane_t1

0x4d10,	// (0x00014402) dialer_ne_pane_t2_ParamLimits

0x4d10,	// (0x00014402) dialer_ne_pane_t2

0x4d3a,	// (0x0001442c) dialer_ne_pane_t3_ParamLimits

0x4d3a,	// (0x0001442c) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0001eeb4) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0001eeb4) dialer_ne_pane_t

0x4d6a,	// (0x0001445c) dialer_ne_pane_t3_copy1_ParamLimits

0x4d6a,	// (0x0001445c) dialer_ne_pane_t3_copy1

0x4d99,	// (0x0001448b) cell_dialer_keypad_pane_ParamLimits

0x4d99,	// (0x0001448b) cell_dialer_keypad_pane

0x4db0,	// (0x000144a2) cell_dialer_command_1_pane_ParamLimits

0x4db0,	// (0x000144a2) cell_dialer_command_1_pane

0x4dc6,	// (0x000144b8) cell_dialer_command_2_pane_ParamLimits

0x4dc6,	// (0x000144b8) cell_dialer_command_2_pane

0xc715,	// (0x0001be07) bg_button_pane_cp02_ParamLimits

0xc715,	// (0x0001be07) bg_button_pane_cp02

0x4dd5,	// (0x000144c7) cell_dialer_keypad_pane_g1_ParamLimits

0x4dd5,	// (0x000144c7) cell_dialer_keypad_pane_g1

0xc715,	// (0x0001be07) bg_button_pane_cp03_ParamLimits

0xc715,	// (0x0001be07) bg_button_pane_cp03

0x4dea,	// (0x000144dc) cell_dialer_command_1_pane_g1_ParamLimits

0x4dea,	// (0x000144dc) cell_dialer_command_1_pane_g1

0xc721,	// (0x0001be13) bg_button_pane_cp04

0x4dfe,	// (0x000144f0) cell_dialer_command_2_pane_g1

0xa9a0,	// (0x0001a092) bg_button_pane_cp06

0xc729,	// (0x0001be1b) dialer_ne_clear_pane_g1

0x2698,	// (0x00011d8a) navi_pane_g2

0x26c6,	// (0x00011db8) navi_pane_g3

0x0002,

0xf3ea,	// (0x0001eadc) navi_pane_g

0x26f1,	// (0x00011de3) navi_pane_mv_g2

0x2718,	// (0x00011e0a) navi_pane_mv_g5

0x2720,	// (0x00011e12) navi_pane_mv_t1

0x9d73,	// (0x00019465) main_clock2_pane

0x4e49,	// (0x0001453b) main_clock2_list_pane_ParamLimits

0x4e49,	// (0x0001453b) main_clock2_list_pane

0x4e81,	// (0x00014573) main_clock2_pane_t1_ParamLimits

0x4e81,	// (0x00014573) main_clock2_pane_t1

0x4ebd,	// (0x000145af) main_clock2_pane_t2_ParamLimits

0x4ebd,	// (0x000145af) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0001eebb) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0001eebb) main_clock2_pane_t

0x4f5d,	// (0x0001464f) popup_clock_analogue_window_cp03_ParamLimits

0x4f5d,	// (0x0001464f) popup_clock_analogue_window_cp03

0x4f84,	// (0x00014676) popup_clock_digital_window_cp02_ParamLimits

0x4f84,	// (0x00014676) popup_clock_digital_window_cp02

0x4ffd,	// (0x000146ef) main_clock2_list_single_pane_ParamLimits

0x4ffd,	// (0x000146ef) main_clock2_list_single_pane

0xa9a0,	// (0x0001a092) list_highlight_pane_cp05

0xc745,	// (0x0001be37) main_clock2_list_single_pane_t1

0x11b0,	// (0x000108a2) popup_toolbar_window_cp04_ParamLimits

0x43c7,	// (0x00013ab9) camera2_autofocus_pane_g2_ParamLimits

0x43c7,	// (0x00013ab9) camera2_autofocus_pane_g2

0x43d3,	// (0x00013ac5) camera2_autofocus_pane_g3_ParamLimits

0x43d3,	// (0x00013ac5) camera2_autofocus_pane_g3

0x43df,	// (0x00013ad1) camera2_autofocus_pane_g4_ParamLimits

0x43df,	// (0x00013ad1) camera2_autofocus_pane_g4

0x43eb,	// (0x00013add) camera2_autofocus_pane_g5_ParamLimits

0x43eb,	// (0x00013add) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0001ee04) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0001ee04) camera2_autofocus_pane_g

0x4624,	// (0x00013d16) camera2_autofocus_pane_cp_g2

0x462c,	// (0x00013d1e) camera2_autofocus_pane_cp_g3

0x4634,	// (0x00013d26) camera2_autofocus_pane_cp_g4

0x463c,	// (0x00013d2e) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0001ee6a) camera2_autofocus_pane_cp_g

0x4cf0,	// (0x000143e2) popup_dialer_spcha_window

0x95af,	// (0x00018ca1) bg_popup_sub_pane_cp07

0xc753,	// (0x0001be45) list_spcha_pane

0xc75b,	// (0x0001be4d) list_single_spcha_pane_ParamLimits

0xc75b,	// (0x0001be4d) list_single_spcha_pane

0x95af,	// (0x00018ca1) list_highlight_pane_cp06

0xc76c,	// (0x0001be5e) list_single_spcha_pane_t1

0xb899,	// (0x0001af8b) popup_call2_audio_out_window_g4_ParamLimits

0xb899,	// (0x0001af8b) popup_call2_audio_out_window_g4

0x95af,	// (0x00018ca1) main_imed2_pane

0xbe8c,	// (0x0001b57e) popup_imed_adjust2_window

0x3779,	// (0x00012e6b) popup_imed_trans_window_ParamLimits

0x3779,	// (0x00012e6b) popup_imed_trans_window

0xc1a5,	// (0x0001b897) popup_blid_sat_info2_window_t1

0xc1b3,	// (0x0001b8a5) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0001ed99) popup_blid_sat_info2_window_t

0x50b3,	// (0x000147a5) aid_size_cell_colour_35

0x50d3,	// (0x000147c5) aid_size_cell_colour_112

0x50f3,	// (0x000147e5) aid_size_cell_effect

0xbe60,	// (0x0001b552) bg_tb_trans_pane_cp02

0xa491,	// (0x00019b83) heading_imed_pane

0x5113,	// (0x00014805) listscroll_imed_pane

0xc77a,	// (0x0001be6c) heading_imed_pane_g1

0xc782,	// (0x0001be74) heading_imed_pane_t1

0xc790,	// (0x0001be82) grid_imed_colour_35_pane_ParamLimits

0xc790,	// (0x0001be82) grid_imed_colour_35_pane

0x511f,	// (0x00014811) grid_imed_effect_pane

0xc7ac,	// (0x0001be9e) list_imed_aspect_pane

0x5134,	// (0x00014826) scroll_pane_cp027_ParamLimits

0x5134,	// (0x00014826) scroll_pane_cp027

0x5145,	// (0x00014837) cell_imed_effect_pane_ParamLimits

0x5145,	// (0x00014837) cell_imed_effect_pane

0xc7b4,	// (0x0001bea6) cell_imed_colour_pane_ParamLimits

0xc7b4,	// (0x0001bea6) cell_imed_colour_pane

0xc7fe,	// (0x0001bef0) cell_imed_colour_pane_g1_ParamLimits

0xc7fe,	// (0x0001bef0) cell_imed_colour_pane_g1

0xc80f,	// (0x0001bf01) hgihlgiht_grid_pane_cp016_ParamLimits

0xc80f,	// (0x0001bf01) hgihlgiht_grid_pane_cp016

0x5170,	// (0x00014862) cell_imed_effect_pane_g1

0x5178,	// (0x0001486a) grid_highlight_pane_cp017

0xc820,	// (0x0001bf12) list_imed_single_pane_ParamLimits

0xc820,	// (0x0001bf12) list_imed_single_pane

0x95af,	// (0x00018ca1) list_highlight_pane_cp07

0xc834,	// (0x0001bf26) list_imed_aspect_pane_comp1_t1

0xbe60,	// (0x0001b552) bg_tb_trans_pane_cp05

0xc856,	// (0x0001bf48) popup_imed_adjust2_window_g1

0xc87d,	// (0x0001bf6f) popup_imed_adjust2_window_t1

0xc895,	// (0x0001bf87) slider_imed_adjust_pane

0xc8a9,	// (0x0001bf9b) slider_imed_adjust_pane_g1

0xc8b9,	// (0x0001bfab) slider_imed_adjust_pane_g2

0xc8c9,	// (0x0001bfbb) slider_imed_adjust_pane_g3

0xc8da,	// (0x0001bfcc) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0001eed8) slider_imed_adjust_pane_g

0x5181,	// (0x00014873) aid_size_cell_clipart2

0x518d,	// (0x0001487f) grid_imed_clipart_pane

0xc8eb,	// (0x0001bfdd) scroll_pane_cp031

0x5197,	// (0x00014889) cell_imed_clipart_pane_ParamLimits

0x5197,	// (0x00014889) cell_imed_clipart_pane

0x51b4,	// (0x000148a6) cell_imed_clipart_pane_g1

0x95af,	// (0x00018ca1) grid_highlight_pane_cp014

0x4e5e,	// (0x00014550) main_clock2_pane_g1_ParamLimits

0x4e5e,	// (0x00014550) main_clock2_pane_g1

0x4fa4,	// (0x00014696) aid_call2_pane_cp10

0x4fb6,	// (0x000146a8) aid_call_pane_cp10

0xa8d5,	// (0x00019fc7) popup_clock_analogue_window_cp10_g1

0xa8d5,	// (0x00019fc7) popup_clock_analogue_window_cp10_g2

0x4fc8,	// (0x000146ba) popup_clock_analogue_window_cp10_g3

0x4fc8,	// (0x000146ba) popup_clock_analogue_window_cp10_g4

0xa8d5,	// (0x00019fc7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0001eec6) popup_clock_analogue_window_cp10_g

0x4fde,	// (0x000146d0) popup_clock_analogue_window_cp10_t1

0x500f,	// (0x00014701) clock_digital_number_pane_cp10_ParamLimits

0x500f,	// (0x00014701) clock_digital_number_pane_cp10

0x5029,	// (0x0001471b) clock_digital_number_pane_cp11_ParamLimits

0x5029,	// (0x0001471b) clock_digital_number_pane_cp11

0x5043,	// (0x00014735) clock_digital_number_pane_cp12_ParamLimits

0x5043,	// (0x00014735) clock_digital_number_pane_cp12

0x505d,	// (0x0001474f) clock_digital_number_pane_cp13_ParamLimits

0x505d,	// (0x0001474f) clock_digital_number_pane_cp13

0x5077,	// (0x00014769) clock_digital_separator_pane_cp10_ParamLimits

0x5077,	// (0x00014769) clock_digital_separator_pane_cp10

0x5091,	// (0x00014783) popup_clock_digital_window_cp02_t1_ParamLimits

0x5091,	// (0x00014783) popup_clock_digital_window_cp02_t1

0x9c84,	// (0x00019376) clock_digital_number_pane_cp10_g1

0x9c84,	// (0x00019376) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0001eee1) clock_digital_number_pane_cp10_g

0x9c84,	// (0x00019376) clock_digital_separator_pane_cp10_g1

0x9c84,	// (0x00019376) clock_digital_separator_pane_g2_cp10

0xa970,	// (0x0001a062) navi_pane_vded_g4

0xa979,	// (0x0001a06b) navi_pane_vded_g5

0xa982,	// (0x0001a074) navi_pane_vded_t1

0x95af,	// (0x00018ca1) main_vded_pane

0x51bd,	// (0x000148af) main_vded_pane_g1

0x51c9,	// (0x000148bb) main_vded_pane_g2

0x51d5,	// (0x000148c7) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0001eee6) main_vded_pane_g

0x51e1,	// (0x000148d3) main_vded_pane_t1

0x51ef,	// (0x000148e1) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0001eeed) main_vded_pane_t

0x51fd,	// (0x000148ef) vded_slider_pane

0x5207,	// (0x000148f9) vded_video_pane

0xc8f3,	// (0x0001bfe5) vded_video_pane_g1

0x5211,	// (0x00014903) vded_video_pane_g2

0xc36d,	// (0x0001ba5f) vded_video_pane_g3

0x0002,

0xf800,	// (0x0001eef2) vded_video_pane_g

0xc8fd,	// (0x0001bfef) vded_slider_pane_g1

0xc076,	// (0x0001b768) vded_slider_pane_g2

0xc906,	// (0x0001bff8) vded_slider_pane_g3

0xc90f,	// (0x0001c001) vded_slider_pane_g4

0xc918,	// (0x0001c00a) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0001eef9) vded_slider_pane_g

0x4bcf,	// (0x000142c1) mup3_rocker_pane_ParamLimits

0x4bcf,	// (0x000142c1) mup3_rocker_pane

0x521a,	// (0x0001490c) mup3_control_keys_pane_g1

0x5222,	// (0x00014914) mup3_control_keys_pane_g2

0x522a,	// (0x0001491c) mup3_control_keys_pane_g3

0x5232,	// (0x00014924) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0001ef04) mup3_control_keys_pane_g

0xfeb8,	// (0x0000f5aa) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfeb8,	// (0x0000f5aa) popup_toolbar2_fixed_window_cp01

0x4c05,	// (0x000142f7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4c05,	// (0x000142f7) popup_toolbar2_fixed_window_cp02

0xb1d8,	// (0x0001a8ca) popup_call2_audio_second_window_t4_ParamLimits

0xb1d8,	// (0x0001a8ca) popup_call2_audio_second_window_t4

0xb706,	// (0x0001adf8) popup_call2_audio_first_window_t6_ParamLimits

0xb706,	// (0x0001adf8) popup_call2_audio_first_window_t6

0xb99c,	// (0x0001b08e) popup_call2_audio_out_window_t6_ParamLimits

0xb99c,	// (0x0001b08e) popup_call2_audio_out_window_t6

0x95af,	// (0x00018ca1) main_vitu_pane

0x5242,	// (0x00014934) aid_size_cell_itu_ParamLimits

0x5242,	// (0x00014934) aid_size_cell_itu

0x9610,	// (0x00018d02) bg_popup_window_pane_cp08_ParamLimits

0x9610,	// (0x00018d02) bg_popup_window_pane_cp08

0x5258,	// (0x0001494a) field_vitu_entry_pane_ParamLimits

0x5258,	// (0x0001494a) field_vitu_entry_pane

0x526f,	// (0x00014961) grid_vitu_function_pane_ParamLimits

0x526f,	// (0x00014961) grid_vitu_function_pane

0x528a,	// (0x0001497c) grid_vitu_itu_pane_ParamLimits

0x528a,	// (0x0001497c) grid_vitu_itu_pane

0x52a8,	// (0x0001499a) cell_vitu_itu_pane_ParamLimits

0x52a8,	// (0x0001499a) cell_vitu_itu_pane

0x52ce,	// (0x000149c0) cell_vitu_function_pane_ParamLimits

0x52ce,	// (0x000149c0) cell_vitu_function_pane

0x9610,	// (0x00018d02) bg_popup_sub_pane_cp08_ParamLimits

0x9610,	// (0x00018d02) bg_popup_sub_pane_cp08

0x52e9,	// (0x000149db) field_vitu_entry_pane_t1_ParamLimits

0x52e9,	// (0x000149db) field_vitu_entry_pane_t1

0xc939,	// (0x0001c02b) field_vitu_entry_pane_t2_ParamLimits

0xc939,	// (0x0001c02b) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0001ef12) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0001ef12) field_vitu_entry_pane_t

0xc956,	// (0x0001c048) bg_button_pane_cp05_ParamLimits

0xc956,	// (0x0001c048) bg_button_pane_cp05

0x5309,	// (0x000149fb) cell_vitu_itu_pane_g1

0x5321,	// (0x00014a13) cell_vitu_itu_pane_t1_ParamLimits

0x5321,	// (0x00014a13) cell_vitu_itu_pane_t1

0x5333,	// (0x00014a25) cell_vitu_itu_pane_t2_ParamLimits

0x5333,	// (0x00014a25) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0001ef17) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0001ef17) cell_vitu_itu_pane_t

0xc964,	// (0x0001c056) bg_button_pane_cp07

0x5368,	// (0x00014a5a) cell_vitu_function_pane_g1

0x9d13,	// (0x00019405) main_calc_pane_g1

0xfcdc,	// (0x0000f3ce) aid_visual_content_pane

0x95af,	// (0x00018ca1) main_vradio_pane

0x5371,	// (0x00014a63) main_vradio_pane_g1_ParamLimits

0x5371,	// (0x00014a63) main_vradio_pane_g1

0xc96e,	// (0x0001c060) main_vradio_pane_g2_ParamLimits

0xc96e,	// (0x0001c060) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0001ef1e) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0001ef1e) main_vradio_pane_g

0x5388,	// (0x00014a7a) main_vradio_pane_t1_ParamLimits

0x5388,	// (0x00014a7a) main_vradio_pane_t1

0x539d,	// (0x00014a8f) main_vradio_pane_t2_ParamLimits

0x539d,	// (0x00014a8f) main_vradio_pane_t2

0xc97b,	// (0x0001c06d) main_vradio_pane_t3_ParamLimits

0xc97b,	// (0x0001c06d) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0001ef23) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0001ef23) main_vradio_pane_t

0x53b2,	// (0x00014aa4) vradio_rocker_control_pane_ParamLimits

0x53b2,	// (0x00014aa4) vradio_rocker_control_pane

0x53c4,	// (0x00014ab6) vradio_station_info_pane_ParamLimits

0x53c4,	// (0x00014ab6) vradio_station_info_pane

0xc98f,	// (0x0001c081) vradio_frequency_info_pane_ParamLimits

0xc98f,	// (0x0001c081) vradio_frequency_info_pane

0xc36d,	// (0x0001ba5f) vradio_station_info_pane_g1

0xc99e,	// (0x0001c090) vradio_station_info_pane_t1_ParamLimits

0xc99e,	// (0x0001c090) vradio_station_info_pane_t1

0xc9c0,	// (0x0001c0b2) vradio_station_info_pane_t2_ParamLimits

0xc9c0,	// (0x0001c0b2) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0001ef2a) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0001ef2a) vradio_station_info_pane_t

0xc9d2,	// (0x0001c0c4) vradio_tuning_pane

0xc9da,	// (0x0001c0cc) vradio_rocker_control_pane_g1

0xc9e2,	// (0x0001c0d4) vradio_rocker_control_pane_g2

0xc9ea,	// (0x0001c0dc) vradio_rocker_control_pane_g3

0xc9f2,	// (0x0001c0e4) vradio_rocker_control_pane_g4

0xc9fa,	// (0x0001c0ec) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0001ef2f) vradio_rocker_control_pane_g

0x53d4,	// (0x00014ac6) vradio_frequency_info_pane_g1

0xca02,	// (0x0001c0f4) vradio_frequency_info_pane_t1_ParamLimits

0xca02,	// (0x0001c0f4) vradio_frequency_info_pane_t1

0x53de,	// (0x00014ad0) vradio_tuning_pane_g1

0x53e9,	// (0x00014adb) vradio_tuning_pane_t1

0x95dd,	// (0x00018ccf) area_side_right_pane_ParamLimits

0x95dd,	// (0x00018ccf) area_side_right_pane

0xbe1b,	// (0x0001b50d) status_small_pane_g1

0xbe23,	// (0x0001b515) status_small_pane_g2

0xbe2c,	// (0x0001b51e) status_small_pane_g3

0xbe35,	// (0x0001b527) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0001ecef) status_small_pane_g

0xbe3e,	// (0x0001b530) status_small_pane_t1

0x95af,	// (0x00018ca1) main_video3_pane

0xca16,	// (0x0001c108) cams_zoom_vslider_pane

0xca1e,	// (0x0001c110) image3_wide_pane_ParamLimits

0xca1e,	// (0x0001c110) image3_wide_pane

0xca38,	// (0x0001c12a) image3_wide_small_pane

0xca44,	// (0x0001c136) main_video3_pane_g1_ParamLimits

0xca44,	// (0x0001c136) main_video3_pane_g1

0xca60,	// (0x0001c152) main_video3_pane_g2_ParamLimits

0xca60,	// (0x0001c152) main_video3_pane_g2

0x0001,

0xf848,	// (0x0001ef3a) main_video3_pane_g_ParamLimits

0xf848,	// (0x0001ef3a) main_video3_pane_g

0xca7c,	// (0x0001c16e) main_video3_pane_t1_ParamLimits

0xca7c,	// (0x0001c16e) main_video3_pane_t1

0xcaa7,	// (0x0001c199) main_video3_pane_t2_ParamLimits

0xcaa7,	// (0x0001c199) main_video3_pane_t2

0xcad4,	// (0x0001c1c6) main_video3_pane_t3_ParamLimits

0xcad4,	// (0x0001c1c6) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0001ef3f) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0001ef3f) main_video3_pane_t

0xcb01,	// (0x0001c1f3) cams_zoom_vslider_pane_g1

0xcb0a,	// (0x0001c1fc) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0001ef46) cams_zoom_vslider_pane_g

0xcb12,	// (0x0001c204) small_slider_vertical_pane

0xc36d,	// (0x0001ba5f) small_slider_vertical_pane_g1

0xc36d,	// (0x0001ba5f) small_slider_vertical_pane_g2

0xcb1a,	// (0x0001c20c) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0001ef4b) small_slider_vertical_pane_g

0x95af,	// (0x00018ca1) main_hwr_training_pane

0xcb23,	// (0x0001c215) hwr_training_instruct_pane_ParamLimits

0xcb23,	// (0x0001c215) hwr_training_instruct_pane

0x53f8,	// (0x00014aea) hwr_training_navi_pane_ParamLimits

0x53f8,	// (0x00014aea) hwr_training_navi_pane

0x5417,	// (0x00014b09) hwr_training_write_pane_ParamLimits

0x5417,	// (0x00014b09) hwr_training_write_pane

0x95af,	// (0x00018ca1) bg_frame_shadow_pane

0xcb5a,	// (0x0001c24c) hwr_training_write_pane_g1

0xcb62,	// (0x0001c254) hwr_training_write_pane_g2

0xcb6a,	// (0x0001c25c) hwr_training_write_pane_g3

0xcb72,	// (0x0001c264) hwr_training_write_pane_g4

0xcb7a,	// (0x0001c26c) hwr_training_write_pane_g5

0xcb82,	// (0x0001c274) hwr_training_write_pane_g6

0xcb8a,	// (0x0001c27c) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0001ef52) hwr_training_write_pane_g

0xcb92,	// (0x0001c284) hwr_training_navi_pane_g1_ParamLimits

0xcb92,	// (0x0001c284) hwr_training_navi_pane_g1

0xcba4,	// (0x0001c296) hwr_training_navi_pane_g2_ParamLimits

0xcba4,	// (0x0001c296) hwr_training_navi_pane_g2

0xcbb6,	// (0x0001c2a8) hwr_training_navi_pane_g3_ParamLimits

0xcbb6,	// (0x0001c2a8) hwr_training_navi_pane_g3

0xcbc6,	// (0x0001c2b8) hwr_training_navi_pane_g4_ParamLimits

0xcbc6,	// (0x0001c2b8) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0001ef61) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0001ef61) hwr_training_navi_pane_g

0xcbd3,	// (0x0001c2c5) hwr_training_navi_pane_t1

0x545f,	// (0x00014b51) list_single_hwr_training_instruct_pane_ParamLimits

0x545f,	// (0x00014b51) list_single_hwr_training_instruct_pane

0xcbe1,	// (0x0001c2d3) list_single_hwr_training_instruct_pane_t1

0xc2ad,	// (0x0001b99f) bg_frame_shadow_pane_g1

0xcbf0,	// (0x0001c2e2) bg_frame_shadow_pane_g2

0xcbf8,	// (0x0001c2ea) bg_frame_shadow_pane_g3

0xcc00,	// (0x0001c2f2) bg_frame_shadow_pane_g4

0xcc08,	// (0x0001c2fa) bg_frame_shadow_pane_g5

0xcc10,	// (0x0001c302) bg_frame_shadow_pane_g6

0xcc18,	// (0x0001c30a) bg_frame_shadow_pane_g7

0x9e6c,	// (0x0001955e) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0001ef6c) bg_frame_shadow_pane_g

0x95af,	// (0x00018ca1) main_video_tele_dialer_pane

0x5474,	// (0x00014b66) aid_size_cell_video_keypad_ParamLimits

0x5474,	// (0x00014b66) aid_size_cell_video_keypad

0x548e,	// (0x00014b80) grid_video_dialer_keypad_pane_ParamLimits

0x548e,	// (0x00014b80) grid_video_dialer_keypad_pane

0x54da,	// (0x00014bcc) video_down_pane_cp_ParamLimits

0x54da,	// (0x00014bcc) video_down_pane_cp

0x550a,	// (0x00014bfc) cell_video_dialer_keypad_pane_ParamLimits

0x550a,	// (0x00014bfc) cell_video_dialer_keypad_pane

0xcc20,	// (0x0001c312) bg_button_pane_cp08_ParamLimits

0xcc20,	// (0x0001c312) bg_button_pane_cp08

0x552e,	// (0x00014c20) cell_video_dialer_keypad_pane_g1_ParamLimits

0x552e,	// (0x00014c20) cell_video_dialer_keypad_pane_g1

0x4bb9,	// (0x000142ab) mup3_rocker2_pane_ParamLimits

0x4bb9,	// (0x000142ab) mup3_rocker2_pane

0xc36d,	// (0x0001ba5f) mup3_rocker2_pane_g1

0x3646,	// (0x00012d38) main_dialer2_pane

0x95af,	// (0x00018ca1) main_mp4_pane

0xcc34,	// (0x0001c326) main_mp4_pane_g1_ParamLimits

0xcc34,	// (0x0001c326) main_mp4_pane_g1

0xcc34,	// (0x0001c326) main_mp4_pane_g2_ParamLimits

0xcc34,	// (0x0001c326) main_mp4_pane_g2

0x5569,	// (0x00014c5b) main_mp4_pane_g3_ParamLimits

0x5569,	// (0x00014c5b) main_mp4_pane_g3

0xcc42,	// (0x0001c334) main_mp4_pane_g4_ParamLimits

0xcc42,	// (0x0001c334) main_mp4_pane_g4

0xcc6a,	// (0x0001c35c) main_mp4_pane_g5_ParamLimits

0xcc6a,	// (0x0001c35c) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0001ef8c) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0001ef8c) main_mp4_pane_g

0xccba,	// (0x0001c3ac) main_mp4_pane_t1_ParamLimits

0xccba,	// (0x0001c3ac) main_mp4_pane_t1

0xcd16,	// (0x0001c408) main_mp4_pane_t2_ParamLimits

0xcd16,	// (0x0001c408) main_mp4_pane_t2

0xcd68,	// (0x0001c45a) main_mp4_pane_t3_ParamLimits

0xcd68,	// (0x0001c45a) main_mp4_pane_t3

0xcd88,	// (0x0001c47a) main_mp4_pane_t4_ParamLimits

0xcd88,	// (0x0001c47a) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0001ef99) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0001ef99) main_mp4_pane_t

0xcdc8,	// (0x0001c4ba) mp4_progress_pane_ParamLimits

0xcdc8,	// (0x0001c4ba) mp4_progress_pane

0xce12,	// (0x0001c504) mp4_rocker_pane_ParamLimits

0xce12,	// (0x0001c504) mp4_rocker_pane

0xce3c,	// (0x0001c52e) mp4_progress_pane_t1

0xce55,	// (0x0001c547) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0001efa2) mp4_progress_pane_t

0xce6e,	// (0x0001c560) mup_progress_pane_cp04

0xc36d,	// (0x0001ba5f) mp4_rocker_pane_g1

0x55b3,	// (0x00014ca5) aid_cell_size_keypad2_ParamLimits

0x55b3,	// (0x00014ca5) aid_cell_size_keypad2

0x55c9,	// (0x00014cbb) dialer2_ne_pane_ParamLimits

0x55c9,	// (0x00014cbb) dialer2_ne_pane

0x55e1,	// (0x00014cd3) grid_dialer2_keypad_pane_ParamLimits

0x55e1,	// (0x00014cd3) grid_dialer2_keypad_pane

0xc14c,	// (0x0001b83e) bg_popup_call_pane_cp07_ParamLimits

0xc14c,	// (0x0001b83e) bg_popup_call_pane_cp07

0x55fd,	// (0x00014cef) dialer2_ne_pane_t1_ParamLimits

0x55fd,	// (0x00014cef) dialer2_ne_pane_t1

0x5638,	// (0x00014d2a) cell_dialer2_keypad_pane_ParamLimits

0x5638,	// (0x00014d2a) cell_dialer2_keypad_pane

0xce8c,	// (0x0001c57e) bg_button_pane_pane_cp04_ParamLimits

0xce8c,	// (0x0001c57e) bg_button_pane_pane_cp04

0x565c,	// (0x00014d4e) cell_dialer2_keypad_pane_g1_ParamLimits

0x565c,	// (0x00014d4e) cell_dialer2_keypad_pane_g1

0x1097,	// (0x00010789) aid_placing_vt_set_content_ParamLimits

0x1097,	// (0x00010789) aid_placing_vt_set_content

0x10bb,	// (0x000107ad) aid_placing_vt_set_title_ParamLimits

0x10bb,	// (0x000107ad) aid_placing_vt_set_title

0x95af,	// (0x00018ca1) main_image3_pane

0x5722,	// (0x00014e14) area_side_right_pane_cp01_ParamLimits

0x5722,	// (0x00014e14) area_side_right_pane_cp01

0xcc34,	// (0x0001c326) main_image3_pane_g1_ParamLimits

0xcc34,	// (0x0001c326) main_image3_pane_g1

0x573b,	// (0x00014e2d) main_image3_pane_g2_ParamLimits

0x573b,	// (0x00014e2d) main_image3_pane_g2

0x5763,	// (0x00014e55) main_image3_pane_g3_ParamLimits

0x5763,	// (0x00014e55) main_image3_pane_g3

0x578d,	// (0x00014e7f) main_image3_pane_g4_ParamLimits

0x578d,	// (0x00014e7f) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0001efb1) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0001efb1) main_image3_pane_g

0x57b7,	// (0x00014ea9) main_image3_pane_t1_ParamLimits

0x57b7,	// (0x00014ea9) main_image3_pane_t1

0x580f,	// (0x00014f01) main_image3_pane_t2_ParamLimits

0x580f,	// (0x00014f01) main_image3_pane_t2

0x5861,	// (0x00014f53) main_image3_pane_t3_ParamLimits

0x5861,	// (0x00014f53) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0001efba) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0001efba) main_image3_pane_t

0x9610,	// (0x00018d02) grid_sctrl_middle_pane_cp01_ParamLimits

0x9610,	// (0x00018d02) grid_sctrl_middle_pane_cp01

0x58e9,	// (0x00014fdb) cell_sctrl_middle_pane_cp01_ParamLimits

0x58e9,	// (0x00014fdb) cell_sctrl_middle_pane_cp01

0x5906,	// (0x00014ff8) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5906,	// (0x00014ff8) cell_sctrl_middle_pane_cp01_g1

0x95af,	// (0x00018ca1) main_call4_pane

0x591b,	// (0x0001500d) aid_size_button_call4_ParamLimits

0x591b,	// (0x0001500d) aid_size_button_call4

0x594e,	// (0x00015040) call4_windows_pane_ParamLimits

0x594e,	// (0x00015040) call4_windows_pane

0x5970,	// (0x00015062) grid_call4_button_pane_ParamLimits

0x5970,	// (0x00015062) grid_call4_button_pane

0xcecc,	// (0x0001c5be) call4_windows_conf_pane

0x599b,	// (0x0001508d) popup_call4_audio_first_window_ParamLimits

0x599b,	// (0x0001508d) popup_call4_audio_first_window

0x59c7,	// (0x000150b9) popup_call4_audio_second_window_ParamLimits

0x59c7,	// (0x000150b9) popup_call4_audio_second_window

0xcf09,	// (0x0001c5fb) popup_call4_audio_wait_window_ParamLimits

0xcf09,	// (0x0001c5fb) popup_call4_audio_wait_window

0x59dd,	// (0x000150cf) cell_call4_button_pane_ParamLimits

0x59dd,	// (0x000150cf) cell_call4_button_pane

0x5a04,	// (0x000150f6) bg_button_pane_cp09_ParamLimits

0x5a04,	// (0x000150f6) bg_button_pane_cp09

0x5a10,	// (0x00015102) cell_call4_button_pane_g1_ParamLimits

0x5a10,	// (0x00015102) cell_call4_button_pane_g1

0x5a36,	// (0x00015128) cell_call4_button_pane_t1_ParamLimits

0x5a36,	// (0x00015128) cell_call4_button_pane_t1

0xcf51,	// (0x0001c643) popup_call4_audio_conf_window_ParamLimits

0xcf51,	// (0x0001c643) popup_call4_audio_conf_window

0x4c1b,	// (0x0001430d) mup3_progress_pane_t1_ParamLimits

0x4c39,	// (0x0001432b) mup3_progress_pane_t2_ParamLimits

0xc624,	// (0x0001bd16) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0001ee93) mup3_progress_pane_t_ParamLimits

0xc641,	// (0x0001bd33) mup_progress_pane_cp03_ParamLimits

0x523a,	// (0x0001492c) mup3_control_keys_pane_g4_copy1

0xcdf6,	// (0x0001c4e8) mp4_rocker2_pane_ParamLimits

0xcdf6,	// (0x0001c4e8) mp4_rocker2_pane

0xcf6b,	// (0x0001c65d) mp4_rocker2_pane_g1

0xcf73,	// (0x0001c665) mp4_rocker2_pane_g2

0xcf7b,	// (0x0001c66d) mp4_rocker2_pane_g3

0xcf83,	// (0x0001c675) mp4_rocker2_pane_g4

0xcf8b,	// (0x0001c67d) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0001efc3) mp4_rocker2_pane_g

0x95af,	// (0x00018ca1) main_camera4_pane

0x95af,	// (0x00018ca1) main_video4_pane

0x54a8,	// (0x00014b9a) main_video_tele_dialer_pane_t1_ParamLimits

0x54a8,	// (0x00014b9a) main_video_tele_dialer_pane_t1

0x54c1,	// (0x00014bb3) main_video_tele_dialer_pane_t2_ParamLimits

0x54c1,	// (0x00014bb3) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0001ef7d) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0001ef7d) main_video_tele_dialer_pane_t

0x5a74,	// (0x00015166) cam4_autofocus_pane_ParamLimits

0x5a74,	// (0x00015166) cam4_autofocus_pane

0x5a8a,	// (0x0001517c) cam4_image_uncrop_pane_ParamLimits

0x5a8a,	// (0x0001517c) cam4_image_uncrop_pane

0x5aa3,	// (0x00015195) cam4_indicators_pane_ParamLimits

0x5aa3,	// (0x00015195) cam4_indicators_pane

0x5ad2,	// (0x000151c4) main_camera4_pane_g1_ParamLimits

0x5ad2,	// (0x000151c4) main_camera4_pane_g1

0x5ae4,	// (0x000151d6) main_camera4_pane_g2_ParamLimits

0x5ae4,	// (0x000151d6) main_camera4_pane_g2

0x5af7,	// (0x000151e9) main_camera4_pane_g3_ParamLimits

0x5af7,	// (0x000151e9) main_camera4_pane_g3

0x5b0a,	// (0x000151fc) main_camera4_pane_g4_ParamLimits

0x5b0a,	// (0x000151fc) main_camera4_pane_g4

0x5b1d,	// (0x0001520f) main_camera4_pane_g5_ParamLimits

0x5b1d,	// (0x0001520f) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0001efce) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0001efce) main_camera4_pane_g

0x5b41,	// (0x00015233) main_camera4_pane_t1_ParamLimits

0x5b41,	// (0x00015233) main_camera4_pane_t1

0xc59d,	// (0x0001bc8f) bg_tb_trans_pane_cp06

0xcfb9,	// (0x0001c6ab) cam4_indicators_pane_g1

0xcfca,	// (0x0001c6bc) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0001efe9) cam4_indicators_pane_g

0xcfe2,	// (0x0001c6d4) cam4_indicators_pane_t1

0x5ba5,	// (0x00015297) main_video4_pane_g1_ParamLimits

0x5ba5,	// (0x00015297) main_video4_pane_g1

0x5bb4,	// (0x000152a6) main_video4_pane_g2_ParamLimits

0x5bb4,	// (0x000152a6) main_video4_pane_g2

0x5bc3,	// (0x000152b5) main_video4_pane_g3_ParamLimits

0x5bc3,	// (0x000152b5) main_video4_pane_g3

0x5bd2,	// (0x000152c4) main_video4_pane_g4_ParamLimits

0x5bd2,	// (0x000152c4) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0001eff0) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0001eff0) main_video4_pane_g

0x5bf0,	// (0x000152e2) vid4_indicators_pane_ParamLimits

0x5bf0,	// (0x000152e2) vid4_indicators_pane

0x5c1e,	// (0x00015310) video4_image_uncrop_cif_pane_ParamLimits

0x5c1e,	// (0x00015310) video4_image_uncrop_cif_pane

0x5c38,	// (0x0001532a) video4_image_uncrop_nhd_pane_ParamLimits

0x5c38,	// (0x0001532a) video4_image_uncrop_nhd_pane

0x5a8a,	// (0x0001517c) video4_image_uncrop_vga_pane_ParamLimits

0x5a8a,	// (0x0001517c) video4_image_uncrop_vga_pane

0x9610,	// (0x00018d02) bg_tb_trans_pane_cp07

0xd010,	// (0x0001c702) vid4_indicators_pane_g1

0xd026,	// (0x0001c718) vid4_indicators_pane_g2

0xd03a,	// (0x0001c72c) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0001effb) vid4_indicators_pane_g

0xd06b,	// (0x0001c75d) vid4_indicators_pane_t1

0x5c4e,	// (0x00015340) cam4_autofocus_pane_g1

0x5c56,	// (0x00015348) cam4_autofocus_pane_g2

0x5c5e,	// (0x00015350) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0001f006) cam4_autofocus_pane_g

0x5c66,	// (0x00015358) cam4_autofocus_pane_g3_copy1

0x54ee,	// (0x00014be0) video_down_pane_cp_t1

0x54fc,	// (0x00014bee) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0001ef82) video_down_pane_cp_t

0x9610,	// (0x00018d02) popup_vitu2_window_ParamLimits

0x9610,	// (0x00018d02) popup_vitu2_window

0x5c6e,	// (0x00015360) aid_size_cell2_itu2_ParamLimits

0x5c6e,	// (0x00015360) aid_size_cell2_itu2

0x5c94,	// (0x00015386) aid_size_cell_itu2_ParamLimits

0x5c94,	// (0x00015386) aid_size_cell_itu2

0x5cf4,	// (0x000153e6) bg_popup_window_pane_cp09_ParamLimits

0x5cf4,	// (0x000153e6) bg_popup_window_pane_cp09

0x5d02,	// (0x000153f4) field_vitu2_entry_pane_ParamLimits

0x5d02,	// (0x000153f4) field_vitu2_entry_pane

0x5d2a,	// (0x0001541c) grid_vitu2_function_pane_ParamLimits

0x5d2a,	// (0x0001541c) grid_vitu2_function_pane

0x5d7b,	// (0x0001546d) grid_vitu2_itu_pane_ParamLimits

0x5d7b,	// (0x0001546d) grid_vitu2_itu_pane

0x5e0a,	// (0x000154fc) cell_vitu2_itu_pane_ParamLimits

0x5e0a,	// (0x000154fc) cell_vitu2_itu_pane

0x5e30,	// (0x00015522) cell_vitu2_function_pane_ParamLimits

0x5e30,	// (0x00015522) cell_vitu2_function_pane

0xd082,	// (0x0001c774) bg_popup_call_pane_cp08_ParamLimits

0xd082,	// (0x0001c774) bg_popup_call_pane_cp08

0xd09b,	// (0x0001c78d) field_vitu2_entry_pane_g1

0xd0a7,	// (0x0001c799) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0001f00d) field_vitu2_entry_pane_g

0x5e74,	// (0x00015566) field_vitu2_entry_pane_t1_ParamLimits

0x5e74,	// (0x00015566) field_vitu2_entry_pane_t1

0xd0c1,	// (0x0001c7b3) field_vitu2_entry_pane_t2_ParamLimits

0xd0c1,	// (0x0001c7b3) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0001f014) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0001f014) field_vitu2_entry_pane_t

0x5ea3,	// (0x00015595) bg_button_pane_cp010_ParamLimits

0x5ea3,	// (0x00015595) bg_button_pane_cp010

0x5eb1,	// (0x000155a3) cell_vitu2_itu_pane_g1

0x5edc,	// (0x000155ce) cell_vitu2_itu_pane_t1_ParamLimits

0x5edc,	// (0x000155ce) cell_vitu2_itu_pane_t1

0x5f3a,	// (0x0001562c) cell_vitu2_itu_pane_t2_ParamLimits

0x5f3a,	// (0x0001562c) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0001f01e) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0001f01e) cell_vitu2_itu_pane_t

0x9610,	// (0x00018d02) bg_button_pane_cp011

0x6026,	// (0x00015718) cell_vitu2_function_pane_g1

0x95af,	// (0x00018ca1) main_myfav_hc_pane

0x58b1,	// (0x00014fa3) popup_image3_note_pane_ParamLimits

0x58b1,	// (0x00014fa3) popup_image3_note_pane

0x58cd,	// (0x00014fbf) popup_image3_tool_bar_pane_ParamLimits

0x58cd,	// (0x00014fbf) popup_image3_tool_bar_pane

0x5fc8,	// (0x000156ba) cell_vitu2_itu_pane_t3_ParamLimits

0x5fc8,	// (0x000156ba) cell_vitu2_itu_pane_t3

0x95af,	// (0x00018ca1) bg_popup_trans_pane

0xd0e6,	// (0x0001c7d8) grid_image3_tool_bar_pane

0xd0f0,	// (0x0001c7e2) bg_popup_trans_pane_g1

0xa22a,	// (0x0001991c) bg_popup_trans_pane_g2

0xd0f8,	// (0x0001c7ea) bg_popup_trans_pane_g3

0xd100,	// (0x0001c7f2) bg_popup_trans_pane_g4

0xd108,	// (0x0001c7fa) bg_popup_trans_pane_g5

0xd110,	// (0x0001c802) bg_popup_trans_pane_g6

0xd118,	// (0x0001c80a) bg_popup_trans_pane_g7

0xd120,	// (0x0001c812) bg_popup_trans_pane_g8

0xa20a,	// (0x000198fc) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0001f025) bg_popup_trans_pane_g

0xd128,	// (0x0001c81a) cell_image3_tool_bar_pane_ParamLimits

0xd128,	// (0x0001c81a) cell_image3_tool_bar_pane

0xc36d,	// (0x0001ba5f) cell_image3_tool_bar_pane_g1

0x95af,	// (0x00018ca1) bg_popup_trans_pane_cp1

0xd13e,	// (0x0001c830) popup_image3_note_pane_t1

0xd14c,	// (0x0001c83e) popup_image3_note_pane_t2

0xd15a,	// (0x0001c84c) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0001f038) popup_image3_note_pane_t

0xd16a,	// (0x0001c85c) popup_image3_note_pane_t3_copy1

0x603a,	// (0x0001572c) bg_myfav_hc_instruction_pane_ParamLimits

0x603a,	// (0x0001572c) bg_myfav_hc_instruction_pane

0x6052,	// (0x00015744) cell_myfav_contact_pane_ParamLimits

0x6052,	// (0x00015744) cell_myfav_contact_pane

0x606e,	// (0x00015760) cell_myfav_contact_pane_cp1_ParamLimits

0x606e,	// (0x00015760) cell_myfav_contact_pane_cp1

0x6086,	// (0x00015778) cell_myfav_contact_pane_cp2_ParamLimits

0x6086,	// (0x00015778) cell_myfav_contact_pane_cp2

0x609e,	// (0x00015790) cell_myfav_contact_pane_cp3_ParamLimits

0x609e,	// (0x00015790) cell_myfav_contact_pane_cp3

0x60b5,	// (0x000157a7) cell_myfav_contact_pane_cp4_ParamLimits

0x60b5,	// (0x000157a7) cell_myfav_contact_pane_cp4

0x60cd,	// (0x000157bf) cell_myfav_contact_pane_cp5_ParamLimits

0x60cd,	// (0x000157bf) cell_myfav_contact_pane_cp5

0x60e1,	// (0x000157d3) cell_myfav_contact_pane_cp6_ParamLimits

0x60e1,	// (0x000157d3) cell_myfav_contact_pane_cp6

0x60f7,	// (0x000157e9) cell_myfav_contact_pane_cp7_ParamLimits

0x60f7,	// (0x000157e9) cell_myfav_contact_pane_cp7

0xd178,	// (0x0001c86a) listscroll_gen_pane_cp05

0x610f,	// (0x00015801) main_myfav_hc_pane_g1_ParamLimits

0x610f,	// (0x00015801) main_myfav_hc_pane_g1

0x6129,	// (0x0001581b) main_myfav_hc_pane_g2_ParamLimits

0x6129,	// (0x0001581b) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0001f03f) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0001f03f) main_myfav_hc_pane_g

0x615d,	// (0x0001584f) main_myfav_hc_pane_t1_ParamLimits

0x615d,	// (0x0001584f) main_myfav_hc_pane_t1

0xd181,	// (0x0001c873) main_myfav_hc_pane_t2_ParamLimits

0xd181,	// (0x0001c873) main_myfav_hc_pane_t2

0xd193,	// (0x0001c885) main_myfav_hc_pane_t3_ParamLimits

0xd193,	// (0x0001c885) main_myfav_hc_pane_t3

0x6174,	// (0x00015866) main_myfav_hc_pane_t4_ParamLimits

0x6174,	// (0x00015866) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0001f046) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0001f046) main_myfav_hc_pane_t

0xc36d,	// (0x0001ba5f) bg_myfav_hc_instruction_pane_g1

0xd1a5,	// (0x0001c897) cell_myfav_contact_pane_g1_ParamLimits

0xd1a5,	// (0x0001c897) cell_myfav_contact_pane_g1

0xd1a5,	// (0x0001c897) cell_myfav_contact_pane_g2_ParamLimits

0xd1a5,	// (0x0001c897) cell_myfav_contact_pane_g2

0xd1b1,	// (0x0001c8a3) cell_myfav_contact_pane_g3_ParamLimits

0xd1b1,	// (0x0001c8a3) cell_myfav_contact_pane_g3

0xc60e,	// (0x0001bd00) cell_myfav_contact_pane_g4_ParamLimits

0xc60e,	// (0x0001bd00) cell_myfav_contact_pane_g4

0xd1be,	// (0x0001c8b0) cell_myfav_contact_pane_g5_ParamLimits

0xd1be,	// (0x0001c8b0) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0001f051) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0001f051) cell_myfav_contact_pane_g

0x6143,	// (0x00015835) main_myfav_hc_pane_g3_ParamLimits

0x6143,	// (0x00015835) main_myfav_hc_pane_g3

0xfe19,	// (0x0000f50b) popup_adpt_find_window

0x619e,	// (0x00015890) afind_page_pane_ParamLimits

0x619e,	// (0x00015890) afind_page_pane

0x61b3,	// (0x000158a5) aid_size_cell_afind_ParamLimits

0x61b3,	// (0x000158a5) aid_size_cell_afind

0x61d1,	// (0x000158c3) bg_popup_sub_pane_cp09_ParamLimits

0x61d1,	// (0x000158c3) bg_popup_sub_pane_cp09

0x61de,	// (0x000158d0) find_pane_cp01_ParamLimits

0x61de,	// (0x000158d0) find_pane_cp01

0xd1ca,	// (0x0001c8bc) grid_afind_control_pane_ParamLimits

0xd1ca,	// (0x0001c8bc) grid_afind_control_pane

0x61eb,	// (0x000158dd) grid_afind_pane_ParamLimits

0x61eb,	// (0x000158dd) grid_afind_pane

0x620d,	// (0x000158ff) cell_afind_pane_ParamLimits

0x620d,	// (0x000158ff) cell_afind_pane

0xc36d,	// (0x0001ba5f) afind_page_pane_g1

0x6274,	// (0x00015966) afind_page_pane_g2

0x627d,	// (0x0001596f) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0001f05c) afind_page_pane_g

0x6286,	// (0x00015978) afind_page_pane_t1

0xd1de,	// (0x0001c8d0) cell_afind_grid_control_pane_ParamLimits

0xd1de,	// (0x0001c8d0) cell_afind_grid_control_pane

0xce8c,	// (0x0001c57e) bg_button_pane_cp69_ParamLimits

0xce8c,	// (0x0001c57e) bg_button_pane_cp69

0x62a6,	// (0x00015998) cell_afind_pane_g1_ParamLimits

0x62a6,	// (0x00015998) cell_afind_pane_g1

0x62b3,	// (0x000159a5) cell_afind_pane_t1_ParamLimits

0x62b3,	// (0x000159a5) cell_afind_pane_t1

0xa01f,	// (0x00019711) bg_button_pane_cp72

0xd1ed,	// (0x0001c8df) cell_afind_grid_control_pane_g1

0x30e9,	// (0x000127db) aid_image_placing_area_ParamLimits

0x30e9,	// (0x000127db) aid_image_placing_area

0xc921,	// (0x0001c013) field_vitu_entry_pane_g1_ParamLimits

0xc921,	// (0x0001c013) field_vitu_entry_pane_g1

0xc92d,	// (0x0001c01f) field_vitu_entry_pane_g2_ParamLimits

0xc92d,	// (0x0001c01f) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0001ef0d) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0001ef0d) field_vitu_entry_pane_g

0x5309,	// (0x000149fb) cell_vitu_itu_pane_g1_ParamLimits

0x534b,	// (0x00014a3d) cell_vitu_itu_pane_t3_ParamLimits

0x534b,	// (0x00014a3d) cell_vitu_itu_pane_t3

0xce3c,	// (0x0001c52e) mp4_progress_pane_t1_ParamLimits

0xce55,	// (0x0001c547) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0001efa2) mp4_progress_pane_t_ParamLimits

0xce6e,	// (0x0001c560) mup_progress_pane_cp04_ParamLimits

0x6188,	// (0x0001587a) main_myfav_hc_pane_t5_ParamLimits

0x6188,	// (0x0001587a) main_myfav_hc_pane_t5

0x95d5,	// (0x00018cc7) aid_zoom_text_primary

0xfe19,	// (0x0000f50b) popup_adpt_find_window_ParamLimits

0x9610,	// (0x00018d02) main_cam_set_pane

0x5abc,	// (0x000151ae) cam4_zoom_pane_ParamLimits

0x5abc,	// (0x000151ae) cam4_zoom_pane

0x62c5,	// (0x000159b7) main_cam_set_pane_g1_ParamLimits

0x62c5,	// (0x000159b7) main_cam_set_pane_g1

0x62d3,	// (0x000159c5) main_cam_set_pane_g2_ParamLimits

0x62d3,	// (0x000159c5) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0001f063) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0001f063) main_cam_set_pane_g

0x62f4,	// (0x000159e6) main_cam_set_pane_t1_ParamLimits

0x62f4,	// (0x000159e6) main_cam_set_pane_t1

0x630f,	// (0x00015a01) main_cset_listscroll_pane_ParamLimits

0x630f,	// (0x00015a01) main_cset_listscroll_pane

0x6333,	// (0x00015a25) main_cset_slider_pane_ParamLimits

0x6333,	// (0x00015a25) main_cset_slider_pane

0xd1fe,	// (0x0001c8f0) main_cset_list_pane_ParamLimits

0xd1fe,	// (0x0001c8f0) main_cset_list_pane

0xd20e,	// (0x0001c900) scroll_pane_cp028

0x635d,	// (0x00015a4f) aid_area_touch_slider

0x6379,	// (0x00015a6b) cset_slider_pane

0x63a3,	// (0x00015a95) main_cset_slider_pane_g1

0x63b8,	// (0x00015aaa) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0001f068) main_cset_slider_pane_g

0xd247,	// (0x0001c939) main_cset_slider_pane_t1

0x647a,	// (0x00015b6c) main_cset_slider_pane_t2

0x6494,	// (0x00015b86) main_cset_slider_pane_t3

0x64ae,	// (0x00015ba0) main_cset_slider_pane_t4

0x64c8,	// (0x00015bba) main_cset_slider_pane_t5

0x64e6,	// (0x00015bd8) main_cset_slider_pane_t6

0x64fb,	// (0x00015bed) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0001f08d) main_cset_slider_pane_t

0x6607,	// (0x00015cf9) cset_list_set_pane_ParamLimits

0x6607,	// (0x00015cf9) cset_list_set_pane

0x661b,	// (0x00015d0d) aid_position_infowindow_above

0x6623,	// (0x00015d15) aid_position_infowindow_below

0x662b,	// (0x00015d1d) cset_list_set_pane_g1_ParamLimits

0x662b,	// (0x00015d1d) cset_list_set_pane_g1

0x6637,	// (0x00015d29) cset_list_set_pane_g3_ParamLimits

0x6637,	// (0x00015d29) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0001f0ac) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0001f0ac) cset_list_set_pane_g

0x6646,	// (0x00015d38) cset_list_set_pane_t1_ParamLimits

0x6646,	// (0x00015d38) cset_list_set_pane_t1

0x9610,	// (0x00018d02) list_highlight_pane_cp021_ParamLimits

0x9610,	// (0x00018d02) list_highlight_pane_cp021

0xaaf8,	// (0x0001a1ea) cset_slider_pane_g1

0xab0a,	// (0x0001a1fc) cset_slider_pane_g2

0xab01,	// (0x0001a1f3) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0001f0b1) cset_slider_pane_g

0xd2e7,	// (0x0001c9d9) aid_area_touch_cam4_zoom

0xd2ef,	// (0x0001c9e1) cam4_zoom_cont_pane

0xd2f7,	// (0x0001c9e9) cam4_zoom_pane_g1

0xd2ff,	// (0x0001c9f1) cam4_zoom_pane_g2

0x665b,	// (0x00015d4d) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0001f0b8) cam4_zoom_pane_g

0xd307,	// (0x0001c9f9) cam4_zoom_cont_pane_g1

0xd310,	// (0x0001ca02) cam4_zoom_cont_pane_g2

0xd319,	// (0x0001ca0b) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0001f0bf) cam4_zoom_cont_pane_g

0x5939,	// (0x0001502b) call4_image_pane_ParamLimits

0x5939,	// (0x0001502b) call4_image_pane

0xcecc,	// (0x0001c5be) call4_windows_conf_pane_ParamLimits

0xcee7,	// (0x0001c5d9) popup_call4_audio_in_window_ParamLimits

0xcee7,	// (0x0001c5d9) popup_call4_audio_in_window

0x95af,	// (0x00018ca1) bg_popup_call2_act_pane_cp02

0xcf49,	// (0x0001c63b) call4_list_conf_pane

0xc36d,	// (0x0001ba5f) call4_image_pane_g1

0xc36d,	// (0x0001ba5f) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0001edd3) call4_image_pane_g

0xd322,	// (0x0001ca14) list_single_graphic_popup_conf4_pane_ParamLimits

0xd322,	// (0x0001ca14) list_single_graphic_popup_conf4_pane

0x95af,	// (0x00018ca1) list_highlight_pane_cp022

0xd337,	// (0x0001ca29) list_single_graphic_popup_conf4_pane_g1

0xa7d2,	// (0x00019ec4) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0001f0c6) list_single_graphic_popup_conf4_pane_g

0xd33f,	// (0x0001ca31) list_single_graphic_popup_conf4_pane_t1

0x11d2,	// (0x000108c4) popup_vtel_slider_window_ParamLimits

0x11d2,	// (0x000108c4) popup_vtel_slider_window

0xce7a,	// (0x0001c56c) dialer2_ne_pane_t2_ParamLimits

0xce7a,	// (0x0001c56c) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0001efa7) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0001efa7) dialer2_ne_pane_t

0xc14c,	// (0x0001b83e) bg_popup_sub_pane_cp010_ParamLimits

0xc14c,	// (0x0001b83e) bg_popup_sub_pane_cp010

0x6663,	// (0x00015d55) popup_vtel_slider_window_g1_ParamLimits

0x6663,	// (0x00015d55) popup_vtel_slider_window_g1

0x6676,	// (0x00015d68) popup_vtel_slider_window_g2_ParamLimits

0x6676,	// (0x00015d68) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0001f0cb) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0001f0cb) popup_vtel_slider_window_g

0x66cc,	// (0x00015dbe) vtel_slider_pane_ParamLimits

0x66cc,	// (0x00015dbe) vtel_slider_pane

0x66ee,	// (0x00015de0) vtel_slider_pane_g1_ParamLimits

0x66ee,	// (0x00015de0) vtel_slider_pane_g1

0x6702,	// (0x00015df4) vtel_slider_pane_g2_ParamLimits

0x6702,	// (0x00015df4) vtel_slider_pane_g2

0x671a,	// (0x00015e0c) vtel_slider_pane_g3_ParamLimits

0x671a,	// (0x00015e0c) vtel_slider_pane_g3

0x66ee,	// (0x00015de0) vtel_slider_pane_g4_ParamLimits

0x66ee,	// (0x00015de0) vtel_slider_pane_g4

0x6730,	// (0x00015e22) vtel_slider_pane_g5_ParamLimits

0x6730,	// (0x00015e22) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0001f0d4) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0001f0d4) vtel_slider_pane_g

0x9610,	// (0x00018d02) main_gallery2_pane

0x5cc0,	// (0x000153b2) aid_size_row_itut2_dropdow_list_ParamLimits

0x5cc0,	// (0x000153b2) aid_size_row_itut2_dropdow_list

0x5d52,	// (0x00015444) grid_vitu2_function_top_pane_ParamLimits

0x5d52,	// (0x00015444) grid_vitu2_function_top_pane

0x5db1,	// (0x000154a3) popup_vitu2_dropdown_list_window_ParamLimits

0x5db1,	// (0x000154a3) popup_vitu2_dropdown_list_window

0x5dde,	// (0x000154d0) popup_vitu2_match_list_window

0x6746,	// (0x00015e38) cell_vitu2_function_top_pane_ParamLimits

0x6746,	// (0x00015e38) cell_vitu2_function_top_pane

0x6766,	// (0x00015e58) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6766,	// (0x00015e58) cell_vitu2_function_top_pane_cp01

0x6784,	// (0x00015e76) cell_vitu2_function_top_wide_pane_ParamLimits

0x6784,	// (0x00015e76) cell_vitu2_function_top_wide_pane

0x9610,	// (0x00018d02) bg_button_pane_cp012

0x67a2,	// (0x00015e94) cell_vitu2_function_top_pane_g1

0xd3c1,	// (0x0001cab3) bg_button_pane_cp013_ParamLimits

0xd3c1,	// (0x0001cab3) bg_button_pane_cp013

0x67b6,	// (0x00015ea8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x67b6,	// (0x00015ea8) cell_vitu2_function_top_wide_pane_g1

0x9610,	// (0x00018d02) bg_popup_sub_pane_cp20

0x67ce,	// (0x00015ec0) list_vitu2_match_list_pane

0xd0f0,	// (0x0001c7e2) bg_popup_sub_pane_cp20_g1

0xd0f8,	// (0x0001c7ea) bg_popup_sub_pane_cp20_g2

0xa22a,	// (0x0001991c) bg_popup_sub_pane_cp20_g3

0xd100,	// (0x0001c7f2) bg_popup_sub_pane_cp20_g4

0xa20a,	// (0x000198fc) bg_popup_sub_pane_cp20_g5

0xd3dd,	// (0x0001cacf) bg_popup_sub_pane_cp20_g6

0xd110,	// (0x0001c802) bg_popup_sub_pane_cp20_g7

0xd118,	// (0x0001c80a) bg_popup_sub_pane_cp20_g8

0xd120,	// (0x0001c812) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0001f0df) bg_popup_sub_pane_cp20_g

0xd3e5,	// (0x0001cad7) list_vitu2_match_list_item_pane_ParamLimits

0xd3e5,	// (0x0001cad7) list_vitu2_match_list_item_pane

0xd3f7,	// (0x0001cae9) list_vitu2_match_list_item_pane_t1

0x95af,	// (0x00018ca1) bg_popup_sub_pane_cp21

0xa68c,	// (0x00019d7e) grid_vitu2_dropdown_list_pane

0x682a,	// (0x00015f1c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x682a,	// (0x00015f1c) cell_vitu2_dropdown_list_char_pane

0x684d,	// (0x00015f3f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x684d,	// (0x00015f3f) cell_vitu2_dropdown_list_ctrl_pane

0xd411,	// (0x0001cb03) cell_vitu2_dropdown_list_char_pane_g1

0xd41a,	// (0x0001cb0c) cell_vitu2_dropdown_list_char_pane_g2

0xd423,	// (0x0001cb15) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0001f0fc) cell_vitu2_dropdown_list_char_pane_g

0x687b,	// (0x00015f6d) cell_vitu2_dropdown_list_char_pane_t1

0x6889,	// (0x00015f7b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6889,	// (0x00015f7b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6899,	// (0x00015f8b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6899,	// (0x00015f8b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x68aa,	// (0x00015f9c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x68aa,	// (0x00015f9c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x68ba,	// (0x00015fac) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x68ba,	// (0x00015fac) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc59d,	// (0x0001bc8f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc59d,	// (0x0001bc8f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0001f103) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0001f103) cell_vitu2_dropdown_list_ctrl_pane_g

0x68d6,	// (0x00015fc8) aid_size_cell_gallery2_ParamLimits

0x68d6,	// (0x00015fc8) aid_size_cell_gallery2

0x68f4,	// (0x00015fe6) grid_gallery2_pane_ParamLimits

0x68f4,	// (0x00015fe6) grid_gallery2_pane

0x690e,	// (0x00016000) scroll_pane_cp029_ParamLimits

0x690e,	// (0x00016000) scroll_pane_cp029

0x691a,	// (0x0001600c) cell_gallery2_pane_ParamLimits

0x691a,	// (0x0001600c) cell_gallery2_pane

0xd42c,	// (0x0001cb1e) cell_gallery2_pane_g2

0x697b,	// (0x0001606d) cell_gallery2_pane_g3

0xd434,	// (0x0001cb26) cell_gallery2_pane_g4

0xd43c,	// (0x0001cb2e) cell_gallery2_pane_g5

0xa9a0,	// (0x0001a092) grid_highlight_pane_cp10

0x5dde,	// (0x000154d0) popup_vitu2_match_list_window_ParamLimits

0x5df5,	// (0x000154e7) popup_vitu2_query_window_ParamLimits

0x5df5,	// (0x000154e7) popup_vitu2_query_window

0x95af,	// (0x00018ca1) bg_vitu2_candi_button_pane

0xd411,	// (0x0001cb03) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd41a,	// (0x0001cb0c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd423,	// (0x0001cb15) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6983,	// (0x00016075) bg_button_pane_cp015

0x6997,	// (0x00016089) bg_button_pane_cp016

0x69aa,	// (0x0001609c) bg_button_pane_cp017

0xbe60,	// (0x0001b552) bg_popup_sub_pane_cp22

0xd444,	// (0x0001cb36) popup_vitu2_query_window_g1

0x69ef,	// (0x000160e1) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0001f10e) popup_vitu2_query_window_g

0x6a0e,	// (0x00016100) popup_vitu2_query_window_t1_ParamLimits

0x6a0e,	// (0x00016100) popup_vitu2_query_window_t1

0x6a43,	// (0x00016135) popup_vitu2_query_window_t2_ParamLimits

0x6a43,	// (0x00016135) popup_vitu2_query_window_t2

0x6a55,	// (0x00016147) popup_vitu2_query_window_t3_ParamLimits

0x6a55,	// (0x00016147) popup_vitu2_query_window_t3

0x6a7d,	// (0x0001616f) popup_vitu2_query_window_t4_ParamLimits

0x6a7d,	// (0x0001616f) popup_vitu2_query_window_t4

0x6a9e,	// (0x00016190) popup_vitu2_query_window_t5_ParamLimits

0x6a9e,	// (0x00016190) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0001f115) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0001f115) popup_vitu2_query_window_t

0xd1f6,	// (0x0001c8e8) main_cset_text_pane

0x635d,	// (0x00015a4f) aid_area_touch_slider_ParamLimits

0x6379,	// (0x00015a6b) cset_slider_pane_ParamLimits

0x63a3,	// (0x00015a95) main_cset_slider_pane_g1_ParamLimits

0x63b8,	// (0x00015aaa) main_cset_slider_pane_g2_ParamLimits

0xd217,	// (0x0001c909) main_cset_slider_pane_g3_ParamLimits

0xd217,	// (0x0001c909) main_cset_slider_pane_g3

0x63cd,	// (0x00015abf) main_cset_slider_pane_g4_ParamLimits

0x63cd,	// (0x00015abf) main_cset_slider_pane_g4

0x63dc,	// (0x00015ace) main_cset_slider_pane_g5_ParamLimits

0x63dc,	// (0x00015ace) main_cset_slider_pane_g5

0x63ea,	// (0x00015adc) main_cset_slider_pane_g6_ParamLimits

0x63ea,	// (0x00015adc) main_cset_slider_pane_g6

0xf976,	// (0x0001f068) main_cset_slider_pane_g_ParamLimits

0xd247,	// (0x0001c939) main_cset_slider_pane_t1_ParamLimits

0x647a,	// (0x00015b6c) main_cset_slider_pane_t2_ParamLimits

0x6494,	// (0x00015b86) main_cset_slider_pane_t3_ParamLimits

0x64ae,	// (0x00015ba0) main_cset_slider_pane_t4_ParamLimits

0x64c8,	// (0x00015bba) main_cset_slider_pane_t5_ParamLimits

0x64e6,	// (0x00015bd8) main_cset_slider_pane_t6_ParamLimits

0x64fb,	// (0x00015bed) main_cset_slider_pane_t7_ParamLimits

0x6529,	// (0x00015c1b) main_cset_slider_pane_t8_ParamLimits

0x6529,	// (0x00015c1b) main_cset_slider_pane_t8

0x6551,	// (0x00015c43) main_cset_slider_pane_t9_ParamLimits

0x6551,	// (0x00015c43) main_cset_slider_pane_t9

0x6579,	// (0x00015c6b) main_cset_slider_pane_t10_ParamLimits

0x6579,	// (0x00015c6b) main_cset_slider_pane_t10

0x65a1,	// (0x00015c93) main_cset_slider_pane_t11_ParamLimits

0x65a1,	// (0x00015c93) main_cset_slider_pane_t11

0x65cb,	// (0x00015cbd) main_cset_slider_pane_t12_ParamLimits

0x65cb,	// (0x00015cbd) main_cset_slider_pane_t12

0x65e8,	// (0x00015cda) main_cset_slider_pane_t13_ParamLimits

0x65e8,	// (0x00015cda) main_cset_slider_pane_t13

0xf99b,	// (0x0001f08d) main_cset_slider_pane_t_ParamLimits

0x95af,	// (0x00018ca1) bg_popup_sub_pane_cp011

0xd450,	// (0x0001cb42) main_cset_text_pane_g1

0xd458,	// (0x0001cb4a) main_cset_text_pane_t1

0xd466,	// (0x0001cb58) main_cset_text_pane_t2

0xd474,	// (0x0001cb66) main_cset_text_pane_t3

0xd482,	// (0x0001cb74) main_cset_text_pane_t4

0xd490,	// (0x0001cb82) main_cset_text_pane_t5

0xd49e,	// (0x0001cb90) main_cset_text_pane_t6

0xd4ac,	// (0x0001cb9e) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0001f124) main_cset_text_pane_t

0x95af,	// (0x00018ca1) main_cam4_burst_pane

0x95af,	// (0x00018ca1) main_cam5_pane

0x6294,	// (0x00015986) bg_button_pane_cp019

0x629d,	// (0x0001598f) bg_button_pane_cp020

0xd223,	// (0x0001c915) main_cset_slider_pane_g7_ParamLimits

0xd223,	// (0x0001c915) main_cset_slider_pane_g7

0xd22f,	// (0x0001c921) main_cset_slider_pane_g8_ParamLimits

0xd22f,	// (0x0001c921) main_cset_slider_pane_g8

0x63fe,	// (0x00015af0) main_cset_slider_pane_g9_ParamLimits

0x63fe,	// (0x00015af0) main_cset_slider_pane_g9

0x640a,	// (0x00015afc) main_cset_slider_pane_g10_ParamLimits

0x640a,	// (0x00015afc) main_cset_slider_pane_g10

0x6416,	// (0x00015b08) main_cset_slider_pane_g11_ParamLimits

0x6416,	// (0x00015b08) main_cset_slider_pane_g11

0x6422,	// (0x00015b14) main_cset_slider_pane_g12_ParamLimits

0x6422,	// (0x00015b14) main_cset_slider_pane_g12

0x642e,	// (0x00015b20) main_cset_slider_pane_g13_ParamLimits

0x642e,	// (0x00015b20) main_cset_slider_pane_g13

0x643a,	// (0x00015b2c) main_cset_slider_pane_g14_ParamLimits

0x643a,	// (0x00015b2c) main_cset_slider_pane_g14

0x6446,	// (0x00015b38) main_cset_slider_pane_g15_ParamLimits

0x6446,	// (0x00015b38) main_cset_slider_pane_g15

0xd275,	// (0x0001c967) main_cset_slider_pane_t14_ParamLimits

0xd275,	// (0x0001c967) main_cset_slider_pane_t14

0xd2ae,	// (0x0001c9a0) main_cset_slider_pane_t15_ParamLimits

0xd2ae,	// (0x0001c9a0) main_cset_slider_pane_t15

0x6b15,	// (0x00016207) aid_cam4_burst_size_cell_ParamLimits

0x6b15,	// (0x00016207) aid_cam4_burst_size_cell

0x6b35,	// (0x00016227) grid_cam4_burst_pane_ParamLimits

0x6b35,	// (0x00016227) grid_cam4_burst_pane

0x6b6f,	// (0x00016261) linegrid_cam4_burst_pane_ParamLimits

0x6b6f,	// (0x00016261) linegrid_cam4_burst_pane

0xd4ba,	// (0x0001cbac) scroll_pane_cp30_ParamLimits

0xd4ba,	// (0x0001cbac) scroll_pane_cp30

0x6b91,	// (0x00016283) cell_cam4_burst_pane_ParamLimits

0x6b91,	// (0x00016283) cell_cam4_burst_pane

0xd4c6,	// (0x0001cbb8) linegrid_cam4_burst_pane_g1_ParamLimits

0xd4c6,	// (0x0001cbb8) linegrid_cam4_burst_pane_g1

0x6be6,	// (0x000162d8) linegrid_cam4_burst_pane_g2_ParamLimits

0x6be6,	// (0x000162d8) linegrid_cam4_burst_pane_g2

0xd4d3,	// (0x0001cbc5) linegrid_cam4_burst_pane_g3_ParamLimits

0xd4d3,	// (0x0001cbc5) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0001f133) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0001f133) linegrid_cam4_burst_pane_g

0x6bf7,	// (0x000162e9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6bf7,	// (0x000162e9) linegrid_cam4_burst_pane_g3_copy1

0xd4e0,	// (0x0001cbd2) linegrid_cam4_burst_pane_g4_ParamLimits

0xd4e0,	// (0x0001cbd2) linegrid_cam4_burst_pane_g4

0x6c15,	// (0x00016307) linegrid_cam4_burst_pane_g5_ParamLimits

0x6c15,	// (0x00016307) linegrid_cam4_burst_pane_g5

0x6c26,	// (0x00016318) linegrid_cam4_burst_pane_g6_ParamLimits

0x6c26,	// (0x00016318) linegrid_cam4_burst_pane_g6

0xd4ed,	// (0x0001cbdf) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4ed,	// (0x0001cbdf) linegrid_cam4_burst_pane_g7

0x6c3d,	// (0x0001632f) cell_cam4_burst_pane_g1

0xd506,	// (0x0001cbf8) main_cam5_pane_t1_ParamLimits

0xd506,	// (0x0001cbf8) main_cam5_pane_t1

0xd518,	// (0x0001cc0a) main_cam5_pane_t2_ParamLimits

0xd518,	// (0x0001cc0a) main_cam5_pane_t2

0xd52a,	// (0x0001cc1c) main_cam5_pane_t3_ParamLimits

0xd52a,	// (0x0001cc1c) main_cam5_pane_t3

0xd53c,	// (0x0001cc2e) main_cam5_pane_t4_ParamLimits

0xd53c,	// (0x0001cc2e) main_cam5_pane_t4

0xd554,	// (0x0001cc46) main_cam5_pane_t5_ParamLimits

0xd554,	// (0x0001cc46) main_cam5_pane_t5

0xd568,	// (0x0001cc5a) main_cam5_pane_t6_ParamLimits

0xd568,	// (0x0001cc5a) main_cam5_pane_t6

0xd57c,	// (0x0001cc6e) main_cam5_pane_t7_ParamLimits

0xd57c,	// (0x0001cc6e) main_cam5_pane_t7

0xd58e,	// (0x0001cc80) main_cam5_pane_t8_ParamLimits

0xd58e,	// (0x0001cc80) main_cam5_pane_t8

0xd5ac,	// (0x0001cc9e) main_cam5_pane_t9_ParamLimits

0xd5ac,	// (0x0001cc9e) main_cam5_pane_t9

0xd5be,	// (0x0001ccb0) main_cam5_pane_t10_ParamLimits

0xd5be,	// (0x0001ccb0) main_cam5_pane_t10

0xd5d0,	// (0x0001ccc2) main_cam5_pane_t11_ParamLimits

0xd5d0,	// (0x0001ccc2) main_cam5_pane_t11

0xd5e4,	// (0x0001ccd6) main_cam5_pane_t12_ParamLimits

0xd5e4,	// (0x0001ccd6) main_cam5_pane_t12

0xd5fb,	// (0x0001cced) main_cam5_pane_t13_ParamLimits

0xd5fb,	// (0x0001cced) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0001f13f) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0001f13f) main_cam5_pane_t

0xfe9c,	// (0x0000f58e) popup_scut_keymap_window_ParamLimits

0xfe9c,	// (0x0000f58e) popup_scut_keymap_window

0x6c50,	// (0x00016342) aid_size_cell_brow_shortcut

0xa9a0,	// (0x0001a092) bg_popup_window_pane_cp010

0x6c5c,	// (0x0001634e) grid_scut_pane

0x6c68,	// (0x0001635a) cell_scut_pane_ParamLimits

0x6c68,	// (0x0001635a) cell_scut_pane

0x6c81,	// (0x00016373) cell_scut_pane_g1

0xd61e,	// (0x0001cd10) cell_scut_pane_t1

0xd62d,	// (0x0001cd1f) cell_scut_pane_t2

0x6c8a,	// (0x0001637c) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0001f15a) cell_scut_pane_t

0x47d2,	// (0x00013ec4) main_mup3_pane_g8_ParamLimits

0x47d2,	// (0x00013ec4) main_mup3_pane_g8

0x5cdc,	// (0x000153ce) area_vitu2_query_pane_ParamLimits

0x5cdc,	// (0x000153ce) area_vitu2_query_pane

0x69bd,	// (0x000160af) input_focus_pane_cp08

0xd63c,	// (0x0001cd2e) area_vitu2_query_pane_g1

0x6c98,	// (0x0001638a) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0001f161) area_vitu2_query_pane_g

0x6ca9,	// (0x0001639b) area_vitu2_query_pane_t1_ParamLimits

0x6ca9,	// (0x0001639b) area_vitu2_query_pane_t1

0x6cbd,	// (0x000163af) area_vitu2_query_pane_t2_ParamLimits

0x6cbd,	// (0x000163af) area_vitu2_query_pane_t2

0x6cd1,	// (0x000163c3) area_vitu2_query_pane_t3_ParamLimits

0x6cd1,	// (0x000163c3) area_vitu2_query_pane_t3

0xd648,	// (0x0001cd3a) area_vitu2_query_pane_t4_ParamLimits

0xd648,	// (0x0001cd3a) area_vitu2_query_pane_t4

0xd670,	// (0x0001cd62) area_vitu2_query_pane_t5_ParamLimits

0xd670,	// (0x0001cd62) area_vitu2_query_pane_t5

0xd698,	// (0x0001cd8a) area_vitu2_query_pane_t6_ParamLimits

0xd698,	// (0x0001cd8a) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0001f166) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0001f166) area_vitu2_query_pane_t

0x6cf9,	// (0x000163eb) bg_button_pane_cp018

0x6d07,	// (0x000163f9) bg_button_pane_cp021

0x6d13,	// (0x00016405) bg_button_pane_cp022

0x6d24,	// (0x00016416) input_focus_pane_cp09

0x2630,	// (0x00011d22) aid_size_touch_mv_arrow_left

0x2659,	// (0x00011d4b) aid_size_touch_mv_arrow_right

0x645e,	// (0x00015b50) main_cset_slider_pane_g16_ParamLimits

0x645e,	// (0x00015b50) main_cset_slider_pane_g16

0x646c,	// (0x00015b5e) main_cset_slider_pane_g17_ParamLimits

0x646c,	// (0x00015b5e) main_cset_slider_pane_g17

0x6c3d,	// (0x0001632f) cell_cam4_burst_pane_g1_ParamLimits

0x95af,	// (0x00018ca1) compa_mode_pane

0x6686,	// (0x00015d78) popup_vtel_slider_window_g3_ParamLimits

0x6686,	// (0x00015d78) popup_vtel_slider_window_g3

0x669d,	// (0x00015d8f) popup_vtel_slider_window_g4_ParamLimits

0x669d,	// (0x00015d8f) popup_vtel_slider_window_g4

0x66b4,	// (0x00015da6) popup_vtel_slider_window_t1_ParamLimits

0x66b4,	// (0x00015da6) popup_vtel_slider_window_t1

0x95af,	// (0x00018ca1) main_cl_pane

0xbe8c,	// (0x0001b57e) popup_imed_adjust2_window_ParamLimits

0xbe60,	// (0x0001b552) bg_tb_trans_pane_cp05_ParamLimits

0xc856,	// (0x0001bf48) popup_imed_adjust2_window_g1_ParamLimits

0xc865,	// (0x0001bf57) popup_imed_adjust2_window_g2_ParamLimits

0xc865,	// (0x0001bf57) popup_imed_adjust2_window_g2

0xc871,	// (0x0001bf63) popup_imed_adjust2_window_g3_ParamLimits

0xc871,	// (0x0001bf63) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0001eed1) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0001eed1) popup_imed_adjust2_window_g

0xc87d,	// (0x0001bf6f) popup_imed_adjust2_window_t1_ParamLimits

0xc895,	// (0x0001bf87) slider_imed_adjust_pane_ParamLimits

0xc8a9,	// (0x0001bf9b) slider_imed_adjust_pane_g1_ParamLimits

0xc8b9,	// (0x0001bfab) slider_imed_adjust_pane_g2_ParamLimits

0xc8c9,	// (0x0001bfbb) slider_imed_adjust_pane_g3_ParamLimits

0xc8da,	// (0x0001bfcc) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0001eed8) slider_imed_adjust_pane_g_ParamLimits

0x5a5c,	// (0x0001514e) aid_touch_area_cam4_ParamLimits

0x5a5c,	// (0x0001514e) aid_touch_area_cam4

0xcf93,	// (0x0001c685) battery_pane_cp01

0x5b2e,	// (0x00015220) main_camera4_pane_g6_ParamLimits

0x5b2e,	// (0x00015220) main_camera4_pane_g6

0x5b58,	// (0x0001524a) main_camera4_pane_t2_ParamLimits

0x5b58,	// (0x0001524a) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0001efdb) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0001efdb) main_camera4_pane_t

0x5b8d,	// (0x0001527f) aid_touch_area_vid4_ParamLimits

0x5b8d,	// (0x0001527f) aid_touch_area_vid4

0x5be1,	// (0x000152d3) main_video4_pane_g5_ParamLimits

0x5be1,	// (0x000152d3) main_video4_pane_g5

0x5c06,	// (0x000152f8) vid4_progress_pane_ParamLimits

0x5c06,	// (0x000152f8) vid4_progress_pane

0xd23b,	// (0x0001c92d) main_cset_slider_pane_g18_ParamLimits

0xd23b,	// (0x0001c92d) main_cset_slider_pane_g18

0xd4fa,	// (0x0001cbec) cell_cam4_burst_pane_g2_ParamLimits

0xd4fa,	// (0x0001cbec) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0001f13a) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0001f13a) cell_cam4_burst_pane_g

0x9d73,	// (0x00019465) bg_cl_pane_ParamLimits

0x9d73,	// (0x00019465) bg_cl_pane

0x6d35,	// (0x00016427) cl_header_pane_ParamLimits

0x6d35,	// (0x00016427) cl_header_pane

0x6d49,	// (0x0001643b) cl_listscroll_pane_ParamLimits

0x6d49,	// (0x0001643b) cl_listscroll_pane

0xd6e4,	// (0x0001cdd6) bg_cl_pane_g1

0xd6ec,	// (0x0001cdde) bg_cl_pane_g2

0xd6f4,	// (0x0001cde6) bg_cl_pane_g3

0xd6fc,	// (0x0001cdee) bg_cl_pane_g4

0xd704,	// (0x0001cdf6) bg_cl_pane_g5

0xd70c,	// (0x0001cdfe) bg_cl_pane_g6

0xd714,	// (0x0001ce06) bg_cl_pane_g7

0xd71c,	// (0x0001ce0e) bg_cl_pane_g8

0xd724,	// (0x0001ce16) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0001f175) bg_cl_pane_g

0x6d59,	// (0x0001644b) aid_height_cl_leading_ParamLimits

0x6d59,	// (0x0001644b) aid_height_cl_leading

0x6d65,	// (0x00016457) aid_height_cl_text_ParamLimits

0x6d65,	// (0x00016457) aid_height_cl_text

0x9610,	// (0x00018d02) bg_cl_header_pane_ParamLimits

0x9610,	// (0x00018d02) bg_cl_header_pane

0x6d84,	// (0x00016476) cl_header_pane_g1_ParamLimits

0x6d84,	// (0x00016476) cl_header_pane_g1

0x6d9a,	// (0x0001648c) cl_header_pane_t1_ParamLimits

0x6d9a,	// (0x0001648c) cl_header_pane_t1

0xd72c,	// (0x0001ce1e) cl_list_pane

0xd20e,	// (0x0001c900) hc_scroll_pane_cp01

0xa20a,	// (0x000198fc) bg_cl_header_pane_g1

0xd0f0,	// (0x0001c7e2) bg_cl_header_pane_g2

0xa22a,	// (0x0001991c) bg_cl_header_pane_g3

0xd100,	// (0x0001c7f2) bg_cl_header_pane_g4

0xd0f8,	// (0x0001c7ea) bg_cl_header_pane_g5

0xd3dd,	// (0x0001cacf) bg_cl_header_pane_g6

0xd118,	// (0x0001c80a) bg_cl_header_pane_g7

0xd120,	// (0x0001c812) bg_cl_header_pane_g8

0xd110,	// (0x0001c802) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0001f188) bg_cl_header_pane_g

0x6db3,	// (0x000164a5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6db3,	// (0x000164a5) hc_cl_list_double_graphic_heading_pane

0x6dc6,	// (0x000164b8) hc_cl_list_single_graphic_pane_ParamLimits

0x6dc6,	// (0x000164b8) hc_cl_list_single_graphic_pane

0x6dde,	// (0x000164d0) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6dde,	// (0x000164d0) hc_cl_list_single_graphic_pane_g1

0x6dea,	// (0x000164dc) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6dea,	// (0x000164dc) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0001f19b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0001f19b) hc_cl_list_single_graphic_pane_g

0x6dfe,	// (0x000164f0) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6dfe,	// (0x000164f0) hc_cl_list_single_graphic_pane_t1

0x6dde,	// (0x000164d0) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6dde,	// (0x000164d0) hc_cl_list_double_graphic_heading_pane_g1

0x6e13,	// (0x00016505) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6e13,	// (0x00016505) hc_cl_list_double_graphic_heading_pane_g2

0x6e27,	// (0x00016519) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6e27,	// (0x00016519) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0001f1a0) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0001f1a0) hc_cl_list_double_graphic_heading_pane_g

0x6e3b,	// (0x0001652d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6e3b,	// (0x0001652d) hc_cl_list_double_graphic_heading_pane_t1

0x6e50,	// (0x00016542) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6e50,	// (0x00016542) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0001f1a7) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0001f1a7) hc_cl_list_double_graphic_heading_pane_t

0x6e65,	// (0x00016557) vid4_progress_pane_g1

0x6e77,	// (0x00016569) vid4_progress_pane_g2

0xabc2,	// (0x0001a2b4) vid4_progress_pane_g3

0xd73d,	// (0x0001ce2f) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0001f1ac) vid4_progress_pane_g

0xd75b,	// (0x0001ce4d) vid4_progress_pane_t1

0xd770,	// (0x0001ce62) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0001f1b7) vid4_progress_pane_t

0xd79b,	// (0x0001ce8d) wait_bar_pane_cp07

0xc15a,	// (0x0001b84c) blid_firmament_pane_ParamLimits

0xc19d,	// (0x0001b88f) popup_blid_sat_info2_window_g1

0xc1c1,	// (0x0001b8b3) popup_blid_sat_info2_window_t3

0xc1cf,	// (0x0001b8c1) popup_blid_sat_info2_window_t4

0xc1dd,	// (0x0001b8cf) popup_blid_sat_info2_window_t5

0xc1eb,	// (0x0001b8dd) popup_blid_sat_info2_window_t6

0xc1fb,	// (0x0001b8ed) popup_blid_sat_info2_window_t7

0xc209,	// (0x0001b8fb) popup_blid_sat_info2_window_t8

0xc217,	// (0x0001b909) popup_blid_sat_info2_window_t9

0xc225,	// (0x0001b917) popup_blid_sat_info2_window_t10

0xc2ed,	// (0x0001b9df) aid_firma_cardinal_ParamLimits

0xc301,	// (0x0001b9f3) blid_firmament_pane_t1_ParamLimits

0xc318,	// (0x0001ba0a) blid_firmament_pane_t2_ParamLimits

0xc32f,	// (0x0001ba21) blid_firmament_pane_t3_ParamLimits

0xc346,	// (0x0001ba38) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0001edca) blid_firmament_pane_t_ParamLimits

0xc35d,	// (0x0001ba4f) blid_sat_info_pane_ParamLimits

0x9610,	// (0x00018d02) main_cam_set_pane_ParamLimits

0x50b3,	// (0x000147a5) aid_size_cell_colour_35_ParamLimits

0x50d3,	// (0x000147c5) aid_size_cell_colour_112_ParamLimits

0x50f3,	// (0x000147e5) aid_size_cell_effect_ParamLimits

0xbe60,	// (0x0001b552) bg_tb_trans_pane_cp02_ParamLimits

0xa491,	// (0x00019b83) heading_imed_pane_ParamLimits

0x5113,	// (0x00014805) listscroll_imed_pane_ParamLimits

0xb482,	// (0x0001ab74) popup_call2_audio_first_window_g5_ParamLimits

0xb482,	// (0x0001ab74) popup_call2_audio_first_window_g5

0x56c4,	// (0x00014db6) aid_size_touch_image3_arrow_left_ParamLimits

0x56c4,	// (0x00014db6) aid_size_touch_image3_arrow_left

0x56f0,	// (0x00014de2) aid_size_touch_image3_arrow_right_ParamLimits

0x56f0,	// (0x00014de2) aid_size_touch_image3_arrow_right

0xd786,	// (0x0001ce78) vid4_progress_pane_t3

0x5432,	// (0x00014b24) main_hwr_training_symbol_option_pane_ParamLimits

0x5432,	// (0x00014b24) main_hwr_training_symbol_option_pane

0xcb45,	// (0x0001c237) popup_hwr_training_preview_window_ParamLimits

0xcb45,	// (0x0001c237) popup_hwr_training_preview_window

0x5452,	// (0x00014b44) hwr_training_navi_pane_g5_ParamLimits

0x5452,	// (0x00014b44) hwr_training_navi_pane_g5

0xd0de,	// (0x0001c7d0) popup_char_count_window

0x9610,	// (0x00018d02) bg_popup_sub_pane_cp20_ParamLimits

0x67ce,	// (0x00015ec0) list_vitu2_match_list_pane_ParamLimits

0x67dd,	// (0x00015ecf) vitu2_page_scroll_pane_ParamLimits

0x67dd,	// (0x00015ecf) vitu2_page_scroll_pane

0xd7d1,	// (0x0001cec3) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7d1,	// (0x0001cec3) list_single_hwr_training_symbol_option_pane

0xd7e4,	// (0x0001ced6) list_single_hwr_training_symbol_option_pane_g1

0xd7ec,	// (0x0001cede) list_single_hwr_training_symbol_option_pane_t1

0xd7fa,	// (0x0001ceec) bg_button_pane_cp023

0xd803,	// (0x0001cef5) bg_button_pane_cp024

0x6eb8,	// (0x000165aa) vitu2_page_scroll_pane_g1

0x6ec0,	// (0x000165b2) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0001f1be) vitu2_page_scroll_pane_g

0x6eca,	// (0x000165bc) vitu2_page_scroll_pane_t1

0xc076,	// (0x0001b768) popup_char_count_window_g1

0xd836,	// (0x0001cf28) popup_char_count_window_g2

0xd83f,	// (0x0001cf31) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0001f1c3) popup_char_count_window_g

0xd848,	// (0x0001cf3a) popup_char_count_window_t1

0x95af,	// (0x00018ca1) main_vded2_pane

0xc842,	// (0x0001bf34) aid_size_cell_imed_line

0xc84c,	// (0x0001bf3e) grid_imed_line_width_pane

0xd04d,	// (0x0001c73f) vid4_indicators_pane_g4

0xd856,	// (0x0001cf48) cell_imed_line_width_pane_ParamLimits

0xd856,	// (0x0001cf48) cell_imed_line_width_pane

0xd86c,	// (0x0001cf5e) cell_imed_line_width_pane_g1

0xd875,	// (0x0001cf67) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0001f1ca) cell_imed_line_width_pane_g

0x6ed9,	// (0x000165cb) main_vded2_pane_g1_ParamLimits

0x6ed9,	// (0x000165cb) main_vded2_pane_g1

0x6ef4,	// (0x000165e6) main_vded2_pane_g2_ParamLimits

0x6ef4,	// (0x000165e6) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0001f1cf) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0001f1cf) main_vded2_pane_g

0x6f06,	// (0x000165f8) vded2_slider_pane_ParamLimits

0x6f06,	// (0x000165f8) vded2_slider_pane

0x6f16,	// (0x00016608) aid_size_touch_vded2_end

0x6f20,	// (0x00016612) aid_size_touch_vded2_playhead

0xd87d,	// (0x0001cf6f) aid_size_touch_vded2_start

0xd885,	// (0x0001cf77) vded2_slider_bg_pane

0xd88e,	// (0x0001cf80) vded2_slider_pane_g1

0xd897,	// (0x0001cf89) vded2_slider_pane_g2

0x6f2a,	// (0x0001661c) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0001f1d4) vded2_slider_pane_g

0xd355,	// (0x0001ca47) vded2_slider_bg_pane_g1

0xd35e,	// (0x0001ca50) vded2_slider_bg_pane_g2

0xd367,	// (0x0001ca59) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0001f1db) vded2_slider_bg_pane_g

0x2d28,	// (0x0001241a) aid_postcard_touch_down_pane_ParamLimits

0x2d28,	// (0x0001241a) aid_postcard_touch_down_pane

0x2d40,	// (0x00012432) aid_postcard_touch_up_pane_ParamLimits

0x2d40,	// (0x00012432) aid_postcard_touch_up_pane

0x95af,	// (0x00018ca1) main_blid2_pane

0xbe6e,	// (0x0001b560) popup_blid2_search_window

0x95af,	// (0x00018ca1) blid2_gps_pane

0x95af,	// (0x00018ca1) blid2_navig_pane

0x95af,	// (0x00018ca1) blid2_search_pane

0x95af,	// (0x00018ca1) blid2_tripm_pane

0x6f35,	// (0x00016627) blid2_search_pane_g1_ParamLimits

0x6f35,	// (0x00016627) blid2_search_pane_g1

0x6f48,	// (0x0001663a) blid2_search_pane_t1_ParamLimits

0x6f48,	// (0x0001663a) blid2_search_pane_t1

0x6f5a,	// (0x0001664c) aid_size_cell_blid2_gps_ParamLimits

0x6f5a,	// (0x0001664c) aid_size_cell_blid2_gps

0x6f72,	// (0x00016664) blid2_gps_pane_g1_ParamLimits

0x6f72,	// (0x00016664) blid2_gps_pane_g1

0x6f86,	// (0x00016678) grid_blid2_satellite_pane_ParamLimits

0x6f86,	// (0x00016678) grid_blid2_satellite_pane

0x6f9e,	// (0x00016690) blid2_navig_pane_g1_ParamLimits

0x6f9e,	// (0x00016690) blid2_navig_pane_g1

0x6faa,	// (0x0001669c) blid2_navig_pane_t1_ParamLimits

0x6faa,	// (0x0001669c) blid2_navig_pane_t1

0x6fc5,	// (0x000166b7) blid2_navig_pane_t2_ParamLimits

0x6fc5,	// (0x000166b7) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0001f1e2) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0001f1e2) blid2_navig_pane_t

0x6fe0,	// (0x000166d2) blid2_navig_ring_pane_ParamLimits

0x6fe0,	// (0x000166d2) blid2_navig_ring_pane

0x6ffb,	// (0x000166ed) blid2_speed_pane_ParamLimits

0x6ffb,	// (0x000166ed) blid2_speed_pane

0x7007,	// (0x000166f9) blid2_tripm_pane_g1_ParamLimits

0x7007,	// (0x000166f9) blid2_tripm_pane_g1

0x7022,	// (0x00016714) blid2_tripm_pane_g2_ParamLimits

0x7022,	// (0x00016714) blid2_tripm_pane_g2

0x7036,	// (0x00016728) blid2_tripm_pane_g3_ParamLimits

0x7036,	// (0x00016728) blid2_tripm_pane_g3

0x704a,	// (0x0001673c) blid2_tripm_pane_g4_ParamLimits

0x704a,	// (0x0001673c) blid2_tripm_pane_g4

0x705e,	// (0x00016750) blid2_tripm_pane_g5_ParamLimits

0x705e,	// (0x00016750) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0001f1e7) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0001f1e7) blid2_tripm_pane_g

0x7084,	// (0x00016776) blid2_tripm_pane_t1_ParamLimits

0x7084,	// (0x00016776) blid2_tripm_pane_t1

0x709d,	// (0x0001678f) blid2_tripm_pane_t2_ParamLimits

0x709d,	// (0x0001678f) blid2_tripm_pane_t2

0x70b6,	// (0x000167a8) blid2_tripm_pane_t3_ParamLimits

0x70b6,	// (0x000167a8) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0001f1f4) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0001f1f4) blid2_tripm_pane_t

0x70fd,	// (0x000167ef) cell_blid2_satellite_pane_ParamLimits

0x70fd,	// (0x000167ef) cell_blid2_satellite_pane

0x711b,	// (0x0001680d) cell_blid2_satellite_pane_g1

0xd89f,	// (0x0001cf91) cell_blid2_satellite_pane_t1

0xc36d,	// (0x0001ba5f) blid2_speed_pane_g1

0xd8ad,	// (0x0001cf9f) blid2_speed_pane_t1

0xd8bb,	// (0x0001cfad) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0001f1fd) blid2_speed_pane_t

0xc36d,	// (0x0001ba5f) blid2_navig_ring_pane_g1

0x7124,	// (0x00016816) blid2_navig_ring_pane_g2

0x712c,	// (0x0001681e) blid2_navig_ring_pane_g3

0x7134,	// (0x00016826) blid2_navig_ring_pane_g4

0x713c,	// (0x0001682e) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0001f202) blid2_navig_ring_pane_g

0x95af,	// (0x00018ca1) bg_popup_window_pane_cp011

0xd8c9,	// (0x0001cfbb) popup_blid2_search_window_g1

0xd8d1,	// (0x0001cfc3) popup_blid2_search_window_t1

0xd8df,	// (0x0001cfd1) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0001f20d) popup_blid2_search_window_t

0xa119,	// (0x0001980b) main_browser_pane_g1

0x9d73,	// (0x00019465) main_browser_pane_ParamLimits

0x9610,	// (0x00018d02) bg_button_pane_cp011_ParamLimits

0x6026,	// (0x00015718) cell_vitu2_function_pane_g1_ParamLimits

0xbe60,	// (0x0001b552) bg_popup_sub_pane_cp22_ParamLimits

0x69bd,	// (0x000160af) input_focus_pane_cp08_ParamLimits

0x69d4,	// (0x000160c6) popup_vitu2_query_button_pane_ParamLimits

0x69d4,	// (0x000160c6) popup_vitu2_query_button_pane

0x69e5,	// (0x000160d7) popup_vitu2_query_input_button_pane

0xd444,	// (0x0001cb36) popup_vitu2_query_window_g1_ParamLimits

0x69ef,	// (0x000160e1) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0001f10e) popup_vitu2_query_window_g_ParamLimits

0x95af,	// (0x00018ca1) bg_button_pane_cp026

0x7144,	// (0x00016836) popup_vitu2_query_input_button_pane_g1

0x95af,	// (0x00018ca1) bg_button_pane_cp025

0xd8ed,	// (0x0001cfdf) popup_vitu2_query_button_pane_t1

0x444c,	// (0x00013b3e) main_mp3_pane_t6

0x445a,	// (0x00013b4c) popup_slider_window_cp01

0xcfb1,	// (0x0001c6a3) cam4_battery_pane

0xd006,	// (0x0001c6f8) cam4_battery_pane_cp02

0xd735,	// (0x0001ce27) cam4_battery_pane_cp01

0xd735,	// (0x0001ce27) cam4_battery_pane_cp03

0xc36d,	// (0x0001ba5f) cam4_battery_pane_g1

0xd8fb,	// (0x0001cfed) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0001f212) cam4_battery_pane_g

0xc233,	// (0x0001b925) popup_blid_sat_info2_window_t11

0x2630,	// (0x00011d22) aid_size_touch_mv_arrow_left_ParamLimits

0x2659,	// (0x00011d4b) aid_size_touch_mv_arrow_right_ParamLimits

0xa900,	// (0x00019ff2) navi_pane_g1_ParamLimits

0x2698,	// (0x00011d8a) navi_pane_g2_ParamLimits

0x26c6,	// (0x00011db8) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0001eadc) navi_pane_g_ParamLimits

0x2720,	// (0x00011e12) navi_pane_mv_t1_ParamLimits

0x511f,	// (0x00014811) grid_imed_effect_pane_ParamLimits

0x10da,	// (0x000107cc) aid_placing_vt_slider_lsc

0xa064,	// (0x00019756) aid_placing_vt_slider_prt

0x9610,	// (0x00018d02) bg_tb_trans_pane_cp01_ParamLimits

0xc4bd,	// (0x0001bbaf) popup_image_details_window_g1_ParamLimits

0xc4d0,	// (0x0001bbc2) popup_image_details_window_g2_ParamLimits

0xc4e5,	// (0x0001bbd7) popup_image_details_window_g3_ParamLimits

0xc4e5,	// (0x0001bbd7) popup_image_details_window_g3

0xf71d,	// (0x0001ee0f) popup_image_details_window_g_ParamLimits

0xc4f9,	// (0x0001bbeb) popup_image_details_window_t1_ParamLimits

0xc50b,	// (0x0001bbfd) popup_image_details_window_t2_ParamLimits

0xc524,	// (0x0001bc16) popup_image_details_window_t3_ParamLimits

0xc538,	// (0x0001bc2a) popup_image_details_window_t4_ParamLimits

0xc553,	// (0x0001bc45) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0001ee16) popup_image_details_window_t_ParamLimits

0x6d71,	// (0x00016463) cl_header_name_pane_ParamLimits

0x6d71,	// (0x00016463) cl_header_name_pane

0x714c,	// (0x0001683e) cl_header_name_pane_t1_ParamLimits

0x714c,	// (0x0001683e) cl_header_name_pane_t1

0x716d,	// (0x0001685f) cl_header_name_pane_t2_ParamLimits

0x716d,	// (0x0001685f) cl_header_name_pane_t2

0x71af,	// (0x000168a1) cl_header_name_pane_t3_ParamLimits

0x71af,	// (0x000168a1) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0001f217) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0001f217) cl_header_name_pane_t

0x26f1,	// (0x00011de3) navi_pane_mv_g2_ParamLimits

0xd09b,	// (0x0001c78d) field_vitu2_entry_pane_g1_ParamLimits

0xd0a7,	// (0x0001c799) field_vitu2_entry_pane_g2_ParamLimits

0xd0b3,	// (0x0001c7a5) field_vitu2_entry_pane_g3_ParamLimits

0xd0b3,	// (0x0001c7a5) field_vitu2_entry_pane_g3

0xf91b,	// (0x0001f00d) field_vitu2_entry_pane_g_ParamLimits

0x5eb1,	// (0x000155a3) cell_vitu2_itu_pane_g1_ParamLimits

0x5ec1,	// (0x000155b3) cell_vitu2_itu_pane_g2_ParamLimits

0x5ec1,	// (0x000155b3) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0001f019) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0001f019) cell_vitu2_itu_pane_g

0x9610,	// (0x00018d02) bg_vkb2_func_pane_cp05_ParamLimits

0x9610,	// (0x00018d02) bg_vkb2_func_pane_cp05

0x9610,	// (0x00018d02) bg_vkb2_func_pane_cp03

0x9610,	// (0x00018d02) bg_vkb2_func_pane_cp04

0x9610,	// (0x00018d02) bg_vkb2_func_pane_cp10_ParamLimits

0x9610,	// (0x00018d02) bg_vkb2_func_pane_cp10

0x6d13,	// (0x00016405) bg_vkb2_func_pane_cp08

0x6cf9,	// (0x000163eb) bg_vkb2_func_pane_cp06

0x6d07,	// (0x000163f9) bg_vkb2_func_pane_cp07

0xd80c,	// (0x0001cefe) bg_vkb2_func_pane_cp11_ParamLimits

0xd80c,	// (0x0001cefe) bg_vkb2_func_pane_cp11

0xd821,	// (0x0001cf13) bg_vkb2_func_pane_cp12_ParamLimits

0xd821,	// (0x0001cf13) bg_vkb2_func_pane_cp12

0x95af,	// (0x00018ca1) bg_vkb2_func_pane_cp09

0xd0f0,	// (0x0001c7e2) bg_vkb2_func_pane_g1

0xa22a,	// (0x0001991c) bg_vkb2_func_pane_g2

0xd0f8,	// (0x0001c7ea) bg_vkb2_func_pane_g3

0xd100,	// (0x0001c7f2) bg_vkb2_func_pane_g4

0xd3dd,	// (0x0001cacf) bg_vkb2_func_pane_g5

0xd118,	// (0x0001c80a) bg_vkb2_func_pane_g6

0xd120,	// (0x0001c812) bg_vkb2_func_pane_g7

0xd110,	// (0x0001c802) bg_vkb2_func_pane_g8

0xa20a,	// (0x000198fc) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0001f21e) bg_vkb2_func_pane_g

0x7072,	// (0x00016764) blid2_tripm_pane_g6_ParamLimits

0x7072,	// (0x00016764) blid2_tripm_pane_g6

0xce34,	// (0x0001c526) mp4_progress_pane_g1

0x70e9,	// (0x000167db) blid2_tripm_values_pane_ParamLimits

0x70e9,	// (0x000167db) blid2_tripm_values_pane

0x71e0,	// (0x000168d2) blid2_tripm_values_pane_t1

0x71ee,	// (0x000168e0) blid2_tripm_values_pane_t2

0x71fc,	// (0x000168ee) blid2_tripm_values_pane_t3

0x720a,	// (0x000168fc) blid2_tripm_values_pane_t4

0x7218,	// (0x0001690a) blid2_tripm_values_pane_t5

0x7226,	// (0x00016918) blid2_tripm_values_pane_t6

0x7234,	// (0x00016926) blid2_tripm_values_pane_t7

0x7242,	// (0x00016934) blid2_tripm_values_pane_t8

0x7250,	// (0x00016942) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0001f231) blid2_tripm_values_pane_t

0x1117,	// (0x00010809) call_video_pane_t1_ParamLimits

0x1131,	// (0x00010823) call_video_pane_t2_ParamLimits

0xf273,	// (0x0001e965) call_video_pane_t_ParamLimits

0x2c75,	// (0x00012367) msg_header_pane_g1_ParamLimits

0xab3c,	// (0x0001a22e) msg_header_pane_g2_ParamLimits

0xab3c,	// (0x0001a22e) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0001eb7f) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0001eb7f) msg_header_pane_g

0x9d73,	// (0x00019465) main_clock2_pane_ParamLimits

0x4e06,	// (0x000144f8) grid_clock2_toolbar_pane_ParamLimits

0x4e06,	// (0x000144f8) grid_clock2_toolbar_pane

0x4e06,	// (0x000144f8) listscroll_clock2_pane_ParamLimits

0x4e06,	// (0x000144f8) listscroll_clock2_pane

0x4efd,	// (0x000145ef) main_clock2_pane_t3_ParamLimits

0x4efd,	// (0x000145ef) main_clock2_pane_t3

0x4f21,	// (0x00014613) main_clock2_pane_t4_ParamLimits

0x4f21,	// (0x00014613) main_clock2_pane_t4

0xd905,	// (0x0001cff7) cell_clock2_toolbar_pane

0xd90d,	// (0x0001cfff) cell_clock2_toolbar_pane_cp01

0xd90d,	// (0x0001cfff) cell_clock2_toolbar_pane_cp02

0xd915,	// (0x0001d007) cell_clock2_toolbar_pane_cp03

0xd91d,	// (0x0001d00f) list_clock2_pane

0xa866,	// (0x00019f58) scroll_pane_cp10

0xd925,	// (0x0001d017) list_single_clock2_pane_ParamLimits

0xd925,	// (0x0001d017) list_single_clock2_pane

0xa9a0,	// (0x0001a092) list_highlight_pane_cp08

0xd932,	// (0x0001d024) list_single_clock2_pane_t1

0xd940,	// (0x0001d032) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0001f244) list_single_clock2_pane_t

0x95af,	// (0x00018ca1) bg_button_pane_cp10

0xd94e,	// (0x0001d040) cell_clock2_toolbar_pane_g1

0x2cb4,	// (0x000123a6) aid_main_viewer_pane_g1_ParamLimits

0x2cb4,	// (0x000123a6) aid_main_viewer_pane_g1

0x2cc2,	// (0x000123b4) aid_main_viewer_pane_g2_ParamLimits

0x2cc2,	// (0x000123b4) aid_main_viewer_pane_g2

0x2cd0,	// (0x000123c2) aid_main_viewer_pane_g3_ParamLimits

0x2cd0,	// (0x000123c2) aid_main_viewer_pane_g3

0x2cdf,	// (0x000123d1) aid_main_viewer_pane_g4_ParamLimits

0x2cdf,	// (0x000123d1) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0001eb90) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0001eb90) aid_main_viewer_pane_g

0x3632,	// (0x00012d24) main_calc_pane_ParamLimits

0x3646,	// (0x00012d38) main_dialer2_pane_ParamLimits

0x95af,	// (0x00018ca1) main_cam6_pane

0x95af,	// (0x00018ca1) main_vid6_pane

0x4e12,	// (0x00014504) listscroll_gen_pane_cp06_ParamLimits

0x4e12,	// (0x00014504) listscroll_gen_pane_cp06

0x4f44,	// (0x00014636) main_clock2_pane_t5_ParamLimits

0x4f44,	// (0x00014636) main_clock2_pane_t5

0x4fa4,	// (0x00014696) aid_call2_pane_cp10_ParamLimits

0x4fb6,	// (0x000146a8) aid_call_pane_cp10_ParamLimits

0xa8d5,	// (0x00019fc7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa8d5,	// (0x00019fc7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4fc8,	// (0x000146ba) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4fc8,	// (0x000146ba) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa8d5,	// (0x00019fc7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0001eec6) popup_clock_analogue_window_cp10_g_ParamLimits

0x4fde,	// (0x000146d0) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5671,	// (0x00014d63) cell_dialer2_keypad_pane_g2_ParamLimits

0x5671,	// (0x00014d63) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0001efac) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0001efac) cell_dialer2_keypad_pane_g

0x568d,	// (0x00014d7f) cell_dialer2_keypad_pane_t1

0x634f,	// (0x00015a41) main_cset_text2_pane_ParamLimits

0x634f,	// (0x00015a41) main_cset_text2_pane

0xd63c,	// (0x0001cd2e) area_vitu2_query_pane_g1_ParamLimits

0x6c98,	// (0x0001638a) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0001f161) area_vitu2_query_pane_g_ParamLimits

0xd6c0,	// (0x0001cdb2) area_vitu2_query_pane_t7_ParamLimits

0xd6c0,	// (0x0001cdb2) area_vitu2_query_pane_t7

0x6cf9,	// (0x000163eb) bg_button_pane_cp018_ParamLimits

0x6d07,	// (0x000163f9) bg_button_pane_cp021_ParamLimits

0x6d13,	// (0x00016405) bg_button_pane_cp022_ParamLimits

0x6d13,	// (0x00016405) bg_vkb2_func_pane_cp08_ParamLimits

0x6cf9,	// (0x000163eb) bg_vkb2_func_pane_cp06_ParamLimits

0x6d07,	// (0x000163f9) bg_vkb2_func_pane_cp07_ParamLimits

0x6d24,	// (0x00016416) input_focus_pane_cp09_ParamLimits

0xd956,	// (0x0001d048) cam6_autofocus_pane_ParamLimits

0xd956,	// (0x0001d048) cam6_autofocus_pane

0x725e,	// (0x00016950) cam6_image_uncrop_pane_ParamLimits

0x725e,	// (0x00016950) cam6_image_uncrop_pane

0x726d,	// (0x0001695f) cam6_indi_pane_ParamLimits

0x726d,	// (0x0001695f) cam6_indi_pane

0x7283,	// (0x00016975) cam6_mode_pane_ParamLimits

0x7283,	// (0x00016975) cam6_mode_pane

0x7295,	// (0x00016987) cam6_timer_pane_ParamLimits

0x7295,	// (0x00016987) cam6_timer_pane

0x72a1,	// (0x00016993) cam6_zoom_pane_ParamLimits

0x72a1,	// (0x00016993) cam6_zoom_pane

0x72af,	// (0x000169a1) cam6_mode_pane_g1_ParamLimits

0x72af,	// (0x000169a1) cam6_mode_pane_g1

0x72bf,	// (0x000169b1) cam6_mode_pane_g2_ParamLimits

0x72bf,	// (0x000169b1) cam6_mode_pane_g2

0x72cf,	// (0x000169c1) cam6_mode_pane_g3_ParamLimits

0x72cf,	// (0x000169c1) cam6_mode_pane_g3

0x72df,	// (0x000169d1) cam6_mode_pane_g4_ParamLimits

0x72df,	// (0x000169d1) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0001f249) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0001f249) cam6_mode_pane_g

0xd370,	// (0x0001ca62) bg_tb_trans_pane_cp08_ParamLimits

0xd370,	// (0x0001ca62) bg_tb_trans_pane_cp08

0xd964,	// (0x0001d056) cam6_battery_pane_ParamLimits

0xd964,	// (0x0001d056) cam6_battery_pane

0xd97a,	// (0x0001d06c) cam6_indi_pane_g1_ParamLimits

0xd97a,	// (0x0001d06c) cam6_indi_pane_g1

0xd98c,	// (0x0001d07e) cam6_indi_pane_g2_ParamLimits

0xd98c,	// (0x0001d07e) cam6_indi_pane_g2

0xd99e,	// (0x0001d090) cam6_indi_pane_g3_ParamLimits

0xd99e,	// (0x0001d090) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0001f252) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0001f252) cam6_indi_pane_g

0xd9b0,	// (0x0001d0a2) cam6_indi_pane_t1_ParamLimits

0xd9b0,	// (0x0001d0a2) cam6_indi_pane_t1

0x5c4e,	// (0x00015340) cam6_autofocus_pane_g1

0x5c56,	// (0x00015348) cam6_autofocus_pane_g2

0x5c5e,	// (0x00015350) cam6_autofocus_pane_g3

0x5c66,	// (0x00015358) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0001f259) cam6_autofocus_pane_g

0xd9d6,	// (0x0001d0c8) cam6_timer_pane_g1

0xd9de,	// (0x0001d0d0) cam6_timer_pane_t1

0xd9ec,	// (0x0001d0de) cam6_zoom_cont_pane

0xd9f4,	// (0x0001d0e6) cam6_zoom_pane_g1

0xd9fc,	// (0x0001d0ee) cam6_zoom_pane_g2

0x72ef,	// (0x000169e1) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0001f262) cam6_zoom_pane_g

0xc36d,	// (0x0001ba5f) cam6_battery_pane_g1

0xc36d,	// (0x0001ba5f) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0001edd3) cam6_battery_pane_g

0xda04,	// (0x0001d0f6) cam6_zoom_cont_pane_g1

0xda0d,	// (0x0001d0ff) cam6_zoom_cont_pane_g2

0xda16,	// (0x0001d108) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0001f269) cam6_zoom_cont_pane_g

0x730c,	// (0x000169fe) cam6_mode_pane_cp_ParamLimits

0x730c,	// (0x000169fe) cam6_mode_pane_cp

0x72a1,	// (0x00016993) cam6_zoom_pane_cp_ParamLimits

0x72a1,	// (0x00016993) cam6_zoom_pane_cp

0x731e,	// (0x00016a10) vid6_image_uncrop_cif_pane_ParamLimits

0x731e,	// (0x00016a10) vid6_image_uncrop_cif_pane

0x732e,	// (0x00016a20) vid6_image_uncrop_nhd_pane_ParamLimits

0x732e,	// (0x00016a20) vid6_image_uncrop_nhd_pane

0x725e,	// (0x00016950) vid6_image_uncrop_vga_pane_ParamLimits

0x725e,	// (0x00016950) vid6_image_uncrop_vga_pane

0x733d,	// (0x00016a2f) vid6_image_uncrop_wvga_pane_ParamLimits

0x733d,	// (0x00016a2f) vid6_image_uncrop_wvga_pane

0x734c,	// (0x00016a3e) vid6_indi_pane_ParamLimits

0x734c,	// (0x00016a3e) vid6_indi_pane

0xd370,	// (0x0001ca62) bg_tb_trans_pane_cp09_ParamLimits

0xd370,	// (0x0001ca62) bg_tb_trans_pane_cp09

0xda2e,	// (0x0001d120) cam6_battery_pane_cp_ParamLimits

0xda2e,	// (0x0001d120) cam6_battery_pane_cp

0xda3a,	// (0x0001d12c) vid6_indi_pane_g1_ParamLimits

0xda3a,	// (0x0001d12c) vid6_indi_pane_g1

0xda4c,	// (0x0001d13e) vid6_indi_pane_g2_ParamLimits

0xda4c,	// (0x0001d13e) vid6_indi_pane_g2

0xda5e,	// (0x0001d150) vid6_indi_pane_g3_ParamLimits

0xda5e,	// (0x0001d150) vid6_indi_pane_g3

0xda75,	// (0x0001d167) vid6_indi_pane_g4_ParamLimits

0xda75,	// (0x0001d167) vid6_indi_pane_g4

0xda8c,	// (0x0001d17e) vid6_indi_pane_g5_ParamLimits

0xda8c,	// (0x0001d17e) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0001f270) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0001f270) vid6_indi_pane_g

0xdaa6,	// (0x0001d198) vid6_indi_pane_t1_ParamLimits

0xdaa6,	// (0x0001d198) vid6_indi_pane_t1

0xdabc,	// (0x0001d1ae) vid6_indi_pane_t2_ParamLimits

0xdabc,	// (0x0001d1ae) vid6_indi_pane_t2

0xdae4,	// (0x0001d1d6) vid6_indi_pane_t3_ParamLimits

0xdae4,	// (0x0001d1d6) vid6_indi_pane_t3

0xdb0c,	// (0x0001d1fe) vid6_indi_pane_t4_ParamLimits

0xdb0c,	// (0x0001d1fe) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0001f27b) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0001f27b) vid6_indi_pane_t

0xdb30,	// (0x0001d222) wait_bar_pane_cp08

0x7364,	// (0x00016a56) main_cset_text2_pane_t1_ParamLimits

0x7364,	// (0x00016a56) main_cset_text2_pane_t1

0x72f7,	// (0x000169e9) listscroll_gen_pane_cp06_t1_ParamLimits

0x72f7,	// (0x000169e9) listscroll_gen_pane_cp06_t1

0x95af,	// (0x00018ca1) main_cam6_set_pane

0xc59d,	// (0x0001bc8f) bg_tb_trans_pane_cp06_ParamLimits

0xcfb9,	// (0x0001c6ab) cam4_indicators_pane_g1_ParamLimits

0xcfca,	// (0x0001c6bc) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0001efe9) cam4_indicators_pane_g_ParamLimits

0xcfe2,	// (0x0001c6d4) cam4_indicators_pane_t1_ParamLimits

0x9610,	// (0x00018d02) bg_tb_trans_pane_cp07_ParamLimits

0xd010,	// (0x0001c702) vid4_indicators_pane_g1_ParamLimits

0xd026,	// (0x0001c718) vid4_indicators_pane_g2_ParamLimits

0xd03a,	// (0x0001c72c) vid4_indicators_pane_g3_ParamLimits

0xd04d,	// (0x0001c73f) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0001effb) vid4_indicators_pane_g_ParamLimits

0xd06b,	// (0x0001c75d) vid4_indicators_pane_t1_ParamLimits

0x6e65,	// (0x00016557) vid4_progress_pane_g1_ParamLimits

0x6e77,	// (0x00016569) vid4_progress_pane_g2_ParamLimits

0xabc2,	// (0x0001a2b4) vid4_progress_pane_g3_ParamLimits

0xd73d,	// (0x0001ce2f) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0001f1ac) vid4_progress_pane_g_ParamLimits

0xd75b,	// (0x0001ce4d) vid4_progress_pane_t1_ParamLimits

0xd770,	// (0x0001ce62) vid4_progress_pane_t2_ParamLimits

0xd786,	// (0x0001ce78) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0001f1b7) vid4_progress_pane_t_ParamLimits

0xd79b,	// (0x0001ce8d) wait_bar_pane_cp07_ParamLimits

0x7382,	// (0x00016a74) main_cam6_set_pane_g2_ParamLimits

0x7382,	// (0x00016a74) main_cam6_set_pane_g2

0x73a8,	// (0x00016a9a) main_cset6_listscroll_pane_ParamLimits

0x73a8,	// (0x00016a9a) main_cset6_listscroll_pane

0x73c6,	// (0x00016ab8) main_cset6_slider_pane_ParamLimits

0x73c6,	// (0x00016ab8) main_cset6_slider_pane

0x73dc,	// (0x00016ace) main_cset6_text2_pane_ParamLimits

0x73dc,	// (0x00016ace) main_cset6_text2_pane

0xdb3f,	// (0x0001d231) main_cset6_text_pane

0xdb47,	// (0x0001d239) main_cset_list_pane_copy1_ParamLimits

0xdb47,	// (0x0001d239) main_cset_list_pane_copy1

0xdb57,	// (0x0001d249) scroll_pane_cp028_copy1

0x21dc,	// (0x000118ce) cset_list_set_pane_copy1

0x73ea,	// (0x00016adc) aid_position_infowindow_above_copy1

0x73f2,	// (0x00016ae4) aid_position_infowindow_below_copy1

0x73fa,	// (0x00016aec) cset_list_set_pane_g1_copy1

0x7402,	// (0x00016af4) cset_list_set_pane_g3_copy1_ParamLimits

0x7402,	// (0x00016af4) cset_list_set_pane_g3_copy1

0x7411,	// (0x00016b03) cset_list_set_pane_t1_copy1_ParamLimits

0x7411,	// (0x00016b03) cset_list_set_pane_t1_copy1

0x9610,	// (0x00018d02) list_highlight_pane_cp021_copy1_ParamLimits

0x9610,	// (0x00018d02) list_highlight_pane_cp021_copy1

0xdb60,	// (0x0001d252) cset6_slider_pane_ParamLimits

0xdb60,	// (0x0001d252) cset6_slider_pane

0xdb8c,	// (0x0001d27e) main_cset6_slider_pane_g1_ParamLimits

0xdb8c,	// (0x0001d27e) main_cset6_slider_pane_g1

0x7426,	// (0x00016b18) main_cset6_slider_pane_g2_ParamLimits

0x7426,	// (0x00016b18) main_cset6_slider_pane_g2

0xdbb4,	// (0x0001d2a6) main_cset6_slider_pane_g3_ParamLimits

0xdbb4,	// (0x0001d2a6) main_cset6_slider_pane_g3

0x744e,	// (0x00016b40) main_cset6_slider_pane_g4_ParamLimits

0x744e,	// (0x00016b40) main_cset6_slider_pane_g4

0x745a,	// (0x00016b4c) main_cset6_slider_pane_g5_ParamLimits

0x745a,	// (0x00016b4c) main_cset6_slider_pane_g5

0xd223,	// (0x0001c915) main_cset6_slider_pane_g7_ParamLimits

0xd223,	// (0x0001c915) main_cset6_slider_pane_g7

0xd22f,	// (0x0001c921) main_cset6_slider_pane_g8_ParamLimits

0xd22f,	// (0x0001c921) main_cset6_slider_pane_g8

0x63fe,	// (0x00015af0) main_cset6_slider_pane_g9_ParamLimits

0x63fe,	// (0x00015af0) main_cset6_slider_pane_g9

0x640a,	// (0x00015afc) main_cset6_slider_pane_g10_ParamLimits

0x640a,	// (0x00015afc) main_cset6_slider_pane_g10

0x6416,	// (0x00015b08) main_cset6_slider_pane_g11_ParamLimits

0x6416,	// (0x00015b08) main_cset6_slider_pane_g11

0x6422,	// (0x00015b14) main_cset6_slider_pane_g12_ParamLimits

0x6422,	// (0x00015b14) main_cset6_slider_pane_g12

0x642e,	// (0x00015b20) main_cset6_slider_pane_g13_ParamLimits

0x642e,	// (0x00015b20) main_cset6_slider_pane_g13

0x643a,	// (0x00015b2c) main_cset6_slider_pane_g14_ParamLimits

0x643a,	// (0x00015b2c) main_cset6_slider_pane_g14

0x7468,	// (0x00016b5a) main_cset6_slider_pane_g15_ParamLimits

0x7468,	// (0x00016b5a) main_cset6_slider_pane_g15

0x645e,	// (0x00015b50) main_cset6_slider_pane_g16_ParamLimits

0x645e,	// (0x00015b50) main_cset6_slider_pane_g16

0x646c,	// (0x00015b5e) main_cset6_slider_pane_g17_ParamLimits

0x646c,	// (0x00015b5e) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0001f284) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0001f284) main_cset6_slider_pane_g

0xdbc0,	// (0x0001d2b2) main_cset6_slider_pane_t1_ParamLimits

0xdbc0,	// (0x0001d2b2) main_cset6_slider_pane_t1

0x7498,	// (0x00016b8a) main_cset6_slider_pane_t2_ParamLimits

0x7498,	// (0x00016b8a) main_cset6_slider_pane_t2

0x74c3,	// (0x00016bb5) main_cset6_slider_pane_t3_ParamLimits

0x74c3,	// (0x00016bb5) main_cset6_slider_pane_t3

0x74ee,	// (0x00016be0) main_cset6_slider_pane_t4_ParamLimits

0x74ee,	// (0x00016be0) main_cset6_slider_pane_t4

0x7519,	// (0x00016c0b) main_cset6_slider_pane_t5_ParamLimits

0x7519,	// (0x00016c0b) main_cset6_slider_pane_t5

0xdc01,	// (0x0001d2f3) main_cset6_slider_pane_t7_ParamLimits

0xdc01,	// (0x0001d2f3) main_cset6_slider_pane_t7

0x7546,	// (0x00016c38) main_cset6_slider_pane_t8_ParamLimits

0x7546,	// (0x00016c38) main_cset6_slider_pane_t8

0x756a,	// (0x00016c5c) main_cset6_slider_pane_t9_ParamLimits

0x756a,	// (0x00016c5c) main_cset6_slider_pane_t9

0x758e,	// (0x00016c80) main_cset6_slider_pane_t10_ParamLimits

0x758e,	// (0x00016c80) main_cset6_slider_pane_t10

0x75b2,	// (0x00016ca4) main_cset6_slider_pane_t11_ParamLimits

0x75b2,	// (0x00016ca4) main_cset6_slider_pane_t11

0xdc37,	// (0x0001d329) main_cset6_slider_pane_t14_ParamLimits

0xdc37,	// (0x0001d329) main_cset6_slider_pane_t14

0xdc70,	// (0x0001d362) main_cset6_slider_pane_t15_ParamLimits

0xdc70,	// (0x0001d362) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0001f2a9) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0001f2a9) main_cset6_slider_pane_t

0xd307,	// (0x0001c9f9) cset_slider_pane_g1_copy1

0xd310,	// (0x0001ca02) cset_slider_pane_g2_copy1

0xd319,	// (0x0001ca0b) cset_slider_pane_g3_copy1

0x95af,	// (0x00018ca1) bg_popup_sub_pane_cp011_copy1

0xdca9,	// (0x0001d39b) main_cset_text_pane_g1_copy1

0xd458,	// (0x0001cb4a) main_cset_text_pane_t1_copy1

0xd466,	// (0x0001cb58) main_cset_text_pane_t2_copy1

0xd474,	// (0x0001cb66) main_cset_text_pane_t3_copy1

0xd482,	// (0x0001cb74) main_cset_text_pane_t4_copy1

0xd490,	// (0x0001cb82) main_cset_text_pane_t5_copy1

0xdcb1,	// (0x0001d3a3) main_cset_text_pane_t6_copy1

0xdcbf,	// (0x0001d3b1) main_cset_text_pane_t7_copy1

0x7364,	// (0x00016a56) main_cset_text2_pane_t1_copy1

0x9610,	// (0x00018d02) main_ncimui_pane

0x38d4,	// (0x00012fc6) popup_query_ncimui_window_ParamLimits

0x38d4,	// (0x00012fc6) popup_query_ncimui_window

0xc602,	// (0x0001bcf4) field_cale_ev2_pane_g4_ParamLimits

0xc602,	// (0x0001bcf4) field_cale_ev2_pane_g4

0x5543,	// (0x00014c35) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5543,	// (0x00014c35) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0001ef87) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0001ef87) cell_video_dialer_keypad_pane_g

0x555b,	// (0x00014c4d) cell_video_dialer_keypad_pane_t1

0x95af,	// (0x00018ca1) bg_popup_window_pane_cp012

0xa752,	// (0x00019e44) heading_pane_cp06

0xdceb,	// (0x0001d3dd) ncim_query_content_pane

0x95af,	// (0x00018ca1) bg_popup_heading_pane_cp01

0xdcf3,	// (0x0001d3e5) ncim_heading_pane_t1

0xdd01,	// (0x0001d3f3) ncim_indicator_popup_pane

0xdd13,	// (0x0001d405) ncim_query_button_pane

0xdd29,	// (0x0001d41b) ncim_query_content_pane_t1

0xdd3b,	// (0x0001d42d) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0001f2ed) ncim_query_content_pane_t

0xdd75,	// (0x0001d467) ncim_query_list_pane

0xdd87,	// (0x0001d479) ncim_query_popup_pane

0xdd01,	// (0x0001d3f3) ncim_indicator_popup_pane_ParamLimits

0x77cd,	// (0x00016ebf) ncim_query_content_pane_g1_ParamLimits

0x77cd,	// (0x00016ebf) ncim_query_content_pane_g1

0xdd29,	// (0x0001d41b) ncim_query_content_pane_t1_ParamLimits

0xdd3b,	// (0x0001d42d) ncim_query_content_pane_t2_ParamLimits

0x77d9,	// (0x00016ecb) ncim_query_content_pane_t3_ParamLimits

0x77d9,	// (0x00016ecb) ncim_query_content_pane_t3

0x7801,	// (0x00016ef3) ncim_query_content_pane_t4_ParamLimits

0x7801,	// (0x00016ef3) ncim_query_content_pane_t4

0x7829,	// (0x00016f1b) ncim_query_content_pane_t5_ParamLimits

0x7829,	// (0x00016f1b) ncim_query_content_pane_t5

0xdd4d,	// (0x0001d43f) ncim_query_content_pane_t6_ParamLimits

0xdd4d,	// (0x0001d43f) ncim_query_content_pane_t6

0xfbfb,	// (0x0001f2ed) ncim_query_content_pane_t_ParamLimits

0xdd75,	// (0x0001d467) ncim_query_list_pane_ParamLimits

0xdd87,	// (0x0001d479) ncim_query_popup_pane_ParamLimits

0xdd9b,	// (0x0001d48d) wait_bar_pane_cp04

0x95af,	// (0x00018ca1) input_focus_pane_cp011

0xdda3,	// (0x0001d495) ncim_query_popup_pane_t1

0xddb1,	// (0x0001d4a3) ncim_list_query_list_pane_ParamLimits

0xddb1,	// (0x0001d4a3) ncim_list_query_list_pane

0x95af,	// (0x00018ca1) bg_button_pane_cp027

0xddc4,	// (0x0001d4b6) ncim_query_button_pane_g1

0x95af,	// (0x00018ca1) list_highlight_pane_cp012

0xddce,	// (0x0001d4c0) ncim_list_query_list_pane_g1

0xddd6,	// (0x0001d4c8) ncim_list_query_list_pane_t1

0xcfd6,	// (0x0001c6c8) cam4_indicators_pane_g3_ParamLimits

0xcfd6,	// (0x0001c6c8) cam4_indicators_pane_g3

0xd059,	// (0x0001c74b) vid4_indicators_pane_g5_ParamLimits

0xd059,	// (0x0001c74b) vid4_indicators_pane_g5

0xd74c,	// (0x0001ce3e) vid4_progress_pane_g5_ParamLimits

0xd74c,	// (0x0001ce3e) vid4_progress_pane_g5

0x76bb,	// (0x00016dad) main_ncimui_pane_g1

0x7721,	// (0x00016e13) ncimui_group_query_pane_ParamLimits

0x7721,	// (0x00016e13) ncimui_group_query_pane

0x7769,	// (0x00016e5b) ncimui_list_pane_ParamLimits

0x7769,	// (0x00016e5b) ncimui_list_pane

0x7790,	// (0x00016e82) ncimui_text_pane_ParamLimits

0x7790,	// (0x00016e82) ncimui_text_pane

0x7851,	// (0x00016f43) ncimui_text_pane_t1_ParamLimits

0x7851,	// (0x00016f43) ncimui_text_pane_t1

0xdde4,	// (0x0001d4d6) ncimui_list_single_graphic_pane_ParamLimits

0xdde4,	// (0x0001d4d6) ncimui_list_single_graphic_pane

0x786f,	// (0x00016f61) ncimui_query_pane_ParamLimits

0x786f,	// (0x00016f61) ncimui_query_pane

0x95af,	// (0x00018ca1) list_highlight_pane_cp013

0xddf4,	// (0x0001d4e6) ncim_list_query_list_pane_t1_copy1

0xddce,	// (0x0001d4c0) ncim_list_single_graphic_pane_g1

0xde02,	// (0x0001d4f4) ncim_query_button_pane_cp01

0xde0e,	// (0x0001d500) ncim_query_entry_pane_ParamLimits

0xde0e,	// (0x0001d500) ncim_query_entry_pane

0xde21,	// (0x0001d513) ncimui_query_pane_g1

0xde2d,	// (0x0001d51f) ncimui_query_pane_t1_ParamLimits

0xde2d,	// (0x0001d51f) ncimui_query_pane_t1

0x9610,	// (0x00018d02) input_focus_pane_cp012

0xde46,	// (0x0001d538) ncim_query_entry_pane_t1

0x9d73,	// (0x00019465) main_im_pane_ParamLimits

0x9610,	// (0x00018d02) main_mobtv_pane_ParamLimits

0x9610,	// (0x00018d02) main_mobtv_pane

0x7480,	// (0x00016b72) main_cset6_slider_pane_g18_ParamLimits

0x7480,	// (0x00016b72) main_cset6_slider_pane_g18

0x748c,	// (0x00016b7e) main_cset6_slider_pane_g19_ParamLimits

0x748c,	// (0x00016b7e) main_cset6_slider_pane_g19

0xd37e,	// (0x0001ca70) bg_main_mobtv_pane_ParamLimits

0xd37e,	// (0x0001ca70) bg_main_mobtv_pane

0x7882,	// (0x00016f74) main_mobtv_info_pane

0x788d,	// (0x00016f7f) main_mobtv_loading_pane_ParamLimits

0x788d,	// (0x00016f7f) main_mobtv_loading_pane

0xde58,	// (0x0001d54a) main_mobtv_pg_channel_list_pane

0xde62,	// (0x0001d554) main_mobtv_pg_hdr_pane

0x789a,	// (0x00016f8c) main_mobtv_programe_curr_pane_ParamLimits

0x789a,	// (0x00016f8c) main_mobtv_programe_curr_pane

0x78a7,	// (0x00016f99) main_mobtv_programe_next_pane_ParamLimits

0x78a7,	// (0x00016f99) main_mobtv_programe_next_pane

0xde6b,	// (0x0001d55d) popup_mobtv_noti_window

0xc36d,	// (0x0001ba5f) main_tv_pg_hdr_pane_g1

0xde75,	// (0x0001d567) main_tv_pg_hdr_pane_g2

0xde7d,	// (0x0001d56f) main_tv_pg_hdr_pane_g3

0xde85,	// (0x0001d577) main_tv_pg_hdr_pane_g4

0xde8d,	// (0x0001d57f) main_tv_pg_hdr_pane_g5

0xde97,	// (0x0001d589) main_tv_pg_hdr_pane_g6

0xdea1,	// (0x0001d593) main_tv_pg_hdr_pane_g7

0xdeab,	// (0x0001d59d) main_tv_pg_hdr_pane_g8

0xdeb5,	// (0x0001d5a7) main_tv_pg_hdr_pane_g9

0xdebf,	// (0x0001d5b1) main_tv_pg_hdr_pane_g10

0xdec9,	// (0x0001d5bb) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0001f2fa) main_tv_pg_hdr_pane_g

0xded3,	// (0x0001d5c5) main_tv_pg_hdr_pane_t1

0xdee1,	// (0x0001d5d3) main_tv_pg_hdr_pane_t2

0xdeef,	// (0x0001d5e1) main_tv_pg_hdr_pane_t3

0xdeff,	// (0x0001d5f1) main_tv_pg_hdr_pane_t4

0xdf0f,	// (0x0001d601) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0001f311) main_tv_pg_hdr_pane_t

0xdf1f,	// (0x0001d611) single_mobtv_pg_channel_pane_ParamLimits

0xdf1f,	// (0x0001d611) single_mobtv_pg_channel_pane

0xdf31,	// (0x0001d623) single_mobtv_pg_channel_table_pane

0xdf3a,	// (0x0001d62c) single_mobtv_pg_channel_thumb_pane

0xdf43,	// (0x0001d635) single_tv_pg_channel_pane_g1

0xdf4c,	// (0x0001d63e) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0001f31c) single_tv_pg_channel_pane_g

0xc59d,	// (0x0001bc8f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc59d,	// (0x0001bc8f) bg_single_mobtv_pg_channel_thumb_pane

0xdf55,	// (0x0001d647) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf55,	// (0x0001d647) single_mobtv_pg_channel_thumb_pane_g1

0xdf63,	// (0x0001d655) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf63,	// (0x0001d655) single_mobtv_pg_channel_thumb_pane_g2

0xdf6f,	// (0x0001d661) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf6f,	// (0x0001d661) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0001f321) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0001f321) single_mobtv_pg_channel_thumb_pane_g

0xdf7b,	// (0x0001d66d) single_mobtv_pg_channel_thumb_pane_t1

0xdf89,	// (0x0001d67b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0001f328) single_mobtv_pg_channel_thumb_pane_t

0xc36d,	// (0x0001ba5f) bg_single_mobtv_pg_channel_table_pane_g1

0xc36d,	// (0x0001ba5f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0001edd3) bg_single_mobtv_pg_channel_table_pane_g

0xdf97,	// (0x0001d689) single_mobtv_pg_channel_table_pane_t1

0xdfa5,	// (0x0001d697) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0001f32d) single_mobtv_pg_channel_table_pane_t

0x78bc,	// (0x00016fae) main_mobtv_info_pane_g1_ParamLimits

0x78bc,	// (0x00016fae) main_mobtv_info_pane_g1

0x78da,	// (0x00016fcc) main_mobtv_info_pane_t1_ParamLimits

0x78da,	// (0x00016fcc) main_mobtv_info_pane_t1

0x7952,	// (0x00017044) main_mobtv_info_pane_t2_ParamLimits

0x7952,	// (0x00017044) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0001f337) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0001f337) main_mobtv_info_pane_t

0x79e1,	// (0x000170d3) wait_bar_pane_cp05

0x79f3,	// (0x000170e5) main_mobtv_loading_pane_g1_ParamLimits

0x79f3,	// (0x000170e5) main_mobtv_loading_pane_g1

0x7a04,	// (0x000170f6) main_mobtv_loading_pane_g2_ParamLimits

0x7a04,	// (0x000170f6) main_mobtv_loading_pane_g2

0x7a10,	// (0x00017102) main_mobtv_loading_pane_g3_ParamLimits

0x7a10,	// (0x00017102) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0001f33e) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0001f33e) main_mobtv_loading_pane_g

0xdfb3,	// (0x0001d6a5) main_mobtv_loading_pane_t1_ParamLimits

0xdfb3,	// (0x0001d6a5) main_mobtv_loading_pane_t1

0xdfcb,	// (0x0001d6bd) main_mobtv_loading_pane_t2_ParamLimits

0xdfcb,	// (0x0001d6bd) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0001f345) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0001f345) main_mobtv_loading_pane_t

0x7a23,	// (0x00017115) wait_bar_pane_cp06_ParamLimits

0x7a23,	// (0x00017115) wait_bar_pane_cp06

0xdfef,	// (0x0001d6e1) main_mobtv_programe_curr_pane_t1

0xdffd,	// (0x0001d6ef) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0001f34a) main_mobtv_programe_curr_pane_t

0xe00b,	// (0x0001d6fd) main_mobtv_programe_next_pane_t1

0xe019,	// (0x0001d70b) main_mobtv_programe_next_pane_t2

0xe027,	// (0x0001d719) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0001f34f) main_mobtv_programe_next_pane_t

0x95af,	// (0x00018ca1) bg_popup_mobtv_noti_window_pane

0xe035,	// (0x0001d727) popup_mobtv_noti_window_g1

0xe03d,	// (0x0001d72f) popup_mobtv_noti_window_t1

0xe04b,	// (0x0001d73d) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0001f356) popup_mobtv_noti_window_t

0xc36d,	// (0x0001ba5f) bg_popup_mobtv_noti_window_pane_g1

0x95af,	// (0x00018ca1) sc_clock_pane

0x95af,	// (0x00018ca1) main_fs_bigclock_pane

0x70d3,	// (0x000167c5) blid2_tripm_pane_t4_ParamLimits

0x70d3,	// (0x000167c5) blid2_tripm_pane_t4

0x7a32,	// (0x00017124) sc_clock_pane_g1_ParamLimits

0x7a32,	// (0x00017124) sc_clock_pane_g1

0x7a44,	// (0x00017136) sc_clock_pane_t1_ParamLimits

0x7a44,	// (0x00017136) sc_clock_pane_t1

0x7a68,	// (0x0001715a) sc_clock_pane_t2_ParamLimits

0x7a68,	// (0x0001715a) sc_clock_pane_t2

0x7a80,	// (0x00017172) sc_clock_pane_t3_ParamLimits

0x7a80,	// (0x00017172) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0001f35b) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0001f35b) sc_clock_pane_t

0x8a89,	// (0x0001817b) main_fs_bigclock_indicator_pane_ParamLimits

0x8a89,	// (0x0001817b) main_fs_bigclock_indicator_pane

0xc56d,	// (0x0001bc5f) main_fs_bigclock_pane_g1_ParamLimits

0xc56d,	// (0x0001bc5f) main_fs_bigclock_pane_g1

0x8a95,	// (0x00018187) main_fs_bigclock_pane_t1_ParamLimits

0x8a95,	// (0x00018187) main_fs_bigclock_pane_t1

0x8aa7,	// (0x00018199) main_fs_bigclock_pane_t2_ParamLimits

0x8aa7,	// (0x00018199) main_fs_bigclock_pane_t2

0x8abb,	// (0x000181ad) main_fs_bigclock_pane_t3_ParamLimits

0x8abb,	// (0x000181ad) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001f560) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001f560) main_fs_bigclock_pane_t

0xec22,	// (0x0001e314) main_fs_bigclock_indicator_pane_g1

0xdd1b,	// (0x0001d40d) ncim_query_content_pane_g2_ParamLimits

0xdd1b,	// (0x0001d40d) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0001f2e8) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0001f2e8) ncim_query_content_pane_g

0x7a97,	// (0x00017189) sc_clock_pane_t4_ParamLimits

0x7a97,	// (0x00017189) sc_clock_pane_t4

0x9610,	// (0x00018d02) main_radioblah_pane

0xcf17,	// (0x0001c609) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf17,	// (0x0001c609) cell_call4_button_pane_t1_copy1

0x76d3,	// (0x00016dc5) main_ncimui_pane_t1_ParamLimits

0x76d3,	// (0x00016dc5) main_ncimui_pane_t1

0x76ed,	// (0x00016ddf) main_ncimui_pane_t2_ParamLimits

0x76ed,	// (0x00016ddf) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0001f2e1) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0001f2e1) main_ncimui_pane_t

0xe197,	// (0x0001d889) main_radioblah_anim_pane_ParamLimits

0xe197,	// (0x0001d889) main_radioblah_anim_pane

0xe1a8,	// (0x0001d89a) main_radioblah_info_pane_ParamLimits

0xe1a8,	// (0x0001d89a) main_radioblah_info_pane

0xe1bc,	// (0x0001d8ae) main_radioblah_pane_t1_ParamLimits

0xe1bc,	// (0x0001d8ae) main_radioblah_pane_t1

0xe1d8,	// (0x0001d8ca) main_radioblah_pane_t2_ParamLimits

0xe1d8,	// (0x0001d8ca) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0001f37c) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0001f37c) main_radioblah_pane_t

0x7b47,	// (0x00017239) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7b47,	// (0x00017239) main_radioblah_rocker_ctrl_pane

0xe220,	// (0x0001d912) main_radioblah_info_pane_t1_ParamLimits

0xe220,	// (0x0001d912) main_radioblah_info_pane_t1

0x7b9f,	// (0x00017291) main_radioblah_info_pane_t2_ParamLimits

0x7b9f,	// (0x00017291) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0001f385) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0001f385) main_radioblah_info_pane_t

0xc36d,	// (0x0001ba5f) main_radioblah_rocker_ctrl_pane_g1

0x7c4f,	// (0x00017341) main_radioblah_rocker_ctrl_pane_g2

0x7c57,	// (0x00017349) main_radioblah_rocker_ctrl_pane_g3

0x7c5f,	// (0x00017351) main_radioblah_rocker_ctrl_pane_g4

0x7c67,	// (0x00017359) main_radioblah_rocker_ctrl_pane_g5

0x7c6f,	// (0x00017361) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0001f38e) main_radioblah_rocker_ctrl_pane_g

0x7364,	// (0x00016a56) main_cset_text2_pane_t1_copy1_ParamLimits

0xcfa7,	// (0x0001c699) cam4_image_uncrop_qvga_pane

0xcffc,	// (0x0001c6ee) vid4_image_uncrop_qcif_pane

0xd956,	// (0x0001d048) cam6_image_uncrop_qvga_pane_ParamLimits

0xd956,	// (0x0001d048) cam6_image_uncrop_qvga_pane

0xda1e,	// (0x0001d110) vid6_image_uncrop_qcif_pane_ParamLimits

0xda1e,	// (0x0001d110) vid6_image_uncrop_qcif_pane

0x95af,	// (0x00018ca1) bg_popup_preview_window_pane_cp03

0xdccd,	// (0x0001d3bf) list_cset_text2_pane

0xdcd5,	// (0x0001d3c7) main_cset6_text2_pane_g1

0xdcdd,	// (0x0001d3cf) main_cset6_text2_pane_t1

0x7c77,	// (0x00017369) list_cset_text2_pane_t1_ParamLimits

0x7c77,	// (0x00017369) list_cset_text2_pane_t1

0x9610,	// (0x00018d02) main_radioblah_pane_ParamLimits

0x79cd,	// (0x000170bf) main_mobtv_info_pane_t3_ParamLimits

0x79cd,	// (0x000170bf) main_mobtv_info_pane_t3

0x7b35,	// (0x00017227) main_radioblah_pane_g1

0x7b6f,	// (0x00017261) main_radioblah_info_pane_g1

0x7bf4,	// (0x000172e6) main_radioblah_info_pane_t3_ParamLimits

0x7bf4,	// (0x000172e6) main_radioblah_info_pane_t3

0x20fc,	// (0x000117ee) highlight_cell_cale_month_pane_ParamLimits

0x20fc,	// (0x000117ee) highlight_cell_cale_month_pane

0x95af,	// (0x00018ca1) main_phob_fisheye_pane

0xc685,	// (0x0001bd77) scroll_pane_cp0031_ParamLimits

0xc685,	// (0x0001bd77) scroll_pane_cp0031

0xdb30,	// (0x0001d222) wait_bar_pane_cp08_ParamLimits

0x21dc,	// (0x000118ce) cset_list_set_pane_copy1_ParamLimits

0xe25a,	// (0x0001d94c) highlight_cell_cale_month_pane_g1

0x7c90,	// (0x00017382) highlight_cell_cale_month_pane_t1

0xd72c,	// (0x0001ce1e) list_gen_pane_cp01

0xd20e,	// (0x0001c900) scroll_pane_01

0x7c9e,	// (0x00017390) list_single_double_fisheye_pane

0x7ca7,	// (0x00017399) list_double_fisheye_pane_g1_ParamLimits

0x7ca7,	// (0x00017399) list_double_fisheye_pane_g1

0x7cb3,	// (0x000173a5) list_double_fisheye_pane_g2_ParamLimits

0x7cb3,	// (0x000173a5) list_double_fisheye_pane_g2

0x7cc7,	// (0x000173b9) list_double_fisheye_pane_g3_ParamLimits

0x7cc7,	// (0x000173b9) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0001f39b) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0001f39b) list_double_fisheye_pane_g

0x7cf0,	// (0x000173e2) list_double_fisheye_pane_t1_ParamLimits

0x7cf0,	// (0x000173e2) list_double_fisheye_pane_t1

0x7d0b,	// (0x000173fd) list_double_fisheye_pane_t2_ParamLimits

0x7d0b,	// (0x000173fd) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0001f3a6) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0001f3a6) list_double_fisheye_pane_t

0x95af,	// (0x00018ca1) main_call5_pane

0x7ac2,	// (0x000171b4) sc_swipe_pane_ParamLimits

0x7ac2,	// (0x000171b4) sc_swipe_pane

0x7d40,	// (0x00017432) call5_image_pane_ParamLimits

0x7d40,	// (0x00017432) call5_image_pane

0x7d5d,	// (0x0001744f) call5_swipe_1_pane_ParamLimits

0x7d5d,	// (0x0001744f) call5_swipe_1_pane

0x7d70,	// (0x00017462) call5_swipe_2_pane_ParamLimits

0x7d70,	// (0x00017462) call5_swipe_2_pane

0x7d9d,	// (0x0001748f) popup_call5_audio_first_window_ParamLimits

0x7d9d,	// (0x0001748f) popup_call5_audio_first_window

0xc59d,	// (0x0001bc8f) call5_swipe_1_pane_g1_ParamLimits

0xc59d,	// (0x0001bc8f) call5_swipe_1_pane_g1

0xe262,	// (0x0001d954) call5_swipe_1_pane_g2_ParamLimits

0xe262,	// (0x0001d954) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0001f3ab) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0001f3ab) call5_swipe_1_pane_g

0xe26e,	// (0x0001d960) call5_swipe_1_pane_t1_ParamLimits

0xe26e,	// (0x0001d960) call5_swipe_1_pane_t1

0xc59d,	// (0x0001bc8f) call5_swipe_2_pane_g1_ParamLimits

0xc59d,	// (0x0001bc8f) call5_swipe_2_pane_g1

0xe283,	// (0x0001d975) call5_swipe_2_pane_g2_ParamLimits

0xe283,	// (0x0001d975) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0001f3b0) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0001f3b0) call5_swipe_2_pane_g

0xe28f,	// (0x0001d981) call5_swipe_2_pane_t1_ParamLimits

0xe28f,	// (0x0001d981) call5_swipe_2_pane_t1

0xe2a4,	// (0x0001d996) sc_swipe_pane_g1_ParamLimits

0xe2a4,	// (0x0001d996) sc_swipe_pane_g1

0xe2b1,	// (0x0001d9a3) sc_swipe_pane_g2_ParamLimits

0xe2b1,	// (0x0001d9a3) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0001f3b5) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0001f3b5) sc_swipe_pane_g

0xe2bd,	// (0x0001d9af) sc_swipe_pane_t1_ParamLimits

0xe2bd,	// (0x0001d9af) sc_swipe_pane_t1

0x95af,	// (0x00018ca1) main_cmail_launcher_pane

0x7db2,	// (0x000174a4) aid_size_cell_cmail_l_ParamLimits

0x7db2,	// (0x000174a4) aid_size_cell_cmail_l

0x7dcc,	// (0x000174be) grid_cmail_l_pane_ParamLimits

0x7dcc,	// (0x000174be) grid_cmail_l_pane

0x7de7,	// (0x000174d9) cell_cmail_l_pane_ParamLimits

0x7de7,	// (0x000174d9) cell_cmail_l_pane

0x7e0f,	// (0x00017501) cell_cmail_l_pane_g1_ParamLimits

0x7e0f,	// (0x00017501) cell_cmail_l_pane_g1

0x7e1b,	// (0x0001750d) cell_cmail_l_pane_t1_ParamLimits

0x7e1b,	// (0x0001750d) cell_cmail_l_pane_t1

0xe2d2,	// (0x0001d9c4) cell_cmail_l_pane_t2_ParamLimits

0xe2d2,	// (0x0001d9c4) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0001f3ba) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0001f3ba) cell_cmail_l_pane_t

0x9610,	// (0x00018d02) grid_highlight_pane_cp018_ParamLimits

0x9610,	// (0x00018d02) grid_highlight_pane_cp018

0xfd7e,	// (0x0000f470) main2_pane_ParamLimits

0xfd7e,	// (0x0000f470) main2_pane

0x9e4c,	// (0x0001953e) popup_sp_fs_action_menu_bg_pane_g1

0x9e54,	// (0x00019546) popup_sp_fs_action_menu_bg_pane_g2

0x9e5c,	// (0x0001954e) popup_sp_fs_action_menu_bg_pane_g3

0x9e64,	// (0x00019556) popup_sp_fs_action_menu_bg_pane_g4

0x9e6c,	// (0x0001955e) popup_sp_fs_action_menu_bg_pane_g5

0x9e74,	// (0x00019566) popup_sp_fs_action_menu_bg_pane_g6

0x9e7c,	// (0x0001956e) popup_sp_fs_action_menu_bg_pane_g7

0x9e84,	// (0x00019576) popup_sp_fs_action_menu_bg_pane_g8

0x9e8c,	// (0x0001957e) popup_sp_fs_action_menu_bg_pane_g9

0x9e94,	// (0x00019586) popup_sp_fs_action_menu_bg_pane_g10

0x9e94,	// (0x00019586) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0001e87f) popup_sp_fs_action_menu_bg_pane_g

0xd3a7,	// (0x0001ca99) list_medium_line_x2_t3_g3_g1_ParamLimits

0xd3a7,	// (0x0001ca99) list_medium_line_x2_t3_g3_g1

0x0f6b,	// (0x0001065d) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0f6b,	// (0x0001065d) list_medium_line_x2_t3_g3_g2

0x0f77,	// (0x00010669) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0f77,	// (0x00010669) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0001e92f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0001e92f) list_medium_line_x2_t3_g3_g

0x0f83,	// (0x00010675) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0f83,	// (0x00010675) list_medium_line_x2_t3_g3_t1

0x0f98,	// (0x0001068a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0f98,	// (0x0001068a) list_medium_line_x2_t3_g3_t2

0x0fac,	// (0x0001069e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0fac,	// (0x0001069e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0001e936) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0001e936) list_medium_line_x2_t3_g3_t

0xd3a7,	// (0x0001ca99) list_medium_line_x2_t3_g2_g1_ParamLimits

0xd3a7,	// (0x0001ca99) list_medium_line_x2_t3_g2_g1

0x0f77,	// (0x00010669) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0f77,	// (0x00010669) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0001e93d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0001e93d) list_medium_line_x2_t3_g2_g

0x0fc1,	// (0x000106b3) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0fc1,	// (0x000106b3) list_medium_line_x2_t3_g2_t1

0x0fd7,	// (0x000106c9) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0fd7,	// (0x000106c9) list_medium_line_x2_t3_g2_t2

0x0fe9,	// (0x000106db) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0fe9,	// (0x000106db) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0001e942) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0001e942) list_medium_line_x2_t3_g2_t

0xd3a7,	// (0x0001ca99) list_medium_line_x2_t4_g4_g1_ParamLimits

0xd3a7,	// (0x0001ca99) list_medium_line_x2_t4_g4_g1

0x1007,	// (0x000106f9) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1007,	// (0x000106f9) list_medium_line_x2_t4_g4_g2

0x0f6b,	// (0x0001065d) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0f6b,	// (0x0001065d) list_medium_line_x2_t4_g4_g3

0x1013,	// (0x00010705) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1013,	// (0x00010705) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0001e949) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0001e949) list_medium_line_x2_t4_g4_g

0x101f,	// (0x00010711) list_medium_line_x2_t4_g4_t1_ParamLimits

0x101f,	// (0x00010711) list_medium_line_x2_t4_g4_t1

0x1036,	// (0x00010728) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1036,	// (0x00010728) list_medium_line_x2_t4_g4_t2

0x104b,	// (0x0001073d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x104b,	// (0x0001073d) list_medium_line_x2_t4_g4_t3

0x105d,	// (0x0001074f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x105d,	// (0x0001074f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0001e952) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0001e952) list_medium_line_x2_t4_g4_t

0xd3a7,	// (0x0001ca99) list_medium_line_x2_t2_g4_g1_ParamLimits

0xd3a7,	// (0x0001ca99) list_medium_line_x2_t2_g4_g1

0x1007,	// (0x000106f9) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1007,	// (0x000106f9) list_medium_line_x2_t2_g4_g2

0x0f6b,	// (0x0001065d) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0f6b,	// (0x0001065d) list_medium_line_x2_t2_g4_g3

0x0f77,	// (0x00010669) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0f77,	// (0x00010669) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0001e9b9) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0001e9b9) list_medium_line_x2_t2_g4_g

0x2122,	// (0x00011814) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2122,	// (0x00011814) list_medium_line_x2_t2_g4_t1

0x0fac,	// (0x0001069e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0fac,	// (0x0001069e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0001e9c2) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0001e9c2) list_medium_line_x2_t2_g4_t

0xd3a7,	// (0x0001ca99) list_medium_line_x2_t2_g3_g1_ParamLimits

0xd3a7,	// (0x0001ca99) list_medium_line_x2_t2_g3_g1

0x0f6b,	// (0x0001065d) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0f6b,	// (0x0001065d) list_medium_line_x2_t2_g3_g2

0x0f77,	// (0x00010669) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0f77,	// (0x00010669) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0001e92f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0001e92f) list_medium_line_x2_t2_g3_g

0x2137,	// (0x00011829) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2137,	// (0x00011829) list_medium_line_x2_t2_g3_t1

0x0fac,	// (0x0001069e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0fac,	// (0x0001069e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0001e9c7) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0001e9c7) list_medium_line_x2_t2_g3_t

0x2281,	// (0x00011973) main_sp_fs_list_pane_ParamLimits

0x2281,	// (0x00011973) main_sp_fs_list_pane

0x228d,	// (0x0001197f) sp_fs_scroll_pane_ParamLimits

0x228d,	// (0x0001197f) sp_fs_scroll_pane

0x2299,	// (0x0001198b) list_medium_line_x2_t3_t1

0x22a9,	// (0x0001199b) list_medium_line_x2_t3_t2

0x22b7,	// (0x000119a9) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0001ea12) list_medium_line_x2_t3_t

0x22c5,	// (0x000119b7) list_medium_line_x3_t4_t1

0x22d5,	// (0x000119c7) list_medium_line_x3_t4_t2

0x22e3,	// (0x000119d5) list_medium_line_x3_t4_t3

0x22b7,	// (0x000119a9) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0001ea19) list_medium_line_x3_t4_t

0x22f1,	// (0x000119e3) list_medium_line_x4_t5_t1

0x2301,	// (0x000119f3) list_medium_line_x4_t5_t2

0x22e3,	// (0x000119d5) list_medium_line_x4_t5_t3

0x230f,	// (0x00011a01) list_medium_line_x4_t5_t4

0x22b7,	// (0x000119a9) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0001ea22) list_medium_line_x4_t5_t

0xd3a7,	// (0x0001ca99) list_medium_line_t4_g4_g1_ParamLimits

0xd3a7,	// (0x0001ca99) list_medium_line_t4_g4_g1

0x1013,	// (0x00010705) list_medium_line_t4_g4_g2_ParamLimits

0x1013,	// (0x00010705) list_medium_line_t4_g4_g2

0x231d,	// (0x00011a0f) list_medium_line_t4_g4_g3_ParamLimits

0x231d,	// (0x00011a0f) list_medium_line_t4_g4_g3

0x0f77,	// (0x00010669) list_medium_line_t4_g4_g4_ParamLimits

0x0f77,	// (0x00010669) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0001ea2d) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0001ea2d) list_medium_line_t4_g4_g

0x2329,	// (0x00011a1b) list_medium_line_t4_g4_t1_ParamLimits

0x2329,	// (0x00011a1b) list_medium_line_t4_g4_t1

0x233e,	// (0x00011a30) list_medium_line_t4_g4_t2_ParamLimits

0x233e,	// (0x00011a30) list_medium_line_t4_g4_t2

0x2354,	// (0x00011a46) list_medium_line_t4_g4_t3_ParamLimits

0x2354,	// (0x00011a46) list_medium_line_t4_g4_t3

0x0fac,	// (0x0001069e) list_medium_line_t4_g4_t4_ParamLimits

0x0fac,	// (0x0001069e) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0001ea36) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0001ea36) list_medium_line_t4_g4_t

0x2430,	// (0x00011b22) chi_dic_find_pane_g1

0x365a,	// (0x00012d4c) main_tport_pane

0xd3b3,	// (0x0001caa5) list_medium_line_plain_t1

0x67ec,	// (0x00015ede) list_medium_line_t2_g2_g1_ParamLimits

0x67ec,	// (0x00015ede) list_medium_line_t2_g2_g1

0xd405,	// (0x0001caf7) list_medium_line_t2_g2_g2_ParamLimits

0xd405,	// (0x0001caf7) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0001f0f2) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0001f0f2) list_medium_line_t2_g2_g

0x67f8,	// (0x00015eea) list_medium_line_t2_g2_t1_ParamLimits

0x67f8,	// (0x00015eea) list_medium_line_t2_g2_t1

0x680f,	// (0x00015f01) list_medium_line_t2_g2_t2_ParamLimits

0x680f,	// (0x00015f01) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0001f0f7) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0001f0f7) list_medium_line_t2_g2_t

0xd7af,	// (0x0001cea1) aid_sp_fs_list_icon_a_sm

0xd7b7,	// (0x0001cea9) aid_sp_fs_list_icon_d

0xd7bf,	// (0x0001ceb1) aid_sp_fs_text_primary

0xd7c8,	// (0x0001ceba) aid_sp_fs_text_secondary

0x6e89,	// (0x0001657b) list_medium_line

0x6e89,	// (0x0001657b) list_medium_line_g2

0x6e89,	// (0x0001657b) list_medium_line_g3

0x6e89,	// (0x0001657b) list_medium_line_plain

0x6e89,	// (0x0001657b) list_medium_line_plain_t2

0x6e89,	// (0x0001657b) list_medium_line_plain_t3

0x6e89,	// (0x0001657b) list_medium_line_right_icon

0x6e89,	// (0x0001657b) list_medium_line_right_iconx2

0x6e89,	// (0x0001657b) list_medium_line_t2

0x6e89,	// (0x0001657b) list_medium_line_t2_g2

0x6e89,	// (0x0001657b) list_medium_line_t2_g3

0x6e89,	// (0x0001657b) list_medium_line_t2_right_icon

0x6e89,	// (0x0001657b) list_medium_line_t2_right_iconx2

0x6e89,	// (0x0001657b) list_medium_line_t3

0x6e89,	// (0x0001657b) list_medium_line_t3_g2

0x6e89,	// (0x0001657b) list_medium_line_t3_g3

0x6e89,	// (0x0001657b) list_medium_line_t3_right_iconx2

0x6e92,	// (0x00016584) list_medium_line_t4_g4

0x6e89,	// (0x0001657b) list_medium_line_x2

0x6e89,	// (0x0001657b) list_medium_line_x2_t2_g2

0x6e89,	// (0x0001657b) list_medium_line_x2_t2_g3

0x6e89,	// (0x0001657b) list_medium_line_x2_t2_g4

0x6e89,	// (0x0001657b) list_medium_line_x2_t3

0x6e89,	// (0x0001657b) list_medium_line_x2_t3_g2

0x6e89,	// (0x0001657b) list_medium_line_x2_t3_g3

0x6e89,	// (0x0001657b) list_medium_line_x2_t3_g4

0x6e89,	// (0x0001657b) list_medium_line_x2_t4_g2

0x6e89,	// (0x0001657b) list_medium_line_x2_t4_g4

0x6e9b,	// (0x0001658d) list_medium_line_x3

0x6e9b,	// (0x0001658d) list_medium_line_x3_t4

0x6e9b,	// (0x0001658d) list_medium_line_x3_t4_g4

0x6e92,	// (0x00016584) list_medium_line_x4_t4

0x6e92,	// (0x00016584) list_medium_line_x4_t4_g7

0x6e92,	// (0x00016584) list_medium_line_x4_t5

0x6ea4,	// (0x00016596) list_single_fs_dyc_pane_ParamLimits

0x6ea4,	// (0x00016596) list_single_fs_dyc_pane

0xd3a7,	// (0x0001ca99) list_medium_line_x4_t4_g7_g1_ParamLimits

0xd3a7,	// (0x0001ca99) list_medium_line_x4_t4_g7_g1

0x75d8,	// (0x00016cca) list_medium_line_x4_t4_g7_g2_ParamLimits

0x75d8,	// (0x00016cca) list_medium_line_x4_t4_g7_g2

0x75e4,	// (0x00016cd6) list_medium_line_x4_t4_g7_g3_ParamLimits

0x75e4,	// (0x00016cd6) list_medium_line_x4_t4_g7_g3

0x75f3,	// (0x00016ce5) list_medium_line_x4_t4_g7_g4_ParamLimits

0x75f3,	// (0x00016ce5) list_medium_line_x4_t4_g7_g4

0x75ff,	// (0x00016cf1) list_medium_line_x4_t4_g7_g5_ParamLimits

0x75ff,	// (0x00016cf1) list_medium_line_x4_t4_g7_g5

0x760e,	// (0x00016d00) list_medium_line_x4_t4_g7_g6_ParamLimits

0x760e,	// (0x00016d00) list_medium_line_x4_t4_g7_g6

0x761d,	// (0x00016d0f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x761d,	// (0x00016d0f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0001f2c2) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0001f2c2) list_medium_line_x4_t4_g7_g

0x7629,	// (0x00016d1b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7629,	// (0x00016d1b) list_medium_line_x4_t4_g7_t1

0x763e,	// (0x00016d30) list_medium_line_x4_t4_g7_t2_ParamLimits

0x763e,	// (0x00016d30) list_medium_line_x4_t4_g7_t2

0x7653,	// (0x00016d45) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7653,	// (0x00016d45) list_medium_line_x4_t4_g7_t3

0x7668,	// (0x00016d5a) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7668,	// (0x00016d5a) list_medium_line_x4_t4_g7_t4

0x767a,	// (0x00016d6c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x767a,	// (0x00016d6c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0001f2d1) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0001f2d1) list_medium_line_x4_t4_g7_t

0x768c,	// (0x00016d7e) list_single_dyc_row_pane_ParamLimits

0x768c,	// (0x00016d7e) list_single_dyc_row_pane

0x7d2d,	// (0x0001741f) call5_gesture_pane_ParamLimits

0x7d2d,	// (0x0001741f) call5_gesture_pane

0x7d83,	// (0x00017475) call5_windows_pane_ParamLimits

0x7d83,	// (0x00017475) call5_windows_pane

0x7e31,	// (0x00017523) call5_swipe_1_pane_cp_ParamLimits

0x7e31,	// (0x00017523) call5_swipe_1_pane_cp

0x7e3d,	// (0x0001752f) call5_swipe_2_pane_cp_ParamLimits

0x7e3d,	// (0x0001752f) call5_swipe_2_pane_cp

0xa9a0,	// (0x0001a092) call5_image_pane_cp

0x7e49,	// (0x0001753b) popup_call5_audio_first_window_cp_ParamLimits

0x7e49,	// (0x0001753b) popup_call5_audio_first_window_cp

0xe2a4,	// (0x0001d996) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2a4,	// (0x0001d996) call5_swipe_1_pane_g1_cp

0xe2e4,	// (0x0001d9d6) call5_swipe_1_pane_g2_cp

0xe2bd,	// (0x0001d9af) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2bd,	// (0x0001d9af) call5_swipe_1_pane_t1_cp

0xe2a4,	// (0x0001d996) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2a4,	// (0x0001d996) call5_swipe_2_pane_g1_cp

0xe2ec,	// (0x0001d9de) call5_swipe_2_pane_g2_cp

0xe2f4,	// (0x0001d9e6) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2f4,	// (0x0001d9e6) call5_swipe_2_pane_t1_cp

0x9610,	// (0x00018d02) main_sp_fs_email_pane

0xe309,	// (0x0001d9fb) main_sp_fs_listscroll_pane_te

0xe312,	// (0x0001da04) popup_sp_fs_action_menu_pane_ParamLimits

0xe312,	// (0x0001da04) popup_sp_fs_action_menu_pane

0xc36d,	// (0x0001ba5f) bg_sp_fs_ctrlbar_pane_g1

0xc906,	// (0x0001bff8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc918,	// (0x0001c00a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc90f,	// (0x0001c001) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc36d,	// (0x0001ba5f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0001f3bf) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc14c,	// (0x0001b83e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc14c,	// (0x0001b83e) bg_sp_fs_ctrlbar_ddmenu_pane

0xe358,	// (0x0001da4a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe358,	// (0x0001da4a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe364,	// (0x0001da56) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe364,	// (0x0001da56) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0001f3c8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0001f3c8) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe370,	// (0x0001da62) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe370,	// (0x0001da62) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe38a,	// (0x0001da7c) list_medium_line_t2_right_icon_g1

0x7e57,	// (0x00017549) list_medium_line_t2_right_icon_t1

0x7e67,	// (0x00017559) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0001f3cd) list_medium_line_t2_right_icon_t

0xbe60,	// (0x0001b552) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbe60,	// (0x0001b552) bg_sp_fs_ctrlbar_pane

0x7ec6,	// (0x000175b8) main_sp_fs_ctrlbar_button_pane_cp01

0x7ed0,	// (0x000175c2) main_sp_fs_ctrlbar_ddmenu_pane

0xd3a7,	// (0x0001ca99) main_sp_fs_ctrlbar_pane_g1

0xe3ca,	// (0x0001dabc) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0001f3d2) main_sp_fs_ctrlbar_pane_g

0xe3d6,	// (0x0001dac8) main_sp_fs_ctrlbar_pane_t1

0x7eda,	// (0x000175cc) main_sp_fs_ctrlbar_pane

0x7efe,	// (0x000175f0) main_sp_fs_listscroll_pane_te_cp01

0x7f1e,	// (0x00017610) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7f1e,	// (0x00017610) popup_sp_fs_action_menu_pane_cp01

0x9610,	// (0x00018d02) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9610,	// (0x00018d02) bg_sp_fs_highlight_list_pane_cp01

0xe406,	// (0x0001daf8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe406,	// (0x0001daf8) sp_fs_action_menu_list_gene_pane_g1

0xe415,	// (0x0001db07) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe415,	// (0x0001db07) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0001f3dc) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0001f3dc) sp_fs_action_menu_list_gene_pane_g

0xe422,	// (0x0001db14) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe422,	// (0x0001db14) sp_fs_action_menu_list_gene_pane_t1

0xe43a,	// (0x0001db2c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe43a,	// (0x0001db2c) sp_fs_action_menu_list_gene_pane

0xe45d,	// (0x0001db4f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe45d,	// (0x0001db4f) popup_sp_fs_action_menu_bg_pane

0xe46b,	// (0x0001db5d) sp_fs_action_menu_list_pane_ParamLimits

0xe46b,	// (0x0001db5d) sp_fs_action_menu_list_pane

0xe48f,	// (0x0001db81) sp_fs_scroll_pane_cp01_ParamLimits

0xe48f,	// (0x0001db81) sp_fs_scroll_pane_cp01

0x7f54,	// (0x00017646) list_medium_line_plain_t2_t1

0x7f64,	// (0x00017656) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0001f3e1) list_medium_line_plain_t2_t

0x7f74,	// (0x00017666) list_medium_line_plain_t3_t1

0x7f84,	// (0x00017676) list_medium_line_plain_t3_t2

0x7f92,	// (0x00017684) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0001f3e6) list_medium_line_plain_t3_t

0xd3a7,	// (0x0001ca99) list_medium_line_x2_t2_g2_g1_ParamLimits

0xd3a7,	// (0x0001ca99) list_medium_line_x2_t2_g2_g1

0x0f77,	// (0x00010669) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0f77,	// (0x00010669) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0001e93d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0001e93d) list_medium_line_x2_t2_g2_g

0x2329,	// (0x00011a1b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2329,	// (0x00011a1b) list_medium_line_x2_t2_g2_t1

0x0fac,	// (0x0001069e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0fac,	// (0x0001069e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0001f3ed) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0001f3ed) list_medium_line_x2_t2_g2_t

0xd3a7,	// (0x0001ca99) list_medium_line_x2_t4_g2_g1_ParamLimits

0xd3a7,	// (0x0001ca99) list_medium_line_x2_t4_g2_g1

0x0f77,	// (0x00010669) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0f77,	// (0x00010669) list_medium_line_x2_t4_g2_g2

0x0001,

0xf24b,	// (0x0001e93d) list_medium_line_x2_t4_g2_g_ParamLimits

0xf24b,	// (0x0001e93d) list_medium_line_x2_t4_g2_g

0x7fa0,	// (0x00017692) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7fa0,	// (0x00017692) list_medium_line_x2_t4_g2_t1

0x7fba,	// (0x000176ac) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7fba,	// (0x000176ac) list_medium_line_x2_t4_g2_t2

0x7fd0,	// (0x000176c2) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7fd0,	// (0x000176c2) list_medium_line_x2_t4_g2_t3

0x0fac,	// (0x0001069e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0fac,	// (0x0001069e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0001f3f2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0001f3f2) list_medium_line_x2_t4_g2_t

0xe4b5,	// (0x0001dba7) list_medium_line_t3_right_iconx2_g1

0xe38a,	// (0x0001da7c) list_medium_line_t3_right_iconx2_g2

0x7fe5,	// (0x000176d7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0001f3fb) list_medium_line_t3_right_iconx2_g

0x7fef,	// (0x000176e1) list_medium_line_t3_right_iconx2_t1

0x7fff,	// (0x000176f1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0001f402) list_medium_line_t3_right_iconx2_t

0xd3a7,	// (0x0001ca99) list_medium_line_x3_t4_g4_g1_ParamLimits

0xd3a7,	// (0x0001ca99) list_medium_line_x3_t4_g4_g1

0x0f6b,	// (0x0001065d) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0f6b,	// (0x0001065d) list_medium_line_x3_t4_g4_g2

0x1013,	// (0x00010705) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1013,	// (0x00010705) list_medium_line_x3_t4_g4_g3

0x800d,	// (0x000176ff) list_medium_line_x3_t4_g4_g4_ParamLimits

0x800d,	// (0x000176ff) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0001f407) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0001f407) list_medium_line_x3_t4_g4_g

0x8019,	// (0x0001770b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8019,	// (0x0001770b) list_medium_line_x3_t4_g4_t1

0x8030,	// (0x00017722) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8030,	// (0x00017722) list_medium_line_x3_t4_g4_t2

0x804b,	// (0x0001773d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x804b,	// (0x0001773d) list_medium_line_x3_t4_g4_t3

0x8060,	// (0x00017752) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8060,	// (0x00017752) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0001f410) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0001f410) list_medium_line_x3_t4_g4_t

0x807d,	// (0x0001776f) list_single_dyc_row_text_pane_t1_ParamLimits

0x807d,	// (0x0001776f) list_single_dyc_row_text_pane_t1

0x80c6,	// (0x000177b8) list_single_dyc_row_text_pane_t2_ParamLimits

0x80c6,	// (0x000177b8) list_single_dyc_row_text_pane_t2

0xe4bd,	// (0x0001dbaf) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4bd,	// (0x0001dbaf) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0001f419) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0001f419) list_single_dyc_row_text_pane_t

0xe4e1,	// (0x0001dbd3) list_single_dyc_row_pane_g1_ParamLimits

0xe4e1,	// (0x0001dbd3) list_single_dyc_row_pane_g1

0xe4ed,	// (0x0001dbdf) list_single_dyc_row_pane_g2_ParamLimits

0xe4ed,	// (0x0001dbdf) list_single_dyc_row_pane_g2

0xe4f9,	// (0x0001dbeb) list_single_dyc_row_pane_g3_ParamLimits

0xe4f9,	// (0x0001dbeb) list_single_dyc_row_pane_g3

0xe505,	// (0x0001dbf7) list_single_dyc_row_pane_g4_ParamLimits

0xe505,	// (0x0001dbf7) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001f426) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001f426) list_single_dyc_row_pane_g

0xe511,	// (0x0001dc03) list_single_dyc_row_text_pane_ParamLimits

0xe511,	// (0x0001dc03) list_single_dyc_row_text_pane

0x95af,	// (0x00018ca1) bg_sp_fs_scroll_pane

0xe530,	// (0x0001dc22) thumb_sp_fs_scroll_pane

0x67ec,	// (0x00015ede) list_medium_line_g1_ParamLimits

0x67ec,	// (0x00015ede) list_medium_line_g1

0xe539,	// (0x0001dc2b) list_medium_line_t1_ParamLimits

0xe539,	// (0x0001dc2b) list_medium_line_t1

0xd3a7,	// (0x0001ca99) list_medium_line_x2_g1_ParamLimits

0xd3a7,	// (0x0001ca99) list_medium_line_x2_g1

0x0f6b,	// (0x0001065d) list_medium_line_x2_g2_ParamLimits

0x0f6b,	// (0x0001065d) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001f42f) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001f42f) list_medium_line_x2_g

0xe54e,	// (0x0001dc40) list_medium_line_x2_t1_ParamLimits

0xe54e,	// (0x0001dc40) list_medium_line_x2_t1

0xd3a7,	// (0x0001ca99) list_medium_line_x3_g1_ParamLimits

0xd3a7,	// (0x0001ca99) list_medium_line_x3_g1

0x0f6b,	// (0x0001065d) list_medium_line_x3_g2_ParamLimits

0x0f6b,	// (0x0001065d) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001f42f) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001f42f) list_medium_line_x3_g

0xe54e,	// (0x0001dc40) list_medium_line_x3_t1_ParamLimits

0xe54e,	// (0x0001dc40) list_medium_line_x3_t1

0xe564,	// (0x0001dc56) thumb_sp_fs_scroll_pane_g1

0xe56d,	// (0x0001dc5f) thumb_sp_fs_scroll_pane_g2

0xe576,	// (0x0001dc68) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001f434) thumb_sp_fs_scroll_pane_g

0xe564,	// (0x0001dc56) bg_sp_fs_scroll_pane_g1

0xe56d,	// (0x0001dc5f) bg_sp_fs_scroll_pane_g2

0xe576,	// (0x0001dc68) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001f434) bg_sp_fs_scroll_pane_g

0xd3a7,	// (0x0001ca99) list_medium_line_x2_t3_g4_g1_ParamLimits

0xd3a7,	// (0x0001ca99) list_medium_line_x2_t3_g4_g1

0x1007,	// (0x000106f9) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1007,	// (0x000106f9) list_medium_line_x2_t3_g4_g2

0x0f6b,	// (0x0001065d) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0f6b,	// (0x0001065d) list_medium_line_x2_t3_g4_g3

0x0f77,	// (0x00010669) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0f77,	// (0x00010669) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0001e9b9) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0001e9b9) list_medium_line_x2_t3_g4_g

0x81fb,	// (0x000178ed) list_medium_line_x2_t3_g4_t1_ParamLimits

0x81fb,	// (0x000178ed) list_medium_line_x2_t3_g4_t1

0x8211,	// (0x00017903) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8211,	// (0x00017903) list_medium_line_x2_t3_g4_t2

0x0fac,	// (0x0001069e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0fac,	// (0x0001069e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001f43b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001f43b) list_medium_line_x2_t3_g4_t

0x67ec,	// (0x00015ede) list_medium_line_g2_g1_ParamLimits

0x67ec,	// (0x00015ede) list_medium_line_g2_g1

0xd405,	// (0x0001caf7) list_medium_line_g2_g2_ParamLimits

0xd405,	// (0x0001caf7) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0001f0f2) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0001f0f2) list_medium_line_g2_g

0xe57f,	// (0x0001dc71) list_medium_line_g2_t1_ParamLimits

0xe57f,	// (0x0001dc71) list_medium_line_g2_t1

0x67ec,	// (0x00015ede) list_medium_line_t3_g2_g1_ParamLimits

0x67ec,	// (0x00015ede) list_medium_line_t3_g2_g1

0xd405,	// (0x0001caf7) list_medium_line_t3_g2_g2_ParamLimits

0xd405,	// (0x0001caf7) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0001f0f2) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0001f0f2) list_medium_line_t3_g2_g

0x822a,	// (0x0001791c) list_medium_line_t3_g2_t1_ParamLimits

0x822a,	// (0x0001791c) list_medium_line_t3_g2_t1

0x8244,	// (0x00017936) list_medium_line_t3_g2_t2_ParamLimits

0x8244,	// (0x00017936) list_medium_line_t3_g2_t2

0x825a,	// (0x0001794c) list_medium_line_t3_g2_t3_ParamLimits

0x825a,	// (0x0001794c) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001f442) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001f442) list_medium_line_t3_g2_t

0xe38a,	// (0x0001da7c) list_medium_line_right_icon_g1

0xe594,	// (0x0001dc86) list_medium_line_right_icon_t1

0x67ec,	// (0x00015ede) list_medium_line_t2_g1_ParamLimits

0x67ec,	// (0x00015ede) list_medium_line_t2_g1

0x8271,	// (0x00017963) list_medium_line_t2_t1_ParamLimits

0x8271,	// (0x00017963) list_medium_line_t2_t1

0x828b,	// (0x0001797d) list_medium_line_t2_t2_ParamLimits

0x828b,	// (0x0001797d) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001f449) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001f449) list_medium_line_t2_t

0x67ec,	// (0x00015ede) list_medium_line_t3_g1_ParamLimits

0x67ec,	// (0x00015ede) list_medium_line_t3_g1

0x82a4,	// (0x00017996) list_medium_line_t3_t1_ParamLimits

0x82a4,	// (0x00017996) list_medium_line_t3_t1

0x82bb,	// (0x000179ad) list_medium_line_t3_t2_ParamLimits

0x82bb,	// (0x000179ad) list_medium_line_t3_t2

0x82d0,	// (0x000179c2) list_medium_line_t3_t3_ParamLimits

0x82d0,	// (0x000179c2) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001f44e) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001f44e) list_medium_line_t3_t

0x67ec,	// (0x00015ede) list_medium_line_g3_g1_ParamLimits

0x67ec,	// (0x00015ede) list_medium_line_g3_g1

0xe5a2,	// (0x0001dc94) list_medium_line_g3_g2_ParamLimits

0xe5a2,	// (0x0001dc94) list_medium_line_g3_g2

0xd405,	// (0x0001caf7) list_medium_line_g3_g3_ParamLimits

0xd405,	// (0x0001caf7) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001f455) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001f455) list_medium_line_g3_g

0xe5ae,	// (0x0001dca0) list_medium_line_g3_t1_ParamLimits

0xe5ae,	// (0x0001dca0) list_medium_line_g3_t1

0x67ec,	// (0x00015ede) list_medium_line_t2_g3_g1_ParamLimits

0x67ec,	// (0x00015ede) list_medium_line_t2_g3_g1

0xe5a2,	// (0x0001dc94) list_medium_line_t2_g3_g2_ParamLimits

0xe5a2,	// (0x0001dc94) list_medium_line_t2_g3_g2

0xd405,	// (0x0001caf7) list_medium_line_t2_g3_g3_ParamLimits

0xd405,	// (0x0001caf7) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001f455) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001f455) list_medium_line_t2_g3_g

0x82e2,	// (0x000179d4) list_medium_line_t2_g3_t1_ParamLimits

0x82e2,	// (0x000179d4) list_medium_line_t2_g3_t1

0x82f9,	// (0x000179eb) list_medium_line_t2_g3_t2_ParamLimits

0x82f9,	// (0x000179eb) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001f45c) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001f45c) list_medium_line_t2_g3_t

0x67ec,	// (0x00015ede) list_medium_line_t3_g3_g1_ParamLimits

0x67ec,	// (0x00015ede) list_medium_line_t3_g3_g1

0xe5a2,	// (0x0001dc94) list_medium_line_t3_g3_g2_ParamLimits

0xe5a2,	// (0x0001dc94) list_medium_line_t3_g3_g2

0xd405,	// (0x0001caf7) list_medium_line_t3_g3_g3_ParamLimits

0xd405,	// (0x0001caf7) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001f455) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001f455) list_medium_line_t3_g3_g

0x8312,	// (0x00017a04) list_medium_line_t3_g3_t1_ParamLimits

0x8312,	// (0x00017a04) list_medium_line_t3_g3_t1

0x832b,	// (0x00017a1d) list_medium_line_t3_g3_t2_ParamLimits

0x832b,	// (0x00017a1d) list_medium_line_t3_g3_t2

0x8341,	// (0x00017a33) list_medium_line_t3_g3_t3_ParamLimits

0x8341,	// (0x00017a33) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001f461) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001f461) list_medium_line_t3_g3_t

0xe4b5,	// (0x0001dba7) list_medium_line_right_iconx2_g1

0xe38a,	// (0x0001da7c) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001f468) list_medium_line_right_iconx2_g

0xe5c3,	// (0x0001dcb5) list_medium_line_right_iconx2_t1

0xe4b5,	// (0x0001dba7) list_medium_line_t2_right_iconx2_g1

0xe38a,	// (0x0001da7c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001f468) list_medium_line_t2_right_iconx2_g

0x835b,	// (0x00017a4d) list_medium_line_t2_right_iconx2_t1

0x836b,	// (0x00017a5d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001f46d) list_medium_line_t2_right_iconx2_t

0x837d,	// (0x00017a6f) list_medium_line_x4_t4_t1

0x838b,	// (0x00017a7d) list_medium_line_x4_t4_t2

0x839b,	// (0x00017a8d) list_medium_line_x4_t4_t3

0x83ab,	// (0x00017a9d) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001f472) list_medium_line_x4_t4_t

0x83fe,	// (0x00017af0) tport_appsw_pane_ParamLimits

0x83fe,	// (0x00017af0) tport_appsw_pane

0x8416,	// (0x00017b08) tport_contact_pane_ParamLimits

0x8416,	// (0x00017b08) tport_contact_pane

0x842e,	// (0x00017b20) tport_listscroll_pane_ParamLimits

0x842e,	// (0x00017b20) tport_listscroll_pane

0x8448,	// (0x00017b3a) cell_tport_appsw_pane_ParamLimits

0x8448,	// (0x00017b3a) cell_tport_appsw_pane

0xd0b3,	// (0x0001c7a5) tport_appsw_pane_g1_ParamLimits

0xd0b3,	// (0x0001c7a5) tport_appsw_pane_g1

0xe5d1,	// (0x0001dcc3) tport_contact_pane_g1

0xe5da,	// (0x0001dccc) tport_contact_pane_t1

0xe5e8,	// (0x0001dcda) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001f47b) tport_contact_pane_t

0xe5f6,	// (0x0001dce8) list_tport_pane

0xe5ff,	// (0x0001dcf1) scroll_pane_cp_030

0x849a,	// (0x00017b8c) cell_tport_appsw_pane_g1

0x84aa,	// (0x00017b9c) cell_tport_appsw_pane_t1

0x84b8,	// (0x00017baa) grid_highlight_pane_cp019

0x84c0,	// (0x00017bb2) list_tport_double_graphic_pane_ParamLimits

0x84c0,	// (0x00017bb2) list_tport_double_graphic_pane

0x9610,	// (0x00018d02) list_highlight_pane_cp023_ParamLimits

0x9610,	// (0x00018d02) list_highlight_pane_cp023

0x84cd,	// (0x00017bbf) list_tport_double_graphic_pane_g1_ParamLimits

0x84cd,	// (0x00017bbf) list_tport_double_graphic_pane_g1

0x84da,	// (0x00017bcc) list_tport_double_graphic_pane_t1_ParamLimits

0x84da,	// (0x00017bcc) list_tport_double_graphic_pane_t1

0x84ef,	// (0x00017be1) list_tport_double_graphic_pane_t2_ParamLimits

0x84ef,	// (0x00017be1) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001f487) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001f487) list_tport_double_graphic_pane_t

0x95af,	// (0x00018ca1) main_cale_note_pane

0x5e59,	// (0x0001554b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5e59,	// (0x0001554b) cell_vitu2_function_top_wide_pane_cp01

0x79e1,	// (0x000170d3) wait_bar_pane_cp05_ParamLimits

0x9610,	// (0x00018d02) listscroll_cmail_pane

0xe610,	// (0x0001dd02) list_cmail_pane

0x850b,	// (0x00017bfd) list_cmail_body_pane

0xd38c,	// (0x0001ca7e) list_single_cmail_header_caption_pane

0x851e,	// (0x00017c10) list_single_cmail_header_detail_pane_ParamLimits

0x851e,	// (0x00017c10) list_single_cmail_header_detail_pane

0x8549,	// (0x00017c3b) list_single_cmail_header_caption_pane_t1

0x8564,	// (0x00017c56) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8564,	// (0x00017c56) list_single_cmail_header_detail_pane_g1

0xe627,	// (0x0001dd19) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe627,	// (0x0001dd19) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001f48c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001f48c) list_single_cmail_header_detail_pane_g

0x857c,	// (0x00017c6e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x857c,	// (0x00017c6e) list_single_cmail_header_detail_pane_t1

0x85cc,	// (0x00017cbe) list_single_cmail_header_editor_pane_bg_ParamLimits

0x85cc,	// (0x00017cbe) list_single_cmail_header_editor_pane_bg

0xdf4c,	// (0x0001d63e) list_cmail_body_pane_g1

0xe664,	// (0x0001dd56) list_cmail_body_pane_t1

0xd0f0,	// (0x0001c7e2) list_single_cmail_header_editor_pane_bg_g1

0xa22a,	// (0x0001991c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd100,	// (0x0001c7f2) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd0f8,	// (0x0001c7ea) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3dd,	// (0x0001cacf) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd120,	// (0x0001c812) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd110,	// (0x0001c802) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd118,	// (0x0001c80a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa20a,	// (0x000198fc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x85e5,	// (0x00017cd7) calenote_gesture_pane_ParamLimits

0x85e5,	// (0x00017cd7) calenote_gesture_pane

0x8605,	// (0x00017cf7) calenote_window_pane_ParamLimits

0x8605,	// (0x00017cf7) calenote_window_pane

0xe672,	// (0x0001dd64) popup_note_window_cp01

0x8621,	// (0x00017d13) calenote_swipe_1_pane_ParamLimits

0x8621,	// (0x00017d13) calenote_swipe_1_pane

0x7e3d,	// (0x0001752f) calenote_swipe_2_pane_ParamLimits

0x7e3d,	// (0x0001752f) calenote_swipe_2_pane

0xe2a4,	// (0x0001d996) calenote_swipe_1_pane_g1_ParamLimits

0xe2a4,	// (0x0001d996) calenote_swipe_1_pane_g1

0xe2b1,	// (0x0001d9a3) calenote_swipe_1_pane_g2_ParamLimits

0xe2b1,	// (0x0001d9a3) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0001f3b5) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0001f3b5) calenote_swipe_1_pane_g

0xe684,	// (0x0001dd76) calenote_swipe_1_pane_t1_ParamLimits

0xe684,	// (0x0001dd76) calenote_swipe_1_pane_t1

0xe2a4,	// (0x0001d996) calenote_swipe_2_pane_g1_ParamLimits

0xe2a4,	// (0x0001d996) calenote_swipe_2_pane_g1

0xe6a3,	// (0x0001dd95) calenote_swipe_2_pane_g2_ParamLimits

0xe6a3,	// (0x0001dd95) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001f498) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001f498) calenote_swipe_2_pane_g

0xe6af,	// (0x0001dda1) calenote_swipe_2_pane_t1_ParamLimits

0xe6af,	// (0x0001dda1) calenote_swipe_2_pane_t1

0x95af,	// (0x00018ca1) main_mup_navstr_pane

0x4aad,	// (0x0001419f) main_mup3_pane_t7_ParamLimits

0x4aad,	// (0x0001419f) main_mup3_pane_t7

0xcc92,	// (0x0001c384) main_mp4_pane_g6_ParamLimits

0xcc92,	// (0x0001c384) main_mp4_pane_g6

0xceba,	// (0x0001c5ac) main_image3_pane_t4_ParamLimits

0xceba,	// (0x0001c5ac) main_image3_pane_t4

0x8636,	// (0x00017d28) popup_navstr_preview_pane_ParamLimits

0x8636,	// (0x00017d28) popup_navstr_preview_pane

0x8646,	// (0x00017d38) scroll_navstr_pane_ParamLimits

0x8646,	// (0x00017d38) scroll_navstr_pane

0x95af,	// (0x00018ca1) bg_popup_preview_window_pane_cp04

0xe6d6,	// (0x0001ddc8) popup_navstr_preview_pane_t1

0x865a,	// (0x00017d4c) scroll_navstr_pane_g1_ParamLimits

0x865a,	// (0x00017d4c) scroll_navstr_pane_g1

0x866e,	// (0x00017d60) scroll_navstr_pane_t1_ParamLimits

0x866e,	// (0x00017d60) scroll_navstr_pane_t1

0xe67b,	// (0x0001dd6d) bg_button_pane_cp014

0xe67b,	// (0x0001dd6d) bg_button_pane_cp030

0x7cd3,	// (0x000173c5) list_double_fisheye_pane_g4_ParamLimits

0x7cd3,	// (0x000173c5) list_double_fisheye_pane_g4

0x7cdf,	// (0x000173d1) list_double_fisheye_pane_g5_ParamLimits

0x7cdf,	// (0x000173d1) list_double_fisheye_pane_g5

0xe618,	// (0x0001dd0a) sp_fs_scroll_pane_cp03

0xd3a7,	// (0x0001ca99) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3ca,	// (0x0001dabc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0001f3d2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3d6,	// (0x0001dac8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8501,	// (0x00017bf3) sp_fs_scroll_pane_cp02

0x9eff,	// (0x000195f1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9eff,	// (0x000195f1) popup_sp_fs_calendar_preview_list_single_pane

0x95af,	// (0x00018ca1) main_cam6_pano_pane

0x9610,	// (0x00018d02) main_mup3_pane_ParamLimits

0x95af,	// (0x00018ca1) main_phacti_pane

0x78b4,	// (0x00016fa6) bg_button_pane_cp11

0x78ce,	// (0x00016fc0) main_mobtv_info_pane_g2_ParamLimits

0x78ce,	// (0x00016fc0) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0001f332) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0001f332) main_mobtv_info_pane_g

0x7aa9,	// (0x0001719b) sc_clock_pane_t5_ParamLimits

0x7aa9,	// (0x0001719b) sc_clock_pane_t5

0x7b35,	// (0x00017227) main_radioblah_pane_g1_ParamLimits

0xe1f0,	// (0x0001d8e2) main_radioblah_pane_t3_ParamLimits

0xe1f0,	// (0x0001d8e2) main_radioblah_pane_t3

0xe208,	// (0x0001d8fa) main_radioblah_pane_t4_ParamLimits

0xe208,	// (0x0001d8fa) main_radioblah_pane_t4

0x7b5d,	// (0x0001724f) main_radioblah_text_pane_ParamLimits

0x7b5d,	// (0x0001724f) main_radioblah_text_pane

0x7b6f,	// (0x00017261) main_radioblah_info_pane_g1_ParamLimits

0x7c08,	// (0x000172fa) main_radioblah_info_pane_t4_ParamLimits

0x7c08,	// (0x000172fa) main_radioblah_info_pane_t4

0x9610,	// (0x00018d02) main_sp_fs_calendar_pane

0x8685,	// (0x00017d77) main_phacti_pane_g1

0x868d,	// (0x00017d7f) phacti_note_pane_ParamLimits

0x868d,	// (0x00017d7f) phacti_note_pane

0xe6ed,	// (0x0001dddf) phacti_term_pane_ParamLimits

0xe6ed,	// (0x0001dddf) phacti_term_pane

0xe702,	// (0x0001ddf4) phacti_note_pane_t1_ParamLimits

0xe702,	// (0x0001ddf4) phacti_note_pane_t1

0xe719,	// (0x0001de0b) phacti_term_pane_g1

0xe721,	// (0x0001de13) phacti_term_pane_t1_ParamLimits

0xe721,	// (0x0001de13) phacti_term_pane_t1

0xe74b,	// (0x0001de3d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe753,	// (0x0001de45) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001f4a2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe75b,	// (0x0001de4d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe75b,	// (0x0001de4d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe771,	// (0x0001de63) aid_popup_sp_fs_bg_corner_pane

0xc36d,	// (0x0001ba5f) popup_sp_fs_calendar_preview_bg_pane_g1

0x95af,	// (0x00018ca1) popup_sp_fs_calendar_preview_bg_pane

0xe779,	// (0x0001de6b) popup_sp_fs_calendar_preview_list_pane

0xbe60,	// (0x0001b552) bg_main_sp_fs_cale_pane_ParamLimits

0xbe60,	// (0x0001b552) bg_main_sp_fs_cale_pane

0xe78a,	// (0x0001de7c) listscroll_cale_mrui_pane_ParamLimits

0xe78a,	// (0x0001de7c) listscroll_cale_mrui_pane

0xe79f,	// (0x0001de91) listscroll_sp_fs_schedule_track_pane

0xe7a8,	// (0x0001de9a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7a8,	// (0x0001de9a) main_sp_fs_ctrlbar_pane_cp01

0xe7bb,	// (0x0001dead) main_sp_fs_ribbon_pane

0xe7c3,	// (0x0001deb5) popup_sp_fs_cale_preview_window

0x86fe,	// (0x00017df0) list_single_sp_fs_schedule_track_pane_ParamLimits

0x86fe,	// (0x00017df0) list_single_sp_fs_schedule_track_pane

0x9610,	// (0x00018d02) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9610,	// (0x00018d02) bg_sp_fs_highlight_list_pane_cp03

0x8712,	// (0x00017e04) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8712,	// (0x00017e04) list_single_sp_fs_schedule_track_pane_g1

0x871e,	// (0x00017e10) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x871e,	// (0x00017e10) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001f4a7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001f4a7) list_single_sp_fs_schedule_track_pane_g

0x872a,	// (0x00017e1c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x872a,	// (0x00017e1c) list_single_sp_fs_schedule_track_pane_t1

0x874c,	// (0x00017e3e) sp_fs_schedule_track_pane_ParamLimits

0x874c,	// (0x00017e3e) sp_fs_schedule_track_pane

0xe7d5,	// (0x0001dec7) sp_fs_schedule_track_pane_g1

0xe7dd,	// (0x0001decf) sp_fs_schedule_track_pane_g2

0xe7e5,	// (0x0001ded7) sp_fs_schedule_track_pane_g3

0xe7ed,	// (0x0001dedf) sp_fs_schedule_track_pane_g4

0xe7f5,	// (0x0001dee7) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001f4ac) sp_fs_schedule_track_pane_g

0xd0f0,	// (0x0001c7e2) bg_sp_fs_schedule_viewer_highlight_g1

0xa22a,	// (0x0001991c) bg_sp_fs_schedule_viewer_highlight_g2

0xd0f8,	// (0x0001c7ea) bg_sp_fs_schedule_viewer_highlight_g3

0xd100,	// (0x0001c7f2) bg_sp_fs_schedule_viewer_highlight_g4

0xd3dd,	// (0x0001cacf) bg_sp_fs_schedule_viewer_highlight_g5

0xd110,	// (0x0001c802) bg_sp_fs_schedule_viewer_highlight_g6

0xd118,	// (0x0001c80a) bg_sp_fs_schedule_viewer_highlight_g7

0xd120,	// (0x0001c812) bg_sp_fs_schedule_viewer_highlight_g8

0xa20a,	// (0x000198fc) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001f4b7) bg_sp_fs_schedule_viewer_highlight_g

0x95af,	// (0x00018ca1) bg_main_sp_fs_ribbon_pane

0x8761,	// (0x00017e53) main_sp_fs_ribbon_pane_g1

0xe7fd,	// (0x0001deef) main_sp_fs_ribbon_pane_t1

0x876a,	// (0x00017e5c) main_sp_fs_ribbon_pane_t2

0xe80c,	// (0x0001defe) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001f4ca) main_sp_fs_ribbon_pane_t

0xe81b,	// (0x0001df0d) main_sp_fs_ribbon_scheduler_pane

0xe823,	// (0x0001df15) bg_main_sp_fs_ribbon_pane_g1

0xe82c,	// (0x0001df1e) bg_main_sp_fs_ribbon_pane_g2

0xe835,	// (0x0001df27) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001f4d1) bg_main_sp_fs_ribbon_pane_g

0xe83d,	// (0x0001df2f) main_sp_fs_ribbon_scheduler_pane_g1

0xe846,	// (0x0001df38) main_sp_fs_ribbon_scheduler_pane_g2

0xe84f,	// (0x0001df41) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001f4d8) main_sp_fs_ribbon_scheduler_pane_g

0xe858,	// (0x0001df4a) list_cale_mrui_pane

0x8779,	// (0x00017e6b) sp_fs_scroll_pane_cp07_ParamLimits

0x8779,	// (0x00017e6b) sp_fs_scroll_pane_cp07

0x8795,	// (0x00017e87) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8795,	// (0x00017e87) bg_sp_fs_schedule_viewer_highlight

0xe865,	// (0x0001df57) list_single_sp_fs_schedule_track_pane_cp01

0xe86d,	// (0x0001df5f) list_sp_fs_schedule_track_pane

0xe875,	// (0x0001df67) sp_fs_scroll_pane_cp06_ParamLimits

0xe875,	// (0x0001df67) sp_fs_scroll_pane_cp06

0xc36d,	// (0x0001ba5f) bgmain_sp_fs_calendar_pane_g1

0x87a7,	// (0x00017e99) list_single_cale_mrui_pane_ParamLimits

0x87a7,	// (0x00017e99) list_single_cale_mrui_pane

0xe887,	// (0x0001df79) list_single_cale_mrui_row_pane_ParamLimits

0xe887,	// (0x0001df79) list_single_cale_mrui_row_pane

0xe89d,	// (0x0001df8f) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe89d,	// (0x0001df8f) list_single_cale_mrui_row_pane_g1

0xe8e2,	// (0x0001dfd4) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8e2,	// (0x0001dfd4) list_single_cale_mrui_row_pane_t1

0x87bc,	// (0x00017eae) list_single_cale_mrui_row_pane_t2_ParamLimits

0x87bc,	// (0x00017eae) list_single_cale_mrui_row_pane_t2

0xe8f4,	// (0x0001dfe6) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8f4,	// (0x0001dfe6) list_single_cale_mrui_row_pane_t3

0xe923,	// (0x0001e015) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe923,	// (0x0001e015) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001f4e6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001f4e6) list_single_cale_mrui_row_pane_t

0x8824,	// (0x00017f16) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8824,	// (0x00017f16) list_single_cmail_header_editor_pane_bg_cp01

0x884a,	// (0x00017f3c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x884a,	// (0x00017f3c) list_single_cmail_header_editor_pane_bg_cp02

0x886a,	// (0x00017f5c) main_radioblah_text_pane_t1_ParamLimits

0x886a,	// (0x00017f5c) main_radioblah_text_pane_t1

0xe952,	// (0x0001e044) cam6_indi_pane_cp01

0xe95a,	// (0x0001e04c) cam6_mode_pane_cp01

0xe962,	// (0x0001e054) cam6_pano_pane

0xe96b,	// (0x0001e05d) cam6_zoom_pane_cp01

0xe975,	// (0x0001e067) cam6_pano_image_pane

0xe97e,	// (0x0001e070) cam6_pano_pane_g1

0xdf4c,	// (0x0001d63e) cam6_pano_pane_g2

0xe987,	// (0x0001e079) cam6_pano_pane_g3

0xe990,	// (0x0001e082) cam6_pano_pane_g4

0xc8f3,	// (0x0001bfe5) cam6_pano_pane_g5

0xe999,	// (0x0001e08b) cam6_pano_pane_g6

0xe9a1,	// (0x0001e093) cam6_pano_pane_g7

0xe9a9,	// (0x0001e09b) cam6_pano_pane_g8

0xe9b2,	// (0x0001e0a4) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001f4ef) cam6_pano_pane_g

0x95af,	// (0x00018ca1) main_browser_tag_pane

0xe6ce,	// (0x0001ddc0) grid_navstr_albumart_pane

0xe9bd,	// (0x0001e0af) cell_navstr_albumart_pane_ParamLimits

0xe9bd,	// (0x0001e0af) cell_navstr_albumart_pane

0xe9dc,	// (0x0001e0ce) cell_navstr_albumart_pane_g1

0xbc6d,	// (0x0001b35f) cell_navstr_albumart_pane_g2

0xbc7d,	// (0x0001b36f) cell_navstr_albumart_pane_g3

0xbc75,	// (0x0001b367) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001f502) cell_navstr_albumart_pane_g

0x8885,	// (0x00017f77) bt_list_pane_ParamLimits

0x8885,	// (0x00017f77) bt_list_pane

0x889b,	// (0x00017f8d) bt_list_pane_t1

0x88aa,	// (0x00017f9c) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001f50b) bt_list_pane_t

0x95af,	// (0x00018ca1) main_cale_prevew_pane

0x88b9,	// (0x00017fab) popup_cale_preview_window_ParamLimits

0x88b9,	// (0x00017fab) popup_cale_preview_window

0x9610,	// (0x00018d02) bg_popup_preview_window_pane_cp05_ParamLimits

0x9610,	// (0x00018d02) bg_popup_preview_window_pane_cp05

0xe9e4,	// (0x0001e0d6) list_cale_preview_pane_ParamLimits

0xe9e4,	// (0x0001e0d6) list_cale_preview_pane

0x88d6,	// (0x00017fc8) list_double_cale_preview_pane_ParamLimits

0x88d6,	// (0x00017fc8) list_double_cale_preview_pane

0x88ea,	// (0x00017fdc) list_single_cale_preview_pane_ParamLimits

0x88ea,	// (0x00017fdc) list_single_cale_preview_pane

0x8902,	// (0x00017ff4) list_single_cale_preview_pane_g1

0x890a,	// (0x00017ffc) list_single_cale_preview_pane_t1_ParamLimits

0x890a,	// (0x00017ffc) list_single_cale_preview_pane_t1

0x891f,	// (0x00018011) list_double_cale_preview_pane_g1

0x8927,	// (0x00018019) list_double_cale_preview_pane_t1_ParamLimits

0x8927,	// (0x00018019) list_double_cale_preview_pane_t1

0x893c,	// (0x0001802e) list_double_cale_preview_pane_t2_ParamLimits

0x893c,	// (0x0001802e) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001f510) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001f510) list_double_cale_preview_pane_t

0x95af,	// (0x00018ca1) main_ezdial_pane

0x9610,	// (0x00018d02) main_sp_fs_email_pane_ParamLimits

0x7e79,	// (0x0001756b) cmail_ddmenu_btn01_pane_ParamLimits

0x7e79,	// (0x0001756b) cmail_ddmenu_btn01_pane

0x7e8c,	// (0x0001757e) cmail_ddmenu_btn02_pane_ParamLimits

0x7e8c,	// (0x0001757e) cmail_ddmenu_btn02_pane

0x7eaf,	// (0x000175a1) cmail_ddmenu_btn03_pane_ParamLimits

0x7eaf,	// (0x000175a1) cmail_ddmenu_btn03_pane

0x7eda,	// (0x000175cc) main_sp_fs_ctrlbar_pane_ParamLimits

0x7efe,	// (0x000175f0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x850b,	// (0x00017bfd) list_cmail_body_pane_ParamLimits

0x8559,	// (0x00017c4b) bg_button_pane_cp12

0xe633,	// (0x0001dd25) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe633,	// (0x0001dd25) list_single_cmail_header_detail_pane_g3

0xe640,	// (0x0001dd32) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe640,	// (0x0001dd32) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001f493) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001f493) list_single_cmail_header_detail_pane_t

0xe736,	// (0x0001de28) phacti_term_pane_t2_ParamLimits

0xe736,	// (0x0001de28) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001f49d) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001f49d) phacti_term_pane_t

0xe9f0,	// (0x0001e0e2) aid_size_list_single_double

0x8954,	// (0x00018046) popup_ezdial_listscroll_window

0x8970,	// (0x00018062) popup_number_entry_window_cp01

0xa9a0,	// (0x0001a092) bg_popup_call_pane_cp09

0xe9fc,	// (0x0001e0ee) ezdial_list_pane

0xea04,	// (0x0001e0f6) scroll_pane_cp23

0xbe60,	// (0x0001b552) bg_button_pane_cp028_ParamLimits

0xbe60,	// (0x0001b552) bg_button_pane_cp028

0x897e,	// (0x00018070) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x897e,	// (0x00018070) cmail_ddmenu_btn01_pane_g1

0x898d,	// (0x0001807f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x898d,	// (0x0001807f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001f515) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001f515) cmail_ddmenu_btn01_pane_g

0xea0c,	// (0x0001e0fe) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea0c,	// (0x0001e0fe) cmail_ddmenu_btn01_pane_t1

0xbe60,	// (0x0001b552) bg_button_pane_cp029_ParamLimits

0xbe60,	// (0x0001b552) bg_button_pane_cp029

0x89a3,	// (0x00018095) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x89a3,	// (0x00018095) cmail_ddmenu_btn02_pane_g1

0x89be,	// (0x000180b0) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x89be,	// (0x000180b0) cmail_ddmenu_btn02_pane_t1

0x9610,	// (0x00018d02) bg_button_pane_cp031_ParamLimits

0x9610,	// (0x00018d02) bg_button_pane_cp031

0x89a3,	// (0x00018095) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x89a3,	// (0x00018095) cmail_ddmenu_btn03_pane_g1

0x89be,	// (0x000180b0) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x89be,	// (0x000180b0) cmail_ddmenu_btn03_pane_t1

0x568d,	// (0x00014d7f) cell_dialer2_keypad_pane_t1_ParamLimits

0x56a7,	// (0x00014d99) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x56a7,	// (0x00014d99) cell_dialer2_keypad_pane_t1_copy1

0x7719,	// (0x00016e0b) ncimui_group_button_pane

0x9610,	// (0x00018d02) main_sp_fs_calendar_pane_ParamLimits

0xd38c,	// (0x0001ca7e) list_single_cmail_header_caption_pane_ParamLimits

0xe781,	// (0x0001de73) aid_recal_txt_sm_pane

0x95af,	// (0x00018ca1) mian_recal_day_pane

0xe7c3,	// (0x0001deb5) popup_sp_fs_cale_preview_window_ParamLimits

0xea22,	// (0x0001e114) list_recal_day_pane

0xea65,	// (0x0001e157) list_single_recal_day_pane_ParamLimits

0xea65,	// (0x0001e157) list_single_recal_day_pane

0xea77,	// (0x0001e169) list_single_recal_day_pane_g1_ParamLimits

0xea77,	// (0x0001e169) list_single_recal_day_pane_g1

0xea83,	// (0x0001e175) list_single_recal_day_pane_g2_ParamLimits

0xea83,	// (0x0001e175) list_single_recal_day_pane_g2

0xea8f,	// (0x0001e181) list_single_recal_day_pane_g3_ParamLimits

0xea8f,	// (0x0001e181) list_single_recal_day_pane_g3

0x89e5,	// (0x000180d7) list_single_recal_day_pane_g4_ParamLimits

0x89e5,	// (0x000180d7) list_single_recal_day_pane_g4

0xea9b,	// (0x0001e18d) list_single_recal_day_pane_g5_ParamLimits

0xea9b,	// (0x0001e18d) list_single_recal_day_pane_g5

0xeaa7,	// (0x0001e199) list_single_recal_day_pane_g6_ParamLimits

0xeaa7,	// (0x0001e199) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001f524) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001f524) list_single_recal_day_pane_g

0xeabb,	// (0x0001e1ad) list_single_recal_day_pane_t1

0xeacd,	// (0x0001e1bf) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001f52f) list_single_recal_day_pane_t

0x89fd,	// (0x000180ef) ncimui_query_button_pane_ParamLimits

0x89fd,	// (0x000180ef) ncimui_query_button_pane

0x8a0d,	// (0x000180ff) ncimui_query_button_pane_t1_ParamLimits

0x8a0d,	// (0x000180ff) ncimui_query_button_pane_t1

0xeadf,	// (0x0001e1d1) ncimui_query_button_pane_t2_ParamLimits

0xeadf,	// (0x0001e1d1) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001f534) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001f534) ncimui_query_button_pane_t

0x8a20,	// (0x00018112) query_button_pane_ParamLimits

0x8a20,	// (0x00018112) query_button_pane

0x95af,	// (0x00018ca1) bg_button_pane_cp0028

0xeaf2,	// (0x0001e1e4) query_button_pane_t1

0x365a,	// (0x00012d4c) main_tport_pane_ParamLimits

0x83bb,	// (0x00017aad) bg_popup_window_pane_cp01_ParamLimits

0x83bb,	// (0x00017aad) bg_popup_window_pane_cp01

0x83d6,	// (0x00017ac8) heading_pane_cp08_ParamLimits

0x83d6,	// (0x00017ac8) heading_pane_cp08

0x83e9,	// (0x00017adb) heading_pane_cp07_ParamLimits

0x83e9,	// (0x00017adb) heading_pane_cp07

0x849a,	// (0x00017b8c) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001f480) cell_tport_appsw_pane_g

0xab23,	// (0x0001a215) input_candi_list_open_g1

0xa40c,	// (0x00019afe) list_cale_time_pane_g6_ParamLimits

0xa40c,	// (0x00019afe) list_cale_time_pane_g6

0x4464,	// (0x00013b56) aid_size_touch_calib_1_ParamLimits

0x4464,	// (0x00013b56) aid_size_touch_calib_1

0x4476,	// (0x00013b68) aid_size_touch_calib_2_ParamLimits

0x4476,	// (0x00013b68) aid_size_touch_calib_2

0x448e,	// (0x00013b80) aid_size_touch_calib_3_ParamLimits

0x448e,	// (0x00013b80) aid_size_touch_calib_3

0x44ac,	// (0x00013b9e) aid_size_touch_calib_4_ParamLimits

0x44ac,	// (0x00013b9e) aid_size_touch_calib_4

0x44c4,	// (0x00013bb6) main_touch_calib_button_group_pane_ParamLimits

0x44c4,	// (0x00013bb6) main_touch_calib_button_group_pane

0x44dc,	// (0x00013bce) main_touch_calib_pane_g1_ParamLimits

0x44ee,	// (0x00013be0) main_touch_calib_pane_g2_ParamLimits

0x4500,	// (0x00013bf2) main_touch_calib_pane_g3_ParamLimits

0x4512,	// (0x00013c04) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0001ee48) main_touch_calib_pane_g_ParamLimits

0x4524,	// (0x00013c16) main_touch_calib_pane_t1_ParamLimits

0x453e,	// (0x00013c30) main_touch_calib_pane_t2_ParamLimits

0x4558,	// (0x00013c4a) main_touch_calib_pane_t3_ParamLimits

0x456c,	// (0x00013c5e) main_touch_calib_pane_t4_ParamLimits

0x4582,	// (0x00013c74) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0001ee51) main_touch_calib_pane_t_ParamLimits

0xc6a9,	// (0x0001bd9b) list_single_fp_cale_pane_g3_ParamLimits

0xc6a9,	// (0x0001bd9b) list_single_fp_cale_pane_g3

0x9610,	// (0x00018d02) bg_button_pane_cp012_ParamLimits

0x9610,	// (0x00018d02) bg_vkb2_func_pane_cp03_ParamLimits

0x67a2,	// (0x00015e94) cell_vitu2_function_top_pane_g1_ParamLimits

0x9610,	// (0x00018d02) bg_vkb2_func_pane_cp04_ParamLimits

0x76a7,	// (0x00016d99) main_ncimui_button_group_pane_ParamLimits

0x76a7,	// (0x00016d99) main_ncimui_button_group_pane

0x7707,	// (0x00016df9) main_ncimui_pane_t3_ParamLimits

0x7707,	// (0x00016df9) main_ncimui_pane_t3

0xe6e4,	// (0x0001ddd6) phacti_button_group_pane

0xe9f0,	// (0x0001e0e2) aid_size_list_single_double_ParamLimits

0x8954,	// (0x00018046) popup_ezdial_listscroll_window_ParamLimits

0x8970,	// (0x00018062) popup_number_entry_window_cp01_ParamLimits

0x8a33,	// (0x00018125) phacti_button_pane_ParamLimits

0x8a33,	// (0x00018125) phacti_button_pane

0x95af,	// (0x00018ca1) bg_button_pane_cp14

0xeb00,	// (0x0001e1f2) phacti_button_pane_t1

0x8a44,	// (0x00018136) main_touch_calib_button_pane_ParamLimits

0x8a44,	// (0x00018136) main_touch_calib_button_pane

0x9d73,	// (0x00019465) bg_button_pane_cp18_ParamLimits

0x9d73,	// (0x00019465) bg_button_pane_cp18

0xeb0e,	// (0x0001e200) main_touch_calib_button_pane_t1_ParamLimits

0xeb0e,	// (0x0001e200) main_touch_calib_button_pane_t1

0xeb24,	// (0x0001e216) main_touch_calib_button_pane_t2_ParamLimits

0xeb24,	// (0x0001e216) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001f539) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001f539) main_touch_calib_button_pane_t

0x95af,	// (0x00018ca1) cell_ncimui_button_pane

0x95af,	// (0x00018ca1) bg_button_pane_cp032

0xeb42,	// (0x0001e234) cell_ncimui_button_pane_t1

0xce98,	// (0x0001c58a) image3_infobar_pane_ParamLimits

0xce98,	// (0x0001c58a) image3_infobar_pane

0x7ad5,	// (0x000171c7) fs_bigclock_status_pane_ParamLimits

0x7ad5,	// (0x000171c7) fs_bigclock_status_pane

0x7ae2,	// (0x000171d4) main_fs_bigclock_clock_pane_ParamLimits

0x7ae2,	// (0x000171d4) main_fs_bigclock_clock_pane

0x7af6,	// (0x000171e8) main_fs_bigclock_indi_pane_ParamLimits

0x7af6,	// (0x000171e8) main_fs_bigclock_indi_pane

0x7b11,	// (0x00017203) main_fs_bigclock_swipe_pane_ParamLimits

0x7b11,	// (0x00017203) main_fs_bigclock_swipe_pane

0x95af,	// (0x00018ca1) main_fs_clock_dumped_data

0xe059,	// (0x0001d74b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe059,	// (0x0001d74b) list_single_fs_bigclock_indicator_pane_g1

0xe083,	// (0x0001d775) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe083,	// (0x0001d775) list_single_fs_bigclock_indicator_pane_g2

0xe09d,	// (0x0001d78f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe09d,	// (0x0001d78f) list_single_fs_bigclock_indicator_pane_g3

0xe0b7,	// (0x0001d7a9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0b7,	// (0x0001d7a9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0001f366) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0001f366) list_single_fs_bigclock_indicator_pane_g

0xe0e2,	// (0x0001d7d4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0e2,	// (0x0001d7d4) list_single_fs_bigclock_indicator_pane_t1

0xe10a,	// (0x0001d7fc) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe10a,	// (0x0001d7fc) list_single_fs_bigclock_indicator_pane_t2

0xe132,	// (0x0001d824) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe132,	// (0x0001d824) list_single_fs_bigclock_indicator_pane_t3

0xe15a,	// (0x0001d84c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe15a,	// (0x0001d84c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0001f371) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0001f371) list_single_fs_bigclock_indicator_pane_t

0xeb50,	// (0x0001e242) image3_infobar_fav_pane_ParamLimits

0xeb50,	// (0x0001e242) image3_infobar_fav_pane

0xeb60,	// (0x0001e252) image3_infobar_loc_pane_ParamLimits

0xeb60,	// (0x0001e252) image3_infobar_loc_pane

0xeb76,	// (0x0001e268) image3_infobar_time_pane_ParamLimits

0xeb76,	// (0x0001e268) image3_infobar_time_pane

0xc36d,	// (0x0001ba5f) image3_infobar_time_pane_g1

0xeb86,	// (0x0001e278) image3_infobar_time_pane_t1

0xc36d,	// (0x0001ba5f) image3_infobar_loc_pane_g1

0xeb94,	// (0x0001e286) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001f53e) image3_infobar_loc_pane_g

0xeb9c,	// (0x0001e28e) image3_infobar_loc_pane_t1

0xc36d,	// (0x0001ba5f) image3_infobar_fav_pane_g1

0xebaa,	// (0x0001e29c) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001f543) image3_infobar_fav_pane_g

0xebb2,	// (0x0001e2a4) fs_bigclock_status_battery_pane

0xebbb,	// (0x0001e2ad) fs_bigclock_status_signal_pane

0xebc4,	// (0x0001e2b6) fs_bigclock_status_title_pane

0xebcd,	// (0x0001e2bf) fs_bigclock_status_signal_pane_g1

0xebd6,	// (0x0001e2c8) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001f548) fs_bigclock_status_signal_pane_g

0xebde,	// (0x0001e2d0) fs_bigclock_status_battery_pane_g1

0xebe7,	// (0x0001e2d9) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001f54d) fs_bigclock_status_battery_pane_g

0xebef,	// (0x0001e2e1) fs_bigclock_status_title_pane_t1

0xc36d,	// (0x0001ba5f) main_fs_bigclock_clock_pane_g1

0xebfd,	// (0x0001e2ef) main_fs_bigclock_clock_pane_g2

0xebfd,	// (0x0001e2ef) main_fs_bigclock_clock_pane_g3

0xebfd,	// (0x0001e2ef) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001f552) main_fs_bigclock_clock_pane_g

0xec05,	// (0x0001e2f7) main_fs_bigclock_clock_pane_t1

0xec13,	// (0x0001e305) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001f55b) main_fs_bigclock_clock_pane_t

0x8a59,	// (0x0001814b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8a59,	// (0x0001814b) list_single_fs_bigclock_indicator_pane

0x8a6a,	// (0x0001815c) list_single_fs_bigclock_pane_ParamLimits

0x8a6a,	// (0x0001815c) list_single_fs_bigclock_pane

0xec2b,	// (0x0001e31d) main_fs_bigclock_indicator_pane_t1

0xec3a,	// (0x0001e32c) list_single_fs_bigclock_pane_g1

0xec42,	// (0x0001e334) list_single_fs_bigclock_pane_t1

0xc36d,	// (0x0001ba5f) main_fs_bigclock_swipe_pane_g1

0xec85,	// (0x0001e377) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001f56c) main_fs_bigclock_swipe_pane_g

0xec8d,	// (0x0001e37f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec8d,	// (0x0001e37f) main_fs_bigclock_swipe_pane_t1

0x236a,	// (0x00011a5c) call_type_pane_ParamLimits

0x95af,	// (0x00018ca1) main_btmg_pane

0xe8c9,	// (0x0001dfbb) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8c9,	// (0x0001dfbb) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001f4df) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001f4df) list_single_cale_mrui_row_pane_g

0xea4b,	// (0x0001e13d) list_recal_vselct_arw_lo_pane

0xea53,	// (0x0001e145) list_recal_vselct_arw_up_pane

0xea5b,	// (0x0001e14d) list_recal_vselct_pane

0x8acd,	// (0x000181bf) btmg_button_pane

0x8ad7,	// (0x000181c9) main_btmg_pane_g1

0x95af,	// (0x00018ca1) bg_button_pane_cp044

0xecaa,	// (0x0001e39c) btmg_button_pane_t1

0xbe4c,	// (0x0001b53e) aid_listscroll_gen

0x9610,	// (0x00018d02) main_cntbar_detail_pane

0xe608,	// (0x0001dcfa) list_cmail_folder_pane

0xe618,	// (0x0001dd0a) sp_fs_scroll_pane_cp03_ParamLimits

0x8ae1,	// (0x000181d3) list_single_fs_dyc_pane_cp01_ParamLimits

0x8ae1,	// (0x000181d3) list_single_fs_dyc_pane_cp01

0xecb8,	// (0x0001e3aa) aid_size_cmail_indent

0xecc1,	// (0x0001e3b3) list_single_dyc_row_pane_cp01

0x8b29,	// (0x0001821b) cntbar_detail_list_pane_ParamLimits

0x8b29,	// (0x0001821b) cntbar_detail_list_pane

0x8b7b,	// (0x0001826d) main_cntbar_detail_cont_pane_ParamLimits

0x8b7b,	// (0x0001826d) main_cntbar_detail_cont_pane

0x228d,	// (0x0001197f) scroll_pane_cp032_ParamLimits

0x228d,	// (0x0001197f) scroll_pane_cp032

0x8b8f,	// (0x00018281) cntbar_detail_list_event_pane_ParamLimits

0x8b8f,	// (0x00018281) cntbar_detail_list_event_pane

0x8b3b,	// (0x0001822d) cntbar_detail_list_shct_pane

0xa278,	// (0x0001996a) aid_list_gen

0xecca,	// (0x0001e3bc) aid_scroll

0xecd3,	// (0x0001e3c5) aid_size_touch_scroll_bar

0x6e89,	// (0x0001657b) aid_list_double

0xecdc,	// (0x0001e3ce) aid_list_single

0x6e89,	// (0x0001657b) aid_list_single_lg

0xece5,	// (0x0001e3d7) aid_list_z_g_a_sm

0xeced,	// (0x0001e3df) aid_list_z_g_d

0xecf5,	// (0x0001e3e7) aid_txt_z_prm

0x8b9f,	// (0x00018291) aid_txt_z_prm_cp01

0x8bad,	// (0x0001829f) aid_txt_z_sec

0x8bbb,	// (0x000182ad) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8bbb,	// (0x000182ad) main_cntbar_detail_cont_pane_g1

0x8bcf,	// (0x000182c1) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8bcf,	// (0x000182c1) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001f571) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001f571) main_cntbar_detail_cont_pane_g

0xed03,	// (0x0001e3f5) main_cntbar_detail_cont_pane_t1

0xed11,	// (0x0001e403) main_cntbar_detail_cont_pane_t2

0xed1f,	// (0x0001e411) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001f576) main_cntbar_detail_cont_pane_t

0x8bdf,	// (0x000182d1) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8bdf,	// (0x000182d1) cell_cntbar_detail_list_shct_pane

0xed2d,	// (0x0001e41f) cntbar_detail_list_shct_pane_g1

0xed36,	// (0x0001e428) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001f57d) cntbar_detail_list_shct_pane_g

0x8bf1,	// (0x000182e3) cntbar_detail_list_event_pane_g1_ParamLimits

0x8bf1,	// (0x000182e3) cntbar_detail_list_event_pane_g1

0x8bfd,	// (0x000182ef) cntbar_detail_list_event_pane_g2_ParamLimits

0x8bfd,	// (0x000182ef) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001f582) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001f582) cntbar_detail_list_event_pane_g

0x8c6b,	// (0x0001835d) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c6b,	// (0x0001835d) cntbar_detail_list_event_pane_t1

0x8c80,	// (0x00018372) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c80,	// (0x00018372) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001f58f) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001f58f) cntbar_detail_list_event_pane_t

0xc36d,	// (0x0001ba5f) cell_cntbar_detail_list_shct_pane_g1

0x2710,	// (0x00011e02) navi_pane_mv_g3

0x9610,	// (0x00018d02) main_cntbar_detail_pane_ParamLimits

0x95af,	// (0x00018ca1) main_notif_wgt_pane

0xcc2c,	// (0x0001c31e) aid_tch_main_mp4_pane_g4

0xce2a,	// (0x0001c51c) popup_slider_window_cp02

0xea41,	// (0x0001e133) list_recal_day_event_pane

0x8af9,	// (0x000181eb) cntbar_detail_btn_pane_ParamLimits

0x8af9,	// (0x000181eb) cntbar_detail_btn_pane

0x8b11,	// (0x00018203) cntbar_detail_btn_pane_cp01_ParamLimits

0x8b11,	// (0x00018203) cntbar_detail_btn_pane_cp01

0x8b3b,	// (0x0001822d) cntbar_detail_list_shct_pane_ParamLimits

0x8b4b,	// (0x0001823d) cntbar_detail_pane_g1_ParamLimits

0x8b4b,	// (0x0001823d) cntbar_detail_pane_g1

0x8b5f,	// (0x00018251) cntbar_detail_pane_t1_ParamLimits

0x8b5f,	// (0x00018251) cntbar_detail_pane_t1

0x8c09,	// (0x000182fb) cntbar_detail_list_event_pane_g3_ParamLimits

0x8c09,	// (0x000182fb) cntbar_detail_list_event_pane_g3

0x8c21,	// (0x00018313) cntbar_detail_list_event_pane_g4_ParamLimits

0x8c21,	// (0x00018313) cntbar_detail_list_event_pane_g4

0x8c39,	// (0x0001832b) cntbar_detail_list_event_pane_g5_ParamLimits

0x8c39,	// (0x0001832b) cntbar_detail_list_event_pane_g5

0x8c51,	// (0x00018343) cntbar_detail_list_event_pane_g6_ParamLimits

0x8c51,	// (0x00018343) cntbar_detail_list_event_pane_g6

0x8c95,	// (0x00018387) cntbar_detail_list_event_pane_t3_ParamLimits

0x8c95,	// (0x00018387) cntbar_detail_list_event_pane_t3

0x8ca7,	// (0x00018399) popup_notif_wgt_window_ParamLimits

0x8ca7,	// (0x00018399) popup_notif_wgt_window

0x8cc0,	// (0x000183b2) popup_submenu_window_cp01_ParamLimits

0x8cc0,	// (0x000183b2) popup_submenu_window_cp01

0xa9a0,	// (0x0001a092) bg_popup_window_pane_cp10

0xed3f,	// (0x0001e431) listscroll_notif_wgt_pane

0xed51,	// (0x0001e443) list_notif_wgt_window

0xed5a,	// (0x0001e44c) scroll_pane_cp033

0x8cd4,	// (0x000183c6) list_notif_wgt_row_pane_ParamLimits

0x8cd4,	// (0x000183c6) list_notif_wgt_row_pane

0xed63,	// (0x0001e455) aid_size_list_notif_wgt_del

0xed70,	// (0x0001e462) list_notif_wgt_row_pane_g1

0xed90,	// (0x0001e482) list_notif_wgt_row_pane_g2

0xed9c,	// (0x0001e48e) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001f596) list_notif_wgt_row_pane_g

0xeda9,	// (0x0001e49b) list_notif_wgt_row_pane_t1

0xedbe,	// (0x0001e4b0) list_notif_wgt_row_pane_t2

0xedd0,	// (0x0001e4c2) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001f59d) list_notif_wgt_row_pane_t

0xd411,	// (0x0001cb03) list_recal_day_event_pane_g1

0xede2,	// (0x0001e4d4) list_recal_day_event_pane_t1

0x95af,	// (0x00018ca1) bg_button_pane_cp045

0xedf1,	// (0x0001e4e3) cntbar_detail_btn_pane_t1

0xbe60,	// (0x0001b552) main_callh_pane_ParamLimits

0xbe60,	// (0x0001b552) main_callh_pane

0x95af,	// (0x00018ca1) main_coverflow0_pane

0x95af,	// (0x00018ca1) main_wgtman_pane

0x7b1f,	// (0x00017211) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7b1f,	// (0x00017211) main_fs_bigclock_unlock_btn_pane

0x8492,	// (0x00017b84) bg_button_pane_cp16

0x84a2,	// (0x00017b94) cell_tport_appsw_pane_g3

0x8ce4,	// (0x000183d6) cf0_flow_pane_ParamLimits

0x8ce4,	// (0x000183d6) cf0_flow_pane

0xedff,	// (0x0001e4f1) listscroll_cf0_pane

0xee0a,	// (0x0001e4fc) main_cf0_pane_g1

0x8cf9,	// (0x000183eb) main_cf0_pane_t1_ParamLimits

0x8cf9,	// (0x000183eb) main_cf0_pane_t1

0x8d10,	// (0x00018402) main_cf0_pane_t2_ParamLimits

0x8d10,	// (0x00018402) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001f5a9) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001f5a9) main_cf0_pane_t

0xee1c,	// (0x0001e50e) scroll_pane_cp11

0x8d27,	// (0x00018419) cf0_flow_pane_g1

0x8d33,	// (0x00018425) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001f5ae) cf0_flow_pane_g

0x8d3f,	// (0x00018431) cf0_flow_pane_t1

0x95af,	// (0x00018ca1) main_call6_pane

0x95af,	// (0x00018ca1) main_calllock_pane

0x8d51,	// (0x00018443) call6_btn_grp_pane_ParamLimits

0x8d51,	// (0x00018443) call6_btn_grp_pane

0x8d6b,	// (0x0001845d) call6_pane_g1_ParamLimits

0x8d6b,	// (0x0001845d) call6_pane_g1

0x8d81,	// (0x00018473) popup_call6_1st_window_ParamLimits

0x8d81,	// (0x00018473) popup_call6_1st_window

0x8d92,	// (0x00018484) popup_call6_2nd_window_ParamLimits

0x8d92,	// (0x00018484) popup_call6_2nd_window

0x8da3,	// (0x00018495) cell_call6_btn_pane_ParamLimits

0x8da3,	// (0x00018495) cell_call6_btn_pane

0xa9a0,	// (0x0001a092) bg_popup_call2_in_pane_cp03

0xee27,	// (0x0001e519) popup_call6_1st_window_g1

0xee2f,	// (0x0001e521) popup_call6_1st_window_g2

0xee37,	// (0x0001e529) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001f5b3) popup_call6_1st_window_g

0xee3f,	// (0x0001e531) popup_call6_1st_window_t1

0xee4e,	// (0x0001e540) popup_call6_1st_window_t2

0xee5e,	// (0x0001e550) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001f5ba) popup_call6_1st_window_t

0xa9a0,	// (0x0001a092) bg_popup_call2_in_pane_cp04

0xee27,	// (0x0001e519) popup_call6_2nd_window_g1

0xee2f,	// (0x0001e521) popup_call6_2nd_window_g2

0xee37,	// (0x0001e529) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001f5b3) popup_call6_2nd_window_g

0xee3f,	// (0x0001e531) popup_call6_2nd_window_t1

0x95af,	// (0x00018ca1) bg_button_pane_cp15

0xee6e,	// (0x0001e560) cell_call6_btn_pane_g1

0xee77,	// (0x0001e569) cell_call6_btn_pane_t1

0x8db7,	// (0x000184a9) listscroll_wgtman_pane_ParamLimits

0x8db7,	// (0x000184a9) listscroll_wgtman_pane

0x8dd8,	// (0x000184ca) wgtman_btn_pane_ParamLimits

0x8dd8,	// (0x000184ca) wgtman_btn_pane

0xa866,	// (0x00019f58) aid_scroll_copy1

0xee86,	// (0x0001e578) list_wgtman_pane

0x8e1b,	// (0x0001850d) wgtman_btn_pane_g1_ParamLimits

0x8e1b,	// (0x0001850d) wgtman_btn_pane_g1

0x8e47,	// (0x00018539) wgtman_btn_pane_t1_ParamLimits

0x8e47,	// (0x00018539) wgtman_btn_pane_t1

0xee90,	// (0x0001e582) wgtman_btn_pane_t2_ParamLimits

0xee90,	// (0x0001e582) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001f5c1) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001f5c1) wgtman_btn_pane_t

0xd3e5,	// (0x0001cad7) listrow_wgtman_pane_ParamLimits

0xd3e5,	// (0x0001cad7) listrow_wgtman_pane

0x8e84,	// (0x00018576) listrow_wgtman_pane_g1

0x8e91,	// (0x00018583) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001f5c6) listrow_wgtman_pane_g

0x8eaf,	// (0x000185a1) listrow_wgtman_pane_t1

0x8ec7,	// (0x000185b9) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001f5cb) listrow_wgtman_pane_t

0x8eed,	// (0x000185df) wait_bar_pane_cp09

0xeea7,	// (0x0001e599) main_calllock_btn_pane

0xeeb1,	// (0x0001e5a3) main_calllock_pane_g1

0x95af,	// (0x00018ca1) bg_button_pane_cp17

0xeebd,	// (0x0001e5af) main_calllock_btn_pane_g1

0xeec6,	// (0x0001e5b8) main_calllock_btn_pane_t1

0x95af,	// (0x00018ca1) main_dialer3_pane

0x95af,	// (0x00018ca1) main_fmrd2_pane

0xc36d,	// (0x0001ba5f) main_fs_bigclock_unlock_btn_pane_g1

0xeedd,	// (0x0001e5cf) main_fs_bigclock_unlock_btn_pane_t1

0x8eff,	// (0x000185f1) area_fmrd2_info_pane_ParamLimits

0x8eff,	// (0x000185f1) area_fmrd2_info_pane

0x8f0e,	// (0x00018600) area_fmrd2_visual_pane_ParamLimits

0x8f0e,	// (0x00018600) area_fmrd2_visual_pane

0x8f1c,	// (0x0001860e) fmrd2_indi_pane_ParamLimits

0x8f1c,	// (0x0001860e) fmrd2_indi_pane

0x8f29,	// (0x0001861b) area_fmrd2_visual_pane_g1

0x8f31,	// (0x00018623) area_fmrd2_visual_pane_t1

0x8f41,	// (0x00018633) area_fmrd2_visual_pane_t2

0x8f51,	// (0x00018643) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001f5d5) area_fmrd2_visual_pane_t

0x8f61,	// (0x00018653) area_fmrd2_info_pane_g1

0x8f69,	// (0x0001865b) area_fmrd2_info_pane_t1

0x8f79,	// (0x0001866b) area_fmrd2_info_pane_t2

0x8f89,	// (0x0001867b) area_fmrd2_info_pane_t3

0x8f99,	// (0x0001868b) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001f5dc) area_fmrd2_info_pane_t

0x8fa9,	// (0x0001869b) fmrd2_indi_pane_t1

0x8fb9,	// (0x000186ab) fmrd2_indi_pane_t2

0x8fc9,	// (0x000186bb) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001f5e5) fmrd2_indi_pane_t

0xe0c6,	// (0x0001d7b8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0c6,	// (0x0001d7b8) list_single_fs_bigclock_indicator_pane_g5

0xe16f,	// (0x0001d861) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe16f,	// (0x0001d861) list_single_fs_bigclock_indicator_pane_t5

0x86a1,	// (0x00017d93) aid_cell_bcale_month_pane_ParamLimits

0x86a1,	// (0x00017d93) aid_cell_bcale_month_pane

0x86bf,	// (0x00017db1) bcale_month_pane_ParamLimits

0x86bf,	// (0x00017db1) bcale_month_pane

0x86e1,	// (0x00017dd3) bcale_preview_pane_ParamLimits

0x86e1,	// (0x00017dd3) bcale_preview_pane

0xec42,	// (0x0001e334) list_single_fs_bigclock_pane_t1_ParamLimits

0xec61,	// (0x0001e353) list_single_fs_bigclock_pane_t2_ParamLimits

0xec61,	// (0x0001e353) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001f567) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001f567) list_single_fs_bigclock_pane_t

0xeed5,	// (0x0001e5c7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001f5d0) main_fs_bigclock_unlock_btn_pane_g

0x8fd9,	// (0x000186cb) aid_dia3_key_size_ParamLimits

0x8fd9,	// (0x000186cb) aid_dia3_key_size

0x8fe8,	// (0x000186da) aid_dia3_listrow_size_ParamLimits

0x8fe8,	// (0x000186da) aid_dia3_listrow_size

0x8ffd,	// (0x000186ef) dia3_keypad_fun_pane_ParamLimits

0x8ffd,	// (0x000186ef) dia3_keypad_fun_pane

0x9019,	// (0x0001870b) dia3_keypad_num_pane_ParamLimits

0x9019,	// (0x0001870b) dia3_keypad_num_pane

0x9032,	// (0x00018724) dia3_listscroll_pane_ParamLimits

0x9032,	// (0x00018724) dia3_listscroll_pane

0x9045,	// (0x00018737) dia3_numentry_pane_ParamLimits

0x9045,	// (0x00018737) dia3_numentry_pane

0xeeeb,	// (0x0001e5dd) dia3_list_pane

0xeef6,	// (0x0001e5e8) scroll_pane_cp12

0x95af,	// (0x00018ca1) bg_dia3_numentry_pane

0x9059,	// (0x0001874b) dia3_numentry_pane_t1

0x9068,	// (0x0001875a) cell_dia3_key_num_pane

0x9070,	// (0x00018762) cell_dia3_key0_fun_pane_ParamLimits

0x9070,	// (0x00018762) cell_dia3_key0_fun_pane

0x9084,	// (0x00018776) cell_dia3_key1_fun_pane_ParamLimits

0x9084,	// (0x00018776) cell_dia3_key1_fun_pane

0x909c,	// (0x0001878e) dia3_listrow_pane

0xddc4,	// (0x0001d4b6) bg_dia3_numentry_pane_g1

0x95af,	// (0x00018ca1) bg_button_pane_cp21

0xef01,	// (0x0001e5f3) cell_dia3_key_num_pane_t1

0xef0f,	// (0x0001e601) cell_dia3_key_num_pane_t2

0xef1e,	// (0x0001e610) cell_dia3_key_num_pane_t3

0xef2d,	// (0x0001e61f) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001f5ec) cell_dia3_key_num_pane_t

0x95af,	// (0x00018ca1) bg_button_pane_cp19

0x90ae,	// (0x000187a0) cell_dia3_key0_fun_pane_g1

0x95af,	// (0x00018ca1) bg_button_pane_cp20

0x90b6,	// (0x000187a8) cell_dia3_key1_fun_pane_g1

0x90be,	// (0x000187b0) area_left_week_number_pane

0x90cc,	// (0x000187be) area_top_day_name_pane

0x90df,	// (0x000187d1) frame_month_view_pane

0xef3c,	// (0x0001e62e) grid_month_view_pane

0x90f4,	// (0x000187e6) cell_top_day_name_pane_ParamLimits

0x90f4,	// (0x000187e6) cell_top_day_name_pane

0x9123,	// (0x00018815) cell_area_left_week_number_pane_ParamLimits

0x9123,	// (0x00018815) cell_area_left_week_number_pane

0x9137,	// (0x00018829) cell_month_view_pane_ParamLimits

0x9137,	// (0x00018829) cell_month_view_pane

0xef4a,	// (0x0001e63c) frm_month_g1

0x9166,	// (0x00018858) frm_month_g2

0x9179,	// (0x0001886b) frm_month_g3

0x918c,	// (0x0001887e) frm_month_g4

0x919f,	// (0x00018891) frm_month_g5

0x91b2,	// (0x000188a4) frm_month_g6

0x91c5,	// (0x000188b7) frm_month_g7

0xef57,	// (0x0001e649) frm_month_g8

0x91da,	// (0x000188cc) frm_month_g9

0x91ea,	// (0x000188dc) frm_month_g10

0x91fa,	// (0x000188ec) frm_month_g11

0x920a,	// (0x000188fc) frm_month_g12

0x921c,	// (0x0001890e) frm_month_g13

0x9230,	// (0x00018922) frm_month_g14

0x9244,	// (0x00018936) frm_month_g15

0x9258,	// (0x0001894a) frm_month_g16

0x000f,

0xff03,	// (0x0001f5f5) frm_month_g

0xef64,	// (0x0001e656) cell_top_day_name_pane_t1

0x926c,	// (0x0001895e) cell_area_left_week_number_pane_g1

0x9278,	// (0x0001896a) cell_area_left_week_number_pane_t1

0xc59d,	// (0x0001bc8f) cell_month_view_pane_g1

0x928b,	// (0x0001897d) cell_month_view_pane_t1

0x95af,	// (0x00018ca1) main_fps_pane

0xe392,	// (0x0001da84) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe392,	// (0x0001da84) cmail_ddmenu_btn02_pane_cp1

0xe3ae,	// (0x0001daa0) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3ae,	// (0x0001daa0) cmail_ddmenu_btn02_pane_cp2

0x89b2,	// (0x000180a4) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x89b2,	// (0x000180a4) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001f51a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001f51a) cmail_ddmenu_btn02_pane_g

0x89d3,	// (0x000180c5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x89d3,	// (0x000180c5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001f51f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001f51f) cmail_ddmenu_btn02_pane_t

0x929e,	// (0x00018990) fps_text_pane_ParamLimits

0x929e,	// (0x00018990) fps_text_pane

0x92b5,	// (0x000189a7) main_fps_pane_g1_ParamLimits

0x92b5,	// (0x000189a7) main_fps_pane_g1

0x92cd,	// (0x000189bf) wait_bar_pane_cp010_ParamLimits

0x92cd,	// (0x000189bf) wait_bar_pane_cp010

0x92e0,	// (0x000189d2) fps_text_pane_t1_ParamLimits

0x92e0,	// (0x000189d2) fps_text_pane_t1

0xed7c,	// (0x0001e46e) cam4_image_uncrop_pane_g1

0xed85,	// (0x0001e477) cam4_image_uncrop_pane_g2

0x5b79,	// (0x0001526b) cam4_image_uncrop_pane_g3

0x5b82,	// (0x00015274) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0001efe0) cam4_image_uncrop_pane_g

0x909c,	// (0x0001878e) dia3_listrow_pane_ParamLimits

0x95af,	// (0x00018ca1) main_phob2_pane

0x8461,	// (0x00017b53) cell_tport_appsw_pane_cp02_ParamLimits

0x8461,	// (0x00017b53) cell_tport_appsw_pane_cp02

0x8475,	// (0x00017b67) cell_tport_appsw_pane_cp03_ParamLimits

0x8475,	// (0x00017b67) cell_tport_appsw_pane_cp03

0x95af,	// (0x00018ca1) phob2_contact_card_pane

0x95af,	// (0x00018ca1) phob2_listscroll_pane

0xef77,	// (0x0001e669) phob2_list_pane

0xef7f,	// (0x0001e671) scroll_pane_cp034

0x92f8,	// (0x000189ea) phob2_cc_data_pane_ParamLimits

0x92f8,	// (0x000189ea) phob2_cc_data_pane

0x9319,	// (0x00018a0b) phob2_cc_listscroll_pane_ParamLimits

0x9319,	// (0x00018a0b) phob2_cc_listscroll_pane

0x933b,	// (0x00018a2d) list_double_large_graphic_phob2_pane_ParamLimits

0x933b,	// (0x00018a2d) list_double_large_graphic_phob2_pane

0x934f,	// (0x00018a41) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x934f,	// (0x00018a41) list_double_large_graphic_phob2_pane_g1

0x9365,	// (0x00018a57) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9365,	// (0x00018a57) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001f616) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001f616) list_double_large_graphic_phob2_pane_g

0x9371,	// (0x00018a63) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9371,	// (0x00018a63) list_double_large_graphic_phob2_pane_t1

0x9386,	// (0x00018a78) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9386,	// (0x00018a78) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001f61b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001f61b) list_double_large_graphic_phob2_pane_t

0x95af,	// (0x00018ca1) list_highlight_pane_cp024

0x9398,	// (0x00018a8a) phob2_cc_button_pane

0x93a0,	// (0x00018a92) phob2_cc_data_pane_g1_ParamLimits

0x93a0,	// (0x00018a92) phob2_cc_data_pane_g1

0x93b6,	// (0x00018aa8) phob2_cc_data_pane_g2_ParamLimits

0x93b6,	// (0x00018aa8) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001f620) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001f620) phob2_cc_data_pane_g

0x93c6,	// (0x00018ab8) phob2_cc_data_pane_t1_ParamLimits

0x93c6,	// (0x00018ab8) phob2_cc_data_pane_t1

0x93de,	// (0x00018ad0) phob2_cc_data_pane_t2_ParamLimits

0x93de,	// (0x00018ad0) phob2_cc_data_pane_t2

0x93f8,	// (0x00018aea) phob2_cc_data_pane_t3_ParamLimits

0x93f8,	// (0x00018aea) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001f625) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001f625) phob2_cc_data_pane_t

0xef87,	// (0x0001e679) phob2_cc_list_pane_ParamLimits

0xef87,	// (0x0001e679) phob2_cc_list_pane

0xd4ba,	// (0x0001cbac) scroll_pane_cp035_ParamLimits

0xd4ba,	// (0x0001cbac) scroll_pane_cp035

0x9610,	// (0x00018d02) bg_button_pane_cp033

0xef93,	// (0x0001e685) phob2_cc_button_pane_g1

0xef9f,	// (0x0001e691) phob2_cc_button_pane_t1

0xefb4,	// (0x0001e6a6) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001f62c) phob2_cc_button_pane_t

0x9412,	// (0x00018b04) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9412,	// (0x00018b04) list_double_large_graphic_phob2_cc_pane

0x9426,	// (0x00018b18) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9426,	// (0x00018b18) list_double_large_graphic_phob2_cc_pane_g1

0x9432,	// (0x00018b24) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9432,	// (0x00018b24) list_double_large_graphic_phob2_cc_pane_g2

0x943e,	// (0x00018b30) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x943e,	// (0x00018b30) list_double_large_graphic_phob2_cc_pane_g3

0x944a,	// (0x00018b3c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x944a,	// (0x00018b3c) list_double_large_graphic_phob2_cc_pane_g4

0x9456,	// (0x00018b48) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9456,	// (0x00018b48) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001f631) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001f631) list_double_large_graphic_phob2_cc_pane_g

0x9462,	// (0x00018b54) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9462,	// (0x00018b54) list_double_large_graphic_phob2_cc_pane_t1

0x948b,	// (0x00018b7d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x948b,	// (0x00018b7d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001f63c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001f63c) list_double_large_graphic_phob2_cc_pane_t

0xefc6,	// (0x0001e6b8) list_highlight_pane_cp025_ParamLimits

0xefc6,	// (0x0001e6b8) list_highlight_pane_cp025

0x9610,	// (0x00018d02) bg_button_pane_cp033_ParamLimits

0xef93,	// (0x0001e685) phob2_cc_button_pane_g1_ParamLimits

0xef9f,	// (0x0001e691) phob2_cc_button_pane_t1_ParamLimits

0xefb4,	// (0x0001e6a6) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001f62c) phob2_cc_button_pane_t_ParamLimits

0xfedc,	// (0x0000f5ce) popup_wgtman_window

0xd20e,	// (0x0001c900) scroll_pane_cp038

0x8dfd,	// (0x000184ef) wgtman_btn_pane_cp_01_ParamLimits

0x8dfd,	// (0x000184ef) wgtman_btn_pane_cp_01

0xefd4,	// (0x0001e6c6) wgtman_content_pane

0xefdd,	// (0x0001e6cf) wgtman_heading_pane

0x95af,	// (0x00018ca1) bg_heading_pane_cp02

0xefe6,	// (0x0001e6d8) wgtman_heading_pane_g1

0xefee,	// (0x0001e6e0) wgtman_heading_pane_t1

0xeffc,	// (0x0001e6ee) scroll_pane_cp036

0xf004,	// (0x0001e6f6) wgtman_list_pane

0xf00c,	// (0x0001e6fe) wgtman_list_pane_t1_ParamLimits

0xf00c,	// (0x0001e6fe) wgtman_list_pane_t1

0xcf9b,	// (0x0001c68d) cam4_grid_pane

0x6983,	// (0x00016075) bg_button_pane_cp015_ParamLimits

0x6997,	// (0x00016089) bg_button_pane_cp016_ParamLimits

0x69aa,	// (0x0001609c) bg_button_pane_cp017_ParamLimits

0x6a02,	// (0x000160f4) popup_vitu2_query_window_g3_ParamLimits

0x6a02,	// (0x000160f4) popup_vitu2_query_window_g3

0x6abf,	// (0x000161b1) popup_vitu2_query_window_t6_ParamLimits

0x6abf,	// (0x000161b1) popup_vitu2_query_window_t6

0x6aea,	// (0x000161dc) popup_vitu2_query_window_t7_ParamLimits

0x6aea,	// (0x000161dc) popup_vitu2_query_window_t7

0xed7c,	// (0x0001e46e) cam4_grid_pane_g1

0xed85,	// (0x0001e477) cam4_grid_pane_g2

0xf026,	// (0x0001e718) cam4_grid_pane_g3

0xf02f,	// (0x0001e721) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001f641) cam4_grid_pane_g

0x10da,	// (0x000107cc) aid_placing_vt_slider_lsc_ParamLimits

0x13c7,	// (0x00010ab9) vidtel_button_pane_ParamLimits

0x13c7,	// (0x00010ab9) vidtel_button_pane

0xf03a,	// (0x0001e72c) bg_button_pane_cp034

0x94b4,	// (0x00018ba6) vidtel_button_pane_g1

0xf044,	// (0x0001e736) vidtel_button_pane_t1

0xd34d,	// (0x0001ca3f) aid_size_vtel_slider_touch

0xd4ba,	// (0x0001cbac) scroll_pane_cp039

0xde02,	// (0x0001d4f4) ncim_query_button_pane_cp01_ParamLimits

0xde21,	// (0x0001d513) ncimui_query_pane_g1_ParamLimits

0x9610,	// (0x00018d02) input_focus_pane_cp012_ParamLimits

0xde46,	// (0x0001d538) ncim_query_entry_pane_t1_ParamLimits

0xd4ba,	// (0x0001cbac) scroll_pane_cp039_ParamLimits

0x2682,	// (0x00011d74) navi_pane_bcale_mc_g1

0x268a,	// (0x00011d7c) navi_pane_bcale_mc_t1

0xe3eb,	// (0x0001dadd) main_sp_fs_email_pane_g1

0xe3f7,	// (0x0001dae9) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0001f3d7) main_sp_fs_email_pane_g

0xe8d5,	// (0x0001dfc7) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8d5,	// (0x0001dfc7) list_single_cale_mrui_row_pane_g3

0x89f3,	// (0x000180e5) list_single_recal_day_pane_g5_event_pane

0xeab3,	// (0x0001e1a5) list_single_recal_day_pane_g7

0xf052,	// (0x0001e744) list_recal_day_event_pane_cp01

0xf05b,	// (0x0001e74d) list_recal_vselct_arw_lo_pane_cp01

0xf063,	// (0x0001e755) list_recal_vselct_arw_up_pane_cp01

0xf06b,	// (0x0001e75d) list_recal_vselct_pane_cp01

0xd411,	// (0x0001cb03) list_recal_day_event_pane_cp01_g1

0xf075,	// (0x0001e767) list_recal_day_event_pane_cp01_t1

0xeabb,	// (0x0001e1ad) list_single_recal_day_pane_t1_ParamLimits

0xeacd,	// (0x0001e1bf) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001f52f) list_single_recal_day_pane_t_ParamLimits

0x9c8c,	// (0x0001937e) bg_notes_pane_ParamLimits

0x9d37,	// (0x00019429) list_notes_pane_ParamLimits

0x0229,	// (0x0000f91b) scroll_pane_cp06_ParamLimits

0x9d73,	// (0x00019465) main_notes_pane_ParamLimits

0x95af,	// (0x00018ca1) main_welc_pane

0x94bc,	// (0x00018bae) main_welc_body_pane_ParamLimits

0x94bc,	// (0x00018bae) main_welc_body_pane

0x94db,	// (0x00018bcd) main_welc_opti_pane_ParamLimits

0x94db,	// (0x00018bcd) main_welc_opti_pane

0x9524,	// (0x00018c16) main_welc_pane_t1_ParamLimits

0x9524,	// (0x00018c16) main_welc_pane_t1

0x9546,	// (0x00018c38) main_welc_body_row_pane_ParamLimits

0x9546,	// (0x00018c38) main_welc_body_row_pane

0x955a,	// (0x00018c4c) main_welc_opti_row_pane_ParamLimits

0x955a,	// (0x00018c4c) main_welc_opti_row_pane

0xf083,	// (0x0001e775) main_welc_opti_row_pane_g1

0xf08b,	// (0x0001e77d) main_welc_opti_row_pane_t1

0xf09a,	// (0x0001e78c) main_welc_body_row_pane_t1

0xed49,	// (0x0001e43b) popup_notif_wgt_heading_pane

0xed63,	// (0x0001e455) aid_size_list_notif_wgt_del_ParamLimits

0xed70,	// (0x0001e462) list_notif_wgt_row_pane_g1_ParamLimits

0xed90,	// (0x0001e482) list_notif_wgt_row_pane_g2_ParamLimits

0xed9c,	// (0x0001e48e) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001f596) list_notif_wgt_row_pane_g_ParamLimits

0xeda9,	// (0x0001e49b) list_notif_wgt_row_pane_t1_ParamLimits

0xedbe,	// (0x0001e4b0) list_notif_wgt_row_pane_t2_ParamLimits

0xedd0,	// (0x0001e4c2) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001f59d) list_notif_wgt_row_pane_t_ParamLimits

0x8e84,	// (0x00018576) listrow_wgtman_pane_g1_ParamLimits

0x8e91,	// (0x00018583) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001f5c6) listrow_wgtman_pane_g_ParamLimits

0x8eaf,	// (0x000185a1) listrow_wgtman_pane_t1_ParamLimits

0x8ec7,	// (0x000185b9) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001f5cb) listrow_wgtman_pane_t_ParamLimits

0x8eed,	// (0x000185df) wait_bar_pane_cp09_ParamLimits

0x95af,	// (0x00018ca1) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0001e79b) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0001e7a3) popup_notif_wgt_heading_pane_t1

0x95af,	// (0x00018ca1) main_vids_pane

0x95af,	// (0x00018ca1) vids_listscroll_pane

0x956a,	// (0x00018c5c) scroll_pane_cp040

0x95af,	// (0x00018ca1) vids_list_pane

0x9575,	// (0x00018c67) vids_list_double_pane_ParamLimits

0x9575,	// (0x00018c67) vids_list_double_pane

0x9586,	// (0x00018c78) vids_list_double_pane_g1

0x958f,	// (0x00018c81) vids_list_double_pane_t1

0x959f,	// (0x00018c91) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001f64f) vids_list_double_pane_t

0x9610,	// (0x00018d02) main_ncimui_pane_ParamLimits

0x76bb,	// (0x00016dad) main_ncimui_pane_g1_ParamLimits

0x76c7,	// (0x00016db9) main_ncimui_pane_g2_ParamLimits

0x76c7,	// (0x00016db9) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0001f2dc) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0001f2dc) main_ncimui_pane_g

0x94fa,	// (0x00018bec) main_welc_pane_g1_ParamLimits

0x94fa,	// (0x00018bec) main_welc_pane_g1

0x950f,	// (0x00018c01) main_welc_pane_g2_ParamLimits

0x950f,	// (0x00018c01) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001f64a) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001f64a) main_welc_pane_g

0x9c8c,	// (0x0001937e) listscroll_mce_pane_ParamLimits

0x2762,	// (0x00011e54) wait_bar_pane_cp10

0xbe54,	// (0x0001b546) main_cale_day_pane_ParamLimits

0xbe54,	// (0x0001b546) main_cale_week_pane_ParamLimits

0x9c8c,	// (0x0001937e) main_messa_pane_ParamLimits

0x4e37,	// (0x00014529) main_clock2_btn_pane_ParamLimits

0x4e37,	// (0x00014529) main_clock2_btn_pane

0xc731,	// (0x0001be23) main_clock2_btn_pane_cp01_ParamLimits

0xc731,	// (0x0001be23) main_clock2_btn_pane_cp01

0xe858,	// (0x0001df4a) list_cale_mrui_pane_ParamLimits

0xee14,	// (0x0001e506) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001f5a4) main_cf0_pane_g

0x90be,	// (0x000187b0) area_left_week_number_pane_ParamLimits

0x90cc,	// (0x000187be) area_top_day_name_pane_ParamLimits

0x90df,	// (0x000187d1) frame_month_view_pane_ParamLimits

0xef3c,	// (0x0001e62e) grid_month_view_pane_ParamLimits

0xef4a,	// (0x0001e63c) frm_month_g1_ParamLimits

0x9166,	// (0x00018858) frm_month_g2_ParamLimits

0x9179,	// (0x0001886b) frm_month_g3_ParamLimits

0x918c,	// (0x0001887e) frm_month_g4_ParamLimits

0x919f,	// (0x00018891) frm_month_g5_ParamLimits

0x91b2,	// (0x000188a4) frm_month_g6_ParamLimits

0x91c5,	// (0x000188b7) frm_month_g7_ParamLimits

0xef57,	// (0x0001e649) frm_month_g8_ParamLimits

0x91da,	// (0x000188cc) frm_month_g9_ParamLimits

0x91ea,	// (0x000188dc) frm_month_g10_ParamLimits

0x91fa,	// (0x000188ec) frm_month_g11_ParamLimits

0x920a,	// (0x000188fc) frm_month_g12_ParamLimits

0x921c,	// (0x0001890e) frm_month_g13_ParamLimits

0x9230,	// (0x00018922) frm_month_g14_ParamLimits

0x9244,	// (0x00018936) frm_month_g15_ParamLimits

0x9258,	// (0x0001894a) frm_month_g16_ParamLimits

0xff03,	// (0x0001f5f5) frm_month_g_ParamLimits

0xef64,	// (0x0001e656) cell_top_day_name_pane_t1_ParamLimits

0x926c,	// (0x0001895e) cell_area_left_week_number_pane_g1_ParamLimits

0x9278,	// (0x0001896a) cell_area_left_week_number_pane_t1_ParamLimits

0xc59d,	// (0x0001bc8f) cell_month_view_pane_g1_ParamLimits

0x928b,	// (0x0001897d) cell_month_view_pane_t1_ParamLimits

0x9c84,	// (0x00019376) main_clock2_btn_pane_g1

0xf0bf,	// (0x0001e7b1) main_clock2_btn_pane_t1

0x9610,	// (0x00018d02) listscroll_cmail_pane_ParamLimits

0xe3eb,	// (0x0001dadd) main_sp_fs_email_pane_g1_ParamLimits

0xe3f7,	// (0x0001dae9) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0001f3d7) main_sp_fs_email_pane_g_ParamLimits

0xea22,	// (0x0001e114) list_recal_day_pane_ParamLimits

0xea33,	// (0x0001e125) mian_recal_day_pane_t1

0x813c,	// (0x0001782e) list_single_dyc_row_text_pane_t4_ParamLimits

0x813c,	// (0x0001782e) list_single_dyc_row_text_pane_t4

0x8185,	// (0x00017877) list_single_dyc_row_text_pane_t5_ParamLimits

0x8185,	// (0x00017877) list_single_dyc_row_text_pane_t5

0xe4cf,	// (0x0001dbc1) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4cf,	// (0x0001dbc1) list_single_dyc_row_text_pane_t6

0xa3eb,	// (0x00019add) aid_mgn_list_cale_time_pane

0x9610,	// (0x00018d02) main_gallery2_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
