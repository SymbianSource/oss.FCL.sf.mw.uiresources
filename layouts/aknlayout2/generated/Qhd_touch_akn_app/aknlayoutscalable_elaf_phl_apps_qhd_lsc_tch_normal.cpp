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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000e341 };

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
0x0836,	// (0x0000eb77) Screen

0x0842,	// (0x0000eb83) application_window

0x087e,	// (0x0000ebbf) area_bottom_pane_ParamLimits

0x087e,	// (0x0000ebbf) area_bottom_pane

0x08b7,	// (0x0000ebf8) area_top_pane_ParamLimits

0x08b7,	// (0x0000ebf8) area_top_pane

0x92b5,	// (0x000175f6) call_video_uplink_pane_ParamLimits

0x92b5,	// (0x000175f6) call_video_uplink_pane

0x0945,	// (0x0000ec86) main_pane_ParamLimits

0x0945,	// (0x0000ec86) main_pane

0xbb10,	// (0x00019e51) context_pane

0x3666,	// (0x000119a7) navi_pane

0x3698,	// (0x000119d9) popup_cale_events_window_ParamLimits

0x3698,	// (0x000119d9) popup_cale_events_window

0xbb23,	// (0x00019e64) popup_mup_playback_window

0x36b0,	// (0x000119f1) signal_pane

0x9a88,	// (0x00017dc9) main_browser_pane

0x9ccd,	// (0x0001800e) main_burst_pane

0x33c6,	// (0x00011707) main_calc_pane

0xbab0,	// (0x00019df1) main_cale_day_pane

0x0d7e,	// (0x0000f0bf) main_cale_month_pane

0xbab0,	// (0x00019df1) main_cale_week_pane

0x9ccd,	// (0x0001800e) main_call_pane

0x96f4,	// (0x00017a35) main_call_poc_pane

0x9ccd,	// (0x0001800e) main_camera_pane

0x9ccd,	// (0x0001800e) main_chi_dic_pane

0xa527,	// (0x00018868) main_clock_pane

0x96f4,	// (0x00017a35) main_fmradio_pane

0x9ccd,	// (0x0001800e) main_graph_messa_pane

0x96f4,	// (0x00017a35) main_help_pane

0x9a88,	// (0x00017dc9) main_im_pane

0x994f,	// (0x00017c90) main_image_pane_ParamLimits

0x994f,	// (0x00017c90) main_image_pane

0x96f4,	// (0x00017a35) main_location2_pane

0x9ccd,	// (0x0001800e) main_location_pane

0x994f,	// (0x00017c90) main_messa_pane

0x96f4,	// (0x00017a35) main_mp2_pane

0x9ccd,	// (0x0001800e) main_mp_pane

0x96f4,	// (0x00017a35) main_msg_pane

0x96f4,	// (0x00017a35) main_mup_eq_pane

0x96f4,	// (0x00017a35) main_mup_pane

0x9a88,	// (0x00017dc9) main_notes_pane

0x96f4,	// (0x00017a35) main_pec_pane

0x96f4,	// (0x00017a35) main_phob_pane

0x96f4,	// (0x00017a35) main_pinb_pane

0x96f4,	// (0x00017a35) main_postcard_pane

0x96f4,	// (0x00017a35) main_qdial_pane

0x9ccd,	// (0x0001800e) main_skin_pane

0x96f4,	// (0x00017a35) main_smil2_pane

0x9ccd,	// (0x0001800e) main_smil_pane

0x9ccd,	// (0x0001800e) main_video_pane

0x9ccd,	// (0x0001800e) main_video_tele_pane

0x994f,	// (0x00017c90) main_viewer_pane_ParamLimits

0x994f,	// (0x00017c90) main_viewer_pane

0x9ccd,	// (0x0001800e) main_vorec_pane

0x341a,	// (0x0001175b) popup_blid_sat_info_window_ParamLimits

0x341a,	// (0x0001175b) popup_blid_sat_info_window

0x3472,	// (0x000117b3) popup_dyc_status_message_window_ParamLimits

0x3472,	// (0x000117b3) popup_dyc_status_message_window

0x348c,	// (0x000117cd) popup_grid_large_graphic_window_ParamLimits

0x348c,	// (0x000117cd) popup_grid_large_graphic_window

0x3548,	// (0x00011889) popup_loc_request_window_ParamLimits

0x3548,	// (0x00011889) popup_loc_request_window

0x363e,	// (0x0001197f) popup_wml_address_window_ParamLimits

0x363e,	// (0x0001197f) popup_wml_address_window

0x3200,	// (0x00011541) call_muted_g1

0x2ef6,	// (0x00011237) popup_call_audio_conf_window_ParamLimits

0x2ef6,	// (0x00011237) popup_call_audio_conf_window

0x3214,	// (0x00011555) popup_call_audio_first_window_ParamLimits

0x3214,	// (0x00011555) popup_call_audio_first_window

0x328a,	// (0x000115cb) popup_call_audio_in_window_ParamLimits

0x328a,	// (0x000115cb) popup_call_audio_in_window

0x32c6,	// (0x00011607) popup_call_audio_out_window_ParamLimits

0x32c6,	// (0x00011607) popup_call_audio_out_window

0x3300,	// (0x00011641) popup_call_audio_second_window_ParamLimits

0x3300,	// (0x00011641) popup_call_audio_second_window

0x3356,	// (0x00011697) popup_call_audio_wait_window_ParamLimits

0x3356,	// (0x00011697) popup_call_audio_wait_window

0x338b,	// (0x000116cc) popup_number_entry_window_ParamLimits

0x338b,	// (0x000116cc) popup_number_entry_window

0x92e1,	// (0x00017622) bg_popup_call_pane_cp05_ParamLimits

0x92e1,	// (0x00017622) bg_popup_call_pane_cp05

0x9301,	// (0x00017642) popup_number_entry_window_t1

0x9314,	// (0x00017655) popup_number_entry_window_t2

0x9326,	// (0x00017667) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x0001d381) popup_number_entry_window_t

0x9338,	// (0x00017679) text_title_cp2

0x934b,	// (0x0001768c) bg_popup_call_pane_cp_ParamLimits

0x934b,	// (0x0001768c) bg_popup_call_pane_cp

0x9359,	// (0x0001769a) call_thumbnail_pane

0x9361,	// (0x000176a2) popup_call_audio_in_window_g1_ParamLimits

0x9361,	// (0x000176a2) popup_call_audio_in_window_g1

0x936d,	// (0x000176ae) popup_call_audio_in_window_g2_ParamLimits

0x936d,	// (0x000176ae) popup_call_audio_in_window_g2

0x9379,	// (0x000176ba) popup_call_audio_in_window_g3_ParamLimits

0x9379,	// (0x000176ba) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x0001d38a) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x0001d38a) popup_call_audio_in_window_g

0x9385,	// (0x000176c6) popup_call_audio_in_window_t1_ParamLimits

0x9385,	// (0x000176c6) popup_call_audio_in_window_t1

0x93a1,	// (0x000176e2) popup_call_audio_in_window_t2_ParamLimits

0x93a1,	// (0x000176e2) popup_call_audio_in_window_t2

0x93bd,	// (0x000176fe) popup_call_audio_in_window_t3_ParamLimits

0x93bd,	// (0x000176fe) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x0001d391) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x0001d391) popup_call_audio_in_window_t

0x934b,	// (0x0001768c) bg_popup_call_pane_cp01_ParamLimits

0x934b,	// (0x0001768c) bg_popup_call_pane_cp01

0x9359,	// (0x0001769a) call_thumbnail_pane_cp02

0x93d0,	// (0x00017711) call_type_pane_cp022

0x93d8,	// (0x00017719) popup_call_audio_out_window_g1_ParamLimits

0x93d8,	// (0x00017719) popup_call_audio_out_window_g1

0x93ea,	// (0x0001772b) popup_call_audio_out_window_g2_ParamLimits

0x93ea,	// (0x0001772b) popup_call_audio_out_window_g2

0x93f6,	// (0x00017737) popup_call_audio_out_window_g3_ParamLimits

0x93f6,	// (0x00017737) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x0001d398) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x0001d398) popup_call_audio_out_window_g

0x9408,	// (0x00017749) popup_call_audio_out_window_t1_ParamLimits

0x9408,	// (0x00017749) popup_call_audio_out_window_t1

0x9420,	// (0x00017761) popup_call_audio_out_window_t2_ParamLimits

0x9420,	// (0x00017761) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x0001d39f) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x0001d39f) popup_call_audio_out_window_t

0x9435,	// (0x00017776) bg_popup_call_pane_ParamLimits

0x9435,	// (0x00017776) bg_popup_call_pane

0x0b00,	// (0x0000ee41) call_thumbnail_pane_cp_ParamLimits

0x0b00,	// (0x0000ee41) call_thumbnail_pane_cp

0x94b9,	// (0x000177fa) call_type_pane_cp01_ParamLimits

0x94b9,	// (0x000177fa) call_type_pane_cp01

0x94fd,	// (0x0001783e) popup_call_audio_first_window_g1_ParamLimits

0x94fd,	// (0x0001783e) popup_call_audio_first_window_g1

0x9549,	// (0x0001788a) popup_call_audio_first_window_g2_ParamLimits

0x9549,	// (0x0001788a) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x0001d3a4) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x0001d3a4) popup_call_audio_first_window_g

0x958d,	// (0x000178ce) popup_call_audio_first_window_t1_ParamLimits

0x958d,	// (0x000178ce) popup_call_audio_first_window_t1

0x9639,	// (0x0001797a) popup_call_audio_first_window_t4_ParamLimits

0x9639,	// (0x0001797a) popup_call_audio_first_window_t4

0x96c5,	// (0x00017a06) popup_call_audio_first_window_t5_ParamLimits

0x96c5,	// (0x00017a06) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x0001d3a9) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x0001d3a9) popup_call_audio_first_window_t

0x96f4,	// (0x00017a35) bg_popup_call_pane_cp02

0x96fe,	// (0x00017a3f) call_type_pane_cp023

0x9706,	// (0x00017a47) popup_call_audio_wait_window_g1

0x970e,	// (0x00017a4f) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x0001d3b0) popup_call_audio_wait_window_g

0x9716,	// (0x00017a57) popup_call_audio_wait_window_t3

0x9724,	// (0x00017a65) bg_popup_call_pane_cp03_ParamLimits

0x9724,	// (0x00017a65) bg_popup_call_pane_cp03

0x9784,	// (0x00017ac5) call_thumbnail_pane_cp011_ParamLimits

0x9784,	// (0x00017ac5) call_thumbnail_pane_cp011

0x9790,	// (0x00017ad1) call_type_pane_cp034_ParamLimits

0x9790,	// (0x00017ad1) call_type_pane_cp034

0x97cc,	// (0x00017b0d) popup_call_audio_second_window_g1_ParamLimits

0x97cc,	// (0x00017b0d) popup_call_audio_second_window_g1

0x9808,	// (0x00017b49) popup_call_audio_second_window_g2_ParamLimits

0x9808,	// (0x00017b49) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x0001d3b5) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x0001d3b5) popup_call_audio_second_window_g

0x9844,	// (0x00017b85) popup_call_audio_second_window_t1_ParamLimits

0x9844,	// (0x00017b85) popup_call_audio_second_window_t1

0x98c5,	// (0x00017c06) popup_call_audio_second_window_t2_ParamLimits

0x98c5,	// (0x00017c06) popup_call_audio_second_window_t2

0x98fb,	// (0x00017c3c) popup_call_audio_second_window_t3_ParamLimits

0x98fb,	// (0x00017c3c) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x0001d3ba) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x0001d3ba) popup_call_audio_second_window_t

0x96f4,	// (0x00017a35) bg_popup_call_pane_cp04

0x9931,	// (0x00017c72) list_conf_pane

0x9939,	// (0x00017c7a) popup_call_audio_conf_window_t1

0x9947,	// (0x00017c88) call_thumbnail_pane_g1

0x994f,	// (0x00017c90) bg_pinb_pane_ParamLimits

0x994f,	// (0x00017c90) bg_pinb_pane

0x995d,	// (0x00017c9e) find_pinb_pane

0x994f,	// (0x00017c90) listscroll_pinb_pane_ParamLimits

0x994f,	// (0x00017c90) listscroll_pinb_pane

0x9967,	// (0x00017ca8) pinb_bg_pane_g1

0x9967,	// (0x00017ca8) pinb_bg_pane_g2

0x9967,	// (0x00017ca8) pinb_bg_pane_g3

0x9967,	// (0x00017ca8) pinb_bg_pane_g4

0x9967,	// (0x00017ca8) pinb_bg_pane_g5

0x9967,	// (0x00017ca8) pinb_bg_pane_g6

0x9967,	// (0x00017ca8) pinb_bg_pane_g7

0x9967,	// (0x00017ca8) pinb_bg_pane_g8

0x9967,	// (0x00017ca8) pinb_bg_pane_g9

0x9967,	// (0x00017ca8) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x0001d3c1) pinb_bg_pane_g

0x9264,	// (0x000175a5) grid_pinb_pane

0x9264,	// (0x000175a5) list_pinb_pane

0x92d3,	// (0x00017614) scroll_pane_cp01_ParamLimits

0x92d3,	// (0x00017614) scroll_pane_cp01

0x9971,	// (0x00017cb2) find_pinb_pane_g1_ParamLimits

0x9971,	// (0x00017cb2) find_pinb_pane_g1

0x9989,	// (0x00017cca) find_pinb_pane_t1

0x999b,	// (0x00017cdc) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x0001d3db) find_pinb_pane_t

0x99b0,	// (0x00017cf1) input_focus_pane_cp01_ParamLimits

0x99b0,	// (0x00017cf1) input_focus_pane_cp01

0x99bc,	// (0x00017cfd) cell_pinb_pane_ParamLimits

0x99bc,	// (0x00017cfd) cell_pinb_pane

0x99ca,	// (0x00017d0b) cell_pinb_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) cell_pinb_pane_g1

0x99d8,	// (0x00017d19) cell_pinb_pane_g2_ParamLimits

0x99d8,	// (0x00017d19) cell_pinb_pane_g2

0x99d8,	// (0x00017d19) cell_pinb_pane_g3_ParamLimits

0x99d8,	// (0x00017d19) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x0001d3e0) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x0001d3e0) cell_pinb_pane_g

0x96f4,	// (0x00017a35) grid_highlight_pane_cp01

0x99bc,	// (0x00017cfd) list_pinb_item_pane_ParamLimits

0x99bc,	// (0x00017cfd) list_pinb_item_pane

0x9264,	// (0x000175a5) list_highlight_pane_cp02

0x99e6,	// (0x00017d27) list_pinb_item_pane_g1_ParamLimits

0x99e6,	// (0x00017d27) list_pinb_item_pane_g1

0x99d8,	// (0x00017d19) list_pinb_item_pane_g2_ParamLimits

0x99d8,	// (0x00017d19) list_pinb_item_pane_g2

0x99ca,	// (0x00017d0b) list_pinb_item_pane_g3_ParamLimits

0x99ca,	// (0x00017d0b) list_pinb_item_pane_g3

0x99d8,	// (0x00017d19) list_pinb_item_pane_g4_ParamLimits

0x99d8,	// (0x00017d19) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x0001d3e7) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x0001d3e7) list_pinb_item_pane_g

0x99f4,	// (0x00017d35) list_pinb_item_pane_t1_ParamLimits

0x99f4,	// (0x00017d35) list_pinb_item_pane_t1

0x0b42,	// (0x0000ee83) calc_display_pane

0x0b67,	// (0x0000eea8) calc_paper_pane

0x0b8a,	// (0x0000eecb) grid_calc_pane

0x9264,	// (0x000175a5) bg_list_pane_cp01

0x9a10,	// (0x00017d51) clock_g1

0x9a10,	// (0x00017d51) clock_g2

0x0001,

0xf0af,	// (0x0001d3f0) clock_g

0x9a1a,	// (0x00017d5b) clock_t1_ParamLimits

0x9a1a,	// (0x00017d5b) clock_t1

0x9a2e,	// (0x00017d6f) clock_t2_ParamLimits

0x9a2e,	// (0x00017d6f) clock_t2

0x9a2e,	// (0x00017d6f) clock_t3_ParamLimits

0x9a2e,	// (0x00017d6f) clock_t3

0x9a2e,	// (0x00017d6f) clock_t4_ParamLimits

0x9a2e,	// (0x00017d6f) clock_t4

0x9a1a,	// (0x00017d5b) clock_t5_ParamLimits

0x9a1a,	// (0x00017d5b) clock_t5

0x9a2e,	// (0x00017d6f) clock_t6_ParamLimits

0x9a2e,	// (0x00017d6f) clock_t6

0x9a2e,	// (0x00017d6f) clock_t7_ParamLimits

0x9a2e,	// (0x00017d6f) clock_t7

0x9a2e,	// (0x00017d6f) clock_t8_ParamLimits

0x9a2e,	// (0x00017d6f) clock_t8

0x9a2e,	// (0x00017d6f) clock_t9_ParamLimits

0x9a2e,	// (0x00017d6f) clock_t9

0x0008,

0xf0b4,	// (0x0001d3f5) clock_t_ParamLimits

0xf0b4,	// (0x0001d3f5) clock_t

0x9264,	// (0x000175a5) popup_clock_analogue_window_cp02

0x9264,	// (0x000175a5) popup_clock_digital_window_cp01

0x96f4,	// (0x00017a35) listscroll_help_pane

0x96f4,	// (0x00017a35) phob_pre_status_pane

0x9a42,	// (0x00017d83) grid_qdial_pane

0x994f,	// (0x00017c90) listscroll_mce_pane

0x994f,	// (0x00017c90) bg_notes_pane

0x9a4c,	// (0x00017d8d) list_notes_pane

0x0bb8,	// (0x0000eef9) scroll_pane_cp06

0x9a5a,	// (0x00017d9b) bg_calc_paper_pane

0x9a6e,	// (0x00017daf) list_calc_pane

0x9a88,	// (0x00017dc9) bg_calc_display_pane

0x0bcc,	// (0x0000ef0d) calc_display_pane_t1

0x0be1,	// (0x0000ef22) calc_display_pane_t2

0x9a94,	// (0x00017dd5) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x0001d408) calc_display_pane_t

0x0bf6,	// (0x0000ef37) cell_calc_pane_ParamLimits

0x0bf6,	// (0x0000ef37) cell_calc_pane

0x9aa6,	// (0x00017de7) bg_calc_paper_pane_g1

0x9ab2,	// (0x00017df3) bg_calc_paper_pane_g2

0x9abe,	// (0x00017dff) bg_calc_paper_pane_g3

0x9aca,	// (0x00017e0b) bg_calc_paper_pane_g4

0x9ad6,	// (0x00017e17) bg_calc_paper_pane_g5

0x0c2b,	// (0x0000ef6c) bg_calc_paper_pane_g6

0x0c3a,	// (0x0000ef7b) bg_calc_paper_pane_g7

0x0c49,	// (0x0000ef8a) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x0001d40f) bg_calc_paper_pane_g

0x0c5c,	// (0x0000ef9d) calc_bg_paper_pane_g9

0x0c6f,	// (0x0000efb0) list_calc_item_pane_ParamLimits

0x0c6f,	// (0x0000efb0) list_calc_item_pane

0x9ae2,	// (0x00017e23) list_calc_item_pane_g1

0x9aef,	// (0x00017e30) list_calc_item_pane_t1_ParamLimits

0x9aef,	// (0x00017e30) list_calc_item_pane_t1

0x0c87,	// (0x0000efc8) list_calc_item_pane_t2_ParamLimits

0x0c87,	// (0x0000efc8) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x0001d420) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x0001d420) list_calc_item_pane_t

0x9967,	// (0x00017ca8) cell_calc_pane_g1

0x9b01,	// (0x00017e42) grid_highlight_pane_cp02

0x9b23,	// (0x00017e64) bg_calc_display_pane_g1

0x0cb9,	// (0x0000effa) bg_calc_display_pane_g2

0x0cc3,	// (0x0000f004) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x0001d42a) bg_calc_display_pane_g

0x0ccc,	// (0x0000f00d) cell_qdial_pane_ParamLimits

0x0ccc,	// (0x0000f00d) cell_qdial_pane

0x0ce0,	// (0x0000f021) cell_qdial_pane_g1_ParamLimits

0x0ce0,	// (0x0000f021) cell_qdial_pane_g1

0x0cf6,	// (0x0000f037) cell_qdial_pane_g2_ParamLimits

0x0cf6,	// (0x0000f037) cell_qdial_pane_g2

0x9b2c,	// (0x00017e6d) cell_qdial_pane_g3_ParamLimits

0x9b2c,	// (0x00017e6d) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x0001d431) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x0001d431) cell_qdial_pane_g

0x0d1d,	// (0x0000f05e) cell_qdial_pane_t1_ParamLimits

0x0d1d,	// (0x0000f05e) cell_qdial_pane_t1

0x0d35,	// (0x0000f076) cell_qdial_pane_t2_ParamLimits

0x0d35,	// (0x0000f076) cell_qdial_pane_t2

0x0d48,	// (0x0000f089) cell_qdial_pane_t3_ParamLimits

0x0d48,	// (0x0000f089) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x0001d43a) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x0001d43a) cell_qdial_pane_t

0x96f4,	// (0x00017a35) grid_highlight_pane_cp04

0x9b38,	// (0x00017e79) thumbnail_qdial_pane_ParamLimits

0x9b38,	// (0x00017e79) thumbnail_qdial_pane

0x9b94,	// (0x00017ed5) list_help_pane

0x9b9d,	// (0x00017ede) scroll_pane_cp02

0x9ba6,	// (0x00017ee7) help_list_pane_t1_ParamLimits

0x9ba6,	// (0x00017ee7) help_list_pane_t1

0x9bc4,	// (0x00017f05) bg_notes_pane_g2

0x9bcc,	// (0x00017f0d) bg_notes_pane_g3

0x9bd4,	// (0x00017f15) notes_bg_pane_g1

0x9bdc,	// (0x00017f1d) notes_bg_pane_g4

0x9be4,	// (0x00017f25) notes_bg_pane_g5

0x9bec,	// (0x00017f2d) notes_bg_pane_g6

0x9bf4,	// (0x00017f35) notes_bg_pane_g7

0x9bfc,	// (0x00017f3d) notes_bg_pane_g8

0x9c04,	// (0x00017f45) notes_bg_pane_g9

0x0006,

0xf117,	// (0x0001d458) notes_bg_pane_g

0x0d5b,	// (0x0000f09c) list_notes_text_pane_ParamLimits

0x0d5b,	// (0x0000f09c) list_notes_text_pane

0x9c0c,	// (0x00017f4d) list_notes_text_pane_g1

0x0d70,	// (0x0000f0b1) list_notes_text_pane_t1

0x0d7e,	// (0x0000f0bf) listscroll_cale_week_pane

0x0daa,	// (0x0000f0eb) bg_cale_heading_pane

0x9c2f,	// (0x00017f70) bg_cale_pane_cp01

0x0dc2,	// (0x0000f103) cale_week_corner_pane

0x0de1,	// (0x0000f122) cale_week_day_heading_pane

0x0dfe,	// (0x0000f13f) cale_week_scroll_pane_g1

0x0e11,	// (0x0000f152) cale_week_scroll_pane_g2

0x0e29,	// (0x0000f16a) cale_week_scroll_pane_g3

0x0e41,	// (0x0000f182) cale_week_scroll_pane_g4

0x0e59,	// (0x0000f19a) cale_week_scroll_pane_g5

0x0e79,	// (0x0000f1ba) cale_week_scroll_pane_g6

0x0e99,	// (0x0000f1da) cale_week_scroll_pane_g7

0x0eb9,	// (0x0000f1fa) cale_week_scroll_pane_g8

0x0edd,	// (0x0000f21e) cale_week_scroll_pane_g9

0x0ef5,	// (0x0000f236) cale_week_scroll_pane_g10

0x0f0d,	// (0x0000f24e) cale_week_scroll_pane_g11

0x0f25,	// (0x0000f266) cale_week_scroll_pane_g12

0x0f3d,	// (0x0000f27e) cale_week_scroll_pane_g13

0x0f3d,	// (0x0000f27e) cale_week_scroll_pane_g14

0x0f3d,	// (0x0000f27e) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x0001d467) cale_week_scroll_pane_g

0x0f79,	// (0x0000f2ba) cale_week_time_pane

0x0f9d,	// (0x0000f2de) grid_cale_week_pane

0x9c5e,	// (0x00017f9f) scroll_pane_cp08

0x0fc3,	// (0x0000f304) cell_cale_week_pane_ParamLimits

0x0fc3,	// (0x0000f304) cell_cale_week_pane

0x1051,	// (0x0000f392) cale_week_day_heading_pane_t1

0x107b,	// (0x0000f3bc) cale_week_day_heading_pane_t2

0x10aa,	// (0x0000f3eb) cale_week_day_heading_pane_t3

0x10d9,	// (0x0000f41a) cale_week_day_heading_pane_t4

0x1108,	// (0x0000f449) cale_week_day_heading_pane_t5

0x113f,	// (0x0000f480) cale_week_day_heading_pane_t6

0x1176,	// (0x0000f4b7) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x0001d488) cale_week_day_heading_pane_t

0x9c7b,	// (0x00017fbc) bg_cale_side_pane

0x11a0,	// (0x0000f4e1) cale_week_time_pane_t1

0x11ba,	// (0x0000f4fb) cale_week_time_pane_t2

0x11d4,	// (0x0000f515) cale_week_time_pane_t3

0x11ee,	// (0x0000f52f) cale_week_time_pane_t4

0x1208,	// (0x0000f549) cale_week_time_pane_t5

0x1222,	// (0x0000f563) cale_week_time_pane_t6

0x123c,	// (0x0000f57d) cale_week_time_pane_t7

0x1256,	// (0x0000f597) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x0001d497) cale_week_time_pane_t

0x1270,	// (0x0000f5b1) cell_cale_week_pane_g2

0x128f,	// (0x0000f5d0) cell_cale_week_pane_g3_ParamLimits

0x128f,	// (0x0000f5d0) cell_cale_week_pane_g3

0x9c89,	// (0x00017fca) grid_highlight_pane_cp07

0x9c91,	// (0x00017fd2) listscroll_gms_pane

0x9c9b,	// (0x00017fdc) grid_gms_pane

0x9ca4,	// (0x00017fe5) listscroll_gms_pane_g1

0x9cac,	// (0x00017fed) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x0001d4a8) listscroll_gms_pane_g

0x12a7,	// (0x0000f5e8) scroll_pane_cp010

0x12b2,	// (0x0000f5f3) cell_gms_pane_ParamLimits

0x12b2,	// (0x0000f5f3) cell_gms_pane

0x12c5,	// (0x0000f606) cell_gms_pane_g1

0x9cb4,	// (0x00017ff5) cell_gms_pane_g2

0x9c0c,	// (0x00017f4d) cell_gms_pane_g3

0x9cbc,	// (0x00017ffd) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x0001d4ad) cell_gms_pane_g

0x9cc5,	// (0x00018006) grid_highlight_pane_cp09

0x3188,	// (0x000114c9) phob_pre_status_pane_g1

0x3190,	// (0x000114d1) phob_pre_status_pane_g2

0x3198,	// (0x000114d9) phob_pre_status_pane_g3

0x31a0,	// (0x000114e1) phob_pre_status_pane_g4

0x0004,

0xf51b,	// (0x0001d85c) phob_pre_status_pane_g

0x31b0,	// (0x000114f1) phob_pre_status_pane_t1

0x31be,	// (0x000114ff) phob_pre_status_pane_t2

0x31ce,	// (0x0001150f) phob_pre_status_pane_t3

0x0002,

0xf526,	// (0x0001d867) phob_pre_status_pane_t

0x9ccd,	// (0x0001800e) bg_list_pane_cp05

0x12d5,	// (0x0000f616) grid_vorec_pane

0x12dd,	// (0x0000f61e) vorec_t1

0x12eb,	// (0x0000f62c) vorec_t2

0x12f9,	// (0x0000f63a) vorec_t3

0x1307,	// (0x0000f648) vorec_t4

0xeb0b,	// (0x0001ce4c) vorec_t5

0x8451,	// (0x00016792) vorec_t6

0x0004,

0xf175,	// (0x0001d4b6) vorec_t

0x845f,	// (0x000167a0) wait_bar_pane_cp01

0x1323,	// (0x0000f664) cell_vorec_pane_ParamLimits

0x1323,	// (0x0000f664) cell_vorec_pane

0x9cd5,	// (0x00018016) cell_vorec_pane_g1

0x96f4,	// (0x00017a35) grid_highlight_pane_cp05

0x92d3,	// (0x00017614) cams_zoom_pane

0x92d3,	// (0x00017614) image_vga_pane

0x99ca,	// (0x00017d0b) main_camera_pane_g1

0x99ca,	// (0x00017d0b) main_camera_pane_g2

0x99ca,	// (0x00017d0b) main_camera_pane_g3

0x99ca,	// (0x00017d0b) main_camera_pane_g4

0x99ca,	// (0x00017d0b) main_camera_pane_g5

0x99ca,	// (0x00017d0b) main_camera_pane_g6

0x99ca,	// (0x00017d0b) main_camera_pane_g7

0x0007,

0xf180,	// (0x0001d4c1) main_camera_pane_g

0x9a1a,	// (0x00017d5b) main_camera_pane_t1

0x9a1a,	// (0x00017d5b) main_camera_pane_t2

0x0001,

0xf191,	// (0x0001d4d2) main_camera_pane_t

0x134a,	// (0x0000f68b) cams_zoom_pane_cp_ParamLimits

0x134a,	// (0x0000f68b) cams_zoom_pane_cp

0x137e,	// (0x0000f6bf) image_cif_pane_ParamLimits

0x137e,	// (0x0000f6bf) image_cif_pane

0x9264,	// (0x000175a5) image_subqcif_pane

0x1390,	// (0x0000f6d1) main_video_pane_g1_ParamLimits

0x1390,	// (0x0000f6d1) main_video_pane_g1

0x13be,	// (0x0000f6ff) main_video_pane_g2_ParamLimits

0x13be,	// (0x0000f6ff) main_video_pane_g2

0x13f8,	// (0x0000f739) main_video_pane_g3_ParamLimits

0x13f8,	// (0x0000f739) main_video_pane_g3

0x13f8,	// (0x0000f739) main_video_pane_g4_ParamLimits

0x13f8,	// (0x0000f739) main_video_pane_g4

0x142c,	// (0x0000f76d) main_video_pane_g5_ParamLimits

0x142c,	// (0x0000f76d) main_video_pane_g5

0x9cdf,	// (0x00018020) main_video_pane_g6_ParamLimits

0x9cdf,	// (0x00018020) main_video_pane_g6

0x0006,

0xf196,	// (0x0001d4d7) main_video_pane_g_ParamLimits

0xf196,	// (0x0001d4d7) main_video_pane_g

0x1448,	// (0x0000f789) main_video_pane_t1_ParamLimits

0x1448,	// (0x0000f789) main_video_pane_t1

0x9a10,	// (0x00017d51) cams_zoom_pane_g1

0x9a10,	// (0x00017d51) cams_zoom_pane_g2

0x9a10,	// (0x00017d51) cams_zoom_pane_g3

0x9a10,	// (0x00017d51) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x0001d4e6) cams_zoom_pane_g

0x92d3,	// (0x00017614) grid_cams_pane

0x92d3,	// (0x00017614) linegrid_cams_pane

0x148c,	// (0x0000f7cd) cell_cams_pane_ParamLimits

0x148c,	// (0x0000f7cd) cell_cams_pane

0x9264,	// (0x000175a5) cams_burst_image_pane

0x9a10,	// (0x00017d51) cell_cams_pane_g1

0x9264,	// (0x000175a5) grid_highlight_pane_cp03

0x9967,	// (0x00017ca8) mp_bg_pane_g1

0x9264,	// (0x000175a5) bg_list_pane_cp03

0x9264,	// (0x000175a5) bg_mp_pane

0x9264,	// (0x000175a5) grid_mp_pane

0x9a10,	// (0x00017d51) media_player_g1

0xa248,	// (0x00018589) media_player_t1

0xa248,	// (0x00018589) media_player_t2

0xa248,	// (0x00018589) media_player_t3

0xa248,	// (0x00018589) media_player_t4

0xa248,	// (0x00018589) media_player_t5

0xa248,	// (0x00018589) media_player_t6

0xa248,	// (0x00018589) media_player_t7

0x0006,

0xf505,	// (0x0001d846) media_player_t

0x9264,	// (0x000175a5) wait_bar_pane_cp02

0xf4ea,	// (0x0001d82b) main_usb_pane_t

0xa527,	// (0x00018868) cell_mp_pane

0x9967,	// (0x00017ca8) cell_mp_pane_g1

0x96f4,	// (0x00017a35) grid_highlight_pane_cp06

0x9cf9,	// (0x0001803a) grid_skin_colour_pane

0x9d01,	// (0x00018042) list_highlight_pane_cp03

0x14a1,	// (0x0000f7e2) skin_g1

0x9d09,	// (0x0001804a) skin_t1

0x9d18,	// (0x00018059) skin_t2

0x0001,

0xf1d3,	// (0x0001d514) skin_t

0x14a9,	// (0x0000f7ea) cell_skin_colour_pane_ParamLimits

0x14a9,	// (0x0000f7ea) cell_skin_colour_pane

0x9d26,	// (0x00018067) cell_skin_colour_pane_g1

0x1522,	// (0x0000f863) call_video_g1_ParamLimits

0x1522,	// (0x0000f863) call_video_g1

0x153e,	// (0x0000f87f) call_video_g2_ParamLimits

0x153e,	// (0x0000f87f) call_video_g2

0x0001,

0xf1d8,	// (0x0001d519) call_video_g_ParamLimits

0xf1d8,	// (0x0001d519) call_video_g

0x1590,	// (0x0000f8d1) call_video_uplink_pane_cp1_ParamLimits

0x1590,	// (0x0000f8d1) call_video_uplink_pane_cp1

0x9d38,	// (0x00018079) call_video_uplink_pane_cp2

0x162f,	// (0x0000f970) video_down_crop_pane_ParamLimits

0x162f,	// (0x0000f970) video_down_crop_pane

0x1726,	// (0x0000fa67) video_down_pane_ParamLimits

0x1726,	// (0x0000fa67) video_down_pane

0x9d40,	// (0x00018081) video_down_subqcif_pane_ParamLimits

0x9d40,	// (0x00018081) video_down_subqcif_pane

0x9d58,	// (0x00018099) video_down_subqcif_pane_cp_ParamLimits

0x9d58,	// (0x00018099) video_down_subqcif_pane_cp

0x9d7e,	// (0x000180bf) im_reading_pane_ParamLimits

0x9d7e,	// (0x000180bf) im_reading_pane

0x1836,	// (0x0000fb77) im_writing_pane_ParamLimits

0x1836,	// (0x0000fb77) im_writing_pane

0x184c,	// (0x0000fb8d) im_reading_pane_t1

0x9d98,	// (0x000180d9) list_im_pane

0x9da9,	// (0x000180ea) scroll_pane_cp07

0x1885,	// (0x0000fbc6) im_writing_pane_t1_ParamLimits

0x1885,	// (0x0000fbc6) im_writing_pane_t1

0x9dc2,	// (0x00018103) im_writing_pane_t2_ParamLimits

0x9dc2,	// (0x00018103) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x0001d523) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x0001d523) im_writing_pane_t

0x96f4,	// (0x00017a35) input_focus_pane_cp04

0x96f4,	// (0x00017a35) input_focus_pane_cp05

0x189a,	// (0x0000fbdb) list_im_single_pane_ParamLimits

0x189a,	// (0x0000fbdb) list_im_single_pane

0x18ae,	// (0x0000fbef) list_single_im_pane_t1

0x9ccd,	// (0x0001800e) blid_accuracy_pane

0x9ccd,	// (0x0001800e) blid_compass_pane

0xba68,	// (0x00019da9) main_location_t1

0xba68,	// (0x00019da9) main_location_t2

0xba68,	// (0x00019da9) main_location_t3

0x0002,

0xf514,	// (0x0001d855) main_location_t

0x96f4,	// (0x00017a35) aid_levels_location

0x9967,	// (0x00017ca8) blid_accuracy_pane_g1

0x9967,	// (0x00017ca8) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x0001d572) blid_accuracy_pane_g

0x9e0a,	// (0x0001814b) wml_content_pane

0x9e48,	// (0x00018189) wml_button_pane_ParamLimits

0x9e48,	// (0x00018189) wml_button_pane

0x18bd,	// (0x0000fbfe) wml_list_single_large_pane_ParamLimits

0x18bd,	// (0x0000fbfe) wml_list_single_large_pane

0x18d2,	// (0x0000fc13) wml_list_single_medium_pane_ParamLimits

0x18d2,	// (0x0000fc13) wml_list_single_medium_pane

0x18e8,	// (0x0000fc29) wml_list_single_small_pane_ParamLimits

0x18e8,	// (0x0000fc29) wml_list_single_small_pane

0x9e5c,	// (0x0001819d) wml_selection_box_pane_ParamLimits

0x9e5c,	// (0x0001819d) wml_selection_box_pane

0x9e6f,	// (0x000181b0) wml_list_single_pane_t1

0x9e7e,	// (0x000181bf) wml_list_single_medium_pane_t1

0x9e8d,	// (0x000181ce) wml_list_single_large_pane_t1

0x9e9c,	// (0x000181dd) input_focus_pane_cp02_ParamLimits

0x9e9c,	// (0x000181dd) input_focus_pane_cp02

0x9eaf,	// (0x000181f0) wml_selection_box_pane_g1

0x9eb8,	// (0x000181f9) wml_selection_box_pane_t1_ParamLimits

0x9eb8,	// (0x000181f9) wml_selection_box_pane_t1

0x994f,	// (0x00017c90) bg_wml_button_pane_ParamLimits

0x994f,	// (0x00017c90) bg_wml_button_pane

0x9ed0,	// (0x00018211) wml_button_pane_g1

0x9ed8,	// (0x00018219) wml_button_pane_t1

0x9ed0,	// (0x00018211) wml_button_bg_pane_g1

0x9ee8,	// (0x00018229) wml_button_bg_pane_g2

0x9ef0,	// (0x00018231) wml_button_bg_pane_g3

0x9ef8,	// (0x00018239) wml_button_bg_pane_g4

0x9f00,	// (0x00018241) wml_button_bg_pane_g5

0x9f08,	// (0x00018249) wml_button_bg_pane_g6

0x9f10,	// (0x00018251) wml_button_bg_pane_g7

0x9f18,	// (0x00018259) wml_button_bg_pane_g8

0x9f20,	// (0x00018261) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x0001d528) wml_button_bg_pane_g

0x1900,	// (0x0000fc41) bg_list_pane_cp02

0x9f28,	// (0x00018269) mce_header_pane_ParamLimits

0x9f28,	// (0x00018269) mce_header_pane

0x9f3e,	// (0x0001827f) mce_icon_pane

0x9f3e,	// (0x0001827f) mce_image_pane

0x9f47,	// (0x00018288) mce_text_pane_ParamLimits

0x9f47,	// (0x00018288) mce_text_pane

0x1908,	// (0x0000fc49) scroll_pane_cp03

0x9e40,	// (0x00018181) scroll_pane_cp04

0x9f5a,	// (0x0001829b) scroll_pane_cp05_ParamLimits

0x9f5a,	// (0x0001829b) scroll_pane_cp05

0x1912,	// (0x0000fc53) mce_header_field_pane_ParamLimits

0x1912,	// (0x0000fc53) mce_header_field_pane

0x1929,	// (0x0000fc6a) mce_header_field_pane_2_ParamLimits

0x1929,	// (0x0000fc6a) mce_header_field_pane_2

0x193f,	// (0x0000fc80) mce_header_field_pane_3

0x1947,	// (0x0000fc88) list_single_mce_message_pane_ParamLimits

0x1947,	// (0x0000fc88) list_single_mce_message_pane

0x195c,	// (0x0000fc9d) list_single_mce_smart_pane_ParamLimits

0x195c,	// (0x0000fc9d) list_single_mce_smart_pane

0x9f66,	// (0x000182a7) input_focus_pane_cp03

0x9f6f,	// (0x000182b0) list_header_data_pane

0x197c,	// (0x0000fcbd) mce_header_field_pane_t1

0x198c,	// (0x0000fccd) list_single_mce_header_pane_ParamLimits

0x198c,	// (0x0000fccd) list_single_mce_header_pane

0x9f77,	// (0x000182b8) list_single_mce_header_pane_t1

0x9f86,	// (0x000182c7) list_single_mce_message_pane_g1

0x9f8e,	// (0x000182cf) list_single_mce_message_pane_t1

0x19c6,	// (0x0000fd07) bg_cale_heading_pane_cp01_ParamLimits

0x19c6,	// (0x0000fd07) bg_cale_heading_pane_cp01

0x9f9c,	// (0x000182dd) bg_cale_pane_cp02_ParamLimits

0x9f9c,	// (0x000182dd) bg_cale_pane_cp02

0x1a00,	// (0x0000fd41) cale_month_corner_pane

0x1a1f,	// (0x0000fd60) cale_month_day_heading_pane_ParamLimits

0x1a1f,	// (0x0000fd60) cale_month_day_heading_pane

0x1a71,	// (0x0000fdb2) cale_month_pane_g1_ParamLimits

0x1a71,	// (0x0000fdb2) cale_month_pane_g1

0x1aa0,	// (0x0000fde1) cale_month_pane_g2_ParamLimits

0x1aa0,	// (0x0000fde1) cale_month_pane_g2

0x1ad0,	// (0x0000fe11) cale_month_pane_g3_ParamLimits

0x1ad0,	// (0x0000fe11) cale_month_pane_g3

0x1b0c,	// (0x0000fe4d) cale_month_pane_g4_ParamLimits

0x1b0c,	// (0x0000fe4d) cale_month_pane_g4

0x1b48,	// (0x0000fe89) cale_month_pane_g5_ParamLimits

0x1b48,	// (0x0000fe89) cale_month_pane_g5

0x1b90,	// (0x0000fed1) cale_month_pane_g6_ParamLimits

0x1b90,	// (0x0000fed1) cale_month_pane_g6

0x1bdc,	// (0x0000ff1d) cale_month_pane_g7_ParamLimits

0x1bdc,	// (0x0000ff1d) cale_month_pane_g7

0x1c30,	// (0x0000ff71) cale_month_pane_g8_ParamLimits

0x1c30,	// (0x0000ff71) cale_month_pane_g8

0x1c84,	// (0x0000ffc5) cale_month_pane_g9_ParamLimits

0x1c84,	// (0x0000ffc5) cale_month_pane_g9

0x1cd6,	// (0x00010017) cale_month_pane_g10_ParamLimits

0x1cd6,	// (0x00010017) cale_month_pane_g10

0x1d28,	// (0x00010069) cale_month_pane_g11_ParamLimits

0x1d28,	// (0x00010069) cale_month_pane_g11

0x1d7a,	// (0x000100bb) cale_month_pane_g12_ParamLimits

0x1d7a,	// (0x000100bb) cale_month_pane_g12

0x1dcc,	// (0x0001010d) cale_month_pane_g13_ParamLimits

0x1dcc,	// (0x0001010d) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x0001d53b) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x0001d53b) cale_month_pane_g

0x1e1e,	// (0x0001015f) cale_month_week_pane

0x1e42,	// (0x00010183) grid_cale_month_pane_ParamLimits

0x1e42,	// (0x00010183) grid_cale_month_pane

0x1e8b,	// (0x000101cc) cale_month_day_heading_pane_t1

0x1f11,	// (0x00010252) cale_month_day_heading_pane_t2

0x1f8a,	// (0x000102cb) cale_month_day_heading_pane_t3

0x2003,	// (0x00010344) cale_month_day_heading_pane_t4

0x2084,	// (0x000103c5) cale_month_day_heading_pane_t5

0x210d,	// (0x0001044e) cale_month_day_heading_pane_t6

0x2196,	// (0x000104d7) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x0001d556) cale_month_day_heading_pane_t

0x9c7b,	// (0x00017fbc) bg_cale_side_pane_cp01

0x2227,	// (0x00010568) cale_month_week_pane_t1

0x2240,	// (0x00010581) cale_month_week_pane_t2

0x2259,	// (0x0001059a) cale_month_week_pane_t3

0x2272,	// (0x000105b3) cale_month_week_pane_t4

0x228b,	// (0x000105cc) cale_month_week_pane_t5

0x22a4,	// (0x000105e5) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x0001d565) cale_month_week_pane_t

0x22bd,	// (0x000105fe) cell_cale_month_pane_ParamLimits

0x22bd,	// (0x000105fe) cell_cale_month_pane

0x9fdb,	// (0x0001831c) cell_cale_month_pane_g1

0x23eb,	// (0x0001072c) cell_cale_month_pane_t1_ParamLimits

0x23eb,	// (0x0001072c) cell_cale_month_pane_t1

0x9c89,	// (0x00017fca) grid_highlight_pane_cp08

0x9967,	// (0x00017ca8) main_smil_g1

0x2417,	// (0x00010758) smil_status_pane

0x9fe7,	// (0x00018328) smil_text_pane

0xb980,	// (0x00019cc1) bg_popup_call3_rect_pane_g8

0xb988,	// (0x00019cc9) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x0001d7ee) bg_popup_call3_rect_pane_g

0xbb85,	// (0x00019ec6) smil_status_volume_pane_g1

0x9ff1,	// (0x00018332) smil_status_pane_t1

0xbbb8,	// (0x00019ef9) volume_smil_pane

0xa008,	// (0x00018349) list_smil_text_pane

0x242a,	// (0x0001076b) scroll_pane_cp011

0x2435,	// (0x00010776) smil_text_list_pane_t1_ParamLimits

0x2435,	// (0x00010776) smil_text_list_pane_t1

0xa012,	// (0x00018353) aid_volume_smil_ParamLimits

0xa012,	// (0x00018353) aid_volume_smil

0x9967,	// (0x00017ca8) smil_volume_pane_g1

0x9967,	// (0x00017ca8) smil_volume_pane_g2

0x0001,

0xf231,	// (0x0001d572) smil_volume_pane_g

0x0d7e,	// (0x0000f0bf) listscroll_cale_day_pane

0xa034,	// (0x00018375) bg_cale_pane

0xa04c,	// (0x0001838d) list_cale_pane

0xa06f,	// (0x000183b0) scroll_pane_cp09

0xa080,	// (0x000183c1) cale_bg_pane_g1

0xa088,	// (0x000183c9) cale_bg_pane_g2

0xa090,	// (0x000183d1) cale_bg_pane_g3

0xa098,	// (0x000183d9) cale_bg_pane_g4

0xa0a0,	// (0x000183e1) cale_bg_pane_g5

0xa0a8,	// (0x000183e9) cale_bg_pane_g6

0xa0b0,	// (0x000183f1) cale_bg_pane_g7

0xa0b8,	// (0x000183f9) cale_bg_pane_g8

0xa0c0,	// (0x00018401) cale_bg_pane_g9

0x0008,

0xf236,	// (0x0001d577) cale_bg_pane_g

0x2471,	// (0x000107b2) list_cale_time_pane_ParamLimits

0x2471,	// (0x000107b2) list_cale_time_pane

0xa0d0,	// (0x00018411) list_cale_time_pane_g1_ParamLimits

0xa0d0,	// (0x00018411) list_cale_time_pane_g1

0xa0dc,	// (0x0001841d) list_cale_time_pane_g2_ParamLimits

0xa0dc,	// (0x0001841d) list_cale_time_pane_g2

0x2486,	// (0x000107c7) list_cale_time_pane_g3_ParamLimits

0x2486,	// (0x000107c7) list_cale_time_pane_g3

0x2494,	// (0x000107d5) list_cale_time_pane_g4_ParamLimits

0x2494,	// (0x000107d5) list_cale_time_pane_g4

0x24a2,	// (0x000107e3) list_cale_time_pane_g5_ParamLimits

0x24a2,	// (0x000107e3) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x0001d58a) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x0001d58a) list_cale_time_pane_g

0xa0f6,	// (0x00018437) list_cale_time_pane_t1_ParamLimits

0xa0f6,	// (0x00018437) list_cale_time_pane_t1

0xa11e,	// (0x0001845f) list_cale_time_pane_t2_ParamLimits

0xa11e,	// (0x0001845f) list_cale_time_pane_t2

0x2704,	// (0x00010a45) aid_blid_cardinal_pane

0x2742,	// (0x00010a83) compass_pane_t4

0xa146,	// (0x00018487) list_cale_time_pane_t4_ParamLimits

0xa146,	// (0x00018487) list_cale_time_pane_t4

0x2750,	// (0x00010a91) compass_pane_t5

0x275e,	// (0x00010a9f) compass_pane_t6

0x276c,	// (0x00010aad) compass_pane_t7

0xa66c,	// (0x000189ad) navi_pane_cc_t1

0xa85b,	// (0x00018b9c) aid_phob_thumbnail_center_pane

0x2bdb,	// (0x00010f1c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x0001d597) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x0001d597) list_cale_time_pane_t

0x934b,	// (0x0001768c) bg_popup_window_pane_cp02_ParamLimits

0x934b,	// (0x0001768c) bg_popup_window_pane_cp02

0xa16e,	// (0x000184af) heading_pane_cp01_ParamLimits

0xa16e,	// (0x000184af) heading_pane_cp01

0xa17a,	// (0x000184bb) loc_req_pane_ParamLimits

0xa17a,	// (0x000184bb) loc_req_pane

0xa18a,	// (0x000184cb) loc_type_pane_ParamLimits

0xa18a,	// (0x000184cb) loc_type_pane

0xa19c,	// (0x000184dd) loc_type_pane_t1_ParamLimits

0xa19c,	// (0x000184dd) loc_type_pane_t1

0xa1ae,	// (0x000184ef) loc_type_pane_t2_ParamLimits

0xa1ae,	// (0x000184ef) loc_type_pane_t2

0xa1c0,	// (0x00018501) loc_type_pane_t3_ParamLimits

0xa1c0,	// (0x00018501) loc_type_pane_t3

0x0002,

0xf25d,	// (0x0001d59e) loc_type_pane_t_ParamLimits

0xf25d,	// (0x0001d59e) loc_type_pane_t

0xa1d2,	// (0x00018513) list_loc_req_pane

0xa1dc,	// (0x0001851d) scroll_pane_cp012

0x24b0,	// (0x000107f1) list_single_loc_request_popup_menu_pane_ParamLimits

0x24b0,	// (0x000107f1) list_single_loc_request_popup_menu_pane

0xa1e7,	// (0x00018528) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa1e7,	// (0x00018528) list_single_loc_request_popup_menu_pane_g1

0xa1f3,	// (0x00018534) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa1f3,	// (0x00018534) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x0001d5a5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x0001d5a5) list_single_loc_request_popup_menu_pane_g

0xa1ff,	// (0x00018540) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa1ff,	// (0x00018540) list_single_loc_request_popup_menu_pane_t1

0x994f,	// (0x00017c90) bg_popup_window_pane_cp03_ParamLimits

0x994f,	// (0x00017c90) bg_popup_window_pane_cp03

0xa215,	// (0x00018556) heading_loc_req_pane_ParamLimits

0xa215,	// (0x00018556) heading_loc_req_pane

0x24bd,	// (0x000107fe) popup_dyc_status_message_window_g1_ParamLimits

0x24bd,	// (0x000107fe) popup_dyc_status_message_window_g1

0x24d1,	// (0x00010812) popup_dyc_status_message_window_t1_ParamLimits

0x24d1,	// (0x00010812) popup_dyc_status_message_window_t1

0x24e6,	// (0x00010827) popup_dyc_status_message_window_t2_ParamLimits

0x24e6,	// (0x00010827) popup_dyc_status_message_window_t2

0x24fb,	// (0x0001083c) popup_dyc_status_message_window_t3_ParamLimits

0x24fb,	// (0x0001083c) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x0001d5aa) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x0001d5aa) popup_dyc_status_message_window_t

0x96f4,	// (0x00017a35) bg_heading_pane_cp01

0xa221,	// (0x00018562) heading_loc_req_pane_g1

0xa229,	// (0x0001856a) heading_loc_req_pane_g2

0xa231,	// (0x00018572) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x0001d5b1) heading_loc_req_pane_g

0xa239,	// (0x0001857a) heading_loc_req_pane_t1

0xa258,	// (0x00018599) bg_popup_sub_pane_cp01_ParamLimits

0xa258,	// (0x00018599) bg_popup_sub_pane_cp01

0xa266,	// (0x000185a7) popup_cale_events_window_g1_ParamLimits

0xa266,	// (0x000185a7) popup_cale_events_window_g1

0xa286,	// (0x000185c7) popup_cale_events_window_g2_ParamLimits

0xa286,	// (0x000185c7) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x0001d5d3) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x0001d5d3) popup_cale_events_window_g

0xa2a6,	// (0x000185e7) popup_cale_events_window_t1_ParamLimits

0xa2a6,	// (0x000185e7) popup_cale_events_window_t1

0xa2b8,	// (0x000185f9) popup_cale_events_window_t2_ParamLimits

0xa2b8,	// (0x000185f9) popup_cale_events_window_t2

0xa2f6,	// (0x00018637) popup_cale_events_window_t3_ParamLimits

0xa2f6,	// (0x00018637) popup_cale_events_window_t3

0xa330,	// (0x00018671) popup_cale_events_window_t4_ParamLimits

0xa330,	// (0x00018671) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x0001d5d8) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x0001d5d8) popup_cale_events_window_t

0x2523,	// (0x00010864) call_type_pane

0x2533,	// (0x00010874) popup_call_status_window_g1

0x2547,	// (0x00010888) popup_call_status_window_g2

0x255b,	// (0x0001089c) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x0001d5e1) popup_call_status_window_g

0xa366,	// (0x000186a7) call_type_pane_g1

0xa36f,	// (0x000186b0) call_type_pane_g2

0x0001,

0xf2a7,	// (0x0001d5e8) call_type_pane_g

0x96f4,	// (0x00017a35) bg_popup_sub_pane_cp02

0xa378,	// (0x000186b9) listscroll_popup_wml_pane

0xa380,	// (0x000186c1) list_wml_pane

0xa38a,	// (0x000186cb) scroll_pane_cp013

0xa395,	// (0x000186d6) list_single_graphic_popup_wml_pane_ParamLimits

0xa395,	// (0x000186d6) list_single_graphic_popup_wml_pane

0x9967,	// (0x00017ca8) list_single_graphic_popup_wml_pane_g1

0xa3a9,	// (0x000186ea) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x0001d5ed) list_single_graphic_popup_wml_pane_g

0xa3b1,	// (0x000186f2) list_single_graphic_popup_wml_pane_t1

0xa3c7,	// (0x00018708) aid_call_pane

0x9947,	// (0x00017c88) popup_clock_analogue_window_g1

0x9947,	// (0x00017c88) popup_clock_analogue_window_g2

0xa3cf,	// (0x00018710) popup_clock_analogue_window_g3

0xa3cf,	// (0x00018710) popup_clock_analogue_window_g4

0x9967,	// (0x00017ca8) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x0001d5f2) popup_clock_analogue_window_g

0xa3d7,	// (0x00018718) popup_clock_analogue_window_t1

0xa3e5,	// (0x00018726) clock_digital_number_pane_ParamLimits

0xa3e5,	// (0x00018726) clock_digital_number_pane

0xa3f1,	// (0x00018732) clock_digital_number_pane_cp02_ParamLimits

0xa3f1,	// (0x00018732) clock_digital_number_pane_cp02

0xa3fd,	// (0x0001873e) clock_digital_number_pane_cp03_ParamLimits

0xa3fd,	// (0x0001873e) clock_digital_number_pane_cp03

0xa409,	// (0x0001874a) clock_digital_number_pane_cp04_ParamLimits

0xa409,	// (0x0001874a) clock_digital_number_pane_cp04

0xa419,	// (0x0001875a) clock_digital_separator_pane_ParamLimits

0xa419,	// (0x0001875a) clock_digital_separator_pane

0xa425,	// (0x00018766) popup_clock_digital_window_t1

0x9967,	// (0x00017ca8) clock_digital_number_pane_g1

0x9967,	// (0x00017ca8) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x0001d572) clock_digital_number_pane_g

0x9967,	// (0x00017ca8) clock_digital_separator_pane_g1

0x9967,	// (0x00017ca8) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x0001d572) clock_digital_separator_pane_g

0x96f4,	// (0x00017a35) bg_popup_window_pane_cp04

0xa442,	// (0x00018783) heading_pane_cp03

0x9ccd,	// (0x0001800e) listscroll_popup_gms_pane

0x96f4,	// (0x00017a35) grid_large_graphic_popup_pane

0xa44b,	// (0x0001878c) listscroll_popup_gms_pane_g1

0xa454,	// (0x00018795) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x0001d5fd) listscroll_popup_gms_pane_g

0xa45d,	// (0x0001879e) scroll_pane_cp014

0x99bc,	// (0x00017cfd) cell_large_graphic_popup_pane_ParamLimits

0x99bc,	// (0x00017cfd) cell_large_graphic_popup_pane

0x99ca,	// (0x00017d0b) cell_large_graphic_popup_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) cell_large_graphic_popup_pane_g1

0xa466,	// (0x000187a7) cell_large_graphic_popup_pane_g2_ParamLimits

0xa466,	// (0x000187a7) cell_large_graphic_popup_pane_g2

0xa474,	// (0x000187b5) cell_large_graphic_popup_pane_g3_ParamLimits

0xa474,	// (0x000187b5) cell_large_graphic_popup_pane_g3

0xa482,	// (0x000187c3) cell_large_graphic_popup_pane_g4_ParamLimits

0xa482,	// (0x000187c3) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x0001d602) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x0001d602) cell_large_graphic_popup_pane_g

0x96f4,	// (0x00017a35) grid_highlight_pane_cp010

0x9967,	// (0x00017ca8) bg_popup_call_pane_g1

0xa493,	// (0x000187d4) list_single_graphic_popup_conf_pane_ParamLimits

0xa493,	// (0x000187d4) list_single_graphic_popup_conf_pane

0xa4a6,	// (0x000187e7) list_highlight_pane_cp01

0xa4af,	// (0x000187f0) list_single_graphic_popup_conf_pane_g1

0xa4b7,	// (0x000187f8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x0001d60b) list_single_graphic_popup_conf_pane_g

0xa4bf,	// (0x00018800) list_single_graphic_popup_conf_pane_t1

0xa4cd,	// (0x0001880e) linegrid_cams_pane_g1

0x256a,	// (0x000108ab) linegrid_cams_pane_g2

0x9c0c,	// (0x00017f4d) linegrid_cams_pane_g3

0xa4d6,	// (0x00018817) linegrid_cams_pane_g4

0x2573,	// (0x000108b4) linegrid_cams_pane_g5

0x257c,	// (0x000108bd) linegrid_cams_pane_g6

0x9cbc,	// (0x00017ffd) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x0001d610) linegrid_cams_pane_g

0xa4df,	// (0x00018820) popup_clock_analogue_window

0xa4df,	// (0x00018820) popup_clock_digital_window

0x96f4,	// (0x00017a35) popup_phob_thumbnail_window

0x9967,	// (0x00017ca8) call_video_uplink_pane_g1

0xa4e8,	// (0x00018829) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x0001d61f) call_video_uplink_pane_g

0xa4f0,	// (0x00018831) video_uplink_pane

0xa4f8,	// (0x00018839) mce_image_pane_g1

0x2587,	// (0x000108c8) mce_image_pane_g2

0x2591,	// (0x000108d2) mce_image_pane_g3

0x2599,	// (0x000108da) mce_image_pane_g4

0x25a1,	// (0x000108e2) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x0001d624) mce_image_pane_g

0xa502,	// (0x00018843) control_top_pane_stacon_cp01_ParamLimits

0xa502,	// (0x00018843) control_top_pane_stacon_cp01

0xa516,	// (0x00018857) uni_indicator_pane_stacon_cp01_ParamLimits

0xa516,	// (0x00018857) uni_indicator_pane_stacon_cp01

0xa527,	// (0x00018868) bg_popup_sub_pane_cp03

0xa531,	// (0x00018872) chi_dic_find_pane

0x25a9,	// (0x000108ea) listscroll_chi_dic_pane

0xa539,	// (0x0001887a) main_pane_chidic_g1

0xa541,	// (0x00018882) chi_dic_find_pane_t1

0xa54f,	// (0x00018890) find_chidic_pane

0xa558,	// (0x00018899) chi_dic_list_pane_ParamLimits

0xa558,	// (0x00018899) chi_dic_list_pane

0xa569,	// (0x000188aa) scroll_pane_cp020

0xa571,	// (0x000188b2) find_chidic_pane_t1

0x96f4,	// (0x00017a35) input_focus_pane_cp06

0x25bd,	// (0x000108fe) list_chi_dic_pane_ParamLimits

0x25bd,	// (0x000108fe) list_chi_dic_pane

0x25cf,	// (0x00010910) list_chi_dic_pane_t1_ParamLimits

0x25cf,	// (0x00010910) list_chi_dic_pane_t1

0x96f4,	// (0x00017a35) list_highlight_pane_cp020

0xa580,	// (0x000188c1) bg_cale_heading_pane_g1

0x25e2,	// (0x00010923) bg_cale_heading_pane_g2

0x25ea,	// (0x0001092b) bg_cale_heading_pane_g3

0x25f2,	// (0x00010933) bg_cale_heading_pane_g4

0x25fc,	// (0x0001093d) bg_cale_heading_pane_g5

0x2606,	// (0x00010947) bg_cale_heading_pane_g6

0x260e,	// (0x0001094f) bg_cale_heading_pane_g7

0x2616,	// (0x00010957) bg_cale_heading_pane_g8

0x2620,	// (0x00010961) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x0001d62f) bg_cale_heading_pane_g

0xa580,	// (0x000188c1) bg_cale_side_pane_g1

0x262a,	// (0x0001096b) bg_cale_side_pane_g2

0x2632,	// (0x00010973) bg_cale_side_pane_g3

0x263a,	// (0x0001097b) bg_cale_side_pane_g4

0x2642,	// (0x00010983) bg_cale_side_pane_g5

0x264a,	// (0x0001098b) bg_cale_side_pane_g6

0x2652,	// (0x00010993) bg_cale_side_pane_g7

0x265a,	// (0x0001099b) bg_cale_side_pane_g8

0x2662,	// (0x000109a3) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x0001d642) bg_cale_side_pane_g

0x266a,	// (0x000109ab) popup_call_status_window_ParamLimits

0x266a,	// (0x000109ab) popup_call_status_window

0xa588,	// (0x000188c9) stacon_top_pane

0xa590,	// (0x000188d1) status_pane_ParamLimits

0xa590,	// (0x000188d1) status_pane

0xa5a5,	// (0x000188e6) status_small_pane

0xa5ad,	// (0x000188ee) control_pane

0x96f4,	// (0x00017a35) stacon_bottom_pane

0xa5b5,	// (0x000188f6) list_single_mce_smart_pane_t1_ParamLimits

0xa5b5,	// (0x000188f6) list_single_mce_smart_pane_t1

0xa5c8,	// (0x00018909) list_single_mce_smart_pane_t2_ParamLimits

0xa5c8,	// (0x00018909) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x0001d655) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x0001d655) list_single_mce_smart_pane_t

0x26b3,	// (0x000109f4) compass_pane

0x26bc,	// (0x000109fd) main_location2_pane_t1

0x26ce,	// (0x00010a0f) main_location2_pane_t2

0x26e0,	// (0x00010a21) main_location2_pane_t3

0x0003,

0xf319,	// (0x0001d65a) main_location2_pane_t

0xa5e7,	// (0x00018928) compass_pane_g1_ParamLimits

0xa5e7,	// (0x00018928) compass_pane_g1

0x2724,	// (0x00010a65) compass_pane_t1

0x2733,	// (0x00010a74) compass_pane_t2

0x0005,

0xf322,	// (0x0001d663) compass_pane_t

0x277a,	// (0x00010abb) text_secondary_cp61

0xa663,	// (0x000189a4) navi_pane_cams_g5

0xa6df,	// (0x00018a20) navi_pane_im_t1

0xa6ed,	// (0x00018a2e) navi_pane_mp_g1_ParamLimits

0xa6ed,	// (0x00018a2e) navi_pane_mp_g1

0xa701,	// (0x00018a42) navi_pane_mp_g2_ParamLimits

0xa701,	// (0x00018a42) navi_pane_mp_g2

0xa70d,	// (0x00018a4e) navi_pane_mp_g3_ParamLimits

0xa70d,	// (0x00018a4e) navi_pane_mp_g3

0x0002,

0xf336,	// (0x0001d677) navi_pane_mp_g_ParamLimits

0xf336,	// (0x0001d677) navi_pane_mp_g

0xa719,	// (0x00018a5a) navi_pane_mp_t1

0xa727,	// (0x00018a68) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x0001d67e) navi_pane_mp_t

0xa792,	// (0x00018ad3) navi_pane_vt_g1

0xa719,	// (0x00018a5a) navi_pane_vt_t1

0xa79a,	// (0x00018adb) navi_slider_pane

0x9ccd,	// (0x0001800e) zooming_pane

0xa7aa,	// (0x00018aeb) navi_slider_pane_g1

0xa7b3,	// (0x00018af4) navi_slider_pane_g2

0x0006,

0xf344,	// (0x0001d685) navi_slider_pane_g

0xa7e0,	// (0x00018b21) aid_levels_zoom

0xa7e8,	// (0x00018b29) zooming_pane_g1

0xa7f0,	// (0x00018b31) zooming_pane_g2

0xa7f0,	// (0x00018b31) zooming_pane_g3

0x0002,

0xf353,	// (0x0001d694) zooming_pane_g

0xa7f8,	// (0x00018b39) level_10_zoom

0xa801,	// (0x00018b42) level_11_zoom

0xa80a,	// (0x00018b4b) level_1_zoom

0xa813,	// (0x00018b54) level_2_zoom

0xa81c,	// (0x00018b5d) level_3_zoom

0xa825,	// (0x00018b66) level_4_zoom

0xa82e,	// (0x00018b6f) level_5_zoom

0xa837,	// (0x00018b78) level_6_zoom

0xa840,	// (0x00018b81) level_7_zoom

0xa849,	// (0x00018b8a) level_8_zoom

0xa852,	// (0x00018b93) level_9_zoom

0xa863,	// (0x00018ba4) popup_phob_thumbnail_window_g1

0xa86b,	// (0x00018bac) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x0001d69b) popup_phob_thumbnail_window_g

0x31de,	// (0x0001151f) level_1_location

0x31e6,	// (0x00011527) level_2_location

0x31ee,	// (0x0001152f) level_3_location

0x31f6,	// (0x00011537) level_4_location

0x9ccd,	// (0x0001800e) level_5_location

0x27cb,	// (0x00010b0c) mce_icon_pane_g1

0x27d5,	// (0x00010b16) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x0001d6a0) mce_icon_pane_g

0xa873,	// (0x00018bb4) main_mup_pane_g1_ParamLimits

0xa873,	// (0x00018bb4) main_mup_pane_g1

0xa873,	// (0x00018bb4) main_mup_pane_g2_ParamLimits

0xa873,	// (0x00018bb4) main_mup_pane_g2

0xa873,	// (0x00018bb4) main_mup_pane_g3_ParamLimits

0xa873,	// (0x00018bb4) main_mup_pane_g3

0xa873,	// (0x00018bb4) main_mup_pane_g4_ParamLimits

0xa873,	// (0x00018bb4) main_mup_pane_g4

0xa873,	// (0x00018bb4) main_mup_pane_g5_ParamLimits

0xa873,	// (0x00018bb4) main_mup_pane_g5

0xa873,	// (0x00018bb4) main_mup_pane_g6_ParamLimits

0xa873,	// (0x00018bb4) main_mup_pane_g6

0xa873,	// (0x00018bb4) main_mup_pane_g7_ParamLimits

0xa873,	// (0x00018bb4) main_mup_pane_g7

0xa873,	// (0x00018bb4) main_mup_pane_g8_ParamLimits

0xa873,	// (0x00018bb4) main_mup_pane_g8

0xa873,	// (0x00018bb4) main_mup_pane_g9_ParamLimits

0xa873,	// (0x00018bb4) main_mup_pane_g9

0xa873,	// (0x00018bb4) main_mup_pane_g10_ParamLimits

0xa873,	// (0x00018bb4) main_mup_pane_g10

0xa873,	// (0x00018bb4) main_mup_pane_g11_ParamLimits

0xa873,	// (0x00018bb4) main_mup_pane_g11

0x99ca,	// (0x00017d0b) main_mup_pane_g12_ParamLimits

0x99ca,	// (0x00017d0b) main_mup_pane_g12

0xa873,	// (0x00018bb4) main_mup_pane_g13_ParamLimits

0xa873,	// (0x00018bb4) main_mup_pane_g13

0x000c,

0xf364,	// (0x0001d6a5) main_mup_pane_g_ParamLimits

0xf364,	// (0x0001d6a5) main_mup_pane_g

0xa881,	// (0x00018bc2) main_mup_pane_t1_ParamLimits

0xa881,	// (0x00018bc2) main_mup_pane_t1

0xa881,	// (0x00018bc2) main_mup_pane_t2_ParamLimits

0xa881,	// (0x00018bc2) main_mup_pane_t2

0xa881,	// (0x00018bc2) main_mup_pane_t3_ParamLimits

0xa881,	// (0x00018bc2) main_mup_pane_t3

0x9a1a,	// (0x00017d5b) main_mup_pane_t4_ParamLimits

0x9a1a,	// (0x00017d5b) main_mup_pane_t4

0x9a1a,	// (0x00017d5b) main_mup_pane_t5_ParamLimits

0x9a1a,	// (0x00017d5b) main_mup_pane_t5

0x9a2e,	// (0x00017d6f) main_mup_pane_t6_ParamLimits

0x9a2e,	// (0x00017d6f) main_mup_pane_t6

0x0005,

0xf37f,	// (0x0001d6c0) main_mup_pane_t_ParamLimits

0xf37f,	// (0x0001d6c0) main_mup_pane_t

0x99bc,	// (0x00017cfd) mup_progress_pane_ParamLimits

0x99bc,	// (0x00017cfd) mup_progress_pane

0xa895,	// (0x00018bd6) mup_visualizer_pane_ParamLimits

0xa895,	// (0x00018bd6) mup_visualizer_pane

0xa895,	// (0x00018bd6) mup_volume_pane_ParamLimits

0xa895,	// (0x00018bd6) mup_volume_pane

0x99d8,	// (0x00017d19) mup_visualizer_pane_g1_ParamLimits

0x99d8,	// (0x00017d19) mup_visualizer_pane_g1

0xa8a3,	// (0x00018be4) mup_visualizer_pane_g2_ParamLimits

0xa8a3,	// (0x00018be4) mup_visualizer_pane_g2

0x99ca,	// (0x00017d0b) mup_visualizer_pane_g3_ParamLimits

0x99ca,	// (0x00017d0b) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x0001d6cd) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x0001d6cd) mup_visualizer_pane_g

0x9a10,	// (0x00017d51) mup_volume_pane_g1

0x9a10,	// (0x00017d51) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x0001d3f0) mup_volume_pane_g

0x9a10,	// (0x00017d51) mup_progress_pane_g1

0x9a10,	// (0x00017d51) mup_progress_pane_g2

0x9a10,	// (0x00017d51) mup_progress_pane_g3

0x0002,

0xf393,	// (0x0001d6d4) mup_progress_pane_g

0x96f4,	// (0x00017a35) bg_popup_window_pane_cp05

0xa8b1,	// (0x00018bf2) heading_pane_cp02_ParamLimits

0xa8b1,	// (0x00018bf2) heading_pane_cp02

0xa8cb,	// (0x00018c0c) list_popup_blid_pane

0xa8d3,	// (0x00018c14) list_blid_sat_info_pane_ParamLimits

0xa8d3,	// (0x00018c14) list_blid_sat_info_pane

0xa8e6,	// (0x00018c27) list_blid_sat_info_pane_g1

0xa8ee,	// (0x00018c2f) list_blid_sat_info_pane_t1

0x28d5,	// (0x00010c16) mup_equalizer_pane_ParamLimits

0x28d5,	// (0x00010c16) mup_equalizer_pane

0x28ee,	// (0x00010c2f) mup_equalizer_pane_cp1_ParamLimits

0x28ee,	// (0x00010c2f) mup_equalizer_pane_cp1

0x290b,	// (0x00010c4c) mup_equalizer_pane_cp2_ParamLimits

0x290b,	// (0x00010c4c) mup_equalizer_pane_cp2

0x2928,	// (0x00010c69) mup_equalizer_pane_cp3_ParamLimits

0x2928,	// (0x00010c69) mup_equalizer_pane_cp3

0x2949,	// (0x00010c8a) mup_equalizer_pane_cp4_ParamLimits

0x2949,	// (0x00010c8a) mup_equalizer_pane_cp4

0x296a,	// (0x00010cab) mup_equalizer_pane_cp5

0x297e,	// (0x00010cbf) mup_equalizer_pane_cp6

0x2992,	// (0x00010cd3) mup_equalizer_pane_cp7

0xba00,	// (0x00019d41) bg_popup_call_poc_act_pane_g9

0xba08,	// (0x00019d49) bg_popup_call_poc_act_pane_g10

0xba10,	// (0x00019d51) bg_popup_call_poc_act_pane_g11

0x000a,

0x994f,	// (0x00017c90) mup_scale_pane

0x9967,	// (0x00017ca8) mup_scale_pane_g1

0xa8fc,	// (0x00018c3d) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x0001d6f0) mup_scale_pane_g

0xa920,	// (0x00018c61) msg_data_pane

0xa928,	// (0x00018c69) scroll_pane_cp017

0x29b8,	// (0x00010cf9) bg_list_pane_cp04_ParamLimits

0x29b8,	// (0x00010cf9) bg_list_pane_cp04

0xa930,	// (0x00018c71) msg_data_pane_g1

0x29de,	// (0x00010d1f) msg_data_pane_g2

0x29e8,	// (0x00010d29) msg_data_pane_g3

0x29f0,	// (0x00010d31) msg_data_pane_g4

0x29f8,	// (0x00010d39) msg_data_pane_g5

0x2a00,	// (0x00010d41) msg_data_pane_g6

0x2a08,	// (0x00010d49) msg_data_pane_g7

0x0006,

0xf3be,	// (0x0001d6ff) msg_data_pane_g

0x2a10,	// (0x00010d51) msg_text_pane_ParamLimits

0x2a10,	// (0x00010d51) msg_text_pane

0x2a42,	// (0x00010d83) qrid_highlight_pane_cp011_ParamLimits

0x2a42,	// (0x00010d83) qrid_highlight_pane_cp011

0x96f4,	// (0x00017a35) msg_body_pane

0x994f,	// (0x00017c90) msg_header_pane

0xa94c,	// (0x00018c8d) input_focus_pane_cp07

0x2a66,	// (0x00010da7) msg_header_pane_t1_ParamLimits

0x2a66,	// (0x00010da7) msg_header_pane_t1

0x2a82,	// (0x00010dc3) msg_header_pane_t2_ParamLimits

0x2a82,	// (0x00010dc3) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x0001d713) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x0001d713) msg_header_pane_t

0xa96d,	// (0x00018cae) msg_body_pane_g1

0x2aa2,	// (0x00010de3) msg_body_pane_t1_ParamLimits

0x2aa2,	// (0x00010de3) msg_body_pane_t1

0x2ad3,	// (0x00010e14) msg_body_pane_t2_ParamLimits

0x2ad3,	// (0x00010e14) msg_body_pane_t2

0x2ae5,	// (0x00010e26) msg_body_pane_t3_ParamLimits

0x2ae5,	// (0x00010e26) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x0001d718) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x0001d718) msg_body_pane_t

0x2b31,	// (0x00010e72) main_viewer_pane_g1_ParamLimits

0x2b31,	// (0x00010e72) main_viewer_pane_g1

0x2b3f,	// (0x00010e80) main_viewer_pane_g2_ParamLimits

0x2b3f,	// (0x00010e80) main_viewer_pane_g2

0x2b4d,	// (0x00010e8e) main_viewer_pane_g3_ParamLimits

0x2b4d,	// (0x00010e8e) main_viewer_pane_g3

0x2b5c,	// (0x00010e9d) main_viewer_pane_g4_ParamLimits

0x2b5c,	// (0x00010e9d) main_viewer_pane_g4

0xa98d,	// (0x00018cce) main_viewer_pane_g5_ParamLimits

0xa98d,	// (0x00018cce) main_viewer_pane_g5

0xa98d,	// (0x00018cce) main_viewer_pane_g7_ParamLimits

0xa98d,	// (0x00018cce) main_viewer_pane_g7

0xa99f,	// (0x00018ce0) main_viewer_pane_g8_ParamLimits

0xa99f,	// (0x00018ce0) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x0001d728) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x0001d728) main_viewer_pane_g

0xa9b7,	// (0x00018cf8) viewer_content_pane_ParamLimits

0xa9b7,	// (0x00018cf8) viewer_content_pane

0x2b98,	// (0x00010ed9) main_postcard_pane_g1_ParamLimits

0x2b98,	// (0x00010ed9) main_postcard_pane_g1

0x2bae,	// (0x00010eef) main_postcard_pane_g2_ParamLimits

0x2bae,	// (0x00010eef) main_postcard_pane_g2

0x2bc4,	// (0x00010f05) main_postcard_pane_g3_ParamLimits

0x2bc4,	// (0x00010f05) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x0001d739) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x0001d739) main_postcard_pane_g

0x2bdb,	// (0x00010f1c) main_postcard_pane_g4

0xbb98,	// (0x00019ed9) smil_status_volume_pane_g2

0x2c1e,	// (0x00010f5f) postcard_pane_ParamLimits

0x2c1e,	// (0x00010f5f) postcard_pane

0xa9c5,	// (0x00018d06) postcard_pane_g1_ParamLimits

0xa9c5,	// (0x00018d06) postcard_pane_g1

0x2c60,	// (0x00010fa1) postcard_pane_g2_ParamLimits

0x2c60,	// (0x00010fa1) postcard_pane_g2

0x2c6c,	// (0x00010fad) postcard_pane_g3_ParamLimits

0x2c6c,	// (0x00010fad) postcard_pane_g3

0xa9d3,	// (0x00018d14) postcard_pane_g4_ParamLimits

0xa9d3,	// (0x00018d14) postcard_pane_g4

0x2c78,	// (0x00010fb9) postcard_pane_g5_ParamLimits

0x2c78,	// (0x00010fb9) postcard_pane_g5

0x2c8d,	// (0x00010fce) postcard_pane_g6_ParamLimits

0x2c8d,	// (0x00010fce) postcard_pane_g6

0xa9c5,	// (0x00018d06) postcard_pane_g7_ParamLimits

0xa9c5,	// (0x00018d06) postcard_pane_g7

0x0006,

0xf405,	// (0x0001d746) postcard_pane_g_ParamLimits

0xf405,	// (0x0001d746) postcard_pane_g

0x2ca1,	// (0x00010fe2) main_mp2_pane_g1_ParamLimits

0x2ca1,	// (0x00010fe2) main_mp2_pane_g1

0x2cad,	// (0x00010fee) main_mp2_pane_g2_ParamLimits

0x2cad,	// (0x00010fee) main_mp2_pane_g2

0x2cb9,	// (0x00010ffa) main_mp2_pane_g3_ParamLimits

0x2cb9,	// (0x00010ffa) main_mp2_pane_g3

0x0002,

0xf414,	// (0x0001d755) main_mp2_pane_g_ParamLimits

0xf414,	// (0x0001d755) main_mp2_pane_g

0x2cc5,	// (0x00011006) main_mp2_pane_t1_ParamLimits

0x2cc5,	// (0x00011006) main_mp2_pane_t1

0x2cda,	// (0x0001101b) main_mp2_pane_t2_ParamLimits

0x2cda,	// (0x0001101b) main_mp2_pane_t2

0x2cec,	// (0x0001102d) main_mp2_pane_t3_ParamLimits

0x2cec,	// (0x0001102d) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x0001d75c) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x0001d75c) main_mp2_pane_t

0x92d3,	// (0x00017614) pec_content_pane_ParamLimits

0x92d3,	// (0x00017614) pec_content_pane

0x9264,	// (0x000175a5) scroll_pane_cp015

0xa895,	// (0x00018bd6) pec_attribute_pane_ParamLimits

0xa895,	// (0x00018bd6) pec_attribute_pane

0x99ca,	// (0x00017d0b) pec_content_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) pec_content_pane_g1

0xa9e1,	// (0x00018d22) pec_content_pane_t1_ParamLimits

0xa9e1,	// (0x00018d22) pec_content_pane_t1

0xa9f5,	// (0x00018d36) pec_content_pane_t2_ParamLimits

0xa9f5,	// (0x00018d36) pec_content_pane_t2

0x0001,

0xf422,	// (0x0001d763) pec_content_pane_t_ParamLimits

0xf422,	// (0x0001d763) pec_content_pane_t

0x99bc,	// (0x00017cfd) list_single_graphic_pane_cp01_ParamLimits

0x99bc,	// (0x00017cfd) list_single_graphic_pane_cp01

0x994f,	// (0x00017c90) bg_popup_sub_pane_cp04

0xaa09,	// (0x00018d4a) popup_mup_playback_window_g1

0xaa15,	// (0x00018d56) popup_mup_playback_window_t1

0xaa2a,	// (0x00018d6b) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x0001d768) popup_mup_playback_window_t

0xaa61,	// (0x00018da2) main_image_pane_g1_ParamLimits

0xaa61,	// (0x00018da2) main_image_pane_g1

0xaaa4,	// (0x00018de5) scroll_pane_cp018_ParamLimits

0xaaa4,	// (0x00018de5) scroll_pane_cp018

0xaabc,	// (0x00018dfd) scroll_pane_cp016_ParamLimits

0xaabc,	// (0x00018dfd) scroll_pane_cp016

0x2db6,	// (0x000110f7) smil2_image_pane_ParamLimits

0x2db6,	// (0x000110f7) smil2_image_pane

0x2de6,	// (0x00011127) smil2_root_pane_ParamLimits

0x2de6,	// (0x00011127) smil2_root_pane

0x2e1e,	// (0x0001115f) smil2_text_pane_ParamLimits

0x2e1e,	// (0x0001115f) smil2_text_pane

0x9264,	// (0x000175a5) bg_list_pane_cp06

0x9264,	// (0x000175a5) grid_radio_pane

0x96f4,	// (0x00017a35) bg_popup_window_pane_cp06

0xa248,	// (0x00018589) main_fmradio_pane_t1

0xba18,	// (0x00019d59) heading_pane_cp04

0xa248,	// (0x00018589) main_fmradio_pane_t2

0xba20,	// (0x00019d61) popup_cale_lunar_info_window_g1

0xa248,	// (0x00018589) main_fmradio_pane_t3

0xba28,	// (0x00019d69) popup_cale_lunar_info_window_g2

0xa248,	// (0x00018589) main_fmradio_pane_t4

0x0001,

0xa248,	// (0x00018589) main_fmradio_pane_t5

0x0004,

0xf4f7,	// (0x0001d838) popup_cale_lunar_info_window_g

0xf287,	// (0x0001d5c8) main_fmradio_pane_t

0x9264,	// (0x000175a5) wait_bar_pane_cp03

0x99bc,	// (0x00017cfd) cell_fmradio_pane_ParamLimits

0x99bc,	// (0x00017cfd) cell_fmradio_pane

0x99ca,	// (0x00017d0b) cell_fmradio_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) cell_fmradio_pane_g1

0x9264,	// (0x000175a5) grid_highlight_pane_cp011

0xaaf0,	// (0x00018e31) poc_content_pane_ParamLimits

0xaaf0,	// (0x00018e31) poc_content_pane

0xab02,	// (0x00018e43) scroll_pane_cp019

0x2e9e,	// (0x000111df) popup_call_poc_act_window_ParamLimits

0x2e9e,	// (0x000111df) popup_call_poc_act_window

0x2ec2,	// (0x00011203) popup_call_poc_inact_window_ParamLimits

0x2ec2,	// (0x00011203) popup_call_poc_inact_window

0xf4d3,	// (0x0001d814) bg_popup_call_poc_act_pane_g

0xb990,	// (0x00019cd1) bg_popup_call_poc_inact_pane_g1

0xb998,	// (0x00019cd9) bg_popup_call_poc_inact_pane_g2

0xab0a,	// (0x00018e4b) popup_call_poc_act_window_g2

0xb9a0,	// (0x00019ce1) bg_popup_call_poc_inact_pane_g3

0xb9a8,	// (0x00019ce9) bg_popup_call_poc_inact_pane_g4

0xb9b0,	// (0x00019cf1) bg_popup_call_poc_inact_pane_g5

0xab12,	// (0x00018e53) popup_call_poc_act_window_t1_ParamLimits

0xab12,	// (0x00018e53) popup_call_poc_act_window_t1

0xab3a,	// (0x00018e7b) popup_call_poc_act_window_t2_ParamLimits

0xab3a,	// (0x00018e7b) popup_call_poc_act_window_t2

0xab62,	// (0x00018ea3) popup_call_poc_act_window_t3_ParamLimits

0xab62,	// (0x00018ea3) popup_call_poc_act_window_t3

0xab8a,	// (0x00018ecb) popup_call_poc_act_window_t4_ParamLimits

0xab8a,	// (0x00018ecb) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x0001d77d) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x0001d77d) popup_call_poc_act_window_t

0xb9b8,	// (0x00019cf9) bg_popup_call_poc_inact_pane_g6

0xb9c0,	// (0x00019d01) bg_popup_call_poc_inact_pane_g7

0xb9c8,	// (0x00019d09) bg_popup_call_poc_inact_pane_g8

0xab9c,	// (0x00018edd) popup_call_poc_inact_window_g2

0xb9d0,	// (0x00019d11) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c0,	// (0x0001d801) bg_popup_call_poc_inact_pane_g

0xaba4,	// (0x00018ee5) popup_call_poc_inact_window_t1_ParamLimits

0xaba4,	// (0x00018ee5) popup_call_poc_inact_window_t1

0xabb9,	// (0x00018efa) popup_call_poc_inact_window_t2_ParamLimits

0xabb9,	// (0x00018efa) popup_call_poc_inact_window_t2

0xabce,	// (0x00018f0f) popup_call_poc_inact_window_t3_ParamLimits

0xabce,	// (0x00018f0f) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x0001d786) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x0001d786) popup_call_poc_inact_window_t

0xbb10,	// (0x00019e51) context_pane_ParamLimits

0x36b0,	// (0x000119f1) signal_pane_ParamLimits

0x9ccd,	// (0x0001800e) main_call2_pane

0xbae9,	// (0x00019e2a) popup_phob_thumbnail2_window_ParamLimits

0xbae9,	// (0x00019e2a) popup_phob_thumbnail2_window

0xa975,	// (0x00018cb6) aid_hotspot_pointer_arrow_pane

0xa97d,	// (0x00018cbe) aid_hotspot_pointer_hand_pane

0x31a8,	// (0x000114e9) phob_pre_status_pane_g5

0x92d3,	// (0x00017614) cams_zoom_pane_ParamLimits

0x92d3,	// (0x00017614) image_vga_pane_ParamLimits

0x99ca,	// (0x00017d0b) main_camera_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) main_camera_pane_g2_ParamLimits

0x99ca,	// (0x00017d0b) main_camera_pane_g3_ParamLimits

0x99ca,	// (0x00017d0b) main_camera_pane_g4_ParamLimits

0x99ca,	// (0x00017d0b) main_camera_pane_g5_ParamLimits

0x99ca,	// (0x00017d0b) main_camera_pane_g6_ParamLimits

0x99ca,	// (0x00017d0b) main_camera_pane_g7_ParamLimits

0xf180,	// (0x0001d4c1) main_camera_pane_g_ParamLimits

0x9a1a,	// (0x00017d5b) main_camera_pane_t1_ParamLimits

0x9a1a,	// (0x00017d5b) main_camera_pane_t2_ParamLimits

0xf191,	// (0x0001d4d2) main_camera_pane_t_ParamLimits

0x994f,	// (0x00017c90) bg_popup_preview_window_pane_cp01_ParamLimits

0x994f,	// (0x00017c90) bg_popup_preview_window_pane_cp01

0xabe3,	// (0x00018f24) popup_phob_thumbnail2_window_g1_ParamLimits

0xabe3,	// (0x00018f24) popup_phob_thumbnail2_window_g1

0x96f4,	// (0x00017a35) call2_cli_visual_pane

0x2ef6,	// (0x00011237) popup_call2_audio_conf_window_ParamLimits

0x2ef6,	// (0x00011237) popup_call2_audio_conf_window

0x2f16,	// (0x00011257) popup_call2_audio_first_window_ParamLimits

0x2f16,	// (0x00011257) popup_call2_audio_first_window

0x2fac,	// (0x000112ed) popup_call2_audio_in_window_ParamLimits

0x2fac,	// (0x000112ed) popup_call2_audio_in_window

0x2ff4,	// (0x00011335) popup_call2_audio_out_window_ParamLimits

0x2ff4,	// (0x00011335) popup_call2_audio_out_window

0x305e,	// (0x0001139f) popup_call2_audio_second_window_ParamLimits

0x305e,	// (0x0001139f) popup_call2_audio_second_window

0x30c4,	// (0x00011405) popup_call2_audio_wait_window_ParamLimits

0x30c4,	// (0x00011405) popup_call2_audio_wait_window

0x96f4,	// (0x00017a35) bg_popup_call2_act_pane_cp03

0x9931,	// (0x00017c72) list_conf_pane_cp

0xabef,	// (0x00018f30) popup_call2_audio_conf_window_t1

0xa493,	// (0x000187d4) list_single_graphic_popup_conf2_pane_ParamLimits

0xa493,	// (0x000187d4) list_single_graphic_popup_conf2_pane

0xa4a6,	// (0x000187e7) list_highlight_pane_cp04

0xabfd,	// (0x00018f3e) list_single_graphic_popup_conf2_pane_g1

0xa4b7,	// (0x000187f8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x0001d78d) list_single_graphic_popup_conf2_pane_g

0xac07,	// (0x00018f48) list_single_graphic_popup_conf2_pane_t1

0xac15,	// (0x00018f56) bg_popup_call2_act_pane_cp01_ParamLimits

0xac15,	// (0x00018f56) bg_popup_call2_act_pane_cp01

0xac9f,	// (0x00018fe0) call_type_pane_cp05_ParamLimits

0xac9f,	// (0x00018fe0) call_type_pane_cp05

0xacf3,	// (0x00019034) popup_call2_audio_second_window_g1_ParamLimits

0xacf3,	// (0x00019034) popup_call2_audio_second_window_g1

0xad47,	// (0x00019088) popup_call2_audio_second_window_g2_ParamLimits

0xad47,	// (0x00019088) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x0001d792) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x0001d792) popup_call2_audio_second_window_g

0xadac,	// (0x000190ed) popup_call2_audio_second_window_t1_ParamLimits

0xadac,	// (0x000190ed) popup_call2_audio_second_window_t1

0xae67,	// (0x000191a8) popup_call2_audio_second_window_t2_ParamLimits

0xae67,	// (0x000191a8) popup_call2_audio_second_window_t2

0xaeba,	// (0x000191fb) popup_call2_audio_second_window_t3_ParamLimits

0xaeba,	// (0x000191fb) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x0001d799) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x0001d799) popup_call2_audio_second_window_t

0x96f4,	// (0x00017a35) bg_popup_call2_in_pane_cp02

0x96fe,	// (0x00017a3f) call_type_pane_cp04

0x30fe,	// (0x0001143f) popup_call2_audio_wait_window_g1

0x3106,	// (0x00011447) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x0001d7a2) popup_call2_audio_wait_window_g

0x9716,	// (0x00017a57) popup_call2_audio_wait_window_t3

0xafad,	// (0x000192ee) bg_popup_call2_act_pane_ParamLimits

0xafad,	// (0x000192ee) bg_popup_call2_act_pane

0xb06d,	// (0x000193ae) call_type_pane_cp03_ParamLimits

0xb06d,	// (0x000193ae) call_type_pane_cp03

0xb0d1,	// (0x00019412) popup_call2_audio_first_window_g1_ParamLimits

0xb0d1,	// (0x00019412) popup_call2_audio_first_window_g1

0xb141,	// (0x00019482) popup_call2_audio_first_window_g2_ParamLimits

0xb141,	// (0x00019482) popup_call2_audio_first_window_g2

0xb1a5,	// (0x000194e6) popup_call2_audio_first_window_g3_ParamLimits

0xb1a5,	// (0x000194e6) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x0001d7a7) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x0001d7a7) popup_call2_audio_first_window_g

0xb22d,	// (0x0001956e) popup_call2_audio_first_window_t1_ParamLimits

0xb22d,	// (0x0001956e) popup_call2_audio_first_window_t1

0xb330,	// (0x00019671) popup_call2_audio_first_window_t4_ParamLimits

0xb330,	// (0x00019671) popup_call2_audio_first_window_t4

0xb413,	// (0x00019754) popup_call2_audio_first_window_t5_ParamLimits

0xb413,	// (0x00019754) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x0001d7b2) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x0001d7b2) popup_call2_audio_first_window_t

0x9947,	// (0x00017c88) bg_popup_call2_act_pane_g1

0xba30,	// (0x00019d71) popup_cale_lunar_info_window_t1

0xba3e,	// (0x00019d7f) popup_cale_lunar_info_window_t2

0xba4c,	// (0x00019d8d) popup_cale_lunar_info_window_t3

0x96f4,	// (0x00017a35) bg_popup_call2_bubble_pane

0xb514,	// (0x00019855) bg_popup_call2_in_pane_cp01_ParamLimits

0xb514,	// (0x00019855) bg_popup_call2_in_pane_cp01

0x93d0,	// (0x00017711) call_type_pane_cp02

0x310e,	// (0x0001144f) popup_call2_audio_out_window_g1_ParamLimits

0x310e,	// (0x0001144f) popup_call2_audio_out_window_g1

0xb55c,	// (0x0001989d) popup_call2_audio_out_window_g2_ParamLimits

0xb55c,	// (0x0001989d) popup_call2_audio_out_window_g2

0x313a,	// (0x0001147b) popup_call2_audio_out_window_g3_ParamLimits

0x313a,	// (0x0001147b) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x0001d7bb) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x0001d7bb) popup_call2_audio_out_window_g

0xb593,	// (0x000198d4) popup_call2_audio_out_window_t1_ParamLimits

0xb593,	// (0x000198d4) popup_call2_audio_out_window_t1

0xb5f2,	// (0x00019933) popup_call2_audio_out_window_t2_ParamLimits

0xb5f2,	// (0x00019933) popup_call2_audio_out_window_t2

0xb646,	// (0x00019987) popup_call2_audio_out_window_t3_ParamLimits

0xb646,	// (0x00019987) popup_call2_audio_out_window_t3

0xb65c,	// (0x0001999d) popup_call2_audio_out_window_t4_ParamLimits

0xb65c,	// (0x0001999d) popup_call2_audio_out_window_t4

0xb672,	// (0x000199b3) popup_call2_audio_out_window_t5_ParamLimits

0xb672,	// (0x000199b3) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x0001d7c4) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x0001d7c4) popup_call2_audio_out_window_t

0xb6d6,	// (0x00019a17) bg_popup_call2_in_pane_ParamLimits

0xb6d6,	// (0x00019a17) bg_popup_call2_in_pane

0xb732,	// (0x00019a73) popup_call2_audio_in_window_g1_ParamLimits

0xb732,	// (0x00019a73) popup_call2_audio_in_window_g1

0xb76a,	// (0x00019aab) popup_call2_audio_in_window_g2_ParamLimits

0xb76a,	// (0x00019aab) popup_call2_audio_in_window_g2

0xb7a2,	// (0x00019ae3) popup_call2_audio_in_window_g3_ParamLimits

0xb7a2,	// (0x00019ae3) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x0001d7d1) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x0001d7d1) popup_call2_audio_in_window_g

0xb7fa,	// (0x00019b3b) popup_call2_audio_in_window_t1_ParamLimits

0xb7fa,	// (0x00019b3b) popup_call2_audio_in_window_t1

0xb87a,	// (0x00019bbb) popup_call2_audio_in_window_t2_ParamLimits

0xb87a,	// (0x00019bbb) popup_call2_audio_in_window_t2

0xb8fa,	// (0x00019c3b) popup_call2_audio_in_window_t3_ParamLimits

0xb8fa,	// (0x00019c3b) popup_call2_audio_in_window_t3

0xb914,	// (0x00019c55) popup_call2_audio_in_window_t4_ParamLimits

0xb914,	// (0x00019c55) popup_call2_audio_in_window_t4

0xb926,	// (0x00019c67) popup_call2_audio_in_window_t5_ParamLimits

0xb926,	// (0x00019c67) popup_call2_audio_in_window_t5

0xb93b,	// (0x00019c7c) popup_call2_audio_in_window_t6_ParamLimits

0xb93b,	// (0x00019c7c) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x0001d7da) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x0001d7da) popup_call2_audio_in_window_t

0x9947,	// (0x00017c88) bg_popup_call2_in_pane_g1

0xba5a,	// (0x00019d9b) popup_cale_lunar_info_window_t4

0x0003,

0xf4fc,	// (0x0001d83d) popup_cale_lunar_info_window_t

0x994f,	// (0x00017c90) bg_popup_call2_rect_pane_ParamLimits

0x994f,	// (0x00017c90) bg_popup_call2_rect_pane

0x96f4,	// (0x00017a35) call2_cli_visual_graphic_pane

0x96f4,	// (0x00017a35) call2_cli_visual_text_pane

0xbbab,	// (0x00019eec) smil_status_volume_pane_g3

0x0002,

0x9967,	// (0x00017ca8) call2_cli_visual_graphic_pane_g1

0x9967,	// (0x00017ca8) call2_cli_visual_graphic_pane_g2

0x9967,	// (0x00017ca8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x0001d7e7) call2_cli_visual_graphic_pane_g

0xb950,	// (0x00019c91) bg_popup_call2_rect_pane_g1

0x9b8c,	// (0x00017ecd) bg_popup_call2_rect_pane_g2

0xb958,	// (0x00019c99) bg_popup_call2_rect_pane_g3

0xb960,	// (0x00019ca1) bg_popup_call2_rect_pane_g4

0xb968,	// (0x00019ca9) bg_popup_call2_rect_pane_g5

0xb970,	// (0x00019cb1) bg_popup_call2_rect_pane_g6

0xb978,	// (0x00019cb9) bg_popup_call2_rect_pane_g7

0xb980,	// (0x00019cc1) bg_popup_call2_rect_pane_g8

0xb988,	// (0x00019cc9) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x0001d7ee) bg_popup_call2_rect_pane_g

0xb990,	// (0x00019cd1) bg_popup_call2_bubble_pane_g1

0xb998,	// (0x00019cd9) bg_popup_call2_bubble_pane_g2

0xb9a0,	// (0x00019ce1) bg_popup_call2_bubble_pane_g3

0xb9a8,	// (0x00019ce9) bg_popup_call2_bubble_pane_g4

0xb9b0,	// (0x00019cf1) bg_popup_call2_bubble_pane_g5

0xb9b8,	// (0x00019cf9) bg_popup_call2_bubble_pane_g6

0xb9c0,	// (0x00019d01) bg_popup_call2_bubble_pane_g7

0xb9c8,	// (0x00019d09) bg_popup_call2_bubble_pane_g8

0xb9d0,	// (0x00019d11) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x0001d801) bg_popup_call2_bubble_pane_g

0x0d90,	// (0x0000f0d1) aid_cale_week_size_cell_pane

0x1336,	// (0x0000f677) aid_cams_cif_uncrop_pane_ParamLimits

0x1336,	// (0x0000f677) aid_cams_cif_uncrop_pane

0x92d3,	// (0x00017614) aid_cams_size_cell_ParamLimits

0x92d3,	// (0x00017614) aid_cams_size_cell

0x92d3,	// (0x00017614) grid_cams_pane_ParamLimits

0x92d3,	// (0x00017614) linegrid_cams_pane_ParamLimits

0x1554,	// (0x0000f895) call_video_pane_t1

0x1572,	// (0x0000f8b3) call_video_pane_t2

0x0001,

0xf1dd,	// (0x0001d51e) call_video_pane_t

0x19a0,	// (0x0000fce1) aid_cale_month_size_cell_pane_ParamLimits

0x19a0,	// (0x0000fce1) aid_cale_month_size_cell_pane

0xf540,	// (0x0001d881) smil_status_volume_pane_g

0xbbb8,	// (0x00019ef9) volume_smil_pane_ParamLimits

0x9276,	// (0x000175b7) aid_popup2_width_pane

0x0d07,	// (0x0000f048) cell_qdial_pane_g4_ParamLimits

0x0d07,	// (0x0000f048) cell_qdial_pane_g4

0x2704,	// (0x00010a45) aid_blid_cardinal_pane_ParamLimits

0x2710,	// (0x00010a51) aid_blid_destination_pane_ParamLimits

0x2710,	// (0x00010a51) aid_blid_destination_pane

0x994f,	// (0x00017c90) bg_popup_call_poc_act_pane_ParamLimits

0x994f,	// (0x00017c90) bg_popup_call_poc_act_pane

0x994f,	// (0x00017c90) bg_popup_call_poc_inact_pane_ParamLimits

0x994f,	// (0x00017c90) bg_popup_call_poc_inact_pane

0xb9d8,	// (0x00019d19) bg_popup_call_poc_act_pane_g1

0xb9e0,	// (0x00019d21) bg_popup_call_poc_act_pane_g2

0xb9e8,	// (0x00019d29) bg_popup_call_poc_act_pane_g3

0xb9a8,	// (0x00019ce9) bg_popup_call_poc_act_pane_g4

0xb9b0,	// (0x00019cf1) bg_popup_call_poc_act_pane_g5

0xb9f0,	// (0x00019d31) bg_popup_call_poc_act_pane_g6

0xb9c0,	// (0x00019d01) bg_popup_call_poc_act_pane_g7

0xb9f8,	// (0x00019d39) bg_popup_call_poc_act_pane_g8

0x96f4,	// (0x00017a35) main_usb_pane

0xbac4,	// (0x00019e05) popup_cale_lunar_info_window

0x184c,	// (0x0000fb8d) im_reading_pane_t1_ParamLimits

0x9d98,	// (0x000180d9) list_im_pane_ParamLimits

0x9da9,	// (0x000180ea) scroll_pane_cp07_ParamLimits

0x96f4,	// (0x00017a35) grid_highlight_pane_cp012

0x994f,	// (0x00017c90) mup_scale_pane_ParamLimits

0x99ca,	// (0x00017d0b) main_usb_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) main_usb_pane_g1

0x99ca,	// (0x00017d0b) main_usb_pane_g2_ParamLimits

0x99ca,	// (0x00017d0b) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x0001d4fd) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x0001d4fd) main_usb_pane_g

0x9a1a,	// (0x00017d5b) main_usb_pane_t1_ParamLimits

0x9a1a,	// (0x00017d5b) main_usb_pane_t1

0x9a1a,	// (0x00017d5b) main_usb_pane_t2_ParamLimits

0x9a1a,	// (0x00017d5b) main_usb_pane_t2

0x9a1a,	// (0x00017d5b) main_usb_pane_t3_ParamLimits

0x9a1a,	// (0x00017d5b) main_usb_pane_t3

0x9a1a,	// (0x00017d5b) main_usb_pane_t4_ParamLimits

0x9a1a,	// (0x00017d5b) main_usb_pane_t4

0x9a1a,	// (0x00017d5b) main_usb_pane_t5_ParamLimits

0x9a1a,	// (0x00017d5b) main_usb_pane_t5

0x9a1a,	// (0x00017d5b) main_usb_pane_t6_ParamLimits

0x9a1a,	// (0x00017d5b) main_usb_pane_t6

0x0005,

0xf4ea,	// (0x0001d82b) main_usb_pane_t_ParamLimits

0x26b3,	// (0x000109f4) aid_text_placing

0x26bc,	// (0x000109fd) main_location2_pane_t1_ParamLimits

0x26ce,	// (0x00010a0f) main_location2_pane_t2_ParamLimits

0x26e0,	// (0x00010a21) main_location2_pane_t3_ParamLimits

0x26f2,	// (0x00010a33) main_location2_pane_t4_ParamLimits

0x26f2,	// (0x00010a33) main_location2_pane_t4

0xf319,	// (0x0001d65a) main_location2_pane_t_ParamLimits

0x997d,	// (0x00017cbe) find_pinb_pane_g2_ParamLimits

0x997d,	// (0x00017cbe) find_pinb_pane_g2

0x0001,

0xf095,	// (0x0001d3d6) find_pinb_pane_g_ParamLimits

0xf095,	// (0x0001d3d6) find_pinb_pane_g

0x9989,	// (0x00017cca) find_pinb_pane_t1_ParamLimits

0x999b,	// (0x00017cdc) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x0001d3db) find_pinb_pane_t_ParamLimits

0x96f4,	// (0x00017a35) main_call3_pane

0x1e8b,	// (0x000101cc) cale_month_day_heading_pane_t1_ParamLimits

0x1f11,	// (0x00010252) cale_month_day_heading_pane_t2_ParamLimits

0x1f8a,	// (0x000102cb) cale_month_day_heading_pane_t3_ParamLimits

0x2003,	// (0x00010344) cale_month_day_heading_pane_t4_ParamLimits

0x2084,	// (0x000103c5) cale_month_day_heading_pane_t5_ParamLimits

0x210d,	// (0x0001044e) cale_month_day_heading_pane_t6_ParamLimits

0x2196,	// (0x000104d7) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x0001d556) cale_month_day_heading_pane_t_ParamLimits

0x9fff,	// (0x00018340) smil_status_volume_pane

0x2c3c,	// (0x00010f7d) postcard_address_pane_ParamLimits

0x2c3c,	// (0x00010f7d) postcard_address_pane

0x2c4e,	// (0x00010f8f) postcard_message_pane_ParamLimits

0x2c4e,	// (0x00010f8f) postcard_message_pane

0x3166,	// (0x000114a7) call2_cli_visual_pane_t1_ParamLimits

0x3166,	// (0x000114a7) call2_cli_visual_pane_t1

0xbbe5,	// (0x00019f26) postcard_message_pane_t1_ParamLimits

0xbbe5,	// (0x00019f26) postcard_message_pane_t1

0xbbcd,	// (0x00019f0e) postcard_address_pane_t1_ParamLimits

0xbbcd,	// (0x00019f0e) postcard_address_pane_t1

0x3862,	// (0x00011ba3) popup_call3_audio_in_window_ParamLimits

0x3862,	// (0x00011ba3) popup_call3_audio_in_window

0x36ed,	// (0x00011a2e) bg_popup_call3_in_pane_ParamLimits

0x36ed,	// (0x00011a2e) bg_popup_call3_in_pane

0x3763,	// (0x00011aa4) popup_call3_audio_in_window_g1_ParamLimits

0x3763,	// (0x00011aa4) popup_call3_audio_in_window_g1

0x3783,	// (0x00011ac4) popup_call3_audio_in_window_g2_ParamLimits

0x3783,	// (0x00011ac4) popup_call3_audio_in_window_g2

0x37a3,	// (0x00011ae4) popup_call3_audio_in_window_g3_ParamLimits

0x37a3,	// (0x00011ae4) popup_call3_audio_in_window_g3

0x0003,

0xf547,	// (0x0001d888) popup_call3_audio_in_window_g_ParamLimits

0xf547,	// (0x0001d888) popup_call3_audio_in_window_g

0x37d4,	// (0x00011b15) popup_call3_audio_in_window_t1_ParamLimits

0x37d4,	// (0x00011b15) popup_call3_audio_in_window_t1

0x3812,	// (0x00011b53) popup_call3_audio_in_window_t2_ParamLimits

0x3812,	// (0x00011b53) popup_call3_audio_in_window_t2

0x3850,	// (0x00011b91) popup_call3_audio_in_window_t3_ParamLimits

0x3850,	// (0x00011b91) popup_call3_audio_in_window_t3

0x0002,

0xf550,	// (0x0001d891) popup_call3_audio_in_window_t_ParamLimits

0xf550,	// (0x0001d891) popup_call3_audio_in_window_t

0x9ccd,	// (0x0001800e) bg_popup_call3_rect_pane

0xb950,	// (0x00019c91) bg_popup_call3_rect_pane_g1

0x9b8c,	// (0x00017ecd) bg_popup_call3_rect_pane_g2

0xb958,	// (0x00019c99) bg_popup_call3_rect_pane_g3

0xb960,	// (0x00019ca1) bg_popup_call3_rect_pane_g4

0xb968,	// (0x00019ca9) bg_popup_call3_rect_pane_g5

0xb970,	// (0x00019cb1) bg_popup_call3_rect_pane_g6

0xb978,	// (0x00019cb9) bg_popup_call3_rect_pane_g7

0x9264,	// (0x000175a5) mup_visualizer_osc_pane

0x9264,	// (0x000175a5) mup_visualizer_spec_pane

0x371d,	// (0x00011a5e) call3_video_qcif_pane_ParamLimits

0x371d,	// (0x00011a5e) call3_video_qcif_pane

0x3730,	// (0x00011a71) call3_video_qcif_uncrop_pane_ParamLimits

0x3730,	// (0x00011a71) call3_video_qcif_uncrop_pane

0x373e,	// (0x00011a7f) call3_video_subqcif_pane_ParamLimits

0x373e,	// (0x00011a7f) call3_video_subqcif_pane

0x3752,	// (0x00011a93) call3_video_subqcif_uncrop_pane_ParamLimits

0x3752,	// (0x00011a93) call3_video_subqcif_uncrop_pane

0x37c3,	// (0x00011b04) popup_call3_audio_in_window_g4_ParamLimits

0x37c3,	// (0x00011b04) popup_call3_audio_in_window_g4

0x9264,	// (0x000175a5) mup_spec_half_pane

0x9264,	// (0x000175a5) mup_spec_half_pane_cp

0x9264,	// (0x000175a5) mup_osc_middle_pane

0x9a10,	// (0x00017d51) mup_visualizer_osc_pane_g1

0xbb5e,	// (0x00019e9f) mup_spec_bar_pane_ParamLimits

0xbb5e,	// (0x00019e9f) mup_spec_bar_pane

0x9a10,	// (0x00017d51) mup_spec_bar_pane_g1

0x9a10,	// (0x00017d51) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x0001d3f0) mup_spec_bar_pane_g

0x0d90,	// (0x0000f0d1) aid_cale_week_size_cell_pane_ParamLimits

0x0daa,	// (0x0000f0eb) bg_cale_heading_pane_ParamLimits

0x9c2f,	// (0x00017f70) bg_cale_pane_cp01_ParamLimits

0x0dc2,	// (0x0000f103) cale_week_corner_pane_ParamLimits

0x0de1,	// (0x0000f122) cale_week_day_heading_pane_ParamLimits

0x0dfe,	// (0x0000f13f) cale_week_scroll_pane_g1_ParamLimits

0x0e11,	// (0x0000f152) cale_week_scroll_pane_g2_ParamLimits

0x0e29,	// (0x0000f16a) cale_week_scroll_pane_g3_ParamLimits

0x0e41,	// (0x0000f182) cale_week_scroll_pane_g4_ParamLimits

0x0e59,	// (0x0000f19a) cale_week_scroll_pane_g5_ParamLimits

0x0e79,	// (0x0000f1ba) cale_week_scroll_pane_g6_ParamLimits

0x0e99,	// (0x0000f1da) cale_week_scroll_pane_g7_ParamLimits

0x0eb9,	// (0x0000f1fa) cale_week_scroll_pane_g8_ParamLimits

0x0edd,	// (0x0000f21e) cale_week_scroll_pane_g9_ParamLimits

0x0ef5,	// (0x0000f236) cale_week_scroll_pane_g10_ParamLimits

0x0f0d,	// (0x0000f24e) cale_week_scroll_pane_g11_ParamLimits

0x0f25,	// (0x0000f266) cale_week_scroll_pane_g12_ParamLimits

0x0f3d,	// (0x0000f27e) cale_week_scroll_pane_g13_ParamLimits

0x0f3d,	// (0x0000f27e) cale_week_scroll_pane_g14_ParamLimits

0x0f3d,	// (0x0000f27e) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x0001d467) cale_week_scroll_pane_g_ParamLimits

0x0f79,	// (0x0000f2ba) cale_week_time_pane_ParamLimits

0x0f9d,	// (0x0000f2de) grid_cale_week_pane_ParamLimits

0x9c4c,	// (0x00017f8d) listscroll_cale_week_pane_t1

0x9c5e,	// (0x00017f9f) scroll_pane_cp08_ParamLimits

0x1a00,	// (0x0000fd41) cale_month_corner_pane_ParamLimits

0x9fc9,	// (0x0001830a) cale_month_pane_t1

0x1e1e,	// (0x0001015f) cale_month_week_pane_ParamLimits

0x2533,	// (0x00010874) popup_call_status_window_g1_ParamLimits

0x2547,	// (0x00010888) popup_call_status_window_g2_ParamLimits

0x255b,	// (0x0001089c) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x0001d5e1) popup_call_status_window_g_ParamLimits

0xa3bf,	// (0x00018700) aid_call2_pane

0x2a58,	// (0x00010d99) msg_header_pane_g1

0x2c3c,	// (0x00010f7d) postcard_address2_pane_ParamLimits

0x2c3c,	// (0x00010f7d) postcard_address2_pane

0x2c4e,	// (0x00010f8f) postcard_message2_pane_ParamLimits

0x2c4e,	// (0x00010f8f) postcard_message2_pane

0x36be,	// (0x000119ff) message2_row_pane_ParamLimits

0x36be,	// (0x000119ff) message2_row_pane

0x36da,	// (0x00011a1b) address2_row_pane_ParamLimits

0x36da,	// (0x00011a1b) address2_row_pane

0xbb2b,	// (0x00019e6c) postcard_message2_row_pane_g1

0xbb33,	// (0x00019e74) postcard_message2_row_pane_t1

0xbb2b,	// (0x00019e6c) address2_row_pane_g1

0xbb33,	// (0x00019e74) address2_row_pane_t1

0x12cd,	// (0x0000f60e) aid_size_cell_vorec

0x96f4,	// (0x00017a35) main_rss_pane

0xbb41,	// (0x00019e82) rss_list_single_pane_ParamLimits

0xbb41,	// (0x00019e82) rss_list_single_pane

0xbb4f,	// (0x00019e90) rss_list_single_pane_t1

0xbb4f,	// (0x00019e90) rss_list_single_pane_t2

0x0001,

0xf53b,	// (0x0001d87c) rss_list_single_pane_t

0x96f4,	// (0x00017a35) main_camera2_pane

0x96f4,	// (0x00017a35) main_video2_pane

0xbc01,	// (0x00019f42) cams_zoom_pane_cp2_ParamLimits

0xbc01,	// (0x00019f42) cams_zoom_pane_cp2

0xbc01,	// (0x00019f42) image2_vga_pane_ParamLimits

0xbc01,	// (0x00019f42) image2_vga_pane

0xbc0f,	// (0x00019f50) main_camera2_pane_g1_ParamLimits

0xbc0f,	// (0x00019f50) main_camera2_pane_g1

0xbc0f,	// (0x00019f50) main_camera2_pane_g2_ParamLimits

0xbc0f,	// (0x00019f50) main_camera2_pane_g2

0xbc0f,	// (0x00019f50) main_camera2_pane_g3_ParamLimits

0xbc0f,	// (0x00019f50) main_camera2_pane_g3

0xbc0f,	// (0x00019f50) main_camera2_pane_g4_ParamLimits

0xbc0f,	// (0x00019f50) main_camera2_pane_g4

0xbc0f,	// (0x00019f50) main_camera2_pane_g5_ParamLimits

0xbc0f,	// (0x00019f50) main_camera2_pane_g5

0xbc0f,	// (0x00019f50) main_camera2_pane_g6_ParamLimits

0xbc0f,	// (0x00019f50) main_camera2_pane_g6

0xbc0f,	// (0x00019f50) main_camera2_pane_g7_ParamLimits

0xbc0f,	// (0x00019f50) main_camera2_pane_g7

0xbc0f,	// (0x00019f50) main_camera2_pane_g8_ParamLimits

0xbc0f,	// (0x00019f50) main_camera2_pane_g8

0x0008,

0xf557,	// (0x0001d898) main_camera2_pane_g_ParamLimits

0xf557,	// (0x0001d898) main_camera2_pane_g

0x3884,	// (0x00011bc5) main_camera2_pane_t1_ParamLimits

0x3884,	// (0x00011bc5) main_camera2_pane_t1

0x3884,	// (0x00011bc5) main_camera2_pane_t2_ParamLimits

0x3884,	// (0x00011bc5) main_camera2_pane_t2

0x3884,	// (0x00011bc5) main_camera2_pane_t3_ParamLimits

0x3884,	// (0x00011bc5) main_camera2_pane_t3

0x3884,	// (0x00011bc5) main_camera2_pane_t4_ParamLimits

0x3884,	// (0x00011bc5) main_camera2_pane_t4

0x0006,

0xf56a,	// (0x0001d8ab) main_camera2_pane_t_ParamLimits

0xf56a,	// (0x0001d8ab) main_camera2_pane_t

0xbc31,	// (0x00019f72) cams_zoom_pane_cp4_ParamLimits

0xbc31,	// (0x00019f72) cams_zoom_pane_cp4

0xbc3f,	// (0x00019f80) image2_cif_pane_ParamLimits

0xbc3f,	// (0x00019f80) image2_cif_pane

0x92d3,	// (0x00017614) image2_subqcif_pane_ParamLimits

0x92d3,	// (0x00017614) image2_subqcif_pane

0x3898,	// (0x00011bd9) main_video2_pane_g1_ParamLimits

0x3898,	// (0x00011bd9) main_video2_pane_g1

0x3898,	// (0x00011bd9) main_video2_pane_g2_ParamLimits

0x3898,	// (0x00011bd9) main_video2_pane_g2

0x3898,	// (0x00011bd9) main_video2_pane_g3_ParamLimits

0x3898,	// (0x00011bd9) main_video2_pane_g3

0x3898,	// (0x00011bd9) main_video2_pane_g4_ParamLimits

0x3898,	// (0x00011bd9) main_video2_pane_g4

0x3898,	// (0x00011bd9) main_video2_pane_g5_ParamLimits

0x3898,	// (0x00011bd9) main_video2_pane_g5

0x3898,	// (0x00011bd9) main_video2_pane_g6_ParamLimits

0x3898,	// (0x00011bd9) main_video2_pane_g6

0x0005,

0xf579,	// (0x0001d8ba) main_video2_pane_g_ParamLimits

0xf579,	// (0x0001d8ba) main_video2_pane_g

0x38a6,	// (0x00011be7) main_video2_pane_t1_ParamLimits

0x38a6,	// (0x00011be7) main_video2_pane_t1

0x38a6,	// (0x00011be7) main_video2_pane_t2_ParamLimits

0x38a6,	// (0x00011be7) main_video2_pane_t2

0x38a6,	// (0x00011be7) main_video2_pane_t3_ParamLimits

0x38a6,	// (0x00011be7) main_video2_pane_t3

0x0002,

0xf586,	// (0x0001d8c7) main_video2_pane_t_ParamLimits

0xf586,	// (0x0001d8c7) main_video2_pane_t

0x320a,	// (0x0001154b) call_muted_g2

0x0001,

0xf52d,	// (0x0001d86e) call_muted_g

0x96f4,	// (0x00017a35) main_mup2_pane

0xa873,	// (0x00018bb4) main_mup2_pane_g1_ParamLimits

0xa873,	// (0x00018bb4) main_mup2_pane_g1

0xa873,	// (0x00018bb4) main_mup2_pane_g2_ParamLimits

0xa873,	// (0x00018bb4) main_mup2_pane_g2

0x9a10,	// (0x00017d51) main_mup_pane_g13_cp1

0x9264,	// (0x000175a5) mup_volume_pane_cp1

0xa873,	// (0x00018bb4) main_mup2_pane_g4_ParamLimits

0xa873,	// (0x00018bb4) main_mup2_pane_g4

0xa873,	// (0x00018bb4) main_mup2_pane_g5_ParamLimits

0xa873,	// (0x00018bb4) main_mup2_pane_g5

0xa873,	// (0x00018bb4) main_mup2_pane_g6_ParamLimits

0xa873,	// (0x00018bb4) main_mup2_pane_g6

0xa873,	// (0x00018bb4) main_mup2_pane_g7_ParamLimits

0xa873,	// (0x00018bb4) main_mup2_pane_g7

0x0006,

0xf58d,	// (0x0001d8ce) main_mup2_pane_g_ParamLimits

0xf58d,	// (0x0001d8ce) main_mup2_pane_g

0xa881,	// (0x00018bc2) main_mup2_pane_t1_ParamLimits

0xa881,	// (0x00018bc2) main_mup2_pane_t1

0xa881,	// (0x00018bc2) main_mup2_pane_t2_ParamLimits

0xa881,	// (0x00018bc2) main_mup2_pane_t2

0xa881,	// (0x00018bc2) main_mup2_pane_t3_ParamLimits

0xa881,	// (0x00018bc2) main_mup2_pane_t3

0xa881,	// (0x00018bc2) main_mup2_pane_t4_ParamLimits

0xa881,	// (0x00018bc2) main_mup2_pane_t4

0xa881,	// (0x00018bc2) main_mup2_pane_t5_ParamLimits

0xa881,	// (0x00018bc2) main_mup2_pane_t5

0xa881,	// (0x00018bc2) main_mup2_pane_t6_ParamLimits

0xa881,	// (0x00018bc2) main_mup2_pane_t6

0x0005,

0xf59c,	// (0x0001d8dd) main_mup2_pane_t_ParamLimits

0xf59c,	// (0x0001d8dd) main_mup2_pane_t

0xa895,	// (0x00018bd6) mup2_visualizer_pane_ParamLimits

0xa895,	// (0x00018bd6) mup2_visualizer_pane

0xa895,	// (0x00018bd6) mup_progress_pane_cp_ParamLimits

0xa895,	// (0x00018bd6) mup_progress_pane_cp

0xbc4d,	// (0x00019f8e) mup_volume_pane_cp_ParamLimits

0xbc4d,	// (0x00019f8e) mup_volume_pane_cp

0x99ca,	// (0x00017d0b) mup2_visualizer_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) mup2_visualizer_pane_g1

0x99d8,	// (0x00017d19) mup2_visualizer_pane_g2_ParamLimits

0x99d8,	// (0x00017d19) mup2_visualizer_pane_g2

0x99d8,	// (0x00017d19) mup2_visualizer_pane_g3_ParamLimits

0x99d8,	// (0x00017d19) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x0001d3e0) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x0001d3e0) mup2_visualizer_pane_g

0x9264,	// (0x000175a5) aid_size_cell_fmradio

0x33bc,	// (0x000116fd) aid_height_parent_landcape

0x9e27,	// (0x00018168) wml_content_pane_cp

0x9e2f,	// (0x00018170) wml_tabs_pane

0x9e38,	// (0x00018179) popup_wml_miniature_window

0x9e40,	// (0x00018181) scroll_pane_cp021

0x9e54,	// (0x00018195) wml_content_pane_comp8

0x96f4,	// (0x00017a35) bg_popup_sub_pane_cp05

0xbc63,	// (0x00019fa4) popup_wml_miniature_window_g1

0xbc6b,	// (0x00019fac) wml_miniature_view_pane

0x38ba,	// (0x00011bfb) aid_size_wml_view

0x38c2,	// (0x00011c03) wml_miniature_view_pane_g1

0x38cb,	// (0x00011c0c) wml_miniature_view_pane_g2

0x38d4,	// (0x00011c15) wml_miniature_view_pane_g3

0x38dc,	// (0x00011c1d) wml_miniature_view_pane_g4

0x38e4,	// (0x00011c25) wml_miniature_view_pane_g5

0x38ec,	// (0x00011c2d) wml_miniature_view_pane_g6

0x38f4,	// (0x00011c35) wml_miniature_view_pane_g7

0x38fc,	// (0x00011c3d) wml_miniature_view_pane_g8

0x0007,

0xf5a9,	// (0x0001d8ea) wml_miniature_view_pane_g

0xbc73,	// (0x00019fb4) background_graphic_ParamLimits

0xbc73,	// (0x00019fb4) background_graphic

0xbc7f,	// (0x00019fc0) wml_tabs_2_pane

0xbc88,	// (0x00019fc9) wml_tabs_3_pane_ParamLimits

0xbc88,	// (0x00019fc9) wml_tabs_3_pane

0xbc9a,	// (0x00019fdb) wml_tabs_4_pane_ParamLimits

0xbc9a,	// (0x00019fdb) wml_tabs_4_pane

0xbcb0,	// (0x00019ff1) wml_tabs_5_pane_ParamLimits

0xbcb0,	// (0x00019ff1) wml_tabs_5_pane

0xbcca,	// (0x0001a00b) wml_tabs_pane_g2_ParamLimits

0xbcca,	// (0x0001a00b) wml_tabs_pane_g2

0xbcdf,	// (0x0001a020) wml_tabs_pane_g3_ParamLimits

0xbcdf,	// (0x0001a020) wml_tabs_pane_g3

0xbcf4,	// (0x0001a035) wml_tabs_2_active_pane_ParamLimits

0xbcf4,	// (0x0001a035) wml_tabs_2_active_pane

0xbcf4,	// (0x0001a035) wml_tabs_2_passive_pane_ParamLimits

0xbcf4,	// (0x0001a035) wml_tabs_2_passive_pane

0x3904,	// (0x00011c45) wml_tabs_3_active_pane_cp_ParamLimits

0x3904,	// (0x00011c45) wml_tabs_3_active_pane_cp

0x3919,	// (0x00011c5a) wml_tabs_3_passive_pane_ParamLimits

0x3919,	// (0x00011c5a) wml_tabs_3_passive_pane

0x392c,	// (0x00011c6d) wml_tabs_3_passive_pane_cp_ParamLimits

0x392c,	// (0x00011c6d) wml_tabs_3_passive_pane_cp

0x3943,	// (0x00011c84) tabs_4_active_pane

0x394b,	// (0x00011c8c) tabs_4_passive_pane

0x3955,	// (0x00011c96) tabs_4_passive_pane_cp

0x395d,	// (0x00011c9e) tabs_4_passive_pane_cp2

0x3180,	// (0x000114c1) aid_height_text

0xa895,	// (0x00018bd6) mup_volume_cont_pane_ParamLimits

0xa895,	// (0x00018bd6) mup_volume_cont_pane

0x9264,	// (0x000175a5) aid_size_cell_pinb

0x9264,	// (0x000175a5) aid_size_list_pinb

0xa895,	// (0x00018bd6) mup2_volume_cont_pane_ParamLimits

0xa895,	// (0x00018bd6) mup2_volume_cont_pane

0xbd02,	// (0x0001a043) mup2_volume_cont_pane_g1_ParamLimits

0xbd02,	// (0x0001a043) mup2_volume_cont_pane_g1

0x084e,	// (0x0000eb8f) aid_size_cell_touch_ParamLimits

0x084e,	// (0x0000eb8f) aid_size_cell_touch

0x0a7a,	// (0x0000edbb) touch_pane_ParamLimits

0x0a7a,	// (0x0000edbb) touch_pane

0x9264,	// (0x000175a5) main_rss2_pane

0xbd21,	// (0x0001a062) listscroll_rss2_pane

0xbd2a,	// (0x0001a06b) rss2_navigation_pane

0xbd32,	// (0x0001a073) list_rss2_pane

0xa569,	// (0x000188aa) scroll_pane_cp22

0xbd3a,	// (0x0001a07b) rss2_navigation_pane_g1

0xbd43,	// (0x0001a084) rss2_navigation_pane_g2

0xbd4b,	// (0x0001a08c) rss2_navigation_pane_g3

0x0002,

0xf5ba,	// (0x0001d8fb) rss2_navigation_pane_g

0xbd53,	// (0x0001a094) rss2_navigation_pane_t1

0x3967,	// (0x00011ca8) rss2_list_single_pane_ParamLimits

0x3967,	// (0x00011ca8) rss2_list_single_pane

0xbd61,	// (0x0001a0a2) rss2_list_single_pane_t2

0xbd6f,	// (0x0001a0b0) rss2_list_single_pane_t3_ParamLimits

0xbd6f,	// (0x0001a0b0) rss2_list_single_pane_t3

0xbd8c,	// (0x0001a0cd) rss2_list_single_pane_t4

0x2420,	// (0x00010761) smil_status_pane_g1

0x92d3,	// (0x00017614) main_image2_pane_ParamLimits

0x92d3,	// (0x00017614) main_image2_pane

0xbc0f,	// (0x00019f50) main_camera2_pane_g9_ParamLimits

0xbc0f,	// (0x00019f50) main_camera2_pane_g9

0x3884,	// (0x00011bc5) main_camera2_pane_t5_ParamLimits

0x3884,	// (0x00011bc5) main_camera2_pane_t5

0xbc1d,	// (0x00019f5e) main_camera2_pane_t6_ParamLimits

0xbc1d,	// (0x00019f5e) main_camera2_pane_t6

0x397c,	// (0x00011cbd) main_image2_pane_g1_ParamLimits

0x397c,	// (0x00011cbd) main_image2_pane_g1

0x2e54,	// (0x00011195) smil2_video_pane_ParamLimits

0x2e54,	// (0x00011195) smil2_video_pane

0x9282,	// (0x000175c3) aid_zoom_text_primary_cp

0x92c9,	// (0x0001760a) popup_preview_fixed_window

0x9d90,	// (0x000180d1) im_reading_pane_g1

0x3876,	// (0x00011bb7) cams2_bc_adjust_pane_cp_ParamLimits

0x3876,	// (0x00011bb7) cams2_bc_adjust_pane_cp

0xa895,	// (0x00018bd6) cams2_bc_adjust_pane_ParamLimits

0xa895,	// (0x00018bd6) cams2_bc_adjust_pane

0x9a10,	// (0x00017d51) cams2_bc_adjust_pane_g1

0x9264,	// (0x000175a5) cams2_slider_pane

0x9a10,	// (0x00017d51) cams2_slider_pane_g1

0x9a10,	// (0x00017d51) cams2_slider_pane_g2

0x0006,

0xf5c1,	// (0x0001d902) cams2_slider_pane_g

0x0b42,	// (0x0000ee83) calc_display_pane_ParamLimits

0x0b67,	// (0x0000eea8) calc_paper_pane_ParamLimits

0x0b8a,	// (0x0000eecb) grid_calc_pane_ParamLimits

0xa425,	// (0x00018766) popup_clock_digital_window_t1_ParamLimits

0xaa8d,	// (0x00018dce) main_image_pane_t1

0x0b24,	// (0x0000ee65) aid_size_cell_calc_ParamLimits

0x0b24,	// (0x0000ee65) aid_size_cell_calc

0x3402,	// (0x00011743) popup_blid_sat_info2_window_ParamLimits

0x3402,	// (0x00011743) popup_blid_sat_info2_window

0xbd9a,	// (0x0001a0db) aid_size_cell_blid

0xbc3f,	// (0x00019f80) bg_popup_window_pane_cp07

0xbdb7,	// (0x0001a0f8) grid_popup_blid_pane

0xbdc1,	// (0x0001a102) heading_pane_cp05_ParamLimits

0xbdc1,	// (0x0001a102) heading_pane_cp05

0xbe8b,	// (0x0001a1cc) cell_popup_blid_pane_ParamLimits

0xbe8b,	// (0x0001a1cc) cell_popup_blid_pane

0xbeaf,	// (0x0001a1f0) cell_popup_blid_pane_g1

0xbeb7,	// (0x0001a1f8) cell_popup_blid_pane_t1

0xa895,	// (0x00018bd6) mup2_indicator_pane_ParamLimits

0xa895,	// (0x00018bd6) mup2_indicator_pane

0x9264,	// (0x000175a5) mup2_visualizer_osc_pane

0xbc4d,	// (0x00019f8e) mup2_visualizer_spec_pane_ParamLimits

0xbc4d,	// (0x00019f8e) mup2_visualizer_spec_pane

0x9264,	// (0x000175a5) mup2_spec_half_pane

0x9264,	// (0x000175a5) mup2_spec_half_pane_cp

0xbec5,	// (0x0001a206) mup2_spec_bar_pane_ParamLimits

0xbec5,	// (0x0001a206) mup2_spec_bar_pane

0x9a10,	// (0x00017d51) mup2_spec_bar_pane_g1

0xbee4,	// (0x0001a225) mup2_spec_bar_pane_g2

0x0001,

0xf5e7,	// (0x0001d928) mup2_spec_bar_pane_g

0x9264,	// (0x000175a5) mup2_osc_middle_pane

0x9a10,	// (0x00017d51) mup2_visualizer_osc_pane_g1

0x9301,	// (0x00017642) popup_number_entry_window_t1_ParamLimits

0x9314,	// (0x00017655) popup_number_entry_window_t2_ParamLimits

0x9326,	// (0x00017667) popup_number_entry_window_t3_ParamLimits

0x0acc,	// (0x0000ee0d) popup_number_entry_window_t5_ParamLimits

0x0acc,	// (0x0000ee0d) popup_number_entry_window_t5

0xf040,	// (0x0001d381) popup_number_entry_window_t_ParamLimits

0x9338,	// (0x00017679) text_title_cp2_ParamLimits

0xa985,	// (0x00018cc6) aid_hotspot_pointer_text2_pane

0xa9ab,	// (0x00018cec) main_viewer_pane_g9_ParamLimits

0xa9ab,	// (0x00018cec) main_viewer_pane_g9

0x9fc9,	// (0x0001830a) cale_month_pane_t1_ParamLimits

0xa034,	// (0x00018375) bg_cale_pane_ParamLimits

0xa04c,	// (0x0001838d) list_cale_pane_ParamLimits

0xa05d,	// (0x0001839e) listscroll_cale_day_pane_t1

0xa06f,	// (0x000183b0) scroll_pane_cp09_ParamLimits

0x27dd,	// (0x00010b1e) main_mup_eq_pane_t1_ParamLimits

0x27dd,	// (0x00010b1e) main_mup_eq_pane_t1

0x27f7,	// (0x00010b38) main_mup_eq_pane_t2_ParamLimits

0x27f7,	// (0x00010b38) main_mup_eq_pane_t2

0x2811,	// (0x00010b52) main_mup_eq_pane_t3_ParamLimits

0x2811,	// (0x00010b52) main_mup_eq_pane_t3

0x282d,	// (0x00010b6e) main_mup_eq_pane_t4_ParamLimits

0x282d,	// (0x00010b6e) main_mup_eq_pane_t4

0x2849,	// (0x00010b8a) main_mup_eq_pane_t5_ParamLimits

0x2849,	// (0x00010b8a) main_mup_eq_pane_t5

0x2865,	// (0x00010ba6) main_mup_eq_pane_t6_ParamLimits

0x2865,	// (0x00010ba6) main_mup_eq_pane_t6

0x2879,	// (0x00010bba) main_mup_eq_pane_t7_ParamLimits

0x2879,	// (0x00010bba) main_mup_eq_pane_t7

0x288d,	// (0x00010bce) main_mup_eq_pane_t8_ParamLimits

0x288d,	// (0x00010bce) main_mup_eq_pane_t8

0x28a1,	// (0x00010be2) main_mup_eq_pane_t9_ParamLimits

0x28a1,	// (0x00010be2) main_mup_eq_pane_t9

0x28bb,	// (0x00010bfc) main_mup_eq_pane_t10_ParamLimits

0x28bb,	// (0x00010bfc) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x0001d6db) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x0001d6db) main_mup_eq_pane_t

0x296a,	// (0x00010cab) mup_equalizer_pane_cp5_ParamLimits

0x297e,	// (0x00010cbf) mup_equalizer_pane_cp6_ParamLimits

0x2992,	// (0x00010cd3) mup_equalizer_pane_cp7_ParamLimits

0x9264,	// (0x000175a5) main_gallery_pane

0xbb7d,	// (0x00019ebe) smil2_volume_pane

0xbb85,	// (0x00019ec6) smil_status_volume_pane_g1_ParamLimits

0xbb98,	// (0x00019ed9) smil_status_volume_pane_g2_ParamLimits

0xbbab,	// (0x00019eec) smil_status_volume_pane_g3_ParamLimits

0xf540,	// (0x0001d881) smil_status_volume_pane_g_ParamLimits

0xbc3f,	// (0x00019f80) bg_popup_window_pane_cp07_ParamLimits

0xbda2,	// (0x0001a0e3) blid_firmament_pane

0x92d3,	// (0x00017614) aid_size_cell_gallery_ParamLimits

0x92d3,	// (0x00017614) aid_size_cell_gallery

0x92d3,	// (0x00017614) grid_gallery_pane_ParamLimits

0x92d3,	// (0x00017614) grid_gallery_pane

0xbc3f,	// (0x00019f80) cell_gallery_pane_ParamLimits

0xbc3f,	// (0x00019f80) cell_gallery_pane

0x92d3,	// (0x00017614) bg_cell_gallery_focus_pane_ParamLimits

0x92d3,	// (0x00017614) bg_cell_gallery_focus_pane

0x99ca,	// (0x00017d0b) cell_gallery_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) cell_gallery_pane_g1

0x99ca,	// (0x00017d0b) cell_gallery_pane_g2_ParamLimits

0x99ca,	// (0x00017d0b) cell_gallery_pane_g2

0x99ca,	// (0x00017d0b) cell_gallery_pane_g3_ParamLimits

0x99ca,	// (0x00017d0b) cell_gallery_pane_g3

0x99d8,	// (0x00017d19) cell_gallery_pane_g4_ParamLimits

0x99d8,	// (0x00017d19) cell_gallery_pane_g4

0x0003,

0xf5ec,	// (0x0001d92d) cell_gallery_pane_g_ParamLimits

0xf5ec,	// (0x0001d92d) cell_gallery_pane_g

0xbeee,	// (0x0001a22f) bg_cell_gallery_focus_pane_g1

0xbef6,	// (0x0001a237) bg_cell_gallery_focus_pane_g2

0xbefe,	// (0x0001a23f) bg_cell_gallery_focus_pane_g3

0xbf06,	// (0x0001a247) bg_cell_gallery_focus_pane_g4

0xbf0e,	// (0x0001a24f) bg_cell_gallery_focus_pane_g5

0xbf16,	// (0x0001a257) bg_cell_gallery_focus_pane_g6

0xbf1e,	// (0x0001a25f) bg_cell_gallery_focus_pane_g7

0xbf26,	// (0x0001a267) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5f5,	// (0x0001d936) bg_cell_gallery_focus_pane_g

0xbf2e,	// (0x0001a26f) aid_firma_cardinal

0xbf42,	// (0x0001a283) blid_firmament_pane_t1

0xbf59,	// (0x0001a29a) blid_firmament_pane_t2

0xbf70,	// (0x0001a2b1) blid_firmament_pane_t3

0xbf87,	// (0x0001a2c8) blid_firmament_pane_t4

0x0003,

0xf606,	// (0x0001d947) blid_firmament_pane_t

0xbf9e,	// (0x0001a2df) blid_sat_info_pane

0x9a10,	// (0x00017d51) blid_sat_info_pane_g1

0x9a10,	// (0x00017d51) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x0001d3f0) blid_sat_info_pane_g

0xbfae,	// (0x0001a2ef) blid_sat_info_pane_t1

0xbfbc,	// (0x0001a2fd) smil2_volume_content_pane

0xbfc5,	// (0x0001a306) smil2_volume_pane_g1

0x9b23,	// (0x00017e64) smil2_volume_content_pane_g1

0xbfcd,	// (0x0001a30e) smil2_volume_content_pane_g2

0xbfd6,	// (0x0001a317) smil2_volume_content_pane_g3

0xbfdf,	// (0x0001a320) smil2_volume_content_pane_g4

0xbfe8,	// (0x0001a329) smil2_volume_content_pane_g5

0xbff1,	// (0x0001a332) smil2_volume_content_pane_g6

0xbffa,	// (0x0001a33b) smil2_volume_content_pane_g7

0xc003,	// (0x0001a344) smil2_volume_content_pane_g8

0xc00c,	// (0x0001a34d) smil2_volume_content_pane_g9

0xc015,	// (0x0001a356) smil2_volume_content_pane_g10

0x0009,

0xf60f,	// (0x0001d950) smil2_volume_content_pane_g

0x1051,	// (0x0000f392) cale_week_day_heading_pane_t1_ParamLimits

0x107b,	// (0x0000f3bc) cale_week_day_heading_pane_t2_ParamLimits

0x10aa,	// (0x0000f3eb) cale_week_day_heading_pane_t3_ParamLimits

0x10d9,	// (0x0000f41a) cale_week_day_heading_pane_t4_ParamLimits

0x1108,	// (0x0000f449) cale_week_day_heading_pane_t5_ParamLimits

0x113f,	// (0x0000f480) cale_week_day_heading_pane_t6_ParamLimits

0x1176,	// (0x0000f4b7) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x0001d488) cale_week_day_heading_pane_t_ParamLimits

0x9c7b,	// (0x00017fbc) bg_cale_side_pane_ParamLimits

0x11a0,	// (0x0000f4e1) cale_week_time_pane_t1_ParamLimits

0x11ba,	// (0x0000f4fb) cale_week_time_pane_t2_ParamLimits

0x11d4,	// (0x0000f515) cale_week_time_pane_t3_ParamLimits

0x11ee,	// (0x0000f52f) cale_week_time_pane_t4_ParamLimits

0x1208,	// (0x0000f549) cale_week_time_pane_t5_ParamLimits

0x1222,	// (0x0000f563) cale_week_time_pane_t6_ParamLimits

0x123c,	// (0x0000f57d) cale_week_time_pane_t7_ParamLimits

0x1256,	// (0x0000f597) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x0001d497) cale_week_time_pane_t_ParamLimits

0x1270,	// (0x0000f5b1) cell_cale_week_pane_g2_ParamLimits

0x9c7b,	// (0x00017fbc) bg_cale_side_pane_cp01_ParamLimits

0x2227,	// (0x00010568) cale_month_week_pane_t1_ParamLimits

0x2240,	// (0x00010581) cale_month_week_pane_t2_ParamLimits

0x2259,	// (0x0001059a) cale_month_week_pane_t3_ParamLimits

0x2272,	// (0x000105b3) cale_month_week_pane_t4_ParamLimits

0x228b,	// (0x000105cc) cale_month_week_pane_t5_ParamLimits

0x22a4,	// (0x000105e5) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x0001d565) cale_month_week_pane_t_ParamLimits

0x9fdb,	// (0x0001831c) cell_cale_month_pane_g1_ParamLimits

0x9264,	// (0x000175a5) main_cale_event_viewer_pane

0x9264,	// (0x000175a5) listscroll_cale_event_viewer_pane

0xc01e,	// (0x0001a35f) list_cale_ev_pane

0xc026,	// (0x0001a367) scroll_pane_cp023

0xc032,	// (0x0001a373) field_cale_ev_pane_ParamLimits

0xc032,	// (0x0001a373) field_cale_ev_pane

0xc050,	// (0x0001a391) field_cale_ev_content_pane_ParamLimits

0xc050,	// (0x0001a391) field_cale_ev_content_pane

0xc05c,	// (0x0001a39d) field_cale_ev_pane_g1_ParamLimits

0xc05c,	// (0x0001a39d) field_cale_ev_pane_g1

0xc068,	// (0x0001a3a9) field_cale_ev_pane_g2_ParamLimits

0xc068,	// (0x0001a3a9) field_cale_ev_pane_g2

0xc080,	// (0x0001a3c1) field_cale_ev_pane_g3_ParamLimits

0xc080,	// (0x0001a3c1) field_cale_ev_pane_g3

0x0002,

0xf624,	// (0x0001d965) field_cale_ev_pane_g_ParamLimits

0xf624,	// (0x0001d965) field_cale_ev_pane_g

0xc098,	// (0x0001a3d9) field_cale_ev_pane_t1_ParamLimits

0xc098,	// (0x0001a3d9) field_cale_ev_pane_t1

0x9ba6,	// (0x00017ee7) field_cale_ev_content_pane_t1_ParamLimits

0x9ba6,	// (0x00017ee7) field_cale_ev_content_pane_t1

0xa938,	// (0x00018c79) bg_button_pane_cp01

0x0d7e,	// (0x0000f0bf) listscroll_cale_week_pane_ParamLimits

0x9c26,	// (0x00017f67) popup_toolbar_window_cp01

0x9c4c,	// (0x00017f8d) listscroll_cale_week_pane_t1_ParamLimits

0x0d7e,	// (0x0000f0bf) listscroll_cale_day_pane_ParamLimits

0x9c26,	// (0x00017f67) popup_toolbar_window_cp02

0xa05d,	// (0x0001839e) listscroll_cale_day_pane_t1_ParamLimits

0x0d7e,	// (0x0000f0bf) main_cale_month_pane_ParamLimits

0xbafb,	// (0x00019e3c) popup_toolbar_window_cp03_ParamLimits

0xbafb,	// (0x00019e3c) popup_toolbar_window_cp03

0x2d1c,	// (0x0001105d) main_image_pane_g2_ParamLimits

0x2d1c,	// (0x0001105d) main_image_pane_g2

0x2d2d,	// (0x0001106e) main_image_pane_g3_ParamLimits

0x2d2d,	// (0x0001106e) main_image_pane_g3

0x0002,

0xf42c,	// (0x0001d76d) main_image_pane_g_ParamLimits

0xf42c,	// (0x0001d76d) main_image_pane_g

0xaa8d,	// (0x00018dce) main_image_pane_t1_ParamLimits

0x2d3e,	// (0x0001107f) main_image_pane_t2_ParamLimits

0x2d3e,	// (0x0001107f) main_image_pane_t2

0x2d50,	// (0x00011091) main_image_pane_t3_ParamLimits

0x2d50,	// (0x00011091) main_image_pane_t3

0x2d78,	// (0x000110b9) main_image_pane_t4_ParamLimits

0x2d78,	// (0x000110b9) main_image_pane_t4

0x0003,

0xf433,	// (0x0001d774) main_image_pane_t_ParamLimits

0xf433,	// (0x0001d774) main_image_pane_t

0x2d98,	// (0x000110d9) popup_image_details_window_cp01

0x2da2,	// (0x000110e3) popup_toobar_trans_pane_cp01_ParamLimits

0x2da2,	// (0x000110e3) popup_toobar_trans_pane_cp01

0x34e1,	// (0x00011822) popup_image_details_window_ParamLimits

0x34e1,	// (0x00011822) popup_image_details_window

0xbace,	// (0x00019e0f) popup_image_focus_window

0xbc01,	// (0x00019f42) camera2_autofocus_pane_ParamLimits

0xbc01,	// (0x00019f42) camera2_autofocus_pane

0x9264,	// (0x000175a5) bg_popup_sub_pane_cp06

0xc0af,	// (0x0001a3f0) popup_image_focus_window_g1

0xc0b7,	// (0x0001a3f8) popup_image_focus_window_g2

0xc0bf,	// (0x0001a400) popup_image_focus_window_g3

0xc0c7,	// (0x0001a408) popup_image_focus_window_g4

0x0003,

0xf62b,	// (0x0001d96c) popup_image_focus_window_g

0xc0cf,	// (0x0001a410) popup_image_focus_window_t1

0xc0dd,	// (0x0001a41e) popup_image_focus_window_t2

0xc0ed,	// (0x0001a42e) popup_image_focus_window_t3

0x0002,

0xf634,	// (0x0001d975) popup_image_focus_window_t

0x99ca,	// (0x00017d0b) camera2_autofocus_pane_g1

0x92d3,	// (0x00017614) bg_tb_trans_pane_cp01

0xc0fb,	// (0x0001a43c) popup_image_details_window_g1

0xc10e,	// (0x0001a44f) popup_image_details_window_g2

0x0002,

0xf646,	// (0x0001d987) popup_image_details_window_g

0xc137,	// (0x0001a478) popup_image_details_window_t1

0xc149,	// (0x0001a48a) popup_image_details_window_t2

0xc162,	// (0x0001a4a3) popup_image_details_window_t3

0xc176,	// (0x0001a4b7) popup_image_details_window_t4

0xc191,	// (0x0001a4d2) popup_image_details_window_t5

0x0004,

0xf64d,	// (0x0001d98e) popup_image_details_window_t

0x9a5a,	// (0x00017d9b) bg_calc_paper_pane_ParamLimits

0x9264,	// (0x000175a5) grid_highlight_pane_cp013

0x9a6e,	// (0x00017daf) list_calc_pane_ParamLimits

0x9a80,	// (0x00017dc1) scroll_pane_cp024

0x9a88,	// (0x00017dc9) bg_calc_display_pane_ParamLimits

0x0bcc,	// (0x0000ef0d) calc_display_pane_t1_ParamLimits

0x0be1,	// (0x0000ef22) calc_display_pane_t2_ParamLimits

0x9a94,	// (0x00017dd5) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x0001d408) calc_display_pane_t_ParamLimits

0x0ca1,	// (0x0000efe2) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x0001d425) cell_calc_pane_g

0x0caa,	// (0x0000efeb) cell_calc_pane_t1

0x9b01,	// (0x00017e42) grid_highlight_pane_cp02_ParamLimits

0x9b17,	// (0x00017e58) toolbar_button_pane_cp01_ParamLimits

0x9b17,	// (0x00017e58) toolbar_button_pane_cp01

0xaad2,	// (0x00018e13) temp_image_control_pane_ParamLimits

0xaad2,	// (0x00018e13) temp_image_control_pane

0x92d3,	// (0x00017614) main_mp3_pane

0xc1ab,	// (0x0001a4ec) temp_image_control_pane_g1_ParamLimits

0xc1ab,	// (0x0001a4ec) temp_image_control_pane_g1

0xc1b9,	// (0x0001a4fa) temp_image_control_pane_g2_ParamLimits

0xc1b9,	// (0x0001a4fa) temp_image_control_pane_g2

0xc1cb,	// (0x0001a50c) temp_image_control_pane_g3_ParamLimits

0xc1cb,	// (0x0001a50c) temp_image_control_pane_g3

0x3992,	// (0x00011cd3) temp_image_control_pane_g4_ParamLimits

0x3992,	// (0x00011cd3) temp_image_control_pane_g4

0x0003,

0xf658,	// (0x0001d999) temp_image_control_pane_g_ParamLimits

0xf658,	// (0x0001d999) temp_image_control_pane_g

0xc1ab,	// (0x0001a4ec) main_mp3_pane_g1

0x39a5,	// (0x00011ce6) main_mp3_pane_g2

0x0007,

0xf661,	// (0x0001d9a2) main_mp3_pane_g

0xc200,	// (0x0001a541) main_mp3_pane_t1

0x99d8,	// (0x00017d19) main_camera_pane_g8_ParamLimits

0x99d8,	// (0x00017d19) main_camera_pane_g8

0x143a,	// (0x0000f77b) main_video_pane_g7_ParamLimits

0x143a,	// (0x0000f77b) main_video_pane_g7

0x9a2e,	// (0x00017d6f) main_camera2_pane_t7_ParamLimits

0x9a2e,	// (0x00017d6f) main_camera2_pane_t7

0x9de7,	// (0x00018128) scroll_pane_cp025_ParamLimits

0x9de7,	// (0x00018128) scroll_pane_cp025

0x9dfb,	// (0x0001813c) scroll_pane_cp026_ParamLimits

0x9dfb,	// (0x0001813c) scroll_pane_cp026

0x9e0a,	// (0x0001814b) wml_content_pane_ParamLimits

0x9264,	// (0x000175a5) main_touch_calib_pane

0x3a79,	// (0x00011dba) main_touch_calib_pane_g1

0x3a8b,	// (0x00011dcc) main_touch_calib_pane_g2

0x3a9d,	// (0x00011dde) main_touch_calib_pane_g3

0x3aaf,	// (0x00011df0) main_touch_calib_pane_g4

0x0003,

0xf67f,	// (0x0001d9c0) main_touch_calib_pane_g

0x3ac1,	// (0x00011e02) main_touch_calib_pane_t1

0x3adb,	// (0x00011e1c) main_touch_calib_pane_t2

0x0004,

0xf688,	// (0x0001d9c9) main_touch_calib_pane_t

0xa645,	// (0x00018986) mup_progress_pane_cp02

0xa67a,	// (0x000189bb) navi_pane_g1

0xa735,	// (0x00018a76) navi_pane_mp_t3

0x92d3,	// (0x00017614) main_mp3_pane_ParamLimits

0x3666,	// (0x000119a7) navi_pane_ParamLimits

0xc1ab,	// (0x0001a4ec) main_mp3_pane_g1_ParamLimits

0x39a5,	// (0x00011ce6) main_mp3_pane_g2_ParamLimits

0x39b3,	// (0x00011cf4) main_mp3_pane_g3_ParamLimits

0x39b3,	// (0x00011cf4) main_mp3_pane_g3

0x39c1,	// (0x00011d02) main_mp3_pane_g4_ParamLimits

0x39c1,	// (0x00011d02) main_mp3_pane_g4

0x99ca,	// (0x00017d0b) main_mp3_pane_g5_ParamLimits

0x99ca,	// (0x00017d0b) main_mp3_pane_g5

0xc1db,	// (0x0001a51c) main_mp3_pane_g6_ParamLimits

0xc1db,	// (0x0001a51c) main_mp3_pane_g6

0xc1e8,	// (0x0001a529) main_mp3_pane_g7_ParamLimits

0xc1e8,	// (0x0001a529) main_mp3_pane_g7

0xc1f4,	// (0x0001a535) main_mp3_pane_g8_ParamLimits

0xc1f4,	// (0x0001a535) main_mp3_pane_g8

0xf661,	// (0x0001d9a2) main_mp3_pane_g_ParamLimits

0x39cd,	// (0x00011d0e) main_mp3_pane_t2

0x39db,	// (0x00011d1c) main_mp3_pane_t3

0xc20e,	// (0x0001a54f) main_mp3_pane_t4

0xc21c,	// (0x0001a55d) main_mp3_pane_t5

0x0005,

0xf672,	// (0x0001d9b3) main_mp3_pane_t

0xc22a,	// (0x0001a56b) mup_progress_pane_cp01

0x9282,	// (0x000175c3) aid_zoom_text_secondary2

0xc01e,	// (0x0001a35f) list_cale_ev2_pane

0xc026,	// (0x0001a367) scroll_pane_cp023_ParamLimits

0x3b31,	// (0x00011e72) field_cale_ev2_pane_ParamLimits

0x3b31,	// (0x00011e72) field_cale_ev2_pane

0x3b51,	// (0x00011e92) field_cale_ev2_pane_g1_ParamLimits

0x3b51,	// (0x00011e92) field_cale_ev2_pane_g1

0x3b5d,	// (0x00011e9e) field_cale_ev2_pane_g2_ParamLimits

0x3b5d,	// (0x00011e9e) field_cale_ev2_pane_g2

0x3b75,	// (0x00011eb6) field_cale_ev2_pane_g3_ParamLimits

0x3b75,	// (0x00011eb6) field_cale_ev2_pane_g3

0x0003,

0xf693,	// (0x0001d9d4) field_cale_ev2_pane_g_ParamLimits

0xf693,	// (0x0001d9d4) field_cale_ev2_pane_g

0x3b8d,	// (0x00011ece) field_cale_ev2_pane_t1_ParamLimits

0x3b8d,	// (0x00011ece) field_cale_ev2_pane_t1

0x3ba4,	// (0x00011ee5) field_cale_ev2_pane_t2_ParamLimits

0x3ba4,	// (0x00011ee5) field_cale_ev2_pane_t2

0x0001,

0xf69c,	// (0x0001d9dd) field_cale_ev2_pane_t_ParamLimits

0xf69c,	// (0x0001d9dd) field_cale_ev2_pane_t

0x2bf2,	// (0x00010f33) main_postcard_pane_g5_ParamLimits

0x2bf2,	// (0x00010f33) main_postcard_pane_g5

0x2c08,	// (0x00010f49) main_postcard_pane_g6_ParamLimits

0x2c08,	// (0x00010f49) main_postcard_pane_g6

0x92d3,	// (0x00017614) camera2_autofocus_pane_cp_ParamLimits

0x92d3,	// (0x00017614) camera2_autofocus_pane_cp

0x92d3,	// (0x00017614) main_mup3_pane

0x3bfd,	// (0x00011f3e) main_mup3_pane_g1_ParamLimits

0x3bfd,	// (0x00011f3e) main_mup3_pane_g1

0x3c1f,	// (0x00011f60) main_mup3_pane_g2_ParamLimits

0x3c1f,	// (0x00011f60) main_mup3_pane_g2

0x3c9d,	// (0x00011fde) main_mup3_pane_g3_ParamLimits

0x3c9d,	// (0x00011fde) main_mup3_pane_g3

0x3ce3,	// (0x00012024) main_mup3_pane_g4_ParamLimits

0x3ce3,	// (0x00012024) main_mup3_pane_g4

0x3d29,	// (0x0001206a) main_mup3_pane_g5_ParamLimits

0x3d29,	// (0x0001206a) main_mup3_pane_g5

0x3d6f,	// (0x000120b0) main_mup3_pane_g6_ParamLimits

0x3d6f,	// (0x000120b0) main_mup3_pane_g6

0x99d8,	// (0x00017d19) main_mup3_pane_g7_ParamLimits

0x99d8,	// (0x00017d19) main_mup3_pane_g7

0x0007,

0xf6ac,	// (0x0001d9ed) main_mup3_pane_g_ParamLimits

0xf6ac,	// (0x0001d9ed) main_mup3_pane_g

0x3ded,	// (0x0001212e) main_mup3_pane_t1_ParamLimits

0x3ded,	// (0x0001212e) main_mup3_pane_t1

0x3e61,	// (0x000121a2) main_mup3_pane_t2_ParamLimits

0x3e61,	// (0x000121a2) main_mup3_pane_t2

0x3f35,	// (0x00012276) main_mup3_pane_t4_ParamLimits

0x3f35,	// (0x00012276) main_mup3_pane_t4

0x3f8b,	// (0x000122cc) main_mup3_pane_t5_ParamLimits

0x3f8b,	// (0x000122cc) main_mup3_pane_t5

0x4047,	// (0x00012388) main_mup3_pane_t6_ParamLimits

0x4047,	// (0x00012388) main_mup3_pane_t6

0x0005,

0xf6bd,	// (0x0001d9fe) main_mup3_pane_t_ParamLimits

0xf6bd,	// (0x0001d9fe) main_mup3_pane_t

0x40ff,	// (0x00012440) mup3_progress_pane_ParamLimits

0x40ff,	// (0x00012440) mup3_progress_pane

0x4195,	// (0x000124d6) popup_mup3_control_window_ParamLimits

0x4195,	// (0x000124d6) popup_mup3_control_window

0xc23e,	// (0x0001a57f) popup_mup3_text_window

0x41c7,	// (0x00012508) mup3_progress_pane_t1

0x41e6,	// (0x00012527) mup3_progress_pane_t2

0xc246,	// (0x0001a587) mup3_progress_pane_t3

0x0002,

0xf6ca,	// (0x0001da0b) mup3_progress_pane_t

0xc263,	// (0x0001a5a4) mup_progress_pane_cp03

0x9264,	// (0x000175a5) bg_tb_trans_pane_cp04

0x4205,	// (0x00012546) mup3_volume_pane

0x420d,	// (0x0001254e) popup_mup3_control_window_g1

0x4216,	// (0x00012557) mup3_volume_pane_g1

0x421f,	// (0x00012560) mup3_volume_pane_g2

0x4228,	// (0x00012569) mup3_volume_pane_g3

0x0002,

0xf6d1,	// (0x0001da12) mup3_volume_pane_g

0x9264,	// (0x000175a5) bg_tb_trans_pane_cp03

0xc273,	// (0x0001a5b4) popup_mup3_text_window_g1

0xc27b,	// (0x0001a5bc) popup_mup3_text_window_t1

0x9ae2,	// (0x00017e23) list_calc_item_pane_g1_ParamLimits

0xbd18,	// (0x0001a059) mup_volume_pane_cp_g1

0x3af5,	// (0x00011e36) main_touch_calib_pane_t3

0x3b09,	// (0x00011e4a) main_touch_calib_pane_t4

0x3b1d,	// (0x00011e5e) main_touch_calib_pane_t5

0x926e,	// (0x000175af) aid_cell_size_toolbar2

0x9276,	// (0x000175b7) aid_popup3_width_pane

0x9282,	// (0x000175c3) aid_zoom_text_msg_primary

0x1315,	// (0x0000f656) vorec_t7

0x9aa6,	// (0x00017de7) bg_calc_paper_pane_g1_ParamLimits

0x9ab2,	// (0x00017df3) bg_calc_paper_pane_g2_ParamLimits

0x9abe,	// (0x00017dff) bg_calc_paper_pane_g3_ParamLimits

0x9aca,	// (0x00017e0b) bg_calc_paper_pane_g4_ParamLimits

0x9ad6,	// (0x00017e17) bg_calc_paper_pane_g5_ParamLimits

0x0c2b,	// (0x0000ef6c) bg_calc_paper_pane_g6_ParamLimits

0x0c3a,	// (0x0000ef7b) bg_calc_paper_pane_g7_ParamLimits

0x0c49,	// (0x0000ef8a) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x0001d40f) bg_calc_paper_pane_g_ParamLimits

0x0c5c,	// (0x0000ef9d) calc_bg_paper_pane_g9_ParamLimits

0x92d3,	// (0x00017614) image_qvga_pane_ParamLimits

0x92d3,	// (0x00017614) image_qvga_pane

0x994f,	// (0x00017c90) bg_popup_sub_pane_cp04_ParamLimits

0xaa09,	// (0x00018d4a) popup_mup_playback_window_g1_ParamLimits

0xaa15,	// (0x00018d56) popup_mup_playback_window_t1_ParamLimits

0xaa2a,	// (0x00018d6b) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x0001d768) popup_mup_playback_window_t_ParamLimits

0x99d8,	// (0x00017d19) main_mup2_pane_g3_ParamLimits

0x99d8,	// (0x00017d19) main_mup2_pane_g3

0x15f5,	// (0x0000f936) popup_toolbar_window_cp04

0xad9b,	// (0x000190dc) popup_call2_audio_second_window_g3_ParamLimits

0xad9b,	// (0x000190dc) popup_call2_audio_second_window_g3

0xb1b3,	// (0x000194f4) popup_call2_audio_first_window_g4_ParamLimits

0xb1b3,	// (0x000194f4) popup_call2_audio_first_window_g4

0xb7da,	// (0x00019b1b) popup_call2_audio_in_window_g4_ParamLimits

0xb7da,	// (0x00019b1b) popup_call2_audio_in_window_g4

0x2cfe,	// (0x0001103f) aid_area_sk_bg_cut_ParamLimits

0x2cfe,	// (0x0001103f) aid_area_sk_bg_cut

0xaa3f,	// (0x00018d80) aid_area_sk_bg_cut_2_ParamLimits

0xaa3f,	// (0x00018d80) aid_area_sk_bg_cut_2

0x9264,	// (0x000175a5) aid_placing_details_win

0x9264,	// (0x000175a5) aid_placing_details_win_2

0x99ca,	// (0x00017d0b) camera2_autofocus_pane_g1_ParamLimits

0x0a13,	// (0x0000ed54) popup_fixed_preview_cale_window_ParamLimits

0x0a13,	// (0x0000ed54) popup_fixed_preview_cale_window

0xa7bc,	// (0x00018afd) navi_slider_pane_g3

0xa7c5,	// (0x00018b06) navi_slider_pane_g4

0xa7ce,	// (0x00018b0f) navi_slider_pane_g5

0xa7bc,	// (0x00018afd) navi_slider_pane_g6

0xa7d7,	// (0x00018b18) navi_slider_pane_g7

0xa905,	// (0x00018c46) mup_scale_pane_g3

0xa90e,	// (0x00018c4f) mup_scale_pane_g4

0xa917,	// (0x00018c58) mup_scale_pane_g5

0x29a6,	// (0x00010ce7) mup_scale_pane_g6

0x29af,	// (0x00010cf0) mup_scale_pane_g7

0x9a10,	// (0x00017d51) cams2_slider_pane_g3

0x9a10,	// (0x00017d51) cams2_slider_pane_g4

0x9a10,	// (0x00017d51) cams2_slider_pane_g5

0x9a10,	// (0x00017d51) cams2_slider_pane_g6

0x9a10,	// (0x00017d51) cams2_slider_pane_g7

0x9a10,	// (0x00017d51) camera2_autofocus_pane_cp_g1

0xbab0,	// (0x00019df1) bg_popup_preview_window_pane_cp02_ParamLimits

0xbab0,	// (0x00019df1) bg_popup_preview_window_pane_cp02

0xc289,	// (0x0001a5ca) list_fp_cale_pane_ParamLimits

0xc289,	// (0x0001a5ca) list_fp_cale_pane

0xc295,	// (0x0001a5d6) popup_fixed_preview_cale_window_t1_ParamLimits

0xc295,	// (0x0001a5d6) popup_fixed_preview_cale_window_t1

0x4231,	// (0x00012572) popup_fixed_preview_cale_window_t2_ParamLimits

0x4231,	// (0x00012572) popup_fixed_preview_cale_window_t2

0x4246,	// (0x00012587) popup_fixed_preview_cale_window_t3_ParamLimits

0x4246,	// (0x00012587) popup_fixed_preview_cale_window_t3

0x0002,

0xf6d8,	// (0x0001da19) popup_fixed_preview_cale_window_t_ParamLimits

0xf6d8,	// (0x0001da19) popup_fixed_preview_cale_window_t

0x425b,	// (0x0001259c) list_single_fp_cale_pane_ParamLimits

0x425b,	// (0x0001259c) list_single_fp_cale_pane

0xc2b3,	// (0x0001a5f4) list_single_fp_cale_pane_g1_ParamLimits

0xc2b3,	// (0x0001a5f4) list_single_fp_cale_pane_g1

0xc2bf,	// (0x0001a600) list_single_fp_cale_pane_g2_ParamLimits

0xc2bf,	// (0x0001a600) list_single_fp_cale_pane_g2

0x0002,

0xf6df,	// (0x0001da20) list_single_fp_cale_pane_g_ParamLimits

0xf6df,	// (0x0001da20) list_single_fp_cale_pane_g

0xc2d8,	// (0x0001a619) list_single_fp_cale_pane_t1_ParamLimits

0xc2d8,	// (0x0001a619) list_single_fp_cale_pane_t1

0xc2ea,	// (0x0001a62b) list_single_fp_cale_pane_t2_ParamLimits

0xc2ea,	// (0x0001a62b) list_single_fp_cale_pane_t2

0x0001,

0xf6e6,	// (0x0001da27) list_single_fp_cale_pane_t_ParamLimits

0xf6e6,	// (0x0001da27) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9264,	// (0x000175a5) main_dialer_pane

0x9264,	// (0x000175a5) aid_cell_size_keypad

0x9264,	// (0x000175a5) dialer_ne_pane

0x9264,	// (0x000175a5) grid_dialer_command_1_pane

0x9264,	// (0x000175a5) grid_dialer_command_2_pane

0x9264,	// (0x000175a5) grid_dialer_keypad_pane

0x4270,	// (0x000125b1) bg_popup_call_pane_cp06_ParamLimits

0x4270,	// (0x000125b1) bg_popup_call_pane_cp06

0x4270,	// (0x000125b1) dialer_ne_clear_pane_ParamLimits

0x4270,	// (0x000125b1) dialer_ne_clear_pane

0x9a10,	// (0x00017d51) dialer_ne_pane_g1

0x9a2e,	// (0x00017d6f) dialer_ne_pane_t1_ParamLimits

0x9a2e,	// (0x00017d6f) dialer_ne_pane_t1

0x427e,	// (0x000125bf) dialer_ne_pane_t2_ParamLimits

0x427e,	// (0x000125bf) dialer_ne_pane_t2

0x42a6,	// (0x000125e7) dialer_ne_pane_t3_ParamLimits

0x42a6,	// (0x000125e7) dialer_ne_pane_t3

0x0002,

0xf6eb,	// (0x0001da2c) dialer_ne_pane_t_ParamLimits

0xf6eb,	// (0x0001da2c) dialer_ne_pane_t

0x42a6,	// (0x000125e7) dialer_ne_pane_t3_copy1_ParamLimits

0x42a6,	// (0x000125e7) dialer_ne_pane_t3_copy1

0xc31d,	// (0x0001a65e) cell_dialer_keypad_pane_ParamLimits

0xc31d,	// (0x0001a65e) cell_dialer_keypad_pane

0x92d3,	// (0x00017614) cell_dialer_command_1_pane_ParamLimits

0x92d3,	// (0x00017614) cell_dialer_command_1_pane

0xc334,	// (0x0001a675) cell_dialer_command_2_pane_ParamLimits

0xc334,	// (0x0001a675) cell_dialer_command_2_pane

0x92d3,	// (0x00017614) bg_button_pane_cp02_ParamLimits

0x92d3,	// (0x00017614) bg_button_pane_cp02

0x99ca,	// (0x00017d0b) cell_dialer_keypad_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) cell_dialer_keypad_pane_g1

0x92d3,	// (0x00017614) bg_button_pane_cp03_ParamLimits

0x92d3,	// (0x00017614) bg_button_pane_cp03

0x99ca,	// (0x00017d0b) cell_dialer_command_1_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) cell_dialer_command_1_pane_g1

0x9264,	// (0x000175a5) bg_button_pane_cp04

0x9a10,	// (0x00017d51) cell_dialer_command_2_pane_g1

0x9264,	// (0x000175a5) bg_button_pane_cp06

0x9a10,	// (0x00017d51) dialer_ne_clear_pane_g1

0xa686,	// (0x000189c7) navi_pane_g2

0xa6b4,	// (0x000189f5) navi_pane_g3

0x0002,

0xf32f,	// (0x0001d670) navi_pane_g

0xa743,	// (0x00018a84) navi_pane_mv_g2

0xa76a,	// (0x00018aab) navi_pane_mv_g5

0x2789,	// (0x00010aca) navi_pane_mv_t1

0x9a88,	// (0x00017dc9) main_clock2_pane

0x92d3,	// (0x00017614) main_clock2_list_pane_ParamLimits

0x92d3,	// (0x00017614) main_clock2_list_pane

0x433c,	// (0x0001267d) main_clock2_pane_t1_ParamLimits

0x433c,	// (0x0001267d) main_clock2_pane_t1

0x4377,	// (0x000126b8) main_clock2_pane_t2_ParamLimits

0x4377,	// (0x000126b8) main_clock2_pane_t2

0x0004,

0xf6f7,	// (0x0001da38) main_clock2_pane_t_ParamLimits

0xf6f7,	// (0x0001da38) main_clock2_pane_t

0x4417,	// (0x00012758) popup_clock_analogue_window_cp03_ParamLimits

0x4417,	// (0x00012758) popup_clock_analogue_window_cp03

0x443c,	// (0x0001277d) popup_clock_digital_window_cp02_ParamLimits

0x443c,	// (0x0001277d) popup_clock_digital_window_cp02

0x44b5,	// (0x000127f6) main_clock2_list_single_pane_ParamLimits

0x44b5,	// (0x000127f6) main_clock2_list_single_pane

0x9ccd,	// (0x0001800e) list_highlight_pane_cp05

0xc37b,	// (0x0001a6bc) main_clock2_list_single_pane_t1

0x15f5,	// (0x0000f936) popup_toolbar_window_cp04_ParamLimits

0x99d8,	// (0x00017d19) camera2_autofocus_pane_g2_ParamLimits

0x99d8,	// (0x00017d19) camera2_autofocus_pane_g2

0x99d8,	// (0x00017d19) camera2_autofocus_pane_g3_ParamLimits

0x99d8,	// (0x00017d19) camera2_autofocus_pane_g3

0x99d8,	// (0x00017d19) camera2_autofocus_pane_g4_ParamLimits

0x99d8,	// (0x00017d19) camera2_autofocus_pane_g4

0x99d8,	// (0x00017d19) camera2_autofocus_pane_g5_ParamLimits

0x99d8,	// (0x00017d19) camera2_autofocus_pane_g5

0x0004,

0xf63b,	// (0x0001d97c) camera2_autofocus_pane_g_ParamLimits

0xf63b,	// (0x0001d97c) camera2_autofocus_pane_g

0x3bb9,	// (0x00011efa) camera2_autofocus_pane_cp_g2

0x3bc1,	// (0x00011f02) camera2_autofocus_pane_cp_g3

0x3bc9,	// (0x00011f0a) camera2_autofocus_pane_cp_g4

0x3bd1,	// (0x00011f12) camera2_autofocus_pane_cp_g5

0x0004,

0xf6a1,	// (0x0001d9e2) camera2_autofocus_pane_cp_g

0x9264,	// (0x000175a5) popup_dialer_spcha_window

0x9264,	// (0x000175a5) bg_popup_sub_pane_cp07

0x9264,	// (0x000175a5) list_spcha_pane

0xc389,	// (0x0001a6ca) list_single_spcha_pane_ParamLimits

0xc389,	// (0x0001a6ca) list_single_spcha_pane

0x9264,	// (0x000175a5) list_highlight_pane_cp06

0xa248,	// (0x00018589) list_single_spcha_pane_t1

0xb584,	// (0x000198c5) popup_call2_audio_out_window_g4_ParamLimits

0xb584,	// (0x000198c5) popup_call2_audio_out_window_g4

0x9264,	// (0x000175a5) main_imed2_pane

0xbad6,	// (0x00019e17) popup_imed_adjust2_window

0x34f9,	// (0x0001183a) popup_imed_trans_window_ParamLimits

0x34f9,	// (0x0001183a) popup_imed_trans_window

0xbded,	// (0x0001a12e) popup_blid_sat_info2_window_t1

0xbdfb,	// (0x0001a13c) popup_blid_sat_info2_window_t2

0x000a,

0xf5d0,	// (0x0001d911) popup_blid_sat_info2_window_t

0x4566,	// (0x000128a7) aid_size_cell_colour_35

0x4586,	// (0x000128c7) aid_size_cell_colour_112

0x45a6,	// (0x000128e7) aid_size_cell_effect

0xa895,	// (0x00018bd6) bg_tb_trans_pane_cp02

0xa16e,	// (0x000184af) heading_imed_pane

0x45c6,	// (0x00012907) listscroll_imed_pane

0xc39b,	// (0x0001a6dc) heading_imed_pane_g1

0xc3a3,	// (0x0001a6e4) heading_imed_pane_t1

0xc3b1,	// (0x0001a6f2) grid_imed_colour_35_pane_ParamLimits

0xc3b1,	// (0x0001a6f2) grid_imed_colour_35_pane

0x45d2,	// (0x00012913) grid_imed_effect_pane

0xc3c8,	// (0x0001a709) list_imed_aspect_pane

0x45e8,	// (0x00012929) scroll_pane_cp027_ParamLimits

0x45e8,	// (0x00012929) scroll_pane_cp027

0x45f9,	// (0x0001293a) cell_imed_effect_pane_ParamLimits

0x45f9,	// (0x0001293a) cell_imed_effect_pane

0xc3d0,	// (0x0001a711) cell_imed_colour_pane_ParamLimits

0xc3d0,	// (0x0001a711) cell_imed_colour_pane

0xc412,	// (0x0001a753) cell_imed_colour_pane_g1_ParamLimits

0xc412,	// (0x0001a753) cell_imed_colour_pane_g1

0xc423,	// (0x0001a764) hgihlgiht_grid_pane_cp016_ParamLimits

0xc423,	// (0x0001a764) hgihlgiht_grid_pane_cp016

0x4620,	// (0x00012961) cell_imed_effect_pane_g1

0x4628,	// (0x00012969) grid_highlight_pane_cp017

0xc434,	// (0x0001a775) list_imed_single_pane_ParamLimits

0xc434,	// (0x0001a775) list_imed_single_pane

0x9264,	// (0x000175a5) list_highlight_pane_cp07

0xc449,	// (0x0001a78a) list_imed_aspect_pane_comp1_t1

0xa895,	// (0x00018bd6) bg_tb_trans_pane_cp05

0xc46b,	// (0x0001a7ac) popup_imed_adjust2_window_g1

0xc492,	// (0x0001a7d3) popup_imed_adjust2_window_t1

0xc4aa,	// (0x0001a7eb) slider_imed_adjust_pane

0xc4be,	// (0x0001a7ff) slider_imed_adjust_pane_g1

0xc4ce,	// (0x0001a80f) slider_imed_adjust_pane_g2

0xc4de,	// (0x0001a81f) slider_imed_adjust_pane_g3

0xc4ef,	// (0x0001a830) slider_imed_adjust_pane_g4

0x0003,

0xf714,	// (0x0001da55) slider_imed_adjust_pane_g

0x4631,	// (0x00012972) aid_size_cell_clipart2

0x463d,	// (0x0001297e) grid_imed_clipart_pane

0xa928,	// (0x00018c69) scroll_pane_cp031

0x4647,	// (0x00012988) cell_imed_clipart_pane_ParamLimits

0x4647,	// (0x00012988) cell_imed_clipart_pane

0x4669,	// (0x000129aa) cell_imed_clipart_pane_g1

0x9264,	// (0x000175a5) grid_highlight_pane_cp014

0x4318,	// (0x00012659) main_clock2_pane_g1_ParamLimits

0x4318,	// (0x00012659) main_clock2_pane_g1

0x445c,	// (0x0001279d) aid_call2_pane_cp10

0x446e,	// (0x000127af) aid_call_pane_cp10

0xa5e7,	// (0x00018928) popup_clock_analogue_window_cp10_g1

0xa5e7,	// (0x00018928) popup_clock_analogue_window_cp10_g2

0x4480,	// (0x000127c1) popup_clock_analogue_window_cp10_g3

0x4480,	// (0x000127c1) popup_clock_analogue_window_cp10_g4

0xa5e7,	// (0x00018928) popup_clock_analogue_window_cp10_g5

0x0004,

0xf702,	// (0x0001da43) popup_clock_analogue_window_cp10_g

0x4496,	// (0x000127d7) popup_clock_analogue_window_cp10_t1

0x44c7,	// (0x00012808) clock_digital_number_pane_cp10_ParamLimits

0x44c7,	// (0x00012808) clock_digital_number_pane_cp10

0x44df,	// (0x00012820) clock_digital_number_pane_cp11_ParamLimits

0x44df,	// (0x00012820) clock_digital_number_pane_cp11

0x44f7,	// (0x00012838) clock_digital_number_pane_cp12_ParamLimits

0x44f7,	// (0x00012838) clock_digital_number_pane_cp12

0x4511,	// (0x00012852) clock_digital_number_pane_cp13_ParamLimits

0x4511,	// (0x00012852) clock_digital_number_pane_cp13

0x452b,	// (0x0001286c) clock_digital_separator_pane_cp10_ParamLimits

0x452b,	// (0x0001286c) clock_digital_separator_pane_cp10

0x4545,	// (0x00012886) popup_clock_digital_window_cp02_t1_ParamLimits

0x4545,	// (0x00012886) popup_clock_digital_window_cp02_t1

0x9947,	// (0x00017c88) clock_digital_number_pane_cp10_g1

0x9947,	// (0x00017c88) clock_digital_number_pane_cp10_g2

0x0001,

0xf71d,	// (0x0001da5e) clock_digital_number_pane_cp10_g

0x9947,	// (0x00017c88) clock_digital_separator_pane_cp10_g1

0x9947,	// (0x00017c88) clock_digital_separator_pane_g2_cp10

0xa772,	// (0x00018ab3) navi_pane_vded_g4

0xa77b,	// (0x00018abc) navi_pane_vded_g5

0xa784,	// (0x00018ac5) navi_pane_vded_t1

0x9264,	// (0x000175a5) main_vded_pane

0x4672,	// (0x000129b3) main_vded_pane_g1

0x467c,	// (0x000129bd) main_vded_pane_g2

0x4686,	// (0x000129c7) main_vded_pane_g3

0x0002,

0xf722,	// (0x0001da63) main_vded_pane_g

0x4690,	// (0x000129d1) main_vded_pane_t1

0x469e,	// (0x000129df) main_vded_pane_t2

0x0001,

0xf729,	// (0x0001da6a) main_vded_pane_t

0x46ac,	// (0x000129ed) vded_slider_pane

0x46b4,	// (0x000129f5) vded_video_pane

0xc500,	// (0x0001a841) vded_video_pane_g1

0x46bc,	// (0x000129fd) vded_video_pane_g2

0x9a10,	// (0x00017d51) vded_video_pane_g3

0x0002,

0xf72e,	// (0x0001da6f) vded_video_pane_g

0xc50a,	// (0x0001a84b) vded_slider_pane_g1

0xbd18,	// (0x0001a059) vded_slider_pane_g2

0xc513,	// (0x0001a854) vded_slider_pane_g3

0xc51c,	// (0x0001a85d) vded_slider_pane_g4

0xc525,	// (0x0001a866) vded_slider_pane_g5

0x0004,

0xf735,	// (0x0001da76) vded_slider_pane_g

0x417d,	// (0x000124be) mup3_rocker_pane_ParamLimits

0x417d,	// (0x000124be) mup3_rocker_pane

0x46c5,	// (0x00012a06) mup3_control_keys_pane_g1

0x46cd,	// (0x00012a0e) mup3_control_keys_pane_g2

0x46d5,	// (0x00012a16) mup3_control_keys_pane_g3

0x46dd,	// (0x00012a1e) mup3_control_keys_pane_g4

0x0003,

0xf740,	// (0x0001da81) mup3_control_keys_pane_g

0x0a4a,	// (0x0000ed8b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0a4a,	// (0x0000ed8b) popup_toolbar2_fixed_window_cp01

0x41b1,	// (0x000124f2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x41b1,	// (0x000124f2) popup_toolbar2_fixed_window_cp02

0xaf0d,	// (0x0001924e) popup_call2_audio_second_window_t4_ParamLimits

0xaf0d,	// (0x0001924e) popup_call2_audio_second_window_t4

0xb449,	// (0x0001978a) popup_call2_audio_first_window_t6_ParamLimits

0xb449,	// (0x0001978a) popup_call2_audio_first_window_t6

0xb687,	// (0x000199c8) popup_call2_audio_out_window_t6_ParamLimits

0xb687,	// (0x000199c8) popup_call2_audio_out_window_t6

0x9264,	// (0x000175a5) main_vitu_pane

0x92d3,	// (0x00017614) aid_size_cell_itu_ParamLimits

0x92d3,	// (0x00017614) aid_size_cell_itu

0x92d3,	// (0x00017614) bg_popup_window_pane_cp08_ParamLimits

0x92d3,	// (0x00017614) bg_popup_window_pane_cp08

0x92d3,	// (0x00017614) field_vitu_entry_pane_ParamLimits

0x92d3,	// (0x00017614) field_vitu_entry_pane

0x92d3,	// (0x00017614) grid_vitu_function_pane_ParamLimits

0x92d3,	// (0x00017614) grid_vitu_function_pane

0x92d3,	// (0x00017614) grid_vitu_itu_pane_ParamLimits

0x92d3,	// (0x00017614) grid_vitu_itu_pane

0x92d3,	// (0x00017614) cell_vitu_itu_pane_ParamLimits

0x92d3,	// (0x00017614) cell_vitu_itu_pane

0x92d3,	// (0x00017614) cell_vitu_function_pane_ParamLimits

0x92d3,	// (0x00017614) cell_vitu_function_pane

0x92d3,	// (0x00017614) bg_popup_sub_pane_cp08_ParamLimits

0x92d3,	// (0x00017614) bg_popup_sub_pane_cp08

0x9a1a,	// (0x00017d5b) field_vitu_entry_pane_t1_ParamLimits

0x9a1a,	// (0x00017d5b) field_vitu_entry_pane_t1

0xc52e,	// (0x0001a86f) field_vitu_entry_pane_t2_ParamLimits

0xc52e,	// (0x0001a86f) field_vitu_entry_pane_t2

0x0001,

0xf749,	// (0x0001da8a) field_vitu_entry_pane_t_ParamLimits

0xf749,	// (0x0001da8a) field_vitu_entry_pane_t

0xbc3f,	// (0x00019f80) bg_button_pane_cp05_ParamLimits

0xbc3f,	// (0x00019f80) bg_button_pane_cp05

0xc54b,	// (0x0001a88c) cell_vitu_itu_pane_g1

0xa881,	// (0x00018bc2) cell_vitu_itu_pane_t1_ParamLimits

0xa881,	// (0x00018bc2) cell_vitu_itu_pane_t1

0xa881,	// (0x00018bc2) cell_vitu_itu_pane_t2_ParamLimits

0xa881,	// (0x00018bc2) cell_vitu_itu_pane_t2

0x0002,

0xf74e,	// (0x0001da8f) cell_vitu_itu_pane_t_ParamLimits

0xf74e,	// (0x0001da8f) cell_vitu_itu_pane_t

0x9264,	// (0x000175a5) bg_button_pane_cp07

0x9a10,	// (0x00017d51) cell_vitu_function_pane_g1

0x9a08,	// (0x00017d49) main_calc_pane_g1

0x0872,	// (0x0000ebb3) aid_visual_content_pane

0x9264,	// (0x000175a5) main_vradio_pane

0x99ca,	// (0x00017d0b) main_vradio_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) main_vradio_pane_g1

0x99d8,	// (0x00017d19) main_vradio_pane_g2_ParamLimits

0x99d8,	// (0x00017d19) main_vradio_pane_g2

0x0001,

0xf755,	// (0x0001da96) main_vradio_pane_g_ParamLimits

0xf755,	// (0x0001da96) main_vradio_pane_g

0x9a1a,	// (0x00017d5b) main_vradio_pane_t1_ParamLimits

0x9a1a,	// (0x00017d5b) main_vradio_pane_t1

0x9a1a,	// (0x00017d5b) main_vradio_pane_t2_ParamLimits

0x9a1a,	// (0x00017d5b) main_vradio_pane_t2

0x9a2e,	// (0x00017d6f) main_vradio_pane_t3_ParamLimits

0x9a2e,	// (0x00017d6f) main_vradio_pane_t3

0x0002,

0xf75a,	// (0x0001da9b) main_vradio_pane_t_ParamLimits

0xf75a,	// (0x0001da9b) main_vradio_pane_t

0x92d3,	// (0x00017614) vradio_rocker_control_pane_ParamLimits

0x92d3,	// (0x00017614) vradio_rocker_control_pane

0x92d3,	// (0x00017614) vradio_station_info_pane_ParamLimits

0x92d3,	// (0x00017614) vradio_station_info_pane

0x92d3,	// (0x00017614) vradio_frequency_info_pane_ParamLimits

0x92d3,	// (0x00017614) vradio_frequency_info_pane

0x9a10,	// (0x00017d51) vradio_station_info_pane_g1

0xa881,	// (0x00018bc2) vradio_station_info_pane_t1_ParamLimits

0xa881,	// (0x00018bc2) vradio_station_info_pane_t1

0x9a2e,	// (0x00017d6f) vradio_station_info_pane_t2_ParamLimits

0x9a2e,	// (0x00017d6f) vradio_station_info_pane_t2

0x0001,

0xf761,	// (0x0001daa2) vradio_station_info_pane_t_ParamLimits

0xf761,	// (0x0001daa2) vradio_station_info_pane_t

0x9264,	// (0x000175a5) vradio_tuning_pane

0x46ed,	// (0x00012a2e) vradio_rocker_control_pane_g1

0xc567,	// (0x0001a8a8) vradio_rocker_control_pane_g2

0x46f7,	// (0x00012a38) vradio_rocker_control_pane_g3

0x4701,	// (0x00012a42) vradio_rocker_control_pane_g4

0x470b,	// (0x00012a4c) vradio_rocker_control_pane_g5

0x0004,

0xf766,	// (0x0001daa7) vradio_rocker_control_pane_g

0x9a10,	// (0x00017d51) vradio_frequency_info_pane_g1

0x9a1a,	// (0x00017d5b) vradio_frequency_info_pane_t1_ParamLimits

0x9a1a,	// (0x00017d5b) vradio_frequency_info_pane_t1

0x4715,	// (0x00012a56) vradio_tuning_pane_g1

0x4722,	// (0x00012a63) vradio_tuning_pane_t1

0x9292,	// (0x000175d3) area_side_right_pane_ParamLimits

0x9292,	// (0x000175d3) area_side_right_pane

0xba77,	// (0x00019db8) status_small_pane_g1

0xba7f,	// (0x00019dc0) status_small_pane_g2

0xba88,	// (0x00019dc9) status_small_pane_g3

0xba91,	// (0x00019dd2) status_small_pane_g4

0x0003,

0xf532,	// (0x0001d873) status_small_pane_g

0xba9a,	// (0x00019ddb) status_small_pane_t1

0x9264,	// (0x000175a5) main_video3_pane

0x9264,	// (0x000175a5) cams_zoom_vslider_pane

0xc56f,	// (0x0001a8b0) image3_wide_pane_ParamLimits

0xc56f,	// (0x0001a8b0) image3_wide_pane

0x9264,	// (0x000175a5) image3_wide_small_pane

0xc589,	// (0x0001a8ca) main_video3_pane_g1_ParamLimits

0xc589,	// (0x0001a8ca) main_video3_pane_g1

0xc589,	// (0x0001a8ca) main_video3_pane_g2_ParamLimits

0xc589,	// (0x0001a8ca) main_video3_pane_g2

0x0001,

0xf771,	// (0x0001dab2) main_video3_pane_g_ParamLimits

0xf771,	// (0x0001dab2) main_video3_pane_g

0xc5a7,	// (0x0001a8e8) main_video3_pane_t1_ParamLimits

0xc5a7,	// (0x0001a8e8) main_video3_pane_t1

0xc5a7,	// (0x0001a8e8) main_video3_pane_t2_ParamLimits

0xc5a7,	// (0x0001a8e8) main_video3_pane_t2

0xc5a7,	// (0x0001a8e8) main_video3_pane_t3_ParamLimits

0xc5a7,	// (0x0001a8e8) main_video3_pane_t3

0x0002,

0xf776,	// (0x0001dab7) main_video3_pane_t_ParamLimits

0xf776,	// (0x0001dab7) main_video3_pane_t

0x9a10,	// (0x00017d51) cams_zoom_vslider_pane_g1

0x9a10,	// (0x00017d51) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x0001d3f0) cams_zoom_vslider_pane_g

0x9264,	// (0x000175a5) small_slider_vertical_pane

0x9a10,	// (0x00017d51) small_slider_vertical_pane_g1

0x9a10,	// (0x00017d51) small_slider_vertical_pane_g2

0xc5ce,	// (0x0001a90f) small_slider_vertical_pane_g3

0x0002,

0xf77d,	// (0x0001dabe) small_slider_vertical_pane_g

0x9264,	// (0x000175a5) main_hwr_training_pane

0xc5d7,	// (0x0001a918) hwr_training_instruct_pane_ParamLimits

0xc5d7,	// (0x0001a918) hwr_training_instruct_pane

0x4731,	// (0x00012a72) hwr_training_navi_pane_ParamLimits

0x4731,	// (0x00012a72) hwr_training_navi_pane

0x4750,	// (0x00012a91) hwr_training_write_pane_ParamLimits

0x4750,	// (0x00012a91) hwr_training_write_pane

0x9264,	// (0x000175a5) bg_frame_shadow_pane

0xc60e,	// (0x0001a94f) hwr_training_write_pane_g1

0xc616,	// (0x0001a957) hwr_training_write_pane_g2

0xc61e,	// (0x0001a95f) hwr_training_write_pane_g3

0xc626,	// (0x0001a967) hwr_training_write_pane_g4

0xc62e,	// (0x0001a96f) hwr_training_write_pane_g5

0xc636,	// (0x0001a977) hwr_training_write_pane_g6

0xc63e,	// (0x0001a97f) hwr_training_write_pane_g7

0x0006,

0xf784,	// (0x0001dac5) hwr_training_write_pane_g

0xc646,	// (0x0001a987) hwr_training_navi_pane_g1_ParamLimits

0xc646,	// (0x0001a987) hwr_training_navi_pane_g1

0xc658,	// (0x0001a999) hwr_training_navi_pane_g2_ParamLimits

0xc658,	// (0x0001a999) hwr_training_navi_pane_g2

0xc66a,	// (0x0001a9ab) hwr_training_navi_pane_g3_ParamLimits

0xc66a,	// (0x0001a9ab) hwr_training_navi_pane_g3

0xc67a,	// (0x0001a9bb) hwr_training_navi_pane_g4_ParamLimits

0xc67a,	// (0x0001a9bb) hwr_training_navi_pane_g4

0x0004,

0xf793,	// (0x0001dad4) hwr_training_navi_pane_g_ParamLimits

0xf793,	// (0x0001dad4) hwr_training_navi_pane_g

0xc687,	// (0x0001a9c8) hwr_training_navi_pane_t1

0x4798,	// (0x00012ad9) list_single_hwr_training_instruct_pane_ParamLimits

0x4798,	// (0x00012ad9) list_single_hwr_training_instruct_pane

0xc695,	// (0x0001a9d6) list_single_hwr_training_instruct_pane_t1

0xbeee,	// (0x0001a22f) bg_frame_shadow_pane_g1

0xc6a4,	// (0x0001a9e5) bg_frame_shadow_pane_g2

0xc6ac,	// (0x0001a9ed) bg_frame_shadow_pane_g3

0xc6b4,	// (0x0001a9f5) bg_frame_shadow_pane_g4

0xc6bc,	// (0x0001a9fd) bg_frame_shadow_pane_g5

0xc6c4,	// (0x0001aa05) bg_frame_shadow_pane_g6

0xc6cc,	// (0x0001aa0d) bg_frame_shadow_pane_g7

0x9b64,	// (0x00017ea5) bg_frame_shadow_pane_g8

0x0007,

0xf79e,	// (0x0001dadf) bg_frame_shadow_pane_g

0x9264,	// (0x000175a5) main_video_tele_dialer_pane

0x47ad,	// (0x00012aee) aid_size_cell_video_keypad_ParamLimits

0x47ad,	// (0x00012aee) aid_size_cell_video_keypad

0x47c7,	// (0x00012b08) grid_video_dialer_keypad_pane_ParamLimits

0x47c7,	// (0x00012b08) grid_video_dialer_keypad_pane

0x4813,	// (0x00012b54) video_down_pane_cp_ParamLimits

0x4813,	// (0x00012b54) video_down_pane_cp

0x4845,	// (0x00012b86) cell_video_dialer_keypad_pane_ParamLimits

0x4845,	// (0x00012b86) cell_video_dialer_keypad_pane

0xc6d4,	// (0x0001aa15) bg_button_pane_cp08_ParamLimits

0xc6d4,	// (0x0001aa15) bg_button_pane_cp08

0x4867,	// (0x00012ba8) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4867,	// (0x00012ba8) cell_video_dialer_keypad_pane_g1

0x4167,	// (0x000124a8) mup3_rocker2_pane_ParamLimits

0x4167,	// (0x000124a8) mup3_rocker2_pane

0x9a10,	// (0x00017d51) mup3_rocker2_pane_g1

0x33da,	// (0x0001171b) main_dialer2_pane

0x9264,	// (0x000175a5) main_mp4_pane

0xc6fe,	// (0x0001aa3f) main_mp4_pane_g1_ParamLimits

0xc6fe,	// (0x0001aa3f) main_mp4_pane_g1

0xc6fe,	// (0x0001aa3f) main_mp4_pane_g2_ParamLimits

0xc6fe,	// (0x0001aa3f) main_mp4_pane_g2

0x489e,	// (0x00012bdf) main_mp4_pane_g3_ParamLimits

0x489e,	// (0x00012bdf) main_mp4_pane_g3

0xc71c,	// (0x0001aa5d) main_mp4_pane_g4_ParamLimits

0xc71c,	// (0x0001aa5d) main_mp4_pane_g4

0xc744,	// (0x0001aa85) main_mp4_pane_g5_ParamLimits

0xc744,	// (0x0001aa85) main_mp4_pane_g5

0x0007,

0xf7be,	// (0x0001daff) main_mp4_pane_g_ParamLimits

0xf7be,	// (0x0001daff) main_mp4_pane_g

0xc7ac,	// (0x0001aaed) main_mp4_pane_t1_ParamLimits

0xc7ac,	// (0x0001aaed) main_mp4_pane_t1

0xc80e,	// (0x0001ab4f) main_mp4_pane_t2_ParamLimits

0xc80e,	// (0x0001ab4f) main_mp4_pane_t2

0xc872,	// (0x0001abb3) main_mp4_pane_t3_ParamLimits

0xc872,	// (0x0001abb3) main_mp4_pane_t3

0xc8d0,	// (0x0001ac11) main_mp4_pane_t4_ParamLimits

0xc8d0,	// (0x0001ac11) main_mp4_pane_t4

0x0003,

0xf7cf,	// (0x0001db10) main_mp4_pane_t_ParamLimits

0xf7cf,	// (0x0001db10) main_mp4_pane_t

0xc92e,	// (0x0001ac6f) mp4_progress_pane_ParamLimits

0xc92e,	// (0x0001ac6f) mp4_progress_pane

0xc962,	// (0x0001aca3) mp4_rocker_pane_ParamLimits

0xc962,	// (0x0001aca3) mp4_rocker_pane

0xc97e,	// (0x0001acbf) mp4_progress_pane_t1

0xc9a0,	// (0x0001ace1) mp4_progress_pane_t2

0x0001,

0xf7d8,	// (0x0001db19) mp4_progress_pane_t

0xc9c2,	// (0x0001ad03) mup_progress_pane_cp04

0x9a10,	// (0x00017d51) mp4_rocker_pane_g1

0x92d3,	// (0x00017614) aid_cell_size_keypad2_ParamLimits

0x92d3,	// (0x00017614) aid_cell_size_keypad2

0x92d3,	// (0x00017614) dialer2_ne_pane_ParamLimits

0x92d3,	// (0x00017614) dialer2_ne_pane

0x92d3,	// (0x00017614) grid_dialer2_keypad_pane_ParamLimits

0x92d3,	// (0x00017614) grid_dialer2_keypad_pane

0xbc3f,	// (0x00019f80) bg_popup_call_pane_cp07_ParamLimits

0xbc3f,	// (0x00019f80) bg_popup_call_pane_cp07

0x48ce,	// (0x00012c0f) dialer2_ne_pane_t1_ParamLimits

0x48ce,	// (0x00012c0f) dialer2_ne_pane_t1

0x490c,	// (0x00012c4d) cell_dialer2_keypad_pane_ParamLimits

0x490c,	// (0x00012c4d) cell_dialer2_keypad_pane

0xbc3f,	// (0x00019f80) bg_button_pane_pane_cp04_ParamLimits

0xbc3f,	// (0x00019f80) bg_button_pane_pane_cp04

0x99ca,	// (0x00017d0b) cell_dialer2_keypad_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) cell_dialer2_keypad_pane_g1

0x14c9,	// (0x0000f80a) aid_placing_vt_set_content_ParamLimits

0x14c9,	// (0x0000f80a) aid_placing_vt_set_content

0x14f1,	// (0x0000f832) aid_placing_vt_set_title_ParamLimits

0x14f1,	// (0x0000f832) aid_placing_vt_set_title

0x9264,	// (0x000175a5) main_image3_pane

0x4981,	// (0x00012cc2) area_side_right_pane_cp01_ParamLimits

0x4981,	// (0x00012cc2) area_side_right_pane_cp01

0x4998,	// (0x00012cd9) main_image3_pane_g1_ParamLimits

0x4998,	// (0x00012cd9) main_image3_pane_g1

0x49a6,	// (0x00012ce7) main_image3_pane_g2_ParamLimits

0x49a6,	// (0x00012ce7) main_image3_pane_g2

0x49ce,	// (0x00012d0f) main_image3_pane_g3_ParamLimits

0x49ce,	// (0x00012d0f) main_image3_pane_g3

0x49f8,	// (0x00012d39) main_image3_pane_g4_ParamLimits

0x49f8,	// (0x00012d39) main_image3_pane_g4

0x0003,

0xf7e7,	// (0x0001db28) main_image3_pane_g_ParamLimits

0xf7e7,	// (0x0001db28) main_image3_pane_g

0x4a22,	// (0x00012d63) main_image3_pane_t1_ParamLimits

0x4a22,	// (0x00012d63) main_image3_pane_t1

0x4a7a,	// (0x00012dbb) main_image3_pane_t2_ParamLimits

0x4a7a,	// (0x00012dbb) main_image3_pane_t2

0x4acc,	// (0x00012e0d) main_image3_pane_t3_ParamLimits

0x4acc,	// (0x00012e0d) main_image3_pane_t3

0x0003,

0xf7f0,	// (0x0001db31) main_image3_pane_t_ParamLimits

0xf7f0,	// (0x0001db31) main_image3_pane_t

0x92d3,	// (0x00017614) grid_sctrl_middle_pane_cp01_ParamLimits

0x92d3,	// (0x00017614) grid_sctrl_middle_pane_cp01

0x4b54,	// (0x00012e95) cell_sctrl_middle_pane_cp01_ParamLimits

0x4b54,	// (0x00012e95) cell_sctrl_middle_pane_cp01

0x4b71,	// (0x00012eb2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4b71,	// (0x00012eb2) cell_sctrl_middle_pane_cp01_g1

0x9264,	// (0x000175a5) main_call4_pane

0x4b87,	// (0x00012ec8) aid_size_button_call4_ParamLimits

0x4b87,	// (0x00012ec8) aid_size_button_call4

0x4bba,	// (0x00012efb) call4_windows_pane_ParamLimits

0x4bba,	// (0x00012efb) call4_windows_pane

0x4bd9,	// (0x00012f1a) grid_call4_button_pane_ParamLimits

0x4bd9,	// (0x00012f1a) grid_call4_button_pane

0x4c0c,	// (0x00012f4d) call4_windows_conf_pane

0x4c23,	// (0x00012f64) popup_call4_audio_first_window_ParamLimits

0x4c23,	// (0x00012f64) popup_call4_audio_first_window

0x4c73,	// (0x00012fb4) popup_call4_audio_second_window_ParamLimits

0x4c73,	// (0x00012fb4) popup_call4_audio_second_window

0x4c8a,	// (0x00012fcb) popup_call4_audio_wait_window_ParamLimits

0x4c8a,	// (0x00012fcb) popup_call4_audio_wait_window

0x4c98,	// (0x00012fd9) cell_call4_button_pane_ParamLimits

0x4c98,	// (0x00012fd9) cell_call4_button_pane

0x4cbd,	// (0x00012ffe) bg_button_pane_cp09_ParamLimits

0x4cbd,	// (0x00012ffe) bg_button_pane_cp09

0x4cc9,	// (0x0001300a) cell_call4_button_pane_g1_ParamLimits

0x4cc9,	// (0x0001300a) cell_call4_button_pane_g1

0x4cef,	// (0x00013030) cell_call4_button_pane_t1_ParamLimits

0x4cef,	// (0x00013030) cell_call4_button_pane_t1

0xca6f,	// (0x0001adb0) popup_call4_audio_conf_window_ParamLimits

0xca6f,	// (0x0001adb0) popup_call4_audio_conf_window

0x41c7,	// (0x00012508) mup3_progress_pane_t1_ParamLimits

0x41e6,	// (0x00012527) mup3_progress_pane_t2_ParamLimits

0xc246,	// (0x0001a587) mup3_progress_pane_t3_ParamLimits

0xf6ca,	// (0x0001da0b) mup3_progress_pane_t_ParamLimits

0xc263,	// (0x0001a5a4) mup_progress_pane_cp03_ParamLimits

0x46e5,	// (0x00012a26) mup3_control_keys_pane_g4_copy1

0xc962,	// (0x0001aca3) mp4_rocker2_pane_ParamLimits

0xc962,	// (0x0001aca3) mp4_rocker2_pane

0xca83,	// (0x0001adc4) mp4_rocker2_pane_g1

0xca83,	// (0x0001adc4) mp4_rocker2_pane_g2

0xca83,	// (0x0001adc4) mp4_rocker2_pane_g3

0xca83,	// (0x0001adc4) mp4_rocker2_pane_g4

0xca83,	// (0x0001adc4) mp4_rocker2_pane_g5

0x0004,

0xf7f9,	// (0x0001db3a) mp4_rocker2_pane_g

0x9264,	// (0x000175a5) main_camera4_pane

0x9264,	// (0x000175a5) main_video4_pane

0x47e1,	// (0x00012b22) main_video_tele_dialer_pane_t1_ParamLimits

0x47e1,	// (0x00012b22) main_video_tele_dialer_pane_t1

0x47fa,	// (0x00012b3b) main_video_tele_dialer_pane_t2_ParamLimits

0x47fa,	// (0x00012b3b) main_video_tele_dialer_pane_t2

0x0001,

0xf7af,	// (0x0001daf0) main_video_tele_dialer_pane_t_ParamLimits

0xf7af,	// (0x0001daf0) main_video_tele_dialer_pane_t

0x4d2d,	// (0x0001306e) cam4_autofocus_pane_ParamLimits

0x4d2d,	// (0x0001306e) cam4_autofocus_pane

0x4d43,	// (0x00013084) cam4_image_uncrop_pane_ParamLimits

0x4d43,	// (0x00013084) cam4_image_uncrop_pane

0x4d5d,	// (0x0001309e) cam4_indicators_pane_ParamLimits

0x4d5d,	// (0x0001309e) cam4_indicators_pane

0x4d88,	// (0x000130c9) main_camera4_pane_g1_ParamLimits

0x4d88,	// (0x000130c9) main_camera4_pane_g1

0x4d9a,	// (0x000130db) main_camera4_pane_g2_ParamLimits

0x4d9a,	// (0x000130db) main_camera4_pane_g2

0x4dad,	// (0x000130ee) main_camera4_pane_g3_ParamLimits

0x4dad,	// (0x000130ee) main_camera4_pane_g3

0x4dc0,	// (0x00013101) main_camera4_pane_g4_ParamLimits

0x4dc0,	// (0x00013101) main_camera4_pane_g4

0x4dd3,	// (0x00013114) main_camera4_pane_g5_ParamLimits

0x4dd3,	// (0x00013114) main_camera4_pane_g5

0x0005,

0xf804,	// (0x0001db45) main_camera4_pane_g_ParamLimits

0xf804,	// (0x0001db45) main_camera4_pane_g

0x4df7,	// (0x00013138) main_camera4_pane_t1_ParamLimits

0x4df7,	// (0x00013138) main_camera4_pane_t1

0x99ca,	// (0x00017d0b) bg_tb_trans_pane_cp06

0xcaaf,	// (0x0001adf0) cam4_indicators_pane_g1

0xcac0,	// (0x0001ae01) cam4_indicators_pane_g2

0x0002,

0xf81f,	// (0x0001db60) cam4_indicators_pane_g

0xcade,	// (0x0001ae1f) cam4_indicators_pane_t1

0x4e5b,	// (0x0001319c) main_video4_pane_g1_ParamLimits

0x4e5b,	// (0x0001319c) main_video4_pane_g1

0x4e6a,	// (0x000131ab) main_video4_pane_g2_ParamLimits

0x4e6a,	// (0x000131ab) main_video4_pane_g2

0x4e79,	// (0x000131ba) main_video4_pane_g3_ParamLimits

0x4e79,	// (0x000131ba) main_video4_pane_g3

0x4e88,	// (0x000131c9) main_video4_pane_g4_ParamLimits

0x4e88,	// (0x000131c9) main_video4_pane_g4

0x0004,

0xf826,	// (0x0001db67) main_video4_pane_g_ParamLimits

0xf826,	// (0x0001db67) main_video4_pane_g

0x4ea6,	// (0x000131e7) vid4_indicators_pane_ParamLimits

0x4ea6,	// (0x000131e7) vid4_indicators_pane

0x4ed4,	// (0x00013215) video4_image_uncrop_cif_pane_ParamLimits

0x4ed4,	// (0x00013215) video4_image_uncrop_cif_pane

0x4eee,	// (0x0001322f) video4_image_uncrop_nhd_pane_ParamLimits

0x4eee,	// (0x0001322f) video4_image_uncrop_nhd_pane

0x4d43,	// (0x00013084) video4_image_uncrop_vga_pane_ParamLimits

0x4d43,	// (0x00013084) video4_image_uncrop_vga_pane

0x92d3,	// (0x00017614) bg_tb_trans_pane_cp07

0xcb0a,	// (0x0001ae4b) vid4_indicators_pane_g1

0xcb1e,	// (0x0001ae5f) vid4_indicators_pane_g2

0xcb32,	// (0x0001ae73) vid4_indicators_pane_g3

0x0004,

0xf831,	// (0x0001db72) vid4_indicators_pane_g

0xcb61,	// (0x0001aea2) vid4_indicators_pane_t1

0x4f02,	// (0x00013243) cam4_autofocus_pane_g1

0x4f0a,	// (0x0001324b) cam4_autofocus_pane_g2

0x4f12,	// (0x00013253) cam4_autofocus_pane_g3

0x0002,

0xf83c,	// (0x0001db7d) cam4_autofocus_pane_g

0x4f1a,	// (0x0001325b) cam4_autofocus_pane_g3_copy1

0x4829,	// (0x00012b6a) video_down_pane_cp_t1

0x4837,	// (0x00012b78) video_down_pane_cp_t2

0x0001,

0xf7b4,	// (0x0001daf5) video_down_pane_cp_t

0x92d3,	// (0x00017614) popup_vitu2_window_ParamLimits

0x92d3,	// (0x00017614) popup_vitu2_window

0x4f22,	// (0x00013263) aid_size_cell2_itu2_ParamLimits

0x4f22,	// (0x00013263) aid_size_cell2_itu2

0x4f48,	// (0x00013289) aid_size_cell_itu2_ParamLimits

0x4f48,	// (0x00013289) aid_size_cell_itu2

0x4270,	// (0x000125b1) bg_popup_window_pane_cp09_ParamLimits

0x4270,	// (0x000125b1) bg_popup_window_pane_cp09

0x4fa4,	// (0x000132e5) field_vitu2_entry_pane_ParamLimits

0x4fa4,	// (0x000132e5) field_vitu2_entry_pane

0x4fca,	// (0x0001330b) grid_vitu2_function_pane_ParamLimits

0x4fca,	// (0x0001330b) grid_vitu2_function_pane

0x501b,	// (0x0001335c) grid_vitu2_itu_pane_ParamLimits

0x501b,	// (0x0001335c) grid_vitu2_itu_pane

0x50b1,	// (0x000133f2) cell_vitu2_itu_pane_ParamLimits

0x50b1,	// (0x000133f2) cell_vitu2_itu_pane

0x50dd,	// (0x0001341e) cell_vitu2_function_pane_ParamLimits

0x50dd,	// (0x0001341e) cell_vitu2_function_pane

0xcb78,	// (0x0001aeb9) bg_popup_call_pane_cp08_ParamLimits

0xcb78,	// (0x0001aeb9) bg_popup_call_pane_cp08

0xcb8f,	// (0x0001aed0) field_vitu2_entry_pane_g1

0xcb9b,	// (0x0001aedc) field_vitu2_entry_pane_g2

0x0002,

0xf843,	// (0x0001db84) field_vitu2_entry_pane_g

0x511c,	// (0x0001345d) field_vitu2_entry_pane_t1_ParamLimits

0x511c,	// (0x0001345d) field_vitu2_entry_pane_t1

0xcba7,	// (0x0001aee8) field_vitu2_entry_pane_t2_ParamLimits

0xcba7,	// (0x0001aee8) field_vitu2_entry_pane_t2

0x0001,

0xf84a,	// (0x0001db8b) field_vitu2_entry_pane_t_ParamLimits

0xf84a,	// (0x0001db8b) field_vitu2_entry_pane_t

0x514b,	// (0x0001348c) bg_button_pane_cp010_ParamLimits

0x514b,	// (0x0001348c) bg_button_pane_cp010

0x5159,	// (0x0001349a) cell_vitu2_itu_pane_g1

0x517f,	// (0x000134c0) cell_vitu2_itu_pane_t1_ParamLimits

0x517f,	// (0x000134c0) cell_vitu2_itu_pane_t1

0x51dd,	// (0x0001351e) cell_vitu2_itu_pane_t2_ParamLimits

0x51dd,	// (0x0001351e) cell_vitu2_itu_pane_t2

0x0002,

0xf854,	// (0x0001db95) cell_vitu2_itu_pane_t_ParamLimits

0xf854,	// (0x0001db95) cell_vitu2_itu_pane_t

0x92d3,	// (0x00017614) bg_button_pane_cp011

0x52c9,	// (0x0001360a) cell_vitu2_function_pane_g1

0x9264,	// (0x000175a5) main_myfav_hc_pane

0x4b1c,	// (0x00012e5d) popup_image3_note_pane_ParamLimits

0x4b1c,	// (0x00012e5d) popup_image3_note_pane

0x4b38,	// (0x00012e79) popup_image3_tool_bar_pane_ParamLimits

0x4b38,	// (0x00012e79) popup_image3_tool_bar_pane

0x526b,	// (0x000135ac) cell_vitu2_itu_pane_t3_ParamLimits

0x526b,	// (0x000135ac) cell_vitu2_itu_pane_t3

0x9264,	// (0x000175a5) bg_popup_trans_pane

0xcbcc,	// (0x0001af0d) grid_image3_tool_bar_pane

0xcbd6,	// (0x0001af17) bg_popup_trans_pane_g1

0x9ef0,	// (0x00018231) bg_popup_trans_pane_g2

0xcbde,	// (0x0001af1f) bg_popup_trans_pane_g3

0xcbe6,	// (0x0001af27) bg_popup_trans_pane_g4

0xcbee,	// (0x0001af2f) bg_popup_trans_pane_g5

0xcbf6,	// (0x0001af37) bg_popup_trans_pane_g6

0xcbfe,	// (0x0001af3f) bg_popup_trans_pane_g7

0xcc06,	// (0x0001af47) bg_popup_trans_pane_g8

0x9ed0,	// (0x00018211) bg_popup_trans_pane_g9

0x0008,

0xf85b,	// (0x0001db9c) bg_popup_trans_pane_g

0xcc0e,	// (0x0001af4f) cell_image3_tool_bar_pane_ParamLimits

0xcc0e,	// (0x0001af4f) cell_image3_tool_bar_pane

0x9a10,	// (0x00017d51) cell_image3_tool_bar_pane_g1

0x9264,	// (0x000175a5) bg_popup_trans_pane_cp1

0xcc22,	// (0x0001af63) popup_image3_note_pane_t1

0xcc30,	// (0x0001af71) popup_image3_note_pane_t2

0xcc3e,	// (0x0001af7f) popup_image3_note_pane_t3

0x0002,

0xf86e,	// (0x0001dbaf) popup_image3_note_pane_t

0xcc4c,	// (0x0001af8d) popup_image3_note_pane_t3_copy1

0x52dd,	// (0x0001361e) bg_myfav_hc_instruction_pane_ParamLimits

0x52dd,	// (0x0001361e) bg_myfav_hc_instruction_pane

0x52f1,	// (0x00013632) cell_myfav_contact_pane_ParamLimits

0x52f1,	// (0x00013632) cell_myfav_contact_pane

0x530f,	// (0x00013650) cell_myfav_contact_pane_cp1_ParamLimits

0x530f,	// (0x00013650) cell_myfav_contact_pane_cp1

0x5327,	// (0x00013668) cell_myfav_contact_pane_cp2_ParamLimits

0x5327,	// (0x00013668) cell_myfav_contact_pane_cp2

0x533f,	// (0x00013680) cell_myfav_contact_pane_cp3_ParamLimits

0x533f,	// (0x00013680) cell_myfav_contact_pane_cp3

0x5356,	// (0x00013697) cell_myfav_contact_pane_cp4_ParamLimits

0x5356,	// (0x00013697) cell_myfav_contact_pane_cp4

0x536e,	// (0x000136af) cell_myfav_contact_pane_cp5_ParamLimits

0x536e,	// (0x000136af) cell_myfav_contact_pane_cp5

0x5382,	// (0x000136c3) cell_myfav_contact_pane_cp6_ParamLimits

0x5382,	// (0x000136c3) cell_myfav_contact_pane_cp6

0x5398,	// (0x000136d9) cell_myfav_contact_pane_cp7_ParamLimits

0x5398,	// (0x000136d9) cell_myfav_contact_pane_cp7

0xcc5a,	// (0x0001af9b) listscroll_gen_pane_cp05

0x53b2,	// (0x000136f3) main_myfav_hc_pane_g1_ParamLimits

0x53b2,	// (0x000136f3) main_myfav_hc_pane_g1

0x53cc,	// (0x0001370d) main_myfav_hc_pane_g2_ParamLimits

0x53cc,	// (0x0001370d) main_myfav_hc_pane_g2

0x0002,

0xf875,	// (0x0001dbb6) main_myfav_hc_pane_g_ParamLimits

0xf875,	// (0x0001dbb6) main_myfav_hc_pane_g

0x53fe,	// (0x0001373f) main_myfav_hc_pane_t1_ParamLimits

0x53fe,	// (0x0001373f) main_myfav_hc_pane_t1

0xcc63,	// (0x0001afa4) main_myfav_hc_pane_t2_ParamLimits

0xcc63,	// (0x0001afa4) main_myfav_hc_pane_t2

0xcc75,	// (0x0001afb6) main_myfav_hc_pane_t3_ParamLimits

0xcc75,	// (0x0001afb6) main_myfav_hc_pane_t3

0x5415,	// (0x00013756) main_myfav_hc_pane_t4_ParamLimits

0x5415,	// (0x00013756) main_myfav_hc_pane_t4

0x0004,

0xf87c,	// (0x0001dbbd) main_myfav_hc_pane_t_ParamLimits

0xf87c,	// (0x0001dbbd) main_myfav_hc_pane_t

0x9a10,	// (0x00017d51) bg_myfav_hc_instruction_pane_g1

0xcc87,	// (0x0001afc8) cell_myfav_contact_pane_g1_ParamLimits

0xcc87,	// (0x0001afc8) cell_myfav_contact_pane_g1

0xcc87,	// (0x0001afc8) cell_myfav_contact_pane_g2_ParamLimits

0xcc87,	// (0x0001afc8) cell_myfav_contact_pane_g2

0xcc93,	// (0x0001afd4) cell_myfav_contact_pane_g3_ParamLimits

0xcc93,	// (0x0001afd4) cell_myfav_contact_pane_g3

0x99d8,	// (0x00017d19) cell_myfav_contact_pane_g4_ParamLimits

0x99d8,	// (0x00017d19) cell_myfav_contact_pane_g4

0xcca0,	// (0x0001afe1) cell_myfav_contact_pane_g5_ParamLimits

0xcca0,	// (0x0001afe1) cell_myfav_contact_pane_g5

0x0004,

0xf887,	// (0x0001dbc8) cell_myfav_contact_pane_g_ParamLimits

0xf887,	// (0x0001dbc8) cell_myfav_contact_pane_g

0x53e6,	// (0x00013727) main_myfav_hc_pane_g3_ParamLimits

0x53e6,	// (0x00013727) main_myfav_hc_pane_g3

0x09ad,	// (0x0000ecee) popup_adpt_find_window

0x543d,	// (0x0001377e) afind_page_pane_ParamLimits

0x543d,	// (0x0001377e) afind_page_pane

0x5452,	// (0x00013793) aid_size_cell_afind_ParamLimits

0x5452,	// (0x00013793) aid_size_cell_afind

0x5470,	// (0x000137b1) bg_popup_sub_pane_cp09_ParamLimits

0x5470,	// (0x000137b1) bg_popup_sub_pane_cp09

0x547d,	// (0x000137be) find_pane_cp01_ParamLimits

0x547d,	// (0x000137be) find_pane_cp01

0xccac,	// (0x0001afed) grid_afind_control_pane_ParamLimits

0xccac,	// (0x0001afed) grid_afind_control_pane

0x548a,	// (0x000137cb) grid_afind_pane_ParamLimits

0x548a,	// (0x000137cb) grid_afind_pane

0x54ac,	// (0x000137ed) cell_afind_pane_ParamLimits

0x54ac,	// (0x000137ed) cell_afind_pane

0x9a10,	// (0x00017d51) afind_page_pane_g1

0x5513,	// (0x00013854) afind_page_pane_g2

0x551b,	// (0x0001385c) afind_page_pane_g3

0x0002,

0xf892,	// (0x0001dbd3) afind_page_pane_g

0x5523,	// (0x00013864) afind_page_pane_t1

0xccd2,	// (0x0001b013) cell_afind_grid_control_pane_ParamLimits

0xccd2,	// (0x0001b013) cell_afind_grid_control_pane

0xcce1,	// (0x0001b022) bg_button_pane_cp69_ParamLimits

0xcce1,	// (0x0001b022) bg_button_pane_cp69

0x5531,	// (0x00013872) cell_afind_pane_g1_ParamLimits

0x5531,	// (0x00013872) cell_afind_pane_g1

0x553e,	// (0x0001387f) cell_afind_pane_t1_ParamLimits

0x553e,	// (0x0001387f) cell_afind_pane_t1

0xcced,	// (0x0001b02e) bg_button_pane_cp72

0xccf5,	// (0x0001b036) cell_afind_grid_control_pane_g1

0x2edb,	// (0x0001121c) aid_image_placing_area_ParamLimits

0x2edb,	// (0x0001121c) aid_image_placing_area

0x99ca,	// (0x00017d0b) field_vitu_entry_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) field_vitu_entry_pane_g1

0x99ca,	// (0x00017d0b) field_vitu_entry_pane_g2_ParamLimits

0x99ca,	// (0x00017d0b) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x0001d4fd) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x0001d4fd) field_vitu_entry_pane_g

0xc54b,	// (0x0001a88c) cell_vitu_itu_pane_g1_ParamLimits

0xc52e,	// (0x0001a86f) cell_vitu_itu_pane_t3_ParamLimits

0xc52e,	// (0x0001a86f) cell_vitu_itu_pane_t3

0xc97e,	// (0x0001acbf) mp4_progress_pane_t1_ParamLimits

0xc9a0,	// (0x0001ace1) mp4_progress_pane_t2_ParamLimits

0xf7d8,	// (0x0001db19) mp4_progress_pane_t_ParamLimits

0xc9c2,	// (0x0001ad03) mup_progress_pane_cp04_ParamLimits

0x5429,	// (0x0001376a) main_myfav_hc_pane_t5_ParamLimits

0x5429,	// (0x0001376a) main_myfav_hc_pane_t5

0x928a,	// (0x000175cb) aid_zoom_text_primary

0x09ad,	// (0x0000ecee) popup_adpt_find_window_ParamLimits

0x92d3,	// (0x00017614) main_cam_set_pane

0x4d74,	// (0x000130b5) cam4_zoom_pane_ParamLimits

0x4d74,	// (0x000130b5) cam4_zoom_pane

0x5550,	// (0x00013891) main_cam_set_pane_g1_ParamLimits

0x5550,	// (0x00013891) main_cam_set_pane_g1

0x555e,	// (0x0001389f) main_cam_set_pane_g2_ParamLimits

0x555e,	// (0x0001389f) main_cam_set_pane_g2

0x0001,

0xf899,	// (0x0001dbda) main_cam_set_pane_g_ParamLimits

0xf899,	// (0x0001dbda) main_cam_set_pane_g

0x557f,	// (0x000138c0) main_cam_set_pane_t1_ParamLimits

0x557f,	// (0x000138c0) main_cam_set_pane_t1

0x559a,	// (0x000138db) main_cset_listscroll_pane_ParamLimits

0x559a,	// (0x000138db) main_cset_listscroll_pane

0x55c0,	// (0x00013901) main_cset_slider_pane_ParamLimits

0x55c0,	// (0x00013901) main_cset_slider_pane

0xcd06,	// (0x0001b047) main_cset_list_pane_ParamLimits

0xcd06,	// (0x0001b047) main_cset_list_pane

0xcd16,	// (0x0001b057) scroll_pane_cp028

0x55e6,	// (0x00013927) aid_area_touch_slider

0x5602,	// (0x00013943) cset_slider_pane

0x5625,	// (0x00013966) main_cset_slider_pane_g1

0x563a,	// (0x0001397b) main_cset_slider_pane_g2

0x0011,

0xf89e,	// (0x0001dbdf) main_cset_slider_pane_g

0xcd4f,	// (0x0001b090) main_cset_slider_pane_t1

0x56f6,	// (0x00013a37) main_cset_slider_pane_t2

0x5710,	// (0x00013a51) main_cset_slider_pane_t3

0x572a,	// (0x00013a6b) main_cset_slider_pane_t4

0x5744,	// (0x00013a85) main_cset_slider_pane_t5

0x575e,	// (0x00013a9f) main_cset_slider_pane_t6

0x5773,	// (0x00013ab4) main_cset_slider_pane_t7

0x000e,

0xf8c3,	// (0x0001dc04) main_cset_slider_pane_t

0x5877,	// (0x00013bb8) cset_list_set_pane_ParamLimits

0x5877,	// (0x00013bb8) cset_list_set_pane

0xcde9,	// (0x0001b12a) aid_position_infowindow_above

0xcdf1,	// (0x0001b132) aid_position_infowindow_below

0xcdf9,	// (0x0001b13a) cset_list_set_pane_g1_ParamLimits

0xcdf9,	// (0x0001b13a) cset_list_set_pane_g1

0xce05,	// (0x0001b146) cset_list_set_pane_g3_ParamLimits

0xce05,	// (0x0001b146) cset_list_set_pane_g3

0x0001,

0xf8e2,	// (0x0001dc23) cset_list_set_pane_g_ParamLimits

0xf8e2,	// (0x0001dc23) cset_list_set_pane_g

0xce14,	// (0x0001b155) cset_list_set_pane_t1_ParamLimits

0xce14,	// (0x0001b155) cset_list_set_pane_t1

0x92d3,	// (0x00017614) list_highlight_pane_cp021_ParamLimits

0x92d3,	// (0x00017614) list_highlight_pane_cp021

0xa905,	// (0x00018c46) cset_slider_pane_g1

0xa917,	// (0x00018c58) cset_slider_pane_g2

0xa90e,	// (0x00018c4f) cset_slider_pane_g3

0x0002,

0xf8e7,	// (0x0001dc28) cset_slider_pane_g

0xce29,	// (0x0001b16a) aid_area_touch_cam4_zoom

0xce31,	// (0x0001b172) cam4_zoom_cont_pane

0xce39,	// (0x0001b17a) cam4_zoom_pane_g1

0xce41,	// (0x0001b182) cam4_zoom_pane_g2

0x5889,	// (0x00013bca) cam4_zoom_pane_g3

0x0002,

0xf8ee,	// (0x0001dc2f) cam4_zoom_pane_g

0xce49,	// (0x0001b18a) cam4_zoom_cont_pane_g1

0xce52,	// (0x0001b193) cam4_zoom_cont_pane_g2

0xce5b,	// (0x0001b19c) cam4_zoom_cont_pane_g3

0x0002,

0xf8f5,	// (0x0001dc36) cam4_zoom_cont_pane_g

0x4ba5,	// (0x00012ee6) call4_image_pane_ParamLimits

0x4ba5,	// (0x00012ee6) call4_image_pane

0x4c0c,	// (0x00012f4d) call4_windows_conf_pane_ParamLimits

0x4c51,	// (0x00012f92) popup_call4_audio_in_window_ParamLimits

0x4c51,	// (0x00012f92) popup_call4_audio_in_window

0x9264,	// (0x000175a5) bg_popup_call2_act_pane_cp02

0xca67,	// (0x0001ada8) call4_list_conf_pane

0x9a10,	// (0x00017d51) call4_image_pane_g1

0x9a10,	// (0x00017d51) call4_image_pane_g2

0x0001,

0xf0af,	// (0x0001d3f0) call4_image_pane_g

0xce64,	// (0x0001b1a5) list_single_graphic_popup_conf4_pane_ParamLimits

0xce64,	// (0x0001b1a5) list_single_graphic_popup_conf4_pane

0x9264,	// (0x000175a5) list_highlight_pane_cp022

0xce77,	// (0x0001b1b8) list_single_graphic_popup_conf4_pane_g1

0xa4b7,	// (0x000187f8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8fc,	// (0x0001dc3d) list_single_graphic_popup_conf4_pane_g

0xce7f,	// (0x0001b1c0) list_single_graphic_popup_conf4_pane_t1

0x1615,	// (0x0000f956) popup_vtel_slider_window_ParamLimits

0x1615,	// (0x0000f956) popup_vtel_slider_window

0xc9d5,	// (0x0001ad16) dialer2_ne_pane_t2_ParamLimits

0xc9d5,	// (0x0001ad16) dialer2_ne_pane_t2

0x0001,

0xf7dd,	// (0x0001db1e) dialer2_ne_pane_t_ParamLimits

0xf7dd,	// (0x0001db1e) dialer2_ne_pane_t

0xbc3f,	// (0x00019f80) bg_popup_sub_pane_cp010_ParamLimits

0xbc3f,	// (0x00019f80) bg_popup_sub_pane_cp010

0x5891,	// (0x00013bd2) popup_vtel_slider_window_g1_ParamLimits

0x5891,	// (0x00013bd2) popup_vtel_slider_window_g1

0x58a4,	// (0x00013be5) popup_vtel_slider_window_g2_ParamLimits

0x58a4,	// (0x00013be5) popup_vtel_slider_window_g2

0x0003,

0xf901,	// (0x0001dc42) popup_vtel_slider_window_g_ParamLimits

0xf901,	// (0x0001dc42) popup_vtel_slider_window_g

0x58fa,	// (0x00013c3b) vtel_slider_pane_ParamLimits

0x58fa,	// (0x00013c3b) vtel_slider_pane

0x591c,	// (0x00013c5d) vtel_slider_pane_g1_ParamLimits

0x591c,	// (0x00013c5d) vtel_slider_pane_g1

0x5930,	// (0x00013c71) vtel_slider_pane_g2_ParamLimits

0x5930,	// (0x00013c71) vtel_slider_pane_g2

0x5948,	// (0x00013c89) vtel_slider_pane_g3_ParamLimits

0x5948,	// (0x00013c89) vtel_slider_pane_g3

0x591c,	// (0x00013c5d) vtel_slider_pane_g4_ParamLimits

0x591c,	// (0x00013c5d) vtel_slider_pane_g4

0x595e,	// (0x00013c9f) vtel_slider_pane_g5_ParamLimits

0x595e,	// (0x00013c9f) vtel_slider_pane_g5

0x0004,

0xf90a,	// (0x0001dc4b) vtel_slider_pane_g_ParamLimits

0xf90a,	// (0x0001dc4b) vtel_slider_pane_g

0x92d3,	// (0x00017614) main_gallery2_pane

0x4f74,	// (0x000132b5) aid_size_row_itut2_dropdow_list_ParamLimits

0x4f74,	// (0x000132b5) aid_size_row_itut2_dropdow_list

0x4ff2,	// (0x00013333) grid_vitu2_function_top_pane_ParamLimits

0x4ff2,	// (0x00013333) grid_vitu2_function_top_pane

0x505c,	// (0x0001339d) popup_vitu2_dropdown_list_window_ParamLimits

0x505c,	// (0x0001339d) popup_vitu2_dropdown_list_window

0x5083,	// (0x000133c4) popup_vitu2_match_list_window

0x5974,	// (0x00013cb5) cell_vitu2_function_top_pane_ParamLimits

0x5974,	// (0x00013cb5) cell_vitu2_function_top_pane

0x598c,	// (0x00013ccd) cell_vitu2_function_top_pane_cp01_ParamLimits

0x598c,	// (0x00013ccd) cell_vitu2_function_top_pane_cp01

0x59a8,	// (0x00013ce9) cell_vitu2_function_top_wide_pane_ParamLimits

0x59a8,	// (0x00013ce9) cell_vitu2_function_top_wide_pane

0x92d3,	// (0x00017614) bg_button_pane_cp012

0x59c6,	// (0x00013d07) cell_vitu2_function_top_pane_g1

0xcea1,	// (0x0001b1e2) bg_button_pane_cp013_ParamLimits

0xcea1,	// (0x0001b1e2) bg_button_pane_cp013

0x59da,	// (0x00013d1b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x59da,	// (0x00013d1b) cell_vitu2_function_top_wide_pane_g1

0x92d3,	// (0x00017614) bg_popup_sub_pane_cp20

0x59f2,	// (0x00013d33) list_vitu2_match_list_pane

0xcbd6,	// (0x0001af17) bg_popup_sub_pane_cp20_g1

0xcbde,	// (0x0001af1f) bg_popup_sub_pane_cp20_g2

0x9ef0,	// (0x00018231) bg_popup_sub_pane_cp20_g3

0xcbe6,	// (0x0001af27) bg_popup_sub_pane_cp20_g4

0x9ed0,	// (0x00018211) bg_popup_sub_pane_cp20_g5

0xcebd,	// (0x0001b1fe) bg_popup_sub_pane_cp20_g6

0xcbf6,	// (0x0001af37) bg_popup_sub_pane_cp20_g7

0xcbfe,	// (0x0001af3f) bg_popup_sub_pane_cp20_g8

0xcc06,	// (0x0001af47) bg_popup_sub_pane_cp20_g9

0x0008,

0xf915,	// (0x0001dc56) bg_popup_sub_pane_cp20_g

0xcec5,	// (0x0001b206) list_vitu2_match_list_item_pane_ParamLimits

0xcec5,	// (0x0001b206) list_vitu2_match_list_item_pane

0xced7,	// (0x0001b218) list_vitu2_match_list_item_pane_t1

0x9264,	// (0x000175a5) bg_popup_sub_pane_cp21

0x9ccd,	// (0x0001800e) grid_vitu2_dropdown_list_pane

0x5a0a,	// (0x00013d4b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5a0a,	// (0x00013d4b) cell_vitu2_dropdown_list_char_pane

0x5a2a,	// (0x00013d6b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5a2a,	// (0x00013d6b) cell_vitu2_dropdown_list_ctrl_pane

0xcee5,	// (0x0001b226) cell_vitu2_dropdown_list_char_pane_g1

0xceee,	// (0x0001b22f) cell_vitu2_dropdown_list_char_pane_g2

0xcef7,	// (0x0001b238) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf928,	// (0x0001dc69) cell_vitu2_dropdown_list_char_pane_g

0x5a52,	// (0x00013d93) cell_vitu2_dropdown_list_char_pane_t1

0x5a60,	// (0x00013da1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5a60,	// (0x00013da1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5a6d,	// (0x00013dae) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5a6d,	// (0x00013dae) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5a7a,	// (0x00013dbb) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5a7a,	// (0x00013dbb) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5a87,	// (0x00013dc8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5a87,	// (0x00013dc8) cell_vitu2_dropdown_list_ctrl_pane_g4

0x99ca,	// (0x00017d0b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x99ca,	// (0x00017d0b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf92f,	// (0x0001dc70) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf92f,	// (0x0001dc70) cell_vitu2_dropdown_list_ctrl_pane_g

0x5aa3,	// (0x00013de4) aid_size_cell_gallery2_ParamLimits

0x5aa3,	// (0x00013de4) aid_size_cell_gallery2

0x5ac1,	// (0x00013e02) grid_gallery2_pane_ParamLimits

0x5ac1,	// (0x00013e02) grid_gallery2_pane

0x5adb,	// (0x00013e1c) scroll_pane_cp029_ParamLimits

0x5adb,	// (0x00013e1c) scroll_pane_cp029

0x5aec,	// (0x00013e2d) cell_gallery2_pane_ParamLimits

0x5aec,	// (0x00013e2d) cell_gallery2_pane

0xcf00,	// (0x0001b241) cell_gallery2_pane_g2

0x5b4b,	// (0x00013e8c) cell_gallery2_pane_g3

0xcf08,	// (0x0001b249) cell_gallery2_pane_g4

0xcf10,	// (0x0001b251) cell_gallery2_pane_g5

0x9ccd,	// (0x0001800e) grid_highlight_pane_cp10

0x5083,	// (0x000133c4) popup_vitu2_match_list_window_ParamLimits

0x5098,	// (0x000133d9) popup_vitu2_query_window_ParamLimits

0x5098,	// (0x000133d9) popup_vitu2_query_window

0x9264,	// (0x000175a5) bg_vitu2_candi_button_pane

0xcee5,	// (0x0001b226) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xceee,	// (0x0001b22f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcef7,	// (0x0001b238) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5b53,	// (0x00013e94) bg_button_pane_cp015

0x5b64,	// (0x00013ea5) bg_button_pane_cp016

0x5b70,	// (0x00013eb1) bg_button_pane_cp017

0xa895,	// (0x00018bd6) bg_popup_sub_pane_cp22

0xcf18,	// (0x0001b259) popup_vitu2_query_window_g1

0x5bae,	// (0x00013eef) popup_vitu2_query_window_g2

0x0002,

0xf93a,	// (0x0001dc7b) popup_vitu2_query_window_g

0x5bd0,	// (0x00013f11) popup_vitu2_query_window_t1_ParamLimits

0x5bd0,	// (0x00013f11) popup_vitu2_query_window_t1

0x5c03,	// (0x00013f44) popup_vitu2_query_window_t2_ParamLimits

0x5c03,	// (0x00013f44) popup_vitu2_query_window_t2

0x5c15,	// (0x00013f56) popup_vitu2_query_window_t3_ParamLimits

0x5c15,	// (0x00013f56) popup_vitu2_query_window_t3

0x5c3d,	// (0x00013f7e) popup_vitu2_query_window_t4_ParamLimits

0x5c3d,	// (0x00013f7e) popup_vitu2_query_window_t4

0x5c51,	// (0x00013f92) popup_vitu2_query_window_t5_ParamLimits

0x5c51,	// (0x00013f92) popup_vitu2_query_window_t5

0x0006,

0xf941,	// (0x0001dc82) popup_vitu2_query_window_t_ParamLimits

0xf941,	// (0x0001dc82) popup_vitu2_query_window_t

0xccfe,	// (0x0001b03f) main_cset_text_pane

0x55e6,	// (0x00013927) aid_area_touch_slider_ParamLimits

0x5602,	// (0x00013943) cset_slider_pane_ParamLimits

0x5625,	// (0x00013966) main_cset_slider_pane_g1_ParamLimits

0x563a,	// (0x0001397b) main_cset_slider_pane_g2_ParamLimits

0xcd1f,	// (0x0001b060) main_cset_slider_pane_g3_ParamLimits

0xcd1f,	// (0x0001b060) main_cset_slider_pane_g3

0x564f,	// (0x00013990) main_cset_slider_pane_g4_ParamLimits

0x564f,	// (0x00013990) main_cset_slider_pane_g4

0x565e,	// (0x0001399f) main_cset_slider_pane_g5_ParamLimits

0x565e,	// (0x0001399f) main_cset_slider_pane_g5

0x566a,	// (0x000139ab) main_cset_slider_pane_g6_ParamLimits

0x566a,	// (0x000139ab) main_cset_slider_pane_g6

0xf89e,	// (0x0001dbdf) main_cset_slider_pane_g_ParamLimits

0xcd4f,	// (0x0001b090) main_cset_slider_pane_t1_ParamLimits

0x56f6,	// (0x00013a37) main_cset_slider_pane_t2_ParamLimits

0x5710,	// (0x00013a51) main_cset_slider_pane_t3_ParamLimits

0x572a,	// (0x00013a6b) main_cset_slider_pane_t4_ParamLimits

0x5744,	// (0x00013a85) main_cset_slider_pane_t5_ParamLimits

0x575e,	// (0x00013a9f) main_cset_slider_pane_t6_ParamLimits

0x5773,	// (0x00013ab4) main_cset_slider_pane_t7_ParamLimits

0x579d,	// (0x00013ade) main_cset_slider_pane_t8_ParamLimits

0x579d,	// (0x00013ade) main_cset_slider_pane_t8

0x57c5,	// (0x00013b06) main_cset_slider_pane_t9_ParamLimits

0x57c5,	// (0x00013b06) main_cset_slider_pane_t9

0x57ed,	// (0x00013b2e) main_cset_slider_pane_t10_ParamLimits

0x57ed,	// (0x00013b2e) main_cset_slider_pane_t10

0x5815,	// (0x00013b56) main_cset_slider_pane_t11_ParamLimits

0x5815,	// (0x00013b56) main_cset_slider_pane_t11

0x583d,	// (0x00013b7e) main_cset_slider_pane_t12_ParamLimits

0x583d,	// (0x00013b7e) main_cset_slider_pane_t12

0x585a,	// (0x00013b9b) main_cset_slider_pane_t13_ParamLimits

0x585a,	// (0x00013b9b) main_cset_slider_pane_t13

0xf8c3,	// (0x0001dc04) main_cset_slider_pane_t_ParamLimits

0x9264,	// (0x000175a5) bg_popup_sub_pane_cp011

0xcf24,	// (0x0001b265) main_cset_text_pane_g1

0xcf2c,	// (0x0001b26d) main_cset_text_pane_t1

0xcf3a,	// (0x0001b27b) main_cset_text_pane_t2

0xcf48,	// (0x0001b289) main_cset_text_pane_t3

0xcf56,	// (0x0001b297) main_cset_text_pane_t4

0xcf64,	// (0x0001b2a5) main_cset_text_pane_t5

0xcf72,	// (0x0001b2b3) main_cset_text_pane_t6

0xcf80,	// (0x0001b2c1) main_cset_text_pane_t7

0x0006,

0xf950,	// (0x0001dc91) main_cset_text_pane_t

0x9264,	// (0x000175a5) main_cam4_burst_pane

0x9264,	// (0x000175a5) main_cam5_pane

0xccc0,	// (0x0001b001) bg_button_pane_cp019

0xccc9,	// (0x0001b00a) bg_button_pane_cp020

0xcd2b,	// (0x0001b06c) main_cset_slider_pane_g7_ParamLimits

0xcd2b,	// (0x0001b06c) main_cset_slider_pane_g7

0xcd37,	// (0x0001b078) main_cset_slider_pane_g8_ParamLimits

0xcd37,	// (0x0001b078) main_cset_slider_pane_g8

0x567e,	// (0x000139bf) main_cset_slider_pane_g9_ParamLimits

0x567e,	// (0x000139bf) main_cset_slider_pane_g9

0x568a,	// (0x000139cb) main_cset_slider_pane_g10_ParamLimits

0x568a,	// (0x000139cb) main_cset_slider_pane_g10

0x5696,	// (0x000139d7) main_cset_slider_pane_g11_ParamLimits

0x5696,	// (0x000139d7) main_cset_slider_pane_g11

0x56a2,	// (0x000139e3) main_cset_slider_pane_g12_ParamLimits

0x56a2,	// (0x000139e3) main_cset_slider_pane_g12

0x56ae,	// (0x000139ef) main_cset_slider_pane_g13_ParamLimits

0x56ae,	// (0x000139ef) main_cset_slider_pane_g13

0x56ba,	// (0x000139fb) main_cset_slider_pane_g14_ParamLimits

0x56ba,	// (0x000139fb) main_cset_slider_pane_g14

0x56c6,	// (0x00013a07) main_cset_slider_pane_g15_ParamLimits

0x56c6,	// (0x00013a07) main_cset_slider_pane_g15

0xcd77,	// (0x0001b0b8) main_cset_slider_pane_t14_ParamLimits

0xcd77,	// (0x0001b0b8) main_cset_slider_pane_t14

0xcdb0,	// (0x0001b0f1) main_cset_slider_pane_t15_ParamLimits

0xcdb0,	// (0x0001b0f1) main_cset_slider_pane_t15

0x5cbb,	// (0x00013ffc) aid_cam4_burst_size_cell_ParamLimits

0x5cbb,	// (0x00013ffc) aid_cam4_burst_size_cell

0x5cdb,	// (0x0001401c) grid_cam4_burst_pane_ParamLimits

0x5cdb,	// (0x0001401c) grid_cam4_burst_pane

0x5d13,	// (0x00014054) linegrid_cam4_burst_pane_ParamLimits

0x5d13,	// (0x00014054) linegrid_cam4_burst_pane

0xcf8e,	// (0x0001b2cf) scroll_pane_cp30_ParamLimits

0xcf8e,	// (0x0001b2cf) scroll_pane_cp30

0x5d37,	// (0x00014078) cell_cam4_burst_pane_ParamLimits

0x5d37,	// (0x00014078) cell_cam4_burst_pane

0xcf9a,	// (0x0001b2db) linegrid_cam4_burst_pane_g1_ParamLimits

0xcf9a,	// (0x0001b2db) linegrid_cam4_burst_pane_g1

0x5d84,	// (0x000140c5) linegrid_cam4_burst_pane_g2_ParamLimits

0x5d84,	// (0x000140c5) linegrid_cam4_burst_pane_g2

0xcfa7,	// (0x0001b2e8) linegrid_cam4_burst_pane_g3_ParamLimits

0xcfa7,	// (0x0001b2e8) linegrid_cam4_burst_pane_g3

0x0002,

0xf95f,	// (0x0001dca0) linegrid_cam4_burst_pane_g_ParamLimits

0xf95f,	// (0x0001dca0) linegrid_cam4_burst_pane_g

0x5d95,	// (0x000140d6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5d95,	// (0x000140d6) linegrid_cam4_burst_pane_g3_copy1

0xcfb4,	// (0x0001b2f5) linegrid_cam4_burst_pane_g4_ParamLimits

0xcfb4,	// (0x0001b2f5) linegrid_cam4_burst_pane_g4

0x5daf,	// (0x000140f0) linegrid_cam4_burst_pane_g5_ParamLimits

0x5daf,	// (0x000140f0) linegrid_cam4_burst_pane_g5

0x5dc0,	// (0x00014101) linegrid_cam4_burst_pane_g6_ParamLimits

0x5dc0,	// (0x00014101) linegrid_cam4_burst_pane_g6

0xcfc1,	// (0x0001b302) linegrid_cam4_burst_pane_g7_ParamLimits

0xcfc1,	// (0x0001b302) linegrid_cam4_burst_pane_g7

0x5dd7,	// (0x00014118) cell_cam4_burst_pane_g1

0xcfda,	// (0x0001b31b) main_cam5_pane_t1_ParamLimits

0xcfda,	// (0x0001b31b) main_cam5_pane_t1

0xcfec,	// (0x0001b32d) main_cam5_pane_t2_ParamLimits

0xcfec,	// (0x0001b32d) main_cam5_pane_t2

0xcffe,	// (0x0001b33f) main_cam5_pane_t3_ParamLimits

0xcffe,	// (0x0001b33f) main_cam5_pane_t3

0xd010,	// (0x0001b351) main_cam5_pane_t4_ParamLimits

0xd010,	// (0x0001b351) main_cam5_pane_t4

0xd028,	// (0x0001b369) main_cam5_pane_t5_ParamLimits

0xd028,	// (0x0001b369) main_cam5_pane_t5

0xd03c,	// (0x0001b37d) main_cam5_pane_t6_ParamLimits

0xd03c,	// (0x0001b37d) main_cam5_pane_t6

0xd050,	// (0x0001b391) main_cam5_pane_t7_ParamLimits

0xd050,	// (0x0001b391) main_cam5_pane_t7

0xd062,	// (0x0001b3a3) main_cam5_pane_t8_ParamLimits

0xd062,	// (0x0001b3a3) main_cam5_pane_t8

0xd07e,	// (0x0001b3bf) main_cam5_pane_t9_ParamLimits

0xd07e,	// (0x0001b3bf) main_cam5_pane_t9

0xd090,	// (0x0001b3d1) main_cam5_pane_t10_ParamLimits

0xd090,	// (0x0001b3d1) main_cam5_pane_t10

0xd0a2,	// (0x0001b3e3) main_cam5_pane_t11_ParamLimits

0xd0a2,	// (0x0001b3e3) main_cam5_pane_t11

0xd0b4,	// (0x0001b3f5) main_cam5_pane_t12_ParamLimits

0xd0b4,	// (0x0001b3f5) main_cam5_pane_t12

0xd0c9,	// (0x0001b40a) main_cam5_pane_t13_ParamLimits

0xd0c9,	// (0x0001b40a) main_cam5_pane_t13

0x000c,

0xf96b,	// (0x0001dcac) main_cam5_pane_t_ParamLimits

0xf96b,	// (0x0001dcac) main_cam5_pane_t

0x0a2e,	// (0x0000ed6f) popup_scut_keymap_window_ParamLimits

0x0a2e,	// (0x0000ed6f) popup_scut_keymap_window

0x5dea,	// (0x0001412b) aid_size_cell_brow_shortcut

0x9ccd,	// (0x0001800e) bg_popup_window_pane_cp010

0x5df6,	// (0x00014137) grid_scut_pane

0x5e02,	// (0x00014143) cell_scut_pane_ParamLimits

0x5e02,	// (0x00014143) cell_scut_pane

0x5e19,	// (0x0001415a) cell_scut_pane_g1

0xd0e6,	// (0x0001b427) cell_scut_pane_t1

0xd0f5,	// (0x0001b436) cell_scut_pane_t2

0x5e22,	// (0x00014163) cell_scut_pane_t3

0x0002,

0xf986,	// (0x0001dcc7) cell_scut_pane_t

0x3d80,	// (0x000120c1) main_mup3_pane_g8_ParamLimits

0x3d80,	// (0x000120c1) main_mup3_pane_g8

0x4f8c,	// (0x000132cd) area_vitu2_query_pane_ParamLimits

0x4f8c,	// (0x000132cd) area_vitu2_query_pane

0x5b7c,	// (0x00013ebd) input_focus_pane_cp08

0xd104,	// (0x0001b445) area_vitu2_query_pane_g1

0x5e30,	// (0x00014171) area_vitu2_query_pane_g2

0x0001,

0xf98d,	// (0x0001dcce) area_vitu2_query_pane_g

0x5e3f,	// (0x00014180) area_vitu2_query_pane_t1_ParamLimits

0x5e3f,	// (0x00014180) area_vitu2_query_pane_t1

0x5e53,	// (0x00014194) area_vitu2_query_pane_t2_ParamLimits

0x5e53,	// (0x00014194) area_vitu2_query_pane_t2

0x5e67,	// (0x000141a8) area_vitu2_query_pane_t3_ParamLimits

0x5e67,	// (0x000141a8) area_vitu2_query_pane_t3

0xd110,	// (0x0001b451) area_vitu2_query_pane_t4_ParamLimits

0xd110,	// (0x0001b451) area_vitu2_query_pane_t4

0xd138,	// (0x0001b479) area_vitu2_query_pane_t5_ParamLimits

0xd138,	// (0x0001b479) area_vitu2_query_pane_t5

0xd160,	// (0x0001b4a1) area_vitu2_query_pane_t6_ParamLimits

0xd160,	// (0x0001b4a1) area_vitu2_query_pane_t6

0x0006,

0xf992,	// (0x0001dcd3) area_vitu2_query_pane_t_ParamLimits

0xf992,	// (0x0001dcd3) area_vitu2_query_pane_t

0x5e8f,	// (0x000141d0) bg_button_pane_cp018

0x5e9b,	// (0x000141dc) bg_button_pane_cp021

0x5ea7,	// (0x000141e8) bg_button_pane_cp022

0x5ec6,	// (0x00014207) input_focus_pane_cp09

0xa5f3,	// (0x00018934) aid_size_touch_mv_arrow_left

0xa61c,	// (0x0001895d) aid_size_touch_mv_arrow_right

0x56de,	// (0x00013a1f) main_cset_slider_pane_g16_ParamLimits

0x56de,	// (0x00013a1f) main_cset_slider_pane_g16

0x56ea,	// (0x00013a2b) main_cset_slider_pane_g17_ParamLimits

0x56ea,	// (0x00013a2b) main_cset_slider_pane_g17

0x5dd7,	// (0x00014118) cell_cam4_burst_pane_g1_ParamLimits

0x9264,	// (0x000175a5) compa_mode_pane

0x58b4,	// (0x00013bf5) popup_vtel_slider_window_g3_ParamLimits

0x58b4,	// (0x00013bf5) popup_vtel_slider_window_g3

0x58cb,	// (0x00013c0c) popup_vtel_slider_window_g4_ParamLimits

0x58cb,	// (0x00013c0c) popup_vtel_slider_window_g4

0x58e2,	// (0x00013c23) popup_vtel_slider_window_t1_ParamLimits

0x58e2,	// (0x00013c23) popup_vtel_slider_window_t1

0x9264,	// (0x000175a5) main_cl_pane

0xbad6,	// (0x00019e17) popup_imed_adjust2_window_ParamLimits

0xa895,	// (0x00018bd6) bg_tb_trans_pane_cp05_ParamLimits

0xc46b,	// (0x0001a7ac) popup_imed_adjust2_window_g1_ParamLimits

0xc47a,	// (0x0001a7bb) popup_imed_adjust2_window_g2_ParamLimits

0xc47a,	// (0x0001a7bb) popup_imed_adjust2_window_g2

0xc486,	// (0x0001a7c7) popup_imed_adjust2_window_g3_ParamLimits

0xc486,	// (0x0001a7c7) popup_imed_adjust2_window_g3

0x0002,

0xf70d,	// (0x0001da4e) popup_imed_adjust2_window_g_ParamLimits

0xf70d,	// (0x0001da4e) popup_imed_adjust2_window_g

0xc492,	// (0x0001a7d3) popup_imed_adjust2_window_t1_ParamLimits

0xc4aa,	// (0x0001a7eb) slider_imed_adjust_pane_ParamLimits

0xc4be,	// (0x0001a7ff) slider_imed_adjust_pane_g1_ParamLimits

0xc4ce,	// (0x0001a80f) slider_imed_adjust_pane_g2_ParamLimits

0xc4de,	// (0x0001a81f) slider_imed_adjust_pane_g3_ParamLimits

0xc4ef,	// (0x0001a830) slider_imed_adjust_pane_g4_ParamLimits

0xf714,	// (0x0001da55) slider_imed_adjust_pane_g_ParamLimits

0x4d15,	// (0x00013056) aid_touch_area_cam4_ParamLimits

0x4d15,	// (0x00013056) aid_touch_area_cam4

0xca8b,	// (0x0001adcc) battery_pane_cp01

0x4de4,	// (0x00013125) main_camera4_pane_g6_ParamLimits

0x4de4,	// (0x00013125) main_camera4_pane_g6

0x4e0e,	// (0x0001314f) main_camera4_pane_t2_ParamLimits

0x4e0e,	// (0x0001314f) main_camera4_pane_t2

0x0001,

0xf811,	// (0x0001db52) main_camera4_pane_t_ParamLimits

0xf811,	// (0x0001db52) main_camera4_pane_t

0x4e43,	// (0x00013184) aid_touch_area_vid4_ParamLimits

0x4e43,	// (0x00013184) aid_touch_area_vid4

0x4e97,	// (0x000131d8) main_video4_pane_g5_ParamLimits

0x4e97,	// (0x000131d8) main_video4_pane_g5

0x4ebc,	// (0x000131fd) vid4_progress_pane_ParamLimits

0x4ebc,	// (0x000131fd) vid4_progress_pane

0xcd43,	// (0x0001b084) main_cset_slider_pane_g18_ParamLimits

0xcd43,	// (0x0001b084) main_cset_slider_pane_g18

0xcfce,	// (0x0001b30f) cell_cam4_burst_pane_g2_ParamLimits

0xcfce,	// (0x0001b30f) cell_cam4_burst_pane_g2

0x0001,

0xf966,	// (0x0001dca7) cell_cam4_burst_pane_g_ParamLimits

0xf966,	// (0x0001dca7) cell_cam4_burst_pane_g

0x9a88,	// (0x00017dc9) bg_cl_pane_ParamLimits

0x9a88,	// (0x00017dc9) bg_cl_pane

0x5ed6,	// (0x00014217) cl_header_pane_ParamLimits

0x5ed6,	// (0x00014217) cl_header_pane

0x5eea,	// (0x0001422b) cl_listscroll_pane_ParamLimits

0x5eea,	// (0x0001422b) cl_listscroll_pane

0xd1ac,	// (0x0001b4ed) bg_cl_pane_g1

0xd1b4,	// (0x0001b4f5) bg_cl_pane_g2

0xd1bc,	// (0x0001b4fd) bg_cl_pane_g3

0xd1c4,	// (0x0001b505) bg_cl_pane_g4

0xd1cc,	// (0x0001b50d) bg_cl_pane_g5

0xd1d4,	// (0x0001b515) bg_cl_pane_g6

0xd1dc,	// (0x0001b51d) bg_cl_pane_g7

0xd1e4,	// (0x0001b525) bg_cl_pane_g8

0xd1ec,	// (0x0001b52d) bg_cl_pane_g9

0x0008,

0xf9a1,	// (0x0001dce2) bg_cl_pane_g

0x5efa,	// (0x0001423b) aid_height_cl_leading_ParamLimits

0x5efa,	// (0x0001423b) aid_height_cl_leading

0x5f06,	// (0x00014247) aid_height_cl_text_ParamLimits

0x5f06,	// (0x00014247) aid_height_cl_text

0x92d3,	// (0x00017614) bg_cl_header_pane_ParamLimits

0x92d3,	// (0x00017614) bg_cl_header_pane

0x5f25,	// (0x00014266) cl_header_pane_g1_ParamLimits

0x5f25,	// (0x00014266) cl_header_pane_g1

0x5f3b,	// (0x0001427c) cl_header_pane_t1_ParamLimits

0x5f3b,	// (0x0001427c) cl_header_pane_t1

0xd1f4,	// (0x0001b535) cl_list_pane

0xcd16,	// (0x0001b057) hc_scroll_pane_cp01

0x9ed0,	// (0x00018211) bg_cl_header_pane_g1

0xcbd6,	// (0x0001af17) bg_cl_header_pane_g2

0x9ef0,	// (0x00018231) bg_cl_header_pane_g3

0xcbe6,	// (0x0001af27) bg_cl_header_pane_g4

0xcbde,	// (0x0001af1f) bg_cl_header_pane_g5

0xcebd,	// (0x0001b1fe) bg_cl_header_pane_g6

0xcbfe,	// (0x0001af3f) bg_cl_header_pane_g7

0xcc06,	// (0x0001af47) bg_cl_header_pane_g8

0xcbf6,	// (0x0001af37) bg_cl_header_pane_g9

0x0008,

0xf9b4,	// (0x0001dcf5) bg_cl_header_pane_g

0x5f54,	// (0x00014295) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x5f54,	// (0x00014295) hc_cl_list_double_graphic_heading_pane

0x5f65,	// (0x000142a6) hc_cl_list_single_graphic_pane_ParamLimits

0x5f65,	// (0x000142a6) hc_cl_list_single_graphic_pane

0x5f7b,	// (0x000142bc) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x5f7b,	// (0x000142bc) hc_cl_list_single_graphic_pane_g1

0x5f87,	// (0x000142c8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x5f87,	// (0x000142c8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9c7,	// (0x0001dd08) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9c7,	// (0x0001dd08) hc_cl_list_single_graphic_pane_g

0x5f9b,	// (0x000142dc) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x5f9b,	// (0x000142dc) hc_cl_list_single_graphic_pane_t1

0x5f7b,	// (0x000142bc) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x5f7b,	// (0x000142bc) hc_cl_list_double_graphic_heading_pane_g1

0x5fb0,	// (0x000142f1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x5fb0,	// (0x000142f1) hc_cl_list_double_graphic_heading_pane_g2

0x5fc4,	// (0x00014305) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x5fc4,	// (0x00014305) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9cc,	// (0x0001dd0d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9cc,	// (0x0001dd0d) hc_cl_list_double_graphic_heading_pane_g

0x5fd8,	// (0x00014319) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x5fd8,	// (0x00014319) hc_cl_list_double_graphic_heading_pane_t1

0x5fed,	// (0x0001432e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x5fed,	// (0x0001432e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d3,	// (0x0001dd14) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d3,	// (0x0001dd14) hc_cl_list_double_graphic_heading_pane_t

0xd205,	// (0x0001b546) vid4_progress_pane_g1

0xd215,	// (0x0001b556) vid4_progress_pane_g2

0x6002,	// (0x00014343) vid4_progress_pane_g3

0xd225,	// (0x0001b566) vid4_progress_pane_g4

0x0004,

0xf9d8,	// (0x0001dd19) vid4_progress_pane_g

0x6014,	// (0x00014355) vid4_progress_pane_t1

0xd23d,	// (0x0001b57e) vid4_progress_pane_t2

0x0002,

0xf9e3,	// (0x0001dd24) vid4_progress_pane_t

0x602c,	// (0x0001436d) wait_bar_pane_cp07

0xbda2,	// (0x0001a0e3) blid_firmament_pane_ParamLimits

0xbde5,	// (0x0001a126) popup_blid_sat_info2_window_g1

0xbe09,	// (0x0001a14a) popup_blid_sat_info2_window_t3

0xbe17,	// (0x0001a158) popup_blid_sat_info2_window_t4

0xbe25,	// (0x0001a166) popup_blid_sat_info2_window_t5

0xbe33,	// (0x0001a174) popup_blid_sat_info2_window_t6

0xbe43,	// (0x0001a184) popup_blid_sat_info2_window_t7

0xbe51,	// (0x0001a192) popup_blid_sat_info2_window_t8

0xbe5f,	// (0x0001a1a0) popup_blid_sat_info2_window_t9

0xbe6d,	// (0x0001a1ae) popup_blid_sat_info2_window_t10

0xbf2e,	// (0x0001a26f) aid_firma_cardinal_ParamLimits

0xbf42,	// (0x0001a283) blid_firmament_pane_t1_ParamLimits

0xbf59,	// (0x0001a29a) blid_firmament_pane_t2_ParamLimits

0xbf70,	// (0x0001a2b1) blid_firmament_pane_t3_ParamLimits

0xbf87,	// (0x0001a2c8) blid_firmament_pane_t4_ParamLimits

0xf606,	// (0x0001d947) blid_firmament_pane_t_ParamLimits

0xbf9e,	// (0x0001a2df) blid_sat_info_pane_ParamLimits

0x92d3,	// (0x00017614) main_cam_set_pane_ParamLimits

0x4566,	// (0x000128a7) aid_size_cell_colour_35_ParamLimits

0x4586,	// (0x000128c7) aid_size_cell_colour_112_ParamLimits

0x45a6,	// (0x000128e7) aid_size_cell_effect_ParamLimits

0xa895,	// (0x00018bd6) bg_tb_trans_pane_cp02_ParamLimits

0xa16e,	// (0x000184af) heading_imed_pane_ParamLimits

0x45c6,	// (0x00012907) listscroll_imed_pane_ParamLimits

0xb1c5,	// (0x00019506) popup_call2_audio_first_window_g5_ParamLimits

0xb1c5,	// (0x00019506) popup_call2_audio_first_window_g5

0x4923,	// (0x00012c64) aid_size_touch_image3_arrow_left_ParamLimits

0x4923,	// (0x00012c64) aid_size_touch_image3_arrow_left

0x494f,	// (0x00012c90) aid_size_touch_image3_arrow_right_ParamLimits

0x494f,	// (0x00012c90) aid_size_touch_image3_arrow_right

0xd252,	// (0x0001b593) vid4_progress_pane_t3

0x476b,	// (0x00012aac) main_hwr_training_symbol_option_pane_ParamLimits

0x476b,	// (0x00012aac) main_hwr_training_symbol_option_pane

0xc5f9,	// (0x0001a93a) popup_hwr_training_preview_window_ParamLimits

0xc5f9,	// (0x0001a93a) popup_hwr_training_preview_window

0x478b,	// (0x00012acc) hwr_training_navi_pane_g5_ParamLimits

0x478b,	// (0x00012acc) hwr_training_navi_pane_g5

0xcbc4,	// (0x0001af05) popup_char_count_window

0x92d3,	// (0x00017614) bg_popup_sub_pane_cp20_ParamLimits

0x59f2,	// (0x00013d33) list_vitu2_match_list_pane_ParamLimits

0x59fe,	// (0x00013d3f) vitu2_page_scroll_pane_ParamLimits

0x59fe,	// (0x00013d3f) vitu2_page_scroll_pane

0xd289,	// (0x0001b5ca) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd289,	// (0x0001b5ca) list_single_hwr_training_symbol_option_pane

0xd29c,	// (0x0001b5dd) list_single_hwr_training_symbol_option_pane_g1

0xd2a4,	// (0x0001b5e5) list_single_hwr_training_symbol_option_pane_t1

0xd2b2,	// (0x0001b5f3) bg_button_pane_cp023

0xd2bb,	// (0x0001b5fc) bg_button_pane_cp024

0xd2ee,	// (0x0001b62f) vitu2_page_scroll_pane_g1

0xd2f6,	// (0x0001b637) vitu2_page_scroll_pane_g2

0x0001,

0xf9ea,	// (0x0001dd2b) vitu2_page_scroll_pane_g

0xd2fe,	// (0x0001b63f) vitu2_page_scroll_pane_t1

0xbd18,	// (0x0001a059) popup_char_count_window_g1

0xd30d,	// (0x0001b64e) popup_char_count_window_g2

0xd316,	// (0x0001b657) popup_char_count_window_g3

0x0002,

0xf9ef,	// (0x0001dd30) popup_char_count_window_g

0xd31f,	// (0x0001b660) popup_char_count_window_t1

0x9264,	// (0x000175a5) main_vded2_pane

0xc457,	// (0x0001a798) aid_size_cell_imed_line

0xc461,	// (0x0001a7a2) grid_imed_line_width_pane

0xcb43,	// (0x0001ae84) vid4_indicators_pane_g4

0xd32d,	// (0x0001b66e) cell_imed_line_width_pane_ParamLimits

0xd32d,	// (0x0001b66e) cell_imed_line_width_pane

0xd341,	// (0x0001b682) cell_imed_line_width_pane_g1

0xd34a,	// (0x0001b68b) cell_imed_line_width_pane_g2

0x0001,

0xf9f6,	// (0x0001dd37) cell_imed_line_width_pane_g

0x6053,	// (0x00014394) main_vded2_pane_g1_ParamLimits

0x6053,	// (0x00014394) main_vded2_pane_g1

0x6069,	// (0x000143aa) main_vded2_pane_g2_ParamLimits

0x6069,	// (0x000143aa) main_vded2_pane_g2

0x0001,

0xf9fb,	// (0x0001dd3c) main_vded2_pane_g_ParamLimits

0xf9fb,	// (0x0001dd3c) main_vded2_pane_g

0x607b,	// (0x000143bc) vded2_slider_pane_ParamLimits

0x607b,	// (0x000143bc) vded2_slider_pane

0x608b,	// (0x000143cc) aid_size_touch_vded2_end

0x6095,	// (0x000143d6) aid_size_touch_vded2_playhead

0xd352,	// (0x0001b693) aid_size_touch_vded2_start

0xd35a,	// (0x0001b69b) vded2_slider_bg_pane

0xd363,	// (0x0001b6a4) vded2_slider_pane_g1

0xd36c,	// (0x0001b6ad) vded2_slider_pane_g2

0x609f,	// (0x000143e0) vded2_slider_pane_g3

0x0002,

0xfa00,	// (0x0001dd41) vded2_slider_pane_g

0xd374,	// (0x0001b6b5) vded2_slider_bg_pane_g1

0xd37d,	// (0x0001b6be) vded2_slider_bg_pane_g2

0xd386,	// (0x0001b6c7) vded2_slider_bg_pane_g3

0x0002,

0xfa07,	// (0x0001dd48) vded2_slider_bg_pane_g

0x2b6b,	// (0x00010eac) aid_postcard_touch_down_pane_ParamLimits

0x2b6b,	// (0x00010eac) aid_postcard_touch_down_pane

0x2b81,	// (0x00010ec2) aid_postcard_touch_up_pane_ParamLimits

0x2b81,	// (0x00010ec2) aid_postcard_touch_up_pane

0x9264,	// (0x000175a5) main_blid2_pane

0xbabc,	// (0x00019dfd) popup_blid2_search_window

0x9264,	// (0x000175a5) blid2_gps_pane

0x9264,	// (0x000175a5) blid2_navig_pane

0x9264,	// (0x000175a5) blid2_search_pane

0x9264,	// (0x000175a5) blid2_tripm_pane

0x60aa,	// (0x000143eb) blid2_search_pane_g1_ParamLimits

0x60aa,	// (0x000143eb) blid2_search_pane_g1

0x60c4,	// (0x00014405) blid2_search_pane_t1_ParamLimits

0x60c4,	// (0x00014405) blid2_search_pane_t1

0x60d6,	// (0x00014417) aid_size_cell_blid2_gps_ParamLimits

0x60d6,	// (0x00014417) aid_size_cell_blid2_gps

0x60ee,	// (0x0001442f) blid2_gps_pane_g1_ParamLimits

0x60ee,	// (0x0001442f) blid2_gps_pane_g1

0x6102,	// (0x00014443) grid_blid2_satellite_pane_ParamLimits

0x6102,	// (0x00014443) grid_blid2_satellite_pane

0x611c,	// (0x0001445d) blid2_navig_pane_g1_ParamLimits

0x611c,	// (0x0001445d) blid2_navig_pane_g1

0x6128,	// (0x00014469) blid2_navig_pane_t1_ParamLimits

0x6128,	// (0x00014469) blid2_navig_pane_t1

0x6143,	// (0x00014484) blid2_navig_pane_t2_ParamLimits

0x6143,	// (0x00014484) blid2_navig_pane_t2

0x0001,

0xfa0e,	// (0x0001dd4f) blid2_navig_pane_t_ParamLimits

0xfa0e,	// (0x0001dd4f) blid2_navig_pane_t

0x615e,	// (0x0001449f) blid2_navig_ring_pane_ParamLimits

0x615e,	// (0x0001449f) blid2_navig_ring_pane

0x6177,	// (0x000144b8) blid2_speed_pane_ParamLimits

0x6177,	// (0x000144b8) blid2_speed_pane

0x6183,	// (0x000144c4) blid2_tripm_pane_g1_ParamLimits

0x6183,	// (0x000144c4) blid2_tripm_pane_g1

0x619c,	// (0x000144dd) blid2_tripm_pane_g2_ParamLimits

0x619c,	// (0x000144dd) blid2_tripm_pane_g2

0x61b0,	// (0x000144f1) blid2_tripm_pane_g3_ParamLimits

0x61b0,	// (0x000144f1) blid2_tripm_pane_g3

0x61c4,	// (0x00014505) blid2_tripm_pane_g4_ParamLimits

0x61c4,	// (0x00014505) blid2_tripm_pane_g4

0x61d8,	// (0x00014519) blid2_tripm_pane_g5_ParamLimits

0x61d8,	// (0x00014519) blid2_tripm_pane_g5

0x0005,

0xfa13,	// (0x0001dd54) blid2_tripm_pane_g_ParamLimits

0xfa13,	// (0x0001dd54) blid2_tripm_pane_g

0x61fe,	// (0x0001453f) blid2_tripm_pane_t1_ParamLimits

0x61fe,	// (0x0001453f) blid2_tripm_pane_t1

0x6219,	// (0x0001455a) blid2_tripm_pane_t2_ParamLimits

0x6219,	// (0x0001455a) blid2_tripm_pane_t2

0x6232,	// (0x00014573) blid2_tripm_pane_t3_ParamLimits

0x6232,	// (0x00014573) blid2_tripm_pane_t3

0x0003,

0xfa20,	// (0x0001dd61) blid2_tripm_pane_t_ParamLimits

0xfa20,	// (0x0001dd61) blid2_tripm_pane_t

0x6279,	// (0x000145ba) cell_blid2_satellite_pane_ParamLimits

0x6279,	// (0x000145ba) cell_blid2_satellite_pane

0x6297,	// (0x000145d8) cell_blid2_satellite_pane_g1

0xd38f,	// (0x0001b6d0) cell_blid2_satellite_pane_t1

0x9a10,	// (0x00017d51) blid2_speed_pane_g1

0xd39d,	// (0x0001b6de) blid2_speed_pane_t1

0xd3ab,	// (0x0001b6ec) blid2_speed_pane_t2

0x0001,

0xfa29,	// (0x0001dd6a) blid2_speed_pane_t

0x9a10,	// (0x00017d51) blid2_navig_ring_pane_g1

0x62a0,	// (0x000145e1) blid2_navig_ring_pane_g2

0x62a8,	// (0x000145e9) blid2_navig_ring_pane_g3

0x62b0,	// (0x000145f1) blid2_navig_ring_pane_g4

0x62b8,	// (0x000145f9) blid2_navig_ring_pane_g5

0x0004,

0xfa2e,	// (0x0001dd6f) blid2_navig_ring_pane_g

0x9264,	// (0x000175a5) bg_popup_window_pane_cp011

0xd3b9,	// (0x0001b6fa) popup_blid2_search_window_g1

0xd3c1,	// (0x0001b702) popup_blid2_search_window_t1

0xd3cf,	// (0x0001b710) popup_blid2_search_window_t2

0x0001,

0xfa39,	// (0x0001dd7a) popup_blid2_search_window_t

0x9ddf,	// (0x00018120) main_browser_pane_g1

0x9a88,	// (0x00017dc9) main_browser_pane_ParamLimits

0x92d3,	// (0x00017614) bg_button_pane_cp011_ParamLimits

0x52c9,	// (0x0001360a) cell_vitu2_function_pane_g1_ParamLimits

0xa895,	// (0x00018bd6) bg_popup_sub_pane_cp22_ParamLimits

0x5b7c,	// (0x00013ebd) input_focus_pane_cp08_ParamLimits

0x5b97,	// (0x00013ed8) popup_vitu2_query_button_pane_ParamLimits

0x5b97,	// (0x00013ed8) popup_vitu2_query_button_pane

0x5ba6,	// (0x00013ee7) popup_vitu2_query_input_button_pane

0xcf18,	// (0x0001b259) popup_vitu2_query_window_g1_ParamLimits

0x5bae,	// (0x00013eef) popup_vitu2_query_window_g2_ParamLimits

0xf93a,	// (0x0001dc7b) popup_vitu2_query_window_g_ParamLimits

0x9264,	// (0x000175a5) bg_button_pane_cp026

0x62c0,	// (0x00014601) popup_vitu2_query_input_button_pane_g1

0x9264,	// (0x000175a5) bg_button_pane_cp025

0xd3dd,	// (0x0001b71e) popup_vitu2_query_button_pane_t1

0x39e9,	// (0x00011d2a) main_mp3_pane_t6

0x39f7,	// (0x00011d38) popup_slider_window_cp01

0xcaa7,	// (0x0001ade8) cam4_battery_pane

0xcb00,	// (0x0001ae41) cam4_battery_pane_cp02

0xd1fd,	// (0x0001b53e) cam4_battery_pane_cp01

0xd1fd,	// (0x0001b53e) cam4_battery_pane_cp03

0x9a10,	// (0x00017d51) cam4_battery_pane_g1

0xd3eb,	// (0x0001b72c) cam4_battery_pane_g2

0x0001,

0xfa3e,	// (0x0001dd7f) cam4_battery_pane_g

0xbe7b,	// (0x0001a1bc) popup_blid_sat_info2_window_t11

0xa5f3,	// (0x00018934) aid_size_touch_mv_arrow_left_ParamLimits

0xa61c,	// (0x0001895d) aid_size_touch_mv_arrow_right_ParamLimits

0xa67a,	// (0x000189bb) navi_pane_g1_ParamLimits

0xa686,	// (0x000189c7) navi_pane_g2_ParamLimits

0xa6b4,	// (0x000189f5) navi_pane_g3_ParamLimits

0xf32f,	// (0x0001d670) navi_pane_g_ParamLimits

0x2789,	// (0x00010aca) navi_pane_mv_t1_ParamLimits

0x45d2,	// (0x00012913) grid_imed_effect_pane_ParamLimits

0x1512,	// (0x0000f853) aid_placing_vt_slider_lsc

0x9d2e,	// (0x0001806f) aid_placing_vt_slider_prt

0x92d3,	// (0x00017614) bg_tb_trans_pane_cp01_ParamLimits

0xc0fb,	// (0x0001a43c) popup_image_details_window_g1_ParamLimits

0xc10e,	// (0x0001a44f) popup_image_details_window_g2_ParamLimits

0xc123,	// (0x0001a464) popup_image_details_window_g3_ParamLimits

0xc123,	// (0x0001a464) popup_image_details_window_g3

0xf646,	// (0x0001d987) popup_image_details_window_g_ParamLimits

0xc137,	// (0x0001a478) popup_image_details_window_t1_ParamLimits

0xc149,	// (0x0001a48a) popup_image_details_window_t2_ParamLimits

0xc162,	// (0x0001a4a3) popup_image_details_window_t3_ParamLimits

0xc176,	// (0x0001a4b7) popup_image_details_window_t4_ParamLimits

0xc191,	// (0x0001a4d2) popup_image_details_window_t5_ParamLimits

0xf64d,	// (0x0001d98e) popup_image_details_window_t_ParamLimits

0x5f12,	// (0x00014253) cl_header_name_pane_ParamLimits

0x5f12,	// (0x00014253) cl_header_name_pane

0x62c8,	// (0x00014609) cl_header_name_pane_t1_ParamLimits

0x62c8,	// (0x00014609) cl_header_name_pane_t1

0x62e9,	// (0x0001462a) cl_header_name_pane_t2_ParamLimits

0x62e9,	// (0x0001462a) cl_header_name_pane_t2

0x632b,	// (0x0001466c) cl_header_name_pane_t3_ParamLimits

0x632b,	// (0x0001466c) cl_header_name_pane_t3

0x0002,

0xfa43,	// (0x0001dd84) cl_header_name_pane_t_ParamLimits

0xfa43,	// (0x0001dd84) cl_header_name_pane_t

0xa743,	// (0x00018a84) navi_pane_mv_g2_ParamLimits

0xcb8f,	// (0x0001aed0) field_vitu2_entry_pane_g1_ParamLimits

0xcb9b,	// (0x0001aedc) field_vitu2_entry_pane_g2_ParamLimits

0xa873,	// (0x00018bb4) field_vitu2_entry_pane_g3_ParamLimits

0xa873,	// (0x00018bb4) field_vitu2_entry_pane_g3

0xf843,	// (0x0001db84) field_vitu2_entry_pane_g_ParamLimits

0x5159,	// (0x0001349a) cell_vitu2_itu_pane_g1_ParamLimits

0x5171,	// (0x000134b2) cell_vitu2_itu_pane_g2_ParamLimits

0x5171,	// (0x000134b2) cell_vitu2_itu_pane_g2

0x0001,

0xf84f,	// (0x0001db90) cell_vitu2_itu_pane_g_ParamLimits

0xf84f,	// (0x0001db90) cell_vitu2_itu_pane_g

0x92d3,	// (0x00017614) bg_vkb2_func_pane_cp05_ParamLimits

0x92d3,	// (0x00017614) bg_vkb2_func_pane_cp05

0x92d3,	// (0x00017614) bg_vkb2_func_pane_cp03

0x92d3,	// (0x00017614) bg_vkb2_func_pane_cp04

0x92d3,	// (0x00017614) bg_vkb2_func_pane_cp10_ParamLimits

0x92d3,	// (0x00017614) bg_vkb2_func_pane_cp10

0x5eb6,	// (0x000141f7) bg_vkb2_func_pane_cp08

0x5e8f,	// (0x000141d0) bg_vkb2_func_pane_cp06

0x5e9b,	// (0x000141dc) bg_vkb2_func_pane_cp07

0xd2c4,	// (0x0001b605) bg_vkb2_func_pane_cp11_ParamLimits

0xd2c4,	// (0x0001b605) bg_vkb2_func_pane_cp11

0xd2d9,	// (0x0001b61a) bg_vkb2_func_pane_cp12_ParamLimits

0xd2d9,	// (0x0001b61a) bg_vkb2_func_pane_cp12

0x9264,	// (0x000175a5) bg_vkb2_func_pane_cp09

0xcbd6,	// (0x0001af17) bg_vkb2_func_pane_g1

0x9ef0,	// (0x00018231) bg_vkb2_func_pane_g2

0xcbde,	// (0x0001af1f) bg_vkb2_func_pane_g3

0xcbe6,	// (0x0001af27) bg_vkb2_func_pane_g4

0xcebd,	// (0x0001b1fe) bg_vkb2_func_pane_g5

0xcbfe,	// (0x0001af3f) bg_vkb2_func_pane_g6

0xcc06,	// (0x0001af47) bg_vkb2_func_pane_g7

0xcbf6,	// (0x0001af37) bg_vkb2_func_pane_g8

0x9ed0,	// (0x00018211) bg_vkb2_func_pane_g9

0x0008,

0xfa4a,	// (0x0001dd8b) bg_vkb2_func_pane_g

0x61ec,	// (0x0001452d) blid2_tripm_pane_g6_ParamLimits

0x61ec,	// (0x0001452d) blid2_tripm_pane_g6

0xc976,	// (0x0001acb7) mp4_progress_pane_g1

0x6265,	// (0x000145a6) blid2_tripm_values_pane_ParamLimits

0x6265,	// (0x000145a6) blid2_tripm_values_pane

0x635c,	// (0x0001469d) blid2_tripm_values_pane_t1

0x636a,	// (0x000146ab) blid2_tripm_values_pane_t2

0x6378,	// (0x000146b9) blid2_tripm_values_pane_t3

0x6386,	// (0x000146c7) blid2_tripm_values_pane_t4

0x6394,	// (0x000146d5) blid2_tripm_values_pane_t5

0x63a2,	// (0x000146e3) blid2_tripm_values_pane_t6

0x63b0,	// (0x000146f1) blid2_tripm_values_pane_t7

0x63be,	// (0x000146ff) blid2_tripm_values_pane_t8

0x63cc,	// (0x0001470d) blid2_tripm_values_pane_t9

0x0008,

0xfa5d,	// (0x0001dd9e) blid2_tripm_values_pane_t

0x1554,	// (0x0000f895) call_video_pane_t1_ParamLimits

0x1572,	// (0x0000f8b3) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x0001d51e) call_video_pane_t_ParamLimits

0x2a58,	// (0x00010d99) msg_header_pane_g1_ParamLimits

0xa961,	// (0x00018ca2) msg_header_pane_g2_ParamLimits

0xa961,	// (0x00018ca2) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x0001d70e) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x0001d70e) msg_header_pane_g

0x9a88,	// (0x00017dc9) main_clock2_pane_ParamLimits

0x42d3,	// (0x00012614) grid_clock2_toolbar_pane_ParamLimits

0x42d3,	// (0x00012614) grid_clock2_toolbar_pane

0x42d3,	// (0x00012614) listscroll_clock2_pane_ParamLimits

0x42d3,	// (0x00012614) listscroll_clock2_pane

0x43b7,	// (0x000126f8) main_clock2_pane_t3_ParamLimits

0x43b7,	// (0x000126f8) main_clock2_pane_t3

0x43db,	// (0x0001271c) main_clock2_pane_t4_ParamLimits

0x43db,	// (0x0001271c) main_clock2_pane_t4

0xd3f5,	// (0x0001b736) cell_clock2_toolbar_pane

0xd3fd,	// (0x0001b73e) cell_clock2_toolbar_pane_cp01

0xd3fd,	// (0x0001b73e) cell_clock2_toolbar_pane_cp02

0xd405,	// (0x0001b746) cell_clock2_toolbar_pane_cp03

0xd40d,	// (0x0001b74e) list_clock2_pane

0xa569,	// (0x000188aa) scroll_pane_cp10

0xd415,	// (0x0001b756) list_single_clock2_pane_ParamLimits

0xd415,	// (0x0001b756) list_single_clock2_pane

0x9ccd,	// (0x0001800e) list_highlight_pane_cp08

0xd422,	// (0x0001b763) list_single_clock2_pane_t1

0xd430,	// (0x0001b771) list_single_clock2_pane_t2

0x0001,

0xfa70,	// (0x0001ddb1) list_single_clock2_pane_t

0x9264,	// (0x000175a5) bg_button_pane_cp10

0xd43e,	// (0x0001b77f) cell_clock2_toolbar_pane_g1

0x2af7,	// (0x00010e38) aid_main_viewer_pane_g1_ParamLimits

0x2af7,	// (0x00010e38) aid_main_viewer_pane_g1

0x2b05,	// (0x00010e46) aid_main_viewer_pane_g2_ParamLimits

0x2b05,	// (0x00010e46) aid_main_viewer_pane_g2

0x2b13,	// (0x00010e54) aid_main_viewer_pane_g3_ParamLimits

0x2b13,	// (0x00010e54) aid_main_viewer_pane_g3

0x2b22,	// (0x00010e63) aid_main_viewer_pane_g4_ParamLimits

0x2b22,	// (0x00010e63) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x0001d71f) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x0001d71f) aid_main_viewer_pane_g

0x33c6,	// (0x00011707) main_calc_pane_ParamLimits

0x33da,	// (0x0001171b) main_dialer2_pane_ParamLimits

0x9264,	// (0x000175a5) main_cam6_pane

0x9264,	// (0x000175a5) main_vid6_pane

0x42df,	// (0x00012620) listscroll_gen_pane_cp06_ParamLimits

0x42df,	// (0x00012620) listscroll_gen_pane_cp06

0x43fe,	// (0x0001273f) main_clock2_pane_t5_ParamLimits

0x43fe,	// (0x0001273f) main_clock2_pane_t5

0x445c,	// (0x0001279d) aid_call2_pane_cp10_ParamLimits

0x446e,	// (0x000127af) aid_call_pane_cp10_ParamLimits

0xa5e7,	// (0x00018928) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa5e7,	// (0x00018928) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4480,	// (0x000127c1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4480,	// (0x000127c1) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa5e7,	// (0x00018928) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf702,	// (0x0001da43) popup_clock_analogue_window_cp10_g_ParamLimits

0x4496,	// (0x000127d7) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc9e7,	// (0x0001ad28) cell_dialer2_keypad_pane_g2_ParamLimits

0xc9e7,	// (0x0001ad28) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e2,	// (0x0001db23) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e2,	// (0x0001db23) cell_dialer2_keypad_pane_g

0x9a1a,	// (0x00017d5b) cell_dialer2_keypad_pane_t1

0x55d8,	// (0x00013919) main_cset_text2_pane_ParamLimits

0x55d8,	// (0x00013919) main_cset_text2_pane

0xd104,	// (0x0001b445) area_vitu2_query_pane_g1_ParamLimits

0x5e30,	// (0x00014171) area_vitu2_query_pane_g2_ParamLimits

0xf98d,	// (0x0001dcce) area_vitu2_query_pane_g_ParamLimits

0xd188,	// (0x0001b4c9) area_vitu2_query_pane_t7_ParamLimits

0xd188,	// (0x0001b4c9) area_vitu2_query_pane_t7

0x5e8f,	// (0x000141d0) bg_button_pane_cp018_ParamLimits

0x5e9b,	// (0x000141dc) bg_button_pane_cp021_ParamLimits

0x5ea7,	// (0x000141e8) bg_button_pane_cp022_ParamLimits

0x5eb6,	// (0x000141f7) bg_vkb2_func_pane_cp08_ParamLimits

0x5e8f,	// (0x000141d0) bg_vkb2_func_pane_cp06_ParamLimits

0x5e9b,	// (0x000141dc) bg_vkb2_func_pane_cp07_ParamLimits

0x5ec6,	// (0x00014207) input_focus_pane_cp09_ParamLimits

0x63da,	// (0x0001471b) cam6_autofocus_pane_ParamLimits

0x63da,	// (0x0001471b) cam6_autofocus_pane

0x63e6,	// (0x00014727) cam6_image_uncrop_pane_ParamLimits

0x63e6,	// (0x00014727) cam6_image_uncrop_pane

0x63f6,	// (0x00014737) cam6_indi_pane_ParamLimits

0x63f6,	// (0x00014737) cam6_indi_pane

0x640c,	// (0x0001474d) cam6_mode_pane_ParamLimits

0x640c,	// (0x0001474d) cam6_mode_pane

0x641e,	// (0x0001475f) cam6_timer_pane_ParamLimits

0x641e,	// (0x0001475f) cam6_timer_pane

0x642a,	// (0x0001476b) cam6_zoom_pane_ParamLimits

0x642a,	// (0x0001476b) cam6_zoom_pane

0x6437,	// (0x00014778) cam6_mode_pane_g1_ParamLimits

0x6437,	// (0x00014778) cam6_mode_pane_g1

0x6447,	// (0x00014788) cam6_mode_pane_g2_ParamLimits

0x6447,	// (0x00014788) cam6_mode_pane_g2

0x6457,	// (0x00014798) cam6_mode_pane_g3_ParamLimits

0x6457,	// (0x00014798) cam6_mode_pane_g3

0x6467,	// (0x000147a8) cam6_mode_pane_g4_ParamLimits

0x6467,	// (0x000147a8) cam6_mode_pane_g4

0x0003,

0xfa75,	// (0x0001ddb6) cam6_mode_pane_g_ParamLimits

0xfa75,	// (0x0001ddb6) cam6_mode_pane_g

0xbc31,	// (0x00019f72) bg_tb_trans_pane_cp08_ParamLimits

0xbc31,	// (0x00019f72) bg_tb_trans_pane_cp08

0xd454,	// (0x0001b795) cam6_battery_pane_ParamLimits

0xd454,	// (0x0001b795) cam6_battery_pane

0xd46a,	// (0x0001b7ab) cam6_indi_pane_g1_ParamLimits

0xd46a,	// (0x0001b7ab) cam6_indi_pane_g1

0xd47c,	// (0x0001b7bd) cam6_indi_pane_g2_ParamLimits

0xd47c,	// (0x0001b7bd) cam6_indi_pane_g2

0xd48e,	// (0x0001b7cf) cam6_indi_pane_g3_ParamLimits

0xd48e,	// (0x0001b7cf) cam6_indi_pane_g3

0x0002,

0xfa7e,	// (0x0001ddbf) cam6_indi_pane_g_ParamLimits

0xfa7e,	// (0x0001ddbf) cam6_indi_pane_g

0xd4a0,	// (0x0001b7e1) cam6_indi_pane_t1_ParamLimits

0xd4a0,	// (0x0001b7e1) cam6_indi_pane_t1

0x4f02,	// (0x00013243) cam6_autofocus_pane_g1

0x4f0a,	// (0x0001324b) cam6_autofocus_pane_g2

0x4f12,	// (0x00013253) cam6_autofocus_pane_g3

0x4f1a,	// (0x0001325b) cam6_autofocus_pane_g4

0x0003,

0xfa85,	// (0x0001ddc6) cam6_autofocus_pane_g

0xd4c6,	// (0x0001b807) cam6_timer_pane_g1

0xd4ce,	// (0x0001b80f) cam6_timer_pane_t1

0xd4dc,	// (0x0001b81d) cam6_zoom_cont_pane

0xd4e4,	// (0x0001b825) cam6_zoom_pane_g1

0xd4ed,	// (0x0001b82e) cam6_zoom_pane_g2

0x6477,	// (0x000147b8) cam6_zoom_pane_g3

0x0002,

0xfa8e,	// (0x0001ddcf) cam6_zoom_pane_g

0x9a10,	// (0x00017d51) cam6_battery_pane_g1

0x9a10,	// (0x00017d51) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x0001d3f0) cam6_battery_pane_g

0xd4e4,	// (0x0001b825) cam6_zoom_cont_pane_g1

0xd4ed,	// (0x0001b82e) cam6_zoom_cont_pane_g2

0xd4f6,	// (0x0001b837) cam6_zoom_cont_pane_g3

0x0002,

0xfa95,	// (0x0001ddd6) cam6_zoom_cont_pane_g

0x6492,	// (0x000147d3) cam6_mode_pane_cp_ParamLimits

0x6492,	// (0x000147d3) cam6_mode_pane_cp

0x64a4,	// (0x000147e5) cam6_zoom_pane_cp_ParamLimits

0x64a4,	// (0x000147e5) cam6_zoom_pane_cp

0x64b0,	// (0x000147f1) vid6_image_uncrop_cif_pane_ParamLimits

0x64b0,	// (0x000147f1) vid6_image_uncrop_cif_pane

0x64c0,	// (0x00014801) vid6_image_uncrop_nhd_pane_ParamLimits

0x64c0,	// (0x00014801) vid6_image_uncrop_nhd_pane

0x64cf,	// (0x00014810) vid6_image_uncrop_vga_pane_ParamLimits

0x64cf,	// (0x00014810) vid6_image_uncrop_vga_pane

0x64de,	// (0x0001481f) vid6_image_uncrop_wvga_pane_ParamLimits

0x64de,	// (0x0001481f) vid6_image_uncrop_wvga_pane

0x64ed,	// (0x0001482e) vid6_indi_pane_ParamLimits

0x64ed,	// (0x0001482e) vid6_indi_pane

0xbc31,	// (0x00019f72) bg_tb_trans_pane_cp09_ParamLimits

0xbc31,	// (0x00019f72) bg_tb_trans_pane_cp09

0xd50e,	// (0x0001b84f) cam6_battery_pane_cp_ParamLimits

0xd50e,	// (0x0001b84f) cam6_battery_pane_cp

0xd51a,	// (0x0001b85b) vid6_indi_pane_g1_ParamLimits

0xd51a,	// (0x0001b85b) vid6_indi_pane_g1

0xd52c,	// (0x0001b86d) vid6_indi_pane_g2_ParamLimits

0xd52c,	// (0x0001b86d) vid6_indi_pane_g2

0xd53e,	// (0x0001b87f) vid6_indi_pane_g3_ParamLimits

0xd53e,	// (0x0001b87f) vid6_indi_pane_g3

0xd553,	// (0x0001b894) vid6_indi_pane_g4_ParamLimits

0xd553,	// (0x0001b894) vid6_indi_pane_g4

0xd568,	// (0x0001b8a9) vid6_indi_pane_g5_ParamLimits

0xd568,	// (0x0001b8a9) vid6_indi_pane_g5

0x0004,

0xfa9c,	// (0x0001dddd) vid6_indi_pane_g_ParamLimits

0xfa9c,	// (0x0001dddd) vid6_indi_pane_g

0xd582,	// (0x0001b8c3) vid6_indi_pane_t1_ParamLimits

0xd582,	// (0x0001b8c3) vid6_indi_pane_t1

0xd598,	// (0x0001b8d9) vid6_indi_pane_t2_ParamLimits

0xd598,	// (0x0001b8d9) vid6_indi_pane_t2

0xd5c0,	// (0x0001b901) vid6_indi_pane_t3_ParamLimits

0xd5c0,	// (0x0001b901) vid6_indi_pane_t3

0xd5e8,	// (0x0001b929) vid6_indi_pane_t4_ParamLimits

0xd5e8,	// (0x0001b929) vid6_indi_pane_t4

0x0003,

0xfaa7,	// (0x0001dde8) vid6_indi_pane_t_ParamLimits

0xfaa7,	// (0x0001dde8) vid6_indi_pane_t

0xd60c,	// (0x0001b94d) wait_bar_pane_cp08

0x6505,	// (0x00014846) main_cset_text2_pane_t1_ParamLimits

0x6505,	// (0x00014846) main_cset_text2_pane_t1

0x6480,	// (0x000147c1) listscroll_gen_pane_cp06_t1_ParamLimits

0x6480,	// (0x000147c1) listscroll_gen_pane_cp06_t1

0x9264,	// (0x000175a5) main_cam6_set_pane

0x99ca,	// (0x00017d0b) bg_tb_trans_pane_cp06_ParamLimits

0xcaaf,	// (0x0001adf0) cam4_indicators_pane_g1_ParamLimits

0xcac0,	// (0x0001ae01) cam4_indicators_pane_g2_ParamLimits

0xf81f,	// (0x0001db60) cam4_indicators_pane_g_ParamLimits

0xcade,	// (0x0001ae1f) cam4_indicators_pane_t1_ParamLimits

0x92d3,	// (0x00017614) bg_tb_trans_pane_cp07_ParamLimits

0xcb0a,	// (0x0001ae4b) vid4_indicators_pane_g1_ParamLimits

0xcb1e,	// (0x0001ae5f) vid4_indicators_pane_g2_ParamLimits

0xcb32,	// (0x0001ae73) vid4_indicators_pane_g3_ParamLimits

0xcb43,	// (0x0001ae84) vid4_indicators_pane_g4_ParamLimits

0xf831,	// (0x0001db72) vid4_indicators_pane_g_ParamLimits

0xcb61,	// (0x0001aea2) vid4_indicators_pane_t1_ParamLimits

0xd205,	// (0x0001b546) vid4_progress_pane_g1_ParamLimits

0xd215,	// (0x0001b556) vid4_progress_pane_g2_ParamLimits

0x6002,	// (0x00014343) vid4_progress_pane_g3_ParamLimits

0xd225,	// (0x0001b566) vid4_progress_pane_g4_ParamLimits

0xf9d8,	// (0x0001dd19) vid4_progress_pane_g_ParamLimits

0x6014,	// (0x00014355) vid4_progress_pane_t1_ParamLimits

0xd23d,	// (0x0001b57e) vid4_progress_pane_t2_ParamLimits

0xd252,	// (0x0001b593) vid4_progress_pane_t3_ParamLimits

0xf9e3,	// (0x0001dd24) vid4_progress_pane_t_ParamLimits

0x602c,	// (0x0001436d) wait_bar_pane_cp07_ParamLimits

0x6522,	// (0x00014863) main_cam6_set_pane_g2_ParamLimits

0x6522,	// (0x00014863) main_cam6_set_pane_g2

0x6546,	// (0x00014887) main_cset6_listscroll_pane_ParamLimits

0x6546,	// (0x00014887) main_cset6_listscroll_pane

0x6566,	// (0x000148a7) main_cset6_slider_pane_ParamLimits

0x6566,	// (0x000148a7) main_cset6_slider_pane

0x657c,	// (0x000148bd) main_cset6_text2_pane_ParamLimits

0x657c,	// (0x000148bd) main_cset6_text2_pane

0xd61b,	// (0x0001b95c) main_cset6_text_pane

0xd623,	// (0x0001b964) main_cset_list_pane_copy1_ParamLimits

0xd623,	// (0x0001b964) main_cset_list_pane_copy1

0xd633,	// (0x0001b974) scroll_pane_cp028_copy1

0x658a,	// (0x000148cb) cset_list_set_pane_copy1

0x659b,	// (0x000148dc) aid_position_infowindow_above_copy1

0x65a3,	// (0x000148e4) aid_position_infowindow_below_copy1

0x65ab,	// (0x000148ec) cset_list_set_pane_g1_copy1

0x65b3,	// (0x000148f4) cset_list_set_pane_g3_copy1_ParamLimits

0x65b3,	// (0x000148f4) cset_list_set_pane_g3_copy1

0x65c2,	// (0x00014903) cset_list_set_pane_t1_copy1_ParamLimits

0x65c2,	// (0x00014903) cset_list_set_pane_t1_copy1

0x92d3,	// (0x00017614) list_highlight_pane_cp021_copy1_ParamLimits

0x92d3,	// (0x00017614) list_highlight_pane_cp021_copy1

0xd63c,	// (0x0001b97d) cset6_slider_pane_ParamLimits

0xd63c,	// (0x0001b97d) cset6_slider_pane

0xd668,	// (0x0001b9a9) main_cset6_slider_pane_g1_ParamLimits

0xd668,	// (0x0001b9a9) main_cset6_slider_pane_g1

0x65d7,	// (0x00014918) main_cset6_slider_pane_g2_ParamLimits

0x65d7,	// (0x00014918) main_cset6_slider_pane_g2

0xd690,	// (0x0001b9d1) main_cset6_slider_pane_g3_ParamLimits

0xd690,	// (0x0001b9d1) main_cset6_slider_pane_g3

0x65ff,	// (0x00014940) main_cset6_slider_pane_g4_ParamLimits

0x65ff,	// (0x00014940) main_cset6_slider_pane_g4

0x660b,	// (0x0001494c) main_cset6_slider_pane_g5_ParamLimits

0x660b,	// (0x0001494c) main_cset6_slider_pane_g5

0xcd2b,	// (0x0001b06c) main_cset6_slider_pane_g7_ParamLimits

0xcd2b,	// (0x0001b06c) main_cset6_slider_pane_g7

0xcd37,	// (0x0001b078) main_cset6_slider_pane_g8_ParamLimits

0xcd37,	// (0x0001b078) main_cset6_slider_pane_g8

0x567e,	// (0x000139bf) main_cset6_slider_pane_g9_ParamLimits

0x567e,	// (0x000139bf) main_cset6_slider_pane_g9

0x568a,	// (0x000139cb) main_cset6_slider_pane_g10_ParamLimits

0x568a,	// (0x000139cb) main_cset6_slider_pane_g10

0x5696,	// (0x000139d7) main_cset6_slider_pane_g11_ParamLimits

0x5696,	// (0x000139d7) main_cset6_slider_pane_g11

0x56a2,	// (0x000139e3) main_cset6_slider_pane_g12_ParamLimits

0x56a2,	// (0x000139e3) main_cset6_slider_pane_g12

0x56ae,	// (0x000139ef) main_cset6_slider_pane_g13_ParamLimits

0x56ae,	// (0x000139ef) main_cset6_slider_pane_g13

0x56ba,	// (0x000139fb) main_cset6_slider_pane_g14_ParamLimits

0x56ba,	// (0x000139fb) main_cset6_slider_pane_g14

0x6617,	// (0x00014958) main_cset6_slider_pane_g15_ParamLimits

0x6617,	// (0x00014958) main_cset6_slider_pane_g15

0x56de,	// (0x00013a1f) main_cset6_slider_pane_g16_ParamLimits

0x56de,	// (0x00013a1f) main_cset6_slider_pane_g16

0x56ea,	// (0x00013a2b) main_cset6_slider_pane_g17_ParamLimits

0x56ea,	// (0x00013a2b) main_cset6_slider_pane_g17

0x0011,

0xfab0,	// (0x0001ddf1) main_cset6_slider_pane_g_ParamLimits

0xfab0,	// (0x0001ddf1) main_cset6_slider_pane_g

0xd69c,	// (0x0001b9dd) main_cset6_slider_pane_t1_ParamLimits

0xd69c,	// (0x0001b9dd) main_cset6_slider_pane_t1

0x6647,	// (0x00014988) main_cset6_slider_pane_t2_ParamLimits

0x6647,	// (0x00014988) main_cset6_slider_pane_t2

0x6672,	// (0x000149b3) main_cset6_slider_pane_t3_ParamLimits

0x6672,	// (0x000149b3) main_cset6_slider_pane_t3

0x669d,	// (0x000149de) main_cset6_slider_pane_t4_ParamLimits

0x669d,	// (0x000149de) main_cset6_slider_pane_t4

0x66c8,	// (0x00014a09) main_cset6_slider_pane_t5_ParamLimits

0x66c8,	// (0x00014a09) main_cset6_slider_pane_t5

0xd6dd,	// (0x0001ba1e) main_cset6_slider_pane_t7_ParamLimits

0xd6dd,	// (0x0001ba1e) main_cset6_slider_pane_t7

0x66f3,	// (0x00014a34) main_cset6_slider_pane_t8_ParamLimits

0x66f3,	// (0x00014a34) main_cset6_slider_pane_t8

0x6717,	// (0x00014a58) main_cset6_slider_pane_t9_ParamLimits

0x6717,	// (0x00014a58) main_cset6_slider_pane_t9

0x673b,	// (0x00014a7c) main_cset6_slider_pane_t10_ParamLimits

0x673b,	// (0x00014a7c) main_cset6_slider_pane_t10

0x675f,	// (0x00014aa0) main_cset6_slider_pane_t11_ParamLimits

0x675f,	// (0x00014aa0) main_cset6_slider_pane_t11

0xd713,	// (0x0001ba54) main_cset6_slider_pane_t14_ParamLimits

0xd713,	// (0x0001ba54) main_cset6_slider_pane_t14

0xd74c,	// (0x0001ba8d) main_cset6_slider_pane_t15_ParamLimits

0xd74c,	// (0x0001ba8d) main_cset6_slider_pane_t15

0x000b,

0xfad5,	// (0x0001de16) main_cset6_slider_pane_t_ParamLimits

0xfad5,	// (0x0001de16) main_cset6_slider_pane_t

0xce49,	// (0x0001b18a) cset_slider_pane_g1_copy1

0xce52,	// (0x0001b193) cset_slider_pane_g2_copy1

0xce5b,	// (0x0001b19c) cset_slider_pane_g3_copy1

0x9264,	// (0x000175a5) bg_popup_sub_pane_cp011_copy1

0xd785,	// (0x0001bac6) main_cset_text_pane_g1_copy1

0xcf2c,	// (0x0001b26d) main_cset_text_pane_t1_copy1

0xcf3a,	// (0x0001b27b) main_cset_text_pane_t2_copy1

0xcf48,	// (0x0001b289) main_cset_text_pane_t3_copy1

0xcf56,	// (0x0001b297) main_cset_text_pane_t4_copy1

0xcf64,	// (0x0001b2a5) main_cset_text_pane_t5_copy1

0xd78d,	// (0x0001bace) main_cset_text_pane_t6_copy1

0xd79b,	// (0x0001badc) main_cset_text_pane_t7_copy1

0x6505,	// (0x00014846) main_cset_text2_pane_t1_copy1

0x92d3,	// (0x00017614) main_ncimui_pane

0x3624,	// (0x00011965) popup_query_ncimui_window_ParamLimits

0x3624,	// (0x00011965) popup_query_ncimui_window

0xc232,	// (0x0001a573) field_cale_ev2_pane_g4_ParamLimits

0xc232,	// (0x0001a573) field_cale_ev2_pane_g4

0x4878,	// (0x00012bb9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4878,	// (0x00012bb9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7b9,	// (0x0001dafa) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7b9,	// (0x0001dafa) cell_video_dialer_keypad_pane_g

0x4890,	// (0x00012bd1) cell_video_dialer_keypad_pane_t1

0x9264,	// (0x000175a5) bg_popup_window_pane_cp012

0xba18,	// (0x00019d59) heading_pane_cp06

0xd7c7,	// (0x0001bb08) ncim_query_content_pane

0x9264,	// (0x000175a5) bg_popup_heading_pane_cp01

0xd7cf,	// (0x0001bb10) ncim_heading_pane_t1

0xd7dd,	// (0x0001bb1e) ncim_indicator_popup_pane

0xd7ef,	// (0x0001bb30) ncim_query_button_pane

0xd803,	// (0x0001bb44) ncim_query_content_pane_t1

0xd815,	// (0x0001bb56) ncim_query_content_pane_t2

0x0005,

0xfb19,	// (0x0001de5a) ncim_query_content_pane_t

0xd84f,	// (0x0001bb90) ncim_query_list_pane

0xd861,	// (0x0001bba2) ncim_query_popup_pane

0xd7dd,	// (0x0001bb1e) ncim_indicator_popup_pane_ParamLimits

0x68c9,	// (0x00014c0a) ncim_query_content_pane_g1_ParamLimits

0x68c9,	// (0x00014c0a) ncim_query_content_pane_g1

0xd803,	// (0x0001bb44) ncim_query_content_pane_t1_ParamLimits

0xd815,	// (0x0001bb56) ncim_query_content_pane_t2_ParamLimits

0x68d5,	// (0x00014c16) ncim_query_content_pane_t3_ParamLimits

0x68d5,	// (0x00014c16) ncim_query_content_pane_t3

0x68fd,	// (0x00014c3e) ncim_query_content_pane_t4_ParamLimits

0x68fd,	// (0x00014c3e) ncim_query_content_pane_t4

0x6925,	// (0x00014c66) ncim_query_content_pane_t5_ParamLimits

0x6925,	// (0x00014c66) ncim_query_content_pane_t5

0xd827,	// (0x0001bb68) ncim_query_content_pane_t6_ParamLimits

0xd827,	// (0x0001bb68) ncim_query_content_pane_t6

0xfb19,	// (0x0001de5a) ncim_query_content_pane_t_ParamLimits

0xd84f,	// (0x0001bb90) ncim_query_list_pane_ParamLimits

0xd861,	// (0x0001bba2) ncim_query_popup_pane_ParamLimits

0xd875,	// (0x0001bbb6) wait_bar_pane_cp04

0x9264,	// (0x000175a5) input_focus_pane_cp011

0xd87d,	// (0x0001bbbe) ncim_query_popup_pane_t1

0xd88b,	// (0x0001bbcc) ncim_list_query_list_pane_ParamLimits

0xd88b,	// (0x0001bbcc) ncim_list_query_list_pane

0x9264,	// (0x000175a5) bg_button_pane_cp027

0xd898,	// (0x0001bbd9) ncim_query_button_pane_g1

0x9264,	// (0x000175a5) list_highlight_pane_cp012

0xd8a2,	// (0x0001bbe3) ncim_list_query_list_pane_g1

0xd8aa,	// (0x0001bbeb) ncim_list_query_list_pane_t1

0xcacf,	// (0x0001ae10) cam4_indicators_pane_g3_ParamLimits

0xcacf,	// (0x0001ae10) cam4_indicators_pane_g3

0xcb4f,	// (0x0001ae90) vid4_indicators_pane_g5_ParamLimits

0xcb4f,	// (0x0001ae90) vid4_indicators_pane_g5

0xd231,	// (0x0001b572) vid4_progress_pane_g5_ParamLimits

0xd231,	// (0x0001b572) vid4_progress_pane_g5

0x67b4,	// (0x00014af5) main_ncimui_pane_g1

0x681d,	// (0x00014b5e) ncimui_group_query_pane_ParamLimits

0x681d,	// (0x00014b5e) ncimui_group_query_pane

0x6865,	// (0x00014ba6) ncimui_list_pane_ParamLimits

0x6865,	// (0x00014ba6) ncimui_list_pane

0x688c,	// (0x00014bcd) ncimui_text_pane_ParamLimits

0x688c,	// (0x00014bcd) ncimui_text_pane

0x694d,	// (0x00014c8e) ncimui_text_pane_t1_ParamLimits

0x694d,	// (0x00014c8e) ncimui_text_pane_t1

0xd8b8,	// (0x0001bbf9) ncimui_list_single_graphic_pane_ParamLimits

0xd8b8,	// (0x0001bbf9) ncimui_list_single_graphic_pane

0x696b,	// (0x00014cac) ncimui_query_pane_ParamLimits

0x696b,	// (0x00014cac) ncimui_query_pane

0x9264,	// (0x000175a5) list_highlight_pane_cp013

0xd8c8,	// (0x0001bc09) ncim_list_query_list_pane_t1_copy1

0xd8a2,	// (0x0001bbe3) ncim_list_single_graphic_pane_g1

0x697e,	// (0x00014cbf) ncim_query_button_pane_cp01

0x698a,	// (0x00014ccb) ncim_query_entry_pane_ParamLimits

0x698a,	// (0x00014ccb) ncim_query_entry_pane

0x699d,	// (0x00014cde) ncimui_query_pane_g1

0x69a9,	// (0x00014cea) ncimui_query_pane_t1_ParamLimits

0x69a9,	// (0x00014cea) ncimui_query_pane_t1

0x92d3,	// (0x00017614) input_focus_pane_cp012

0xd8d6,	// (0x0001bc17) ncim_query_entry_pane_t1

0x9a88,	// (0x00017dc9) main_im_pane_ParamLimits

0x92d3,	// (0x00017614) main_mobtv_pane_ParamLimits

0x92d3,	// (0x00017614) main_mobtv_pane

0x662f,	// (0x00014970) main_cset6_slider_pane_g18_ParamLimits

0x662f,	// (0x00014970) main_cset6_slider_pane_g18

0x663b,	// (0x0001497c) main_cset6_slider_pane_g19_ParamLimits

0x663b,	// (0x0001497c) main_cset6_slider_pane_g19

0x99e6,	// (0x00017d27) bg_main_mobtv_pane_ParamLimits

0x99e6,	// (0x00017d27) bg_main_mobtv_pane

0x69c2,	// (0x00014d03) main_mobtv_info_pane

0x69cb,	// (0x00014d0c) main_mobtv_loading_pane_ParamLimits

0x69cb,	// (0x00014d0c) main_mobtv_loading_pane

0xd8e8,	// (0x0001bc29) main_mobtv_pg_channel_list_pane

0xd8f2,	// (0x0001bc33) main_mobtv_pg_hdr_pane

0x69d8,	// (0x00014d19) main_mobtv_programe_curr_pane_ParamLimits

0x69d8,	// (0x00014d19) main_mobtv_programe_curr_pane

0x69e5,	// (0x00014d26) main_mobtv_programe_next_pane_ParamLimits

0x69e5,	// (0x00014d26) main_mobtv_programe_next_pane

0xd8fb,	// (0x0001bc3c) popup_mobtv_noti_window

0x9a10,	// (0x00017d51) main_tv_pg_hdr_pane_g1

0xd903,	// (0x0001bc44) main_tv_pg_hdr_pane_g2

0xd90b,	// (0x0001bc4c) main_tv_pg_hdr_pane_g3

0xd913,	// (0x0001bc54) main_tv_pg_hdr_pane_g4

0xd91b,	// (0x0001bc5c) main_tv_pg_hdr_pane_g5

0xd925,	// (0x0001bc66) main_tv_pg_hdr_pane_g6

0xd92f,	// (0x0001bc70) main_tv_pg_hdr_pane_g7

0xd939,	// (0x0001bc7a) main_tv_pg_hdr_pane_g8

0xd943,	// (0x0001bc84) main_tv_pg_hdr_pane_g9

0xd94d,	// (0x0001bc8e) main_tv_pg_hdr_pane_g10

0xd957,	// (0x0001bc98) main_tv_pg_hdr_pane_g11

0x000a,

0xfb26,	// (0x0001de67) main_tv_pg_hdr_pane_g

0xd961,	// (0x0001bca2) main_tv_pg_hdr_pane_t1

0xd96f,	// (0x0001bcb0) main_tv_pg_hdr_pane_t2

0xd97d,	// (0x0001bcbe) main_tv_pg_hdr_pane_t3

0xd98d,	// (0x0001bcce) main_tv_pg_hdr_pane_t4

0xd99d,	// (0x0001bcde) main_tv_pg_hdr_pane_t5

0x0004,

0xfb3d,	// (0x0001de7e) main_tv_pg_hdr_pane_t

0xd9ad,	// (0x0001bcee) single_mobtv_pg_channel_pane_ParamLimits

0xd9ad,	// (0x0001bcee) single_mobtv_pg_channel_pane

0xd9bf,	// (0x0001bd00) single_mobtv_pg_channel_table_pane

0xd9c8,	// (0x0001bd09) single_mobtv_pg_channel_thumb_pane

0xd9d1,	// (0x0001bd12) single_tv_pg_channel_pane_g1

0xd9da,	// (0x0001bd1b) single_tv_pg_channel_pane_g2

0x0001,

0xfb48,	// (0x0001de89) single_tv_pg_channel_pane_g

0x99ca,	// (0x00017d0b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x99ca,	// (0x00017d0b) bg_single_mobtv_pg_channel_thumb_pane

0xd9e3,	// (0x0001bd24) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd9e3,	// (0x0001bd24) single_mobtv_pg_channel_thumb_pane_g1

0xd9f1,	// (0x0001bd32) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd9f1,	// (0x0001bd32) single_mobtv_pg_channel_thumb_pane_g2

0xd9fd,	// (0x0001bd3e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd9fd,	// (0x0001bd3e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb4d,	// (0x0001de8e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb4d,	// (0x0001de8e) single_mobtv_pg_channel_thumb_pane_g

0xda09,	// (0x0001bd4a) single_mobtv_pg_channel_thumb_pane_t1

0xda17,	// (0x0001bd58) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb54,	// (0x0001de95) single_mobtv_pg_channel_thumb_pane_t

0x9a10,	// (0x00017d51) bg_single_mobtv_pg_channel_table_pane_g1

0x9a10,	// (0x00017d51) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x0001d3f0) bg_single_mobtv_pg_channel_table_pane_g

0xda25,	// (0x0001bd66) single_mobtv_pg_channel_table_pane_t1

0xda33,	// (0x0001bd74) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb59,	// (0x0001de9a) single_mobtv_pg_channel_table_pane_t

0x69fa,	// (0x00014d3b) main_mobtv_info_pane_g1_ParamLimits

0x69fa,	// (0x00014d3b) main_mobtv_info_pane_g1

0x6a18,	// (0x00014d59) main_mobtv_info_pane_t1_ParamLimits

0x6a18,	// (0x00014d59) main_mobtv_info_pane_t1

0x6a90,	// (0x00014dd1) main_mobtv_info_pane_t2_ParamLimits

0x6a90,	// (0x00014dd1) main_mobtv_info_pane_t2

0x0002,

0xfb63,	// (0x0001dea4) main_mobtv_info_pane_t_ParamLimits

0xfb63,	// (0x0001dea4) main_mobtv_info_pane_t

0x6b1f,	// (0x00014e60) wait_bar_pane_cp05

0x6b31,	// (0x00014e72) main_mobtv_loading_pane_g1_ParamLimits

0x6b31,	// (0x00014e72) main_mobtv_loading_pane_g1

0x6b44,	// (0x00014e85) main_mobtv_loading_pane_g2_ParamLimits

0x6b44,	// (0x00014e85) main_mobtv_loading_pane_g2

0x6b50,	// (0x00014e91) main_mobtv_loading_pane_g3_ParamLimits

0x6b50,	// (0x00014e91) main_mobtv_loading_pane_g3

0x0002,

0xfb6a,	// (0x0001deab) main_mobtv_loading_pane_g_ParamLimits

0xfb6a,	// (0x0001deab) main_mobtv_loading_pane_g

0xda41,	// (0x0001bd82) main_mobtv_loading_pane_t1_ParamLimits

0xda41,	// (0x0001bd82) main_mobtv_loading_pane_t1

0xda59,	// (0x0001bd9a) main_mobtv_loading_pane_t2_ParamLimits

0xda59,	// (0x0001bd9a) main_mobtv_loading_pane_t2

0x0001,

0xfb71,	// (0x0001deb2) main_mobtv_loading_pane_t_ParamLimits

0xfb71,	// (0x0001deb2) main_mobtv_loading_pane_t

0x6b63,	// (0x00014ea4) wait_bar_pane_cp06_ParamLimits

0x6b63,	// (0x00014ea4) wait_bar_pane_cp06

0xda7d,	// (0x0001bdbe) main_mobtv_programe_curr_pane_t1

0xda8b,	// (0x0001bdcc) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb76,	// (0x0001deb7) main_mobtv_programe_curr_pane_t

0xda99,	// (0x0001bdda) main_mobtv_programe_next_pane_t1

0xdaa7,	// (0x0001bde8) main_mobtv_programe_next_pane_t2

0xdab5,	// (0x0001bdf6) main_mobtv_programe_next_pane_t3

0x0002,

0xfb7b,	// (0x0001debc) main_mobtv_programe_next_pane_t

0x9264,	// (0x000175a5) bg_popup_mobtv_noti_window_pane

0xdac3,	// (0x0001be04) popup_mobtv_noti_window_g1

0xdacb,	// (0x0001be0c) popup_mobtv_noti_window_t1

0xdad9,	// (0x0001be1a) popup_mobtv_noti_window_t2

0x0001,

0xfb82,	// (0x0001dec3) popup_mobtv_noti_window_t

0x9a10,	// (0x00017d51) bg_popup_mobtv_noti_window_pane_g1

0x9264,	// (0x000175a5) sc_clock_pane

0x9264,	// (0x000175a5) main_fs_bigclock_pane

0x624f,	// (0x00014590) blid2_tripm_pane_t4_ParamLimits

0x624f,	// (0x00014590) blid2_tripm_pane_t4

0x99ca,	// (0x00017d0b) sc_clock_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) sc_clock_pane_g1

0x9a1a,	// (0x00017d5b) sc_clock_pane_t1_ParamLimits

0x9a1a,	// (0x00017d5b) sc_clock_pane_t1

0x9a1a,	// (0x00017d5b) sc_clock_pane_t2_ParamLimits

0x9a1a,	// (0x00017d5b) sc_clock_pane_t2

0x9a1a,	// (0x00017d5b) sc_clock_pane_t3_ParamLimits

0x9a1a,	// (0x00017d5b) sc_clock_pane_t3

0x0004,

0xfb87,	// (0x0001dec8) sc_clock_pane_t_ParamLimits

0xfb87,	// (0x0001dec8) sc_clock_pane_t

0x76fd,	// (0x00015a3e) main_fs_bigclock_indicator_pane_ParamLimits

0x76fd,	// (0x00015a3e) main_fs_bigclock_indicator_pane

0x6bc1,	// (0x00014f02) main_fs_bigclock_pane_g1_ParamLimits

0x6bc1,	// (0x00014f02) main_fs_bigclock_pane_g1

0x7709,	// (0x00015a4a) main_fs_bigclock_pane_t1_ParamLimits

0x7709,	// (0x00015a4a) main_fs_bigclock_pane_t1

0x771b,	// (0x00015a5c) main_fs_bigclock_pane_t2_ParamLimits

0x771b,	// (0x00015a5c) main_fs_bigclock_pane_t2

0x772f,	// (0x00015a70) main_fs_bigclock_pane_t3_ParamLimits

0x772f,	// (0x00015a70) main_fs_bigclock_pane_t3

0x0002,

0xfd18,	// (0x0001e059) main_fs_bigclock_pane_t_ParamLimits

0xfd18,	// (0x0001e059) main_fs_bigclock_pane_t

0xe657,	// (0x0001c998) main_fs_bigclock_indicator_pane_g1

0xd7f7,	// (0x0001bb38) ncim_query_content_pane_g2_ParamLimits

0xd7f7,	// (0x0001bb38) ncim_query_content_pane_g2

0x0001,

0xfb14,	// (0x0001de55) ncim_query_content_pane_g_ParamLimits

0xfb14,	// (0x0001de55) ncim_query_content_pane_g

0x9a1a,	// (0x00017d5b) sc_clock_pane_t4_ParamLimits

0x9a1a,	// (0x00017d5b) sc_clock_pane_t4

0x92d3,	// (0x00017614) main_radioblah_pane

0xca35,	// (0x0001ad76) cell_call4_button_pane_t1_copy1_ParamLimits

0xca35,	// (0x0001ad76) cell_call4_button_pane_t1_copy1

0x67cc,	// (0x00014b0d) main_ncimui_pane_t1_ParamLimits

0x67cc,	// (0x00014b0d) main_ncimui_pane_t1

0x67e6,	// (0x00014b27) main_ncimui_pane_t2_ParamLimits

0x67e6,	// (0x00014b27) main_ncimui_pane_t2

0x0002,

0xfb0d,	// (0x0001de4e) main_ncimui_pane_t_ParamLimits

0xfb0d,	// (0x0001de4e) main_ncimui_pane_t

0xa895,	// (0x00018bd6) main_radioblah_anim_pane_ParamLimits

0xa895,	// (0x00018bd6) main_radioblah_anim_pane

0xa895,	// (0x00018bd6) main_radioblah_info_pane_ParamLimits

0xa895,	// (0x00018bd6) main_radioblah_info_pane

0xa881,	// (0x00018bc2) main_radioblah_pane_t1_ParamLimits

0xa881,	// (0x00018bc2) main_radioblah_pane_t1

0xa881,	// (0x00018bc2) main_radioblah_pane_t2_ParamLimits

0xa881,	// (0x00018bc2) main_radioblah_pane_t2

0x0003,

0xfba8,	// (0x0001dee9) main_radioblah_pane_t_ParamLimits

0xfba8,	// (0x0001dee9) main_radioblah_pane_t

0x92d3,	// (0x00017614) main_radioblah_rocker_ctrl_pane_ParamLimits

0x92d3,	// (0x00017614) main_radioblah_rocker_ctrl_pane

0xbc1d,	// (0x00019f5e) main_radioblah_info_pane_t1_ParamLimits

0xbc1d,	// (0x00019f5e) main_radioblah_info_pane_t1

0xdc4e,	// (0x0001bf8f) main_radioblah_info_pane_t2_ParamLimits

0xdc4e,	// (0x0001bf8f) main_radioblah_info_pane_t2

0x0003,

0xfbb1,	// (0x0001def2) main_radioblah_info_pane_t_ParamLimits

0xfbb1,	// (0x0001def2) main_radioblah_info_pane_t

0x9a10,	// (0x00017d51) main_radioblah_rocker_ctrl_pane_g1

0x9a10,	// (0x00017d51) main_radioblah_rocker_ctrl_pane_g2

0x9a10,	// (0x00017d51) main_radioblah_rocker_ctrl_pane_g3

0x9a10,	// (0x00017d51) main_radioblah_rocker_ctrl_pane_g4

0x9a10,	// (0x00017d51) main_radioblah_rocker_ctrl_pane_g5

0x9a10,	// (0x00017d51) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbba,	// (0x0001defb) main_radioblah_rocker_ctrl_pane_g

0x6505,	// (0x00014846) main_cset_text2_pane_t1_copy1_ParamLimits

0xca9f,	// (0x0001ade0) cam4_image_uncrop_qvga_pane

0xcaf8,	// (0x0001ae39) vid4_image_uncrop_qcif_pane

0xd446,	// (0x0001b787) cam6_image_uncrop_qvga_pane_ParamLimits

0xd446,	// (0x0001b787) cam6_image_uncrop_qvga_pane

0xd4fe,	// (0x0001b83f) vid6_image_uncrop_qcif_pane_ParamLimits

0xd4fe,	// (0x0001b83f) vid6_image_uncrop_qcif_pane

0x9264,	// (0x000175a5) bg_popup_preview_window_pane_cp03

0xd7a9,	// (0x0001baea) list_cset_text2_pane

0xd7b1,	// (0x0001baf2) main_cset6_text2_pane_g1

0xd7b9,	// (0x0001bafa) main_cset6_text2_pane_t1

0x6c0e,	// (0x00014f4f) list_cset_text2_pane_t1_ParamLimits

0x6c0e,	// (0x00014f4f) list_cset_text2_pane_t1

0x92d3,	// (0x00017614) main_radioblah_pane_ParamLimits

0x6b0b,	// (0x00014e4c) main_mobtv_info_pane_t3_ParamLimits

0x6b0b,	// (0x00014e4c) main_mobtv_info_pane_t3

0xa873,	// (0x00018bb4) main_radioblah_pane_g1

0xdc1e,	// (0x0001bf5f) main_radioblah_info_pane_g1

0x9a2e,	// (0x00017d6f) main_radioblah_info_pane_t3_ParamLimits

0x9a2e,	// (0x00017d6f) main_radioblah_info_pane_t3

0x23c5,	// (0x00010706) highlight_cell_cale_month_pane_ParamLimits

0x23c5,	// (0x00010706) highlight_cell_cale_month_pane

0x9264,	// (0x000175a5) main_phob_fisheye_pane

0xc2a7,	// (0x0001a5e8) scroll_pane_cp0031_ParamLimits

0xc2a7,	// (0x0001a5e8) scroll_pane_cp0031

0xd60c,	// (0x0001b94d) wait_bar_pane_cp08_ParamLimits

0x658a,	// (0x000148cb) cset_list_set_pane_copy1_ParamLimits

0xdc9d,	// (0x0001bfde) highlight_cell_cale_month_pane_g1

0x6c27,	// (0x00014f68) highlight_cell_cale_month_pane_t1

0xd1f4,	// (0x0001b535) list_gen_pane_cp01

0xcd16,	// (0x0001b057) scroll_pane_01

0x6c35,	// (0x00014f76) list_single_double_fisheye_pane

0x6c3e,	// (0x00014f7f) list_double_fisheye_pane_g1_ParamLimits

0x6c3e,	// (0x00014f7f) list_double_fisheye_pane_g1

0x6c4a,	// (0x00014f8b) list_double_fisheye_pane_g2_ParamLimits

0x6c4a,	// (0x00014f8b) list_double_fisheye_pane_g2

0x6c5e,	// (0x00014f9f) list_double_fisheye_pane_g3_ParamLimits

0x6c5e,	// (0x00014f9f) list_double_fisheye_pane_g3

0x0004,

0xfbc7,	// (0x0001df08) list_double_fisheye_pane_g_ParamLimits

0xfbc7,	// (0x0001df08) list_double_fisheye_pane_g

0x6c87,	// (0x00014fc8) list_double_fisheye_pane_t1_ParamLimits

0x6c87,	// (0x00014fc8) list_double_fisheye_pane_t1

0x6ca2,	// (0x00014fe3) list_double_fisheye_pane_t2_ParamLimits

0x6ca2,	// (0x00014fe3) list_double_fisheye_pane_t2

0x0001,

0xfbd2,	// (0x0001df13) list_double_fisheye_pane_t_ParamLimits

0xfbd2,	// (0x0001df13) list_double_fisheye_pane_t

0x9264,	// (0x000175a5) main_call5_pane

0x92d3,	// (0x00017614) sc_swipe_pane_ParamLimits

0x92d3,	// (0x00017614) sc_swipe_pane

0x6cd7,	// (0x00015018) call5_image_pane_ParamLimits

0x6cd7,	// (0x00015018) call5_image_pane

0x6cf4,	// (0x00015035) call5_swipe_1_pane_ParamLimits

0x6cf4,	// (0x00015035) call5_swipe_1_pane

0x6d07,	// (0x00015048) call5_swipe_2_pane_ParamLimits

0x6d07,	// (0x00015048) call5_swipe_2_pane

0x6d32,	// (0x00015073) popup_call5_audio_first_window_ParamLimits

0x6d32,	// (0x00015073) popup_call5_audio_first_window

0x99ca,	// (0x00017d0b) call5_swipe_1_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) call5_swipe_1_pane_g1

0xdca5,	// (0x0001bfe6) call5_swipe_1_pane_g2_ParamLimits

0xdca5,	// (0x0001bfe6) call5_swipe_1_pane_g2

0x0001,

0xfbd7,	// (0x0001df18) call5_swipe_1_pane_g_ParamLimits

0xfbd7,	// (0x0001df18) call5_swipe_1_pane_g

0xdcb1,	// (0x0001bff2) call5_swipe_1_pane_t1_ParamLimits

0xdcb1,	// (0x0001bff2) call5_swipe_1_pane_t1

0x99ca,	// (0x00017d0b) call5_swipe_2_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) call5_swipe_2_pane_g1

0xdcc6,	// (0x0001c007) call5_swipe_2_pane_g2_ParamLimits

0xdcc6,	// (0x0001c007) call5_swipe_2_pane_g2

0x0001,

0xfbdc,	// (0x0001df1d) call5_swipe_2_pane_g_ParamLimits

0xfbdc,	// (0x0001df1d) call5_swipe_2_pane_g

0xdcd2,	// (0x0001c013) call5_swipe_2_pane_t1_ParamLimits

0xdcd2,	// (0x0001c013) call5_swipe_2_pane_t1

0x99ca,	// (0x00017d0b) sc_swipe_pane_g1_ParamLimits

0x99ca,	// (0x00017d0b) sc_swipe_pane_g1

0x99d8,	// (0x00017d19) sc_swipe_pane_g2_ParamLimits

0x99d8,	// (0x00017d19) sc_swipe_pane_g2

0x0001,

0xf755,	// (0x0001da96) sc_swipe_pane_g_ParamLimits

0xf755,	// (0x0001da96) sc_swipe_pane_g

0x9a1a,	// (0x00017d5b) sc_swipe_pane_t1_ParamLimits

0x9a1a,	// (0x00017d5b) sc_swipe_pane_t1

0x9264,	// (0x000175a5) main_cmail_launcher_pane

0x6d43,	// (0x00015084) aid_size_cell_cmail_l_ParamLimits

0x6d43,	// (0x00015084) aid_size_cell_cmail_l

0x6d51,	// (0x00015092) grid_cmail_l_pane_ParamLimits

0x6d51,	// (0x00015092) grid_cmail_l_pane

0x6d6b,	// (0x000150ac) cell_cmail_l_pane_ParamLimits

0x6d6b,	// (0x000150ac) cell_cmail_l_pane

0xdce7,	// (0x0001c028) cell_cmail_l_pane_g1_ParamLimits

0xdce7,	// (0x0001c028) cell_cmail_l_pane_g1

0xdcf3,	// (0x0001c034) cell_cmail_l_pane_t1_ParamLimits

0xdcf3,	// (0x0001c034) cell_cmail_l_pane_t1

0xdd09,	// (0x0001c04a) cell_cmail_l_pane_t2_ParamLimits

0xdd09,	// (0x0001c04a) cell_cmail_l_pane_t2

0x0001,

0xfbe1,	// (0x0001df22) cell_cmail_l_pane_t_ParamLimits

0xfbe1,	// (0x0001df22) cell_cmail_l_pane_t

0x92d3,	// (0x00017614) grid_highlight_pane_cp018_ParamLimits

0x92d3,	// (0x00017614) grid_highlight_pane_cp018

0x0914,	// (0x0000ec55) main2_pane_ParamLimits

0x0914,	// (0x0000ec55) main2_pane

0x9b44,	// (0x00017e85) popup_sp_fs_action_menu_bg_pane_g1

0x9b4c,	// (0x00017e8d) popup_sp_fs_action_menu_bg_pane_g2

0x9b54,	// (0x00017e95) popup_sp_fs_action_menu_bg_pane_g3

0x9b5c,	// (0x00017e9d) popup_sp_fs_action_menu_bg_pane_g4

0x9b64,	// (0x00017ea5) popup_sp_fs_action_menu_bg_pane_g5

0x9b6c,	// (0x00017ead) popup_sp_fs_action_menu_bg_pane_g6

0x9b74,	// (0x00017eb5) popup_sp_fs_action_menu_bg_pane_g7

0x9b7c,	// (0x00017ebd) popup_sp_fs_action_menu_bg_pane_g8

0x9b84,	// (0x00017ec5) popup_sp_fs_action_menu_bg_pane_g9

0x9b8c,	// (0x00017ecd) popup_sp_fs_action_menu_bg_pane_g10

0x9b8c,	// (0x00017ecd) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x0001d441) popup_sp_fs_action_menu_bg_pane_g

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g3_g1

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g3_g2

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x0001d4ef) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x0001d4ef) list_medium_line_x2_t3_g3_g

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g3_t1

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g3_t2

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x0001d4f6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x0001d4f6) list_medium_line_x2_t3_g3_t

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g2_g1

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x0001d4fd) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x0001d4fd) list_medium_line_x2_t3_g2_g

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g2_t1

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g2_t2

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x0001d4f6) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x0001d4f6) list_medium_line_x2_t3_g2_t

0x99ca,	// (0x00017d0b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t4_g4_g1

0x99ca,	// (0x00017d0b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t4_g4_g2

0x99ca,	// (0x00017d0b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t4_g4_g3

0x99ca,	// (0x00017d0b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x0001d502) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x0001d502) list_medium_line_x2_t4_g4_g

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t4_g4_t1

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t4_g4_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t4_g4_t2

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t4_g4_t3

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x0001d50b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x0001d50b) list_medium_line_x2_t4_g4_t

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g4_g1

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g4_g2

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g4_g3

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x0001d502) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x0001d502) list_medium_line_x2_t2_g4_g

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t2_g4_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t2_g4_t1

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x0001d4d2) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x0001d4d2) list_medium_line_x2_t2_g4_t

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g3_g1

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g3_g2

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x0001d4ef) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x0001d4ef) list_medium_line_x2_t2_g3_g

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t2_g3_t1

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x0001d4d2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x0001d4d2) list_medium_line_x2_t2_g3_t

0x2517,	// (0x00010858) main_sp_fs_list_pane_ParamLimits

0x2517,	// (0x00010858) main_sp_fs_list_pane

0xce95,	// (0x0001b1d6) sp_fs_scroll_pane_ParamLimits

0xce95,	// (0x0001b1d6) sp_fs_scroll_pane

0xa248,	// (0x00018589) list_medium_line_x2_t3_t1

0xa248,	// (0x00018589) list_medium_line_x2_t3_t2

0xa248,	// (0x00018589) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x0001d5b8) list_medium_line_x2_t3_t

0xa248,	// (0x00018589) list_medium_line_x3_t4_t1

0xa248,	// (0x00018589) list_medium_line_x3_t4_t2

0xa248,	// (0x00018589) list_medium_line_x3_t4_t3

0xa248,	// (0x00018589) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x0001d5bf) list_medium_line_x3_t4_t

0xa248,	// (0x00018589) list_medium_line_x4_t5_t1

0xa248,	// (0x00018589) list_medium_line_x4_t5_t2

0xa248,	// (0x00018589) list_medium_line_x4_t5_t3

0xa248,	// (0x00018589) list_medium_line_x4_t5_t4

0xa248,	// (0x00018589) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x0001d5c8) list_medium_line_x4_t5_t

0x99ca,	// (0x00017d0b) list_medium_line_t4_g4_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_t4_g4_g1

0x99ca,	// (0x00017d0b) list_medium_line_t4_g4_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_t4_g4_g2

0x99ca,	// (0x00017d0b) list_medium_line_t4_g4_g3_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_t4_g4_g3

0x99ca,	// (0x00017d0b) list_medium_line_t4_g4_g4_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x0001d502) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x0001d502) list_medium_line_t4_g4_g

0x9a1a,	// (0x00017d5b) list_medium_line_t4_g4_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t4_g4_t1

0x9a1a,	// (0x00017d5b) list_medium_line_t4_g4_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t4_g4_t2

0x9a1a,	// (0x00017d5b) list_medium_line_t4_g4_t3_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t4_g4_t3

0x9a1a,	// (0x00017d5b) list_medium_line_t4_g4_t4_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x0001d50b) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x0001d50b) list_medium_line_t4_g4_t

0x25b2,	// (0x000108f3) chi_dic_find_pane_g1

0x33ee,	// (0x0001172f) main_tport_pane

0xa248,	// (0x00018589) list_medium_line_plain_t1

0x99ca,	// (0x00017d0b) list_medium_line_t2_g2_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_t2_g2_g1

0x99ca,	// (0x00017d0b) list_medium_line_t2_g2_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x0001d4fd) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x0001d4fd) list_medium_line_t2_g2_g

0x9a1a,	// (0x00017d5b) list_medium_line_t2_g2_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t2_g2_t1

0x9a1a,	// (0x00017d5b) list_medium_line_t2_g2_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x0001d4d2) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x0001d4d2) list_medium_line_t2_g2_t

0xd267,	// (0x0001b5a8) aid_sp_fs_list_icon_a_sm

0xd26f,	// (0x0001b5b0) aid_sp_fs_list_icon_d

0xd277,	// (0x0001b5b8) aid_sp_fs_text_primary

0xd280,	// (0x0001b5c1) aid_sp_fs_text_secondary

0x9264,	// (0x000175a5) list_medium_line

0x9264,	// (0x000175a5) list_medium_line_g2

0x9264,	// (0x000175a5) list_medium_line_g3

0x9264,	// (0x000175a5) list_medium_line_plain

0x9264,	// (0x000175a5) list_medium_line_plain_t2

0x9264,	// (0x000175a5) list_medium_line_plain_t3

0x9264,	// (0x000175a5) list_medium_line_right_icon

0x9264,	// (0x000175a5) list_medium_line_right_iconx2

0x9264,	// (0x000175a5) list_medium_line_t2

0x9264,	// (0x000175a5) list_medium_line_t2_g2

0x9264,	// (0x000175a5) list_medium_line_t2_g3

0x9264,	// (0x000175a5) list_medium_line_t2_right_icon

0x9264,	// (0x000175a5) list_medium_line_t2_right_iconx2

0x9264,	// (0x000175a5) list_medium_line_t3

0x9264,	// (0x000175a5) list_medium_line_t3_g2

0x9264,	// (0x000175a5) list_medium_line_t3_g3

0x9264,	// (0x000175a5) list_medium_line_t3_right_iconx2

0x9264,	// (0x000175a5) list_medium_line_t4_g4

0x9264,	// (0x000175a5) list_medium_line_x2

0x9264,	// (0x000175a5) list_medium_line_x2_t2_g2

0x9264,	// (0x000175a5) list_medium_line_x2_t2_g3

0x9264,	// (0x000175a5) list_medium_line_x2_t2_g4

0x9264,	// (0x000175a5) list_medium_line_x2_t3

0x9264,	// (0x000175a5) list_medium_line_x2_t3_g2

0x9264,	// (0x000175a5) list_medium_line_x2_t3_g3

0x9264,	// (0x000175a5) list_medium_line_x2_t3_g4

0x9264,	// (0x000175a5) list_medium_line_x2_t4_g2

0x9264,	// (0x000175a5) list_medium_line_x2_t4_g4

0x9264,	// (0x000175a5) list_medium_line_x3

0x9264,	// (0x000175a5) list_medium_line_x3_t4

0x9264,	// (0x000175a5) list_medium_line_x3_t4_g4

0x9264,	// (0x000175a5) list_medium_line_x4_t4

0x9264,	// (0x000175a5) list_medium_line_x4_t4_g7

0x9264,	// (0x000175a5) list_medium_line_x4_t5

0x603f,	// (0x00014380) list_single_fs_dyc_pane_ParamLimits

0x603f,	// (0x00014380) list_single_fs_dyc_pane

0x99ca,	// (0x00017d0b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x4_t4_g7_g1

0x99ca,	// (0x00017d0b) list_medium_line_x4_t4_g7_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x4_t4_g7_g2

0x99ca,	// (0x00017d0b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x4_t4_g7_g3

0x99ca,	// (0x00017d0b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x4_t4_g7_g4

0x99ca,	// (0x00017d0b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x4_t4_g7_g5

0x99ca,	// (0x00017d0b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x4_t4_g7_g6

0x99d8,	// (0x00017d19) list_medium_line_x4_t4_g7_g7_ParamLimits

0x99d8,	// (0x00017d19) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaee,	// (0x0001de2f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaee,	// (0x0001de2f) list_medium_line_x4_t4_g7_g

0x9a1a,	// (0x00017d5b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x4_t4_g7_t1

0x9a1a,	// (0x00017d5b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x4_t4_g7_t2

0x9a1a,	// (0x00017d5b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x4_t4_g7_t3

0x9a2e,	// (0x00017d6f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x9a2e,	// (0x00017d6f) list_medium_line_x4_t4_g7_t4

0x9a2e,	// (0x00017d6f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x9a2e,	// (0x00017d6f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfafd,	// (0x0001de3e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfafd,	// (0x0001de3e) list_medium_line_x4_t4_g7_t

0x6783,	// (0x00014ac4) list_single_dyc_row_pane_ParamLimits

0x6783,	// (0x00014ac4) list_single_dyc_row_pane

0x6cc4,	// (0x00015005) call5_gesture_pane_ParamLimits

0x6cc4,	// (0x00015005) call5_gesture_pane

0x6d1a,	// (0x0001505b) call5_windows_pane_ParamLimits

0x6d1a,	// (0x0001505b) call5_windows_pane

0x6d85,	// (0x000150c6) call5_swipe_1_pane_cp_ParamLimits

0x6d85,	// (0x000150c6) call5_swipe_1_pane_cp

0x6d91,	// (0x000150d2) call5_swipe_2_pane_cp_ParamLimits

0x6d91,	// (0x000150d2) call5_swipe_2_pane_cp

0x9ccd,	// (0x0001800e) call5_image_pane_cp

0x6d9d,	// (0x000150de) popup_call5_audio_first_window_cp_ParamLimits

0x6d9d,	// (0x000150de) popup_call5_audio_first_window_cp

0xdd26,	// (0x0001c067) call5_swipe_1_pane_g1_cp_ParamLimits

0xdd26,	// (0x0001c067) call5_swipe_1_pane_g1_cp

0xdd33,	// (0x0001c074) call5_swipe_1_pane_g2_cp

0xdd3b,	// (0x0001c07c) call5_swipe_1_pane_t1_cp_ParamLimits

0xdd3b,	// (0x0001c07c) call5_swipe_1_pane_t1_cp

0xdd26,	// (0x0001c067) call5_swipe_2_pane_g1_cp_ParamLimits

0xdd26,	// (0x0001c067) call5_swipe_2_pane_g1_cp

0xdd50,	// (0x0001c091) call5_swipe_2_pane_g2_cp

0xdd58,	// (0x0001c099) call5_swipe_2_pane_t1_cp_ParamLimits

0xdd58,	// (0x0001c099) call5_swipe_2_pane_t1_cp

0x92d3,	// (0x00017614) main_sp_fs_email_pane

0xdd6d,	// (0x0001c0ae) main_sp_fs_listscroll_pane_te

0xdd76,	// (0x0001c0b7) popup_sp_fs_action_menu_pane_ParamLimits

0xdd76,	// (0x0001c0b7) popup_sp_fs_action_menu_pane

0x9a10,	// (0x00017d51) bg_sp_fs_ctrlbar_pane_g1

0xddba,	// (0x0001c0fb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xddc3,	// (0x0001c104) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xddcc,	// (0x0001c10d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x9a10,	// (0x00017d51) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbe6,	// (0x0001df27) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbc3f,	// (0x00019f80) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbc3f,	// (0x00019f80) bg_sp_fs_ctrlbar_ddmenu_pane

0xddd5,	// (0x0001c116) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xddd5,	// (0x0001c116) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdde1,	// (0x0001c122) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdde1,	// (0x0001c122) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbef,	// (0x0001df30) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbef,	// (0x0001df30) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdded,	// (0x0001c12e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdded,	// (0x0001c12e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9a10,	// (0x00017d51) list_medium_line_t2_right_icon_g1

0xa248,	// (0x00018589) list_medium_line_t2_right_icon_t1

0xa248,	// (0x00018589) list_medium_line_t2_right_icon_t2

0x0001,

0xfbf4,	// (0x0001df35) list_medium_line_t2_right_icon_t

0xa895,	// (0x00018bd6) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa895,	// (0x00018bd6) bg_sp_fs_ctrlbar_pane

0x6df3,	// (0x00015134) main_sp_fs_ctrlbar_button_pane_cp01

0x6dfd,	// (0x0001513e) main_sp_fs_ctrlbar_ddmenu_pane

0xde3f,	// (0x0001c180) main_sp_fs_ctrlbar_pane_g1

0xde4b,	// (0x0001c18c) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbf9,	// (0x0001df3a) main_sp_fs_ctrlbar_pane_g

0x6e3b,	// (0x0001517c) main_sp_fs_ctrlbar_pane_t1

0x6e7a,	// (0x000151bb) main_sp_fs_ctrlbar_pane

0x6e9e,	// (0x000151df) main_sp_fs_listscroll_pane_te_cp01

0x6ec8,	// (0x00015209) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6ec8,	// (0x00015209) popup_sp_fs_action_menu_pane_cp01

0x92d3,	// (0x00017614) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x92d3,	// (0x00017614) bg_sp_fs_highlight_list_pane_cp01

0xde72,	// (0x0001c1b3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xde72,	// (0x0001c1b3) sp_fs_action_menu_list_gene_pane_g1

0xde81,	// (0x0001c1c2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xde81,	// (0x0001c1c2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc07,	// (0x0001df48) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc07,	// (0x0001df48) sp_fs_action_menu_list_gene_pane_g

0xde8e,	// (0x0001c1cf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xde8e,	// (0x0001c1cf) sp_fs_action_menu_list_gene_pane_t1

0xdea6,	// (0x0001c1e7) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdea6,	// (0x0001c1e7) sp_fs_action_menu_list_gene_pane

0xdec5,	// (0x0001c206) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdec5,	// (0x0001c206) popup_sp_fs_action_menu_bg_pane

0xded3,	// (0x0001c214) sp_fs_action_menu_list_pane_ParamLimits

0xded3,	// (0x0001c214) sp_fs_action_menu_list_pane

0xdef3,	// (0x0001c234) sp_fs_scroll_pane_cp01_ParamLimits

0xdef3,	// (0x0001c234) sp_fs_scroll_pane_cp01

0xa248,	// (0x00018589) list_medium_line_plain_t2_t1

0xa248,	// (0x00018589) list_medium_line_plain_t2_t2

0x0001,

0xfbf4,	// (0x0001df35) list_medium_line_plain_t2_t

0xa248,	// (0x00018589) list_medium_line_plain_t3_t1

0xa248,	// (0x00018589) list_medium_line_plain_t3_t2

0xa248,	// (0x00018589) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x0001d5b8) list_medium_line_plain_t3_t

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g2_g1

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x0001d4fd) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x0001d4fd) list_medium_line_x2_t2_g2_g

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t2_g2_t1

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x0001d4d2) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x0001d4d2) list_medium_line_x2_t2_g2_t

0x99ca,	// (0x00017d0b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t4_g2_g1

0x99ca,	// (0x00017d0b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x0001d4fd) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x0001d4fd) list_medium_line_x2_t4_g2_g

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t4_g2_t1

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t4_g2_t2

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t4_g2_t3

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x0001d50b) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x0001d50b) list_medium_line_x2_t4_g2_t

0x9a10,	// (0x00017d51) list_medium_line_t3_right_iconx2_g1

0x9a10,	// (0x00017d51) list_medium_line_t3_right_iconx2_g2

0x9a10,	// (0x00017d51) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x0001d6d4) list_medium_line_t3_right_iconx2_g

0xa248,	// (0x00018589) list_medium_line_t3_right_iconx2_t1

0xa248,	// (0x00018589) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbf4,	// (0x0001df35) list_medium_line_t3_right_iconx2_t

0x99ca,	// (0x00017d0b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x3_t4_g4_g1

0x99ca,	// (0x00017d0b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x3_t4_g4_g2

0x99ca,	// (0x00017d0b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x3_t4_g4_g3

0x99ca,	// (0x00017d0b) list_medium_line_x3_t4_g4_g4_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x0001d502) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x0001d502) list_medium_line_x3_t4_g4_g

0x9a1a,	// (0x00017d5b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x3_t4_g4_t1

0x9a1a,	// (0x00017d5b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x3_t4_g4_t2

0x9a1a,	// (0x00017d5b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x3_t4_g4_t3

0x9a1a,	// (0x00017d5b) list_medium_line_x3_t4_g4_t4_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x0001d50b) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x0001d50b) list_medium_line_x3_t4_g4_t

0x6eed,	// (0x0001522e) list_single_dyc_row_text_pane_t1_ParamLimits

0x6eed,	// (0x0001522e) list_single_dyc_row_text_pane_t1

0x6f36,	// (0x00015277) list_single_dyc_row_text_pane_t2_ParamLimits

0x6f36,	// (0x00015277) list_single_dyc_row_text_pane_t2

0xdf19,	// (0x0001c25a) list_single_dyc_row_text_pane_t3_ParamLimits

0xdf19,	// (0x0001c25a) list_single_dyc_row_text_pane_t3

0x0005,

0xfc0c,	// (0x0001df4d) list_single_dyc_row_text_pane_t_ParamLimits

0xfc0c,	// (0x0001df4d) list_single_dyc_row_text_pane_t

0xdf3d,	// (0x0001c27e) list_single_dyc_row_pane_g1_ParamLimits

0xdf3d,	// (0x0001c27e) list_single_dyc_row_pane_g1

0xdf49,	// (0x0001c28a) list_single_dyc_row_pane_g2_ParamLimits

0xdf49,	// (0x0001c28a) list_single_dyc_row_pane_g2

0xdf55,	// (0x0001c296) list_single_dyc_row_pane_g3_ParamLimits

0xdf55,	// (0x0001c296) list_single_dyc_row_pane_g3

0xdf61,	// (0x0001c2a2) list_single_dyc_row_pane_g4_ParamLimits

0xdf61,	// (0x0001c2a2) list_single_dyc_row_pane_g4

0x0003,

0xfc19,	// (0x0001df5a) list_single_dyc_row_pane_g_ParamLimits

0xfc19,	// (0x0001df5a) list_single_dyc_row_pane_g

0xdf6d,	// (0x0001c2ae) list_single_dyc_row_text_pane_ParamLimits

0xdf6d,	// (0x0001c2ae) list_single_dyc_row_text_pane

0x9264,	// (0x000175a5) bg_sp_fs_scroll_pane

0xdf8c,	// (0x0001c2cd) thumb_sp_fs_scroll_pane

0x99ca,	// (0x00017d0b) list_medium_line_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_g1

0x9a1a,	// (0x00017d5b) list_medium_line_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t1

0x99ca,	// (0x00017d0b) list_medium_line_x2_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_g1

0x99ca,	// (0x00017d0b) list_medium_line_x2_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x0001d4fd) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x0001d4fd) list_medium_line_x2_g

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t1

0x99ca,	// (0x00017d0b) list_medium_line_x3_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x3_g1

0xdf95,	// (0x0001c2d6) list_medium_line_x3_g2_ParamLimits

0xdf95,	// (0x0001c2d6) list_medium_line_x3_g2

0x0001,

0xfc22,	// (0x0001df63) list_medium_line_x3_g_ParamLimits

0xfc22,	// (0x0001df63) list_medium_line_x3_g

0xdfa3,	// (0x0001c2e4) list_medium_line_x3_t1_ParamLimits

0xdfa3,	// (0x0001c2e4) list_medium_line_x3_t1

0xdfb7,	// (0x0001c2f8) thumb_sp_fs_scroll_pane_g1

0xdfc0,	// (0x0001c301) thumb_sp_fs_scroll_pane_g2

0xdfc9,	// (0x0001c30a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc27,	// (0x0001df68) thumb_sp_fs_scroll_pane_g

0xdfb7,	// (0x0001c2f8) bg_sp_fs_scroll_pane_g1

0xdfc0,	// (0x0001c301) bg_sp_fs_scroll_pane_g2

0xdfc9,	// (0x0001c30a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc27,	// (0x0001df68) bg_sp_fs_scroll_pane_g

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g4_g1

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g4_g2

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g4_g3

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x0001d502) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x0001d502) list_medium_line_x2_t3_g4_g

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g4_t1

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g4_t2

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x0001d4f6) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x0001d4f6) list_medium_line_x2_t3_g4_t

0x99ca,	// (0x00017d0b) list_medium_line_g2_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_g2_g1

0x99ca,	// (0x00017d0b) list_medium_line_g2_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x0001d4fd) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x0001d4fd) list_medium_line_g2_g

0x9a1a,	// (0x00017d5b) list_medium_line_g2_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_g2_t1

0x99ca,	// (0x00017d0b) list_medium_line_t3_g2_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_t3_g2_g1

0x99ca,	// (0x00017d0b) list_medium_line_t3_g2_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x0001d4fd) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x0001d4fd) list_medium_line_t3_g2_g

0x9a1a,	// (0x00017d5b) list_medium_line_t3_g2_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t3_g2_t1

0x9a1a,	// (0x00017d5b) list_medium_line_t3_g2_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t3_g2_t2

0x9a1a,	// (0x00017d5b) list_medium_line_t3_g2_t3_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x0001d4f6) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x0001d4f6) list_medium_line_t3_g2_t

0x9a10,	// (0x00017d51) list_medium_line_right_icon_g1

0xa248,	// (0x00018589) list_medium_line_right_icon_t1

0x99ca,	// (0x00017d0b) list_medium_line_t2_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_t2_g1

0x9a1a,	// (0x00017d5b) list_medium_line_t2_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t2_t1

0x9a1a,	// (0x00017d5b) list_medium_line_t2_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x0001d4d2) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x0001d4d2) list_medium_line_t2_t

0x99ca,	// (0x00017d0b) list_medium_line_t3_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_t3_g1

0x9a1a,	// (0x00017d5b) list_medium_line_t3_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t3_t1

0x9a1a,	// (0x00017d5b) list_medium_line_t3_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t3_t2

0x9a1a,	// (0x00017d5b) list_medium_line_t3_t3_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x0001d4f6) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x0001d4f6) list_medium_line_t3_t

0x99ca,	// (0x00017d0b) list_medium_line_g3_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_g3_g1

0x99ca,	// (0x00017d0b) list_medium_line_g3_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_g3_g2

0x99ca,	// (0x00017d0b) list_medium_line_g3_g3_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x0001d4ef) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x0001d4ef) list_medium_line_g3_g

0x9a1a,	// (0x00017d5b) list_medium_line_g3_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_g3_t1

0x99ca,	// (0x00017d0b) list_medium_line_t2_g3_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_t2_g3_g1

0x99ca,	// (0x00017d0b) list_medium_line_t2_g3_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_t2_g3_g2

0x99ca,	// (0x00017d0b) list_medium_line_t2_g3_g3_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x0001d4ef) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x0001d4ef) list_medium_line_t2_g3_g

0x9a1a,	// (0x00017d5b) list_medium_line_t2_g3_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t2_g3_t1

0x9a1a,	// (0x00017d5b) list_medium_line_t2_g3_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x0001d4d2) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x0001d4d2) list_medium_line_t2_g3_t

0x99ca,	// (0x00017d0b) list_medium_line_t3_g3_g1_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_t3_g3_g1

0x99ca,	// (0x00017d0b) list_medium_line_t3_g3_g2_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_t3_g3_g2

0x99ca,	// (0x00017d0b) list_medium_line_t3_g3_g3_ParamLimits

0x99ca,	// (0x00017d0b) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x0001d4ef) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x0001d4ef) list_medium_line_t3_g3_g

0x9a1a,	// (0x00017d5b) list_medium_line_t3_g3_t1_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t3_g3_t1

0x9a1a,	// (0x00017d5b) list_medium_line_t3_g3_t2_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t3_g3_t2

0x9a1a,	// (0x00017d5b) list_medium_line_t3_g3_t3_ParamLimits

0x9a1a,	// (0x00017d5b) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x0001d4f6) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x0001d4f6) list_medium_line_t3_g3_t

0x9a10,	// (0x00017d51) list_medium_line_right_iconx2_g1

0x9a10,	// (0x00017d51) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x0001d3f0) list_medium_line_right_iconx2_g

0xa248,	// (0x00018589) list_medium_line_right_iconx2_t1

0x9a10,	// (0x00017d51) list_medium_line_t2_right_iconx2_g1

0x9a10,	// (0x00017d51) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x0001d3f0) list_medium_line_t2_right_iconx2_g

0xa248,	// (0x00018589) list_medium_line_t2_right_iconx2_t1

0xa248,	// (0x00018589) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbf4,	// (0x0001df35) list_medium_line_t2_right_iconx2_t

0xa248,	// (0x00018589) list_medium_line_x4_t4_t1

0xa248,	// (0x00018589) list_medium_line_x4_t4_t2

0xa248,	// (0x00018589) list_medium_line_x4_t4_t3

0xa248,	// (0x00018589) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x0001d5bf) list_medium_line_x4_t4_t

0x70ae,	// (0x000153ef) tport_appsw_pane_ParamLimits

0x70ae,	// (0x000153ef) tport_appsw_pane

0x70c6,	// (0x00015407) tport_contact_pane_ParamLimits

0x70c6,	// (0x00015407) tport_contact_pane

0x70de,	// (0x0001541f) tport_listscroll_pane_ParamLimits

0x70de,	// (0x0001541f) tport_listscroll_pane

0x70f8,	// (0x00015439) cell_tport_appsw_pane_ParamLimits

0x70f8,	// (0x00015439) cell_tport_appsw_pane

0xa873,	// (0x00018bb4) tport_appsw_pane_g1_ParamLimits

0xa873,	// (0x00018bb4) tport_appsw_pane_g1

0xdfd2,	// (0x0001c313) tport_contact_pane_g1

0xd87d,	// (0x0001bbbe) tport_contact_pane_t1

0xdfdb,	// (0x0001c31c) tport_contact_pane_t2

0x0001,

0xfc2e,	// (0x0001df6f) tport_contact_pane_t

0xdfe9,	// (0x0001c32a) list_tport_pane

0xdff2,	// (0x0001c333) scroll_pane_cp_030

0x7140,	// (0x00015481) cell_tport_appsw_pane_g1

0x7150,	// (0x00015491) cell_tport_appsw_pane_t1

0x715e,	// (0x0001549f) grid_highlight_pane_cp019

0x7166,	// (0x000154a7) list_tport_double_graphic_pane_ParamLimits

0x7166,	// (0x000154a7) list_tport_double_graphic_pane

0x92d3,	// (0x00017614) list_highlight_pane_cp023_ParamLimits

0x92d3,	// (0x00017614) list_highlight_pane_cp023

0x7173,	// (0x000154b4) list_tport_double_graphic_pane_g1_ParamLimits

0x7173,	// (0x000154b4) list_tport_double_graphic_pane_g1

0x7180,	// (0x000154c1) list_tport_double_graphic_pane_t1_ParamLimits

0x7180,	// (0x000154c1) list_tport_double_graphic_pane_t1

0x7195,	// (0x000154d6) list_tport_double_graphic_pane_t2_ParamLimits

0x7195,	// (0x000154d6) list_tport_double_graphic_pane_t2

0x0001,

0xfc3a,	// (0x0001df7b) list_tport_double_graphic_pane_t_ParamLimits

0xfc3a,	// (0x0001df7b) list_tport_double_graphic_pane_t

0x9264,	// (0x000175a5) main_cale_note_pane

0x5102,	// (0x00013443) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5102,	// (0x00013443) cell_vitu2_function_top_wide_pane_cp01

0x6b1f,	// (0x00014e60) wait_bar_pane_cp05_ParamLimits

0x92d3,	// (0x00017614) listscroll_cmail_pane

0xe003,	// (0x0001c344) list_cmail_pane

0x71a7,	// (0x000154e8) list_cmail_body_pane

0x71bc,	// (0x000154fd) list_single_cmail_header_caption_pane

0x71d2,	// (0x00015513) list_single_cmail_header_detail_pane_ParamLimits

0x71d2,	// (0x00015513) list_single_cmail_header_detail_pane

0xe01a,	// (0x0001c35b) list_single_cmail_header_caption_pane_t1

0x71ff,	// (0x00015540) list_single_cmail_header_detail_pane_g1_ParamLimits

0x71ff,	// (0x00015540) list_single_cmail_header_detail_pane_g1

0xe031,	// (0x0001c372) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe031,	// (0x0001c372) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc3f,	// (0x0001df80) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc3f,	// (0x0001df80) list_single_cmail_header_detail_pane_g

0x7217,	// (0x00015558) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7217,	// (0x00015558) list_single_cmail_header_detail_pane_t1

0x7255,	// (0x00015596) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7255,	// (0x00015596) list_single_cmail_header_editor_pane_bg

0xd9da,	// (0x0001bd1b) list_cmail_body_pane_g1

0xe06e,	// (0x0001c3af) list_cmail_body_pane_t1

0xcbd6,	// (0x0001af17) list_single_cmail_header_editor_pane_bg_g1

0x9ef0,	// (0x00018231) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcbe6,	// (0x0001af27) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcbde,	// (0x0001af1f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcebd,	// (0x0001b1fe) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcc06,	// (0x0001af47) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcbf6,	// (0x0001af37) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcbfe,	// (0x0001af3f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9ed0,	// (0x00018211) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x726e,	// (0x000155af) calenote_gesture_pane_ParamLimits

0x726e,	// (0x000155af) calenote_gesture_pane

0x728e,	// (0x000155cf) calenote_window_pane_ParamLimits

0x728e,	// (0x000155cf) calenote_window_pane

0xe07c,	// (0x0001c3bd) popup_note_window_cp01

0x72aa,	// (0x000155eb) calenote_swipe_1_pane_ParamLimits

0x72aa,	// (0x000155eb) calenote_swipe_1_pane

0x6d91,	// (0x000150d2) calenote_swipe_2_pane_ParamLimits

0x6d91,	// (0x000150d2) calenote_swipe_2_pane

0xdd26,	// (0x0001c067) calenote_swipe_1_pane_g1_ParamLimits

0xdd26,	// (0x0001c067) calenote_swipe_1_pane_g1

0xe08e,	// (0x0001c3cf) calenote_swipe_1_pane_g2_ParamLimits

0xe08e,	// (0x0001c3cf) calenote_swipe_1_pane_g2

0x0001,

0xfc4b,	// (0x0001df8c) calenote_swipe_1_pane_g_ParamLimits

0xfc4b,	// (0x0001df8c) calenote_swipe_1_pane_g

0xe09a,	// (0x0001c3db) calenote_swipe_1_pane_t1_ParamLimits

0xe09a,	// (0x0001c3db) calenote_swipe_1_pane_t1

0xdd26,	// (0x0001c067) calenote_swipe_2_pane_g1_ParamLimits

0xdd26,	// (0x0001c067) calenote_swipe_2_pane_g1

0xe0b9,	// (0x0001c3fa) calenote_swipe_2_pane_g2_ParamLimits

0xe0b9,	// (0x0001c3fa) calenote_swipe_2_pane_g2

0x0001,

0xfc50,	// (0x0001df91) calenote_swipe_2_pane_g_ParamLimits

0xfc50,	// (0x0001df91) calenote_swipe_2_pane_g

0xe0c5,	// (0x0001c406) calenote_swipe_2_pane_t1_ParamLimits

0xe0c5,	// (0x0001c406) calenote_swipe_2_pane_t1

0x9264,	// (0x000175a5) main_mup_navstr_pane

0x4059,	// (0x0001239a) main_mup3_pane_t7_ParamLimits

0x4059,	// (0x0001239a) main_mup3_pane_t7

0xc76c,	// (0x0001aaad) main_mp4_pane_g6_ParamLimits

0xc76c,	// (0x0001aaad) main_mp4_pane_g6

0xca23,	// (0x0001ad64) main_image3_pane_t4_ParamLimits

0xca23,	// (0x0001ad64) main_image3_pane_t4

0x72bf,	// (0x00015600) popup_navstr_preview_pane_ParamLimits

0x72bf,	// (0x00015600) popup_navstr_preview_pane

0x72d3,	// (0x00015614) scroll_navstr_pane_ParamLimits

0x72d3,	// (0x00015614) scroll_navstr_pane

0x9264,	// (0x000175a5) bg_popup_preview_window_pane_cp04

0xe0ec,	// (0x0001c42d) popup_navstr_preview_pane_t1

0x72e7,	// (0x00015628) scroll_navstr_pane_g1_ParamLimits

0x72e7,	// (0x00015628) scroll_navstr_pane_g1

0x72fb,	// (0x0001563c) scroll_navstr_pane_t1_ParamLimits

0x72fb,	// (0x0001563c) scroll_navstr_pane_t1

0xe085,	// (0x0001c3c6) bg_button_pane_cp014

0xe085,	// (0x0001c3c6) bg_button_pane_cp030

0x6c6a,	// (0x00014fab) list_double_fisheye_pane_g4_ParamLimits

0x6c6a,	// (0x00014fab) list_double_fisheye_pane_g4

0x6c76,	// (0x00014fb7) list_double_fisheye_pane_g5_ParamLimits

0x6c76,	// (0x00014fb7) list_double_fisheye_pane_g5

0xce95,	// (0x0001b1d6) sp_fs_scroll_pane_cp03

0xde3f,	// (0x0001c180) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xde4b,	// (0x0001c18c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbf9,	// (0x0001df3a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x6e3b,	// (0x0001517c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe012,	// (0x0001c353) sp_fs_scroll_pane_cp02

0x9c15,	// (0x00017f56) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9c15,	// (0x00017f56) popup_sp_fs_calendar_preview_list_single_pane

0x9264,	// (0x000175a5) main_cam6_pano_pane

0x92d3,	// (0x00017614) main_mup3_pane_ParamLimits

0x9264,	// (0x000175a5) main_phacti_pane

0x69f2,	// (0x00014d33) bg_button_pane_cp11

0x6a0c,	// (0x00014d4d) main_mobtv_info_pane_g2_ParamLimits

0x6a0c,	// (0x00014d4d) main_mobtv_info_pane_g2

0x0001,

0xfb5e,	// (0x0001de9f) main_mobtv_info_pane_g_ParamLimits

0xfb5e,	// (0x0001de9f) main_mobtv_info_pane_g

0x9a1a,	// (0x00017d5b) sc_clock_pane_t5_ParamLimits

0x9a1a,	// (0x00017d5b) sc_clock_pane_t5

0xa873,	// (0x00018bb4) main_radioblah_pane_g1_ParamLimits

0xa881,	// (0x00018bc2) main_radioblah_pane_t3_ParamLimits

0xa881,	// (0x00018bc2) main_radioblah_pane_t3

0xa881,	// (0x00018bc2) main_radioblah_pane_t4_ParamLimits

0xa881,	// (0x00018bc2) main_radioblah_pane_t4

0x92d3,	// (0x00017614) main_radioblah_text_pane_ParamLimits

0x92d3,	// (0x00017614) main_radioblah_text_pane

0xdc1e,	// (0x0001bf5f) main_radioblah_info_pane_g1_ParamLimits

0xdc62,	// (0x0001bfa3) main_radioblah_info_pane_t4_ParamLimits

0xdc62,	// (0x0001bfa3) main_radioblah_info_pane_t4

0x92d3,	// (0x00017614) main_sp_fs_calendar_pane

0x7312,	// (0x00015653) main_phacti_pane_g1

0x731a,	// (0x0001565b) phacti_note_pane_ParamLimits

0x731a,	// (0x0001565b) phacti_note_pane

0xe103,	// (0x0001c444) phacti_term_pane_ParamLimits

0xe103,	// (0x0001c444) phacti_term_pane

0xe118,	// (0x0001c459) phacti_note_pane_t1_ParamLimits

0xe118,	// (0x0001c459) phacti_note_pane_t1

0xe12f,	// (0x0001c470) phacti_term_pane_g1

0xe137,	// (0x0001c478) phacti_term_pane_t1_ParamLimits

0xe137,	// (0x0001c478) phacti_term_pane_t1

0xe161,	// (0x0001c4a2) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9cb4,	// (0x00017ff5) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc5a,	// (0x0001df9b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe169,	// (0x0001c4aa) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe169,	// (0x0001c4aa) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe17f,	// (0x0001c4c0) aid_popup_sp_fs_bg_corner_pane

0x9a10,	// (0x00017d51) popup_sp_fs_calendar_preview_bg_pane_g1

0x9264,	// (0x000175a5) popup_sp_fs_calendar_preview_bg_pane

0xe187,	// (0x0001c4c8) popup_sp_fs_calendar_preview_list_pane

0xa895,	// (0x00018bd6) bg_main_sp_fs_cale_pane_ParamLimits

0xa895,	// (0x00018bd6) bg_main_sp_fs_cale_pane

0xe198,	// (0x0001c4d9) listscroll_cale_mrui_pane_ParamLimits

0xe198,	// (0x0001c4d9) listscroll_cale_mrui_pane

0xe1ad,	// (0x0001c4ee) listscroll_sp_fs_schedule_track_pane

0xe1b6,	// (0x0001c4f7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe1b6,	// (0x0001c4f7) main_sp_fs_ctrlbar_pane_cp01

0xe1c9,	// (0x0001c50a) main_sp_fs_ribbon_pane

0xe1d1,	// (0x0001c512) popup_sp_fs_cale_preview_window

0x738f,	// (0x000156d0) list_single_sp_fs_schedule_track_pane_ParamLimits

0x738f,	// (0x000156d0) list_single_sp_fs_schedule_track_pane

0x92d3,	// (0x00017614) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x92d3,	// (0x00017614) bg_sp_fs_highlight_list_pane_cp03

0x73a2,	// (0x000156e3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x73a2,	// (0x000156e3) list_single_sp_fs_schedule_track_pane_g1

0x73ae,	// (0x000156ef) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x73ae,	// (0x000156ef) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc5f,	// (0x0001dfa0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc5f,	// (0x0001dfa0) list_single_sp_fs_schedule_track_pane_g

0x73ba,	// (0x000156fb) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x73ba,	// (0x000156fb) list_single_sp_fs_schedule_track_pane_t1

0x73d4,	// (0x00015715) sp_fs_schedule_track_pane_ParamLimits

0x73d4,	// (0x00015715) sp_fs_schedule_track_pane

0xe1e3,	// (0x0001c524) sp_fs_schedule_track_pane_g1

0xe1eb,	// (0x0001c52c) sp_fs_schedule_track_pane_g2

0xe1f3,	// (0x0001c534) sp_fs_schedule_track_pane_g3

0xe1fb,	// (0x0001c53c) sp_fs_schedule_track_pane_g4

0xe203,	// (0x0001c544) sp_fs_schedule_track_pane_g5

0x0004,

0xfc64,	// (0x0001dfa5) sp_fs_schedule_track_pane_g

0xcbd6,	// (0x0001af17) bg_sp_fs_schedule_viewer_highlight_g1

0x9ef0,	// (0x00018231) bg_sp_fs_schedule_viewer_highlight_g2

0xcbde,	// (0x0001af1f) bg_sp_fs_schedule_viewer_highlight_g3

0xcbe6,	// (0x0001af27) bg_sp_fs_schedule_viewer_highlight_g4

0xcebd,	// (0x0001b1fe) bg_sp_fs_schedule_viewer_highlight_g5

0xcbf6,	// (0x0001af37) bg_sp_fs_schedule_viewer_highlight_g6

0xcbfe,	// (0x0001af3f) bg_sp_fs_schedule_viewer_highlight_g7

0xcc06,	// (0x0001af47) bg_sp_fs_schedule_viewer_highlight_g8

0x9ed0,	// (0x00018211) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc6f,	// (0x0001dfb0) bg_sp_fs_schedule_viewer_highlight_g

0x9264,	// (0x000175a5) bg_main_sp_fs_ribbon_pane

0x73e5,	// (0x00015726) main_sp_fs_ribbon_pane_g1

0xe20b,	// (0x0001c54c) main_sp_fs_ribbon_pane_t1

0x73ee,	// (0x0001572f) main_sp_fs_ribbon_pane_t2

0xe21a,	// (0x0001c55b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc82,	// (0x0001dfc3) main_sp_fs_ribbon_pane_t

0xe229,	// (0x0001c56a) main_sp_fs_ribbon_scheduler_pane

0xe231,	// (0x0001c572) bg_main_sp_fs_ribbon_pane_g1

0xe23a,	// (0x0001c57b) bg_main_sp_fs_ribbon_pane_g2

0xe243,	// (0x0001c584) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc89,	// (0x0001dfca) bg_main_sp_fs_ribbon_pane_g

0xe24b,	// (0x0001c58c) main_sp_fs_ribbon_scheduler_pane_g1

0xe254,	// (0x0001c595) main_sp_fs_ribbon_scheduler_pane_g2

0xe25d,	// (0x0001c59e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc90,	// (0x0001dfd1) main_sp_fs_ribbon_scheduler_pane_g

0xe266,	// (0x0001c5a7) list_cale_mrui_pane

0x73fd,	// (0x0001573e) sp_fs_scroll_pane_cp07_ParamLimits

0x73fd,	// (0x0001573e) sp_fs_scroll_pane_cp07

0x7419,	// (0x0001575a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7419,	// (0x0001575a) bg_sp_fs_schedule_viewer_highlight

0xe273,	// (0x0001c5b4) list_single_sp_fs_schedule_track_pane_cp01

0xe27b,	// (0x0001c5bc) list_sp_fs_schedule_track_pane

0xe283,	// (0x0001c5c4) sp_fs_scroll_pane_cp06_ParamLimits

0xe283,	// (0x0001c5c4) sp_fs_scroll_pane_cp06

0x9a10,	// (0x00017d51) bgmain_sp_fs_calendar_pane_g1

0x7429,	// (0x0001576a) list_single_cale_mrui_pane_ParamLimits

0x7429,	// (0x0001576a) list_single_cale_mrui_pane

0xe295,	// (0x0001c5d6) list_single_cale_mrui_row_pane_ParamLimits

0xe295,	// (0x0001c5d6) list_single_cale_mrui_row_pane

0xe2a2,	// (0x0001c5e3) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe2a2,	// (0x0001c5e3) list_single_cale_mrui_row_pane_g1

0xe2e7,	// (0x0001c628) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe2e7,	// (0x0001c628) list_single_cale_mrui_row_pane_t1

0x7449,	// (0x0001578a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7449,	// (0x0001578a) list_single_cale_mrui_row_pane_t2

0xe2f9,	// (0x0001c63a) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe2f9,	// (0x0001c63a) list_single_cale_mrui_row_pane_t3

0xe328,	// (0x0001c669) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe328,	// (0x0001c669) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc9e,	// (0x0001dfdf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc9e,	// (0x0001dfdf) list_single_cale_mrui_row_pane_t

0x74b1,	// (0x000157f2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x74b1,	// (0x000157f2) list_single_cmail_header_editor_pane_bg_cp01

0x74df,	// (0x00015820) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x74df,	// (0x00015820) list_single_cmail_header_editor_pane_bg_cp02

0xe357,	// (0x0001c698) main_radioblah_text_pane_t1_ParamLimits

0xe357,	// (0x0001c698) main_radioblah_text_pane_t1

0xe371,	// (0x0001c6b2) cam6_indi_pane_cp01

0xe379,	// (0x0001c6ba) cam6_mode_pane_cp01

0xe381,	// (0x0001c6c2) cam6_pano_pane

0xe38a,	// (0x0001c6cb) cam6_zoom_pane_cp01

0xe392,	// (0x0001c6d3) cam6_pano_image_pane

0xe39d,	// (0x0001c6de) cam6_pano_pane_g1

0xd9da,	// (0x0001bd1b) cam6_pano_pane_g2

0xe3a6,	// (0x0001c6e7) cam6_pano_pane_g3

0xe3af,	// (0x0001c6f0) cam6_pano_pane_g4

0xc500,	// (0x0001a841) cam6_pano_pane_g5

0xe3b8,	// (0x0001c6f9) cam6_pano_pane_g6

0xe3c2,	// (0x0001c703) cam6_pano_pane_g7

0xe3ca,	// (0x0001c70b) cam6_pano_pane_g8

0xe3d3,	// (0x0001c714) cam6_pano_pane_g9

0x0008,

0xfca7,	// (0x0001dfe8) cam6_pano_pane_g

0x9264,	// (0x000175a5) main_browser_tag_pane

0xe0e4,	// (0x0001c425) grid_navstr_albumart_pane

0xe3de,	// (0x0001c71f) cell_navstr_albumart_pane_ParamLimits

0xe3de,	// (0x0001c71f) cell_navstr_albumart_pane

0xe3fe,	// (0x0001c73f) cell_navstr_albumart_pane_g1

0xb958,	// (0x00019c99) cell_navstr_albumart_pane_g2

0xb968,	// (0x00019ca9) cell_navstr_albumart_pane_g3

0xb960,	// (0x00019ca1) cell_navstr_albumart_pane_g4

0x0003,

0xfcba,	// (0x0001dffb) cell_navstr_albumart_pane_g

0x74ff,	// (0x00015840) bt_list_pane_ParamLimits

0x74ff,	// (0x00015840) bt_list_pane

0x7513,	// (0x00015854) bt_list_pane_t1

0x7522,	// (0x00015863) bt_list_pane_t2

0x0001,

0xfcc3,	// (0x0001e004) bt_list_pane_t

0x9264,	// (0x000175a5) main_cale_prevew_pane

0x7531,	// (0x00015872) popup_cale_preview_window_ParamLimits

0x7531,	// (0x00015872) popup_cale_preview_window

0x92d3,	// (0x00017614) bg_popup_preview_window_pane_cp05_ParamLimits

0x92d3,	// (0x00017614) bg_popup_preview_window_pane_cp05

0xe406,	// (0x0001c747) list_cale_preview_pane_ParamLimits

0xe406,	// (0x0001c747) list_cale_preview_pane

0x754c,	// (0x0001588d) list_double_cale_preview_pane_ParamLimits

0x754c,	// (0x0001588d) list_double_cale_preview_pane

0x755e,	// (0x0001589f) list_single_cale_preview_pane_ParamLimits

0x755e,	// (0x0001589f) list_single_cale_preview_pane

0x7574,	// (0x000158b5) list_single_cale_preview_pane_g1

0x757c,	// (0x000158bd) list_single_cale_preview_pane_t1_ParamLimits

0x757c,	// (0x000158bd) list_single_cale_preview_pane_t1

0x7591,	// (0x000158d2) list_double_cale_preview_pane_g1

0x7599,	// (0x000158da) list_double_cale_preview_pane_t1_ParamLimits

0x7599,	// (0x000158da) list_double_cale_preview_pane_t1

0x75ae,	// (0x000158ef) list_double_cale_preview_pane_t2_ParamLimits

0x75ae,	// (0x000158ef) list_double_cale_preview_pane_t2

0x0001,

0xfcc8,	// (0x0001e009) list_double_cale_preview_pane_t_ParamLimits

0xfcc8,	// (0x0001e009) list_double_cale_preview_pane_t

0x9264,	// (0x000175a5) main_ezdial_pane

0x92d3,	// (0x00017614) main_sp_fs_email_pane_ParamLimits

0x6dab,	// (0x000150ec) cmail_ddmenu_btn01_pane_ParamLimits

0x6dab,	// (0x000150ec) cmail_ddmenu_btn01_pane

0x6dbe,	// (0x000150ff) cmail_ddmenu_btn02_pane_ParamLimits

0x6dbe,	// (0x000150ff) cmail_ddmenu_btn02_pane

0x6de1,	// (0x00015122) cmail_ddmenu_btn03_pane_ParamLimits

0x6de1,	// (0x00015122) cmail_ddmenu_btn03_pane

0x6e7a,	// (0x000151bb) main_sp_fs_ctrlbar_pane_ParamLimits

0x6e9e,	// (0x000151df) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x71a7,	// (0x000154e8) list_cmail_body_pane_ParamLimits

0xe028,	// (0x0001c369) bg_button_pane_cp12

0xe03d,	// (0x0001c37e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe03d,	// (0x0001c37e) list_single_cmail_header_detail_pane_g3

0xe04a,	// (0x0001c38b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe04a,	// (0x0001c38b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc46,	// (0x0001df87) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc46,	// (0x0001df87) list_single_cmail_header_detail_pane_t

0xe14c,	// (0x0001c48d) phacti_term_pane_t2_ParamLimits

0xe14c,	// (0x0001c48d) phacti_term_pane_t2

0x0001,

0xfc55,	// (0x0001df96) phacti_term_pane_t_ParamLimits

0xfc55,	// (0x0001df96) phacti_term_pane_t

0xe412,	// (0x0001c753) aid_size_list_single_double

0x75c6,	// (0x00015907) popup_ezdial_listscroll_window

0xe41e,	// (0x0001c75f) popup_number_entry_window_cp01

0x9ccd,	// (0x0001800e) bg_popup_call_pane_cp09

0xe42b,	// (0x0001c76c) ezdial_list_pane

0xe433,	// (0x0001c774) scroll_pane_cp23

0xa895,	// (0x00018bd6) bg_button_pane_cp028_ParamLimits

0xa895,	// (0x00018bd6) bg_button_pane_cp028

0x75dd,	// (0x0001591e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x75dd,	// (0x0001591e) cmail_ddmenu_btn01_pane_g1

0x75e9,	// (0x0001592a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x75e9,	// (0x0001592a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfccd,	// (0x0001e00e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfccd,	// (0x0001e00e) cmail_ddmenu_btn01_pane_g

0xe43b,	// (0x0001c77c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe43b,	// (0x0001c77c) cmail_ddmenu_btn01_pane_t1

0xa895,	// (0x00018bd6) bg_button_pane_cp029_ParamLimits

0xa895,	// (0x00018bd6) bg_button_pane_cp029

0x75fd,	// (0x0001593e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x75fd,	// (0x0001593e) cmail_ddmenu_btn02_pane_g1

0x7615,	// (0x00015956) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7615,	// (0x00015956) cmail_ddmenu_btn02_pane_t1

0x92d3,	// (0x00017614) bg_button_pane_cp031_ParamLimits

0x92d3,	// (0x00017614) bg_button_pane_cp031

0x75fd,	// (0x0001593e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x75fd,	// (0x0001593e) cmail_ddmenu_btn03_pane_g1

0x7615,	// (0x00015956) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7615,	// (0x00015956) cmail_ddmenu_btn03_pane_t1

0x9a1a,	// (0x00017d5b) cell_dialer2_keypad_pane_t1_ParamLimits

0xc52e,	// (0x0001a86f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc52e,	// (0x0001a86f) cell_dialer2_keypad_pane_t1_copy1

0x6815,	// (0x00014b56) ncimui_group_button_pane

0x92d3,	// (0x00017614) main_sp_fs_calendar_pane_ParamLimits

0x71bc,	// (0x000154fd) list_single_cmail_header_caption_pane_ParamLimits

0xe18f,	// (0x0001c4d0) aid_recal_txt_sm_pane

0x9264,	// (0x000175a5) mian_recal_day_pane

0xe1d1,	// (0x0001c512) popup_sp_fs_cale_preview_window_ParamLimits

0xe451,	// (0x0001c792) list_recal_day_pane

0xe493,	// (0x0001c7d4) list_single_recal_day_pane_ParamLimits

0xe493,	// (0x0001c7d4) list_single_recal_day_pane

0xe4a5,	// (0x0001c7e6) list_single_recal_day_pane_g1_ParamLimits

0xe4a5,	// (0x0001c7e6) list_single_recal_day_pane_g1

0xe4b1,	// (0x0001c7f2) list_single_recal_day_pane_g2_ParamLimits

0xe4b1,	// (0x0001c7f2) list_single_recal_day_pane_g2

0xe4bd,	// (0x0001c7fe) list_single_recal_day_pane_g3_ParamLimits

0xe4bd,	// (0x0001c7fe) list_single_recal_day_pane_g3

0x7639,	// (0x0001597a) list_single_recal_day_pane_g4_ParamLimits

0x7639,	// (0x0001597a) list_single_recal_day_pane_g4

0xe4c9,	// (0x0001c80a) list_single_recal_day_pane_g5_ParamLimits

0xe4c9,	// (0x0001c80a) list_single_recal_day_pane_g5

0xe4d5,	// (0x0001c816) list_single_recal_day_pane_g6_ParamLimits

0xe4d5,	// (0x0001c816) list_single_recal_day_pane_g6

0x0004,

0xfcdc,	// (0x0001e01d) list_single_recal_day_pane_g_ParamLimits

0xfcdc,	// (0x0001e01d) list_single_recal_day_pane_g

0xe4e9,	// (0x0001c82a) list_single_recal_day_pane_t1

0xe4fb,	// (0x0001c83c) list_single_recal_day_pane_t2

0x0001,

0xfce7,	// (0x0001e028) list_single_recal_day_pane_t

0x7651,	// (0x00015992) ncimui_query_button_pane_ParamLimits

0x7651,	// (0x00015992) ncimui_query_button_pane

0x7661,	// (0x000159a2) ncimui_query_button_pane_t1_ParamLimits

0x7661,	// (0x000159a2) ncimui_query_button_pane_t1

0xe50d,	// (0x0001c84e) ncimui_query_button_pane_t2_ParamLimits

0xe50d,	// (0x0001c84e) ncimui_query_button_pane_t2

0x0001,

0xfcec,	// (0x0001e02d) ncimui_query_button_pane_t_ParamLimits

0xfcec,	// (0x0001e02d) ncimui_query_button_pane_t

0x7674,	// (0x000159b5) query_button_pane_ParamLimits

0x7674,	// (0x000159b5) query_button_pane

0x9264,	// (0x000175a5) bg_button_pane_cp0028

0xe520,	// (0x0001c861) query_button_pane_t1

0x33ee,	// (0x0001172f) main_tport_pane_ParamLimits

0x706b,	// (0x000153ac) bg_popup_window_pane_cp01_ParamLimits

0x706b,	// (0x000153ac) bg_popup_window_pane_cp01

0x7086,	// (0x000153c7) heading_pane_cp08_ParamLimits

0x7086,	// (0x000153c7) heading_pane_cp08

0x7099,	// (0x000153da) heading_pane_cp07_ParamLimits

0x7099,	// (0x000153da) heading_pane_cp07

0x7140,	// (0x00015481) cell_tport_appsw_pane_g2

0x0002,

0xfc33,	// (0x0001df74) cell_tport_appsw_pane_g

0x29d6,	// (0x00010d17) input_candi_list_open_g1

0xa0e9,	// (0x0001842a) list_cale_time_pane_g6_ParamLimits

0xa0e9,	// (0x0001842a) list_cale_time_pane_g6

0x3a01,	// (0x00011d42) aid_size_touch_calib_1_ParamLimits

0x3a01,	// (0x00011d42) aid_size_touch_calib_1

0x3a13,	// (0x00011d54) aid_size_touch_calib_2_ParamLimits

0x3a13,	// (0x00011d54) aid_size_touch_calib_2

0x3a2b,	// (0x00011d6c) aid_size_touch_calib_3_ParamLimits

0x3a2b,	// (0x00011d6c) aid_size_touch_calib_3

0x3a49,	// (0x00011d8a) aid_size_touch_calib_4_ParamLimits

0x3a49,	// (0x00011d8a) aid_size_touch_calib_4

0x3a61,	// (0x00011da2) main_touch_calib_button_group_pane_ParamLimits

0x3a61,	// (0x00011da2) main_touch_calib_button_group_pane

0x3a79,	// (0x00011dba) main_touch_calib_pane_g1_ParamLimits

0x3a8b,	// (0x00011dcc) main_touch_calib_pane_g2_ParamLimits

0x3a9d,	// (0x00011dde) main_touch_calib_pane_g3_ParamLimits

0x3aaf,	// (0x00011df0) main_touch_calib_pane_g4_ParamLimits

0xf67f,	// (0x0001d9c0) main_touch_calib_pane_g_ParamLimits

0x3ac1,	// (0x00011e02) main_touch_calib_pane_t1_ParamLimits

0x3adb,	// (0x00011e1c) main_touch_calib_pane_t2_ParamLimits

0x3af5,	// (0x00011e36) main_touch_calib_pane_t3_ParamLimits

0x3b09,	// (0x00011e4a) main_touch_calib_pane_t4_ParamLimits

0x3b1d,	// (0x00011e5e) main_touch_calib_pane_t5_ParamLimits

0xf688,	// (0x0001d9c9) main_touch_calib_pane_t_ParamLimits

0xc2cb,	// (0x0001a60c) list_single_fp_cale_pane_g3_ParamLimits

0xc2cb,	// (0x0001a60c) list_single_fp_cale_pane_g3

0x92d3,	// (0x00017614) bg_button_pane_cp012_ParamLimits

0x92d3,	// (0x00017614) bg_vkb2_func_pane_cp03_ParamLimits

0x59c6,	// (0x00013d07) cell_vitu2_function_top_pane_g1_ParamLimits

0x92d3,	// (0x00017614) bg_vkb2_func_pane_cp04_ParamLimits

0x67a0,	// (0x00014ae1) main_ncimui_button_group_pane_ParamLimits

0x67a0,	// (0x00014ae1) main_ncimui_button_group_pane

0x6800,	// (0x00014b41) main_ncimui_pane_t3_ParamLimits

0x6800,	// (0x00014b41) main_ncimui_pane_t3

0xe0fa,	// (0x0001c43b) phacti_button_group_pane

0xe412,	// (0x0001c753) aid_size_list_single_double_ParamLimits

0x75c6,	// (0x00015907) popup_ezdial_listscroll_window_ParamLimits

0xe41e,	// (0x0001c75f) popup_number_entry_window_cp01_ParamLimits

0x7687,	// (0x000159c8) phacti_button_pane_ParamLimits

0x7687,	// (0x000159c8) phacti_button_pane

0x9264,	// (0x000175a5) bg_button_pane_cp14

0xe52e,	// (0x0001c86f) phacti_button_pane_t1

0x7698,	// (0x000159d9) main_touch_calib_button_pane_ParamLimits

0x7698,	// (0x000159d9) main_touch_calib_button_pane

0x9a88,	// (0x00017dc9) bg_button_pane_cp18_ParamLimits

0x9a88,	// (0x00017dc9) bg_button_pane_cp18

0xe53c,	// (0x0001c87d) main_touch_calib_button_pane_t1_ParamLimits

0xe53c,	// (0x0001c87d) main_touch_calib_button_pane_t1

0xe552,	// (0x0001c893) main_touch_calib_button_pane_t2_ParamLimits

0xe552,	// (0x0001c893) main_touch_calib_button_pane_t2

0x0001,

0xfcf1,	// (0x0001e032) main_touch_calib_button_pane_t_ParamLimits

0xfcf1,	// (0x0001e032) main_touch_calib_button_pane_t

0x9264,	// (0x000175a5) cell_ncimui_button_pane

0x9264,	// (0x000175a5) bg_button_pane_cp032

0xe570,	// (0x0001c8b1) cell_ncimui_button_pane_t1

0xca03,	// (0x0001ad44) image3_infobar_pane_ParamLimits

0xca03,	// (0x0001ad44) image3_infobar_pane

0x6b72,	// (0x00014eb3) fs_bigclock_status_pane_ParamLimits

0x6b72,	// (0x00014eb3) fs_bigclock_status_pane

0x6b7f,	// (0x00014ec0) main_fs_bigclock_clock_pane_ParamLimits

0x6b7f,	// (0x00014ec0) main_fs_bigclock_clock_pane

0x6b9d,	// (0x00014ede) main_fs_bigclock_indi_pane_ParamLimits

0x6b9d,	// (0x00014ede) main_fs_bigclock_indi_pane

0x6bcf,	// (0x00014f10) main_fs_bigclock_swipe_pane_ParamLimits

0x6bcf,	// (0x00014f10) main_fs_bigclock_swipe_pane

0x9264,	// (0x000175a5) main_fs_clock_dumped_data

0xdae7,	// (0x0001be28) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdae7,	// (0x0001be28) list_single_fs_bigclock_indicator_pane_g1

0xdb02,	// (0x0001be43) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdb02,	// (0x0001be43) list_single_fs_bigclock_indicator_pane_g2

0xdb1c,	// (0x0001be5d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdb1c,	// (0x0001be5d) list_single_fs_bigclock_indicator_pane_g3

0xdb36,	// (0x0001be77) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdb36,	// (0x0001be77) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb92,	// (0x0001ded3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb92,	// (0x0001ded3) list_single_fs_bigclock_indicator_pane_g

0xdb61,	// (0x0001bea2) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdb61,	// (0x0001bea2) list_single_fs_bigclock_indicator_pane_t1

0xdb89,	// (0x0001beca) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdb89,	// (0x0001beca) list_single_fs_bigclock_indicator_pane_t2

0xdbb1,	// (0x0001bef2) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdbb1,	// (0x0001bef2) list_single_fs_bigclock_indicator_pane_t3

0xdbd9,	// (0x0001bf1a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdbd9,	// (0x0001bf1a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb9d,	// (0x0001dede) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb9d,	// (0x0001dede) list_single_fs_bigclock_indicator_pane_t

0xe57e,	// (0x0001c8bf) image3_infobar_fav_pane_ParamLimits

0xe57e,	// (0x0001c8bf) image3_infobar_fav_pane

0xe58e,	// (0x0001c8cf) image3_infobar_loc_pane_ParamLimits

0xe58e,	// (0x0001c8cf) image3_infobar_loc_pane

0xe5a2,	// (0x0001c8e3) image3_infobar_time_pane_ParamLimits

0xe5a2,	// (0x0001c8e3) image3_infobar_time_pane

0x9a10,	// (0x00017d51) image3_infobar_time_pane_g1

0xe5b2,	// (0x0001c8f3) image3_infobar_time_pane_t1

0x9a10,	// (0x00017d51) image3_infobar_loc_pane_g1

0xe5c0,	// (0x0001c901) image3_infobar_loc_pane_g2

0x0001,

0xfcf6,	// (0x0001e037) image3_infobar_loc_pane_g

0xe5c8,	// (0x0001c909) image3_infobar_loc_pane_t1

0x9a10,	// (0x00017d51) image3_infobar_fav_pane_g1

0xe5d6,	// (0x0001c917) image3_infobar_fav_pane_g2

0x0001,

0xfcfb,	// (0x0001e03c) image3_infobar_fav_pane_g

0xe5de,	// (0x0001c91f) fs_bigclock_status_battery_pane

0xe5e7,	// (0x0001c928) fs_bigclock_status_signal_pane

0xe5f0,	// (0x0001c931) fs_bigclock_status_title_pane

0xe5f9,	// (0x0001c93a) fs_bigclock_status_signal_pane_g1

0xe602,	// (0x0001c943) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd00,	// (0x0001e041) fs_bigclock_status_signal_pane_g

0xe60a,	// (0x0001c94b) fs_bigclock_status_battery_pane_g1

0xe613,	// (0x0001c954) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd05,	// (0x0001e046) fs_bigclock_status_battery_pane_g

0xe61b,	// (0x0001c95c) fs_bigclock_status_title_pane_t1

0x76ad,	// (0x000159ee) main_fs_bigclock_clock_pane_g1

0x76ad,	// (0x000159ee) main_fs_bigclock_clock_pane_g2

0x76be,	// (0x000159ff) main_fs_bigclock_clock_pane_g3

0x76be,	// (0x000159ff) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd0a,	// (0x0001e04b) main_fs_bigclock_clock_pane_g

0x76d1,	// (0x00015a12) main_fs_bigclock_clock_pane_t1

0x76e7,	// (0x00015a28) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd13,	// (0x0001e054) main_fs_bigclock_clock_pane_t

0xe629,	// (0x0001c96a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe629,	// (0x0001c96a) list_single_fs_bigclock_indicator_pane

0xe63a,	// (0x0001c97b) list_single_fs_bigclock_pane_ParamLimits

0xe63a,	// (0x0001c97b) list_single_fs_bigclock_pane

0xe660,	// (0x0001c9a1) main_fs_bigclock_indicator_pane_t1

0xe66f,	// (0x0001c9b0) list_single_fs_bigclock_pane_g1

0xe677,	// (0x0001c9b8) list_single_fs_bigclock_pane_t1

0x9a10,	// (0x00017d51) main_fs_bigclock_swipe_pane_g1

0xe6ba,	// (0x0001c9fb) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd24,	// (0x0001e065) main_fs_bigclock_swipe_pane_g

0xe6c2,	// (0x0001ca03) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe6c2,	// (0x0001ca03) main_fs_bigclock_swipe_pane_t1

0x2523,	// (0x00010864) call_type_pane_ParamLimits

0x9264,	// (0x000175a5) main_btmg_pane

0xe2ce,	// (0x0001c60f) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe2ce,	// (0x0001c60f) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc97,	// (0x0001dfd8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc97,	// (0x0001dfd8) list_single_cale_mrui_row_pane_g

0xe47a,	// (0x0001c7bb) list_recal_vselct_arw_lo_pane

0xe482,	// (0x0001c7c3) list_recal_vselct_arw_up_pane

0xe48a,	// (0x0001c7cb) list_recal_vselct_pane

0x7741,	// (0x00015a82) btmg_button_pane

0x774b,	// (0x00015a8c) main_btmg_pane_g1

0x9264,	// (0x000175a5) bg_button_pane_cp044

0xe6df,	// (0x0001ca20) btmg_button_pane_t1

0xbaa8,	// (0x00019de9) aid_listscroll_gen

0x92d3,	// (0x00017614) main_cntbar_detail_pane

0xdffb,	// (0x0001c33c) list_cmail_folder_pane

0xce95,	// (0x0001b1d6) sp_fs_scroll_pane_cp03_ParamLimits

0x71bc,	// (0x000154fd) list_single_fs_dyc_pane_cp01_ParamLimits

0x71bc,	// (0x000154fd) list_single_fs_dyc_pane_cp01

0xe6ed,	// (0x0001ca2e) aid_size_cmail_indent

0xe6f6,	// (0x0001ca37) list_single_dyc_row_pane_cp01

0x7781,	// (0x00015ac2) cntbar_detail_list_pane_ParamLimits

0x7781,	// (0x00015ac2) cntbar_detail_list_pane

0x77cd,	// (0x00015b0e) main_cntbar_detail_cont_pane_ParamLimits

0x77cd,	// (0x00015b0e) main_cntbar_detail_cont_pane

0xce95,	// (0x0001b1d6) scroll_pane_cp032_ParamLimits

0xce95,	// (0x0001b1d6) scroll_pane_cp032

0x77e1,	// (0x00015b22) cntbar_detail_list_event_pane_ParamLimits

0x77e1,	// (0x00015b22) cntbar_detail_list_event_pane

0x7791,	// (0x00015ad2) cntbar_detail_list_shct_pane

0x9f3e,	// (0x0001827f) aid_list_gen

0xe6ff,	// (0x0001ca40) aid_scroll

0xe708,	// (0x0001ca49) aid_size_touch_scroll_bar

0x6c35,	// (0x00014f76) aid_list_double

0xe711,	// (0x0001ca52) aid_list_single

0xe711,	// (0x0001ca52) aid_list_single_lg

0xe71a,	// (0x0001ca5b) aid_list_z_g_a_sm

0xe722,	// (0x0001ca63) aid_list_z_g_d

0xe72a,	// (0x0001ca6b) aid_txt_z_prm

0x77f1,	// (0x00015b32) aid_txt_z_prm_cp01

0x77ff,	// (0x00015b40) aid_txt_z_sec

0x780d,	// (0x00015b4e) main_cntbar_detail_cont_pane_g1_ParamLimits

0x780d,	// (0x00015b4e) main_cntbar_detail_cont_pane_g1

0x7821,	// (0x00015b62) main_cntbar_detail_cont_pane_g2_ParamLimits

0x7821,	// (0x00015b62) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd29,	// (0x0001e06a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd29,	// (0x0001e06a) main_cntbar_detail_cont_pane_g

0xe738,	// (0x0001ca79) main_cntbar_detail_cont_pane_t1

0xe746,	// (0x0001ca87) main_cntbar_detail_cont_pane_t2

0xe754,	// (0x0001ca95) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd2e,	// (0x0001e06f) main_cntbar_detail_cont_pane_t

0x7831,	// (0x00015b72) cell_cntbar_detail_list_shct_pane_ParamLimits

0x7831,	// (0x00015b72) cell_cntbar_detail_list_shct_pane

0xe762,	// (0x0001caa3) cntbar_detail_list_shct_pane_g1

0xe76b,	// (0x0001caac) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd35,	// (0x0001e076) cntbar_detail_list_shct_pane_g

0x7845,	// (0x00015b86) cntbar_detail_list_event_pane_g1_ParamLimits

0x7845,	// (0x00015b86) cntbar_detail_list_event_pane_g1

0x7851,	// (0x00015b92) cntbar_detail_list_event_pane_g2_ParamLimits

0x7851,	// (0x00015b92) cntbar_detail_list_event_pane_g2

0x0005,

0xfd3a,	// (0x0001e07b) cntbar_detail_list_event_pane_g_ParamLimits

0xfd3a,	// (0x0001e07b) cntbar_detail_list_event_pane_g

0x78bd,	// (0x00015bfe) cntbar_detail_list_event_pane_t1_ParamLimits

0x78bd,	// (0x00015bfe) cntbar_detail_list_event_pane_t1

0x78d2,	// (0x00015c13) cntbar_detail_list_event_pane_t2_ParamLimits

0x78d2,	// (0x00015c13) cntbar_detail_list_event_pane_t2

0x0002,

0xfd47,	// (0x0001e088) cntbar_detail_list_event_pane_t_ParamLimits

0xfd47,	// (0x0001e088) cntbar_detail_list_event_pane_t

0x9a10,	// (0x00017d51) cell_cntbar_detail_list_shct_pane_g1

0xa762,	// (0x00018aa3) navi_pane_mv_g3

0x92d3,	// (0x00017614) main_cntbar_detail_pane_ParamLimits

0x9264,	// (0x000175a5) main_notif_wgt_pane

0xc6f6,	// (0x0001aa37) aid_tch_main_mp4_pane_g4

0xc96e,	// (0x0001acaf) popup_slider_window_cp02

0xe470,	// (0x0001c7b1) list_recal_day_event_pane

0x7755,	// (0x00015a96) cntbar_detail_btn_pane_ParamLimits

0x7755,	// (0x00015a96) cntbar_detail_btn_pane

0x776b,	// (0x00015aac) cntbar_detail_btn_pane_cp01_ParamLimits

0x776b,	// (0x00015aac) cntbar_detail_btn_pane_cp01

0x7791,	// (0x00015ad2) cntbar_detail_list_shct_pane_ParamLimits

0x77a1,	// (0x00015ae2) cntbar_detail_pane_g1_ParamLimits

0x77a1,	// (0x00015ae2) cntbar_detail_pane_g1

0x77b1,	// (0x00015af2) cntbar_detail_pane_t1_ParamLimits

0x77b1,	// (0x00015af2) cntbar_detail_pane_t1

0x785d,	// (0x00015b9e) cntbar_detail_list_event_pane_g3_ParamLimits

0x785d,	// (0x00015b9e) cntbar_detail_list_event_pane_g3

0x7875,	// (0x00015bb6) cntbar_detail_list_event_pane_g4_ParamLimits

0x7875,	// (0x00015bb6) cntbar_detail_list_event_pane_g4

0x788d,	// (0x00015bce) cntbar_detail_list_event_pane_g5_ParamLimits

0x788d,	// (0x00015bce) cntbar_detail_list_event_pane_g5

0x78a5,	// (0x00015be6) cntbar_detail_list_event_pane_g6_ParamLimits

0x78a5,	// (0x00015be6) cntbar_detail_list_event_pane_g6

0x78e7,	// (0x00015c28) cntbar_detail_list_event_pane_t3_ParamLimits

0x78e7,	// (0x00015c28) cntbar_detail_list_event_pane_t3

0x78f9,	// (0x00015c3a) popup_notif_wgt_window_ParamLimits

0x78f9,	// (0x00015c3a) popup_notif_wgt_window

0x7912,	// (0x00015c53) popup_submenu_window_cp01_ParamLimits

0x7912,	// (0x00015c53) popup_submenu_window_cp01

0x9ccd,	// (0x0001800e) bg_popup_window_pane_cp10

0xe774,	// (0x0001cab5) listscroll_notif_wgt_pane

0xe786,	// (0x0001cac7) list_notif_wgt_window

0xe78f,	// (0x0001cad0) scroll_pane_cp033

0x7928,	// (0x00015c69) list_notif_wgt_row_pane_ParamLimits

0x7928,	// (0x00015c69) list_notif_wgt_row_pane

0xe798,	// (0x0001cad9) aid_size_list_notif_wgt_del

0xe7a5,	// (0x0001cae6) list_notif_wgt_row_pane_g1

0xe7b1,	// (0x0001caf2) list_notif_wgt_row_pane_g2

0xe7c0,	// (0x0001cb01) list_notif_wgt_row_pane_g3

0x0002,

0xfd4e,	// (0x0001e08f) list_notif_wgt_row_pane_g

0xe7cd,	// (0x0001cb0e) list_notif_wgt_row_pane_t1

0xe7e3,	// (0x0001cb24) list_notif_wgt_row_pane_t2

0xe7f5,	// (0x0001cb36) list_notif_wgt_row_pane_t3

0x0002,

0xfd55,	// (0x0001e096) list_notif_wgt_row_pane_t

0xcee5,	// (0x0001b226) list_recal_day_event_pane_g1

0xe807,	// (0x0001cb48) list_recal_day_event_pane_t1

0x9264,	// (0x000175a5) bg_button_pane_cp045

0xe816,	// (0x0001cb57) cntbar_detail_btn_pane_t1

0xa895,	// (0x00018bd6) main_callh_pane_ParamLimits

0xa895,	// (0x00018bd6) main_callh_pane

0x9264,	// (0x000175a5) main_coverflow0_pane

0x9264,	// (0x000175a5) main_wgtman_pane

0x6be7,	// (0x00014f28) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6be7,	// (0x00014f28) main_fs_bigclock_unlock_btn_pane

0x7138,	// (0x00015479) bg_button_pane_cp16

0x7148,	// (0x00015489) cell_tport_appsw_pane_g3

0x7938,	// (0x00015c79) cf0_flow_pane_ParamLimits

0x7938,	// (0x00015c79) cf0_flow_pane

0xe824,	// (0x0001cb65) listscroll_cf0_pane

0xe82f,	// (0x0001cb70) main_cf0_pane_g1

0x794d,	// (0x00015c8e) main_cf0_pane_t1_ParamLimits

0x794d,	// (0x00015c8e) main_cf0_pane_t1

0x7964,	// (0x00015ca5) main_cf0_pane_t2_ParamLimits

0x7964,	// (0x00015ca5) main_cf0_pane_t2

0x0001,

0xfd61,	// (0x0001e0a2) main_cf0_pane_t_ParamLimits

0xfd61,	// (0x0001e0a2) main_cf0_pane_t

0xe841,	// (0x0001cb82) scroll_pane_cp11

0x797b,	// (0x00015cbc) cf0_flow_pane_g1

0x7983,	// (0x00015cc4) cf0_flow_pane_g2

0x0001,

0xfd66,	// (0x0001e0a7) cf0_flow_pane_g

0x798b,	// (0x00015ccc) cf0_flow_pane_t1

0x9264,	// (0x000175a5) main_call6_pane

0x9264,	// (0x000175a5) main_calllock_pane

0x7999,	// (0x00015cda) call6_btn_grp_pane_ParamLimits

0x7999,	// (0x00015cda) call6_btn_grp_pane

0x79b3,	// (0x00015cf4) call6_pane_g1_ParamLimits

0x79b3,	// (0x00015cf4) call6_pane_g1

0x79c9,	// (0x00015d0a) popup_call6_1st_window_ParamLimits

0x79c9,	// (0x00015d0a) popup_call6_1st_window

0x79da,	// (0x00015d1b) popup_call6_2nd_window_ParamLimits

0x79da,	// (0x00015d1b) popup_call6_2nd_window

0x79eb,	// (0x00015d2c) cell_call6_btn_pane_ParamLimits

0x79eb,	// (0x00015d2c) cell_call6_btn_pane

0x9ccd,	// (0x0001800e) bg_popup_call2_in_pane_cp03

0xe84c,	// (0x0001cb8d) popup_call6_1st_window_g1

0xe854,	// (0x0001cb95) popup_call6_1st_window_g2

0xe85c,	// (0x0001cb9d) popup_call6_1st_window_g3

0x0002,

0xfd6b,	// (0x0001e0ac) popup_call6_1st_window_g

0xe864,	// (0x0001cba5) popup_call6_1st_window_t1

0xe873,	// (0x0001cbb4) popup_call6_1st_window_t2

0xe881,	// (0x0001cbc2) popup_call6_1st_window_t3

0x0002,

0xfd72,	// (0x0001e0b3) popup_call6_1st_window_t

0x9ccd,	// (0x0001800e) bg_popup_call2_in_pane_cp04

0xe88f,	// (0x0001cbd0) popup_call6_2nd_window_g1

0xe897,	// (0x0001cbd8) popup_call6_2nd_window_g2

0xe89f,	// (0x0001cbe0) popup_call6_2nd_window_g3

0x0002,

0xfd79,	// (0x0001e0ba) popup_call6_2nd_window_g

0xe8a7,	// (0x0001cbe8) popup_call6_2nd_window_t1

0x9264,	// (0x000175a5) bg_button_pane_cp15

0xe8b6,	// (0x0001cbf7) cell_call6_btn_pane_g1

0xe8bf,	// (0x0001cc00) cell_call6_btn_pane_t1

0x79fe,	// (0x00015d3f) listscroll_wgtman_pane_ParamLimits

0x79fe,	// (0x00015d3f) listscroll_wgtman_pane

0x7a1f,	// (0x00015d60) wgtman_btn_pane_ParamLimits

0x7a1f,	// (0x00015d60) wgtman_btn_pane

0xa569,	// (0x000188aa) aid_scroll_copy1

0xe8ce,	// (0x0001cc0f) list_wgtman_pane

0x7a62,	// (0x00015da3) wgtman_btn_pane_g1_ParamLimits

0x7a62,	// (0x00015da3) wgtman_btn_pane_g1

0x7a8e,	// (0x00015dcf) wgtman_btn_pane_t1_ParamLimits

0x7a8e,	// (0x00015dcf) wgtman_btn_pane_t1

0xe8d8,	// (0x0001cc19) wgtman_btn_pane_t2_ParamLimits

0xe8d8,	// (0x0001cc19) wgtman_btn_pane_t2

0x0001,

0xfd80,	// (0x0001e0c1) wgtman_btn_pane_t_ParamLimits

0xfd80,	// (0x0001e0c1) wgtman_btn_pane_t

0x7acb,	// (0x00015e0c) listrow_wgtman_pane_ParamLimits

0x7acb,	// (0x00015e0c) listrow_wgtman_pane

0x7add,	// (0x00015e1e) listrow_wgtman_pane_g1

0x7aea,	// (0x00015e2b) listrow_wgtman_pane_g2

0x0001,

0xfd85,	// (0x0001e0c6) listrow_wgtman_pane_g

0x7b08,	// (0x00015e49) listrow_wgtman_pane_t1

0x7b20,	// (0x00015e61) listrow_wgtman_pane_t2

0x0001,

0xfd8a,	// (0x0001e0cb) listrow_wgtman_pane_t

0x7b46,	// (0x00015e87) wait_bar_pane_cp09

0xe8ef,	// (0x0001cc30) main_calllock_btn_pane

0xe8f9,	// (0x0001cc3a) main_calllock_pane_g1

0x9264,	// (0x000175a5) bg_button_pane_cp17

0xe8b6,	// (0x0001cbf7) main_calllock_btn_pane_g1

0xe901,	// (0x0001cc42) main_calllock_btn_pane_t1

0x9264,	// (0x000175a5) main_dialer3_pane

0x9264,	// (0x000175a5) main_fmrd2_pane

0x9a10,	// (0x00017d51) main_fs_bigclock_unlock_btn_pane_g1

0x7b60,	// (0x00015ea1) main_fs_bigclock_unlock_btn_pane_t1

0x7b6e,	// (0x00015eaf) area_fmrd2_info_pane_ParamLimits

0x7b6e,	// (0x00015eaf) area_fmrd2_info_pane

0x7b7f,	// (0x00015ec0) area_fmrd2_visual_pane_ParamLimits

0x7b7f,	// (0x00015ec0) area_fmrd2_visual_pane

0x7b8d,	// (0x00015ece) fmrd2_indi_pane_ParamLimits

0x7b8d,	// (0x00015ece) fmrd2_indi_pane

0x7b9a,	// (0x00015edb) area_fmrd2_visual_pane_g1

0x7ba2,	// (0x00015ee3) area_fmrd2_visual_pane_t1

0x7bb2,	// (0x00015ef3) area_fmrd2_visual_pane_t2

0x7bc2,	// (0x00015f03) area_fmrd2_visual_pane_t3

0x0002,

0xfd94,	// (0x0001e0d5) area_fmrd2_visual_pane_t

0x7bd2,	// (0x00015f13) area_fmrd2_info_pane_g1

0x7bda,	// (0x00015f1b) area_fmrd2_info_pane_t1

0x7bea,	// (0x00015f2b) area_fmrd2_info_pane_t2

0x7bfa,	// (0x00015f3b) area_fmrd2_info_pane_t3

0x7c0a,	// (0x00015f4b) area_fmrd2_info_pane_t4

0x0003,

0xfd9b,	// (0x0001e0dc) area_fmrd2_info_pane_t

0x7c18,	// (0x00015f59) fmrd2_indi_pane_t1

0x7c28,	// (0x00015f69) fmrd2_indi_pane_t2

0x7c38,	// (0x00015f79) fmrd2_indi_pane_t3

0x0002,

0xfda4,	// (0x0001e0e5) fmrd2_indi_pane_t

0xdb45,	// (0x0001be86) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdb45,	// (0x0001be86) list_single_fs_bigclock_indicator_pane_g5

0xdbf6,	// (0x0001bf37) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdbf6,	// (0x0001bf37) list_single_fs_bigclock_indicator_pane_t5

0x732e,	// (0x0001566f) aid_cell_bcale_month_pane_ParamLimits

0x732e,	// (0x0001566f) aid_cell_bcale_month_pane

0x734c,	// (0x0001568d) bcale_month_pane_ParamLimits

0x734c,	// (0x0001568d) bcale_month_pane

0x7370,	// (0x000156b1) bcale_preview_pane_ParamLimits

0x7370,	// (0x000156b1) bcale_preview_pane

0xe677,	// (0x0001c9b8) list_single_fs_bigclock_pane_t1_ParamLimits

0xe696,	// (0x0001c9d7) list_single_fs_bigclock_pane_t2_ParamLimits

0xe696,	// (0x0001c9d7) list_single_fs_bigclock_pane_t2

0x0001,

0xfd1f,	// (0x0001e060) list_single_fs_bigclock_pane_t_ParamLimits

0xfd1f,	// (0x0001e060) list_single_fs_bigclock_pane_t

0x7b58,	// (0x00015e99) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd8f,	// (0x0001e0d0) main_fs_bigclock_unlock_btn_pane_g

0x7c48,	// (0x00015f89) aid_dia3_key_size_ParamLimits

0x7c48,	// (0x00015f89) aid_dia3_key_size

0x7c57,	// (0x00015f98) aid_dia3_listrow_size_ParamLimits

0x7c57,	// (0x00015f98) aid_dia3_listrow_size

0x7c6c,	// (0x00015fad) dia3_keypad_fun_pane_ParamLimits

0x7c6c,	// (0x00015fad) dia3_keypad_fun_pane

0x7c88,	// (0x00015fc9) dia3_keypad_num_pane_ParamLimits

0x7c88,	// (0x00015fc9) dia3_keypad_num_pane

0x7ca3,	// (0x00015fe4) dia3_listscroll_pane_ParamLimits

0x7ca3,	// (0x00015fe4) dia3_listscroll_pane

0x7cb6,	// (0x00015ff7) dia3_numentry_pane_ParamLimits

0x7cb6,	// (0x00015ff7) dia3_numentry_pane

0xe922,	// (0x0001cc63) dia3_list_pane

0xe92d,	// (0x0001cc6e) scroll_pane_cp12

0x9264,	// (0x000175a5) bg_dia3_numentry_pane

0x7cce,	// (0x0001600f) dia3_numentry_pane_t1

0x7cdd,	// (0x0001601e) cell_dia3_key_num_pane

0x7ce5,	// (0x00016026) cell_dia3_key0_fun_pane_ParamLimits

0x7ce5,	// (0x00016026) cell_dia3_key0_fun_pane

0x7cf9,	// (0x0001603a) cell_dia3_key1_fun_pane_ParamLimits

0x7cf9,	// (0x0001603a) cell_dia3_key1_fun_pane

0x7d11,	// (0x00016052) dia3_listrow_pane

0xd898,	// (0x0001bbd9) bg_dia3_numentry_pane_g1

0x9264,	// (0x000175a5) bg_button_pane_cp21

0xe938,	// (0x0001cc79) cell_dia3_key_num_pane_t1

0xe946,	// (0x0001cc87) cell_dia3_key_num_pane_t2

0xe955,	// (0x0001cc96) cell_dia3_key_num_pane_t3

0xe964,	// (0x0001cca5) cell_dia3_key_num_pane_t4

0x0003,

0xfdab,	// (0x0001e0ec) cell_dia3_key_num_pane_t

0x9264,	// (0x000175a5) bg_button_pane_cp19

0x7d23,	// (0x00016064) cell_dia3_key0_fun_pane_g1

0x9264,	// (0x000175a5) bg_button_pane_cp20

0x7d2b,	// (0x0001606c) cell_dia3_key1_fun_pane_g1

0x7d33,	// (0x00016074) area_left_week_number_pane

0x7d3f,	// (0x00016080) area_top_day_name_pane

0x7d52,	// (0x00016093) frame_month_view_pane

0xe973,	// (0x0001ccb4) grid_month_view_pane

0x7d65,	// (0x000160a6) cell_top_day_name_pane_ParamLimits

0x7d65,	// (0x000160a6) cell_top_day_name_pane

0x7d92,	// (0x000160d3) cell_area_left_week_number_pane_ParamLimits

0x7d92,	// (0x000160d3) cell_area_left_week_number_pane

0x7da6,	// (0x000160e7) cell_month_view_pane_ParamLimits

0x7da6,	// (0x000160e7) cell_month_view_pane

0xe981,	// (0x0001ccc2) frm_month_g1

0x7dd3,	// (0x00016114) frm_month_g2

0x7de6,	// (0x00016127) frm_month_g3

0x7df9,	// (0x0001613a) frm_month_g4

0x7e0c,	// (0x0001614d) frm_month_g5

0x7e1f,	// (0x00016160) frm_month_g6

0x7e32,	// (0x00016173) frm_month_g7

0xe98e,	// (0x0001cccf) frm_month_g8

0x7e45,	// (0x00016186) frm_month_g9

0x7e55,	// (0x00016196) frm_month_g10

0x7e65,	// (0x000161a6) frm_month_g11

0x7e75,	// (0x000161b6) frm_month_g12

0x7e87,	// (0x000161c8) frm_month_g13

0x7e99,	// (0x000161da) frm_month_g14

0x7ead,	// (0x000161ee) frm_month_g15

0x7ec1,	// (0x00016202) frm_month_g16

0x000f,

0xfdb4,	// (0x0001e0f5) frm_month_g

0xe99b,	// (0x0001ccdc) cell_top_day_name_pane_t1

0x7ed5,	// (0x00016216) cell_area_left_week_number_pane_g1

0x7ee1,	// (0x00016222) cell_area_left_week_number_pane_t1

0x99ca,	// (0x00017d0b) cell_month_view_pane_g1

0x7ef4,	// (0x00016235) cell_month_view_pane_t1

0x9264,	// (0x000175a5) main_fps_pane

0xde07,	// (0x0001c148) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xde07,	// (0x0001c148) cmail_ddmenu_btn02_pane_cp1

0xde23,	// (0x0001c164) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xde23,	// (0x0001c164) cmail_ddmenu_btn02_pane_cp2

0x7609,	// (0x0001594a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7609,	// (0x0001594a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcd2,	// (0x0001e013) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcd2,	// (0x0001e013) cmail_ddmenu_btn02_pane_g

0x7627,	// (0x00015968) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7627,	// (0x00015968) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcd7,	// (0x0001e018) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcd7,	// (0x0001e018) cmail_ddmenu_btn02_pane_t

0x7f07,	// (0x00016248) fps_text_pane_ParamLimits

0x7f07,	// (0x00016248) fps_text_pane

0x7f1e,	// (0x0001625f) main_fps_pane_g1_ParamLimits

0x7f1e,	// (0x0001625f) main_fps_pane_g1

0x7f38,	// (0x00016279) wait_bar_pane_cp010_ParamLimits

0x7f38,	// (0x00016279) wait_bar_pane_cp010

0x7f49,	// (0x0001628a) fps_text_pane_t1_ParamLimits

0x7f49,	// (0x0001628a) fps_text_pane_t1

0xe910,	// (0x0001cc51) cam4_image_uncrop_pane_g1

0xe919,	// (0x0001cc5a) cam4_image_uncrop_pane_g2

0x4e2f,	// (0x00013170) cam4_image_uncrop_pane_g3

0x4e38,	// (0x00013179) cam4_image_uncrop_pane_g4

0x0003,

0xf816,	// (0x0001db57) cam4_image_uncrop_pane_g

0x7d11,	// (0x00016052) dia3_listrow_pane_ParamLimits

0x9264,	// (0x000175a5) main_phob2_pane

0x7109,	// (0x0001544a) cell_tport_appsw_pane_cp02_ParamLimits

0x7109,	// (0x0001544a) cell_tport_appsw_pane_cp02

0x711d,	// (0x0001545e) cell_tport_appsw_pane_cp03_ParamLimits

0x711d,	// (0x0001545e) cell_tport_appsw_pane_cp03

0x9264,	// (0x000175a5) phob2_contact_card_pane

0x9264,	// (0x000175a5) phob2_listscroll_pane

0xe9ae,	// (0x0001ccef) phob2_list_pane

0xe433,	// (0x0001c774) scroll_pane_cp034

0x7f61,	// (0x000162a2) phob2_cc_data_pane_ParamLimits

0x7f61,	// (0x000162a2) phob2_cc_data_pane

0x7f80,	// (0x000162c1) phob2_cc_listscroll_pane_ParamLimits

0x7f80,	// (0x000162c1) phob2_cc_listscroll_pane

0x7acb,	// (0x00015e0c) list_double_large_graphic_phob2_pane_ParamLimits

0x7acb,	// (0x00015e0c) list_double_large_graphic_phob2_pane

0x7f9e,	// (0x000162df) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x7f9e,	// (0x000162df) list_double_large_graphic_phob2_pane_g1

0x7fab,	// (0x000162ec) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x7fab,	// (0x000162ec) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdd5,	// (0x0001e116) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdd5,	// (0x0001e116) list_double_large_graphic_phob2_pane_g

0x7fd1,	// (0x00016312) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x7fd1,	// (0x00016312) list_double_large_graphic_phob2_pane_t1

0x7fe6,	// (0x00016327) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x7fe6,	// (0x00016327) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdde,	// (0x0001e11f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdde,	// (0x0001e11f) list_double_large_graphic_phob2_pane_t

0x9264,	// (0x000175a5) list_highlight_pane_cp024

0xe9b6,	// (0x0001ccf7) phob2_cc_button_pane

0x7ffb,	// (0x0001633c) phob2_cc_data_pane_g1_ParamLimits

0x7ffb,	// (0x0001633c) phob2_cc_data_pane_g1

0x8012,	// (0x00016353) phob2_cc_data_pane_g2_ParamLimits

0x8012,	// (0x00016353) phob2_cc_data_pane_g2

0x0001,

0xfde3,	// (0x0001e124) phob2_cc_data_pane_g_ParamLimits

0xfde3,	// (0x0001e124) phob2_cc_data_pane_g

0x8024,	// (0x00016365) phob2_cc_data_pane_t1_ParamLimits

0x8024,	// (0x00016365) phob2_cc_data_pane_t1

0x803c,	// (0x0001637d) phob2_cc_data_pane_t2_ParamLimits

0x803c,	// (0x0001637d) phob2_cc_data_pane_t2

0x8054,	// (0x00016395) phob2_cc_data_pane_t3_ParamLimits

0x8054,	// (0x00016395) phob2_cc_data_pane_t3

0x0002,

0xfde8,	// (0x0001e129) phob2_cc_data_pane_t_ParamLimits

0xfde8,	// (0x0001e129) phob2_cc_data_pane_t

0xe9be,	// (0x0001ccff) phob2_cc_list_pane_ParamLimits

0xe9be,	// (0x0001ccff) phob2_cc_list_pane

0xcf8e,	// (0x0001b2cf) scroll_pane_cp035_ParamLimits

0xcf8e,	// (0x0001b2cf) scroll_pane_cp035

0x92d3,	// (0x00017614) bg_button_pane_cp033

0xe9ca,	// (0x0001cd0b) phob2_cc_button_pane_g1

0xe9d6,	// (0x0001cd17) phob2_cc_button_pane_t1

0xe9eb,	// (0x0001cd2c) phob2_cc_button_pane_t2

0x0001,

0xfdef,	// (0x0001e130) phob2_cc_button_pane_t

0x806c,	// (0x000163ad) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x806c,	// (0x000163ad) list_double_large_graphic_phob2_cc_pane

0x809c,	// (0x000163dd) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x809c,	// (0x000163dd) list_double_large_graphic_phob2_cc_pane_g1

0x80a8,	// (0x000163e9) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x80a8,	// (0x000163e9) list_double_large_graphic_phob2_cc_pane_g2

0x80b4,	// (0x000163f5) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x80b4,	// (0x000163f5) list_double_large_graphic_phob2_cc_pane_g3

0x80c0,	// (0x00016401) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x80c0,	// (0x00016401) list_double_large_graphic_phob2_cc_pane_g4

0x80cc,	// (0x0001640d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x80cc,	// (0x0001640d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdf4,	// (0x0001e135) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdf4,	// (0x0001e135) list_double_large_graphic_phob2_cc_pane_g

0x80d8,	// (0x00016419) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x80d8,	// (0x00016419) list_double_large_graphic_phob2_cc_pane_t1

0x8101,	// (0x00016442) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8101,	// (0x00016442) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdff,	// (0x0001e140) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdff,	// (0x0001e140) list_double_large_graphic_phob2_cc_pane_t

0xe9fd,	// (0x0001cd3e) list_highlight_pane_cp025_ParamLimits

0xe9fd,	// (0x0001cd3e) list_highlight_pane_cp025

0x92d3,	// (0x00017614) bg_button_pane_cp033_ParamLimits

0xe9ca,	// (0x0001cd0b) phob2_cc_button_pane_g1_ParamLimits

0xe9d6,	// (0x0001cd17) phob2_cc_button_pane_t1_ParamLimits

0xe9eb,	// (0x0001cd2c) phob2_cc_button_pane_t2_ParamLimits

0xfdef,	// (0x0001e130) phob2_cc_button_pane_t_ParamLimits

0x0a6e,	// (0x0000edaf) popup_wgtman_window

0xcd16,	// (0x0001b057) scroll_pane_cp038

0x7a44,	// (0x00015d85) wgtman_btn_pane_cp_01_ParamLimits

0x7a44,	// (0x00015d85) wgtman_btn_pane_cp_01

0xea0b,	// (0x0001cd4c) wgtman_content_pane

0xea14,	// (0x0001cd55) wgtman_heading_pane

0x9264,	// (0x000175a5) bg_heading_pane_cp02

0xea1d,	// (0x0001cd5e) wgtman_heading_pane_g1

0xea25,	// (0x0001cd66) wgtman_heading_pane_t1

0xea33,	// (0x0001cd74) scroll_pane_cp036

0xea3b,	// (0x0001cd7c) wgtman_list_pane

0xea43,	// (0x0001cd84) wgtman_list_pane_t1_ParamLimits

0xea43,	// (0x0001cd84) wgtman_list_pane_t1

0xca93,	// (0x0001add4) cam4_grid_pane

0x5b53,	// (0x00013e94) bg_button_pane_cp015_ParamLimits

0x5b64,	// (0x00013ea5) bg_button_pane_cp016_ParamLimits

0x5b70,	// (0x00013eb1) bg_button_pane_cp017_ParamLimits

0x5bc4,	// (0x00013f05) popup_vitu2_query_window_g3_ParamLimits

0x5bc4,	// (0x00013f05) popup_vitu2_query_window_g3

0x5c65,	// (0x00013fa6) popup_vitu2_query_window_t6_ParamLimits

0x5c65,	// (0x00013fa6) popup_vitu2_query_window_t6

0x5c90,	// (0x00013fd1) popup_vitu2_query_window_t7_ParamLimits

0x5c90,	// (0x00013fd1) popup_vitu2_query_window_t7

0xe910,	// (0x0001cc51) cam4_grid_pane_g1

0xe919,	// (0x0001cc5a) cam4_grid_pane_g2

0xea5d,	// (0x0001cd9e) cam4_grid_pane_g3

0xea66,	// (0x0001cda7) cam4_grid_pane_g4

0x0003,

0xfe04,	// (0x0001e145) cam4_grid_pane_g

0x1512,	// (0x0000f853) aid_placing_vt_slider_lsc_ParamLimits

0x181d,	// (0x0000fb5e) vidtel_button_pane_ParamLimits

0x181d,	// (0x0000fb5e) vidtel_button_pane

0x9264,	// (0x000175a5) bg_button_pane_cp034

0xea71,	// (0x0001cdb2) vidtel_button_pane_g1

0xea79,	// (0x0001cdba) vidtel_button_pane_t1

0xce8d,	// (0x0001b1ce) aid_size_vtel_slider_touch

0xcf8e,	// (0x0001b2cf) scroll_pane_cp039

0x697e,	// (0x00014cbf) ncim_query_button_pane_cp01_ParamLimits

0x699d,	// (0x00014cde) ncimui_query_pane_g1_ParamLimits

0x92d3,	// (0x00017614) input_focus_pane_cp012_ParamLimits

0xd8d6,	// (0x0001bc17) ncim_query_entry_pane_t1_ParamLimits

0xcf8e,	// (0x0001b2cf) scroll_pane_cp039_ParamLimits

0xa64d,	// (0x0001898e) navi_pane_bcale_mc_g1

0xa655,	// (0x00018996) navi_pane_bcale_mc_t1

0xde57,	// (0x0001c198) main_sp_fs_email_pane_g1

0xde63,	// (0x0001c1a4) main_sp_fs_email_pane_g2

0x0001,

0xfc02,	// (0x0001df43) main_sp_fs_email_pane_g

0xe2da,	// (0x0001c61b) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe2da,	// (0x0001c61b) list_single_cale_mrui_row_pane_g3

0x7647,	// (0x00015988) list_single_recal_day_pane_g5_event_pane

0xe4e1,	// (0x0001c822) list_single_recal_day_pane_g7

0xea8f,	// (0x0001cdd0) list_recal_day_event_pane_cp01

0xea98,	// (0x0001cdd9) list_recal_vselct_arw_lo_pane_cp01

0xeaa0,	// (0x0001cde1) list_recal_vselct_arw_up_pane_cp01

0xeaa8,	// (0x0001cde9) list_recal_vselct_pane_cp01

0xcee5,	// (0x0001b226) list_recal_day_event_pane_cp01_g1

0xeab2,	// (0x0001cdf3) list_recal_day_event_pane_cp01_t1

0xe4e9,	// (0x0001c82a) list_single_recal_day_pane_t1_ParamLimits

0xe4fb,	// (0x0001c83c) list_single_recal_day_pane_t2_ParamLimits

0xfce7,	// (0x0001e028) list_single_recal_day_pane_t_ParamLimits

0x994f,	// (0x00017c90) bg_notes_pane_ParamLimits

0x9a4c,	// (0x00017d8d) list_notes_pane_ParamLimits

0x0bb8,	// (0x0000eef9) scroll_pane_cp06_ParamLimits

0x9a88,	// (0x00017dc9) main_notes_pane_ParamLimits

0x92d3,	// (0x00017614) main_welc_pane

0x8157,	// (0x00016498) main_welc_body_pane_ParamLimits

0x8157,	// (0x00016498) main_welc_body_pane

0x8175,	// (0x000164b6) main_welc_opti_pane_ParamLimits

0x8175,	// (0x000164b6) main_welc_opti_pane

0x81f1,	// (0x00016532) main_welc_pane_t1_ParamLimits

0x81f1,	// (0x00016532) main_welc_pane_t1

0x83e9,	// (0x0001672a) main_welc_body_row_pane_ParamLimits

0x83e9,	// (0x0001672a) main_welc_body_row_pane

0x99bc,	// (0x00017cfd) main_welc_opti_row_pane_ParamLimits

0x99bc,	// (0x00017cfd) main_welc_opti_row_pane

0xead0,	// (0x0001ce11) main_welc_opti_row_pane_g1

0x83fd,	// (0x0001673e) main_welc_opti_row_pane_t1

0xead8,	// (0x0001ce19) main_welc_body_row_pane_t1

0xe77e,	// (0x0001cabf) popup_notif_wgt_heading_pane

0xe798,	// (0x0001cad9) aid_size_list_notif_wgt_del_ParamLimits

0xe7a5,	// (0x0001cae6) list_notif_wgt_row_pane_g1_ParamLimits

0xe7b1,	// (0x0001caf2) list_notif_wgt_row_pane_g2_ParamLimits

0xe7c0,	// (0x0001cb01) list_notif_wgt_row_pane_g3_ParamLimits

0xfd4e,	// (0x0001e08f) list_notif_wgt_row_pane_g_ParamLimits

0xe7cd,	// (0x0001cb0e) list_notif_wgt_row_pane_t1_ParamLimits

0xe7e3,	// (0x0001cb24) list_notif_wgt_row_pane_t2_ParamLimits

0xe7f5,	// (0x0001cb36) list_notif_wgt_row_pane_t3_ParamLimits

0xfd55,	// (0x0001e096) list_notif_wgt_row_pane_t_ParamLimits

0x7add,	// (0x00015e1e) listrow_wgtman_pane_g1_ParamLimits

0x7aea,	// (0x00015e2b) listrow_wgtman_pane_g2_ParamLimits

0xfd85,	// (0x0001e0c6) listrow_wgtman_pane_g_ParamLimits

0x7b08,	// (0x00015e49) listrow_wgtman_pane_t1_ParamLimits

0x7b20,	// (0x00015e61) listrow_wgtman_pane_t2_ParamLimits

0xfd8a,	// (0x0001e0cb) listrow_wgtman_pane_t_ParamLimits

0x7b46,	// (0x00015e87) wait_bar_pane_cp09_ParamLimits

0x9264,	// (0x000175a5) bg_popup_heading_pane_cp02

0xeae7,	// (0x0001ce28) popup_notif_wgt_heading_pane_g1

0xeaef,	// (0x0001ce30) popup_notif_wgt_heading_pane_t1

0x9264,	// (0x000175a5) main_vids_pane

0x9264,	// (0x000175a5) vids_listscroll_pane

0x840c,	// (0x0001674d) scroll_pane_cp040

0x9264,	// (0x000175a5) vids_list_pane

0x8417,	// (0x00016758) vids_list_double_pane_ParamLimits

0x8417,	// (0x00016758) vids_list_double_pane

0x8428,	// (0x00016769) vids_list_double_pane_g1

0x8431,	// (0x00016772) vids_list_double_pane_t1

0x8441,	// (0x00016782) vids_list_double_pane_t2

0x0001,

0xfe23,	// (0x0001e164) vids_list_double_pane_t

0x92d3,	// (0x00017614) main_ncimui_pane_ParamLimits

0x67b4,	// (0x00014af5) main_ncimui_pane_g1_ParamLimits

0x67c0,	// (0x00014b01) main_ncimui_pane_g2_ParamLimits

0x67c0,	// (0x00014b01) main_ncimui_pane_g2

0x0001,

0xfb08,	// (0x0001de49) main_ncimui_pane_g_ParamLimits

0xfb08,	// (0x0001de49) main_ncimui_pane_g

0x8190,	// (0x000164d1) main_welc_pane_g1_ParamLimits

0x8190,	// (0x000164d1) main_welc_pane_g1

0x81a5,	// (0x000164e6) main_welc_pane_g2_ParamLimits

0x81a5,	// (0x000164e6) main_welc_pane_g2

0x0003,

0xfe0d,	// (0x0001e14e) main_welc_pane_g_ParamLimits

0xfe0d,	// (0x0001e14e) main_welc_pane_g

0x994f,	// (0x00017c90) listscroll_mce_pane_ParamLimits

0xa7a2,	// (0x00018ae3) wait_bar_pane_cp10

0xbab0,	// (0x00019df1) main_cale_day_pane_ParamLimits

0xbab0,	// (0x00019df1) main_cale_week_pane_ParamLimits

0x994f,	// (0x00017c90) main_messa_pane_ParamLimits

0x4304,	// (0x00012645) main_clock2_btn_pane_ParamLimits

0x4304,	// (0x00012645) main_clock2_btn_pane

0xc345,	// (0x0001a686) main_clock2_btn_pane_cp01_ParamLimits

0xc345,	// (0x0001a686) main_clock2_btn_pane_cp01

0xe266,	// (0x0001c5a7) list_cale_mrui_pane_ParamLimits

0xe839,	// (0x0001cb7a) main_cf0_pane_g2

0x0001,

0xfd5c,	// (0x0001e09d) main_cf0_pane_g

0x7d33,	// (0x00016074) area_left_week_number_pane_ParamLimits

0x7d3f,	// (0x00016080) area_top_day_name_pane_ParamLimits

0x7d52,	// (0x00016093) frame_month_view_pane_ParamLimits

0xe973,	// (0x0001ccb4) grid_month_view_pane_ParamLimits

0xe981,	// (0x0001ccc2) frm_month_g1_ParamLimits

0x7dd3,	// (0x00016114) frm_month_g2_ParamLimits

0x7de6,	// (0x00016127) frm_month_g3_ParamLimits

0x7df9,	// (0x0001613a) frm_month_g4_ParamLimits

0x7e0c,	// (0x0001614d) frm_month_g5_ParamLimits

0x7e1f,	// (0x00016160) frm_month_g6_ParamLimits

0x7e32,	// (0x00016173) frm_month_g7_ParamLimits

0xe98e,	// (0x0001cccf) frm_month_g8_ParamLimits

0x7e45,	// (0x00016186) frm_month_g9_ParamLimits

0x7e55,	// (0x00016196) frm_month_g10_ParamLimits

0x7e65,	// (0x000161a6) frm_month_g11_ParamLimits

0x7e75,	// (0x000161b6) frm_month_g12_ParamLimits

0x7e87,	// (0x000161c8) frm_month_g13_ParamLimits

0x7e99,	// (0x000161da) frm_month_g14_ParamLimits

0x7ead,	// (0x000161ee) frm_month_g15_ParamLimits

0x7ec1,	// (0x00016202) frm_month_g16_ParamLimits

0xfdb4,	// (0x0001e0f5) frm_month_g_ParamLimits

0xe99b,	// (0x0001ccdc) cell_top_day_name_pane_t1_ParamLimits

0x7ed5,	// (0x00016216) cell_area_left_week_number_pane_g1_ParamLimits

0x7ee1,	// (0x00016222) cell_area_left_week_number_pane_t1_ParamLimits

0x99ca,	// (0x00017d0b) cell_month_view_pane_g1_ParamLimits

0x7ef4,	// (0x00016235) cell_month_view_pane_t1_ParamLimits

0x9947,	// (0x00017c88) main_clock2_btn_pane_g1

0xeafd,	// (0x0001ce3e) main_clock2_btn_pane_t1

0x92d3,	// (0x00017614) listscroll_cmail_pane_ParamLimits

0xde57,	// (0x0001c198) main_sp_fs_email_pane_g1_ParamLimits

0xde63,	// (0x0001c1a4) main_sp_fs_email_pane_g2_ParamLimits

0xfc02,	// (0x0001df43) main_sp_fs_email_pane_g_ParamLimits

0xe451,	// (0x0001c792) list_recal_day_pane_ParamLimits

0xe462,	// (0x0001c7a3) mian_recal_day_pane_t1

0x6fac,	// (0x000152ed) list_single_dyc_row_text_pane_t4_ParamLimits

0x6fac,	// (0x000152ed) list_single_dyc_row_text_pane_t4

0x6ff5,	// (0x00015336) list_single_dyc_row_text_pane_t5_ParamLimits

0x6ff5,	// (0x00015336) list_single_dyc_row_text_pane_t5

0xdf2b,	// (0x0001c26c) list_single_dyc_row_text_pane_t6_ParamLimits

0xdf2b,	// (0x0001c26c) list_single_dyc_row_text_pane_t6

0xa0c8,	// (0x00018409) aid_mgn_list_cale_time_pane

0x92d3,	// (0x00017614) main_gallery2_pane_ParamLimits

0xc35b,	// (0x0001a69c) main_clock2_pane_cp01_t1

0xc36b,	// (0x0001a6ac) main_clock2_pane_cp01_t3

0x0001,

0xf6f2,	// (0x0001da33) main_clock2_pane_cp01_t

0x0f55,	// (0x0000f296) cale_week_scroll_pane_g16_ParamLimits

0x0f55,	// (0x0000f296) cale_week_scroll_pane_g16

0x9ccd,	// (0x0001800e) vorec_slider_pane

0xea79,	// (0x0001cdba) vidtel_button_pane_t1_ParamLimits

0x76ad,	// (0x000159ee) main_fs_bigclock_clock_pane_g1_ParamLimits

0x76ad,	// (0x000159ee) main_fs_bigclock_clock_pane_g2_ParamLimits

0x76be,	// (0x000159ff) main_fs_bigclock_clock_pane_g3_ParamLimits

0x76be,	// (0x000159ff) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd0a,	// (0x0001e04b) main_fs_bigclock_clock_pane_g_ParamLimits

0x76d1,	// (0x00015a12) main_fs_bigclock_clock_pane_t1_ParamLimits

0x76e7,	// (0x00015a28) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd13,	// (0x0001e054) main_fs_bigclock_clock_pane_t_ParamLimits

0x3bd9,	// (0x00011f1a) main_mup3_lyrics_pane_ParamLimits

0x3bd9,	// (0x00011f1a) main_mup3_lyrics_pane

0x8469,	// (0x000167aa) main_mup3_lyrics_pane_t1_ParamLimits

0x8469,	// (0x000167aa) main_mup3_lyrics_pane_t1

0xc6e0,	// (0x0001aa21) aid_main_mp4_pane_t1_area

0xc6ea,	// (0x0001aa2b) aid_main_mp4_pane_t2_area

0xc794,	// (0x0001aad5) main_mp4_pane_g7_ParamLimits

0xc794,	// (0x0001aad5) main_mp4_pane_g7

0xc7a0,	// (0x0001aae1) main_mp4_pane_g8_ParamLimits

0xc7a0,	// (0x0001aae1) main_mp4_pane_g8

0x4c02,	// (0x00012f43) aid_call6_pane_g1_size

0x8086,	// (0x000163c7) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8086,	// (0x000163c7) list_double_large_graphic_phob2_other_pane

0xa080,	// (0x000183c1) list_double_large_graphic_phob2_other_pane_g1

0x9264,	// (0x000175a5) list_highlight_pane_cp026

0x92d3,	// (0x00017614) main_welc_pane_ParamLimits

0x6e07,	// (0x00015148) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x6e07,	// (0x00015148) main_sp_fs_ctrlbar_pane_g3

0x6e21,	// (0x00015162) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x6e21,	// (0x00015162) main_sp_fs_ctrlbar_pane_g4

0x6e55,	// (0x00015196) toolbar2_fixed_button_pane_cp01

0x6e60,	// (0x000151a1) toolbar2_fixed_button_pane_cp02

0x6e6d,	// (0x000151ae) toolbar2_fixed_button_pane_cp03

0x813d,	// (0x0001647e) list_welc_entry_pane_ParamLimits

0x813d,	// (0x0001647e) list_welc_entry_pane

0x81ba,	// (0x000164fb) main_welc_pane_g3_ParamLimits

0x81ba,	// (0x000164fb) main_welc_pane_g3

0x820f,	// (0x00016550) main_welc_pane_t2_ParamLimits

0x820f,	// (0x00016550) main_welc_pane_t2

0x822a,	// (0x0001656b) main_welc_pane_t3_ParamLimits

0x822a,	// (0x0001656b) main_welc_pane_t3

0x0005,

0xfe16,	// (0x0001e157) main_welc_pane_t_ParamLimits

0xfe16,	// (0x0001e157) main_welc_pane_t

0x835a,	// (0x0001669b) welc_button_pane_ParamLimits

0x835a,	// (0x0001669b) welc_button_pane

0x83d4,	// (0x00016715) welc_service_logo_pane_ParamLimits

0x83d4,	// (0x00016715) welc_service_logo_pane

0x8485,	// (0x000167c6) list_single_welc_entry_pane_ParamLimits

0x8485,	// (0x000167c6) list_single_welc_entry_pane

0x8496,	// (0x000167d7) list_single_welc_entry_pane_g1

0x849e,	// (0x000167df) list_single_welc_entry_pane_t1

0x84ac,	// (0x000167ed) list_single_welc_entry_pane_t2

0x0001,

0xfe28,	// (0x0001e169) list_single_welc_entry_pane_t

0x9264,	// (0x000175a5) bg_button_pane_cp035

0x84ba,	// (0x000167fb) welc_button_pane_t1

0xeb19,	// (0x0001ce5a) welc_service_logo_pane_g1

0xeb22,	// (0x0001ce63) welc_service_logo_pane_g2

0x0001,

0xfe2d,	// (0x0001e16e) welc_service_logo_pane_g

0x9264,	// (0x000175a5) main_int_radio_pane

0x9b23,	// (0x00017e64) list_single_fs_dyc_pane_g1

0x7fb7,	// (0x000162f8) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x7fb7,	// (0x000162f8) list_double_large_graphic_phob2_pane_g3

0x7fc3,	// (0x00016304) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x7fc3,	// (0x00016304) list_double_large_graphic_phob2_pane_g4

0x84c8,	// (0x00016809) main_int_radio1_pane_ParamLimits

0x84c8,	// (0x00016809) main_int_radio1_pane

0xeb2b,	// (0x0001ce6c) find_pane_cp02

0x84e5,	// (0x00016826) input_focus_pane_cp12_ParamLimits

0x84e5,	// (0x00016826) input_focus_pane_cp12

0x84f5,	// (0x00016836) input_focus_pane_cp13_ParamLimits

0x84f5,	// (0x00016836) input_focus_pane_cp13

0x8509,	// (0x0001684a) input_focus_pane_cp14_ParamLimits

0x8509,	// (0x0001684a) input_focus_pane_cp14

0xeb34,	// (0x0001ce75) int_radio1_listscroll_pane

0x851d,	// (0x0001685e) main_int_radio1_pane_g1_ParamLimits

0x851d,	// (0x0001685e) main_int_radio1_pane_g1

0x8535,	// (0x00016876) main_int_radio1_pane_t1_ParamLimits

0x8535,	// (0x00016876) main_int_radio1_pane_t1

0x8550,	// (0x00016891) main_int_radio1_pane_t2_ParamLimits

0x8550,	// (0x00016891) main_int_radio1_pane_t2

0x856b,	// (0x000168ac) main_int_radio1_pane_t3_ParamLimits

0x856b,	// (0x000168ac) main_int_radio1_pane_t3

0x8586,	// (0x000168c7) main_int_radio1_pane_t4_ParamLimits

0x8586,	// (0x000168c7) main_int_radio1_pane_t4

0xeb3e,	// (0x0001ce7f) main_int_radio1_pane_t5_ParamLimits

0xeb3e,	// (0x0001ce7f) main_int_radio1_pane_t5

0x8598,	// (0x000168d9) main_int_radio1_pane_t6_ParamLimits

0x8598,	// (0x000168d9) main_int_radio1_pane_t6

0x85ad,	// (0x000168ee) main_int_radio1_pane_t7_ParamLimits

0x85ad,	// (0x000168ee) main_int_radio1_pane_t7

0x85c2,	// (0x00016903) main_int_radio1_pane_t8_ParamLimits

0x85c2,	// (0x00016903) main_int_radio1_pane_t8

0x85e1,	// (0x00016922) main_int_radio1_pane_t9_ParamLimits

0x85e1,	// (0x00016922) main_int_radio1_pane_t9

0x85f3,	// (0x00016934) main_int_radio1_pane_t10_ParamLimits

0x85f3,	// (0x00016934) main_int_radio1_pane_t10

0x8619,	// (0x0001695a) main_int_radio1_pane_t11_ParamLimits

0x8619,	// (0x0001695a) main_int_radio1_pane_t11

0x863f,	// (0x00016980) main_int_radio1_pane_t12_ParamLimits

0x863f,	// (0x00016980) main_int_radio1_pane_t12

0x000b,

0xfe32,	// (0x0001e173) main_int_radio1_pane_t_ParamLimits

0xfe32,	// (0x0001e173) main_int_radio1_pane_t

0xeb50,	// (0x0001ce91) int_radio_list_pane

0xe433,	// (0x0001c774) scroll_pane_cp037

0xeb58,	// (0x0001ce99) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb58,	// (0x0001ce99) list_double_large_graphic_int_radio_pane

0xeb70,	// (0x0001ceb1) list_double_large_graphic_int_radio_pane_g1

0xeb79,	// (0x0001ceba) list_double_large_graphic_int_radio_pane_t1

0xeb87,	// (0x0001cec8) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe4b,	// (0x0001e18c) list_double_large_graphic_int_radio_pane_t

0x9264,	// (0x000175a5) list_highlight_pane_cp027

0xeac0,	// (0x0001ce01) main_button_pane_4

0x81cd,	// (0x0001650e) main_welc_pane_g4_ParamLimits

0x81cd,	// (0x0001650e) main_welc_pane_g4

0x8243,	// (0x00016584) main_welc_pane_t4_ParamLimits

0x8243,	// (0x00016584) main_welc_pane_t4

0x825a,	// (0x0001659b) main_welc_pane_t5_ParamLimits

0x825a,	// (0x0001659b) main_welc_pane_t5

0x8297,	// (0x000165d8) main_welc_pane_t6_ParamLimits

0x8297,	// (0x000165d8) main_welc_pane_t6

0x8371,	// (0x000166b2) welc_button_pane_2_ParamLimits

0x8371,	// (0x000166b2) welc_button_pane_2

0x838d,	// (0x000166ce) welc_button_pane_3_ParamLimits

0x838d,	// (0x000166ce) welc_button_pane_3

0xeac8,	// (0x0001ce09) welc_button_pane_4

0x83ac,	// (0x000166ed) welc_button_pane_5_ParamLimits

0x83ac,	// (0x000166ed) welc_button_pane_5

0x0872,	// (0x0000ebb3) main_popup_welc_pane

0xebad,	// (0x0001ceee) main_welc_sk_g3

0xebb7,	// (0x0001cef8) main_welc_sk_g4

0xebc1,	// (0x0001cf02) main_welc_sk_t3

0xebd1,	// (0x0001cf12) main_welc_sk_t4

0xebe1,	// (0x0001cf22) popup_welc_pane_t4

0xebef,	// (0x0001cf30) popup_welc_pane_t5

0xebfd,	// (0x0001cf3e) popup_welc_pane_t6

0x9264,	// (0x000175a5) main_acti_pane

0x9264,	// (0x000175a5) main_sso_pane

0x8651,	// (0x00016992) sso_body_pane_ParamLimits

0x8651,	// (0x00016992) sso_body_pane

0x8665,	// (0x000169a6) sso_logo_pane_ParamLimits

0x8665,	// (0x000169a6) sso_logo_pane

0x869e,	// (0x000169df) sso_sk_pane_ParamLimits

0x869e,	// (0x000169df) sso_sk_pane

0xec3b,	// (0x0001cf7c) main_sso_logo_pane_g1

0x86b0,	// (0x000169f1) sso_sk_pane_t1_ParamLimits

0x86b0,	// (0x000169f1) sso_sk_pane_t1

0x86ca,	// (0x00016a0b) sso_sk_pane_t2_ParamLimits

0x86ca,	// (0x00016a0b) sso_sk_pane_t2

0x0001,

0xfe50,	// (0x0001e191) sso_sk_pane_t_ParamLimits

0xfe50,	// (0x0001e191) sso_sk_pane_t

0xec46,	// (0x0001cf87) aid_sso_gap

0xec4f,	// (0x0001cf90) aid_sso_txt1

0xec59,	// (0x0001cf9a) aid_sso_txt2

0xec63,	// (0x0001cfa4) aid_sso_txt3

0x0002,

0xfe55,	// (0x0001e196) aid_sso_txt

0xec6d,	// (0x0001cfae) aid_sso_widget

0x8734,	// (0x00016a75) sso_btn_pane_ParamLimits

0x8734,	// (0x00016a75) sso_btn_pane

0x87b8,	// (0x00016af9) sso_option_pane_ParamLimits

0x87b8,	// (0x00016af9) sso_option_pane

0x886e,	// (0x00016baf) sso_query_pane_ParamLimits

0x886e,	// (0x00016baf) sso_query_pane

0x88c4,	// (0x00016c05) sso_query_pane_cp01_ParamLimits

0x88c4,	// (0x00016c05) sso_query_pane_cp01

0x891e,	// (0x00016c5f) sso_t_hdr_pane_ParamLimits

0x891e,	// (0x00016c5f) sso_t_hdr_pane

0x8948,	// (0x00016c89) sso_t_nml_pane_ParamLimits

0x8948,	// (0x00016c89) sso_t_nml_pane

0xec77,	// (0x0001cfb8) sso_t_sub_pane

0x8672,	// (0x000169b3) sso_popup_window_ParamLimits

0x8672,	// (0x000169b3) sso_popup_window

0x86e0,	// (0x00016a21) sso_apps_pane_ParamLimits

0x86e0,	// (0x00016a21) sso_apps_pane

0x870a,	// (0x00016a4b) sso_body_pane_g1

0x8714,	// (0x00016a55) sso_body_pane_t1

0x8724,	// (0x00016a65) sso_body_pane_t2

0x0001,

0xfe5c,	// (0x0001e19d) sso_body_pane_t

0x8780,	// (0x00016ac1) sso_btn_pane_cp01_ParamLimits

0x8780,	// (0x00016ac1) sso_btn_pane_cp01

0x8842,	// (0x00016b83) sso_prog_pane_ParamLimits

0x8842,	// (0x00016b83) sso_prog_pane

0x899e,	// (0x00016cdf) sso_t_hdr_pane_t1_ParamLimits

0x899e,	// (0x00016cdf) sso_t_hdr_pane_t1

0xec8c,	// (0x0001cfcd) input_focus_pane_cp10_ParamLimits

0xec8c,	// (0x0001cfcd) input_focus_pane_cp10

0xeca0,	// (0x0001cfe1) sso_query_pane_t1_ParamLimits

0xeca0,	// (0x0001cfe1) sso_query_pane_t1

0xecb3,	// (0x0001cff4) sso_query_pane_t2_ParamLimits

0xecb3,	// (0x0001cff4) sso_query_pane_t2

0xeccc,	// (0x0001d00d) sso_query_pane_t3_ParamLimits

0xeccc,	// (0x0001d00d) sso_query_pane_t3

0xecf6,	// (0x0001d037) sso_query_pane_t4_ParamLimits

0xecf6,	// (0x0001d037) sso_query_pane_t4

0x0003,

0xfe61,	// (0x0001e1a2) sso_query_pane_t_ParamLimits

0xfe61,	// (0x0001e1a2) sso_query_pane_t

0xeba4,	// (0x0001cee5) bg_button_pane_cp22

0xeb95,	// (0x0001ced6) sso_btn_pane_t1

0x89b1,	// (0x00016cf2) sso_t_nml_pane_t1_ParamLimits

0x89b1,	// (0x00016cf2) sso_t_nml_pane_t1

0xed1a,	// (0x0001d05b) sso_option_row_pane_ParamLimits

0xed1a,	// (0x0001d05b) sso_option_row_pane

0xed27,	// (0x0001d068) sso_t_sub_pane_t1_ParamLimits

0xed27,	// (0x0001d068) sso_t_sub_pane_t1

0x92d3,	// (0x00017614) bg_popup_window_pane_cp11_ParamLimits

0x92d3,	// (0x00017614) bg_popup_window_pane_cp11

0xed44,	// (0x0001d085) popup_sk_window_cp01_ParamLimits

0xed44,	// (0x0001d085) popup_sk_window_cp01

0xed51,	// (0x0001d092) sso_popup_body_pane_ParamLimits

0xed51,	// (0x0001d092) sso_popup_body_pane

0xed5e,	// (0x0001d09f) scroll_pane_cp21_ParamLimits

0xed5e,	// (0x0001d09f) scroll_pane_cp21

0xed6b,	// (0x0001d0ac) sso_popup_body_t_pane_ParamLimits

0xed6b,	// (0x0001d0ac) sso_popup_body_t_pane

0xed78,	// (0x0001d0b9) sso_popup_body_t_hdr_pane_ParamLimits

0xed78,	// (0x0001d0b9) sso_popup_body_t_hdr_pane

0x89cc,	// (0x00016d0d) sso_popup_body_t_nml_pane_ParamLimits

0x89cc,	// (0x00016d0d) sso_popup_body_t_nml_pane

0x89f3,	// (0x00016d34) sso_popup_body_t_sub_pane_ParamLimits

0x89f3,	// (0x00016d34) sso_popup_body_t_sub_pane

0xed8a,	// (0x0001d0cb) sso_popup_body_t_hdr_pane_t1

0x8a16,	// (0x00016d57) sso_popup_body_t_nml_pane_t1_ParamLimits

0x8a16,	// (0x00016d57) sso_popup_body_t_nml_pane_t1

0xed9a,	// (0x0001d0db) sso_popup_body_t_sub_pane_t1_ParamLimits

0xed9a,	// (0x0001d0db) sso_popup_body_t_sub_pane_t1

0x9a10,	// (0x00017d51) sso_prog_pane_g1

0x8a4e,	// (0x00016d8f) sso_apps_pane_comp1_ParamLimits

0x8a4e,	// (0x00016d8f) sso_apps_pane_comp1

0xedbf,	// (0x0001d100) sso_apps_pane_comp1_g1

0xedc7,	// (0x0001d108) sso_apps_pane_comp1_t1

0xede3,	// (0x0001d124) sso_option_row_pane_g1

0xedeb,	// (0x0001d12c) sso_option_row_pane_t1

0xe003,	// (0x0001c344) list_cmail_pane_ParamLimits

0x9264,	// (0x000175a5) main_call7_pane

0x812a,	// (0x0001646b) bg_welc_area_ParamLimits

0x812a,	// (0x0001646b) bg_welc_area

0x82d5,	// (0x00016616) sso_t_hdr_pane_a_t1_ParamLimits

0x82d5,	// (0x00016616) sso_t_hdr_pane_a_t1

0x82f0,	// (0x00016631) sso_t_nml_pane_a_t1_ParamLimits

0x82f0,	// (0x00016631) sso_t_nml_pane_a_t1

0x831f,	// (0x00016660) sso_t_sub_pane_a_t1_ParamLimits

0x831f,	// (0x00016660) sso_t_sub_pane_a_t1

0x83c2,	// (0x00016703) welc_button_pane_cp01_ParamLimits

0x83c2,	// (0x00016703) welc_button_pane_cp01

0xeb95,	// (0x0001ced6) sso_btn_pane_t1_copy1

0xeba4,	// (0x0001cee5) welc_button_pane_2_comp1

0xec0b,	// (0x0001cf4c) sso_t_hdr_pane_p_t1

0xec1b,	// (0x0001cf5c) sso_t_nml_pane_p_t1

0xec2b,	// (0x0001cf6c) sso_t_sub_pane_p_t1

0x9264,	// (0x000175a5) main_att_pane

0x9264,	// (0x000175a5) main_vod_pane

0xec77,	// (0x0001cfb8) sso_t_sub_pane_ParamLimits

0xedd5,	// (0x0001d116) input_focus_pane_cp10_t1

0xedeb,	// (0x0001d12c) sso_option_row_pane_t1_ParamLimits

0x8a68,	// (0x00016da9) main_att_body_pane_ParamLimits

0x8a68,	// (0x00016da9) main_att_body_pane

0x8a7e,	// (0x00016dbf) att_btn_emg_pane_ParamLimits

0x8a7e,	// (0x00016dbf) att_btn_emg_pane

0x8a9d,	// (0x00016dde) att_btn_pane_ParamLimits

0x8a9d,	// (0x00016dde) att_btn_pane

0x8b0e,	// (0x00016e4f) att_btn_pane_cp01_ParamLimits

0x8b0e,	// (0x00016e4f) att_btn_pane_cp01

0x8b2e,	// (0x00016e6f) att_li_srv_pane_ParamLimits

0x8b2e,	// (0x00016e6f) att_li_srv_pane

0x8b4b,	// (0x00016e8c) att_opt_pane_ParamLimits

0x8b4b,	// (0x00016e8c) att_opt_pane

0x8b95,	// (0x00016ed6) att_query_pane_ParamLimits

0x8b95,	// (0x00016ed6) att_query_pane

0x8c0e,	// (0x00016f4f) att_query_pane_cp01_ParamLimits

0x8c0e,	// (0x00016f4f) att_query_pane_cp01

0x8c5a,	// (0x00016f9b) att_t_hdr_pane_ParamLimits

0x8c5a,	// (0x00016f9b) att_t_hdr_pane

0x8cc6,	// (0x00017007) att_t_nml_pane_ParamLimits

0x8cc6,	// (0x00017007) att_t_nml_pane

0x8d36,	// (0x00017077) att_t_nml_pane_cp01_ParamLimits

0x8d36,	// (0x00017077) att_t_nml_pane_cp01

0x8d62,	// (0x000170a3) att_t_nmlb_pane_ParamLimits

0x8d62,	// (0x000170a3) att_t_nmlb_pane

0x8dcf,	// (0x00017110) att_term_pane_ParamLimits

0x8dcf,	// (0x00017110) att_term_pane

0x8e19,	// (0x0001715a) main_att_body_pane_g1_ParamLimits

0x8e19,	// (0x0001715a) main_att_body_pane_g1

0xee04,	// (0x0001d145) att_t_hdr_pane_t1_ParamLimits

0xee04,	// (0x0001d145) att_t_hdr_pane_t1

0xee1d,	// (0x0001d15e) att_t_nml_pane_t1_ParamLimits

0xee1d,	// (0x0001d15e) att_t_nml_pane_t1

0xee42,	// (0x0001d183) att_btn_pane_t1

0xeba4,	// (0x0001cee5) bg_button_pane_cp23

0x8e45,	// (0x00017186) att_li_srv_row_pane_ParamLimits

0x8e45,	// (0x00017186) att_li_srv_row_pane

0xee52,	// (0x0001d193) att_t_nmlb_pane_t1_ParamLimits

0xee52,	// (0x0001d193) att_t_nmlb_pane_t1

0xee70,	// (0x0001d1b1) att_query_pane_t1

0xee7f,	// (0x0001d1c0) att_query_pane_t2

0xee8e,	// (0x0001d1cf) att_query_pane_t3

0x0002,

0xfe6a,	// (0x0001e1ab) att_query_pane_t

0xee9d,	// (0x0001d1de) input_focus_pane_cp11

0xeea6,	// (0x0001d1e7) att_term_pane_t1_ParamLimits

0xeea6,	// (0x0001d1e7) att_term_pane_t1

0x9264,	// (0x000175a5) att_opt_row_pane

0xede3,	// (0x0001d124) att_opt_row_pane_g1

0xeec3,	// (0x0001d204) att_opt_row_pane_t1_ParamLimits

0xeec3,	// (0x0001d204) att_opt_row_pane_t1

0x8e55,	// (0x00017196) att_li_srv_row_pane_g1

0x8e5d,	// (0x0001719e) att_li_srv_row_pane_t1_ParamLimits

0x8e5d,	// (0x0001719e) att_li_srv_row_pane_t1

0x8e72,	// (0x000171b3) att_li_srv_row_pane_t2_ParamLimits

0x8e72,	// (0x000171b3) att_li_srv_row_pane_t2

0x0001,

0xfe71,	// (0x0001e1b2) att_li_srv_row_pane_t_ParamLimits

0xfe71,	// (0x0001e1b2) att_li_srv_row_pane_t

0xeedc,	// (0x0001d21d) att_btn_close_pane_g1

0x9264,	// (0x000175a5) bg_button_pane_cp24

0x8e87,	// (0x000171c8) main_vod_body_pane_ParamLimits

0x8e87,	// (0x000171c8) main_vod_body_pane

0x8e9b,	// (0x000171dc) main_vod_body_pane_g1_ParamLimits

0x8e9b,	// (0x000171dc) main_vod_body_pane_g1

0x8ecf,	// (0x00017210) scroll_pane_cp24_ParamLimits

0x8ecf,	// (0x00017210) scroll_pane_cp24

0x8f1d,	// (0x0001725e) vod_btn_pane_ParamLimits

0x8f1d,	// (0x0001725e) vod_btn_pane

0x8f5f,	// (0x000172a0) vod_det_pane_ParamLimits

0x8f5f,	// (0x000172a0) vod_det_pane

0x8f93,	// (0x000172d4) vod_logo_g1_ParamLimits

0x8f93,	// (0x000172d4) vod_logo_g1

0x8fd1,	// (0x00017312) vod_opt_pane_ParamLimits

0x8fd1,	// (0x00017312) vod_opt_pane

0x9004,	// (0x00017345) vod_opt_pane_cp01_ParamLimits

0x9004,	// (0x00017345) vod_opt_pane_cp01

0x9030,	// (0x00017371) vod_query_pane_ParamLimits

0x9030,	// (0x00017371) vod_query_pane

0x905b,	// (0x0001739c) vod_query_pane_cp01_ParamLimits

0x905b,	// (0x0001739c) vod_query_pane_cp01

0x9067,	// (0x000173a8) vod_t_nml_pane_ParamLimits

0x9067,	// (0x000173a8) vod_t_nml_pane

0x9114,	// (0x00017455) vod_t_nml_pane_cp01_ParamLimits

0x9114,	// (0x00017455) vod_t_nml_pane_cp01

0x9150,	// (0x00017491) vod_t_sub_pane_ParamLimits

0x9150,	// (0x00017491) vod_t_sub_pane

0x9181,	// (0x000174c2) vod_t_sub_pane_cp01_ParamLimits

0x9181,	// (0x000174c2) vod_t_sub_pane_cp01

0xee9d,	// (0x0001d1de) vod_query_field_pane

0xeee4,	// (0x0001d225) vod_query_pane_t1

0xeba4,	// (0x0001cee5) bg_button_pane_cp25

0xeb95,	// (0x0001ced6) sso_btn_pane_t1_copy2

0x91ad,	// (0x000174ee) vod_t_nml_pane_t1_ParamLimits

0x91ad,	// (0x000174ee) vod_t_nml_pane_t1

0xeef3,	// (0x0001d234) vod_opt_row_pane_ParamLimits

0xeef3,	// (0x0001d234) vod_opt_row_pane

0xef05,	// (0x0001d246) vod_t_sub_pane_t1_ParamLimits

0xef05,	// (0x0001d246) vod_t_sub_pane_t1

0xef1e,	// (0x0001d25f) vod_det_cell_pane_ParamLimits

0xef1e,	// (0x0001d25f) vod_det_cell_pane

0x9264,	// (0x000175a5) input_focus_pane_cp15

0xef2f,	// (0x0001d270) vod_query_field_pane_t1

0xef3d,	// (0x0001d27e) vod_opt_row_pane_g1_ParamLimits

0xef3d,	// (0x0001d27e) vod_opt_row_pane_g1

0xef49,	// (0x0001d28a) vod_opt_row_pane_t1_ParamLimits

0xef49,	// (0x0001d28a) vod_opt_row_pane_t1

0xef68,	// (0x0001d2a9) vod_det_cell_field_pane

0xef71,	// (0x0001d2b2) vod_det_cell_pane_g1

0xef79,	// (0x0001d2ba) vod_det_cell_pane_t1

0x9264,	// (0x000175a5) input_focus_pane_cp16

0xef88,	// (0x0001d2c9) vod_det_cell_field_pane_t1

0x7999,	// (0x00015cda) call7_btn_grp_pane_ParamLimits

0x7999,	// (0x00015cda) call7_btn_grp_pane

0x91de,	// (0x0001751f) call7_bubble_pane_ParamLimits

0x91de,	// (0x0001751f) call7_bubble_pane

0x91f5,	// (0x00017536) cell_call7_btn_pane_ParamLimits

0x91f5,	// (0x00017536) cell_call7_btn_pane

0x9208,	// (0x00017549) call7_pane_g1_ParamLimits

0x9208,	// (0x00017549) call7_pane_g1

0x9217,	// (0x00017558) call7_windows_conf_pane_ParamLimits

0x9217,	// (0x00017558) call7_windows_conf_pane

0x9231,	// (0x00017572) popup_call7_1st_window_ParamLimits

0x9231,	// (0x00017572) popup_call7_1st_window

0x9242,	// (0x00017583) popup_call7_2nd_window_ParamLimits

0x9242,	// (0x00017583) popup_call7_2nd_window

0x9253,	// (0x00017594) popup_call7_3rd_window_ParamLimits

0x9253,	// (0x00017594) popup_call7_3rd_window

0x9264,	// (0x000175a5) bg_button_pane_cp26

0xe8b6,	// (0x0001cbf7) cell_call7_btn_pane_g1

0xe8bf,	// (0x0001cc00) cell_call7_btn_pane_t1

0x9264,	// (0x000175a5) bg_popup_window_pane_cp12

0xef96,	// (0x0001d2d7) popup_call7_1st_window_g1

0xef9e,	// (0x0001d2df) popup_call7_1st_window_g2

0xefa6,	// (0x0001d2e7) popup_call7_1st_window_g3

0x0002,

0xfe76,	// (0x0001e1b7) popup_call7_1st_window_g

0xefae,	// (0x0001d2ef) popup_call7_1st_window_t1

0xefbd,	// (0x0001d2fe) popup_call7_1st_window_t2

0xefcb,	// (0x0001d30c) popup_call7_1st_window_t3

0x0002,

0xfe7d,	// (0x0001e1be) popup_call7_1st_window_t

0x9264,	// (0x000175a5) bg_popup_window_pane_cp13

0xefd9,	// (0x0001d31a) popup_call7_2nd_window_g1

0xefe1,	// (0x0001d322) popup_call7_2nd_window_g2

0xefe9,	// (0x0001d32a) popup_call7_2nd_window_g3

0x0002,

0xfe84,	// (0x0001e1c5) popup_call7_2nd_window_g

0xefae,	// (0x0001d2ef) popup_call7_2nd_window_t1

0x9264,	// (0x000175a5) bg_popup_window_pane_cp14

0xeff1,	// (0x0001d332) call7_list_conf_pane

0xeff9,	// (0x0001d33a) call7_list_conf_row_pane_ParamLimits

0xeff9,	// (0x0001d33a) call7_list_conf_row_pane

0xf00c,	// (0x0001d34d) call7_list_conf_row_pane_g1

0xf014,	// (0x0001d355) call7_list_conf_row_pane_g2

0x0001,

0xfe8b,	// (0x0001e1cc) call7_list_conf_row_pane_g

0xf01c,	// (0x0001d35d) call7_list_conf_row_pane_t1

0x9264,	// (0x000175a5) list_highlight_pane_cp22

0x880e,	// (0x00016b4f) sso_option_pane_cp01_ParamLimits

0x880e,	// (0x00016b4f) sso_option_pane_cp01

0x994f,	// (0x00017c90) msg_header_pane_ParamLimits

0xa938,	// (0x00018c79) bg_button_pane_cp01_ParamLimits

0xa94c,	// (0x00018c8d) input_focus_pane_cp07_ParamLimits

0x6ebe,	// (0x000151ff) popup_email_progress_window

0x9a10,	// (0x00017d51) popup_email_progress_window_g1

0xf02a,	// (0x0001d36b) popup_email_progress_window_g2

0x0001,

0xfe90,	// (0x0001e1d1) popup_email_progress_window_g

0xf032,	// (0x0001d373) popup_email_progress_window_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
