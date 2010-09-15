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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0001bcaa };

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
0x44bf,	// (0x00020169) Screen

0x44cb,	// (0x00020175) application_window

0x44d7,	// (0x00020181) area_bottom_pane_ParamLimits

0x44d7,	// (0x00020181) area_bottom_pane

0x2d22,	// (0x0001e9cc) area_top_pane_ParamLimits

0x2d22,	// (0x0001e9cc) area_top_pane

0x2d86,	// (0x0001ea30) call_video_uplink_pane_ParamLimits

0x2d86,	// (0x0001ea30) call_video_uplink_pane

0x2dc5,	// (0x0001ea6f) main_pane_ParamLimits

0x2dc5,	// (0x0001ea6f) main_pane

0xddb5,	// (0x00029a5f) context_pane

0x6bf6,	// (0x000228a0) navi_pane

0x6c1c,	// (0x000228c6) popup_cale_events_window_ParamLimits

0x6c1c,	// (0x000228c6) popup_cale_events_window

0xddc8,	// (0x00029a72) popup_mup_playback_window

0x6c34,	// (0x000228de) signal_pane

0xbd9a,	// (0x00027a44) main_browser_pane

0xbf4c,	// (0x00027bf6) main_burst_pane

0x3382,	// (0x0001f02c) main_calc_pane

0xdda9,	// (0x00029a53) main_cale_day_pane

0x479d,	// (0x00020447) main_cale_month_pane

0xdda9,	// (0x00029a53) main_cale_week_pane

0xbf4c,	// (0x00027bf6) main_call_pane

0xba44,	// (0x000276ee) main_call_poc_pane

0xbf4c,	// (0x00027bf6) main_camera_pane

0xbf4c,	// (0x00027bf6) main_chi_dic_pane

0xc744,	// (0x000283ee) main_clock_pane

0xba44,	// (0x000276ee) main_fmradio_pane

0xbf4c,	// (0x00027bf6) main_graph_messa_pane

0xba44,	// (0x000276ee) main_help_pane

0xbd9a,	// (0x00027a44) main_im_pane

0xbc9f,	// (0x00027949) main_image_pane_ParamLimits

0xbc9f,	// (0x00027949) main_image_pane

0xba44,	// (0x000276ee) main_location2_pane

0xbf4c,	// (0x00027bf6) main_location_pane

0xbc9f,	// (0x00027949) main_messa_pane

0xba44,	// (0x000276ee) main_mp2_pane

0xbf4c,	// (0x00027bf6) main_mp_pane

0xba44,	// (0x000276ee) main_msg_pane

0xba44,	// (0x000276ee) main_mup_eq_pane

0xba44,	// (0x000276ee) main_mup_pane

0xbd9a,	// (0x00027a44) main_notes_pane

0xba44,	// (0x000276ee) main_pec_pane

0xba44,	// (0x000276ee) main_phob_pane

0xba44,	// (0x000276ee) main_pinb_pane

0xba44,	// (0x000276ee) main_postcard_pane

0xba44,	// (0x000276ee) main_qdial_pane

0xbf4c,	// (0x00027bf6) main_skin_pane

0xba44,	// (0x000276ee) main_smil2_pane

0xbf4c,	// (0x00027bf6) main_smil_pane

0xbf4c,	// (0x00027bf6) main_video_pane

0xbf4c,	// (0x00027bf6) main_video_tele_pane

0xbc9f,	// (0x00027949) main_viewer_pane_ParamLimits

0xbc9f,	// (0x00027949) main_viewer_pane

0xbf4c,	// (0x00027bf6) main_vorec_pane

0x33ce,	// (0x0001f078) popup_blid_sat_info_window_ParamLimits

0x33ce,	// (0x0001f078) popup_blid_sat_info_window

0x33ee,	// (0x0001f098) popup_dyc_status_message_window_ParamLimits

0x33ee,	// (0x0001f098) popup_dyc_status_message_window

0x33fe,	// (0x0001f0a8) popup_grid_large_graphic_window_ParamLimits

0x33fe,	// (0x0001f0a8) popup_grid_large_graphic_window

0x348f,	// (0x0001f139) popup_loc_request_window_ParamLimits

0x348f,	// (0x0001f139) popup_loc_request_window

0x34dc,	// (0x0001f186) popup_wml_address_window_ParamLimits

0x34dc,	// (0x0001f186) popup_wml_address_window

0x6ad8,	// (0x00022782) call_muted_g1

0x6753,	// (0x000223fd) popup_call_audio_conf_window_ParamLimits

0x6753,	// (0x000223fd) popup_call_audio_conf_window

0x6ae8,	// (0x00022792) popup_call_audio_first_window_ParamLimits

0x6ae8,	// (0x00022792) popup_call_audio_first_window

0x6b28,	// (0x000227d2) popup_call_audio_in_window_ParamLimits

0x6b28,	// (0x000227d2) popup_call_audio_in_window

0x6b4c,	// (0x000227f6) popup_call_audio_out_window_ParamLimits

0x6b4c,	// (0x000227f6) popup_call_audio_out_window

0x6b6e,	// (0x00022818) popup_call_audio_second_window_ParamLimits

0x6b6e,	// (0x00022818) popup_call_audio_second_window

0x6b9e,	// (0x00022848) popup_call_audio_wait_window_ParamLimits

0x6b9e,	// (0x00022848) popup_call_audio_wait_window

0x6bbf,	// (0x00022869) popup_number_entry_window_ParamLimits

0x6bbf,	// (0x00022869) popup_number_entry_window

0xb631,	// (0x000272db) bg_popup_call_pane_cp05_ParamLimits

0xb631,	// (0x000272db) bg_popup_call_pane_cp05

0xb651,	// (0x000272fb) popup_number_entry_window_t1

0xb664,	// (0x0002730e) popup_number_entry_window_t2

0xb676,	// (0x00027320) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0002acef) popup_number_entry_window_t

0xb688,	// (0x00027332) text_title_cp2

0xb69b,	// (0x00027345) bg_popup_call_pane_cp_ParamLimits

0xb69b,	// (0x00027345) bg_popup_call_pane_cp

0xb6a9,	// (0x00027353) call_thumbnail_pane

0xb6b1,	// (0x0002735b) popup_call_audio_in_window_g1_ParamLimits

0xb6b1,	// (0x0002735b) popup_call_audio_in_window_g1

0xb6bd,	// (0x00027367) popup_call_audio_in_window_g2_ParamLimits

0xb6bd,	// (0x00027367) popup_call_audio_in_window_g2

0xb6c9,	// (0x00027373) popup_call_audio_in_window_g3_ParamLimits

0xb6c9,	// (0x00027373) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0002acf8) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0002acf8) popup_call_audio_in_window_g

0xb6d5,	// (0x0002737f) popup_call_audio_in_window_t1_ParamLimits

0xb6d5,	// (0x0002737f) popup_call_audio_in_window_t1

0xb6f1,	// (0x0002739b) popup_call_audio_in_window_t2_ParamLimits

0xb6f1,	// (0x0002739b) popup_call_audio_in_window_t2

0xb70d,	// (0x000273b7) popup_call_audio_in_window_t3_ParamLimits

0xb70d,	// (0x000273b7) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0002acff) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0002acff) popup_call_audio_in_window_t

0xb69b,	// (0x00027345) bg_popup_call_pane_cp01_ParamLimits

0xb69b,	// (0x00027345) bg_popup_call_pane_cp01

0xb6a9,	// (0x00027353) call_thumbnail_pane_cp02

0xb720,	// (0x000273ca) call_type_pane_cp022

0xb728,	// (0x000273d2) popup_call_audio_out_window_g1_ParamLimits

0xb728,	// (0x000273d2) popup_call_audio_out_window_g1

0xb73a,	// (0x000273e4) popup_call_audio_out_window_g2_ParamLimits

0xb73a,	// (0x000273e4) popup_call_audio_out_window_g2

0xb746,	// (0x000273f0) popup_call_audio_out_window_g3_ParamLimits

0xb746,	// (0x000273f0) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0002ad06) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0002ad06) popup_call_audio_out_window_g

0xb758,	// (0x00027402) popup_call_audio_out_window_t1_ParamLimits

0xb758,	// (0x00027402) popup_call_audio_out_window_t1

0xb770,	// (0x0002741a) popup_call_audio_out_window_t2_ParamLimits

0xb770,	// (0x0002741a) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0002ad0d) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0002ad0d) popup_call_audio_out_window_t

0xb785,	// (0x0002742f) bg_popup_call_pane_ParamLimits

0xb785,	// (0x0002742f) bg_popup_call_pane

0x4551,	// (0x000201fb) call_thumbnail_pane_cp_ParamLimits

0x4551,	// (0x000201fb) call_thumbnail_pane_cp

0xb809,	// (0x000274b3) call_type_pane_cp01_ParamLimits

0xb809,	// (0x000274b3) call_type_pane_cp01

0xb84d,	// (0x000274f7) popup_call_audio_first_window_g1_ParamLimits

0xb84d,	// (0x000274f7) popup_call_audio_first_window_g1

0xb899,	// (0x00027543) popup_call_audio_first_window_g2_ParamLimits

0xb899,	// (0x00027543) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0002ad12) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0002ad12) popup_call_audio_first_window_g

0xb8dd,	// (0x00027587) popup_call_audio_first_window_t1_ParamLimits

0xb8dd,	// (0x00027587) popup_call_audio_first_window_t1

0xb989,	// (0x00027633) popup_call_audio_first_window_t4_ParamLimits

0xb989,	// (0x00027633) popup_call_audio_first_window_t4

0xba15,	// (0x000276bf) popup_call_audio_first_window_t5_ParamLimits

0xba15,	// (0x000276bf) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0002ad17) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0002ad17) popup_call_audio_first_window_t

0xba44,	// (0x000276ee) bg_popup_call_pane_cp02

0xba4e,	// (0x000276f8) call_type_pane_cp023

0xba56,	// (0x00027700) popup_call_audio_wait_window_g1

0xba5e,	// (0x00027708) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0002ad1e) popup_call_audio_wait_window_g

0xba66,	// (0x00027710) popup_call_audio_wait_window_t3

0xba74,	// (0x0002771e) bg_popup_call_pane_cp03_ParamLimits

0xba74,	// (0x0002771e) bg_popup_call_pane_cp03

0xbad4,	// (0x0002777e) call_thumbnail_pane_cp011_ParamLimits

0xbad4,	// (0x0002777e) call_thumbnail_pane_cp011

0xbae0,	// (0x0002778a) call_type_pane_cp034_ParamLimits

0xbae0,	// (0x0002778a) call_type_pane_cp034

0xbb1c,	// (0x000277c6) popup_call_audio_second_window_g1_ParamLimits

0xbb1c,	// (0x000277c6) popup_call_audio_second_window_g1

0xbb58,	// (0x00027802) popup_call_audio_second_window_g2_ParamLimits

0xbb58,	// (0x00027802) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0002ad23) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0002ad23) popup_call_audio_second_window_g

0xbb94,	// (0x0002783e) popup_call_audio_second_window_t1_ParamLimits

0xbb94,	// (0x0002783e) popup_call_audio_second_window_t1

0xbc15,	// (0x000278bf) popup_call_audio_second_window_t2_ParamLimits

0xbc15,	// (0x000278bf) popup_call_audio_second_window_t2

0xbc4b,	// (0x000278f5) popup_call_audio_second_window_t3_ParamLimits

0xbc4b,	// (0x000278f5) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0002ad28) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0002ad28) popup_call_audio_second_window_t

0xba44,	// (0x000276ee) bg_popup_call_pane_cp04

0xbc81,	// (0x0002792b) list_conf_pane

0xbc89,	// (0x00027933) popup_call_audio_conf_window_t1

0xbc97,	// (0x00027941) call_thumbnail_pane_g1

0xbc9f,	// (0x00027949) bg_pinb_pane_ParamLimits

0xbc9f,	// (0x00027949) bg_pinb_pane

0xbcad,	// (0x00027957) find_pinb_pane

0xbc9f,	// (0x00027949) listscroll_pinb_pane_ParamLimits

0xbc9f,	// (0x00027949) listscroll_pinb_pane

0xbcb7,	// (0x00027961) pinb_bg_pane_g1

0xbcb7,	// (0x00027961) pinb_bg_pane_g2

0xbcb7,	// (0x00027961) pinb_bg_pane_g3

0xbcb7,	// (0x00027961) pinb_bg_pane_g4

0xbcb7,	// (0x00027961) pinb_bg_pane_g5

0xbcb7,	// (0x00027961) pinb_bg_pane_g6

0xbcb7,	// (0x00027961) pinb_bg_pane_g7

0xbcb7,	// (0x00027961) pinb_bg_pane_g8

0xbcb7,	// (0x00027961) pinb_bg_pane_g9

0xbcb7,	// (0x00027961) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0002ad2f) pinb_bg_pane_g

0xb627,	// (0x000272d1) grid_pinb_pane

0xb627,	// (0x000272d1) list_pinb_pane

0xbcc1,	// (0x0002796b) scroll_pane_cp01_ParamLimits

0xbcc1,	// (0x0002796b) scroll_pane_cp01

0xbccf,	// (0x00027979) find_pinb_pane_g1_ParamLimits

0xbccf,	// (0x00027979) find_pinb_pane_g1

0xbce7,	// (0x00027991) find_pinb_pane_t1

0xbcf9,	// (0x000279a3) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0002ad49) find_pinb_pane_t

0xbd0e,	// (0x000279b8) input_focus_pane_cp01_ParamLimits

0xbd0e,	// (0x000279b8) input_focus_pane_cp01

0xbd1a,	// (0x000279c4) cell_pinb_pane_ParamLimits

0xbd1a,	// (0x000279c4) cell_pinb_pane

0xbd28,	// (0x000279d2) cell_pinb_pane_g1_ParamLimits

0xbd28,	// (0x000279d2) cell_pinb_pane_g1

0xbd36,	// (0x000279e0) cell_pinb_pane_g2_ParamLimits

0xbd36,	// (0x000279e0) cell_pinb_pane_g2

0xbd36,	// (0x000279e0) cell_pinb_pane_g3_ParamLimits

0xbd36,	// (0x000279e0) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0002ad4e) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0002ad4e) cell_pinb_pane_g

0xba44,	// (0x000276ee) grid_highlight_pane_cp01

0xbd1a,	// (0x000279c4) list_pinb_item_pane_ParamLimits

0xbd1a,	// (0x000279c4) list_pinb_item_pane

0xb627,	// (0x000272d1) list_highlight_pane_cp02

0xbd44,	// (0x000279ee) list_pinb_item_pane_g1_ParamLimits

0xbd44,	// (0x000279ee) list_pinb_item_pane_g1

0xbd36,	// (0x000279e0) list_pinb_item_pane_g2_ParamLimits

0xbd36,	// (0x000279e0) list_pinb_item_pane_g2

0xbd28,	// (0x000279d2) list_pinb_item_pane_g3_ParamLimits

0xbd28,	// (0x000279d2) list_pinb_item_pane_g3

0xbd36,	// (0x000279e0) list_pinb_item_pane_g4_ParamLimits

0xbd36,	// (0x000279e0) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0002ad55) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0002ad55) list_pinb_item_pane_g

0xbd52,	// (0x000279fc) list_pinb_item_pane_t1_ParamLimits

0xbd52,	// (0x000279fc) list_pinb_item_pane_t1

0x2fb2,	// (0x0001ec5c) calc_display_pane

0x2fd0,	// (0x0001ec7a) calc_paper_pane

0x2fec,	// (0x0001ec96) grid_calc_pane

0xba44,	// (0x000276ee) bg_list_pane_cp01

0x4575,	// (0x0002021f) clock_g1

0x457d,	// (0x00020227) clock_g2

0x0001,

0xf0b4,	// (0x0002ad5e) clock_g

0x4587,	// (0x00020231) clock_t1_ParamLimits

0x4587,	// (0x00020231) clock_t1

0x459c,	// (0x00020246) clock_t2_ParamLimits

0x459c,	// (0x00020246) clock_t2

0x45ae,	// (0x00020258) clock_t3_ParamLimits

0x45ae,	// (0x00020258) clock_t3

0x45c0,	// (0x0002026a) clock_t4_ParamLimits

0x45c0,	// (0x0002026a) clock_t4

0x45d2,	// (0x0002027c) clock_t5_ParamLimits

0x45d2,	// (0x0002027c) clock_t5

0x45e7,	// (0x00020291) clock_t6_ParamLimits

0x45e7,	// (0x00020291) clock_t6

0x45f9,	// (0x000202a3) clock_t7_ParamLimits

0x45f9,	// (0x000202a3) clock_t7

0x460b,	// (0x000202b5) clock_t8_ParamLimits

0x460b,	// (0x000202b5) clock_t8

0x4621,	// (0x000202cb) clock_t9_ParamLimits

0x4621,	// (0x000202cb) clock_t9

0x0008,

0xf0b9,	// (0x0002ad63) clock_t_ParamLimits

0xf0b9,	// (0x0002ad63) clock_t

0xbd66,	// (0x00027a10) popup_clock_analogue_window_cp02

0xbd66,	// (0x00027a10) popup_clock_digital_window_cp01

0xba44,	// (0x000276ee) listscroll_help_pane

0xba44,	// (0x000276ee) phob_pre_status_pane

0xbd6e,	// (0x00027a18) grid_qdial_pane

0xbc9f,	// (0x00027949) listscroll_mce_pane

0xbc9f,	// (0x00027949) bg_notes_pane

0xbd78,	// (0x00027a22) list_notes_pane

0x4637,	// (0x000202e1) scroll_pane_cp06

0xbd86,	// (0x00027a30) bg_calc_paper_pane

0x3018,	// (0x0001ecc2) list_calc_pane

0xbd9a,	// (0x00027a44) bg_calc_display_pane

0x3032,	// (0x0001ecdc) calc_display_pane_t1

0x3047,	// (0x0001ecf1) calc_display_pane_t2

0x305c,	// (0x0001ed06) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0002ad76) calc_display_pane_t

0x306e,	// (0x0001ed18) cell_calc_pane_ParamLimits

0x306e,	// (0x0001ed18) cell_calc_pane

0xbda6,	// (0x00027a50) bg_calc_paper_pane_g1

0xbdb2,	// (0x00027a5c) bg_calc_paper_pane_g2

0xbdbe,	// (0x00027a68) bg_calc_paper_pane_g3

0xbdca,	// (0x00027a74) bg_calc_paper_pane_g4

0xbdd6,	// (0x00027a80) bg_calc_paper_pane_g5

0x4646,	// (0x000202f0) bg_calc_paper_pane_g6

0x4657,	// (0x00020301) bg_calc_paper_pane_g7

0x4668,	// (0x00020312) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0002ad7d) bg_calc_paper_pane_g

0x4679,	// (0x00020323) calc_bg_paper_pane_g9

0x468a,	// (0x00020334) list_calc_item_pane_ParamLimits

0x468a,	// (0x00020334) list_calc_item_pane

0xbde2,	// (0x00027a8c) list_calc_item_pane_g1

0x309b,	// (0x0001ed45) list_calc_item_pane_t1_ParamLimits

0x309b,	// (0x0001ed45) list_calc_item_pane_t1

0x30ad,	// (0x0001ed57) list_calc_item_pane_t2_ParamLimits

0x30ad,	// (0x0001ed57) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0002ad8e) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0002ad8e) list_calc_item_pane_t

0xbcb7,	// (0x00027961) cell_calc_pane_g1

0xbdef,	// (0x00027a99) grid_highlight_pane_cp02

0x46b6,	// (0x00020360) bg_calc_display_pane_g1

0x30dd,	// (0x0001ed87) bg_calc_display_pane_g2

0x46bf,	// (0x00020369) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0002ad98) bg_calc_display_pane_g

0x30e7,	// (0x0001ed91) cell_qdial_pane_ParamLimits

0x30e7,	// (0x0001ed91) cell_qdial_pane

0x46c8,	// (0x00020372) cell_qdial_pane_g1_ParamLimits

0x46c8,	// (0x00020372) cell_qdial_pane_g1

0x46d5,	// (0x0002037f) cell_qdial_pane_g2_ParamLimits

0x46d5,	// (0x0002037f) cell_qdial_pane_g2

0xbe11,	// (0x00027abb) cell_qdial_pane_g3_ParamLimits

0xbe11,	// (0x00027abb) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0002ad9f) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0002ad9f) cell_qdial_pane_g

0x46f3,	// (0x0002039d) cell_qdial_pane_t1_ParamLimits

0x46f3,	// (0x0002039d) cell_qdial_pane_t1

0x470b,	// (0x000203b5) cell_qdial_pane_t2_ParamLimits

0x470b,	// (0x000203b5) cell_qdial_pane_t2

0x471e,	// (0x000203c8) cell_qdial_pane_t3_ParamLimits

0x471e,	// (0x000203c8) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0002ada8) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0002ada8) cell_qdial_pane_t

0xba44,	// (0x000276ee) grid_highlight_pane_cp04

0xbe1d,	// (0x00027ac7) thumbnail_qdial_pane_ParamLimits

0xbe1d,	// (0x00027ac7) thumbnail_qdial_pane

0xbe79,	// (0x00027b23) list_help_pane

0xbe82,	// (0x00027b2c) scroll_pane_cp02

0x4731,	// (0x000203db) help_list_pane_t1_ParamLimits

0x4731,	// (0x000203db) help_list_pane_t1

0x30fb,	// (0x0001eda5) bg_notes_pane_g2

0x3103,	// (0x0001edad) bg_notes_pane_g3

0x310b,	// (0x0001edb5) notes_bg_pane_g1

0x3113,	// (0x0001edbd) notes_bg_pane_g4

0x311b,	// (0x0001edc5) notes_bg_pane_g5

0x3123,	// (0x0001edcd) notes_bg_pane_g6

0x312b,	// (0x0001edd5) notes_bg_pane_g7

0x3133,	// (0x0001eddd) notes_bg_pane_g8

0x313b,	// (0x0001ede5) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0002adc6) notes_bg_pane_g

0x4767,	// (0x00020411) list_notes_text_pane_ParamLimits

0x4767,	// (0x00020411) list_notes_text_pane

0xbe8b,	// (0x00027b35) list_notes_text_pane_g1

0x478f,	// (0x00020439) list_notes_text_pane_t1

0x479d,	// (0x00020447) listscroll_cale_week_pane

0x47c2,	// (0x0002046c) bg_cale_heading_pane

0xbeae,	// (0x00027b58) bg_cale_pane_cp01

0x47e2,	// (0x0002048c) cale_week_corner_pane

0x47fc,	// (0x000204a6) cale_week_day_heading_pane

0x481c,	// (0x000204c6) cale_week_scroll_pane_g1

0x4837,	// (0x000204e1) cale_week_scroll_pane_g2

0x484a,	// (0x000204f4) cale_week_scroll_pane_g3

0x485d,	// (0x00020507) cale_week_scroll_pane_g4

0x4870,	// (0x0002051a) cale_week_scroll_pane_g5

0x4883,	// (0x0002052d) cale_week_scroll_pane_g6

0x4896,	// (0x00020540) cale_week_scroll_pane_g7

0x48ab,	// (0x00020555) cale_week_scroll_pane_g8

0x48c0,	// (0x0002056a) cale_week_scroll_pane_g9

0x48d3,	// (0x0002057d) cale_week_scroll_pane_g10

0x48e6,	// (0x00020590) cale_week_scroll_pane_g11

0x48f9,	// (0x000205a3) cale_week_scroll_pane_g12

0x4910,	// (0x000205ba) cale_week_scroll_pane_g13

0x492b,	// (0x000205d5) cale_week_scroll_pane_g14

0x4946,	// (0x000205f0) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0002add5) cale_week_scroll_pane_g

0x4976,	// (0x00020620) cale_week_time_pane

0x498b,	// (0x00020635) grid_cale_week_pane

0xbedd,	// (0x00027b87) scroll_pane_cp08

0x49aa,	// (0x00020654) cell_cale_week_pane_ParamLimits

0x49aa,	// (0x00020654) cell_cale_week_pane

0x4a0c,	// (0x000206b6) cale_week_day_heading_pane_t1

0x4a27,	// (0x000206d1) cale_week_day_heading_pane_t2

0x4a42,	// (0x000206ec) cale_week_day_heading_pane_t3

0x4a5d,	// (0x00020707) cale_week_day_heading_pane_t4

0x4a78,	// (0x00020722) cale_week_day_heading_pane_t5

0x4a93,	// (0x0002073d) cale_week_day_heading_pane_t6

0x4aae,	// (0x00020758) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0002adf6) cale_week_day_heading_pane_t

0xbefa,	// (0x00027ba4) bg_cale_side_pane

0x3143,	// (0x0001eded) cale_week_time_pane_t1

0x315d,	// (0x0001ee07) cale_week_time_pane_t2

0x3177,	// (0x0001ee21) cale_week_time_pane_t3

0x3191,	// (0x0001ee3b) cale_week_time_pane_t4

0x31ab,	// (0x0001ee55) cale_week_time_pane_t5

0x31c5,	// (0x0001ee6f) cale_week_time_pane_t6

0x31e3,	// (0x0001ee8d) cale_week_time_pane_t7

0x3205,	// (0x0001eeaf) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0002ae05) cale_week_time_pane_t

0x4ac9,	// (0x00020773) cell_cale_week_pane_g2

0x4aed,	// (0x00020797) cell_cale_week_pane_g3_ParamLimits

0x4aed,	// (0x00020797) cell_cale_week_pane_g3

0xbf08,	// (0x00027bb2) grid_highlight_pane_cp07

0xbf10,	// (0x00027bba) listscroll_gms_pane

0xbf1a,	// (0x00027bc4) grid_gms_pane

0xbf23,	// (0x00027bcd) listscroll_gms_pane_g1

0xbf2b,	// (0x00027bd5) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0002ae16) listscroll_gms_pane_g

0x4b05,	// (0x000207af) scroll_pane_cp010

0x4b10,	// (0x000207ba) cell_gms_pane_ParamLimits

0x4b10,	// (0x000207ba) cell_gms_pane

0x4b23,	// (0x000207cd) cell_gms_pane_g1

0xbf33,	// (0x00027bdd) cell_gms_pane_g2

0xbe8b,	// (0x00027b35) cell_gms_pane_g3

0xbf3b,	// (0x00027be5) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0002ae1b) cell_gms_pane_g

0xbf44,	// (0x00027bee) grid_highlight_pane_cp09

0x6a5c,	// (0x00022706) phob_pre_status_pane_g1

0x6a64,	// (0x0002270e) phob_pre_status_pane_g2

0x6a6c,	// (0x00022716) phob_pre_status_pane_g3

0x6a74,	// (0x0002271e) phob_pre_status_pane_g4

0x0004,

0xf53a,	// (0x0002b1e4) phob_pre_status_pane_g

0x6a84,	// (0x0002272e) phob_pre_status_pane_t1

0x6a94,	// (0x0002273e) phob_pre_status_pane_t2

0x6aa4,	// (0x0002274e) phob_pre_status_pane_t3

0x0002,

0xf545,	// (0x0002b1ef) phob_pre_status_pane_t

0xbf4c,	// (0x00027bf6) bg_list_pane_cp05

0x4b33,	// (0x000207dd) grid_vorec_pane

0x4b3d,	// (0x000207e7) vorec_t1

0x4b4b,	// (0x000207f5) vorec_t2

0x4b59,	// (0x00020803) vorec_t3

0x4b67,	// (0x00020811) vorec_t4

0x449a,	// (0x00020144) vorec_t5

0x44a8,	// (0x00020152) vorec_t6

0x0004,

0xf17a,	// (0x0002ae24) vorec_t

0x44b6,	// (0x00020160) wait_bar_pane_cp01

0x4b83,	// (0x0002082d) cell_vorec_pane_ParamLimits

0x4b83,	// (0x0002082d) cell_vorec_pane

0x3229,	// (0x0001eed3) cell_vorec_pane_g1

0xba44,	// (0x000276ee) grid_highlight_pane_cp05

0xbd1a,	// (0x000279c4) cams_zoom_pane

0xbd1a,	// (0x000279c4) image_vga_pane

0xbd36,	// (0x000279e0) main_camera_pane_g1

0xbd36,	// (0x000279e0) main_camera_pane_g2

0xbd36,	// (0x000279e0) main_camera_pane_g3

0xbd36,	// (0x000279e0) main_camera_pane_g4

0xbd36,	// (0x000279e0) main_camera_pane_g5

0xbd36,	// (0x000279e0) main_camera_pane_g6

0xbd36,	// (0x000279e0) main_camera_pane_g7

0x0007,

0xf185,	// (0x0002ae2f) main_camera_pane_g

0xc845,	// (0x000284ef) main_camera_pane_t1

0xc845,	// (0x000284ef) main_camera_pane_t2

0x0001,

0xf196,	// (0x0002ae40) main_camera_pane_t

0x4b96,	// (0x00020840) cams_zoom_pane_cp_ParamLimits

0x4b96,	// (0x00020840) cams_zoom_pane_cp

0x4bc4,	// (0x0002086e) image_cif_pane_ParamLimits

0x4bc4,	// (0x0002086e) image_cif_pane

0xb627,	// (0x000272d1) image_subqcif_pane

0x4bd2,	// (0x0002087c) main_video_pane_g1_ParamLimits

0x4bd2,	// (0x0002087c) main_video_pane_g1

0x4bfa,	// (0x000208a4) main_video_pane_g2_ParamLimits

0x4bfa,	// (0x000208a4) main_video_pane_g2

0x4c2d,	// (0x000208d7) main_video_pane_g3_ParamLimits

0x4c2d,	// (0x000208d7) main_video_pane_g3

0x4c2d,	// (0x000208d7) main_video_pane_g4_ParamLimits

0x4c2d,	// (0x000208d7) main_video_pane_g4

0x4c5b,	// (0x00020905) main_video_pane_g5_ParamLimits

0x4c5b,	// (0x00020905) main_video_pane_g5

0xbf54,	// (0x00027bfe) main_video_pane_g6_ParamLimits

0xbf54,	// (0x00027bfe) main_video_pane_g6

0x0006,

0xf19b,	// (0x0002ae45) main_video_pane_g_ParamLimits

0xf19b,	// (0x0002ae45) main_video_pane_g

0x4c77,	// (0x00020921) main_video_pane_t1_ParamLimits

0x4c77,	// (0x00020921) main_video_pane_t1

0xbf6e,	// (0x00027c18) cams_zoom_pane_g1

0xbf6e,	// (0x00027c18) cams_zoom_pane_g2

0xbf6e,	// (0x00027c18) cams_zoom_pane_g3

0xbf6e,	// (0x00027c18) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0002ae54) cams_zoom_pane_g

0x4cbd,	// (0x00020967) grid_cams_pane

0x4ccb,	// (0x00020975) linegrid_cams_pane

0x4cd9,	// (0x00020983) cell_cams_pane_ParamLimits

0x4cd9,	// (0x00020983) cell_cams_pane

0xbf78,	// (0x00027c22) cams_burst_image_pane

0xbf80,	// (0x00027c2a) cell_cams_pane_g1

0xba44,	// (0x000276ee) grid_highlight_pane_cp03

0xbcb7,	// (0x00027961) mp_bg_pane_g1

0xb627,	// (0x000272d1) bg_list_pane_cp03

0xb627,	// (0x000272d1) bg_mp_pane

0xb627,	// (0x000272d1) grid_mp_pane

0xbf6e,	// (0x00027c18) media_player_g1

0xc4d8,	// (0x00028182) media_player_t1

0xc4d8,	// (0x00028182) media_player_t2

0xc4d8,	// (0x00028182) media_player_t3

0xc4d8,	// (0x00028182) media_player_t4

0xc4d8,	// (0x00028182) media_player_t5

0xc4d8,	// (0x00028182) media_player_t6

0xc4d8,	// (0x00028182) media_player_t7

0x0006,

0xf524,	// (0x0002b1ce) media_player_t

0xb627,	// (0x000272d1) wait_bar_pane_cp02

0xf509,	// (0x0002b1b3) main_usb_pane_t

0xc744,	// (0x000283ee) cell_mp_pane

0xbcb7,	// (0x00027961) cell_mp_pane_g1

0xba44,	// (0x000276ee) grid_highlight_pane_cp06

0xbf9c,	// (0x00027c46) grid_skin_colour_pane

0xbfa4,	// (0x00027c4e) list_highlight_pane_cp03

0x4cec,	// (0x00020996) skin_g1

0xbfac,	// (0x00027c56) skin_t1

0xbfbb,	// (0x00027c65) skin_t2

0x0001,

0xf1d8,	// (0x0002ae82) skin_t

0x4cf6,	// (0x000209a0) cell_skin_colour_pane_ParamLimits

0x4cf6,	// (0x000209a0) cell_skin_colour_pane

0xbfc9,	// (0x00027c73) cell_skin_colour_pane_g1

0x4d7a,	// (0x00020a24) call_video_g1_ParamLimits

0x4d7a,	// (0x00020a24) call_video_g1

0x4d8a,	// (0x00020a34) call_video_g2_ParamLimits

0x4d8a,	// (0x00020a34) call_video_g2

0x0001,

0xf1dd,	// (0x0002ae87) call_video_g_ParamLimits

0xf1dd,	// (0x0002ae87) call_video_g

0x4de4,	// (0x00020a8e) call_video_uplink_pane_cp1_ParamLimits

0x4de4,	// (0x00020a8e) call_video_uplink_pane_cp1

0xbfdb,	// (0x00027c85) call_video_uplink_pane_cp2

0x4eb0,	// (0x00020b5a) video_down_crop_pane_ParamLimits

0x4eb0,	// (0x00020b5a) video_down_crop_pane

0x4fae,	// (0x00020c58) video_down_pane_ParamLimits

0x4fae,	// (0x00020c58) video_down_pane

0xbfe3,	// (0x00027c8d) video_down_subqcif_pane_ParamLimits

0xbfe3,	// (0x00027c8d) video_down_subqcif_pane

0xbffb,	// (0x00027ca5) video_down_subqcif_pane_cp_ParamLimits

0xbffb,	// (0x00027ca5) video_down_subqcif_pane_cp

0xc021,	// (0x00027ccb) im_reading_pane_ParamLimits

0xc021,	// (0x00027ccb) im_reading_pane

0x50ce,	// (0x00020d78) im_writing_pane_ParamLimits

0x50ce,	// (0x00020d78) im_writing_pane

0x50ec,	// (0x00020d96) im_reading_pane_t1

0xc03b,	// (0x00027ce5) list_im_pane

0xc04c,	// (0x00027cf6) scroll_pane_cp07

0x5140,	// (0x00020dea) im_writing_pane_t1_ParamLimits

0x5140,	// (0x00020dea) im_writing_pane_t1

0xc065,	// (0x00027d0f) im_writing_pane_t2_ParamLimits

0xc065,	// (0x00027d0f) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0002ae91) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0002ae91) im_writing_pane_t

0xba44,	// (0x000276ee) input_focus_pane_cp04

0xba44,	// (0x000276ee) input_focus_pane_cp05

0x5155,	// (0x00020dff) list_im_single_pane_ParamLimits

0x5155,	// (0x00020dff) list_im_single_pane

0x5179,	// (0x00020e23) list_single_im_pane_t1

0xbf4c,	// (0x00027bf6) blid_accuracy_pane

0xbf4c,	// (0x00027bf6) blid_compass_pane

0xdd61,	// (0x00029a0b) main_location_t1

0xdd61,	// (0x00029a0b) main_location_t2

0xdd61,	// (0x00029a0b) main_location_t3

0x0002,

0xf533,	// (0x0002b1dd) main_location_t

0xba44,	// (0x000276ee) aid_levels_location

0xbcb7,	// (0x00027961) blid_accuracy_pane_g1

0xbcb7,	// (0x00027961) blid_accuracy_pane_g2

0x0001,

0xf23b,	// (0x0002aee5) blid_accuracy_pane_g

0xc0ad,	// (0x00027d57) wml_content_pane

0xc0eb,	// (0x00027d95) wml_button_pane_ParamLimits

0xc0eb,	// (0x00027d95) wml_button_pane

0x5188,	// (0x00020e32) wml_list_single_large_pane_ParamLimits

0x5188,	// (0x00020e32) wml_list_single_large_pane

0x51b2,	// (0x00020e5c) wml_list_single_medium_pane_ParamLimits

0x51b2,	// (0x00020e5c) wml_list_single_medium_pane

0x51e3,	// (0x00020e8d) wml_list_single_small_pane_ParamLimits

0x51e3,	// (0x00020e8d) wml_list_single_small_pane

0xc0ff,	// (0x00027da9) wml_selection_box_pane_ParamLimits

0xc0ff,	// (0x00027da9) wml_selection_box_pane

0xc112,	// (0x00027dbc) wml_list_single_pane_t1

0xc121,	// (0x00027dcb) wml_list_single_medium_pane_t1

0xc130,	// (0x00027dda) wml_list_single_large_pane_t1

0xc13f,	// (0x00027de9) input_focus_pane_cp02_ParamLimits

0xc13f,	// (0x00027de9) input_focus_pane_cp02

0xc152,	// (0x00027dfc) wml_selection_box_pane_g1

0xc15b,	// (0x00027e05) wml_selection_box_pane_t1_ParamLimits

0xc15b,	// (0x00027e05) wml_selection_box_pane_t1

0xbc9f,	// (0x00027949) bg_wml_button_pane_ParamLimits

0xbc9f,	// (0x00027949) bg_wml_button_pane

0xc173,	// (0x00027e1d) wml_button_pane_g1

0xc17b,	// (0x00027e25) wml_button_pane_t1

0xc173,	// (0x00027e1d) wml_button_bg_pane_g1

0xc18b,	// (0x00027e35) wml_button_bg_pane_g2

0xc193,	// (0x00027e3d) wml_button_bg_pane_g3

0xc19b,	// (0x00027e45) wml_button_bg_pane_g4

0xc1a3,	// (0x00027e4d) wml_button_bg_pane_g5

0xc1ab,	// (0x00027e55) wml_button_bg_pane_g6

0xc1b3,	// (0x00027e5d) wml_button_bg_pane_g7

0xc1bb,	// (0x00027e65) wml_button_bg_pane_g8

0xc1c3,	// (0x00027e6d) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0002ae96) wml_button_bg_pane_g

0x521d,	// (0x00020ec7) bg_list_pane_cp02

0xc1cb,	// (0x00027e75) mce_header_pane_ParamLimits

0xc1cb,	// (0x00027e75) mce_header_pane

0xc1e1,	// (0x00027e8b) mce_icon_pane

0xc1e1,	// (0x00027e8b) mce_image_pane

0xc1ea,	// (0x00027e94) mce_text_pane_ParamLimits

0xc1ea,	// (0x00027e94) mce_text_pane

0x5227,	// (0x00020ed1) scroll_pane_cp03

0xc0e3,	// (0x00027d8d) scroll_pane_cp04

0xc1fd,	// (0x00027ea7) scroll_pane_cp05_ParamLimits

0xc1fd,	// (0x00027ea7) scroll_pane_cp05

0x5231,	// (0x00020edb) mce_header_field_pane_ParamLimits

0x5231,	// (0x00020edb) mce_header_field_pane

0x5251,	// (0x00020efb) mce_header_field_pane_2_ParamLimits

0x5251,	// (0x00020efb) mce_header_field_pane_2

0x5267,	// (0x00020f11) mce_header_field_pane_3

0x526f,	// (0x00020f19) list_single_mce_message_pane_ParamLimits

0x526f,	// (0x00020f19) list_single_mce_message_pane

0x529a,	// (0x00020f44) list_single_mce_smart_pane_ParamLimits

0x529a,	// (0x00020f44) list_single_mce_smart_pane

0xc209,	// (0x00027eb3) input_focus_pane_cp03

0xc212,	// (0x00027ebc) list_header_data_pane

0x52d0,	// (0x00020f7a) mce_header_field_pane_t1

0x52de,	// (0x00020f88) list_single_mce_header_pane_ParamLimits

0x52de,	// (0x00020f88) list_single_mce_header_pane

0xc21a,	// (0x00027ec4) list_single_mce_header_pane_t1

0xc229,	// (0x00027ed3) list_single_mce_message_pane_g1

0xc231,	// (0x00027edb) list_single_mce_message_pane_t1

0x5330,	// (0x00020fda) bg_cale_heading_pane_cp01_ParamLimits

0x5330,	// (0x00020fda) bg_cale_heading_pane_cp01

0xc23f,	// (0x00027ee9) bg_cale_pane_cp02_ParamLimits

0xc23f,	// (0x00027ee9) bg_cale_pane_cp02

0x537e,	// (0x00021028) cale_month_corner_pane

0x539d,	// (0x00021047) cale_month_day_heading_pane_ParamLimits

0x539d,	// (0x00021047) cale_month_day_heading_pane

0x5403,	// (0x000210ad) cale_month_pane_g1_ParamLimits

0x5403,	// (0x000210ad) cale_month_pane_g1

0x5446,	// (0x000210f0) cale_month_pane_g2_ParamLimits

0x5446,	// (0x000210f0) cale_month_pane_g2

0x547e,	// (0x00021128) cale_month_pane_g3_ParamLimits

0x547e,	// (0x00021128) cale_month_pane_g3

0x54ca,	// (0x00021174) cale_month_pane_g4_ParamLimits

0x54ca,	// (0x00021174) cale_month_pane_g4

0x5516,	// (0x000211c0) cale_month_pane_g5_ParamLimits

0x5516,	// (0x000211c0) cale_month_pane_g5

0x5562,	// (0x0002120c) cale_month_pane_g6_ParamLimits

0x5562,	// (0x0002120c) cale_month_pane_g6

0x55ae,	// (0x00021258) cale_month_pane_g7_ParamLimits

0x55ae,	// (0x00021258) cale_month_pane_g7

0x5612,	// (0x000212bc) cale_month_pane_g8_ParamLimits

0x5612,	// (0x000212bc) cale_month_pane_g8

0x5676,	// (0x00021320) cale_month_pane_g9_ParamLimits

0x5676,	// (0x00021320) cale_month_pane_g9

0x56d4,	// (0x0002137e) cale_month_pane_g10_ParamLimits

0x56d4,	// (0x0002137e) cale_month_pane_g10

0x5730,	// (0x000213da) cale_month_pane_g11_ParamLimits

0x5730,	// (0x000213da) cale_month_pane_g11

0x5784,	// (0x0002142e) cale_month_pane_g12_ParamLimits

0x5784,	// (0x0002142e) cale_month_pane_g12

0x57da,	// (0x00021484) cale_month_pane_g13_ParamLimits

0x57da,	// (0x00021484) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0002aea9) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0002aea9) cale_month_pane_g

0x5830,	// (0x000214da) cale_month_week_pane

0x5854,	// (0x000214fe) grid_cale_month_pane_ParamLimits

0x5854,	// (0x000214fe) grid_cale_month_pane

0x58ad,	// (0x00021557) cale_month_day_heading_pane_t1

0x5933,	// (0x000215dd) cale_month_day_heading_pane_t2

0x59ac,	// (0x00021656) cale_month_day_heading_pane_t3

0x5a25,	// (0x000216cf) cale_month_day_heading_pane_t4

0x5a9e,	// (0x00021748) cale_month_day_heading_pane_t5

0x5b17,	// (0x000217c1) cale_month_day_heading_pane_t6

0x5b90,	// (0x0002183a) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0002aec4) cale_month_day_heading_pane_t

0xbefa,	// (0x00027ba4) bg_cale_side_pane_cp01

0x5c21,	// (0x000218cb) cale_month_week_pane_t1

0x5c3a,	// (0x000218e4) cale_month_week_pane_t2

0x5c53,	// (0x000218fd) cale_month_week_pane_t3

0x5c6c,	// (0x00021916) cale_month_week_pane_t4

0x5c85,	// (0x0002192f) cale_month_week_pane_t5

0x5ca6,	// (0x00021950) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0002aed3) cale_month_week_pane_t

0x5cc7,	// (0x00021971) cell_cale_month_pane_ParamLimits

0x5cc7,	// (0x00021971) cell_cale_month_pane

0x3233,	// (0x0001eedd) cell_cale_month_pane_g1

0x323f,	// (0x0001eee9) cell_cale_month_pane_t1_ParamLimits

0x323f,	// (0x0001eee9) cell_cale_month_pane_t1

0xbf08,	// (0x00027bb2) grid_highlight_pane_cp08

0xbcb7,	// (0x00027961) main_smil_g1

0x5de9,	// (0x00021a93) smil_status_pane

0xc27e,	// (0x00027f28) smil_text_pane

0xdc6b,	// (0x00029915) bg_popup_call3_rect_pane_g8

0xdc73,	// (0x0002991d) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c7,	// (0x0002b171) bg_popup_call3_rect_pane_g

0xde2a,	// (0x00029ad4) smil_status_volume_pane_g1

0xc288,	// (0x00027f32) smil_status_pane_t1

0x3511,	// (0x0001f1bb) volume_smil_pane

0xc29f,	// (0x00027f49) list_smil_text_pane

0x5dfc,	// (0x00021aa6) scroll_pane_cp011

0x5e07,	// (0x00021ab1) smil_text_list_pane_t1_ParamLimits

0x5e07,	// (0x00021ab1) smil_text_list_pane_t1

0x326b,	// (0x0001ef15) aid_volume_smil_ParamLimits

0x326b,	// (0x0001ef15) aid_volume_smil

0xbcb7,	// (0x00027961) smil_volume_pane_g1

0xbcb7,	// (0x00027961) smil_volume_pane_g2

0x0001,

0xf23b,	// (0x0002aee5) smil_volume_pane_g

0x479d,	// (0x00020447) listscroll_cale_day_pane

0xc2d0,	// (0x00027f7a) bg_cale_pane

0xc2e8,	// (0x00027f92) list_cale_pane

0xc30b,	// (0x00027fb5) scroll_pane_cp09

0xc31c,	// (0x00027fc6) cale_bg_pane_g1

0xc324,	// (0x00027fce) cale_bg_pane_g2

0xc32c,	// (0x00027fd6) cale_bg_pane_g3

0xc334,	// (0x00027fde) cale_bg_pane_g4

0xc33c,	// (0x00027fe6) cale_bg_pane_g5

0xc344,	// (0x00027fee) cale_bg_pane_g6

0xc34c,	// (0x00027ff6) cale_bg_pane_g7

0xc354,	// (0x00027ffe) cale_bg_pane_g8

0xc35c,	// (0x00028006) cale_bg_pane_g9

0x0008,

0xf240,	// (0x0002aeea) cale_bg_pane_g

0x5e7f,	// (0x00021b29) list_cale_time_pane_ParamLimits

0x5e7f,	// (0x00021b29) list_cale_time_pane

0xc36c,	// (0x00028016) list_cale_time_pane_g1_ParamLimits

0xc36c,	// (0x00028016) list_cale_time_pane_g1

0xc378,	// (0x00028022) list_cale_time_pane_g2_ParamLimits

0xc378,	// (0x00028022) list_cale_time_pane_g2

0x5ea1,	// (0x00021b4b) list_cale_time_pane_g3_ParamLimits

0x5ea1,	// (0x00021b4b) list_cale_time_pane_g3

0x5eaf,	// (0x00021b59) list_cale_time_pane_g4_ParamLimits

0x5eaf,	// (0x00021b59) list_cale_time_pane_g4

0x5ebd,	// (0x00021b67) list_cale_time_pane_g5_ParamLimits

0x5ebd,	// (0x00021b67) list_cale_time_pane_g5

0x0005,

0xf253,	// (0x0002aefd) list_cale_time_pane_g_ParamLimits

0xf253,	// (0x0002aefd) list_cale_time_pane_g

0xc392,	// (0x0002803c) list_cale_time_pane_t1_ParamLimits

0xc392,	// (0x0002803c) list_cale_time_pane_t1

0xc3ba,	// (0x00028064) list_cale_time_pane_t2_ParamLimits

0xc3ba,	// (0x00028064) list_cale_time_pane_t2

0x60ed,	// (0x00021d97) aid_blid_cardinal_pane

0x612f,	// (0x00021dd9) compass_pane_t4

0xc3e2,	// (0x0002808c) list_cale_time_pane_t4_ParamLimits

0xc3e2,	// (0x0002808c) list_cale_time_pane_t4

0x613d,	// (0x00021de7) compass_pane_t5

0x614d,	// (0x00021df7) compass_pane_t6

0x615b,	// (0x00021e05) compass_pane_t7

0xc8a9,	// (0x00028553) navi_pane_cc_t1

0xca86,	// (0x00028730) aid_phob_thumbnail_center_pane

0x64fa,	// (0x000221a4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf260,	// (0x0002af0a) list_cale_time_pane_t_ParamLimits

0xf260,	// (0x0002af0a) list_cale_time_pane_t

0xb69b,	// (0x00027345) bg_popup_window_pane_cp02_ParamLimits

0xb69b,	// (0x00027345) bg_popup_window_pane_cp02

0xc40a,	// (0x000280b4) heading_pane_cp01_ParamLimits

0xc40a,	// (0x000280b4) heading_pane_cp01

0xc416,	// (0x000280c0) loc_req_pane_ParamLimits

0xc416,	// (0x000280c0) loc_req_pane

0xc426,	// (0x000280d0) loc_type_pane_ParamLimits

0xc426,	// (0x000280d0) loc_type_pane

0xc438,	// (0x000280e2) loc_type_pane_t1_ParamLimits

0xc438,	// (0x000280e2) loc_type_pane_t1

0xc44a,	// (0x000280f4) loc_type_pane_t2_ParamLimits

0xc44a,	// (0x000280f4) loc_type_pane_t2

0xc45c,	// (0x00028106) loc_type_pane_t3_ParamLimits

0xc45c,	// (0x00028106) loc_type_pane_t3

0x0002,

0xf267,	// (0x0002af11) loc_type_pane_t_ParamLimits

0xf267,	// (0x0002af11) loc_type_pane_t

0xc46e,	// (0x00028118) list_loc_req_pane

0xc478,	// (0x00028122) scroll_pane_cp012

0x5ecb,	// (0x00021b75) list_single_loc_request_popup_menu_pane_ParamLimits

0x5ecb,	// (0x00021b75) list_single_loc_request_popup_menu_pane

0xc483,	// (0x0002812d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc483,	// (0x0002812d) list_single_loc_request_popup_menu_pane_g1

0xc48f,	// (0x00028139) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc48f,	// (0x00028139) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf26e,	// (0x0002af18) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf26e,	// (0x0002af18) list_single_loc_request_popup_menu_pane_g

0xc49b,	// (0x00028145) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc49b,	// (0x00028145) list_single_loc_request_popup_menu_pane_t1

0x5edd,	// (0x00021b87) bg_popup_window_pane_cp03_ParamLimits

0x5edd,	// (0x00021b87) bg_popup_window_pane_cp03

0x5eeb,	// (0x00021b95) heading_loc_req_pane_ParamLimits

0x5eeb,	// (0x00021b95) heading_loc_req_pane

0x5ef7,	// (0x00021ba1) popup_dyc_status_message_window_g1_ParamLimits

0x5ef7,	// (0x00021ba1) popup_dyc_status_message_window_g1

0x5f03,	// (0x00021bad) popup_dyc_status_message_window_t1_ParamLimits

0x5f03,	// (0x00021bad) popup_dyc_status_message_window_t1

0x5f15,	// (0x00021bbf) popup_dyc_status_message_window_t2_ParamLimits

0x5f15,	// (0x00021bbf) popup_dyc_status_message_window_t2

0x5f27,	// (0x00021bd1) popup_dyc_status_message_window_t3_ParamLimits

0x5f27,	// (0x00021bd1) popup_dyc_status_message_window_t3

0x0002,

0xf273,	// (0x0002af1d) popup_dyc_status_message_window_t_ParamLimits

0xf273,	// (0x0002af1d) popup_dyc_status_message_window_t

0xba44,	// (0x000276ee) bg_heading_pane_cp01

0xc4b1,	// (0x0002815b) heading_loc_req_pane_g1

0xc4b9,	// (0x00028163) heading_loc_req_pane_g2

0xc4c1,	// (0x0002816b) heading_loc_req_pane_g3

0x0002,

0xf27a,	// (0x0002af24) heading_loc_req_pane_g

0xc4c9,	// (0x00028173) heading_loc_req_pane_t1

0xc4e8,	// (0x00028192) bg_popup_sub_pane_cp01_ParamLimits

0xc4e8,	// (0x00028192) bg_popup_sub_pane_cp01

0xc4f6,	// (0x000281a0) popup_cale_events_window_g1_ParamLimits

0xc4f6,	// (0x000281a0) popup_cale_events_window_g1

0xc516,	// (0x000281c0) popup_cale_events_window_g2_ParamLimits

0xc516,	// (0x000281c0) popup_cale_events_window_g2

0x0001,

0xf29c,	// (0x0002af46) popup_cale_events_window_g_ParamLimits

0xf29c,	// (0x0002af46) popup_cale_events_window_g

0xc536,	// (0x000281e0) popup_cale_events_window_t1_ParamLimits

0xc536,	// (0x000281e0) popup_cale_events_window_t1

0xc548,	// (0x000281f2) popup_cale_events_window_t2_ParamLimits

0xc548,	// (0x000281f2) popup_cale_events_window_t2

0xc586,	// (0x00028230) popup_cale_events_window_t3_ParamLimits

0xc586,	// (0x00028230) popup_cale_events_window_t3

0xc5c0,	// (0x0002826a) popup_cale_events_window_t4_ParamLimits

0xc5c0,	// (0x0002826a) popup_cale_events_window_t4

0x0003,

0xf2a1,	// (0x0002af4b) popup_cale_events_window_t_ParamLimits

0xf2a1,	// (0x0002af4b) popup_cale_events_window_t

0x5f51,	// (0x00021bfb) call_type_pane

0xd298,	// (0x00028f42) popup_call_status_window_g1

0x5f5d,	// (0x00021c07) popup_call_status_window_g2

0x5f69,	// (0x00021c13) popup_call_status_window_g3

0x0002,

0xf2aa,	// (0x0002af54) popup_call_status_window_g

0xc5f6,	// (0x000282a0) call_type_pane_g1

0xc5ff,	// (0x000282a9) call_type_pane_g2

0x0001,

0xf2b1,	// (0x0002af5b) call_type_pane_g

0xba44,	// (0x000276ee) bg_popup_sub_pane_cp02

0xc608,	// (0x000282b2) listscroll_popup_wml_pane

0xc610,	// (0x000282ba) list_wml_pane

0xc61a,	// (0x000282c4) scroll_pane_cp013

0xc625,	// (0x000282cf) list_single_graphic_popup_wml_pane_ParamLimits

0xc625,	// (0x000282cf) list_single_graphic_popup_wml_pane

0xbcb7,	// (0x00027961) list_single_graphic_popup_wml_pane_g1

0xc639,	// (0x000282e3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b6,	// (0x0002af60) list_single_graphic_popup_wml_pane_g

0xc641,	// (0x000282eb) list_single_graphic_popup_wml_pane_t1

0xc657,	// (0x00028301) aid_call_pane

0xbc97,	// (0x00027941) popup_clock_analogue_window_g1

0xbc97,	// (0x00027941) popup_clock_analogue_window_g2

0x328d,	// (0x0001ef37) popup_clock_analogue_window_g3

0x328d,	// (0x0001ef37) popup_clock_analogue_window_g4

0xbcb7,	// (0x00027961) popup_clock_analogue_window_g5

0x0004,

0xf2bb,	// (0x0002af65) popup_clock_analogue_window_g

0x3295,	// (0x0001ef3f) popup_clock_analogue_window_t1

0x32a3,	// (0x0001ef4d) clock_digital_number_pane_ParamLimits

0x32a3,	// (0x0001ef4d) clock_digital_number_pane

0x32af,	// (0x0001ef59) clock_digital_number_pane_cp02_ParamLimits

0x32af,	// (0x0001ef59) clock_digital_number_pane_cp02

0x32bb,	// (0x0001ef65) clock_digital_number_pane_cp03_ParamLimits

0x32bb,	// (0x0001ef65) clock_digital_number_pane_cp03

0x32c7,	// (0x0001ef71) clock_digital_number_pane_cp04_ParamLimits

0x32c7,	// (0x0001ef71) clock_digital_number_pane_cp04

0x32d7,	// (0x0001ef81) clock_digital_separator_pane_ParamLimits

0x32d7,	// (0x0001ef81) clock_digital_separator_pane

0x32e3,	// (0x0001ef8d) popup_clock_digital_window_t1

0xbcb7,	// (0x00027961) clock_digital_number_pane_g1

0xbcb7,	// (0x00027961) clock_digital_number_pane_g2

0x0001,

0xf23b,	// (0x0002aee5) clock_digital_number_pane_g

0xbcb7,	// (0x00027961) clock_digital_separator_pane_g1

0xbcb7,	// (0x00027961) clock_digital_separator_pane_g2

0x0001,

0xf23b,	// (0x0002aee5) clock_digital_separator_pane_g

0xba44,	// (0x000276ee) bg_popup_window_pane_cp04

0xc65f,	// (0x00028309) heading_pane_cp03

0xbf4c,	// (0x00027bf6) listscroll_popup_gms_pane

0xba44,	// (0x000276ee) grid_large_graphic_popup_pane

0xc668,	// (0x00028312) listscroll_popup_gms_pane_g1

0xc671,	// (0x0002831b) listscroll_popup_gms_pane_g2

0x0001,

0xf2c6,	// (0x0002af70) listscroll_popup_gms_pane_g

0xc67a,	// (0x00028324) scroll_pane_cp014

0xbd1a,	// (0x000279c4) cell_large_graphic_popup_pane_ParamLimits

0xbd1a,	// (0x000279c4) cell_large_graphic_popup_pane

0xbd28,	// (0x000279d2) cell_large_graphic_popup_pane_g1_ParamLimits

0xbd28,	// (0x000279d2) cell_large_graphic_popup_pane_g1

0xc683,	// (0x0002832d) cell_large_graphic_popup_pane_g2_ParamLimits

0xc683,	// (0x0002832d) cell_large_graphic_popup_pane_g2

0xc691,	// (0x0002833b) cell_large_graphic_popup_pane_g3_ParamLimits

0xc691,	// (0x0002833b) cell_large_graphic_popup_pane_g3

0xc69f,	// (0x00028349) cell_large_graphic_popup_pane_g4_ParamLimits

0xc69f,	// (0x00028349) cell_large_graphic_popup_pane_g4

0x0003,

0xf2cb,	// (0x0002af75) cell_large_graphic_popup_pane_g_ParamLimits

0xf2cb,	// (0x0002af75) cell_large_graphic_popup_pane_g

0xba44,	// (0x000276ee) grid_highlight_pane_cp010

0xbcb7,	// (0x00027961) bg_popup_call_pane_g1

0xc6b0,	// (0x0002835a) list_single_graphic_popup_conf_pane_ParamLimits

0xc6b0,	// (0x0002835a) list_single_graphic_popup_conf_pane

0xc6c3,	// (0x0002836d) list_highlight_pane_cp01

0xc6cc,	// (0x00028376) list_single_graphic_popup_conf_pane_g1

0xc6d4,	// (0x0002837e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2d4,	// (0x0002af7e) list_single_graphic_popup_conf_pane_g

0xc6dc,	// (0x00028386) list_single_graphic_popup_conf_pane_t1

0xc6ea,	// (0x00028394) linegrid_cams_pane_g1

0x5f75,	// (0x00021c1f) linegrid_cams_pane_g2

0xbe8b,	// (0x00027b35) linegrid_cams_pane_g3

0xc6f3,	// (0x0002839d) linegrid_cams_pane_g4

0x5f7e,	// (0x00021c28) linegrid_cams_pane_g5

0x5f87,	// (0x00021c31) linegrid_cams_pane_g6

0xbf3b,	// (0x00027be5) linegrid_cams_pane_g7

0x0006,

0xf2d9,	// (0x0002af83) linegrid_cams_pane_g

0xc6fc,	// (0x000283a6) popup_clock_analogue_window

0xc6fc,	// (0x000283a6) popup_clock_digital_window

0xba44,	// (0x000276ee) popup_phob_thumbnail_window

0xbcb7,	// (0x00027961) call_video_uplink_pane_g1

0xc705,	// (0x000283af) call_video_uplink_pane_g2

0x0001,

0xf2e8,	// (0x0002af92) call_video_uplink_pane_g

0xc70d,	// (0x000283b7) video_uplink_pane

0xc715,	// (0x000283bf) mce_image_pane_g1

0x5f90,	// (0x00021c3a) mce_image_pane_g2

0x5f9a,	// (0x00021c44) mce_image_pane_g3

0x5fa2,	// (0x00021c4c) mce_image_pane_g4

0x5faa,	// (0x00021c54) mce_image_pane_g5

0x0004,

0xf2ed,	// (0x0002af97) mce_image_pane_g

0xc71f,	// (0x000283c9) control_top_pane_stacon_cp01_ParamLimits

0xc71f,	// (0x000283c9) control_top_pane_stacon_cp01

0xc733,	// (0x000283dd) uni_indicator_pane_stacon_cp01_ParamLimits

0xc733,	// (0x000283dd) uni_indicator_pane_stacon_cp01

0xc744,	// (0x000283ee) bg_popup_sub_pane_cp03

0xc74e,	// (0x000283f8) chi_dic_find_pane

0x5fb2,	// (0x00021c5c) listscroll_chi_dic_pane

0xc756,	// (0x00028400) main_pane_chidic_g1

0xc75e,	// (0x00028408) chi_dic_find_pane_t1

0xc76c,	// (0x00028416) find_chidic_pane

0xc775,	// (0x0002841f) chi_dic_list_pane_ParamLimits

0xc775,	// (0x0002841f) chi_dic_list_pane

0xc786,	// (0x00028430) scroll_pane_cp020

0xc78e,	// (0x00028438) find_chidic_pane_t1

0xba44,	// (0x000276ee) input_focus_pane_cp06

0x5fc6,	// (0x00021c70) list_chi_dic_pane_ParamLimits

0x5fc6,	// (0x00021c70) list_chi_dic_pane

0x5fe0,	// (0x00021c8a) list_chi_dic_pane_t1_ParamLimits

0x5fe0,	// (0x00021c8a) list_chi_dic_pane_t1

0xba44,	// (0x000276ee) list_highlight_pane_cp020

0xc79d,	// (0x00028447) bg_cale_heading_pane_g1

0x5ff3,	// (0x00021c9d) bg_cale_heading_pane_g2

0x5ffb,	// (0x00021ca5) bg_cale_heading_pane_g3

0x6003,	// (0x00021cad) bg_cale_heading_pane_g4

0x600d,	// (0x00021cb7) bg_cale_heading_pane_g5

0x6017,	// (0x00021cc1) bg_cale_heading_pane_g6

0x601f,	// (0x00021cc9) bg_cale_heading_pane_g7

0x6027,	// (0x00021cd1) bg_cale_heading_pane_g8

0x6031,	// (0x00021cdb) bg_cale_heading_pane_g9

0x0008,

0xf2f8,	// (0x0002afa2) bg_cale_heading_pane_g

0xc79d,	// (0x00028447) bg_cale_side_pane_g1

0x603b,	// (0x00021ce5) bg_cale_side_pane_g2

0x6045,	// (0x00021cef) bg_cale_side_pane_g3

0x604f,	// (0x00021cf9) bg_cale_side_pane_g4

0x6059,	// (0x00021d03) bg_cale_side_pane_g5

0x6063,	// (0x00021d0d) bg_cale_side_pane_g6

0x606d,	// (0x00021d17) bg_cale_side_pane_g7

0x6077,	// (0x00021d21) bg_cale_side_pane_g8

0x607f,	// (0x00021d29) bg_cale_side_pane_g9

0x0008,

0xf30b,	// (0x0002afb5) bg_cale_side_pane_g

0x6087,	// (0x00021d31) popup_call_status_window_ParamLimits

0x6087,	// (0x00021d31) popup_call_status_window

0xc7a5,	// (0x0002844f) stacon_top_pane

0xc7ad,	// (0x00028457) status_pane_ParamLimits

0xc7ad,	// (0x00028457) status_pane

0xc7c2,	// (0x0002846c) status_small_pane

0xc7ca,	// (0x00028474) control_pane

0xba44,	// (0x000276ee) stacon_bottom_pane

0xc7d2,	// (0x0002847c) list_single_mce_smart_pane_t1_ParamLimits

0xc7d2,	// (0x0002847c) list_single_mce_smart_pane_t1

0xc7e5,	// (0x0002848f) list_single_mce_smart_pane_t2_ParamLimits

0xc7e5,	// (0x0002848f) list_single_mce_smart_pane_t2

0x0001,

0xf31e,	// (0x0002afc8) list_single_mce_smart_pane_t_ParamLimits

0xf31e,	// (0x0002afc8) list_single_mce_smart_pane_t

0x6093,	// (0x00021d3d) compass_pane

0x609f,	// (0x00021d49) main_location2_pane_t1

0x60b3,	// (0x00021d5d) main_location2_pane_t2

0x60c7,	// (0x00021d71) main_location2_pane_t3

0x0003,

0xf323,	// (0x0002afcd) main_location2_pane_t

0xc804,	// (0x000284ae) compass_pane_g1_ParamLimits

0xc804,	// (0x000284ae) compass_pane_g1

0x6111,	// (0x00021dbb) compass_pane_t1

0x6120,	// (0x00021dca) compass_pane_t2

0x0005,

0xf32c,	// (0x0002afd6) compass_pane_t

0x616b,	// (0x00021e15) text_secondary_cp61

0xc8a0,	// (0x0002854a) navi_pane_cams_g5

0xc91c,	// (0x000285c6) navi_pane_im_t1

0xc92a,	// (0x000285d4) navi_pane_mp_g1_ParamLimits

0xc92a,	// (0x000285d4) navi_pane_mp_g1

0xc93e,	// (0x000285e8) navi_pane_mp_g2_ParamLimits

0xc93e,	// (0x000285e8) navi_pane_mp_g2

0xc94a,	// (0x000285f4) navi_pane_mp_g3_ParamLimits

0xc94a,	// (0x000285f4) navi_pane_mp_g3

0x0002,

0xf340,	// (0x0002afea) navi_pane_mp_g_ParamLimits

0xf340,	// (0x0002afea) navi_pane_mp_g

0xc956,	// (0x00028600) navi_pane_mp_t1

0xc964,	// (0x0002860e) navi_pane_mp_t2

0x0002,

0xf347,	// (0x0002aff1) navi_pane_mp_t

0xc9cf,	// (0x00028679) navi_pane_vt_g1

0xc956,	// (0x00028600) navi_pane_vt_t1

0xc9d7,	// (0x00028681) navi_slider_pane

0xbf4c,	// (0x00027bf6) zooming_pane

0xc9e7,	// (0x00028691) navi_slider_pane_g1

0x3300,	// (0x0001efaa) navi_slider_pane_g2

0x0006,

0xf34e,	// (0x0002aff8) navi_slider_pane_g

0xca0b,	// (0x000286b5) aid_levels_zoom

0xca13,	// (0x000286bd) zooming_pane_g1

0xca1b,	// (0x000286c5) zooming_pane_g2

0xca1b,	// (0x000286c5) zooming_pane_g3

0x0002,

0xf35d,	// (0x0002b007) zooming_pane_g

0xca23,	// (0x000286cd) level_10_zoom

0xca2c,	// (0x000286d6) level_11_zoom

0xca35,	// (0x000286df) level_1_zoom

0xca3e,	// (0x000286e8) level_2_zoom

0xca47,	// (0x000286f1) level_3_zoom

0xca50,	// (0x000286fa) level_4_zoom

0xca59,	// (0x00028703) level_5_zoom

0xca62,	// (0x0002870c) level_6_zoom

0xca6b,	// (0x00028715) level_7_zoom

0xca74,	// (0x0002871e) level_8_zoom

0xca7d,	// (0x00028727) level_9_zoom

0xca8e,	// (0x00028738) popup_phob_thumbnail_window_g1

0xca96,	// (0x00028740) popup_phob_thumbnail_window_g2

0x0001,

0xf364,	// (0x0002b00e) popup_phob_thumbnail_window_g

0x6ab4,	// (0x0002275e) level_1_location

0x6abc,	// (0x00022766) level_2_location

0x6ac4,	// (0x0002276e) level_3_location

0x6ace,	// (0x00022778) level_4_location

0xbf4c,	// (0x00027bf6) level_5_location

0x61a6,	// (0x00021e50) mce_icon_pane_g1

0x61ae,	// (0x00021e58) mce_icon_pane_g2

0x0001,

0xf369,	// (0x0002b013) mce_icon_pane_g

0x61b6,	// (0x00021e60) main_mup_pane_g1_ParamLimits

0x61b6,	// (0x00021e60) main_mup_pane_g1

0xbd44,	// (0x000279ee) main_mup_pane_g2_ParamLimits

0xbd44,	// (0x000279ee) main_mup_pane_g2

0xbd44,	// (0x000279ee) main_mup_pane_g3_ParamLimits

0xbd44,	// (0x000279ee) main_mup_pane_g3

0xbd44,	// (0x000279ee) main_mup_pane_g4_ParamLimits

0xbd44,	// (0x000279ee) main_mup_pane_g4

0xbd44,	// (0x000279ee) main_mup_pane_g5_ParamLimits

0xbd44,	// (0x000279ee) main_mup_pane_g5

0xbd44,	// (0x000279ee) main_mup_pane_g6_ParamLimits

0xbd44,	// (0x000279ee) main_mup_pane_g6

0xbd44,	// (0x000279ee) main_mup_pane_g7_ParamLimits

0xbd44,	// (0x000279ee) main_mup_pane_g7

0xbd44,	// (0x000279ee) main_mup_pane_g8_ParamLimits

0xbd44,	// (0x000279ee) main_mup_pane_g8

0xbd44,	// (0x000279ee) main_mup_pane_g9_ParamLimits

0xbd44,	// (0x000279ee) main_mup_pane_g9

0xbd44,	// (0x000279ee) main_mup_pane_g10_ParamLimits

0xbd44,	// (0x000279ee) main_mup_pane_g10

0xbd44,	// (0x000279ee) main_mup_pane_g11_ParamLimits

0xbd44,	// (0x000279ee) main_mup_pane_g11

0xbd36,	// (0x000279e0) main_mup_pane_g12_ParamLimits

0xbd36,	// (0x000279e0) main_mup_pane_g12

0xbd44,	// (0x000279ee) main_mup_pane_g13_ParamLimits

0xbd44,	// (0x000279ee) main_mup_pane_g13

0x000c,

0xf36e,	// (0x0002b018) main_mup_pane_g_ParamLimits

0xf36e,	// (0x0002b018) main_mup_pane_g

0xbd52,	// (0x000279fc) main_mup_pane_t1_ParamLimits

0xbd52,	// (0x000279fc) main_mup_pane_t1

0xbd52,	// (0x000279fc) main_mup_pane_t2_ParamLimits

0xbd52,	// (0x000279fc) main_mup_pane_t2

0xbd52,	// (0x000279fc) main_mup_pane_t3_ParamLimits

0xbd52,	// (0x000279fc) main_mup_pane_t3

0xc845,	// (0x000284ef) main_mup_pane_t4_ParamLimits

0xc845,	// (0x000284ef) main_mup_pane_t4

0xc845,	// (0x000284ef) main_mup_pane_t5_ParamLimits

0xc845,	// (0x000284ef) main_mup_pane_t5

0xbf88,	// (0x00027c32) main_mup_pane_t6_ParamLimits

0xbf88,	// (0x00027c32) main_mup_pane_t6

0x0005,

0xf389,	// (0x0002b033) main_mup_pane_t_ParamLimits

0xf389,	// (0x0002b033) main_mup_pane_t

0xbcc1,	// (0x0002796b) mup_progress_pane_ParamLimits

0xbcc1,	// (0x0002796b) mup_progress_pane

0xdd1b,	// (0x000299c5) mup_visualizer_pane_ParamLimits

0xdd1b,	// (0x000299c5) mup_visualizer_pane

0xdd1b,	// (0x000299c5) mup_volume_pane_ParamLimits

0xdd1b,	// (0x000299c5) mup_volume_pane

0xbd36,	// (0x000279e0) mup_visualizer_pane_g1_ParamLimits

0xbd36,	// (0x000279e0) mup_visualizer_pane_g1

0xca9e,	// (0x00028748) mup_visualizer_pane_g2_ParamLimits

0xca9e,	// (0x00028748) mup_visualizer_pane_g2

0xbd28,	// (0x000279d2) mup_visualizer_pane_g3_ParamLimits

0xbd28,	// (0x000279d2) mup_visualizer_pane_g3

0x0002,

0xf396,	// (0x0002b040) mup_visualizer_pane_g_ParamLimits

0xf396,	// (0x0002b040) mup_visualizer_pane_g

0xbf6e,	// (0x00027c18) mup_volume_pane_g1

0xbf6e,	// (0x00027c18) mup_volume_pane_g2

0x0001,

0xf39d,	// (0x0002b047) mup_volume_pane_g

0xbf6e,	// (0x00027c18) mup_progress_pane_g1

0xbf6e,	// (0x00027c18) mup_progress_pane_g2

0xbf6e,	// (0x00027c18) mup_progress_pane_g3

0x0002,

0xf3a2,	// (0x0002b04c) mup_progress_pane_g

0xba44,	// (0x000276ee) bg_popup_window_pane_cp05

0xcaac,	// (0x00028756) heading_pane_cp02_ParamLimits

0xcaac,	// (0x00028756) heading_pane_cp02

0xcac6,	// (0x00028770) list_popup_blid_pane

0xcace,	// (0x00028778) list_blid_sat_info_pane_ParamLimits

0xcace,	// (0x00028778) list_blid_sat_info_pane

0xcae1,	// (0x0002878b) list_blid_sat_info_pane_g1

0xcae9,	// (0x00028793) list_blid_sat_info_pane_t1

0x62b3,	// (0x00021f5d) mup_equalizer_pane_ParamLimits

0x62b3,	// (0x00021f5d) mup_equalizer_pane

0x62d4,	// (0x00021f7e) mup_equalizer_pane_cp1_ParamLimits

0x62d4,	// (0x00021f7e) mup_equalizer_pane_cp1

0x62f5,	// (0x00021f9f) mup_equalizer_pane_cp2_ParamLimits

0x62f5,	// (0x00021f9f) mup_equalizer_pane_cp2

0x6316,	// (0x00021fc0) mup_equalizer_pane_cp3_ParamLimits

0x6316,	// (0x00021fc0) mup_equalizer_pane_cp3

0x6337,	// (0x00021fe1) mup_equalizer_pane_cp4_ParamLimits

0x6337,	// (0x00021fe1) mup_equalizer_pane_cp4

0x6358,	// (0x00022002) mup_equalizer_pane_cp5

0x636e,	// (0x00022018) mup_equalizer_pane_cp6

0x6386,	// (0x00022030) mup_equalizer_pane_cp7

0xdceb,	// (0x00029995) bg_popup_call_poc_act_pane_g9

0xdcf3,	// (0x0002999d) bg_popup_call_poc_act_pane_g10

0xdcfb,	// (0x000299a5) bg_popup_call_poc_act_pane_g11

0x000a,

0xbc9f,	// (0x00027949) mup_scale_pane

0xbcb7,	// (0x00027961) mup_scale_pane_g1

0xcaf7,	// (0x000287a1) mup_scale_pane_g2

0x0006,

0xf3be,	// (0x0002b068) mup_scale_pane_g

0xcb1b,	// (0x000287c5) msg_data_pane

0xcb23,	// (0x000287cd) scroll_pane_cp017

0x63b0,	// (0x0002205a) bg_list_pane_cp04_ParamLimits

0x63b0,	// (0x0002205a) bg_list_pane_cp04

0xcb33,	// (0x000287dd) msg_data_pane_g1

0x63cc,	// (0x00022076) msg_data_pane_g2

0x63d6,	// (0x00022080) msg_data_pane_g3

0x63de,	// (0x00022088) msg_data_pane_g4

0x63e6,	// (0x00022090) msg_data_pane_g5

0x63ee,	// (0x00022098) msg_data_pane_g6

0x63f6,	// (0x000220a0) msg_data_pane_g7

0x0006,

0xf3cd,	// (0x0002b077) msg_data_pane_g

0x63fe,	// (0x000220a8) msg_text_pane_ParamLimits

0x63fe,	// (0x000220a8) msg_text_pane

0x6444,	// (0x000220ee) qrid_highlight_pane_cp011_ParamLimits

0x6444,	// (0x000220ee) qrid_highlight_pane_cp011

0xba44,	// (0x000276ee) msg_body_pane

0xba44,	// (0x000276ee) msg_header_pane

0xcb44,	// (0x000287ee) input_focus_pane_cp07

0xcb59,	// (0x00028803) msg_header_pane_t1_ParamLimits

0xcb59,	// (0x00028803) msg_header_pane_t1

0xcb6f,	// (0x00028819) msg_header_pane_t2_ParamLimits

0xcb6f,	// (0x00028819) msg_header_pane_t2

0x0001,

0xf3e1,	// (0x0002b08b) msg_header_pane_t_ParamLimits

0xf3e1,	// (0x0002b08b) msg_header_pane_t

0xcb86,	// (0x00028830) msg_body_pane_g1

0xcb8e,	// (0x00028838) msg_body_pane_t1_ParamLimits

0xcb8e,	// (0x00028838) msg_body_pane_t1

0xcbbf,	// (0x00028869) msg_body_pane_t2_ParamLimits

0xcbbf,	// (0x00028869) msg_body_pane_t2

0xcbd1,	// (0x0002887b) msg_body_pane_t3_ParamLimits

0xcbd1,	// (0x0002887b) msg_body_pane_t3

0x0002,

0xf3e6,	// (0x0002b090) msg_body_pane_t_ParamLimits

0xf3e6,	// (0x0002b090) msg_body_pane_t

0x3342,	// (0x0001efec) main_viewer_pane_g1_ParamLimits

0x3342,	// (0x0001efec) main_viewer_pane_g1

0x334e,	// (0x0001eff8) main_viewer_pane_g2_ParamLimits

0x334e,	// (0x0001eff8) main_viewer_pane_g2

0x648c,	// (0x00022136) main_viewer_pane_g3_ParamLimits

0x648c,	// (0x00022136) main_viewer_pane_g3

0x649d,	// (0x00022147) main_viewer_pane_g4_ParamLimits

0x649d,	// (0x00022147) main_viewer_pane_g4

0x335a,	// (0x0001f004) main_viewer_pane_g5_ParamLimits

0x335a,	// (0x0001f004) main_viewer_pane_g5

0x335a,	// (0x0001f004) main_viewer_pane_g7_ParamLimits

0x335a,	// (0x0001f004) main_viewer_pane_g7

0xc483,	// (0x0002812d) main_viewer_pane_g8_ParamLimits

0xc483,	// (0x0002812d) main_viewer_pane_g8

0x0007,

0xf3f6,	// (0x0002b0a0) main_viewer_pane_g_ParamLimits

0xf3f6,	// (0x0002b0a0) main_viewer_pane_g

0xcbe3,	// (0x0002888d) viewer_content_pane_ParamLimits

0xcbe3,	// (0x0002888d) viewer_content_pane

0x64ce,	// (0x00022178) main_postcard_pane_g1_ParamLimits

0x64ce,	// (0x00022178) main_postcard_pane_g1

0x64dc,	// (0x00022186) main_postcard_pane_g2_ParamLimits

0x64dc,	// (0x00022186) main_postcard_pane_g2

0x64ea,	// (0x00022194) main_postcard_pane_g3_ParamLimits

0x64ea,	// (0x00022194) main_postcard_pane_g3

0x0005,

0xf407,	// (0x0002b0b1) main_postcard_pane_g_ParamLimits

0xf407,	// (0x0002b0b1) main_postcard_pane_g

0x64fa,	// (0x000221a4) main_postcard_pane_g4

0xde3d,	// (0x00029ae7) smil_status_volume_pane_g2

0x6526,	// (0x000221d0) postcard_pane_ParamLimits

0x6526,	// (0x000221d0) postcard_pane

0xd298,	// (0x00028f42) postcard_pane_g1_ParamLimits

0xd298,	// (0x00028f42) postcard_pane_g1

0x6558,	// (0x00022202) postcard_pane_g2_ParamLimits

0x6558,	// (0x00022202) postcard_pane_g2

0x6564,	// (0x0002220e) postcard_pane_g3_ParamLimits

0x6564,	// (0x0002220e) postcard_pane_g3

0xcbf1,	// (0x0002889b) postcard_pane_g4_ParamLimits

0xcbf1,	// (0x0002889b) postcard_pane_g4

0x6570,	// (0x0002221a) postcard_pane_g5_ParamLimits

0x6570,	// (0x0002221a) postcard_pane_g5

0x657c,	// (0x00022226) postcard_pane_g6_ParamLimits

0x657c,	// (0x00022226) postcard_pane_g6

0xcbff,	// (0x000288a9) postcard_pane_g7_ParamLimits

0xcbff,	// (0x000288a9) postcard_pane_g7

0x0006,

0xf414,	// (0x0002b0be) postcard_pane_g_ParamLimits

0xf414,	// (0x0002b0be) postcard_pane_g

0x6588,	// (0x00022232) main_mp2_pane_g1_ParamLimits

0x6588,	// (0x00022232) main_mp2_pane_g1

0x6594,	// (0x0002223e) main_mp2_pane_g2_ParamLimits

0x6594,	// (0x0002223e) main_mp2_pane_g2

0x65a0,	// (0x0002224a) main_mp2_pane_g3_ParamLimits

0x65a0,	// (0x0002224a) main_mp2_pane_g3

0x0002,

0xf423,	// (0x0002b0cd) main_mp2_pane_g_ParamLimits

0xf423,	// (0x0002b0cd) main_mp2_pane_g

0x65ac,	// (0x00022256) main_mp2_pane_t1_ParamLimits

0x65ac,	// (0x00022256) main_mp2_pane_t1

0x65c3,	// (0x0002226d) main_mp2_pane_t2_ParamLimits

0x65c3,	// (0x0002226d) main_mp2_pane_t2

0x65d7,	// (0x00022281) main_mp2_pane_t3_ParamLimits

0x65d7,	// (0x00022281) main_mp2_pane_t3

0x0002,

0xf42a,	// (0x0002b0d4) main_mp2_pane_t_ParamLimits

0xf42a,	// (0x0002b0d4) main_mp2_pane_t

0xcc0d,	// (0x000288b7) pec_content_pane_ParamLimits

0xcc0d,	// (0x000288b7) pec_content_pane

0xc0e3,	// (0x00027d8d) scroll_pane_cp015

0xcc1f,	// (0x000288c9) pec_attribute_pane_ParamLimits

0xcc1f,	// (0x000288c9) pec_attribute_pane

0x65e9,	// (0x00022293) pec_content_pane_g1_ParamLimits

0x65e9,	// (0x00022293) pec_content_pane_g1

0xcc2f,	// (0x000288d9) pec_content_pane_t1_ParamLimits

0xcc2f,	// (0x000288d9) pec_content_pane_t1

0xcc41,	// (0x000288eb) pec_content_pane_t2_ParamLimits

0xcc41,	// (0x000288eb) pec_content_pane_t2

0x0001,

0xf431,	// (0x0002b0db) pec_content_pane_t_ParamLimits

0xf431,	// (0x0002b0db) pec_content_pane_t

0x65f5,	// (0x0002229f) list_single_graphic_pane_cp01_ParamLimits

0x65f5,	// (0x0002229f) list_single_graphic_pane_cp01

0xbc9f,	// (0x00027949) bg_popup_sub_pane_cp04

0xcc53,	// (0x000288fd) popup_mup_playback_window_g1

0xcc5f,	// (0x00028909) popup_mup_playback_window_t1

0xcc74,	// (0x0002891e) popup_mup_playback_window_t2

0x0001,

0xf436,	// (0x0002b0e0) popup_mup_playback_window_t

0xccab,	// (0x00028955) main_image_pane_g1_ParamLimits

0xccab,	// (0x00028955) main_image_pane_g1

0xccee,	// (0x00028998) scroll_pane_cp018_ParamLimits

0xccee,	// (0x00028998) scroll_pane_cp018

0xcd06,	// (0x000289b0) scroll_pane_cp016_ParamLimits

0xcd06,	// (0x000289b0) scroll_pane_cp016

0x668e,	// (0x00022338) smil2_image_pane_ParamLimits

0x668e,	// (0x00022338) smil2_image_pane

0x66be,	// (0x00022368) smil2_root_pane_ParamLimits

0x66be,	// (0x00022368) smil2_root_pane

0x66ea,	// (0x00022394) smil2_text_pane_ParamLimits

0x66ea,	// (0x00022394) smil2_text_pane

0xba44,	// (0x000276ee) bg_list_pane_cp06

0xcd72,	// (0x00028a1c) grid_radio_pane

0xba44,	// (0x000276ee) bg_popup_window_pane_cp06

0xcd7a,	// (0x00028a24) main_fmradio_pane_t1

0xdd03,	// (0x000299ad) heading_pane_cp04

0xcd88,	// (0x00028a32) main_fmradio_pane_t2

0xdd0b,	// (0x000299b5) popup_cale_lunar_info_window_g1

0xcd96,	// (0x00028a40) main_fmradio_pane_t3

0xdd13,	// (0x000299bd) popup_cale_lunar_info_window_g2

0xcda4,	// (0x00028a4e) main_fmradio_pane_t4

0x0001,

0xcdb2,	// (0x00028a5c) main_fmradio_pane_t5

0x0004,

0xf516,	// (0x0002b1c0) popup_cale_lunar_info_window_g

0xf44b,	// (0x0002b0f5) main_fmradio_pane_t

0xcdc0,	// (0x00028a6a) wait_bar_pane_cp03

0xcdc8,	// (0x00028a72) cell_fmradio_pane_ParamLimits

0xcdc8,	// (0x00028a72) cell_fmradio_pane

0xcbff,	// (0x000288a9) cell_fmradio_pane_g1_ParamLimits

0xcbff,	// (0x000288a9) cell_fmradio_pane_g1

0xba44,	// (0x000276ee) grid_highlight_pane_cp011

0xcddb,	// (0x00028a85) poc_content_pane_ParamLimits

0xcddb,	// (0x00028a85) poc_content_pane

0xcded,	// (0x00028a97) scroll_pane_cp019

0x672a,	// (0x000223d4) popup_call_poc_act_window_ParamLimits

0x672a,	// (0x000223d4) popup_call_poc_act_window

0x6737,	// (0x000223e1) popup_call_poc_inact_window_ParamLimits

0x6737,	// (0x000223e1) popup_call_poc_inact_window

0xf4ed,	// (0x0002b197) bg_popup_call_poc_act_pane_g

0xdc7b,	// (0x00029925) bg_popup_call_poc_inact_pane_g1

0xdc83,	// (0x0002992d) bg_popup_call_poc_inact_pane_g2

0xcdf5,	// (0x00028a9f) popup_call_poc_act_window_g2

0xdc8b,	// (0x00029935) bg_popup_call_poc_inact_pane_g3

0xdc93,	// (0x0002993d) bg_popup_call_poc_inact_pane_g4

0xdc9b,	// (0x00029945) bg_popup_call_poc_inact_pane_g5

0xcdfd,	// (0x00028aa7) popup_call_poc_act_window_t1_ParamLimits

0xcdfd,	// (0x00028aa7) popup_call_poc_act_window_t1

0xce25,	// (0x00028acf) popup_call_poc_act_window_t2_ParamLimits

0xce25,	// (0x00028acf) popup_call_poc_act_window_t2

0xce4d,	// (0x00028af7) popup_call_poc_act_window_t3_ParamLimits

0xce4d,	// (0x00028af7) popup_call_poc_act_window_t3

0xce75,	// (0x00028b1f) popup_call_poc_act_window_t4_ParamLimits

0xce75,	// (0x00028b1f) popup_call_poc_act_window_t4

0x0003,

0xf456,	// (0x0002b100) popup_call_poc_act_window_t_ParamLimits

0xf456,	// (0x0002b100) popup_call_poc_act_window_t

0xdca3,	// (0x0002994d) bg_popup_call_poc_inact_pane_g6

0xdcab,	// (0x00029955) bg_popup_call_poc_inact_pane_g7

0xdcb3,	// (0x0002995d) bg_popup_call_poc_inact_pane_g8

0xce87,	// (0x00028b31) popup_call_poc_inact_window_g2

0xdcbb,	// (0x00029965) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4da,	// (0x0002b184) bg_popup_call_poc_inact_pane_g

0xce8f,	// (0x00028b39) popup_call_poc_inact_window_t1_ParamLimits

0xce8f,	// (0x00028b39) popup_call_poc_inact_window_t1

0xcea4,	// (0x00028b4e) popup_call_poc_inact_window_t2_ParamLimits

0xcea4,	// (0x00028b4e) popup_call_poc_inact_window_t2

0xceb9,	// (0x00028b63) popup_call_poc_inact_window_t3_ParamLimits

0xceb9,	// (0x00028b63) popup_call_poc_inact_window_t3

0x0002,

0xf45f,	// (0x0002b109) popup_call_poc_inact_window_t_ParamLimits

0xf45f,	// (0x0002b109) popup_call_poc_inact_window_t

0xddb5,	// (0x00029a5f) context_pane_ParamLimits

0x6c34,	// (0x000228de) signal_pane_ParamLimits

0xbf4c,	// (0x00027bf6) main_call2_pane

0x34b5,	// (0x0001f15f) popup_phob_thumbnail2_window_ParamLimits

0x34b5,	// (0x0001f15f) popup_phob_thumbnail2_window

0x3312,	// (0x0001efbc) aid_hotspot_pointer_arrow_pane

0x331a,	// (0x0001efc4) aid_hotspot_pointer_hand_pane

0x6a7c,	// (0x00022726) phob_pre_status_pane_g5

0xbd1a,	// (0x000279c4) cams_zoom_pane_ParamLimits

0xbd1a,	// (0x000279c4) image_vga_pane_ParamLimits

0xbd36,	// (0x000279e0) main_camera_pane_g1_ParamLimits

0xbd36,	// (0x000279e0) main_camera_pane_g2_ParamLimits

0xbd36,	// (0x000279e0) main_camera_pane_g3_ParamLimits

0xbd36,	// (0x000279e0) main_camera_pane_g4_ParamLimits

0xbd36,	// (0x000279e0) main_camera_pane_g5_ParamLimits

0xbd36,	// (0x000279e0) main_camera_pane_g6_ParamLimits

0xbd36,	// (0x000279e0) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0002ae2f) main_camera_pane_g_ParamLimits

0xc845,	// (0x000284ef) main_camera_pane_t1_ParamLimits

0xc845,	// (0x000284ef) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0002ae40) main_camera_pane_t_ParamLimits

0xbc9f,	// (0x00027949) bg_popup_preview_window_pane_cp01_ParamLimits

0xbc9f,	// (0x00027949) bg_popup_preview_window_pane_cp01

0xcece,	// (0x00028b78) popup_phob_thumbnail2_window_g1_ParamLimits

0xcece,	// (0x00028b78) popup_phob_thumbnail2_window_g1

0xba44,	// (0x000276ee) call2_cli_visual_pane

0x6753,	// (0x000223fd) popup_call2_audio_conf_window_ParamLimits

0x6753,	// (0x000223fd) popup_call2_audio_conf_window

0x6768,	// (0x00022412) popup_call2_audio_first_window_ParamLimits

0x6768,	// (0x00022412) popup_call2_audio_first_window

0x6806,	// (0x000224b0) popup_call2_audio_in_window_ParamLimits

0x6806,	// (0x000224b0) popup_call2_audio_in_window

0x6848,	// (0x000224f2) popup_call2_audio_out_window_ParamLimits

0x6848,	// (0x000224f2) popup_call2_audio_out_window

0x68aa,	// (0x00022554) popup_call2_audio_second_window_ParamLimits

0x68aa,	// (0x00022554) popup_call2_audio_second_window

0x6908,	// (0x000225b2) popup_call2_audio_wait_window_ParamLimits

0x6908,	// (0x000225b2) popup_call2_audio_wait_window

0xba44,	// (0x000276ee) bg_popup_call2_act_pane_cp03

0xbc81,	// (0x0002792b) list_conf_pane_cp

0xceda,	// (0x00028b84) popup_call2_audio_conf_window_t1

0xc6b0,	// (0x0002835a) list_single_graphic_popup_conf2_pane_ParamLimits

0xc6b0,	// (0x0002835a) list_single_graphic_popup_conf2_pane

0xc6c3,	// (0x0002836d) list_highlight_pane_cp04

0xcee8,	// (0x00028b92) list_single_graphic_popup_conf2_pane_g1

0xc6d4,	// (0x0002837e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf466,	// (0x0002b110) list_single_graphic_popup_conf2_pane_g

0xcef2,	// (0x00028b9c) list_single_graphic_popup_conf2_pane_t1

0xcf00,	// (0x00028baa) bg_popup_call2_act_pane_cp01_ParamLimits

0xcf00,	// (0x00028baa) bg_popup_call2_act_pane_cp01

0xcf8a,	// (0x00028c34) call_type_pane_cp05_ParamLimits

0xcf8a,	// (0x00028c34) call_type_pane_cp05

0xcfde,	// (0x00028c88) popup_call2_audio_second_window_g1_ParamLimits

0xcfde,	// (0x00028c88) popup_call2_audio_second_window_g1

0xd032,	// (0x00028cdc) popup_call2_audio_second_window_g2_ParamLimits

0xd032,	// (0x00028cdc) popup_call2_audio_second_window_g2

0x0002,

0xf46b,	// (0x0002b115) popup_call2_audio_second_window_g_ParamLimits

0xf46b,	// (0x0002b115) popup_call2_audio_second_window_g

0xd097,	// (0x00028d41) popup_call2_audio_second_window_t1_ParamLimits

0xd097,	// (0x00028d41) popup_call2_audio_second_window_t1

0xd152,	// (0x00028dfc) popup_call2_audio_second_window_t2_ParamLimits

0xd152,	// (0x00028dfc) popup_call2_audio_second_window_t2

0xd1a5,	// (0x00028e4f) popup_call2_audio_second_window_t3_ParamLimits

0xd1a5,	// (0x00028e4f) popup_call2_audio_second_window_t3

0x0003,

0xf472,	// (0x0002b11c) popup_call2_audio_second_window_t_ParamLimits

0xf472,	// (0x0002b11c) popup_call2_audio_second_window_t

0xba44,	// (0x000276ee) bg_popup_call2_in_pane_cp02

0xba4e,	// (0x000276f8) call_type_pane_cp04

0x6947,	// (0x000225f1) popup_call2_audio_wait_window_g1

0x694f,	// (0x000225f9) popup_call2_audio_wait_window_g2

0x0001,

0xf47b,	// (0x0002b125) popup_call2_audio_wait_window_g

0xba66,	// (0x00027710) popup_call2_audio_wait_window_t3

0xd2a6,	// (0x00028f50) bg_popup_call2_act_pane_ParamLimits

0xd2a6,	// (0x00028f50) bg_popup_call2_act_pane

0xd366,	// (0x00029010) call_type_pane_cp03_ParamLimits

0xd366,	// (0x00029010) call_type_pane_cp03

0xd3ca,	// (0x00029074) popup_call2_audio_first_window_g1_ParamLimits

0xd3ca,	// (0x00029074) popup_call2_audio_first_window_g1

0xd43a,	// (0x000290e4) popup_call2_audio_first_window_g2_ParamLimits

0xd43a,	// (0x000290e4) popup_call2_audio_first_window_g2

0xd298,	// (0x00028f42) popup_call2_audio_first_window_g3_ParamLimits

0xd298,	// (0x00028f42) popup_call2_audio_first_window_g3

0x0004,

0xf480,	// (0x0002b12a) popup_call2_audio_first_window_g_ParamLimits

0xf480,	// (0x0002b12a) popup_call2_audio_first_window_g

0xd518,	// (0x000291c2) popup_call2_audio_first_window_t1_ParamLimits

0xd518,	// (0x000291c2) popup_call2_audio_first_window_t1

0xd61b,	// (0x000292c5) popup_call2_audio_first_window_t4_ParamLimits

0xd61b,	// (0x000292c5) popup_call2_audio_first_window_t4

0xd6fe,	// (0x000293a8) popup_call2_audio_first_window_t5_ParamLimits

0xd6fe,	// (0x000293a8) popup_call2_audio_first_window_t5

0x0003,

0xf48b,	// (0x0002b135) popup_call2_audio_first_window_t_ParamLimits

0xf48b,	// (0x0002b135) popup_call2_audio_first_window_t

0xbc97,	// (0x00027941) bg_popup_call2_act_pane_g1

0xdd29,	// (0x000299d3) popup_cale_lunar_info_window_t1

0xdd37,	// (0x000299e1) popup_cale_lunar_info_window_t2

0xdd45,	// (0x000299ef) popup_cale_lunar_info_window_t3

0xba44,	// (0x000276ee) bg_popup_call2_bubble_pane

0xd7ff,	// (0x000294a9) bg_popup_call2_in_pane_cp01_ParamLimits

0xd7ff,	// (0x000294a9) bg_popup_call2_in_pane_cp01

0xb720,	// (0x000273ca) call_type_pane_cp02

0x6957,	// (0x00022601) popup_call2_audio_out_window_g1_ParamLimits

0x6957,	// (0x00022601) popup_call2_audio_out_window_g1

0xd847,	// (0x000294f1) popup_call2_audio_out_window_g2_ParamLimits

0xd847,	// (0x000294f1) popup_call2_audio_out_window_g2

0x6983,	// (0x0002262d) popup_call2_audio_out_window_g3_ParamLimits

0x6983,	// (0x0002262d) popup_call2_audio_out_window_g3

0x0003,

0xf494,	// (0x0002b13e) popup_call2_audio_out_window_g_ParamLimits

0xf494,	// (0x0002b13e) popup_call2_audio_out_window_g

0xd87e,	// (0x00029528) popup_call2_audio_out_window_t1_ParamLimits

0xd87e,	// (0x00029528) popup_call2_audio_out_window_t1

0xd8dd,	// (0x00029587) popup_call2_audio_out_window_t2_ParamLimits

0xd8dd,	// (0x00029587) popup_call2_audio_out_window_t2

0xd931,	// (0x000295db) popup_call2_audio_out_window_t3_ParamLimits

0xd931,	// (0x000295db) popup_call2_audio_out_window_t3

0xd947,	// (0x000295f1) popup_call2_audio_out_window_t4_ParamLimits

0xd947,	// (0x000295f1) popup_call2_audio_out_window_t4

0xd95d,	// (0x00029607) popup_call2_audio_out_window_t5_ParamLimits

0xd95d,	// (0x00029607) popup_call2_audio_out_window_t5

0x0005,

0xf49d,	// (0x0002b147) popup_call2_audio_out_window_t_ParamLimits

0xf49d,	// (0x0002b147) popup_call2_audio_out_window_t

0xd9c1,	// (0x0002966b) bg_popup_call2_in_pane_ParamLimits

0xd9c1,	// (0x0002966b) bg_popup_call2_in_pane

0xda1d,	// (0x000296c7) popup_call2_audio_in_window_g1_ParamLimits

0xda1d,	// (0x000296c7) popup_call2_audio_in_window_g1

0xda55,	// (0x000296ff) popup_call2_audio_in_window_g2_ParamLimits

0xda55,	// (0x000296ff) popup_call2_audio_in_window_g2

0xda8d,	// (0x00029737) popup_call2_audio_in_window_g3_ParamLimits

0xda8d,	// (0x00029737) popup_call2_audio_in_window_g3

0x0003,

0xf4aa,	// (0x0002b154) popup_call2_audio_in_window_g_ParamLimits

0xf4aa,	// (0x0002b154) popup_call2_audio_in_window_g

0xdae5,	// (0x0002978f) popup_call2_audio_in_window_t1_ParamLimits

0xdae5,	// (0x0002978f) popup_call2_audio_in_window_t1

0xdb65,	// (0x0002980f) popup_call2_audio_in_window_t2_ParamLimits

0xdb65,	// (0x0002980f) popup_call2_audio_in_window_t2

0xdbe5,	// (0x0002988f) popup_call2_audio_in_window_t3_ParamLimits

0xdbe5,	// (0x0002988f) popup_call2_audio_in_window_t3

0xdbff,	// (0x000298a9) popup_call2_audio_in_window_t4_ParamLimits

0xdbff,	// (0x000298a9) popup_call2_audio_in_window_t4

0xdc11,	// (0x000298bb) popup_call2_audio_in_window_t5_ParamLimits

0xdc11,	// (0x000298bb) popup_call2_audio_in_window_t5

0xdc26,	// (0x000298d0) popup_call2_audio_in_window_t6_ParamLimits

0xdc26,	// (0x000298d0) popup_call2_audio_in_window_t6

0x0005,

0xf4b3,	// (0x0002b15d) popup_call2_audio_in_window_t_ParamLimits

0xf4b3,	// (0x0002b15d) popup_call2_audio_in_window_t

0xbc97,	// (0x00027941) bg_popup_call2_in_pane_g1

0xdd53,	// (0x000299fd) popup_cale_lunar_info_window_t4

0x0003,

0xf51b,	// (0x0002b1c5) popup_cale_lunar_info_window_t

0xbc9f,	// (0x00027949) bg_popup_call2_rect_pane_ParamLimits

0xbc9f,	// (0x00027949) bg_popup_call2_rect_pane

0xba44,	// (0x000276ee) call2_cli_visual_graphic_pane

0xba44,	// (0x000276ee) call2_cli_visual_text_pane

0x3504,	// (0x0001f1ae) smil_status_volume_pane_g3

0x0002,

0xbcb7,	// (0x00027961) call2_cli_visual_graphic_pane_g1

0xbcb7,	// (0x00027961) call2_cli_visual_graphic_pane_g2

0xbcb7,	// (0x00027961) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4c0,	// (0x0002b16a) call2_cli_visual_graphic_pane_g

0xdc3b,	// (0x000298e5) bg_popup_call2_rect_pane_g1

0xbe71,	// (0x00027b1b) bg_popup_call2_rect_pane_g2

0xdc43,	// (0x000298ed) bg_popup_call2_rect_pane_g3

0xdc4b,	// (0x000298f5) bg_popup_call2_rect_pane_g4

0xdc53,	// (0x000298fd) bg_popup_call2_rect_pane_g5

0xdc5b,	// (0x00029905) bg_popup_call2_rect_pane_g6

0xdc63,	// (0x0002990d) bg_popup_call2_rect_pane_g7

0xdc6b,	// (0x00029915) bg_popup_call2_rect_pane_g8

0xdc73,	// (0x0002991d) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c7,	// (0x0002b171) bg_popup_call2_rect_pane_g

0xdc7b,	// (0x00029925) bg_popup_call2_bubble_pane_g1

0xdc83,	// (0x0002992d) bg_popup_call2_bubble_pane_g2

0xdc8b,	// (0x00029935) bg_popup_call2_bubble_pane_g3

0xdc93,	// (0x0002993d) bg_popup_call2_bubble_pane_g4

0xdc9b,	// (0x00029945) bg_popup_call2_bubble_pane_g5

0xdca3,	// (0x0002994d) bg_popup_call2_bubble_pane_g6

0xdcab,	// (0x00029955) bg_popup_call2_bubble_pane_g7

0xdcb3,	// (0x0002995d) bg_popup_call2_bubble_pane_g8

0xdcbb,	// (0x00029965) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4da,	// (0x0002b184) bg_popup_call2_bubble_pane_g

0x47ad,	// (0x00020457) aid_cale_week_size_cell_pane

0xbc9f,	// (0x00027949) aid_cams_cif_uncrop_pane_ParamLimits

0xbc9f,	// (0x00027949) aid_cams_cif_uncrop_pane

0x4cb1,	// (0x0002095b) aid_cams_size_cell_ParamLimits

0x4cb1,	// (0x0002095b) aid_cams_size_cell

0x4cbd,	// (0x00020967) grid_cams_pane_ParamLimits

0x4ccb,	// (0x00020975) linegrid_cams_pane_ParamLimits

0x4da2,	// (0x00020a4c) call_video_pane_t1

0x4dc3,	// (0x00020a6d) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0002ae8c) call_video_pane_t

0x530a,	// (0x00020fb4) aid_cale_month_size_cell_pane_ParamLimits

0x530a,	// (0x00020fb4) aid_cale_month_size_cell_pane

0xf55f,	// (0x0002b209) smil_status_volume_pane_g

0x3511,	// (0x0001f1bb) volume_smil_pane_ParamLimits

0x2caf,	// (0x0001e959) aid_popup2_width_pane

0x46e6,	// (0x00020390) cell_qdial_pane_g4_ParamLimits

0x46e6,	// (0x00020390) cell_qdial_pane_g4

0x60ed,	// (0x00021d97) aid_blid_cardinal_pane_ParamLimits

0x60fd,	// (0x00021da7) aid_blid_destination_pane_ParamLimits

0x60fd,	// (0x00021da7) aid_blid_destination_pane

0xbc9f,	// (0x00027949) bg_popup_call_poc_act_pane_ParamLimits

0xbc9f,	// (0x00027949) bg_popup_call_poc_act_pane

0xbc9f,	// (0x00027949) bg_popup_call_poc_inact_pane_ParamLimits

0xbc9f,	// (0x00027949) bg_popup_call_poc_inact_pane

0xdcc3,	// (0x0002996d) bg_popup_call_poc_act_pane_g1

0xdccb,	// (0x00029975) bg_popup_call_poc_act_pane_g2

0xdcd3,	// (0x0002997d) bg_popup_call_poc_act_pane_g3

0xdc93,	// (0x0002993d) bg_popup_call_poc_act_pane_g4

0xdc9b,	// (0x00029945) bg_popup_call_poc_act_pane_g5

0xdcdb,	// (0x00029985) bg_popup_call_poc_act_pane_g6

0xdcab,	// (0x00029955) bg_popup_call_poc_act_pane_g7

0xdce3,	// (0x0002998d) bg_popup_call_poc_act_pane_g8

0xba44,	// (0x000276ee) main_usb_pane

0x33e4,	// (0x0001f08e) popup_cale_lunar_info_window

0x50ec,	// (0x00020d96) im_reading_pane_t1_ParamLimits

0xc03b,	// (0x00027ce5) list_im_pane_ParamLimits

0xc04c,	// (0x00027cf6) scroll_pane_cp07_ParamLimits

0xba44,	// (0x000276ee) grid_highlight_pane_cp012

0xbc9f,	// (0x00027949) mup_scale_pane_ParamLimits

0xd298,	// (0x00028f42) main_usb_pane_g1_ParamLimits

0xd298,	// (0x00028f42) main_usb_pane_g1

0x69e4,	// (0x0002268e) main_usb_pane_g2_ParamLimits

0x69e4,	// (0x0002268e) main_usb_pane_g2

0x0001,

0xf504,	// (0x0002b1ae) main_usb_pane_g_ParamLimits

0xf504,	// (0x0002b1ae) main_usb_pane_g

0x69f0,	// (0x0002269a) main_usb_pane_t1_ParamLimits

0x69f0,	// (0x0002269a) main_usb_pane_t1

0x6a02,	// (0x000226ac) main_usb_pane_t2_ParamLimits

0x6a02,	// (0x000226ac) main_usb_pane_t2

0x6a14,	// (0x000226be) main_usb_pane_t3_ParamLimits

0x6a14,	// (0x000226be) main_usb_pane_t3

0x6a26,	// (0x000226d0) main_usb_pane_t4_ParamLimits

0x6a26,	// (0x000226d0) main_usb_pane_t4

0x6a38,	// (0x000226e2) main_usb_pane_t5_ParamLimits

0x6a38,	// (0x000226e2) main_usb_pane_t5

0x6a4a,	// (0x000226f4) main_usb_pane_t6_ParamLimits

0x6a4a,	// (0x000226f4) main_usb_pane_t6

0x0005,

0xf509,	// (0x0002b1b3) main_usb_pane_t_ParamLimits

0x6093,	// (0x00021d3d) aid_text_placing

0x609f,	// (0x00021d49) main_location2_pane_t1_ParamLimits

0x60b3,	// (0x00021d5d) main_location2_pane_t2_ParamLimits

0x60c7,	// (0x00021d71) main_location2_pane_t3_ParamLimits

0x60db,	// (0x00021d85) main_location2_pane_t4_ParamLimits

0x60db,	// (0x00021d85) main_location2_pane_t4

0xf323,	// (0x0002afcd) main_location2_pane_t_ParamLimits

0xbcdb,	// (0x00027985) find_pinb_pane_g2_ParamLimits

0xbcdb,	// (0x00027985) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0002ad44) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0002ad44) find_pinb_pane_g

0xbce7,	// (0x00027991) find_pinb_pane_t1_ParamLimits

0xbcf9,	// (0x000279a3) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0002ad49) find_pinb_pane_t_ParamLimits

0xba44,	// (0x000276ee) main_call3_pane

0x58ad,	// (0x00021557) cale_month_day_heading_pane_t1_ParamLimits

0x5933,	// (0x000215dd) cale_month_day_heading_pane_t2_ParamLimits

0x59ac,	// (0x00021656) cale_month_day_heading_pane_t3_ParamLimits

0x5a25,	// (0x000216cf) cale_month_day_heading_pane_t4_ParamLimits

0x5a9e,	// (0x00021748) cale_month_day_heading_pane_t5_ParamLimits

0x5b17,	// (0x000217c1) cale_month_day_heading_pane_t6_ParamLimits

0x5b90,	// (0x0002183a) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0002aec4) cale_month_day_heading_pane_t_ParamLimits

0xc296,	// (0x00027f40) smil_status_volume_pane

0x6540,	// (0x000221ea) postcard_address_pane_ParamLimits

0x6540,	// (0x000221ea) postcard_address_pane

0x654c,	// (0x000221f6) postcard_message_pane_ParamLimits

0x654c,	// (0x000221f6) postcard_message_pane

0x69af,	// (0x00022659) call2_cli_visual_pane_t1_ParamLimits

0x69af,	// (0x00022659) call2_cli_visual_pane_t1

0xde68,	// (0x00029b12) postcard_message_pane_t1_ParamLimits

0xde68,	// (0x00029b12) postcard_message_pane_t1

0xde50,	// (0x00029afa) postcard_address_pane_t1_ParamLimits

0xde50,	// (0x00029afa) postcard_address_pane_t1

0x6d8c,	// (0x00022a36) popup_call3_audio_in_window_ParamLimits

0x6d8c,	// (0x00022a36) popup_call3_audio_in_window

0x6c70,	// (0x0002291a) bg_popup_call3_in_pane_ParamLimits

0x6c70,	// (0x0002291a) bg_popup_call3_in_pane

0x6cd2,	// (0x0002297c) popup_call3_audio_in_window_g1_ParamLimits

0x6cd2,	// (0x0002297c) popup_call3_audio_in_window_g1

0x6cea,	// (0x00022994) popup_call3_audio_in_window_g2_ParamLimits

0x6cea,	// (0x00022994) popup_call3_audio_in_window_g2

0x6d02,	// (0x000229ac) popup_call3_audio_in_window_g3_ParamLimits

0x6d02,	// (0x000229ac) popup_call3_audio_in_window_g3

0x0003,

0xf566,	// (0x0002b210) popup_call3_audio_in_window_g_ParamLimits

0xf566,	// (0x0002b210) popup_call3_audio_in_window_g

0x6d2a,	// (0x000229d4) popup_call3_audio_in_window_t1_ParamLimits

0x6d2a,	// (0x000229d4) popup_call3_audio_in_window_t1

0x6d52,	// (0x000229fc) popup_call3_audio_in_window_t2_ParamLimits

0x6d52,	// (0x000229fc) popup_call3_audio_in_window_t2

0x6d7a,	// (0x00022a24) popup_call3_audio_in_window_t3_ParamLimits

0x6d7a,	// (0x00022a24) popup_call3_audio_in_window_t3

0x0002,

0xf56f,	// (0x0002b219) popup_call3_audio_in_window_t_ParamLimits

0xf56f,	// (0x0002b219) popup_call3_audio_in_window_t

0xbf4c,	// (0x00027bf6) bg_popup_call3_rect_pane

0xdc3b,	// (0x000298e5) bg_popup_call3_rect_pane_g1

0xbe71,	// (0x00027b1b) bg_popup_call3_rect_pane_g2

0xdc43,	// (0x000298ed) bg_popup_call3_rect_pane_g3

0xdc4b,	// (0x000298f5) bg_popup_call3_rect_pane_g4

0xdc53,	// (0x000298fd) bg_popup_call3_rect_pane_g5

0xdc5b,	// (0x00029905) bg_popup_call3_rect_pane_g6

0xdc63,	// (0x0002990d) bg_popup_call3_rect_pane_g7

0xb627,	// (0x000272d1) mup_visualizer_osc_pane

0xb627,	// (0x000272d1) mup_visualizer_spec_pane

0x6c90,	// (0x0002293a) call3_video_qcif_pane_ParamLimits

0x6c90,	// (0x0002293a) call3_video_qcif_pane

0x6ca2,	// (0x0002294c) call3_video_qcif_uncrop_pane_ParamLimits

0x6ca2,	// (0x0002294c) call3_video_qcif_uncrop_pane

0x6cb0,	// (0x0002295a) call3_video_subqcif_pane_ParamLimits

0x6cb0,	// (0x0002295a) call3_video_subqcif_pane

0x6cc2,	// (0x0002296c) call3_video_subqcif_uncrop_pane_ParamLimits

0x6cc2,	// (0x0002296c) call3_video_subqcif_uncrop_pane

0x6d1a,	// (0x000229c4) popup_call3_audio_in_window_g4_ParamLimits

0x6d1a,	// (0x000229c4) popup_call3_audio_in_window_g4

0xb627,	// (0x000272d1) mup_spec_half_pane

0xb627,	// (0x000272d1) mup_spec_half_pane_cp

0xb627,	// (0x000272d1) mup_osc_middle_pane

0xbf6e,	// (0x00027c18) mup_visualizer_osc_pane_g1

0xde03,	// (0x00029aad) mup_spec_bar_pane_ParamLimits

0xde03,	// (0x00029aad) mup_spec_bar_pane

0xbf6e,	// (0x00027c18) mup_spec_bar_pane_g1

0xbf6e,	// (0x00027c18) mup_spec_bar_pane_g2

0x0001,

0xf39d,	// (0x0002b047) mup_spec_bar_pane_g

0x47ad,	// (0x00020457) aid_cale_week_size_cell_pane_ParamLimits

0x47c2,	// (0x0002046c) bg_cale_heading_pane_ParamLimits

0xbeae,	// (0x00027b58) bg_cale_pane_cp01_ParamLimits

0x47e2,	// (0x0002048c) cale_week_corner_pane_ParamLimits

0x47fc,	// (0x000204a6) cale_week_day_heading_pane_ParamLimits

0x481c,	// (0x000204c6) cale_week_scroll_pane_g1_ParamLimits

0x4837,	// (0x000204e1) cale_week_scroll_pane_g2_ParamLimits

0x484a,	// (0x000204f4) cale_week_scroll_pane_g3_ParamLimits

0x485d,	// (0x00020507) cale_week_scroll_pane_g4_ParamLimits

0x4870,	// (0x0002051a) cale_week_scroll_pane_g5_ParamLimits

0x4883,	// (0x0002052d) cale_week_scroll_pane_g6_ParamLimits

0x4896,	// (0x00020540) cale_week_scroll_pane_g7_ParamLimits

0x48ab,	// (0x00020555) cale_week_scroll_pane_g8_ParamLimits

0x48c0,	// (0x0002056a) cale_week_scroll_pane_g9_ParamLimits

0x48d3,	// (0x0002057d) cale_week_scroll_pane_g10_ParamLimits

0x48e6,	// (0x00020590) cale_week_scroll_pane_g11_ParamLimits

0x48f9,	// (0x000205a3) cale_week_scroll_pane_g12_ParamLimits

0x4910,	// (0x000205ba) cale_week_scroll_pane_g13_ParamLimits

0x492b,	// (0x000205d5) cale_week_scroll_pane_g14_ParamLimits

0x4946,	// (0x000205f0) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0002add5) cale_week_scroll_pane_g_ParamLimits

0x4976,	// (0x00020620) cale_week_time_pane_ParamLimits

0x498b,	// (0x00020635) grid_cale_week_pane_ParamLimits

0xbecb,	// (0x00027b75) listscroll_cale_week_pane_t1

0xbedd,	// (0x00027b87) scroll_pane_cp08_ParamLimits

0x537e,	// (0x00021028) cale_month_corner_pane_ParamLimits

0xc26c,	// (0x00027f16) cale_month_pane_t1

0x5830,	// (0x000214da) cale_month_week_pane_ParamLimits

0xd298,	// (0x00028f42) popup_call_status_window_g1_ParamLimits

0x5f5d,	// (0x00021c07) popup_call_status_window_g2_ParamLimits

0x5f69,	// (0x00021c13) popup_call_status_window_g3_ParamLimits

0xf2aa,	// (0x0002af54) popup_call_status_window_g_ParamLimits

0xc64f,	// (0x000282f9) aid_call2_pane

0x645e,	// (0x00022108) msg_header_pane_g1

0x6540,	// (0x000221ea) postcard_address2_pane_ParamLimits

0x6540,	// (0x000221ea) postcard_address2_pane

0x654c,	// (0x000221f6) postcard_message2_pane_ParamLimits

0x654c,	// (0x000221f6) postcard_message2_pane

0x6c42,	// (0x000228ec) message2_row_pane_ParamLimits

0x6c42,	// (0x000228ec) message2_row_pane

0x6c5d,	// (0x00022907) address2_row_pane_ParamLimits

0x6c5d,	// (0x00022907) address2_row_pane

0xddd0,	// (0x00029a7a) postcard_message2_row_pane_g1

0xddd8,	// (0x00029a82) postcard_message2_row_pane_t1

0xddd0,	// (0x00029a7a) address2_row_pane_g1

0xddd8,	// (0x00029a82) address2_row_pane_t1

0x4b2b,	// (0x000207d5) aid_size_cell_vorec

0xba44,	// (0x000276ee) main_rss_pane

0xdde6,	// (0x00029a90) rss_list_single_pane_ParamLimits

0xdde6,	// (0x00029a90) rss_list_single_pane

0xddf4,	// (0x00029a9e) rss_list_single_pane_t1

0xddf4,	// (0x00029a9e) rss_list_single_pane_t2

0x0001,

0xf55a,	// (0x0002b204) rss_list_single_pane_t

0xba44,	// (0x000276ee) main_camera2_pane

0xba44,	// (0x000276ee) main_video2_pane

0x2f29,	// (0x0001ebd3) cams_zoom_pane_cp2_ParamLimits

0x2f29,	// (0x0001ebd3) cams_zoom_pane_cp2

0x2f29,	// (0x0001ebd3) image2_vga_pane_ParamLimits

0x2f29,	// (0x0001ebd3) image2_vga_pane

0xc683,	// (0x0002832d) main_camera2_pane_g1_ParamLimits

0xc683,	// (0x0002832d) main_camera2_pane_g1

0xc683,	// (0x0002832d) main_camera2_pane_g2_ParamLimits

0xc683,	// (0x0002832d) main_camera2_pane_g2

0xc683,	// (0x0002832d) main_camera2_pane_g3_ParamLimits

0xc683,	// (0x0002832d) main_camera2_pane_g3

0xc683,	// (0x0002832d) main_camera2_pane_g4_ParamLimits

0xc683,	// (0x0002832d) main_camera2_pane_g4

0xc683,	// (0x0002832d) main_camera2_pane_g5_ParamLimits

0xc683,	// (0x0002832d) main_camera2_pane_g5

0xc683,	// (0x0002832d) main_camera2_pane_g6_ParamLimits

0xc683,	// (0x0002832d) main_camera2_pane_g6

0xc683,	// (0x0002832d) main_camera2_pane_g7_ParamLimits

0xc683,	// (0x0002832d) main_camera2_pane_g7

0xc683,	// (0x0002832d) main_camera2_pane_g8_ParamLimits

0xc683,	// (0x0002832d) main_camera2_pane_g8

0x0008,

0xf576,	// (0x0002b220) main_camera2_pane_g_ParamLimits

0xf576,	// (0x0002b220) main_camera2_pane_g

0x3534,	// (0x0001f1de) main_camera2_pane_t1_ParamLimits

0x3534,	// (0x0001f1de) main_camera2_pane_t1

0x3534,	// (0x0001f1de) main_camera2_pane_t2_ParamLimits

0x3534,	// (0x0001f1de) main_camera2_pane_t2

0x3534,	// (0x0001f1de) main_camera2_pane_t3_ParamLimits

0x3534,	// (0x0001f1de) main_camera2_pane_t3

0x3534,	// (0x0001f1de) main_camera2_pane_t4_ParamLimits

0x3534,	// (0x0001f1de) main_camera2_pane_t4

0x0006,

0xf589,	// (0x0002b233) main_camera2_pane_t_ParamLimits

0xf589,	// (0x0002b233) main_camera2_pane_t

0x355c,	// (0x0001f206) cams_zoom_pane_cp4_ParamLimits

0x355c,	// (0x0001f206) cams_zoom_pane_cp4

0x338f,	// (0x0001f039) image2_cif_pane_ParamLimits

0x338f,	// (0x0001f039) image2_cif_pane

0x2f29,	// (0x0001ebd3) image2_subqcif_pane_ParamLimits

0x2f29,	// (0x0001ebd3) image2_subqcif_pane

0x356a,	// (0x0001f214) main_video2_pane_g1_ParamLimits

0x356a,	// (0x0001f214) main_video2_pane_g1

0x356a,	// (0x0001f214) main_video2_pane_g2_ParamLimits

0x356a,	// (0x0001f214) main_video2_pane_g2

0x356a,	// (0x0001f214) main_video2_pane_g3_ParamLimits

0x356a,	// (0x0001f214) main_video2_pane_g3

0x356a,	// (0x0001f214) main_video2_pane_g4_ParamLimits

0x356a,	// (0x0001f214) main_video2_pane_g4

0x356a,	// (0x0001f214) main_video2_pane_g5_ParamLimits

0x356a,	// (0x0001f214) main_video2_pane_g5

0x356a,	// (0x0001f214) main_video2_pane_g6_ParamLimits

0x356a,	// (0x0001f214) main_video2_pane_g6

0x0005,

0xf598,	// (0x0002b242) main_video2_pane_g_ParamLimits

0xf598,	// (0x0002b242) main_video2_pane_g

0x3578,	// (0x0001f222) main_video2_pane_t1_ParamLimits

0x3578,	// (0x0001f222) main_video2_pane_t1

0x3578,	// (0x0001f222) main_video2_pane_t2_ParamLimits

0x3578,	// (0x0001f222) main_video2_pane_t2

0x3578,	// (0x0001f222) main_video2_pane_t3_ParamLimits

0x3578,	// (0x0001f222) main_video2_pane_t3

0x0002,

0xf5a5,	// (0x0002b24f) main_video2_pane_t_ParamLimits

0xf5a5,	// (0x0002b24f) main_video2_pane_t

0x6ae0,	// (0x0002278a) call_muted_g2

0x0001,

0xf54c,	// (0x0002b1f6) call_muted_g

0xba44,	// (0x000276ee) main_mup2_pane

0xbd44,	// (0x000279ee) main_mup2_pane_g1_ParamLimits

0xbd44,	// (0x000279ee) main_mup2_pane_g1

0xbd44,	// (0x000279ee) main_mup2_pane_g2_ParamLimits

0xbd44,	// (0x000279ee) main_mup2_pane_g2

0x01cd,	// (0x0001be77) main_mup_pane_g13_cp1

0x2f37,	// (0x0001ebe1) mup_volume_pane_cp1

0xbd44,	// (0x000279ee) main_mup2_pane_g4_ParamLimits

0xbd44,	// (0x000279ee) main_mup2_pane_g4

0xbd44,	// (0x000279ee) main_mup2_pane_g5_ParamLimits

0xbd44,	// (0x000279ee) main_mup2_pane_g5

0xbd44,	// (0x000279ee) main_mup2_pane_g6_ParamLimits

0xbd44,	// (0x000279ee) main_mup2_pane_g6

0xbd44,	// (0x000279ee) main_mup2_pane_g7_ParamLimits

0xbd44,	// (0x000279ee) main_mup2_pane_g7

0x0006,

0xf5ac,	// (0x0002b256) main_mup2_pane_g_ParamLimits

0xf5ac,	// (0x0002b256) main_mup2_pane_g

0xbd52,	// (0x000279fc) main_mup2_pane_t1_ParamLimits

0xbd52,	// (0x000279fc) main_mup2_pane_t1

0xbd52,	// (0x000279fc) main_mup2_pane_t2_ParamLimits

0xbd52,	// (0x000279fc) main_mup2_pane_t2

0xbd52,	// (0x000279fc) main_mup2_pane_t3_ParamLimits

0xbd52,	// (0x000279fc) main_mup2_pane_t3

0xbd52,	// (0x000279fc) main_mup2_pane_t4_ParamLimits

0xbd52,	// (0x000279fc) main_mup2_pane_t4

0xbd52,	// (0x000279fc) main_mup2_pane_t5_ParamLimits

0xbd52,	// (0x000279fc) main_mup2_pane_t5

0xbd52,	// (0x000279fc) main_mup2_pane_t6_ParamLimits

0xbd52,	// (0x000279fc) main_mup2_pane_t6

0x0005,

0xf5bb,	// (0x0002b265) main_mup2_pane_t_ParamLimits

0xf5bb,	// (0x0002b265) main_mup2_pane_t

0xdd1b,	// (0x000299c5) mup2_visualizer_pane_ParamLimits

0xdd1b,	// (0x000299c5) mup2_visualizer_pane

0xdd1b,	// (0x000299c5) mup_progress_pane_cp_ParamLimits

0xdd1b,	// (0x000299c5) mup_progress_pane_cp

0x35a2,	// (0x0001f24c) mup_volume_pane_cp_ParamLimits

0x35a2,	// (0x0001f24c) mup_volume_pane_cp

0xbd28,	// (0x000279d2) mup2_visualizer_pane_g1_ParamLimits

0xbd28,	// (0x000279d2) mup2_visualizer_pane_g1

0xbd36,	// (0x000279e0) mup2_visualizer_pane_g2_ParamLimits

0xbd36,	// (0x000279e0) mup2_visualizer_pane_g2

0xbd36,	// (0x000279e0) mup2_visualizer_pane_g3_ParamLimits

0xbd36,	// (0x000279e0) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0002ad4e) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0002ad4e) mup2_visualizer_pane_g

0xcd6a,	// (0x00028a14) aid_size_cell_fmradio

0x3378,	// (0x0001f022) aid_height_parent_landcape

0xc0ca,	// (0x00027d74) wml_content_pane_cp

0xc0d2,	// (0x00027d7c) wml_tabs_pane

0xc0db,	// (0x00027d85) popup_wml_miniature_window

0xc0e3,	// (0x00027d8d) scroll_pane_cp021

0xc0f7,	// (0x00027da1) wml_content_pane_comp8

0xba44,	// (0x000276ee) bg_popup_sub_pane_cp05

0xde9a,	// (0x00029b44) popup_wml_miniature_window_g1

0xdea2,	// (0x00029b4c) wml_miniature_view_pane

0x6d9b,	// (0x00022a45) aid_size_wml_view

0x6da3,	// (0x00022a4d) wml_miniature_view_pane_g1

0x6dac,	// (0x00022a56) wml_miniature_view_pane_g2

0x6db5,	// (0x00022a5f) wml_miniature_view_pane_g3

0x6dbd,	// (0x00022a67) wml_miniature_view_pane_g4

0x6dc5,	// (0x00022a6f) wml_miniature_view_pane_g5

0x6dcd,	// (0x00022a77) wml_miniature_view_pane_g6

0x6dd5,	// (0x00022a7f) wml_miniature_view_pane_g7

0x6ddd,	// (0x00022a87) wml_miniature_view_pane_g8

0x0007,

0xf5c8,	// (0x0002b272) wml_miniature_view_pane_g

0xdeaa,	// (0x00029b54) background_graphic_ParamLimits

0xdeaa,	// (0x00029b54) background_graphic

0xdeb6,	// (0x00029b60) wml_tabs_2_pane

0xdebf,	// (0x00029b69) wml_tabs_3_pane_ParamLimits

0xdebf,	// (0x00029b69) wml_tabs_3_pane

0xded1,	// (0x00029b7b) wml_tabs_4_pane_ParamLimits

0xded1,	// (0x00029b7b) wml_tabs_4_pane

0xdee7,	// (0x00029b91) wml_tabs_5_pane_ParamLimits

0xdee7,	// (0x00029b91) wml_tabs_5_pane

0xdf01,	// (0x00029bab) wml_tabs_pane_g2_ParamLimits

0xdf01,	// (0x00029bab) wml_tabs_pane_g2

0xdf16,	// (0x00029bc0) wml_tabs_pane_g3_ParamLimits

0xdf16,	// (0x00029bc0) wml_tabs_pane_g3

0xdf2b,	// (0x00029bd5) wml_tabs_2_active_pane_ParamLimits

0xdf2b,	// (0x00029bd5) wml_tabs_2_active_pane

0xdf2b,	// (0x00029bd5) wml_tabs_2_passive_pane_ParamLimits

0xdf2b,	// (0x00029bd5) wml_tabs_2_passive_pane

0x6de5,	// (0x00022a8f) wml_tabs_3_active_pane_cp_ParamLimits

0x6de5,	// (0x00022a8f) wml_tabs_3_active_pane_cp

0x6df6,	// (0x00022aa0) wml_tabs_3_passive_pane_ParamLimits

0x6df6,	// (0x00022aa0) wml_tabs_3_passive_pane

0x6e07,	// (0x00022ab1) wml_tabs_3_passive_pane_cp_ParamLimits

0x6e07,	// (0x00022ab1) wml_tabs_3_passive_pane_cp

0x6e18,	// (0x00022ac2) tabs_4_active_pane

0x6e20,	// (0x00022aca) tabs_4_passive_pane

0x6e28,	// (0x00022ad2) tabs_4_passive_pane_cp

0x6e30,	// (0x00022ada) tabs_4_passive_pane_cp2

0x69dc,	// (0x00022686) aid_height_text

0xdd1b,	// (0x000299c5) mup_volume_cont_pane_ParamLimits

0xdd1b,	// (0x000299c5) mup_volume_cont_pane

0xb627,	// (0x000272d1) aid_size_cell_pinb

0xb627,	// (0x000272d1) aid_size_list_pinb

0xdd1b,	// (0x000299c5) mup2_volume_cont_pane_ParamLimits

0xdd1b,	// (0x000299c5) mup2_volume_cont_pane

0x358c,	// (0x0001f236) mup2_volume_cont_pane_g1_ParamLimits

0x358c,	// (0x0001f236) mup2_volume_cont_pane_g1

0x2cbb,	// (0x0001e965) aid_size_cell_touch_ParamLimits

0x2cbb,	// (0x0001e965) aid_size_cell_touch

0x2f41,	// (0x0001ebeb) touch_pane_ParamLimits

0x2f41,	// (0x0001ebeb) touch_pane

0x2f37,	// (0x0001ebe1) main_rss2_pane

0xdf42,	// (0x00029bec) listscroll_rss2_pane

0xdf4b,	// (0x00029bf5) rss2_navigation_pane

0xdf53,	// (0x00029bfd) list_rss2_pane

0xc786,	// (0x00028430) scroll_pane_cp22

0xdf5b,	// (0x00029c05) rss2_navigation_pane_g1

0xdf64,	// (0x00029c0e) rss2_navigation_pane_g2

0xdf6c,	// (0x00029c16) rss2_navigation_pane_g3

0x0002,

0xf5d9,	// (0x0002b283) rss2_navigation_pane_g

0xdf74,	// (0x00029c1e) rss2_navigation_pane_t1

0x6e38,	// (0x00022ae2) rss2_list_single_pane_ParamLimits

0x6e38,	// (0x00022ae2) rss2_list_single_pane

0xdf82,	// (0x00029c2c) rss2_list_single_pane_t2

0xdf90,	// (0x00029c3a) rss2_list_single_pane_t3_ParamLimits

0xdf90,	// (0x00029c3a) rss2_list_single_pane_t3

0xdfad,	// (0x00029c57) rss2_list_single_pane_t4

0x5df4,	// (0x00021a9e) smil_status_pane_g1

0x338f,	// (0x0001f039) main_image2_pane_ParamLimits

0x338f,	// (0x0001f039) main_image2_pane

0xc683,	// (0x0002832d) main_camera2_pane_g9_ParamLimits

0xc683,	// (0x0002832d) main_camera2_pane_g9

0x3534,	// (0x0001f1de) main_camera2_pane_t5_ParamLimits

0x3534,	// (0x0001f1de) main_camera2_pane_t5

0x3548,	// (0x0001f1f2) main_camera2_pane_t6_ParamLimits

0x3548,	// (0x0001f1f2) main_camera2_pane_t6

0x6e69,	// (0x00022b13) main_image2_pane_g1_ParamLimits

0x6e69,	// (0x00022b13) main_image2_pane_g1

0x6714,	// (0x000223be) smil2_video_pane_ParamLimits

0x6714,	// (0x000223be) smil2_video_pane

0x2cef,	// (0x0001e999) aid_zoom_text_primary_cp

0x2ede,	// (0x0001eb88) popup_preview_fixed_window

0xc033,	// (0x00027cdd) im_reading_pane_g1

0x3526,	// (0x0001f1d0) cams2_bc_adjust_pane_cp_ParamLimits

0x3526,	// (0x0001f1d0) cams2_bc_adjust_pane_cp

0x2f29,	// (0x0001ebd3) cams2_bc_adjust_pane_ParamLimits

0x2f29,	// (0x0001ebd3) cams2_bc_adjust_pane

0x01cd,	// (0x0001be77) cams2_bc_adjust_pane_g1

0x2f37,	// (0x0001ebe1) cams2_slider_pane

0x01cd,	// (0x0001be77) cams2_slider_pane_g1

0x01cd,	// (0x0001be77) cams2_slider_pane_g2

0x0006,

0xf5e0,	// (0x0002b28a) cams2_slider_pane_g

0x2fb2,	// (0x0001ec5c) calc_display_pane_ParamLimits

0x2fd0,	// (0x0001ec7a) calc_paper_pane_ParamLimits

0x2fec,	// (0x0001ec96) grid_calc_pane_ParamLimits

0x32e3,	// (0x0001ef8d) popup_clock_digital_window_t1_ParamLimits

0xccd7,	// (0x00028981) main_image_pane_t1

0x2f98,	// (0x0001ec42) aid_size_cell_calc_ParamLimits

0x2f98,	// (0x0001ec42) aid_size_cell_calc

0x33c0,	// (0x0001f06a) popup_blid_sat_info2_window_ParamLimits

0x33c0,	// (0x0001f06a) popup_blid_sat_info2_window

0xdfbb,	// (0x00029c65) aid_size_cell_blid

0xdd1b,	// (0x000299c5) bg_popup_window_pane_cp07

0xdfd8,	// (0x00029c82) grid_popup_blid_pane

0xdfe2,	// (0x00029c8c) heading_pane_cp05_ParamLimits

0xdfe2,	// (0x00029c8c) heading_pane_cp05

0xe0ac,	// (0x00029d56) cell_popup_blid_pane_ParamLimits

0xe0ac,	// (0x00029d56) cell_popup_blid_pane

0xe0d0,	// (0x00029d7a) cell_popup_blid_pane_g1

0xe0d8,	// (0x00029d82) cell_popup_blid_pane_t1

0xdd1b,	// (0x000299c5) mup2_indicator_pane_ParamLimits

0xdd1b,	// (0x000299c5) mup2_indicator_pane

0xb627,	// (0x000272d1) mup2_visualizer_osc_pane

0xde84,	// (0x00029b2e) mup2_visualizer_spec_pane_ParamLimits

0xde84,	// (0x00029b2e) mup2_visualizer_spec_pane

0xb627,	// (0x000272d1) mup2_spec_half_pane

0xb627,	// (0x000272d1) mup2_spec_half_pane_cp

0xe0e6,	// (0x00029d90) mup2_spec_bar_pane_ParamLimits

0xe0e6,	// (0x00029d90) mup2_spec_bar_pane

0xbf6e,	// (0x00027c18) mup2_spec_bar_pane_g1

0xe105,	// (0x00029daf) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002b2b0) mup2_spec_bar_pane_g

0xb627,	// (0x000272d1) mup2_osc_middle_pane

0xbf6e,	// (0x00027c18) mup2_visualizer_osc_pane_g1

0xb651,	// (0x000272fb) popup_number_entry_window_t1_ParamLimits

0xb664,	// (0x0002730e) popup_number_entry_window_t2_ParamLimits

0xb676,	// (0x00027320) popup_number_entry_window_t3_ParamLimits

0x4518,	// (0x000201c2) popup_number_entry_window_t5_ParamLimits

0x4518,	// (0x000201c2) popup_number_entry_window_t5

0xf045,	// (0x0002acef) popup_number_entry_window_t_ParamLimits

0xb688,	// (0x00027332) text_title_cp2_ParamLimits

0x3322,	// (0x0001efcc) aid_hotspot_pointer_text2_pane

0x336c,	// (0x0001f016) main_viewer_pane_g9_ParamLimits

0x336c,	// (0x0001f016) main_viewer_pane_g9

0xc26c,	// (0x00027f16) cale_month_pane_t1_ParamLimits

0xc2d0,	// (0x00027f7a) bg_cale_pane_ParamLimits

0xc2e8,	// (0x00027f92) list_cale_pane_ParamLimits

0xc2f9,	// (0x00027fa3) listscroll_cale_day_pane_t1

0xc30b,	// (0x00027fb5) scroll_pane_cp09_ParamLimits

0x61c9,	// (0x00021e73) main_mup_eq_pane_t1_ParamLimits

0x61c9,	// (0x00021e73) main_mup_eq_pane_t1

0x61e3,	// (0x00021e8d) main_mup_eq_pane_t2_ParamLimits

0x61e3,	// (0x00021e8d) main_mup_eq_pane_t2

0x61fd,	// (0x00021ea7) main_mup_eq_pane_t3_ParamLimits

0x61fd,	// (0x00021ea7) main_mup_eq_pane_t3

0x6215,	// (0x00021ebf) main_mup_eq_pane_t4_ParamLimits

0x6215,	// (0x00021ebf) main_mup_eq_pane_t4

0x622d,	// (0x00021ed7) main_mup_eq_pane_t5_ParamLimits

0x622d,	// (0x00021ed7) main_mup_eq_pane_t5

0x6245,	// (0x00021eef) main_mup_eq_pane_t6_ParamLimits

0x6245,	// (0x00021eef) main_mup_eq_pane_t6

0x6259,	// (0x00021f03) main_mup_eq_pane_t7_ParamLimits

0x6259,	// (0x00021f03) main_mup_eq_pane_t7

0x626d,	// (0x00021f17) main_mup_eq_pane_t8_ParamLimits

0x626d,	// (0x00021f17) main_mup_eq_pane_t8

0x6283,	// (0x00021f2d) main_mup_eq_pane_t9_ParamLimits

0x6283,	// (0x00021f2d) main_mup_eq_pane_t9

0x629b,	// (0x00021f45) main_mup_eq_pane_t10_ParamLimits

0x629b,	// (0x00021f45) main_mup_eq_pane_t10

0x0009,

0xf3a9,	// (0x0002b053) main_mup_eq_pane_t_ParamLimits

0xf3a9,	// (0x0002b053) main_mup_eq_pane_t

0x6358,	// (0x00022002) mup_equalizer_pane_cp5_ParamLimits

0x636e,	// (0x00022018) mup_equalizer_pane_cp6_ParamLimits

0x6386,	// (0x00022030) mup_equalizer_pane_cp7_ParamLimits

0x2f37,	// (0x0001ebe1) main_gallery_pane

0xde22,	// (0x00029acc) smil2_volume_pane

0xde2a,	// (0x00029ad4) smil_status_volume_pane_g1_ParamLimits

0xde3d,	// (0x00029ae7) smil_status_volume_pane_g2_ParamLimits

0x3504,	// (0x0001f1ae) smil_status_volume_pane_g3_ParamLimits

0xf55f,	// (0x0002b209) smil_status_volume_pane_g_ParamLimits

0xdd1b,	// (0x000299c5) bg_popup_window_pane_cp07_ParamLimits

0xdfc3,	// (0x00029c6d) blid_firmament_pane

0xbd1a,	// (0x000279c4) aid_size_cell_gallery_ParamLimits

0xbd1a,	// (0x000279c4) aid_size_cell_gallery

0xbd1a,	// (0x000279c4) grid_gallery_pane_ParamLimits

0xbd1a,	// (0x000279c4) grid_gallery_pane

0xcd3a,	// (0x000289e4) cell_gallery_pane_ParamLimits

0xcd3a,	// (0x000289e4) cell_gallery_pane

0xbcc1,	// (0x0002796b) bg_cell_gallery_focus_pane_ParamLimits

0xbcc1,	// (0x0002796b) bg_cell_gallery_focus_pane

0xbd28,	// (0x000279d2) cell_gallery_pane_g1_ParamLimits

0xbd28,	// (0x000279d2) cell_gallery_pane_g1

0xbd28,	// (0x000279d2) cell_gallery_pane_g2_ParamLimits

0xbd28,	// (0x000279d2) cell_gallery_pane_g2

0xbd28,	// (0x000279d2) cell_gallery_pane_g3_ParamLimits

0xbd28,	// (0x000279d2) cell_gallery_pane_g3

0xbd36,	// (0x000279e0) cell_gallery_pane_g4_ParamLimits

0xbd36,	// (0x000279e0) cell_gallery_pane_g4

0x0003,

0xf60b,	// (0x0002b2b5) cell_gallery_pane_g_ParamLimits

0xf60b,	// (0x0002b2b5) cell_gallery_pane_g

0xe10f,	// (0x00029db9) bg_cell_gallery_focus_pane_g1

0xe117,	// (0x00029dc1) bg_cell_gallery_focus_pane_g2

0xe11f,	// (0x00029dc9) bg_cell_gallery_focus_pane_g3

0xe127,	// (0x00029dd1) bg_cell_gallery_focus_pane_g4

0xe12f,	// (0x00029dd9) bg_cell_gallery_focus_pane_g5

0xe137,	// (0x00029de1) bg_cell_gallery_focus_pane_g6

0xe13f,	// (0x00029de9) bg_cell_gallery_focus_pane_g7

0xe147,	// (0x00029df1) bg_cell_gallery_focus_pane_g8

0x0007,

0xf614,	// (0x0002b2be) bg_cell_gallery_focus_pane_g

0xe14f,	// (0x00029df9) aid_firma_cardinal

0xe163,	// (0x00029e0d) blid_firmament_pane_t1

0xe188,	// (0x00029e32) blid_firmament_pane_t2

0xe19f,	// (0x00029e49) blid_firmament_pane_t3

0xe1b6,	// (0x00029e60) blid_firmament_pane_t4

0x0003,

0xf625,	// (0x0002b2cf) blid_firmament_pane_t

0xe1cd,	// (0x00029e77) blid_sat_info_pane

0xbf6e,	// (0x00027c18) blid_sat_info_pane_g1

0xbf6e,	// (0x00027c18) blid_sat_info_pane_g2

0x0001,

0xf39d,	// (0x0002b047) blid_sat_info_pane_g

0xe1dd,	// (0x00029e87) blid_sat_info_pane_t1

0xe1eb,	// (0x00029e95) smil2_volume_content_pane

0xe1f4,	// (0x00029e9e) smil2_volume_pane_g1

0xc2a9,	// (0x00027f53) smil2_volume_content_pane_g1

0xe1fc,	// (0x00029ea6) smil2_volume_content_pane_g2

0xe205,	// (0x00029eaf) smil2_volume_content_pane_g3

0xe20e,	// (0x00029eb8) smil2_volume_content_pane_g4

0xe217,	// (0x00029ec1) smil2_volume_content_pane_g5

0xe220,	// (0x00029eca) smil2_volume_content_pane_g6

0xe229,	// (0x00029ed3) smil2_volume_content_pane_g7

0xe232,	// (0x00029edc) smil2_volume_content_pane_g8

0xe23b,	// (0x00029ee5) smil2_volume_content_pane_g9

0xe244,	// (0x00029eee) smil2_volume_content_pane_g10

0x0009,

0xf62e,	// (0x0002b2d8) smil2_volume_content_pane_g

0x4a0c,	// (0x000206b6) cale_week_day_heading_pane_t1_ParamLimits

0x4a27,	// (0x000206d1) cale_week_day_heading_pane_t2_ParamLimits

0x4a42,	// (0x000206ec) cale_week_day_heading_pane_t3_ParamLimits

0x4a5d,	// (0x00020707) cale_week_day_heading_pane_t4_ParamLimits

0x4a78,	// (0x00020722) cale_week_day_heading_pane_t5_ParamLimits

0x4a93,	// (0x0002073d) cale_week_day_heading_pane_t6_ParamLimits

0x4aae,	// (0x00020758) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0002adf6) cale_week_day_heading_pane_t_ParamLimits

0xbefa,	// (0x00027ba4) bg_cale_side_pane_ParamLimits

0x3143,	// (0x0001eded) cale_week_time_pane_t1_ParamLimits

0x315d,	// (0x0001ee07) cale_week_time_pane_t2_ParamLimits

0x3177,	// (0x0001ee21) cale_week_time_pane_t3_ParamLimits

0x3191,	// (0x0001ee3b) cale_week_time_pane_t4_ParamLimits

0x31ab,	// (0x0001ee55) cale_week_time_pane_t5_ParamLimits

0x31c5,	// (0x0001ee6f) cale_week_time_pane_t6_ParamLimits

0x31e3,	// (0x0001ee8d) cale_week_time_pane_t7_ParamLimits

0x3205,	// (0x0001eeaf) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0002ae05) cale_week_time_pane_t_ParamLimits

0x4ac9,	// (0x00020773) cell_cale_week_pane_g2_ParamLimits

0xbefa,	// (0x00027ba4) bg_cale_side_pane_cp01_ParamLimits

0x5c21,	// (0x000218cb) cale_month_week_pane_t1_ParamLimits

0x5c3a,	// (0x000218e4) cale_month_week_pane_t2_ParamLimits

0x5c53,	// (0x000218fd) cale_month_week_pane_t3_ParamLimits

0x5c6c,	// (0x00021916) cale_month_week_pane_t4_ParamLimits

0x5c85,	// (0x0002192f) cale_month_week_pane_t5_ParamLimits

0x5ca6,	// (0x00021950) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0002aed3) cale_month_week_pane_t_ParamLimits

0x3233,	// (0x0001eedd) cell_cale_month_pane_g1_ParamLimits

0x2f37,	// (0x0001ebe1) main_cale_event_viewer_pane

0xb627,	// (0x000272d1) listscroll_cale_event_viewer_pane

0xe24d,	// (0x00029ef7) list_cale_ev_pane

0xe255,	// (0x00029eff) scroll_pane_cp023

0xe261,	// (0x00029f0b) field_cale_ev_pane_ParamLimits

0xe261,	// (0x00029f0b) field_cale_ev_pane

0xe27f,	// (0x00029f29) field_cale_ev_content_pane_ParamLimits

0xe27f,	// (0x00029f29) field_cale_ev_content_pane

0xe28b,	// (0x00029f35) field_cale_ev_pane_g1_ParamLimits

0xe28b,	// (0x00029f35) field_cale_ev_pane_g1

0xe297,	// (0x00029f41) field_cale_ev_pane_g2_ParamLimits

0xe297,	// (0x00029f41) field_cale_ev_pane_g2

0xe2af,	// (0x00029f59) field_cale_ev_pane_g3_ParamLimits

0xe2af,	// (0x00029f59) field_cale_ev_pane_g3

0x0002,

0xf643,	// (0x0002b2ed) field_cale_ev_pane_g_ParamLimits

0xf643,	// (0x0002b2ed) field_cale_ev_pane_g

0xe2c7,	// (0x00029f71) field_cale_ev_pane_t1_ParamLimits

0xe2c7,	// (0x00029f71) field_cale_ev_pane_t1

0xc2b2,	// (0x00027f5c) field_cale_ev_content_pane_t1_ParamLimits

0xc2b2,	// (0x00027f5c) field_cale_ev_content_pane_t1

0xcb3b,	// (0x000287e5) bg_button_pane_cp01

0x479d,	// (0x00020447) listscroll_cale_week_pane_ParamLimits

0xbea5,	// (0x00027b4f) popup_toolbar_window_cp01

0xbecb,	// (0x00027b75) listscroll_cale_week_pane_t1_ParamLimits

0x479d,	// (0x00020447) listscroll_cale_day_pane_ParamLimits

0xbea5,	// (0x00027b4f) popup_toolbar_window_cp02

0xc2f9,	// (0x00027fa3) listscroll_cale_day_pane_t1_ParamLimits

0x479d,	// (0x00020447) main_cale_month_pane_ParamLimits

0x34c7,	// (0x0001f171) popup_toolbar_window_cp03_ParamLimits

0x34c7,	// (0x0001f171) popup_toolbar_window_cp03

0x662a,	// (0x000222d4) main_image_pane_g2_ParamLimits

0x662a,	// (0x000222d4) main_image_pane_g2

0x6636,	// (0x000222e0) main_image_pane_g3_ParamLimits

0x6636,	// (0x000222e0) main_image_pane_g3

0x0002,

0xf43b,	// (0x0002b0e5) main_image_pane_g_ParamLimits

0xf43b,	// (0x0002b0e5) main_image_pane_g

0xccd7,	// (0x00028981) main_image_pane_t1_ParamLimits

0x6642,	// (0x000222ec) main_image_pane_t2_ParamLimits

0x6642,	// (0x000222ec) main_image_pane_t2

0x6654,	// (0x000222fe) main_image_pane_t3_ParamLimits

0x6654,	// (0x000222fe) main_image_pane_t3

0x6666,	// (0x00022310) main_image_pane_t4_ParamLimits

0x6666,	// (0x00022310) main_image_pane_t4

0x0003,

0xf442,	// (0x0002b0ec) main_image_pane_t_ParamLimits

0xf442,	// (0x0002b0ec) main_image_pane_t

0x6678,	// (0x00022322) popup_image_details_window_cp01

0x6682,	// (0x0002232c) popup_toobar_trans_pane_cp01_ParamLimits

0x6682,	// (0x0002232c) popup_toobar_trans_pane_cp01

0x3417,	// (0x0001f0c1) popup_image_details_window_ParamLimits

0x3417,	// (0x0001f0c1) popup_image_details_window

0x3425,	// (0x0001f0cf) popup_image_focus_window

0x2f29,	// (0x0001ebd3) camera2_autofocus_pane_ParamLimits

0x2f29,	// (0x0001ebd3) camera2_autofocus_pane

0xb627,	// (0x000272d1) bg_popup_sub_pane_cp06

0xe2de,	// (0x00029f88) popup_image_focus_window_g1

0xe2e6,	// (0x00029f90) popup_image_focus_window_g2

0xe2ee,	// (0x00029f98) popup_image_focus_window_g3

0xe2f6,	// (0x00029fa0) popup_image_focus_window_g4

0x0003,

0xf64a,	// (0x0002b2f4) popup_image_focus_window_g

0xe2fe,	// (0x00029fa8) popup_image_focus_window_t1

0xe30c,	// (0x00029fb6) popup_image_focus_window_t2

0xe31c,	// (0x00029fc6) popup_image_focus_window_t3

0x0002,

0xf653,	// (0x0002b2fd) popup_image_focus_window_t

0xbd28,	// (0x000279d2) camera2_autofocus_pane_g1

0xbcc1,	// (0x0002796b) bg_tb_trans_pane_cp01

0xe32a,	// (0x00029fd4) popup_image_details_window_g1

0xe33d,	// (0x00029fe7) popup_image_details_window_g2

0x0002,

0xf665,	// (0x0002b30f) popup_image_details_window_g

0xe366,	// (0x0002a010) popup_image_details_window_t1

0xe378,	// (0x0002a022) popup_image_details_window_t2

0xe391,	// (0x0002a03b) popup_image_details_window_t3

0xe3a5,	// (0x0002a04f) popup_image_details_window_t4

0xe3c0,	// (0x0002a06a) popup_image_details_window_t5

0x0004,

0xf66c,	// (0x0002b316) popup_image_details_window_t

0xbd86,	// (0x00027a30) bg_calc_paper_pane_ParamLimits

0x2f37,	// (0x0001ebe1) grid_highlight_pane_cp013

0x3018,	// (0x0001ecc2) list_calc_pane_ParamLimits

0x302a,	// (0x0001ecd4) scroll_pane_cp024

0xbd9a,	// (0x00027a44) bg_calc_display_pane_ParamLimits

0x3032,	// (0x0001ecdc) calc_display_pane_t1_ParamLimits

0x3047,	// (0x0001ecf1) calc_display_pane_t2_ParamLimits

0x305c,	// (0x0001ed06) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0002ad76) calc_display_pane_t_ParamLimits

0x30c5,	// (0x0001ed6f) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0002ad93) cell_calc_pane_g

0x30ce,	// (0x0001ed78) cell_calc_pane_t1

0xbdef,	// (0x00027a99) grid_highlight_pane_cp02_ParamLimits

0xbe05,	// (0x00027aaf) toolbar_button_pane_cp01_ParamLimits

0xbe05,	// (0x00027aaf) toolbar_button_pane_cp01

0xcd1c,	// (0x000289c6) temp_image_control_pane_ParamLimits

0xcd1c,	// (0x000289c6) temp_image_control_pane

0x338f,	// (0x0001f039) main_mp3_pane

0xe3da,	// (0x0002a084) temp_image_control_pane_g1_ParamLimits

0xe3da,	// (0x0002a084) temp_image_control_pane_g1

0xe3e8,	// (0x0002a092) temp_image_control_pane_g2_ParamLimits

0xe3e8,	// (0x0002a092) temp_image_control_pane_g2

0xe3fa,	// (0x0002a0a4) temp_image_control_pane_g3_ParamLimits

0xe3fa,	// (0x0002a0a4) temp_image_control_pane_g3

0x6e75,	// (0x00022b1f) temp_image_control_pane_g4_ParamLimits

0x6e75,	// (0x00022b1f) temp_image_control_pane_g4

0x0003,

0xf677,	// (0x0002b321) temp_image_control_pane_g_ParamLimits

0xf677,	// (0x0002b321) temp_image_control_pane_g

0xe3da,	// (0x0002a084) main_mp3_pane_g1

0x6e86,	// (0x00022b30) main_mp3_pane_g2

0x0007,

0xf680,	// (0x0002b32a) main_mp3_pane_g

0xe42f,	// (0x0002a0d9) main_mp3_pane_t1

0xbd36,	// (0x000279e0) main_camera_pane_g8_ParamLimits

0xbd36,	// (0x000279e0) main_camera_pane_g8

0x4c69,	// (0x00020913) main_video_pane_g7_ParamLimits

0x4c69,	// (0x00020913) main_video_pane_g7

0x3534,	// (0x0001f1de) main_camera2_pane_t7_ParamLimits

0x3534,	// (0x0001f1de) main_camera2_pane_t7

0xc08a,	// (0x00027d34) scroll_pane_cp025_ParamLimits

0xc08a,	// (0x00027d34) scroll_pane_cp025

0xc09e,	// (0x00027d48) scroll_pane_cp026_ParamLimits

0xc09e,	// (0x00027d48) scroll_pane_cp026

0xc0ad,	// (0x00027d57) wml_content_pane_ParamLimits

0x2f37,	// (0x0001ebe1) main_touch_calib_pane

0x6f2a,	// (0x00022bd4) main_touch_calib_pane_g1

0x6f36,	// (0x00022be0) main_touch_calib_pane_g2

0x6f42,	// (0x00022bec) main_touch_calib_pane_g3

0x6f4e,	// (0x00022bf8) main_touch_calib_pane_g4

0x0003,

0xf69e,	// (0x0002b348) main_touch_calib_pane_g

0x6f5a,	// (0x00022c04) main_touch_calib_pane_t1

0x6f73,	// (0x00022c1d) main_touch_calib_pane_t2

0x0004,

0xf6a7,	// (0x0002b351) main_touch_calib_pane_t

0xc882,	// (0x0002852c) mup_progress_pane_cp02

0xc8b7,	// (0x00028561) navi_pane_g1

0xc972,	// (0x0002861c) navi_pane_mp_t3

0x338f,	// (0x0001f039) main_mp3_pane_ParamLimits

0x6bf6,	// (0x000228a0) navi_pane_ParamLimits

0xe3da,	// (0x0002a084) main_mp3_pane_g1_ParamLimits

0x6e86,	// (0x00022b30) main_mp3_pane_g2_ParamLimits

0x6e92,	// (0x00022b3c) main_mp3_pane_g3_ParamLimits

0x6e92,	// (0x00022b3c) main_mp3_pane_g3

0x6e9e,	// (0x00022b48) main_mp3_pane_g4_ParamLimits

0x6e9e,	// (0x00022b48) main_mp3_pane_g4

0xbd28,	// (0x000279d2) main_mp3_pane_g5_ParamLimits

0xbd28,	// (0x000279d2) main_mp3_pane_g5

0xe40a,	// (0x0002a0b4) main_mp3_pane_g6_ParamLimits

0xe40a,	// (0x0002a0b4) main_mp3_pane_g6

0xe417,	// (0x0002a0c1) main_mp3_pane_g7_ParamLimits

0xe417,	// (0x0002a0c1) main_mp3_pane_g7

0xe423,	// (0x0002a0cd) main_mp3_pane_g8_ParamLimits

0xe423,	// (0x0002a0cd) main_mp3_pane_g8

0xf680,	// (0x0002b32a) main_mp3_pane_g_ParamLimits

0x6eaa,	// (0x00022b54) main_mp3_pane_t2

0x6eba,	// (0x00022b64) main_mp3_pane_t3

0xe43d,	// (0x0002a0e7) main_mp3_pane_t4

0xe44b,	// (0x0002a0f5) main_mp3_pane_t5

0x0005,

0xf691,	// (0x0002b33b) main_mp3_pane_t

0xe459,	// (0x0002a103) mup_progress_pane_cp01

0x2cef,	// (0x0001e999) aid_zoom_text_secondary2

0xe24d,	// (0x00029ef7) list_cale_ev2_pane

0xe255,	// (0x00029eff) scroll_pane_cp023_ParamLimits

0x6fce,	// (0x00022c78) field_cale_ev2_pane_ParamLimits

0x6fce,	// (0x00022c78) field_cale_ev2_pane

0x6ff7,	// (0x00022ca1) field_cale_ev2_pane_g1_ParamLimits

0x6ff7,	// (0x00022ca1) field_cale_ev2_pane_g1

0x7003,	// (0x00022cad) field_cale_ev2_pane_g2_ParamLimits

0x7003,	// (0x00022cad) field_cale_ev2_pane_g2

0x701b,	// (0x00022cc5) field_cale_ev2_pane_g3_ParamLimits

0x701b,	// (0x00022cc5) field_cale_ev2_pane_g3

0x0003,

0xf6b2,	// (0x0002b35c) field_cale_ev2_pane_g_ParamLimits

0xf6b2,	// (0x0002b35c) field_cale_ev2_pane_g

0x7033,	// (0x00022cdd) field_cale_ev2_pane_t1_ParamLimits

0x7033,	// (0x00022cdd) field_cale_ev2_pane_t1

0x704a,	// (0x00022cf4) field_cale_ev2_pane_t2_ParamLimits

0x704a,	// (0x00022cf4) field_cale_ev2_pane_t2

0x0001,

0xf6bb,	// (0x0002b365) field_cale_ev2_pane_t_ParamLimits

0xf6bb,	// (0x0002b365) field_cale_ev2_pane_t

0x650a,	// (0x000221b4) main_postcard_pane_g5_ParamLimits

0x650a,	// (0x000221b4) main_postcard_pane_g5

0x6518,	// (0x000221c2) main_postcard_pane_g6_ParamLimits

0x6518,	// (0x000221c2) main_postcard_pane_g6

0xbd1a,	// (0x000279c4) camera2_autofocus_pane_cp_ParamLimits

0xbd1a,	// (0x000279c4) camera2_autofocus_pane_cp

0x338f,	// (0x0001f039) main_mup3_pane

0x709e,	// (0x00022d48) main_mup3_pane_g1_ParamLimits

0x709e,	// (0x00022d48) main_mup3_pane_g1

0x70bf,	// (0x00022d69) main_mup3_pane_g2_ParamLimits

0x70bf,	// (0x00022d69) main_mup3_pane_g2

0x7137,	// (0x00022de1) main_mup3_pane_g3_ParamLimits

0x7137,	// (0x00022de1) main_mup3_pane_g3

0x717a,	// (0x00022e24) main_mup3_pane_g4_ParamLimits

0x717a,	// (0x00022e24) main_mup3_pane_g4

0x71bd,	// (0x00022e67) main_mup3_pane_g5_ParamLimits

0x71bd,	// (0x00022e67) main_mup3_pane_g5

0x7200,	// (0x00022eaa) main_mup3_pane_g6_ParamLimits

0x7200,	// (0x00022eaa) main_mup3_pane_g6

0xbd36,	// (0x000279e0) main_mup3_pane_g7_ParamLimits

0xbd36,	// (0x000279e0) main_mup3_pane_g7

0x0007,

0xf6cb,	// (0x0002b375) main_mup3_pane_g_ParamLimits

0xf6cb,	// (0x0002b375) main_mup3_pane_g

0x7276,	// (0x00022f20) main_mup3_pane_t1_ParamLimits

0x7276,	// (0x00022f20) main_mup3_pane_t1

0x72e5,	// (0x00022f8f) main_mup3_pane_t2_ParamLimits

0x72e5,	// (0x00022f8f) main_mup3_pane_t2

0x73ae,	// (0x00023058) main_mup3_pane_t4_ParamLimits

0x73ae,	// (0x00023058) main_mup3_pane_t4

0x73fc,	// (0x000230a6) main_mup3_pane_t5_ParamLimits

0x73fc,	// (0x000230a6) main_mup3_pane_t5

0x74ac,	// (0x00023156) main_mup3_pane_t6_ParamLimits

0x74ac,	// (0x00023156) main_mup3_pane_t6

0x0005,

0xf6dc,	// (0x0002b386) main_mup3_pane_t_ParamLimits

0xf6dc,	// (0x0002b386) main_mup3_pane_t

0x7558,	// (0x00023202) mup3_progress_pane_ParamLimits

0x7558,	// (0x00023202) mup3_progress_pane

0x75d6,	// (0x00023280) popup_mup3_control_window_ParamLimits

0x75d6,	// (0x00023280) popup_mup3_control_window

0xe46d,	// (0x0002a117) popup_mup3_text_window

0x75ef,	// (0x00023299) mup3_progress_pane_t1

0x760e,	// (0x000232b8) mup3_progress_pane_t2

0xe475,	// (0x0002a11f) mup3_progress_pane_t3

0x0002,

0xf6e9,	// (0x0002b393) mup3_progress_pane_t

0xe492,	// (0x0002a13c) mup_progress_pane_cp03

0xb627,	// (0x000272d1) bg_tb_trans_pane_cp04

0x762d,	// (0x000232d7) mup3_volume_pane

0x7635,	// (0x000232df) popup_mup3_control_window_g1

0x763e,	// (0x000232e8) mup3_volume_pane_g1

0x7647,	// (0x000232f1) mup3_volume_pane_g2

0x7650,	// (0x000232fa) mup3_volume_pane_g3

0x0002,

0xf6f0,	// (0x0002b39a) mup3_volume_pane_g

0xb627,	// (0x000272d1) bg_tb_trans_pane_cp03

0xe4a2,	// (0x0002a14c) popup_mup3_text_window_g1

0xe4aa,	// (0x0002a154) popup_mup3_text_window_t1

0xbde2,	// (0x00027a8c) list_calc_item_pane_g1_ParamLimits

0xdf39,	// (0x00029be3) mup_volume_pane_cp_g1

0x6f8c,	// (0x00022c36) main_touch_calib_pane_t3

0x6fa2,	// (0x00022c4c) main_touch_calib_pane_t4

0x6fb8,	// (0x00022c62) main_touch_calib_pane_t5

0x2ca7,	// (0x0001e951) aid_cell_size_toolbar2

0x2caf,	// (0x0001e959) aid_popup3_width_pane

0x2cef,	// (0x0001e999) aid_zoom_text_msg_primary

0x4b75,	// (0x0002081f) vorec_t7

0xbda6,	// (0x00027a50) bg_calc_paper_pane_g1_ParamLimits

0xbdb2,	// (0x00027a5c) bg_calc_paper_pane_g2_ParamLimits

0xbdbe,	// (0x00027a68) bg_calc_paper_pane_g3_ParamLimits

0xbdca,	// (0x00027a74) bg_calc_paper_pane_g4_ParamLimits

0xbdd6,	// (0x00027a80) bg_calc_paper_pane_g5_ParamLimits

0x4646,	// (0x000202f0) bg_calc_paper_pane_g6_ParamLimits

0x4657,	// (0x00020301) bg_calc_paper_pane_g7_ParamLimits

0x4668,	// (0x00020312) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0002ad7d) bg_calc_paper_pane_g_ParamLimits

0x4679,	// (0x00020323) calc_bg_paper_pane_g9_ParamLimits

0xbd1a,	// (0x000279c4) image_qvga_pane_ParamLimits

0xbd1a,	// (0x000279c4) image_qvga_pane

0xbc9f,	// (0x00027949) bg_popup_sub_pane_cp04_ParamLimits

0xcc53,	// (0x000288fd) popup_mup_playback_window_g1_ParamLimits

0xcc5f,	// (0x00028909) popup_mup_playback_window_t1_ParamLimits

0xcc74,	// (0x0002891e) popup_mup_playback_window_t2_ParamLimits

0xf436,	// (0x0002b0e0) popup_mup_playback_window_t_ParamLimits

0xbd28,	// (0x000279d2) main_mup2_pane_g3_ParamLimits

0xbd28,	// (0x000279d2) main_mup2_pane_g3

0x4e50,	// (0x00020afa) popup_toolbar_window_cp04

0xd086,	// (0x00028d30) popup_call2_audio_second_window_g3_ParamLimits

0xd086,	// (0x00028d30) popup_call2_audio_second_window_g3

0xd49e,	// (0x00029148) popup_call2_audio_first_window_g4_ParamLimits

0xd49e,	// (0x00029148) popup_call2_audio_first_window_g4

0xdac5,	// (0x0002976f) popup_call2_audio_in_window_g4_ParamLimits

0xdac5,	// (0x0002976f) popup_call2_audio_in_window_g4

0x661d,	// (0x000222c7) aid_area_sk_bg_cut_ParamLimits

0x661d,	// (0x000222c7) aid_area_sk_bg_cut

0xcc89,	// (0x00028933) aid_area_sk_bg_cut_2_ParamLimits

0xcc89,	// (0x00028933) aid_area_sk_bg_cut_2

0xb627,	// (0x000272d1) aid_placing_details_win

0xb627,	// (0x000272d1) aid_placing_details_win_2

0xbd28,	// (0x000279d2) camera2_autofocus_pane_g1_ParamLimits

0x2ecf,	// (0x0001eb79) popup_fixed_preview_cale_window_ParamLimits

0x2ecf,	// (0x0001eb79) popup_fixed_preview_cale_window

0xc9f0,	// (0x0002869a) navi_slider_pane_g3

0xc9f9,	// (0x000286a3) navi_slider_pane_g4

0xca02,	// (0x000286ac) navi_slider_pane_g5

0xc9f0,	// (0x0002869a) navi_slider_pane_g6

0x3309,	// (0x0001efb3) navi_slider_pane_g7

0xcb00,	// (0x000287aa) mup_scale_pane_g3

0xcb09,	// (0x000287b3) mup_scale_pane_g4

0xcb12,	// (0x000287bc) mup_scale_pane_g5

0x639e,	// (0x00022048) mup_scale_pane_g6

0x63a7,	// (0x00022051) mup_scale_pane_g7

0x01cd,	// (0x0001be77) cams2_slider_pane_g3

0x01cd,	// (0x0001be77) cams2_slider_pane_g4

0x01cd,	// (0x0001be77) cams2_slider_pane_g5

0x01cd,	// (0x0001be77) cams2_slider_pane_g6

0x01cd,	// (0x0001be77) cams2_slider_pane_g7

0xbf6e,	// (0x00027c18) camera2_autofocus_pane_cp_g1

0xdda9,	// (0x00029a53) bg_popup_preview_window_pane_cp02_ParamLimits

0xdda9,	// (0x00029a53) bg_popup_preview_window_pane_cp02

0xe4b8,	// (0x0002a162) list_fp_cale_pane_ParamLimits

0xe4b8,	// (0x0002a162) list_fp_cale_pane

0xe4c4,	// (0x0002a16e) popup_fixed_preview_cale_window_t1_ParamLimits

0xe4c4,	// (0x0002a16e) popup_fixed_preview_cale_window_t1

0x7659,	// (0x00023303) popup_fixed_preview_cale_window_t2_ParamLimits

0x7659,	// (0x00023303) popup_fixed_preview_cale_window_t2

0x766e,	// (0x00023318) popup_fixed_preview_cale_window_t3_ParamLimits

0x766e,	// (0x00023318) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f7,	// (0x0002b3a1) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f7,	// (0x0002b3a1) popup_fixed_preview_cale_window_t

0x7683,	// (0x0002332d) list_single_fp_cale_pane_ParamLimits

0x7683,	// (0x0002332d) list_single_fp_cale_pane

0xe4e2,	// (0x0002a18c) list_single_fp_cale_pane_g1_ParamLimits

0xe4e2,	// (0x0002a18c) list_single_fp_cale_pane_g1

0xe4ee,	// (0x0002a198) list_single_fp_cale_pane_g2_ParamLimits

0xe4ee,	// (0x0002a198) list_single_fp_cale_pane_g2

0x0002,

0xf6fe,	// (0x0002b3a8) list_single_fp_cale_pane_g_ParamLimits

0xf6fe,	// (0x0002b3a8) list_single_fp_cale_pane_g

0xe507,	// (0x0002a1b1) list_single_fp_cale_pane_t1_ParamLimits

0xe507,	// (0x0002a1b1) list_single_fp_cale_pane_t1

0xe519,	// (0x0002a1c3) list_single_fp_cale_pane_t2_ParamLimits

0xe519,	// (0x0002a1c3) list_single_fp_cale_pane_t2

0x0001,

0xf705,	// (0x0002b3af) list_single_fp_cale_pane_t_ParamLimits

0xf705,	// (0x0002b3af) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2f37,	// (0x0001ebe1) main_dialer_pane

0xb627,	// (0x000272d1) aid_cell_size_keypad

0xb627,	// (0x000272d1) dialer_ne_pane

0xb627,	// (0x000272d1) grid_dialer_command_1_pane

0xb627,	// (0x000272d1) grid_dialer_command_2_pane

0xb627,	// (0x000272d1) grid_dialer_keypad_pane

0xdd1b,	// (0x000299c5) bg_popup_call_pane_cp06_ParamLimits

0xdd1b,	// (0x000299c5) bg_popup_call_pane_cp06

0xdd1b,	// (0x000299c5) dialer_ne_clear_pane_ParamLimits

0xdd1b,	// (0x000299c5) dialer_ne_clear_pane

0xbf6e,	// (0x00027c18) dialer_ne_pane_g1

0xc845,	// (0x000284ef) dialer_ne_pane_t1_ParamLimits

0xc845,	// (0x000284ef) dialer_ne_pane_t1

0xe5f7,	// (0x0002a2a1) dialer_ne_pane_t2_ParamLimits

0xe5f7,	// (0x0002a2a1) dialer_ne_pane_t2

0x7696,	// (0x00023340) dialer_ne_pane_t3_ParamLimits

0x7696,	// (0x00023340) dialer_ne_pane_t3

0x0002,

0xf70a,	// (0x0002b3b4) dialer_ne_pane_t_ParamLimits

0xf70a,	// (0x0002b3b4) dialer_ne_pane_t

0x7696,	// (0x00023340) dialer_ne_pane_t3_copy1_ParamLimits

0x7696,	// (0x00023340) dialer_ne_pane_t3_copy1

0xe54c,	// (0x0002a1f6) cell_dialer_keypad_pane_ParamLimits

0xe54c,	// (0x0002a1f6) cell_dialer_keypad_pane

0xbcc1,	// (0x0002796b) cell_dialer_command_1_pane_ParamLimits

0xbcc1,	// (0x0002796b) cell_dialer_command_1_pane

0xe563,	// (0x0002a20d) cell_dialer_command_2_pane_ParamLimits

0xe563,	// (0x0002a20d) cell_dialer_command_2_pane

0xbcc1,	// (0x0002796b) bg_button_pane_cp02_ParamLimits

0xbcc1,	// (0x0002796b) bg_button_pane_cp02

0xbd28,	// (0x000279d2) cell_dialer_keypad_pane_g1_ParamLimits

0xbd28,	// (0x000279d2) cell_dialer_keypad_pane_g1

0xbcc1,	// (0x0002796b) bg_button_pane_cp03_ParamLimits

0xbcc1,	// (0x0002796b) bg_button_pane_cp03

0xbd28,	// (0x000279d2) cell_dialer_command_1_pane_g1_ParamLimits

0xbd28,	// (0x000279d2) cell_dialer_command_1_pane_g1

0xb627,	// (0x000272d1) bg_button_pane_cp04

0xbf6e,	// (0x00027c18) cell_dialer_command_2_pane_g1

0xb627,	// (0x000272d1) bg_button_pane_cp06

0xbf6e,	// (0x00027c18) dialer_ne_clear_pane_g1

0xc8c3,	// (0x0002856d) navi_pane_g2

0xc8f1,	// (0x0002859b) navi_pane_g3

0x0002,

0xf339,	// (0x0002afe3) navi_pane_g

0xc980,	// (0x0002862a) navi_pane_mv_g2

0xc9a7,	// (0x00028651) navi_pane_mv_g5

0x617a,	// (0x00021e24) navi_pane_mv_t1

0xbd9a,	// (0x00027a44) main_clock2_pane

0xbd1a,	// (0x000279c4) main_clock2_list_pane_ParamLimits

0xbd1a,	// (0x000279c4) main_clock2_list_pane

0x770c,	// (0x000233b6) main_clock2_pane_t1_ParamLimits

0x770c,	// (0x000233b6) main_clock2_pane_t1

0x773a,	// (0x000233e4) main_clock2_pane_t2_ParamLimits

0x773a,	// (0x000233e4) main_clock2_pane_t2

0x0004,

0xf716,	// (0x0002b3c0) main_clock2_pane_t_ParamLimits

0xf716,	// (0x0002b3c0) main_clock2_pane_t

0x779f,	// (0x00023449) popup_clock_analogue_window_cp03_ParamLimits

0x779f,	// (0x00023449) popup_clock_analogue_window_cp03

0x77bd,	// (0x00023467) popup_clock_digital_window_cp02_ParamLimits

0x77bd,	// (0x00023467) popup_clock_digital_window_cp02

0x77fd,	// (0x000234a7) main_clock2_list_single_pane_ParamLimits

0x77fd,	// (0x000234a7) main_clock2_list_single_pane

0xbf4c,	// (0x00027bf6) list_highlight_pane_cp05

0xe5aa,	// (0x0002a254) main_clock2_list_single_pane_t1

0x4e50,	// (0x00020afa) popup_toolbar_window_cp04_ParamLimits

0xbd36,	// (0x000279e0) camera2_autofocus_pane_g2_ParamLimits

0xbd36,	// (0x000279e0) camera2_autofocus_pane_g2

0xbd36,	// (0x000279e0) camera2_autofocus_pane_g3_ParamLimits

0xbd36,	// (0x000279e0) camera2_autofocus_pane_g3

0xbd36,	// (0x000279e0) camera2_autofocus_pane_g4_ParamLimits

0xbd36,	// (0x000279e0) camera2_autofocus_pane_g4

0xbd36,	// (0x000279e0) camera2_autofocus_pane_g5_ParamLimits

0xbd36,	// (0x000279e0) camera2_autofocus_pane_g5

0x0004,

0xf65a,	// (0x0002b304) camera2_autofocus_pane_g_ParamLimits

0xf65a,	// (0x0002b304) camera2_autofocus_pane_g

0x705f,	// (0x00022d09) camera2_autofocus_pane_cp_g2

0x7067,	// (0x00022d11) camera2_autofocus_pane_cp_g3

0x706f,	// (0x00022d19) camera2_autofocus_pane_cp_g4

0x7077,	// (0x00022d21) camera2_autofocus_pane_cp_g5

0x0004,

0xf6c0,	// (0x0002b36a) camera2_autofocus_pane_cp_g

0xb627,	// (0x000272d1) popup_dialer_spcha_window

0xb627,	// (0x000272d1) bg_popup_sub_pane_cp07

0xb627,	// (0x000272d1) list_spcha_pane

0xe5b8,	// (0x0002a262) list_single_spcha_pane_ParamLimits

0xe5b8,	// (0x0002a262) list_single_spcha_pane

0xb627,	// (0x000272d1) list_highlight_pane_cp06

0xc4d8,	// (0x00028182) list_single_spcha_pane_t1

0xd86f,	// (0x00029519) popup_call2_audio_out_window_g4_ParamLimits

0xd86f,	// (0x00029519) popup_call2_audio_out_window_g4

0x2f37,	// (0x0001ebe1) main_imed2_pane

0x342d,	// (0x0001f0d7) popup_imed_adjust2_window

0x3440,	// (0x0001f0ea) popup_imed_trans_window_ParamLimits

0x3440,	// (0x0001f0ea) popup_imed_trans_window

0xe00e,	// (0x00029cb8) popup_blid_sat_info2_window_t1

0xe01c,	// (0x00029cc6) popup_blid_sat_info2_window_t2

0x000a,

0xf5ef,	// (0x0002b299) popup_blid_sat_info2_window_t

0x780f,	// (0x000234b9) aid_size_cell_colour_35

0x7829,	// (0x000234d3) aid_size_cell_colour_112

0x7840,	// (0x000234ea) aid_size_cell_effect

0xbcc1,	// (0x0002796b) bg_tb_trans_pane_cp02

0xc839,	// (0x000284e3) heading_imed_pane

0x785a,	// (0x00023504) listscroll_imed_pane

0xe5ca,	// (0x0002a274) heading_imed_pane_g1

0xe5d2,	// (0x0002a27c) heading_imed_pane_t1

0xe5e0,	// (0x0002a28a) grid_imed_colour_35_pane_ParamLimits

0xe5e0,	// (0x0002a28a) grid_imed_colour_35_pane

0x7866,	// (0x00023510) grid_imed_effect_pane

0xe614,	// (0x0002a2be) list_imed_aspect_pane

0x7876,	// (0x00023520) scroll_pane_cp027_ParamLimits

0x7876,	// (0x00023520) scroll_pane_cp027

0x7882,	// (0x0002352c) cell_imed_effect_pane_ParamLimits

0x7882,	// (0x0002352c) cell_imed_effect_pane

0xe61c,	// (0x0002a2c6) cell_imed_colour_pane_ParamLimits

0xe61c,	// (0x0002a2c6) cell_imed_colour_pane

0xe65e,	// (0x0002a308) cell_imed_colour_pane_g1_ParamLimits

0xe65e,	// (0x0002a308) cell_imed_colour_pane_g1

0xe66f,	// (0x0002a319) hgihlgiht_grid_pane_cp016_ParamLimits

0xe66f,	// (0x0002a319) hgihlgiht_grid_pane_cp016

0x789a,	// (0x00023544) cell_imed_effect_pane_g1

0x78a2,	// (0x0002354c) grid_highlight_pane_cp017

0xe680,	// (0x0002a32a) list_imed_single_pane_ParamLimits

0xe680,	// (0x0002a32a) list_imed_single_pane

0xb627,	// (0x000272d1) list_highlight_pane_cp07

0xe695,	// (0x0002a33f) list_imed_aspect_pane_comp1_t1

0xcd3a,	// (0x000289e4) bg_tb_trans_pane_cp05

0xe6b7,	// (0x0002a361) popup_imed_adjust2_window_g1

0xe6de,	// (0x0002a388) popup_imed_adjust2_window_t1

0xe6f6,	// (0x0002a3a0) slider_imed_adjust_pane

0xe70a,	// (0x0002a3b4) slider_imed_adjust_pane_g1

0xe71a,	// (0x0002a3c4) slider_imed_adjust_pane_g2

0xe72a,	// (0x0002a3d4) slider_imed_adjust_pane_g3

0xe73b,	// (0x0002a3e5) slider_imed_adjust_pane_g4

0x0003,

0xf733,	// (0x0002b3dd) slider_imed_adjust_pane_g

0x78ab,	// (0x00023555) aid_size_cell_clipart2

0x78b7,	// (0x00023561) grid_imed_clipart_pane

0xe74c,	// (0x0002a3f6) scroll_pane_cp031

0x78c1,	// (0x0002356b) cell_imed_clipart_pane_ParamLimits

0x78c1,	// (0x0002356b) cell_imed_clipart_pane

0x78e3,	// (0x0002358d) cell_imed_clipart_pane_g1

0xb627,	// (0x000272d1) grid_highlight_pane_cp014

0x76ee,	// (0x00023398) main_clock2_pane_g1_ParamLimits

0x76ee,	// (0x00023398) main_clock2_pane_g1

0x77d9,	// (0x00023483) aid_call2_pane_cp10

0x77eb,	// (0x00023495) aid_call_pane_cp10

0xc804,	// (0x000284ae) popup_clock_analogue_window_cp10_g1

0xc804,	// (0x000284ae) popup_clock_analogue_window_cp10_g2

0x35b8,	// (0x0001f262) popup_clock_analogue_window_cp10_g3

0x35b8,	// (0x0001f262) popup_clock_analogue_window_cp10_g4

0xc804,	// (0x000284ae) popup_clock_analogue_window_cp10_g5

0x0004,

0xf721,	// (0x0002b3cb) popup_clock_analogue_window_cp10_g

0x35ce,	// (0x0001f278) popup_clock_analogue_window_cp10_t1

0x35ed,	// (0x0001f297) clock_digital_number_pane_cp10_ParamLimits

0x35ed,	// (0x0001f297) clock_digital_number_pane_cp10

0x3607,	// (0x0001f2b1) clock_digital_number_pane_cp11_ParamLimits

0x3607,	// (0x0001f2b1) clock_digital_number_pane_cp11

0x3621,	// (0x0001f2cb) clock_digital_number_pane_cp12_ParamLimits

0x3621,	// (0x0001f2cb) clock_digital_number_pane_cp12

0x363b,	// (0x0001f2e5) clock_digital_number_pane_cp13_ParamLimits

0x363b,	// (0x0001f2e5) clock_digital_number_pane_cp13

0x3655,	// (0x0001f2ff) clock_digital_separator_pane_cp10_ParamLimits

0x3655,	// (0x0001f2ff) clock_digital_separator_pane_cp10

0x366f,	// (0x0001f319) popup_clock_digital_window_cp02_t1_ParamLimits

0x366f,	// (0x0001f319) popup_clock_digital_window_cp02_t1

0xbc97,	// (0x00027941) clock_digital_number_pane_cp10_g1

0xbc97,	// (0x00027941) clock_digital_number_pane_cp10_g2

0x0001,

0xf73c,	// (0x0002b3e6) clock_digital_number_pane_cp10_g

0xbc97,	// (0x00027941) clock_digital_separator_pane_cp10_g1

0xbc97,	// (0x00027941) clock_digital_separator_pane_g2_cp10

0xc9af,	// (0x00028659) navi_pane_vded_g4

0xc9b8,	// (0x00028662) navi_pane_vded_g5

0xc9c1,	// (0x0002866b) navi_pane_vded_t1

0x2f37,	// (0x0001ebe1) main_vded_pane

0x78ec,	// (0x00023596) main_vded_pane_g1

0x78f8,	// (0x000235a2) main_vded_pane_g2

0x7902,	// (0x000235ac) main_vded_pane_g3

0x0002,

0xf741,	// (0x0002b3eb) main_vded_pane_g

0x790c,	// (0x000235b6) main_vded_pane_t1

0x791a,	// (0x000235c4) main_vded_pane_t2

0x0001,

0xf748,	// (0x0002b3f2) main_vded_pane_t

0x7928,	// (0x000235d2) vded_slider_pane

0x7932,	// (0x000235dc) vded_video_pane

0xe754,	// (0x0002a3fe) vded_video_pane_g1

0x793c,	// (0x000235e6) vded_video_pane_g2

0xbf6e,	// (0x00027c18) vded_video_pane_g3

0x0002,

0xf74d,	// (0x0002b3f7) vded_video_pane_g

0xe75e,	// (0x0002a408) vded_slider_pane_g1

0xdf39,	// (0x00029be3) vded_slider_pane_g2

0xe767,	// (0x0002a411) vded_slider_pane_g3

0xe770,	// (0x0002a41a) vded_slider_pane_g4

0xe779,	// (0x0002a423) vded_slider_pane_g5

0x0004,

0xf754,	// (0x0002b3fe) vded_slider_pane_g

0x75c8,	// (0x00023272) mup3_rocker_pane_ParamLimits

0x75c8,	// (0x00023272) mup3_rocker_pane

0x7945,	// (0x000235ef) mup3_control_keys_pane_g1

0x794d,	// (0x000235f7) mup3_control_keys_pane_g2

0x7955,	// (0x000235ff) mup3_control_keys_pane_g3

0x795d,	// (0x00023607) mup3_control_keys_pane_g4

0x0003,

0xf75f,	// (0x0002b409) mup3_control_keys_pane_g

0x2ef7,	// (0x0001eba1) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2ef7,	// (0x0001eba1) popup_toolbar2_fixed_window_cp01

0x75e2,	// (0x0002328c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x75e2,	// (0x0002328c) popup_toolbar2_fixed_window_cp02

0xd1f8,	// (0x00028ea2) popup_call2_audio_second_window_t4_ParamLimits

0xd1f8,	// (0x00028ea2) popup_call2_audio_second_window_t4

0xd734,	// (0x000293de) popup_call2_audio_first_window_t6_ParamLimits

0xd734,	// (0x000293de) popup_call2_audio_first_window_t6

0xd972,	// (0x0002961c) popup_call2_audio_out_window_t6_ParamLimits

0xd972,	// (0x0002961c) popup_call2_audio_out_window_t6

0x2f37,	// (0x0001ebe1) main_vitu_pane

0xbd1a,	// (0x000279c4) aid_size_cell_itu_ParamLimits

0xbd1a,	// (0x000279c4) aid_size_cell_itu

0xbd1a,	// (0x000279c4) bg_popup_window_pane_cp08_ParamLimits

0xbd1a,	// (0x000279c4) bg_popup_window_pane_cp08

0xbd1a,	// (0x000279c4) field_vitu_entry_pane_ParamLimits

0xbd1a,	// (0x000279c4) field_vitu_entry_pane

0xbd1a,	// (0x000279c4) grid_vitu_function_pane_ParamLimits

0xbd1a,	// (0x000279c4) grid_vitu_function_pane

0xbd1a,	// (0x000279c4) grid_vitu_itu_pane_ParamLimits

0xbd1a,	// (0x000279c4) grid_vitu_itu_pane

0xbd1a,	// (0x000279c4) cell_vitu_itu_pane_ParamLimits

0xbd1a,	// (0x000279c4) cell_vitu_itu_pane

0xbd1a,	// (0x000279c4) cell_vitu_function_pane_ParamLimits

0xbd1a,	// (0x000279c4) cell_vitu_function_pane

0xbcc1,	// (0x0002796b) bg_popup_sub_pane_cp08_ParamLimits

0xbcc1,	// (0x0002796b) bg_popup_sub_pane_cp08

0xbf88,	// (0x00027c32) field_vitu_entry_pane_t1_ParamLimits

0xbf88,	// (0x00027c32) field_vitu_entry_pane_t1

0xe5f7,	// (0x0002a2a1) field_vitu_entry_pane_t2_ParamLimits

0xe5f7,	// (0x0002a2a1) field_vitu_entry_pane_t2

0x0001,

0xf768,	// (0x0002b412) field_vitu_entry_pane_t_ParamLimits

0xf768,	// (0x0002b412) field_vitu_entry_pane_t

0xdd1b,	// (0x000299c5) bg_button_pane_cp05_ParamLimits

0xdd1b,	// (0x000299c5) bg_button_pane_cp05

0xe782,	// (0x0002a42c) cell_vitu_itu_pane_g1

0xcd48,	// (0x000289f2) cell_vitu_itu_pane_t1_ParamLimits

0xcd48,	// (0x000289f2) cell_vitu_itu_pane_t1

0xcd48,	// (0x000289f2) cell_vitu_itu_pane_t2_ParamLimits

0xcd48,	// (0x000289f2) cell_vitu_itu_pane_t2

0x0002,

0xf76d,	// (0x0002b417) cell_vitu_itu_pane_t_ParamLimits

0xf76d,	// (0x0002b417) cell_vitu_itu_pane_t

0xb627,	// (0x000272d1) bg_button_pane_cp07

0xbf6e,	// (0x00027c18) cell_vitu_function_pane_g1

0x3010,	// (0x0001ecba) main_calc_pane_g1

0x2ce3,	// (0x0001e98d) aid_visual_content_pane

0x2f37,	// (0x0001ebe1) main_vradio_pane

0xbd36,	// (0x000279e0) main_vradio_pane_g1_ParamLimits

0xbd36,	// (0x000279e0) main_vradio_pane_g1

0xbd36,	// (0x000279e0) main_vradio_pane_g2_ParamLimits

0xbd36,	// (0x000279e0) main_vradio_pane_g2

0x0001,

0xf774,	// (0x0002b41e) main_vradio_pane_g_ParamLimits

0xf774,	// (0x0002b41e) main_vradio_pane_g

0xc845,	// (0x000284ef) main_vradio_pane_t1_ParamLimits

0xc845,	// (0x000284ef) main_vradio_pane_t1

0xc845,	// (0x000284ef) main_vradio_pane_t2_ParamLimits

0xc845,	// (0x000284ef) main_vradio_pane_t2

0xc845,	// (0x000284ef) main_vradio_pane_t3_ParamLimits

0xc845,	// (0x000284ef) main_vradio_pane_t3

0x0002,

0xf779,	// (0x0002b423) main_vradio_pane_t_ParamLimits

0xf779,	// (0x0002b423) main_vradio_pane_t

0xbd1a,	// (0x000279c4) vradio_rocker_control_pane_ParamLimits

0xbd1a,	// (0x000279c4) vradio_rocker_control_pane

0xbd1a,	// (0x000279c4) vradio_station_info_pane_ParamLimits

0xbd1a,	// (0x000279c4) vradio_station_info_pane

0xbcc1,	// (0x0002796b) vradio_frequency_info_pane_ParamLimits

0xbcc1,	// (0x0002796b) vradio_frequency_info_pane

0xbf6e,	// (0x00027c18) vradio_station_info_pane_g1

0xcd48,	// (0x000289f2) vradio_station_info_pane_t1_ParamLimits

0xcd48,	// (0x000289f2) vradio_station_info_pane_t1

0xc845,	// (0x000284ef) vradio_station_info_pane_t2_ParamLimits

0xc845,	// (0x000284ef) vradio_station_info_pane_t2

0x0001,

0xf780,	// (0x0002b42a) vradio_station_info_pane_t_ParamLimits

0xf780,	// (0x0002b42a) vradio_station_info_pane_t

0xb627,	// (0x000272d1) vradio_tuning_pane

0x796d,	// (0x00023617) vradio_rocker_control_pane_g1

0xe79e,	// (0x0002a448) vradio_rocker_control_pane_g2

0x7975,	// (0x0002361f) vradio_rocker_control_pane_g3

0x797d,	// (0x00023627) vradio_rocker_control_pane_g4

0x7985,	// (0x0002362f) vradio_rocker_control_pane_g5

0x0004,

0xf785,	// (0x0002b42f) vradio_rocker_control_pane_g

0xbf6e,	// (0x00027c18) vradio_frequency_info_pane_g1

0xbf88,	// (0x00027c32) vradio_frequency_info_pane_t1_ParamLimits

0xbf88,	// (0x00027c32) vradio_frequency_info_pane_t1

0x798d,	// (0x00023637) vradio_tuning_pane_g1

0x799a,	// (0x00023644) vradio_tuning_pane_t1

0x2cff,	// (0x0001e9a9) area_side_right_pane_ParamLimits

0x2cff,	// (0x0001e9a9) area_side_right_pane

0xdd70,	// (0x00029a1a) status_small_pane_g1

0xdd78,	// (0x00029a22) status_small_pane_g2

0xdd81,	// (0x00029a2b) status_small_pane_g3

0xdd8a,	// (0x00029a34) status_small_pane_g4

0x0003,

0xf551,	// (0x0002b1fb) status_small_pane_g

0xdd93,	// (0x00029a3d) status_small_pane_t1

0x2f37,	// (0x0001ebe1) main_video3_pane

0xe7a6,	// (0x0002a450) cams_zoom_vslider_pane

0xe7ae,	// (0x0002a458) image3_wide_pane_ParamLimits

0xe7ae,	// (0x0002a458) image3_wide_pane

0xe7c8,	// (0x0002a472) image3_wide_small_pane

0xe7d4,	// (0x0002a47e) main_video3_pane_g1_ParamLimits

0xe7d4,	// (0x0002a47e) main_video3_pane_g1

0xe7f0,	// (0x0002a49a) main_video3_pane_g2_ParamLimits

0xe7f0,	// (0x0002a49a) main_video3_pane_g2

0x0001,

0xf790,	// (0x0002b43a) main_video3_pane_g_ParamLimits

0xf790,	// (0x0002b43a) main_video3_pane_g

0xe80c,	// (0x0002a4b6) main_video3_pane_t1_ParamLimits

0xe80c,	// (0x0002a4b6) main_video3_pane_t1

0xe837,	// (0x0002a4e1) main_video3_pane_t2_ParamLimits

0xe837,	// (0x0002a4e1) main_video3_pane_t2

0xe862,	// (0x0002a50c) main_video3_pane_t3_ParamLimits

0xe862,	// (0x0002a50c) main_video3_pane_t3

0x0002,

0xf795,	// (0x0002b43f) main_video3_pane_t_ParamLimits

0xf795,	// (0x0002b43f) main_video3_pane_t

0xe88f,	// (0x0002a539) cams_zoom_vslider_pane_g1

0xe898,	// (0x0002a542) cams_zoom_vslider_pane_g2

0x0001,

0xf79c,	// (0x0002b446) cams_zoom_vslider_pane_g

0xe8a0,	// (0x0002a54a) small_slider_vertical_pane

0xbf6e,	// (0x00027c18) small_slider_vertical_pane_g1

0xbf6e,	// (0x00027c18) small_slider_vertical_pane_g2

0xe8a8,	// (0x0002a552) small_slider_vertical_pane_g3

0x0002,

0xf7a1,	// (0x0002b44b) small_slider_vertical_pane_g

0x2f37,	// (0x0001ebe1) main_hwr_training_pane

0xe8b1,	// (0x0002a55b) hwr_training_instruct_pane_ParamLimits

0xe8b1,	// (0x0002a55b) hwr_training_instruct_pane

0x79a9,	// (0x00023653) hwr_training_navi_pane_ParamLimits

0x79a9,	// (0x00023653) hwr_training_navi_pane

0x79c3,	// (0x0002366d) hwr_training_write_pane_ParamLimits

0x79c3,	// (0x0002366d) hwr_training_write_pane

0xb627,	// (0x000272d1) bg_frame_shadow_pane

0xe8e8,	// (0x0002a592) hwr_training_write_pane_g1

0xe8f0,	// (0x0002a59a) hwr_training_write_pane_g2

0xe8f8,	// (0x0002a5a2) hwr_training_write_pane_g3

0xe900,	// (0x0002a5aa) hwr_training_write_pane_g4

0xe908,	// (0x0002a5b2) hwr_training_write_pane_g5

0xe910,	// (0x0002a5ba) hwr_training_write_pane_g6

0xe918,	// (0x0002a5c2) hwr_training_write_pane_g7

0x0006,

0xf7a8,	// (0x0002b452) hwr_training_write_pane_g

0x3690,	// (0x0001f33a) hwr_training_navi_pane_g1_ParamLimits

0x3690,	// (0x0001f33a) hwr_training_navi_pane_g1

0x36a2,	// (0x0001f34c) hwr_training_navi_pane_g2_ParamLimits

0x36a2,	// (0x0001f34c) hwr_training_navi_pane_g2

0x36b4,	// (0x0001f35e) hwr_training_navi_pane_g3_ParamLimits

0x36b4,	// (0x0001f35e) hwr_training_navi_pane_g3

0x36c4,	// (0x0001f36e) hwr_training_navi_pane_g4_ParamLimits

0x36c4,	// (0x0001f36e) hwr_training_navi_pane_g4

0x0004,

0xf7b7,	// (0x0002b461) hwr_training_navi_pane_g_ParamLimits

0xf7b7,	// (0x0002b461) hwr_training_navi_pane_g

0x36de,	// (0x0001f388) hwr_training_navi_pane_t1

0x79fb,	// (0x000236a5) list_single_hwr_training_instruct_pane_ParamLimits

0x79fb,	// (0x000236a5) list_single_hwr_training_instruct_pane

0xe920,	// (0x0002a5ca) list_single_hwr_training_instruct_pane_t1

0xe10f,	// (0x00029db9) bg_frame_shadow_pane_g1

0xe92f,	// (0x0002a5d9) bg_frame_shadow_pane_g2

0xe937,	// (0x0002a5e1) bg_frame_shadow_pane_g3

0xe93f,	// (0x0002a5e9) bg_frame_shadow_pane_g4

0xe947,	// (0x0002a5f1) bg_frame_shadow_pane_g5

0xe94f,	// (0x0002a5f9) bg_frame_shadow_pane_g6

0xe957,	// (0x0002a601) bg_frame_shadow_pane_g7

0xbe49,	// (0x00027af3) bg_frame_shadow_pane_g8

0x0007,

0xf7c2,	// (0x0002b46c) bg_frame_shadow_pane_g

0x2f37,	// (0x0001ebe1) main_video_tele_dialer_pane

0x36ec,	// (0x0001f396) aid_size_cell_video_keypad_ParamLimits

0x36ec,	// (0x0001f396) aid_size_cell_video_keypad

0x36fc,	// (0x0001f3a6) grid_video_dialer_keypad_pane_ParamLimits

0x36fc,	// (0x0001f3a6) grid_video_dialer_keypad_pane

0x3730,	// (0x0001f3da) video_down_pane_cp_ParamLimits

0x3730,	// (0x0001f3da) video_down_pane_cp

0x373e,	// (0x0001f3e8) cell_video_dialer_keypad_pane_ParamLimits

0x373e,	// (0x0001f3e8) cell_video_dialer_keypad_pane

0xe95f,	// (0x0002a609) bg_button_pane_cp08_ParamLimits

0xe95f,	// (0x0002a609) bg_button_pane_cp08

0x7a3c,	// (0x000236e6) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7a3c,	// (0x000236e6) cell_video_dialer_keypad_pane_g1

0x75bc,	// (0x00023266) mup3_rocker2_pane_ParamLimits

0x75bc,	// (0x00023266) mup3_rocker2_pane

0xbf6e,	// (0x00027c18) mup3_rocker2_pane_g1

0x339d,	// (0x0001f047) main_dialer2_pane

0x2f37,	// (0x0001ebe1) main_mp4_pane

0x3771,	// (0x0001f41b) main_mp4_pane_g1_ParamLimits

0x3771,	// (0x0001f41b) main_mp4_pane_g1

0x377f,	// (0x0001f429) main_mp4_pane_g2_ParamLimits

0x377f,	// (0x0001f429) main_mp4_pane_g2

0x378d,	// (0x0001f437) main_mp4_pane_g3_ParamLimits

0x378d,	// (0x0001f437) main_mp4_pane_g3

0x37d2,	// (0x0001f47c) main_mp4_pane_g4_ParamLimits

0x37d2,	// (0x0001f47c) main_mp4_pane_g4

0x3800,	// (0x0001f4aa) main_mp4_pane_g5_ParamLimits

0x3800,	// (0x0001f4aa) main_mp4_pane_g5

0x0007,

0xf7e2,	// (0x0002b48c) main_mp4_pane_g_ParamLimits

0xf7e2,	// (0x0002b48c) main_mp4_pane_g

0x3874,	// (0x0001f51e) main_mp4_pane_t1_ParamLimits

0x3874,	// (0x0001f51e) main_mp4_pane_t1

0x38d0,	// (0x0001f57a) main_mp4_pane_t2_ParamLimits

0x38d0,	// (0x0001f57a) main_mp4_pane_t2

0xe96b,	// (0x0002a615) main_mp4_pane_t3_ParamLimits

0xe96b,	// (0x0002a615) main_mp4_pane_t3

0x3922,	// (0x0001f5cc) main_mp4_pane_t4_ParamLimits

0x3922,	// (0x0001f5cc) main_mp4_pane_t4

0x0003,

0xf7f3,	// (0x0002b49d) main_mp4_pane_t_ParamLimits

0xf7f3,	// (0x0002b49d) main_mp4_pane_t

0x3966,	// (0x0001f610) mp4_progress_pane_ParamLimits

0x3966,	// (0x0001f610) mp4_progress_pane

0x39b0,	// (0x0001f65a) mp4_rocker_pane_ParamLimits

0x39b0,	// (0x0001f65a) mp4_rocker_pane

0xe999,	// (0x0002a643) mp4_progress_pane_t1

0xe9b2,	// (0x0002a65c) mp4_progress_pane_t2

0x0001,

0xf7fc,	// (0x0002b4a6) mp4_progress_pane_t

0xe9cb,	// (0x0002a675) mup_progress_pane_cp04

0x01cd,	// (0x0001be77) mp4_rocker_pane_g1

0x39d0,	// (0x0001f67a) aid_cell_size_keypad2_ParamLimits

0x39d0,	// (0x0001f67a) aid_cell_size_keypad2

0x39e0,	// (0x0001f68a) dialer2_ne_pane_ParamLimits

0x39e0,	// (0x0001f68a) dialer2_ne_pane

0x39ee,	// (0x0001f698) grid_dialer2_keypad_pane_ParamLimits

0x39ee,	// (0x0001f698) grid_dialer2_keypad_pane

0xe17a,	// (0x00029e24) bg_popup_call_pane_cp07_ParamLimits

0xe17a,	// (0x00029e24) bg_popup_call_pane_cp07

0x7a73,	// (0x0002371d) dialer2_ne_pane_t1_ParamLimits

0x7a73,	// (0x0002371d) dialer2_ne_pane_t1

0x39fe,	// (0x0001f6a8) cell_dialer2_keypad_pane_ParamLimits

0x39fe,	// (0x0001f6a8) cell_dialer2_keypad_pane

0xe9f0,	// (0x0002a69a) bg_button_pane_pane_cp04_ParamLimits

0xe9f0,	// (0x0002a69a) bg_button_pane_pane_cp04

0x7a98,	// (0x00023742) cell_dialer2_keypad_pane_g1_ParamLimits

0x7a98,	// (0x00023742) cell_dialer2_keypad_pane_g1

0x4d12,	// (0x000209bc) aid_placing_vt_set_content_ParamLimits

0x4d12,	// (0x000209bc) aid_placing_vt_set_content

0x4d3e,	// (0x000209e8) aid_placing_vt_set_title_ParamLimits

0x4d3e,	// (0x000209e8) aid_placing_vt_set_title

0x2f37,	// (0x0001ebe1) main_image3_pane

0x3a45,	// (0x0001f6ef) area_side_right_pane_cp01_ParamLimits

0x3a45,	// (0x0001f6ef) area_side_right_pane_cp01

0x3a72,	// (0x0001f71c) main_image3_pane_g1_ParamLimits

0x3a72,	// (0x0001f71c) main_image3_pane_g1

0x3a80,	// (0x0001f72a) main_image3_pane_g2_ParamLimits

0x3a80,	// (0x0001f72a) main_image3_pane_g2

0x3a99,	// (0x0001f743) main_image3_pane_g3_ParamLimits

0x3a99,	// (0x0001f743) main_image3_pane_g3

0x3ab2,	// (0x0001f75c) main_image3_pane_g4_ParamLimits

0x3ab2,	// (0x0001f75c) main_image3_pane_g4

0x0003,

0xf80b,	// (0x0002b4b5) main_image3_pane_g_ParamLimits

0xf80b,	// (0x0002b4b5) main_image3_pane_g

0x3acb,	// (0x0001f775) main_image3_pane_t1_ParamLimits

0x3acb,	// (0x0001f775) main_image3_pane_t1

0x3af0,	// (0x0001f79a) main_image3_pane_t2_ParamLimits

0x3af0,	// (0x0001f79a) main_image3_pane_t2

0x3b0f,	// (0x0001f7b9) main_image3_pane_t3_ParamLimits

0x3b0f,	// (0x0001f7b9) main_image3_pane_t3

0x0003,

0xf814,	// (0x0002b4be) main_image3_pane_t_ParamLimits

0xf814,	// (0x0002b4be) main_image3_pane_t

0xbd1a,	// (0x000279c4) grid_sctrl_middle_pane_cp01_ParamLimits

0xbd1a,	// (0x000279c4) grid_sctrl_middle_pane_cp01

0x7b00,	// (0x000237aa) cell_sctrl_middle_pane_cp01_ParamLimits

0x7b00,	// (0x000237aa) cell_sctrl_middle_pane_cp01

0x7b11,	// (0x000237bb) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7b11,	// (0x000237bb) cell_sctrl_middle_pane_cp01_g1

0x2f37,	// (0x0001ebe1) main_call4_pane

0x3b70,	// (0x0001f81a) aid_size_button_call4_ParamLimits

0x3b70,	// (0x0001f81a) aid_size_button_call4

0x3ba6,	// (0x0001f850) call4_windows_pane_ParamLimits

0x3ba6,	// (0x0001f850) call4_windows_pane

0x3bbb,	// (0x0001f865) grid_call4_button_pane_ParamLimits

0x3bbb,	// (0x0001f865) grid_call4_button_pane

0x7b2a,	// (0x000237d4) call4_windows_conf_pane

0x7b41,	// (0x000237eb) popup_call4_audio_first_window_ParamLimits

0x7b41,	// (0x000237eb) popup_call4_audio_first_window

0x7b91,	// (0x0002383b) popup_call4_audio_second_window_ParamLimits

0x7b91,	// (0x0002383b) popup_call4_audio_second_window

0x7baa,	// (0x00023854) popup_call4_audio_wait_window_ParamLimits

0x7baa,	// (0x00023854) popup_call4_audio_wait_window

0x3bdd,	// (0x0001f887) cell_call4_button_pane_ParamLimits

0x3bdd,	// (0x0001f887) cell_call4_button_pane

0x7bb8,	// (0x00023862) bg_button_pane_cp09_ParamLimits

0x7bb8,	// (0x00023862) bg_button_pane_cp09

0x3c00,	// (0x0001f8aa) cell_call4_button_pane_g1_ParamLimits

0x3c00,	// (0x0001f8aa) cell_call4_button_pane_g1

0x7bc4,	// (0x0002386e) cell_call4_button_pane_t1_ParamLimits

0x7bc4,	// (0x0002386e) cell_call4_button_pane_t1

0xea04,	// (0x0002a6ae) popup_call4_audio_conf_window_ParamLimits

0xea04,	// (0x0002a6ae) popup_call4_audio_conf_window

0x75ef,	// (0x00023299) mup3_progress_pane_t1_ParamLimits

0x760e,	// (0x000232b8) mup3_progress_pane_t2_ParamLimits

0xe475,	// (0x0002a11f) mup3_progress_pane_t3_ParamLimits

0xf6e9,	// (0x0002b393) mup3_progress_pane_t_ParamLimits

0xe492,	// (0x0002a13c) mup_progress_pane_cp03_ParamLimits

0x7965,	// (0x0002360f) mup3_control_keys_pane_g4_copy1

0x3994,	// (0x0001f63e) mp4_rocker2_pane_ParamLimits

0x3994,	// (0x0001f63e) mp4_rocker2_pane

0xea18,	// (0x0002a6c2) mp4_rocker2_pane_g1

0xea20,	// (0x0002a6ca) mp4_rocker2_pane_g2

0x3c3f,	// (0x0001f8e9) mp4_rocker2_pane_g3

0x3c47,	// (0x0001f8f1) mp4_rocker2_pane_g4

0x3c4f,	// (0x0001f8f9) mp4_rocker2_pane_g5

0x0004,

0xf81d,	// (0x0002b4c7) mp4_rocker2_pane_g

0x2f37,	// (0x0001ebe1) main_camera4_pane

0x2f37,	// (0x0001ebe1) main_video4_pane

0x370c,	// (0x0001f3b6) main_video_tele_dialer_pane_t1_ParamLimits

0x370c,	// (0x0001f3b6) main_video_tele_dialer_pane_t1

0x371e,	// (0x0001f3c8) main_video_tele_dialer_pane_t2_ParamLimits

0x371e,	// (0x0001f3c8) main_video_tele_dialer_pane_t2

0x0001,

0xf7d3,	// (0x0002b47d) main_video_tele_dialer_pane_t_ParamLimits

0xf7d3,	// (0x0002b47d) main_video_tele_dialer_pane_t

0x3c6f,	// (0x0001f919) cam4_autofocus_pane_ParamLimits

0x3c6f,	// (0x0001f919) cam4_autofocus_pane

0x3c89,	// (0x0001f933) cam4_image_uncrop_pane_ParamLimits

0x3c89,	// (0x0001f933) cam4_image_uncrop_pane

0x3ca0,	// (0x0001f94a) cam4_indicators_pane_ParamLimits

0x3ca0,	// (0x0001f94a) cam4_indicators_pane

0x3cbc,	// (0x0001f966) main_camera4_pane_g1_ParamLimits

0x3cbc,	// (0x0001f966) main_camera4_pane_g1

0x3cc8,	// (0x0001f972) main_camera4_pane_g2_ParamLimits

0x3cc8,	// (0x0001f972) main_camera4_pane_g2

0x3cc8,	// (0x0001f972) main_camera4_pane_g3_ParamLimits

0x3cc8,	// (0x0001f972) main_camera4_pane_g3

0x3cd4,	// (0x0001f97e) main_camera4_pane_g4_ParamLimits

0x3cd4,	// (0x0001f97e) main_camera4_pane_g4

0x3ce0,	// (0x0001f98a) main_camera4_pane_g5_ParamLimits

0x3ce0,	// (0x0001f98a) main_camera4_pane_g5

0x0005,

0xf828,	// (0x0002b4d2) main_camera4_pane_g_ParamLimits

0xf828,	// (0x0002b4d2) main_camera4_pane_g

0x3cfa,	// (0x0001f9a4) main_camera4_pane_t1_ParamLimits

0x3cfa,	// (0x0001f9a4) main_camera4_pane_t1

0x0dc7,	// (0x0001ca71) bg_tb_trans_pane_cp06

0x3d26,	// (0x0001f9d0) cam4_indicators_pane_g1

0x3d37,	// (0x0001f9e1) cam4_indicators_pane_g2

0x0002,

0xf843,	// (0x0002b4ed) cam4_indicators_pane_g

0x3d55,	// (0x0001f9ff) cam4_indicators_pane_t1

0x3d7f,	// (0x0001fa29) main_video4_pane_g1_ParamLimits

0x3d7f,	// (0x0001fa29) main_video4_pane_g1

0x3d8b,	// (0x0001fa35) main_video4_pane_g2_ParamLimits

0x3d8b,	// (0x0001fa35) main_video4_pane_g2

0x3d97,	// (0x0001fa41) main_video4_pane_g3_ParamLimits

0x3d97,	// (0x0001fa41) main_video4_pane_g3

0x3da3,	// (0x0001fa4d) main_video4_pane_g4_ParamLimits

0x3da3,	// (0x0001fa4d) main_video4_pane_g4

0x0004,

0xf84a,	// (0x0002b4f4) main_video4_pane_g_ParamLimits

0xf84a,	// (0x0002b4f4) main_video4_pane_g

0x3dc3,	// (0x0001fa6d) vid4_indicators_pane_ParamLimits

0x3dc3,	// (0x0001fa6d) vid4_indicators_pane

0x3de2,	// (0x0001fa8c) video4_image_uncrop_cif_pane_ParamLimits

0x3de2,	// (0x0001fa8c) video4_image_uncrop_cif_pane

0x3df1,	// (0x0001fa9b) video4_image_uncrop_nhd_pane_ParamLimits

0x3df1,	// (0x0001fa9b) video4_image_uncrop_nhd_pane

0x3c89,	// (0x0001f933) video4_image_uncrop_vga_pane_ParamLimits

0x3c89,	// (0x0001f933) video4_image_uncrop_vga_pane

0x338f,	// (0x0001f039) bg_tb_trans_pane_cp07

0x3e08,	// (0x0001fab2) vid4_indicators_pane_g1

0x3e1c,	// (0x0001fac6) vid4_indicators_pane_g2

0x3e30,	// (0x0001fada) vid4_indicators_pane_g3

0x0004,

0xf855,	// (0x0002b4ff) vid4_indicators_pane_g

0x3e5f,	// (0x0001fb09) vid4_indicators_pane_t1

0x7bfa,	// (0x000238a4) cam4_autofocus_pane_g1

0x7c02,	// (0x000238ac) cam4_autofocus_pane_g2

0x7c0a,	// (0x000238b4) cam4_autofocus_pane_g3

0x0002,

0xf860,	// (0x0002b50a) cam4_autofocus_pane_g

0x7c12,	// (0x000238bc) cam4_autofocus_pane_g3_copy1

0x7a20,	// (0x000236ca) video_down_pane_cp_t1

0x7a2e,	// (0x000236d8) video_down_pane_cp_t2

0x0001,

0xf7d8,	// (0x0002b482) video_down_pane_cp_t

0x2f29,	// (0x0001ebd3) popup_vitu2_window_ParamLimits

0x2f29,	// (0x0001ebd3) popup_vitu2_window

0x3e76,	// (0x0001fb20) aid_size_cell2_itu2_ParamLimits

0x3e76,	// (0x0001fb20) aid_size_cell2_itu2

0x3e98,	// (0x0001fb42) aid_size_cell_itu2_ParamLimits

0x3e98,	// (0x0001fb42) aid_size_cell_itu2

0x3edc,	// (0x0001fb86) bg_popup_window_pane_cp09_ParamLimits

0x3edc,	// (0x0001fb86) bg_popup_window_pane_cp09

0x3eea,	// (0x0001fb94) field_vitu2_entry_pane_ParamLimits

0x3eea,	// (0x0001fb94) field_vitu2_entry_pane

0x3f0a,	// (0x0001fbb4) grid_vitu2_function_pane_ParamLimits

0x3f0a,	// (0x0001fbb4) grid_vitu2_function_pane

0x3f4e,	// (0x0001fbf8) grid_vitu2_itu_pane_ParamLimits

0x3f4e,	// (0x0001fbf8) grid_vitu2_itu_pane

0x3fc6,	// (0x0001fc70) cell_vitu2_itu_pane_ParamLimits

0x3fc6,	// (0x0001fc70) cell_vitu2_itu_pane

0x3fdf,	// (0x0001fc89) cell_vitu2_function_pane_ParamLimits

0x3fdf,	// (0x0001fc89) cell_vitu2_function_pane

0xea28,	// (0x0002a6d2) bg_popup_call_pane_cp08_ParamLimits

0xea28,	// (0x0002a6d2) bg_popup_call_pane_cp08

0xea3f,	// (0x0002a6e9) field_vitu2_entry_pane_g1

0xea4b,	// (0x0002a6f5) field_vitu2_entry_pane_g2

0x0002,

0xf867,	// (0x0002b511) field_vitu2_entry_pane_g

0x7c1a,	// (0x000238c4) field_vitu2_entry_pane_t1_ParamLimits

0x7c1a,	// (0x000238c4) field_vitu2_entry_pane_t1

0xea57,	// (0x0002a701) field_vitu2_entry_pane_t2_ParamLimits

0xea57,	// (0x0002a701) field_vitu2_entry_pane_t2

0x0001,

0xf86e,	// (0x0002b518) field_vitu2_entry_pane_t_ParamLimits

0xf86e,	// (0x0002b518) field_vitu2_entry_pane_t

0x3526,	// (0x0001f1d0) bg_button_pane_cp010_ParamLimits

0x3526,	// (0x0001f1d0) bg_button_pane_cp010

0x4020,	// (0x0001fcca) cell_vitu2_itu_pane_g1

0x4046,	// (0x0001fcf0) cell_vitu2_itu_pane_t1_ParamLimits

0x4046,	// (0x0001fcf0) cell_vitu2_itu_pane_t1

0x4092,	// (0x0001fd3c) cell_vitu2_itu_pane_t2_ParamLimits

0x4092,	// (0x0001fd3c) cell_vitu2_itu_pane_t2

0x0002,

0xf878,	// (0x0002b522) cell_vitu2_itu_pane_t_ParamLimits

0xf878,	// (0x0002b522) cell_vitu2_itu_pane_t

0x338f,	// (0x0001f039) bg_button_pane_cp011

0x415a,	// (0x0001fe04) cell_vitu2_function_pane_g1

0x2f37,	// (0x0001ebe1) main_myfav_hc_pane

0x3b51,	// (0x0001f7fb) popup_image3_note_pane_ParamLimits

0x3b51,	// (0x0001f7fb) popup_image3_note_pane

0x3b5f,	// (0x0001f809) popup_image3_tool_bar_pane_ParamLimits

0x3b5f,	// (0x0001f809) popup_image3_tool_bar_pane

0x4108,	// (0x0001fdb2) cell_vitu2_itu_pane_t3_ParamLimits

0x4108,	// (0x0001fdb2) cell_vitu2_itu_pane_t3

0xb627,	// (0x000272d1) bg_popup_trans_pane

0xea7c,	// (0x0002a726) grid_image3_tool_bar_pane

0xea86,	// (0x0002a730) bg_popup_trans_pane_g1

0xc193,	// (0x00027e3d) bg_popup_trans_pane_g2

0xea8e,	// (0x0002a738) bg_popup_trans_pane_g3

0xea96,	// (0x0002a740) bg_popup_trans_pane_g4

0xea9e,	// (0x0002a748) bg_popup_trans_pane_g5

0xeaa6,	// (0x0002a750) bg_popup_trans_pane_g6

0xeaae,	// (0x0002a758) bg_popup_trans_pane_g7

0xeab6,	// (0x0002a760) bg_popup_trans_pane_g8

0xc173,	// (0x00027e1d) bg_popup_trans_pane_g9

0x0008,

0xf87f,	// (0x0002b529) bg_popup_trans_pane_g

0xeabe,	// (0x0002a768) cell_image3_tool_bar_pane_ParamLimits

0xeabe,	// (0x0002a768) cell_image3_tool_bar_pane

0xbf6e,	// (0x00027c18) cell_image3_tool_bar_pane_g1

0xb627,	// (0x000272d1) bg_popup_trans_pane_cp1

0xead2,	// (0x0002a77c) popup_image3_note_pane_t1

0xeae0,	// (0x0002a78a) popup_image3_note_pane_t2

0xeaee,	// (0x0002a798) popup_image3_note_pane_t3

0x0002,

0xf892,	// (0x0002b53c) popup_image3_note_pane_t

0xeafc,	// (0x0002a7a6) popup_image3_note_pane_t3_copy1

0x7c4d,	// (0x000238f7) bg_myfav_hc_instruction_pane_ParamLimits

0x7c4d,	// (0x000238f7) bg_myfav_hc_instruction_pane

0x7c65,	// (0x0002390f) cell_myfav_contact_pane_ParamLimits

0x7c65,	// (0x0002390f) cell_myfav_contact_pane

0x7c7f,	// (0x00023929) cell_myfav_contact_pane_cp1_ParamLimits

0x7c7f,	// (0x00023929) cell_myfav_contact_pane_cp1

0x7c97,	// (0x00023941) cell_myfav_contact_pane_cp2_ParamLimits

0x7c97,	// (0x00023941) cell_myfav_contact_pane_cp2

0x7caf,	// (0x00023959) cell_myfav_contact_pane_cp3_ParamLimits

0x7caf,	// (0x00023959) cell_myfav_contact_pane_cp3

0x7cc6,	// (0x00023970) cell_myfav_contact_pane_cp4_ParamLimits

0x7cc6,	// (0x00023970) cell_myfav_contact_pane_cp4

0x7cdc,	// (0x00023986) cell_myfav_contact_pane_cp5_ParamLimits

0x7cdc,	// (0x00023986) cell_myfav_contact_pane_cp5

0x7cf0,	// (0x0002399a) cell_myfav_contact_pane_cp6_ParamLimits

0x7cf0,	// (0x0002399a) cell_myfav_contact_pane_cp6

0x7d04,	// (0x000239ae) cell_myfav_contact_pane_cp7_ParamLimits

0x7d04,	// (0x000239ae) cell_myfav_contact_pane_cp7

0xeb0a,	// (0x0002a7b4) listscroll_gen_pane_cp05

0x7d1c,	// (0x000239c6) main_myfav_hc_pane_g1_ParamLimits

0x7d1c,	// (0x000239c6) main_myfav_hc_pane_g1

0x7d32,	// (0x000239dc) main_myfav_hc_pane_g2_ParamLimits

0x7d32,	// (0x000239dc) main_myfav_hc_pane_g2

0x0002,

0xf899,	// (0x0002b543) main_myfav_hc_pane_g_ParamLimits

0xf899,	// (0x0002b543) main_myfav_hc_pane_g

0x7d60,	// (0x00023a0a) main_myfav_hc_pane_t1_ParamLimits

0x7d60,	// (0x00023a0a) main_myfav_hc_pane_t1

0xeb13,	// (0x0002a7bd) main_myfav_hc_pane_t2_ParamLimits

0xeb13,	// (0x0002a7bd) main_myfav_hc_pane_t2

0xeb25,	// (0x0002a7cf) main_myfav_hc_pane_t3_ParamLimits

0xeb25,	// (0x0002a7cf) main_myfav_hc_pane_t3

0x7d77,	// (0x00023a21) main_myfav_hc_pane_t4_ParamLimits

0x7d77,	// (0x00023a21) main_myfav_hc_pane_t4

0x0004,

0xf8a0,	// (0x0002b54a) main_myfav_hc_pane_t_ParamLimits

0xf8a0,	// (0x0002b54a) main_myfav_hc_pane_t

0xbf6e,	// (0x00027c18) bg_myfav_hc_instruction_pane_g1

0xeb37,	// (0x0002a7e1) cell_myfav_contact_pane_g1_ParamLimits

0xeb37,	// (0x0002a7e1) cell_myfav_contact_pane_g1

0xeb37,	// (0x0002a7e1) cell_myfav_contact_pane_g2_ParamLimits

0xeb37,	// (0x0002a7e1) cell_myfav_contact_pane_g2

0xeb43,	// (0x0002a7ed) cell_myfav_contact_pane_g3_ParamLimits

0xeb43,	// (0x0002a7ed) cell_myfav_contact_pane_g3

0xbd36,	// (0x000279e0) cell_myfav_contact_pane_g4_ParamLimits

0xbd36,	// (0x000279e0) cell_myfav_contact_pane_g4

0xeb50,	// (0x0002a7fa) cell_myfav_contact_pane_g5_ParamLimits

0xeb50,	// (0x0002a7fa) cell_myfav_contact_pane_g5

0x0004,

0xf8ab,	// (0x0002b555) cell_myfav_contact_pane_g_ParamLimits

0xf8ab,	// (0x0002b555) cell_myfav_contact_pane_g

0x7d48,	// (0x000239f2) main_myfav_hc_pane_g3_ParamLimits

0x7d48,	// (0x000239f2) main_myfav_hc_pane_g3

0x2e33,	// (0x0001eadd) popup_adpt_find_window

0x7da1,	// (0x00023a4b) afind_page_pane_ParamLimits

0x7da1,	// (0x00023a4b) afind_page_pane

0x7dae,	// (0x00023a58) aid_size_cell_afind_ParamLimits

0x7dae,	// (0x00023a58) aid_size_cell_afind

0x7dc8,	// (0x00023a72) bg_popup_sub_pane_cp09_ParamLimits

0x7dc8,	// (0x00023a72) bg_popup_sub_pane_cp09

0x7dd5,	// (0x00023a7f) find_pane_cp01_ParamLimits

0x7dd5,	// (0x00023a7f) find_pane_cp01

0xeb5c,	// (0x0002a806) grid_afind_control_pane_ParamLimits

0xeb5c,	// (0x0002a806) grid_afind_control_pane

0x7de2,	// (0x00023a8c) grid_afind_pane_ParamLimits

0x7de2,	// (0x00023a8c) grid_afind_pane

0x7dfe,	// (0x00023aa8) cell_afind_pane_ParamLimits

0x7dfe,	// (0x00023aa8) cell_afind_pane

0xbf6e,	// (0x00027c18) afind_page_pane_g1

0x7e46,	// (0x00023af0) afind_page_pane_g2

0x7e4e,	// (0x00023af8) afind_page_pane_g3

0x0002,

0xf8b6,	// (0x0002b560) afind_page_pane_g

0x7e56,	// (0x00023b00) afind_page_pane_t1

0xeb82,	// (0x0002a82c) cell_afind_grid_control_pane_ParamLimits

0xeb82,	// (0x0002a82c) cell_afind_grid_control_pane

0xe9f0,	// (0x0002a69a) bg_button_pane_cp69_ParamLimits

0xe9f0,	// (0x0002a69a) bg_button_pane_cp69

0x7e64,	// (0x00023b0e) cell_afind_pane_g1_ParamLimits

0x7e64,	// (0x00023b0e) cell_afind_pane_g1

0x7e71,	// (0x00023b1b) cell_afind_pane_t1_ParamLimits

0x7e71,	// (0x00023b1b) cell_afind_pane_t1

0xbf78,	// (0x00027c22) bg_button_pane_cp72

0xeb91,	// (0x0002a83b) cell_afind_grid_control_pane_g1

0x6744,	// (0x000223ee) aid_image_placing_area_ParamLimits

0x6744,	// (0x000223ee) aid_image_placing_area

0xbd28,	// (0x000279d2) field_vitu_entry_pane_g1_ParamLimits

0xbd28,	// (0x000279d2) field_vitu_entry_pane_g1

0xbd28,	// (0x000279d2) field_vitu_entry_pane_g2_ParamLimits

0xbd28,	// (0x000279d2) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0002ae6b) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0002ae6b) field_vitu_entry_pane_g

0xe782,	// (0x0002a42c) cell_vitu_itu_pane_g1_ParamLimits

0xe5f7,	// (0x0002a2a1) cell_vitu_itu_pane_t3_ParamLimits

0xe5f7,	// (0x0002a2a1) cell_vitu_itu_pane_t3

0xe999,	// (0x0002a643) mp4_progress_pane_t1_ParamLimits

0xe9b2,	// (0x0002a65c) mp4_progress_pane_t2_ParamLimits

0xf7fc,	// (0x0002b4a6) mp4_progress_pane_t_ParamLimits

0xe9cb,	// (0x0002a675) mup_progress_pane_cp04_ParamLimits

0x7d8b,	// (0x00023a35) main_myfav_hc_pane_t5_ParamLimits

0x7d8b,	// (0x00023a35) main_myfav_hc_pane_t5

0x2cf7,	// (0x0001e9a1) aid_zoom_text_primary

0x2e33,	// (0x0001eadd) popup_adpt_find_window_ParamLimits

0x338f,	// (0x0001f039) main_cam_set_pane

0x3cae,	// (0x0001f958) cam4_zoom_pane_ParamLimits

0x3cae,	// (0x0001f958) cam4_zoom_pane

0x7e83,	// (0x00023b2d) main_cam_set_pane_g1_ParamLimits

0x7e83,	// (0x00023b2d) main_cam_set_pane_g1

0x7e91,	// (0x00023b3b) main_cam_set_pane_g2_ParamLimits

0x7e91,	// (0x00023b3b) main_cam_set_pane_g2

0x0001,

0xf8bd,	// (0x0002b567) main_cam_set_pane_g_ParamLimits

0xf8bd,	// (0x0002b567) main_cam_set_pane_g

0x7e9d,	// (0x00023b47) main_cam_set_pane_t1_ParamLimits

0x7e9d,	// (0x00023b47) main_cam_set_pane_t1

0x7eb9,	// (0x00023b63) main_cset_listscroll_pane_ParamLimits

0x7eb9,	// (0x00023b63) main_cset_listscroll_pane

0x7eeb,	// (0x00023b95) main_cset_slider_pane_ParamLimits

0x7eeb,	// (0x00023b95) main_cset_slider_pane

0xeba2,	// (0x0002a84c) main_cset_list_pane_ParamLimits

0xeba2,	// (0x0002a84c) main_cset_list_pane

0xebb2,	// (0x0002a85c) scroll_pane_cp028

0x7f0a,	// (0x00023bb4) aid_area_touch_slider

0x7f26,	// (0x00023bd0) cset_slider_pane

0x7f49,	// (0x00023bf3) main_cset_slider_pane_g1

0x7f5e,	// (0x00023c08) main_cset_slider_pane_g2

0x0011,

0xf8c2,	// (0x0002b56c) main_cset_slider_pane_g

0xebeb,	// (0x0002a895) main_cset_slider_pane_t1

0x8020,	// (0x00023cca) main_cset_slider_pane_t2

0x803a,	// (0x00023ce4) main_cset_slider_pane_t3

0x8054,	// (0x00023cfe) main_cset_slider_pane_t4

0x806e,	// (0x00023d18) main_cset_slider_pane_t5

0x808c,	// (0x00023d36) main_cset_slider_pane_t6

0x80a3,	// (0x00023d4d) main_cset_slider_pane_t7

0x000e,

0xf8e7,	// (0x0002b591) main_cset_slider_pane_t

0x81af,	// (0x00023e59) cset_list_set_pane_ParamLimits

0x81af,	// (0x00023e59) cset_list_set_pane

0xec85,	// (0x0002a92f) aid_position_infowindow_above

0xec8d,	// (0x0002a937) aid_position_infowindow_below

0xec95,	// (0x0002a93f) cset_list_set_pane_g1_ParamLimits

0xec95,	// (0x0002a93f) cset_list_set_pane_g1

0xeca1,	// (0x0002a94b) cset_list_set_pane_g3_ParamLimits

0xeca1,	// (0x0002a94b) cset_list_set_pane_g3

0x0001,

0xf906,	// (0x0002b5b0) cset_list_set_pane_g_ParamLimits

0xf906,	// (0x0002b5b0) cset_list_set_pane_g

0xecb0,	// (0x0002a95a) cset_list_set_pane_t1_ParamLimits

0xecb0,	// (0x0002a95a) cset_list_set_pane_t1

0xbcc1,	// (0x0002796b) list_highlight_pane_cp021_ParamLimits

0xbcc1,	// (0x0002796b) list_highlight_pane_cp021

0xcb00,	// (0x000287aa) cset_slider_pane_g1

0xcb12,	// (0x000287bc) cset_slider_pane_g2

0xcb09,	// (0x000287b3) cset_slider_pane_g3

0x0002,

0xf90b,	// (0x0002b5b5) cset_slider_pane_g

0x416e,	// (0x0001fe18) aid_area_touch_cam4_zoom

0x4176,	// (0x0001fe20) cam4_zoom_cont_pane

0x417e,	// (0x0001fe28) cam4_zoom_pane_g1

0x4186,	// (0x0001fe30) cam4_zoom_pane_g2

0x418e,	// (0x0001fe38) cam4_zoom_pane_g3

0x0002,

0xf912,	// (0x0002b5bc) cam4_zoom_pane_g

0x4196,	// (0x0001fe40) cam4_zoom_cont_pane_g1

0x419f,	// (0x0001fe49) cam4_zoom_cont_pane_g2

0x41a8,	// (0x0001fe52) cam4_zoom_cont_pane_g3

0x0002,

0xf919,	// (0x0002b5c3) cam4_zoom_cont_pane_g

0x3b8a,	// (0x0001f834) call4_image_pane_ParamLimits

0x3b8a,	// (0x0001f834) call4_image_pane

0x7b2a,	// (0x000237d4) call4_windows_conf_pane_ParamLimits

0x7b6f,	// (0x00023819) popup_call4_audio_in_window_ParamLimits

0x7b6f,	// (0x00023819) popup_call4_audio_in_window

0xb627,	// (0x000272d1) bg_popup_call2_act_pane_cp02

0xe9fc,	// (0x0002a6a6) call4_list_conf_pane

0xbf6e,	// (0x00027c18) call4_image_pane_g1

0xbf6e,	// (0x00027c18) call4_image_pane_g2

0x0001,

0xf39d,	// (0x0002b047) call4_image_pane_g

0xecc5,	// (0x0002a96f) list_single_graphic_popup_conf4_pane_ParamLimits

0xecc5,	// (0x0002a96f) list_single_graphic_popup_conf4_pane

0xb627,	// (0x000272d1) list_highlight_pane_cp022

0xecd8,	// (0x0002a982) list_single_graphic_popup_conf4_pane_g1

0xc6d4,	// (0x0002837e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf920,	// (0x0002b5ca) list_single_graphic_popup_conf4_pane_g

0xece0,	// (0x0002a98a) list_single_graphic_popup_conf4_pane_t1

0x4ea2,	// (0x00020b4c) popup_vtel_slider_window_ParamLimits

0x4ea2,	// (0x00020b4c) popup_vtel_slider_window

0xe9de,	// (0x0002a688) dialer2_ne_pane_t2_ParamLimits

0xe9de,	// (0x0002a688) dialer2_ne_pane_t2

0x0001,

0xf801,	// (0x0002b4ab) dialer2_ne_pane_t_ParamLimits

0xf801,	// (0x0002b4ab) dialer2_ne_pane_t

0xbcc1,	// (0x0002796b) bg_popup_sub_pane_cp010_ParamLimits

0xbcc1,	// (0x0002796b) bg_popup_sub_pane_cp010

0x81c5,	// (0x00023e6f) popup_vtel_slider_window_g1_ParamLimits

0x81c5,	// (0x00023e6f) popup_vtel_slider_window_g1

0x81d1,	// (0x00023e7b) popup_vtel_slider_window_g2_ParamLimits

0x81d1,	// (0x00023e7b) popup_vtel_slider_window_g2

0x0003,

0xf925,	// (0x0002b5cf) popup_vtel_slider_window_g_ParamLimits

0xf925,	// (0x0002b5cf) popup_vtel_slider_window_g

0x8219,	// (0x00023ec3) vtel_slider_pane_ParamLimits

0x8219,	// (0x00023ec3) vtel_slider_pane

0x8228,	// (0x00023ed2) vtel_slider_pane_g1_ParamLimits

0x8228,	// (0x00023ed2) vtel_slider_pane_g1

0x8235,	// (0x00023edf) vtel_slider_pane_g2_ParamLimits

0x8235,	// (0x00023edf) vtel_slider_pane_g2

0x8242,	// (0x00023eec) vtel_slider_pane_g3_ParamLimits

0x8242,	// (0x00023eec) vtel_slider_pane_g3

0x8228,	// (0x00023ed2) vtel_slider_pane_g4_ParamLimits

0x8228,	// (0x00023ed2) vtel_slider_pane_g4

0x824f,	// (0x00023ef9) vtel_slider_pane_g5_ParamLimits

0x824f,	// (0x00023ef9) vtel_slider_pane_g5

0x0004,

0xf92e,	// (0x0002b5d8) vtel_slider_pane_g_ParamLimits

0xf92e,	// (0x0002b5d8) vtel_slider_pane_g

0x338f,	// (0x0001f039) main_gallery2_pane

0x3ebe,	// (0x0001fb68) aid_size_row_itut2_dropdow_list_ParamLimits

0x3ebe,	// (0x0001fb68) aid_size_row_itut2_dropdow_list

0x3f2c,	// (0x0001fbd6) grid_vitu2_function_top_pane_ParamLimits

0x3f2c,	// (0x0001fbd6) grid_vitu2_function_top_pane

0x3f86,	// (0x0001fc30) popup_vitu2_dropdown_list_window_ParamLimits

0x3f86,	// (0x0001fc30) popup_vitu2_dropdown_list_window

0x3fa4,	// (0x0001fc4e) popup_vitu2_match_list_window

0x41b1,	// (0x0001fe5b) cell_vitu2_function_top_pane_ParamLimits

0x41b1,	// (0x0001fe5b) cell_vitu2_function_top_pane

0x41cb,	// (0x0001fe75) cell_vitu2_function_top_pane_cp01_ParamLimits

0x41cb,	// (0x0001fe75) cell_vitu2_function_top_pane_cp01

0x41e7,	// (0x0001fe91) cell_vitu2_function_top_wide_pane_ParamLimits

0x41e7,	// (0x0001fe91) cell_vitu2_function_top_wide_pane

0x338f,	// (0x0001f039) bg_button_pane_cp012

0x4205,	// (0x0001feaf) cell_vitu2_function_top_pane_g1

0x4219,	// (0x0001fec3) bg_button_pane_cp013_ParamLimits

0x4219,	// (0x0001fec3) bg_button_pane_cp013

0x825c,	// (0x00023f06) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x825c,	// (0x00023f06) cell_vitu2_function_top_wide_pane_g1

0x2f29,	// (0x0001ebd3) bg_popup_sub_pane_cp20

0x4235,	// (0x0001fedf) list_vitu2_match_list_pane

0xea86,	// (0x0002a730) bg_popup_sub_pane_cp20_g1

0xea8e,	// (0x0002a738) bg_popup_sub_pane_cp20_g2

0xc193,	// (0x00027e3d) bg_popup_sub_pane_cp20_g3

0xea96,	// (0x0002a740) bg_popup_sub_pane_cp20_g4

0xc173,	// (0x00027e1d) bg_popup_sub_pane_cp20_g5

0xed11,	// (0x0002a9bb) bg_popup_sub_pane_cp20_g6

0xeaa6,	// (0x0002a750) bg_popup_sub_pane_cp20_g7

0xeaae,	// (0x0002a758) bg_popup_sub_pane_cp20_g8

0xeab6,	// (0x0002a760) bg_popup_sub_pane_cp20_g9

0x0008,

0xf939,	// (0x0002b5e3) bg_popup_sub_pane_cp20_g

0x424d,	// (0x0001fef7) list_vitu2_match_list_item_pane_ParamLimits

0x424d,	// (0x0001fef7) list_vitu2_match_list_item_pane

0x425f,	// (0x0001ff09) list_vitu2_match_list_item_pane_t1

0x2f37,	// (0x0001ebe1) bg_popup_sub_pane_cp21

0xbf4c,	// (0x00027bf6) grid_vitu2_dropdown_list_pane

0x426d,	// (0x0001ff17) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x426d,	// (0x0001ff17) cell_vitu2_dropdown_list_char_pane

0x428f,	// (0x0001ff39) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x428f,	// (0x0001ff39) cell_vitu2_dropdown_list_ctrl_pane

0xed19,	// (0x0002a9c3) cell_vitu2_dropdown_list_char_pane_g1

0xed22,	// (0x0002a9cc) cell_vitu2_dropdown_list_char_pane_g2

0xed2b,	// (0x0002a9d5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf94c,	// (0x0002b5f6) cell_vitu2_dropdown_list_char_pane_g

0x42b7,	// (0x0001ff61) cell_vitu2_dropdown_list_char_pane_t1

0x8274,	// (0x00023f1e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8274,	// (0x00023f1e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8281,	// (0x00023f2b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8281,	// (0x00023f2b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x828e,	// (0x00023f38) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x828e,	// (0x00023f38) cell_vitu2_dropdown_list_ctrl_pane_g3

0x42c5,	// (0x0001ff6f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x42c5,	// (0x0001ff6f) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0dc7,	// (0x0001ca71) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0dc7,	// (0x0001ca71) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf953,	// (0x0002b5fd) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf953,	// (0x0002b5fd) cell_vitu2_dropdown_list_ctrl_pane_g

0x829b,	// (0x00023f45) aid_size_cell_gallery2_ParamLimits

0x829b,	// (0x00023f45) aid_size_cell_gallery2

0x82b5,	// (0x00023f5f) grid_gallery2_pane_ParamLimits

0x82b5,	// (0x00023f5f) grid_gallery2_pane

0x82cc,	// (0x00023f76) scroll_pane_cp029_ParamLimits

0x82cc,	// (0x00023f76) scroll_pane_cp029

0x82dc,	// (0x00023f86) cell_gallery2_pane_ParamLimits

0x82dc,	// (0x00023f86) cell_gallery2_pane

0xed34,	// (0x0002a9de) cell_gallery2_pane_g2

0xed3c,	// (0x0002a9e6) cell_gallery2_pane_g3

0xed44,	// (0x0002a9ee) cell_gallery2_pane_g4

0xed4c,	// (0x0002a9f6) cell_gallery2_pane_g5

0xbf4c,	// (0x00027bf6) grid_highlight_pane_cp10

0x3fa4,	// (0x0001fc4e) popup_vitu2_match_list_window_ParamLimits

0x3fb6,	// (0x0001fc60) popup_vitu2_query_window_ParamLimits

0x3fb6,	// (0x0001fc60) popup_vitu2_query_window

0x2f37,	// (0x0001ebe1) bg_vitu2_candi_button_pane

0xed19,	// (0x0002a9c3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xed22,	// (0x0002a9cc) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xed2b,	// (0x0002a9d5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8331,	// (0x00023fdb) bg_button_pane_cp015

0x8346,	// (0x00023ff0) bg_button_pane_cp016

0x8352,	// (0x00023ffc) bg_button_pane_cp017

0xcd3a,	// (0x000289e4) bg_popup_sub_pane_cp22

0xed60,	// (0x0002aa0a) popup_vitu2_query_window_g1

0x8392,	// (0x0002403c) popup_vitu2_query_window_g2

0x0002,

0xf95e,	// (0x0002b608) popup_vitu2_query_window_g

0x83b6,	// (0x00024060) popup_vitu2_query_window_t1_ParamLimits

0x83b6,	// (0x00024060) popup_vitu2_query_window_t1

0x83e9,	// (0x00024093) popup_vitu2_query_window_t2_ParamLimits

0x83e9,	// (0x00024093) popup_vitu2_query_window_t2

0x83fb,	// (0x000240a5) popup_vitu2_query_window_t3_ParamLimits

0x83fb,	// (0x000240a5) popup_vitu2_query_window_t3

0x8423,	// (0x000240cd) popup_vitu2_query_window_t4_ParamLimits

0x8423,	// (0x000240cd) popup_vitu2_query_window_t4

0x8437,	// (0x000240e1) popup_vitu2_query_window_t5_ParamLimits

0x8437,	// (0x000240e1) popup_vitu2_query_window_t5

0x0006,

0xf965,	// (0x0002b60f) popup_vitu2_query_window_t_ParamLimits

0xf965,	// (0x0002b60f) popup_vitu2_query_window_t

0xeb9a,	// (0x0002a844) main_cset_text_pane

0x7f0a,	// (0x00023bb4) aid_area_touch_slider_ParamLimits

0x7f26,	// (0x00023bd0) cset_slider_pane_ParamLimits

0x7f49,	// (0x00023bf3) main_cset_slider_pane_g1_ParamLimits

0x7f5e,	// (0x00023c08) main_cset_slider_pane_g2_ParamLimits

0xebbb,	// (0x0002a865) main_cset_slider_pane_g3_ParamLimits

0xebbb,	// (0x0002a865) main_cset_slider_pane_g3

0x7f73,	// (0x00023c1d) main_cset_slider_pane_g4_ParamLimits

0x7f73,	// (0x00023c1d) main_cset_slider_pane_g4

0x7f82,	// (0x00023c2c) main_cset_slider_pane_g5_ParamLimits

0x7f82,	// (0x00023c2c) main_cset_slider_pane_g5

0x7f90,	// (0x00023c3a) main_cset_slider_pane_g6_ParamLimits

0x7f90,	// (0x00023c3a) main_cset_slider_pane_g6

0xf8c2,	// (0x0002b56c) main_cset_slider_pane_g_ParamLimits

0xebeb,	// (0x0002a895) main_cset_slider_pane_t1_ParamLimits

0x8020,	// (0x00023cca) main_cset_slider_pane_t2_ParamLimits

0x803a,	// (0x00023ce4) main_cset_slider_pane_t3_ParamLimits

0x8054,	// (0x00023cfe) main_cset_slider_pane_t4_ParamLimits

0x806e,	// (0x00023d18) main_cset_slider_pane_t5_ParamLimits

0x808c,	// (0x00023d36) main_cset_slider_pane_t6_ParamLimits

0x80a3,	// (0x00023d4d) main_cset_slider_pane_t7_ParamLimits

0x80d1,	// (0x00023d7b) main_cset_slider_pane_t8_ParamLimits

0x80d1,	// (0x00023d7b) main_cset_slider_pane_t8

0x80f9,	// (0x00023da3) main_cset_slider_pane_t9_ParamLimits

0x80f9,	// (0x00023da3) main_cset_slider_pane_t9

0x8121,	// (0x00023dcb) main_cset_slider_pane_t10_ParamLimits

0x8121,	// (0x00023dcb) main_cset_slider_pane_t10

0x8149,	// (0x00023df3) main_cset_slider_pane_t11_ParamLimits

0x8149,	// (0x00023df3) main_cset_slider_pane_t11

0x8173,	// (0x00023e1d) main_cset_slider_pane_t12_ParamLimits

0x8173,	// (0x00023e1d) main_cset_slider_pane_t12

0x8190,	// (0x00023e3a) main_cset_slider_pane_t13_ParamLimits

0x8190,	// (0x00023e3a) main_cset_slider_pane_t13

0xf8e7,	// (0x0002b591) main_cset_slider_pane_t_ParamLimits

0xb627,	// (0x000272d1) bg_popup_sub_pane_cp011

0xed6c,	// (0x0002aa16) main_cset_text_pane_g1

0xed74,	// (0x0002aa1e) main_cset_text_pane_t1

0xed82,	// (0x0002aa2c) main_cset_text_pane_t2

0xed90,	// (0x0002aa3a) main_cset_text_pane_t3

0xed9e,	// (0x0002aa48) main_cset_text_pane_t4

0xedac,	// (0x0002aa56) main_cset_text_pane_t5

0xedba,	// (0x0002aa64) main_cset_text_pane_t6

0xedc8,	// (0x0002aa72) main_cset_text_pane_t7

0x0006,

0xf974,	// (0x0002b61e) main_cset_text_pane_t

0x2f37,	// (0x0001ebe1) main_cam4_burst_pane

0x2f37,	// (0x0001ebe1) main_cam5_pane

0xeb70,	// (0x0002a81a) bg_button_pane_cp019

0xeb79,	// (0x0002a823) bg_button_pane_cp020

0xebc7,	// (0x0002a871) main_cset_slider_pane_g7_ParamLimits

0xebc7,	// (0x0002a871) main_cset_slider_pane_g7

0xebd3,	// (0x0002a87d) main_cset_slider_pane_g8_ParamLimits

0xebd3,	// (0x0002a87d) main_cset_slider_pane_g8

0x7fa4,	// (0x00023c4e) main_cset_slider_pane_g9_ParamLimits

0x7fa4,	// (0x00023c4e) main_cset_slider_pane_g9

0x7fb0,	// (0x00023c5a) main_cset_slider_pane_g10_ParamLimits

0x7fb0,	// (0x00023c5a) main_cset_slider_pane_g10

0x7fbc,	// (0x00023c66) main_cset_slider_pane_g11_ParamLimits

0x7fbc,	// (0x00023c66) main_cset_slider_pane_g11

0x7fc8,	// (0x00023c72) main_cset_slider_pane_g12_ParamLimits

0x7fc8,	// (0x00023c72) main_cset_slider_pane_g12

0x7fd4,	// (0x00023c7e) main_cset_slider_pane_g13_ParamLimits

0x7fd4,	// (0x00023c7e) main_cset_slider_pane_g13

0x7fe0,	// (0x00023c8a) main_cset_slider_pane_g14_ParamLimits

0x7fe0,	// (0x00023c8a) main_cset_slider_pane_g14

0x7fec,	// (0x00023c96) main_cset_slider_pane_g15_ParamLimits

0x7fec,	// (0x00023c96) main_cset_slider_pane_g15

0xec13,	// (0x0002a8bd) main_cset_slider_pane_t14_ParamLimits

0xec13,	// (0x0002a8bd) main_cset_slider_pane_t14

0xec4c,	// (0x0002a8f6) main_cset_slider_pane_t15_ParamLimits

0xec4c,	// (0x0002a8f6) main_cset_slider_pane_t15

0x84a1,	// (0x0002414b) aid_cam4_burst_size_cell_ParamLimits

0x84a1,	// (0x0002414b) aid_cam4_burst_size_cell

0x84bd,	// (0x00024167) grid_cam4_burst_pane_ParamLimits

0x84bd,	// (0x00024167) grid_cam4_burst_pane

0x84ed,	// (0x00024197) linegrid_cam4_burst_pane_ParamLimits

0x84ed,	// (0x00024197) linegrid_cam4_burst_pane

0x850d,	// (0x000241b7) scroll_pane_cp30_ParamLimits

0x850d,	// (0x000241b7) scroll_pane_cp30

0x8519,	// (0x000241c3) cell_cam4_burst_pane_ParamLimits

0x8519,	// (0x000241c3) cell_cam4_burst_pane

0xedd6,	// (0x0002aa80) linegrid_cam4_burst_pane_g1_ParamLimits

0xedd6,	// (0x0002aa80) linegrid_cam4_burst_pane_g1

0x8555,	// (0x000241ff) linegrid_cam4_burst_pane_g2_ParamLimits

0x8555,	// (0x000241ff) linegrid_cam4_burst_pane_g2

0xede3,	// (0x0002aa8d) linegrid_cam4_burst_pane_g3_ParamLimits

0xede3,	// (0x0002aa8d) linegrid_cam4_burst_pane_g3

0x0002,

0xf983,	// (0x0002b62d) linegrid_cam4_burst_pane_g_ParamLimits

0xf983,	// (0x0002b62d) linegrid_cam4_burst_pane_g

0x8566,	// (0x00024210) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8566,	// (0x00024210) linegrid_cam4_burst_pane_g3_copy1

0xedfc,	// (0x0002aaa6) linegrid_cam4_burst_pane_g4_ParamLimits

0xedfc,	// (0x0002aaa6) linegrid_cam4_burst_pane_g4

0x8580,	// (0x0002422a) linegrid_cam4_burst_pane_g5_ParamLimits

0x8580,	// (0x0002422a) linegrid_cam4_burst_pane_g5

0x8591,	// (0x0002423b) linegrid_cam4_burst_pane_g6_ParamLimits

0x8591,	// (0x0002423b) linegrid_cam4_burst_pane_g6

0xee09,	// (0x0002aab3) linegrid_cam4_burst_pane_g7_ParamLimits

0xee09,	// (0x0002aab3) linegrid_cam4_burst_pane_g7

0x85a2,	// (0x0002424c) cell_cam4_burst_pane_g1

0xee22,	// (0x0002aacc) main_cam5_pane_t1_ParamLimits

0xee22,	// (0x0002aacc) main_cam5_pane_t1

0xee34,	// (0x0002aade) main_cam5_pane_t2_ParamLimits

0xee34,	// (0x0002aade) main_cam5_pane_t2

0xee46,	// (0x0002aaf0) main_cam5_pane_t3_ParamLimits

0xee46,	// (0x0002aaf0) main_cam5_pane_t3

0xee58,	// (0x0002ab02) main_cam5_pane_t4_ParamLimits

0xee58,	// (0x0002ab02) main_cam5_pane_t4

0xee70,	// (0x0002ab1a) main_cam5_pane_t5_ParamLimits

0xee70,	// (0x0002ab1a) main_cam5_pane_t5

0xee84,	// (0x0002ab2e) main_cam5_pane_t6_ParamLimits

0xee84,	// (0x0002ab2e) main_cam5_pane_t6

0xee98,	// (0x0002ab42) main_cam5_pane_t7_ParamLimits

0xee98,	// (0x0002ab42) main_cam5_pane_t7

0xeeaa,	// (0x0002ab54) main_cam5_pane_t8_ParamLimits

0xeeaa,	// (0x0002ab54) main_cam5_pane_t8

0xeec6,	// (0x0002ab70) main_cam5_pane_t9_ParamLimits

0xeec6,	// (0x0002ab70) main_cam5_pane_t9

0xeed8,	// (0x0002ab82) main_cam5_pane_t10_ParamLimits

0xeed8,	// (0x0002ab82) main_cam5_pane_t10

0xeeea,	// (0x0002ab94) main_cam5_pane_t11_ParamLimits

0xeeea,	// (0x0002ab94) main_cam5_pane_t11

0xeefc,	// (0x0002aba6) main_cam5_pane_t12_ParamLimits

0xeefc,	// (0x0002aba6) main_cam5_pane_t12

0xef11,	// (0x0002abbb) main_cam5_pane_t13_ParamLimits

0xef11,	// (0x0002abbb) main_cam5_pane_t13

0x000c,

0xf98f,	// (0x0002b639) main_cam5_pane_t_ParamLimits

0xf98f,	// (0x0002b639) main_cam5_pane_t

0x2ee8,	// (0x0001eb92) popup_scut_keymap_window_ParamLimits

0x2ee8,	// (0x0001eb92) popup_scut_keymap_window

0x85b5,	// (0x0002425f) aid_size_cell_brow_shortcut

0xbf4c,	// (0x00027bf6) bg_popup_window_pane_cp010

0x85c1,	// (0x0002426b) grid_scut_pane

0x85cd,	// (0x00024277) cell_scut_pane_ParamLimits

0x85cd,	// (0x00024277) cell_scut_pane

0x85e4,	// (0x0002428e) cell_scut_pane_g1

0xef2e,	// (0x0002abd8) cell_scut_pane_t1

0xef3d,	// (0x0002abe7) cell_scut_pane_t2

0x85ed,	// (0x00024297) cell_scut_pane_t3

0x0002,

0xf9aa,	// (0x0002b654) cell_scut_pane_t

0x720e,	// (0x00022eb8) main_mup3_pane_g8_ParamLimits

0x720e,	// (0x00022eb8) main_mup3_pane_g8

0x3ecc,	// (0x0001fb76) area_vitu2_query_pane_ParamLimits

0x3ecc,	// (0x0001fb76) area_vitu2_query_pane

0x835e,	// (0x00024008) input_focus_pane_cp08

0xef4c,	// (0x0002abf6) area_vitu2_query_pane_g1

0x85fb,	// (0x000242a5) area_vitu2_query_pane_g2

0x0001,

0xf9b1,	// (0x0002b65b) area_vitu2_query_pane_g

0x860c,	// (0x000242b6) area_vitu2_query_pane_t1_ParamLimits

0x860c,	// (0x000242b6) area_vitu2_query_pane_t1

0x8620,	// (0x000242ca) area_vitu2_query_pane_t2_ParamLimits

0x8620,	// (0x000242ca) area_vitu2_query_pane_t2

0x8634,	// (0x000242de) area_vitu2_query_pane_t3_ParamLimits

0x8634,	// (0x000242de) area_vitu2_query_pane_t3

0xef58,	// (0x0002ac02) area_vitu2_query_pane_t4_ParamLimits

0xef58,	// (0x0002ac02) area_vitu2_query_pane_t4

0xef80,	// (0x0002ac2a) area_vitu2_query_pane_t5_ParamLimits

0xef80,	// (0x0002ac2a) area_vitu2_query_pane_t5

0xefa8,	// (0x0002ac52) area_vitu2_query_pane_t6_ParamLimits

0xefa8,	// (0x0002ac52) area_vitu2_query_pane_t6

0x0006,

0xf9b6,	// (0x0002b660) area_vitu2_query_pane_t_ParamLimits

0xf9b6,	// (0x0002b660) area_vitu2_query_pane_t

0x8346,	// (0x00023ff0) bg_button_pane_cp018

0x865c,	// (0x00024306) bg_button_pane_cp021

0x8668,	// (0x00024312) bg_button_pane_cp022

0x868b,	// (0x00024335) input_focus_pane_cp09

0xc810,	// (0x000284ba) aid_size_touch_mv_arrow_left

0xc859,	// (0x00028503) aid_size_touch_mv_arrow_right

0x8004,	// (0x00023cae) main_cset_slider_pane_g16_ParamLimits

0x8004,	// (0x00023cae) main_cset_slider_pane_g16

0x8012,	// (0x00023cbc) main_cset_slider_pane_g17_ParamLimits

0x8012,	// (0x00023cbc) main_cset_slider_pane_g17

0x85a2,	// (0x0002424c) cell_cam4_burst_pane_g1_ParamLimits

0xb627,	// (0x000272d1) compa_mode_pane

0x81dd,	// (0x00023e87) popup_vtel_slider_window_g3_ParamLimits

0x81dd,	// (0x00023e87) popup_vtel_slider_window_g3

0x81f1,	// (0x00023e9b) popup_vtel_slider_window_g4_ParamLimits

0x81f1,	// (0x00023e9b) popup_vtel_slider_window_g4

0x8205,	// (0x00023eaf) popup_vtel_slider_window_t1_ParamLimits

0x8205,	// (0x00023eaf) popup_vtel_slider_window_t1

0x2f37,	// (0x0001ebe1) main_cl_pane

0x342d,	// (0x0001f0d7) popup_imed_adjust2_window_ParamLimits

0xcd3a,	// (0x000289e4) bg_tb_trans_pane_cp05_ParamLimits

0xe6b7,	// (0x0002a361) popup_imed_adjust2_window_g1_ParamLimits

0xe6c6,	// (0x0002a370) popup_imed_adjust2_window_g2_ParamLimits

0xe6c6,	// (0x0002a370) popup_imed_adjust2_window_g2

0xe6d2,	// (0x0002a37c) popup_imed_adjust2_window_g3_ParamLimits

0xe6d2,	// (0x0002a37c) popup_imed_adjust2_window_g3

0x0002,

0xf72c,	// (0x0002b3d6) popup_imed_adjust2_window_g_ParamLimits

0xf72c,	// (0x0002b3d6) popup_imed_adjust2_window_g

0xe6de,	// (0x0002a388) popup_imed_adjust2_window_t1_ParamLimits

0xe6f6,	// (0x0002a3a0) slider_imed_adjust_pane_ParamLimits

0xe70a,	// (0x0002a3b4) slider_imed_adjust_pane_g1_ParamLimits

0xe71a,	// (0x0002a3c4) slider_imed_adjust_pane_g2_ParamLimits

0xe72a,	// (0x0002a3d4) slider_imed_adjust_pane_g3_ParamLimits

0xe73b,	// (0x0002a3e5) slider_imed_adjust_pane_g4_ParamLimits

0xf733,	// (0x0002b3dd) slider_imed_adjust_pane_g_ParamLimits

0x3c57,	// (0x0001f901) aid_touch_area_cam4_ParamLimits

0x3c57,	// (0x0001f901) aid_touch_area_cam4

0x3c67,	// (0x0001f911) battery_pane_cp01

0x3cee,	// (0x0001f998) main_camera4_pane_g6_ParamLimits

0x3cee,	// (0x0001f998) main_camera4_pane_g6

0x3d0c,	// (0x0001f9b6) main_camera4_pane_t2_ParamLimits

0x3d0c,	// (0x0001f9b6) main_camera4_pane_t2

0x0001,

0xf835,	// (0x0002b4df) main_camera4_pane_t_ParamLimits

0xf835,	// (0x0002b4df) main_camera4_pane_t

0x3d6f,	// (0x0001fa19) aid_touch_area_vid4_ParamLimits

0x3d6f,	// (0x0001fa19) aid_touch_area_vid4

0x3daf,	// (0x0001fa59) main_video4_pane_g5_ParamLimits

0x3daf,	// (0x0001fa59) main_video4_pane_g5

0x3dd3,	// (0x0001fa7d) vid4_progress_pane_ParamLimits

0x3dd3,	// (0x0001fa7d) vid4_progress_pane

0xebdf,	// (0x0002a889) main_cset_slider_pane_g18_ParamLimits

0xebdf,	// (0x0002a889) main_cset_slider_pane_g18

0xee16,	// (0x0002aac0) cell_cam4_burst_pane_g2_ParamLimits

0xee16,	// (0x0002aac0) cell_cam4_burst_pane_g2

0x0001,

0xf98a,	// (0x0002b634) cell_cam4_burst_pane_g_ParamLimits

0xf98a,	// (0x0002b634) cell_cam4_burst_pane_g

0x869b,	// (0x00024345) bg_cl_pane_ParamLimits

0x869b,	// (0x00024345) bg_cl_pane

0x86a7,	// (0x00024351) cl_header_pane_ParamLimits

0x86a7,	// (0x00024351) cl_header_pane

0x86b3,	// (0x0002435d) cl_listscroll_pane_ParamLimits

0x86b3,	// (0x0002435d) cl_listscroll_pane

0xeff4,	// (0x0002ac9e) bg_cl_pane_g1

0xeffc,	// (0x0002aca6) bg_cl_pane_g2

0xf004,	// (0x0002acae) bg_cl_pane_g3

0xf00c,	// (0x0002acb6) bg_cl_pane_g4

0xf014,	// (0x0002acbe) bg_cl_pane_g5

0xf01c,	// (0x0002acc6) bg_cl_pane_g6

0xf024,	// (0x0002acce) bg_cl_pane_g7

0xf02c,	// (0x0002acd6) bg_cl_pane_g8

0xf034,	// (0x0002acde) bg_cl_pane_g9

0x0008,

0xf9c5,	// (0x0002b66f) bg_cl_pane_g

0x86bf,	// (0x00024369) aid_height_cl_leading_ParamLimits

0x86bf,	// (0x00024369) aid_height_cl_leading

0x86cb,	// (0x00024375) aid_height_cl_text_ParamLimits

0x86cb,	// (0x00024375) aid_height_cl_text

0xbd1a,	// (0x000279c4) bg_cl_header_pane_ParamLimits

0xbd1a,	// (0x000279c4) bg_cl_header_pane

0x86e3,	// (0x0002438d) cl_header_pane_g1_ParamLimits

0x86e3,	// (0x0002438d) cl_header_pane_g1

0x86f0,	// (0x0002439a) cl_header_pane_t1_ParamLimits

0x86f0,	// (0x0002439a) cl_header_pane_t1

0xf03c,	// (0x0002ace6) cl_list_pane

0xebb2,	// (0x0002a85c) hc_scroll_pane_cp01

0xc173,	// (0x00027e1d) bg_cl_header_pane_g1

0xea86,	// (0x0002a730) bg_cl_header_pane_g2

0xc193,	// (0x00027e3d) bg_cl_header_pane_g3

0xea96,	// (0x0002a740) bg_cl_header_pane_g4

0xea8e,	// (0x0002a738) bg_cl_header_pane_g5

0xed11,	// (0x0002a9bb) bg_cl_header_pane_g6

0xeaae,	// (0x0002a758) bg_cl_header_pane_g7

0xeab6,	// (0x0002a760) bg_cl_header_pane_g8

0xeaa6,	// (0x0002a750) bg_cl_header_pane_g9

0x0008,

0xf9d8,	// (0x0002b682) bg_cl_header_pane_g

0x8702,	// (0x000243ac) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8702,	// (0x000243ac) hc_cl_list_double_graphic_heading_pane

0x8713,	// (0x000243bd) hc_cl_list_single_graphic_pane_ParamLimits

0x8713,	// (0x000243bd) hc_cl_list_single_graphic_pane

0x872c,	// (0x000243d6) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x872c,	// (0x000243d6) hc_cl_list_single_graphic_pane_g1

0x8738,	// (0x000243e2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8738,	// (0x000243e2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9eb,	// (0x0002b695) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9eb,	// (0x0002b695) hc_cl_list_single_graphic_pane_g

0x874c,	// (0x000243f6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x874c,	// (0x000243f6) hc_cl_list_single_graphic_pane_t1

0x872c,	// (0x000243d6) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x872c,	// (0x000243d6) hc_cl_list_double_graphic_heading_pane_g1

0x8761,	// (0x0002440b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8761,	// (0x0002440b) hc_cl_list_double_graphic_heading_pane_g2

0x8775,	// (0x0002441f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8775,	// (0x0002441f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9f0,	// (0x0002b69a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9f0,	// (0x0002b69a) hc_cl_list_double_graphic_heading_pane_g

0x8789,	// (0x00024433) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8789,	// (0x00024433) hc_cl_list_double_graphic_heading_pane_t1

0x879e,	// (0x00024448) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x879e,	// (0x00024448) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f7,	// (0x0002b6a1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f7,	// (0x0002b6a1) hc_cl_list_double_graphic_heading_pane_t

0x42e9,	// (0x0001ff93) vid4_progress_pane_g1

0x42f9,	// (0x0001ffa3) vid4_progress_pane_g2

0x4309,	// (0x0001ffb3) vid4_progress_pane_g3

0x431b,	// (0x0001ffc5) vid4_progress_pane_g4

0x0004,

0xf9fc,	// (0x0002b6a6) vid4_progress_pane_g

0x4333,	// (0x0001ffdd) vid4_progress_pane_t1

0x4349,	// (0x0001fff3) vid4_progress_pane_t2

0x0002,

0xfa07,	// (0x0002b6b1) vid4_progress_pane_t

0x4373,	// (0x0002001d) wait_bar_pane_cp07

0xdfc3,	// (0x00029c6d) blid_firmament_pane_ParamLimits

0xe006,	// (0x00029cb0) popup_blid_sat_info2_window_g1

0xe02a,	// (0x00029cd4) popup_blid_sat_info2_window_t3

0xe038,	// (0x00029ce2) popup_blid_sat_info2_window_t4

0xe046,	// (0x00029cf0) popup_blid_sat_info2_window_t5

0xe054,	// (0x00029cfe) popup_blid_sat_info2_window_t6

0xe064,	// (0x00029d0e) popup_blid_sat_info2_window_t7

0xe072,	// (0x00029d1c) popup_blid_sat_info2_window_t8

0xe080,	// (0x00029d2a) popup_blid_sat_info2_window_t9

0xe08e,	// (0x00029d38) popup_blid_sat_info2_window_t10

0xe14f,	// (0x00029df9) aid_firma_cardinal_ParamLimits

0xe163,	// (0x00029e0d) blid_firmament_pane_t1_ParamLimits

0xe188,	// (0x00029e32) blid_firmament_pane_t2_ParamLimits

0xe19f,	// (0x00029e49) blid_firmament_pane_t3_ParamLimits

0xe1b6,	// (0x00029e60) blid_firmament_pane_t4_ParamLimits

0xf625,	// (0x0002b2cf) blid_firmament_pane_t_ParamLimits

0xe1cd,	// (0x00029e77) blid_sat_info_pane_ParamLimits

0x338f,	// (0x0001f039) main_cam_set_pane_ParamLimits

0x780f,	// (0x000234b9) aid_size_cell_colour_35_ParamLimits

0x7829,	// (0x000234d3) aid_size_cell_colour_112_ParamLimits

0x7840,	// (0x000234ea) aid_size_cell_effect_ParamLimits

0xbcc1,	// (0x0002796b) bg_tb_trans_pane_cp02_ParamLimits

0xc839,	// (0x000284e3) heading_imed_pane_ParamLimits

0x785a,	// (0x00023504) listscroll_imed_pane_ParamLimits

0xd4b0,	// (0x0002915a) popup_call2_audio_first_window_g5_ParamLimits

0xd4b0,	// (0x0002915a) popup_call2_audio_first_window_g5

0x3a13,	// (0x0001f6bd) aid_size_touch_image3_arrow_left_ParamLimits

0x3a13,	// (0x0001f6bd) aid_size_touch_image3_arrow_left

0x3a29,	// (0x0001f6d3) aid_size_touch_image3_arrow_right_ParamLimits

0x3a29,	// (0x0001f6d3) aid_size_touch_image3_arrow_right

0x435e,	// (0x00020008) vid4_progress_pane_t3

0x79db,	// (0x00023685) main_hwr_training_symbol_option_pane_ParamLimits

0x79db,	// (0x00023685) main_hwr_training_symbol_option_pane

0xe8d3,	// (0x0002a57d) popup_hwr_training_preview_window_ParamLimits

0xe8d3,	// (0x0002a57d) popup_hwr_training_preview_window

0x36d1,	// (0x0001f37b) hwr_training_navi_pane_g5_ParamLimits

0x36d1,	// (0x0001f37b) hwr_training_navi_pane_g5

0xea74,	// (0x0002a71e) popup_char_count_window

0x2f29,	// (0x0001ebd3) bg_popup_sub_pane_cp20_ParamLimits

0x4235,	// (0x0001fedf) list_vitu2_match_list_pane_ParamLimits

0x4241,	// (0x0001feeb) vitu2_page_scroll_pane_ParamLimits

0x4241,	// (0x0001feeb) vitu2_page_scroll_pane

0x006b,	// (0x0001bd15) list_single_hwr_training_symbol_option_pane_ParamLimits

0x006b,	// (0x0001bd15) list_single_hwr_training_symbol_option_pane

0x007e,	// (0x0001bd28) list_single_hwr_training_symbol_option_pane_g1

0x0086,	// (0x0001bd30) list_single_hwr_training_symbol_option_pane_t1

0x0094,	// (0x0001bd3e) bg_button_pane_cp023

0x009d,	// (0x0001bd47) bg_button_pane_cp024

0x00d0,	// (0x0001bd7a) vitu2_page_scroll_pane_g1

0x00d8,	// (0x0001bd82) vitu2_page_scroll_pane_g2

0x0001,

0xfa0e,	// (0x0002b6b8) vitu2_page_scroll_pane_g

0x00e0,	// (0x0001bd8a) vitu2_page_scroll_pane_t1

0xdf39,	// (0x00029be3) popup_char_count_window_g1

0x00ef,	// (0x0001bd99) popup_char_count_window_g2

0x00f8,	// (0x0001bda2) popup_char_count_window_g3

0x0002,

0xfa13,	// (0x0002b6bd) popup_char_count_window_g

0x0101,	// (0x0001bdab) popup_char_count_window_t1

0x2f37,	// (0x0001ebe1) main_vded2_pane

0xe6a3,	// (0x0002a34d) aid_size_cell_imed_line

0xe6ad,	// (0x0002a357) grid_imed_line_width_pane

0x3e41,	// (0x0001faeb) vid4_indicators_pane_g4

0x010f,	// (0x0001bdb9) cell_imed_line_width_pane_ParamLimits

0x010f,	// (0x0001bdb9) cell_imed_line_width_pane

0x0123,	// (0x0001bdcd) cell_imed_line_width_pane_g1

0x012c,	// (0x0001bdd6) cell_imed_line_width_pane_g2

0x0001,

0xfa1a,	// (0x0002b6c4) cell_imed_line_width_pane_g

0x87c7,	// (0x00024471) main_vded2_pane_g1_ParamLimits

0x87c7,	// (0x00024471) main_vded2_pane_g1

0x87d4,	// (0x0002447e) main_vded2_pane_g2_ParamLimits

0x87d4,	// (0x0002447e) main_vded2_pane_g2

0x0001,

0xfa1f,	// (0x0002b6c9) main_vded2_pane_g_ParamLimits

0xfa1f,	// (0x0002b6c9) main_vded2_pane_g

0x87e2,	// (0x0002448c) vded2_slider_pane_ParamLimits

0x87e2,	// (0x0002448c) vded2_slider_pane

0x87ef,	// (0x00024499) aid_size_touch_vded2_end

0x87f9,	// (0x000244a3) aid_size_touch_vded2_playhead

0x0134,	// (0x0001bdde) aid_size_touch_vded2_start

0x013c,	// (0x0001bde6) vded2_slider_bg_pane

0x0145,	// (0x0001bdef) vded2_slider_pane_g1

0x014e,	// (0x0001bdf8) vded2_slider_pane_g2

0x8801,	// (0x000244ab) vded2_slider_pane_g3

0x0002,

0xfa24,	// (0x0002b6ce) vded2_slider_pane_g

0x0156,	// (0x0001be00) vded2_slider_bg_pane_g1

0x015f,	// (0x0001be09) vded2_slider_bg_pane_g2

0x0168,	// (0x0001be12) vded2_slider_bg_pane_g3

0x0002,

0xfa2b,	// (0x0002b6d5) vded2_slider_bg_pane_g

0x64ae,	// (0x00022158) aid_postcard_touch_down_pane_ParamLimits

0x64ae,	// (0x00022158) aid_postcard_touch_down_pane

0x64be,	// (0x00022168) aid_postcard_touch_up_pane_ParamLimits

0x64be,	// (0x00022168) aid_postcard_touch_up_pane

0x2f37,	// (0x0001ebe1) main_blid2_pane

0x33b8,	// (0x0001f062) popup_blid2_search_window

0xb627,	// (0x000272d1) blid2_gps_pane

0xb627,	// (0x000272d1) blid2_navig_pane

0xb627,	// (0x000272d1) blid2_search_pane

0xb627,	// (0x000272d1) blid2_tripm_pane

0x880a,	// (0x000244b4) blid2_search_pane_g1_ParamLimits

0x880a,	// (0x000244b4) blid2_search_pane_g1

0x881a,	// (0x000244c4) blid2_search_pane_t1_ParamLimits

0x881a,	// (0x000244c4) blid2_search_pane_t1

0x882c,	// (0x000244d6) aid_size_cell_blid2_gps_ParamLimits

0x882c,	// (0x000244d6) aid_size_cell_blid2_gps

0x883c,	// (0x000244e6) blid2_gps_pane_g1_ParamLimits

0x883c,	// (0x000244e6) blid2_gps_pane_g1

0x8848,	// (0x000244f2) grid_blid2_satellite_pane_ParamLimits

0x8848,	// (0x000244f2) grid_blid2_satellite_pane

0x8858,	// (0x00024502) blid2_navig_pane_g1_ParamLimits

0x8858,	// (0x00024502) blid2_navig_pane_g1

0x8864,	// (0x0002450e) blid2_navig_pane_t1_ParamLimits

0x8864,	// (0x0002450e) blid2_navig_pane_t1

0x8876,	// (0x00024520) blid2_navig_pane_t2_ParamLimits

0x8876,	// (0x00024520) blid2_navig_pane_t2

0x0001,

0xfa32,	// (0x0002b6dc) blid2_navig_pane_t_ParamLimits

0xfa32,	// (0x0002b6dc) blid2_navig_pane_t

0x8888,	// (0x00024532) blid2_navig_ring_pane_ParamLimits

0x8888,	// (0x00024532) blid2_navig_ring_pane

0x8898,	// (0x00024542) blid2_speed_pane_ParamLimits

0x8898,	// (0x00024542) blid2_speed_pane

0x88a4,	// (0x0002454e) blid2_tripm_pane_g1_ParamLimits

0x88a4,	// (0x0002454e) blid2_tripm_pane_g1

0x88b4,	// (0x0002455e) blid2_tripm_pane_g2_ParamLimits

0x88b4,	// (0x0002455e) blid2_tripm_pane_g2

0x88c0,	// (0x0002456a) blid2_tripm_pane_g3_ParamLimits

0x88c0,	// (0x0002456a) blid2_tripm_pane_g3

0x88cc,	// (0x00024576) blid2_tripm_pane_g4_ParamLimits

0x88cc,	// (0x00024576) blid2_tripm_pane_g4

0x88d8,	// (0x00024582) blid2_tripm_pane_g5_ParamLimits

0x88d8,	// (0x00024582) blid2_tripm_pane_g5

0x0005,

0xfa37,	// (0x0002b6e1) blid2_tripm_pane_g_ParamLimits

0xfa37,	// (0x0002b6e1) blid2_tripm_pane_g

0x88f4,	// (0x0002459e) blid2_tripm_pane_t1_ParamLimits

0x88f4,	// (0x0002459e) blid2_tripm_pane_t1

0x8908,	// (0x000245b2) blid2_tripm_pane_t2_ParamLimits

0x8908,	// (0x000245b2) blid2_tripm_pane_t2

0x891a,	// (0x000245c4) blid2_tripm_pane_t3_ParamLimits

0x891a,	// (0x000245c4) blid2_tripm_pane_t3

0x0003,

0xfa44,	// (0x0002b6ee) blid2_tripm_pane_t_ParamLimits

0xfa44,	// (0x0002b6ee) blid2_tripm_pane_t

0x894c,	// (0x000245f6) cell_blid2_satellite_pane_ParamLimits

0x894c,	// (0x000245f6) cell_blid2_satellite_pane

0x8966,	// (0x00024610) cell_blid2_satellite_pane_g1

0x0171,	// (0x0001be1b) cell_blid2_satellite_pane_t1

0xbf6e,	// (0x00027c18) blid2_speed_pane_g1

0x017f,	// (0x0001be29) blid2_speed_pane_t1

0x018d,	// (0x0001be37) blid2_speed_pane_t2

0x0001,

0xfa4d,	// (0x0002b6f7) blid2_speed_pane_t

0xbf6e,	// (0x00027c18) blid2_navig_ring_pane_g1

0x896f,	// (0x00024619) blid2_navig_ring_pane_g2

0x8977,	// (0x00024621) blid2_navig_ring_pane_g3

0x897f,	// (0x00024629) blid2_navig_ring_pane_g4

0x8987,	// (0x00024631) blid2_navig_ring_pane_g5

0x0004,

0xfa52,	// (0x0002b6fc) blid2_navig_ring_pane_g

0xb627,	// (0x000272d1) bg_popup_window_pane_cp011

0x019b,	// (0x0001be45) popup_blid2_search_window_g1

0x01a3,	// (0x0001be4d) popup_blid2_search_window_t1

0x01b1,	// (0x0001be5b) popup_blid2_search_window_t2

0x0001,

0xfa5d,	// (0x0002b707) popup_blid2_search_window_t

0xc082,	// (0x00027d2c) main_browser_pane_g1

0xbd9a,	// (0x00027a44) main_browser_pane_ParamLimits

0x338f,	// (0x0001f039) bg_button_pane_cp011_ParamLimits

0x415a,	// (0x0001fe04) cell_vitu2_function_pane_g1_ParamLimits

0xcd3a,	// (0x000289e4) bg_popup_sub_pane_cp22_ParamLimits

0x835e,	// (0x00024008) input_focus_pane_cp08_ParamLimits

0x8379,	// (0x00024023) popup_vitu2_query_button_pane_ParamLimits

0x8379,	// (0x00024023) popup_vitu2_query_button_pane

0x8388,	// (0x00024032) popup_vitu2_query_input_button_pane

0xed60,	// (0x0002aa0a) popup_vitu2_query_window_g1_ParamLimits

0x8392,	// (0x0002403c) popup_vitu2_query_window_g2_ParamLimits

0xf95e,	// (0x0002b608) popup_vitu2_query_window_g_ParamLimits

0xb627,	// (0x000272d1) bg_button_pane_cp026

0x898f,	// (0x00024639) popup_vitu2_query_input_button_pane_g1

0xb627,	// (0x000272d1) bg_button_pane_cp025

0x01bf,	// (0x0001be69) popup_vitu2_query_button_pane_t1

0x6eca,	// (0x00022b74) main_mp3_pane_t6

0x6eda,	// (0x00022b84) popup_slider_window_cp01

0x3d1e,	// (0x0001f9c8) cam4_battery_pane

0x3dfe,	// (0x0001faa8) cam4_battery_pane_cp02

0x42e1,	// (0x0001ff8b) cam4_battery_pane_cp01

0x42e1,	// (0x0001ff8b) cam4_battery_pane_cp03

0x01cd,	// (0x0001be77) cam4_battery_pane_g1

0xbf6e,	// (0x00027c18) cam4_battery_pane_g2

0x0001,

0xfa62,	// (0x0002b70c) cam4_battery_pane_g

0xe09c,	// (0x00029d46) popup_blid_sat_info2_window_t11

0xc810,	// (0x000284ba) aid_size_touch_mv_arrow_left_ParamLimits

0xc859,	// (0x00028503) aid_size_touch_mv_arrow_right_ParamLimits

0xc8b7,	// (0x00028561) navi_pane_g1_ParamLimits

0xc8c3,	// (0x0002856d) navi_pane_g2_ParamLimits

0xc8f1,	// (0x0002859b) navi_pane_g3_ParamLimits

0xf339,	// (0x0002afe3) navi_pane_g_ParamLimits

0x617a,	// (0x00021e24) navi_pane_mv_t1_ParamLimits

0x7866,	// (0x00023510) grid_imed_effect_pane_ParamLimits

0x4d62,	// (0x00020a0c) aid_placing_vt_slider_lsc

0xbfd1,	// (0x00027c7b) aid_placing_vt_slider_prt

0xbcc1,	// (0x0002796b) bg_tb_trans_pane_cp01_ParamLimits

0xe32a,	// (0x00029fd4) popup_image_details_window_g1_ParamLimits

0xe33d,	// (0x00029fe7) popup_image_details_window_g2_ParamLimits

0xe352,	// (0x00029ffc) popup_image_details_window_g3_ParamLimits

0xe352,	// (0x00029ffc) popup_image_details_window_g3

0xf665,	// (0x0002b30f) popup_image_details_window_g_ParamLimits

0xe366,	// (0x0002a010) popup_image_details_window_t1_ParamLimits

0xe378,	// (0x0002a022) popup_image_details_window_t2_ParamLimits

0xe391,	// (0x0002a03b) popup_image_details_window_t3_ParamLimits

0xe3a5,	// (0x0002a04f) popup_image_details_window_t4_ParamLimits

0xe3c0,	// (0x0002a06a) popup_image_details_window_t5_ParamLimits

0xf66c,	// (0x0002b316) popup_image_details_window_t_ParamLimits

0x86d7,	// (0x00024381) cl_header_name_pane_ParamLimits

0x86d7,	// (0x00024381) cl_header_name_pane

0x8997,	// (0x00024641) cl_header_name_pane_t1_ParamLimits

0x8997,	// (0x00024641) cl_header_name_pane_t1

0x89ae,	// (0x00024658) cl_header_name_pane_t2_ParamLimits

0x89ae,	// (0x00024658) cl_header_name_pane_t2

0x89d8,	// (0x00024682) cl_header_name_pane_t3_ParamLimits

0x89d8,	// (0x00024682) cl_header_name_pane_t3

0x0002,

0xfa67,	// (0x0002b711) cl_header_name_pane_t_ParamLimits

0xfa67,	// (0x0002b711) cl_header_name_pane_t

0xc980,	// (0x0002862a) navi_pane_mv_g2_ParamLimits

0xea3f,	// (0x0002a6e9) field_vitu2_entry_pane_g1_ParamLimits

0xea4b,	// (0x0002a6f5) field_vitu2_entry_pane_g2_ParamLimits

0xcd5c,	// (0x00028a06) field_vitu2_entry_pane_g3_ParamLimits

0xcd5c,	// (0x00028a06) field_vitu2_entry_pane_g3

0xf867,	// (0x0002b511) field_vitu2_entry_pane_g_ParamLimits

0x4020,	// (0x0001fcca) cell_vitu2_itu_pane_g1_ParamLimits

0x4038,	// (0x0001fce2) cell_vitu2_itu_pane_g2_ParamLimits

0x4038,	// (0x0001fce2) cell_vitu2_itu_pane_g2

0x0001,

0xf873,	// (0x0002b51d) cell_vitu2_itu_pane_g_ParamLimits

0xf873,	// (0x0002b51d) cell_vitu2_itu_pane_g

0x338f,	// (0x0001f039) bg_vkb2_func_pane_cp05_ParamLimits

0x338f,	// (0x0001f039) bg_vkb2_func_pane_cp05

0x338f,	// (0x0001f039) bg_vkb2_func_pane_cp03

0x338f,	// (0x0001f039) bg_vkb2_func_pane_cp04

0x338f,	// (0x0001f039) bg_vkb2_func_pane_cp10_ParamLimits

0x338f,	// (0x0001f039) bg_vkb2_func_pane_cp10

0x8679,	// (0x00024323) bg_vkb2_func_pane_cp08

0x8346,	// (0x00023ff0) bg_vkb2_func_pane_cp06

0x865c,	// (0x00024306) bg_vkb2_func_pane_cp07

0x00a6,	// (0x0001bd50) bg_vkb2_func_pane_cp11_ParamLimits

0x00a6,	// (0x0001bd50) bg_vkb2_func_pane_cp11

0x00bb,	// (0x0001bd65) bg_vkb2_func_pane_cp12_ParamLimits

0x00bb,	// (0x0001bd65) bg_vkb2_func_pane_cp12

0xb627,	// (0x000272d1) bg_vkb2_func_pane_cp09

0xea86,	// (0x0002a730) bg_vkb2_func_pane_g1

0xc193,	// (0x00027e3d) bg_vkb2_func_pane_g2

0xea8e,	// (0x0002a738) bg_vkb2_func_pane_g3

0xea96,	// (0x0002a740) bg_vkb2_func_pane_g4

0xed11,	// (0x0002a9bb) bg_vkb2_func_pane_g5

0xeaae,	// (0x0002a758) bg_vkb2_func_pane_g6

0xeab6,	// (0x0002a760) bg_vkb2_func_pane_g7

0xeaa6,	// (0x0002a750) bg_vkb2_func_pane_g8

0xc173,	// (0x00027e1d) bg_vkb2_func_pane_g9

0x0008,

0xfa6e,	// (0x0002b718) bg_vkb2_func_pane_g

0x88e6,	// (0x00024590) blid2_tripm_pane_g6_ParamLimits

0x88e6,	// (0x00024590) blid2_tripm_pane_g6

0xe991,	// (0x0002a63b) mp4_progress_pane_g1

0x8940,	// (0x000245ea) blid2_tripm_values_pane_ParamLimits

0x8940,	// (0x000245ea) blid2_tripm_values_pane

0x89fd,	// (0x000246a7) blid2_tripm_values_pane_t1

0x8a0b,	// (0x000246b5) blid2_tripm_values_pane_t2

0x8a19,	// (0x000246c3) blid2_tripm_values_pane_t3

0x8a27,	// (0x000246d1) blid2_tripm_values_pane_t4

0x8a35,	// (0x000246df) blid2_tripm_values_pane_t5

0x8a43,	// (0x000246ed) blid2_tripm_values_pane_t6

0x8a51,	// (0x000246fb) blid2_tripm_values_pane_t7

0x8a5f,	// (0x00024709) blid2_tripm_values_pane_t8

0x8a6d,	// (0x00024717) blid2_tripm_values_pane_t9

0x0008,

0xfa81,	// (0x0002b72b) blid2_tripm_values_pane_t

0x4da2,	// (0x00020a4c) call_video_pane_t1_ParamLimits

0x4dc3,	// (0x00020a6d) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0002ae8c) call_video_pane_t_ParamLimits

0x645e,	// (0x00022108) msg_header_pane_g1_ParamLimits

0xcb4d,	// (0x000287f7) msg_header_pane_g2_ParamLimits

0xcb4d,	// (0x000287f7) msg_header_pane_g2

0x0001,

0xf3dc,	// (0x0002b086) msg_header_pane_g_ParamLimits

0xf3dc,	// (0x0002b086) msg_header_pane_g

0xbd9a,	// (0x00027a44) main_clock2_pane_ParamLimits

0x76b8,	// (0x00023362) grid_clock2_toolbar_pane_ParamLimits

0x76b8,	// (0x00023362) grid_clock2_toolbar_pane

0x76b8,	// (0x00023362) listscroll_clock2_pane_ParamLimits

0x76b8,	// (0x00023362) listscroll_clock2_pane

0x7768,	// (0x00023412) main_clock2_pane_t3_ParamLimits

0x7768,	// (0x00023412) main_clock2_pane_t3

0x777a,	// (0x00023424) main_clock2_pane_t4_ParamLimits

0x777a,	// (0x00023424) main_clock2_pane_t4

0x01d7,	// (0x0001be81) cell_clock2_toolbar_pane

0x01df,	// (0x0001be89) cell_clock2_toolbar_pane_cp01

0x01df,	// (0x0001be89) cell_clock2_toolbar_pane_cp02

0x01e7,	// (0x0001be91) cell_clock2_toolbar_pane_cp03

0x01ef,	// (0x0001be99) list_clock2_pane

0xc786,	// (0x00028430) scroll_pane_cp10

0x01f7,	// (0x0001bea1) list_single_clock2_pane_ParamLimits

0x01f7,	// (0x0001bea1) list_single_clock2_pane

0xbf4c,	// (0x00027bf6) list_highlight_pane_cp08

0x0204,	// (0x0001beae) list_single_clock2_pane_t1

0x0212,	// (0x0001bebc) list_single_clock2_pane_t2

0x0001,

0xfa94,	// (0x0002b73e) list_single_clock2_pane_t

0xb627,	// (0x000272d1) bg_button_pane_cp10

0x0220,	// (0x0001beca) cell_clock2_toolbar_pane_g1

0x332a,	// (0x0001efd4) aid_main_viewer_pane_g1_ParamLimits

0x332a,	// (0x0001efd4) aid_main_viewer_pane_g1

0x3336,	// (0x0001efe0) aid_main_viewer_pane_g2_ParamLimits

0x3336,	// (0x0001efe0) aid_main_viewer_pane_g2

0x646a,	// (0x00022114) aid_main_viewer_pane_g3_ParamLimits

0x646a,	// (0x00022114) aid_main_viewer_pane_g3

0x647b,	// (0x00022125) aid_main_viewer_pane_g4_ParamLimits

0x647b,	// (0x00022125) aid_main_viewer_pane_g4

0x0003,

0xf3ed,	// (0x0002b097) aid_main_viewer_pane_g_ParamLimits

0xf3ed,	// (0x0002b097) aid_main_viewer_pane_g

0x3382,	// (0x0001f02c) main_calc_pane_ParamLimits

0x339d,	// (0x0001f047) main_dialer2_pane_ParamLimits

0x2f37,	// (0x0001ebe1) main_cam6_pane

0x2f37,	// (0x0001ebe1) main_vid6_pane

0x76c4,	// (0x0002336e) listscroll_gen_pane_cp06_ParamLimits

0x76c4,	// (0x0002336e) listscroll_gen_pane_cp06

0x778c,	// (0x00023436) main_clock2_pane_t5_ParamLimits

0x778c,	// (0x00023436) main_clock2_pane_t5

0x77d9,	// (0x00023483) aid_call2_pane_cp10_ParamLimits

0x77eb,	// (0x00023495) aid_call_pane_cp10_ParamLimits

0xc804,	// (0x000284ae) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc804,	// (0x000284ae) popup_clock_analogue_window_cp10_g2_ParamLimits

0x35b8,	// (0x0001f262) popup_clock_analogue_window_cp10_g3_ParamLimits

0x35b8,	// (0x0001f262) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc804,	// (0x000284ae) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf721,	// (0x0002b3cb) popup_clock_analogue_window_cp10_g_ParamLimits

0x35ce,	// (0x0001f278) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7aad,	// (0x00023757) cell_dialer2_keypad_pane_g2_ParamLimits

0x7aad,	// (0x00023757) cell_dialer2_keypad_pane_g2

0x0001,

0xf806,	// (0x0002b4b0) cell_dialer2_keypad_pane_g_ParamLimits

0xf806,	// (0x0002b4b0) cell_dialer2_keypad_pane_g

0x7ac9,	// (0x00023773) cell_dialer2_keypad_pane_t1

0x7ef7,	// (0x00023ba1) main_cset_text2_pane_ParamLimits

0x7ef7,	// (0x00023ba1) main_cset_text2_pane

0xef4c,	// (0x0002abf6) area_vitu2_query_pane_g1_ParamLimits

0x85fb,	// (0x000242a5) area_vitu2_query_pane_g2_ParamLimits

0xf9b1,	// (0x0002b65b) area_vitu2_query_pane_g_ParamLimits

0xefd0,	// (0x0002ac7a) area_vitu2_query_pane_t7_ParamLimits

0xefd0,	// (0x0002ac7a) area_vitu2_query_pane_t7

0x8346,	// (0x00023ff0) bg_button_pane_cp018_ParamLimits

0x865c,	// (0x00024306) bg_button_pane_cp021_ParamLimits

0x8668,	// (0x00024312) bg_button_pane_cp022_ParamLimits

0x8679,	// (0x00024323) bg_vkb2_func_pane_cp08_ParamLimits

0x8346,	// (0x00023ff0) bg_vkb2_func_pane_cp06_ParamLimits

0x865c,	// (0x00024306) bg_vkb2_func_pane_cp07_ParamLimits

0x868b,	// (0x00024335) input_focus_pane_cp09_ParamLimits

0x4386,	// (0x00020030) cam6_autofocus_pane_ParamLimits

0x4386,	// (0x00020030) cam6_autofocus_pane

0x43a2,	// (0x0002004c) cam6_image_uncrop_pane_ParamLimits

0x43a2,	// (0x0002004c) cam6_image_uncrop_pane

0x43db,	// (0x00020085) cam6_indi_pane_ParamLimits

0x43db,	// (0x00020085) cam6_indi_pane

0x43f5,	// (0x0002009f) cam6_mode_pane_ParamLimits

0x43f5,	// (0x0002009f) cam6_mode_pane

0x4409,	// (0x000200b3) cam6_timer_pane_ParamLimits

0x4409,	// (0x000200b3) cam6_timer_pane

0x441d,	// (0x000200c7) cam6_zoom_pane_ParamLimits

0x441d,	// (0x000200c7) cam6_zoom_pane

0x8a7b,	// (0x00024725) cam6_mode_pane_g1_ParamLimits

0x8a7b,	// (0x00024725) cam6_mode_pane_g1

0x8a87,	// (0x00024731) cam6_mode_pane_g2_ParamLimits

0x8a87,	// (0x00024731) cam6_mode_pane_g2

0x8a93,	// (0x0002473d) cam6_mode_pane_g3_ParamLimits

0x8a93,	// (0x0002473d) cam6_mode_pane_g3

0x8a9f,	// (0x00024749) cam6_mode_pane_g4_ParamLimits

0x8a9f,	// (0x00024749) cam6_mode_pane_g4

0x0003,

0xfa99,	// (0x0002b743) cam6_mode_pane_g_ParamLimits

0xfa99,	// (0x0002b743) cam6_mode_pane_g

0xe17a,	// (0x00029e24) bg_tb_trans_pane_cp08_ParamLimits

0xe17a,	// (0x00029e24) bg_tb_trans_pane_cp08

0x0236,	// (0x0001bee0) cam6_battery_pane_ParamLimits

0x0236,	// (0x0001bee0) cam6_battery_pane

0x024c,	// (0x0001bef6) cam6_indi_pane_g1_ParamLimits

0x024c,	// (0x0001bef6) cam6_indi_pane_g1

0x025e,	// (0x0001bf08) cam6_indi_pane_g2_ParamLimits

0x025e,	// (0x0001bf08) cam6_indi_pane_g2

0x0270,	// (0x0001bf1a) cam6_indi_pane_g3_ParamLimits

0x0270,	// (0x0001bf1a) cam6_indi_pane_g3

0x0002,

0xfaa2,	// (0x0002b74c) cam6_indi_pane_g_ParamLimits

0xfaa2,	// (0x0002b74c) cam6_indi_pane_g

0x0282,	// (0x0001bf2c) cam6_indi_pane_t1_ParamLimits

0x0282,	// (0x0001bf2c) cam6_indi_pane_t1

0x7c02,	// (0x000238ac) cam6_autofocus_pane_g1

0x7bfa,	// (0x000238a4) cam6_autofocus_pane_g2

0x7c12,	// (0x000238bc) cam6_autofocus_pane_g3

0x7c0a,	// (0x000238b4) cam6_autofocus_pane_g4

0x0003,

0xfaa9,	// (0x0002b753) cam6_autofocus_pane_g

0x02a8,	// (0x0001bf52) cam6_timer_pane_g1

0x02b0,	// (0x0001bf5a) cam6_timer_pane_t1

0x02be,	// (0x0001bf68) cam6_zoom_cont_pane

0x02c6,	// (0x0001bf70) cam6_zoom_pane_g1

0x02cf,	// (0x0001bf79) cam6_zoom_pane_g2

0x8aab,	// (0x00024755) cam6_zoom_pane_g3

0x0002,

0xfab2,	// (0x0002b75c) cam6_zoom_pane_g

0xbf6e,	// (0x00027c18) cam6_battery_pane_g1

0xbf6e,	// (0x00027c18) cam6_battery_pane_g2

0x0001,

0xf39d,	// (0x0002b047) cam6_battery_pane_g

0x02c6,	// (0x0001bf70) cam6_zoom_cont_pane_g1

0x02cf,	// (0x0001bf79) cam6_zoom_cont_pane_g2

0x02d8,	// (0x0001bf82) cam6_zoom_cont_pane_g3

0x0002,

0xfab9,	// (0x0002b763) cam6_zoom_cont_pane_g

0x8ac9,	// (0x00024773) cam6_mode_pane_cp_ParamLimits

0x8ac9,	// (0x00024773) cam6_mode_pane_cp

0x8add,	// (0x00024787) cam6_zoom_pane_cp_ParamLimits

0x8add,	// (0x00024787) cam6_zoom_pane_cp

0x8af5,	// (0x0002479f) vid6_image_uncrop_cif_pane_ParamLimits

0x8af5,	// (0x0002479f) vid6_image_uncrop_cif_pane

0x8b21,	// (0x000247cb) vid6_image_uncrop_nhd_pane_ParamLimits

0x8b21,	// (0x000247cb) vid6_image_uncrop_nhd_pane

0x8b3e,	// (0x000247e8) vid6_image_uncrop_vga_pane_ParamLimits

0x8b3e,	// (0x000247e8) vid6_image_uncrop_vga_pane

0x8b5d,	// (0x00024807) vid6_image_uncrop_wvga_pane_ParamLimits

0x8b5d,	// (0x00024807) vid6_image_uncrop_wvga_pane

0x8b7a,	// (0x00024824) vid6_indi_pane_ParamLimits

0x8b7a,	// (0x00024824) vid6_indi_pane

0xe17a,	// (0x00029e24) bg_tb_trans_pane_cp09_ParamLimits

0xe17a,	// (0x00029e24) bg_tb_trans_pane_cp09

0x02f0,	// (0x0001bf9a) cam6_battery_pane_cp_ParamLimits

0x02f0,	// (0x0001bf9a) cam6_battery_pane_cp

0x02fc,	// (0x0001bfa6) vid6_indi_pane_g1_ParamLimits

0x02fc,	// (0x0001bfa6) vid6_indi_pane_g1

0x030e,	// (0x0001bfb8) vid6_indi_pane_g2_ParamLimits

0x030e,	// (0x0001bfb8) vid6_indi_pane_g2

0x0320,	// (0x0001bfca) vid6_indi_pane_g3_ParamLimits

0x0320,	// (0x0001bfca) vid6_indi_pane_g3

0x0335,	// (0x0001bfdf) vid6_indi_pane_g4_ParamLimits

0x0335,	// (0x0001bfdf) vid6_indi_pane_g4

0x034a,	// (0x0001bff4) vid6_indi_pane_g5_ParamLimits

0x034a,	// (0x0001bff4) vid6_indi_pane_g5

0x0004,

0xfac0,	// (0x0002b76a) vid6_indi_pane_g_ParamLimits

0xfac0,	// (0x0002b76a) vid6_indi_pane_g

0x0364,	// (0x0001c00e) vid6_indi_pane_t1_ParamLimits

0x0364,	// (0x0001c00e) vid6_indi_pane_t1

0x037a,	// (0x0001c024) vid6_indi_pane_t2_ParamLimits

0x037a,	// (0x0001c024) vid6_indi_pane_t2

0x03a2,	// (0x0001c04c) vid6_indi_pane_t3_ParamLimits

0x03a2,	// (0x0001c04c) vid6_indi_pane_t3

0x03ca,	// (0x0001c074) vid6_indi_pane_t4_ParamLimits

0x03ca,	// (0x0001c074) vid6_indi_pane_t4

0x0003,

0xfacb,	// (0x0002b775) vid6_indi_pane_t_ParamLimits

0xfacb,	// (0x0002b775) vid6_indi_pane_t

0x03ee,	// (0x0001c098) wait_bar_pane_cp08

0x8b9f,	// (0x00024849) main_cset_text2_pane_t1_ParamLimits

0x8b9f,	// (0x00024849) main_cset_text2_pane_t1

0x8ab4,	// (0x0002475e) listscroll_gen_pane_cp06_t1_ParamLimits

0x8ab4,	// (0x0002475e) listscroll_gen_pane_cp06_t1

0x2f37,	// (0x0001ebe1) main_cam6_set_pane

0x0dc7,	// (0x0001ca71) bg_tb_trans_pane_cp06_ParamLimits

0x3d26,	// (0x0001f9d0) cam4_indicators_pane_g1_ParamLimits

0x3d37,	// (0x0001f9e1) cam4_indicators_pane_g2_ParamLimits

0xf843,	// (0x0002b4ed) cam4_indicators_pane_g_ParamLimits

0x3d55,	// (0x0001f9ff) cam4_indicators_pane_t1_ParamLimits

0x338f,	// (0x0001f039) bg_tb_trans_pane_cp07_ParamLimits

0x3e08,	// (0x0001fab2) vid4_indicators_pane_g1_ParamLimits

0x3e1c,	// (0x0001fac6) vid4_indicators_pane_g2_ParamLimits

0x3e30,	// (0x0001fada) vid4_indicators_pane_g3_ParamLimits

0x3e41,	// (0x0001faeb) vid4_indicators_pane_g4_ParamLimits

0xf855,	// (0x0002b4ff) vid4_indicators_pane_g_ParamLimits

0x3e5f,	// (0x0001fb09) vid4_indicators_pane_t1_ParamLimits

0x42e9,	// (0x0001ff93) vid4_progress_pane_g1_ParamLimits

0x42f9,	// (0x0001ffa3) vid4_progress_pane_g2_ParamLimits

0x4309,	// (0x0001ffb3) vid4_progress_pane_g3_ParamLimits

0x431b,	// (0x0001ffc5) vid4_progress_pane_g4_ParamLimits

0xf9fc,	// (0x0002b6a6) vid4_progress_pane_g_ParamLimits

0x4333,	// (0x0001ffdd) vid4_progress_pane_t1_ParamLimits

0x4349,	// (0x0001fff3) vid4_progress_pane_t2_ParamLimits

0x435e,	// (0x00020008) vid4_progress_pane_t3_ParamLimits

0xfa07,	// (0x0002b6b1) vid4_progress_pane_t_ParamLimits

0x4373,	// (0x0002001d) wait_bar_pane_cp07_ParamLimits

0x8bd2,	// (0x0002487c) main_cam6_set_pane_g2_ParamLimits

0x8bd2,	// (0x0002487c) main_cam6_set_pane_g2

0x8bde,	// (0x00024888) main_cset6_listscroll_pane_ParamLimits

0x8bde,	// (0x00024888) main_cset6_listscroll_pane

0x8c09,	// (0x000248b3) main_cset6_slider_pane_ParamLimits

0x8c09,	// (0x000248b3) main_cset6_slider_pane

0x8c15,	// (0x000248bf) main_cset6_text2_pane_ParamLimits

0x8c15,	// (0x000248bf) main_cset6_text2_pane

0x03fd,	// (0x0001c0a7) main_cset6_text_pane

0x0405,	// (0x0001c0af) main_cset_list_pane_copy1_ParamLimits

0x0405,	// (0x0001c0af) main_cset_list_pane_copy1

0x0415,	// (0x0001c0bf) scroll_pane_cp028_copy1

0x8c28,	// (0x000248d2) cset_list_set_pane_copy1

0x8c3b,	// (0x000248e5) aid_position_infowindow_above_copy1

0x8c43,	// (0x000248ed) aid_position_infowindow_below_copy1

0x8c4b,	// (0x000248f5) cset_list_set_pane_g1_copy1

0xeca1,	// (0x0002a94b) cset_list_set_pane_g3_copy1_ParamLimits

0xeca1,	// (0x0002a94b) cset_list_set_pane_g3_copy1

0xecb0,	// (0x0002a95a) cset_list_set_pane_t1_copy1_ParamLimits

0xecb0,	// (0x0002a95a) cset_list_set_pane_t1_copy1

0xbcc1,	// (0x0002796b) list_highlight_pane_cp021_copy1_ParamLimits

0xbcc1,	// (0x0002796b) list_highlight_pane_cp021_copy1

0x041e,	// (0x0001c0c8) cset6_slider_pane_ParamLimits

0x041e,	// (0x0001c0c8) cset6_slider_pane

0x044a,	// (0x0001c0f4) main_cset6_slider_pane_g1_ParamLimits

0x044a,	// (0x0001c0f4) main_cset6_slider_pane_g1

0x8c53,	// (0x000248fd) main_cset6_slider_pane_g2_ParamLimits

0x8c53,	// (0x000248fd) main_cset6_slider_pane_g2

0x0472,	// (0x0001c11c) main_cset6_slider_pane_g3_ParamLimits

0x0472,	// (0x0001c11c) main_cset6_slider_pane_g3

0x8c7b,	// (0x00024925) main_cset6_slider_pane_g4_ParamLimits

0x8c7b,	// (0x00024925) main_cset6_slider_pane_g4

0x8c87,	// (0x00024931) main_cset6_slider_pane_g5_ParamLimits

0x8c87,	// (0x00024931) main_cset6_slider_pane_g5

0xebc7,	// (0x0002a871) main_cset6_slider_pane_g7_ParamLimits

0xebc7,	// (0x0002a871) main_cset6_slider_pane_g7

0xebd3,	// (0x0002a87d) main_cset6_slider_pane_g8_ParamLimits

0xebd3,	// (0x0002a87d) main_cset6_slider_pane_g8

0x8c95,	// (0x0002493f) main_cset6_slider_pane_g9_ParamLimits

0x8c95,	// (0x0002493f) main_cset6_slider_pane_g9

0x8ca1,	// (0x0002494b) main_cset6_slider_pane_g10_ParamLimits

0x8ca1,	// (0x0002494b) main_cset6_slider_pane_g10

0x8cad,	// (0x00024957) main_cset6_slider_pane_g11_ParamLimits

0x8cad,	// (0x00024957) main_cset6_slider_pane_g11

0x8cb9,	// (0x00024963) main_cset6_slider_pane_g12_ParamLimits

0x8cb9,	// (0x00024963) main_cset6_slider_pane_g12

0x8cc5,	// (0x0002496f) main_cset6_slider_pane_g13_ParamLimits

0x8cc5,	// (0x0002496f) main_cset6_slider_pane_g13

0x8cd1,	// (0x0002497b) main_cset6_slider_pane_g14_ParamLimits

0x8cd1,	// (0x0002497b) main_cset6_slider_pane_g14

0x8cdd,	// (0x00024987) main_cset6_slider_pane_g15_ParamLimits

0x8cdd,	// (0x00024987) main_cset6_slider_pane_g15

0x8cf5,	// (0x0002499f) main_cset6_slider_pane_g16_ParamLimits

0x8cf5,	// (0x0002499f) main_cset6_slider_pane_g16

0x8d03,	// (0x000249ad) main_cset6_slider_pane_g17_ParamLimits

0x8d03,	// (0x000249ad) main_cset6_slider_pane_g17

0x0011,

0xfad4,	// (0x0002b77e) main_cset6_slider_pane_g_ParamLimits

0xfad4,	// (0x0002b77e) main_cset6_slider_pane_g

0x047e,	// (0x0001c128) main_cset6_slider_pane_t1_ParamLimits

0x047e,	// (0x0001c128) main_cset6_slider_pane_t1

0x8d29,	// (0x000249d3) main_cset6_slider_pane_t2_ParamLimits

0x8d29,	// (0x000249d3) main_cset6_slider_pane_t2

0x8d54,	// (0x000249fe) main_cset6_slider_pane_t3_ParamLimits

0x8d54,	// (0x000249fe) main_cset6_slider_pane_t3

0x8d7f,	// (0x00024a29) main_cset6_slider_pane_t4_ParamLimits

0x8d7f,	// (0x00024a29) main_cset6_slider_pane_t4

0x8daa,	// (0x00024a54) main_cset6_slider_pane_t5_ParamLimits

0x8daa,	// (0x00024a54) main_cset6_slider_pane_t5

0x04bf,	// (0x0001c169) main_cset6_slider_pane_t7_ParamLimits

0x04bf,	// (0x0001c169) main_cset6_slider_pane_t7

0x8dd7,	// (0x00024a81) main_cset6_slider_pane_t8_ParamLimits

0x8dd7,	// (0x00024a81) main_cset6_slider_pane_t8

0x8dfb,	// (0x00024aa5) main_cset6_slider_pane_t9_ParamLimits

0x8dfb,	// (0x00024aa5) main_cset6_slider_pane_t9

0x8e1f,	// (0x00024ac9) main_cset6_slider_pane_t10_ParamLimits

0x8e1f,	// (0x00024ac9) main_cset6_slider_pane_t10

0x8e43,	// (0x00024aed) main_cset6_slider_pane_t11_ParamLimits

0x8e43,	// (0x00024aed) main_cset6_slider_pane_t11

0x04f5,	// (0x0001c19f) main_cset6_slider_pane_t14_ParamLimits

0x04f5,	// (0x0001c19f) main_cset6_slider_pane_t14

0x052e,	// (0x0001c1d8) main_cset6_slider_pane_t15_ParamLimits

0x052e,	// (0x0001c1d8) main_cset6_slider_pane_t15

0x000b,

0xfaf9,	// (0x0002b7a3) main_cset6_slider_pane_t_ParamLimits

0xfaf9,	// (0x0002b7a3) main_cset6_slider_pane_t

0xecf6,	// (0x0002a9a0) cset_slider_pane_g1_copy1

0xecff,	// (0x0002a9a9) cset_slider_pane_g2_copy1

0xed08,	// (0x0002a9b2) cset_slider_pane_g3_copy1

0xb627,	// (0x000272d1) bg_popup_sub_pane_cp011_copy1

0x0567,	// (0x0001c211) main_cset_text_pane_g1_copy1

0xed74,	// (0x0002aa1e) main_cset_text_pane_t1_copy1

0xed82,	// (0x0002aa2c) main_cset_text_pane_t2_copy1

0xed90,	// (0x0002aa3a) main_cset_text_pane_t3_copy1

0xed9e,	// (0x0002aa48) main_cset_text_pane_t4_copy1

0xedac,	// (0x0002aa56) main_cset_text_pane_t5_copy1

0x056f,	// (0x0001c219) main_cset_text_pane_t6_copy1

0x057d,	// (0x0001c227) main_cset_text_pane_t7_copy1

0x8e84,	// (0x00024b2e) main_cset_text2_pane_t1_copy1

0x338f,	// (0x0001f039) main_ncimui_pane

0x33ee,	// (0x0001f098) popup_query_ncimui_window_ParamLimits

0x33ee,	// (0x0001f098) popup_query_ncimui_window

0xe461,	// (0x0002a10b) field_cale_ev2_pane_g4_ParamLimits

0xe461,	// (0x0002a10b) field_cale_ev2_pane_g4

0x7a4d,	// (0x000236f7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7a4d,	// (0x000236f7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7dd,	// (0x0002b487) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7dd,	// (0x0002b487) cell_video_dialer_keypad_pane_g

0x7a65,	// (0x0002370f) cell_video_dialer_keypad_pane_t1

0xb627,	// (0x000272d1) bg_popup_window_pane_cp012

0xdd03,	// (0x000299ad) heading_pane_cp06

0x05a9,	// (0x0001c253) ncim_query_content_pane

0xb627,	// (0x000272d1) bg_popup_heading_pane_cp01

0x05b1,	// (0x0001c25b) ncim_heading_pane_t1

0x05bf,	// (0x0001c269) ncim_indicator_popup_pane

0x05d1,	// (0x0001c27b) ncim_query_button_pane

0x05e5,	// (0x0001c28f) ncim_query_content_pane_t1

0x05f7,	// (0x0001c2a1) ncim_query_content_pane_t2

0x0005,

0xfb3d,	// (0x0002b7e7) ncim_query_content_pane_t

0x0631,	// (0x0001c2db) ncim_query_list_pane

0x0643,	// (0x0001c2ed) ncim_query_popup_pane

0x05bf,	// (0x0001c269) ncim_indicator_popup_pane_ParamLimits

0x8fd7,	// (0x00024c81) ncim_query_content_pane_g1_ParamLimits

0x8fd7,	// (0x00024c81) ncim_query_content_pane_g1

0x05e5,	// (0x0001c28f) ncim_query_content_pane_t1_ParamLimits

0x05f7,	// (0x0001c2a1) ncim_query_content_pane_t2_ParamLimits

0x8fe3,	// (0x00024c8d) ncim_query_content_pane_t3_ParamLimits

0x8fe3,	// (0x00024c8d) ncim_query_content_pane_t3

0x9000,	// (0x00024caa) ncim_query_content_pane_t4_ParamLimits

0x9000,	// (0x00024caa) ncim_query_content_pane_t4

0x901d,	// (0x00024cc7) ncim_query_content_pane_t5_ParamLimits

0x901d,	// (0x00024cc7) ncim_query_content_pane_t5

0x0609,	// (0x0001c2b3) ncim_query_content_pane_t6_ParamLimits

0x0609,	// (0x0001c2b3) ncim_query_content_pane_t6

0xfb3d,	// (0x0002b7e7) ncim_query_content_pane_t_ParamLimits

0x0631,	// (0x0001c2db) ncim_query_list_pane_ParamLimits

0x0643,	// (0x0001c2ed) ncim_query_popup_pane_ParamLimits

0x0657,	// (0x0001c301) wait_bar_pane_cp04

0xb627,	// (0x000272d1) input_focus_pane_cp011

0x065f,	// (0x0001c309) ncim_query_popup_pane_t1

0x066d,	// (0x0001c317) ncim_list_query_list_pane_ParamLimits

0x066d,	// (0x0001c317) ncim_list_query_list_pane

0xb627,	// (0x000272d1) bg_button_pane_cp027

0x067a,	// (0x0001c324) ncim_query_button_pane_g1

0xb627,	// (0x000272d1) list_highlight_pane_cp012

0x0684,	// (0x0001c32e) ncim_list_query_list_pane_g1

0x068c,	// (0x0001c336) ncim_list_query_list_pane_t1

0x3d46,	// (0x0001f9f0) cam4_indicators_pane_g3_ParamLimits

0x3d46,	// (0x0001f9f0) cam4_indicators_pane_g3

0x3e4d,	// (0x0001faf7) vid4_indicators_pane_g5_ParamLimits

0x3e4d,	// (0x0001faf7) vid4_indicators_pane_g5

0x4327,	// (0x0001ffd1) vid4_progress_pane_g5_ParamLimits

0x4327,	// (0x0001ffd1) vid4_progress_pane_g5

0x8ec3,	// (0x00024b6d) main_ncimui_pane_g1

0x8f2b,	// (0x00024bd5) ncimui_group_query_pane_ParamLimits

0x8f2b,	// (0x00024bd5) ncimui_group_query_pane

0x8f73,	// (0x00024c1d) ncimui_list_pane_ParamLimits

0x8f73,	// (0x00024c1d) ncimui_list_pane

0x8f9a,	// (0x00024c44) ncimui_text_pane_ParamLimits

0x8f9a,	// (0x00024c44) ncimui_text_pane

0x903a,	// (0x00024ce4) ncimui_text_pane_t1_ParamLimits

0x903a,	// (0x00024ce4) ncimui_text_pane_t1

0x069a,	// (0x0001c344) ncimui_list_single_graphic_pane_ParamLimits

0x069a,	// (0x0001c344) ncimui_list_single_graphic_pane

0x9059,	// (0x00024d03) ncimui_query_pane_ParamLimits

0x9059,	// (0x00024d03) ncimui_query_pane

0xb627,	// (0x000272d1) list_highlight_pane_cp013

0x06aa,	// (0x0001c354) ncim_list_query_list_pane_t1_copy1

0x0684,	// (0x0001c32e) ncim_list_single_graphic_pane_g1

0x906c,	// (0x00024d16) ncim_query_button_pane_cp01

0x9078,	// (0x00024d22) ncim_query_entry_pane_ParamLimits

0x9078,	// (0x00024d22) ncim_query_entry_pane

0x908b,	// (0x00024d35) ncimui_query_pane_g1

0x9097,	// (0x00024d41) ncimui_query_pane_t1_ParamLimits

0x9097,	// (0x00024d41) ncimui_query_pane_t1

0xbcc1,	// (0x0002796b) input_focus_pane_cp012

0x06b8,	// (0x0001c362) ncim_query_entry_pane_t1

0xbd9a,	// (0x00027a44) main_im_pane_ParamLimits

0x338f,	// (0x0001f039) main_mobtv_pane_ParamLimits

0x338f,	// (0x0001f039) main_mobtv_pane

0x8d11,	// (0x000249bb) main_cset6_slider_pane_g18_ParamLimits

0x8d11,	// (0x000249bb) main_cset6_slider_pane_g18

0x8d1d,	// (0x000249c7) main_cset6_slider_pane_g19_ParamLimits

0x8d1d,	// (0x000249c7) main_cset6_slider_pane_g19

0xcd5c,	// (0x00028a06) bg_main_mobtv_pane_ParamLimits

0xcd5c,	// (0x00028a06) bg_main_mobtv_pane

0x90b0,	// (0x00024d5a) main_mobtv_info_pane

0x90bb,	// (0x00024d65) main_mobtv_loading_pane_ParamLimits

0x90bb,	// (0x00024d65) main_mobtv_loading_pane

0x06ca,	// (0x0001c374) main_mobtv_pg_channel_list_pane

0x06d4,	// (0x0001c37e) main_mobtv_pg_hdr_pane

0x90c8,	// (0x00024d72) main_mobtv_programe_curr_pane_ParamLimits

0x90c8,	// (0x00024d72) main_mobtv_programe_curr_pane

0x90d5,	// (0x00024d7f) main_mobtv_programe_next_pane_ParamLimits

0x90d5,	// (0x00024d7f) main_mobtv_programe_next_pane

0x06dd,	// (0x0001c387) popup_mobtv_noti_window

0xbf6e,	// (0x00027c18) main_tv_pg_hdr_pane_g1

0x06e5,	// (0x0001c38f) main_tv_pg_hdr_pane_g2

0x06ed,	// (0x0001c397) main_tv_pg_hdr_pane_g3

0x06f5,	// (0x0001c39f) main_tv_pg_hdr_pane_g4

0x06fd,	// (0x0001c3a7) main_tv_pg_hdr_pane_g5

0x0707,	// (0x0001c3b1) main_tv_pg_hdr_pane_g6

0x0711,	// (0x0001c3bb) main_tv_pg_hdr_pane_g7

0x071b,	// (0x0001c3c5) main_tv_pg_hdr_pane_g8

0x0725,	// (0x0001c3cf) main_tv_pg_hdr_pane_g9

0x072f,	// (0x0001c3d9) main_tv_pg_hdr_pane_g10

0x0739,	// (0x0001c3e3) main_tv_pg_hdr_pane_g11

0x000a,

0xfb4a,	// (0x0002b7f4) main_tv_pg_hdr_pane_g

0x0743,	// (0x0001c3ed) main_tv_pg_hdr_pane_t1

0x0751,	// (0x0001c3fb) main_tv_pg_hdr_pane_t2

0x075f,	// (0x0001c409) main_tv_pg_hdr_pane_t3

0x076f,	// (0x0001c419) main_tv_pg_hdr_pane_t4

0x077f,	// (0x0001c429) main_tv_pg_hdr_pane_t5

0x0004,

0xfb61,	// (0x0002b80b) main_tv_pg_hdr_pane_t

0x078f,	// (0x0001c439) single_mobtv_pg_channel_pane_ParamLimits

0x078f,	// (0x0001c439) single_mobtv_pg_channel_pane

0x07a1,	// (0x0001c44b) single_mobtv_pg_channel_table_pane

0x07aa,	// (0x0001c454) single_mobtv_pg_channel_thumb_pane

0x07b3,	// (0x0001c45d) single_tv_pg_channel_pane_g1

0x07bc,	// (0x0001c466) single_tv_pg_channel_pane_g2

0x0001,

0xfb6c,	// (0x0002b816) single_tv_pg_channel_pane_g

0xbd28,	// (0x000279d2) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbd28,	// (0x000279d2) bg_single_mobtv_pg_channel_thumb_pane

0x07c5,	// (0x0001c46f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x07c5,	// (0x0001c46f) single_mobtv_pg_channel_thumb_pane_g1

0x07d3,	// (0x0001c47d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x07d3,	// (0x0001c47d) single_mobtv_pg_channel_thumb_pane_g2

0x07df,	// (0x0001c489) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x07df,	// (0x0001c489) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb71,	// (0x0002b81b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb71,	// (0x0002b81b) single_mobtv_pg_channel_thumb_pane_g

0x07eb,	// (0x0001c495) single_mobtv_pg_channel_thumb_pane_t1

0x07f9,	// (0x0001c4a3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb78,	// (0x0002b822) single_mobtv_pg_channel_thumb_pane_t

0xbf6e,	// (0x00027c18) bg_single_mobtv_pg_channel_table_pane_g1

0xbf6e,	// (0x00027c18) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf39d,	// (0x0002b047) bg_single_mobtv_pg_channel_table_pane_g

0x0807,	// (0x0001c4b1) single_mobtv_pg_channel_table_pane_t1

0x0815,	// (0x0001c4bf) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb7d,	// (0x0002b827) single_mobtv_pg_channel_table_pane_t

0x90ea,	// (0x00024d94) main_mobtv_info_pane_g1_ParamLimits

0x90ea,	// (0x00024d94) main_mobtv_info_pane_g1

0x9106,	// (0x00024db0) main_mobtv_info_pane_t1_ParamLimits

0x9106,	// (0x00024db0) main_mobtv_info_pane_t1

0x917e,	// (0x00024e28) main_mobtv_info_pane_t2_ParamLimits

0x917e,	// (0x00024e28) main_mobtv_info_pane_t2

0x0002,

0xfb87,	// (0x0002b831) main_mobtv_info_pane_t_ParamLimits

0xfb87,	// (0x0002b831) main_mobtv_info_pane_t

0x920d,	// (0x00024eb7) wait_bar_pane_cp05

0x921f,	// (0x00024ec9) main_mobtv_loading_pane_g1_ParamLimits

0x921f,	// (0x00024ec9) main_mobtv_loading_pane_g1

0x922d,	// (0x00024ed7) main_mobtv_loading_pane_g2_ParamLimits

0x922d,	// (0x00024ed7) main_mobtv_loading_pane_g2

0x9239,	// (0x00024ee3) main_mobtv_loading_pane_g3_ParamLimits

0x9239,	// (0x00024ee3) main_mobtv_loading_pane_g3

0x0002,

0xfb8e,	// (0x0002b838) main_mobtv_loading_pane_g_ParamLimits

0xfb8e,	// (0x0002b838) main_mobtv_loading_pane_g

0x0823,	// (0x0001c4cd) main_mobtv_loading_pane_t1_ParamLimits

0x0823,	// (0x0001c4cd) main_mobtv_loading_pane_t1

0x083b,	// (0x0001c4e5) main_mobtv_loading_pane_t2_ParamLimits

0x083b,	// (0x0001c4e5) main_mobtv_loading_pane_t2

0x0001,

0xfb95,	// (0x0002b83f) main_mobtv_loading_pane_t_ParamLimits

0xfb95,	// (0x0002b83f) main_mobtv_loading_pane_t

0x9247,	// (0x00024ef1) wait_bar_pane_cp06_ParamLimits

0x9247,	// (0x00024ef1) wait_bar_pane_cp06

0x085f,	// (0x0001c509) main_mobtv_programe_curr_pane_t1

0x086d,	// (0x0001c517) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb9a,	// (0x0002b844) main_mobtv_programe_curr_pane_t

0x087b,	// (0x0001c525) main_mobtv_programe_next_pane_t1

0x0889,	// (0x0001c533) main_mobtv_programe_next_pane_t2

0x0897,	// (0x0001c541) main_mobtv_programe_next_pane_t3

0x0002,

0xfb9f,	// (0x0002b849) main_mobtv_programe_next_pane_t

0xb627,	// (0x000272d1) bg_popup_mobtv_noti_window_pane

0x08a5,	// (0x0001c54f) popup_mobtv_noti_window_g1

0x08ad,	// (0x0001c557) popup_mobtv_noti_window_t1

0x08bb,	// (0x0001c565) popup_mobtv_noti_window_t2

0x0001,

0xfba6,	// (0x0002b850) popup_mobtv_noti_window_t

0xbf6e,	// (0x00027c18) bg_popup_mobtv_noti_window_pane_g1

0x2f37,	// (0x0001ebe1) sc_clock_pane

0x2f37,	// (0x0001ebe1) main_fs_bigclock_pane

0x892e,	// (0x000245d8) blid2_tripm_pane_t4_ParamLimits

0x892e,	// (0x000245d8) blid2_tripm_pane_t4

0x9253,	// (0x00024efd) sc_clock_pane_g1_ParamLimits

0x9253,	// (0x00024efd) sc_clock_pane_g1

0x9261,	// (0x00024f0b) sc_clock_pane_t1_ParamLimits

0x9261,	// (0x00024f0b) sc_clock_pane_t1

0x9274,	// (0x00024f1e) sc_clock_pane_t2_ParamLimits

0x9274,	// (0x00024f1e) sc_clock_pane_t2

0x9286,	// (0x00024f30) sc_clock_pane_t3_ParamLimits

0x9286,	// (0x00024f30) sc_clock_pane_t3

0x0004,

0xfbab,	// (0x0002b855) sc_clock_pane_t_ParamLimits

0xfbab,	// (0x0002b855) sc_clock_pane_t

0x9eba,	// (0x00025b64) main_fs_bigclock_indicator_pane_ParamLimits

0x9eba,	// (0x00025b64) main_fs_bigclock_indicator_pane

0x9309,	// (0x00024fb3) main_fs_bigclock_pane_g1_ParamLimits

0x9309,	// (0x00024fb3) main_fs_bigclock_pane_g1

0x9ec6,	// (0x00025b70) main_fs_bigclock_pane_t1_ParamLimits

0x9ec6,	// (0x00025b70) main_fs_bigclock_pane_t1

0x9ed8,	// (0x00025b82) main_fs_bigclock_pane_t2_ParamLimits

0x9ed8,	// (0x00025b82) main_fs_bigclock_pane_t2

0x9eec,	// (0x00025b96) main_fs_bigclock_pane_t3_ParamLimits

0x9eec,	// (0x00025b96) main_fs_bigclock_pane_t3

0x0002,

0xfd3c,	// (0x0002b9e6) main_fs_bigclock_pane_t_ParamLimits

0xfd3c,	// (0x0002b9e6) main_fs_bigclock_pane_t

0x144e,	// (0x0001d0f8) main_fs_bigclock_indicator_pane_g1

0x05d9,	// (0x0001c283) ncim_query_content_pane_g2_ParamLimits

0x05d9,	// (0x0001c283) ncim_query_content_pane_g2

0x0001,

0xfb38,	// (0x0002b7e2) ncim_query_content_pane_g_ParamLimits

0xfb38,	// (0x0002b7e2) ncim_query_content_pane_g

0x929a,	// (0x00024f44) sc_clock_pane_t4_ParamLimits

0x929a,	// (0x00024f44) sc_clock_pane_t4

0x338f,	// (0x0001f039) main_radioblah_pane

0x3c0d,	// (0x0001f8b7) cell_call4_button_pane_t1_copy1_ParamLimits

0x3c0d,	// (0x0001f8b7) cell_call4_button_pane_t1_copy1

0x8edd,	// (0x00024b87) main_ncimui_pane_t1_ParamLimits

0x8edd,	// (0x00024b87) main_ncimui_pane_t1

0x8ef7,	// (0x00024ba1) main_ncimui_pane_t2_ParamLimits

0x8ef7,	// (0x00024ba1) main_ncimui_pane_t2

0x0002,

0xfb31,	// (0x0002b7db) main_ncimui_pane_t_ParamLimits

0xfb31,	// (0x0002b7db) main_ncimui_pane_t

0x0a00,	// (0x0001c6aa) main_radioblah_anim_pane_ParamLimits

0x0a00,	// (0x0001c6aa) main_radioblah_anim_pane

0x0a11,	// (0x0001c6bb) main_radioblah_info_pane_ParamLimits

0x0a11,	// (0x0001c6bb) main_radioblah_info_pane

0x0a25,	// (0x0001c6cf) main_radioblah_pane_t1_ParamLimits

0x0a25,	// (0x0001c6cf) main_radioblah_pane_t1

0x0a41,	// (0x0001c6eb) main_radioblah_pane_t2_ParamLimits

0x0a41,	// (0x0001c6eb) main_radioblah_pane_t2

0x0003,

0xfbcc,	// (0x0002b876) main_radioblah_pane_t_ParamLimits

0xfbcc,	// (0x0002b876) main_radioblah_pane_t

0x935f,	// (0x00025009) main_radioblah_rocker_ctrl_pane_ParamLimits

0x935f,	// (0x00025009) main_radioblah_rocker_ctrl_pane

0x0a89,	// (0x0001c733) main_radioblah_info_pane_t1_ParamLimits

0x0a89,	// (0x0001c733) main_radioblah_info_pane_t1

0x93a4,	// (0x0002504e) main_radioblah_info_pane_t2_ParamLimits

0x93a4,	// (0x0002504e) main_radioblah_info_pane_t2

0x0003,

0xfbd5,	// (0x0002b87f) main_radioblah_info_pane_t_ParamLimits

0xfbd5,	// (0x0002b87f) main_radioblah_info_pane_t

0xbf6e,	// (0x00027c18) main_radioblah_rocker_ctrl_pane_g1

0x9454,	// (0x000250fe) main_radioblah_rocker_ctrl_pane_g2

0x945c,	// (0x00025106) main_radioblah_rocker_ctrl_pane_g3

0x9464,	// (0x0002510e) main_radioblah_rocker_ctrl_pane_g4

0x946c,	// (0x00025116) main_radioblah_rocker_ctrl_pane_g5

0x9474,	// (0x0002511e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbde,	// (0x0002b888) main_radioblah_rocker_ctrl_pane_g

0x8e84,	// (0x00024b2e) main_cset_text2_pane_t1_copy1_ParamLimits

0x3c98,	// (0x0001f942) cam4_image_uncrop_qvga_pane

0x3dbb,	// (0x0001fa65) vid4_image_uncrop_qcif_pane

0x43cd,	// (0x00020077) cam6_image_uncrop_qvga_pane_ParamLimits

0x43cd,	// (0x00020077) cam6_image_uncrop_qvga_pane

0x02e0,	// (0x0001bf8a) vid6_image_uncrop_qcif_pane_ParamLimits

0x02e0,	// (0x0001bf8a) vid6_image_uncrop_qcif_pane

0xb627,	// (0x000272d1) bg_popup_preview_window_pane_cp03

0x058b,	// (0x0001c235) list_cset_text2_pane

0x0593,	// (0x0001c23d) main_cset6_text2_pane_g1

0x059b,	// (0x0001c245) main_cset6_text2_pane_t1

0x947c,	// (0x00025126) list_cset_text2_pane_t1_ParamLimits

0x947c,	// (0x00025126) list_cset_text2_pane_t1

0x338f,	// (0x0001f039) main_radioblah_pane_ParamLimits

0x91f9,	// (0x00024ea3) main_mobtv_info_pane_t3_ParamLimits

0x91f9,	// (0x00024ea3) main_mobtv_info_pane_t3

0x934d,	// (0x00024ff7) main_radioblah_pane_g1

0x9378,	// (0x00025022) main_radioblah_info_pane_g1

0x93f9,	// (0x000250a3) main_radioblah_info_pane_t3_ParamLimits

0x93f9,	// (0x000250a3) main_radioblah_info_pane_t3

0x5dc3,	// (0x00021a6d) highlight_cell_cale_month_pane_ParamLimits

0x5dc3,	// (0x00021a6d) highlight_cell_cale_month_pane

0x2f37,	// (0x0001ebe1) main_phob_fisheye_pane

0xe4d6,	// (0x0002a180) scroll_pane_cp0031_ParamLimits

0xe4d6,	// (0x0002a180) scroll_pane_cp0031

0x03ee,	// (0x0001c098) wait_bar_pane_cp08_ParamLimits

0x8c28,	// (0x000248d2) cset_list_set_pane_copy1_ParamLimits

0x0ac3,	// (0x0001c76d) highlight_cell_cale_month_pane_g1

0x9499,	// (0x00025143) highlight_cell_cale_month_pane_t1

0xf03c,	// (0x0002ace6) list_gen_pane_cp01

0xebb2,	// (0x0002a85c) scroll_pane_01

0x94a7,	// (0x00025151) list_single_double_fisheye_pane

0x94b0,	// (0x0002515a) list_double_fisheye_pane_g1_ParamLimits

0x94b0,	// (0x0002515a) list_double_fisheye_pane_g1

0x94bc,	// (0x00025166) list_double_fisheye_pane_g2_ParamLimits

0x94bc,	// (0x00025166) list_double_fisheye_pane_g2

0x94d0,	// (0x0002517a) list_double_fisheye_pane_g3_ParamLimits

0x94d0,	// (0x0002517a) list_double_fisheye_pane_g3

0x0004,

0xfbeb,	// (0x0002b895) list_double_fisheye_pane_g_ParamLimits

0xfbeb,	// (0x0002b895) list_double_fisheye_pane_g

0x94f9,	// (0x000251a3) list_double_fisheye_pane_t1_ParamLimits

0x94f9,	// (0x000251a3) list_double_fisheye_pane_t1

0x9514,	// (0x000251be) list_double_fisheye_pane_t2_ParamLimits

0x9514,	// (0x000251be) list_double_fisheye_pane_t2

0x0001,

0xfbf6,	// (0x0002b8a0) list_double_fisheye_pane_t_ParamLimits

0xfbf6,	// (0x0002b8a0) list_double_fisheye_pane_t

0x2f37,	// (0x0001ebe1) main_call5_pane

0x92c0,	// (0x00024f6a) sc_swipe_pane_ParamLimits

0x92c0,	// (0x00024f6a) sc_swipe_pane

0x9542,	// (0x000251ec) call5_image_pane_ParamLimits

0x9542,	// (0x000251ec) call5_image_pane

0x9552,	// (0x000251fc) call5_swipe_1_pane_ParamLimits

0x9552,	// (0x000251fc) call5_swipe_1_pane

0x955e,	// (0x00025208) call5_swipe_2_pane_ParamLimits

0x955e,	// (0x00025208) call5_swipe_2_pane

0x9578,	// (0x00025222) popup_call5_audio_first_window_ParamLimits

0x9578,	// (0x00025222) popup_call5_audio_first_window

0xbd28,	// (0x000279d2) call5_swipe_1_pane_g1_ParamLimits

0xbd28,	// (0x000279d2) call5_swipe_1_pane_g1

0x0acb,	// (0x0001c775) call5_swipe_1_pane_g2_ParamLimits

0x0acb,	// (0x0001c775) call5_swipe_1_pane_g2

0x0001,

0xfbfb,	// (0x0002b8a5) call5_swipe_1_pane_g_ParamLimits

0xfbfb,	// (0x0002b8a5) call5_swipe_1_pane_g

0x0ad7,	// (0x0001c781) call5_swipe_1_pane_t1_ParamLimits

0x0ad7,	// (0x0001c781) call5_swipe_1_pane_t1

0xbd28,	// (0x000279d2) call5_swipe_2_pane_g1_ParamLimits

0xbd28,	// (0x000279d2) call5_swipe_2_pane_g1

0x0aec,	// (0x0001c796) call5_swipe_2_pane_g2_ParamLimits

0x0aec,	// (0x0001c796) call5_swipe_2_pane_g2

0x0001,

0xfc00,	// (0x0002b8aa) call5_swipe_2_pane_g_ParamLimits

0xfc00,	// (0x0002b8aa) call5_swipe_2_pane_g

0x0af8,	// (0x0001c7a2) call5_swipe_2_pane_t1_ParamLimits

0x0af8,	// (0x0001c7a2) call5_swipe_2_pane_t1

0x0b0d,	// (0x0001c7b7) sc_swipe_pane_g1_ParamLimits

0x0b0d,	// (0x0001c7b7) sc_swipe_pane_g1

0x0b1a,	// (0x0001c7c4) sc_swipe_pane_g2_ParamLimits

0x0b1a,	// (0x0001c7c4) sc_swipe_pane_g2

0x0001,

0xfc05,	// (0x0002b8af) sc_swipe_pane_g_ParamLimits

0xfc05,	// (0x0002b8af) sc_swipe_pane_g

0x0b26,	// (0x0001c7d0) sc_swipe_pane_t1_ParamLimits

0x0b26,	// (0x0001c7d0) sc_swipe_pane_t1

0x2f37,	// (0x0001ebe1) main_cmail_launcher_pane

0x9586,	// (0x00025230) aid_size_cell_cmail_l_ParamLimits

0x9586,	// (0x00025230) aid_size_cell_cmail_l

0x9594,	// (0x0002523e) grid_cmail_l_pane_ParamLimits

0x9594,	// (0x0002523e) grid_cmail_l_pane

0x95a4,	// (0x0002524e) cell_cmail_l_pane_ParamLimits

0x95a4,	// (0x0002524e) cell_cmail_l_pane

0x0b3b,	// (0x0001c7e5) cell_cmail_l_pane_g1_ParamLimits

0x0b3b,	// (0x0001c7e5) cell_cmail_l_pane_g1

0x0b47,	// (0x0001c7f1) cell_cmail_l_pane_t1_ParamLimits

0x0b47,	// (0x0001c7f1) cell_cmail_l_pane_t1

0x0b5d,	// (0x0001c807) cell_cmail_l_pane_t2_ParamLimits

0x0b5d,	// (0x0001c807) cell_cmail_l_pane_t2

0x0001,

0xfc0a,	// (0x0002b8b4) cell_cmail_l_pane_t_ParamLimits

0xfc0a,	// (0x0002b8b4) cell_cmail_l_pane_t

0xbcc1,	// (0x0002796b) grid_highlight_pane_cp018_ParamLimits

0xbcc1,	// (0x0002796b) grid_highlight_pane_cp018

0x2d9a,	// (0x0001ea44) main2_pane_ParamLimits

0x2d9a,	// (0x0001ea44) main2_pane

0xbe29,	// (0x00027ad3) popup_sp_fs_action_menu_bg_pane_g1

0xbe31,	// (0x00027adb) popup_sp_fs_action_menu_bg_pane_g2

0xbe39,	// (0x00027ae3) popup_sp_fs_action_menu_bg_pane_g3

0xbe41,	// (0x00027aeb) popup_sp_fs_action_menu_bg_pane_g4

0xbe49,	// (0x00027af3) popup_sp_fs_action_menu_bg_pane_g5

0xbe51,	// (0x00027afb) popup_sp_fs_action_menu_bg_pane_g6

0xbe59,	// (0x00027b03) popup_sp_fs_action_menu_bg_pane_g7

0xbe61,	// (0x00027b0b) popup_sp_fs_action_menu_bg_pane_g8

0xbe69,	// (0x00027b13) popup_sp_fs_action_menu_bg_pane_g9

0xbe71,	// (0x00027b1b) popup_sp_fs_action_menu_bg_pane_g10

0xbe71,	// (0x00027b1b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0002adaf) popup_sp_fs_action_menu_bg_pane_g

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g3_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g3_g1

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g3_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g3_g2

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g3_g3_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0002ae5d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0002ae5d) list_medium_line_x2_t3_g3_g

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g3_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g3_t1

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g3_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g3_t2

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g3_t3_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0002ae64) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0002ae64) list_medium_line_x2_t3_g3_t

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g2_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g2_g1

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g2_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0002ae6b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0002ae6b) list_medium_line_x2_t3_g2_g

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g2_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g2_t1

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g2_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g2_t2

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g2_t3_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0002ae64) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0002ae64) list_medium_line_x2_t3_g2_t

0xbd28,	// (0x000279d2) list_medium_line_x2_t4_g4_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t4_g4_g1

0xbd28,	// (0x000279d2) list_medium_line_x2_t4_g4_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t4_g4_g2

0xbd28,	// (0x000279d2) list_medium_line_x2_t4_g4_g3_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t4_g4_g3

0xbd28,	// (0x000279d2) list_medium_line_x2_t4_g4_g4_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0002ae70) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0002ae70) list_medium_line_x2_t4_g4_g

0xbf88,	// (0x00027c32) list_medium_line_x2_t4_g4_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t4_g4_t1

0xbf88,	// (0x00027c32) list_medium_line_x2_t4_g4_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t4_g4_t2

0xbf88,	// (0x00027c32) list_medium_line_x2_t4_g4_t3_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t4_g4_t3

0xbf88,	// (0x00027c32) list_medium_line_x2_t4_g4_t4_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0002ae79) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0002ae79) list_medium_line_x2_t4_g4_t

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g4_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g4_g1

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g4_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g4_g2

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g4_g3_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g4_g3

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g4_g4_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0002ae70) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0002ae70) list_medium_line_x2_t2_g4_g

0xbf88,	// (0x00027c32) list_medium_line_x2_t2_g4_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t2_g4_t1

0xbf88,	// (0x00027c32) list_medium_line_x2_t2_g4_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t2_g4_t2

0x0001,

0xf236,	// (0x0002aee0) list_medium_line_x2_t2_g4_t_ParamLimits

0xf236,	// (0x0002aee0) list_medium_line_x2_t2_g4_t

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g3_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g3_g1

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g3_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g3_g2

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g3_g3_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0002ae5d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0002ae5d) list_medium_line_x2_t2_g3_g

0xbf88,	// (0x00027c32) list_medium_line_x2_t2_g3_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t2_g3_t1

0xbf88,	// (0x00027c32) list_medium_line_x2_t2_g3_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t2_g3_t2

0x0001,

0xf236,	// (0x0002aee0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf236,	// (0x0002aee0) list_medium_line_x2_t2_g3_t

0x5f39,	// (0x00021be3) main_sp_fs_list_pane_ParamLimits

0x5f39,	// (0x00021be3) main_sp_fs_list_pane

0x5f45,	// (0x00021bef) sp_fs_scroll_pane_ParamLimits

0x5f45,	// (0x00021bef) sp_fs_scroll_pane

0xc4d8,	// (0x00028182) list_medium_line_x2_t3_t1

0xc4d8,	// (0x00028182) list_medium_line_x2_t3_t2

0xc4d8,	// (0x00028182) list_medium_line_x2_t3_t3

0x0002,

0xf281,	// (0x0002af2b) list_medium_line_x2_t3_t

0xc4d8,	// (0x00028182) list_medium_line_x3_t4_t1

0xc4d8,	// (0x00028182) list_medium_line_x3_t4_t2

0xc4d8,	// (0x00028182) list_medium_line_x3_t4_t3

0xc4d8,	// (0x00028182) list_medium_line_x3_t4_t4

0x0003,

0xf288,	// (0x0002af32) list_medium_line_x3_t4_t

0xc4d8,	// (0x00028182) list_medium_line_x4_t5_t1

0xc4d8,	// (0x00028182) list_medium_line_x4_t5_t2

0xc4d8,	// (0x00028182) list_medium_line_x4_t5_t3

0xc4d8,	// (0x00028182) list_medium_line_x4_t5_t4

0xc4d8,	// (0x00028182) list_medium_line_x4_t5_t5

0x0004,

0xf291,	// (0x0002af3b) list_medium_line_x4_t5_t

0xbd28,	// (0x000279d2) list_medium_line_t4_g4_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_t4_g4_g1

0xbd28,	// (0x000279d2) list_medium_line_t4_g4_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_t4_g4_g2

0xbd28,	// (0x000279d2) list_medium_line_t4_g4_g3_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_t4_g4_g3

0xbd28,	// (0x000279d2) list_medium_line_t4_g4_g4_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0002ae70) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0002ae70) list_medium_line_t4_g4_g

0xbf88,	// (0x00027c32) list_medium_line_t4_g4_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t4_g4_t1

0xbf88,	// (0x00027c32) list_medium_line_t4_g4_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t4_g4_t2

0xbf88,	// (0x00027c32) list_medium_line_t4_g4_t3_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t4_g4_t3

0xbf88,	// (0x00027c32) list_medium_line_t4_g4_t4_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0002ae79) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0002ae79) list_medium_line_t4_g4_t

0x5fbb,	// (0x00021c65) chi_dic_find_pane_g1

0x33ab,	// (0x0001f055) main_tport_pane

0xc4d8,	// (0x00028182) list_medium_line_plain_t1

0xbd28,	// (0x000279d2) list_medium_line_t2_g2_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_t2_g2_g1

0xbd28,	// (0x000279d2) list_medium_line_t2_g2_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0002ae6b) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0002ae6b) list_medium_line_t2_g2_g

0xbf88,	// (0x00027c32) list_medium_line_t2_g2_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t2_g2_t1

0xbf88,	// (0x00027c32) list_medium_line_t2_g2_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t2_g2_t2

0x0001,

0xf236,	// (0x0002aee0) list_medium_line_t2_g2_t_ParamLimits

0xf236,	// (0x0002aee0) list_medium_line_t2_g2_t

0x0049,	// (0x0001bcf3) aid_sp_fs_list_icon_a_sm

0x0051,	// (0x0001bcfb) aid_sp_fs_list_icon_d

0x0059,	// (0x0001bd03) aid_sp_fs_text_primary

0x0062,	// (0x0001bd0c) aid_sp_fs_text_secondary

0xb627,	// (0x000272d1) list_medium_line

0xb627,	// (0x000272d1) list_medium_line_g2

0xb627,	// (0x000272d1) list_medium_line_g3

0xb627,	// (0x000272d1) list_medium_line_plain

0xb627,	// (0x000272d1) list_medium_line_plain_t2

0xb627,	// (0x000272d1) list_medium_line_plain_t3

0xb627,	// (0x000272d1) list_medium_line_right_icon

0xb627,	// (0x000272d1) list_medium_line_right_iconx2

0xb627,	// (0x000272d1) list_medium_line_t2

0xb627,	// (0x000272d1) list_medium_line_t2_g2

0xb627,	// (0x000272d1) list_medium_line_t2_g3

0xb627,	// (0x000272d1) list_medium_line_t2_right_icon

0xb627,	// (0x000272d1) list_medium_line_t2_right_iconx2

0xb627,	// (0x000272d1) list_medium_line_t3

0xb627,	// (0x000272d1) list_medium_line_t3_g2

0xb627,	// (0x000272d1) list_medium_line_t3_g3

0xb627,	// (0x000272d1) list_medium_line_t3_right_iconx2

0xb627,	// (0x000272d1) list_medium_line_t4_g4

0xb627,	// (0x000272d1) list_medium_line_x2

0xb627,	// (0x000272d1) list_medium_line_x2_t2_g2

0xb627,	// (0x000272d1) list_medium_line_x2_t2_g3

0xb627,	// (0x000272d1) list_medium_line_x2_t2_g4

0xb627,	// (0x000272d1) list_medium_line_x2_t3

0xb627,	// (0x000272d1) list_medium_line_x2_t3_g2

0xb627,	// (0x000272d1) list_medium_line_x2_t3_g3

0xb627,	// (0x000272d1) list_medium_line_x2_t3_g4

0xb627,	// (0x000272d1) list_medium_line_x2_t4_g2

0xb627,	// (0x000272d1) list_medium_line_x2_t4_g4

0xb627,	// (0x000272d1) list_medium_line_x3

0xb627,	// (0x000272d1) list_medium_line_x3_t4

0xb627,	// (0x000272d1) list_medium_line_x3_t4_g4

0xb627,	// (0x000272d1) list_medium_line_x4_t4

0xb627,	// (0x000272d1) list_medium_line_x4_t4_g7

0xb627,	// (0x000272d1) list_medium_line_x4_t5

0x87b3,	// (0x0002445d) list_single_fs_dyc_pane_ParamLimits

0x87b3,	// (0x0002445d) list_single_fs_dyc_pane

0xbd28,	// (0x000279d2) list_medium_line_x4_t4_g7_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x4_t4_g7_g1

0xbd28,	// (0x000279d2) list_medium_line_x4_t4_g7_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x4_t4_g7_g2

0xbd28,	// (0x000279d2) list_medium_line_x4_t4_g7_g3_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x4_t4_g7_g3

0xbd28,	// (0x000279d2) list_medium_line_x4_t4_g7_g4_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x4_t4_g7_g4

0xbd28,	// (0x000279d2) list_medium_line_x4_t4_g7_g5_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x4_t4_g7_g5

0xbd28,	// (0x000279d2) list_medium_line_x4_t4_g7_g6_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x4_t4_g7_g6

0xbd36,	// (0x000279e0) list_medium_line_x4_t4_g7_g7_ParamLimits

0xbd36,	// (0x000279e0) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb12,	// (0x0002b7bc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb12,	// (0x0002b7bc) list_medium_line_x4_t4_g7_g

0xbf88,	// (0x00027c32) list_medium_line_x4_t4_g7_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x4_t4_g7_t1

0xbf88,	// (0x00027c32) list_medium_line_x4_t4_g7_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x4_t4_g7_t2

0xbf88,	// (0x00027c32) list_medium_line_x4_t4_g7_t3_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x4_t4_g7_t3

0xc845,	// (0x000284ef) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc845,	// (0x000284ef) list_medium_line_x4_t4_g7_t4

0xc845,	// (0x000284ef) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc845,	// (0x000284ef) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb21,	// (0x0002b7cb) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb21,	// (0x0002b7cb) list_medium_line_x4_t4_g7_t

0x8e67,	// (0x00024b11) list_single_dyc_row_pane_ParamLimits

0x8e67,	// (0x00024b11) list_single_dyc_row_pane

0x9536,	// (0x000251e0) call5_gesture_pane_ParamLimits

0x9536,	// (0x000251e0) call5_gesture_pane

0x956a,	// (0x00025214) call5_windows_pane_ParamLimits

0x956a,	// (0x00025214) call5_windows_pane

0x95bd,	// (0x00025267) call5_swipe_1_pane_cp_ParamLimits

0x95bd,	// (0x00025267) call5_swipe_1_pane_cp

0x95c9,	// (0x00025273) call5_swipe_2_pane_cp_ParamLimits

0x95c9,	// (0x00025273) call5_swipe_2_pane_cp

0xbf4c,	// (0x00027bf6) call5_image_pane_cp

0x95d5,	// (0x0002527f) popup_call5_audio_first_window_cp_ParamLimits

0x95d5,	// (0x0002527f) popup_call5_audio_first_window_cp

0x0b0d,	// (0x0001c7b7) call5_swipe_1_pane_g1_cp_ParamLimits

0x0b0d,	// (0x0001c7b7) call5_swipe_1_pane_g1_cp

0x0b7a,	// (0x0001c824) call5_swipe_1_pane_g2_cp

0x0b26,	// (0x0001c7d0) call5_swipe_1_pane_t1_cp_ParamLimits

0x0b26,	// (0x0001c7d0) call5_swipe_1_pane_t1_cp

0x0b0d,	// (0x0001c7b7) call5_swipe_2_pane_g1_cp_ParamLimits

0x0b0d,	// (0x0001c7b7) call5_swipe_2_pane_g1_cp

0x0b82,	// (0x0001c82c) call5_swipe_2_pane_g2_cp

0x0b8a,	// (0x0001c834) call5_swipe_2_pane_t1_cp_ParamLimits

0x0b8a,	// (0x0001c834) call5_swipe_2_pane_t1_cp

0xbcc1,	// (0x0002796b) main_sp_fs_email_pane

0x0b9f,	// (0x0001c849) main_sp_fs_listscroll_pane_te

0x0ba8,	// (0x0001c852) popup_sp_fs_action_menu_pane_ParamLimits

0x0ba8,	// (0x0001c852) popup_sp_fs_action_menu_pane

0xbf6e,	// (0x00027c18) bg_sp_fs_ctrlbar_pane_g1

0x0bec,	// (0x0001c896) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x0bf5,	// (0x0001c89f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x0bfe,	// (0x0001c8a8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbf6e,	// (0x00027c18) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc0f,	// (0x0002b8b9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xdd1b,	// (0x000299c5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xdd1b,	// (0x000299c5) bg_sp_fs_ctrlbar_ddmenu_pane

0x0c07,	// (0x0001c8b1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x0c07,	// (0x0001c8b1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x0c13,	// (0x0001c8bd) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x0c13,	// (0x0001c8bd) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc18,	// (0x0002b8c2) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc18,	// (0x0002b8c2) main_sp_fs_ctrlbar_ddmenu_pane_g

0x0c1f,	// (0x0001c8c9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x0c1f,	// (0x0001c8c9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xbf6e,	// (0x00027c18) list_medium_line_t2_right_icon_g1

0xc4d8,	// (0x00028182) list_medium_line_t2_right_icon_t1

0xc4d8,	// (0x00028182) list_medium_line_t2_right_icon_t2

0x0001,

0xfc1d,	// (0x0002b8c7) list_medium_line_t2_right_icon_t

0xcd3a,	// (0x000289e4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcd3a,	// (0x000289e4) bg_sp_fs_ctrlbar_pane

0x963a,	// (0x000252e4) main_sp_fs_ctrlbar_button_pane_cp01

0x9642,	// (0x000252ec) main_sp_fs_ctrlbar_ddmenu_pane

0x0c71,	// (0x0001c91b) main_sp_fs_ctrlbar_pane_g1

0x0c7d,	// (0x0001c927) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc22,	// (0x0002b8cc) main_sp_fs_ctrlbar_pane_g

0x967e,	// (0x00025328) main_sp_fs_ctrlbar_pane_t1

0x96b9,	// (0x00025363) main_sp_fs_ctrlbar_pane

0x96cf,	// (0x00025379) main_sp_fs_listscroll_pane_te_cp01

0x96e0,	// (0x0002538a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x96e0,	// (0x0002538a) popup_sp_fs_action_menu_pane_cp01

0xbcc1,	// (0x0002796b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbcc1,	// (0x0002796b) bg_sp_fs_highlight_list_pane_cp01

0x0ca4,	// (0x0001c94e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0ca4,	// (0x0001c94e) sp_fs_action_menu_list_gene_pane_g1

0x0cb3,	// (0x0001c95d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0cb3,	// (0x0001c95d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc30,	// (0x0002b8da) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc30,	// (0x0002b8da) sp_fs_action_menu_list_gene_pane_g

0x0cc0,	// (0x0001c96a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0cc0,	// (0x0001c96a) sp_fs_action_menu_list_gene_pane_t1

0x0cd8,	// (0x0001c982) sp_fs_action_menu_list_gene_pane_ParamLimits

0x0cd8,	// (0x0001c982) sp_fs_action_menu_list_gene_pane

0x0cf7,	// (0x0001c9a1) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x0cf7,	// (0x0001c9a1) popup_sp_fs_action_menu_bg_pane

0x0d05,	// (0x0001c9af) sp_fs_action_menu_list_pane_ParamLimits

0x0d05,	// (0x0001c9af) sp_fs_action_menu_list_pane

0x0d25,	// (0x0001c9cf) sp_fs_scroll_pane_cp01_ParamLimits

0x0d25,	// (0x0001c9cf) sp_fs_scroll_pane_cp01

0xc4d8,	// (0x00028182) list_medium_line_plain_t2_t1

0xc4d8,	// (0x00028182) list_medium_line_plain_t2_t2

0x0001,

0xfc1d,	// (0x0002b8c7) list_medium_line_plain_t2_t

0xc4d8,	// (0x00028182) list_medium_line_plain_t3_t1

0xc4d8,	// (0x00028182) list_medium_line_plain_t3_t2

0xc4d8,	// (0x00028182) list_medium_line_plain_t3_t3

0x0002,

0xf281,	// (0x0002af2b) list_medium_line_plain_t3_t

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g2_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g2_g1

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g2_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0002ae6b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0002ae6b) list_medium_line_x2_t2_g2_g

0xbf88,	// (0x00027c32) list_medium_line_x2_t2_g2_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t2_g2_t1

0xbf88,	// (0x00027c32) list_medium_line_x2_t2_g2_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t2_g2_t2

0x0001,

0xf236,	// (0x0002aee0) list_medium_line_x2_t2_g2_t_ParamLimits

0xf236,	// (0x0002aee0) list_medium_line_x2_t2_g2_t

0xbd28,	// (0x000279d2) list_medium_line_x2_t4_g2_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t4_g2_g1

0xbd28,	// (0x000279d2) list_medium_line_x2_t4_g2_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0002ae6b) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0002ae6b) list_medium_line_x2_t4_g2_g

0xbf88,	// (0x00027c32) list_medium_line_x2_t4_g2_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t4_g2_t1

0xbf88,	// (0x00027c32) list_medium_line_x2_t4_g2_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t4_g2_t2

0xbf88,	// (0x00027c32) list_medium_line_x2_t4_g2_t3_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t4_g2_t3

0xbf88,	// (0x00027c32) list_medium_line_x2_t4_g2_t4_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0002ae79) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0002ae79) list_medium_line_x2_t4_g2_t

0xbf6e,	// (0x00027c18) list_medium_line_t3_right_iconx2_g1

0xbf6e,	// (0x00027c18) list_medium_line_t3_right_iconx2_g2

0xbf6e,	// (0x00027c18) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3a2,	// (0x0002b04c) list_medium_line_t3_right_iconx2_g

0xc4d8,	// (0x00028182) list_medium_line_t3_right_iconx2_t1

0xc4d8,	// (0x00028182) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc1d,	// (0x0002b8c7) list_medium_line_t3_right_iconx2_t

0xbd28,	// (0x000279d2) list_medium_line_x3_t4_g4_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x3_t4_g4_g1

0xbd28,	// (0x000279d2) list_medium_line_x3_t4_g4_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x3_t4_g4_g2

0xbd28,	// (0x000279d2) list_medium_line_x3_t4_g4_g3_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x3_t4_g4_g3

0xbd28,	// (0x000279d2) list_medium_line_x3_t4_g4_g4_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0002ae70) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0002ae70) list_medium_line_x3_t4_g4_g

0xbf88,	// (0x00027c32) list_medium_line_x3_t4_g4_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x3_t4_g4_t1

0xbf88,	// (0x00027c32) list_medium_line_x3_t4_g4_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x3_t4_g4_t2

0xbf88,	// (0x00027c32) list_medium_line_x3_t4_g4_t3_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x3_t4_g4_t3

0xbf88,	// (0x00027c32) list_medium_line_x3_t4_g4_t4_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0002ae79) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0002ae79) list_medium_line_x3_t4_g4_t

0x9700,	// (0x000253aa) list_single_dyc_row_text_pane_t1_ParamLimits

0x9700,	// (0x000253aa) list_single_dyc_row_text_pane_t1

0x9737,	// (0x000253e1) list_single_dyc_row_text_pane_t2_ParamLimits

0x9737,	// (0x000253e1) list_single_dyc_row_text_pane_t2

0x0d4b,	// (0x0001c9f5) list_single_dyc_row_text_pane_t3_ParamLimits

0x0d4b,	// (0x0001c9f5) list_single_dyc_row_text_pane_t3

0x0005,

0xfc35,	// (0x0002b8df) list_single_dyc_row_text_pane_t_ParamLimits

0xfc35,	// (0x0002b8df) list_single_dyc_row_text_pane_t

0x0d6f,	// (0x0001ca19) list_single_dyc_row_pane_g1_ParamLimits

0x0d6f,	// (0x0001ca19) list_single_dyc_row_pane_g1

0x0d7b,	// (0x0001ca25) list_single_dyc_row_pane_g2_ParamLimits

0x0d7b,	// (0x0001ca25) list_single_dyc_row_pane_g2

0x0d87,	// (0x0001ca31) list_single_dyc_row_pane_g3_ParamLimits

0x0d87,	// (0x0001ca31) list_single_dyc_row_pane_g3

0x0d93,	// (0x0001ca3d) list_single_dyc_row_pane_g4_ParamLimits

0x0d93,	// (0x0001ca3d) list_single_dyc_row_pane_g4

0x0003,

0xfc42,	// (0x0002b8ec) list_single_dyc_row_pane_g_ParamLimits

0xfc42,	// (0x0002b8ec) list_single_dyc_row_pane_g

0x0d9f,	// (0x0001ca49) list_single_dyc_row_text_pane_ParamLimits

0x0d9f,	// (0x0001ca49) list_single_dyc_row_text_pane

0xb627,	// (0x000272d1) bg_sp_fs_scroll_pane

0x0dbe,	// (0x0001ca68) thumb_sp_fs_scroll_pane

0xbd28,	// (0x000279d2) list_medium_line_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_g1

0xbf88,	// (0x00027c32) list_medium_line_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t1

0xbd28,	// (0x000279d2) list_medium_line_x2_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_g1

0xbd28,	// (0x000279d2) list_medium_line_x2_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0002ae6b) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0002ae6b) list_medium_line_x2_g

0xbf88,	// (0x00027c32) list_medium_line_x2_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t1

0xbd28,	// (0x000279d2) list_medium_line_x3_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x3_g1

0x0dc7,	// (0x0001ca71) list_medium_line_x3_g2_ParamLimits

0x0dc7,	// (0x0001ca71) list_medium_line_x3_g2

0x0001,

0xfc4b,	// (0x0002b8f5) list_medium_line_x3_g_ParamLimits

0xfc4b,	// (0x0002b8f5) list_medium_line_x3_g

0x0dd5,	// (0x0001ca7f) list_medium_line_x3_t1_ParamLimits

0x0dd5,	// (0x0001ca7f) list_medium_line_x3_t1

0x0de9,	// (0x0001ca93) thumb_sp_fs_scroll_pane_g1

0x0df2,	// (0x0001ca9c) thumb_sp_fs_scroll_pane_g2

0x0dfb,	// (0x0001caa5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc50,	// (0x0002b8fa) thumb_sp_fs_scroll_pane_g

0x0de9,	// (0x0001ca93) bg_sp_fs_scroll_pane_g1

0x0df2,	// (0x0001ca9c) bg_sp_fs_scroll_pane_g2

0x0dfb,	// (0x0001caa5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc50,	// (0x0002b8fa) bg_sp_fs_scroll_pane_g

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g4_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g4_g1

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g4_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g4_g2

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g4_g3_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g4_g3

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g4_g4_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0002ae70) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0002ae70) list_medium_line_x2_t3_g4_g

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g4_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g4_t1

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g4_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g4_t2

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g4_t3_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0002ae64) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0002ae64) list_medium_line_x2_t3_g4_t

0xbd28,	// (0x000279d2) list_medium_line_g2_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_g2_g1

0xbd28,	// (0x000279d2) list_medium_line_g2_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0002ae6b) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0002ae6b) list_medium_line_g2_g

0xbf88,	// (0x00027c32) list_medium_line_g2_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_g2_t1

0xbd28,	// (0x000279d2) list_medium_line_t3_g2_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_t3_g2_g1

0xbd28,	// (0x000279d2) list_medium_line_t3_g2_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0002ae6b) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0002ae6b) list_medium_line_t3_g2_g

0xbf88,	// (0x00027c32) list_medium_line_t3_g2_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t3_g2_t1

0xbf88,	// (0x00027c32) list_medium_line_t3_g2_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t3_g2_t2

0xbf88,	// (0x00027c32) list_medium_line_t3_g2_t3_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0002ae64) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0002ae64) list_medium_line_t3_g2_t

0xbf6e,	// (0x00027c18) list_medium_line_right_icon_g1

0xc4d8,	// (0x00028182) list_medium_line_right_icon_t1

0xbd28,	// (0x000279d2) list_medium_line_t2_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_t2_g1

0xbf88,	// (0x00027c32) list_medium_line_t2_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t2_t1

0xbf88,	// (0x00027c32) list_medium_line_t2_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t2_t2

0x0001,

0xf236,	// (0x0002aee0) list_medium_line_t2_t_ParamLimits

0xf236,	// (0x0002aee0) list_medium_line_t2_t

0xbd28,	// (0x000279d2) list_medium_line_t3_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_t3_g1

0xbf88,	// (0x00027c32) list_medium_line_t3_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t3_t1

0xbf88,	// (0x00027c32) list_medium_line_t3_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t3_t2

0xbf88,	// (0x00027c32) list_medium_line_t3_t3_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0002ae64) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0002ae64) list_medium_line_t3_t

0xbd28,	// (0x000279d2) list_medium_line_g3_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_g3_g1

0xbd28,	// (0x000279d2) list_medium_line_g3_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_g3_g2

0xbd28,	// (0x000279d2) list_medium_line_g3_g3_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0002ae5d) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0002ae5d) list_medium_line_g3_g

0xbf88,	// (0x00027c32) list_medium_line_g3_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_g3_t1

0xbd28,	// (0x000279d2) list_medium_line_t2_g3_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_t2_g3_g1

0xbd28,	// (0x000279d2) list_medium_line_t2_g3_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_t2_g3_g2

0xbd28,	// (0x000279d2) list_medium_line_t2_g3_g3_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0002ae5d) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0002ae5d) list_medium_line_t2_g3_g

0xbf88,	// (0x00027c32) list_medium_line_t2_g3_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t2_g3_t1

0xbf88,	// (0x00027c32) list_medium_line_t2_g3_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t2_g3_t2

0x0001,

0xf236,	// (0x0002aee0) list_medium_line_t2_g3_t_ParamLimits

0xf236,	// (0x0002aee0) list_medium_line_t2_g3_t

0xbd28,	// (0x000279d2) list_medium_line_t3_g3_g1_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_t3_g3_g1

0xbd28,	// (0x000279d2) list_medium_line_t3_g3_g2_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_t3_g3_g2

0xbd28,	// (0x000279d2) list_medium_line_t3_g3_g3_ParamLimits

0xbd28,	// (0x000279d2) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0002ae5d) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0002ae5d) list_medium_line_t3_g3_g

0xbf88,	// (0x00027c32) list_medium_line_t3_g3_t1_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t3_g3_t1

0xbf88,	// (0x00027c32) list_medium_line_t3_g3_t2_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t3_g3_t2

0xbf88,	// (0x00027c32) list_medium_line_t3_g3_t3_ParamLimits

0xbf88,	// (0x00027c32) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0002ae64) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0002ae64) list_medium_line_t3_g3_t

0xbf6e,	// (0x00027c18) list_medium_line_right_iconx2_g1

0xbf6e,	// (0x00027c18) list_medium_line_right_iconx2_g2

0x0001,

0xf39d,	// (0x0002b047) list_medium_line_right_iconx2_g

0xc4d8,	// (0x00028182) list_medium_line_right_iconx2_t1

0xbf6e,	// (0x00027c18) list_medium_line_t2_right_iconx2_g1

0xbf6e,	// (0x00027c18) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf39d,	// (0x0002b047) list_medium_line_t2_right_iconx2_g

0xc4d8,	// (0x00028182) list_medium_line_t2_right_iconx2_t1

0xc4d8,	// (0x00028182) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc1d,	// (0x0002b8c7) list_medium_line_t2_right_iconx2_t

0xc4d8,	// (0x00028182) list_medium_line_x4_t4_t1

0xc4d8,	// (0x00028182) list_medium_line_x4_t4_t2

0xc4d8,	// (0x00028182) list_medium_line_x4_t4_t3

0xc4d8,	// (0x00028182) list_medium_line_x4_t4_t4

0x0003,

0xf288,	// (0x0002af32) list_medium_line_x4_t4_t

0x9884,	// (0x0002552e) tport_appsw_pane_ParamLimits

0x9884,	// (0x0002552e) tport_appsw_pane

0x9892,	// (0x0002553c) tport_contact_pane_ParamLimits

0x9892,	// (0x0002553c) tport_contact_pane

0x98a2,	// (0x0002554c) tport_listscroll_pane_ParamLimits

0x98a2,	// (0x0002554c) tport_listscroll_pane

0x98b2,	// (0x0002555c) cell_tport_appsw_pane_ParamLimits

0x98b2,	// (0x0002555c) cell_tport_appsw_pane

0xbd36,	// (0x000279e0) tport_appsw_pane_g1_ParamLimits

0xbd36,	// (0x000279e0) tport_appsw_pane_g1

0x0e04,	// (0x0001caae) tport_contact_pane_g1

0x065f,	// (0x0001c309) tport_contact_pane_t1

0x0e0d,	// (0x0001cab7) tport_contact_pane_t2

0x0001,

0xfc57,	// (0x0002b901) tport_contact_pane_t

0x0e1b,	// (0x0001cac5) list_tport_pane

0x0e24,	// (0x0001cace) scroll_pane_cp_030

0x98e5,	// (0x0002558f) cell_tport_appsw_pane_g1

0x98f5,	// (0x0002559f) cell_tport_appsw_pane_t1

0x9903,	// (0x000255ad) grid_highlight_pane_cp019

0x990b,	// (0x000255b5) list_tport_double_graphic_pane_ParamLimits

0x990b,	// (0x000255b5) list_tport_double_graphic_pane

0xbcc1,	// (0x0002796b) list_highlight_pane_cp023_ParamLimits

0xbcc1,	// (0x0002796b) list_highlight_pane_cp023

0x991c,	// (0x000255c6) list_tport_double_graphic_pane_g1_ParamLimits

0x991c,	// (0x000255c6) list_tport_double_graphic_pane_g1

0x9929,	// (0x000255d3) list_tport_double_graphic_pane_t1_ParamLimits

0x9929,	// (0x000255d3) list_tport_double_graphic_pane_t1

0x993e,	// (0x000255e8) list_tport_double_graphic_pane_t2_ParamLimits

0x993e,	// (0x000255e8) list_tport_double_graphic_pane_t2

0x0001,

0xfc63,	// (0x0002b90d) list_tport_double_graphic_pane_t_ParamLimits

0xfc63,	// (0x0002b90d) list_tport_double_graphic_pane_t

0xb627,	// (0x000272d1) main_cale_note_pane

0x4006,	// (0x0001fcb0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x4006,	// (0x0001fcb0) cell_vitu2_function_top_wide_pane_cp01

0x920d,	// (0x00024eb7) wait_bar_pane_cp05_ParamLimits

0xbcc1,	// (0x0002796b) listscroll_cmail_pane

0x0e35,	// (0x0001cadf) list_cmail_pane

0x9950,	// (0x000255fa) list_cmail_body_pane

0x9977,	// (0x00025621) list_single_cmail_header_caption_pane

0x99a0,	// (0x0002564a) list_single_cmail_header_detail_pane_ParamLimits

0x99a0,	// (0x0002564a) list_single_cmail_header_detail_pane

0x0e4c,	// (0x0001caf6) list_single_cmail_header_caption_pane_t1

0x99da,	// (0x00025684) list_single_cmail_header_detail_pane_g1_ParamLimits

0x99da,	// (0x00025684) list_single_cmail_header_detail_pane_g1

0x0e63,	// (0x0001cb0d) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0e63,	// (0x0001cb0d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc68,	// (0x0002b912) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc68,	// (0x0002b912) list_single_cmail_header_detail_pane_g

0x99f0,	// (0x0002569a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x99f0,	// (0x0002569a) list_single_cmail_header_detail_pane_t1

0x9a2c,	// (0x000256d6) list_single_cmail_header_editor_pane_bg_ParamLimits

0x9a2c,	// (0x000256d6) list_single_cmail_header_editor_pane_bg

0x07bc,	// (0x0001c466) list_cmail_body_pane_g1

0x0ea0,	// (0x0001cb4a) list_cmail_body_pane_t1

0xea86,	// (0x0002a730) list_single_cmail_header_editor_pane_bg_g1

0xc193,	// (0x00027e3d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xea96,	// (0x0002a740) list_single_cmail_header_editor_pane_bg_g1_copy2

0xea8e,	// (0x0002a738) list_single_cmail_header_editor_pane_bg_g1_copy3

0xed11,	// (0x0002a9bb) list_single_cmail_header_editor_pane_bg_g1_copy4

0xeab6,	// (0x0002a760) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeaa6,	// (0x0002a750) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeaae,	// (0x0002a758) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc173,	// (0x00027e1d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9a43,	// (0x000256ed) calenote_gesture_pane_ParamLimits

0x9a43,	// (0x000256ed) calenote_gesture_pane

0x9a5d,	// (0x00025707) calenote_window_pane_ParamLimits

0x9a5d,	// (0x00025707) calenote_window_pane

0x0eae,	// (0x0001cb58) popup_note_window_cp01

0x9a75,	// (0x0002571f) calenote_swipe_1_pane_ParamLimits

0x9a75,	// (0x0002571f) calenote_swipe_1_pane

0x95c9,	// (0x00025273) calenote_swipe_2_pane_ParamLimits

0x95c9,	// (0x00025273) calenote_swipe_2_pane

0x0b0d,	// (0x0001c7b7) calenote_swipe_1_pane_g1_ParamLimits

0x0b0d,	// (0x0001c7b7) calenote_swipe_1_pane_g1

0x0b1a,	// (0x0001c7c4) calenote_swipe_1_pane_g2_ParamLimits

0x0b1a,	// (0x0001c7c4) calenote_swipe_1_pane_g2

0x0001,

0xfc05,	// (0x0002b8af) calenote_swipe_1_pane_g_ParamLimits

0xfc05,	// (0x0002b8af) calenote_swipe_1_pane_g

0x0ec0,	// (0x0001cb6a) calenote_swipe_1_pane_t1_ParamLimits

0x0ec0,	// (0x0001cb6a) calenote_swipe_1_pane_t1

0x0b0d,	// (0x0001c7b7) calenote_swipe_2_pane_g1_ParamLimits

0x0b0d,	// (0x0001c7b7) calenote_swipe_2_pane_g1

0x0edf,	// (0x0001cb89) calenote_swipe_2_pane_g2_ParamLimits

0x0edf,	// (0x0001cb89) calenote_swipe_2_pane_g2

0x0001,

0xfc74,	// (0x0002b91e) calenote_swipe_2_pane_g_ParamLimits

0xfc74,	// (0x0002b91e) calenote_swipe_2_pane_g

0x0eeb,	// (0x0001cb95) calenote_swipe_2_pane_t1_ParamLimits

0x0eeb,	// (0x0001cb95) calenote_swipe_2_pane_t1

0xb627,	// (0x000272d1) main_mup_navstr_pane

0x74be,	// (0x00023168) main_mup3_pane_t7_ParamLimits

0x74be,	// (0x00023168) main_mup3_pane_t7

0x382e,	// (0x0001f4d8) main_mp4_pane_g6_ParamLimits

0x382e,	// (0x0001f4d8) main_mp4_pane_g6

0x3b3f,	// (0x0001f7e9) main_image3_pane_t4_ParamLimits

0x3b3f,	// (0x0001f7e9) main_image3_pane_t4

0x9a88,	// (0x00025732) popup_navstr_preview_pane_ParamLimits

0x9a88,	// (0x00025732) popup_navstr_preview_pane

0x9a94,	// (0x0002573e) scroll_navstr_pane_ParamLimits

0x9a94,	// (0x0002573e) scroll_navstr_pane

0xb627,	// (0x000272d1) bg_popup_preview_window_pane_cp04

0x0f12,	// (0x0001cbbc) popup_navstr_preview_pane_t1

0x9aa0,	// (0x0002574a) scroll_navstr_pane_g1_ParamLimits

0x9aa0,	// (0x0002574a) scroll_navstr_pane_g1

0x9aad,	// (0x00025757) scroll_navstr_pane_t1_ParamLimits

0x9aad,	// (0x00025757) scroll_navstr_pane_t1

0x0eb7,	// (0x0001cb61) bg_button_pane_cp014

0x0eb7,	// (0x0001cb61) bg_button_pane_cp030

0x94dc,	// (0x00025186) list_double_fisheye_pane_g4_ParamLimits

0x94dc,	// (0x00025186) list_double_fisheye_pane_g4

0x94e8,	// (0x00025192) list_double_fisheye_pane_g5_ParamLimits

0x94e8,	// (0x00025192) list_double_fisheye_pane_g5

0xed54,	// (0x0002a9fe) sp_fs_scroll_pane_cp03

0x0c71,	// (0x0001c91b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0c7d,	// (0x0001c927) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc22,	// (0x0002b8cc) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x967e,	// (0x00025328) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0e44,	// (0x0001caee) sp_fs_scroll_pane_cp02

0xbe94,	// (0x00027b3e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xbe94,	// (0x00027b3e) popup_sp_fs_calendar_preview_list_single_pane

0xb627,	// (0x000272d1) main_cam6_pano_pane

0x338f,	// (0x0001f039) main_mup3_pane_ParamLimits

0xb627,	// (0x000272d1) main_phacti_pane

0x90e2,	// (0x00024d8c) bg_button_pane_cp11

0x90fa,	// (0x00024da4) main_mobtv_info_pane_g2_ParamLimits

0x90fa,	// (0x00024da4) main_mobtv_info_pane_g2

0x0001,

0xfb82,	// (0x0002b82c) main_mobtv_info_pane_g_ParamLimits

0xfb82,	// (0x0002b82c) main_mobtv_info_pane_g

0x92ac,	// (0x00024f56) sc_clock_pane_t5_ParamLimits

0x92ac,	// (0x00024f56) sc_clock_pane_t5

0x934d,	// (0x00024ff7) main_radioblah_pane_g1_ParamLimits

0x0a59,	// (0x0001c703) main_radioblah_pane_t3_ParamLimits

0x0a59,	// (0x0001c703) main_radioblah_pane_t3

0x0a71,	// (0x0001c71b) main_radioblah_pane_t4_ParamLimits

0x0a71,	// (0x0001c71b) main_radioblah_pane_t4

0x936b,	// (0x00025015) main_radioblah_text_pane_ParamLimits

0x936b,	// (0x00025015) main_radioblah_text_pane

0x9378,	// (0x00025022) main_radioblah_info_pane_g1_ParamLimits

0x940d,	// (0x000250b7) main_radioblah_info_pane_t4_ParamLimits

0x940d,	// (0x000250b7) main_radioblah_info_pane_t4

0xbcc1,	// (0x0002796b) main_sp_fs_calendar_pane

0x9abf,	// (0x00025769) main_phacti_pane_g1

0x9ac7,	// (0x00025771) phacti_note_pane_ParamLimits

0x9ac7,	// (0x00025771) phacti_note_pane

0x0f29,	// (0x0001cbd3) phacti_term_pane_ParamLimits

0x0f29,	// (0x0001cbd3) phacti_term_pane

0x0f3e,	// (0x0001cbe8) phacti_note_pane_t1_ParamLimits

0x0f3e,	// (0x0001cbe8) phacti_note_pane_t1

0x0f55,	// (0x0001cbff) phacti_term_pane_g1

0x0f5d,	// (0x0001cc07) phacti_term_pane_t1_ParamLimits

0x0f5d,	// (0x0001cc07) phacti_term_pane_t1

0x0f87,	// (0x0001cc31) popup_sp_fs_calendar_preview_list_single_pane_g1

0xbf33,	// (0x00027bdd) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc7e,	// (0x0002b928) popup_sp_fs_calendar_preview_list_single_pane_g

0x0f8f,	// (0x0001cc39) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0f8f,	// (0x0001cc39) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0fa5,	// (0x0001cc4f) aid_popup_sp_fs_bg_corner_pane

0xbf6e,	// (0x00027c18) popup_sp_fs_calendar_preview_bg_pane_g1

0xb627,	// (0x000272d1) popup_sp_fs_calendar_preview_bg_pane

0x0fad,	// (0x0001cc57) popup_sp_fs_calendar_preview_list_pane

0xcd3a,	// (0x000289e4) bg_main_sp_fs_cale_pane_ParamLimits

0xcd3a,	// (0x000289e4) bg_main_sp_fs_cale_pane

0x0fbe,	// (0x0001cc68) listscroll_cale_mrui_pane_ParamLimits

0x0fbe,	// (0x0001cc68) listscroll_cale_mrui_pane

0x0fd3,	// (0x0001cc7d) listscroll_sp_fs_schedule_track_pane

0x0fdc,	// (0x0001cc86) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x0fdc,	// (0x0001cc86) main_sp_fs_ctrlbar_pane_cp01

0x0fef,	// (0x0001cc99) main_sp_fs_ribbon_pane

0x0ff7,	// (0x0001cca1) popup_sp_fs_cale_preview_window

0x9b2a,	// (0x000257d4) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9b2a,	// (0x000257d4) list_single_sp_fs_schedule_track_pane

0xbd1a,	// (0x000279c4) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xbd1a,	// (0x000279c4) bg_sp_fs_highlight_list_pane_cp03

0x9b4a,	// (0x000257f4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9b4a,	// (0x000257f4) list_single_sp_fs_schedule_track_pane_g1

0x9b56,	// (0x00025800) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9b56,	// (0x00025800) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc83,	// (0x0002b92d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc83,	// (0x0002b92d) list_single_sp_fs_schedule_track_pane_g

0x9b62,	// (0x0002580c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9b62,	// (0x0002580c) list_single_sp_fs_schedule_track_pane_t1

0x9b7a,	// (0x00025824) sp_fs_schedule_track_pane_ParamLimits

0x9b7a,	// (0x00025824) sp_fs_schedule_track_pane

0x1009,	// (0x0001ccb3) sp_fs_schedule_track_pane_g1

0x1011,	// (0x0001ccbb) sp_fs_schedule_track_pane_g2

0x1019,	// (0x0001ccc3) sp_fs_schedule_track_pane_g3

0x1021,	// (0x0001cccb) sp_fs_schedule_track_pane_g4

0x1029,	// (0x0001ccd3) sp_fs_schedule_track_pane_g5

0x0004,

0xfc88,	// (0x0002b932) sp_fs_schedule_track_pane_g

0xea86,	// (0x0002a730) bg_sp_fs_schedule_viewer_highlight_g1

0xc193,	// (0x00027e3d) bg_sp_fs_schedule_viewer_highlight_g2

0xea8e,	// (0x0002a738) bg_sp_fs_schedule_viewer_highlight_g3

0xea96,	// (0x0002a740) bg_sp_fs_schedule_viewer_highlight_g4

0xed11,	// (0x0002a9bb) bg_sp_fs_schedule_viewer_highlight_g5

0xeaa6,	// (0x0002a750) bg_sp_fs_schedule_viewer_highlight_g6

0xeaae,	// (0x0002a758) bg_sp_fs_schedule_viewer_highlight_g7

0xeab6,	// (0x0002a760) bg_sp_fs_schedule_viewer_highlight_g8

0xc173,	// (0x00027e1d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc93,	// (0x0002b93d) bg_sp_fs_schedule_viewer_highlight_g

0xb627,	// (0x000272d1) bg_main_sp_fs_ribbon_pane

0x9b8a,	// (0x00025834) main_sp_fs_ribbon_pane_g1

0x1031,	// (0x0001ccdb) main_sp_fs_ribbon_pane_t1

0x9b93,	// (0x0002583d) main_sp_fs_ribbon_pane_t2

0x1040,	// (0x0001ccea) main_sp_fs_ribbon_pane_t3

0x0002,

0xfca6,	// (0x0002b950) main_sp_fs_ribbon_pane_t

0x104f,	// (0x0001ccf9) main_sp_fs_ribbon_scheduler_pane

0x1057,	// (0x0001cd01) bg_main_sp_fs_ribbon_pane_g1

0x1060,	// (0x0001cd0a) bg_main_sp_fs_ribbon_pane_g2

0x1069,	// (0x0001cd13) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcad,	// (0x0002b957) bg_main_sp_fs_ribbon_pane_g

0x1071,	// (0x0001cd1b) main_sp_fs_ribbon_scheduler_pane_g1

0x107a,	// (0x0001cd24) main_sp_fs_ribbon_scheduler_pane_g2

0x1083,	// (0x0001cd2d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcb4,	// (0x0002b95e) main_sp_fs_ribbon_scheduler_pane_g

0x108c,	// (0x0001cd36) list_cale_mrui_pane

0x9ba2,	// (0x0002584c) sp_fs_scroll_pane_cp07_ParamLimits

0x9ba2,	// (0x0002584c) sp_fs_scroll_pane_cp07

0x9bbe,	// (0x00025868) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9bbe,	// (0x00025868) bg_sp_fs_schedule_viewer_highlight

0x1099,	// (0x0001cd43) list_single_sp_fs_schedule_track_pane_cp01

0x10a1,	// (0x0001cd4b) list_sp_fs_schedule_track_pane

0x10a9,	// (0x0001cd53) sp_fs_scroll_pane_cp06_ParamLimits

0x10a9,	// (0x0001cd53) sp_fs_scroll_pane_cp06

0xbf6e,	// (0x00027c18) bgmain_sp_fs_calendar_pane_g1

0x9bcb,	// (0x00025875) list_single_cale_mrui_pane_ParamLimits

0x9bcb,	// (0x00025875) list_single_cale_mrui_pane

0x10bb,	// (0x0001cd65) list_single_cale_mrui_row_pane_ParamLimits

0x10bb,	// (0x0001cd65) list_single_cale_mrui_row_pane

0x10c8,	// (0x0001cd72) list_single_cale_mrui_row_pane_g1_ParamLimits

0x10c8,	// (0x0001cd72) list_single_cale_mrui_row_pane_g1

0x110d,	// (0x0001cdb7) list_single_cale_mrui_row_pane_t1_ParamLimits

0x110d,	// (0x0001cdb7) list_single_cale_mrui_row_pane_t1

0x9bf5,	// (0x0002589f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9bf5,	// (0x0002589f) list_single_cale_mrui_row_pane_t2

0x111f,	// (0x0001cdc9) list_single_cale_mrui_row_pane_t3_ParamLimits

0x111f,	// (0x0001cdc9) list_single_cale_mrui_row_pane_t3

0x114e,	// (0x0001cdf8) list_single_cale_mrui_row_pane_t4_ParamLimits

0x114e,	// (0x0001cdf8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcc2,	// (0x0002b96c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcc2,	// (0x0002b96c) list_single_cale_mrui_row_pane_t

0x9c5b,	// (0x00025905) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9c5b,	// (0x00025905) list_single_cmail_header_editor_pane_bg_cp01

0x9c83,	// (0x0002592d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9c83,	// (0x0002592d) list_single_cmail_header_editor_pane_bg_cp02

0x9c9f,	// (0x00025949) main_radioblah_text_pane_t1_ParamLimits

0x9c9f,	// (0x00025949) main_radioblah_text_pane_t1

0x117d,	// (0x0001ce27) cam6_indi_pane_cp01

0x1185,	// (0x0001ce2f) cam6_mode_pane_cp01

0x118d,	// (0x0001ce37) cam6_pano_pane

0x1196,	// (0x0001ce40) cam6_zoom_pane_cp01

0x119e,	// (0x0001ce48) cam6_pano_image_pane

0x11a9,	// (0x0001ce53) cam6_pano_pane_g1

0x07bc,	// (0x0001c466) cam6_pano_pane_g2

0x11b2,	// (0x0001ce5c) cam6_pano_pane_g3

0x11bb,	// (0x0001ce65) cam6_pano_pane_g4

0xe754,	// (0x0002a3fe) cam6_pano_pane_g5

0x11c4,	// (0x0001ce6e) cam6_pano_pane_g6

0xed3c,	// (0x0002a9e6) cam6_pano_pane_g7

0x11ce,	// (0x0001ce78) cam6_pano_pane_g8

0x11d7,	// (0x0001ce81) cam6_pano_pane_g9

0x0008,

0xfccb,	// (0x0002b975) cam6_pano_pane_g

0xb627,	// (0x000272d1) main_browser_tag_pane

0x0f0a,	// (0x0001cbb4) grid_navstr_albumart_pane

0x11e2,	// (0x0001ce8c) cell_navstr_albumart_pane_ParamLimits

0x11e2,	// (0x0001ce8c) cell_navstr_albumart_pane

0x1202,	// (0x0001ceac) cell_navstr_albumart_pane_g1

0xdc43,	// (0x000298ed) cell_navstr_albumart_pane_g2

0xdc53,	// (0x000298fd) cell_navstr_albumart_pane_g3

0xdc4b,	// (0x000298f5) cell_navstr_albumart_pane_g4

0x0003,

0xfcde,	// (0x0002b988) cell_navstr_albumart_pane_g

0x9cba,	// (0x00025964) bt_list_pane_ParamLimits

0x9cba,	// (0x00025964) bt_list_pane

0x9cda,	// (0x00025984) bt_list_pane_t1

0x9ce9,	// (0x00025993) bt_list_pane_t2

0x0001,

0xfce7,	// (0x0002b991) bt_list_pane_t

0xb627,	// (0x000272d1) main_cale_prevew_pane

0x9cf8,	// (0x000259a2) popup_cale_preview_window_ParamLimits

0x9cf8,	// (0x000259a2) popup_cale_preview_window

0xbcc1,	// (0x0002796b) bg_popup_preview_window_pane_cp05_ParamLimits

0xbcc1,	// (0x0002796b) bg_popup_preview_window_pane_cp05

0x120a,	// (0x0001ceb4) list_cale_preview_pane_ParamLimits

0x120a,	// (0x0001ceb4) list_cale_preview_pane

0x9d11,	// (0x000259bb) list_double_cale_preview_pane_ParamLimits

0x9d11,	// (0x000259bb) list_double_cale_preview_pane

0x9d23,	// (0x000259cd) list_single_cale_preview_pane_ParamLimits

0x9d23,	// (0x000259cd) list_single_cale_preview_pane

0x9d39,	// (0x000259e3) list_single_cale_preview_pane_g1

0x9d41,	// (0x000259eb) list_single_cale_preview_pane_t1_ParamLimits

0x9d41,	// (0x000259eb) list_single_cale_preview_pane_t1

0x9d56,	// (0x00025a00) list_double_cale_preview_pane_g1

0x9d5e,	// (0x00025a08) list_double_cale_preview_pane_t1_ParamLimits

0x9d5e,	// (0x00025a08) list_double_cale_preview_pane_t1

0x9d73,	// (0x00025a1d) list_double_cale_preview_pane_t2_ParamLimits

0x9d73,	// (0x00025a1d) list_double_cale_preview_pane_t2

0x0001,

0xfcec,	// (0x0002b996) list_double_cale_preview_pane_t_ParamLimits

0xfcec,	// (0x0002b996) list_double_cale_preview_pane_t

0xb627,	// (0x000272d1) main_ezdial_pane

0xbcc1,	// (0x0002796b) main_sp_fs_email_pane_ParamLimits

0x95e3,	// (0x0002528d) cmail_ddmenu_btn01_pane_ParamLimits

0x95e3,	// (0x0002528d) cmail_ddmenu_btn01_pane

0x9600,	// (0x000252aa) cmail_ddmenu_btn02_pane_ParamLimits

0x9600,	// (0x000252aa) cmail_ddmenu_btn02_pane

0x961e,	// (0x000252c8) cmail_ddmenu_btn03_pane_ParamLimits

0x961e,	// (0x000252c8) cmail_ddmenu_btn03_pane

0x96b9,	// (0x00025363) main_sp_fs_ctrlbar_pane_ParamLimits

0x96cf,	// (0x00025379) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9950,	// (0x000255fa) list_cmail_body_pane_ParamLimits

0x0e5a,	// (0x0001cb04) bg_button_pane_cp12

0x0e6f,	// (0x0001cb19) list_single_cmail_header_detail_pane_g3_ParamLimits

0x0e6f,	// (0x0001cb19) list_single_cmail_header_detail_pane_g3

0x0e7c,	// (0x0001cb26) list_single_cmail_header_detail_pane_t2_ParamLimits

0x0e7c,	// (0x0001cb26) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc6f,	// (0x0002b919) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc6f,	// (0x0002b919) list_single_cmail_header_detail_pane_t

0x0f72,	// (0x0001cc1c) phacti_term_pane_t2_ParamLimits

0x0f72,	// (0x0001cc1c) phacti_term_pane_t2

0x0001,

0xfc79,	// (0x0002b923) phacti_term_pane_t_ParamLimits

0xfc79,	// (0x0002b923) phacti_term_pane_t

0x1216,	// (0x0001cec0) aid_size_list_single_double

0x9d8b,	// (0x00025a35) popup_ezdial_listscroll_window

0x9dac,	// (0x00025a56) popup_number_entry_window_cp01

0xbf4c,	// (0x00027bf6) bg_popup_call_pane_cp09

0x1222,	// (0x0001cecc) ezdial_list_pane

0x122a,	// (0x0001ced4) scroll_pane_cp23

0xdd1b,	// (0x000299c5) bg_button_pane_cp028_ParamLimits

0xdd1b,	// (0x000299c5) bg_button_pane_cp028

0x9dba,	// (0x00025a64) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9dba,	// (0x00025a64) cmail_ddmenu_btn01_pane_g1

0x9dca,	// (0x00025a74) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9dca,	// (0x00025a74) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcf1,	// (0x0002b99b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcf1,	// (0x0002b99b) cmail_ddmenu_btn01_pane_g

0x1232,	// (0x0001cedc) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1232,	// (0x0001cedc) cmail_ddmenu_btn01_pane_t1

0xcd3a,	// (0x000289e4) bg_button_pane_cp029_ParamLimits

0xcd3a,	// (0x000289e4) bg_button_pane_cp029

0x9dd6,	// (0x00025a80) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9dd6,	// (0x00025a80) cmail_ddmenu_btn02_pane_g1

0x9dee,	// (0x00025a98) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9dee,	// (0x00025a98) cmail_ddmenu_btn02_pane_t1

0xbd1a,	// (0x000279c4) bg_button_pane_cp031_ParamLimits

0xbd1a,	// (0x000279c4) bg_button_pane_cp031

0x9dd6,	// (0x00025a80) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9dd6,	// (0x00025a80) cmail_ddmenu_btn03_pane_g1

0x9dee,	// (0x00025a98) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9dee,	// (0x00025a98) cmail_ddmenu_btn03_pane_t1

0x7ac9,	// (0x00023773) cell_dialer2_keypad_pane_t1_ParamLimits

0x7ae3,	// (0x0002378d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7ae3,	// (0x0002378d) cell_dialer2_keypad_pane_t1_copy1

0x8f23,	// (0x00024bcd) ncimui_group_button_pane

0xbcc1,	// (0x0002796b) main_sp_fs_calendar_pane_ParamLimits

0x9977,	// (0x00025621) list_single_cmail_header_caption_pane_ParamLimits

0x0fb5,	// (0x0001cc5f) aid_recal_txt_sm_pane

0xb627,	// (0x000272d1) mian_recal_day_pane

0x0ff7,	// (0x0001cca1) popup_sp_fs_cale_preview_window_ParamLimits

0x1248,	// (0x0001cef2) list_recal_day_pane

0x128a,	// (0x0001cf34) list_single_recal_day_pane_ParamLimits

0x128a,	// (0x0001cf34) list_single_recal_day_pane

0x129c,	// (0x0001cf46) list_single_recal_day_pane_g1_ParamLimits

0x129c,	// (0x0001cf46) list_single_recal_day_pane_g1

0x12a8,	// (0x0001cf52) list_single_recal_day_pane_g2_ParamLimits

0x12a8,	// (0x0001cf52) list_single_recal_day_pane_g2

0x12b4,	// (0x0001cf5e) list_single_recal_day_pane_g3_ParamLimits

0x12b4,	// (0x0001cf5e) list_single_recal_day_pane_g3

0x9e12,	// (0x00025abc) list_single_recal_day_pane_g4_ParamLimits

0x9e12,	// (0x00025abc) list_single_recal_day_pane_g4

0x12c0,	// (0x0001cf6a) list_single_recal_day_pane_g5_ParamLimits

0x12c0,	// (0x0001cf6a) list_single_recal_day_pane_g5

0x12cc,	// (0x0001cf76) list_single_recal_day_pane_g6_ParamLimits

0x12cc,	// (0x0001cf76) list_single_recal_day_pane_g6

0x0004,

0xfd00,	// (0x0002b9aa) list_single_recal_day_pane_g_ParamLimits

0xfd00,	// (0x0002b9aa) list_single_recal_day_pane_g

0x12e0,	// (0x0001cf8a) list_single_recal_day_pane_t1

0x12f2,	// (0x0001cf9c) list_single_recal_day_pane_t2

0x0001,

0xfd0b,	// (0x0002b9b5) list_single_recal_day_pane_t

0x9e2a,	// (0x00025ad4) ncimui_query_button_pane_ParamLimits

0x9e2a,	// (0x00025ad4) ncimui_query_button_pane

0x9e3a,	// (0x00025ae4) ncimui_query_button_pane_t1_ParamLimits

0x9e3a,	// (0x00025ae4) ncimui_query_button_pane_t1

0x1304,	// (0x0001cfae) ncimui_query_button_pane_t2_ParamLimits

0x1304,	// (0x0001cfae) ncimui_query_button_pane_t2

0x0001,

0xfd10,	// (0x0002b9ba) ncimui_query_button_pane_t_ParamLimits

0xfd10,	// (0x0002b9ba) ncimui_query_button_pane_t

0x9e4d,	// (0x00025af7) query_button_pane_ParamLimits

0x9e4d,	// (0x00025af7) query_button_pane

0xb627,	// (0x000272d1) bg_button_pane_cp0028

0x1317,	// (0x0001cfc1) query_button_pane_t1

0x33ab,	// (0x0001f055) main_tport_pane_ParamLimits

0x985a,	// (0x00025504) bg_popup_window_pane_cp01_ParamLimits

0x985a,	// (0x00025504) bg_popup_window_pane_cp01

0x9868,	// (0x00025512) heading_pane_cp08_ParamLimits

0x9868,	// (0x00025512) heading_pane_cp08

0x9876,	// (0x00025520) heading_pane_cp07_ParamLimits

0x9876,	// (0x00025520) heading_pane_cp07

0x98e5,	// (0x0002558f) cell_tport_appsw_pane_g2

0x0002,

0xfc5c,	// (0x0002b906) cell_tport_appsw_pane_g

0xcb2b,	// (0x000287d5) input_candi_list_open_g1

0xc385,	// (0x0002802f) list_cale_time_pane_g6_ParamLimits

0xc385,	// (0x0002802f) list_cale_time_pane_g6

0x6ee4,	// (0x00022b8e) aid_size_touch_calib_1_ParamLimits

0x6ee4,	// (0x00022b8e) aid_size_touch_calib_1

0x6ef0,	// (0x00022b9a) aid_size_touch_calib_2_ParamLimits

0x6ef0,	// (0x00022b9a) aid_size_touch_calib_2

0x6efe,	// (0x00022ba8) aid_size_touch_calib_3_ParamLimits

0x6efe,	// (0x00022ba8) aid_size_touch_calib_3

0x6f0e,	// (0x00022bb8) aid_size_touch_calib_4_ParamLimits

0x6f0e,	// (0x00022bb8) aid_size_touch_calib_4

0x6f1c,	// (0x00022bc6) main_touch_calib_button_group_pane_ParamLimits

0x6f1c,	// (0x00022bc6) main_touch_calib_button_group_pane

0x6f2a,	// (0x00022bd4) main_touch_calib_pane_g1_ParamLimits

0x6f36,	// (0x00022be0) main_touch_calib_pane_g2_ParamLimits

0x6f42,	// (0x00022bec) main_touch_calib_pane_g3_ParamLimits

0x6f4e,	// (0x00022bf8) main_touch_calib_pane_g4_ParamLimits

0xf69e,	// (0x0002b348) main_touch_calib_pane_g_ParamLimits

0x6f5a,	// (0x00022c04) main_touch_calib_pane_t1_ParamLimits

0x6f73,	// (0x00022c1d) main_touch_calib_pane_t2_ParamLimits

0x6f8c,	// (0x00022c36) main_touch_calib_pane_t3_ParamLimits

0x6fa2,	// (0x00022c4c) main_touch_calib_pane_t4_ParamLimits

0x6fb8,	// (0x00022c62) main_touch_calib_pane_t5_ParamLimits

0xf6a7,	// (0x0002b351) main_touch_calib_pane_t_ParamLimits

0xe4fa,	// (0x0002a1a4) list_single_fp_cale_pane_g3_ParamLimits

0xe4fa,	// (0x0002a1a4) list_single_fp_cale_pane_g3

0x338f,	// (0x0001f039) bg_button_pane_cp012_ParamLimits

0x338f,	// (0x0001f039) bg_vkb2_func_pane_cp03_ParamLimits

0x4205,	// (0x0001feaf) cell_vitu2_function_top_pane_g1_ParamLimits

0x338f,	// (0x0001f039) bg_vkb2_func_pane_cp04_ParamLimits

0x8eab,	// (0x00024b55) main_ncimui_button_group_pane_ParamLimits

0x8eab,	// (0x00024b55) main_ncimui_button_group_pane

0x8f11,	// (0x00024bbb) main_ncimui_pane_t3_ParamLimits

0x8f11,	// (0x00024bbb) main_ncimui_pane_t3

0x0f20,	// (0x0001cbca) phacti_button_group_pane

0x1216,	// (0x0001cec0) aid_size_list_single_double_ParamLimits

0x9d8b,	// (0x00025a35) popup_ezdial_listscroll_window_ParamLimits

0x9dac,	// (0x00025a56) popup_number_entry_window_cp01_ParamLimits

0x9e5a,	// (0x00025b04) phacti_button_pane_ParamLimits

0x9e5a,	// (0x00025b04) phacti_button_pane

0xb627,	// (0x000272d1) bg_button_pane_cp14

0x1325,	// (0x0001cfcf) phacti_button_pane_t1

0x9e6b,	// (0x00025b15) main_touch_calib_button_pane_ParamLimits

0x9e6b,	// (0x00025b15) main_touch_calib_button_pane

0xbd9a,	// (0x00027a44) bg_button_pane_cp18_ParamLimits

0xbd9a,	// (0x00027a44) bg_button_pane_cp18

0x1333,	// (0x0001cfdd) main_touch_calib_button_pane_t1_ParamLimits

0x1333,	// (0x0001cfdd) main_touch_calib_button_pane_t1

0x1349,	// (0x0001cff3) main_touch_calib_button_pane_t2_ParamLimits

0x1349,	// (0x0001cff3) main_touch_calib_button_pane_t2

0x0001,

0xfd15,	// (0x0002b9bf) main_touch_calib_button_pane_t_ParamLimits

0xfd15,	// (0x0002b9bf) main_touch_calib_button_pane_t

0xb627,	// (0x000272d1) cell_ncimui_button_pane

0xb627,	// (0x000272d1) bg_button_pane_cp032

0x1367,	// (0x0001d011) cell_ncimui_button_pane_t1

0x3a52,	// (0x0001f6fc) image3_infobar_pane_ParamLimits

0x3a52,	// (0x0001f6fc) image3_infobar_pane

0x92ce,	// (0x00024f78) fs_bigclock_status_pane_ParamLimits

0x92ce,	// (0x00024f78) fs_bigclock_status_pane

0x92db,	// (0x00024f85) main_fs_bigclock_clock_pane_ParamLimits

0x92db,	// (0x00024f85) main_fs_bigclock_clock_pane

0x92ef,	// (0x00024f99) main_fs_bigclock_indi_pane_ParamLimits

0x92ef,	// (0x00024f99) main_fs_bigclock_indi_pane

0x9317,	// (0x00024fc1) main_fs_bigclock_swipe_pane_ParamLimits

0x9317,	// (0x00024fc1) main_fs_bigclock_swipe_pane

0xb627,	// (0x000272d1) main_fs_clock_dumped_data

0x08c9,	// (0x0001c573) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x08c9,	// (0x0001c573) list_single_fs_bigclock_indicator_pane_g1

0x08e4,	// (0x0001c58e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x08e4,	// (0x0001c58e) list_single_fs_bigclock_indicator_pane_g2

0x08fe,	// (0x0001c5a8) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x08fe,	// (0x0001c5a8) list_single_fs_bigclock_indicator_pane_g3

0x0918,	// (0x0001c5c2) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x0918,	// (0x0001c5c2) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbb6,	// (0x0002b860) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbb6,	// (0x0002b860) list_single_fs_bigclock_indicator_pane_g

0x0943,	// (0x0001c5ed) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x0943,	// (0x0001c5ed) list_single_fs_bigclock_indicator_pane_t1

0x096b,	// (0x0001c615) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x096b,	// (0x0001c615) list_single_fs_bigclock_indicator_pane_t2

0x0993,	// (0x0001c63d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x0993,	// (0x0001c63d) list_single_fs_bigclock_indicator_pane_t3

0x09bb,	// (0x0001c665) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x09bb,	// (0x0001c665) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbc1,	// (0x0002b86b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbc1,	// (0x0002b86b) list_single_fs_bigclock_indicator_pane_t

0x1375,	// (0x0001d01f) image3_infobar_fav_pane_ParamLimits

0x1375,	// (0x0001d01f) image3_infobar_fav_pane

0x1385,	// (0x0001d02f) image3_infobar_loc_pane_ParamLimits

0x1385,	// (0x0001d02f) image3_infobar_loc_pane

0x1399,	// (0x0001d043) image3_infobar_time_pane_ParamLimits

0x1399,	// (0x0001d043) image3_infobar_time_pane

0xbf6e,	// (0x00027c18) image3_infobar_time_pane_g1

0x13a9,	// (0x0001d053) image3_infobar_time_pane_t1

0xbf6e,	// (0x00027c18) image3_infobar_loc_pane_g1

0x13b7,	// (0x0001d061) image3_infobar_loc_pane_g2

0x0001,

0xfd1a,	// (0x0002b9c4) image3_infobar_loc_pane_g

0x13bf,	// (0x0001d069) image3_infobar_loc_pane_t1

0xbf6e,	// (0x00027c18) image3_infobar_fav_pane_g1

0x13cd,	// (0x0001d077) image3_infobar_fav_pane_g2

0x0001,

0xfd1f,	// (0x0002b9c9) image3_infobar_fav_pane_g

0x13d5,	// (0x0001d07f) fs_bigclock_status_battery_pane

0x13de,	// (0x0001d088) fs_bigclock_status_signal_pane

0x13e7,	// (0x0001d091) fs_bigclock_status_title_pane

0x13f0,	// (0x0001d09a) fs_bigclock_status_signal_pane_g1

0x13f9,	// (0x0001d0a3) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd24,	// (0x0002b9ce) fs_bigclock_status_signal_pane_g

0x1401,	// (0x0001d0ab) fs_bigclock_status_battery_pane_g1

0x140a,	// (0x0001d0b4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd29,	// (0x0002b9d3) fs_bigclock_status_battery_pane_g

0x1412,	// (0x0001d0bc) fs_bigclock_status_title_pane_t1

0x9e7b,	// (0x00025b25) main_fs_bigclock_clock_pane_g1

0x9e7b,	// (0x00025b25) main_fs_bigclock_clock_pane_g2

0x9e88,	// (0x00025b32) main_fs_bigclock_clock_pane_g3

0x9e88,	// (0x00025b32) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd2e,	// (0x0002b9d8) main_fs_bigclock_clock_pane_g

0x9e94,	// (0x00025b3e) main_fs_bigclock_clock_pane_t1

0x9ea7,	// (0x00025b51) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd37,	// (0x0002b9e1) main_fs_bigclock_clock_pane_t

0x1420,	// (0x0001d0ca) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1420,	// (0x0001d0ca) list_single_fs_bigclock_indicator_pane

0x1431,	// (0x0001d0db) list_single_fs_bigclock_pane_ParamLimits

0x1431,	// (0x0001d0db) list_single_fs_bigclock_pane

0x1457,	// (0x0001d101) main_fs_bigclock_indicator_pane_t1

0x1466,	// (0x0001d110) list_single_fs_bigclock_pane_g1

0x146e,	// (0x0001d118) list_single_fs_bigclock_pane_t1

0xbf6e,	// (0x00027c18) main_fs_bigclock_swipe_pane_g1

0x14b1,	// (0x0001d15b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd48,	// (0x0002b9f2) main_fs_bigclock_swipe_pane_g

0x14b9,	// (0x0001d163) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x14b9,	// (0x0001d163) main_fs_bigclock_swipe_pane_t1

0x5f51,	// (0x00021bfb) call_type_pane_ParamLimits

0xb627,	// (0x000272d1) main_btmg_pane

0x10f4,	// (0x0001cd9e) list_single_cale_mrui_row_pane_g2_ParamLimits

0x10f4,	// (0x0001cd9e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcbb,	// (0x0002b965) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcbb,	// (0x0002b965) list_single_cale_mrui_row_pane_g

0x1271,	// (0x0001cf1b) list_recal_vselct_arw_lo_pane

0x1279,	// (0x0001cf23) list_recal_vselct_arw_up_pane

0x1281,	// (0x0001cf2b) list_recal_vselct_pane

0x9efe,	// (0x00025ba8) btmg_button_pane

0x9f0a,	// (0x00025bb4) main_btmg_pane_g1

0xb627,	// (0x000272d1) bg_button_pane_cp044

0x14d6,	// (0x0001d180) btmg_button_pane_t1

0xdda1,	// (0x00029a4b) aid_listscroll_gen

0xbcc1,	// (0x0002796b) main_cntbar_detail_pane

0x0e2d,	// (0x0001cad7) list_cmail_folder_pane

0xed54,	// (0x0002a9fe) sp_fs_scroll_pane_cp03_ParamLimits

0x9977,	// (0x00025621) list_single_fs_dyc_pane_cp01_ParamLimits

0x9977,	// (0x00025621) list_single_fs_dyc_pane_cp01

0x14e4,	// (0x0001d18e) aid_size_cmail_indent

0x14ed,	// (0x0001d197) list_single_dyc_row_pane_cp01

0x9f32,	// (0x00025bdc) cntbar_detail_list_pane_ParamLimits

0x9f32,	// (0x00025bdc) cntbar_detail_list_pane

0x9f6c,	// (0x00025c16) main_cntbar_detail_cont_pane_ParamLimits

0x9f6c,	// (0x00025c16) main_cntbar_detail_cont_pane

0x5f45,	// (0x00021bef) scroll_pane_cp032_ParamLimits

0x5f45,	// (0x00021bef) scroll_pane_cp032

0x9f78,	// (0x00025c22) cntbar_detail_list_event_pane_ParamLimits

0x9f78,	// (0x00025c22) cntbar_detail_list_event_pane

0x9f3e,	// (0x00025be8) cntbar_detail_list_shct_pane

0xc1e1,	// (0x00027e8b) aid_list_gen

0x14f6,	// (0x0001d1a0) aid_scroll

0x14ff,	// (0x0001d1a9) aid_size_touch_scroll_bar

0x94a7,	// (0x00025151) aid_list_double

0x1508,	// (0x0001d1b2) aid_list_single

0x1508,	// (0x0001d1b2) aid_list_single_lg

0x1511,	// (0x0001d1bb) aid_list_z_g_a_sm

0x1519,	// (0x0001d1c3) aid_list_z_g_d

0x1521,	// (0x0001d1cb) aid_txt_z_prm

0x9f8c,	// (0x00025c36) aid_txt_z_prm_cp01

0x9f9a,	// (0x00025c44) aid_txt_z_sec

0x9fa8,	// (0x00025c52) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9fa8,	// (0x00025c52) main_cntbar_detail_cont_pane_g1

0x9fb5,	// (0x00025c5f) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9fb5,	// (0x00025c5f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd4d,	// (0x0002b9f7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd4d,	// (0x0002b9f7) main_cntbar_detail_cont_pane_g

0x152f,	// (0x0001d1d9) main_cntbar_detail_cont_pane_t1

0x153d,	// (0x0001d1e7) main_cntbar_detail_cont_pane_t2

0x154b,	// (0x0001d1f5) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd52,	// (0x0002b9fc) main_cntbar_detail_cont_pane_t

0x9fc1,	// (0x00025c6b) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9fc1,	// (0x00025c6b) cell_cntbar_detail_list_shct_pane

0x1559,	// (0x0001d203) cntbar_detail_list_shct_pane_g1

0x1562,	// (0x0001d20c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd59,	// (0x0002ba03) cntbar_detail_list_shct_pane_g

0x9fd5,	// (0x00025c7f) cntbar_detail_list_event_pane_g1_ParamLimits

0x9fd5,	// (0x00025c7f) cntbar_detail_list_event_pane_g1

0x9fe1,	// (0x00025c8b) cntbar_detail_list_event_pane_g2_ParamLimits

0x9fe1,	// (0x00025c8b) cntbar_detail_list_event_pane_g2

0x0005,

0xfd5e,	// (0x0002ba08) cntbar_detail_list_event_pane_g_ParamLimits

0xfd5e,	// (0x0002ba08) cntbar_detail_list_event_pane_g

0xa04d,	// (0x00025cf7) cntbar_detail_list_event_pane_t1_ParamLimits

0xa04d,	// (0x00025cf7) cntbar_detail_list_event_pane_t1

0xa062,	// (0x00025d0c) cntbar_detail_list_event_pane_t2_ParamLimits

0xa062,	// (0x00025d0c) cntbar_detail_list_event_pane_t2

0x0002,

0xfd6b,	// (0x0002ba15) cntbar_detail_list_event_pane_t_ParamLimits

0xfd6b,	// (0x0002ba15) cntbar_detail_list_event_pane_t

0xbf6e,	// (0x00027c18) cell_cntbar_detail_list_shct_pane_g1

0xc99f,	// (0x00028649) navi_pane_mv_g3

0xbcc1,	// (0x0002796b) main_cntbar_detail_pane_ParamLimits

0xb627,	// (0x000272d1) main_notif_wgt_pane

0x3769,	// (0x0001f413) aid_tch_main_mp4_pane_g4

0x39c8,	// (0x0001f672) popup_slider_window_cp02

0x1267,	// (0x0001cf11) list_recal_day_event_pane

0x9f12,	// (0x00025bbc) cntbar_detail_btn_pane_ParamLimits

0x9f12,	// (0x00025bbc) cntbar_detail_btn_pane

0x9f22,	// (0x00025bcc) cntbar_detail_btn_pane_cp01_ParamLimits

0x9f22,	// (0x00025bcc) cntbar_detail_btn_pane_cp01

0x9f3e,	// (0x00025be8) cntbar_detail_list_shct_pane_ParamLimits

0x9f4a,	// (0x00025bf4) cntbar_detail_pane_g1_ParamLimits

0x9f4a,	// (0x00025bf4) cntbar_detail_pane_g1

0x9f56,	// (0x00025c00) cntbar_detail_pane_t1_ParamLimits

0x9f56,	// (0x00025c00) cntbar_detail_pane_t1

0x9fed,	// (0x00025c97) cntbar_detail_list_event_pane_g3_ParamLimits

0x9fed,	// (0x00025c97) cntbar_detail_list_event_pane_g3

0xa005,	// (0x00025caf) cntbar_detail_list_event_pane_g4_ParamLimits

0xa005,	// (0x00025caf) cntbar_detail_list_event_pane_g4

0xa01d,	// (0x00025cc7) cntbar_detail_list_event_pane_g5_ParamLimits

0xa01d,	// (0x00025cc7) cntbar_detail_list_event_pane_g5

0xa035,	// (0x00025cdf) cntbar_detail_list_event_pane_g6_ParamLimits

0xa035,	// (0x00025cdf) cntbar_detail_list_event_pane_g6

0xa077,	// (0x00025d21) cntbar_detail_list_event_pane_t3_ParamLimits

0xa077,	// (0x00025d21) cntbar_detail_list_event_pane_t3

0xa089,	// (0x00025d33) popup_notif_wgt_window_ParamLimits

0xa089,	// (0x00025d33) popup_notif_wgt_window

0xa099,	// (0x00025d43) popup_submenu_window_cp01_ParamLimits

0xa099,	// (0x00025d43) popup_submenu_window_cp01

0xbf4c,	// (0x00027bf6) bg_popup_window_pane_cp10

0x156b,	// (0x0001d215) listscroll_notif_wgt_pane

0x157d,	// (0x0001d227) list_notif_wgt_window

0x1586,	// (0x0001d230) scroll_pane_cp033

0xa0ab,	// (0x00025d55) list_notif_wgt_row_pane_ParamLimits

0xa0ab,	// (0x00025d55) list_notif_wgt_row_pane

0x158f,	// (0x0001d239) aid_size_list_notif_wgt_del

0x159c,	// (0x0001d246) list_notif_wgt_row_pane_g1

0x15a8,	// (0x0001d252) list_notif_wgt_row_pane_g2

0x15b7,	// (0x0001d261) list_notif_wgt_row_pane_g3

0x0002,

0xfd72,	// (0x0002ba1c) list_notif_wgt_row_pane_g

0x15c4,	// (0x0001d26e) list_notif_wgt_row_pane_t1

0x15da,	// (0x0001d284) list_notif_wgt_row_pane_t2

0x15ec,	// (0x0001d296) list_notif_wgt_row_pane_t3

0x0002,

0xfd79,	// (0x0002ba23) list_notif_wgt_row_pane_t

0xed2b,	// (0x0002a9d5) list_recal_day_event_pane_g1

0x15fe,	// (0x0001d2a8) list_recal_day_event_pane_t1

0xb627,	// (0x000272d1) bg_button_pane_cp045

0x160d,	// (0x0001d2b7) cntbar_detail_btn_pane_t1

0xcd3a,	// (0x000289e4) main_callh_pane_ParamLimits

0xcd3a,	// (0x000289e4) main_callh_pane

0xb627,	// (0x000272d1) main_coverflow0_pane

0xb627,	// (0x000272d1) main_wgtman_pane

0x932f,	// (0x00024fd9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x932f,	// (0x00024fd9) main_fs_bigclock_unlock_btn_pane

0x98dd,	// (0x00025587) bg_button_pane_cp16

0x98ed,	// (0x00025597) cell_tport_appsw_pane_g3

0xa0bd,	// (0x00025d67) cf0_flow_pane_ParamLimits

0xa0bd,	// (0x00025d67) cf0_flow_pane

0x161b,	// (0x0001d2c5) listscroll_cf0_pane

0x1626,	// (0x0001d2d0) main_cf0_pane_g1

0xa0cc,	// (0x00025d76) main_cf0_pane_t1_ParamLimits

0xa0cc,	// (0x00025d76) main_cf0_pane_t1

0xa0e0,	// (0x00025d8a) main_cf0_pane_t2_ParamLimits

0xa0e0,	// (0x00025d8a) main_cf0_pane_t2

0x0001,

0xfd85,	// (0x0002ba2f) main_cf0_pane_t_ParamLimits

0xfd85,	// (0x0002ba2f) main_cf0_pane_t

0x1638,	// (0x0001d2e2) scroll_pane_cp11

0xa0f4,	// (0x00025d9e) cf0_flow_pane_g1

0xa0fc,	// (0x00025da6) cf0_flow_pane_g2

0x0001,

0xfd8a,	// (0x0002ba34) cf0_flow_pane_g

0xa104,	// (0x00025dae) cf0_flow_pane_t1

0xb627,	// (0x000272d1) main_call6_pane

0xb627,	// (0x000272d1) main_calllock_pane

0x4438,	// (0x000200e2) call6_btn_grp_pane_ParamLimits

0x4438,	// (0x000200e2) call6_btn_grp_pane

0x4447,	// (0x000200f1) call6_pane_g1_ParamLimits

0x4447,	// (0x000200f1) call6_pane_g1

0x4457,	// (0x00020101) popup_call6_1st_window_ParamLimits

0x4457,	// (0x00020101) popup_call6_1st_window

0x4465,	// (0x0002010f) popup_call6_2nd_window_ParamLimits

0x4465,	// (0x0002010f) popup_call6_2nd_window

0x4473,	// (0x0002011d) cell_call6_btn_pane_ParamLimits

0x4473,	// (0x0002011d) cell_call6_btn_pane

0xbf4c,	// (0x00027bf6) bg_popup_call2_in_pane_cp03

0x1643,	// (0x0001d2ed) popup_call6_1st_window_g1

0x164b,	// (0x0001d2f5) popup_call6_1st_window_g2

0x1653,	// (0x0001d2fd) popup_call6_1st_window_g3

0x0002,

0xfd8f,	// (0x0002ba39) popup_call6_1st_window_g

0x165b,	// (0x0001d305) popup_call6_1st_window_t1

0x166a,	// (0x0001d314) popup_call6_1st_window_t2

0x1678,	// (0x0001d322) popup_call6_1st_window_t3

0x0002,

0xfd96,	// (0x0002ba40) popup_call6_1st_window_t

0xbf4c,	// (0x00027bf6) bg_popup_call2_in_pane_cp04

0x1686,	// (0x0001d330) popup_call6_2nd_window_g1

0x168e,	// (0x0001d338) popup_call6_2nd_window_g2

0x1696,	// (0x0001d340) popup_call6_2nd_window_g3

0x0002,

0xfd9d,	// (0x0002ba47) popup_call6_2nd_window_g

0x169e,	// (0x0001d348) popup_call6_2nd_window_t1

0x2f37,	// (0x0001ebe1) bg_button_pane_cp15

0x4482,	// (0x0002012c) cell_call6_btn_pane_g1

0x448b,	// (0x00020135) cell_call6_btn_pane_t1

0xa112,	// (0x00025dbc) listscroll_wgtman_pane_ParamLimits

0xa112,	// (0x00025dbc) listscroll_wgtman_pane

0xa12e,	// (0x00025dd8) wgtman_btn_pane_ParamLimits

0xa12e,	// (0x00025dd8) wgtman_btn_pane

0xc786,	// (0x00028430) aid_scroll_copy1

0x16c5,	// (0x0001d36f) list_wgtman_pane

0xa163,	// (0x00025e0d) wgtman_btn_pane_g1_ParamLimits

0xa163,	// (0x00025e0d) wgtman_btn_pane_g1

0xa18b,	// (0x00025e35) wgtman_btn_pane_t1_ParamLimits

0xa18b,	// (0x00025e35) wgtman_btn_pane_t1

0x16cf,	// (0x0001d379) wgtman_btn_pane_t2_ParamLimits

0x16cf,	// (0x0001d379) wgtman_btn_pane_t2

0x0001,

0xfda4,	// (0x0002ba4e) wgtman_btn_pane_t_ParamLimits

0xfda4,	// (0x0002ba4e) wgtman_btn_pane_t

0xa1c2,	// (0x00025e6c) listrow_wgtman_pane_ParamLimits

0xa1c2,	// (0x00025e6c) listrow_wgtman_pane

0xa1dd,	// (0x00025e87) listrow_wgtman_pane_g1

0xa1ea,	// (0x00025e94) listrow_wgtman_pane_g2

0x0001,

0xfda9,	// (0x0002ba53) listrow_wgtman_pane_g

0xa208,	// (0x00025eb2) listrow_wgtman_pane_t1

0xa220,	// (0x00025eca) listrow_wgtman_pane_t2

0x0001,

0xfdae,	// (0x0002ba58) listrow_wgtman_pane_t

0xa246,	// (0x00025ef0) wait_bar_pane_cp09

0x16e6,	// (0x0001d390) main_calllock_btn_pane

0x16f0,	// (0x0001d39a) main_calllock_pane_g1

0xb627,	// (0x000272d1) bg_button_pane_cp17

0x16ad,	// (0x0001d357) main_calllock_btn_pane_g1

0x16f8,	// (0x0001d3a2) main_calllock_btn_pane_t1

0xb627,	// (0x000272d1) main_dialer3_pane

0xb627,	// (0x000272d1) main_fmrd2_pane

0xbf6e,	// (0x00027c18) main_fs_bigclock_unlock_btn_pane_g1

0xa260,	// (0x00025f0a) main_fs_bigclock_unlock_btn_pane_t1

0xa26e,	// (0x00025f18) area_fmrd2_info_pane_ParamLimits

0xa26e,	// (0x00025f18) area_fmrd2_info_pane

0xa27c,	// (0x00025f26) area_fmrd2_visual_pane_ParamLimits

0xa27c,	// (0x00025f26) area_fmrd2_visual_pane

0xa28a,	// (0x00025f34) fmrd2_indi_pane_ParamLimits

0xa28a,	// (0x00025f34) fmrd2_indi_pane

0xa297,	// (0x00025f41) area_fmrd2_visual_pane_g1

0xa29f,	// (0x00025f49) area_fmrd2_visual_pane_t1

0xa2af,	// (0x00025f59) area_fmrd2_visual_pane_t2

0xa2bf,	// (0x00025f69) area_fmrd2_visual_pane_t3

0x0002,

0xfdb8,	// (0x0002ba62) area_fmrd2_visual_pane_t

0xa2cf,	// (0x00025f79) area_fmrd2_info_pane_g1

0xa2d7,	// (0x00025f81) area_fmrd2_info_pane_t1

0xa2e7,	// (0x00025f91) area_fmrd2_info_pane_t2

0xa2f7,	// (0x00025fa1) area_fmrd2_info_pane_t3

0xa307,	// (0x00025fb1) area_fmrd2_info_pane_t4

0x0003,

0xfdbf,	// (0x0002ba69) area_fmrd2_info_pane_t

0xa315,	// (0x00025fbf) fmrd2_indi_pane_t1

0xa325,	// (0x00025fcf) fmrd2_indi_pane_t2

0xa335,	// (0x00025fdf) fmrd2_indi_pane_t3

0x0002,

0xfdc8,	// (0x0002ba72) fmrd2_indi_pane_t

0x0927,	// (0x0001c5d1) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x0927,	// (0x0001c5d1) list_single_fs_bigclock_indicator_pane_g5

0x09d8,	// (0x0001c682) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x09d8,	// (0x0001c682) list_single_fs_bigclock_indicator_pane_t5

0x9add,	// (0x00025787) aid_cell_bcale_month_pane_ParamLimits

0x9add,	// (0x00025787) aid_cell_bcale_month_pane

0x9afb,	// (0x000257a5) bcale_month_pane_ParamLimits

0x9afb,	// (0x000257a5) bcale_month_pane

0x9b19,	// (0x000257c3) bcale_preview_pane_ParamLimits

0x9b19,	// (0x000257c3) bcale_preview_pane

0x146e,	// (0x0001d118) list_single_fs_bigclock_pane_t1_ParamLimits

0x148d,	// (0x0001d137) list_single_fs_bigclock_pane_t2_ParamLimits

0x148d,	// (0x0001d137) list_single_fs_bigclock_pane_t2

0x0001,

0xfd43,	// (0x0002b9ed) list_single_fs_bigclock_pane_t_ParamLimits

0xfd43,	// (0x0002b9ed) list_single_fs_bigclock_pane_t

0xa258,	// (0x00025f02) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdb3,	// (0x0002ba5d) main_fs_bigclock_unlock_btn_pane_g

0xa343,	// (0x00025fed) aid_dia3_key_size_ParamLimits

0xa343,	// (0x00025fed) aid_dia3_key_size

0xa34f,	// (0x00025ff9) aid_dia3_listrow_size_ParamLimits

0xa34f,	// (0x00025ff9) aid_dia3_listrow_size

0xa35f,	// (0x00026009) dia3_keypad_fun_pane_ParamLimits

0xa35f,	// (0x00026009) dia3_keypad_fun_pane

0xa371,	// (0x0002601b) dia3_keypad_num_pane_ParamLimits

0xa371,	// (0x0002601b) dia3_keypad_num_pane

0xa383,	// (0x0002602d) dia3_listscroll_pane_ParamLimits

0xa383,	// (0x0002602d) dia3_listscroll_pane

0xa391,	// (0x0002603b) dia3_numentry_pane_ParamLimits

0xa391,	// (0x0002603b) dia3_numentry_pane

0x1707,	// (0x0001d3b1) dia3_list_pane

0x1712,	// (0x0001d3bc) scroll_pane_cp12

0xb627,	// (0x000272d1) bg_dia3_numentry_pane

0xa39f,	// (0x00026049) dia3_numentry_pane_t1

0xa3ae,	// (0x00026058) cell_dia3_key_num_pane

0xa3b6,	// (0x00026060) cell_dia3_key0_fun_pane_ParamLimits

0xa3b6,	// (0x00026060) cell_dia3_key0_fun_pane

0xa3c3,	// (0x0002606d) cell_dia3_key1_fun_pane_ParamLimits

0xa3c3,	// (0x0002606d) cell_dia3_key1_fun_pane

0xa3d0,	// (0x0002607a) dia3_listrow_pane

0x067a,	// (0x0001c324) bg_dia3_numentry_pane_g1

0xb627,	// (0x000272d1) bg_button_pane_cp21

0x171d,	// (0x0001d3c7) cell_dia3_key_num_pane_t1

0x172b,	// (0x0001d3d5) cell_dia3_key_num_pane_t2

0x173a,	// (0x0001d3e4) cell_dia3_key_num_pane_t3

0x1749,	// (0x0001d3f3) cell_dia3_key_num_pane_t4

0x0003,

0xfdcf,	// (0x0002ba79) cell_dia3_key_num_pane_t

0xb627,	// (0x000272d1) bg_button_pane_cp19

0xa3dd,	// (0x00026087) cell_dia3_key0_fun_pane_g1

0xb627,	// (0x000272d1) bg_button_pane_cp20

0xa3e5,	// (0x0002608f) cell_dia3_key1_fun_pane_g1

0xa3ed,	// (0x00026097) area_left_week_number_pane

0xa400,	// (0x000260aa) area_top_day_name_pane

0xa40e,	// (0x000260b8) frame_month_view_pane

0x1758,	// (0x0001d402) grid_month_view_pane

0xa423,	// (0x000260cd) cell_top_day_name_pane_ParamLimits

0xa423,	// (0x000260cd) cell_top_day_name_pane

0xa43d,	// (0x000260e7) cell_area_left_week_number_pane_ParamLimits

0xa43d,	// (0x000260e7) cell_area_left_week_number_pane

0xa460,	// (0x0002610a) cell_month_view_pane_ParamLimits

0xa460,	// (0x0002610a) cell_month_view_pane

0x1766,	// (0x0001d410) frm_month_g1

0xa48c,	// (0x00026136) frm_month_g2

0xa49d,	// (0x00026147) frm_month_g3

0xa4ae,	// (0x00026158) frm_month_g4

0xa4bf,	// (0x00026169) frm_month_g5

0xa4d2,	// (0x0002617c) frm_month_g6

0xa4e5,	// (0x0002618f) frm_month_g7

0x1773,	// (0x0001d41d) frm_month_g8

0xa4f8,	// (0x000261a2) frm_month_g9

0xa505,	// (0x000261af) frm_month_g10

0xa512,	// (0x000261bc) frm_month_g11

0xa51f,	// (0x000261c9) frm_month_g12

0xa52c,	// (0x000261d6) frm_month_g13

0xa539,	// (0x000261e3) frm_month_g14

0xa548,	// (0x000261f2) frm_month_g15

0xa557,	// (0x00026201) frm_month_g16

0x000f,

0xfdd8,	// (0x0002ba82) frm_month_g

0x1780,	// (0x0001d42a) cell_top_day_name_pane_t1

0xa566,	// (0x00026210) cell_area_left_week_number_pane_g1

0xa575,	// (0x0002621f) cell_area_left_week_number_pane_t1

0xbd28,	// (0x000279d2) cell_month_view_pane_g1

0xa58b,	// (0x00026235) cell_month_view_pane_t1

0xb627,	// (0x000272d1) main_fps_pane

0x0c39,	// (0x0001c8e3) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0c39,	// (0x0001c8e3) cmail_ddmenu_btn02_pane_cp1

0x0c55,	// (0x0001c8ff) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0c55,	// (0x0001c8ff) cmail_ddmenu_btn02_pane_cp2

0x9de2,	// (0x00025a8c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9de2,	// (0x00025a8c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcf6,	// (0x0002b9a0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcf6,	// (0x0002b9a0) cmail_ddmenu_btn02_pane_g

0x9e00,	// (0x00025aaa) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9e00,	// (0x00025aaa) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcfb,	// (0x0002b9a5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcfb,	// (0x0002b9a5) cmail_ddmenu_btn02_pane_t

0xa5a1,	// (0x0002624b) fps_text_pane_ParamLimits

0xa5a1,	// (0x0002624b) fps_text_pane

0xa5ae,	// (0x00026258) main_fps_pane_g1_ParamLimits

0xa5ae,	// (0x00026258) main_fps_pane_g1

0xa5bc,	// (0x00026266) wait_bar_pane_cp010_ParamLimits

0xa5bc,	// (0x00026266) wait_bar_pane_cp010

0xa5c8,	// (0x00026272) fps_text_pane_t1_ParamLimits

0xa5c8,	// (0x00026272) fps_text_pane_t1

0x7bd6,	// (0x00023880) cam4_image_uncrop_pane_g1

0x7bdf,	// (0x00023889) cam4_image_uncrop_pane_g2

0x7be8,	// (0x00023892) cam4_image_uncrop_pane_g3

0x7bf1,	// (0x0002389b) cam4_image_uncrop_pane_g4

0x0003,

0xf83a,	// (0x0002b4e4) cam4_image_uncrop_pane_g

0xa3d0,	// (0x0002607a) dia3_listrow_pane_ParamLimits

0xb627,	// (0x000272d1) main_phob2_pane

0x98bf,	// (0x00025569) cell_tport_appsw_pane_cp02_ParamLimits

0x98bf,	// (0x00025569) cell_tport_appsw_pane_cp02

0x98ce,	// (0x00025578) cell_tport_appsw_pane_cp03_ParamLimits

0x98ce,	// (0x00025578) cell_tport_appsw_pane_cp03

0xb627,	// (0x000272d1) phob2_contact_card_pane

0xb627,	// (0x000272d1) phob2_listscroll_pane

0x17a5,	// (0x0001d44f) phob2_list_pane

0x17ad,	// (0x0001d457) scroll_pane_cp034

0xa5e1,	// (0x0002628b) phob2_cc_data_pane_ParamLimits

0xa5e1,	// (0x0002628b) phob2_cc_data_pane

0xa5fb,	// (0x000262a5) phob2_cc_listscroll_pane_ParamLimits

0xa5fb,	// (0x000262a5) phob2_cc_listscroll_pane

0xa1c2,	// (0x00025e6c) list_double_large_graphic_phob2_pane_ParamLimits

0xa1c2,	// (0x00025e6c) list_double_large_graphic_phob2_pane

0xa615,	// (0x000262bf) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa615,	// (0x000262bf) list_double_large_graphic_phob2_pane_g1

0xa622,	// (0x000262cc) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa622,	// (0x000262cc) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf9,	// (0x0002baa3) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf9,	// (0x0002baa3) list_double_large_graphic_phob2_pane_g

0xa648,	// (0x000262f2) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa648,	// (0x000262f2) list_double_large_graphic_phob2_pane_t1

0xa65d,	// (0x00026307) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa65d,	// (0x00026307) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe02,	// (0x0002baac) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe02,	// (0x0002baac) list_double_large_graphic_phob2_pane_t

0xb627,	// (0x000272d1) list_highlight_pane_cp024

0x17b5,	// (0x0001d45f) phob2_cc_button_pane

0xa672,	// (0x0002631c) phob2_cc_data_pane_g1_ParamLimits

0xa672,	// (0x0002631c) phob2_cc_data_pane_g1

0xa681,	// (0x0002632b) phob2_cc_data_pane_g2_ParamLimits

0xa681,	// (0x0002632b) phob2_cc_data_pane_g2

0x0001,

0xfe07,	// (0x0002bab1) phob2_cc_data_pane_g_ParamLimits

0xfe07,	// (0x0002bab1) phob2_cc_data_pane_g

0xa690,	// (0x0002633a) phob2_cc_data_pane_t1_ParamLimits

0xa690,	// (0x0002633a) phob2_cc_data_pane_t1

0xa6a5,	// (0x0002634f) phob2_cc_data_pane_t2_ParamLimits

0xa6a5,	// (0x0002634f) phob2_cc_data_pane_t2

0xa6ba,	// (0x00026364) phob2_cc_data_pane_t3_ParamLimits

0xa6ba,	// (0x00026364) phob2_cc_data_pane_t3

0x0002,

0xfe0c,	// (0x0002bab6) phob2_cc_data_pane_t_ParamLimits

0xfe0c,	// (0x0002bab6) phob2_cc_data_pane_t

0x17bd,	// (0x0001d467) phob2_cc_list_pane_ParamLimits

0x17bd,	// (0x0001d467) phob2_cc_list_pane

0xedf0,	// (0x0002aa9a) scroll_pane_cp035_ParamLimits

0xedf0,	// (0x0002aa9a) scroll_pane_cp035

0xbcc1,	// (0x0002796b) bg_button_pane_cp033

0x17c9,	// (0x0001d473) phob2_cc_button_pane_g1

0x17d5,	// (0x0001d47f) phob2_cc_button_pane_t1

0x17ea,	// (0x0001d494) phob2_cc_button_pane_t2

0x0001,

0xfe13,	// (0x0002babd) phob2_cc_button_pane_t

0xa6cf,	// (0x00026379) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa6cf,	// (0x00026379) list_double_large_graphic_phob2_cc_pane

0xa73d,	// (0x000263e7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa73d,	// (0x000263e7) list_double_large_graphic_phob2_cc_pane_g1

0xa74e,	// (0x000263f8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa74e,	// (0x000263f8) list_double_large_graphic_phob2_cc_pane_g2

0xa75d,	// (0x00026407) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa75d,	// (0x00026407) list_double_large_graphic_phob2_cc_pane_g3

0xa76c,	// (0x00026416) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa76c,	// (0x00026416) list_double_large_graphic_phob2_cc_pane_g4

0xa77d,	// (0x00026427) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa77d,	// (0x00026427) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe18,	// (0x0002bac2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe18,	// (0x0002bac2) list_double_large_graphic_phob2_cc_pane_g

0xa78c,	// (0x00026436) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa78c,	// (0x00026436) list_double_large_graphic_phob2_cc_pane_t1

0xa7b5,	// (0x0002645f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa7b5,	// (0x0002645f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe23,	// (0x0002bacd) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe23,	// (0x0002bacd) list_double_large_graphic_phob2_cc_pane_t

0x17fc,	// (0x0001d4a6) list_highlight_pane_cp025_ParamLimits

0x17fc,	// (0x0001d4a6) list_highlight_pane_cp025

0xbcc1,	// (0x0002796b) bg_button_pane_cp033_ParamLimits

0x17c9,	// (0x0001d473) phob2_cc_button_pane_g1_ParamLimits

0x17d5,	// (0x0001d47f) phob2_cc_button_pane_t1_ParamLimits

0x17ea,	// (0x0001d494) phob2_cc_button_pane_t2_ParamLimits

0xfe13,	// (0x0002babd) phob2_cc_button_pane_t_ParamLimits

0x450c,	// (0x000201b6) popup_wgtman_window

0xebb2,	// (0x0002a85c) scroll_pane_cp038

0xa14b,	// (0x00025df5) wgtman_btn_pane_cp_01_ParamLimits

0xa14b,	// (0x00025df5) wgtman_btn_pane_cp_01

0x180a,	// (0x0001d4b4) wgtman_content_pane

0x1813,	// (0x0001d4bd) wgtman_heading_pane

0xb627,	// (0x000272d1) bg_heading_pane_cp02

0x181c,	// (0x0001d4c6) wgtman_heading_pane_g1

0x1824,	// (0x0001d4ce) wgtman_heading_pane_t1

0x1832,	// (0x0001d4dc) scroll_pane_cp036

0x183a,	// (0x0001d4e4) wgtman_list_pane

0x1842,	// (0x0001d4ec) wgtman_list_pane_t1_ParamLimits

0x1842,	// (0x0001d4ec) wgtman_list_pane_t1

0x3c7d,	// (0x0001f927) cam4_grid_pane

0x8331,	// (0x00023fdb) bg_button_pane_cp015_ParamLimits

0x8346,	// (0x00023ff0) bg_button_pane_cp016_ParamLimits

0x8352,	// (0x00023ffc) bg_button_pane_cp017_ParamLimits

0x83aa,	// (0x00024054) popup_vitu2_query_window_g3_ParamLimits

0x83aa,	// (0x00024054) popup_vitu2_query_window_g3

0x844b,	// (0x000240f5) popup_vitu2_query_window_t6_ParamLimits

0x844b,	// (0x000240f5) popup_vitu2_query_window_t6

0x8476,	// (0x00024120) popup_vitu2_query_window_t7_ParamLimits

0x8476,	// (0x00024120) popup_vitu2_query_window_t7

0x1793,	// (0x0001d43d) cam4_grid_pane_g1

0x179c,	// (0x0001d446) cam4_grid_pane_g2

0x185c,	// (0x0001d506) cam4_grid_pane_g3

0x1865,	// (0x0001d50f) cam4_grid_pane_g4

0x0003,

0xfe28,	// (0x0002bad2) cam4_grid_pane_g

0x4d62,	// (0x00020a0c) aid_placing_vt_slider_lsc_ParamLimits

0x50ae,	// (0x00020d58) vidtel_button_pane_ParamLimits

0x50ae,	// (0x00020d58) vidtel_button_pane

0xb627,	// (0x000272d1) bg_button_pane_cp034

0x1870,	// (0x0001d51a) vidtel_button_pane_g1

0x1878,	// (0x0001d522) vidtel_button_pane_t1

0xecee,	// (0x0002a998) aid_size_vtel_slider_touch

0xedf0,	// (0x0002aa9a) scroll_pane_cp039

0x906c,	// (0x00024d16) ncim_query_button_pane_cp01_ParamLimits

0x908b,	// (0x00024d35) ncimui_query_pane_g1_ParamLimits

0xbcc1,	// (0x0002796b) input_focus_pane_cp012_ParamLimits

0x06b8,	// (0x0001c362) ncim_query_entry_pane_t1_ParamLimits

0xedf0,	// (0x0002aa9a) scroll_pane_cp039_ParamLimits

0xc88a,	// (0x00028534) navi_pane_bcale_mc_g1

0xc892,	// (0x0002853c) navi_pane_bcale_mc_t1

0x0c89,	// (0x0001c933) main_sp_fs_email_pane_g1

0x0c95,	// (0x0001c93f) main_sp_fs_email_pane_g2

0x0001,

0xfc2b,	// (0x0002b8d5) main_sp_fs_email_pane_g

0x1100,	// (0x0001cdaa) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1100,	// (0x0001cdaa) list_single_cale_mrui_row_pane_g3

0x9e20,	// (0x00025aca) list_single_recal_day_pane_g5_event_pane

0x12d8,	// (0x0001cf82) list_single_recal_day_pane_g7

0x188e,	// (0x0001d538) list_recal_day_event_pane_cp01

0x1897,	// (0x0001d541) list_recal_vselct_arw_lo_pane_cp01

0x189f,	// (0x0001d549) list_recal_vselct_arw_up_pane_cp01

0x18a7,	// (0x0001d551) list_recal_vselct_pane_cp01

0xed2b,	// (0x0002a9d5) list_recal_day_event_pane_cp01_g1

0x18b1,	// (0x0001d55b) list_recal_day_event_pane_cp01_t1

0x12e0,	// (0x0001cf8a) list_single_recal_day_pane_t1_ParamLimits

0x12f2,	// (0x0001cf9c) list_single_recal_day_pane_t2_ParamLimits

0xfd0b,	// (0x0002b9b5) list_single_recal_day_pane_t_ParamLimits

0xbc9f,	// (0x00027949) bg_notes_pane_ParamLimits

0xbd78,	// (0x00027a22) list_notes_pane_ParamLimits

0x4637,	// (0x000202e1) scroll_pane_cp06_ParamLimits

0xbd9a,	// (0x00027a44) main_notes_pane_ParamLimits

0xbcc1,	// (0x0002796b) main_welc_pane

0xa800,	// (0x000264aa) main_welc_body_pane_ParamLimits

0xa800,	// (0x000264aa) main_welc_body_pane

0xa81a,	// (0x000264c4) main_welc_opti_pane_ParamLimits

0xa81a,	// (0x000264c4) main_welc_opti_pane

0xa879,	// (0x00026523) main_welc_pane_t1_ParamLimits

0xa879,	// (0x00026523) main_welc_pane_t1

0xaa0f,	// (0x000266b9) main_welc_body_row_pane_ParamLimits

0xaa0f,	// (0x000266b9) main_welc_body_row_pane

0xbd1a,	// (0x000279c4) main_welc_opti_row_pane_ParamLimits

0xbd1a,	// (0x000279c4) main_welc_opti_row_pane

0x18cf,	// (0x0001d579) main_welc_opti_row_pane_g1

0xaa34,	// (0x000266de) main_welc_opti_row_pane_t1

0x18d7,	// (0x0001d581) main_welc_body_row_pane_t1

0x1575,	// (0x0001d21f) popup_notif_wgt_heading_pane

0x158f,	// (0x0001d239) aid_size_list_notif_wgt_del_ParamLimits

0x159c,	// (0x0001d246) list_notif_wgt_row_pane_g1_ParamLimits

0x15a8,	// (0x0001d252) list_notif_wgt_row_pane_g2_ParamLimits

0x15b7,	// (0x0001d261) list_notif_wgt_row_pane_g3_ParamLimits

0xfd72,	// (0x0002ba1c) list_notif_wgt_row_pane_g_ParamLimits

0x15c4,	// (0x0001d26e) list_notif_wgt_row_pane_t1_ParamLimits

0x15da,	// (0x0001d284) list_notif_wgt_row_pane_t2_ParamLimits

0x15ec,	// (0x0001d296) list_notif_wgt_row_pane_t3_ParamLimits

0xfd79,	// (0x0002ba23) list_notif_wgt_row_pane_t_ParamLimits

0xa1dd,	// (0x00025e87) listrow_wgtman_pane_g1_ParamLimits

0xa1ea,	// (0x00025e94) listrow_wgtman_pane_g2_ParamLimits

0xfda9,	// (0x0002ba53) listrow_wgtman_pane_g_ParamLimits

0xa208,	// (0x00025eb2) listrow_wgtman_pane_t1_ParamLimits

0xa220,	// (0x00025eca) listrow_wgtman_pane_t2_ParamLimits

0xfdae,	// (0x0002ba58) listrow_wgtman_pane_t_ParamLimits

0xa246,	// (0x00025ef0) wait_bar_pane_cp09_ParamLimits

0xb627,	// (0x000272d1) bg_popup_heading_pane_cp02

0x18e6,	// (0x0001d590) popup_notif_wgt_heading_pane_g1

0x18ee,	// (0x0001d598) popup_notif_wgt_heading_pane_t1

0xb627,	// (0x000272d1) main_vids_pane

0xb627,	// (0x000272d1) vids_listscroll_pane

0xaa43,	// (0x000266ed) scroll_pane_cp040

0xb627,	// (0x000272d1) vids_list_pane

0xaa4e,	// (0x000266f8) vids_list_double_pane_ParamLimits

0xaa4e,	// (0x000266f8) vids_list_double_pane

0xaa65,	// (0x0002670f) vids_list_double_pane_g1

0xaa6e,	// (0x00026718) vids_list_double_pane_t1

0xaa7e,	// (0x00026728) vids_list_double_pane_t2

0x0001,

0xfe47,	// (0x0002baf1) vids_list_double_pane_t

0x338f,	// (0x0001f039) main_ncimui_pane_ParamLimits

0x8ec3,	// (0x00024b6d) main_ncimui_pane_g1_ParamLimits

0x8ecf,	// (0x00024b79) main_ncimui_pane_g2_ParamLimits

0x8ecf,	// (0x00024b79) main_ncimui_pane_g2

0x0001,

0xfb2c,	// (0x0002b7d6) main_ncimui_pane_g_ParamLimits

0xfb2c,	// (0x0002b7d6) main_ncimui_pane_g

0xa833,	// (0x000264dd) main_welc_pane_g1_ParamLimits

0xa833,	// (0x000264dd) main_welc_pane_g1

0xa83f,	// (0x000264e9) main_welc_pane_g2_ParamLimits

0xa83f,	// (0x000264e9) main_welc_pane_g2

0x0003,

0xfe31,	// (0x0002badb) main_welc_pane_g_ParamLimits

0xfe31,	// (0x0002badb) main_welc_pane_g

0xbc9f,	// (0x00027949) listscroll_mce_pane_ParamLimits

0xc9df,	// (0x00028689) wait_bar_pane_cp10

0xdda9,	// (0x00029a53) main_cale_day_pane_ParamLimits

0xdda9,	// (0x00029a53) main_cale_week_pane_ParamLimits

0xbc9f,	// (0x00027949) main_messa_pane_ParamLimits

0x76e2,	// (0x0002338c) main_clock2_btn_pane_ParamLimits

0x76e2,	// (0x0002338c) main_clock2_btn_pane

0xe574,	// (0x0002a21e) main_clock2_btn_pane_cp01_ParamLimits

0xe574,	// (0x0002a21e) main_clock2_btn_pane_cp01

0x108c,	// (0x0001cd36) list_cale_mrui_pane_ParamLimits

0x1630,	// (0x0001d2da) main_cf0_pane_g2

0x0001,

0xfd80,	// (0x0002ba2a) main_cf0_pane_g

0xa3ed,	// (0x00026097) area_left_week_number_pane_ParamLimits

0xa400,	// (0x000260aa) area_top_day_name_pane_ParamLimits

0xa40e,	// (0x000260b8) frame_month_view_pane_ParamLimits

0x1758,	// (0x0001d402) grid_month_view_pane_ParamLimits

0x1766,	// (0x0001d410) frm_month_g1_ParamLimits

0xa48c,	// (0x00026136) frm_month_g2_ParamLimits

0xa49d,	// (0x00026147) frm_month_g3_ParamLimits

0xa4ae,	// (0x00026158) frm_month_g4_ParamLimits

0xa4bf,	// (0x00026169) frm_month_g5_ParamLimits

0xa4d2,	// (0x0002617c) frm_month_g6_ParamLimits

0xa4e5,	// (0x0002618f) frm_month_g7_ParamLimits

0x1773,	// (0x0001d41d) frm_month_g8_ParamLimits

0xa4f8,	// (0x000261a2) frm_month_g9_ParamLimits

0xa505,	// (0x000261af) frm_month_g10_ParamLimits

0xa512,	// (0x000261bc) frm_month_g11_ParamLimits

0xa51f,	// (0x000261c9) frm_month_g12_ParamLimits

0xa52c,	// (0x000261d6) frm_month_g13_ParamLimits

0xa539,	// (0x000261e3) frm_month_g14_ParamLimits

0xa548,	// (0x000261f2) frm_month_g15_ParamLimits

0xa557,	// (0x00026201) frm_month_g16_ParamLimits

0xfdd8,	// (0x0002ba82) frm_month_g_ParamLimits

0x1780,	// (0x0001d42a) cell_top_day_name_pane_t1_ParamLimits

0xa566,	// (0x00026210) cell_area_left_week_number_pane_g1_ParamLimits

0xa575,	// (0x0002621f) cell_area_left_week_number_pane_t1_ParamLimits

0xbd28,	// (0x000279d2) cell_month_view_pane_g1_ParamLimits

0xa58b,	// (0x00026235) cell_month_view_pane_t1_ParamLimits

0xbc97,	// (0x00027941) main_clock2_btn_pane_g1

0x18fc,	// (0x0001d5a6) main_clock2_btn_pane_t1

0xbcc1,	// (0x0002796b) listscroll_cmail_pane_ParamLimits

0x0c89,	// (0x0001c933) main_sp_fs_email_pane_g1_ParamLimits

0x0c95,	// (0x0001c93f) main_sp_fs_email_pane_g2_ParamLimits

0xfc2b,	// (0x0002b8d5) main_sp_fs_email_pane_g_ParamLimits

0x1248,	// (0x0001cef2) list_recal_day_pane_ParamLimits

0x1259,	// (0x0001cf03) mian_recal_day_pane_t1

0x97ad,	// (0x00025457) list_single_dyc_row_text_pane_t4_ParamLimits

0x97ad,	// (0x00025457) list_single_dyc_row_text_pane_t4

0x97e4,	// (0x0002548e) list_single_dyc_row_text_pane_t5_ParamLimits

0x97e4,	// (0x0002548e) list_single_dyc_row_text_pane_t5

0x0d5d,	// (0x0001ca07) list_single_dyc_row_text_pane_t6_ParamLimits

0x0d5d,	// (0x0001ca07) list_single_dyc_row_text_pane_t6

0xc364,	// (0x0002800e) aid_mgn_list_cale_time_pane

0x338f,	// (0x0001f039) main_gallery2_pane_ParamLimits

0xe58a,	// (0x0002a234) main_clock2_pane_cp01_t1

0xe59a,	// (0x0002a244) main_clock2_pane_cp01_t3

0x0001,

0xf711,	// (0x0002b3bb) main_clock2_pane_cp01_t

0x4961,	// (0x0002060b) cale_week_scroll_pane_g16_ParamLimits

0x4961,	// (0x0002060b) cale_week_scroll_pane_g16

0xbf4c,	// (0x00027bf6) vorec_slider_pane

0x1878,	// (0x0001d522) vidtel_button_pane_t1_ParamLimits

0x9e7b,	// (0x00025b25) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9e7b,	// (0x00025b25) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9e88,	// (0x00025b32) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9e88,	// (0x00025b32) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd2e,	// (0x0002b9d8) main_fs_bigclock_clock_pane_g_ParamLimits

0x9e94,	// (0x00025b3e) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9ea7,	// (0x00025b51) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd37,	// (0x0002b9e1) main_fs_bigclock_clock_pane_t_ParamLimits

0x707f,	// (0x00022d29) main_mup3_lyrics_pane_ParamLimits

0x707f,	// (0x00022d29) main_mup3_lyrics_pane

0xaa8c,	// (0x00026736) main_mup3_lyrics_pane_t1_ParamLimits

0xaa8c,	// (0x00026736) main_mup3_lyrics_pane_t1

0x3753,	// (0x0001f3fd) aid_main_mp4_pane_t1_area

0x375d,	// (0x0001f407) aid_main_mp4_pane_t2_area

0x385c,	// (0x0001f506) main_mp4_pane_g7_ParamLimits

0x385c,	// (0x0001f506) main_mp4_pane_g7

0x3868,	// (0x0001f512) main_mp4_pane_g8_ParamLimits

0x3868,	// (0x0001f512) main_mp4_pane_g8

0x7b1e,	// (0x000237c8) aid_call6_pane_g1_size

0xa711,	// (0x000263bb) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa711,	// (0x000263bb) list_double_large_graphic_phob2_other_pane

0xc31c,	// (0x00027fc6) list_double_large_graphic_phob2_other_pane_g1

0xb627,	// (0x000272d1) list_highlight_pane_cp026

0xbcc1,	// (0x0002796b) main_welc_pane_ParamLimits

0x964c,	// (0x000252f6) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x964c,	// (0x000252f6) main_sp_fs_ctrlbar_pane_g3

0x9664,	// (0x0002530e) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9664,	// (0x0002530e) main_sp_fs_ctrlbar_pane_g4

0x9696,	// (0x00025340) toolbar2_fixed_button_pane_cp01

0x96a1,	// (0x0002534b) toolbar2_fixed_button_pane_cp02

0x96ac,	// (0x00025356) toolbar2_fixed_button_pane_cp03

0xa7f0,	// (0x0002649a) list_welc_entry_pane_ParamLimits

0xa7f0,	// (0x0002649a) list_welc_entry_pane

0xa84d,	// (0x000264f7) main_welc_pane_g3_ParamLimits

0xa84d,	// (0x000264f7) main_welc_pane_g3

0xa893,	// (0x0002653d) main_welc_pane_t2_ParamLimits

0xa893,	// (0x0002653d) main_welc_pane_t2

0xa8a7,	// (0x00026551) main_welc_pane_t3_ParamLimits

0xa8a7,	// (0x00026551) main_welc_pane_t3

0x0005,

0xfe3a,	// (0x0002bae4) main_welc_pane_t_ParamLimits

0xfe3a,	// (0x0002bae4) main_welc_pane_t

0xa9a3,	// (0x0002664d) welc_button_pane_ParamLimits

0xa9a3,	// (0x0002664d) welc_button_pane

0xaa01,	// (0x000266ab) welc_service_logo_pane_ParamLimits

0xaa01,	// (0x000266ab) welc_service_logo_pane

0xaabe,	// (0x00026768) list_single_welc_entry_pane_ParamLimits

0xaabe,	// (0x00026768) list_single_welc_entry_pane

0xaacf,	// (0x00026779) list_single_welc_entry_pane_g1

0xaad7,	// (0x00026781) list_single_welc_entry_pane_t1

0xaae5,	// (0x0002678f) list_single_welc_entry_pane_t2

0x0001,

0xfe4c,	// (0x0002baf6) list_single_welc_entry_pane_t

0xb627,	// (0x000272d1) bg_button_pane_cp035

0xaaf3,	// (0x0002679d) welc_button_pane_t1

0x1918,	// (0x0001d5c2) welc_service_logo_pane_g1

0x1921,	// (0x0001d5cb) welc_service_logo_pane_g2

0x0001,

0xfe51,	// (0x0002bafb) welc_service_logo_pane_g

0x2f37,	// (0x0001ebe1) main_int_radio_pane

0xc2a9,	// (0x00027f53) list_single_fs_dyc_pane_g1

0xa62e,	// (0x000262d8) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xa62e,	// (0x000262d8) list_double_large_graphic_phob2_pane_g3

0xa63a,	// (0x000262e4) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xa63a,	// (0x000262e4) list_double_large_graphic_phob2_pane_g4

0xab01,	// (0x000267ab) main_int_radio1_pane_ParamLimits

0xab01,	// (0x000267ab) main_int_radio1_pane

0x192a,	// (0x0001d5d4) find_pane_cp02

0xab13,	// (0x000267bd) input_focus_pane_cp12_ParamLimits

0xab13,	// (0x000267bd) input_focus_pane_cp12

0xab1f,	// (0x000267c9) input_focus_pane_cp13_ParamLimits

0xab1f,	// (0x000267c9) input_focus_pane_cp13

0xab37,	// (0x000267e1) input_focus_pane_cp14_ParamLimits

0xab37,	// (0x000267e1) input_focus_pane_cp14

0x1933,	// (0x0001d5dd) int_radio1_listscroll_pane

0xab4f,	// (0x000267f9) main_int_radio1_pane_g1_ParamLimits

0xab4f,	// (0x000267f9) main_int_radio1_pane_g1

0xab5f,	// (0x00026809) main_int_radio1_pane_t1_ParamLimits

0xab5f,	// (0x00026809) main_int_radio1_pane_t1

0xab73,	// (0x0002681d) main_int_radio1_pane_t2_ParamLimits

0xab73,	// (0x0002681d) main_int_radio1_pane_t2

0xab87,	// (0x00026831) main_int_radio1_pane_t3_ParamLimits

0xab87,	// (0x00026831) main_int_radio1_pane_t3

0xab9b,	// (0x00026845) main_int_radio1_pane_t4_ParamLimits

0xab9b,	// (0x00026845) main_int_radio1_pane_t4

0x193d,	// (0x0001d5e7) main_int_radio1_pane_t5_ParamLimits

0x193d,	// (0x0001d5e7) main_int_radio1_pane_t5

0xabb2,	// (0x0002685c) main_int_radio1_pane_t6_ParamLimits

0xabb2,	// (0x0002685c) main_int_radio1_pane_t6

0xabc4,	// (0x0002686e) main_int_radio1_pane_t7_ParamLimits

0xabc4,	// (0x0002686e) main_int_radio1_pane_t7

0xabd6,	// (0x00026880) main_int_radio1_pane_t8_ParamLimits

0xabd6,	// (0x00026880) main_int_radio1_pane_t8

0xabea,	// (0x00026894) main_int_radio1_pane_t9_ParamLimits

0xabea,	// (0x00026894) main_int_radio1_pane_t9

0xabfc,	// (0x000268a6) main_int_radio1_pane_t10_ParamLimits

0xabfc,	// (0x000268a6) main_int_radio1_pane_t10

0xac2d,	// (0x000268d7) main_int_radio1_pane_t11_ParamLimits

0xac2d,	// (0x000268d7) main_int_radio1_pane_t11

0xac5e,	// (0x00026908) main_int_radio1_pane_t12_ParamLimits

0xac5e,	// (0x00026908) main_int_radio1_pane_t12

0x000b,

0xfe56,	// (0x0002bb00) main_int_radio1_pane_t_ParamLimits

0xfe56,	// (0x0002bb00) main_int_radio1_pane_t

0x194f,	// (0x0001d5f9) int_radio_list_pane

0x17ad,	// (0x0001d457) scroll_pane_cp037

0x1957,	// (0x0001d601) list_double_large_graphic_int_radio_pane_ParamLimits

0x1957,	// (0x0001d601) list_double_large_graphic_int_radio_pane

0x196f,	// (0x0001d619) list_double_large_graphic_int_radio_pane_g1

0x1978,	// (0x0001d622) list_double_large_graphic_int_radio_pane_t1

0x1986,	// (0x0001d630) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe6f,	// (0x0002bb19) list_double_large_graphic_int_radio_pane_t

0xb627,	// (0x000272d1) list_highlight_pane_cp027

0x18bf,	// (0x0001d569) main_button_pane_4

0xa859,	// (0x00026503) main_welc_pane_g4_ParamLimits

0xa859,	// (0x00026503) main_welc_pane_g4

0xa8b9,	// (0x00026563) main_welc_pane_t4_ParamLimits

0xa8b9,	// (0x00026563) main_welc_pane_t4

0xa8cb,	// (0x00026575) main_welc_pane_t5_ParamLimits

0xa8cb,	// (0x00026575) main_welc_pane_t5

0xa8fb,	// (0x000265a5) main_welc_pane_t6_ParamLimits

0xa8fb,	// (0x000265a5) main_welc_pane_t6

0xa9b1,	// (0x0002665b) welc_button_pane_2_ParamLimits

0xa9b1,	// (0x0002665b) welc_button_pane_2

0xa9c9,	// (0x00026673) welc_button_pane_3_ParamLimits

0xa9c9,	// (0x00026673) welc_button_pane_3

0x18c7,	// (0x0001d571) welc_button_pane_4

0xa9e3,	// (0x0002668d) welc_button_pane_5_ParamLimits

0xa9e3,	// (0x0002668d) welc_button_pane_5

0x2ce3,	// (0x0001e98d) main_popup_welc_pane

0x19a3,	// (0x0001d64d) main_welc_sk_g3

0x19ad,	// (0x0001d657) main_welc_sk_g4

0x19b7,	// (0x0001d661) main_welc_sk_t3

0x19c7,	// (0x0001d671) main_welc_sk_t4

0x19d7,	// (0x0001d681) popup_welc_pane_t4

0x19e5,	// (0x0001d68f) popup_welc_pane_t5

0x19f3,	// (0x0001d69d) popup_welc_pane_t6

0x2f37,	// (0x0001ebe1) main_acti_pane

0xb627,	// (0x000272d1) main_sso_pane

0xac75,	// (0x0002691f) sso_body_pane_ParamLimits

0xac75,	// (0x0002691f) sso_body_pane

0xac83,	// (0x0002692d) sso_logo_pane_ParamLimits

0xac83,	// (0x0002692d) sso_logo_pane

0xacac,	// (0x00026956) sso_sk_pane_ParamLimits

0xacac,	// (0x00026956) sso_sk_pane

0xbf6e,	// (0x00027c18) main_sso_logo_pane_g1

0xacb9,	// (0x00026963) sso_sk_pane_t1_ParamLimits

0xacb9,	// (0x00026963) sso_sk_pane_t1

0xaccd,	// (0x00026977) sso_sk_pane_t2_ParamLimits

0xaccd,	// (0x00026977) sso_sk_pane_t2

0x0001,

0xfe74,	// (0x0002bb1e) sso_sk_pane_t_ParamLimits

0xfe74,	// (0x0002bb1e) sso_sk_pane_t

0x1a31,	// (0x0001d6db) aid_sso_gap

0x1a3a,	// (0x0001d6e4) aid_sso_txt1

0x1a44,	// (0x0001d6ee) aid_sso_txt2

0x1a4e,	// (0x0001d6f8) aid_sso_txt3

0x0002,

0xfe79,	// (0x0002bb23) aid_sso_txt

0x1a58,	// (0x0001d702) aid_sso_widget

0xad2c,	// (0x000269d6) sso_btn_pane_ParamLimits

0xad2c,	// (0x000269d6) sso_btn_pane

0xada5,	// (0x00026a4f) sso_option_pane_ParamLimits

0xada5,	// (0x00026a4f) sso_option_pane

0xae1f,	// (0x00026ac9) sso_query_pane_ParamLimits

0xae1f,	// (0x00026ac9) sso_query_pane

0xae6f,	// (0x00026b19) sso_query_pane_cp01_ParamLimits

0xae6f,	// (0x00026b19) sso_query_pane_cp01

0xaec1,	// (0x00026b6b) sso_t_hdr_pane_ParamLimits

0xaec1,	// (0x00026b6b) sso_t_hdr_pane

0xaee5,	// (0x00026b8f) sso_t_nml_pane_ParamLimits

0xaee5,	// (0x00026b8f) sso_t_nml_pane

0x1a62,	// (0x0001d70c) sso_t_sub_pane

0xac90,	// (0x0002693a) sso_popup_window_ParamLimits

0xac90,	// (0x0002693a) sso_popup_window

0xacdf,	// (0x00026989) sso_apps_pane_ParamLimits

0xacdf,	// (0x00026989) sso_apps_pane

0xad02,	// (0x000269ac) sso_body_pane_g1

0xad0c,	// (0x000269b6) sso_body_pane_t1

0xad1c,	// (0x000269c6) sso_body_pane_t2

0x0001,

0xfe80,	// (0x0002bb2a) sso_body_pane_t

0xad77,	// (0x00026a21) sso_btn_pane_cp01_ParamLimits

0xad77,	// (0x00026a21) sso_btn_pane_cp01

0xadf1,	// (0x00026a9b) sso_prog_pane_ParamLimits

0xadf1,	// (0x00026a9b) sso_prog_pane

0x1c3c,	// (0x0001d8e6) sso_t_hdr_pane_t1_ParamLimits

0x1c3c,	// (0x0001d8e6) sso_t_hdr_pane_t1

0x1a77,	// (0x0001d721) input_focus_pane_cp10_ParamLimits

0x1a77,	// (0x0001d721) input_focus_pane_cp10

0x1a91,	// (0x0001d73b) sso_query_pane_t1_ParamLimits

0x1a91,	// (0x0001d73b) sso_query_pane_t1

0x1aa4,	// (0x0001d74e) sso_query_pane_t2_ParamLimits

0x1aa4,	// (0x0001d74e) sso_query_pane_t2

0x1abf,	// (0x0001d769) sso_query_pane_t3_ParamLimits

0x1abf,	// (0x0001d769) sso_query_pane_t3

0x1ae9,	// (0x0001d793) sso_query_pane_t4_ParamLimits

0x1ae9,	// (0x0001d793) sso_query_pane_t4

0x0003,

0xfe85,	// (0x0002bb2f) sso_query_pane_t_ParamLimits

0xfe85,	// (0x0002bb2f) sso_query_pane_t

0xb627,	// (0x000272d1) bg_button_pane_cp22

0x1994,	// (0x0001d63e) sso_btn_pane_t1

0xaf35,	// (0x00026bdf) sso_t_nml_pane_t1_ParamLimits

0xaf35,	// (0x00026bdf) sso_t_nml_pane_t1

0x1b0d,	// (0x0001d7b7) sso_option_row_pane_ParamLimits

0x1b0d,	// (0x0001d7b7) sso_option_row_pane

0x1b20,	// (0x0001d7ca) sso_t_sub_pane_t1_ParamLimits

0x1b20,	// (0x0001d7ca) sso_t_sub_pane_t1

0xbcc1,	// (0x0002796b) bg_popup_window_pane_cp11_ParamLimits

0xbcc1,	// (0x0002796b) bg_popup_window_pane_cp11

0x1b3d,	// (0x0001d7e7) popup_sk_window_cp01_ParamLimits

0x1b3d,	// (0x0001d7e7) popup_sk_window_cp01

0x1b4a,	// (0x0001d7f4) sso_popup_body_pane_ParamLimits

0x1b4a,	// (0x0001d7f4) sso_popup_body_pane

0x1b57,	// (0x0001d801) scroll_pane_cp21_ParamLimits

0x1b57,	// (0x0001d801) scroll_pane_cp21

0x1b64,	// (0x0001d80e) sso_popup_body_t_pane_ParamLimits

0x1b64,	// (0x0001d80e) sso_popup_body_t_pane

0x1b71,	// (0x0001d81b) sso_popup_body_t_hdr_pane_ParamLimits

0x1b71,	// (0x0001d81b) sso_popup_body_t_hdr_pane

0x1b84,	// (0x0001d82e) sso_popup_body_t_nml_pane_ParamLimits

0x1b84,	// (0x0001d82e) sso_popup_body_t_nml_pane

0x1ba2,	// (0x0001d84c) sso_popup_body_t_sub_pane_ParamLimits

0x1ba2,	// (0x0001d84c) sso_popup_body_t_sub_pane

0x1bc5,	// (0x0001d86f) sso_popup_body_t_hdr_pane_t1

0xaf52,	// (0x00026bfc) sso_popup_body_t_nml_pane_t1_ParamLimits

0xaf52,	// (0x00026bfc) sso_popup_body_t_nml_pane_t1

0x1bd5,	// (0x0001d87f) sso_popup_body_t_sub_pane_t1_ParamLimits

0x1bd5,	// (0x0001d87f) sso_popup_body_t_sub_pane_t1

0xbf6e,	// (0x00027c18) sso_prog_pane_g1

0xaf93,	// (0x00026c3d) sso_apps_pane_comp1_ParamLimits

0xaf93,	// (0x00026c3d) sso_apps_pane_comp1

0x1bfa,	// (0x0001d8a4) sso_apps_pane_comp1_g1

0x1c02,	// (0x0001d8ac) sso_apps_pane_comp1_t1

0x1c1e,	// (0x0001d8c8) sso_option_row_pane_g1

0x1c26,	// (0x0001d8d0) sso_option_row_pane_t1

0xa7de,	// (0x00026488) bg_welc_area_ParamLimits

0xa7de,	// (0x00026488) bg_welc_area

0xa931,	// (0x000265db) sso_t_hdr_pane_a_t1_ParamLimits

0xa931,	// (0x000265db) sso_t_hdr_pane_a_t1

0xa945,	// (0x000265ef) sso_t_nml_pane_a_t1_ParamLimits

0xa945,	// (0x000265ef) sso_t_nml_pane_a_t1

0xa96f,	// (0x00026619) sso_t_sub_pane_a_t1_ParamLimits

0xa96f,	// (0x00026619) sso_t_sub_pane_a_t1

0x1994,	// (0x0001d63e) sso_btn_pane_t1_copy1

0xb627,	// (0x000272d1) welc_button_pane_2_comp1

0x1a01,	// (0x0001d6ab) sso_t_hdr_pane_p_t1

0x1a11,	// (0x0001d6bb) sso_t_nml_pane_p_t1

0x1a21,	// (0x0001d6cb) sso_t_sub_pane_p_t1

0x0e35,	// (0x0001cadf) list_cmail_pane_ParamLimits

0xa9f3,	// (0x0002669d) welc_button_pane_cp01_ParamLimits

0xa9f3,	// (0x0002669d) welc_button_pane_cp01

0xb627,	// (0x000272d1) main_att_pane

0x1c10,	// (0x0001d8ba) input_focus_pane_cp10_t1

0x1c26,	// (0x0001d8d0) sso_option_row_pane_t1_ParamLimits

0xafad,	// (0x00026c57) main_att_body_pane_ParamLimits

0xafad,	// (0x00026c57) main_att_body_pane

0xafd9,	// (0x00026c83) att_btn_pane_ParamLimits

0xafd9,	// (0x00026c83) att_btn_pane

0xaffb,	// (0x00026ca5) att_btn_pane_cp01_ParamLimits

0xaffb,	// (0x00026ca5) att_btn_pane_cp01

0xb015,	// (0x00026cbf) att_li_srv_pane_ParamLimits

0xb015,	// (0x00026cbf) att_li_srv_pane

0xb027,	// (0x00026cd1) att_opt_pane_ParamLimits

0xb027,	// (0x00026cd1) att_opt_pane

0xb06b,	// (0x00026d15) att_query_pane_ParamLimits

0xb06b,	// (0x00026d15) att_query_pane

0xb0af,	// (0x00026d59) att_query_pane_cp01_ParamLimits

0xb0af,	// (0x00026d59) att_query_pane_cp01

0xb0f3,	// (0x00026d9d) att_t_hdr_pane_ParamLimits

0xb0f3,	// (0x00026d9d) att_t_hdr_pane

0xb145,	// (0x00026def) att_t_nml_pane_ParamLimits

0xb145,	// (0x00026def) att_t_nml_pane

0xb179,	// (0x00026e23) att_t_nml_pane_cp01_ParamLimits

0xb179,	// (0x00026e23) att_t_nml_pane_cp01

0xb19d,	// (0x00026e47) att_t_nmlb_pane_ParamLimits

0xb19d,	// (0x00026e47) att_t_nmlb_pane

0xb1b7,	// (0x00026e61) att_term_pane_ParamLimits

0xb1b7,	// (0x00026e61) att_term_pane

0xb1fb,	// (0x00026ea5) main_att_body_pane_g1_ParamLimits

0xb1fb,	// (0x00026ea5) main_att_body_pane_g1

0x1c3c,	// (0x0001d8e6) att_t_hdr_pane_t1_ParamLimits

0x1c3c,	// (0x0001d8e6) att_t_hdr_pane_t1

0x1c55,	// (0x0001d8ff) att_t_nml_pane_t1_ParamLimits

0x1c55,	// (0x0001d8ff) att_t_nml_pane_t1

0x1c7a,	// (0x0001d924) att_btn_pane_t1

0xb627,	// (0x000272d1) bg_button_pane_cp23

0xb22f,	// (0x00026ed9) att_li_srv_row_pane_ParamLimits

0xb22f,	// (0x00026ed9) att_li_srv_row_pane

0x1c8a,	// (0x0001d934) att_t_nmlb_pane_t1_ParamLimits

0x1c8a,	// (0x0001d934) att_t_nmlb_pane_t1

0x1ca3,	// (0x0001d94d) att_query_pane_t1

0x1cb2,	// (0x0001d95c) att_query_pane_t2

0x1cc1,	// (0x0001d96b) att_query_pane_t3

0x0002,

0xfe8e,	// (0x0002bb38) att_query_pane_t

0x1cd0,	// (0x0001d97a) input_focus_pane_cp11

0x1cd9,	// (0x0001d983) att_term_pane_t1_ParamLimits

0x1cd9,	// (0x0001d983) att_term_pane_t1

0xb627,	// (0x000272d1) att_opt_row_pane

0x1cf6,	// (0x0001d9a0) att_opt_row_pane_g1

0x1cfe,	// (0x0001d9a8) att_opt_row_pane_t1_ParamLimits

0x1cfe,	// (0x0001d9a8) att_opt_row_pane_t1

0xb23f,	// (0x00026ee9) att_li_srv_row_pane_g1

0xb247,	// (0x00026ef1) att_li_srv_row_pane_t1

0xb25c,	// (0x00026f06) att_li_srv_row_pane_t2

0x0001,

0xfe95,	// (0x0002bb3f) att_li_srv_row_pane_t

0xb627,	// (0x000272d1) main_call7_pane

0xb627,	// (0x000272d1) main_vod_pane

0x1a62,	// (0x0001d70c) sso_t_sub_pane_ParamLimits

0xafc1,	// (0x00026c6b) att_btn_emg_pane_ParamLimits

0xafc1,	// (0x00026c6b) att_btn_emg_pane

0xb247,	// (0x00026ef1) att_li_srv_row_pane_t1_ParamLimits

0xb25c,	// (0x00026f06) att_li_srv_row_pane_t2_ParamLimits

0xfe95,	// (0x0002bb3f) att_li_srv_row_pane_t_ParamLimits

0x1d17,	// (0x0001d9c1) att_btn_close_pane_g1

0xb627,	// (0x000272d1) bg_button_pane_cp24

0xb271,	// (0x00026f1b) main_vod_body_pane_ParamLimits

0xb271,	// (0x00026f1b) main_vod_body_pane

0xb27f,	// (0x00026f29) main_vod_body_pane_g1_ParamLimits

0xb27f,	// (0x00026f29) main_vod_body_pane_g1

0xb2af,	// (0x00026f59) scroll_pane_cp24_ParamLimits

0xb2af,	// (0x00026f59) scroll_pane_cp24

0xb2f7,	// (0x00026fa1) vod_btn_pane_ParamLimits

0xb2f7,	// (0x00026fa1) vod_btn_pane

0xb337,	// (0x00026fe1) vod_det_pane_ParamLimits

0xb337,	// (0x00026fe1) vod_det_pane

0xb363,	// (0x0002700d) vod_logo_g1_ParamLimits

0xb363,	// (0x0002700d) vod_logo_g1

0xb39d,	// (0x00027047) vod_opt_pane_ParamLimits

0xb39d,	// (0x00027047) vod_opt_pane

0xb3cd,	// (0x00027077) vod_opt_pane_cp01_ParamLimits

0xb3cd,	// (0x00027077) vod_opt_pane_cp01

0xb3f5,	// (0x0002709f) vod_query_pane_ParamLimits

0xb3f5,	// (0x0002709f) vod_query_pane

0xb41f,	// (0x000270c9) vod_query_pane_cp01_ParamLimits

0xb41f,	// (0x000270c9) vod_query_pane_cp01

0xb42b,	// (0x000270d5) vod_t_nml_pane_ParamLimits

0xb42b,	// (0x000270d5) vod_t_nml_pane

0xb4d1,	// (0x0002717b) vod_t_nml_pane_cp01_ParamLimits

0xb4d1,	// (0x0002717b) vod_t_nml_pane_cp01

0xb509,	// (0x000271b3) vod_t_sub_pane_ParamLimits

0xb509,	// (0x000271b3) vod_t_sub_pane

0xb537,	// (0x000271e1) vod_t_sub_pane_cp01_ParamLimits

0xb537,	// (0x000271e1) vod_t_sub_pane_cp01

0x1cd0,	// (0x0001d97a) vod_query_field_pane

0x1ca3,	// (0x0001d94d) vod_query_pane_t1

0xb627,	// (0x000272d1) bg_button_pane_cp25

0x1c7a,	// (0x0001d924) sso_btn_pane_t1_copy2

0xb55f,	// (0x00027209) vod_t_nml_pane_t1_ParamLimits

0xb55f,	// (0x00027209) vod_t_nml_pane_t1

0x1d1f,	// (0x0001d9c9) vod_opt_row_pane_ParamLimits

0x1d1f,	// (0x0001d9c9) vod_opt_row_pane

0x1d31,	// (0x0001d9db) vod_t_sub_pane_t1_ParamLimits

0x1d31,	// (0x0001d9db) vod_t_sub_pane_t1

0xb596,	// (0x00027240) vod_det_cell_pane_ParamLimits

0xb596,	// (0x00027240) vod_det_cell_pane

0xb627,	// (0x000272d1) input_focus_pane_cp15

0x1d4a,	// (0x0001d9f4) vod_query_field_pane_t1

0x1d58,	// (0x0001da02) vod_opt_row_pane_g1_ParamLimits

0x1d58,	// (0x0001da02) vod_opt_row_pane_g1

0x1d64,	// (0x0001da0e) vod_opt_row_pane_t1_ParamLimits

0x1d64,	// (0x0001da0e) vod_opt_row_pane_t1

0x1d89,	// (0x0001da33) vod_det_cell_field_pane

0x1d92,	// (0x0001da3c) vod_det_cell_pane_g1

0x1ca3,	// (0x0001d94d) vod_det_cell_pane_t1

0xb627,	// (0x000272d1) input_focus_pane_cp16

0x1d4a,	// (0x0001d9f4) vod_det_cell_field_pane_t1

0xb5a8,	// (0x00027252) call7_btn_grp_pane_ParamLimits

0xb5a8,	// (0x00027252) call7_btn_grp_pane

0xb5b7,	// (0x00027261) call7_bubble_pane_ParamLimits

0xb5b7,	// (0x00027261) call7_bubble_pane

0xb5c5,	// (0x0002726f) cell_call7_btn_pane_ParamLimits

0xb5c5,	// (0x0002726f) cell_call7_btn_pane

0xb5d4,	// (0x0002727e) call7_pane_g1_ParamLimits

0xb5d4,	// (0x0002727e) call7_pane_g1

0xb5e3,	// (0x0002728d) call7_windows_conf_pane_ParamLimits

0xb5e3,	// (0x0002728d) call7_windows_conf_pane

0xb5fd,	// (0x000272a7) popup_call7_1st_window_ParamLimits

0xb5fd,	// (0x000272a7) popup_call7_1st_window

0xb60b,	// (0x000272b5) popup_call7_2nd_window_ParamLimits

0xb60b,	// (0x000272b5) popup_call7_2nd_window

0xb619,	// (0x000272c3) popup_call7_3rd_window_ParamLimits

0xb619,	// (0x000272c3) popup_call7_3rd_window

0xb627,	// (0x000272d1) bg_button_pane_cp26

0x16ad,	// (0x0001d357) cell_call7_btn_pane_g1

0x16b6,	// (0x0001d360) cell_call7_btn_pane_t1

0xb627,	// (0x000272d1) bg_popup_window_pane_cp12

0x1d9a,	// (0x0001da44) popup_call7_1st_window_g1

0x1da2,	// (0x0001da4c) popup_call7_1st_window_g2

0x1daa,	// (0x0001da54) popup_call7_1st_window_g3

0x0002,

0xfe9a,	// (0x0002bb44) popup_call7_1st_window_g

0x1db2,	// (0x0001da5c) popup_call7_1st_window_t1

0x1dc1,	// (0x0001da6b) popup_call7_1st_window_t2

0x1dcf,	// (0x0001da79) popup_call7_1st_window_t3

0x0002,

0xfea1,	// (0x0002bb4b) popup_call7_1st_window_t

0xb627,	// (0x000272d1) bg_popup_window_pane_cp13

0x1ddd,	// (0x0001da87) popup_call7_2nd_window_g1

0x1de5,	// (0x0001da8f) popup_call7_2nd_window_g2

0x1ded,	// (0x0001da97) popup_call7_2nd_window_g3

0x0002,

0xfea8,	// (0x0002bb52) popup_call7_2nd_window_g

0x1df5,	// (0x0001da9f) popup_call7_2nd_window_t1

0xb627,	// (0x000272d1) bg_popup_window_pane_cp14

0x1e04,	// (0x0001daae) call7_list_conf_pane

0x1e0c,	// (0x0001dab6) call7_list_conf_row_pane_ParamLimits

0x1e0c,	// (0x0001dab6) call7_list_conf_row_pane

0x1e1f,	// (0x0001dac9) call7_list_conf_row_pane_g1

0x1e27,	// (0x0001dad1) call7_list_conf_row_pane_g2

0x0001,

0xfeaf,	// (0x0002bb59) call7_list_conf_row_pane_g

0x1e2f,	// (0x0001dad9) call7_list_conf_row_pane_t1

0xb627,	// (0x000272d1) list_highlight_pane_cp22
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
