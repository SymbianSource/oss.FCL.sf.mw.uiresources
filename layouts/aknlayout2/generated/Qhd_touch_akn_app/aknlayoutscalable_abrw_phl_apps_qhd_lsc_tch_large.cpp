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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000aa39a };

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
0x00e0,	// (0x000aa47a) Screen

0x00ec,	// (0x000aa486) application_window

0x0128,	// (0x000aa4c2) area_bottom_pane_ParamLimits

0x0128,	// (0x000aa4c2) area_bottom_pane

0x0161,	// (0x000aa4fb) area_top_pane_ParamLimits

0x0161,	// (0x000aa4fb) area_top_pane

0x94fc,	// (0x000b3896) call_video_uplink_pane_ParamLimits

0x94fc,	// (0x000b3896) call_video_uplink_pane

0x01ef,	// (0x000aa589) main_pane_ParamLimits

0x01ef,	// (0x000aa589) main_pane

0xc917,	// (0x000b6cb1) context_pane

0x3745,	// (0x000adadf) navi_pane

0x3777,	// (0x000adb11) popup_cale_events_window_ParamLimits

0x3777,	// (0x000adb11) popup_cale_events_window

0xc92a,	// (0x000b6cc4) popup_mup_playback_window

0x378f,	// (0x000adb29) signal_pane

0xa402,	// (0x000b479c) main_browser_pane

0xa5d0,	// (0x000b496a) main_burst_pane

0x3493,	// (0x000ad82d) main_calc_pane

0xc8fd,	// (0x000b6c97) main_cale_day_pane

0x34a7,	// (0x000ad841) main_cale_month_pane

0xc8fd,	// (0x000b6c97) main_cale_week_pane

0xa5d0,	// (0x000b496a) main_call_pane

0xa0e2,	// (0x000b447c) main_call_poc_pane

0xa5d0,	// (0x000b496a) main_camera_pane

0xa5d0,	// (0x000b496a) main_chi_dic_pane

0xb26a,	// (0x000b5604) main_clock_pane

0xa0e2,	// (0x000b447c) main_fmradio_pane

0xa5d0,	// (0x000b496a) main_graph_messa_pane

0xa0e2,	// (0x000b447c) main_help_pane

0xa402,	// (0x000b479c) main_im_pane

0xa33d,	// (0x000b46d7) main_image_pane_ParamLimits

0xa33d,	// (0x000b46d7) main_image_pane

0xa0e2,	// (0x000b447c) main_location2_pane

0xa5d0,	// (0x000b496a) main_location_pane

0xa33d,	// (0x000b46d7) main_messa_pane

0xa0e2,	// (0x000b447c) main_mp2_pane

0xa5d0,	// (0x000b496a) main_mp_pane

0xa0e2,	// (0x000b447c) main_msg_pane

0xa0e2,	// (0x000b447c) main_mup_eq_pane

0xa0e2,	// (0x000b447c) main_mup_pane

0xa402,	// (0x000b479c) main_notes_pane

0xa0e2,	// (0x000b447c) main_pec_pane

0xa0e2,	// (0x000b447c) main_phob_pane

0xa0e2,	// (0x000b447c) main_pinb_pane

0xa0e2,	// (0x000b447c) main_postcard_pane

0xa0e2,	// (0x000b447c) main_qdial_pane

0xa5d0,	// (0x000b496a) main_skin_pane

0xa0e2,	// (0x000b447c) main_smil2_pane

0xa5d0,	// (0x000b496a) main_smil_pane

0xa5d0,	// (0x000b496a) main_video_pane

0xa5d0,	// (0x000b496a) main_video_tele_pane

0xa33d,	// (0x000b46d7) main_viewer_pane_ParamLimits

0xa33d,	// (0x000b46d7) main_viewer_pane

0xa5d0,	// (0x000b496a) main_vorec_pane

0x34f9,	// (0x000ad893) popup_blid_sat_info_window_ParamLimits

0x34f9,	// (0x000ad893) popup_blid_sat_info_window

0x3551,	// (0x000ad8eb) popup_dyc_status_message_window_ParamLimits

0x3551,	// (0x000ad8eb) popup_dyc_status_message_window

0x356b,	// (0x000ad905) popup_grid_large_graphic_window_ParamLimits

0x356b,	// (0x000ad905) popup_grid_large_graphic_window

0x3627,	// (0x000ad9c1) popup_loc_request_window_ParamLimits

0x3627,	// (0x000ad9c1) popup_loc_request_window

0x371d,	// (0x000adab7) popup_wml_address_window_ParamLimits

0x371d,	// (0x000adab7) popup_wml_address_window

0x32cd,	// (0x000ad667) call_muted_g1

0x2f82,	// (0x000ad31c) popup_call_audio_conf_window_ParamLimits

0x2f82,	// (0x000ad31c) popup_call_audio_conf_window

0x32e1,	// (0x000ad67b) popup_call_audio_first_window_ParamLimits

0x32e1,	// (0x000ad67b) popup_call_audio_first_window

0x3357,	// (0x000ad6f1) popup_call_audio_in_window_ParamLimits

0x3357,	// (0x000ad6f1) popup_call_audio_in_window

0x3393,	// (0x000ad72d) popup_call_audio_out_window_ParamLimits

0x3393,	// (0x000ad72d) popup_call_audio_out_window

0x33cd,	// (0x000ad767) popup_call_audio_second_window_ParamLimits

0x33cd,	// (0x000ad767) popup_call_audio_second_window

0x3423,	// (0x000ad7bd) popup_call_audio_wait_window_ParamLimits

0x3423,	// (0x000ad7bd) popup_call_audio_wait_window

0x3458,	// (0x000ad7f2) popup_number_entry_window_ParamLimits

0x3458,	// (0x000ad7f2) popup_number_entry_window

0x9532,	// (0x000b38cc) bg_popup_call_pane_cp05_ParamLimits

0x9532,	// (0x000b38cc) bg_popup_call_pane_cp05

0x9552,	// (0x000b38ec) popup_number_entry_window_t1

0x9565,	// (0x000b38ff) popup_number_entry_window_t2

0x9577,	// (0x000b3911) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x000b9449) popup_number_entry_window_t

0x9589,	// (0x000b3923) text_title_cp2

0x959c,	// (0x000b3936) bg_popup_call_pane_cp_ParamLimits

0x959c,	// (0x000b3936) bg_popup_call_pane_cp

0x95aa,	// (0x000b3944) call_thumbnail_pane

0x95b2,	// (0x000b394c) popup_call_audio_in_window_g1_ParamLimits

0x95b2,	// (0x000b394c) popup_call_audio_in_window_g1

0x95be,	// (0x000b3958) popup_call_audio_in_window_g2_ParamLimits

0x95be,	// (0x000b3958) popup_call_audio_in_window_g2

0x95ca,	// (0x000b3964) popup_call_audio_in_window_g3_ParamLimits

0x95ca,	// (0x000b3964) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x000b9452) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x000b9452) popup_call_audio_in_window_g

0x95d6,	// (0x000b3970) popup_call_audio_in_window_t1_ParamLimits

0x95d6,	// (0x000b3970) popup_call_audio_in_window_t1

0x95f2,	// (0x000b398c) popup_call_audio_in_window_t2_ParamLimits

0x95f2,	// (0x000b398c) popup_call_audio_in_window_t2

0x960e,	// (0x000b39a8) popup_call_audio_in_window_t3_ParamLimits

0x960e,	// (0x000b39a8) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x000b9459) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x000b9459) popup_call_audio_in_window_t

0x959c,	// (0x000b3936) bg_popup_call_pane_cp01_ParamLimits

0x959c,	// (0x000b3936) bg_popup_call_pane_cp01

0x95aa,	// (0x000b3944) call_thumbnail_pane_cp02

0x9621,	// (0x000b39bb) call_type_pane_cp022

0x9629,	// (0x000b39c3) popup_call_audio_out_window_g1_ParamLimits

0x9629,	// (0x000b39c3) popup_call_audio_out_window_g1

0x963b,	// (0x000b39d5) popup_call_audio_out_window_g2_ParamLimits

0x963b,	// (0x000b39d5) popup_call_audio_out_window_g2

0x9647,	// (0x000b39e1) popup_call_audio_out_window_g3_ParamLimits

0x9647,	// (0x000b39e1) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x000b9460) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x000b9460) popup_call_audio_out_window_g

0x9659,	// (0x000b39f3) popup_call_audio_out_window_t1_ParamLimits

0x9659,	// (0x000b39f3) popup_call_audio_out_window_t1

0x9671,	// (0x000b3a0b) popup_call_audio_out_window_t2_ParamLimits

0x9671,	// (0x000b3a0b) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x000b9467) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x000b9467) popup_call_audio_out_window_t

0x9686,	// (0x000b3a20) bg_popup_call_pane_ParamLimits

0x9686,	// (0x000b3a20) bg_popup_call_pane

0x03ab,	// (0x000aa745) call_thumbnail_pane_cp_ParamLimits

0x03ab,	// (0x000aa745) call_thumbnail_pane_cp

0x970a,	// (0x000b3aa4) call_type_pane_cp01_ParamLimits

0x970a,	// (0x000b3aa4) call_type_pane_cp01

0x974e,	// (0x000b3ae8) popup_call_audio_first_window_g1_ParamLimits

0x974e,	// (0x000b3ae8) popup_call_audio_first_window_g1

0x979a,	// (0x000b3b34) popup_call_audio_first_window_g2_ParamLimits

0x979a,	// (0x000b3b34) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x000b946c) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x000b946c) popup_call_audio_first_window_g

0x97de,	// (0x000b3b78) popup_call_audio_first_window_t1_ParamLimits

0x97de,	// (0x000b3b78) popup_call_audio_first_window_t1

0x988a,	// (0x000b3c24) popup_call_audio_first_window_t4_ParamLimits

0x988a,	// (0x000b3c24) popup_call_audio_first_window_t4

0xa0b3,	// (0x000b444d) popup_call_audio_first_window_t5_ParamLimits

0xa0b3,	// (0x000b444d) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x000b9471) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x000b9471) popup_call_audio_first_window_t

0xa0e2,	// (0x000b447c) bg_popup_call_pane_cp02

0xa0ec,	// (0x000b4486) call_type_pane_cp023

0xa0f4,	// (0x000b448e) popup_call_audio_wait_window_g1

0xa0fc,	// (0x000b4496) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x000b9478) popup_call_audio_wait_window_g

0xa104,	// (0x000b449e) popup_call_audio_wait_window_t3

0xa112,	// (0x000b44ac) bg_popup_call_pane_cp03_ParamLimits

0xa112,	// (0x000b44ac) bg_popup_call_pane_cp03

0xa172,	// (0x000b450c) call_thumbnail_pane_cp011_ParamLimits

0xa172,	// (0x000b450c) call_thumbnail_pane_cp011

0xa17e,	// (0x000b4518) call_type_pane_cp034_ParamLimits

0xa17e,	// (0x000b4518) call_type_pane_cp034

0xa1ba,	// (0x000b4554) popup_call_audio_second_window_g1_ParamLimits

0xa1ba,	// (0x000b4554) popup_call_audio_second_window_g1

0xa1f6,	// (0x000b4590) popup_call_audio_second_window_g2_ParamLimits

0xa1f6,	// (0x000b4590) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x000b947d) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x000b947d) popup_call_audio_second_window_g

0xa232,	// (0x000b45cc) popup_call_audio_second_window_t1_ParamLimits

0xa232,	// (0x000b45cc) popup_call_audio_second_window_t1

0xa2b3,	// (0x000b464d) popup_call_audio_second_window_t2_ParamLimits

0xa2b3,	// (0x000b464d) popup_call_audio_second_window_t2

0xa2e9,	// (0x000b4683) popup_call_audio_second_window_t3_ParamLimits

0xa2e9,	// (0x000b4683) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x000b9482) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x000b9482) popup_call_audio_second_window_t

0xa0e2,	// (0x000b447c) bg_popup_call_pane_cp04

0xa31f,	// (0x000b46b9) list_conf_pane

0xa327,	// (0x000b46c1) popup_call_audio_conf_window_t1

0xa335,	// (0x000b46cf) call_thumbnail_pane_g1

0xa33d,	// (0x000b46d7) bg_pinb_pane_ParamLimits

0xa33d,	// (0x000b46d7) bg_pinb_pane

0xa34b,	// (0x000b46e5) find_pinb_pane

0xa354,	// (0x000b46ee) listscroll_pinb_pane_ParamLimits

0xa354,	// (0x000b46ee) listscroll_pinb_pane

0xa363,	// (0x000b46fd) pinb_bg_pane_g1

0x03cf,	// (0x000aa769) pinb_bg_pane_g2

0x03db,	// (0x000aa775) pinb_bg_pane_g3

0x03e7,	// (0x000aa781) pinb_bg_pane_g4

0x03f3,	// (0x000aa78d) pinb_bg_pane_g5

0x03ff,	// (0x000aa799) pinb_bg_pane_g6

0x040a,	// (0x000aa7a4) pinb_bg_pane_g7

0x0415,	// (0x000aa7af) pinb_bg_pane_g8

0x0420,	// (0x000aa7ba) pinb_bg_pane_g9

0x042a,	// (0x000aa7c4) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x000b9489) pinb_bg_pane_g

0x0447,	// (0x000aa7e1) grid_pinb_pane

0x0450,	// (0x000aa7ea) list_pinb_pane

0x0459,	// (0x000aa7f3) scroll_pane_cp01_ParamLimits

0x0459,	// (0x000aa7f3) scroll_pane_cp01

0xa36d,	// (0x000b4707) find_pinb_pane_g1_ParamLimits

0xa36d,	// (0x000b4707) find_pinb_pane_g1

0xa385,	// (0x000b471f) find_pinb_pane_t1

0xa397,	// (0x000b4731) find_pinb_pane_t2

0x0001,

0xf109,	// (0x000b94a3) find_pinb_pane_t

0xa3ac,	// (0x000b4746) input_focus_pane_cp01_ParamLimits

0xa3ac,	// (0x000b4746) input_focus_pane_cp01

0x046b,	// (0x000aa805) cell_pinb_pane_ParamLimits

0x046b,	// (0x000aa805) cell_pinb_pane

0x0494,	// (0x000aa82e) cell_pinb_pane_g1_ParamLimits

0x0494,	// (0x000aa82e) cell_pinb_pane_g1

0x04a4,	// (0x000aa83e) cell_pinb_pane_g2_ParamLimits

0x04a4,	// (0x000aa83e) cell_pinb_pane_g2

0xa3b8,	// (0x000b4752) cell_pinb_pane_g3_ParamLimits

0xa3b8,	// (0x000b4752) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x000b94a8) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x000b94a8) cell_pinb_pane_g

0xa0e2,	// (0x000b447c) grid_highlight_pane_cp01

0x04b0,	// (0x000aa84a) list_pinb_item_pane_ParamLimits

0x04b0,	// (0x000aa84a) list_pinb_item_pane

0xa0e2,	// (0x000b447c) list_highlight_pane_cp02

0x04c2,	// (0x000aa85c) list_pinb_item_pane_g1_ParamLimits

0x04c2,	// (0x000aa85c) list_pinb_item_pane_g1

0x04cf,	// (0x000aa869) list_pinb_item_pane_g2_ParamLimits

0x04cf,	// (0x000aa869) list_pinb_item_pane_g2

0x04db,	// (0x000aa875) list_pinb_item_pane_g3_ParamLimits

0x04db,	// (0x000aa875) list_pinb_item_pane_g3

0x04ec,	// (0x000aa886) list_pinb_item_pane_g4_ParamLimits

0x04ec,	// (0x000aa886) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x000b94af) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x000b94af) list_pinb_item_pane_g

0x04f8,	// (0x000aa892) list_pinb_item_pane_t1_ParamLimits

0x04f8,	// (0x000aa892) list_pinb_item_pane_t1

0x052d,	// (0x000aa8c7) calc_display_pane

0x0552,	// (0x000aa8ec) calc_paper_pane

0x0575,	// (0x000aa90f) grid_calc_pane

0xa0e2,	// (0x000b447c) bg_list_pane_cp01

0x05a3,	// (0x000aa93d) clock_g1

0x05ab,	// (0x000aa945) clock_g2

0x0001,

0xf11e,	// (0x000b94b8) clock_g

0x05b3,	// (0x000aa94d) clock_t1_ParamLimits

0x05b3,	// (0x000aa94d) clock_t1

0x05c8,	// (0x000aa962) clock_t2_ParamLimits

0x05c8,	// (0x000aa962) clock_t2

0x05da,	// (0x000aa974) clock_t3_ParamLimits

0x05da,	// (0x000aa974) clock_t3

0x05ec,	// (0x000aa986) clock_t4_ParamLimits

0x05ec,	// (0x000aa986) clock_t4

0x05fe,	// (0x000aa998) clock_t5_ParamLimits

0x05fe,	// (0x000aa998) clock_t5

0x0613,	// (0x000aa9ad) clock_t6_ParamLimits

0x0613,	// (0x000aa9ad) clock_t6

0x0625,	// (0x000aa9bf) clock_t7_ParamLimits

0x0625,	// (0x000aa9bf) clock_t7

0x0637,	// (0x000aa9d1) clock_t8_ParamLimits

0x0637,	// (0x000aa9d1) clock_t8

0x064b,	// (0x000aa9e5) clock_t9_ParamLimits

0x064b,	// (0x000aa9e5) clock_t9

0x0008,

0xf123,	// (0x000b94bd) clock_t_ParamLimits

0xf123,	// (0x000b94bd) clock_t

0xa3c4,	// (0x000b475e) popup_clock_analogue_window_cp02

0xa3c4,	// (0x000b475e) popup_clock_digital_window_cp01

0xa3cc,	// (0x000b4766) listscroll_help_pane

0xa0e2,	// (0x000b447c) phob_pre_status_pane

0xa3d6,	// (0x000b4770) grid_qdial_pane

0xa33d,	// (0x000b46d7) listscroll_mce_pane

0xa33d,	// (0x000b46d7) bg_notes_pane

0xa3e0,	// (0x000b477a) list_notes_pane

0x065f,	// (0x000aa9f9) scroll_pane_cp06

0xa3ee,	// (0x000b4788) bg_calc_paper_pane

0x991e,	// (0x000b3cb8) list_calc_pane

0xa402,	// (0x000b479c) bg_calc_display_pane

0x0673,	// (0x000aaa0d) calc_display_pane_t1

0x0688,	// (0x000aaa22) calc_display_pane_t2

0x9938,	// (0x000b3cd2) calc_display_pane_t3

0x0002,

0xf136,	// (0x000b94d0) calc_display_pane_t

0x069d,	// (0x000aaa37) cell_calc_pane_ParamLimits

0x069d,	// (0x000aaa37) cell_calc_pane

0xa40e,	// (0x000b47a8) bg_calc_paper_pane_g1

0xa41a,	// (0x000b47b4) bg_calc_paper_pane_g2

0xa426,	// (0x000b47c0) bg_calc_paper_pane_g3

0xa432,	// (0x000b47cc) bg_calc_paper_pane_g4

0xa43e,	// (0x000b47d8) bg_calc_paper_pane_g5

0x06d2,	// (0x000aaa6c) bg_calc_paper_pane_g6

0x06e1,	// (0x000aaa7b) bg_calc_paper_pane_g7

0x06f0,	// (0x000aaa8a) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x000b94d7) bg_calc_paper_pane_g

0x0703,	// (0x000aaa9d) calc_bg_paper_pane_g9

0x0716,	// (0x000aaab0) list_calc_item_pane_ParamLimits

0x0716,	// (0x000aaab0) list_calc_item_pane

0xa44a,	// (0x000b47e4) list_calc_item_pane_g1

0x994a,	// (0x000b3ce4) list_calc_item_pane_t1_ParamLimits

0x994a,	// (0x000b3ce4) list_calc_item_pane_t1

0x072e,	// (0x000aaac8) list_calc_item_pane_t2_ParamLimits

0x072e,	// (0x000aaac8) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x000b94e8) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x000b94e8) list_calc_item_pane_t

0xa457,	// (0x000b47f1) cell_calc_pane_g1

0xa461,	// (0x000b47fb) grid_highlight_pane_cp02

0x0760,	// (0x000aaafa) bg_calc_display_pane_g1

0x0769,	// (0x000aab03) bg_calc_display_pane_g2

0xa483,	// (0x000b481d) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x000b94f2) bg_calc_display_pane_g

0x0773,	// (0x000aab0d) cell_qdial_pane_ParamLimits

0x0773,	// (0x000aab0d) cell_qdial_pane

0x0787,	// (0x000aab21) cell_qdial_pane_g1_ParamLimits

0x0787,	// (0x000aab21) cell_qdial_pane_g1

0x079d,	// (0x000aab37) cell_qdial_pane_g2_ParamLimits

0x079d,	// (0x000aab37) cell_qdial_pane_g2

0xa48c,	// (0x000b4826) cell_qdial_pane_g3_ParamLimits

0xa48c,	// (0x000b4826) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x000b94f9) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x000b94f9) cell_qdial_pane_g

0x07c4,	// (0x000aab5e) cell_qdial_pane_t1_ParamLimits

0x07c4,	// (0x000aab5e) cell_qdial_pane_t1

0x07dc,	// (0x000aab76) cell_qdial_pane_t2_ParamLimits

0x07dc,	// (0x000aab76) cell_qdial_pane_t2

0x07ef,	// (0x000aab89) cell_qdial_pane_t3_ParamLimits

0x07ef,	// (0x000aab89) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x000b9502) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x000b9502) cell_qdial_pane_t

0xa0e2,	// (0x000b447c) grid_highlight_pane_cp04

0xa498,	// (0x000b4832) thumbnail_qdial_pane_ParamLimits

0xa498,	// (0x000b4832) thumbnail_qdial_pane

0xa4f4,	// (0x000b488e) list_help_pane

0xa4fd,	// (0x000b4897) scroll_pane_cp02

0x0802,	// (0x000aab9c) help_list_pane_t1_ParamLimits

0x0802,	// (0x000aab9c) help_list_pane_t1

0x995c,	// (0x000b3cf6) bg_notes_pane_g2

0x9964,	// (0x000b3cfe) bg_notes_pane_g3

0x996c,	// (0x000b3d06) notes_bg_pane_g1

0x9974,	// (0x000b3d0e) notes_bg_pane_g4

0x997c,	// (0x000b3d16) notes_bg_pane_g5

0x9984,	// (0x000b3d1e) notes_bg_pane_g6

0x998c,	// (0x000b3d26) notes_bg_pane_g7

0x9994,	// (0x000b3d2e) notes_bg_pane_g8

0x999c,	// (0x000b3d36) notes_bg_pane_g9

0x0006,

0xf186,	// (0x000b9520) notes_bg_pane_g

0x081f,	// (0x000aabb9) list_notes_text_pane_ParamLimits

0x081f,	// (0x000aabb9) list_notes_text_pane

0xa506,	// (0x000b48a0) list_notes_text_pane_g1

0x0834,	// (0x000aabce) list_notes_text_pane_t1

0x0842,	// (0x000aabdc) listscroll_cale_week_pane

0x086e,	// (0x000aac08) bg_cale_heading_pane

0xa529,	// (0x000b48c3) bg_cale_pane_cp01

0x0886,	// (0x000aac20) cale_week_corner_pane

0x08a5,	// (0x000aac3f) cale_week_day_heading_pane

0x08c2,	// (0x000aac5c) cale_week_scroll_pane_g1

0x08d5,	// (0x000aac6f) cale_week_scroll_pane_g2

0x08ed,	// (0x000aac87) cale_week_scroll_pane_g3

0x0905,	// (0x000aac9f) cale_week_scroll_pane_g4

0x091d,	// (0x000aacb7) cale_week_scroll_pane_g5

0x093d,	// (0x000aacd7) cale_week_scroll_pane_g6

0x095d,	// (0x000aacf7) cale_week_scroll_pane_g7

0x097d,	// (0x000aad17) cale_week_scroll_pane_g8

0x09a1,	// (0x000aad3b) cale_week_scroll_pane_g9

0x09b9,	// (0x000aad53) cale_week_scroll_pane_g10

0x09d1,	// (0x000aad6b) cale_week_scroll_pane_g11

0x09e9,	// (0x000aad83) cale_week_scroll_pane_g12

0x0a01,	// (0x000aad9b) cale_week_scroll_pane_g13

0x0a01,	// (0x000aad9b) cale_week_scroll_pane_g14

0x0a01,	// (0x000aad9b) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x000b952f) cale_week_scroll_pane_g

0x0a3d,	// (0x000aadd7) cale_week_time_pane

0x0a61,	// (0x000aadfb) grid_cale_week_pane

0xa558,	// (0x000b48f2) scroll_pane_cp08

0x0a87,	// (0x000aae21) cell_cale_week_pane_ParamLimits

0x0a87,	// (0x000aae21) cell_cale_week_pane

0x0b15,	// (0x000aaeaf) cale_week_day_heading_pane_t1

0x0b3f,	// (0x000aaed9) cale_week_day_heading_pane_t2

0x0b6e,	// (0x000aaf08) cale_week_day_heading_pane_t3

0x0b9d,	// (0x000aaf37) cale_week_day_heading_pane_t4

0x0bcc,	// (0x000aaf66) cale_week_day_heading_pane_t5

0x0c03,	// (0x000aaf9d) cale_week_day_heading_pane_t6

0x0c3a,	// (0x000aafd4) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x000b9550) cale_week_day_heading_pane_t

0xa575,	// (0x000b490f) bg_cale_side_pane

0x0c64,	// (0x000aaffe) cale_week_time_pane_t1

0x0c7e,	// (0x000ab018) cale_week_time_pane_t2

0x0c98,	// (0x000ab032) cale_week_time_pane_t3

0x0cb2,	// (0x000ab04c) cale_week_time_pane_t4

0x0ccc,	// (0x000ab066) cale_week_time_pane_t5

0x0ce6,	// (0x000ab080) cale_week_time_pane_t6

0x0d00,	// (0x000ab09a) cale_week_time_pane_t7

0x0d1a,	// (0x000ab0b4) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x000b955f) cale_week_time_pane_t

0x0d34,	// (0x000ab0ce) cell_cale_week_pane_g2

0x0d53,	// (0x000ab0ed) cell_cale_week_pane_g3_ParamLimits

0x0d53,	// (0x000ab0ed) cell_cale_week_pane_g3

0xa583,	// (0x000b491d) grid_highlight_pane_cp07

0xa58b,	// (0x000b4925) listscroll_gms_pane

0xa595,	// (0x000b492f) grid_gms_pane

0xa59e,	// (0x000b4938) listscroll_gms_pane_g1

0xa5a6,	// (0x000b4940) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x000b9570) listscroll_gms_pane_g

0x0d6b,	// (0x000ab105) scroll_pane_cp010

0x0d76,	// (0x000ab110) cell_gms_pane_ParamLimits

0x0d76,	// (0x000ab110) cell_gms_pane

0x0d89,	// (0x000ab123) cell_gms_pane_g1

0xa5ae,	// (0x000b4948) cell_gms_pane_g2

0xa5b6,	// (0x000b4950) cell_gms_pane_g3

0xa5bf,	// (0x000b4959) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x000b9575) cell_gms_pane_g

0xa5c8,	// (0x000b4962) grid_highlight_pane_cp09

0x3277,	// (0x000ad611) phob_pre_status_pane_g1

0x327f,	// (0x000ad619) phob_pre_status_pane_g2

0x3287,	// (0x000ad621) phob_pre_status_pane_g3

0x328f,	// (0x000ad629) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x000b9960) phob_pre_status_pane_g

0x329f,	// (0x000ad639) phob_pre_status_pane_t1

0x32ad,	// (0x000ad647) phob_pre_status_pane_t2

0x32bd,	// (0x000ad657) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x000b996b) phob_pre_status_pane_t

0xa5d0,	// (0x000b496a) bg_list_pane_cp05

0x0d99,	// (0x000ab133) grid_vorec_pane

0x0da1,	// (0x000ab13b) vorec_t1

0x0daf,	// (0x000ab149) vorec_t2

0x0dbd,	// (0x000ab157) vorec_t3

0x0dcb,	// (0x000ab165) vorec_t4

0x9460,	// (0x000b37fa) vorec_t5

0x946e,	// (0x000b3808) vorec_t6

0x0004,

0xf1e4,	// (0x000b957e) vorec_t

0x947c,	// (0x000b3816) wait_bar_pane_cp01

0x0de7,	// (0x000ab181) cell_vorec_pane_ParamLimits

0x0de7,	// (0x000ab181) cell_vorec_pane

0x99a4,	// (0x000b3d3e) cell_vorec_pane_g1

0xa0e2,	// (0x000b447c) grid_highlight_pane_cp05

0x0e0f,	// (0x000ab1a9) cams_zoom_pane

0x0e1e,	// (0x000ab1b8) image_vga_pane

0x0e38,	// (0x000ab1d2) main_camera_pane_g1

0x0e4a,	// (0x000ab1e4) main_camera_pane_g2

0x0e5a,	// (0x000ab1f4) main_camera_pane_g3

0x0e6a,	// (0x000ab204) main_camera_pane_g4

0x0e7a,	// (0x000ab214) main_camera_pane_g5

0x0e8a,	// (0x000ab224) main_camera_pane_g6

0x0e9c,	// (0x000ab236) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x000b9589) main_camera_pane_g

0x0eac,	// (0x000ab246) main_camera_pane_t1

0x0ec2,	// (0x000ab25c) main_camera_pane_t2

0x0001,

0xf200,	// (0x000b959a) main_camera_pane_t

0x0efc,	// (0x000ab296) cams_zoom_pane_cp_ParamLimits

0x0efc,	// (0x000ab296) cams_zoom_pane_cp

0x0f24,	// (0x000ab2be) image_cif_pane_ParamLimits

0x0f24,	// (0x000ab2be) image_cif_pane

0x0f5a,	// (0x000ab2f4) image_subqcif_pane

0x0f62,	// (0x000ab2fc) main_video_pane_g1_ParamLimits

0x0f62,	// (0x000ab2fc) main_video_pane_g1

0x0f86,	// (0x000ab320) main_video_pane_g2_ParamLimits

0x0f86,	// (0x000ab320) main_video_pane_g2

0x0fba,	// (0x000ab354) main_video_pane_g3_ParamLimits

0x0fba,	// (0x000ab354) main_video_pane_g3

0x0fe8,	// (0x000ab382) main_video_pane_g4_ParamLimits

0x0fe8,	// (0x000ab382) main_video_pane_g4

0x1016,	// (0x000ab3b0) main_video_pane_g5_ParamLimits

0x1016,	// (0x000ab3b0) main_video_pane_g5

0xa5e4,	// (0x000b497e) main_video_pane_g6_ParamLimits

0xa5e4,	// (0x000b497e) main_video_pane_g6

0x0006,

0xf205,	// (0x000b959f) main_video_pane_g_ParamLimits

0xf205,	// (0x000b959f) main_video_pane_g

0x103f,	// (0x000ab3d9) main_video_pane_t1_ParamLimits

0x103f,	// (0x000ab3d9) main_video_pane_t1

0xa5fe,	// (0x000b4998) cams_zoom_pane_g1

0xa607,	// (0x000b49a1) cams_zoom_pane_g2

0xa610,	// (0x000b49aa) cams_zoom_pane_g3

0xa619,	// (0x000b49b3) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x000b95ae) cams_zoom_pane_g

0x109c,	// (0x000ab436) grid_cams_pane

0x10b6,	// (0x000ab450) linegrid_cams_pane

0x10ca,	// (0x000ab464) cell_cams_pane_ParamLimits

0x10ca,	// (0x000ab464) cell_cams_pane

0xa622,	// (0x000b49bc) cams_burst_image_pane

0xa62a,	// (0x000b49c4) cell_cams_pane_g1

0xa0e2,	// (0x000b447c) grid_highlight_pane_cp03

0xa457,	// (0x000b47f1) mp_bg_pane_g1

0xa0e2,	// (0x000b447c) bg_list_pane_cp03

0xc822,	// (0x000b6bbc) bg_mp_pane

0xc82a,	// (0x000b6bc4) grid_mp_pane

0xc832,	// (0x000b6bcc) media_player_g1

0xc83a,	// (0x000b6bd4) media_player_t1

0xc848,	// (0x000b6be2) media_player_t2

0xc856,	// (0x000b6bf0) media_player_t3

0xc864,	// (0x000b6bfe) media_player_t4

0xc872,	// (0x000b6c0c) media_player_t5

0xc880,	// (0x000b6c1a) media_player_t6

0xc88e,	// (0x000b6c28) media_player_t7

0x0006,

0xf5b0,	// (0x000b994a) media_player_t

0xc89c,	// (0x000b6c36) wait_bar_pane_cp02

0xf595,	// (0x000b992f) main_usb_pane_t

0x326e,	// (0x000ad608) cell_mp_pane

0xa457,	// (0x000b47f1) cell_mp_pane_g1

0xa0e2,	// (0x000b447c) grid_highlight_pane_cp06

0xa632,	// (0x000b49cc) grid_skin_colour_pane

0xa63a,	// (0x000b49d4) list_highlight_pane_cp03

0x11e3,	// (0x000ab57d) skin_g1

0xa642,	// (0x000b49dc) skin_t1

0xa651,	// (0x000b49eb) skin_t2

0x0001,

0xf249,	// (0x000b95e3) skin_t

0x11eb,	// (0x000ab585) cell_skin_colour_pane_ParamLimits

0x11eb,	// (0x000ab585) cell_skin_colour_pane

0xa65f,	// (0x000b49f9) cell_skin_colour_pane_g1

0x1264,	// (0x000ab5fe) call_video_g1_ParamLimits

0x1264,	// (0x000ab5fe) call_video_g1

0x1280,	// (0x000ab61a) call_video_g2_ParamLimits

0x1280,	// (0x000ab61a) call_video_g2

0x0001,

0xf24e,	// (0x000b95e8) call_video_g_ParamLimits

0xf24e,	// (0x000b95e8) call_video_g

0x12d2,	// (0x000ab66c) call_video_uplink_pane_cp1_ParamLimits

0x12d2,	// (0x000ab66c) call_video_uplink_pane_cp1

0xa671,	// (0x000b4a0b) call_video_uplink_pane_cp2

0x1371,	// (0x000ab70b) video_down_crop_pane_ParamLimits

0x1371,	// (0x000ab70b) video_down_crop_pane

0x1468,	// (0x000ab802) video_down_pane_ParamLimits

0x1468,	// (0x000ab802) video_down_pane

0xa679,	// (0x000b4a13) video_down_subqcif_pane_ParamLimits

0xa679,	// (0x000b4a13) video_down_subqcif_pane

0xa691,	// (0x000b4a2b) video_down_subqcif_pane_cp_ParamLimits

0xa691,	// (0x000b4a2b) video_down_subqcif_pane_cp

0xa6b7,	// (0x000b4a51) im_reading_pane_ParamLimits

0xa6b7,	// (0x000b4a51) im_reading_pane

0x1578,	// (0x000ab912) im_writing_pane_ParamLimits

0x1578,	// (0x000ab912) im_writing_pane

0x158e,	// (0x000ab928) im_reading_pane_t1

0xa6d1,	// (0x000b4a6b) list_im_pane

0xa6e2,	// (0x000b4a7c) scroll_pane_cp07

0x15c7,	// (0x000ab961) im_writing_pane_t1_ParamLimits

0x15c7,	// (0x000ab961) im_writing_pane_t1

0xa6fb,	// (0x000b4a95) im_writing_pane_t2_ParamLimits

0xa6fb,	// (0x000b4a95) im_writing_pane_t2

0x0001,

0xf258,	// (0x000b95f2) im_writing_pane_t_ParamLimits

0xf258,	// (0x000b95f2) im_writing_pane_t

0xa0e2,	// (0x000b447c) input_focus_pane_cp04

0xa0e2,	// (0x000b447c) input_focus_pane_cp05

0x15dc,	// (0x000ab976) list_im_single_pane_ParamLimits

0x15dc,	// (0x000ab976) list_im_single_pane

0x15f0,	// (0x000ab98a) list_single_im_pane_t1

0x322e,	// (0x000ad5c8) blid_accuracy_pane

0x3236,	// (0x000ad5d0) blid_compass_pane

0x3240,	// (0x000ad5da) main_location_t1

0x3250,	// (0x000ad5ea) main_location_t2

0x3260,	// (0x000ad5fa) main_location_t3

0x0002,

0xf5bf,	// (0x000b9959) main_location_t

0xa0e2,	// (0x000b447c) aid_levels_location

0xa457,	// (0x000b47f1) blid_accuracy_pane_g1

0xa457,	// (0x000b47f1) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x000b9654) blid_accuracy_pane_g

0xa743,	// (0x000b4add) wml_content_pane

0xa781,	// (0x000b4b1b) wml_button_pane_ParamLimits

0xa781,	// (0x000b4b1b) wml_button_pane

0x15ff,	// (0x000ab999) wml_list_single_large_pane_ParamLimits

0x15ff,	// (0x000ab999) wml_list_single_large_pane

0x1614,	// (0x000ab9ae) wml_list_single_medium_pane_ParamLimits

0x1614,	// (0x000ab9ae) wml_list_single_medium_pane

0x162a,	// (0x000ab9c4) wml_list_single_small_pane_ParamLimits

0x162a,	// (0x000ab9c4) wml_list_single_small_pane

0xa795,	// (0x000b4b2f) wml_selection_box_pane_ParamLimits

0xa795,	// (0x000b4b2f) wml_selection_box_pane

0xac5f,	// (0x000b4ff9) wml_list_single_pane_t1

0xac6e,	// (0x000b5008) wml_list_single_medium_pane_t1

0xac7d,	// (0x000b5017) wml_list_single_large_pane_t1

0xac8c,	// (0x000b5026) input_focus_pane_cp02_ParamLimits

0xac8c,	// (0x000b5026) input_focus_pane_cp02

0xac9f,	// (0x000b5039) wml_selection_box_pane_g1

0xaca8,	// (0x000b5042) wml_selection_box_pane_t1_ParamLimits

0xaca8,	// (0x000b5042) wml_selection_box_pane_t1

0xa33d,	// (0x000b46d7) bg_wml_button_pane_ParamLimits

0xa33d,	// (0x000b46d7) bg_wml_button_pane

0xacc0,	// (0x000b505a) wml_button_pane_g1

0xacc8,	// (0x000b5062) wml_button_pane_t1

0xacc0,	// (0x000b505a) wml_button_bg_pane_g1

0xacd8,	// (0x000b5072) wml_button_bg_pane_g2

0xace0,	// (0x000b507a) wml_button_bg_pane_g3

0xace8,	// (0x000b5082) wml_button_bg_pane_g4

0xacf0,	// (0x000b508a) wml_button_bg_pane_g5

0xacf8,	// (0x000b5092) wml_button_bg_pane_g6

0xad00,	// (0x000b509a) wml_button_bg_pane_g7

0xad08,	// (0x000b50a2) wml_button_bg_pane_g8

0xad10,	// (0x000b50aa) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x000b95f7) wml_button_bg_pane_g

0x1642,	// (0x000ab9dc) bg_list_pane_cp02

0xad18,	// (0x000b50b2) mce_header_pane_ParamLimits

0xad18,	// (0x000b50b2) mce_header_pane

0xad2e,	// (0x000b50c8) mce_icon_pane

0xad2e,	// (0x000b50c8) mce_image_pane

0xad37,	// (0x000b50d1) mce_text_pane_ParamLimits

0xad37,	// (0x000b50d1) mce_text_pane

0x164a,	// (0x000ab9e4) scroll_pane_cp03

0xa779,	// (0x000b4b13) scroll_pane_cp04

0xad4a,	// (0x000b50e4) scroll_pane_cp05_ParamLimits

0xad4a,	// (0x000b50e4) scroll_pane_cp05

0x1654,	// (0x000ab9ee) mce_header_field_pane_ParamLimits

0x1654,	// (0x000ab9ee) mce_header_field_pane

0x166b,	// (0x000aba05) mce_header_field_pane_2_ParamLimits

0x166b,	// (0x000aba05) mce_header_field_pane_2

0x1681,	// (0x000aba1b) mce_header_field_pane_3

0x1689,	// (0x000aba23) list_single_mce_message_pane_ParamLimits

0x1689,	// (0x000aba23) list_single_mce_message_pane

0x169e,	// (0x000aba38) list_single_mce_smart_pane_ParamLimits

0x169e,	// (0x000aba38) list_single_mce_smart_pane

0xad56,	// (0x000b50f0) input_focus_pane_cp03

0xad5f,	// (0x000b50f9) list_header_data_pane

0x16be,	// (0x000aba58) mce_header_field_pane_t1

0x16ce,	// (0x000aba68) list_single_mce_header_pane_ParamLimits

0x16ce,	// (0x000aba68) list_single_mce_header_pane

0xad67,	// (0x000b5101) list_single_mce_header_pane_t1

0xad76,	// (0x000b5110) list_single_mce_message_pane_g1

0xad7e,	// (0x000b5118) list_single_mce_message_pane_t1

0x1708,	// (0x000abaa2) bg_cale_heading_pane_cp01_ParamLimits

0x1708,	// (0x000abaa2) bg_cale_heading_pane_cp01

0xad8c,	// (0x000b5126) bg_cale_pane_cp02_ParamLimits

0xad8c,	// (0x000b5126) bg_cale_pane_cp02

0x1742,	// (0x000abadc) cale_month_corner_pane

0x1761,	// (0x000abafb) cale_month_day_heading_pane_ParamLimits

0x1761,	// (0x000abafb) cale_month_day_heading_pane

0x17b3,	// (0x000abb4d) cale_month_pane_g1_ParamLimits

0x17b3,	// (0x000abb4d) cale_month_pane_g1

0x17e2,	// (0x000abb7c) cale_month_pane_g2_ParamLimits

0x17e2,	// (0x000abb7c) cale_month_pane_g2

0x1812,	// (0x000abbac) cale_month_pane_g3_ParamLimits

0x1812,	// (0x000abbac) cale_month_pane_g3

0x184e,	// (0x000abbe8) cale_month_pane_g4_ParamLimits

0x184e,	// (0x000abbe8) cale_month_pane_g4

0x188a,	// (0x000abc24) cale_month_pane_g5_ParamLimits

0x188a,	// (0x000abc24) cale_month_pane_g5

0x18d2,	// (0x000abc6c) cale_month_pane_g6_ParamLimits

0x18d2,	// (0x000abc6c) cale_month_pane_g6

0x191e,	// (0x000abcb8) cale_month_pane_g7_ParamLimits

0x191e,	// (0x000abcb8) cale_month_pane_g7

0x1972,	// (0x000abd0c) cale_month_pane_g8_ParamLimits

0x1972,	// (0x000abd0c) cale_month_pane_g8

0x19c6,	// (0x000abd60) cale_month_pane_g9_ParamLimits

0x19c6,	// (0x000abd60) cale_month_pane_g9

0x1a18,	// (0x000abdb2) cale_month_pane_g10_ParamLimits

0x1a18,	// (0x000abdb2) cale_month_pane_g10

0x1a6a,	// (0x000abe04) cale_month_pane_g11_ParamLimits

0x1a6a,	// (0x000abe04) cale_month_pane_g11

0x1abc,	// (0x000abe56) cale_month_pane_g12_ParamLimits

0x1abc,	// (0x000abe56) cale_month_pane_g12

0x1b0e,	// (0x000abea8) cale_month_pane_g13_ParamLimits

0x1b0e,	// (0x000abea8) cale_month_pane_g13

0x000c,

0xf270,	// (0x000b960a) cale_month_pane_g_ParamLimits

0xf270,	// (0x000b960a) cale_month_pane_g

0x1b60,	// (0x000abefa) cale_month_week_pane

0x1b84,	// (0x000abf1e) grid_cale_month_pane_ParamLimits

0x1b84,	// (0x000abf1e) grid_cale_month_pane

0x1bcd,	// (0x000abf67) cale_month_day_heading_pane_t1

0x1c53,	// (0x000abfed) cale_month_day_heading_pane_t2

0x1ccc,	// (0x000ac066) cale_month_day_heading_pane_t3

0x1d45,	// (0x000ac0df) cale_month_day_heading_pane_t4

0x1dc6,	// (0x000ac160) cale_month_day_heading_pane_t5

0x1e4f,	// (0x000ac1e9) cale_month_day_heading_pane_t6

0x1ed8,	// (0x000ac272) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x000b9625) cale_month_day_heading_pane_t

0xa575,	// (0x000b490f) bg_cale_side_pane_cp01

0x1f69,	// (0x000ac303) cale_month_week_pane_t1

0x1f82,	// (0x000ac31c) cale_month_week_pane_t2

0x1f9b,	// (0x000ac335) cale_month_week_pane_t3

0x1fb4,	// (0x000ac34e) cale_month_week_pane_t4

0x1fcd,	// (0x000ac367) cale_month_week_pane_t5

0x1fe6,	// (0x000ac380) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x000b9634) cale_month_week_pane_t

0x1fff,	// (0x000ac399) cell_cale_month_pane_ParamLimits

0x1fff,	// (0x000ac399) cell_cale_month_pane

0x99ae,	// (0x000b3d48) cell_cale_month_pane_g1

0x2157,	// (0x000ac4f1) cell_cale_month_pane_t1_ParamLimits

0x2157,	// (0x000ac4f1) cell_cale_month_pane_t1

0xa583,	// (0x000b491d) grid_highlight_pane_cp08

0xa457,	// (0x000b47f1) main_smil_g1

0x2183,	// (0x000ac51d) smil_status_pane

0xadcb,	// (0x000b5165) smil_text_pane

0xc742,	// (0x000b6adc) bg_popup_call3_rect_pane_g8

0xc74a,	// (0x000b6ae4) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x000b98ed) bg_popup_call3_rect_pane_g

0xc991,	// (0x000b6d2b) smil_status_volume_pane_g1

0xadd5,	// (0x000b516f) smil_status_pane_t1

0x9af8,	// (0x000b3e92) volume_smil_pane

0xadec,	// (0x000b5186) list_smil_text_pane

0x2196,	// (0x000ac530) scroll_pane_cp011

0x21a1,	// (0x000ac53b) smil_text_list_pane_t1_ParamLimits

0x21a1,	// (0x000ac53b) smil_text_list_pane_t1

0x99ba,	// (0x000b3d54) aid_volume_smil_ParamLimits

0x99ba,	// (0x000b3d54) aid_volume_smil

0xa457,	// (0x000b47f1) smil_volume_pane_g1

0xa457,	// (0x000b47f1) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x000b9654) smil_volume_pane_g

0x0842,	// (0x000aabdc) listscroll_cale_day_pane

0xadf6,	// (0x000b5190) bg_cale_pane

0xae0e,	// (0x000b51a8) list_cale_pane

0xae31,	// (0x000b51cb) scroll_pane_cp09

0xae42,	// (0x000b51dc) cale_bg_pane_g1

0xae4a,	// (0x000b51e4) cale_bg_pane_g2

0xae52,	// (0x000b51ec) cale_bg_pane_g3

0xae5a,	// (0x000b51f4) cale_bg_pane_g4

0xae62,	// (0x000b51fc) cale_bg_pane_g5

0xae6a,	// (0x000b5204) cale_bg_pane_g6

0xae72,	// (0x000b520c) cale_bg_pane_g7

0xae7a,	// (0x000b5214) cale_bg_pane_g8

0xae82,	// (0x000b521c) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x000b9659) cale_bg_pane_g

0x21e5,	// (0x000ac57f) list_cale_time_pane_ParamLimits

0x21e5,	// (0x000ac57f) list_cale_time_pane

0xae8a,	// (0x000b5224) list_cale_time_pane_g1_ParamLimits

0xae8a,	// (0x000b5224) list_cale_time_pane_g1

0xae96,	// (0x000b5230) list_cale_time_pane_g2_ParamLimits

0xae96,	// (0x000b5230) list_cale_time_pane_g2

0x21fa,	// (0x000ac594) list_cale_time_pane_g3_ParamLimits

0x21fa,	// (0x000ac594) list_cale_time_pane_g3

0x2208,	// (0x000ac5a2) list_cale_time_pane_g4_ParamLimits

0x2208,	// (0x000ac5a2) list_cale_time_pane_g4

0x2216,	// (0x000ac5b0) list_cale_time_pane_g5_ParamLimits

0x2216,	// (0x000ac5b0) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x000b966c) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x000b966c) list_cale_time_pane_g

0xaeb0,	// (0x000b524a) list_cale_time_pane_t1_ParamLimits

0xaeb0,	// (0x000b524a) list_cale_time_pane_t1

0xaed8,	// (0x000b5272) list_cale_time_pane_t2_ParamLimits

0xaed8,	// (0x000b5272) list_cale_time_pane_t2

0x2577,	// (0x000ac911) aid_blid_cardinal_pane

0x25b5,	// (0x000ac94f) compass_pane_t4

0xaf00,	// (0x000b529a) list_cale_time_pane_t4_ParamLimits

0xaf00,	// (0x000b529a) list_cale_time_pane_t4

0x25c3,	// (0x000ac95d) compass_pane_t5

0x25d1,	// (0x000ac96b) compass_pane_t6

0x25df,	// (0x000ac979) compass_pane_t7

0xb3af,	// (0x000b5749) navi_pane_cc_t1

0xb58c,	// (0x000b5926) aid_phob_thumbnail_center_pane

0x2c46,	// (0x000acfe0) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x000b9679) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x000b9679) list_cale_time_pane_t

0x959c,	// (0x000b3936) bg_popup_window_pane_cp02_ParamLimits

0x959c,	// (0x000b3936) bg_popup_window_pane_cp02

0xaf28,	// (0x000b52c2) heading_pane_cp01_ParamLimits

0xaf28,	// (0x000b52c2) heading_pane_cp01

0xaf34,	// (0x000b52ce) loc_req_pane_ParamLimits

0xaf34,	// (0x000b52ce) loc_req_pane

0xaf44,	// (0x000b52de) loc_type_pane_ParamLimits

0xaf44,	// (0x000b52de) loc_type_pane

0xaf56,	// (0x000b52f0) loc_type_pane_t1_ParamLimits

0xaf56,	// (0x000b52f0) loc_type_pane_t1

0xaf68,	// (0x000b5302) loc_type_pane_t2_ParamLimits

0xaf68,	// (0x000b5302) loc_type_pane_t2

0xaf7a,	// (0x000b5314) loc_type_pane_t3_ParamLimits

0xaf7a,	// (0x000b5314) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x000b9680) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x000b9680) loc_type_pane_t

0xaf8c,	// (0x000b5326) list_loc_req_pane

0xaf96,	// (0x000b5330) scroll_pane_cp012

0x2224,	// (0x000ac5be) list_single_loc_request_popup_menu_pane_ParamLimits

0x2224,	// (0x000ac5be) list_single_loc_request_popup_menu_pane

0xafa1,	// (0x000b533b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafa1,	// (0x000b533b) list_single_loc_request_popup_menu_pane_g1

0xafad,	// (0x000b5347) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafad,	// (0x000b5347) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x000b9687) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x000b9687) list_single_loc_request_popup_menu_pane_g

0xafb9,	// (0x000b5353) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafb9,	// (0x000b5353) list_single_loc_request_popup_menu_pane_t1

0xa33d,	// (0x000b46d7) bg_popup_window_pane_cp03_ParamLimits

0xa33d,	// (0x000b46d7) bg_popup_window_pane_cp03

0xafcf,	// (0x000b5369) heading_loc_req_pane_ParamLimits

0xafcf,	// (0x000b5369) heading_loc_req_pane

0x2231,	// (0x000ac5cb) popup_dyc_status_message_window_g1_ParamLimits

0x2231,	// (0x000ac5cb) popup_dyc_status_message_window_g1

0x2245,	// (0x000ac5df) popup_dyc_status_message_window_t1_ParamLimits

0x2245,	// (0x000ac5df) popup_dyc_status_message_window_t1

0x225a,	// (0x000ac5f4) popup_dyc_status_message_window_t2_ParamLimits

0x225a,	// (0x000ac5f4) popup_dyc_status_message_window_t2

0x226f,	// (0x000ac609) popup_dyc_status_message_window_t3_ParamLimits

0x226f,	// (0x000ac609) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x000b968c) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x000b968c) popup_dyc_status_message_window_t

0xa0e2,	// (0x000b447c) bg_heading_pane_cp01

0xafdb,	// (0x000b5375) heading_loc_req_pane_g1

0xafe3,	// (0x000b537d) heading_loc_req_pane_g2

0xafeb,	// (0x000b5385) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x000b9693) heading_loc_req_pane_g

0xaff3,	// (0x000b538d) heading_loc_req_pane_t1

0xb002,	// (0x000b539c) bg_popup_sub_pane_cp01_ParamLimits

0xb002,	// (0x000b539c) bg_popup_sub_pane_cp01

0xb010,	// (0x000b53aa) popup_cale_events_window_g1_ParamLimits

0xb010,	// (0x000b53aa) popup_cale_events_window_g1

0xb030,	// (0x000b53ca) popup_cale_events_window_g2_ParamLimits

0xb030,	// (0x000b53ca) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x000b96c7) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x000b96c7) popup_cale_events_window_g

0xb050,	// (0x000b53ea) popup_cale_events_window_t1_ParamLimits

0xb050,	// (0x000b53ea) popup_cale_events_window_t1

0xb062,	// (0x000b53fc) popup_cale_events_window_t2_ParamLimits

0xb062,	// (0x000b53fc) popup_cale_events_window_t2

0xb0a0,	// (0x000b543a) popup_cale_events_window_t3_ParamLimits

0xb0a0,	// (0x000b543a) popup_cale_events_window_t3

0xb0da,	// (0x000b5474) popup_cale_events_window_t4_ParamLimits

0xb0da,	// (0x000b5474) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x000b96cc) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x000b96cc) popup_cale_events_window_t

0x2372,	// (0x000ac70c) call_type_pane

0x2382,	// (0x000ac71c) popup_call_status_window_g1

0x2396,	// (0x000ac730) popup_call_status_window_g2

0x23aa,	// (0x000ac744) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x000b96d5) popup_call_status_window_g

0xb110,	// (0x000b54aa) call_type_pane_g1

0xb119,	// (0x000b54b3) call_type_pane_g2

0x0001,

0xf342,	// (0x000b96dc) call_type_pane_g

0xa0e2,	// (0x000b447c) bg_popup_sub_pane_cp02

0xb122,	// (0x000b54bc) listscroll_popup_wml_pane

0xb12a,	// (0x000b54c4) list_wml_pane

0xb134,	// (0x000b54ce) scroll_pane_cp013

0xb13f,	// (0x000b54d9) list_single_graphic_popup_wml_pane_ParamLimits

0xb13f,	// (0x000b54d9) list_single_graphic_popup_wml_pane

0xa457,	// (0x000b47f1) list_single_graphic_popup_wml_pane_g1

0xb153,	// (0x000b54ed) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x000b96e1) list_single_graphic_popup_wml_pane_g

0xb15b,	// (0x000b54f5) list_single_graphic_popup_wml_pane_t1

0xb171,	// (0x000b550b) aid_call_pane

0xa335,	// (0x000b46cf) popup_clock_analogue_window_g1

0xa335,	// (0x000b46cf) popup_clock_analogue_window_g2

0x99dc,	// (0x000b3d76) popup_clock_analogue_window_g3

0x99dc,	// (0x000b3d76) popup_clock_analogue_window_g4

0xa457,	// (0x000b47f1) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x000b96e6) popup_clock_analogue_window_g

0x99e4,	// (0x000b3d7e) popup_clock_analogue_window_t1

0x99f2,	// (0x000b3d8c) clock_digital_number_pane_ParamLimits

0x99f2,	// (0x000b3d8c) clock_digital_number_pane

0x99fe,	// (0x000b3d98) clock_digital_number_pane_cp02_ParamLimits

0x99fe,	// (0x000b3d98) clock_digital_number_pane_cp02

0x9a0a,	// (0x000b3da4) clock_digital_number_pane_cp03_ParamLimits

0x9a0a,	// (0x000b3da4) clock_digital_number_pane_cp03

0x9a16,	// (0x000b3db0) clock_digital_number_pane_cp04_ParamLimits

0x9a16,	// (0x000b3db0) clock_digital_number_pane_cp04

0x9a26,	// (0x000b3dc0) clock_digital_separator_pane_ParamLimits

0x9a26,	// (0x000b3dc0) clock_digital_separator_pane

0x9a32,	// (0x000b3dcc) popup_clock_digital_window_t1

0xa457,	// (0x000b47f1) clock_digital_number_pane_g1

0xa457,	// (0x000b47f1) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x000b9654) clock_digital_number_pane_g

0xa457,	// (0x000b47f1) clock_digital_separator_pane_g1

0xa457,	// (0x000b47f1) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x000b9654) clock_digital_separator_pane_g

0xa0e2,	// (0x000b447c) bg_popup_window_pane_cp04

0xb179,	// (0x000b5513) heading_pane_cp03

0xb181,	// (0x000b551b) listscroll_popup_gms_pane

0xb189,	// (0x000b5523) grid_large_graphic_popup_pane

0xb193,	// (0x000b552d) listscroll_popup_gms_pane_g1

0xb19b,	// (0x000b5535) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x000b96f1) listscroll_popup_gms_pane_g

0xa779,	// (0x000b4b13) scroll_pane_cp014

0x23b9,	// (0x000ac753) cell_large_graphic_popup_pane_ParamLimits

0x23b9,	// (0x000ac753) cell_large_graphic_popup_pane

0x23d1,	// (0x000ac76b) cell_large_graphic_popup_pane_g1_ParamLimits

0x23d1,	// (0x000ac76b) cell_large_graphic_popup_pane_g1

0xb1a3,	// (0x000b553d) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1a3,	// (0x000b553d) cell_large_graphic_popup_pane_g2

0xb1af,	// (0x000b5549) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1af,	// (0x000b5549) cell_large_graphic_popup_pane_g3

0xb1bc,	// (0x000b5556) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1bc,	// (0x000b5556) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x000b96f6) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x000b96f6) cell_large_graphic_popup_pane_g

0xb1cc,	// (0x000b5566) grid_highlight_pane_cp010

0xa457,	// (0x000b47f1) bg_popup_call_pane_g1

0xb1d6,	// (0x000b5570) list_single_graphic_popup_conf_pane_ParamLimits

0xb1d6,	// (0x000b5570) list_single_graphic_popup_conf_pane

0xb1e9,	// (0x000b5583) list_highlight_pane_cp01

0xb1f2,	// (0x000b558c) list_single_graphic_popup_conf_pane_g1

0xb1fa,	// (0x000b5594) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x000b96ff) list_single_graphic_popup_conf_pane_g

0xb202,	// (0x000b559c) list_single_graphic_popup_conf_pane_t1

0xb210,	// (0x000b55aa) linegrid_cams_pane_g1

0x23dd,	// (0x000ac777) linegrid_cams_pane_g2

0xa5b6,	// (0x000b4950) linegrid_cams_pane_g3

0xb219,	// (0x000b55b3) linegrid_cams_pane_g4

0x23e6,	// (0x000ac780) linegrid_cams_pane_g5

0x23ef,	// (0x000ac789) linegrid_cams_pane_g6

0xa5bf,	// (0x000b4959) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x000b9704) linegrid_cams_pane_g

0xb222,	// (0x000b55bc) popup_clock_analogue_window

0xb222,	// (0x000b55bc) popup_clock_digital_window

0xa0e2,	// (0x000b447c) popup_phob_thumbnail_window

0xa457,	// (0x000b47f1) call_video_uplink_pane_g1

0xb22b,	// (0x000b55c5) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x000b9713) call_video_uplink_pane_g

0xb233,	// (0x000b55cd) video_uplink_pane

0xb23b,	// (0x000b55d5) mce_image_pane_g1

0x23fa,	// (0x000ac794) mce_image_pane_g2

0x2404,	// (0x000ac79e) mce_image_pane_g3

0x240c,	// (0x000ac7a6) mce_image_pane_g4

0x2414,	// (0x000ac7ae) mce_image_pane_g5

0x0004,

0xf37e,	// (0x000b9718) mce_image_pane_g

0xb245,	// (0x000b55df) control_top_pane_stacon_cp01_ParamLimits

0xb245,	// (0x000b55df) control_top_pane_stacon_cp01

0xb259,	// (0x000b55f3) uni_indicator_pane_stacon_cp01_ParamLimits

0xb259,	// (0x000b55f3) uni_indicator_pane_stacon_cp01

0xb26a,	// (0x000b5604) bg_popup_sub_pane_cp03

0xb274,	// (0x000b560e) chi_dic_find_pane

0x241c,	// (0x000ac7b6) listscroll_chi_dic_pane

0xb27c,	// (0x000b5616) main_pane_chidic_g1

0xb284,	// (0x000b561e) chi_dic_find_pane_t1

0xb292,	// (0x000b562c) find_chidic_pane

0xb29b,	// (0x000b5635) chi_dic_list_pane_ParamLimits

0xb29b,	// (0x000b5635) chi_dic_list_pane

0xb2ac,	// (0x000b5646) scroll_pane_cp020

0xb2b4,	// (0x000b564e) find_chidic_pane_t1

0xa0e2,	// (0x000b447c) input_focus_pane_cp06

0x2430,	// (0x000ac7ca) list_chi_dic_pane_ParamLimits

0x2430,	// (0x000ac7ca) list_chi_dic_pane

0x2442,	// (0x000ac7dc) list_chi_dic_pane_t1_ParamLimits

0x2442,	// (0x000ac7dc) list_chi_dic_pane_t1

0xa0e2,	// (0x000b447c) list_highlight_pane_cp020

0xb2c3,	// (0x000b565d) bg_cale_heading_pane_g1

0x2455,	// (0x000ac7ef) bg_cale_heading_pane_g2

0x245d,	// (0x000ac7f7) bg_cale_heading_pane_g3

0x2465,	// (0x000ac7ff) bg_cale_heading_pane_g4

0x246f,	// (0x000ac809) bg_cale_heading_pane_g5

0x2479,	// (0x000ac813) bg_cale_heading_pane_g6

0x2481,	// (0x000ac81b) bg_cale_heading_pane_g7

0x2489,	// (0x000ac823) bg_cale_heading_pane_g8

0x2493,	// (0x000ac82d) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x000b9723) bg_cale_heading_pane_g

0xb2c3,	// (0x000b565d) bg_cale_side_pane_g1

0x249d,	// (0x000ac837) bg_cale_side_pane_g2

0x24a5,	// (0x000ac83f) bg_cale_side_pane_g3

0x24ad,	// (0x000ac847) bg_cale_side_pane_g4

0x24b5,	// (0x000ac84f) bg_cale_side_pane_g5

0x24bd,	// (0x000ac857) bg_cale_side_pane_g6

0x24c5,	// (0x000ac85f) bg_cale_side_pane_g7

0x24cd,	// (0x000ac867) bg_cale_side_pane_g8

0x24d5,	// (0x000ac86f) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x000b9736) bg_cale_side_pane_g

0x24dd,	// (0x000ac877) popup_call_status_window_ParamLimits

0x24dd,	// (0x000ac877) popup_call_status_window

0xb2cb,	// (0x000b5665) stacon_top_pane

0xb2d3,	// (0x000b566d) status_pane_ParamLimits

0xb2d3,	// (0x000b566d) status_pane

0xb2e8,	// (0x000b5682) status_small_pane

0xb2f0,	// (0x000b568a) control_pane

0xa0e2,	// (0x000b447c) stacon_bottom_pane

0xb2f8,	// (0x000b5692) list_single_mce_smart_pane_t1_ParamLimits

0xb2f8,	// (0x000b5692) list_single_mce_smart_pane_t1

0xb30b,	// (0x000b56a5) list_single_mce_smart_pane_t2_ParamLimits

0xb30b,	// (0x000b56a5) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x000b9749) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x000b9749) list_single_mce_smart_pane_t

0x2526,	// (0x000ac8c0) compass_pane

0x252f,	// (0x000ac8c9) main_location2_pane_t1

0x2541,	// (0x000ac8db) main_location2_pane_t2

0x2553,	// (0x000ac8ed) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x000b974e) main_location2_pane_t

0xb32a,	// (0x000b56c4) compass_pane_g1_ParamLimits

0xb32a,	// (0x000b56c4) compass_pane_g1

0x2597,	// (0x000ac931) compass_pane_t1

0x25a6,	// (0x000ac940) compass_pane_t2

0x0005,

0xf3bd,	// (0x000b9757) compass_pane_t

0x25ed,	// (0x000ac987) text_secondary_cp61

0xb3a6,	// (0x000b5740) navi_pane_cams_g5

0xb422,	// (0x000b57bc) navi_pane_im_t1

0xb430,	// (0x000b57ca) navi_pane_mp_g1_ParamLimits

0xb430,	// (0x000b57ca) navi_pane_mp_g1

0xb444,	// (0x000b57de) navi_pane_mp_g2_ParamLimits

0xb444,	// (0x000b57de) navi_pane_mp_g2

0xb450,	// (0x000b57ea) navi_pane_mp_g3_ParamLimits

0xb450,	// (0x000b57ea) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x000b976b) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x000b976b) navi_pane_mp_g

0xb45c,	// (0x000b57f6) navi_pane_mp_t1

0xb46a,	// (0x000b5804) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x000b9772) navi_pane_mp_t

0xb4d5,	// (0x000b586f) navi_pane_vt_g1

0xb45c,	// (0x000b57f6) navi_pane_vt_t1

0xb4dd,	// (0x000b5877) navi_slider_pane

0xa5d0,	// (0x000b496a) zooming_pane

0xb4ed,	// (0x000b5887) navi_slider_pane_g1

0x9a4f,	// (0x000b3de9) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x000b9779) navi_slider_pane_g

0xb511,	// (0x000b58ab) aid_levels_zoom

0xb519,	// (0x000b58b3) zooming_pane_g1

0xb521,	// (0x000b58bb) zooming_pane_g2

0xb521,	// (0x000b58bb) zooming_pane_g3

0x0002,

0xf3ee,	// (0x000b9788) zooming_pane_g

0xb529,	// (0x000b58c3) level_10_zoom

0xb532,	// (0x000b58cc) level_11_zoom

0xb53b,	// (0x000b58d5) level_1_zoom

0xb544,	// (0x000b58de) level_2_zoom

0xb54d,	// (0x000b58e7) level_3_zoom

0xb556,	// (0x000b58f0) level_4_zoom

0xb55f,	// (0x000b58f9) level_5_zoom

0xb568,	// (0x000b5902) level_6_zoom

0xb571,	// (0x000b590b) level_7_zoom

0xb57a,	// (0x000b5914) level_8_zoom

0xb583,	// (0x000b591d) level_9_zoom

0xb594,	// (0x000b592e) popup_phob_thumbnail_window_g1

0xb59c,	// (0x000b5936) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x000b978f) popup_phob_thumbnail_window_g

0xc8a4,	// (0x000b6c3e) level_1_location

0xc8ac,	// (0x000b6c46) level_2_location

0xc8b4,	// (0x000b6c4e) level_3_location

0xc8bc,	// (0x000b6c56) level_4_location

0xa5d0,	// (0x000b496a) level_5_location

0x263e,	// (0x000ac9d8) mce_icon_pane_g1

0x2648,	// (0x000ac9e2) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x000b9794) mce_icon_pane_g

0x2650,	// (0x000ac9ea) main_mup_pane_g1_ParamLimits

0x2650,	// (0x000ac9ea) main_mup_pane_g1

0x2666,	// (0x000aca00) main_mup_pane_g2_ParamLimits

0x2666,	// (0x000aca00) main_mup_pane_g2

0x267e,	// (0x000aca18) main_mup_pane_g3_ParamLimits

0x267e,	// (0x000aca18) main_mup_pane_g3

0x2696,	// (0x000aca30) main_mup_pane_g4_ParamLimits

0x2696,	// (0x000aca30) main_mup_pane_g4

0x26ae,	// (0x000aca48) main_mup_pane_g5_ParamLimits

0x26ae,	// (0x000aca48) main_mup_pane_g5

0x26ca,	// (0x000aca64) main_mup_pane_g6_ParamLimits

0x26ca,	// (0x000aca64) main_mup_pane_g6

0x26e2,	// (0x000aca7c) main_mup_pane_g7_ParamLimits

0x26e2,	// (0x000aca7c) main_mup_pane_g7

0x26fa,	// (0x000aca94) main_mup_pane_g8_ParamLimits

0x26fa,	// (0x000aca94) main_mup_pane_g8

0x2714,	// (0x000acaae) main_mup_pane_g9_ParamLimits

0x2714,	// (0x000acaae) main_mup_pane_g9

0x272e,	// (0x000acac8) main_mup_pane_g10_ParamLimits

0x272e,	// (0x000acac8) main_mup_pane_g10

0x2748,	// (0x000acae2) main_mup_pane_g11_ParamLimits

0x2748,	// (0x000acae2) main_mup_pane_g11

0x275c,	// (0x000acaf6) main_mup_pane_g12_ParamLimits

0x275c,	// (0x000acaf6) main_mup_pane_g12

0x2772,	// (0x000acb0c) main_mup_pane_g13_ParamLimits

0x2772,	// (0x000acb0c) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x000b9799) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x000b9799) main_mup_pane_g

0x2786,	// (0x000acb20) main_mup_pane_t1_ParamLimits

0x2786,	// (0x000acb20) main_mup_pane_t1

0x27a0,	// (0x000acb3a) main_mup_pane_t2_ParamLimits

0x27a0,	// (0x000acb3a) main_mup_pane_t2

0x27b8,	// (0x000acb52) main_mup_pane_t3_ParamLimits

0x27b8,	// (0x000acb52) main_mup_pane_t3

0x27d0,	// (0x000acb6a) main_mup_pane_t4_ParamLimits

0x27d0,	// (0x000acb6a) main_mup_pane_t4

0x27ee,	// (0x000acb88) main_mup_pane_t5_ParamLimits

0x27ee,	// (0x000acb88) main_mup_pane_t5

0x2803,	// (0x000acb9d) main_mup_pane_t6_ParamLimits

0x2803,	// (0x000acb9d) main_mup_pane_t6

0x0005,

0xf41a,	// (0x000b97b4) main_mup_pane_t_ParamLimits

0xf41a,	// (0x000b97b4) main_mup_pane_t

0x2815,	// (0x000acbaf) mup_progress_pane_ParamLimits

0x2815,	// (0x000acbaf) mup_progress_pane

0x2821,	// (0x000acbbb) mup_visualizer_pane_ParamLimits

0x2821,	// (0x000acbbb) mup_visualizer_pane

0x2851,	// (0x000acbeb) mup_volume_pane_ParamLimits

0x2851,	// (0x000acbeb) mup_volume_pane

0xb5a4,	// (0x000b593e) mup_visualizer_pane_g1_ParamLimits

0xb5a4,	// (0x000b593e) mup_visualizer_pane_g1

0xb5a4,	// (0x000b593e) mup_visualizer_pane_g2_ParamLimits

0xb5a4,	// (0x000b593e) mup_visualizer_pane_g2

0xb32a,	// (0x000b56c4) mup_visualizer_pane_g3_ParamLimits

0xb32a,	// (0x000b56c4) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x000b97c1) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x000b97c1) mup_visualizer_pane_g

0xa457,	// (0x000b47f1) mup_volume_pane_g1

0xb5ba,	// (0x000b5954) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x000b97c8) mup_volume_pane_g

0xa457,	// (0x000b47f1) mup_progress_pane_g1

0xb5c3,	// (0x000b595d) mup_progress_pane_g2

0xb5cc,	// (0x000b5966) mup_progress_pane_g3

0x0002,

0xf433,	// (0x000b97cd) mup_progress_pane_g

0xa0e2,	// (0x000b447c) bg_popup_window_pane_cp05

0xb5d5,	// (0x000b596f) heading_pane_cp02_ParamLimits

0xb5d5,	// (0x000b596f) heading_pane_cp02

0xb5ef,	// (0x000b5989) list_popup_blid_pane

0xb5f7,	// (0x000b5991) list_blid_sat_info_pane_ParamLimits

0xb5f7,	// (0x000b5991) list_blid_sat_info_pane

0xb60a,	// (0x000b59a4) list_blid_sat_info_pane_g1

0xb612,	// (0x000b59ac) list_blid_sat_info_pane_t1

0x2967,	// (0x000acd01) mup_equalizer_pane_ParamLimits

0x2967,	// (0x000acd01) mup_equalizer_pane

0x2980,	// (0x000acd1a) mup_equalizer_pane_cp1_ParamLimits

0x2980,	// (0x000acd1a) mup_equalizer_pane_cp1

0x299d,	// (0x000acd37) mup_equalizer_pane_cp2_ParamLimits

0x299d,	// (0x000acd37) mup_equalizer_pane_cp2

0x29ba,	// (0x000acd54) mup_equalizer_pane_cp3_ParamLimits

0x29ba,	// (0x000acd54) mup_equalizer_pane_cp3

0x29db,	// (0x000acd75) mup_equalizer_pane_cp4_ParamLimits

0x29db,	// (0x000acd75) mup_equalizer_pane_cp4

0x29fc,	// (0x000acd96) mup_equalizer_pane_cp5

0x2a10,	// (0x000acdaa) mup_equalizer_pane_cp6

0x2a24,	// (0x000acdbe) mup_equalizer_pane_cp7

0xc7c2,	// (0x000b6b5c) bg_popup_call_poc_act_pane_g9

0xc7ca,	// (0x000b6b64) bg_popup_call_poc_act_pane_g10

0xc7d2,	// (0x000b6b6c) bg_popup_call_poc_act_pane_g11

0x000a,

0xa33d,	// (0x000b46d7) mup_scale_pane

0xa457,	// (0x000b47f1) mup_scale_pane_g1

0xb620,	// (0x000b59ba) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x000b97e9) mup_scale_pane_g

0xb644,	// (0x000b59de) msg_data_pane

0xb64c,	// (0x000b59e6) scroll_pane_cp017

0x2a4a,	// (0x000acde4) bg_list_pane_cp04_ParamLimits

0x2a4a,	// (0x000acde4) bg_list_pane_cp04

0xb654,	// (0x000b59ee) msg_data_pane_g1

0x2a6a,	// (0x000ace04) msg_data_pane_g2

0x2a74,	// (0x000ace0e) msg_data_pane_g3

0x2a7c,	// (0x000ace16) msg_data_pane_g4

0x2a84,	// (0x000ace1e) msg_data_pane_g5

0x2a8c,	// (0x000ace26) msg_data_pane_g6

0x2a94,	// (0x000ace2e) msg_data_pane_g7

0x0006,

0xf45e,	// (0x000b97f8) msg_data_pane_g

0x2a9c,	// (0x000ace36) msg_text_pane_ParamLimits

0x2a9c,	// (0x000ace36) msg_text_pane

0x2ac5,	// (0x000ace5f) qrid_highlight_pane_cp011_ParamLimits

0x2ac5,	// (0x000ace5f) qrid_highlight_pane_cp011

0xa0e2,	// (0x000b447c) msg_body_pane

0xa0e2,	// (0x000b447c) msg_header_pane

0xb665,	// (0x000b59ff) input_focus_pane_cp07

0x2ae9,	// (0x000ace83) msg_header_pane_t1_ParamLimits

0x2ae9,	// (0x000ace83) msg_header_pane_t1

0x2afb,	// (0x000ace95) msg_header_pane_t2_ParamLimits

0x2afb,	// (0x000ace95) msg_header_pane_t2

0x0001,

0xf472,	// (0x000b980c) msg_header_pane_t_ParamLimits

0xf472,	// (0x000b980c) msg_header_pane_t

0xb67a,	// (0x000b5a14) msg_body_pane_g1

0x2b0d,	// (0x000acea7) msg_body_pane_t1_ParamLimits

0x2b0d,	// (0x000acea7) msg_body_pane_t1

0x2b3e,	// (0x000aced8) msg_body_pane_t2_ParamLimits

0x2b3e,	// (0x000aced8) msg_body_pane_t2

0x2b50,	// (0x000aceea) msg_body_pane_t3_ParamLimits

0x2b50,	// (0x000aceea) msg_body_pane_t3

0x0002,

0xf477,	// (0x000b9811) msg_body_pane_t_ParamLimits

0xf477,	// (0x000b9811) msg_body_pane_t

0x2b9c,	// (0x000acf36) main_viewer_pane_g1_ParamLimits

0x2b9c,	// (0x000acf36) main_viewer_pane_g1

0x2baa,	// (0x000acf44) main_viewer_pane_g2_ParamLimits

0x2baa,	// (0x000acf44) main_viewer_pane_g2

0x2bb8,	// (0x000acf52) main_viewer_pane_g3_ParamLimits

0x2bb8,	// (0x000acf52) main_viewer_pane_g3

0x2bc7,	// (0x000acf61) main_viewer_pane_g4_ParamLimits

0x2bc7,	// (0x000acf61) main_viewer_pane_g4

0x9a79,	// (0x000b3e13) main_viewer_pane_g5_ParamLimits

0x9a79,	// (0x000b3e13) main_viewer_pane_g5

0x9a79,	// (0x000b3e13) main_viewer_pane_g7_ParamLimits

0x9a79,	// (0x000b3e13) main_viewer_pane_g7

0xafa1,	// (0x000b533b) main_viewer_pane_g8_ParamLimits

0xafa1,	// (0x000b533b) main_viewer_pane_g8

0x0007,

0xf487,	// (0x000b9821) main_viewer_pane_g_ParamLimits

0xf487,	// (0x000b9821) main_viewer_pane_g

0xb682,	// (0x000b5a1c) viewer_content_pane_ParamLimits

0xb682,	// (0x000b5a1c) viewer_content_pane

0x2c03,	// (0x000acf9d) main_postcard_pane_g1_ParamLimits

0x2c03,	// (0x000acf9d) main_postcard_pane_g1

0x2c19,	// (0x000acfb3) main_postcard_pane_g2_ParamLimits

0x2c19,	// (0x000acfb3) main_postcard_pane_g2

0x2c2f,	// (0x000acfc9) main_postcard_pane_g3_ParamLimits

0x2c2f,	// (0x000acfc9) main_postcard_pane_g3

0x0005,

0xf498,	// (0x000b9832) main_postcard_pane_g_ParamLimits

0xf498,	// (0x000b9832) main_postcard_pane_g

0x2c46,	// (0x000acfe0) main_postcard_pane_g4

0xc9a4,	// (0x000b6d3e) smil_status_volume_pane_g2

0x2c89,	// (0x000ad023) postcard_pane_ParamLimits

0x2c89,	// (0x000ad023) postcard_pane

0xb690,	// (0x000b5a2a) postcard_pane_g1_ParamLimits

0xb690,	// (0x000b5a2a) postcard_pane_g1

0x2ccb,	// (0x000ad065) postcard_pane_g2_ParamLimits

0x2ccb,	// (0x000ad065) postcard_pane_g2

0x2cd7,	// (0x000ad071) postcard_pane_g3_ParamLimits

0x2cd7,	// (0x000ad071) postcard_pane_g3

0xb69e,	// (0x000b5a38) postcard_pane_g4_ParamLimits

0xb69e,	// (0x000b5a38) postcard_pane_g4

0x2ce3,	// (0x000ad07d) postcard_pane_g5_ParamLimits

0x2ce3,	// (0x000ad07d) postcard_pane_g5

0x2cf8,	// (0x000ad092) postcard_pane_g6_ParamLimits

0x2cf8,	// (0x000ad092) postcard_pane_g6

0xb690,	// (0x000b5a2a) postcard_pane_g7_ParamLimits

0xb690,	// (0x000b5a2a) postcard_pane_g7

0x0006,

0xf4a5,	// (0x000b983f) postcard_pane_g_ParamLimits

0xf4a5,	// (0x000b983f) postcard_pane_g

0x2d0c,	// (0x000ad0a6) main_mp2_pane_g1_ParamLimits

0x2d0c,	// (0x000ad0a6) main_mp2_pane_g1

0x2d18,	// (0x000ad0b2) main_mp2_pane_g2_ParamLimits

0x2d18,	// (0x000ad0b2) main_mp2_pane_g2

0x2d24,	// (0x000ad0be) main_mp2_pane_g3_ParamLimits

0x2d24,	// (0x000ad0be) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x000b984e) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x000b984e) main_mp2_pane_g

0x2d30,	// (0x000ad0ca) main_mp2_pane_t1_ParamLimits

0x2d30,	// (0x000ad0ca) main_mp2_pane_t1

0x2d45,	// (0x000ad0df) main_mp2_pane_t2_ParamLimits

0x2d45,	// (0x000ad0df) main_mp2_pane_t2

0x2d57,	// (0x000ad0f1) main_mp2_pane_t3_ParamLimits

0x2d57,	// (0x000ad0f1) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x000b9855) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x000b9855) main_mp2_pane_t

0xb6ac,	// (0x000b5a46) pec_content_pane_ParamLimits

0xb6ac,	// (0x000b5a46) pec_content_pane

0xa779,	// (0x000b4b13) scroll_pane_cp015

0xb6be,	// (0x000b5a58) pec_attribute_pane_ParamLimits

0xb6be,	// (0x000b5a58) pec_attribute_pane

0x2d69,	// (0x000ad103) pec_content_pane_g1_ParamLimits

0x2d69,	// (0x000ad103) pec_content_pane_g1

0xb6ce,	// (0x000b5a68) pec_content_pane_t1_ParamLimits

0xb6ce,	// (0x000b5a68) pec_content_pane_t1

0xb6e0,	// (0x000b5a7a) pec_content_pane_t2_ParamLimits

0xb6e0,	// (0x000b5a7a) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x000b985c) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x000b985c) pec_content_pane_t

0x2d75,	// (0x000ad10f) list_single_graphic_pane_cp01_ParamLimits

0x2d75,	// (0x000ad10f) list_single_graphic_pane_cp01

0xa33d,	// (0x000b46d7) bg_popup_sub_pane_cp04

0xb6f2,	// (0x000b5a8c) popup_mup_playback_window_g1

0xb6fe,	// (0x000b5a98) popup_mup_playback_window_t1

0xb713,	// (0x000b5aad) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x000b9861) popup_mup_playback_window_t

0xb74a,	// (0x000b5ae4) main_image_pane_g1_ParamLimits

0xb74a,	// (0x000b5ae4) main_image_pane_g1

0xb78d,	// (0x000b5b27) scroll_pane_cp018_ParamLimits

0xb78d,	// (0x000b5b27) scroll_pane_cp018

0xb7a5,	// (0x000b5b3f) scroll_pane_cp016_ParamLimits

0xb7a5,	// (0x000b5b3f) scroll_pane_cp016

0x2e42,	// (0x000ad1dc) smil2_image_pane_ParamLimits

0x2e42,	// (0x000ad1dc) smil2_image_pane

0x2e72,	// (0x000ad20c) smil2_root_pane_ParamLimits

0x2e72,	// (0x000ad20c) smil2_root_pane

0x2eaa,	// (0x000ad244) smil2_text_pane_ParamLimits

0x2eaa,	// (0x000ad244) smil2_text_pane

0xa0e2,	// (0x000b447c) bg_list_pane_cp06

0xb7e1,	// (0x000b5b7b) grid_radio_pane

0xa0e2,	// (0x000b447c) bg_popup_window_pane_cp06

0xb7e9,	// (0x000b5b83) main_fmradio_pane_t1

0xb179,	// (0x000b5513) heading_pane_cp04

0xb815,	// (0x000b5baf) main_fmradio_pane_t2

0xc7da,	// (0x000b6b74) popup_cale_lunar_info_window_g1

0xb823,	// (0x000b5bbd) main_fmradio_pane_t3

0xc7e2,	// (0x000b6b7c) popup_cale_lunar_info_window_g2

0xb831,	// (0x000b5bcb) main_fmradio_pane_t4

0x0001,

0xb83f,	// (0x000b5bd9) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x000b993c) popup_cale_lunar_info_window_g

0xf4dc,	// (0x000b9876) main_fmradio_pane_t

0xb84d,	// (0x000b5be7) wait_bar_pane_cp03

0xb855,	// (0x000b5bef) cell_fmradio_pane_ParamLimits

0xb855,	// (0x000b5bef) cell_fmradio_pane

0xb690,	// (0x000b5a2a) cell_fmradio_pane_g1_ParamLimits

0xb690,	// (0x000b5a2a) cell_fmradio_pane_g1

0xa0e2,	// (0x000b447c) grid_highlight_pane_cp011

0xb868,	// (0x000b5c02) poc_content_pane_ParamLimits

0xb868,	// (0x000b5c02) poc_content_pane

0xb87a,	// (0x000b5c14) scroll_pane_cp019

0x2f2a,	// (0x000ad2c4) popup_call_poc_act_window_ParamLimits

0x2f2a,	// (0x000ad2c4) popup_call_poc_act_window

0x2f4e,	// (0x000ad2e8) popup_call_poc_inact_window_ParamLimits

0x2f4e,	// (0x000ad2e8) popup_call_poc_inact_window

0xf579,	// (0x000b9913) bg_popup_call_poc_act_pane_g

0xc752,	// (0x000b6aec) bg_popup_call_poc_inact_pane_g1

0xc75a,	// (0x000b6af4) bg_popup_call_poc_inact_pane_g2

0xb882,	// (0x000b5c1c) popup_call_poc_act_window_g2

0xc762,	// (0x000b6afc) bg_popup_call_poc_inact_pane_g3

0xc76a,	// (0x000b6b04) bg_popup_call_poc_inact_pane_g4

0xc772,	// (0x000b6b0c) bg_popup_call_poc_inact_pane_g5

0xb88a,	// (0x000b5c24) popup_call_poc_act_window_t1_ParamLimits

0xb88a,	// (0x000b5c24) popup_call_poc_act_window_t1

0xb8b2,	// (0x000b5c4c) popup_call_poc_act_window_t2_ParamLimits

0xb8b2,	// (0x000b5c4c) popup_call_poc_act_window_t2

0xb8da,	// (0x000b5c74) popup_call_poc_act_window_t3_ParamLimits

0xb8da,	// (0x000b5c74) popup_call_poc_act_window_t3

0xb902,	// (0x000b5c9c) popup_call_poc_act_window_t4_ParamLimits

0xb902,	// (0x000b5c9c) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x000b9881) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x000b9881) popup_call_poc_act_window_t

0xc77a,	// (0x000b6b14) bg_popup_call_poc_inact_pane_g6

0xc782,	// (0x000b6b1c) bg_popup_call_poc_inact_pane_g7

0xc78a,	// (0x000b6b24) bg_popup_call_poc_inact_pane_g8

0xb914,	// (0x000b5cae) popup_call_poc_inact_window_g2

0xc792,	// (0x000b6b2c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x000b9900) bg_popup_call_poc_inact_pane_g

0xb91c,	// (0x000b5cb6) popup_call_poc_inact_window_t1_ParamLimits

0xb91c,	// (0x000b5cb6) popup_call_poc_inact_window_t1

0xb931,	// (0x000b5ccb) popup_call_poc_inact_window_t2_ParamLimits

0xb931,	// (0x000b5ccb) popup_call_poc_inact_window_t2

0xb946,	// (0x000b5ce0) popup_call_poc_inact_window_t3_ParamLimits

0xb946,	// (0x000b5ce0) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x000b988a) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x000b988a) popup_call_poc_inact_window_t

0xc917,	// (0x000b6cb1) context_pane_ParamLimits

0x378f,	// (0x000adb29) signal_pane_ParamLimits

0xa5d0,	// (0x000b496a) main_call2_pane

0x9ac4,	// (0x000b3e5e) popup_phob_thumbnail2_window_ParamLimits

0x9ac4,	// (0x000b3e5e) popup_phob_thumbnail2_window

0x9a61,	// (0x000b3dfb) aid_hotspot_pointer_arrow_pane

0x9a69,	// (0x000b3e03) aid_hotspot_pointer_hand_pane

0x3297,	// (0x000ad631) phob_pre_status_pane_g5

0x0e0f,	// (0x000ab1a9) cams_zoom_pane_ParamLimits

0x0e1e,	// (0x000ab1b8) image_vga_pane_ParamLimits

0x0e38,	// (0x000ab1d2) main_camera_pane_g1_ParamLimits

0x0e4a,	// (0x000ab1e4) main_camera_pane_g2_ParamLimits

0x0e5a,	// (0x000ab1f4) main_camera_pane_g3_ParamLimits

0x0e6a,	// (0x000ab204) main_camera_pane_g4_ParamLimits

0x0e7a,	// (0x000ab214) main_camera_pane_g5_ParamLimits

0x0e8a,	// (0x000ab224) main_camera_pane_g6_ParamLimits

0x0e9c,	// (0x000ab236) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x000b9589) main_camera_pane_g_ParamLimits

0x0eac,	// (0x000ab246) main_camera_pane_t1_ParamLimits

0x0ec2,	// (0x000ab25c) main_camera_pane_t2_ParamLimits

0xf200,	// (0x000b959a) main_camera_pane_t_ParamLimits

0xa33d,	// (0x000b46d7) bg_popup_preview_window_pane_cp01_ParamLimits

0xa33d,	// (0x000b46d7) bg_popup_preview_window_pane_cp01

0xb95b,	// (0x000b5cf5) popup_phob_thumbnail2_window_g1_ParamLimits

0xb95b,	// (0x000b5cf5) popup_phob_thumbnail2_window_g1

0xa0e2,	// (0x000b447c) call2_cli_visual_pane

0x2f82,	// (0x000ad31c) popup_call2_audio_conf_window_ParamLimits

0x2f82,	// (0x000ad31c) popup_call2_audio_conf_window

0x2fa2,	// (0x000ad33c) popup_call2_audio_first_window_ParamLimits

0x2fa2,	// (0x000ad33c) popup_call2_audio_first_window

0x3038,	// (0x000ad3d2) popup_call2_audio_in_window_ParamLimits

0x3038,	// (0x000ad3d2) popup_call2_audio_in_window

0x3080,	// (0x000ad41a) popup_call2_audio_out_window_ParamLimits

0x3080,	// (0x000ad41a) popup_call2_audio_out_window

0x30ea,	// (0x000ad484) popup_call2_audio_second_window_ParamLimits

0x30ea,	// (0x000ad484) popup_call2_audio_second_window

0x3150,	// (0x000ad4ea) popup_call2_audio_wait_window_ParamLimits

0x3150,	// (0x000ad4ea) popup_call2_audio_wait_window

0xa0e2,	// (0x000b447c) bg_popup_call2_act_pane_cp03

0xa31f,	// (0x000b46b9) list_conf_pane_cp

0xb967,	// (0x000b5d01) popup_call2_audio_conf_window_t1

0xb1d6,	// (0x000b5570) list_single_graphic_popup_conf2_pane_ParamLimits

0xb1d6,	// (0x000b5570) list_single_graphic_popup_conf2_pane

0xb1e9,	// (0x000b5583) list_highlight_pane_cp04

0xb975,	// (0x000b5d0f) list_single_graphic_popup_conf2_pane_g1

0xb1fa,	// (0x000b5594) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x000b9891) list_single_graphic_popup_conf2_pane_g

0xb97f,	// (0x000b5d19) list_single_graphic_popup_conf2_pane_t1

0xb98d,	// (0x000b5d27) bg_popup_call2_act_pane_cp01_ParamLimits

0xb98d,	// (0x000b5d27) bg_popup_call2_act_pane_cp01

0xba17,	// (0x000b5db1) call_type_pane_cp05_ParamLimits

0xba17,	// (0x000b5db1) call_type_pane_cp05

0xba6b,	// (0x000b5e05) popup_call2_audio_second_window_g1_ParamLimits

0xba6b,	// (0x000b5e05) popup_call2_audio_second_window_g1

0xbabf,	// (0x000b5e59) popup_call2_audio_second_window_g2_ParamLimits

0xbabf,	// (0x000b5e59) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x000b9896) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x000b9896) popup_call2_audio_second_window_g

0xbb24,	// (0x000b5ebe) popup_call2_audio_second_window_t1_ParamLimits

0xbb24,	// (0x000b5ebe) popup_call2_audio_second_window_t1

0xbbdf,	// (0x000b5f79) popup_call2_audio_second_window_t2_ParamLimits

0xbbdf,	// (0x000b5f79) popup_call2_audio_second_window_t2

0xbc32,	// (0x000b5fcc) popup_call2_audio_second_window_t3_ParamLimits

0xbc32,	// (0x000b5fcc) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x000b989d) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x000b989d) popup_call2_audio_second_window_t

0xa0e2,	// (0x000b447c) bg_popup_call2_in_pane_cp02

0xa0ec,	// (0x000b4486) call_type_pane_cp04

0xa0f4,	// (0x000b448e) popup_call2_audio_wait_window_g1

0xa0fc,	// (0x000b4496) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x000b9478) popup_call2_audio_wait_window_g

0xa104,	// (0x000b449e) popup_call2_audio_wait_window_t3

0xbd25,	// (0x000b60bf) bg_popup_call2_act_pane_ParamLimits

0xbd25,	// (0x000b60bf) bg_popup_call2_act_pane

0xbde5,	// (0x000b617f) call_type_pane_cp03_ParamLimits

0xbde5,	// (0x000b617f) call_type_pane_cp03

0xbe49,	// (0x000b61e3) popup_call2_audio_first_window_g1_ParamLimits

0xbe49,	// (0x000b61e3) popup_call2_audio_first_window_g1

0xbeb9,	// (0x000b6253) popup_call2_audio_first_window_g2_ParamLimits

0xbeb9,	// (0x000b6253) popup_call2_audio_first_window_g2

0xb5a4,	// (0x000b593e) popup_call2_audio_first_window_g3_ParamLimits

0xb5a4,	// (0x000b593e) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x000b98a6) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x000b98a6) popup_call2_audio_first_window_g

0xbf97,	// (0x000b6331) popup_call2_audio_first_window_t1_ParamLimits

0xbf97,	// (0x000b6331) popup_call2_audio_first_window_t1

0xc09a,	// (0x000b6434) popup_call2_audio_first_window_t4_ParamLimits

0xc09a,	// (0x000b6434) popup_call2_audio_first_window_t4

0xc17d,	// (0x000b6517) popup_call2_audio_first_window_t5_ParamLimits

0xc17d,	// (0x000b6517) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x000b98b1) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x000b98b1) popup_call2_audio_first_window_t

0xa335,	// (0x000b46cf) bg_popup_call2_act_pane_g1

0xc7ea,	// (0x000b6b84) popup_cale_lunar_info_window_t1

0xc7f8,	// (0x000b6b92) popup_cale_lunar_info_window_t2

0xc806,	// (0x000b6ba0) popup_cale_lunar_info_window_t3

0xa0e2,	// (0x000b447c) bg_popup_call2_bubble_pane

0xc27e,	// (0x000b6618) bg_popup_call2_in_pane_cp01_ParamLimits

0xc27e,	// (0x000b6618) bg_popup_call2_in_pane_cp01

0x9621,	// (0x000b39bb) call_type_pane_cp02

0xc2c6,	// (0x000b6660) popup_call2_audio_out_window_g1_ParamLimits

0xc2c6,	// (0x000b6660) popup_call2_audio_out_window_g1

0xc2f2,	// (0x000b668c) popup_call2_audio_out_window_g2_ParamLimits

0xc2f2,	// (0x000b668c) popup_call2_audio_out_window_g2

0xc31a,	// (0x000b66b4) popup_call2_audio_out_window_g3_ParamLimits

0xc31a,	// (0x000b66b4) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x000b98ba) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x000b98ba) popup_call2_audio_out_window_g

0xc355,	// (0x000b66ef) popup_call2_audio_out_window_t1_ParamLimits

0xc355,	// (0x000b66ef) popup_call2_audio_out_window_t1

0xc3b4,	// (0x000b674e) popup_call2_audio_out_window_t2_ParamLimits

0xc3b4,	// (0x000b674e) popup_call2_audio_out_window_t2

0xc408,	// (0x000b67a2) popup_call2_audio_out_window_t3_ParamLimits

0xc408,	// (0x000b67a2) popup_call2_audio_out_window_t3

0xc41e,	// (0x000b67b8) popup_call2_audio_out_window_t4_ParamLimits

0xc41e,	// (0x000b67b8) popup_call2_audio_out_window_t4

0xc434,	// (0x000b67ce) popup_call2_audio_out_window_t5_ParamLimits

0xc434,	// (0x000b67ce) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x000b98c3) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x000b98c3) popup_call2_audio_out_window_t

0xc498,	// (0x000b6832) bg_popup_call2_in_pane_ParamLimits

0xc498,	// (0x000b6832) bg_popup_call2_in_pane

0xc4f4,	// (0x000b688e) popup_call2_audio_in_window_g1_ParamLimits

0xc4f4,	// (0x000b688e) popup_call2_audio_in_window_g1

0xc52c,	// (0x000b68c6) popup_call2_audio_in_window_g2_ParamLimits

0xc52c,	// (0x000b68c6) popup_call2_audio_in_window_g2

0xc564,	// (0x000b68fe) popup_call2_audio_in_window_g3_ParamLimits

0xc564,	// (0x000b68fe) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x000b98d0) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x000b98d0) popup_call2_audio_in_window_g

0xc5bc,	// (0x000b6956) popup_call2_audio_in_window_t1_ParamLimits

0xc5bc,	// (0x000b6956) popup_call2_audio_in_window_t1

0xc63c,	// (0x000b69d6) popup_call2_audio_in_window_t2_ParamLimits

0xc63c,	// (0x000b69d6) popup_call2_audio_in_window_t2

0xc6bc,	// (0x000b6a56) popup_call2_audio_in_window_t3_ParamLimits

0xc6bc,	// (0x000b6a56) popup_call2_audio_in_window_t3

0xc6d6,	// (0x000b6a70) popup_call2_audio_in_window_t4_ParamLimits

0xc6d6,	// (0x000b6a70) popup_call2_audio_in_window_t4

0xc6e8,	// (0x000b6a82) popup_call2_audio_in_window_t5_ParamLimits

0xc6e8,	// (0x000b6a82) popup_call2_audio_in_window_t5

0xc6fd,	// (0x000b6a97) popup_call2_audio_in_window_t6_ParamLimits

0xc6fd,	// (0x000b6a97) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x000b98d9) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x000b98d9) popup_call2_audio_in_window_t

0xa335,	// (0x000b46cf) bg_popup_call2_in_pane_g1

0xc814,	// (0x000b6bae) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x000b9941) popup_cale_lunar_info_window_t

0xa33d,	// (0x000b46d7) bg_popup_call2_rect_pane_ParamLimits

0xa33d,	// (0x000b46d7) bg_popup_call2_rect_pane

0xa0e2,	// (0x000b447c) call2_cli_visual_graphic_pane

0xa0e2,	// (0x000b447c) call2_cli_visual_text_pane

0x9aeb,	// (0x000b3e85) smil_status_volume_pane_g3

0x0002,

0xa457,	// (0x000b47f1) call2_cli_visual_graphic_pane_g1

0xa457,	// (0x000b47f1) call2_cli_visual_graphic_pane_g2

0xa457,	// (0x000b47f1) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x000b98e6) call2_cli_visual_graphic_pane_g

0xc712,	// (0x000b6aac) bg_popup_call2_rect_pane_g1

0xa4ec,	// (0x000b4886) bg_popup_call2_rect_pane_g2

0xc71a,	// (0x000b6ab4) bg_popup_call2_rect_pane_g3

0xc722,	// (0x000b6abc) bg_popup_call2_rect_pane_g4

0xc72a,	// (0x000b6ac4) bg_popup_call2_rect_pane_g5

0xc732,	// (0x000b6acc) bg_popup_call2_rect_pane_g6

0xc73a,	// (0x000b6ad4) bg_popup_call2_rect_pane_g7

0xc742,	// (0x000b6adc) bg_popup_call2_rect_pane_g8

0xc74a,	// (0x000b6ae4) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x000b98ed) bg_popup_call2_rect_pane_g

0xc752,	// (0x000b6aec) bg_popup_call2_bubble_pane_g1

0xc75a,	// (0x000b6af4) bg_popup_call2_bubble_pane_g2

0xc762,	// (0x000b6afc) bg_popup_call2_bubble_pane_g3

0xc76a,	// (0x000b6b04) bg_popup_call2_bubble_pane_g4

0xc772,	// (0x000b6b0c) bg_popup_call2_bubble_pane_g5

0xc77a,	// (0x000b6b14) bg_popup_call2_bubble_pane_g6

0xc782,	// (0x000b6b1c) bg_popup_call2_bubble_pane_g7

0xc78a,	// (0x000b6b24) bg_popup_call2_bubble_pane_g8

0xc792,	// (0x000b6b2c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x000b9900) bg_popup_call2_bubble_pane_g

0x0854,	// (0x000aabee) aid_cale_week_size_cell_pane

0x0ed8,	// (0x000ab272) aid_cams_cif_uncrop_pane_ParamLimits

0x0ed8,	// (0x000ab272) aid_cams_cif_uncrop_pane

0x1088,	// (0x000ab422) aid_cams_size_cell_ParamLimits

0x1088,	// (0x000ab422) aid_cams_size_cell

0x109c,	// (0x000ab436) grid_cams_pane_ParamLimits

0x10b6,	// (0x000ab450) linegrid_cams_pane_ParamLimits

0x1296,	// (0x000ab630) call_video_pane_t1

0x12b4,	// (0x000ab64e) call_video_pane_t2

0x0001,

0xf253,	// (0x000b95ed) call_video_pane_t

0x16e2,	// (0x000aba7c) aid_cale_month_size_cell_pane_ParamLimits

0x16e2,	// (0x000aba7c) aid_cale_month_size_cell_pane

0xf5f0,	// (0x000b998a) smil_status_volume_pane_g

0x9af8,	// (0x000b3e92) volume_smil_pane_ParamLimits

0x94b4,	// (0x000b384e) aid_popup2_width_pane

0x07ae,	// (0x000aab48) cell_qdial_pane_g4_ParamLimits

0x07ae,	// (0x000aab48) cell_qdial_pane_g4

0x2577,	// (0x000ac911) aid_blid_cardinal_pane_ParamLimits

0x2583,	// (0x000ac91d) aid_blid_destination_pane_ParamLimits

0x2583,	// (0x000ac91d) aid_blid_destination_pane

0xa33d,	// (0x000b46d7) bg_popup_call_poc_act_pane_ParamLimits

0xa33d,	// (0x000b46d7) bg_popup_call_poc_act_pane

0xa33d,	// (0x000b46d7) bg_popup_call_poc_inact_pane_ParamLimits

0xa33d,	// (0x000b46d7) bg_popup_call_poc_inact_pane

0xc79a,	// (0x000b6b34) bg_popup_call_poc_act_pane_g1

0xc7a2,	// (0x000b6b3c) bg_popup_call_poc_act_pane_g2

0xc7aa,	// (0x000b6b44) bg_popup_call_poc_act_pane_g3

0xc76a,	// (0x000b6b04) bg_popup_call_poc_act_pane_g4

0xc772,	// (0x000b6b0c) bg_popup_call_poc_act_pane_g5

0xc7b2,	// (0x000b6b4c) bg_popup_call_poc_act_pane_g6

0xc782,	// (0x000b6b1c) bg_popup_call_poc_act_pane_g7

0xc7ba,	// (0x000b6b54) bg_popup_call_poc_act_pane_g8

0xa0e2,	// (0x000b447c) main_usb_pane

0x9a9f,	// (0x000b3e39) popup_cale_lunar_info_window

0x158e,	// (0x000ab928) im_reading_pane_t1_ParamLimits

0xa6d1,	// (0x000b4a6b) list_im_pane_ParamLimits

0xa6e2,	// (0x000b4a7c) scroll_pane_cp07_ParamLimits

0xa0e2,	// (0x000b447c) grid_highlight_pane_cp012

0xa33d,	// (0x000b46d7) mup_scale_pane_ParamLimits

0xb690,	// (0x000b5a2a) main_usb_pane_g1_ParamLimits

0xb690,	// (0x000b5a2a) main_usb_pane_g1

0x31ac,	// (0x000ad546) main_usb_pane_g2_ParamLimits

0x31ac,	// (0x000ad546) main_usb_pane_g2

0x0001,

0xf590,	// (0x000b992a) main_usb_pane_g_ParamLimits

0xf590,	// (0x000b992a) main_usb_pane_g

0x31c2,	// (0x000ad55c) main_usb_pane_t1_ParamLimits

0x31c2,	// (0x000ad55c) main_usb_pane_t1

0x31d4,	// (0x000ad56e) main_usb_pane_t2_ParamLimits

0x31d4,	// (0x000ad56e) main_usb_pane_t2

0x31e6,	// (0x000ad580) main_usb_pane_t3_ParamLimits

0x31e6,	// (0x000ad580) main_usb_pane_t3

0x31f8,	// (0x000ad592) main_usb_pane_t4_ParamLimits

0x31f8,	// (0x000ad592) main_usb_pane_t4

0x320a,	// (0x000ad5a4) main_usb_pane_t5_ParamLimits

0x320a,	// (0x000ad5a4) main_usb_pane_t5

0x321c,	// (0x000ad5b6) main_usb_pane_t6_ParamLimits

0x321c,	// (0x000ad5b6) main_usb_pane_t6

0x0005,

0xf595,	// (0x000b992f) main_usb_pane_t_ParamLimits

0x2526,	// (0x000ac8c0) aid_text_placing

0x252f,	// (0x000ac8c9) main_location2_pane_t1_ParamLimits

0x2541,	// (0x000ac8db) main_location2_pane_t2_ParamLimits

0x2553,	// (0x000ac8ed) main_location2_pane_t3_ParamLimits

0x2565,	// (0x000ac8ff) main_location2_pane_t4_ParamLimits

0x2565,	// (0x000ac8ff) main_location2_pane_t4

0xf3b4,	// (0x000b974e) main_location2_pane_t_ParamLimits

0xa379,	// (0x000b4713) find_pinb_pane_g2_ParamLimits

0xa379,	// (0x000b4713) find_pinb_pane_g2

0x0001,

0xf104,	// (0x000b949e) find_pinb_pane_g_ParamLimits

0xf104,	// (0x000b949e) find_pinb_pane_g

0xa385,	// (0x000b471f) find_pinb_pane_t1_ParamLimits

0xa397,	// (0x000b4731) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x000b94a3) find_pinb_pane_t_ParamLimits

0xa0e2,	// (0x000b447c) main_call3_pane

0x1bcd,	// (0x000abf67) cale_month_day_heading_pane_t1_ParamLimits

0x1c53,	// (0x000abfed) cale_month_day_heading_pane_t2_ParamLimits

0x1ccc,	// (0x000ac066) cale_month_day_heading_pane_t3_ParamLimits

0x1d45,	// (0x000ac0df) cale_month_day_heading_pane_t4_ParamLimits

0x1dc6,	// (0x000ac160) cale_month_day_heading_pane_t5_ParamLimits

0x1e4f,	// (0x000ac1e9) cale_month_day_heading_pane_t6_ParamLimits

0x1ed8,	// (0x000ac272) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x000b9625) cale_month_day_heading_pane_t_ParamLimits

0xade3,	// (0x000b517d) smil_status_volume_pane

0x2ca7,	// (0x000ad041) postcard_address_pane_ParamLimits

0x2ca7,	// (0x000ad041) postcard_address_pane

0x2cb9,	// (0x000ad053) postcard_message_pane_ParamLimits

0x2cb9,	// (0x000ad053) postcard_message_pane

0x318a,	// (0x000ad524) call2_cli_visual_pane_t1_ParamLimits

0x318a,	// (0x000ad524) call2_cli_visual_pane_t1

0x39bc,	// (0x000add56) postcard_message_pane_t1_ParamLimits

0x39bc,	// (0x000add56) postcard_message_pane_t1

0x39a5,	// (0x000add3f) postcard_address_pane_t1_ParamLimits

0x39a5,	// (0x000add3f) postcard_address_pane_t1

0x3991,	// (0x000add2b) popup_call3_audio_in_window_ParamLimits

0x3991,	// (0x000add2b) popup_call3_audio_in_window

0x381c,	// (0x000adbb6) bg_popup_call3_in_pane_ParamLimits

0x381c,	// (0x000adbb6) bg_popup_call3_in_pane

0x3892,	// (0x000adc2c) popup_call3_audio_in_window_g1_ParamLimits

0x3892,	// (0x000adc2c) popup_call3_audio_in_window_g1

0x38b2,	// (0x000adc4c) popup_call3_audio_in_window_g2_ParamLimits

0x38b2,	// (0x000adc4c) popup_call3_audio_in_window_g2

0x38d2,	// (0x000adc6c) popup_call3_audio_in_window_g3_ParamLimits

0x38d2,	// (0x000adc6c) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x000b9991) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x000b9991) popup_call3_audio_in_window_g

0x3903,	// (0x000adc9d) popup_call3_audio_in_window_t1_ParamLimits

0x3903,	// (0x000adc9d) popup_call3_audio_in_window_t1

0x3941,	// (0x000adcdb) popup_call3_audio_in_window_t2_ParamLimits

0x3941,	// (0x000adcdb) popup_call3_audio_in_window_t2

0x397f,	// (0x000add19) popup_call3_audio_in_window_t3_ParamLimits

0x397f,	// (0x000add19) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x000b999a) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x000b999a) popup_call3_audio_in_window_t

0xa5d0,	// (0x000b496a) bg_popup_call3_rect_pane

0xc712,	// (0x000b6aac) bg_popup_call3_rect_pane_g1

0xa4ec,	// (0x000b4886) bg_popup_call3_rect_pane_g2

0xc71a,	// (0x000b6ab4) bg_popup_call3_rect_pane_g3

0xc722,	// (0x000b6abc) bg_popup_call3_rect_pane_g4

0xc72a,	// (0x000b6ac4) bg_popup_call3_rect_pane_g5

0xc732,	// (0x000b6acc) bg_popup_call3_rect_pane_g6

0xc73a,	// (0x000b6ad4) bg_popup_call3_rect_pane_g7

0x2867,	// (0x000acc01) mup_visualizer_osc_pane

0xb5b2,	// (0x000b594c) mup_visualizer_spec_pane

0x384c,	// (0x000adbe6) call3_video_qcif_pane_ParamLimits

0x384c,	// (0x000adbe6) call3_video_qcif_pane

0x385f,	// (0x000adbf9) call3_video_qcif_uncrop_pane_ParamLimits

0x385f,	// (0x000adbf9) call3_video_qcif_uncrop_pane

0x386d,	// (0x000adc07) call3_video_subqcif_pane_ParamLimits

0x386d,	// (0x000adc07) call3_video_subqcif_pane

0x3881,	// (0x000adc1b) call3_video_subqcif_uncrop_pane_ParamLimits

0x3881,	// (0x000adc1b) call3_video_subqcif_uncrop_pane

0x38f2,	// (0x000adc8c) popup_call3_audio_in_window_g4_ParamLimits

0x38f2,	// (0x000adc8c) popup_call3_audio_in_window_g4

0x380b,	// (0x000adba5) mup_spec_half_pane

0x3814,	// (0x000adbae) mup_spec_half_pane_cp

0xc977,	// (0x000b6d11) mup_osc_middle_pane

0xc980,	// (0x000b6d1a) mup_visualizer_osc_pane_g1

0x37eb,	// (0x000adb85) mup_spec_bar_pane_ParamLimits

0x37eb,	// (0x000adb85) mup_spec_bar_pane

0xc964,	// (0x000b6cfe) mup_spec_bar_pane_g1

0xc96e,	// (0x000b6d08) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x000b9985) mup_spec_bar_pane_g

0x0854,	// (0x000aabee) aid_cale_week_size_cell_pane_ParamLimits

0x086e,	// (0x000aac08) bg_cale_heading_pane_ParamLimits

0xa529,	// (0x000b48c3) bg_cale_pane_cp01_ParamLimits

0x0886,	// (0x000aac20) cale_week_corner_pane_ParamLimits

0x08a5,	// (0x000aac3f) cale_week_day_heading_pane_ParamLimits

0x08c2,	// (0x000aac5c) cale_week_scroll_pane_g1_ParamLimits

0x08d5,	// (0x000aac6f) cale_week_scroll_pane_g2_ParamLimits

0x08ed,	// (0x000aac87) cale_week_scroll_pane_g3_ParamLimits

0x0905,	// (0x000aac9f) cale_week_scroll_pane_g4_ParamLimits

0x091d,	// (0x000aacb7) cale_week_scroll_pane_g5_ParamLimits

0x093d,	// (0x000aacd7) cale_week_scroll_pane_g6_ParamLimits

0x095d,	// (0x000aacf7) cale_week_scroll_pane_g7_ParamLimits

0x097d,	// (0x000aad17) cale_week_scroll_pane_g8_ParamLimits

0x09a1,	// (0x000aad3b) cale_week_scroll_pane_g9_ParamLimits

0x09b9,	// (0x000aad53) cale_week_scroll_pane_g10_ParamLimits

0x09d1,	// (0x000aad6b) cale_week_scroll_pane_g11_ParamLimits

0x09e9,	// (0x000aad83) cale_week_scroll_pane_g12_ParamLimits

0x0a01,	// (0x000aad9b) cale_week_scroll_pane_g13_ParamLimits

0x0a01,	// (0x000aad9b) cale_week_scroll_pane_g14_ParamLimits

0x0a01,	// (0x000aad9b) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x000b952f) cale_week_scroll_pane_g_ParamLimits

0x0a3d,	// (0x000aadd7) cale_week_time_pane_ParamLimits

0x0a61,	// (0x000aadfb) grid_cale_week_pane_ParamLimits

0xa546,	// (0x000b48e0) listscroll_cale_week_pane_t1

0xa558,	// (0x000b48f2) scroll_pane_cp08_ParamLimits

0x1742,	// (0x000abadc) cale_month_corner_pane_ParamLimits

0xadb9,	// (0x000b5153) cale_month_pane_t1

0x1b60,	// (0x000abefa) cale_month_week_pane_ParamLimits

0x2382,	// (0x000ac71c) popup_call_status_window_g1_ParamLimits

0x2396,	// (0x000ac730) popup_call_status_window_g2_ParamLimits

0x23aa,	// (0x000ac744) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x000b96d5) popup_call_status_window_g_ParamLimits

0xb169,	// (0x000b5503) aid_call2_pane

0x2adb,	// (0x000ace75) msg_header_pane_g1

0x2ca7,	// (0x000ad041) postcard_address2_pane_ParamLimits

0x2ca7,	// (0x000ad041) postcard_address2_pane

0x2cb9,	// (0x000ad053) postcard_message2_pane_ParamLimits

0x2cb9,	// (0x000ad053) postcard_message2_pane

0x379d,	// (0x000adb37) message2_row_pane_ParamLimits

0x379d,	// (0x000adb37) message2_row_pane

0x37b9,	// (0x000adb53) address2_row_pane_ParamLimits

0x37b9,	// (0x000adb53) address2_row_pane

0xc932,	// (0x000b6ccc) postcard_message2_row_pane_g1

0xc93a,	// (0x000b6cd4) postcard_message2_row_pane_t1

0xc932,	// (0x000b6ccc) address2_row_pane_g1

0xc93a,	// (0x000b6cd4) address2_row_pane_t1

0x0d91,	// (0x000ab12b) aid_size_cell_vorec

0xa0e2,	// (0x000b447c) main_rss_pane

0x37cc,	// (0x000adb66) rss_list_single_pane_ParamLimits

0x37cc,	// (0x000adb66) rss_list_single_pane

0xc948,	// (0x000b6ce2) rss_list_single_pane_t1

0xc956,	// (0x000b6cf0) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x000b9980) rss_list_single_pane_t

0xa0e2,	// (0x000b447c) main_camera2_pane

0xa0e2,	// (0x000b447c) main_video2_pane

0x3a35,	// (0x000addcf) cams_zoom_pane_cp2_ParamLimits

0x3a35,	// (0x000addcf) cams_zoom_pane_cp2

0x3a55,	// (0x000addef) image2_vga_pane_ParamLimits

0x3a55,	// (0x000addef) image2_vga_pane

0x3aa6,	// (0x000ade40) main_camera2_pane_g1_ParamLimits

0x3aa6,	// (0x000ade40) main_camera2_pane_g1

0x3ac6,	// (0x000ade60) main_camera2_pane_g2_ParamLimits

0x3ac6,	// (0x000ade60) main_camera2_pane_g2

0x3ae6,	// (0x000ade80) main_camera2_pane_g3_ParamLimits

0x3ae6,	// (0x000ade80) main_camera2_pane_g3

0x3b06,	// (0x000adea0) main_camera2_pane_g4_ParamLimits

0x3b06,	// (0x000adea0) main_camera2_pane_g4

0x3b26,	// (0x000adec0) main_camera2_pane_g5_ParamLimits

0x3b26,	// (0x000adec0) main_camera2_pane_g5

0x3b46,	// (0x000adee0) main_camera2_pane_g6_ParamLimits

0x3b46,	// (0x000adee0) main_camera2_pane_g6

0x3b66,	// (0x000adf00) main_camera2_pane_g7_ParamLimits

0x3b66,	// (0x000adf00) main_camera2_pane_g7

0x3b86,	// (0x000adf20) main_camera2_pane_g8_ParamLimits

0x3b86,	// (0x000adf20) main_camera2_pane_g8

0x0008,

0xf607,	// (0x000b99a1) main_camera2_pane_g_ParamLimits

0xf607,	// (0x000b99a1) main_camera2_pane_g

0x3bc6,	// (0x000adf60) main_camera2_pane_t1_ParamLimits

0x3bc6,	// (0x000adf60) main_camera2_pane_t1

0x3bfb,	// (0x000adf95) main_camera2_pane_t2_ParamLimits

0x3bfb,	// (0x000adf95) main_camera2_pane_t2

0x3c21,	// (0x000adfbb) main_camera2_pane_t3_ParamLimits

0x3c21,	// (0x000adfbb) main_camera2_pane_t3

0x3c7f,	// (0x000ae019) main_camera2_pane_t4_ParamLimits

0x3c7f,	// (0x000ae019) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x000b99b4) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x000b99b4) main_camera2_pane_t

0x3d11,	// (0x000ae0ab) cams_zoom_pane_cp4_ParamLimits

0x3d11,	// (0x000ae0ab) cams_zoom_pane_cp4

0x3d27,	// (0x000ae0c1) image2_cif_pane_ParamLimits

0x3d27,	// (0x000ae0c1) image2_cif_pane

0x3d52,	// (0x000ae0ec) image2_subqcif_pane_ParamLimits

0x3d52,	// (0x000ae0ec) image2_subqcif_pane

0x3d6c,	// (0x000ae106) main_video2_pane_g1_ParamLimits

0x3d6c,	// (0x000ae106) main_video2_pane_g1

0x3d86,	// (0x000ae120) main_video2_pane_g2_ParamLimits

0x3d86,	// (0x000ae120) main_video2_pane_g2

0x3d9c,	// (0x000ae136) main_video2_pane_g3_ParamLimits

0x3d9c,	// (0x000ae136) main_video2_pane_g3

0x3db2,	// (0x000ae14c) main_video2_pane_g4_ParamLimits

0x3db2,	// (0x000ae14c) main_video2_pane_g4

0x3dc8,	// (0x000ae162) main_video2_pane_g5_ParamLimits

0x3dc8,	// (0x000ae162) main_video2_pane_g5

0x3dde,	// (0x000ae178) main_video2_pane_g6_ParamLimits

0x3dde,	// (0x000ae178) main_video2_pane_g6

0x0005,

0xf629,	// (0x000b99c3) main_video2_pane_g_ParamLimits

0xf629,	// (0x000b99c3) main_video2_pane_g

0x3df8,	// (0x000ae192) main_video2_pane_t1_ParamLimits

0x3df8,	// (0x000ae192) main_video2_pane_t1

0x3e1c,	// (0x000ae1b6) main_video2_pane_t2_ParamLimits

0x3e1c,	// (0x000ae1b6) main_video2_pane_t2

0x3e6a,	// (0x000ae204) main_video2_pane_t3_ParamLimits

0x3e6a,	// (0x000ae204) main_video2_pane_t3

0x0002,

0xf636,	// (0x000b99d0) main_video2_pane_t_ParamLimits

0xf636,	// (0x000b99d0) main_video2_pane_t

0x32d7,	// (0x000ad671) call_muted_g2

0x0001,

0xf5d8,	// (0x000b9972) call_muted_g

0xa0e2,	// (0x000b447c) main_mup2_pane

0x3eae,	// (0x000ae248) main_mup2_pane_g1_ParamLimits

0x3eae,	// (0x000ae248) main_mup2_pane_g1

0x3eba,	// (0x000ae254) main_mup2_pane_g2_ParamLimits

0x3eba,	// (0x000ae254) main_mup2_pane_g2

0x9b66,	// (0x000b3f00) main_mup_pane_g13_cp1

0x9b6e,	// (0x000b3f08) mup_volume_pane_cp1

0x3ed6,	// (0x000ae270) main_mup2_pane_g4_ParamLimits

0x3ed6,	// (0x000ae270) main_mup2_pane_g4

0x3ee8,	// (0x000ae282) main_mup2_pane_g5_ParamLimits

0x3ee8,	// (0x000ae282) main_mup2_pane_g5

0x3efa,	// (0x000ae294) main_mup2_pane_g6_ParamLimits

0x3efa,	// (0x000ae294) main_mup2_pane_g6

0x3f0c,	// (0x000ae2a6) main_mup2_pane_g7_ParamLimits

0x3f0c,	// (0x000ae2a6) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x000b99d7) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x000b99d7) main_mup2_pane_g

0x3f24,	// (0x000ae2be) main_mup2_pane_t1_ParamLimits

0x3f24,	// (0x000ae2be) main_mup2_pane_t1

0x3f3a,	// (0x000ae2d4) main_mup2_pane_t2_ParamLimits

0x3f3a,	// (0x000ae2d4) main_mup2_pane_t2

0x3f50,	// (0x000ae2ea) main_mup2_pane_t3_ParamLimits

0x3f50,	// (0x000ae2ea) main_mup2_pane_t3

0x3f66,	// (0x000ae300) main_mup2_pane_t4_ParamLimits

0x3f66,	// (0x000ae300) main_mup2_pane_t4

0x3f7e,	// (0x000ae318) main_mup2_pane_t5_ParamLimits

0x3f7e,	// (0x000ae318) main_mup2_pane_t5

0x3f96,	// (0x000ae330) main_mup2_pane_t6_ParamLimits

0x3f96,	// (0x000ae330) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x000b99e6) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x000b99e6) main_mup2_pane_t

0x3fc6,	// (0x000ae360) mup2_visualizer_pane_ParamLimits

0x3fc6,	// (0x000ae360) mup2_visualizer_pane

0x3ff4,	// (0x000ae38e) mup_progress_pane_cp_ParamLimits

0x3ff4,	// (0x000ae38e) mup_progress_pane_cp

0x9b51,	// (0x000b3eeb) mup_volume_pane_cp_ParamLimits

0x9b51,	// (0x000b3eeb) mup_volume_pane_cp

0x4008,	// (0x000ae3a2) mup2_visualizer_pane_g1_ParamLimits

0x4008,	// (0x000ae3a2) mup2_visualizer_pane_g1

0xc9b7,	// (0x000b6d51) mup2_visualizer_pane_g2_ParamLimits

0xc9b7,	// (0x000b6d51) mup2_visualizer_pane_g2

0x401f,	// (0x000ae3b9) mup2_visualizer_pane_g3_ParamLimits

0x401f,	// (0x000ae3b9) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x000b99f3) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x000b99f3) mup2_visualizer_pane_g

0xb7d9,	// (0x000b5b73) aid_size_cell_fmradio

0x3489,	// (0x000ad823) aid_height_parent_landcape

0xa760,	// (0x000b4afa) wml_content_pane_cp

0xa768,	// (0x000b4b02) wml_tabs_pane

0xa771,	// (0x000b4b0b) popup_wml_miniature_window

0xa779,	// (0x000b4b13) scroll_pane_cp021

0xa78d,	// (0x000b4b27) wml_content_pane_comp8

0xa0e2,	// (0x000b447c) bg_popup_sub_pane_cp05

0xc9d5,	// (0x000b6d6f) popup_wml_miniature_window_g1

0xc9dd,	// (0x000b6d77) wml_miniature_view_pane

0x402b,	// (0x000ae3c5) aid_size_wml_view

0x4033,	// (0x000ae3cd) wml_miniature_view_pane_g1

0x403c,	// (0x000ae3d6) wml_miniature_view_pane_g2

0x4045,	// (0x000ae3df) wml_miniature_view_pane_g3

0x404d,	// (0x000ae3e7) wml_miniature_view_pane_g4

0x4055,	// (0x000ae3ef) wml_miniature_view_pane_g5

0x405d,	// (0x000ae3f7) wml_miniature_view_pane_g6

0x4065,	// (0x000ae3ff) wml_miniature_view_pane_g7

0x406d,	// (0x000ae407) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x000b99fa) wml_miniature_view_pane_g

0xc9e5,	// (0x000b6d7f) background_graphic_ParamLimits

0xc9e5,	// (0x000b6d7f) background_graphic

0xc9f1,	// (0x000b6d8b) wml_tabs_2_pane

0xc9fa,	// (0x000b6d94) wml_tabs_3_pane_ParamLimits

0xc9fa,	// (0x000b6d94) wml_tabs_3_pane

0xca0c,	// (0x000b6da6) wml_tabs_4_pane_ParamLimits

0xca0c,	// (0x000b6da6) wml_tabs_4_pane

0xca22,	// (0x000b6dbc) wml_tabs_5_pane_ParamLimits

0xca22,	// (0x000b6dbc) wml_tabs_5_pane

0xca3c,	// (0x000b6dd6) wml_tabs_pane_g2_ParamLimits

0xca3c,	// (0x000b6dd6) wml_tabs_pane_g2

0xca50,	// (0x000b6dea) wml_tabs_pane_g3_ParamLimits

0xca50,	// (0x000b6dea) wml_tabs_pane_g3

0x4075,	// (0x000ae40f) wml_tabs_2_active_pane_ParamLimits

0x4075,	// (0x000ae40f) wml_tabs_2_active_pane

0x4089,	// (0x000ae423) wml_tabs_2_passive_pane_ParamLimits

0x4089,	// (0x000ae423) wml_tabs_2_passive_pane

0x409d,	// (0x000ae437) wml_tabs_3_active_pane_cp_ParamLimits

0x409d,	// (0x000ae437) wml_tabs_3_active_pane_cp

0x40b2,	// (0x000ae44c) wml_tabs_3_passive_pane_ParamLimits

0x40b2,	// (0x000ae44c) wml_tabs_3_passive_pane

0x40c5,	// (0x000ae45f) wml_tabs_3_passive_pane_cp_ParamLimits

0x40c5,	// (0x000ae45f) wml_tabs_3_passive_pane_cp

0x40dc,	// (0x000ae476) tabs_4_active_pane

0x40e4,	// (0x000ae47e) tabs_4_passive_pane

0x40ee,	// (0x000ae488) tabs_4_passive_pane_cp

0x40f6,	// (0x000ae490) tabs_4_passive_pane_cp2

0x31a4,	// (0x000ad53e) aid_height_text

0x283d,	// (0x000acbd7) mup_volume_cont_pane_ParamLimits

0x283d,	// (0x000acbd7) mup_volume_cont_pane

0x0435,	// (0x000aa7cf) aid_size_cell_pinb

0x043f,	// (0x000aa7d9) aid_size_list_pinb

0x3fe0,	// (0x000ae37a) mup2_volume_cont_pane_ParamLimits

0x3fe0,	// (0x000ae37a) mup2_volume_cont_pane

0x9b3d,	// (0x000b3ed7) mup2_volume_cont_pane_g1_ParamLimits

0x9b3d,	// (0x000b3ed7) mup2_volume_cont_pane_g1

0x00f8,	// (0x000aa492) aid_size_cell_touch_ParamLimits

0x00f8,	// (0x000aa492) aid_size_cell_touch

0x0325,	// (0x000aa6bf) touch_pane_ParamLimits

0x0325,	// (0x000aa6bf) touch_pane

0x9528,	// (0x000b38c2) main_rss2_pane

0xca6d,	// (0x000b6e07) listscroll_rss2_pane

0xca76,	// (0x000b6e10) rss2_navigation_pane

0xca7e,	// (0x000b6e18) list_rss2_pane

0xb2ac,	// (0x000b5646) scroll_pane_cp22

0xca86,	// (0x000b6e20) rss2_navigation_pane_g1

0xca8f,	// (0x000b6e29) rss2_navigation_pane_g2

0xca97,	// (0x000b6e31) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x000b9a0b) rss2_navigation_pane_g

0xca9f,	// (0x000b6e39) rss2_navigation_pane_t1

0x4100,	// (0x000ae49a) rss2_list_single_pane_ParamLimits

0x4100,	// (0x000ae49a) rss2_list_single_pane

0xcaad,	// (0x000b6e47) rss2_list_single_pane_t2

0xcabb,	// (0x000b6e55) rss2_list_single_pane_t3_ParamLimits

0xcabb,	// (0x000b6e55) rss2_list_single_pane_t3

0xcad8,	// (0x000b6e72) rss2_list_single_pane_t4

0x218c,	// (0x000ac526) smil_status_pane_g1

0x951a,	// (0x000b38b4) main_image2_pane_ParamLimits

0x951a,	// (0x000b38b4) main_image2_pane

0x3ba6,	// (0x000adf40) main_camera2_pane_g9_ParamLimits

0x3ba6,	// (0x000adf40) main_camera2_pane_g9

0x3cd4,	// (0x000ae06e) main_camera2_pane_t5_ParamLimits

0x3cd4,	// (0x000ae06e) main_camera2_pane_t5

0x9b0d,	// (0x000b3ea7) main_camera2_pane_t6_ParamLimits

0x9b0d,	// (0x000b3ea7) main_camera2_pane_t6

0x4115,	// (0x000ae4af) main_image2_pane_g1_ParamLimits

0x4115,	// (0x000ae4af) main_image2_pane_g1

0x2ee0,	// (0x000ad27a) smil2_video_pane_ParamLimits

0x2ee0,	// (0x000ad27a) smil2_video_pane

0x94d0,	// (0x000b386a) aid_zoom_text_primary_cp

0x9510,	// (0x000b38aa) popup_preview_fixed_window

0xa6c9,	// (0x000b4a63) im_reading_pane_g1

0x3a1d,	// (0x000addb7) cams2_bc_adjust_pane_cp_ParamLimits

0x3a1d,	// (0x000addb7) cams2_bc_adjust_pane_cp

0x3d03,	// (0x000ae09d) cams2_bc_adjust_pane_ParamLimits

0x3d03,	// (0x000ae09d) cams2_bc_adjust_pane

0xcf64,	// (0x000b72fe) cams2_bc_adjust_pane_g1

0x9b76,	// (0x000b3f10) cams2_slider_pane

0x9b7f,	// (0x000b3f19) cams2_slider_pane_g1

0x9b88,	// (0x000b3f22) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x000b9a12) cams2_slider_pane_g

0x052d,	// (0x000aa8c7) calc_display_pane_ParamLimits

0x0552,	// (0x000aa8ec) calc_paper_pane_ParamLimits

0x0575,	// (0x000aa90f) grid_calc_pane_ParamLimits

0x9a32,	// (0x000b3dcc) popup_clock_digital_window_t1_ParamLimits

0xb776,	// (0x000b5b10) main_image_pane_t1

0x050f,	// (0x000aa8a9) aid_size_cell_calc_ParamLimits

0x050f,	// (0x000aa8a9) aid_size_cell_calc

0x34e1,	// (0x000ad87b) popup_blid_sat_info2_window_ParamLimits

0x34e1,	// (0x000ad87b) popup_blid_sat_info2_window

0xcaee,	// (0x000b6e88) aid_size_cell_blid

0xcaf6,	// (0x000b6e90) bg_popup_window_pane_cp07

0xcb19,	// (0x000b6eb3) grid_popup_blid_pane

0xcb23,	// (0x000b6ebd) heading_pane_cp05_ParamLimits

0xcb23,	// (0x000b6ebd) heading_pane_cp05

0xcbed,	// (0x000b6f87) cell_popup_blid_pane_ParamLimits

0xcbed,	// (0x000b6f87) cell_popup_blid_pane

0xcc11,	// (0x000b6fab) cell_popup_blid_pane_g1

0xcc19,	// (0x000b6fb3) cell_popup_blid_pane_t1

0x3fb0,	// (0x000ae34a) mup2_indicator_pane_ParamLimits

0x3fb0,	// (0x000ae34a) mup2_indicator_pane

0xa5d0,	// (0x000b496a) mup2_visualizer_osc_pane

0xc9c3,	// (0x000b6d5d) mup2_visualizer_spec_pane_ParamLimits

0xc9c3,	// (0x000b6d5d) mup2_visualizer_spec_pane

0x412b,	// (0x000ae4c5) mup2_spec_half_pane

0x4134,	// (0x000ae4ce) mup2_spec_half_pane_cp

0x413c,	// (0x000ae4d6) mup2_spec_bar_pane_ParamLimits

0x413c,	// (0x000ae4d6) mup2_spec_bar_pane

0xc964,	// (0x000b6cfe) mup2_spec_bar_pane_g1

0xc96e,	// (0x000b6d08) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x000b9985) mup2_spec_bar_pane_g

0x415c,	// (0x000ae4f6) mup2_osc_middle_pane

0xc980,	// (0x000b6d1a) mup2_visualizer_osc_pane_g1

0x9552,	// (0x000b38ec) popup_number_entry_window_t1_ParamLimits

0x9565,	// (0x000b38ff) popup_number_entry_window_t2_ParamLimits

0x9577,	// (0x000b3911) popup_number_entry_window_t3_ParamLimits

0x0377,	// (0x000aa711) popup_number_entry_window_t5_ParamLimits

0x0377,	// (0x000aa711) popup_number_entry_window_t5

0xf0af,	// (0x000b9449) popup_number_entry_window_t_ParamLimits

0x9589,	// (0x000b3923) text_title_cp2_ParamLimits

0x9a71,	// (0x000b3e0b) aid_hotspot_pointer_text2_pane

0x9a8b,	// (0x000b3e25) main_viewer_pane_g9_ParamLimits

0x9a8b,	// (0x000b3e25) main_viewer_pane_g9

0xadb9,	// (0x000b5153) cale_month_pane_t1_ParamLimits

0xadf6,	// (0x000b5190) bg_cale_pane_ParamLimits

0xae0e,	// (0x000b51a8) list_cale_pane_ParamLimits

0xae1f,	// (0x000b51b9) listscroll_cale_day_pane_t1

0xae31,	// (0x000b51cb) scroll_pane_cp09_ParamLimits

0x286f,	// (0x000acc09) main_mup_eq_pane_t1_ParamLimits

0x286f,	// (0x000acc09) main_mup_eq_pane_t1

0x2889,	// (0x000acc23) main_mup_eq_pane_t2_ParamLimits

0x2889,	// (0x000acc23) main_mup_eq_pane_t2

0x28a3,	// (0x000acc3d) main_mup_eq_pane_t3_ParamLimits

0x28a3,	// (0x000acc3d) main_mup_eq_pane_t3

0x28bf,	// (0x000acc59) main_mup_eq_pane_t4_ParamLimits

0x28bf,	// (0x000acc59) main_mup_eq_pane_t4

0x28db,	// (0x000acc75) main_mup_eq_pane_t5_ParamLimits

0x28db,	// (0x000acc75) main_mup_eq_pane_t5

0x28f7,	// (0x000acc91) main_mup_eq_pane_t6_ParamLimits

0x28f7,	// (0x000acc91) main_mup_eq_pane_t6

0x290b,	// (0x000acca5) main_mup_eq_pane_t7_ParamLimits

0x290b,	// (0x000acca5) main_mup_eq_pane_t7

0x291f,	// (0x000accb9) main_mup_eq_pane_t8_ParamLimits

0x291f,	// (0x000accb9) main_mup_eq_pane_t8

0x2933,	// (0x000acccd) main_mup_eq_pane_t9_ParamLimits

0x2933,	// (0x000acccd) main_mup_eq_pane_t9

0x294d,	// (0x000acce7) main_mup_eq_pane_t10_ParamLimits

0x294d,	// (0x000acce7) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x000b97d4) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x000b97d4) main_mup_eq_pane_t

0x29fc,	// (0x000acd96) mup_equalizer_pane_cp5_ParamLimits

0x2a10,	// (0x000acdaa) mup_equalizer_pane_cp6_ParamLimits

0x2a24,	// (0x000acdbe) mup_equalizer_pane_cp7_ParamLimits

0x9528,	// (0x000b38c2) main_gallery_pane

0xc989,	// (0x000b6d23) smil2_volume_pane

0xc991,	// (0x000b6d2b) smil_status_volume_pane_g1_ParamLimits

0xc9a4,	// (0x000b6d3e) smil_status_volume_pane_g2_ParamLimits

0x9aeb,	// (0x000b3e85) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x000b998a) smil_status_volume_pane_g_ParamLimits

0xcaf6,	// (0x000b6e90) bg_popup_window_pane_cp07_ParamLimits

0xcb04,	// (0x000b6e9e) blid_firmament_pane

0x4165,	// (0x000ae4ff) aid_size_cell_gallery_ParamLimits

0x4165,	// (0x000ae4ff) aid_size_cell_gallery

0x417b,	// (0x000ae515) grid_gallery_pane_ParamLimits

0x417b,	// (0x000ae515) grid_gallery_pane

0x4194,	// (0x000ae52e) cell_gallery_pane_ParamLimits

0x4194,	// (0x000ae52e) cell_gallery_pane

0xcc27,	// (0x000b6fc1) bg_cell_gallery_focus_pane_ParamLimits

0xcc27,	// (0x000b6fc1) bg_cell_gallery_focus_pane

0xcc39,	// (0x000b6fd3) cell_gallery_pane_g1_ParamLimits

0xcc39,	// (0x000b6fd3) cell_gallery_pane_g1

0x41dd,	// (0x000ae577) cell_gallery_pane_g2_ParamLimits

0x41dd,	// (0x000ae577) cell_gallery_pane_g2

0x41ea,	// (0x000ae584) cell_gallery_pane_g3_ParamLimits

0x41ea,	// (0x000ae584) cell_gallery_pane_g3

0xcc45,	// (0x000b6fdf) cell_gallery_pane_g4_ParamLimits

0xcc45,	// (0x000b6fdf) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x000b9a38) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x000b9a38) cell_gallery_pane_g

0xcc51,	// (0x000b6feb) bg_cell_gallery_focus_pane_g1

0xcc59,	// (0x000b6ff3) bg_cell_gallery_focus_pane_g2

0xcc61,	// (0x000b6ffb) bg_cell_gallery_focus_pane_g3

0xcc69,	// (0x000b7003) bg_cell_gallery_focus_pane_g4

0xcc71,	// (0x000b700b) bg_cell_gallery_focus_pane_g5

0xcc79,	// (0x000b7013) bg_cell_gallery_focus_pane_g6

0xcc81,	// (0x000b701b) bg_cell_gallery_focus_pane_g7

0xcc89,	// (0x000b7023) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x000b9a41) bg_cell_gallery_focus_pane_g

0xcc91,	// (0x000b702b) aid_firma_cardinal

0xcca5,	// (0x000b703f) blid_firmament_pane_t1

0xccbc,	// (0x000b7056) blid_firmament_pane_t2

0xccd3,	// (0x000b706d) blid_firmament_pane_t3

0xccea,	// (0x000b7084) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x000b9a52) blid_firmament_pane_t

0xcd01,	// (0x000b709b) blid_sat_info_pane

0xcd11,	// (0x000b70ab) blid_sat_info_pane_g1

0xcd11,	// (0x000b70ab) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x000b9a5b) blid_sat_info_pane_g

0xcd1b,	// (0x000b70b5) blid_sat_info_pane_t1

0xcd29,	// (0x000b70c3) smil2_volume_content_pane

0xcd32,	// (0x000b70cc) smil2_volume_pane_g1

0xa483,	// (0x000b481d) smil2_volume_content_pane_g1

0xcd3a,	// (0x000b70d4) smil2_volume_content_pane_g2

0xcd43,	// (0x000b70dd) smil2_volume_content_pane_g3

0xcd4c,	// (0x000b70e6) smil2_volume_content_pane_g4

0xcd55,	// (0x000b70ef) smil2_volume_content_pane_g5

0xcd5e,	// (0x000b70f8) smil2_volume_content_pane_g6

0xcd67,	// (0x000b7101) smil2_volume_content_pane_g7

0xcd70,	// (0x000b710a) smil2_volume_content_pane_g8

0xcd79,	// (0x000b7113) smil2_volume_content_pane_g9

0xcd82,	// (0x000b711c) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x000b9a60) smil2_volume_content_pane_g

0x0b15,	// (0x000aaeaf) cale_week_day_heading_pane_t1_ParamLimits

0x0b3f,	// (0x000aaed9) cale_week_day_heading_pane_t2_ParamLimits

0x0b6e,	// (0x000aaf08) cale_week_day_heading_pane_t3_ParamLimits

0x0b9d,	// (0x000aaf37) cale_week_day_heading_pane_t4_ParamLimits

0x0bcc,	// (0x000aaf66) cale_week_day_heading_pane_t5_ParamLimits

0x0c03,	// (0x000aaf9d) cale_week_day_heading_pane_t6_ParamLimits

0x0c3a,	// (0x000aafd4) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x000b9550) cale_week_day_heading_pane_t_ParamLimits

0xa575,	// (0x000b490f) bg_cale_side_pane_ParamLimits

0x0c64,	// (0x000aaffe) cale_week_time_pane_t1_ParamLimits

0x0c7e,	// (0x000ab018) cale_week_time_pane_t2_ParamLimits

0x0c98,	// (0x000ab032) cale_week_time_pane_t3_ParamLimits

0x0cb2,	// (0x000ab04c) cale_week_time_pane_t4_ParamLimits

0x0ccc,	// (0x000ab066) cale_week_time_pane_t5_ParamLimits

0x0ce6,	// (0x000ab080) cale_week_time_pane_t6_ParamLimits

0x0d00,	// (0x000ab09a) cale_week_time_pane_t7_ParamLimits

0x0d1a,	// (0x000ab0b4) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x000b955f) cale_week_time_pane_t_ParamLimits

0x0d34,	// (0x000ab0ce) cell_cale_week_pane_g2_ParamLimits

0xa575,	// (0x000b490f) bg_cale_side_pane_cp01_ParamLimits

0x1f69,	// (0x000ac303) cale_month_week_pane_t1_ParamLimits

0x1f82,	// (0x000ac31c) cale_month_week_pane_t2_ParamLimits

0x1f9b,	// (0x000ac335) cale_month_week_pane_t3_ParamLimits

0x1fb4,	// (0x000ac34e) cale_month_week_pane_t4_ParamLimits

0x1fcd,	// (0x000ac367) cale_month_week_pane_t5_ParamLimits

0x1fe6,	// (0x000ac380) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x000b9634) cale_month_week_pane_t_ParamLimits

0x99ae,	// (0x000b3d48) cell_cale_month_pane_g1_ParamLimits

0x9528,	// (0x000b38c2) main_cale_event_viewer_pane

0x94a2,	// (0x000b383c) listscroll_cale_event_viewer_pane

0xcd8b,	// (0x000b7125) list_cale_ev_pane

0xcd93,	// (0x000b712d) scroll_pane_cp023

0xcd9f,	// (0x000b7139) field_cale_ev_pane_ParamLimits

0xcd9f,	// (0x000b7139) field_cale_ev_pane

0xcdbd,	// (0x000b7157) field_cale_ev_content_pane_ParamLimits

0xcdbd,	// (0x000b7157) field_cale_ev_content_pane

0xcdc9,	// (0x000b7163) field_cale_ev_pane_g1_ParamLimits

0xcdc9,	// (0x000b7163) field_cale_ev_pane_g1

0xcdd5,	// (0x000b716f) field_cale_ev_pane_g2_ParamLimits

0xcdd5,	// (0x000b716f) field_cale_ev_pane_g2

0xcded,	// (0x000b7187) field_cale_ev_pane_g3_ParamLimits

0xcded,	// (0x000b7187) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x000b9a75) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x000b9a75) field_cale_ev_pane_g

0xce05,	// (0x000b719f) field_cale_ev_pane_t1_ParamLimits

0xce05,	// (0x000b719f) field_cale_ev_pane_t1

0xce1c,	// (0x000b71b6) field_cale_ev_content_pane_t1_ParamLimits

0xce1c,	// (0x000b71b6) field_cale_ev_content_pane_t1

0xb65c,	// (0x000b59f6) bg_button_pane_cp01

0x0842,	// (0x000aabdc) listscroll_cale_week_pane_ParamLimits

0xa520,	// (0x000b48ba) popup_toolbar_window_cp01

0xa546,	// (0x000b48e0) listscroll_cale_week_pane_t1_ParamLimits

0x0842,	// (0x000aabdc) listscroll_cale_day_pane_ParamLimits

0xa520,	// (0x000b48ba) popup_toolbar_window_cp02

0xae1f,	// (0x000b51b9) listscroll_cale_day_pane_t1_ParamLimits

0x34a7,	// (0x000ad841) main_cale_month_pane_ParamLimits

0x9ad6,	// (0x000b3e70) popup_toolbar_window_cp03_ParamLimits

0x9ad6,	// (0x000b3e70) popup_toolbar_window_cp03

0x2da8,	// (0x000ad142) main_image_pane_g2_ParamLimits

0x2da8,	// (0x000ad142) main_image_pane_g2

0x2db9,	// (0x000ad153) main_image_pane_g3_ParamLimits

0x2db9,	// (0x000ad153) main_image_pane_g3

0x0002,

0xf4cc,	// (0x000b9866) main_image_pane_g_ParamLimits

0xf4cc,	// (0x000b9866) main_image_pane_g

0xb776,	// (0x000b5b10) main_image_pane_t1_ParamLimits

0x2dca,	// (0x000ad164) main_image_pane_t2_ParamLimits

0x2dca,	// (0x000ad164) main_image_pane_t2

0x2ddc,	// (0x000ad176) main_image_pane_t3_ParamLimits

0x2ddc,	// (0x000ad176) main_image_pane_t3

0x2e04,	// (0x000ad19e) main_image_pane_t4_ParamLimits

0x2e04,	// (0x000ad19e) main_image_pane_t4

0x0003,

0xf4d3,	// (0x000b986d) main_image_pane_t_ParamLimits

0xf4d3,	// (0x000b986d) main_image_pane_t

0x2e24,	// (0x000ad1be) popup_image_details_window_cp01

0x2e2e,	// (0x000ad1c8) popup_toobar_trans_pane_cp01_ParamLimits

0x2e2e,	// (0x000ad1c8) popup_toobar_trans_pane_cp01

0x35c0,	// (0x000ad95a) popup_image_details_window_ParamLimits

0x35c0,	// (0x000ad95a) popup_image_details_window

0x9aa9,	// (0x000b3e43) popup_image_focus_window

0x39d7,	// (0x000add71) camera2_autofocus_pane_ParamLimits

0x39d7,	// (0x000add71) camera2_autofocus_pane

0x94a2,	// (0x000b383c) bg_popup_sub_pane_cp06

0xce3a,	// (0x000b71d4) popup_image_focus_window_g1

0xce42,	// (0x000b71dc) popup_image_focus_window_g2

0xce4a,	// (0x000b71e4) popup_image_focus_window_g3

0xce52,	// (0x000b71ec) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x000b9a7c) popup_image_focus_window_g

0xce5a,	// (0x000b71f4) popup_image_focus_window_t1

0xce68,	// (0x000b7202) popup_image_focus_window_t2

0xce78,	// (0x000b7212) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x000b9a85) popup_image_focus_window_t

0xce86,	// (0x000b7220) camera2_autofocus_pane_g1

0xa7a8,	// (0x000b4b42) bg_tb_trans_pane_cp01

0xce94,	// (0x000b722e) popup_image_details_window_g1

0xcea7,	// (0x000b7241) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x000b9a97) popup_image_details_window_g

0xced0,	// (0x000b726a) popup_image_details_window_t1

0xcee2,	// (0x000b727c) popup_image_details_window_t2

0xcefb,	// (0x000b7295) popup_image_details_window_t3

0xcf0f,	// (0x000b72a9) popup_image_details_window_t4

0xcf2a,	// (0x000b72c4) popup_image_details_window_t5

0x0004,

0xf704,	// (0x000b9a9e) popup_image_details_window_t

0xa3ee,	// (0x000b4788) bg_calc_paper_pane_ParamLimits

0x9528,	// (0x000b38c2) grid_highlight_pane_cp013

0x991e,	// (0x000b3cb8) list_calc_pane_ParamLimits

0x9930,	// (0x000b3cca) scroll_pane_cp024

0xa402,	// (0x000b479c) bg_calc_display_pane_ParamLimits

0x0673,	// (0x000aaa0d) calc_display_pane_t1_ParamLimits

0x0688,	// (0x000aaa22) calc_display_pane_t2_ParamLimits

0x9938,	// (0x000b3cd2) calc_display_pane_t3_ParamLimits

0xf136,	// (0x000b94d0) calc_display_pane_t_ParamLimits

0x0748,	// (0x000aaae2) cell_calc_pane_g2

0x0001,

0xf153,	// (0x000b94ed) cell_calc_pane_g

0x0751,	// (0x000aaaeb) cell_calc_pane_t1

0xa461,	// (0x000b47fb) grid_highlight_pane_cp02_ParamLimits

0xa477,	// (0x000b4811) toolbar_button_pane_cp01_ParamLimits

0xa477,	// (0x000b4811) toolbar_button_pane_cp01

0xb7bb,	// (0x000b5b55) temp_image_control_pane_ParamLimits

0xb7bb,	// (0x000b5b55) temp_image_control_pane

0x951a,	// (0x000b38b4) main_mp3_pane

0xcf44,	// (0x000b72de) temp_image_control_pane_g1_ParamLimits

0xcf44,	// (0x000b72de) temp_image_control_pane_g1

0xcf52,	// (0x000b72ec) temp_image_control_pane_g2_ParamLimits

0xcf52,	// (0x000b72ec) temp_image_control_pane_g2

0xcf6c,	// (0x000b7306) temp_image_control_pane_g3_ParamLimits

0xcf6c,	// (0x000b7306) temp_image_control_pane_g3

0x4227,	// (0x000ae5c1) temp_image_control_pane_g4_ParamLimits

0x4227,	// (0x000ae5c1) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x000b9aa9) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x000b9aa9) temp_image_control_pane_g

0xcf44,	// (0x000b72de) main_mp3_pane_g1

0x423a,	// (0x000ae5d4) main_mp3_pane_g2

0x0007,

0xf718,	// (0x000b9ab2) main_mp3_pane_g

0xcfaf,	// (0x000b7349) main_mp3_pane_t1

0xa5d8,	// (0x000b4972) main_camera_pane_g8_ParamLimits

0xa5d8,	// (0x000b4972) main_camera_pane_g8

0x102e,	// (0x000ab3c8) main_video_pane_g7_ParamLimits

0x102e,	// (0x000ab3c8) main_video_pane_g7

0x9b2b,	// (0x000b3ec5) main_camera2_pane_t7_ParamLimits

0x9b2b,	// (0x000b3ec5) main_camera2_pane_t7

0xa720,	// (0x000b4aba) scroll_pane_cp025_ParamLimits

0xa720,	// (0x000b4aba) scroll_pane_cp025

0xa734,	// (0x000b4ace) scroll_pane_cp026_ParamLimits

0xa734,	// (0x000b4ace) scroll_pane_cp026

0xa743,	// (0x000b4add) wml_content_pane_ParamLimits

0x9528,	// (0x000b38c2) main_touch_calib_pane

0x430e,	// (0x000ae6a8) main_touch_calib_pane_g1

0x4320,	// (0x000ae6ba) main_touch_calib_pane_g2

0x4332,	// (0x000ae6cc) main_touch_calib_pane_g3

0x4344,	// (0x000ae6de) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x000b9ad0) main_touch_calib_pane_g

0x4356,	// (0x000ae6f0) main_touch_calib_pane_t1

0x4370,	// (0x000ae70a) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x000b9ad9) main_touch_calib_pane_t

0xb388,	// (0x000b5722) mup_progress_pane_cp02

0xb3bd,	// (0x000b5757) navi_pane_g1

0xb478,	// (0x000b5812) navi_pane_mp_t3

0x951a,	// (0x000b38b4) main_mp3_pane_ParamLimits

0x3745,	// (0x000adadf) navi_pane_ParamLimits

0xcf44,	// (0x000b72de) main_mp3_pane_g1_ParamLimits

0x423a,	// (0x000ae5d4) main_mp3_pane_g2_ParamLimits

0x4248,	// (0x000ae5e2) main_mp3_pane_g3_ParamLimits

0x4248,	// (0x000ae5e2) main_mp3_pane_g3

0x4256,	// (0x000ae5f0) main_mp3_pane_g4_ParamLimits

0x4256,	// (0x000ae5f0) main_mp3_pane_g4

0xcf7c,	// (0x000b7316) main_mp3_pane_g5_ParamLimits

0xcf7c,	// (0x000b7316) main_mp3_pane_g5

0xcf8a,	// (0x000b7324) main_mp3_pane_g6_ParamLimits

0xcf8a,	// (0x000b7324) main_mp3_pane_g6

0xcf97,	// (0x000b7331) main_mp3_pane_g7_ParamLimits

0xcf97,	// (0x000b7331) main_mp3_pane_g7

0xcfa3,	// (0x000b733d) main_mp3_pane_g8_ParamLimits

0xcfa3,	// (0x000b733d) main_mp3_pane_g8

0xf718,	// (0x000b9ab2) main_mp3_pane_g_ParamLimits

0x4262,	// (0x000ae5fc) main_mp3_pane_t2

0x4270,	// (0x000ae60a) main_mp3_pane_t3

0xcfbd,	// (0x000b7357) main_mp3_pane_t4

0xcfcb,	// (0x000b7365) main_mp3_pane_t5

0x0005,

0xf729,	// (0x000b9ac3) main_mp3_pane_t

0xcfd9,	// (0x000b7373) mup_progress_pane_cp01

0x94d0,	// (0x000b386a) aid_zoom_text_secondary2

0xcd8b,	// (0x000b7125) list_cale_ev2_pane

0xcd93,	// (0x000b712d) scroll_pane_cp023_ParamLimits

0x43c6,	// (0x000ae760) field_cale_ev2_pane_ParamLimits

0x43c6,	// (0x000ae760) field_cale_ev2_pane

0x43e6,	// (0x000ae780) field_cale_ev2_pane_g1_ParamLimits

0x43e6,	// (0x000ae780) field_cale_ev2_pane_g1

0x43f2,	// (0x000ae78c) field_cale_ev2_pane_g2_ParamLimits

0x43f2,	// (0x000ae78c) field_cale_ev2_pane_g2

0x440a,	// (0x000ae7a4) field_cale_ev2_pane_g3_ParamLimits

0x440a,	// (0x000ae7a4) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x000b9ae4) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x000b9ae4) field_cale_ev2_pane_g

0xa7c2,	// (0x000b4b5c) field_cale_ev2_pane_t1_ParamLimits

0xa7c2,	// (0x000b4b5c) field_cale_ev2_pane_t1

0xa7d9,	// (0x000b4b73) field_cale_ev2_pane_t2_ParamLimits

0xa7d9,	// (0x000b4b73) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x000b9aed) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x000b9aed) field_cale_ev2_pane_t

0x2c5d,	// (0x000acff7) main_postcard_pane_g5_ParamLimits

0x2c5d,	// (0x000acff7) main_postcard_pane_g5

0x2c73,	// (0x000ad00d) main_postcard_pane_g6_ParamLimits

0x2c73,	// (0x000ad00d) main_postcard_pane_g6

0x0dfa,	// (0x000ab194) camera2_autofocus_pane_cp_ParamLimits

0x0dfa,	// (0x000ab194) camera2_autofocus_pane_cp

0x951a,	// (0x000b38b4) main_mup3_pane

0x4446,	// (0x000ae7e0) main_mup3_pane_g1_ParamLimits

0x4446,	// (0x000ae7e0) main_mup3_pane_g1

0x4468,	// (0x000ae802) main_mup3_pane_g2_ParamLimits

0x4468,	// (0x000ae802) main_mup3_pane_g2

0x44e6,	// (0x000ae880) main_mup3_pane_g3_ParamLimits

0x44e6,	// (0x000ae880) main_mup3_pane_g3

0x452c,	// (0x000ae8c6) main_mup3_pane_g4_ParamLimits

0x452c,	// (0x000ae8c6) main_mup3_pane_g4

0x4572,	// (0x000ae90c) main_mup3_pane_g5_ParamLimits

0x4572,	// (0x000ae90c) main_mup3_pane_g5

0x45b8,	// (0x000ae952) main_mup3_pane_g6_ParamLimits

0x45b8,	// (0x000ae952) main_mup3_pane_g6

0xd001,	// (0x000b739b) main_mup3_pane_g7_ParamLimits

0xd001,	// (0x000b739b) main_mup3_pane_g7

0x0007,

0xf763,	// (0x000b9afd) main_mup3_pane_g_ParamLimits

0xf763,	// (0x000b9afd) main_mup3_pane_g

0x4636,	// (0x000ae9d0) main_mup3_pane_t1_ParamLimits

0x4636,	// (0x000ae9d0) main_mup3_pane_t1

0x46aa,	// (0x000aea44) main_mup3_pane_t2_ParamLimits

0x46aa,	// (0x000aea44) main_mup3_pane_t2

0x477e,	// (0x000aeb18) main_mup3_pane_t4_ParamLimits

0x477e,	// (0x000aeb18) main_mup3_pane_t4

0x47d4,	// (0x000aeb6e) main_mup3_pane_t5_ParamLimits

0x47d4,	// (0x000aeb6e) main_mup3_pane_t5

0x4890,	// (0x000aec2a) main_mup3_pane_t6_ParamLimits

0x4890,	// (0x000aec2a) main_mup3_pane_t6

0x0005,

0xf774,	// (0x000b9b0e) main_mup3_pane_t_ParamLimits

0xf774,	// (0x000b9b0e) main_mup3_pane_t

0x4948,	// (0x000aece2) mup3_progress_pane_ParamLimits

0x4948,	// (0x000aece2) mup3_progress_pane

0x49de,	// (0x000aed78) popup_mup3_control_window_ParamLimits

0x49de,	// (0x000aed78) popup_mup3_control_window

0xd00f,	// (0x000b73a9) popup_mup3_text_window

0x4a10,	// (0x000aedaa) mup3_progress_pane_t1

0x4a2f,	// (0x000aedc9) mup3_progress_pane_t2

0xd017,	// (0x000b73b1) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x000b9b1b) mup3_progress_pane_t

0xd034,	// (0x000b73ce) mup_progress_pane_cp03

0x94a2,	// (0x000b383c) bg_tb_trans_pane_cp04

0x4a4e,	// (0x000aede8) mup3_volume_pane

0x4a56,	// (0x000aedf0) popup_mup3_control_window_g1

0x4a5f,	// (0x000aedf9) mup3_volume_pane_g1

0x4a68,	// (0x000aee02) mup3_volume_pane_g2

0x4a71,	// (0x000aee0b) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x000b9b22) mup3_volume_pane_g

0x94a2,	// (0x000b383c) bg_tb_trans_pane_cp03

0xd044,	// (0x000b73de) popup_mup3_text_window_g1

0xd04c,	// (0x000b73e6) popup_mup3_text_window_t1

0xa44a,	// (0x000b47e4) list_calc_item_pane_g1_ParamLimits

0xca64,	// (0x000b6dfe) mup_volume_pane_cp_g1

0x438a,	// (0x000ae724) main_touch_calib_pane_t3

0x439e,	// (0x000ae738) main_touch_calib_pane_t4

0x43b2,	// (0x000ae74c) main_touch_calib_pane_t5

0x94ac,	// (0x000b3846) aid_cell_size_toolbar2

0x94b4,	// (0x000b384e) aid_popup3_width_pane

0x94c0,	// (0x000b385a) aid_zoom_text_msg_primary

0x0dd9,	// (0x000ab173) vorec_t7

0xa40e,	// (0x000b47a8) bg_calc_paper_pane_g1_ParamLimits

0xa41a,	// (0x000b47b4) bg_calc_paper_pane_g2_ParamLimits

0xa426,	// (0x000b47c0) bg_calc_paper_pane_g3_ParamLimits

0xa432,	// (0x000b47cc) bg_calc_paper_pane_g4_ParamLimits

0xa43e,	// (0x000b47d8) bg_calc_paper_pane_g5_ParamLimits

0x06d2,	// (0x000aaa6c) bg_calc_paper_pane_g6_ParamLimits

0x06e1,	// (0x000aaa7b) bg_calc_paper_pane_g7_ParamLimits

0x06f0,	// (0x000aaa8a) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x000b94d7) bg_calc_paper_pane_g_ParamLimits

0x0703,	// (0x000aaa9d) calc_bg_paper_pane_g9_ParamLimits

0x0f45,	// (0x000ab2df) image_qvga_pane_ParamLimits

0x0f45,	// (0x000ab2df) image_qvga_pane

0xa33d,	// (0x000b46d7) bg_popup_sub_pane_cp04_ParamLimits

0xb6f2,	// (0x000b5a8c) popup_mup_playback_window_g1_ParamLimits

0xb6fe,	// (0x000b5a98) popup_mup_playback_window_t1_ParamLimits

0xb713,	// (0x000b5aad) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x000b9861) popup_mup_playback_window_t_ParamLimits

0x3eca,	// (0x000ae264) main_mup2_pane_g3_ParamLimits

0x3eca,	// (0x000ae264) main_mup2_pane_g3

0x1337,	// (0x000ab6d1) popup_toolbar_window_cp04

0xbb13,	// (0x000b5ead) popup_call2_audio_second_window_g3_ParamLimits

0xbb13,	// (0x000b5ead) popup_call2_audio_second_window_g3

0xbf1d,	// (0x000b62b7) popup_call2_audio_first_window_g4_ParamLimits

0xbf1d,	// (0x000b62b7) popup_call2_audio_first_window_g4

0xc59c,	// (0x000b6936) popup_call2_audio_in_window_g4_ParamLimits

0xc59c,	// (0x000b6936) popup_call2_audio_in_window_g4

0x2d8a,	// (0x000ad124) aid_area_sk_bg_cut_ParamLimits

0x2d8a,	// (0x000ad124) aid_area_sk_bg_cut

0xb728,	// (0x000b5ac2) aid_area_sk_bg_cut_2_ParamLimits

0xb728,	// (0x000b5ac2) aid_area_sk_bg_cut_2

0x41cd,	// (0x000ae567) aid_placing_details_win

0x41d5,	// (0x000ae56f) aid_placing_details_win_2

0xce86,	// (0x000b7220) camera2_autofocus_pane_g1_ParamLimits

0x02be,	// (0x000aa658) popup_fixed_preview_cale_window_ParamLimits

0x02be,	// (0x000aa658) popup_fixed_preview_cale_window

0xb4f6,	// (0x000b5890) navi_slider_pane_g3

0xb4ff,	// (0x000b5899) navi_slider_pane_g4

0xb508,	// (0x000b58a2) navi_slider_pane_g5

0xb4f6,	// (0x000b5890) navi_slider_pane_g6

0x9a58,	// (0x000b3df2) navi_slider_pane_g7

0xb629,	// (0x000b59c3) mup_scale_pane_g3

0xb632,	// (0x000b59cc) mup_scale_pane_g4

0xb63b,	// (0x000b59d5) mup_scale_pane_g5

0x2a38,	// (0x000acdd2) mup_scale_pane_g6

0x2a41,	// (0x000acddb) mup_scale_pane_g7

0xb4f6,	// (0x000b5890) cams2_slider_pane_g3

0xcae6,	// (0x000b6e80) cams2_slider_pane_g4

0x9b91,	// (0x000b3f2b) cams2_slider_pane_g5

0xb4f6,	// (0x000b5890) cams2_slider_pane_g6

0x9b99,	// (0x000b3f33) cams2_slider_pane_g7

0xcd11,	// (0x000b70ab) camera2_autofocus_pane_cp_g1

0xc8fd,	// (0x000b6c97) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8fd,	// (0x000b6c97) bg_popup_preview_window_pane_cp02

0xd05a,	// (0x000b73f4) list_fp_cale_pane_ParamLimits

0xd05a,	// (0x000b73f4) list_fp_cale_pane

0xd066,	// (0x000b7400) popup_fixed_preview_cale_window_t1_ParamLimits

0xd066,	// (0x000b7400) popup_fixed_preview_cale_window_t1

0x4a7a,	// (0x000aee14) popup_fixed_preview_cale_window_t2_ParamLimits

0x4a7a,	// (0x000aee14) popup_fixed_preview_cale_window_t2

0x4a8f,	// (0x000aee29) popup_fixed_preview_cale_window_t3_ParamLimits

0x4a8f,	// (0x000aee29) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x000b9b29) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x000b9b29) popup_fixed_preview_cale_window_t

0x4aa4,	// (0x000aee3e) list_single_fp_cale_pane_ParamLimits

0x4aa4,	// (0x000aee3e) list_single_fp_cale_pane

0xd084,	// (0x000b741e) list_single_fp_cale_pane_g1_ParamLimits

0xd084,	// (0x000b741e) list_single_fp_cale_pane_g1

0xd090,	// (0x000b742a) list_single_fp_cale_pane_g2_ParamLimits

0xd090,	// (0x000b742a) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x000b9b30) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x000b9b30) list_single_fp_cale_pane_g

0xd0a9,	// (0x000b7443) list_single_fp_cale_pane_t1_ParamLimits

0xd0a9,	// (0x000b7443) list_single_fp_cale_pane_t1

0xd0bb,	// (0x000b7455) list_single_fp_cale_pane_t2_ParamLimits

0xd0bb,	// (0x000b7455) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x000b9b37) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x000b9b37) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9528,	// (0x000b38c2) main_dialer_pane

0x4ab9,	// (0x000aee53) aid_cell_size_keypad

0x4ac3,	// (0x000aee5d) dialer_ne_pane

0x4acb,	// (0x000aee65) grid_dialer_command_1_pane

0x4ad3,	// (0x000aee6d) grid_dialer_command_2_pane

0x4adb,	// (0x000aee75) grid_dialer_keypad_pane

0x4aed,	// (0x000aee87) bg_popup_call_pane_cp06_ParamLimits

0x4aed,	// (0x000aee87) bg_popup_call_pane_cp06

0x4af9,	// (0x000aee93) dialer_ne_clear_pane_ParamLimits

0x4af9,	// (0x000aee93) dialer_ne_clear_pane

0xd0ee,	// (0x000b7488) dialer_ne_pane_g1

0xd0f6,	// (0x000b7490) dialer_ne_pane_t1_ParamLimits

0xd0f6,	// (0x000b7490) dialer_ne_pane_t1

0x4b05,	// (0x000aee9f) dialer_ne_pane_t2_ParamLimits

0x4b05,	// (0x000aee9f) dialer_ne_pane_t2

0x4b2f,	// (0x000aeec9) dialer_ne_pane_t3_ParamLimits

0x4b2f,	// (0x000aeec9) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x000b9b3c) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x000b9b3c) dialer_ne_pane_t

0x4b5f,	// (0x000aeef9) dialer_ne_pane_t3_copy1_ParamLimits

0x4b5f,	// (0x000aeef9) dialer_ne_pane_t3_copy1

0x4b8e,	// (0x000aef28) cell_dialer_keypad_pane_ParamLimits

0x4b8e,	// (0x000aef28) cell_dialer_keypad_pane

0x4ba5,	// (0x000aef3f) cell_dialer_command_1_pane_ParamLimits

0x4ba5,	// (0x000aef3f) cell_dialer_command_1_pane

0x4bbb,	// (0x000aef55) cell_dialer_command_2_pane_ParamLimits

0x4bbb,	// (0x000aef55) cell_dialer_command_2_pane

0xd108,	// (0x000b74a2) bg_button_pane_cp02_ParamLimits

0xd108,	// (0x000b74a2) bg_button_pane_cp02

0x4bca,	// (0x000aef64) cell_dialer_keypad_pane_g1_ParamLimits

0x4bca,	// (0x000aef64) cell_dialer_keypad_pane_g1

0xd108,	// (0x000b74a2) bg_button_pane_cp03_ParamLimits

0xd108,	// (0x000b74a2) bg_button_pane_cp03

0x4bde,	// (0x000aef78) cell_dialer_command_1_pane_g1_ParamLimits

0x4bde,	// (0x000aef78) cell_dialer_command_1_pane_g1

0xd114,	// (0x000b74ae) bg_button_pane_cp04

0x4bf2,	// (0x000aef8c) cell_dialer_command_2_pane_g1

0xa5d0,	// (0x000b496a) bg_button_pane_cp06

0xd11c,	// (0x000b74b6) dialer_ne_clear_pane_g1

0xb3c9,	// (0x000b5763) navi_pane_g2

0xb3f7,	// (0x000b5791) navi_pane_g3

0x0002,

0xf3ca,	// (0x000b9764) navi_pane_g

0xb486,	// (0x000b5820) navi_pane_mv_g2

0xb4ad,	// (0x000b5847) navi_pane_mv_g5

0x25fc,	// (0x000ac996) navi_pane_mv_t1

0xa402,	// (0x000b479c) main_clock2_pane

0xa7a8,	// (0x000b4b42) main_clock2_list_pane_ParamLimits

0xa7a8,	// (0x000b4b42) main_clock2_list_pane

0x4c63,	// (0x000aeffd) main_clock2_pane_t1_ParamLimits

0x4c63,	// (0x000aeffd) main_clock2_pane_t1

0x4c9e,	// (0x000af038) main_clock2_pane_t2_ParamLimits

0x4c9e,	// (0x000af038) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x000b9b48) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x000b9b48) main_clock2_pane_t

0x4d3e,	// (0x000af0d8) popup_clock_analogue_window_cp03_ParamLimits

0x4d3e,	// (0x000af0d8) popup_clock_analogue_window_cp03

0x4d63,	// (0x000af0fd) popup_clock_digital_window_cp02_ParamLimits

0x4d63,	// (0x000af0fd) popup_clock_digital_window_cp02

0x4ddc,	// (0x000af176) main_clock2_list_single_pane_ParamLimits

0x4ddc,	// (0x000af176) main_clock2_list_single_pane

0xa5d0,	// (0x000b496a) list_highlight_pane_cp05

0xd15a,	// (0x000b74f4) main_clock2_list_single_pane_t1

0x1337,	// (0x000ab6d1) popup_toolbar_window_cp04_ParamLimits

0x41f7,	// (0x000ae591) camera2_autofocus_pane_g2_ParamLimits

0x41f7,	// (0x000ae591) camera2_autofocus_pane_g2

0x4203,	// (0x000ae59d) camera2_autofocus_pane_g3_ParamLimits

0x4203,	// (0x000ae59d) camera2_autofocus_pane_g3

0x420f,	// (0x000ae5a9) camera2_autofocus_pane_g4_ParamLimits

0x420f,	// (0x000ae5a9) camera2_autofocus_pane_g4

0x421b,	// (0x000ae5b5) camera2_autofocus_pane_g5_ParamLimits

0x421b,	// (0x000ae5b5) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x000b9a8c) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x000b9a8c) camera2_autofocus_pane_g

0xcfe1,	// (0x000b737b) camera2_autofocus_pane_cp_g2

0xcfe9,	// (0x000b7383) camera2_autofocus_pane_cp_g3

0xcff1,	// (0x000b738b) camera2_autofocus_pane_cp_g4

0xcff9,	// (0x000b7393) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x000b9af2) camera2_autofocus_pane_cp_g

0x4ae5,	// (0x000aee7f) popup_dialer_spcha_window

0x94a2,	// (0x000b383c) bg_popup_sub_pane_cp07

0xd168,	// (0x000b7502) list_spcha_pane

0xd170,	// (0x000b750a) list_single_spcha_pane_ParamLimits

0xd170,	// (0x000b750a) list_single_spcha_pane

0x94a2,	// (0x000b383c) list_highlight_pane_cp06

0xd181,	// (0x000b751b) list_single_spcha_pane_t1

0xc346,	// (0x000b66e0) popup_call2_audio_out_window_g4_ParamLimits

0xc346,	// (0x000b66e0) popup_call2_audio_out_window_g4

0x9528,	// (0x000b38c2) main_imed2_pane

0x9ab1,	// (0x000b3e4b) popup_imed_adjust2_window

0x35d8,	// (0x000ad972) popup_imed_trans_window_ParamLimits

0x35d8,	// (0x000ad972) popup_imed_trans_window

0xcb4f,	// (0x000b6ee9) popup_blid_sat_info2_window_t1

0xcb5d,	// (0x000b6ef7) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x000b9a21) popup_blid_sat_info2_window_t

0x4e8d,	// (0x000af227) aid_size_cell_colour_35

0x4ead,	// (0x000af247) aid_size_cell_colour_112

0x4ecd,	// (0x000af267) aid_size_cell_effect

0xc909,	// (0x000b6ca3) bg_tb_trans_pane_cp02

0xaf28,	// (0x000b52c2) heading_imed_pane

0x4eed,	// (0x000af287) listscroll_imed_pane

0xd18f,	// (0x000b7529) heading_imed_pane_g1

0xd197,	// (0x000b7531) heading_imed_pane_t1

0xd1a5,	// (0x000b753f) grid_imed_colour_35_pane_ParamLimits

0xd1a5,	// (0x000b753f) grid_imed_colour_35_pane

0x4ef9,	// (0x000af293) grid_imed_effect_pane

0xd1bc,	// (0x000b7556) list_imed_aspect_pane

0x4f0f,	// (0x000af2a9) scroll_pane_cp027_ParamLimits

0x4f0f,	// (0x000af2a9) scroll_pane_cp027

0x4f20,	// (0x000af2ba) cell_imed_effect_pane_ParamLimits

0x4f20,	// (0x000af2ba) cell_imed_effect_pane

0xd1c4,	// (0x000b755e) cell_imed_colour_pane_ParamLimits

0xd1c4,	// (0x000b755e) cell_imed_colour_pane

0xd206,	// (0x000b75a0) cell_imed_colour_pane_g1_ParamLimits

0xd206,	// (0x000b75a0) cell_imed_colour_pane_g1

0xd217,	// (0x000b75b1) hgihlgiht_grid_pane_cp016_ParamLimits

0xd217,	// (0x000b75b1) hgihlgiht_grid_pane_cp016

0x4f47,	// (0x000af2e1) cell_imed_effect_pane_g1

0x4f4f,	// (0x000af2e9) grid_highlight_pane_cp017

0xd228,	// (0x000b75c2) list_imed_single_pane_ParamLimits

0xd228,	// (0x000b75c2) list_imed_single_pane

0x94a2,	// (0x000b383c) list_highlight_pane_cp07

0xd23d,	// (0x000b75d7) list_imed_aspect_pane_comp1_t1

0xc909,	// (0x000b6ca3) bg_tb_trans_pane_cp05

0xd25f,	// (0x000b75f9) popup_imed_adjust2_window_g1

0xd286,	// (0x000b7620) popup_imed_adjust2_window_t1

0xd29e,	// (0x000b7638) slider_imed_adjust_pane

0xd2b2,	// (0x000b764c) slider_imed_adjust_pane_g1

0xd2c2,	// (0x000b765c) slider_imed_adjust_pane_g2

0xd2d2,	// (0x000b766c) slider_imed_adjust_pane_g3

0xd2e3,	// (0x000b767d) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x000b9b65) slider_imed_adjust_pane_g

0x4f58,	// (0x000af2f2) aid_size_cell_clipart2

0x4f64,	// (0x000af2fe) grid_imed_clipart_pane

0xd2f4,	// (0x000b768e) scroll_pane_cp031

0x4f6e,	// (0x000af308) cell_imed_clipart_pane_ParamLimits

0x4f6e,	// (0x000af308) cell_imed_clipart_pane

0x4f90,	// (0x000af32a) cell_imed_clipart_pane_g1

0x94a2,	// (0x000b383c) grid_highlight_pane_cp014

0x4c3f,	// (0x000aefd9) main_clock2_pane_g1_ParamLimits

0x4c3f,	// (0x000aefd9) main_clock2_pane_g1

0x4d83,	// (0x000af11d) aid_call2_pane_cp10

0x4d95,	// (0x000af12f) aid_call_pane_cp10

0xb32a,	// (0x000b56c4) popup_clock_analogue_window_cp10_g1

0xb32a,	// (0x000b56c4) popup_clock_analogue_window_cp10_g2

0x4da7,	// (0x000af141) popup_clock_analogue_window_cp10_g3

0x4da7,	// (0x000af141) popup_clock_analogue_window_cp10_g4

0xb32a,	// (0x000b56c4) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x000b9b53) popup_clock_analogue_window_cp10_g

0x4dbd,	// (0x000af157) popup_clock_analogue_window_cp10_t1

0x4dee,	// (0x000af188) clock_digital_number_pane_cp10_ParamLimits

0x4dee,	// (0x000af188) clock_digital_number_pane_cp10

0x4e06,	// (0x000af1a0) clock_digital_number_pane_cp11_ParamLimits

0x4e06,	// (0x000af1a0) clock_digital_number_pane_cp11

0x4e1e,	// (0x000af1b8) clock_digital_number_pane_cp12_ParamLimits

0x4e1e,	// (0x000af1b8) clock_digital_number_pane_cp12

0x4e38,	// (0x000af1d2) clock_digital_number_pane_cp13_ParamLimits

0x4e38,	// (0x000af1d2) clock_digital_number_pane_cp13

0x4e52,	// (0x000af1ec) clock_digital_separator_pane_cp10_ParamLimits

0x4e52,	// (0x000af1ec) clock_digital_separator_pane_cp10

0x4e6c,	// (0x000af206) popup_clock_digital_window_cp02_t1_ParamLimits

0x4e6c,	// (0x000af206) popup_clock_digital_window_cp02_t1

0xa335,	// (0x000b46cf) clock_digital_number_pane_cp10_g1

0xa335,	// (0x000b46cf) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x000b9b6e) clock_digital_number_pane_cp10_g

0xa335,	// (0x000b46cf) clock_digital_separator_pane_cp10_g1

0xa335,	// (0x000b46cf) clock_digital_separator_pane_g2_cp10

0xb4b5,	// (0x000b584f) navi_pane_vded_g4

0xb4be,	// (0x000b5858) navi_pane_vded_g5

0xb4c7,	// (0x000b5861) navi_pane_vded_t1

0x9528,	// (0x000b38c2) main_vded_pane

0x4f99,	// (0x000af333) main_vded_pane_g1

0x4fa3,	// (0x000af33d) main_vded_pane_g2

0x4fad,	// (0x000af347) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x000b9b73) main_vded_pane_g

0x4fb7,	// (0x000af351) main_vded_pane_t1

0x4fc5,	// (0x000af35f) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x000b9b7a) main_vded_pane_t

0x4fd3,	// (0x000af36d) vded_slider_pane

0x4fdb,	// (0x000af375) vded_video_pane

0xd2fc,	// (0x000b7696) vded_video_pane_g1

0x4fe3,	// (0x000af37d) vded_video_pane_g2

0xcd11,	// (0x000b70ab) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x000b9b7f) vded_video_pane_g

0xd306,	// (0x000b76a0) vded_slider_pane_g1

0xca64,	// (0x000b6dfe) vded_slider_pane_g2

0xd30f,	// (0x000b76a9) vded_slider_pane_g3

0xd318,	// (0x000b76b2) vded_slider_pane_g4

0xd321,	// (0x000b76bb) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x000b9b86) vded_slider_pane_g

0x49c6,	// (0x000aed60) mup3_rocker_pane_ParamLimits

0x49c6,	// (0x000aed60) mup3_rocker_pane

0x4fec,	// (0x000af386) mup3_control_keys_pane_g1

0x4ff4,	// (0x000af38e) mup3_control_keys_pane_g2

0x4ffc,	// (0x000af396) mup3_control_keys_pane_g3

0x5004,	// (0x000af39e) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x000b9b91) mup3_control_keys_pane_g

0x02f5,	// (0x000aa68f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x02f5,	// (0x000aa68f) popup_toolbar2_fixed_window_cp01

0x49fa,	// (0x000aed94) popup_toolbar2_fixed_window_cp02_ParamLimits

0x49fa,	// (0x000aed94) popup_toolbar2_fixed_window_cp02

0xbc85,	// (0x000b601f) popup_call2_audio_second_window_t4_ParamLimits

0xbc85,	// (0x000b601f) popup_call2_audio_second_window_t4

0xc1b3,	// (0x000b654d) popup_call2_audio_first_window_t6_ParamLimits

0xc1b3,	// (0x000b654d) popup_call2_audio_first_window_t6

0xc449,	// (0x000b67e3) popup_call2_audio_out_window_t6_ParamLimits

0xc449,	// (0x000b67e3) popup_call2_audio_out_window_t6

0x9528,	// (0x000b38c2) main_vitu_pane

0x5014,	// (0x000af3ae) aid_size_cell_itu_ParamLimits

0x5014,	// (0x000af3ae) aid_size_cell_itu

0xa7a8,	// (0x000b4b42) bg_popup_window_pane_cp08_ParamLimits

0xa7a8,	// (0x000b4b42) bg_popup_window_pane_cp08

0x502a,	// (0x000af3c4) field_vitu_entry_pane_ParamLimits

0x502a,	// (0x000af3c4) field_vitu_entry_pane

0x5041,	// (0x000af3db) grid_vitu_function_pane_ParamLimits

0x5041,	// (0x000af3db) grid_vitu_function_pane

0x505c,	// (0x000af3f6) grid_vitu_itu_pane_ParamLimits

0x505c,	// (0x000af3f6) grid_vitu_itu_pane

0x507a,	// (0x000af414) cell_vitu_itu_pane_ParamLimits

0x507a,	// (0x000af414) cell_vitu_itu_pane

0x509c,	// (0x000af436) cell_vitu_function_pane_ParamLimits

0x509c,	// (0x000af436) cell_vitu_function_pane

0xa7a8,	// (0x000b4b42) bg_popup_sub_pane_cp08_ParamLimits

0xa7a8,	// (0x000b4b42) bg_popup_sub_pane_cp08

0x50b5,	// (0x000af44f) field_vitu_entry_pane_t1_ParamLimits

0x50b5,	// (0x000af44f) field_vitu_entry_pane_t1

0xd342,	// (0x000b76dc) field_vitu_entry_pane_t2_ParamLimits

0xd342,	// (0x000b76dc) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x000b9b9f) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x000b9b9f) field_vitu_entry_pane_t

0xd35f,	// (0x000b76f9) bg_button_pane_cp05_ParamLimits

0xd35f,	// (0x000b76f9) bg_button_pane_cp05

0x50d3,	// (0x000af46d) cell_vitu_itu_pane_g1

0x50eb,	// (0x000af485) cell_vitu_itu_pane_t1_ParamLimits

0x50eb,	// (0x000af485) cell_vitu_itu_pane_t1

0x50fd,	// (0x000af497) cell_vitu_itu_pane_t2_ParamLimits

0x50fd,	// (0x000af497) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x000b9ba4) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x000b9ba4) cell_vitu_itu_pane_t

0xd36d,	// (0x000b7707) bg_button_pane_cp07

0x5132,	// (0x000af4cc) cell_vitu_function_pane_g1

0x9916,	// (0x000b3cb0) main_calc_pane_g1

0x011c,	// (0x000aa4b6) aid_visual_content_pane

0x9528,	// (0x000b38c2) main_vradio_pane

0x513b,	// (0x000af4d5) main_vradio_pane_g1_ParamLimits

0x513b,	// (0x000af4d5) main_vradio_pane_g1

0xd377,	// (0x000b7711) main_vradio_pane_g2_ParamLimits

0xd377,	// (0x000b7711) main_vradio_pane_g2

0x0001,

0xf811,	// (0x000b9bab) main_vradio_pane_g_ParamLimits

0xf811,	// (0x000b9bab) main_vradio_pane_g

0x5154,	// (0x000af4ee) main_vradio_pane_t1_ParamLimits

0x5154,	// (0x000af4ee) main_vradio_pane_t1

0x5169,	// (0x000af503) main_vradio_pane_t2_ParamLimits

0x5169,	// (0x000af503) main_vradio_pane_t2

0xd384,	// (0x000b771e) main_vradio_pane_t3_ParamLimits

0xd384,	// (0x000b771e) main_vradio_pane_t3

0x0002,

0xf816,	// (0x000b9bb0) main_vradio_pane_t_ParamLimits

0xf816,	// (0x000b9bb0) main_vradio_pane_t

0x517e,	// (0x000af518) vradio_rocker_control_pane_ParamLimits

0x517e,	// (0x000af518) vradio_rocker_control_pane

0x5190,	// (0x000af52a) vradio_station_info_pane_ParamLimits

0x5190,	// (0x000af52a) vradio_station_info_pane

0xd398,	// (0x000b7732) vradio_frequency_info_pane_ParamLimits

0xd398,	// (0x000b7732) vradio_frequency_info_pane

0xcd11,	// (0x000b70ab) vradio_station_info_pane_g1

0xd3a7,	// (0x000b7741) vradio_station_info_pane_t1_ParamLimits

0xd3a7,	// (0x000b7741) vradio_station_info_pane_t1

0xd3c9,	// (0x000b7763) vradio_station_info_pane_t2_ParamLimits

0xd3c9,	// (0x000b7763) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x000b9bb7) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x000b9bb7) vradio_station_info_pane_t

0xd3db,	// (0x000b7775) vradio_tuning_pane

0xd3e3,	// (0x000b777d) vradio_rocker_control_pane_g1

0xd3eb,	// (0x000b7785) vradio_rocker_control_pane_g2

0xd3f3,	// (0x000b778d) vradio_rocker_control_pane_g3

0xd3fb,	// (0x000b7795) vradio_rocker_control_pane_g4

0xd403,	// (0x000b779d) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x000b9bbc) vradio_rocker_control_pane_g

0x51a2,	// (0x000af53c) vradio_frequency_info_pane_g1

0xd40b,	// (0x000b77a5) vradio_frequency_info_pane_t1_ParamLimits

0xd40b,	// (0x000b77a5) vradio_frequency_info_pane_t1

0x51ac,	// (0x000af546) vradio_tuning_pane_g1

0x51b7,	// (0x000af551) vradio_tuning_pane_t1

0x94d8,	// (0x000b3872) area_side_right_pane_ParamLimits

0x94d8,	// (0x000b3872) area_side_right_pane

0xc8c4,	// (0x000b6c5e) status_small_pane_g1

0xc8cc,	// (0x000b6c66) status_small_pane_g2

0xc8d5,	// (0x000b6c6f) status_small_pane_g3

0xc8de,	// (0x000b6c78) status_small_pane_g4

0x0003,

0xf5dd,	// (0x000b9977) status_small_pane_g

0xc8e7,	// (0x000b6c81) status_small_pane_t1

0x9528,	// (0x000b38c2) main_video3_pane

0xd41f,	// (0x000b77b9) cams_zoom_vslider_pane

0xd427,	// (0x000b77c1) image3_wide_pane_ParamLimits

0xd427,	// (0x000b77c1) image3_wide_pane

0xd441,	// (0x000b77db) image3_wide_small_pane

0xd44d,	// (0x000b77e7) main_video3_pane_g1_ParamLimits

0xd44d,	// (0x000b77e7) main_video3_pane_g1

0xd469,	// (0x000b7803) main_video3_pane_g2_ParamLimits

0xd469,	// (0x000b7803) main_video3_pane_g2

0x0001,

0xf82d,	// (0x000b9bc7) main_video3_pane_g_ParamLimits

0xf82d,	// (0x000b9bc7) main_video3_pane_g

0xd485,	// (0x000b781f) main_video3_pane_t1_ParamLimits

0xd485,	// (0x000b781f) main_video3_pane_t1

0xd4b0,	// (0x000b784a) main_video3_pane_t2_ParamLimits

0xd4b0,	// (0x000b784a) main_video3_pane_t2

0xd4db,	// (0x000b7875) main_video3_pane_t3_ParamLimits

0xd4db,	// (0x000b7875) main_video3_pane_t3

0x0002,

0xf832,	// (0x000b9bcc) main_video3_pane_t_ParamLimits

0xf832,	// (0x000b9bcc) main_video3_pane_t

0xd508,	// (0x000b78a2) cams_zoom_vslider_pane_g1

0xd511,	// (0x000b78ab) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x000b9bd3) cams_zoom_vslider_pane_g

0xd519,	// (0x000b78b3) small_slider_vertical_pane

0xcd11,	// (0x000b70ab) small_slider_vertical_pane_g1

0xcd11,	// (0x000b70ab) small_slider_vertical_pane_g2

0xd521,	// (0x000b78bb) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x000b9bd8) small_slider_vertical_pane_g

0x9528,	// (0x000b38c2) main_hwr_training_pane

0xd52a,	// (0x000b78c4) hwr_training_instruct_pane_ParamLimits

0xd52a,	// (0x000b78c4) hwr_training_instruct_pane

0x51c6,	// (0x000af560) hwr_training_navi_pane_ParamLimits

0x51c6,	// (0x000af560) hwr_training_navi_pane

0x51e5,	// (0x000af57f) hwr_training_write_pane_ParamLimits

0x51e5,	// (0x000af57f) hwr_training_write_pane

0x94a2,	// (0x000b383c) bg_frame_shadow_pane

0xd561,	// (0x000b78fb) hwr_training_write_pane_g1

0xd569,	// (0x000b7903) hwr_training_write_pane_g2

0xd571,	// (0x000b790b) hwr_training_write_pane_g3

0xd579,	// (0x000b7913) hwr_training_write_pane_g4

0xd581,	// (0x000b791b) hwr_training_write_pane_g5

0xd589,	// (0x000b7923) hwr_training_write_pane_g6

0xd591,	// (0x000b792b) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x000b9bdf) hwr_training_write_pane_g

0x9ba2,	// (0x000b3f3c) hwr_training_navi_pane_g1_ParamLimits

0x9ba2,	// (0x000b3f3c) hwr_training_navi_pane_g1

0x9bb4,	// (0x000b3f4e) hwr_training_navi_pane_g2_ParamLimits

0x9bb4,	// (0x000b3f4e) hwr_training_navi_pane_g2

0x9bc6,	// (0x000b3f60) hwr_training_navi_pane_g3_ParamLimits

0x9bc6,	// (0x000b3f60) hwr_training_navi_pane_g3

0x9bd6,	// (0x000b3f70) hwr_training_navi_pane_g4_ParamLimits

0x9bd6,	// (0x000b3f70) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x000b9bee) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x000b9bee) hwr_training_navi_pane_g

0x9be3,	// (0x000b3f7d) hwr_training_navi_pane_t1

0x522d,	// (0x000af5c7) list_single_hwr_training_instruct_pane_ParamLimits

0x522d,	// (0x000af5c7) list_single_hwr_training_instruct_pane

0xd599,	// (0x000b7933) list_single_hwr_training_instruct_pane_t1

0xcc51,	// (0x000b6feb) bg_frame_shadow_pane_g1

0xd5a8,	// (0x000b7942) bg_frame_shadow_pane_g2

0xd5b0,	// (0x000b794a) bg_frame_shadow_pane_g3

0xd5b8,	// (0x000b7952) bg_frame_shadow_pane_g4

0xd5c0,	// (0x000b795a) bg_frame_shadow_pane_g5

0xd5c8,	// (0x000b7962) bg_frame_shadow_pane_g6

0xd5d0,	// (0x000b796a) bg_frame_shadow_pane_g7

0xa4c4,	// (0x000b485e) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x000b9bf9) bg_frame_shadow_pane_g

0x9528,	// (0x000b38c2) main_video_tele_dialer_pane

0x5242,	// (0x000af5dc) aid_size_cell_video_keypad_ParamLimits

0x5242,	// (0x000af5dc) aid_size_cell_video_keypad

0x525c,	// (0x000af5f6) grid_video_dialer_keypad_pane_ParamLimits

0x525c,	// (0x000af5f6) grid_video_dialer_keypad_pane

0x52a8,	// (0x000af642) video_down_pane_cp_ParamLimits

0x52a8,	// (0x000af642) video_down_pane_cp

0x52da,	// (0x000af674) cell_video_dialer_keypad_pane_ParamLimits

0x52da,	// (0x000af674) cell_video_dialer_keypad_pane

0xd5d8,	// (0x000b7972) bg_button_pane_cp08_ParamLimits

0xd5d8,	// (0x000b7972) bg_button_pane_cp08

0x52fc,	// (0x000af696) cell_video_dialer_keypad_pane_g1_ParamLimits

0x52fc,	// (0x000af696) cell_video_dialer_keypad_pane_g1

0x49b0,	// (0x000aed4a) mup3_rocker2_pane_ParamLimits

0x49b0,	// (0x000aed4a) mup3_rocker2_pane

0xcd11,	// (0x000b70ab) mup3_rocker2_pane_g1

0x34b9,	// (0x000ad853) main_dialer2_pane

0x9528,	// (0x000b38c2) main_mp4_pane

0x9c0f,	// (0x000b3fa9) main_mp4_pane_g1_ParamLimits

0x9c0f,	// (0x000b3fa9) main_mp4_pane_g1

0x9c0f,	// (0x000b3fa9) main_mp4_pane_g2_ParamLimits

0x9c0f,	// (0x000b3fa9) main_mp4_pane_g2

0x5333,	// (0x000af6cd) main_mp4_pane_g3_ParamLimits

0x5333,	// (0x000af6cd) main_mp4_pane_g3

0x9c1d,	// (0x000b3fb7) main_mp4_pane_g4_ParamLimits

0x9c1d,	// (0x000b3fb7) main_mp4_pane_g4

0x9c4b,	// (0x000b3fe5) main_mp4_pane_g5_ParamLimits

0x9c4b,	// (0x000b3fe5) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x000b9c19) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x000b9c19) main_mp4_pane_g

0x9cbf,	// (0x000b4059) main_mp4_pane_t1_ParamLimits

0x9cbf,	// (0x000b4059) main_mp4_pane_t1

0x9d1b,	// (0x000b40b5) main_mp4_pane_t2_ParamLimits

0x9d1b,	// (0x000b40b5) main_mp4_pane_t2

0xd5e4,	// (0x000b797e) main_mp4_pane_t3_ParamLimits

0xd5e4,	// (0x000b797e) main_mp4_pane_t3

0x9d6d,	// (0x000b4107) main_mp4_pane_t4_ParamLimits

0x9d6d,	// (0x000b4107) main_mp4_pane_t4

0x0003,

0xf890,	// (0x000b9c2a) main_mp4_pane_t_ParamLimits

0xf890,	// (0x000b9c2a) main_mp4_pane_t

0x9db1,	// (0x000b414b) mp4_progress_pane_ParamLimits

0x9db1,	// (0x000b414b) mp4_progress_pane

0x9dfb,	// (0x000b4195) mp4_rocker_pane_ParamLimits

0x9dfb,	// (0x000b4195) mp4_rocker_pane

0xd612,	// (0x000b79ac) mp4_progress_pane_t1

0xd62b,	// (0x000b79c5) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x000b9c33) mp4_progress_pane_t

0xd644,	// (0x000b79de) mup_progress_pane_cp04

0xd657,	// (0x000b79f1) mp4_rocker_pane_g1

0x536f,	// (0x000af709) aid_cell_size_keypad2_ParamLimits

0x536f,	// (0x000af709) aid_cell_size_keypad2

0x5385,	// (0x000af71f) dialer2_ne_pane_ParamLimits

0x5385,	// (0x000af71f) dialer2_ne_pane

0x539f,	// (0x000af739) grid_dialer2_keypad_pane_ParamLimits

0x539f,	// (0x000af739) grid_dialer2_keypad_pane

0xcaf6,	// (0x000b6e90) bg_popup_call_pane_cp07_ParamLimits

0xcaf6,	// (0x000b6e90) bg_popup_call_pane_cp07

0x53bb,	// (0x000af755) dialer2_ne_pane_t1_ParamLimits

0x53bb,	// (0x000af755) dialer2_ne_pane_t1

0x53f6,	// (0x000af790) cell_dialer2_keypad_pane_ParamLimits

0x53f6,	// (0x000af790) cell_dialer2_keypad_pane

0xd673,	// (0x000b7a0d) bg_button_pane_pane_cp04_ParamLimits

0xd673,	// (0x000b7a0d) bg_button_pane_pane_cp04

0x5418,	// (0x000af7b2) cell_dialer2_keypad_pane_g1_ParamLimits

0x5418,	// (0x000af7b2) cell_dialer2_keypad_pane_g1

0x120b,	// (0x000ab5a5) aid_placing_vt_set_content_ParamLimits

0x120b,	// (0x000ab5a5) aid_placing_vt_set_content

0x1233,	// (0x000ab5cd) aid_placing_vt_set_title_ParamLimits

0x1233,	// (0x000ab5cd) aid_placing_vt_set_title

0x9528,	// (0x000b38c2) main_image3_pane

0x54de,	// (0x000af878) area_side_right_pane_cp01_ParamLimits

0x54de,	// (0x000af878) area_side_right_pane_cp01

0x9c0f,	// (0x000b3fa9) main_image3_pane_g1_ParamLimits

0x9c0f,	// (0x000b3fa9) main_image3_pane_g1

0x54f5,	// (0x000af88f) main_image3_pane_g2_ParamLimits

0x54f5,	// (0x000af88f) main_image3_pane_g2

0x551d,	// (0x000af8b7) main_image3_pane_g3_ParamLimits

0x551d,	// (0x000af8b7) main_image3_pane_g3

0x5547,	// (0x000af8e1) main_image3_pane_g4_ParamLimits

0x5547,	// (0x000af8e1) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x000b9c42) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x000b9c42) main_image3_pane_g

0x5571,	// (0x000af90b) main_image3_pane_t1_ParamLimits

0x5571,	// (0x000af90b) main_image3_pane_t1

0x55c9,	// (0x000af963) main_image3_pane_t2_ParamLimits

0x55c9,	// (0x000af963) main_image3_pane_t2

0x561b,	// (0x000af9b5) main_image3_pane_t3_ParamLimits

0x561b,	// (0x000af9b5) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x000b9c4b) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x000b9c4b) main_image3_pane_t

0xa7a8,	// (0x000b4b42) grid_sctrl_middle_pane_cp01_ParamLimits

0xa7a8,	// (0x000b4b42) grid_sctrl_middle_pane_cp01

0x56a3,	// (0x000afa3d) cell_sctrl_middle_pane_cp01_ParamLimits

0x56a3,	// (0x000afa3d) cell_sctrl_middle_pane_cp01

0x56c0,	// (0x000afa5a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x56c0,	// (0x000afa5a) cell_sctrl_middle_pane_cp01_g1

0x9528,	// (0x000b38c2) main_call4_pane

0x56d6,	// (0x000afa70) aid_size_button_call4_ParamLimits

0x56d6,	// (0x000afa70) aid_size_button_call4

0x5709,	// (0x000afaa3) call4_windows_pane_ParamLimits

0x5709,	// (0x000afaa3) call4_windows_pane

0x5728,	// (0x000afac2) grid_call4_button_pane_ParamLimits

0x5728,	// (0x000afac2) grid_call4_button_pane

0x575b,	// (0x000afaf5) call4_windows_conf_pane

0x5772,	// (0x000afb0c) popup_call4_audio_first_window_ParamLimits

0x5772,	// (0x000afb0c) popup_call4_audio_first_window

0x57c2,	// (0x000afb5c) popup_call4_audio_second_window_ParamLimits

0x57c2,	// (0x000afb5c) popup_call4_audio_second_window

0x57d9,	// (0x000afb73) popup_call4_audio_wait_window_ParamLimits

0x57d9,	// (0x000afb73) popup_call4_audio_wait_window

0x57e7,	// (0x000afb81) cell_call4_button_pane_ParamLimits

0x57e7,	// (0x000afb81) cell_call4_button_pane

0x580c,	// (0x000afba6) bg_button_pane_cp09_ParamLimits

0x580c,	// (0x000afba6) bg_button_pane_cp09

0x5818,	// (0x000afbb2) cell_call4_button_pane_g1_ParamLimits

0x5818,	// (0x000afbb2) cell_call4_button_pane_g1

0x583e,	// (0x000afbd8) cell_call4_button_pane_t1_ParamLimits

0x583e,	// (0x000afbd8) cell_call4_button_pane_t1

0xd687,	// (0x000b7a21) popup_call4_audio_conf_window_ParamLimits

0xd687,	// (0x000b7a21) popup_call4_audio_conf_window

0x4a10,	// (0x000aedaa) mup3_progress_pane_t1_ParamLimits

0x4a2f,	// (0x000aedc9) mup3_progress_pane_t2_ParamLimits

0xd017,	// (0x000b73b1) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x000b9b1b) mup3_progress_pane_t_ParamLimits

0xd034,	// (0x000b73ce) mup_progress_pane_cp03_ParamLimits

0x500c,	// (0x000af3a6) mup3_control_keys_pane_g4_copy1

0x9ddf,	// (0x000b4179) mp4_rocker2_pane_ParamLimits

0x9ddf,	// (0x000b4179) mp4_rocker2_pane

0xd69b,	// (0x000b7a35) mp4_rocker2_pane_g1

0xd6a3,	// (0x000b7a3d) mp4_rocker2_pane_g2

0x9e7f,	// (0x000b4219) mp4_rocker2_pane_g3

0x9e87,	// (0x000b4221) mp4_rocker2_pane_g4

0x9e8f,	// (0x000b4229) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x000b9c54) mp4_rocker2_pane_g

0x9528,	// (0x000b38c2) main_camera4_pane

0x9528,	// (0x000b38c2) main_video4_pane

0x5276,	// (0x000af610) main_video_tele_dialer_pane_t1_ParamLimits

0x5276,	// (0x000af610) main_video_tele_dialer_pane_t1

0x528f,	// (0x000af629) main_video_tele_dialer_pane_t2_ParamLimits

0x528f,	// (0x000af629) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x000b9c0a) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x000b9c0a) main_video_tele_dialer_pane_t

0x587c,	// (0x000afc16) cam4_autofocus_pane_ParamLimits

0x587c,	// (0x000afc16) cam4_autofocus_pane

0x5892,	// (0x000afc2c) cam4_image_uncrop_pane_ParamLimits

0x5892,	// (0x000afc2c) cam4_image_uncrop_pane

0x58ac,	// (0x000afc46) cam4_indicators_pane_ParamLimits

0x58ac,	// (0x000afc46) cam4_indicators_pane

0x58d7,	// (0x000afc71) main_camera4_pane_g1_ParamLimits

0x58d7,	// (0x000afc71) main_camera4_pane_g1

0x58e9,	// (0x000afc83) main_camera4_pane_g2_ParamLimits

0x58e9,	// (0x000afc83) main_camera4_pane_g2

0x58fc,	// (0x000afc96) main_camera4_pane_g3_ParamLimits

0x58fc,	// (0x000afc96) main_camera4_pane_g3

0x590f,	// (0x000afca9) main_camera4_pane_g4_ParamLimits

0x590f,	// (0x000afca9) main_camera4_pane_g4

0x5922,	// (0x000afcbc) main_camera4_pane_g5_ParamLimits

0x5922,	// (0x000afcbc) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x000b9c5f) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x000b9c5f) main_camera4_pane_g

0x5946,	// (0x000afce0) main_camera4_pane_t1_ParamLimits

0x5946,	// (0x000afce0) main_camera4_pane_t1

0x9eb3,	// (0x000b424d) bg_tb_trans_pane_cp06

0x9ec9,	// (0x000b4263) cam4_indicators_pane_g1

0x9eda,	// (0x000b4274) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x000b9c7a) cam4_indicators_pane_g

0x9ef8,	// (0x000b4292) cam4_indicators_pane_t1

0x59aa,	// (0x000afd44) main_video4_pane_g1_ParamLimits

0x59aa,	// (0x000afd44) main_video4_pane_g1

0x59b9,	// (0x000afd53) main_video4_pane_g2_ParamLimits

0x59b9,	// (0x000afd53) main_video4_pane_g2

0x59c8,	// (0x000afd62) main_video4_pane_g3_ParamLimits

0x59c8,	// (0x000afd62) main_video4_pane_g3

0x59d7,	// (0x000afd71) main_video4_pane_g4_ParamLimits

0x59d7,	// (0x000afd71) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x000b9c81) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x000b9c81) main_video4_pane_g

0x59f5,	// (0x000afd8f) vid4_indicators_pane_ParamLimits

0x59f5,	// (0x000afd8f) vid4_indicators_pane

0x5a23,	// (0x000afdbd) video4_image_uncrop_cif_pane_ParamLimits

0x5a23,	// (0x000afdbd) video4_image_uncrop_cif_pane

0x5a3d,	// (0x000afdd7) video4_image_uncrop_nhd_pane_ParamLimits

0x5a3d,	// (0x000afdd7) video4_image_uncrop_nhd_pane

0x5892,	// (0x000afc2c) video4_image_uncrop_vga_pane_ParamLimits

0x5892,	// (0x000afc2c) video4_image_uncrop_vga_pane

0x951a,	// (0x000b38b4) bg_tb_trans_pane_cp07

0x9f24,	// (0x000b42be) vid4_indicators_pane_g1

0x9f38,	// (0x000b42d2) vid4_indicators_pane_g2

0x9f4c,	// (0x000b42e6) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x000b9c8c) vid4_indicators_pane_g

0x9f7b,	// (0x000b4315) vid4_indicators_pane_t1

0x5a51,	// (0x000afdeb) cam4_autofocus_pane_g1

0x5a59,	// (0x000afdf3) cam4_autofocus_pane_g2

0x5a61,	// (0x000afdfb) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x000b9c97) cam4_autofocus_pane_g

0x5a69,	// (0x000afe03) cam4_autofocus_pane_g3_copy1

0x52be,	// (0x000af658) video_down_pane_cp_t1

0x52cc,	// (0x000af666) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x000b9c0f) video_down_pane_cp_t

0x951a,	// (0x000b38b4) popup_vitu2_window_ParamLimits

0x951a,	// (0x000b38b4) popup_vitu2_window

0x5a71,	// (0x000afe0b) aid_size_cell2_itu2_ParamLimits

0x5a71,	// (0x000afe0b) aid_size_cell2_itu2

0x5a97,	// (0x000afe31) aid_size_cell_itu2_ParamLimits

0x5a97,	// (0x000afe31) aid_size_cell_itu2

0x5af3,	// (0x000afe8d) bg_popup_window_pane_cp09_ParamLimits

0x5af3,	// (0x000afe8d) bg_popup_window_pane_cp09

0x5b01,	// (0x000afe9b) field_vitu2_entry_pane_ParamLimits

0x5b01,	// (0x000afe9b) field_vitu2_entry_pane

0x5b27,	// (0x000afec1) grid_vitu2_function_pane_ParamLimits

0x5b27,	// (0x000afec1) grid_vitu2_function_pane

0x5b78,	// (0x000aff12) grid_vitu2_itu_pane_ParamLimits

0x5b78,	// (0x000aff12) grid_vitu2_itu_pane

0x5c10,	// (0x000affaa) cell_vitu2_itu_pane_ParamLimits

0x5c10,	// (0x000affaa) cell_vitu2_itu_pane

0x5c3c,	// (0x000affd6) cell_vitu2_function_pane_ParamLimits

0x5c3c,	// (0x000affd6) cell_vitu2_function_pane

0xd6ab,	// (0x000b7a45) bg_popup_call_pane_cp08_ParamLimits

0xd6ab,	// (0x000b7a45) bg_popup_call_pane_cp08

0xd6c2,	// (0x000b7a5c) field_vitu2_entry_pane_g1

0xd6ce,	// (0x000b7a68) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x000b9c9e) field_vitu2_entry_pane_g

0x5c7b,	// (0x000b0015) field_vitu2_entry_pane_t1_ParamLimits

0x5c7b,	// (0x000b0015) field_vitu2_entry_pane_t1

0xa7ee,	// (0x000b4b88) field_vitu2_entry_pane_t2_ParamLimits

0xa7ee,	// (0x000b4b88) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x000b9ca5) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x000b9ca5) field_vitu2_entry_pane_t

0x5ca9,	// (0x000b0043) bg_button_pane_cp010_ParamLimits

0x5ca9,	// (0x000b0043) bg_button_pane_cp010

0x9f92,	// (0x000b432c) cell_vitu2_itu_pane_g1

0x5cc5,	// (0x000b005f) cell_vitu2_itu_pane_t1_ParamLimits

0x5cc5,	// (0x000b005f) cell_vitu2_itu_pane_t1

0xfff4,	// (0x000aa38e) cell_vitu2_itu_pane_t2_ParamLimits

0xfff4,	// (0x000aa38e) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x000b9caf) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x000b9caf) cell_vitu2_itu_pane_t

0x951a,	// (0x000b38b4) bg_button_pane_cp011

0x5d23,	// (0x000b00bd) cell_vitu2_function_pane_g1

0x9528,	// (0x000b38c2) main_myfav_hc_pane

0x566b,	// (0x000afa05) popup_image3_note_pane_ParamLimits

0x566b,	// (0x000afa05) popup_image3_note_pane

0x5687,	// (0x000afa21) popup_image3_tool_bar_pane_ParamLimits

0x5687,	// (0x000afa21) popup_image3_tool_bar_pane

0x0082,	// (0x000aa41c) cell_vitu2_itu_pane_t3_ParamLimits

0x0082,	// (0x000aa41c) cell_vitu2_itu_pane_t3

0x94a2,	// (0x000b383c) bg_popup_trans_pane

0xd6f0,	// (0x000b7a8a) grid_image3_tool_bar_pane

0xd6fa,	// (0x000b7a94) bg_popup_trans_pane_g1

0xace0,	// (0x000b507a) bg_popup_trans_pane_g2

0xd702,	// (0x000b7a9c) bg_popup_trans_pane_g3

0xd70a,	// (0x000b7aa4) bg_popup_trans_pane_g4

0xd712,	// (0x000b7aac) bg_popup_trans_pane_g5

0xd71a,	// (0x000b7ab4) bg_popup_trans_pane_g6

0xd722,	// (0x000b7abc) bg_popup_trans_pane_g7

0xd72a,	// (0x000b7ac4) bg_popup_trans_pane_g8

0xacc0,	// (0x000b505a) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x000b9cb6) bg_popup_trans_pane_g

0xd732,	// (0x000b7acc) cell_image3_tool_bar_pane_ParamLimits

0xd732,	// (0x000b7acc) cell_image3_tool_bar_pane

0xcd11,	// (0x000b70ab) cell_image3_tool_bar_pane_g1

0x94a2,	// (0x000b383c) bg_popup_trans_pane_cp1

0xd746,	// (0x000b7ae0) popup_image3_note_pane_t1

0xd754,	// (0x000b7aee) popup_image3_note_pane_t2

0xd762,	// (0x000b7afc) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x000b9cc9) popup_image3_note_pane_t

0xd770,	// (0x000b7b0a) popup_image3_note_pane_t3_copy1

0x5d37,	// (0x000b00d1) bg_myfav_hc_instruction_pane_ParamLimits

0x5d37,	// (0x000b00d1) bg_myfav_hc_instruction_pane

0x5d4b,	// (0x000b00e5) cell_myfav_contact_pane_ParamLimits

0x5d4b,	// (0x000b00e5) cell_myfav_contact_pane

0x5d69,	// (0x000b0103) cell_myfav_contact_pane_cp1_ParamLimits

0x5d69,	// (0x000b0103) cell_myfav_contact_pane_cp1

0x5d81,	// (0x000b011b) cell_myfav_contact_pane_cp2_ParamLimits

0x5d81,	// (0x000b011b) cell_myfav_contact_pane_cp2

0x5d99,	// (0x000b0133) cell_myfav_contact_pane_cp3_ParamLimits

0x5d99,	// (0x000b0133) cell_myfav_contact_pane_cp3

0x5db0,	// (0x000b014a) cell_myfav_contact_pane_cp4_ParamLimits

0x5db0,	// (0x000b014a) cell_myfav_contact_pane_cp4

0x5dc8,	// (0x000b0162) cell_myfav_contact_pane_cp5_ParamLimits

0x5dc8,	// (0x000b0162) cell_myfav_contact_pane_cp5

0x5ddc,	// (0x000b0176) cell_myfav_contact_pane_cp6_ParamLimits

0x5ddc,	// (0x000b0176) cell_myfav_contact_pane_cp6

0x5df2,	// (0x000b018c) cell_myfav_contact_pane_cp7_ParamLimits

0x5df2,	// (0x000b018c) cell_myfav_contact_pane_cp7

0xd77e,	// (0x000b7b18) listscroll_gen_pane_cp05

0x5e0c,	// (0x000b01a6) main_myfav_hc_pane_g1_ParamLimits

0x5e0c,	// (0x000b01a6) main_myfav_hc_pane_g1

0x5e26,	// (0x000b01c0) main_myfav_hc_pane_g2_ParamLimits

0x5e26,	// (0x000b01c0) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x000b9cd0) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x000b9cd0) main_myfav_hc_pane_g

0x5e58,	// (0x000b01f2) main_myfav_hc_pane_t1_ParamLimits

0x5e58,	// (0x000b01f2) main_myfav_hc_pane_t1

0xd787,	// (0x000b7b21) main_myfav_hc_pane_t2_ParamLimits

0xd787,	// (0x000b7b21) main_myfav_hc_pane_t2

0xd799,	// (0x000b7b33) main_myfav_hc_pane_t3_ParamLimits

0xd799,	// (0x000b7b33) main_myfav_hc_pane_t3

0x5e6f,	// (0x000b0209) main_myfav_hc_pane_t4_ParamLimits

0x5e6f,	// (0x000b0209) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x000b9cd7) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x000b9cd7) main_myfav_hc_pane_t

0xcd11,	// (0x000b70ab) bg_myfav_hc_instruction_pane_g1

0xd7ab,	// (0x000b7b45) cell_myfav_contact_pane_g1_ParamLimits

0xd7ab,	// (0x000b7b45) cell_myfav_contact_pane_g1

0xd7ab,	// (0x000b7b45) cell_myfav_contact_pane_g2_ParamLimits

0xd7ab,	// (0x000b7b45) cell_myfav_contact_pane_g2

0xd7b7,	// (0x000b7b51) cell_myfav_contact_pane_g3_ParamLimits

0xd7b7,	// (0x000b7b51) cell_myfav_contact_pane_g3

0xd001,	// (0x000b739b) cell_myfav_contact_pane_g4_ParamLimits

0xd001,	// (0x000b739b) cell_myfav_contact_pane_g4

0xd7c4,	// (0x000b7b5e) cell_myfav_contact_pane_g5_ParamLimits

0xd7c4,	// (0x000b7b5e) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x000b9ce2) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x000b9ce2) cell_myfav_contact_pane_g

0x5e40,	// (0x000b01da) main_myfav_hc_pane_g3_ParamLimits

0x5e40,	// (0x000b01da) main_myfav_hc_pane_g3

0x0257,	// (0x000aa5f1) popup_adpt_find_window

0x5e97,	// (0x000b0231) afind_page_pane_ParamLimits

0x5e97,	// (0x000b0231) afind_page_pane

0x5eac,	// (0x000b0246) aid_size_cell_afind_ParamLimits

0x5eac,	// (0x000b0246) aid_size_cell_afind

0x5eca,	// (0x000b0264) bg_popup_sub_pane_cp09_ParamLimits

0x5eca,	// (0x000b0264) bg_popup_sub_pane_cp09

0x5ed7,	// (0x000b0271) find_pane_cp01_ParamLimits

0x5ed7,	// (0x000b0271) find_pane_cp01

0xd7d0,	// (0x000b7b6a) grid_afind_control_pane_ParamLimits

0xd7d0,	// (0x000b7b6a) grid_afind_control_pane

0x5ee4,	// (0x000b027e) grid_afind_pane_ParamLimits

0x5ee4,	// (0x000b027e) grid_afind_pane

0x5f06,	// (0x000b02a0) cell_afind_pane_ParamLimits

0x5f06,	// (0x000b02a0) cell_afind_pane

0xcd11,	// (0x000b70ab) afind_page_pane_g1

0x5f6d,	// (0x000b0307) afind_page_pane_g2

0x5f76,	// (0x000b0310) afind_page_pane_g3

0x0002,

0xf953,	// (0x000b9ced) afind_page_pane_g

0x5f7f,	// (0x000b0319) afind_page_pane_t1

0xd7e4,	// (0x000b7b7e) cell_afind_grid_control_pane_ParamLimits

0xd7e4,	// (0x000b7b7e) cell_afind_grid_control_pane

0xd673,	// (0x000b7a0d) bg_button_pane_cp69_ParamLimits

0xd673,	// (0x000b7a0d) bg_button_pane_cp69

0x5f9f,	// (0x000b0339) cell_afind_pane_g1_ParamLimits

0x5f9f,	// (0x000b0339) cell_afind_pane_g1

0x5fac,	// (0x000b0346) cell_afind_pane_t1_ParamLimits

0x5fac,	// (0x000b0346) cell_afind_pane_t1

0xa622,	// (0x000b49bc) bg_button_pane_cp72

0xd7f3,	// (0x000b7b8d) cell_afind_grid_control_pane_g1

0x2f67,	// (0x000ad301) aid_image_placing_area_ParamLimits

0x2f67,	// (0x000ad301) aid_image_placing_area

0xd32a,	// (0x000b76c4) field_vitu_entry_pane_g1_ParamLimits

0xd32a,	// (0x000b76c4) field_vitu_entry_pane_g1

0xd336,	// (0x000b76d0) field_vitu_entry_pane_g2_ParamLimits

0xd336,	// (0x000b76d0) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x000b9b9a) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x000b9b9a) field_vitu_entry_pane_g

0x50d3,	// (0x000af46d) cell_vitu_itu_pane_g1_ParamLimits

0x5115,	// (0x000af4af) cell_vitu_itu_pane_t3_ParamLimits

0x5115,	// (0x000af4af) cell_vitu_itu_pane_t3

0xd612,	// (0x000b79ac) mp4_progress_pane_t1_ParamLimits

0xd62b,	// (0x000b79c5) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x000b9c33) mp4_progress_pane_t_ParamLimits

0xd644,	// (0x000b79de) mup_progress_pane_cp04_ParamLimits

0x5e83,	// (0x000b021d) main_myfav_hc_pane_t5_ParamLimits

0x5e83,	// (0x000b021d) main_myfav_hc_pane_t5

0x94c8,	// (0x000b3862) aid_zoom_text_primary

0x0257,	// (0x000aa5f1) popup_adpt_find_window_ParamLimits

0x951a,	// (0x000b38b4) main_cam_set_pane

0x58c3,	// (0x000afc5d) cam4_zoom_pane_ParamLimits

0x58c3,	// (0x000afc5d) cam4_zoom_pane

0x5fbe,	// (0x000b0358) main_cam_set_pane_g1_ParamLimits

0x5fbe,	// (0x000b0358) main_cam_set_pane_g1

0x5fcc,	// (0x000b0366) main_cam_set_pane_g2_ParamLimits

0x5fcc,	// (0x000b0366) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x000b9cf4) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x000b9cf4) main_cam_set_pane_g

0x5fed,	// (0x000b0387) main_cam_set_pane_t1_ParamLimits

0x5fed,	// (0x000b0387) main_cam_set_pane_t1

0x6008,	// (0x000b03a2) main_cset_listscroll_pane_ParamLimits

0x6008,	// (0x000b03a2) main_cset_listscroll_pane

0x6028,	// (0x000b03c2) main_cset_slider_pane_ParamLimits

0x6028,	// (0x000b03c2) main_cset_slider_pane

0xd804,	// (0x000b7b9e) main_cset_list_pane_ParamLimits

0xd804,	// (0x000b7b9e) main_cset_list_pane

0xd814,	// (0x000b7bae) scroll_pane_cp028

0x604e,	// (0x000b03e8) aid_area_touch_slider

0x606a,	// (0x000b0404) cset_slider_pane

0x6094,	// (0x000b042e) main_cset_slider_pane_g1

0x60a9,	// (0x000b0443) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x000b9cf9) main_cset_slider_pane_g

0xd84d,	// (0x000b7be7) main_cset_slider_pane_t1

0x6165,	// (0x000b04ff) main_cset_slider_pane_t2

0x617f,	// (0x000b0519) main_cset_slider_pane_t3

0x6199,	// (0x000b0533) main_cset_slider_pane_t4

0x61b3,	// (0x000b054d) main_cset_slider_pane_t5

0x61cd,	// (0x000b0567) main_cset_slider_pane_t6

0x61e2,	// (0x000b057c) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x000b9d1e) main_cset_slider_pane_t

0x62e6,	// (0x000b0680) cset_list_set_pane_ParamLimits

0x62e6,	// (0x000b0680) cset_list_set_pane

0x62f8,	// (0x000b0692) aid_position_infowindow_above

0x6300,	// (0x000b069a) aid_position_infowindow_below

0xa80b,	// (0x000b4ba5) cset_list_set_pane_g1_ParamLimits

0xa80b,	// (0x000b4ba5) cset_list_set_pane_g1

0xa817,	// (0x000b4bb1) cset_list_set_pane_g3_ParamLimits

0xa817,	// (0x000b4bb1) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x000b9d3d) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x000b9d3d) cset_list_set_pane_g

0xa826,	// (0x000b4bc0) cset_list_set_pane_t1_ParamLimits

0xa826,	// (0x000b4bc0) cset_list_set_pane_t1

0xa7a8,	// (0x000b4b42) list_highlight_pane_cp021_ParamLimits

0xa7a8,	// (0x000b4b42) list_highlight_pane_cp021

0xb629,	// (0x000b59c3) cset_slider_pane_g1

0xb63b,	// (0x000b59d5) cset_slider_pane_g2

0xb632,	// (0x000b59cc) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x000b9d42) cset_slider_pane_g

0x9fa4,	// (0x000b433e) aid_area_touch_cam4_zoom

0x9fac,	// (0x000b4346) cam4_zoom_cont_pane

0x9fb4,	// (0x000b434e) cam4_zoom_pane_g1

0x9fbc,	// (0x000b4356) cam4_zoom_pane_g2

0x6308,	// (0x000b06a2) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x000b9d49) cam4_zoom_pane_g

0x9fc4,	// (0x000b435e) cam4_zoom_cont_pane_g1

0x9fcd,	// (0x000b4367) cam4_zoom_cont_pane_g2

0x9fd6,	// (0x000b4370) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x000b9d50) cam4_zoom_cont_pane_g

0x56f4,	// (0x000afa8e) call4_image_pane_ParamLimits

0x56f4,	// (0x000afa8e) call4_image_pane

0x575b,	// (0x000afaf5) call4_windows_conf_pane_ParamLimits

0x57a0,	// (0x000afb3a) popup_call4_audio_in_window_ParamLimits

0x57a0,	// (0x000afb3a) popup_call4_audio_in_window

0x94a2,	// (0x000b383c) bg_popup_call2_act_pane_cp02

0xd67f,	// (0x000b7a19) call4_list_conf_pane

0xcd11,	// (0x000b70ab) call4_image_pane_g1

0xcd11,	// (0x000b70ab) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x000b9a5b) call4_image_pane_g

0xd8ed,	// (0x000b7c87) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8ed,	// (0x000b7c87) list_single_graphic_popup_conf4_pane

0x94a2,	// (0x000b383c) list_highlight_pane_cp022

0xd900,	// (0x000b7c9a) list_single_graphic_popup_conf4_pane_g1

0xb1fa,	// (0x000b5594) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x000b9d57) list_single_graphic_popup_conf4_pane_g

0xd908,	// (0x000b7ca2) list_single_graphic_popup_conf4_pane_t1

0x1357,	// (0x000ab6f1) popup_vtel_slider_window_ParamLimits

0x1357,	// (0x000ab6f1) popup_vtel_slider_window

0xd661,	// (0x000b79fb) dialer2_ne_pane_t2_ParamLimits

0xd661,	// (0x000b79fb) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x000b9c38) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x000b9c38) dialer2_ne_pane_t

0xcaf6,	// (0x000b6e90) bg_popup_sub_pane_cp010_ParamLimits

0xcaf6,	// (0x000b6e90) bg_popup_sub_pane_cp010

0x6310,	// (0x000b06aa) popup_vtel_slider_window_g1_ParamLimits

0x6310,	// (0x000b06aa) popup_vtel_slider_window_g1

0x6323,	// (0x000b06bd) popup_vtel_slider_window_g2_ParamLimits

0x6323,	// (0x000b06bd) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x000b9d5c) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x000b9d5c) popup_vtel_slider_window_g

0x6379,	// (0x000b0713) vtel_slider_pane_ParamLimits

0x6379,	// (0x000b0713) vtel_slider_pane

0x639b,	// (0x000b0735) vtel_slider_pane_g1_ParamLimits

0x639b,	// (0x000b0735) vtel_slider_pane_g1

0x63af,	// (0x000b0749) vtel_slider_pane_g2_ParamLimits

0x63af,	// (0x000b0749) vtel_slider_pane_g2

0x63c7,	// (0x000b0761) vtel_slider_pane_g3_ParamLimits

0x63c7,	// (0x000b0761) vtel_slider_pane_g3

0x639b,	// (0x000b0735) vtel_slider_pane_g4_ParamLimits

0x639b,	// (0x000b0735) vtel_slider_pane_g4

0x63dd,	// (0x000b0777) vtel_slider_pane_g5_ParamLimits

0x63dd,	// (0x000b0777) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x000b9d65) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x000b9d65) vtel_slider_pane_g

0x951a,	// (0x000b38b4) main_gallery2_pane

0x5ac3,	// (0x000afe5d) aid_size_row_itut2_dropdow_list_ParamLimits

0x5ac3,	// (0x000afe5d) aid_size_row_itut2_dropdow_list

0x5b4f,	// (0x000afee9) grid_vitu2_function_top_pane_ParamLimits

0x5b4f,	// (0x000afee9) grid_vitu2_function_top_pane

0x5bb9,	// (0x000aff53) popup_vitu2_dropdown_list_window_ParamLimits

0x5bb9,	// (0x000aff53) popup_vitu2_dropdown_list_window

0x5be2,	// (0x000aff7c) popup_vitu2_match_list_window

0x6401,	// (0x000b079b) cell_vitu2_function_top_pane_ParamLimits

0x6401,	// (0x000b079b) cell_vitu2_function_top_pane

0x6419,	// (0x000b07b3) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6419,	// (0x000b07b3) cell_vitu2_function_top_pane_cp01

0x6435,	// (0x000b07cf) cell_vitu2_function_top_wide_pane_ParamLimits

0x6435,	// (0x000b07cf) cell_vitu2_function_top_wide_pane

0x951a,	// (0x000b38b4) bg_button_pane_cp012

0x6451,	// (0x000b07eb) cell_vitu2_function_top_pane_g1

0x9fdf,	// (0x000b4379) bg_button_pane_cp013_ParamLimits

0x9fdf,	// (0x000b4379) bg_button_pane_cp013

0x6465,	// (0x000b07ff) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6465,	// (0x000b07ff) cell_vitu2_function_top_wide_pane_g1

0x951a,	// (0x000b38b4) bg_popup_sub_pane_cp20

0x647d,	// (0x000b0817) list_vitu2_match_list_pane

0xd6fa,	// (0x000b7a94) bg_popup_sub_pane_cp20_g1

0xd702,	// (0x000b7a9c) bg_popup_sub_pane_cp20_g2

0xace0,	// (0x000b507a) bg_popup_sub_pane_cp20_g3

0xd70a,	// (0x000b7aa4) bg_popup_sub_pane_cp20_g4

0xacc0,	// (0x000b505a) bg_popup_sub_pane_cp20_g5

0xd91e,	// (0x000b7cb8) bg_popup_sub_pane_cp20_g6

0xd71a,	// (0x000b7ab4) bg_popup_sub_pane_cp20_g7

0xd722,	// (0x000b7abc) bg_popup_sub_pane_cp20_g8

0xd72a,	// (0x000b7ac4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x000b9d70) bg_popup_sub_pane_cp20_g

0x9ffb,	// (0x000b4395) list_vitu2_match_list_item_pane_ParamLimits

0x9ffb,	// (0x000b4395) list_vitu2_match_list_item_pane

0xa00d,	// (0x000b43a7) list_vitu2_match_list_item_pane_t1

0x9528,	// (0x000b38c2) bg_popup_sub_pane_cp21

0xa01b,	// (0x000b43b5) grid_vitu2_dropdown_list_pane

0x64eb,	// (0x000b0885) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x64eb,	// (0x000b0885) cell_vitu2_dropdown_list_char_pane

0x650c,	// (0x000b08a6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x650c,	// (0x000b08a6) cell_vitu2_dropdown_list_ctrl_pane

0xd926,	// (0x000b7cc0) cell_vitu2_dropdown_list_char_pane_g1

0xd92f,	// (0x000b7cc9) cell_vitu2_dropdown_list_char_pane_g2

0xd938,	// (0x000b7cd2) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x000b9d8d) cell_vitu2_dropdown_list_char_pane_g

0x6538,	// (0x000b08d2) cell_vitu2_dropdown_list_char_pane_t1

0x6546,	// (0x000b08e0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6546,	// (0x000b08e0) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6553,	// (0x000b08ed) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6553,	// (0x000b08ed) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6560,	// (0x000b08fa) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6560,	// (0x000b08fa) cell_vitu2_dropdown_list_ctrl_pane_g3

0x656d,	// (0x000b0907) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x656d,	// (0x000b0907) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9eb3,	// (0x000b424d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9eb3,	// (0x000b424d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x000b9d94) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x000b9d94) cell_vitu2_dropdown_list_ctrl_pane_g

0x6589,	// (0x000b0923) aid_size_cell_gallery2_ParamLimits

0x6589,	// (0x000b0923) aid_size_cell_gallery2

0x65a7,	// (0x000b0941) grid_gallery2_pane_ParamLimits

0x65a7,	// (0x000b0941) grid_gallery2_pane

0x65c1,	// (0x000b095b) scroll_pane_cp029_ParamLimits

0x65c1,	// (0x000b095b) scroll_pane_cp029

0x65d2,	// (0x000b096c) cell_gallery2_pane_ParamLimits

0x65d2,	// (0x000b096c) cell_gallery2_pane

0xd941,	// (0x000b7cdb) cell_gallery2_pane_g2

0x6631,	// (0x000b09cb) cell_gallery2_pane_g3

0xd949,	// (0x000b7ce3) cell_gallery2_pane_g4

0xd951,	// (0x000b7ceb) cell_gallery2_pane_g5

0xa5d0,	// (0x000b496a) grid_highlight_pane_cp10

0x5be2,	// (0x000aff7c) popup_vitu2_match_list_window_ParamLimits

0x5bf9,	// (0x000aff93) popup_vitu2_query_window_ParamLimits

0x5bf9,	// (0x000aff93) popup_vitu2_query_window

0x9528,	// (0x000b38c2) bg_vitu2_candi_button_pane

0xd926,	// (0x000b7cc0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd92f,	// (0x000b7cc9) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd938,	// (0x000b7cd2) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6639,	// (0x000b09d3) bg_button_pane_cp015

0x664b,	// (0x000b09e5) bg_button_pane_cp016

0x665e,	// (0x000b09f8) bg_button_pane_cp017

0xc909,	// (0x000b6ca3) bg_popup_sub_pane_cp22

0xd959,	// (0x000b7cf3) popup_vitu2_query_window_g1

0x66a3,	// (0x000b0a3d) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x000b9d9f) popup_vitu2_query_window_g

0x66c2,	// (0x000b0a5c) popup_vitu2_query_window_t1_ParamLimits

0x66c2,	// (0x000b0a5c) popup_vitu2_query_window_t1

0x66f7,	// (0x000b0a91) popup_vitu2_query_window_t2_ParamLimits

0x66f7,	// (0x000b0a91) popup_vitu2_query_window_t2

0x6709,	// (0x000b0aa3) popup_vitu2_query_window_t3_ParamLimits

0x6709,	// (0x000b0aa3) popup_vitu2_query_window_t3

0x6731,	// (0x000b0acb) popup_vitu2_query_window_t4_ParamLimits

0x6731,	// (0x000b0acb) popup_vitu2_query_window_t4

0x6752,	// (0x000b0aec) popup_vitu2_query_window_t5_ParamLimits

0x6752,	// (0x000b0aec) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x000b9da6) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x000b9da6) popup_vitu2_query_window_t

0xd7fc,	// (0x000b7b96) main_cset_text_pane

0x604e,	// (0x000b03e8) aid_area_touch_slider_ParamLimits

0x606a,	// (0x000b0404) cset_slider_pane_ParamLimits

0x6094,	// (0x000b042e) main_cset_slider_pane_g1_ParamLimits

0x60a9,	// (0x000b0443) main_cset_slider_pane_g2_ParamLimits

0xd81d,	// (0x000b7bb7) main_cset_slider_pane_g3_ParamLimits

0xd81d,	// (0x000b7bb7) main_cset_slider_pane_g3

0x60be,	// (0x000b0458) main_cset_slider_pane_g4_ParamLimits

0x60be,	// (0x000b0458) main_cset_slider_pane_g4

0x60cd,	// (0x000b0467) main_cset_slider_pane_g5_ParamLimits

0x60cd,	// (0x000b0467) main_cset_slider_pane_g5

0x60d9,	// (0x000b0473) main_cset_slider_pane_g6_ParamLimits

0x60d9,	// (0x000b0473) main_cset_slider_pane_g6

0xf95f,	// (0x000b9cf9) main_cset_slider_pane_g_ParamLimits

0xd84d,	// (0x000b7be7) main_cset_slider_pane_t1_ParamLimits

0x6165,	// (0x000b04ff) main_cset_slider_pane_t2_ParamLimits

0x617f,	// (0x000b0519) main_cset_slider_pane_t3_ParamLimits

0x6199,	// (0x000b0533) main_cset_slider_pane_t4_ParamLimits

0x61b3,	// (0x000b054d) main_cset_slider_pane_t5_ParamLimits

0x61cd,	// (0x000b0567) main_cset_slider_pane_t6_ParamLimits

0x61e2,	// (0x000b057c) main_cset_slider_pane_t7_ParamLimits

0x620c,	// (0x000b05a6) main_cset_slider_pane_t8_ParamLimits

0x620c,	// (0x000b05a6) main_cset_slider_pane_t8

0x6234,	// (0x000b05ce) main_cset_slider_pane_t9_ParamLimits

0x6234,	// (0x000b05ce) main_cset_slider_pane_t9

0x625c,	// (0x000b05f6) main_cset_slider_pane_t10_ParamLimits

0x625c,	// (0x000b05f6) main_cset_slider_pane_t10

0x6284,	// (0x000b061e) main_cset_slider_pane_t11_ParamLimits

0x6284,	// (0x000b061e) main_cset_slider_pane_t11

0x62ac,	// (0x000b0646) main_cset_slider_pane_t12_ParamLimits

0x62ac,	// (0x000b0646) main_cset_slider_pane_t12

0x62c9,	// (0x000b0663) main_cset_slider_pane_t13_ParamLimits

0x62c9,	// (0x000b0663) main_cset_slider_pane_t13

0xf984,	// (0x000b9d1e) main_cset_slider_pane_t_ParamLimits

0x94a2,	// (0x000b383c) bg_popup_sub_pane_cp011

0xd965,	// (0x000b7cff) main_cset_text_pane_g1

0xd96d,	// (0x000b7d07) main_cset_text_pane_t1

0xd97b,	// (0x000b7d15) main_cset_text_pane_t2

0xd989,	// (0x000b7d23) main_cset_text_pane_t3

0xd997,	// (0x000b7d31) main_cset_text_pane_t4

0xd9a5,	// (0x000b7d3f) main_cset_text_pane_t5

0xd9b3,	// (0x000b7d4d) main_cset_text_pane_t6

0xd9c1,	// (0x000b7d5b) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x000b9db5) main_cset_text_pane_t

0x9528,	// (0x000b38c2) main_cam4_burst_pane

0x9528,	// (0x000b38c2) main_cam5_pane

0x5f8d,	// (0x000b0327) bg_button_pane_cp019

0x5f96,	// (0x000b0330) bg_button_pane_cp020

0xd829,	// (0x000b7bc3) main_cset_slider_pane_g7_ParamLimits

0xd829,	// (0x000b7bc3) main_cset_slider_pane_g7

0xd835,	// (0x000b7bcf) main_cset_slider_pane_g8_ParamLimits

0xd835,	// (0x000b7bcf) main_cset_slider_pane_g8

0x60ed,	// (0x000b0487) main_cset_slider_pane_g9_ParamLimits

0x60ed,	// (0x000b0487) main_cset_slider_pane_g9

0x60f9,	// (0x000b0493) main_cset_slider_pane_g10_ParamLimits

0x60f9,	// (0x000b0493) main_cset_slider_pane_g10

0x6105,	// (0x000b049f) main_cset_slider_pane_g11_ParamLimits

0x6105,	// (0x000b049f) main_cset_slider_pane_g11

0x6111,	// (0x000b04ab) main_cset_slider_pane_g12_ParamLimits

0x6111,	// (0x000b04ab) main_cset_slider_pane_g12

0x611d,	// (0x000b04b7) main_cset_slider_pane_g13_ParamLimits

0x611d,	// (0x000b04b7) main_cset_slider_pane_g13

0x6129,	// (0x000b04c3) main_cset_slider_pane_g14_ParamLimits

0x6129,	// (0x000b04c3) main_cset_slider_pane_g14

0x6135,	// (0x000b04cf) main_cset_slider_pane_g15_ParamLimits

0x6135,	// (0x000b04cf) main_cset_slider_pane_g15

0xd87b,	// (0x000b7c15) main_cset_slider_pane_t14_ParamLimits

0xd87b,	// (0x000b7c15) main_cset_slider_pane_t14

0xd8b4,	// (0x000b7c4e) main_cset_slider_pane_t15_ParamLimits

0xd8b4,	// (0x000b7c4e) main_cset_slider_pane_t15

0x67c9,	// (0x000b0b63) aid_cam4_burst_size_cell_ParamLimits

0x67c9,	// (0x000b0b63) aid_cam4_burst_size_cell

0x67e9,	// (0x000b0b83) grid_cam4_burst_pane_ParamLimits

0x67e9,	// (0x000b0b83) grid_cam4_burst_pane

0x6821,	// (0x000b0bbb) linegrid_cam4_burst_pane_ParamLimits

0x6821,	// (0x000b0bbb) linegrid_cam4_burst_pane

0xdb2d,	// (0x000b7ec7) scroll_pane_cp30_ParamLimits

0xdb2d,	// (0x000b7ec7) scroll_pane_cp30

0x6845,	// (0x000b0bdf) cell_cam4_burst_pane_ParamLimits

0x6845,	// (0x000b0bdf) cell_cam4_burst_pane

0xd9cf,	// (0x000b7d69) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9cf,	// (0x000b7d69) linegrid_cam4_burst_pane_g1

0x6892,	// (0x000b0c2c) linegrid_cam4_burst_pane_g2_ParamLimits

0x6892,	// (0x000b0c2c) linegrid_cam4_burst_pane_g2

0xd9dc,	// (0x000b7d76) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9dc,	// (0x000b7d76) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x000b9dc4) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x000b9dc4) linegrid_cam4_burst_pane_g

0x68a3,	// (0x000b0c3d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x68a3,	// (0x000b0c3d) linegrid_cam4_burst_pane_g3_copy1

0xd9e9,	// (0x000b7d83) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e9,	// (0x000b7d83) linegrid_cam4_burst_pane_g4

0x68bd,	// (0x000b0c57) linegrid_cam4_burst_pane_g5_ParamLimits

0x68bd,	// (0x000b0c57) linegrid_cam4_burst_pane_g5

0x68ce,	// (0x000b0c68) linegrid_cam4_burst_pane_g6_ParamLimits

0x68ce,	// (0x000b0c68) linegrid_cam4_burst_pane_g6

0xd9f6,	// (0x000b7d90) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9f6,	// (0x000b7d90) linegrid_cam4_burst_pane_g7

0x68e5,	// (0x000b0c7f) cell_cam4_burst_pane_g1

0xda0f,	// (0x000b7da9) main_cam5_pane_t1_ParamLimits

0xda0f,	// (0x000b7da9) main_cam5_pane_t1

0xda21,	// (0x000b7dbb) main_cam5_pane_t2_ParamLimits

0xda21,	// (0x000b7dbb) main_cam5_pane_t2

0xda33,	// (0x000b7dcd) main_cam5_pane_t3_ParamLimits

0xda33,	// (0x000b7dcd) main_cam5_pane_t3

0xda45,	// (0x000b7ddf) main_cam5_pane_t4_ParamLimits

0xda45,	// (0x000b7ddf) main_cam5_pane_t4

0xda5d,	// (0x000b7df7) main_cam5_pane_t5_ParamLimits

0xda5d,	// (0x000b7df7) main_cam5_pane_t5

0xda71,	// (0x000b7e0b) main_cam5_pane_t6_ParamLimits

0xda71,	// (0x000b7e0b) main_cam5_pane_t6

0xda85,	// (0x000b7e1f) main_cam5_pane_t7_ParamLimits

0xda85,	// (0x000b7e1f) main_cam5_pane_t7

0xda97,	// (0x000b7e31) main_cam5_pane_t8_ParamLimits

0xda97,	// (0x000b7e31) main_cam5_pane_t8

0xdab3,	// (0x000b7e4d) main_cam5_pane_t9_ParamLimits

0xdab3,	// (0x000b7e4d) main_cam5_pane_t9

0xdac5,	// (0x000b7e5f) main_cam5_pane_t10_ParamLimits

0xdac5,	// (0x000b7e5f) main_cam5_pane_t10

0xdad7,	// (0x000b7e71) main_cam5_pane_t11_ParamLimits

0xdad7,	// (0x000b7e71) main_cam5_pane_t11

0xdae9,	// (0x000b7e83) main_cam5_pane_t12_ParamLimits

0xdae9,	// (0x000b7e83) main_cam5_pane_t12

0xdafe,	// (0x000b7e98) main_cam5_pane_t13_ParamLimits

0xdafe,	// (0x000b7e98) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x000b9dd0) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x000b9dd0) main_cam5_pane_t

0x02d9,	// (0x000aa673) popup_scut_keymap_window_ParamLimits

0x02d9,	// (0x000aa673) popup_scut_keymap_window

0x68f8,	// (0x000b0c92) aid_size_cell_brow_shortcut

0xa5d0,	// (0x000b496a) bg_popup_window_pane_cp010

0x6904,	// (0x000b0c9e) grid_scut_pane

0x6910,	// (0x000b0caa) cell_scut_pane_ParamLimits

0x6910,	// (0x000b0caa) cell_scut_pane

0x6927,	// (0x000b0cc1) cell_scut_pane_g1

0xdb39,	// (0x000b7ed3) cell_scut_pane_t1

0xdb48,	// (0x000b7ee2) cell_scut_pane_t2

0x6930,	// (0x000b0cca) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x000b9deb) cell_scut_pane_t

0x45c9,	// (0x000ae963) main_mup3_pane_g8_ParamLimits

0x45c9,	// (0x000ae963) main_mup3_pane_g8

0x5adb,	// (0x000afe75) area_vitu2_query_pane_ParamLimits

0x5adb,	// (0x000afe75) area_vitu2_query_pane

0x6671,	// (0x000b0a0b) input_focus_pane_cp08

0xdb57,	// (0x000b7ef1) area_vitu2_query_pane_g1

0x693e,	// (0x000b0cd8) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x000b9df2) area_vitu2_query_pane_g

0x694f,	// (0x000b0ce9) area_vitu2_query_pane_t1_ParamLimits

0x694f,	// (0x000b0ce9) area_vitu2_query_pane_t1

0x6963,	// (0x000b0cfd) area_vitu2_query_pane_t2_ParamLimits

0x6963,	// (0x000b0cfd) area_vitu2_query_pane_t2

0x6977,	// (0x000b0d11) area_vitu2_query_pane_t3_ParamLimits

0x6977,	// (0x000b0d11) area_vitu2_query_pane_t3

0xa83b,	// (0x000b4bd5) area_vitu2_query_pane_t4_ParamLimits

0xa83b,	// (0x000b4bd5) area_vitu2_query_pane_t4

0xa863,	// (0x000b4bfd) area_vitu2_query_pane_t5_ParamLimits

0xa863,	// (0x000b4bfd) area_vitu2_query_pane_t5

0xa88b,	// (0x000b4c25) area_vitu2_query_pane_t6_ParamLimits

0xa88b,	// (0x000b4c25) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x000b9df7) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x000b9df7) area_vitu2_query_pane_t

0x699f,	// (0x000b0d39) bg_button_pane_cp018

0x69ad,	// (0x000b0d47) bg_button_pane_cp021

0x69b9,	// (0x000b0d53) bg_button_pane_cp022

0x69c8,	// (0x000b0d62) input_focus_pane_cp09

0xb336,	// (0x000b56d0) aid_size_touch_mv_arrow_left

0xb35f,	// (0x000b56f9) aid_size_touch_mv_arrow_right

0x614d,	// (0x000b04e7) main_cset_slider_pane_g16_ParamLimits

0x614d,	// (0x000b04e7) main_cset_slider_pane_g16

0x6159,	// (0x000b04f3) main_cset_slider_pane_g17_ParamLimits

0x6159,	// (0x000b04f3) main_cset_slider_pane_g17

0x68e5,	// (0x000b0c7f) cell_cam4_burst_pane_g1_ParamLimits

0x94a2,	// (0x000b383c) compa_mode_pane

0x6333,	// (0x000b06cd) popup_vtel_slider_window_g3_ParamLimits

0x6333,	// (0x000b06cd) popup_vtel_slider_window_g3

0x634a,	// (0x000b06e4) popup_vtel_slider_window_g4_ParamLimits

0x634a,	// (0x000b06e4) popup_vtel_slider_window_g4

0x6361,	// (0x000b06fb) popup_vtel_slider_window_t1_ParamLimits

0x6361,	// (0x000b06fb) popup_vtel_slider_window_t1

0x9528,	// (0x000b38c2) main_cl_pane

0x9ab1,	// (0x000b3e4b) popup_imed_adjust2_window_ParamLimits

0xc909,	// (0x000b6ca3) bg_tb_trans_pane_cp05_ParamLimits

0xd25f,	// (0x000b75f9) popup_imed_adjust2_window_g1_ParamLimits

0xd26e,	// (0x000b7608) popup_imed_adjust2_window_g2_ParamLimits

0xd26e,	// (0x000b7608) popup_imed_adjust2_window_g2

0xd27a,	// (0x000b7614) popup_imed_adjust2_window_g3_ParamLimits

0xd27a,	// (0x000b7614) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x000b9b5e) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x000b9b5e) popup_imed_adjust2_window_g

0xd286,	// (0x000b7620) popup_imed_adjust2_window_t1_ParamLimits

0xd29e,	// (0x000b7638) slider_imed_adjust_pane_ParamLimits

0xd2b2,	// (0x000b764c) slider_imed_adjust_pane_g1_ParamLimits

0xd2c2,	// (0x000b765c) slider_imed_adjust_pane_g2_ParamLimits

0xd2d2,	// (0x000b766c) slider_imed_adjust_pane_g3_ParamLimits

0xd2e3,	// (0x000b767d) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x000b9b65) slider_imed_adjust_pane_g_ParamLimits

0x5864,	// (0x000afbfe) aid_touch_area_cam4_ParamLimits

0x5864,	// (0x000afbfe) aid_touch_area_cam4

0x9e97,	// (0x000b4231) battery_pane_cp01

0x5933,	// (0x000afccd) main_camera4_pane_g6_ParamLimits

0x5933,	// (0x000afccd) main_camera4_pane_g6

0x595d,	// (0x000afcf7) main_camera4_pane_t2_ParamLimits

0x595d,	// (0x000afcf7) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x000b9c6c) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x000b9c6c) main_camera4_pane_t

0x5992,	// (0x000afd2c) aid_touch_area_vid4_ParamLimits

0x5992,	// (0x000afd2c) aid_touch_area_vid4

0x59e6,	// (0x000afd80) main_video4_pane_g5_ParamLimits

0x59e6,	// (0x000afd80) main_video4_pane_g5

0x5a0b,	// (0x000afda5) vid4_progress_pane_ParamLimits

0x5a0b,	// (0x000afda5) vid4_progress_pane

0xd841,	// (0x000b7bdb) main_cset_slider_pane_g18_ParamLimits

0xd841,	// (0x000b7bdb) main_cset_slider_pane_g18

0xda03,	// (0x000b7d9d) cell_cam4_burst_pane_g2_ParamLimits

0xda03,	// (0x000b7d9d) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x000b9dcb) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x000b9dcb) cell_cam4_burst_pane_g

0xa402,	// (0x000b479c) bg_cl_pane_ParamLimits

0xa402,	// (0x000b479c) bg_cl_pane

0x69d7,	// (0x000b0d71) cl_header_pane_ParamLimits

0x69d7,	// (0x000b0d71) cl_header_pane

0x69eb,	// (0x000b0d85) cl_listscroll_pane_ParamLimits

0x69eb,	// (0x000b0d85) cl_listscroll_pane

0xdb63,	// (0x000b7efd) bg_cl_pane_g1

0xdb6b,	// (0x000b7f05) bg_cl_pane_g2

0xdb73,	// (0x000b7f0d) bg_cl_pane_g3

0xdb7b,	// (0x000b7f15) bg_cl_pane_g4

0xdb83,	// (0x000b7f1d) bg_cl_pane_g5

0xdb8b,	// (0x000b7f25) bg_cl_pane_g6

0xdb93,	// (0x000b7f2d) bg_cl_pane_g7

0xdb9b,	// (0x000b7f35) bg_cl_pane_g8

0xdba3,	// (0x000b7f3d) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x000b9e06) bg_cl_pane_g

0x69fb,	// (0x000b0d95) aid_height_cl_leading_ParamLimits

0x69fb,	// (0x000b0d95) aid_height_cl_leading

0x6a07,	// (0x000b0da1) aid_height_cl_text_ParamLimits

0x6a07,	// (0x000b0da1) aid_height_cl_text

0xa7a8,	// (0x000b4b42) bg_cl_header_pane_ParamLimits

0xa7a8,	// (0x000b4b42) bg_cl_header_pane

0x6a26,	// (0x000b0dc0) cl_header_pane_g1_ParamLimits

0x6a26,	// (0x000b0dc0) cl_header_pane_g1

0x6a3c,	// (0x000b0dd6) cl_header_pane_t1_ParamLimits

0x6a3c,	// (0x000b0dd6) cl_header_pane_t1

0xdbab,	// (0x000b7f45) cl_list_pane

0xd814,	// (0x000b7bae) hc_scroll_pane_cp01

0xacc0,	// (0x000b505a) bg_cl_header_pane_g1

0xd6fa,	// (0x000b7a94) bg_cl_header_pane_g2

0xace0,	// (0x000b507a) bg_cl_header_pane_g3

0xd70a,	// (0x000b7aa4) bg_cl_header_pane_g4

0xd702,	// (0x000b7a9c) bg_cl_header_pane_g5

0xd91e,	// (0x000b7cb8) bg_cl_header_pane_g6

0xd722,	// (0x000b7abc) bg_cl_header_pane_g7

0xd72a,	// (0x000b7ac4) bg_cl_header_pane_g8

0xd71a,	// (0x000b7ab4) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x000b9e19) bg_cl_header_pane_g

0x6a55,	// (0x000b0def) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6a55,	// (0x000b0def) hc_cl_list_double_graphic_heading_pane

0x6a66,	// (0x000b0e00) hc_cl_list_single_graphic_pane_ParamLimits

0x6a66,	// (0x000b0e00) hc_cl_list_single_graphic_pane

0x6a7c,	// (0x000b0e16) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6a7c,	// (0x000b0e16) hc_cl_list_single_graphic_pane_g1

0x6a88,	// (0x000b0e22) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6a88,	// (0x000b0e22) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x000b9e2c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x000b9e2c) hc_cl_list_single_graphic_pane_g

0x6a9c,	// (0x000b0e36) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6a9c,	// (0x000b0e36) hc_cl_list_single_graphic_pane_t1

0x6a7c,	// (0x000b0e16) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6a7c,	// (0x000b0e16) hc_cl_list_double_graphic_heading_pane_g1

0x6ab1,	// (0x000b0e4b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6ab1,	// (0x000b0e4b) hc_cl_list_double_graphic_heading_pane_g2

0x6ac5,	// (0x000b0e5f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6ac5,	// (0x000b0e5f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x000b9e31) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x000b9e31) hc_cl_list_double_graphic_heading_pane_g

0x6ad9,	// (0x000b0e73) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6ad9,	// (0x000b0e73) hc_cl_list_double_graphic_heading_pane_t1

0x6aee,	// (0x000b0e88) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6aee,	// (0x000b0e88) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x000b9e38) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x000b9e38) hc_cl_list_double_graphic_heading_pane_t

0xa02b,	// (0x000b43c5) vid4_progress_pane_g1

0xa03b,	// (0x000b43d5) vid4_progress_pane_g2

0x6b03,	// (0x000b0e9d) vid4_progress_pane_g3

0xa04b,	// (0x000b43e5) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x000b9e3d) vid4_progress_pane_g

0x6b15,	// (0x000b0eaf) vid4_progress_pane_t1

0xa063,	// (0x000b43fd) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x000b9e48) vid4_progress_pane_t

0x6b2d,	// (0x000b0ec7) wait_bar_pane_cp07

0xcb04,	// (0x000b6e9e) blid_firmament_pane_ParamLimits

0xcb47,	// (0x000b6ee1) popup_blid_sat_info2_window_g1

0xcb6b,	// (0x000b6f05) popup_blid_sat_info2_window_t3

0xcb79,	// (0x000b6f13) popup_blid_sat_info2_window_t4

0xcb87,	// (0x000b6f21) popup_blid_sat_info2_window_t5

0xcb95,	// (0x000b6f2f) popup_blid_sat_info2_window_t6

0xcba5,	// (0x000b6f3f) popup_blid_sat_info2_window_t7

0xcbb3,	// (0x000b6f4d) popup_blid_sat_info2_window_t8

0xcbc1,	// (0x000b6f5b) popup_blid_sat_info2_window_t9

0xcbcf,	// (0x000b6f69) popup_blid_sat_info2_window_t10

0xcc91,	// (0x000b702b) aid_firma_cardinal_ParamLimits

0xcca5,	// (0x000b703f) blid_firmament_pane_t1_ParamLimits

0xccbc,	// (0x000b7056) blid_firmament_pane_t2_ParamLimits

0xccd3,	// (0x000b706d) blid_firmament_pane_t3_ParamLimits

0xccea,	// (0x000b7084) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x000b9a52) blid_firmament_pane_t_ParamLimits

0xcd01,	// (0x000b709b) blid_sat_info_pane_ParamLimits

0x951a,	// (0x000b38b4) main_cam_set_pane_ParamLimits

0x4e8d,	// (0x000af227) aid_size_cell_colour_35_ParamLimits

0x4ead,	// (0x000af247) aid_size_cell_colour_112_ParamLimits

0x4ecd,	// (0x000af267) aid_size_cell_effect_ParamLimits

0xc909,	// (0x000b6ca3) bg_tb_trans_pane_cp02_ParamLimits

0xaf28,	// (0x000b52c2) heading_imed_pane_ParamLimits

0x4eed,	// (0x000af287) listscroll_imed_pane_ParamLimits

0xbf2f,	// (0x000b62c9) popup_call2_audio_first_window_g5_ParamLimits

0xbf2f,	// (0x000b62c9) popup_call2_audio_first_window_g5

0x5480,	// (0x000af81a) aid_size_touch_image3_arrow_left_ParamLimits

0x5480,	// (0x000af81a) aid_size_touch_image3_arrow_left

0x54ac,	// (0x000af846) aid_size_touch_image3_arrow_right_ParamLimits

0x54ac,	// (0x000af846) aid_size_touch_image3_arrow_right

0xa078,	// (0x000b4412) vid4_progress_pane_t3

0x5200,	// (0x000af59a) main_hwr_training_symbol_option_pane_ParamLimits

0x5200,	// (0x000af59a) main_hwr_training_symbol_option_pane

0xd54c,	// (0x000b78e6) popup_hwr_training_preview_window_ParamLimits

0xd54c,	// (0x000b78e6) popup_hwr_training_preview_window

0x5220,	// (0x000af5ba) hwr_training_navi_pane_g5_ParamLimits

0x5220,	// (0x000af5ba) hwr_training_navi_pane_g5

0xd6e8,	// (0x000b7a82) popup_char_count_window

0x951a,	// (0x000b38b4) bg_popup_sub_pane_cp20_ParamLimits

0x647d,	// (0x000b0817) list_vitu2_match_list_pane_ParamLimits

0x648c,	// (0x000b0826) vitu2_page_scroll_pane_ParamLimits

0x648c,	// (0x000b0826) vitu2_page_scroll_pane

0xdbb4,	// (0x000b7f4e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbb4,	// (0x000b7f4e) list_single_hwr_training_symbol_option_pane

0xdbc7,	// (0x000b7f61) list_single_hwr_training_symbol_option_pane_g1

0xdbcf,	// (0x000b7f69) list_single_hwr_training_symbol_option_pane_t1

0xdbdd,	// (0x000b7f77) bg_button_pane_cp023

0xdbe6,	// (0x000b7f80) bg_button_pane_cp024

0x6b6f,	// (0x000b0f09) vitu2_page_scroll_pane_g1

0x6b77,	// (0x000b0f11) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x000b9e4f) vitu2_page_scroll_pane_g

0x6b7f,	// (0x000b0f19) vitu2_page_scroll_pane_t1

0xca64,	// (0x000b6dfe) popup_char_count_window_g1

0xdc19,	// (0x000b7fb3) popup_char_count_window_g2

0xdc22,	// (0x000b7fbc) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x000b9e54) popup_char_count_window_g

0xdc2b,	// (0x000b7fc5) popup_char_count_window_t1

0x9528,	// (0x000b38c2) main_vded2_pane

0xd24b,	// (0x000b75e5) aid_size_cell_imed_line

0xd255,	// (0x000b75ef) grid_imed_line_width_pane

0x9f5d,	// (0x000b42f7) vid4_indicators_pane_g4

0xdc39,	// (0x000b7fd3) cell_imed_line_width_pane_ParamLimits

0xdc39,	// (0x000b7fd3) cell_imed_line_width_pane

0xdc4d,	// (0x000b7fe7) cell_imed_line_width_pane_g1

0xcf64,	// (0x000b72fe) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x000b9e5b) cell_imed_line_width_pane_g

0x6b8e,	// (0x000b0f28) main_vded2_pane_g1_ParamLimits

0x6b8e,	// (0x000b0f28) main_vded2_pane_g1

0x6ba4,	// (0x000b0f3e) main_vded2_pane_g2_ParamLimits

0x6ba4,	// (0x000b0f3e) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x000b9e60) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x000b9e60) main_vded2_pane_g

0x6bb6,	// (0x000b0f50) vded2_slider_pane_ParamLimits

0x6bb6,	// (0x000b0f50) vded2_slider_pane

0x6bc6,	// (0x000b0f60) aid_size_touch_vded2_end

0x6bd0,	// (0x000b0f6a) aid_size_touch_vded2_playhead

0xdc56,	// (0x000b7ff0) aid_size_touch_vded2_start

0xdc5e,	// (0x000b7ff8) vded2_slider_bg_pane

0xdc67,	// (0x000b8001) vded2_slider_pane_g1

0xdc70,	// (0x000b800a) vded2_slider_pane_g2

0x6bda,	// (0x000b0f74) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x000b9e65) vded2_slider_pane_g

0xdc78,	// (0x000b8012) vded2_slider_bg_pane_g1

0xdc81,	// (0x000b801b) vded2_slider_bg_pane_g2

0xdc8a,	// (0x000b8024) vded2_slider_bg_pane_g3

0x0002,

0xfad2,	// (0x000b9e6c) vded2_slider_bg_pane_g

0x2bd6,	// (0x000acf70) aid_postcard_touch_down_pane_ParamLimits

0x2bd6,	// (0x000acf70) aid_postcard_touch_down_pane

0x2bec,	// (0x000acf86) aid_postcard_touch_up_pane_ParamLimits

0x2bec,	// (0x000acf86) aid_postcard_touch_up_pane

0x9528,	// (0x000b38c2) main_blid2_pane

0x9a97,	// (0x000b3e31) popup_blid2_search_window

0x94a2,	// (0x000b383c) blid2_gps_pane

0x94a2,	// (0x000b383c) blid2_navig_pane

0x94a2,	// (0x000b383c) blid2_search_pane

0x94a2,	// (0x000b383c) blid2_tripm_pane

0x6be5,	// (0x000b0f7f) blid2_search_pane_g1_ParamLimits

0x6be5,	// (0x000b0f7f) blid2_search_pane_g1

0x6bff,	// (0x000b0f99) blid2_search_pane_t1_ParamLimits

0x6bff,	// (0x000b0f99) blid2_search_pane_t1

0x6c11,	// (0x000b0fab) aid_size_cell_blid2_gps_ParamLimits

0x6c11,	// (0x000b0fab) aid_size_cell_blid2_gps

0x6c29,	// (0x000b0fc3) blid2_gps_pane_g1_ParamLimits

0x6c29,	// (0x000b0fc3) blid2_gps_pane_g1

0x6c3d,	// (0x000b0fd7) grid_blid2_satellite_pane_ParamLimits

0x6c3d,	// (0x000b0fd7) grid_blid2_satellite_pane

0x6c57,	// (0x000b0ff1) blid2_navig_pane_g1_ParamLimits

0x6c57,	// (0x000b0ff1) blid2_navig_pane_g1

0x6c63,	// (0x000b0ffd) blid2_navig_pane_t1_ParamLimits

0x6c63,	// (0x000b0ffd) blid2_navig_pane_t1

0x6c7e,	// (0x000b1018) blid2_navig_pane_t2_ParamLimits

0x6c7e,	// (0x000b1018) blid2_navig_pane_t2

0x0001,

0xfad9,	// (0x000b9e73) blid2_navig_pane_t_ParamLimits

0xfad9,	// (0x000b9e73) blid2_navig_pane_t

0x6c99,	// (0x000b1033) blid2_navig_ring_pane_ParamLimits

0x6c99,	// (0x000b1033) blid2_navig_ring_pane

0x6cb2,	// (0x000b104c) blid2_speed_pane_ParamLimits

0x6cb2,	// (0x000b104c) blid2_speed_pane

0x6cbe,	// (0x000b1058) blid2_tripm_pane_g1_ParamLimits

0x6cbe,	// (0x000b1058) blid2_tripm_pane_g1

0x6cd7,	// (0x000b1071) blid2_tripm_pane_g2_ParamLimits

0x6cd7,	// (0x000b1071) blid2_tripm_pane_g2

0x6ceb,	// (0x000b1085) blid2_tripm_pane_g3_ParamLimits

0x6ceb,	// (0x000b1085) blid2_tripm_pane_g3

0x6cff,	// (0x000b1099) blid2_tripm_pane_g4_ParamLimits

0x6cff,	// (0x000b1099) blid2_tripm_pane_g4

0x6d13,	// (0x000b10ad) blid2_tripm_pane_g5_ParamLimits

0x6d13,	// (0x000b10ad) blid2_tripm_pane_g5

0x0005,

0xfade,	// (0x000b9e78) blid2_tripm_pane_g_ParamLimits

0xfade,	// (0x000b9e78) blid2_tripm_pane_g

0x6d39,	// (0x000b10d3) blid2_tripm_pane_t1_ParamLimits

0x6d39,	// (0x000b10d3) blid2_tripm_pane_t1

0x6d54,	// (0x000b10ee) blid2_tripm_pane_t2_ParamLimits

0x6d54,	// (0x000b10ee) blid2_tripm_pane_t2

0x6d6d,	// (0x000b1107) blid2_tripm_pane_t3_ParamLimits

0x6d6d,	// (0x000b1107) blid2_tripm_pane_t3

0x0003,

0xfaeb,	// (0x000b9e85) blid2_tripm_pane_t_ParamLimits

0xfaeb,	// (0x000b9e85) blid2_tripm_pane_t

0x6db4,	// (0x000b114e) cell_blid2_satellite_pane_ParamLimits

0x6db4,	// (0x000b114e) cell_blid2_satellite_pane

0x6dd2,	// (0x000b116c) cell_blid2_satellite_pane_g1

0xdc93,	// (0x000b802d) cell_blid2_satellite_pane_t1

0xcd11,	// (0x000b70ab) blid2_speed_pane_g1

0xdca1,	// (0x000b803b) blid2_speed_pane_t1

0xdcaf,	// (0x000b8049) blid2_speed_pane_t2

0x0001,

0xfaf4,	// (0x000b9e8e) blid2_speed_pane_t

0xcd11,	// (0x000b70ab) blid2_navig_ring_pane_g1

0x6ddb,	// (0x000b1175) blid2_navig_ring_pane_g2

0x6de3,	// (0x000b117d) blid2_navig_ring_pane_g3

0x6deb,	// (0x000b1185) blid2_navig_ring_pane_g4

0x6df3,	// (0x000b118d) blid2_navig_ring_pane_g5

0x0004,

0xfaf9,	// (0x000b9e93) blid2_navig_ring_pane_g

0x94a2,	// (0x000b383c) bg_popup_window_pane_cp011

0xdcbd,	// (0x000b8057) popup_blid2_search_window_g1

0xdcc5,	// (0x000b805f) popup_blid2_search_window_t1

0xdcd3,	// (0x000b806d) popup_blid2_search_window_t2

0x0001,

0xfb04,	// (0x000b9e9e) popup_blid2_search_window_t

0xa718,	// (0x000b4ab2) main_browser_pane_g1

0xa402,	// (0x000b479c) main_browser_pane_ParamLimits

0x951a,	// (0x000b38b4) bg_button_pane_cp011_ParamLimits

0x5d23,	// (0x000b00bd) cell_vitu2_function_pane_g1_ParamLimits

0xc909,	// (0x000b6ca3) bg_popup_sub_pane_cp22_ParamLimits

0x6671,	// (0x000b0a0b) input_focus_pane_cp08_ParamLimits

0x6688,	// (0x000b0a22) popup_vitu2_query_button_pane_ParamLimits

0x6688,	// (0x000b0a22) popup_vitu2_query_button_pane

0x6699,	// (0x000b0a33) popup_vitu2_query_input_button_pane

0xd959,	// (0x000b7cf3) popup_vitu2_query_window_g1_ParamLimits

0x66a3,	// (0x000b0a3d) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x000b9d9f) popup_vitu2_query_window_g_ParamLimits

0x94a2,	// (0x000b383c) bg_button_pane_cp026

0x6dfb,	// (0x000b1195) popup_vitu2_query_input_button_pane_g1

0x94a2,	// (0x000b383c) bg_button_pane_cp025

0xdce1,	// (0x000b807b) popup_vitu2_query_button_pane_t1

0x427e,	// (0x000ae618) main_mp3_pane_t6

0x428c,	// (0x000ae626) popup_slider_window_cp01

0x9ec1,	// (0x000b425b) cam4_battery_pane

0x9f1a,	// (0x000b42b4) cam4_battery_pane_cp02

0xa023,	// (0x000b43bd) cam4_battery_pane_cp01

0xa023,	// (0x000b43bd) cam4_battery_pane_cp03

0xd657,	// (0x000b79f1) cam4_battery_pane_g1

0xcd11,	// (0x000b70ab) cam4_battery_pane_g2

0x0001,

0xfb09,	// (0x000b9ea3) cam4_battery_pane_g

0xcbdd,	// (0x000b6f77) popup_blid_sat_info2_window_t11

0xb336,	// (0x000b56d0) aid_size_touch_mv_arrow_left_ParamLimits

0xb35f,	// (0x000b56f9) aid_size_touch_mv_arrow_right_ParamLimits

0xb3bd,	// (0x000b5757) navi_pane_g1_ParamLimits

0xb3c9,	// (0x000b5763) navi_pane_g2_ParamLimits

0xb3f7,	// (0x000b5791) navi_pane_g3_ParamLimits

0xf3ca,	// (0x000b9764) navi_pane_g_ParamLimits

0x25fc,	// (0x000ac996) navi_pane_mv_t1_ParamLimits

0x4ef9,	// (0x000af293) grid_imed_effect_pane_ParamLimits

0x1254,	// (0x000ab5ee) aid_placing_vt_slider_lsc

0xa667,	// (0x000b4a01) aid_placing_vt_slider_prt

0xa7a8,	// (0x000b4b42) bg_tb_trans_pane_cp01_ParamLimits

0xce94,	// (0x000b722e) popup_image_details_window_g1_ParamLimits

0xcea7,	// (0x000b7241) popup_image_details_window_g2_ParamLimits

0xcebc,	// (0x000b7256) popup_image_details_window_g3_ParamLimits

0xcebc,	// (0x000b7256) popup_image_details_window_g3

0xf6fd,	// (0x000b9a97) popup_image_details_window_g_ParamLimits

0xced0,	// (0x000b726a) popup_image_details_window_t1_ParamLimits

0xcee2,	// (0x000b727c) popup_image_details_window_t2_ParamLimits

0xcefb,	// (0x000b7295) popup_image_details_window_t3_ParamLimits

0xcf0f,	// (0x000b72a9) popup_image_details_window_t4_ParamLimits

0xcf2a,	// (0x000b72c4) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x000b9a9e) popup_image_details_window_t_ParamLimits

0x6a13,	// (0x000b0dad) cl_header_name_pane_ParamLimits

0x6a13,	// (0x000b0dad) cl_header_name_pane

0x6e03,	// (0x000b119d) cl_header_name_pane_t1_ParamLimits

0x6e03,	// (0x000b119d) cl_header_name_pane_t1

0x6e24,	// (0x000b11be) cl_header_name_pane_t2_ParamLimits

0x6e24,	// (0x000b11be) cl_header_name_pane_t2

0x6e66,	// (0x000b1200) cl_header_name_pane_t3_ParamLimits

0x6e66,	// (0x000b1200) cl_header_name_pane_t3

0x0002,

0xfb0e,	// (0x000b9ea8) cl_header_name_pane_t_ParamLimits

0xfb0e,	// (0x000b9ea8) cl_header_name_pane_t

0xb486,	// (0x000b5820) navi_pane_mv_g2_ParamLimits

0xd6c2,	// (0x000b7a5c) field_vitu2_entry_pane_g1_ParamLimits

0xd6ce,	// (0x000b7a68) field_vitu2_entry_pane_g2_ParamLimits

0xd6da,	// (0x000b7a74) field_vitu2_entry_pane_g3_ParamLimits

0xd6da,	// (0x000b7a74) field_vitu2_entry_pane_g3

0xf904,	// (0x000b9c9e) field_vitu2_entry_pane_g_ParamLimits

0x9f92,	// (0x000b432c) cell_vitu2_itu_pane_g1_ParamLimits

0x5cb7,	// (0x000b0051) cell_vitu2_itu_pane_g2_ParamLimits

0x5cb7,	// (0x000b0051) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x000b9caa) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x000b9caa) cell_vitu2_itu_pane_g

0x951a,	// (0x000b38b4) bg_vkb2_func_pane_cp05_ParamLimits

0x951a,	// (0x000b38b4) bg_vkb2_func_pane_cp05

0x951a,	// (0x000b38b4) bg_vkb2_func_pane_cp03

0x951a,	// (0x000b38b4) bg_vkb2_func_pane_cp04

0x951a,	// (0x000b38b4) bg_vkb2_func_pane_cp10_ParamLimits

0x951a,	// (0x000b38b4) bg_vkb2_func_pane_cp10

0x69b9,	// (0x000b0d53) bg_vkb2_func_pane_cp08

0x699f,	// (0x000b0d39) bg_vkb2_func_pane_cp06

0x69ad,	// (0x000b0d47) bg_vkb2_func_pane_cp07

0xdbef,	// (0x000b7f89) bg_vkb2_func_pane_cp11_ParamLimits

0xdbef,	// (0x000b7f89) bg_vkb2_func_pane_cp11

0xdc04,	// (0x000b7f9e) bg_vkb2_func_pane_cp12_ParamLimits

0xdc04,	// (0x000b7f9e) bg_vkb2_func_pane_cp12

0x94a2,	// (0x000b383c) bg_vkb2_func_pane_cp09

0xd6fa,	// (0x000b7a94) bg_vkb2_func_pane_g1

0xace0,	// (0x000b507a) bg_vkb2_func_pane_g2

0xd702,	// (0x000b7a9c) bg_vkb2_func_pane_g3

0xd70a,	// (0x000b7aa4) bg_vkb2_func_pane_g4

0xd91e,	// (0x000b7cb8) bg_vkb2_func_pane_g5

0xd722,	// (0x000b7abc) bg_vkb2_func_pane_g6

0xd72a,	// (0x000b7ac4) bg_vkb2_func_pane_g7

0xd71a,	// (0x000b7ab4) bg_vkb2_func_pane_g8

0xacc0,	// (0x000b505a) bg_vkb2_func_pane_g9

0x0008,

0xfb15,	// (0x000b9eaf) bg_vkb2_func_pane_g

0x6d27,	// (0x000b10c1) blid2_tripm_pane_g6_ParamLimits

0x6d27,	// (0x000b10c1) blid2_tripm_pane_g6

0xd60a,	// (0x000b79a4) mp4_progress_pane_g1

0x6da0,	// (0x000b113a) blid2_tripm_values_pane_ParamLimits

0x6da0,	// (0x000b113a) blid2_tripm_values_pane

0x6e97,	// (0x000b1231) blid2_tripm_values_pane_t1

0x6ea5,	// (0x000b123f) blid2_tripm_values_pane_t2

0x6eb3,	// (0x000b124d) blid2_tripm_values_pane_t3

0x6ec1,	// (0x000b125b) blid2_tripm_values_pane_t4

0x6ecf,	// (0x000b1269) blid2_tripm_values_pane_t5

0x6edd,	// (0x000b1277) blid2_tripm_values_pane_t6

0x6eeb,	// (0x000b1285) blid2_tripm_values_pane_t7

0x6ef9,	// (0x000b1293) blid2_tripm_values_pane_t8

0x6f07,	// (0x000b12a1) blid2_tripm_values_pane_t9

0x0008,

0xfb28,	// (0x000b9ec2) blid2_tripm_values_pane_t

0x1296,	// (0x000ab630) call_video_pane_t1_ParamLimits

0x12b4,	// (0x000ab64e) call_video_pane_t2_ParamLimits

0xf253,	// (0x000b95ed) call_video_pane_t_ParamLimits

0x2adb,	// (0x000ace75) msg_header_pane_g1_ParamLimits

0xb66e,	// (0x000b5a08) msg_header_pane_g2_ParamLimits

0xb66e,	// (0x000b5a08) msg_header_pane_g2

0x0001,

0xf46d,	// (0x000b9807) msg_header_pane_g_ParamLimits

0xf46d,	// (0x000b9807) msg_header_pane_g

0xa402,	// (0x000b479c) main_clock2_pane_ParamLimits

0x4bfa,	// (0x000aef94) grid_clock2_toolbar_pane_ParamLimits

0x4bfa,	// (0x000aef94) grid_clock2_toolbar_pane

0x4bfa,	// (0x000aef94) listscroll_clock2_pane_ParamLimits

0x4bfa,	// (0x000aef94) listscroll_clock2_pane

0x4cde,	// (0x000af078) main_clock2_pane_t3_ParamLimits

0x4cde,	// (0x000af078) main_clock2_pane_t3

0x4d02,	// (0x000af09c) main_clock2_pane_t4_ParamLimits

0x4d02,	// (0x000af09c) main_clock2_pane_t4

0xdcef,	// (0x000b8089) cell_clock2_toolbar_pane

0xdcf7,	// (0x000b8091) cell_clock2_toolbar_pane_cp01

0xdcf7,	// (0x000b8091) cell_clock2_toolbar_pane_cp02

0xdcff,	// (0x000b8099) cell_clock2_toolbar_pane_cp03

0xdd07,	// (0x000b80a1) list_clock2_pane

0xb2ac,	// (0x000b5646) scroll_pane_cp10

0xdd0f,	// (0x000b80a9) list_single_clock2_pane_ParamLimits

0xdd0f,	// (0x000b80a9) list_single_clock2_pane

0xa5d0,	// (0x000b496a) list_highlight_pane_cp08

0xdd1c,	// (0x000b80b6) list_single_clock2_pane_t1

0xdd2a,	// (0x000b80c4) list_single_clock2_pane_t2

0x0001,

0xfb3b,	// (0x000b9ed5) list_single_clock2_pane_t

0x94a2,	// (0x000b383c) bg_button_pane_cp10

0xdd38,	// (0x000b80d2) cell_clock2_toolbar_pane_g1

0x2b62,	// (0x000acefc) aid_main_viewer_pane_g1_ParamLimits

0x2b62,	// (0x000acefc) aid_main_viewer_pane_g1

0x2b70,	// (0x000acf0a) aid_main_viewer_pane_g2_ParamLimits

0x2b70,	// (0x000acf0a) aid_main_viewer_pane_g2

0x2b7e,	// (0x000acf18) aid_main_viewer_pane_g3_ParamLimits

0x2b7e,	// (0x000acf18) aid_main_viewer_pane_g3

0x2b8d,	// (0x000acf27) aid_main_viewer_pane_g4_ParamLimits

0x2b8d,	// (0x000acf27) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x000b9818) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x000b9818) aid_main_viewer_pane_g

0x3493,	// (0x000ad82d) main_calc_pane_ParamLimits

0x34b9,	// (0x000ad853) main_dialer2_pane_ParamLimits

0x9528,	// (0x000b38c2) main_cam6_pane

0x9528,	// (0x000b38c2) main_vid6_pane

0x4c06,	// (0x000aefa0) listscroll_gen_pane_cp06_ParamLimits

0x4c06,	// (0x000aefa0) listscroll_gen_pane_cp06

0x4d25,	// (0x000af0bf) main_clock2_pane_t5_ParamLimits

0x4d25,	// (0x000af0bf) main_clock2_pane_t5

0x4d83,	// (0x000af11d) aid_call2_pane_cp10_ParamLimits

0x4d95,	// (0x000af12f) aid_call_pane_cp10_ParamLimits

0xb32a,	// (0x000b56c4) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb32a,	// (0x000b56c4) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4da7,	// (0x000af141) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4da7,	// (0x000af141) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb32a,	// (0x000b56c4) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x000b9b53) popup_clock_analogue_window_cp10_g_ParamLimits

0x4dbd,	// (0x000af157) popup_clock_analogue_window_cp10_t1_ParamLimits

0x542d,	// (0x000af7c7) cell_dialer2_keypad_pane_g2_ParamLimits

0x542d,	// (0x000af7c7) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x000b9c3d) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x000b9c3d) cell_dialer2_keypad_pane_g

0x5449,	// (0x000af7e3) cell_dialer2_keypad_pane_t1

0x6040,	// (0x000b03da) main_cset_text2_pane_ParamLimits

0x6040,	// (0x000b03da) main_cset_text2_pane

0xdb57,	// (0x000b7ef1) area_vitu2_query_pane_g1_ParamLimits

0x693e,	// (0x000b0cd8) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x000b9df2) area_vitu2_query_pane_g_ParamLimits

0xa8b3,	// (0x000b4c4d) area_vitu2_query_pane_t7_ParamLimits

0xa8b3,	// (0x000b4c4d) area_vitu2_query_pane_t7

0x699f,	// (0x000b0d39) bg_button_pane_cp018_ParamLimits

0x69ad,	// (0x000b0d47) bg_button_pane_cp021_ParamLimits

0x69b9,	// (0x000b0d53) bg_button_pane_cp022_ParamLimits

0x69b9,	// (0x000b0d53) bg_vkb2_func_pane_cp08_ParamLimits

0x699f,	// (0x000b0d39) bg_vkb2_func_pane_cp06_ParamLimits

0x69ad,	// (0x000b0d47) bg_vkb2_func_pane_cp07_ParamLimits

0x69c8,	// (0x000b0d62) input_focus_pane_cp09_ParamLimits

0xa08d,	// (0x000b4427) cam6_autofocus_pane_ParamLimits

0xa08d,	// (0x000b4427) cam6_autofocus_pane

0x6f15,	// (0x000b12af) cam6_image_uncrop_pane_ParamLimits

0x6f15,	// (0x000b12af) cam6_image_uncrop_pane

0x6f24,	// (0x000b12be) cam6_indi_pane_ParamLimits

0x6f24,	// (0x000b12be) cam6_indi_pane

0x6f3a,	// (0x000b12d4) cam6_mode_pane_ParamLimits

0x6f3a,	// (0x000b12d4) cam6_mode_pane

0x6f4c,	// (0x000b12e6) cam6_timer_pane_ParamLimits

0x6f4c,	// (0x000b12e6) cam6_timer_pane

0x6f58,	// (0x000b12f2) cam6_zoom_pane_ParamLimits

0x6f58,	// (0x000b12f2) cam6_zoom_pane

0x6f64,	// (0x000b12fe) cam6_mode_pane_g1_ParamLimits

0x6f64,	// (0x000b12fe) cam6_mode_pane_g1

0x6f74,	// (0x000b130e) cam6_mode_pane_g2_ParamLimits

0x6f74,	// (0x000b130e) cam6_mode_pane_g2

0x6f84,	// (0x000b131e) cam6_mode_pane_g3_ParamLimits

0x6f84,	// (0x000b131e) cam6_mode_pane_g3

0x6f94,	// (0x000b132e) cam6_mode_pane_g4_ParamLimits

0x6f94,	// (0x000b132e) cam6_mode_pane_g4

0x0003,

0xfb40,	// (0x000b9eda) cam6_mode_pane_g_ParamLimits

0xfb40,	// (0x000b9eda) cam6_mode_pane_g

0xdd40,	// (0x000b80da) bg_tb_trans_pane_cp08_ParamLimits

0xdd40,	// (0x000b80da) bg_tb_trans_pane_cp08

0xdd4e,	// (0x000b80e8) cam6_battery_pane_ParamLimits

0xdd4e,	// (0x000b80e8) cam6_battery_pane

0xdd64,	// (0x000b80fe) cam6_indi_pane_g1_ParamLimits

0xdd64,	// (0x000b80fe) cam6_indi_pane_g1

0xdd76,	// (0x000b8110) cam6_indi_pane_g2_ParamLimits

0xdd76,	// (0x000b8110) cam6_indi_pane_g2

0xdd88,	// (0x000b8122) cam6_indi_pane_g3_ParamLimits

0xdd88,	// (0x000b8122) cam6_indi_pane_g3

0x0002,

0xfb49,	// (0x000b9ee3) cam6_indi_pane_g_ParamLimits

0xfb49,	// (0x000b9ee3) cam6_indi_pane_g

0xdd9a,	// (0x000b8134) cam6_indi_pane_t1_ParamLimits

0xdd9a,	// (0x000b8134) cam6_indi_pane_t1

0x6fa4,	// (0x000b133e) cam6_autofocus_pane_g1

0x6fac,	// (0x000b1346) cam6_autofocus_pane_g2

0x6fb4,	// (0x000b134e) cam6_autofocus_pane_g3

0x6fbc,	// (0x000b1356) cam6_autofocus_pane_g4

0x0003,

0xfb50,	// (0x000b9eea) cam6_autofocus_pane_g

0xddc0,	// (0x000b815a) cam6_timer_pane_g1

0xddc8,	// (0x000b8162) cam6_timer_pane_t1

0xddd6,	// (0x000b8170) cam6_zoom_cont_pane

0xddde,	// (0x000b8178) cam6_zoom_pane_g1

0xdde6,	// (0x000b8180) cam6_zoom_pane_g2

0x6fc4,	// (0x000b135e) cam6_zoom_pane_g3

0x0002,

0xfb59,	// (0x000b9ef3) cam6_zoom_pane_g

0xcd11,	// (0x000b70ab) cam6_battery_pane_g1

0xcd11,	// (0x000b70ab) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x000b9a5b) cam6_battery_pane_g

0xddee,	// (0x000b8188) cam6_zoom_cont_pane_g1

0xddf7,	// (0x000b8191) cam6_zoom_cont_pane_g2

0xde00,	// (0x000b819a) cam6_zoom_cont_pane_g3

0x0002,

0xfb60,	// (0x000b9efa) cam6_zoom_cont_pane_g

0x6fe1,	// (0x000b137b) cam6_mode_pane_cp_ParamLimits

0x6fe1,	// (0x000b137b) cam6_mode_pane_cp

0x6ff3,	// (0x000b138d) cam6_zoom_pane_cp_ParamLimits

0x6ff3,	// (0x000b138d) cam6_zoom_pane_cp

0x6fff,	// (0x000b1399) vid6_image_uncrop_cif_pane_ParamLimits

0x6fff,	// (0x000b1399) vid6_image_uncrop_cif_pane

0x700f,	// (0x000b13a9) vid6_image_uncrop_nhd_pane_ParamLimits

0x700f,	// (0x000b13a9) vid6_image_uncrop_nhd_pane

0x701e,	// (0x000b13b8) vid6_image_uncrop_vga_pane_ParamLimits

0x701e,	// (0x000b13b8) vid6_image_uncrop_vga_pane

0x702d,	// (0x000b13c7) vid6_image_uncrop_wvga_pane_ParamLimits

0x702d,	// (0x000b13c7) vid6_image_uncrop_wvga_pane

0x703c,	// (0x000b13d6) vid6_indi_pane_ParamLimits

0x703c,	// (0x000b13d6) vid6_indi_pane

0xdd40,	// (0x000b80da) bg_tb_trans_pane_cp09_ParamLimits

0xdd40,	// (0x000b80da) bg_tb_trans_pane_cp09

0xde18,	// (0x000b81b2) cam6_battery_pane_cp_ParamLimits

0xde18,	// (0x000b81b2) cam6_battery_pane_cp

0xde24,	// (0x000b81be) vid6_indi_pane_g1_ParamLimits

0xde24,	// (0x000b81be) vid6_indi_pane_g1

0xde36,	// (0x000b81d0) vid6_indi_pane_g2_ParamLimits

0xde36,	// (0x000b81d0) vid6_indi_pane_g2

0xde48,	// (0x000b81e2) vid6_indi_pane_g3_ParamLimits

0xde48,	// (0x000b81e2) vid6_indi_pane_g3

0xde5d,	// (0x000b81f7) vid6_indi_pane_g4_ParamLimits

0xde5d,	// (0x000b81f7) vid6_indi_pane_g4

0xde72,	// (0x000b820c) vid6_indi_pane_g5_ParamLimits

0xde72,	// (0x000b820c) vid6_indi_pane_g5

0x0004,

0xfb67,	// (0x000b9f01) vid6_indi_pane_g_ParamLimits

0xfb67,	// (0x000b9f01) vid6_indi_pane_g

0xde8c,	// (0x000b8226) vid6_indi_pane_t1_ParamLimits

0xde8c,	// (0x000b8226) vid6_indi_pane_t1

0xdea2,	// (0x000b823c) vid6_indi_pane_t2_ParamLimits

0xdea2,	// (0x000b823c) vid6_indi_pane_t2

0xdeca,	// (0x000b8264) vid6_indi_pane_t3_ParamLimits

0xdeca,	// (0x000b8264) vid6_indi_pane_t3

0xdef2,	// (0x000b828c) vid6_indi_pane_t4_ParamLimits

0xdef2,	// (0x000b828c) vid6_indi_pane_t4

0x0003,

0xfb72,	// (0x000b9f0c) vid6_indi_pane_t_ParamLimits

0xfb72,	// (0x000b9f0c) vid6_indi_pane_t

0xdf16,	// (0x000b82b0) wait_bar_pane_cp08

0x7054,	// (0x000b13ee) main_cset_text2_pane_t1_ParamLimits

0x7054,	// (0x000b13ee) main_cset_text2_pane_t1

0x6fcc,	// (0x000b1366) listscroll_gen_pane_cp06_t1_ParamLimits

0x6fcc,	// (0x000b1366) listscroll_gen_pane_cp06_t1

0x9528,	// (0x000b38c2) main_cam6_set_pane

0x9eb3,	// (0x000b424d) bg_tb_trans_pane_cp06_ParamLimits

0x9ec9,	// (0x000b4263) cam4_indicators_pane_g1_ParamLimits

0x9eda,	// (0x000b4274) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x000b9c7a) cam4_indicators_pane_g_ParamLimits

0x9ef8,	// (0x000b4292) cam4_indicators_pane_t1_ParamLimits

0x951a,	// (0x000b38b4) bg_tb_trans_pane_cp07_ParamLimits

0x9f24,	// (0x000b42be) vid4_indicators_pane_g1_ParamLimits

0x9f38,	// (0x000b42d2) vid4_indicators_pane_g2_ParamLimits

0x9f4c,	// (0x000b42e6) vid4_indicators_pane_g3_ParamLimits

0x9f5d,	// (0x000b42f7) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x000b9c8c) vid4_indicators_pane_g_ParamLimits

0x9f7b,	// (0x000b4315) vid4_indicators_pane_t1_ParamLimits

0xa02b,	// (0x000b43c5) vid4_progress_pane_g1_ParamLimits

0xa03b,	// (0x000b43d5) vid4_progress_pane_g2_ParamLimits

0x6b03,	// (0x000b0e9d) vid4_progress_pane_g3_ParamLimits

0xa04b,	// (0x000b43e5) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x000b9e3d) vid4_progress_pane_g_ParamLimits

0x6b15,	// (0x000b0eaf) vid4_progress_pane_t1_ParamLimits

0xa063,	// (0x000b43fd) vid4_progress_pane_t2_ParamLimits

0xa078,	// (0x000b4412) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x000b9e48) vid4_progress_pane_t_ParamLimits

0x6b2d,	// (0x000b0ec7) wait_bar_pane_cp07_ParamLimits

0x7071,	// (0x000b140b) main_cam6_set_pane_g2_ParamLimits

0x7071,	// (0x000b140b) main_cam6_set_pane_g2

0x7095,	// (0x000b142f) main_cset6_listscroll_pane_ParamLimits

0x7095,	// (0x000b142f) main_cset6_listscroll_pane

0x70b5,	// (0x000b144f) main_cset6_slider_pane_ParamLimits

0x70b5,	// (0x000b144f) main_cset6_slider_pane

0x70cb,	// (0x000b1465) main_cset6_text2_pane_ParamLimits

0x70cb,	// (0x000b1465) main_cset6_text2_pane

0xdf25,	// (0x000b82bf) main_cset6_text_pane

0xdf2d,	// (0x000b82c7) main_cset_list_pane_copy1_ParamLimits

0xdf2d,	// (0x000b82c7) main_cset_list_pane_copy1

0xdf3d,	// (0x000b82d7) scroll_pane_cp028_copy1

0x70d9,	// (0x000b1473) cset_list_set_pane_copy1

0x70ea,	// (0x000b1484) aid_position_infowindow_above_copy1

0x70f2,	// (0x000b148c) aid_position_infowindow_below_copy1

0x70fa,	// (0x000b1494) cset_list_set_pane_g1_copy1

0x7102,	// (0x000b149c) cset_list_set_pane_g3_copy1_ParamLimits

0x7102,	// (0x000b149c) cset_list_set_pane_g3_copy1

0x7111,	// (0x000b14ab) cset_list_set_pane_t1_copy1_ParamLimits

0x7111,	// (0x000b14ab) cset_list_set_pane_t1_copy1

0xa7a8,	// (0x000b4b42) list_highlight_pane_cp021_copy1_ParamLimits

0xa7a8,	// (0x000b4b42) list_highlight_pane_cp021_copy1

0xdf46,	// (0x000b82e0) cset6_slider_pane_ParamLimits

0xdf46,	// (0x000b82e0) cset6_slider_pane

0xdf72,	// (0x000b830c) main_cset6_slider_pane_g1_ParamLimits

0xdf72,	// (0x000b830c) main_cset6_slider_pane_g1

0x7126,	// (0x000b14c0) main_cset6_slider_pane_g2_ParamLimits

0x7126,	// (0x000b14c0) main_cset6_slider_pane_g2

0xdf9a,	// (0x000b8334) main_cset6_slider_pane_g3_ParamLimits

0xdf9a,	// (0x000b8334) main_cset6_slider_pane_g3

0x714e,	// (0x000b14e8) main_cset6_slider_pane_g4_ParamLimits

0x714e,	// (0x000b14e8) main_cset6_slider_pane_g4

0x715a,	// (0x000b14f4) main_cset6_slider_pane_g5_ParamLimits

0x715a,	// (0x000b14f4) main_cset6_slider_pane_g5

0xd829,	// (0x000b7bc3) main_cset6_slider_pane_g7_ParamLimits

0xd829,	// (0x000b7bc3) main_cset6_slider_pane_g7

0xd835,	// (0x000b7bcf) main_cset6_slider_pane_g8_ParamLimits

0xd835,	// (0x000b7bcf) main_cset6_slider_pane_g8

0x60ed,	// (0x000b0487) main_cset6_slider_pane_g9_ParamLimits

0x60ed,	// (0x000b0487) main_cset6_slider_pane_g9

0x60f9,	// (0x000b0493) main_cset6_slider_pane_g10_ParamLimits

0x60f9,	// (0x000b0493) main_cset6_slider_pane_g10

0x6105,	// (0x000b049f) main_cset6_slider_pane_g11_ParamLimits

0x6105,	// (0x000b049f) main_cset6_slider_pane_g11

0x6111,	// (0x000b04ab) main_cset6_slider_pane_g12_ParamLimits

0x6111,	// (0x000b04ab) main_cset6_slider_pane_g12

0x611d,	// (0x000b04b7) main_cset6_slider_pane_g13_ParamLimits

0x611d,	// (0x000b04b7) main_cset6_slider_pane_g13

0x6129,	// (0x000b04c3) main_cset6_slider_pane_g14_ParamLimits

0x6129,	// (0x000b04c3) main_cset6_slider_pane_g14

0x7166,	// (0x000b1500) main_cset6_slider_pane_g15_ParamLimits

0x7166,	// (0x000b1500) main_cset6_slider_pane_g15

0x614d,	// (0x000b04e7) main_cset6_slider_pane_g16_ParamLimits

0x614d,	// (0x000b04e7) main_cset6_slider_pane_g16

0x6159,	// (0x000b04f3) main_cset6_slider_pane_g17_ParamLimits

0x6159,	// (0x000b04f3) main_cset6_slider_pane_g17

0x0011,

0xfb7b,	// (0x000b9f15) main_cset6_slider_pane_g_ParamLimits

0xfb7b,	// (0x000b9f15) main_cset6_slider_pane_g

0xdfa6,	// (0x000b8340) main_cset6_slider_pane_t1_ParamLimits

0xdfa6,	// (0x000b8340) main_cset6_slider_pane_t1

0x7196,	// (0x000b1530) main_cset6_slider_pane_t2_ParamLimits

0x7196,	// (0x000b1530) main_cset6_slider_pane_t2

0x71c1,	// (0x000b155b) main_cset6_slider_pane_t3_ParamLimits

0x71c1,	// (0x000b155b) main_cset6_slider_pane_t3

0x71ec,	// (0x000b1586) main_cset6_slider_pane_t4_ParamLimits

0x71ec,	// (0x000b1586) main_cset6_slider_pane_t4

0x7217,	// (0x000b15b1) main_cset6_slider_pane_t5_ParamLimits

0x7217,	// (0x000b15b1) main_cset6_slider_pane_t5

0xdfe7,	// (0x000b8381) main_cset6_slider_pane_t7_ParamLimits

0xdfe7,	// (0x000b8381) main_cset6_slider_pane_t7

0x7242,	// (0x000b15dc) main_cset6_slider_pane_t8_ParamLimits

0x7242,	// (0x000b15dc) main_cset6_slider_pane_t8

0x7266,	// (0x000b1600) main_cset6_slider_pane_t9_ParamLimits

0x7266,	// (0x000b1600) main_cset6_slider_pane_t9

0x728a,	// (0x000b1624) main_cset6_slider_pane_t10_ParamLimits

0x728a,	// (0x000b1624) main_cset6_slider_pane_t10

0x72ae,	// (0x000b1648) main_cset6_slider_pane_t11_ParamLimits

0x72ae,	// (0x000b1648) main_cset6_slider_pane_t11

0xe01d,	// (0x000b83b7) main_cset6_slider_pane_t14_ParamLimits

0xe01d,	// (0x000b83b7) main_cset6_slider_pane_t14

0xe056,	// (0x000b83f0) main_cset6_slider_pane_t15_ParamLimits

0xe056,	// (0x000b83f0) main_cset6_slider_pane_t15

0x000b,

0xfba0,	// (0x000b9f3a) main_cset6_slider_pane_t_ParamLimits

0xfba0,	// (0x000b9f3a) main_cset6_slider_pane_t

0xe08f,	// (0x000b8429) cset_slider_pane_g1_copy1

0xe098,	// (0x000b8432) cset_slider_pane_g2_copy1

0xe0a1,	// (0x000b843b) cset_slider_pane_g3_copy1

0x94a2,	// (0x000b383c) bg_popup_sub_pane_cp011_copy1

0xe0aa,	// (0x000b8444) main_cset_text_pane_g1_copy1

0xd96d,	// (0x000b7d07) main_cset_text_pane_t1_copy1

0xd97b,	// (0x000b7d15) main_cset_text_pane_t2_copy1

0xd989,	// (0x000b7d23) main_cset_text_pane_t3_copy1

0xd997,	// (0x000b7d31) main_cset_text_pane_t4_copy1

0xd9a5,	// (0x000b7d3f) main_cset_text_pane_t5_copy1

0xe0b2,	// (0x000b844c) main_cset_text_pane_t6_copy1

0xe0c0,	// (0x000b845a) main_cset_text_pane_t7_copy1

0x7054,	// (0x000b13ee) main_cset_text2_pane_t1_copy1

0x951a,	// (0x000b38b4) main_ncimui_pane

0x3703,	// (0x000ada9d) popup_query_ncimui_window_ParamLimits

0x3703,	// (0x000ada9d) popup_query_ncimui_window

0xa7b6,	// (0x000b4b50) field_cale_ev2_pane_g4_ParamLimits

0xa7b6,	// (0x000b4b50) field_cale_ev2_pane_g4

0x530d,	// (0x000af6a7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x530d,	// (0x000af6a7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x000b9c14) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x000b9c14) cell_video_dialer_keypad_pane_g

0x5325,	// (0x000af6bf) cell_video_dialer_keypad_pane_t1

0x94a2,	// (0x000b383c) bg_popup_window_pane_cp012

0xb179,	// (0x000b5513) heading_pane_cp06

0xe0ec,	// (0x000b8486) ncim_query_content_pane

0x94a2,	// (0x000b383c) bg_popup_heading_pane_cp01

0xe0f4,	// (0x000b848e) ncim_heading_pane_t1

0xe102,	// (0x000b849c) ncim_indicator_popup_pane

0xe114,	// (0x000b84ae) ncim_query_button_pane

0xe128,	// (0x000b84c2) ncim_query_content_pane_t1

0xe13a,	// (0x000b84d4) ncim_query_content_pane_t2

0x0005,

0xfbe4,	// (0x000b9f7e) ncim_query_content_pane_t

0xe174,	// (0x000b850e) ncim_query_list_pane

0xe186,	// (0x000b8520) ncim_query_popup_pane

0xe102,	// (0x000b849c) ncim_indicator_popup_pane_ParamLimits

0x74d3,	// (0x000b186d) ncim_query_content_pane_g1_ParamLimits

0x74d3,	// (0x000b186d) ncim_query_content_pane_g1

0xe128,	// (0x000b84c2) ncim_query_content_pane_t1_ParamLimits

0xe13a,	// (0x000b84d4) ncim_query_content_pane_t2_ParamLimits

0x74df,	// (0x000b1879) ncim_query_content_pane_t3_ParamLimits

0x74df,	// (0x000b1879) ncim_query_content_pane_t3

0x7507,	// (0x000b18a1) ncim_query_content_pane_t4_ParamLimits

0x7507,	// (0x000b18a1) ncim_query_content_pane_t4

0x752f,	// (0x000b18c9) ncim_query_content_pane_t5_ParamLimits

0x752f,	// (0x000b18c9) ncim_query_content_pane_t5

0xe14c,	// (0x000b84e6) ncim_query_content_pane_t6_ParamLimits

0xe14c,	// (0x000b84e6) ncim_query_content_pane_t6

0xfbe4,	// (0x000b9f7e) ncim_query_content_pane_t_ParamLimits

0xe174,	// (0x000b850e) ncim_query_list_pane_ParamLimits

0xe186,	// (0x000b8520) ncim_query_popup_pane_ParamLimits

0xe19a,	// (0x000b8534) wait_bar_pane_cp04

0x94a2,	// (0x000b383c) input_focus_pane_cp011

0xe1a2,	// (0x000b853c) ncim_query_popup_pane_t1

0xe1b0,	// (0x000b854a) ncim_list_query_list_pane_ParamLimits

0xe1b0,	// (0x000b854a) ncim_list_query_list_pane

0x94a2,	// (0x000b383c) bg_button_pane_cp027

0xe1bd,	// (0x000b8557) ncim_query_button_pane_g1

0x94a2,	// (0x000b383c) list_highlight_pane_cp012

0xe1c7,	// (0x000b8561) ncim_list_query_list_pane_g1

0xe1cf,	// (0x000b8569) ncim_list_query_list_pane_t1

0x9ee9,	// (0x000b4283) cam4_indicators_pane_g3_ParamLimits

0x9ee9,	// (0x000b4283) cam4_indicators_pane_g3

0x9f69,	// (0x000b4303) vid4_indicators_pane_g5_ParamLimits

0x9f69,	// (0x000b4303) vid4_indicators_pane_g5

0xa057,	// (0x000b43f1) vid4_progress_pane_g5_ParamLimits

0xa057,	// (0x000b43f1) vid4_progress_pane_g5

0x73be,	// (0x000b1758) main_ncimui_pane_g1

0x7427,	// (0x000b17c1) ncimui_group_query_pane_ParamLimits

0x7427,	// (0x000b17c1) ncimui_group_query_pane

0x746f,	// (0x000b1809) ncimui_list_pane_ParamLimits

0x746f,	// (0x000b1809) ncimui_list_pane

0x7496,	// (0x000b1830) ncimui_text_pane_ParamLimits

0x7496,	// (0x000b1830) ncimui_text_pane

0x7557,	// (0x000b18f1) ncimui_text_pane_t1_ParamLimits

0x7557,	// (0x000b18f1) ncimui_text_pane_t1

0xe1dd,	// (0x000b8577) ncimui_list_single_graphic_pane_ParamLimits

0xe1dd,	// (0x000b8577) ncimui_list_single_graphic_pane

0x7575,	// (0x000b190f) ncimui_query_pane_ParamLimits

0x7575,	// (0x000b190f) ncimui_query_pane

0x94a2,	// (0x000b383c) list_highlight_pane_cp013

0xe1ed,	// (0x000b8587) ncim_list_query_list_pane_t1_copy1

0xe1c7,	// (0x000b8561) ncim_list_single_graphic_pane_g1

0x7588,	// (0x000b1922) ncim_query_button_pane_cp01

0x7594,	// (0x000b192e) ncim_query_entry_pane_ParamLimits

0x7594,	// (0x000b192e) ncim_query_entry_pane

0x75a7,	// (0x000b1941) ncimui_query_pane_g1

0x75b3,	// (0x000b194d) ncimui_query_pane_t1_ParamLimits

0x75b3,	// (0x000b194d) ncimui_query_pane_t1

0xa7a8,	// (0x000b4b42) input_focus_pane_cp012

0xe1fb,	// (0x000b8595) ncim_query_entry_pane_t1

0xa402,	// (0x000b479c) main_im_pane_ParamLimits

0x951a,	// (0x000b38b4) main_mobtv_pane_ParamLimits

0x951a,	// (0x000b38b4) main_mobtv_pane

0x717e,	// (0x000b1518) main_cset6_slider_pane_g18_ParamLimits

0x717e,	// (0x000b1518) main_cset6_slider_pane_g18

0x718a,	// (0x000b1524) main_cset6_slider_pane_g19_ParamLimits

0x718a,	// (0x000b1524) main_cset6_slider_pane_g19

0x75cc,	// (0x000b1966) bg_main_mobtv_pane_ParamLimits

0x75cc,	// (0x000b1966) bg_main_mobtv_pane

0x75da,	// (0x000b1974) main_mobtv_info_pane

0x75e3,	// (0x000b197d) main_mobtv_loading_pane_ParamLimits

0x75e3,	// (0x000b197d) main_mobtv_loading_pane

0xe20d,	// (0x000b85a7) main_mobtv_pg_channel_list_pane

0xe217,	// (0x000b85b1) main_mobtv_pg_hdr_pane

0x75f0,	// (0x000b198a) main_mobtv_programe_curr_pane_ParamLimits

0x75f0,	// (0x000b198a) main_mobtv_programe_curr_pane

0x75fd,	// (0x000b1997) main_mobtv_programe_next_pane_ParamLimits

0x75fd,	// (0x000b1997) main_mobtv_programe_next_pane

0xe220,	// (0x000b85ba) popup_mobtv_noti_window

0xcd11,	// (0x000b70ab) main_tv_pg_hdr_pane_g1

0xe228,	// (0x000b85c2) main_tv_pg_hdr_pane_g2

0xe230,	// (0x000b85ca) main_tv_pg_hdr_pane_g3

0xe238,	// (0x000b85d2) main_tv_pg_hdr_pane_g4

0xe240,	// (0x000b85da) main_tv_pg_hdr_pane_g5

0xe24a,	// (0x000b85e4) main_tv_pg_hdr_pane_g6

0xe254,	// (0x000b85ee) main_tv_pg_hdr_pane_g7

0xe25e,	// (0x000b85f8) main_tv_pg_hdr_pane_g8

0xe268,	// (0x000b8602) main_tv_pg_hdr_pane_g9

0xe272,	// (0x000b860c) main_tv_pg_hdr_pane_g10

0xe27c,	// (0x000b8616) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf1,	// (0x000b9f8b) main_tv_pg_hdr_pane_g

0xe286,	// (0x000b8620) main_tv_pg_hdr_pane_t1

0xe294,	// (0x000b862e) main_tv_pg_hdr_pane_t2

0xe2a2,	// (0x000b863c) main_tv_pg_hdr_pane_t3

0xe2b2,	// (0x000b864c) main_tv_pg_hdr_pane_t4

0xe2c2,	// (0x000b865c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc08,	// (0x000b9fa2) main_tv_pg_hdr_pane_t

0xe2d2,	// (0x000b866c) single_mobtv_pg_channel_pane_ParamLimits

0xe2d2,	// (0x000b866c) single_mobtv_pg_channel_pane

0xe2e4,	// (0x000b867e) single_mobtv_pg_channel_table_pane

0xe2ed,	// (0x000b8687) single_mobtv_pg_channel_thumb_pane

0xe2f6,	// (0x000b8690) single_tv_pg_channel_pane_g1

0xe2ff,	// (0x000b8699) single_tv_pg_channel_pane_g2

0x0001,

0xfc13,	// (0x000b9fad) single_tv_pg_channel_pane_g

0xcf7c,	// (0x000b7316) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf7c,	// (0x000b7316) bg_single_mobtv_pg_channel_thumb_pane

0xe308,	// (0x000b86a2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe308,	// (0x000b86a2) single_mobtv_pg_channel_thumb_pane_g1

0xe316,	// (0x000b86b0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe316,	// (0x000b86b0) single_mobtv_pg_channel_thumb_pane_g2

0xe322,	// (0x000b86bc) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe322,	// (0x000b86bc) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc18,	// (0x000b9fb2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc18,	// (0x000b9fb2) single_mobtv_pg_channel_thumb_pane_g

0xe32e,	// (0x000b86c8) single_mobtv_pg_channel_thumb_pane_t1

0xe33c,	// (0x000b86d6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1f,	// (0x000b9fb9) single_mobtv_pg_channel_thumb_pane_t

0xcd11,	// (0x000b70ab) bg_single_mobtv_pg_channel_table_pane_g1

0xcd11,	// (0x000b70ab) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x000b9a5b) bg_single_mobtv_pg_channel_table_pane_g

0xe34a,	// (0x000b86e4) single_mobtv_pg_channel_table_pane_t1

0xe358,	// (0x000b86f2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc24,	// (0x000b9fbe) single_mobtv_pg_channel_table_pane_t

0x7612,	// (0x000b19ac) main_mobtv_info_pane_g1_ParamLimits

0x7612,	// (0x000b19ac) main_mobtv_info_pane_g1

0x7630,	// (0x000b19ca) main_mobtv_info_pane_t1_ParamLimits

0x7630,	// (0x000b19ca) main_mobtv_info_pane_t1

0x76a8,	// (0x000b1a42) main_mobtv_info_pane_t2_ParamLimits

0x76a8,	// (0x000b1a42) main_mobtv_info_pane_t2

0x0002,

0xfc2e,	// (0x000b9fc8) main_mobtv_info_pane_t_ParamLimits

0xfc2e,	// (0x000b9fc8) main_mobtv_info_pane_t

0x7737,	// (0x000b1ad1) wait_bar_pane_cp05

0x7749,	// (0x000b1ae3) main_mobtv_loading_pane_g1_ParamLimits

0x7749,	// (0x000b1ae3) main_mobtv_loading_pane_g1

0x775c,	// (0x000b1af6) main_mobtv_loading_pane_g2_ParamLimits

0x775c,	// (0x000b1af6) main_mobtv_loading_pane_g2

0x7768,	// (0x000b1b02) main_mobtv_loading_pane_g3_ParamLimits

0x7768,	// (0x000b1b02) main_mobtv_loading_pane_g3

0x0002,

0xfc35,	// (0x000b9fcf) main_mobtv_loading_pane_g_ParamLimits

0xfc35,	// (0x000b9fcf) main_mobtv_loading_pane_g

0xe366,	// (0x000b8700) main_mobtv_loading_pane_t1_ParamLimits

0xe366,	// (0x000b8700) main_mobtv_loading_pane_t1

0xe37e,	// (0x000b8718) main_mobtv_loading_pane_t2_ParamLimits

0xe37e,	// (0x000b8718) main_mobtv_loading_pane_t2

0x0001,

0xfc3c,	// (0x000b9fd6) main_mobtv_loading_pane_t_ParamLimits

0xfc3c,	// (0x000b9fd6) main_mobtv_loading_pane_t

0x777b,	// (0x000b1b15) wait_bar_pane_cp06_ParamLimits

0x777b,	// (0x000b1b15) wait_bar_pane_cp06

0xe3a2,	// (0x000b873c) main_mobtv_programe_curr_pane_t1

0xe3b0,	// (0x000b874a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc41,	// (0x000b9fdb) main_mobtv_programe_curr_pane_t

0xe3be,	// (0x000b8758) main_mobtv_programe_next_pane_t1

0xe3cc,	// (0x000b8766) main_mobtv_programe_next_pane_t2

0xe3da,	// (0x000b8774) main_mobtv_programe_next_pane_t3

0x0002,

0xfc46,	// (0x000b9fe0) main_mobtv_programe_next_pane_t

0x94a2,	// (0x000b383c) bg_popup_mobtv_noti_window_pane

0xe3e8,	// (0x000b8782) popup_mobtv_noti_window_g1

0xe3f0,	// (0x000b878a) popup_mobtv_noti_window_t1

0xe3fe,	// (0x000b8798) popup_mobtv_noti_window_t2

0x0001,

0xfc4d,	// (0x000b9fe7) popup_mobtv_noti_window_t

0xcd11,	// (0x000b70ab) bg_popup_mobtv_noti_window_pane_g1

0x9528,	// (0x000b38c2) sc_clock_pane

0x9528,	// (0x000b38c2) main_fs_bigclock_pane

0x6d8a,	// (0x000b1124) blid2_tripm_pane_t4_ParamLimits

0x6d8a,	// (0x000b1124) blid2_tripm_pane_t4

0x778a,	// (0x000b1b24) sc_clock_pane_g1_ParamLimits

0x778a,	// (0x000b1b24) sc_clock_pane_g1

0x779c,	// (0x000b1b36) sc_clock_pane_t1_ParamLimits

0x779c,	// (0x000b1b36) sc_clock_pane_t1

0x77be,	// (0x000b1b58) sc_clock_pane_t2_ParamLimits

0x77be,	// (0x000b1b58) sc_clock_pane_t2

0x77d6,	// (0x000b1b70) sc_clock_pane_t3_ParamLimits

0x77d6,	// (0x000b1b70) sc_clock_pane_t3

0x0004,

0xfc52,	// (0x000b9fec) sc_clock_pane_t_ParamLimits

0xfc52,	// (0x000b9fec) sc_clock_pane_t

0x888b,	// (0x000b2c25) main_fs_bigclock_indicator_pane_ParamLimits

0x888b,	// (0x000b2c25) main_fs_bigclock_indicator_pane

0x787c,	// (0x000b1c16) main_fs_bigclock_pane_g1_ParamLimits

0x787c,	// (0x000b1c16) main_fs_bigclock_pane_g1

0x8897,	// (0x000b2c31) main_fs_bigclock_pane_t1_ParamLimits

0x8897,	// (0x000b2c31) main_fs_bigclock_pane_t1

0x88a9,	// (0x000b2c43) main_fs_bigclock_pane_t2_ParamLimits

0x88a9,	// (0x000b2c43) main_fs_bigclock_pane_t2

0x88bd,	// (0x000b2c57) main_fs_bigclock_pane_t3_ParamLimits

0x88bd,	// (0x000b2c57) main_fs_bigclock_pane_t3

0x0002,

0xfe60,	// (0x000ba1fa) main_fs_bigclock_pane_t_ParamLimits

0xfe60,	// (0x000ba1fa) main_fs_bigclock_pane_t

0xec38,	// (0x000b8fd2) main_fs_bigclock_indicator_pane_g1

0xe11c,	// (0x000b84b6) ncim_query_content_pane_g2_ParamLimits

0xe11c,	// (0x000b84b6) ncim_query_content_pane_g2

0x0001,

0xfbdf,	// (0x000b9f79) ncim_query_content_pane_g_ParamLimits

0xfbdf,	// (0x000b9f79) ncim_query_content_pane_g

0x77ef,	// (0x000b1b89) sc_clock_pane_t4_ParamLimits

0x77ef,	// (0x000b1b89) sc_clock_pane_t4

0x951a,	// (0x000b38b4) main_radioblah_pane

0x9e4d,	// (0x000b41e7) cell_call4_button_pane_t1_copy1_ParamLimits

0x9e4d,	// (0x000b41e7) cell_call4_button_pane_t1_copy1

0x73d6,	// (0x000b1770) main_ncimui_pane_t1_ParamLimits

0x73d6,	// (0x000b1770) main_ncimui_pane_t1

0x73f0,	// (0x000b178a) main_ncimui_pane_t2_ParamLimits

0x73f0,	// (0x000b178a) main_ncimui_pane_t2

0x0002,

0xfbd8,	// (0x000b9f72) main_ncimui_pane_t_ParamLimits

0xfbd8,	// (0x000b9f72) main_ncimui_pane_t

0xe543,	// (0x000b88dd) main_radioblah_anim_pane_ParamLimits

0xe543,	// (0x000b88dd) main_radioblah_anim_pane

0xe554,	// (0x000b88ee) main_radioblah_info_pane_ParamLimits

0xe554,	// (0x000b88ee) main_radioblah_info_pane

0xe568,	// (0x000b8902) main_radioblah_pane_t1_ParamLimits

0xe568,	// (0x000b8902) main_radioblah_pane_t1

0xe584,	// (0x000b891e) main_radioblah_pane_t2_ParamLimits

0xe584,	// (0x000b891e) main_radioblah_pane_t2

0x0003,

0xfc73,	// (0x000ba00d) main_radioblah_pane_t_ParamLimits

0xfc73,	// (0x000ba00d) main_radioblah_pane_t

0x78db,	// (0x000b1c75) main_radioblah_rocker_ctrl_pane_ParamLimits

0x78db,	// (0x000b1c75) main_radioblah_rocker_ctrl_pane

0xe5cc,	// (0x000b8966) main_radioblah_info_pane_t1_ParamLimits

0xe5cc,	// (0x000b8966) main_radioblah_info_pane_t1

0x7933,	// (0x000b1ccd) main_radioblah_info_pane_t2_ParamLimits

0x7933,	// (0x000b1ccd) main_radioblah_info_pane_t2

0x0003,

0xfc7c,	// (0x000ba016) main_radioblah_info_pane_t_ParamLimits

0xfc7c,	// (0x000ba016) main_radioblah_info_pane_t

0xcd11,	// (0x000b70ab) main_radioblah_rocker_ctrl_pane_g1

0x79e3,	// (0x000b1d7d) main_radioblah_rocker_ctrl_pane_g2

0x79eb,	// (0x000b1d85) main_radioblah_rocker_ctrl_pane_g3

0x79f3,	// (0x000b1d8d) main_radioblah_rocker_ctrl_pane_g4

0x79fb,	// (0x000b1d95) main_radioblah_rocker_ctrl_pane_g5

0x7a03,	// (0x000b1d9d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc85,	// (0x000ba01f) main_radioblah_rocker_ctrl_pane_g

0x7054,	// (0x000b13ee) main_cset_text2_pane_t1_copy1_ParamLimits

0x9eab,	// (0x000b4245) cam4_image_uncrop_qvga_pane

0x9f12,	// (0x000b42ac) vid4_image_uncrop_qcif_pane

0xa08d,	// (0x000b4427) cam6_image_uncrop_qvga_pane_ParamLimits

0xa08d,	// (0x000b4427) cam6_image_uncrop_qvga_pane

0xde08,	// (0x000b81a2) vid6_image_uncrop_qcif_pane_ParamLimits

0xde08,	// (0x000b81a2) vid6_image_uncrop_qcif_pane

0x94a2,	// (0x000b383c) bg_popup_preview_window_pane_cp03

0xe0ce,	// (0x000b8468) list_cset_text2_pane

0xe0d6,	// (0x000b8470) main_cset6_text2_pane_g1

0xe0de,	// (0x000b8478) main_cset6_text2_pane_t1

0x7a0b,	// (0x000b1da5) list_cset_text2_pane_t1_ParamLimits

0x7a0b,	// (0x000b1da5) list_cset_text2_pane_t1

0x951a,	// (0x000b38b4) main_radioblah_pane_ParamLimits

0x7723,	// (0x000b1abd) main_mobtv_info_pane_t3_ParamLimits

0x7723,	// (0x000b1abd) main_mobtv_info_pane_t3

0x78c9,	// (0x000b1c63) main_radioblah_pane_g1

0x7903,	// (0x000b1c9d) main_radioblah_info_pane_g1

0x7988,	// (0x000b1d22) main_radioblah_info_pane_t3_ParamLimits

0x7988,	// (0x000b1d22) main_radioblah_info_pane_t3

0x2107,	// (0x000ac4a1) highlight_cell_cale_month_pane_ParamLimits

0x2107,	// (0x000ac4a1) highlight_cell_cale_month_pane

0x9528,	// (0x000b38c2) main_phob_fisheye_pane

0xd078,	// (0x000b7412) scroll_pane_cp0031_ParamLimits

0xd078,	// (0x000b7412) scroll_pane_cp0031

0xdf16,	// (0x000b82b0) wait_bar_pane_cp08_ParamLimits

0x70d9,	// (0x000b1473) cset_list_set_pane_copy1_ParamLimits

0xe606,	// (0x000b89a0) highlight_cell_cale_month_pane_g1

0x7a24,	// (0x000b1dbe) highlight_cell_cale_month_pane_t1

0xdbab,	// (0x000b7f45) list_gen_pane_cp01

0xd814,	// (0x000b7bae) scroll_pane_01

0xb800,	// (0x000b5b9a) list_single_double_fisheye_pane

0x7a32,	// (0x000b1dcc) list_double_fisheye_pane_g1_ParamLimits

0x7a32,	// (0x000b1dcc) list_double_fisheye_pane_g1

0x7a3e,	// (0x000b1dd8) list_double_fisheye_pane_g2_ParamLimits

0x7a3e,	// (0x000b1dd8) list_double_fisheye_pane_g2

0x7a52,	// (0x000b1dec) list_double_fisheye_pane_g3_ParamLimits

0x7a52,	// (0x000b1dec) list_double_fisheye_pane_g3

0x0004,

0xfc92,	// (0x000ba02c) list_double_fisheye_pane_g_ParamLimits

0xfc92,	// (0x000ba02c) list_double_fisheye_pane_g

0x7a7b,	// (0x000b1e15) list_double_fisheye_pane_t1_ParamLimits

0x7a7b,	// (0x000b1e15) list_double_fisheye_pane_t1

0x7a96,	// (0x000b1e30) list_double_fisheye_pane_t2_ParamLimits

0x7a96,	// (0x000b1e30) list_double_fisheye_pane_t2

0x0001,

0xfc9d,	// (0x000ba037) list_double_fisheye_pane_t_ParamLimits

0xfc9d,	// (0x000ba037) list_double_fisheye_pane_t

0x9528,	// (0x000b38c2) main_call5_pane

0x781a,	// (0x000b1bb4) sc_swipe_pane_ParamLimits

0x781a,	// (0x000b1bb4) sc_swipe_pane

0x7acb,	// (0x000b1e65) call5_image_pane_ParamLimits

0x7acb,	// (0x000b1e65) call5_image_pane

0x7ae8,	// (0x000b1e82) call5_swipe_1_pane_ParamLimits

0x7ae8,	// (0x000b1e82) call5_swipe_1_pane

0x7afb,	// (0x000b1e95) call5_swipe_2_pane_ParamLimits

0x7afb,	// (0x000b1e95) call5_swipe_2_pane

0x7b26,	// (0x000b1ec0) popup_call5_audio_first_window_ParamLimits

0x7b26,	// (0x000b1ec0) popup_call5_audio_first_window

0xcf7c,	// (0x000b7316) call5_swipe_1_pane_g1_ParamLimits

0xcf7c,	// (0x000b7316) call5_swipe_1_pane_g1

0xe60e,	// (0x000b89a8) call5_swipe_1_pane_g2_ParamLimits

0xe60e,	// (0x000b89a8) call5_swipe_1_pane_g2

0x0001,

0xfca2,	// (0x000ba03c) call5_swipe_1_pane_g_ParamLimits

0xfca2,	// (0x000ba03c) call5_swipe_1_pane_g

0xe61a,	// (0x000b89b4) call5_swipe_1_pane_t1_ParamLimits

0xe61a,	// (0x000b89b4) call5_swipe_1_pane_t1

0xcf7c,	// (0x000b7316) call5_swipe_2_pane_g1_ParamLimits

0xcf7c,	// (0x000b7316) call5_swipe_2_pane_g1

0xe62f,	// (0x000b89c9) call5_swipe_2_pane_g2_ParamLimits

0xe62f,	// (0x000b89c9) call5_swipe_2_pane_g2

0x0001,

0xfca7,	// (0x000ba041) call5_swipe_2_pane_g_ParamLimits

0xfca7,	// (0x000ba041) call5_swipe_2_pane_g

0xe63b,	// (0x000b89d5) call5_swipe_2_pane_t1_ParamLimits

0xe63b,	// (0x000b89d5) call5_swipe_2_pane_t1

0xe650,	// (0x000b89ea) sc_swipe_pane_g1_ParamLimits

0xe650,	// (0x000b89ea) sc_swipe_pane_g1

0xe65d,	// (0x000b89f7) sc_swipe_pane_g2_ParamLimits

0xe65d,	// (0x000b89f7) sc_swipe_pane_g2

0x0001,

0xfcac,	// (0x000ba046) sc_swipe_pane_g_ParamLimits

0xfcac,	// (0x000ba046) sc_swipe_pane_g

0xe669,	// (0x000b8a03) sc_swipe_pane_t1_ParamLimits

0xe669,	// (0x000b8a03) sc_swipe_pane_t1

0x9528,	// (0x000b38c2) main_cmail_launcher_pane

0x7b37,	// (0x000b1ed1) aid_size_cell_cmail_l_ParamLimits

0x7b37,	// (0x000b1ed1) aid_size_cell_cmail_l

0x7b45,	// (0x000b1edf) grid_cmail_l_pane_ParamLimits

0x7b45,	// (0x000b1edf) grid_cmail_l_pane

0x7b5f,	// (0x000b1ef9) cell_cmail_l_pane_ParamLimits

0x7b5f,	// (0x000b1ef9) cell_cmail_l_pane

0xe67e,	// (0x000b8a18) cell_cmail_l_pane_g1_ParamLimits

0xe67e,	// (0x000b8a18) cell_cmail_l_pane_g1

0xe68a,	// (0x000b8a24) cell_cmail_l_pane_t1_ParamLimits

0xe68a,	// (0x000b8a24) cell_cmail_l_pane_t1

0xe6a0,	// (0x000b8a3a) cell_cmail_l_pane_t2_ParamLimits

0xe6a0,	// (0x000b8a3a) cell_cmail_l_pane_t2

0x0001,

0xfcb1,	// (0x000ba04b) cell_cmail_l_pane_t_ParamLimits

0xfcb1,	// (0x000ba04b) cell_cmail_l_pane_t

0xa7a8,	// (0x000b4b42) grid_highlight_pane_cp018_ParamLimits

0xa7a8,	// (0x000b4b42) grid_highlight_pane_cp018

0x01be,	// (0x000aa558) main2_pane_ParamLimits

0x01be,	// (0x000aa558) main2_pane

0xa4a4,	// (0x000b483e) popup_sp_fs_action_menu_bg_pane_g1

0xa4ac,	// (0x000b4846) popup_sp_fs_action_menu_bg_pane_g2

0xa4b4,	// (0x000b484e) popup_sp_fs_action_menu_bg_pane_g3

0xa4bc,	// (0x000b4856) popup_sp_fs_action_menu_bg_pane_g4

0xa4c4,	// (0x000b485e) popup_sp_fs_action_menu_bg_pane_g5

0xa4cc,	// (0x000b4866) popup_sp_fs_action_menu_bg_pane_g6

0xa4d4,	// (0x000b486e) popup_sp_fs_action_menu_bg_pane_g7

0xa4dc,	// (0x000b4876) popup_sp_fs_action_menu_bg_pane_g8

0xa4e4,	// (0x000b487e) popup_sp_fs_action_menu_bg_pane_g9

0xa4ec,	// (0x000b4886) popup_sp_fs_action_menu_bg_pane_g10

0xa4ec,	// (0x000b4886) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x000b9509) popup_sp_fs_action_menu_bg_pane_g

0x10ea,	// (0x000ab484) list_medium_line_x2_t3_g3_g1_ParamLimits

0x10ea,	// (0x000ab484) list_medium_line_x2_t3_g3_g1

0x10f6,	// (0x000ab490) list_medium_line_x2_t3_g3_g2_ParamLimits

0x10f6,	// (0x000ab490) list_medium_line_x2_t3_g3_g2

0x1102,	// (0x000ab49c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1102,	// (0x000ab49c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x000b95b7) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x000b95b7) list_medium_line_x2_t3_g3_g

0x110e,	// (0x000ab4a8) list_medium_line_x2_t3_g3_t1_ParamLimits

0x110e,	// (0x000ab4a8) list_medium_line_x2_t3_g3_t1

0x1123,	// (0x000ab4bd) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1123,	// (0x000ab4bd) list_medium_line_x2_t3_g3_t2

0x1137,	// (0x000ab4d1) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1137,	// (0x000ab4d1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x000b95be) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x000b95be) list_medium_line_x2_t3_g3_t

0x10ea,	// (0x000ab484) list_medium_line_x2_t3_g2_g1_ParamLimits

0x10ea,	// (0x000ab484) list_medium_line_x2_t3_g2_g1

0x1102,	// (0x000ab49c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1102,	// (0x000ab49c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x000b95c5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x000b95c5) list_medium_line_x2_t3_g2_g

0x114c,	// (0x000ab4e6) list_medium_line_x2_t3_g2_t1_ParamLimits

0x114c,	// (0x000ab4e6) list_medium_line_x2_t3_g2_t1

0x1162,	// (0x000ab4fc) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1162,	// (0x000ab4fc) list_medium_line_x2_t3_g2_t2

0x1137,	// (0x000ab4d1) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1137,	// (0x000ab4d1) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x000b95ca) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x000b95ca) list_medium_line_x2_t3_g2_t

0x10ea,	// (0x000ab484) list_medium_line_x2_t4_g4_g1_ParamLimits

0x10ea,	// (0x000ab484) list_medium_line_x2_t4_g4_g1

0x1174,	// (0x000ab50e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1174,	// (0x000ab50e) list_medium_line_x2_t4_g4_g2

0x10f6,	// (0x000ab490) list_medium_line_x2_t4_g4_g3_ParamLimits

0x10f6,	// (0x000ab490) list_medium_line_x2_t4_g4_g3

0x1180,	// (0x000ab51a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1180,	// (0x000ab51a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x000b95d1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x000b95d1) list_medium_line_x2_t4_g4_g

0x118c,	// (0x000ab526) list_medium_line_x2_t4_g4_t1_ParamLimits

0x118c,	// (0x000ab526) list_medium_line_x2_t4_g4_t1

0x11a6,	// (0x000ab540) list_medium_line_x2_t4_g4_t2_ParamLimits

0x11a6,	// (0x000ab540) list_medium_line_x2_t4_g4_t2

0x11bc,	// (0x000ab556) list_medium_line_x2_t4_g4_t3_ParamLimits

0x11bc,	// (0x000ab556) list_medium_line_x2_t4_g4_t3

0x11d1,	// (0x000ab56b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x11d1,	// (0x000ab56b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x000b95da) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x000b95da) list_medium_line_x2_t4_g4_t

0x10ea,	// (0x000ab484) list_medium_line_x2_t2_g4_g1_ParamLimits

0x10ea,	// (0x000ab484) list_medium_line_x2_t2_g4_g1

0x1174,	// (0x000ab50e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1174,	// (0x000ab50e) list_medium_line_x2_t2_g4_g2

0x10f6,	// (0x000ab490) list_medium_line_x2_t2_g4_g3_ParamLimits

0x10f6,	// (0x000ab490) list_medium_line_x2_t2_g4_g3

0x1102,	// (0x000ab49c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1102,	// (0x000ab49c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x000b9641) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x000b9641) list_medium_line_x2_t2_g4_g

0x212d,	// (0x000ac4c7) list_medium_line_x2_t2_g4_t1_ParamLimits

0x212d,	// (0x000ac4c7) list_medium_line_x2_t2_g4_t1

0x1137,	// (0x000ab4d1) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1137,	// (0x000ab4d1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x000b964a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x000b964a) list_medium_line_x2_t2_g4_t

0x10ea,	// (0x000ab484) list_medium_line_x2_t2_g3_g1_ParamLimits

0x10ea,	// (0x000ab484) list_medium_line_x2_t2_g3_g1

0x10f6,	// (0x000ab490) list_medium_line_x2_t2_g3_g2_ParamLimits

0x10f6,	// (0x000ab490) list_medium_line_x2_t2_g3_g2

0x1102,	// (0x000ab49c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1102,	// (0x000ab49c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x000b95b7) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x000b95b7) list_medium_line_x2_t2_g3_g

0x2142,	// (0x000ac4dc) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2142,	// (0x000ac4dc) list_medium_line_x2_t2_g3_t1

0x1137,	// (0x000ab4d1) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1137,	// (0x000ab4d1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x000b964f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x000b964f) list_medium_line_x2_t2_g3_t

0x228b,	// (0x000ac625) main_sp_fs_list_pane_ParamLimits

0x228b,	// (0x000ac625) main_sp_fs_list_pane

0xb809,	// (0x000b5ba3) sp_fs_scroll_pane_ParamLimits

0xb809,	// (0x000b5ba3) sp_fs_scroll_pane

0x2297,	// (0x000ac631) list_medium_line_x2_t3_t1

0x22a7,	// (0x000ac641) list_medium_line_x2_t3_t2

0x22b5,	// (0x000ac64f) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x000b969a) list_medium_line_x2_t3_t

0x22c3,	// (0x000ac65d) list_medium_line_x3_t4_t1

0x22d3,	// (0x000ac66d) list_medium_line_x3_t4_t2

0x22e1,	// (0x000ac67b) list_medium_line_x3_t4_t3

0x22b5,	// (0x000ac64f) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x000b96a1) list_medium_line_x3_t4_t

0x22ef,	// (0x000ac689) list_medium_line_x4_t5_t1

0x22ff,	// (0x000ac699) list_medium_line_x4_t5_t2

0x22e1,	// (0x000ac67b) list_medium_line_x4_t5_t3

0x230d,	// (0x000ac6a7) list_medium_line_x4_t5_t4

0x22b5,	// (0x000ac64f) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x000b96aa) list_medium_line_x4_t5_t

0x10ea,	// (0x000ab484) list_medium_line_t4_g4_g1_ParamLimits

0x10ea,	// (0x000ab484) list_medium_line_t4_g4_g1

0x231b,	// (0x000ac6b5) list_medium_line_t4_g4_g2_ParamLimits

0x231b,	// (0x000ac6b5) list_medium_line_t4_g4_g2

0x2327,	// (0x000ac6c1) list_medium_line_t4_g4_g3_ParamLimits

0x2327,	// (0x000ac6c1) list_medium_line_t4_g4_g3

0x1102,	// (0x000ab49c) list_medium_line_t4_g4_g4_ParamLimits

0x1102,	// (0x000ab49c) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x000b96b5) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x000b96b5) list_medium_line_t4_g4_g

0x2333,	// (0x000ac6cd) list_medium_line_t4_g4_t1_ParamLimits

0x2333,	// (0x000ac6cd) list_medium_line_t4_g4_t1

0x2348,	// (0x000ac6e2) list_medium_line_t4_g4_t2_ParamLimits

0x2348,	// (0x000ac6e2) list_medium_line_t4_g4_t2

0x235d,	// (0x000ac6f7) list_medium_line_t4_g4_t3_ParamLimits

0x235d,	// (0x000ac6f7) list_medium_line_t4_g4_t3

0x1137,	// (0x000ab4d1) list_medium_line_t4_g4_t4_ParamLimits

0x1137,	// (0x000ab4d1) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x000b96be) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x000b96be) list_medium_line_t4_g4_t

0x2425,	// (0x000ac7bf) chi_dic_find_pane_g1

0x34cd,	// (0x000ad867) main_tport_pane

0x63f3,	// (0x000b078d) list_medium_line_plain_t1

0x649b,	// (0x000b0835) list_medium_line_t2_g2_g1_ParamLimits

0x649b,	// (0x000b0835) list_medium_line_t2_g2_g1

0x64a7,	// (0x000b0841) list_medium_line_t2_g2_g2_ParamLimits

0x64a7,	// (0x000b0841) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x000b9d83) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x000b9d83) list_medium_line_t2_g2_g

0x64b3,	// (0x000b084d) list_medium_line_t2_g2_t1_ParamLimits

0x64b3,	// (0x000b084d) list_medium_line_t2_g2_t1

0x64cd,	// (0x000b0867) list_medium_line_t2_g2_t2_ParamLimits

0x64cd,	// (0x000b0867) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x000b9d88) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x000b9d88) list_medium_line_t2_g2_t

0xa8d7,	// (0x000b4c71) aid_sp_fs_list_icon_a_sm

0xa8df,	// (0x000b4c79) aid_sp_fs_list_icon_d

0xb7f7,	// (0x000b5b91) aid_sp_fs_text_primary

0xa8e7,	// (0x000b4c81) aid_sp_fs_text_secondary

0x6b40,	// (0x000b0eda) list_medium_line

0x6b40,	// (0x000b0eda) list_medium_line_g2

0x6b40,	// (0x000b0eda) list_medium_line_g3

0x6b40,	// (0x000b0eda) list_medium_line_plain

0x6b40,	// (0x000b0eda) list_medium_line_plain_t2

0x6b40,	// (0x000b0eda) list_medium_line_plain_t3

0x6b40,	// (0x000b0eda) list_medium_line_right_icon

0x6b40,	// (0x000b0eda) list_medium_line_right_iconx2

0x6b40,	// (0x000b0eda) list_medium_line_t2

0x6b40,	// (0x000b0eda) list_medium_line_t2_g2

0x6b40,	// (0x000b0eda) list_medium_line_t2_g3

0x6b40,	// (0x000b0eda) list_medium_line_t2_right_icon

0x6b40,	// (0x000b0eda) list_medium_line_t2_right_iconx2

0x6b40,	// (0x000b0eda) list_medium_line_t3

0x6b40,	// (0x000b0eda) list_medium_line_t3_g2

0x6b40,	// (0x000b0eda) list_medium_line_t3_g3

0x6b40,	// (0x000b0eda) list_medium_line_t3_right_iconx2

0x6b49,	// (0x000b0ee3) list_medium_line_t4_g4

0x6b40,	// (0x000b0eda) list_medium_line_x2

0x6b40,	// (0x000b0eda) list_medium_line_x2_t2_g2

0x6b40,	// (0x000b0eda) list_medium_line_x2_t2_g3

0x6b40,	// (0x000b0eda) list_medium_line_x2_t2_g4

0x6b40,	// (0x000b0eda) list_medium_line_x2_t3

0x6b40,	// (0x000b0eda) list_medium_line_x2_t3_g2

0x6b40,	// (0x000b0eda) list_medium_line_x2_t3_g3

0x6b40,	// (0x000b0eda) list_medium_line_x2_t3_g4

0x6b40,	// (0x000b0eda) list_medium_line_x2_t4_g2

0x6b40,	// (0x000b0eda) list_medium_line_x2_t4_g4

0x6b52,	// (0x000b0eec) list_medium_line_x3

0x6b52,	// (0x000b0eec) list_medium_line_x3_t4

0x6b52,	// (0x000b0eec) list_medium_line_x3_t4_g4

0x6b49,	// (0x000b0ee3) list_medium_line_x4_t4

0x6b49,	// (0x000b0ee3) list_medium_line_x4_t4_g7

0x6b49,	// (0x000b0ee3) list_medium_line_x4_t5

0x6b5b,	// (0x000b0ef5) list_single_fs_dyc_pane_ParamLimits

0x6b5b,	// (0x000b0ef5) list_single_fs_dyc_pane

0x10ea,	// (0x000ab484) list_medium_line_x4_t4_g7_g1_ParamLimits

0x10ea,	// (0x000ab484) list_medium_line_x4_t4_g7_g1

0x72d2,	// (0x000b166c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x72d2,	// (0x000b166c) list_medium_line_x4_t4_g7_g2

0x72de,	// (0x000b1678) list_medium_line_x4_t4_g7_g3_ParamLimits

0x72de,	// (0x000b1678) list_medium_line_x4_t4_g7_g3

0x72ed,	// (0x000b1687) list_medium_line_x4_t4_g7_g4_ParamLimits

0x72ed,	// (0x000b1687) list_medium_line_x4_t4_g7_g4

0x72f9,	// (0x000b1693) list_medium_line_x4_t4_g7_g5_ParamLimits

0x72f9,	// (0x000b1693) list_medium_line_x4_t4_g7_g5

0x7308,	// (0x000b16a2) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7308,	// (0x000b16a2) list_medium_line_x4_t4_g7_g6

0x7317,	// (0x000b16b1) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7317,	// (0x000b16b1) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb9,	// (0x000b9f53) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb9,	// (0x000b9f53) list_medium_line_x4_t4_g7_g

0x7323,	// (0x000b16bd) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7323,	// (0x000b16bd) list_medium_line_x4_t4_g7_t1

0x7338,	// (0x000b16d2) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7338,	// (0x000b16d2) list_medium_line_x4_t4_g7_t2

0x734d,	// (0x000b16e7) list_medium_line_x4_t4_g7_t3_ParamLimits

0x734d,	// (0x000b16e7) list_medium_line_x4_t4_g7_t3

0x7362,	// (0x000b16fc) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7362,	// (0x000b16fc) list_medium_line_x4_t4_g7_t4

0x7374,	// (0x000b170e) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7374,	// (0x000b170e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc8,	// (0x000b9f62) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc8,	// (0x000b9f62) list_medium_line_x4_t4_g7_t

0x7386,	// (0x000b1720) list_single_dyc_row_pane_ParamLimits

0x7386,	// (0x000b1720) list_single_dyc_row_pane

0x7ab8,	// (0x000b1e52) call5_gesture_pane_ParamLimits

0x7ab8,	// (0x000b1e52) call5_gesture_pane

0x7b0e,	// (0x000b1ea8) call5_windows_pane_ParamLimits

0x7b0e,	// (0x000b1ea8) call5_windows_pane

0x7b79,	// (0x000b1f13) call5_swipe_1_pane_cp_ParamLimits

0x7b79,	// (0x000b1f13) call5_swipe_1_pane_cp

0x7b85,	// (0x000b1f1f) call5_swipe_2_pane_cp_ParamLimits

0x7b85,	// (0x000b1f1f) call5_swipe_2_pane_cp

0xa5d0,	// (0x000b496a) call5_image_pane_cp

0x7b91,	// (0x000b1f2b) popup_call5_audio_first_window_cp_ParamLimits

0x7b91,	// (0x000b1f2b) popup_call5_audio_first_window_cp

0xe650,	// (0x000b89ea) call5_swipe_1_pane_g1_cp_ParamLimits

0xe650,	// (0x000b89ea) call5_swipe_1_pane_g1_cp

0xe6bd,	// (0x000b8a57) call5_swipe_1_pane_g2_cp

0xe669,	// (0x000b8a03) call5_swipe_1_pane_t1_cp_ParamLimits

0xe669,	// (0x000b8a03) call5_swipe_1_pane_t1_cp

0xe650,	// (0x000b89ea) call5_swipe_2_pane_g1_cp_ParamLimits

0xe650,	// (0x000b89ea) call5_swipe_2_pane_g1_cp

0xe6c5,	// (0x000b8a5f) call5_swipe_2_pane_g2_cp

0xe6cd,	// (0x000b8a67) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6cd,	// (0x000b8a67) call5_swipe_2_pane_t1_cp

0xa7a8,	// (0x000b4b42) main_sp_fs_email_pane

0xe6e2,	// (0x000b8a7c) main_sp_fs_listscroll_pane_te

0x7b9f,	// (0x000b1f39) popup_sp_fs_action_menu_pane_ParamLimits

0x7b9f,	// (0x000b1f39) popup_sp_fs_action_menu_pane

0xcd11,	// (0x000b70ab) bg_sp_fs_ctrlbar_pane_g1

0xe6eb,	// (0x000b8a85) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6f4,	// (0x000b8a8e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6fd,	// (0x000b8a97) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd11,	// (0x000b70ab) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb6,	// (0x000ba050) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcaf6,	// (0x000b6e90) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcaf6,	// (0x000b6e90) bg_sp_fs_ctrlbar_ddmenu_pane

0xe706,	// (0x000b8aa0) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe706,	// (0x000b8aa0) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe712,	// (0x000b8aac) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe712,	// (0x000b8aac) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbf,	// (0x000ba059) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbf,	// (0x000ba059) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe71e,	// (0x000b8ab8) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe71e,	// (0x000b8ab8) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7be3,	// (0x000b1f7d) list_medium_line_t2_right_icon_g1

0x7beb,	// (0x000b1f85) list_medium_line_t2_right_icon_t1

0x7bfb,	// (0x000b1f95) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc4,	// (0x000ba05e) list_medium_line_t2_right_icon_t

0xc909,	// (0x000b6ca3) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc909,	// (0x000b6ca3) bg_sp_fs_ctrlbar_pane

0x7c55,	// (0x000b1fef) main_sp_fs_ctrlbar_button_pane_cp01

0x7c5f,	// (0x000b1ff9) main_sp_fs_ctrlbar_ddmenu_pane

0xe770,	// (0x000b8b0a) main_sp_fs_ctrlbar_pane_g1

0xe77c,	// (0x000b8b16) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc9,	// (0x000ba063) main_sp_fs_ctrlbar_pane_g

0x7c9d,	// (0x000b2037) main_sp_fs_ctrlbar_pane_t1

0x7cdc,	// (0x000b2076) main_sp_fs_ctrlbar_pane

0x7d00,	// (0x000b209a) main_sp_fs_listscroll_pane_te_cp01

0x7d20,	// (0x000b20ba) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7d20,	// (0x000b20ba) popup_sp_fs_action_menu_pane_cp01

0xa7a8,	// (0x000b4b42) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa7a8,	// (0x000b4b42) bg_sp_fs_highlight_list_pane_cp01

0xa8f0,	// (0x000b4c8a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa8f0,	// (0x000b4c8a) sp_fs_action_menu_list_gene_pane_g1

0xe7a3,	// (0x000b8b3d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7a3,	// (0x000b8b3d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd7,	// (0x000ba071) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd7,	// (0x000ba071) sp_fs_action_menu_list_gene_pane_g

0xa8ff,	// (0x000b4c99) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa8ff,	// (0x000b4c99) sp_fs_action_menu_list_gene_pane_t1

0xa917,	// (0x000b4cb1) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa917,	// (0x000b4cb1) sp_fs_action_menu_list_gene_pane

0xe7b0,	// (0x000b8b4a) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7b0,	// (0x000b8b4a) popup_sp_fs_action_menu_bg_pane

0xa938,	// (0x000b4cd2) sp_fs_action_menu_list_pane_ParamLimits

0xa938,	// (0x000b4cd2) sp_fs_action_menu_list_pane

0xa95a,	// (0x000b4cf4) sp_fs_scroll_pane_cp01_ParamLimits

0xa95a,	// (0x000b4cf4) sp_fs_scroll_pane_cp01

0x7d50,	// (0x000b20ea) list_medium_line_plain_t2_t1

0x7d60,	// (0x000b20fa) list_medium_line_plain_t2_t2

0x0001,

0xfcdc,	// (0x000ba076) list_medium_line_plain_t2_t

0x7d70,	// (0x000b210a) list_medium_line_plain_t3_t1

0x7d80,	// (0x000b211a) list_medium_line_plain_t3_t2

0x7d8e,	// (0x000b2128) list_medium_line_plain_t3_t3

0x0002,

0xfce1,	// (0x000ba07b) list_medium_line_plain_t3_t

0x10ea,	// (0x000ab484) list_medium_line_x2_t2_g2_g1_ParamLimits

0x10ea,	// (0x000ab484) list_medium_line_x2_t2_g2_g1

0x1102,	// (0x000ab49c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1102,	// (0x000ab49c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x000b95c5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x000b95c5) list_medium_line_x2_t2_g2_g

0x2333,	// (0x000ac6cd) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2333,	// (0x000ac6cd) list_medium_line_x2_t2_g2_t1

0x1137,	// (0x000ab4d1) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1137,	// (0x000ab4d1) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce8,	// (0x000ba082) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce8,	// (0x000ba082) list_medium_line_x2_t2_g2_t

0x10ea,	// (0x000ab484) list_medium_line_x2_t4_g2_g1_ParamLimits

0x10ea,	// (0x000ab484) list_medium_line_x2_t4_g2_g1

0x7d9c,	// (0x000b2136) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7d9c,	// (0x000b2136) list_medium_line_x2_t4_g2_g2

0x0001,

0xfced,	// (0x000ba087) list_medium_line_x2_t4_g2_g_ParamLimits

0xfced,	// (0x000ba087) list_medium_line_x2_t4_g2_g

0x7dae,	// (0x000b2148) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7dae,	// (0x000b2148) list_medium_line_x2_t4_g2_t1

0x7dc8,	// (0x000b2162) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7dc8,	// (0x000b2162) list_medium_line_x2_t4_g2_t2

0x7dde,	// (0x000b2178) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7dde,	// (0x000b2178) list_medium_line_x2_t4_g2_t3

0x1137,	// (0x000ab4d1) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1137,	// (0x000ab4d1) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf2,	// (0x000ba08c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf2,	// (0x000ba08c) list_medium_line_x2_t4_g2_t

0x7df3,	// (0x000b218d) list_medium_line_t3_right_iconx2_g1

0x7be3,	// (0x000b1f7d) list_medium_line_t3_right_iconx2_g2

0x7dfb,	// (0x000b2195) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcfb,	// (0x000ba095) list_medium_line_t3_right_iconx2_g

0x7e05,	// (0x000b219f) list_medium_line_t3_right_iconx2_t1

0x7e15,	// (0x000b21af) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd02,	// (0x000ba09c) list_medium_line_t3_right_iconx2_t

0x10ea,	// (0x000ab484) list_medium_line_x3_t4_g4_g1_ParamLimits

0x10ea,	// (0x000ab484) list_medium_line_x3_t4_g4_g1

0x10f6,	// (0x000ab490) list_medium_line_x3_t4_g4_g2_ParamLimits

0x10f6,	// (0x000ab490) list_medium_line_x3_t4_g4_g2

0x231b,	// (0x000ac6b5) list_medium_line_x3_t4_g4_g3_ParamLimits

0x231b,	// (0x000ac6b5) list_medium_line_x3_t4_g4_g3

0x7e23,	// (0x000b21bd) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7e23,	// (0x000b21bd) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd07,	// (0x000ba0a1) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd07,	// (0x000ba0a1) list_medium_line_x3_t4_g4_g

0x7e2f,	// (0x000b21c9) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7e2f,	// (0x000b21c9) list_medium_line_x3_t4_g4_t1

0x7e46,	// (0x000b21e0) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7e46,	// (0x000b21e0) list_medium_line_x3_t4_g4_t2

0x2348,	// (0x000ac6e2) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2348,	// (0x000ac6e2) list_medium_line_x3_t4_g4_t3

0x7e61,	// (0x000b21fb) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7e61,	// (0x000b21fb) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd10,	// (0x000ba0aa) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd10,	// (0x000ba0aa) list_medium_line_x3_t4_g4_t

0x7e7e,	// (0x000b2218) list_single_dyc_row_text_pane_t1_ParamLimits

0x7e7e,	// (0x000b2218) list_single_dyc_row_text_pane_t1

0x7ec7,	// (0x000b2261) list_single_dyc_row_text_pane_t2_ParamLimits

0x7ec7,	// (0x000b2261) list_single_dyc_row_text_pane_t2

0xa980,	// (0x000b4d1a) list_single_dyc_row_text_pane_t3_ParamLimits

0xa980,	// (0x000b4d1a) list_single_dyc_row_text_pane_t3

0x0005,

0xfd19,	// (0x000ba0b3) list_single_dyc_row_text_pane_t_ParamLimits

0xfd19,	// (0x000ba0b3) list_single_dyc_row_text_pane_t

0xa9a4,	// (0x000b4d3e) list_single_dyc_row_pane_g1_ParamLimits

0xa9a4,	// (0x000b4d3e) list_single_dyc_row_pane_g1

0xa9b0,	// (0x000b4d4a) list_single_dyc_row_pane_g2_ParamLimits

0xa9b0,	// (0x000b4d4a) list_single_dyc_row_pane_g2

0xa9bc,	// (0x000b4d56) list_single_dyc_row_pane_g3_ParamLimits

0xa9bc,	// (0x000b4d56) list_single_dyc_row_pane_g3

0xa9c8,	// (0x000b4d62) list_single_dyc_row_pane_g4_ParamLimits

0xa9c8,	// (0x000b4d62) list_single_dyc_row_pane_g4

0x0003,

0xfd26,	// (0x000ba0c0) list_single_dyc_row_pane_g_ParamLimits

0xfd26,	// (0x000ba0c0) list_single_dyc_row_pane_g

0xa9d4,	// (0x000b4d6e) list_single_dyc_row_text_pane_ParamLimits

0xa9d4,	// (0x000b4d6e) list_single_dyc_row_text_pane

0x94a2,	// (0x000b383c) bg_sp_fs_scroll_pane

0xe7be,	// (0x000b8b58) thumb_sp_fs_scroll_pane

0x649b,	// (0x000b0835) list_medium_line_g1_ParamLimits

0x649b,	// (0x000b0835) list_medium_line_g1

0x7ffc,	// (0x000b2396) list_medium_line_t1_ParamLimits

0x7ffc,	// (0x000b2396) list_medium_line_t1

0x10ea,	// (0x000ab484) list_medium_line_x2_g1_ParamLimits

0x10ea,	// (0x000ab484) list_medium_line_x2_g1

0x10f6,	// (0x000ab490) list_medium_line_x2_g2_ParamLimits

0x10f6,	// (0x000ab490) list_medium_line_x2_g2

0x0001,

0xfd2f,	// (0x000ba0c9) list_medium_line_x2_g_ParamLimits

0xfd2f,	// (0x000ba0c9) list_medium_line_x2_g

0xa9f3,	// (0x000b4d8d) list_medium_line_x2_t1_ParamLimits

0xa9f3,	// (0x000b4d8d) list_medium_line_x2_t1

0x10ea,	// (0x000ab484) list_medium_line_x3_g1_ParamLimits

0x10ea,	// (0x000ab484) list_medium_line_x3_g1

0x10f6,	// (0x000ab490) list_medium_line_x3_g2_ParamLimits

0x10f6,	// (0x000ab490) list_medium_line_x3_g2

0x0001,

0xfd2f,	// (0x000ba0c9) list_medium_line_x3_g_ParamLimits

0xfd2f,	// (0x000ba0c9) list_medium_line_x3_g

0xa9f3,	// (0x000b4d8d) list_medium_line_x3_t1_ParamLimits

0xa9f3,	// (0x000b4d8d) list_medium_line_x3_t1

0xe7c7,	// (0x000b8b61) thumb_sp_fs_scroll_pane_g1

0xe7d0,	// (0x000b8b6a) thumb_sp_fs_scroll_pane_g2

0xe7d9,	// (0x000b8b73) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd34,	// (0x000ba0ce) thumb_sp_fs_scroll_pane_g

0xe7c7,	// (0x000b8b61) bg_sp_fs_scroll_pane_g1

0xe7d0,	// (0x000b8b6a) bg_sp_fs_scroll_pane_g2

0xe7d9,	// (0x000b8b73) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd34,	// (0x000ba0ce) bg_sp_fs_scroll_pane_g

0x10ea,	// (0x000ab484) list_medium_line_x2_t3_g4_g1_ParamLimits

0x10ea,	// (0x000ab484) list_medium_line_x2_t3_g4_g1

0x1174,	// (0x000ab50e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1174,	// (0x000ab50e) list_medium_line_x2_t3_g4_g2

0x10f6,	// (0x000ab490) list_medium_line_x2_t3_g4_g3_ParamLimits

0x10f6,	// (0x000ab490) list_medium_line_x2_t3_g4_g3

0x1102,	// (0x000ab49c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1102,	// (0x000ab49c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x000b9641) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x000b9641) list_medium_line_x2_t3_g4_g

0x8011,	// (0x000b23ab) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8011,	// (0x000b23ab) list_medium_line_x2_t3_g4_t1

0x8029,	// (0x000b23c3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8029,	// (0x000b23c3) list_medium_line_x2_t3_g4_t2

0x1137,	// (0x000ab4d1) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1137,	// (0x000ab4d1) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd3b,	// (0x000ba0d5) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd3b,	// (0x000ba0d5) list_medium_line_x2_t3_g4_t

0x649b,	// (0x000b0835) list_medium_line_g2_g1_ParamLimits

0x649b,	// (0x000b0835) list_medium_line_g2_g1

0x64a7,	// (0x000b0841) list_medium_line_g2_g2_ParamLimits

0x64a7,	// (0x000b0841) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x000b9d83) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x000b9d83) list_medium_line_g2_g

0x8043,	// (0x000b23dd) list_medium_line_g2_t1_ParamLimits

0x8043,	// (0x000b23dd) list_medium_line_g2_t1

0x649b,	// (0x000b0835) list_medium_line_t3_g2_g1_ParamLimits

0x649b,	// (0x000b0835) list_medium_line_t3_g2_g1

0x64a7,	// (0x000b0841) list_medium_line_t3_g2_g2_ParamLimits

0x64a7,	// (0x000b0841) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x000b9d83) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x000b9d83) list_medium_line_t3_g2_g

0x8058,	// (0x000b23f2) list_medium_line_t3_g2_t1_ParamLimits

0x8058,	// (0x000b23f2) list_medium_line_t3_g2_t1

0x8072,	// (0x000b240c) list_medium_line_t3_g2_t2_ParamLimits

0x8072,	// (0x000b240c) list_medium_line_t3_g2_t2

0x8088,	// (0x000b2422) list_medium_line_t3_g2_t3_ParamLimits

0x8088,	// (0x000b2422) list_medium_line_t3_g2_t3

0x0002,

0xfd42,	// (0x000ba0dc) list_medium_line_t3_g2_t_ParamLimits

0xfd42,	// (0x000ba0dc) list_medium_line_t3_g2_t

0x7be3,	// (0x000b1f7d) list_medium_line_right_icon_g1

0x80a2,	// (0x000b243c) list_medium_line_right_icon_t1

0x649b,	// (0x000b0835) list_medium_line_t2_g1_ParamLimits

0x649b,	// (0x000b0835) list_medium_line_t2_g1

0x80b0,	// (0x000b244a) list_medium_line_t2_t1_ParamLimits

0x80b0,	// (0x000b244a) list_medium_line_t2_t1

0x80ca,	// (0x000b2464) list_medium_line_t2_t2_ParamLimits

0x80ca,	// (0x000b2464) list_medium_line_t2_t2

0x0001,

0xfd49,	// (0x000ba0e3) list_medium_line_t2_t_ParamLimits

0xfd49,	// (0x000ba0e3) list_medium_line_t2_t

0x649b,	// (0x000b0835) list_medium_line_t3_g1_ParamLimits

0x649b,	// (0x000b0835) list_medium_line_t3_g1

0x80e3,	// (0x000b247d) list_medium_line_t3_t1_ParamLimits

0x80e3,	// (0x000b247d) list_medium_line_t3_t1

0x80fd,	// (0x000b2497) list_medium_line_t3_t2_ParamLimits

0x80fd,	// (0x000b2497) list_medium_line_t3_t2

0x8113,	// (0x000b24ad) list_medium_line_t3_t3_ParamLimits

0x8113,	// (0x000b24ad) list_medium_line_t3_t3

0x0002,

0xfd4e,	// (0x000ba0e8) list_medium_line_t3_t_ParamLimits

0xfd4e,	// (0x000ba0e8) list_medium_line_t3_t

0x649b,	// (0x000b0835) list_medium_line_g3_g1_ParamLimits

0x649b,	// (0x000b0835) list_medium_line_g3_g1

0x8128,	// (0x000b24c2) list_medium_line_g3_g2_ParamLimits

0x8128,	// (0x000b24c2) list_medium_line_g3_g2

0x64a7,	// (0x000b0841) list_medium_line_g3_g3_ParamLimits

0x64a7,	// (0x000b0841) list_medium_line_g3_g3

0x0002,

0xfd55,	// (0x000ba0ef) list_medium_line_g3_g_ParamLimits

0xfd55,	// (0x000ba0ef) list_medium_line_g3_g

0x8134,	// (0x000b24ce) list_medium_line_g3_t1_ParamLimits

0x8134,	// (0x000b24ce) list_medium_line_g3_t1

0x649b,	// (0x000b0835) list_medium_line_t2_g3_g1_ParamLimits

0x649b,	// (0x000b0835) list_medium_line_t2_g3_g1

0x8128,	// (0x000b24c2) list_medium_line_t2_g3_g2_ParamLimits

0x8128,	// (0x000b24c2) list_medium_line_t2_g3_g2

0x64a7,	// (0x000b0841) list_medium_line_t2_g3_g3_ParamLimits

0x64a7,	// (0x000b0841) list_medium_line_t2_g3_g3

0x0002,

0xfd55,	// (0x000ba0ef) list_medium_line_t2_g3_g_ParamLimits

0xfd55,	// (0x000ba0ef) list_medium_line_t2_g3_g

0x8149,	// (0x000b24e3) list_medium_line_t2_g3_t1_ParamLimits

0x8149,	// (0x000b24e3) list_medium_line_t2_g3_t1

0x8163,	// (0x000b24fd) list_medium_line_t2_g3_t2_ParamLimits

0x8163,	// (0x000b24fd) list_medium_line_t2_g3_t2

0x0001,

0xfd5c,	// (0x000ba0f6) list_medium_line_t2_g3_t_ParamLimits

0xfd5c,	// (0x000ba0f6) list_medium_line_t2_g3_t

0x649b,	// (0x000b0835) list_medium_line_t3_g3_g1_ParamLimits

0x649b,	// (0x000b0835) list_medium_line_t3_g3_g1

0x8128,	// (0x000b24c2) list_medium_line_t3_g3_g2_ParamLimits

0x8128,	// (0x000b24c2) list_medium_line_t3_g3_g2

0x64a7,	// (0x000b0841) list_medium_line_t3_g3_g3_ParamLimits

0x64a7,	// (0x000b0841) list_medium_line_t3_g3_g3

0x0002,

0xfd55,	// (0x000ba0ef) list_medium_line_t3_g3_g_ParamLimits

0xfd55,	// (0x000ba0ef) list_medium_line_t3_g3_g

0x817f,	// (0x000b2519) list_medium_line_t3_g3_t1_ParamLimits

0x817f,	// (0x000b2519) list_medium_line_t3_g3_t1

0x8198,	// (0x000b2532) list_medium_line_t3_g3_t2_ParamLimits

0x8198,	// (0x000b2532) list_medium_line_t3_g3_t2

0x81ae,	// (0x000b2548) list_medium_line_t3_g3_t3_ParamLimits

0x81ae,	// (0x000b2548) list_medium_line_t3_g3_t3

0x0002,

0xfd61,	// (0x000ba0fb) list_medium_line_t3_g3_t_ParamLimits

0xfd61,	// (0x000ba0fb) list_medium_line_t3_g3_t

0x7df3,	// (0x000b218d) list_medium_line_right_iconx2_g1

0x7be3,	// (0x000b1f7d) list_medium_line_right_iconx2_g2

0x0001,

0xfd68,	// (0x000ba102) list_medium_line_right_iconx2_g

0x81c8,	// (0x000b2562) list_medium_line_right_iconx2_t1

0x7df3,	// (0x000b218d) list_medium_line_t2_right_iconx2_g1

0x7be3,	// (0x000b1f7d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd68,	// (0x000ba102) list_medium_line_t2_right_iconx2_g

0x81d6,	// (0x000b2570) list_medium_line_t2_right_iconx2_t1

0x81e6,	// (0x000b2580) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd6d,	// (0x000ba107) list_medium_line_t2_right_iconx2_t

0x81f8,	// (0x000b2592) list_medium_line_x4_t4_t1

0x8206,	// (0x000b25a0) list_medium_line_x4_t4_t2

0x8216,	// (0x000b25b0) list_medium_line_x4_t4_t3

0x8226,	// (0x000b25c0) list_medium_line_x4_t4_t4

0x0003,

0xfd72,	// (0x000ba10c) list_medium_line_x4_t4_t

0x8279,	// (0x000b2613) tport_appsw_pane_ParamLimits

0x8279,	// (0x000b2613) tport_appsw_pane

0x8291,	// (0x000b262b) tport_contact_pane_ParamLimits

0x8291,	// (0x000b262b) tport_contact_pane

0x82a9,	// (0x000b2643) tport_listscroll_pane_ParamLimits

0x82a9,	// (0x000b2643) tport_listscroll_pane

0x82c3,	// (0x000b265d) cell_tport_appsw_pane_ParamLimits

0x82c3,	// (0x000b265d) cell_tport_appsw_pane

0xd6da,	// (0x000b7a74) tport_appsw_pane_g1_ParamLimits

0xd6da,	// (0x000b7a74) tport_appsw_pane_g1

0xe7e2,	// (0x000b8b7c) tport_contact_pane_g1

0xe1a2,	// (0x000b853c) tport_contact_pane_t1

0xe7eb,	// (0x000b8b85) tport_contact_pane_t2

0x0001,

0xfd7b,	// (0x000ba115) tport_contact_pane_t

0xe7f9,	// (0x000b8b93) list_tport_pane

0xe802,	// (0x000b8b9c) scroll_pane_cp_030

0x830b,	// (0x000b26a5) cell_tport_appsw_pane_g1

0x831b,	// (0x000b26b5) cell_tport_appsw_pane_t1

0x8329,	// (0x000b26c3) grid_highlight_pane_cp019

0x8331,	// (0x000b26cb) list_tport_double_graphic_pane_ParamLimits

0x8331,	// (0x000b26cb) list_tport_double_graphic_pane

0xa7a8,	// (0x000b4b42) list_highlight_pane_cp023_ParamLimits

0xa7a8,	// (0x000b4b42) list_highlight_pane_cp023

0x833e,	// (0x000b26d8) list_tport_double_graphic_pane_g1_ParamLimits

0x833e,	// (0x000b26d8) list_tport_double_graphic_pane_g1

0x834b,	// (0x000b26e5) list_tport_double_graphic_pane_t1_ParamLimits

0x834b,	// (0x000b26e5) list_tport_double_graphic_pane_t1

0x8360,	// (0x000b26fa) list_tport_double_graphic_pane_t2_ParamLimits

0x8360,	// (0x000b26fa) list_tport_double_graphic_pane_t2

0x0001,

0xfd87,	// (0x000ba121) list_tport_double_graphic_pane_t_ParamLimits

0xfd87,	// (0x000ba121) list_tport_double_graphic_pane_t

0x94a2,	// (0x000b383c) main_cale_note_pane

0x5c61,	// (0x000afffb) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5c61,	// (0x000afffb) cell_vitu2_function_top_wide_pane_cp01

0x7737,	// (0x000b1ad1) wait_bar_pane_cp05_ParamLimits

0xa7a8,	// (0x000b4b42) listscroll_cmail_pane

0xe80b,	// (0x000b8ba5) list_cmail_pane

0x8372,	// (0x000b270c) list_cmail_body_pane

0x8387,	// (0x000b2721) list_single_cmail_header_caption_pane

0x839d,	// (0x000b2737) list_single_cmail_header_detail_pane_ParamLimits

0x839d,	// (0x000b2737) list_single_cmail_header_detail_pane

0xe81b,	// (0x000b8bb5) list_single_cmail_header_caption_pane_t1

0x83c6,	// (0x000b2760) list_single_cmail_header_detail_pane_g1_ParamLimits

0x83c6,	// (0x000b2760) list_single_cmail_header_detail_pane_g1

0xaa09,	// (0x000b4da3) list_single_cmail_header_detail_pane_g2_ParamLimits

0xaa09,	// (0x000b4da3) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd8c,	// (0x000ba126) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd8c,	// (0x000ba126) list_single_cmail_header_detail_pane_g

0xaa15,	// (0x000b4daf) list_single_cmail_header_detail_pane_t1_ParamLimits

0xaa15,	// (0x000b4daf) list_single_cmail_header_detail_pane_t1

0xaa75,	// (0x000b4e0f) list_single_cmail_header_editor_pane_bg_ParamLimits

0xaa75,	// (0x000b4e0f) list_single_cmail_header_editor_pane_bg

0xe2ff,	// (0x000b8699) list_cmail_body_pane_g1

0xe83f,	// (0x000b8bd9) list_cmail_body_pane_t1

0xd6fa,	// (0x000b7a94) list_single_cmail_header_editor_pane_bg_g1

0xace0,	// (0x000b507a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd70a,	// (0x000b7aa4) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd702,	// (0x000b7a9c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd91e,	// (0x000b7cb8) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd72a,	// (0x000b7ac4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd71a,	// (0x000b7ab4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd722,	// (0x000b7abc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacc0,	// (0x000b505a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x83de,	// (0x000b2778) calenote_gesture_pane_ParamLimits

0x83de,	// (0x000b2778) calenote_gesture_pane

0x83fe,	// (0x000b2798) calenote_window_pane_ParamLimits

0x83fe,	// (0x000b2798) calenote_window_pane

0xe84d,	// (0x000b8be7) popup_note_window_cp01

0x841a,	// (0x000b27b4) calenote_swipe_1_pane_ParamLimits

0x841a,	// (0x000b27b4) calenote_swipe_1_pane

0x7b85,	// (0x000b1f1f) calenote_swipe_2_pane_ParamLimits

0x7b85,	// (0x000b1f1f) calenote_swipe_2_pane

0xe650,	// (0x000b89ea) calenote_swipe_1_pane_g1_ParamLimits

0xe650,	// (0x000b89ea) calenote_swipe_1_pane_g1

0xe65d,	// (0x000b89f7) calenote_swipe_1_pane_g2_ParamLimits

0xe65d,	// (0x000b89f7) calenote_swipe_1_pane_g2

0x0001,

0xfcac,	// (0x000ba046) calenote_swipe_1_pane_g_ParamLimits

0xfcac,	// (0x000ba046) calenote_swipe_1_pane_g

0xe85f,	// (0x000b8bf9) calenote_swipe_1_pane_t1_ParamLimits

0xe85f,	// (0x000b8bf9) calenote_swipe_1_pane_t1

0xe650,	// (0x000b89ea) calenote_swipe_2_pane_g1_ParamLimits

0xe650,	// (0x000b89ea) calenote_swipe_2_pane_g1

0xe87e,	// (0x000b8c18) calenote_swipe_2_pane_g2_ParamLimits

0xe87e,	// (0x000b8c18) calenote_swipe_2_pane_g2

0x0001,

0xfd98,	// (0x000ba132) calenote_swipe_2_pane_g_ParamLimits

0xfd98,	// (0x000ba132) calenote_swipe_2_pane_g

0xe88a,	// (0x000b8c24) calenote_swipe_2_pane_t1_ParamLimits

0xe88a,	// (0x000b8c24) calenote_swipe_2_pane_t1

0x94a2,	// (0x000b383c) main_mup_navstr_pane

0x48a2,	// (0x000aec3c) main_mup3_pane_t7_ParamLimits

0x48a2,	// (0x000aec3c) main_mup3_pane_t7

0x9c79,	// (0x000b4013) main_mp4_pane_g6_ParamLimits

0x9c79,	// (0x000b4013) main_mp4_pane_g6

0x9e3b,	// (0x000b41d5) main_image3_pane_t4_ParamLimits

0x9e3b,	// (0x000b41d5) main_image3_pane_t4

0x842f,	// (0x000b27c9) popup_navstr_preview_pane_ParamLimits

0x842f,	// (0x000b27c9) popup_navstr_preview_pane

0x8443,	// (0x000b27dd) scroll_navstr_pane_ParamLimits

0x8443,	// (0x000b27dd) scroll_navstr_pane

0x94a2,	// (0x000b383c) bg_popup_preview_window_pane_cp04

0xe8b1,	// (0x000b8c4b) popup_navstr_preview_pane_t1

0x8457,	// (0x000b27f1) scroll_navstr_pane_g1_ParamLimits

0x8457,	// (0x000b27f1) scroll_navstr_pane_g1

0x846b,	// (0x000b2805) scroll_navstr_pane_t1_ParamLimits

0x846b,	// (0x000b2805) scroll_navstr_pane_t1

0xe856,	// (0x000b8bf0) bg_button_pane_cp014

0xe856,	// (0x000b8bf0) bg_button_pane_cp030

0x7a5e,	// (0x000b1df8) list_double_fisheye_pane_g4_ParamLimits

0x7a5e,	// (0x000b1df8) list_double_fisheye_pane_g4

0x7a6a,	// (0x000b1e04) list_double_fisheye_pane_g5_ParamLimits

0x7a6a,	// (0x000b1e04) list_double_fisheye_pane_g5

0xb809,	// (0x000b5ba3) sp_fs_scroll_pane_cp03

0xe770,	// (0x000b8b0a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe77c,	// (0x000b8b16) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc9,	// (0x000ba063) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7c9d,	// (0x000b2037) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe813,	// (0x000b8bad) sp_fs_scroll_pane_cp02

0xa50f,	// (0x000b48a9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa50f,	// (0x000b48a9) popup_sp_fs_calendar_preview_list_single_pane

0x94a2,	// (0x000b383c) main_cam6_pano_pane

0x951a,	// (0x000b38b4) main_mup3_pane_ParamLimits

0x94a2,	// (0x000b383c) main_phacti_pane

0x760a,	// (0x000b19a4) bg_button_pane_cp11

0x7624,	// (0x000b19be) main_mobtv_info_pane_g2_ParamLimits

0x7624,	// (0x000b19be) main_mobtv_info_pane_g2

0x0001,

0xfc29,	// (0x000b9fc3) main_mobtv_info_pane_g_ParamLimits

0xfc29,	// (0x000b9fc3) main_mobtv_info_pane_g

0x7801,	// (0x000b1b9b) sc_clock_pane_t5_ParamLimits

0x7801,	// (0x000b1b9b) sc_clock_pane_t5

0x78c9,	// (0x000b1c63) main_radioblah_pane_g1_ParamLimits

0xe59c,	// (0x000b8936) main_radioblah_pane_t3_ParamLimits

0xe59c,	// (0x000b8936) main_radioblah_pane_t3

0xe5b4,	// (0x000b894e) main_radioblah_pane_t4_ParamLimits

0xe5b4,	// (0x000b894e) main_radioblah_pane_t4

0x78f1,	// (0x000b1c8b) main_radioblah_text_pane_ParamLimits

0x78f1,	// (0x000b1c8b) main_radioblah_text_pane

0x7903,	// (0x000b1c9d) main_radioblah_info_pane_g1_ParamLimits

0x799c,	// (0x000b1d36) main_radioblah_info_pane_t4_ParamLimits

0x799c,	// (0x000b1d36) main_radioblah_info_pane_t4

0xa7a8,	// (0x000b4b42) main_sp_fs_calendar_pane

0x8482,	// (0x000b281c) main_phacti_pane_g1

0x848a,	// (0x000b2824) phacti_note_pane_ParamLimits

0x848a,	// (0x000b2824) phacti_note_pane

0xe8c8,	// (0x000b8c62) phacti_term_pane_ParamLimits

0xe8c8,	// (0x000b8c62) phacti_term_pane

0xe8dd,	// (0x000b8c77) phacti_note_pane_t1_ParamLimits

0xe8dd,	// (0x000b8c77) phacti_note_pane_t1

0xaa8c,	// (0x000b4e26) phacti_term_pane_g1

0xaa94,	// (0x000b4e2e) phacti_term_pane_t1_ParamLimits

0xaa94,	// (0x000b4e2e) phacti_term_pane_t1

0xe8f4,	// (0x000b8c8e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa5ae,	// (0x000b4948) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfda2,	// (0x000ba13c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8fc,	// (0x000b8c96) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8fc,	// (0x000b8c96) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe912,	// (0x000b8cac) aid_popup_sp_fs_bg_corner_pane

0xcd11,	// (0x000b70ab) popup_sp_fs_calendar_preview_bg_pane_g1

0x94a2,	// (0x000b383c) popup_sp_fs_calendar_preview_bg_pane

0xe91a,	// (0x000b8cb4) popup_sp_fs_calendar_preview_list_pane

0xc909,	// (0x000b6ca3) bg_main_sp_fs_cale_pane_ParamLimits

0xc909,	// (0x000b6ca3) bg_main_sp_fs_cale_pane

0xaac7,	// (0x000b4e61) listscroll_cale_mrui_pane_ParamLimits

0xaac7,	// (0x000b4e61) listscroll_cale_mrui_pane

0xaadc,	// (0x000b4e76) listscroll_sp_fs_schedule_track_pane

0xaae5,	// (0x000b4e7f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xaae5,	// (0x000b4e7f) main_sp_fs_ctrlbar_pane_cp01

0xe922,	// (0x000b8cbc) main_sp_fs_ribbon_pane

0xaaf8,	// (0x000b4e92) popup_sp_fs_cale_preview_window

0x84ff,	// (0x000b2899) list_single_sp_fs_schedule_track_pane_ParamLimits

0x84ff,	// (0x000b2899) list_single_sp_fs_schedule_track_pane

0xa7a8,	// (0x000b4b42) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa7a8,	// (0x000b4b42) bg_sp_fs_highlight_list_pane_cp03

0x8512,	// (0x000b28ac) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8512,	// (0x000b28ac) list_single_sp_fs_schedule_track_pane_g1

0x851e,	// (0x000b28b8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x851e,	// (0x000b28b8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda7,	// (0x000ba141) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda7,	// (0x000ba141) list_single_sp_fs_schedule_track_pane_g

0x852a,	// (0x000b28c4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x852a,	// (0x000b28c4) list_single_sp_fs_schedule_track_pane_t1

0x8544,	// (0x000b28de) sp_fs_schedule_track_pane_ParamLimits

0x8544,	// (0x000b28de) sp_fs_schedule_track_pane

0xe92a,	// (0x000b8cc4) sp_fs_schedule_track_pane_g1

0xe932,	// (0x000b8ccc) sp_fs_schedule_track_pane_g2

0xe93a,	// (0x000b8cd4) sp_fs_schedule_track_pane_g3

0xe942,	// (0x000b8cdc) sp_fs_schedule_track_pane_g4

0xe94a,	// (0x000b8ce4) sp_fs_schedule_track_pane_g5

0x0004,

0xfdac,	// (0x000ba146) sp_fs_schedule_track_pane_g

0xd6fa,	// (0x000b7a94) bg_sp_fs_schedule_viewer_highlight_g1

0xace0,	// (0x000b507a) bg_sp_fs_schedule_viewer_highlight_g2

0xd702,	// (0x000b7a9c) bg_sp_fs_schedule_viewer_highlight_g3

0xd70a,	// (0x000b7aa4) bg_sp_fs_schedule_viewer_highlight_g4

0xd91e,	// (0x000b7cb8) bg_sp_fs_schedule_viewer_highlight_g5

0xd71a,	// (0x000b7ab4) bg_sp_fs_schedule_viewer_highlight_g6

0xd722,	// (0x000b7abc) bg_sp_fs_schedule_viewer_highlight_g7

0xd72a,	// (0x000b7ac4) bg_sp_fs_schedule_viewer_highlight_g8

0xacc0,	// (0x000b505a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb7,	// (0x000ba151) bg_sp_fs_schedule_viewer_highlight_g

0x94a2,	// (0x000b383c) bg_main_sp_fs_ribbon_pane

0x8555,	// (0x000b28ef) main_sp_fs_ribbon_pane_g1

0xe952,	// (0x000b8cec) main_sp_fs_ribbon_pane_t1

0x855e,	// (0x000b28f8) main_sp_fs_ribbon_pane_t2

0xe961,	// (0x000b8cfb) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdca,	// (0x000ba164) main_sp_fs_ribbon_pane_t

0xe970,	// (0x000b8d0a) main_sp_fs_ribbon_scheduler_pane

0xe978,	// (0x000b8d12) bg_main_sp_fs_ribbon_pane_g1

0xe981,	// (0x000b8d1b) bg_main_sp_fs_ribbon_pane_g2

0xe98a,	// (0x000b8d24) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdd1,	// (0x000ba16b) bg_main_sp_fs_ribbon_pane_g

0xe992,	// (0x000b8d2c) main_sp_fs_ribbon_scheduler_pane_g1

0xe99b,	// (0x000b8d35) main_sp_fs_ribbon_scheduler_pane_g2

0xe9a4,	// (0x000b8d3e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd8,	// (0x000ba172) main_sp_fs_ribbon_scheduler_pane_g

0xe9ad,	// (0x000b8d47) list_cale_mrui_pane

0x856d,	// (0x000b2907) sp_fs_scroll_pane_cp07_ParamLimits

0x856d,	// (0x000b2907) sp_fs_scroll_pane_cp07

0x8589,	// (0x000b2923) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8589,	// (0x000b2923) bg_sp_fs_schedule_viewer_highlight

0xe9ba,	// (0x000b8d54) list_single_sp_fs_schedule_track_pane_cp01

0xe9c2,	// (0x000b8d5c) list_sp_fs_schedule_track_pane

0xe9ca,	// (0x000b8d64) sp_fs_scroll_pane_cp06_ParamLimits

0xe9ca,	// (0x000b8d64) sp_fs_scroll_pane_cp06

0xcd11,	// (0x000b70ab) bgmain_sp_fs_calendar_pane_g1

0x8599,	// (0x000b2933) list_single_cale_mrui_pane_ParamLimits

0x8599,	// (0x000b2933) list_single_cale_mrui_pane

0xab0a,	// (0x000b4ea4) list_single_cale_mrui_row_pane_ParamLimits

0xab0a,	// (0x000b4ea4) list_single_cale_mrui_row_pane

0xab17,	// (0x000b4eb1) list_single_cale_mrui_row_pane_g1_ParamLimits

0xab17,	// (0x000b4eb1) list_single_cale_mrui_row_pane_g1

0xab4f,	// (0x000b4ee9) list_single_cale_mrui_row_pane_t1_ParamLimits

0xab4f,	// (0x000b4ee9) list_single_cale_mrui_row_pane_t1

0x85ba,	// (0x000b2954) list_single_cale_mrui_row_pane_t2_ParamLimits

0x85ba,	// (0x000b2954) list_single_cale_mrui_row_pane_t2

0xab61,	// (0x000b4efb) list_single_cale_mrui_row_pane_t3_ParamLimits

0xab61,	// (0x000b4efb) list_single_cale_mrui_row_pane_t3

0xab90,	// (0x000b4f2a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xab90,	// (0x000b4f2a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde6,	// (0x000ba180) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde6,	// (0x000ba180) list_single_cale_mrui_row_pane_t

0x8622,	// (0x000b29bc) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8622,	// (0x000b29bc) list_single_cmail_header_editor_pane_bg_cp01

0x8648,	// (0x000b29e2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8648,	// (0x000b29e2) list_single_cmail_header_editor_pane_bg_cp02

0x8668,	// (0x000b2a02) main_radioblah_text_pane_t1_ParamLimits

0x8668,	// (0x000b2a02) main_radioblah_text_pane_t1

0xe9e9,	// (0x000b8d83) cam6_indi_pane_cp01

0xe9f1,	// (0x000b8d8b) cam6_mode_pane_cp01

0xe9f9,	// (0x000b8d93) cam6_pano_pane

0xea02,	// (0x000b8d9c) cam6_zoom_pane_cp01

0xea0a,	// (0x000b8da4) cam6_pano_image_pane

0xea15,	// (0x000b8daf) cam6_pano_pane_g1

0xe2ff,	// (0x000b8699) cam6_pano_pane_g2

0xea1e,	// (0x000b8db8) cam6_pano_pane_g3

0xea27,	// (0x000b8dc1) cam6_pano_pane_g4

0xd2fc,	// (0x000b7696) cam6_pano_pane_g5

0xea30,	// (0x000b8dca) cam6_pano_pane_g6

0xea3a,	// (0x000b8dd4) cam6_pano_pane_g7

0xea42,	// (0x000b8ddc) cam6_pano_pane_g8

0xea4b,	// (0x000b8de5) cam6_pano_pane_g9

0x0008,

0xfdef,	// (0x000ba189) cam6_pano_pane_g

0x94a2,	// (0x000b383c) main_browser_tag_pane

0xe8a9,	// (0x000b8c43) grid_navstr_albumart_pane

0xea56,	// (0x000b8df0) cell_navstr_albumart_pane_ParamLimits

0xea56,	// (0x000b8df0) cell_navstr_albumart_pane

0xea76,	// (0x000b8e10) cell_navstr_albumart_pane_g1

0xc71a,	// (0x000b6ab4) cell_navstr_albumart_pane_g2

0xc72a,	// (0x000b6ac4) cell_navstr_albumart_pane_g3

0xc722,	// (0x000b6abc) cell_navstr_albumart_pane_g4

0x0003,

0xfe02,	// (0x000ba19c) cell_navstr_albumart_pane_g

0x8682,	// (0x000b2a1c) bt_list_pane_ParamLimits

0x8682,	// (0x000b2a1c) bt_list_pane

0x8696,	// (0x000b2a30) bt_list_pane_t1

0x86a5,	// (0x000b2a3f) bt_list_pane_t2

0x0001,

0xfe0b,	// (0x000ba1a5) bt_list_pane_t

0x94a2,	// (0x000b383c) main_cale_prevew_pane

0x86b4,	// (0x000b2a4e) popup_cale_preview_window_ParamLimits

0x86b4,	// (0x000b2a4e) popup_cale_preview_window

0xa7a8,	// (0x000b4b42) bg_popup_preview_window_pane_cp05_ParamLimits

0xa7a8,	// (0x000b4b42) bg_popup_preview_window_pane_cp05

0xea7e,	// (0x000b8e18) list_cale_preview_pane_ParamLimits

0xea7e,	// (0x000b8e18) list_cale_preview_pane

0x86cf,	// (0x000b2a69) list_double_cale_preview_pane_ParamLimits

0x86cf,	// (0x000b2a69) list_double_cale_preview_pane

0x86e1,	// (0x000b2a7b) list_single_cale_preview_pane_ParamLimits

0x86e1,	// (0x000b2a7b) list_single_cale_preview_pane

0x86f7,	// (0x000b2a91) list_single_cale_preview_pane_g1

0x86ff,	// (0x000b2a99) list_single_cale_preview_pane_t1_ParamLimits

0x86ff,	// (0x000b2a99) list_single_cale_preview_pane_t1

0x8714,	// (0x000b2aae) list_double_cale_preview_pane_g1

0x871c,	// (0x000b2ab6) list_double_cale_preview_pane_t1_ParamLimits

0x871c,	// (0x000b2ab6) list_double_cale_preview_pane_t1

0x8731,	// (0x000b2acb) list_double_cale_preview_pane_t2_ParamLimits

0x8731,	// (0x000b2acb) list_double_cale_preview_pane_t2

0x0001,

0xfe10,	// (0x000ba1aa) list_double_cale_preview_pane_t_ParamLimits

0xfe10,	// (0x000ba1aa) list_double_cale_preview_pane_t

0x94a2,	// (0x000b383c) main_ezdial_pane

0xa7a8,	// (0x000b4b42) main_sp_fs_email_pane_ParamLimits

0x7c0d,	// (0x000b1fa7) cmail_ddmenu_btn01_pane_ParamLimits

0x7c0d,	// (0x000b1fa7) cmail_ddmenu_btn01_pane

0x7c20,	// (0x000b1fba) cmail_ddmenu_btn02_pane_ParamLimits

0x7c20,	// (0x000b1fba) cmail_ddmenu_btn02_pane

0x7c43,	// (0x000b1fdd) cmail_ddmenu_btn03_pane_ParamLimits

0x7c43,	// (0x000b1fdd) cmail_ddmenu_btn03_pane

0x7cdc,	// (0x000b2076) main_sp_fs_ctrlbar_pane_ParamLimits

0x7d00,	// (0x000b209a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8372,	// (0x000b270c) list_cmail_body_pane_ParamLimits

0xe829,	// (0x000b8bc3) bg_button_pane_cp12

0xe832,	// (0x000b8bcc) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe832,	// (0x000b8bcc) list_single_cmail_header_detail_pane_g3

0xaa51,	// (0x000b4deb) list_single_cmail_header_detail_pane_t2_ParamLimits

0xaa51,	// (0x000b4deb) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd93,	// (0x000ba12d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd93,	// (0x000ba12d) list_single_cmail_header_detail_pane_t

0xaaa9,	// (0x000b4e43) phacti_term_pane_t2_ParamLimits

0xaaa9,	// (0x000b4e43) phacti_term_pane_t2

0x0001,

0xfd9d,	// (0x000ba137) phacti_term_pane_t_ParamLimits

0xfd9d,	// (0x000ba137) phacti_term_pane_t

0xea8a,	// (0x000b8e24) aid_size_list_single_double

0x8749,	// (0x000b2ae3) popup_ezdial_listscroll_window

0x8765,	// (0x000b2aff) popup_number_entry_window_cp01

0xa5d0,	// (0x000b496a) bg_popup_call_pane_cp09

0xea96,	// (0x000b8e30) ezdial_list_pane

0xea9e,	// (0x000b8e38) scroll_pane_cp23

0xc909,	// (0x000b6ca3) bg_button_pane_cp028_ParamLimits

0xc909,	// (0x000b6ca3) bg_button_pane_cp028

0x8773,	// (0x000b2b0d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8773,	// (0x000b2b0d) cmail_ddmenu_btn01_pane_g1

0x877f,	// (0x000b2b19) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x877f,	// (0x000b2b19) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe15,	// (0x000ba1af) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe15,	// (0x000ba1af) cmail_ddmenu_btn01_pane_g

0xeaa6,	// (0x000b8e40) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaa6,	// (0x000b8e40) cmail_ddmenu_btn01_pane_t1

0xc909,	// (0x000b6ca3) bg_button_pane_cp029_ParamLimits

0xc909,	// (0x000b6ca3) bg_button_pane_cp029

0x878b,	// (0x000b2b25) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x878b,	// (0x000b2b25) cmail_ddmenu_btn02_pane_g1

0x87a3,	// (0x000b2b3d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x87a3,	// (0x000b2b3d) cmail_ddmenu_btn02_pane_t1

0xa7a8,	// (0x000b4b42) bg_button_pane_cp031_ParamLimits

0xa7a8,	// (0x000b4b42) bg_button_pane_cp031

0x878b,	// (0x000b2b25) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x878b,	// (0x000b2b25) cmail_ddmenu_btn03_pane_g1

0x87a3,	// (0x000b2b3d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x87a3,	// (0x000b2b3d) cmail_ddmenu_btn03_pane_t1

0x5449,	// (0x000af7e3) cell_dialer2_keypad_pane_t1_ParamLimits

0x5463,	// (0x000af7fd) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5463,	// (0x000af7fd) cell_dialer2_keypad_pane_t1_copy1

0x741f,	// (0x000b17b9) ncimui_group_button_pane

0xa7a8,	// (0x000b4b42) main_sp_fs_calendar_pane_ParamLimits

0x8387,	// (0x000b2721) list_single_cmail_header_caption_pane_ParamLimits

0xaabe,	// (0x000b4e58) aid_recal_txt_sm_pane

0x94a2,	// (0x000b383c) mian_recal_day_pane

0xaaf8,	// (0x000b4e92) popup_sp_fs_cale_preview_window_ParamLimits

0xeabb,	// (0x000b8e55) list_recal_day_pane

0xabda,	// (0x000b4f74) list_single_recal_day_pane_ParamLimits

0xabda,	// (0x000b4f74) list_single_recal_day_pane

0xeae2,	// (0x000b8e7c) list_single_recal_day_pane_g1_ParamLimits

0xeae2,	// (0x000b8e7c) list_single_recal_day_pane_g1

0xabec,	// (0x000b4f86) list_single_recal_day_pane_g2_ParamLimits

0xabec,	// (0x000b4f86) list_single_recal_day_pane_g2

0xabf8,	// (0x000b4f92) list_single_recal_day_pane_g3_ParamLimits

0xabf8,	// (0x000b4f92) list_single_recal_day_pane_g3

0x87c7,	// (0x000b2b61) list_single_recal_day_pane_g4_ParamLimits

0x87c7,	// (0x000b2b61) list_single_recal_day_pane_g4

0xac04,	// (0x000b4f9e) list_single_recal_day_pane_g5_ParamLimits

0xac04,	// (0x000b4f9e) list_single_recal_day_pane_g5

0xac10,	// (0x000b4faa) list_single_recal_day_pane_g6_ParamLimits

0xac10,	// (0x000b4faa) list_single_recal_day_pane_g6

0x0004,

0xfe24,	// (0x000ba1be) list_single_recal_day_pane_g_ParamLimits

0xfe24,	// (0x000ba1be) list_single_recal_day_pane_g

0xac24,	// (0x000b4fbe) list_single_recal_day_pane_t1

0xac36,	// (0x000b4fd0) list_single_recal_day_pane_t2

0x0001,

0xfe2f,	// (0x000ba1c9) list_single_recal_day_pane_t

0x87df,	// (0x000b2b79) ncimui_query_button_pane_ParamLimits

0x87df,	// (0x000b2b79) ncimui_query_button_pane

0x87ef,	// (0x000b2b89) ncimui_query_button_pane_t1_ParamLimits

0x87ef,	// (0x000b2b89) ncimui_query_button_pane_t1

0xeaee,	// (0x000b8e88) ncimui_query_button_pane_t2_ParamLimits

0xeaee,	// (0x000b8e88) ncimui_query_button_pane_t2

0x0001,

0xfe34,	// (0x000ba1ce) ncimui_query_button_pane_t_ParamLimits

0xfe34,	// (0x000ba1ce) ncimui_query_button_pane_t

0x8802,	// (0x000b2b9c) query_button_pane_ParamLimits

0x8802,	// (0x000b2b9c) query_button_pane

0x94a2,	// (0x000b383c) bg_button_pane_cp0028

0xeb01,	// (0x000b8e9b) query_button_pane_t1

0x34cd,	// (0x000ad867) main_tport_pane_ParamLimits

0x8236,	// (0x000b25d0) bg_popup_window_pane_cp01_ParamLimits

0x8236,	// (0x000b25d0) bg_popup_window_pane_cp01

0x8251,	// (0x000b25eb) heading_pane_cp08_ParamLimits

0x8251,	// (0x000b25eb) heading_pane_cp08

0x8264,	// (0x000b25fe) heading_pane_cp07_ParamLimits

0x8264,	// (0x000b25fe) heading_pane_cp07

0x830b,	// (0x000b26a5) cell_tport_appsw_pane_g2

0x0002,

0xfd80,	// (0x000ba11a) cell_tport_appsw_pane_g

0x2a62,	// (0x000acdfc) input_candi_list_open_g1

0xaea3,	// (0x000b523d) list_cale_time_pane_g6_ParamLimits

0xaea3,	// (0x000b523d) list_cale_time_pane_g6

0x4296,	// (0x000ae630) aid_size_touch_calib_1_ParamLimits

0x4296,	// (0x000ae630) aid_size_touch_calib_1

0x42a8,	// (0x000ae642) aid_size_touch_calib_2_ParamLimits

0x42a8,	// (0x000ae642) aid_size_touch_calib_2

0x42c0,	// (0x000ae65a) aid_size_touch_calib_3_ParamLimits

0x42c0,	// (0x000ae65a) aid_size_touch_calib_3

0x42de,	// (0x000ae678) aid_size_touch_calib_4_ParamLimits

0x42de,	// (0x000ae678) aid_size_touch_calib_4

0x42f6,	// (0x000ae690) main_touch_calib_button_group_pane_ParamLimits

0x42f6,	// (0x000ae690) main_touch_calib_button_group_pane

0x430e,	// (0x000ae6a8) main_touch_calib_pane_g1_ParamLimits

0x4320,	// (0x000ae6ba) main_touch_calib_pane_g2_ParamLimits

0x4332,	// (0x000ae6cc) main_touch_calib_pane_g3_ParamLimits

0x4344,	// (0x000ae6de) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x000b9ad0) main_touch_calib_pane_g_ParamLimits

0x4356,	// (0x000ae6f0) main_touch_calib_pane_t1_ParamLimits

0x4370,	// (0x000ae70a) main_touch_calib_pane_t2_ParamLimits

0x438a,	// (0x000ae724) main_touch_calib_pane_t3_ParamLimits

0x439e,	// (0x000ae738) main_touch_calib_pane_t4_ParamLimits

0x43b2,	// (0x000ae74c) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x000b9ad9) main_touch_calib_pane_t_ParamLimits

0xd09c,	// (0x000b7436) list_single_fp_cale_pane_g3_ParamLimits

0xd09c,	// (0x000b7436) list_single_fp_cale_pane_g3

0x951a,	// (0x000b38b4) bg_button_pane_cp012_ParamLimits

0x951a,	// (0x000b38b4) bg_vkb2_func_pane_cp03_ParamLimits

0x6451,	// (0x000b07eb) cell_vitu2_function_top_pane_g1_ParamLimits

0x951a,	// (0x000b38b4) bg_vkb2_func_pane_cp04_ParamLimits

0x73aa,	// (0x000b1744) main_ncimui_button_group_pane_ParamLimits

0x73aa,	// (0x000b1744) main_ncimui_button_group_pane

0x740a,	// (0x000b17a4) main_ncimui_pane_t3_ParamLimits

0x740a,	// (0x000b17a4) main_ncimui_pane_t3

0xe8bf,	// (0x000b8c59) phacti_button_group_pane

0xea8a,	// (0x000b8e24) aid_size_list_single_double_ParamLimits

0x8749,	// (0x000b2ae3) popup_ezdial_listscroll_window_ParamLimits

0x8765,	// (0x000b2aff) popup_number_entry_window_cp01_ParamLimits

0x8815,	// (0x000b2baf) phacti_button_pane_ParamLimits

0x8815,	// (0x000b2baf) phacti_button_pane

0x94a2,	// (0x000b383c) bg_button_pane_cp14

0xeb0f,	// (0x000b8ea9) phacti_button_pane_t1

0x8826,	// (0x000b2bc0) main_touch_calib_button_pane_ParamLimits

0x8826,	// (0x000b2bc0) main_touch_calib_button_pane

0xa402,	// (0x000b479c) bg_button_pane_cp18_ParamLimits

0xa402,	// (0x000b479c) bg_button_pane_cp18

0xeb1d,	// (0x000b8eb7) main_touch_calib_button_pane_t1_ParamLimits

0xeb1d,	// (0x000b8eb7) main_touch_calib_button_pane_t1

0xeb33,	// (0x000b8ecd) main_touch_calib_button_pane_t2_ParamLimits

0xeb33,	// (0x000b8ecd) main_touch_calib_button_pane_t2

0x0001,

0xfe39,	// (0x000ba1d3) main_touch_calib_button_pane_t_ParamLimits

0xfe39,	// (0x000ba1d3) main_touch_calib_button_pane_t

0x94a2,	// (0x000b383c) cell_ncimui_button_pane

0x94a2,	// (0x000b383c) bg_button_pane_cp032

0xeb51,	// (0x000b8eeb) cell_ncimui_button_pane_t1

0x9e1b,	// (0x000b41b5) image3_infobar_pane_ParamLimits

0x9e1b,	// (0x000b41b5) image3_infobar_pane

0x782d,	// (0x000b1bc7) fs_bigclock_status_pane_ParamLimits

0x782d,	// (0x000b1bc7) fs_bigclock_status_pane

0x783a,	// (0x000b1bd4) main_fs_bigclock_clock_pane_ParamLimits

0x783a,	// (0x000b1bd4) main_fs_bigclock_clock_pane

0x7858,	// (0x000b1bf2) main_fs_bigclock_indi_pane_ParamLimits

0x7858,	// (0x000b1bf2) main_fs_bigclock_indi_pane

0x788a,	// (0x000b1c24) main_fs_bigclock_swipe_pane_ParamLimits

0x788a,	// (0x000b1c24) main_fs_bigclock_swipe_pane

0x94a2,	// (0x000b383c) main_fs_clock_dumped_data

0xe40c,	// (0x000b87a6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe40c,	// (0x000b87a6) list_single_fs_bigclock_indicator_pane_g1

0xe427,	// (0x000b87c1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe427,	// (0x000b87c1) list_single_fs_bigclock_indicator_pane_g2

0xe441,	// (0x000b87db) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe441,	// (0x000b87db) list_single_fs_bigclock_indicator_pane_g3

0xe45b,	// (0x000b87f5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe45b,	// (0x000b87f5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc5d,	// (0x000b9ff7) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc5d,	// (0x000b9ff7) list_single_fs_bigclock_indicator_pane_g

0xe486,	// (0x000b8820) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe486,	// (0x000b8820) list_single_fs_bigclock_indicator_pane_t1

0xe4ae,	// (0x000b8848) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4ae,	// (0x000b8848) list_single_fs_bigclock_indicator_pane_t2

0xe4d6,	// (0x000b8870) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4d6,	// (0x000b8870) list_single_fs_bigclock_indicator_pane_t3

0xe4fe,	// (0x000b8898) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4fe,	// (0x000b8898) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc68,	// (0x000ba002) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc68,	// (0x000ba002) list_single_fs_bigclock_indicator_pane_t

0xeb5f,	// (0x000b8ef9) image3_infobar_fav_pane_ParamLimits

0xeb5f,	// (0x000b8ef9) image3_infobar_fav_pane

0xeb6f,	// (0x000b8f09) image3_infobar_loc_pane_ParamLimits

0xeb6f,	// (0x000b8f09) image3_infobar_loc_pane

0xeb83,	// (0x000b8f1d) image3_infobar_time_pane_ParamLimits

0xeb83,	// (0x000b8f1d) image3_infobar_time_pane

0xcd11,	// (0x000b70ab) image3_infobar_time_pane_g1

0xeb93,	// (0x000b8f2d) image3_infobar_time_pane_t1

0xcd11,	// (0x000b70ab) image3_infobar_loc_pane_g1

0xeba1,	// (0x000b8f3b) image3_infobar_loc_pane_g2

0x0001,

0xfe3e,	// (0x000ba1d8) image3_infobar_loc_pane_g

0xeba9,	// (0x000b8f43) image3_infobar_loc_pane_t1

0xcd11,	// (0x000b70ab) image3_infobar_fav_pane_g1

0xebb7,	// (0x000b8f51) image3_infobar_fav_pane_g2

0x0001,

0xfe43,	// (0x000ba1dd) image3_infobar_fav_pane_g

0xebbf,	// (0x000b8f59) fs_bigclock_status_battery_pane

0xebc8,	// (0x000b8f62) fs_bigclock_status_signal_pane

0xebd1,	// (0x000b8f6b) fs_bigclock_status_title_pane

0xebda,	// (0x000b8f74) fs_bigclock_status_signal_pane_g1

0xebe3,	// (0x000b8f7d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe48,	// (0x000ba1e2) fs_bigclock_status_signal_pane_g

0xebeb,	// (0x000b8f85) fs_bigclock_status_battery_pane_g1

0xebf4,	// (0x000b8f8e) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe4d,	// (0x000ba1e7) fs_bigclock_status_battery_pane_g

0xebfc,	// (0x000b8f96) fs_bigclock_status_title_pane_t1

0x883b,	// (0x000b2bd5) main_fs_bigclock_clock_pane_g1

0x883b,	// (0x000b2bd5) main_fs_bigclock_clock_pane_g2

0x884c,	// (0x000b2be6) main_fs_bigclock_clock_pane_g3

0x884c,	// (0x000b2be6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe52,	// (0x000ba1ec) main_fs_bigclock_clock_pane_g

0x885f,	// (0x000b2bf9) main_fs_bigclock_clock_pane_t1

0x8875,	// (0x000b2c0f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5b,	// (0x000ba1f5) main_fs_bigclock_clock_pane_t

0xec0a,	// (0x000b8fa4) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec0a,	// (0x000b8fa4) list_single_fs_bigclock_indicator_pane

0xec1b,	// (0x000b8fb5) list_single_fs_bigclock_pane_ParamLimits

0xec1b,	// (0x000b8fb5) list_single_fs_bigclock_pane

0xec41,	// (0x000b8fdb) main_fs_bigclock_indicator_pane_t1

0xec50,	// (0x000b8fea) list_single_fs_bigclock_pane_g1

0xec58,	// (0x000b8ff2) list_single_fs_bigclock_pane_t1

0xcd11,	// (0x000b70ab) main_fs_bigclock_swipe_pane_g1

0xec9b,	// (0x000b9035) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe6c,	// (0x000ba206) main_fs_bigclock_swipe_pane_g

0xeca3,	// (0x000b903d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeca3,	// (0x000b903d) main_fs_bigclock_swipe_pane_t1

0x2372,	// (0x000ac70c) call_type_pane_ParamLimits

0x94a2,	// (0x000b383c) main_btmg_pane

0xab43,	// (0x000b4edd) list_single_cale_mrui_row_pane_g2_ParamLimits

0xab43,	// (0x000b4edd) list_single_cale_mrui_row_pane_g2

0x0002,

0xfddf,	// (0x000ba179) list_single_cale_mrui_row_pane_g_ParamLimits

0xfddf,	// (0x000ba179) list_single_cale_mrui_row_pane_g

0xabc9,	// (0x000b4f63) list_recal_vselct_arw_lo_pane

0xeada,	// (0x000b8e74) list_recal_vselct_arw_up_pane

0xabd1,	// (0x000b4f6b) list_recal_vselct_pane

0x88cf,	// (0x000b2c69) btmg_button_pane

0x88d9,	// (0x000b2c73) main_btmg_pane_g1

0x94a2,	// (0x000b383c) bg_button_pane_cp044

0xecc0,	// (0x000b905a) btmg_button_pane_t1

0xc8f5,	// (0x000b6c8f) aid_listscroll_gen

0xa7a8,	// (0x000b4b42) main_cntbar_detail_pane

0xe80b,	// (0x000b8ba5) list_cmail_folder_pane

0xb809,	// (0x000b5ba3) sp_fs_scroll_pane_cp03_ParamLimits

0x88e3,	// (0x000b2c7d) list_single_fs_dyc_pane_cp01_ParamLimits

0x88e3,	// (0x000b2c7d) list_single_fs_dyc_pane_cp01

0xecce,	// (0x000b9068) aid_size_cmail_indent

0xac48,	// (0x000b4fe2) list_single_dyc_row_pane_cp01

0x892a,	// (0x000b2cc4) cntbar_detail_list_pane_ParamLimits

0x892a,	// (0x000b2cc4) cntbar_detail_list_pane

0x8976,	// (0x000b2d10) main_cntbar_detail_cont_pane_ParamLimits

0x8976,	// (0x000b2d10) main_cntbar_detail_cont_pane

0xb809,	// (0x000b5ba3) scroll_pane_cp032_ParamLimits

0xb809,	// (0x000b5ba3) scroll_pane_cp032

0x898a,	// (0x000b2d24) cntbar_detail_list_event_pane_ParamLimits

0x898a,	// (0x000b2d24) cntbar_detail_list_event_pane

0x893a,	// (0x000b2cd4) cntbar_detail_list_shct_pane

0xad2e,	// (0x000b50c8) aid_list_gen

0xecd7,	// (0x000b9071) aid_scroll

0xece0,	// (0x000b907a) aid_size_touch_scroll_bar

0x6b40,	// (0x000b0eda) aid_list_double

0x899a,	// (0x000b2d34) aid_list_single

0x6b40,	// (0x000b0eda) aid_list_single_lg

0x89a3,	// (0x000b2d3d) aid_list_z_g_a_sm

0x89ab,	// (0x000b2d45) aid_list_z_g_d

0x89b3,	// (0x000b2d4d) aid_txt_z_prm

0x89c1,	// (0x000b2d5b) aid_txt_z_prm_cp01

0x89cf,	// (0x000b2d69) aid_txt_z_sec

0x89dd,	// (0x000b2d77) main_cntbar_detail_cont_pane_g1_ParamLimits

0x89dd,	// (0x000b2d77) main_cntbar_detail_cont_pane_g1

0x89f1,	// (0x000b2d8b) main_cntbar_detail_cont_pane_g2_ParamLimits

0x89f1,	// (0x000b2d8b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe71,	// (0x000ba20b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe71,	// (0x000ba20b) main_cntbar_detail_cont_pane_g

0xece9,	// (0x000b9083) main_cntbar_detail_cont_pane_t1

0xecf7,	// (0x000b9091) main_cntbar_detail_cont_pane_t2

0xed05,	// (0x000b909f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe76,	// (0x000ba210) main_cntbar_detail_cont_pane_t

0x8a01,	// (0x000b2d9b) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8a01,	// (0x000b2d9b) cell_cntbar_detail_list_shct_pane

0xed13,	// (0x000b90ad) cntbar_detail_list_shct_pane_g1

0xed1c,	// (0x000b90b6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe7d,	// (0x000ba217) cntbar_detail_list_shct_pane_g

0x8a15,	// (0x000b2daf) cntbar_detail_list_event_pane_g1_ParamLimits

0x8a15,	// (0x000b2daf) cntbar_detail_list_event_pane_g1

0x8a21,	// (0x000b2dbb) cntbar_detail_list_event_pane_g2_ParamLimits

0x8a21,	// (0x000b2dbb) cntbar_detail_list_event_pane_g2

0x0005,

0xfe82,	// (0x000ba21c) cntbar_detail_list_event_pane_g_ParamLimits

0xfe82,	// (0x000ba21c) cntbar_detail_list_event_pane_g

0x8a8d,	// (0x000b2e27) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a8d,	// (0x000b2e27) cntbar_detail_list_event_pane_t1

0x8aa2,	// (0x000b2e3c) cntbar_detail_list_event_pane_t2_ParamLimits

0x8aa2,	// (0x000b2e3c) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8f,	// (0x000ba229) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8f,	// (0x000ba229) cntbar_detail_list_event_pane_t

0xcd11,	// (0x000b70ab) cell_cntbar_detail_list_shct_pane_g1

0xb4a5,	// (0x000b583f) navi_pane_mv_g3

0xa7a8,	// (0x000b4b42) main_cntbar_detail_pane_ParamLimits

0x94a2,	// (0x000b383c) main_notif_wgt_pane

0x9c07,	// (0x000b3fa1) aid_tch_main_mp4_pane_g4

0x9e13,	// (0x000b41ad) popup_slider_window_cp02

0xabbf,	// (0x000b4f59) list_recal_day_event_pane

0x88f8,	// (0x000b2c92) cntbar_detail_btn_pane_ParamLimits

0x88f8,	// (0x000b2c92) cntbar_detail_btn_pane

0x8911,	// (0x000b2cab) cntbar_detail_btn_pane_cp01_ParamLimits

0x8911,	// (0x000b2cab) cntbar_detail_btn_pane_cp01

0x893a,	// (0x000b2cd4) cntbar_detail_list_shct_pane_ParamLimits

0x894a,	// (0x000b2ce4) cntbar_detail_pane_g1_ParamLimits

0x894a,	// (0x000b2ce4) cntbar_detail_pane_g1

0x895a,	// (0x000b2cf4) cntbar_detail_pane_t1_ParamLimits

0x895a,	// (0x000b2cf4) cntbar_detail_pane_t1

0x8a2d,	// (0x000b2dc7) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a2d,	// (0x000b2dc7) cntbar_detail_list_event_pane_g3

0x8a45,	// (0x000b2ddf) cntbar_detail_list_event_pane_g4_ParamLimits

0x8a45,	// (0x000b2ddf) cntbar_detail_list_event_pane_g4

0x8a5d,	// (0x000b2df7) cntbar_detail_list_event_pane_g5_ParamLimits

0x8a5d,	// (0x000b2df7) cntbar_detail_list_event_pane_g5

0x8a75,	// (0x000b2e0f) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a75,	// (0x000b2e0f) cntbar_detail_list_event_pane_g6

0x8ab7,	// (0x000b2e51) cntbar_detail_list_event_pane_t3_ParamLimits

0x8ab7,	// (0x000b2e51) cntbar_detail_list_event_pane_t3

0x8ac9,	// (0x000b2e63) popup_notif_wgt_window_ParamLimits

0x8ac9,	// (0x000b2e63) popup_notif_wgt_window

0x8ae2,	// (0x000b2e7c) popup_submenu_window_cp01_ParamLimits

0x8ae2,	// (0x000b2e7c) popup_submenu_window_cp01

0xa5d0,	// (0x000b496a) bg_popup_window_pane_cp10

0xed25,	// (0x000b90bf) listscroll_notif_wgt_pane

0xed37,	// (0x000b90d1) list_notif_wgt_window

0xed40,	// (0x000b90da) scroll_pane_cp033

0x8af8,	// (0x000b2e92) list_notif_wgt_row_pane_ParamLimits

0x8af8,	// (0x000b2e92) list_notif_wgt_row_pane

0xed49,	// (0x000b90e3) aid_size_list_notif_wgt_del

0xed56,	// (0x000b90f0) list_notif_wgt_row_pane_g1

0xed62,	// (0x000b90fc) list_notif_wgt_row_pane_g2

0xed71,	// (0x000b910b) list_notif_wgt_row_pane_g3

0x0002,

0xfe96,	// (0x000ba230) list_notif_wgt_row_pane_g

0xed7e,	// (0x000b9118) list_notif_wgt_row_pane_t1

0xed94,	// (0x000b912e) list_notif_wgt_row_pane_t2

0xeda6,	// (0x000b9140) list_notif_wgt_row_pane_t3

0x0002,

0xfe9d,	// (0x000ba237) list_notif_wgt_row_pane_t

0xd938,	// (0x000b7cd2) list_recal_day_event_pane_g1

0xedb8,	// (0x000b9152) list_recal_day_event_pane_t1

0x94a2,	// (0x000b383c) bg_button_pane_cp045

0x8b08,	// (0x000b2ea2) cntbar_detail_btn_pane_t1

0xc909,	// (0x000b6ca3) main_callh_pane_ParamLimits

0xc909,	// (0x000b6ca3) main_callh_pane

0x94a2,	// (0x000b383c) main_coverflow0_pane

0x94a2,	// (0x000b383c) main_wgtman_pane

0x78a2,	// (0x000b1c3c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x78a2,	// (0x000b1c3c) main_fs_bigclock_unlock_btn_pane

0x8303,	// (0x000b269d) bg_button_pane_cp16

0x8313,	// (0x000b26ad) cell_tport_appsw_pane_g3

0x8b16,	// (0x000b2eb0) cf0_flow_pane_ParamLimits

0x8b16,	// (0x000b2eb0) cf0_flow_pane

0xedc7,	// (0x000b9161) listscroll_cf0_pane

0xedd2,	// (0x000b916c) main_cf0_pane_g1

0x8b2b,	// (0x000b2ec5) main_cf0_pane_t1_ParamLimits

0x8b2b,	// (0x000b2ec5) main_cf0_pane_t1

0x8b42,	// (0x000b2edc) main_cf0_pane_t2_ParamLimits

0x8b42,	// (0x000b2edc) main_cf0_pane_t2

0x0001,

0xfea9,	// (0x000ba243) main_cf0_pane_t_ParamLimits

0xfea9,	// (0x000ba243) main_cf0_pane_t

0xede4,	// (0x000b917e) scroll_pane_cp11

0x8b59,	// (0x000b2ef3) cf0_flow_pane_g1

0x8b61,	// (0x000b2efb) cf0_flow_pane_g2

0x0001,

0xfeae,	// (0x000ba248) cf0_flow_pane_g

0x8b69,	// (0x000b2f03) cf0_flow_pane_t1

0x94a2,	// (0x000b383c) main_call6_pane

0x94a2,	// (0x000b383c) main_calllock_pane

0x8b77,	// (0x000b2f11) call6_btn_grp_pane_ParamLimits

0x8b77,	// (0x000b2f11) call6_btn_grp_pane

0x8b91,	// (0x000b2f2b) call6_pane_g1_ParamLimits

0x8b91,	// (0x000b2f2b) call6_pane_g1

0x8ba7,	// (0x000b2f41) popup_call6_1st_window_ParamLimits

0x8ba7,	// (0x000b2f41) popup_call6_1st_window

0x8bb8,	// (0x000b2f52) popup_call6_2nd_window_ParamLimits

0x8bb8,	// (0x000b2f52) popup_call6_2nd_window

0x8bc9,	// (0x000b2f63) cell_call6_btn_pane_ParamLimits

0x8bc9,	// (0x000b2f63) cell_call6_btn_pane

0xa5d0,	// (0x000b496a) bg_popup_call2_in_pane_cp03

0xedef,	// (0x000b9189) popup_call6_1st_window_g1

0xedf7,	// (0x000b9191) popup_call6_1st_window_g2

0xedff,	// (0x000b9199) popup_call6_1st_window_g3

0x0002,

0xfeb3,	// (0x000ba24d) popup_call6_1st_window_g

0xee07,	// (0x000b91a1) popup_call6_1st_window_t1

0xee16,	// (0x000b91b0) popup_call6_1st_window_t2

0xee24,	// (0x000b91be) popup_call6_1st_window_t3

0x0002,

0xfeba,	// (0x000ba254) popup_call6_1st_window_t

0xa5d0,	// (0x000b496a) bg_popup_call2_in_pane_cp04

0xedef,	// (0x000b9189) popup_call6_2nd_window_g1

0xedf7,	// (0x000b9191) popup_call6_2nd_window_g2

0xedff,	// (0x000b9199) popup_call6_2nd_window_g3

0x0002,

0xfeb3,	// (0x000ba24d) popup_call6_2nd_window_g

0xee07,	// (0x000b91a1) popup_call6_2nd_window_t1

0x9528,	// (0x000b38c2) bg_button_pane_cp15

0xa09b,	// (0x000b4435) cell_call6_btn_pane_g1

0xa0a4,	// (0x000b443e) cell_call6_btn_pane_t1

0x8bdc,	// (0x000b2f76) listscroll_wgtman_pane_ParamLimits

0x8bdc,	// (0x000b2f76) listscroll_wgtman_pane

0x8bfd,	// (0x000b2f97) wgtman_btn_pane_ParamLimits

0x8bfd,	// (0x000b2f97) wgtman_btn_pane

0xb2ac,	// (0x000b5646) aid_scroll_copy1

0xee32,	// (0x000b91cc) list_wgtman_pane

0x8c40,	// (0x000b2fda) wgtman_btn_pane_g1_ParamLimits

0x8c40,	// (0x000b2fda) wgtman_btn_pane_g1

0x8c6c,	// (0x000b3006) wgtman_btn_pane_t1_ParamLimits

0x8c6c,	// (0x000b3006) wgtman_btn_pane_t1

0xee3c,	// (0x000b91d6) wgtman_btn_pane_t2_ParamLimits

0xee3c,	// (0x000b91d6) wgtman_btn_pane_t2

0x0001,

0xfec1,	// (0x000ba25b) wgtman_btn_pane_t_ParamLimits

0xfec1,	// (0x000ba25b) wgtman_btn_pane_t

0x8ca9,	// (0x000b3043) listrow_wgtman_pane_ParamLimits

0x8ca9,	// (0x000b3043) listrow_wgtman_pane

0x8cbb,	// (0x000b3055) listrow_wgtman_pane_g1

0x8cc8,	// (0x000b3062) listrow_wgtman_pane_g2

0x0001,

0xfec6,	// (0x000ba260) listrow_wgtman_pane_g

0x8ce6,	// (0x000b3080) listrow_wgtman_pane_t1

0x8cfe,	// (0x000b3098) listrow_wgtman_pane_t2

0x0001,

0xfecb,	// (0x000ba265) listrow_wgtman_pane_t

0x8d24,	// (0x000b30be) wait_bar_pane_cp09

0xee53,	// (0x000b91ed) main_calllock_btn_pane

0xee5d,	// (0x000b91f7) main_calllock_pane_g1

0x94a2,	// (0x000b383c) bg_button_pane_cp17

0xee69,	// (0x000b9203) main_calllock_btn_pane_g1

0xee72,	// (0x000b920c) main_calllock_btn_pane_t1

0x94a2,	// (0x000b383c) main_dialer3_pane

0x94a2,	// (0x000b383c) main_fmrd2_pane

0xcd11,	// (0x000b70ab) main_fs_bigclock_unlock_btn_pane_g1

0x8d3e,	// (0x000b30d8) main_fs_bigclock_unlock_btn_pane_t1

0x8d4c,	// (0x000b30e6) area_fmrd2_info_pane_ParamLimits

0x8d4c,	// (0x000b30e6) area_fmrd2_info_pane

0x8d5d,	// (0x000b30f7) area_fmrd2_visual_pane_ParamLimits

0x8d5d,	// (0x000b30f7) area_fmrd2_visual_pane

0x8d6b,	// (0x000b3105) fmrd2_indi_pane_ParamLimits

0x8d6b,	// (0x000b3105) fmrd2_indi_pane

0x8d78,	// (0x000b3112) area_fmrd2_visual_pane_g1

0x8d80,	// (0x000b311a) area_fmrd2_visual_pane_t1

0x8d90,	// (0x000b312a) area_fmrd2_visual_pane_t2

0x8da0,	// (0x000b313a) area_fmrd2_visual_pane_t3

0x0002,

0xfed5,	// (0x000ba26f) area_fmrd2_visual_pane_t

0x8db0,	// (0x000b314a) area_fmrd2_info_pane_g1

0x8db8,	// (0x000b3152) area_fmrd2_info_pane_t1

0x8dc8,	// (0x000b3162) area_fmrd2_info_pane_t2

0x8dd8,	// (0x000b3172) area_fmrd2_info_pane_t3

0x8de8,	// (0x000b3182) area_fmrd2_info_pane_t4

0x0003,

0xfedc,	// (0x000ba276) area_fmrd2_info_pane_t

0x8df6,	// (0x000b3190) fmrd2_indi_pane_t1

0x8e06,	// (0x000b31a0) fmrd2_indi_pane_t2

0x8e16,	// (0x000b31b0) fmrd2_indi_pane_t3

0x0002,

0xfee5,	// (0x000ba27f) fmrd2_indi_pane_t

0xe46a,	// (0x000b8804) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe46a,	// (0x000b8804) list_single_fs_bigclock_indicator_pane_g5

0xe51b,	// (0x000b88b5) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe51b,	// (0x000b88b5) list_single_fs_bigclock_indicator_pane_t5

0x849e,	// (0x000b2838) aid_cell_bcale_month_pane_ParamLimits

0x849e,	// (0x000b2838) aid_cell_bcale_month_pane

0x84bc,	// (0x000b2856) bcale_month_pane_ParamLimits

0x84bc,	// (0x000b2856) bcale_month_pane

0x84e0,	// (0x000b287a) bcale_preview_pane_ParamLimits

0x84e0,	// (0x000b287a) bcale_preview_pane

0xec58,	// (0x000b8ff2) list_single_fs_bigclock_pane_t1_ParamLimits

0xec77,	// (0x000b9011) list_single_fs_bigclock_pane_t2_ParamLimits

0xec77,	// (0x000b9011) list_single_fs_bigclock_pane_t2

0x0001,

0xfe67,	// (0x000ba201) list_single_fs_bigclock_pane_t_ParamLimits

0xfe67,	// (0x000ba201) list_single_fs_bigclock_pane_t

0x8d36,	// (0x000b30d0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfed0,	// (0x000ba26a) main_fs_bigclock_unlock_btn_pane_g

0x8e26,	// (0x000b31c0) aid_dia3_key_size_ParamLimits

0x8e26,	// (0x000b31c0) aid_dia3_key_size

0x8e35,	// (0x000b31cf) aid_dia3_listrow_size_ParamLimits

0x8e35,	// (0x000b31cf) aid_dia3_listrow_size

0x8e4a,	// (0x000b31e4) dia3_keypad_fun_pane_ParamLimits

0x8e4a,	// (0x000b31e4) dia3_keypad_fun_pane

0x8e66,	// (0x000b3200) dia3_keypad_num_pane_ParamLimits

0x8e66,	// (0x000b3200) dia3_keypad_num_pane

0x8e81,	// (0x000b321b) dia3_listscroll_pane_ParamLimits

0x8e81,	// (0x000b321b) dia3_listscroll_pane

0x8e94,	// (0x000b322e) dia3_numentry_pane_ParamLimits

0x8e94,	// (0x000b322e) dia3_numentry_pane

0xee81,	// (0x000b921b) dia3_list_pane

0xee8c,	// (0x000b9226) scroll_pane_cp12

0x94a2,	// (0x000b383c) bg_dia3_numentry_pane

0x8ea8,	// (0x000b3242) dia3_numentry_pane_t1

0x8eb7,	// (0x000b3251) cell_dia3_key_num_pane

0x8ebf,	// (0x000b3259) cell_dia3_key0_fun_pane_ParamLimits

0x8ebf,	// (0x000b3259) cell_dia3_key0_fun_pane

0x8ed3,	// (0x000b326d) cell_dia3_key1_fun_pane_ParamLimits

0x8ed3,	// (0x000b326d) cell_dia3_key1_fun_pane

0x8eeb,	// (0x000b3285) dia3_listrow_pane

0xe1bd,	// (0x000b8557) bg_dia3_numentry_pane_g1

0x94a2,	// (0x000b383c) bg_button_pane_cp21

0xee97,	// (0x000b9231) cell_dia3_key_num_pane_t1

0xeea5,	// (0x000b923f) cell_dia3_key_num_pane_t2

0xeeb4,	// (0x000b924e) cell_dia3_key_num_pane_t3

0xeec3,	// (0x000b925d) cell_dia3_key_num_pane_t4

0x0003,

0xfeec,	// (0x000ba286) cell_dia3_key_num_pane_t

0x94a2,	// (0x000b383c) bg_button_pane_cp19

0x8efd,	// (0x000b3297) cell_dia3_key0_fun_pane_g1

0x94a2,	// (0x000b383c) bg_button_pane_cp20

0x8f05,	// (0x000b329f) cell_dia3_key1_fun_pane_g1

0x8f0d,	// (0x000b32a7) area_left_week_number_pane

0x8f19,	// (0x000b32b3) area_top_day_name_pane

0x8f2c,	// (0x000b32c6) frame_month_view_pane

0xeed2,	// (0x000b926c) grid_month_view_pane

0x8f3f,	// (0x000b32d9) cell_top_day_name_pane_ParamLimits

0x8f3f,	// (0x000b32d9) cell_top_day_name_pane

0x8f6c,	// (0x000b3306) cell_area_left_week_number_pane_ParamLimits

0x8f6c,	// (0x000b3306) cell_area_left_week_number_pane

0x8f80,	// (0x000b331a) cell_month_view_pane_ParamLimits

0x8f80,	// (0x000b331a) cell_month_view_pane

0xeee0,	// (0x000b927a) frm_month_g1

0x8fad,	// (0x000b3347) frm_month_g2

0x8fc0,	// (0x000b335a) frm_month_g3

0x8fd3,	// (0x000b336d) frm_month_g4

0x8fe6,	// (0x000b3380) frm_month_g5

0x8ff9,	// (0x000b3393) frm_month_g6

0x900c,	// (0x000b33a6) frm_month_g7

0xeeed,	// (0x000b9287) frm_month_g8

0x901f,	// (0x000b33b9) frm_month_g9

0x902f,	// (0x000b33c9) frm_month_g10

0x903f,	// (0x000b33d9) frm_month_g11

0x904f,	// (0x000b33e9) frm_month_g12

0x9061,	// (0x000b33fb) frm_month_g13

0x9073,	// (0x000b340d) frm_month_g14

0x9087,	// (0x000b3421) frm_month_g15

0x909b,	// (0x000b3435) frm_month_g16

0x000f,

0xfef5,	// (0x000ba28f) frm_month_g

0xeefa,	// (0x000b9294) cell_top_day_name_pane_t1

0x90af,	// (0x000b3449) cell_area_left_week_number_pane_g1

0x90bb,	// (0x000b3455) cell_area_left_week_number_pane_t1

0xcf7c,	// (0x000b7316) cell_month_view_pane_g1

0x90ce,	// (0x000b3468) cell_month_view_pane_t1

0x94a2,	// (0x000b383c) main_fps_pane

0xe738,	// (0x000b8ad2) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe738,	// (0x000b8ad2) cmail_ddmenu_btn02_pane_cp1

0xe754,	// (0x000b8aee) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe754,	// (0x000b8aee) cmail_ddmenu_btn02_pane_cp2

0x8797,	// (0x000b2b31) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8797,	// (0x000b2b31) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe1a,	// (0x000ba1b4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe1a,	// (0x000ba1b4) cmail_ddmenu_btn02_pane_g

0x87b5,	// (0x000b2b4f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87b5,	// (0x000b2b4f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1f,	// (0x000ba1b9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1f,	// (0x000ba1b9) cmail_ddmenu_btn02_pane_t

0x90e1,	// (0x000b347b) fps_text_pane_ParamLimits

0x90e1,	// (0x000b347b) fps_text_pane

0x90f8,	// (0x000b3492) main_fps_pane_g1_ParamLimits

0x90f8,	// (0x000b3492) main_fps_pane_g1

0x9112,	// (0x000b34ac) wait_bar_pane_cp010_ParamLimits

0x9112,	// (0x000b34ac) wait_bar_pane_cp010

0x9123,	// (0x000b34bd) fps_text_pane_t1_ParamLimits

0x9123,	// (0x000b34bd) fps_text_pane_t1

0xdb1b,	// (0x000b7eb5) cam4_image_uncrop_pane_g1

0xdb24,	// (0x000b7ebe) cam4_image_uncrop_pane_g2

0x597e,	// (0x000afd18) cam4_image_uncrop_pane_g3

0x5987,	// (0x000afd21) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x000b9c71) cam4_image_uncrop_pane_g

0x8eeb,	// (0x000b3285) dia3_listrow_pane_ParamLimits

0x94a2,	// (0x000b383c) main_phob2_pane

0x82d4,	// (0x000b266e) cell_tport_appsw_pane_cp02_ParamLimits

0x82d4,	// (0x000b266e) cell_tport_appsw_pane_cp02

0x82e8,	// (0x000b2682) cell_tport_appsw_pane_cp03_ParamLimits

0x82e8,	// (0x000b2682) cell_tport_appsw_pane_cp03

0x94a2,	// (0x000b383c) phob2_contact_card_pane

0x94a2,	// (0x000b383c) phob2_listscroll_pane

0xef0d,	// (0x000b92a7) phob2_list_pane

0xef15,	// (0x000b92af) scroll_pane_cp034

0x913b,	// (0x000b34d5) phob2_cc_data_pane_ParamLimits

0x913b,	// (0x000b34d5) phob2_cc_data_pane

0x915a,	// (0x000b34f4) phob2_cc_listscroll_pane_ParamLimits

0x915a,	// (0x000b34f4) phob2_cc_listscroll_pane

0x8ca9,	// (0x000b3043) list_double_large_graphic_phob2_pane_ParamLimits

0x8ca9,	// (0x000b3043) list_double_large_graphic_phob2_pane

0x9178,	// (0x000b3512) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9178,	// (0x000b3512) list_double_large_graphic_phob2_pane_g1

0x918e,	// (0x000b3528) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x918e,	// (0x000b3528) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff16,	// (0x000ba2b0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff16,	// (0x000ba2b0) list_double_large_graphic_phob2_pane_g

0x919a,	// (0x000b3534) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x919a,	// (0x000b3534) list_double_large_graphic_phob2_pane_t1

0x91af,	// (0x000b3549) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x91af,	// (0x000b3549) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff1b,	// (0x000ba2b5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff1b,	// (0x000ba2b5) list_double_large_graphic_phob2_pane_t

0x94a2,	// (0x000b383c) list_highlight_pane_cp024

0x91c1,	// (0x000b355b) phob2_cc_button_pane

0x91c9,	// (0x000b3563) phob2_cc_data_pane_g1_ParamLimits

0x91c9,	// (0x000b3563) phob2_cc_data_pane_g1

0x91de,	// (0x000b3578) phob2_cc_data_pane_g2_ParamLimits

0x91de,	// (0x000b3578) phob2_cc_data_pane_g2

0x0001,

0xff20,	// (0x000ba2ba) phob2_cc_data_pane_g_ParamLimits

0xff20,	// (0x000ba2ba) phob2_cc_data_pane_g

0x91ee,	// (0x000b3588) phob2_cc_data_pane_t1_ParamLimits

0x91ee,	// (0x000b3588) phob2_cc_data_pane_t1

0x9206,	// (0x000b35a0) phob2_cc_data_pane_t2_ParamLimits

0x9206,	// (0x000b35a0) phob2_cc_data_pane_t2

0x921e,	// (0x000b35b8) phob2_cc_data_pane_t3_ParamLimits

0x921e,	// (0x000b35b8) phob2_cc_data_pane_t3

0x0002,

0xff25,	// (0x000ba2bf) phob2_cc_data_pane_t_ParamLimits

0xff25,	// (0x000ba2bf) phob2_cc_data_pane_t

0xef1d,	// (0x000b92b7) phob2_cc_list_pane_ParamLimits

0xef1d,	// (0x000b92b7) phob2_cc_list_pane

0xdb2d,	// (0x000b7ec7) scroll_pane_cp035_ParamLimits

0xdb2d,	// (0x000b7ec7) scroll_pane_cp035

0xa7a8,	// (0x000b4b42) bg_button_pane_cp033

0xef29,	// (0x000b92c3) phob2_cc_button_pane_g1

0xef35,	// (0x000b92cf) phob2_cc_button_pane_t1

0xef4a,	// (0x000b92e4) phob2_cc_button_pane_t2

0x0001,

0xff2c,	// (0x000ba2c6) phob2_cc_button_pane_t

0x9236,	// (0x000b35d0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9236,	// (0x000b35d0) list_double_large_graphic_phob2_cc_pane

0x9266,	// (0x000b3600) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9266,	// (0x000b3600) list_double_large_graphic_phob2_cc_pane_g1

0x9272,	// (0x000b360c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9272,	// (0x000b360c) list_double_large_graphic_phob2_cc_pane_g2

0x927e,	// (0x000b3618) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x927e,	// (0x000b3618) list_double_large_graphic_phob2_cc_pane_g3

0x928a,	// (0x000b3624) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x928a,	// (0x000b3624) list_double_large_graphic_phob2_cc_pane_g4

0x9296,	// (0x000b3630) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9296,	// (0x000b3630) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff31,	// (0x000ba2cb) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff31,	// (0x000ba2cb) list_double_large_graphic_phob2_cc_pane_g

0x92a2,	// (0x000b363c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x92a2,	// (0x000b363c) list_double_large_graphic_phob2_cc_pane_t1

0x92cb,	// (0x000b3665) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x92cb,	// (0x000b3665) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff3c,	// (0x000ba2d6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff3c,	// (0x000ba2d6) list_double_large_graphic_phob2_cc_pane_t

0xef5c,	// (0x000b92f6) list_highlight_pane_cp025_ParamLimits

0xef5c,	// (0x000b92f6) list_highlight_pane_cp025

0xa7a8,	// (0x000b4b42) bg_button_pane_cp033_ParamLimits

0xef29,	// (0x000b92c3) phob2_cc_button_pane_g1_ParamLimits

0xef35,	// (0x000b92cf) phob2_cc_button_pane_t1_ParamLimits

0xef4a,	// (0x000b92e4) phob2_cc_button_pane_t2_ParamLimits

0xff2c,	// (0x000ba2c6) phob2_cc_button_pane_t_ParamLimits

0x0319,	// (0x000aa6b3) popup_wgtman_window

0xd814,	// (0x000b7bae) scroll_pane_cp038

0x8c22,	// (0x000b2fbc) wgtman_btn_pane_cp_01_ParamLimits

0x8c22,	// (0x000b2fbc) wgtman_btn_pane_cp_01

0xef6a,	// (0x000b9304) wgtman_content_pane

0xef73,	// (0x000b930d) wgtman_heading_pane

0x94a2,	// (0x000b383c) bg_heading_pane_cp02

0xef7c,	// (0x000b9316) wgtman_heading_pane_g1

0xef84,	// (0x000b931e) wgtman_heading_pane_t1

0xef92,	// (0x000b932c) scroll_pane_cp036

0xef9a,	// (0x000b9334) wgtman_list_pane

0xefa2,	// (0x000b933c) wgtman_list_pane_t1_ParamLimits

0xefa2,	// (0x000b933c) wgtman_list_pane_t1

0x9e9f,	// (0x000b4239) cam4_grid_pane

0x6639,	// (0x000b09d3) bg_button_pane_cp015_ParamLimits

0x664b,	// (0x000b09e5) bg_button_pane_cp016_ParamLimits

0x665e,	// (0x000b09f8) bg_button_pane_cp017_ParamLimits

0x66b6,	// (0x000b0a50) popup_vitu2_query_window_g3_ParamLimits

0x66b6,	// (0x000b0a50) popup_vitu2_query_window_g3

0x6773,	// (0x000b0b0d) popup_vitu2_query_window_t6_ParamLimits

0x6773,	// (0x000b0b0d) popup_vitu2_query_window_t6

0x679e,	// (0x000b0b38) popup_vitu2_query_window_t7_ParamLimits

0x679e,	// (0x000b0b38) popup_vitu2_query_window_t7

0xdb1b,	// (0x000b7eb5) cam4_grid_pane_g1

0xdb24,	// (0x000b7ebe) cam4_grid_pane_g2

0xefbc,	// (0x000b9356) cam4_grid_pane_g3

0xefc5,	// (0x000b935f) cam4_grid_pane_g4

0x0003,

0xff41,	// (0x000ba2db) cam4_grid_pane_g

0x1254,	// (0x000ab5ee) aid_placing_vt_slider_lsc_ParamLimits

0x155f,	// (0x000ab8f9) vidtel_button_pane_ParamLimits

0x155f,	// (0x000ab8f9) vidtel_button_pane

0x94a2,	// (0x000b383c) bg_button_pane_cp034

0xefd0,	// (0x000b936a) vidtel_button_pane_g1

0xefd8,	// (0x000b9372) vidtel_button_pane_t1

0xd916,	// (0x000b7cb0) aid_size_vtel_slider_touch

0xdb2d,	// (0x000b7ec7) scroll_pane_cp039

0x7588,	// (0x000b1922) ncim_query_button_pane_cp01_ParamLimits

0x75a7,	// (0x000b1941) ncimui_query_pane_g1_ParamLimits

0xa7a8,	// (0x000b4b42) input_focus_pane_cp012_ParamLimits

0xe1fb,	// (0x000b8595) ncim_query_entry_pane_t1_ParamLimits

0xdb2d,	// (0x000b7ec7) scroll_pane_cp039_ParamLimits

0xb390,	// (0x000b572a) navi_pane_bcale_mc_g1

0xb398,	// (0x000b5732) navi_pane_bcale_mc_t1

0xe788,	// (0x000b8b22) main_sp_fs_email_pane_g1

0xe794,	// (0x000b8b2e) main_sp_fs_email_pane_g2

0x0001,

0xfcd2,	// (0x000ba06c) main_sp_fs_email_pane_g

0xe9dc,	// (0x000b8d76) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9dc,	// (0x000b8d76) list_single_cale_mrui_row_pane_g3

0x87d5,	// (0x000b2b6f) list_single_recal_day_pane_g5_event_pane

0xac1c,	// (0x000b4fb6) list_single_recal_day_pane_g7

0xefee,	// (0x000b9388) list_recal_day_event_pane_cp01

0xeff7,	// (0x000b9391) list_recal_vselct_arw_lo_pane_cp01

0xefff,	// (0x000b9399) list_recal_vselct_arw_up_pane_cp01

0xf007,	// (0x000b93a1) list_recal_vselct_pane_cp01

0xd938,	// (0x000b7cd2) list_recal_day_event_pane_cp01_g1

0xac51,	// (0x000b4feb) list_recal_day_event_pane_cp01_t1

0xac24,	// (0x000b4fbe) list_single_recal_day_pane_t1_ParamLimits

0xac36,	// (0x000b4fd0) list_single_recal_day_pane_t2_ParamLimits

0xfe2f,	// (0x000ba1c9) list_single_recal_day_pane_t_ParamLimits

0xa33d,	// (0x000b46d7) bg_notes_pane_ParamLimits

0xa3e0,	// (0x000b477a) list_notes_pane_ParamLimits

0x065f,	// (0x000aa9f9) scroll_pane_cp06_ParamLimits

0xa402,	// (0x000b479c) main_notes_pane_ParamLimits

0xa7a8,	// (0x000b4b42) main_welc_pane

0x930b,	// (0x000b36a5) main_welc_body_pane_ParamLimits

0x930b,	// (0x000b36a5) main_welc_body_pane

0x9329,	// (0x000b36c3) main_welc_opti_pane_ParamLimits

0x9329,	// (0x000b36c3) main_welc_opti_pane

0x937d,	// (0x000b3717) main_welc_pane_t1_ParamLimits

0x937d,	// (0x000b3717) main_welc_pane_t1

0x93f8,	// (0x000b3792) main_welc_body_row_pane_ParamLimits

0x93f8,	// (0x000b3792) main_welc_body_row_pane

0xf011,	// (0x000b93ab) main_welc_opti_row_pane_ParamLimits

0xf011,	// (0x000b93ab) main_welc_opti_row_pane

0xf01f,	// (0x000b93b9) main_welc_opti_row_pane_g1

0x940c,	// (0x000b37a6) main_welc_opti_row_pane_t1

0xf027,	// (0x000b93c1) main_welc_body_row_pane_t1

0xed2f,	// (0x000b90c9) popup_notif_wgt_heading_pane

0xed49,	// (0x000b90e3) aid_size_list_notif_wgt_del_ParamLimits

0xed56,	// (0x000b90f0) list_notif_wgt_row_pane_g1_ParamLimits

0xed62,	// (0x000b90fc) list_notif_wgt_row_pane_g2_ParamLimits

0xed71,	// (0x000b910b) list_notif_wgt_row_pane_g3_ParamLimits

0xfe96,	// (0x000ba230) list_notif_wgt_row_pane_g_ParamLimits

0xed7e,	// (0x000b9118) list_notif_wgt_row_pane_t1_ParamLimits

0xed94,	// (0x000b912e) list_notif_wgt_row_pane_t2_ParamLimits

0xeda6,	// (0x000b9140) list_notif_wgt_row_pane_t3_ParamLimits

0xfe9d,	// (0x000ba237) list_notif_wgt_row_pane_t_ParamLimits

0x8cbb,	// (0x000b3055) listrow_wgtman_pane_g1_ParamLimits

0x8cc8,	// (0x000b3062) listrow_wgtman_pane_g2_ParamLimits

0xfec6,	// (0x000ba260) listrow_wgtman_pane_g_ParamLimits

0x8ce6,	// (0x000b3080) listrow_wgtman_pane_t1_ParamLimits

0x8cfe,	// (0x000b3098) listrow_wgtman_pane_t2_ParamLimits

0xfecb,	// (0x000ba265) listrow_wgtman_pane_t_ParamLimits

0x8d24,	// (0x000b30be) wait_bar_pane_cp09_ParamLimits

0x94a2,	// (0x000b383c) bg_popup_heading_pane_cp02

0xf036,	// (0x000b93d0) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x000b93d8) popup_notif_wgt_heading_pane_t1

0x94a2,	// (0x000b383c) main_vids_pane

0x94a2,	// (0x000b383c) vids_listscroll_pane

0x941b,	// (0x000b37b5) scroll_pane_cp040

0x94a2,	// (0x000b383c) vids_list_pane

0x9426,	// (0x000b37c0) vids_list_double_pane_ParamLimits

0x9426,	// (0x000b37c0) vids_list_double_pane

0x9437,	// (0x000b37d1) vids_list_double_pane_g1

0x9440,	// (0x000b37da) vids_list_double_pane_t1

0x9450,	// (0x000b37ea) vids_list_double_pane_t2

0x0001,

0xff58,	// (0x000ba2f2) vids_list_double_pane_t

0x951a,	// (0x000b38b4) main_ncimui_pane_ParamLimits

0x73be,	// (0x000b1758) main_ncimui_pane_g1_ParamLimits

0x73ca,	// (0x000b1764) main_ncimui_pane_g2_ParamLimits

0x73ca,	// (0x000b1764) main_ncimui_pane_g2

0x0001,

0xfbd3,	// (0x000b9f6d) main_ncimui_pane_g_ParamLimits

0xfbd3,	// (0x000b9f6d) main_ncimui_pane_g

0x9344,	// (0x000b36de) main_welc_pane_g1_ParamLimits

0x9344,	// (0x000b36de) main_welc_pane_g1

0x9359,	// (0x000b36f3) main_welc_pane_g2_ParamLimits

0x9359,	// (0x000b36f3) main_welc_pane_g2

0x0002,

0xff4a,	// (0x000ba2e4) main_welc_pane_g_ParamLimits

0xff4a,	// (0x000ba2e4) main_welc_pane_g

0xa33d,	// (0x000b46d7) listscroll_mce_pane_ParamLimits

0xb4e5,	// (0x000b587f) wait_bar_pane_cp10

0xc8fd,	// (0x000b6c97) main_cale_day_pane_ParamLimits

0xc8fd,	// (0x000b6c97) main_cale_week_pane_ParamLimits

0xa33d,	// (0x000b46d7) main_messa_pane_ParamLimits

0x4c2b,	// (0x000aefc5) main_clock2_btn_pane_ParamLimits

0x4c2b,	// (0x000aefc5) main_clock2_btn_pane

0xd124,	// (0x000b74be) main_clock2_btn_pane_cp01_ParamLimits

0xd124,	// (0x000b74be) main_clock2_btn_pane_cp01

0xe9ad,	// (0x000b8d47) list_cale_mrui_pane_ParamLimits

0xeddc,	// (0x000b9176) main_cf0_pane_g2

0x0001,

0xfea4,	// (0x000ba23e) main_cf0_pane_g

0x8f0d,	// (0x000b32a7) area_left_week_number_pane_ParamLimits

0x8f19,	// (0x000b32b3) area_top_day_name_pane_ParamLimits

0x8f2c,	// (0x000b32c6) frame_month_view_pane_ParamLimits

0xeed2,	// (0x000b926c) grid_month_view_pane_ParamLimits

0xeee0,	// (0x000b927a) frm_month_g1_ParamLimits

0x8fad,	// (0x000b3347) frm_month_g2_ParamLimits

0x8fc0,	// (0x000b335a) frm_month_g3_ParamLimits

0x8fd3,	// (0x000b336d) frm_month_g4_ParamLimits

0x8fe6,	// (0x000b3380) frm_month_g5_ParamLimits

0x8ff9,	// (0x000b3393) frm_month_g6_ParamLimits

0x900c,	// (0x000b33a6) frm_month_g7_ParamLimits

0xeeed,	// (0x000b9287) frm_month_g8_ParamLimits

0x901f,	// (0x000b33b9) frm_month_g9_ParamLimits

0x902f,	// (0x000b33c9) frm_month_g10_ParamLimits

0x903f,	// (0x000b33d9) frm_month_g11_ParamLimits

0x904f,	// (0x000b33e9) frm_month_g12_ParamLimits

0x9061,	// (0x000b33fb) frm_month_g13_ParamLimits

0x9073,	// (0x000b340d) frm_month_g14_ParamLimits

0x9087,	// (0x000b3421) frm_month_g15_ParamLimits

0x909b,	// (0x000b3435) frm_month_g16_ParamLimits

0xfef5,	// (0x000ba28f) frm_month_g_ParamLimits

0xeefa,	// (0x000b9294) cell_top_day_name_pane_t1_ParamLimits

0x90af,	// (0x000b3449) cell_area_left_week_number_pane_g1_ParamLimits

0x90bb,	// (0x000b3455) cell_area_left_week_number_pane_t1_ParamLimits

0xcf7c,	// (0x000b7316) cell_month_view_pane_g1_ParamLimits

0x90ce,	// (0x000b3468) cell_month_view_pane_t1_ParamLimits

0xa335,	// (0x000b46cf) main_clock2_btn_pane_g1

0xf04c,	// (0x000b93e6) main_clock2_btn_pane_t1

0xa7a8,	// (0x000b4b42) listscroll_cmail_pane_ParamLimits

0xe788,	// (0x000b8b22) main_sp_fs_email_pane_g1_ParamLimits

0xe794,	// (0x000b8b2e) main_sp_fs_email_pane_g2_ParamLimits

0xfcd2,	// (0x000ba06c) main_sp_fs_email_pane_g_ParamLimits

0xeabb,	// (0x000b8e55) list_recal_day_pane_ParamLimits

0xeacc,	// (0x000b8e66) mian_recal_day_pane_t1

0x7f3d,	// (0x000b22d7) list_single_dyc_row_text_pane_t4_ParamLimits

0x7f3d,	// (0x000b22d7) list_single_dyc_row_text_pane_t4

0x7f86,	// (0x000b2320) list_single_dyc_row_text_pane_t5_ParamLimits

0x7f86,	// (0x000b2320) list_single_dyc_row_text_pane_t5

0xa992,	// (0x000b4d2c) list_single_dyc_row_text_pane_t6_ParamLimits

0xa992,	// (0x000b4d2c) list_single_dyc_row_text_pane_t6

0x21dd,	// (0x000ac577) aid_mgn_list_cale_time_pane

0x951a,	// (0x000b38b4) main_gallery2_pane_ParamLimits

0xd13a,	// (0x000b74d4) main_clock2_pane_cp01_t1

0xd14a,	// (0x000b74e4) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x000b9b43) main_clock2_pane_cp01_t

0x0a19,	// (0x000aadb3) cale_week_scroll_pane_g16_ParamLimits

0x0a19,	// (0x000aadb3) cale_week_scroll_pane_g16

0xa5d0,	// (0x000b496a) vorec_slider_pane

0xefd8,	// (0x000b9372) vidtel_button_pane_t1_ParamLimits

0x883b,	// (0x000b2bd5) main_fs_bigclock_clock_pane_g1_ParamLimits

0x883b,	// (0x000b2bd5) main_fs_bigclock_clock_pane_g2_ParamLimits

0x884c,	// (0x000b2be6) main_fs_bigclock_clock_pane_g3_ParamLimits

0x884c,	// (0x000b2be6) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe52,	// (0x000ba1ec) main_fs_bigclock_clock_pane_g_ParamLimits

0x885f,	// (0x000b2bf9) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8875,	// (0x000b2c0f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe5b,	// (0x000ba1f5) main_fs_bigclock_clock_pane_t_ParamLimits

0x4422,	// (0x000ae7bc) main_mup3_lyrics_pane_ParamLimits

0x4422,	// (0x000ae7bc) main_mup3_lyrics_pane

0x9486,	// (0x000b3820) main_mup3_lyrics_pane_t1_ParamLimits

0x9486,	// (0x000b3820) main_mup3_lyrics_pane_t1

0x9bf1,	// (0x000b3f8b) aid_main_mp4_pane_t1_area

0x9bfb,	// (0x000b3f95) aid_main_mp4_pane_t2_area

0x9ca7,	// (0x000b4041) main_mp4_pane_g7_ParamLimits

0x9ca7,	// (0x000b4041) main_mp4_pane_g7

0x9cb3,	// (0x000b404d) main_mp4_pane_g8_ParamLimits

0x9cb3,	// (0x000b404d) main_mp4_pane_g8

0x5751,	// (0x000afaeb) aid_call6_pane_g1_size

0x9250,	// (0x000b35ea) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9250,	// (0x000b35ea) list_double_large_graphic_phob2_other_pane

0xae42,	// (0x000b51dc) list_double_large_graphic_phob2_other_pane_g1

0x94a2,	// (0x000b383c) list_highlight_pane_cp026

0xa7a8,	// (0x000b4b42) main_welc_pane_ParamLimits

0x7c69,	// (0x000b2003) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7c69,	// (0x000b2003) main_sp_fs_ctrlbar_pane_g3

0x7c83,	// (0x000b201d) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7c83,	// (0x000b201d) main_sp_fs_ctrlbar_pane_g4

0x7cb7,	// (0x000b2051) toolbar2_fixed_button_pane_cp01

0x7cc2,	// (0x000b205c) toolbar2_fixed_button_pane_cp02

0x7ccf,	// (0x000b2069) toolbar2_fixed_button_pane_cp03

0x92f4,	// (0x000b368e) list_welc_entry_pane_ParamLimits

0x92f4,	// (0x000b368e) list_welc_entry_pane

0x936e,	// (0x000b3708) main_welc_pane_g3_ParamLimits

0x936e,	// (0x000b3708) main_welc_pane_g3

0x939b,	// (0x000b3735) main_welc_pane_t2_ParamLimits

0x939b,	// (0x000b3735) main_welc_pane_t2

0x93b5,	// (0x000b374f) main_welc_pane_t3_ParamLimits

0x93b5,	// (0x000b374f) main_welc_pane_t3

0x0002,

0xff51,	// (0x000ba2eb) main_welc_pane_t_ParamLimits

0xff51,	// (0x000ba2eb) main_welc_pane_t

0x93cc,	// (0x000b3766) welc_button_pane_ParamLimits

0x93cc,	// (0x000b3766) welc_button_pane

0x93e3,	// (0x000b377d) welc_service_logo_pane_ParamLimits

0x93e3,	// (0x000b377d) welc_service_logo_pane

0xf05a,	// (0x000b93f4) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x000b93f4) list_single_welc_entry_pane

0xf06b,	// (0x000b9405) list_single_welc_entry_pane_g1

0xf073,	// (0x000b940d) list_single_welc_entry_pane_t1

0xf081,	// (0x000b941b) list_single_welc_entry_pane_t2

0x0001,

0xff5d,	// (0x000ba2f7) list_single_welc_entry_pane_t

0x94a2,	// (0x000b383c) bg_button_pane_cp035

0xf08f,	// (0x000b9429) welc_button_pane_t1

0xf09d,	// (0x000b9437) welc_service_logo_pane_g1

0xf0a6,	// (0x000b9440) welc_service_logo_pane_g2

0x0001,

0xff62,	// (0x000ba2fc) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
