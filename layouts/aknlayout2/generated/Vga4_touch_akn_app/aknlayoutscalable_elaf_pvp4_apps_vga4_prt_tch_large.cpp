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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000665f8 };

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
0x6721,	// (0x0006cd19) Screen

0x672d,	// (0x0006cd25) application_window

0x678b,	// (0x0006cd83) area_bottom_pane_ParamLimits

0x678b,	// (0x0006cd83) area_bottom_pane

0x67e5,	// (0x0006cddd) area_top_pane_ParamLimits

0x67e5,	// (0x0006cddd) area_top_pane

0x6849,	// (0x0006ce41) call_video_uplink_pane_ParamLimits

0x6849,	// (0x0006ce41) call_video_uplink_pane

0x6886,	// (0x0006ce7e) main_pane_ParamLimits

0x6886,	// (0x0006ce7e) main_pane

0x172d,	// (0x00067d25) context_pane

0x99c2,	// (0x0006ffba) navi_pane

0x99e6,	// (0x0006ffde) popup_cale_events_window_ParamLimits

0x99e6,	// (0x0006ffde) popup_cale_events_window

0x1740,	// (0x00067d38) popup_mup_playback_window

0x99fe,	// (0x0006fff6) signal_pane

0xe8e8,	// (0x00074ee0) main_browser_pane

0x026f,	// (0x00066867) main_burst_pane

0x9866,	// (0x0006fe5e) main_calc_pane

0x026f,	// (0x00066867) main_cale_day_pane

0xe8e8,	// (0x00074ee0) main_cale_month_pane

0x026f,	// (0x00066867) main_cale_week_pane

0x026f,	// (0x00066867) main_call_pane

0xe5c2,	// (0x00074bba) main_call_poc_pane

0x026f,	// (0x00066867) main_camera_pane

0x026f,	// (0x00066867) main_chi_dic_pane

0x0111,	// (0x00066709) main_clock_pane

0xe5c2,	// (0x00074bba) main_fmradio_pane

0x026f,	// (0x00066867) main_graph_messa_pane

0xe5c2,	// (0x00074bba) main_help_pane

0xe8e8,	// (0x00074ee0) main_im_pane

0xe81d,	// (0x00074e15) main_image_pane_ParamLimits

0xe81d,	// (0x00074e15) main_image_pane

0xe5c2,	// (0x00074bba) main_location2_pane

0x026f,	// (0x00066867) main_location_pane

0xe5c2,	// (0x00074bba) main_messa_pane

0xe5c2,	// (0x00074bba) main_mp2_pane

0x026f,	// (0x00066867) main_mp_pane

0xe5c2,	// (0x00074bba) main_msg_pane

0xe5c2,	// (0x00074bba) main_mup_eq_pane

0xe5c2,	// (0x00074bba) main_mup_pane

0x026f,	// (0x00066867) main_notes_pane

0xe5c2,	// (0x00074bba) main_pec_pane

0xe5c2,	// (0x00074bba) main_phob_pane

0xe5c2,	// (0x00074bba) main_pinb_pane

0xe5c2,	// (0x00074bba) main_postcard_pane

0xe5c2,	// (0x00074bba) main_qdial_pane

0x026f,	// (0x00066867) main_skin_pane

0xe5c2,	// (0x00074bba) main_smil2_pane

0x026f,	// (0x00066867) main_smil_pane

0x026f,	// (0x00066867) main_video_pane

0x026f,	// (0x00066867) main_video_tele_pane

0xe81d,	// (0x00074e15) main_viewer_pane_ParamLimits

0xe81d,	// (0x00074e15) main_viewer_pane

0x026f,	// (0x00066867) main_vorec_pane

0x98ac,	// (0x0006fea4) popup_blid_sat_info_window_ParamLimits

0x98ac,	// (0x0006fea4) popup_blid_sat_info_window

0x98c6,	// (0x0006febe) popup_dyc_status_message_window_ParamLimits

0x98c6,	// (0x0006febe) popup_dyc_status_message_window

0x98d6,	// (0x0006fece) popup_grid_large_graphic_window_ParamLimits

0x98d6,	// (0x0006fece) popup_grid_large_graphic_window

0x994e,	// (0x0006ff46) popup_loc_request_window_ParamLimits

0x994e,	// (0x0006ff46) popup_loc_request_window

0x9996,	// (0x0006ff8e) popup_wml_address_window_ParamLimits

0x9996,	// (0x0006ff8e) popup_wml_address_window

0x973e,	// (0x0006fd36) call_muted_g1

0x93fa,	// (0x0006f9f2) popup_call_audio_conf_window_ParamLimits

0x93fa,	// (0x0006f9f2) popup_call_audio_conf_window

0x974e,	// (0x0006fd46) popup_call_audio_first_window_ParamLimits

0x974e,	// (0x0006fd46) popup_call_audio_first_window

0x978e,	// (0x0006fd86) popup_call_audio_in_window_ParamLimits

0x978e,	// (0x0006fd86) popup_call_audio_in_window

0x97b2,	// (0x0006fdaa) popup_call_audio_out_window_ParamLimits

0x97b2,	// (0x0006fdaa) popup_call_audio_out_window

0x97d4,	// (0x0006fdcc) popup_call_audio_second_window_ParamLimits

0x97d4,	// (0x0006fdcc) popup_call_audio_second_window

0x9804,	// (0x0006fdfc) popup_call_audio_wait_window_ParamLimits

0x9804,	// (0x0006fdfc) popup_call_audio_wait_window

0x9825,	// (0x0006fe1d) popup_number_entry_window_ParamLimits

0x9825,	// (0x0006fe1d) popup_number_entry_window

0x6a4e,	// (0x0006d046) bg_popup_call_pane_cp05_ParamLimits

0x6a4e,	// (0x0006d046) bg_popup_call_pane_cp05

0x6a6e,	// (0x0006d066) popup_number_entry_window_t1

0x6a81,	// (0x0006d079) popup_number_entry_window_t2

0x6a93,	// (0x0006d08b) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x000756e4) popup_number_entry_window_t

0x6add,	// (0x0006d0d5) text_title_cp2

0x6af0,	// (0x0006d0e8) bg_popup_call_pane_cp_ParamLimits

0x6af0,	// (0x0006d0e8) bg_popup_call_pane_cp

0x6afe,	// (0x0006d0f6) call_thumbnail_pane

0x6b06,	// (0x0006d0fe) popup_call_audio_in_window_g1_ParamLimits

0x6b06,	// (0x0006d0fe) popup_call_audio_in_window_g1

0x6b12,	// (0x0006d10a) popup_call_audio_in_window_g2_ParamLimits

0x6b12,	// (0x0006d10a) popup_call_audio_in_window_g2

0x6b1e,	// (0x0006d116) popup_call_audio_in_window_g3_ParamLimits

0x6b1e,	// (0x0006d116) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x000756ed) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x000756ed) popup_call_audio_in_window_g

0x6b2a,	// (0x0006d122) popup_call_audio_in_window_t1_ParamLimits

0x6b2a,	// (0x0006d122) popup_call_audio_in_window_t1

0x6b46,	// (0x0006d13e) popup_call_audio_in_window_t2_ParamLimits

0x6b46,	// (0x0006d13e) popup_call_audio_in_window_t2

0xe26b,	// (0x00074863) popup_call_audio_in_window_t3_ParamLimits

0xe26b,	// (0x00074863) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x000756f4) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x000756f4) popup_call_audio_in_window_t

0x6af0,	// (0x0006d0e8) bg_popup_call_pane_cp01_ParamLimits

0x6af0,	// (0x0006d0e8) bg_popup_call_pane_cp01

0x6afe,	// (0x0006d0f6) call_thumbnail_pane_cp02

0xe27e,	// (0x00074876) call_type_pane_cp022

0xe286,	// (0x0007487e) popup_call_audio_out_window_g1_ParamLimits

0xe286,	// (0x0007487e) popup_call_audio_out_window_g1

0xe298,	// (0x00074890) popup_call_audio_out_window_g2_ParamLimits

0xe298,	// (0x00074890) popup_call_audio_out_window_g2

0xe2a4,	// (0x0007489c) popup_call_audio_out_window_g3_ParamLimits

0xe2a4,	// (0x0007489c) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x000756fb) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x000756fb) popup_call_audio_out_window_g

0xe2b6,	// (0x000748ae) popup_call_audio_out_window_t1_ParamLimits

0xe2b6,	// (0x000748ae) popup_call_audio_out_window_t1

0xe2ce,	// (0x000748c6) popup_call_audio_out_window_t2_ParamLimits

0xe2ce,	// (0x000748c6) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00075702) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00075702) popup_call_audio_out_window_t

0xe2e3,	// (0x000748db) bg_popup_call_pane_ParamLimits

0xe2e3,	// (0x000748db) bg_popup_call_pane

0x6b62,	// (0x0006d15a) call_thumbnail_pane_cp_ParamLimits

0x6b62,	// (0x0006d15a) call_thumbnail_pane_cp

0xe367,	// (0x0007495f) call_type_pane_cp01_ParamLimits

0xe367,	// (0x0007495f) call_type_pane_cp01

0xe3ab,	// (0x000749a3) popup_call_audio_first_window_g1_ParamLimits

0xe3ab,	// (0x000749a3) popup_call_audio_first_window_g1

0xe417,	// (0x00074a0f) popup_call_audio_first_window_g2_ParamLimits

0xe417,	// (0x00074a0f) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00075707) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00075707) popup_call_audio_first_window_g

0xe45b,	// (0x00074a53) popup_call_audio_first_window_t1_ParamLimits

0xe45b,	// (0x00074a53) popup_call_audio_first_window_t1

0xe507,	// (0x00074aff) popup_call_audio_first_window_t4_ParamLimits

0xe507,	// (0x00074aff) popup_call_audio_first_window_t4

0xe593,	// (0x00074b8b) popup_call_audio_first_window_t5_ParamLimits

0xe593,	// (0x00074b8b) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0007570c) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0007570c) popup_call_audio_first_window_t

0xe5c2,	// (0x00074bba) bg_popup_call_pane_cp02

0xe5cc,	// (0x00074bc4) call_type_pane_cp023

0xe5d4,	// (0x00074bcc) popup_call_audio_wait_window_g1

0xe5dc,	// (0x00074bd4) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00075713) popup_call_audio_wait_window_g

0xe5e4,	// (0x00074bdc) popup_call_audio_wait_window_t3

0xe5f2,	// (0x00074bea) bg_popup_call_pane_cp03_ParamLimits

0xe5f2,	// (0x00074bea) bg_popup_call_pane_cp03

0xe652,	// (0x00074c4a) call_thumbnail_pane_cp011_ParamLimits

0xe652,	// (0x00074c4a) call_thumbnail_pane_cp011

0xe65e,	// (0x00074c56) call_type_pane_cp034_ParamLimits

0xe65e,	// (0x00074c56) call_type_pane_cp034

0xe69a,	// (0x00074c92) popup_call_audio_second_window_g1_ParamLimits

0xe69a,	// (0x00074c92) popup_call_audio_second_window_g1

0xe6d6,	// (0x00074cce) popup_call_audio_second_window_g2_ParamLimits

0xe6d6,	// (0x00074cce) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00075718) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00075718) popup_call_audio_second_window_g

0xe712,	// (0x00074d0a) popup_call_audio_second_window_t1_ParamLimits

0xe712,	// (0x00074d0a) popup_call_audio_second_window_t1

0xe793,	// (0x00074d8b) popup_call_audio_second_window_t2_ParamLimits

0xe793,	// (0x00074d8b) popup_call_audio_second_window_t2

0xe7c9,	// (0x00074dc1) popup_call_audio_second_window_t3_ParamLimits

0xe7c9,	// (0x00074dc1) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0007571d) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0007571d) popup_call_audio_second_window_t

0xe5c2,	// (0x00074bba) bg_popup_call_pane_cp04

0xe7ff,	// (0x00074df7) list_conf_pane

0xe807,	// (0x00074dff) popup_call_audio_conf_window_t1

0xe815,	// (0x00074e0d) call_thumbnail_pane_g1

0xe81d,	// (0x00074e15) bg_pinb_pane_ParamLimits

0xe81d,	// (0x00074e15) bg_pinb_pane

0xe82b,	// (0x00074e23) find_pinb_pane

0xe834,	// (0x00074e2c) listscroll_pinb_pane_ParamLimits

0xe834,	// (0x00074e2c) listscroll_pinb_pane

0xe843,	// (0x00074e3b) pinb_bg_pane_g1

0x6b86,	// (0x0006d17e) pinb_bg_pane_g2

0x6b92,	// (0x0006d18a) pinb_bg_pane_g3

0x6b9e,	// (0x0006d196) pinb_bg_pane_g4

0x6baa,	// (0x0006d1a2) pinb_bg_pane_g5

0x6bb6,	// (0x0006d1ae) pinb_bg_pane_g6

0x6bc1,	// (0x0006d1b9) pinb_bg_pane_g7

0x6bcc,	// (0x0006d1c4) pinb_bg_pane_g8

0x6bd7,	// (0x0006d1cf) pinb_bg_pane_g9

0x6be1,	// (0x0006d1d9) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00075724) pinb_bg_pane_g

0x6bfe,	// (0x0006d1f6) grid_pinb_pane

0x6c09,	// (0x0006d201) list_pinb_pane

0x6c14,	// (0x0006d20c) scroll_pane_cp01_ParamLimits

0x6c14,	// (0x0006d20c) scroll_pane_cp01

0xe84d,	// (0x00074e45) find_pinb_pane_g1_ParamLimits

0xe84d,	// (0x00074e45) find_pinb_pane_g1

0xe865,	// (0x00074e5d) find_pinb_pane_t1

0xe877,	// (0x00074e6f) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0007573e) find_pinb_pane_t

0xe88c,	// (0x00074e84) input_focus_pane_cp01_ParamLimits

0xe88c,	// (0x00074e84) input_focus_pane_cp01

0x6c26,	// (0x0006d21e) cell_pinb_pane_ParamLimits

0x6c26,	// (0x0006d21e) cell_pinb_pane

0x6c46,	// (0x0006d23e) cell_pinb_pane_g1_ParamLimits

0x6c46,	// (0x0006d23e) cell_pinb_pane_g1

0x6c5b,	// (0x0006d253) cell_pinb_pane_g2_ParamLimits

0x6c5b,	// (0x0006d253) cell_pinb_pane_g2

0xe898,	// (0x00074e90) cell_pinb_pane_g3_ParamLimits

0xe898,	// (0x00074e90) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00075743) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00075743) cell_pinb_pane_g

0xe5c2,	// (0x00074bba) grid_highlight_pane_cp01

0x6c67,	// (0x0006d25f) list_pinb_item_pane_ParamLimits

0x6c67,	// (0x0006d25f) list_pinb_item_pane

0xe5c2,	// (0x00074bba) list_highlight_pane_cp02

0x6c82,	// (0x0006d27a) list_pinb_item_pane_g1_ParamLimits

0x6c82,	// (0x0006d27a) list_pinb_item_pane_g1

0x6c8f,	// (0x0006d287) list_pinb_item_pane_g2_ParamLimits

0x6c8f,	// (0x0006d287) list_pinb_item_pane_g2

0x6c9b,	// (0x0006d293) list_pinb_item_pane_g3_ParamLimits

0x6c9b,	// (0x0006d293) list_pinb_item_pane_g3

0x6cac,	// (0x0006d2a4) list_pinb_item_pane_g4_ParamLimits

0x6cac,	// (0x0006d2a4) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0007574a) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0007574a) list_pinb_item_pane_g

0x6cb8,	// (0x0006d2b0) list_pinb_item_pane_t1_ParamLimits

0x6cb8,	// (0x0006d2b0) list_pinb_item_pane_t1

0x6ce9,	// (0x0006d2e1) calc_display_pane

0x6d07,	// (0x0006d2ff) calc_paper_pane

0x6d23,	// (0x0006d31b) grid_calc_pane

0xe5c2,	// (0x00074bba) bg_list_pane_cp01

0x6d4f,	// (0x0006d347) clock_g1

0x6d57,	// (0x0006d34f) clock_g2

0x0001,

0xf15b,	// (0x00075753) clock_g

0x6d61,	// (0x0006d359) clock_t1_ParamLimits

0x6d61,	// (0x0006d359) clock_t1

0x6d76,	// (0x0006d36e) clock_t2_ParamLimits

0x6d76,	// (0x0006d36e) clock_t2

0x6d88,	// (0x0006d380) clock_t3_ParamLimits

0x6d88,	// (0x0006d380) clock_t3

0x6d9a,	// (0x0006d392) clock_t4_ParamLimits

0x6d9a,	// (0x0006d392) clock_t4

0x6dac,	// (0x0006d3a4) clock_t5_ParamLimits

0x6dac,	// (0x0006d3a4) clock_t5

0x6dc1,	// (0x0006d3b9) clock_t6_ParamLimits

0x6dc1,	// (0x0006d3b9) clock_t6

0x6dd3,	// (0x0006d3cb) clock_t7_ParamLimits

0x6dd3,	// (0x0006d3cb) clock_t7

0x6de5,	// (0x0006d3dd) clock_t8_ParamLimits

0x6de5,	// (0x0006d3dd) clock_t8

0x6dfb,	// (0x0006d3f3) clock_t9_ParamLimits

0x6dfb,	// (0x0006d3f3) clock_t9

0x0008,

0xf160,	// (0x00075758) clock_t_ParamLimits

0xf160,	// (0x00075758) clock_t

0xe8a4,	// (0x00074e9c) popup_clock_analogue_window_cp02

0xe8a4,	// (0x00074e9c) popup_clock_digital_window_cp01

0xe8ac,	// (0x00074ea4) listscroll_help_pane

0xe5c2,	// (0x00074bba) phob_pre_status_pane

0xe8b6,	// (0x00074eae) grid_qdial_pane

0xe5c2,	// (0x00074bba) listscroll_mce_pane

0xe8c0,	// (0x00074eb8) bg_notes_pane

0xe8ca,	// (0x00074ec2) list_notes_pane

0x6e11,	// (0x0006d409) scroll_pane_cp06

0xe8d4,	// (0x00074ecc) bg_calc_paper_pane

0x6e1c,	// (0x0006d414) list_calc_pane

0xe8e8,	// (0x00074ee0) bg_calc_display_pane

0x6e36,	// (0x0006d42e) calc_display_pane_t1

0x6e4b,	// (0x0006d443) calc_display_pane_t2

0x6e60,	// (0x0006d458) calc_display_pane_t3

0x0002,

0xf173,	// (0x0007576b) calc_display_pane_t

0x6e72,	// (0x0006d46a) cell_calc_pane_ParamLimits

0x6e72,	// (0x0006d46a) cell_calc_pane

0xe8f4,	// (0x00074eec) bg_calc_paper_pane_g1

0xe900,	// (0x00074ef8) bg_calc_paper_pane_g2

0xe90c,	// (0x00074f04) bg_calc_paper_pane_g3

0xe918,	// (0x00074f10) bg_calc_paper_pane_g4

0xe924,	// (0x00074f1c) bg_calc_paper_pane_g5

0x6ea1,	// (0x0006d499) bg_calc_paper_pane_g6

0x6eb2,	// (0x0006d4aa) bg_calc_paper_pane_g7

0x6ec3,	// (0x0006d4bb) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00075772) bg_calc_paper_pane_g

0x6ed4,	// (0x0006d4cc) calc_bg_paper_pane_g9

0x6ee5,	// (0x0006d4dd) list_calc_item_pane_ParamLimits

0x6ee5,	// (0x0006d4dd) list_calc_item_pane

0xe930,	// (0x00074f28) list_calc_item_pane_g1

0x6f09,	// (0x0006d501) list_calc_item_pane_t1_ParamLimits

0x6f09,	// (0x0006d501) list_calc_item_pane_t1

0x6f1b,	// (0x0006d513) list_calc_item_pane_t2_ParamLimits

0x6f1b,	// (0x0006d513) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00075783) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00075783) list_calc_item_pane_t

0xe93d,	// (0x00074f35) cell_calc_pane_g1

0xe947,	// (0x00074f3f) grid_highlight_pane_cp02

0xe969,	// (0x00074f61) bg_calc_display_pane_g1

0x6f4b,	// (0x0006d543) bg_calc_display_pane_g2

0xe972,	// (0x00074f6a) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0007578d) bg_calc_display_pane_g

0x6f55,	// (0x0006d54d) cell_qdial_pane_ParamLimits

0x6f55,	// (0x0006d54d) cell_qdial_pane

0x6f6b,	// (0x0006d563) cell_qdial_pane_g1_ParamLimits

0x6f6b,	// (0x0006d563) cell_qdial_pane_g1

0x6f78,	// (0x0006d570) cell_qdial_pane_g2_ParamLimits

0x6f78,	// (0x0006d570) cell_qdial_pane_g2

0xe97b,	// (0x00074f73) cell_qdial_pane_g3_ParamLimits

0xe97b,	// (0x00074f73) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00075794) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00075794) cell_qdial_pane_g

0x6f96,	// (0x0006d58e) cell_qdial_pane_t1_ParamLimits

0x6f96,	// (0x0006d58e) cell_qdial_pane_t1

0x6fae,	// (0x0006d5a6) cell_qdial_pane_t2_ParamLimits

0x6fae,	// (0x0006d5a6) cell_qdial_pane_t2

0x6fc1,	// (0x0006d5b9) cell_qdial_pane_t3_ParamLimits

0x6fc1,	// (0x0006d5b9) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0007579d) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0007579d) cell_qdial_pane_t

0xe5c2,	// (0x00074bba) grid_highlight_pane_cp04

0xe987,	// (0x00074f7f) thumbnail_qdial_pane_ParamLimits

0xe987,	// (0x00074f7f) thumbnail_qdial_pane

0xe9e3,	// (0x00074fdb) list_help_pane

0xe9ec,	// (0x00074fe4) scroll_pane_cp02

0x6fd4,	// (0x0006d5cc) help_list_pane_t1_ParamLimits

0x6fd4,	// (0x0006d5cc) help_list_pane_t1

0x6ffe,	// (0x0006d5f6) bg_notes_pane_g2

0x7006,	// (0x0006d5fe) bg_notes_pane_g3

0x700e,	// (0x0006d606) notes_bg_pane_g1

0x7016,	// (0x0006d60e) notes_bg_pane_g4

0x701e,	// (0x0006d616) notes_bg_pane_g5

0x7026,	// (0x0006d61e) notes_bg_pane_g6

0x702e,	// (0x0006d626) notes_bg_pane_g7

0x7036,	// (0x0006d62e) notes_bg_pane_g8

0x703e,	// (0x0006d636) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x000757bb) notes_bg_pane_g

0x7046,	// (0x0006d63e) list_notes_text_pane_ParamLimits

0x7046,	// (0x0006d63e) list_notes_text_pane

0xe9f5,	// (0x00074fed) list_notes_text_pane_g1

0x55d1,	// (0x0006bbc9) list_notes_text_pane_t1

0xe8e8,	// (0x00074ee0) listscroll_cale_week_pane

0x7080,	// (0x0006d678) bg_cale_heading_pane

0xea0f,	// (0x00075007) bg_cale_pane_cp01

0x7094,	// (0x0006d68c) cale_week_corner_pane

0x70aa,	// (0x0006d6a2) cale_week_day_heading_pane

0x70be,	// (0x0006d6b6) cale_week_scroll_pane_g1

0x70cf,	// (0x0006d6c7) cale_week_scroll_pane_g2

0x70e0,	// (0x0006d6d8) cale_week_scroll_pane_g3

0x70f1,	// (0x0006d6e9) cale_week_scroll_pane_g4

0x7102,	// (0x0006d6fa) cale_week_scroll_pane_g5

0x7113,	// (0x0006d70b) cale_week_scroll_pane_g6

0x7126,	// (0x0006d71e) cale_week_scroll_pane_g7

0x7139,	// (0x0006d731) cale_week_scroll_pane_g8

0x714c,	// (0x0006d744) cale_week_scroll_pane_g9

0x715d,	// (0x0006d755) cale_week_scroll_pane_g10

0x716e,	// (0x0006d766) cale_week_scroll_pane_g11

0x717f,	// (0x0006d777) cale_week_scroll_pane_g12

0x7190,	// (0x0006d788) cale_week_scroll_pane_g13

0x71a1,	// (0x0006d799) cale_week_scroll_pane_g14

0x71b2,	// (0x0006d7aa) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x000757ca) cale_week_scroll_pane_g

0x71c3,	// (0x0006d7bb) cale_week_time_pane

0x71d6,	// (0x0006d7ce) grid_cale_week_pane

0x71eb,	// (0x0006d7e3) scroll_pane_cp08

0x7205,	// (0x0006d7fd) cell_cale_week_pane_ParamLimits

0x7205,	// (0x0006d7fd) cell_cale_week_pane

0x7243,	// (0x0006d83b) cale_week_day_heading_pane_t1

0x7270,	// (0x0006d868) cale_week_day_heading_pane_t2

0x729d,	// (0x0006d895) cale_week_day_heading_pane_t3

0x72ca,	// (0x0006d8c2) cale_week_day_heading_pane_t4

0x72f7,	// (0x0006d8ef) cale_week_day_heading_pane_t5

0x7324,	// (0x0006d91c) cale_week_day_heading_pane_t6

0x7351,	// (0x0006d949) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x000757e9) cale_week_day_heading_pane_t

0xea3a,	// (0x00075032) bg_cale_side_pane

0x737e,	// (0x0006d976) cale_week_time_pane_t1

0x73aa,	// (0x0006d9a2) cale_week_time_pane_t2

0x73d6,	// (0x0006d9ce) cale_week_time_pane_t3

0x7402,	// (0x0006d9fa) cale_week_time_pane_t4

0x742e,	// (0x0006da26) cale_week_time_pane_t5

0x745a,	// (0x0006da52) cale_week_time_pane_t6

0x7486,	// (0x0006da7e) cale_week_time_pane_t7

0x74b2,	// (0x0006daaa) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x000757f8) cale_week_time_pane_t

0x74de,	// (0x0006dad6) cell_cale_week_pane_g2

0x74f7,	// (0x0006daef) cell_cale_week_pane_g3_ParamLimits

0x74f7,	// (0x0006daef) cell_cale_week_pane_g3

0xea48,	// (0x00075040) grid_highlight_pane_cp07

0xea50,	// (0x00075048) listscroll_gms_pane

0xea5a,	// (0x00075052) grid_gms_pane

0xea63,	// (0x0007505b) listscroll_gms_pane_g1

0xea6b,	// (0x00075063) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00075809) listscroll_gms_pane_g

0x750f,	// (0x0006db07) scroll_pane_cp010

0x751a,	// (0x0006db12) cell_gms_pane_ParamLimits

0x751a,	// (0x0006db12) cell_gms_pane

0x752d,	// (0x0006db25) cell_gms_pane_g1

0xea73,	// (0x0007506b) cell_gms_pane_g2

0xea7b,	// (0x00075073) cell_gms_pane_g3

0xea84,	// (0x0007507c) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0007580e) cell_gms_pane_g

0xea8d,	// (0x00075085) grid_highlight_pane_cp09

0x96e6,	// (0x0006fcde) phob_pre_status_pane_g1

0x96ee,	// (0x0006fce6) phob_pre_status_pane_g2

0x96f6,	// (0x0006fcee) phob_pre_status_pane_g3

0x96fe,	// (0x0006fcf6) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x00075bfd) phob_pre_status_pane_g

0x970e,	// (0x0006fd06) phob_pre_status_pane_t1

0x971e,	// (0x0006fd16) phob_pre_status_pane_t2

0x972e,	// (0x0006fd26) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00075c08) phob_pre_status_pane_t

0xe5c2,	// (0x00074bba) bg_list_pane_cp05

0x753d,	// (0x0006db35) grid_vorec_pane

0x7547,	// (0x0006db3f) vorec_t1

0x7555,	// (0x0006db4d) vorec_t2

0x7563,	// (0x0006db5b) vorec_t3

0x7571,	// (0x0006db69) vorec_t4

0x757f,	// (0x0006db77) vorec_t5

0x758d,	// (0x0006db85) vorec_t6

0x0006,

0xf21f,	// (0x00075817) vorec_t

0x75a9,	// (0x0006dba1) wait_bar_pane_cp01

0x75b1,	// (0x0006dba9) cell_vorec_pane_ParamLimits

0x75b1,	// (0x0006dba9) cell_vorec_pane

0xea95,	// (0x0007508d) cell_vorec_pane_g1

0xe5c2,	// (0x00074bba) grid_highlight_pane_cp05

0x75d6,	// (0x0006dbce) cams_zoom_pane

0x75e2,	// (0x0006dbda) image_vga_pane

0x75f1,	// (0x0006dbe9) main_camera_pane_g1

0x75ff,	// (0x0006dbf7) main_camera_pane_g2

0x760b,	// (0x0006dc03) main_camera_pane_g3

0x7619,	// (0x0006dc11) main_camera_pane_g4

0x7627,	// (0x0006dc1f) main_camera_pane_g5

0x7635,	// (0x0006dc2d) main_camera_pane_g6

0x7643,	// (0x0006dc3b) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00075826) main_camera_pane_g

0x7651,	// (0x0006dc49) main_camera_pane_t1

0x7663,	// (0x0006dc5b) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00075837) main_camera_pane_t

0x7686,	// (0x0006dc7e) cams_zoom_pane_cp_ParamLimits

0x7686,	// (0x0006dc7e) cams_zoom_pane_cp

0x76aa,	// (0x0006dca2) image_cif_pane_ParamLimits

0x76aa,	// (0x0006dca2) image_cif_pane

0x76c8,	// (0x0006dcc0) image_subqcif_pane

0x76d2,	// (0x0006dcca) main_video_pane_g1_ParamLimits

0x76d2,	// (0x0006dcca) main_video_pane_g1

0x76f2,	// (0x0006dcea) main_video_pane_g2_ParamLimits

0x76f2,	// (0x0006dcea) main_video_pane_g2

0x7722,	// (0x0006dd1a) main_video_pane_g3_ParamLimits

0x7722,	// (0x0006dd1a) main_video_pane_g3

0x774b,	// (0x0006dd43) main_video_pane_g4_ParamLimits

0x774b,	// (0x0006dd43) main_video_pane_g4

0x7774,	// (0x0006dd6c) main_video_pane_g5_ParamLimits

0x7774,	// (0x0006dd6c) main_video_pane_g5

0xeaab,	// (0x000750a3) main_video_pane_g6_ParamLimits

0xeaab,	// (0x000750a3) main_video_pane_g6

0x0006,

0xf244,	// (0x0007583c) main_video_pane_g_ParamLimits

0xf244,	// (0x0007583c) main_video_pane_g

0x7796,	// (0x0006dd8e) main_video_pane_t1_ParamLimits

0x7796,	// (0x0006dd8e) main_video_pane_t1

0xeac5,	// (0x000750bd) cams_zoom_pane_g1

0xeace,	// (0x000750c6) cams_zoom_pane_g2

0xead7,	// (0x000750cf) cams_zoom_pane_g3

0xeae0,	// (0x000750d8) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0007584b) cams_zoom_pane_g

0x77e0,	// (0x0006ddd8) grid_cams_pane

0x77ee,	// (0x0006dde6) linegrid_cams_pane

0x77fc,	// (0x0006ddf4) cell_cams_pane_ParamLimits

0x77fc,	// (0x0006ddf4) cell_cams_pane

0xeae9,	// (0x000750e1) cams_burst_image_pane

0xeaf1,	// (0x000750e9) cell_cams_pane_g1

0xe5c2,	// (0x00074bba) grid_highlight_pane_cp03

0xe93d,	// (0x00074f35) mp_bg_pane_g1

0xe5c2,	// (0x00074bba) bg_list_pane_cp03

0x15ff,	// (0x00067bf7) bg_mp_pane

0x1607,	// (0x00067bff) grid_mp_pane

0x160f,	// (0x00067c07) media_player_g1

0x1619,	// (0x00067c11) media_player_t1

0x1627,	// (0x00067c1f) media_player_t2

0x1635,	// (0x00067c2d) media_player_t3

0x1643,	// (0x00067c3b) media_player_t4

0x1651,	// (0x00067c49) media_player_t5

0x165f,	// (0x00067c57) media_player_t6

0x166d,	// (0x00067c65) media_player_t7

0x0006,

0xf5ef,	// (0x00075be7) media_player_t

0x167b,	// (0x00067c73) wait_bar_pane_cp02

0xf5d4,	// (0x00075bcc) main_usb_pane_t

0x96dd,	// (0x0006fcd5) cell_mp_pane

0xe93d,	// (0x00074f35) cell_mp_pane_g1

0xe5c2,	// (0x00074bba) grid_highlight_pane_cp06

0xeaf9,	// (0x000750f1) grid_skin_colour_pane

0xeb01,	// (0x000750f9) list_highlight_pane_cp03

0x7811,	// (0x0006de09) skin_g1

0xeb09,	// (0x00075101) skin_t1

0xeb18,	// (0x00075110) skin_t2

0x0001,

0xf288,	// (0x00075880) skin_t

0x781b,	// (0x0006de13) cell_skin_colour_pane_ParamLimits

0x781b,	// (0x0006de13) cell_skin_colour_pane

0xeb26,	// (0x0007511e) cell_skin_colour_pane_g1

0x789b,	// (0x0006de93) call_video_g1_ParamLimits

0x789b,	// (0x0006de93) call_video_g1

0x78ab,	// (0x0006dea3) call_video_g2_ParamLimits

0x78ab,	// (0x0006dea3) call_video_g2

0x0001,

0xf28d,	// (0x00075885) call_video_g_ParamLimits

0xf28d,	// (0x00075885) call_video_g

0x78fb,	// (0x0006def3) call_video_uplink_pane_cp1_ParamLimits

0x78fb,	// (0x0006def3) call_video_uplink_pane_cp1

0xeb38,	// (0x00075130) call_video_uplink_pane_cp2

0x79c9,	// (0x0006dfc1) video_down_crop_pane_ParamLimits

0x79c9,	// (0x0006dfc1) video_down_crop_pane

0x7abb,	// (0x0006e0b3) video_down_pane_ParamLimits

0x7abb,	// (0x0006e0b3) video_down_pane

0xeb40,	// (0x00075138) video_down_subqcif_pane_ParamLimits

0xeb40,	// (0x00075138) video_down_subqcif_pane

0xeb5a,	// (0x00075152) video_down_subqcif_pane_cp_ParamLimits

0xeb5a,	// (0x00075152) video_down_subqcif_pane_cp

0xeb80,	// (0x00075178) im_reading_pane_ParamLimits

0xeb80,	// (0x00075178) im_reading_pane

0x7bd8,	// (0x0006e1d0) im_writing_pane_ParamLimits

0x7bd8,	// (0x0006e1d0) im_writing_pane

0x7bf6,	// (0x0006e1ee) im_reading_pane_t1

0xeb9a,	// (0x00075192) list_im_pane

0xebab,	// (0x000751a3) scroll_pane_cp07

0x7c3e,	// (0x0006e236) im_writing_pane_t1_ParamLimits

0x7c3e,	// (0x0006e236) im_writing_pane_t1

0xebc4,	// (0x000751bc) im_writing_pane_t2_ParamLimits

0xebc4,	// (0x000751bc) im_writing_pane_t2

0x0001,

0xf297,	// (0x0007588f) im_writing_pane_t_ParamLimits

0xf297,	// (0x0007588f) im_writing_pane_t

0xe5c2,	// (0x00074bba) input_focus_pane_cp04

0xe5c2,	// (0x00074bba) input_focus_pane_cp05

0x7c50,	// (0x0006e248) list_im_single_pane_ParamLimits

0x7c50,	// (0x0006e248) list_im_single_pane

0x7c6c,	// (0x0006e264) list_single_im_pane_t1

0x96a1,	// (0x0006fc99) blid_accuracy_pane

0x96a9,	// (0x0006fca1) blid_compass_pane

0x96b3,	// (0x0006fcab) main_location_t1

0x96c1,	// (0x0006fcb9) main_location_t2

0x96cf,	// (0x0006fcc7) main_location_t3

0x0002,

0xf5fe,	// (0x00075bf6) main_location_t

0xe5c2,	// (0x00074bba) aid_levels_location

0xe93d,	// (0x00074f35) blid_accuracy_pane_g1

0xe93d,	// (0x00074f35) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x000758f1) blid_accuracy_pane_g

0xec0c,	// (0x00075204) wml_content_pane

0xec4a,	// (0x00075242) wml_button_pane_ParamLimits

0xec4a,	// (0x00075242) wml_button_pane

0x7c7b,	// (0x0006e273) wml_list_single_large_pane_ParamLimits

0x7c7b,	// (0x0006e273) wml_list_single_large_pane

0x7c9d,	// (0x0006e295) wml_list_single_medium_pane_ParamLimits

0x7c9d,	// (0x0006e295) wml_list_single_medium_pane

0x7cc3,	// (0x0006e2bb) wml_list_single_small_pane_ParamLimits

0x7cc3,	// (0x0006e2bb) wml_list_single_small_pane

0xec5e,	// (0x00075256) wml_selection_box_pane_ParamLimits

0xec5e,	// (0x00075256) wml_selection_box_pane

0xec71,	// (0x00075269) wml_list_single_pane_t1

0xec80,	// (0x00075278) wml_list_single_medium_pane_t1

0xec8f,	// (0x00075287) wml_list_single_large_pane_t1

0xec9e,	// (0x00075296) input_focus_pane_cp02_ParamLimits

0xec9e,	// (0x00075296) input_focus_pane_cp02

0xecb1,	// (0x000752a9) wml_selection_box_pane_g1

0xecba,	// (0x000752b2) wml_selection_box_pane_t1_ParamLimits

0xecba,	// (0x000752b2) wml_selection_box_pane_t1

0xe81d,	// (0x00074e15) bg_wml_button_pane_ParamLimits

0xe81d,	// (0x00074e15) bg_wml_button_pane

0xecd2,	// (0x000752ca) wml_button_pane_g1

0xecda,	// (0x000752d2) wml_button_pane_t1

0xecd2,	// (0x000752ca) wml_button_bg_pane_g1

0xecea,	// (0x000752e2) wml_button_bg_pane_g2

0xecf2,	// (0x000752ea) wml_button_bg_pane_g3

0xecfa,	// (0x000752f2) wml_button_bg_pane_g4

0xed02,	// (0x000752fa) wml_button_bg_pane_g5

0xed0a,	// (0x00075302) wml_button_bg_pane_g6

0xed12,	// (0x0007530a) wml_button_bg_pane_g7

0xed1a,	// (0x00075312) wml_button_bg_pane_g8

0xed22,	// (0x0007531a) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00075894) wml_button_bg_pane_g

0x7cee,	// (0x0006e2e6) bg_list_pane_cp02

0xed2a,	// (0x00075322) mce_header_pane_ParamLimits

0xed2a,	// (0x00075322) mce_header_pane

0xed40,	// (0x00075338) mce_icon_pane

0xed40,	// (0x00075338) mce_image_pane

0xed49,	// (0x00075341) mce_text_pane_ParamLimits

0xed49,	// (0x00075341) mce_text_pane

0x7cf8,	// (0x0006e2f0) scroll_pane_cp03

0xec42,	// (0x0007523a) scroll_pane_cp04

0xed5c,	// (0x00075354) scroll_pane_cp05_ParamLimits

0xed5c,	// (0x00075354) scroll_pane_cp05

0x7d02,	// (0x0006e2fa) mce_header_field_pane_ParamLimits

0x7d02,	// (0x0006e2fa) mce_header_field_pane

0x7d24,	// (0x0006e31c) mce_header_field_pane_2_ParamLimits

0x7d24,	// (0x0006e31c) mce_header_field_pane_2

0x7d3a,	// (0x0006e332) mce_header_field_pane_3

0x7d42,	// (0x0006e33a) list_single_mce_message_pane_ParamLimits

0x7d42,	// (0x0006e33a) list_single_mce_message_pane

0x7d61,	// (0x0006e359) list_single_mce_smart_pane_ParamLimits

0x7d61,	// (0x0006e359) list_single_mce_smart_pane

0xed68,	// (0x00075360) input_focus_pane_cp03

0xed71,	// (0x00075369) list_header_data_pane

0x7d8b,	// (0x0006e383) mce_header_field_pane_t1

0x7d9b,	// (0x0006e393) list_single_mce_header_pane_ParamLimits

0x7d9b,	// (0x0006e393) list_single_mce_header_pane

0xed79,	// (0x00075371) list_single_mce_header_pane_t1

0xed88,	// (0x00075380) list_single_mce_message_pane_g1

0xed90,	// (0x00075388) list_single_mce_message_pane_t1

0x7dd7,	// (0x0006e3cf) bg_cale_heading_pane_cp01_ParamLimits

0x7dd7,	// (0x0006e3cf) bg_cale_heading_pane_cp01

0xed9e,	// (0x00075396) bg_cale_pane_cp02_ParamLimits

0xed9e,	// (0x00075396) bg_cale_pane_cp02

0x7dfa,	// (0x0006e3f2) cale_month_corner_pane

0x7e10,	// (0x0006e408) cale_month_day_heading_pane_ParamLimits

0x7e10,	// (0x0006e408) cale_month_day_heading_pane

0x7e43,	// (0x0006e43b) cale_month_pane_g1_ParamLimits

0x7e43,	// (0x0006e43b) cale_month_pane_g1

0x7e5f,	// (0x0006e457) cale_month_pane_g2_ParamLimits

0x7e5f,	// (0x0006e457) cale_month_pane_g2

0x7e7a,	// (0x0006e472) cale_month_pane_g3_ParamLimits

0x7e7a,	// (0x0006e472) cale_month_pane_g3

0x7ea6,	// (0x0006e49e) cale_month_pane_g4_ParamLimits

0x7ea6,	// (0x0006e49e) cale_month_pane_g4

0x7ed2,	// (0x0006e4ca) cale_month_pane_g5_ParamLimits

0x7ed2,	// (0x0006e4ca) cale_month_pane_g5

0x7efe,	// (0x0006e4f6) cale_month_pane_g6_ParamLimits

0x7efe,	// (0x0006e4f6) cale_month_pane_g6

0x7f3a,	// (0x0006e532) cale_month_pane_g7_ParamLimits

0x7f3a,	// (0x0006e532) cale_month_pane_g7

0x7f76,	// (0x0006e56e) cale_month_pane_g8_ParamLimits

0x7f76,	// (0x0006e56e) cale_month_pane_g8

0x7fb2,	// (0x0006e5aa) cale_month_pane_g9_ParamLimits

0x7fb2,	// (0x0006e5aa) cale_month_pane_g9

0x7fec,	// (0x0006e5e4) cale_month_pane_g10_ParamLimits

0x7fec,	// (0x0006e5e4) cale_month_pane_g10

0x8026,	// (0x0006e61e) cale_month_pane_g11_ParamLimits

0x8026,	// (0x0006e61e) cale_month_pane_g11

0x8060,	// (0x0006e658) cale_month_pane_g12_ParamLimits

0x8060,	// (0x0006e658) cale_month_pane_g12

0x809a,	// (0x0006e692) cale_month_pane_g13_ParamLimits

0x809a,	// (0x0006e692) cale_month_pane_g13

0x000c,

0xf2af,	// (0x000758a7) cale_month_pane_g_ParamLimits

0xf2af,	// (0x000758a7) cale_month_pane_g

0x80d4,	// (0x0006e6cc) cale_month_week_pane

0x80e7,	// (0x0006e6df) grid_cale_month_pane_ParamLimits

0x80e7,	// (0x0006e6df) grid_cale_month_pane

0x8115,	// (0x0006e70d) cale_month_day_heading_pane_t1

0x8173,	// (0x0006e76b) cale_month_day_heading_pane_t2

0x81d8,	// (0x0006e7d0) cale_month_day_heading_pane_t3

0x823d,	// (0x0006e835) cale_month_day_heading_pane_t4

0x82a2,	// (0x0006e89a) cale_month_day_heading_pane_t5

0x830f,	// (0x0006e907) cale_month_day_heading_pane_t6

0x8384,	// (0x0006e97c) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x000758c2) cale_month_day_heading_pane_t

0xea3a,	// (0x00075032) bg_cale_side_pane_cp01

0x83f9,	// (0x0006e9f1) cale_month_week_pane_t1

0x8424,	// (0x0006ea1c) cale_month_week_pane_t2

0x844f,	// (0x0006ea47) cale_month_week_pane_t3

0x847a,	// (0x0006ea72) cale_month_week_pane_t4

0x84a5,	// (0x0006ea9d) cale_month_week_pane_t5

0x84d0,	// (0x0006eac8) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x000758d1) cale_month_week_pane_t

0x84fb,	// (0x0006eaf3) cell_cale_month_pane_ParamLimits

0x84fb,	// (0x0006eaf3) cell_cale_month_pane

0x85c9,	// (0x0006ebc1) cell_cale_month_pane_g1

0x85d5,	// (0x0006ebcd) cell_cale_month_pane_t1_ParamLimits

0x85d5,	// (0x0006ebcd) cell_cale_month_pane_t1

0xea48,	// (0x00075040) grid_highlight_pane_cp08

0xe93d,	// (0x00074f35) main_smil_g1

0x85f1,	// (0x0006ebe9) smil_status_pane

0xedd3,	// (0x000753cb) smil_text_pane

0x151d,	// (0x00067b15) bg_popup_call3_rect_pane_g8

0x1525,	// (0x00067b1d) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00075b8a) bg_popup_call3_rect_pane_g

0x17cd,	// (0x00067dc5) smil_status_volume_pane_g1

0xeddd,	// (0x000753d5) smil_status_pane_t1

0x9a90,	// (0x00070088) volume_smil_pane

0xedf4,	// (0x000753ec) list_smil_text_pane

0x8604,	// (0x0006ebfc) scroll_pane_cp011

0x860f,	// (0x0006ec07) smil_text_list_pane_t1_ParamLimits

0x860f,	// (0x0006ec07) smil_text_list_pane_t1

0x8673,	// (0x0006ec6b) aid_volume_smil_ParamLimits

0x8673,	// (0x0006ec6b) aid_volume_smil

0xe93d,	// (0x00074f35) smil_volume_pane_g1

0xe93d,	// (0x00074f35) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x000758f1) smil_volume_pane_g

0xe8e8,	// (0x00074ee0) listscroll_cale_day_pane

0xedfe,	// (0x000753f6) bg_cale_pane

0xee16,	// (0x0007540e) list_cale_pane

0xee27,	// (0x0007541f) scroll_pane_cp09

0xee38,	// (0x00075430) cale_bg_pane_g1

0xee40,	// (0x00075438) cale_bg_pane_g2

0xee48,	// (0x00075440) cale_bg_pane_g3

0xee50,	// (0x00075448) cale_bg_pane_g4

0xee58,	// (0x00075450) cale_bg_pane_g5

0xee60,	// (0x00075458) cale_bg_pane_g6

0xee68,	// (0x00075460) cale_bg_pane_g7

0xee70,	// (0x00075468) cale_bg_pane_g8

0xee78,	// (0x00075470) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x000758f6) cale_bg_pane_g

0x8695,	// (0x0006ec8d) list_cale_time_pane_ParamLimits

0x8695,	// (0x0006ec8d) list_cale_time_pane

0x86ad,	// (0x0006eca5) list_cale_time_pane_g1_ParamLimits

0x86ad,	// (0x0006eca5) list_cale_time_pane_g1

0xee80,	// (0x00075478) list_cale_time_pane_g2_ParamLimits

0xee80,	// (0x00075478) list_cale_time_pane_g2

0x86b9,	// (0x0006ecb1) list_cale_time_pane_g3_ParamLimits

0x86b9,	// (0x0006ecb1) list_cale_time_pane_g3

0x86c7,	// (0x0006ecbf) list_cale_time_pane_g4_ParamLimits

0x86c7,	// (0x0006ecbf) list_cale_time_pane_g4

0x86d5,	// (0x0006eccd) list_cale_time_pane_g5_ParamLimits

0x86d5,	// (0x0006eccd) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00075909) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00075909) list_cale_time_pane_g

0x86e3,	// (0x0006ecdb) list_cale_time_pane_t1_ParamLimits

0x86e3,	// (0x0006ecdb) list_cale_time_pane_t1

0x870b,	// (0x0006ed03) list_cale_time_pane_t2_ParamLimits

0x870b,	// (0x0006ed03) list_cale_time_pane_t2

0x8a20,	// (0x0006f018) aid_blid_cardinal_pane

0x8a62,	// (0x0006f05a) compass_pane_t4

0x8733,	// (0x0006ed2b) list_cale_time_pane_t4_ParamLimits

0x8733,	// (0x0006ed2b) list_cale_time_pane_t4

0x8a70,	// (0x0006f068) compass_pane_t5

0x8a80,	// (0x0006f078) compass_pane_t6

0x8a8e,	// (0x0006f086) compass_pane_t7

0x01c1,	// (0x000667b9) navi_pane_cc_t1

0x0328,	// (0x00066920) aid_phob_thumbnail_center_pane

0x9197,	// (0x0006f78f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00075916) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00075916) list_cale_time_pane_t

0x6af0,	// (0x0006d0e8) bg_popup_window_pane_cp02_ParamLimits

0x6af0,	// (0x0006d0e8) bg_popup_window_pane_cp02

0xee9a,	// (0x00075492) heading_pane_cp01_ParamLimits

0xee9a,	// (0x00075492) heading_pane_cp01

0xeea6,	// (0x0007549e) loc_req_pane_ParamLimits

0xeea6,	// (0x0007549e) loc_req_pane

0xeeb6,	// (0x000754ae) loc_type_pane_ParamLimits

0xeeb6,	// (0x000754ae) loc_type_pane

0xeec8,	// (0x000754c0) loc_type_pane_t1_ParamLimits

0xeec8,	// (0x000754c0) loc_type_pane_t1

0xeeda,	// (0x000754d2) loc_type_pane_t2_ParamLimits

0xeeda,	// (0x000754d2) loc_type_pane_t2

0xeeec,	// (0x000754e4) loc_type_pane_t3_ParamLimits

0xeeec,	// (0x000754e4) loc_type_pane_t3

0x0002,

0xf325,	// (0x0007591d) loc_type_pane_t_ParamLimits

0xf325,	// (0x0007591d) loc_type_pane_t

0xeefe,	// (0x000754f6) list_loc_req_pane

0xef08,	// (0x00075500) scroll_pane_cp012

0x875b,	// (0x0006ed53) list_single_loc_request_popup_menu_pane_ParamLimits

0x875b,	// (0x0006ed53) list_single_loc_request_popup_menu_pane

0xef13,	// (0x0007550b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xef13,	// (0x0007550b) list_single_loc_request_popup_menu_pane_g1

0xef1f,	// (0x00075517) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xef1f,	// (0x00075517) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00075924) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00075924) list_single_loc_request_popup_menu_pane_g

0xef2b,	// (0x00075523) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xef2b,	// (0x00075523) list_single_loc_request_popup_menu_pane_t1

0x876d,	// (0x0006ed65) bg_popup_window_pane_cp03_ParamLimits

0x876d,	// (0x0006ed65) bg_popup_window_pane_cp03

0x877b,	// (0x0006ed73) heading_loc_req_pane_ParamLimits

0x877b,	// (0x0006ed73) heading_loc_req_pane

0x8787,	// (0x0006ed7f) popup_dyc_status_message_window_g1_ParamLimits

0x8787,	// (0x0006ed7f) popup_dyc_status_message_window_g1

0x8793,	// (0x0006ed8b) popup_dyc_status_message_window_t1_ParamLimits

0x8793,	// (0x0006ed8b) popup_dyc_status_message_window_t1

0x87a5,	// (0x0006ed9d) popup_dyc_status_message_window_t2_ParamLimits

0x87a5,	// (0x0006ed9d) popup_dyc_status_message_window_t2

0x87b7,	// (0x0006edaf) popup_dyc_status_message_window_t3_ParamLimits

0x87b7,	// (0x0006edaf) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00075929) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00075929) popup_dyc_status_message_window_t

0xe5c2,	// (0x00074bba) bg_heading_pane_cp01

0xef41,	// (0x00075539) heading_loc_req_pane_g1

0xef49,	// (0x00075541) heading_loc_req_pane_g2

0xef5d,	// (0x00075555) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00075930) heading_loc_req_pane_g

0xef65,	// (0x0007555d) heading_loc_req_pane_t1

0xef75,	// (0x0007556d) bg_popup_sub_pane_cp01_ParamLimits

0xef75,	// (0x0007556d) bg_popup_sub_pane_cp01

0xef83,	// (0x0007557b) popup_cale_events_window_g1_ParamLimits

0xef83,	// (0x0007557b) popup_cale_events_window_g1

0xefa3,	// (0x0007559b) popup_cale_events_window_g2_ParamLimits

0xefa3,	// (0x0007559b) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00075964) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00075964) popup_cale_events_window_g

0xefc3,	// (0x000755bb) popup_cale_events_window_t1_ParamLimits

0xefc3,	// (0x000755bb) popup_cale_events_window_t1

0xefd5,	// (0x000755cd) popup_cale_events_window_t2_ParamLimits

0xefd5,	// (0x000755cd) popup_cale_events_window_t2

0xf013,	// (0x0007560b) popup_cale_events_window_t3_ParamLimits

0xf013,	// (0x0007560b) popup_cale_events_window_t3

0xf04d,	// (0x00075645) popup_cale_events_window_t4_ParamLimits

0xf04d,	// (0x00075645) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00075969) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00075969) popup_cale_events_window_t

0x87e1,	// (0x0006edd9) call_type_pane

0x0340,	// (0x00066938) popup_call_status_window_g1

0x87ed,	// (0x0006ede5) popup_call_status_window_g2

0x87f9,	// (0x0006edf1) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00075972) popup_call_status_window_g

0xf083,	// (0x0007567b) call_type_pane_g1

0xf08c,	// (0x00075684) call_type_pane_g2

0x0001,

0xf381,	// (0x00075979) call_type_pane_g

0xe5c2,	// (0x00074bba) bg_popup_sub_pane_cp02

0xf095,	// (0x0007568d) listscroll_popup_wml_pane

0xf09d,	// (0x00075695) list_wml_pane

0xf0a7,	// (0x0007569f) scroll_pane_cp013

0xf0b2,	// (0x000756aa) list_single_graphic_popup_wml_pane_ParamLimits

0xf0b2,	// (0x000756aa) list_single_graphic_popup_wml_pane

0xe93d,	// (0x00074f35) list_single_graphic_popup_wml_pane_g1

0xf0c6,	// (0x000756be) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0007597e) list_single_graphic_popup_wml_pane_g

0xf0ce,	// (0x000756c6) list_single_graphic_popup_wml_pane_t1

0xf0e4,	// (0x000756dc) aid_call_pane

0xe815,	// (0x00074e0d) popup_clock_analogue_window_g1

0xe815,	// (0x00074e0d) popup_clock_analogue_window_g2

0x8805,	// (0x0006edfd) popup_clock_analogue_window_g3

0x8805,	// (0x0006edfd) popup_clock_analogue_window_g4

0xe93d,	// (0x00074f35) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00075983) popup_clock_analogue_window_g

0x880d,	// (0x0006ee05) popup_clock_analogue_window_t1

0x881b,	// (0x0006ee13) clock_digital_number_pane_ParamLimits

0x881b,	// (0x0006ee13) clock_digital_number_pane

0x8827,	// (0x0006ee1f) clock_digital_number_pane_cp02_ParamLimits

0x8827,	// (0x0006ee1f) clock_digital_number_pane_cp02

0x8833,	// (0x0006ee2b) clock_digital_number_pane_cp03_ParamLimits

0x8833,	// (0x0006ee2b) clock_digital_number_pane_cp03

0x883f,	// (0x0006ee37) clock_digital_number_pane_cp04_ParamLimits

0x883f,	// (0x0006ee37) clock_digital_number_pane_cp04

0x884b,	// (0x0006ee43) clock_digital_separator_pane_ParamLimits

0x884b,	// (0x0006ee43) clock_digital_separator_pane

0x8857,	// (0x0006ee4f) popup_clock_digital_window_t1

0xe93d,	// (0x00074f35) clock_digital_number_pane_g1

0xe93d,	// (0x00074f35) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x000758f1) clock_digital_number_pane_g

0xe93d,	// (0x00074f35) clock_digital_separator_pane_g1

0xe93d,	// (0x00074f35) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x000758f1) clock_digital_separator_pane_g

0xe5c2,	// (0x00074bba) bg_popup_window_pane_cp04

0x0021,	// (0x00066619) heading_pane_cp03

0x0029,	// (0x00066621) listscroll_popup_gms_pane

0x0031,	// (0x00066629) grid_large_graphic_popup_pane

0x003b,	// (0x00066633) listscroll_popup_gms_pane_g1

0x0043,	// (0x0006663b) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0007598e) listscroll_popup_gms_pane_g

0xec42,	// (0x0007523a) scroll_pane_cp014

0x8874,	// (0x0006ee6c) cell_large_graphic_popup_pane_ParamLimits

0x8874,	// (0x0006ee6c) cell_large_graphic_popup_pane

0x888e,	// (0x0006ee86) cell_large_graphic_popup_pane_g1_ParamLimits

0x888e,	// (0x0006ee86) cell_large_graphic_popup_pane_g1

0x004b,	// (0x00066643) cell_large_graphic_popup_pane_g2_ParamLimits

0x004b,	// (0x00066643) cell_large_graphic_popup_pane_g2

0x0057,	// (0x0006664f) cell_large_graphic_popup_pane_g3_ParamLimits

0x0057,	// (0x0006664f) cell_large_graphic_popup_pane_g3

0x0064,	// (0x0006665c) cell_large_graphic_popup_pane_g4_ParamLimits

0x0064,	// (0x0006665c) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00075993) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00075993) cell_large_graphic_popup_pane_g

0x0074,	// (0x0006666c) grid_highlight_pane_cp010

0xe93d,	// (0x00074f35) bg_popup_call_pane_g1

0x007e,	// (0x00066676) list_single_graphic_popup_conf_pane_ParamLimits

0x007e,	// (0x00066676) list_single_graphic_popup_conf_pane

0x0090,	// (0x00066688) list_highlight_pane_cp01

0x0099,	// (0x00066691) list_single_graphic_popup_conf_pane_g1

0x00a1,	// (0x00066699) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0007599c) list_single_graphic_popup_conf_pane_g

0x00a9,	// (0x000666a1) list_single_graphic_popup_conf_pane_t1

0x00b7,	// (0x000666af) linegrid_cams_pane_g1

0x889a,	// (0x0006ee92) linegrid_cams_pane_g2

0xea7b,	// (0x00075073) linegrid_cams_pane_g3

0x00c0,	// (0x000666b8) linegrid_cams_pane_g4

0x88a3,	// (0x0006ee9b) linegrid_cams_pane_g5

0x88ac,	// (0x0006eea4) linegrid_cams_pane_g6

0xea84,	// (0x0007507c) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x000759a1) linegrid_cams_pane_g

0x00c9,	// (0x000666c1) popup_clock_analogue_window

0x00c9,	// (0x000666c1) popup_clock_digital_window

0xe5c2,	// (0x00074bba) popup_phob_thumbnail_window

0xe93d,	// (0x00074f35) call_video_uplink_pane_g1

0x00d2,	// (0x000666ca) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x000759b0) call_video_uplink_pane_g

0x00da,	// (0x000666d2) video_uplink_pane

0x00e2,	// (0x000666da) mce_image_pane_g1

0x88b7,	// (0x0006eeaf) mce_image_pane_g2

0x88c1,	// (0x0006eeb9) mce_image_pane_g3

0x88cb,	// (0x0006eec3) mce_image_pane_g4

0x88d3,	// (0x0006eecb) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x000759b5) mce_image_pane_g

0x00ec,	// (0x000666e4) control_top_pane_stacon_cp01_ParamLimits

0x00ec,	// (0x000666e4) control_top_pane_stacon_cp01

0x0100,	// (0x000666f8) uni_indicator_pane_stacon_cp01_ParamLimits

0x0100,	// (0x000666f8) uni_indicator_pane_stacon_cp01

0x0111,	// (0x00066709) bg_popup_sub_pane_cp03

0x88db,	// (0x0006eed3) chi_dic_find_pane

0x88e3,	// (0x0006eedb) listscroll_chi_dic_pane

0x88ec,	// (0x0006eee4) main_pane_chidic_g1

0x88ff,	// (0x0006eef7) chi_dic_find_pane_t1

0x011b,	// (0x00066713) find_chidic_pane

0x0124,	// (0x0006671c) chi_dic_list_pane_ParamLimits

0x0124,	// (0x0006671c) chi_dic_list_pane

0x0135,	// (0x0006672d) scroll_pane_cp020

0x890d,	// (0x0006ef05) find_chidic_pane_t1

0xe5c2,	// (0x00074bba) input_focus_pane_cp06

0x891c,	// (0x0006ef14) list_chi_dic_pane_ParamLimits

0x891c,	// (0x0006ef14) list_chi_dic_pane

0x8934,	// (0x0006ef2c) list_chi_dic_pane_t1_ParamLimits

0x8934,	// (0x0006ef2c) list_chi_dic_pane_t1

0xe5c2,	// (0x00074bba) list_highlight_pane_cp020

0x013d,	// (0x00066735) bg_cale_heading_pane_g1

0x8947,	// (0x0006ef3f) bg_cale_heading_pane_g2

0x894f,	// (0x0006ef47) bg_cale_heading_pane_g3

0x8957,	// (0x0006ef4f) bg_cale_heading_pane_g4

0x8961,	// (0x0006ef59) bg_cale_heading_pane_g5

0x896b,	// (0x0006ef63) bg_cale_heading_pane_g6

0x8973,	// (0x0006ef6b) bg_cale_heading_pane_g7

0x897b,	// (0x0006ef73) bg_cale_heading_pane_g8

0x8985,	// (0x0006ef7d) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x000759c0) bg_cale_heading_pane_g

0x013d,	// (0x00066735) bg_cale_side_pane_g1

0x898f,	// (0x0006ef87) bg_cale_side_pane_g2

0x8997,	// (0x0006ef8f) bg_cale_side_pane_g3

0x899f,	// (0x0006ef97) bg_cale_side_pane_g4

0x89a7,	// (0x0006ef9f) bg_cale_side_pane_g5

0x89af,	// (0x0006efa7) bg_cale_side_pane_g6

0x89b7,	// (0x0006efaf) bg_cale_side_pane_g7

0x89bf,	// (0x0006efb7) bg_cale_side_pane_g8

0x89c7,	// (0x0006efbf) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x000759d3) bg_cale_side_pane_g

0x89cf,	// (0x0006efc7) popup_call_status_window_ParamLimits

0x89cf,	// (0x0006efc7) popup_call_status_window

0x0145,	// (0x0006673d) stacon_top_pane

0x014d,	// (0x00066745) status_pane_ParamLimits

0x014d,	// (0x00066745) status_pane

0x0162,	// (0x0006675a) status_small_pane

0x016a,	// (0x00066762) control_pane

0xe5c2,	// (0x00074bba) stacon_bottom_pane

0x0172,	// (0x0006676a) list_single_mce_smart_pane_t1_ParamLimits

0x0172,	// (0x0006676a) list_single_mce_smart_pane_t1

0x0185,	// (0x0006677d) list_single_mce_smart_pane_t2_ParamLimits

0x0185,	// (0x0006677d) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x000759e6) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x000759e6) list_single_mce_smart_pane_t

0x89db,	// (0x0006efd3) compass_pane

0x89e6,	// (0x0006efde) main_location2_pane_t1

0x89fa,	// (0x0006eff2) main_location2_pane_t2

0x89fa,	// (0x0006eff2) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x000759eb) main_location2_pane_t

0x01a4,	// (0x0006679c) compass_pane_g1_ParamLimits

0x01a4,	// (0x0006679c) compass_pane_g1

0x8a44,	// (0x0006f03c) compass_pane_t1

0x8a53,	// (0x0006f04b) compass_pane_t2

0x0005,

0xf3fc,	// (0x000759f4) compass_pane_t

0x8a9e,	// (0x0006f096) text_secondary_cp61

0x01b8,	// (0x000667b0) navi_pane_cams_g5

0x01db,	// (0x000667d3) navi_pane_im_t1

0x01e9,	// (0x000667e1) navi_pane_mp_g1_ParamLimits

0x01e9,	// (0x000667e1) navi_pane_mp_g1

0x01fd,	// (0x000667f5) navi_pane_mp_g2_ParamLimits

0x01fd,	// (0x000667f5) navi_pane_mp_g2

0x0209,	// (0x00066801) navi_pane_mp_g3_ParamLimits

0x0209,	// (0x00066801) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00075a08) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00075a08) navi_pane_mp_g

0x0215,	// (0x0006680d) navi_pane_mp_t1

0x0223,	// (0x0006681b) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00075a0f) navi_pane_mp_t

0x025f,	// (0x00066857) navi_pane_vt_g1

0x0215,	// (0x0006680d) navi_pane_vt_t1

0x0267,	// (0x0006685f) navi_slider_pane

0x026f,	// (0x00066867) zooming_pane

0x0277,	// (0x0006686f) navi_slider_pane_g1

0x8bb5,	// (0x0006f1ad) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00075a16) navi_slider_pane_g

0x02ad,	// (0x000668a5) aid_levels_zoom

0x02b5,	// (0x000668ad) zooming_pane_g1

0x02bd,	// (0x000668b5) zooming_pane_g2

0x02bd,	// (0x000668b5) zooming_pane_g3

0x0002,

0xf42d,	// (0x00075a25) zooming_pane_g

0x02c5,	// (0x000668bd) level_10_zoom

0x02ce,	// (0x000668c6) level_11_zoom

0x02d7,	// (0x000668cf) level_1_zoom

0x02e0,	// (0x000668d8) level_2_zoom

0x02e9,	// (0x000668e1) level_3_zoom

0x02f2,	// (0x000668ea) level_4_zoom

0x02fb,	// (0x000668f3) level_5_zoom

0x0304,	// (0x000668fc) level_6_zoom

0x030d,	// (0x00066905) level_7_zoom

0x0316,	// (0x0006690e) level_8_zoom

0x031f,	// (0x00066917) level_9_zoom

0x0330,	// (0x00066928) popup_phob_thumbnail_window_g1

0x0338,	// (0x00066930) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00075a2c) popup_phob_thumbnail_window_g

0x1683,	// (0x00067c7b) level_1_location

0x168b,	// (0x00067c83) level_2_location

0x1693,	// (0x00067c8b) level_3_location

0x169b,	// (0x00067c93) level_4_location

0x026f,	// (0x00066867) level_5_location

0x8bc7,	// (0x0006f1bf) mce_icon_pane_g1

0x8bcf,	// (0x0006f1c7) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00075a31) mce_icon_pane_g

0x8bd7,	// (0x0006f1cf) main_mup_pane_g1_ParamLimits

0x8bd7,	// (0x0006f1cf) main_mup_pane_g1

0x8bef,	// (0x0006f1e7) main_mup_pane_g2_ParamLimits

0x8bef,	// (0x0006f1e7) main_mup_pane_g2

0x8c0b,	// (0x0006f203) main_mup_pane_g3_ParamLimits

0x8c0b,	// (0x0006f203) main_mup_pane_g3

0x8c27,	// (0x0006f21f) main_mup_pane_g4_ParamLimits

0x8c27,	// (0x0006f21f) main_mup_pane_g4

0x8c3b,	// (0x0006f233) main_mup_pane_g5_ParamLimits

0x8c3b,	// (0x0006f233) main_mup_pane_g5

0x8c5c,	// (0x0006f254) main_mup_pane_g6_ParamLimits

0x8c5c,	// (0x0006f254) main_mup_pane_g6

0x8c7c,	// (0x0006f274) main_mup_pane_g7_ParamLimits

0x8c7c,	// (0x0006f274) main_mup_pane_g7

0x8ca0,	// (0x0006f298) main_mup_pane_g8_ParamLimits

0x8ca0,	// (0x0006f298) main_mup_pane_g8

0x8cc4,	// (0x0006f2bc) main_mup_pane_g9_ParamLimits

0x8cc4,	// (0x0006f2bc) main_mup_pane_g9

0x8ce7,	// (0x0006f2df) main_mup_pane_g10_ParamLimits

0x8ce7,	// (0x0006f2df) main_mup_pane_g10

0x8d0a,	// (0x0006f302) main_mup_pane_g11_ParamLimits

0x8d0a,	// (0x0006f302) main_mup_pane_g11

0x8d2a,	// (0x0006f322) main_mup_pane_g12_ParamLimits

0x8d2a,	// (0x0006f322) main_mup_pane_g12

0x8d38,	// (0x0006f330) main_mup_pane_g13_ParamLimits

0x8d38,	// (0x0006f330) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00075a36) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00075a36) main_mup_pane_g

0x8d4e,	// (0x0006f346) main_mup_pane_t1_ParamLimits

0x8d4e,	// (0x0006f346) main_mup_pane_t1

0x8d6d,	// (0x0006f365) main_mup_pane_t2_ParamLimits

0x8d6d,	// (0x0006f365) main_mup_pane_t2

0x8d87,	// (0x0006f37f) main_mup_pane_t3_ParamLimits

0x8d87,	// (0x0006f37f) main_mup_pane_t3

0x8da1,	// (0x0006f399) main_mup_pane_t4_ParamLimits

0x8da1,	// (0x0006f399) main_mup_pane_t4

0x8db3,	// (0x0006f3ab) main_mup_pane_t5_ParamLimits

0x8db3,	// (0x0006f3ab) main_mup_pane_t5

0x8dc5,	// (0x0006f3bd) main_mup_pane_t6_ParamLimits

0x8dc5,	// (0x0006f3bd) main_mup_pane_t6

0x0005,

0xf459,	// (0x00075a51) main_mup_pane_t_ParamLimits

0xf459,	// (0x00075a51) main_mup_pane_t

0x8ddb,	// (0x0006f3d3) mup_progress_pane_ParamLimits

0x8ddb,	// (0x0006f3d3) mup_progress_pane

0x8de7,	// (0x0006f3df) mup_visualizer_pane_ParamLimits

0x8de7,	// (0x0006f3df) mup_visualizer_pane

0x8e25,	// (0x0006f41d) mup_volume_pane_ParamLimits

0x8e25,	// (0x0006f41d) mup_volume_pane

0x0340,	// (0x00066938) mup_visualizer_pane_g1_ParamLimits

0x0340,	// (0x00066938) mup_visualizer_pane_g1

0x0340,	// (0x00066938) mup_visualizer_pane_g2_ParamLimits

0x0340,	// (0x00066938) mup_visualizer_pane_g2

0x01a4,	// (0x0006679c) mup_visualizer_pane_g3_ParamLimits

0x01a4,	// (0x0006679c) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00075a5e) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00075a5e) mup_visualizer_pane_g

0xe93d,	// (0x00074f35) mup_volume_pane_g1

0x0356,	// (0x0006694e) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00075a65) mup_volume_pane_g

0xe93d,	// (0x00074f35) mup_progress_pane_g1

0x035f,	// (0x00066957) mup_progress_pane_g2

0x0368,	// (0x00066960) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00075a6a) mup_progress_pane_g

0xe5c2,	// (0x00074bba) bg_popup_window_pane_cp05

0x0371,	// (0x00066969) heading_pane_cp02_ParamLimits

0x0371,	// (0x00066969) heading_pane_cp02

0x038d,	// (0x00066985) list_popup_blid_pane

0x0395,	// (0x0006698d) list_blid_sat_info_pane_ParamLimits

0x0395,	// (0x0006698d) list_blid_sat_info_pane

0x03a8,	// (0x000669a0) list_blid_sat_info_pane_g1

0x03b0,	// (0x000669a8) list_blid_sat_info_pane_t1

0x8f44,	// (0x0006f53c) mup_equalizer_pane_ParamLimits

0x8f44,	// (0x0006f53c) mup_equalizer_pane

0x8f65,	// (0x0006f55d) mup_equalizer_pane_cp1_ParamLimits

0x8f65,	// (0x0006f55d) mup_equalizer_pane_cp1

0x8f86,	// (0x0006f57e) mup_equalizer_pane_cp2_ParamLimits

0x8f86,	// (0x0006f57e) mup_equalizer_pane_cp2

0x8fa7,	// (0x0006f59f) mup_equalizer_pane_cp3_ParamLimits

0x8fa7,	// (0x0006f59f) mup_equalizer_pane_cp3

0x8fcc,	// (0x0006f5c4) mup_equalizer_pane_cp4_ParamLimits

0x8fcc,	// (0x0006f5c4) mup_equalizer_pane_cp4

0x8ff1,	// (0x0006f5e9) mup_equalizer_pane_cp5

0x9009,	// (0x0006f601) mup_equalizer_pane_cp6

0x9021,	// (0x0006f619) mup_equalizer_pane_cp7

0x159d,	// (0x00067b95) bg_popup_call_poc_act_pane_g9

0x15a5,	// (0x00067b9d) bg_popup_call_poc_act_pane_g10

0x15ad,	// (0x00067ba5) bg_popup_call_poc_act_pane_g11

0x000a,

0xe81d,	// (0x00074e15) mup_scale_pane

0xe93d,	// (0x00074f35) mup_scale_pane_g1

0x03be,	// (0x000669b6) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00075a86) mup_scale_pane_g

0x03e2,	// (0x000669da) msg_data_pane

0x03ea,	// (0x000669e2) scroll_pane_cp017

0x57ef,	// (0x0006bde7) bg_list_pane_cp04_ParamLimits

0x57ef,	// (0x0006bde7) bg_list_pane_cp04

0x03f2,	// (0x000669ea) msg_data_pane_g1

0x904b,	// (0x0006f643) msg_data_pane_g2

0x9055,	// (0x0006f64d) msg_data_pane_g3

0x905f,	// (0x0006f657) msg_data_pane_g4

0x9067,	// (0x0006f65f) msg_data_pane_g5

0x906f,	// (0x0006f667) msg_data_pane_g6

0x9077,	// (0x0006f66f) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00075a95) msg_data_pane_g

0x5817,	// (0x0006be0f) msg_text_pane_ParamLimits

0x5817,	// (0x0006be0f) msg_text_pane

0x907f,	// (0x0006f677) qrid_highlight_pane_cp011_ParamLimits

0x907f,	// (0x0006f677) qrid_highlight_pane_cp011

0xe5c2,	// (0x00074bba) msg_body_pane

0xe5c2,	// (0x00074bba) msg_header_pane

0x0403,	// (0x000669fb) input_focus_pane_cp07

0x5851,	// (0x0006be49) msg_header_pane_t1_ParamLimits

0x5851,	// (0x0006be49) msg_header_pane_t1

0x5865,	// (0x0006be5d) msg_header_pane_t2_ParamLimits

0x5865,	// (0x0006be5d) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00075aa9) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00075aa9) msg_header_pane_t

0x0418,	// (0x00066a10) msg_body_pane_g1

0x5877,	// (0x0006be6f) msg_body_pane_t1_ParamLimits

0x5877,	// (0x0006be6f) msg_body_pane_t1

0x58a8,	// (0x0006bea0) msg_body_pane_t2_ParamLimits

0x58a8,	// (0x0006bea0) msg_body_pane_t2

0x58ba,	// (0x0006beb2) msg_body_pane_t3_ParamLimits

0x58ba,	// (0x0006beb2) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00075aae) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00075aae) msg_body_pane_t

0x90e7,	// (0x0006f6df) main_viewer_pane_g1_ParamLimits

0x90e7,	// (0x0006f6df) main_viewer_pane_g1

0x90f3,	// (0x0006f6eb) main_viewer_pane_g2_ParamLimits

0x90f3,	// (0x0006f6eb) main_viewer_pane_g2

0x90ff,	// (0x0006f6f7) main_viewer_pane_g3_ParamLimits

0x90ff,	// (0x0006f6f7) main_viewer_pane_g3

0x9110,	// (0x0006f708) main_viewer_pane_g4_ParamLimits

0x9110,	// (0x0006f708) main_viewer_pane_g4

0x9121,	// (0x0006f719) main_viewer_pane_g5_ParamLimits

0x9121,	// (0x0006f719) main_viewer_pane_g5

0x9121,	// (0x0006f719) main_viewer_pane_g7_ParamLimits

0x9121,	// (0x0006f719) main_viewer_pane_g7

0x9133,	// (0x0006f72b) main_viewer_pane_g8_ParamLimits

0x9133,	// (0x0006f72b) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00075abe) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00075abe) main_viewer_pane_g

0x0462,	// (0x00066a5a) viewer_content_pane_ParamLimits

0x0462,	// (0x00066a5a) viewer_content_pane

0x916b,	// (0x0006f763) main_postcard_pane_g1_ParamLimits

0x916b,	// (0x0006f763) main_postcard_pane_g1

0x9179,	// (0x0006f771) main_postcard_pane_g2_ParamLimits

0x9179,	// (0x0006f771) main_postcard_pane_g2

0x9187,	// (0x0006f77f) main_postcard_pane_g3_ParamLimits

0x9187,	// (0x0006f77f) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00075acf) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00075acf) main_postcard_pane_g

0x9197,	// (0x0006f78f) main_postcard_pane_g4

0x17ba,	// (0x00067db2) smil_status_volume_pane_g2

0x91c3,	// (0x0006f7bb) postcard_pane_ParamLimits

0x91c3,	// (0x0006f7bb) postcard_pane

0x0340,	// (0x00066938) postcard_pane_g1_ParamLimits

0x0340,	// (0x00066938) postcard_pane_g1

0x91fd,	// (0x0006f7f5) postcard_pane_g2_ParamLimits

0x91fd,	// (0x0006f7f5) postcard_pane_g2

0x9209,	// (0x0006f801) postcard_pane_g3_ParamLimits

0x9209,	// (0x0006f801) postcard_pane_g3

0x047e,	// (0x00066a76) postcard_pane_g4_ParamLimits

0x047e,	// (0x00066a76) postcard_pane_g4

0x9215,	// (0x0006f80d) postcard_pane_g5_ParamLimits

0x9215,	// (0x0006f80d) postcard_pane_g5

0x9221,	// (0x0006f819) postcard_pane_g6_ParamLimits

0x9221,	// (0x0006f819) postcard_pane_g6

0x0470,	// (0x00066a68) postcard_pane_g7_ParamLimits

0x0470,	// (0x00066a68) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00075adc) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00075adc) postcard_pane_g

0x922f,	// (0x0006f827) main_mp2_pane_g1_ParamLimits

0x922f,	// (0x0006f827) main_mp2_pane_g1

0x923d,	// (0x0006f835) main_mp2_pane_g2_ParamLimits

0x923d,	// (0x0006f835) main_mp2_pane_g2

0x9249,	// (0x0006f841) main_mp2_pane_g3_ParamLimits

0x9249,	// (0x0006f841) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00075aeb) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00075aeb) main_mp2_pane_g

0x9255,	// (0x0006f84d) main_mp2_pane_t1_ParamLimits

0x9255,	// (0x0006f84d) main_mp2_pane_t1

0x926c,	// (0x0006f864) main_mp2_pane_t2_ParamLimits

0x926c,	// (0x0006f864) main_mp2_pane_t2

0x9280,	// (0x0006f878) main_mp2_pane_t3_ParamLimits

0x9280,	// (0x0006f878) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00075af2) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00075af2) main_mp2_pane_t

0x048c,	// (0x00066a84) pec_content_pane_ParamLimits

0x048c,	// (0x00066a84) pec_content_pane

0xec42,	// (0x0007523a) scroll_pane_cp015

0x049e,	// (0x00066a96) pec_attribute_pane_ParamLimits

0x049e,	// (0x00066a96) pec_attribute_pane

0x9292,	// (0x0006f88a) pec_content_pane_g1_ParamLimits

0x9292,	// (0x0006f88a) pec_content_pane_g1

0x04ae,	// (0x00066aa6) pec_content_pane_t1_ParamLimits

0x04ae,	// (0x00066aa6) pec_content_pane_t1

0x04c0,	// (0x00066ab8) pec_content_pane_t2_ParamLimits

0x04c0,	// (0x00066ab8) pec_content_pane_t2

0x0001,

0xf501,	// (0x00075af9) pec_content_pane_t_ParamLimits

0xf501,	// (0x00075af9) pec_content_pane_t

0x929e,	// (0x0006f896) list_single_graphic_pane_cp01_ParamLimits

0x929e,	// (0x0006f896) list_single_graphic_pane_cp01

0xe81d,	// (0x00074e15) bg_popup_sub_pane_cp04

0x04d2,	// (0x00066aca) popup_mup_playback_window_g1

0x04de,	// (0x00066ad6) popup_mup_playback_window_t1

0x04f3,	// (0x00066aeb) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00075afe) popup_mup_playback_window_t

0x052a,	// (0x00066b22) main_image_pane_g1_ParamLimits

0x052a,	// (0x00066b22) main_image_pane_g1

0x056d,	// (0x00066b65) scroll_pane_cp018_ParamLimits

0x056d,	// (0x00066b65) scroll_pane_cp018

0x0585,	// (0x00066b7d) scroll_pane_cp016_ParamLimits

0x0585,	// (0x00066b7d) scroll_pane_cp016

0x932f,	// (0x0006f927) smil2_image_pane_ParamLimits

0x932f,	// (0x0006f927) smil2_image_pane

0x9365,	// (0x0006f95d) smil2_root_pane_ParamLimits

0x9365,	// (0x0006f95d) smil2_root_pane

0x9391,	// (0x0006f989) smil2_text_pane_ParamLimits

0x9391,	// (0x0006f989) smil2_text_pane

0xe5c2,	// (0x00074bba) bg_list_pane_cp06

0x05c1,	// (0x00066bb9) grid_radio_pane

0xe5c2,	// (0x00074bba) bg_popup_window_pane_cp06

0x05cb,	// (0x00066bc3) main_fmradio_pane_t1

0x0021,	// (0x00066619) heading_pane_cp04

0x05d9,	// (0x00066bd1) main_fmradio_pane_t2

0x15b5,	// (0x00067bad) popup_cale_lunar_info_window_g1

0x05e7,	// (0x00066bdf) main_fmradio_pane_t3

0x15bd,	// (0x00067bb5) popup_cale_lunar_info_window_g2

0x05f7,	// (0x00066bef) main_fmradio_pane_t4

0x0001,

0x0605,	// (0x00066bfd) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00075bd9) popup_cale_lunar_info_window_g

0xf51b,	// (0x00075b13) main_fmradio_pane_t

0x0613,	// (0x00066c0b) wait_bar_pane_cp03

0x061b,	// (0x00066c13) cell_fmradio_pane_ParamLimits

0x061b,	// (0x00066c13) cell_fmradio_pane

0x0470,	// (0x00066a68) cell_fmradio_pane_g1_ParamLimits

0x0470,	// (0x00066a68) cell_fmradio_pane_g1

0xe5c2,	// (0x00074bba) grid_highlight_pane_cp011

0x0630,	// (0x00066c28) poc_content_pane_ParamLimits

0x0630,	// (0x00066c28) poc_content_pane

0x0642,	// (0x00066c3a) scroll_pane_cp019

0x93d1,	// (0x0006f9c9) popup_call_poc_act_window_ParamLimits

0x93d1,	// (0x0006f9c9) popup_call_poc_act_window

0x93de,	// (0x0006f9d6) popup_call_poc_inact_window_ParamLimits

0x93de,	// (0x0006f9d6) popup_call_poc_inact_window

0xf5b8,	// (0x00075bb0) bg_popup_call_poc_act_pane_g

0x152d,	// (0x00067b25) bg_popup_call_poc_inact_pane_g1

0x1535,	// (0x00067b2d) bg_popup_call_poc_inact_pane_g2

0x064a,	// (0x00066c42) popup_call_poc_act_window_g2

0x153d,	// (0x00067b35) bg_popup_call_poc_inact_pane_g3

0x1545,	// (0x00067b3d) bg_popup_call_poc_inact_pane_g4

0x154d,	// (0x00067b45) bg_popup_call_poc_inact_pane_g5

0x0652,	// (0x00066c4a) popup_call_poc_act_window_t1_ParamLimits

0x0652,	// (0x00066c4a) popup_call_poc_act_window_t1

0x067a,	// (0x00066c72) popup_call_poc_act_window_t2_ParamLimits

0x067a,	// (0x00066c72) popup_call_poc_act_window_t2

0x06a2,	// (0x00066c9a) popup_call_poc_act_window_t3_ParamLimits

0x06a2,	// (0x00066c9a) popup_call_poc_act_window_t3

0x06ca,	// (0x00066cc2) popup_call_poc_act_window_t4_ParamLimits

0x06ca,	// (0x00066cc2) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00075b1e) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00075b1e) popup_call_poc_act_window_t

0x1555,	// (0x00067b4d) bg_popup_call_poc_inact_pane_g6

0x155d,	// (0x00067b55) bg_popup_call_poc_inact_pane_g7

0x1565,	// (0x00067b5d) bg_popup_call_poc_inact_pane_g8

0x06dc,	// (0x00066cd4) popup_call_poc_inact_window_g2

0x156d,	// (0x00067b65) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00075b9d) bg_popup_call_poc_inact_pane_g

0x06e4,	// (0x00066cdc) popup_call_poc_inact_window_t1_ParamLimits

0x06e4,	// (0x00066cdc) popup_call_poc_inact_window_t1

0x06f9,	// (0x00066cf1) popup_call_poc_inact_window_t2_ParamLimits

0x06f9,	// (0x00066cf1) popup_call_poc_inact_window_t2

0x070e,	// (0x00066d06) popup_call_poc_inact_window_t3_ParamLimits

0x070e,	// (0x00066d06) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00075b27) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00075b27) popup_call_poc_inact_window_t

0x172d,	// (0x00067d25) context_pane_ParamLimits

0x99fe,	// (0x0006fff6) signal_pane_ParamLimits

0x026f,	// (0x00066867) main_call2_pane

0x171b,	// (0x00067d13) popup_phob_thumbnail2_window_ParamLimits

0x171b,	// (0x00067d13) popup_phob_thumbnail2_window

0x9095,	// (0x0006f68d) aid_hotspot_pointer_arrow_pane

0x909d,	// (0x0006f695) aid_hotspot_pointer_hand_pane

0x9706,	// (0x0006fcfe) phob_pre_status_pane_g5

0x75d6,	// (0x0006dbce) cams_zoom_pane_ParamLimits

0x75e2,	// (0x0006dbda) image_vga_pane_ParamLimits

0x75f1,	// (0x0006dbe9) main_camera_pane_g1_ParamLimits

0x75ff,	// (0x0006dbf7) main_camera_pane_g2_ParamLimits

0x760b,	// (0x0006dc03) main_camera_pane_g3_ParamLimits

0x7619,	// (0x0006dc11) main_camera_pane_g4_ParamLimits

0x7627,	// (0x0006dc1f) main_camera_pane_g5_ParamLimits

0x7635,	// (0x0006dc2d) main_camera_pane_g6_ParamLimits

0x7643,	// (0x0006dc3b) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00075826) main_camera_pane_g_ParamLimits

0x7651,	// (0x0006dc49) main_camera_pane_t1_ParamLimits

0x7663,	// (0x0006dc5b) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00075837) main_camera_pane_t_ParamLimits

0xe81d,	// (0x00074e15) bg_popup_preview_window_pane_cp01_ParamLimits

0xe81d,	// (0x00074e15) bg_popup_preview_window_pane_cp01

0x0723,	// (0x00066d1b) popup_phob_thumbnail2_window_g1_ParamLimits

0x0723,	// (0x00066d1b) popup_phob_thumbnail2_window_g1

0xe5c2,	// (0x00074bba) call2_cli_visual_pane

0x93fa,	// (0x0006f9f2) popup_call2_audio_conf_window_ParamLimits

0x93fa,	// (0x0006f9f2) popup_call2_audio_conf_window

0x9413,	// (0x0006fa0b) popup_call2_audio_first_window_ParamLimits

0x9413,	// (0x0006fa0b) popup_call2_audio_first_window

0x94b1,	// (0x0006faa9) popup_call2_audio_in_window_ParamLimits

0x94b1,	// (0x0006faa9) popup_call2_audio_in_window

0x94f5,	// (0x0006faed) popup_call2_audio_out_window_ParamLimits

0x94f5,	// (0x0006faed) popup_call2_audio_out_window

0x955f,	// (0x0006fb57) popup_call2_audio_second_window_ParamLimits

0x955f,	// (0x0006fb57) popup_call2_audio_second_window

0x95bd,	// (0x0006fbb5) popup_call2_audio_wait_window_ParamLimits

0x95bd,	// (0x0006fbb5) popup_call2_audio_wait_window

0xe5c2,	// (0x00074bba) bg_popup_call2_act_pane_cp03

0xe7ff,	// (0x00074df7) list_conf_pane_cp

0x072f,	// (0x00066d27) popup_call2_audio_conf_window_t1

0x073d,	// (0x00066d35) list_single_graphic_popup_conf2_pane_ParamLimits

0x073d,	// (0x00066d35) list_single_graphic_popup_conf2_pane

0x0090,	// (0x00066688) list_highlight_pane_cp04

0x0750,	// (0x00066d48) list_single_graphic_popup_conf2_pane_g1

0x00a1,	// (0x00066699) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00075b2e) list_single_graphic_popup_conf2_pane_g

0x075a,	// (0x00066d52) list_single_graphic_popup_conf2_pane_t1

0x0768,	// (0x00066d60) bg_popup_call2_act_pane_cp01_ParamLimits

0x0768,	// (0x00066d60) bg_popup_call2_act_pane_cp01

0x07f2,	// (0x00066dea) call_type_pane_cp05_ParamLimits

0x07f2,	// (0x00066dea) call_type_pane_cp05

0x0846,	// (0x00066e3e) popup_call2_audio_second_window_g1_ParamLimits

0x0846,	// (0x00066e3e) popup_call2_audio_second_window_g1

0x089a,	// (0x00066e92) popup_call2_audio_second_window_g2_ParamLimits

0x089a,	// (0x00066e92) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00075b33) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00075b33) popup_call2_audio_second_window_g

0x08ff,	// (0x00066ef7) popup_call2_audio_second_window_t1_ParamLimits

0x08ff,	// (0x00066ef7) popup_call2_audio_second_window_t1

0x09ba,	// (0x00066fb2) popup_call2_audio_second_window_t2_ParamLimits

0x09ba,	// (0x00066fb2) popup_call2_audio_second_window_t2

0x0a0d,	// (0x00067005) popup_call2_audio_second_window_t3_ParamLimits

0x0a0d,	// (0x00067005) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00075b3a) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00075b3a) popup_call2_audio_second_window_t

0xe5c2,	// (0x00074bba) bg_popup_call2_in_pane_cp02

0xe5cc,	// (0x00074bc4) call_type_pane_cp04

0xe5d4,	// (0x00074bcc) popup_call2_audio_wait_window_g1

0xe5dc,	// (0x00074bd4) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00075713) popup_call2_audio_wait_window_g

0xe5e4,	// (0x00074bdc) popup_call2_audio_wait_window_t3

0x0b00,	// (0x000670f8) bg_popup_call2_act_pane_ParamLimits

0x0b00,	// (0x000670f8) bg_popup_call2_act_pane

0x0bc0,	// (0x000671b8) call_type_pane_cp03_ParamLimits

0x0bc0,	// (0x000671b8) call_type_pane_cp03

0x0c24,	// (0x0006721c) popup_call2_audio_first_window_g1_ParamLimits

0x0c24,	// (0x0006721c) popup_call2_audio_first_window_g1

0x0c94,	// (0x0006728c) popup_call2_audio_first_window_g2_ParamLimits

0x0c94,	// (0x0006728c) popup_call2_audio_first_window_g2

0x0340,	// (0x00066938) popup_call2_audio_first_window_g3_ParamLimits

0x0340,	// (0x00066938) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00075b43) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00075b43) popup_call2_audio_first_window_g

0x0d72,	// (0x0006736a) popup_call2_audio_first_window_t1_ParamLimits

0x0d72,	// (0x0006736a) popup_call2_audio_first_window_t1

0x0e75,	// (0x0006746d) popup_call2_audio_first_window_t4_ParamLimits

0x0e75,	// (0x0006746d) popup_call2_audio_first_window_t4

0x0f58,	// (0x00067550) popup_call2_audio_first_window_t5_ParamLimits

0x0f58,	// (0x00067550) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00075b4e) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00075b4e) popup_call2_audio_first_window_t

0xe815,	// (0x00074e0d) bg_popup_call2_act_pane_g1

0x15c7,	// (0x00067bbf) popup_cale_lunar_info_window_t1

0x15d5,	// (0x00067bcd) popup_cale_lunar_info_window_t2

0x15e3,	// (0x00067bdb) popup_cale_lunar_info_window_t3

0xe5c2,	// (0x00074bba) bg_popup_call2_bubble_pane

0x1059,	// (0x00067651) bg_popup_call2_in_pane_cp01_ParamLimits

0x1059,	// (0x00067651) bg_popup_call2_in_pane_cp01

0xe27e,	// (0x00074876) call_type_pane_cp02

0x10a1,	// (0x00067699) popup_call2_audio_out_window_g1_ParamLimits

0x10a1,	// (0x00067699) popup_call2_audio_out_window_g1

0x10cd,	// (0x000676c5) popup_call2_audio_out_window_g2_ParamLimits

0x10cd,	// (0x000676c5) popup_call2_audio_out_window_g2

0x10f5,	// (0x000676ed) popup_call2_audio_out_window_g3_ParamLimits

0x10f5,	// (0x000676ed) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00075b57) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00075b57) popup_call2_audio_out_window_g

0x1130,	// (0x00067728) popup_call2_audio_out_window_t1_ParamLimits

0x1130,	// (0x00067728) popup_call2_audio_out_window_t1

0x118f,	// (0x00067787) popup_call2_audio_out_window_t2_ParamLimits

0x118f,	// (0x00067787) popup_call2_audio_out_window_t2

0x11e3,	// (0x000677db) popup_call2_audio_out_window_t3_ParamLimits

0x11e3,	// (0x000677db) popup_call2_audio_out_window_t3

0x11f9,	// (0x000677f1) popup_call2_audio_out_window_t4_ParamLimits

0x11f9,	// (0x000677f1) popup_call2_audio_out_window_t4

0x120f,	// (0x00067807) popup_call2_audio_out_window_t5_ParamLimits

0x120f,	// (0x00067807) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00075b60) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00075b60) popup_call2_audio_out_window_t

0x1273,	// (0x0006786b) bg_popup_call2_in_pane_ParamLimits

0x1273,	// (0x0006786b) bg_popup_call2_in_pane

0x12cf,	// (0x000678c7) popup_call2_audio_in_window_g1_ParamLimits

0x12cf,	// (0x000678c7) popup_call2_audio_in_window_g1

0x1307,	// (0x000678ff) popup_call2_audio_in_window_g2_ParamLimits

0x1307,	// (0x000678ff) popup_call2_audio_in_window_g2

0x133f,	// (0x00067937) popup_call2_audio_in_window_g3_ParamLimits

0x133f,	// (0x00067937) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00075b6d) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00075b6d) popup_call2_audio_in_window_g

0x1397,	// (0x0006798f) popup_call2_audio_in_window_t1_ParamLimits

0x1397,	// (0x0006798f) popup_call2_audio_in_window_t1

0x1417,	// (0x00067a0f) popup_call2_audio_in_window_t2_ParamLimits

0x1417,	// (0x00067a0f) popup_call2_audio_in_window_t2

0x1497,	// (0x00067a8f) popup_call2_audio_in_window_t3_ParamLimits

0x1497,	// (0x00067a8f) popup_call2_audio_in_window_t3

0x14b1,	// (0x00067aa9) popup_call2_audio_in_window_t4_ParamLimits

0x14b1,	// (0x00067aa9) popup_call2_audio_in_window_t4

0x14c3,	// (0x00067abb) popup_call2_audio_in_window_t5_ParamLimits

0x14c3,	// (0x00067abb) popup_call2_audio_in_window_t5

0x14d8,	// (0x00067ad0) popup_call2_audio_in_window_t6_ParamLimits

0x14d8,	// (0x00067ad0) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00075b76) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00075b76) popup_call2_audio_in_window_t

0xe815,	// (0x00074e0d) bg_popup_call2_in_pane_g1

0x15f1,	// (0x00067be9) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00075bde) popup_cale_lunar_info_window_t

0xe81d,	// (0x00074e15) bg_popup_call2_rect_pane_ParamLimits

0xe81d,	// (0x00074e15) bg_popup_call2_rect_pane

0xe5c2,	// (0x00074bba) call2_cli_visual_graphic_pane

0xe5c2,	// (0x00074bba) call2_cli_visual_text_pane

0x9a83,	// (0x0007007b) smil_status_volume_pane_g3

0x0002,

0xe93d,	// (0x00074f35) call2_cli_visual_graphic_pane_g1

0xe93d,	// (0x00074f35) call2_cli_visual_graphic_pane_g2

0xe93d,	// (0x00074f35) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00075b83) call2_cli_visual_graphic_pane_g

0x14ed,	// (0x00067ae5) bg_popup_call2_rect_pane_g1

0xe9db,	// (0x00074fd3) bg_popup_call2_rect_pane_g2

0x14f5,	// (0x00067aed) bg_popup_call2_rect_pane_g3

0x14fd,	// (0x00067af5) bg_popup_call2_rect_pane_g4

0x1505,	// (0x00067afd) bg_popup_call2_rect_pane_g5

0x150d,	// (0x00067b05) bg_popup_call2_rect_pane_g6

0x1515,	// (0x00067b0d) bg_popup_call2_rect_pane_g7

0x151d,	// (0x00067b15) bg_popup_call2_rect_pane_g8

0x1525,	// (0x00067b1d) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00075b8a) bg_popup_call2_rect_pane_g

0x152d,	// (0x00067b25) bg_popup_call2_bubble_pane_g1

0x1535,	// (0x00067b2d) bg_popup_call2_bubble_pane_g2

0x153d,	// (0x00067b35) bg_popup_call2_bubble_pane_g3

0x1545,	// (0x00067b3d) bg_popup_call2_bubble_pane_g4

0x154d,	// (0x00067b45) bg_popup_call2_bubble_pane_g5

0x1555,	// (0x00067b4d) bg_popup_call2_bubble_pane_g6

0x155d,	// (0x00067b55) bg_popup_call2_bubble_pane_g7

0x1565,	// (0x00067b5d) bg_popup_call2_bubble_pane_g8

0x156d,	// (0x00067b65) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00075b9d) bg_popup_call2_bubble_pane_g

0x706d,	// (0x0006d665) aid_cale_week_size_cell_pane

0x7677,	// (0x0006dc6f) aid_cams_cif_uncrop_pane_ParamLimits

0x7677,	// (0x0006dc6f) aid_cams_cif_uncrop_pane

0x77d4,	// (0x0006ddcc) aid_cams_size_cell_ParamLimits

0x77d4,	// (0x0006ddcc) aid_cams_size_cell

0x77e0,	// (0x0006ddd8) grid_cams_pane_ParamLimits

0x77ee,	// (0x0006dde6) linegrid_cams_pane_ParamLimits

0x78c1,	// (0x0006deb9) call_video_pane_t1

0x78de,	// (0x0006ded6) call_video_pane_t2

0x0001,

0xf292,	// (0x0007588a) call_video_pane_t

0x7db9,	// (0x0006e3b1) aid_cale_month_size_cell_pane_ParamLimits

0x7db9,	// (0x0006e3b1) aid_cale_month_size_cell_pane

0xf62f,	// (0x00075c27) smil_status_volume_pane_g

0x9a90,	// (0x00070088) volume_smil_pane_ParamLimits

0x674b,	// (0x0006cd43) aid_popup2_width_pane

0x6f89,	// (0x0006d581) cell_qdial_pane_g4_ParamLimits

0x6f89,	// (0x0006d581) cell_qdial_pane_g4

0x8a20,	// (0x0006f018) aid_blid_cardinal_pane_ParamLimits

0x8a30,	// (0x0006f028) aid_blid_destination_pane_ParamLimits

0x8a30,	// (0x0006f028) aid_blid_destination_pane

0xe81d,	// (0x00074e15) bg_popup_call_poc_act_pane_ParamLimits

0xe81d,	// (0x00074e15) bg_popup_call_poc_act_pane

0xe81d,	// (0x00074e15) bg_popup_call_poc_inact_pane_ParamLimits

0xe81d,	// (0x00074e15) bg_popup_call_poc_inact_pane

0x1575,	// (0x00067b6d) bg_popup_call_poc_act_pane_g1

0x157d,	// (0x00067b75) bg_popup_call_poc_act_pane_g2

0x1585,	// (0x00067b7d) bg_popup_call_poc_act_pane_g3

0x1545,	// (0x00067b3d) bg_popup_call_poc_act_pane_g4

0x154d,	// (0x00067b45) bg_popup_call_poc_act_pane_g5

0x158d,	// (0x00067b85) bg_popup_call_poc_act_pane_g6

0x155d,	// (0x00067b55) bg_popup_call_poc_act_pane_g7

0x1595,	// (0x00067b8d) bg_popup_call_poc_act_pane_g8

0xe5c2,	// (0x00074bba) main_usb_pane

0x16f2,	// (0x00067cea) popup_cale_lunar_info_window

0x7bf6,	// (0x0006e1ee) im_reading_pane_t1_ParamLimits

0xeb9a,	// (0x00075192) list_im_pane_ParamLimits

0xebab,	// (0x000751a3) scroll_pane_cp07_ParamLimits

0xe5c2,	// (0x00074bba) grid_highlight_pane_cp012

0xe81d,	// (0x00074e15) mup_scale_pane_ParamLimits

0x0340,	// (0x00066938) main_usb_pane_g1_ParamLimits

0x0340,	// (0x00066938) main_usb_pane_g1

0x9629,	// (0x0006fc21) main_usb_pane_g2_ParamLimits

0x9629,	// (0x0006fc21) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00075bc7) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00075bc7) main_usb_pane_g

0x9635,	// (0x0006fc2d) main_usb_pane_t1_ParamLimits

0x9635,	// (0x0006fc2d) main_usb_pane_t1

0x9647,	// (0x0006fc3f) main_usb_pane_t2_ParamLimits

0x9647,	// (0x0006fc3f) main_usb_pane_t2

0x9659,	// (0x0006fc51) main_usb_pane_t3_ParamLimits

0x9659,	// (0x0006fc51) main_usb_pane_t3

0x966b,	// (0x0006fc63) main_usb_pane_t4_ParamLimits

0x966b,	// (0x0006fc63) main_usb_pane_t4

0x967d,	// (0x0006fc75) main_usb_pane_t5_ParamLimits

0x967d,	// (0x0006fc75) main_usb_pane_t5

0x968f,	// (0x0006fc87) main_usb_pane_t6_ParamLimits

0x968f,	// (0x0006fc87) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x00075bcc) main_usb_pane_t_ParamLimits

0x89db,	// (0x0006efd3) aid_text_placing

0x89e6,	// (0x0006efde) main_location2_pane_t1_ParamLimits

0x89fa,	// (0x0006eff2) main_location2_pane_t2_ParamLimits

0x89fa,	// (0x0006eff2) main_location2_pane_t3_ParamLimits

0x8a0e,	// (0x0006f006) main_location2_pane_t4_ParamLimits

0x8a0e,	// (0x0006f006) main_location2_pane_t4

0xf3f3,	// (0x000759eb) main_location2_pane_t_ParamLimits

0xe859,	// (0x00074e51) find_pinb_pane_g2_ParamLimits

0xe859,	// (0x00074e51) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00075739) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00075739) find_pinb_pane_g

0xe865,	// (0x00074e5d) find_pinb_pane_t1_ParamLimits

0xe877,	// (0x00074e6f) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0007573e) find_pinb_pane_t_ParamLimits

0xe5c2,	// (0x00074bba) main_call3_pane

0x8115,	// (0x0006e70d) cale_month_day_heading_pane_t1_ParamLimits

0x8173,	// (0x0006e76b) cale_month_day_heading_pane_t2_ParamLimits

0x81d8,	// (0x0006e7d0) cale_month_day_heading_pane_t3_ParamLimits

0x823d,	// (0x0006e835) cale_month_day_heading_pane_t4_ParamLimits

0x82a2,	// (0x0006e89a) cale_month_day_heading_pane_t5_ParamLimits

0x830f,	// (0x0006e907) cale_month_day_heading_pane_t6_ParamLimits

0x8384,	// (0x0006e97c) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x000758c2) cale_month_day_heading_pane_t_ParamLimits

0xedeb,	// (0x000753e3) smil_status_volume_pane

0x91e1,	// (0x0006f7d9) postcard_address_pane_ParamLimits

0x91e1,	// (0x0006f7d9) postcard_address_pane

0x91ef,	// (0x0006f7e7) postcard_message_pane_ParamLimits

0x91ef,	// (0x0006f7e7) postcard_message_pane

0x95fc,	// (0x0006fbf4) call2_cli_visual_pane_t1_ParamLimits

0x95fc,	// (0x0006fbf4) call2_cli_visual_pane_t1

0x9bd6,	// (0x000701ce) postcard_message_pane_t1_ParamLimits

0x9bd6,	// (0x000701ce) postcard_message_pane_t1

0x1802,	// (0x00067dfa) postcard_address_pane_t1_ParamLimits

0x1802,	// (0x00067dfa) postcard_address_pane_t1

0x9bc7,	// (0x000701bf) popup_call3_audio_in_window_ParamLimits

0x9bc7,	// (0x000701bf) popup_call3_audio_in_window

0x9aa5,	// (0x0007009d) bg_popup_call3_in_pane_ParamLimits

0x9aa5,	// (0x0007009d) bg_popup_call3_in_pane

0x9b0d,	// (0x00070105) popup_call3_audio_in_window_g1_ParamLimits

0x9b0d,	// (0x00070105) popup_call3_audio_in_window_g1

0x9b25,	// (0x0007011d) popup_call3_audio_in_window_g2_ParamLimits

0x9b25,	// (0x0007011d) popup_call3_audio_in_window_g2

0x9b3d,	// (0x00070135) popup_call3_audio_in_window_g3_ParamLimits

0x9b3d,	// (0x00070135) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x00075c2e) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x00075c2e) popup_call3_audio_in_window_g

0x9b65,	// (0x0007015d) popup_call3_audio_in_window_t1_ParamLimits

0x9b65,	// (0x0007015d) popup_call3_audio_in_window_t1

0x9b8d,	// (0x00070185) popup_call3_audio_in_window_t2_ParamLimits

0x9b8d,	// (0x00070185) popup_call3_audio_in_window_t2

0x9bb5,	// (0x000701ad) popup_call3_audio_in_window_t3_ParamLimits

0x9bb5,	// (0x000701ad) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00075c37) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00075c37) popup_call3_audio_in_window_t

0x026f,	// (0x00066867) bg_popup_call3_rect_pane

0x14ed,	// (0x00067ae5) bg_popup_call3_rect_pane_g1

0xe9db,	// (0x00074fd3) bg_popup_call3_rect_pane_g2

0x14f5,	// (0x00067aed) bg_popup_call3_rect_pane_g3

0x14fd,	// (0x00067af5) bg_popup_call3_rect_pane_g4

0x1505,	// (0x00067afd) bg_popup_call3_rect_pane_g5

0x150d,	// (0x00067b05) bg_popup_call3_rect_pane_g6

0x1515,	// (0x00067b0d) bg_popup_call3_rect_pane_g7

0x8e40,	// (0x0006f438) mup_visualizer_osc_pane

0x034e,	// (0x00066946) mup_visualizer_spec_pane

0x9ac5,	// (0x000700bd) call3_video_qcif_pane_ParamLimits

0x9ac5,	// (0x000700bd) call3_video_qcif_pane

0x9ad7,	// (0x000700cf) call3_video_qcif_uncrop_pane_ParamLimits

0x9ad7,	// (0x000700cf) call3_video_qcif_uncrop_pane

0x9ae7,	// (0x000700df) call3_video_subqcif_pane_ParamLimits

0x9ae7,	// (0x000700df) call3_video_subqcif_pane

0x9afb,	// (0x000700f3) call3_video_subqcif_uncrop_pane_ParamLimits

0x9afb,	// (0x000700f3) call3_video_subqcif_uncrop_pane

0x9b55,	// (0x0007014d) popup_call3_audio_in_window_g4_ParamLimits

0x9b55,	// (0x0007014d) popup_call3_audio_in_window_g4

0x9a72,	// (0x0007006a) mup_spec_half_pane

0x9a7b,	// (0x00070073) mup_spec_half_pane_cp

0x17a0,	// (0x00067d98) mup_osc_middle_pane

0x17a9,	// (0x00067da1) mup_visualizer_osc_pane_g1

0x9a52,	// (0x0007004a) mup_spec_bar_pane_ParamLimits

0x9a52,	// (0x0007004a) mup_spec_bar_pane

0x178d,	// (0x00067d85) mup_spec_bar_pane_g1

0x1797,	// (0x00067d8f) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00075c22) mup_spec_bar_pane_g

0x706d,	// (0x0006d665) aid_cale_week_size_cell_pane_ParamLimits

0x7080,	// (0x0006d678) bg_cale_heading_pane_ParamLimits

0xea0f,	// (0x00075007) bg_cale_pane_cp01_ParamLimits

0x7094,	// (0x0006d68c) cale_week_corner_pane_ParamLimits

0x70aa,	// (0x0006d6a2) cale_week_day_heading_pane_ParamLimits

0x70be,	// (0x0006d6b6) cale_week_scroll_pane_g1_ParamLimits

0x70cf,	// (0x0006d6c7) cale_week_scroll_pane_g2_ParamLimits

0x70e0,	// (0x0006d6d8) cale_week_scroll_pane_g3_ParamLimits

0x70f1,	// (0x0006d6e9) cale_week_scroll_pane_g4_ParamLimits

0x7102,	// (0x0006d6fa) cale_week_scroll_pane_g5_ParamLimits

0x7113,	// (0x0006d70b) cale_week_scroll_pane_g6_ParamLimits

0x7126,	// (0x0006d71e) cale_week_scroll_pane_g7_ParamLimits

0x7139,	// (0x0006d731) cale_week_scroll_pane_g8_ParamLimits

0x714c,	// (0x0006d744) cale_week_scroll_pane_g9_ParamLimits

0x715d,	// (0x0006d755) cale_week_scroll_pane_g10_ParamLimits

0x716e,	// (0x0006d766) cale_week_scroll_pane_g11_ParamLimits

0x717f,	// (0x0006d777) cale_week_scroll_pane_g12_ParamLimits

0x7190,	// (0x0006d788) cale_week_scroll_pane_g13_ParamLimits

0x71a1,	// (0x0006d799) cale_week_scroll_pane_g14_ParamLimits

0x71b2,	// (0x0006d7aa) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x000757ca) cale_week_scroll_pane_g_ParamLimits

0x71c3,	// (0x0006d7bb) cale_week_time_pane_ParamLimits

0x71d6,	// (0x0006d7ce) grid_cale_week_pane_ParamLimits

0xea28,	// (0x00075020) listscroll_cale_week_pane_t1

0x71eb,	// (0x0006d7e3) scroll_pane_cp08_ParamLimits

0x7dfa,	// (0x0006e3f2) cale_month_corner_pane_ParamLimits

0xedc1,	// (0x000753b9) cale_month_pane_t1

0x80d4,	// (0x0006e6cc) cale_month_week_pane_ParamLimits

0x0340,	// (0x00066938) popup_call_status_window_g1_ParamLimits

0x87ed,	// (0x0006ede5) popup_call_status_window_g2_ParamLimits

0x87f9,	// (0x0006edf1) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00075972) popup_call_status_window_g_ParamLimits

0xf0dc,	// (0x000756d4) aid_call2_pane

0x5843,	// (0x0006be3b) msg_header_pane_g1

0x91e1,	// (0x0006f7d9) postcard_address2_pane_ParamLimits

0x91e1,	// (0x0006f7d9) postcard_address2_pane

0x91ef,	// (0x0006f7e7) postcard_message2_pane_ParamLimits

0x91ef,	// (0x0006f7e7) postcard_message2_pane

0x9a0c,	// (0x00070004) message2_row_pane_ParamLimits

0x9a0c,	// (0x00070004) message2_row_pane

0x1748,	// (0x00067d40) address2_row_pane_ParamLimits

0x1748,	// (0x00067d40) address2_row_pane

0x175b,	// (0x00067d53) postcard_message2_row_pane_g1

0x1763,	// (0x00067d5b) postcard_message2_row_pane_t1

0x175b,	// (0x00067d53) address2_row_pane_g1

0x1763,	// (0x00067d5b) address2_row_pane_t1

0x7535,	// (0x0006db2d) aid_size_cell_vorec

0xe5c2,	// (0x00074bba) main_rss_pane

0x9a26,	// (0x0007001e) rss_list_single_pane_ParamLimits

0x9a26,	// (0x0007001e) rss_list_single_pane

0x1771,	// (0x00067d69) rss_list_single_pane_t1

0x177f,	// (0x00067d77) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x00075c1d) rss_list_single_pane_t

0xe5c2,	// (0x00074bba) main_camera2_pane

0xe5c2,	// (0x00074bba) main_video2_pane

0x9c3a,	// (0x00070232) cams_zoom_pane_cp2_ParamLimits

0x9c3a,	// (0x00070232) cams_zoom_pane_cp2

0x9c46,	// (0x0007023e) image2_vga_pane_ParamLimits

0x9c46,	// (0x0007023e) image2_vga_pane

0x9c55,	// (0x0007024d) main_camera2_pane_g1_ParamLimits

0x9c55,	// (0x0007024d) main_camera2_pane_g1

0x9c61,	// (0x00070259) main_camera2_pane_g2_ParamLimits

0x9c61,	// (0x00070259) main_camera2_pane_g2

0x9c6d,	// (0x00070265) main_camera2_pane_g3_ParamLimits

0x9c6d,	// (0x00070265) main_camera2_pane_g3

0x9c79,	// (0x00070271) main_camera2_pane_g4_ParamLimits

0x9c79,	// (0x00070271) main_camera2_pane_g4

0x9c85,	// (0x0007027d) main_camera2_pane_g5_ParamLimits

0x9c85,	// (0x0007027d) main_camera2_pane_g5

0x9c91,	// (0x00070289) main_camera2_pane_g6_ParamLimits

0x9c91,	// (0x00070289) main_camera2_pane_g6

0x9c9d,	// (0x00070295) main_camera2_pane_g7_ParamLimits

0x9c9d,	// (0x00070295) main_camera2_pane_g7

0x9ca9,	// (0x000702a1) main_camera2_pane_g8_ParamLimits

0x9ca9,	// (0x000702a1) main_camera2_pane_g8

0x0008,

0xf646,	// (0x00075c3e) main_camera2_pane_g_ParamLimits

0xf646,	// (0x00075c3e) main_camera2_pane_g

0x9cc1,	// (0x000702b9) main_camera2_pane_t1_ParamLimits

0x9cc1,	// (0x000702b9) main_camera2_pane_t1

0x9cd3,	// (0x000702cb) main_camera2_pane_t2_ParamLimits

0x9cd3,	// (0x000702cb) main_camera2_pane_t2

0x9ce5,	// (0x000702dd) main_camera2_pane_t3_ParamLimits

0x9ce5,	// (0x000702dd) main_camera2_pane_t3

0x9cf7,	// (0x000702ef) main_camera2_pane_t4_ParamLimits

0x9cf7,	// (0x000702ef) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00075c51) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00075c51) main_camera2_pane_t

0x9d54,	// (0x0007034c) cams_zoom_pane_cp4_ParamLimits

0x9d54,	// (0x0007034c) cams_zoom_pane_cp4

0x9d64,	// (0x0007035c) image2_cif_pane_ParamLimits

0x9d64,	// (0x0007035c) image2_cif_pane

0x9d79,	// (0x00070371) image2_subqcif_pane_ParamLimits

0x9d79,	// (0x00070371) image2_subqcif_pane

0x9d88,	// (0x00070380) main_video2_pane_g1_ParamLimits

0x9d88,	// (0x00070380) main_video2_pane_g1

0x9d9a,	// (0x00070392) main_video2_pane_g2_ParamLimits

0x9d9a,	// (0x00070392) main_video2_pane_g2

0x9daa,	// (0x000703a2) main_video2_pane_g3_ParamLimits

0x9daa,	// (0x000703a2) main_video2_pane_g3

0x9dba,	// (0x000703b2) main_video2_pane_g4_ParamLimits

0x9dba,	// (0x000703b2) main_video2_pane_g4

0x9dca,	// (0x000703c2) main_video2_pane_g5_ParamLimits

0x9dca,	// (0x000703c2) main_video2_pane_g5

0x9dda,	// (0x000703d2) main_video2_pane_g6_ParamLimits

0x9dda,	// (0x000703d2) main_video2_pane_g6

0x0005,

0xf668,	// (0x00075c60) main_video2_pane_g_ParamLimits

0xf668,	// (0x00075c60) main_video2_pane_g

0x9dec,	// (0x000703e4) main_video2_pane_t1_ParamLimits

0x9dec,	// (0x000703e4) main_video2_pane_t1

0x9e06,	// (0x000703fe) main_video2_pane_t2_ParamLimits

0x9e06,	// (0x000703fe) main_video2_pane_t2

0x9e2c,	// (0x00070424) main_video2_pane_t3_ParamLimits

0x9e2c,	// (0x00070424) main_video2_pane_t3

0x0002,

0xf675,	// (0x00075c6d) main_video2_pane_t_ParamLimits

0xf675,	// (0x00075c6d) main_video2_pane_t

0x9746,	// (0x0006fd3e) call_muted_g2

0x0001,

0xf617,	// (0x00075c0f) call_muted_g

0xe5c2,	// (0x00074bba) main_mup2_pane

0x1872,	// (0x00067e6a) main_mup2_pane_g1_ParamLimits

0x1872,	// (0x00067e6a) main_mup2_pane_g1

0x9e52,	// (0x0007044a) main_mup2_pane_g2_ParamLimits

0x9e52,	// (0x0007044a) main_mup2_pane_g2

0xa0e4,	// (0x000706dc) main_mup_pane_g13_cp1

0xa0ec,	// (0x000706e4) mup_volume_pane_cp1

0x9e74,	// (0x0007046c) main_mup2_pane_g4_ParamLimits

0x9e74,	// (0x0007046c) main_mup2_pane_g4

0x9e89,	// (0x00070481) main_mup2_pane_g5_ParamLimits

0x9e89,	// (0x00070481) main_mup2_pane_g5

0x9e9e,	// (0x00070496) main_mup2_pane_g6_ParamLimits

0x9e9e,	// (0x00070496) main_mup2_pane_g6

0x9eb3,	// (0x000704ab) main_mup2_pane_g7_ParamLimits

0x9eb3,	// (0x000704ab) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00075c74) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00075c74) main_mup2_pane_g

0x9ecf,	// (0x000704c7) main_mup2_pane_t1_ParamLimits

0x9ecf,	// (0x000704c7) main_mup2_pane_t1

0x9ee6,	// (0x000704de) main_mup2_pane_t2_ParamLimits

0x9ee6,	// (0x000704de) main_mup2_pane_t2

0x9efd,	// (0x000704f5) main_mup2_pane_t3_ParamLimits

0x9efd,	// (0x000704f5) main_mup2_pane_t3

0x9f14,	// (0x0007050c) main_mup2_pane_t4_ParamLimits

0x9f14,	// (0x0007050c) main_mup2_pane_t4

0x9f2e,	// (0x00070526) main_mup2_pane_t5_ParamLimits

0x9f2e,	// (0x00070526) main_mup2_pane_t5

0x9f48,	// (0x00070540) main_mup2_pane_t6_ParamLimits

0x9f48,	// (0x00070540) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00075c83) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00075c83) main_mup2_pane_t

0x9f80,	// (0x00070578) mup2_visualizer_pane_ParamLimits

0x9f80,	// (0x00070578) mup2_visualizer_pane

0x9fb6,	// (0x000705ae) mup_progress_pane_cp_ParamLimits

0x9fb6,	// (0x000705ae) mup_progress_pane_cp

0xa0cf,	// (0x000706c7) mup_volume_pane_cp_ParamLimits

0xa0cf,	// (0x000706c7) mup_volume_pane_cp

0x9fcf,	// (0x000705c7) mup2_visualizer_pane_g1_ParamLimits

0x9fcf,	// (0x000705c7) mup2_visualizer_pane_g1

0x1844,	// (0x00067e3c) mup2_visualizer_pane_g2_ParamLimits

0x1844,	// (0x00067e3c) mup2_visualizer_pane_g2

0x9fe4,	// (0x000705dc) mup2_visualizer_pane_g3_ParamLimits

0x9fe4,	// (0x000705dc) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00075c90) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00075c90) mup2_visualizer_pane_g

0x05b9,	// (0x00066bb1) aid_size_cell_fmradio

0x985c,	// (0x0006fe54) aid_height_parent_landcape

0xec29,	// (0x00075221) wml_content_pane_cp

0xec31,	// (0x00075229) wml_tabs_pane

0xec3a,	// (0x00075232) popup_wml_miniature_window

0xec42,	// (0x0007523a) scroll_pane_cp021

0xec56,	// (0x0007524e) wml_content_pane_comp8

0xe5c2,	// (0x00074bba) bg_popup_sub_pane_cp05

0x1862,	// (0x00067e5a) popup_wml_miniature_window_g1

0x186a,	// (0x00067e62) wml_miniature_view_pane

0x9ff2,	// (0x000705ea) aid_size_wml_view

0x9ffa,	// (0x000705f2) wml_miniature_view_pane_g1

0xa003,	// (0x000705fb) wml_miniature_view_pane_g2

0xa00c,	// (0x00070604) wml_miniature_view_pane_g3

0xa014,	// (0x0007060c) wml_miniature_view_pane_g4

0xa01c,	// (0x00070614) wml_miniature_view_pane_g5

0xa024,	// (0x0007061c) wml_miniature_view_pane_g6

0xa02c,	// (0x00070624) wml_miniature_view_pane_g7

0xa034,	// (0x0007062c) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00075c97) wml_miniature_view_pane_g

0x1872,	// (0x00067e6a) background_graphic_ParamLimits

0x1872,	// (0x00067e6a) background_graphic

0x187e,	// (0x00067e76) wml_tabs_2_pane

0x1887,	// (0x00067e7f) wml_tabs_3_pane_ParamLimits

0x1887,	// (0x00067e7f) wml_tabs_3_pane

0x1899,	// (0x00067e91) wml_tabs_4_pane_ParamLimits

0x1899,	// (0x00067e91) wml_tabs_4_pane

0x18af,	// (0x00067ea7) wml_tabs_5_pane_ParamLimits

0x18af,	// (0x00067ea7) wml_tabs_5_pane

0x18c9,	// (0x00067ec1) wml_tabs_pane_g2_ParamLimits

0x18c9,	// (0x00067ec1) wml_tabs_pane_g2

0x18dd,	// (0x00067ed5) wml_tabs_pane_g3_ParamLimits

0x18dd,	// (0x00067ed5) wml_tabs_pane_g3

0xa03c,	// (0x00070634) wml_tabs_2_active_pane_ParamLimits

0xa03c,	// (0x00070634) wml_tabs_2_active_pane

0xa04e,	// (0x00070646) wml_tabs_2_passive_pane_ParamLimits

0xa04e,	// (0x00070646) wml_tabs_2_passive_pane

0xa060,	// (0x00070658) wml_tabs_3_active_pane_cp_ParamLimits

0xa060,	// (0x00070658) wml_tabs_3_active_pane_cp

0xa073,	// (0x0007066b) wml_tabs_3_passive_pane_ParamLimits

0xa073,	// (0x0007066b) wml_tabs_3_passive_pane

0xa084,	// (0x0007067c) wml_tabs_3_passive_pane_cp_ParamLimits

0xa084,	// (0x0007067c) wml_tabs_3_passive_pane_cp

0xa099,	// (0x00070691) tabs_4_active_pane

0xa0a1,	// (0x00070699) tabs_4_passive_pane

0xa0a9,	// (0x000706a1) tabs_4_passive_pane_cp

0xa0b1,	// (0x000706a9) tabs_4_passive_pane_cp2

0x9621,	// (0x0006fc19) aid_height_text

0x8e09,	// (0x0006f401) mup_volume_cont_pane_ParamLimits

0x8e09,	// (0x0006f401) mup_volume_cont_pane

0x6bec,	// (0x0006d1e4) aid_size_cell_pinb

0x6bf6,	// (0x0006d1ee) aid_size_list_pinb

0x9f9f,	// (0x00070597) mup2_volume_cont_pane_ParamLimits

0x9f9f,	// (0x00070597) mup2_volume_cont_pane

0xa0bb,	// (0x000706b3) mup2_volume_cont_pane_g1_ParamLimits

0xa0bb,	// (0x000706b3) mup2_volume_cont_pane_g1

0x6757,	// (0x0006cd4f) aid_size_cell_touch_ParamLimits

0x6757,	// (0x0006cd4f) aid_size_cell_touch

0x69f7,	// (0x0006cfef) touch_pane_ParamLimits

0x69f7,	// (0x0006cfef) touch_pane

0x6739,	// (0x0006cd31) main_rss2_pane

0x1933,	// (0x00067f2b) listscroll_rss2_pane

0x193c,	// (0x00067f34) rss2_navigation_pane

0x1944,	// (0x00067f3c) list_rss2_pane

0x0135,	// (0x0006672d) scroll_pane_cp22

0x194c,	// (0x00067f44) rss2_navigation_pane_g1

0x1955,	// (0x00067f4d) rss2_navigation_pane_g2

0x195d,	// (0x00067f55) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x00075ca8) rss2_navigation_pane_g

0x1965,	// (0x00067f5d) rss2_navigation_pane_t1

0xa0f4,	// (0x000706ec) rss2_list_single_pane_ParamLimits

0xa0f4,	// (0x000706ec) rss2_list_single_pane

0x1973,	// (0x00067f6b) rss2_list_single_pane_t2

0x1981,	// (0x00067f79) rss2_list_single_pane_t3_ParamLimits

0x1981,	// (0x00067f79) rss2_list_single_pane_t3

0x199e,	// (0x00067f96) rss2_list_single_pane_t4

0x85fc,	// (0x0006ebf4) smil_status_pane_g1

0x9873,	// (0x0006fe6b) main_image2_pane_ParamLimits

0x9873,	// (0x0006fe6b) main_image2_pane

0x9cb5,	// (0x000702ad) main_camera2_pane_g9_ParamLimits

0x9cb5,	// (0x000702ad) main_camera2_pane_g9

0x9d09,	// (0x00070301) main_camera2_pane_t5_ParamLimits

0x9d09,	// (0x00070301) main_camera2_pane_t5

0x9d1b,	// (0x00070313) main_camera2_pane_t6_ParamLimits

0x9d1b,	// (0x00070313) main_camera2_pane_t6

0xa11a,	// (0x00070712) main_image2_pane_g1_ParamLimits

0xa11a,	// (0x00070712) main_image2_pane_g1

0x93bb,	// (0x0006f9b3) smil2_video_pane_ParamLimits

0x93bb,	// (0x0006f9b3) smil2_video_pane

0x55c9,	// (0x0006bbc1) aid_zoom_text_primary_cp

0x69a8,	// (0x0006cfa0) popup_preview_fixed_window

0xeb92,	// (0x0007518a) im_reading_pane_g1

0x9bff,	// (0x000701f7) cams2_bc_adjust_pane_cp_ParamLimits

0x9bff,	// (0x000701f7) cams2_bc_adjust_pane_cp

0x9d46,	// (0x0007033e) cams2_bc_adjust_pane_ParamLimits

0x9d46,	// (0x0007033e) cams2_bc_adjust_pane

0xa126,	// (0x0007071e) cams2_bc_adjust_pane_g1

0xa12e,	// (0x00070726) cams2_slider_pane

0xa137,	// (0x0007072f) cams2_slider_pane_g1

0xa140,	// (0x00070738) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00075caf) cams2_slider_pane_g

0x6ce9,	// (0x0006d2e1) calc_display_pane_ParamLimits

0x6d07,	// (0x0006d2ff) calc_paper_pane_ParamLimits

0x6d23,	// (0x0006d31b) grid_calc_pane_ParamLimits

0x8857,	// (0x0006ee4f) popup_clock_digital_window_t1_ParamLimits

0x0556,	// (0x00066b4e) main_image_pane_t1

0x6ccf,	// (0x0006d2c7) aid_size_cell_calc_ParamLimits

0x6ccf,	// (0x0006d2c7) aid_size_cell_calc

0x989c,	// (0x0006fe94) popup_blid_sat_info2_window_ParamLimits

0x989c,	// (0x0006fe94) popup_blid_sat_info2_window

0x19e8,	// (0x00067fe0) aid_size_cell_blid

0x19f0,	// (0x00067fe8) bg_popup_window_pane_cp07

0x1a13,	// (0x0006800b) grid_popup_blid_pane

0x1a1d,	// (0x00068015) heading_pane_cp05_ParamLimits

0x1a1d,	// (0x00068015) heading_pane_cp05

0x1ae7,	// (0x000680df) cell_popup_blid_pane_ParamLimits

0x1ae7,	// (0x000680df) cell_popup_blid_pane

0x1b11,	// (0x00068109) cell_popup_blid_pane_g1

0x1b19,	// (0x00068111) cell_popup_blid_pane_t1

0x9f65,	// (0x0007055d) mup2_indicator_pane_ParamLimits

0x9f65,	// (0x0007055d) mup2_indicator_pane

0x026f,	// (0x00066867) mup2_visualizer_osc_pane

0x1850,	// (0x00067e48) mup2_visualizer_spec_pane_ParamLimits

0x1850,	// (0x00067e48) mup2_visualizer_spec_pane

0xa15a,	// (0x00070752) mup2_spec_half_pane

0xa163,	// (0x0007075b) mup2_spec_half_pane_cp

0xa16d,	// (0x00070765) mup2_spec_bar_pane_ParamLimits

0xa16d,	// (0x00070765) mup2_spec_bar_pane

0x178d,	// (0x00067d85) mup2_spec_bar_pane_g1

0x1797,	// (0x00067d8f) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00075c22) mup2_spec_bar_pane_g

0xa18c,	// (0x00070784) mup2_osc_middle_pane

0x17a9,	// (0x00067da1) mup2_visualizer_osc_pane_g1

0x6a6e,	// (0x0006d066) popup_number_entry_window_t1_ParamLimits

0x6a81,	// (0x0006d079) popup_number_entry_window_t2_ParamLimits

0x6a93,	// (0x0006d08b) popup_number_entry_window_t3_ParamLimits

0x6aa5,	// (0x0006d09d) popup_number_entry_window_t5_ParamLimits

0x6aa5,	// (0x0006d09d) popup_number_entry_window_t5

0xf0ec,	// (0x000756e4) popup_number_entry_window_t_ParamLimits

0x6add,	// (0x0006d0d5) text_title_cp2_ParamLimits

0x90a5,	// (0x0006f69d) aid_hotspot_pointer_text2_pane

0x913f,	// (0x0006f737) main_viewer_pane_g9_ParamLimits

0x913f,	// (0x0006f737) main_viewer_pane_g9

0xedc1,	// (0x000753b9) cale_month_pane_t1_ParamLimits

0xedfe,	// (0x000753f6) bg_cale_pane_ParamLimits

0xee16,	// (0x0007540e) list_cale_pane_ParamLimits

0xea28,	// (0x00075020) listscroll_cale_day_pane_t1

0xee27,	// (0x0007541f) scroll_pane_cp09_ParamLimits

0x8e48,	// (0x0006f440) main_mup_eq_pane_t1_ParamLimits

0x8e48,	// (0x0006f440) main_mup_eq_pane_t1

0x8e64,	// (0x0006f45c) main_mup_eq_pane_t2_ParamLimits

0x8e64,	// (0x0006f45c) main_mup_eq_pane_t2

0x8e80,	// (0x0006f478) main_mup_eq_pane_t3_ParamLimits

0x8e80,	// (0x0006f478) main_mup_eq_pane_t3

0x8e9a,	// (0x0006f492) main_mup_eq_pane_t4_ParamLimits

0x8e9a,	// (0x0006f492) main_mup_eq_pane_t4

0x8eb4,	// (0x0006f4ac) main_mup_eq_pane_t5_ParamLimits

0x8eb4,	// (0x0006f4ac) main_mup_eq_pane_t5

0x8ece,	// (0x0006f4c6) main_mup_eq_pane_t6_ParamLimits

0x8ece,	// (0x0006f4c6) main_mup_eq_pane_t6

0x8ee4,	// (0x0006f4dc) main_mup_eq_pane_t7_ParamLimits

0x8ee4,	// (0x0006f4dc) main_mup_eq_pane_t7

0x8efa,	// (0x0006f4f2) main_mup_eq_pane_t8_ParamLimits

0x8efa,	// (0x0006f4f2) main_mup_eq_pane_t8

0x8f10,	// (0x0006f508) main_mup_eq_pane_t9_ParamLimits

0x8f10,	// (0x0006f508) main_mup_eq_pane_t9

0x8f2c,	// (0x0006f524) main_mup_eq_pane_t10_ParamLimits

0x8f2c,	// (0x0006f524) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00075a71) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00075a71) main_mup_eq_pane_t

0x8ff1,	// (0x0006f5e9) mup_equalizer_pane_cp5_ParamLimits

0x9009,	// (0x0006f601) mup_equalizer_pane_cp6_ParamLimits

0x9021,	// (0x0006f619) mup_equalizer_pane_cp7_ParamLimits

0x6739,	// (0x0006cd31) main_gallery_pane

0x17b2,	// (0x00067daa) smil2_volume_pane

0x17cd,	// (0x00067dc5) smil_status_volume_pane_g1_ParamLimits

0x17ba,	// (0x00067db2) smil_status_volume_pane_g2_ParamLimits

0x9a83,	// (0x0007007b) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00075c27) smil_status_volume_pane_g_ParamLimits

0x19f0,	// (0x00067fe8) bg_popup_window_pane_cp07_ParamLimits

0x19fe,	// (0x00067ff6) blid_firmament_pane

0xa195,	// (0x0007078d) aid_size_cell_gallery_ParamLimits

0xa195,	// (0x0007078d) aid_size_cell_gallery

0xa1a3,	// (0x0007079b) grid_gallery_pane_ParamLimits

0xa1a3,	// (0x0007079b) grid_gallery_pane

0xa1b3,	// (0x000707ab) cell_gallery_pane_ParamLimits

0xa1b3,	// (0x000707ab) cell_gallery_pane

0x1b27,	// (0x0006811f) bg_cell_gallery_focus_pane_ParamLimits

0x1b27,	// (0x0006811f) bg_cell_gallery_focus_pane

0x1b39,	// (0x00068131) cell_gallery_pane_g1_ParamLimits

0x1b39,	// (0x00068131) cell_gallery_pane_g1

0xa201,	// (0x000707f9) cell_gallery_pane_g2_ParamLimits

0xa201,	// (0x000707f9) cell_gallery_pane_g2

0xa20e,	// (0x00070806) cell_gallery_pane_g3_ParamLimits

0xa20e,	// (0x00070806) cell_gallery_pane_g3

0x1b45,	// (0x0006813d) cell_gallery_pane_g4_ParamLimits

0x1b45,	// (0x0006813d) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00075cd5) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00075cd5) cell_gallery_pane_g

0x1b51,	// (0x00068149) bg_cell_gallery_focus_pane_g1

0x1b59,	// (0x00068151) bg_cell_gallery_focus_pane_g2

0x1b61,	// (0x00068159) bg_cell_gallery_focus_pane_g3

0x1b69,	// (0x00068161) bg_cell_gallery_focus_pane_g4

0x1b71,	// (0x00068169) bg_cell_gallery_focus_pane_g5

0x1b79,	// (0x00068171) bg_cell_gallery_focus_pane_g6

0x1b81,	// (0x00068179) bg_cell_gallery_focus_pane_g7

0x1b89,	// (0x00068181) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00075cde) bg_cell_gallery_focus_pane_g

0x1b91,	// (0x00068189) aid_firma_cardinal

0x1ba5,	// (0x0006819d) blid_firmament_pane_t1

0x1bbc,	// (0x000681b4) blid_firmament_pane_t2

0x1bd3,	// (0x000681cb) blid_firmament_pane_t3

0x1bea,	// (0x000681e2) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x00075cef) blid_firmament_pane_t

0x1c01,	// (0x000681f9) blid_sat_info_pane

0x1c11,	// (0x00068209) blid_sat_info_pane_g1

0x1c11,	// (0x00068209) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00075cf8) blid_sat_info_pane_g

0x1c1b,	// (0x00068213) blid_sat_info_pane_t1

0x1c29,	// (0x00068221) smil2_volume_content_pane

0x1c32,	// (0x0006822a) smil2_volume_pane_g1

0x1c3a,	// (0x00068232) smil2_volume_content_pane_g1

0x1c43,	// (0x0006823b) smil2_volume_content_pane_g2

0x1c4c,	// (0x00068244) smil2_volume_content_pane_g3

0x1c55,	// (0x0006824d) smil2_volume_content_pane_g4

0x1c5e,	// (0x00068256) smil2_volume_content_pane_g5

0x1c67,	// (0x0006825f) smil2_volume_content_pane_g6

0x1c70,	// (0x00068268) smil2_volume_content_pane_g7

0x1c79,	// (0x00068271) smil2_volume_content_pane_g8

0x1c82,	// (0x0006827a) smil2_volume_content_pane_g9

0x1c8b,	// (0x00068283) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x00075cfd) smil2_volume_content_pane_g

0x7243,	// (0x0006d83b) cale_week_day_heading_pane_t1_ParamLimits

0x7270,	// (0x0006d868) cale_week_day_heading_pane_t2_ParamLimits

0x729d,	// (0x0006d895) cale_week_day_heading_pane_t3_ParamLimits

0x72ca,	// (0x0006d8c2) cale_week_day_heading_pane_t4_ParamLimits

0x72f7,	// (0x0006d8ef) cale_week_day_heading_pane_t5_ParamLimits

0x7324,	// (0x0006d91c) cale_week_day_heading_pane_t6_ParamLimits

0x7351,	// (0x0006d949) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x000757e9) cale_week_day_heading_pane_t_ParamLimits

0xea3a,	// (0x00075032) bg_cale_side_pane_ParamLimits

0x737e,	// (0x0006d976) cale_week_time_pane_t1_ParamLimits

0x73aa,	// (0x0006d9a2) cale_week_time_pane_t2_ParamLimits

0x73d6,	// (0x0006d9ce) cale_week_time_pane_t3_ParamLimits

0x7402,	// (0x0006d9fa) cale_week_time_pane_t4_ParamLimits

0x742e,	// (0x0006da26) cale_week_time_pane_t5_ParamLimits

0x745a,	// (0x0006da52) cale_week_time_pane_t6_ParamLimits

0x7486,	// (0x0006da7e) cale_week_time_pane_t7_ParamLimits

0x74b2,	// (0x0006daaa) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x000757f8) cale_week_time_pane_t_ParamLimits

0x74de,	// (0x0006dad6) cell_cale_week_pane_g2_ParamLimits

0xea3a,	// (0x00075032) bg_cale_side_pane_cp01_ParamLimits

0x83f9,	// (0x0006e9f1) cale_month_week_pane_t1_ParamLimits

0x8424,	// (0x0006ea1c) cale_month_week_pane_t2_ParamLimits

0x844f,	// (0x0006ea47) cale_month_week_pane_t3_ParamLimits

0x847a,	// (0x0006ea72) cale_month_week_pane_t4_ParamLimits

0x84a5,	// (0x0006ea9d) cale_month_week_pane_t5_ParamLimits

0x84d0,	// (0x0006eac8) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x000758d1) cale_month_week_pane_t_ParamLimits

0x85c9,	// (0x0006ebc1) cell_cale_month_pane_g1_ParamLimits

0x6739,	// (0x0006cd31) main_cale_event_viewer_pane

0x6739,	// (0x0006cd31) listscroll_cale_event_viewer_pane

0x1c94,	// (0x0006828c) list_cale_ev_pane

0x1c9c,	// (0x00068294) scroll_pane_cp023

0xa21b,	// (0x00070813) field_cale_ev_pane_ParamLimits

0xa21b,	// (0x00070813) field_cale_ev_pane

0x1ca8,	// (0x000682a0) field_cale_ev_content_pane_ParamLimits

0x1ca8,	// (0x000682a0) field_cale_ev_content_pane

0x1cb4,	// (0x000682ac) field_cale_ev_pane_g1_ParamLimits

0x1cb4,	// (0x000682ac) field_cale_ev_pane_g1

0x1cc0,	// (0x000682b8) field_cale_ev_pane_g2_ParamLimits

0x1cc0,	// (0x000682b8) field_cale_ev_pane_g2

0x1cd8,	// (0x000682d0) field_cale_ev_pane_g3_ParamLimits

0x1cd8,	// (0x000682d0) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x00075d12) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x00075d12) field_cale_ev_pane_g

0x1cf0,	// (0x000682e8) field_cale_ev_pane_t1_ParamLimits

0x1cf0,	// (0x000682e8) field_cale_ev_pane_t1

0xa23f,	// (0x00070837) field_cale_ev_content_pane_t1_ParamLimits

0xa23f,	// (0x00070837) field_cale_ev_content_pane_t1

0x03fa,	// (0x000669f2) bg_button_pane_cp01

0xe8e8,	// (0x00074ee0) listscroll_cale_week_pane_ParamLimits

0x7063,	// (0x0006d65b) popup_toolbar_window_cp01

0xea28,	// (0x00075020) listscroll_cale_week_pane_t1_ParamLimits

0xe8e8,	// (0x00074ee0) listscroll_cale_day_pane_ParamLimits

0x7063,	// (0x0006d65b) popup_toolbar_window_cp02

0xea28,	// (0x00075020) listscroll_cale_day_pane_t1_ParamLimits

0xe8e8,	// (0x00074ee0) main_cale_month_pane_ParamLimits

0x9980,	// (0x0006ff78) popup_toolbar_window_cp03_ParamLimits

0x9980,	// (0x0006ff78) popup_toolbar_window_cp03

0x92cb,	// (0x0006f8c3) main_image_pane_g2_ParamLimits

0x92cb,	// (0x0006f8c3) main_image_pane_g2

0x92d7,	// (0x0006f8cf) main_image_pane_g3_ParamLimits

0x92d7,	// (0x0006f8cf) main_image_pane_g3

0x0002,

0xf50b,	// (0x00075b03) main_image_pane_g_ParamLimits

0xf50b,	// (0x00075b03) main_image_pane_g

0x0556,	// (0x00066b4e) main_image_pane_t1_ParamLimits

0x92e3,	// (0x0006f8db) main_image_pane_t2_ParamLimits

0x92e3,	// (0x0006f8db) main_image_pane_t2

0x92f5,	// (0x0006f8ed) main_image_pane_t3_ParamLimits

0x92f5,	// (0x0006f8ed) main_image_pane_t3

0x9307,	// (0x0006f8ff) main_image_pane_t4_ParamLimits

0x9307,	// (0x0006f8ff) main_image_pane_t4

0x0003,

0xf512,	// (0x00075b0a) main_image_pane_t_ParamLimits

0xf512,	// (0x00075b0a) main_image_pane_t

0x9319,	// (0x0006f911) popup_image_details_window_cp01

0x9323,	// (0x0006f91b) popup_toobar_trans_pane_cp01_ParamLimits

0x9323,	// (0x0006f91b) popup_toobar_trans_pane_cp01

0x98f1,	// (0x0006fee9) popup_image_details_window_ParamLimits

0x98f1,	// (0x0006fee9) popup_image_details_window

0x16fe,	// (0x00067cf6) popup_image_focus_window

0x9bf1,	// (0x000701e9) camera2_autofocus_pane_ParamLimits

0x9bf1,	// (0x000701e9) camera2_autofocus_pane

0x6739,	// (0x0006cd31) bg_popup_sub_pane_cp06

0x1d07,	// (0x000682ff) popup_image_focus_window_g1

0x1d0f,	// (0x00068307) popup_image_focus_window_g2

0x1d17,	// (0x0006830f) popup_image_focus_window_g3

0x1d1f,	// (0x00068317) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00075d19) popup_image_focus_window_g

0x1d27,	// (0x0006831f) popup_image_focus_window_t1

0x1d35,	// (0x0006832d) popup_image_focus_window_t2

0x1d45,	// (0x0006833d) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x00075d22) popup_image_focus_window_t

0x1d53,	// (0x0006834b) camera2_autofocus_pane_g1

0x9873,	// (0x0006fe6b) bg_tb_trans_pane_cp01

0x1d61,	// (0x00068359) popup_image_details_window_g1

0x1d74,	// (0x0006836c) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x00075d34) popup_image_details_window_g

0x1d9d,	// (0x00068395) popup_image_details_window_t1

0x1daf,	// (0x000683a7) popup_image_details_window_t2

0x1dc8,	// (0x000683c0) popup_image_details_window_t3

0x1ddc,	// (0x000683d4) popup_image_details_window_t4

0x1df7,	// (0x000683ef) popup_image_details_window_t5

0x0004,

0xf743,	// (0x00075d3b) popup_image_details_window_t

0xe8d4,	// (0x00074ecc) bg_calc_paper_pane_ParamLimits

0x6739,	// (0x0006cd31) grid_highlight_pane_cp013

0x6e1c,	// (0x0006d414) list_calc_pane_ParamLimits

0x6e2e,	// (0x0006d426) scroll_pane_cp024

0xe8e8,	// (0x00074ee0) bg_calc_display_pane_ParamLimits

0x6e36,	// (0x0006d42e) calc_display_pane_t1_ParamLimits

0x6e4b,	// (0x0006d443) calc_display_pane_t2_ParamLimits

0x6e60,	// (0x0006d458) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0007576b) calc_display_pane_t_ParamLimits

0x6f33,	// (0x0006d52b) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00075788) cell_calc_pane_g

0x6f3c,	// (0x0006d534) cell_calc_pane_t1

0xe947,	// (0x00074f3f) grid_highlight_pane_cp02_ParamLimits

0xe95d,	// (0x00074f55) toolbar_button_pane_cp01_ParamLimits

0xe95d,	// (0x00074f55) toolbar_button_pane_cp01

0x059b,	// (0x00066b93) temp_image_control_pane_ParamLimits

0x059b,	// (0x00066b93) temp_image_control_pane

0x9873,	// (0x0006fe6b) main_mp3_pane

0x1e11,	// (0x00068409) temp_image_control_pane_g1_ParamLimits

0x1e11,	// (0x00068409) temp_image_control_pane_g1

0x1e1f,	// (0x00068417) temp_image_control_pane_g2_ParamLimits

0x1e1f,	// (0x00068417) temp_image_control_pane_g2

0x1e31,	// (0x00068429) temp_image_control_pane_g3_ParamLimits

0x1e31,	// (0x00068429) temp_image_control_pane_g3

0xa28d,	// (0x00070885) temp_image_control_pane_g4_ParamLimits

0xa28d,	// (0x00070885) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x00075d46) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x00075d46) temp_image_control_pane_g

0x1e11,	// (0x00068409) main_mp3_pane_g1

0xa29e,	// (0x00070896) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00075d4f) main_mp3_pane_g

0x1e74,	// (0x0006846c) main_mp3_pane_t1

0xea9f,	// (0x00075097) main_camera_pane_g8_ParamLimits

0xea9f,	// (0x00075097) main_camera_pane_g8

0x778a,	// (0x0006dd82) main_video_pane_g7_ParamLimits

0x778a,	// (0x0006dd82) main_video_pane_g7

0x9d34,	// (0x0007032c) main_camera2_pane_t7_ParamLimits

0x9d34,	// (0x0007032c) main_camera2_pane_t7

0xebe9,	// (0x000751e1) scroll_pane_cp025_ParamLimits

0xebe9,	// (0x000751e1) scroll_pane_cp025

0xebfd,	// (0x000751f5) scroll_pane_cp026_ParamLimits

0xebfd,	// (0x000751f5) scroll_pane_cp026

0xec0c,	// (0x00075204) wml_content_pane_ParamLimits

0x6739,	// (0x0006cd31) main_touch_calib_pane

0xa342,	// (0x0007093a) main_touch_calib_pane_g1

0xa34e,	// (0x00070946) main_touch_calib_pane_g2

0xa35a,	// (0x00070952) main_touch_calib_pane_g3

0xa366,	// (0x0007095e) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x00075d6d) main_touch_calib_pane_g

0xa372,	// (0x0007096a) main_touch_calib_pane_t1

0xa389,	// (0x00070981) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00075d76) main_touch_calib_pane_t

0x01b0,	// (0x000667a8) mup_progress_pane_cp02

0x01cf,	// (0x000667c7) navi_pane_g1

0x0231,	// (0x00066829) navi_pane_mp_t3

0x9873,	// (0x0006fe6b) main_mp3_pane_ParamLimits

0x99c2,	// (0x0006ffba) navi_pane_ParamLimits

0x1e11,	// (0x00068409) main_mp3_pane_g1_ParamLimits

0xa29e,	// (0x00070896) main_mp3_pane_g2_ParamLimits

0xa2aa,	// (0x000708a2) main_mp3_pane_g3_ParamLimits

0xa2aa,	// (0x000708a2) main_mp3_pane_g3

0xa2b6,	// (0x000708ae) main_mp3_pane_g4_ParamLimits

0xa2b6,	// (0x000708ae) main_mp3_pane_g4

0x1e41,	// (0x00068439) main_mp3_pane_g5_ParamLimits

0x1e41,	// (0x00068439) main_mp3_pane_g5

0x1e4f,	// (0x00068447) main_mp3_pane_g6_ParamLimits

0x1e4f,	// (0x00068447) main_mp3_pane_g6

0x1e5c,	// (0x00068454) main_mp3_pane_g7_ParamLimits

0x1e5c,	// (0x00068454) main_mp3_pane_g7

0x1e68,	// (0x00068460) main_mp3_pane_g8_ParamLimits

0x1e68,	// (0x00068460) main_mp3_pane_g8

0xf757,	// (0x00075d4f) main_mp3_pane_g_ParamLimits

0xa2c2,	// (0x000708ba) main_mp3_pane_t2

0xa2d2,	// (0x000708ca) main_mp3_pane_t3

0x1e82,	// (0x0006847a) main_mp3_pane_t4

0x1e90,	// (0x00068488) main_mp3_pane_t5

0x0005,

0xf768,	// (0x00075d60) main_mp3_pane_t

0x1e9e,	// (0x00068496) mup_progress_pane_cp01

0x55c9,	// (0x0006bbc1) aid_zoom_text_secondary2

0x1c94,	// (0x0006828c) list_cale_ev2_pane

0x1c9c,	// (0x00068294) scroll_pane_cp023_ParamLimits

0xa3e0,	// (0x000709d8) field_cale_ev2_pane_ParamLimits

0xa3e0,	// (0x000709d8) field_cale_ev2_pane

0xa3fe,	// (0x000709f6) field_cale_ev2_pane_g1_ParamLimits

0xa3fe,	// (0x000709f6) field_cale_ev2_pane_g1

0xa40a,	// (0x00070a02) field_cale_ev2_pane_g2_ParamLimits

0xa40a,	// (0x00070a02) field_cale_ev2_pane_g2

0xa422,	// (0x00070a1a) field_cale_ev2_pane_g3_ParamLimits

0xa422,	// (0x00070a1a) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x00075d81) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x00075d81) field_cale_ev2_pane_g

0x58cc,	// (0x0006bec4) field_cale_ev2_pane_t1_ParamLimits

0x58cc,	// (0x0006bec4) field_cale_ev2_pane_t1

0x58e3,	// (0x0006bedb) field_cale_ev2_pane_t2_ParamLimits

0x58e3,	// (0x0006bedb) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x00075d8a) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x00075d8a) field_cale_ev2_pane_t

0x91a7,	// (0x0006f79f) main_postcard_pane_g5_ParamLimits

0x91a7,	// (0x0006f79f) main_postcard_pane_g5

0x91b5,	// (0x0006f7ad) main_postcard_pane_g6_ParamLimits

0x91b5,	// (0x0006f7ad) main_postcard_pane_g6

0x75c8,	// (0x0006dbc0) camera2_autofocus_pane_cp_ParamLimits

0x75c8,	// (0x0006dbc0) camera2_autofocus_pane_cp

0x9873,	// (0x0006fe6b) main_mup3_pane

0xa466,	// (0x00070a5e) main_mup3_pane_g1_ParamLimits

0xa466,	// (0x00070a5e) main_mup3_pane_g1

0xa487,	// (0x00070a7f) main_mup3_pane_g2_ParamLimits

0xa487,	// (0x00070a7f) main_mup3_pane_g2

0xa503,	// (0x00070afb) main_mup3_pane_g3_ParamLimits

0xa503,	// (0x00070afb) main_mup3_pane_g3

0xa544,	// (0x00070b3c) main_mup3_pane_g4_ParamLimits

0xa544,	// (0x00070b3c) main_mup3_pane_g4

0xa585,	// (0x00070b7d) main_mup3_pane_g5_ParamLimits

0xa585,	// (0x00070b7d) main_mup3_pane_g5

0xa5c6,	// (0x00070bbe) main_mup3_pane_g6_ParamLimits

0xa5c6,	// (0x00070bbe) main_mup3_pane_g6

0x1ea6,	// (0x0006849e) main_mup3_pane_g7_ParamLimits

0x1ea6,	// (0x0006849e) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x00075d9a) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x00075d9a) main_mup3_pane_g

0xa638,	// (0x00070c30) main_mup3_pane_t1_ParamLimits

0xa638,	// (0x00070c30) main_mup3_pane_t1

0xa6ab,	// (0x00070ca3) main_mup3_pane_t2_ParamLimits

0xa6ab,	// (0x00070ca3) main_mup3_pane_t2

0xa778,	// (0x00070d70) main_mup3_pane_t4_ParamLimits

0xa778,	// (0x00070d70) main_mup3_pane_t4

0xa7cc,	// (0x00070dc4) main_mup3_pane_t5_ParamLimits

0xa7cc,	// (0x00070dc4) main_mup3_pane_t5

0xa878,	// (0x00070e70) main_mup3_pane_t6_ParamLimits

0xa878,	// (0x00070e70) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x00075dab) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x00075dab) main_mup3_pane_t

0xa920,	// (0x00070f18) mup3_progress_pane_ParamLimits

0xa920,	// (0x00070f18) mup3_progress_pane

0xa98b,	// (0x00070f83) popup_mup3_control_window_ParamLimits

0xa98b,	// (0x00070f83) popup_mup3_control_window

0x1eb4,	// (0x000684ac) popup_mup3_text_window

0xa9a8,	// (0x00070fa0) mup3_progress_pane_t1

0xa9bf,	// (0x00070fb7) mup3_progress_pane_t2

0x1ebc,	// (0x000684b4) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x00075db8) mup3_progress_pane_t

0x1ed3,	// (0x000684cb) mup_progress_pane_cp03

0x6739,	// (0x0006cd31) bg_tb_trans_pane_cp04

0xa9d6,	// (0x00070fce) mup3_volume_pane

0xa9de,	// (0x00070fd6) popup_mup3_control_window_g1

0x39cc,	// (0x00069fc4) mup3_volume_pane_g1

0x39d5,	// (0x00069fcd) mup3_volume_pane_g2

0x39de,	// (0x00069fd6) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x00075dbf) mup3_volume_pane_g

0x6739,	// (0x0006cd31) bg_tb_trans_pane_cp03

0x1ee3,	// (0x000684db) popup_mup3_text_window_g1

0x1eeb,	// (0x000684e3) popup_mup3_text_window_t1

0xe930,	// (0x00074f28) list_calc_item_pane_g1_ParamLimits

0x191a,	// (0x00067f12) mup_volume_pane_cp_g1

0xa3a0,	// (0x00070998) main_touch_calib_pane_t3

0xa3b4,	// (0x000709ac) main_touch_calib_pane_t4

0xa3ca,	// (0x000709c2) main_touch_calib_pane_t5

0x6743,	// (0x0006cd3b) aid_cell_size_toolbar2

0x674b,	// (0x0006cd43) aid_popup3_width_pane

0x55b9,	// (0x0006bbb1) aid_zoom_text_msg_primary

0x759b,	// (0x0006db93) vorec_t7

0xe8f4,	// (0x00074eec) bg_calc_paper_pane_g1_ParamLimits

0xe900,	// (0x00074ef8) bg_calc_paper_pane_g2_ParamLimits

0xe90c,	// (0x00074f04) bg_calc_paper_pane_g3_ParamLimits

0xe918,	// (0x00074f10) bg_calc_paper_pane_g4_ParamLimits

0xe924,	// (0x00074f1c) bg_calc_paper_pane_g5_ParamLimits

0x6ea1,	// (0x0006d499) bg_calc_paper_pane_g6_ParamLimits

0x6eb2,	// (0x0006d4aa) bg_calc_paper_pane_g7_ParamLimits

0x6ec3,	// (0x0006d4bb) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00075772) bg_calc_paper_pane_g_ParamLimits

0x6ed4,	// (0x0006d4cc) calc_bg_paper_pane_g9_ParamLimits

0x76b9,	// (0x0006dcb1) image_qvga_pane_ParamLimits

0x76b9,	// (0x0006dcb1) image_qvga_pane

0xe81d,	// (0x00074e15) bg_popup_sub_pane_cp04_ParamLimits

0x04d2,	// (0x00066aca) popup_mup_playback_window_g1_ParamLimits

0x04de,	// (0x00066ad6) popup_mup_playback_window_t1_ParamLimits

0x04f3,	// (0x00066aeb) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00075afe) popup_mup_playback_window_t_ParamLimits

0x9e63,	// (0x0007045b) main_mup2_pane_g3_ParamLimits

0x9e63,	// (0x0007045b) main_mup2_pane_g3

0x7967,	// (0x0006df5f) popup_toolbar_window_cp04

0x08ee,	// (0x00066ee6) popup_call2_audio_second_window_g3_ParamLimits

0x08ee,	// (0x00066ee6) popup_call2_audio_second_window_g3

0x0cf8,	// (0x000672f0) popup_call2_audio_first_window_g4_ParamLimits

0x0cf8,	// (0x000672f0) popup_call2_audio_first_window_g4

0x1377,	// (0x0006796f) popup_call2_audio_in_window_g4_ParamLimits

0x1377,	// (0x0006796f) popup_call2_audio_in_window_g4

0x92be,	// (0x0006f8b6) aid_area_sk_bg_cut_ParamLimits

0x92be,	// (0x0006f8b6) aid_area_sk_bg_cut

0x0508,	// (0x00066b00) aid_area_sk_bg_cut_2_ParamLimits

0x0508,	// (0x00066b00) aid_area_sk_bg_cut_2

0xa1f1,	// (0x000707e9) aid_placing_details_win

0xa1f9,	// (0x000707f1) aid_placing_details_win_2

0x1d53,	// (0x0006834b) camera2_autofocus_pane_g1_ParamLimits

0x6999,	// (0x0006cf91) popup_fixed_preview_cale_window_ParamLimits

0x6999,	// (0x0006cf91) popup_fixed_preview_cale_window

0x029b,	// (0x00066893) navi_slider_pane_g3

0x0292,	// (0x0006688a) navi_slider_pane_g4

0x0289,	// (0x00066881) navi_slider_pane_g5

0x029b,	// (0x00066893) navi_slider_pane_g6

0x8bbe,	// (0x0006f1b6) navi_slider_pane_g7

0x03c7,	// (0x000669bf) mup_scale_pane_g3

0x03d0,	// (0x000669c8) mup_scale_pane_g4

0x03d9,	// (0x000669d1) mup_scale_pane_g5

0x9039,	// (0x0006f631) mup_scale_pane_g6

0x9042,	// (0x0006f63a) mup_scale_pane_g7

0x029b,	// (0x00066893) cams2_slider_pane_g3

0x19cf,	// (0x00067fc7) cams2_slider_pane_g4

0xa149,	// (0x00070741) cams2_slider_pane_g5

0x029b,	// (0x00066893) cams2_slider_pane_g6

0xa151,	// (0x00070749) cams2_slider_pane_g7

0x1c11,	// (0x00068209) camera2_autofocus_pane_cp_g1

0x1ef9,	// (0x000684f1) bg_popup_preview_window_pane_cp02_ParamLimits

0x1ef9,	// (0x000684f1) bg_popup_preview_window_pane_cp02

0x1f05,	// (0x000684fd) list_fp_cale_pane_ParamLimits

0x1f05,	// (0x000684fd) list_fp_cale_pane

0x1f11,	// (0x00068509) popup_fixed_preview_cale_window_t1_ParamLimits

0x1f11,	// (0x00068509) popup_fixed_preview_cale_window_t1

0xa9e7,	// (0x00070fdf) popup_fixed_preview_cale_window_t2_ParamLimits

0xa9e7,	// (0x00070fdf) popup_fixed_preview_cale_window_t2

0xa9fc,	// (0x00070ff4) popup_fixed_preview_cale_window_t3_ParamLimits

0xa9fc,	// (0x00070ff4) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00075dc6) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00075dc6) popup_fixed_preview_cale_window_t

0xaa11,	// (0x00071009) list_single_fp_cale_pane_ParamLimits

0xaa11,	// (0x00071009) list_single_fp_cale_pane

0x1f47,	// (0x0006853f) list_single_fp_cale_pane_g1_ParamLimits

0x1f47,	// (0x0006853f) list_single_fp_cale_pane_g1

0x1f53,	// (0x0006854b) list_single_fp_cale_pane_g2_ParamLimits

0x1f53,	// (0x0006854b) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x00075dcd) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x00075dcd) list_single_fp_cale_pane_g

0x1f6c,	// (0x00068564) list_single_fp_cale_pane_t1_ParamLimits

0x1f6c,	// (0x00068564) list_single_fp_cale_pane_t1

0x1f7e,	// (0x00068576) list_single_fp_cale_pane_t2_ParamLimits

0x1f7e,	// (0x00068576) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x00075dd4) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x00075dd4) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6739,	// (0x0006cd31) main_dialer_pane

0xaa21,	// (0x00071019) aid_cell_size_keypad

0xaa2b,	// (0x00071023) dialer_ne_pane

0xaa35,	// (0x0007102d) grid_dialer_command_1_pane

0xaa3d,	// (0x00071035) grid_dialer_command_2_pane

0xaa45,	// (0x0007103d) grid_dialer_keypad_pane

0xaa59,	// (0x00071051) bg_popup_call_pane_cp06_ParamLimits

0xaa59,	// (0x00071051) bg_popup_call_pane_cp06

0xaa65,	// (0x0007105d) dialer_ne_clear_pane_ParamLimits

0xaa65,	// (0x0007105d) dialer_ne_clear_pane

0x1fb1,	// (0x000685a9) dialer_ne_pane_g1

0x1fb9,	// (0x000685b1) dialer_ne_pane_t1_ParamLimits

0x1fb9,	// (0x000685b1) dialer_ne_pane_t1

0xaa71,	// (0x00071069) dialer_ne_pane_t2_ParamLimits

0xaa71,	// (0x00071069) dialer_ne_pane_t2

0xaa8e,	// (0x00071086) dialer_ne_pane_t3_ParamLimits

0xaa8e,	// (0x00071086) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x00075dd9) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x00075dd9) dialer_ne_pane_t

0xaab2,	// (0x000710aa) dialer_ne_pane_t3_copy1_ParamLimits

0xaab2,	// (0x000710aa) dialer_ne_pane_t3_copy1

0xaad6,	// (0x000710ce) cell_dialer_keypad_pane_ParamLimits

0xaad6,	// (0x000710ce) cell_dialer_keypad_pane

0xaaed,	// (0x000710e5) cell_dialer_command_1_pane_ParamLimits

0xaaed,	// (0x000710e5) cell_dialer_command_1_pane

0xab03,	// (0x000710fb) cell_dialer_command_2_pane_ParamLimits

0xab03,	// (0x000710fb) cell_dialer_command_2_pane

0x1fcb,	// (0x000685c3) bg_button_pane_cp02_ParamLimits

0x1fcb,	// (0x000685c3) bg_button_pane_cp02

0xab12,	// (0x0007110a) cell_dialer_keypad_pane_g1_ParamLimits

0xab12,	// (0x0007110a) cell_dialer_keypad_pane_g1

0x1fcb,	// (0x000685c3) bg_button_pane_cp03_ParamLimits

0x1fcb,	// (0x000685c3) bg_button_pane_cp03

0xab26,	// (0x0007111e) cell_dialer_command_1_pane_g1_ParamLimits

0xab26,	// (0x0007111e) cell_dialer_command_1_pane_g1

0x1fd7,	// (0x000685cf) bg_button_pane_cp04

0xab3a,	// (0x00071132) cell_dialer_command_2_pane_g1

0x026f,	// (0x00066867) bg_button_pane_cp06

0x1fdf,	// (0x000685d7) dialer_ne_clear_pane_g1

0x8b01,	// (0x0006f0f9) navi_pane_g2

0x8b2f,	// (0x0006f127) navi_pane_g3

0x0002,

0xf409,	// (0x00075a01) navi_pane_g

0x8b5a,	// (0x0006f152) navi_pane_mv_g2

0x8b81,	// (0x0006f179) navi_pane_mv_g5

0x8b89,	// (0x0006f181) navi_pane_mv_t1

0xe8e8,	// (0x00074ee0) main_clock2_pane

0xab70,	// (0x00071168) main_clock2_list_pane_ParamLimits

0xab70,	// (0x00071168) main_clock2_list_pane

0xab9a,	// (0x00071192) main_clock2_pane_t1_ParamLimits

0xab9a,	// (0x00071192) main_clock2_pane_t1

0xabc8,	// (0x000711c0) main_clock2_pane_t2_ParamLimits

0xabc8,	// (0x000711c0) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x00075de0) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x00075de0) main_clock2_pane_t

0xac31,	// (0x00071229) popup_clock_analogue_window_cp03_ParamLimits

0xac31,	// (0x00071229) popup_clock_analogue_window_cp03

0xac51,	// (0x00071249) popup_clock_digital_window_cp02_ParamLimits

0xac51,	// (0x00071249) popup_clock_digital_window_cp02

0xacc2,	// (0x000712ba) main_clock2_list_single_pane_ParamLimits

0xacc2,	// (0x000712ba) main_clock2_list_single_pane

0x026f,	// (0x00066867) list_highlight_pane_cp05

0x1fe7,	// (0x000685df) main_clock2_list_single_pane_t1

0x7967,	// (0x0006df5f) popup_toolbar_window_cp04_ParamLimits

0xa25d,	// (0x00070855) camera2_autofocus_pane_g2_ParamLimits

0xa25d,	// (0x00070855) camera2_autofocus_pane_g2

0xa269,	// (0x00070861) camera2_autofocus_pane_g3_ParamLimits

0xa269,	// (0x00070861) camera2_autofocus_pane_g3

0xa275,	// (0x0007086d) camera2_autofocus_pane_g4_ParamLimits

0xa275,	// (0x0007086d) camera2_autofocus_pane_g4

0xa281,	// (0x00070879) camera2_autofocus_pane_g5_ParamLimits

0xa281,	// (0x00070879) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00075d29) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00075d29) camera2_autofocus_pane_g

0xa446,	// (0x00070a3e) camera2_autofocus_pane_cp_g2

0xa44e,	// (0x00070a46) camera2_autofocus_pane_cp_g3

0xa456,	// (0x00070a4e) camera2_autofocus_pane_cp_g4

0xa45e,	// (0x00070a56) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x00075d8f) camera2_autofocus_pane_cp_g

0xaa51,	// (0x00071049) popup_dialer_spcha_window

0x6739,	// (0x0006cd31) bg_popup_sub_pane_cp07

0x1ff5,	// (0x000685ed) list_spcha_pane

0x1ffd,	// (0x000685f5) list_single_spcha_pane_ParamLimits

0x1ffd,	// (0x000685f5) list_single_spcha_pane

0x6739,	// (0x0006cd31) list_highlight_pane_cp06

0x200e,	// (0x00068606) list_single_spcha_pane_t1

0x1121,	// (0x00067719) popup_call2_audio_out_window_g4_ParamLimits

0x1121,	// (0x00067719) popup_call2_audio_out_window_g4

0x6739,	// (0x0006cd31) main_imed2_pane

0x1708,	// (0x00067d00) popup_imed_adjust2_window

0x98ff,	// (0x0006fef7) popup_imed_trans_window_ParamLimits

0x98ff,	// (0x0006fef7) popup_imed_trans_window

0x1a49,	// (0x00068041) popup_blid_sat_info2_window_t1

0x1a57,	// (0x0006804f) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00075cbe) popup_blid_sat_info2_window_t

0xad6c,	// (0x00071364) aid_size_cell_colour_35

0xad86,	// (0x0007137e) aid_size_cell_colour_112

0xad9d,	// (0x00071395) aid_size_cell_effect

0x9873,	// (0x0006fe6b) bg_tb_trans_pane_cp02

0xef51,	// (0x00075549) heading_imed_pane

0xadb7,	// (0x000713af) listscroll_imed_pane

0x201c,	// (0x00068614) heading_imed_pane_g1

0x2024,	// (0x0006861c) heading_imed_pane_t1

0x2032,	// (0x0006862a) grid_imed_colour_35_pane_ParamLimits

0x2032,	// (0x0006862a) grid_imed_colour_35_pane

0xadc3,	// (0x000713bb) grid_imed_effect_pane

0x204e,	// (0x00068646) list_imed_aspect_pane

0xadd3,	// (0x000713cb) scroll_pane_cp027_ParamLimits

0xadd3,	// (0x000713cb) scroll_pane_cp027

0xaddf,	// (0x000713d7) cell_imed_effect_pane_ParamLimits

0xaddf,	// (0x000713d7) cell_imed_effect_pane

0x2056,	// (0x0006864e) cell_imed_colour_pane_ParamLimits

0x2056,	// (0x0006864e) cell_imed_colour_pane

0x20a0,	// (0x00068698) cell_imed_colour_pane_g1_ParamLimits

0x20a0,	// (0x00068698) cell_imed_colour_pane_g1

0x20b1,	// (0x000686a9) hgihlgiht_grid_pane_cp016_ParamLimits

0x20b1,	// (0x000686a9) hgihlgiht_grid_pane_cp016

0xadfb,	// (0x000713f3) cell_imed_effect_pane_g1

0xae03,	// (0x000713fb) grid_highlight_pane_cp017

0x20c2,	// (0x000686ba) list_imed_single_pane_ParamLimits

0x20c2,	// (0x000686ba) list_imed_single_pane

0x6739,	// (0x0006cd31) list_highlight_pane_cp07

0x20d6,	// (0x000686ce) list_imed_aspect_pane_comp1_t1

0x16dc,	// (0x00067cd4) bg_tb_trans_pane_cp05

0x20f8,	// (0x000686f0) popup_imed_adjust2_window_g1

0x211f,	// (0x00068717) popup_imed_adjust2_window_t1

0x2137,	// (0x0006872f) slider_imed_adjust_pane

0x214b,	// (0x00068743) slider_imed_adjust_pane_g1

0x215b,	// (0x00068753) slider_imed_adjust_pane_g2

0x216b,	// (0x00068763) slider_imed_adjust_pane_g3

0x217c,	// (0x00068774) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x00075dfd) slider_imed_adjust_pane_g

0xae0c,	// (0x00071404) aid_size_cell_clipart2

0xae18,	// (0x00071410) grid_imed_clipart_pane

0x218d,	// (0x00068785) scroll_pane_cp031

0xae22,	// (0x0007141a) cell_imed_clipart_pane_ParamLimits

0xae22,	// (0x0007141a) cell_imed_clipart_pane

0xae40,	// (0x00071438) cell_imed_clipart_pane_g1

0x6739,	// (0x0006cd31) grid_highlight_pane_cp014

0xab7c,	// (0x00071174) main_clock2_pane_g1_ParamLimits

0xab7c,	// (0x00071174) main_clock2_pane_g1

0xac6d,	// (0x00071265) aid_call2_pane_cp10

0xac7f,	// (0x00071277) aid_call_pane_cp10

0x01a4,	// (0x0006679c) popup_clock_analogue_window_cp10_g1

0x01a4,	// (0x0006679c) popup_clock_analogue_window_cp10_g2

0xac91,	// (0x00071289) popup_clock_analogue_window_cp10_g3

0xac91,	// (0x00071289) popup_clock_analogue_window_cp10_g4

0x01a4,	// (0x0006679c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x00075deb) popup_clock_analogue_window_cp10_g

0xaca3,	// (0x0007129b) popup_clock_analogue_window_cp10_t1

0xacd4,	// (0x000712cc) clock_digital_number_pane_cp10_ParamLimits

0xacd4,	// (0x000712cc) clock_digital_number_pane_cp10

0xacec,	// (0x000712e4) clock_digital_number_pane_cp11_ParamLimits

0xacec,	// (0x000712e4) clock_digital_number_pane_cp11

0xad04,	// (0x000712fc) clock_digital_number_pane_cp12_ParamLimits

0xad04,	// (0x000712fc) clock_digital_number_pane_cp12

0xad1c,	// (0x00071314) clock_digital_number_pane_cp13_ParamLimits

0xad1c,	// (0x00071314) clock_digital_number_pane_cp13

0xad34,	// (0x0007132c) clock_digital_separator_pane_cp10_ParamLimits

0xad34,	// (0x0007132c) clock_digital_separator_pane_cp10

0xad4c,	// (0x00071344) popup_clock_digital_window_cp02_t1_ParamLimits

0xad4c,	// (0x00071344) popup_clock_digital_window_cp02_t1

0xe815,	// (0x00074e0d) clock_digital_number_pane_cp10_g1

0xe815,	// (0x00074e0d) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x00075e06) clock_digital_number_pane_cp10_g

0xe815,	// (0x00074e0d) clock_digital_separator_pane_cp10_g1

0xe815,	// (0x00074e0d) clock_digital_separator_pane_g2_cp10

0x023f,	// (0x00066837) navi_pane_vded_g4

0x0248,	// (0x00066840) navi_pane_vded_g5

0x0251,	// (0x00066849) navi_pane_vded_t1

0x6739,	// (0x0006cd31) main_vded_pane

0xae49,	// (0x00071441) main_vded_pane_g1

0xae55,	// (0x0007144d) main_vded_pane_g2

0xae5f,	// (0x00071457) main_vded_pane_g3

0x0002,

0xf813,	// (0x00075e0b) main_vded_pane_g

0xae69,	// (0x00071461) main_vded_pane_t1

0xae77,	// (0x0007146f) main_vded_pane_t2

0x0001,

0xf81a,	// (0x00075e12) main_vded_pane_t

0xae85,	// (0x0007147d) vded_slider_pane

0xae8f,	// (0x00071487) vded_video_pane

0x2195,	// (0x0006878d) vded_video_pane_g1

0xae9b,	// (0x00071493) vded_video_pane_g2

0x1c11,	// (0x00068209) vded_video_pane_g3

0x0002,

0xf81f,	// (0x00075e17) vded_video_pane_g

0x219f,	// (0x00068797) vded_slider_pane_g1

0x191a,	// (0x00067f12) vded_slider_pane_g2

0x21a8,	// (0x000687a0) vded_slider_pane_g3

0x21b1,	// (0x000687a9) vded_slider_pane_g4

0x21ba,	// (0x000687b2) vded_slider_pane_g5

0x0004,

0xf826,	// (0x00075e1e) vded_slider_pane_g

0xa97f,	// (0x00070f77) mup3_rocker_pane_ParamLimits

0xa97f,	// (0x00070f77) mup3_rocker_pane

0xaea4,	// (0x0007149c) mup3_control_keys_pane_g1

0xaeac,	// (0x000714a4) mup3_control_keys_pane_g2

0xaeb4,	// (0x000714ac) mup3_control_keys_pane_g3

0xaebc,	// (0x000714b4) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x00075e29) mup3_control_keys_pane_g

0x69c1,	// (0x0006cfb9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x69c1,	// (0x0006cfb9) popup_toolbar2_fixed_window_cp01

0xa99b,	// (0x00070f93) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa99b,	// (0x00070f93) popup_toolbar2_fixed_window_cp02

0x0a60,	// (0x00067058) popup_call2_audio_second_window_t4_ParamLimits

0x0a60,	// (0x00067058) popup_call2_audio_second_window_t4

0x0f8e,	// (0x00067586) popup_call2_audio_first_window_t6_ParamLimits

0x0f8e,	// (0x00067586) popup_call2_audio_first_window_t6

0x1224,	// (0x0006781c) popup_call2_audio_out_window_t6_ParamLimits

0x1224,	// (0x0006781c) popup_call2_audio_out_window_t6

0x6739,	// (0x0006cd31) main_vitu_pane

0xaecc,	// (0x000714c4) aid_size_cell_itu_ParamLimits

0xaecc,	// (0x000714c4) aid_size_cell_itu

0x69e9,	// (0x0006cfe1) bg_popup_window_pane_cp08_ParamLimits

0x69e9,	// (0x0006cfe1) bg_popup_window_pane_cp08

0xaeda,	// (0x000714d2) field_vitu_entry_pane_ParamLimits

0xaeda,	// (0x000714d2) field_vitu_entry_pane

0xaee9,	// (0x000714e1) grid_vitu_function_pane_ParamLimits

0xaee9,	// (0x000714e1) grid_vitu_function_pane

0xaef9,	// (0x000714f1) grid_vitu_itu_pane_ParamLimits

0xaef9,	// (0x000714f1) grid_vitu_itu_pane

0xaf09,	// (0x00071501) cell_vitu_itu_pane_ParamLimits

0xaf09,	// (0x00071501) cell_vitu_itu_pane

0xaf20,	// (0x00071518) cell_vitu_function_pane_ParamLimits

0xaf20,	// (0x00071518) cell_vitu_function_pane

0x9873,	// (0x0006fe6b) bg_popup_sub_pane_cp08_ParamLimits

0x9873,	// (0x0006fe6b) bg_popup_sub_pane_cp08

0xaf34,	// (0x0007152c) field_vitu_entry_pane_t1_ParamLimits

0xaf34,	// (0x0007152c) field_vitu_entry_pane_t1

0x21db,	// (0x000687d3) field_vitu_entry_pane_t2_ParamLimits

0x21db,	// (0x000687d3) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00075e37) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00075e37) field_vitu_entry_pane_t

0x21f8,	// (0x000687f0) bg_button_pane_cp05_ParamLimits

0x21f8,	// (0x000687f0) bg_button_pane_cp05

0xaf4e,	// (0x00071546) cell_vitu_itu_pane_g1

0xaf66,	// (0x0007155e) cell_vitu_itu_pane_t1_ParamLimits

0xaf66,	// (0x0007155e) cell_vitu_itu_pane_t1

0xaf78,	// (0x00071570) cell_vitu_itu_pane_t2_ParamLimits

0xaf78,	// (0x00071570) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x00075e3c) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x00075e3c) cell_vitu_itu_pane_t

0x2206,	// (0x000687fe) bg_button_pane_cp07

0xafad,	// (0x000715a5) cell_vitu_function_pane_g1

0x6d47,	// (0x0006d33f) main_calc_pane_g1

0x677f,	// (0x0006cd77) aid_visual_content_pane

0x6739,	// (0x0006cd31) main_vradio_pane

0xafb6,	// (0x000715ae) main_vradio_pane_g1_ParamLimits

0xafb6,	// (0x000715ae) main_vradio_pane_g1

0x2210,	// (0x00068808) main_vradio_pane_g2_ParamLimits

0x2210,	// (0x00068808) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x00075e43) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x00075e43) main_vradio_pane_g

0xafc4,	// (0x000715bc) main_vradio_pane_t1_ParamLimits

0xafc4,	// (0x000715bc) main_vradio_pane_t1

0xafd6,	// (0x000715ce) main_vradio_pane_t2_ParamLimits

0xafd6,	// (0x000715ce) main_vradio_pane_t2

0x221d,	// (0x00068815) main_vradio_pane_t3_ParamLimits

0x221d,	// (0x00068815) main_vradio_pane_t3

0x0002,

0xf850,	// (0x00075e48) main_vradio_pane_t_ParamLimits

0xf850,	// (0x00075e48) main_vradio_pane_t

0xafe8,	// (0x000715e0) vradio_rocker_control_pane_ParamLimits

0xafe8,	// (0x000715e0) vradio_rocker_control_pane

0xaff4,	// (0x000715ec) vradio_station_info_pane_ParamLimits

0xaff4,	// (0x000715ec) vradio_station_info_pane

0x2231,	// (0x00068829) vradio_frequency_info_pane_ParamLimits

0x2231,	// (0x00068829) vradio_frequency_info_pane

0x1c11,	// (0x00068209) vradio_station_info_pane_g1

0x2240,	// (0x00068838) vradio_station_info_pane_t1_ParamLimits

0x2240,	// (0x00068838) vradio_station_info_pane_t1

0x2262,	// (0x0006885a) vradio_station_info_pane_t2_ParamLimits

0x2262,	// (0x0006885a) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00075e4f) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00075e4f) vradio_station_info_pane_t

0x2274,	// (0x0006886c) vradio_tuning_pane

0x227c,	// (0x00068874) vradio_rocker_control_pane_g1

0x2284,	// (0x0006887c) vradio_rocker_control_pane_g2

0x228c,	// (0x00068884) vradio_rocker_control_pane_g3

0x2294,	// (0x0006888c) vradio_rocker_control_pane_g4

0x229c,	// (0x00068894) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x00075e54) vradio_rocker_control_pane_g

0xb001,	// (0x000715f9) vradio_frequency_info_pane_g1

0x22a4,	// (0x0006889c) vradio_frequency_info_pane_t1_ParamLimits

0x22a4,	// (0x0006889c) vradio_frequency_info_pane_t1

0xb00b,	// (0x00071603) vradio_tuning_pane_g1

0xb016,	// (0x0007160e) vradio_tuning_pane_t1

0x67c0,	// (0x0006cdb8) area_side_right_pane_ParamLimits

0x67c0,	// (0x0006cdb8) area_side_right_pane

0x16a3,	// (0x00067c9b) status_small_pane_g1

0x16ab,	// (0x00067ca3) status_small_pane_g2

0x16b4,	// (0x00067cac) status_small_pane_g3

0x16bd,	// (0x00067cb5) status_small_pane_g4

0x0003,

0xf61c,	// (0x00075c14) status_small_pane_g

0x16c6,	// (0x00067cbe) status_small_pane_t1

0x6739,	// (0x0006cd31) main_video3_pane

0x22b8,	// (0x000688b0) cams_zoom_vslider_pane

0x22c0,	// (0x000688b8) image3_wide_pane_ParamLimits

0x22c0,	// (0x000688b8) image3_wide_pane

0x22da,	// (0x000688d2) image3_wide_small_pane

0x22e6,	// (0x000688de) main_video3_pane_g1_ParamLimits

0x22e6,	// (0x000688de) main_video3_pane_g1

0x2302,	// (0x000688fa) main_video3_pane_g2_ParamLimits

0x2302,	// (0x000688fa) main_video3_pane_g2

0x0001,

0xf867,	// (0x00075e5f) main_video3_pane_g_ParamLimits

0xf867,	// (0x00075e5f) main_video3_pane_g

0x231e,	// (0x00068916) main_video3_pane_t1_ParamLimits

0x231e,	// (0x00068916) main_video3_pane_t1

0x2349,	// (0x00068941) main_video3_pane_t2_ParamLimits

0x2349,	// (0x00068941) main_video3_pane_t2

0x2376,	// (0x0006896e) main_video3_pane_t3_ParamLimits

0x2376,	// (0x0006896e) main_video3_pane_t3

0x0002,

0xf86c,	// (0x00075e64) main_video3_pane_t_ParamLimits

0xf86c,	// (0x00075e64) main_video3_pane_t

0x23a3,	// (0x0006899b) cams_zoom_vslider_pane_g1

0x23ac,	// (0x000689a4) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x00075e6b) cams_zoom_vslider_pane_g

0x23b4,	// (0x000689ac) small_slider_vertical_pane

0x1c11,	// (0x00068209) small_slider_vertical_pane_g1

0x1c11,	// (0x00068209) small_slider_vertical_pane_g2

0x23bc,	// (0x000689b4) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x00075e70) small_slider_vertical_pane_g

0x6739,	// (0x0006cd31) main_hwr_training_pane

0x23c5,	// (0x000689bd) hwr_training_instruct_pane_ParamLimits

0x23c5,	// (0x000689bd) hwr_training_instruct_pane

0xb025,	// (0x0007161d) hwr_training_navi_pane_ParamLimits

0xb025,	// (0x0007161d) hwr_training_navi_pane

0xb03f,	// (0x00071637) hwr_training_write_pane_ParamLimits

0xb03f,	// (0x00071637) hwr_training_write_pane

0x6739,	// (0x0006cd31) bg_frame_shadow_pane

0x23fc,	// (0x000689f4) hwr_training_write_pane_g1

0x2404,	// (0x000689fc) hwr_training_write_pane_g2

0x240c,	// (0x00068a04) hwr_training_write_pane_g3

0x2414,	// (0x00068a0c) hwr_training_write_pane_g4

0x241c,	// (0x00068a14) hwr_training_write_pane_g5

0x2424,	// (0x00068a1c) hwr_training_write_pane_g6

0x242c,	// (0x00068a24) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x00075e77) hwr_training_write_pane_g

0xb077,	// (0x0007166f) hwr_training_navi_pane_g1_ParamLimits

0xb077,	// (0x0007166f) hwr_training_navi_pane_g1

0xb089,	// (0x00071681) hwr_training_navi_pane_g2_ParamLimits

0xb089,	// (0x00071681) hwr_training_navi_pane_g2

0xb09b,	// (0x00071693) hwr_training_navi_pane_g3_ParamLimits

0xb09b,	// (0x00071693) hwr_training_navi_pane_g3

0xb0ab,	// (0x000716a3) hwr_training_navi_pane_g4_ParamLimits

0xb0ab,	// (0x000716a3) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x00075e86) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x00075e86) hwr_training_navi_pane_g

0xb0c5,	// (0x000716bd) hwr_training_navi_pane_t1

0xb0d3,	// (0x000716cb) list_single_hwr_training_instruct_pane_ParamLimits

0xb0d3,	// (0x000716cb) list_single_hwr_training_instruct_pane

0x2434,	// (0x00068a2c) list_single_hwr_training_instruct_pane_t1

0x1b51,	// (0x00068149) bg_frame_shadow_pane_g1

0x2443,	// (0x00068a3b) bg_frame_shadow_pane_g2

0x244b,	// (0x00068a43) bg_frame_shadow_pane_g3

0x2453,	// (0x00068a4b) bg_frame_shadow_pane_g4

0x245b,	// (0x00068a53) bg_frame_shadow_pane_g5

0x2463,	// (0x00068a5b) bg_frame_shadow_pane_g6

0x246b,	// (0x00068a63) bg_frame_shadow_pane_g7

0xe9b3,	// (0x00074fab) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x00075e91) bg_frame_shadow_pane_g

0x6739,	// (0x0006cd31) main_video_tele_dialer_pane

0xb0f2,	// (0x000716ea) aid_size_cell_video_keypad_ParamLimits

0xb0f2,	// (0x000716ea) aid_size_cell_video_keypad

0xb102,	// (0x000716fa) grid_video_dialer_keypad_pane_ParamLimits

0xb102,	// (0x000716fa) grid_video_dialer_keypad_pane

0xb136,	// (0x0007172e) video_down_pane_cp_ParamLimits

0xb136,	// (0x0007172e) video_down_pane_cp

0xb160,	// (0x00071758) cell_video_dialer_keypad_pane_ParamLimits

0xb160,	// (0x00071758) cell_video_dialer_keypad_pane

0x2473,	// (0x00068a6b) bg_button_pane_cp08_ParamLimits

0x2473,	// (0x00068a6b) bg_button_pane_cp08

0xb177,	// (0x0007176f) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb177,	// (0x0007176f) cell_video_dialer_keypad_pane_g1

0xa973,	// (0x00070f6b) mup3_rocker2_pane_ParamLimits

0xa973,	// (0x00070f6b) mup3_rocker2_pane

0x1c11,	// (0x00068209) mup3_rocker2_pane_g1

0x9881,	// (0x0006fe79) main_dialer2_pane

0x6739,	// (0x0006cd31) main_mp4_pane

0xb1ba,	// (0x000717b2) main_mp4_pane_g1_ParamLimits

0xb1ba,	// (0x000717b2) main_mp4_pane_g1

0xb1c8,	// (0x000717c0) main_mp4_pane_g2_ParamLimits

0xb1c8,	// (0x000717c0) main_mp4_pane_g2

0xb1d6,	// (0x000717ce) main_mp4_pane_g3_ParamLimits

0xb1d6,	// (0x000717ce) main_mp4_pane_g3

0xb229,	// (0x00071821) main_mp4_pane_g4_ParamLimits

0xb229,	// (0x00071821) main_mp4_pane_g4

0xb243,	// (0x0007183b) main_mp4_pane_g5_ParamLimits

0xb243,	// (0x0007183b) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x00075eb1) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x00075eb1) main_mp4_pane_g

0xb277,	// (0x0007186f) main_mp4_pane_t1_ParamLimits

0xb277,	// (0x0007186f) main_mp4_pane_t1

0xb2d3,	// (0x000718cb) main_mp4_pane_t2_ParamLimits

0xb2d3,	// (0x000718cb) main_mp4_pane_t2

0x35f0,	// (0x00069be8) main_mp4_pane_t3_ParamLimits

0x35f0,	// (0x00069be8) main_mp4_pane_t3

0xb325,	// (0x0007191d) main_mp4_pane_t4_ParamLimits

0xb325,	// (0x0007191d) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x00075ebe) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x00075ebe) main_mp4_pane_t

0xb365,	// (0x0007195d) mp4_progress_pane_ParamLimits

0xb365,	// (0x0007195d) mp4_progress_pane

0xb3af,	// (0x000719a7) mp4_rocker_pane_ParamLimits

0xb3af,	// (0x000719a7) mp4_rocker_pane

0x3618,	// (0x00069c10) mp4_progress_pane_t1

0x3631,	// (0x00069c29) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x00075ec7) mp4_progress_pane_t

0x364a,	// (0x00069c42) mup_progress_pane_cp04

0x1c11,	// (0x00068209) mp4_rocker_pane_g1

0xb3d1,	// (0x000719c9) aid_cell_size_keypad2_ParamLimits

0xb3d1,	// (0x000719c9) aid_cell_size_keypad2

0xb3e1,	// (0x000719d9) dialer2_ne_pane_ParamLimits

0xb3e1,	// (0x000719d9) dialer2_ne_pane

0xb3ed,	// (0x000719e5) grid_dialer2_keypad_pane_ParamLimits

0xb3ed,	// (0x000719e5) grid_dialer2_keypad_pane

0x39e7,	// (0x00069fdf) bg_popup_call_pane_cp07_ParamLimits

0x39e7,	// (0x00069fdf) bg_popup_call_pane_cp07

0xb3fb,	// (0x000719f3) dialer2_ne_pane_t1_ParamLimits

0xb3fb,	// (0x000719f3) dialer2_ne_pane_t1

0xb420,	// (0x00071a18) cell_dialer2_keypad_pane_ParamLimits

0xb420,	// (0x00071a18) cell_dialer2_keypad_pane

0x3672,	// (0x00069c6a) bg_button_pane_pane_cp04_ParamLimits

0x3672,	// (0x00069c6a) bg_button_pane_pane_cp04

0xb437,	// (0x00071a2f) cell_dialer2_keypad_pane_g1_ParamLimits

0xb437,	// (0x00071a2f) cell_dialer2_keypad_pane_g1

0x7839,	// (0x0006de31) aid_placing_vt_set_content_ParamLimits

0x7839,	// (0x0006de31) aid_placing_vt_set_content

0x7861,	// (0x0006de59) aid_placing_vt_set_title_ParamLimits

0x7861,	// (0x0006de59) aid_placing_vt_set_title

0x6739,	// (0x0006cd31) main_image3_pane

0xb4d1,	// (0x00071ac9) area_side_right_pane_cp01_ParamLimits

0xb4d1,	// (0x00071ac9) area_side_right_pane_cp01

0xe3f7,	// (0x000749ef) main_image3_pane_g1_ParamLimits

0xe3f7,	// (0x000749ef) main_image3_pane_g1

0xb500,	// (0x00071af8) main_image3_pane_g2_ParamLimits

0xb500,	// (0x00071af8) main_image3_pane_g2

0xb519,	// (0x00071b11) main_image3_pane_g3_ParamLimits

0xb519,	// (0x00071b11) main_image3_pane_g3

0xb532,	// (0x00071b2a) main_image3_pane_g4_ParamLimits

0xb532,	// (0x00071b2a) main_image3_pane_g4

0x0003,

0xf8de,	// (0x00075ed6) main_image3_pane_g_ParamLimits

0xf8de,	// (0x00075ed6) main_image3_pane_g

0xb54b,	// (0x00071b43) main_image3_pane_t1_ParamLimits

0xb54b,	// (0x00071b43) main_image3_pane_t1

0xb570,	// (0x00071b68) main_image3_pane_t2_ParamLimits

0xb570,	// (0x00071b68) main_image3_pane_t2

0xb58f,	// (0x00071b87) main_image3_pane_t3_ParamLimits

0xb58f,	// (0x00071b87) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x00075edf) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x00075edf) main_image3_pane_t

0x69e9,	// (0x0006cfe1) grid_sctrl_middle_pane_cp01_ParamLimits

0x69e9,	// (0x0006cfe1) grid_sctrl_middle_pane_cp01

0xb5f0,	// (0x00071be8) cell_sctrl_middle_pane_cp01_ParamLimits

0xb5f0,	// (0x00071be8) cell_sctrl_middle_pane_cp01

0xb601,	// (0x00071bf9) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb601,	// (0x00071bf9) cell_sctrl_middle_pane_cp01_g1

0x6739,	// (0x0006cd31) main_call4_pane

0xb60e,	// (0x00071c06) aid_size_button_call4_ParamLimits

0xb60e,	// (0x00071c06) aid_size_button_call4

0xb640,	// (0x00071c38) call4_windows_pane_ParamLimits

0xb640,	// (0x00071c38) call4_windows_pane

0xb65c,	// (0x00071c54) grid_call4_button_pane_ParamLimits

0xb65c,	// (0x00071c54) grid_call4_button_pane

0x367e,	// (0x00069c76) call4_windows_conf_pane

0x3699,	// (0x00069c91) popup_call4_audio_first_window_ParamLimits

0x3699,	// (0x00069c91) popup_call4_audio_first_window

0x36e7,	// (0x00069cdf) popup_call4_audio_second_window_ParamLimits

0x36e7,	// (0x00069cdf) popup_call4_audio_second_window

0x36fd,	// (0x00069cf5) popup_call4_audio_wait_window_ParamLimits

0x36fd,	// (0x00069cf5) popup_call4_audio_wait_window

0xb680,	// (0x00071c78) cell_call4_button_pane_ParamLimits

0xb680,	// (0x00071c78) cell_call4_button_pane

0xb6a3,	// (0x00071c9b) bg_button_pane_cp09_ParamLimits

0xb6a3,	// (0x00071c9b) bg_button_pane_cp09

0xb6af,	// (0x00071ca7) cell_call4_button_pane_g1_ParamLimits

0xb6af,	// (0x00071ca7) cell_call4_button_pane_g1

0xb6bc,	// (0x00071cb4) cell_call4_button_pane_t1_ParamLimits

0xb6bc,	// (0x00071cb4) cell_call4_button_pane_t1

0x3745,	// (0x00069d3d) popup_call4_audio_conf_window_ParamLimits

0x3745,	// (0x00069d3d) popup_call4_audio_conf_window

0xa9a8,	// (0x00070fa0) mup3_progress_pane_t1_ParamLimits

0xa9bf,	// (0x00070fb7) mup3_progress_pane_t2_ParamLimits

0x1ebc,	// (0x000684b4) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x00075db8) mup3_progress_pane_t_ParamLimits

0x1ed3,	// (0x000684cb) mup_progress_pane_cp03_ParamLimits

0xaec4,	// (0x000714bc) mup3_control_keys_pane_g4_copy1

0xb393,	// (0x0007198b) mp4_rocker2_pane_ParamLimits

0xb393,	// (0x0007198b) mp4_rocker2_pane

0x3767,	// (0x00069d5f) mp4_rocker2_pane_g1

0x375f,	// (0x00069d57) mp4_rocker2_pane_g2

0xb6ce,	// (0x00071cc6) mp4_rocker2_pane_g3

0xb6d6,	// (0x00071cce) mp4_rocker2_pane_g4

0xb6de,	// (0x00071cd6) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x00075ee8) mp4_rocker2_pane_g

0x6739,	// (0x0006cd31) main_camera4_pane

0x6739,	// (0x0006cd31) main_video4_pane

0xb112,	// (0x0007170a) main_video_tele_dialer_pane_t1_ParamLimits

0xb112,	// (0x0007170a) main_video_tele_dialer_pane_t1

0xb124,	// (0x0007171c) main_video_tele_dialer_pane_t2_ParamLimits

0xb124,	// (0x0007171c) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x00075ea2) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x00075ea2) main_video_tele_dialer_pane_t

0xb6fe,	// (0x00071cf6) cam4_autofocus_pane_ParamLimits

0xb6fe,	// (0x00071cf6) cam4_autofocus_pane

0xb716,	// (0x00071d0e) cam4_image_uncrop_pane_ParamLimits

0xb716,	// (0x00071d0e) cam4_image_uncrop_pane

0xb72f,	// (0x00071d27) cam4_indicators_pane_ParamLimits

0xb72f,	// (0x00071d27) cam4_indicators_pane

0xb74b,	// (0x00071d43) main_camera4_pane_g1_ParamLimits

0xb74b,	// (0x00071d43) main_camera4_pane_g1

0xb757,	// (0x00071d4f) main_camera4_pane_g2_ParamLimits

0xb757,	// (0x00071d4f) main_camera4_pane_g2

0xb757,	// (0x00071d4f) main_camera4_pane_g3_ParamLimits

0xb757,	// (0x00071d4f) main_camera4_pane_g3

0xb763,	// (0x00071d5b) main_camera4_pane_g4_ParamLimits

0xb763,	// (0x00071d5b) main_camera4_pane_g4

0xb76f,	// (0x00071d67) main_camera4_pane_g5_ParamLimits

0xb76f,	// (0x00071d67) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x00075ef3) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x00075ef3) main_camera4_pane_g

0xb789,	// (0x00071d81) main_camera4_pane_t1_ParamLimits

0xb789,	// (0x00071d81) main_camera4_pane_t1

0x1e41,	// (0x00068439) bg_tb_trans_pane_cp06

0xb7db,	// (0x00071dd3) cam4_indicators_pane_g1

0xb7e8,	// (0x00071de0) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x00075f0e) cam4_indicators_pane_g

0xb808,	// (0x00071e00) cam4_indicators_pane_t1

0xb832,	// (0x00071e2a) main_video4_pane_g1_ParamLimits

0xb832,	// (0x00071e2a) main_video4_pane_g1

0xb83e,	// (0x00071e36) main_video4_pane_g2_ParamLimits

0xb83e,	// (0x00071e36) main_video4_pane_g2

0xb84a,	// (0x00071e42) main_video4_pane_g3_ParamLimits

0xb84a,	// (0x00071e42) main_video4_pane_g3

0xb856,	// (0x00071e4e) main_video4_pane_g4_ParamLimits

0xb856,	// (0x00071e4e) main_video4_pane_g4

0x0004,

0xf91d,	// (0x00075f15) main_video4_pane_g_ParamLimits

0xf91d,	// (0x00075f15) main_video4_pane_g

0xb878,	// (0x00071e70) vid4_indicators_pane_ParamLimits

0xb878,	// (0x00071e70) vid4_indicators_pane

0xb896,	// (0x00071e8e) video4_image_uncrop_cif_pane_ParamLimits

0xb896,	// (0x00071e8e) video4_image_uncrop_cif_pane

0xb8a5,	// (0x00071e9d) video4_image_uncrop_nhd_pane_ParamLimits

0xb8a5,	// (0x00071e9d) video4_image_uncrop_nhd_pane

0xb716,	// (0x00071d0e) video4_image_uncrop_vga_pane_ParamLimits

0xb716,	// (0x00071d0e) video4_image_uncrop_vga_pane

0x9873,	// (0x0006fe6b) bg_tb_trans_pane_cp07

0xb7db,	// (0x00071dd3) vid4_indicators_pane_g1

0xb8be,	// (0x00071eb6) vid4_indicators_pane_g2

0xb8cb,	// (0x00071ec3) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x00075f20) vid4_indicators_pane_g

0xb8f8,	// (0x00071ef0) vid4_indicators_pane_t1

0xb912,	// (0x00071f0a) cam4_autofocus_pane_g1

0xb91a,	// (0x00071f12) cam4_autofocus_pane_g2

0xb922,	// (0x00071f1a) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x00075f2b) cam4_autofocus_pane_g

0xb92a,	// (0x00071f22) cam4_autofocus_pane_g3_copy1

0xb144,	// (0x0007173c) video_down_pane_cp_t1

0xb152,	// (0x0007174a) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x00075ea7) video_down_pane_cp_t

0x69e9,	// (0x0006cfe1) popup_vitu2_window_ParamLimits

0x69e9,	// (0x0006cfe1) popup_vitu2_window

0xb932,	// (0x00071f2a) aid_size_cell2_itu2_ParamLimits

0xb932,	// (0x00071f2a) aid_size_cell2_itu2

0xb954,	// (0x00071f4c) aid_size_cell_itu2_ParamLimits

0xb954,	// (0x00071f4c) aid_size_cell_itu2

0x39e7,	// (0x00069fdf) bg_popup_window_pane_cp09_ParamLimits

0x39e7,	// (0x00069fdf) bg_popup_window_pane_cp09

0xb998,	// (0x00071f90) field_vitu2_entry_pane_ParamLimits

0xb998,	// (0x00071f90) field_vitu2_entry_pane

0xb9b8,	// (0x00071fb0) grid_vitu2_function_pane_ParamLimits

0xb9b8,	// (0x00071fb0) grid_vitu2_function_pane

0xb9fc,	// (0x00071ff4) grid_vitu2_itu_pane_ParamLimits

0xb9fc,	// (0x00071ff4) grid_vitu2_itu_pane

0xba70,	// (0x00072068) cell_vitu2_itu_pane_ParamLimits

0xba70,	// (0x00072068) cell_vitu2_itu_pane

0xba87,	// (0x0007207f) cell_vitu2_function_pane_ParamLimits

0xba87,	// (0x0007207f) cell_vitu2_function_pane

0x376f,	// (0x00069d67) bg_popup_call_pane_cp08_ParamLimits

0x376f,	// (0x00069d67) bg_popup_call_pane_cp08

0x3788,	// (0x00069d80) field_vitu2_entry_pane_g1

0x3794,	// (0x00069d8c) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x00075f32) field_vitu2_entry_pane_g

0x58f8,	// (0x0006bef0) field_vitu2_entry_pane_t1_ParamLimits

0x58f8,	// (0x0006bef0) field_vitu2_entry_pane_t1

0x5913,	// (0x0006bf0b) field_vitu2_entry_pane_t2_ParamLimits

0x5913,	// (0x0006bf0b) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x00075f39) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x00075f39) field_vitu2_entry_pane_t

0xbacb,	// (0x000720c3) bg_button_pane_cp010_ParamLimits

0xbacb,	// (0x000720c3) bg_button_pane_cp010

0xbad9,	// (0x000720d1) cell_vitu2_itu_pane_g1

0xbaf7,	// (0x000720ef) cell_vitu2_itu_pane_t1_ParamLimits

0xbaf7,	// (0x000720ef) cell_vitu2_itu_pane_t1

0x5930,	// (0x0006bf28) cell_vitu2_itu_pane_t2_ParamLimits

0x5930,	// (0x0006bf28) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x00075f43) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x00075f43) cell_vitu2_itu_pane_t

0x9873,	// (0x0006fe6b) bg_button_pane_cp011

0xbb49,	// (0x00072141) cell_vitu2_function_pane_g1

0x6739,	// (0x0006cd31) main_myfav_hc_pane

0xb5d1,	// (0x00071bc9) popup_image3_note_pane_ParamLimits

0xb5d1,	// (0x00071bc9) popup_image3_note_pane

0xb5df,	// (0x00071bd7) popup_image3_tool_bar_pane_ParamLimits

0xb5df,	// (0x00071bd7) popup_image3_tool_bar_pane

0x599e,	// (0x0006bf96) cell_vitu2_itu_pane_t3_ParamLimits

0x599e,	// (0x0006bf96) cell_vitu2_itu_pane_t3

0x6739,	// (0x0006cd31) bg_popup_trans_pane

0x37b6,	// (0x00069dae) grid_image3_tool_bar_pane

0x37c0,	// (0x00069db8) bg_popup_trans_pane_g1

0xecf2,	// (0x000752ea) bg_popup_trans_pane_g2

0x37c8,	// (0x00069dc0) bg_popup_trans_pane_g3

0x37d0,	// (0x00069dc8) bg_popup_trans_pane_g4

0x37d8,	// (0x00069dd0) bg_popup_trans_pane_g5

0x37e0,	// (0x00069dd8) bg_popup_trans_pane_g6

0x37e8,	// (0x00069de0) bg_popup_trans_pane_g7

0x37f0,	// (0x00069de8) bg_popup_trans_pane_g8

0xecd2,	// (0x000752ca) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00075f4a) bg_popup_trans_pane_g

0x37f8,	// (0x00069df0) cell_image3_tool_bar_pane_ParamLimits

0x37f8,	// (0x00069df0) cell_image3_tool_bar_pane

0x1c11,	// (0x00068209) cell_image3_tool_bar_pane_g1

0x6739,	// (0x0006cd31) bg_popup_trans_pane_cp1

0x380e,	// (0x00069e06) popup_image3_note_pane_t1

0x381c,	// (0x00069e14) popup_image3_note_pane_t2

0x382a,	// (0x00069e22) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x00075f5d) popup_image3_note_pane_t

0x383a,	// (0x00069e32) popup_image3_note_pane_t3_copy1

0xbb5d,	// (0x00072155) bg_myfav_hc_instruction_pane_ParamLimits

0xbb5d,	// (0x00072155) bg_myfav_hc_instruction_pane

0xbb75,	// (0x0007216d) cell_myfav_contact_pane_ParamLimits

0xbb75,	// (0x0007216d) cell_myfav_contact_pane

0xbb8f,	// (0x00072187) cell_myfav_contact_pane_cp1_ParamLimits

0xbb8f,	// (0x00072187) cell_myfav_contact_pane_cp1

0xbba7,	// (0x0007219f) cell_myfav_contact_pane_cp2_ParamLimits

0xbba7,	// (0x0007219f) cell_myfav_contact_pane_cp2

0xbbbf,	// (0x000721b7) cell_myfav_contact_pane_cp3_ParamLimits

0xbbbf,	// (0x000721b7) cell_myfav_contact_pane_cp3

0xbbd6,	// (0x000721ce) cell_myfav_contact_pane_cp4_ParamLimits

0xbbd6,	// (0x000721ce) cell_myfav_contact_pane_cp4

0xbbec,	// (0x000721e4) cell_myfav_contact_pane_cp5_ParamLimits

0xbbec,	// (0x000721e4) cell_myfav_contact_pane_cp5

0xbc00,	// (0x000721f8) cell_myfav_contact_pane_cp6_ParamLimits

0xbc00,	// (0x000721f8) cell_myfav_contact_pane_cp6

0xbc14,	// (0x0007220c) cell_myfav_contact_pane_cp7_ParamLimits

0xbc14,	// (0x0007220c) cell_myfav_contact_pane_cp7

0x3848,	// (0x00069e40) listscroll_gen_pane_cp05

0xbc2c,	// (0x00072224) main_myfav_hc_pane_g1_ParamLimits

0xbc2c,	// (0x00072224) main_myfav_hc_pane_g1

0xbc46,	// (0x0007223e) main_myfav_hc_pane_g2_ParamLimits

0xbc46,	// (0x0007223e) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x00075f64) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x00075f64) main_myfav_hc_pane_g

0xbc78,	// (0x00072270) main_myfav_hc_pane_t1_ParamLimits

0xbc78,	// (0x00072270) main_myfav_hc_pane_t1

0x3851,	// (0x00069e49) main_myfav_hc_pane_t2_ParamLimits

0x3851,	// (0x00069e49) main_myfav_hc_pane_t2

0x3863,	// (0x00069e5b) main_myfav_hc_pane_t3_ParamLimits

0x3863,	// (0x00069e5b) main_myfav_hc_pane_t3

0xbc8f,	// (0x00072287) main_myfav_hc_pane_t4_ParamLimits

0xbc8f,	// (0x00072287) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x00075f6b) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x00075f6b) main_myfav_hc_pane_t

0x1c11,	// (0x00068209) bg_myfav_hc_instruction_pane_g1

0x3875,	// (0x00069e6d) cell_myfav_contact_pane_g1_ParamLimits

0x3875,	// (0x00069e6d) cell_myfav_contact_pane_g1

0x3875,	// (0x00069e6d) cell_myfav_contact_pane_g2_ParamLimits

0x3875,	// (0x00069e6d) cell_myfav_contact_pane_g2

0x3881,	// (0x00069e79) cell_myfav_contact_pane_g3_ParamLimits

0x3881,	// (0x00069e79) cell_myfav_contact_pane_g3

0x1ea6,	// (0x0006849e) cell_myfav_contact_pane_g4_ParamLimits

0x1ea6,	// (0x0006849e) cell_myfav_contact_pane_g4

0x388e,	// (0x00069e86) cell_myfav_contact_pane_g5_ParamLimits

0x388e,	// (0x00069e86) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x00075f76) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x00075f76) cell_myfav_contact_pane_g

0xbc60,	// (0x00072258) main_myfav_hc_pane_g3_ParamLimits

0xbc60,	// (0x00072258) main_myfav_hc_pane_g3

0x68fa,	// (0x0006cef2) popup_adpt_find_window

0xbcb9,	// (0x000722b1) afind_page_pane_ParamLimits

0xbcb9,	// (0x000722b1) afind_page_pane

0xbcc6,	// (0x000722be) aid_size_cell_afind_ParamLimits

0xbcc6,	// (0x000722be) aid_size_cell_afind

0xbce0,	// (0x000722d8) bg_popup_sub_pane_cp09_ParamLimits

0xbce0,	// (0x000722d8) bg_popup_sub_pane_cp09

0xbced,	// (0x000722e5) find_pane_cp01_ParamLimits

0xbced,	// (0x000722e5) find_pane_cp01

0x389a,	// (0x00069e92) grid_afind_control_pane_ParamLimits

0x389a,	// (0x00069e92) grid_afind_control_pane

0xbcfa,	// (0x000722f2) grid_afind_pane_ParamLimits

0xbcfa,	// (0x000722f2) grid_afind_pane

0xbd16,	// (0x0007230e) cell_afind_pane_ParamLimits

0xbd16,	// (0x0007230e) cell_afind_pane

0x1c11,	// (0x00068209) afind_page_pane_g1

0xbd62,	// (0x0007235a) afind_page_pane_g2

0xbd6b,	// (0x00072363) afind_page_pane_g3

0x0002,

0xf989,	// (0x00075f81) afind_page_pane_g

0xbd74,	// (0x0007236c) afind_page_pane_t1

0x38ae,	// (0x00069ea6) cell_afind_grid_control_pane_ParamLimits

0x38ae,	// (0x00069ea6) cell_afind_grid_control_pane

0x3672,	// (0x00069c6a) bg_button_pane_cp69_ParamLimits

0x3672,	// (0x00069c6a) bg_button_pane_cp69

0xbd94,	// (0x0007238c) cell_afind_pane_g1_ParamLimits

0xbd94,	// (0x0007238c) cell_afind_pane_g1

0xbda1,	// (0x00072399) cell_afind_pane_t1_ParamLimits

0xbda1,	// (0x00072399) cell_afind_pane_t1

0xeae9,	// (0x000750e1) bg_button_pane_cp72

0x38bd,	// (0x00069eb5) cell_afind_grid_control_pane_g1

0x93eb,	// (0x0006f9e3) aid_image_placing_area_ParamLimits

0x93eb,	// (0x0006f9e3) aid_image_placing_area

0x21c3,	// (0x000687bb) field_vitu_entry_pane_g1_ParamLimits

0x21c3,	// (0x000687bb) field_vitu_entry_pane_g1

0x21cf,	// (0x000687c7) field_vitu_entry_pane_g2_ParamLimits

0x21cf,	// (0x000687c7) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x00075e32) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x00075e32) field_vitu_entry_pane_g

0xaf4e,	// (0x00071546) cell_vitu_itu_pane_g1_ParamLimits

0xaf90,	// (0x00071588) cell_vitu_itu_pane_t3_ParamLimits

0xaf90,	// (0x00071588) cell_vitu_itu_pane_t3

0x3618,	// (0x00069c10) mp4_progress_pane_t1_ParamLimits

0x3631,	// (0x00069c29) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x00075ec7) mp4_progress_pane_t_ParamLimits

0x364a,	// (0x00069c42) mup_progress_pane_cp04_ParamLimits

0xbca3,	// (0x0007229b) main_myfav_hc_pane_t5_ParamLimits

0xbca3,	// (0x0007229b) main_myfav_hc_pane_t5

0x55c1,	// (0x0006bbb9) aid_zoom_text_primary

0x68fa,	// (0x0006cef2) popup_adpt_find_window_ParamLimits

0x9873,	// (0x0006fe6b) main_cam_set_pane

0xb73d,	// (0x00071d35) cam4_zoom_pane_ParamLimits

0xb73d,	// (0x00071d35) cam4_zoom_pane

0xbdb3,	// (0x000723ab) main_cam_set_pane_g1_ParamLimits

0xbdb3,	// (0x000723ab) main_cam_set_pane_g1

0xbdc1,	// (0x000723b9) main_cam_set_pane_g2_ParamLimits

0xbdc1,	// (0x000723b9) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x00075f88) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x00075f88) main_cam_set_pane_g

0xbdcd,	// (0x000723c5) main_cam_set_pane_t1_ParamLimits

0xbdcd,	// (0x000723c5) main_cam_set_pane_t1

0xbde9,	// (0x000723e1) main_cset_listscroll_pane_ParamLimits

0xbde9,	// (0x000723e1) main_cset_listscroll_pane

0xbe18,	// (0x00072410) main_cset_slider_pane_ParamLimits

0xbe18,	// (0x00072410) main_cset_slider_pane

0x38ce,	// (0x00069ec6) main_cset_list_pane_ParamLimits

0x38ce,	// (0x00069ec6) main_cset_list_pane

0x38de,	// (0x00069ed6) scroll_pane_cp028

0xbe39,	// (0x00072431) aid_area_touch_slider

0xbe55,	// (0x0007244d) cset_slider_pane

0xbe7f,	// (0x00072477) main_cset_slider_pane_g1

0xbe94,	// (0x0007248c) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x00075f8d) main_cset_slider_pane_g

0x3917,	// (0x00069f0f) main_cset_slider_pane_t1

0xbf50,	// (0x00072548) main_cset_slider_pane_t2

0xbf6a,	// (0x00072562) main_cset_slider_pane_t3

0xbf84,	// (0x0007257c) main_cset_slider_pane_t4

0xbf9e,	// (0x00072596) main_cset_slider_pane_t5

0xbfba,	// (0x000725b2) main_cset_slider_pane_t6

0xbfcf,	// (0x000725c7) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x00075fb2) main_cset_slider_pane_t

0xc0d3,	// (0x000726cb) cset_list_set_pane_ParamLimits

0xc0d3,	// (0x000726cb) cset_list_set_pane

0xc0e4,	// (0x000726dc) aid_position_infowindow_above

0xc0ec,	// (0x000726e4) aid_position_infowindow_below

0xc0f4,	// (0x000726ec) cset_list_set_pane_g1_ParamLimits

0xc0f4,	// (0x000726ec) cset_list_set_pane_g1

0x59eb,	// (0x0006bfe3) cset_list_set_pane_g3_ParamLimits

0x59eb,	// (0x0006bfe3) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x00075fd1) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x00075fd1) cset_list_set_pane_g

0x59fa,	// (0x0006bff2) cset_list_set_pane_t1_ParamLimits

0x59fa,	// (0x0006bff2) cset_list_set_pane_t1

0x9873,	// (0x0006fe6b) list_highlight_pane_cp021_ParamLimits

0x9873,	// (0x0006fe6b) list_highlight_pane_cp021

0x03c7,	// (0x000669bf) cset_slider_pane_g1

0x03d9,	// (0x000669d1) cset_slider_pane_g2

0x03d0,	// (0x000669c8) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x00075fd6) cset_slider_pane_g

0xc100,	// (0x000726f8) aid_area_touch_cam4_zoom

0xc108,	// (0x00072700) cam4_zoom_cont_pane

0xc110,	// (0x00072708) cam4_zoom_pane_g1

0xc118,	// (0x00072710) cam4_zoom_pane_g2

0xc120,	// (0x00072718) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x00075fdd) cam4_zoom_pane_g

0x415d,	// (0x0006a755) cam4_zoom_cont_pane_g1

0x4166,	// (0x0006a75e) cam4_zoom_cont_pane_g2

0x416f,	// (0x0006a767) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x00075fe4) cam4_zoom_cont_pane_g

0xb628,	// (0x00071c20) call4_image_pane_ParamLimits

0xb628,	// (0x00071c20) call4_image_pane

0x367e,	// (0x00069c76) call4_windows_conf_pane_ParamLimits

0x36c5,	// (0x00069cbd) popup_call4_audio_in_window_ParamLimits

0x36c5,	// (0x00069cbd) popup_call4_audio_in_window

0x6739,	// (0x0006cd31) bg_popup_call2_act_pane_cp02

0x373d,	// (0x00069d35) call4_list_conf_pane

0x1c11,	// (0x00068209) call4_image_pane_g1

0x1c11,	// (0x00068209) call4_image_pane_g2

0x0001,

0xf700,	// (0x00075cf8) call4_image_pane_g

0x39b7,	// (0x00069faf) list_single_graphic_popup_conf4_pane_ParamLimits

0x39b7,	// (0x00069faf) list_single_graphic_popup_conf4_pane

0x6739,	// (0x0006cd31) list_highlight_pane_cp022

0x39f5,	// (0x00069fed) list_single_graphic_popup_conf4_pane_g1

0x00a1,	// (0x00066699) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x00075feb) list_single_graphic_popup_conf4_pane_g

0x39fd,	// (0x00069ff5) list_single_graphic_popup_conf4_pane_t1

0x79bb,	// (0x0006dfb3) popup_vtel_slider_window_ParamLimits

0x79bb,	// (0x0006dfb3) popup_vtel_slider_window

0x3660,	// (0x00069c58) dialer2_ne_pane_t2_ParamLimits

0x3660,	// (0x00069c58) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x00075ecc) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x00075ecc) dialer2_ne_pane_t

0x9873,	// (0x0006fe6b) bg_popup_sub_pane_cp010_ParamLimits

0x9873,	// (0x0006fe6b) bg_popup_sub_pane_cp010

0xc128,	// (0x00072720) popup_vtel_slider_window_g1_ParamLimits

0xc128,	// (0x00072720) popup_vtel_slider_window_g1

0xc134,	// (0x0007272c) popup_vtel_slider_window_g2_ParamLimits

0xc134,	// (0x0007272c) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x00075ff0) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x00075ff0) popup_vtel_slider_window_g

0xc17c,	// (0x00072774) vtel_slider_pane_ParamLimits

0xc17c,	// (0x00072774) vtel_slider_pane

0xc18b,	// (0x00072783) vtel_slider_pane_g1_ParamLimits

0xc18b,	// (0x00072783) vtel_slider_pane_g1

0xc198,	// (0x00072790) vtel_slider_pane_g2_ParamLimits

0xc198,	// (0x00072790) vtel_slider_pane_g2

0xc1a5,	// (0x0007279d) vtel_slider_pane_g3_ParamLimits

0xc1a5,	// (0x0007279d) vtel_slider_pane_g3

0xc18b,	// (0x00072783) vtel_slider_pane_g4_ParamLimits

0xc18b,	// (0x00072783) vtel_slider_pane_g4

0xc1b2,	// (0x000727aa) vtel_slider_pane_g5_ParamLimits

0xc1b2,	// (0x000727aa) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00075ff9) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00075ff9) vtel_slider_pane_g

0x6739,	// (0x0006cd31) main_gallery2_pane

0xb97a,	// (0x00071f72) aid_size_row_itut2_dropdow_list_ParamLimits

0xb97a,	// (0x00071f72) aid_size_row_itut2_dropdow_list

0xb9da,	// (0x00071fd2) grid_vitu2_function_top_pane_ParamLimits

0xb9da,	// (0x00071fd2) grid_vitu2_function_top_pane

0xba2c,	// (0x00072024) popup_vitu2_dropdown_list_window_ParamLimits

0xba2c,	// (0x00072024) popup_vitu2_dropdown_list_window

0xba4c,	// (0x00072044) popup_vitu2_match_list_window

0xc1bf,	// (0x000727b7) cell_vitu2_function_top_pane_ParamLimits

0xc1bf,	// (0x000727b7) cell_vitu2_function_top_pane

0xc1df,	// (0x000727d7) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc1df,	// (0x000727d7) cell_vitu2_function_top_pane_cp01

0xc1fd,	// (0x000727f5) cell_vitu2_function_top_wide_pane_ParamLimits

0xc1fd,	// (0x000727f5) cell_vitu2_function_top_wide_pane

0x9873,	// (0x0006fe6b) bg_button_pane_cp012

0xc21b,	// (0x00072813) cell_vitu2_function_top_pane_g1

0xc22a,	// (0x00072822) bg_button_pane_cp013_ParamLimits

0xc22a,	// (0x00072822) bg_button_pane_cp013

0xc246,	// (0x0007283e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc246,	// (0x0007283e) cell_vitu2_function_top_wide_pane_g1

0x69e9,	// (0x0006cfe1) bg_popup_sub_pane_cp20

0xc25e,	// (0x00072856) list_vitu2_match_list_pane

0x37c0,	// (0x00069db8) bg_popup_sub_pane_cp20_g1

0x37c8,	// (0x00069dc0) bg_popup_sub_pane_cp20_g2

0xecf2,	// (0x000752ea) bg_popup_sub_pane_cp20_g3

0x37d0,	// (0x00069dc8) bg_popup_sub_pane_cp20_g4

0xecd2,	// (0x000752ca) bg_popup_sub_pane_cp20_g5

0x3a13,	// (0x0006a00b) bg_popup_sub_pane_cp20_g6

0x37e0,	// (0x00069dd8) bg_popup_sub_pane_cp20_g7

0x37e8,	// (0x00069de0) bg_popup_sub_pane_cp20_g8

0x37f0,	// (0x00069de8) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x00076004) bg_popup_sub_pane_cp20_g

0xc276,	// (0x0007286e) list_vitu2_match_list_item_pane_ParamLimits

0xc276,	// (0x0007286e) list_vitu2_match_list_item_pane

0xc288,	// (0x00072880) list_vitu2_match_list_item_pane_t1

0x6739,	// (0x0006cd31) bg_popup_sub_pane_cp21

0xf095,	// (0x0007568d) grid_vitu2_dropdown_list_pane

0xc296,	// (0x0007288e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc296,	// (0x0007288e) cell_vitu2_dropdown_list_char_pane

0xc2bb,	// (0x000728b3) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc2bb,	// (0x000728b3) cell_vitu2_dropdown_list_ctrl_pane

0x3a2d,	// (0x0006a025) cell_vitu2_dropdown_list_char_pane_g1

0x3a24,	// (0x0006a01c) cell_vitu2_dropdown_list_char_pane_g2

0x3a1b,	// (0x0006a013) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x00076021) cell_vitu2_dropdown_list_char_pane_g

0xc2e9,	// (0x000728e1) cell_vitu2_dropdown_list_char_pane_t1

0xc2f7,	// (0x000728ef) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc2f7,	// (0x000728ef) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc307,	// (0x000728ff) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc307,	// (0x000728ff) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc318,	// (0x00072910) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc318,	// (0x00072910) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc328,	// (0x00072920) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc328,	// (0x00072920) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1e41,	// (0x00068439) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1e41,	// (0x00068439) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x00076028) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x00076028) cell_vitu2_dropdown_list_ctrl_pane_g

0xc341,	// (0x00072939) aid_size_cell_gallery2_ParamLimits

0xc341,	// (0x00072939) aid_size_cell_gallery2

0xc34f,	// (0x00072947) grid_gallery2_pane_ParamLimits

0xc34f,	// (0x00072947) grid_gallery2_pane

0xc35e,	// (0x00072956) scroll_pane_cp029_ParamLimits

0xc35e,	// (0x00072956) scroll_pane_cp029

0xc36a,	// (0x00072962) cell_gallery2_pane_ParamLimits

0xc36a,	// (0x00072962) cell_gallery2_pane

0x3a36,	// (0x0006a02e) cell_gallery2_pane_g2

0xc394,	// (0x0007298c) cell_gallery2_pane_g3

0x3a40,	// (0x0006a038) cell_gallery2_pane_g4

0x3a48,	// (0x0006a040) cell_gallery2_pane_g5

0x026f,	// (0x00066867) grid_highlight_pane_cp10

0xba4c,	// (0x00072044) popup_vitu2_match_list_window_ParamLimits

0xba60,	// (0x00072058) popup_vitu2_query_window_ParamLimits

0xba60,	// (0x00072058) popup_vitu2_query_window

0x6739,	// (0x0006cd31) bg_vitu2_candi_button_pane

0x3a2d,	// (0x0006a025) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3a24,	// (0x0006a01c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x3a1b,	// (0x0006a013) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5a61,	// (0x0006c059) bg_button_pane_cp015

0xc39c,	// (0x00072994) bg_button_pane_cp016

0xc3af,	// (0x000729a7) bg_button_pane_cp017

0x16dc,	// (0x00067cd4) bg_popup_sub_pane_cp22

0x3a50,	// (0x0006a048) popup_vitu2_query_window_g1

0x5a94,	// (0x0006c08c) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x00076033) popup_vitu2_query_window_g

0x5ab1,	// (0x0006c0a9) popup_vitu2_query_window_t1_ParamLimits

0x5ab1,	// (0x0006c0a9) popup_vitu2_query_window_t1

0x5ae4,	// (0x0006c0dc) popup_vitu2_query_window_t2_ParamLimits

0x5ae4,	// (0x0006c0dc) popup_vitu2_query_window_t2

0x5af6,	// (0x0006c0ee) popup_vitu2_query_window_t3_ParamLimits

0x5af6,	// (0x0006c0ee) popup_vitu2_query_window_t3

0xc3d3,	// (0x000729cb) popup_vitu2_query_window_t4_ParamLimits

0xc3d3,	// (0x000729cb) popup_vitu2_query_window_t4

0xc3f6,	// (0x000729ee) popup_vitu2_query_window_t5_ParamLimits

0xc3f6,	// (0x000729ee) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0007603a) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0007603a) popup_vitu2_query_window_t

0x38c6,	// (0x00069ebe) main_cset_text_pane

0xbe39,	// (0x00072431) aid_area_touch_slider_ParamLimits

0xbe55,	// (0x0007244d) cset_slider_pane_ParamLimits

0xbe7f,	// (0x00072477) main_cset_slider_pane_g1_ParamLimits

0xbe94,	// (0x0007248c) main_cset_slider_pane_g2_ParamLimits

0x38e7,	// (0x00069edf) main_cset_slider_pane_g3_ParamLimits

0x38e7,	// (0x00069edf) main_cset_slider_pane_g3

0xbea9,	// (0x000724a1) main_cset_slider_pane_g4_ParamLimits

0xbea9,	// (0x000724a1) main_cset_slider_pane_g4

0xbeb8,	// (0x000724b0) main_cset_slider_pane_g5_ParamLimits

0xbeb8,	// (0x000724b0) main_cset_slider_pane_g5

0xbec4,	// (0x000724bc) main_cset_slider_pane_g6_ParamLimits

0xbec4,	// (0x000724bc) main_cset_slider_pane_g6

0xf995,	// (0x00075f8d) main_cset_slider_pane_g_ParamLimits

0x3917,	// (0x00069f0f) main_cset_slider_pane_t1_ParamLimits

0xbf50,	// (0x00072548) main_cset_slider_pane_t2_ParamLimits

0xbf6a,	// (0x00072562) main_cset_slider_pane_t3_ParamLimits

0xbf84,	// (0x0007257c) main_cset_slider_pane_t4_ParamLimits

0xbf9e,	// (0x00072596) main_cset_slider_pane_t5_ParamLimits

0xbfba,	// (0x000725b2) main_cset_slider_pane_t6_ParamLimits

0xbfcf,	// (0x000725c7) main_cset_slider_pane_t7_ParamLimits

0xbff9,	// (0x000725f1) main_cset_slider_pane_t8_ParamLimits

0xbff9,	// (0x000725f1) main_cset_slider_pane_t8

0xc021,	// (0x00072619) main_cset_slider_pane_t9_ParamLimits

0xc021,	// (0x00072619) main_cset_slider_pane_t9

0xc049,	// (0x00072641) main_cset_slider_pane_t10_ParamLimits

0xc049,	// (0x00072641) main_cset_slider_pane_t10

0xc071,	// (0x00072669) main_cset_slider_pane_t11_ParamLimits

0xc071,	// (0x00072669) main_cset_slider_pane_t11

0xc099,	// (0x00072691) main_cset_slider_pane_t12_ParamLimits

0xc099,	// (0x00072691) main_cset_slider_pane_t12

0xc0b6,	// (0x000726ae) main_cset_slider_pane_t13_ParamLimits

0xc0b6,	// (0x000726ae) main_cset_slider_pane_t13

0xf9ba,	// (0x00075fb2) main_cset_slider_pane_t_ParamLimits

0x6739,	// (0x0006cd31) bg_popup_sub_pane_cp011

0x3a5c,	// (0x0006a054) main_cset_text_pane_g1

0x3a64,	// (0x0006a05c) main_cset_text_pane_t1

0x3a72,	// (0x0006a06a) main_cset_text_pane_t2

0x3a80,	// (0x0006a078) main_cset_text_pane_t3

0x3a8e,	// (0x0006a086) main_cset_text_pane_t4

0x3a9c,	// (0x0006a094) main_cset_text_pane_t5

0x3aaa,	// (0x0006a0a2) main_cset_text_pane_t6

0x3ab8,	// (0x0006a0b0) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x00076049) main_cset_text_pane_t

0x6739,	// (0x0006cd31) main_cam4_burst_pane

0x6739,	// (0x0006cd31) main_cam5_pane

0xbd82,	// (0x0007237a) bg_button_pane_cp019

0xbd8b,	// (0x00072383) bg_button_pane_cp020

0x38f3,	// (0x00069eeb) main_cset_slider_pane_g7_ParamLimits

0x38f3,	// (0x00069eeb) main_cset_slider_pane_g7

0x38ff,	// (0x00069ef7) main_cset_slider_pane_g8_ParamLimits

0x38ff,	// (0x00069ef7) main_cset_slider_pane_g8

0xbed8,	// (0x000724d0) main_cset_slider_pane_g9_ParamLimits

0xbed8,	// (0x000724d0) main_cset_slider_pane_g9

0xbee4,	// (0x000724dc) main_cset_slider_pane_g10_ParamLimits

0xbee4,	// (0x000724dc) main_cset_slider_pane_g10

0xbef0,	// (0x000724e8) main_cset_slider_pane_g11_ParamLimits

0xbef0,	// (0x000724e8) main_cset_slider_pane_g11

0xbefc,	// (0x000724f4) main_cset_slider_pane_g12_ParamLimits

0xbefc,	// (0x000724f4) main_cset_slider_pane_g12

0xbf08,	// (0x00072500) main_cset_slider_pane_g13_ParamLimits

0xbf08,	// (0x00072500) main_cset_slider_pane_g13

0xbf14,	// (0x0007250c) main_cset_slider_pane_g14_ParamLimits

0xbf14,	// (0x0007250c) main_cset_slider_pane_g14

0xbf20,	// (0x00072518) main_cset_slider_pane_g15_ParamLimits

0xbf20,	// (0x00072518) main_cset_slider_pane_g15

0x3945,	// (0x00069f3d) main_cset_slider_pane_t14_ParamLimits

0x3945,	// (0x00069f3d) main_cset_slider_pane_t14

0x397e,	// (0x00069f76) main_cset_slider_pane_t15_ParamLimits

0x397e,	// (0x00069f76) main_cset_slider_pane_t15

0xc419,	// (0x00072a11) aid_cam4_burst_size_cell_ParamLimits

0xc419,	// (0x00072a11) aid_cam4_burst_size_cell

0xc435,	// (0x00072a2d) grid_cam4_burst_pane_ParamLimits

0xc435,	// (0x00072a2d) grid_cam4_burst_pane

0xc467,	// (0x00072a5f) linegrid_cam4_burst_pane_ParamLimits

0xc467,	// (0x00072a5f) linegrid_cam4_burst_pane

0xc487,	// (0x00072a7f) scroll_pane_cp30_ParamLimits

0xc487,	// (0x00072a7f) scroll_pane_cp30

0xc493,	// (0x00072a8b) cell_cam4_burst_pane_ParamLimits

0xc493,	// (0x00072a8b) cell_cam4_burst_pane

0x3ac6,	// (0x0006a0be) linegrid_cam4_burst_pane_g1_ParamLimits

0x3ac6,	// (0x0006a0be) linegrid_cam4_burst_pane_g1

0xc4d3,	// (0x00072acb) linegrid_cam4_burst_pane_g2_ParamLimits

0xc4d3,	// (0x00072acb) linegrid_cam4_burst_pane_g2

0x3ad3,	// (0x0006a0cb) linegrid_cam4_burst_pane_g3_ParamLimits

0x3ad3,	// (0x0006a0cb) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x00076058) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x00076058) linegrid_cam4_burst_pane_g

0xc4e4,	// (0x00072adc) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc4e4,	// (0x00072adc) linegrid_cam4_burst_pane_g3_copy1

0x3ae0,	// (0x0006a0d8) linegrid_cam4_burst_pane_g4_ParamLimits

0x3ae0,	// (0x0006a0d8) linegrid_cam4_burst_pane_g4

0xc4fe,	// (0x00072af6) linegrid_cam4_burst_pane_g5_ParamLimits

0xc4fe,	// (0x00072af6) linegrid_cam4_burst_pane_g5

0xc50f,	// (0x00072b07) linegrid_cam4_burst_pane_g6_ParamLimits

0xc50f,	// (0x00072b07) linegrid_cam4_burst_pane_g6

0x3aed,	// (0x0006a0e5) linegrid_cam4_burst_pane_g7_ParamLimits

0x3aed,	// (0x0006a0e5) linegrid_cam4_burst_pane_g7

0xc526,	// (0x00072b1e) cell_cam4_burst_pane_g1

0x3b06,	// (0x0006a0fe) main_cam5_pane_t1_ParamLimits

0x3b06,	// (0x0006a0fe) main_cam5_pane_t1

0x3b18,	// (0x0006a110) main_cam5_pane_t2_ParamLimits

0x3b18,	// (0x0006a110) main_cam5_pane_t2

0x3b2a,	// (0x0006a122) main_cam5_pane_t3_ParamLimits

0x3b2a,	// (0x0006a122) main_cam5_pane_t3

0x3b3c,	// (0x0006a134) main_cam5_pane_t4_ParamLimits

0x3b3c,	// (0x0006a134) main_cam5_pane_t4

0x3b54,	// (0x0006a14c) main_cam5_pane_t5_ParamLimits

0x3b54,	// (0x0006a14c) main_cam5_pane_t5

0x3b68,	// (0x0006a160) main_cam5_pane_t6_ParamLimits

0x3b68,	// (0x0006a160) main_cam5_pane_t6

0x3b7c,	// (0x0006a174) main_cam5_pane_t7_ParamLimits

0x3b7c,	// (0x0006a174) main_cam5_pane_t7

0x3b8e,	// (0x0006a186) main_cam5_pane_t8_ParamLimits

0x3b8e,	// (0x0006a186) main_cam5_pane_t8

0x3bac,	// (0x0006a1a4) main_cam5_pane_t9_ParamLimits

0x3bac,	// (0x0006a1a4) main_cam5_pane_t9

0x3bbe,	// (0x0006a1b6) main_cam5_pane_t10_ParamLimits

0x3bbe,	// (0x0006a1b6) main_cam5_pane_t10

0x3bd0,	// (0x0006a1c8) main_cam5_pane_t11_ParamLimits

0x3bd0,	// (0x0006a1c8) main_cam5_pane_t11

0x3be4,	// (0x0006a1dc) main_cam5_pane_t12_ParamLimits

0x3be4,	// (0x0006a1dc) main_cam5_pane_t12

0x3bfb,	// (0x0006a1f3) main_cam5_pane_t13_ParamLimits

0x3bfb,	// (0x0006a1f3) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x00076064) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x00076064) main_cam5_pane_t

0x69b2,	// (0x0006cfaa) popup_scut_keymap_window_ParamLimits

0x69b2,	// (0x0006cfaa) popup_scut_keymap_window

0xc539,	// (0x00072b31) aid_size_cell_brow_shortcut

0x026f,	// (0x00066867) bg_popup_window_pane_cp010

0xc545,	// (0x00072b3d) grid_scut_pane

0xc551,	// (0x00072b49) cell_scut_pane_ParamLimits

0xc551,	// (0x00072b49) cell_scut_pane

0xc56c,	// (0x00072b64) cell_scut_pane_g1

0x3c1e,	// (0x0006a216) cell_scut_pane_t1

0x3c2d,	// (0x0006a225) cell_scut_pane_t2

0xc575,	// (0x00072b6d) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0007607f) cell_scut_pane_t

0xa5d4,	// (0x00070bcc) main_mup3_pane_g8_ParamLimits

0xa5d4,	// (0x00070bcc) main_mup3_pane_g8

0xb988,	// (0x00071f80) area_vitu2_query_pane_ParamLimits

0xb988,	// (0x00071f80) area_vitu2_query_pane

0x5a73,	// (0x0006c06b) input_focus_pane_cp08

0x3c3c,	// (0x0006a234) area_vitu2_query_pane_g1

0x5b74,	// (0x0006c16c) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x00076086) area_vitu2_query_pane_g

0xc583,	// (0x00072b7b) area_vitu2_query_pane_t1_ParamLimits

0xc583,	// (0x00072b7b) area_vitu2_query_pane_t1

0xc597,	// (0x00072b8f) area_vitu2_query_pane_t2_ParamLimits

0xc597,	// (0x00072b8f) area_vitu2_query_pane_t2

0x5b85,	// (0x0006c17d) area_vitu2_query_pane_t3_ParamLimits

0x5b85,	// (0x0006c17d) area_vitu2_query_pane_t3

0x5bad,	// (0x0006c1a5) area_vitu2_query_pane_t4_ParamLimits

0x5bad,	// (0x0006c1a5) area_vitu2_query_pane_t4

0x5bd5,	// (0x0006c1cd) area_vitu2_query_pane_t5_ParamLimits

0x5bd5,	// (0x0006c1cd) area_vitu2_query_pane_t5

0x5bfd,	// (0x0006c1f5) area_vitu2_query_pane_t6_ParamLimits

0x5bfd,	// (0x0006c1f5) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0007608b) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0007608b) area_vitu2_query_pane_t

0xc5ab,	// (0x00072ba3) bg_button_pane_cp018

0xc5b9,	// (0x00072bb1) bg_button_pane_cp021

0x5c49,	// (0x0006c241) bg_button_pane_cp022

0x5c5a,	// (0x0006c252) input_focus_pane_cp09

0x8aad,	// (0x0006f0a5) aid_size_touch_mv_arrow_left

0x8ad8,	// (0x0006f0d0) aid_size_touch_mv_arrow_right

0xbf38,	// (0x00072530) main_cset_slider_pane_g16_ParamLimits

0xbf38,	// (0x00072530) main_cset_slider_pane_g16

0xbf44,	// (0x0007253c) main_cset_slider_pane_g17_ParamLimits

0xbf44,	// (0x0007253c) main_cset_slider_pane_g17

0xc526,	// (0x00072b1e) cell_cam4_burst_pane_g1_ParamLimits

0x6739,	// (0x0006cd31) compa_mode_pane

0xc140,	// (0x00072738) popup_vtel_slider_window_g3_ParamLimits

0xc140,	// (0x00072738) popup_vtel_slider_window_g3

0xc154,	// (0x0007274c) popup_vtel_slider_window_g4_ParamLimits

0xc154,	// (0x0007274c) popup_vtel_slider_window_g4

0xc168,	// (0x00072760) popup_vtel_slider_window_t1_ParamLimits

0xc168,	// (0x00072760) popup_vtel_slider_window_t1

0x6739,	// (0x0006cd31) main_cl_pane

0x1708,	// (0x00067d00) popup_imed_adjust2_window_ParamLimits

0x16dc,	// (0x00067cd4) bg_tb_trans_pane_cp05_ParamLimits

0x20f8,	// (0x000686f0) popup_imed_adjust2_window_g1_ParamLimits

0x2107,	// (0x000686ff) popup_imed_adjust2_window_g2_ParamLimits

0x2107,	// (0x000686ff) popup_imed_adjust2_window_g2

0x2113,	// (0x0006870b) popup_imed_adjust2_window_g3_ParamLimits

0x2113,	// (0x0006870b) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x00075df6) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x00075df6) popup_imed_adjust2_window_g

0x211f,	// (0x00068717) popup_imed_adjust2_window_t1_ParamLimits

0x2137,	// (0x0006872f) slider_imed_adjust_pane_ParamLimits

0x214b,	// (0x00068743) slider_imed_adjust_pane_g1_ParamLimits

0x215b,	// (0x00068753) slider_imed_adjust_pane_g2_ParamLimits

0x216b,	// (0x00068763) slider_imed_adjust_pane_g3_ParamLimits

0x217c,	// (0x00068774) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x00075dfd) slider_imed_adjust_pane_g_ParamLimits

0xb6e6,	// (0x00071cde) aid_touch_area_cam4_ParamLimits

0xb6e6,	// (0x00071cde) aid_touch_area_cam4

0xb6f6,	// (0x00071cee) battery_pane_cp01

0xb77d,	// (0x00071d75) main_camera4_pane_g6_ParamLimits

0xb77d,	// (0x00071d75) main_camera4_pane_g6

0xb79b,	// (0x00071d93) main_camera4_pane_t2_ParamLimits

0xb79b,	// (0x00071d93) main_camera4_pane_t2

0x0001,

0xf908,	// (0x00075f00) main_camera4_pane_t_ParamLimits

0xf908,	// (0x00075f00) main_camera4_pane_t

0xb822,	// (0x00071e1a) aid_touch_area_vid4_ParamLimits

0xb822,	// (0x00071e1a) aid_touch_area_vid4

0xb862,	// (0x00071e5a) main_video4_pane_g5_ParamLimits

0xb862,	// (0x00071e5a) main_video4_pane_g5

0xb886,	// (0x00071e7e) vid4_progress_pane_ParamLimits

0xb886,	// (0x00071e7e) vid4_progress_pane

0x390b,	// (0x00069f03) main_cset_slider_pane_g18_ParamLimits

0x390b,	// (0x00069f03) main_cset_slider_pane_g18

0x3afa,	// (0x0006a0f2) cell_cam4_burst_pane_g2_ParamLimits

0x3afa,	// (0x0006a0f2) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0007605f) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0007605f) cell_cam4_burst_pane_g

0xc5c5,	// (0x00072bbd) bg_cl_pane_ParamLimits

0xc5c5,	// (0x00072bbd) bg_cl_pane

0xc5d1,	// (0x00072bc9) cl_header_pane_ParamLimits

0xc5d1,	// (0x00072bc9) cl_header_pane

0xc5dd,	// (0x00072bd5) cl_listscroll_pane_ParamLimits

0xc5dd,	// (0x00072bd5) cl_listscroll_pane

0x3c48,	// (0x0006a240) bg_cl_pane_g1

0x3c50,	// (0x0006a248) bg_cl_pane_g2

0x3c58,	// (0x0006a250) bg_cl_pane_g3

0x3c60,	// (0x0006a258) bg_cl_pane_g4

0x3c68,	// (0x0006a260) bg_cl_pane_g5

0x3c70,	// (0x0006a268) bg_cl_pane_g6

0x3c78,	// (0x0006a270) bg_cl_pane_g7

0x3c80,	// (0x0006a278) bg_cl_pane_g8

0x3c88,	// (0x0006a280) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0007609a) bg_cl_pane_g

0xc5e9,	// (0x00072be1) aid_height_cl_leading_ParamLimits

0xc5e9,	// (0x00072be1) aid_height_cl_leading

0xc5f5,	// (0x00072bed) aid_height_cl_text_ParamLimits

0xc5f5,	// (0x00072bed) aid_height_cl_text

0x69e9,	// (0x0006cfe1) bg_cl_header_pane_ParamLimits

0x69e9,	// (0x0006cfe1) bg_cl_header_pane

0xc60d,	// (0x00072c05) cl_header_pane_g1_ParamLimits

0xc60d,	// (0x00072c05) cl_header_pane_g1

0xc61a,	// (0x00072c12) cl_header_pane_t1_ParamLimits

0xc61a,	// (0x00072c12) cl_header_pane_t1

0x3c90,	// (0x0006a288) cl_list_pane

0x38de,	// (0x00069ed6) hc_scroll_pane_cp01

0xecd2,	// (0x000752ca) bg_cl_header_pane_g1

0x37c0,	// (0x00069db8) bg_cl_header_pane_g2

0xecf2,	// (0x000752ea) bg_cl_header_pane_g3

0x37d0,	// (0x00069dc8) bg_cl_header_pane_g4

0x37c8,	// (0x00069dc0) bg_cl_header_pane_g5

0x3a13,	// (0x0006a00b) bg_cl_header_pane_g6

0x37e8,	// (0x00069de0) bg_cl_header_pane_g7

0x37f0,	// (0x00069de8) bg_cl_header_pane_g8

0x37e0,	// (0x00069dd8) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x000760ad) bg_cl_header_pane_g

0xc62c,	// (0x00072c24) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc62c,	// (0x00072c24) hc_cl_list_double_graphic_heading_pane

0xc276,	// (0x0007286e) hc_cl_list_single_graphic_pane_ParamLimits

0xc276,	// (0x0007286e) hc_cl_list_single_graphic_pane

0xc63c,	// (0x00072c34) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc63c,	// (0x00072c34) hc_cl_list_single_graphic_pane_g1

0xc648,	// (0x00072c40) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc648,	// (0x00072c40) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x000760c0) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x000760c0) hc_cl_list_single_graphic_pane_g

0xc65c,	// (0x00072c54) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc65c,	// (0x00072c54) hc_cl_list_single_graphic_pane_t1

0xc63c,	// (0x00072c34) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc63c,	// (0x00072c34) hc_cl_list_double_graphic_heading_pane_g1

0xc671,	// (0x00072c69) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc671,	// (0x00072c69) hc_cl_list_double_graphic_heading_pane_g2

0xc685,	// (0x00072c7d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc685,	// (0x00072c7d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x000760c5) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x000760c5) hc_cl_list_double_graphic_heading_pane_g

0xc699,	// (0x00072c91) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc699,	// (0x00072c91) hc_cl_list_double_graphic_heading_pane_t1

0xc6ae,	// (0x00072ca6) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc6ae,	// (0x00072ca6) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x000760cc) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x000760cc) hc_cl_list_double_graphic_heading_pane_t

0xc6d5,	// (0x00072ccd) vid4_progress_pane_g1

0xc6e1,	// (0x00072cd9) vid4_progress_pane_g2

0xc6ed,	// (0x00072ce5) vid4_progress_pane_g3

0xc6fc,	// (0x00072cf4) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x000760d1) vid4_progress_pane_g

0xc71a,	// (0x00072d12) vid4_progress_pane_t1

0xc730,	// (0x00072d28) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x000760dc) vid4_progress_pane_t

0xc75b,	// (0x00072d53) wait_bar_pane_cp07

0x19fe,	// (0x00067ff6) blid_firmament_pane_ParamLimits

0x1a41,	// (0x00068039) popup_blid_sat_info2_window_g1

0x1a65,	// (0x0006805d) popup_blid_sat_info2_window_t3

0x1a73,	// (0x0006806b) popup_blid_sat_info2_window_t4

0x1a81,	// (0x00068079) popup_blid_sat_info2_window_t5

0x1a8f,	// (0x00068087) popup_blid_sat_info2_window_t6

0x1a9f,	// (0x00068097) popup_blid_sat_info2_window_t7

0x1aad,	// (0x000680a5) popup_blid_sat_info2_window_t8

0x1abb,	// (0x000680b3) popup_blid_sat_info2_window_t9

0x1ac9,	// (0x000680c1) popup_blid_sat_info2_window_t10

0x1b91,	// (0x00068189) aid_firma_cardinal_ParamLimits

0x1ba5,	// (0x0006819d) blid_firmament_pane_t1_ParamLimits

0x1bbc,	// (0x000681b4) blid_firmament_pane_t2_ParamLimits

0x1bd3,	// (0x000681cb) blid_firmament_pane_t3_ParamLimits

0x1bea,	// (0x000681e2) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x00075cef) blid_firmament_pane_t_ParamLimits

0x1c01,	// (0x000681f9) blid_sat_info_pane_ParamLimits

0x9873,	// (0x0006fe6b) main_cam_set_pane_ParamLimits

0xad6c,	// (0x00071364) aid_size_cell_colour_35_ParamLimits

0xad86,	// (0x0007137e) aid_size_cell_colour_112_ParamLimits

0xad9d,	// (0x00071395) aid_size_cell_effect_ParamLimits

0x9873,	// (0x0006fe6b) bg_tb_trans_pane_cp02_ParamLimits

0xef51,	// (0x00075549) heading_imed_pane_ParamLimits

0xadb7,	// (0x000713af) listscroll_imed_pane_ParamLimits

0x0d0a,	// (0x00067302) popup_call2_audio_first_window_g5_ParamLimits

0x0d0a,	// (0x00067302) popup_call2_audio_first_window_g5

0xb49f,	// (0x00071a97) aid_size_touch_image3_arrow_left_ParamLimits

0xb49f,	// (0x00071a97) aid_size_touch_image3_arrow_left

0xb4b5,	// (0x00071aad) aid_size_touch_image3_arrow_right_ParamLimits

0xb4b5,	// (0x00071aad) aid_size_touch_image3_arrow_right

0xc746,	// (0x00072d3e) vid4_progress_pane_t3

0xb057,	// (0x0007164f) main_hwr_training_symbol_option_pane_ParamLimits

0xb057,	// (0x0007164f) main_hwr_training_symbol_option_pane

0x23e7,	// (0x000689df) popup_hwr_training_preview_window_ParamLimits

0x23e7,	// (0x000689df) popup_hwr_training_preview_window

0xb0b8,	// (0x000716b0) hwr_training_navi_pane_g5_ParamLimits

0xb0b8,	// (0x000716b0) hwr_training_navi_pane_g5

0x37ae,	// (0x00069da6) popup_char_count_window

0x69e9,	// (0x0006cfe1) bg_popup_sub_pane_cp20_ParamLimits

0xc25e,	// (0x00072856) list_vitu2_match_list_pane_ParamLimits

0xc26a,	// (0x00072862) vitu2_page_scroll_pane_ParamLimits

0xc26a,	// (0x00072862) vitu2_page_scroll_pane

0x3c99,	// (0x0006a291) list_single_hwr_training_symbol_option_pane_ParamLimits

0x3c99,	// (0x0006a291) list_single_hwr_training_symbol_option_pane

0x3cac,	// (0x0006a2a4) list_single_hwr_training_symbol_option_pane_g1

0x3cb4,	// (0x0006a2ac) list_single_hwr_training_symbol_option_pane_t1

0x3cc2,	// (0x0006a2ba) bg_button_pane_cp023

0x3ccb,	// (0x0006a2c3) bg_button_pane_cp024

0xc775,	// (0x00072d6d) vitu2_page_scroll_pane_g1

0xc77d,	// (0x00072d75) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x000760e3) vitu2_page_scroll_pane_g

0xc787,	// (0x00072d7f) vitu2_page_scroll_pane_t1

0x191a,	// (0x00067f12) popup_char_count_window_g1

0x3cfe,	// (0x0006a2f6) popup_char_count_window_g2

0x3d07,	// (0x0006a2ff) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x000760e8) popup_char_count_window_g

0x3d10,	// (0x0006a308) popup_char_count_window_t1

0x6739,	// (0x0006cd31) main_vded2_pane

0x20e4,	// (0x000686dc) aid_size_cell_imed_line

0x20ee,	// (0x000686e6) grid_imed_line_width_pane

0xb8dc,	// (0x00071ed4) vid4_indicators_pane_g4

0x3d1e,	// (0x0006a316) cell_imed_line_width_pane_ParamLimits

0x3d1e,	// (0x0006a316) cell_imed_line_width_pane

0x3d34,	// (0x0006a32c) cell_imed_line_width_pane_g1

0x19ac,	// (0x00067fa4) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x000760ef) cell_imed_line_width_pane_g

0xc796,	// (0x00072d8e) main_vded2_pane_g1_ParamLimits

0xc796,	// (0x00072d8e) main_vded2_pane_g1

0xc7a5,	// (0x00072d9d) main_vded2_pane_g2_ParamLimits

0xc7a5,	// (0x00072d9d) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x000760f4) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x000760f4) main_vded2_pane_g

0xc7b3,	// (0x00072dab) vded2_slider_pane_ParamLimits

0xc7b3,	// (0x00072dab) vded2_slider_pane

0xc7c0,	// (0x00072db8) aid_size_touch_vded2_end

0xc7ca,	// (0x00072dc2) aid_size_touch_vded2_playhead

0x3d3d,	// (0x0006a335) aid_size_touch_vded2_start

0x3d45,	// (0x0006a33d) vded2_slider_bg_pane

0x3d4e,	// (0x0006a346) vded2_slider_pane_g1

0x3d57,	// (0x0006a34f) vded2_slider_pane_g2

0xc7d2,	// (0x00072dca) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x000760f9) vded2_slider_pane_g

0x39cc,	// (0x00069fc4) vded2_slider_bg_pane_g1

0x39d5,	// (0x00069fcd) vded2_slider_bg_pane_g2

0x39de,	// (0x00069fd6) vded2_slider_bg_pane_g3

0x0002,

0xf7c7,	// (0x00075dbf) vded2_slider_bg_pane_g

0x914b,	// (0x0006f743) aid_postcard_touch_down_pane_ParamLimits

0x914b,	// (0x0006f743) aid_postcard_touch_down_pane

0x915b,	// (0x0006f753) aid_postcard_touch_up_pane_ParamLimits

0x915b,	// (0x0006f753) aid_postcard_touch_up_pane

0x6739,	// (0x0006cd31) main_blid2_pane

0x16ea,	// (0x00067ce2) popup_blid2_search_window

0x6739,	// (0x0006cd31) blid2_gps_pane

0x6739,	// (0x0006cd31) blid2_navig_pane

0x6739,	// (0x0006cd31) blid2_search_pane

0x6739,	// (0x0006cd31) blid2_tripm_pane

0xc7db,	// (0x00072dd3) blid2_search_pane_g1_ParamLimits

0xc7db,	// (0x00072dd3) blid2_search_pane_g1

0xc7eb,	// (0x00072de3) blid2_search_pane_t1_ParamLimits

0xc7eb,	// (0x00072de3) blid2_search_pane_t1

0xc7fd,	// (0x00072df5) aid_size_cell_blid2_gps_ParamLimits

0xc7fd,	// (0x00072df5) aid_size_cell_blid2_gps

0xc80d,	// (0x00072e05) blid2_gps_pane_g1_ParamLimits

0xc80d,	// (0x00072e05) blid2_gps_pane_g1

0xc819,	// (0x00072e11) grid_blid2_satellite_pane_ParamLimits

0xc819,	// (0x00072e11) grid_blid2_satellite_pane

0xc827,	// (0x00072e1f) blid2_navig_pane_g1_ParamLimits

0xc827,	// (0x00072e1f) blid2_navig_pane_g1

0xc833,	// (0x00072e2b) blid2_navig_pane_t1_ParamLimits

0xc833,	// (0x00072e2b) blid2_navig_pane_t1

0xc845,	// (0x00072e3d) blid2_navig_pane_t2_ParamLimits

0xc845,	// (0x00072e3d) blid2_navig_pane_t2

0x0001,

0xfb08,	// (0x00076100) blid2_navig_pane_t_ParamLimits

0xfb08,	// (0x00076100) blid2_navig_pane_t

0xc857,	// (0x00072e4f) blid2_navig_ring_pane_ParamLimits

0xc857,	// (0x00072e4f) blid2_navig_ring_pane

0xc867,	// (0x00072e5f) blid2_speed_pane_ParamLimits

0xc867,	// (0x00072e5f) blid2_speed_pane

0xc873,	// (0x00072e6b) blid2_tripm_pane_g1_ParamLimits

0xc873,	// (0x00072e6b) blid2_tripm_pane_g1

0xc883,	// (0x00072e7b) blid2_tripm_pane_g2_ParamLimits

0xc883,	// (0x00072e7b) blid2_tripm_pane_g2

0xc88f,	// (0x00072e87) blid2_tripm_pane_g3_ParamLimits

0xc88f,	// (0x00072e87) blid2_tripm_pane_g3

0xc89b,	// (0x00072e93) blid2_tripm_pane_g4_ParamLimits

0xc89b,	// (0x00072e93) blid2_tripm_pane_g4

0xc8a7,	// (0x00072e9f) blid2_tripm_pane_g5_ParamLimits

0xc8a7,	// (0x00072e9f) blid2_tripm_pane_g5

0x0005,

0xfb0d,	// (0x00076105) blid2_tripm_pane_g_ParamLimits

0xfb0d,	// (0x00076105) blid2_tripm_pane_g

0xc8c3,	// (0x00072ebb) blid2_tripm_pane_t1_ParamLimits

0xc8c3,	// (0x00072ebb) blid2_tripm_pane_t1

0xc8d7,	// (0x00072ecf) blid2_tripm_pane_t2_ParamLimits

0xc8d7,	// (0x00072ecf) blid2_tripm_pane_t2

0xc8e9,	// (0x00072ee1) blid2_tripm_pane_t3_ParamLimits

0xc8e9,	// (0x00072ee1) blid2_tripm_pane_t3

0x0003,

0xfb1a,	// (0x00076112) blid2_tripm_pane_t_ParamLimits

0xfb1a,	// (0x00076112) blid2_tripm_pane_t

0xc91b,	// (0x00072f13) cell_blid2_satellite_pane_ParamLimits

0xc91b,	// (0x00072f13) cell_blid2_satellite_pane

0xc939,	// (0x00072f31) cell_blid2_satellite_pane_g1

0x3d5f,	// (0x0006a357) cell_blid2_satellite_pane_t1

0x1c11,	// (0x00068209) blid2_speed_pane_g1

0x3d6d,	// (0x0006a365) blid2_speed_pane_t1

0x3d7b,	// (0x0006a373) blid2_speed_pane_t2

0x0001,

0xfb23,	// (0x0007611b) blid2_speed_pane_t

0x1c11,	// (0x00068209) blid2_navig_ring_pane_g1

0xc942,	// (0x00072f3a) blid2_navig_ring_pane_g2

0xc94a,	// (0x00072f42) blid2_navig_ring_pane_g3

0xc952,	// (0x00072f4a) blid2_navig_ring_pane_g4

0xc95a,	// (0x00072f52) blid2_navig_ring_pane_g5

0x0004,

0xfb28,	// (0x00076120) blid2_navig_ring_pane_g

0x6739,	// (0x0006cd31) bg_popup_window_pane_cp011

0x3d89,	// (0x0006a381) popup_blid2_search_window_g1

0x3d91,	// (0x0006a389) popup_blid2_search_window_t1

0x3d9f,	// (0x0006a397) popup_blid2_search_window_t2

0x0001,

0xfb33,	// (0x0007612b) popup_blid2_search_window_t

0xebe1,	// (0x000751d9) main_browser_pane_g1

0xe8e8,	// (0x00074ee0) main_browser_pane_ParamLimits

0x9873,	// (0x0006fe6b) bg_button_pane_cp011_ParamLimits

0xbb49,	// (0x00072141) cell_vitu2_function_pane_g1_ParamLimits

0x16dc,	// (0x00067cd4) bg_popup_sub_pane_cp22_ParamLimits

0x5a73,	// (0x0006c06b) input_focus_pane_cp08_ParamLimits

0xc3c2,	// (0x000729ba) popup_vitu2_query_button_pane_ParamLimits

0xc3c2,	// (0x000729ba) popup_vitu2_query_button_pane

0x5a8a,	// (0x0006c082) popup_vitu2_query_input_button_pane

0x3a50,	// (0x0006a048) popup_vitu2_query_window_g1_ParamLimits

0x5a94,	// (0x0006c08c) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x00076033) popup_vitu2_query_window_g_ParamLimits

0x6739,	// (0x0006cd31) bg_button_pane_cp026

0xc962,	// (0x00072f5a) popup_vitu2_query_input_button_pane_g1

0x6739,	// (0x0006cd31) bg_button_pane_cp025

0x3dad,	// (0x0006a3a5) popup_vitu2_query_button_pane_t1

0xa2e2,	// (0x000708da) main_mp3_pane_t6

0xa2f2,	// (0x000708ea) popup_slider_window_cp01

0xb7d3,	// (0x00071dcb) cam4_battery_pane

0xb8b4,	// (0x00071eac) cam4_battery_pane_cp02

0xc6c3,	// (0x00072cbb) cam4_battery_pane_cp01

0xc6cd,	// (0x00072cc5) cam4_battery_pane_cp03

0x1c11,	// (0x00068209) cam4_battery_pane_g1

0x3656,	// (0x00069c4e) cam4_battery_pane_g2

0x0001,

0xfb38,	// (0x00076130) cam4_battery_pane_g

0x1ad7,	// (0x000680cf) popup_blid_sat_info2_window_t11

0x8aad,	// (0x0006f0a5) aid_size_touch_mv_arrow_left_ParamLimits

0x8ad8,	// (0x0006f0d0) aid_size_touch_mv_arrow_right_ParamLimits

0x01cf,	// (0x000667c7) navi_pane_g1_ParamLimits

0x8b01,	// (0x0006f0f9) navi_pane_g2_ParamLimits

0x8b2f,	// (0x0006f127) navi_pane_g3_ParamLimits

0xf409,	// (0x00075a01) navi_pane_g_ParamLimits

0x8b89,	// (0x0006f181) navi_pane_mv_t1_ParamLimits

0xadc3,	// (0x000713bb) grid_imed_effect_pane_ParamLimits

0x7883,	// (0x0006de7b) aid_placing_vt_slider_lsc

0xeb2e,	// (0x00075126) aid_placing_vt_slider_prt

0x9873,	// (0x0006fe6b) bg_tb_trans_pane_cp01_ParamLimits

0x1d61,	// (0x00068359) popup_image_details_window_g1_ParamLimits

0x1d74,	// (0x0006836c) popup_image_details_window_g2_ParamLimits

0x1d89,	// (0x00068381) popup_image_details_window_g3_ParamLimits

0x1d89,	// (0x00068381) popup_image_details_window_g3

0xf73c,	// (0x00075d34) popup_image_details_window_g_ParamLimits

0x1d9d,	// (0x00068395) popup_image_details_window_t1_ParamLimits

0x1daf,	// (0x000683a7) popup_image_details_window_t2_ParamLimits

0x1dc8,	// (0x000683c0) popup_image_details_window_t3_ParamLimits

0x1ddc,	// (0x000683d4) popup_image_details_window_t4_ParamLimits

0x1df7,	// (0x000683ef) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x00075d3b) popup_image_details_window_t_ParamLimits

0xc601,	// (0x00072bf9) cl_header_name_pane_ParamLimits

0xc601,	// (0x00072bf9) cl_header_name_pane

0xc96a,	// (0x00072f62) cl_header_name_pane_t1_ParamLimits

0xc96a,	// (0x00072f62) cl_header_name_pane_t1

0xc981,	// (0x00072f79) cl_header_name_pane_t2_ParamLimits

0xc981,	// (0x00072f79) cl_header_name_pane_t2

0xc9ab,	// (0x00072fa3) cl_header_name_pane_t3_ParamLimits

0xc9ab,	// (0x00072fa3) cl_header_name_pane_t3

0x0002,

0xfb3d,	// (0x00076135) cl_header_name_pane_t_ParamLimits

0xfb3d,	// (0x00076135) cl_header_name_pane_t

0x8b5a,	// (0x0006f152) navi_pane_mv_g2_ParamLimits

0x3788,	// (0x00069d80) field_vitu2_entry_pane_g1_ParamLimits

0x3794,	// (0x00069d8c) field_vitu2_entry_pane_g2_ParamLimits

0x37a0,	// (0x00069d98) field_vitu2_entry_pane_g3_ParamLimits

0x37a0,	// (0x00069d98) field_vitu2_entry_pane_g3

0xf93a,	// (0x00075f32) field_vitu2_entry_pane_g_ParamLimits

0xbad9,	// (0x000720d1) cell_vitu2_itu_pane_g1_ParamLimits

0xbae9,	// (0x000720e1) cell_vitu2_itu_pane_g2_ParamLimits

0xbae9,	// (0x000720e1) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x00075f3e) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x00075f3e) cell_vitu2_itu_pane_g

0x9873,	// (0x0006fe6b) bg_vkb2_func_pane_cp05_ParamLimits

0x9873,	// (0x0006fe6b) bg_vkb2_func_pane_cp05

0x9873,	// (0x0006fe6b) bg_vkb2_func_pane_cp03

0x9873,	// (0x0006fe6b) bg_vkb2_func_pane_cp04

0x9873,	// (0x0006fe6b) bg_vkb2_func_pane_cp10_ParamLimits

0x9873,	// (0x0006fe6b) bg_vkb2_func_pane_cp10

0x5c49,	// (0x0006c241) bg_vkb2_func_pane_cp08

0xc5ab,	// (0x00072ba3) bg_vkb2_func_pane_cp06

0xc5b9,	// (0x00072bb1) bg_vkb2_func_pane_cp07

0x3cd4,	// (0x0006a2cc) bg_vkb2_func_pane_cp11_ParamLimits

0x3cd4,	// (0x0006a2cc) bg_vkb2_func_pane_cp11

0x3ce9,	// (0x0006a2e1) bg_vkb2_func_pane_cp12_ParamLimits

0x3ce9,	// (0x0006a2e1) bg_vkb2_func_pane_cp12

0x6739,	// (0x0006cd31) bg_vkb2_func_pane_cp09

0x37c0,	// (0x00069db8) bg_vkb2_func_pane_g1

0xecf2,	// (0x000752ea) bg_vkb2_func_pane_g2

0x37c8,	// (0x00069dc0) bg_vkb2_func_pane_g3

0x37d0,	// (0x00069dc8) bg_vkb2_func_pane_g4

0x3a13,	// (0x0006a00b) bg_vkb2_func_pane_g5

0x37e8,	// (0x00069de0) bg_vkb2_func_pane_g6

0x37f0,	// (0x00069de8) bg_vkb2_func_pane_g7

0x37e0,	// (0x00069dd8) bg_vkb2_func_pane_g8

0xecd2,	// (0x000752ca) bg_vkb2_func_pane_g9

0x0008,

0xfb44,	// (0x0007613c) bg_vkb2_func_pane_g

0xc8b5,	// (0x00072ead) blid2_tripm_pane_g6_ParamLimits

0xc8b5,	// (0x00072ead) blid2_tripm_pane_g6

0x3610,	// (0x00069c08) mp4_progress_pane_g1

0xc90f,	// (0x00072f07) blid2_tripm_values_pane_ParamLimits

0xc90f,	// (0x00072f07) blid2_tripm_values_pane

0xc9d0,	// (0x00072fc8) blid2_tripm_values_pane_t1

0xc9de,	// (0x00072fd6) blid2_tripm_values_pane_t2

0xc9ec,	// (0x00072fe4) blid2_tripm_values_pane_t3

0xc9fa,	// (0x00072ff2) blid2_tripm_values_pane_t4

0xca08,	// (0x00073000) blid2_tripm_values_pane_t5

0xca16,	// (0x0007300e) blid2_tripm_values_pane_t6

0xca24,	// (0x0007301c) blid2_tripm_values_pane_t7

0xca32,	// (0x0007302a) blid2_tripm_values_pane_t8

0xca40,	// (0x00073038) blid2_tripm_values_pane_t9

0x0008,

0xfb57,	// (0x0007614f) blid2_tripm_values_pane_t

0x78c1,	// (0x0006deb9) call_video_pane_t1_ParamLimits

0x78de,	// (0x0006ded6) call_video_pane_t2_ParamLimits

0xf292,	// (0x0007588a) call_video_pane_t_ParamLimits

0x5843,	// (0x0006be3b) msg_header_pane_g1_ParamLimits

0x040c,	// (0x00066a04) msg_header_pane_g2_ParamLimits

0x040c,	// (0x00066a04) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00075aa4) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00075aa4) msg_header_pane_g

0xe8e8,	// (0x00074ee0) main_clock2_pane_ParamLimits

0xab42,	// (0x0007113a) grid_clock2_toolbar_pane_ParamLimits

0xab42,	// (0x0007113a) grid_clock2_toolbar_pane

0xab42,	// (0x0007113a) listscroll_clock2_pane_ParamLimits

0xab42,	// (0x0007113a) listscroll_clock2_pane

0xabfa,	// (0x000711f2) main_clock2_pane_t3_ParamLimits

0xabfa,	// (0x000711f2) main_clock2_pane_t3

0xac0c,	// (0x00071204) main_clock2_pane_t4_ParamLimits

0xac0c,	// (0x00071204) main_clock2_pane_t4

0x3dbb,	// (0x0006a3b3) cell_clock2_toolbar_pane

0x3dc3,	// (0x0006a3bb) cell_clock2_toolbar_pane_cp01

0x3dc3,	// (0x0006a3bb) cell_clock2_toolbar_pane_cp02

0x3dcb,	// (0x0006a3c3) cell_clock2_toolbar_pane_cp03

0x3dd3,	// (0x0006a3cb) list_clock2_pane

0x0135,	// (0x0006672d) scroll_pane_cp10

0x3ddb,	// (0x0006a3d3) list_single_clock2_pane_ParamLimits

0x3ddb,	// (0x0006a3d3) list_single_clock2_pane

0x026f,	// (0x00066867) list_highlight_pane_cp08

0x3de8,	// (0x0006a3e0) list_single_clock2_pane_t1

0x3e02,	// (0x0006a3fa) list_single_clock2_pane_t2

0x0001,

0xfb6a,	// (0x00076162) list_single_clock2_pane_t

0x6739,	// (0x0006cd31) bg_button_pane_cp10

0x3e10,	// (0x0006a408) cell_clock2_toolbar_pane_g1

0x90ad,	// (0x0006f6a5) aid_main_viewer_pane_g1_ParamLimits

0x90ad,	// (0x0006f6a5) aid_main_viewer_pane_g1

0x90b9,	// (0x0006f6b1) aid_main_viewer_pane_g2_ParamLimits

0x90b9,	// (0x0006f6b1) aid_main_viewer_pane_g2

0x90c5,	// (0x0006f6bd) aid_main_viewer_pane_g3_ParamLimits

0x90c5,	// (0x0006f6bd) aid_main_viewer_pane_g3

0x90d6,	// (0x0006f6ce) aid_main_viewer_pane_g4_ParamLimits

0x90d6,	// (0x0006f6ce) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00075ab5) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00075ab5) aid_main_viewer_pane_g

0x9866,	// (0x0006fe5e) main_calc_pane_ParamLimits

0x9881,	// (0x0006fe79) main_dialer2_pane_ParamLimits

0x6739,	// (0x0006cd31) main_cam6_pane

0x6739,	// (0x0006cd31) main_vid6_pane

0xab4e,	// (0x00071146) listscroll_gen_pane_cp06_ParamLimits

0xab4e,	// (0x00071146) listscroll_gen_pane_cp06

0xac1e,	// (0x00071216) main_clock2_pane_t5_ParamLimits

0xac1e,	// (0x00071216) main_clock2_pane_t5

0xac6d,	// (0x00071265) aid_call2_pane_cp10_ParamLimits

0xac7f,	// (0x00071277) aid_call_pane_cp10_ParamLimits

0x01a4,	// (0x0006679c) popup_clock_analogue_window_cp10_g1_ParamLimits

0x01a4,	// (0x0006679c) popup_clock_analogue_window_cp10_g2_ParamLimits

0xac91,	// (0x00071289) popup_clock_analogue_window_cp10_g3_ParamLimits

0xac91,	// (0x00071289) popup_clock_analogue_window_cp10_g4_ParamLimits

0x01a4,	// (0x0006679c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x00075deb) popup_clock_analogue_window_cp10_g_ParamLimits

0xaca3,	// (0x0007129b) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb44c,	// (0x00071a44) cell_dialer2_keypad_pane_g2_ParamLimits

0xb44c,	// (0x00071a44) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x00075ed1) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x00075ed1) cell_dialer2_keypad_pane_g

0xb468,	// (0x00071a60) cell_dialer2_keypad_pane_t1

0xbe26,	// (0x0007241e) main_cset_text2_pane_ParamLimits

0xbe26,	// (0x0007241e) main_cset_text2_pane

0x3c3c,	// (0x0006a234) area_vitu2_query_pane_g1_ParamLimits

0x5b74,	// (0x0006c16c) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x00076086) area_vitu2_query_pane_g_ParamLimits

0x5c25,	// (0x0006c21d) area_vitu2_query_pane_t7_ParamLimits

0x5c25,	// (0x0006c21d) area_vitu2_query_pane_t7

0xc5ab,	// (0x00072ba3) bg_button_pane_cp018_ParamLimits

0xc5b9,	// (0x00072bb1) bg_button_pane_cp021_ParamLimits

0x5c49,	// (0x0006c241) bg_button_pane_cp022_ParamLimits

0x5c49,	// (0x0006c241) bg_vkb2_func_pane_cp08_ParamLimits

0xc5ab,	// (0x00072ba3) bg_vkb2_func_pane_cp06_ParamLimits

0xc5b9,	// (0x00072bb1) bg_vkb2_func_pane_cp07_ParamLimits

0x5c5a,	// (0x0006c252) input_focus_pane_cp09_ParamLimits

0xca4e,	// (0x00073046) cam6_autofocus_pane_ParamLimits

0xca4e,	// (0x00073046) cam6_autofocus_pane

0xca70,	// (0x00073068) cam6_image_uncrop_pane_ParamLimits

0xca70,	// (0x00073068) cam6_image_uncrop_pane

0xca9d,	// (0x00073095) cam6_indi_pane_ParamLimits

0xca9d,	// (0x00073095) cam6_indi_pane

0xcab7,	// (0x000730af) cam6_mode_pane_ParamLimits

0xcab7,	// (0x000730af) cam6_mode_pane

0xcacb,	// (0x000730c3) cam6_timer_pane_ParamLimits

0xcacb,	// (0x000730c3) cam6_timer_pane

0xcad7,	// (0x000730cf) cam6_zoom_pane_ParamLimits

0xcad7,	// (0x000730cf) cam6_zoom_pane

0xb832,	// (0x00071e2a) cam6_mode_pane_g1_ParamLimits

0xb832,	// (0x00071e2a) cam6_mode_pane_g1

0xb84a,	// (0x00071e42) cam6_mode_pane_g2_ParamLimits

0xb84a,	// (0x00071e42) cam6_mode_pane_g2

0xb856,	// (0x00071e4e) cam6_mode_pane_g3_ParamLimits

0xb856,	// (0x00071e4e) cam6_mode_pane_g3

0xb862,	// (0x00071e5a) cam6_mode_pane_g4_ParamLimits

0xb862,	// (0x00071e5a) cam6_mode_pane_g4

0x0003,

0xfb6f,	// (0x00076167) cam6_mode_pane_g_ParamLimits

0xfb6f,	// (0x00076167) cam6_mode_pane_g

0x39e7,	// (0x00069fdf) bg_tb_trans_pane_cp08_ParamLimits

0x39e7,	// (0x00069fdf) bg_tb_trans_pane_cp08

0x3e18,	// (0x0006a410) cam6_battery_pane_ParamLimits

0x3e18,	// (0x0006a410) cam6_battery_pane

0x3e2e,	// (0x0006a426) cam6_indi_pane_g1_ParamLimits

0x3e2e,	// (0x0006a426) cam6_indi_pane_g1

0x3e40,	// (0x0006a438) cam6_indi_pane_g2_ParamLimits

0x3e40,	// (0x0006a438) cam6_indi_pane_g2

0x3e52,	// (0x0006a44a) cam6_indi_pane_g3_ParamLimits

0x3e52,	// (0x0006a44a) cam6_indi_pane_g3

0x0002,

0xfb78,	// (0x00076170) cam6_indi_pane_g_ParamLimits

0xfb78,	// (0x00076170) cam6_indi_pane_g

0x3e64,	// (0x0006a45c) cam6_indi_pane_t1_ParamLimits

0x3e64,	// (0x0006a45c) cam6_indi_pane_t1

0xb912,	// (0x00071f0a) cam6_autofocus_pane_g1

0xb91a,	// (0x00071f12) cam6_autofocus_pane_g2

0xb922,	// (0x00071f1a) cam6_autofocus_pane_g3

0xb92a,	// (0x00071f22) cam6_autofocus_pane_g4

0x0003,

0xfb7f,	// (0x00076177) cam6_autofocus_pane_g

0x3e8a,	// (0x0006a482) cam6_timer_pane_g1

0x3e92,	// (0x0006a48a) cam6_timer_pane_t1

0x3ea0,	// (0x0006a498) cam6_zoom_cont_pane

0x3ea8,	// (0x0006a4a0) cam6_zoom_pane_g1

0x3eb0,	// (0x0006a4a8) cam6_zoom_pane_g2

0xcaf5,	// (0x000730ed) cam6_zoom_pane_g3

0x0002,

0xfb88,	// (0x00076180) cam6_zoom_pane_g

0x1c11,	// (0x00068209) cam6_battery_pane_g1

0x1c11,	// (0x00068209) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00075cf8) cam6_battery_pane_g

0x3eb8,	// (0x0006a4b0) cam6_zoom_cont_pane_g1

0x3ec1,	// (0x0006a4b9) cam6_zoom_cont_pane_g2

0x3eca,	// (0x0006a4c2) cam6_zoom_cont_pane_g3

0x0002,

0xfb8f,	// (0x00076187) cam6_zoom_cont_pane_g

0xcb12,	// (0x0007310a) cam6_mode_pane_cp_ParamLimits

0xcb12,	// (0x0007310a) cam6_mode_pane_cp

0xcad7,	// (0x000730cf) cam6_zoom_pane_cp_ParamLimits

0xcad7,	// (0x000730cf) cam6_zoom_pane_cp

0xcb26,	// (0x0007311e) vid6_image_uncrop_cif_pane_ParamLimits

0xcb26,	// (0x0007311e) vid6_image_uncrop_cif_pane

0xcb52,	// (0x0007314a) vid6_image_uncrop_nhd_pane_ParamLimits

0xcb52,	// (0x0007314a) vid6_image_uncrop_nhd_pane

0xca70,	// (0x00073068) vid6_image_uncrop_vga_pane_ParamLimits

0xca70,	// (0x00073068) vid6_image_uncrop_vga_pane

0xcb71,	// (0x00073169) vid6_image_uncrop_wvga_pane_ParamLimits

0xcb71,	// (0x00073169) vid6_image_uncrop_wvga_pane

0xcb90,	// (0x00073188) vid6_indi_pane_ParamLimits

0xcb90,	// (0x00073188) vid6_indi_pane

0x39e7,	// (0x00069fdf) bg_tb_trans_pane_cp09_ParamLimits

0x39e7,	// (0x00069fdf) bg_tb_trans_pane_cp09

0x3ee2,	// (0x0006a4da) cam6_battery_pane_cp_ParamLimits

0x3ee2,	// (0x0006a4da) cam6_battery_pane_cp

0x3eee,	// (0x0006a4e6) vid6_indi_pane_g1_ParamLimits

0x3eee,	// (0x0006a4e6) vid6_indi_pane_g1

0x3f00,	// (0x0006a4f8) vid6_indi_pane_g2_ParamLimits

0x3f00,	// (0x0006a4f8) vid6_indi_pane_g2

0x3f12,	// (0x0006a50a) vid6_indi_pane_g3_ParamLimits

0x3f12,	// (0x0006a50a) vid6_indi_pane_g3

0x3f29,	// (0x0006a521) vid6_indi_pane_g4_ParamLimits

0x3f29,	// (0x0006a521) vid6_indi_pane_g4

0x3f40,	// (0x0006a538) vid6_indi_pane_g5_ParamLimits

0x3f40,	// (0x0006a538) vid6_indi_pane_g5

0x0004,

0xfb96,	// (0x0007618e) vid6_indi_pane_g_ParamLimits

0xfb96,	// (0x0007618e) vid6_indi_pane_g

0x3f5a,	// (0x0006a552) vid6_indi_pane_t1_ParamLimits

0x3f5a,	// (0x0006a552) vid6_indi_pane_t1

0x3f70,	// (0x0006a568) vid6_indi_pane_t2_ParamLimits

0x3f70,	// (0x0006a568) vid6_indi_pane_t2

0x3f98,	// (0x0006a590) vid6_indi_pane_t3_ParamLimits

0x3f98,	// (0x0006a590) vid6_indi_pane_t3

0x3fc0,	// (0x0006a5b8) vid6_indi_pane_t4_ParamLimits

0x3fc0,	// (0x0006a5b8) vid6_indi_pane_t4

0x0003,

0xfba1,	// (0x00076199) vid6_indi_pane_t_ParamLimits

0xfba1,	// (0x00076199) vid6_indi_pane_t

0x3fe4,	// (0x0006a5dc) wait_bar_pane_cp08

0xcbb5,	// (0x000731ad) main_cset_text2_pane_t1_ParamLimits

0xcbb5,	// (0x000731ad) main_cset_text2_pane_t1

0xcafd,	// (0x000730f5) listscroll_gen_pane_cp06_t1_ParamLimits

0xcafd,	// (0x000730f5) listscroll_gen_pane_cp06_t1

0x6739,	// (0x0006cd31) main_cam6_set_pane

0x1e41,	// (0x00068439) bg_tb_trans_pane_cp06_ParamLimits

0xb7db,	// (0x00071dd3) cam4_indicators_pane_g1_ParamLimits

0xb7e8,	// (0x00071de0) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x00075f0e) cam4_indicators_pane_g_ParamLimits

0xb808,	// (0x00071e00) cam4_indicators_pane_t1_ParamLimits

0x9873,	// (0x0006fe6b) bg_tb_trans_pane_cp07_ParamLimits

0xb7db,	// (0x00071dd3) vid4_indicators_pane_g1_ParamLimits

0xb8be,	// (0x00071eb6) vid4_indicators_pane_g2_ParamLimits

0xb8cb,	// (0x00071ec3) vid4_indicators_pane_g3_ParamLimits

0xb8dc,	// (0x00071ed4) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x00075f20) vid4_indicators_pane_g_ParamLimits

0xb8f8,	// (0x00071ef0) vid4_indicators_pane_t1_ParamLimits

0xc6d5,	// (0x00072ccd) vid4_progress_pane_g1_ParamLimits

0xc6e1,	// (0x00072cd9) vid4_progress_pane_g2_ParamLimits

0xc6ed,	// (0x00072ce5) vid4_progress_pane_g3_ParamLimits

0xc6fc,	// (0x00072cf4) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x000760d1) vid4_progress_pane_g_ParamLimits

0xc71a,	// (0x00072d12) vid4_progress_pane_t1_ParamLimits

0xc730,	// (0x00072d28) vid4_progress_pane_t2_ParamLimits

0xc746,	// (0x00072d3e) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x000760dc) vid4_progress_pane_t_ParamLimits

0xc75b,	// (0x00072d53) wait_bar_pane_cp07_ParamLimits

0xcbdc,	// (0x000731d4) main_cam6_set_pane_g2_ParamLimits

0xcbdc,	// (0x000731d4) main_cam6_set_pane_g2

0xcbe8,	// (0x000731e0) main_cset6_listscroll_pane_ParamLimits

0xcbe8,	// (0x000731e0) main_cset6_listscroll_pane

0xcc15,	// (0x0007320d) main_cset6_slider_pane_ParamLimits

0xcc15,	// (0x0007320d) main_cset6_slider_pane

0xcc21,	// (0x00073219) main_cset6_text2_pane_ParamLimits

0xcc21,	// (0x00073219) main_cset6_text2_pane

0x3ff3,	// (0x0006a5eb) main_cset6_text_pane

0x3ffb,	// (0x0006a5f3) main_cset_list_pane_copy1_ParamLimits

0x3ffb,	// (0x0006a5f3) main_cset_list_pane_copy1

0x400b,	// (0x0006a603) scroll_pane_cp028_copy1

0xcc34,	// (0x0007322c) cset_list_set_pane_copy1

0xcc44,	// (0x0007323c) aid_position_infowindow_above_copy1

0xcc4c,	// (0x00073244) aid_position_infowindow_below_copy1

0xcc54,	// (0x0007324c) cset_list_set_pane_g1_copy1

0x5cab,	// (0x0006c2a3) cset_list_set_pane_g3_copy1_ParamLimits

0x5cab,	// (0x0006c2a3) cset_list_set_pane_g3_copy1

0x5cba,	// (0x0006c2b2) cset_list_set_pane_t1_copy1_ParamLimits

0x5cba,	// (0x0006c2b2) cset_list_set_pane_t1_copy1

0x9873,	// (0x0006fe6b) list_highlight_pane_cp021_copy1_ParamLimits

0x9873,	// (0x0006fe6b) list_highlight_pane_cp021_copy1

0x4014,	// (0x0006a60c) cset6_slider_pane_ParamLimits

0x4014,	// (0x0006a60c) cset6_slider_pane

0x4040,	// (0x0006a638) main_cset6_slider_pane_g1_ParamLimits

0x4040,	// (0x0006a638) main_cset6_slider_pane_g1

0xcc5c,	// (0x00073254) main_cset6_slider_pane_g2_ParamLimits

0xcc5c,	// (0x00073254) main_cset6_slider_pane_g2

0x4068,	// (0x0006a660) main_cset6_slider_pane_g3_ParamLimits

0x4068,	// (0x0006a660) main_cset6_slider_pane_g3

0xcc84,	// (0x0007327c) main_cset6_slider_pane_g4_ParamLimits

0xcc84,	// (0x0007327c) main_cset6_slider_pane_g4

0xcc90,	// (0x00073288) main_cset6_slider_pane_g5_ParamLimits

0xcc90,	// (0x00073288) main_cset6_slider_pane_g5

0x38f3,	// (0x00069eeb) main_cset6_slider_pane_g7_ParamLimits

0x38f3,	// (0x00069eeb) main_cset6_slider_pane_g7

0x38ff,	// (0x00069ef7) main_cset6_slider_pane_g8_ParamLimits

0x38ff,	// (0x00069ef7) main_cset6_slider_pane_g8

0xcc9c,	// (0x00073294) main_cset6_slider_pane_g9_ParamLimits

0xcc9c,	// (0x00073294) main_cset6_slider_pane_g9

0xcca8,	// (0x000732a0) main_cset6_slider_pane_g10_ParamLimits

0xcca8,	// (0x000732a0) main_cset6_slider_pane_g10

0xccb4,	// (0x000732ac) main_cset6_slider_pane_g11_ParamLimits

0xccb4,	// (0x000732ac) main_cset6_slider_pane_g11

0xccc0,	// (0x000732b8) main_cset6_slider_pane_g12_ParamLimits

0xccc0,	// (0x000732b8) main_cset6_slider_pane_g12

0xcccc,	// (0x000732c4) main_cset6_slider_pane_g13_ParamLimits

0xcccc,	// (0x000732c4) main_cset6_slider_pane_g13

0xccd8,	// (0x000732d0) main_cset6_slider_pane_g14_ParamLimits

0xccd8,	// (0x000732d0) main_cset6_slider_pane_g14

0xcce4,	// (0x000732dc) main_cset6_slider_pane_g15_ParamLimits

0xcce4,	// (0x000732dc) main_cset6_slider_pane_g15

0xccfc,	// (0x000732f4) main_cset6_slider_pane_g16_ParamLimits

0xccfc,	// (0x000732f4) main_cset6_slider_pane_g16

0xcd08,	// (0x00073300) main_cset6_slider_pane_g17_ParamLimits

0xcd08,	// (0x00073300) main_cset6_slider_pane_g17

0x0011,

0xfbaa,	// (0x000761a2) main_cset6_slider_pane_g_ParamLimits

0xfbaa,	// (0x000761a2) main_cset6_slider_pane_g

0x4074,	// (0x0006a66c) main_cset6_slider_pane_t1_ParamLimits

0x4074,	// (0x0006a66c) main_cset6_slider_pane_t1

0xcd2c,	// (0x00073324) main_cset6_slider_pane_t2_ParamLimits

0xcd2c,	// (0x00073324) main_cset6_slider_pane_t2

0xcd57,	// (0x0007334f) main_cset6_slider_pane_t3_ParamLimits

0xcd57,	// (0x0007334f) main_cset6_slider_pane_t3

0xcd82,	// (0x0007337a) main_cset6_slider_pane_t4_ParamLimits

0xcd82,	// (0x0007337a) main_cset6_slider_pane_t4

0xcdad,	// (0x000733a5) main_cset6_slider_pane_t5_ParamLimits

0xcdad,	// (0x000733a5) main_cset6_slider_pane_t5

0x40b5,	// (0x0006a6ad) main_cset6_slider_pane_t7_ParamLimits

0x40b5,	// (0x0006a6ad) main_cset6_slider_pane_t7

0xcdd8,	// (0x000733d0) main_cset6_slider_pane_t8_ParamLimits

0xcdd8,	// (0x000733d0) main_cset6_slider_pane_t8

0xcdfc,	// (0x000733f4) main_cset6_slider_pane_t9_ParamLimits

0xcdfc,	// (0x000733f4) main_cset6_slider_pane_t9

0xce20,	// (0x00073418) main_cset6_slider_pane_t10_ParamLimits

0xce20,	// (0x00073418) main_cset6_slider_pane_t10

0xce44,	// (0x0007343c) main_cset6_slider_pane_t11_ParamLimits

0xce44,	// (0x0007343c) main_cset6_slider_pane_t11

0x40eb,	// (0x0006a6e3) main_cset6_slider_pane_t14_ParamLimits

0x40eb,	// (0x0006a6e3) main_cset6_slider_pane_t14

0x4124,	// (0x0006a71c) main_cset6_slider_pane_t15_ParamLimits

0x4124,	// (0x0006a71c) main_cset6_slider_pane_t15

0x000b,

0xfbcf,	// (0x000761c7) main_cset6_slider_pane_t_ParamLimits

0xfbcf,	// (0x000761c7) main_cset6_slider_pane_t

0x415d,	// (0x0006a755) cset_slider_pane_g1_copy1

0x4166,	// (0x0006a75e) cset_slider_pane_g2_copy1

0x416f,	// (0x0006a767) cset_slider_pane_g3_copy1

0x6739,	// (0x0006cd31) bg_popup_sub_pane_cp011_copy1

0x3a5c,	// (0x0006a054) main_cset_text_pane_g1_copy1

0x3a64,	// (0x0006a05c) main_cset_text_pane_t1_copy1

0x3a72,	// (0x0006a06a) main_cset_text_pane_t2_copy1

0x3a80,	// (0x0006a078) main_cset_text_pane_t3_copy1

0x3a8e,	// (0x0006a086) main_cset_text_pane_t4_copy1

0x3a9c,	// (0x0006a094) main_cset_text_pane_t5_copy1

0x3aaa,	// (0x0006a0a2) main_cset_text_pane_t6_copy1

0x3ab8,	// (0x0006a0b0) main_cset_text_pane_t7_copy1

0xce68,	// (0x00073460) main_cset_text2_pane_t1_copy1

0x6739,	// (0x0006cd31) main_ncimui_pane

0x98c6,	// (0x0006febe) popup_query_ncimui_window_ParamLimits

0x98c6,	// (0x0006febe) popup_query_ncimui_window

0xa43a,	// (0x00070a32) field_cale_ev2_pane_g4_ParamLimits

0xa43a,	// (0x00070a32) field_cale_ev2_pane_g4

0xb18c,	// (0x00071784) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb18c,	// (0x00071784) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x00075eac) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x00075eac) cell_video_dialer_keypad_pane_g

0xb1a4,	// (0x0007179c) cell_video_dialer_keypad_pane_t1

0x6739,	// (0x0006cd31) bg_popup_window_pane_cp012

0x0021,	// (0x00066619) heading_pane_cp06

0x4196,	// (0x0006a78e) ncim_query_content_pane

0x6739,	// (0x0006cd31) bg_popup_heading_pane_cp01

0x419e,	// (0x0006a796) ncim_heading_pane_t1

0x41ac,	// (0x0006a7a4) ncim_indicator_popup_pane

0x41be,	// (0x0006a7b6) ncim_query_button_pane

0x41d4,	// (0x0006a7cc) ncim_query_content_pane_t1

0x41e6,	// (0x0006a7de) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x00076206) ncim_query_content_pane_t

0x4234,	// (0x0006a82c) ncim_query_list_pane

0x4246,	// (0x0006a83e) ncim_query_popup_pane

0x41ac,	// (0x0006a7a4) ncim_indicator_popup_pane_ParamLimits

0xcf93,	// (0x0007358b) ncim_query_content_pane_g1_ParamLimits

0xcf93,	// (0x0007358b) ncim_query_content_pane_g1

0x41d4,	// (0x0006a7cc) ncim_query_content_pane_t1_ParamLimits

0x41e6,	// (0x0006a7de) ncim_query_content_pane_t2_ParamLimits

0xcf9f,	// (0x00073597) ncim_query_content_pane_t3_ParamLimits

0xcf9f,	// (0x00073597) ncim_query_content_pane_t3

0xcfbc,	// (0x000735b4) ncim_query_content_pane_t4_ParamLimits

0xcfbc,	// (0x000735b4) ncim_query_content_pane_t4

0xcfd9,	// (0x000735d1) ncim_query_content_pane_t5_ParamLimits

0xcfd9,	// (0x000735d1) ncim_query_content_pane_t5

0x420c,	// (0x0006a804) ncim_query_content_pane_t6_ParamLimits

0x420c,	// (0x0006a804) ncim_query_content_pane_t6

0xfc0e,	// (0x00076206) ncim_query_content_pane_t_ParamLimits

0x4234,	// (0x0006a82c) ncim_query_list_pane_ParamLimits

0x4246,	// (0x0006a83e) ncim_query_popup_pane_ParamLimits

0x425a,	// (0x0006a852) wait_bar_pane_cp04

0x6739,	// (0x0006cd31) input_focus_pane_cp011

0x4262,	// (0x0006a85a) ncim_query_popup_pane_t1

0x4270,	// (0x0006a868) ncim_list_query_list_pane_ParamLimits

0x4270,	// (0x0006a868) ncim_list_query_list_pane

0x6739,	// (0x0006cd31) bg_button_pane_cp027

0x4283,	// (0x0006a87b) ncim_query_button_pane_g1

0x6739,	// (0x0006cd31) list_highlight_pane_cp012

0x428d,	// (0x0006a885) ncim_list_query_list_pane_g1

0x4295,	// (0x0006a88d) ncim_list_query_list_pane_t1

0xb7f8,	// (0x00071df0) cam4_indicators_pane_g3_ParamLimits

0xb7f8,	// (0x00071df0) cam4_indicators_pane_g3

0xb8e8,	// (0x00071ee0) vid4_indicators_pane_g5_ParamLimits

0xb8e8,	// (0x00071ee0) vid4_indicators_pane_g5

0xc70b,	// (0x00072d03) vid4_progress_pane_g5_ParamLimits

0xc70b,	// (0x00072d03) vid4_progress_pane_g5

0xce9a,	// (0x00073492) main_ncimui_pane_g1

0xcef4,	// (0x000734ec) ncimui_group_query_pane_ParamLimits

0xcef4,	// (0x000734ec) ncimui_group_query_pane

0xcf3e,	// (0x00073536) ncimui_list_pane_ParamLimits

0xcf3e,	// (0x00073536) ncimui_list_pane

0xcf5f,	// (0x00073557) ncimui_text_pane_ParamLimits

0xcf5f,	// (0x00073557) ncimui_text_pane

0xcff6,	// (0x000735ee) ncimui_text_pane_t1_ParamLimits

0xcff6,	// (0x000735ee) ncimui_text_pane_t1

0x42a3,	// (0x0006a89b) ncimui_list_single_graphic_pane_ParamLimits

0x42a3,	// (0x0006a89b) ncimui_list_single_graphic_pane

0xd015,	// (0x0007360d) ncimui_query_pane_ParamLimits

0xd015,	// (0x0007360d) ncimui_query_pane

0x6739,	// (0x0006cd31) list_highlight_pane_cp013

0x42b3,	// (0x0006a8ab) ncim_list_query_list_pane_t1_copy1

0x428d,	// (0x0006a885) ncim_list_single_graphic_pane_g1

0x42c1,	// (0x0006a8b9) ncim_query_button_pane_cp01

0x42cd,	// (0x0006a8c5) ncim_query_entry_pane_ParamLimits

0x42cd,	// (0x0006a8c5) ncim_query_entry_pane

0x42e0,	// (0x0006a8d8) ncimui_query_pane_g1

0x42ec,	// (0x0006a8e4) ncimui_query_pane_t1_ParamLimits

0x42ec,	// (0x0006a8e4) ncimui_query_pane_t1

0x9873,	// (0x0006fe6b) input_focus_pane_cp012

0x4305,	// (0x0006a8fd) ncim_query_entry_pane_t1

0xe8e8,	// (0x00074ee0) main_im_pane_ParamLimits

0x9873,	// (0x0006fe6b) main_mobtv_pane_ParamLimits

0x9873,	// (0x0006fe6b) main_mobtv_pane

0xcd14,	// (0x0007330c) main_cset6_slider_pane_g18_ParamLimits

0xcd14,	// (0x0007330c) main_cset6_slider_pane_g18

0xcd20,	// (0x00073318) main_cset6_slider_pane_g19_ParamLimits

0xcd20,	// (0x00073318) main_cset6_slider_pane_g19

0x37a0,	// (0x00069d98) bg_main_mobtv_pane_ParamLimits

0x37a0,	// (0x00069d98) bg_main_mobtv_pane

0xd028,	// (0x00073620) main_mobtv_info_pane

0xd033,	// (0x0007362b) main_mobtv_loading_pane_ParamLimits

0xd033,	// (0x0007362b) main_mobtv_loading_pane

0x4317,	// (0x0006a90f) main_mobtv_pg_channel_list_pane

0x4321,	// (0x0006a919) main_mobtv_pg_hdr_pane

0xd040,	// (0x00073638) main_mobtv_programe_curr_pane_ParamLimits

0xd040,	// (0x00073638) main_mobtv_programe_curr_pane

0xd04d,	// (0x00073645) main_mobtv_programe_next_pane_ParamLimits

0xd04d,	// (0x00073645) main_mobtv_programe_next_pane

0x432a,	// (0x0006a922) popup_mobtv_noti_window

0x1c11,	// (0x00068209) main_tv_pg_hdr_pane_g1

0x4334,	// (0x0006a92c) main_tv_pg_hdr_pane_g2

0x433c,	// (0x0006a934) main_tv_pg_hdr_pane_g3

0x4344,	// (0x0006a93c) main_tv_pg_hdr_pane_g4

0x434c,	// (0x0006a944) main_tv_pg_hdr_pane_g5

0x4356,	// (0x0006a94e) main_tv_pg_hdr_pane_g6

0x4360,	// (0x0006a958) main_tv_pg_hdr_pane_g7

0x436a,	// (0x0006a962) main_tv_pg_hdr_pane_g8

0x4374,	// (0x0006a96c) main_tv_pg_hdr_pane_g9

0x437e,	// (0x0006a976) main_tv_pg_hdr_pane_g10

0x4388,	// (0x0006a980) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x00076213) main_tv_pg_hdr_pane_g

0x4392,	// (0x0006a98a) main_tv_pg_hdr_pane_t1

0x43a0,	// (0x0006a998) main_tv_pg_hdr_pane_t2

0x43ae,	// (0x0006a9a6) main_tv_pg_hdr_pane_t3

0x43be,	// (0x0006a9b6) main_tv_pg_hdr_pane_t4

0x43ce,	// (0x0006a9c6) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0007622a) main_tv_pg_hdr_pane_t

0x43de,	// (0x0006a9d6) single_mobtv_pg_channel_pane_ParamLimits

0x43de,	// (0x0006a9d6) single_mobtv_pg_channel_pane

0x43f0,	// (0x0006a9e8) single_mobtv_pg_channel_table_pane

0x43f9,	// (0x0006a9f1) single_mobtv_pg_channel_thumb_pane

0x4402,	// (0x0006a9fa) single_tv_pg_channel_pane_g1

0x440b,	// (0x0006aa03) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x00076235) single_tv_pg_channel_pane_g

0x1e41,	// (0x00068439) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1e41,	// (0x00068439) bg_single_mobtv_pg_channel_thumb_pane

0x4414,	// (0x0006aa0c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4414,	// (0x0006aa0c) single_mobtv_pg_channel_thumb_pane_g1

0x4422,	// (0x0006aa1a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4422,	// (0x0006aa1a) single_mobtv_pg_channel_thumb_pane_g2

0x442e,	// (0x0006aa26) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x442e,	// (0x0006aa26) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0007623a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0007623a) single_mobtv_pg_channel_thumb_pane_g

0x443a,	// (0x0006aa32) single_mobtv_pg_channel_thumb_pane_t1

0x4448,	// (0x0006aa40) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x00076241) single_mobtv_pg_channel_thumb_pane_t

0x1c11,	// (0x00068209) bg_single_mobtv_pg_channel_table_pane_g1

0x1c11,	// (0x00068209) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00075cf8) bg_single_mobtv_pg_channel_table_pane_g

0x4456,	// (0x0006aa4e) single_mobtv_pg_channel_table_pane_t1

0x4464,	// (0x0006aa5c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x00076246) single_mobtv_pg_channel_table_pane_t

0xd062,	// (0x0007365a) main_mobtv_info_pane_g1_ParamLimits

0xd062,	// (0x0007365a) main_mobtv_info_pane_g1

0xd07e,	// (0x00073676) main_mobtv_info_pane_t1_ParamLimits

0xd07e,	// (0x00073676) main_mobtv_info_pane_t1

0xd0f6,	// (0x000736ee) main_mobtv_info_pane_t2_ParamLimits

0xd0f6,	// (0x000736ee) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x00076250) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x00076250) main_mobtv_info_pane_t

0xd189,	// (0x00073781) wait_bar_pane_cp05

0xd19b,	// (0x00073793) main_mobtv_loading_pane_g1_ParamLimits

0xd19b,	// (0x00073793) main_mobtv_loading_pane_g1

0xd1a7,	// (0x0007379f) main_mobtv_loading_pane_g2_ParamLimits

0xd1a7,	// (0x0007379f) main_mobtv_loading_pane_g2

0xd1b3,	// (0x000737ab) main_mobtv_loading_pane_g3_ParamLimits

0xd1b3,	// (0x000737ab) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x00076257) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x00076257) main_mobtv_loading_pane_g

0x4472,	// (0x0006aa6a) main_mobtv_loading_pane_t1_ParamLimits

0x4472,	// (0x0006aa6a) main_mobtv_loading_pane_t1

0x448a,	// (0x0006aa82) main_mobtv_loading_pane_t2_ParamLimits

0x448a,	// (0x0006aa82) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0007625e) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0007625e) main_mobtv_loading_pane_t

0xd1c1,	// (0x000737b9) wait_bar_pane_cp06_ParamLimits

0xd1c1,	// (0x000737b9) wait_bar_pane_cp06

0x44ae,	// (0x0006aaa6) main_mobtv_programe_curr_pane_t1

0x44bc,	// (0x0006aab4) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x00076263) main_mobtv_programe_curr_pane_t

0x44ca,	// (0x0006aac2) main_mobtv_programe_next_pane_t1

0x44d8,	// (0x0006aad0) main_mobtv_programe_next_pane_t2

0x44e6,	// (0x0006aade) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x00076268) main_mobtv_programe_next_pane_t

0x6739,	// (0x0006cd31) bg_popup_mobtv_noti_window_pane

0x44f4,	// (0x0006aaec) popup_mobtv_noti_window_g1

0x44fc,	// (0x0006aaf4) popup_mobtv_noti_window_t1

0x450a,	// (0x0006ab02) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0007626f) popup_mobtv_noti_window_t

0x1c11,	// (0x00068209) bg_popup_mobtv_noti_window_pane_g1

0x6739,	// (0x0006cd31) sc_clock_pane

0x6739,	// (0x0006cd31) main_fs_bigclock_pane

0xc8fd,	// (0x00072ef5) blid2_tripm_pane_t4_ParamLimits

0xc8fd,	// (0x00072ef5) blid2_tripm_pane_t4

0xd1cd,	// (0x000737c5) sc_clock_pane_g1_ParamLimits

0xd1cd,	// (0x000737c5) sc_clock_pane_g1

0xd1db,	// (0x000737d3) sc_clock_pane_t1_ParamLimits

0xd1db,	// (0x000737d3) sc_clock_pane_t1

0xd1f0,	// (0x000737e8) sc_clock_pane_t2_ParamLimits

0xd1f0,	// (0x000737e8) sc_clock_pane_t2

0xd202,	// (0x000737fa) sc_clock_pane_t3_ParamLimits

0xd202,	// (0x000737fa) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x00076274) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x00076274) sc_clock_pane_t

0xdb63,	// (0x0007415b) main_fs_bigclock_indicator_pane_ParamLimits

0xdb63,	// (0x0007415b) main_fs_bigclock_indicator_pane

0xd2a3,	// (0x0007389b) main_fs_bigclock_pane_g1_ParamLimits

0xd2a3,	// (0x0007389b) main_fs_bigclock_pane_g1

0xdb6f,	// (0x00074167) main_fs_bigclock_pane_t1_ParamLimits

0xdb6f,	// (0x00074167) main_fs_bigclock_pane_t1

0xdb81,	// (0x00074179) main_fs_bigclock_pane_t2_ParamLimits

0xdb81,	// (0x00074179) main_fs_bigclock_pane_t2

0xdb95,	// (0x0007418d) main_fs_bigclock_pane_t3_ParamLimits

0xdb95,	// (0x0007418d) main_fs_bigclock_pane_t3

0x0002,

0xfe7b,	// (0x00076473) main_fs_bigclock_pane_t_ParamLimits

0xfe7b,	// (0x00076473) main_fs_bigclock_pane_t

0x2da5,	// (0x0006939d) main_fs_bigclock_indicator_pane_g1

0x41c6,	// (0x0006a7be) ncim_query_content_pane_g2_ParamLimits

0x41c6,	// (0x0006a7be) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x00076201) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x00076201) ncim_query_content_pane_g

0xd214,	// (0x0007380c) sc_clock_pane_t4_ParamLimits

0xd214,	// (0x0007380c) sc_clock_pane_t4

0x9873,	// (0x0006fe6b) main_radioblah_pane

0x370b,	// (0x00069d03) cell_call4_button_pane_t1_copy1_ParamLimits

0x370b,	// (0x00069d03) cell_call4_button_pane_t1_copy1

0xcea4,	// (0x0007349c) main_ncimui_pane_t1_ParamLimits

0xcea4,	// (0x0007349c) main_ncimui_pane_t1

0xcebe,	// (0x000734b6) main_ncimui_pane_t2_ParamLimits

0xcebe,	// (0x000734b6) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x000761fa) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x000761fa) main_ncimui_pane_t

0x4518,	// (0x0006ab10) main_radioblah_anim_pane_ParamLimits

0x4518,	// (0x0006ab10) main_radioblah_anim_pane

0x4529,	// (0x0006ab21) main_radioblah_info_pane_ParamLimits

0x4529,	// (0x0006ab21) main_radioblah_info_pane

0x453d,	// (0x0006ab35) main_radioblah_pane_t1_ParamLimits

0x453d,	// (0x0006ab35) main_radioblah_pane_t1

0x4559,	// (0x0006ab51) main_radioblah_pane_t2_ParamLimits

0x4559,	// (0x0006ab51) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x00076295) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x00076295) main_radioblah_pane_t

0xd426,	// (0x00073a1e) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd426,	// (0x00073a1e) main_radioblah_rocker_ctrl_pane

0x45a1,	// (0x0006ab99) main_radioblah_info_pane_t1_ParamLimits

0x45a1,	// (0x0006ab99) main_radioblah_info_pane_t1

0xd46f,	// (0x00073a67) main_radioblah_info_pane_t2_ParamLimits

0xd46f,	// (0x00073a67) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0007629e) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0007629e) main_radioblah_info_pane_t

0x1c11,	// (0x00068209) main_radioblah_rocker_ctrl_pane_g1

0xd51f,	// (0x00073b17) main_radioblah_rocker_ctrl_pane_g2

0xd527,	// (0x00073b1f) main_radioblah_rocker_ctrl_pane_g3

0xd52f,	// (0x00073b27) main_radioblah_rocker_ctrl_pane_g4

0xd537,	// (0x00073b2f) main_radioblah_rocker_ctrl_pane_g5

0xd53f,	// (0x00073b37) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x000762a7) main_radioblah_rocker_ctrl_pane_g

0xce68,	// (0x00073460) main_cset_text2_pane_t1_copy1_ParamLimits

0xb725,	// (0x00071d1d) cam4_image_uncrop_qvga_pane

0xb86e,	// (0x00071e66) vid4_image_uncrop_qcif_pane

0xca8f,	// (0x00073087) cam6_image_uncrop_qvga_pane_ParamLimits

0xca8f,	// (0x00073087) cam6_image_uncrop_qvga_pane

0x3ed2,	// (0x0006a4ca) vid6_image_uncrop_qcif_pane_ParamLimits

0x3ed2,	// (0x0006a4ca) vid6_image_uncrop_qcif_pane

0x6739,	// (0x0006cd31) bg_popup_preview_window_pane_cp03

0x4178,	// (0x0006a770) list_cset_text2_pane

0x4180,	// (0x0006a778) main_cset6_text2_pane_g1

0x4188,	// (0x0006a780) main_cset6_text2_pane_t1

0xd547,	// (0x00073b3f) list_cset_text2_pane_t1_ParamLimits

0xd547,	// (0x00073b3f) list_cset_text2_pane_t1

0x9873,	// (0x0006fe6b) main_radioblah_pane_ParamLimits

0xd175,	// (0x0007376d) main_mobtv_info_pane_t3_ParamLimits

0xd175,	// (0x0007376d) main_mobtv_info_pane_t3

0xd414,	// (0x00073a0c) main_radioblah_pane_g1

0xd43f,	// (0x00073a37) main_radioblah_info_pane_g1

0xd4c4,	// (0x00073abc) main_radioblah_info_pane_t3_ParamLimits

0xd4c4,	// (0x00073abc) main_radioblah_info_pane_t3

0x85ab,	// (0x0006eba3) highlight_cell_cale_month_pane_ParamLimits

0x85ab,	// (0x0006eba3) highlight_cell_cale_month_pane

0x6739,	// (0x0006cd31) main_phob_fisheye_pane

0x1f23,	// (0x0006851b) scroll_pane_cp0031_ParamLimits

0x1f23,	// (0x0006851b) scroll_pane_cp0031

0x3fe4,	// (0x0006a5dc) wait_bar_pane_cp08_ParamLimits

0xcc34,	// (0x0007322c) cset_list_set_pane_copy1_ParamLimits

0x45db,	// (0x0006abd3) highlight_cell_cale_month_pane_g1

0xd560,	// (0x00073b58) highlight_cell_cale_month_pane_t1

0x3c90,	// (0x0006a288) list_gen_pane_cp01

0x38de,	// (0x00069ed6) scroll_pane_01

0xd56e,	// (0x00073b66) list_single_double_fisheye_pane

0x5da0,	// (0x0006c398) list_double_fisheye_pane_g1_ParamLimits

0x5da0,	// (0x0006c398) list_double_fisheye_pane_g1

0x5dac,	// (0x0006c3a4) list_double_fisheye_pane_g2_ParamLimits

0x5dac,	// (0x0006c3a4) list_double_fisheye_pane_g2

0xd577,	// (0x00073b6f) list_double_fisheye_pane_g3_ParamLimits

0xd577,	// (0x00073b6f) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x000762b4) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x000762b4) list_double_fisheye_pane_g

0x5ddd,	// (0x0006c3d5) list_double_fisheye_pane_t1_ParamLimits

0x5ddd,	// (0x0006c3d5) list_double_fisheye_pane_t1

0x5df8,	// (0x0006c3f0) list_double_fisheye_pane_t2_ParamLimits

0x5df8,	// (0x0006c3f0) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x000762bf) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x000762bf) list_double_fisheye_pane_t

0x6739,	// (0x0006cd31) main_call5_pane

0xd23a,	// (0x00073832) sc_swipe_pane_ParamLimits

0xd23a,	// (0x00073832) sc_swipe_pane

0xd58f,	// (0x00073b87) call5_image_pane_ParamLimits

0xd58f,	// (0x00073b87) call5_image_pane

0xd5a1,	// (0x00073b99) call5_swipe_1_pane_ParamLimits

0xd5a1,	// (0x00073b99) call5_swipe_1_pane

0xd5ad,	// (0x00073ba5) call5_swipe_2_pane_ParamLimits

0xd5ad,	// (0x00073ba5) call5_swipe_2_pane

0xd5c9,	// (0x00073bc1) popup_call5_audio_first_window_ParamLimits

0xd5c9,	// (0x00073bc1) popup_call5_audio_first_window

0x1e41,	// (0x00068439) call5_swipe_1_pane_g1_ParamLimits

0x1e41,	// (0x00068439) call5_swipe_1_pane_g1

0x45e3,	// (0x0006abdb) call5_swipe_1_pane_g2_ParamLimits

0x45e3,	// (0x0006abdb) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x000762c4) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x000762c4) call5_swipe_1_pane_g

0x45ef,	// (0x0006abe7) call5_swipe_1_pane_t1_ParamLimits

0x45ef,	// (0x0006abe7) call5_swipe_1_pane_t1

0x1e41,	// (0x00068439) call5_swipe_2_pane_g1_ParamLimits

0x1e41,	// (0x00068439) call5_swipe_2_pane_g1

0x461e,	// (0x0006ac16) call5_swipe_2_pane_g2_ParamLimits

0x461e,	// (0x0006ac16) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x000762c9) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x000762c9) call5_swipe_2_pane_g

0x462a,	// (0x0006ac22) call5_swipe_2_pane_t1_ParamLimits

0x462a,	// (0x0006ac22) call5_swipe_2_pane_t1

0x463f,	// (0x0006ac37) sc_swipe_pane_g1_ParamLimits

0x463f,	// (0x0006ac37) sc_swipe_pane_g1

0x464c,	// (0x0006ac44) sc_swipe_pane_g2_ParamLimits

0x464c,	// (0x0006ac44) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x000762ce) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x000762ce) sc_swipe_pane_g

0x4658,	// (0x0006ac50) sc_swipe_pane_t1_ParamLimits

0x4658,	// (0x0006ac50) sc_swipe_pane_t1

0x6739,	// (0x0006cd31) main_cmail_launcher_pane

0xd5d9,	// (0x00073bd1) aid_size_cell_cmail_l_ParamLimits

0xd5d9,	// (0x00073bd1) aid_size_cell_cmail_l

0xd5e9,	// (0x00073be1) grid_cmail_l_pane_ParamLimits

0xd5e9,	// (0x00073be1) grid_cmail_l_pane

0xd5f9,	// (0x00073bf1) cell_cmail_l_pane_ParamLimits

0xd5f9,	// (0x00073bf1) cell_cmail_l_pane

0xd60f,	// (0x00073c07) cell_cmail_l_pane_g1_ParamLimits

0xd60f,	// (0x00073c07) cell_cmail_l_pane_g1

0xd61b,	// (0x00073c13) cell_cmail_l_pane_t1_ParamLimits

0xd61b,	// (0x00073c13) cell_cmail_l_pane_t1

0x466d,	// (0x0006ac65) cell_cmail_l_pane_t2_ParamLimits

0x466d,	// (0x0006ac65) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x000762d3) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x000762d3) cell_cmail_l_pane_t

0x9873,	// (0x0006fe6b) grid_highlight_pane_cp018_ParamLimits

0x9873,	// (0x0006fe6b) grid_highlight_pane_cp018

0x685d,	// (0x0006ce55) main2_pane_ParamLimits

0x685d,	// (0x0006ce55) main2_pane

0xe993,	// (0x00074f8b) popup_sp_fs_action_menu_bg_pane_g1

0xe99b,	// (0x00074f93) popup_sp_fs_action_menu_bg_pane_g2

0xe9a3,	// (0x00074f9b) popup_sp_fs_action_menu_bg_pane_g3

0xe9ab,	// (0x00074fa3) popup_sp_fs_action_menu_bg_pane_g4

0xe9b3,	// (0x00074fab) popup_sp_fs_action_menu_bg_pane_g5

0xe9bb,	// (0x00074fb3) popup_sp_fs_action_menu_bg_pane_g6

0xe9c3,	// (0x00074fbb) popup_sp_fs_action_menu_bg_pane_g7

0xe9cb,	// (0x00074fc3) popup_sp_fs_action_menu_bg_pane_g8

0xe9d3,	// (0x00074fcb) popup_sp_fs_action_menu_bg_pane_g9

0xe9db,	// (0x00074fd3) popup_sp_fs_action_menu_bg_pane_g10

0xe9db,	// (0x00074fd3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x000757a4) popup_sp_fs_action_menu_bg_pane_g

0x55df,	// (0x0006bbd7) list_medium_line_x2_t3_g3_g1_ParamLimits

0x55df,	// (0x0006bbd7) list_medium_line_x2_t3_g3_g1

0x55eb,	// (0x0006bbe3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x55eb,	// (0x0006bbe3) list_medium_line_x2_t3_g3_g2

0x55f7,	// (0x0006bbef) list_medium_line_x2_t3_g3_g3_ParamLimits

0x55f7,	// (0x0006bbef) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00075854) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00075854) list_medium_line_x2_t3_g3_g

0x5603,	// (0x0006bbfb) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5603,	// (0x0006bbfb) list_medium_line_x2_t3_g3_t1

0x5618,	// (0x0006bc10) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5618,	// (0x0006bc10) list_medium_line_x2_t3_g3_t2

0x562a,	// (0x0006bc22) list_medium_line_x2_t3_g3_t3_ParamLimits

0x562a,	// (0x0006bc22) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0007585b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0007585b) list_medium_line_x2_t3_g3_t

0x55df,	// (0x0006bbd7) list_medium_line_x2_t3_g2_g1_ParamLimits

0x55df,	// (0x0006bbd7) list_medium_line_x2_t3_g2_g1

0x55f7,	// (0x0006bbef) list_medium_line_x2_t3_g2_g2_ParamLimits

0x55f7,	// (0x0006bbef) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00075862) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00075862) list_medium_line_x2_t3_g2_g

0x563f,	// (0x0006bc37) list_medium_line_x2_t3_g2_t1_ParamLimits

0x563f,	// (0x0006bc37) list_medium_line_x2_t3_g2_t1

0x5655,	// (0x0006bc4d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5655,	// (0x0006bc4d) list_medium_line_x2_t3_g2_t2

0x5667,	// (0x0006bc5f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x5667,	// (0x0006bc5f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00075867) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00075867) list_medium_line_x2_t3_g2_t

0x55df,	// (0x0006bbd7) list_medium_line_x2_t4_g4_g1_ParamLimits

0x55df,	// (0x0006bbd7) list_medium_line_x2_t4_g4_g1

0x5685,	// (0x0006bc7d) list_medium_line_x2_t4_g4_g2_ParamLimits

0x5685,	// (0x0006bc7d) list_medium_line_x2_t4_g4_g2

0x55eb,	// (0x0006bbe3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x55eb,	// (0x0006bbe3) list_medium_line_x2_t4_g4_g3

0x5691,	// (0x0006bc89) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5691,	// (0x0006bc89) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0007586e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0007586e) list_medium_line_x2_t4_g4_g

0x569d,	// (0x0006bc95) list_medium_line_x2_t4_g4_t1_ParamLimits

0x569d,	// (0x0006bc95) list_medium_line_x2_t4_g4_t1

0x56b7,	// (0x0006bcaf) list_medium_line_x2_t4_g4_t2_ParamLimits

0x56b7,	// (0x0006bcaf) list_medium_line_x2_t4_g4_t2

0x56cd,	// (0x0006bcc5) list_medium_line_x2_t4_g4_t3_ParamLimits

0x56cd,	// (0x0006bcc5) list_medium_line_x2_t4_g4_t3

0x56e2,	// (0x0006bcda) list_medium_line_x2_t4_g4_t4_ParamLimits

0x56e2,	// (0x0006bcda) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00075877) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00075877) list_medium_line_x2_t4_g4_t

0x55df,	// (0x0006bbd7) list_medium_line_x2_t2_g4_g1_ParamLimits

0x55df,	// (0x0006bbd7) list_medium_line_x2_t2_g4_g1

0x5685,	// (0x0006bc7d) list_medium_line_x2_t2_g4_g2_ParamLimits

0x5685,	// (0x0006bc7d) list_medium_line_x2_t2_g4_g2

0x55eb,	// (0x0006bbe3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x55eb,	// (0x0006bbe3) list_medium_line_x2_t2_g4_g3

0x55f7,	// (0x0006bbef) list_medium_line_x2_t2_g4_g4_ParamLimits

0x55f7,	// (0x0006bbef) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x000758de) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x000758de) list_medium_line_x2_t2_g4_g

0x56f4,	// (0x0006bcec) list_medium_line_x2_t2_g4_t1_ParamLimits

0x56f4,	// (0x0006bcec) list_medium_line_x2_t2_g4_t1

0x562a,	// (0x0006bc22) list_medium_line_x2_t2_g4_t2_ParamLimits

0x562a,	// (0x0006bc22) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x000758e7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x000758e7) list_medium_line_x2_t2_g4_t

0x55df,	// (0x0006bbd7) list_medium_line_x2_t2_g3_g1_ParamLimits

0x55df,	// (0x0006bbd7) list_medium_line_x2_t2_g3_g1

0x55eb,	// (0x0006bbe3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x55eb,	// (0x0006bbe3) list_medium_line_x2_t2_g3_g2

0x55f7,	// (0x0006bbef) list_medium_line_x2_t2_g3_g3_ParamLimits

0x55f7,	// (0x0006bbef) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00075854) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00075854) list_medium_line_x2_t2_g3_g

0x5709,	// (0x0006bd01) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5709,	// (0x0006bd01) list_medium_line_x2_t2_g3_t1

0x562a,	// (0x0006bc22) list_medium_line_x2_t2_g3_t2_ParamLimits

0x562a,	// (0x0006bc22) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x000758ec) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x000758ec) list_medium_line_x2_t2_g3_t

0x87c9,	// (0x0006edc1) main_sp_fs_list_pane_ParamLimits

0x87c9,	// (0x0006edc1) main_sp_fs_list_pane

0x87d5,	// (0x0006edcd) sp_fs_scroll_pane_ParamLimits

0x87d5,	// (0x0006edcd) sp_fs_scroll_pane

0x571e,	// (0x0006bd16) list_medium_line_x2_t3_t1

0x572e,	// (0x0006bd26) list_medium_line_x2_t3_t2

0x573c,	// (0x0006bd34) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00075937) list_medium_line_x2_t3_t

0x574a,	// (0x0006bd42) list_medium_line_x3_t4_t1

0x575a,	// (0x0006bd52) list_medium_line_x3_t4_t2

0x5768,	// (0x0006bd60) list_medium_line_x3_t4_t3

0x573c,	// (0x0006bd34) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0007593e) list_medium_line_x3_t4_t

0x5776,	// (0x0006bd6e) list_medium_line_x4_t5_t1

0x5786,	// (0x0006bd7e) list_medium_line_x4_t5_t2

0x5768,	// (0x0006bd60) list_medium_line_x4_t5_t3

0x5794,	// (0x0006bd8c) list_medium_line_x4_t5_t4

0x573c,	// (0x0006bd34) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00075947) list_medium_line_x4_t5_t

0x55df,	// (0x0006bbd7) list_medium_line_t4_g4_g1_ParamLimits

0x55df,	// (0x0006bbd7) list_medium_line_t4_g4_g1

0x5691,	// (0x0006bc89) list_medium_line_t4_g4_g2_ParamLimits

0x5691,	// (0x0006bc89) list_medium_line_t4_g4_g2

0x57a2,	// (0x0006bd9a) list_medium_line_t4_g4_g3_ParamLimits

0x57a2,	// (0x0006bd9a) list_medium_line_t4_g4_g3

0x55f7,	// (0x0006bbef) list_medium_line_t4_g4_g4_ParamLimits

0x55f7,	// (0x0006bbef) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00075952) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00075952) list_medium_line_t4_g4_g

0x57ae,	// (0x0006bda6) list_medium_line_t4_g4_t1_ParamLimits

0x57ae,	// (0x0006bda6) list_medium_line_t4_g4_t1

0x57c3,	// (0x0006bdbb) list_medium_line_t4_g4_t2_ParamLimits

0x57c3,	// (0x0006bdbb) list_medium_line_t4_g4_t2

0x57d9,	// (0x0006bdd1) list_medium_line_t4_g4_t3_ParamLimits

0x57d9,	// (0x0006bdd1) list_medium_line_t4_g4_t3

0x562a,	// (0x0006bc22) list_medium_line_t4_g4_t4_ParamLimits

0x562a,	// (0x0006bc22) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0007595b) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0007595b) list_medium_line_t4_g4_t

0x88f4,	// (0x0006eeec) chi_dic_find_pane_g1

0x988f,	// (0x0006fe87) main_tport_pane

0x5a0f,	// (0x0006c007) list_medium_line_plain_t1

0x5a1d,	// (0x0006c015) list_medium_line_t2_g2_g1_ParamLimits

0x5a1d,	// (0x0006c015) list_medium_line_t2_g2_g1

0x5a29,	// (0x0006c021) list_medium_line_t2_g2_g2_ParamLimits

0x5a29,	// (0x0006c021) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x00076017) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x00076017) list_medium_line_t2_g2_g

0x5a35,	// (0x0006c02d) list_medium_line_t2_g2_t1_ParamLimits

0x5a35,	// (0x0006c02d) list_medium_line_t2_g2_t1

0x5a4c,	// (0x0006c044) list_medium_line_t2_g2_t2_ParamLimits

0x5a4c,	// (0x0006c044) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0007601c) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0007601c) list_medium_line_t2_g2_t

0x5c6b,	// (0x0006c263) aid_sp_fs_list_icon_a_sm

0xc76d,	// (0x00072d65) aid_sp_fs_list_icon_d

0x2e4b,	// (0x00069443) aid_sp_fs_text_primary

0xe405,	// (0x000749fd) aid_sp_fs_text_secondary

0x5c73,	// (0x0006c26b) list_medium_line

0x5c73,	// (0x0006c26b) list_medium_line_g2

0x5c73,	// (0x0006c26b) list_medium_line_g3

0x5c73,	// (0x0006c26b) list_medium_line_plain

0x5c73,	// (0x0006c26b) list_medium_line_plain_t2

0x5c73,	// (0x0006c26b) list_medium_line_plain_t3

0x5c73,	// (0x0006c26b) list_medium_line_right_icon

0x5c73,	// (0x0006c26b) list_medium_line_right_iconx2

0x5c73,	// (0x0006c26b) list_medium_line_t2

0x5c73,	// (0x0006c26b) list_medium_line_t2_g2

0x5c73,	// (0x0006c26b) list_medium_line_t2_g3

0x5c73,	// (0x0006c26b) list_medium_line_t2_right_icon

0x5c73,	// (0x0006c26b) list_medium_line_t2_right_iconx2

0x5c73,	// (0x0006c26b) list_medium_line_t3

0x5c73,	// (0x0006c26b) list_medium_line_t3_g2

0x5c73,	// (0x0006c26b) list_medium_line_t3_g3

0x5c73,	// (0x0006c26b) list_medium_line_t3_right_iconx2

0x5c7c,	// (0x0006c274) list_medium_line_t4_g4

0x5c85,	// (0x0006c27d) list_medium_line_x2

0x5c85,	// (0x0006c27d) list_medium_line_x2_t2_g2

0x5c85,	// (0x0006c27d) list_medium_line_x2_t2_g3

0x5c85,	// (0x0006c27d) list_medium_line_x2_t2_g4

0x5c85,	// (0x0006c27d) list_medium_line_x2_t3

0x5c85,	// (0x0006c27d) list_medium_line_x2_t3_g2

0x5c85,	// (0x0006c27d) list_medium_line_x2_t3_g3

0x5c85,	// (0x0006c27d) list_medium_line_x2_t3_g4

0x5c85,	// (0x0006c27d) list_medium_line_x2_t4_g2

0x5c85,	// (0x0006c27d) list_medium_line_x2_t4_g4

0x5c8e,	// (0x0006c286) list_medium_line_x3

0x5c8e,	// (0x0006c286) list_medium_line_x3_t4

0x5c8e,	// (0x0006c286) list_medium_line_x3_t4_g4

0x5c7c,	// (0x0006c274) list_medium_line_x4_t4

0x5c7c,	// (0x0006c274) list_medium_line_x4_t4_g7

0x5c7c,	// (0x0006c274) list_medium_line_x4_t5

0x5c97,	// (0x0006c28f) list_single_fs_dyc_pane_ParamLimits

0x5c97,	// (0x0006c28f) list_single_fs_dyc_pane

0x55df,	// (0x0006bbd7) list_medium_line_x4_t4_g7_g1_ParamLimits

0x55df,	// (0x0006bbd7) list_medium_line_x4_t4_g7_g1

0x5ccf,	// (0x0006c2c7) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5ccf,	// (0x0006c2c7) list_medium_line_x4_t4_g7_g2

0x5cdb,	// (0x0006c2d3) list_medium_line_x4_t4_g7_g3_ParamLimits

0x5cdb,	// (0x0006c2d3) list_medium_line_x4_t4_g7_g3

0x5cea,	// (0x0006c2e2) list_medium_line_x4_t4_g7_g4_ParamLimits

0x5cea,	// (0x0006c2e2) list_medium_line_x4_t4_g7_g4

0x5cf6,	// (0x0006c2ee) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5cf6,	// (0x0006c2ee) list_medium_line_x4_t4_g7_g5

0x5d05,	// (0x0006c2fd) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5d05,	// (0x0006c2fd) list_medium_line_x4_t4_g7_g6

0x5d14,	// (0x0006c30c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5d14,	// (0x0006c30c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe8,	// (0x000761e0) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe8,	// (0x000761e0) list_medium_line_x4_t4_g7_g

0x5d20,	// (0x0006c318) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5d20,	// (0x0006c318) list_medium_line_x4_t4_g7_t1

0x5d35,	// (0x0006c32d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5d35,	// (0x0006c32d) list_medium_line_x4_t4_g7_t2

0x5d4a,	// (0x0006c342) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5d4a,	// (0x0006c342) list_medium_line_x4_t4_g7_t3

0x5d5f,	// (0x0006c357) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5d5f,	// (0x0006c357) list_medium_line_x4_t4_g7_t4

0x5d71,	// (0x0006c369) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5d71,	// (0x0006c369) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf7,	// (0x000761ef) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf7,	// (0x000761ef) list_medium_line_x4_t4_g7_t

0x5d83,	// (0x0006c37b) list_single_dyc_row_pane_ParamLimits

0x5d83,	// (0x0006c37b) list_single_dyc_row_pane

0xd583,	// (0x00073b7b) call5_gesture_pane_ParamLimits

0xd583,	// (0x00073b7b) call5_gesture_pane

0xd5b9,	// (0x00073bb1) call5_windows_pane_ParamLimits

0xd5b9,	// (0x00073bb1) call5_windows_pane

0xd631,	// (0x00073c29) call5_swipe_1_pane_cp_ParamLimits

0xd631,	// (0x00073c29) call5_swipe_1_pane_cp

0xd63d,	// (0x00073c35) call5_swipe_2_pane_cp_ParamLimits

0xd63d,	// (0x00073c35) call5_swipe_2_pane_cp

0x026f,	// (0x00066867) call5_image_pane_cp

0xd649,	// (0x00073c41) popup_call5_audio_first_window_cp_ParamLimits

0xd649,	// (0x00073c41) popup_call5_audio_first_window_cp

0x463f,	// (0x0006ac37) call5_swipe_1_pane_g1_cp_ParamLimits

0x463f,	// (0x0006ac37) call5_swipe_1_pane_g1_cp

0x467f,	// (0x0006ac77) call5_swipe_1_pane_g2_cp

0x4658,	// (0x0006ac50) call5_swipe_1_pane_t1_cp_ParamLimits

0x4658,	// (0x0006ac50) call5_swipe_1_pane_t1_cp

0x463f,	// (0x0006ac37) call5_swipe_2_pane_g1_cp_ParamLimits

0x463f,	// (0x0006ac37) call5_swipe_2_pane_g1_cp

0x4687,	// (0x0006ac7f) call5_swipe_2_pane_g2_cp

0x468f,	// (0x0006ac87) call5_swipe_2_pane_t1_cp_ParamLimits

0x468f,	// (0x0006ac87) call5_swipe_2_pane_t1_cp

0x9873,	// (0x0006fe6b) main_sp_fs_email_pane

0x46a4,	// (0x0006ac9c) main_sp_fs_listscroll_pane_te

0x5e1a,	// (0x0006c412) popup_sp_fs_action_menu_pane_ParamLimits

0x5e1a,	// (0x0006c412) popup_sp_fs_action_menu_pane

0x1c11,	// (0x00068209) bg_sp_fs_ctrlbar_pane_g1

0x46ad,	// (0x0006aca5) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x46b6,	// (0x0006acae) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x46bf,	// (0x0006acb7) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1c11,	// (0x00068209) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x000762d8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x19f0,	// (0x00067fe8) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x19f0,	// (0x00067fe8) bg_sp_fs_ctrlbar_ddmenu_pane

0x46c8,	// (0x0006acc0) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x46c8,	// (0x0006acc0) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x46d4,	// (0x0006accc) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x46d4,	// (0x0006accc) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x000762e1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x000762e1) main_sp_fs_ctrlbar_ddmenu_pane_g

0x46e0,	// (0x0006acd8) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x46e0,	// (0x0006acd8) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x5e60,	// (0x0006c458) list_medium_line_t2_right_icon_g1

0x5e68,	// (0x0006c460) list_medium_line_t2_right_icon_t1

0x5e78,	// (0x0006c470) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x000762e6) list_medium_line_t2_right_icon_t

0x16dc,	// (0x00067cd4) bg_sp_fs_ctrlbar_pane_ParamLimits

0x16dc,	// (0x00067cd4) bg_sp_fs_ctrlbar_pane

0xd6ae,	// (0x00073ca6) main_sp_fs_ctrlbar_button_pane_cp01

0xd6b6,	// (0x00073cae) main_sp_fs_ctrlbar_ddmenu_pane

0x4734,	// (0x0006ad2c) main_sp_fs_ctrlbar_pane_g1

0x4740,	// (0x0006ad38) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x000762eb) main_sp_fs_ctrlbar_pane_g

0x474c,	// (0x0006ad44) main_sp_fs_ctrlbar_pane_t1

0x5e86,	// (0x0006c47e) main_sp_fs_ctrlbar_pane

0x5ea2,	// (0x0006c49a) main_sp_fs_listscroll_pane_te_cp01

0x5eb3,	// (0x0006c4ab) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x5eb3,	// (0x0006c4ab) popup_sp_fs_action_menu_pane_cp01

0x9873,	// (0x0006fe6b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9873,	// (0x0006fe6b) bg_sp_fs_highlight_list_pane_cp01

0x5ecd,	// (0x0006c4c5) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5ecd,	// (0x0006c4c5) sp_fs_action_menu_list_gene_pane_g1

0x4761,	// (0x0006ad59) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x4761,	// (0x0006ad59) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x000762f0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x000762f0) sp_fs_action_menu_list_gene_pane_g

0x5edc,	// (0x0006c4d4) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5edc,	// (0x0006c4d4) sp_fs_action_menu_list_gene_pane_t1

0x5ef4,	// (0x0006c4ec) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5ef4,	// (0x0006c4ec) sp_fs_action_menu_list_gene_pane

0x476e,	// (0x0006ad66) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x476e,	// (0x0006ad66) popup_sp_fs_action_menu_bg_pane

0x5f17,	// (0x0006c50f) sp_fs_action_menu_list_pane_ParamLimits

0x5f17,	// (0x0006c50f) sp_fs_action_menu_list_pane

0x477c,	// (0x0006ad74) sp_fs_scroll_pane_cp01_ParamLimits

0x477c,	// (0x0006ad74) sp_fs_scroll_pane_cp01

0x5f3b,	// (0x0006c533) list_medium_line_plain_t2_t1

0x5f4b,	// (0x0006c543) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x000762f5) list_medium_line_plain_t2_t

0x5f59,	// (0x0006c551) list_medium_line_plain_t3_t1

0x5f69,	// (0x0006c561) list_medium_line_plain_t3_t2

0x5f77,	// (0x0006c56f) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x000762fa) list_medium_line_plain_t3_t

0x55df,	// (0x0006bbd7) list_medium_line_x2_t2_g2_g1_ParamLimits

0x55df,	// (0x0006bbd7) list_medium_line_x2_t2_g2_g1

0x55f7,	// (0x0006bbef) list_medium_line_x2_t2_g2_g2_ParamLimits

0x55f7,	// (0x0006bbef) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00075862) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00075862) list_medium_line_x2_t2_g2_g

0x57ae,	// (0x0006bda6) list_medium_line_x2_t2_g2_t1_ParamLimits

0x57ae,	// (0x0006bda6) list_medium_line_x2_t2_g2_t1

0x562a,	// (0x0006bc22) list_medium_line_x2_t2_g2_t2_ParamLimits

0x562a,	// (0x0006bc22) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x00076301) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x00076301) list_medium_line_x2_t2_g2_t

0x55df,	// (0x0006bbd7) list_medium_line_x2_t4_g2_g1_ParamLimits

0x55df,	// (0x0006bbd7) list_medium_line_x2_t4_g2_g1

0x5f85,	// (0x0006c57d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5f85,	// (0x0006c57d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0e,	// (0x00076306) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0e,	// (0x00076306) list_medium_line_x2_t4_g2_g

0x5f97,	// (0x0006c58f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x5f97,	// (0x0006c58f) list_medium_line_x2_t4_g2_t1

0x5fb1,	// (0x0006c5a9) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5fb1,	// (0x0006c5a9) list_medium_line_x2_t4_g2_t2

0x5fc7,	// (0x0006c5bf) list_medium_line_x2_t4_g2_t3_ParamLimits

0x5fc7,	// (0x0006c5bf) list_medium_line_x2_t4_g2_t3

0x562a,	// (0x0006bc22) list_medium_line_x2_t4_g2_t4_ParamLimits

0x562a,	// (0x0006bc22) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0007630b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0007630b) list_medium_line_x2_t4_g2_t

0x5fdc,	// (0x0006c5d4) list_medium_line_t3_right_iconx2_g1

0x5e60,	// (0x0006c458) list_medium_line_t3_right_iconx2_g2

0x5fe4,	// (0x0006c5dc) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x00076314) list_medium_line_t3_right_iconx2_g

0x5fec,	// (0x0006c5e4) list_medium_line_t3_right_iconx2_t1

0x5ffc,	// (0x0006c5f4) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0007631b) list_medium_line_t3_right_iconx2_t

0x55df,	// (0x0006bbd7) list_medium_line_x3_t4_g4_g1_ParamLimits

0x55df,	// (0x0006bbd7) list_medium_line_x3_t4_g4_g1

0x55eb,	// (0x0006bbe3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x55eb,	// (0x0006bbe3) list_medium_line_x3_t4_g4_g2

0x5691,	// (0x0006bc89) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5691,	// (0x0006bc89) list_medium_line_x3_t4_g4_g3

0x600a,	// (0x0006c602) list_medium_line_x3_t4_g4_g4_ParamLimits

0x600a,	// (0x0006c602) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x00076320) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x00076320) list_medium_line_x3_t4_g4_g

0x6016,	// (0x0006c60e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6016,	// (0x0006c60e) list_medium_line_x3_t4_g4_t1

0x602d,	// (0x0006c625) list_medium_line_x3_t4_g4_t2_ParamLimits

0x602d,	// (0x0006c625) list_medium_line_x3_t4_g4_t2

0x6042,	// (0x0006c63a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x6042,	// (0x0006c63a) list_medium_line_x3_t4_g4_t3

0x6057,	// (0x0006c64f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x6057,	// (0x0006c64f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x00076329) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x00076329) list_medium_line_x3_t4_g4_t

0x6074,	// (0x0006c66c) list_single_dyc_row_text_pane_t1_ParamLimits

0x6074,	// (0x0006c66c) list_single_dyc_row_text_pane_t1

0x60b7,	// (0x0006c6af) list_single_dyc_row_text_pane_t2_ParamLimits

0x60b7,	// (0x0006c6af) list_single_dyc_row_text_pane_t2

0x6111,	// (0x0006c709) list_single_dyc_row_text_pane_t3_ParamLimits

0x6111,	// (0x0006c709) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3a,	// (0x00076332) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x00076332) list_single_dyc_row_text_pane_t

0x6123,	// (0x0006c71b) list_single_dyc_row_pane_g1_ParamLimits

0x6123,	// (0x0006c71b) list_single_dyc_row_pane_g1

0x612f,	// (0x0006c727) list_single_dyc_row_pane_g2_ParamLimits

0x612f,	// (0x0006c727) list_single_dyc_row_pane_g2

0x613b,	// (0x0006c733) list_single_dyc_row_pane_g3_ParamLimits

0x613b,	// (0x0006c733) list_single_dyc_row_pane_g3

0x6147,	// (0x0006c73f) list_single_dyc_row_pane_g4_ParamLimits

0x6147,	// (0x0006c73f) list_single_dyc_row_pane_g4

0x0003,

0xfd41,	// (0x00076339) list_single_dyc_row_pane_g_ParamLimits

0xfd41,	// (0x00076339) list_single_dyc_row_pane_g

0x6153,	// (0x0006c74b) list_single_dyc_row_text_pane_ParamLimits

0x6153,	// (0x0006c74b) list_single_dyc_row_text_pane

0x6739,	// (0x0006cd31) bg_sp_fs_scroll_pane

0x47a2,	// (0x0006ad9a) thumb_sp_fs_scroll_pane

0x5a1d,	// (0x0006c015) list_medium_line_g1_ParamLimits

0x5a1d,	// (0x0006c015) list_medium_line_g1

0x6172,	// (0x0006c76a) list_medium_line_t1_ParamLimits

0x6172,	// (0x0006c76a) list_medium_line_t1

0x55df,	// (0x0006bbd7) list_medium_line_x2_g1_ParamLimits

0x55df,	// (0x0006bbd7) list_medium_line_x2_g1

0x55eb,	// (0x0006bbe3) list_medium_line_x2_g2_ParamLimits

0x55eb,	// (0x0006bbe3) list_medium_line_x2_g2

0x0001,

0xfd4a,	// (0x00076342) list_medium_line_x2_g_ParamLimits

0xfd4a,	// (0x00076342) list_medium_line_x2_g

0x6187,	// (0x0006c77f) list_medium_line_x2_t1_ParamLimits

0x6187,	// (0x0006c77f) list_medium_line_x2_t1

0x55df,	// (0x0006bbd7) list_medium_line_x3_g1_ParamLimits

0x55df,	// (0x0006bbd7) list_medium_line_x3_g1

0x55eb,	// (0x0006bbe3) list_medium_line_x3_g2_ParamLimits

0x55eb,	// (0x0006bbe3) list_medium_line_x3_g2

0x0001,

0xfd4a,	// (0x00076342) list_medium_line_x3_g_ParamLimits

0xfd4a,	// (0x00076342) list_medium_line_x3_g

0x6187,	// (0x0006c77f) list_medium_line_x3_t1_ParamLimits

0x6187,	// (0x0006c77f) list_medium_line_x3_t1

0x26e4,	// (0x00068cdc) thumb_sp_fs_scroll_pane_g1

0x26ed,	// (0x00068ce5) thumb_sp_fs_scroll_pane_g2

0x26f6,	// (0x00068cee) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x00076347) thumb_sp_fs_scroll_pane_g

0x26e4,	// (0x00068cdc) bg_sp_fs_scroll_pane_g1

0x26ed,	// (0x00068ce5) bg_sp_fs_scroll_pane_g2

0x26f6,	// (0x00068cee) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x00076347) bg_sp_fs_scroll_pane_g

0x55df,	// (0x0006bbd7) list_medium_line_x2_t3_g4_g1_ParamLimits

0x55df,	// (0x0006bbd7) list_medium_line_x2_t3_g4_g1

0x5685,	// (0x0006bc7d) list_medium_line_x2_t3_g4_g2_ParamLimits

0x5685,	// (0x0006bc7d) list_medium_line_x2_t3_g4_g2

0x55eb,	// (0x0006bbe3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x55eb,	// (0x0006bbe3) list_medium_line_x2_t3_g4_g3

0x55f7,	// (0x0006bbef) list_medium_line_x2_t3_g4_g4_ParamLimits

0x55f7,	// (0x0006bbef) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x000758de) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x000758de) list_medium_line_x2_t3_g4_g

0x619d,	// (0x0006c795) list_medium_line_x2_t3_g4_t1_ParamLimits

0x619d,	// (0x0006c795) list_medium_line_x2_t3_g4_t1

0x61b3,	// (0x0006c7ab) list_medium_line_x2_t3_g4_t2_ParamLimits

0x61b3,	// (0x0006c7ab) list_medium_line_x2_t3_g4_t2

0x562a,	// (0x0006bc22) list_medium_line_x2_t3_g4_t3_ParamLimits

0x562a,	// (0x0006bc22) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd56,	// (0x0007634e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd56,	// (0x0007634e) list_medium_line_x2_t3_g4_t

0x5a1d,	// (0x0006c015) list_medium_line_g2_g1_ParamLimits

0x5a1d,	// (0x0006c015) list_medium_line_g2_g1

0x5a29,	// (0x0006c021) list_medium_line_g2_g2_ParamLimits

0x5a29,	// (0x0006c021) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x00076017) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x00076017) list_medium_line_g2_g

0x61cc,	// (0x0006c7c4) list_medium_line_g2_t1_ParamLimits

0x61cc,	// (0x0006c7c4) list_medium_line_g2_t1

0x5a1d,	// (0x0006c015) list_medium_line_t3_g2_g1_ParamLimits

0x5a1d,	// (0x0006c015) list_medium_line_t3_g2_g1

0x5a29,	// (0x0006c021) list_medium_line_t3_g2_g2_ParamLimits

0x5a29,	// (0x0006c021) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x00076017) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x00076017) list_medium_line_t3_g2_g

0x61e1,	// (0x0006c7d9) list_medium_line_t3_g2_t1_ParamLimits

0x61e1,	// (0x0006c7d9) list_medium_line_t3_g2_t1

0x61fb,	// (0x0006c7f3) list_medium_line_t3_g2_t2_ParamLimits

0x61fb,	// (0x0006c7f3) list_medium_line_t3_g2_t2

0x6211,	// (0x0006c809) list_medium_line_t3_g2_t3_ParamLimits

0x6211,	// (0x0006c809) list_medium_line_t3_g2_t3

0x0002,

0xfd5d,	// (0x00076355) list_medium_line_t3_g2_t_ParamLimits

0xfd5d,	// (0x00076355) list_medium_line_t3_g2_t

0x5e60,	// (0x0006c458) list_medium_line_right_icon_g1

0x6228,	// (0x0006c820) list_medium_line_right_icon_t1

0x5a1d,	// (0x0006c015) list_medium_line_t2_g1_ParamLimits

0x5a1d,	// (0x0006c015) list_medium_line_t2_g1

0x6236,	// (0x0006c82e) list_medium_line_t2_t1_ParamLimits

0x6236,	// (0x0006c82e) list_medium_line_t2_t1

0x6250,	// (0x0006c848) list_medium_line_t2_t2_ParamLimits

0x6250,	// (0x0006c848) list_medium_line_t2_t2

0x0001,

0xfd64,	// (0x0007635c) list_medium_line_t2_t_ParamLimits

0xfd64,	// (0x0007635c) list_medium_line_t2_t

0x5a1d,	// (0x0006c015) list_medium_line_t3_g1_ParamLimits

0x5a1d,	// (0x0006c015) list_medium_line_t3_g1

0x6265,	// (0x0006c85d) list_medium_line_t3_t1_ParamLimits

0x6265,	// (0x0006c85d) list_medium_line_t3_t1

0x627c,	// (0x0006c874) list_medium_line_t3_t2_ParamLimits

0x627c,	// (0x0006c874) list_medium_line_t3_t2

0x6291,	// (0x0006c889) list_medium_line_t3_t3_ParamLimits

0x6291,	// (0x0006c889) list_medium_line_t3_t3

0x0002,

0xfd69,	// (0x00076361) list_medium_line_t3_t_ParamLimits

0xfd69,	// (0x00076361) list_medium_line_t3_t

0x5a1d,	// (0x0006c015) list_medium_line_g3_g1_ParamLimits

0x5a1d,	// (0x0006c015) list_medium_line_g3_g1

0x62a3,	// (0x0006c89b) list_medium_line_g3_g2_ParamLimits

0x62a3,	// (0x0006c89b) list_medium_line_g3_g2

0x5a29,	// (0x0006c021) list_medium_line_g3_g3_ParamLimits

0x5a29,	// (0x0006c021) list_medium_line_g3_g3

0x0002,

0xfd70,	// (0x00076368) list_medium_line_g3_g_ParamLimits

0xfd70,	// (0x00076368) list_medium_line_g3_g

0x62af,	// (0x0006c8a7) list_medium_line_g3_t1_ParamLimits

0x62af,	// (0x0006c8a7) list_medium_line_g3_t1

0x5a1d,	// (0x0006c015) list_medium_line_t2_g3_g1_ParamLimits

0x5a1d,	// (0x0006c015) list_medium_line_t2_g3_g1

0x62a3,	// (0x0006c89b) list_medium_line_t2_g3_g2_ParamLimits

0x62a3,	// (0x0006c89b) list_medium_line_t2_g3_g2

0x5a29,	// (0x0006c021) list_medium_line_t2_g3_g3_ParamLimits

0x5a29,	// (0x0006c021) list_medium_line_t2_g3_g3

0x0002,

0xfd70,	// (0x00076368) list_medium_line_t2_g3_g_ParamLimits

0xfd70,	// (0x00076368) list_medium_line_t2_g3_g

0x62c4,	// (0x0006c8bc) list_medium_line_t2_g3_t1_ParamLimits

0x62c4,	// (0x0006c8bc) list_medium_line_t2_g3_t1

0x62db,	// (0x0006c8d3) list_medium_line_t2_g3_t2_ParamLimits

0x62db,	// (0x0006c8d3) list_medium_line_t2_g3_t2

0x0001,

0xfd77,	// (0x0007636f) list_medium_line_t2_g3_t_ParamLimits

0xfd77,	// (0x0007636f) list_medium_line_t2_g3_t

0x5a1d,	// (0x0006c015) list_medium_line_t3_g3_g1_ParamLimits

0x5a1d,	// (0x0006c015) list_medium_line_t3_g3_g1

0x62a3,	// (0x0006c89b) list_medium_line_t3_g3_g2_ParamLimits

0x62a3,	// (0x0006c89b) list_medium_line_t3_g3_g2

0x5a29,	// (0x0006c021) list_medium_line_t3_g3_g3_ParamLimits

0x5a29,	// (0x0006c021) list_medium_line_t3_g3_g3

0x0002,

0xfd70,	// (0x00076368) list_medium_line_t3_g3_g_ParamLimits

0xfd70,	// (0x00076368) list_medium_line_t3_g3_g

0x62f0,	// (0x0006c8e8) list_medium_line_t3_g3_t1_ParamLimits

0x62f0,	// (0x0006c8e8) list_medium_line_t3_g3_t1

0x6304,	// (0x0006c8fc) list_medium_line_t3_g3_t2_ParamLimits

0x6304,	// (0x0006c8fc) list_medium_line_t3_g3_t2

0x6316,	// (0x0006c90e) list_medium_line_t3_g3_t3_ParamLimits

0x6316,	// (0x0006c90e) list_medium_line_t3_g3_t3

0x0002,

0xfd7c,	// (0x00076374) list_medium_line_t3_g3_t_ParamLimits

0xfd7c,	// (0x00076374) list_medium_line_t3_g3_t

0x5fdc,	// (0x0006c5d4) list_medium_line_right_iconx2_g1

0x5e60,	// (0x0006c458) list_medium_line_right_iconx2_g2

0x0001,

0xfd83,	// (0x0007637b) list_medium_line_right_iconx2_g

0x632a,	// (0x0006c922) list_medium_line_right_iconx2_t1

0x5fdc,	// (0x0006c5d4) list_medium_line_t2_right_iconx2_g1

0x5e60,	// (0x0006c458) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd83,	// (0x0007637b) list_medium_line_t2_right_iconx2_g

0x6338,	// (0x0006c930) list_medium_line_t2_right_iconx2_t1

0x6348,	// (0x0006c940) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd88,	// (0x00076380) list_medium_line_t2_right_iconx2_t

0x6356,	// (0x0006c94e) list_medium_line_x4_t4_t1

0x6364,	// (0x0006c95c) list_medium_line_x4_t4_t2

0x6374,	// (0x0006c96c) list_medium_line_x4_t4_t3

0x6384,	// (0x0006c97c) list_medium_line_x4_t4_t4

0x0003,

0xfd8d,	// (0x00076385) list_medium_line_x4_t4_t

0xd6e9,	// (0x00073ce1) tport_appsw_pane_ParamLimits

0xd6e9,	// (0x00073ce1) tport_appsw_pane

0xd6f7,	// (0x00073cef) tport_contact_pane_ParamLimits

0xd6f7,	// (0x00073cef) tport_contact_pane

0xd705,	// (0x00073cfd) tport_listscroll_pane_ParamLimits

0xd705,	// (0x00073cfd) tport_listscroll_pane

0xd713,	// (0x00073d0b) cell_tport_appsw_pane_ParamLimits

0xd713,	// (0x00073d0b) cell_tport_appsw_pane

0x1ea6,	// (0x0006849e) tport_appsw_pane_g1_ParamLimits

0x1ea6,	// (0x0006849e) tport_appsw_pane_g1

0x275f,	// (0x00068d57) tport_contact_pane_g1

0x2768,	// (0x00068d60) tport_contact_pane_t1

0x2776,	// (0x00068d6e) tport_contact_pane_t2

0x0001,

0xfd96,	// (0x0007638e) tport_contact_pane_t

0x2784,	// (0x00068d7c) list_tport_pane

0x278d,	// (0x00068d85) scroll_pane_cp_030

0xd73e,	// (0x00073d36) cell_tport_appsw_pane_g1

0x27a6,	// (0x00068d9e) cell_tport_appsw_pane_t1

0x6739,	// (0x0006cd31) grid_highlight_pane_cp019

0xd74e,	// (0x00073d46) list_tport_double_graphic_pane_ParamLimits

0xd74e,	// (0x00073d46) list_tport_double_graphic_pane

0x9873,	// (0x0006fe6b) list_highlight_pane_cp023_ParamLimits

0x9873,	// (0x0006fe6b) list_highlight_pane_cp023

0xd75f,	// (0x00073d57) list_tport_double_graphic_pane_g1_ParamLimits

0xd75f,	// (0x00073d57) list_tport_double_graphic_pane_g1

0xd76c,	// (0x00073d64) list_tport_double_graphic_pane_t1_ParamLimits

0xd76c,	// (0x00073d64) list_tport_double_graphic_pane_t1

0xd781,	// (0x00073d79) list_tport_double_graphic_pane_t2_ParamLimits

0xd781,	// (0x00073d79) list_tport_double_graphic_pane_t2

0x0001,

0xfda2,	// (0x0007639a) list_tport_double_graphic_pane_t_ParamLimits

0xfda2,	// (0x0007639a) list_tport_double_graphic_pane_t

0x6739,	// (0x0006cd31) main_cale_note_pane

0xbab0,	// (0x000720a8) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xbab0,	// (0x000720a8) cell_vitu2_function_top_wide_pane_cp01

0xd189,	// (0x00073781) wait_bar_pane_cp05_ParamLimits

0x6739,	// (0x0006cd31) listscroll_cmail_pane

0x27bc,	// (0x00068db4) list_cmail_pane

0xd79d,	// (0x00073d95) list_cmail_body_pane

0xd7b2,	// (0x00073daa) list_single_cmail_header_caption_pane

0xd7cc,	// (0x00073dc4) list_single_cmail_header_detail_pane_ParamLimits

0xd7cc,	// (0x00073dc4) list_single_cmail_header_detail_pane

0xd7fb,	// (0x00073df3) list_single_cmail_header_caption_pane_t1

0x6394,	// (0x0006c98c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x6394,	// (0x0006c98c) list_single_cmail_header_detail_pane_g1

0xd80b,	// (0x00073e03) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd80b,	// (0x00073e03) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda7,	// (0x0007639f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda7,	// (0x0007639f) list_single_cmail_header_detail_pane_g

0x63ac,	// (0x0006c9a4) list_single_cmail_header_detail_pane_t1_ParamLimits

0x63ac,	// (0x0006c9a4) list_single_cmail_header_detail_pane_t1

0x6410,	// (0x0006ca08) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6410,	// (0x0006ca08) list_single_cmail_header_editor_pane_bg

0x440b,	// (0x0006aa03) list_cmail_body_pane_g1

0x2845,	// (0x00068e3d) list_cmail_body_pane_t1

0x37c0,	// (0x00069db8) list_single_cmail_header_editor_pane_bg_g1

0xecf2,	// (0x000752ea) list_single_cmail_header_editor_pane_bg_g1_copy1

0x37d0,	// (0x00069dc8) list_single_cmail_header_editor_pane_bg_g1_copy2

0x37c8,	// (0x00069dc0) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3a13,	// (0x0006a00b) list_single_cmail_header_editor_pane_bg_g1_copy4

0x37f0,	// (0x00069de8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x37e0,	// (0x00069dd8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x37e8,	// (0x00069de0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xecd2,	// (0x000752ca) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd817,	// (0x00073e0f) calenote_gesture_pane_ParamLimits

0xd817,	// (0x00073e0f) calenote_gesture_pane

0xd831,	// (0x00073e29) calenote_window_pane_ParamLimits

0xd831,	// (0x00073e29) calenote_window_pane

0x2853,	// (0x00068e4b) popup_note_window_cp01

0xd849,	// (0x00073e41) calenote_swipe_1_pane_ParamLimits

0xd849,	// (0x00073e41) calenote_swipe_1_pane

0xd63d,	// (0x00073c35) calenote_swipe_2_pane_ParamLimits

0xd63d,	// (0x00073c35) calenote_swipe_2_pane

0x463f,	// (0x0006ac37) calenote_swipe_1_pane_g1_ParamLimits

0x463f,	// (0x0006ac37) calenote_swipe_1_pane_g1

0x464c,	// (0x0006ac44) calenote_swipe_1_pane_g2_ParamLimits

0x464c,	// (0x0006ac44) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x000762ce) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x000762ce) calenote_swipe_1_pane_g

0x2865,	// (0x00068e5d) calenote_swipe_1_pane_t1_ParamLimits

0x2865,	// (0x00068e5d) calenote_swipe_1_pane_t1

0x463f,	// (0x0006ac37) calenote_swipe_2_pane_g1_ParamLimits

0x463f,	// (0x0006ac37) calenote_swipe_2_pane_g1

0x2884,	// (0x00068e7c) calenote_swipe_2_pane_g2_ParamLimits

0x2884,	// (0x00068e7c) calenote_swipe_2_pane_g2

0x0001,

0xfdb3,	// (0x000763ab) calenote_swipe_2_pane_g_ParamLimits

0xfdb3,	// (0x000763ab) calenote_swipe_2_pane_g

0x2890,	// (0x00068e88) calenote_swipe_2_pane_t1_ParamLimits

0x2890,	// (0x00068e88) calenote_swipe_2_pane_t1

0x6739,	// (0x0006cd31) main_mup_navstr_pane

0xa88a,	// (0x00070e82) main_mup3_pane_t7_ParamLimits

0xa88a,	// (0x00070e82) main_mup3_pane_t7

0xb25d,	// (0x00071855) main_mp4_pane_g6_ParamLimits

0xb25d,	// (0x00071855) main_mp4_pane_g6

0xb5bf,	// (0x00071bb7) main_image3_pane_t4_ParamLimits

0xb5bf,	// (0x00071bb7) main_image3_pane_t4

0xd85c,	// (0x00073e54) popup_navstr_preview_pane_ParamLimits

0xd85c,	// (0x00073e54) popup_navstr_preview_pane

0xd868,	// (0x00073e60) scroll_navstr_pane_ParamLimits

0xd868,	// (0x00073e60) scroll_navstr_pane

0x6739,	// (0x0006cd31) bg_popup_preview_window_pane_cp04

0x28b7,	// (0x00068eaf) popup_navstr_preview_pane_t1

0xd874,	// (0x00073e6c) scroll_navstr_pane_g1_ParamLimits

0xd874,	// (0x00073e6c) scroll_navstr_pane_g1

0xd881,	// (0x00073e79) scroll_navstr_pane_t1_ParamLimits

0xd881,	// (0x00073e79) scroll_navstr_pane_t1

0x285c,	// (0x00068e54) bg_button_pane_cp014

0x285c,	// (0x00068e54) bg_button_pane_cp030

0x5dc0,	// (0x0006c3b8) list_double_fisheye_pane_g4_ParamLimits

0x5dc0,	// (0x0006c3b8) list_double_fisheye_pane_g4

0x5dcc,	// (0x0006c3c4) list_double_fisheye_pane_g5_ParamLimits

0x5dcc,	// (0x0006c3c4) list_double_fisheye_pane_g5

0x27c4,	// (0x00068dbc) sp_fs_scroll_pane_cp03

0x4734,	// (0x0006ad2c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x4740,	// (0x0006ad38) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x000762eb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x474c,	// (0x0006ad44) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd793,	// (0x00073d8b) sp_fs_scroll_pane_cp02

0xe9fe,	// (0x00074ff6) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe9fe,	// (0x00074ff6) popup_sp_fs_calendar_preview_list_single_pane

0x6739,	// (0x0006cd31) main_cam6_pano_pane

0x9873,	// (0x0006fe6b) main_mup3_pane_ParamLimits

0x6739,	// (0x0006cd31) main_phacti_pane

0xd05a,	// (0x00073652) bg_button_pane_cp11

0xd072,	// (0x0007366a) main_mobtv_info_pane_g2_ParamLimits

0xd072,	// (0x0007366a) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0007624b) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0007624b) main_mobtv_info_pane_g

0xd226,	// (0x0007381e) sc_clock_pane_t5_ParamLimits

0xd226,	// (0x0007381e) sc_clock_pane_t5

0xd414,	// (0x00073a0c) main_radioblah_pane_g1_ParamLimits

0x4571,	// (0x0006ab69) main_radioblah_pane_t3_ParamLimits

0x4571,	// (0x0006ab69) main_radioblah_pane_t3

0x4589,	// (0x0006ab81) main_radioblah_pane_t4_ParamLimits

0x4589,	// (0x0006ab81) main_radioblah_pane_t4

0xd432,	// (0x00073a2a) main_radioblah_text_pane_ParamLimits

0xd432,	// (0x00073a2a) main_radioblah_text_pane

0xd43f,	// (0x00073a37) main_radioblah_info_pane_g1_ParamLimits

0xd4d8,	// (0x00073ad0) main_radioblah_info_pane_t4_ParamLimits

0xd4d8,	// (0x00073ad0) main_radioblah_info_pane_t4

0x9873,	// (0x0006fe6b) main_sp_fs_calendar_pane

0xd893,	// (0x00073e8b) main_phacti_pane_g1

0xd89b,	// (0x00073e93) phacti_note_pane_ParamLimits

0xd89b,	// (0x00073e93) phacti_note_pane

0x28ce,	// (0x00068ec6) phacti_term_pane_ParamLimits

0x28ce,	// (0x00068ec6) phacti_term_pane

0x28e3,	// (0x00068edb) phacti_note_pane_t1_ParamLimits

0x28e3,	// (0x00068edb) phacti_note_pane_t1

0x6422,	// (0x0006ca1a) phacti_term_pane_g1

0x642a,	// (0x0006ca22) phacti_term_pane_t1_ParamLimits

0x642a,	// (0x0006ca22) phacti_term_pane_t1

0x292c,	// (0x00068f24) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2934,	// (0x00068f2c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbd,	// (0x000763b5) popup_sp_fs_calendar_preview_list_single_pane_g

0x293c,	// (0x00068f34) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x293c,	// (0x00068f34) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2952,	// (0x00068f4a) aid_popup_sp_fs_bg_corner_pane

0x1c11,	// (0x00068209) popup_sp_fs_calendar_preview_bg_pane_g1

0x6739,	// (0x0006cd31) popup_sp_fs_calendar_preview_bg_pane

0x295a,	// (0x00068f52) popup_sp_fs_calendar_preview_list_pane

0x9873,	// (0x0006fe6b) bg_main_sp_fs_cale_pane_ParamLimits

0x9873,	// (0x0006fe6b) bg_main_sp_fs_cale_pane

0x6454,	// (0x0006ca4c) listscroll_cale_mrui_pane_ParamLimits

0x6454,	// (0x0006ca4c) listscroll_cale_mrui_pane

0x6468,	// (0x0006ca60) listscroll_sp_fs_schedule_track_pane

0x6471,	// (0x0006ca69) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x6471,	// (0x0006ca69) main_sp_fs_ctrlbar_pane_cp01

0x2990,	// (0x00068f88) main_sp_fs_ribbon_pane

0x2998,	// (0x00068f90) popup_sp_fs_cale_preview_window

0xd8da,	// (0x00073ed2) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd8da,	// (0x00073ed2) list_single_sp_fs_schedule_track_pane

0x69e9,	// (0x0006cfe1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x69e9,	// (0x0006cfe1) bg_sp_fs_highlight_list_pane_cp03

0xd8ec,	// (0x00073ee4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd8ec,	// (0x00073ee4) list_single_sp_fs_schedule_track_pane_g1

0xd8f8,	// (0x00073ef0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd8f8,	// (0x00073ef0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc2,	// (0x000763ba) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc2,	// (0x000763ba) list_single_sp_fs_schedule_track_pane_g

0xd904,	// (0x00073efc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd904,	// (0x00073efc) list_single_sp_fs_schedule_track_pane_t1

0xd922,	// (0x00073f1a) sp_fs_schedule_track_pane_ParamLimits

0xd922,	// (0x00073f1a) sp_fs_schedule_track_pane

0x29aa,	// (0x00068fa2) sp_fs_schedule_track_pane_g1

0x29b2,	// (0x00068faa) sp_fs_schedule_track_pane_g2

0x29ba,	// (0x00068fb2) sp_fs_schedule_track_pane_g3

0x29c2,	// (0x00068fba) sp_fs_schedule_track_pane_g4

0x29ca,	// (0x00068fc2) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc7,	// (0x000763bf) sp_fs_schedule_track_pane_g

0x37c0,	// (0x00069db8) bg_sp_fs_schedule_viewer_highlight_g1

0xecf2,	// (0x000752ea) bg_sp_fs_schedule_viewer_highlight_g2

0x37c8,	// (0x00069dc0) bg_sp_fs_schedule_viewer_highlight_g3

0x37d0,	// (0x00069dc8) bg_sp_fs_schedule_viewer_highlight_g4

0x3a13,	// (0x0006a00b) bg_sp_fs_schedule_viewer_highlight_g5

0x37e0,	// (0x00069dd8) bg_sp_fs_schedule_viewer_highlight_g6

0x37e8,	// (0x00069de0) bg_sp_fs_schedule_viewer_highlight_g7

0x37f0,	// (0x00069de8) bg_sp_fs_schedule_viewer_highlight_g8

0xecd2,	// (0x000752ca) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd2,	// (0x000763ca) bg_sp_fs_schedule_viewer_highlight_g

0x6739,	// (0x0006cd31) bg_main_sp_fs_ribbon_pane

0xd934,	// (0x00073f2c) main_sp_fs_ribbon_pane_g1

0x29d2,	// (0x00068fca) main_sp_fs_ribbon_pane_t1

0xd93d,	// (0x00073f35) main_sp_fs_ribbon_pane_t2

0x29e1,	// (0x00068fd9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde5,	// (0x000763dd) main_sp_fs_ribbon_pane_t

0x29f0,	// (0x00068fe8) main_sp_fs_ribbon_scheduler_pane

0x29f8,	// (0x00068ff0) bg_main_sp_fs_ribbon_pane_g1

0x2a01,	// (0x00068ff9) bg_main_sp_fs_ribbon_pane_g2

0x2a0a,	// (0x00069002) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdec,	// (0x000763e4) bg_main_sp_fs_ribbon_pane_g

0x2a12,	// (0x0006900a) main_sp_fs_ribbon_scheduler_pane_g1

0x2a1b,	// (0x00069013) main_sp_fs_ribbon_scheduler_pane_g2

0x2a24,	// (0x0006901c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf3,	// (0x000763eb) main_sp_fs_ribbon_scheduler_pane_g

0x2a2d,	// (0x00069025) list_cale_mrui_pane

0xd94c,	// (0x00073f44) sp_fs_scroll_pane_cp07_ParamLimits

0xd94c,	// (0x00073f44) sp_fs_scroll_pane_cp07

0xd962,	// (0x00073f5a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd962,	// (0x00073f5a) bg_sp_fs_schedule_viewer_highlight

0x2a36,	// (0x0006902e) list_single_sp_fs_schedule_track_pane_cp01

0x2a3e,	// (0x00069036) list_sp_fs_schedule_track_pane

0x2a46,	// (0x0006903e) sp_fs_scroll_pane_cp06_ParamLimits

0x2a46,	// (0x0006903e) sp_fs_scroll_pane_cp06

0x1c11,	// (0x00068209) bgmain_sp_fs_calendar_pane_g1

0x6482,	// (0x0006ca7a) list_single_cale_mrui_pane_ParamLimits

0x6482,	// (0x0006ca7a) list_single_cale_mrui_pane

0x64a6,	// (0x0006ca9e) list_single_cale_mrui_row_pane_ParamLimits

0x64a6,	// (0x0006ca9e) list_single_cale_mrui_row_pane

0x64b3,	// (0x0006caab) list_single_cale_mrui_row_pane_g1_ParamLimits

0x64b3,	// (0x0006caab) list_single_cale_mrui_row_pane_g1

0x64eb,	// (0x0006cae3) list_single_cale_mrui_row_pane_t1_ParamLimits

0x64eb,	// (0x0006cae3) list_single_cale_mrui_row_pane_t1

0x64fd,	// (0x0006caf5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x64fd,	// (0x0006caf5) list_single_cale_mrui_row_pane_t2

0x6563,	// (0x0006cb5b) list_single_cale_mrui_row_pane_t3_ParamLimits

0x6563,	// (0x0006cb5b) list_single_cale_mrui_row_pane_t3

0x6592,	// (0x0006cb8a) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6592,	// (0x0006cb8a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdff,	// (0x000763f7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdff,	// (0x000763f7) list_single_cale_mrui_row_pane_t

0x65c1,	// (0x0006cbb9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x65c1,	// (0x0006cbb9) list_single_cmail_header_editor_pane_bg_cp01

0x65e3,	// (0x0006cbdb) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x65e3,	// (0x0006cbdb) list_single_cmail_header_editor_pane_bg_cp02

0xd96f,	// (0x00073f67) main_radioblah_text_pane_t1_ParamLimits

0xd96f,	// (0x00073f67) main_radioblah_text_pane_t1

0x2b0d,	// (0x00069105) cam6_indi_pane_cp01

0x2b15,	// (0x0006910d) cam6_mode_pane_cp01

0x2b1d,	// (0x00069115) cam6_pano_pane

0x2b26,	// (0x0006911e) cam6_zoom_pane_cp01

0x2b30,	// (0x00069128) cam6_pano_image_pane

0x2b39,	// (0x00069131) cam6_pano_pane_g1

0x440b,	// (0x0006aa03) cam6_pano_pane_g2

0x2b42,	// (0x0006913a) cam6_pano_pane_g3

0x2b4b,	// (0x00069143) cam6_pano_pane_g4

0x2195,	// (0x0006878d) cam6_pano_pane_g5

0x2b54,	// (0x0006914c) cam6_pano_pane_g6

0x2b5c,	// (0x00069154) cam6_pano_pane_g7

0x2b64,	// (0x0006915c) cam6_pano_pane_g8

0x2b6d,	// (0x00069165) cam6_pano_pane_g9

0x0008,

0xfe08,	// (0x00076400) cam6_pano_pane_g

0x6739,	// (0x0006cd31) main_browser_tag_pane

0x28af,	// (0x00068ea7) grid_navstr_albumart_pane

0x2b78,	// (0x00069170) cell_navstr_albumart_pane_ParamLimits

0x2b78,	// (0x00069170) cell_navstr_albumart_pane

0x2b94,	// (0x0006918c) cell_navstr_albumart_pane_g1

0x14f5,	// (0x00067aed) cell_navstr_albumart_pane_g2

0x1505,	// (0x00067afd) cell_navstr_albumart_pane_g3

0x14fd,	// (0x00067af5) cell_navstr_albumart_pane_g4

0x0003,

0xfe1b,	// (0x00076413) cell_navstr_albumart_pane_g

0xd98a,	// (0x00073f82) bt_list_pane_ParamLimits

0xd98a,	// (0x00073f82) bt_list_pane

0xd9a3,	// (0x00073f9b) bt_list_pane_t1

0xd9b2,	// (0x00073faa) bt_list_pane_t2

0x0001,

0xfe24,	// (0x0007641c) bt_list_pane_t

0x6739,	// (0x0006cd31) main_cale_prevew_pane

0xd9c1,	// (0x00073fb9) popup_cale_preview_window_ParamLimits

0xd9c1,	// (0x00073fb9) popup_cale_preview_window

0x9873,	// (0x0006fe6b) bg_popup_preview_window_pane_cp05_ParamLimits

0x9873,	// (0x0006fe6b) bg_popup_preview_window_pane_cp05

0x2b9c,	// (0x00069194) list_cale_preview_pane_ParamLimits

0x2b9c,	// (0x00069194) list_cale_preview_pane

0xd9dc,	// (0x00073fd4) list_double_cale_preview_pane_ParamLimits

0xd9dc,	// (0x00073fd4) list_double_cale_preview_pane

0xd9f0,	// (0x00073fe8) list_single_cale_preview_pane_ParamLimits

0xd9f0,	// (0x00073fe8) list_single_cale_preview_pane

0xda08,	// (0x00074000) list_single_cale_preview_pane_g1

0xda10,	// (0x00074008) list_single_cale_preview_pane_t1_ParamLimits

0xda10,	// (0x00074008) list_single_cale_preview_pane_t1

0xda25,	// (0x0007401d) list_double_cale_preview_pane_g1

0xda2d,	// (0x00074025) list_double_cale_preview_pane_t1_ParamLimits

0xda2d,	// (0x00074025) list_double_cale_preview_pane_t1

0xda42,	// (0x0007403a) list_double_cale_preview_pane_t2_ParamLimits

0xda42,	// (0x0007403a) list_double_cale_preview_pane_t2

0x0001,

0xfe29,	// (0x00076421) list_double_cale_preview_pane_t_ParamLimits

0xfe29,	// (0x00076421) list_double_cale_preview_pane_t

0x6739,	// (0x0006cd31) main_ezdial_pane

0x9873,	// (0x0006fe6b) main_sp_fs_email_pane_ParamLimits

0xd657,	// (0x00073c4f) cmail_ddmenu_btn01_pane_ParamLimits

0xd657,	// (0x00073c4f) cmail_ddmenu_btn01_pane

0xd674,	// (0x00073c6c) cmail_ddmenu_btn02_pane_ParamLimits

0xd674,	// (0x00073c6c) cmail_ddmenu_btn02_pane

0xd692,	// (0x00073c8a) cmail_ddmenu_btn03_pane_ParamLimits

0xd692,	// (0x00073c8a) cmail_ddmenu_btn03_pane

0x5e86,	// (0x0006c47e) main_sp_fs_ctrlbar_pane_ParamLimits

0x5ea2,	// (0x0006c49a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd79d,	// (0x00073d95) list_cmail_body_pane_ParamLimits

0x27d3,	// (0x00068dcb) bg_button_pane_cp12

0x27e8,	// (0x00068de0) list_single_cmail_header_detail_pane_g3_ParamLimits

0x27e8,	// (0x00068de0) list_single_cmail_header_detail_pane_g3

0x63ea,	// (0x0006c9e2) list_single_cmail_header_detail_pane_t2_ParamLimits

0x63ea,	// (0x0006c9e2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdae,	// (0x000763a6) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdae,	// (0x000763a6) list_single_cmail_header_detail_pane_t

0x643f,	// (0x0006ca37) phacti_term_pane_t2_ParamLimits

0x643f,	// (0x0006ca37) phacti_term_pane_t2

0x0001,

0xfdb8,	// (0x000763b0) phacti_term_pane_t_ParamLimits

0xfdb8,	// (0x000763b0) phacti_term_pane_t

0x2ba8,	// (0x000691a0) aid_size_list_single_double

0xda5a,	// (0x00074052) popup_ezdial_listscroll_window

0xda7a,	// (0x00074072) popup_number_entry_window_cp01

0x026f,	// (0x00066867) bg_popup_call_pane_cp09

0x2bb4,	// (0x000691ac) ezdial_list_pane

0x2bbc,	// (0x000691b4) scroll_pane_cp23

0x19f0,	// (0x00067fe8) bg_button_pane_cp028_ParamLimits

0x19f0,	// (0x00067fe8) bg_button_pane_cp028

0xda88,	// (0x00074080) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xda88,	// (0x00074080) cmail_ddmenu_btn01_pane_g1

0xda98,	// (0x00074090) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xda98,	// (0x00074090) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2e,	// (0x00076426) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2e,	// (0x00076426) cmail_ddmenu_btn01_pane_g

0x2bc4,	// (0x000691bc) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2bc4,	// (0x000691bc) cmail_ddmenu_btn01_pane_t1

0x16dc,	// (0x00067cd4) bg_button_pane_cp029_ParamLimits

0x16dc,	// (0x00067cd4) bg_button_pane_cp029

0xda98,	// (0x00074090) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xda98,	// (0x00074090) cmail_ddmenu_btn02_pane_g1

0xdab0,	// (0x000740a8) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xdab0,	// (0x000740a8) cmail_ddmenu_btn02_pane_t1

0x69e9,	// (0x0006cfe1) bg_button_pane_cp031_ParamLimits

0x69e9,	// (0x0006cfe1) bg_button_pane_cp031

0xda98,	// (0x00074090) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xda98,	// (0x00074090) cmail_ddmenu_btn03_pane_g1

0xdab0,	// (0x000740a8) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xdab0,	// (0x000740a8) cmail_ddmenu_btn03_pane_t1

0xb468,	// (0x00071a60) cell_dialer2_keypad_pane_t1_ParamLimits

0xb482,	// (0x00071a7a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb482,	// (0x00071a7a) cell_dialer2_keypad_pane_t1_copy1

0xceea,	// (0x000734e2) ncimui_group_button_pane

0x9873,	// (0x0006fe6b) main_sp_fs_calendar_pane_ParamLimits

0xd7b2,	// (0x00073daa) list_single_cmail_header_caption_pane_ParamLimits

0xe40e,	// (0x00074a06) aid_recal_txt_sm_pane

0x6739,	// (0x0006cd31) mian_recal_day_pane

0x2998,	// (0x00068f90) popup_sp_fs_cale_preview_window_ParamLimits

0x6739,	// (0x0006cd31) list_recal_day_pane

0x2bf2,	// (0x000691ea) list_single_recal_day_pane_ParamLimits

0x2bf2,	// (0x000691ea) list_single_recal_day_pane

0x2c04,	// (0x000691fc) list_single_recal_day_pane_g1_ParamLimits

0x2c04,	// (0x000691fc) list_single_recal_day_pane_g1

0x2c10,	// (0x00069208) list_single_recal_day_pane_g2_ParamLimits

0x2c10,	// (0x00069208) list_single_recal_day_pane_g2

0x2c1c,	// (0x00069214) list_single_recal_day_pane_g3_ParamLimits

0x2c1c,	// (0x00069214) list_single_recal_day_pane_g3

0xdad4,	// (0x000740cc) list_single_recal_day_pane_g4_ParamLimits

0xdad4,	// (0x000740cc) list_single_recal_day_pane_g4

0x2c28,	// (0x00069220) list_single_recal_day_pane_g5_ParamLimits

0x2c28,	// (0x00069220) list_single_recal_day_pane_g5

0x2c34,	// (0x0006922c) list_single_recal_day_pane_g6_ParamLimits

0x2c34,	// (0x0006922c) list_single_recal_day_pane_g6

0x0005,

0xfe3d,	// (0x00076435) list_single_recal_day_pane_g_ParamLimits

0xfe3d,	// (0x00076435) list_single_recal_day_pane_g

0x2c40,	// (0x00069238) list_single_recal_day_pane_t1

0x2c4e,	// (0x00069246) list_single_recal_day_pane_t2

0x0001,

0xfe4a,	// (0x00076442) list_single_recal_day_pane_t

0xdae2,	// (0x000740da) ncimui_query_button_pane_ParamLimits

0xdae2,	// (0x000740da) ncimui_query_button_pane

0xdaf2,	// (0x000740ea) ncimui_query_button_pane_t1_ParamLimits

0xdaf2,	// (0x000740ea) ncimui_query_button_pane_t1

0x2c5c,	// (0x00069254) ncimui_query_button_pane_t2_ParamLimits

0x2c5c,	// (0x00069254) ncimui_query_button_pane_t2

0x0001,

0xfe4f,	// (0x00076447) ncimui_query_button_pane_t_ParamLimits

0xfe4f,	// (0x00076447) ncimui_query_button_pane_t

0xdb05,	// (0x000740fd) query_button_pane_ParamLimits

0xdb05,	// (0x000740fd) query_button_pane

0x6739,	// (0x0006cd31) bg_button_pane_cp0028

0x2c6f,	// (0x00069267) query_button_pane_t1

0x988f,	// (0x0006fe87) main_tport_pane_ParamLimits

0xd6c0,	// (0x00073cb8) bg_popup_window_pane_cp01_ParamLimits

0xd6c0,	// (0x00073cb8) bg_popup_window_pane_cp01

0xd6cd,	// (0x00073cc5) heading_pane_cp08_ParamLimits

0xd6cd,	// (0x00073cc5) heading_pane_cp08

0xd6db,	// (0x00073cd3) heading_pane_cp07_ParamLimits

0xd6db,	// (0x00073cd3) heading_pane_cp07

0x279e,	// (0x00068d96) cell_tport_appsw_pane_g2

0x0002,

0xfd9b,	// (0x00076393) cell_tport_appsw_pane_g

0x580f,	// (0x0006be07) input_candi_list_open_g1

0xee8d,	// (0x00075485) list_cale_time_pane_g6_ParamLimits

0xee8d,	// (0x00075485) list_cale_time_pane_g6

0xa2fc,	// (0x000708f4) aid_size_touch_calib_1_ParamLimits

0xa2fc,	// (0x000708f4) aid_size_touch_calib_1

0xa308,	// (0x00070900) aid_size_touch_calib_2_ParamLimits

0xa308,	// (0x00070900) aid_size_touch_calib_2

0xa316,	// (0x0007090e) aid_size_touch_calib_3_ParamLimits

0xa316,	// (0x0007090e) aid_size_touch_calib_3

0xa326,	// (0x0007091e) aid_size_touch_calib_4_ParamLimits

0xa326,	// (0x0007091e) aid_size_touch_calib_4

0xa334,	// (0x0007092c) main_touch_calib_button_group_pane_ParamLimits

0xa334,	// (0x0007092c) main_touch_calib_button_group_pane

0xa342,	// (0x0007093a) main_touch_calib_pane_g1_ParamLimits

0xa34e,	// (0x00070946) main_touch_calib_pane_g2_ParamLimits

0xa35a,	// (0x00070952) main_touch_calib_pane_g3_ParamLimits

0xa366,	// (0x0007095e) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x00075d6d) main_touch_calib_pane_g_ParamLimits

0xa372,	// (0x0007096a) main_touch_calib_pane_t1_ParamLimits

0xa389,	// (0x00070981) main_touch_calib_pane_t2_ParamLimits

0xa3a0,	// (0x00070998) main_touch_calib_pane_t3_ParamLimits

0xa3b4,	// (0x000709ac) main_touch_calib_pane_t4_ParamLimits

0xa3ca,	// (0x000709c2) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00075d76) main_touch_calib_pane_t_ParamLimits

0x1f5f,	// (0x00068557) list_single_fp_cale_pane_g3_ParamLimits

0x1f5f,	// (0x00068557) list_single_fp_cale_pane_g3

0x9873,	// (0x0006fe6b) bg_button_pane_cp012_ParamLimits

0x9873,	// (0x0006fe6b) bg_vkb2_func_pane_cp03_ParamLimits

0xc21b,	// (0x00072813) cell_vitu2_function_top_pane_g1_ParamLimits

0x9873,	// (0x0006fe6b) bg_vkb2_func_pane_cp04_ParamLimits

0xce86,	// (0x0007347e) main_ncimui_button_group_pane_ParamLimits

0xce86,	// (0x0007347e) main_ncimui_button_group_pane

0xced8,	// (0x000734d0) main_ncimui_pane_t3_ParamLimits

0xced8,	// (0x000734d0) main_ncimui_pane_t3

0x28c5,	// (0x00068ebd) phacti_button_group_pane

0x2ba8,	// (0x000691a0) aid_size_list_single_double_ParamLimits

0xda5a,	// (0x00074052) popup_ezdial_listscroll_window_ParamLimits

0xda7a,	// (0x00074072) popup_number_entry_window_cp01_ParamLimits

0xdb12,	// (0x0007410a) phacti_button_pane_ParamLimits

0xdb12,	// (0x0007410a) phacti_button_pane

0x6739,	// (0x0006cd31) bg_button_pane_cp14

0x2c7d,	// (0x00069275) phacti_button_pane_t1

0xdb23,	// (0x0007411b) main_touch_calib_button_pane_ParamLimits

0xdb23,	// (0x0007411b) main_touch_calib_button_pane

0xe8e8,	// (0x00074ee0) bg_button_pane_cp18_ParamLimits

0xe8e8,	// (0x00074ee0) bg_button_pane_cp18

0x2c8b,	// (0x00069283) main_touch_calib_button_pane_t1_ParamLimits

0x2c8b,	// (0x00069283) main_touch_calib_button_pane_t1

0x2ca1,	// (0x00069299) main_touch_calib_button_pane_t2_ParamLimits

0x2ca1,	// (0x00069299) main_touch_calib_button_pane_t2

0x0001,

0xfe54,	// (0x0007644c) main_touch_calib_button_pane_t_ParamLimits

0xfe54,	// (0x0007644c) main_touch_calib_button_pane_t

0x6739,	// (0x0006cd31) cell_ncimui_button_pane

0x6739,	// (0x0006cd31) bg_button_pane_cp032

0x2cbf,	// (0x000692b7) cell_ncimui_button_pane_t1

0xb4de,	// (0x00071ad6) image3_infobar_pane_ParamLimits

0xb4de,	// (0x00071ad6) image3_infobar_pane

0xd248,	// (0x00073840) fs_bigclock_status_pane_ParamLimits

0xd248,	// (0x00073840) fs_bigclock_status_pane

0xd255,	// (0x0007384d) main_fs_bigclock_clock_pane_ParamLimits

0xd255,	// (0x0007384d) main_fs_bigclock_clock_pane

0xd279,	// (0x00073871) main_fs_bigclock_indi_pane_ParamLimits

0xd279,	// (0x00073871) main_fs_bigclock_indi_pane

0xd2b1,	// (0x000738a9) main_fs_bigclock_swipe_pane_ParamLimits

0xd2b1,	// (0x000738a9) main_fs_bigclock_swipe_pane

0x6739,	// (0x0006cd31) main_fs_clock_dumped_data

0xd2e3,	// (0x000738db) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd2e3,	// (0x000738db) list_single_fs_bigclock_indicator_pane_g1

0xd308,	// (0x00073900) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd308,	// (0x00073900) list_single_fs_bigclock_indicator_pane_g2

0xd322,	// (0x0007391a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd322,	// (0x0007391a) list_single_fs_bigclock_indicator_pane_g3

0xd340,	// (0x00073938) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd340,	// (0x00073938) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0007627f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0007627f) list_single_fs_bigclock_indicator_pane_g

0xd366,	// (0x0007395e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd366,	// (0x0007395e) list_single_fs_bigclock_indicator_pane_t1

0xd38e,	// (0x00073986) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd38e,	// (0x00073986) list_single_fs_bigclock_indicator_pane_t2

0xd3b6,	// (0x000739ae) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd3b6,	// (0x000739ae) list_single_fs_bigclock_indicator_pane_t3

0xd3e0,	// (0x000739d8) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd3e0,	// (0x000739d8) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0007628a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0007628a) list_single_fs_bigclock_indicator_pane_t

0x2ccd,	// (0x000692c5) image3_infobar_fav_pane_ParamLimits

0x2ccd,	// (0x000692c5) image3_infobar_fav_pane

0x2cdd,	// (0x000692d5) image3_infobar_loc_pane_ParamLimits

0x2cdd,	// (0x000692d5) image3_infobar_loc_pane

0x2cf3,	// (0x000692eb) image3_infobar_time_pane_ParamLimits

0x2cf3,	// (0x000692eb) image3_infobar_time_pane

0x1c11,	// (0x00068209) image3_infobar_time_pane_g1

0x2d03,	// (0x000692fb) image3_infobar_time_pane_t1

0x1c11,	// (0x00068209) image3_infobar_loc_pane_g1

0x2d11,	// (0x00069309) image3_infobar_loc_pane_g2

0x0001,

0xfe59,	// (0x00076451) image3_infobar_loc_pane_g

0x2d19,	// (0x00069311) image3_infobar_loc_pane_t1

0x1c11,	// (0x00068209) image3_infobar_fav_pane_g1

0x2d27,	// (0x0006931f) image3_infobar_fav_pane_g2

0x0001,

0xfe5e,	// (0x00076456) image3_infobar_fav_pane_g

0x2d2f,	// (0x00069327) fs_bigclock_status_battery_pane

0x2d38,	// (0x00069330) fs_bigclock_status_signal_pane

0x2d41,	// (0x00069339) fs_bigclock_status_title_pane

0x2d4a,	// (0x00069342) fs_bigclock_status_signal_pane_g1

0x2d53,	// (0x0006934b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe63,	// (0x0007645b) fs_bigclock_status_signal_pane_g

0x2d5b,	// (0x00069353) fs_bigclock_status_battery_pane_g1

0x2d64,	// (0x0006935c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe68,	// (0x00076460) fs_bigclock_status_battery_pane_g

0x2d6c,	// (0x00069364) fs_bigclock_status_title_pane_t1

0x1c11,	// (0x00068209) main_fs_bigclock_clock_pane_g1

0x2d7a,	// (0x00069372) main_fs_bigclock_clock_pane_g2

0x2d7a,	// (0x00069372) main_fs_bigclock_clock_pane_g3

0x2d7a,	// (0x00069372) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6d,	// (0x00076465) main_fs_bigclock_clock_pane_g

0x2d86,	// (0x0006937e) main_fs_bigclock_clock_pane_t1

0xdb35,	// (0x0007412d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe76,	// (0x0007646e) main_fs_bigclock_clock_pane_t

0x2d94,	// (0x0006938c) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2d94,	// (0x0006938c) list_single_fs_bigclock_indicator_pane

0xdb44,	// (0x0007413c) list_single_fs_bigclock_pane_ParamLimits

0xdb44,	// (0x0007413c) list_single_fs_bigclock_pane

0x2dae,	// (0x000693a6) main_fs_bigclock_indicator_pane_t1

0x2dbd,	// (0x000693b5) list_single_fs_bigclock_pane_g1

0x2dc5,	// (0x000693bd) list_single_fs_bigclock_pane_t1

0x1c11,	// (0x00068209) main_fs_bigclock_swipe_pane_g1

0x2e05,	// (0x000693fd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe87,	// (0x0007647f) main_fs_bigclock_swipe_pane_g

0x2e0d,	// (0x00069405) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2e0d,	// (0x00069405) main_fs_bigclock_swipe_pane_t1

0x87e1,	// (0x0006edd9) call_type_pane_ParamLimits

0x6739,	// (0x0006cd31) main_btmg_pane

0x64df,	// (0x0006cad7) list_single_cale_mrui_row_pane_g2_ParamLimits

0x64df,	// (0x0006cad7) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfa,	// (0x000763f2) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfa,	// (0x000763f2) list_single_cale_mrui_row_pane_g

0x2be2,	// (0x000691da) list_recal_vselct_arw_lo_pane

0x2bea,	// (0x000691e2) list_recal_vselct_arw_up_pane

0xe405,	// (0x000749fd) list_recal_vselct_pane

0x2e2a,	// (0x00069422) btmg_button_pane

0xdba7,	// (0x0007419f) main_btmg_pane_g1

0x6739,	// (0x0006cd31) bg_button_pane_cp044

0x2e34,	// (0x0006942c) btmg_button_pane_t1

0x16d4,	// (0x00067ccc) aid_listscroll_gen

0x9873,	// (0x0006fe6b) main_cntbar_detail_pane

0x27b4,	// (0x00068dac) list_cmail_folder_pane

0x27c4,	// (0x00068dbc) sp_fs_scroll_pane_cp03_ParamLimits

0xdbaf,	// (0x000741a7) list_single_fs_dyc_pane_cp01_ParamLimits

0xdbaf,	// (0x000741a7) list_single_fs_dyc_pane_cp01

0x2e42,	// (0x0006943a) aid_size_cmail_indent

0x65ff,	// (0x0006cbf7) list_single_dyc_row_pane_cp01

0xdbe6,	// (0x000741de) cntbar_detail_list_pane_ParamLimits

0xdbe6,	// (0x000741de) cntbar_detail_list_pane

0xdc26,	// (0x0007421e) main_cntbar_detail_cont_pane_ParamLimits

0xdc26,	// (0x0007421e) main_cntbar_detail_cont_pane

0x87d5,	// (0x0006edcd) scroll_pane_cp032_ParamLimits

0x87d5,	// (0x0006edcd) scroll_pane_cp032

0xdc32,	// (0x0007422a) cntbar_detail_list_event_pane_ParamLimits

0xdc32,	// (0x0007422a) cntbar_detail_list_event_pane

0xdbf4,	// (0x000741ec) cntbar_detail_list_shct_pane

0xed40,	// (0x00075338) aid_list_gen

0x2e54,	// (0x0006944c) aid_scroll

0x2e5d,	// (0x00069455) aid_size_touch_scroll_bar

0x2e66,	// (0x0006945e) aid_list_double

0x2e6f,	// (0x00069467) aid_list_single

0xdc42,	// (0x0007423a) aid_list_single_lg

0x6608,	// (0x0006cc00) aid_list_z_g_a_sm

0xdc4b,	// (0x00074243) aid_list_z_g_d

0x6610,	// (0x0006cc08) aid_txt_z_prm

0x661e,	// (0x0006cc16) aid_txt_z_prm_cp01

0x662c,	// (0x0006cc24) aid_txt_z_sec

0xdc53,	// (0x0007424b) main_cntbar_detail_cont_pane_g1_ParamLimits

0xdc53,	// (0x0007424b) main_cntbar_detail_cont_pane_g1

0xdc60,	// (0x00074258) main_cntbar_detail_cont_pane_g2_ParamLimits

0xdc60,	// (0x00074258) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8c,	// (0x00076484) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8c,	// (0x00076484) main_cntbar_detail_cont_pane_g

0x2e96,	// (0x0006948e) main_cntbar_detail_cont_pane_t1

0x2ea4,	// (0x0006949c) main_cntbar_detail_cont_pane_t2

0x2eb2,	// (0x000694aa) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe91,	// (0x00076489) main_cntbar_detail_cont_pane_t

0xdc6c,	// (0x00074264) cell_cntbar_detail_list_shct_pane_ParamLimits

0xdc6c,	// (0x00074264) cell_cntbar_detail_list_shct_pane

0x2ec0,	// (0x000694b8) cntbar_detail_list_shct_pane_g1

0x2ec9,	// (0x000694c1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe98,	// (0x00076490) cntbar_detail_list_shct_pane_g

0xdc80,	// (0x00074278) cntbar_detail_list_event_pane_g1_ParamLimits

0xdc80,	// (0x00074278) cntbar_detail_list_event_pane_g1

0xdc8c,	// (0x00074284) cntbar_detail_list_event_pane_g2_ParamLimits

0xdc8c,	// (0x00074284) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9d,	// (0x00076495) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9d,	// (0x00076495) cntbar_detail_list_event_pane_g

0xdcfa,	// (0x000742f2) cntbar_detail_list_event_pane_t1_ParamLimits

0xdcfa,	// (0x000742f2) cntbar_detail_list_event_pane_t1

0xdd0f,	// (0x00074307) cntbar_detail_list_event_pane_t2_ParamLimits

0xdd0f,	// (0x00074307) cntbar_detail_list_event_pane_t2

0x0002,

0xfeaa,	// (0x000764a2) cntbar_detail_list_event_pane_t_ParamLimits

0xfeaa,	// (0x000764a2) cntbar_detail_list_event_pane_t

0x1c11,	// (0x00068209) cell_cntbar_detail_list_shct_pane_g1

0x8b79,	// (0x0006f171) navi_pane_mv_g3

0x9873,	// (0x0006fe6b) main_cntbar_detail_pane_ParamLimits

0x6739,	// (0x0006cd31) main_notif_wgt_pane

0xb1b2,	// (0x000717aa) aid_tch_main_mp4_pane_g4

0xb3c7,	// (0x000719bf) popup_slider_window_cp02

0x2bd9,	// (0x000691d1) list_recal_day_event_pane

0xdbc6,	// (0x000741be) cntbar_detail_btn_pane_ParamLimits

0xdbc6,	// (0x000741be) cntbar_detail_btn_pane

0xdbd6,	// (0x000741ce) cntbar_detail_btn_pane_cp01_ParamLimits

0xdbd6,	// (0x000741ce) cntbar_detail_btn_pane_cp01

0xdbf4,	// (0x000741ec) cntbar_detail_list_shct_pane_ParamLimits

0xdc00,	// (0x000741f8) cntbar_detail_pane_g1_ParamLimits

0xdc00,	// (0x000741f8) cntbar_detail_pane_g1

0xdc10,	// (0x00074208) cntbar_detail_pane_t1_ParamLimits

0xdc10,	// (0x00074208) cntbar_detail_pane_t1

0xdc98,	// (0x00074290) cntbar_detail_list_event_pane_g3_ParamLimits

0xdc98,	// (0x00074290) cntbar_detail_list_event_pane_g3

0xdcb0,	// (0x000742a8) cntbar_detail_list_event_pane_g4_ParamLimits

0xdcb0,	// (0x000742a8) cntbar_detail_list_event_pane_g4

0xdcc8,	// (0x000742c0) cntbar_detail_list_event_pane_g5_ParamLimits

0xdcc8,	// (0x000742c0) cntbar_detail_list_event_pane_g5

0xdce0,	// (0x000742d8) cntbar_detail_list_event_pane_g6_ParamLimits

0xdce0,	// (0x000742d8) cntbar_detail_list_event_pane_g6

0xdd24,	// (0x0007431c) cntbar_detail_list_event_pane_t3_ParamLimits

0xdd24,	// (0x0007431c) cntbar_detail_list_event_pane_t3

0xdd36,	// (0x0007432e) popup_notif_wgt_window_ParamLimits

0xdd36,	// (0x0007432e) popup_notif_wgt_window

0xdd46,	// (0x0007433e) popup_submenu_window_cp01_ParamLimits

0xdd46,	// (0x0007433e) popup_submenu_window_cp01

0x026f,	// (0x00066867) bg_popup_window_pane_cp10

0x2ed2,	// (0x000694ca) listscroll_notif_wgt_pane

0x2edc,	// (0x000694d4) list_notif_wgt_window

0x2ee5,	// (0x000694dd) scroll_pane_cp033

0x2eee,	// (0x000694e6) list_notif_wgt_row_pane_ParamLimits

0x2eee,	// (0x000694e6) list_notif_wgt_row_pane

0x2f02,	// (0x000694fa) aid_size_list_notif_wgt_del

0x2f0b,	// (0x00069503) list_notif_wgt_row_pane_g1

0x2f13,	// (0x0006950b) list_notif_wgt_row_pane_g2

0x2f1b,	// (0x00069513) list_notif_wgt_row_pane_g3

0x0002,

0xfeb1,	// (0x000764a9) list_notif_wgt_row_pane_g

0x2f24,	// (0x0006951c) list_notif_wgt_row_pane_t1

0x2f32,	// (0x0006952a) list_notif_wgt_row_pane_t2

0x2f40,	// (0x00069538) list_notif_wgt_row_pane_t3

0x0002,

0xfeb8,	// (0x000764b0) list_notif_wgt_row_pane_t

0x3a2d,	// (0x0006a025) list_recal_day_event_pane_g1

0x2f4e,	// (0x00069546) list_recal_day_event_pane_t1

0x6739,	// (0x0006cd31) bg_button_pane_cp045

0x2f5d,	// (0x00069555) cntbar_detail_btn_pane_t1

0x16dc,	// (0x00067cd4) main_callh_pane_ParamLimits

0x16dc,	// (0x00067cd4) main_callh_pane

0x6739,	// (0x0006cd31) main_coverflow0_pane

0x6739,	// (0x0006cd31) main_wgtman_pane

0xd2c9,	// (0x000738c1) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd2c9,	// (0x000738c1) main_fs_bigclock_unlock_btn_pane

0x2796,	// (0x00068d8e) bg_button_pane_cp16

0xd746,	// (0x00073d3e) cell_tport_appsw_pane_g3

0xdd54,	// (0x0007434c) cf0_flow_pane_ParamLimits

0xdd54,	// (0x0007434c) cf0_flow_pane

0x2f6b,	// (0x00069563) listscroll_cf0_pane

0x2f74,	// (0x0006956c) main_cf0_pane_g1

0xdd63,	// (0x0007435b) main_cf0_pane_t1_ParamLimits

0xdd63,	// (0x0007435b) main_cf0_pane_t1

0xdd77,	// (0x0007436f) main_cf0_pane_t2_ParamLimits

0xdd77,	// (0x0007436f) main_cf0_pane_t2

0x0001,

0xfebf,	// (0x000764b7) main_cf0_pane_t_ParamLimits

0xfebf,	// (0x000764b7) main_cf0_pane_t

0x2f7e,	// (0x00069576) scroll_pane_cp11

0xdd8b,	// (0x00074383) cf0_flow_pane_g1

0xdd93,	// (0x0007438b) cf0_flow_pane_g2

0x0001,

0xfec4,	// (0x000764bc) cf0_flow_pane_g

0xdd9b,	// (0x00074393) cf0_flow_pane_t1

0x6739,	// (0x0006cd31) main_call6_pane

0x6739,	// (0x0006cd31) main_calllock_pane

0xdda9,	// (0x000743a1) call6_btn_grp_pane_ParamLimits

0xdda9,	// (0x000743a1) call6_btn_grp_pane

0xddb8,	// (0x000743b0) call6_pane_g1_ParamLimits

0xddb8,	// (0x000743b0) call6_pane_g1

0xddc8,	// (0x000743c0) popup_call6_1st_window_ParamLimits

0xddc8,	// (0x000743c0) popup_call6_1st_window

0xddd6,	// (0x000743ce) popup_call6_2nd_window_ParamLimits

0xddd6,	// (0x000743ce) popup_call6_2nd_window

0xdde4,	// (0x000743dc) cell_call6_btn_pane_ParamLimits

0xdde4,	// (0x000743dc) cell_call6_btn_pane

0x026f,	// (0x00066867) bg_popup_call2_in_pane_cp03

0x2f89,	// (0x00069581) popup_call6_1st_window_g1

0x2f91,	// (0x00069589) popup_call6_1st_window_g2

0x2f99,	// (0x00069591) popup_call6_1st_window_g3

0x0002,

0xfec9,	// (0x000764c1) popup_call6_1st_window_g

0x2fa1,	// (0x00069599) popup_call6_1st_window_t1

0x2fb0,	// (0x000695a8) popup_call6_1st_window_t2

0x2fc0,	// (0x000695b8) popup_call6_1st_window_t3

0x0002,

0xfed0,	// (0x000764c8) popup_call6_1st_window_t

0x026f,	// (0x00066867) bg_popup_call2_in_pane_cp04

0x2f89,	// (0x00069581) popup_call6_2nd_window_g1

0x2f91,	// (0x00069589) popup_call6_2nd_window_g2

0x2f99,	// (0x00069591) popup_call6_2nd_window_g3

0x0002,

0xfec9,	// (0x000764c1) popup_call6_2nd_window_g

0x2fa1,	// (0x00069599) popup_call6_2nd_window_t1

0x6739,	// (0x0006cd31) bg_button_pane_cp15

0x2fd0,	// (0x000695c8) cell_call6_btn_pane_g1

0x2fd9,	// (0x000695d1) cell_call6_btn_pane_t1

0xddf3,	// (0x000743eb) listscroll_wgtman_pane_ParamLimits

0xddf3,	// (0x000743eb) listscroll_wgtman_pane

0xde11,	// (0x00074409) wgtman_btn_pane_ParamLimits

0xde11,	// (0x00074409) wgtman_btn_pane

0x0135,	// (0x0006672d) aid_scroll_copy1

0x2fe8,	// (0x000695e0) list_wgtman_pane

0xde46,	// (0x0007443e) wgtman_btn_pane_g1_ParamLimits

0xde46,	// (0x0007443e) wgtman_btn_pane_g1

0xde6e,	// (0x00074466) wgtman_btn_pane_t1_ParamLimits

0xde6e,	// (0x00074466) wgtman_btn_pane_t1

0x2ff2,	// (0x000695ea) wgtman_btn_pane_t2_ParamLimits

0x2ff2,	// (0x000695ea) wgtman_btn_pane_t2

0x0001,

0xfed7,	// (0x000764cf) wgtman_btn_pane_t_ParamLimits

0xfed7,	// (0x000764cf) wgtman_btn_pane_t

0x3009,	// (0x00069601) listrow_wgtman_pane_ParamLimits

0x3009,	// (0x00069601) listrow_wgtman_pane

0x301d,	// (0x00069615) listrow_wgtman_pane_g1

0xdea5,	// (0x0007449d) listrow_wgtman_pane_g2

0x0001,

0xfedc,	// (0x000764d4) listrow_wgtman_pane_g

0x663a,	// (0x0006cc32) listrow_wgtman_pane_t1

0x6648,	// (0x0006cc40) listrow_wgtman_pane_t2

0x0001,

0xfee1,	// (0x000764d9) listrow_wgtman_pane_t

0x6656,	// (0x0006cc4e) wait_bar_pane_cp09

0x304a,	// (0x00069642) main_calllock_btn_pane

0x3054,	// (0x0006964c) main_calllock_pane_g1

0x6739,	// (0x0006cd31) bg_button_pane_cp17

0x3060,	// (0x00069658) main_calllock_btn_pane_g1

0x3069,	// (0x00069661) main_calllock_btn_pane_t1

0x6739,	// (0x0006cd31) main_dialer3_pane

0x6739,	// (0x0006cd31) main_fmrd2_pane

0x1c11,	// (0x00068209) main_fs_bigclock_unlock_btn_pane_g1

0x3080,	// (0x00069678) main_fs_bigclock_unlock_btn_pane_t1

0xdeaf,	// (0x000744a7) area_fmrd2_info_pane_ParamLimits

0xdeaf,	// (0x000744a7) area_fmrd2_info_pane

0xdebd,	// (0x000744b5) area_fmrd2_visual_pane_ParamLimits

0xdebd,	// (0x000744b5) area_fmrd2_visual_pane

0xdecb,	// (0x000744c3) fmrd2_indi_pane_ParamLimits

0xdecb,	// (0x000744c3) fmrd2_indi_pane

0xded8,	// (0x000744d0) area_fmrd2_visual_pane_g1

0xdee0,	// (0x000744d8) area_fmrd2_visual_pane_t1

0xdef0,	// (0x000744e8) area_fmrd2_visual_pane_t2

0xdf00,	// (0x000744f8) area_fmrd2_visual_pane_t3

0x0002,

0xfeeb,	// (0x000764e3) area_fmrd2_visual_pane_t

0xdf10,	// (0x00074508) area_fmrd2_info_pane_g1

0xdf18,	// (0x00074510) area_fmrd2_info_pane_t1

0xdf28,	// (0x00074520) area_fmrd2_info_pane_t2

0xdf38,	// (0x00074530) area_fmrd2_info_pane_t3

0xdf48,	// (0x00074540) area_fmrd2_info_pane_t4

0x0003,

0xfef2,	// (0x000764ea) area_fmrd2_info_pane_t

0xdf58,	// (0x00074550) fmrd2_indi_pane_t1

0xdf68,	// (0x00074560) fmrd2_indi_pane_t2

0xdf78,	// (0x00074570) fmrd2_indi_pane_t3

0x0002,

0xfefb,	// (0x000764f3) fmrd2_indi_pane_t

0xd34f,	// (0x00073947) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd34f,	// (0x00073947) list_single_fs_bigclock_indicator_pane_g5

0xd3f5,	// (0x000739ed) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd3f5,	// (0x000739ed) list_single_fs_bigclock_indicator_pane_t5

0xd8b1,	// (0x00073ea9) aid_cell_bcale_month_pane_ParamLimits

0xd8b1,	// (0x00073ea9) aid_cell_bcale_month_pane

0xd8bd,	// (0x00073eb5) bcale_month_pane_ParamLimits

0xd8bd,	// (0x00073eb5) bcale_month_pane

0xd8cb,	// (0x00073ec3) bcale_preview_pane_ParamLimits

0xd8cb,	// (0x00073ec3) bcale_preview_pane

0x2dc5,	// (0x000693bd) list_single_fs_bigclock_pane_t1_ParamLimits

0x2de1,	// (0x000693d9) list_single_fs_bigclock_pane_t2_ParamLimits

0x2de1,	// (0x000693d9) list_single_fs_bigclock_pane_t2

0x0001,

0xfe82,	// (0x0007647a) list_single_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0007647a) list_single_fs_bigclock_pane_t

0x3078,	// (0x00069670) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee6,	// (0x000764de) main_fs_bigclock_unlock_btn_pane_g

0xdf88,	// (0x00074580) aid_dia3_key_size_ParamLimits

0xdf88,	// (0x00074580) aid_dia3_key_size

0xdf94,	// (0x0007458c) aid_dia3_listrow_size_ParamLimits

0xdf94,	// (0x0007458c) aid_dia3_listrow_size

0xdfa2,	// (0x0007459a) dia3_keypad_fun_pane_ParamLimits

0xdfa2,	// (0x0007459a) dia3_keypad_fun_pane

0xdfb2,	// (0x000745aa) dia3_keypad_num_pane_ParamLimits

0xdfb2,	// (0x000745aa) dia3_keypad_num_pane

0xdfc2,	// (0x000745ba) dia3_listscroll_pane_ParamLimits

0xdfc2,	// (0x000745ba) dia3_listscroll_pane

0xdfd2,	// (0x000745ca) dia3_numentry_pane_ParamLimits

0xdfd2,	// (0x000745ca) dia3_numentry_pane

0x308e,	// (0x00069686) dia3_list_pane

0x3099,	// (0x00069691) scroll_pane_cp12

0x6739,	// (0x0006cd31) bg_dia3_numentry_pane

0x30a4,	// (0x0006969c) dia3_numentry_pane_t1

0xdfe2,	// (0x000745da) cell_dia3_key_num_pane

0xdfea,	// (0x000745e2) cell_dia3_key0_fun_pane_ParamLimits

0xdfea,	// (0x000745e2) cell_dia3_key0_fun_pane

0xdff7,	// (0x000745ef) cell_dia3_key1_fun_pane_ParamLimits

0xdff7,	// (0x000745ef) cell_dia3_key1_fun_pane

0xe004,	// (0x000745fc) dia3_listrow_pane

0x4283,	// (0x0006a87b) bg_dia3_numentry_pane_g1

0x6739,	// (0x0006cd31) bg_button_pane_cp21

0x30b3,	// (0x000696ab) cell_dia3_key_num_pane_t1

0x30c1,	// (0x000696b9) cell_dia3_key_num_pane_t2

0x30d0,	// (0x000696c8) cell_dia3_key_num_pane_t3

0x30df,	// (0x000696d7) cell_dia3_key_num_pane_t4

0x0003,

0xff02,	// (0x000764fa) cell_dia3_key_num_pane_t

0x6739,	// (0x0006cd31) bg_button_pane_cp19

0xe011,	// (0x00074609) cell_dia3_key0_fun_pane_g1

0x6739,	// (0x0006cd31) bg_button_pane_cp20

0xe019,	// (0x00074611) cell_dia3_key1_fun_pane_g1

0xe021,	// (0x00074619) area_left_week_number_pane

0xe02a,	// (0x00074622) area_top_day_name_pane

0xe033,	// (0x0007462b) frame_month_view_pane

0xe03d,	// (0x00074635) grid_month_view_pane

0xe047,	// (0x0007463f) cell_top_day_name_pane_ParamLimits

0xe047,	// (0x0007463f) cell_top_day_name_pane

0xe063,	// (0x0007465b) cell_area_left_week_number_pane_ParamLimits

0xe063,	// (0x0007465b) cell_area_left_week_number_pane

0xe077,	// (0x0007466f) cell_month_view_pane_ParamLimits

0xe077,	// (0x0007466f) cell_month_view_pane

0x30ee,	// (0x000696e6) frm_month_g1

0xe096,	// (0x0007468e) frm_month_g2

0xe0a0,	// (0x00074698) frm_month_g3

0xe0aa,	// (0x000746a2) frm_month_g4

0xe0b4,	// (0x000746ac) frm_month_g5

0xe0be,	// (0x000746b6) frm_month_g6

0xe0c8,	// (0x000746c0) frm_month_g7

0x30f7,	// (0x000696ef) frm_month_g8

0xe0d2,	// (0x000746ca) frm_month_g9

0xe0db,	// (0x000746d3) frm_month_g10

0xe0e4,	// (0x000746dc) frm_month_g11

0xe0ed,	// (0x000746e5) frm_month_g12

0xe0f6,	// (0x000746ee) frm_month_g13

0xe101,	// (0x000746f9) frm_month_g14

0xe10c,	// (0x00074704) frm_month_g15

0xe117,	// (0x0007470f) frm_month_g16

0x000f,

0xff0b,	// (0x00076503) frm_month_g

0xe122,	// (0x0007471a) cell_top_day_name_pane_t1

0xe131,	// (0x00074729) cell_area_left_week_number_pane_g1

0xe122,	// (0x0007471a) cell_area_left_week_number_pane_t1

0x1c11,	// (0x00068209) cell_month_view_pane_g1

0xe139,	// (0x00074731) cell_month_view_pane_t1

0x6739,	// (0x0006cd31) main_fps_pane

0x46fa,	// (0x0006acf2) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x46fa,	// (0x0006acf2) cmail_ddmenu_btn02_pane_cp1

0x4716,	// (0x0006ad0e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x4716,	// (0x0006ad0e) cmail_ddmenu_btn02_pane_cp2

0xdaa4,	// (0x0007409c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xdaa4,	// (0x0007409c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe33,	// (0x0007642b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe33,	// (0x0007642b) cmail_ddmenu_btn02_pane_g

0xdac2,	// (0x000740ba) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xdac2,	// (0x000740ba) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe38,	// (0x00076430) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe38,	// (0x00076430) cmail_ddmenu_btn02_pane_t

0xe148,	// (0x00074740) fps_text_pane_ParamLimits

0xe148,	// (0x00074740) fps_text_pane

0xe155,	// (0x0007474d) main_fps_pane_g1_ParamLimits

0xe155,	// (0x0007474d) main_fps_pane_g1

0xe161,	// (0x00074759) wait_bar_pane_cp010_ParamLimits

0xe161,	// (0x00074759) wait_bar_pane_cp010

0xe16d,	// (0x00074765) fps_text_pane_t1_ParamLimits

0xe16d,	// (0x00074765) fps_text_pane_t1

0xb7ad,	// (0x00071da5) cam4_image_uncrop_pane_g1

0xb7b6,	// (0x00071dae) cam4_image_uncrop_pane_g2

0xb7bf,	// (0x00071db7) cam4_image_uncrop_pane_g3

0xb7c8,	// (0x00071dc0) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x00075f05) cam4_image_uncrop_pane_g

0xe004,	// (0x000745fc) dia3_listrow_pane_ParamLimits

0x6739,	// (0x0006cd31) main_phob2_pane

0xd720,	// (0x00073d18) cell_tport_appsw_pane_cp02_ParamLimits

0xd720,	// (0x00073d18) cell_tport_appsw_pane_cp02

0xd72f,	// (0x00073d27) cell_tport_appsw_pane_cp03_ParamLimits

0xd72f,	// (0x00073d27) cell_tport_appsw_pane_cp03

0x6739,	// (0x0006cd31) phob2_contact_card_pane

0x6739,	// (0x0006cd31) phob2_listscroll_pane

0x3100,	// (0x000696f8) phob2_list_pane

0x3108,	// (0x00069700) scroll_pane_cp034

0xe186,	// (0x0007477e) phob2_cc_data_pane_ParamLimits

0xe186,	// (0x0007477e) phob2_cc_data_pane

0xe1a2,	// (0x0007479a) phob2_cc_listscroll_pane_ParamLimits

0xe1a2,	// (0x0007479a) phob2_cc_listscroll_pane

0xe1be,	// (0x000747b6) list_double_large_graphic_phob2_pane_ParamLimits

0xe1be,	// (0x000747b6) list_double_large_graphic_phob2_pane

0xe1d8,	// (0x000747d0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe1d8,	// (0x000747d0) list_double_large_graphic_phob2_pane_g1

0x665e,	// (0x0006cc56) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x665e,	// (0x0006cc56) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2c,	// (0x00076524) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2c,	// (0x00076524) list_double_large_graphic_phob2_pane_g

0x666a,	// (0x0006cc62) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x666a,	// (0x0006cc62) list_double_large_graphic_phob2_pane_t1

0x667f,	// (0x0006cc77) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x667f,	// (0x0006cc77) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff31,	// (0x00076529) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff31,	// (0x00076529) list_double_large_graphic_phob2_pane_t

0x6739,	// (0x0006cd31) list_highlight_pane_cp024

0x3110,	// (0x00069708) phob2_cc_button_pane

0xe1e5,	// (0x000747dd) phob2_cc_data_pane_g1_ParamLimits

0xe1e5,	// (0x000747dd) phob2_cc_data_pane_g1

0xe1f1,	// (0x000747e9) phob2_cc_data_pane_g2_ParamLimits

0xe1f1,	// (0x000747e9) phob2_cc_data_pane_g2

0x0001,

0xff36,	// (0x0007652e) phob2_cc_data_pane_g_ParamLimits

0xff36,	// (0x0007652e) phob2_cc_data_pane_g

0xe1fd,	// (0x000747f5) phob2_cc_data_pane_t1_ParamLimits

0xe1fd,	// (0x000747f5) phob2_cc_data_pane_t1

0xe20f,	// (0x00074807) phob2_cc_data_pane_t2_ParamLimits

0xe20f,	// (0x00074807) phob2_cc_data_pane_t2

0xe221,	// (0x00074819) phob2_cc_data_pane_t3_ParamLimits

0xe221,	// (0x00074819) phob2_cc_data_pane_t3

0x0002,

0xff3b,	// (0x00076533) phob2_cc_data_pane_t_ParamLimits

0xff3b,	// (0x00076533) phob2_cc_data_pane_t

0x3118,	// (0x00069710) phob2_cc_list_pane_ParamLimits

0x3118,	// (0x00069710) phob2_cc_list_pane

0x3df6,	// (0x0006a3ee) scroll_pane_cp035_ParamLimits

0x3df6,	// (0x0006a3ee) scroll_pane_cp035

0x9873,	// (0x0006fe6b) bg_button_pane_cp033

0x3124,	// (0x0006971c) phob2_cc_button_pane_g1

0x3130,	// (0x00069728) phob2_cc_button_pane_t1

0x3145,	// (0x0006973d) phob2_cc_button_pane_t2

0x0001,

0xff42,	// (0x0007653a) phob2_cc_button_pane_t

0xe233,	// (0x0007482b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe233,	// (0x0007482b) list_double_large_graphic_phob2_cc_pane

0xe252,	// (0x0007484a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe252,	// (0x0007484a) list_double_large_graphic_phob2_cc_pane_g1

0x6691,	// (0x0006cc89) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x6691,	// (0x0006cc89) list_double_large_graphic_phob2_cc_pane_g2

0x66a0,	// (0x0006cc98) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x66a0,	// (0x0006cc98) list_double_large_graphic_phob2_cc_pane_g3

0x66af,	// (0x0006cca7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x66af,	// (0x0006cca7) list_double_large_graphic_phob2_cc_pane_g4

0x66c0,	// (0x0006ccb8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x66c0,	// (0x0006ccb8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff47,	// (0x0007653f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff47,	// (0x0007653f) list_double_large_graphic_phob2_cc_pane_g

0x66cf,	// (0x0006ccc7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x66cf,	// (0x0006ccc7) list_double_large_graphic_phob2_cc_pane_t1

0x66f8,	// (0x0006ccf0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x66f8,	// (0x0006ccf0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff52,	// (0x0007654a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff52,	// (0x0007654a) list_double_large_graphic_phob2_cc_pane_t

0x3157,	// (0x0006974f) list_highlight_pane_cp025_ParamLimits

0x3157,	// (0x0006974f) list_highlight_pane_cp025

0x9873,	// (0x0006fe6b) bg_button_pane_cp033_ParamLimits

0x3124,	// (0x0006971c) phob2_cc_button_pane_g1_ParamLimits

0x3130,	// (0x00069728) phob2_cc_button_pane_t1_ParamLimits

0x3145,	// (0x0006973d) phob2_cc_button_pane_t2_ParamLimits

0xff42,	// (0x0007653a) phob2_cc_button_pane_t_ParamLimits

0x677f,	// (0x0006cd77) popup_wgtman_window

0x38de,	// (0x00069ed6) scroll_pane_cp038

0xde2e,	// (0x00074426) wgtman_btn_pane_cp_01_ParamLimits

0xde2e,	// (0x00074426) wgtman_btn_pane_cp_01

0x3165,	// (0x0006975d) wgtman_content_pane

0x316e,	// (0x00069766) wgtman_heading_pane

0x6739,	// (0x0006cd31) bg_heading_pane_cp02

0x3177,	// (0x0006976f) wgtman_heading_pane_g1

0x317f,	// (0x00069777) wgtman_heading_pane_t1

0x318d,	// (0x00069785) scroll_pane_cp036

0x3195,	// (0x0006978d) wgtman_list_pane

0x4604,	// (0x0006abfc) wgtman_list_pane_t1_ParamLimits

0x4604,	// (0x0006abfc) wgtman_list_pane_t1

0xb70a,	// (0x00071d02) cam4_grid_pane

0x5a61,	// (0x0006c059) bg_button_pane_cp015_ParamLimits

0xc39c,	// (0x00072994) bg_button_pane_cp016_ParamLimits

0xc3af,	// (0x000729a7) bg_button_pane_cp017_ParamLimits

0x5aa5,	// (0x0006c09d) popup_vitu2_query_window_g3_ParamLimits

0x5aa5,	// (0x0006c09d) popup_vitu2_query_window_g3

0x5b1e,	// (0x0006c116) popup_vitu2_query_window_t6_ParamLimits

0x5b1e,	// (0x0006c116) popup_vitu2_query_window_t6

0x5b49,	// (0x0006c141) popup_vitu2_query_window_t7_ParamLimits

0x5b49,	// (0x0006c141) popup_vitu2_query_window_t7

0x41f8,	// (0x0006a7f0) cam4_grid_pane_g1

0x4201,	// (0x0006a7f9) cam4_grid_pane_g2

0x319d,	// (0x00069795) cam4_grid_pane_g3

0x31a6,	// (0x0006979e) cam4_grid_pane_g4

0x0003,

0xff57,	// (0x0007654f) cam4_grid_pane_g

0x7883,	// (0x0006de7b) aid_placing_vt_slider_lsc_ParamLimits

0x7bb6,	// (0x0006e1ae) vidtel_button_pane_ParamLimits

0x7bb6,	// (0x0006e1ae) vidtel_button_pane

0x6739,	// (0x0006cd31) bg_button_pane_cp034

0xe263,	// (0x0007485b) vidtel_button_pane_g1

0x31b1,	// (0x000697a9) vidtel_button_pane_t1

0x3a0b,	// (0x0006a003) aid_size_vtel_slider_touch

0x3df6,	// (0x0006a3ee) scroll_pane_cp039

0x42c1,	// (0x0006a8b9) ncim_query_button_pane_cp01_ParamLimits

0x42e0,	// (0x0006a8d8) ncimui_query_pane_g1_ParamLimits

0x9873,	// (0x0006fe6b) input_focus_pane_cp012_ParamLimits

0x4305,	// (0x0006a8fd) ncim_query_entry_pane_t1_ParamLimits

0x3df6,	// (0x0006a3ee) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
