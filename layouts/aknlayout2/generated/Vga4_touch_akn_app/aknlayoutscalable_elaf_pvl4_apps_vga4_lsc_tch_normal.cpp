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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000d4c5 };

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
0x0e1a,	// (0x0000e2df) Screen

0x0e26,	// (0x0000e2eb) application_window

0x0e62,	// (0x0000e327) area_bottom_pane_ParamLimits

0x0e62,	// (0x0000e327) area_bottom_pane

0x0e9b,	// (0x0000e360) area_top_pane_ParamLimits

0x0e9b,	// (0x0000e360) area_top_pane

0x97fd,	// (0x00016cc2) call_video_uplink_pane_ParamLimits

0x97fd,	// (0x00016cc2) call_video_uplink_pane

0x0f29,	// (0x0000e3ee) main_pane_ParamLimits

0x0f29,	// (0x0000e3ee) main_pane

0xc020,	// (0x000194e5) context_pane

0x41f5,	// (0x000116ba) navi_pane

0x422c,	// (0x000116f1) popup_cale_events_window_ParamLimits

0x422c,	// (0x000116f1) popup_cale_events_window

0xc033,	// (0x000194f8) popup_mup_playback_window

0x4244,	// (0x00011709) signal_pane

0x9fdb,	// (0x000174a0) main_browser_pane

0xa1ee,	// (0x000176b3) main_burst_pane

0x3f01,	// (0x000113c6) main_calc_pane

0xbfbc,	// (0x00019481) main_cale_day_pane

0x1412,	// (0x0000e8d7) main_cale_month_pane

0xbfbc,	// (0x00019481) main_cale_week_pane

0xa1ee,	// (0x000176b3) main_call_pane

0x9c71,	// (0x00017136) main_call_poc_pane

0xa1ee,	// (0x000176b3) main_camera_pane

0xa1ee,	// (0x000176b3) main_chi_dic_pane

0xaa83,	// (0x00017f48) main_clock_pane

0x9c71,	// (0x00017136) main_fmradio_pane

0xa1ee,	// (0x000176b3) main_graph_messa_pane

0x9c71,	// (0x00017136) main_help_pane

0x9fdb,	// (0x000174a0) main_im_pane

0x9ecc,	// (0x00017391) main_image_pane_ParamLimits

0x9ecc,	// (0x00017391) main_image_pane

0x9c71,	// (0x00017136) main_location2_pane

0xa1ee,	// (0x000176b3) main_location_pane

0x9ecc,	// (0x00017391) main_messa_pane

0x9c71,	// (0x00017136) main_mp2_pane

0xa1ee,	// (0x000176b3) main_mp_pane

0x9c71,	// (0x00017136) main_msg_pane

0x9c71,	// (0x00017136) main_mup_eq_pane

0x9c71,	// (0x00017136) main_mup_pane

0x9fdb,	// (0x000174a0) main_notes_pane

0x9c71,	// (0x00017136) main_pec_pane

0x9c71,	// (0x00017136) main_phob_pane

0x9c71,	// (0x00017136) main_pinb_pane

0x9c71,	// (0x00017136) main_postcard_pane

0x9c71,	// (0x00017136) main_qdial_pane

0xa1ee,	// (0x000176b3) main_skin_pane

0x9c71,	// (0x00017136) main_smil2_pane

0xa1ee,	// (0x000176b3) main_smil_pane

0xa1ee,	// (0x000176b3) main_video_pane

0xa1ee,	// (0x000176b3) main_video_tele_pane

0x9ecc,	// (0x00017391) main_viewer_pane_ParamLimits

0x9ecc,	// (0x00017391) main_viewer_pane

0xa1ee,	// (0x000176b3) main_vorec_pane

0x3f63,	// (0x00011428) popup_blid_sat_info_window_ParamLimits

0x3f63,	// (0x00011428) popup_blid_sat_info_window

0x3fc7,	// (0x0001148c) popup_dyc_status_message_window_ParamLimits

0x3fc7,	// (0x0001148c) popup_dyc_status_message_window

0x3fe1,	// (0x000114a6) popup_grid_large_graphic_window_ParamLimits

0x3fe1,	// (0x000114a6) popup_grid_large_graphic_window

0x40a3,	// (0x00011568) popup_loc_request_window_ParamLimits

0x40a3,	// (0x00011568) popup_loc_request_window

0x41c9,	// (0x0001168e) popup_wml_address_window_ParamLimits

0x41c9,	// (0x0001168e) popup_wml_address_window

0x3d3f,	// (0x00011204) call_muted_g1

0x398d,	// (0x00010e52) popup_call_audio_conf_window_ParamLimits

0x398d,	// (0x00010e52) popup_call_audio_conf_window

0x3d4f,	// (0x00011214) popup_call_audio_first_window_ParamLimits

0x3d4f,	// (0x00011214) popup_call_audio_first_window

0x3dc5,	// (0x0001128a) popup_call_audio_in_window_ParamLimits

0x3dc5,	// (0x0001128a) popup_call_audio_in_window

0x3e01,	// (0x000112c6) popup_call_audio_out_window_ParamLimits

0x3e01,	// (0x000112c6) popup_call_audio_out_window

0x3e3b,	// (0x00011300) popup_call_audio_second_window_ParamLimits

0x3e3b,	// (0x00011300) popup_call_audio_second_window

0x3e91,	// (0x00011356) popup_call_audio_wait_window_ParamLimits

0x3e91,	// (0x00011356) popup_call_audio_wait_window

0x3ec6,	// (0x0001138b) popup_number_entry_window_ParamLimits

0x3ec6,	// (0x0001138b) popup_number_entry_window

0x9829,	// (0x00016cee) bg_popup_call_pane_cp05_ParamLimits

0x9829,	// (0x00016cee) bg_popup_call_pane_cp05

0x9849,	// (0x00016d0e) popup_number_entry_window_t1

0x985c,	// (0x00016d21) popup_number_entry_window_t2

0x986e,	// (0x00016d33) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0001c54a) popup_number_entry_window_t

0x98b5,	// (0x00016d7a) text_title_cp2

0x98c8,	// (0x00016d8d) bg_popup_call_pane_cp_ParamLimits

0x98c8,	// (0x00016d8d) bg_popup_call_pane_cp

0x98d6,	// (0x00016d9b) call_thumbnail_pane

0x98de,	// (0x00016da3) popup_call_audio_in_window_g1_ParamLimits

0x98de,	// (0x00016da3) popup_call_audio_in_window_g1

0x98ea,	// (0x00016daf) popup_call_audio_in_window_g2_ParamLimits

0x98ea,	// (0x00016daf) popup_call_audio_in_window_g2

0x98f6,	// (0x00016dbb) popup_call_audio_in_window_g3_ParamLimits

0x98f6,	// (0x00016dbb) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0001c553) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0001c553) popup_call_audio_in_window_g

0x9902,	// (0x00016dc7) popup_call_audio_in_window_t1_ParamLimits

0x9902,	// (0x00016dc7) popup_call_audio_in_window_t1

0x991e,	// (0x00016de3) popup_call_audio_in_window_t2_ParamLimits

0x991e,	// (0x00016de3) popup_call_audio_in_window_t2

0x993a,	// (0x00016dff) popup_call_audio_in_window_t3_ParamLimits

0x993a,	// (0x00016dff) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0001c55a) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0001c55a) popup_call_audio_in_window_t

0x98c8,	// (0x00016d8d) bg_popup_call_pane_cp01_ParamLimits

0x98c8,	// (0x00016d8d) bg_popup_call_pane_cp01

0x98d6,	// (0x00016d9b) call_thumbnail_pane_cp02

0x994d,	// (0x00016e12) call_type_pane_cp022

0x9955,	// (0x00016e1a) popup_call_audio_out_window_g1_ParamLimits

0x9955,	// (0x00016e1a) popup_call_audio_out_window_g1

0x9967,	// (0x00016e2c) popup_call_audio_out_window_g2_ParamLimits

0x9967,	// (0x00016e2c) popup_call_audio_out_window_g2

0x9973,	// (0x00016e38) popup_call_audio_out_window_g3_ParamLimits

0x9973,	// (0x00016e38) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0001c561) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0001c561) popup_call_audio_out_window_g

0x9985,	// (0x00016e4a) popup_call_audio_out_window_t1_ParamLimits

0x9985,	// (0x00016e4a) popup_call_audio_out_window_t1

0x999d,	// (0x00016e62) popup_call_audio_out_window_t2_ParamLimits

0x999d,	// (0x00016e62) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0001c568) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0001c568) popup_call_audio_out_window_t

0x99b2,	// (0x00016e77) bg_popup_call_pane_ParamLimits

0x99b2,	// (0x00016e77) bg_popup_call_pane

0x10b0,	// (0x0000e575) call_thumbnail_pane_cp_ParamLimits

0x10b0,	// (0x0000e575) call_thumbnail_pane_cp

0x9a36,	// (0x00016efb) call_type_pane_cp01_ParamLimits

0x9a36,	// (0x00016efb) call_type_pane_cp01

0x9a7a,	// (0x00016f3f) popup_call_audio_first_window_g1_ParamLimits

0x9a7a,	// (0x00016f3f) popup_call_audio_first_window_g1

0x9ac6,	// (0x00016f8b) popup_call_audio_first_window_g2_ParamLimits

0x9ac6,	// (0x00016f8b) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0001c56d) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0001c56d) popup_call_audio_first_window_g

0x9b0a,	// (0x00016fcf) popup_call_audio_first_window_t1_ParamLimits

0x9b0a,	// (0x00016fcf) popup_call_audio_first_window_t1

0x9bb6,	// (0x0001707b) popup_call_audio_first_window_t4_ParamLimits

0x9bb6,	// (0x0001707b) popup_call_audio_first_window_t4

0x9c42,	// (0x00017107) popup_call_audio_first_window_t5_ParamLimits

0x9c42,	// (0x00017107) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0001c572) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0001c572) popup_call_audio_first_window_t

0x9c71,	// (0x00017136) bg_popup_call_pane_cp02

0x9c7b,	// (0x00017140) call_type_pane_cp023

0x9c83,	// (0x00017148) popup_call_audio_wait_window_g1

0x9c8b,	// (0x00017150) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0001c579) popup_call_audio_wait_window_g

0x9c93,	// (0x00017158) popup_call_audio_wait_window_t3

0x9ca1,	// (0x00017166) bg_popup_call_pane_cp03_ParamLimits

0x9ca1,	// (0x00017166) bg_popup_call_pane_cp03

0x9d01,	// (0x000171c6) call_thumbnail_pane_cp011_ParamLimits

0x9d01,	// (0x000171c6) call_thumbnail_pane_cp011

0x9d0d,	// (0x000171d2) call_type_pane_cp034_ParamLimits

0x9d0d,	// (0x000171d2) call_type_pane_cp034

0x9d49,	// (0x0001720e) popup_call_audio_second_window_g1_ParamLimits

0x9d49,	// (0x0001720e) popup_call_audio_second_window_g1

0x9d85,	// (0x0001724a) popup_call_audio_second_window_g2_ParamLimits

0x9d85,	// (0x0001724a) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0001c57e) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0001c57e) popup_call_audio_second_window_g

0x9dc1,	// (0x00017286) popup_call_audio_second_window_t1_ParamLimits

0x9dc1,	// (0x00017286) popup_call_audio_second_window_t1

0x9e42,	// (0x00017307) popup_call_audio_second_window_t2_ParamLimits

0x9e42,	// (0x00017307) popup_call_audio_second_window_t2

0x9e78,	// (0x0001733d) popup_call_audio_second_window_t3_ParamLimits

0x9e78,	// (0x0001733d) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0001c583) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0001c583) popup_call_audio_second_window_t

0x9c71,	// (0x00017136) bg_popup_call_pane_cp04

0x9eae,	// (0x00017373) list_conf_pane

0x9eb6,	// (0x0001737b) popup_call_audio_conf_window_t1

0x9ec4,	// (0x00017389) call_thumbnail_pane_g1

0x9ecc,	// (0x00017391) bg_pinb_pane_ParamLimits

0x9ecc,	// (0x00017391) bg_pinb_pane

0x9eda,	// (0x0001739f) find_pinb_pane

0x9ecc,	// (0x00017391) listscroll_pinb_pane_ParamLimits

0x9ecc,	// (0x00017391) listscroll_pinb_pane

0x9ee4,	// (0x000173a9) pinb_bg_pane_g1

0x9ee4,	// (0x000173a9) pinb_bg_pane_g2

0x9ee4,	// (0x000173a9) pinb_bg_pane_g3

0x9ee4,	// (0x000173a9) pinb_bg_pane_g4

0x9ee4,	// (0x000173a9) pinb_bg_pane_g5

0x9ee4,	// (0x000173a9) pinb_bg_pane_g6

0x9ee4,	// (0x000173a9) pinb_bg_pane_g7

0x9ee4,	// (0x000173a9) pinb_bg_pane_g8

0x9ee4,	// (0x000173a9) pinb_bg_pane_g9

0x9ee4,	// (0x000173a9) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0001c58a) pinb_bg_pane_g

0x97a6,	// (0x00016c6b) grid_pinb_pane

0x97a6,	// (0x00016c6b) list_pinb_pane

0x981b,	// (0x00016ce0) scroll_pane_cp01_ParamLimits

0x981b,	// (0x00016ce0) scroll_pane_cp01

0x9eee,	// (0x000173b3) find_pinb_pane_g1_ParamLimits

0x9eee,	// (0x000173b3) find_pinb_pane_g1

0x9f06,	// (0x000173cb) find_pinb_pane_t1

0x9f18,	// (0x000173dd) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0001c5a4) find_pinb_pane_t

0x9f2d,	// (0x000173f2) input_focus_pane_cp01_ParamLimits

0x9f2d,	// (0x000173f2) input_focus_pane_cp01

0x9f39,	// (0x000173fe) cell_pinb_pane_ParamLimits

0x9f39,	// (0x000173fe) cell_pinb_pane

0x9f47,	// (0x0001740c) cell_pinb_pane_g1_ParamLimits

0x9f47,	// (0x0001740c) cell_pinb_pane_g1

0x9f55,	// (0x0001741a) cell_pinb_pane_g2_ParamLimits

0x9f55,	// (0x0001741a) cell_pinb_pane_g2

0x9f55,	// (0x0001741a) cell_pinb_pane_g3_ParamLimits

0x9f55,	// (0x0001741a) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0001c5a9) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0001c5a9) cell_pinb_pane_g

0x9c71,	// (0x00017136) grid_highlight_pane_cp01

0x9f39,	// (0x000173fe) list_pinb_item_pane_ParamLimits

0x9f39,	// (0x000173fe) list_pinb_item_pane

0x97a6,	// (0x00016c6b) list_highlight_pane_cp02

0x9f63,	// (0x00017428) list_pinb_item_pane_g1_ParamLimits

0x9f63,	// (0x00017428) list_pinb_item_pane_g1

0x9f55,	// (0x0001741a) list_pinb_item_pane_g2_ParamLimits

0x9f55,	// (0x0001741a) list_pinb_item_pane_g2

0x9f47,	// (0x0001740c) list_pinb_item_pane_g3_ParamLimits

0x9f47,	// (0x0001740c) list_pinb_item_pane_g3

0x9f55,	// (0x0001741a) list_pinb_item_pane_g4_ParamLimits

0x9f55,	// (0x0001741a) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0001c5b0) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0001c5b0) list_pinb_item_pane_g

0x9f71,	// (0x00017436) list_pinb_item_pane_t1_ParamLimits

0x9f71,	// (0x00017436) list_pinb_item_pane_t1

0x10f4,	// (0x0000e5b9) calc_display_pane

0x1119,	// (0x0000e5de) calc_paper_pane

0x113c,	// (0x0000e601) grid_calc_pane

0x9c71,	// (0x00017136) bg_list_pane_cp01

0x116a,	// (0x0000e62f) clock_g1

0x1172,	// (0x0000e637) clock_g2

0x0001,

0xf0f4,	// (0x0001c5b9) clock_g

0x117a,	// (0x0000e63f) clock_t1_ParamLimits

0x117a,	// (0x0000e63f) clock_t1

0x118f,	// (0x0000e654) clock_t2_ParamLimits

0x118f,	// (0x0000e654) clock_t2

0x11a1,	// (0x0000e666) clock_t3_ParamLimits

0x11a1,	// (0x0000e666) clock_t3

0x11b3,	// (0x0000e678) clock_t4_ParamLimits

0x11b3,	// (0x0000e678) clock_t4

0x11c5,	// (0x0000e68a) clock_t5_ParamLimits

0x11c5,	// (0x0000e68a) clock_t5

0x11da,	// (0x0000e69f) clock_t6_ParamLimits

0x11da,	// (0x0000e69f) clock_t6

0x11ec,	// (0x0000e6b1) clock_t7_ParamLimits

0x11ec,	// (0x0000e6b1) clock_t7

0x11fe,	// (0x0000e6c3) clock_t8_ParamLimits

0x11fe,	// (0x0000e6c3) clock_t8

0x1212,	// (0x0000e6d7) clock_t9_ParamLimits

0x1212,	// (0x0000e6d7) clock_t9

0x0008,

0xf0f9,	// (0x0001c5be) clock_t_ParamLimits

0xf0f9,	// (0x0001c5be) clock_t

0x9f8d,	// (0x00017452) popup_clock_analogue_window_cp02

0x9f8d,	// (0x00017452) popup_clock_digital_window_cp01

0x9c71,	// (0x00017136) listscroll_help_pane

0x9c71,	// (0x00017136) phob_pre_status_pane

0x9f95,	// (0x0001745a) grid_qdial_pane

0x9ecc,	// (0x00017391) listscroll_mce_pane

0x9ecc,	// (0x00017391) bg_notes_pane

0x9f9f,	// (0x00017464) list_notes_pane

0x1228,	// (0x0000e6ed) scroll_pane_cp06

0x9fad,	// (0x00017472) bg_calc_paper_pane

0x9fc1,	// (0x00017486) list_calc_pane

0x9fdb,	// (0x000174a0) bg_calc_display_pane

0x123c,	// (0x0000e701) calc_display_pane_t1

0x124e,	// (0x0000e713) calc_display_pane_t2

0x9fe7,	// (0x000174ac) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0001c5d1) calc_display_pane_t

0x1260,	// (0x0000e725) cell_calc_pane_ParamLimits

0x1260,	// (0x0000e725) cell_calc_pane

0x9ff9,	// (0x000174be) bg_calc_paper_pane_g1

0xa005,	// (0x000174ca) bg_calc_paper_pane_g2

0xa011,	// (0x000174d6) bg_calc_paper_pane_g3

0xa01d,	// (0x000174e2) bg_calc_paper_pane_g4

0xa029,	// (0x000174ee) bg_calc_paper_pane_g5

0x129b,	// (0x0000e760) bg_calc_paper_pane_g6

0x12a9,	// (0x0000e76e) bg_calc_paper_pane_g7

0x12b7,	// (0x0000e77c) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0001c5d8) bg_calc_paper_pane_g

0x12ca,	// (0x0000e78f) calc_bg_paper_pane_g9

0x12dd,	// (0x0000e7a2) list_calc_item_pane_ParamLimits

0x12dd,	// (0x0000e7a2) list_calc_item_pane

0xa035,	// (0x000174fa) list_calc_item_pane_g1

0xa042,	// (0x00017507) list_calc_item_pane_t1_ParamLimits

0xa042,	// (0x00017507) list_calc_item_pane_t1

0x12f5,	// (0x0000e7ba) list_calc_item_pane_t2_ParamLimits

0x12f5,	// (0x0000e7ba) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0001c5e9) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0001c5e9) list_calc_item_pane_t

0x9ee4,	// (0x000173a9) cell_calc_pane_g1

0xa054,	// (0x00017519) grid_highlight_pane_cp02

0xa076,	// (0x0001753b) bg_calc_display_pane_g1

0x1327,	// (0x0000e7ec) bg_calc_display_pane_g2

0x1331,	// (0x0000e7f6) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0001c5f3) bg_calc_display_pane_g

0x133a,	// (0x0000e7ff) cell_qdial_pane_ParamLimits

0x133a,	// (0x0000e7ff) cell_qdial_pane

0x134e,	// (0x0000e813) cell_qdial_pane_g1_ParamLimits

0x134e,	// (0x0000e813) cell_qdial_pane_g1

0x1364,	// (0x0000e829) cell_qdial_pane_g2_ParamLimits

0x1364,	// (0x0000e829) cell_qdial_pane_g2

0xa07f,	// (0x00017544) cell_qdial_pane_g3_ParamLimits

0xa07f,	// (0x00017544) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0001c5fa) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0001c5fa) cell_qdial_pane_g

0x138b,	// (0x0000e850) cell_qdial_pane_t1_ParamLimits

0x138b,	// (0x0000e850) cell_qdial_pane_t1

0x13a3,	// (0x0000e868) cell_qdial_pane_t2_ParamLimits

0x13a3,	// (0x0000e868) cell_qdial_pane_t2

0x13b6,	// (0x0000e87b) cell_qdial_pane_t3_ParamLimits

0x13b6,	// (0x0000e87b) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0001c603) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0001c603) cell_qdial_pane_t

0x9c71,	// (0x00017136) grid_highlight_pane_cp04

0xa08b,	// (0x00017550) thumbnail_qdial_pane_ParamLimits

0xa08b,	// (0x00017550) thumbnail_qdial_pane

0xa0e7,	// (0x000175ac) list_help_pane

0xa0f0,	// (0x000175b5) scroll_pane_cp02

0x13c9,	// (0x0000e88e) help_list_pane_t1_ParamLimits

0x13c9,	// (0x0000e88e) help_list_pane_t1

0xa0f9,	// (0x000175be) bg_notes_pane_g2

0xa101,	// (0x000175c6) bg_notes_pane_g3

0xa109,	// (0x000175ce) notes_bg_pane_g1

0xa111,	// (0x000175d6) notes_bg_pane_g4

0xa119,	// (0x000175de) notes_bg_pane_g5

0xa121,	// (0x000175e6) notes_bg_pane_g6

0xa129,	// (0x000175ee) notes_bg_pane_g7

0xa131,	// (0x000175f6) notes_bg_pane_g8

0xa139,	// (0x000175fe) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0001c621) notes_bg_pane_g

0x13ed,	// (0x0000e8b2) list_notes_text_pane_ParamLimits

0x13ed,	// (0x0000e8b2) list_notes_text_pane

0xa141,	// (0x00017606) list_notes_text_pane_g1

0x1404,	// (0x0000e8c9) list_notes_text_pane_t1

0x1412,	// (0x0000e8d7) listscroll_cale_week_pane

0x143c,	// (0x0000e901) bg_cale_heading_pane

0x1460,	// (0x0000e925) bg_cale_pane_cp01

0x147d,	// (0x0000e942) cale_week_corner_pane

0x149c,	// (0x0000e961) cale_week_day_heading_pane

0x14c5,	// (0x0000e98a) cale_week_scroll_pane_g1

0x14e4,	// (0x0000e9a9) cale_week_scroll_pane_g2

0x14fc,	// (0x0000e9c1) cale_week_scroll_pane_g3

0x1514,	// (0x0000e9d9) cale_week_scroll_pane_g4

0x152c,	// (0x0000e9f1) cale_week_scroll_pane_g5

0x154c,	// (0x0000ea11) cale_week_scroll_pane_g6

0x156c,	// (0x0000ea31) cale_week_scroll_pane_g7

0x1590,	// (0x0000ea55) cale_week_scroll_pane_g8

0x15b4,	// (0x0000ea79) cale_week_scroll_pane_g9

0x15cc,	// (0x0000ea91) cale_week_scroll_pane_g10

0x15e4,	// (0x0000eaa9) cale_week_scroll_pane_g11

0x15fc,	// (0x0000eac1) cale_week_scroll_pane_g12

0x1620,	// (0x0000eae5) cale_week_scroll_pane_g13

0x1620,	// (0x0000eae5) cale_week_scroll_pane_g14

0x1620,	// (0x0000eae5) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0001c630) cale_week_scroll_pane_g

0x1668,	// (0x0000eb2d) cale_week_time_pane

0x168c,	// (0x0000eb51) grid_cale_week_pane

0xa176,	// (0x0001763b) scroll_pane_cp08

0x16be,	// (0x0000eb83) cell_cale_week_pane_ParamLimits

0x16be,	// (0x0000eb83) cell_cale_week_pane

0x175a,	// (0x0000ec1f) cale_week_day_heading_pane_t1

0x1784,	// (0x0000ec49) cale_week_day_heading_pane_t2

0x17b3,	// (0x0000ec78) cale_week_day_heading_pane_t3

0x17e2,	// (0x0000eca7) cale_week_day_heading_pane_t4

0x1811,	// (0x0000ecd6) cale_week_day_heading_pane_t5

0x1844,	// (0x0000ed09) cale_week_day_heading_pane_t6

0x187b,	// (0x0000ed40) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0001c651) cale_week_day_heading_pane_t

0xa193,	// (0x00017658) bg_cale_side_pane

0x18a5,	// (0x0000ed6a) cale_week_time_pane_t1

0x18bf,	// (0x0000ed84) cale_week_time_pane_t2

0x18d9,	// (0x0000ed9e) cale_week_time_pane_t3

0x18f3,	// (0x0000edb8) cale_week_time_pane_t4

0x190d,	// (0x0000edd2) cale_week_time_pane_t5

0x1927,	// (0x0000edec) cale_week_time_pane_t6

0x1947,	// (0x0000ee0c) cale_week_time_pane_t7

0x196d,	// (0x0000ee32) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0001c660) cale_week_time_pane_t

0x1993,	// (0x0000ee58) cell_cale_week_pane_g2

0x19b7,	// (0x0000ee7c) cell_cale_week_pane_g3_ParamLimits

0x19b7,	// (0x0000ee7c) cell_cale_week_pane_g3

0xa1a1,	// (0x00017666) grid_highlight_pane_cp07

0xa1a9,	// (0x0001766e) listscroll_gms_pane

0xa1b3,	// (0x00017678) grid_gms_pane

0xa1bc,	// (0x00017681) listscroll_gms_pane_g1

0xa1c4,	// (0x00017689) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0001c671) listscroll_gms_pane_g

0x19cf,	// (0x0000ee94) scroll_pane_cp010

0x19da,	// (0x0000ee9f) cell_gms_pane_ParamLimits

0x19da,	// (0x0000ee9f) cell_gms_pane

0x19f1,	// (0x0000eeb6) cell_gms_pane_g1

0xa1cc,	// (0x00017691) cell_gms_pane_g2

0xa1d4,	// (0x00017699) cell_gms_pane_g3

0xa1dd,	// (0x000176a2) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0001c676) cell_gms_pane_g

0xa1e6,	// (0x000176ab) grid_highlight_pane_cp09

0x3cc3,	// (0x00011188) phob_pre_status_pane_g1

0x3ccb,	// (0x00011190) phob_pre_status_pane_g2

0x3cd3,	// (0x00011198) phob_pre_status_pane_g3

0x3cdb,	// (0x000111a0) phob_pre_status_pane_g4

0x0004,

0xf575,	// (0x0001ca3a) phob_pre_status_pane_g

0x3ceb,	// (0x000111b0) phob_pre_status_pane_t1

0x3cfb,	// (0x000111c0) phob_pre_status_pane_t2

0x3d0b,	// (0x000111d0) phob_pre_status_pane_t3

0x0002,

0xf580,	// (0x0001ca45) phob_pre_status_pane_t

0xa1ee,	// (0x000176b3) bg_list_pane_cp05

0x1a01,	// (0x0000eec6) grid_vorec_pane

0x1a0b,	// (0x0000eed0) vorec_t1

0x1a19,	// (0x0000eede) vorec_t2

0x1a27,	// (0x0000eeec) vorec_t3

0x1a35,	// (0x0000eefa) vorec_t4

0x95a3,	// (0x00016a68) vorec_t5

0x95b1,	// (0x00016a76) vorec_t6

0x0004,

0xf1ba,	// (0x0001c67f) vorec_t

0x95bf,	// (0x00016a84) wait_bar_pane_cp01

0xa1f6,	// (0x000176bb) cell_vorec_pane_ParamLimits

0xa1f6,	// (0x000176bb) cell_vorec_pane

0xa20b,	// (0x000176d0) cell_vorec_pane_g1

0x9c71,	// (0x00017136) grid_highlight_pane_cp05

0x981b,	// (0x00016ce0) cams_zoom_pane

0x981b,	// (0x00016ce0) image_vga_pane

0x9f47,	// (0x0001740c) main_camera_pane_g1

0x9f47,	// (0x0001740c) main_camera_pane_g2

0x9f47,	// (0x0001740c) main_camera_pane_g3

0x9f47,	// (0x0001740c) main_camera_pane_g4

0x9f47,	// (0x0001740c) main_camera_pane_g5

0x9f47,	// (0x0001740c) main_camera_pane_g6

0x9f47,	// (0x0001740c) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0001c68a) main_camera_pane_g

0xa215,	// (0x000176da) main_camera_pane_t1

0xa215,	// (0x000176da) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0001c69b) main_camera_pane_t

0x1a65,	// (0x0000ef2a) cams_zoom_pane_cp_ParamLimits

0x1a65,	// (0x0000ef2a) cams_zoom_pane_cp

0x1a99,	// (0x0000ef5e) image_cif_pane_ParamLimits

0x1a99,	// (0x0000ef5e) image_cif_pane

0x97a6,	// (0x00016c6b) image_subqcif_pane

0x1aab,	// (0x0000ef70) main_video_pane_g1_ParamLimits

0x1aab,	// (0x0000ef70) main_video_pane_g1

0x1ad9,	// (0x0000ef9e) main_video_pane_g2_ParamLimits

0x1ad9,	// (0x0000ef9e) main_video_pane_g2

0x1b13,	// (0x0000efd8) main_video_pane_g3_ParamLimits

0x1b13,	// (0x0000efd8) main_video_pane_g3

0x1b13,	// (0x0000efd8) main_video_pane_g4_ParamLimits

0x1b13,	// (0x0000efd8) main_video_pane_g4

0x1b47,	// (0x0000f00c) main_video_pane_g5_ParamLimits

0x1b47,	// (0x0000f00c) main_video_pane_g5

0xa229,	// (0x000176ee) main_video_pane_g6_ParamLimits

0xa229,	// (0x000176ee) main_video_pane_g6

0x0006,

0xf1db,	// (0x0001c6a0) main_video_pane_g_ParamLimits

0xf1db,	// (0x0001c6a0) main_video_pane_g

0x1b63,	// (0x0000f028) main_video_pane_t1_ParamLimits

0x1b63,	// (0x0000f028) main_video_pane_t1

0xa243,	// (0x00017708) cams_zoom_pane_g1

0xa243,	// (0x00017708) cams_zoom_pane_g2

0xa243,	// (0x00017708) cams_zoom_pane_g3

0xa243,	// (0x00017708) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0001c6af) cams_zoom_pane_g

0x1bbb,	// (0x0000f080) grid_cams_pane

0x1bd5,	// (0x0000f09a) linegrid_cams_pane

0x1be7,	// (0x0000f0ac) cell_cams_pane_ParamLimits

0x1be7,	// (0x0000f0ac) cell_cams_pane

0xa24d,	// (0x00017712) cams_burst_image_pane

0xa255,	// (0x0001771a) cell_cams_pane_g1

0x9c71,	// (0x00017136) grid_highlight_pane_cp03

0x9ee4,	// (0x000173a9) mp_bg_pane_g1

0x97a6,	// (0x00016c6b) bg_list_pane_cp03

0x97a6,	// (0x00016c6b) bg_mp_pane

0x97a6,	// (0x00016c6b) grid_mp_pane

0xa243,	// (0x00017708) media_player_g1

0xa7a9,	// (0x00017c6e) media_player_t1

0xa7a9,	// (0x00017c6e) media_player_t2

0xa7a9,	// (0x00017c6e) media_player_t3

0xa7a9,	// (0x00017c6e) media_player_t4

0xa7a9,	// (0x00017c6e) media_player_t5

0xa7a9,	// (0x00017c6e) media_player_t6

0xa7a9,	// (0x00017c6e) media_player_t7

0x0006,

0xf55f,	// (0x0001ca24) media_player_t

0x97a6,	// (0x00016c6b) wait_bar_pane_cp02

0xf544,	// (0x0001ca09) main_usb_pane_t

0xaa83,	// (0x00017f48) cell_mp_pane

0x9ee4,	// (0x000173a9) cell_mp_pane_g1

0x9c71,	// (0x00017136) grid_highlight_pane_cp06

0xa25d,	// (0x00017722) grid_skin_colour_pane

0xa265,	// (0x0001772a) list_highlight_pane_cp03

0x1c09,	// (0x0000f0ce) skin_g1

0xa26d,	// (0x00017732) skin_t1

0xa27c,	// (0x00017741) skin_t2

0x0001,

0xf218,	// (0x0001c6dd) skin_t

0x1c13,	// (0x0000f0d8) cell_skin_colour_pane_ParamLimits

0x1c13,	// (0x0000f0d8) cell_skin_colour_pane

0xa28a,	// (0x0001774f) cell_skin_colour_pane_g1

0x1c86,	// (0x0000f14b) call_video_g1_ParamLimits

0x1c86,	// (0x0000f14b) call_video_g1

0x1ca2,	// (0x0000f167) call_video_g2_ParamLimits

0x1ca2,	// (0x0000f167) call_video_g2

0x0001,

0xf21d,	// (0x0001c6e2) call_video_g_ParamLimits

0xf21d,	// (0x0001c6e2) call_video_g

0x1ce7,	// (0x0000f1ac) call_video_uplink_pane_cp1_ParamLimits

0x1ce7,	// (0x0000f1ac) call_video_uplink_pane_cp1

0xa29c,	// (0x00017761) call_video_uplink_pane_cp2

0x1d88,	// (0x0000f24d) video_down_crop_pane_ParamLimits

0x1d88,	// (0x0000f24d) video_down_crop_pane

0x1e71,	// (0x0000f336) video_down_pane_ParamLimits

0x1e71,	// (0x0000f336) video_down_pane

0xa2a4,	// (0x00017769) video_down_subqcif_pane_ParamLimits

0xa2a4,	// (0x00017769) video_down_subqcif_pane

0xa2be,	// (0x00017783) video_down_subqcif_pane_cp_ParamLimits

0xa2be,	// (0x00017783) video_down_subqcif_pane_cp

0xa2e6,	// (0x000177ab) im_reading_pane_ParamLimits

0xa2e6,	// (0x000177ab) im_reading_pane

0x1f7c,	// (0x0000f441) im_writing_pane_ParamLimits

0x1f7c,	// (0x0000f441) im_writing_pane

0x1f9a,	// (0x0000f45f) im_reading_pane_t1

0xa300,	// (0x000177c5) list_im_pane

0xa311,	// (0x000177d6) scroll_pane_cp07

0x1fd9,	// (0x0000f49e) im_writing_pane_t1_ParamLimits

0x1fd9,	// (0x0000f49e) im_writing_pane_t1

0xa32a,	// (0x000177ef) im_writing_pane_t2_ParamLimits

0xa32a,	// (0x000177ef) im_writing_pane_t2

0x0001,

0xf227,	// (0x0001c6ec) im_writing_pane_t_ParamLimits

0xf227,	// (0x0001c6ec) im_writing_pane_t

0x9c71,	// (0x00017136) input_focus_pane_cp04

0x9c71,	// (0x00017136) input_focus_pane_cp05

0x1fee,	// (0x0000f4b3) list_im_single_pane_ParamLimits

0x1fee,	// (0x0000f4b3) list_im_single_pane

0x2007,	// (0x0000f4cc) list_single_im_pane_t1

0xa1ee,	// (0x000176b3) blid_accuracy_pane

0xa1ee,	// (0x000176b3) blid_compass_pane

0xbf74,	// (0x00019439) main_location_t1

0xbf74,	// (0x00019439) main_location_t2

0xbf74,	// (0x00019439) main_location_t3

0x0002,

0xf56e,	// (0x0001ca33) main_location_t

0x9c71,	// (0x00017136) aid_levels_location

0x9ee4,	// (0x000173a9) blid_accuracy_pane_g1

0x9ee4,	// (0x000173a9) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x0001c73b) blid_accuracy_pane_g

0xa372,	// (0x00017837) wml_content_pane

0xa3b0,	// (0x00017875) wml_button_pane_ParamLimits

0xa3b0,	// (0x00017875) wml_button_pane

0x2016,	// (0x0000f4db) wml_list_single_large_pane_ParamLimits

0x2016,	// (0x0000f4db) wml_list_single_large_pane

0x202f,	// (0x0000f4f4) wml_list_single_medium_pane_ParamLimits

0x202f,	// (0x0000f4f4) wml_list_single_medium_pane

0x2049,	// (0x0000f50e) wml_list_single_small_pane_ParamLimits

0x2049,	// (0x0000f50e) wml_list_single_small_pane

0xa3c4,	// (0x00017889) wml_selection_box_pane_ParamLimits

0xa3c4,	// (0x00017889) wml_selection_box_pane

0xa3d7,	// (0x0001789c) wml_list_single_pane_t1

0xa3e6,	// (0x000178ab) wml_list_single_medium_pane_t1

0xa3f5,	// (0x000178ba) wml_list_single_large_pane_t1

0xa404,	// (0x000178c9) input_focus_pane_cp02_ParamLimits

0xa404,	// (0x000178c9) input_focus_pane_cp02

0xa417,	// (0x000178dc) wml_selection_box_pane_g1

0xa420,	// (0x000178e5) wml_selection_box_pane_t1_ParamLimits

0xa420,	// (0x000178e5) wml_selection_box_pane_t1

0x9ecc,	// (0x00017391) bg_wml_button_pane_ParamLimits

0x9ecc,	// (0x00017391) bg_wml_button_pane

0xa438,	// (0x000178fd) wml_button_pane_g1

0xa440,	// (0x00017905) wml_button_pane_t1

0xa438,	// (0x000178fd) wml_button_bg_pane_g1

0xa450,	// (0x00017915) wml_button_bg_pane_g2

0xa458,	// (0x0001791d) wml_button_bg_pane_g3

0xa460,	// (0x00017925) wml_button_bg_pane_g4

0xa468,	// (0x0001792d) wml_button_bg_pane_g5

0xa470,	// (0x00017935) wml_button_bg_pane_g6

0xa478,	// (0x0001793d) wml_button_bg_pane_g7

0xa480,	// (0x00017945) wml_button_bg_pane_g8

0xa488,	// (0x0001794d) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0001c6f1) wml_button_bg_pane_g

0x2068,	// (0x0000f52d) bg_list_pane_cp02

0xa490,	// (0x00017955) mce_header_pane_ParamLimits

0xa490,	// (0x00017955) mce_header_pane

0xa4a6,	// (0x0001796b) mce_icon_pane

0xa4a6,	// (0x0001796b) mce_image_pane

0xa4af,	// (0x00017974) mce_text_pane_ParamLimits

0xa4af,	// (0x00017974) mce_text_pane

0x2072,	// (0x0000f537) scroll_pane_cp03

0xa3a8,	// (0x0001786d) scroll_pane_cp04

0xa4c2,	// (0x00017987) scroll_pane_cp05_ParamLimits

0xa4c2,	// (0x00017987) scroll_pane_cp05

0x207c,	// (0x0000f541) mce_header_field_pane_ParamLimits

0x207c,	// (0x0000f541) mce_header_field_pane

0x2095,	// (0x0000f55a) mce_header_field_pane_2_ParamLimits

0x2095,	// (0x0000f55a) mce_header_field_pane_2

0x20ab,	// (0x0000f570) mce_header_field_pane_3

0x20b3,	// (0x0000f578) list_single_mce_message_pane_ParamLimits

0x20b3,	// (0x0000f578) list_single_mce_message_pane

0x20cf,	// (0x0000f594) list_single_mce_smart_pane_ParamLimits

0x20cf,	// (0x0000f594) list_single_mce_smart_pane

0xa4ce,	// (0x00017993) input_focus_pane_cp03

0xa4d7,	// (0x0001799c) list_header_data_pane

0x20f6,	// (0x0000f5bb) mce_header_field_pane_t1

0x2106,	// (0x0000f5cb) list_single_mce_header_pane_ParamLimits

0x2106,	// (0x0000f5cb) list_single_mce_header_pane

0xa4df,	// (0x000179a4) list_single_mce_header_pane_t1

0xa4ee,	// (0x000179b3) list_single_mce_message_pane_g1

0xa4f6,	// (0x000179bb) list_single_mce_message_pane_t1

0x2140,	// (0x0000f605) bg_cale_heading_pane_cp01_ParamLimits

0x2140,	// (0x0000f605) bg_cale_heading_pane_cp01

0xa504,	// (0x000179c9) bg_cale_pane_cp02_ParamLimits

0xa504,	// (0x000179c9) bg_cale_pane_cp02

0x2192,	// (0x0000f657) cale_month_corner_pane

0x21b1,	// (0x0000f676) cale_month_day_heading_pane_ParamLimits

0x21b1,	// (0x0000f676) cale_month_day_heading_pane

0x221b,	// (0x0000f6e0) cale_month_pane_g1_ParamLimits

0x221b,	// (0x0000f6e0) cale_month_pane_g1

0x2262,	// (0x0000f727) cale_month_pane_g2_ParamLimits

0x2262,	// (0x0000f727) cale_month_pane_g2

0x229e,	// (0x0000f763) cale_month_pane_g3_ParamLimits

0x229e,	// (0x0000f763) cale_month_pane_g3

0x22f2,	// (0x0000f7b7) cale_month_pane_g4_ParamLimits

0x22f2,	// (0x0000f7b7) cale_month_pane_g4

0x2346,	// (0x0000f80b) cale_month_pane_g5_ParamLimits

0x2346,	// (0x0000f80b) cale_month_pane_g5

0x23a2,	// (0x0000f867) cale_month_pane_g6_ParamLimits

0x23a2,	// (0x0000f867) cale_month_pane_g6

0x240a,	// (0x0000f8cf) cale_month_pane_g7_ParamLimits

0x240a,	// (0x0000f8cf) cale_month_pane_g7

0x2476,	// (0x0000f93b) cale_month_pane_g8_ParamLimits

0x2476,	// (0x0000f93b) cale_month_pane_g8

0x24e2,	// (0x0000f9a7) cale_month_pane_g9_ParamLimits

0x24e2,	// (0x0000f9a7) cale_month_pane_g9

0x2546,	// (0x0000fa0b) cale_month_pane_g10_ParamLimits

0x2546,	// (0x0000fa0b) cale_month_pane_g10

0x2598,	// (0x0000fa5d) cale_month_pane_g11_ParamLimits

0x2598,	// (0x0000fa5d) cale_month_pane_g11

0x25ea,	// (0x0000faaf) cale_month_pane_g12_ParamLimits

0x25ea,	// (0x0000faaf) cale_month_pane_g12

0x2642,	// (0x0000fb07) cale_month_pane_g13_ParamLimits

0x2642,	// (0x0000fb07) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0001c704) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0001c704) cale_month_pane_g

0x269a,	// (0x0000fb5f) cale_month_week_pane

0x26be,	// (0x0000fb83) grid_cale_month_pane_ParamLimits

0x26be,	// (0x0000fb83) grid_cale_month_pane

0x271f,	// (0x0000fbe4) cale_month_day_heading_pane_t1

0x27a5,	// (0x0000fc6a) cale_month_day_heading_pane_t2

0x281e,	// (0x0000fce3) cale_month_day_heading_pane_t3

0x2897,	// (0x0000fd5c) cale_month_day_heading_pane_t4

0x2918,	// (0x0000fddd) cale_month_day_heading_pane_t5

0x29a1,	// (0x0000fe66) cale_month_day_heading_pane_t6

0x2a32,	// (0x0000fef7) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0001c71f) cale_month_day_heading_pane_t

0xa193,	// (0x00017658) bg_cale_side_pane_cp01

0x2ac3,	// (0x0000ff88) cale_month_week_pane_t1

0x2adc,	// (0x0000ffa1) cale_month_week_pane_t2

0x2af5,	// (0x0000ffba) cale_month_week_pane_t3

0x2b0e,	// (0x0000ffd3) cale_month_week_pane_t4

0x2b27,	// (0x0000ffec) cale_month_week_pane_t5

0x2b40,	// (0x00010005) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0001c72e) cale_month_week_pane_t

0x2b65,	// (0x0001002a) cell_cale_month_pane_ParamLimits

0x2b65,	// (0x0001002a) cell_cale_month_pane

0xa543,	// (0x00017a08) cell_cale_month_pane_g1

0x2caf,	// (0x00010174) cell_cale_month_pane_t1_ParamLimits

0x2caf,	// (0x00010174) cell_cale_month_pane_t1

0xa1a1,	// (0x00017666) grid_highlight_pane_cp08

0x9ee4,	// (0x000173a9) main_smil_g1

0x2cdb,	// (0x000101a0) smil_status_pane

0xa54f,	// (0x00017a14) smil_text_pane

0xbe8a,	// (0x0001934f) bg_popup_call3_rect_pane_g8

0xbe92,	// (0x00019357) bg_popup_call3_rect_pane_g9

0x0008,

0xf502,	// (0x0001c9c7) bg_popup_call3_rect_pane_g

0xc0a8,	// (0x0001956d) smil_status_volume_pane_g1

0xa559,	// (0x00017a1e) smil_status_pane_t1

0xc0db,	// (0x000195a0) volume_smil_pane

0xa570,	// (0x00017a35) list_smil_text_pane

0x2cf0,	// (0x000101b5) scroll_pane_cp011

0x2cfb,	// (0x000101c0) smil_text_list_pane_t1_ParamLimits

0x2cfb,	// (0x000101c0) smil_text_list_pane_t1

0xa57a,	// (0x00017a3f) aid_volume_smil_ParamLimits

0xa57a,	// (0x00017a3f) aid_volume_smil

0x9ee4,	// (0x000173a9) smil_volume_pane_g1

0x9ee4,	// (0x000173a9) smil_volume_pane_g2

0x0001,

0xf276,	// (0x0001c73b) smil_volume_pane_g

0x1412,	// (0x0000e8d7) listscroll_cale_day_pane

0xa59c,	// (0x00017a61) bg_cale_pane

0xa5b4,	// (0x00017a79) list_cale_pane

0xa5d7,	// (0x00017a9c) scroll_pane_cp09

0xa5e8,	// (0x00017aad) cale_bg_pane_g1

0xa5f0,	// (0x00017ab5) cale_bg_pane_g2

0xa5f8,	// (0x00017abd) cale_bg_pane_g3

0xa600,	// (0x00017ac5) cale_bg_pane_g4

0xa608,	// (0x00017acd) cale_bg_pane_g5

0xa610,	// (0x00017ad5) cale_bg_pane_g6

0xa618,	// (0x00017add) cale_bg_pane_g7

0xa620,	// (0x00017ae5) cale_bg_pane_g8

0xa628,	// (0x00017aed) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x0001c740) cale_bg_pane_g

0x2d4e,	// (0x00010213) list_cale_time_pane_ParamLimits

0x2d4e,	// (0x00010213) list_cale_time_pane

0xa630,	// (0x00017af5) list_cale_time_pane_g1_ParamLimits

0xa630,	// (0x00017af5) list_cale_time_pane_g1

0xa63c,	// (0x00017b01) list_cale_time_pane_g2_ParamLimits

0xa63c,	// (0x00017b01) list_cale_time_pane_g2

0x2d68,	// (0x0001022d) list_cale_time_pane_g3_ParamLimits

0x2d68,	// (0x0001022d) list_cale_time_pane_g3

0x2d76,	// (0x0001023b) list_cale_time_pane_g4_ParamLimits

0x2d76,	// (0x0001023b) list_cale_time_pane_g4

0x2d84,	// (0x00010249) list_cale_time_pane_g5_ParamLimits

0x2d84,	// (0x00010249) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x0001c753) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x0001c753) list_cale_time_pane_g

0xa656,	// (0x00017b1b) list_cale_time_pane_t1_ParamLimits

0xa656,	// (0x00017b1b) list_cale_time_pane_t1

0xa67e,	// (0x00017b43) list_cale_time_pane_t2_ParamLimits

0xa67e,	// (0x00017b43) list_cale_time_pane_t2

0x3036,	// (0x000104fb) aid_blid_cardinal_pane

0x3078,	// (0x0001053d) compass_pane_t4

0xa6a6,	// (0x00017b6b) list_cale_time_pane_t4_ParamLimits

0xa6a6,	// (0x00017b6b) list_cale_time_pane_t4

0x3086,	// (0x0001054b) compass_pane_t5

0x3096,	// (0x0001055b) compass_pane_t6

0x30a4,	// (0x00010569) compass_pane_t7

0xab33,	// (0x00017ff8) navi_pane_cc_t1

0xac92,	// (0x00018157) aid_phob_thumbnail_center_pane

0x361e,	// (0x00010ae3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x0001c760) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x0001c760) list_cale_time_pane_t

0x98c8,	// (0x00016d8d) bg_popup_window_pane_cp02_ParamLimits

0x98c8,	// (0x00016d8d) bg_popup_window_pane_cp02

0xa6ce,	// (0x00017b93) heading_pane_cp01_ParamLimits

0xa6ce,	// (0x00017b93) heading_pane_cp01

0xa6da,	// (0x00017b9f) loc_req_pane_ParamLimits

0xa6da,	// (0x00017b9f) loc_req_pane

0xa6ea,	// (0x00017baf) loc_type_pane_ParamLimits

0xa6ea,	// (0x00017baf) loc_type_pane

0xa6fc,	// (0x00017bc1) loc_type_pane_t1_ParamLimits

0xa6fc,	// (0x00017bc1) loc_type_pane_t1

0xa70e,	// (0x00017bd3) loc_type_pane_t2_ParamLimits

0xa70e,	// (0x00017bd3) loc_type_pane_t2

0xa720,	// (0x00017be5) loc_type_pane_t3_ParamLimits

0xa720,	// (0x00017be5) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x0001c767) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x0001c767) loc_type_pane_t

0xa732,	// (0x00017bf7) list_loc_req_pane

0xa73c,	// (0x00017c01) scroll_pane_cp012

0x2d92,	// (0x00010257) list_single_loc_request_popup_menu_pane_ParamLimits

0x2d92,	// (0x00010257) list_single_loc_request_popup_menu_pane

0xa747,	// (0x00017c0c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa747,	// (0x00017c0c) list_single_loc_request_popup_menu_pane_g1

0xa753,	// (0x00017c18) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa753,	// (0x00017c18) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x0001c76e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x0001c76e) list_single_loc_request_popup_menu_pane_g

0xa75f,	// (0x00017c24) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa75f,	// (0x00017c24) list_single_loc_request_popup_menu_pane_t1

0x9ecc,	// (0x00017391) bg_popup_window_pane_cp03_ParamLimits

0x9ecc,	// (0x00017391) bg_popup_window_pane_cp03

0xa775,	// (0x00017c3a) heading_loc_req_pane_ParamLimits

0xa775,	// (0x00017c3a) heading_loc_req_pane

0x2d9f,	// (0x00010264) popup_dyc_status_message_window_g1_ParamLimits

0x2d9f,	// (0x00010264) popup_dyc_status_message_window_g1

0x2db3,	// (0x00010278) popup_dyc_status_message_window_t1_ParamLimits

0x2db3,	// (0x00010278) popup_dyc_status_message_window_t1

0x2dc8,	// (0x0001028d) popup_dyc_status_message_window_t2_ParamLimits

0x2dc8,	// (0x0001028d) popup_dyc_status_message_window_t2

0x2ddd,	// (0x000102a2) popup_dyc_status_message_window_t3_ParamLimits

0x2ddd,	// (0x000102a2) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x0001c773) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x0001c773) popup_dyc_status_message_window_t

0x9c71,	// (0x00017136) bg_heading_pane_cp01

0xa781,	// (0x00017c46) heading_loc_req_pane_g1

0xa789,	// (0x00017c4e) heading_loc_req_pane_g2

0xa791,	// (0x00017c56) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x0001c77a) heading_loc_req_pane_g

0xa799,	// (0x00017c5e) heading_loc_req_pane_t1

0xa7b9,	// (0x00017c7e) bg_popup_sub_pane_cp01_ParamLimits

0xa7b9,	// (0x00017c7e) bg_popup_sub_pane_cp01

0xa7c7,	// (0x00017c8c) popup_cale_events_window_g1_ParamLimits

0xa7c7,	// (0x00017c8c) popup_cale_events_window_g1

0xa7e7,	// (0x00017cac) popup_cale_events_window_g2_ParamLimits

0xa7e7,	// (0x00017cac) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x0001c79c) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x0001c79c) popup_cale_events_window_g

0xa807,	// (0x00017ccc) popup_cale_events_window_t1_ParamLimits

0xa807,	// (0x00017ccc) popup_cale_events_window_t1

0xa819,	// (0x00017cde) popup_cale_events_window_t2_ParamLimits

0xa819,	// (0x00017cde) popup_cale_events_window_t2

0xa857,	// (0x00017d1c) popup_cale_events_window_t3_ParamLimits

0xa857,	// (0x00017d1c) popup_cale_events_window_t3

0xa891,	// (0x00017d56) popup_cale_events_window_t4_ParamLimits

0xa891,	// (0x00017d56) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x0001c7a1) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x0001c7a1) popup_cale_events_window_t

0x2e05,	// (0x000102ca) call_type_pane

0x2e15,	// (0x000102da) popup_call_status_window_g1

0x2e29,	// (0x000102ee) popup_call_status_window_g2

0x2e3d,	// (0x00010302) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x0001c7aa) popup_call_status_window_g

0xa8c7,	// (0x00017d8c) call_type_pane_g1

0xa8d0,	// (0x00017d95) call_type_pane_g2

0x0001,

0xf2ec,	// (0x0001c7b1) call_type_pane_g

0x9c71,	// (0x00017136) bg_popup_sub_pane_cp02

0xa8d9,	// (0x00017d9e) listscroll_popup_wml_pane

0xa8e1,	// (0x00017da6) list_wml_pane

0xa8eb,	// (0x00017db0) scroll_pane_cp013

0xa8f6,	// (0x00017dbb) list_single_graphic_popup_wml_pane_ParamLimits

0xa8f6,	// (0x00017dbb) list_single_graphic_popup_wml_pane

0x9ee4,	// (0x000173a9) list_single_graphic_popup_wml_pane_g1

0xa90a,	// (0x00017dcf) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x0001c7b6) list_single_graphic_popup_wml_pane_g

0xa912,	// (0x00017dd7) list_single_graphic_popup_wml_pane_t1

0xa928,	// (0x00017ded) aid_call_pane

0x9ec4,	// (0x00017389) popup_clock_analogue_window_g1

0x9ec4,	// (0x00017389) popup_clock_analogue_window_g2

0xa930,	// (0x00017df5) popup_clock_analogue_window_g3

0xa930,	// (0x00017df5) popup_clock_analogue_window_g4

0x9ee4,	// (0x000173a9) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x0001c7bb) popup_clock_analogue_window_g

0xa938,	// (0x00017dfd) popup_clock_analogue_window_t1

0xa946,	// (0x00017e0b) clock_digital_number_pane_ParamLimits

0xa946,	// (0x00017e0b) clock_digital_number_pane

0xa952,	// (0x00017e17) clock_digital_number_pane_cp02_ParamLimits

0xa952,	// (0x00017e17) clock_digital_number_pane_cp02

0xa95e,	// (0x00017e23) clock_digital_number_pane_cp03_ParamLimits

0xa95e,	// (0x00017e23) clock_digital_number_pane_cp03

0xa96a,	// (0x00017e2f) clock_digital_number_pane_cp04_ParamLimits

0xa96a,	// (0x00017e2f) clock_digital_number_pane_cp04

0xa976,	// (0x00017e3b) clock_digital_separator_pane_ParamLimits

0xa976,	// (0x00017e3b) clock_digital_separator_pane

0xa982,	// (0x00017e47) popup_clock_digital_window_t1

0x9ee4,	// (0x000173a9) clock_digital_number_pane_g1

0x9ee4,	// (0x000173a9) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x0001c73b) clock_digital_number_pane_g

0x9ee4,	// (0x000173a9) clock_digital_separator_pane_g1

0x9ee4,	// (0x000173a9) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x0001c73b) clock_digital_separator_pane_g

0x9c71,	// (0x00017136) bg_popup_window_pane_cp04

0xa99f,	// (0x00017e64) heading_pane_cp03

0xa1ee,	// (0x000176b3) listscroll_popup_gms_pane

0x9c71,	// (0x00017136) grid_large_graphic_popup_pane

0xa9a8,	// (0x00017e6d) listscroll_popup_gms_pane_g1

0xa9b1,	// (0x00017e76) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x0001c7c6) listscroll_popup_gms_pane_g

0xa9ba,	// (0x00017e7f) scroll_pane_cp014

0x9f39,	// (0x000173fe) cell_large_graphic_popup_pane_ParamLimits

0x9f39,	// (0x000173fe) cell_large_graphic_popup_pane

0x9f47,	// (0x0001740c) cell_large_graphic_popup_pane_g1_ParamLimits

0x9f47,	// (0x0001740c) cell_large_graphic_popup_pane_g1

0xa9c3,	// (0x00017e88) cell_large_graphic_popup_pane_g2_ParamLimits

0xa9c3,	// (0x00017e88) cell_large_graphic_popup_pane_g2

0xa9d1,	// (0x00017e96) cell_large_graphic_popup_pane_g3_ParamLimits

0xa9d1,	// (0x00017e96) cell_large_graphic_popup_pane_g3

0xa9df,	// (0x00017ea4) cell_large_graphic_popup_pane_g4_ParamLimits

0xa9df,	// (0x00017ea4) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x0001c7cb) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x0001c7cb) cell_large_graphic_popup_pane_g

0x9c71,	// (0x00017136) grid_highlight_pane_cp010

0x9ee4,	// (0x000173a9) bg_popup_call_pane_g1

0xa9f0,	// (0x00017eb5) list_single_graphic_popup_conf_pane_ParamLimits

0xa9f0,	// (0x00017eb5) list_single_graphic_popup_conf_pane

0xaa02,	// (0x00017ec7) list_highlight_pane_cp01

0xaa0b,	// (0x00017ed0) list_single_graphic_popup_conf_pane_g1

0xaa13,	// (0x00017ed8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x0001c7d4) list_single_graphic_popup_conf_pane_g

0xaa1b,	// (0x00017ee0) list_single_graphic_popup_conf_pane_t1

0xaa29,	// (0x00017eee) linegrid_cams_pane_g1

0x2e4d,	// (0x00010312) linegrid_cams_pane_g2

0xa1d4,	// (0x00017699) linegrid_cams_pane_g3

0xaa32,	// (0x00017ef7) linegrid_cams_pane_g4

0x2e56,	// (0x0001031b) linegrid_cams_pane_g5

0x2e5f,	// (0x00010324) linegrid_cams_pane_g6

0xa1dd,	// (0x000176a2) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x0001c7d9) linegrid_cams_pane_g

0xaa3b,	// (0x00017f00) popup_clock_analogue_window

0xaa3b,	// (0x00017f00) popup_clock_digital_window

0x9c71,	// (0x00017136) popup_phob_thumbnail_window

0x9ee4,	// (0x000173a9) call_video_uplink_pane_g1

0xaa44,	// (0x00017f09) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x0001c7e8) call_video_uplink_pane_g

0xaa4c,	// (0x00017f11) video_uplink_pane

0xaa54,	// (0x00017f19) mce_image_pane_g1

0x2e6a,	// (0x0001032f) mce_image_pane_g2

0x2e74,	// (0x00010339) mce_image_pane_g3

0x2e7e,	// (0x00010343) mce_image_pane_g4

0x2e86,	// (0x0001034b) mce_image_pane_g5

0x0004,

0xf328,	// (0x0001c7ed) mce_image_pane_g

0xaa5e,	// (0x00017f23) control_top_pane_stacon_cp01_ParamLimits

0xaa5e,	// (0x00017f23) control_top_pane_stacon_cp01

0xaa72,	// (0x00017f37) uni_indicator_pane_stacon_cp01_ParamLimits

0xaa72,	// (0x00017f37) uni_indicator_pane_stacon_cp01

0xaa83,	// (0x00017f48) bg_popup_sub_pane_cp03

0x2e8e,	// (0x00010353) chi_dic_find_pane

0x2e96,	// (0x0001035b) listscroll_chi_dic_pane

0x2e9f,	// (0x00010364) main_pane_chidic_g1

0x2eb2,	// (0x00010377) chi_dic_find_pane_t1

0xaa8d,	// (0x00017f52) find_chidic_pane

0xaa96,	// (0x00017f5b) chi_dic_list_pane_ParamLimits

0xaa96,	// (0x00017f5b) chi_dic_list_pane

0xaaa7,	// (0x00017f6c) scroll_pane_cp020

0x2ec0,	// (0x00010385) find_chidic_pane_t1

0x9c71,	// (0x00017136) input_focus_pane_cp06

0x2ecf,	// (0x00010394) list_chi_dic_pane_ParamLimits

0x2ecf,	// (0x00010394) list_chi_dic_pane

0x2ee1,	// (0x000103a6) list_chi_dic_pane_t1_ParamLimits

0x2ee1,	// (0x000103a6) list_chi_dic_pane_t1

0x9c71,	// (0x00017136) list_highlight_pane_cp020

0xaaaf,	// (0x00017f74) bg_cale_heading_pane_g1

0x2ef4,	// (0x000103b9) bg_cale_heading_pane_g2

0x2efc,	// (0x000103c1) bg_cale_heading_pane_g3

0x2f04,	// (0x000103c9) bg_cale_heading_pane_g4

0x2f0e,	// (0x000103d3) bg_cale_heading_pane_g5

0x2f18,	// (0x000103dd) bg_cale_heading_pane_g6

0x2f20,	// (0x000103e5) bg_cale_heading_pane_g7

0x2f28,	// (0x000103ed) bg_cale_heading_pane_g8

0x2f32,	// (0x000103f7) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x0001c7f8) bg_cale_heading_pane_g

0xaaaf,	// (0x00017f74) bg_cale_side_pane_g1

0x2f3c,	// (0x00010401) bg_cale_side_pane_g2

0x2f46,	// (0x0001040b) bg_cale_side_pane_g3

0x2f50,	// (0x00010415) bg_cale_side_pane_g4

0x2f5a,	// (0x0001041f) bg_cale_side_pane_g5

0x2f64,	// (0x00010429) bg_cale_side_pane_g6

0x2f6e,	// (0x00010433) bg_cale_side_pane_g7

0x2f78,	// (0x0001043d) bg_cale_side_pane_g8

0x2f80,	// (0x00010445) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x0001c80b) bg_cale_side_pane_g

0x2f88,	// (0x0001044d) popup_call_status_window_ParamLimits

0x2f88,	// (0x0001044d) popup_call_status_window

0xaab7,	// (0x00017f7c) stacon_top_pane

0xaabf,	// (0x00017f84) status_pane_ParamLimits

0xaabf,	// (0x00017f84) status_pane

0xaad4,	// (0x00017f99) status_small_pane

0xaadc,	// (0x00017fa1) control_pane

0x9c71,	// (0x00017136) stacon_bottom_pane

0xaae4,	// (0x00017fa9) list_single_mce_smart_pane_t1_ParamLimits

0xaae4,	// (0x00017fa9) list_single_mce_smart_pane_t1

0xaaf7,	// (0x00017fbc) list_single_mce_smart_pane_t2_ParamLimits

0xaaf7,	// (0x00017fbc) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x0001c81e) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x0001c81e) list_single_mce_smart_pane_t

0x2fd5,	// (0x0001049a) compass_pane

0x2fe0,	// (0x000104a5) main_location2_pane_t1

0x2ff6,	// (0x000104bb) main_location2_pane_t2

0x300c,	// (0x000104d1) main_location2_pane_t3

0x0003,

0xf35e,	// (0x0001c823) main_location2_pane_t

0xab16,	// (0x00017fdb) compass_pane_g1_ParamLimits

0xab16,	// (0x00017fdb) compass_pane_g1

0x305a,	// (0x0001051f) compass_pane_t1

0x3069,	// (0x0001052e) compass_pane_t2

0x0005,

0xf367,	// (0x0001c82c) compass_pane_t

0x30b4,	// (0x00010579) text_secondary_cp61

0xab2a,	// (0x00017fef) navi_pane_cams_g5

0xab4d,	// (0x00018012) navi_pane_im_t1

0xab5b,	// (0x00018020) navi_pane_mp_g1_ParamLimits

0xab5b,	// (0x00018020) navi_pane_mp_g1

0xab6f,	// (0x00018034) navi_pane_mp_g2_ParamLimits

0xab6f,	// (0x00018034) navi_pane_mp_g2

0xab7b,	// (0x00018040) navi_pane_mp_g3_ParamLimits

0xab7b,	// (0x00018040) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x0001c840) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x0001c840) navi_pane_mp_g

0xab87,	// (0x0001804c) navi_pane_mp_t1

0xab95,	// (0x0001805a) navi_pane_mp_t2

0x0002,

0xf382,	// (0x0001c847) navi_pane_mp_t

0xabd1,	// (0x00018096) navi_pane_vt_g1

0xab87,	// (0x0001804c) navi_pane_vt_t1

0xabd9,	// (0x0001809e) navi_slider_pane

0xa1ee,	// (0x000176b3) zooming_pane

0xabe1,	// (0x000180a6) navi_slider_pane_g1

0xabea,	// (0x000180af) navi_slider_pane_g2

0x0006,

0xf389,	// (0x0001c84e) navi_slider_pane_g

0xac17,	// (0x000180dc) aid_levels_zoom

0xac1f,	// (0x000180e4) zooming_pane_g1

0xac27,	// (0x000180ec) zooming_pane_g2

0xac27,	// (0x000180ec) zooming_pane_g3

0x0002,

0xf398,	// (0x0001c85d) zooming_pane_g

0xac2f,	// (0x000180f4) level_10_zoom

0xac38,	// (0x000180fd) level_11_zoom

0xac41,	// (0x00018106) level_1_zoom

0xac4a,	// (0x0001810f) level_2_zoom

0xac53,	// (0x00018118) level_3_zoom

0xac5c,	// (0x00018121) level_4_zoom

0xac65,	// (0x0001812a) level_5_zoom

0xac6e,	// (0x00018133) level_6_zoom

0xac77,	// (0x0001813c) level_7_zoom

0xac80,	// (0x00018145) level_8_zoom

0xac89,	// (0x0001814e) level_9_zoom

0xac9a,	// (0x0001815f) popup_phob_thumbnail_window_g1

0xaca2,	// (0x00018167) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x0001c864) popup_phob_thumbnail_window_g

0x3d1b,	// (0x000111e0) level_1_location

0x3d23,	// (0x000111e8) level_2_location

0x3d2b,	// (0x000111f0) level_3_location

0x3d35,	// (0x000111fa) level_4_location

0xa1ee,	// (0x000176b3) level_5_location

0x31fd,	// (0x000106c2) mce_icon_pane_g1

0x3207,	// (0x000106cc) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x0001c869) mce_icon_pane_g

0xacaa,	// (0x0001816f) main_mup_pane_g1_ParamLimits

0xacaa,	// (0x0001816f) main_mup_pane_g1

0xacaa,	// (0x0001816f) main_mup_pane_g2_ParamLimits

0xacaa,	// (0x0001816f) main_mup_pane_g2

0xacaa,	// (0x0001816f) main_mup_pane_g3_ParamLimits

0xacaa,	// (0x0001816f) main_mup_pane_g3

0xacaa,	// (0x0001816f) main_mup_pane_g4_ParamLimits

0xacaa,	// (0x0001816f) main_mup_pane_g4

0xacaa,	// (0x0001816f) main_mup_pane_g5_ParamLimits

0xacaa,	// (0x0001816f) main_mup_pane_g5

0xacaa,	// (0x0001816f) main_mup_pane_g6_ParamLimits

0xacaa,	// (0x0001816f) main_mup_pane_g6

0xacaa,	// (0x0001816f) main_mup_pane_g7_ParamLimits

0xacaa,	// (0x0001816f) main_mup_pane_g7

0xacaa,	// (0x0001816f) main_mup_pane_g8_ParamLimits

0xacaa,	// (0x0001816f) main_mup_pane_g8

0xacaa,	// (0x0001816f) main_mup_pane_g9_ParamLimits

0xacaa,	// (0x0001816f) main_mup_pane_g9

0xacaa,	// (0x0001816f) main_mup_pane_g10_ParamLimits

0xacaa,	// (0x0001816f) main_mup_pane_g10

0xacaa,	// (0x0001816f) main_mup_pane_g11_ParamLimits

0xacaa,	// (0x0001816f) main_mup_pane_g11

0x9f47,	// (0x0001740c) main_mup_pane_g12_ParamLimits

0x9f47,	// (0x0001740c) main_mup_pane_g12

0xacaa,	// (0x0001816f) main_mup_pane_g13_ParamLimits

0xacaa,	// (0x0001816f) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x0001c86e) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x0001c86e) main_mup_pane_g

0xacb8,	// (0x0001817d) main_mup_pane_t1_ParamLimits

0xacb8,	// (0x0001817d) main_mup_pane_t1

0xacb8,	// (0x0001817d) main_mup_pane_t2_ParamLimits

0xacb8,	// (0x0001817d) main_mup_pane_t2

0xacb8,	// (0x0001817d) main_mup_pane_t3_ParamLimits

0xacb8,	// (0x0001817d) main_mup_pane_t3

0xa215,	// (0x000176da) main_mup_pane_t4_ParamLimits

0xa215,	// (0x000176da) main_mup_pane_t4

0xa215,	// (0x000176da) main_mup_pane_t5_ParamLimits

0xa215,	// (0x000176da) main_mup_pane_t5

0xaccc,	// (0x00018191) main_mup_pane_t6_ParamLimits

0xaccc,	// (0x00018191) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x0001c889) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x0001c889) main_mup_pane_t

0x9f39,	// (0x000173fe) mup_progress_pane_ParamLimits

0x9f39,	// (0x000173fe) mup_progress_pane

0xace0,	// (0x000181a5) mup_visualizer_pane_ParamLimits

0xace0,	// (0x000181a5) mup_visualizer_pane

0xace0,	// (0x000181a5) mup_volume_pane_ParamLimits

0xace0,	// (0x000181a5) mup_volume_pane

0x9f55,	// (0x0001741a) mup_visualizer_pane_g1_ParamLimits

0x9f55,	// (0x0001741a) mup_visualizer_pane_g1

0xacee,	// (0x000181b3) mup_visualizer_pane_g2_ParamLimits

0xacee,	// (0x000181b3) mup_visualizer_pane_g2

0x9f47,	// (0x0001740c) mup_visualizer_pane_g3_ParamLimits

0x9f47,	// (0x0001740c) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x0001c896) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x0001c896) mup_visualizer_pane_g

0xa243,	// (0x00017708) mup_volume_pane_g1

0xa243,	// (0x00017708) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x0001c89d) mup_volume_pane_g

0xa243,	// (0x00017708) mup_progress_pane_g1

0xa243,	// (0x00017708) mup_progress_pane_g2

0xa243,	// (0x00017708) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x0001c8a2) mup_progress_pane_g

0x9c71,	// (0x00017136) bg_popup_window_pane_cp05

0xacfc,	// (0x000181c1) heading_pane_cp02_ParamLimits

0xacfc,	// (0x000181c1) heading_pane_cp02

0xad18,	// (0x000181dd) list_popup_blid_pane

0xad20,	// (0x000181e5) list_blid_sat_info_pane_ParamLimits

0xad20,	// (0x000181e5) list_blid_sat_info_pane

0xad33,	// (0x000181f8) list_blid_sat_info_pane_g1

0xad3b,	// (0x00018200) list_blid_sat_info_pane_t1

0x331b,	// (0x000107e0) mup_equalizer_pane_ParamLimits

0x331b,	// (0x000107e0) mup_equalizer_pane

0x333c,	// (0x00010801) mup_equalizer_pane_cp1_ParamLimits

0x333c,	// (0x00010801) mup_equalizer_pane_cp1

0x335d,	// (0x00010822) mup_equalizer_pane_cp2_ParamLimits

0x335d,	// (0x00010822) mup_equalizer_pane_cp2

0x3382,	// (0x00010847) mup_equalizer_pane_cp3_ParamLimits

0x3382,	// (0x00010847) mup_equalizer_pane_cp3

0x33ab,	// (0x00010870) mup_equalizer_pane_cp4_ParamLimits

0x33ab,	// (0x00010870) mup_equalizer_pane_cp4

0x33d4,	// (0x00010899) mup_equalizer_pane_cp5

0x33ec,	// (0x000108b1) mup_equalizer_pane_cp6

0x3404,	// (0x000108c9) mup_equalizer_pane_cp7

0xbf0a,	// (0x000193cf) bg_popup_call_poc_act_pane_g9

0xbf12,	// (0x000193d7) bg_popup_call_poc_act_pane_g10

0xbf1a,	// (0x000193df) bg_popup_call_poc_act_pane_g11

0x000a,

0x9ecc,	// (0x00017391) mup_scale_pane

0x9ee4,	// (0x000173a9) mup_scale_pane_g1

0xad49,	// (0x0001820e) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x0001c8be) mup_scale_pane_g

0xad6d,	// (0x00018232) msg_data_pane

0xad75,	// (0x0001823a) scroll_pane_cp017

0x342e,	// (0x000108f3) bg_list_pane_cp04_ParamLimits

0x342e,	// (0x000108f3) bg_list_pane_cp04

0xad85,	// (0x0001824a) msg_data_pane_g1

0x344e,	// (0x00010913) msg_data_pane_g2

0x3458,	// (0x0001091d) msg_data_pane_g3

0x3462,	// (0x00010927) msg_data_pane_g4

0x346a,	// (0x0001092f) msg_data_pane_g5

0x3472,	// (0x00010937) msg_data_pane_g6

0x347a,	// (0x0001093f) msg_data_pane_g7

0x0006,

0xf408,	// (0x0001c8cd) msg_data_pane_g

0x3482,	// (0x00010947) msg_text_pane_ParamLimits

0x3482,	// (0x00010947) msg_text_pane

0x34b6,	// (0x0001097b) qrid_highlight_pane_cp011_ParamLimits

0x34b6,	// (0x0001097b) qrid_highlight_pane_cp011

0x9c71,	// (0x00017136) msg_body_pane

0x9c71,	// (0x00017136) msg_header_pane

0xad96,	// (0x0001825b) input_focus_pane_cp07

0x34da,	// (0x0001099f) msg_header_pane_t1_ParamLimits

0x34da,	// (0x0001099f) msg_header_pane_t1

0x34f0,	// (0x000109b5) msg_header_pane_t2_ParamLimits

0x34f0,	// (0x000109b5) msg_header_pane_t2

0x0001,

0xf41c,	// (0x0001c8e1) msg_header_pane_t_ParamLimits

0xf41c,	// (0x0001c8e1) msg_header_pane_t

0xadab,	// (0x00018270) msg_body_pane_g1

0x3507,	// (0x000109cc) msg_body_pane_t1_ParamLimits

0x3507,	// (0x000109cc) msg_body_pane_t1

0xadb3,	// (0x00018278) msg_body_pane_t2_ParamLimits

0xadb3,	// (0x00018278) msg_body_pane_t2

0xadc5,	// (0x0001828a) msg_body_pane_t3_ParamLimits

0xadc5,	// (0x0001828a) msg_body_pane_t3

0x0002,

0xf421,	// (0x0001c8e6) msg_body_pane_t_ParamLimits

0xf421,	// (0x0001c8e6) msg_body_pane_t

0x3572,	// (0x00010a37) main_viewer_pane_g1_ParamLimits

0x3572,	// (0x00010a37) main_viewer_pane_g1

0x3580,	// (0x00010a45) main_viewer_pane_g2_ParamLimits

0x3580,	// (0x00010a45) main_viewer_pane_g2

0x358e,	// (0x00010a53) main_viewer_pane_g3_ParamLimits

0x358e,	// (0x00010a53) main_viewer_pane_g3

0x359d,	// (0x00010a62) main_viewer_pane_g4_ParamLimits

0x359d,	// (0x00010a62) main_viewer_pane_g4

0xadef,	// (0x000182b4) main_viewer_pane_g5_ParamLimits

0xadef,	// (0x000182b4) main_viewer_pane_g5

0xadef,	// (0x000182b4) main_viewer_pane_g7_ParamLimits

0xadef,	// (0x000182b4) main_viewer_pane_g7

0xae01,	// (0x000182c6) main_viewer_pane_g8_ParamLimits

0xae01,	// (0x000182c6) main_viewer_pane_g8

0x0007,

0xf431,	// (0x0001c8f6) main_viewer_pane_g_ParamLimits

0xf431,	// (0x0001c8f6) main_viewer_pane_g

0xae19,	// (0x000182de) viewer_content_pane_ParamLimits

0xae19,	// (0x000182de) viewer_content_pane

0x35db,	// (0x00010aa0) main_postcard_pane_g1_ParamLimits

0x35db,	// (0x00010aa0) main_postcard_pane_g1

0x35f1,	// (0x00010ab6) main_postcard_pane_g2_ParamLimits

0x35f1,	// (0x00010ab6) main_postcard_pane_g2

0x3607,	// (0x00010acc) main_postcard_pane_g3_ParamLimits

0x3607,	// (0x00010acc) main_postcard_pane_g3

0x0005,

0xf442,	// (0x0001c907) main_postcard_pane_g_ParamLimits

0xf442,	// (0x0001c907) main_postcard_pane_g

0x361e,	// (0x00010ae3) main_postcard_pane_g4

0xc0bb,	// (0x00019580) smil_status_volume_pane_g2

0x3661,	// (0x00010b26) postcard_pane_ParamLimits

0x3661,	// (0x00010b26) postcard_pane

0xae27,	// (0x000182ec) postcard_pane_g1_ParamLimits

0xae27,	// (0x000182ec) postcard_pane_g1

0x36b1,	// (0x00010b76) postcard_pane_g2_ParamLimits

0x36b1,	// (0x00010b76) postcard_pane_g2

0x36bd,	// (0x00010b82) postcard_pane_g3_ParamLimits

0x36bd,	// (0x00010b82) postcard_pane_g3

0xae35,	// (0x000182fa) postcard_pane_g4_ParamLimits

0xae35,	// (0x000182fa) postcard_pane_g4

0x36c9,	// (0x00010b8e) postcard_pane_g5_ParamLimits

0x36c9,	// (0x00010b8e) postcard_pane_g5

0x36de,	// (0x00010ba3) postcard_pane_g6_ParamLimits

0x36de,	// (0x00010ba3) postcard_pane_g6

0xae27,	// (0x000182ec) postcard_pane_g7_ParamLimits

0xae27,	// (0x000182ec) postcard_pane_g7

0x0006,

0xf44f,	// (0x0001c914) postcard_pane_g_ParamLimits

0xf44f,	// (0x0001c914) postcard_pane_g

0x36f6,	// (0x00010bbb) main_mp2_pane_g1_ParamLimits

0x36f6,	// (0x00010bbb) main_mp2_pane_g1

0x3704,	// (0x00010bc9) main_mp2_pane_g2_ParamLimits

0x3704,	// (0x00010bc9) main_mp2_pane_g2

0x3710,	// (0x00010bd5) main_mp2_pane_g3_ParamLimits

0x3710,	// (0x00010bd5) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x0001c923) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x0001c923) main_mp2_pane_g

0x371c,	// (0x00010be1) main_mp2_pane_t1_ParamLimits

0x371c,	// (0x00010be1) main_mp2_pane_t1

0x3733,	// (0x00010bf8) main_mp2_pane_t2_ParamLimits

0x3733,	// (0x00010bf8) main_mp2_pane_t2

0x3747,	// (0x00010c0c) main_mp2_pane_t3_ParamLimits

0x3747,	// (0x00010c0c) main_mp2_pane_t3

0x0002,

0xf465,	// (0x0001c92a) main_mp2_pane_t_ParamLimits

0xf465,	// (0x0001c92a) main_mp2_pane_t

0xae43,	// (0x00018308) pec_content_pane_ParamLimits

0xae43,	// (0x00018308) pec_content_pane

0xa3a8,	// (0x0001786d) scroll_pane_cp015

0xae55,	// (0x0001831a) pec_attribute_pane_ParamLimits

0xae55,	// (0x0001831a) pec_attribute_pane

0x3759,	// (0x00010c1e) pec_content_pane_g1_ParamLimits

0x3759,	// (0x00010c1e) pec_content_pane_g1

0xae65,	// (0x0001832a) pec_content_pane_t1_ParamLimits

0xae65,	// (0x0001832a) pec_content_pane_t1

0xae77,	// (0x0001833c) pec_content_pane_t2_ParamLimits

0xae77,	// (0x0001833c) pec_content_pane_t2

0x0001,

0xf46c,	// (0x0001c931) pec_content_pane_t_ParamLimits

0xf46c,	// (0x0001c931) pec_content_pane_t

0x3765,	// (0x00010c2a) list_single_graphic_pane_cp01_ParamLimits

0x3765,	// (0x00010c2a) list_single_graphic_pane_cp01

0x9ecc,	// (0x00017391) bg_popup_sub_pane_cp04

0xae89,	// (0x0001834e) popup_mup_playback_window_g1

0xae95,	// (0x0001835a) popup_mup_playback_window_t1

0xaeaa,	// (0x0001836f) popup_mup_playback_window_t2

0x0001,

0xf471,	// (0x0001c936) popup_mup_playback_window_t

0xaee1,	// (0x000183a6) main_image_pane_g1_ParamLimits

0xaee1,	// (0x000183a6) main_image_pane_g1

0xaf24,	// (0x000183e9) scroll_pane_cp018_ParamLimits

0xaf24,	// (0x000183e9) scroll_pane_cp018

0xaf3c,	// (0x00018401) scroll_pane_cp016_ParamLimits

0xaf3c,	// (0x00018401) scroll_pane_cp016

0x3837,	// (0x00010cfc) smil2_image_pane_ParamLimits

0x3837,	// (0x00010cfc) smil2_image_pane

0x386d,	// (0x00010d32) smil2_root_pane_ParamLimits

0x386d,	// (0x00010d32) smil2_root_pane

0x38a5,	// (0x00010d6a) smil2_text_pane_ParamLimits

0x38a5,	// (0x00010d6a) smil2_text_pane

0x9c71,	// (0x00017136) bg_list_pane_cp06

0xaf78,	// (0x0001843d) grid_radio_pane

0x9c71,	// (0x00017136) bg_popup_window_pane_cp06

0xaf82,	// (0x00018447) main_fmradio_pane_t1

0xbf22,	// (0x000193e7) heading_pane_cp04

0xaf90,	// (0x00018455) main_fmradio_pane_t2

0xbf2a,	// (0x000193ef) popup_cale_lunar_info_window_g1

0xaf9e,	// (0x00018463) main_fmradio_pane_t3

0xbf32,	// (0x000193f7) popup_cale_lunar_info_window_g2

0xafae,	// (0x00018473) main_fmradio_pane_t4

0x0001,

0xafbc,	// (0x00018481) main_fmradio_pane_t5

0x0004,

0xf551,	// (0x0001ca16) popup_cale_lunar_info_window_g

0xf486,	// (0x0001c94b) main_fmradio_pane_t

0xafca,	// (0x0001848f) wait_bar_pane_cp03

0xafd2,	// (0x00018497) cell_fmradio_pane_ParamLimits

0xafd2,	// (0x00018497) cell_fmradio_pane

0xae27,	// (0x000182ec) cell_fmradio_pane_g1_ParamLimits

0xae27,	// (0x000182ec) cell_fmradio_pane_g1

0x9c71,	// (0x00017136) grid_highlight_pane_cp011

0xafe7,	// (0x000184ac) poc_content_pane_ParamLimits

0xafe7,	// (0x000184ac) poc_content_pane

0xaff9,	// (0x000184be) scroll_pane_cp019

0x3935,	// (0x00010dfa) popup_call_poc_act_window_ParamLimits

0x3935,	// (0x00010dfa) popup_call_poc_act_window

0x3959,	// (0x00010e1e) popup_call_poc_inact_window_ParamLimits

0x3959,	// (0x00010e1e) popup_call_poc_inact_window

0xf528,	// (0x0001c9ed) bg_popup_call_poc_act_pane_g

0xbe9a,	// (0x0001935f) bg_popup_call_poc_inact_pane_g1

0xbea2,	// (0x00019367) bg_popup_call_poc_inact_pane_g2

0xb001,	// (0x000184c6) popup_call_poc_act_window_g2

0xbeaa,	// (0x0001936f) bg_popup_call_poc_inact_pane_g3

0xbeb2,	// (0x00019377) bg_popup_call_poc_inact_pane_g4

0xbeba,	// (0x0001937f) bg_popup_call_poc_inact_pane_g5

0xb009,	// (0x000184ce) popup_call_poc_act_window_t1_ParamLimits

0xb009,	// (0x000184ce) popup_call_poc_act_window_t1

0xb031,	// (0x000184f6) popup_call_poc_act_window_t2_ParamLimits

0xb031,	// (0x000184f6) popup_call_poc_act_window_t2

0xb059,	// (0x0001851e) popup_call_poc_act_window_t3_ParamLimits

0xb059,	// (0x0001851e) popup_call_poc_act_window_t3

0xb081,	// (0x00018546) popup_call_poc_act_window_t4_ParamLimits

0xb081,	// (0x00018546) popup_call_poc_act_window_t4

0x0003,

0xf491,	// (0x0001c956) popup_call_poc_act_window_t_ParamLimits

0xf491,	// (0x0001c956) popup_call_poc_act_window_t

0xbec2,	// (0x00019387) bg_popup_call_poc_inact_pane_g6

0xbeca,	// (0x0001938f) bg_popup_call_poc_inact_pane_g7

0xbed2,	// (0x00019397) bg_popup_call_poc_inact_pane_g8

0xb093,	// (0x00018558) popup_call_poc_inact_window_g2

0xbeda,	// (0x0001939f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf515,	// (0x0001c9da) bg_popup_call_poc_inact_pane_g

0xb09b,	// (0x00018560) popup_call_poc_inact_window_t1_ParamLimits

0xb09b,	// (0x00018560) popup_call_poc_inact_window_t1

0xb0b0,	// (0x00018575) popup_call_poc_inact_window_t2_ParamLimits

0xb0b0,	// (0x00018575) popup_call_poc_inact_window_t2

0xb0c5,	// (0x0001858a) popup_call_poc_inact_window_t3_ParamLimits

0xb0c5,	// (0x0001858a) popup_call_poc_inact_window_t3

0x0002,

0xf49a,	// (0x0001c95f) popup_call_poc_inact_window_t_ParamLimits

0xf49a,	// (0x0001c95f) popup_call_poc_inact_window_t

0xc020,	// (0x000194e5) context_pane_ParamLimits

0x4244,	// (0x00011709) signal_pane_ParamLimits

0xa1ee,	// (0x000176b3) main_call2_pane

0xbff9,	// (0x000194be) popup_phob_thumbnail2_window_ParamLimits

0xbff9,	// (0x000194be) popup_phob_thumbnail2_window

0xadd7,	// (0x0001829c) aid_hotspot_pointer_arrow_pane

0xaddf,	// (0x000182a4) aid_hotspot_pointer_hand_pane

0x3ce3,	// (0x000111a8) phob_pre_status_pane_g5

0x981b,	// (0x00016ce0) cams_zoom_pane_ParamLimits

0x981b,	// (0x00016ce0) image_vga_pane_ParamLimits

0x9f47,	// (0x0001740c) main_camera_pane_g1_ParamLimits

0x9f47,	// (0x0001740c) main_camera_pane_g2_ParamLimits

0x9f47,	// (0x0001740c) main_camera_pane_g3_ParamLimits

0x9f47,	// (0x0001740c) main_camera_pane_g4_ParamLimits

0x9f47,	// (0x0001740c) main_camera_pane_g5_ParamLimits

0x9f47,	// (0x0001740c) main_camera_pane_g6_ParamLimits

0x9f47,	// (0x0001740c) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0001c68a) main_camera_pane_g_ParamLimits

0xa215,	// (0x000176da) main_camera_pane_t1_ParamLimits

0xa215,	// (0x000176da) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0001c69b) main_camera_pane_t_ParamLimits

0x9ecc,	// (0x00017391) bg_popup_preview_window_pane_cp01_ParamLimits

0x9ecc,	// (0x00017391) bg_popup_preview_window_pane_cp01

0xb0da,	// (0x0001859f) popup_phob_thumbnail2_window_g1_ParamLimits

0xb0da,	// (0x0001859f) popup_phob_thumbnail2_window_g1

0x9c71,	// (0x00017136) call2_cli_visual_pane

0x398d,	// (0x00010e52) popup_call2_audio_conf_window_ParamLimits

0x398d,	// (0x00010e52) popup_call2_audio_conf_window

0x39b5,	// (0x00010e7a) popup_call2_audio_first_window_ParamLimits

0x39b5,	// (0x00010e7a) popup_call2_audio_first_window

0x3a4b,	// (0x00010f10) popup_call2_audio_in_window_ParamLimits

0x3a4b,	// (0x00010f10) popup_call2_audio_in_window

0x3a97,	// (0x00010f5c) popup_call2_audio_out_window_ParamLimits

0x3a97,	// (0x00010f5c) popup_call2_audio_out_window

0x3b09,	// (0x00010fce) popup_call2_audio_second_window_ParamLimits

0x3b09,	// (0x00010fce) popup_call2_audio_second_window

0x3b6f,	// (0x00011034) popup_call2_audio_wait_window_ParamLimits

0x3b6f,	// (0x00011034) popup_call2_audio_wait_window

0x9c71,	// (0x00017136) bg_popup_call2_act_pane_cp03

0x9eae,	// (0x00017373) list_conf_pane_cp

0xb0e6,	// (0x000185ab) popup_call2_audio_conf_window_t1

0xb0f4,	// (0x000185b9) list_single_graphic_popup_conf2_pane_ParamLimits

0xb0f4,	// (0x000185b9) list_single_graphic_popup_conf2_pane

0xaa02,	// (0x00017ec7) list_highlight_pane_cp04

0xb107,	// (0x000185cc) list_single_graphic_popup_conf2_pane_g1

0xaa13,	// (0x00017ed8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a1,	// (0x0001c966) list_single_graphic_popup_conf2_pane_g

0xb111,	// (0x000185d6) list_single_graphic_popup_conf2_pane_t1

0xb11f,	// (0x000185e4) bg_popup_call2_act_pane_cp01_ParamLimits

0xb11f,	// (0x000185e4) bg_popup_call2_act_pane_cp01

0xb1a9,	// (0x0001866e) call_type_pane_cp05_ParamLimits

0xb1a9,	// (0x0001866e) call_type_pane_cp05

0xb1fd,	// (0x000186c2) popup_call2_audio_second_window_g1_ParamLimits

0xb1fd,	// (0x000186c2) popup_call2_audio_second_window_g1

0xb251,	// (0x00018716) popup_call2_audio_second_window_g2_ParamLimits

0xb251,	// (0x00018716) popup_call2_audio_second_window_g2

0x0002,

0xf4a6,	// (0x0001c96b) popup_call2_audio_second_window_g_ParamLimits

0xf4a6,	// (0x0001c96b) popup_call2_audio_second_window_g

0xb2b6,	// (0x0001877b) popup_call2_audio_second_window_t1_ParamLimits

0xb2b6,	// (0x0001877b) popup_call2_audio_second_window_t1

0xb371,	// (0x00018836) popup_call2_audio_second_window_t2_ParamLimits

0xb371,	// (0x00018836) popup_call2_audio_second_window_t2

0xb3c4,	// (0x00018889) popup_call2_audio_second_window_t3_ParamLimits

0xb3c4,	// (0x00018889) popup_call2_audio_second_window_t3

0x0003,

0xf4ad,	// (0x0001c972) popup_call2_audio_second_window_t_ParamLimits

0xf4ad,	// (0x0001c972) popup_call2_audio_second_window_t

0x9c71,	// (0x00017136) bg_popup_call2_in_pane_cp02

0x9c7b,	// (0x00017140) call_type_pane_cp04

0x3ba9,	// (0x0001106e) popup_call2_audio_wait_window_g1

0x3bb1,	// (0x00011076) popup_call2_audio_wait_window_g2

0x0001,

0xf4b6,	// (0x0001c97b) popup_call2_audio_wait_window_g

0x9c93,	// (0x00017158) popup_call2_audio_wait_window_t3

0xb4b7,	// (0x0001897c) bg_popup_call2_act_pane_ParamLimits

0xb4b7,	// (0x0001897c) bg_popup_call2_act_pane

0xb577,	// (0x00018a3c) call_type_pane_cp03_ParamLimits

0xb577,	// (0x00018a3c) call_type_pane_cp03

0xb5db,	// (0x00018aa0) popup_call2_audio_first_window_g1_ParamLimits

0xb5db,	// (0x00018aa0) popup_call2_audio_first_window_g1

0xb64b,	// (0x00018b10) popup_call2_audio_first_window_g2_ParamLimits

0xb64b,	// (0x00018b10) popup_call2_audio_first_window_g2

0xb6af,	// (0x00018b74) popup_call2_audio_first_window_g3_ParamLimits

0xb6af,	// (0x00018b74) popup_call2_audio_first_window_g3

0x0004,

0xf4bb,	// (0x0001c980) popup_call2_audio_first_window_g_ParamLimits

0xf4bb,	// (0x0001c980) popup_call2_audio_first_window_g

0xb737,	// (0x00018bfc) popup_call2_audio_first_window_t1_ParamLimits

0xb737,	// (0x00018bfc) popup_call2_audio_first_window_t1

0xb83a,	// (0x00018cff) popup_call2_audio_first_window_t4_ParamLimits

0xb83a,	// (0x00018cff) popup_call2_audio_first_window_t4

0xb91d,	// (0x00018de2) popup_call2_audio_first_window_t5_ParamLimits

0xb91d,	// (0x00018de2) popup_call2_audio_first_window_t5

0x0003,

0xf4c6,	// (0x0001c98b) popup_call2_audio_first_window_t_ParamLimits

0xf4c6,	// (0x0001c98b) popup_call2_audio_first_window_t

0x9ec4,	// (0x00017389) bg_popup_call2_act_pane_g1

0xbf3c,	// (0x00019401) popup_cale_lunar_info_window_t1

0xbf4a,	// (0x0001940f) popup_cale_lunar_info_window_t2

0xbf58,	// (0x0001941d) popup_cale_lunar_info_window_t3

0x9c71,	// (0x00017136) bg_popup_call2_bubble_pane

0xba1e,	// (0x00018ee3) bg_popup_call2_in_pane_cp01_ParamLimits

0xba1e,	// (0x00018ee3) bg_popup_call2_in_pane_cp01

0x994d,	// (0x00016e12) call_type_pane_cp02

0x3bb9,	// (0x0001107e) popup_call2_audio_out_window_g1_ParamLimits

0x3bb9,	// (0x0001107e) popup_call2_audio_out_window_g1

0xba66,	// (0x00018f2b) popup_call2_audio_out_window_g2_ParamLimits

0xba66,	// (0x00018f2b) popup_call2_audio_out_window_g2

0x3be5,	// (0x000110aa) popup_call2_audio_out_window_g3_ParamLimits

0x3be5,	// (0x000110aa) popup_call2_audio_out_window_g3

0x0003,

0xf4cf,	// (0x0001c994) popup_call2_audio_out_window_g_ParamLimits

0xf4cf,	// (0x0001c994) popup_call2_audio_out_window_g

0xba9d,	// (0x00018f62) popup_call2_audio_out_window_t1_ParamLimits

0xba9d,	// (0x00018f62) popup_call2_audio_out_window_t1

0xbafc,	// (0x00018fc1) popup_call2_audio_out_window_t2_ParamLimits

0xbafc,	// (0x00018fc1) popup_call2_audio_out_window_t2

0xbb50,	// (0x00019015) popup_call2_audio_out_window_t3_ParamLimits

0xbb50,	// (0x00019015) popup_call2_audio_out_window_t3

0xbb66,	// (0x0001902b) popup_call2_audio_out_window_t4_ParamLimits

0xbb66,	// (0x0001902b) popup_call2_audio_out_window_t4

0xbb7c,	// (0x00019041) popup_call2_audio_out_window_t5_ParamLimits

0xbb7c,	// (0x00019041) popup_call2_audio_out_window_t5

0x0005,

0xf4d8,	// (0x0001c99d) popup_call2_audio_out_window_t_ParamLimits

0xf4d8,	// (0x0001c99d) popup_call2_audio_out_window_t

0xbbe0,	// (0x000190a5) bg_popup_call2_in_pane_ParamLimits

0xbbe0,	// (0x000190a5) bg_popup_call2_in_pane

0xbc3c,	// (0x00019101) popup_call2_audio_in_window_g1_ParamLimits

0xbc3c,	// (0x00019101) popup_call2_audio_in_window_g1

0xbc74,	// (0x00019139) popup_call2_audio_in_window_g2_ParamLimits

0xbc74,	// (0x00019139) popup_call2_audio_in_window_g2

0xbcac,	// (0x00019171) popup_call2_audio_in_window_g3_ParamLimits

0xbcac,	// (0x00019171) popup_call2_audio_in_window_g3

0x0003,

0xf4e5,	// (0x0001c9aa) popup_call2_audio_in_window_g_ParamLimits

0xf4e5,	// (0x0001c9aa) popup_call2_audio_in_window_g

0xbd04,	// (0x000191c9) popup_call2_audio_in_window_t1_ParamLimits

0xbd04,	// (0x000191c9) popup_call2_audio_in_window_t1

0xbd84,	// (0x00019249) popup_call2_audio_in_window_t2_ParamLimits

0xbd84,	// (0x00019249) popup_call2_audio_in_window_t2

0xbe04,	// (0x000192c9) popup_call2_audio_in_window_t3_ParamLimits

0xbe04,	// (0x000192c9) popup_call2_audio_in_window_t3

0xbe1e,	// (0x000192e3) popup_call2_audio_in_window_t4_ParamLimits

0xbe1e,	// (0x000192e3) popup_call2_audio_in_window_t4

0xbe30,	// (0x000192f5) popup_call2_audio_in_window_t5_ParamLimits

0xbe30,	// (0x000192f5) popup_call2_audio_in_window_t5

0xbe45,	// (0x0001930a) popup_call2_audio_in_window_t6_ParamLimits

0xbe45,	// (0x0001930a) popup_call2_audio_in_window_t6

0x0005,

0xf4ee,	// (0x0001c9b3) popup_call2_audio_in_window_t_ParamLimits

0xf4ee,	// (0x0001c9b3) popup_call2_audio_in_window_t

0x9ec4,	// (0x00017389) bg_popup_call2_in_pane_g1

0xbf66,	// (0x0001942b) popup_cale_lunar_info_window_t4

0x0003,

0xf556,	// (0x0001ca1b) popup_cale_lunar_info_window_t

0x9ecc,	// (0x00017391) bg_popup_call2_rect_pane_ParamLimits

0x9ecc,	// (0x00017391) bg_popup_call2_rect_pane

0x9c71,	// (0x00017136) call2_cli_visual_graphic_pane

0x9c71,	// (0x00017136) call2_cli_visual_text_pane

0xc0ce,	// (0x00019593) smil_status_volume_pane_g3

0x0002,

0x9ee4,	// (0x000173a9) call2_cli_visual_graphic_pane_g1

0x9ee4,	// (0x000173a9) call2_cli_visual_graphic_pane_g2

0x9ee4,	// (0x000173a9) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4fb,	// (0x0001c9c0) call2_cli_visual_graphic_pane_g

0xbe5a,	// (0x0001931f) bg_popup_call2_rect_pane_g1

0xa0df,	// (0x000175a4) bg_popup_call2_rect_pane_g2

0xbe62,	// (0x00019327) bg_popup_call2_rect_pane_g3

0xbe6a,	// (0x0001932f) bg_popup_call2_rect_pane_g4

0xbe72,	// (0x00019337) bg_popup_call2_rect_pane_g5

0xbe7a,	// (0x0001933f) bg_popup_call2_rect_pane_g6

0xbe82,	// (0x00019347) bg_popup_call2_rect_pane_g7

0xbe8a,	// (0x0001934f) bg_popup_call2_rect_pane_g8

0xbe92,	// (0x00019357) bg_popup_call2_rect_pane_g9

0x0008,

0xf502,	// (0x0001c9c7) bg_popup_call2_rect_pane_g

0xbe9a,	// (0x0001935f) bg_popup_call2_bubble_pane_g1

0xbea2,	// (0x00019367) bg_popup_call2_bubble_pane_g2

0xbeaa,	// (0x0001936f) bg_popup_call2_bubble_pane_g3

0xbeb2,	// (0x00019377) bg_popup_call2_bubble_pane_g4

0xbeba,	// (0x0001937f) bg_popup_call2_bubble_pane_g5

0xbec2,	// (0x00019387) bg_popup_call2_bubble_pane_g6

0xbeca,	// (0x0001938f) bg_popup_call2_bubble_pane_g7

0xbed2,	// (0x00019397) bg_popup_call2_bubble_pane_g8

0xbeda,	// (0x0001939f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf515,	// (0x0001c9da) bg_popup_call2_bubble_pane_g

0x1422,	// (0x0000e8e7) aid_cale_week_size_cell_pane

0x1a51,	// (0x0000ef16) aid_cams_cif_uncrop_pane_ParamLimits

0x1a51,	// (0x0000ef16) aid_cams_cif_uncrop_pane

0x1ba7,	// (0x0000f06c) aid_cams_size_cell_ParamLimits

0x1ba7,	// (0x0000f06c) aid_cams_size_cell

0x1bbb,	// (0x0000f080) grid_cams_pane_ParamLimits

0x1bd5,	// (0x0000f09a) linegrid_cams_pane_ParamLimits

0x1cb3,	// (0x0000f178) call_video_pane_t1

0x1ccd,	// (0x0000f192) call_video_pane_t2

0x0001,

0xf222,	// (0x0001c6e7) call_video_pane_t

0x211a,	// (0x0000f5df) aid_cale_month_size_cell_pane_ParamLimits

0x211a,	// (0x0000f5df) aid_cale_month_size_cell_pane

0xf59a,	// (0x0001ca5f) smil_status_volume_pane_g

0xc0db,	// (0x000195a0) volume_smil_pane_ParamLimits

0x97b8,	// (0x00016c7d) aid_popup2_width_pane

0x1375,	// (0x0000e83a) cell_qdial_pane_g4_ParamLimits

0x1375,	// (0x0000e83a) cell_qdial_pane_g4

0x3036,	// (0x000104fb) aid_blid_cardinal_pane_ParamLimits

0x3046,	// (0x0001050b) aid_blid_destination_pane_ParamLimits

0x3046,	// (0x0001050b) aid_blid_destination_pane

0x9ecc,	// (0x00017391) bg_popup_call_poc_act_pane_ParamLimits

0x9ecc,	// (0x00017391) bg_popup_call_poc_act_pane

0x9ecc,	// (0x00017391) bg_popup_call_poc_inact_pane_ParamLimits

0x9ecc,	// (0x00017391) bg_popup_call_poc_inact_pane

0xbee2,	// (0x000193a7) bg_popup_call_poc_act_pane_g1

0xbeea,	// (0x000193af) bg_popup_call_poc_act_pane_g2

0xbef2,	// (0x000193b7) bg_popup_call_poc_act_pane_g3

0xbeb2,	// (0x00019377) bg_popup_call_poc_act_pane_g4

0xbeba,	// (0x0001937f) bg_popup_call_poc_act_pane_g5

0xbefa,	// (0x000193bf) bg_popup_call_poc_act_pane_g6

0xbeca,	// (0x0001938f) bg_popup_call_poc_act_pane_g7

0xbf02,	// (0x000193c7) bg_popup_call_poc_act_pane_g8

0x9c71,	// (0x00017136) main_usb_pane

0xbfd0,	// (0x00019495) popup_cale_lunar_info_window

0x1f9a,	// (0x0000f45f) im_reading_pane_t1_ParamLimits

0xa300,	// (0x000177c5) list_im_pane_ParamLimits

0xa311,	// (0x000177d6) scroll_pane_cp07_ParamLimits

0x9c71,	// (0x00017136) grid_highlight_pane_cp012

0x9ecc,	// (0x00017391) mup_scale_pane_ParamLimits

0xae27,	// (0x000182ec) main_usb_pane_g1_ParamLimits

0xae27,	// (0x000182ec) main_usb_pane_g1

0x3c38,	// (0x000110fd) main_usb_pane_g2_ParamLimits

0x3c38,	// (0x000110fd) main_usb_pane_g2

0x0001,

0xf53f,	// (0x0001ca04) main_usb_pane_g_ParamLimits

0xf53f,	// (0x0001ca04) main_usb_pane_g

0x3c4e,	// (0x00011113) main_usb_pane_t1_ParamLimits

0x3c4e,	// (0x00011113) main_usb_pane_t1

0x3c60,	// (0x00011125) main_usb_pane_t2_ParamLimits

0x3c60,	// (0x00011125) main_usb_pane_t2

0x3c72,	// (0x00011137) main_usb_pane_t3_ParamLimits

0x3c72,	// (0x00011137) main_usb_pane_t3

0x3c84,	// (0x00011149) main_usb_pane_t4_ParamLimits

0x3c84,	// (0x00011149) main_usb_pane_t4

0x3c99,	// (0x0001115e) main_usb_pane_t5_ParamLimits

0x3c99,	// (0x0001115e) main_usb_pane_t5

0x3cae,	// (0x00011173) main_usb_pane_t6_ParamLimits

0x3cae,	// (0x00011173) main_usb_pane_t6

0x0005,

0xf544,	// (0x0001ca09) main_usb_pane_t_ParamLimits

0x2fd5,	// (0x0001049a) aid_text_placing

0x2fe0,	// (0x000104a5) main_location2_pane_t1_ParamLimits

0x2ff6,	// (0x000104bb) main_location2_pane_t2_ParamLimits

0x300c,	// (0x000104d1) main_location2_pane_t3_ParamLimits

0x3022,	// (0x000104e7) main_location2_pane_t4_ParamLimits

0x3022,	// (0x000104e7) main_location2_pane_t4

0xf35e,	// (0x0001c823) main_location2_pane_t_ParamLimits

0x9efa,	// (0x000173bf) find_pinb_pane_g2_ParamLimits

0x9efa,	// (0x000173bf) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0001c59f) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0001c59f) find_pinb_pane_g

0x9f06,	// (0x000173cb) find_pinb_pane_t1_ParamLimits

0x9f18,	// (0x000173dd) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0001c5a4) find_pinb_pane_t_ParamLimits

0x9c71,	// (0x00017136) main_call3_pane

0x271f,	// (0x0000fbe4) cale_month_day_heading_pane_t1_ParamLimits

0x27a5,	// (0x0000fc6a) cale_month_day_heading_pane_t2_ParamLimits

0x281e,	// (0x0000fce3) cale_month_day_heading_pane_t3_ParamLimits

0x2897,	// (0x0000fd5c) cale_month_day_heading_pane_t4_ParamLimits

0x2918,	// (0x0000fddd) cale_month_day_heading_pane_t5_ParamLimits

0x29a1,	// (0x0000fe66) cale_month_day_heading_pane_t6_ParamLimits

0x2a32,	// (0x0000fef7) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0001c71f) cale_month_day_heading_pane_t_ParamLimits

0xa567,	// (0x00017a2c) smil_status_volume_pane

0x3685,	// (0x00010b4a) postcard_address_pane_ParamLimits

0x3685,	// (0x00010b4a) postcard_address_pane

0x369b,	// (0x00010b60) postcard_message_pane_ParamLimits

0x369b,	// (0x00010b60) postcard_message_pane

0x3c11,	// (0x000110d6) call2_cli_visual_pane_t1_ParamLimits

0x3c11,	// (0x000110d6) call2_cli_visual_pane_t1

0xc108,	// (0x000195cd) postcard_message_pane_t1_ParamLimits

0xc108,	// (0x000195cd) postcard_message_pane_t1

0xc0f0,	// (0x000195b5) postcard_address_pane_t1_ParamLimits

0xc0f0,	// (0x000195b5) postcard_address_pane_t1

0x43f0,	// (0x000118b5) popup_call3_audio_in_window_ParamLimits

0x43f0,	// (0x000118b5) popup_call3_audio_in_window

0x4275,	// (0x0001173a) bg_popup_call3_in_pane_ParamLimits

0x4275,	// (0x0001173a) bg_popup_call3_in_pane

0x42f1,	// (0x000117b6) popup_call3_audio_in_window_g1_ParamLimits

0x42f1,	// (0x000117b6) popup_call3_audio_in_window_g1

0x4311,	// (0x000117d6) popup_call3_audio_in_window_g2_ParamLimits

0x4311,	// (0x000117d6) popup_call3_audio_in_window_g2

0x4331,	// (0x000117f6) popup_call3_audio_in_window_g3_ParamLimits

0x4331,	// (0x000117f6) popup_call3_audio_in_window_g3

0x0003,

0xf5a1,	// (0x0001ca66) popup_call3_audio_in_window_g_ParamLimits

0xf5a1,	// (0x0001ca66) popup_call3_audio_in_window_g

0x4362,	// (0x00011827) popup_call3_audio_in_window_t1_ParamLimits

0x4362,	// (0x00011827) popup_call3_audio_in_window_t1

0x43a0,	// (0x00011865) popup_call3_audio_in_window_t2_ParamLimits

0x43a0,	// (0x00011865) popup_call3_audio_in_window_t2

0x43de,	// (0x000118a3) popup_call3_audio_in_window_t3_ParamLimits

0x43de,	// (0x000118a3) popup_call3_audio_in_window_t3

0x0002,

0xf5aa,	// (0x0001ca6f) popup_call3_audio_in_window_t_ParamLimits

0xf5aa,	// (0x0001ca6f) popup_call3_audio_in_window_t

0xa1ee,	// (0x000176b3) bg_popup_call3_rect_pane

0xbe5a,	// (0x0001931f) bg_popup_call3_rect_pane_g1

0xa0df,	// (0x000175a4) bg_popup_call3_rect_pane_g2

0xbe62,	// (0x00019327) bg_popup_call3_rect_pane_g3

0xbe6a,	// (0x0001932f) bg_popup_call3_rect_pane_g4

0xbe72,	// (0x00019337) bg_popup_call3_rect_pane_g5

0xbe7a,	// (0x0001933f) bg_popup_call3_rect_pane_g6

0xbe82,	// (0x00019347) bg_popup_call3_rect_pane_g7

0x97a6,	// (0x00016c6b) mup_visualizer_osc_pane

0x97a6,	// (0x00016c6b) mup_visualizer_spec_pane

0x42a5,	// (0x0001176a) call3_video_qcif_pane_ParamLimits

0x42a5,	// (0x0001176a) call3_video_qcif_pane

0x42b8,	// (0x0001177d) call3_video_qcif_uncrop_pane_ParamLimits

0x42b8,	// (0x0001177d) call3_video_qcif_uncrop_pane

0x42c8,	// (0x0001178d) call3_video_subqcif_pane_ParamLimits

0x42c8,	// (0x0001178d) call3_video_subqcif_pane

0x42de,	// (0x000117a3) call3_video_subqcif_uncrop_pane_ParamLimits

0x42de,	// (0x000117a3) call3_video_subqcif_uncrop_pane

0x4351,	// (0x00011816) popup_call3_audio_in_window_g4_ParamLimits

0x4351,	// (0x00011816) popup_call3_audio_in_window_g4

0x97a6,	// (0x00016c6b) mup_spec_half_pane

0x97a6,	// (0x00016c6b) mup_spec_half_pane_cp

0x97a6,	// (0x00016c6b) mup_osc_middle_pane

0xa243,	// (0x00017708) mup_visualizer_osc_pane_g1

0xc081,	// (0x00019546) mup_spec_bar_pane_ParamLimits

0xc081,	// (0x00019546) mup_spec_bar_pane

0xa243,	// (0x00017708) mup_spec_bar_pane_g1

0xa243,	// (0x00017708) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x0001c89d) mup_spec_bar_pane_g

0x1422,	// (0x0000e8e7) aid_cale_week_size_cell_pane_ParamLimits

0x143c,	// (0x0000e901) bg_cale_heading_pane_ParamLimits

0x1460,	// (0x0000e925) bg_cale_pane_cp01_ParamLimits

0x147d,	// (0x0000e942) cale_week_corner_pane_ParamLimits

0x149c,	// (0x0000e961) cale_week_day_heading_pane_ParamLimits

0x14c5,	// (0x0000e98a) cale_week_scroll_pane_g1_ParamLimits

0x14e4,	// (0x0000e9a9) cale_week_scroll_pane_g2_ParamLimits

0x14fc,	// (0x0000e9c1) cale_week_scroll_pane_g3_ParamLimits

0x1514,	// (0x0000e9d9) cale_week_scroll_pane_g4_ParamLimits

0x152c,	// (0x0000e9f1) cale_week_scroll_pane_g5_ParamLimits

0x154c,	// (0x0000ea11) cale_week_scroll_pane_g6_ParamLimits

0x156c,	// (0x0000ea31) cale_week_scroll_pane_g7_ParamLimits

0x1590,	// (0x0000ea55) cale_week_scroll_pane_g8_ParamLimits

0x15b4,	// (0x0000ea79) cale_week_scroll_pane_g9_ParamLimits

0x15cc,	// (0x0000ea91) cale_week_scroll_pane_g10_ParamLimits

0x15e4,	// (0x0000eaa9) cale_week_scroll_pane_g11_ParamLimits

0x15fc,	// (0x0000eac1) cale_week_scroll_pane_g12_ParamLimits

0x1620,	// (0x0000eae5) cale_week_scroll_pane_g13_ParamLimits

0x1620,	// (0x0000eae5) cale_week_scroll_pane_g14_ParamLimits

0x1620,	// (0x0000eae5) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0001c630) cale_week_scroll_pane_g_ParamLimits

0x1668,	// (0x0000eb2d) cale_week_time_pane_ParamLimits

0x168c,	// (0x0000eb51) grid_cale_week_pane_ParamLimits

0xa164,	// (0x00017629) listscroll_cale_week_pane_t1

0xa176,	// (0x0001763b) scroll_pane_cp08_ParamLimits

0x2192,	// (0x0000f657) cale_month_corner_pane_ParamLimits

0xa531,	// (0x000179f6) cale_month_pane_t1

0x269a,	// (0x0000fb5f) cale_month_week_pane_ParamLimits

0x2e15,	// (0x000102da) popup_call_status_window_g1_ParamLimits

0x2e29,	// (0x000102ee) popup_call_status_window_g2_ParamLimits

0x2e3d,	// (0x00010302) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x0001c7aa) popup_call_status_window_g_ParamLimits

0xa920,	// (0x00017de5) aid_call2_pane

0x34cc,	// (0x00010991) msg_header_pane_g1

0x3685,	// (0x00010b4a) postcard_address2_pane_ParamLimits

0x3685,	// (0x00010b4a) postcard_address2_pane

0x369b,	// (0x00010b60) postcard_message2_pane_ParamLimits

0x369b,	// (0x00010b60) postcard_message2_pane

0x4252,	// (0x00011717) message2_row_pane_ParamLimits

0x4252,	// (0x00011717) message2_row_pane

0xc03b,	// (0x00019500) address2_row_pane_ParamLimits

0xc03b,	// (0x00019500) address2_row_pane

0xc04e,	// (0x00019513) postcard_message2_row_pane_g1

0xc056,	// (0x0001951b) postcard_message2_row_pane_t1

0xc04e,	// (0x00019513) address2_row_pane_g1

0xc056,	// (0x0001951b) address2_row_pane_t1

0x19f9,	// (0x0000eebe) aid_size_cell_vorec

0x9c71,	// (0x00017136) main_rss_pane

0xc064,	// (0x00019529) rss_list_single_pane_ParamLimits

0xc064,	// (0x00019529) rss_list_single_pane

0xc072,	// (0x00019537) rss_list_single_pane_t1

0xc072,	// (0x00019537) rss_list_single_pane_t2

0x0001,

0xf595,	// (0x0001ca5a) rss_list_single_pane_t

0x9c71,	// (0x00017136) main_camera2_pane

0x9c71,	// (0x00017136) main_video2_pane

0xc124,	// (0x000195e9) cams_zoom_pane_cp2_ParamLimits

0xc124,	// (0x000195e9) cams_zoom_pane_cp2

0xc124,	// (0x000195e9) image2_vga_pane_ParamLimits

0xc124,	// (0x000195e9) image2_vga_pane

0xcfb2,	// (0x0001a477) main_camera2_pane_g1_ParamLimits

0xcfb2,	// (0x0001a477) main_camera2_pane_g1

0xcfb2,	// (0x0001a477) main_camera2_pane_g2_ParamLimits

0xcfb2,	// (0x0001a477) main_camera2_pane_g2

0xcfb2,	// (0x0001a477) main_camera2_pane_g3_ParamLimits

0xcfb2,	// (0x0001a477) main_camera2_pane_g3

0xcfb2,	// (0x0001a477) main_camera2_pane_g4_ParamLimits

0xcfb2,	// (0x0001a477) main_camera2_pane_g4

0xcfb2,	// (0x0001a477) main_camera2_pane_g5_ParamLimits

0xcfb2,	// (0x0001a477) main_camera2_pane_g5

0xcfb2,	// (0x0001a477) main_camera2_pane_g6_ParamLimits

0xcfb2,	// (0x0001a477) main_camera2_pane_g6

0xcfb2,	// (0x0001a477) main_camera2_pane_g7_ParamLimits

0xcfb2,	// (0x0001a477) main_camera2_pane_g7

0xcfb2,	// (0x0001a477) main_camera2_pane_g8_ParamLimits

0xcfb2,	// (0x0001a477) main_camera2_pane_g8

0x0008,

0xf5b1,	// (0x0001ca76) main_camera2_pane_g_ParamLimits

0xf5b1,	// (0x0001ca76) main_camera2_pane_g

0x4412,	// (0x000118d7) main_camera2_pane_t1_ParamLimits

0x4412,	// (0x000118d7) main_camera2_pane_t1

0x4412,	// (0x000118d7) main_camera2_pane_t2_ParamLimits

0x4412,	// (0x000118d7) main_camera2_pane_t2

0x4412,	// (0x000118d7) main_camera2_pane_t3_ParamLimits

0x4412,	// (0x000118d7) main_camera2_pane_t3

0x4412,	// (0x000118d7) main_camera2_pane_t4_ParamLimits

0x4412,	// (0x000118d7) main_camera2_pane_t4

0x0006,

0xf5c4,	// (0x0001ca89) main_camera2_pane_t_ParamLimits

0xf5c4,	// (0x0001ca89) main_camera2_pane_t

0xc146,	// (0x0001960b) cams_zoom_pane_cp4_ParamLimits

0xc146,	// (0x0001960b) cams_zoom_pane_cp4

0xc154,	// (0x00019619) image2_cif_pane_ParamLimits

0xc154,	// (0x00019619) image2_cif_pane

0x981b,	// (0x00016ce0) image2_subqcif_pane_ParamLimits

0x981b,	// (0x00016ce0) image2_subqcif_pane

0x4426,	// (0x000118eb) main_video2_pane_g1_ParamLimits

0x4426,	// (0x000118eb) main_video2_pane_g1

0x4426,	// (0x000118eb) main_video2_pane_g2_ParamLimits

0x4426,	// (0x000118eb) main_video2_pane_g2

0x4426,	// (0x000118eb) main_video2_pane_g3_ParamLimits

0x4426,	// (0x000118eb) main_video2_pane_g3

0x4426,	// (0x000118eb) main_video2_pane_g4_ParamLimits

0x4426,	// (0x000118eb) main_video2_pane_g4

0x4426,	// (0x000118eb) main_video2_pane_g5_ParamLimits

0x4426,	// (0x000118eb) main_video2_pane_g5

0x4426,	// (0x000118eb) main_video2_pane_g6_ParamLimits

0x4426,	// (0x000118eb) main_video2_pane_g6

0x0005,

0xf5d3,	// (0x0001ca98) main_video2_pane_g_ParamLimits

0xf5d3,	// (0x0001ca98) main_video2_pane_g

0x4434,	// (0x000118f9) main_video2_pane_t1_ParamLimits

0x4434,	// (0x000118f9) main_video2_pane_t1

0x4434,	// (0x000118f9) main_video2_pane_t2_ParamLimits

0x4434,	// (0x000118f9) main_video2_pane_t2

0x4434,	// (0x000118f9) main_video2_pane_t3_ParamLimits

0x4434,	// (0x000118f9) main_video2_pane_t3

0x0002,

0xf5e0,	// (0x0001caa5) main_video2_pane_t_ParamLimits

0xf5e0,	// (0x0001caa5) main_video2_pane_t

0x3d47,	// (0x0001120c) call_muted_g2

0x0001,

0xf587,	// (0x0001ca4c) call_muted_g

0x9c71,	// (0x00017136) main_mup2_pane

0xacaa,	// (0x0001816f) main_mup2_pane_g1_ParamLimits

0xacaa,	// (0x0001816f) main_mup2_pane_g1

0xacaa,	// (0x0001816f) main_mup2_pane_g2_ParamLimits

0xacaa,	// (0x0001816f) main_mup2_pane_g2

0xa243,	// (0x00017708) main_mup_pane_g13_cp1

0x97a6,	// (0x00016c6b) mup_volume_pane_cp1

0xacaa,	// (0x0001816f) main_mup2_pane_g4_ParamLimits

0xacaa,	// (0x0001816f) main_mup2_pane_g4

0xacaa,	// (0x0001816f) main_mup2_pane_g5_ParamLimits

0xacaa,	// (0x0001816f) main_mup2_pane_g5

0xacaa,	// (0x0001816f) main_mup2_pane_g6_ParamLimits

0xacaa,	// (0x0001816f) main_mup2_pane_g6

0xacaa,	// (0x0001816f) main_mup2_pane_g7_ParamLimits

0xacaa,	// (0x0001816f) main_mup2_pane_g7

0x0006,

0xf5e7,	// (0x0001caac) main_mup2_pane_g_ParamLimits

0xf5e7,	// (0x0001caac) main_mup2_pane_g

0xacb8,	// (0x0001817d) main_mup2_pane_t1_ParamLimits

0xacb8,	// (0x0001817d) main_mup2_pane_t1

0xacb8,	// (0x0001817d) main_mup2_pane_t2_ParamLimits

0xacb8,	// (0x0001817d) main_mup2_pane_t2

0xacb8,	// (0x0001817d) main_mup2_pane_t3_ParamLimits

0xacb8,	// (0x0001817d) main_mup2_pane_t3

0xacb8,	// (0x0001817d) main_mup2_pane_t4_ParamLimits

0xacb8,	// (0x0001817d) main_mup2_pane_t4

0xacb8,	// (0x0001817d) main_mup2_pane_t5_ParamLimits

0xacb8,	// (0x0001817d) main_mup2_pane_t5

0xacb8,	// (0x0001817d) main_mup2_pane_t6_ParamLimits

0xacb8,	// (0x0001817d) main_mup2_pane_t6

0x0005,

0xf5f6,	// (0x0001cabb) main_mup2_pane_t_ParamLimits

0xf5f6,	// (0x0001cabb) main_mup2_pane_t

0xace0,	// (0x000181a5) mup2_visualizer_pane_ParamLimits

0xace0,	// (0x000181a5) mup2_visualizer_pane

0xace0,	// (0x000181a5) mup_progress_pane_cp_ParamLimits

0xace0,	// (0x000181a5) mup_progress_pane_cp

0xc162,	// (0x00019627) mup_volume_pane_cp_ParamLimits

0xc162,	// (0x00019627) mup_volume_pane_cp

0x9f47,	// (0x0001740c) mup2_visualizer_pane_g1_ParamLimits

0x9f47,	// (0x0001740c) mup2_visualizer_pane_g1

0x9f55,	// (0x0001741a) mup2_visualizer_pane_g2_ParamLimits

0x9f55,	// (0x0001741a) mup2_visualizer_pane_g2

0x9f55,	// (0x0001741a) mup2_visualizer_pane_g3_ParamLimits

0x9f55,	// (0x0001741a) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0001c5a9) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0001c5a9) mup2_visualizer_pane_g

0xaf70,	// (0x00018435) aid_size_cell_fmradio

0x3ef7,	// (0x000113bc) aid_height_parent_landcape

0xa38f,	// (0x00017854) wml_content_pane_cp

0xa397,	// (0x0001785c) wml_tabs_pane

0xa3a0,	// (0x00017865) popup_wml_miniature_window

0xa3a8,	// (0x0001786d) scroll_pane_cp021

0xa3bc,	// (0x00017881) wml_content_pane_comp8

0x9c71,	// (0x00017136) bg_popup_sub_pane_cp05

0xc178,	// (0x0001963d) popup_wml_miniature_window_g1

0xc180,	// (0x00019645) wml_miniature_view_pane

0x4448,	// (0x0001190d) aid_size_wml_view

0x4450,	// (0x00011915) wml_miniature_view_pane_g1

0x4459,	// (0x0001191e) wml_miniature_view_pane_g2

0x4462,	// (0x00011927) wml_miniature_view_pane_g3

0x446a,	// (0x0001192f) wml_miniature_view_pane_g4

0x4472,	// (0x00011937) wml_miniature_view_pane_g5

0x447a,	// (0x0001193f) wml_miniature_view_pane_g6

0x4482,	// (0x00011947) wml_miniature_view_pane_g7

0x448a,	// (0x0001194f) wml_miniature_view_pane_g8

0x0007,

0xf603,	// (0x0001cac8) wml_miniature_view_pane_g

0xc188,	// (0x0001964d) background_graphic_ParamLimits

0xc188,	// (0x0001964d) background_graphic

0xc194,	// (0x00019659) wml_tabs_2_pane

0xc19d,	// (0x00019662) wml_tabs_3_pane_ParamLimits

0xc19d,	// (0x00019662) wml_tabs_3_pane

0xc1af,	// (0x00019674) wml_tabs_4_pane_ParamLimits

0xc1af,	// (0x00019674) wml_tabs_4_pane

0xc1c5,	// (0x0001968a) wml_tabs_5_pane_ParamLimits

0xc1c5,	// (0x0001968a) wml_tabs_5_pane

0xc1df,	// (0x000196a4) wml_tabs_pane_g2_ParamLimits

0xc1df,	// (0x000196a4) wml_tabs_pane_g2

0xc1f4,	// (0x000196b9) wml_tabs_pane_g3_ParamLimits

0xc1f4,	// (0x000196b9) wml_tabs_pane_g3

0xc209,	// (0x000196ce) wml_tabs_2_active_pane_ParamLimits

0xc209,	// (0x000196ce) wml_tabs_2_active_pane

0xc209,	// (0x000196ce) wml_tabs_2_passive_pane_ParamLimits

0xc209,	// (0x000196ce) wml_tabs_2_passive_pane

0x4492,	// (0x00011957) wml_tabs_3_active_pane_cp_ParamLimits

0x4492,	// (0x00011957) wml_tabs_3_active_pane_cp

0x44a7,	// (0x0001196c) wml_tabs_3_passive_pane_ParamLimits

0x44a7,	// (0x0001196c) wml_tabs_3_passive_pane

0x44ba,	// (0x0001197f) wml_tabs_3_passive_pane_cp_ParamLimits

0x44ba,	// (0x0001197f) wml_tabs_3_passive_pane_cp

0x44d1,	// (0x00011996) tabs_4_active_pane

0x44d9,	// (0x0001199e) tabs_4_passive_pane

0x44e3,	// (0x000119a8) tabs_4_passive_pane_cp

0x44eb,	// (0x000119b0) tabs_4_passive_pane_cp2

0x3c30,	// (0x000110f5) aid_height_text

0xace0,	// (0x000181a5) mup_volume_cont_pane_ParamLimits

0xace0,	// (0x000181a5) mup_volume_cont_pane

0x97a6,	// (0x00016c6b) aid_size_cell_pinb

0x97a6,	// (0x00016c6b) aid_size_list_pinb

0xace0,	// (0x000181a5) mup2_volume_cont_pane_ParamLimits

0xace0,	// (0x000181a5) mup2_volume_cont_pane

0xc217,	// (0x000196dc) mup2_volume_cont_pane_g1_ParamLimits

0xc217,	// (0x000196dc) mup2_volume_cont_pane_g1

0x0e32,	// (0x0000e2f7) aid_size_cell_touch_ParamLimits

0x0e32,	// (0x0000e2f7) aid_size_cell_touch

0x105e,	// (0x0000e523) touch_pane_ParamLimits

0x105e,	// (0x0000e523) touch_pane

0x97a6,	// (0x00016c6b) main_rss2_pane

0xc236,	// (0x000196fb) listscroll_rss2_pane

0xc23f,	// (0x00019704) rss2_navigation_pane

0xc247,	// (0x0001970c) list_rss2_pane

0xaaa7,	// (0x00017f6c) scroll_pane_cp22

0xc24f,	// (0x00019714) rss2_navigation_pane_g1

0xc258,	// (0x0001971d) rss2_navigation_pane_g2

0xc260,	// (0x00019725) rss2_navigation_pane_g3

0x0002,

0xf614,	// (0x0001cad9) rss2_navigation_pane_g

0xc268,	// (0x0001972d) rss2_navigation_pane_t1

0x44f5,	// (0x000119ba) rss2_list_single_pane_ParamLimits

0x44f5,	// (0x000119ba) rss2_list_single_pane

0xc276,	// (0x0001973b) rss2_list_single_pane_t2

0xc284,	// (0x00019749) rss2_list_single_pane_t3_ParamLimits

0xc284,	// (0x00019749) rss2_list_single_pane_t3

0xc2a1,	// (0x00019766) rss2_list_single_pane_t4

0x2ce6,	// (0x000101ab) smil_status_pane_g1

0x981b,	// (0x00016ce0) main_image2_pane_ParamLimits

0x981b,	// (0x00016ce0) main_image2_pane

0xcfb2,	// (0x0001a477) main_camera2_pane_g9_ParamLimits

0xcfb2,	// (0x0001a477) main_camera2_pane_g9

0x4412,	// (0x000118d7) main_camera2_pane_t5_ParamLimits

0x4412,	// (0x000118d7) main_camera2_pane_t5

0xc132,	// (0x000195f7) main_camera2_pane_t6_ParamLimits

0xc132,	// (0x000195f7) main_camera2_pane_t6

0x450f,	// (0x000119d4) main_image2_pane_g1_ParamLimits

0x450f,	// (0x000119d4) main_image2_pane_g1

0x38df,	// (0x00010da4) smil2_video_pane_ParamLimits

0x38df,	// (0x00010da4) smil2_video_pane

0x97c4,	// (0x00016c89) aid_zoom_text_primary_cp

0x9811,	// (0x00016cd6) popup_preview_fixed_window

0xa2f8,	// (0x000177bd) im_reading_pane_g1

0x4404,	// (0x000118c9) cams2_bc_adjust_pane_cp_ParamLimits

0x4404,	// (0x000118c9) cams2_bc_adjust_pane_cp

0xace0,	// (0x000181a5) cams2_bc_adjust_pane_ParamLimits

0xace0,	// (0x000181a5) cams2_bc_adjust_pane

0xa243,	// (0x00017708) cams2_bc_adjust_pane_g1

0x97a6,	// (0x00016c6b) cams2_slider_pane

0xa243,	// (0x00017708) cams2_slider_pane_g1

0xa243,	// (0x00017708) cams2_slider_pane_g2

0x0006,

0xf61b,	// (0x0001cae0) cams2_slider_pane_g

0x10f4,	// (0x0000e5b9) calc_display_pane_ParamLimits

0x1119,	// (0x0000e5de) calc_paper_pane_ParamLimits

0x113c,	// (0x0000e601) grid_calc_pane_ParamLimits

0xa982,	// (0x00017e47) popup_clock_digital_window_t1_ParamLimits

0xaf0d,	// (0x000183d2) main_image_pane_t1

0x10d4,	// (0x0000e599) aid_size_cell_calc_ParamLimits

0x10d4,	// (0x0000e599) aid_size_cell_calc

0x3f49,	// (0x0001140e) popup_blid_sat_info2_window_ParamLimits

0x3f49,	// (0x0001140e) popup_blid_sat_info2_window

0xc2af,	// (0x00019774) aid_size_cell_blid

0xc154,	// (0x00019619) bg_popup_window_pane_cp07

0xc2cc,	// (0x00019791) grid_popup_blid_pane

0xc2d6,	// (0x0001979b) heading_pane_cp05_ParamLimits

0xc2d6,	// (0x0001979b) heading_pane_cp05

0xc3a0,	// (0x00019865) cell_popup_blid_pane_ParamLimits

0xc3a0,	// (0x00019865) cell_popup_blid_pane

0xc3ca,	// (0x0001988f) cell_popup_blid_pane_g1

0xc3d2,	// (0x00019897) cell_popup_blid_pane_t1

0xace0,	// (0x000181a5) mup2_indicator_pane_ParamLimits

0xace0,	// (0x000181a5) mup2_indicator_pane

0x97a6,	// (0x00016c6b) mup2_visualizer_osc_pane

0xc162,	// (0x00019627) mup2_visualizer_spec_pane_ParamLimits

0xc162,	// (0x00019627) mup2_visualizer_spec_pane

0x97a6,	// (0x00016c6b) mup2_spec_half_pane

0x97a6,	// (0x00016c6b) mup2_spec_half_pane_cp

0xc3e0,	// (0x000198a5) mup2_spec_bar_pane_ParamLimits

0xc3e0,	// (0x000198a5) mup2_spec_bar_pane

0xa243,	// (0x00017708) mup2_spec_bar_pane_g1

0xc3ff,	// (0x000198c4) mup2_spec_bar_pane_g2

0x0001,

0xf641,	// (0x0001cb06) mup2_spec_bar_pane_g

0x97a6,	// (0x00016c6b) mup2_osc_middle_pane

0xa243,	// (0x00017708) mup2_visualizer_osc_pane_g1

0x9849,	// (0x00016d0e) popup_number_entry_window_t1_ParamLimits

0x985c,	// (0x00016d21) popup_number_entry_window_t2_ParamLimits

0x986e,	// (0x00016d33) popup_number_entry_window_t3_ParamLimits

0x9880,	// (0x00016d45) popup_number_entry_window_t5_ParamLimits

0x9880,	// (0x00016d45) popup_number_entry_window_t5

0xf085,	// (0x0001c54a) popup_number_entry_window_t_ParamLimits

0x98b5,	// (0x00016d7a) text_title_cp2_ParamLimits

0xade7,	// (0x000182ac) aid_hotspot_pointer_text2_pane

0xae0d,	// (0x000182d2) main_viewer_pane_g9_ParamLimits

0xae0d,	// (0x000182d2) main_viewer_pane_g9

0xa531,	// (0x000179f6) cale_month_pane_t1_ParamLimits

0xa59c,	// (0x00017a61) bg_cale_pane_ParamLimits

0xa5b4,	// (0x00017a79) list_cale_pane_ParamLimits

0xa5c5,	// (0x00017a8a) listscroll_cale_day_pane_t1

0xa5d7,	// (0x00017a9c) scroll_pane_cp09_ParamLimits

0x320f,	// (0x000106d4) main_mup_eq_pane_t1_ParamLimits

0x320f,	// (0x000106d4) main_mup_eq_pane_t1

0x322b,	// (0x000106f0) main_mup_eq_pane_t2_ParamLimits

0x322b,	// (0x000106f0) main_mup_eq_pane_t2

0x3247,	// (0x0001070c) main_mup_eq_pane_t3_ParamLimits

0x3247,	// (0x0001070c) main_mup_eq_pane_t3

0x3265,	// (0x0001072a) main_mup_eq_pane_t4_ParamLimits

0x3265,	// (0x0001072a) main_mup_eq_pane_t4

0x3283,	// (0x00010748) main_mup_eq_pane_t5_ParamLimits

0x3283,	// (0x00010748) main_mup_eq_pane_t5

0x32a1,	// (0x00010766) main_mup_eq_pane_t6_ParamLimits

0x32a1,	// (0x00010766) main_mup_eq_pane_t6

0x32b7,	// (0x0001077c) main_mup_eq_pane_t7_ParamLimits

0x32b7,	// (0x0001077c) main_mup_eq_pane_t7

0x32cd,	// (0x00010792) main_mup_eq_pane_t8_ParamLimits

0x32cd,	// (0x00010792) main_mup_eq_pane_t8

0x32e3,	// (0x000107a8) main_mup_eq_pane_t9_ParamLimits

0x32e3,	// (0x000107a8) main_mup_eq_pane_t9

0x32ff,	// (0x000107c4) main_mup_eq_pane_t10_ParamLimits

0x32ff,	// (0x000107c4) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x0001c8a9) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x0001c8a9) main_mup_eq_pane_t

0x33d4,	// (0x00010899) mup_equalizer_pane_cp5_ParamLimits

0x33ec,	// (0x000108b1) mup_equalizer_pane_cp6_ParamLimits

0x3404,	// (0x000108c9) mup_equalizer_pane_cp7_ParamLimits

0x97a6,	// (0x00016c6b) main_gallery_pane

0xc0a0,	// (0x00019565) smil2_volume_pane

0xc0a8,	// (0x0001956d) smil_status_volume_pane_g1_ParamLimits

0xc0bb,	// (0x00019580) smil_status_volume_pane_g2_ParamLimits

0xc0ce,	// (0x00019593) smil_status_volume_pane_g3_ParamLimits

0xf59a,	// (0x0001ca5f) smil_status_volume_pane_g_ParamLimits

0xc154,	// (0x00019619) bg_popup_window_pane_cp07_ParamLimits

0xc2b7,	// (0x0001977c) blid_firmament_pane

0x981b,	// (0x00016ce0) aid_size_cell_gallery_ParamLimits

0x981b,	// (0x00016ce0) aid_size_cell_gallery

0x981b,	// (0x00016ce0) grid_gallery_pane_ParamLimits

0x981b,	// (0x00016ce0) grid_gallery_pane

0xc154,	// (0x00019619) cell_gallery_pane_ParamLimits

0xc154,	// (0x00019619) cell_gallery_pane

0x981b,	// (0x00016ce0) bg_cell_gallery_focus_pane_ParamLimits

0x981b,	// (0x00016ce0) bg_cell_gallery_focus_pane

0x9f47,	// (0x0001740c) cell_gallery_pane_g1_ParamLimits

0x9f47,	// (0x0001740c) cell_gallery_pane_g1

0x9f47,	// (0x0001740c) cell_gallery_pane_g2_ParamLimits

0x9f47,	// (0x0001740c) cell_gallery_pane_g2

0x9f47,	// (0x0001740c) cell_gallery_pane_g3_ParamLimits

0x9f47,	// (0x0001740c) cell_gallery_pane_g3

0x9f55,	// (0x0001741a) cell_gallery_pane_g4_ParamLimits

0x9f55,	// (0x0001741a) cell_gallery_pane_g4

0x0003,

0xf646,	// (0x0001cb0b) cell_gallery_pane_g_ParamLimits

0xf646,	// (0x0001cb0b) cell_gallery_pane_g

0xc409,	// (0x000198ce) bg_cell_gallery_focus_pane_g1

0xc411,	// (0x000198d6) bg_cell_gallery_focus_pane_g2

0xc419,	// (0x000198de) bg_cell_gallery_focus_pane_g3

0xc421,	// (0x000198e6) bg_cell_gallery_focus_pane_g4

0xc429,	// (0x000198ee) bg_cell_gallery_focus_pane_g5

0xc431,	// (0x000198f6) bg_cell_gallery_focus_pane_g6

0xc439,	// (0x000198fe) bg_cell_gallery_focus_pane_g7

0xc441,	// (0x00019906) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64f,	// (0x0001cb14) bg_cell_gallery_focus_pane_g

0xc449,	// (0x0001990e) aid_firma_cardinal

0xc45d,	// (0x00019922) blid_firmament_pane_t1

0xc474,	// (0x00019939) blid_firmament_pane_t2

0xc48b,	// (0x00019950) blid_firmament_pane_t3

0xc4a2,	// (0x00019967) blid_firmament_pane_t4

0x0003,

0xf660,	// (0x0001cb25) blid_firmament_pane_t

0xc4b9,	// (0x0001997e) blid_sat_info_pane

0xa243,	// (0x00017708) blid_sat_info_pane_g1

0xa243,	// (0x00017708) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x0001c89d) blid_sat_info_pane_g

0xc4c9,	// (0x0001998e) blid_sat_info_pane_t1

0xc4d7,	// (0x0001999c) smil2_volume_content_pane

0xc4e0,	// (0x000199a5) smil2_volume_pane_g1

0xa076,	// (0x0001753b) smil2_volume_content_pane_g1

0xc4e8,	// (0x000199ad) smil2_volume_content_pane_g2

0xc4f1,	// (0x000199b6) smil2_volume_content_pane_g3

0xc4fa,	// (0x000199bf) smil2_volume_content_pane_g4

0xc503,	// (0x000199c8) smil2_volume_content_pane_g5

0xc50c,	// (0x000199d1) smil2_volume_content_pane_g6

0xc515,	// (0x000199da) smil2_volume_content_pane_g7

0xc51e,	// (0x000199e3) smil2_volume_content_pane_g8

0xc527,	// (0x000199ec) smil2_volume_content_pane_g9

0xc530,	// (0x000199f5) smil2_volume_content_pane_g10

0x0009,

0xf669,	// (0x0001cb2e) smil2_volume_content_pane_g

0x175a,	// (0x0000ec1f) cale_week_day_heading_pane_t1_ParamLimits

0x1784,	// (0x0000ec49) cale_week_day_heading_pane_t2_ParamLimits

0x17b3,	// (0x0000ec78) cale_week_day_heading_pane_t3_ParamLimits

0x17e2,	// (0x0000eca7) cale_week_day_heading_pane_t4_ParamLimits

0x1811,	// (0x0000ecd6) cale_week_day_heading_pane_t5_ParamLimits

0x1844,	// (0x0000ed09) cale_week_day_heading_pane_t6_ParamLimits

0x187b,	// (0x0000ed40) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0001c651) cale_week_day_heading_pane_t_ParamLimits

0xa193,	// (0x00017658) bg_cale_side_pane_ParamLimits

0x18a5,	// (0x0000ed6a) cale_week_time_pane_t1_ParamLimits

0x18bf,	// (0x0000ed84) cale_week_time_pane_t2_ParamLimits

0x18d9,	// (0x0000ed9e) cale_week_time_pane_t3_ParamLimits

0x18f3,	// (0x0000edb8) cale_week_time_pane_t4_ParamLimits

0x190d,	// (0x0000edd2) cale_week_time_pane_t5_ParamLimits

0x1927,	// (0x0000edec) cale_week_time_pane_t6_ParamLimits

0x1947,	// (0x0000ee0c) cale_week_time_pane_t7_ParamLimits

0x196d,	// (0x0000ee32) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0001c660) cale_week_time_pane_t_ParamLimits

0x1993,	// (0x0000ee58) cell_cale_week_pane_g2_ParamLimits

0xa193,	// (0x00017658) bg_cale_side_pane_cp01_ParamLimits

0x2ac3,	// (0x0000ff88) cale_month_week_pane_t1_ParamLimits

0x2adc,	// (0x0000ffa1) cale_month_week_pane_t2_ParamLimits

0x2af5,	// (0x0000ffba) cale_month_week_pane_t3_ParamLimits

0x2b0e,	// (0x0000ffd3) cale_month_week_pane_t4_ParamLimits

0x2b27,	// (0x0000ffec) cale_month_week_pane_t5_ParamLimits

0x2b40,	// (0x00010005) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0001c72e) cale_month_week_pane_t_ParamLimits

0xa543,	// (0x00017a08) cell_cale_month_pane_g1_ParamLimits

0x97a6,	// (0x00016c6b) main_cale_event_viewer_pane

0x97a6,	// (0x00016c6b) listscroll_cale_event_viewer_pane

0xc539,	// (0x000199fe) list_cale_ev_pane

0xc541,	// (0x00019a06) scroll_pane_cp023

0x4525,	// (0x000119ea) field_cale_ev_pane_ParamLimits

0x4525,	// (0x000119ea) field_cale_ev_pane

0xc54d,	// (0x00019a12) field_cale_ev_content_pane_ParamLimits

0xc54d,	// (0x00019a12) field_cale_ev_content_pane

0xc559,	// (0x00019a1e) field_cale_ev_pane_g1_ParamLimits

0xc559,	// (0x00019a1e) field_cale_ev_pane_g1

0xc565,	// (0x00019a2a) field_cale_ev_pane_g2_ParamLimits

0xc565,	// (0x00019a2a) field_cale_ev_pane_g2

0xc57d,	// (0x00019a42) field_cale_ev_pane_g3_ParamLimits

0xc57d,	// (0x00019a42) field_cale_ev_pane_g3

0x0002,

0xf67e,	// (0x0001cb43) field_cale_ev_pane_g_ParamLimits

0xf67e,	// (0x0001cb43) field_cale_ev_pane_g

0xc595,	// (0x00019a5a) field_cale_ev_pane_t1_ParamLimits

0xc595,	// (0x00019a5a) field_cale_ev_pane_t1

0x4549,	// (0x00011a0e) field_cale_ev_content_pane_t1_ParamLimits

0x4549,	// (0x00011a0e) field_cale_ev_content_pane_t1

0xad8d,	// (0x00018252) bg_button_pane_cp01

0x1412,	// (0x0000e8d7) listscroll_cale_week_pane_ParamLimits

0xa15b,	// (0x00017620) popup_toolbar_window_cp01

0xa164,	// (0x00017629) listscroll_cale_week_pane_t1_ParamLimits

0x1412,	// (0x0000e8d7) listscroll_cale_day_pane_ParamLimits

0xa15b,	// (0x00017620) popup_toolbar_window_cp02

0xa5c5,	// (0x00017a8a) listscroll_cale_day_pane_t1_ParamLimits

0x1412,	// (0x0000e8d7) main_cale_month_pane_ParamLimits

0xc00b,	// (0x000194d0) popup_toolbar_window_cp03_ParamLimits

0xc00b,	// (0x000194d0) popup_toolbar_window_cp03

0x379d,	// (0x00010c62) main_image_pane_g2_ParamLimits

0x379d,	// (0x00010c62) main_image_pane_g2

0x37ae,	// (0x00010c73) main_image_pane_g3_ParamLimits

0x37ae,	// (0x00010c73) main_image_pane_g3

0x0002,

0xf476,	// (0x0001c93b) main_image_pane_g_ParamLimits

0xf476,	// (0x0001c93b) main_image_pane_g

0xaf0d,	// (0x000183d2) main_image_pane_t1_ParamLimits

0x37bf,	// (0x00010c84) main_image_pane_t2_ParamLimits

0x37bf,	// (0x00010c84) main_image_pane_t2

0x37d1,	// (0x00010c96) main_image_pane_t3_ParamLimits

0x37d1,	// (0x00010c96) main_image_pane_t3

0x37f9,	// (0x00010cbe) main_image_pane_t4_ParamLimits

0x37f9,	// (0x00010cbe) main_image_pane_t4

0x0003,

0xf47d,	// (0x0001c942) main_image_pane_t_ParamLimits

0xf47d,	// (0x0001c942) main_image_pane_t

0x3819,	// (0x00010cde) popup_image_details_window_cp01

0x3823,	// (0x00010ce8) popup_toobar_trans_pane_cp01_ParamLimits

0x3823,	// (0x00010ce8) popup_toobar_trans_pane_cp01

0x403c,	// (0x00011501) popup_image_details_window_ParamLimits

0x403c,	// (0x00011501) popup_image_details_window

0xbfdc,	// (0x000194a1) popup_image_focus_window

0xc124,	// (0x000195e9) camera2_autofocus_pane_ParamLimits

0xc124,	// (0x000195e9) camera2_autofocus_pane

0x97a6,	// (0x00016c6b) bg_popup_sub_pane_cp06

0xc5ac,	// (0x00019a71) popup_image_focus_window_g1

0xc5b4,	// (0x00019a79) popup_image_focus_window_g2

0xc5bc,	// (0x00019a81) popup_image_focus_window_g3

0xc5c4,	// (0x00019a89) popup_image_focus_window_g4

0x0003,

0xf685,	// (0x0001cb4a) popup_image_focus_window_g

0xc5cc,	// (0x00019a91) popup_image_focus_window_t1

0xc5da,	// (0x00019a9f) popup_image_focus_window_t2

0xc5ea,	// (0x00019aaf) popup_image_focus_window_t3

0x0002,

0xf68e,	// (0x0001cb53) popup_image_focus_window_t

0x9f47,	// (0x0001740c) camera2_autofocus_pane_g1

0x981b,	// (0x00016ce0) bg_tb_trans_pane_cp01

0xc5f8,	// (0x00019abd) popup_image_details_window_g1

0xc60b,	// (0x00019ad0) popup_image_details_window_g2

0x0002,

0xf6a0,	// (0x0001cb65) popup_image_details_window_g

0xc634,	// (0x00019af9) popup_image_details_window_t1

0xc646,	// (0x00019b0b) popup_image_details_window_t2

0xc65f,	// (0x00019b24) popup_image_details_window_t3

0xc673,	// (0x00019b38) popup_image_details_window_t4

0xc68e,	// (0x00019b53) popup_image_details_window_t5

0x0004,

0xf6a7,	// (0x0001cb6c) popup_image_details_window_t

0x9fad,	// (0x00017472) bg_calc_paper_pane_ParamLimits

0x97a6,	// (0x00016c6b) grid_highlight_pane_cp013

0x9fc1,	// (0x00017486) list_calc_pane_ParamLimits

0x9fd3,	// (0x00017498) scroll_pane_cp024

0x9fdb,	// (0x000174a0) bg_calc_display_pane_ParamLimits

0x123c,	// (0x0000e701) calc_display_pane_t1_ParamLimits

0x124e,	// (0x0000e713) calc_display_pane_t2_ParamLimits

0x9fe7,	// (0x000174ac) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0001c5d1) calc_display_pane_t_ParamLimits

0x130f,	// (0x0000e7d4) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0001c5ee) cell_calc_pane_g

0x1318,	// (0x0000e7dd) cell_calc_pane_t1

0xa054,	// (0x00017519) grid_highlight_pane_cp02_ParamLimits

0xa06a,	// (0x0001752f) toolbar_button_pane_cp01_ParamLimits

0xa06a,	// (0x0001752f) toolbar_button_pane_cp01

0xaf52,	// (0x00018417) temp_image_control_pane_ParamLimits

0xaf52,	// (0x00018417) temp_image_control_pane

0x981b,	// (0x00016ce0) main_mp3_pane

0xc6a8,	// (0x00019b6d) temp_image_control_pane_g1_ParamLimits

0xc6a8,	// (0x00019b6d) temp_image_control_pane_g1

0xc6b6,	// (0x00019b7b) temp_image_control_pane_g2_ParamLimits

0xc6b6,	// (0x00019b7b) temp_image_control_pane_g2

0xc6c8,	// (0x00019b8d) temp_image_control_pane_g3_ParamLimits

0xc6c8,	// (0x00019b8d) temp_image_control_pane_g3

0x456a,	// (0x00011a2f) temp_image_control_pane_g4_ParamLimits

0x456a,	// (0x00011a2f) temp_image_control_pane_g4

0x0003,

0xf6b2,	// (0x0001cb77) temp_image_control_pane_g_ParamLimits

0xf6b2,	// (0x0001cb77) temp_image_control_pane_g

0xc6a8,	// (0x00019b6d) main_mp3_pane_g1

0x457d,	// (0x00011a42) main_mp3_pane_g2

0x0007,

0xf6bb,	// (0x0001cb80) main_mp3_pane_g

0xc6fd,	// (0x00019bc2) main_mp3_pane_t1

0x9f55,	// (0x0001741a) main_camera_pane_g8_ParamLimits

0x9f55,	// (0x0001741a) main_camera_pane_g8

0x1b55,	// (0x0000f01a) main_video_pane_g7_ParamLimits

0x1b55,	// (0x0000f01a) main_video_pane_g7

0xaccc,	// (0x00018191) main_camera2_pane_t7_ParamLimits

0xaccc,	// (0x00018191) main_camera2_pane_t7

0xa34f,	// (0x00017814) scroll_pane_cp025_ParamLimits

0xa34f,	// (0x00017814) scroll_pane_cp025

0xa363,	// (0x00017828) scroll_pane_cp026_ParamLimits

0xa363,	// (0x00017828) scroll_pane_cp026

0xa372,	// (0x00017837) wml_content_pane_ParamLimits

0x97a6,	// (0x00016c6b) main_touch_calib_pane

0x464f,	// (0x00011b14) main_touch_calib_pane_g1

0x4661,	// (0x00011b26) main_touch_calib_pane_g2

0x4673,	// (0x00011b38) main_touch_calib_pane_g3

0x4685,	// (0x00011b4a) main_touch_calib_pane_g4

0x0003,

0xf6d9,	// (0x0001cb9e) main_touch_calib_pane_g

0x4697,	// (0x00011b5c) main_touch_calib_pane_t1

0x46b1,	// (0x00011b76) main_touch_calib_pane_t2

0x0004,

0xf6e2,	// (0x0001cba7) main_touch_calib_pane_t

0xab22,	// (0x00017fe7) mup_progress_pane_cp02

0xab41,	// (0x00018006) navi_pane_g1

0xaba3,	// (0x00018068) navi_pane_mp_t3

0x981b,	// (0x00016ce0) main_mp3_pane_ParamLimits

0x41f5,	// (0x000116ba) navi_pane_ParamLimits

0xc6a8,	// (0x00019b6d) main_mp3_pane_g1_ParamLimits

0x457d,	// (0x00011a42) main_mp3_pane_g2_ParamLimits

0x4589,	// (0x00011a4e) main_mp3_pane_g3_ParamLimits

0x4589,	// (0x00011a4e) main_mp3_pane_g3

0x4597,	// (0x00011a5c) main_mp3_pane_g4_ParamLimits

0x4597,	// (0x00011a5c) main_mp3_pane_g4

0x9f47,	// (0x0001740c) main_mp3_pane_g5_ParamLimits

0x9f47,	// (0x0001740c) main_mp3_pane_g5

0xc6d8,	// (0x00019b9d) main_mp3_pane_g6_ParamLimits

0xc6d8,	// (0x00019b9d) main_mp3_pane_g6

0xc6e5,	// (0x00019baa) main_mp3_pane_g7_ParamLimits

0xc6e5,	// (0x00019baa) main_mp3_pane_g7

0xc6f1,	// (0x00019bb6) main_mp3_pane_g8_ParamLimits

0xc6f1,	// (0x00019bb6) main_mp3_pane_g8

0xf6bb,	// (0x0001cb80) main_mp3_pane_g_ParamLimits

0x45a3,	// (0x00011a68) main_mp3_pane_t2

0x45b1,	// (0x00011a76) main_mp3_pane_t3

0xc70b,	// (0x00019bd0) main_mp3_pane_t4

0xc719,	// (0x00019bde) main_mp3_pane_t5

0x0005,

0xf6cc,	// (0x0001cb91) main_mp3_pane_t

0xc727,	// (0x00019bec) mup_progress_pane_cp01

0x97c4,	// (0x00016c89) aid_zoom_text_secondary2

0xc539,	// (0x000199fe) list_cale_ev2_pane

0xc541,	// (0x00019a06) scroll_pane_cp023_ParamLimits

0x470b,	// (0x00011bd0) field_cale_ev2_pane_ParamLimits

0x470b,	// (0x00011bd0) field_cale_ev2_pane

0x472f,	// (0x00011bf4) field_cale_ev2_pane_g1_ParamLimits

0x472f,	// (0x00011bf4) field_cale_ev2_pane_g1

0x473b,	// (0x00011c00) field_cale_ev2_pane_g2_ParamLimits

0x473b,	// (0x00011c00) field_cale_ev2_pane_g2

0x4753,	// (0x00011c18) field_cale_ev2_pane_g3_ParamLimits

0x4753,	// (0x00011c18) field_cale_ev2_pane_g3

0x0003,

0xf6ed,	// (0x0001cbb2) field_cale_ev2_pane_g_ParamLimits

0xf6ed,	// (0x0001cbb2) field_cale_ev2_pane_g

0x476b,	// (0x00011c30) field_cale_ev2_pane_t1_ParamLimits

0x476b,	// (0x00011c30) field_cale_ev2_pane_t1

0x4782,	// (0x00011c47) field_cale_ev2_pane_t2_ParamLimits

0x4782,	// (0x00011c47) field_cale_ev2_pane_t2

0x0001,

0xf6f6,	// (0x0001cbbb) field_cale_ev2_pane_t_ParamLimits

0xf6f6,	// (0x0001cbbb) field_cale_ev2_pane_t

0x3635,	// (0x00010afa) main_postcard_pane_g5_ParamLimits

0x3635,	// (0x00010afa) main_postcard_pane_g5

0x364b,	// (0x00010b10) main_postcard_pane_g6_ParamLimits

0x364b,	// (0x00010b10) main_postcard_pane_g6

0x981b,	// (0x00016ce0) camera2_autofocus_pane_cp_ParamLimits

0x981b,	// (0x00016ce0) camera2_autofocus_pane_cp

0x981b,	// (0x00016ce0) main_mup3_pane

0x47e1,	// (0x00011ca6) main_mup3_pane_g1_ParamLimits

0x47e1,	// (0x00011ca6) main_mup3_pane_g1

0x4803,	// (0x00011cc8) main_mup3_pane_g2_ParamLimits

0x4803,	// (0x00011cc8) main_mup3_pane_g2

0x487e,	// (0x00011d43) main_mup3_pane_g3_ParamLimits

0x487e,	// (0x00011d43) main_mup3_pane_g3

0x48e8,	// (0x00011dad) main_mup3_pane_g4_ParamLimits

0x48e8,	// (0x00011dad) main_mup3_pane_g4

0x4952,	// (0x00011e17) main_mup3_pane_g5_ParamLimits

0x4952,	// (0x00011e17) main_mup3_pane_g5

0x49bc,	// (0x00011e81) main_mup3_pane_g6_ParamLimits

0x49bc,	// (0x00011e81) main_mup3_pane_g6

0x9f55,	// (0x0001741a) main_mup3_pane_g7_ParamLimits

0x9f55,	// (0x0001741a) main_mup3_pane_g7

0x0007,

0xf706,	// (0x0001cbcb) main_mup3_pane_g_ParamLimits

0xf706,	// (0x0001cbcb) main_mup3_pane_g

0x4a40,	// (0x00011f05) main_mup3_pane_t1_ParamLimits

0x4a40,	// (0x00011f05) main_mup3_pane_t1

0x4ab2,	// (0x00011f77) main_mup3_pane_t2_ParamLimits

0x4ab2,	// (0x00011f77) main_mup3_pane_t2

0x4b88,	// (0x0001204d) main_mup3_pane_t4_ParamLimits

0x4b88,	// (0x0001204d) main_mup3_pane_t4

0x4be6,	// (0x000120ab) main_mup3_pane_t5_ParamLimits

0x4be6,	// (0x000120ab) main_mup3_pane_t5

0x4caa,	// (0x0001216f) main_mup3_pane_t6_ParamLimits

0x4caa,	// (0x0001216f) main_mup3_pane_t6

0x0005,

0xf717,	// (0x0001cbdc) main_mup3_pane_t_ParamLimits

0xf717,	// (0x0001cbdc) main_mup3_pane_t

0x4d62,	// (0x00012227) mup3_progress_pane_ParamLimits

0x4d62,	// (0x00012227) mup3_progress_pane

0x4dfa,	// (0x000122bf) popup_mup3_control_window_ParamLimits

0x4dfa,	// (0x000122bf) popup_mup3_control_window

0xc73b,	// (0x00019c00) popup_mup3_text_window

0x4e30,	// (0x000122f5) mup3_progress_pane_t1

0x4e4f,	// (0x00012314) mup3_progress_pane_t2

0xc743,	// (0x00019c08) mup3_progress_pane_t3

0x0002,

0xf724,	// (0x0001cbe9) mup3_progress_pane_t

0xc760,	// (0x00019c25) mup_progress_pane_cp03

0x97a6,	// (0x00016c6b) bg_tb_trans_pane_cp04

0x4e6e,	// (0x00012333) mup3_volume_pane

0x4e76,	// (0x0001233b) popup_mup3_control_window_g1

0x4e7f,	// (0x00012344) mup3_volume_pane_g1

0x4e88,	// (0x0001234d) mup3_volume_pane_g2

0x4e91,	// (0x00012356) mup3_volume_pane_g3

0x0002,

0xf72b,	// (0x0001cbf0) mup3_volume_pane_g

0x97a6,	// (0x00016c6b) bg_tb_trans_pane_cp03

0xc770,	// (0x00019c35) popup_mup3_text_window_g1

0xc778,	// (0x00019c3d) popup_mup3_text_window_t1

0xa035,	// (0x000174fa) list_calc_item_pane_g1_ParamLimits

0xc22d,	// (0x000196f2) mup_volume_pane_cp_g1

0x46cb,	// (0x00011b90) main_touch_calib_pane_t3

0x46df,	// (0x00011ba4) main_touch_calib_pane_t4

0x46f5,	// (0x00011bba) main_touch_calib_pane_t5

0x97b0,	// (0x00016c75) aid_cell_size_toolbar2

0x97b8,	// (0x00016c7d) aid_popup3_width_pane

0x97c4,	// (0x00016c89) aid_zoom_text_msg_primary

0x1a43,	// (0x0000ef08) vorec_t7

0x9ff9,	// (0x000174be) bg_calc_paper_pane_g1_ParamLimits

0xa005,	// (0x000174ca) bg_calc_paper_pane_g2_ParamLimits

0xa011,	// (0x000174d6) bg_calc_paper_pane_g3_ParamLimits

0xa01d,	// (0x000174e2) bg_calc_paper_pane_g4_ParamLimits

0xa029,	// (0x000174ee) bg_calc_paper_pane_g5_ParamLimits

0x129b,	// (0x0000e760) bg_calc_paper_pane_g6_ParamLimits

0x12a9,	// (0x0000e76e) bg_calc_paper_pane_g7_ParamLimits

0x12b7,	// (0x0000e77c) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0001c5d8) bg_calc_paper_pane_g_ParamLimits

0x12ca,	// (0x0000e78f) calc_bg_paper_pane_g9_ParamLimits

0x981b,	// (0x00016ce0) image_qvga_pane_ParamLimits

0x981b,	// (0x00016ce0) image_qvga_pane

0x9ecc,	// (0x00017391) bg_popup_sub_pane_cp04_ParamLimits

0xae89,	// (0x0001834e) popup_mup_playback_window_g1_ParamLimits

0xae95,	// (0x0001835a) popup_mup_playback_window_t1_ParamLimits

0xaeaa,	// (0x0001836f) popup_mup_playback_window_t2_ParamLimits

0xf471,	// (0x0001c936) popup_mup_playback_window_t_ParamLimits

0x9f55,	// (0x0001741a) main_mup2_pane_g3_ParamLimits

0x9f55,	// (0x0001741a) main_mup2_pane_g3

0x1d4c,	// (0x0000f211) popup_toolbar_window_cp04

0xb2a5,	// (0x0001876a) popup_call2_audio_second_window_g3_ParamLimits

0xb2a5,	// (0x0001876a) popup_call2_audio_second_window_g3

0xb6bd,	// (0x00018b82) popup_call2_audio_first_window_g4_ParamLimits

0xb6bd,	// (0x00018b82) popup_call2_audio_first_window_g4

0xbce4,	// (0x000191a9) popup_call2_audio_in_window_g4_ParamLimits

0xbce4,	// (0x000191a9) popup_call2_audio_in_window_g4

0x377f,	// (0x00010c44) aid_area_sk_bg_cut_ParamLimits

0x377f,	// (0x00010c44) aid_area_sk_bg_cut

0xaebf,	// (0x00018384) aid_area_sk_bg_cut_2_ParamLimits

0xaebf,	// (0x00018384) aid_area_sk_bg_cut_2

0x97a6,	// (0x00016c6b) aid_placing_details_win

0x97a6,	// (0x00016c6b) aid_placing_details_win_2

0x9f47,	// (0x0001740c) camera2_autofocus_pane_g1_ParamLimits

0x0ff9,	// (0x0000e4be) popup_fixed_preview_cale_window_ParamLimits

0x0ff9,	// (0x0000e4be) popup_fixed_preview_cale_window

0xabf3,	// (0x000180b8) navi_slider_pane_g3

0xabfc,	// (0x000180c1) navi_slider_pane_g4

0xac05,	// (0x000180ca) navi_slider_pane_g5

0xabf3,	// (0x000180b8) navi_slider_pane_g6

0xac0e,	// (0x000180d3) navi_slider_pane_g7

0xad52,	// (0x00018217) mup_scale_pane_g3

0xad5b,	// (0x00018220) mup_scale_pane_g4

0xad64,	// (0x00018229) mup_scale_pane_g5

0x341c,	// (0x000108e1) mup_scale_pane_g6

0x3425,	// (0x000108ea) mup_scale_pane_g7

0xa243,	// (0x00017708) cams2_slider_pane_g3

0xa243,	// (0x00017708) cams2_slider_pane_g4

0xa243,	// (0x00017708) cams2_slider_pane_g5

0xa243,	// (0x00017708) cams2_slider_pane_g6

0xa243,	// (0x00017708) cams2_slider_pane_g7

0xa243,	// (0x00017708) camera2_autofocus_pane_cp_g1

0xbfbc,	// (0x00019481) bg_popup_preview_window_pane_cp02_ParamLimits

0xbfbc,	// (0x00019481) bg_popup_preview_window_pane_cp02

0xc786,	// (0x00019c4b) list_fp_cale_pane_ParamLimits

0xc786,	// (0x00019c4b) list_fp_cale_pane

0xc792,	// (0x00019c57) popup_fixed_preview_cale_window_t1_ParamLimits

0xc792,	// (0x00019c57) popup_fixed_preview_cale_window_t1

0x4e9a,	// (0x0001235f) popup_fixed_preview_cale_window_t2_ParamLimits

0x4e9a,	// (0x0001235f) popup_fixed_preview_cale_window_t2

0x4eaf,	// (0x00012374) popup_fixed_preview_cale_window_t3_ParamLimits

0x4eaf,	// (0x00012374) popup_fixed_preview_cale_window_t3

0x0002,

0xf732,	// (0x0001cbf7) popup_fixed_preview_cale_window_t_ParamLimits

0xf732,	// (0x0001cbf7) popup_fixed_preview_cale_window_t

0x4ec6,	// (0x0001238b) list_single_fp_cale_pane_ParamLimits

0x4ec6,	// (0x0001238b) list_single_fp_cale_pane

0xc7b0,	// (0x00019c75) list_single_fp_cale_pane_g1_ParamLimits

0xc7b0,	// (0x00019c75) list_single_fp_cale_pane_g1

0xc7bc,	// (0x00019c81) list_single_fp_cale_pane_g2_ParamLimits

0xc7bc,	// (0x00019c81) list_single_fp_cale_pane_g2

0x0002,

0xf739,	// (0x0001cbfe) list_single_fp_cale_pane_g_ParamLimits

0xf739,	// (0x0001cbfe) list_single_fp_cale_pane_g

0xc7d5,	// (0x00019c9a) list_single_fp_cale_pane_t1_ParamLimits

0xc7d5,	// (0x00019c9a) list_single_fp_cale_pane_t1

0xc7e7,	// (0x00019cac) list_single_fp_cale_pane_t2_ParamLimits

0xc7e7,	// (0x00019cac) list_single_fp_cale_pane_t2

0x0001,

0xf740,	// (0x0001cc05) list_single_fp_cale_pane_t_ParamLimits

0xf740,	// (0x0001cc05) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x97a6,	// (0x00016c6b) main_dialer_pane

0x97a6,	// (0x00016c6b) aid_cell_size_keypad

0x97a6,	// (0x00016c6b) dialer_ne_pane

0x97a6,	// (0x00016c6b) grid_dialer_command_1_pane

0x97a6,	// (0x00016c6b) grid_dialer_command_2_pane

0x97a6,	// (0x00016c6b) grid_dialer_keypad_pane

0x4ede,	// (0x000123a3) bg_popup_call_pane_cp06_ParamLimits

0x4ede,	// (0x000123a3) bg_popup_call_pane_cp06

0x4ede,	// (0x000123a3) dialer_ne_clear_pane_ParamLimits

0x4ede,	// (0x000123a3) dialer_ne_clear_pane

0xa243,	// (0x00017708) dialer_ne_pane_g1

0xaccc,	// (0x00018191) dialer_ne_pane_t1_ParamLimits

0xaccc,	// (0x00018191) dialer_ne_pane_t1

0x4eec,	// (0x000123b1) dialer_ne_pane_t2_ParamLimits

0x4eec,	// (0x000123b1) dialer_ne_pane_t2

0x4f14,	// (0x000123d9) dialer_ne_pane_t3_ParamLimits

0x4f14,	// (0x000123d9) dialer_ne_pane_t3

0x0002,

0xf745,	// (0x0001cc0a) dialer_ne_pane_t_ParamLimits

0xf745,	// (0x0001cc0a) dialer_ne_pane_t

0x4f14,	// (0x000123d9) dialer_ne_pane_t3_copy1_ParamLimits

0x4f14,	// (0x000123d9) dialer_ne_pane_t3_copy1

0xc81a,	// (0x00019cdf) cell_dialer_keypad_pane_ParamLimits

0xc81a,	// (0x00019cdf) cell_dialer_keypad_pane

0x981b,	// (0x00016ce0) cell_dialer_command_1_pane_ParamLimits

0x981b,	// (0x00016ce0) cell_dialer_command_1_pane

0xc831,	// (0x00019cf6) cell_dialer_command_2_pane_ParamLimits

0xc831,	// (0x00019cf6) cell_dialer_command_2_pane

0x981b,	// (0x00016ce0) bg_button_pane_cp02_ParamLimits

0x981b,	// (0x00016ce0) bg_button_pane_cp02

0x9f47,	// (0x0001740c) cell_dialer_keypad_pane_g1_ParamLimits

0x9f47,	// (0x0001740c) cell_dialer_keypad_pane_g1

0x981b,	// (0x00016ce0) bg_button_pane_cp03_ParamLimits

0x981b,	// (0x00016ce0) bg_button_pane_cp03

0x9f47,	// (0x0001740c) cell_dialer_command_1_pane_g1_ParamLimits

0x9f47,	// (0x0001740c) cell_dialer_command_1_pane_g1

0x97a6,	// (0x00016c6b) bg_button_pane_cp04

0xa243,	// (0x00017708) cell_dialer_command_2_pane_g1

0x97a6,	// (0x00016c6b) bg_button_pane_cp06

0xa243,	// (0x00017708) dialer_ne_clear_pane_g1

0x312b,	// (0x000105f0) navi_pane_g2

0x3159,	// (0x0001061e) navi_pane_g3

0x0002,

0xf374,	// (0x0001c839) navi_pane_g

0x3184,	// (0x00010649) navi_pane_mv_g2

0x31ab,	// (0x00010670) navi_pane_mv_g5

0x31b3,	// (0x00010678) navi_pane_mv_t1

0x9fdb,	// (0x000174a0) main_clock2_pane

0x981b,	// (0x00016ce0) main_clock2_list_pane_ParamLimits

0x981b,	// (0x00016ce0) main_clock2_list_pane

0x4fa5,	// (0x0001246a) main_clock2_pane_t1_ParamLimits

0x4fa5,	// (0x0001246a) main_clock2_pane_t1

0x4fe0,	// (0x000124a5) main_clock2_pane_t2_ParamLimits

0x4fe0,	// (0x000124a5) main_clock2_pane_t2

0x0004,

0xf751,	// (0x0001cc16) main_clock2_pane_t_ParamLimits

0xf751,	// (0x0001cc16) main_clock2_pane_t

0x507f,	// (0x00012544) popup_clock_analogue_window_cp03_ParamLimits

0x507f,	// (0x00012544) popup_clock_analogue_window_cp03

0x50a4,	// (0x00012569) popup_clock_digital_window_cp02_ParamLimits

0x50a4,	// (0x00012569) popup_clock_digital_window_cp02

0x511d,	// (0x000125e2) main_clock2_list_single_pane_ParamLimits

0x511d,	// (0x000125e2) main_clock2_list_single_pane

0xa1ee,	// (0x000176b3) list_highlight_pane_cp05

0xc872,	// (0x00019d37) main_clock2_list_single_pane_t1

0x1d4c,	// (0x0000f211) popup_toolbar_window_cp04_ParamLimits

0x9f55,	// (0x0001741a) camera2_autofocus_pane_g2_ParamLimits

0x9f55,	// (0x0001741a) camera2_autofocus_pane_g2

0x9f55,	// (0x0001741a) camera2_autofocus_pane_g3_ParamLimits

0x9f55,	// (0x0001741a) camera2_autofocus_pane_g3

0x9f55,	// (0x0001741a) camera2_autofocus_pane_g4_ParamLimits

0x9f55,	// (0x0001741a) camera2_autofocus_pane_g4

0x9f55,	// (0x0001741a) camera2_autofocus_pane_g5_ParamLimits

0x9f55,	// (0x0001741a) camera2_autofocus_pane_g5

0x0004,

0xf695,	// (0x0001cb5a) camera2_autofocus_pane_g_ParamLimits

0xf695,	// (0x0001cb5a) camera2_autofocus_pane_g

0x4797,	// (0x00011c5c) camera2_autofocus_pane_cp_g2

0x479f,	// (0x00011c64) camera2_autofocus_pane_cp_g3

0x47a7,	// (0x00011c6c) camera2_autofocus_pane_cp_g4

0x47af,	// (0x00011c74) camera2_autofocus_pane_cp_g5

0x0004,

0xf6fb,	// (0x0001cbc0) camera2_autofocus_pane_cp_g

0x97a6,	// (0x00016c6b) popup_dialer_spcha_window

0x97a6,	// (0x00016c6b) bg_popup_sub_pane_cp07

0x97a6,	// (0x00016c6b) list_spcha_pane

0xc880,	// (0x00019d45) list_single_spcha_pane_ParamLimits

0xc880,	// (0x00019d45) list_single_spcha_pane

0x97a6,	// (0x00016c6b) list_highlight_pane_cp06

0xa7a9,	// (0x00017c6e) list_single_spcha_pane_t1

0xba8e,	// (0x00018f53) popup_call2_audio_out_window_g4_ParamLimits

0xba8e,	// (0x00018f53) popup_call2_audio_out_window_g4

0x97a6,	// (0x00016c6b) main_imed2_pane

0xbfe6,	// (0x000194ab) popup_imed_adjust2_window

0x4054,	// (0x00011519) popup_imed_trans_window_ParamLimits

0x4054,	// (0x00011519) popup_imed_trans_window

0xc302,	// (0x000197c7) popup_blid_sat_info2_window_t1

0xc310,	// (0x000197d5) popup_blid_sat_info2_window_t2

0x000a,

0xf62a,	// (0x0001caef) popup_blid_sat_info2_window_t

0x51d8,	// (0x0001269d) aid_size_cell_colour_35

0x51f8,	// (0x000126bd) aid_size_cell_colour_112

0x5218,	// (0x000126dd) aid_size_cell_effect

0xace0,	// (0x000181a5) bg_tb_trans_pane_cp02

0xa6ce,	// (0x00017b93) heading_imed_pane

0x5238,	// (0x000126fd) listscroll_imed_pane

0xc892,	// (0x00019d57) heading_imed_pane_g1

0xc89a,	// (0x00019d5f) heading_imed_pane_t1

0xc8a8,	// (0x00019d6d) grid_imed_colour_35_pane_ParamLimits

0xc8a8,	// (0x00019d6d) grid_imed_colour_35_pane

0x5244,	// (0x00012709) grid_imed_effect_pane

0xc8c4,	// (0x00019d89) list_imed_aspect_pane

0x525b,	// (0x00012720) scroll_pane_cp027_ParamLimits

0x525b,	// (0x00012720) scroll_pane_cp027

0x526c,	// (0x00012731) cell_imed_effect_pane_ParamLimits

0x526c,	// (0x00012731) cell_imed_effect_pane

0xc8cc,	// (0x00019d91) cell_imed_colour_pane_ParamLimits

0xc8cc,	// (0x00019d91) cell_imed_colour_pane

0xc916,	// (0x00019ddb) cell_imed_colour_pane_g1_ParamLimits

0xc916,	// (0x00019ddb) cell_imed_colour_pane_g1

0xc927,	// (0x00019dec) hgihlgiht_grid_pane_cp016_ParamLimits

0xc927,	// (0x00019dec) hgihlgiht_grid_pane_cp016

0x5297,	// (0x0001275c) cell_imed_effect_pane_g1

0x529f,	// (0x00012764) grid_highlight_pane_cp017

0xc938,	// (0x00019dfd) list_imed_single_pane_ParamLimits

0xc938,	// (0x00019dfd) list_imed_single_pane

0x97a6,	// (0x00016c6b) list_highlight_pane_cp07

0xc94c,	// (0x00019e11) list_imed_aspect_pane_comp1_t1

0xace0,	// (0x000181a5) bg_tb_trans_pane_cp05

0xc96e,	// (0x00019e33) popup_imed_adjust2_window_g1

0xc995,	// (0x00019e5a) popup_imed_adjust2_window_t1

0xc9ad,	// (0x00019e72) slider_imed_adjust_pane

0xc9c1,	// (0x00019e86) slider_imed_adjust_pane_g1

0xc9d1,	// (0x00019e96) slider_imed_adjust_pane_g2

0xc9e1,	// (0x00019ea6) slider_imed_adjust_pane_g3

0xc9f2,	// (0x00019eb7) slider_imed_adjust_pane_g4

0x0003,

0xf76e,	// (0x0001cc33) slider_imed_adjust_pane_g

0x52a8,	// (0x0001276d) aid_size_cell_clipart2

0xca03,	// (0x00019ec8) grid_imed_clipart_pane

0xca0d,	// (0x00019ed2) scroll_pane_cp031

0x52b4,	// (0x00012779) cell_imed_clipart_pane_ParamLimits

0x52b4,	// (0x00012779) cell_imed_clipart_pane

0x52d1,	// (0x00012796) cell_imed_clipart_pane_g1

0x97a6,	// (0x00016c6b) grid_highlight_pane_cp014

0x4f83,	// (0x00012448) main_clock2_pane_g1_ParamLimits

0x4f83,	// (0x00012448) main_clock2_pane_g1

0x50c4,	// (0x00012589) aid_call2_pane_cp10

0x50d6,	// (0x0001259b) aid_call_pane_cp10

0xab16,	// (0x00017fdb) popup_clock_analogue_window_cp10_g1

0xab16,	// (0x00017fdb) popup_clock_analogue_window_cp10_g2

0x50e8,	// (0x000125ad) popup_clock_analogue_window_cp10_g3

0x50e8,	// (0x000125ad) popup_clock_analogue_window_cp10_g4

0xab16,	// (0x00017fdb) popup_clock_analogue_window_cp10_g5

0x0004,

0xf75c,	// (0x0001cc21) popup_clock_analogue_window_cp10_g

0x50fe,	// (0x000125c3) popup_clock_analogue_window_cp10_t1

0x512f,	// (0x000125f4) clock_digital_number_pane_cp10_ParamLimits

0x512f,	// (0x000125f4) clock_digital_number_pane_cp10

0x5149,	// (0x0001260e) clock_digital_number_pane_cp11_ParamLimits

0x5149,	// (0x0001260e) clock_digital_number_pane_cp11

0x5163,	// (0x00012628) clock_digital_number_pane_cp12_ParamLimits

0x5163,	// (0x00012628) clock_digital_number_pane_cp12

0x517f,	// (0x00012644) clock_digital_number_pane_cp13_ParamLimits

0x517f,	// (0x00012644) clock_digital_number_pane_cp13

0x519b,	// (0x00012660) clock_digital_separator_pane_cp10_ParamLimits

0x519b,	// (0x00012660) clock_digital_separator_pane_cp10

0x51b7,	// (0x0001267c) popup_clock_digital_window_cp02_t1_ParamLimits

0x51b7,	// (0x0001267c) popup_clock_digital_window_cp02_t1

0x9ec4,	// (0x00017389) clock_digital_number_pane_cp10_g1

0x9ec4,	// (0x00017389) clock_digital_number_pane_cp10_g2

0x0001,

0xf777,	// (0x0001cc3c) clock_digital_number_pane_cp10_g

0x9ec4,	// (0x00017389) clock_digital_separator_pane_cp10_g1

0x9ec4,	// (0x00017389) clock_digital_separator_pane_g2_cp10

0xabb1,	// (0x00018076) navi_pane_vded_g4

0xabba,	// (0x0001807f) navi_pane_vded_g5

0xabc3,	// (0x00018088) navi_pane_vded_t1

0x97a6,	// (0x00016c6b) main_vded_pane

0x52da,	// (0x0001279f) main_vded_pane_g1

0x52e6,	// (0x000127ab) main_vded_pane_g2

0x52f2,	// (0x000127b7) main_vded_pane_g3

0x0002,

0xf77c,	// (0x0001cc41) main_vded_pane_g

0x52fe,	// (0x000127c3) main_vded_pane_t1

0x530c,	// (0x000127d1) main_vded_pane_t2

0x0001,

0xf783,	// (0x0001cc48) main_vded_pane_t

0x531a,	// (0x000127df) vded_slider_pane

0x5324,	// (0x000127e9) vded_video_pane

0xca15,	// (0x00019eda) vded_video_pane_g1

0x5330,	// (0x000127f5) vded_video_pane_g2

0xa243,	// (0x00017708) vded_video_pane_g3

0x0002,

0xf788,	// (0x0001cc4d) vded_video_pane_g

0xca1f,	// (0x00019ee4) vded_slider_pane_g1

0xc22d,	// (0x000196f2) vded_slider_pane_g2

0xca28,	// (0x00019eed) vded_slider_pane_g3

0xca31,	// (0x00019ef6) vded_slider_pane_g4

0xca3a,	// (0x00019eff) vded_slider_pane_g5

0x0004,

0xf78f,	// (0x0001cc54) vded_slider_pane_g

0x4de4,	// (0x000122a9) mup3_rocker_pane_ParamLimits

0x4de4,	// (0x000122a9) mup3_rocker_pane

0x5339,	// (0x000127fe) mup3_control_keys_pane_g1

0x5341,	// (0x00012806) mup3_control_keys_pane_g2

0x5349,	// (0x0001280e) mup3_control_keys_pane_g3

0x5351,	// (0x00012816) mup3_control_keys_pane_g4

0x0003,

0xf79a,	// (0x0001cc5f) mup3_control_keys_pane_g

0x102e,	// (0x0000e4f3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x102e,	// (0x0000e4f3) popup_toolbar2_fixed_window_cp01

0x4e1a,	// (0x000122df) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4e1a,	// (0x000122df) popup_toolbar2_fixed_window_cp02

0xb417,	// (0x000188dc) popup_call2_audio_second_window_t4_ParamLimits

0xb417,	// (0x000188dc) popup_call2_audio_second_window_t4

0xb953,	// (0x00018e18) popup_call2_audio_first_window_t6_ParamLimits

0xb953,	// (0x00018e18) popup_call2_audio_first_window_t6

0xbb91,	// (0x00019056) popup_call2_audio_out_window_t6_ParamLimits

0xbb91,	// (0x00019056) popup_call2_audio_out_window_t6

0x97a6,	// (0x00016c6b) main_vitu_pane

0x981b,	// (0x00016ce0) aid_size_cell_itu_ParamLimits

0x981b,	// (0x00016ce0) aid_size_cell_itu

0x981b,	// (0x00016ce0) bg_popup_window_pane_cp08_ParamLimits

0x981b,	// (0x00016ce0) bg_popup_window_pane_cp08

0x981b,	// (0x00016ce0) field_vitu_entry_pane_ParamLimits

0x981b,	// (0x00016ce0) field_vitu_entry_pane

0x981b,	// (0x00016ce0) grid_vitu_function_pane_ParamLimits

0x981b,	// (0x00016ce0) grid_vitu_function_pane

0x981b,	// (0x00016ce0) grid_vitu_itu_pane_ParamLimits

0x981b,	// (0x00016ce0) grid_vitu_itu_pane

0x981b,	// (0x00016ce0) cell_vitu_itu_pane_ParamLimits

0x981b,	// (0x00016ce0) cell_vitu_itu_pane

0x981b,	// (0x00016ce0) cell_vitu_function_pane_ParamLimits

0x981b,	// (0x00016ce0) cell_vitu_function_pane

0x981b,	// (0x00016ce0) bg_popup_sub_pane_cp08_ParamLimits

0x981b,	// (0x00016ce0) bg_popup_sub_pane_cp08

0xa215,	// (0x000176da) field_vitu_entry_pane_t1_ParamLimits

0xa215,	// (0x000176da) field_vitu_entry_pane_t1

0xca43,	// (0x00019f08) field_vitu_entry_pane_t2_ParamLimits

0xca43,	// (0x00019f08) field_vitu_entry_pane_t2

0x0001,

0xf7a3,	// (0x0001cc68) field_vitu_entry_pane_t_ParamLimits

0xf7a3,	// (0x0001cc68) field_vitu_entry_pane_t

0xc154,	// (0x00019619) bg_button_pane_cp05_ParamLimits

0xc154,	// (0x00019619) bg_button_pane_cp05

0xca60,	// (0x00019f25) cell_vitu_itu_pane_g1

0xacb8,	// (0x0001817d) cell_vitu_itu_pane_t1_ParamLimits

0xacb8,	// (0x0001817d) cell_vitu_itu_pane_t1

0xacb8,	// (0x0001817d) cell_vitu_itu_pane_t2_ParamLimits

0xacb8,	// (0x0001817d) cell_vitu_itu_pane_t2

0x0002,

0xf7a8,	// (0x0001cc6d) cell_vitu_itu_pane_t_ParamLimits

0xf7a8,	// (0x0001cc6d) cell_vitu_itu_pane_t

0x97a6,	// (0x00016c6b) bg_button_pane_cp07

0xa243,	// (0x00017708) cell_vitu_function_pane_g1

0x9f85,	// (0x0001744a) main_calc_pane_g1

0x0e56,	// (0x0000e31b) aid_visual_content_pane

0x97a6,	// (0x00016c6b) main_vradio_pane

0x9f47,	// (0x0001740c) main_vradio_pane_g1_ParamLimits

0x9f47,	// (0x0001740c) main_vradio_pane_g1

0x9f55,	// (0x0001741a) main_vradio_pane_g2_ParamLimits

0x9f55,	// (0x0001741a) main_vradio_pane_g2

0x0001,

0xf7af,	// (0x0001cc74) main_vradio_pane_g_ParamLimits

0xf7af,	// (0x0001cc74) main_vradio_pane_g

0xa215,	// (0x000176da) main_vradio_pane_t1_ParamLimits

0xa215,	// (0x000176da) main_vradio_pane_t1

0xa215,	// (0x000176da) main_vradio_pane_t2_ParamLimits

0xa215,	// (0x000176da) main_vradio_pane_t2

0xaccc,	// (0x00018191) main_vradio_pane_t3_ParamLimits

0xaccc,	// (0x00018191) main_vradio_pane_t3

0x0002,

0xf7b4,	// (0x0001cc79) main_vradio_pane_t_ParamLimits

0xf7b4,	// (0x0001cc79) main_vradio_pane_t

0x981b,	// (0x00016ce0) vradio_rocker_control_pane_ParamLimits

0x981b,	// (0x00016ce0) vradio_rocker_control_pane

0x981b,	// (0x00016ce0) vradio_station_info_pane_ParamLimits

0x981b,	// (0x00016ce0) vradio_station_info_pane

0x981b,	// (0x00016ce0) vradio_frequency_info_pane_ParamLimits

0x981b,	// (0x00016ce0) vradio_frequency_info_pane

0xa243,	// (0x00017708) vradio_station_info_pane_g1

0xacb8,	// (0x0001817d) vradio_station_info_pane_t1_ParamLimits

0xacb8,	// (0x0001817d) vradio_station_info_pane_t1

0xaccc,	// (0x00018191) vradio_station_info_pane_t2_ParamLimits

0xaccc,	// (0x00018191) vradio_station_info_pane_t2

0x0001,

0xf7bb,	// (0x0001cc80) vradio_station_info_pane_t_ParamLimits

0xf7bb,	// (0x0001cc80) vradio_station_info_pane_t

0x97a6,	// (0x00016c6b) vradio_tuning_pane

0x5361,	// (0x00012826) vradio_rocker_control_pane_g1

0xca7c,	// (0x00019f41) vradio_rocker_control_pane_g2

0x536b,	// (0x00012830) vradio_rocker_control_pane_g3

0x5375,	// (0x0001283a) vradio_rocker_control_pane_g4

0x537f,	// (0x00012844) vradio_rocker_control_pane_g5

0x0004,

0xf7c0,	// (0x0001cc85) vradio_rocker_control_pane_g

0xa243,	// (0x00017708) vradio_frequency_info_pane_g1

0xa215,	// (0x000176da) vradio_frequency_info_pane_t1_ParamLimits

0xa215,	// (0x000176da) vradio_frequency_info_pane_t1

0x5389,	// (0x0001284e) vradio_tuning_pane_g1

0x5394,	// (0x00012859) vradio_tuning_pane_t1

0x97d4,	// (0x00016c99) area_side_right_pane_ParamLimits

0x97d4,	// (0x00016c99) area_side_right_pane

0xbf83,	// (0x00019448) status_small_pane_g1

0xbf8b,	// (0x00019450) status_small_pane_g2

0xbf94,	// (0x00019459) status_small_pane_g3

0xbf9d,	// (0x00019462) status_small_pane_g4

0x0003,

0xf58c,	// (0x0001ca51) status_small_pane_g

0xbfa6,	// (0x0001946b) status_small_pane_t1

0x97a6,	// (0x00016c6b) main_video3_pane

0xca84,	// (0x00019f49) cams_zoom_vslider_pane

0xca8c,	// (0x00019f51) image3_wide_pane_ParamLimits

0xca8c,	// (0x00019f51) image3_wide_pane

0xcaa6,	// (0x00019f6b) image3_wide_small_pane

0xcab2,	// (0x00019f77) main_video3_pane_g1_ParamLimits

0xcab2,	// (0x00019f77) main_video3_pane_g1

0xcace,	// (0x00019f93) main_video3_pane_g2_ParamLimits

0xcace,	// (0x00019f93) main_video3_pane_g2

0x0001,

0xf7cb,	// (0x0001cc90) main_video3_pane_g_ParamLimits

0xf7cb,	// (0x0001cc90) main_video3_pane_g

0xcaea,	// (0x00019faf) main_video3_pane_t1_ParamLimits

0xcaea,	// (0x00019faf) main_video3_pane_t1

0xcb15,	// (0x00019fda) main_video3_pane_t2_ParamLimits

0xcb15,	// (0x00019fda) main_video3_pane_t2

0xcb42,	// (0x0001a007) main_video3_pane_t3_ParamLimits

0xcb42,	// (0x0001a007) main_video3_pane_t3

0x0002,

0xf7d0,	// (0x0001cc95) main_video3_pane_t_ParamLimits

0xf7d0,	// (0x0001cc95) main_video3_pane_t

0xcb6f,	// (0x0001a034) cams_zoom_vslider_pane_g1

0xcb78,	// (0x0001a03d) cams_zoom_vslider_pane_g2

0x0001,

0xf7d7,	// (0x0001cc9c) cams_zoom_vslider_pane_g

0xcb80,	// (0x0001a045) small_slider_vertical_pane

0xa243,	// (0x00017708) small_slider_vertical_pane_g1

0xa243,	// (0x00017708) small_slider_vertical_pane_g2

0xcb88,	// (0x0001a04d) small_slider_vertical_pane_g3

0x0002,

0xf7dc,	// (0x0001cca1) small_slider_vertical_pane_g

0x97a6,	// (0x00016c6b) main_hwr_training_pane

0xcb91,	// (0x0001a056) hwr_training_instruct_pane_ParamLimits

0xcb91,	// (0x0001a056) hwr_training_instruct_pane

0x53a3,	// (0x00012868) hwr_training_navi_pane_ParamLimits

0x53a3,	// (0x00012868) hwr_training_navi_pane

0x53c2,	// (0x00012887) hwr_training_write_pane_ParamLimits

0x53c2,	// (0x00012887) hwr_training_write_pane

0x97a6,	// (0x00016c6b) bg_frame_shadow_pane

0xcbc8,	// (0x0001a08d) hwr_training_write_pane_g1

0xcbd0,	// (0x0001a095) hwr_training_write_pane_g2

0xcbd8,	// (0x0001a09d) hwr_training_write_pane_g3

0xcbe0,	// (0x0001a0a5) hwr_training_write_pane_g4

0xcbe8,	// (0x0001a0ad) hwr_training_write_pane_g5

0xcbf0,	// (0x0001a0b5) hwr_training_write_pane_g6

0xcbf8,	// (0x0001a0bd) hwr_training_write_pane_g7

0x0006,

0xf7e3,	// (0x0001cca8) hwr_training_write_pane_g

0xcc00,	// (0x0001a0c5) hwr_training_navi_pane_g1_ParamLimits

0xcc00,	// (0x0001a0c5) hwr_training_navi_pane_g1

0xcc12,	// (0x0001a0d7) hwr_training_navi_pane_g2_ParamLimits

0xcc12,	// (0x0001a0d7) hwr_training_navi_pane_g2

0xcc24,	// (0x0001a0e9) hwr_training_navi_pane_g3_ParamLimits

0xcc24,	// (0x0001a0e9) hwr_training_navi_pane_g3

0xcc34,	// (0x0001a0f9) hwr_training_navi_pane_g4_ParamLimits

0xcc34,	// (0x0001a0f9) hwr_training_navi_pane_g4

0x0004,

0xf7f2,	// (0x0001ccb7) hwr_training_navi_pane_g_ParamLimits

0xf7f2,	// (0x0001ccb7) hwr_training_navi_pane_g

0xcc41,	// (0x0001a106) hwr_training_navi_pane_t1

0x540a,	// (0x000128cf) list_single_hwr_training_instruct_pane_ParamLimits

0x540a,	// (0x000128cf) list_single_hwr_training_instruct_pane

0xcc4f,	// (0x0001a114) list_single_hwr_training_instruct_pane_t1

0xc409,	// (0x000198ce) bg_frame_shadow_pane_g1

0xcc5e,	// (0x0001a123) bg_frame_shadow_pane_g2

0xcc66,	// (0x0001a12b) bg_frame_shadow_pane_g3

0xcc6e,	// (0x0001a133) bg_frame_shadow_pane_g4

0xcc76,	// (0x0001a13b) bg_frame_shadow_pane_g5

0xcc7e,	// (0x0001a143) bg_frame_shadow_pane_g6

0xcc86,	// (0x0001a14b) bg_frame_shadow_pane_g7

0xa0b7,	// (0x0001757c) bg_frame_shadow_pane_g8

0x0007,

0xf7fd,	// (0x0001ccc2) bg_frame_shadow_pane_g

0x97a6,	// (0x00016c6b) main_video_tele_dialer_pane

0x5426,	// (0x000128eb) aid_size_cell_video_keypad_ParamLimits

0x5426,	// (0x000128eb) aid_size_cell_video_keypad

0x5440,	// (0x00012905) grid_video_dialer_keypad_pane_ParamLimits

0x5440,	// (0x00012905) grid_video_dialer_keypad_pane

0x548c,	// (0x00012951) video_down_pane_cp_ParamLimits

0x548c,	// (0x00012951) video_down_pane_cp

0x54be,	// (0x00012983) cell_video_dialer_keypad_pane_ParamLimits

0x54be,	// (0x00012983) cell_video_dialer_keypad_pane

0xcc8e,	// (0x0001a153) bg_button_pane_cp08_ParamLimits

0xcc8e,	// (0x0001a153) bg_button_pane_cp08

0x54e4,	// (0x000129a9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x54e4,	// (0x000129a9) cell_video_dialer_keypad_pane_g1

0x4dce,	// (0x00012293) mup3_rocker2_pane_ParamLimits

0x4dce,	// (0x00012293) mup3_rocker2_pane

0xa243,	// (0x00017708) mup3_rocker2_pane_g1

0x3f15,	// (0x000113da) main_dialer2_pane

0x97a6,	// (0x00016c6b) main_mp4_pane

0xccb8,	// (0x0001a17d) main_mp4_pane_g1_ParamLimits

0xccb8,	// (0x0001a17d) main_mp4_pane_g1

0xccb8,	// (0x0001a17d) main_mp4_pane_g2_ParamLimits

0xccb8,	// (0x0001a17d) main_mp4_pane_g2

0x551f,	// (0x000129e4) main_mp4_pane_g3_ParamLimits

0x551f,	// (0x000129e4) main_mp4_pane_g3

0xccc6,	// (0x0001a18b) main_mp4_pane_g4_ParamLimits

0xccc6,	// (0x0001a18b) main_mp4_pane_g4

0xccf4,	// (0x0001a1b9) main_mp4_pane_g5_ParamLimits

0xccf4,	// (0x0001a1b9) main_mp4_pane_g5

0x0007,

0xf81d,	// (0x0001cce2) main_mp4_pane_g_ParamLimits

0xf81d,	// (0x0001cce2) main_mp4_pane_g

0xcd68,	// (0x0001a22d) main_mp4_pane_t1_ParamLimits

0xcd68,	// (0x0001a22d) main_mp4_pane_t1

0xcdc4,	// (0x0001a289) main_mp4_pane_t2_ParamLimits

0xcdc4,	// (0x0001a289) main_mp4_pane_t2

0xce16,	// (0x0001a2db) main_mp4_pane_t3_ParamLimits

0xce16,	// (0x0001a2db) main_mp4_pane_t3

0xce3c,	// (0x0001a301) main_mp4_pane_t4_ParamLimits

0xce3c,	// (0x0001a301) main_mp4_pane_t4

0x0003,

0xf82e,	// (0x0001ccf3) main_mp4_pane_t_ParamLimits

0xf82e,	// (0x0001ccf3) main_mp4_pane_t

0xce7c,	// (0x0001a341) mp4_progress_pane_ParamLimits

0xce7c,	// (0x0001a341) mp4_progress_pane

0xcec6,	// (0x0001a38b) mp4_rocker_pane_ParamLimits

0xcec6,	// (0x0001a38b) mp4_rocker_pane

0xceee,	// (0x0001a3b3) mp4_progress_pane_t1

0xcf07,	// (0x0001a3cc) mp4_progress_pane_t2

0x0001,

0xf837,	// (0x0001ccfc) mp4_progress_pane_t

0xcf20,	// (0x0001a3e5) mup_progress_pane_cp04

0xa243,	// (0x00017708) mp4_rocker_pane_g1

0x5569,	// (0x00012a2e) aid_cell_size_keypad2_ParamLimits

0x5569,	// (0x00012a2e) aid_cell_size_keypad2

0x557f,	// (0x00012a44) dialer2_ne_pane_ParamLimits

0x557f,	// (0x00012a44) dialer2_ne_pane

0x5597,	// (0x00012a5c) grid_dialer2_keypad_pane_ParamLimits

0x5597,	// (0x00012a5c) grid_dialer2_keypad_pane

0xc154,	// (0x00019619) bg_popup_call_pane_cp07_ParamLimits

0xc154,	// (0x00019619) bg_popup_call_pane_cp07

0x55b3,	// (0x00012a78) dialer2_ne_pane_t1_ParamLimits

0x55b3,	// (0x00012a78) dialer2_ne_pane_t1

0x55f3,	// (0x00012ab8) cell_dialer2_keypad_pane_ParamLimits

0x55f3,	// (0x00012ab8) cell_dialer2_keypad_pane

0xcf45,	// (0x0001a40a) bg_button_pane_pane_cp04_ParamLimits

0xcf45,	// (0x0001a40a) bg_button_pane_pane_cp04

0x5619,	// (0x00012ade) cell_dialer2_keypad_pane_g1_ParamLimits

0x5619,	// (0x00012ade) cell_dialer2_keypad_pane_g1

0x1c33,	// (0x0000f0f8) aid_placing_vt_set_content_ParamLimits

0x1c33,	// (0x0000f0f8) aid_placing_vt_set_content

0x1c57,	// (0x0000f11c) aid_placing_vt_set_title_ParamLimits

0x1c57,	// (0x0000f11c) aid_placing_vt_set_title

0x97a6,	// (0x00016c6b) main_image3_pane

0x56df,	// (0x00012ba4) area_side_right_pane_cp01_ParamLimits

0x56df,	// (0x00012ba4) area_side_right_pane_cp01

0xccb8,	// (0x0001a17d) main_image3_pane_g1_ParamLimits

0xccb8,	// (0x0001a17d) main_image3_pane_g1

0x56f8,	// (0x00012bbd) main_image3_pane_g2_ParamLimits

0x56f8,	// (0x00012bbd) main_image3_pane_g2

0x5720,	// (0x00012be5) main_image3_pane_g3_ParamLimits

0x5720,	// (0x00012be5) main_image3_pane_g3

0x574a,	// (0x00012c0f) main_image3_pane_g4_ParamLimits

0x574a,	// (0x00012c0f) main_image3_pane_g4

0x0003,

0xf846,	// (0x0001cd0b) main_image3_pane_g_ParamLimits

0xf846,	// (0x0001cd0b) main_image3_pane_g

0x5774,	// (0x00012c39) main_image3_pane_t1_ParamLimits

0x5774,	// (0x00012c39) main_image3_pane_t1

0x57cc,	// (0x00012c91) main_image3_pane_t2_ParamLimits

0x57cc,	// (0x00012c91) main_image3_pane_t2

0x581e,	// (0x00012ce3) main_image3_pane_t3_ParamLimits

0x581e,	// (0x00012ce3) main_image3_pane_t3

0x0003,

0xf84f,	// (0x0001cd14) main_image3_pane_t_ParamLimits

0xf84f,	// (0x0001cd14) main_image3_pane_t

0x981b,	// (0x00016ce0) grid_sctrl_middle_pane_cp01_ParamLimits

0x981b,	// (0x00016ce0) grid_sctrl_middle_pane_cp01

0x58a6,	// (0x00012d6b) cell_sctrl_middle_pane_cp01_ParamLimits

0x58a6,	// (0x00012d6b) cell_sctrl_middle_pane_cp01

0x58c3,	// (0x00012d88) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x58c3,	// (0x00012d88) cell_sctrl_middle_pane_cp01_g1

0x97a6,	// (0x00016c6b) main_call4_pane

0x58d8,	// (0x00012d9d) aid_size_button_call4_ParamLimits

0x58d8,	// (0x00012d9d) aid_size_button_call4

0x590b,	// (0x00012dd0) call4_windows_pane_ParamLimits

0x590b,	// (0x00012dd0) call4_windows_pane

0x592a,	// (0x00012def) grid_call4_button_pane_ParamLimits

0x592a,	// (0x00012def) grid_call4_button_pane

0x5961,	// (0x00012e26) call4_windows_conf_pane

0x597a,	// (0x00012e3f) popup_call4_audio_first_window_ParamLimits

0x597a,	// (0x00012e3f) popup_call4_audio_first_window

0x59ca,	// (0x00012e8f) popup_call4_audio_second_window_ParamLimits

0x59ca,	// (0x00012e8f) popup_call4_audio_second_window

0x59e3,	// (0x00012ea8) popup_call4_audio_wait_window_ParamLimits

0x59e3,	// (0x00012ea8) popup_call4_audio_wait_window

0x59f1,	// (0x00012eb6) cell_call4_button_pane_ParamLimits

0x59f1,	// (0x00012eb6) cell_call4_button_pane

0x5a18,	// (0x00012edd) bg_button_pane_cp09_ParamLimits

0x5a18,	// (0x00012edd) bg_button_pane_cp09

0x5a24,	// (0x00012ee9) cell_call4_button_pane_g1_ParamLimits

0x5a24,	// (0x00012ee9) cell_call4_button_pane_g1

0x5a4a,	// (0x00012f0f) cell_call4_button_pane_t1_ParamLimits

0x5a4a,	// (0x00012f0f) cell_call4_button_pane_t1

0xcffa,	// (0x0001a4bf) popup_call4_audio_conf_window_ParamLimits

0xcffa,	// (0x0001a4bf) popup_call4_audio_conf_window

0x4e30,	// (0x000122f5) mup3_progress_pane_t1_ParamLimits

0x4e4f,	// (0x00012314) mup3_progress_pane_t2_ParamLimits

0xc743,	// (0x00019c08) mup3_progress_pane_t3_ParamLimits

0xf724,	// (0x0001cbe9) mup3_progress_pane_t_ParamLimits

0xc760,	// (0x00019c25) mup_progress_pane_cp03_ParamLimits

0x5359,	// (0x0001281e) mup3_control_keys_pane_g4_copy1

0xceaa,	// (0x0001a36f) mp4_rocker2_pane_ParamLimits

0xceaa,	// (0x0001a36f) mp4_rocker2_pane

0xd014,	// (0x0001a4d9) mp4_rocker2_pane_g1

0xd01c,	// (0x0001a4e1) mp4_rocker2_pane_g2

0xd024,	// (0x0001a4e9) mp4_rocker2_pane_g3

0xd02c,	// (0x0001a4f1) mp4_rocker2_pane_g4

0xd034,	// (0x0001a4f9) mp4_rocker2_pane_g5

0x0004,

0xf858,	// (0x0001cd1d) mp4_rocker2_pane_g

0x97a6,	// (0x00016c6b) main_camera4_pane

0x97a6,	// (0x00016c6b) main_video4_pane

0x545a,	// (0x0001291f) main_video_tele_dialer_pane_t1_ParamLimits

0x545a,	// (0x0001291f) main_video_tele_dialer_pane_t1

0x5473,	// (0x00012938) main_video_tele_dialer_pane_t2_ParamLimits

0x5473,	// (0x00012938) main_video_tele_dialer_pane_t2

0x0001,

0xf80e,	// (0x0001ccd3) main_video_tele_dialer_pane_t_ParamLimits

0xf80e,	// (0x0001ccd3) main_video_tele_dialer_pane_t

0x5a88,	// (0x00012f4d) cam4_autofocus_pane_ParamLimits

0x5a88,	// (0x00012f4d) cam4_autofocus_pane

0x5a9e,	// (0x00012f63) cam4_image_uncrop_pane_ParamLimits

0x5a9e,	// (0x00012f63) cam4_image_uncrop_pane

0x5ab7,	// (0x00012f7c) cam4_indicators_pane_ParamLimits

0x5ab7,	// (0x00012f7c) cam4_indicators_pane

0x5ae7,	// (0x00012fac) main_camera4_pane_g1_ParamLimits

0x5ae7,	// (0x00012fac) main_camera4_pane_g1

0x5af9,	// (0x00012fbe) main_camera4_pane_g2_ParamLimits

0x5af9,	// (0x00012fbe) main_camera4_pane_g2

0x5b0c,	// (0x00012fd1) main_camera4_pane_g3_ParamLimits

0x5b0c,	// (0x00012fd1) main_camera4_pane_g3

0x5b1f,	// (0x00012fe4) main_camera4_pane_g4_ParamLimits

0x5b1f,	// (0x00012fe4) main_camera4_pane_g4

0x5b32,	// (0x00012ff7) main_camera4_pane_g5_ParamLimits

0x5b32,	// (0x00012ff7) main_camera4_pane_g5

0x0005,

0xf863,	// (0x0001cd28) main_camera4_pane_g_ParamLimits

0xf863,	// (0x0001cd28) main_camera4_pane_g

0x5b56,	// (0x0001301b) main_camera4_pane_t1_ParamLimits

0x5b56,	// (0x0001301b) main_camera4_pane_t1

0x9f47,	// (0x0001740c) bg_tb_trans_pane_cp06

0xd062,	// (0x0001a527) cam4_indicators_pane_g1

0xd073,	// (0x0001a538) cam4_indicators_pane_g2

0x0002,

0xf87e,	// (0x0001cd43) cam4_indicators_pane_g

0xd08b,	// (0x0001a550) cam4_indicators_pane_t1

0x5bba,	// (0x0001307f) main_video4_pane_g1_ParamLimits

0x5bba,	// (0x0001307f) main_video4_pane_g1

0x5bc9,	// (0x0001308e) main_video4_pane_g2_ParamLimits

0x5bc9,	// (0x0001308e) main_video4_pane_g2

0x5bd9,	// (0x0001309e) main_video4_pane_g3_ParamLimits

0x5bd9,	// (0x0001309e) main_video4_pane_g3

0x5be9,	// (0x000130ae) main_video4_pane_g4_ParamLimits

0x5be9,	// (0x000130ae) main_video4_pane_g4

0x0004,

0xf885,	// (0x0001cd4a) main_video4_pane_g_ParamLimits

0xf885,	// (0x0001cd4a) main_video4_pane_g

0x5c09,	// (0x000130ce) vid4_indicators_pane_ParamLimits

0x5c09,	// (0x000130ce) vid4_indicators_pane

0x5c33,	// (0x000130f8) video4_image_uncrop_cif_pane_ParamLimits

0x5c33,	// (0x000130f8) video4_image_uncrop_cif_pane

0x5c4d,	// (0x00013112) video4_image_uncrop_nhd_pane_ParamLimits

0x5c4d,	// (0x00013112) video4_image_uncrop_nhd_pane

0x5a9e,	// (0x00012f63) video4_image_uncrop_vga_pane_ParamLimits

0x5a9e,	// (0x00012f63) video4_image_uncrop_vga_pane

0x981b,	// (0x00016ce0) bg_tb_trans_pane_cp07

0xd0b9,	// (0x0001a57e) vid4_indicators_pane_g1

0xd0cf,	// (0x0001a594) vid4_indicators_pane_g2

0xd0e3,	// (0x0001a5a8) vid4_indicators_pane_g3

0x0004,

0xf890,	// (0x0001cd55) vid4_indicators_pane_g

0xd114,	// (0x0001a5d9) vid4_indicators_pane_t1

0x5c64,	// (0x00013129) cam4_autofocus_pane_g1

0x5c6c,	// (0x00013131) cam4_autofocus_pane_g2

0x5c74,	// (0x00013139) cam4_autofocus_pane_g3

0x0002,

0xf89b,	// (0x0001cd60) cam4_autofocus_pane_g

0x5c7c,	// (0x00013141) cam4_autofocus_pane_g3_copy1

0x54a2,	// (0x00012967) video_down_pane_cp_t1

0x54b0,	// (0x00012975) video_down_pane_cp_t2

0x0001,

0xf813,	// (0x0001ccd8) video_down_pane_cp_t

0x981b,	// (0x00016ce0) popup_vitu2_window_ParamLimits

0x981b,	// (0x00016ce0) popup_vitu2_window

0x5c84,	// (0x00013149) aid_size_cell2_itu2_ParamLimits

0x5c84,	// (0x00013149) aid_size_cell2_itu2

0x5ca4,	// (0x00013169) aid_size_cell_itu2_ParamLimits

0x5ca4,	// (0x00013169) aid_size_cell_itu2

0x4ede,	// (0x000123a3) bg_popup_window_pane_cp09_ParamLimits

0x4ede,	// (0x000123a3) bg_popup_window_pane_cp09

0x5cf3,	// (0x000131b8) field_vitu2_entry_pane_ParamLimits

0x5cf3,	// (0x000131b8) field_vitu2_entry_pane

0x5d18,	// (0x000131dd) grid_vitu2_function_pane_ParamLimits

0x5d18,	// (0x000131dd) grid_vitu2_function_pane

0x5d63,	// (0x00013228) grid_vitu2_itu_pane_ParamLimits

0x5d63,	// (0x00013228) grid_vitu2_itu_pane

0x5deb,	// (0x000132b0) cell_vitu2_itu_pane_ParamLimits

0x5deb,	// (0x000132b0) cell_vitu2_itu_pane

0x5e19,	// (0x000132de) cell_vitu2_function_pane_ParamLimits

0x5e19,	// (0x000132de) cell_vitu2_function_pane

0xd12b,	// (0x0001a5f0) bg_popup_call_pane_cp08_ParamLimits

0xd12b,	// (0x0001a5f0) bg_popup_call_pane_cp08

0xd142,	// (0x0001a607) field_vitu2_entry_pane_g1

0xd14e,	// (0x0001a613) field_vitu2_entry_pane_g2

0x0002,

0xf8a2,	// (0x0001cd67) field_vitu2_entry_pane_g

0xd15a,	// (0x0001a61f) field_vitu2_entry_pane_t1_ParamLimits

0xd15a,	// (0x0001a61f) field_vitu2_entry_pane_t1

0xd189,	// (0x0001a64e) field_vitu2_entry_pane_t2_ParamLimits

0xd189,	// (0x0001a64e) field_vitu2_entry_pane_t2

0x0001,

0xf8a9,	// (0x0001cd6e) field_vitu2_entry_pane_t_ParamLimits

0xf8a9,	// (0x0001cd6e) field_vitu2_entry_pane_t

0x5e5d,	// (0x00013322) bg_button_pane_cp010_ParamLimits

0x5e5d,	// (0x00013322) bg_button_pane_cp010

0x5e6b,	// (0x00013330) cell_vitu2_itu_pane_g1

0x5e91,	// (0x00013356) cell_vitu2_itu_pane_t1_ParamLimits

0x5e91,	// (0x00013356) cell_vitu2_itu_pane_t1

0x5eef,	// (0x000133b4) cell_vitu2_itu_pane_t2_ParamLimits

0x5eef,	// (0x000133b4) cell_vitu2_itu_pane_t2

0x0002,

0xf8b3,	// (0x0001cd78) cell_vitu2_itu_pane_t_ParamLimits

0xf8b3,	// (0x0001cd78) cell_vitu2_itu_pane_t

0x981b,	// (0x00016ce0) bg_button_pane_cp011

0x5fdb,	// (0x000134a0) cell_vitu2_function_pane_g1

0x97a6,	// (0x00016c6b) main_myfav_hc_pane

0x586e,	// (0x00012d33) popup_image3_note_pane_ParamLimits

0x586e,	// (0x00012d33) popup_image3_note_pane

0x588a,	// (0x00012d4f) popup_image3_tool_bar_pane_ParamLimits

0x588a,	// (0x00012d4f) popup_image3_tool_bar_pane

0x5f7d,	// (0x00013442) cell_vitu2_itu_pane_t3_ParamLimits

0x5f7d,	// (0x00013442) cell_vitu2_itu_pane_t3

0x97a6,	// (0x00016c6b) bg_popup_trans_pane

0xd1ae,	// (0x0001a673) grid_image3_tool_bar_pane

0xd1b8,	// (0x0001a67d) bg_popup_trans_pane_g1

0xa458,	// (0x0001791d) bg_popup_trans_pane_g2

0xd1c0,	// (0x0001a685) bg_popup_trans_pane_g3

0xd1c8,	// (0x0001a68d) bg_popup_trans_pane_g4

0xd1d0,	// (0x0001a695) bg_popup_trans_pane_g5

0xd1d8,	// (0x0001a69d) bg_popup_trans_pane_g6

0xd1e0,	// (0x0001a6a5) bg_popup_trans_pane_g7

0xd1e8,	// (0x0001a6ad) bg_popup_trans_pane_g8

0xa438,	// (0x000178fd) bg_popup_trans_pane_g9

0x0008,

0xf8ba,	// (0x0001cd7f) bg_popup_trans_pane_g

0xd1f0,	// (0x0001a6b5) cell_image3_tool_bar_pane_ParamLimits

0xd1f0,	// (0x0001a6b5) cell_image3_tool_bar_pane

0xa243,	// (0x00017708) cell_image3_tool_bar_pane_g1

0x97a6,	// (0x00016c6b) bg_popup_trans_pane_cp1

0xd206,	// (0x0001a6cb) popup_image3_note_pane_t1

0xd214,	// (0x0001a6d9) popup_image3_note_pane_t2

0xd222,	// (0x0001a6e7) popup_image3_note_pane_t3

0x0002,

0xf8cd,	// (0x0001cd92) popup_image3_note_pane_t

0xd232,	// (0x0001a6f7) popup_image3_note_pane_t3_copy1

0x5fef,	// (0x000134b4) bg_myfav_hc_instruction_pane_ParamLimits

0x5fef,	// (0x000134b4) bg_myfav_hc_instruction_pane

0x6007,	// (0x000134cc) cell_myfav_contact_pane_ParamLimits

0x6007,	// (0x000134cc) cell_myfav_contact_pane

0x6023,	// (0x000134e8) cell_myfav_contact_pane_cp1_ParamLimits

0x6023,	// (0x000134e8) cell_myfav_contact_pane_cp1

0x603b,	// (0x00013500) cell_myfav_contact_pane_cp2_ParamLimits

0x603b,	// (0x00013500) cell_myfav_contact_pane_cp2

0x6053,	// (0x00013518) cell_myfav_contact_pane_cp3_ParamLimits

0x6053,	// (0x00013518) cell_myfav_contact_pane_cp3

0x606a,	// (0x0001352f) cell_myfav_contact_pane_cp4_ParamLimits

0x606a,	// (0x0001352f) cell_myfav_contact_pane_cp4

0x6082,	// (0x00013547) cell_myfav_contact_pane_cp5_ParamLimits

0x6082,	// (0x00013547) cell_myfav_contact_pane_cp5

0x6096,	// (0x0001355b) cell_myfav_contact_pane_cp6_ParamLimits

0x6096,	// (0x0001355b) cell_myfav_contact_pane_cp6

0x60ac,	// (0x00013571) cell_myfav_contact_pane_cp7_ParamLimits

0x60ac,	// (0x00013571) cell_myfav_contact_pane_cp7

0xd240,	// (0x0001a705) listscroll_gen_pane_cp05

0x60c4,	// (0x00013589) main_myfav_hc_pane_g1_ParamLimits

0x60c4,	// (0x00013589) main_myfav_hc_pane_g1

0x60de,	// (0x000135a3) main_myfav_hc_pane_g2_ParamLimits

0x60de,	// (0x000135a3) main_myfav_hc_pane_g2

0x0002,

0xf8d4,	// (0x0001cd99) main_myfav_hc_pane_g_ParamLimits

0xf8d4,	// (0x0001cd99) main_myfav_hc_pane_g

0x6112,	// (0x000135d7) main_myfav_hc_pane_t1_ParamLimits

0x6112,	// (0x000135d7) main_myfav_hc_pane_t1

0xd249,	// (0x0001a70e) main_myfav_hc_pane_t2_ParamLimits

0xd249,	// (0x0001a70e) main_myfav_hc_pane_t2

0xd25b,	// (0x0001a720) main_myfav_hc_pane_t3_ParamLimits

0xd25b,	// (0x0001a720) main_myfav_hc_pane_t3

0x6129,	// (0x000135ee) main_myfav_hc_pane_t4_ParamLimits

0x6129,	// (0x000135ee) main_myfav_hc_pane_t4

0x0004,

0xf8db,	// (0x0001cda0) main_myfav_hc_pane_t_ParamLimits

0xf8db,	// (0x0001cda0) main_myfav_hc_pane_t

0xa243,	// (0x00017708) bg_myfav_hc_instruction_pane_g1

0xd26d,	// (0x0001a732) cell_myfav_contact_pane_g1_ParamLimits

0xd26d,	// (0x0001a732) cell_myfav_contact_pane_g1

0xd26d,	// (0x0001a732) cell_myfav_contact_pane_g2_ParamLimits

0xd26d,	// (0x0001a732) cell_myfav_contact_pane_g2

0xd279,	// (0x0001a73e) cell_myfav_contact_pane_g3_ParamLimits

0xd279,	// (0x0001a73e) cell_myfav_contact_pane_g3

0x9f55,	// (0x0001741a) cell_myfav_contact_pane_g4_ParamLimits

0x9f55,	// (0x0001741a) cell_myfav_contact_pane_g4

0xd286,	// (0x0001a74b) cell_myfav_contact_pane_g5_ParamLimits

0xd286,	// (0x0001a74b) cell_myfav_contact_pane_g5

0x0004,

0xf8e6,	// (0x0001cdab) cell_myfav_contact_pane_g_ParamLimits

0xf8e6,	// (0x0001cdab) cell_myfav_contact_pane_g

0x60f8,	// (0x000135bd) main_myfav_hc_pane_g3_ParamLimits

0x60f8,	// (0x000135bd) main_myfav_hc_pane_g3

0x0f91,	// (0x0000e456) popup_adpt_find_window

0x6153,	// (0x00013618) afind_page_pane_ParamLimits

0x6153,	// (0x00013618) afind_page_pane

0x6168,	// (0x0001362d) aid_size_cell_afind_ParamLimits

0x6168,	// (0x0001362d) aid_size_cell_afind

0x6186,	// (0x0001364b) bg_popup_sub_pane_cp09_ParamLimits

0x6186,	// (0x0001364b) bg_popup_sub_pane_cp09

0x6193,	// (0x00013658) find_pane_cp01_ParamLimits

0x6193,	// (0x00013658) find_pane_cp01

0xd292,	// (0x0001a757) grid_afind_control_pane_ParamLimits

0xd292,	// (0x0001a757) grid_afind_control_pane

0x61a0,	// (0x00013665) grid_afind_pane_ParamLimits

0x61a0,	// (0x00013665) grid_afind_pane

0x61c2,	// (0x00013687) cell_afind_pane_ParamLimits

0x61c2,	// (0x00013687) cell_afind_pane

0xa243,	// (0x00017708) afind_page_pane_g1

0x622f,	// (0x000136f4) afind_page_pane_g2

0x6238,	// (0x000136fd) afind_page_pane_g3

0x0002,

0xf8f1,	// (0x0001cdb6) afind_page_pane_g

0x6241,	// (0x00013706) afind_page_pane_t1

0xd2a6,	// (0x0001a76b) cell_afind_grid_control_pane_ParamLimits

0xd2a6,	// (0x0001a76b) cell_afind_grid_control_pane

0xcf45,	// (0x0001a40a) bg_button_pane_cp69_ParamLimits

0xcf45,	// (0x0001a40a) bg_button_pane_cp69

0x6261,	// (0x00013726) cell_afind_pane_g1_ParamLimits

0x6261,	// (0x00013726) cell_afind_pane_g1

0x626e,	// (0x00013733) cell_afind_pane_t1_ParamLimits

0x626e,	// (0x00013733) cell_afind_pane_t1

0xa24d,	// (0x00017712) bg_button_pane_cp72

0xd2b5,	// (0x0001a77a) cell_afind_grid_control_pane_g1

0x3972,	// (0x00010e37) aid_image_placing_area_ParamLimits

0x3972,	// (0x00010e37) aid_image_placing_area

0x9f47,	// (0x0001740c) field_vitu_entry_pane_g1_ParamLimits

0x9f47,	// (0x0001740c) field_vitu_entry_pane_g1

0x9f47,	// (0x0001740c) field_vitu_entry_pane_g2_ParamLimits

0x9f47,	// (0x0001740c) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0001c6c6) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0001c6c6) field_vitu_entry_pane_g

0xca60,	// (0x00019f25) cell_vitu_itu_pane_g1_ParamLimits

0xca43,	// (0x00019f08) cell_vitu_itu_pane_t3_ParamLimits

0xca43,	// (0x00019f08) cell_vitu_itu_pane_t3

0xceee,	// (0x0001a3b3) mp4_progress_pane_t1_ParamLimits

0xcf07,	// (0x0001a3cc) mp4_progress_pane_t2_ParamLimits

0xf837,	// (0x0001ccfc) mp4_progress_pane_t_ParamLimits

0xcf20,	// (0x0001a3e5) mup_progress_pane_cp04_ParamLimits

0x613d,	// (0x00013602) main_myfav_hc_pane_t5_ParamLimits

0x613d,	// (0x00013602) main_myfav_hc_pane_t5

0x97cc,	// (0x00016c91) aid_zoom_text_primary

0x0f91,	// (0x0000e456) popup_adpt_find_window_ParamLimits

0x981b,	// (0x00016ce0) main_cam_set_pane

0x5ad0,	// (0x00012f95) cam4_zoom_pane_ParamLimits

0x5ad0,	// (0x00012f95) cam4_zoom_pane

0x6280,	// (0x00013745) main_cam_set_pane_g1_ParamLimits

0x6280,	// (0x00013745) main_cam_set_pane_g1

0x628e,	// (0x00013753) main_cam_set_pane_g2_ParamLimits

0x628e,	// (0x00013753) main_cam_set_pane_g2

0x0001,

0xf8f8,	// (0x0001cdbd) main_cam_set_pane_g_ParamLimits

0xf8f8,	// (0x0001cdbd) main_cam_set_pane_g

0x62af,	// (0x00013774) main_cam_set_pane_t1_ParamLimits

0x62af,	// (0x00013774) main_cam_set_pane_t1

0x62ca,	// (0x0001378f) main_cset_listscroll_pane_ParamLimits

0x62ca,	// (0x0001378f) main_cset_listscroll_pane

0x62f2,	// (0x000137b7) main_cset_slider_pane_ParamLimits

0x62f2,	// (0x000137b7) main_cset_slider_pane

0xd2c6,	// (0x0001a78b) main_cset_list_pane_ParamLimits

0xd2c6,	// (0x0001a78b) main_cset_list_pane

0xd2d6,	// (0x0001a79b) scroll_pane_cp028

0x631c,	// (0x000137e1) aid_area_touch_slider

0x6338,	// (0x000137fd) cset_slider_pane

0x635b,	// (0x00013820) main_cset_slider_pane_g1

0x6370,	// (0x00013835) main_cset_slider_pane_g2

0x0011,

0xf8fd,	// (0x0001cdc2) main_cset_slider_pane_g

0xd30f,	// (0x0001a7d4) main_cset_slider_pane_t1

0x6432,	// (0x000138f7) main_cset_slider_pane_t2

0x644c,	// (0x00013911) main_cset_slider_pane_t3

0x6466,	// (0x0001392b) main_cset_slider_pane_t4

0x6480,	// (0x00013945) main_cset_slider_pane_t5

0x649e,	// (0x00013963) main_cset_slider_pane_t6

0x64b5,	// (0x0001397a) main_cset_slider_pane_t7

0x000e,

0xf922,	// (0x0001cde7) main_cset_slider_pane_t

0x65c1,	// (0x00013a86) cset_list_set_pane_ParamLimits

0x65c1,	// (0x00013a86) cset_list_set_pane

0xd3a9,	// (0x0001a86e) aid_position_infowindow_above

0xd3b1,	// (0x0001a876) aid_position_infowindow_below

0x65d5,	// (0x00013a9a) cset_list_set_pane_g1_ParamLimits

0x65d5,	// (0x00013a9a) cset_list_set_pane_g1

0x65e1,	// (0x00013aa6) cset_list_set_pane_g3_ParamLimits

0x65e1,	// (0x00013aa6) cset_list_set_pane_g3

0x0001,

0xf941,	// (0x0001ce06) cset_list_set_pane_g_ParamLimits

0xf941,	// (0x0001ce06) cset_list_set_pane_g

0x65f0,	// (0x00013ab5) cset_list_set_pane_t1_ParamLimits

0x65f0,	// (0x00013ab5) cset_list_set_pane_t1

0x981b,	// (0x00016ce0) list_highlight_pane_cp021_ParamLimits

0x981b,	// (0x00016ce0) list_highlight_pane_cp021

0xad52,	// (0x00018217) cset_slider_pane_g1

0xad64,	// (0x00018229) cset_slider_pane_g2

0xad5b,	// (0x00018220) cset_slider_pane_g3

0x0002,

0xf946,	// (0x0001ce0b) cset_slider_pane_g

0xd3b9,	// (0x0001a87e) aid_area_touch_cam4_zoom

0x6605,	// (0x00013aca) cam4_zoom_cont_pane

0x660d,	// (0x00013ad2) cam4_zoom_pane_g1

0x6615,	// (0x00013ada) cam4_zoom_pane_g2

0x661d,	// (0x00013ae2) cam4_zoom_pane_g3

0x0002,

0xf94d,	// (0x0001ce12) cam4_zoom_pane_g

0xd3c2,	// (0x0001a887) cam4_zoom_cont_pane_g1

0xd3cb,	// (0x0001a890) cam4_zoom_cont_pane_g2

0xd3d4,	// (0x0001a899) cam4_zoom_cont_pane_g3

0x0002,

0xf954,	// (0x0001ce19) cam4_zoom_cont_pane_g

0x58f6,	// (0x00012dbb) call4_image_pane_ParamLimits

0x58f6,	// (0x00012dbb) call4_image_pane

0x5961,	// (0x00012e26) call4_windows_conf_pane_ParamLimits

0x59a8,	// (0x00012e6d) popup_call4_audio_in_window_ParamLimits

0x59a8,	// (0x00012e6d) popup_call4_audio_in_window

0x97a6,	// (0x00016c6b) bg_popup_call2_act_pane_cp02

0xcff2,	// (0x0001a4b7) call4_list_conf_pane

0xa243,	// (0x00017708) call4_image_pane_g1

0xa243,	// (0x00017708) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x0001c89d) call4_image_pane_g

0xd3dd,	// (0x0001a8a2) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3dd,	// (0x0001a8a2) list_single_graphic_popup_conf4_pane

0x97a6,	// (0x00016c6b) list_highlight_pane_cp022

0xd3f2,	// (0x0001a8b7) list_single_graphic_popup_conf4_pane_g1

0xaa13,	// (0x00017ed8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf95b,	// (0x0001ce20) list_single_graphic_popup_conf4_pane_g

0xd3fa,	// (0x0001a8bf) list_single_graphic_popup_conf4_pane_t1

0x1d6e,	// (0x0000f233) popup_vtel_slider_window_ParamLimits

0x1d6e,	// (0x0000f233) popup_vtel_slider_window

0xcf33,	// (0x0001a3f8) dialer2_ne_pane_t2_ParamLimits

0xcf33,	// (0x0001a3f8) dialer2_ne_pane_t2

0x0001,

0xf83c,	// (0x0001cd01) dialer2_ne_pane_t_ParamLimits

0xf83c,	// (0x0001cd01) dialer2_ne_pane_t

0xc154,	// (0x00019619) bg_popup_sub_pane_cp010_ParamLimits

0xc154,	// (0x00019619) bg_popup_sub_pane_cp010

0x6625,	// (0x00013aea) popup_vtel_slider_window_g1_ParamLimits

0x6625,	// (0x00013aea) popup_vtel_slider_window_g1

0x6638,	// (0x00013afd) popup_vtel_slider_window_g2_ParamLimits

0x6638,	// (0x00013afd) popup_vtel_slider_window_g2

0x0003,

0xf960,	// (0x0001ce25) popup_vtel_slider_window_g_ParamLimits

0xf960,	// (0x0001ce25) popup_vtel_slider_window_g

0x668e,	// (0x00013b53) vtel_slider_pane_ParamLimits

0x668e,	// (0x00013b53) vtel_slider_pane

0x66b0,	// (0x00013b75) vtel_slider_pane_g1_ParamLimits

0x66b0,	// (0x00013b75) vtel_slider_pane_g1

0x66c4,	// (0x00013b89) vtel_slider_pane_g2_ParamLimits

0x66c4,	// (0x00013b89) vtel_slider_pane_g2

0x66dc,	// (0x00013ba1) vtel_slider_pane_g3_ParamLimits

0x66dc,	// (0x00013ba1) vtel_slider_pane_g3

0x66b0,	// (0x00013b75) vtel_slider_pane_g4_ParamLimits

0x66b0,	// (0x00013b75) vtel_slider_pane_g4

0x66f2,	// (0x00013bb7) vtel_slider_pane_g5_ParamLimits

0x66f2,	// (0x00013bb7) vtel_slider_pane_g5

0x0004,

0xf969,	// (0x0001ce2e) vtel_slider_pane_g_ParamLimits

0xf969,	// (0x0001ce2e) vtel_slider_pane_g

0x981b,	// (0x00016ce0) main_gallery2_pane

0x5cc4,	// (0x00013189) aid_size_row_itut2_dropdow_list_ParamLimits

0x5cc4,	// (0x00013189) aid_size_row_itut2_dropdow_list

0x5d3d,	// (0x00013202) grid_vitu2_function_top_pane_ParamLimits

0x5d3d,	// (0x00013202) grid_vitu2_function_top_pane

0x5d99,	// (0x0001325e) popup_vitu2_dropdown_list_window_ParamLimits

0x5d99,	// (0x0001325e) popup_vitu2_dropdown_list_window

0x5dbf,	// (0x00013284) popup_vitu2_match_list_window

0x6708,	// (0x00013bcd) cell_vitu2_function_top_pane_ParamLimits

0x6708,	// (0x00013bcd) cell_vitu2_function_top_pane

0x6722,	// (0x00013be7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6722,	// (0x00013be7) cell_vitu2_function_top_pane_cp01

0x673e,	// (0x00013c03) cell_vitu2_function_top_wide_pane_ParamLimits

0x673e,	// (0x00013c03) cell_vitu2_function_top_wide_pane

0x981b,	// (0x00016ce0) bg_button_pane_cp012

0x675c,	// (0x00013c21) cell_vitu2_function_top_pane_g1

0xd410,	// (0x0001a8d5) bg_button_pane_cp013_ParamLimits

0xd410,	// (0x0001a8d5) bg_button_pane_cp013

0x6770,	// (0x00013c35) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6770,	// (0x00013c35) cell_vitu2_function_top_wide_pane_g1

0x981b,	// (0x00016ce0) bg_popup_sub_pane_cp20

0x6788,	// (0x00013c4d) list_vitu2_match_list_pane

0xd1b8,	// (0x0001a67d) bg_popup_sub_pane_cp20_g1

0xd1c0,	// (0x0001a685) bg_popup_sub_pane_cp20_g2

0xa458,	// (0x0001791d) bg_popup_sub_pane_cp20_g3

0xd1c8,	// (0x0001a68d) bg_popup_sub_pane_cp20_g4

0xa438,	// (0x000178fd) bg_popup_sub_pane_cp20_g5

0xd42c,	// (0x0001a8f1) bg_popup_sub_pane_cp20_g6

0xd1d8,	// (0x0001a69d) bg_popup_sub_pane_cp20_g7

0xd1e0,	// (0x0001a6a5) bg_popup_sub_pane_cp20_g8

0xd1e8,	// (0x0001a6ad) bg_popup_sub_pane_cp20_g9

0x0008,

0xf974,	// (0x0001ce39) bg_popup_sub_pane_cp20_g

0xd434,	// (0x0001a8f9) list_vitu2_match_list_item_pane_ParamLimits

0xd434,	// (0x0001a8f9) list_vitu2_match_list_item_pane

0xd446,	// (0x0001a90b) list_vitu2_match_list_item_pane_t1

0x97a6,	// (0x00016c6b) bg_popup_sub_pane_cp21

0xa1ee,	// (0x000176b3) grid_vitu2_dropdown_list_pane

0x67a0,	// (0x00013c65) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x67a0,	// (0x00013c65) cell_vitu2_dropdown_list_char_pane

0x67c3,	// (0x00013c88) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x67c3,	// (0x00013c88) cell_vitu2_dropdown_list_ctrl_pane

0xd454,	// (0x0001a919) cell_vitu2_dropdown_list_char_pane_g1

0xd45d,	// (0x0001a922) cell_vitu2_dropdown_list_char_pane_g2

0xd466,	// (0x0001a92b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf987,	// (0x0001ce4c) cell_vitu2_dropdown_list_char_pane_g

0x67ef,	// (0x00013cb4) cell_vitu2_dropdown_list_char_pane_t1

0x67fd,	// (0x00013cc2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x67fd,	// (0x00013cc2) cell_vitu2_dropdown_list_ctrl_pane_g1

0x680d,	// (0x00013cd2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x680d,	// (0x00013cd2) cell_vitu2_dropdown_list_ctrl_pane_g2

0x681e,	// (0x00013ce3) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x681e,	// (0x00013ce3) cell_vitu2_dropdown_list_ctrl_pane_g3

0x682e,	// (0x00013cf3) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x682e,	// (0x00013cf3) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9f47,	// (0x0001740c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9f47,	// (0x0001740c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf98e,	// (0x0001ce53) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf98e,	// (0x0001ce53) cell_vitu2_dropdown_list_ctrl_pane_g

0x684a,	// (0x00013d0f) aid_size_cell_gallery2_ParamLimits

0x684a,	// (0x00013d0f) aid_size_cell_gallery2

0x6868,	// (0x00013d2d) grid_gallery2_pane_ParamLimits

0x6868,	// (0x00013d2d) grid_gallery2_pane

0x6882,	// (0x00013d47) scroll_pane_cp029_ParamLimits

0x6882,	// (0x00013d47) scroll_pane_cp029

0x6893,	// (0x00013d58) cell_gallery2_pane_ParamLimits

0x6893,	// (0x00013d58) cell_gallery2_pane

0xd46f,	// (0x0001a934) cell_gallery2_pane_g2

0x68f7,	// (0x00013dbc) cell_gallery2_pane_g3

0xd477,	// (0x0001a93c) cell_gallery2_pane_g4

0xd47f,	// (0x0001a944) cell_gallery2_pane_g5

0xa1ee,	// (0x000176b3) grid_highlight_pane_cp10

0x5dbf,	// (0x00013284) popup_vitu2_match_list_window_ParamLimits

0x5dd6,	// (0x0001329b) popup_vitu2_query_window_ParamLimits

0x5dd6,	// (0x0001329b) popup_vitu2_query_window

0x97a6,	// (0x00016c6b) bg_vitu2_candi_button_pane

0xd454,	// (0x0001a919) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd45d,	// (0x0001a922) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd466,	// (0x0001a92b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x68ff,	// (0x00013dc4) bg_button_pane_cp015

0x6913,	// (0x00013dd8) bg_button_pane_cp016

0x6926,	// (0x00013deb) bg_button_pane_cp017

0xace0,	// (0x000181a5) bg_popup_sub_pane_cp22

0xd487,	// (0x0001a94c) popup_vitu2_query_window_g1

0x696b,	// (0x00013e30) popup_vitu2_query_window_g2

0x0002,

0xf999,	// (0x0001ce5e) popup_vitu2_query_window_g

0x698a,	// (0x00013e4f) popup_vitu2_query_window_t1_ParamLimits

0x698a,	// (0x00013e4f) popup_vitu2_query_window_t1

0x69bf,	// (0x00013e84) popup_vitu2_query_window_t2_ParamLimits

0x69bf,	// (0x00013e84) popup_vitu2_query_window_t2

0x69d1,	// (0x00013e96) popup_vitu2_query_window_t3_ParamLimits

0x69d1,	// (0x00013e96) popup_vitu2_query_window_t3

0x69f9,	// (0x00013ebe) popup_vitu2_query_window_t4_ParamLimits

0x69f9,	// (0x00013ebe) popup_vitu2_query_window_t4

0x6a1a,	// (0x00013edf) popup_vitu2_query_window_t5_ParamLimits

0x6a1a,	// (0x00013edf) popup_vitu2_query_window_t5

0x0006,

0xf9a0,	// (0x0001ce65) popup_vitu2_query_window_t_ParamLimits

0xf9a0,	// (0x0001ce65) popup_vitu2_query_window_t

0xd2be,	// (0x0001a783) main_cset_text_pane

0x631c,	// (0x000137e1) aid_area_touch_slider_ParamLimits

0x6338,	// (0x000137fd) cset_slider_pane_ParamLimits

0x635b,	// (0x00013820) main_cset_slider_pane_g1_ParamLimits

0x6370,	// (0x00013835) main_cset_slider_pane_g2_ParamLimits

0xd2df,	// (0x0001a7a4) main_cset_slider_pane_g3_ParamLimits

0xd2df,	// (0x0001a7a4) main_cset_slider_pane_g3

0x6385,	// (0x0001384a) main_cset_slider_pane_g4_ParamLimits

0x6385,	// (0x0001384a) main_cset_slider_pane_g4

0x6394,	// (0x00013859) main_cset_slider_pane_g5_ParamLimits

0x6394,	// (0x00013859) main_cset_slider_pane_g5

0x63a2,	// (0x00013867) main_cset_slider_pane_g6_ParamLimits

0x63a2,	// (0x00013867) main_cset_slider_pane_g6

0xf8fd,	// (0x0001cdc2) main_cset_slider_pane_g_ParamLimits

0xd30f,	// (0x0001a7d4) main_cset_slider_pane_t1_ParamLimits

0x6432,	// (0x000138f7) main_cset_slider_pane_t2_ParamLimits

0x644c,	// (0x00013911) main_cset_slider_pane_t3_ParamLimits

0x6466,	// (0x0001392b) main_cset_slider_pane_t4_ParamLimits

0x6480,	// (0x00013945) main_cset_slider_pane_t5_ParamLimits

0x649e,	// (0x00013963) main_cset_slider_pane_t6_ParamLimits

0x64b5,	// (0x0001397a) main_cset_slider_pane_t7_ParamLimits

0x64e3,	// (0x000139a8) main_cset_slider_pane_t8_ParamLimits

0x64e3,	// (0x000139a8) main_cset_slider_pane_t8

0x650b,	// (0x000139d0) main_cset_slider_pane_t9_ParamLimits

0x650b,	// (0x000139d0) main_cset_slider_pane_t9

0x6533,	// (0x000139f8) main_cset_slider_pane_t10_ParamLimits

0x6533,	// (0x000139f8) main_cset_slider_pane_t10

0x655b,	// (0x00013a20) main_cset_slider_pane_t11_ParamLimits

0x655b,	// (0x00013a20) main_cset_slider_pane_t11

0x6585,	// (0x00013a4a) main_cset_slider_pane_t12_ParamLimits

0x6585,	// (0x00013a4a) main_cset_slider_pane_t12

0x65a2,	// (0x00013a67) main_cset_slider_pane_t13_ParamLimits

0x65a2,	// (0x00013a67) main_cset_slider_pane_t13

0xf922,	// (0x0001cde7) main_cset_slider_pane_t_ParamLimits

0x97a6,	// (0x00016c6b) bg_popup_sub_pane_cp011

0xd493,	// (0x0001a958) main_cset_text_pane_g1

0xd49b,	// (0x0001a960) main_cset_text_pane_t1

0xd4a9,	// (0x0001a96e) main_cset_text_pane_t2

0xd4b7,	// (0x0001a97c) main_cset_text_pane_t3

0xd4c5,	// (0x0001a98a) main_cset_text_pane_t4

0xd4d3,	// (0x0001a998) main_cset_text_pane_t5

0xd4e1,	// (0x0001a9a6) main_cset_text_pane_t6

0xd4ef,	// (0x0001a9b4) main_cset_text_pane_t7

0x0006,

0xf9af,	// (0x0001ce74) main_cset_text_pane_t

0x97a6,	// (0x00016c6b) main_cam4_burst_pane

0x97a6,	// (0x00016c6b) main_cam5_pane

0x624f,	// (0x00013714) bg_button_pane_cp019

0x6258,	// (0x0001371d) bg_button_pane_cp020

0xd2eb,	// (0x0001a7b0) main_cset_slider_pane_g7_ParamLimits

0xd2eb,	// (0x0001a7b0) main_cset_slider_pane_g7

0xd2f7,	// (0x0001a7bc) main_cset_slider_pane_g8_ParamLimits

0xd2f7,	// (0x0001a7bc) main_cset_slider_pane_g8

0x63b6,	// (0x0001387b) main_cset_slider_pane_g9_ParamLimits

0x63b6,	// (0x0001387b) main_cset_slider_pane_g9

0x63c2,	// (0x00013887) main_cset_slider_pane_g10_ParamLimits

0x63c2,	// (0x00013887) main_cset_slider_pane_g10

0x63ce,	// (0x00013893) main_cset_slider_pane_g11_ParamLimits

0x63ce,	// (0x00013893) main_cset_slider_pane_g11

0x63da,	// (0x0001389f) main_cset_slider_pane_g12_ParamLimits

0x63da,	// (0x0001389f) main_cset_slider_pane_g12

0x63e6,	// (0x000138ab) main_cset_slider_pane_g13_ParamLimits

0x63e6,	// (0x000138ab) main_cset_slider_pane_g13

0x63f2,	// (0x000138b7) main_cset_slider_pane_g14_ParamLimits

0x63f2,	// (0x000138b7) main_cset_slider_pane_g14

0x63fe,	// (0x000138c3) main_cset_slider_pane_g15_ParamLimits

0x63fe,	// (0x000138c3) main_cset_slider_pane_g15

0xd337,	// (0x0001a7fc) main_cset_slider_pane_t14_ParamLimits

0xd337,	// (0x0001a7fc) main_cset_slider_pane_t14

0xd370,	// (0x0001a835) main_cset_slider_pane_t15_ParamLimits

0xd370,	// (0x0001a835) main_cset_slider_pane_t15

0x6a91,	// (0x00013f56) aid_cam4_burst_size_cell_ParamLimits

0x6a91,	// (0x00013f56) aid_cam4_burst_size_cell

0x6ab1,	// (0x00013f76) grid_cam4_burst_pane_ParamLimits

0x6ab1,	// (0x00013f76) grid_cam4_burst_pane

0x6aeb,	// (0x00013fb0) linegrid_cam4_burst_pane_ParamLimits

0x6aeb,	// (0x00013fb0) linegrid_cam4_burst_pane

0xd4fd,	// (0x0001a9c2) scroll_pane_cp30_ParamLimits

0xd4fd,	// (0x0001a9c2) scroll_pane_cp30

0x6b0d,	// (0x00013fd2) cell_cam4_burst_pane_ParamLimits

0x6b0d,	// (0x00013fd2) cell_cam4_burst_pane

0xd509,	// (0x0001a9ce) linegrid_cam4_burst_pane_g1_ParamLimits

0xd509,	// (0x0001a9ce) linegrid_cam4_burst_pane_g1

0x6b62,	// (0x00014027) linegrid_cam4_burst_pane_g2_ParamLimits

0x6b62,	// (0x00014027) linegrid_cam4_burst_pane_g2

0xd516,	// (0x0001a9db) linegrid_cam4_burst_pane_g3_ParamLimits

0xd516,	// (0x0001a9db) linegrid_cam4_burst_pane_g3

0x0002,

0xf9be,	// (0x0001ce83) linegrid_cam4_burst_pane_g_ParamLimits

0xf9be,	// (0x0001ce83) linegrid_cam4_burst_pane_g

0x6b73,	// (0x00014038) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6b73,	// (0x00014038) linegrid_cam4_burst_pane_g3_copy1

0xd523,	// (0x0001a9e8) linegrid_cam4_burst_pane_g4_ParamLimits

0xd523,	// (0x0001a9e8) linegrid_cam4_burst_pane_g4

0x6b91,	// (0x00014056) linegrid_cam4_burst_pane_g5_ParamLimits

0x6b91,	// (0x00014056) linegrid_cam4_burst_pane_g5

0x6ba2,	// (0x00014067) linegrid_cam4_burst_pane_g6_ParamLimits

0x6ba2,	// (0x00014067) linegrid_cam4_burst_pane_g6

0xd530,	// (0x0001a9f5) linegrid_cam4_burst_pane_g7_ParamLimits

0xd530,	// (0x0001a9f5) linegrid_cam4_burst_pane_g7

0x6bb9,	// (0x0001407e) cell_cam4_burst_pane_g1

0xd549,	// (0x0001aa0e) main_cam5_pane_t1_ParamLimits

0xd549,	// (0x0001aa0e) main_cam5_pane_t1

0xd55b,	// (0x0001aa20) main_cam5_pane_t2_ParamLimits

0xd55b,	// (0x0001aa20) main_cam5_pane_t2

0xd56d,	// (0x0001aa32) main_cam5_pane_t3_ParamLimits

0xd56d,	// (0x0001aa32) main_cam5_pane_t3

0xd57f,	// (0x0001aa44) main_cam5_pane_t4_ParamLimits

0xd57f,	// (0x0001aa44) main_cam5_pane_t4

0xd597,	// (0x0001aa5c) main_cam5_pane_t5_ParamLimits

0xd597,	// (0x0001aa5c) main_cam5_pane_t5

0xd5ab,	// (0x0001aa70) main_cam5_pane_t6_ParamLimits

0xd5ab,	// (0x0001aa70) main_cam5_pane_t6

0xd5bf,	// (0x0001aa84) main_cam5_pane_t7_ParamLimits

0xd5bf,	// (0x0001aa84) main_cam5_pane_t7

0xd5d1,	// (0x0001aa96) main_cam5_pane_t8_ParamLimits

0xd5d1,	// (0x0001aa96) main_cam5_pane_t8

0xd5ef,	// (0x0001aab4) main_cam5_pane_t9_ParamLimits

0xd5ef,	// (0x0001aab4) main_cam5_pane_t9

0xd601,	// (0x0001aac6) main_cam5_pane_t10_ParamLimits

0xd601,	// (0x0001aac6) main_cam5_pane_t10

0xd613,	// (0x0001aad8) main_cam5_pane_t11_ParamLimits

0xd613,	// (0x0001aad8) main_cam5_pane_t11

0xd627,	// (0x0001aaec) main_cam5_pane_t12_ParamLimits

0xd627,	// (0x0001aaec) main_cam5_pane_t12

0xd63e,	// (0x0001ab03) main_cam5_pane_t13_ParamLimits

0xd63e,	// (0x0001ab03) main_cam5_pane_t13

0x000c,

0xf9ca,	// (0x0001ce8f) main_cam5_pane_t_ParamLimits

0xf9ca,	// (0x0001ce8f) main_cam5_pane_t

0x1012,	// (0x0000e4d7) popup_scut_keymap_window_ParamLimits

0x1012,	// (0x0000e4d7) popup_scut_keymap_window

0x6bcc,	// (0x00014091) aid_size_cell_brow_shortcut

0xa1ee,	// (0x000176b3) bg_popup_window_pane_cp010

0x6bd8,	// (0x0001409d) grid_scut_pane

0x6be4,	// (0x000140a9) cell_scut_pane_ParamLimits

0x6be4,	// (0x000140a9) cell_scut_pane

0x6bfd,	// (0x000140c2) cell_scut_pane_g1

0xd661,	// (0x0001ab26) cell_scut_pane_t1

0xd670,	// (0x0001ab35) cell_scut_pane_t2

0x6c06,	// (0x000140cb) cell_scut_pane_t3

0x0002,

0xf9e5,	// (0x0001ceaa) cell_scut_pane_t

0x49cf,	// (0x00011e94) main_mup3_pane_g8_ParamLimits

0x49cf,	// (0x00011e94) main_mup3_pane_g8

0x5cdd,	// (0x000131a2) area_vitu2_query_pane_ParamLimits

0x5cdd,	// (0x000131a2) area_vitu2_query_pane

0x6939,	// (0x00013dfe) input_focus_pane_cp08

0xd67f,	// (0x0001ab44) area_vitu2_query_pane_g1

0x6c14,	// (0x000140d9) area_vitu2_query_pane_g2

0x0001,

0xf9ec,	// (0x0001ceb1) area_vitu2_query_pane_g

0x6c29,	// (0x000140ee) area_vitu2_query_pane_t1_ParamLimits

0x6c29,	// (0x000140ee) area_vitu2_query_pane_t1

0x6c3d,	// (0x00014102) area_vitu2_query_pane_t2_ParamLimits

0x6c3d,	// (0x00014102) area_vitu2_query_pane_t2

0x6c51,	// (0x00014116) area_vitu2_query_pane_t3_ParamLimits

0x6c51,	// (0x00014116) area_vitu2_query_pane_t3

0xd68b,	// (0x0001ab50) area_vitu2_query_pane_t4_ParamLimits

0xd68b,	// (0x0001ab50) area_vitu2_query_pane_t4

0xd6b3,	// (0x0001ab78) area_vitu2_query_pane_t5_ParamLimits

0xd6b3,	// (0x0001ab78) area_vitu2_query_pane_t5

0xd6db,	// (0x0001aba0) area_vitu2_query_pane_t6_ParamLimits

0xd6db,	// (0x0001aba0) area_vitu2_query_pane_t6

0x0006,

0xf9f1,	// (0x0001ceb6) area_vitu2_query_pane_t_ParamLimits

0xf9f1,	// (0x0001ceb6) area_vitu2_query_pane_t

0x6c7d,	// (0x00014142) bg_button_pane_cp018

0x6c8b,	// (0x00014150) bg_button_pane_cp021

0x6c97,	// (0x0001415c) bg_button_pane_cp022

0x6caa,	// (0x0001416f) input_focus_pane_cp09

0x30c3,	// (0x00010588) aid_size_touch_mv_arrow_left

0x30ec,	// (0x000105b1) aid_size_touch_mv_arrow_right

0x6416,	// (0x000138db) main_cset_slider_pane_g16_ParamLimits

0x6416,	// (0x000138db) main_cset_slider_pane_g16

0x6424,	// (0x000138e9) main_cset_slider_pane_g17_ParamLimits

0x6424,	// (0x000138e9) main_cset_slider_pane_g17

0x6bb9,	// (0x0001407e) cell_cam4_burst_pane_g1_ParamLimits

0x97a6,	// (0x00016c6b) compa_mode_pane

0x6648,	// (0x00013b0d) popup_vtel_slider_window_g3_ParamLimits

0x6648,	// (0x00013b0d) popup_vtel_slider_window_g3

0x665f,	// (0x00013b24) popup_vtel_slider_window_g4_ParamLimits

0x665f,	// (0x00013b24) popup_vtel_slider_window_g4

0x6676,	// (0x00013b3b) popup_vtel_slider_window_t1_ParamLimits

0x6676,	// (0x00013b3b) popup_vtel_slider_window_t1

0x97a6,	// (0x00016c6b) main_cl_pane

0xbfe6,	// (0x000194ab) popup_imed_adjust2_window_ParamLimits

0xace0,	// (0x000181a5) bg_tb_trans_pane_cp05_ParamLimits

0xc96e,	// (0x00019e33) popup_imed_adjust2_window_g1_ParamLimits

0xc97d,	// (0x00019e42) popup_imed_adjust2_window_g2_ParamLimits

0xc97d,	// (0x00019e42) popup_imed_adjust2_window_g2

0xc989,	// (0x00019e4e) popup_imed_adjust2_window_g3_ParamLimits

0xc989,	// (0x00019e4e) popup_imed_adjust2_window_g3

0x0002,

0xf767,	// (0x0001cc2c) popup_imed_adjust2_window_g_ParamLimits

0xf767,	// (0x0001cc2c) popup_imed_adjust2_window_g

0xc995,	// (0x00019e5a) popup_imed_adjust2_window_t1_ParamLimits

0xc9ad,	// (0x00019e72) slider_imed_adjust_pane_ParamLimits

0xc9c1,	// (0x00019e86) slider_imed_adjust_pane_g1_ParamLimits

0xc9d1,	// (0x00019e96) slider_imed_adjust_pane_g2_ParamLimits

0xc9e1,	// (0x00019ea6) slider_imed_adjust_pane_g3_ParamLimits

0xc9f2,	// (0x00019eb7) slider_imed_adjust_pane_g4_ParamLimits

0xf76e,	// (0x0001cc33) slider_imed_adjust_pane_g_ParamLimits

0x5a70,	// (0x00012f35) aid_touch_area_cam4_ParamLimits

0x5a70,	// (0x00012f35) aid_touch_area_cam4

0xd03c,	// (0x0001a501) battery_pane_cp01

0x5b43,	// (0x00013008) main_camera4_pane_g6_ParamLimits

0x5b43,	// (0x00013008) main_camera4_pane_g6

0x5b6d,	// (0x00013032) main_camera4_pane_t2_ParamLimits

0x5b6d,	// (0x00013032) main_camera4_pane_t2

0x0001,

0xf870,	// (0x0001cd35) main_camera4_pane_t_ParamLimits

0xf870,	// (0x0001cd35) main_camera4_pane_t

0x5ba2,	// (0x00013067) aid_touch_area_vid4_ParamLimits

0x5ba2,	// (0x00013067) aid_touch_area_vid4

0x5bf9,	// (0x000130be) main_video4_pane_g5_ParamLimits

0x5bf9,	// (0x000130be) main_video4_pane_g5

0x5c1f,	// (0x000130e4) vid4_progress_pane_ParamLimits

0x5c1f,	// (0x000130e4) vid4_progress_pane

0xd303,	// (0x0001a7c8) main_cset_slider_pane_g18_ParamLimits

0xd303,	// (0x0001a7c8) main_cset_slider_pane_g18

0xd53d,	// (0x0001aa02) cell_cam4_burst_pane_g2_ParamLimits

0xd53d,	// (0x0001aa02) cell_cam4_burst_pane_g2

0x0001,

0xf9c5,	// (0x0001ce8a) cell_cam4_burst_pane_g_ParamLimits

0xf9c5,	// (0x0001ce8a) cell_cam4_burst_pane_g

0x9fdb,	// (0x000174a0) bg_cl_pane_ParamLimits

0x9fdb,	// (0x000174a0) bg_cl_pane

0x6cbb,	// (0x00014180) cl_header_pane_ParamLimits

0x6cbb,	// (0x00014180) cl_header_pane

0x6ccf,	// (0x00014194) cl_listscroll_pane_ParamLimits

0x6ccf,	// (0x00014194) cl_listscroll_pane

0xd727,	// (0x0001abec) bg_cl_pane_g1

0xd72f,	// (0x0001abf4) bg_cl_pane_g2

0xd737,	// (0x0001abfc) bg_cl_pane_g3

0xd73f,	// (0x0001ac04) bg_cl_pane_g4

0xd747,	// (0x0001ac0c) bg_cl_pane_g5

0xd74f,	// (0x0001ac14) bg_cl_pane_g6

0xd757,	// (0x0001ac1c) bg_cl_pane_g7

0xd75f,	// (0x0001ac24) bg_cl_pane_g8

0xd767,	// (0x0001ac2c) bg_cl_pane_g9

0x0008,

0xfa00,	// (0x0001cec5) bg_cl_pane_g

0x6cdf,	// (0x000141a4) aid_height_cl_leading_ParamLimits

0x6cdf,	// (0x000141a4) aid_height_cl_leading

0x6ceb,	// (0x000141b0) aid_height_cl_text_ParamLimits

0x6ceb,	// (0x000141b0) aid_height_cl_text

0x981b,	// (0x00016ce0) bg_cl_header_pane_ParamLimits

0x981b,	// (0x00016ce0) bg_cl_header_pane

0x6d0a,	// (0x000141cf) cl_header_pane_g1_ParamLimits

0x6d0a,	// (0x000141cf) cl_header_pane_g1

0x6d20,	// (0x000141e5) cl_header_pane_t1_ParamLimits

0x6d20,	// (0x000141e5) cl_header_pane_t1

0xd76f,	// (0x0001ac34) cl_list_pane

0xd2d6,	// (0x0001a79b) hc_scroll_pane_cp01

0xa438,	// (0x000178fd) bg_cl_header_pane_g1

0xd1b8,	// (0x0001a67d) bg_cl_header_pane_g2

0xa458,	// (0x0001791d) bg_cl_header_pane_g3

0xd1c8,	// (0x0001a68d) bg_cl_header_pane_g4

0xd1c0,	// (0x0001a685) bg_cl_header_pane_g5

0xd42c,	// (0x0001a8f1) bg_cl_header_pane_g6

0xd1e0,	// (0x0001a6a5) bg_cl_header_pane_g7

0xd1e8,	// (0x0001a6ad) bg_cl_header_pane_g8

0xd1d8,	// (0x0001a69d) bg_cl_header_pane_g9

0x0008,

0xfa13,	// (0x0001ced8) bg_cl_header_pane_g

0x6d39,	// (0x000141fe) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6d39,	// (0x000141fe) hc_cl_list_double_graphic_heading_pane

0x6d4c,	// (0x00014211) hc_cl_list_single_graphic_pane_ParamLimits

0x6d4c,	// (0x00014211) hc_cl_list_single_graphic_pane

0x6d64,	// (0x00014229) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6d64,	// (0x00014229) hc_cl_list_single_graphic_pane_g1

0x6d70,	// (0x00014235) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6d70,	// (0x00014235) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa26,	// (0x0001ceeb) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa26,	// (0x0001ceeb) hc_cl_list_single_graphic_pane_g

0x6d84,	// (0x00014249) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6d84,	// (0x00014249) hc_cl_list_single_graphic_pane_t1

0x6d64,	// (0x00014229) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6d64,	// (0x00014229) hc_cl_list_double_graphic_heading_pane_g1

0x6d99,	// (0x0001425e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6d99,	// (0x0001425e) hc_cl_list_double_graphic_heading_pane_g2

0x6dad,	// (0x00014272) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6dad,	// (0x00014272) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa2b,	// (0x0001cef0) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa2b,	// (0x0001cef0) hc_cl_list_double_graphic_heading_pane_g

0x6dc1,	// (0x00014286) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6dc1,	// (0x00014286) hc_cl_list_double_graphic_heading_pane_t1

0x6dd6,	// (0x0001429b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6dd6,	// (0x0001429b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa32,	// (0x0001cef7) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa32,	// (0x0001cef7) hc_cl_list_double_graphic_heading_pane_t

0xd780,	// (0x0001ac45) vid4_progress_pane_g1

0xd790,	// (0x0001ac55) vid4_progress_pane_g2

0xd7a0,	// (0x0001ac65) vid4_progress_pane_g3

0xd7b2,	// (0x0001ac77) vid4_progress_pane_g4

0x0004,

0xfa37,	// (0x0001cefc) vid4_progress_pane_g

0xd7d0,	// (0x0001ac95) vid4_progress_pane_t1

0xd7ea,	// (0x0001acaf) vid4_progress_pane_t2

0x0002,

0xfa42,	// (0x0001cf07) vid4_progress_pane_t

0x6deb,	// (0x000142b0) wait_bar_pane_cp07

0xc2b7,	// (0x0001977c) blid_firmament_pane_ParamLimits

0xc2fa,	// (0x000197bf) popup_blid_sat_info2_window_g1

0xc31e,	// (0x000197e3) popup_blid_sat_info2_window_t3

0xc32c,	// (0x000197f1) popup_blid_sat_info2_window_t4

0xc33a,	// (0x000197ff) popup_blid_sat_info2_window_t5

0xc348,	// (0x0001980d) popup_blid_sat_info2_window_t6

0xc358,	// (0x0001981d) popup_blid_sat_info2_window_t7

0xc366,	// (0x0001982b) popup_blid_sat_info2_window_t8

0xc374,	// (0x00019839) popup_blid_sat_info2_window_t9

0xc382,	// (0x00019847) popup_blid_sat_info2_window_t10

0xc449,	// (0x0001990e) aid_firma_cardinal_ParamLimits

0xc45d,	// (0x00019922) blid_firmament_pane_t1_ParamLimits

0xc474,	// (0x00019939) blid_firmament_pane_t2_ParamLimits

0xc48b,	// (0x00019950) blid_firmament_pane_t3_ParamLimits

0xc4a2,	// (0x00019967) blid_firmament_pane_t4_ParamLimits

0xf660,	// (0x0001cb25) blid_firmament_pane_t_ParamLimits

0xc4b9,	// (0x0001997e) blid_sat_info_pane_ParamLimits

0x981b,	// (0x00016ce0) main_cam_set_pane_ParamLimits

0x51d8,	// (0x0001269d) aid_size_cell_colour_35_ParamLimits

0x51f8,	// (0x000126bd) aid_size_cell_colour_112_ParamLimits

0x5218,	// (0x000126dd) aid_size_cell_effect_ParamLimits

0xace0,	// (0x000181a5) bg_tb_trans_pane_cp02_ParamLimits

0xa6ce,	// (0x00017b93) heading_imed_pane_ParamLimits

0x5238,	// (0x000126fd) listscroll_imed_pane_ParamLimits

0xb6cf,	// (0x00018b94) popup_call2_audio_first_window_g5_ParamLimits

0xb6cf,	// (0x00018b94) popup_call2_audio_first_window_g5

0x5681,	// (0x00012b46) aid_size_touch_image3_arrow_left_ParamLimits

0x5681,	// (0x00012b46) aid_size_touch_image3_arrow_left

0x56ad,	// (0x00012b72) aid_size_touch_image3_arrow_right_ParamLimits

0x56ad,	// (0x00012b72) aid_size_touch_image3_arrow_right

0xd7ff,	// (0x0001acc4) vid4_progress_pane_t3

0x53dd,	// (0x000128a2) main_hwr_training_symbol_option_pane_ParamLimits

0x53dd,	// (0x000128a2) main_hwr_training_symbol_option_pane

0xcbb3,	// (0x0001a078) popup_hwr_training_preview_window_ParamLimits

0xcbb3,	// (0x0001a078) popup_hwr_training_preview_window

0x53fd,	// (0x000128c2) hwr_training_navi_pane_g5_ParamLimits

0x53fd,	// (0x000128c2) hwr_training_navi_pane_g5

0xd1a6,	// (0x0001a66b) popup_char_count_window

0x981b,	// (0x00016ce0) bg_popup_sub_pane_cp20_ParamLimits

0x6788,	// (0x00013c4d) list_vitu2_match_list_pane_ParamLimits

0x6794,	// (0x00013c59) vitu2_page_scroll_pane_ParamLimits

0x6794,	// (0x00013c59) vitu2_page_scroll_pane

0xd836,	// (0x0001acfb) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd836,	// (0x0001acfb) list_single_hwr_training_symbol_option_pane

0xd849,	// (0x0001ad0e) list_single_hwr_training_symbol_option_pane_g1

0xd851,	// (0x0001ad16) list_single_hwr_training_symbol_option_pane_t1

0xd85f,	// (0x0001ad24) bg_button_pane_cp023

0xd868,	// (0x0001ad2d) bg_button_pane_cp024

0xd89b,	// (0x0001ad60) vitu2_page_scroll_pane_g1

0xd8a3,	// (0x0001ad68) vitu2_page_scroll_pane_g2

0x0001,

0xfa49,	// (0x0001cf0e) vitu2_page_scroll_pane_g

0xd8ab,	// (0x0001ad70) vitu2_page_scroll_pane_t1

0xcf85,	// (0x0001a44a) popup_char_count_window_g1

0xd8ba,	// (0x0001ad7f) popup_char_count_window_g2

0xcf8e,	// (0x0001a453) popup_char_count_window_g3

0x0002,

0xfa4e,	// (0x0001cf13) popup_char_count_window_g

0xd8c3,	// (0x0001ad88) popup_char_count_window_t1

0x97a6,	// (0x00016c6b) main_vded2_pane

0xc95a,	// (0x00019e1f) aid_size_cell_imed_line

0xc964,	// (0x00019e29) grid_imed_line_width_pane

0xd0f6,	// (0x0001a5bb) vid4_indicators_pane_g4

0xd8d1,	// (0x0001ad96) cell_imed_line_width_pane_ParamLimits

0xd8d1,	// (0x0001ad96) cell_imed_line_width_pane

0xd8e7,	// (0x0001adac) cell_imed_line_width_pane_g1

0xd8f0,	// (0x0001adb5) cell_imed_line_width_pane_g2

0x0001,

0xfa55,	// (0x0001cf1a) cell_imed_line_width_pane_g

0x6e12,	// (0x000142d7) main_vded2_pane_g1_ParamLimits

0x6e12,	// (0x000142d7) main_vded2_pane_g1

0x6e2d,	// (0x000142f2) main_vded2_pane_g2_ParamLimits

0x6e2d,	// (0x000142f2) main_vded2_pane_g2

0x0001,

0xfa5a,	// (0x0001cf1f) main_vded2_pane_g_ParamLimits

0xfa5a,	// (0x0001cf1f) main_vded2_pane_g

0x6e3f,	// (0x00014304) vded2_slider_pane_ParamLimits

0x6e3f,	// (0x00014304) vded2_slider_pane

0x6e4f,	// (0x00014314) aid_size_touch_vded2_end

0x6e59,	// (0x0001431e) aid_size_touch_vded2_playhead

0xd8f8,	// (0x0001adbd) aid_size_touch_vded2_start

0xd900,	// (0x0001adc5) vded2_slider_bg_pane

0xd909,	// (0x0001adce) vded2_slider_pane_g1

0xd912,	// (0x0001add7) vded2_slider_pane_g2

0x6e63,	// (0x00014328) vded2_slider_pane_g3

0x0002,

0xfa5f,	// (0x0001cf24) vded2_slider_pane_g

0xcf97,	// (0x0001a45c) vded2_slider_bg_pane_g1

0xcfa0,	// (0x0001a465) vded2_slider_bg_pane_g2

0xcfa9,	// (0x0001a46e) vded2_slider_bg_pane_g3

0x0002,

0xfa66,	// (0x0001cf2b) vded2_slider_bg_pane_g

0x35ac,	// (0x00010a71) aid_postcard_touch_down_pane_ParamLimits

0x35ac,	// (0x00010a71) aid_postcard_touch_down_pane

0x35c4,	// (0x00010a89) aid_postcard_touch_up_pane_ParamLimits

0x35c4,	// (0x00010a89) aid_postcard_touch_up_pane

0x97a6,	// (0x00016c6b) main_blid2_pane

0xbfc8,	// (0x0001948d) popup_blid2_search_window

0x97a6,	// (0x00016c6b) blid2_gps_pane

0x97a6,	// (0x00016c6b) blid2_navig_pane

0x97a6,	// (0x00016c6b) blid2_search_pane

0x97a6,	// (0x00016c6b) blid2_tripm_pane

0x6e6e,	// (0x00014333) blid2_search_pane_g1_ParamLimits

0x6e6e,	// (0x00014333) blid2_search_pane_g1

0x6e81,	// (0x00014346) blid2_search_pane_t1_ParamLimits

0x6e81,	// (0x00014346) blid2_search_pane_t1

0x6e93,	// (0x00014358) aid_size_cell_blid2_gps_ParamLimits

0x6e93,	// (0x00014358) aid_size_cell_blid2_gps

0x6eab,	// (0x00014370) blid2_gps_pane_g1_ParamLimits

0x6eab,	// (0x00014370) blid2_gps_pane_g1

0x6ebf,	// (0x00014384) grid_blid2_satellite_pane_ParamLimits

0x6ebf,	// (0x00014384) grid_blid2_satellite_pane

0x6ed7,	// (0x0001439c) blid2_navig_pane_g1_ParamLimits

0x6ed7,	// (0x0001439c) blid2_navig_pane_g1

0x6ee3,	// (0x000143a8) blid2_navig_pane_t1_ParamLimits

0x6ee3,	// (0x000143a8) blid2_navig_pane_t1

0x6efe,	// (0x000143c3) blid2_navig_pane_t2_ParamLimits

0x6efe,	// (0x000143c3) blid2_navig_pane_t2

0x0001,

0xfa6d,	// (0x0001cf32) blid2_navig_pane_t_ParamLimits

0xfa6d,	// (0x0001cf32) blid2_navig_pane_t

0x6f19,	// (0x000143de) blid2_navig_ring_pane_ParamLimits

0x6f19,	// (0x000143de) blid2_navig_ring_pane

0x6f34,	// (0x000143f9) blid2_speed_pane_ParamLimits

0x6f34,	// (0x000143f9) blid2_speed_pane

0x6f40,	// (0x00014405) blid2_tripm_pane_g1_ParamLimits

0x6f40,	// (0x00014405) blid2_tripm_pane_g1

0x6f5b,	// (0x00014420) blid2_tripm_pane_g2_ParamLimits

0x6f5b,	// (0x00014420) blid2_tripm_pane_g2

0x6f6f,	// (0x00014434) blid2_tripm_pane_g3_ParamLimits

0x6f6f,	// (0x00014434) blid2_tripm_pane_g3

0x6f83,	// (0x00014448) blid2_tripm_pane_g4_ParamLimits

0x6f83,	// (0x00014448) blid2_tripm_pane_g4

0x6f97,	// (0x0001445c) blid2_tripm_pane_g5_ParamLimits

0x6f97,	// (0x0001445c) blid2_tripm_pane_g5

0x0005,

0xfa72,	// (0x0001cf37) blid2_tripm_pane_g_ParamLimits

0xfa72,	// (0x0001cf37) blid2_tripm_pane_g

0x6fbd,	// (0x00014482) blid2_tripm_pane_t1_ParamLimits

0x6fbd,	// (0x00014482) blid2_tripm_pane_t1

0x6fd6,	// (0x0001449b) blid2_tripm_pane_t2_ParamLimits

0x6fd6,	// (0x0001449b) blid2_tripm_pane_t2

0x6fef,	// (0x000144b4) blid2_tripm_pane_t3_ParamLimits

0x6fef,	// (0x000144b4) blid2_tripm_pane_t3

0x0003,

0xfa7f,	// (0x0001cf44) blid2_tripm_pane_t_ParamLimits

0xfa7f,	// (0x0001cf44) blid2_tripm_pane_t

0x7036,	// (0x000144fb) cell_blid2_satellite_pane_ParamLimits

0x7036,	// (0x000144fb) cell_blid2_satellite_pane

0x7052,	// (0x00014517) cell_blid2_satellite_pane_g1

0xd91a,	// (0x0001addf) cell_blid2_satellite_pane_t1

0xa243,	// (0x00017708) blid2_speed_pane_g1

0xd928,	// (0x0001aded) blid2_speed_pane_t1

0xd936,	// (0x0001adfb) blid2_speed_pane_t2

0x0001,

0xfa88,	// (0x0001cf4d) blid2_speed_pane_t

0xa243,	// (0x00017708) blid2_navig_ring_pane_g1

0x705b,	// (0x00014520) blid2_navig_ring_pane_g2

0x7063,	// (0x00014528) blid2_navig_ring_pane_g3

0x706b,	// (0x00014530) blid2_navig_ring_pane_g4

0x7073,	// (0x00014538) blid2_navig_ring_pane_g5

0x0004,

0xfa8d,	// (0x0001cf52) blid2_navig_ring_pane_g

0x97a6,	// (0x00016c6b) bg_popup_window_pane_cp011

0xd944,	// (0x0001ae09) popup_blid2_search_window_g1

0xd94c,	// (0x0001ae11) popup_blid2_search_window_t1

0xd95a,	// (0x0001ae1f) popup_blid2_search_window_t2

0x0001,

0xfa98,	// (0x0001cf5d) popup_blid2_search_window_t

0xa347,	// (0x0001780c) main_browser_pane_g1

0x9fdb,	// (0x000174a0) main_browser_pane_ParamLimits

0x981b,	// (0x00016ce0) bg_button_pane_cp011_ParamLimits

0x5fdb,	// (0x000134a0) cell_vitu2_function_pane_g1_ParamLimits

0xace0,	// (0x000181a5) bg_popup_sub_pane_cp22_ParamLimits

0x6939,	// (0x00013dfe) input_focus_pane_cp08_ParamLimits

0x6950,	// (0x00013e15) popup_vitu2_query_button_pane_ParamLimits

0x6950,	// (0x00013e15) popup_vitu2_query_button_pane

0x6961,	// (0x00013e26) popup_vitu2_query_input_button_pane

0xd487,	// (0x0001a94c) popup_vitu2_query_window_g1_ParamLimits

0x696b,	// (0x00013e30) popup_vitu2_query_window_g2_ParamLimits

0xf999,	// (0x0001ce5e) popup_vitu2_query_window_g_ParamLimits

0x97a6,	// (0x00016c6b) bg_button_pane_cp026

0x707b,	// (0x00014540) popup_vitu2_query_input_button_pane_g1

0x97a6,	// (0x00016c6b) bg_button_pane_cp025

0xd968,	// (0x0001ae2d) popup_vitu2_query_button_pane_t1

0x45bf,	// (0x00011a84) main_mp3_pane_t6

0x45cd,	// (0x00011a92) popup_slider_window_cp01

0xd05a,	// (0x0001a51f) cam4_battery_pane

0xd0af,	// (0x0001a574) cam4_battery_pane_cp02

0xd778,	// (0x0001ac3d) cam4_battery_pane_cp01

0xd778,	// (0x0001ac3d) cam4_battery_pane_cp03

0xa243,	// (0x00017708) cam4_battery_pane_g1

0xd976,	// (0x0001ae3b) cam4_battery_pane_g2

0x0001,

0xfa9d,	// (0x0001cf62) cam4_battery_pane_g

0xc390,	// (0x00019855) popup_blid_sat_info2_window_t11

0x30c3,	// (0x00010588) aid_size_touch_mv_arrow_left_ParamLimits

0x30ec,	// (0x000105b1) aid_size_touch_mv_arrow_right_ParamLimits

0xab41,	// (0x00018006) navi_pane_g1_ParamLimits

0x312b,	// (0x000105f0) navi_pane_g2_ParamLimits

0x3159,	// (0x0001061e) navi_pane_g3_ParamLimits

0xf374,	// (0x0001c839) navi_pane_g_ParamLimits

0x31b3,	// (0x00010678) navi_pane_mv_t1_ParamLimits

0x5244,	// (0x00012709) grid_imed_effect_pane_ParamLimits

0x1c76,	// (0x0000f13b) aid_placing_vt_slider_lsc

0xa292,	// (0x00017757) aid_placing_vt_slider_prt

0x981b,	// (0x00016ce0) bg_tb_trans_pane_cp01_ParamLimits

0xc5f8,	// (0x00019abd) popup_image_details_window_g1_ParamLimits

0xc60b,	// (0x00019ad0) popup_image_details_window_g2_ParamLimits

0xc620,	// (0x00019ae5) popup_image_details_window_g3_ParamLimits

0xc620,	// (0x00019ae5) popup_image_details_window_g3

0xf6a0,	// (0x0001cb65) popup_image_details_window_g_ParamLimits

0xc634,	// (0x00019af9) popup_image_details_window_t1_ParamLimits

0xc646,	// (0x00019b0b) popup_image_details_window_t2_ParamLimits

0xc65f,	// (0x00019b24) popup_image_details_window_t3_ParamLimits

0xc673,	// (0x00019b38) popup_image_details_window_t4_ParamLimits

0xc68e,	// (0x00019b53) popup_image_details_window_t5_ParamLimits

0xf6a7,	// (0x0001cb6c) popup_image_details_window_t_ParamLimits

0x6cf7,	// (0x000141bc) cl_header_name_pane_ParamLimits

0x6cf7,	// (0x000141bc) cl_header_name_pane

0x7083,	// (0x00014548) cl_header_name_pane_t1_ParamLimits

0x7083,	// (0x00014548) cl_header_name_pane_t1

0x70a4,	// (0x00014569) cl_header_name_pane_t2_ParamLimits

0x70a4,	// (0x00014569) cl_header_name_pane_t2

0x70e6,	// (0x000145ab) cl_header_name_pane_t3_ParamLimits

0x70e6,	// (0x000145ab) cl_header_name_pane_t3

0x0002,

0xfaa2,	// (0x0001cf67) cl_header_name_pane_t_ParamLimits

0xfaa2,	// (0x0001cf67) cl_header_name_pane_t

0x3184,	// (0x00010649) navi_pane_mv_g2_ParamLimits

0xd142,	// (0x0001a607) field_vitu2_entry_pane_g1_ParamLimits

0xd14e,	// (0x0001a613) field_vitu2_entry_pane_g2_ParamLimits

0xacaa,	// (0x0001816f) field_vitu2_entry_pane_g3_ParamLimits

0xacaa,	// (0x0001816f) field_vitu2_entry_pane_g3

0xf8a2,	// (0x0001cd67) field_vitu2_entry_pane_g_ParamLimits

0x5e6b,	// (0x00013330) cell_vitu2_itu_pane_g1_ParamLimits

0x5e83,	// (0x00013348) cell_vitu2_itu_pane_g2_ParamLimits

0x5e83,	// (0x00013348) cell_vitu2_itu_pane_g2

0x0001,

0xf8ae,	// (0x0001cd73) cell_vitu2_itu_pane_g_ParamLimits

0xf8ae,	// (0x0001cd73) cell_vitu2_itu_pane_g

0x981b,	// (0x00016ce0) bg_vkb2_func_pane_cp05_ParamLimits

0x981b,	// (0x00016ce0) bg_vkb2_func_pane_cp05

0x981b,	// (0x00016ce0) bg_vkb2_func_pane_cp03

0x981b,	// (0x00016ce0) bg_vkb2_func_pane_cp04

0x981b,	// (0x00016ce0) bg_vkb2_func_pane_cp10_ParamLimits

0x981b,	// (0x00016ce0) bg_vkb2_func_pane_cp10

0x6c97,	// (0x0001415c) bg_vkb2_func_pane_cp08

0x6c7d,	// (0x00014142) bg_vkb2_func_pane_cp06

0x6c8b,	// (0x00014150) bg_vkb2_func_pane_cp07

0xd871,	// (0x0001ad36) bg_vkb2_func_pane_cp11_ParamLimits

0xd871,	// (0x0001ad36) bg_vkb2_func_pane_cp11

0xd886,	// (0x0001ad4b) bg_vkb2_func_pane_cp12_ParamLimits

0xd886,	// (0x0001ad4b) bg_vkb2_func_pane_cp12

0x97a6,	// (0x00016c6b) bg_vkb2_func_pane_cp09

0xd1b8,	// (0x0001a67d) bg_vkb2_func_pane_g1

0xa458,	// (0x0001791d) bg_vkb2_func_pane_g2

0xd1c0,	// (0x0001a685) bg_vkb2_func_pane_g3

0xd1c8,	// (0x0001a68d) bg_vkb2_func_pane_g4

0xd42c,	// (0x0001a8f1) bg_vkb2_func_pane_g5

0xd1e0,	// (0x0001a6a5) bg_vkb2_func_pane_g6

0xd1e8,	// (0x0001a6ad) bg_vkb2_func_pane_g7

0xd1d8,	// (0x0001a69d) bg_vkb2_func_pane_g8

0xa438,	// (0x000178fd) bg_vkb2_func_pane_g9

0x0008,

0xfaa9,	// (0x0001cf6e) bg_vkb2_func_pane_g

0x6fab,	// (0x00014470) blid2_tripm_pane_g6_ParamLimits

0x6fab,	// (0x00014470) blid2_tripm_pane_g6

0xcee6,	// (0x0001a3ab) mp4_progress_pane_g1

0x7022,	// (0x000144e7) blid2_tripm_values_pane_ParamLimits

0x7022,	// (0x000144e7) blid2_tripm_values_pane

0x7117,	// (0x000145dc) blid2_tripm_values_pane_t1

0x7125,	// (0x000145ea) blid2_tripm_values_pane_t2

0x7133,	// (0x000145f8) blid2_tripm_values_pane_t3

0x7141,	// (0x00014606) blid2_tripm_values_pane_t4

0x714f,	// (0x00014614) blid2_tripm_values_pane_t5

0x715d,	// (0x00014622) blid2_tripm_values_pane_t6

0x716b,	// (0x00014630) blid2_tripm_values_pane_t7

0x7179,	// (0x0001463e) blid2_tripm_values_pane_t8

0x7187,	// (0x0001464c) blid2_tripm_values_pane_t9

0x0008,

0xfabc,	// (0x0001cf81) blid2_tripm_values_pane_t

0x1cb3,	// (0x0000f178) call_video_pane_t1_ParamLimits

0x1ccd,	// (0x0000f192) call_video_pane_t2_ParamLimits

0xf222,	// (0x0001c6e7) call_video_pane_t_ParamLimits

0x34cc,	// (0x00010991) msg_header_pane_g1_ParamLimits

0xad9f,	// (0x00018264) msg_header_pane_g2_ParamLimits

0xad9f,	// (0x00018264) msg_header_pane_g2

0x0001,

0xf417,	// (0x0001c8dc) msg_header_pane_g_ParamLimits

0xf417,	// (0x0001c8dc) msg_header_pane_g

0x9fdb,	// (0x000174a0) main_clock2_pane_ParamLimits

0x4f41,	// (0x00012406) grid_clock2_toolbar_pane_ParamLimits

0x4f41,	// (0x00012406) grid_clock2_toolbar_pane

0x4f41,	// (0x00012406) listscroll_clock2_pane_ParamLimits

0x4f41,	// (0x00012406) listscroll_clock2_pane

0x5020,	// (0x000124e5) main_clock2_pane_t3_ParamLimits

0x5020,	// (0x000124e5) main_clock2_pane_t3

0x5043,	// (0x00012508) main_clock2_pane_t4_ParamLimits

0x5043,	// (0x00012508) main_clock2_pane_t4

0xd980,	// (0x0001ae45) cell_clock2_toolbar_pane

0xd988,	// (0x0001ae4d) cell_clock2_toolbar_pane_cp01

0xd988,	// (0x0001ae4d) cell_clock2_toolbar_pane_cp02

0xd990,	// (0x0001ae55) cell_clock2_toolbar_pane_cp03

0xd998,	// (0x0001ae5d) list_clock2_pane

0xaaa7,	// (0x00017f6c) scroll_pane_cp10

0xd9a0,	// (0x0001ae65) list_single_clock2_pane_ParamLimits

0xd9a0,	// (0x0001ae65) list_single_clock2_pane

0xa1ee,	// (0x000176b3) list_highlight_pane_cp08

0xd9ad,	// (0x0001ae72) list_single_clock2_pane_t1

0xd9bb,	// (0x0001ae80) list_single_clock2_pane_t2

0x0001,

0xfacf,	// (0x0001cf94) list_single_clock2_pane_t

0x97a6,	// (0x00016c6b) bg_button_pane_cp10

0xd9c9,	// (0x0001ae8e) cell_clock2_toolbar_pane_g1

0x3538,	// (0x000109fd) aid_main_viewer_pane_g1_ParamLimits

0x3538,	// (0x000109fd) aid_main_viewer_pane_g1

0x3546,	// (0x00010a0b) aid_main_viewer_pane_g2_ParamLimits

0x3546,	// (0x00010a0b) aid_main_viewer_pane_g2

0x3554,	// (0x00010a19) aid_main_viewer_pane_g3_ParamLimits

0x3554,	// (0x00010a19) aid_main_viewer_pane_g3

0x3563,	// (0x00010a28) aid_main_viewer_pane_g4_ParamLimits

0x3563,	// (0x00010a28) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x0001c8ed) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x0001c8ed) aid_main_viewer_pane_g

0x3f01,	// (0x000113c6) main_calc_pane_ParamLimits

0x3f15,	// (0x000113da) main_dialer2_pane_ParamLimits

0x97a6,	// (0x00016c6b) main_cam6_pane

0x97a6,	// (0x00016c6b) main_vid6_pane

0x4f4d,	// (0x00012412) listscroll_gen_pane_cp06_ParamLimits

0x4f4d,	// (0x00012412) listscroll_gen_pane_cp06

0x5066,	// (0x0001252b) main_clock2_pane_t5_ParamLimits

0x5066,	// (0x0001252b) main_clock2_pane_t5

0x50c4,	// (0x00012589) aid_call2_pane_cp10_ParamLimits

0x50d6,	// (0x0001259b) aid_call_pane_cp10_ParamLimits

0xab16,	// (0x00017fdb) popup_clock_analogue_window_cp10_g1_ParamLimits

0xab16,	// (0x00017fdb) popup_clock_analogue_window_cp10_g2_ParamLimits

0x50e8,	// (0x000125ad) popup_clock_analogue_window_cp10_g3_ParamLimits

0x50e8,	// (0x000125ad) popup_clock_analogue_window_cp10_g4_ParamLimits

0xab16,	// (0x00017fdb) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf75c,	// (0x0001cc21) popup_clock_analogue_window_cp10_g_ParamLimits

0x50fe,	// (0x000125c3) popup_clock_analogue_window_cp10_t1_ParamLimits

0x562e,	// (0x00012af3) cell_dialer2_keypad_pane_g2_ParamLimits

0x562e,	// (0x00012af3) cell_dialer2_keypad_pane_g2

0x0001,

0xf841,	// (0x0001cd06) cell_dialer2_keypad_pane_g_ParamLimits

0xf841,	// (0x0001cd06) cell_dialer2_keypad_pane_g

0x564a,	// (0x00012b0f) cell_dialer2_keypad_pane_t1

0x630e,	// (0x000137d3) main_cset_text2_pane_ParamLimits

0x630e,	// (0x000137d3) main_cset_text2_pane

0xd67f,	// (0x0001ab44) area_vitu2_query_pane_g1_ParamLimits

0x6c14,	// (0x000140d9) area_vitu2_query_pane_g2_ParamLimits

0xf9ec,	// (0x0001ceb1) area_vitu2_query_pane_g_ParamLimits

0xd703,	// (0x0001abc8) area_vitu2_query_pane_t7_ParamLimits

0xd703,	// (0x0001abc8) area_vitu2_query_pane_t7

0x6c7d,	// (0x00014142) bg_button_pane_cp018_ParamLimits

0x6c8b,	// (0x00014150) bg_button_pane_cp021_ParamLimits

0x6c97,	// (0x0001415c) bg_button_pane_cp022_ParamLimits

0x6c97,	// (0x0001415c) bg_vkb2_func_pane_cp08_ParamLimits

0x6c7d,	// (0x00014142) bg_vkb2_func_pane_cp06_ParamLimits

0x6c8b,	// (0x00014150) bg_vkb2_func_pane_cp07_ParamLimits

0x6caa,	// (0x0001416f) input_focus_pane_cp09_ParamLimits

0xd9d1,	// (0x0001ae96) cam6_autofocus_pane_ParamLimits

0xd9d1,	// (0x0001ae96) cam6_autofocus_pane

0x7195,	// (0x0001465a) cam6_image_uncrop_pane_ParamLimits

0x7195,	// (0x0001465a) cam6_image_uncrop_pane

0x71a4,	// (0x00014669) cam6_indi_pane_ParamLimits

0x71a4,	// (0x00014669) cam6_indi_pane

0x71ba,	// (0x0001467f) cam6_mode_pane_ParamLimits

0x71ba,	// (0x0001467f) cam6_mode_pane

0x71cc,	// (0x00014691) cam6_timer_pane_ParamLimits

0x71cc,	// (0x00014691) cam6_timer_pane

0x71d8,	// (0x0001469d) cam6_zoom_pane_ParamLimits

0x71d8,	// (0x0001469d) cam6_zoom_pane

0x71e6,	// (0x000146ab) cam6_mode_pane_g1_ParamLimits

0x71e6,	// (0x000146ab) cam6_mode_pane_g1

0x71f6,	// (0x000146bb) cam6_mode_pane_g2_ParamLimits

0x71f6,	// (0x000146bb) cam6_mode_pane_g2

0x7206,	// (0x000146cb) cam6_mode_pane_g3_ParamLimits

0x7206,	// (0x000146cb) cam6_mode_pane_g3

0x7216,	// (0x000146db) cam6_mode_pane_g4_ParamLimits

0x7216,	// (0x000146db) cam6_mode_pane_g4

0x0003,

0xfad4,	// (0x0001cf99) cam6_mode_pane_g_ParamLimits

0xfad4,	// (0x0001cf99) cam6_mode_pane_g

0xc146,	// (0x0001960b) bg_tb_trans_pane_cp08_ParamLimits

0xc146,	// (0x0001960b) bg_tb_trans_pane_cp08

0xd9df,	// (0x0001aea4) cam6_battery_pane_ParamLimits

0xd9df,	// (0x0001aea4) cam6_battery_pane

0xd9f5,	// (0x0001aeba) cam6_indi_pane_g1_ParamLimits

0xd9f5,	// (0x0001aeba) cam6_indi_pane_g1

0xda07,	// (0x0001aecc) cam6_indi_pane_g2_ParamLimits

0xda07,	// (0x0001aecc) cam6_indi_pane_g2

0xda19,	// (0x0001aede) cam6_indi_pane_g3_ParamLimits

0xda19,	// (0x0001aede) cam6_indi_pane_g3

0x0002,

0xfadd,	// (0x0001cfa2) cam6_indi_pane_g_ParamLimits

0xfadd,	// (0x0001cfa2) cam6_indi_pane_g

0xda2b,	// (0x0001aef0) cam6_indi_pane_t1_ParamLimits

0xda2b,	// (0x0001aef0) cam6_indi_pane_t1

0x5c64,	// (0x00013129) cam6_autofocus_pane_g1

0x5c6c,	// (0x00013131) cam6_autofocus_pane_g2

0x5c74,	// (0x00013139) cam6_autofocus_pane_g3

0x5c7c,	// (0x00013141) cam6_autofocus_pane_g4

0x0003,

0xfae4,	// (0x0001cfa9) cam6_autofocus_pane_g

0xda51,	// (0x0001af16) cam6_timer_pane_g1

0xda59,	// (0x0001af1e) cam6_timer_pane_t1

0xda67,	// (0x0001af2c) cam6_zoom_cont_pane

0xda6f,	// (0x0001af34) cam6_zoom_pane_g1

0xda77,	// (0x0001af3c) cam6_zoom_pane_g2

0x7226,	// (0x000146eb) cam6_zoom_pane_g3

0x0002,

0xfaed,	// (0x0001cfb2) cam6_zoom_pane_g

0xa243,	// (0x00017708) cam6_battery_pane_g1

0xa243,	// (0x00017708) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x0001c89d) cam6_battery_pane_g

0xda7f,	// (0x0001af44) cam6_zoom_cont_pane_g1

0xda88,	// (0x0001af4d) cam6_zoom_cont_pane_g2

0xda91,	// (0x0001af56) cam6_zoom_cont_pane_g3

0x0002,

0xfaf4,	// (0x0001cfb9) cam6_zoom_cont_pane_g

0x7243,	// (0x00014708) cam6_mode_pane_cp_ParamLimits

0x7243,	// (0x00014708) cam6_mode_pane_cp

0x71d8,	// (0x0001469d) cam6_zoom_pane_cp_ParamLimits

0x71d8,	// (0x0001469d) cam6_zoom_pane_cp

0x7255,	// (0x0001471a) vid6_image_uncrop_cif_pane_ParamLimits

0x7255,	// (0x0001471a) vid6_image_uncrop_cif_pane

0x7265,	// (0x0001472a) vid6_image_uncrop_nhd_pane_ParamLimits

0x7265,	// (0x0001472a) vid6_image_uncrop_nhd_pane

0x7195,	// (0x0001465a) vid6_image_uncrop_vga_pane_ParamLimits

0x7195,	// (0x0001465a) vid6_image_uncrop_vga_pane

0x7274,	// (0x00014739) vid6_image_uncrop_wvga_pane_ParamLimits

0x7274,	// (0x00014739) vid6_image_uncrop_wvga_pane

0x7283,	// (0x00014748) vid6_indi_pane_ParamLimits

0x7283,	// (0x00014748) vid6_indi_pane

0xc146,	// (0x0001960b) bg_tb_trans_pane_cp09_ParamLimits

0xc146,	// (0x0001960b) bg_tb_trans_pane_cp09

0xdaa9,	// (0x0001af6e) cam6_battery_pane_cp_ParamLimits

0xdaa9,	// (0x0001af6e) cam6_battery_pane_cp

0xdab5,	// (0x0001af7a) vid6_indi_pane_g1_ParamLimits

0xdab5,	// (0x0001af7a) vid6_indi_pane_g1

0xdac7,	// (0x0001af8c) vid6_indi_pane_g2_ParamLimits

0xdac7,	// (0x0001af8c) vid6_indi_pane_g2

0xdad9,	// (0x0001af9e) vid6_indi_pane_g3_ParamLimits

0xdad9,	// (0x0001af9e) vid6_indi_pane_g3

0xdaf0,	// (0x0001afb5) vid6_indi_pane_g4_ParamLimits

0xdaf0,	// (0x0001afb5) vid6_indi_pane_g4

0xdb07,	// (0x0001afcc) vid6_indi_pane_g5_ParamLimits

0xdb07,	// (0x0001afcc) vid6_indi_pane_g5

0x0004,

0xfafb,	// (0x0001cfc0) vid6_indi_pane_g_ParamLimits

0xfafb,	// (0x0001cfc0) vid6_indi_pane_g

0xdb21,	// (0x0001afe6) vid6_indi_pane_t1_ParamLimits

0xdb21,	// (0x0001afe6) vid6_indi_pane_t1

0xdb37,	// (0x0001affc) vid6_indi_pane_t2_ParamLimits

0xdb37,	// (0x0001affc) vid6_indi_pane_t2

0xdb5f,	// (0x0001b024) vid6_indi_pane_t3_ParamLimits

0xdb5f,	// (0x0001b024) vid6_indi_pane_t3

0xdb87,	// (0x0001b04c) vid6_indi_pane_t4_ParamLimits

0xdb87,	// (0x0001b04c) vid6_indi_pane_t4

0x0003,

0xfb06,	// (0x0001cfcb) vid6_indi_pane_t_ParamLimits

0xfb06,	// (0x0001cfcb) vid6_indi_pane_t

0xdbab,	// (0x0001b070) wait_bar_pane_cp08

0x729b,	// (0x00014760) main_cset_text2_pane_t1_ParamLimits

0x729b,	// (0x00014760) main_cset_text2_pane_t1

0x722e,	// (0x000146f3) listscroll_gen_pane_cp06_t1_ParamLimits

0x722e,	// (0x000146f3) listscroll_gen_pane_cp06_t1

0x97a6,	// (0x00016c6b) main_cam6_set_pane

0x9f47,	// (0x0001740c) bg_tb_trans_pane_cp06_ParamLimits

0xd062,	// (0x0001a527) cam4_indicators_pane_g1_ParamLimits

0xd073,	// (0x0001a538) cam4_indicators_pane_g2_ParamLimits

0xf87e,	// (0x0001cd43) cam4_indicators_pane_g_ParamLimits

0xd08b,	// (0x0001a550) cam4_indicators_pane_t1_ParamLimits

0x981b,	// (0x00016ce0) bg_tb_trans_pane_cp07_ParamLimits

0xd0b9,	// (0x0001a57e) vid4_indicators_pane_g1_ParamLimits

0xd0cf,	// (0x0001a594) vid4_indicators_pane_g2_ParamLimits

0xd0e3,	// (0x0001a5a8) vid4_indicators_pane_g3_ParamLimits

0xd0f6,	// (0x0001a5bb) vid4_indicators_pane_g4_ParamLimits

0xf890,	// (0x0001cd55) vid4_indicators_pane_g_ParamLimits

0xd114,	// (0x0001a5d9) vid4_indicators_pane_t1_ParamLimits

0xd780,	// (0x0001ac45) vid4_progress_pane_g1_ParamLimits

0xd790,	// (0x0001ac55) vid4_progress_pane_g2_ParamLimits

0xd7a0,	// (0x0001ac65) vid4_progress_pane_g3_ParamLimits

0xd7b2,	// (0x0001ac77) vid4_progress_pane_g4_ParamLimits

0xfa37,	// (0x0001cefc) vid4_progress_pane_g_ParamLimits

0xd7d0,	// (0x0001ac95) vid4_progress_pane_t1_ParamLimits

0xd7ea,	// (0x0001acaf) vid4_progress_pane_t2_ParamLimits

0xd7ff,	// (0x0001acc4) vid4_progress_pane_t3_ParamLimits

0xfa42,	// (0x0001cf07) vid4_progress_pane_t_ParamLimits

0x6deb,	// (0x000142b0) wait_bar_pane_cp07_ParamLimits

0x72bc,	// (0x00014781) main_cam6_set_pane_g2_ParamLimits

0x72bc,	// (0x00014781) main_cam6_set_pane_g2

0x72e2,	// (0x000147a7) main_cset6_listscroll_pane_ParamLimits

0x72e2,	// (0x000147a7) main_cset6_listscroll_pane

0x7300,	// (0x000147c5) main_cset6_slider_pane_ParamLimits

0x7300,	// (0x000147c5) main_cset6_slider_pane

0x7316,	// (0x000147db) main_cset6_text2_pane_ParamLimits

0x7316,	// (0x000147db) main_cset6_text2_pane

0xdbba,	// (0x0001b07f) main_cset6_text_pane

0xdbc2,	// (0x0001b087) main_cset_list_pane_copy1_ParamLimits

0xdbc2,	// (0x0001b087) main_cset_list_pane_copy1

0xdbd2,	// (0x0001b097) scroll_pane_cp028_copy1

0x7324,	// (0x000147e9) cset_list_set_pane_copy1

0x7338,	// (0x000147fd) aid_position_infowindow_above_copy1

0x7340,	// (0x00014805) aid_position_infowindow_below_copy1

0x7348,	// (0x0001480d) cset_list_set_pane_g1_copy1

0x7350,	// (0x00014815) cset_list_set_pane_g3_copy1_ParamLimits

0x7350,	// (0x00014815) cset_list_set_pane_g3_copy1

0x735f,	// (0x00014824) cset_list_set_pane_t1_copy1_ParamLimits

0x735f,	// (0x00014824) cset_list_set_pane_t1_copy1

0x981b,	// (0x00016ce0) list_highlight_pane_cp021_copy1_ParamLimits

0x981b,	// (0x00016ce0) list_highlight_pane_cp021_copy1

0xdbdb,	// (0x0001b0a0) cset6_slider_pane_ParamLimits

0xdbdb,	// (0x0001b0a0) cset6_slider_pane

0xdc07,	// (0x0001b0cc) main_cset6_slider_pane_g1_ParamLimits

0xdc07,	// (0x0001b0cc) main_cset6_slider_pane_g1

0x7374,	// (0x00014839) main_cset6_slider_pane_g2_ParamLimits

0x7374,	// (0x00014839) main_cset6_slider_pane_g2

0xdc2f,	// (0x0001b0f4) main_cset6_slider_pane_g3_ParamLimits

0xdc2f,	// (0x0001b0f4) main_cset6_slider_pane_g3

0x739c,	// (0x00014861) main_cset6_slider_pane_g4_ParamLimits

0x739c,	// (0x00014861) main_cset6_slider_pane_g4

0x73a8,	// (0x0001486d) main_cset6_slider_pane_g5_ParamLimits

0x73a8,	// (0x0001486d) main_cset6_slider_pane_g5

0xd2eb,	// (0x0001a7b0) main_cset6_slider_pane_g7_ParamLimits

0xd2eb,	// (0x0001a7b0) main_cset6_slider_pane_g7

0xd2f7,	// (0x0001a7bc) main_cset6_slider_pane_g8_ParamLimits

0xd2f7,	// (0x0001a7bc) main_cset6_slider_pane_g8

0x63b6,	// (0x0001387b) main_cset6_slider_pane_g9_ParamLimits

0x63b6,	// (0x0001387b) main_cset6_slider_pane_g9

0x63c2,	// (0x00013887) main_cset6_slider_pane_g10_ParamLimits

0x63c2,	// (0x00013887) main_cset6_slider_pane_g10

0x63ce,	// (0x00013893) main_cset6_slider_pane_g11_ParamLimits

0x63ce,	// (0x00013893) main_cset6_slider_pane_g11

0x63da,	// (0x0001389f) main_cset6_slider_pane_g12_ParamLimits

0x63da,	// (0x0001389f) main_cset6_slider_pane_g12

0x63e6,	// (0x000138ab) main_cset6_slider_pane_g13_ParamLimits

0x63e6,	// (0x000138ab) main_cset6_slider_pane_g13

0x63f2,	// (0x000138b7) main_cset6_slider_pane_g14_ParamLimits

0x63f2,	// (0x000138b7) main_cset6_slider_pane_g14

0x73b6,	// (0x0001487b) main_cset6_slider_pane_g15_ParamLimits

0x73b6,	// (0x0001487b) main_cset6_slider_pane_g15

0x6416,	// (0x000138db) main_cset6_slider_pane_g16_ParamLimits

0x6416,	// (0x000138db) main_cset6_slider_pane_g16

0x6424,	// (0x000138e9) main_cset6_slider_pane_g17_ParamLimits

0x6424,	// (0x000138e9) main_cset6_slider_pane_g17

0x0011,

0xfb0f,	// (0x0001cfd4) main_cset6_slider_pane_g_ParamLimits

0xfb0f,	// (0x0001cfd4) main_cset6_slider_pane_g

0xdc3b,	// (0x0001b100) main_cset6_slider_pane_t1_ParamLimits

0xdc3b,	// (0x0001b100) main_cset6_slider_pane_t1

0x73e6,	// (0x000148ab) main_cset6_slider_pane_t2_ParamLimits

0x73e6,	// (0x000148ab) main_cset6_slider_pane_t2

0x7411,	// (0x000148d6) main_cset6_slider_pane_t3_ParamLimits

0x7411,	// (0x000148d6) main_cset6_slider_pane_t3

0x743c,	// (0x00014901) main_cset6_slider_pane_t4_ParamLimits

0x743c,	// (0x00014901) main_cset6_slider_pane_t4

0x7469,	// (0x0001492e) main_cset6_slider_pane_t5_ParamLimits

0x7469,	// (0x0001492e) main_cset6_slider_pane_t5

0xdc7c,	// (0x0001b141) main_cset6_slider_pane_t7_ParamLimits

0xdc7c,	// (0x0001b141) main_cset6_slider_pane_t7

0x7496,	// (0x0001495b) main_cset6_slider_pane_t8_ParamLimits

0x7496,	// (0x0001495b) main_cset6_slider_pane_t8

0x74ba,	// (0x0001497f) main_cset6_slider_pane_t9_ParamLimits

0x74ba,	// (0x0001497f) main_cset6_slider_pane_t9

0x74de,	// (0x000149a3) main_cset6_slider_pane_t10_ParamLimits

0x74de,	// (0x000149a3) main_cset6_slider_pane_t10

0x7502,	// (0x000149c7) main_cset6_slider_pane_t11_ParamLimits

0x7502,	// (0x000149c7) main_cset6_slider_pane_t11

0xdcb2,	// (0x0001b177) main_cset6_slider_pane_t14_ParamLimits

0xdcb2,	// (0x0001b177) main_cset6_slider_pane_t14

0xdceb,	// (0x0001b1b0) main_cset6_slider_pane_t15_ParamLimits

0xdceb,	// (0x0001b1b0) main_cset6_slider_pane_t15

0x000b,

0xfb34,	// (0x0001cff9) main_cset6_slider_pane_t_ParamLimits

0xfb34,	// (0x0001cff9) main_cset6_slider_pane_t

0xdd24,	// (0x0001b1e9) cset_slider_pane_g1_copy1

0xdd2d,	// (0x0001b1f2) cset_slider_pane_g2_copy1

0xdd36,	// (0x0001b1fb) cset_slider_pane_g3_copy1

0x97a6,	// (0x00016c6b) bg_popup_sub_pane_cp011_copy1

0xdd48,	// (0x0001b20d) main_cset_text_pane_g1_copy1

0xd49b,	// (0x0001a960) main_cset_text_pane_t1_copy1

0xd4a9,	// (0x0001a96e) main_cset_text_pane_t2_copy1

0xd4b7,	// (0x0001a97c) main_cset_text_pane_t3_copy1

0xd4c5,	// (0x0001a98a) main_cset_text_pane_t4_copy1

0xd4d3,	// (0x0001a998) main_cset_text_pane_t5_copy1

0xdd50,	// (0x0001b215) main_cset_text_pane_t6_copy1

0xdd5e,	// (0x0001b223) main_cset_text_pane_t7_copy1

0x729b,	// (0x00014760) main_cset_text2_pane_t1_copy1

0x981b,	// (0x00016ce0) main_ncimui_pane

0x41af,	// (0x00011674) popup_query_ncimui_window_ParamLimits

0x41af,	// (0x00011674) popup_query_ncimui_window

0xc72f,	// (0x00019bf4) field_cale_ev2_pane_g4_ParamLimits

0xc72f,	// (0x00019bf4) field_cale_ev2_pane_g4

0x54f9,	// (0x000129be) cell_video_dialer_keypad_pane_g2_ParamLimits

0x54f9,	// (0x000129be) cell_video_dialer_keypad_pane_g2

0x0001,

0xf818,	// (0x0001ccdd) cell_video_dialer_keypad_pane_g_ParamLimits

0xf818,	// (0x0001ccdd) cell_video_dialer_keypad_pane_g

0x5511,	// (0x000129d6) cell_video_dialer_keypad_pane_t1

0x97a6,	// (0x00016c6b) bg_popup_window_pane_cp012

0xbf22,	// (0x000193e7) heading_pane_cp06

0xdd8a,	// (0x0001b24f) ncim_query_content_pane

0x97a6,	// (0x00016c6b) bg_popup_heading_pane_cp01

0xdd92,	// (0x0001b257) ncim_heading_pane_t1

0xdda0,	// (0x0001b265) ncim_indicator_popup_pane

0xddb2,	// (0x0001b277) ncim_query_button_pane

0xddc8,	// (0x0001b28d) ncim_query_content_pane_t1

0xddda,	// (0x0001b29f) ncim_query_content_pane_t2

0x0005,

0xfb78,	// (0x0001d03d) ncim_query_content_pane_t

0xde14,	// (0x0001b2d9) ncim_query_list_pane

0xde26,	// (0x0001b2eb) ncim_query_popup_pane

0xdda0,	// (0x0001b265) ncim_indicator_popup_pane_ParamLimits

0x766e,	// (0x00014b33) ncim_query_content_pane_g1_ParamLimits

0x766e,	// (0x00014b33) ncim_query_content_pane_g1

0xddc8,	// (0x0001b28d) ncim_query_content_pane_t1_ParamLimits

0xddda,	// (0x0001b29f) ncim_query_content_pane_t2_ParamLimits

0x767a,	// (0x00014b3f) ncim_query_content_pane_t3_ParamLimits

0x767a,	// (0x00014b3f) ncim_query_content_pane_t3

0x76a2,	// (0x00014b67) ncim_query_content_pane_t4_ParamLimits

0x76a2,	// (0x00014b67) ncim_query_content_pane_t4

0x76ca,	// (0x00014b8f) ncim_query_content_pane_t5_ParamLimits

0x76ca,	// (0x00014b8f) ncim_query_content_pane_t5

0xddec,	// (0x0001b2b1) ncim_query_content_pane_t6_ParamLimits

0xddec,	// (0x0001b2b1) ncim_query_content_pane_t6

0xfb78,	// (0x0001d03d) ncim_query_content_pane_t_ParamLimits

0xde14,	// (0x0001b2d9) ncim_query_list_pane_ParamLimits

0xde26,	// (0x0001b2eb) ncim_query_popup_pane_ParamLimits

0xde3a,	// (0x0001b2ff) wait_bar_pane_cp04

0x97a6,	// (0x00016c6b) input_focus_pane_cp011

0xde42,	// (0x0001b307) ncim_query_popup_pane_t1

0xde50,	// (0x0001b315) ncim_list_query_list_pane_ParamLimits

0xde50,	// (0x0001b315) ncim_list_query_list_pane

0x97a6,	// (0x00016c6b) bg_button_pane_cp027

0xde63,	// (0x0001b328) ncim_query_button_pane_g1

0x97a6,	// (0x00016c6b) list_highlight_pane_cp012

0xde6d,	// (0x0001b332) ncim_list_query_list_pane_g1

0xde75,	// (0x0001b33a) ncim_list_query_list_pane_t1

0xd07f,	// (0x0001a544) cam4_indicators_pane_g3_ParamLimits

0xd07f,	// (0x0001a544) cam4_indicators_pane_g3

0xd102,	// (0x0001a5c7) vid4_indicators_pane_g5_ParamLimits

0xd102,	// (0x0001a5c7) vid4_indicators_pane_g5

0xd7c1,	// (0x0001ac86) vid4_progress_pane_g5_ParamLimits

0xd7c1,	// (0x0001ac86) vid4_progress_pane_g5

0x7559,	// (0x00014a1e) main_ncimui_pane_g1

0x75c2,	// (0x00014a87) ncimui_group_query_pane_ParamLimits

0x75c2,	// (0x00014a87) ncimui_group_query_pane

0x760a,	// (0x00014acf) ncimui_list_pane_ParamLimits

0x760a,	// (0x00014acf) ncimui_list_pane

0x7631,	// (0x00014af6) ncimui_text_pane_ParamLimits

0x7631,	// (0x00014af6) ncimui_text_pane

0x76f2,	// (0x00014bb7) ncimui_text_pane_t1_ParamLimits

0x76f2,	// (0x00014bb7) ncimui_text_pane_t1

0xde83,	// (0x0001b348) ncimui_list_single_graphic_pane_ParamLimits

0xde83,	// (0x0001b348) ncimui_list_single_graphic_pane

0x7710,	// (0x00014bd5) ncimui_query_pane_ParamLimits

0x7710,	// (0x00014bd5) ncimui_query_pane

0x97a6,	// (0x00016c6b) list_highlight_pane_cp013

0xde93,	// (0x0001b358) ncim_list_query_list_pane_t1_copy1

0xde6d,	// (0x0001b332) ncim_list_single_graphic_pane_g1

0x7723,	// (0x00014be8) ncim_query_button_pane_cp01

0x772f,	// (0x00014bf4) ncim_query_entry_pane_ParamLimits

0x772f,	// (0x00014bf4) ncim_query_entry_pane

0x7742,	// (0x00014c07) ncimui_query_pane_g1

0x774e,	// (0x00014c13) ncimui_query_pane_t1_ParamLimits

0x774e,	// (0x00014c13) ncimui_query_pane_t1

0x981b,	// (0x00016ce0) input_focus_pane_cp012

0xdea1,	// (0x0001b366) ncim_query_entry_pane_t1

0x9fdb,	// (0x000174a0) main_im_pane_ParamLimits

0x981b,	// (0x00016ce0) main_mobtv_pane_ParamLimits

0x981b,	// (0x00016ce0) main_mobtv_pane

0x73ce,	// (0x00014893) main_cset6_slider_pane_g18_ParamLimits

0x73ce,	// (0x00014893) main_cset6_slider_pane_g18

0x73da,	// (0x0001489f) main_cset6_slider_pane_g19_ParamLimits

0x73da,	// (0x0001489f) main_cset6_slider_pane_g19

0x9f63,	// (0x00017428) bg_main_mobtv_pane_ParamLimits

0x9f63,	// (0x00017428) bg_main_mobtv_pane

0x7767,	// (0x00014c2c) main_mobtv_info_pane

0x7772,	// (0x00014c37) main_mobtv_loading_pane_ParamLimits

0x7772,	// (0x00014c37) main_mobtv_loading_pane

0xdeb3,	// (0x0001b378) main_mobtv_pg_channel_list_pane

0xdebd,	// (0x0001b382) main_mobtv_pg_hdr_pane

0x777f,	// (0x00014c44) main_mobtv_programe_curr_pane_ParamLimits

0x777f,	// (0x00014c44) main_mobtv_programe_curr_pane

0x778c,	// (0x00014c51) main_mobtv_programe_next_pane_ParamLimits

0x778c,	// (0x00014c51) main_mobtv_programe_next_pane

0xdec6,	// (0x0001b38b) popup_mobtv_noti_window

0xa243,	// (0x00017708) main_tv_pg_hdr_pane_g1

0xded0,	// (0x0001b395) main_tv_pg_hdr_pane_g2

0xded8,	// (0x0001b39d) main_tv_pg_hdr_pane_g3

0xdee0,	// (0x0001b3a5) main_tv_pg_hdr_pane_g4

0xdee8,	// (0x0001b3ad) main_tv_pg_hdr_pane_g5

0xdef2,	// (0x0001b3b7) main_tv_pg_hdr_pane_g6

0xdefc,	// (0x0001b3c1) main_tv_pg_hdr_pane_g7

0xdf06,	// (0x0001b3cb) main_tv_pg_hdr_pane_g8

0xdf10,	// (0x0001b3d5) main_tv_pg_hdr_pane_g9

0xdf1a,	// (0x0001b3df) main_tv_pg_hdr_pane_g10

0xdf24,	// (0x0001b3e9) main_tv_pg_hdr_pane_g11

0x000a,

0xfb85,	// (0x0001d04a) main_tv_pg_hdr_pane_g

0xdf2e,	// (0x0001b3f3) main_tv_pg_hdr_pane_t1

0xdf3c,	// (0x0001b401) main_tv_pg_hdr_pane_t2

0xdf4a,	// (0x0001b40f) main_tv_pg_hdr_pane_t3

0xdf5a,	// (0x0001b41f) main_tv_pg_hdr_pane_t4

0xdf6a,	// (0x0001b42f) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9c,	// (0x0001d061) main_tv_pg_hdr_pane_t

0xdf7a,	// (0x0001b43f) single_mobtv_pg_channel_pane_ParamLimits

0xdf7a,	// (0x0001b43f) single_mobtv_pg_channel_pane

0xdf8c,	// (0x0001b451) single_mobtv_pg_channel_table_pane

0xdf95,	// (0x0001b45a) single_mobtv_pg_channel_thumb_pane

0xdf9e,	// (0x0001b463) single_tv_pg_channel_pane_g1

0xdfa7,	// (0x0001b46c) single_tv_pg_channel_pane_g2

0x0001,

0xfba7,	// (0x0001d06c) single_tv_pg_channel_pane_g

0x9f47,	// (0x0001740c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9f47,	// (0x0001740c) bg_single_mobtv_pg_channel_thumb_pane

0xdfb0,	// (0x0001b475) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfb0,	// (0x0001b475) single_mobtv_pg_channel_thumb_pane_g1

0xdfbe,	// (0x0001b483) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfbe,	// (0x0001b483) single_mobtv_pg_channel_thumb_pane_g2

0xdfca,	// (0x0001b48f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfca,	// (0x0001b48f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbac,	// (0x0001d071) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbac,	// (0x0001d071) single_mobtv_pg_channel_thumb_pane_g

0xdfd6,	// (0x0001b49b) single_mobtv_pg_channel_thumb_pane_t1

0xdfe4,	// (0x0001b4a9) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb3,	// (0x0001d078) single_mobtv_pg_channel_thumb_pane_t

0xa243,	// (0x00017708) bg_single_mobtv_pg_channel_table_pane_g1

0xa243,	// (0x00017708) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x0001c89d) bg_single_mobtv_pg_channel_table_pane_g

0xdff2,	// (0x0001b4b7) single_mobtv_pg_channel_table_pane_t1

0xe000,	// (0x0001b4c5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb8,	// (0x0001d07d) single_mobtv_pg_channel_table_pane_t

0x77a1,	// (0x00014c66) main_mobtv_info_pane_g1_ParamLimits

0x77a1,	// (0x00014c66) main_mobtv_info_pane_g1

0x77bf,	// (0x00014c84) main_mobtv_info_pane_t1_ParamLimits

0x77bf,	// (0x00014c84) main_mobtv_info_pane_t1

0x7837,	// (0x00014cfc) main_mobtv_info_pane_t2_ParamLimits

0x7837,	// (0x00014cfc) main_mobtv_info_pane_t2

0x0002,

0xfbc2,	// (0x0001d087) main_mobtv_info_pane_t_ParamLimits

0xfbc2,	// (0x0001d087) main_mobtv_info_pane_t

0x78c8,	// (0x00014d8d) wait_bar_pane_cp05

0x78da,	// (0x00014d9f) main_mobtv_loading_pane_g1_ParamLimits

0x78da,	// (0x00014d9f) main_mobtv_loading_pane_g1

0x78eb,	// (0x00014db0) main_mobtv_loading_pane_g2_ParamLimits

0x78eb,	// (0x00014db0) main_mobtv_loading_pane_g2

0x78f7,	// (0x00014dbc) main_mobtv_loading_pane_g3_ParamLimits

0x78f7,	// (0x00014dbc) main_mobtv_loading_pane_g3

0x0002,

0xfbc9,	// (0x0001d08e) main_mobtv_loading_pane_g_ParamLimits

0xfbc9,	// (0x0001d08e) main_mobtv_loading_pane_g

0xe00e,	// (0x0001b4d3) main_mobtv_loading_pane_t1_ParamLimits

0xe00e,	// (0x0001b4d3) main_mobtv_loading_pane_t1

0xe026,	// (0x0001b4eb) main_mobtv_loading_pane_t2_ParamLimits

0xe026,	// (0x0001b4eb) main_mobtv_loading_pane_t2

0x0001,

0xfbd0,	// (0x0001d095) main_mobtv_loading_pane_t_ParamLimits

0xfbd0,	// (0x0001d095) main_mobtv_loading_pane_t

0x790a,	// (0x00014dcf) wait_bar_pane_cp06_ParamLimits

0x790a,	// (0x00014dcf) wait_bar_pane_cp06

0xe04a,	// (0x0001b50f) main_mobtv_programe_curr_pane_t1

0xe058,	// (0x0001b51d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd5,	// (0x0001d09a) main_mobtv_programe_curr_pane_t

0xe066,	// (0x0001b52b) main_mobtv_programe_next_pane_t1

0xe074,	// (0x0001b539) main_mobtv_programe_next_pane_t2

0xe082,	// (0x0001b547) main_mobtv_programe_next_pane_t3

0x0002,

0xfbda,	// (0x0001d09f) main_mobtv_programe_next_pane_t

0x97a6,	// (0x00016c6b) bg_popup_mobtv_noti_window_pane

0xe090,	// (0x0001b555) popup_mobtv_noti_window_g1

0xe098,	// (0x0001b55d) popup_mobtv_noti_window_t1

0xe0a6,	// (0x0001b56b) popup_mobtv_noti_window_t2

0x0001,

0xfbe1,	// (0x0001d0a6) popup_mobtv_noti_window_t

0xa243,	// (0x00017708) bg_popup_mobtv_noti_window_pane_g1

0x97a6,	// (0x00016c6b) sc_clock_pane

0x97a6,	// (0x00016c6b) main_fs_bigclock_pane

0x700c,	// (0x000144d1) blid2_tripm_pane_t4_ParamLimits

0x700c,	// (0x000144d1) blid2_tripm_pane_t4

0x7919,	// (0x00014dde) sc_clock_pane_g1_ParamLimits

0x7919,	// (0x00014dde) sc_clock_pane_g1

0x792b,	// (0x00014df0) sc_clock_pane_t1_ParamLimits

0x792b,	// (0x00014df0) sc_clock_pane_t1

0x794f,	// (0x00014e14) sc_clock_pane_t2_ParamLimits

0x794f,	// (0x00014e14) sc_clock_pane_t2

0x7967,	// (0x00014e2c) sc_clock_pane_t3_ParamLimits

0x7967,	// (0x00014e2c) sc_clock_pane_t3

0x0004,

0xfbe6,	// (0x0001d0ab) sc_clock_pane_t_ParamLimits

0xfbe6,	// (0x0001d0ab) sc_clock_pane_t

0x8815,	// (0x00015cda) main_fs_bigclock_indicator_pane_ParamLimits

0x8815,	// (0x00015cda) main_fs_bigclock_indicator_pane

0x7a2d,	// (0x00014ef2) main_fs_bigclock_pane_g1_ParamLimits

0x7a2d,	// (0x00014ef2) main_fs_bigclock_pane_g1

0x8821,	// (0x00015ce6) main_fs_bigclock_pane_t1_ParamLimits

0x8821,	// (0x00015ce6) main_fs_bigclock_pane_t1

0x8833,	// (0x00015cf8) main_fs_bigclock_pane_t2_ParamLimits

0x8833,	// (0x00015cf8) main_fs_bigclock_pane_t2

0x8847,	// (0x00015d0c) main_fs_bigclock_pane_t3_ParamLimits

0x8847,	// (0x00015d0c) main_fs_bigclock_pane_t3

0x0002,

0xfd77,	// (0x0001d23c) main_fs_bigclock_pane_t_ParamLimits

0xfd77,	// (0x0001d23c) main_fs_bigclock_pane_t

0xeb38,	// (0x0001bffd) main_fs_bigclock_indicator_pane_g1

0xddba,	// (0x0001b27f) ncim_query_content_pane_g2_ParamLimits

0xddba,	// (0x0001b27f) ncim_query_content_pane_g2

0x0001,

0xfb73,	// (0x0001d038) ncim_query_content_pane_g_ParamLimits

0xfb73,	// (0x0001d038) ncim_query_content_pane_g

0x797e,	// (0x00014e43) sc_clock_pane_t4_ParamLimits

0x797e,	// (0x00014e43) sc_clock_pane_t4

0x981b,	// (0x00016ce0) main_radioblah_pane

0xcfc0,	// (0x0001a485) cell_call4_button_pane_t1_copy1_ParamLimits

0xcfc0,	// (0x0001a485) cell_call4_button_pane_t1_copy1

0x7571,	// (0x00014a36) main_ncimui_pane_t1_ParamLimits

0x7571,	// (0x00014a36) main_ncimui_pane_t1

0x758b,	// (0x00014a50) main_ncimui_pane_t2_ParamLimits

0x758b,	// (0x00014a50) main_ncimui_pane_t2

0x0002,

0xfb6c,	// (0x0001d031) main_ncimui_pane_t_ParamLimits

0xfb6c,	// (0x0001d031) main_ncimui_pane_t

0xe0b4,	// (0x0001b579) main_radioblah_anim_pane_ParamLimits

0xe0b4,	// (0x0001b579) main_radioblah_anim_pane

0xe0c5,	// (0x0001b58a) main_radioblah_info_pane_ParamLimits

0xe0c5,	// (0x0001b58a) main_radioblah_info_pane

0xe0d9,	// (0x0001b59e) main_radioblah_pane_t1_ParamLimits

0xe0d9,	// (0x0001b59e) main_radioblah_pane_t1

0xe0f5,	// (0x0001b5ba) main_radioblah_pane_t2_ParamLimits

0xe0f5,	// (0x0001b5ba) main_radioblah_pane_t2

0x0003,

0xfc07,	// (0x0001d0cc) main_radioblah_pane_t_ParamLimits

0xfc07,	// (0x0001d0cc) main_radioblah_pane_t

0x7bd6,	// (0x0001509b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7bd6,	// (0x0001509b) main_radioblah_rocker_ctrl_pane

0xe13d,	// (0x0001b602) main_radioblah_info_pane_t1_ParamLimits

0xe13d,	// (0x0001b602) main_radioblah_info_pane_t1

0x7c2e,	// (0x000150f3) main_radioblah_info_pane_t2_ParamLimits

0x7c2e,	// (0x000150f3) main_radioblah_info_pane_t2

0x0003,

0xfc10,	// (0x0001d0d5) main_radioblah_info_pane_t_ParamLimits

0xfc10,	// (0x0001d0d5) main_radioblah_info_pane_t

0xa243,	// (0x00017708) main_radioblah_rocker_ctrl_pane_g1

0x7cde,	// (0x000151a3) main_radioblah_rocker_ctrl_pane_g2

0x7ce6,	// (0x000151ab) main_radioblah_rocker_ctrl_pane_g3

0x7cee,	// (0x000151b3) main_radioblah_rocker_ctrl_pane_g4

0x7cf6,	// (0x000151bb) main_radioblah_rocker_ctrl_pane_g5

0x7cfe,	// (0x000151c3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc19,	// (0x0001d0de) main_radioblah_rocker_ctrl_pane_g

0x729b,	// (0x00014760) main_cset_text2_pane_t1_copy1_ParamLimits

0xd050,	// (0x0001a515) cam4_image_uncrop_qvga_pane

0xd0a5,	// (0x0001a56a) vid4_image_uncrop_qcif_pane

0xd9d1,	// (0x0001ae96) cam6_image_uncrop_qvga_pane_ParamLimits

0xd9d1,	// (0x0001ae96) cam6_image_uncrop_qvga_pane

0xda99,	// (0x0001af5e) vid6_image_uncrop_qcif_pane_ParamLimits

0xda99,	// (0x0001af5e) vid6_image_uncrop_qcif_pane

0x97a6,	// (0x00016c6b) bg_popup_preview_window_pane_cp03

0xdd6c,	// (0x0001b231) list_cset_text2_pane

0xdd74,	// (0x0001b239) main_cset6_text2_pane_g1

0xdd7c,	// (0x0001b241) main_cset6_text2_pane_t1

0xede7,	// (0x0001c2ac) list_cset_text2_pane_t1_ParamLimits

0xede7,	// (0x0001c2ac) list_cset_text2_pane_t1

0x981b,	// (0x00016ce0) main_radioblah_pane_ParamLimits

0x78b4,	// (0x00014d79) main_mobtv_info_pane_t3_ParamLimits

0x78b4,	// (0x00014d79) main_mobtv_info_pane_t3

0x7bc4,	// (0x00015089) main_radioblah_pane_g1

0x7bfe,	// (0x000150c3) main_radioblah_info_pane_g1

0x7c83,	// (0x00015148) main_radioblah_info_pane_t3_ParamLimits

0x7c83,	// (0x00015148) main_radioblah_info_pane_t3

0x2c89,	// (0x0001014e) highlight_cell_cale_month_pane_ParamLimits

0x2c89,	// (0x0001014e) highlight_cell_cale_month_pane

0x97a6,	// (0x00016c6b) main_phob_fisheye_pane

0xc7a4,	// (0x00019c69) scroll_pane_cp0031_ParamLimits

0xc7a4,	// (0x00019c69) scroll_pane_cp0031

0xdbab,	// (0x0001b070) wait_bar_pane_cp08_ParamLimits

0x7324,	// (0x000147e9) cset_list_set_pane_copy1_ParamLimits

0xe177,	// (0x0001b63c) highlight_cell_cale_month_pane_g1

0x7d06,	// (0x000151cb) highlight_cell_cale_month_pane_t1

0xd76f,	// (0x0001ac34) list_gen_pane_cp01

0xd2d6,	// (0x0001a79b) scroll_pane_01

0x7d14,	// (0x000151d9) list_single_double_fisheye_pane

0x7d1d,	// (0x000151e2) list_double_fisheye_pane_g1_ParamLimits

0x7d1d,	// (0x000151e2) list_double_fisheye_pane_g1

0x7d29,	// (0x000151ee) list_double_fisheye_pane_g2_ParamLimits

0x7d29,	// (0x000151ee) list_double_fisheye_pane_g2

0x7d3d,	// (0x00015202) list_double_fisheye_pane_g3_ParamLimits

0x7d3d,	// (0x00015202) list_double_fisheye_pane_g3

0x0004,

0xfc26,	// (0x0001d0eb) list_double_fisheye_pane_g_ParamLimits

0xfc26,	// (0x0001d0eb) list_double_fisheye_pane_g

0x7d66,	// (0x0001522b) list_double_fisheye_pane_t1_ParamLimits

0x7d66,	// (0x0001522b) list_double_fisheye_pane_t1

0x7d81,	// (0x00015246) list_double_fisheye_pane_t2_ParamLimits

0x7d81,	// (0x00015246) list_double_fisheye_pane_t2

0x0001,

0xfc31,	// (0x0001d0f6) list_double_fisheye_pane_t_ParamLimits

0xfc31,	// (0x0001d0f6) list_double_fisheye_pane_t

0x97a6,	// (0x00016c6b) main_call5_pane

0x79a9,	// (0x00014e6e) sc_swipe_pane_ParamLimits

0x79a9,	// (0x00014e6e) sc_swipe_pane

0x7db6,	// (0x0001527b) call5_image_pane_ParamLimits

0x7db6,	// (0x0001527b) call5_image_pane

0x7dd3,	// (0x00015298) call5_swipe_1_pane_ParamLimits

0x7dd3,	// (0x00015298) call5_swipe_1_pane

0x7de6,	// (0x000152ab) call5_swipe_2_pane_ParamLimits

0x7de6,	// (0x000152ab) call5_swipe_2_pane

0x7e11,	// (0x000152d6) popup_call5_audio_first_window_ParamLimits

0x7e11,	// (0x000152d6) popup_call5_audio_first_window

0x9f47,	// (0x0001740c) call5_swipe_1_pane_g1_ParamLimits

0x9f47,	// (0x0001740c) call5_swipe_1_pane_g1

0xe17f,	// (0x0001b644) call5_swipe_1_pane_g2_ParamLimits

0xe17f,	// (0x0001b644) call5_swipe_1_pane_g2

0x0001,

0xfc36,	// (0x0001d0fb) call5_swipe_1_pane_g_ParamLimits

0xfc36,	// (0x0001d0fb) call5_swipe_1_pane_g

0xe18b,	// (0x0001b650) call5_swipe_1_pane_t1_ParamLimits

0xe18b,	// (0x0001b650) call5_swipe_1_pane_t1

0x9f47,	// (0x0001740c) call5_swipe_2_pane_g1_ParamLimits

0x9f47,	// (0x0001740c) call5_swipe_2_pane_g1

0xe1a0,	// (0x0001b665) call5_swipe_2_pane_g2_ParamLimits

0xe1a0,	// (0x0001b665) call5_swipe_2_pane_g2

0x0001,

0xfc3b,	// (0x0001d100) call5_swipe_2_pane_g_ParamLimits

0xfc3b,	// (0x0001d100) call5_swipe_2_pane_g

0xe1ac,	// (0x0001b671) call5_swipe_2_pane_t1_ParamLimits

0xe1ac,	// (0x0001b671) call5_swipe_2_pane_t1

0xe1c1,	// (0x0001b686) sc_swipe_pane_g1_ParamLimits

0xe1c1,	// (0x0001b686) sc_swipe_pane_g1

0xe1ce,	// (0x0001b693) sc_swipe_pane_g2_ParamLimits

0xe1ce,	// (0x0001b693) sc_swipe_pane_g2

0x0001,

0xfc40,	// (0x0001d105) sc_swipe_pane_g_ParamLimits

0xfc40,	// (0x0001d105) sc_swipe_pane_g

0xe1da,	// (0x0001b69f) sc_swipe_pane_t1_ParamLimits

0xe1da,	// (0x0001b69f) sc_swipe_pane_t1

0x97a6,	// (0x00016c6b) main_cmail_launcher_pane

0x7e26,	// (0x000152eb) aid_size_cell_cmail_l_ParamLimits

0x7e26,	// (0x000152eb) aid_size_cell_cmail_l

0x7e34,	// (0x000152f9) grid_cmail_l_pane_ParamLimits

0x7e34,	// (0x000152f9) grid_cmail_l_pane

0x7e4d,	// (0x00015312) cell_cmail_l_pane_ParamLimits

0x7e4d,	// (0x00015312) cell_cmail_l_pane

0xe1ef,	// (0x0001b6b4) cell_cmail_l_pane_g1_ParamLimits

0xe1ef,	// (0x0001b6b4) cell_cmail_l_pane_g1

0xe1fb,	// (0x0001b6c0) cell_cmail_l_pane_t1_ParamLimits

0xe1fb,	// (0x0001b6c0) cell_cmail_l_pane_t1

0xe211,	// (0x0001b6d6) cell_cmail_l_pane_t2_ParamLimits

0xe211,	// (0x0001b6d6) cell_cmail_l_pane_t2

0x0001,

0xfc45,	// (0x0001d10a) cell_cmail_l_pane_t_ParamLimits

0xfc45,	// (0x0001d10a) cell_cmail_l_pane_t

0x981b,	// (0x00016ce0) grid_highlight_pane_cp018_ParamLimits

0x981b,	// (0x00016ce0) grid_highlight_pane_cp018

0x0ef8,	// (0x0000e3bd) main2_pane_ParamLimits

0x0ef8,	// (0x0000e3bd) main2_pane

0xa097,	// (0x0001755c) popup_sp_fs_action_menu_bg_pane_g1

0xa09f,	// (0x00017564) popup_sp_fs_action_menu_bg_pane_g2

0xa0a7,	// (0x0001756c) popup_sp_fs_action_menu_bg_pane_g3

0xa0af,	// (0x00017574) popup_sp_fs_action_menu_bg_pane_g4

0xa0b7,	// (0x0001757c) popup_sp_fs_action_menu_bg_pane_g5

0xa0bf,	// (0x00017584) popup_sp_fs_action_menu_bg_pane_g6

0xa0c7,	// (0x0001758c) popup_sp_fs_action_menu_bg_pane_g7

0xa0cf,	// (0x00017594) popup_sp_fs_action_menu_bg_pane_g8

0xa0d7,	// (0x0001759c) popup_sp_fs_action_menu_bg_pane_g9

0xa0df,	// (0x000175a4) popup_sp_fs_action_menu_bg_pane_g10

0xa0df,	// (0x000175a4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0001c60a) popup_sp_fs_action_menu_bg_pane_g

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g3_g1

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g3_g2

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0001c6b8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0001c6b8) list_medium_line_x2_t3_g3_g

0xa215,	// (0x000176da) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t3_g3_t1

0xa215,	// (0x000176da) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t3_g3_t2

0xa215,	// (0x000176da) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0001c6bf) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0001c6bf) list_medium_line_x2_t3_g3_t

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g2_g1

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0001c6c6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0001c6c6) list_medium_line_x2_t3_g2_g

0xa215,	// (0x000176da) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t3_g2_t1

0xa215,	// (0x000176da) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t3_g2_t2

0xa215,	// (0x000176da) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0001c6bf) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0001c6bf) list_medium_line_x2_t3_g2_t

0x9f47,	// (0x0001740c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t4_g4_g1

0x9f47,	// (0x0001740c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t4_g4_g2

0x9f47,	// (0x0001740c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t4_g4_g3

0x9f47,	// (0x0001740c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0001c6cb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0001c6cb) list_medium_line_x2_t4_g4_g

0xa215,	// (0x000176da) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t4_g4_t1

0xa215,	// (0x000176da) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t4_g4_t2

0xa215,	// (0x000176da) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t4_g4_t3

0xa215,	// (0x000176da) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0001c6d4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0001c6d4) list_medium_line_x2_t4_g4_t

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g4_g1

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g4_g2

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g4_g3

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0001c6cb) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0001c6cb) list_medium_line_x2_t2_g4_g

0xa215,	// (0x000176da) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t2_g4_t1

0xa215,	// (0x000176da) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x0001c69b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x0001c69b) list_medium_line_x2_t2_g4_t

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g3_g1

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g3_g2

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0001c6b8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0001c6b8) list_medium_line_x2_t2_g3_g

0xa215,	// (0x000176da) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t2_g3_t1

0xa215,	// (0x000176da) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x0001c69b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x0001c69b) list_medium_line_x2_t2_g3_t

0x2df9,	// (0x000102be) main_sp_fs_list_pane_ParamLimits

0x2df9,	// (0x000102be) main_sp_fs_list_pane

0xe3a8,	// (0x0001b86d) sp_fs_scroll_pane_ParamLimits

0xe3a8,	// (0x0001b86d) sp_fs_scroll_pane

0xa7a9,	// (0x00017c6e) list_medium_line_x2_t3_t1

0xa7a9,	// (0x00017c6e) list_medium_line_x2_t3_t2

0xa7a9,	// (0x00017c6e) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x0001c781) list_medium_line_x2_t3_t

0xa7a9,	// (0x00017c6e) list_medium_line_x3_t4_t1

0xa7a9,	// (0x00017c6e) list_medium_line_x3_t4_t2

0xa7a9,	// (0x00017c6e) list_medium_line_x3_t4_t3

0xa7a9,	// (0x00017c6e) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x0001c788) list_medium_line_x3_t4_t

0xa7a9,	// (0x00017c6e) list_medium_line_x4_t5_t1

0xa7a9,	// (0x00017c6e) list_medium_line_x4_t5_t2

0xa7a9,	// (0x00017c6e) list_medium_line_x4_t5_t3

0xa7a9,	// (0x00017c6e) list_medium_line_x4_t5_t4

0xa7a9,	// (0x00017c6e) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x0001c791) list_medium_line_x4_t5_t

0x9f47,	// (0x0001740c) list_medium_line_t4_g4_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_t4_g4_g1

0x9f47,	// (0x0001740c) list_medium_line_t4_g4_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_t4_g4_g2

0x9f47,	// (0x0001740c) list_medium_line_t4_g4_g3_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_t4_g4_g3

0x9f47,	// (0x0001740c) list_medium_line_t4_g4_g4_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x0001c6cb) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x0001c6cb) list_medium_line_t4_g4_g

0xa215,	// (0x000176da) list_medium_line_t4_g4_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t4_g4_t1

0xa215,	// (0x000176da) list_medium_line_t4_g4_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t4_g4_t2

0xa215,	// (0x000176da) list_medium_line_t4_g4_t3_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t4_g4_t3

0xa215,	// (0x000176da) list_medium_line_t4_g4_t4_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0001c6d4) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0001c6d4) list_medium_line_t4_g4_t

0x2ea7,	// (0x0001036c) chi_dic_find_pane_g1

0x3f35,	// (0x000113fa) main_tport_pane

0xa7a9,	// (0x00017c6e) list_medium_line_plain_t1

0x9f47,	// (0x0001740c) list_medium_line_t2_g2_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_t2_g2_g1

0x9f47,	// (0x0001740c) list_medium_line_t2_g2_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0001c6c6) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0001c6c6) list_medium_line_t2_g2_g

0xa215,	// (0x000176da) list_medium_line_t2_g2_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t2_g2_t1

0xa215,	// (0x000176da) list_medium_line_t2_g2_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x0001c69b) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x0001c69b) list_medium_line_t2_g2_t

0xd814,	// (0x0001acd9) aid_sp_fs_list_icon_a_sm

0xd81c,	// (0x0001ace1) aid_sp_fs_list_icon_d

0xd824,	// (0x0001ace9) aid_sp_fs_text_primary

0xd82d,	// (0x0001acf2) aid_sp_fs_text_secondary

0x97a6,	// (0x00016c6b) list_medium_line

0x97a6,	// (0x00016c6b) list_medium_line_g2

0x97a6,	// (0x00016c6b) list_medium_line_g3

0x97a6,	// (0x00016c6b) list_medium_line_plain

0x97a6,	// (0x00016c6b) list_medium_line_plain_t2

0x97a6,	// (0x00016c6b) list_medium_line_plain_t3

0x97a6,	// (0x00016c6b) list_medium_line_right_icon

0x97a6,	// (0x00016c6b) list_medium_line_right_iconx2

0x97a6,	// (0x00016c6b) list_medium_line_t2

0x97a6,	// (0x00016c6b) list_medium_line_t2_g2

0x97a6,	// (0x00016c6b) list_medium_line_t2_g3

0x97a6,	// (0x00016c6b) list_medium_line_t2_right_icon

0x97a6,	// (0x00016c6b) list_medium_line_t2_right_iconx2

0x97a6,	// (0x00016c6b) list_medium_line_t3

0x97a6,	// (0x00016c6b) list_medium_line_t3_g2

0x97a6,	// (0x00016c6b) list_medium_line_t3_g3

0x97a6,	// (0x00016c6b) list_medium_line_t3_right_iconx2

0x97a6,	// (0x00016c6b) list_medium_line_t4_g4

0x97a6,	// (0x00016c6b) list_medium_line_x2

0x97a6,	// (0x00016c6b) list_medium_line_x2_t2_g2

0x97a6,	// (0x00016c6b) list_medium_line_x2_t2_g3

0x97a6,	// (0x00016c6b) list_medium_line_x2_t2_g4

0x97a6,	// (0x00016c6b) list_medium_line_x2_t3

0x97a6,	// (0x00016c6b) list_medium_line_x2_t3_g2

0x97a6,	// (0x00016c6b) list_medium_line_x2_t3_g3

0x97a6,	// (0x00016c6b) list_medium_line_x2_t3_g4

0x97a6,	// (0x00016c6b) list_medium_line_x2_t4_g2

0x97a6,	// (0x00016c6b) list_medium_line_x2_t4_g4

0x97a6,	// (0x00016c6b) list_medium_line_x3

0x97a6,	// (0x00016c6b) list_medium_line_x3_t4

0x97a6,	// (0x00016c6b) list_medium_line_x3_t4_g4

0x97a6,	// (0x00016c6b) list_medium_line_x4_t4

0x97a6,	// (0x00016c6b) list_medium_line_x4_t4_g7

0x97a6,	// (0x00016c6b) list_medium_line_x4_t5

0x6dfe,	// (0x000142c3) list_single_fs_dyc_pane_ParamLimits

0x6dfe,	// (0x000142c3) list_single_fs_dyc_pane

0x9f47,	// (0x0001740c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x4_t4_g7_g1

0x9f47,	// (0x0001740c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x4_t4_g7_g2

0x9f47,	// (0x0001740c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x4_t4_g7_g3

0x9f47,	// (0x0001740c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x4_t4_g7_g4

0x9f47,	// (0x0001740c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x4_t4_g7_g5

0x9f47,	// (0x0001740c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x4_t4_g7_g6

0x9f55,	// (0x0001741a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9f55,	// (0x0001741a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4d,	// (0x0001d012) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4d,	// (0x0001d012) list_medium_line_x4_t4_g7_g

0xa215,	// (0x000176da) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x4_t4_g7_t1

0xa215,	// (0x000176da) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x4_t4_g7_t2

0xa215,	// (0x000176da) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x4_t4_g7_t3

0xaccc,	// (0x00018191) list_medium_line_x4_t4_g7_t4_ParamLimits

0xaccc,	// (0x00018191) list_medium_line_x4_t4_g7_t4

0xaccc,	// (0x00018191) list_medium_line_x4_t4_g7_t5_ParamLimits

0xaccc,	// (0x00018191) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5c,	// (0x0001d021) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5c,	// (0x0001d021) list_medium_line_x4_t4_g7_t

0x7528,	// (0x000149ed) list_single_dyc_row_pane_ParamLimits

0x7528,	// (0x000149ed) list_single_dyc_row_pane

0x7da3,	// (0x00015268) call5_gesture_pane_ParamLimits

0x7da3,	// (0x00015268) call5_gesture_pane

0x7df9,	// (0x000152be) call5_windows_pane_ParamLimits

0x7df9,	// (0x000152be) call5_windows_pane

0x7e5f,	// (0x00015324) call5_swipe_1_pane_cp_ParamLimits

0x7e5f,	// (0x00015324) call5_swipe_1_pane_cp

0x7e6b,	// (0x00015330) call5_swipe_2_pane_cp_ParamLimits

0x7e6b,	// (0x00015330) call5_swipe_2_pane_cp

0xa1ee,	// (0x000176b3) call5_image_pane_cp

0x7e77,	// (0x0001533c) popup_call5_audio_first_window_cp_ParamLimits

0x7e77,	// (0x0001533c) popup_call5_audio_first_window_cp

0xe1c1,	// (0x0001b686) call5_swipe_1_pane_g1_cp_ParamLimits

0xe1c1,	// (0x0001b686) call5_swipe_1_pane_g1_cp

0xe22e,	// (0x0001b6f3) call5_swipe_1_pane_g2_cp

0xe1da,	// (0x0001b69f) call5_swipe_1_pane_t1_cp_ParamLimits

0xe1da,	// (0x0001b69f) call5_swipe_1_pane_t1_cp

0xe1c1,	// (0x0001b686) call5_swipe_2_pane_g1_cp_ParamLimits

0xe1c1,	// (0x0001b686) call5_swipe_2_pane_g1_cp

0xe236,	// (0x0001b6fb) call5_swipe_2_pane_g2_cp

0xe23e,	// (0x0001b703) call5_swipe_2_pane_t1_cp_ParamLimits

0xe23e,	// (0x0001b703) call5_swipe_2_pane_t1_cp

0x981b,	// (0x00016ce0) main_sp_fs_email_pane

0xd3b9,	// (0x0001a87e) main_sp_fs_listscroll_pane_te

0x7e85,	// (0x0001534a) popup_sp_fs_action_menu_pane_ParamLimits

0x7e85,	// (0x0001534a) popup_sp_fs_action_menu_pane

0xa243,	// (0x00017708) bg_sp_fs_ctrlbar_pane_g1

0xe253,	// (0x0001b718) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe25c,	// (0x0001b721) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe265,	// (0x0001b72a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa243,	// (0x00017708) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc4a,	// (0x0001d10f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc154,	// (0x00019619) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc154,	// (0x00019619) bg_sp_fs_ctrlbar_ddmenu_pane

0xe26e,	// (0x0001b733) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe26e,	// (0x0001b733) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe27a,	// (0x0001b73f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe27a,	// (0x0001b73f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc53,	// (0x0001d118) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc53,	// (0x0001d118) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe286,	// (0x0001b74b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe286,	// (0x0001b74b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa243,	// (0x00017708) list_medium_line_t2_right_icon_g1

0xa7a9,	// (0x00017c6e) list_medium_line_t2_right_icon_t1

0xa7a9,	// (0x00017c6e) list_medium_line_t2_right_icon_t2

0x0001,

0xfc58,	// (0x0001d11d) list_medium_line_t2_right_icon_t

0xace0,	// (0x000181a5) bg_sp_fs_ctrlbar_pane_ParamLimits

0xace0,	// (0x000181a5) bg_sp_fs_ctrlbar_pane

0x7f18,	// (0x000153dd) main_sp_fs_ctrlbar_button_pane_cp01

0x7f22,	// (0x000153e7) main_sp_fs_ctrlbar_ddmenu_pane

0xe2da,	// (0x0001b79f) main_sp_fs_ctrlbar_pane_g1

0xe2e6,	// (0x0001b7ab) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5d,	// (0x0001d122) main_sp_fs_ctrlbar_pane_g

0x7f60,	// (0x00015425) main_sp_fs_ctrlbar_pane_t1

0x7f9f,	// (0x00015464) main_sp_fs_ctrlbar_pane

0x7fc3,	// (0x00015488) main_sp_fs_listscroll_pane_te_cp01

0x7fe3,	// (0x000154a8) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7fe3,	// (0x000154a8) popup_sp_fs_action_menu_pane_cp01

0x981b,	// (0x00016ce0) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x981b,	// (0x00016ce0) bg_sp_fs_highlight_list_pane_cp01

0xe30d,	// (0x0001b7d2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe30d,	// (0x0001b7d2) sp_fs_action_menu_list_gene_pane_g1

0xe31c,	// (0x0001b7e1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe31c,	// (0x0001b7e1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc6b,	// (0x0001d130) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc6b,	// (0x0001d130) sp_fs_action_menu_list_gene_pane_g

0xe329,	// (0x0001b7ee) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe329,	// (0x0001b7ee) sp_fs_action_menu_list_gene_pane_t1

0xe341,	// (0x0001b806) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe341,	// (0x0001b806) sp_fs_action_menu_list_gene_pane

0xe364,	// (0x0001b829) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe364,	// (0x0001b829) popup_sp_fs_action_menu_bg_pane

0xe372,	// (0x0001b837) sp_fs_action_menu_list_pane_ParamLimits

0xe372,	// (0x0001b837) sp_fs_action_menu_list_pane

0x8008,	// (0x000154cd) sp_fs_scroll_pane_cp01_ParamLimits

0x8008,	// (0x000154cd) sp_fs_scroll_pane_cp01

0xa7a9,	// (0x00017c6e) list_medium_line_plain_t2_t1

0xa7a9,	// (0x00017c6e) list_medium_line_plain_t2_t2

0x0001,

0xfc58,	// (0x0001d11d) list_medium_line_plain_t2_t

0xa7a9,	// (0x00017c6e) list_medium_line_plain_t3_t1

0xa7a9,	// (0x00017c6e) list_medium_line_plain_t3_t2

0xa7a9,	// (0x00017c6e) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x0001c781) list_medium_line_plain_t3_t

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g2_g1

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0001c6c6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0001c6c6) list_medium_line_x2_t2_g2_g

0xa215,	// (0x000176da) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t2_g2_t1

0xa215,	// (0x000176da) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x0001c69b) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x0001c69b) list_medium_line_x2_t2_g2_t

0x9f47,	// (0x0001740c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t4_g2_g1

0x9f47,	// (0x0001740c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0001c6c6) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0001c6c6) list_medium_line_x2_t4_g2_g

0xa215,	// (0x000176da) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t4_g2_t1

0xa215,	// (0x000176da) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t4_g2_t2

0xa215,	// (0x000176da) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t4_g2_t3

0xa215,	// (0x000176da) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0001c6d4) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0001c6d4) list_medium_line_x2_t4_g2_t

0xa243,	// (0x00017708) list_medium_line_t3_right_iconx2_g1

0xa243,	// (0x00017708) list_medium_line_t3_right_iconx2_g2

0xa243,	// (0x00017708) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x0001c8a2) list_medium_line_t3_right_iconx2_g

0xa7a9,	// (0x00017c6e) list_medium_line_t3_right_iconx2_t1

0xa7a9,	// (0x00017c6e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc58,	// (0x0001d11d) list_medium_line_t3_right_iconx2_t

0x9f47,	// (0x0001740c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x3_t4_g4_g1

0x9f47,	// (0x0001740c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x3_t4_g4_g2

0x9f47,	// (0x0001740c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x3_t4_g4_g3

0x9f47,	// (0x0001740c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x0001c6cb) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x0001c6cb) list_medium_line_x3_t4_g4_g

0xa215,	// (0x000176da) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x3_t4_g4_t1

0xa215,	// (0x000176da) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x3_t4_g4_t2

0xa215,	// (0x000176da) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x3_t4_g4_t3

0xa215,	// (0x000176da) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0001c6d4) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0001c6d4) list_medium_line_x3_t4_g4_t

0x802e,	// (0x000154f3) list_single_dyc_row_text_pane_t1_ParamLimits

0x802e,	// (0x000154f3) list_single_dyc_row_text_pane_t1

0x8077,	// (0x0001553c) list_single_dyc_row_text_pane_t2_ParamLimits

0x8077,	// (0x0001553c) list_single_dyc_row_text_pane_t2

0xe396,	// (0x0001b85b) list_single_dyc_row_text_pane_t3_ParamLimits

0xe396,	// (0x0001b85b) list_single_dyc_row_text_pane_t3

0x0005,

0xfc70,	// (0x0001d135) list_single_dyc_row_text_pane_t_ParamLimits

0xfc70,	// (0x0001d135) list_single_dyc_row_text_pane_t

0xe3c6,	// (0x0001b88b) list_single_dyc_row_pane_g1_ParamLimits

0xe3c6,	// (0x0001b88b) list_single_dyc_row_pane_g1

0xe3d2,	// (0x0001b897) list_single_dyc_row_pane_g2_ParamLimits

0xe3d2,	// (0x0001b897) list_single_dyc_row_pane_g2

0xe3de,	// (0x0001b8a3) list_single_dyc_row_pane_g3_ParamLimits

0xe3de,	// (0x0001b8a3) list_single_dyc_row_pane_g3

0xe3ea,	// (0x0001b8af) list_single_dyc_row_pane_g4_ParamLimits

0xe3ea,	// (0x0001b8af) list_single_dyc_row_pane_g4

0x0003,

0xfc7d,	// (0x0001d142) list_single_dyc_row_pane_g_ParamLimits

0xfc7d,	// (0x0001d142) list_single_dyc_row_pane_g

0xe3f6,	// (0x0001b8bb) list_single_dyc_row_text_pane_ParamLimits

0xe3f6,	// (0x0001b8bb) list_single_dyc_row_text_pane

0x97a6,	// (0x00016c6b) bg_sp_fs_scroll_pane

0xe415,	// (0x0001b8da) thumb_sp_fs_scroll_pane

0x9f47,	// (0x0001740c) list_medium_line_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_g1

0xa215,	// (0x000176da) list_medium_line_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t1

0x9f47,	// (0x0001740c) list_medium_line_x2_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_g1

0x9f47,	// (0x0001740c) list_medium_line_x2_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0001c6c6) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0001c6c6) list_medium_line_x2_g

0xa215,	// (0x000176da) list_medium_line_x2_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t1

0x9f47,	// (0x0001740c) list_medium_line_x3_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x3_g1

0xe41e,	// (0x0001b8e3) list_medium_line_x3_g2_ParamLimits

0xe41e,	// (0x0001b8e3) list_medium_line_x3_g2

0x0001,

0xfc86,	// (0x0001d14b) list_medium_line_x3_g_ParamLimits

0xfc86,	// (0x0001d14b) list_medium_line_x3_g

0xe42c,	// (0x0001b8f1) list_medium_line_x3_t1_ParamLimits

0xe42c,	// (0x0001b8f1) list_medium_line_x3_t1

0xe440,	// (0x0001b905) thumb_sp_fs_scroll_pane_g1

0xe449,	// (0x0001b90e) thumb_sp_fs_scroll_pane_g2

0xe452,	// (0x0001b917) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x0001d150) thumb_sp_fs_scroll_pane_g

0xe440,	// (0x0001b905) bg_sp_fs_scroll_pane_g1

0xe449,	// (0x0001b90e) bg_sp_fs_scroll_pane_g2

0xe452,	// (0x0001b917) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x0001d150) bg_sp_fs_scroll_pane_g

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g4_g1

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g4_g2

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g4_g3

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0001c6cb) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0001c6cb) list_medium_line_x2_t3_g4_g

0xa215,	// (0x000176da) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t3_g4_t1

0xa215,	// (0x000176da) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t3_g4_t2

0xa215,	// (0x000176da) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa215,	// (0x000176da) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0001c6bf) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0001c6bf) list_medium_line_x2_t3_g4_t

0x9f47,	// (0x0001740c) list_medium_line_g2_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_g2_g1

0x9f47,	// (0x0001740c) list_medium_line_g2_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0001c6c6) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0001c6c6) list_medium_line_g2_g

0xa215,	// (0x000176da) list_medium_line_g2_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_g2_t1

0x9f47,	// (0x0001740c) list_medium_line_t3_g2_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_t3_g2_g1

0x9f47,	// (0x0001740c) list_medium_line_t3_g2_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0001c6c6) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0001c6c6) list_medium_line_t3_g2_g

0xa215,	// (0x000176da) list_medium_line_t3_g2_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t3_g2_t1

0xa215,	// (0x000176da) list_medium_line_t3_g2_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t3_g2_t2

0xa215,	// (0x000176da) list_medium_line_t3_g2_t3_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x0001c6bf) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x0001c6bf) list_medium_line_t3_g2_t

0xa243,	// (0x00017708) list_medium_line_right_icon_g1

0xa7a9,	// (0x00017c6e) list_medium_line_right_icon_t1

0x9f47,	// (0x0001740c) list_medium_line_t2_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_t2_g1

0xa215,	// (0x000176da) list_medium_line_t2_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t2_t1

0xa215,	// (0x000176da) list_medium_line_t2_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x0001c69b) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x0001c69b) list_medium_line_t2_t

0x9f47,	// (0x0001740c) list_medium_line_t3_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_t3_g1

0xa215,	// (0x000176da) list_medium_line_t3_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t3_t1

0xa215,	// (0x000176da) list_medium_line_t3_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t3_t2

0xa215,	// (0x000176da) list_medium_line_t3_t3_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x0001c6bf) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x0001c6bf) list_medium_line_t3_t

0x9f47,	// (0x0001740c) list_medium_line_g3_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_g3_g1

0x9f47,	// (0x0001740c) list_medium_line_g3_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_g3_g2

0x9f47,	// (0x0001740c) list_medium_line_g3_g3_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x0001c6b8) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x0001c6b8) list_medium_line_g3_g

0xa215,	// (0x000176da) list_medium_line_g3_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_g3_t1

0x9f47,	// (0x0001740c) list_medium_line_t2_g3_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_t2_g3_g1

0x9f47,	// (0x0001740c) list_medium_line_t2_g3_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_t2_g3_g2

0x9f47,	// (0x0001740c) list_medium_line_t2_g3_g3_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x0001c6b8) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x0001c6b8) list_medium_line_t2_g3_g

0xa215,	// (0x000176da) list_medium_line_t2_g3_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t2_g3_t1

0xa215,	// (0x000176da) list_medium_line_t2_g3_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x0001c69b) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x0001c69b) list_medium_line_t2_g3_t

0x9f47,	// (0x0001740c) list_medium_line_t3_g3_g1_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_t3_g3_g1

0x9f47,	// (0x0001740c) list_medium_line_t3_g3_g2_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_t3_g3_g2

0x9f47,	// (0x0001740c) list_medium_line_t3_g3_g3_ParamLimits

0x9f47,	// (0x0001740c) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x0001c6b8) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x0001c6b8) list_medium_line_t3_g3_g

0xa215,	// (0x000176da) list_medium_line_t3_g3_t1_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t3_g3_t1

0xa215,	// (0x000176da) list_medium_line_t3_g3_t2_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t3_g3_t2

0xa215,	// (0x000176da) list_medium_line_t3_g3_t3_ParamLimits

0xa215,	// (0x000176da) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x0001c6bf) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x0001c6bf) list_medium_line_t3_g3_t

0xa243,	// (0x00017708) list_medium_line_right_iconx2_g1

0xa243,	// (0x00017708) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0001c89d) list_medium_line_right_iconx2_g

0xa7a9,	// (0x00017c6e) list_medium_line_right_iconx2_t1

0xa243,	// (0x00017708) list_medium_line_t2_right_iconx2_g1

0xa243,	// (0x00017708) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0001c89d) list_medium_line_t2_right_iconx2_g

0xa7a9,	// (0x00017c6e) list_medium_line_t2_right_iconx2_t1

0xa7a9,	// (0x00017c6e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc58,	// (0x0001d11d) list_medium_line_t2_right_iconx2_t

0xa7a9,	// (0x00017c6e) list_medium_line_x4_t4_t1

0xa7a9,	// (0x00017c6e) list_medium_line_x4_t4_t2

0xa7a9,	// (0x00017c6e) list_medium_line_x4_t4_t3

0xa7a9,	// (0x00017c6e) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x0001c788) list_medium_line_x4_t4_t

0x81ed,	// (0x000156b2) tport_appsw_pane_ParamLimits

0x81ed,	// (0x000156b2) tport_appsw_pane

0x8204,	// (0x000156c9) tport_contact_pane_ParamLimits

0x8204,	// (0x000156c9) tport_contact_pane

0x821c,	// (0x000156e1) tport_listscroll_pane_ParamLimits

0x821c,	// (0x000156e1) tport_listscroll_pane

0x8230,	// (0x000156f5) cell_tport_appsw_pane_ParamLimits

0x8230,	// (0x000156f5) cell_tport_appsw_pane

0xacaa,	// (0x0001816f) tport_appsw_pane_g1_ParamLimits

0xacaa,	// (0x0001816f) tport_appsw_pane_g1

0xe45b,	// (0x0001b920) tport_contact_pane_g1

0xe464,	// (0x0001b929) tport_contact_pane_t1

0xe472,	// (0x0001b937) tport_contact_pane_t2

0x0001,

0xfc92,	// (0x0001d157) tport_contact_pane_t

0xe480,	// (0x0001b945) list_tport_pane

0xe489,	// (0x0001b94e) scroll_pane_cp_030

0x827a,	// (0x0001573f) cell_tport_appsw_pane_g1

0x828a,	// (0x0001574f) cell_tport_appsw_pane_t1

0x8298,	// (0x0001575d) grid_highlight_pane_cp019

0x82a0,	// (0x00015765) list_tport_double_graphic_pane_ParamLimits

0x82a0,	// (0x00015765) list_tport_double_graphic_pane

0x981b,	// (0x00016ce0) list_highlight_pane_cp023_ParamLimits

0x981b,	// (0x00016ce0) list_highlight_pane_cp023

0x82b7,	// (0x0001577c) list_tport_double_graphic_pane_g1_ParamLimits

0x82b7,	// (0x0001577c) list_tport_double_graphic_pane_g1

0x82c4,	// (0x00015789) list_tport_double_graphic_pane_t1_ParamLimits

0x82c4,	// (0x00015789) list_tport_double_graphic_pane_t1

0x82d9,	// (0x0001579e) list_tport_double_graphic_pane_t2_ParamLimits

0x82d9,	// (0x0001579e) list_tport_double_graphic_pane_t2

0x0001,

0xfc9e,	// (0x0001d163) list_tport_double_graphic_pane_t_ParamLimits

0xfc9e,	// (0x0001d163) list_tport_double_graphic_pane_t

0x97a6,	// (0x00016c6b) main_cale_note_pane

0x5e42,	// (0x00013307) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5e42,	// (0x00013307) cell_vitu2_function_top_wide_pane_cp01

0x78c8,	// (0x00014d8d) wait_bar_pane_cp05_ParamLimits

0x981b,	// (0x00016ce0) listscroll_cmail_pane

0xe492,	// (0x0001b957) list_cmail_pane

0x82eb,	// (0x000157b0) list_cmail_body_pane

0x8302,	// (0x000157c7) list_single_cmail_header_caption_pane

0xe4a2,	// (0x0001b967) list_single_cmail_header_detail_pane_ParamLimits

0xe4a2,	// (0x0001b967) list_single_cmail_header_detail_pane

0xe4d4,	// (0x0001b999) list_single_cmail_header_caption_pane_t1

0x831f,	// (0x000157e4) list_single_cmail_header_detail_pane_g1_ParamLimits

0x831f,	// (0x000157e4) list_single_cmail_header_detail_pane_g1

0xe4eb,	// (0x0001b9b0) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe4eb,	// (0x0001b9b0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca3,	// (0x0001d168) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca3,	// (0x0001d168) list_single_cmail_header_detail_pane_g

0xe504,	// (0x0001b9c9) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe504,	// (0x0001b9c9) list_single_cmail_header_detail_pane_t1

0xe564,	// (0x0001ba29) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe564,	// (0x0001ba29) list_single_cmail_header_editor_pane_bg

0xdfa7,	// (0x0001b46c) list_cmail_body_pane_g1

0xe57b,	// (0x0001ba40) list_cmail_body_pane_t1

0xd1b8,	// (0x0001a67d) list_single_cmail_header_editor_pane_bg_g1

0xa458,	// (0x0001791d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1c8,	// (0x0001a68d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1c0,	// (0x0001a685) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd42c,	// (0x0001a8f1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1e8,	// (0x0001a6ad) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1d8,	// (0x0001a69d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1e0,	// (0x0001a6a5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa438,	// (0x000178fd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8337,	// (0x000157fc) calenote_gesture_pane_ParamLimits

0x8337,	// (0x000157fc) calenote_gesture_pane

0x8357,	// (0x0001581c) calenote_window_pane_ParamLimits

0x8357,	// (0x0001581c) calenote_window_pane

0xe589,	// (0x0001ba4e) popup_note_window_cp01

0x8373,	// (0x00015838) calenote_swipe_1_pane_ParamLimits

0x8373,	// (0x00015838) calenote_swipe_1_pane

0x7e6b,	// (0x00015330) calenote_swipe_2_pane_ParamLimits

0x7e6b,	// (0x00015330) calenote_swipe_2_pane

0xe1c1,	// (0x0001b686) calenote_swipe_1_pane_g1_ParamLimits

0xe1c1,	// (0x0001b686) calenote_swipe_1_pane_g1

0xe1ce,	// (0x0001b693) calenote_swipe_1_pane_g2_ParamLimits

0xe1ce,	// (0x0001b693) calenote_swipe_1_pane_g2

0x0001,

0xfc40,	// (0x0001d105) calenote_swipe_1_pane_g_ParamLimits

0xfc40,	// (0x0001d105) calenote_swipe_1_pane_g

0xe59b,	// (0x0001ba60) calenote_swipe_1_pane_t1_ParamLimits

0xe59b,	// (0x0001ba60) calenote_swipe_1_pane_t1

0xe1c1,	// (0x0001b686) calenote_swipe_2_pane_g1_ParamLimits

0xe1c1,	// (0x0001b686) calenote_swipe_2_pane_g1

0xe5ba,	// (0x0001ba7f) calenote_swipe_2_pane_g2_ParamLimits

0xe5ba,	// (0x0001ba7f) calenote_swipe_2_pane_g2

0x0001,

0xfcaf,	// (0x0001d174) calenote_swipe_2_pane_g_ParamLimits

0xfcaf,	// (0x0001d174) calenote_swipe_2_pane_g

0xe5c6,	// (0x0001ba8b) calenote_swipe_2_pane_t1_ParamLimits

0xe5c6,	// (0x0001ba8b) calenote_swipe_2_pane_t1

0x97a6,	// (0x00016c6b) main_mup_navstr_pane

0x4cbc,	// (0x00012181) main_mup3_pane_t7_ParamLimits

0x4cbc,	// (0x00012181) main_mup3_pane_t7

0xcd22,	// (0x0001a1e7) main_mp4_pane_g6_ParamLimits

0xcd22,	// (0x0001a1e7) main_mp4_pane_g6

0xcf73,	// (0x0001a438) main_image3_pane_t4_ParamLimits

0xcf73,	// (0x0001a438) main_image3_pane_t4

0x8388,	// (0x0001584d) popup_navstr_preview_pane_ParamLimits

0x8388,	// (0x0001584d) popup_navstr_preview_pane

0x8398,	// (0x0001585d) scroll_navstr_pane_ParamLimits

0x8398,	// (0x0001585d) scroll_navstr_pane

0x97a6,	// (0x00016c6b) bg_popup_preview_window_pane_cp04

0xe5ed,	// (0x0001bab2) popup_navstr_preview_pane_t1

0x83ac,	// (0x00015871) scroll_navstr_pane_g1_ParamLimits

0x83ac,	// (0x00015871) scroll_navstr_pane_g1

0x83c0,	// (0x00015885) scroll_navstr_pane_t1_ParamLimits

0x83c0,	// (0x00015885) scroll_navstr_pane_t1

0xe592,	// (0x0001ba57) bg_button_pane_cp014

0xe592,	// (0x0001ba57) bg_button_pane_cp030

0x7d49,	// (0x0001520e) list_double_fisheye_pane_g4_ParamLimits

0x7d49,	// (0x0001520e) list_double_fisheye_pane_g4

0x7d55,	// (0x0001521a) list_double_fisheye_pane_g5_ParamLimits

0x7d55,	// (0x0001521a) list_double_fisheye_pane_g5

0xe3a8,	// (0x0001b86d) sp_fs_scroll_pane_cp03

0xe2da,	// (0x0001b79f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe2e6,	// (0x0001b7ab) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5d,	// (0x0001d122) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7f60,	// (0x00015425) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe49a,	// (0x0001b95f) sp_fs_scroll_pane_cp02

0xa14a,	// (0x0001760f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa14a,	// (0x0001760f) popup_sp_fs_calendar_preview_list_single_pane

0x97a6,	// (0x00016c6b) main_cam6_pano_pane

0x981b,	// (0x00016ce0) main_mup3_pane_ParamLimits

0x97a6,	// (0x00016c6b) main_phacti_pane

0x7799,	// (0x00014c5e) bg_button_pane_cp11

0x77b3,	// (0x00014c78) main_mobtv_info_pane_g2_ParamLimits

0x77b3,	// (0x00014c78) main_mobtv_info_pane_g2

0x0001,

0xfbbd,	// (0x0001d082) main_mobtv_info_pane_g_ParamLimits

0xfbbd,	// (0x0001d082) main_mobtv_info_pane_g

0x7990,	// (0x00014e55) sc_clock_pane_t5_ParamLimits

0x7990,	// (0x00014e55) sc_clock_pane_t5

0x7bc4,	// (0x00015089) main_radioblah_pane_g1_ParamLimits

0xe10d,	// (0x0001b5d2) main_radioblah_pane_t3_ParamLimits

0xe10d,	// (0x0001b5d2) main_radioblah_pane_t3

0xe125,	// (0x0001b5ea) main_radioblah_pane_t4_ParamLimits

0xe125,	// (0x0001b5ea) main_radioblah_pane_t4

0x7bec,	// (0x000150b1) main_radioblah_text_pane_ParamLimits

0x7bec,	// (0x000150b1) main_radioblah_text_pane

0x7bfe,	// (0x000150c3) main_radioblah_info_pane_g1_ParamLimits

0x7c97,	// (0x0001515c) main_radioblah_info_pane_t4_ParamLimits

0x7c97,	// (0x0001515c) main_radioblah_info_pane_t4

0x981b,	// (0x00016ce0) main_sp_fs_calendar_pane

0x83d7,	// (0x0001589c) main_phacti_pane_g1

0x83df,	// (0x000158a4) phacti_note_pane_ParamLimits

0x83df,	// (0x000158a4) phacti_note_pane

0xe604,	// (0x0001bac9) phacti_term_pane_ParamLimits

0xe604,	// (0x0001bac9) phacti_term_pane

0xe619,	// (0x0001bade) phacti_note_pane_t1_ParamLimits

0xe619,	// (0x0001bade) phacti_note_pane_t1

0xe630,	// (0x0001baf5) phacti_term_pane_g1

0xe638,	// (0x0001bafd) phacti_term_pane_t1_ParamLimits

0xe638,	// (0x0001bafd) phacti_term_pane_t1

0xe662,	// (0x0001bb27) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe66a,	// (0x0001bb2f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb9,	// (0x0001d17e) popup_sp_fs_calendar_preview_list_single_pane_g

0xe672,	// (0x0001bb37) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe672,	// (0x0001bb37) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe688,	// (0x0001bb4d) aid_popup_sp_fs_bg_corner_pane

0xa243,	// (0x00017708) popup_sp_fs_calendar_preview_bg_pane_g1

0x97a6,	// (0x00016c6b) popup_sp_fs_calendar_preview_bg_pane

0xe690,	// (0x0001bb55) popup_sp_fs_calendar_preview_list_pane

0xace0,	// (0x000181a5) bg_main_sp_fs_cale_pane_ParamLimits

0xace0,	// (0x000181a5) bg_main_sp_fs_cale_pane

0xe6a1,	// (0x0001bb66) listscroll_cale_mrui_pane_ParamLimits

0xe6a1,	// (0x0001bb66) listscroll_cale_mrui_pane

0xe6b6,	// (0x0001bb7b) listscroll_sp_fs_schedule_track_pane

0xe6bf,	// (0x0001bb84) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe6bf,	// (0x0001bb84) main_sp_fs_ctrlbar_pane_cp01

0xe6d2,	// (0x0001bb97) main_sp_fs_ribbon_pane

0xe6da,	// (0x0001bb9f) popup_sp_fs_cale_preview_window

0x8454,	// (0x00015919) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8454,	// (0x00015919) list_single_sp_fs_schedule_track_pane

0x981b,	// (0x00016ce0) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x981b,	// (0x00016ce0) bg_sp_fs_highlight_list_pane_cp03

0x8468,	// (0x0001592d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8468,	// (0x0001592d) list_single_sp_fs_schedule_track_pane_g1

0x8474,	// (0x00015939) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8474,	// (0x00015939) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbe,	// (0x0001d183) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbe,	// (0x0001d183) list_single_sp_fs_schedule_track_pane_g

0x8480,	// (0x00015945) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8480,	// (0x00015945) list_single_sp_fs_schedule_track_pane_t1

0x84a2,	// (0x00015967) sp_fs_schedule_track_pane_ParamLimits

0x84a2,	// (0x00015967) sp_fs_schedule_track_pane

0xe6ec,	// (0x0001bbb1) sp_fs_schedule_track_pane_g1

0xe6f4,	// (0x0001bbb9) sp_fs_schedule_track_pane_g2

0xe6fc,	// (0x0001bbc1) sp_fs_schedule_track_pane_g3

0xe704,	// (0x0001bbc9) sp_fs_schedule_track_pane_g4

0xe70c,	// (0x0001bbd1) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc3,	// (0x0001d188) sp_fs_schedule_track_pane_g

0xd1b8,	// (0x0001a67d) bg_sp_fs_schedule_viewer_highlight_g1

0xa458,	// (0x0001791d) bg_sp_fs_schedule_viewer_highlight_g2

0xd1c0,	// (0x0001a685) bg_sp_fs_schedule_viewer_highlight_g3

0xd1c8,	// (0x0001a68d) bg_sp_fs_schedule_viewer_highlight_g4

0xd42c,	// (0x0001a8f1) bg_sp_fs_schedule_viewer_highlight_g5

0xd1d8,	// (0x0001a69d) bg_sp_fs_schedule_viewer_highlight_g6

0xd1e0,	// (0x0001a6a5) bg_sp_fs_schedule_viewer_highlight_g7

0xd1e8,	// (0x0001a6ad) bg_sp_fs_schedule_viewer_highlight_g8

0xa438,	// (0x000178fd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcce,	// (0x0001d193) bg_sp_fs_schedule_viewer_highlight_g

0x97a6,	// (0x00016c6b) bg_main_sp_fs_ribbon_pane

0x84b7,	// (0x0001597c) main_sp_fs_ribbon_pane_g1

0xe714,	// (0x0001bbd9) main_sp_fs_ribbon_pane_t1

0x84c0,	// (0x00015985) main_sp_fs_ribbon_pane_t2

0xe723,	// (0x0001bbe8) main_sp_fs_ribbon_pane_t3

0x0002,

0xfce1,	// (0x0001d1a6) main_sp_fs_ribbon_pane_t

0xe732,	// (0x0001bbf7) main_sp_fs_ribbon_scheduler_pane

0xe73a,	// (0x0001bbff) bg_main_sp_fs_ribbon_pane_g1

0xe743,	// (0x0001bc08) bg_main_sp_fs_ribbon_pane_g2

0xe74c,	// (0x0001bc11) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce8,	// (0x0001d1ad) bg_main_sp_fs_ribbon_pane_g

0xe754,	// (0x0001bc19) main_sp_fs_ribbon_scheduler_pane_g1

0xe75d,	// (0x0001bc22) main_sp_fs_ribbon_scheduler_pane_g2

0xe766,	// (0x0001bc2b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcef,	// (0x0001d1b4) main_sp_fs_ribbon_scheduler_pane_g

0xe76f,	// (0x0001bc34) list_cale_mrui_pane

0x84cf,	// (0x00015994) sp_fs_scroll_pane_cp07_ParamLimits

0x84cf,	// (0x00015994) sp_fs_scroll_pane_cp07

0x84eb,	// (0x000159b0) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x84eb,	// (0x000159b0) bg_sp_fs_schedule_viewer_highlight

0xe77c,	// (0x0001bc41) list_single_sp_fs_schedule_track_pane_cp01

0xe784,	// (0x0001bc49) list_sp_fs_schedule_track_pane

0xe78c,	// (0x0001bc51) sp_fs_scroll_pane_cp06_ParamLimits

0xe78c,	// (0x0001bc51) sp_fs_scroll_pane_cp06

0xa243,	// (0x00017708) bgmain_sp_fs_calendar_pane_g1

0x84fd,	// (0x000159c2) list_single_cale_mrui_pane_ParamLimits

0x84fd,	// (0x000159c2) list_single_cale_mrui_pane

0xe79e,	// (0x0001bc63) list_single_cale_mrui_row_pane_ParamLimits

0xe79e,	// (0x0001bc63) list_single_cale_mrui_row_pane

0xe7ab,	// (0x0001bc70) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe7ab,	// (0x0001bc70) list_single_cale_mrui_row_pane_g1

0xe7f0,	// (0x0001bcb5) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe7f0,	// (0x0001bcb5) list_single_cale_mrui_row_pane_t1

0x8520,	// (0x000159e5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8520,	// (0x000159e5) list_single_cale_mrui_row_pane_t2

0xe802,	// (0x0001bcc7) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe802,	// (0x0001bcc7) list_single_cale_mrui_row_pane_t3

0xe831,	// (0x0001bcf6) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe831,	// (0x0001bcf6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfd,	// (0x0001d1c2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfd,	// (0x0001d1c2) list_single_cale_mrui_row_pane_t

0x8586,	// (0x00015a4b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8586,	// (0x00015a4b) list_single_cmail_header_editor_pane_bg_cp01

0x85aa,	// (0x00015a6f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x85aa,	// (0x00015a6f) list_single_cmail_header_editor_pane_bg_cp02

0x85c8,	// (0x00015a8d) main_radioblah_text_pane_t1_ParamLimits

0x85c8,	// (0x00015a8d) main_radioblah_text_pane_t1

0xe862,	// (0x0001bd27) cam6_indi_pane_cp01

0xe86a,	// (0x0001bd2f) cam6_mode_pane_cp01

0xe872,	// (0x0001bd37) cam6_pano_pane

0xe87b,	// (0x0001bd40) cam6_zoom_pane_cp01

0xe885,	// (0x0001bd4a) cam6_pano_image_pane

0xe88e,	// (0x0001bd53) cam6_pano_pane_g1

0xdfa7,	// (0x0001b46c) cam6_pano_pane_g2

0xe897,	// (0x0001bd5c) cam6_pano_pane_g3

0xe8a0,	// (0x0001bd65) cam6_pano_pane_g4

0xca15,	// (0x00019eda) cam6_pano_pane_g5

0xe8a9,	// (0x0001bd6e) cam6_pano_pane_g6

0xe8b1,	// (0x0001bd76) cam6_pano_pane_g7

0xe8b9,	// (0x0001bd7e) cam6_pano_pane_g8

0xe8c2,	// (0x0001bd87) cam6_pano_pane_g9

0x0008,

0xfd06,	// (0x0001d1cb) cam6_pano_pane_g

0x97a6,	// (0x00016c6b) main_browser_tag_pane

0xe5e5,	// (0x0001baaa) grid_navstr_albumart_pane

0xe8cd,	// (0x0001bd92) cell_navstr_albumart_pane_ParamLimits

0xe8cd,	// (0x0001bd92) cell_navstr_albumart_pane

0xe8e9,	// (0x0001bdae) cell_navstr_albumart_pane_g1

0xbe62,	// (0x00019327) cell_navstr_albumart_pane_g2

0xbe72,	// (0x00019337) cell_navstr_albumart_pane_g3

0xbe6a,	// (0x0001932f) cell_navstr_albumart_pane_g4

0x0003,

0xfd19,	// (0x0001d1de) cell_navstr_albumart_pane_g

0x85e3,	// (0x00015aa8) bt_list_pane_ParamLimits

0x85e3,	// (0x00015aa8) bt_list_pane

0x85f9,	// (0x00015abe) bt_list_pane_t1

0x8608,	// (0x00015acd) bt_list_pane_t2

0x0001,

0xfd22,	// (0x0001d1e7) bt_list_pane_t

0x97a6,	// (0x00016c6b) main_cale_prevew_pane

0x8617,	// (0x00015adc) popup_cale_preview_window_ParamLimits

0x8617,	// (0x00015adc) popup_cale_preview_window

0x981b,	// (0x00016ce0) bg_popup_preview_window_pane_cp05_ParamLimits

0x981b,	// (0x00016ce0) bg_popup_preview_window_pane_cp05

0xe8f1,	// (0x0001bdb6) list_cale_preview_pane_ParamLimits

0xe8f1,	// (0x0001bdb6) list_cale_preview_pane

0x8634,	// (0x00015af9) list_double_cale_preview_pane_ParamLimits

0x8634,	// (0x00015af9) list_double_cale_preview_pane

0x8648,	// (0x00015b0d) list_single_cale_preview_pane_ParamLimits

0x8648,	// (0x00015b0d) list_single_cale_preview_pane

0x8660,	// (0x00015b25) list_single_cale_preview_pane_g1

0x8668,	// (0x00015b2d) list_single_cale_preview_pane_t1_ParamLimits

0x8668,	// (0x00015b2d) list_single_cale_preview_pane_t1

0x867d,	// (0x00015b42) list_double_cale_preview_pane_g1

0x8685,	// (0x00015b4a) list_double_cale_preview_pane_t1_ParamLimits

0x8685,	// (0x00015b4a) list_double_cale_preview_pane_t1

0x869a,	// (0x00015b5f) list_double_cale_preview_pane_t2_ParamLimits

0x869a,	// (0x00015b5f) list_double_cale_preview_pane_t2

0x0001,

0xfd27,	// (0x0001d1ec) list_double_cale_preview_pane_t_ParamLimits

0xfd27,	// (0x0001d1ec) list_double_cale_preview_pane_t

0x97a6,	// (0x00016c6b) main_ezdial_pane

0x981b,	// (0x00016ce0) main_sp_fs_email_pane_ParamLimits

0x7ecb,	// (0x00015390) cmail_ddmenu_btn01_pane_ParamLimits

0x7ecb,	// (0x00015390) cmail_ddmenu_btn01_pane

0x7ede,	// (0x000153a3) cmail_ddmenu_btn02_pane_ParamLimits

0x7ede,	// (0x000153a3) cmail_ddmenu_btn02_pane

0x7f01,	// (0x000153c6) cmail_ddmenu_btn03_pane_ParamLimits

0x7f01,	// (0x000153c6) cmail_ddmenu_btn03_pane

0x7f9f,	// (0x00015464) main_sp_fs_ctrlbar_pane_ParamLimits

0x7fc3,	// (0x00015488) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x82eb,	// (0x000157b0) list_cmail_body_pane_ParamLimits

0xe4e2,	// (0x0001b9a7) bg_button_pane_cp12

0xe4f7,	// (0x0001b9bc) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe4f7,	// (0x0001b9bc) list_single_cmail_header_detail_pane_g3

0xe540,	// (0x0001ba05) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe540,	// (0x0001ba05) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcaa,	// (0x0001d16f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcaa,	// (0x0001d16f) list_single_cmail_header_detail_pane_t

0xe64d,	// (0x0001bb12) phacti_term_pane_t2_ParamLimits

0xe64d,	// (0x0001bb12) phacti_term_pane_t2

0x0001,

0xfcb4,	// (0x0001d179) phacti_term_pane_t_ParamLimits

0xfcb4,	// (0x0001d179) phacti_term_pane_t

0xe8fd,	// (0x0001bdc2) aid_size_list_single_double

0x86b2,	// (0x00015b77) popup_ezdial_listscroll_window

0x86ce,	// (0x00015b93) popup_number_entry_window_cp01

0xa1ee,	// (0x000176b3) bg_popup_call_pane_cp09

0xe909,	// (0x0001bdce) ezdial_list_pane

0xe911,	// (0x0001bdd6) scroll_pane_cp23

0xace0,	// (0x000181a5) bg_button_pane_cp028_ParamLimits

0xace0,	// (0x000181a5) bg_button_pane_cp028

0x86dc,	// (0x00015ba1) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x86dc,	// (0x00015ba1) cmail_ddmenu_btn01_pane_g1

0x86eb,	// (0x00015bb0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x86eb,	// (0x00015bb0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2c,	// (0x0001d1f1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2c,	// (0x0001d1f1) cmail_ddmenu_btn01_pane_g

0xe919,	// (0x0001bdde) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe919,	// (0x0001bdde) cmail_ddmenu_btn01_pane_t1

0xace0,	// (0x000181a5) bg_button_pane_cp029_ParamLimits

0xace0,	// (0x000181a5) bg_button_pane_cp029

0x8701,	// (0x00015bc6) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8701,	// (0x00015bc6) cmail_ddmenu_btn02_pane_g1

0x871c,	// (0x00015be1) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x871c,	// (0x00015be1) cmail_ddmenu_btn02_pane_t1

0x981b,	// (0x00016ce0) bg_button_pane_cp031_ParamLimits

0x981b,	// (0x00016ce0) bg_button_pane_cp031

0x8701,	// (0x00015bc6) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8701,	// (0x00015bc6) cmail_ddmenu_btn03_pane_g1

0x871c,	// (0x00015be1) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x871c,	// (0x00015be1) cmail_ddmenu_btn03_pane_t1

0x564a,	// (0x00012b0f) cell_dialer2_keypad_pane_t1_ParamLimits

0x5664,	// (0x00012b29) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5664,	// (0x00012b29) cell_dialer2_keypad_pane_t1_copy1

0x75ba,	// (0x00014a7f) ncimui_group_button_pane

0x981b,	// (0x00016ce0) main_sp_fs_calendar_pane_ParamLimits

0x8302,	// (0x000157c7) list_single_cmail_header_caption_pane_ParamLimits

0xe698,	// (0x0001bb5d) aid_recal_txt_sm_pane

0x97a6,	// (0x00016c6b) mian_recal_day_pane

0xe6da,	// (0x0001bb9f) popup_sp_fs_cale_preview_window_ParamLimits

0xe92f,	// (0x0001bdf4) list_recal_day_pane

0xe972,	// (0x0001be37) list_single_recal_day_pane_ParamLimits

0xe972,	// (0x0001be37) list_single_recal_day_pane

0xe984,	// (0x0001be49) list_single_recal_day_pane_g1_ParamLimits

0xe984,	// (0x0001be49) list_single_recal_day_pane_g1

0xe990,	// (0x0001be55) list_single_recal_day_pane_g2_ParamLimits

0xe990,	// (0x0001be55) list_single_recal_day_pane_g2

0xe99c,	// (0x0001be61) list_single_recal_day_pane_g3_ParamLimits

0xe99c,	// (0x0001be61) list_single_recal_day_pane_g3

0x8743,	// (0x00015c08) list_single_recal_day_pane_g4_ParamLimits

0x8743,	// (0x00015c08) list_single_recal_day_pane_g4

0xe9a8,	// (0x0001be6d) list_single_recal_day_pane_g5_ParamLimits

0xe9a8,	// (0x0001be6d) list_single_recal_day_pane_g5

0xe9b4,	// (0x0001be79) list_single_recal_day_pane_g6_ParamLimits

0xe9b4,	// (0x0001be79) list_single_recal_day_pane_g6

0x0004,

0xfd3b,	// (0x0001d200) list_single_recal_day_pane_g_ParamLimits

0xfd3b,	// (0x0001d200) list_single_recal_day_pane_g

0xe9c8,	// (0x0001be8d) list_single_recal_day_pane_t1

0xe9da,	// (0x0001be9f) list_single_recal_day_pane_t2

0x0001,

0xfd46,	// (0x0001d20b) list_single_recal_day_pane_t

0x875b,	// (0x00015c20) ncimui_query_button_pane_ParamLimits

0x875b,	// (0x00015c20) ncimui_query_button_pane

0x876b,	// (0x00015c30) ncimui_query_button_pane_t1_ParamLimits

0x876b,	// (0x00015c30) ncimui_query_button_pane_t1

0xe9ec,	// (0x0001beb1) ncimui_query_button_pane_t2_ParamLimits

0xe9ec,	// (0x0001beb1) ncimui_query_button_pane_t2

0x0001,

0xfd4b,	// (0x0001d210) ncimui_query_button_pane_t_ParamLimits

0xfd4b,	// (0x0001d210) ncimui_query_button_pane_t

0x877e,	// (0x00015c43) query_button_pane_ParamLimits

0x877e,	// (0x00015c43) query_button_pane

0x97a6,	// (0x00016c6b) bg_button_pane_cp0028

0xe9ff,	// (0x0001bec4) query_button_pane_t1

0x3f35,	// (0x000113fa) main_tport_pane_ParamLimits

0x81ac,	// (0x00015671) bg_popup_window_pane_cp01_ParamLimits

0x81ac,	// (0x00015671) bg_popup_window_pane_cp01

0x81c5,	// (0x0001568a) heading_pane_cp08_ParamLimits

0x81c5,	// (0x0001568a) heading_pane_cp08

0x81d8,	// (0x0001569d) heading_pane_cp07_ParamLimits

0x81d8,	// (0x0001569d) heading_pane_cp07

0x827a,	// (0x0001573f) cell_tport_appsw_pane_g2

0x0002,

0xfc97,	// (0x0001d15c) cell_tport_appsw_pane_g

0xad7d,	// (0x00018242) input_candi_list_open_g1

0xa649,	// (0x00017b0e) list_cale_time_pane_g6_ParamLimits

0xa649,	// (0x00017b0e) list_cale_time_pane_g6

0x45d7,	// (0x00011a9c) aid_size_touch_calib_1_ParamLimits

0x45d7,	// (0x00011a9c) aid_size_touch_calib_1

0x45e9,	// (0x00011aae) aid_size_touch_calib_2_ParamLimits

0x45e9,	// (0x00011aae) aid_size_touch_calib_2

0x4601,	// (0x00011ac6) aid_size_touch_calib_3_ParamLimits

0x4601,	// (0x00011ac6) aid_size_touch_calib_3

0x461f,	// (0x00011ae4) aid_size_touch_calib_4_ParamLimits

0x461f,	// (0x00011ae4) aid_size_touch_calib_4

0x4637,	// (0x00011afc) main_touch_calib_button_group_pane_ParamLimits

0x4637,	// (0x00011afc) main_touch_calib_button_group_pane

0x464f,	// (0x00011b14) main_touch_calib_pane_g1_ParamLimits

0x4661,	// (0x00011b26) main_touch_calib_pane_g2_ParamLimits

0x4673,	// (0x00011b38) main_touch_calib_pane_g3_ParamLimits

0x4685,	// (0x00011b4a) main_touch_calib_pane_g4_ParamLimits

0xf6d9,	// (0x0001cb9e) main_touch_calib_pane_g_ParamLimits

0x4697,	// (0x00011b5c) main_touch_calib_pane_t1_ParamLimits

0x46b1,	// (0x00011b76) main_touch_calib_pane_t2_ParamLimits

0x46cb,	// (0x00011b90) main_touch_calib_pane_t3_ParamLimits

0x46df,	// (0x00011ba4) main_touch_calib_pane_t4_ParamLimits

0x46f5,	// (0x00011bba) main_touch_calib_pane_t5_ParamLimits

0xf6e2,	// (0x0001cba7) main_touch_calib_pane_t_ParamLimits

0xc7c8,	// (0x00019c8d) list_single_fp_cale_pane_g3_ParamLimits

0xc7c8,	// (0x00019c8d) list_single_fp_cale_pane_g3

0x981b,	// (0x00016ce0) bg_button_pane_cp012_ParamLimits

0x981b,	// (0x00016ce0) bg_vkb2_func_pane_cp03_ParamLimits

0x675c,	// (0x00013c21) cell_vitu2_function_top_pane_g1_ParamLimits

0x981b,	// (0x00016ce0) bg_vkb2_func_pane_cp04_ParamLimits

0x7545,	// (0x00014a0a) main_ncimui_button_group_pane_ParamLimits

0x7545,	// (0x00014a0a) main_ncimui_button_group_pane

0x75a5,	// (0x00014a6a) main_ncimui_pane_t3_ParamLimits

0x75a5,	// (0x00014a6a) main_ncimui_pane_t3

0xe5fb,	// (0x0001bac0) phacti_button_group_pane

0xe8fd,	// (0x0001bdc2) aid_size_list_single_double_ParamLimits

0x86b2,	// (0x00015b77) popup_ezdial_listscroll_window_ParamLimits

0x86ce,	// (0x00015b93) popup_number_entry_window_cp01_ParamLimits

0x8791,	// (0x00015c56) phacti_button_pane_ParamLimits

0x8791,	// (0x00015c56) phacti_button_pane

0x97a6,	// (0x00016c6b) bg_button_pane_cp14

0xea0d,	// (0x0001bed2) phacti_button_pane_t1

0x87a2,	// (0x00015c67) main_touch_calib_button_pane_ParamLimits

0x87a2,	// (0x00015c67) main_touch_calib_button_pane

0x9fdb,	// (0x000174a0) bg_button_pane_cp18_ParamLimits

0x9fdb,	// (0x000174a0) bg_button_pane_cp18

0xea1b,	// (0x0001bee0) main_touch_calib_button_pane_t1_ParamLimits

0xea1b,	// (0x0001bee0) main_touch_calib_button_pane_t1

0xea31,	// (0x0001bef6) main_touch_calib_button_pane_t2_ParamLimits

0xea31,	// (0x0001bef6) main_touch_calib_button_pane_t2

0x0001,

0xfd50,	// (0x0001d215) main_touch_calib_button_pane_t_ParamLimits

0xfd50,	// (0x0001d215) main_touch_calib_button_pane_t

0x97a6,	// (0x00016c6b) cell_ncimui_button_pane

0x97a6,	// (0x00016c6b) bg_button_pane_cp032

0xea4f,	// (0x0001bf14) cell_ncimui_button_pane_t1

0xcf51,	// (0x0001a416) image3_infobar_pane_ParamLimits

0xcf51,	// (0x0001a416) image3_infobar_pane

0x79bc,	// (0x00014e81) fs_bigclock_status_pane_ParamLimits

0x79bc,	// (0x00014e81) fs_bigclock_status_pane

0x79c9,	// (0x00014e8e) main_fs_bigclock_clock_pane_ParamLimits

0x79c9,	// (0x00014e8e) main_fs_bigclock_clock_pane

0x79fb,	// (0x00014ec0) main_fs_bigclock_indi_pane_ParamLimits

0x79fb,	// (0x00014ec0) main_fs_bigclock_indi_pane

0x7a3b,	// (0x00014f00) main_fs_bigclock_swipe_pane_ParamLimits

0x7a3b,	// (0x00014f00) main_fs_bigclock_swipe_pane

0x97a6,	// (0x00016c6b) main_fs_clock_dumped_data

0x7a87,	// (0x00014f4c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7a87,	// (0x00014f4c) list_single_fs_bigclock_indicator_pane_g1

0x7aa0,	// (0x00014f65) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7aa0,	// (0x00014f65) list_single_fs_bigclock_indicator_pane_g2

0x7aba,	// (0x00014f7f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7aba,	// (0x00014f7f) list_single_fs_bigclock_indicator_pane_g3

0x7ad4,	// (0x00014f99) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x7ad4,	// (0x00014f99) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbf1,	// (0x0001d0b6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbf1,	// (0x0001d0b6) list_single_fs_bigclock_indicator_pane_g

0x7b03,	// (0x00014fc8) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7b03,	// (0x00014fc8) list_single_fs_bigclock_indicator_pane_t1

0x7b2b,	// (0x00014ff0) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7b2b,	// (0x00014ff0) list_single_fs_bigclock_indicator_pane_t2

0x7b53,	// (0x00015018) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7b53,	// (0x00015018) list_single_fs_bigclock_indicator_pane_t3

0x7b7b,	// (0x00015040) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7b7b,	// (0x00015040) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfc,	// (0x0001d0c1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfc,	// (0x0001d0c1) list_single_fs_bigclock_indicator_pane_t

0xea5d,	// (0x0001bf22) image3_infobar_fav_pane_ParamLimits

0xea5d,	// (0x0001bf22) image3_infobar_fav_pane

0xea6d,	// (0x0001bf32) image3_infobar_loc_pane_ParamLimits

0xea6d,	// (0x0001bf32) image3_infobar_loc_pane

0xea83,	// (0x0001bf48) image3_infobar_time_pane_ParamLimits

0xea83,	// (0x0001bf48) image3_infobar_time_pane

0xa243,	// (0x00017708) image3_infobar_time_pane_g1

0xea93,	// (0x0001bf58) image3_infobar_time_pane_t1

0xa243,	// (0x00017708) image3_infobar_loc_pane_g1

0xeaa1,	// (0x0001bf66) image3_infobar_loc_pane_g2

0x0001,

0xfd55,	// (0x0001d21a) image3_infobar_loc_pane_g

0xeaa9,	// (0x0001bf6e) image3_infobar_loc_pane_t1

0xa243,	// (0x00017708) image3_infobar_fav_pane_g1

0xeab7,	// (0x0001bf7c) image3_infobar_fav_pane_g2

0x0001,

0xfd5a,	// (0x0001d21f) image3_infobar_fav_pane_g

0xeabf,	// (0x0001bf84) fs_bigclock_status_battery_pane

0xeac8,	// (0x0001bf8d) fs_bigclock_status_signal_pane

0xead1,	// (0x0001bf96) fs_bigclock_status_title_pane

0xeada,	// (0x0001bf9f) fs_bigclock_status_signal_pane_g1

0xeae3,	// (0x0001bfa8) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5f,	// (0x0001d224) fs_bigclock_status_signal_pane_g

0xeaeb,	// (0x0001bfb0) fs_bigclock_status_battery_pane_g1

0xeaf4,	// (0x0001bfb9) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd64,	// (0x0001d229) fs_bigclock_status_battery_pane_g

0xeafc,	// (0x0001bfc1) fs_bigclock_status_title_pane_t1

0x87b7,	// (0x00015c7c) main_fs_bigclock_clock_pane_g1

0x87b7,	// (0x00015c7c) main_fs_bigclock_clock_pane_g2

0x87ca,	// (0x00015c8f) main_fs_bigclock_clock_pane_g3

0x87ca,	// (0x00015c8f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd69,	// (0x0001d22e) main_fs_bigclock_clock_pane_g

0x87e1,	// (0x00015ca6) main_fs_bigclock_clock_pane_t1

0x87f7,	// (0x00015cbc) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd72,	// (0x0001d237) main_fs_bigclock_clock_pane_t

0xeb0a,	// (0x0001bfcf) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeb0a,	// (0x0001bfcf) list_single_fs_bigclock_indicator_pane

0xeb1b,	// (0x0001bfe0) list_single_fs_bigclock_pane_ParamLimits

0xeb1b,	// (0x0001bfe0) list_single_fs_bigclock_pane

0xeb41,	// (0x0001c006) main_fs_bigclock_indicator_pane_t1

0xeb50,	// (0x0001c015) list_single_fs_bigclock_pane_g1

0xeb58,	// (0x0001c01d) list_single_fs_bigclock_pane_t1

0xa243,	// (0x00017708) main_fs_bigclock_swipe_pane_g1

0xeb9b,	// (0x0001c060) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd83,	// (0x0001d248) main_fs_bigclock_swipe_pane_g

0xeba3,	// (0x0001c068) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeba3,	// (0x0001c068) main_fs_bigclock_swipe_pane_t1

0x2e05,	// (0x000102ca) call_type_pane_ParamLimits

0x97a6,	// (0x00016c6b) main_btmg_pane

0xe7d7,	// (0x0001bc9c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe7d7,	// (0x0001bc9c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf6,	// (0x0001d1bb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf6,	// (0x0001d1bb) list_single_cale_mrui_row_pane_g

0xe958,	// (0x0001be1d) list_recal_vselct_arw_lo_pane

0xe960,	// (0x0001be25) list_recal_vselct_arw_up_pane

0xe968,	// (0x0001be2d) list_recal_vselct_pane

0x8859,	// (0x00015d1e) btmg_button_pane

0x8863,	// (0x00015d28) main_btmg_pane_g1

0x97a6,	// (0x00016c6b) bg_button_pane_cp044

0xebc0,	// (0x0001c085) btmg_button_pane_t1

0xbfb4,	// (0x00019479) aid_listscroll_gen

0x981b,	// (0x00016ce0) main_cntbar_detail_pane

0xe492,	// (0x0001b957) list_cmail_folder_pane

0xe3a8,	// (0x0001b86d) sp_fs_scroll_pane_cp03_ParamLimits

0xebce,	// (0x0001c093) list_single_fs_dyc_pane_cp01_ParamLimits

0xebce,	// (0x0001c093) list_single_fs_dyc_pane_cp01

0xebeb,	// (0x0001c0b0) aid_size_cmail_indent

0xebf4,	// (0x0001c0b9) list_single_dyc_row_pane_cp01

0x88a1,	// (0x00015d66) cntbar_detail_list_pane_ParamLimits

0x88a1,	// (0x00015d66) cntbar_detail_list_pane

0x88f3,	// (0x00015db8) main_cntbar_detail_cont_pane_ParamLimits

0x88f3,	// (0x00015db8) main_cntbar_detail_cont_pane

0xe3a8,	// (0x0001b86d) scroll_pane_cp032_ParamLimits

0xe3a8,	// (0x0001b86d) scroll_pane_cp032

0x8907,	// (0x00015dcc) cntbar_detail_list_event_pane_ParamLimits

0x8907,	// (0x00015dcc) cntbar_detail_list_event_pane

0x88b3,	// (0x00015d78) cntbar_detail_list_shct_pane

0xa4a6,	// (0x0001796b) aid_list_gen

0xebfd,	// (0x0001c0c2) aid_scroll

0xec06,	// (0x0001c0cb) aid_size_touch_scroll_bar

0x7d14,	// (0x000151d9) aid_list_double

0x8917,	// (0x00015ddc) aid_list_single

0x8920,	// (0x00015de5) aid_list_single_lg

0x8929,	// (0x00015dee) aid_list_z_g_a_sm

0x8931,	// (0x00015df6) aid_list_z_g_d

0x8939,	// (0x00015dfe) aid_txt_z_prm

0x8947,	// (0x00015e0c) aid_txt_z_prm_cp01

0x8955,	// (0x00015e1a) aid_txt_z_sec

0x8963,	// (0x00015e28) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8963,	// (0x00015e28) main_cntbar_detail_cont_pane_g1

0x8977,	// (0x00015e3c) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8977,	// (0x00015e3c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd88,	// (0x0001d24d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd88,	// (0x0001d24d) main_cntbar_detail_cont_pane_g

0xec0f,	// (0x0001c0d4) main_cntbar_detail_cont_pane_t1

0xec1d,	// (0x0001c0e2) main_cntbar_detail_cont_pane_t2

0xec2b,	// (0x0001c0f0) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8d,	// (0x0001d252) main_cntbar_detail_cont_pane_t

0x8987,	// (0x00015e4c) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8987,	// (0x00015e4c) cell_cntbar_detail_list_shct_pane

0xec39,	// (0x0001c0fe) cntbar_detail_list_shct_pane_g1

0xec42,	// (0x0001c107) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd94,	// (0x0001d259) cntbar_detail_list_shct_pane_g

0x8999,	// (0x00015e5e) cntbar_detail_list_event_pane_g1_ParamLimits

0x8999,	// (0x00015e5e) cntbar_detail_list_event_pane_g1

0x89a5,	// (0x00015e6a) cntbar_detail_list_event_pane_g2_ParamLimits

0x89a5,	// (0x00015e6a) cntbar_detail_list_event_pane_g2

0x0005,

0xfd99,	// (0x0001d25e) cntbar_detail_list_event_pane_g_ParamLimits

0xfd99,	// (0x0001d25e) cntbar_detail_list_event_pane_g

0x8a13,	// (0x00015ed8) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a13,	// (0x00015ed8) cntbar_detail_list_event_pane_t1

0x8a28,	// (0x00015eed) cntbar_detail_list_event_pane_t2_ParamLimits

0x8a28,	// (0x00015eed) cntbar_detail_list_event_pane_t2

0x0002,

0xfda6,	// (0x0001d26b) cntbar_detail_list_event_pane_t_ParamLimits

0xfda6,	// (0x0001d26b) cntbar_detail_list_event_pane_t

0xa243,	// (0x00017708) cell_cntbar_detail_list_shct_pane_g1

0x31a3,	// (0x00010668) navi_pane_mv_g3

0x981b,	// (0x00016ce0) main_cntbar_detail_pane_ParamLimits

0x97a6,	// (0x00016c6b) main_notif_wgt_pane

0xccb0,	// (0x0001a175) aid_tch_main_mp4_pane_g4

0xcede,	// (0x0001a3a3) popup_slider_window_cp02

0xe94e,	// (0x0001be13) list_recal_day_event_pane

0x886d,	// (0x00015d32) cntbar_detail_btn_pane_ParamLimits

0x886d,	// (0x00015d32) cntbar_detail_btn_pane

0x8886,	// (0x00015d4b) cntbar_detail_btn_pane_cp01_ParamLimits

0x8886,	// (0x00015d4b) cntbar_detail_btn_pane_cp01

0x88b3,	// (0x00015d78) cntbar_detail_list_shct_pane_ParamLimits

0x88c3,	// (0x00015d88) cntbar_detail_pane_g1_ParamLimits

0x88c3,	// (0x00015d88) cntbar_detail_pane_g1

0x88d7,	// (0x00015d9c) cntbar_detail_pane_t1_ParamLimits

0x88d7,	// (0x00015d9c) cntbar_detail_pane_t1

0x89b1,	// (0x00015e76) cntbar_detail_list_event_pane_g3_ParamLimits

0x89b1,	// (0x00015e76) cntbar_detail_list_event_pane_g3

0x89c9,	// (0x00015e8e) cntbar_detail_list_event_pane_g4_ParamLimits

0x89c9,	// (0x00015e8e) cntbar_detail_list_event_pane_g4

0x89e1,	// (0x00015ea6) cntbar_detail_list_event_pane_g5_ParamLimits

0x89e1,	// (0x00015ea6) cntbar_detail_list_event_pane_g5

0x89f9,	// (0x00015ebe) cntbar_detail_list_event_pane_g6_ParamLimits

0x89f9,	// (0x00015ebe) cntbar_detail_list_event_pane_g6

0x8a3d,	// (0x00015f02) cntbar_detail_list_event_pane_t3_ParamLimits

0x8a3d,	// (0x00015f02) cntbar_detail_list_event_pane_t3

0x8a4f,	// (0x00015f14) popup_notif_wgt_window_ParamLimits

0x8a4f,	// (0x00015f14) popup_notif_wgt_window

0x8a68,	// (0x00015f2d) popup_submenu_window_cp01_ParamLimits

0x8a68,	// (0x00015f2d) popup_submenu_window_cp01

0xa1ee,	// (0x000176b3) bg_popup_window_pane_cp10

0xec4b,	// (0x0001c110) listscroll_notif_wgt_pane

0xec5d,	// (0x0001c122) list_notif_wgt_window

0xec66,	// (0x0001c12b) scroll_pane_cp033

0x8a7c,	// (0x00015f41) list_notif_wgt_row_pane_ParamLimits

0x8a7c,	// (0x00015f41) list_notif_wgt_row_pane

0xec6f,	// (0x0001c134) aid_size_list_notif_wgt_del

0xec7c,	// (0x0001c141) list_notif_wgt_row_pane_g1

0xec88,	// (0x0001c14d) list_notif_wgt_row_pane_g2

0xec97,	// (0x0001c15c) list_notif_wgt_row_pane_g3

0x0002,

0xfdad,	// (0x0001d272) list_notif_wgt_row_pane_g

0xeca4,	// (0x0001c169) list_notif_wgt_row_pane_t1

0xecba,	// (0x0001c17f) list_notif_wgt_row_pane_t2

0xeccc,	// (0x0001c191) list_notif_wgt_row_pane_t3

0x0002,

0xfdb4,	// (0x0001d279) list_notif_wgt_row_pane_t

0xd454,	// (0x0001a919) list_recal_day_event_pane_g1

0xecde,	// (0x0001c1a3) list_recal_day_event_pane_t1

0x97a6,	// (0x00016c6b) bg_button_pane_cp045

0x8a8c,	// (0x00015f51) cntbar_detail_btn_pane_t1

0xace0,	// (0x000181a5) main_callh_pane_ParamLimits

0xace0,	// (0x000181a5) main_callh_pane

0x97a6,	// (0x00016c6b) main_coverflow0_pane

0x97a6,	// (0x00016c6b) main_wgtman_pane

0x7a5c,	// (0x00014f21) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a5c,	// (0x00014f21) main_fs_bigclock_unlock_btn_pane

0x8272,	// (0x00015737) bg_button_pane_cp16

0x8282,	// (0x00015747) cell_tport_appsw_pane_g3

0x8a9a,	// (0x00015f5f) cf0_flow_pane_ParamLimits

0x8a9a,	// (0x00015f5f) cf0_flow_pane

0xeced,	// (0x0001c1b2) listscroll_cf0_pane

0xecf8,	// (0x0001c1bd) main_cf0_pane_g1

0x8aaf,	// (0x00015f74) main_cf0_pane_t1_ParamLimits

0x8aaf,	// (0x00015f74) main_cf0_pane_t1

0x8ac6,	// (0x00015f8b) main_cf0_pane_t2_ParamLimits

0x8ac6,	// (0x00015f8b) main_cf0_pane_t2

0x0001,

0xfdc0,	// (0x0001d285) main_cf0_pane_t_ParamLimits

0xfdc0,	// (0x0001d285) main_cf0_pane_t

0xed0a,	// (0x0001c1cf) scroll_pane_cp11

0x8add,	// (0x00015fa2) cf0_flow_pane_g1

0x8ae9,	// (0x00015fae) cf0_flow_pane_g2

0x0001,

0xfdc5,	// (0x0001d28a) cf0_flow_pane_g

0x8af5,	// (0x00015fba) cf0_flow_pane_t1

0x97a6,	// (0x00016c6b) main_call6_pane

0x97a6,	// (0x00016c6b) main_calllock_pane

0x8b07,	// (0x00015fcc) call6_btn_grp_pane_ParamLimits

0x8b07,	// (0x00015fcc) call6_btn_grp_pane

0x8b21,	// (0x00015fe6) call6_pane_g1_ParamLimits

0x8b21,	// (0x00015fe6) call6_pane_g1

0x8b3a,	// (0x00015fff) popup_call6_1st_window_ParamLimits

0x8b3a,	// (0x00015fff) popup_call6_1st_window

0x8b4e,	// (0x00016013) popup_call6_2nd_window_ParamLimits

0x8b4e,	// (0x00016013) popup_call6_2nd_window

0x8b62,	// (0x00016027) cell_call6_btn_pane_ParamLimits

0x8b62,	// (0x00016027) cell_call6_btn_pane

0xa1ee,	// (0x000176b3) bg_popup_call2_in_pane_cp03

0xed15,	// (0x0001c1da) popup_call6_1st_window_g1

0xed1d,	// (0x0001c1e2) popup_call6_1st_window_g2

0xed25,	// (0x0001c1ea) popup_call6_1st_window_g3

0x0002,

0xfdca,	// (0x0001d28f) popup_call6_1st_window_g

0xed2d,	// (0x0001c1f2) popup_call6_1st_window_t1

0xed3c,	// (0x0001c201) popup_call6_1st_window_t2

0xed4c,	// (0x0001c211) popup_call6_1st_window_t3

0x0002,

0xfdd1,	// (0x0001d296) popup_call6_1st_window_t

0xa1ee,	// (0x000176b3) bg_popup_call2_in_pane_cp04

0xed5c,	// (0x0001c221) popup_call6_2nd_window_g1

0xed64,	// (0x0001c229) popup_call6_2nd_window_g2

0xed6c,	// (0x0001c231) popup_call6_2nd_window_g3

0x0002,

0xfdd8,	// (0x0001d29d) popup_call6_2nd_window_g

0xed74,	// (0x0001c239) popup_call6_2nd_window_t1

0x97a6,	// (0x00016c6b) bg_button_pane_cp15

0xed83,	// (0x0001c248) cell_call6_btn_pane_g1

0xed8c,	// (0x0001c251) cell_call6_btn_pane_t1

0x8b76,	// (0x0001603b) listscroll_wgtman_pane_ParamLimits

0x8b76,	// (0x0001603b) listscroll_wgtman_pane

0x8b97,	// (0x0001605c) wgtman_btn_pane_ParamLimits

0x8b97,	// (0x0001605c) wgtman_btn_pane

0xaaa7,	// (0x00017f6c) aid_scroll_copy1

0xed9b,	// (0x0001c260) list_wgtman_pane

0x8bda,	// (0x0001609f) wgtman_btn_pane_g1_ParamLimits

0x8bda,	// (0x0001609f) wgtman_btn_pane_g1

0x8c06,	// (0x000160cb) wgtman_btn_pane_t1_ParamLimits

0x8c06,	// (0x000160cb) wgtman_btn_pane_t1

0xeda5,	// (0x0001c26a) wgtman_btn_pane_t2_ParamLimits

0xeda5,	// (0x0001c26a) wgtman_btn_pane_t2

0x0001,

0xfddf,	// (0x0001d2a4) wgtman_btn_pane_t_ParamLimits

0xfddf,	// (0x0001d2a4) wgtman_btn_pane_t

0x8c43,	// (0x00016108) listrow_wgtman_pane_ParamLimits

0x8c43,	// (0x00016108) listrow_wgtman_pane

0x8c57,	// (0x0001611c) listrow_wgtman_pane_g1

0x8c64,	// (0x00016129) listrow_wgtman_pane_g2

0x0001,

0xfde4,	// (0x0001d2a9) listrow_wgtman_pane_g

0x8c82,	// (0x00016147) listrow_wgtman_pane_t1

0x8c9a,	// (0x0001615f) listrow_wgtman_pane_t2

0x0001,

0xfde9,	// (0x0001d2ae) listrow_wgtman_pane_t

0x8cc0,	// (0x00016185) wait_bar_pane_cp09

0xee01,	// (0x0001c2c6) main_calllock_btn_pane

0xee0b,	// (0x0001c2d0) main_calllock_pane_g1

0x97a6,	// (0x00016c6b) bg_button_pane_cp17

0xed83,	// (0x0001c248) main_calllock_btn_pane_g1

0xee17,	// (0x0001c2dc) main_calllock_btn_pane_t1

0x97a6,	// (0x00016c6b) main_dialer3_pane

0x97a6,	// (0x00016c6b) main_fmrd2_pane

0xa243,	// (0x00017708) main_fs_bigclock_unlock_btn_pane_g1

0x8cda,	// (0x0001619f) main_fs_bigclock_unlock_btn_pane_t1

0x8ce8,	// (0x000161ad) area_fmrd2_info_pane_ParamLimits

0x8ce8,	// (0x000161ad) area_fmrd2_info_pane

0x8cf9,	// (0x000161be) area_fmrd2_visual_pane_ParamLimits

0x8cf9,	// (0x000161be) area_fmrd2_visual_pane

0x8d07,	// (0x000161cc) fmrd2_indi_pane_ParamLimits

0x8d07,	// (0x000161cc) fmrd2_indi_pane

0x8d14,	// (0x000161d9) area_fmrd2_visual_pane_g1

0x8d1c,	// (0x000161e1) area_fmrd2_visual_pane_t1

0x8d2c,	// (0x000161f1) area_fmrd2_visual_pane_t2

0x8d3c,	// (0x00016201) area_fmrd2_visual_pane_t3

0x0002,

0xfdf3,	// (0x0001d2b8) area_fmrd2_visual_pane_t

0x8d4c,	// (0x00016211) area_fmrd2_info_pane_g1

0x8d54,	// (0x00016219) area_fmrd2_info_pane_t1

0x8d64,	// (0x00016229) area_fmrd2_info_pane_t2

0x8d74,	// (0x00016239) area_fmrd2_info_pane_t3

0x8d84,	// (0x00016249) area_fmrd2_info_pane_t4

0x0003,

0xfdfa,	// (0x0001d2bf) area_fmrd2_info_pane_t

0x8d94,	// (0x00016259) fmrd2_indi_pane_t1

0x8da4,	// (0x00016269) fmrd2_indi_pane_t2

0x8db4,	// (0x00016279) fmrd2_indi_pane_t3

0x0002,

0xfe03,	// (0x0001d2c8) fmrd2_indi_pane_t

0x7ae5,	// (0x00014faa) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7ae5,	// (0x00014faa) list_single_fs_bigclock_indicator_pane_g5

0x7b9a,	// (0x0001505f) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7b9a,	// (0x0001505f) list_single_fs_bigclock_indicator_pane_t5

0x83f3,	// (0x000158b8) aid_cell_bcale_month_pane_ParamLimits

0x83f3,	// (0x000158b8) aid_cell_bcale_month_pane

0x8411,	// (0x000158d6) bcale_month_pane_ParamLimits

0x8411,	// (0x000158d6) bcale_month_pane

0x8435,	// (0x000158fa) bcale_preview_pane_ParamLimits

0x8435,	// (0x000158fa) bcale_preview_pane

0xeb58,	// (0x0001c01d) list_single_fs_bigclock_pane_t1_ParamLimits

0xeb77,	// (0x0001c03c) list_single_fs_bigclock_pane_t2_ParamLimits

0xeb77,	// (0x0001c03c) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7e,	// (0x0001d243) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7e,	// (0x0001d243) list_single_fs_bigclock_pane_t

0x8cd2,	// (0x00016197) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdee,	// (0x0001d2b3) main_fs_bigclock_unlock_btn_pane_g

0x8dc4,	// (0x00016289) aid_dia3_key_size_ParamLimits

0x8dc4,	// (0x00016289) aid_dia3_key_size

0x8dd8,	// (0x0001629d) aid_dia3_listrow_size_ParamLimits

0x8dd8,	// (0x0001629d) aid_dia3_listrow_size

0x8df2,	// (0x000162b7) dia3_keypad_fun_pane_ParamLimits

0x8df2,	// (0x000162b7) dia3_keypad_fun_pane

0x8e0c,	// (0x000162d1) dia3_keypad_num_pane_ParamLimits

0x8e0c,	// (0x000162d1) dia3_keypad_num_pane

0x8e26,	// (0x000162eb) dia3_listscroll_pane_ParamLimits

0x8e26,	// (0x000162eb) dia3_listscroll_pane

0x8e3c,	// (0x00016301) dia3_numentry_pane_ParamLimits

0x8e3c,	// (0x00016301) dia3_numentry_pane

0xee26,	// (0x0001c2eb) dia3_list_pane

0x8e56,	// (0x0001631b) scroll_pane_cp12

0x97a6,	// (0x00016c6b) bg_dia3_numentry_pane

0x8e61,	// (0x00016326) dia3_numentry_pane_t1

0x8e70,	// (0x00016335) cell_dia3_key_num_pane

0x8e78,	// (0x0001633d) cell_dia3_key0_fun_pane_ParamLimits

0x8e78,	// (0x0001633d) cell_dia3_key0_fun_pane

0x8e8c,	// (0x00016351) cell_dia3_key1_fun_pane_ParamLimits

0x8e8c,	// (0x00016351) cell_dia3_key1_fun_pane

0x8ea1,	// (0x00016366) dia3_listrow_pane

0xde63,	// (0x0001b328) bg_dia3_numentry_pane_g1

0x97a6,	// (0x00016c6b) bg_button_pane_cp21

0x8eb3,	// (0x00016378) cell_dia3_key_num_pane_t1

0x8ec1,	// (0x00016386) cell_dia3_key_num_pane_t2

0x8ec1,	// (0x00016386) cell_dia3_key_num_pane_t3

0x8ec1,	// (0x00016386) cell_dia3_key_num_pane_t4

0x0003,

0xfe0a,	// (0x0001d2cf) cell_dia3_key_num_pane_t

0x97a6,	// (0x00016c6b) bg_button_pane_cp19

0x8ed0,	// (0x00016395) cell_dia3_key0_fun_pane_g1

0x97a6,	// (0x00016c6b) bg_button_pane_cp20

0x8ed8,	// (0x0001639d) cell_dia3_key1_fun_pane_g1

0x8ee0,	// (0x000163a5) area_left_week_number_pane

0x8eee,	// (0x000163b3) area_top_day_name_pane

0x8f01,	// (0x000163c6) frame_month_view_pane

0xee31,	// (0x0001c2f6) grid_month_view_pane

0x8f16,	// (0x000163db) cell_top_day_name_pane_ParamLimits

0x8f16,	// (0x000163db) cell_top_day_name_pane

0x8f45,	// (0x0001640a) cell_area_left_week_number_pane_ParamLimits

0x8f45,	// (0x0001640a) cell_area_left_week_number_pane

0x8f5b,	// (0x00016420) cell_month_view_pane_ParamLimits

0x8f5b,	// (0x00016420) cell_month_view_pane

0xee3f,	// (0x0001c304) frm_month_g1

0x8f8c,	// (0x00016451) frm_month_g2

0x8f9f,	// (0x00016464) frm_month_g3

0x8fb2,	// (0x00016477) frm_month_g4

0x8fc5,	// (0x0001648a) frm_month_g5

0x8fd8,	// (0x0001649d) frm_month_g6

0x8fed,	// (0x000164b2) frm_month_g7

0xee4c,	// (0x0001c311) frm_month_g8

0x9002,	// (0x000164c7) frm_month_g9

0x9012,	// (0x000164d7) frm_month_g10

0x9022,	// (0x000164e7) frm_month_g11

0x9032,	// (0x000164f7) frm_month_g12

0x9044,	// (0x00016509) frm_month_g13

0x9058,	// (0x0001651d) frm_month_g14

0x906c,	// (0x00016531) frm_month_g15

0x9080,	// (0x00016545) frm_month_g16

0x000f,

0xfe13,	// (0x0001d2d8) frm_month_g

0xee59,	// (0x0001c31e) cell_top_day_name_pane_t1

0x9094,	// (0x00016559) cell_area_left_week_number_pane_g1

0x90a0,	// (0x00016565) cell_area_left_week_number_pane_t1

0x9f47,	// (0x0001740c) cell_month_view_pane_g1

0x90b3,	// (0x00016578) cell_month_view_pane_t1

0x97a6,	// (0x00016c6b) main_fps_pane

0xe2a0,	// (0x0001b765) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe2a0,	// (0x0001b765) cmail_ddmenu_btn02_pane_cp1

0xe2bc,	// (0x0001b781) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe2bc,	// (0x0001b781) cmail_ddmenu_btn02_pane_cp2

0x8710,	// (0x00015bd5) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8710,	// (0x00015bd5) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd31,	// (0x0001d1f6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd31,	// (0x0001d1f6) cmail_ddmenu_btn02_pane_g

0x8731,	// (0x00015bf6) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8731,	// (0x00015bf6) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd36,	// (0x0001d1fb) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd36,	// (0x0001d1fb) cmail_ddmenu_btn02_pane_t

0x90c6,	// (0x0001658b) fps_text_pane_ParamLimits

0x90c6,	// (0x0001658b) fps_text_pane

0x90dd,	// (0x000165a2) main_fps_pane_g1_ParamLimits

0x90dd,	// (0x000165a2) main_fps_pane_g1

0x90f5,	// (0x000165ba) wait_bar_pane_cp010_ParamLimits

0x90f5,	// (0x000165ba) wait_bar_pane_cp010

0x9108,	// (0x000165cd) fps_text_pane_t1_ParamLimits

0x9108,	// (0x000165cd) fps_text_pane_t1

0xedd3,	// (0x0001c298) cam4_image_uncrop_pane_g1

0xeddc,	// (0x0001c2a1) cam4_image_uncrop_pane_g2

0x5b8e,	// (0x00013053) cam4_image_uncrop_pane_g3

0x5b97,	// (0x0001305c) cam4_image_uncrop_pane_g4

0x0003,

0xf875,	// (0x0001cd3a) cam4_image_uncrop_pane_g

0x8ea1,	// (0x00016366) dia3_listrow_pane_ParamLimits

0x97a6,	// (0x00016c6b) main_phob2_pane

0x8245,	// (0x0001570a) cell_tport_appsw_pane_cp02_ParamLimits

0x8245,	// (0x0001570a) cell_tport_appsw_pane_cp02

0x8259,	// (0x0001571e) cell_tport_appsw_pane_cp03_ParamLimits

0x8259,	// (0x0001571e) cell_tport_appsw_pane_cp03

0x97a6,	// (0x00016c6b) phob2_contact_card_pane

0x97a6,	// (0x00016c6b) phob2_listscroll_pane

0xee6c,	// (0x0001c331) phob2_list_pane

0xee74,	// (0x0001c339) scroll_pane_cp034

0x9120,	// (0x000165e5) phob2_cc_data_pane_ParamLimits

0x9120,	// (0x000165e5) phob2_cc_data_pane

0x9139,	// (0x000165fe) phob2_cc_listscroll_pane_ParamLimits

0x9139,	// (0x000165fe) phob2_cc_listscroll_pane

0x8c43,	// (0x00016108) list_double_large_graphic_phob2_pane_ParamLimits

0x8c43,	// (0x00016108) list_double_large_graphic_phob2_pane

0x915b,	// (0x00016620) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x915b,	// (0x00016620) list_double_large_graphic_phob2_pane_g1

0x9168,	// (0x0001662d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9168,	// (0x0001662d) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe34,	// (0x0001d2f9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe34,	// (0x0001d2f9) list_double_large_graphic_phob2_pane_g

0x918e,	// (0x00016653) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x918e,	// (0x00016653) list_double_large_graphic_phob2_pane_t1

0x91a3,	// (0x00016668) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x91a3,	// (0x00016668) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3d,	// (0x0001d302) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3d,	// (0x0001d302) list_double_large_graphic_phob2_pane_t

0x97a6,	// (0x00016c6b) list_highlight_pane_cp024

0x91b8,	// (0x0001667d) phob2_cc_button_pane

0x91c2,	// (0x00016687) phob2_cc_data_pane_g1_ParamLimits

0x91c2,	// (0x00016687) phob2_cc_data_pane_g1

0x91dc,	// (0x000166a1) phob2_cc_data_pane_g2_ParamLimits

0x91dc,	// (0x000166a1) phob2_cc_data_pane_g2

0x0001,

0xfe42,	// (0x0001d307) phob2_cc_data_pane_g_ParamLimits

0xfe42,	// (0x0001d307) phob2_cc_data_pane_g

0x91ee,	// (0x000166b3) phob2_cc_data_pane_t1_ParamLimits

0x91ee,	// (0x000166b3) phob2_cc_data_pane_t1

0x920e,	// (0x000166d3) phob2_cc_data_pane_t2_ParamLimits

0x920e,	// (0x000166d3) phob2_cc_data_pane_t2

0x922e,	// (0x000166f3) phob2_cc_data_pane_t3_ParamLimits

0x922e,	// (0x000166f3) phob2_cc_data_pane_t3

0x0002,

0xfe47,	// (0x0001d30c) phob2_cc_data_pane_t_ParamLimits

0xfe47,	// (0x0001d30c) phob2_cc_data_pane_t

0xee7c,	// (0x0001c341) phob2_cc_list_pane_ParamLimits

0xee7c,	// (0x0001c341) phob2_cc_list_pane

0xd4fd,	// (0x0001a9c2) scroll_pane_cp035_ParamLimits

0xd4fd,	// (0x0001a9c2) scroll_pane_cp035

0x981b,	// (0x00016ce0) bg_button_pane_cp033

0xee88,	// (0x0001c34d) phob2_cc_button_pane_g1

0xee94,	// (0x0001c359) phob2_cc_button_pane_t1

0xeea9,	// (0x0001c36e) phob2_cc_button_pane_t2

0x0001,

0xfe4e,	// (0x0001d313) phob2_cc_button_pane_t

0x924e,	// (0x00016713) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x924e,	// (0x00016713) list_double_large_graphic_phob2_cc_pane

0x928c,	// (0x00016751) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x928c,	// (0x00016751) list_double_large_graphic_phob2_cc_pane_g1

0x9298,	// (0x0001675d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9298,	// (0x0001675d) list_double_large_graphic_phob2_cc_pane_g2

0x92a4,	// (0x00016769) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x92a4,	// (0x00016769) list_double_large_graphic_phob2_cc_pane_g3

0x92b0,	// (0x00016775) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x92b0,	// (0x00016775) list_double_large_graphic_phob2_cc_pane_g4

0x92bc,	// (0x00016781) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x92bc,	// (0x00016781) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe53,	// (0x0001d318) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe53,	// (0x0001d318) list_double_large_graphic_phob2_cc_pane_g

0x92c8,	// (0x0001678d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x92c8,	// (0x0001678d) list_double_large_graphic_phob2_cc_pane_t1

0x92f1,	// (0x000167b6) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x92f1,	// (0x000167b6) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5e,	// (0x0001d323) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5e,	// (0x0001d323) list_double_large_graphic_phob2_cc_pane_t

0xeebb,	// (0x0001c380) list_highlight_pane_cp025_ParamLimits

0xeebb,	// (0x0001c380) list_highlight_pane_cp025

0x981b,	// (0x00016ce0) bg_button_pane_cp033_ParamLimits

0xee88,	// (0x0001c34d) phob2_cc_button_pane_g1_ParamLimits

0xee94,	// (0x0001c359) phob2_cc_button_pane_t1_ParamLimits

0xeea9,	// (0x0001c36e) phob2_cc_button_pane_t2_ParamLimits

0xfe4e,	// (0x0001d313) phob2_cc_button_pane_t_ParamLimits

0x1052,	// (0x0000e517) popup_wgtman_window

0xd2d6,	// (0x0001a79b) scroll_pane_cp038

0x8bbc,	// (0x00016081) wgtman_btn_pane_cp_01_ParamLimits

0x8bbc,	// (0x00016081) wgtman_btn_pane_cp_01

0xeec9,	// (0x0001c38e) wgtman_content_pane

0xeed2,	// (0x0001c397) wgtman_heading_pane

0x97a6,	// (0x00016c6b) bg_heading_pane_cp02

0xeedb,	// (0x0001c3a0) wgtman_heading_pane_g1

0xeee3,	// (0x0001c3a8) wgtman_heading_pane_t1

0xeef1,	// (0x0001c3b6) scroll_pane_cp036

0xeef9,	// (0x0001c3be) wgtman_list_pane

0xede7,	// (0x0001c2ac) wgtman_list_pane_t1_ParamLimits

0xede7,	// (0x0001c2ac) wgtman_list_pane_t1

0xd044,	// (0x0001a509) cam4_grid_pane

0x68ff,	// (0x00013dc4) bg_button_pane_cp015_ParamLimits

0x6913,	// (0x00013dd8) bg_button_pane_cp016_ParamLimits

0x6926,	// (0x00013deb) bg_button_pane_cp017_ParamLimits

0x697e,	// (0x00013e43) popup_vitu2_query_window_g3_ParamLimits

0x697e,	// (0x00013e43) popup_vitu2_query_window_g3

0x6a3b,	// (0x00013f00) popup_vitu2_query_window_t6_ParamLimits

0x6a3b,	// (0x00013f00) popup_vitu2_query_window_t6

0x6a66,	// (0x00013f2b) popup_vitu2_query_window_t7_ParamLimits

0x6a66,	// (0x00013f2b) popup_vitu2_query_window_t7

0xedd3,	// (0x0001c298) cam4_grid_pane_g1

0xeddc,	// (0x0001c2a1) cam4_grid_pane_g2

0xef01,	// (0x0001c3c6) cam4_grid_pane_g3

0xef0a,	// (0x0001c3cf) cam4_grid_pane_g4

0x0003,

0xfe63,	// (0x0001d328) cam4_grid_pane_g

0x1c76,	// (0x0000f13b) aid_placing_vt_slider_lsc_ParamLimits

0x1f63,	// (0x0000f428) vidtel_button_pane_ParamLimits

0x1f63,	// (0x0000f428) vidtel_button_pane

0x97a6,	// (0x00016c6b) bg_button_pane_cp034

0xef15,	// (0x0001c3da) vidtel_button_pane_g1

0xef1d,	// (0x0001c3e2) vidtel_button_pane_t1

0xd408,	// (0x0001a8cd) aid_size_vtel_slider_touch

0xd4fd,	// (0x0001a9c2) scroll_pane_cp039

0x7723,	// (0x00014be8) ncim_query_button_pane_cp01_ParamLimits

0x7742,	// (0x00014c07) ncimui_query_pane_g1_ParamLimits

0x981b,	// (0x00016ce0) input_focus_pane_cp012_ParamLimits

0xdea1,	// (0x0001b366) ncim_query_entry_pane_t1_ParamLimits

0xd4fd,	// (0x0001a9c2) scroll_pane_cp039_ParamLimits

0x3115,	// (0x000105da) navi_pane_bcale_mc_g1

0x311d,	// (0x000105e2) navi_pane_bcale_mc_t1

0xe2f2,	// (0x0001b7b7) main_sp_fs_email_pane_g1

0xe2fe,	// (0x0001b7c3) main_sp_fs_email_pane_g2

0x0001,

0xfc66,	// (0x0001d12b) main_sp_fs_email_pane_g

0xe7e3,	// (0x0001bca8) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe7e3,	// (0x0001bca8) list_single_cale_mrui_row_pane_g3

0x8751,	// (0x00015c16) list_single_recal_day_pane_g5_event_pane

0xe9c0,	// (0x0001be85) list_single_recal_day_pane_g7

0xef33,	// (0x0001c3f8) list_recal_day_event_pane_cp01

0xef3c,	// (0x0001c401) list_recal_vselct_arw_lo_pane_cp01

0xef44,	// (0x0001c409) list_recal_vselct_arw_up_pane_cp01

0xef4c,	// (0x0001c411) list_recal_vselct_pane_cp01

0xd454,	// (0x0001a919) list_recal_day_event_pane_cp01_g1

0xef56,	// (0x0001c41b) list_recal_day_event_pane_cp01_t1

0xe9c8,	// (0x0001be8d) list_single_recal_day_pane_t1_ParamLimits

0xe9da,	// (0x0001be9f) list_single_recal_day_pane_t2_ParamLimits

0xfd46,	// (0x0001d20b) list_single_recal_day_pane_t_ParamLimits

0x9ecc,	// (0x00017391) bg_notes_pane_ParamLimits

0x9f9f,	// (0x00017464) list_notes_pane_ParamLimits

0x1228,	// (0x0000e6ed) scroll_pane_cp06_ParamLimits

0x9fdb,	// (0x000174a0) main_notes_pane_ParamLimits

0x981b,	// (0x00016ce0) main_welc_pane

0x9336,	// (0x000167fb) main_welc_body_pane_ParamLimits

0x9336,	// (0x000167fb) main_welc_body_pane

0x9355,	// (0x0001681a) main_welc_opti_pane_ParamLimits

0x9355,	// (0x0001681a) main_welc_opti_pane

0x93d1,	// (0x00016896) main_welc_pane_t1_ParamLimits

0x93d1,	// (0x00016896) main_welc_pane_t1

0xedbc,	// (0x0001c281) main_welc_body_row_pane_ParamLimits

0xedbc,	// (0x0001c281) main_welc_body_row_pane

0x9f39,	// (0x000173fe) main_welc_opti_row_pane_ParamLimits

0x9f39,	// (0x000173fe) main_welc_opti_row_pane

0xef6c,	// (0x0001c431) main_welc_opti_row_pane_g1

0x954d,	// (0x00016a12) main_welc_opti_row_pane_t1

0xef74,	// (0x0001c439) main_welc_body_row_pane_t1

0xec55,	// (0x0001c11a) popup_notif_wgt_heading_pane

0xec6f,	// (0x0001c134) aid_size_list_notif_wgt_del_ParamLimits

0xec7c,	// (0x0001c141) list_notif_wgt_row_pane_g1_ParamLimits

0xec88,	// (0x0001c14d) list_notif_wgt_row_pane_g2_ParamLimits

0xec97,	// (0x0001c15c) list_notif_wgt_row_pane_g3_ParamLimits

0xfdad,	// (0x0001d272) list_notif_wgt_row_pane_g_ParamLimits

0xeca4,	// (0x0001c169) list_notif_wgt_row_pane_t1_ParamLimits

0xecba,	// (0x0001c17f) list_notif_wgt_row_pane_t2_ParamLimits

0xeccc,	// (0x0001c191) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb4,	// (0x0001d279) list_notif_wgt_row_pane_t_ParamLimits

0x8c57,	// (0x0001611c) listrow_wgtman_pane_g1_ParamLimits

0x8c64,	// (0x00016129) listrow_wgtman_pane_g2_ParamLimits

0xfde4,	// (0x0001d2a9) listrow_wgtman_pane_g_ParamLimits

0x8c82,	// (0x00016147) listrow_wgtman_pane_t1_ParamLimits

0x8c9a,	// (0x0001615f) listrow_wgtman_pane_t2_ParamLimits

0xfde9,	// (0x0001d2ae) listrow_wgtman_pane_t_ParamLimits

0x8cc0,	// (0x00016185) wait_bar_pane_cp09_ParamLimits

0x97a6,	// (0x00016c6b) bg_popup_heading_pane_cp02

0xef83,	// (0x0001c448) popup_notif_wgt_heading_pane_g1

0xef8b,	// (0x0001c450) popup_notif_wgt_heading_pane_t1

0x97a6,	// (0x00016c6b) main_vids_pane

0x97a6,	// (0x00016c6b) vids_listscroll_pane

0x955c,	// (0x00016a21) scroll_pane_cp040

0x97a6,	// (0x00016c6b) vids_list_pane

0x9567,	// (0x00016a2c) vids_list_double_pane_ParamLimits

0x9567,	// (0x00016a2c) vids_list_double_pane

0x957a,	// (0x00016a3f) vids_list_double_pane_g1

0x9583,	// (0x00016a48) vids_list_double_pane_t1

0x9593,	// (0x00016a58) vids_list_double_pane_t2

0x0001,

0xfe82,	// (0x0001d347) vids_list_double_pane_t

0x981b,	// (0x00016ce0) main_ncimui_pane_ParamLimits

0x7559,	// (0x00014a1e) main_ncimui_pane_g1_ParamLimits

0x7565,	// (0x00014a2a) main_ncimui_pane_g2_ParamLimits

0x7565,	// (0x00014a2a) main_ncimui_pane_g2

0x0001,

0xfb67,	// (0x0001d02c) main_ncimui_pane_g_ParamLimits

0xfb67,	// (0x0001d02c) main_ncimui_pane_g

0x9374,	// (0x00016839) main_welc_pane_g1_ParamLimits

0x9374,	// (0x00016839) main_welc_pane_g1

0x9389,	// (0x0001684e) main_welc_pane_g2_ParamLimits

0x9389,	// (0x0001684e) main_welc_pane_g2

0x0003,

0xfe6c,	// (0x0001d331) main_welc_pane_g_ParamLimits

0xfe6c,	// (0x0001d331) main_welc_pane_g

0x9ecc,	// (0x00017391) listscroll_mce_pane_ParamLimits

0x31f5,	// (0x000106ba) wait_bar_pane_cp10

0xbfbc,	// (0x00019481) main_cale_day_pane_ParamLimits

0xbfbc,	// (0x00019481) main_cale_week_pane_ParamLimits

0x9ecc,	// (0x00017391) main_messa_pane_ParamLimits

0x4f71,	// (0x00012436) main_clock2_btn_pane_ParamLimits

0x4f71,	// (0x00012436) main_clock2_btn_pane

0xc842,	// (0x00019d07) main_clock2_btn_pane_cp01_ParamLimits

0xc842,	// (0x00019d07) main_clock2_btn_pane_cp01

0xe76f,	// (0x0001bc34) list_cale_mrui_pane_ParamLimits

0xed02,	// (0x0001c1c7) main_cf0_pane_g2

0x0001,

0xfdbb,	// (0x0001d280) main_cf0_pane_g

0x8ee0,	// (0x000163a5) area_left_week_number_pane_ParamLimits

0x8eee,	// (0x000163b3) area_top_day_name_pane_ParamLimits

0x8f01,	// (0x000163c6) frame_month_view_pane_ParamLimits

0xee31,	// (0x0001c2f6) grid_month_view_pane_ParamLimits

0xee3f,	// (0x0001c304) frm_month_g1_ParamLimits

0x8f8c,	// (0x00016451) frm_month_g2_ParamLimits

0x8f9f,	// (0x00016464) frm_month_g3_ParamLimits

0x8fb2,	// (0x00016477) frm_month_g4_ParamLimits

0x8fc5,	// (0x0001648a) frm_month_g5_ParamLimits

0x8fd8,	// (0x0001649d) frm_month_g6_ParamLimits

0x8fed,	// (0x000164b2) frm_month_g7_ParamLimits

0xee4c,	// (0x0001c311) frm_month_g8_ParamLimits

0x9002,	// (0x000164c7) frm_month_g9_ParamLimits

0x9012,	// (0x000164d7) frm_month_g10_ParamLimits

0x9022,	// (0x000164e7) frm_month_g11_ParamLimits

0x9032,	// (0x000164f7) frm_month_g12_ParamLimits

0x9044,	// (0x00016509) frm_month_g13_ParamLimits

0x9058,	// (0x0001651d) frm_month_g14_ParamLimits

0x906c,	// (0x00016531) frm_month_g15_ParamLimits

0x9080,	// (0x00016545) frm_month_g16_ParamLimits

0xfe13,	// (0x0001d2d8) frm_month_g_ParamLimits

0xee59,	// (0x0001c31e) cell_top_day_name_pane_t1_ParamLimits

0x9094,	// (0x00016559) cell_area_left_week_number_pane_g1_ParamLimits

0x90a0,	// (0x00016565) cell_area_left_week_number_pane_t1_ParamLimits

0x9f47,	// (0x0001740c) cell_month_view_pane_g1_ParamLimits

0x90b3,	// (0x00016578) cell_month_view_pane_t1_ParamLimits

0x9ec4,	// (0x00017389) main_clock2_btn_pane_g1

0xef99,	// (0x0001c45e) main_clock2_btn_pane_t1

0x981b,	// (0x00016ce0) listscroll_cmail_pane_ParamLimits

0xe2f2,	// (0x0001b7b7) main_sp_fs_email_pane_g1_ParamLimits

0xe2fe,	// (0x0001b7c3) main_sp_fs_email_pane_g2_ParamLimits

0xfc66,	// (0x0001d12b) main_sp_fs_email_pane_g_ParamLimits

0xe92f,	// (0x0001bdf4) list_recal_day_pane_ParamLimits

0xe940,	// (0x0001be05) mian_recal_day_pane_t1

0x80ed,	// (0x000155b2) list_single_dyc_row_text_pane_t4_ParamLimits

0x80ed,	// (0x000155b2) list_single_dyc_row_text_pane_t4

0x8136,	// (0x000155fb) list_single_dyc_row_text_pane_t5_ParamLimits

0x8136,	// (0x000155fb) list_single_dyc_row_text_pane_t5

0xe3b4,	// (0x0001b879) list_single_dyc_row_text_pane_t6_ParamLimits

0xe3b4,	// (0x0001b879) list_single_dyc_row_text_pane_t6

0x2d46,	// (0x0001020b) aid_mgn_list_cale_time_pane

0x981b,	// (0x00016ce0) main_gallery2_pane_ParamLimits

0xc856,	// (0x00019d1b) main_clock2_pane_cp01_t1

0xc864,	// (0x00019d29) main_clock2_pane_cp01_t3

0x0001,

0xf74c,	// (0x0001cc11) main_clock2_pane_cp01_t

0x1644,	// (0x0000eb09) cale_week_scroll_pane_g16_ParamLimits

0x1644,	// (0x0000eb09) cale_week_scroll_pane_g16

0xa1ee,	// (0x000176b3) vorec_slider_pane

0xef1d,	// (0x0001c3e2) vidtel_button_pane_t1_ParamLimits

0x87b7,	// (0x00015c7c) main_fs_bigclock_clock_pane_g1_ParamLimits

0x87b7,	// (0x00015c7c) main_fs_bigclock_clock_pane_g2_ParamLimits

0x87ca,	// (0x00015c8f) main_fs_bigclock_clock_pane_g3_ParamLimits

0x87ca,	// (0x00015c8f) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd69,	// (0x0001d22e) main_fs_bigclock_clock_pane_g_ParamLimits

0x87e1,	// (0x00015ca6) main_fs_bigclock_clock_pane_t1_ParamLimits

0x87f7,	// (0x00015cbc) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd72,	// (0x0001d237) main_fs_bigclock_clock_pane_t_ParamLimits

0x47b7,	// (0x00011c7c) main_mup3_lyrics_pane_ParamLimits

0x47b7,	// (0x00011c7c) main_mup3_lyrics_pane

0x95c9,	// (0x00016a8e) main_mup3_lyrics_pane_t1_ParamLimits

0x95c9,	// (0x00016a8e) main_mup3_lyrics_pane_t1

0xcc9a,	// (0x0001a15f) aid_main_mp4_pane_t1_area

0xcca4,	// (0x0001a169) aid_main_mp4_pane_t2_area

0xcd50,	// (0x0001a215) main_mp4_pane_g7_ParamLimits

0xcd50,	// (0x0001a215) main_mp4_pane_g7

0xcd5c,	// (0x0001a221) main_mp4_pane_g8_ParamLimits

0xcd5c,	// (0x0001a221) main_mp4_pane_g8

0x5955,	// (0x00012e1a) aid_call6_pane_g1_size

0x927c,	// (0x00016741) list_double_large_graphic_phob2_other_pane_ParamLimits

0x927c,	// (0x00016741) list_double_large_graphic_phob2_other_pane

0x95e4,	// (0x00016aa9) list_double_large_graphic_phob2_other_pane_g1

0x97a6,	// (0x00016c6b) list_highlight_pane_cp026

0x981b,	// (0x00016ce0) main_welc_pane_ParamLimits

0x7f2c,	// (0x000153f1) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7f2c,	// (0x000153f1) main_sp_fs_ctrlbar_pane_g3

0x7f46,	// (0x0001540b) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7f46,	// (0x0001540b) main_sp_fs_ctrlbar_pane_g4

0x7f7a,	// (0x0001543f) toolbar2_fixed_button_pane_cp01

0x7f85,	// (0x0001544a) toolbar2_fixed_button_pane_cp02

0x7f92,	// (0x00015457) toolbar2_fixed_button_pane_cp03

0x931a,	// (0x000167df) list_welc_entry_pane_ParamLimits

0x931a,	// (0x000167df) list_welc_entry_pane

0x939e,	// (0x00016863) main_welc_pane_g3_ParamLimits

0x939e,	// (0x00016863) main_welc_pane_g3

0x93f3,	// (0x000168b8) main_welc_pane_t2_ParamLimits

0x93f3,	// (0x000168b8) main_welc_pane_t2

0x940e,	// (0x000168d3) main_welc_pane_t3_ParamLimits

0x940e,	// (0x000168d3) main_welc_pane_t3

0x0005,

0xfe75,	// (0x0001d33a) main_welc_pane_t_ParamLimits

0xfe75,	// (0x0001d33a) main_welc_pane_t

0x94cb,	// (0x00016990) welc_button_pane_ParamLimits

0x94cb,	// (0x00016990) welc_button_pane

0x9539,	// (0x000169fe) welc_service_logo_pane_ParamLimits

0x9539,	// (0x000169fe) welc_service_logo_pane

0x95ec,	// (0x00016ab1) list_single_welc_entry_pane_ParamLimits

0x95ec,	// (0x00016ab1) list_single_welc_entry_pane

0x95ff,	// (0x00016ac4) list_single_welc_entry_pane_g1

0x9607,	// (0x00016acc) list_single_welc_entry_pane_t1

0x9615,	// (0x00016ada) list_single_welc_entry_pane_t2

0x0001,

0xfe87,	// (0x0001d34c) list_single_welc_entry_pane_t

0x97a6,	// (0x00016c6b) bg_button_pane_cp035

0xefa7,	// (0x0001c46c) welc_button_pane_t1

0xefb5,	// (0x0001c47a) welc_service_logo_pane_g1

0xefbe,	// (0x0001c483) welc_service_logo_pane_g2

0x0001,

0xfe8c,	// (0x0001d351) welc_service_logo_pane_g

0x97a6,	// (0x00016c6b) main_int_radio_pane

0xdd3f,	// (0x0001b204) list_single_fs_dyc_pane_g1

0x9174,	// (0x00016639) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x9174,	// (0x00016639) list_double_large_graphic_phob2_pane_g3

0x9180,	// (0x00016645) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9180,	// (0x00016645) list_double_large_graphic_phob2_pane_g4

0x9623,	// (0x00016ae8) main_int_radio1_pane_ParamLimits

0x9623,	// (0x00016ae8) main_int_radio1_pane

0xefc7,	// (0x0001c48c) find_pane_cp02

0x9640,	// (0x00016b05) input_focus_pane_cp12_ParamLimits

0x9640,	// (0x00016b05) input_focus_pane_cp12

0x9650,	// (0x00016b15) input_focus_pane_cp13_ParamLimits

0x9650,	// (0x00016b15) input_focus_pane_cp13

0x9664,	// (0x00016b29) input_focus_pane_cp14_ParamLimits

0x9664,	// (0x00016b29) input_focus_pane_cp14

0xefd0,	// (0x0001c495) int_radio1_listscroll_pane

0x9678,	// (0x00016b3d) main_int_radio1_pane_g1_ParamLimits

0x9678,	// (0x00016b3d) main_int_radio1_pane_g1

0x968e,	// (0x00016b53) main_int_radio1_pane_t1_ParamLimits

0x968e,	// (0x00016b53) main_int_radio1_pane_t1

0x96a7,	// (0x00016b6c) main_int_radio1_pane_t2_ParamLimits

0x96a7,	// (0x00016b6c) main_int_radio1_pane_t2

0x96c2,	// (0x00016b87) main_int_radio1_pane_t3_ParamLimits

0x96c2,	// (0x00016b87) main_int_radio1_pane_t3

0x96dd,	// (0x00016ba2) main_int_radio1_pane_t4_ParamLimits

0x96dd,	// (0x00016ba2) main_int_radio1_pane_t4

0xefda,	// (0x0001c49f) main_int_radio1_pane_t5_ParamLimits

0xefda,	// (0x0001c49f) main_int_radio1_pane_t5

0x96ef,	// (0x00016bb4) main_int_radio1_pane_t6_ParamLimits

0x96ef,	// (0x00016bb4) main_int_radio1_pane_t6

0x9704,	// (0x00016bc9) main_int_radio1_pane_t7_ParamLimits

0x9704,	// (0x00016bc9) main_int_radio1_pane_t7

0x9719,	// (0x00016bde) main_int_radio1_pane_t8_ParamLimits

0x9719,	// (0x00016bde) main_int_radio1_pane_t8

0x9736,	// (0x00016bfb) main_int_radio1_pane_t9_ParamLimits

0x9736,	// (0x00016bfb) main_int_radio1_pane_t9

0x9748,	// (0x00016c0d) main_int_radio1_pane_t10_ParamLimits

0x9748,	// (0x00016c0d) main_int_radio1_pane_t10

0x976e,	// (0x00016c33) main_int_radio1_pane_t11_ParamLimits

0x976e,	// (0x00016c33) main_int_radio1_pane_t11

0x9794,	// (0x00016c59) main_int_radio1_pane_t12_ParamLimits

0x9794,	// (0x00016c59) main_int_radio1_pane_t12

0x000b,

0xfe91,	// (0x0001d356) main_int_radio1_pane_t_ParamLimits

0xfe91,	// (0x0001d356) main_int_radio1_pane_t

0xee6c,	// (0x0001c331) int_radio_list_pane

0xee74,	// (0x0001c339) scroll_pane_cp037

0xefec,	// (0x0001c4b1) list_double_large_graphic_int_radio_pane_ParamLimits

0xefec,	// (0x0001c4b1) list_double_large_graphic_int_radio_pane

0xf000,	// (0x0001c4c5) list_double_large_graphic_int_radio_pane_g1

0xf009,	// (0x0001c4ce) list_double_large_graphic_int_radio_pane_t1

0xf017,	// (0x0001c4dc) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfeaa,	// (0x0001d36f) list_double_large_graphic_int_radio_pane_t

0x97a6,	// (0x00016c6b) list_highlight_pane_cp027

0xef64,	// (0x0001c429) main_button_pane_4

0x93b2,	// (0x00016877) main_welc_pane_g4_ParamLimits

0x93b2,	// (0x00016877) main_welc_pane_g4

0x942b,	// (0x000168f0) main_welc_pane_t4_ParamLimits

0x942b,	// (0x000168f0) main_welc_pane_t4

0x9440,	// (0x00016905) main_welc_pane_t5_ParamLimits

0x9440,	// (0x00016905) main_welc_pane_t5

0x9490,	// (0x00016955) main_welc_pane_t6_ParamLimits

0x9490,	// (0x00016955) main_welc_pane_t6

0x94e2,	// (0x000169a7) welc_button_pane_2_ParamLimits

0x94e2,	// (0x000169a7) welc_button_pane_2

0x9500,	// (0x000169c5) welc_button_pane_3_ParamLimits

0x9500,	// (0x000169c5) welc_button_pane_3

0xef64,	// (0x0001c429) welc_button_pane_4

0x9521,	// (0x000169e6) welc_button_pane_5_ParamLimits

0x9521,	// (0x000169e6) welc_button_pane_5

0x3f29,	// (0x000113ee) main_popup_welc_pane

0xf025,	// (0x0001c4ea) main_welc_sk_g3

0xf02f,	// (0x0001c4f4) main_welc_sk_g4

0xf039,	// (0x0001c4fe) main_welc_sk_t3

0xf049,	// (0x0001c50e) main_welc_sk_t4

0xf059,	// (0x0001c51e) popup_welc_pane_t4

0xf067,	// (0x0001c52c) popup_welc_pane_t5

0xf075,	// (0x0001c53a) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
