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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0009a2cc };

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
0x02b0,	// (0x0009a57c) Screen

0x02bc,	// (0x0009a588) application_window

0x0302,	// (0x0009a5ce) area_bottom_pane_ParamLimits

0x0302,	// (0x0009a5ce) area_bottom_pane

0x033b,	// (0x0009a607) area_top_pane_ParamLimits

0x033b,	// (0x0009a607) area_top_pane

0xa127,	// (0x000a43f3) call_video_uplink_pane_ParamLimits

0xa127,	// (0x000a43f3) call_video_uplink_pane

0x03c9,	// (0x0009a695) main_pane_ParamLimits

0x03c9,	// (0x0009a695) main_pane

0xe4dd,	// (0x000a87a9) context_pane

0x3642,	// (0x0009d90e) navi_pane

0x3679,	// (0x0009d945) popup_cale_events_window_ParamLimits

0x3679,	// (0x0009d945) popup_cale_events_window

0xe4f0,	// (0x000a87bc) popup_mup_playback_window

0x3691,	// (0x0009d95d) signal_pane

0xc194,	// (0x000a6460) main_browser_pane

0xc37f,	// (0x000a664b) main_burst_pane

0x335a,	// (0x0009d626) main_calc_pane

0xe4d1,	// (0x000a879d) main_cale_day_pane

0x0937,	// (0x0009ac03) main_cale_month_pane

0xe4d1,	// (0x000a879d) main_cale_week_pane

0xc37f,	// (0x000a664b) main_call_pane

0xbe22,	// (0x000a60ee) main_call_poc_pane

0xc37f,	// (0x000a664b) main_camera_pane

0xc37f,	// (0x000a664b) main_chi_dic_pane

0xd0f2,	// (0x000a73be) main_clock_pane

0xbe22,	// (0x000a60ee) main_fmradio_pane

0xc37f,	// (0x000a664b) main_graph_messa_pane

0xbe22,	// (0x000a60ee) main_help_pane

0xc194,	// (0x000a6460) main_im_pane

0xc07d,	// (0x000a6349) main_image_pane_ParamLimits

0xc07d,	// (0x000a6349) main_image_pane

0xbe22,	// (0x000a60ee) main_location2_pane

0xc37f,	// (0x000a664b) main_location_pane

0xc07d,	// (0x000a6349) main_messa_pane

0xbe22,	// (0x000a60ee) main_mp2_pane

0xc37f,	// (0x000a664b) main_mp_pane

0xbe22,	// (0x000a60ee) main_msg_pane

0xbe22,	// (0x000a60ee) main_mup_eq_pane

0xbe22,	// (0x000a60ee) main_mup_pane

0xc194,	// (0x000a6460) main_notes_pane

0xbe22,	// (0x000a60ee) main_pec_pane

0xbe22,	// (0x000a60ee) main_phob_pane

0xbe22,	// (0x000a60ee) main_pinb_pane

0xbe22,	// (0x000a60ee) main_postcard_pane

0xbe22,	// (0x000a60ee) main_qdial_pane

0xc37f,	// (0x000a664b) main_skin_pane

0xbe22,	// (0x000a60ee) main_smil2_pane

0xc37f,	// (0x000a664b) main_smil_pane

0xc37f,	// (0x000a664b) main_video_pane

0xc37f,	// (0x000a664b) main_video_tele_pane

0xc07d,	// (0x000a6349) main_viewer_pane_ParamLimits

0xc07d,	// (0x000a6349) main_viewer_pane

0xc37f,	// (0x000a664b) main_vorec_pane

0x33b0,	// (0x0009d67c) popup_blid_sat_info_window_ParamLimits

0x33b0,	// (0x0009d67c) popup_blid_sat_info_window

0x3414,	// (0x0009d6e0) popup_dyc_status_message_window_ParamLimits

0x3414,	// (0x0009d6e0) popup_dyc_status_message_window

0x342e,	// (0x0009d6fa) popup_grid_large_graphic_window_ParamLimits

0x342e,	// (0x0009d6fa) popup_grid_large_graphic_window

0x34f0,	// (0x0009d7bc) popup_loc_request_window_ParamLimits

0x34f0,	// (0x0009d7bc) popup_loc_request_window

0x3616,	// (0x0009d8e2) popup_wml_address_window_ParamLimits

0x3616,	// (0x0009d8e2) popup_wml_address_window

0x3198,	// (0x0009d464) call_muted_g1

0x2e71,	// (0x0009d13d) popup_call_audio_conf_window_ParamLimits

0x2e71,	// (0x0009d13d) popup_call_audio_conf_window

0x31a8,	// (0x0009d474) popup_call_audio_first_window_ParamLimits

0x31a8,	// (0x0009d474) popup_call_audio_first_window

0x321e,	// (0x0009d4ea) popup_call_audio_in_window_ParamLimits

0x321e,	// (0x0009d4ea) popup_call_audio_in_window

0x325a,	// (0x0009d526) popup_call_audio_out_window_ParamLimits

0x325a,	// (0x0009d526) popup_call_audio_out_window

0x3294,	// (0x0009d560) popup_call_audio_second_window_ParamLimits

0x3294,	// (0x0009d560) popup_call_audio_second_window

0x32ea,	// (0x0009d5b6) popup_call_audio_wait_window_ParamLimits

0x32ea,	// (0x0009d5b6) popup_call_audio_wait_window

0x331f,	// (0x0009d5eb) popup_number_entry_window_ParamLimits

0x331f,	// (0x0009d5eb) popup_number_entry_window

0x0550,	// (0x0009a81c) bg_popup_call_pane_cp05_ParamLimits

0x0550,	// (0x0009a81c) bg_popup_call_pane_cp05

0x0570,	// (0x0009a83c) popup_number_entry_window_t1

0x0583,	// (0x0009a84f) popup_number_entry_window_t2

0x0595,	// (0x0009a861) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x000a92e9) popup_number_entry_window_t

0x05dc,	// (0x0009a8a8) text_title_cp2

0x05ef,	// (0x0009a8bb) bg_popup_call_pane_cp_ParamLimits

0x05ef,	// (0x0009a8bb) bg_popup_call_pane_cp

0x05fd,	// (0x0009a8c9) call_thumbnail_pane

0x0605,	// (0x0009a8d1) popup_call_audio_in_window_g1_ParamLimits

0x0605,	// (0x0009a8d1) popup_call_audio_in_window_g1

0x0611,	// (0x0009a8dd) popup_call_audio_in_window_g2_ParamLimits

0x0611,	// (0x0009a8dd) popup_call_audio_in_window_g2

0x061d,	// (0x0009a8e9) popup_call_audio_in_window_g3_ParamLimits

0x061d,	// (0x0009a8e9) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x000a92f2) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x000a92f2) popup_call_audio_in_window_g

0x0629,	// (0x0009a8f5) popup_call_audio_in_window_t1_ParamLimits

0x0629,	// (0x0009a8f5) popup_call_audio_in_window_t1

0x0645,	// (0x0009a911) popup_call_audio_in_window_t2_ParamLimits

0x0645,	// (0x0009a911) popup_call_audio_in_window_t2

0x0661,	// (0x0009a92d) popup_call_audio_in_window_t3_ParamLimits

0x0661,	// (0x0009a92d) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x000a92f9) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x000a92f9) popup_call_audio_in_window_t

0x05ef,	// (0x0009a8bb) bg_popup_call_pane_cp01_ParamLimits

0x05ef,	// (0x0009a8bb) bg_popup_call_pane_cp01

0x05fd,	// (0x0009a8c9) call_thumbnail_pane_cp02

0x0674,	// (0x0009a940) call_type_pane_cp022

0x067c,	// (0x0009a948) popup_call_audio_out_window_g1_ParamLimits

0x067c,	// (0x0009a948) popup_call_audio_out_window_g1

0xa15d,	// (0x000a4429) popup_call_audio_out_window_g2_ParamLimits

0xa15d,	// (0x000a4429) popup_call_audio_out_window_g2

0xa169,	// (0x000a4435) popup_call_audio_out_window_g3_ParamLimits

0xa169,	// (0x000a4435) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x000a9300) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x000a9300) popup_call_audio_out_window_g

0xa17b,	// (0x000a4447) popup_call_audio_out_window_t1_ParamLimits

0xa17b,	// (0x000a4447) popup_call_audio_out_window_t1

0xa193,	// (0x000a445f) popup_call_audio_out_window_t2_ParamLimits

0xa193,	// (0x000a445f) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x000a9307) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x000a9307) popup_call_audio_out_window_t

0xa1a8,	// (0x000a4474) bg_popup_call_pane_ParamLimits

0xa1a8,	// (0x000a4474) bg_popup_call_pane

0x068e,	// (0x0009a95a) call_thumbnail_pane_cp_ParamLimits

0x068e,	// (0x0009a95a) call_thumbnail_pane_cp

0xa22c,	// (0x000a44f8) call_type_pane_cp01_ParamLimits

0xa22c,	// (0x000a44f8) call_type_pane_cp01

0xa270,	// (0x000a453c) popup_call_audio_first_window_g1_ParamLimits

0xa270,	// (0x000a453c) popup_call_audio_first_window_g1

0xa2bc,	// (0x000a4588) popup_call_audio_first_window_g2_ParamLimits

0xa2bc,	// (0x000a4588) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x000a930c) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x000a930c) popup_call_audio_first_window_g

0xa300,	// (0x000a45cc) popup_call_audio_first_window_t1_ParamLimits

0xa300,	// (0x000a45cc) popup_call_audio_first_window_t1

0xa3ac,	// (0x000a4678) popup_call_audio_first_window_t4_ParamLimits

0xa3ac,	// (0x000a4678) popup_call_audio_first_window_t4

0xbdf3,	// (0x000a60bf) popup_call_audio_first_window_t5_ParamLimits

0xbdf3,	// (0x000a60bf) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x000a9311) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x000a9311) popup_call_audio_first_window_t

0xbe22,	// (0x000a60ee) bg_popup_call_pane_cp02

0xbe2c,	// (0x000a60f8) call_type_pane_cp023

0xbe34,	// (0x000a6100) popup_call_audio_wait_window_g1

0xbe3c,	// (0x000a6108) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x000a9318) popup_call_audio_wait_window_g

0xbe44,	// (0x000a6110) popup_call_audio_wait_window_t3

0xbe52,	// (0x000a611e) bg_popup_call_pane_cp03_ParamLimits

0xbe52,	// (0x000a611e) bg_popup_call_pane_cp03

0xbeb2,	// (0x000a617e) call_thumbnail_pane_cp011_ParamLimits

0xbeb2,	// (0x000a617e) call_thumbnail_pane_cp011

0xbebe,	// (0x000a618a) call_type_pane_cp034_ParamLimits

0xbebe,	// (0x000a618a) call_type_pane_cp034

0xbefa,	// (0x000a61c6) popup_call_audio_second_window_g1_ParamLimits

0xbefa,	// (0x000a61c6) popup_call_audio_second_window_g1

0xbf36,	// (0x000a6202) popup_call_audio_second_window_g2_ParamLimits

0xbf36,	// (0x000a6202) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x000a931d) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x000a931d) popup_call_audio_second_window_g

0xbf72,	// (0x000a623e) popup_call_audio_second_window_t1_ParamLimits

0xbf72,	// (0x000a623e) popup_call_audio_second_window_t1

0xbff3,	// (0x000a62bf) popup_call_audio_second_window_t2_ParamLimits

0xbff3,	// (0x000a62bf) popup_call_audio_second_window_t2

0xc029,	// (0x000a62f5) popup_call_audio_second_window_t3_ParamLimits

0xc029,	// (0x000a62f5) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x000a9322) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x000a9322) popup_call_audio_second_window_t

0xbe22,	// (0x000a60ee) bg_popup_call_pane_cp04

0xc05f,	// (0x000a632b) list_conf_pane

0xc067,	// (0x000a6333) popup_call_audio_conf_window_t1

0xc075,	// (0x000a6341) call_thumbnail_pane_g1

0xc07d,	// (0x000a6349) bg_pinb_pane_ParamLimits

0xc07d,	// (0x000a6349) bg_pinb_pane

0xc08b,	// (0x000a6357) find_pinb_pane

0xc07d,	// (0x000a6349) listscroll_pinb_pane_ParamLimits

0xc07d,	// (0x000a6349) listscroll_pinb_pane

0xc095,	// (0x000a6361) pinb_bg_pane_g1

0xc095,	// (0x000a6361) pinb_bg_pane_g2

0xc095,	// (0x000a6361) pinb_bg_pane_g3

0xc095,	// (0x000a6361) pinb_bg_pane_g4

0xc095,	// (0x000a6361) pinb_bg_pane_g5

0xc095,	// (0x000a6361) pinb_bg_pane_g6

0xc095,	// (0x000a6361) pinb_bg_pane_g7

0xc095,	// (0x000a6361) pinb_bg_pane_g8

0xc095,	// (0x000a6361) pinb_bg_pane_g9

0xc095,	// (0x000a6361) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x000a9329) pinb_bg_pane_g

0x02c8,	// (0x0009a594) grid_pinb_pane

0x02c8,	// (0x0009a594) list_pinb_pane

0xa438,	// (0x000a4704) scroll_pane_cp01_ParamLimits

0xa438,	// (0x000a4704) scroll_pane_cp01

0xc09f,	// (0x000a636b) find_pinb_pane_g1_ParamLimits

0xc09f,	// (0x000a636b) find_pinb_pane_g1

0xc0b7,	// (0x000a6383) find_pinb_pane_t1

0xc0c9,	// (0x000a6395) find_pinb_pane_t2

0x0001,

0xf077,	// (0x000a9343) find_pinb_pane_t

0xc0de,	// (0x000a63aa) input_focus_pane_cp01_ParamLimits

0xc0de,	// (0x000a63aa) input_focus_pane_cp01

0xc0ea,	// (0x000a63b6) cell_pinb_pane_ParamLimits

0xc0ea,	// (0x000a63b6) cell_pinb_pane

0xc0f8,	// (0x000a63c4) cell_pinb_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) cell_pinb_pane_g1

0xc106,	// (0x000a63d2) cell_pinb_pane_g2_ParamLimits

0xc106,	// (0x000a63d2) cell_pinb_pane_g2

0xc106,	// (0x000a63d2) cell_pinb_pane_g3_ParamLimits

0xc106,	// (0x000a63d2) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x000a9348) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x000a9348) cell_pinb_pane_g

0xbe22,	// (0x000a60ee) grid_highlight_pane_cp01

0xc0ea,	// (0x000a63b6) list_pinb_item_pane_ParamLimits

0xc0ea,	// (0x000a63b6) list_pinb_item_pane

0x02c8,	// (0x0009a594) list_highlight_pane_cp02

0xc114,	// (0x000a63e0) list_pinb_item_pane_g1_ParamLimits

0xc114,	// (0x000a63e0) list_pinb_item_pane_g1

0xc106,	// (0x000a63d2) list_pinb_item_pane_g2_ParamLimits

0xc106,	// (0x000a63d2) list_pinb_item_pane_g2

0xc0f8,	// (0x000a63c4) list_pinb_item_pane_g3_ParamLimits

0xc0f8,	// (0x000a63c4) list_pinb_item_pane_g3

0xc106,	// (0x000a63d2) list_pinb_item_pane_g4_ParamLimits

0xc106,	// (0x000a63d2) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x000a934f) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x000a934f) list_pinb_item_pane_g

0xc122,	// (0x000a63ee) list_pinb_item_pane_t1_ParamLimits

0xc122,	// (0x000a63ee) list_pinb_item_pane_t1

0x06d2,	// (0x0009a99e) calc_display_pane

0x06f7,	// (0x0009a9c3) calc_paper_pane

0x071a,	// (0x0009a9e6) grid_calc_pane

0x02c8,	// (0x0009a594) bg_list_pane_cp01

0xc136,	// (0x000a6402) clock_g1

0xc136,	// (0x000a6402) clock_g2

0x0001,

0xf08c,	// (0x000a9358) clock_g

0xc140,	// (0x000a640c) clock_t1_ParamLimits

0xc140,	// (0x000a640c) clock_t1

0xc154,	// (0x000a6420) clock_t2_ParamLimits

0xc154,	// (0x000a6420) clock_t2

0xc154,	// (0x000a6420) clock_t3_ParamLimits

0xc154,	// (0x000a6420) clock_t3

0xc154,	// (0x000a6420) clock_t4_ParamLimits

0xc154,	// (0x000a6420) clock_t4

0xc140,	// (0x000a640c) clock_t5_ParamLimits

0xc140,	// (0x000a640c) clock_t5

0xc154,	// (0x000a6420) clock_t6_ParamLimits

0xc154,	// (0x000a6420) clock_t6

0xc154,	// (0x000a6420) clock_t7_ParamLimits

0xc154,	// (0x000a6420) clock_t7

0xc154,	// (0x000a6420) clock_t8_ParamLimits

0xc154,	// (0x000a6420) clock_t8

0xc154,	// (0x000a6420) clock_t9_ParamLimits

0xc154,	// (0x000a6420) clock_t9

0x0008,

0xf091,	// (0x000a935d) clock_t_ParamLimits

0xf091,	// (0x000a935d) clock_t

0x02c8,	// (0x0009a594) popup_clock_analogue_window_cp02

0x02c8,	// (0x0009a594) popup_clock_digital_window_cp01

0xbe22,	// (0x000a60ee) listscroll_help_pane

0xbe22,	// (0x000a60ee) phob_pre_status_pane

0xc168,	// (0x000a6434) grid_qdial_pane

0xc07d,	// (0x000a6349) listscroll_mce_pane

0xc07d,	// (0x000a6349) bg_notes_pane

0xc172,	// (0x000a643e) list_notes_pane

0x0748,	// (0x0009aa14) scroll_pane_cp06

0xc180,	// (0x000a644c) bg_calc_paper_pane

0xa44e,	// (0x000a471a) list_calc_pane

0xc194,	// (0x000a6460) bg_calc_display_pane

0x075c,	// (0x0009aa28) calc_display_pane_t1

0x0771,	// (0x0009aa3d) calc_display_pane_t2

0xa468,	// (0x000a4734) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x000a9370) calc_display_pane_t

0x0786,	// (0x0009aa52) cell_calc_pane_ParamLimits

0x0786,	// (0x0009aa52) cell_calc_pane

0xc1a0,	// (0x000a646c) bg_calc_paper_pane_g1

0xc1ac,	// (0x000a6478) bg_calc_paper_pane_g2

0xc1b8,	// (0x000a6484) bg_calc_paper_pane_g3

0xc1c4,	// (0x000a6490) bg_calc_paper_pane_g4

0xc1d0,	// (0x000a649c) bg_calc_paper_pane_g5

0x07c1,	// (0x0009aa8d) bg_calc_paper_pane_g6

0x07d4,	// (0x0009aaa0) bg_calc_paper_pane_g7

0x07e7,	// (0x0009aab3) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x000a9377) bg_calc_paper_pane_g

0x07fa,	// (0x0009aac6) calc_bg_paper_pane_g9

0x080d,	// (0x0009aad9) list_calc_item_pane_ParamLimits

0x080d,	// (0x0009aad9) list_calc_item_pane

0xc1dc,	// (0x000a64a8) list_calc_item_pane_g1

0xa47a,	// (0x000a4746) list_calc_item_pane_t1_ParamLimits

0xa47a,	// (0x000a4746) list_calc_item_pane_t1

0x0825,	// (0x0009aaf1) list_calc_item_pane_t2_ParamLimits

0x0825,	// (0x0009aaf1) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x000a9388) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x000a9388) list_calc_item_pane_t

0xc095,	// (0x000a6361) cell_calc_pane_g1

0xc1e9,	// (0x000a64b5) grid_highlight_pane_cp02

0x0857,	// (0x0009ab23) bg_calc_display_pane_g1

0x0860,	// (0x0009ab2c) bg_calc_display_pane_g2

0xc9a7,	// (0x000a6c73) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x000a9392) bg_calc_display_pane_g

0x086a,	// (0x0009ab36) cell_qdial_pane_ParamLimits

0x086a,	// (0x0009ab36) cell_qdial_pane

0x087e,	// (0x0009ab4a) cell_qdial_pane_g1_ParamLimits

0x087e,	// (0x0009ab4a) cell_qdial_pane_g1

0x0894,	// (0x0009ab60) cell_qdial_pane_g2_ParamLimits

0x0894,	// (0x0009ab60) cell_qdial_pane_g2

0xc20b,	// (0x000a64d7) cell_qdial_pane_g3_ParamLimits

0xc20b,	// (0x000a64d7) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x000a9399) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x000a9399) cell_qdial_pane_g

0x08bb,	// (0x0009ab87) cell_qdial_pane_t1_ParamLimits

0x08bb,	// (0x0009ab87) cell_qdial_pane_t1

0x08d3,	// (0x0009ab9f) cell_qdial_pane_t2_ParamLimits

0x08d3,	// (0x0009ab9f) cell_qdial_pane_t2

0x08e6,	// (0x0009abb2) cell_qdial_pane_t3_ParamLimits

0x08e6,	// (0x0009abb2) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x000a93a2) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x000a93a2) cell_qdial_pane_t

0xbe22,	// (0x000a60ee) grid_highlight_pane_cp04

0xc217,	// (0x000a64e3) thumbnail_qdial_pane_ParamLimits

0xc217,	// (0x000a64e3) thumbnail_qdial_pane

0xc273,	// (0x000a653f) list_help_pane

0xc27c,	// (0x000a6548) scroll_pane_cp02

0x08f9,	// (0x0009abc5) help_list_pane_t1_ParamLimits

0x08f9,	// (0x0009abc5) help_list_pane_t1

0xc285,	// (0x000a6551) bg_notes_pane_g2

0xc28d,	// (0x000a6559) bg_notes_pane_g3

0xc295,	// (0x000a6561) notes_bg_pane_g1

0xc29d,	// (0x000a6569) notes_bg_pane_g4

0xc2a5,	// (0x000a6571) notes_bg_pane_g5

0xc2ad,	// (0x000a6579) notes_bg_pane_g6

0xc2b5,	// (0x000a6581) notes_bg_pane_g7

0xc2bd,	// (0x000a6589) notes_bg_pane_g8

0xc2c5,	// (0x000a6591) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x000a93c0) notes_bg_pane_g

0x091d,	// (0x0009abe9) list_notes_text_pane_ParamLimits

0x091d,	// (0x0009abe9) list_notes_text_pane

0xc2cd,	// (0x000a6599) list_notes_text_pane_g1

0xc2d6,	// (0x000a65a2) list_notes_text_pane_t1

0x0937,	// (0x0009ac03) listscroll_cale_week_pane

0x0963,	// (0x0009ac2f) bg_cale_heading_pane

0x0987,	// (0x0009ac53) bg_cale_pane_cp01

0x09a4,	// (0x0009ac70) cale_week_corner_pane

0x09c3,	// (0x0009ac8f) cale_week_day_heading_pane

0x09ec,	// (0x0009acb8) cale_week_scroll_pane_g1

0x0a0b,	// (0x0009acd7) cale_week_scroll_pane_g2

0x0a23,	// (0x0009acef) cale_week_scroll_pane_g3

0x0a3b,	// (0x0009ad07) cale_week_scroll_pane_g4

0x0a53,	// (0x0009ad1f) cale_week_scroll_pane_g5

0x0a73,	// (0x0009ad3f) cale_week_scroll_pane_g6

0x0a93,	// (0x0009ad5f) cale_week_scroll_pane_g7

0x0ab3,	// (0x0009ad7f) cale_week_scroll_pane_g8

0x0ad7,	// (0x0009ada3) cale_week_scroll_pane_g9

0x0aef,	// (0x0009adbb) cale_week_scroll_pane_g10

0x0b07,	// (0x0009add3) cale_week_scroll_pane_g11

0x0b1f,	// (0x0009adeb) cale_week_scroll_pane_g12

0x0b3f,	// (0x0009ae0b) cale_week_scroll_pane_g13

0x0b63,	// (0x0009ae2f) cale_week_scroll_pane_g14

0x0b87,	// (0x0009ae53) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x000a93cf) cale_week_scroll_pane_g

0x0bcf,	// (0x0009ae9b) cale_week_time_pane

0x0bf3,	// (0x0009aebf) grid_cale_week_pane

0xc307,	// (0x000a65d3) scroll_pane_cp08

0x0c21,	// (0x0009aeed) cell_cale_week_pane_ParamLimits

0x0c21,	// (0x0009aeed) cell_cale_week_pane

0x0cb9,	// (0x0009af85) cale_week_day_heading_pane_t1

0x0ce3,	// (0x0009afaf) cale_week_day_heading_pane_t2

0x0d12,	// (0x0009afde) cale_week_day_heading_pane_t3

0x0d41,	// (0x0009b00d) cale_week_day_heading_pane_t4

0x0d70,	// (0x0009b03c) cale_week_day_heading_pane_t5

0x0da3,	// (0x0009b06f) cale_week_day_heading_pane_t6

0x0dda,	// (0x0009b0a6) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x000a93f0) cale_week_day_heading_pane_t

0xc324,	// (0x000a65f0) bg_cale_side_pane

0x0e04,	// (0x0009b0d0) cale_week_time_pane_t1

0x0e1e,	// (0x0009b0ea) cale_week_time_pane_t2

0x0e38,	// (0x0009b104) cale_week_time_pane_t3

0x0e52,	// (0x0009b11e) cale_week_time_pane_t4

0x0e6c,	// (0x0009b138) cale_week_time_pane_t5

0x0e86,	// (0x0009b152) cale_week_time_pane_t6

0x0ea4,	// (0x0009b170) cale_week_time_pane_t7

0x0ec6,	// (0x0009b192) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x000a93ff) cale_week_time_pane_t

0x0eea,	// (0x0009b1b6) cell_cale_week_pane_g2

0x0f0e,	// (0x0009b1da) cell_cale_week_pane_g3_ParamLimits

0x0f0e,	// (0x0009b1da) cell_cale_week_pane_g3

0xc332,	// (0x000a65fe) grid_highlight_pane_cp07

0xc33a,	// (0x000a6606) listscroll_gms_pane

0xc344,	// (0x000a6610) grid_gms_pane

0xc34d,	// (0x000a6619) listscroll_gms_pane_g1

0xc355,	// (0x000a6621) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x000a9410) listscroll_gms_pane_g

0x0f26,	// (0x0009b1f2) scroll_pane_cp010

0x0f31,	// (0x0009b1fd) cell_gms_pane_ParamLimits

0x0f31,	// (0x0009b1fd) cell_gms_pane

0x0f48,	// (0x0009b214) cell_gms_pane_g1

0xc35d,	// (0x000a6629) cell_gms_pane_g2

0xc365,	// (0x000a6631) cell_gms_pane_g3

0xc36e,	// (0x000a663a) cell_gms_pane_g4

0x0003,

0xf149,	// (0x000a9415) cell_gms_pane_g

0xc377,	// (0x000a6643) grid_highlight_pane_cp09

0x311c,	// (0x0009d3e8) phob_pre_status_pane_g1

0x3124,	// (0x0009d3f0) phob_pre_status_pane_g2

0x312c,	// (0x0009d3f8) phob_pre_status_pane_g3

0x3134,	// (0x0009d400) phob_pre_status_pane_g4

0x0004,

0xf4e5,	// (0x000a97b1) phob_pre_status_pane_g

0x3144,	// (0x0009d410) phob_pre_status_pane_t1

0x3154,	// (0x0009d420) phob_pre_status_pane_t2

0x3164,	// (0x0009d430) phob_pre_status_pane_t3

0x0002,

0xf4f0,	// (0x000a97bc) phob_pre_status_pane_t

0xc37f,	// (0x000a664b) bg_list_pane_cp05

0x0f58,	// (0x0009b224) grid_vorec_pane

0x0f62,	// (0x0009b22e) vorec_t1

0x0f70,	// (0x0009b23c) vorec_t2

0x0f7e,	// (0x0009b24a) vorec_t3

0x0f8c,	// (0x0009b258) vorec_t4

0xb234,	// (0x000a5500) vorec_t5

0x8cbb,	// (0x000a2f87) vorec_t6

0x0004,

0xf152,	// (0x000a941e) vorec_t

0x8cc9,	// (0x000a2f95) wait_bar_pane_cp01

0x0fa8,	// (0x0009b274) cell_vorec_pane_ParamLimits

0x0fa8,	// (0x0009b274) cell_vorec_pane

0xa495,	// (0x000a4761) cell_vorec_pane_g1

0xbe22,	// (0x000a60ee) grid_highlight_pane_cp05

0xa438,	// (0x000a4704) cams_zoom_pane

0xa438,	// (0x000a4704) image_vga_pane

0xc0f8,	// (0x000a63c4) main_camera_pane_g1

0xc0f8,	// (0x000a63c4) main_camera_pane_g2

0xc0f8,	// (0x000a63c4) main_camera_pane_g3

0xc0f8,	// (0x000a63c4) main_camera_pane_g4

0xc0f8,	// (0x000a63c4) main_camera_pane_g5

0xc0f8,	// (0x000a63c4) main_camera_pane_g6

0xc0f8,	// (0x000a63c4) main_camera_pane_g7

0x0007,

0xf15d,	// (0x000a9429) main_camera_pane_g

0xc140,	// (0x000a640c) main_camera_pane_t1

0xc140,	// (0x000a640c) main_camera_pane_t2

0x0001,

0xf16e,	// (0x000a943a) main_camera_pane_t

0x0fd1,	// (0x0009b29d) cams_zoom_pane_cp_ParamLimits

0x0fd1,	// (0x0009b29d) cams_zoom_pane_cp

0x1005,	// (0x0009b2d1) image_cif_pane_ParamLimits

0x1005,	// (0x0009b2d1) image_cif_pane

0x02c8,	// (0x0009a594) image_subqcif_pane

0x1017,	// (0x0009b2e3) main_video_pane_g1_ParamLimits

0x1017,	// (0x0009b2e3) main_video_pane_g1

0x1045,	// (0x0009b311) main_video_pane_g2_ParamLimits

0x1045,	// (0x0009b311) main_video_pane_g2

0x107f,	// (0x0009b34b) main_video_pane_g3_ParamLimits

0x107f,	// (0x0009b34b) main_video_pane_g3

0x107f,	// (0x0009b34b) main_video_pane_g4_ParamLimits

0x107f,	// (0x0009b34b) main_video_pane_g4

0x10b3,	// (0x0009b37f) main_video_pane_g5_ParamLimits

0x10b3,	// (0x0009b37f) main_video_pane_g5

0xc387,	// (0x000a6653) main_video_pane_g6_ParamLimits

0xc387,	// (0x000a6653) main_video_pane_g6

0x0006,

0xf173,	// (0x000a943f) main_video_pane_g_ParamLimits

0xf173,	// (0x000a943f) main_video_pane_g

0x10cf,	// (0x0009b39b) main_video_pane_t1_ParamLimits

0x10cf,	// (0x0009b39b) main_video_pane_t1

0xc136,	// (0x000a6402) cams_zoom_pane_g1

0xc136,	// (0x000a6402) cams_zoom_pane_g2

0xc136,	// (0x000a6402) cams_zoom_pane_g3

0xc136,	// (0x000a6402) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x000a944e) cams_zoom_pane_g

0xa438,	// (0x000a4704) grid_cams_pane

0xa438,	// (0x000a4704) linegrid_cams_pane

0x1113,	// (0x0009b3df) cell_cams_pane_ParamLimits

0x1113,	// (0x0009b3df) cell_cams_pane

0x02c8,	// (0x0009a594) cams_burst_image_pane

0xc136,	// (0x000a6402) cell_cams_pane_g1

0x02c8,	// (0x0009a594) grid_highlight_pane_cp03

0xc095,	// (0x000a6361) mp_bg_pane_g1

0x02c8,	// (0x0009a594) bg_list_pane_cp03

0x02c8,	// (0x0009a594) bg_mp_pane

0x02c8,	// (0x0009a594) grid_mp_pane

0xc136,	// (0x000a6402) media_player_g1

0xce88,	// (0x000a7154) media_player_t1

0xce88,	// (0x000a7154) media_player_t2

0xce88,	// (0x000a7154) media_player_t3

0xce88,	// (0x000a7154) media_player_t4

0xce88,	// (0x000a7154) media_player_t5

0xce88,	// (0x000a7154) media_player_t6

0xce88,	// (0x000a7154) media_player_t7

0x0006,

0xf4cf,	// (0x000a979b) media_player_t

0x02c8,	// (0x0009a594) wait_bar_pane_cp02

0xf4b4,	// (0x000a9780) main_usb_pane_t

0xd0f2,	// (0x000a73be) cell_mp_pane

0xc095,	// (0x000a6361) cell_mp_pane_g1

0xbe22,	// (0x000a60ee) grid_highlight_pane_cp06

0xc3a1,	// (0x000a666d) grid_skin_colour_pane

0xc3a9,	// (0x000a6675) list_highlight_pane_cp03

0x1128,	// (0x0009b3f4) skin_g1

0xc3b1,	// (0x000a667d) skin_t1

0xc3c0,	// (0x000a668c) skin_t2

0x0001,

0xf1b0,	// (0x000a947c) skin_t

0x1130,	// (0x0009b3fc) cell_skin_colour_pane_ParamLimits

0x1130,	// (0x0009b3fc) cell_skin_colour_pane

0xc9b0,	// (0x000a6c7c) cell_skin_colour_pane_g1

0x11a2,	// (0x0009b46e) call_video_g1_ParamLimits

0x11a2,	// (0x0009b46e) call_video_g1

0x11be,	// (0x0009b48a) call_video_g2_ParamLimits

0x11be,	// (0x0009b48a) call_video_g2

0x0001,

0xf1b5,	// (0x000a9481) call_video_g_ParamLimits

0xf1b5,	// (0x000a9481) call_video_g

0x1206,	// (0x0009b4d2) call_video_uplink_pane_cp1_ParamLimits

0x1206,	// (0x0009b4d2) call_video_uplink_pane_cp1

0xc9c2,	// (0x000a6c8e) call_video_uplink_pane_cp2

0x1296,	// (0x0009b562) video_down_crop_pane_ParamLimits

0x1296,	// (0x0009b562) video_down_crop_pane

0x137e,	// (0x0009b64a) video_down_pane_ParamLimits

0x137e,	// (0x0009b64a) video_down_pane

0xc9ca,	// (0x000a6c96) video_down_subqcif_pane_ParamLimits

0xc9ca,	// (0x000a6c96) video_down_subqcif_pane

0xc9e4,	// (0x000a6cb0) video_down_subqcif_pane_cp_ParamLimits

0xc9e4,	// (0x000a6cb0) video_down_subqcif_pane_cp

0xca0a,	// (0x000a6cd6) im_reading_pane_ParamLimits

0xca0a,	// (0x000a6cd6) im_reading_pane

0x1489,	// (0x0009b755) im_writing_pane_ParamLimits

0x1489,	// (0x0009b755) im_writing_pane

0x14a7,	// (0x0009b773) im_reading_pane_t1

0xca24,	// (0x000a6cf0) list_im_pane

0xca35,	// (0x000a6d01) scroll_pane_cp07

0x14e6,	// (0x0009b7b2) im_writing_pane_t1_ParamLimits

0x14e6,	// (0x0009b7b2) im_writing_pane_t1

0xca4e,	// (0x000a6d1a) im_writing_pane_t2_ParamLimits

0xca4e,	// (0x000a6d1a) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x000a948b) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x000a948b) im_writing_pane_t

0xbe22,	// (0x000a60ee) input_focus_pane_cp04

0xbe22,	// (0x000a60ee) input_focus_pane_cp05

0x14fb,	// (0x0009b7c7) list_im_single_pane_ParamLimits

0x14fb,	// (0x0009b7c7) list_im_single_pane

0xca6b,	// (0x000a6d37) list_single_im_pane_t1

0xc37f,	// (0x000a664b) blid_accuracy_pane

0xc37f,	// (0x000a664b) blid_compass_pane

0xe489,	// (0x000a8755) main_location_t1

0xe489,	// (0x000a8755) main_location_t2

0xe489,	// (0x000a8755) main_location_t3

0x0002,

0xf4de,	// (0x000a97aa) main_location_t

0xbe22,	// (0x000a60ee) aid_levels_location

0xc095,	// (0x000a6361) blid_accuracy_pane_g1

0xc095,	// (0x000a6361) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x000a94da) blid_accuracy_pane_g

0xcaa5,	// (0x000a6d71) wml_content_pane

0xcae3,	// (0x000a6daf) wml_button_pane_ParamLimits

0xcae3,	// (0x000a6daf) wml_button_pane

0x1511,	// (0x0009b7dd) wml_list_single_large_pane_ParamLimits

0x1511,	// (0x0009b7dd) wml_list_single_large_pane

0x152a,	// (0x0009b7f6) wml_list_single_medium_pane_ParamLimits

0x152a,	// (0x0009b7f6) wml_list_single_medium_pane

0x1544,	// (0x0009b810) wml_list_single_small_pane_ParamLimits

0x1544,	// (0x0009b810) wml_list_single_small_pane

0xcaf7,	// (0x000a6dc3) wml_selection_box_pane_ParamLimits

0xcaf7,	// (0x000a6dc3) wml_selection_box_pane

0xcb0a,	// (0x000a6dd6) wml_list_single_pane_t1

0xcb19,	// (0x000a6de5) wml_list_single_medium_pane_t1

0xcb28,	// (0x000a6df4) wml_list_single_large_pane_t1

0xcb37,	// (0x000a6e03) input_focus_pane_cp02_ParamLimits

0xcb37,	// (0x000a6e03) input_focus_pane_cp02

0xcb4a,	// (0x000a6e16) wml_selection_box_pane_g1

0xcb53,	// (0x000a6e1f) wml_selection_box_pane_t1_ParamLimits

0xcb53,	// (0x000a6e1f) wml_selection_box_pane_t1

0xc07d,	// (0x000a6349) bg_wml_button_pane_ParamLimits

0xc07d,	// (0x000a6349) bg_wml_button_pane

0xcb6b,	// (0x000a6e37) wml_button_pane_g1

0xcb73,	// (0x000a6e3f) wml_button_pane_t1

0xcb6b,	// (0x000a6e37) wml_button_bg_pane_g1

0xcb83,	// (0x000a6e4f) wml_button_bg_pane_g2

0xcb8b,	// (0x000a6e57) wml_button_bg_pane_g3

0xcb93,	// (0x000a6e5f) wml_button_bg_pane_g4

0xcb9b,	// (0x000a6e67) wml_button_bg_pane_g5

0xcba3,	// (0x000a6e6f) wml_button_bg_pane_g6

0xcbab,	// (0x000a6e77) wml_button_bg_pane_g7

0xcbb3,	// (0x000a6e7f) wml_button_bg_pane_g8

0xcbbb,	// (0x000a6e87) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x000a9490) wml_button_bg_pane_g

0x1560,	// (0x0009b82c) bg_list_pane_cp02

0xcbc3,	// (0x000a6e8f) mce_header_pane_ParamLimits

0xcbc3,	// (0x000a6e8f) mce_header_pane

0xcbd9,	// (0x000a6ea5) mce_icon_pane

0xcbd9,	// (0x000a6ea5) mce_image_pane

0xcbe2,	// (0x000a6eae) mce_text_pane_ParamLimits

0xcbe2,	// (0x000a6eae) mce_text_pane

0x156a,	// (0x0009b836) scroll_pane_cp03

0xcadb,	// (0x000a6da7) scroll_pane_cp04

0xcbf5,	// (0x000a6ec1) scroll_pane_cp05_ParamLimits

0xcbf5,	// (0x000a6ec1) scroll_pane_cp05

0x1574,	// (0x0009b840) mce_header_field_pane_ParamLimits

0x1574,	// (0x0009b840) mce_header_field_pane

0x158d,	// (0x0009b859) mce_header_field_pane_2_ParamLimits

0x158d,	// (0x0009b859) mce_header_field_pane_2

0x15a3,	// (0x0009b86f) mce_header_field_pane_3

0x15ab,	// (0x0009b877) list_single_mce_message_pane_ParamLimits

0x15ab,	// (0x0009b877) list_single_mce_message_pane

0x15c7,	// (0x0009b893) list_single_mce_smart_pane_ParamLimits

0x15c7,	// (0x0009b893) list_single_mce_smart_pane

0xcc01,	// (0x000a6ecd) input_focus_pane_cp03

0xcc0a,	// (0x000a6ed6) list_header_data_pane

0x15ee,	// (0x0009b8ba) mce_header_field_pane_t1

0x15fe,	// (0x0009b8ca) list_single_mce_header_pane_ParamLimits

0x15fe,	// (0x0009b8ca) list_single_mce_header_pane

0xcc12,	// (0x000a6ede) list_single_mce_header_pane_t1

0xcc21,	// (0x000a6eed) list_single_mce_message_pane_g1

0xcc29,	// (0x000a6ef5) list_single_mce_message_pane_t1

0x1638,	// (0x0009b904) bg_cale_heading_pane_cp01_ParamLimits

0x1638,	// (0x0009b904) bg_cale_heading_pane_cp01

0xcc37,	// (0x000a6f03) bg_cale_pane_cp02_ParamLimits

0xcc37,	// (0x000a6f03) bg_cale_pane_cp02

0x168a,	// (0x0009b956) cale_month_corner_pane

0x16a9,	// (0x0009b975) cale_month_day_heading_pane_ParamLimits

0x16a9,	// (0x0009b975) cale_month_day_heading_pane

0x1713,	// (0x0009b9df) cale_month_pane_g1_ParamLimits

0x1713,	// (0x0009b9df) cale_month_pane_g1

0x175a,	// (0x0009ba26) cale_month_pane_g2_ParamLimits

0x175a,	// (0x0009ba26) cale_month_pane_g2

0x1796,	// (0x0009ba62) cale_month_pane_g3_ParamLimits

0x1796,	// (0x0009ba62) cale_month_pane_g3

0x17ea,	// (0x0009bab6) cale_month_pane_g4_ParamLimits

0x17ea,	// (0x0009bab6) cale_month_pane_g4

0x183e,	// (0x0009bb0a) cale_month_pane_g5_ParamLimits

0x183e,	// (0x0009bb0a) cale_month_pane_g5

0x189a,	// (0x0009bb66) cale_month_pane_g6_ParamLimits

0x189a,	// (0x0009bb66) cale_month_pane_g6

0x18fe,	// (0x0009bbca) cale_month_pane_g7_ParamLimits

0x18fe,	// (0x0009bbca) cale_month_pane_g7

0x1966,	// (0x0009bc32) cale_month_pane_g8_ParamLimits

0x1966,	// (0x0009bc32) cale_month_pane_g8

0x19d2,	// (0x0009bc9e) cale_month_pane_g9_ParamLimits

0x19d2,	// (0x0009bc9e) cale_month_pane_g9

0x1a36,	// (0x0009bd02) cale_month_pane_g10_ParamLimits

0x1a36,	// (0x0009bd02) cale_month_pane_g10

0x1a88,	// (0x0009bd54) cale_month_pane_g11_ParamLimits

0x1a88,	// (0x0009bd54) cale_month_pane_g11

0x1ada,	// (0x0009bda6) cale_month_pane_g12_ParamLimits

0x1ada,	// (0x0009bda6) cale_month_pane_g12

0x1b32,	// (0x0009bdfe) cale_month_pane_g13_ParamLimits

0x1b32,	// (0x0009bdfe) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x000a94a3) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x000a94a3) cale_month_pane_g

0x1b8a,	// (0x0009be56) cale_month_week_pane

0x1bae,	// (0x0009be7a) grid_cale_month_pane_ParamLimits

0x1bae,	// (0x0009be7a) grid_cale_month_pane

0x1c0f,	// (0x0009bedb) cale_month_day_heading_pane_t1

0x1c95,	// (0x0009bf61) cale_month_day_heading_pane_t2

0x1d0e,	// (0x0009bfda) cale_month_day_heading_pane_t3

0x1d87,	// (0x0009c053) cale_month_day_heading_pane_t4

0x1e08,	// (0x0009c0d4) cale_month_day_heading_pane_t5

0x1e91,	// (0x0009c15d) cale_month_day_heading_pane_t6

0x1f1a,	// (0x0009c1e6) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x000a94be) cale_month_day_heading_pane_t

0xc324,	// (0x000a65f0) bg_cale_side_pane_cp01

0x1fab,	// (0x0009c277) cale_month_week_pane_t1

0x1fc4,	// (0x0009c290) cale_month_week_pane_t2

0x1fdd,	// (0x0009c2a9) cale_month_week_pane_t3

0x1ff6,	// (0x0009c2c2) cale_month_week_pane_t4

0x200f,	// (0x0009c2db) cale_month_week_pane_t5

0x2028,	// (0x0009c2f4) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x000a94cd) cale_month_week_pane_t

0x204d,	// (0x0009c319) cell_cale_month_pane_ParamLimits

0x204d,	// (0x0009c319) cell_cale_month_pane

0xa49f,	// (0x000a476b) cell_cale_month_pane_g1

0x2183,	// (0x0009c44f) cell_cale_month_pane_t1_ParamLimits

0x2183,	// (0x0009c44f) cell_cale_month_pane_t1

0xc332,	// (0x000a65fe) grid_highlight_pane_cp08

0xc095,	// (0x000a6361) main_smil_g1

0x21af,	// (0x0009c47b) smil_status_pane

0xcc76,	// (0x000a6f42) smil_text_pane

0xc2c5,	// (0x000a6591) bg_popup_call3_rect_pane_g8

0xc2bd,	// (0x000a6589) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x000a94df) bg_popup_call3_rect_pane_g

0xe552,	// (0x000a881e) smil_status_volume_pane_g1

0xcc80,	// (0x000a6f4c) smil_status_pane_t1

0xa609,	// (0x000a48d5) volume_smil_pane

0xcc97,	// (0x000a6f63) list_smil_text_pane

0x21c4,	// (0x0009c490) scroll_pane_cp011

0x21cf,	// (0x0009c49b) smil_text_list_pane_t1_ParamLimits

0x21cf,	// (0x0009c49b) smil_text_list_pane_t1

0xa4ab,	// (0x000a4777) aid_volume_smil_ParamLimits

0xa4ab,	// (0x000a4777) aid_volume_smil

0xc095,	// (0x000a6361) smil_volume_pane_g1

0xc095,	// (0x000a6361) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x000a94da) smil_volume_pane_g

0x221b,	// (0x0009c4e7) listscroll_cale_day_pane

0xccaa,	// (0x000a6f76) bg_cale_pane

0xccc2,	// (0x000a6f8e) list_cale_pane

0xcce5,	// (0x000a6fb1) scroll_pane_cp09

0xc295,	// (0x000a6561) cale_bg_pane_g1

0xc28d,	// (0x000a6559) cale_bg_pane_g2

0xc285,	// (0x000a6551) cale_bg_pane_g3

0xc2a5,	// (0x000a6571) cale_bg_pane_g4

0xc29d,	// (0x000a6569) cale_bg_pane_g5

0xc2ad,	// (0x000a6579) cale_bg_pane_g6

0xc2b5,	// (0x000a6581) cale_bg_pane_g7

0xc2c5,	// (0x000a6591) cale_bg_pane_g8

0xc2bd,	// (0x000a6589) cale_bg_pane_g9

0x0008,

0xf213,	// (0x000a94df) cale_bg_pane_g

0xccf6,	// (0x000a6fc2) list_cale_time_pane_ParamLimits

0xccf6,	// (0x000a6fc2) list_cale_time_pane

0xcd0d,	// (0x000a6fd9) list_cale_time_pane_g1_ParamLimits

0xcd0d,	// (0x000a6fd9) list_cale_time_pane_g1

0xcd19,	// (0x000a6fe5) list_cale_time_pane_g2_ParamLimits

0xcd19,	// (0x000a6fe5) list_cale_time_pane_g2

0x2235,	// (0x0009c501) list_cale_time_pane_g3_ParamLimits

0x2235,	// (0x0009c501) list_cale_time_pane_g3

0x2243,	// (0x0009c50f) list_cale_time_pane_g4_ParamLimits

0x2243,	// (0x0009c50f) list_cale_time_pane_g4

0x2251,	// (0x0009c51d) list_cale_time_pane_g5_ParamLimits

0x2251,	// (0x0009c51d) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x000a94f2) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x000a94f2) list_cale_time_pane_g

0xcd33,	// (0x000a6fff) list_cale_time_pane_t1_ParamLimits

0xcd33,	// (0x000a6fff) list_cale_time_pane_t1

0xcd5b,	// (0x000a7027) list_cale_time_pane_t2_ParamLimits

0xcd5b,	// (0x000a7027) list_cale_time_pane_t2

0x2503,	// (0x0009c7cf) aid_blid_cardinal_pane

0x2541,	// (0x0009c80d) compass_pane_t4

0xcd83,	// (0x000a704f) list_cale_time_pane_t4_ParamLimits

0xcd83,	// (0x000a704f) list_cale_time_pane_t4

0x254f,	// (0x0009c81b) compass_pane_t5

0x255f,	// (0x0009c82b) compass_pane_t6

0x256d,	// (0x0009c839) compass_pane_t7

0xd1a2,	// (0x000a746e) navi_pane_cc_t1

0xd2ef,	// (0x000a75bb) aid_phob_thumbnail_center_pane

0x2b2a,	// (0x0009cdf6) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x000a94ff) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x000a94ff) list_cale_time_pane_t

0x05ef,	// (0x0009a8bb) bg_popup_window_pane_cp02_ParamLimits

0x05ef,	// (0x0009a8bb) bg_popup_window_pane_cp02

0xcdab,	// (0x000a7077) heading_pane_cp01_ParamLimits

0xcdab,	// (0x000a7077) heading_pane_cp01

0xcdb7,	// (0x000a7083) loc_req_pane_ParamLimits

0xcdb7,	// (0x000a7083) loc_req_pane

0xcdc9,	// (0x000a7095) loc_type_pane_ParamLimits

0xcdc9,	// (0x000a7095) loc_type_pane

0xcddb,	// (0x000a70a7) loc_type_pane_t1_ParamLimits

0xcddb,	// (0x000a70a7) loc_type_pane_t1

0xcded,	// (0x000a70b9) loc_type_pane_t2_ParamLimits

0xcded,	// (0x000a70b9) loc_type_pane_t2

0xcdff,	// (0x000a70cb) loc_type_pane_t3_ParamLimits

0xcdff,	// (0x000a70cb) loc_type_pane_t3

0x0002,

0xf23a,	// (0x000a9506) loc_type_pane_t_ParamLimits

0xf23a,	// (0x000a9506) loc_type_pane_t

0xce11,	// (0x000a70dd) list_loc_req_pane

0xce1b,	// (0x000a70e7) scroll_pane_cp012

0x225f,	// (0x0009c52b) list_single_loc_request_popup_menu_pane_ParamLimits

0x225f,	// (0x0009c52b) list_single_loc_request_popup_menu_pane

0xce26,	// (0x000a70f2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xce26,	// (0x000a70f2) list_single_loc_request_popup_menu_pane_g1

0xce32,	// (0x000a70fe) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xce32,	// (0x000a70fe) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x000a950d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x000a950d) list_single_loc_request_popup_menu_pane_g

0xce3e,	// (0x000a710a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xce3e,	// (0x000a710a) list_single_loc_request_popup_menu_pane_t1

0xc07d,	// (0x000a6349) bg_popup_window_pane_cp03_ParamLimits

0xc07d,	// (0x000a6349) bg_popup_window_pane_cp03

0xce54,	// (0x000a7120) heading_loc_req_pane_ParamLimits

0xce54,	// (0x000a7120) heading_loc_req_pane

0x226c,	// (0x0009c538) popup_dyc_status_message_window_g1_ParamLimits

0x226c,	// (0x0009c538) popup_dyc_status_message_window_g1

0x2280,	// (0x0009c54c) popup_dyc_status_message_window_t1_ParamLimits

0x2280,	// (0x0009c54c) popup_dyc_status_message_window_t1

0x2295,	// (0x0009c561) popup_dyc_status_message_window_t2_ParamLimits

0x2295,	// (0x0009c561) popup_dyc_status_message_window_t2

0x22aa,	// (0x0009c576) popup_dyc_status_message_window_t3_ParamLimits

0x22aa,	// (0x0009c576) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x000a9512) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x000a9512) popup_dyc_status_message_window_t

0xbe22,	// (0x000a60ee) bg_heading_pane_cp01

0xce60,	// (0x000a712c) heading_loc_req_pane_g1

0xce68,	// (0x000a7134) heading_loc_req_pane_g2

0xce70,	// (0x000a713c) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x000a9519) heading_loc_req_pane_g

0xce78,	// (0x000a7144) heading_loc_req_pane_t1

0xce98,	// (0x000a7164) bg_popup_sub_pane_cp01_ParamLimits

0xce98,	// (0x000a7164) bg_popup_sub_pane_cp01

0xcea6,	// (0x000a7172) popup_cale_events_window_g1_ParamLimits

0xcea6,	// (0x000a7172) popup_cale_events_window_g1

0xcec6,	// (0x000a7192) popup_cale_events_window_g2_ParamLimits

0xcec6,	// (0x000a7192) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x000a953b) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x000a953b) popup_cale_events_window_g

0xcee6,	// (0x000a71b2) popup_cale_events_window_t1_ParamLimits

0xcee6,	// (0x000a71b2) popup_cale_events_window_t1

0xcef8,	// (0x000a71c4) popup_cale_events_window_t2_ParamLimits

0xcef8,	// (0x000a71c4) popup_cale_events_window_t2

0xcf36,	// (0x000a7202) popup_cale_events_window_t3_ParamLimits

0xcf36,	// (0x000a7202) popup_cale_events_window_t3

0xcf70,	// (0x000a723c) popup_cale_events_window_t4_ParamLimits

0xcf70,	// (0x000a723c) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x000a9540) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x000a9540) popup_cale_events_window_t

0x22d2,	// (0x0009c59e) call_type_pane

0x22e2,	// (0x0009c5ae) popup_call_status_window_g1

0x22f6,	// (0x0009c5c2) popup_call_status_window_g2

0x230a,	// (0x0009c5d6) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x000a9549) popup_call_status_window_g

0xcfa6,	// (0x000a7272) call_type_pane_g1

0xcfaf,	// (0x000a727b) call_type_pane_g2

0x0001,

0xf284,	// (0x000a9550) call_type_pane_g

0xbe22,	// (0x000a60ee) bg_popup_sub_pane_cp02

0xcfb8,	// (0x000a7284) listscroll_popup_wml_pane

0xcfc0,	// (0x000a728c) list_wml_pane

0xcfca,	// (0x000a7296) scroll_pane_cp013

0xcfd5,	// (0x000a72a1) list_single_graphic_popup_wml_pane_ParamLimits

0xcfd5,	// (0x000a72a1) list_single_graphic_popup_wml_pane

0xc095,	// (0x000a6361) list_single_graphic_popup_wml_pane_g1

0xcfe9,	// (0x000a72b5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x000a9555) list_single_graphic_popup_wml_pane_g

0xcff1,	// (0x000a72bd) list_single_graphic_popup_wml_pane_t1

0xd007,	// (0x000a72d3) aid_call_pane

0xc075,	// (0x000a6341) popup_clock_analogue_window_g1

0xc075,	// (0x000a6341) popup_clock_analogue_window_g2

0xa4d9,	// (0x000a47a5) popup_clock_analogue_window_g3

0xa4d9,	// (0x000a47a5) popup_clock_analogue_window_g4

0xc095,	// (0x000a6361) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x000a955a) popup_clock_analogue_window_g

0xa4e1,	// (0x000a47ad) popup_clock_analogue_window_t1

0xa4ef,	// (0x000a47bb) clock_digital_number_pane_ParamLimits

0xa4ef,	// (0x000a47bb) clock_digital_number_pane

0xa4fb,	// (0x000a47c7) clock_digital_number_pane_cp02_ParamLimits

0xa4fb,	// (0x000a47c7) clock_digital_number_pane_cp02

0xa507,	// (0x000a47d3) clock_digital_number_pane_cp03_ParamLimits

0xa507,	// (0x000a47d3) clock_digital_number_pane_cp03

0xa513,	// (0x000a47df) clock_digital_number_pane_cp04_ParamLimits

0xa513,	// (0x000a47df) clock_digital_number_pane_cp04

0xa51f,	// (0x000a47eb) clock_digital_separator_pane_ParamLimits

0xa51f,	// (0x000a47eb) clock_digital_separator_pane

0xa52b,	// (0x000a47f7) popup_clock_digital_window_t1

0xc095,	// (0x000a6361) clock_digital_number_pane_g1

0xc095,	// (0x000a6361) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x000a94da) clock_digital_number_pane_g

0xc095,	// (0x000a6361) clock_digital_separator_pane_g1

0xc095,	// (0x000a6361) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x000a94da) clock_digital_separator_pane_g

0xbe22,	// (0x000a60ee) bg_popup_window_pane_cp04

0xd00f,	// (0x000a72db) heading_pane_cp03

0xc37f,	// (0x000a664b) listscroll_popup_gms_pane

0xbe22,	// (0x000a60ee) grid_large_graphic_popup_pane

0xd017,	// (0x000a72e3) listscroll_popup_gms_pane_g1

0xd020,	// (0x000a72ec) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x000a9565) listscroll_popup_gms_pane_g

0xd029,	// (0x000a72f5) scroll_pane_cp014

0xc0ea,	// (0x000a63b6) cell_large_graphic_popup_pane_ParamLimits

0xc0ea,	// (0x000a63b6) cell_large_graphic_popup_pane

0xc0f8,	// (0x000a63c4) cell_large_graphic_popup_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) cell_large_graphic_popup_pane_g1

0xd032,	// (0x000a72fe) cell_large_graphic_popup_pane_g2_ParamLimits

0xd032,	// (0x000a72fe) cell_large_graphic_popup_pane_g2

0xd040,	// (0x000a730c) cell_large_graphic_popup_pane_g3_ParamLimits

0xd040,	// (0x000a730c) cell_large_graphic_popup_pane_g3

0xd04e,	// (0x000a731a) cell_large_graphic_popup_pane_g4_ParamLimits

0xd04e,	// (0x000a731a) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x000a956a) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x000a956a) cell_large_graphic_popup_pane_g

0xbe22,	// (0x000a60ee) grid_highlight_pane_cp010

0xc095,	// (0x000a6361) bg_popup_call_pane_g1

0xd05f,	// (0x000a732b) list_single_graphic_popup_conf_pane_ParamLimits

0xd05f,	// (0x000a732b) list_single_graphic_popup_conf_pane

0xd071,	// (0x000a733d) list_highlight_pane_cp01

0xd07a,	// (0x000a7346) list_single_graphic_popup_conf_pane_g1

0xd082,	// (0x000a734e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x000a9573) list_single_graphic_popup_conf_pane_g

0xd08a,	// (0x000a7356) list_single_graphic_popup_conf_pane_t1

0xd098,	// (0x000a7364) linegrid_cams_pane_g1

0x231a,	// (0x0009c5e6) linegrid_cams_pane_g2

0xc365,	// (0x000a6631) linegrid_cams_pane_g3

0xd0a1,	// (0x000a736d) linegrid_cams_pane_g4

0x2323,	// (0x0009c5ef) linegrid_cams_pane_g5

0x232c,	// (0x0009c5f8) linegrid_cams_pane_g6

0xc36e,	// (0x000a663a) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x000a9578) linegrid_cams_pane_g

0xd0aa,	// (0x000a7376) popup_clock_analogue_window

0xd0aa,	// (0x000a7376) popup_clock_digital_window

0xbe22,	// (0x000a60ee) popup_phob_thumbnail_window

0xc095,	// (0x000a6361) call_video_uplink_pane_g1

0xd0b3,	// (0x000a737f) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x000a9587) call_video_uplink_pane_g

0xd0bb,	// (0x000a7387) video_uplink_pane

0xd0c3,	// (0x000a738f) mce_image_pane_g1

0x2337,	// (0x0009c603) mce_image_pane_g2

0x2341,	// (0x0009c60d) mce_image_pane_g3

0x234b,	// (0x0009c617) mce_image_pane_g4

0x2353,	// (0x0009c61f) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x000a958c) mce_image_pane_g

0xd0cd,	// (0x000a7399) control_top_pane_stacon_cp01_ParamLimits

0xd0cd,	// (0x000a7399) control_top_pane_stacon_cp01

0xd0e1,	// (0x000a73ad) uni_indicator_pane_stacon_cp01_ParamLimits

0xd0e1,	// (0x000a73ad) uni_indicator_pane_stacon_cp01

0xd0f2,	// (0x000a73be) bg_popup_sub_pane_cp03

0x235b,	// (0x0009c627) chi_dic_find_pane

0x2363,	// (0x0009c62f) listscroll_chi_dic_pane

0x236c,	// (0x0009c638) main_pane_chidic_g1

0x237f,	// (0x0009c64b) chi_dic_find_pane_t1

0xd0fc,	// (0x000a73c8) find_chidic_pane

0xd105,	// (0x000a73d1) chi_dic_list_pane_ParamLimits

0xd105,	// (0x000a73d1) chi_dic_list_pane

0xd116,	// (0x000a73e2) scroll_pane_cp020

0x238d,	// (0x0009c659) find_chidic_pane_t1

0xbe22,	// (0x000a60ee) input_focus_pane_cp06

0x239c,	// (0x0009c668) list_chi_dic_pane_ParamLimits

0x239c,	// (0x0009c668) list_chi_dic_pane

0x23ae,	// (0x0009c67a) list_chi_dic_pane_t1_ParamLimits

0x23ae,	// (0x0009c67a) list_chi_dic_pane_t1

0xbe22,	// (0x000a60ee) list_highlight_pane_cp020

0xd11e,	// (0x000a73ea) bg_cale_heading_pane_g1

0x23c1,	// (0x0009c68d) bg_cale_heading_pane_g2

0x23c9,	// (0x0009c695) bg_cale_heading_pane_g3

0x23d1,	// (0x0009c69d) bg_cale_heading_pane_g4

0x23db,	// (0x0009c6a7) bg_cale_heading_pane_g5

0x23e5,	// (0x0009c6b1) bg_cale_heading_pane_g6

0x23ed,	// (0x0009c6b9) bg_cale_heading_pane_g7

0x23f5,	// (0x0009c6c1) bg_cale_heading_pane_g8

0x23ff,	// (0x0009c6cb) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x000a9597) bg_cale_heading_pane_g

0xd11e,	// (0x000a73ea) bg_cale_side_pane_g1

0x2409,	// (0x0009c6d5) bg_cale_side_pane_g2

0x2413,	// (0x0009c6df) bg_cale_side_pane_g3

0x241d,	// (0x0009c6e9) bg_cale_side_pane_g4

0x2427,	// (0x0009c6f3) bg_cale_side_pane_g5

0x2431,	// (0x0009c6fd) bg_cale_side_pane_g6

0x243b,	// (0x0009c707) bg_cale_side_pane_g7

0x2445,	// (0x0009c711) bg_cale_side_pane_g8

0x244d,	// (0x0009c719) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x000a95aa) bg_cale_side_pane_g

0x2455,	// (0x0009c721) popup_call_status_window_ParamLimits

0x2455,	// (0x0009c721) popup_call_status_window

0xd126,	// (0x000a73f2) stacon_top_pane

0xd12e,	// (0x000a73fa) status_pane_ParamLimits

0xd12e,	// (0x000a73fa) status_pane

0xd143,	// (0x000a740f) status_small_pane

0xd14b,	// (0x000a7417) control_pane

0xbe22,	// (0x000a60ee) stacon_bottom_pane

0xd153,	// (0x000a741f) list_single_mce_smart_pane_t1_ParamLimits

0xd153,	// (0x000a741f) list_single_mce_smart_pane_t1

0xd166,	// (0x000a7432) list_single_mce_smart_pane_t2_ParamLimits

0xd166,	// (0x000a7432) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x000a95bd) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x000a95bd) list_single_mce_smart_pane_t

0x24a2,	// (0x0009c76e) compass_pane

0x24ad,	// (0x0009c779) main_location2_pane_t1

0x24c3,	// (0x0009c78f) main_location2_pane_t2

0x24d9,	// (0x0009c7a5) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x000a95c2) main_location2_pane_t

0xd185,	// (0x000a7451) compass_pane_g1_ParamLimits

0xd185,	// (0x000a7451) compass_pane_g1

0x2523,	// (0x0009c7ef) compass_pane_t1

0x2532,	// (0x0009c7fe) compass_pane_t2

0x0005,

0xf2ff,	// (0x000a95cb) compass_pane_t

0x257d,	// (0x0009c849) text_secondary_cp61

0xd199,	// (0x000a7465) navi_pane_cams_g5

0xd1bc,	// (0x000a7488) navi_pane_im_t1

0xd1ca,	// (0x000a7496) navi_pane_mp_g1_ParamLimits

0xd1ca,	// (0x000a7496) navi_pane_mp_g1

0xd1de,	// (0x000a74aa) navi_pane_mp_g2_ParamLimits

0xd1de,	// (0x000a74aa) navi_pane_mp_g2

0xd1ea,	// (0x000a74b6) navi_pane_mp_g3_ParamLimits

0xd1ea,	// (0x000a74b6) navi_pane_mp_g3

0x0002,

0xf313,	// (0x000a95df) navi_pane_mp_g_ParamLimits

0xf313,	// (0x000a95df) navi_pane_mp_g

0xd1f6,	// (0x000a74c2) navi_pane_mp_t1

0xd204,	// (0x000a74d0) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x000a95e6) navi_pane_mp_t

0xd240,	// (0x000a750c) navi_pane_vt_g1

0xd1f6,	// (0x000a74c2) navi_pane_vt_t1

0xd248,	// (0x000a7514) navi_slider_pane

0xc37f,	// (0x000a664b) zooming_pane

0xd250,	// (0x000a751c) navi_slider_pane_g1

0xa548,	// (0x000a4814) navi_slider_pane_g2

0x0006,

0xf321,	// (0x000a95ed) navi_slider_pane_g

0xd274,	// (0x000a7540) aid_levels_zoom

0xd27c,	// (0x000a7548) zooming_pane_g1

0xd284,	// (0x000a7550) zooming_pane_g2

0xd284,	// (0x000a7550) zooming_pane_g3

0x0002,

0xf330,	// (0x000a95fc) zooming_pane_g

0xd28c,	// (0x000a7558) level_10_zoom

0xd295,	// (0x000a7561) level_11_zoom

0xd29e,	// (0x000a756a) level_1_zoom

0xd2a7,	// (0x000a7573) level_2_zoom

0xd2b0,	// (0x000a757c) level_3_zoom

0xd2b9,	// (0x000a7585) level_4_zoom

0xd2c2,	// (0x000a758e) level_5_zoom

0xd2cb,	// (0x000a7597) level_6_zoom

0xd2d4,	// (0x000a75a0) level_7_zoom

0xd2dd,	// (0x000a75a9) level_8_zoom

0xd2e6,	// (0x000a75b2) level_9_zoom

0xd2f7,	// (0x000a75c3) popup_phob_thumbnail_window_g1

0xd2ff,	// (0x000a75cb) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x000a9603) popup_phob_thumbnail_window_g

0x3174,	// (0x0009d440) level_1_location

0x317c,	// (0x0009d448) level_2_location

0x3184,	// (0x0009d450) level_3_location

0x318e,	// (0x0009d45a) level_4_location

0xc37f,	// (0x000a664b) level_5_location

0x26c6,	// (0x0009c992) mce_icon_pane_g1

0x26d0,	// (0x0009c99c) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x000a9608) mce_icon_pane_g

0xd307,	// (0x000a75d3) main_mup_pane_g1_ParamLimits

0xd307,	// (0x000a75d3) main_mup_pane_g1

0xd307,	// (0x000a75d3) main_mup_pane_g2_ParamLimits

0xd307,	// (0x000a75d3) main_mup_pane_g2

0xd307,	// (0x000a75d3) main_mup_pane_g3_ParamLimits

0xd307,	// (0x000a75d3) main_mup_pane_g3

0xd307,	// (0x000a75d3) main_mup_pane_g4_ParamLimits

0xd307,	// (0x000a75d3) main_mup_pane_g4

0xd307,	// (0x000a75d3) main_mup_pane_g5_ParamLimits

0xd307,	// (0x000a75d3) main_mup_pane_g5

0xd307,	// (0x000a75d3) main_mup_pane_g6_ParamLimits

0xd307,	// (0x000a75d3) main_mup_pane_g6

0xd307,	// (0x000a75d3) main_mup_pane_g7_ParamLimits

0xd307,	// (0x000a75d3) main_mup_pane_g7

0xd307,	// (0x000a75d3) main_mup_pane_g8_ParamLimits

0xd307,	// (0x000a75d3) main_mup_pane_g8

0xd307,	// (0x000a75d3) main_mup_pane_g9_ParamLimits

0xd307,	// (0x000a75d3) main_mup_pane_g9

0xd307,	// (0x000a75d3) main_mup_pane_g10_ParamLimits

0xd307,	// (0x000a75d3) main_mup_pane_g10

0xd307,	// (0x000a75d3) main_mup_pane_g11_ParamLimits

0xd307,	// (0x000a75d3) main_mup_pane_g11

0xc0f8,	// (0x000a63c4) main_mup_pane_g12_ParamLimits

0xc0f8,	// (0x000a63c4) main_mup_pane_g12

0xd307,	// (0x000a75d3) main_mup_pane_g13_ParamLimits

0xd307,	// (0x000a75d3) main_mup_pane_g13

0x000c,

0xf341,	// (0x000a960d) main_mup_pane_g_ParamLimits

0xf341,	// (0x000a960d) main_mup_pane_g

0xd315,	// (0x000a75e1) main_mup_pane_t1_ParamLimits

0xd315,	// (0x000a75e1) main_mup_pane_t1

0xd315,	// (0x000a75e1) main_mup_pane_t2_ParamLimits

0xd315,	// (0x000a75e1) main_mup_pane_t2

0xd315,	// (0x000a75e1) main_mup_pane_t3_ParamLimits

0xd315,	// (0x000a75e1) main_mup_pane_t3

0xc140,	// (0x000a640c) main_mup_pane_t4_ParamLimits

0xc140,	// (0x000a640c) main_mup_pane_t4

0xc140,	// (0x000a640c) main_mup_pane_t5_ParamLimits

0xc140,	// (0x000a640c) main_mup_pane_t5

0xc154,	// (0x000a6420) main_mup_pane_t6_ParamLimits

0xc154,	// (0x000a6420) main_mup_pane_t6

0x0005,

0xf35c,	// (0x000a9628) main_mup_pane_t_ParamLimits

0xf35c,	// (0x000a9628) main_mup_pane_t

0xc0ea,	// (0x000a63b6) mup_progress_pane_ParamLimits

0xc0ea,	// (0x000a63b6) mup_progress_pane

0xd329,	// (0x000a75f5) mup_visualizer_pane_ParamLimits

0xd329,	// (0x000a75f5) mup_visualizer_pane

0xd329,	// (0x000a75f5) mup_volume_pane_ParamLimits

0xd329,	// (0x000a75f5) mup_volume_pane

0xc106,	// (0x000a63d2) mup_visualizer_pane_g1_ParamLimits

0xc106,	// (0x000a63d2) mup_visualizer_pane_g1

0xd337,	// (0x000a7603) mup_visualizer_pane_g2_ParamLimits

0xd337,	// (0x000a7603) mup_visualizer_pane_g2

0xc0f8,	// (0x000a63c4) mup_visualizer_pane_g3_ParamLimits

0xc0f8,	// (0x000a63c4) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x000a9635) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x000a9635) mup_visualizer_pane_g

0xc136,	// (0x000a6402) mup_volume_pane_g1

0xc136,	// (0x000a6402) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x000a9358) mup_volume_pane_g

0xc136,	// (0x000a6402) mup_progress_pane_g1

0xc136,	// (0x000a6402) mup_progress_pane_g2

0xc136,	// (0x000a6402) mup_progress_pane_g3

0x0002,

0xf370,	// (0x000a963c) mup_progress_pane_g

0xbe22,	// (0x000a60ee) bg_popup_window_pane_cp05

0xd345,	// (0x000a7611) heading_pane_cp02_ParamLimits

0xd345,	// (0x000a7611) heading_pane_cp02

0xd361,	// (0x000a762d) list_popup_blid_pane

0xd369,	// (0x000a7635) list_blid_sat_info_pane_ParamLimits

0xd369,	// (0x000a7635) list_blid_sat_info_pane

0xd37c,	// (0x000a7648) list_blid_sat_info_pane_g1

0xd384,	// (0x000a7650) list_blid_sat_info_pane_t1

0x27e4,	// (0x0009cab0) mup_equalizer_pane_ParamLimits

0x27e4,	// (0x0009cab0) mup_equalizer_pane

0x2805,	// (0x0009cad1) mup_equalizer_pane_cp1_ParamLimits

0x2805,	// (0x0009cad1) mup_equalizer_pane_cp1

0x2826,	// (0x0009caf2) mup_equalizer_pane_cp2_ParamLimits

0x2826,	// (0x0009caf2) mup_equalizer_pane_cp2

0x284b,	// (0x0009cb17) mup_equalizer_pane_cp3_ParamLimits

0x284b,	// (0x0009cb17) mup_equalizer_pane_cp3

0x2874,	// (0x0009cb40) mup_equalizer_pane_cp4_ParamLimits

0x2874,	// (0x0009cb40) mup_equalizer_pane_cp4

0x289d,	// (0x0009cb69) mup_equalizer_pane_cp5

0x28b5,	// (0x0009cb81) mup_equalizer_pane_cp6

0x28cd,	// (0x0009cb99) mup_equalizer_pane_cp7

0xe427,	// (0x000a86f3) bg_popup_call_poc_act_pane_g9

0xe42f,	// (0x000a86fb) bg_popup_call_poc_act_pane_g10

0xe437,	// (0x000a8703) bg_popup_call_poc_act_pane_g11

0x000a,

0xc07d,	// (0x000a6349) mup_scale_pane

0xc095,	// (0x000a6361) mup_scale_pane_g1

0xd392,	// (0x000a765e) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x000a9658) mup_scale_pane_g

0xd3b6,	// (0x000a7682) msg_data_pane

0xd3be,	// (0x000a768a) scroll_pane_cp017

0x28f7,	// (0x0009cbc3) bg_list_pane_cp04_ParamLimits

0x28f7,	// (0x0009cbc3) bg_list_pane_cp04

0xd3c6,	// (0x000a7692) msg_data_pane_g1

0x291f,	// (0x0009cbeb) msg_data_pane_g2

0x2929,	// (0x0009cbf5) msg_data_pane_g3

0x2933,	// (0x0009cbff) msg_data_pane_g4

0x293b,	// (0x0009cc07) msg_data_pane_g5

0x2943,	// (0x0009cc0f) msg_data_pane_g6

0x294b,	// (0x0009cc17) msg_data_pane_g7

0x0006,

0xf39b,	// (0x000a9667) msg_data_pane_g

0x2953,	// (0x0009cc1f) msg_text_pane_ParamLimits

0x2953,	// (0x0009cc1f) msg_text_pane

0x298f,	// (0x0009cc5b) qrid_highlight_pane_cp011_ParamLimits

0x298f,	// (0x0009cc5b) qrid_highlight_pane_cp011

0xbe22,	// (0x000a60ee) msg_body_pane

0xc07d,	// (0x000a6349) msg_header_pane

0xd3e2,	// (0x000a76ae) input_focus_pane_cp07

0x29b3,	// (0x0009cc7f) msg_header_pane_t1_ParamLimits

0x29b3,	// (0x0009cc7f) msg_header_pane_t1

0x29cf,	// (0x0009cc9b) msg_header_pane_t2_ParamLimits

0x29cf,	// (0x0009cc9b) msg_header_pane_t2

0x0001,

0xf3af,	// (0x000a967b) msg_header_pane_t_ParamLimits

0xf3af,	// (0x000a967b) msg_header_pane_t

0xd403,	// (0x000a76cf) msg_body_pane_g1

0x29ef,	// (0x0009ccbb) msg_body_pane_t1_ParamLimits

0x29ef,	// (0x0009ccbb) msg_body_pane_t1

0x2a20,	// (0x0009ccec) msg_body_pane_t2_ParamLimits

0x2a20,	// (0x0009ccec) msg_body_pane_t2

0x2a32,	// (0x0009ccfe) msg_body_pane_t3_ParamLimits

0x2a32,	// (0x0009ccfe) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x000a9680) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x000a9680) msg_body_pane_t

0x2a7e,	// (0x0009cd4a) main_viewer_pane_g1_ParamLimits

0x2a7e,	// (0x0009cd4a) main_viewer_pane_g1

0x2a8c,	// (0x0009cd58) main_viewer_pane_g2_ParamLimits

0x2a8c,	// (0x0009cd58) main_viewer_pane_g2

0x2a9a,	// (0x0009cd66) main_viewer_pane_g3_ParamLimits

0x2a9a,	// (0x0009cd66) main_viewer_pane_g3

0x2aa9,	// (0x0009cd75) main_viewer_pane_g4_ParamLimits

0x2aa9,	// (0x0009cd75) main_viewer_pane_g4

0xa572,	// (0x000a483e) main_viewer_pane_g5_ParamLimits

0xa572,	// (0x000a483e) main_viewer_pane_g5

0xa572,	// (0x000a483e) main_viewer_pane_g7_ParamLimits

0xa572,	// (0x000a483e) main_viewer_pane_g7

0xa584,	// (0x000a4850) main_viewer_pane_g8_ParamLimits

0xa584,	// (0x000a4850) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x000a9690) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x000a9690) main_viewer_pane_g

0xd40b,	// (0x000a76d7) viewer_content_pane_ParamLimits

0xd40b,	// (0x000a76d7) viewer_content_pane

0x2ae7,	// (0x0009cdb3) main_postcard_pane_g1_ParamLimits

0x2ae7,	// (0x0009cdb3) main_postcard_pane_g1

0x2afd,	// (0x0009cdc9) main_postcard_pane_g2_ParamLimits

0x2afd,	// (0x0009cdc9) main_postcard_pane_g2

0x2b13,	// (0x0009cddf) main_postcard_pane_g3_ParamLimits

0x2b13,	// (0x0009cddf) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x000a96a1) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x000a96a1) main_postcard_pane_g

0x2b2a,	// (0x0009cdf6) main_postcard_pane_g4

0xe565,	// (0x000a8831) smil_status_volume_pane_g2

0x2b6d,	// (0x0009ce39) postcard_pane_ParamLimits

0x2b6d,	// (0x0009ce39) postcard_pane

0xd419,	// (0x000a76e5) postcard_pane_g1_ParamLimits

0xd419,	// (0x000a76e5) postcard_pane_g1

0x2bbd,	// (0x0009ce89) postcard_pane_g2_ParamLimits

0x2bbd,	// (0x0009ce89) postcard_pane_g2

0x2bc9,	// (0x0009ce95) postcard_pane_g3_ParamLimits

0x2bc9,	// (0x0009ce95) postcard_pane_g3

0xd427,	// (0x000a76f3) postcard_pane_g4_ParamLimits

0xd427,	// (0x000a76f3) postcard_pane_g4

0x2bd5,	// (0x0009cea1) postcard_pane_g5_ParamLimits

0x2bd5,	// (0x0009cea1) postcard_pane_g5

0x2bea,	// (0x0009ceb6) postcard_pane_g6_ParamLimits

0x2bea,	// (0x0009ceb6) postcard_pane_g6

0xd419,	// (0x000a76e5) postcard_pane_g7_ParamLimits

0xd419,	// (0x000a76e5) postcard_pane_g7

0x0006,

0xf3e2,	// (0x000a96ae) postcard_pane_g_ParamLimits

0xf3e2,	// (0x000a96ae) postcard_pane_g

0x2c02,	// (0x0009cece) main_mp2_pane_g1_ParamLimits

0x2c02,	// (0x0009cece) main_mp2_pane_g1

0x2c10,	// (0x0009cedc) main_mp2_pane_g2_ParamLimits

0x2c10,	// (0x0009cedc) main_mp2_pane_g2

0x2c1c,	// (0x0009cee8) main_mp2_pane_g3_ParamLimits

0x2c1c,	// (0x0009cee8) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x000a96bd) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x000a96bd) main_mp2_pane_g

0x2c28,	// (0x0009cef4) main_mp2_pane_t1_ParamLimits

0x2c28,	// (0x0009cef4) main_mp2_pane_t1

0x2c3f,	// (0x0009cf0b) main_mp2_pane_t2_ParamLimits

0x2c3f,	// (0x0009cf0b) main_mp2_pane_t2

0x2c51,	// (0x0009cf1d) main_mp2_pane_t3_ParamLimits

0x2c51,	// (0x0009cf1d) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x000a96c4) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x000a96c4) main_mp2_pane_t

0xa438,	// (0x000a4704) pec_content_pane_ParamLimits

0xa438,	// (0x000a4704) pec_content_pane

0x02c8,	// (0x0009a594) scroll_pane_cp015

0xd329,	// (0x000a75f5) pec_attribute_pane_ParamLimits

0xd329,	// (0x000a75f5) pec_attribute_pane

0xc0f8,	// (0x000a63c4) pec_content_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) pec_content_pane_g1

0xd435,	// (0x000a7701) pec_content_pane_t1_ParamLimits

0xd435,	// (0x000a7701) pec_content_pane_t1

0xd449,	// (0x000a7715) pec_content_pane_t2_ParamLimits

0xd449,	// (0x000a7715) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x000a96cb) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x000a96cb) pec_content_pane_t

0xc0ea,	// (0x000a63b6) list_single_graphic_pane_cp01_ParamLimits

0xc0ea,	// (0x000a63b6) list_single_graphic_pane_cp01

0xc07d,	// (0x000a6349) bg_popup_sub_pane_cp04

0xd45d,	// (0x000a7729) popup_mup_playback_window_g1

0xd469,	// (0x000a7735) popup_mup_playback_window_t1

0xd47e,	// (0x000a774a) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x000a96d0) popup_mup_playback_window_t

0xd4b5,	// (0x000a7781) main_image_pane_g1_ParamLimits

0xd4b5,	// (0x000a7781) main_image_pane_g1

0xd4f8,	// (0x000a77c4) scroll_pane_cp018_ParamLimits

0xd4f8,	// (0x000a77c4) scroll_pane_cp018

0xd510,	// (0x000a77dc) scroll_pane_cp016_ParamLimits

0xd510,	// (0x000a77dc) scroll_pane_cp016

0x2d1b,	// (0x0009cfe7) smil2_image_pane_ParamLimits

0x2d1b,	// (0x0009cfe7) smil2_image_pane

0x2d51,	// (0x0009d01d) smil2_root_pane_ParamLimits

0x2d51,	// (0x0009d01d) smil2_root_pane

0x2d89,	// (0x0009d055) smil2_text_pane_ParamLimits

0x2d89,	// (0x0009d055) smil2_text_pane

0x02c8,	// (0x0009a594) bg_list_pane_cp06

0x02c8,	// (0x0009a594) grid_radio_pane

0xbe22,	// (0x000a60ee) bg_popup_window_pane_cp06

0xce88,	// (0x000a7154) main_fmradio_pane_t1

0xd00f,	// (0x000a72db) heading_pane_cp04

0xce88,	// (0x000a7154) main_fmradio_pane_t2

0xe43f,	// (0x000a870b) popup_cale_lunar_info_window_g1

0xce88,	// (0x000a7154) main_fmradio_pane_t3

0xe447,	// (0x000a8713) popup_cale_lunar_info_window_g2

0xce88,	// (0x000a7154) main_fmradio_pane_t4

0x0001,

0xce88,	// (0x000a7154) main_fmradio_pane_t5

0x0004,

0xf4c1,	// (0x000a978d) popup_cale_lunar_info_window_g

0xf264,	// (0x000a9530) main_fmradio_pane_t

0x02c8,	// (0x0009a594) wait_bar_pane_cp03

0xc0ea,	// (0x000a63b6) cell_fmradio_pane_ParamLimits

0xc0ea,	// (0x000a63b6) cell_fmradio_pane

0xc0f8,	// (0x000a63c4) cell_fmradio_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) cell_fmradio_pane_g1

0x02c8,	// (0x0009a594) grid_highlight_pane_cp011

0xd544,	// (0x000a7810) poc_content_pane_ParamLimits

0xd544,	// (0x000a7810) poc_content_pane

0xd556,	// (0x000a7822) scroll_pane_cp019

0x2e19,	// (0x0009d0e5) popup_call_poc_act_window_ParamLimits

0x2e19,	// (0x0009d0e5) popup_call_poc_act_window

0x2e3d,	// (0x0009d109) popup_call_poc_inact_window_ParamLimits

0x2e3d,	// (0x0009d109) popup_call_poc_inact_window

0xf49d,	// (0x000a9769) bg_popup_call_poc_act_pane_g

0xe3b7,	// (0x000a8683) bg_popup_call_poc_inact_pane_g1

0xe3bf,	// (0x000a868b) bg_popup_call_poc_inact_pane_g2

0xd55e,	// (0x000a782a) popup_call_poc_act_window_g2

0xe3c7,	// (0x000a8693) bg_popup_call_poc_inact_pane_g3

0xe3cf,	// (0x000a869b) bg_popup_call_poc_inact_pane_g4

0xe3d7,	// (0x000a86a3) bg_popup_call_poc_inact_pane_g5

0xd566,	// (0x000a7832) popup_call_poc_act_window_t1_ParamLimits

0xd566,	// (0x000a7832) popup_call_poc_act_window_t1

0xd58e,	// (0x000a785a) popup_call_poc_act_window_t2_ParamLimits

0xd58e,	// (0x000a785a) popup_call_poc_act_window_t2

0xd5b6,	// (0x000a7882) popup_call_poc_act_window_t3_ParamLimits

0xd5b6,	// (0x000a7882) popup_call_poc_act_window_t3

0xd5de,	// (0x000a78aa) popup_call_poc_act_window_t4_ParamLimits

0xd5de,	// (0x000a78aa) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x000a96e5) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x000a96e5) popup_call_poc_act_window_t

0xe3df,	// (0x000a86ab) bg_popup_call_poc_inact_pane_g6

0xe3e7,	// (0x000a86b3) bg_popup_call_poc_inact_pane_g7

0xe3ef,	// (0x000a86bb) bg_popup_call_poc_inact_pane_g8

0xd5f0,	// (0x000a78bc) popup_call_poc_inact_window_g2

0xe3f7,	// (0x000a86c3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48a,	// (0x000a9756) bg_popup_call_poc_inact_pane_g

0xd5f8,	// (0x000a78c4) popup_call_poc_inact_window_t1_ParamLimits

0xd5f8,	// (0x000a78c4) popup_call_poc_inact_window_t1

0xd60d,	// (0x000a78d9) popup_call_poc_inact_window_t2_ParamLimits

0xd60d,	// (0x000a78d9) popup_call_poc_inact_window_t2

0xd622,	// (0x000a78ee) popup_call_poc_inact_window_t3_ParamLimits

0xd622,	// (0x000a78ee) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x000a96ee) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x000a96ee) popup_call_poc_inact_window_t

0xe4dd,	// (0x000a87a9) context_pane_ParamLimits

0x3691,	// (0x0009d95d) signal_pane_ParamLimits

0xc37f,	// (0x000a664b) main_call2_pane

0xa5d5,	// (0x000a48a1) popup_phob_thumbnail2_window_ParamLimits

0xa5d5,	// (0x000a48a1) popup_phob_thumbnail2_window

0xa55a,	// (0x000a4826) aid_hotspot_pointer_arrow_pane

0xa562,	// (0x000a482e) aid_hotspot_pointer_hand_pane

0x313c,	// (0x0009d408) phob_pre_status_pane_g5

0xa438,	// (0x000a4704) cams_zoom_pane_ParamLimits

0xa438,	// (0x000a4704) image_vga_pane_ParamLimits

0xc0f8,	// (0x000a63c4) main_camera_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) main_camera_pane_g2_ParamLimits

0xc0f8,	// (0x000a63c4) main_camera_pane_g3_ParamLimits

0xc0f8,	// (0x000a63c4) main_camera_pane_g4_ParamLimits

0xc0f8,	// (0x000a63c4) main_camera_pane_g5_ParamLimits

0xc0f8,	// (0x000a63c4) main_camera_pane_g6_ParamLimits

0xc0f8,	// (0x000a63c4) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x000a9429) main_camera_pane_g_ParamLimits

0xc140,	// (0x000a640c) main_camera_pane_t1_ParamLimits

0xc140,	// (0x000a640c) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x000a943a) main_camera_pane_t_ParamLimits

0xc07d,	// (0x000a6349) bg_popup_preview_window_pane_cp01_ParamLimits

0xc07d,	// (0x000a6349) bg_popup_preview_window_pane_cp01

0xd637,	// (0x000a7903) popup_phob_thumbnail2_window_g1_ParamLimits

0xd637,	// (0x000a7903) popup_phob_thumbnail2_window_g1

0xbe22,	// (0x000a60ee) call2_cli_visual_pane

0x2e71,	// (0x0009d13d) popup_call2_audio_conf_window_ParamLimits

0x2e71,	// (0x0009d13d) popup_call2_audio_conf_window

0x2e99,	// (0x0009d165) popup_call2_audio_first_window_ParamLimits

0x2e99,	// (0x0009d165) popup_call2_audio_first_window

0x2f2f,	// (0x0009d1fb) popup_call2_audio_in_window_ParamLimits

0x2f2f,	// (0x0009d1fb) popup_call2_audio_in_window

0x2f7b,	// (0x0009d247) popup_call2_audio_out_window_ParamLimits

0x2f7b,	// (0x0009d247) popup_call2_audio_out_window

0x2fed,	// (0x0009d2b9) popup_call2_audio_second_window_ParamLimits

0x2fed,	// (0x0009d2b9) popup_call2_audio_second_window

0x3053,	// (0x0009d31f) popup_call2_audio_wait_window_ParamLimits

0x3053,	// (0x0009d31f) popup_call2_audio_wait_window

0xbe22,	// (0x000a60ee) bg_popup_call2_act_pane_cp03

0xc05f,	// (0x000a632b) list_conf_pane_cp

0xd643,	// (0x000a790f) popup_call2_audio_conf_window_t1

0xd651,	// (0x000a791d) list_single_graphic_popup_conf2_pane_ParamLimits

0xd651,	// (0x000a791d) list_single_graphic_popup_conf2_pane

0xd071,	// (0x000a733d) list_highlight_pane_cp04

0xd664,	// (0x000a7930) list_single_graphic_popup_conf2_pane_g1

0xd082,	// (0x000a734e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x000a96f5) list_single_graphic_popup_conf2_pane_g

0xd66e,	// (0x000a793a) list_single_graphic_popup_conf2_pane_t1

0xd67c,	// (0x000a7948) bg_popup_call2_act_pane_cp01_ParamLimits

0xd67c,	// (0x000a7948) bg_popup_call2_act_pane_cp01

0xd706,	// (0x000a79d2) call_type_pane_cp05_ParamLimits

0xd706,	// (0x000a79d2) call_type_pane_cp05

0xd75a,	// (0x000a7a26) popup_call2_audio_second_window_g1_ParamLimits

0xd75a,	// (0x000a7a26) popup_call2_audio_second_window_g1

0xd7ae,	// (0x000a7a7a) popup_call2_audio_second_window_g2_ParamLimits

0xd7ae,	// (0x000a7a7a) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x000a96fa) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x000a96fa) popup_call2_audio_second_window_g

0xd813,	// (0x000a7adf) popup_call2_audio_second_window_t1_ParamLimits

0xd813,	// (0x000a7adf) popup_call2_audio_second_window_t1

0xd8ce,	// (0x000a7b9a) popup_call2_audio_second_window_t2_ParamLimits

0xd8ce,	// (0x000a7b9a) popup_call2_audio_second_window_t2

0xd921,	// (0x000a7bed) popup_call2_audio_second_window_t3_ParamLimits

0xd921,	// (0x000a7bed) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x000a9701) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x000a9701) popup_call2_audio_second_window_t

0xbe22,	// (0x000a60ee) bg_popup_call2_in_pane_cp02

0xbe2c,	// (0x000a60f8) call_type_pane_cp04

0x308d,	// (0x0009d359) popup_call2_audio_wait_window_g1

0x3095,	// (0x0009d361) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x000a970a) popup_call2_audio_wait_window_g

0xbe44,	// (0x000a6110) popup_call2_audio_wait_window_t3

0xda14,	// (0x000a7ce0) bg_popup_call2_act_pane_ParamLimits

0xda14,	// (0x000a7ce0) bg_popup_call2_act_pane

0xdad4,	// (0x000a7da0) call_type_pane_cp03_ParamLimits

0xdad4,	// (0x000a7da0) call_type_pane_cp03

0xdb38,	// (0x000a7e04) popup_call2_audio_first_window_g1_ParamLimits

0xdb38,	// (0x000a7e04) popup_call2_audio_first_window_g1

0xdba8,	// (0x000a7e74) popup_call2_audio_first_window_g2_ParamLimits

0xdba8,	// (0x000a7e74) popup_call2_audio_first_window_g2

0xdc0c,	// (0x000a7ed8) popup_call2_audio_first_window_g3_ParamLimits

0xdc0c,	// (0x000a7ed8) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x000a970f) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x000a970f) popup_call2_audio_first_window_g

0xdc94,	// (0x000a7f60) popup_call2_audio_first_window_t1_ParamLimits

0xdc94,	// (0x000a7f60) popup_call2_audio_first_window_t1

0xdd97,	// (0x000a8063) popup_call2_audio_first_window_t4_ParamLimits

0xdd97,	// (0x000a8063) popup_call2_audio_first_window_t4

0xde7a,	// (0x000a8146) popup_call2_audio_first_window_t5_ParamLimits

0xde7a,	// (0x000a8146) popup_call2_audio_first_window_t5

0x0003,

0xf44e,	// (0x000a971a) popup_call2_audio_first_window_t_ParamLimits

0xf44e,	// (0x000a971a) popup_call2_audio_first_window_t

0xc075,	// (0x000a6341) bg_popup_call2_act_pane_g1

0xe451,	// (0x000a871d) popup_cale_lunar_info_window_t1

0xe45f,	// (0x000a872b) popup_cale_lunar_info_window_t2

0xe46d,	// (0x000a8739) popup_cale_lunar_info_window_t3

0xbe22,	// (0x000a60ee) bg_popup_call2_bubble_pane

0xdf7b,	// (0x000a8247) bg_popup_call2_in_pane_cp01_ParamLimits

0xdf7b,	// (0x000a8247) bg_popup_call2_in_pane_cp01

0x0674,	// (0x0009a940) call_type_pane_cp02

0x309d,	// (0x0009d369) popup_call2_audio_out_window_g1_ParamLimits

0x309d,	// (0x0009d369) popup_call2_audio_out_window_g1

0xdfc3,	// (0x000a828f) popup_call2_audio_out_window_g2_ParamLimits

0xdfc3,	// (0x000a828f) popup_call2_audio_out_window_g2

0x30c9,	// (0x0009d395) popup_call2_audio_out_window_g3_ParamLimits

0x30c9,	// (0x0009d395) popup_call2_audio_out_window_g3

0x0003,

0xf457,	// (0x000a9723) popup_call2_audio_out_window_g_ParamLimits

0xf457,	// (0x000a9723) popup_call2_audio_out_window_g

0xdffa,	// (0x000a82c6) popup_call2_audio_out_window_t1_ParamLimits

0xdffa,	// (0x000a82c6) popup_call2_audio_out_window_t1

0xe059,	// (0x000a8325) popup_call2_audio_out_window_t2_ParamLimits

0xe059,	// (0x000a8325) popup_call2_audio_out_window_t2

0xe0ad,	// (0x000a8379) popup_call2_audio_out_window_t3_ParamLimits

0xe0ad,	// (0x000a8379) popup_call2_audio_out_window_t3

0xe0c3,	// (0x000a838f) popup_call2_audio_out_window_t4_ParamLimits

0xe0c3,	// (0x000a838f) popup_call2_audio_out_window_t4

0xe0d9,	// (0x000a83a5) popup_call2_audio_out_window_t5_ParamLimits

0xe0d9,	// (0x000a83a5) popup_call2_audio_out_window_t5

0x0005,

0xf460,	// (0x000a972c) popup_call2_audio_out_window_t_ParamLimits

0xf460,	// (0x000a972c) popup_call2_audio_out_window_t

0xe13d,	// (0x000a8409) bg_popup_call2_in_pane_ParamLimits

0xe13d,	// (0x000a8409) bg_popup_call2_in_pane

0xe199,	// (0x000a8465) popup_call2_audio_in_window_g1_ParamLimits

0xe199,	// (0x000a8465) popup_call2_audio_in_window_g1

0xe1d1,	// (0x000a849d) popup_call2_audio_in_window_g2_ParamLimits

0xe1d1,	// (0x000a849d) popup_call2_audio_in_window_g2

0xe209,	// (0x000a84d5) popup_call2_audio_in_window_g3_ParamLimits

0xe209,	// (0x000a84d5) popup_call2_audio_in_window_g3

0x0003,

0xf46d,	// (0x000a9739) popup_call2_audio_in_window_g_ParamLimits

0xf46d,	// (0x000a9739) popup_call2_audio_in_window_g

0xe261,	// (0x000a852d) popup_call2_audio_in_window_t1_ParamLimits

0xe261,	// (0x000a852d) popup_call2_audio_in_window_t1

0xe2e1,	// (0x000a85ad) popup_call2_audio_in_window_t2_ParamLimits

0xe2e1,	// (0x000a85ad) popup_call2_audio_in_window_t2

0xe361,	// (0x000a862d) popup_call2_audio_in_window_t3_ParamLimits

0xe361,	// (0x000a862d) popup_call2_audio_in_window_t3

0xe37b,	// (0x000a8647) popup_call2_audio_in_window_t4_ParamLimits

0xe37b,	// (0x000a8647) popup_call2_audio_in_window_t4

0xe38d,	// (0x000a8659) popup_call2_audio_in_window_t5_ParamLimits

0xe38d,	// (0x000a8659) popup_call2_audio_in_window_t5

0xe3a2,	// (0x000a866e) popup_call2_audio_in_window_t6_ParamLimits

0xe3a2,	// (0x000a866e) popup_call2_audio_in_window_t6

0x0005,

0xf476,	// (0x000a9742) popup_call2_audio_in_window_t_ParamLimits

0xf476,	// (0x000a9742) popup_call2_audio_in_window_t

0xc075,	// (0x000a6341) bg_popup_call2_in_pane_g1

0xe47b,	// (0x000a8747) popup_cale_lunar_info_window_t4

0x0003,

0xf4c6,	// (0x000a9792) popup_cale_lunar_info_window_t

0xc07d,	// (0x000a6349) bg_popup_call2_rect_pane_ParamLimits

0xc07d,	// (0x000a6349) bg_popup_call2_rect_pane

0xbe22,	// (0x000a60ee) call2_cli_visual_graphic_pane

0xbe22,	// (0x000a60ee) call2_cli_visual_text_pane

0xa5fc,	// (0x000a48c8) smil_status_volume_pane_g3

0x0002,

0xc095,	// (0x000a6361) call2_cli_visual_graphic_pane_g1

0xc095,	// (0x000a6361) call2_cli_visual_graphic_pane_g2

0xc095,	// (0x000a6361) call2_cli_visual_graphic_pane_g3

0x0002,

0xf483,	// (0x000a974f) call2_cli_visual_graphic_pane_g

0xc295,	// (0x000a6561) bg_popup_call2_rect_pane_g1

0xc28d,	// (0x000a6559) bg_popup_call2_rect_pane_g2

0xc285,	// (0x000a6551) bg_popup_call2_rect_pane_g3

0xc2a5,	// (0x000a6571) bg_popup_call2_rect_pane_g4

0xc29d,	// (0x000a6569) bg_popup_call2_rect_pane_g5

0xc2ad,	// (0x000a6579) bg_popup_call2_rect_pane_g6

0xc2b5,	// (0x000a6581) bg_popup_call2_rect_pane_g7

0xc2c5,	// (0x000a6591) bg_popup_call2_rect_pane_g8

0xc2bd,	// (0x000a6589) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x000a94df) bg_popup_call2_rect_pane_g

0xe3b7,	// (0x000a8683) bg_popup_call2_bubble_pane_g1

0xe3bf,	// (0x000a868b) bg_popup_call2_bubble_pane_g2

0xe3c7,	// (0x000a8693) bg_popup_call2_bubble_pane_g3

0xe3cf,	// (0x000a869b) bg_popup_call2_bubble_pane_g4

0xe3d7,	// (0x000a86a3) bg_popup_call2_bubble_pane_g5

0xe3df,	// (0x000a86ab) bg_popup_call2_bubble_pane_g6

0xe3e7,	// (0x000a86b3) bg_popup_call2_bubble_pane_g7

0xe3ef,	// (0x000a86bb) bg_popup_call2_bubble_pane_g8

0xe3f7,	// (0x000a86c3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48a,	// (0x000a9756) bg_popup_call2_bubble_pane_g

0x0949,	// (0x0009ac15) aid_cale_week_size_cell_pane

0x0fbd,	// (0x0009b289) aid_cams_cif_uncrop_pane_ParamLimits

0x0fbd,	// (0x0009b289) aid_cams_cif_uncrop_pane

0xa438,	// (0x000a4704) aid_cams_size_cell_ParamLimits

0xa438,	// (0x000a4704) aid_cams_size_cell

0xa438,	// (0x000a4704) grid_cams_pane_ParamLimits

0xa438,	// (0x000a4704) linegrid_cams_pane_ParamLimits

0x11d2,	// (0x0009b49e) call_video_pane_t1

0x11ec,	// (0x0009b4b8) call_video_pane_t2

0x0001,

0xf1ba,	// (0x000a9486) call_video_pane_t

0x1612,	// (0x0009b8de) aid_cale_month_size_cell_pane_ParamLimits

0x1612,	// (0x0009b8de) aid_cale_month_size_cell_pane

0xf50a,	// (0x000a97d6) smil_status_volume_pane_g

0xa609,	// (0x000a48d5) volume_smil_pane_ParamLimits

0xa0da,	// (0x000a43a6) aid_popup2_width_pane

0x08a5,	// (0x0009ab71) cell_qdial_pane_g4_ParamLimits

0x08a5,	// (0x0009ab71) cell_qdial_pane_g4

0x2503,	// (0x0009c7cf) aid_blid_cardinal_pane_ParamLimits

0x250f,	// (0x0009c7db) aid_blid_destination_pane_ParamLimits

0x250f,	// (0x0009c7db) aid_blid_destination_pane

0xc07d,	// (0x000a6349) bg_popup_call_poc_act_pane_ParamLimits

0xc07d,	// (0x000a6349) bg_popup_call_poc_act_pane

0xc07d,	// (0x000a6349) bg_popup_call_poc_inact_pane_ParamLimits

0xc07d,	// (0x000a6349) bg_popup_call_poc_inact_pane

0xe3ff,	// (0x000a86cb) bg_popup_call_poc_act_pane_g1

0xe407,	// (0x000a86d3) bg_popup_call_poc_act_pane_g2

0xe40f,	// (0x000a86db) bg_popup_call_poc_act_pane_g3

0xe3cf,	// (0x000a869b) bg_popup_call_poc_act_pane_g4

0xe3d7,	// (0x000a86a3) bg_popup_call_poc_act_pane_g5

0xe417,	// (0x000a86e3) bg_popup_call_poc_act_pane_g6

0xe3e7,	// (0x000a86b3) bg_popup_call_poc_act_pane_g7

0xe41f,	// (0x000a86eb) bg_popup_call_poc_act_pane_g8

0xbe22,	// (0x000a60ee) main_usb_pane

0xa5ac,	// (0x000a4878) popup_cale_lunar_info_window

0x14a7,	// (0x0009b773) im_reading_pane_t1_ParamLimits

0xca24,	// (0x000a6cf0) list_im_pane_ParamLimits

0xca35,	// (0x000a6d01) scroll_pane_cp07_ParamLimits

0xbe22,	// (0x000a60ee) grid_highlight_pane_cp012

0xc07d,	// (0x000a6349) mup_scale_pane_ParamLimits

0xc0f8,	// (0x000a63c4) main_usb_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) main_usb_pane_g1

0xc0f8,	// (0x000a63c4) main_usb_pane_g2_ParamLimits

0xc0f8,	// (0x000a63c4) main_usb_pane_g2

0x0001,

0xf199,	// (0x000a9465) main_usb_pane_g_ParamLimits

0xf199,	// (0x000a9465) main_usb_pane_g

0xc140,	// (0x000a640c) main_usb_pane_t1_ParamLimits

0xc140,	// (0x000a640c) main_usb_pane_t1

0xc140,	// (0x000a640c) main_usb_pane_t2_ParamLimits

0xc140,	// (0x000a640c) main_usb_pane_t2

0xc140,	// (0x000a640c) main_usb_pane_t3_ParamLimits

0xc140,	// (0x000a640c) main_usb_pane_t3

0xc140,	// (0x000a640c) main_usb_pane_t4_ParamLimits

0xc140,	// (0x000a640c) main_usb_pane_t4

0xc140,	// (0x000a640c) main_usb_pane_t5_ParamLimits

0xc140,	// (0x000a640c) main_usb_pane_t5

0xc140,	// (0x000a640c) main_usb_pane_t6_ParamLimits

0xc140,	// (0x000a640c) main_usb_pane_t6

0x0005,

0xf4b4,	// (0x000a9780) main_usb_pane_t_ParamLimits

0x24a2,	// (0x0009c76e) aid_text_placing

0x24ad,	// (0x0009c779) main_location2_pane_t1_ParamLimits

0x24c3,	// (0x0009c78f) main_location2_pane_t2_ParamLimits

0x24d9,	// (0x0009c7a5) main_location2_pane_t3_ParamLimits

0x24ef,	// (0x0009c7bb) main_location2_pane_t4_ParamLimits

0x24ef,	// (0x0009c7bb) main_location2_pane_t4

0xf2f6,	// (0x000a95c2) main_location2_pane_t_ParamLimits

0xc0ab,	// (0x000a6377) find_pinb_pane_g2_ParamLimits

0xc0ab,	// (0x000a6377) find_pinb_pane_g2

0x0001,

0xf072,	// (0x000a933e) find_pinb_pane_g_ParamLimits

0xf072,	// (0x000a933e) find_pinb_pane_g

0xc0b7,	// (0x000a6383) find_pinb_pane_t1_ParamLimits

0xc0c9,	// (0x000a6395) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x000a9343) find_pinb_pane_t_ParamLimits

0xbe22,	// (0x000a60ee) main_call3_pane

0x1c0f,	// (0x0009bedb) cale_month_day_heading_pane_t1_ParamLimits

0x1c95,	// (0x0009bf61) cale_month_day_heading_pane_t2_ParamLimits

0x1d0e,	// (0x0009bfda) cale_month_day_heading_pane_t3_ParamLimits

0x1d87,	// (0x0009c053) cale_month_day_heading_pane_t4_ParamLimits

0x1e08,	// (0x0009c0d4) cale_month_day_heading_pane_t5_ParamLimits

0x1e91,	// (0x0009c15d) cale_month_day_heading_pane_t6_ParamLimits

0x1f1a,	// (0x0009c1e6) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x000a94be) cale_month_day_heading_pane_t_ParamLimits

0xcc8e,	// (0x000a6f5a) smil_status_volume_pane

0x2b91,	// (0x0009ce5d) postcard_address_pane_ParamLimits

0x2b91,	// (0x0009ce5d) postcard_address_pane

0x2ba7,	// (0x0009ce73) postcard_message_pane_ParamLimits

0x2ba7,	// (0x0009ce73) postcard_message_pane

0x30f5,	// (0x0009d3c1) call2_cli_visual_pane_t1_ParamLimits

0x30f5,	// (0x0009d3c1) call2_cli_visual_pane_t1

0xe590,	// (0x000a885c) postcard_message_pane_t1_ParamLimits

0xe590,	// (0x000a885c) postcard_message_pane_t1

0xe578,	// (0x000a8844) postcard_address_pane_t1_ParamLimits

0xe578,	// (0x000a8844) postcard_address_pane_t1

0x384d,	// (0x0009db19) popup_call3_audio_in_window_ParamLimits

0x384d,	// (0x0009db19) popup_call3_audio_in_window

0x36d2,	// (0x0009d99e) bg_popup_call3_in_pane_ParamLimits

0x36d2,	// (0x0009d99e) bg_popup_call3_in_pane

0x374e,	// (0x0009da1a) popup_call3_audio_in_window_g1_ParamLimits

0x374e,	// (0x0009da1a) popup_call3_audio_in_window_g1

0x376e,	// (0x0009da3a) popup_call3_audio_in_window_g2_ParamLimits

0x376e,	// (0x0009da3a) popup_call3_audio_in_window_g2

0x378e,	// (0x0009da5a) popup_call3_audio_in_window_g3_ParamLimits

0x378e,	// (0x0009da5a) popup_call3_audio_in_window_g3

0x0003,

0xf511,	// (0x000a97dd) popup_call3_audio_in_window_g_ParamLimits

0xf511,	// (0x000a97dd) popup_call3_audio_in_window_g

0x37bf,	// (0x0009da8b) popup_call3_audio_in_window_t1_ParamLimits

0x37bf,	// (0x0009da8b) popup_call3_audio_in_window_t1

0x37fd,	// (0x0009dac9) popup_call3_audio_in_window_t2_ParamLimits

0x37fd,	// (0x0009dac9) popup_call3_audio_in_window_t2

0x383b,	// (0x0009db07) popup_call3_audio_in_window_t3_ParamLimits

0x383b,	// (0x0009db07) popup_call3_audio_in_window_t3

0x0002,

0xf51a,	// (0x000a97e6) popup_call3_audio_in_window_t_ParamLimits

0xf51a,	// (0x000a97e6) popup_call3_audio_in_window_t

0xc37f,	// (0x000a664b) bg_popup_call3_rect_pane

0xc295,	// (0x000a6561) bg_popup_call3_rect_pane_g1

0xc28d,	// (0x000a6559) bg_popup_call3_rect_pane_g2

0xc285,	// (0x000a6551) bg_popup_call3_rect_pane_g3

0xc2a5,	// (0x000a6571) bg_popup_call3_rect_pane_g4

0xc29d,	// (0x000a6569) bg_popup_call3_rect_pane_g5

0xc2ad,	// (0x000a6579) bg_popup_call3_rect_pane_g6

0xc2b5,	// (0x000a6581) bg_popup_call3_rect_pane_g7

0x02c8,	// (0x0009a594) mup_visualizer_osc_pane

0x02c8,	// (0x0009a594) mup_visualizer_spec_pane

0x3702,	// (0x0009d9ce) call3_video_qcif_pane_ParamLimits

0x3702,	// (0x0009d9ce) call3_video_qcif_pane

0x3715,	// (0x0009d9e1) call3_video_qcif_uncrop_pane_ParamLimits

0x3715,	// (0x0009d9e1) call3_video_qcif_uncrop_pane

0x3725,	// (0x0009d9f1) call3_video_subqcif_pane_ParamLimits

0x3725,	// (0x0009d9f1) call3_video_subqcif_pane

0x373b,	// (0x0009da07) call3_video_subqcif_uncrop_pane_ParamLimits

0x373b,	// (0x0009da07) call3_video_subqcif_uncrop_pane

0x37ae,	// (0x0009da7a) popup_call3_audio_in_window_g4_ParamLimits

0x37ae,	// (0x0009da7a) popup_call3_audio_in_window_g4

0x02c8,	// (0x0009a594) mup_spec_half_pane

0x02c8,	// (0x0009a594) mup_spec_half_pane_cp

0x02c8,	// (0x0009a594) mup_osc_middle_pane

0xc136,	// (0x000a6402) mup_visualizer_osc_pane_g1

0xe52b,	// (0x000a87f7) mup_spec_bar_pane_ParamLimits

0xe52b,	// (0x000a87f7) mup_spec_bar_pane

0xc136,	// (0x000a6402) mup_spec_bar_pane_g1

0xc136,	// (0x000a6402) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x000a9358) mup_spec_bar_pane_g

0x0949,	// (0x0009ac15) aid_cale_week_size_cell_pane_ParamLimits

0x0963,	// (0x0009ac2f) bg_cale_heading_pane_ParamLimits

0x0987,	// (0x0009ac53) bg_cale_pane_cp01_ParamLimits

0x09a4,	// (0x0009ac70) cale_week_corner_pane_ParamLimits

0x09c3,	// (0x0009ac8f) cale_week_day_heading_pane_ParamLimits

0x09ec,	// (0x0009acb8) cale_week_scroll_pane_g1_ParamLimits

0x0a0b,	// (0x0009acd7) cale_week_scroll_pane_g2_ParamLimits

0x0a23,	// (0x0009acef) cale_week_scroll_pane_g3_ParamLimits

0x0a3b,	// (0x0009ad07) cale_week_scroll_pane_g4_ParamLimits

0x0a53,	// (0x0009ad1f) cale_week_scroll_pane_g5_ParamLimits

0x0a73,	// (0x0009ad3f) cale_week_scroll_pane_g6_ParamLimits

0x0a93,	// (0x0009ad5f) cale_week_scroll_pane_g7_ParamLimits

0x0ab3,	// (0x0009ad7f) cale_week_scroll_pane_g8_ParamLimits

0x0ad7,	// (0x0009ada3) cale_week_scroll_pane_g9_ParamLimits

0x0aef,	// (0x0009adbb) cale_week_scroll_pane_g10_ParamLimits

0x0b07,	// (0x0009add3) cale_week_scroll_pane_g11_ParamLimits

0x0b1f,	// (0x0009adeb) cale_week_scroll_pane_g12_ParamLimits

0x0b3f,	// (0x0009ae0b) cale_week_scroll_pane_g13_ParamLimits

0x0b63,	// (0x0009ae2f) cale_week_scroll_pane_g14_ParamLimits

0x0b87,	// (0x0009ae53) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x000a93cf) cale_week_scroll_pane_g_ParamLimits

0x0bcf,	// (0x0009ae9b) cale_week_time_pane_ParamLimits

0x0bf3,	// (0x0009aebf) grid_cale_week_pane_ParamLimits

0xc2f5,	// (0x000a65c1) listscroll_cale_week_pane_t1

0xc307,	// (0x000a65d3) scroll_pane_cp08_ParamLimits

0x168a,	// (0x0009b956) cale_month_corner_pane_ParamLimits

0xcc64,	// (0x000a6f30) cale_month_pane_t1

0x1b8a,	// (0x0009be56) cale_month_week_pane_ParamLimits

0x22e2,	// (0x0009c5ae) popup_call_status_window_g1_ParamLimits

0x22f6,	// (0x0009c5c2) popup_call_status_window_g2_ParamLimits

0x230a,	// (0x0009c5d6) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x000a9549) popup_call_status_window_g_ParamLimits

0xcfff,	// (0x000a72cb) aid_call2_pane

0x29a5,	// (0x0009cc71) msg_header_pane_g1

0x2b91,	// (0x0009ce5d) postcard_address2_pane_ParamLimits

0x2b91,	// (0x0009ce5d) postcard_address2_pane

0x2ba7,	// (0x0009ce73) postcard_message2_pane_ParamLimits

0x2ba7,	// (0x0009ce73) postcard_message2_pane

0x369f,	// (0x0009d96b) message2_row_pane_ParamLimits

0x369f,	// (0x0009d96b) message2_row_pane

0x36bf,	// (0x0009d98b) address2_row_pane_ParamLimits

0x36bf,	// (0x0009d98b) address2_row_pane

0xe4f8,	// (0x000a87c4) postcard_message2_row_pane_g1

0xe500,	// (0x000a87cc) postcard_message2_row_pane_t1

0xe4f8,	// (0x000a87c4) address2_row_pane_g1

0xe500,	// (0x000a87cc) address2_row_pane_t1

0x0f50,	// (0x0009b21c) aid_size_cell_vorec

0xbe22,	// (0x000a60ee) main_rss_pane

0xe50e,	// (0x000a87da) rss_list_single_pane_ParamLimits

0xe50e,	// (0x000a87da) rss_list_single_pane

0xe51c,	// (0x000a87e8) rss_list_single_pane_t1

0xe51c,	// (0x000a87e8) rss_list_single_pane_t2

0x0001,

0xf505,	// (0x000a97d1) rss_list_single_pane_t

0xbe22,	// (0x000a60ee) main_camera2_pane

0xbe22,	// (0x000a60ee) main_video2_pane

0xa61e,	// (0x000a48ea) cams_zoom_pane_cp2_ParamLimits

0xa61e,	// (0x000a48ea) cams_zoom_pane_cp2

0xa61e,	// (0x000a48ea) image2_vga_pane_ParamLimits

0xa61e,	// (0x000a48ea) image2_vga_pane

0xa62c,	// (0x000a48f8) main_camera2_pane_g1_ParamLimits

0xa62c,	// (0x000a48f8) main_camera2_pane_g1

0xa62c,	// (0x000a48f8) main_camera2_pane_g2_ParamLimits

0xa62c,	// (0x000a48f8) main_camera2_pane_g2

0xa62c,	// (0x000a48f8) main_camera2_pane_g3_ParamLimits

0xa62c,	// (0x000a48f8) main_camera2_pane_g3

0xa62c,	// (0x000a48f8) main_camera2_pane_g4_ParamLimits

0xa62c,	// (0x000a48f8) main_camera2_pane_g4

0xa62c,	// (0x000a48f8) main_camera2_pane_g5_ParamLimits

0xa62c,	// (0x000a48f8) main_camera2_pane_g5

0xa62c,	// (0x000a48f8) main_camera2_pane_g6_ParamLimits

0xa62c,	// (0x000a48f8) main_camera2_pane_g6

0xa62c,	// (0x000a48f8) main_camera2_pane_g7_ParamLimits

0xa62c,	// (0x000a48f8) main_camera2_pane_g7

0xa62c,	// (0x000a48f8) main_camera2_pane_g8_ParamLimits

0xa62c,	// (0x000a48f8) main_camera2_pane_g8

0x0008,

0xf521,	// (0x000a97ed) main_camera2_pane_g_ParamLimits

0xf521,	// (0x000a97ed) main_camera2_pane_g

0x386f,	// (0x0009db3b) main_camera2_pane_t1_ParamLimits

0x386f,	// (0x0009db3b) main_camera2_pane_t1

0x386f,	// (0x0009db3b) main_camera2_pane_t2_ParamLimits

0x386f,	// (0x0009db3b) main_camera2_pane_t2

0x386f,	// (0x0009db3b) main_camera2_pane_t3_ParamLimits

0x386f,	// (0x0009db3b) main_camera2_pane_t3

0x386f,	// (0x0009db3b) main_camera2_pane_t4_ParamLimits

0x386f,	// (0x0009db3b) main_camera2_pane_t4

0x0006,

0xf534,	// (0x000a9800) main_camera2_pane_t_ParamLimits

0xf534,	// (0x000a9800) main_camera2_pane_t

0xa670,	// (0x000a493c) cams_zoom_pane_cp4_ParamLimits

0xa670,	// (0x000a493c) cams_zoom_pane_cp4

0x3883,	// (0x0009db4f) image2_cif_pane_ParamLimits

0x3883,	// (0x0009db4f) image2_cif_pane

0xa145,	// (0x000a4411) image2_subqcif_pane_ParamLimits

0xa145,	// (0x000a4411) image2_subqcif_pane

0x3891,	// (0x0009db5d) main_video2_pane_g1_ParamLimits

0x3891,	// (0x0009db5d) main_video2_pane_g1

0x3891,	// (0x0009db5d) main_video2_pane_g2_ParamLimits

0x3891,	// (0x0009db5d) main_video2_pane_g2

0x3891,	// (0x0009db5d) main_video2_pane_g3_ParamLimits

0x3891,	// (0x0009db5d) main_video2_pane_g3

0x3891,	// (0x0009db5d) main_video2_pane_g4_ParamLimits

0x3891,	// (0x0009db5d) main_video2_pane_g4

0x3891,	// (0x0009db5d) main_video2_pane_g5_ParamLimits

0x3891,	// (0x0009db5d) main_video2_pane_g5

0x3891,	// (0x0009db5d) main_video2_pane_g6_ParamLimits

0x3891,	// (0x0009db5d) main_video2_pane_g6

0x0005,

0xf543,	// (0x000a980f) main_video2_pane_g_ParamLimits

0xf543,	// (0x000a980f) main_video2_pane_g

0x389f,	// (0x0009db6b) main_video2_pane_t1_ParamLimits

0x389f,	// (0x0009db6b) main_video2_pane_t1

0x389f,	// (0x0009db6b) main_video2_pane_t2_ParamLimits

0x389f,	// (0x0009db6b) main_video2_pane_t2

0x389f,	// (0x0009db6b) main_video2_pane_t3_ParamLimits

0x389f,	// (0x0009db6b) main_video2_pane_t3

0x0002,

0xf550,	// (0x000a981c) main_video2_pane_t_ParamLimits

0xf550,	// (0x000a981c) main_video2_pane_t

0x31a0,	// (0x0009d46c) call_muted_g2

0x0001,

0xf4f7,	// (0x000a97c3) call_muted_g

0xbe22,	// (0x000a60ee) main_mup2_pane

0xd307,	// (0x000a75d3) main_mup2_pane_g1_ParamLimits

0xd307,	// (0x000a75d3) main_mup2_pane_g1

0xd307,	// (0x000a75d3) main_mup2_pane_g2_ParamLimits

0xd307,	// (0x000a75d3) main_mup2_pane_g2

0xa6aa,	// (0x000a4976) main_mup_pane_g13_cp1

0xa153,	// (0x000a441f) mup_volume_pane_cp1

0xd307,	// (0x000a75d3) main_mup2_pane_g4_ParamLimits

0xd307,	// (0x000a75d3) main_mup2_pane_g4

0xd307,	// (0x000a75d3) main_mup2_pane_g5_ParamLimits

0xd307,	// (0x000a75d3) main_mup2_pane_g5

0xd307,	// (0x000a75d3) main_mup2_pane_g6_ParamLimits

0xd307,	// (0x000a75d3) main_mup2_pane_g6

0xd307,	// (0x000a75d3) main_mup2_pane_g7_ParamLimits

0xd307,	// (0x000a75d3) main_mup2_pane_g7

0x0006,

0xf557,	// (0x000a9823) main_mup2_pane_g_ParamLimits

0xf557,	// (0x000a9823) main_mup2_pane_g

0xd315,	// (0x000a75e1) main_mup2_pane_t1_ParamLimits

0xd315,	// (0x000a75e1) main_mup2_pane_t1

0xd315,	// (0x000a75e1) main_mup2_pane_t2_ParamLimits

0xd315,	// (0x000a75e1) main_mup2_pane_t2

0xd315,	// (0x000a75e1) main_mup2_pane_t3_ParamLimits

0xd315,	// (0x000a75e1) main_mup2_pane_t3

0xd315,	// (0x000a75e1) main_mup2_pane_t4_ParamLimits

0xd315,	// (0x000a75e1) main_mup2_pane_t4

0xd315,	// (0x000a75e1) main_mup2_pane_t5_ParamLimits

0xd315,	// (0x000a75e1) main_mup2_pane_t5

0xd315,	// (0x000a75e1) main_mup2_pane_t6_ParamLimits

0xd315,	// (0x000a75e1) main_mup2_pane_t6

0x0005,

0xf566,	// (0x000a9832) main_mup2_pane_t_ParamLimits

0xf566,	// (0x000a9832) main_mup2_pane_t

0xd329,	// (0x000a75f5) mup2_visualizer_pane_ParamLimits

0xd329,	// (0x000a75f5) mup2_visualizer_pane

0xd329,	// (0x000a75f5) mup_progress_pane_cp_ParamLimits

0xd329,	// (0x000a75f5) mup_progress_pane_cp

0xa694,	// (0x000a4960) mup_volume_pane_cp_ParamLimits

0xa694,	// (0x000a4960) mup_volume_pane_cp

0xc0f8,	// (0x000a63c4) mup2_visualizer_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) mup2_visualizer_pane_g1

0xc106,	// (0x000a63d2) mup2_visualizer_pane_g2_ParamLimits

0xc106,	// (0x000a63d2) mup2_visualizer_pane_g2

0xc106,	// (0x000a63d2) mup2_visualizer_pane_g3_ParamLimits

0xc106,	// (0x000a63d2) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x000a9348) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x000a9348) mup2_visualizer_pane_g

0x02c8,	// (0x0009a594) aid_size_cell_fmradio

0x3350,	// (0x0009d61c) aid_height_parent_landcape

0xcac2,	// (0x000a6d8e) wml_content_pane_cp

0xcaca,	// (0x000a6d96) wml_tabs_pane

0xcad3,	// (0x000a6d9f) popup_wml_miniature_window

0xcadb,	// (0x000a6da7) scroll_pane_cp021

0xcaef,	// (0x000a6dbb) wml_content_pane_comp8

0xbe22,	// (0x000a60ee) bg_popup_sub_pane_cp05

0xe5c2,	// (0x000a888e) popup_wml_miniature_window_g1

0xe5ca,	// (0x000a8896) wml_miniature_view_pane

0x38b3,	// (0x0009db7f) aid_size_wml_view

0x38bb,	// (0x0009db87) wml_miniature_view_pane_g1

0x38c4,	// (0x0009db90) wml_miniature_view_pane_g2

0x38cd,	// (0x0009db99) wml_miniature_view_pane_g3

0x38d5,	// (0x0009dba1) wml_miniature_view_pane_g4

0x38dd,	// (0x0009dba9) wml_miniature_view_pane_g5

0x38e5,	// (0x0009dbb1) wml_miniature_view_pane_g6

0x38ed,	// (0x0009dbb9) wml_miniature_view_pane_g7

0x38f5,	// (0x0009dbc1) wml_miniature_view_pane_g8

0x0007,

0xf573,	// (0x000a983f) wml_miniature_view_pane_g

0xe5d2,	// (0x000a889e) background_graphic_ParamLimits

0xe5d2,	// (0x000a889e) background_graphic

0xe5de,	// (0x000a88aa) wml_tabs_2_pane

0xe5e7,	// (0x000a88b3) wml_tabs_3_pane_ParamLimits

0xe5e7,	// (0x000a88b3) wml_tabs_3_pane

0xe5f9,	// (0x000a88c5) wml_tabs_4_pane_ParamLimits

0xe5f9,	// (0x000a88c5) wml_tabs_4_pane

0xe60f,	// (0x000a88db) wml_tabs_5_pane_ParamLimits

0xe60f,	// (0x000a88db) wml_tabs_5_pane

0xe629,	// (0x000a88f5) wml_tabs_pane_g2_ParamLimits

0xe629,	// (0x000a88f5) wml_tabs_pane_g2

0xe63e,	// (0x000a890a) wml_tabs_pane_g3_ParamLimits

0xe63e,	// (0x000a890a) wml_tabs_pane_g3

0xe653,	// (0x000a891f) wml_tabs_2_active_pane_ParamLimits

0xe653,	// (0x000a891f) wml_tabs_2_active_pane

0xe653,	// (0x000a891f) wml_tabs_2_passive_pane_ParamLimits

0xe653,	// (0x000a891f) wml_tabs_2_passive_pane

0x38fd,	// (0x0009dbc9) wml_tabs_3_active_pane_cp_ParamLimits

0x38fd,	// (0x0009dbc9) wml_tabs_3_active_pane_cp

0x3912,	// (0x0009dbde) wml_tabs_3_passive_pane_ParamLimits

0x3912,	// (0x0009dbde) wml_tabs_3_passive_pane

0x3925,	// (0x0009dbf1) wml_tabs_3_passive_pane_cp_ParamLimits

0x3925,	// (0x0009dbf1) wml_tabs_3_passive_pane_cp

0x393c,	// (0x0009dc08) tabs_4_active_pane

0x3944,	// (0x0009dc10) tabs_4_passive_pane

0x394e,	// (0x0009dc1a) tabs_4_passive_pane_cp

0x3956,	// (0x0009dc22) tabs_4_passive_pane_cp2

0x3114,	// (0x0009d3e0) aid_height_text

0xd329,	// (0x000a75f5) mup_volume_cont_pane_ParamLimits

0xd329,	// (0x000a75f5) mup_volume_cont_pane

0x02c8,	// (0x0009a594) aid_size_cell_pinb

0x02c8,	// (0x0009a594) aid_size_list_pinb

0xd329,	// (0x000a75f5) mup2_volume_cont_pane_ParamLimits

0xd329,	// (0x000a75f5) mup2_volume_cont_pane

0xa67e,	// (0x000a494a) mup2_volume_cont_pane_g1_ParamLimits

0xa67e,	// (0x000a494a) mup2_volume_cont_pane_g1

0x02d2,	// (0x0009a59e) aid_size_cell_touch_ParamLimits

0x02d2,	// (0x0009a59e) aid_size_cell_touch

0x04fe,	// (0x0009a7ca) touch_pane_ParamLimits

0x04fe,	// (0x0009a7ca) touch_pane

0xa153,	// (0x000a441f) main_rss2_pane

0xe66a,	// (0x000a8936) listscroll_rss2_pane

0xe673,	// (0x000a893f) rss2_navigation_pane

0xe67b,	// (0x000a8947) list_rss2_pane

0xd116,	// (0x000a73e2) scroll_pane_cp22

0xe683,	// (0x000a894f) rss2_navigation_pane_g1

0xe68c,	// (0x000a8958) rss2_navigation_pane_g2

0xe694,	// (0x000a8960) rss2_navigation_pane_g3

0x0002,

0xf584,	// (0x000a9850) rss2_navigation_pane_g

0xe69c,	// (0x000a8968) rss2_navigation_pane_t1

0x3960,	// (0x0009dc2c) rss2_list_single_pane_ParamLimits

0x3960,	// (0x0009dc2c) rss2_list_single_pane

0xe6aa,	// (0x000a8976) rss2_list_single_pane_t2

0xe6b8,	// (0x000a8984) rss2_list_single_pane_t3_ParamLimits

0xe6b8,	// (0x000a8984) rss2_list_single_pane_t3

0xe6d5,	// (0x000a89a1) rss2_list_single_pane_t4

0x21ba,	// (0x0009c486) smil_status_pane_g1

0xa145,	// (0x000a4411) main_image2_pane_ParamLimits

0xa145,	// (0x000a4411) main_image2_pane

0xa62c,	// (0x000a48f8) main_camera2_pane_g9_ParamLimits

0xa62c,	// (0x000a48f8) main_camera2_pane_g9

0x386f,	// (0x0009db3b) main_camera2_pane_t5_ParamLimits

0x386f,	// (0x0009db3b) main_camera2_pane_t5

0xa63a,	// (0x000a4906) main_camera2_pane_t6_ParamLimits

0xa63a,	// (0x000a4906) main_camera2_pane_t6

0x3977,	// (0x0009dc43) main_image2_pane_g1_ParamLimits

0x3977,	// (0x0009dc43) main_image2_pane_g1

0x2dc3,	// (0x0009d08f) smil2_video_pane_ParamLimits

0x2dc3,	// (0x0009d08f) smil2_video_pane

0xa0f6,	// (0x000a43c2) aid_zoom_text_primary_cp

0xa13b,	// (0x000a4407) popup_preview_fixed_window

0xca1c,	// (0x000a6ce8) im_reading_pane_g1

0x3861,	// (0x0009db2d) cams2_bc_adjust_pane_cp_ParamLimits

0x3861,	// (0x0009db2d) cams2_bc_adjust_pane_cp

0xa662,	// (0x000a492e) cams2_bc_adjust_pane_ParamLimits

0xa662,	// (0x000a492e) cams2_bc_adjust_pane

0xa6aa,	// (0x000a4976) cams2_bc_adjust_pane_g1

0xa153,	// (0x000a441f) cams2_slider_pane

0xa6aa,	// (0x000a4976) cams2_slider_pane_g1

0xa6aa,	// (0x000a4976) cams2_slider_pane_g2

0x0006,

0xf58b,	// (0x000a9857) cams2_slider_pane_g

0x06d2,	// (0x0009a99e) calc_display_pane_ParamLimits

0x06f7,	// (0x0009a9c3) calc_paper_pane_ParamLimits

0x071a,	// (0x0009a9e6) grid_calc_pane_ParamLimits

0xa52b,	// (0x000a47f7) popup_clock_digital_window_t1_ParamLimits

0xd4e1,	// (0x000a77ad) main_image_pane_t1

0x06b2,	// (0x0009a97e) aid_size_cell_calc_ParamLimits

0x06b2,	// (0x0009a97e) aid_size_cell_calc

0x3396,	// (0x0009d662) popup_blid_sat_info2_window_ParamLimits

0x3396,	// (0x0009d662) popup_blid_sat_info2_window

0xe6e3,	// (0x000a89af) aid_size_cell_blid

0xe6eb,	// (0x000a89b7) bg_popup_window_pane_cp07

0xe70e,	// (0x000a89da) grid_popup_blid_pane

0xe718,	// (0x000a89e4) heading_pane_cp05_ParamLimits

0xe718,	// (0x000a89e4) heading_pane_cp05

0xe7e2,	// (0x000a8aae) cell_popup_blid_pane_ParamLimits

0xe7e2,	// (0x000a8aae) cell_popup_blid_pane

0xe80c,	// (0x000a8ad8) cell_popup_blid_pane_g1

0xe814,	// (0x000a8ae0) cell_popup_blid_pane_t1

0xd329,	// (0x000a75f5) mup2_indicator_pane_ParamLimits

0xd329,	// (0x000a75f5) mup2_indicator_pane

0x02c8,	// (0x0009a594) mup2_visualizer_osc_pane

0xe5ac,	// (0x000a8878) mup2_visualizer_spec_pane_ParamLimits

0xe5ac,	// (0x000a8878) mup2_visualizer_spec_pane

0x02c8,	// (0x0009a594) mup2_spec_half_pane

0x02c8,	// (0x0009a594) mup2_spec_half_pane_cp

0xe822,	// (0x000a8aee) mup2_spec_bar_pane_ParamLimits

0xe822,	// (0x000a8aee) mup2_spec_bar_pane

0xc136,	// (0x000a6402) mup2_spec_bar_pane_g1

0xe841,	// (0x000a8b0d) mup2_spec_bar_pane_g2

0x0001,

0xf5b1,	// (0x000a987d) mup2_spec_bar_pane_g

0x02c8,	// (0x0009a594) mup2_osc_middle_pane

0xc136,	// (0x000a6402) mup2_visualizer_osc_pane_g1

0x0570,	// (0x0009a83c) popup_number_entry_window_t1_ParamLimits

0x0583,	// (0x0009a84f) popup_number_entry_window_t2_ParamLimits

0x0595,	// (0x0009a861) popup_number_entry_window_t3_ParamLimits

0x05a7,	// (0x0009a873) popup_number_entry_window_t5_ParamLimits

0x05a7,	// (0x0009a873) popup_number_entry_window_t5

0xf01d,	// (0x000a92e9) popup_number_entry_window_t_ParamLimits

0x05dc,	// (0x0009a8a8) text_title_cp2_ParamLimits

0xa56a,	// (0x000a4836) aid_hotspot_pointer_text2_pane

0xa590,	// (0x000a485c) main_viewer_pane_g9_ParamLimits

0xa590,	// (0x000a485c) main_viewer_pane_g9

0xcc64,	// (0x000a6f30) cale_month_pane_t1_ParamLimits

0xccaa,	// (0x000a6f76) bg_cale_pane_ParamLimits

0xccc2,	// (0x000a6f8e) list_cale_pane_ParamLimits

0xccd3,	// (0x000a6f9f) listscroll_cale_day_pane_t1

0xcce5,	// (0x000a6fb1) scroll_pane_cp09_ParamLimits

0x26d8,	// (0x0009c9a4) main_mup_eq_pane_t1_ParamLimits

0x26d8,	// (0x0009c9a4) main_mup_eq_pane_t1

0x26f4,	// (0x0009c9c0) main_mup_eq_pane_t2_ParamLimits

0x26f4,	// (0x0009c9c0) main_mup_eq_pane_t2

0x2710,	// (0x0009c9dc) main_mup_eq_pane_t3_ParamLimits

0x2710,	// (0x0009c9dc) main_mup_eq_pane_t3

0x272e,	// (0x0009c9fa) main_mup_eq_pane_t4_ParamLimits

0x272e,	// (0x0009c9fa) main_mup_eq_pane_t4

0x274c,	// (0x0009ca18) main_mup_eq_pane_t5_ParamLimits

0x274c,	// (0x0009ca18) main_mup_eq_pane_t5

0x276a,	// (0x0009ca36) main_mup_eq_pane_t6_ParamLimits

0x276a,	// (0x0009ca36) main_mup_eq_pane_t6

0x2780,	// (0x0009ca4c) main_mup_eq_pane_t7_ParamLimits

0x2780,	// (0x0009ca4c) main_mup_eq_pane_t7

0x2796,	// (0x0009ca62) main_mup_eq_pane_t8_ParamLimits

0x2796,	// (0x0009ca62) main_mup_eq_pane_t8

0x27ac,	// (0x0009ca78) main_mup_eq_pane_t9_ParamLimits

0x27ac,	// (0x0009ca78) main_mup_eq_pane_t9

0x27c8,	// (0x0009ca94) main_mup_eq_pane_t10_ParamLimits

0x27c8,	// (0x0009ca94) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x000a9643) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x000a9643) main_mup_eq_pane_t

0x289d,	// (0x0009cb69) mup_equalizer_pane_cp5_ParamLimits

0x28b5,	// (0x0009cb81) mup_equalizer_pane_cp6_ParamLimits

0x28cd,	// (0x0009cb99) mup_equalizer_pane_cp7_ParamLimits

0xa153,	// (0x000a441f) main_gallery_pane

0xe54a,	// (0x000a8816) smil2_volume_pane

0xe552,	// (0x000a881e) smil_status_volume_pane_g1_ParamLimits

0xe565,	// (0x000a8831) smil_status_volume_pane_g2_ParamLimits

0xa5fc,	// (0x000a48c8) smil_status_volume_pane_g3_ParamLimits

0xf50a,	// (0x000a97d6) smil_status_volume_pane_g_ParamLimits

0xe6eb,	// (0x000a89b7) bg_popup_window_pane_cp07_ParamLimits

0xe6f9,	// (0x000a89c5) blid_firmament_pane

0xa438,	// (0x000a4704) aid_size_cell_gallery_ParamLimits

0xa438,	// (0x000a4704) aid_size_cell_gallery

0xa438,	// (0x000a4704) grid_gallery_pane_ParamLimits

0xa438,	// (0x000a4704) grid_gallery_pane

0xe6eb,	// (0x000a89b7) cell_gallery_pane_ParamLimits

0xe6eb,	// (0x000a89b7) cell_gallery_pane

0xa438,	// (0x000a4704) bg_cell_gallery_focus_pane_ParamLimits

0xa438,	// (0x000a4704) bg_cell_gallery_focus_pane

0xc0f8,	// (0x000a63c4) cell_gallery_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) cell_gallery_pane_g1

0xc0f8,	// (0x000a63c4) cell_gallery_pane_g2_ParamLimits

0xc0f8,	// (0x000a63c4) cell_gallery_pane_g2

0xc0f8,	// (0x000a63c4) cell_gallery_pane_g3_ParamLimits

0xc0f8,	// (0x000a63c4) cell_gallery_pane_g3

0xc106,	// (0x000a63d2) cell_gallery_pane_g4_ParamLimits

0xc106,	// (0x000a63d2) cell_gallery_pane_g4

0x0003,

0xf5b6,	// (0x000a9882) cell_gallery_pane_g_ParamLimits

0xf5b6,	// (0x000a9882) cell_gallery_pane_g

0xe84b,	// (0x000a8b17) bg_cell_gallery_focus_pane_g1

0xe853,	// (0x000a8b1f) bg_cell_gallery_focus_pane_g2

0xe85b,	// (0x000a8b27) bg_cell_gallery_focus_pane_g3

0xe863,	// (0x000a8b2f) bg_cell_gallery_focus_pane_g4

0xe86b,	// (0x000a8b37) bg_cell_gallery_focus_pane_g5

0xe873,	// (0x000a8b3f) bg_cell_gallery_focus_pane_g6

0xe87b,	// (0x000a8b47) bg_cell_gallery_focus_pane_g7

0xe883,	// (0x000a8b4f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5bf,	// (0x000a988b) bg_cell_gallery_focus_pane_g

0xe88b,	// (0x000a8b57) aid_firma_cardinal

0xe89f,	// (0x000a8b6b) blid_firmament_pane_t1

0xe8b6,	// (0x000a8b82) blid_firmament_pane_t2

0xe8cd,	// (0x000a8b99) blid_firmament_pane_t3

0xe8e4,	// (0x000a8bb0) blid_firmament_pane_t4

0x0003,

0xf5d0,	// (0x000a989c) blid_firmament_pane_t

0xe8fb,	// (0x000a8bc7) blid_sat_info_pane

0xc136,	// (0x000a6402) blid_sat_info_pane_g1

0xc136,	// (0x000a6402) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x000a9358) blid_sat_info_pane_g

0xe90b,	// (0x000a8bd7) blid_sat_info_pane_t1

0xe919,	// (0x000a8be5) smil2_volume_content_pane

0xe922,	// (0x000a8bee) smil2_volume_pane_g1

0xc9a7,	// (0x000a6c73) smil2_volume_content_pane_g1

0xe92a,	// (0x000a8bf6) smil2_volume_content_pane_g2

0xe933,	// (0x000a8bff) smil2_volume_content_pane_g3

0xe93c,	// (0x000a8c08) smil2_volume_content_pane_g4

0xe945,	// (0x000a8c11) smil2_volume_content_pane_g5

0xe94e,	// (0x000a8c1a) smil2_volume_content_pane_g6

0xe957,	// (0x000a8c23) smil2_volume_content_pane_g7

0xe960,	// (0x000a8c2c) smil2_volume_content_pane_g8

0xe969,	// (0x000a8c35) smil2_volume_content_pane_g9

0xe972,	// (0x000a8c3e) smil2_volume_content_pane_g10

0x0009,

0xf5d9,	// (0x000a98a5) smil2_volume_content_pane_g

0x0cb9,	// (0x0009af85) cale_week_day_heading_pane_t1_ParamLimits

0x0ce3,	// (0x0009afaf) cale_week_day_heading_pane_t2_ParamLimits

0x0d12,	// (0x0009afde) cale_week_day_heading_pane_t3_ParamLimits

0x0d41,	// (0x0009b00d) cale_week_day_heading_pane_t4_ParamLimits

0x0d70,	// (0x0009b03c) cale_week_day_heading_pane_t5_ParamLimits

0x0da3,	// (0x0009b06f) cale_week_day_heading_pane_t6_ParamLimits

0x0dda,	// (0x0009b0a6) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x000a93f0) cale_week_day_heading_pane_t_ParamLimits

0xc324,	// (0x000a65f0) bg_cale_side_pane_ParamLimits

0x0e04,	// (0x0009b0d0) cale_week_time_pane_t1_ParamLimits

0x0e1e,	// (0x0009b0ea) cale_week_time_pane_t2_ParamLimits

0x0e38,	// (0x0009b104) cale_week_time_pane_t3_ParamLimits

0x0e52,	// (0x0009b11e) cale_week_time_pane_t4_ParamLimits

0x0e6c,	// (0x0009b138) cale_week_time_pane_t5_ParamLimits

0x0e86,	// (0x0009b152) cale_week_time_pane_t6_ParamLimits

0x0ea4,	// (0x0009b170) cale_week_time_pane_t7_ParamLimits

0x0ec6,	// (0x0009b192) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x000a93ff) cale_week_time_pane_t_ParamLimits

0x0eea,	// (0x0009b1b6) cell_cale_week_pane_g2_ParamLimits

0xc324,	// (0x000a65f0) bg_cale_side_pane_cp01_ParamLimits

0x1fab,	// (0x0009c277) cale_month_week_pane_t1_ParamLimits

0x1fc4,	// (0x0009c290) cale_month_week_pane_t2_ParamLimits

0x1fdd,	// (0x0009c2a9) cale_month_week_pane_t3_ParamLimits

0x1ff6,	// (0x0009c2c2) cale_month_week_pane_t4_ParamLimits

0x200f,	// (0x0009c2db) cale_month_week_pane_t5_ParamLimits

0x2028,	// (0x0009c2f4) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x000a94cd) cale_month_week_pane_t_ParamLimits

0xa49f,	// (0x000a476b) cell_cale_month_pane_g1_ParamLimits

0xa153,	// (0x000a441f) main_cale_event_viewer_pane

0x02c8,	// (0x0009a594) listscroll_cale_event_viewer_pane

0xe97b,	// (0x000a8c47) list_cale_ev_pane

0xe983,	// (0x000a8c4f) scroll_pane_cp023

0x398d,	// (0x0009dc59) field_cale_ev_pane_ParamLimits

0x398d,	// (0x0009dc59) field_cale_ev_pane

0xe98f,	// (0x000a8c5b) field_cale_ev_content_pane_ParamLimits

0xe98f,	// (0x000a8c5b) field_cale_ev_content_pane

0xe99b,	// (0x000a8c67) field_cale_ev_pane_g1_ParamLimits

0xe99b,	// (0x000a8c67) field_cale_ev_pane_g1

0xe9a7,	// (0x000a8c73) field_cale_ev_pane_g2_ParamLimits

0xe9a7,	// (0x000a8c73) field_cale_ev_pane_g2

0xe9bf,	// (0x000a8c8b) field_cale_ev_pane_g3_ParamLimits

0xe9bf,	// (0x000a8c8b) field_cale_ev_pane_g3

0x0002,

0xf5ee,	// (0x000a98ba) field_cale_ev_pane_g_ParamLimits

0xf5ee,	// (0x000a98ba) field_cale_ev_pane_g

0xe9d7,	// (0x000a8ca3) field_cale_ev_pane_t1_ParamLimits

0xe9d7,	// (0x000a8ca3) field_cale_ev_pane_t1

0x39b1,	// (0x0009dc7d) field_cale_ev_content_pane_t1_ParamLimits

0x39b1,	// (0x0009dc7d) field_cale_ev_content_pane_t1

0xd3ce,	// (0x000a769a) bg_button_pane_cp01

0x0937,	// (0x0009ac03) listscroll_cale_week_pane_ParamLimits

0xa48c,	// (0x000a4758) popup_toolbar_window_cp01

0xc2f5,	// (0x000a65c1) listscroll_cale_week_pane_t1_ParamLimits

0x221b,	// (0x0009c4e7) listscroll_cale_day_pane_ParamLimits

0xcca1,	// (0x000a6f6d) popup_toolbar_window_cp02

0xccd3,	// (0x000a6f9f) listscroll_cale_day_pane_t1_ParamLimits

0x0937,	// (0x0009ac03) main_cale_month_pane_ParamLimits

0xa5e7,	// (0x000a48b3) popup_toolbar_window_cp03_ParamLimits

0xa5e7,	// (0x000a48b3) popup_toolbar_window_cp03

0x2c81,	// (0x0009cf4d) main_image_pane_g2_ParamLimits

0x2c81,	// (0x0009cf4d) main_image_pane_g2

0x2c92,	// (0x0009cf5e) main_image_pane_g3_ParamLimits

0x2c92,	// (0x0009cf5e) main_image_pane_g3

0x0002,

0xf409,	// (0x000a96d5) main_image_pane_g_ParamLimits

0xf409,	// (0x000a96d5) main_image_pane_g

0xd4e1,	// (0x000a77ad) main_image_pane_t1_ParamLimits

0x2ca3,	// (0x0009cf6f) main_image_pane_t2_ParamLimits

0x2ca3,	// (0x0009cf6f) main_image_pane_t2

0x2cb5,	// (0x0009cf81) main_image_pane_t3_ParamLimits

0x2cb5,	// (0x0009cf81) main_image_pane_t3

0x2cdd,	// (0x0009cfa9) main_image_pane_t4_ParamLimits

0x2cdd,	// (0x0009cfa9) main_image_pane_t4

0x0003,

0xf410,	// (0x000a96dc) main_image_pane_t_ParamLimits

0xf410,	// (0x000a96dc) main_image_pane_t

0x2cfd,	// (0x0009cfc9) popup_image_details_window_cp01

0x2d07,	// (0x0009cfd3) popup_toobar_trans_pane_cp01_ParamLimits

0x2d07,	// (0x0009cfd3) popup_toobar_trans_pane_cp01

0x3489,	// (0x0009d755) popup_image_details_window_ParamLimits

0x3489,	// (0x0009d755) popup_image_details_window

0xa5b8,	// (0x000a4884) popup_image_focus_window

0xa61e,	// (0x000a48ea) camera2_autofocus_pane_ParamLimits

0xa61e,	// (0x000a48ea) camera2_autofocus_pane

0x02c8,	// (0x0009a594) bg_popup_sub_pane_cp06

0xe9ee,	// (0x000a8cba) popup_image_focus_window_g1

0xe9f6,	// (0x000a8cc2) popup_image_focus_window_g2

0xe9fe,	// (0x000a8cca) popup_image_focus_window_g3

0xea06,	// (0x000a8cd2) popup_image_focus_window_g4

0x0003,

0xf5f5,	// (0x000a98c1) popup_image_focus_window_g

0xea0e,	// (0x000a8cda) popup_image_focus_window_t1

0xea1c,	// (0x000a8ce8) popup_image_focus_window_t2

0xea2c,	// (0x000a8cf8) popup_image_focus_window_t3

0x0002,

0xf5fe,	// (0x000a98ca) popup_image_focus_window_t

0xc0f8,	// (0x000a63c4) camera2_autofocus_pane_g1

0xa438,	// (0x000a4704) bg_tb_trans_pane_cp01

0xea3a,	// (0x000a8d06) popup_image_details_window_g1

0xea4d,	// (0x000a8d19) popup_image_details_window_g2

0x0002,

0xf610,	// (0x000a98dc) popup_image_details_window_g

0xea76,	// (0x000a8d42) popup_image_details_window_t1

0xea88,	// (0x000a8d54) popup_image_details_window_t2

0xeaa1,	// (0x000a8d6d) popup_image_details_window_t3

0xeab5,	// (0x000a8d81) popup_image_details_window_t4

0xead0,	// (0x000a8d9c) popup_image_details_window_t5

0x0004,

0xf617,	// (0x000a98e3) popup_image_details_window_t

0xc180,	// (0x000a644c) bg_calc_paper_pane_ParamLimits

0xa153,	// (0x000a441f) grid_highlight_pane_cp013

0xa44e,	// (0x000a471a) list_calc_pane_ParamLimits

0xa460,	// (0x000a472c) scroll_pane_cp024

0xc194,	// (0x000a6460) bg_calc_display_pane_ParamLimits

0x075c,	// (0x0009aa28) calc_display_pane_t1_ParamLimits

0x0771,	// (0x0009aa3d) calc_display_pane_t2_ParamLimits

0xa468,	// (0x000a4734) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x000a9370) calc_display_pane_t_ParamLimits

0x083f,	// (0x0009ab0b) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x000a938d) cell_calc_pane_g

0x0848,	// (0x0009ab14) cell_calc_pane_t1

0xc1e9,	// (0x000a64b5) grid_highlight_pane_cp02_ParamLimits

0xc1ff,	// (0x000a64cb) toolbar_button_pane_cp01_ParamLimits

0xc1ff,	// (0x000a64cb) toolbar_button_pane_cp01

0xd526,	// (0x000a77f2) temp_image_control_pane_ParamLimits

0xd526,	// (0x000a77f2) temp_image_control_pane

0xa145,	// (0x000a4411) main_mp3_pane

0xeaea,	// (0x000a8db6) temp_image_control_pane_g1_ParamLimits

0xeaea,	// (0x000a8db6) temp_image_control_pane_g1

0xeaf8,	// (0x000a8dc4) temp_image_control_pane_g2_ParamLimits

0xeaf8,	// (0x000a8dc4) temp_image_control_pane_g2

0xeb0a,	// (0x000a8dd6) temp_image_control_pane_g3_ParamLimits

0xeb0a,	// (0x000a8dd6) temp_image_control_pane_g3

0x39d2,	// (0x0009dc9e) temp_image_control_pane_g4_ParamLimits

0x39d2,	// (0x0009dc9e) temp_image_control_pane_g4

0x0003,

0xf622,	// (0x000a98ee) temp_image_control_pane_g_ParamLimits

0xf622,	// (0x000a98ee) temp_image_control_pane_g

0xeaea,	// (0x000a8db6) main_mp3_pane_g1

0x39e5,	// (0x0009dcb1) main_mp3_pane_g2

0x0007,

0xf62b,	// (0x000a98f7) main_mp3_pane_g

0xeb3f,	// (0x000a8e0b) main_mp3_pane_t1

0xc106,	// (0x000a63d2) main_camera_pane_g8_ParamLimits

0xc106,	// (0x000a63d2) main_camera_pane_g8

0x10c1,	// (0x0009b38d) main_video_pane_g7_ParamLimits

0x10c1,	// (0x0009b38d) main_video_pane_g7

0xa64e,	// (0x000a491a) main_camera2_pane_t7_ParamLimits

0xa64e,	// (0x000a491a) main_camera2_pane_t7

0xca82,	// (0x000a6d4e) scroll_pane_cp025_ParamLimits

0xca82,	// (0x000a6d4e) scroll_pane_cp025

0xca96,	// (0x000a6d62) scroll_pane_cp026_ParamLimits

0xca96,	// (0x000a6d62) scroll_pane_cp026

0xcaa5,	// (0x000a6d71) wml_content_pane_ParamLimits

0xa153,	// (0x000a441f) main_touch_calib_pane

0x3ab7,	// (0x0009dd83) main_touch_calib_pane_g1

0x3ac9,	// (0x0009dd95) main_touch_calib_pane_g2

0x3adb,	// (0x0009dda7) main_touch_calib_pane_g3

0x3aed,	// (0x0009ddb9) main_touch_calib_pane_g4

0x0003,

0xf649,	// (0x000a9915) main_touch_calib_pane_g

0x3aff,	// (0x0009ddcb) main_touch_calib_pane_t1

0x3b19,	// (0x0009dde5) main_touch_calib_pane_t2

0x0004,

0xf652,	// (0x000a991e) main_touch_calib_pane_t

0xd191,	// (0x000a745d) mup_progress_pane_cp02

0xd1b0,	// (0x000a747c) navi_pane_g1

0xd212,	// (0x000a74de) navi_pane_mp_t3

0xa145,	// (0x000a4411) main_mp3_pane_ParamLimits

0x3642,	// (0x0009d90e) navi_pane_ParamLimits

0xeaea,	// (0x000a8db6) main_mp3_pane_g1_ParamLimits

0x39e5,	// (0x0009dcb1) main_mp3_pane_g2_ParamLimits

0x39f1,	// (0x0009dcbd) main_mp3_pane_g3_ParamLimits

0x39f1,	// (0x0009dcbd) main_mp3_pane_g3

0x39ff,	// (0x0009dccb) main_mp3_pane_g4_ParamLimits

0x39ff,	// (0x0009dccb) main_mp3_pane_g4

0xc0f8,	// (0x000a63c4) main_mp3_pane_g5_ParamLimits

0xc0f8,	// (0x000a63c4) main_mp3_pane_g5

0xeb1a,	// (0x000a8de6) main_mp3_pane_g6_ParamLimits

0xeb1a,	// (0x000a8de6) main_mp3_pane_g6

0xeb27,	// (0x000a8df3) main_mp3_pane_g7_ParamLimits

0xeb27,	// (0x000a8df3) main_mp3_pane_g7

0xeb33,	// (0x000a8dff) main_mp3_pane_g8_ParamLimits

0xeb33,	// (0x000a8dff) main_mp3_pane_g8

0xf62b,	// (0x000a98f7) main_mp3_pane_g_ParamLimits

0x3a0b,	// (0x0009dcd7) main_mp3_pane_t2

0x3a19,	// (0x0009dce5) main_mp3_pane_t3

0xeb4d,	// (0x000a8e19) main_mp3_pane_t4

0xeb5b,	// (0x000a8e27) main_mp3_pane_t5

0x0005,

0xf63c,	// (0x000a9908) main_mp3_pane_t

0xeb69,	// (0x000a8e35) mup_progress_pane_cp01

0xa59c,	// (0x000a4868) aid_zoom_text_secondary2

0xe97b,	// (0x000a8c47) list_cale_ev2_pane

0xe983,	// (0x000a8c4f) scroll_pane_cp023_ParamLimits

0x3b73,	// (0x0009de3f) field_cale_ev2_pane_ParamLimits

0x3b73,	// (0x0009de3f) field_cale_ev2_pane

0x3b97,	// (0x0009de63) field_cale_ev2_pane_g1_ParamLimits

0x3b97,	// (0x0009de63) field_cale_ev2_pane_g1

0x3ba3,	// (0x0009de6f) field_cale_ev2_pane_g2_ParamLimits

0x3ba3,	// (0x0009de6f) field_cale_ev2_pane_g2

0x3bbb,	// (0x0009de87) field_cale_ev2_pane_g3_ParamLimits

0x3bbb,	// (0x0009de87) field_cale_ev2_pane_g3

0x0003,

0xf65d,	// (0x000a9929) field_cale_ev2_pane_g_ParamLimits

0xf65d,	// (0x000a9929) field_cale_ev2_pane_g

0x3bd3,	// (0x0009de9f) field_cale_ev2_pane_t1_ParamLimits

0x3bd3,	// (0x0009de9f) field_cale_ev2_pane_t1

0x3bea,	// (0x0009deb6) field_cale_ev2_pane_t2_ParamLimits

0x3bea,	// (0x0009deb6) field_cale_ev2_pane_t2

0x0001,

0xf666,	// (0x000a9932) field_cale_ev2_pane_t_ParamLimits

0xf666,	// (0x000a9932) field_cale_ev2_pane_t

0x2b41,	// (0x0009ce0d) main_postcard_pane_g5_ParamLimits

0x2b41,	// (0x0009ce0d) main_postcard_pane_g5

0x2b57,	// (0x0009ce23) main_postcard_pane_g6_ParamLimits

0x2b57,	// (0x0009ce23) main_postcard_pane_g6

0xa438,	// (0x000a4704) camera2_autofocus_pane_cp_ParamLimits

0xa438,	// (0x000a4704) camera2_autofocus_pane_cp

0xa145,	// (0x000a4411) main_mup3_pane

0x3c49,	// (0x0009df15) main_mup3_pane_g1_ParamLimits

0x3c49,	// (0x0009df15) main_mup3_pane_g1

0x3c9b,	// (0x0009df67) main_mup3_pane_g2_ParamLimits

0x3c9b,	// (0x0009df67) main_mup3_pane_g2

0x3cfb,	// (0x0009dfc7) main_mup3_pane_g3_ParamLimits

0x3cfb,	// (0x0009dfc7) main_mup3_pane_g3

0x3d63,	// (0x0009e02f) main_mup3_pane_g4_ParamLimits

0x3d63,	// (0x0009e02f) main_mup3_pane_g4

0x3dcb,	// (0x0009e097) main_mup3_pane_g5_ParamLimits

0x3dcb,	// (0x0009e097) main_mup3_pane_g5

0xa6b4,	// (0x000a4980) main_mup3_pane_g6_ParamLimits

0xa6b4,	// (0x000a4980) main_mup3_pane_g6

0xc106,	// (0x000a63d2) main_mup3_pane_g7_ParamLimits

0xc106,	// (0x000a63d2) main_mup3_pane_g7

0x0007,

0xf676,	// (0x000a9942) main_mup3_pane_g_ParamLimits

0xf676,	// (0x000a9942) main_mup3_pane_g

0x3ea4,	// (0x0009e170) main_mup3_pane_t1_ParamLimits

0x3ea4,	// (0x0009e170) main_mup3_pane_t1

0x3f8a,	// (0x0009e256) main_mup3_pane_t2_ParamLimits

0x3f8a,	// (0x0009e256) main_mup3_pane_t2

0x4074,	// (0x0009e340) main_mup3_pane_t4_ParamLimits

0x4074,	// (0x0009e340) main_mup3_pane_t4

0x4086,	// (0x0009e352) main_mup3_pane_t5_ParamLimits

0x4086,	// (0x0009e352) main_mup3_pane_t5

0x4160,	// (0x0009e42c) main_mup3_pane_t6_ParamLimits

0x4160,	// (0x0009e42c) main_mup3_pane_t6

0x0005,

0xf687,	// (0x000a9953) main_mup3_pane_t_ParamLimits

0xf687,	// (0x000a9953) main_mup3_pane_t

0x4208,	// (0x0009e4d4) mup3_progress_pane_ParamLimits

0x4208,	// (0x0009e4d4) mup3_progress_pane

0x4270,	// (0x0009e53c) popup_mup3_control_window_ParamLimits

0x4270,	// (0x0009e53c) popup_mup3_control_window

0xeb7d,	// (0x000a8e49) popup_mup3_text_window

0x4288,	// (0x0009e554) mup3_progress_pane_t1

0x429f,	// (0x0009e56b) mup3_progress_pane_t2

0xeb85,	// (0x000a8e51) mup3_progress_pane_t3

0x0002,

0xf694,	// (0x000a9960) mup3_progress_pane_t

0xeb9c,	// (0x000a8e68) mup_progress_pane_cp03

0xebad,	// (0x000a8e79) bg_tb_trans_pane_cp04

0xebad,	// (0x000a8e79) mup3_volume_pane

0xebb5,	// (0x000a8e81) popup_mup3_control_window_g1

0xebb5,	// (0x000a8e81) mup3_volume_pane_g1

0xebb5,	// (0x000a8e81) mup3_volume_pane_g2

0xebb5,	// (0x000a8e81) mup3_volume_pane_g3

0x0002,

0xf69b,	// (0x000a9967) mup3_volume_pane_g

0x02c8,	// (0x0009a594) bg_tb_trans_pane_cp03

0xebbd,	// (0x000a8e89) popup_mup3_text_window_g1

0xebc5,	// (0x000a8e91) popup_mup3_text_window_t1

0xc1dc,	// (0x000a64a8) list_calc_item_pane_g1_ParamLimits

0xe661,	// (0x000a892d) mup_volume_pane_cp_g1

0x3b33,	// (0x0009ddff) main_touch_calib_pane_t3

0x3b47,	// (0x0009de13) main_touch_calib_pane_t4

0x3b5d,	// (0x0009de29) main_touch_calib_pane_t5

0xa0d2,	// (0x000a439e) aid_cell_size_toolbar2

0xa0da,	// (0x000a43a6) aid_popup3_width_pane

0xa0e6,	// (0x000a43b2) aid_zoom_text_msg_primary

0x0f9a,	// (0x0009b266) vorec_t7

0xc1a0,	// (0x000a646c) bg_calc_paper_pane_g1_ParamLimits

0xc1ac,	// (0x000a6478) bg_calc_paper_pane_g2_ParamLimits

0xc1b8,	// (0x000a6484) bg_calc_paper_pane_g3_ParamLimits

0xc1c4,	// (0x000a6490) bg_calc_paper_pane_g4_ParamLimits

0xc1d0,	// (0x000a649c) bg_calc_paper_pane_g5_ParamLimits

0x07c1,	// (0x0009aa8d) bg_calc_paper_pane_g6_ParamLimits

0x07d4,	// (0x0009aaa0) bg_calc_paper_pane_g7_ParamLimits

0x07e7,	// (0x0009aab3) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x000a9377) bg_calc_paper_pane_g_ParamLimits

0x07fa,	// (0x0009aac6) calc_bg_paper_pane_g9_ParamLimits

0xa438,	// (0x000a4704) image_qvga_pane_ParamLimits

0xa438,	// (0x000a4704) image_qvga_pane

0xc07d,	// (0x000a6349) bg_popup_sub_pane_cp04_ParamLimits

0xd45d,	// (0x000a7729) popup_mup_playback_window_g1_ParamLimits

0xd469,	// (0x000a7735) popup_mup_playback_window_t1_ParamLimits

0xd47e,	// (0x000a774a) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x000a96d0) popup_mup_playback_window_t_ParamLimits

0xc106,	// (0x000a63d2) main_mup2_pane_g3_ParamLimits

0xc106,	// (0x000a63d2) main_mup2_pane_g3

0x125a,	// (0x0009b526) popup_toolbar_window_cp04

0xd802,	// (0x000a7ace) popup_call2_audio_second_window_g3_ParamLimits

0xd802,	// (0x000a7ace) popup_call2_audio_second_window_g3

0xdc1a,	// (0x000a7ee6) popup_call2_audio_first_window_g4_ParamLimits

0xdc1a,	// (0x000a7ee6) popup_call2_audio_first_window_g4

0xe241,	// (0x000a850d) popup_call2_audio_in_window_g4_ParamLimits

0xe241,	// (0x000a850d) popup_call2_audio_in_window_g4

0x2c63,	// (0x0009cf2f) aid_area_sk_bg_cut_ParamLimits

0x2c63,	// (0x0009cf2f) aid_area_sk_bg_cut

0xd493,	// (0x000a775f) aid_area_sk_bg_cut_2_ParamLimits

0xd493,	// (0x000a775f) aid_area_sk_bg_cut_2

0x02c8,	// (0x0009a594) aid_placing_details_win

0x02c8,	// (0x0009a594) aid_placing_details_win_2

0xc0f8,	// (0x000a63c4) camera2_autofocus_pane_g1_ParamLimits

0x0497,	// (0x0009a763) popup_fixed_preview_cale_window_ParamLimits

0x0497,	// (0x0009a763) popup_fixed_preview_cale_window

0xd259,	// (0x000a7525) navi_slider_pane_g3

0xd262,	// (0x000a752e) navi_slider_pane_g4

0xd26b,	// (0x000a7537) navi_slider_pane_g5

0xd259,	// (0x000a7525) navi_slider_pane_g6

0xa551,	// (0x000a481d) navi_slider_pane_g7

0xd39b,	// (0x000a7667) mup_scale_pane_g3

0xd3a4,	// (0x000a7670) mup_scale_pane_g4

0xd3ad,	// (0x000a7679) mup_scale_pane_g5

0x28e5,	// (0x0009cbb1) mup_scale_pane_g6

0x28ee,	// (0x0009cbba) mup_scale_pane_g7

0xa6aa,	// (0x000a4976) cams2_slider_pane_g3

0xa6aa,	// (0x000a4976) cams2_slider_pane_g4

0xa6aa,	// (0x000a4976) cams2_slider_pane_g5

0xa6aa,	// (0x000a4976) cams2_slider_pane_g6

0xa6aa,	// (0x000a4976) cams2_slider_pane_g7

0xc136,	// (0x000a6402) camera2_autofocus_pane_cp_g1

0xe4d1,	// (0x000a879d) bg_popup_preview_window_pane_cp02_ParamLimits

0xe4d1,	// (0x000a879d) bg_popup_preview_window_pane_cp02

0xebd3,	// (0x000a8e9f) list_fp_cale_pane_ParamLimits

0xebd3,	// (0x000a8e9f) list_fp_cale_pane

0xebdf,	// (0x000a8eab) popup_fixed_preview_cale_window_t1_ParamLimits

0xebdf,	// (0x000a8eab) popup_fixed_preview_cale_window_t1

0x42b6,	// (0x0009e582) popup_fixed_preview_cale_window_t2_ParamLimits

0x42b6,	// (0x0009e582) popup_fixed_preview_cale_window_t2

0x42cb,	// (0x0009e597) popup_fixed_preview_cale_window_t3_ParamLimits

0x42cb,	// (0x0009e597) popup_fixed_preview_cale_window_t3

0x0002,

0xf6a2,	// (0x000a996e) popup_fixed_preview_cale_window_t_ParamLimits

0xf6a2,	// (0x000a996e) popup_fixed_preview_cale_window_t

0x42e2,	// (0x0009e5ae) list_single_fp_cale_pane_ParamLimits

0x42e2,	// (0x0009e5ae) list_single_fp_cale_pane

0xebfd,	// (0x000a8ec9) list_single_fp_cale_pane_g1_ParamLimits

0xebfd,	// (0x000a8ec9) list_single_fp_cale_pane_g1

0xec09,	// (0x000a8ed5) list_single_fp_cale_pane_g2_ParamLimits

0xec09,	// (0x000a8ed5) list_single_fp_cale_pane_g2

0x0002,

0xf6a9,	// (0x000a9975) list_single_fp_cale_pane_g_ParamLimits

0xf6a9,	// (0x000a9975) list_single_fp_cale_pane_g

0xec22,	// (0x000a8eee) list_single_fp_cale_pane_t1_ParamLimits

0xec22,	// (0x000a8eee) list_single_fp_cale_pane_t1

0xec34,	// (0x000a8f00) list_single_fp_cale_pane_t2_ParamLimits

0xec34,	// (0x000a8f00) list_single_fp_cale_pane_t2

0x0001,

0xf6b0,	// (0x000a997c) list_single_fp_cale_pane_t_ParamLimits

0xf6b0,	// (0x000a997c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa153,	// (0x000a441f) main_dialer_pane

0x02c8,	// (0x0009a594) aid_cell_size_keypad

0x02c8,	// (0x0009a594) dialer_ne_pane

0x02c8,	// (0x0009a594) grid_dialer_command_1_pane

0x02c8,	// (0x0009a594) grid_dialer_command_2_pane

0x02c8,	// (0x0009a594) grid_dialer_keypad_pane

0x42f7,	// (0x0009e5c3) bg_popup_call_pane_cp06_ParamLimits

0x42f7,	// (0x0009e5c3) bg_popup_call_pane_cp06

0x42f7,	// (0x0009e5c3) dialer_ne_clear_pane_ParamLimits

0x42f7,	// (0x0009e5c3) dialer_ne_clear_pane

0xc136,	// (0x000a6402) dialer_ne_pane_g1

0xc154,	// (0x000a6420) dialer_ne_pane_t1_ParamLimits

0xc154,	// (0x000a6420) dialer_ne_pane_t1

0x4305,	// (0x0009e5d1) dialer_ne_pane_t2_ParamLimits

0x4305,	// (0x0009e5d1) dialer_ne_pane_t2

0x432d,	// (0x0009e5f9) dialer_ne_pane_t3_ParamLimits

0x432d,	// (0x0009e5f9) dialer_ne_pane_t3

0x0002,

0xf6b5,	// (0x000a9981) dialer_ne_pane_t_ParamLimits

0xf6b5,	// (0x000a9981) dialer_ne_pane_t

0x432d,	// (0x0009e5f9) dialer_ne_pane_t3_copy1_ParamLimits

0x432d,	// (0x0009e5f9) dialer_ne_pane_t3_copy1

0xec67,	// (0x000a8f33) cell_dialer_keypad_pane_ParamLimits

0xec67,	// (0x000a8f33) cell_dialer_keypad_pane

0xa438,	// (0x000a4704) cell_dialer_command_1_pane_ParamLimits

0xa438,	// (0x000a4704) cell_dialer_command_1_pane

0xec7e,	// (0x000a8f4a) cell_dialer_command_2_pane_ParamLimits

0xec7e,	// (0x000a8f4a) cell_dialer_command_2_pane

0xa438,	// (0x000a4704) bg_button_pane_cp02_ParamLimits

0xa438,	// (0x000a4704) bg_button_pane_cp02

0xc0f8,	// (0x000a63c4) cell_dialer_keypad_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) cell_dialer_keypad_pane_g1

0xa438,	// (0x000a4704) bg_button_pane_cp03_ParamLimits

0xa438,	// (0x000a4704) bg_button_pane_cp03

0xc0f8,	// (0x000a63c4) cell_dialer_command_1_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) cell_dialer_command_1_pane_g1

0x02c8,	// (0x0009a594) bg_button_pane_cp04

0xc136,	// (0x000a6402) cell_dialer_command_2_pane_g1

0x02c8,	// (0x0009a594) bg_button_pane_cp06

0xc136,	// (0x000a6402) dialer_ne_clear_pane_g1

0x25f4,	// (0x0009c8c0) navi_pane_g2

0x2622,	// (0x0009c8ee) navi_pane_g3

0x0002,

0xf30c,	// (0x000a95d8) navi_pane_g

0x264d,	// (0x0009c919) navi_pane_mv_g2

0x2674,	// (0x0009c940) navi_pane_mv_g5

0x267c,	// (0x0009c948) navi_pane_mv_t1

0xc194,	// (0x000a6460) main_clock2_pane

0xa438,	// (0x000a4704) main_clock2_list_pane_ParamLimits

0xa438,	// (0x000a4704) main_clock2_list_pane

0x43c0,	// (0x0009e68c) main_clock2_pane_t1_ParamLimits

0x43c0,	// (0x0009e68c) main_clock2_pane_t1

0x43fb,	// (0x0009e6c7) main_clock2_pane_t2_ParamLimits

0x43fb,	// (0x0009e6c7) main_clock2_pane_t2

0x0004,

0xf6c1,	// (0x000a998d) main_clock2_pane_t_ParamLimits

0xf6c1,	// (0x000a998d) main_clock2_pane_t

0x4491,	// (0x0009e75d) popup_clock_analogue_window_cp03_ParamLimits

0x4491,	// (0x0009e75d) popup_clock_analogue_window_cp03

0x44b6,	// (0x0009e782) popup_clock_digital_window_cp02_ParamLimits

0x44b6,	// (0x0009e782) popup_clock_digital_window_cp02

0x452f,	// (0x0009e7fb) main_clock2_list_single_pane_ParamLimits

0x452f,	// (0x0009e7fb) main_clock2_list_single_pane

0xc37f,	// (0x000a664b) list_highlight_pane_cp05

0xecfe,	// (0x000a8fca) main_clock2_list_single_pane_t1

0x125a,	// (0x0009b526) popup_toolbar_window_cp04_ParamLimits

0xc106,	// (0x000a63d2) camera2_autofocus_pane_g2_ParamLimits

0xc106,	// (0x000a63d2) camera2_autofocus_pane_g2

0xc106,	// (0x000a63d2) camera2_autofocus_pane_g3_ParamLimits

0xc106,	// (0x000a63d2) camera2_autofocus_pane_g3

0xc106,	// (0x000a63d2) camera2_autofocus_pane_g4_ParamLimits

0xc106,	// (0x000a63d2) camera2_autofocus_pane_g4

0xc106,	// (0x000a63d2) camera2_autofocus_pane_g5_ParamLimits

0xc106,	// (0x000a63d2) camera2_autofocus_pane_g5

0x0004,

0xf605,	// (0x000a98d1) camera2_autofocus_pane_g_ParamLimits

0xf605,	// (0x000a98d1) camera2_autofocus_pane_g

0x3bff,	// (0x0009decb) camera2_autofocus_pane_cp_g2

0x3c07,	// (0x0009ded3) camera2_autofocus_pane_cp_g3

0x3c0f,	// (0x0009dedb) camera2_autofocus_pane_cp_g4

0x3c17,	// (0x0009dee3) camera2_autofocus_pane_cp_g5

0x0004,

0xf66b,	// (0x000a9937) camera2_autofocus_pane_cp_g

0x02c8,	// (0x0009a594) popup_dialer_spcha_window

0x02c8,	// (0x0009a594) bg_popup_sub_pane_cp07

0x02c8,	// (0x0009a594) list_spcha_pane

0xed0c,	// (0x000a8fd8) list_single_spcha_pane_ParamLimits

0xed0c,	// (0x000a8fd8) list_single_spcha_pane

0x02c8,	// (0x0009a594) list_highlight_pane_cp06

0xce88,	// (0x000a7154) list_single_spcha_pane_t1

0xdfeb,	// (0x000a82b7) popup_call2_audio_out_window_g4_ParamLimits

0xdfeb,	// (0x000a82b7) popup_call2_audio_out_window_g4

0xa153,	// (0x000a441f) main_imed2_pane

0xa5c2,	// (0x000a488e) popup_imed_adjust2_window

0x34a1,	// (0x0009d76d) popup_imed_trans_window_ParamLimits

0x34a1,	// (0x0009d76d) popup_imed_trans_window

0xe744,	// (0x000a8a10) popup_blid_sat_info2_window_t1

0xe752,	// (0x000a8a1e) popup_blid_sat_info2_window_t2

0x000a,

0xf59a,	// (0x000a9866) popup_blid_sat_info2_window_t

0x45ea,	// (0x0009e8b6) aid_size_cell_colour_35

0x460a,	// (0x0009e8d6) aid_size_cell_colour_112

0x462a,	// (0x0009e8f6) aid_size_cell_effect

0xd329,	// (0x000a75f5) bg_tb_trans_pane_cp02

0x464a,	// (0x0009e916) heading_imed_pane

0x4656,	// (0x0009e922) listscroll_imed_pane

0xed1e,	// (0x000a8fea) heading_imed_pane_g1

0xed26,	// (0x000a8ff2) heading_imed_pane_t1

0xed34,	// (0x000a9000) grid_imed_colour_35_pane_ParamLimits

0xed34,	// (0x000a9000) grid_imed_colour_35_pane

0x4662,	// (0x0009e92e) grid_imed_effect_pane

0xed50,	// (0x000a901c) list_imed_aspect_pane

0x4679,	// (0x0009e945) scroll_pane_cp027_ParamLimits

0x4679,	// (0x0009e945) scroll_pane_cp027

0x468a,	// (0x0009e956) cell_imed_effect_pane_ParamLimits

0x468a,	// (0x0009e956) cell_imed_effect_pane

0xed58,	// (0x000a9024) cell_imed_colour_pane_ParamLimits

0xed58,	// (0x000a9024) cell_imed_colour_pane

0xeda2,	// (0x000a906e) cell_imed_colour_pane_g1_ParamLimits

0xeda2,	// (0x000a906e) cell_imed_colour_pane_g1

0xedb3,	// (0x000a907f) hgihlgiht_grid_pane_cp016_ParamLimits

0xedb3,	// (0x000a907f) hgihlgiht_grid_pane_cp016

0x46b5,	// (0x0009e981) cell_imed_effect_pane_g1

0x46bd,	// (0x0009e989) grid_highlight_pane_cp017

0xedc4,	// (0x000a9090) list_imed_single_pane_ParamLimits

0xedc4,	// (0x000a9090) list_imed_single_pane

0x02c8,	// (0x0009a594) list_highlight_pane_cp07

0xedd8,	// (0x000a90a4) list_imed_aspect_pane_comp1_t1

0xd329,	// (0x000a75f5) bg_tb_trans_pane_cp05

0xedfa,	// (0x000a90c6) popup_imed_adjust2_window_g1

0xee21,	// (0x000a90ed) popup_imed_adjust2_window_t1

0xee39,	// (0x000a9105) slider_imed_adjust_pane

0xee4d,	// (0x000a9119) slider_imed_adjust_pane_g1

0xee5d,	// (0x000a9129) slider_imed_adjust_pane_g2

0xee6d,	// (0x000a9139) slider_imed_adjust_pane_g3

0xee7e,	// (0x000a914a) slider_imed_adjust_pane_g4

0x0003,

0xf6de,	// (0x000a99aa) slider_imed_adjust_pane_g

0x46c6,	// (0x0009e992) aid_size_cell_clipart2

0xee8f,	// (0x000a915b) grid_imed_clipart_pane

0xd3be,	// (0x000a768a) scroll_pane_cp031

0x46d2,	// (0x0009e99e) cell_imed_clipart_pane_ParamLimits

0x46d2,	// (0x0009e99e) cell_imed_clipart_pane

0x46ef,	// (0x0009e9bb) cell_imed_clipart_pane_g1

0x02c8,	// (0x0009a594) grid_highlight_pane_cp014

0x439c,	// (0x0009e668) main_clock2_pane_g1_ParamLimits

0x439c,	// (0x0009e668) main_clock2_pane_g1

0x44d6,	// (0x0009e7a2) aid_call2_pane_cp10

0x44e8,	// (0x0009e7b4) aid_call_pane_cp10

0xd185,	// (0x000a7451) popup_clock_analogue_window_cp10_g1

0xd185,	// (0x000a7451) popup_clock_analogue_window_cp10_g2

0x44fa,	// (0x0009e7c6) popup_clock_analogue_window_cp10_g3

0x44fa,	// (0x0009e7c6) popup_clock_analogue_window_cp10_g4

0xd185,	// (0x000a7451) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6cc,	// (0x000a9998) popup_clock_analogue_window_cp10_g

0x4510,	// (0x0009e7dc) popup_clock_analogue_window_cp10_t1

0x4541,	// (0x0009e80d) clock_digital_number_pane_cp10_ParamLimits

0x4541,	// (0x0009e80d) clock_digital_number_pane_cp10

0x455b,	// (0x0009e827) clock_digital_number_pane_cp11_ParamLimits

0x455b,	// (0x0009e827) clock_digital_number_pane_cp11

0x4575,	// (0x0009e841) clock_digital_number_pane_cp12_ParamLimits

0x4575,	// (0x0009e841) clock_digital_number_pane_cp12

0x4591,	// (0x0009e85d) clock_digital_number_pane_cp13_ParamLimits

0x4591,	// (0x0009e85d) clock_digital_number_pane_cp13

0x45ad,	// (0x0009e879) clock_digital_separator_pane_cp10_ParamLimits

0x45ad,	// (0x0009e879) clock_digital_separator_pane_cp10

0x45c9,	// (0x0009e895) popup_clock_digital_window_cp02_t1_ParamLimits

0x45c9,	// (0x0009e895) popup_clock_digital_window_cp02_t1

0xc075,	// (0x000a6341) clock_digital_number_pane_cp10_g1

0xc075,	// (0x000a6341) clock_digital_number_pane_cp10_g2

0x0001,

0xf6e7,	// (0x000a99b3) clock_digital_number_pane_cp10_g

0xc075,	// (0x000a6341) clock_digital_separator_pane_cp10_g1

0xc075,	// (0x000a6341) clock_digital_separator_pane_g2_cp10

0xd220,	// (0x000a74ec) navi_pane_vded_g4

0xd229,	// (0x000a74f5) navi_pane_vded_g5

0xd232,	// (0x000a74fe) navi_pane_vded_t1

0xa153,	// (0x000a441f) main_vded_pane

0x46f8,	// (0x0009e9c4) main_vded_pane_g1

0x4704,	// (0x0009e9d0) main_vded_pane_g2

0x4710,	// (0x0009e9dc) main_vded_pane_g3

0x0002,

0xf6ec,	// (0x000a99b8) main_vded_pane_g

0x471c,	// (0x0009e9e8) main_vded_pane_t1

0x472a,	// (0x0009e9f6) main_vded_pane_t2

0x0001,

0xf6f3,	// (0x000a99bf) main_vded_pane_t

0x4738,	// (0x0009ea04) vded_slider_pane

0x4742,	// (0x0009ea0e) vded_video_pane

0xee99,	// (0x000a9165) vded_video_pane_g1

0x474e,	// (0x0009ea1a) vded_video_pane_g2

0xc136,	// (0x000a6402) vded_video_pane_g3

0x0002,

0xf6f8,	// (0x000a99c4) vded_video_pane_g

0xeea3,	// (0x000a916f) vded_slider_pane_g1

0xe661,	// (0x000a892d) vded_slider_pane_g2

0xeeac,	// (0x000a9178) vded_slider_pane_g3

0xeeb5,	// (0x000a9181) vded_slider_pane_g4

0xeebe,	// (0x000a918a) vded_slider_pane_g5

0x0004,

0xf6ff,	// (0x000a99cb) vded_slider_pane_g

0xa6c0,	// (0x000a498c) mup3_rocker_pane_ParamLimits

0xa6c0,	// (0x000a498c) mup3_rocker_pane

0xebb5,	// (0x000a8e81) mup3_control_keys_pane_g1

0xeec7,	// (0x000a9193) mup3_control_keys_pane_g2

0xebb5,	// (0x000a8e81) mup3_control_keys_pane_g3

0xeecf,	// (0x000a919b) mup3_control_keys_pane_g4

0x0003,

0xf70a,	// (0x000a99d6) mup3_control_keys_pane_g

0x04ce,	// (0x0009a79a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x04ce,	// (0x0009a79a) popup_toolbar2_fixed_window_cp01

0xa6c0,	// (0x000a498c) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa6c0,	// (0x000a498c) popup_toolbar2_fixed_window_cp02

0xd974,	// (0x000a7c40) popup_call2_audio_second_window_t4_ParamLimits

0xd974,	// (0x000a7c40) popup_call2_audio_second_window_t4

0xdeb0,	// (0x000a817c) popup_call2_audio_first_window_t6_ParamLimits

0xdeb0,	// (0x000a817c) popup_call2_audio_first_window_t6

0xe0ee,	// (0x000a83ba) popup_call2_audio_out_window_t6_ParamLimits

0xe0ee,	// (0x000a83ba) popup_call2_audio_out_window_t6

0xa153,	// (0x000a441f) main_vitu_pane

0xa438,	// (0x000a4704) aid_size_cell_itu_ParamLimits

0xa438,	// (0x000a4704) aid_size_cell_itu

0xa438,	// (0x000a4704) bg_popup_window_pane_cp08_ParamLimits

0xa438,	// (0x000a4704) bg_popup_window_pane_cp08

0xa438,	// (0x000a4704) field_vitu_entry_pane_ParamLimits

0xa438,	// (0x000a4704) field_vitu_entry_pane

0xa438,	// (0x000a4704) grid_vitu_function_pane_ParamLimits

0xa438,	// (0x000a4704) grid_vitu_function_pane

0xa438,	// (0x000a4704) grid_vitu_itu_pane_ParamLimits

0xa438,	// (0x000a4704) grid_vitu_itu_pane

0xa438,	// (0x000a4704) cell_vitu_itu_pane_ParamLimits

0xa438,	// (0x000a4704) cell_vitu_itu_pane

0xa438,	// (0x000a4704) cell_vitu_function_pane_ParamLimits

0xa438,	// (0x000a4704) cell_vitu_function_pane

0xa438,	// (0x000a4704) bg_popup_sub_pane_cp08_ParamLimits

0xa438,	// (0x000a4704) bg_popup_sub_pane_cp08

0xc140,	// (0x000a640c) field_vitu_entry_pane_t1_ParamLimits

0xc140,	// (0x000a640c) field_vitu_entry_pane_t1

0xecb1,	// (0x000a8f7d) field_vitu_entry_pane_t2_ParamLimits

0xecb1,	// (0x000a8f7d) field_vitu_entry_pane_t2

0x0001,

0xf713,	// (0x000a99df) field_vitu_entry_pane_t_ParamLimits

0xf713,	// (0x000a99df) field_vitu_entry_pane_t

0xe6eb,	// (0x000a89b7) bg_button_pane_cp05_ParamLimits

0xe6eb,	// (0x000a89b7) bg_button_pane_cp05

0xeed7,	// (0x000a91a3) cell_vitu_itu_pane_g1

0xd315,	// (0x000a75e1) cell_vitu_itu_pane_t1_ParamLimits

0xd315,	// (0x000a75e1) cell_vitu_itu_pane_t1

0xd315,	// (0x000a75e1) cell_vitu_itu_pane_t2_ParamLimits

0xd315,	// (0x000a75e1) cell_vitu_itu_pane_t2

0x0002,

0xf718,	// (0x000a99e4) cell_vitu_itu_pane_t_ParamLimits

0xf718,	// (0x000a99e4) cell_vitu_itu_pane_t

0x02c8,	// (0x0009a594) bg_button_pane_cp07

0xc136,	// (0x000a6402) cell_vitu_function_pane_g1

0xa446,	// (0x000a4712) main_calc_pane_g1

0x02f6,	// (0x0009a5c2) aid_visual_content_pane

0xa153,	// (0x000a441f) main_vradio_pane

0xc0f8,	// (0x000a63c4) main_vradio_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) main_vradio_pane_g1

0xc106,	// (0x000a63d2) main_vradio_pane_g2_ParamLimits

0xc106,	// (0x000a63d2) main_vradio_pane_g2

0x0001,

0xf71f,	// (0x000a99eb) main_vradio_pane_g_ParamLimits

0xf71f,	// (0x000a99eb) main_vradio_pane_g

0xc140,	// (0x000a640c) main_vradio_pane_t1_ParamLimits

0xc140,	// (0x000a640c) main_vradio_pane_t1

0xc140,	// (0x000a640c) main_vradio_pane_t2_ParamLimits

0xc140,	// (0x000a640c) main_vradio_pane_t2

0xc154,	// (0x000a6420) main_vradio_pane_t3_ParamLimits

0xc154,	// (0x000a6420) main_vradio_pane_t3

0x0002,

0xf724,	// (0x000a99f0) main_vradio_pane_t_ParamLimits

0xf724,	// (0x000a99f0) main_vradio_pane_t

0xa438,	// (0x000a4704) vradio_rocker_control_pane_ParamLimits

0xa438,	// (0x000a4704) vradio_rocker_control_pane

0xa438,	// (0x000a4704) vradio_station_info_pane_ParamLimits

0xa438,	// (0x000a4704) vradio_station_info_pane

0xa438,	// (0x000a4704) vradio_frequency_info_pane_ParamLimits

0xa438,	// (0x000a4704) vradio_frequency_info_pane

0xc136,	// (0x000a6402) vradio_station_info_pane_g1

0xd315,	// (0x000a75e1) vradio_station_info_pane_t1_ParamLimits

0xd315,	// (0x000a75e1) vradio_station_info_pane_t1

0xc154,	// (0x000a6420) vradio_station_info_pane_t2_ParamLimits

0xc154,	// (0x000a6420) vradio_station_info_pane_t2

0x0001,

0xf72b,	// (0x000a99f7) vradio_station_info_pane_t_ParamLimits

0xf72b,	// (0x000a99f7) vradio_station_info_pane_t

0x02c8,	// (0x0009a594) vradio_tuning_pane

0x4757,	// (0x0009ea23) vradio_rocker_control_pane_g1

0xeef3,	// (0x000a91bf) vradio_rocker_control_pane_g2

0x4761,	// (0x0009ea2d) vradio_rocker_control_pane_g3

0x476b,	// (0x0009ea37) vradio_rocker_control_pane_g4

0x4775,	// (0x0009ea41) vradio_rocker_control_pane_g5

0x0004,

0xf730,	// (0x000a99fc) vradio_rocker_control_pane_g

0xc136,	// (0x000a6402) vradio_frequency_info_pane_g1

0xc140,	// (0x000a640c) vradio_frequency_info_pane_t1_ParamLimits

0xc140,	// (0x000a640c) vradio_frequency_info_pane_t1

0x477f,	// (0x0009ea4b) vradio_tuning_pane_g1

0x478a,	// (0x0009ea56) vradio_tuning_pane_t1

0xa0fe,	// (0x000a43ca) area_side_right_pane_ParamLimits

0xa0fe,	// (0x000a43ca) area_side_right_pane

0xe498,	// (0x000a8764) status_small_pane_g1

0xe4a0,	// (0x000a876c) status_small_pane_g2

0xe4a9,	// (0x000a8775) status_small_pane_g3

0xe4b2,	// (0x000a877e) status_small_pane_g4

0x0003,

0xf4fc,	// (0x000a97c8) status_small_pane_g

0xe4bb,	// (0x000a8787) status_small_pane_t1

0xa153,	// (0x000a441f) main_video3_pane

0x02c8,	// (0x0009a594) cams_zoom_vslider_pane

0xeefb,	// (0x000a91c7) image3_wide_pane_ParamLimits

0xeefb,	// (0x000a91c7) image3_wide_pane

0x02c8,	// (0x0009a594) image3_wide_small_pane

0xef15,	// (0x000a91e1) main_video3_pane_g1_ParamLimits

0xef15,	// (0x000a91e1) main_video3_pane_g1

0xef15,	// (0x000a91e1) main_video3_pane_g2_ParamLimits

0xef15,	// (0x000a91e1) main_video3_pane_g2

0x0001,

0xf73b,	// (0x000a9a07) main_video3_pane_g_ParamLimits

0xf73b,	// (0x000a9a07) main_video3_pane_g

0xef33,	// (0x000a91ff) main_video3_pane_t1_ParamLimits

0xef33,	// (0x000a91ff) main_video3_pane_t1

0xef33,	// (0x000a91ff) main_video3_pane_t2_ParamLimits

0xef33,	// (0x000a91ff) main_video3_pane_t2

0xef33,	// (0x000a91ff) main_video3_pane_t3_ParamLimits

0xef33,	// (0x000a91ff) main_video3_pane_t3

0x0002,

0xf740,	// (0x000a9a0c) main_video3_pane_t_ParamLimits

0xf740,	// (0x000a9a0c) main_video3_pane_t

0xc136,	// (0x000a6402) cams_zoom_vslider_pane_g1

0xc136,	// (0x000a6402) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x000a9358) cams_zoom_vslider_pane_g

0x02c8,	// (0x0009a594) small_slider_vertical_pane

0xc136,	// (0x000a6402) small_slider_vertical_pane_g1

0xc136,	// (0x000a6402) small_slider_vertical_pane_g2

0xef5a,	// (0x000a9226) small_slider_vertical_pane_g3

0x0002,

0xf747,	// (0x000a9a13) small_slider_vertical_pane_g

0xa153,	// (0x000a441f) main_hwr_training_pane

0xef63,	// (0x000a922f) hwr_training_instruct_pane_ParamLimits

0xef63,	// (0x000a922f) hwr_training_instruct_pane

0x4799,	// (0x0009ea65) hwr_training_navi_pane_ParamLimits

0x4799,	// (0x0009ea65) hwr_training_navi_pane

0x47b8,	// (0x0009ea84) hwr_training_write_pane_ParamLimits

0x47b8,	// (0x0009ea84) hwr_training_write_pane

0x02c8,	// (0x0009a594) bg_frame_shadow_pane

0xef9a,	// (0x000a9266) hwr_training_write_pane_g1

0xefa2,	// (0x000a926e) hwr_training_write_pane_g2

0xefaa,	// (0x000a9276) hwr_training_write_pane_g3

0xefb2,	// (0x000a927e) hwr_training_write_pane_g4

0xefba,	// (0x000a9286) hwr_training_write_pane_g5

0xefc2,	// (0x000a928e) hwr_training_write_pane_g6

0xefca,	// (0x000a9296) hwr_training_write_pane_g7

0x0006,

0xf74e,	// (0x000a9a1a) hwr_training_write_pane_g

0xa6cc,	// (0x000a4998) hwr_training_navi_pane_g1_ParamLimits

0xa6cc,	// (0x000a4998) hwr_training_navi_pane_g1

0xa6de,	// (0x000a49aa) hwr_training_navi_pane_g2_ParamLimits

0xa6de,	// (0x000a49aa) hwr_training_navi_pane_g2

0xa6f0,	// (0x000a49bc) hwr_training_navi_pane_g3_ParamLimits

0xa6f0,	// (0x000a49bc) hwr_training_navi_pane_g3

0xa700,	// (0x000a49cc) hwr_training_navi_pane_g4_ParamLimits

0xa700,	// (0x000a49cc) hwr_training_navi_pane_g4

0x0004,

0xf75d,	// (0x000a9a29) hwr_training_navi_pane_g_ParamLimits

0xf75d,	// (0x000a9a29) hwr_training_navi_pane_g

0xa70d,	// (0x000a49d9) hwr_training_navi_pane_t1

0x4800,	// (0x0009eacc) list_single_hwr_training_instruct_pane_ParamLimits

0x4800,	// (0x0009eacc) list_single_hwr_training_instruct_pane

0xefd2,	// (0x000a929e) list_single_hwr_training_instruct_pane_t1

0xe84b,	// (0x000a8b17) bg_frame_shadow_pane_g1

0xefe1,	// (0x000a92ad) bg_frame_shadow_pane_g2

0xefe9,	// (0x000a92b5) bg_frame_shadow_pane_g3

0xeff1,	// (0x000a92bd) bg_frame_shadow_pane_g4

0xeff9,	// (0x000a92c5) bg_frame_shadow_pane_g5

0xf001,	// (0x000a92cd) bg_frame_shadow_pane_g6

0xf009,	// (0x000a92d5) bg_frame_shadow_pane_g7

0xc243,	// (0x000a650f) bg_frame_shadow_pane_g8

0x0007,

0xf768,	// (0x000a9a34) bg_frame_shadow_pane_g

0xa153,	// (0x000a441f) main_video_tele_dialer_pane

0x481c,	// (0x0009eae8) aid_size_cell_video_keypad_ParamLimits

0x481c,	// (0x0009eae8) aid_size_cell_video_keypad

0x4836,	// (0x0009eb02) grid_video_dialer_keypad_pane_ParamLimits

0x4836,	// (0x0009eb02) grid_video_dialer_keypad_pane

0x4882,	// (0x0009eb4e) video_down_pane_cp_ParamLimits

0x4882,	// (0x0009eb4e) video_down_pane_cp

0x48b4,	// (0x0009eb80) cell_video_dialer_keypad_pane_ParamLimits

0x48b4,	// (0x0009eb80) cell_video_dialer_keypad_pane

0xf011,	// (0x000a92dd) bg_button_pane_cp08_ParamLimits

0xf011,	// (0x000a92dd) bg_button_pane_cp08

0x48da,	// (0x0009eba6) cell_video_dialer_keypad_pane_g1_ParamLimits

0x48da,	// (0x0009eba6) cell_video_dialer_keypad_pane_g1

0xa6c0,	// (0x000a498c) mup3_rocker2_pane_ParamLimits

0xa6c0,	// (0x000a498c) mup3_rocker2_pane

0xc136,	// (0x000a6402) mup3_rocker2_pane_g1

0x336e,	// (0x0009d63a) main_dialer2_pane

0xa153,	// (0x000a441f) main_mp4_pane

0xa739,	// (0x000a4a05) main_mp4_pane_g1_ParamLimits

0xa739,	// (0x000a4a05) main_mp4_pane_g1

0xa739,	// (0x000a4a05) main_mp4_pane_g2_ParamLimits

0xa739,	// (0x000a4a05) main_mp4_pane_g2

0x4915,	// (0x0009ebe1) main_mp4_pane_g3_ParamLimits

0x4915,	// (0x0009ebe1) main_mp4_pane_g3

0xa757,	// (0x000a4a23) main_mp4_pane_g4_ParamLimits

0xa757,	// (0x000a4a23) main_mp4_pane_g4

0xa77f,	// (0x000a4a4b) main_mp4_pane_g5_ParamLimits

0xa77f,	// (0x000a4a4b) main_mp4_pane_g5

0x0007,

0xf788,	// (0x000a9a54) main_mp4_pane_g_ParamLimits

0xf788,	// (0x000a9a54) main_mp4_pane_g

0xa7e7,	// (0x000a4ab3) main_mp4_pane_t1_ParamLimits

0xa7e7,	// (0x000a4ab3) main_mp4_pane_t1

0xa849,	// (0x000a4b15) main_mp4_pane_t2_ParamLimits

0xa849,	// (0x000a4b15) main_mp4_pane_t2

0xa8ad,	// (0x000a4b79) main_mp4_pane_t3_ParamLimits

0xa8ad,	// (0x000a4b79) main_mp4_pane_t3

0xa90b,	// (0x000a4bd7) main_mp4_pane_t4_ParamLimits

0xa90b,	// (0x000a4bd7) main_mp4_pane_t4

0x0003,

0xf799,	// (0x000a9a65) main_mp4_pane_t_ParamLimits

0xf799,	// (0x000a9a65) main_mp4_pane_t

0xa969,	// (0x000a4c35) mp4_progress_pane_ParamLimits

0xa969,	// (0x000a4c35) mp4_progress_pane

0xa99d,	// (0x000a4c69) mp4_rocker_pane_ParamLimits

0xa99d,	// (0x000a4c69) mp4_rocker_pane

0x494f,	// (0x0009ec1b) mp4_progress_pane_t1

0x496d,	// (0x0009ec39) mp4_progress_pane_t2

0x0001,

0xf7a2,	// (0x000a9a6e) mp4_progress_pane_t

0x498c,	// (0x0009ec58) mup_progress_pane_cp04

0xa6aa,	// (0x000a4976) mp4_rocker_pane_g1

0xa145,	// (0x000a4411) aid_cell_size_keypad2_ParamLimits

0xa145,	// (0x000a4411) aid_cell_size_keypad2

0xa145,	// (0x000a4411) dialer2_ne_pane_ParamLimits

0xa145,	// (0x000a4411) dialer2_ne_pane

0xa145,	// (0x000a4411) grid_dialer2_keypad_pane_ParamLimits

0xa145,	// (0x000a4411) grid_dialer2_keypad_pane

0xe6eb,	// (0x000a89b7) bg_popup_call_pane_cp07_ParamLimits

0xe6eb,	// (0x000a89b7) bg_popup_call_pane_cp07

0x499f,	// (0x0009ec6b) dialer2_ne_pane_t1_ParamLimits

0x499f,	// (0x0009ec6b) dialer2_ne_pane_t1

0x49f1,	// (0x0009ecbd) cell_dialer2_keypad_pane_ParamLimits

0x49f1,	// (0x0009ecbd) cell_dialer2_keypad_pane

0xe6eb,	// (0x000a89b7) bg_button_pane_pane_cp04_ParamLimits

0xe6eb,	// (0x000a89b7) bg_button_pane_pane_cp04

0xc0f8,	// (0x000a63c4) cell_dialer2_keypad_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) cell_dialer2_keypad_pane_g1

0x1150,	// (0x0009b41c) aid_placing_vt_set_content_ParamLimits

0x1150,	// (0x0009b41c) aid_placing_vt_set_content

0x1174,	// (0x0009b440) aid_placing_vt_set_title_ParamLimits

0x1174,	// (0x0009b440) aid_placing_vt_set_title

0xa153,	// (0x000a441f) main_image3_pane

0x4a82,	// (0x0009ed4e) area_side_right_pane_cp01_ParamLimits

0x4a82,	// (0x0009ed4e) area_side_right_pane_cp01

0x4a9b,	// (0x0009ed67) main_image3_pane_g1_ParamLimits

0x4a9b,	// (0x0009ed67) main_image3_pane_g1

0x4aa9,	// (0x0009ed75) main_image3_pane_g2_ParamLimits

0x4aa9,	// (0x0009ed75) main_image3_pane_g2

0x4ad1,	// (0x0009ed9d) main_image3_pane_g3_ParamLimits

0x4ad1,	// (0x0009ed9d) main_image3_pane_g3

0x4afb,	// (0x0009edc7) main_image3_pane_g4_ParamLimits

0x4afb,	// (0x0009edc7) main_image3_pane_g4

0x0003,

0xf7b1,	// (0x000a9a7d) main_image3_pane_g_ParamLimits

0xf7b1,	// (0x000a9a7d) main_image3_pane_g

0x4b25,	// (0x0009edf1) main_image3_pane_t1_ParamLimits

0x4b25,	// (0x0009edf1) main_image3_pane_t1

0x4b7d,	// (0x0009ee49) main_image3_pane_t2_ParamLimits

0x4b7d,	// (0x0009ee49) main_image3_pane_t2

0x4bcf,	// (0x0009ee9b) main_image3_pane_t3_ParamLimits

0x4bcf,	// (0x0009ee9b) main_image3_pane_t3

0x0003,

0xf7ba,	// (0x000a9a86) main_image3_pane_t_ParamLimits

0xf7ba,	// (0x000a9a86) main_image3_pane_t

0xa438,	// (0x000a4704) grid_sctrl_middle_pane_cp01_ParamLimits

0xa438,	// (0x000a4704) grid_sctrl_middle_pane_cp01

0x4c57,	// (0x0009ef23) cell_sctrl_middle_pane_cp01_ParamLimits

0x4c57,	// (0x0009ef23) cell_sctrl_middle_pane_cp01

0x4c74,	// (0x0009ef40) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4c74,	// (0x0009ef40) cell_sctrl_middle_pane_cp01_g1

0xa153,	// (0x000a441f) main_call4_pane

0x4c89,	// (0x0009ef55) aid_size_button_call4_ParamLimits

0x4c89,	// (0x0009ef55) aid_size_button_call4

0x4cbc,	// (0x0009ef88) call4_windows_pane_ParamLimits

0x4cbc,	// (0x0009ef88) call4_windows_pane

0x4cdb,	// (0x0009efa7) grid_call4_button_pane_ParamLimits

0x4cdb,	// (0x0009efa7) grid_call4_button_pane

0x4d12,	// (0x0009efde) call4_windows_conf_pane

0x4d2b,	// (0x0009eff7) popup_call4_audio_first_window_ParamLimits

0x4d2b,	// (0x0009eff7) popup_call4_audio_first_window

0x4d7b,	// (0x0009f047) popup_call4_audio_second_window_ParamLimits

0x4d7b,	// (0x0009f047) popup_call4_audio_second_window

0x4d94,	// (0x0009f060) popup_call4_audio_wait_window_ParamLimits

0x4d94,	// (0x0009f060) popup_call4_audio_wait_window

0x4da2,	// (0x0009f06e) cell_call4_button_pane_ParamLimits

0x4da2,	// (0x0009f06e) cell_call4_button_pane

0x4dc9,	// (0x0009f095) bg_button_pane_cp09_ParamLimits

0x4dc9,	// (0x0009f095) bg_button_pane_cp09

0x4dd5,	// (0x0009f0a1) cell_call4_button_pane_g1_ParamLimits

0x4dd5,	// (0x0009f0a1) cell_call4_button_pane_g1

0x4dfb,	// (0x0009f0c7) cell_call4_button_pane_t1_ParamLimits

0x4dfb,	// (0x0009f0c7) cell_call4_button_pane_t1

0x4e29,	// (0x0009f0f5) popup_call4_audio_conf_window_ParamLimits

0x4e29,	// (0x0009f0f5) popup_call4_audio_conf_window

0x4288,	// (0x0009e554) mup3_progress_pane_t1_ParamLimits

0x429f,	// (0x0009e56b) mup3_progress_pane_t2_ParamLimits

0xeb85,	// (0x000a8e51) mup3_progress_pane_t3_ParamLimits

0xf694,	// (0x000a9960) mup3_progress_pane_t_ParamLimits

0xeb9c,	// (0x000a8e68) mup_progress_pane_cp03_ParamLimits

0xebb5,	// (0x000a8e81) mup3_control_keys_pane_g4_copy1

0xa99d,	// (0x000a4c69) mp4_rocker2_pane_ParamLimits

0xa99d,	// (0x000a4c69) mp4_rocker2_pane

0xeec7,	// (0x000a9193) mp4_rocker2_pane_g1

0xeec7,	// (0x000a9193) mp4_rocker2_pane_g2

0xeec7,	// (0x000a9193) mp4_rocker2_pane_g3

0xeec7,	// (0x000a9193) mp4_rocker2_pane_g4

0xeec7,	// (0x000a9193) mp4_rocker2_pane_g5

0x0004,

0xf7c3,	// (0x000a9a8f) mp4_rocker2_pane_g

0xa153,	// (0x000a441f) main_camera4_pane

0xa153,	// (0x000a441f) main_video4_pane

0x4850,	// (0x0009eb1c) main_video_tele_dialer_pane_t1_ParamLimits

0x4850,	// (0x0009eb1c) main_video_tele_dialer_pane_t1

0x4869,	// (0x0009eb35) main_video_tele_dialer_pane_t2_ParamLimits

0x4869,	// (0x0009eb35) main_video_tele_dialer_pane_t2

0x0001,

0xf779,	// (0x000a9a45) main_video_tele_dialer_pane_t_ParamLimits

0xf779,	// (0x000a9a45) main_video_tele_dialer_pane_t

0x4e5b,	// (0x0009f127) cam4_autofocus_pane_ParamLimits

0x4e5b,	// (0x0009f127) cam4_autofocus_pane

0x4e71,	// (0x0009f13d) cam4_image_uncrop_pane_ParamLimits

0x4e71,	// (0x0009f13d) cam4_image_uncrop_pane

0x4e8a,	// (0x0009f156) cam4_indicators_pane_ParamLimits

0x4e8a,	// (0x0009f156) cam4_indicators_pane

0x4eba,	// (0x0009f186) main_camera4_pane_g1_ParamLimits

0x4eba,	// (0x0009f186) main_camera4_pane_g1

0x4ecc,	// (0x0009f198) main_camera4_pane_g2_ParamLimits

0x4ecc,	// (0x0009f198) main_camera4_pane_g2

0x4edf,	// (0x0009f1ab) main_camera4_pane_g3_ParamLimits

0x4edf,	// (0x0009f1ab) main_camera4_pane_g3

0x4ef2,	// (0x0009f1be) main_camera4_pane_g4_ParamLimits

0x4ef2,	// (0x0009f1be) main_camera4_pane_g4

0x4f05,	// (0x0009f1d1) main_camera4_pane_g5_ParamLimits

0x4f05,	// (0x0009f1d1) main_camera4_pane_g5

0x0005,

0xf7ce,	// (0x000a9a9a) main_camera4_pane_g_ParamLimits

0xf7ce,	// (0x000a9a9a) main_camera4_pane_g

0x4f29,	// (0x0009f1f5) main_camera4_pane_t1_ParamLimits

0x4f29,	// (0x0009f1f5) main_camera4_pane_t1

0xb242,	// (0x000a550e) bg_tb_trans_pane_cp06

0xaa3f,	// (0x000a4d0b) cam4_indicators_pane_g1

0xaa50,	// (0x000a4d1c) cam4_indicators_pane_g2

0x0002,

0xf7e9,	// (0x000a9ab5) cam4_indicators_pane_g

0xaa68,	// (0x000a4d34) cam4_indicators_pane_t1

0x4f8d,	// (0x0009f259) main_video4_pane_g1_ParamLimits

0x4f8d,	// (0x0009f259) main_video4_pane_g1

0x4f9c,	// (0x0009f268) main_video4_pane_g2_ParamLimits

0x4f9c,	// (0x0009f268) main_video4_pane_g2

0x4fac,	// (0x0009f278) main_video4_pane_g3_ParamLimits

0x4fac,	// (0x0009f278) main_video4_pane_g3

0x4fbc,	// (0x0009f288) main_video4_pane_g4_ParamLimits

0x4fbc,	// (0x0009f288) main_video4_pane_g4

0x0004,

0xf7f0,	// (0x000a9abc) main_video4_pane_g_ParamLimits

0xf7f0,	// (0x000a9abc) main_video4_pane_g

0x4fdc,	// (0x0009f2a8) vid4_indicators_pane_ParamLimits

0x4fdc,	// (0x0009f2a8) vid4_indicators_pane

0x5006,	// (0x0009f2d2) video4_image_uncrop_cif_pane_ParamLimits

0x5006,	// (0x0009f2d2) video4_image_uncrop_cif_pane

0x5020,	// (0x0009f2ec) video4_image_uncrop_nhd_pane_ParamLimits

0x5020,	// (0x0009f2ec) video4_image_uncrop_nhd_pane

0x4e71,	// (0x0009f13d) video4_image_uncrop_vga_pane_ParamLimits

0x4e71,	// (0x0009f13d) video4_image_uncrop_vga_pane

0xa145,	// (0x000a4411) bg_tb_trans_pane_cp07

0xaa96,	// (0x000a4d62) vid4_indicators_pane_g1

0xaaac,	// (0x000a4d78) vid4_indicators_pane_g2

0xaac0,	// (0x000a4d8c) vid4_indicators_pane_g3

0x0004,

0xf7fb,	// (0x000a9ac7) vid4_indicators_pane_g

0xaaf1,	// (0x000a4dbd) vid4_indicators_pane_t1

0x5037,	// (0x0009f303) cam4_autofocus_pane_g1

0x503f,	// (0x0009f30b) cam4_autofocus_pane_g2

0x5047,	// (0x0009f313) cam4_autofocus_pane_g3

0x0002,

0xf806,	// (0x000a9ad2) cam4_autofocus_pane_g

0x504f,	// (0x0009f31b) cam4_autofocus_pane_g3_copy1

0x4898,	// (0x0009eb64) video_down_pane_cp_t1

0x48a6,	// (0x0009eb72) video_down_pane_cp_t2

0x0001,

0xf77e,	// (0x000a9a4a) video_down_pane_cp_t

0xa145,	// (0x000a4411) popup_vitu2_window_ParamLimits

0xa145,	// (0x000a4411) popup_vitu2_window

0x5057,	// (0x0009f323) aid_size_cell2_itu2_ParamLimits

0x5057,	// (0x0009f323) aid_size_cell2_itu2

0x507d,	// (0x0009f349) aid_size_cell_itu2_ParamLimits

0x507d,	// (0x0009f349) aid_size_cell_itu2

0x50db,	// (0x0009f3a7) bg_popup_window_pane_cp09_ParamLimits

0x50db,	// (0x0009f3a7) bg_popup_window_pane_cp09

0x50e9,	// (0x0009f3b5) field_vitu2_entry_pane_ParamLimits

0x50e9,	// (0x0009f3b5) field_vitu2_entry_pane

0x5111,	// (0x0009f3dd) grid_vitu2_function_pane_ParamLimits

0x5111,	// (0x0009f3dd) grid_vitu2_function_pane

0x5162,	// (0x0009f42e) grid_vitu2_itu_pane_ParamLimits

0x5162,	// (0x0009f42e) grid_vitu2_itu_pane

0x51f2,	// (0x0009f4be) cell_vitu2_itu_pane_ParamLimits

0x51f2,	// (0x0009f4be) cell_vitu2_itu_pane

0x5220,	// (0x0009f4ec) cell_vitu2_function_pane_ParamLimits

0x5220,	// (0x0009f4ec) cell_vitu2_function_pane

0x5264,	// (0x0009f530) bg_popup_call_pane_cp08_ParamLimits

0x5264,	// (0x0009f530) bg_popup_call_pane_cp08

0x527b,	// (0x0009f547) field_vitu2_entry_pane_g1

0x5287,	// (0x0009f553) field_vitu2_entry_pane_g2

0x0002,

0xf80d,	// (0x000a9ad9) field_vitu2_entry_pane_g

0x5293,	// (0x0009f55f) field_vitu2_entry_pane_t1_ParamLimits

0x5293,	// (0x0009f55f) field_vitu2_entry_pane_t1

0x52c2,	// (0x0009f58e) field_vitu2_entry_pane_t2_ParamLimits

0x52c2,	// (0x0009f58e) field_vitu2_entry_pane_t2

0x0001,

0xf814,	// (0x000a9ae0) field_vitu2_entry_pane_t_ParamLimits

0xf814,	// (0x000a9ae0) field_vitu2_entry_pane_t

0x52e7,	// (0x0009f5b3) bg_button_pane_cp010_ParamLimits

0x52e7,	// (0x0009f5b3) bg_button_pane_cp010

0x52f5,	// (0x0009f5c1) cell_vitu2_itu_pane_g1

0x531b,	// (0x0009f5e7) cell_vitu2_itu_pane_t1_ParamLimits

0x531b,	// (0x0009f5e7) cell_vitu2_itu_pane_t1

0x5379,	// (0x0009f645) cell_vitu2_itu_pane_t2_ParamLimits

0x5379,	// (0x0009f645) cell_vitu2_itu_pane_t2

0x0002,

0xf81e,	// (0x000a9aea) cell_vitu2_itu_pane_t_ParamLimits

0xf81e,	// (0x000a9aea) cell_vitu2_itu_pane_t

0xa145,	// (0x000a4411) bg_button_pane_cp011

0x5465,	// (0x0009f731) cell_vitu2_function_pane_g1

0xa153,	// (0x000a441f) main_myfav_hc_pane

0x4c1f,	// (0x0009eeeb) popup_image3_note_pane_ParamLimits

0x4c1f,	// (0x0009eeeb) popup_image3_note_pane

0x4c3b,	// (0x0009ef07) popup_image3_tool_bar_pane_ParamLimits

0x4c3b,	// (0x0009ef07) popup_image3_tool_bar_pane

0x5407,	// (0x0009f6d3) cell_vitu2_itu_pane_t3_ParamLimits

0x5407,	// (0x0009f6d3) cell_vitu2_itu_pane_t3

0x02c8,	// (0x0009a594) bg_popup_trans_pane

0x5479,	// (0x0009f745) grid_image3_tool_bar_pane

0x5483,	// (0x0009f74f) bg_popup_trans_pane_g1

0xcb8b,	// (0x000a6e57) bg_popup_trans_pane_g2

0x548b,	// (0x0009f757) bg_popup_trans_pane_g3

0x5493,	// (0x0009f75f) bg_popup_trans_pane_g4

0x549b,	// (0x0009f767) bg_popup_trans_pane_g5

0x54a3,	// (0x0009f76f) bg_popup_trans_pane_g6

0x54ab,	// (0x0009f777) bg_popup_trans_pane_g7

0x54b3,	// (0x0009f77f) bg_popup_trans_pane_g8

0xcb6b,	// (0x000a6e37) bg_popup_trans_pane_g9

0x0008,

0xf825,	// (0x000a9af1) bg_popup_trans_pane_g

0x54bb,	// (0x0009f787) cell_image3_tool_bar_pane_ParamLimits

0x54bb,	// (0x0009f787) cell_image3_tool_bar_pane

0xc136,	// (0x000a6402) cell_image3_tool_bar_pane_g1

0x02c8,	// (0x0009a594) bg_popup_trans_pane_cp1

0x54d1,	// (0x0009f79d) popup_image3_note_pane_t1

0x54df,	// (0x0009f7ab) popup_image3_note_pane_t2

0x54ed,	// (0x0009f7b9) popup_image3_note_pane_t3

0x0002,

0xf838,	// (0x000a9b04) popup_image3_note_pane_t

0x54fd,	// (0x0009f7c9) popup_image3_note_pane_t3_copy1

0x550b,	// (0x0009f7d7) bg_myfav_hc_instruction_pane_ParamLimits

0x550b,	// (0x0009f7d7) bg_myfav_hc_instruction_pane

0x5523,	// (0x0009f7ef) cell_myfav_contact_pane_ParamLimits

0x5523,	// (0x0009f7ef) cell_myfav_contact_pane

0x553f,	// (0x0009f80b) cell_myfav_contact_pane_cp1_ParamLimits

0x553f,	// (0x0009f80b) cell_myfav_contact_pane_cp1

0x5557,	// (0x0009f823) cell_myfav_contact_pane_cp2_ParamLimits

0x5557,	// (0x0009f823) cell_myfav_contact_pane_cp2

0x556f,	// (0x0009f83b) cell_myfav_contact_pane_cp3_ParamLimits

0x556f,	// (0x0009f83b) cell_myfav_contact_pane_cp3

0x5586,	// (0x0009f852) cell_myfav_contact_pane_cp4_ParamLimits

0x5586,	// (0x0009f852) cell_myfav_contact_pane_cp4

0x559e,	// (0x0009f86a) cell_myfav_contact_pane_cp5_ParamLimits

0x559e,	// (0x0009f86a) cell_myfav_contact_pane_cp5

0x55b2,	// (0x0009f87e) cell_myfav_contact_pane_cp6_ParamLimits

0x55b2,	// (0x0009f87e) cell_myfav_contact_pane_cp6

0x55c8,	// (0x0009f894) cell_myfav_contact_pane_cp7_ParamLimits

0x55c8,	// (0x0009f894) cell_myfav_contact_pane_cp7

0x55e0,	// (0x0009f8ac) listscroll_gen_pane_cp05

0x55e9,	// (0x0009f8b5) main_myfav_hc_pane_g1_ParamLimits

0x55e9,	// (0x0009f8b5) main_myfav_hc_pane_g1

0x5603,	// (0x0009f8cf) main_myfav_hc_pane_g2_ParamLimits

0x5603,	// (0x0009f8cf) main_myfav_hc_pane_g2

0x0002,

0xf83f,	// (0x000a9b0b) main_myfav_hc_pane_g_ParamLimits

0xf83f,	// (0x000a9b0b) main_myfav_hc_pane_g

0x5637,	// (0x0009f903) main_myfav_hc_pane_t1_ParamLimits

0x5637,	// (0x0009f903) main_myfav_hc_pane_t1

0x564e,	// (0x0009f91a) main_myfav_hc_pane_t2_ParamLimits

0x564e,	// (0x0009f91a) main_myfav_hc_pane_t2

0x5660,	// (0x0009f92c) main_myfav_hc_pane_t3_ParamLimits

0x5660,	// (0x0009f92c) main_myfav_hc_pane_t3

0x5672,	// (0x0009f93e) main_myfav_hc_pane_t4_ParamLimits

0x5672,	// (0x0009f93e) main_myfav_hc_pane_t4

0x0004,

0xf846,	// (0x000a9b12) main_myfav_hc_pane_t_ParamLimits

0xf846,	// (0x000a9b12) main_myfav_hc_pane_t

0xc136,	// (0x000a6402) bg_myfav_hc_instruction_pane_g1

0x569c,	// (0x0009f968) cell_myfav_contact_pane_g1_ParamLimits

0x569c,	// (0x0009f968) cell_myfav_contact_pane_g1

0x569c,	// (0x0009f968) cell_myfav_contact_pane_g2_ParamLimits

0x569c,	// (0x0009f968) cell_myfav_contact_pane_g2

0x56a8,	// (0x0009f974) cell_myfav_contact_pane_g3_ParamLimits

0x56a8,	// (0x0009f974) cell_myfav_contact_pane_g3

0xc106,	// (0x000a63d2) cell_myfav_contact_pane_g4_ParamLimits

0xc106,	// (0x000a63d2) cell_myfav_contact_pane_g4

0x56b5,	// (0x0009f981) cell_myfav_contact_pane_g5_ParamLimits

0x56b5,	// (0x0009f981) cell_myfav_contact_pane_g5

0x0004,

0xf851,	// (0x000a9b1d) cell_myfav_contact_pane_g_ParamLimits

0xf851,	// (0x000a9b1d) cell_myfav_contact_pane_g

0x561d,	// (0x0009f8e9) main_myfav_hc_pane_g3_ParamLimits

0x561d,	// (0x0009f8e9) main_myfav_hc_pane_g3

0x0431,	// (0x0009a6fd) popup_adpt_find_window

0x56c1,	// (0x0009f98d) afind_page_pane_ParamLimits

0x56c1,	// (0x0009f98d) afind_page_pane

0x56d7,	// (0x0009f9a3) aid_size_cell_afind_ParamLimits

0x56d7,	// (0x0009f9a3) aid_size_cell_afind

0x56f5,	// (0x0009f9c1) bg_popup_sub_pane_cp09_ParamLimits

0x56f5,	// (0x0009f9c1) bg_popup_sub_pane_cp09

0x5707,	// (0x0009f9d3) find_pane_cp01_ParamLimits

0x5707,	// (0x0009f9d3) find_pane_cp01

0x571b,	// (0x0009f9e7) grid_afind_control_pane_ParamLimits

0x571b,	// (0x0009f9e7) grid_afind_control_pane

0x572f,	// (0x0009f9fb) grid_afind_pane_ParamLimits

0x572f,	// (0x0009f9fb) grid_afind_pane

0x5751,	// (0x0009fa1d) cell_afind_pane_ParamLimits

0x5751,	// (0x0009fa1d) cell_afind_pane

0xc136,	// (0x000a6402) afind_page_pane_g1

0x57ba,	// (0x0009fa86) afind_page_pane_g2

0x57c2,	// (0x0009fa8e) afind_page_pane_g3

0x0002,

0xf85c,	// (0x000a9b28) afind_page_pane_g

0x57ca,	// (0x0009fa96) afind_page_pane_t1

0x57ea,	// (0x0009fab6) cell_afind_grid_control_pane_ParamLimits

0x57ea,	// (0x0009fab6) cell_afind_grid_control_pane

0x57f9,	// (0x0009fac5) bg_button_pane_cp69_ParamLimits

0x57f9,	// (0x0009fac5) bg_button_pane_cp69

0x5805,	// (0x0009fad1) cell_afind_pane_g1_ParamLimits

0x5805,	// (0x0009fad1) cell_afind_pane_g1

0x5812,	// (0x0009fade) cell_afind_pane_t1_ParamLimits

0x5812,	// (0x0009fade) cell_afind_pane_t1

0x5824,	// (0x0009faf0) bg_button_pane_cp72

0x582c,	// (0x0009faf8) cell_afind_grid_control_pane_g1

0x2e56,	// (0x0009d122) aid_image_placing_area_ParamLimits

0x2e56,	// (0x0009d122) aid_image_placing_area

0xc0f8,	// (0x000a63c4) field_vitu_entry_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) field_vitu_entry_pane_g1

0xc0f8,	// (0x000a63c4) field_vitu_entry_pane_g2_ParamLimits

0xc0f8,	// (0x000a63c4) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x000a9465) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x000a9465) field_vitu_entry_pane_g

0xeed7,	// (0x000a91a3) cell_vitu_itu_pane_g1_ParamLimits

0xecb1,	// (0x000a8f7d) cell_vitu_itu_pane_t3_ParamLimits

0xecb1,	// (0x000a8f7d) cell_vitu_itu_pane_t3

0x494f,	// (0x0009ec1b) mp4_progress_pane_t1_ParamLimits

0x496d,	// (0x0009ec39) mp4_progress_pane_t2_ParamLimits

0xf7a2,	// (0x000a9a6e) mp4_progress_pane_t_ParamLimits

0x498c,	// (0x0009ec58) mup_progress_pane_cp04_ParamLimits

0x5686,	// (0x0009f952) main_myfav_hc_pane_t5_ParamLimits

0x5686,	// (0x0009f952) main_myfav_hc_pane_t5

0xa0ee,	// (0x000a43ba) aid_zoom_text_primary

0x0431,	// (0x0009a6fd) popup_adpt_find_window_ParamLimits

0xa145,	// (0x000a4411) main_cam_set_pane

0x4ea3,	// (0x0009f16f) cam4_zoom_pane_ParamLimits

0x4ea3,	// (0x0009f16f) cam4_zoom_pane

0x5835,	// (0x0009fb01) main_cam_set_pane_g1_ParamLimits

0x5835,	// (0x0009fb01) main_cam_set_pane_g1

0x5843,	// (0x0009fb0f) main_cam_set_pane_g2_ParamLimits

0x5843,	// (0x0009fb0f) main_cam_set_pane_g2

0x0001,

0xf863,	// (0x000a9b2f) main_cam_set_pane_g_ParamLimits

0xf863,	// (0x000a9b2f) main_cam_set_pane_g

0x5864,	// (0x0009fb30) main_cam_set_pane_t1_ParamLimits

0x5864,	// (0x0009fb30) main_cam_set_pane_t1

0x587f,	// (0x0009fb4b) main_cset_listscroll_pane_ParamLimits

0x587f,	// (0x0009fb4b) main_cset_listscroll_pane

0x58a7,	// (0x0009fb73) main_cset_slider_pane_ParamLimits

0x58a7,	// (0x0009fb73) main_cset_slider_pane

0x58d9,	// (0x0009fba5) main_cset_list_pane_ParamLimits

0x58d9,	// (0x0009fba5) main_cset_list_pane

0xab08,	// (0x000a4dd4) scroll_pane_cp028

0x58e9,	// (0x0009fbb5) aid_area_touch_slider

0x5905,	// (0x0009fbd1) cset_slider_pane

0x5928,	// (0x0009fbf4) main_cset_slider_pane_g1

0x593d,	// (0x0009fc09) main_cset_slider_pane_g2

0x0011,

0xf868,	// (0x000a9b34) main_cset_slider_pane_g

0xab41,	// (0x000a4e0d) main_cset_slider_pane_t1

0x59ff,	// (0x0009fccb) main_cset_slider_pane_t2

0x5a19,	// (0x0009fce5) main_cset_slider_pane_t3

0x5a33,	// (0x0009fcff) main_cset_slider_pane_t4

0x5a4d,	// (0x0009fd19) main_cset_slider_pane_t5

0x5a6b,	// (0x0009fd37) main_cset_slider_pane_t6

0x5a80,	// (0x0009fd4c) main_cset_slider_pane_t7

0x000e,

0xf88d,	// (0x000a9b59) main_cset_slider_pane_t

0x5b8c,	// (0x0009fe58) cset_list_set_pane_ParamLimits

0x5b8c,	// (0x0009fe58) cset_list_set_pane

0xabdb,	// (0x000a4ea7) aid_position_infowindow_above

0xabe3,	// (0x000a4eaf) aid_position_infowindow_below

0x5ba0,	// (0x0009fe6c) cset_list_set_pane_g1_ParamLimits

0x5ba0,	// (0x0009fe6c) cset_list_set_pane_g1

0x5bac,	// (0x0009fe78) cset_list_set_pane_g3_ParamLimits

0x5bac,	// (0x0009fe78) cset_list_set_pane_g3

0x0001,

0xf8ac,	// (0x000a9b78) cset_list_set_pane_g_ParamLimits

0xf8ac,	// (0x000a9b78) cset_list_set_pane_g

0x5bbb,	// (0x0009fe87) cset_list_set_pane_t1_ParamLimits

0x5bbb,	// (0x0009fe87) cset_list_set_pane_t1

0xa438,	// (0x000a4704) list_highlight_pane_cp021_ParamLimits

0xa438,	// (0x000a4704) list_highlight_pane_cp021

0xd39b,	// (0x000a7667) cset_slider_pane_g1

0xd3ad,	// (0x000a7679) cset_slider_pane_g2

0xd3a4,	// (0x000a7670) cset_slider_pane_g3

0x0002,

0xf8b1,	// (0x000a9b7d) cset_slider_pane_g

0xd029,	// (0x000a72f5) aid_area_touch_cam4_zoom

0x5bd0,	// (0x0009fe9c) cam4_zoom_cont_pane

0x5bd8,	// (0x0009fea4) cam4_zoom_pane_g1

0x5be0,	// (0x0009feac) cam4_zoom_pane_g2

0x5be8,	// (0x0009feb4) cam4_zoom_pane_g3

0x0002,

0xf8b8,	// (0x000a9b84) cam4_zoom_pane_g

0xabeb,	// (0x000a4eb7) cam4_zoom_cont_pane_g1

0xabf4,	// (0x000a4ec0) cam4_zoom_cont_pane_g2

0xabfd,	// (0x000a4ec9) cam4_zoom_cont_pane_g3

0x0002,

0xf8bf,	// (0x000a9b8b) cam4_zoom_cont_pane_g

0x4ca7,	// (0x0009ef73) call4_image_pane_ParamLimits

0x4ca7,	// (0x0009ef73) call4_image_pane

0x4d12,	// (0x0009efde) call4_windows_conf_pane_ParamLimits

0x4d59,	// (0x0009f025) popup_call4_audio_in_window_ParamLimits

0x4d59,	// (0x0009f025) popup_call4_audio_in_window

0x02c8,	// (0x0009a594) bg_popup_call2_act_pane_cp02

0x4e21,	// (0x0009f0ed) call4_list_conf_pane

0xc136,	// (0x000a6402) call4_image_pane_g1

0xc136,	// (0x000a6402) call4_image_pane_g2

0x0001,

0xf08c,	// (0x000a9358) call4_image_pane_g

0xac06,	// (0x000a4ed2) list_single_graphic_popup_conf4_pane_ParamLimits

0xac06,	// (0x000a4ed2) list_single_graphic_popup_conf4_pane

0x02c8,	// (0x0009a594) list_highlight_pane_cp022

0xac1b,	// (0x000a4ee7) list_single_graphic_popup_conf4_pane_g1

0xd082,	// (0x000a734e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8c6,	// (0x000a9b92) list_single_graphic_popup_conf4_pane_g

0xac23,	// (0x000a4eef) list_single_graphic_popup_conf4_pane_t1

0x127c,	// (0x0009b548) popup_vtel_slider_window_ParamLimits

0x127c,	// (0x0009b548) popup_vtel_slider_window

0x49df,	// (0x0009ecab) dialer2_ne_pane_t2_ParamLimits

0x49df,	// (0x0009ecab) dialer2_ne_pane_t2

0x0001,

0xf7a7,	// (0x000a9a73) dialer2_ne_pane_t_ParamLimits

0xf7a7,	// (0x000a9a73) dialer2_ne_pane_t

0xe6eb,	// (0x000a89b7) bg_popup_sub_pane_cp010_ParamLimits

0xe6eb,	// (0x000a89b7) bg_popup_sub_pane_cp010

0x5bf0,	// (0x0009febc) popup_vtel_slider_window_g1_ParamLimits

0x5bf0,	// (0x0009febc) popup_vtel_slider_window_g1

0x5c03,	// (0x0009fecf) popup_vtel_slider_window_g2_ParamLimits

0x5c03,	// (0x0009fecf) popup_vtel_slider_window_g2

0x0003,

0xf8cb,	// (0x000a9b97) popup_vtel_slider_window_g_ParamLimits

0xf8cb,	// (0x000a9b97) popup_vtel_slider_window_g

0x5c59,	// (0x0009ff25) vtel_slider_pane_ParamLimits

0x5c59,	// (0x0009ff25) vtel_slider_pane

0x5c7b,	// (0x0009ff47) vtel_slider_pane_g1_ParamLimits

0x5c7b,	// (0x0009ff47) vtel_slider_pane_g1

0x5c8f,	// (0x0009ff5b) vtel_slider_pane_g2_ParamLimits

0x5c8f,	// (0x0009ff5b) vtel_slider_pane_g2

0x5ca7,	// (0x0009ff73) vtel_slider_pane_g3_ParamLimits

0x5ca7,	// (0x0009ff73) vtel_slider_pane_g3

0x5c7b,	// (0x0009ff47) vtel_slider_pane_g4_ParamLimits

0x5c7b,	// (0x0009ff47) vtel_slider_pane_g4

0x5cbd,	// (0x0009ff89) vtel_slider_pane_g5_ParamLimits

0x5cbd,	// (0x0009ff89) vtel_slider_pane_g5

0x0004,

0xf8d4,	// (0x000a9ba0) vtel_slider_pane_g_ParamLimits

0xf8d4,	// (0x000a9ba0) vtel_slider_pane_g

0xa145,	// (0x000a4411) main_gallery2_pane

0x50a9,	// (0x0009f375) aid_size_row_itut2_dropdow_list_ParamLimits

0x50a9,	// (0x0009f375) aid_size_row_itut2_dropdow_list

0x5139,	// (0x0009f405) grid_vitu2_function_top_pane_ParamLimits

0x5139,	// (0x0009f405) grid_vitu2_function_top_pane

0x519d,	// (0x0009f469) popup_vitu2_dropdown_list_window_ParamLimits

0x519d,	// (0x0009f469) popup_vitu2_dropdown_list_window

0x51c4,	// (0x0009f490) popup_vitu2_match_list_window

0x5cd3,	// (0x0009ff9f) cell_vitu2_function_top_pane_ParamLimits

0x5cd3,	// (0x0009ff9f) cell_vitu2_function_top_pane

0x5ced,	// (0x0009ffb9) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5ced,	// (0x0009ffb9) cell_vitu2_function_top_pane_cp01

0x5d09,	// (0x0009ffd5) cell_vitu2_function_top_wide_pane_ParamLimits

0x5d09,	// (0x0009ffd5) cell_vitu2_function_top_wide_pane

0xa145,	// (0x000a4411) bg_button_pane_cp012

0x5d27,	// (0x0009fff3) cell_vitu2_function_top_pane_g1

0xac39,	// (0x000a4f05) bg_button_pane_cp013_ParamLimits

0xac39,	// (0x000a4f05) bg_button_pane_cp013

0x5d3b,	// (0x000a0007) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5d3b,	// (0x000a0007) cell_vitu2_function_top_wide_pane_g1

0xa145,	// (0x000a4411) bg_popup_sub_pane_cp20

0x5d53,	// (0x000a001f) list_vitu2_match_list_pane

0x5483,	// (0x0009f74f) bg_popup_sub_pane_cp20_g1

0x548b,	// (0x0009f757) bg_popup_sub_pane_cp20_g2

0xcb8b,	// (0x000a6e57) bg_popup_sub_pane_cp20_g3

0x5493,	// (0x0009f75f) bg_popup_sub_pane_cp20_g4

0xcb6b,	// (0x000a6e37) bg_popup_sub_pane_cp20_g5

0xac55,	// (0x000a4f21) bg_popup_sub_pane_cp20_g6

0x54a3,	// (0x0009f76f) bg_popup_sub_pane_cp20_g7

0x54ab,	// (0x0009f777) bg_popup_sub_pane_cp20_g8

0x54b3,	// (0x0009f77f) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8df,	// (0x000a9bab) bg_popup_sub_pane_cp20_g

0xac5d,	// (0x000a4f29) list_vitu2_match_list_item_pane_ParamLimits

0xac5d,	// (0x000a4f29) list_vitu2_match_list_item_pane

0xac6f,	// (0x000a4f3b) list_vitu2_match_list_item_pane_t1

0xa153,	// (0x000a441f) bg_popup_sub_pane_cp21

0xc37f,	// (0x000a664b) grid_vitu2_dropdown_list_pane

0x5d6b,	// (0x000a0037) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5d6b,	// (0x000a0037) cell_vitu2_dropdown_list_char_pane

0x5d8d,	// (0x000a0059) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5d8d,	// (0x000a0059) cell_vitu2_dropdown_list_ctrl_pane

0xac7d,	// (0x000a4f49) cell_vitu2_dropdown_list_char_pane_g1

0xac86,	// (0x000a4f52) cell_vitu2_dropdown_list_char_pane_g2

0xac8f,	// (0x000a4f5b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f2,	// (0x000a9bbe) cell_vitu2_dropdown_list_char_pane_g

0x5db7,	// (0x000a0083) cell_vitu2_dropdown_list_char_pane_t1

0x5dc5,	// (0x000a0091) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5dc5,	// (0x000a0091) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5dd5,	// (0x000a00a1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5dd5,	// (0x000a00a1) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5de6,	// (0x000a00b2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5de6,	// (0x000a00b2) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5df6,	// (0x000a00c2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5df6,	// (0x000a00c2) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb242,	// (0x000a550e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb242,	// (0x000a550e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8f9,	// (0x000a9bc5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8f9,	// (0x000a9bc5) cell_vitu2_dropdown_list_ctrl_pane_g

0x5e12,	// (0x000a00de) aid_size_cell_gallery2_ParamLimits

0x5e12,	// (0x000a00de) aid_size_cell_gallery2

0x5e30,	// (0x000a00fc) grid_gallery2_pane_ParamLimits

0x5e30,	// (0x000a00fc) grid_gallery2_pane

0x5e4a,	// (0x000a0116) scroll_pane_cp029_ParamLimits

0x5e4a,	// (0x000a0116) scroll_pane_cp029

0x5e5b,	// (0x000a0127) cell_gallery2_pane_ParamLimits

0x5e5b,	// (0x000a0127) cell_gallery2_pane

0xac98,	// (0x000a4f64) cell_gallery2_pane_g2

0x5ebf,	// (0x000a018b) cell_gallery2_pane_g3

0xaca0,	// (0x000a4f6c) cell_gallery2_pane_g4

0xaca8,	// (0x000a4f74) cell_gallery2_pane_g5

0xc37f,	// (0x000a664b) grid_highlight_pane_cp10

0x51c4,	// (0x0009f490) popup_vitu2_match_list_window_ParamLimits

0x51db,	// (0x0009f4a7) popup_vitu2_query_window_ParamLimits

0x51db,	// (0x0009f4a7) popup_vitu2_query_window

0xa153,	// (0x000a441f) bg_vitu2_candi_button_pane

0xac7d,	// (0x000a4f49) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xac86,	// (0x000a4f52) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xac8f,	// (0x000a4f5b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5ec7,	// (0x000a0193) bg_button_pane_cp015

0x5ede,	// (0x000a01aa) bg_button_pane_cp016

0x5eea,	// (0x000a01b6) bg_button_pane_cp017

0xd329,	// (0x000a75f5) bg_popup_sub_pane_cp22

0xacb0,	// (0x000a4f7c) popup_vitu2_query_window_g1

0x5f2b,	// (0x000a01f7) popup_vitu2_query_window_g2

0x0002,

0xf904,	// (0x000a9bd0) popup_vitu2_query_window_g

0x5f51,	// (0x000a021d) popup_vitu2_query_window_t1_ParamLimits

0x5f51,	// (0x000a021d) popup_vitu2_query_window_t1

0x5f86,	// (0x000a0252) popup_vitu2_query_window_t2_ParamLimits

0x5f86,	// (0x000a0252) popup_vitu2_query_window_t2

0x5f98,	// (0x000a0264) popup_vitu2_query_window_t3_ParamLimits

0x5f98,	// (0x000a0264) popup_vitu2_query_window_t3

0x5fc0,	// (0x000a028c) popup_vitu2_query_window_t4_ParamLimits

0x5fc0,	// (0x000a028c) popup_vitu2_query_window_t4

0x5fd4,	// (0x000a02a0) popup_vitu2_query_window_t5_ParamLimits

0x5fd4,	// (0x000a02a0) popup_vitu2_query_window_t5

0x0006,

0xf90b,	// (0x000a9bd7) popup_vitu2_query_window_t_ParamLimits

0xf90b,	// (0x000a9bd7) popup_vitu2_query_window_t

0x58d1,	// (0x0009fb9d) main_cset_text_pane

0x58e9,	// (0x0009fbb5) aid_area_touch_slider_ParamLimits

0x5905,	// (0x0009fbd1) cset_slider_pane_ParamLimits

0x5928,	// (0x0009fbf4) main_cset_slider_pane_g1_ParamLimits

0x593d,	// (0x0009fc09) main_cset_slider_pane_g2_ParamLimits

0xab11,	// (0x000a4ddd) main_cset_slider_pane_g3_ParamLimits

0xab11,	// (0x000a4ddd) main_cset_slider_pane_g3

0x5952,	// (0x0009fc1e) main_cset_slider_pane_g4_ParamLimits

0x5952,	// (0x0009fc1e) main_cset_slider_pane_g4

0x5961,	// (0x0009fc2d) main_cset_slider_pane_g5_ParamLimits

0x5961,	// (0x0009fc2d) main_cset_slider_pane_g5

0x596f,	// (0x0009fc3b) main_cset_slider_pane_g6_ParamLimits

0x596f,	// (0x0009fc3b) main_cset_slider_pane_g6

0xf868,	// (0x000a9b34) main_cset_slider_pane_g_ParamLimits

0xab41,	// (0x000a4e0d) main_cset_slider_pane_t1_ParamLimits

0x59ff,	// (0x0009fccb) main_cset_slider_pane_t2_ParamLimits

0x5a19,	// (0x0009fce5) main_cset_slider_pane_t3_ParamLimits

0x5a33,	// (0x0009fcff) main_cset_slider_pane_t4_ParamLimits

0x5a4d,	// (0x0009fd19) main_cset_slider_pane_t5_ParamLimits

0x5a6b,	// (0x0009fd37) main_cset_slider_pane_t6_ParamLimits

0x5a80,	// (0x0009fd4c) main_cset_slider_pane_t7_ParamLimits

0x5aae,	// (0x0009fd7a) main_cset_slider_pane_t8_ParamLimits

0x5aae,	// (0x0009fd7a) main_cset_slider_pane_t8

0x5ad6,	// (0x0009fda2) main_cset_slider_pane_t9_ParamLimits

0x5ad6,	// (0x0009fda2) main_cset_slider_pane_t9

0x5afe,	// (0x0009fdca) main_cset_slider_pane_t10_ParamLimits

0x5afe,	// (0x0009fdca) main_cset_slider_pane_t10

0x5b26,	// (0x0009fdf2) main_cset_slider_pane_t11_ParamLimits

0x5b26,	// (0x0009fdf2) main_cset_slider_pane_t11

0x5b50,	// (0x0009fe1c) main_cset_slider_pane_t12_ParamLimits

0x5b50,	// (0x0009fe1c) main_cset_slider_pane_t12

0x5b6d,	// (0x0009fe39) main_cset_slider_pane_t13_ParamLimits

0x5b6d,	// (0x0009fe39) main_cset_slider_pane_t13

0xf88d,	// (0x000a9b59) main_cset_slider_pane_t_ParamLimits

0x02c8,	// (0x0009a594) bg_popup_sub_pane_cp011

0xacbc,	// (0x000a4f88) main_cset_text_pane_g1

0xacc4,	// (0x000a4f90) main_cset_text_pane_t1

0xacd2,	// (0x000a4f9e) main_cset_text_pane_t2

0xace0,	// (0x000a4fac) main_cset_text_pane_t3

0xacee,	// (0x000a4fba) main_cset_text_pane_t4

0xacfc,	// (0x000a4fc8) main_cset_text_pane_t5

0xad0a,	// (0x000a4fd6) main_cset_text_pane_t6

0xad18,	// (0x000a4fe4) main_cset_text_pane_t7

0x0006,

0xf91a,	// (0x000a9be6) main_cset_text_pane_t

0xa153,	// (0x000a441f) main_cam4_burst_pane

0xa153,	// (0x000a441f) main_cam5_pane

0x57d8,	// (0x0009faa4) bg_button_pane_cp019

0x57e1,	// (0x0009faad) bg_button_pane_cp020

0xab1d,	// (0x000a4de9) main_cset_slider_pane_g7_ParamLimits

0xab1d,	// (0x000a4de9) main_cset_slider_pane_g7

0xab29,	// (0x000a4df5) main_cset_slider_pane_g8_ParamLimits

0xab29,	// (0x000a4df5) main_cset_slider_pane_g8

0x5983,	// (0x0009fc4f) main_cset_slider_pane_g9_ParamLimits

0x5983,	// (0x0009fc4f) main_cset_slider_pane_g9

0x598f,	// (0x0009fc5b) main_cset_slider_pane_g10_ParamLimits

0x598f,	// (0x0009fc5b) main_cset_slider_pane_g10

0x599b,	// (0x0009fc67) main_cset_slider_pane_g11_ParamLimits

0x599b,	// (0x0009fc67) main_cset_slider_pane_g11

0x59a7,	// (0x0009fc73) main_cset_slider_pane_g12_ParamLimits

0x59a7,	// (0x0009fc73) main_cset_slider_pane_g12

0x59b3,	// (0x0009fc7f) main_cset_slider_pane_g13_ParamLimits

0x59b3,	// (0x0009fc7f) main_cset_slider_pane_g13

0x59bf,	// (0x0009fc8b) main_cset_slider_pane_g14_ParamLimits

0x59bf,	// (0x0009fc8b) main_cset_slider_pane_g14

0x59cb,	// (0x0009fc97) main_cset_slider_pane_g15_ParamLimits

0x59cb,	// (0x0009fc97) main_cset_slider_pane_g15

0xab69,	// (0x000a4e35) main_cset_slider_pane_t14_ParamLimits

0xab69,	// (0x000a4e35) main_cset_slider_pane_t14

0xaba2,	// (0x000a4e6e) main_cset_slider_pane_t15_ParamLimits

0xaba2,	// (0x000a4e6e) main_cset_slider_pane_t15

0x603e,	// (0x000a030a) aid_cam4_burst_size_cell_ParamLimits

0x603e,	// (0x000a030a) aid_cam4_burst_size_cell

0x605e,	// (0x000a032a) grid_cam4_burst_pane_ParamLimits

0x605e,	// (0x000a032a) grid_cam4_burst_pane

0x6098,	// (0x000a0364) linegrid_cam4_burst_pane_ParamLimits

0x6098,	// (0x000a0364) linegrid_cam4_burst_pane

0xb250,	// (0x000a551c) scroll_pane_cp30_ParamLimits

0xb250,	// (0x000a551c) scroll_pane_cp30

0x60ba,	// (0x000a0386) cell_cam4_burst_pane_ParamLimits

0x60ba,	// (0x000a0386) cell_cam4_burst_pane

0xad26,	// (0x000a4ff2) linegrid_cam4_burst_pane_g1_ParamLimits

0xad26,	// (0x000a4ff2) linegrid_cam4_burst_pane_g1

0x610f,	// (0x000a03db) linegrid_cam4_burst_pane_g2_ParamLimits

0x610f,	// (0x000a03db) linegrid_cam4_burst_pane_g2

0xad33,	// (0x000a4fff) linegrid_cam4_burst_pane_g3_ParamLimits

0xad33,	// (0x000a4fff) linegrid_cam4_burst_pane_g3

0x0002,

0xf929,	// (0x000a9bf5) linegrid_cam4_burst_pane_g_ParamLimits

0xf929,	// (0x000a9bf5) linegrid_cam4_burst_pane_g

0x6120,	// (0x000a03ec) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6120,	// (0x000a03ec) linegrid_cam4_burst_pane_g3_copy1

0xad40,	// (0x000a500c) linegrid_cam4_burst_pane_g4_ParamLimits

0xad40,	// (0x000a500c) linegrid_cam4_burst_pane_g4

0x613e,	// (0x000a040a) linegrid_cam4_burst_pane_g5_ParamLimits

0x613e,	// (0x000a040a) linegrid_cam4_burst_pane_g5

0x614f,	// (0x000a041b) linegrid_cam4_burst_pane_g6_ParamLimits

0x614f,	// (0x000a041b) linegrid_cam4_burst_pane_g6

0xad4d,	// (0x000a5019) linegrid_cam4_burst_pane_g7_ParamLimits

0xad4d,	// (0x000a5019) linegrid_cam4_burst_pane_g7

0x6166,	// (0x000a0432) cell_cam4_burst_pane_g1

0xad66,	// (0x000a5032) main_cam5_pane_t1_ParamLimits

0xad66,	// (0x000a5032) main_cam5_pane_t1

0xad78,	// (0x000a5044) main_cam5_pane_t2_ParamLimits

0xad78,	// (0x000a5044) main_cam5_pane_t2

0xad8a,	// (0x000a5056) main_cam5_pane_t3_ParamLimits

0xad8a,	// (0x000a5056) main_cam5_pane_t3

0xad9c,	// (0x000a5068) main_cam5_pane_t4_ParamLimits

0xad9c,	// (0x000a5068) main_cam5_pane_t4

0xadb4,	// (0x000a5080) main_cam5_pane_t5_ParamLimits

0xadb4,	// (0x000a5080) main_cam5_pane_t5

0xadc8,	// (0x000a5094) main_cam5_pane_t6_ParamLimits

0xadc8,	// (0x000a5094) main_cam5_pane_t6

0xaddc,	// (0x000a50a8) main_cam5_pane_t7_ParamLimits

0xaddc,	// (0x000a50a8) main_cam5_pane_t7

0xadee,	// (0x000a50ba) main_cam5_pane_t8_ParamLimits

0xadee,	// (0x000a50ba) main_cam5_pane_t8

0xae0c,	// (0x000a50d8) main_cam5_pane_t9_ParamLimits

0xae0c,	// (0x000a50d8) main_cam5_pane_t9

0xae1e,	// (0x000a50ea) main_cam5_pane_t10_ParamLimits

0xae1e,	// (0x000a50ea) main_cam5_pane_t10

0xae30,	// (0x000a50fc) main_cam5_pane_t11_ParamLimits

0xae30,	// (0x000a50fc) main_cam5_pane_t11

0xae44,	// (0x000a5110) main_cam5_pane_t12_ParamLimits

0xae44,	// (0x000a5110) main_cam5_pane_t12

0xae5b,	// (0x000a5127) main_cam5_pane_t13_ParamLimits

0xae5b,	// (0x000a5127) main_cam5_pane_t13

0x000c,

0xf935,	// (0x000a9c01) main_cam5_pane_t_ParamLimits

0xf935,	// (0x000a9c01) main_cam5_pane_t

0x04b2,	// (0x0009a77e) popup_scut_keymap_window_ParamLimits

0x04b2,	// (0x0009a77e) popup_scut_keymap_window

0x6179,	// (0x000a0445) aid_size_cell_brow_shortcut

0xc37f,	// (0x000a664b) bg_popup_window_pane_cp010

0x6185,	// (0x000a0451) grid_scut_pane

0x6191,	// (0x000a045d) cell_scut_pane_ParamLimits

0x6191,	// (0x000a045d) cell_scut_pane

0x61aa,	// (0x000a0476) cell_scut_pane_g1

0xae7e,	// (0x000a514a) cell_scut_pane_t1

0xae8d,	// (0x000a5159) cell_scut_pane_t2

0x61b3,	// (0x000a047f) cell_scut_pane_t3

0x0002,

0xf950,	// (0x000a9c1c) cell_scut_pane_t

0x3e33,	// (0x0009e0ff) main_mup3_pane_g8_ParamLimits

0x3e33,	// (0x0009e0ff) main_mup3_pane_g8

0x50c3,	// (0x0009f38f) area_vitu2_query_pane_ParamLimits

0x50c3,	// (0x0009f38f) area_vitu2_query_pane

0x5ef6,	// (0x000a01c2) input_focus_pane_cp08

0xae9c,	// (0x000a5168) area_vitu2_query_pane_g1

0x61c1,	// (0x000a048d) area_vitu2_query_pane_g2

0x0001,

0xf957,	// (0x000a9c23) area_vitu2_query_pane_g

0x61d6,	// (0x000a04a2) area_vitu2_query_pane_t1_ParamLimits

0x61d6,	// (0x000a04a2) area_vitu2_query_pane_t1

0x61ea,	// (0x000a04b6) area_vitu2_query_pane_t2_ParamLimits

0x61ea,	// (0x000a04b6) area_vitu2_query_pane_t2

0x61fe,	// (0x000a04ca) area_vitu2_query_pane_t3_ParamLimits

0x61fe,	// (0x000a04ca) area_vitu2_query_pane_t3

0xaea8,	// (0x000a5174) area_vitu2_query_pane_t4_ParamLimits

0xaea8,	// (0x000a5174) area_vitu2_query_pane_t4

0xaed0,	// (0x000a519c) area_vitu2_query_pane_t5_ParamLimits

0xaed0,	// (0x000a519c) area_vitu2_query_pane_t5

0xaef8,	// (0x000a51c4) area_vitu2_query_pane_t6_ParamLimits

0xaef8,	// (0x000a51c4) area_vitu2_query_pane_t6

0x0006,

0xf95c,	// (0x000a9c28) area_vitu2_query_pane_t_ParamLimits

0xf95c,	// (0x000a9c28) area_vitu2_query_pane_t

0x622a,	// (0x000a04f6) bg_button_pane_cp018

0x6236,	// (0x000a0502) bg_button_pane_cp021

0x6242,	// (0x000a050e) bg_button_pane_cp022

0x626d,	// (0x000a0539) input_focus_pane_cp09

0x258c,	// (0x0009c858) aid_size_touch_mv_arrow_left

0x25b5,	// (0x0009c881) aid_size_touch_mv_arrow_right

0x59e3,	// (0x0009fcaf) main_cset_slider_pane_g16_ParamLimits

0x59e3,	// (0x0009fcaf) main_cset_slider_pane_g16

0x59f1,	// (0x0009fcbd) main_cset_slider_pane_g17_ParamLimits

0x59f1,	// (0x0009fcbd) main_cset_slider_pane_g17

0x6166,	// (0x000a0432) cell_cam4_burst_pane_g1_ParamLimits

0x02c8,	// (0x0009a594) compa_mode_pane

0x5c13,	// (0x0009fedf) popup_vtel_slider_window_g3_ParamLimits

0x5c13,	// (0x0009fedf) popup_vtel_slider_window_g3

0x5c2a,	// (0x0009fef6) popup_vtel_slider_window_g4_ParamLimits

0x5c2a,	// (0x0009fef6) popup_vtel_slider_window_g4

0x5c41,	// (0x0009ff0d) popup_vtel_slider_window_t1_ParamLimits

0x5c41,	// (0x0009ff0d) popup_vtel_slider_window_t1

0xa153,	// (0x000a441f) main_cl_pane

0xa5c2,	// (0x000a488e) popup_imed_adjust2_window_ParamLimits

0xd329,	// (0x000a75f5) bg_tb_trans_pane_cp05_ParamLimits

0xedfa,	// (0x000a90c6) popup_imed_adjust2_window_g1_ParamLimits

0xee09,	// (0x000a90d5) popup_imed_adjust2_window_g2_ParamLimits

0xee09,	// (0x000a90d5) popup_imed_adjust2_window_g2

0xee15,	// (0x000a90e1) popup_imed_adjust2_window_g3_ParamLimits

0xee15,	// (0x000a90e1) popup_imed_adjust2_window_g3

0x0002,

0xf6d7,	// (0x000a99a3) popup_imed_adjust2_window_g_ParamLimits

0xf6d7,	// (0x000a99a3) popup_imed_adjust2_window_g

0xee21,	// (0x000a90ed) popup_imed_adjust2_window_t1_ParamLimits

0xee39,	// (0x000a9105) slider_imed_adjust_pane_ParamLimits

0xee4d,	// (0x000a9119) slider_imed_adjust_pane_g1_ParamLimits

0xee5d,	// (0x000a9129) slider_imed_adjust_pane_g2_ParamLimits

0xee6d,	// (0x000a9139) slider_imed_adjust_pane_g3_ParamLimits

0xee7e,	// (0x000a914a) slider_imed_adjust_pane_g4_ParamLimits

0xf6de,	// (0x000a99aa) slider_imed_adjust_pane_g_ParamLimits

0x4e43,	// (0x0009f10f) aid_touch_area_cam4_ParamLimits

0x4e43,	// (0x0009f10f) aid_touch_area_cam4

0xaa19,	// (0x000a4ce5) battery_pane_cp01

0x4f16,	// (0x0009f1e2) main_camera4_pane_g6_ParamLimits

0x4f16,	// (0x0009f1e2) main_camera4_pane_g6

0x4f40,	// (0x0009f20c) main_camera4_pane_t2_ParamLimits

0x4f40,	// (0x0009f20c) main_camera4_pane_t2

0x0001,

0xf7db,	// (0x000a9aa7) main_camera4_pane_t_ParamLimits

0xf7db,	// (0x000a9aa7) main_camera4_pane_t

0x4f75,	// (0x0009f241) aid_touch_area_vid4_ParamLimits

0x4f75,	// (0x0009f241) aid_touch_area_vid4

0x4fcc,	// (0x0009f298) main_video4_pane_g5_ParamLimits

0x4fcc,	// (0x0009f298) main_video4_pane_g5

0x4ff2,	// (0x0009f2be) vid4_progress_pane_ParamLimits

0x4ff2,	// (0x0009f2be) vid4_progress_pane

0xab35,	// (0x000a4e01) main_cset_slider_pane_g18_ParamLimits

0xab35,	// (0x000a4e01) main_cset_slider_pane_g18

0xad5a,	// (0x000a5026) cell_cam4_burst_pane_g2_ParamLimits

0xad5a,	// (0x000a5026) cell_cam4_burst_pane_g2

0x0001,

0xf930,	// (0x000a9bfc) cell_cam4_burst_pane_g_ParamLimits

0xf930,	// (0x000a9bfc) cell_cam4_burst_pane_g

0xc194,	// (0x000a6460) bg_cl_pane_ParamLimits

0xc194,	// (0x000a6460) bg_cl_pane

0x627e,	// (0x000a054a) cl_header_pane_ParamLimits

0x627e,	// (0x000a054a) cl_header_pane

0x6292,	// (0x000a055e) cl_listscroll_pane_ParamLimits

0x6292,	// (0x000a055e) cl_listscroll_pane

0xaf44,	// (0x000a5210) bg_cl_pane_g1

0xaf4c,	// (0x000a5218) bg_cl_pane_g2

0xaf54,	// (0x000a5220) bg_cl_pane_g3

0xaf5c,	// (0x000a5228) bg_cl_pane_g4

0xaf64,	// (0x000a5230) bg_cl_pane_g5

0xaf6c,	// (0x000a5238) bg_cl_pane_g6

0xaf74,	// (0x000a5240) bg_cl_pane_g7

0xaf7c,	// (0x000a5248) bg_cl_pane_g8

0xaf84,	// (0x000a5250) bg_cl_pane_g9

0x0008,

0xf96b,	// (0x000a9c37) bg_cl_pane_g

0x62a2,	// (0x000a056e) aid_height_cl_leading_ParamLimits

0x62a2,	// (0x000a056e) aid_height_cl_leading

0x62ae,	// (0x000a057a) aid_height_cl_text_ParamLimits

0x62ae,	// (0x000a057a) aid_height_cl_text

0xa438,	// (0x000a4704) bg_cl_header_pane_ParamLimits

0xa438,	// (0x000a4704) bg_cl_header_pane

0x62cd,	// (0x000a0599) cl_header_pane_g1_ParamLimits

0x62cd,	// (0x000a0599) cl_header_pane_g1

0x62e3,	// (0x000a05af) cl_header_pane_t1_ParamLimits

0x62e3,	// (0x000a05af) cl_header_pane_t1

0xaf8c,	// (0x000a5258) cl_list_pane

0xab08,	// (0x000a4dd4) hc_scroll_pane_cp01

0xcb6b,	// (0x000a6e37) bg_cl_header_pane_g1

0x5483,	// (0x0009f74f) bg_cl_header_pane_g2

0xcb8b,	// (0x000a6e57) bg_cl_header_pane_g3

0x5493,	// (0x0009f75f) bg_cl_header_pane_g4

0x548b,	// (0x0009f757) bg_cl_header_pane_g5

0xac55,	// (0x000a4f21) bg_cl_header_pane_g6

0x54ab,	// (0x0009f777) bg_cl_header_pane_g7

0x54b3,	// (0x0009f77f) bg_cl_header_pane_g8

0x54a3,	// (0x0009f76f) bg_cl_header_pane_g9

0x0008,

0xf97e,	// (0x000a9c4a) bg_cl_header_pane_g

0x62fc,	// (0x000a05c8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x62fc,	// (0x000a05c8) hc_cl_list_double_graphic_heading_pane

0x630f,	// (0x000a05db) hc_cl_list_single_graphic_pane_ParamLimits

0x630f,	// (0x000a05db) hc_cl_list_single_graphic_pane

0x6327,	// (0x000a05f3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6327,	// (0x000a05f3) hc_cl_list_single_graphic_pane_g1

0x6333,	// (0x000a05ff) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6333,	// (0x000a05ff) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf991,	// (0x000a9c5d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf991,	// (0x000a9c5d) hc_cl_list_single_graphic_pane_g

0x6347,	// (0x000a0613) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6347,	// (0x000a0613) hc_cl_list_single_graphic_pane_t1

0x6327,	// (0x000a05f3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6327,	// (0x000a05f3) hc_cl_list_double_graphic_heading_pane_g1

0x635c,	// (0x000a0628) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x635c,	// (0x000a0628) hc_cl_list_double_graphic_heading_pane_g2

0x6370,	// (0x000a063c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6370,	// (0x000a063c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf996,	// (0x000a9c62) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf996,	// (0x000a9c62) hc_cl_list_double_graphic_heading_pane_g

0x6384,	// (0x000a0650) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6384,	// (0x000a0650) hc_cl_list_double_graphic_heading_pane_t1

0x6399,	// (0x000a0665) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6399,	// (0x000a0665) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf99d,	// (0x000a9c69) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf99d,	// (0x000a9c69) hc_cl_list_double_graphic_heading_pane_t

0xaf9d,	// (0x000a5269) vid4_progress_pane_g1

0xafad,	// (0x000a5279) vid4_progress_pane_g2

0x63ae,	// (0x000a067a) vid4_progress_pane_g3

0xafbd,	// (0x000a5289) vid4_progress_pane_g4

0x0004,

0xf9a2,	// (0x000a9c6e) vid4_progress_pane_g

0x63c0,	// (0x000a068c) vid4_progress_pane_t1

0xafdb,	// (0x000a52a7) vid4_progress_pane_t2

0x0002,

0xf9ad,	// (0x000a9c79) vid4_progress_pane_t

0x63da,	// (0x000a06a6) wait_bar_pane_cp07

0xe6f9,	// (0x000a89c5) blid_firmament_pane_ParamLimits

0xe73c,	// (0x000a8a08) popup_blid_sat_info2_window_g1

0xe760,	// (0x000a8a2c) popup_blid_sat_info2_window_t3

0xe76e,	// (0x000a8a3a) popup_blid_sat_info2_window_t4

0xe77c,	// (0x000a8a48) popup_blid_sat_info2_window_t5

0xe78a,	// (0x000a8a56) popup_blid_sat_info2_window_t6

0xe79a,	// (0x000a8a66) popup_blid_sat_info2_window_t7

0xe7a8,	// (0x000a8a74) popup_blid_sat_info2_window_t8

0xe7b6,	// (0x000a8a82) popup_blid_sat_info2_window_t9

0xe7c4,	// (0x000a8a90) popup_blid_sat_info2_window_t10

0xe88b,	// (0x000a8b57) aid_firma_cardinal_ParamLimits

0xe89f,	// (0x000a8b6b) blid_firmament_pane_t1_ParamLimits

0xe8b6,	// (0x000a8b82) blid_firmament_pane_t2_ParamLimits

0xe8cd,	// (0x000a8b99) blid_firmament_pane_t3_ParamLimits

0xe8e4,	// (0x000a8bb0) blid_firmament_pane_t4_ParamLimits

0xf5d0,	// (0x000a989c) blid_firmament_pane_t_ParamLimits

0xe8fb,	// (0x000a8bc7) blid_sat_info_pane_ParamLimits

0xa145,	// (0x000a4411) main_cam_set_pane_ParamLimits

0x45ea,	// (0x0009e8b6) aid_size_cell_colour_35_ParamLimits

0x460a,	// (0x0009e8d6) aid_size_cell_colour_112_ParamLimits

0x462a,	// (0x0009e8f6) aid_size_cell_effect_ParamLimits

0xd329,	// (0x000a75f5) bg_tb_trans_pane_cp02_ParamLimits

0x464a,	// (0x0009e916) heading_imed_pane_ParamLimits

0x4656,	// (0x0009e922) listscroll_imed_pane_ParamLimits

0xdc2c,	// (0x000a7ef8) popup_call2_audio_first_window_g5_ParamLimits

0xdc2c,	// (0x000a7ef8) popup_call2_audio_first_window_g5

0x4a24,	// (0x0009ecf0) aid_size_touch_image3_arrow_left_ParamLimits

0x4a24,	// (0x0009ecf0) aid_size_touch_image3_arrow_left

0x4a50,	// (0x0009ed1c) aid_size_touch_image3_arrow_right_ParamLimits

0x4a50,	// (0x0009ed1c) aid_size_touch_image3_arrow_right

0xaff4,	// (0x000a52c0) vid4_progress_pane_t3

0x47d3,	// (0x0009ea9f) main_hwr_training_symbol_option_pane_ParamLimits

0x47d3,	// (0x0009ea9f) main_hwr_training_symbol_option_pane

0xef85,	// (0x000a9251) popup_hwr_training_preview_window_ParamLimits

0xef85,	// (0x000a9251) popup_hwr_training_preview_window

0x47f3,	// (0x0009eabf) hwr_training_navi_pane_g5_ParamLimits

0x47f3,	// (0x0009eabf) hwr_training_navi_pane_g5

0x52df,	// (0x0009f5ab) popup_char_count_window

0xa145,	// (0x000a4411) bg_popup_sub_pane_cp20_ParamLimits

0x5d53,	// (0x000a001f) list_vitu2_match_list_pane_ParamLimits

0x5d5f,	// (0x000a002b) vitu2_page_scroll_pane_ParamLimits

0x5d5f,	// (0x000a002b) vitu2_page_scroll_pane

0xb01a,	// (0x000a52e6) list_single_hwr_training_symbol_option_pane_ParamLimits

0xb01a,	// (0x000a52e6) list_single_hwr_training_symbol_option_pane

0xb02d,	// (0x000a52f9) list_single_hwr_training_symbol_option_pane_g1

0xb035,	// (0x000a5301) list_single_hwr_training_symbol_option_pane_t1

0xb043,	// (0x000a530f) bg_button_pane_cp023

0xb04c,	// (0x000a5318) bg_button_pane_cp024

0xb07f,	// (0x000a534b) vitu2_page_scroll_pane_g1

0xb087,	// (0x000a5353) vitu2_page_scroll_pane_g2

0x0001,

0xf9b4,	// (0x000a9c80) vitu2_page_scroll_pane_g

0xb08f,	// (0x000a535b) vitu2_page_scroll_pane_t1

0xb09e,	// (0x000a536a) popup_char_count_window_g1

0xb0a7,	// (0x000a5373) popup_char_count_window_g2

0xb0b0,	// (0x000a537c) popup_char_count_window_g3

0x0002,

0xf9b9,	// (0x000a9c85) popup_char_count_window_g

0xb0b9,	// (0x000a5385) popup_char_count_window_t1

0xa153,	// (0x000a441f) main_vded2_pane

0xede6,	// (0x000a90b2) aid_size_cell_imed_line

0xedf0,	// (0x000a90bc) grid_imed_line_width_pane

0xaad3,	// (0x000a4d9f) vid4_indicators_pane_g4

0xb0c7,	// (0x000a5393) cell_imed_line_width_pane_ParamLimits

0xb0c7,	// (0x000a5393) cell_imed_line_width_pane

0xb0dd,	// (0x000a53a9) cell_imed_line_width_pane_g1

0xb0e6,	// (0x000a53b2) cell_imed_line_width_pane_g2

0x0001,

0xf9c0,	// (0x000a9c8c) cell_imed_line_width_pane_g

0x6412,	// (0x000a06de) main_vded2_pane_g1_ParamLimits

0x6412,	// (0x000a06de) main_vded2_pane_g1

0x642d,	// (0x000a06f9) main_vded2_pane_g2_ParamLimits

0x642d,	// (0x000a06f9) main_vded2_pane_g2

0x0001,

0xf9c5,	// (0x000a9c91) main_vded2_pane_g_ParamLimits

0xf9c5,	// (0x000a9c91) main_vded2_pane_g

0x643f,	// (0x000a070b) vded2_slider_pane_ParamLimits

0x643f,	// (0x000a070b) vded2_slider_pane

0x644f,	// (0x000a071b) aid_size_touch_vded2_end

0x6459,	// (0x000a0725) aid_size_touch_vded2_playhead

0xb0ee,	// (0x000a53ba) aid_size_touch_vded2_start

0xb0f6,	// (0x000a53c2) vded2_slider_bg_pane

0xb0ff,	// (0x000a53cb) vded2_slider_pane_g1

0xb108,	// (0x000a53d4) vded2_slider_pane_g2

0x6463,	// (0x000a072f) vded2_slider_pane_g3

0x0002,

0xf9ca,	// (0x000a9c96) vded2_slider_pane_g

0xb110,	// (0x000a53dc) vded2_slider_bg_pane_g1

0xb119,	// (0x000a53e5) vded2_slider_bg_pane_g2

0xb122,	// (0x000a53ee) vded2_slider_bg_pane_g3

0x0002,

0xf9d1,	// (0x000a9c9d) vded2_slider_bg_pane_g

0x2ab8,	// (0x0009cd84) aid_postcard_touch_down_pane_ParamLimits

0x2ab8,	// (0x0009cd84) aid_postcard_touch_down_pane

0x2ad0,	// (0x0009cd9c) aid_postcard_touch_up_pane_ParamLimits

0x2ad0,	// (0x0009cd9c) aid_postcard_touch_up_pane

0xa153,	// (0x000a441f) main_blid2_pane

0xa5a4,	// (0x000a4870) popup_blid2_search_window

0x02c8,	// (0x0009a594) blid2_gps_pane

0x02c8,	// (0x0009a594) blid2_navig_pane

0x02c8,	// (0x0009a594) blid2_search_pane

0x02c8,	// (0x0009a594) blid2_tripm_pane

0x646e,	// (0x000a073a) blid2_search_pane_g1_ParamLimits

0x646e,	// (0x000a073a) blid2_search_pane_g1

0x6481,	// (0x000a074d) blid2_search_pane_t1_ParamLimits

0x6481,	// (0x000a074d) blid2_search_pane_t1

0x6493,	// (0x000a075f) aid_size_cell_blid2_gps_ParamLimits

0x6493,	// (0x000a075f) aid_size_cell_blid2_gps

0x64ab,	// (0x000a0777) blid2_gps_pane_g1_ParamLimits

0x64ab,	// (0x000a0777) blid2_gps_pane_g1

0x64bf,	// (0x000a078b) grid_blid2_satellite_pane_ParamLimits

0x64bf,	// (0x000a078b) grid_blid2_satellite_pane

0x64d7,	// (0x000a07a3) blid2_navig_pane_g1_ParamLimits

0x64d7,	// (0x000a07a3) blid2_navig_pane_g1

0x64e3,	// (0x000a07af) blid2_navig_pane_t1_ParamLimits

0x64e3,	// (0x000a07af) blid2_navig_pane_t1

0x64fe,	// (0x000a07ca) blid2_navig_pane_t2_ParamLimits

0x64fe,	// (0x000a07ca) blid2_navig_pane_t2

0x0001,

0xf9d8,	// (0x000a9ca4) blid2_navig_pane_t_ParamLimits

0xf9d8,	// (0x000a9ca4) blid2_navig_pane_t

0x6519,	// (0x000a07e5) blid2_navig_ring_pane_ParamLimits

0x6519,	// (0x000a07e5) blid2_navig_ring_pane

0x6534,	// (0x000a0800) blid2_speed_pane_ParamLimits

0x6534,	// (0x000a0800) blid2_speed_pane

0x6540,	// (0x000a080c) blid2_tripm_pane_g1_ParamLimits

0x6540,	// (0x000a080c) blid2_tripm_pane_g1

0x655b,	// (0x000a0827) blid2_tripm_pane_g2_ParamLimits

0x655b,	// (0x000a0827) blid2_tripm_pane_g2

0x656e,	// (0x000a083a) blid2_tripm_pane_g3_ParamLimits

0x656e,	// (0x000a083a) blid2_tripm_pane_g3

0x657f,	// (0x000a084b) blid2_tripm_pane_g4_ParamLimits

0x657f,	// (0x000a084b) blid2_tripm_pane_g4

0x6590,	// (0x000a085c) blid2_tripm_pane_g5_ParamLimits

0x6590,	// (0x000a085c) blid2_tripm_pane_g5

0x0005,

0xf9dd,	// (0x000a9ca9) blid2_tripm_pane_g_ParamLimits

0xf9dd,	// (0x000a9ca9) blid2_tripm_pane_g

0x65b6,	// (0x000a0882) blid2_tripm_pane_t1_ParamLimits

0x65b6,	// (0x000a0882) blid2_tripm_pane_t1

0x65cf,	// (0x000a089b) blid2_tripm_pane_t2_ParamLimits

0x65cf,	// (0x000a089b) blid2_tripm_pane_t2

0x65e8,	// (0x000a08b4) blid2_tripm_pane_t3_ParamLimits

0x65e8,	// (0x000a08b4) blid2_tripm_pane_t3

0x0003,

0xf9ea,	// (0x000a9cb6) blid2_tripm_pane_t_ParamLimits

0xf9ea,	// (0x000a9cb6) blid2_tripm_pane_t

0x662f,	// (0x000a08fb) cell_blid2_satellite_pane_ParamLimits

0x662f,	// (0x000a08fb) cell_blid2_satellite_pane

0x664b,	// (0x000a0917) cell_blid2_satellite_pane_g1

0xb12b,	// (0x000a53f7) cell_blid2_satellite_pane_t1

0xc136,	// (0x000a6402) blid2_speed_pane_g1

0xb139,	// (0x000a5405) blid2_speed_pane_t1

0xb147,	// (0x000a5413) blid2_speed_pane_t2

0x0001,

0xf9f3,	// (0x000a9cbf) blid2_speed_pane_t

0xc136,	// (0x000a6402) blid2_navig_ring_pane_g1

0x6654,	// (0x000a0920) blid2_navig_ring_pane_g2

0x665c,	// (0x000a0928) blid2_navig_ring_pane_g3

0x6664,	// (0x000a0930) blid2_navig_ring_pane_g4

0x666c,	// (0x000a0938) blid2_navig_ring_pane_g5

0x0004,

0xf9f8,	// (0x000a9cc4) blid2_navig_ring_pane_g

0x02c8,	// (0x0009a594) bg_popup_window_pane_cp011

0xb155,	// (0x000a5421) popup_blid2_search_window_g1

0xb15d,	// (0x000a5429) popup_blid2_search_window_t1

0xb16b,	// (0x000a5437) popup_blid2_search_window_t2

0x0001,

0xfa03,	// (0x000a9ccf) popup_blid2_search_window_t

0xca7a,	// (0x000a6d46) main_browser_pane_g1

0xc194,	// (0x000a6460) main_browser_pane_ParamLimits

0xa145,	// (0x000a4411) bg_button_pane_cp011_ParamLimits

0x5465,	// (0x0009f731) cell_vitu2_function_pane_g1_ParamLimits

0xd329,	// (0x000a75f5) bg_popup_sub_pane_cp22_ParamLimits

0x5ef6,	// (0x000a01c2) input_focus_pane_cp08_ParamLimits

0x5f12,	// (0x000a01de) popup_vitu2_query_button_pane_ParamLimits

0x5f12,	// (0x000a01de) popup_vitu2_query_button_pane

0x5f21,	// (0x000a01ed) popup_vitu2_query_input_button_pane

0xacb0,	// (0x000a4f7c) popup_vitu2_query_window_g1_ParamLimits

0x5f2b,	// (0x000a01f7) popup_vitu2_query_window_g2_ParamLimits

0xf904,	// (0x000a9bd0) popup_vitu2_query_window_g_ParamLimits

0x02c8,	// (0x0009a594) bg_button_pane_cp026

0x6674,	// (0x000a0940) popup_vitu2_query_input_button_pane_g1

0x02c8,	// (0x0009a594) bg_button_pane_cp025

0xb179,	// (0x000a5445) popup_vitu2_query_button_pane_t1

0x3a27,	// (0x0009dcf3) main_mp3_pane_t6

0x3a35,	// (0x0009dd01) popup_slider_window_cp01

0xaa37,	// (0x000a4d03) cam4_battery_pane

0xaa8c,	// (0x000a4d58) cam4_battery_pane_cp02

0xaf95,	// (0x000a5261) cam4_battery_pane_cp01

0xaf95,	// (0x000a5261) cam4_battery_pane_cp03

0xa6aa,	// (0x000a4976) cam4_battery_pane_g1

0xc136,	// (0x000a6402) cam4_battery_pane_g2

0x0001,

0xfa08,	// (0x000a9cd4) cam4_battery_pane_g

0xe7d2,	// (0x000a8a9e) popup_blid_sat_info2_window_t11

0x258c,	// (0x0009c858) aid_size_touch_mv_arrow_left_ParamLimits

0x25b5,	// (0x0009c881) aid_size_touch_mv_arrow_right_ParamLimits

0xd1b0,	// (0x000a747c) navi_pane_g1_ParamLimits

0x25f4,	// (0x0009c8c0) navi_pane_g2_ParamLimits

0x2622,	// (0x0009c8ee) navi_pane_g3_ParamLimits

0xf30c,	// (0x000a95d8) navi_pane_g_ParamLimits

0x267c,	// (0x0009c948) navi_pane_mv_t1_ParamLimits

0x4662,	// (0x0009e92e) grid_imed_effect_pane_ParamLimits

0x1193,	// (0x0009b45f) aid_placing_vt_slider_lsc

0xc9b8,	// (0x000a6c84) aid_placing_vt_slider_prt

0xa438,	// (0x000a4704) bg_tb_trans_pane_cp01_ParamLimits

0xea3a,	// (0x000a8d06) popup_image_details_window_g1_ParamLimits

0xea4d,	// (0x000a8d19) popup_image_details_window_g2_ParamLimits

0xea62,	// (0x000a8d2e) popup_image_details_window_g3_ParamLimits

0xea62,	// (0x000a8d2e) popup_image_details_window_g3

0xf610,	// (0x000a98dc) popup_image_details_window_g_ParamLimits

0xea76,	// (0x000a8d42) popup_image_details_window_t1_ParamLimits

0xea88,	// (0x000a8d54) popup_image_details_window_t2_ParamLimits

0xeaa1,	// (0x000a8d6d) popup_image_details_window_t3_ParamLimits

0xeab5,	// (0x000a8d81) popup_image_details_window_t4_ParamLimits

0xead0,	// (0x000a8d9c) popup_image_details_window_t5_ParamLimits

0xf617,	// (0x000a98e3) popup_image_details_window_t_ParamLimits

0x62ba,	// (0x000a0586) cl_header_name_pane_ParamLimits

0x62ba,	// (0x000a0586) cl_header_name_pane

0x667c,	// (0x000a0948) cl_header_name_pane_t1_ParamLimits

0x667c,	// (0x000a0948) cl_header_name_pane_t1

0x669d,	// (0x000a0969) cl_header_name_pane_t2_ParamLimits

0x669d,	// (0x000a0969) cl_header_name_pane_t2

0x66df,	// (0x000a09ab) cl_header_name_pane_t3_ParamLimits

0x66df,	// (0x000a09ab) cl_header_name_pane_t3

0x0002,

0xfa0d,	// (0x000a9cd9) cl_header_name_pane_t_ParamLimits

0xfa0d,	// (0x000a9cd9) cl_header_name_pane_t

0x264d,	// (0x0009c919) navi_pane_mv_g2_ParamLimits

0x527b,	// (0x0009f547) field_vitu2_entry_pane_g1_ParamLimits

0x5287,	// (0x0009f553) field_vitu2_entry_pane_g2_ParamLimits

0xd307,	// (0x000a75d3) field_vitu2_entry_pane_g3_ParamLimits

0xd307,	// (0x000a75d3) field_vitu2_entry_pane_g3

0xf80d,	// (0x000a9ad9) field_vitu2_entry_pane_g_ParamLimits

0x52f5,	// (0x0009f5c1) cell_vitu2_itu_pane_g1_ParamLimits

0x530d,	// (0x0009f5d9) cell_vitu2_itu_pane_g2_ParamLimits

0x530d,	// (0x0009f5d9) cell_vitu2_itu_pane_g2

0x0001,

0xf819,	// (0x000a9ae5) cell_vitu2_itu_pane_g_ParamLimits

0xf819,	// (0x000a9ae5) cell_vitu2_itu_pane_g

0xa145,	// (0x000a4411) bg_vkb2_func_pane_cp05_ParamLimits

0xa145,	// (0x000a4411) bg_vkb2_func_pane_cp05

0xa145,	// (0x000a4411) bg_vkb2_func_pane_cp03

0xa145,	// (0x000a4411) bg_vkb2_func_pane_cp04

0xa145,	// (0x000a4411) bg_vkb2_func_pane_cp10_ParamLimits

0xa145,	// (0x000a4411) bg_vkb2_func_pane_cp10

0x6257,	// (0x000a0523) bg_vkb2_func_pane_cp08

0x622a,	// (0x000a04f6) bg_vkb2_func_pane_cp06

0x6236,	// (0x000a0502) bg_vkb2_func_pane_cp07

0xb055,	// (0x000a5321) bg_vkb2_func_pane_cp11_ParamLimits

0xb055,	// (0x000a5321) bg_vkb2_func_pane_cp11

0xb06a,	// (0x000a5336) bg_vkb2_func_pane_cp12_ParamLimits

0xb06a,	// (0x000a5336) bg_vkb2_func_pane_cp12

0x02c8,	// (0x0009a594) bg_vkb2_func_pane_cp09

0x5483,	// (0x0009f74f) bg_vkb2_func_pane_g1

0xcb8b,	// (0x000a6e57) bg_vkb2_func_pane_g2

0x548b,	// (0x0009f757) bg_vkb2_func_pane_g3

0x5493,	// (0x0009f75f) bg_vkb2_func_pane_g4

0xac55,	// (0x000a4f21) bg_vkb2_func_pane_g5

0x54ab,	// (0x0009f777) bg_vkb2_func_pane_g6

0x54b3,	// (0x0009f77f) bg_vkb2_func_pane_g7

0x54a3,	// (0x0009f76f) bg_vkb2_func_pane_g8

0xcb6b,	// (0x000a6e37) bg_vkb2_func_pane_g9

0x0008,

0xfa14,	// (0x000a9ce0) bg_vkb2_func_pane_g

0x65a4,	// (0x000a0870) blid2_tripm_pane_g6_ParamLimits

0x65a4,	// (0x000a0870) blid2_tripm_pane_g6

0x4947,	// (0x0009ec13) mp4_progress_pane_g1

0x661b,	// (0x000a08e7) blid2_tripm_values_pane_ParamLimits

0x661b,	// (0x000a08e7) blid2_tripm_values_pane

0x6710,	// (0x000a09dc) blid2_tripm_values_pane_t1

0x671e,	// (0x000a09ea) blid2_tripm_values_pane_t2

0xb187,	// (0x000a5453) blid2_tripm_values_pane_t3

0x672c,	// (0x000a09f8) blid2_tripm_values_pane_t4

0x673a,	// (0x000a0a06) blid2_tripm_values_pane_t5

0x6748,	// (0x000a0a14) blid2_tripm_values_pane_t6

0xb195,	// (0x000a5461) blid2_tripm_values_pane_t7

0x6756,	// (0x000a0a22) blid2_tripm_values_pane_t8

0x6764,	// (0x000a0a30) blid2_tripm_values_pane_t9

0x0008,

0xfa27,	// (0x000a9cf3) blid2_tripm_values_pane_t

0x11d2,	// (0x0009b49e) call_video_pane_t1_ParamLimits

0x11ec,	// (0x0009b4b8) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x000a9486) call_video_pane_t_ParamLimits

0x29a5,	// (0x0009cc71) msg_header_pane_g1_ParamLimits

0xd3f7,	// (0x000a76c3) msg_header_pane_g2_ParamLimits

0xd3f7,	// (0x000a76c3) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x000a9676) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x000a9676) msg_header_pane_g

0xc194,	// (0x000a6460) main_clock2_pane_ParamLimits

0x435a,	// (0x0009e626) grid_clock2_toolbar_pane_ParamLimits

0x435a,	// (0x0009e626) grid_clock2_toolbar_pane

0x435a,	// (0x0009e626) listscroll_clock2_pane_ParamLimits

0x435a,	// (0x0009e626) listscroll_clock2_pane

0x4436,	// (0x0009e702) main_clock2_pane_t3_ParamLimits

0x4436,	// (0x0009e702) main_clock2_pane_t3

0x4457,	// (0x0009e723) main_clock2_pane_t4_ParamLimits

0x4457,	// (0x0009e723) main_clock2_pane_t4

0xb1a3,	// (0x000a546f) cell_clock2_toolbar_pane

0xb1ab,	// (0x000a5477) cell_clock2_toolbar_pane_cp01

0xb1ab,	// (0x000a5477) cell_clock2_toolbar_pane_cp02

0xb1b3,	// (0x000a547f) cell_clock2_toolbar_pane_cp03

0xb1bb,	// (0x000a5487) list_clock2_pane

0xd116,	// (0x000a73e2) scroll_pane_cp10

0xb1c3,	// (0x000a548f) list_single_clock2_pane_ParamLimits

0xb1c3,	// (0x000a548f) list_single_clock2_pane

0xc37f,	// (0x000a664b) list_highlight_pane_cp08

0xb1d0,	// (0x000a549c) list_single_clock2_pane_t1

0xb25c,	// (0x000a5528) list_single_clock2_pane_t2

0x0001,

0xfa3a,	// (0x000a9d06) list_single_clock2_pane_t

0x02c8,	// (0x0009a594) bg_button_pane_cp10

0xb26a,	// (0x000a5536) cell_clock2_toolbar_pane_g1

0x2a44,	// (0x0009cd10) aid_main_viewer_pane_g1_ParamLimits

0x2a44,	// (0x0009cd10) aid_main_viewer_pane_g1

0x2a52,	// (0x0009cd1e) aid_main_viewer_pane_g2_ParamLimits

0x2a52,	// (0x0009cd1e) aid_main_viewer_pane_g2

0x2a60,	// (0x0009cd2c) aid_main_viewer_pane_g3_ParamLimits

0x2a60,	// (0x0009cd2c) aid_main_viewer_pane_g3

0x2a6f,	// (0x0009cd3b) aid_main_viewer_pane_g4_ParamLimits

0x2a6f,	// (0x0009cd3b) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x000a9687) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x000a9687) aid_main_viewer_pane_g

0x335a,	// (0x0009d626) main_calc_pane_ParamLimits

0x336e,	// (0x0009d63a) main_dialer2_pane_ParamLimits

0xa153,	// (0x000a441f) main_cam6_pane

0xa153,	// (0x000a441f) main_vid6_pane

0x4366,	// (0x0009e632) listscroll_gen_pane_cp06_ParamLimits

0x4366,	// (0x0009e632) listscroll_gen_pane_cp06

0x4478,	// (0x0009e744) main_clock2_pane_t5_ParamLimits

0x4478,	// (0x0009e744) main_clock2_pane_t5

0x44d6,	// (0x0009e7a2) aid_call2_pane_cp10_ParamLimits

0x44e8,	// (0x0009e7b4) aid_call_pane_cp10_ParamLimits

0xd185,	// (0x000a7451) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd185,	// (0x000a7451) popup_clock_analogue_window_cp10_g2_ParamLimits

0x44fa,	// (0x0009e7c6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x44fa,	// (0x0009e7c6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd185,	// (0x000a7451) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6cc,	// (0x000a9998) popup_clock_analogue_window_cp10_g_ParamLimits

0x4510,	// (0x0009e7dc) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4a08,	// (0x0009ecd4) cell_dialer2_keypad_pane_g2_ParamLimits

0x4a08,	// (0x0009ecd4) cell_dialer2_keypad_pane_g2

0x0001,

0xf7ac,	// (0x000a9a78) cell_dialer2_keypad_pane_g_ParamLimits

0xf7ac,	// (0x000a9a78) cell_dialer2_keypad_pane_g

0xc140,	// (0x000a640c) cell_dialer2_keypad_pane_t1

0x58c3,	// (0x0009fb8f) main_cset_text2_pane_ParamLimits

0x58c3,	// (0x0009fb8f) main_cset_text2_pane

0xae9c,	// (0x000a5168) area_vitu2_query_pane_g1_ParamLimits

0x61c1,	// (0x000a048d) area_vitu2_query_pane_g2_ParamLimits

0xf957,	// (0x000a9c23) area_vitu2_query_pane_g_ParamLimits

0xaf20,	// (0x000a51ec) area_vitu2_query_pane_t7_ParamLimits

0xaf20,	// (0x000a51ec) area_vitu2_query_pane_t7

0x622a,	// (0x000a04f6) bg_button_pane_cp018_ParamLimits

0x6236,	// (0x000a0502) bg_button_pane_cp021_ParamLimits

0x6242,	// (0x000a050e) bg_button_pane_cp022_ParamLimits

0x6257,	// (0x000a0523) bg_vkb2_func_pane_cp08_ParamLimits

0x622a,	// (0x000a04f6) bg_vkb2_func_pane_cp06_ParamLimits

0x6236,	// (0x000a0502) bg_vkb2_func_pane_cp07_ParamLimits

0x626d,	// (0x000a0539) input_focus_pane_cp09_ParamLimits

0xb1de,	// (0x000a54aa) cam6_autofocus_pane_ParamLimits

0xb1de,	// (0x000a54aa) cam6_autofocus_pane

0x6772,	// (0x000a0a3e) cam6_image_uncrop_pane_ParamLimits

0x6772,	// (0x000a0a3e) cam6_image_uncrop_pane

0x6782,	// (0x000a0a4e) cam6_indi_pane_ParamLimits

0x6782,	// (0x000a0a4e) cam6_indi_pane

0x6798,	// (0x000a0a64) cam6_mode_pane_ParamLimits

0x6798,	// (0x000a0a64) cam6_mode_pane

0x67aa,	// (0x000a0a76) cam6_timer_pane_ParamLimits

0x67aa,	// (0x000a0a76) cam6_timer_pane

0x67b6,	// (0x000a0a82) cam6_zoom_pane_ParamLimits

0x67b6,	// (0x000a0a82) cam6_zoom_pane

0x67c4,	// (0x000a0a90) cam6_mode_pane_g1_ParamLimits

0x67c4,	// (0x000a0a90) cam6_mode_pane_g1

0x67d4,	// (0x000a0aa0) cam6_mode_pane_g2_ParamLimits

0x67d4,	// (0x000a0aa0) cam6_mode_pane_g2

0x67e4,	// (0x000a0ab0) cam6_mode_pane_g3_ParamLimits

0x67e4,	// (0x000a0ab0) cam6_mode_pane_g3

0x67f4,	// (0x000a0ac0) cam6_mode_pane_g4_ParamLimits

0x67f4,	// (0x000a0ac0) cam6_mode_pane_g4

0x0003,

0xfa3f,	// (0x000a9d0b) cam6_mode_pane_g_ParamLimits

0xfa3f,	// (0x000a9d0b) cam6_mode_pane_g

0xecce,	// (0x000a8f9a) bg_tb_trans_pane_cp08_ParamLimits

0xecce,	// (0x000a8f9a) bg_tb_trans_pane_cp08

0xb272,	// (0x000a553e) cam6_battery_pane_ParamLimits

0xb272,	// (0x000a553e) cam6_battery_pane

0xb288,	// (0x000a5554) cam6_indi_pane_g1_ParamLimits

0xb288,	// (0x000a5554) cam6_indi_pane_g1

0xb29a,	// (0x000a5566) cam6_indi_pane_g2_ParamLimits

0xb29a,	// (0x000a5566) cam6_indi_pane_g2

0xb2ac,	// (0x000a5578) cam6_indi_pane_g3_ParamLimits

0xb2ac,	// (0x000a5578) cam6_indi_pane_g3

0x0002,

0xfa48,	// (0x000a9d14) cam6_indi_pane_g_ParamLimits

0xfa48,	// (0x000a9d14) cam6_indi_pane_g

0xb2be,	// (0x000a558a) cam6_indi_pane_t1_ParamLimits

0xb2be,	// (0x000a558a) cam6_indi_pane_t1

0x503f,	// (0x0009f30b) cam6_autofocus_pane_g1

0x5037,	// (0x0009f303) cam6_autofocus_pane_g2

0x504f,	// (0x0009f31b) cam6_autofocus_pane_g3

0x5047,	// (0x0009f313) cam6_autofocus_pane_g4

0x0003,

0xfa4f,	// (0x000a9d1b) cam6_autofocus_pane_g

0xb2e4,	// (0x000a55b0) cam6_timer_pane_g1

0xb2ec,	// (0x000a55b8) cam6_timer_pane_t1

0xb2fa,	// (0x000a55c6) cam6_zoom_cont_pane

0xb302,	// (0x000a55ce) cam6_zoom_pane_g1

0xb30b,	// (0x000a55d7) cam6_zoom_pane_g2

0x6804,	// (0x000a0ad0) cam6_zoom_pane_g3

0x0002,

0xfa58,	// (0x000a9d24) cam6_zoom_pane_g

0xc136,	// (0x000a6402) cam6_battery_pane_g1

0xc136,	// (0x000a6402) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x000a9358) cam6_battery_pane_g

0xb302,	// (0x000a55ce) cam6_zoom_cont_pane_g1

0xb30b,	// (0x000a55d7) cam6_zoom_cont_pane_g2

0xb314,	// (0x000a55e0) cam6_zoom_cont_pane_g3

0x0002,

0xfa5f,	// (0x000a9d2b) cam6_zoom_cont_pane_g

0x6822,	// (0x000a0aee) cam6_mode_pane_cp_ParamLimits

0x6822,	// (0x000a0aee) cam6_mode_pane_cp

0x6834,	// (0x000a0b00) cam6_zoom_pane_cp_ParamLimits

0x6834,	// (0x000a0b00) cam6_zoom_pane_cp

0x6842,	// (0x000a0b0e) vid6_image_uncrop_cif_pane_ParamLimits

0x6842,	// (0x000a0b0e) vid6_image_uncrop_cif_pane

0x6852,	// (0x000a0b1e) vid6_image_uncrop_nhd_pane_ParamLimits

0x6852,	// (0x000a0b1e) vid6_image_uncrop_nhd_pane

0x6861,	// (0x000a0b2d) vid6_image_uncrop_vga_pane_ParamLimits

0x6861,	// (0x000a0b2d) vid6_image_uncrop_vga_pane

0x6870,	// (0x000a0b3c) vid6_image_uncrop_wvga_pane_ParamLimits

0x6870,	// (0x000a0b3c) vid6_image_uncrop_wvga_pane

0x687f,	// (0x000a0b4b) vid6_indi_pane_ParamLimits

0x687f,	// (0x000a0b4b) vid6_indi_pane

0xecce,	// (0x000a8f9a) bg_tb_trans_pane_cp09_ParamLimits

0xecce,	// (0x000a8f9a) bg_tb_trans_pane_cp09

0xb32c,	// (0x000a55f8) cam6_battery_pane_cp_ParamLimits

0xb32c,	// (0x000a55f8) cam6_battery_pane_cp

0xb338,	// (0x000a5604) vid6_indi_pane_g1_ParamLimits

0xb338,	// (0x000a5604) vid6_indi_pane_g1

0xb34a,	// (0x000a5616) vid6_indi_pane_g2_ParamLimits

0xb34a,	// (0x000a5616) vid6_indi_pane_g2

0xb35c,	// (0x000a5628) vid6_indi_pane_g3_ParamLimits

0xb35c,	// (0x000a5628) vid6_indi_pane_g3

0xb373,	// (0x000a563f) vid6_indi_pane_g4_ParamLimits

0xb373,	// (0x000a563f) vid6_indi_pane_g4

0xb38a,	// (0x000a5656) vid6_indi_pane_g5_ParamLimits

0xb38a,	// (0x000a5656) vid6_indi_pane_g5

0x0004,

0xfa66,	// (0x000a9d32) vid6_indi_pane_g_ParamLimits

0xfa66,	// (0x000a9d32) vid6_indi_pane_g

0xb3a4,	// (0x000a5670) vid6_indi_pane_t1_ParamLimits

0xb3a4,	// (0x000a5670) vid6_indi_pane_t1

0xb3ba,	// (0x000a5686) vid6_indi_pane_t2_ParamLimits

0xb3ba,	// (0x000a5686) vid6_indi_pane_t2

0xb3e2,	// (0x000a56ae) vid6_indi_pane_t3_ParamLimits

0xb3e2,	// (0x000a56ae) vid6_indi_pane_t3

0xb40a,	// (0x000a56d6) vid6_indi_pane_t4_ParamLimits

0xb40a,	// (0x000a56d6) vid6_indi_pane_t4

0x0003,

0xfa71,	// (0x000a9d3d) vid6_indi_pane_t_ParamLimits

0xfa71,	// (0x000a9d3d) vid6_indi_pane_t

0xb42e,	// (0x000a56fa) wait_bar_pane_cp08

0x6897,	// (0x000a0b63) main_cset_text2_pane_t1_ParamLimits

0x6897,	// (0x000a0b63) main_cset_text2_pane_t1

0x680d,	// (0x000a0ad9) listscroll_gen_pane_cp06_t1_ParamLimits

0x680d,	// (0x000a0ad9) listscroll_gen_pane_cp06_t1

0xa153,	// (0x000a441f) main_cam6_set_pane

0xb242,	// (0x000a550e) bg_tb_trans_pane_cp06_ParamLimits

0xaa3f,	// (0x000a4d0b) cam4_indicators_pane_g1_ParamLimits

0xaa50,	// (0x000a4d1c) cam4_indicators_pane_g2_ParamLimits

0xf7e9,	// (0x000a9ab5) cam4_indicators_pane_g_ParamLimits

0xaa68,	// (0x000a4d34) cam4_indicators_pane_t1_ParamLimits

0xa145,	// (0x000a4411) bg_tb_trans_pane_cp07_ParamLimits

0xaa96,	// (0x000a4d62) vid4_indicators_pane_g1_ParamLimits

0xaaac,	// (0x000a4d78) vid4_indicators_pane_g2_ParamLimits

0xaac0,	// (0x000a4d8c) vid4_indicators_pane_g3_ParamLimits

0xaad3,	// (0x000a4d9f) vid4_indicators_pane_g4_ParamLimits

0xf7fb,	// (0x000a9ac7) vid4_indicators_pane_g_ParamLimits

0xaaf1,	// (0x000a4dbd) vid4_indicators_pane_t1_ParamLimits

0xaf9d,	// (0x000a5269) vid4_progress_pane_g1_ParamLimits

0xafad,	// (0x000a5279) vid4_progress_pane_g2_ParamLimits

0x63ae,	// (0x000a067a) vid4_progress_pane_g3_ParamLimits

0xafbd,	// (0x000a5289) vid4_progress_pane_g4_ParamLimits

0xf9a2,	// (0x000a9c6e) vid4_progress_pane_g_ParamLimits

0x63c0,	// (0x000a068c) vid4_progress_pane_t1_ParamLimits

0xafdb,	// (0x000a52a7) vid4_progress_pane_t2_ParamLimits

0xaff4,	// (0x000a52c0) vid4_progress_pane_t3_ParamLimits

0xf9ad,	// (0x000a9c79) vid4_progress_pane_t_ParamLimits

0x63da,	// (0x000a06a6) wait_bar_pane_cp07_ParamLimits

0x68b8,	// (0x000a0b84) main_cam6_set_pane_g2_ParamLimits

0x68b8,	// (0x000a0b84) main_cam6_set_pane_g2

0x68de,	// (0x000a0baa) main_cset6_listscroll_pane_ParamLimits

0x68de,	// (0x000a0baa) main_cset6_listscroll_pane

0x68fc,	// (0x000a0bc8) main_cset6_slider_pane_ParamLimits

0x68fc,	// (0x000a0bc8) main_cset6_slider_pane

0x6912,	// (0x000a0bde) main_cset6_text2_pane_ParamLimits

0x6912,	// (0x000a0bde) main_cset6_text2_pane

0xb43d,	// (0x000a5709) main_cset6_text_pane

0xb445,	// (0x000a5711) main_cset_list_pane_copy1_ParamLimits

0xb445,	// (0x000a5711) main_cset_list_pane_copy1

0xb455,	// (0x000a5721) scroll_pane_cp028_copy1

0x6920,	// (0x000a0bec) cset_list_set_pane_copy1

0x6934,	// (0x000a0c00) aid_position_infowindow_above_copy1

0x693c,	// (0x000a0c08) aid_position_infowindow_below_copy1

0x6944,	// (0x000a0c10) cset_list_set_pane_g1_copy1

0x694c,	// (0x000a0c18) cset_list_set_pane_g3_copy1_ParamLimits

0x694c,	// (0x000a0c18) cset_list_set_pane_g3_copy1

0x695b,	// (0x000a0c27) cset_list_set_pane_t1_copy1_ParamLimits

0x695b,	// (0x000a0c27) cset_list_set_pane_t1_copy1

0xa438,	// (0x000a4704) list_highlight_pane_cp021_copy1_ParamLimits

0xa438,	// (0x000a4704) list_highlight_pane_cp021_copy1

0xb45e,	// (0x000a572a) cset6_slider_pane_ParamLimits

0xb45e,	// (0x000a572a) cset6_slider_pane

0xb48a,	// (0x000a5756) main_cset6_slider_pane_g1_ParamLimits

0xb48a,	// (0x000a5756) main_cset6_slider_pane_g1

0x6970,	// (0x000a0c3c) main_cset6_slider_pane_g2_ParamLimits

0x6970,	// (0x000a0c3c) main_cset6_slider_pane_g2

0xb4b2,	// (0x000a577e) main_cset6_slider_pane_g3_ParamLimits

0xb4b2,	// (0x000a577e) main_cset6_slider_pane_g3

0x6998,	// (0x000a0c64) main_cset6_slider_pane_g4_ParamLimits

0x6998,	// (0x000a0c64) main_cset6_slider_pane_g4

0x69a4,	// (0x000a0c70) main_cset6_slider_pane_g5_ParamLimits

0x69a4,	// (0x000a0c70) main_cset6_slider_pane_g5

0xab1d,	// (0x000a4de9) main_cset6_slider_pane_g7_ParamLimits

0xab1d,	// (0x000a4de9) main_cset6_slider_pane_g7

0xab29,	// (0x000a4df5) main_cset6_slider_pane_g8_ParamLimits

0xab29,	// (0x000a4df5) main_cset6_slider_pane_g8

0x5983,	// (0x0009fc4f) main_cset6_slider_pane_g9_ParamLimits

0x5983,	// (0x0009fc4f) main_cset6_slider_pane_g9

0x598f,	// (0x0009fc5b) main_cset6_slider_pane_g10_ParamLimits

0x598f,	// (0x0009fc5b) main_cset6_slider_pane_g10

0x599b,	// (0x0009fc67) main_cset6_slider_pane_g11_ParamLimits

0x599b,	// (0x0009fc67) main_cset6_slider_pane_g11

0x59a7,	// (0x0009fc73) main_cset6_slider_pane_g12_ParamLimits

0x59a7,	// (0x0009fc73) main_cset6_slider_pane_g12

0x59b3,	// (0x0009fc7f) main_cset6_slider_pane_g13_ParamLimits

0x59b3,	// (0x0009fc7f) main_cset6_slider_pane_g13

0x59bf,	// (0x0009fc8b) main_cset6_slider_pane_g14_ParamLimits

0x59bf,	// (0x0009fc8b) main_cset6_slider_pane_g14

0x69b2,	// (0x000a0c7e) main_cset6_slider_pane_g15_ParamLimits

0x69b2,	// (0x000a0c7e) main_cset6_slider_pane_g15

0x59e3,	// (0x0009fcaf) main_cset6_slider_pane_g16_ParamLimits

0x59e3,	// (0x0009fcaf) main_cset6_slider_pane_g16

0x59f1,	// (0x0009fcbd) main_cset6_slider_pane_g17_ParamLimits

0x59f1,	// (0x0009fcbd) main_cset6_slider_pane_g17

0x0011,

0xfa7a,	// (0x000a9d46) main_cset6_slider_pane_g_ParamLimits

0xfa7a,	// (0x000a9d46) main_cset6_slider_pane_g

0xb4be,	// (0x000a578a) main_cset6_slider_pane_t1_ParamLimits

0xb4be,	// (0x000a578a) main_cset6_slider_pane_t1

0x69e2,	// (0x000a0cae) main_cset6_slider_pane_t2_ParamLimits

0x69e2,	// (0x000a0cae) main_cset6_slider_pane_t2

0x6a0d,	// (0x000a0cd9) main_cset6_slider_pane_t3_ParamLimits

0x6a0d,	// (0x000a0cd9) main_cset6_slider_pane_t3

0x6a38,	// (0x000a0d04) main_cset6_slider_pane_t4_ParamLimits

0x6a38,	// (0x000a0d04) main_cset6_slider_pane_t4

0x6a63,	// (0x000a0d2f) main_cset6_slider_pane_t5_ParamLimits

0x6a63,	// (0x000a0d2f) main_cset6_slider_pane_t5

0xb4ff,	// (0x000a57cb) main_cset6_slider_pane_t7_ParamLimits

0xb4ff,	// (0x000a57cb) main_cset6_slider_pane_t7

0x6a90,	// (0x000a0d5c) main_cset6_slider_pane_t8_ParamLimits

0x6a90,	// (0x000a0d5c) main_cset6_slider_pane_t8

0x6ab4,	// (0x000a0d80) main_cset6_slider_pane_t9_ParamLimits

0x6ab4,	// (0x000a0d80) main_cset6_slider_pane_t9

0x6ad8,	// (0x000a0da4) main_cset6_slider_pane_t10_ParamLimits

0x6ad8,	// (0x000a0da4) main_cset6_slider_pane_t10

0x6afc,	// (0x000a0dc8) main_cset6_slider_pane_t11_ParamLimits

0x6afc,	// (0x000a0dc8) main_cset6_slider_pane_t11

0xb535,	// (0x000a5801) main_cset6_slider_pane_t14_ParamLimits

0xb535,	// (0x000a5801) main_cset6_slider_pane_t14

0xb56e,	// (0x000a583a) main_cset6_slider_pane_t15_ParamLimits

0xb56e,	// (0x000a583a) main_cset6_slider_pane_t15

0x000b,

0xfa9f,	// (0x000a9d6b) main_cset6_slider_pane_t_ParamLimits

0xfa9f,	// (0x000a9d6b) main_cset6_slider_pane_t

0xb1ec,	// (0x000a54b8) cset_slider_pane_g1_copy1

0xb1f5,	// (0x000a54c1) cset_slider_pane_g2_copy1

0xb1fe,	// (0x000a54ca) cset_slider_pane_g3_copy1

0x02c8,	// (0x0009a594) bg_popup_sub_pane_cp011_copy1

0xb5b0,	// (0x000a587c) main_cset_text_pane_g1_copy1

0xacc4,	// (0x000a4f90) main_cset_text_pane_t1_copy1

0xacd2,	// (0x000a4f9e) main_cset_text_pane_t2_copy1

0xace0,	// (0x000a4fac) main_cset_text_pane_t3_copy1

0xacee,	// (0x000a4fba) main_cset_text_pane_t4_copy1

0xacfc,	// (0x000a4fc8) main_cset_text_pane_t5_copy1

0xb5b8,	// (0x000a5884) main_cset_text_pane_t6_copy1

0xb5c6,	// (0x000a5892) main_cset_text_pane_t7_copy1

0x6897,	// (0x000a0b63) main_cset_text2_pane_t1_copy1

0xa145,	// (0x000a4411) main_ncimui_pane

0x35fc,	// (0x0009d8c8) popup_query_ncimui_window_ParamLimits

0x35fc,	// (0x0009d8c8) popup_query_ncimui_window

0xeb71,	// (0x000a8e3d) field_cale_ev2_pane_g4_ParamLimits

0xeb71,	// (0x000a8e3d) field_cale_ev2_pane_g4

0x48ef,	// (0x0009ebbb) cell_video_dialer_keypad_pane_g2_ParamLimits

0x48ef,	// (0x0009ebbb) cell_video_dialer_keypad_pane_g2

0x0001,

0xf783,	// (0x000a9a4f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf783,	// (0x000a9a4f) cell_video_dialer_keypad_pane_g

0x4907,	// (0x0009ebd3) cell_video_dialer_keypad_pane_t1

0x02c8,	// (0x0009a594) bg_popup_window_pane_cp012

0xd00f,	// (0x000a72db) heading_pane_cp06

0xb5f2,	// (0x000a58be) ncim_query_content_pane

0x02c8,	// (0x0009a594) bg_popup_heading_pane_cp01

0xb5fa,	// (0x000a58c6) ncim_heading_pane_t1

0xb608,	// (0x000a58d4) ncim_indicator_popup_pane

0xb61a,	// (0x000a58e6) ncim_query_button_pane

0xb630,	// (0x000a58fc) ncim_query_content_pane_t1

0xb642,	// (0x000a590e) ncim_query_content_pane_t2

0x0005,

0xfae3,	// (0x000a9daf) ncim_query_content_pane_t

0xb67c,	// (0x000a5948) ncim_query_list_pane

0xb68e,	// (0x000a595a) ncim_query_popup_pane

0xb608,	// (0x000a58d4) ncim_indicator_popup_pane_ParamLimits

0x6c68,	// (0x000a0f34) ncim_query_content_pane_g1_ParamLimits

0x6c68,	// (0x000a0f34) ncim_query_content_pane_g1

0xb630,	// (0x000a58fc) ncim_query_content_pane_t1_ParamLimits

0xb642,	// (0x000a590e) ncim_query_content_pane_t2_ParamLimits

0x6c74,	// (0x000a0f40) ncim_query_content_pane_t3_ParamLimits

0x6c74,	// (0x000a0f40) ncim_query_content_pane_t3

0x6c9c,	// (0x000a0f68) ncim_query_content_pane_t4_ParamLimits

0x6c9c,	// (0x000a0f68) ncim_query_content_pane_t4

0x6cc4,	// (0x000a0f90) ncim_query_content_pane_t5_ParamLimits

0x6cc4,	// (0x000a0f90) ncim_query_content_pane_t5

0xb654,	// (0x000a5920) ncim_query_content_pane_t6_ParamLimits

0xb654,	// (0x000a5920) ncim_query_content_pane_t6

0xfae3,	// (0x000a9daf) ncim_query_content_pane_t_ParamLimits

0xb67c,	// (0x000a5948) ncim_query_list_pane_ParamLimits

0xb68e,	// (0x000a595a) ncim_query_popup_pane_ParamLimits

0xb6a2,	// (0x000a596e) wait_bar_pane_cp04

0x02c8,	// (0x0009a594) input_focus_pane_cp011

0xb6aa,	// (0x000a5976) ncim_query_popup_pane_t1

0xb6b8,	// (0x000a5984) ncim_list_query_list_pane_ParamLimits

0xb6b8,	// (0x000a5984) ncim_list_query_list_pane

0x02c8,	// (0x0009a594) bg_button_pane_cp027

0xb6cb,	// (0x000a5997) ncim_query_button_pane_g1

0x02c8,	// (0x0009a594) list_highlight_pane_cp012

0xb6d5,	// (0x000a59a1) ncim_list_query_list_pane_g1

0xb6dd,	// (0x000a59a9) ncim_list_query_list_pane_t1

0xaa5c,	// (0x000a4d28) cam4_indicators_pane_g3_ParamLimits

0xaa5c,	// (0x000a4d28) cam4_indicators_pane_g3

0xaadf,	// (0x000a4dab) vid4_indicators_pane_g5_ParamLimits

0xaadf,	// (0x000a4dab) vid4_indicators_pane_g5

0xafcc,	// (0x000a5298) vid4_progress_pane_g5_ParamLimits

0xafcc,	// (0x000a5298) vid4_progress_pane_g5

0x6b53,	// (0x000a0e1f) main_ncimui_pane_g1

0x6bbc,	// (0x000a0e88) ncimui_group_query_pane_ParamLimits

0x6bbc,	// (0x000a0e88) ncimui_group_query_pane

0x6c04,	// (0x000a0ed0) ncimui_list_pane_ParamLimits

0x6c04,	// (0x000a0ed0) ncimui_list_pane

0x6c2b,	// (0x000a0ef7) ncimui_text_pane_ParamLimits

0x6c2b,	// (0x000a0ef7) ncimui_text_pane

0x6cec,	// (0x000a0fb8) ncimui_text_pane_t1_ParamLimits

0x6cec,	// (0x000a0fb8) ncimui_text_pane_t1

0xb6eb,	// (0x000a59b7) ncimui_list_single_graphic_pane_ParamLimits

0xb6eb,	// (0x000a59b7) ncimui_list_single_graphic_pane

0x6d0a,	// (0x000a0fd6) ncimui_query_pane_ParamLimits

0x6d0a,	// (0x000a0fd6) ncimui_query_pane

0x02c8,	// (0x0009a594) list_highlight_pane_cp013

0xb6fb,	// (0x000a59c7) ncim_list_query_list_pane_t1_copy1

0xb6d5,	// (0x000a59a1) ncim_list_single_graphic_pane_g1

0x6d1d,	// (0x000a0fe9) ncim_query_button_pane_cp01

0x6d29,	// (0x000a0ff5) ncim_query_entry_pane_ParamLimits

0x6d29,	// (0x000a0ff5) ncim_query_entry_pane

0x6d3c,	// (0x000a1008) ncimui_query_pane_g1

0x6d48,	// (0x000a1014) ncimui_query_pane_t1_ParamLimits

0x6d48,	// (0x000a1014) ncimui_query_pane_t1

0xa438,	// (0x000a4704) input_focus_pane_cp012

0xb709,	// (0x000a59d5) ncim_query_entry_pane_t1

0xc194,	// (0x000a6460) main_im_pane_ParamLimits

0xa145,	// (0x000a4411) main_mobtv_pane_ParamLimits

0xa145,	// (0x000a4411) main_mobtv_pane

0x69ca,	// (0x000a0c96) main_cset6_slider_pane_g18_ParamLimits

0x69ca,	// (0x000a0c96) main_cset6_slider_pane_g18

0x69d6,	// (0x000a0ca2) main_cset6_slider_pane_g19_ParamLimits

0x69d6,	// (0x000a0ca2) main_cset6_slider_pane_g19

0xc114,	// (0x000a63e0) bg_main_mobtv_pane_ParamLimits

0xc114,	// (0x000a63e0) bg_main_mobtv_pane

0x6d61,	// (0x000a102d) main_mobtv_info_pane

0x6d6c,	// (0x000a1038) main_mobtv_loading_pane_ParamLimits

0x6d6c,	// (0x000a1038) main_mobtv_loading_pane

0xb71b,	// (0x000a59e7) main_mobtv_pg_channel_list_pane

0xb725,	// (0x000a59f1) main_mobtv_pg_hdr_pane

0x6d79,	// (0x000a1045) main_mobtv_programe_curr_pane_ParamLimits

0x6d79,	// (0x000a1045) main_mobtv_programe_curr_pane

0x6d86,	// (0x000a1052) main_mobtv_programe_next_pane_ParamLimits

0x6d86,	// (0x000a1052) main_mobtv_programe_next_pane

0xb72e,	// (0x000a59fa) popup_mobtv_noti_window

0xc136,	// (0x000a6402) main_tv_pg_hdr_pane_g1

0xb738,	// (0x000a5a04) main_tv_pg_hdr_pane_g2

0xb740,	// (0x000a5a0c) main_tv_pg_hdr_pane_g3

0xb748,	// (0x000a5a14) main_tv_pg_hdr_pane_g4

0xb750,	// (0x000a5a1c) main_tv_pg_hdr_pane_g5

0xb75a,	// (0x000a5a26) main_tv_pg_hdr_pane_g6

0xb764,	// (0x000a5a30) main_tv_pg_hdr_pane_g7

0xb76e,	// (0x000a5a3a) main_tv_pg_hdr_pane_g8

0xb778,	// (0x000a5a44) main_tv_pg_hdr_pane_g9

0xb782,	// (0x000a5a4e) main_tv_pg_hdr_pane_g10

0xb78c,	// (0x000a5a58) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf0,	// (0x000a9dbc) main_tv_pg_hdr_pane_g

0xb796,	// (0x000a5a62) main_tv_pg_hdr_pane_t1

0xb7a4,	// (0x000a5a70) main_tv_pg_hdr_pane_t2

0xb7b2,	// (0x000a5a7e) main_tv_pg_hdr_pane_t3

0xb7c2,	// (0x000a5a8e) main_tv_pg_hdr_pane_t4

0xb7d2,	// (0x000a5a9e) main_tv_pg_hdr_pane_t5

0x0004,

0xfb07,	// (0x000a9dd3) main_tv_pg_hdr_pane_t

0xb7e2,	// (0x000a5aae) single_mobtv_pg_channel_pane_ParamLimits

0xb7e2,	// (0x000a5aae) single_mobtv_pg_channel_pane

0xb7f4,	// (0x000a5ac0) single_mobtv_pg_channel_table_pane

0xb7fd,	// (0x000a5ac9) single_mobtv_pg_channel_thumb_pane

0xb806,	// (0x000a5ad2) single_tv_pg_channel_pane_g1

0xb80f,	// (0x000a5adb) single_tv_pg_channel_pane_g2

0x0001,

0xfb12,	// (0x000a9dde) single_tv_pg_channel_pane_g

0xc0f8,	// (0x000a63c4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc0f8,	// (0x000a63c4) bg_single_mobtv_pg_channel_thumb_pane

0xb818,	// (0x000a5ae4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xb818,	// (0x000a5ae4) single_mobtv_pg_channel_thumb_pane_g1

0xb826,	// (0x000a5af2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xb826,	// (0x000a5af2) single_mobtv_pg_channel_thumb_pane_g2

0xb832,	// (0x000a5afe) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xb832,	// (0x000a5afe) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb17,	// (0x000a9de3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb17,	// (0x000a9de3) single_mobtv_pg_channel_thumb_pane_g

0xb83e,	// (0x000a5b0a) single_mobtv_pg_channel_thumb_pane_t1

0xb84c,	// (0x000a5b18) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb1e,	// (0x000a9dea) single_mobtv_pg_channel_thumb_pane_t

0xc136,	// (0x000a6402) bg_single_mobtv_pg_channel_table_pane_g1

0xc136,	// (0x000a6402) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x000a9358) bg_single_mobtv_pg_channel_table_pane_g

0xb85a,	// (0x000a5b26) single_mobtv_pg_channel_table_pane_t1

0xb868,	// (0x000a5b34) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb23,	// (0x000a9def) single_mobtv_pg_channel_table_pane_t

0x6d9b,	// (0x000a1067) main_mobtv_info_pane_g1_ParamLimits

0x6d9b,	// (0x000a1067) main_mobtv_info_pane_g1

0x6db9,	// (0x000a1085) main_mobtv_info_pane_t1_ParamLimits

0x6db9,	// (0x000a1085) main_mobtv_info_pane_t1

0x6e31,	// (0x000a10fd) main_mobtv_info_pane_t2_ParamLimits

0x6e31,	// (0x000a10fd) main_mobtv_info_pane_t2

0x0002,

0xfb2d,	// (0x000a9df9) main_mobtv_info_pane_t_ParamLimits

0xfb2d,	// (0x000a9df9) main_mobtv_info_pane_t

0x6ec2,	// (0x000a118e) wait_bar_pane_cp05

0x6ed4,	// (0x000a11a0) main_mobtv_loading_pane_g1_ParamLimits

0x6ed4,	// (0x000a11a0) main_mobtv_loading_pane_g1

0x6ee5,	// (0x000a11b1) main_mobtv_loading_pane_g2_ParamLimits

0x6ee5,	// (0x000a11b1) main_mobtv_loading_pane_g2

0x6ef1,	// (0x000a11bd) main_mobtv_loading_pane_g3_ParamLimits

0x6ef1,	// (0x000a11bd) main_mobtv_loading_pane_g3

0x0002,

0xfb34,	// (0x000a9e00) main_mobtv_loading_pane_g_ParamLimits

0xfb34,	// (0x000a9e00) main_mobtv_loading_pane_g

0xb876,	// (0x000a5b42) main_mobtv_loading_pane_t1_ParamLimits

0xb876,	// (0x000a5b42) main_mobtv_loading_pane_t1

0xb88e,	// (0x000a5b5a) main_mobtv_loading_pane_t2_ParamLimits

0xb88e,	// (0x000a5b5a) main_mobtv_loading_pane_t2

0x0001,

0xfb3b,	// (0x000a9e07) main_mobtv_loading_pane_t_ParamLimits

0xfb3b,	// (0x000a9e07) main_mobtv_loading_pane_t

0x6f04,	// (0x000a11d0) wait_bar_pane_cp06_ParamLimits

0x6f04,	// (0x000a11d0) wait_bar_pane_cp06

0xb8b2,	// (0x000a5b7e) main_mobtv_programe_curr_pane_t1

0xb8c0,	// (0x000a5b8c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb40,	// (0x000a9e0c) main_mobtv_programe_curr_pane_t

0xb8ce,	// (0x000a5b9a) main_mobtv_programe_next_pane_t1

0xb8dc,	// (0x000a5ba8) main_mobtv_programe_next_pane_t2

0xb8ea,	// (0x000a5bb6) main_mobtv_programe_next_pane_t3

0x0002,

0xfb45,	// (0x000a9e11) main_mobtv_programe_next_pane_t

0x02c8,	// (0x0009a594) bg_popup_mobtv_noti_window_pane

0xb8f8,	// (0x000a5bc4) popup_mobtv_noti_window_g1

0xb900,	// (0x000a5bcc) popup_mobtv_noti_window_t1

0xb90e,	// (0x000a5bda) popup_mobtv_noti_window_t2

0x0001,

0xfb4c,	// (0x000a9e18) popup_mobtv_noti_window_t

0xc136,	// (0x000a6402) bg_popup_mobtv_noti_window_pane_g1

0xa153,	// (0x000a441f) sc_clock_pane

0xa153,	// (0x000a441f) main_fs_bigclock_pane

0x6605,	// (0x000a08d1) blid2_tripm_pane_t4_ParamLimits

0x6605,	// (0x000a08d1) blid2_tripm_pane_t4

0xc0f8,	// (0x000a63c4) sc_clock_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) sc_clock_pane_g1

0xc140,	// (0x000a640c) sc_clock_pane_t1_ParamLimits

0xc140,	// (0x000a640c) sc_clock_pane_t1

0xc140,	// (0x000a640c) sc_clock_pane_t2_ParamLimits

0xc140,	// (0x000a640c) sc_clock_pane_t2

0xc140,	// (0x000a640c) sc_clock_pane_t3_ParamLimits

0xc140,	// (0x000a640c) sc_clock_pane_t3

0x0004,

0xfb51,	// (0x000a9e1d) sc_clock_pane_t_ParamLimits

0xfb51,	// (0x000a9e1d) sc_clock_pane_t

0x7f43,	// (0x000a220f) main_fs_bigclock_indicator_pane_ParamLimits

0x7f43,	// (0x000a220f) main_fs_bigclock_indicator_pane

0x6f84,	// (0x000a1250) main_fs_bigclock_pane_g1_ParamLimits

0x6f84,	// (0x000a1250) main_fs_bigclock_pane_g1

0x7f4f,	// (0x000a221b) main_fs_bigclock_pane_t1_ParamLimits

0x7f4f,	// (0x000a221b) main_fs_bigclock_pane_t1

0x7f61,	// (0x000a222d) main_fs_bigclock_pane_t2_ParamLimits

0x7f61,	// (0x000a222d) main_fs_bigclock_pane_t2

0x7f75,	// (0x000a2241) main_fs_bigclock_pane_t3_ParamLimits

0x7f75,	// (0x000a2241) main_fs_bigclock_pane_t3

0x0002,

0xfcca,	// (0x000a9f96) main_fs_bigclock_pane_t_ParamLimits

0xfcca,	// (0x000a9f96) main_fs_bigclock_pane_t

0xc591,	// (0x000a685d) main_fs_bigclock_indicator_pane_g1

0xb622,	// (0x000a58ee) ncim_query_content_pane_g2_ParamLimits

0xb622,	// (0x000a58ee) ncim_query_content_pane_g2

0x0001,

0xfade,	// (0x000a9daa) ncim_query_content_pane_g_ParamLimits

0xfade,	// (0x000a9daa) ncim_query_content_pane_g

0xc140,	// (0x000a640c) sc_clock_pane_t4_ParamLimits

0xc140,	// (0x000a640c) sc_clock_pane_t4

0xa145,	// (0x000a4411) main_radioblah_pane

0xa9e7,	// (0x000a4cb3) cell_call4_button_pane_t1_copy1_ParamLimits

0xa9e7,	// (0x000a4cb3) cell_call4_button_pane_t1_copy1

0x6b6b,	// (0x000a0e37) main_ncimui_pane_t1_ParamLimits

0x6b6b,	// (0x000a0e37) main_ncimui_pane_t1

0x6b85,	// (0x000a0e51) main_ncimui_pane_t2_ParamLimits

0x6b85,	// (0x000a0e51) main_ncimui_pane_t2

0x0002,

0xfad7,	// (0x000a9da3) main_ncimui_pane_t_ParamLimits

0xfad7,	// (0x000a9da3) main_ncimui_pane_t

0xd329,	// (0x000a75f5) main_radioblah_anim_pane_ParamLimits

0xd329,	// (0x000a75f5) main_radioblah_anim_pane

0xd329,	// (0x000a75f5) main_radioblah_info_pane_ParamLimits

0xd329,	// (0x000a75f5) main_radioblah_info_pane

0xd315,	// (0x000a75e1) main_radioblah_pane_t1_ParamLimits

0xd315,	// (0x000a75e1) main_radioblah_pane_t1

0xd315,	// (0x000a75e1) main_radioblah_pane_t2_ParamLimits

0xd315,	// (0x000a75e1) main_radioblah_pane_t2

0x0003,

0xfb72,	// (0x000a9e3e) main_radioblah_pane_t_ParamLimits

0xfb72,	// (0x000a9e3e) main_radioblah_pane_t

0xa438,	// (0x000a4704) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa438,	// (0x000a4704) main_radioblah_rocker_ctrl_pane

0xecdc,	// (0x000a8fa8) main_radioblah_info_pane_t1_ParamLimits

0xecdc,	// (0x000a8fa8) main_radioblah_info_pane_t1

0xb94c,	// (0x000a5c18) main_radioblah_info_pane_t2_ParamLimits

0xb94c,	// (0x000a5c18) main_radioblah_info_pane_t2

0x0003,

0xfb7b,	// (0x000a9e47) main_radioblah_info_pane_t_ParamLimits

0xfb7b,	// (0x000a9e47) main_radioblah_info_pane_t

0xc136,	// (0x000a6402) main_radioblah_rocker_ctrl_pane_g1

0xc136,	// (0x000a6402) main_radioblah_rocker_ctrl_pane_g2

0xc136,	// (0x000a6402) main_radioblah_rocker_ctrl_pane_g3

0xc136,	// (0x000a6402) main_radioblah_rocker_ctrl_pane_g4

0xc136,	// (0x000a6402) main_radioblah_rocker_ctrl_pane_g5

0xc136,	// (0x000a6402) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb84,	// (0x000a9e50) main_radioblah_rocker_ctrl_pane_g

0x6897,	// (0x000a0b63) main_cset_text2_pane_t1_copy1_ParamLimits

0xaa2d,	// (0x000a4cf9) cam4_image_uncrop_qvga_pane

0xaa82,	// (0x000a4d4e) vid4_image_uncrop_qcif_pane

0xb1de,	// (0x000a54aa) cam6_image_uncrop_qvga_pane_ParamLimits

0xb1de,	// (0x000a54aa) cam6_image_uncrop_qvga_pane

0xb31c,	// (0x000a55e8) vid6_image_uncrop_qcif_pane_ParamLimits

0xb31c,	// (0x000a55e8) vid6_image_uncrop_qcif_pane

0x02c8,	// (0x0009a594) bg_popup_preview_window_pane_cp03

0xb5d4,	// (0x000a58a0) list_cset_text2_pane

0xb5dc,	// (0x000a58a8) main_cset6_text2_pane_g1

0xb5e4,	// (0x000a58b0) main_cset6_text2_pane_t1

0xc3e2,	// (0x000a66ae) list_cset_text2_pane_t1_ParamLimits

0xc3e2,	// (0x000a66ae) list_cset_text2_pane_t1

0xa145,	// (0x000a4411) main_radioblah_pane_ParamLimits

0x6eae,	// (0x000a117a) main_mobtv_info_pane_t3_ParamLimits

0x6eae,	// (0x000a117a) main_mobtv_info_pane_t3

0xd307,	// (0x000a75d3) main_radioblah_pane_g1

0xb91c,	// (0x000a5be8) main_radioblah_info_pane_g1

0xc154,	// (0x000a6420) main_radioblah_info_pane_t3_ParamLimits

0xc154,	// (0x000a6420) main_radioblah_info_pane_t3

0x215d,	// (0x0009c429) highlight_cell_cale_month_pane_ParamLimits

0x215d,	// (0x0009c429) highlight_cell_cale_month_pane

0xa153,	// (0x000a441f) main_phob_fisheye_pane

0xebf1,	// (0x000a8ebd) scroll_pane_cp0031_ParamLimits

0xebf1,	// (0x000a8ebd) scroll_pane_cp0031

0xb42e,	// (0x000a56fa) wait_bar_pane_cp08_ParamLimits

0x6920,	// (0x000a0bec) cset_list_set_pane_copy1_ParamLimits

0xb99b,	// (0x000a5c67) highlight_cell_cale_month_pane_g1

0x711b,	// (0x000a13e7) highlight_cell_cale_month_pane_t1

0xaf8c,	// (0x000a5258) list_gen_pane_cp01

0xab08,	// (0x000a4dd4) scroll_pane_01

0x7129,	// (0x000a13f5) list_single_double_fisheye_pane

0x7132,	// (0x000a13fe) list_double_fisheye_pane_g1_ParamLimits

0x7132,	// (0x000a13fe) list_double_fisheye_pane_g1

0x713e,	// (0x000a140a) list_double_fisheye_pane_g2_ParamLimits

0x713e,	// (0x000a140a) list_double_fisheye_pane_g2

0x7152,	// (0x000a141e) list_double_fisheye_pane_g3_ParamLimits

0x7152,	// (0x000a141e) list_double_fisheye_pane_g3

0x0004,

0xfb91,	// (0x000a9e5d) list_double_fisheye_pane_g_ParamLimits

0xfb91,	// (0x000a9e5d) list_double_fisheye_pane_g

0x717b,	// (0x000a1447) list_double_fisheye_pane_t1_ParamLimits

0x717b,	// (0x000a1447) list_double_fisheye_pane_t1

0x7196,	// (0x000a1462) list_double_fisheye_pane_t2_ParamLimits

0x7196,	// (0x000a1462) list_double_fisheye_pane_t2

0x0001,

0xfb9c,	// (0x000a9e68) list_double_fisheye_pane_t_ParamLimits

0xfb9c,	// (0x000a9e68) list_double_fisheye_pane_t

0xa153,	// (0x000a441f) main_call5_pane

0xa438,	// (0x000a4704) sc_swipe_pane_ParamLimits

0xa438,	// (0x000a4704) sc_swipe_pane

0x71cb,	// (0x000a1497) call5_image_pane_ParamLimits

0x71cb,	// (0x000a1497) call5_image_pane

0x71e8,	// (0x000a14b4) call5_swipe_1_pane_ParamLimits

0x71e8,	// (0x000a14b4) call5_swipe_1_pane

0x71fb,	// (0x000a14c7) call5_swipe_2_pane_ParamLimits

0x71fb,	// (0x000a14c7) call5_swipe_2_pane

0x7226,	// (0x000a14f2) popup_call5_audio_first_window_ParamLimits

0x7226,	// (0x000a14f2) popup_call5_audio_first_window

0xc0f8,	// (0x000a63c4) call5_swipe_1_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) call5_swipe_1_pane_g1

0xb9a3,	// (0x000a5c6f) call5_swipe_1_pane_g2_ParamLimits

0xb9a3,	// (0x000a5c6f) call5_swipe_1_pane_g2

0x0001,

0xfba1,	// (0x000a9e6d) call5_swipe_1_pane_g_ParamLimits

0xfba1,	// (0x000a9e6d) call5_swipe_1_pane_g

0xb9af,	// (0x000a5c7b) call5_swipe_1_pane_t1_ParamLimits

0xb9af,	// (0x000a5c7b) call5_swipe_1_pane_t1

0xc0f8,	// (0x000a63c4) call5_swipe_2_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) call5_swipe_2_pane_g1

0xb9c4,	// (0x000a5c90) call5_swipe_2_pane_g2_ParamLimits

0xb9c4,	// (0x000a5c90) call5_swipe_2_pane_g2

0x0001,

0xfba6,	// (0x000a9e72) call5_swipe_2_pane_g_ParamLimits

0xfba6,	// (0x000a9e72) call5_swipe_2_pane_g

0xb9d0,	// (0x000a5c9c) call5_swipe_2_pane_t1_ParamLimits

0xb9d0,	// (0x000a5c9c) call5_swipe_2_pane_t1

0xc0f8,	// (0x000a63c4) sc_swipe_pane_g1_ParamLimits

0xc0f8,	// (0x000a63c4) sc_swipe_pane_g1

0xc106,	// (0x000a63d2) sc_swipe_pane_g2_ParamLimits

0xc106,	// (0x000a63d2) sc_swipe_pane_g2

0x0001,

0xf71f,	// (0x000a99eb) sc_swipe_pane_g_ParamLimits

0xf71f,	// (0x000a99eb) sc_swipe_pane_g

0xc140,	// (0x000a640c) sc_swipe_pane_t1_ParamLimits

0xc140,	// (0x000a640c) sc_swipe_pane_t1

0xa153,	// (0x000a441f) main_cmail_launcher_pane

0x723b,	// (0x000a1507) aid_size_cell_cmail_l_ParamLimits

0x723b,	// (0x000a1507) aid_size_cell_cmail_l

0x7250,	// (0x000a151c) grid_cmail_l_pane_ParamLimits

0x7250,	// (0x000a151c) grid_cmail_l_pane

0x726a,	// (0x000a1536) cell_cmail_l_pane_ParamLimits

0x726a,	// (0x000a1536) cell_cmail_l_pane

0x728b,	// (0x000a1557) cell_cmail_l_pane_g1_ParamLimits

0x728b,	// (0x000a1557) cell_cmail_l_pane_g1

0x7297,	// (0x000a1563) cell_cmail_l_pane_t1_ParamLimits

0x7297,	// (0x000a1563) cell_cmail_l_pane_t1

0x72ad,	// (0x000a1579) cell_cmail_l_pane_t2_ParamLimits

0x72ad,	// (0x000a1579) cell_cmail_l_pane_t2

0x0001,

0xfbab,	// (0x000a9e77) cell_cmail_l_pane_t_ParamLimits

0xfbab,	// (0x000a9e77) cell_cmail_l_pane_t

0xa438,	// (0x000a4704) grid_highlight_pane_cp018_ParamLimits

0xa438,	// (0x000a4704) grid_highlight_pane_cp018

0x0398,	// (0x0009a664) main2_pane_ParamLimits

0x0398,	// (0x0009a664) main2_pane

0xc223,	// (0x000a64ef) popup_sp_fs_action_menu_bg_pane_g1

0xc22b,	// (0x000a64f7) popup_sp_fs_action_menu_bg_pane_g2

0xc233,	// (0x000a64ff) popup_sp_fs_action_menu_bg_pane_g3

0xc23b,	// (0x000a6507) popup_sp_fs_action_menu_bg_pane_g4

0xc243,	// (0x000a650f) popup_sp_fs_action_menu_bg_pane_g5

0xc24b,	// (0x000a6517) popup_sp_fs_action_menu_bg_pane_g6

0xc253,	// (0x000a651f) popup_sp_fs_action_menu_bg_pane_g7

0xc25b,	// (0x000a6527) popup_sp_fs_action_menu_bg_pane_g8

0xc263,	// (0x000a652f) popup_sp_fs_action_menu_bg_pane_g9

0xc26b,	// (0x000a6537) popup_sp_fs_action_menu_bg_pane_g10

0xc26b,	// (0x000a6537) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x000a93a9) popup_sp_fs_action_menu_bg_pane_g

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g3_g1

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g3_g2

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x000a9457) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x000a9457) list_medium_line_x2_t3_g3_g

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g3_t1

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g3_t2

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x000a945e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x000a945e) list_medium_line_x2_t3_g3_t

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g2_g1

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x000a9465) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x000a9465) list_medium_line_x2_t3_g2_g

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g2_t1

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g2_t2

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x000a945e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x000a945e) list_medium_line_x2_t3_g2_t

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t4_g4_g1

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t4_g4_g2

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t4_g4_g3

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x000a946a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x000a946a) list_medium_line_x2_t4_g4_g

0xc140,	// (0x000a640c) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t4_g4_t1

0xc140,	// (0x000a640c) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t4_g4_t2

0xc140,	// (0x000a640c) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t4_g4_t3

0xc140,	// (0x000a640c) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x000a9473) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x000a9473) list_medium_line_x2_t4_g4_t

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g4_g1

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g4_g2

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g4_g3

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x000a946a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x000a946a) list_medium_line_x2_t2_g4_g

0xc140,	// (0x000a640c) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t2_g4_t1

0xc140,	// (0x000a640c) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x000a943a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x000a943a) list_medium_line_x2_t2_g4_t

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g3_g1

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g3_g2

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x000a9457) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x000a9457) list_medium_line_x2_t2_g3_g

0xc140,	// (0x000a640c) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t2_g3_t1

0xc140,	// (0x000a640c) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x000a943a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x000a943a) list_medium_line_x2_t2_g3_t

0x22c6,	// (0x0009c592) main_sp_fs_list_pane_ParamLimits

0x22c6,	// (0x0009c592) main_sp_fs_list_pane

0xa4cd,	// (0x000a4799) sp_fs_scroll_pane_ParamLimits

0xa4cd,	// (0x000a4799) sp_fs_scroll_pane

0xce88,	// (0x000a7154) list_medium_line_x2_t3_t1

0xce88,	// (0x000a7154) list_medium_line_x2_t3_t2

0xce88,	// (0x000a7154) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x000a9520) list_medium_line_x2_t3_t

0xce88,	// (0x000a7154) list_medium_line_x3_t4_t1

0xce88,	// (0x000a7154) list_medium_line_x3_t4_t2

0xce88,	// (0x000a7154) list_medium_line_x3_t4_t3

0xce88,	// (0x000a7154) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x000a9527) list_medium_line_x3_t4_t

0xce88,	// (0x000a7154) list_medium_line_x4_t5_t1

0xce88,	// (0x000a7154) list_medium_line_x4_t5_t2

0xce88,	// (0x000a7154) list_medium_line_x4_t5_t3

0xce88,	// (0x000a7154) list_medium_line_x4_t5_t4

0xce88,	// (0x000a7154) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x000a9530) list_medium_line_x4_t5_t

0xc0f8,	// (0x000a63c4) list_medium_line_t4_g4_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_t4_g4_g1

0xc0f8,	// (0x000a63c4) list_medium_line_t4_g4_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_t4_g4_g2

0xc0f8,	// (0x000a63c4) list_medium_line_t4_g4_g3_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_t4_g4_g3

0xc0f8,	// (0x000a63c4) list_medium_line_t4_g4_g4_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x000a946a) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x000a946a) list_medium_line_t4_g4_g

0xc140,	// (0x000a640c) list_medium_line_t4_g4_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t4_g4_t1

0xc140,	// (0x000a640c) list_medium_line_t4_g4_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t4_g4_t2

0xc140,	// (0x000a640c) list_medium_line_t4_g4_t3_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t4_g4_t3

0xc140,	// (0x000a640c) list_medium_line_t4_g4_t4_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x000a9473) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x000a9473) list_medium_line_t4_g4_t

0x2374,	// (0x0009c640) chi_dic_find_pane_g1

0x3382,	// (0x0009d64e) main_tport_pane

0xce88,	// (0x000a7154) list_medium_line_plain_t1

0xc0f8,	// (0x000a63c4) list_medium_line_t2_g2_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_t2_g2_g1

0xc0f8,	// (0x000a63c4) list_medium_line_t2_g2_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x000a9465) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x000a9465) list_medium_line_t2_g2_g

0xc140,	// (0x000a640c) list_medium_line_t2_g2_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t2_g2_t1

0xc140,	// (0x000a640c) list_medium_line_t2_g2_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x000a943a) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x000a943a) list_medium_line_t2_g2_t

0x63ed,	// (0x000a06b9) aid_sp_fs_list_icon_a_sm

0xb009,	// (0x000a52d5) aid_sp_fs_list_icon_d

0xb011,	// (0x000a52dd) aid_sp_fs_text_primary

0x63f5,	// (0x000a06c1) aid_sp_fs_text_secondary

0x02c8,	// (0x0009a594) list_medium_line

0x02c8,	// (0x0009a594) list_medium_line_g2

0x02c8,	// (0x0009a594) list_medium_line_g3

0x02c8,	// (0x0009a594) list_medium_line_plain

0x02c8,	// (0x0009a594) list_medium_line_plain_t2

0x02c8,	// (0x0009a594) list_medium_line_plain_t3

0x02c8,	// (0x0009a594) list_medium_line_right_icon

0x02c8,	// (0x0009a594) list_medium_line_right_iconx2

0x02c8,	// (0x0009a594) list_medium_line_t2

0x02c8,	// (0x0009a594) list_medium_line_t2_g2

0x02c8,	// (0x0009a594) list_medium_line_t2_g3

0x02c8,	// (0x0009a594) list_medium_line_t2_right_icon

0x02c8,	// (0x0009a594) list_medium_line_t2_right_iconx2

0x02c8,	// (0x0009a594) list_medium_line_t3

0x02c8,	// (0x0009a594) list_medium_line_t3_g2

0x02c8,	// (0x0009a594) list_medium_line_t3_g3

0x02c8,	// (0x0009a594) list_medium_line_t3_right_iconx2

0x02c8,	// (0x0009a594) list_medium_line_t4_g4

0x02c8,	// (0x0009a594) list_medium_line_x2

0x02c8,	// (0x0009a594) list_medium_line_x2_t2_g2

0x02c8,	// (0x0009a594) list_medium_line_x2_t2_g3

0x02c8,	// (0x0009a594) list_medium_line_x2_t2_g4

0x02c8,	// (0x0009a594) list_medium_line_x2_t3

0x02c8,	// (0x0009a594) list_medium_line_x2_t3_g2

0x02c8,	// (0x0009a594) list_medium_line_x2_t3_g3

0x02c8,	// (0x0009a594) list_medium_line_x2_t3_g4

0x02c8,	// (0x0009a594) list_medium_line_x2_t4_g2

0x02c8,	// (0x0009a594) list_medium_line_x2_t4_g4

0x02c8,	// (0x0009a594) list_medium_line_x3

0x02c8,	// (0x0009a594) list_medium_line_x3_t4

0x02c8,	// (0x0009a594) list_medium_line_x3_t4_g4

0x02c8,	// (0x0009a594) list_medium_line_x4_t4

0x02c8,	// (0x0009a594) list_medium_line_x4_t4_g7

0x02c8,	// (0x0009a594) list_medium_line_x4_t5

0x63fe,	// (0x000a06ca) list_single_fs_dyc_pane_ParamLimits

0x63fe,	// (0x000a06ca) list_single_fs_dyc_pane

0xc0f8,	// (0x000a63c4) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x4_t4_g7_g1

0xc0f8,	// (0x000a63c4) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x4_t4_g7_g2

0xc0f8,	// (0x000a63c4) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x4_t4_g7_g3

0xc0f8,	// (0x000a63c4) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x4_t4_g7_g4

0xc0f8,	// (0x000a63c4) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x4_t4_g7_g5

0xc0f8,	// (0x000a63c4) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x4_t4_g7_g6

0xc106,	// (0x000a63d2) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc106,	// (0x000a63d2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfab8,	// (0x000a9d84) list_medium_line_x4_t4_g7_g_ParamLimits

0xfab8,	// (0x000a9d84) list_medium_line_x4_t4_g7_g

0xc140,	// (0x000a640c) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x4_t4_g7_t1

0xc140,	// (0x000a640c) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x4_t4_g7_t2

0xc140,	// (0x000a640c) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x4_t4_g7_t3

0xc154,	// (0x000a6420) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc154,	// (0x000a6420) list_medium_line_x4_t4_g7_t4

0xc154,	// (0x000a6420) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc154,	// (0x000a6420) list_medium_line_x4_t4_g7_t5

0x0004,

0xfac7,	// (0x000a9d93) list_medium_line_x4_t4_g7_t_ParamLimits

0xfac7,	// (0x000a9d93) list_medium_line_x4_t4_g7_t

0x6b22,	// (0x000a0dee) list_single_dyc_row_pane_ParamLimits

0x6b22,	// (0x000a0dee) list_single_dyc_row_pane

0x71b8,	// (0x000a1484) call5_gesture_pane_ParamLimits

0x71b8,	// (0x000a1484) call5_gesture_pane

0x720e,	// (0x000a14da) call5_windows_pane_ParamLimits

0x720e,	// (0x000a14da) call5_windows_pane

0x72ca,	// (0x000a1596) call5_swipe_1_pane_cp_ParamLimits

0x72ca,	// (0x000a1596) call5_swipe_1_pane_cp

0x72d6,	// (0x000a15a2) call5_swipe_2_pane_cp_ParamLimits

0x72d6,	// (0x000a15a2) call5_swipe_2_pane_cp

0xc37f,	// (0x000a664b) call5_image_pane_cp

0x72e2,	// (0x000a15ae) popup_call5_audio_first_window_cp_ParamLimits

0x72e2,	// (0x000a15ae) popup_call5_audio_first_window_cp

0xb9e5,	// (0x000a5cb1) call5_swipe_1_pane_g1_cp_ParamLimits

0xb9e5,	// (0x000a5cb1) call5_swipe_1_pane_g1_cp

0xb9f2,	// (0x000a5cbe) call5_swipe_1_pane_g2_cp

0xb9fa,	// (0x000a5cc6) call5_swipe_1_pane_t1_cp_ParamLimits

0xb9fa,	// (0x000a5cc6) call5_swipe_1_pane_t1_cp

0xb9e5,	// (0x000a5cb1) call5_swipe_2_pane_g1_cp_ParamLimits

0xb9e5,	// (0x000a5cb1) call5_swipe_2_pane_g1_cp

0xba0f,	// (0x000a5cdb) call5_swipe_2_pane_g2_cp

0xba17,	// (0x000a5ce3) call5_swipe_2_pane_t1_cp_ParamLimits

0xba17,	// (0x000a5ce3) call5_swipe_2_pane_t1_cp

0xa438,	// (0x000a4704) main_sp_fs_email_pane

0xb207,	// (0x000a54d3) main_sp_fs_listscroll_pane_te

0x72f0,	// (0x000a15bc) popup_sp_fs_action_menu_pane_ParamLimits

0x72f0,	// (0x000a15bc) popup_sp_fs_action_menu_pane

0xc136,	// (0x000a6402) bg_sp_fs_ctrlbar_pane_g1

0xba2c,	// (0x000a5cf8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xba35,	// (0x000a5d01) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xba3e,	// (0x000a5d0a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc136,	// (0x000a6402) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbb0,	// (0x000a9e7c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe6eb,	// (0x000a89b7) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe6eb,	// (0x000a89b7) bg_sp_fs_ctrlbar_ddmenu_pane

0xba47,	// (0x000a5d13) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xba47,	// (0x000a5d13) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xba53,	// (0x000a5d1f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xba53,	// (0x000a5d1f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbb9,	// (0x000a9e85) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbb9,	// (0x000a9e85) main_sp_fs_ctrlbar_ddmenu_pane_g

0xba5f,	// (0x000a5d2b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xba5f,	// (0x000a5d2b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc136,	// (0x000a6402) list_medium_line_t2_right_icon_g1

0xce88,	// (0x000a7154) list_medium_line_t2_right_icon_t1

0xce88,	// (0x000a7154) list_medium_line_t2_right_icon_t2

0x0001,

0xfbbe,	// (0x000a9e8a) list_medium_line_t2_right_icon_t

0xd329,	// (0x000a75f5) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd329,	// (0x000a75f5) bg_sp_fs_ctrlbar_pane

0x7383,	// (0x000a164f) main_sp_fs_ctrlbar_button_pane_cp01

0x738d,	// (0x000a1659) main_sp_fs_ctrlbar_ddmenu_pane

0xbab3,	// (0x000a5d7f) main_sp_fs_ctrlbar_pane_g1

0xbabf,	// (0x000a5d8b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbc3,	// (0x000a9e8f) main_sp_fs_ctrlbar_pane_g

0x73cb,	// (0x000a1697) main_sp_fs_ctrlbar_pane_t1

0x740a,	// (0x000a16d6) main_sp_fs_ctrlbar_pane

0x742e,	// (0x000a16fa) main_sp_fs_listscroll_pane_te_cp01

0x745a,	// (0x000a1726) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x745a,	// (0x000a1726) popup_sp_fs_action_menu_pane_cp01

0xa438,	// (0x000a4704) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa438,	// (0x000a4704) bg_sp_fs_highlight_list_pane_cp01

0x747f,	// (0x000a174b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x747f,	// (0x000a174b) sp_fs_action_menu_list_gene_pane_g1

0xbae6,	// (0x000a5db2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xbae6,	// (0x000a5db2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbd1,	// (0x000a9e9d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbd1,	// (0x000a9e9d) sp_fs_action_menu_list_gene_pane_g

0x748e,	// (0x000a175a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x748e,	// (0x000a175a) sp_fs_action_menu_list_gene_pane_t1

0x74a6,	// (0x000a1772) sp_fs_action_menu_list_gene_pane_ParamLimits

0x74a6,	// (0x000a1772) sp_fs_action_menu_list_gene_pane

0xbaf3,	// (0x000a5dbf) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xbaf3,	// (0x000a5dbf) popup_sp_fs_action_menu_bg_pane

0x74c9,	// (0x000a1795) sp_fs_action_menu_list_pane_ParamLimits

0x74c9,	// (0x000a1795) sp_fs_action_menu_list_pane

0x74ed,	// (0x000a17b9) sp_fs_scroll_pane_cp01_ParamLimits

0x74ed,	// (0x000a17b9) sp_fs_scroll_pane_cp01

0xce88,	// (0x000a7154) list_medium_line_plain_t2_t1

0xce88,	// (0x000a7154) list_medium_line_plain_t2_t2

0x0001,

0xfbbe,	// (0x000a9e8a) list_medium_line_plain_t2_t

0xce88,	// (0x000a7154) list_medium_line_plain_t3_t1

0xce88,	// (0x000a7154) list_medium_line_plain_t3_t2

0xce88,	// (0x000a7154) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x000a9520) list_medium_line_plain_t3_t

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g2_g1

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x000a9465) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x000a9465) list_medium_line_x2_t2_g2_g

0xc140,	// (0x000a640c) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t2_g2_t1

0xc140,	// (0x000a640c) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x000a943a) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x000a943a) list_medium_line_x2_t2_g2_t

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t4_g2_g1

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x000a9465) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x000a9465) list_medium_line_x2_t4_g2_g

0xc140,	// (0x000a640c) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t4_g2_t1

0xc140,	// (0x000a640c) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t4_g2_t2

0xc140,	// (0x000a640c) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t4_g2_t3

0xc140,	// (0x000a640c) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x000a9473) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x000a9473) list_medium_line_x2_t4_g2_t

0xc136,	// (0x000a6402) list_medium_line_t3_right_iconx2_g1

0xc136,	// (0x000a6402) list_medium_line_t3_right_iconx2_g2

0xc136,	// (0x000a6402) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x000a963c) list_medium_line_t3_right_iconx2_g

0xce88,	// (0x000a7154) list_medium_line_t3_right_iconx2_t1

0xce88,	// (0x000a7154) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbbe,	// (0x000a9e8a) list_medium_line_t3_right_iconx2_t

0xc0f8,	// (0x000a63c4) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x3_t4_g4_g1

0xc0f8,	// (0x000a63c4) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x3_t4_g4_g2

0xc0f8,	// (0x000a63c4) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x3_t4_g4_g3

0xc0f8,	// (0x000a63c4) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x000a946a) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x000a946a) list_medium_line_x3_t4_g4_g

0xc140,	// (0x000a640c) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x3_t4_g4_t1

0xc140,	// (0x000a640c) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x3_t4_g4_t2

0xc140,	// (0x000a640c) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x3_t4_g4_t3

0xc140,	// (0x000a640c) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x000a9473) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x000a9473) list_medium_line_x3_t4_g4_t

0x7513,	// (0x000a17df) list_single_dyc_row_text_pane_t1_ParamLimits

0x7513,	// (0x000a17df) list_single_dyc_row_text_pane_t1

0x755c,	// (0x000a1828) list_single_dyc_row_text_pane_t2_ParamLimits

0x755c,	// (0x000a1828) list_single_dyc_row_text_pane_t2

0x75d2,	// (0x000a189e) list_single_dyc_row_text_pane_t3_ParamLimits

0x75d2,	// (0x000a189e) list_single_dyc_row_text_pane_t3

0x0005,

0xfbd6,	// (0x000a9ea2) list_single_dyc_row_text_pane_t_ParamLimits

0xfbd6,	// (0x000a9ea2) list_single_dyc_row_text_pane_t

0x76b5,	// (0x000a1981) list_single_dyc_row_pane_g1_ParamLimits

0x76b5,	// (0x000a1981) list_single_dyc_row_pane_g1

0x76c1,	// (0x000a198d) list_single_dyc_row_pane_g2_ParamLimits

0x76c1,	// (0x000a198d) list_single_dyc_row_pane_g2

0x76cd,	// (0x000a1999) list_single_dyc_row_pane_g3_ParamLimits

0x76cd,	// (0x000a1999) list_single_dyc_row_pane_g3

0x76e0,	// (0x000a19ac) list_single_dyc_row_pane_g4_ParamLimits

0x76e0,	// (0x000a19ac) list_single_dyc_row_pane_g4

0x0006,

0xfbe3,	// (0x000a9eaf) list_single_dyc_row_pane_g_ParamLimits

0xfbe3,	// (0x000a9eaf) list_single_dyc_row_pane_g

0x7732,	// (0x000a19fe) list_single_dyc_row_text_pane_ParamLimits

0x7732,	// (0x000a19fe) list_single_dyc_row_text_pane

0x02c8,	// (0x0009a594) bg_sp_fs_scroll_pane

0xbb01,	// (0x000a5dcd) thumb_sp_fs_scroll_pane

0xc0f8,	// (0x000a63c4) list_medium_line_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_g1

0xc140,	// (0x000a640c) list_medium_line_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t1

0xc0f8,	// (0x000a63c4) list_medium_line_x2_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_g1

0xc0f8,	// (0x000a63c4) list_medium_line_x2_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x000a9465) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x000a9465) list_medium_line_x2_g

0xc140,	// (0x000a640c) list_medium_line_x2_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t1

0xc0f8,	// (0x000a63c4) list_medium_line_x3_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x3_g1

0xb242,	// (0x000a550e) list_medium_line_x3_g2_ParamLimits

0xb242,	// (0x000a550e) list_medium_line_x3_g2

0x0001,

0xfbf2,	// (0x000a9ebe) list_medium_line_x3_g_ParamLimits

0xfbf2,	// (0x000a9ebe) list_medium_line_x3_g

0xbb0a,	// (0x000a5dd6) list_medium_line_x3_t1_ParamLimits

0xbb0a,	// (0x000a5dd6) list_medium_line_x3_t1

0xbb1e,	// (0x000a5dea) thumb_sp_fs_scroll_pane_g1

0xbb27,	// (0x000a5df3) thumb_sp_fs_scroll_pane_g2

0xbb30,	// (0x000a5dfc) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbf7,	// (0x000a9ec3) thumb_sp_fs_scroll_pane_g

0xbb1e,	// (0x000a5dea) bg_sp_fs_scroll_pane_g1

0xbb27,	// (0x000a5df3) bg_sp_fs_scroll_pane_g2

0xbb30,	// (0x000a5dfc) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbf7,	// (0x000a9ec3) bg_sp_fs_scroll_pane_g

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g4_g1

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g4_g2

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g4_g3

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x000a946a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x000a946a) list_medium_line_x2_t3_g4_g

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g4_t1

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g4_t2

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x000a945e) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x000a945e) list_medium_line_x2_t3_g4_t

0xc0f8,	// (0x000a63c4) list_medium_line_g2_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_g2_g1

0xc0f8,	// (0x000a63c4) list_medium_line_g2_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x000a9465) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x000a9465) list_medium_line_g2_g

0xc140,	// (0x000a640c) list_medium_line_g2_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_g2_t1

0xc0f8,	// (0x000a63c4) list_medium_line_t3_g2_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_t3_g2_g1

0xc0f8,	// (0x000a63c4) list_medium_line_t3_g2_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x000a9465) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x000a9465) list_medium_line_t3_g2_g

0xc140,	// (0x000a640c) list_medium_line_t3_g2_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t3_g2_t1

0xc140,	// (0x000a640c) list_medium_line_t3_g2_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t3_g2_t2

0xc140,	// (0x000a640c) list_medium_line_t3_g2_t3_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x000a945e) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x000a945e) list_medium_line_t3_g2_t

0xc136,	// (0x000a6402) list_medium_line_right_icon_g1

0xce88,	// (0x000a7154) list_medium_line_right_icon_t1

0xc0f8,	// (0x000a63c4) list_medium_line_t2_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_t2_g1

0xc140,	// (0x000a640c) list_medium_line_t2_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t2_t1

0xc140,	// (0x000a640c) list_medium_line_t2_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x000a943a) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x000a943a) list_medium_line_t2_t

0xc0f8,	// (0x000a63c4) list_medium_line_t3_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_t3_g1

0xc140,	// (0x000a640c) list_medium_line_t3_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t3_t1

0xc140,	// (0x000a640c) list_medium_line_t3_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t3_t2

0xc140,	// (0x000a640c) list_medium_line_t3_t3_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x000a945e) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x000a945e) list_medium_line_t3_t

0xc0f8,	// (0x000a63c4) list_medium_line_g3_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_g3_g1

0xc0f8,	// (0x000a63c4) list_medium_line_g3_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_g3_g2

0xc0f8,	// (0x000a63c4) list_medium_line_g3_g3_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x000a9457) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x000a9457) list_medium_line_g3_g

0xc140,	// (0x000a640c) list_medium_line_g3_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_g3_t1

0xc0f8,	// (0x000a63c4) list_medium_line_t2_g3_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_t2_g3_g1

0xc0f8,	// (0x000a63c4) list_medium_line_t2_g3_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_t2_g3_g2

0xc0f8,	// (0x000a63c4) list_medium_line_t2_g3_g3_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x000a9457) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x000a9457) list_medium_line_t2_g3_g

0xc140,	// (0x000a640c) list_medium_line_t2_g3_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t2_g3_t1

0xc140,	// (0x000a640c) list_medium_line_t2_g3_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x000a943a) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x000a943a) list_medium_line_t2_g3_t

0xc0f8,	// (0x000a63c4) list_medium_line_t3_g3_g1_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_t3_g3_g1

0xc0f8,	// (0x000a63c4) list_medium_line_t3_g3_g2_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_t3_g3_g2

0xc0f8,	// (0x000a63c4) list_medium_line_t3_g3_g3_ParamLimits

0xc0f8,	// (0x000a63c4) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x000a9457) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x000a9457) list_medium_line_t3_g3_g

0xc140,	// (0x000a640c) list_medium_line_t3_g3_t1_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t3_g3_t1

0xc140,	// (0x000a640c) list_medium_line_t3_g3_t2_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t3_g3_t2

0xc140,	// (0x000a640c) list_medium_line_t3_g3_t3_ParamLimits

0xc140,	// (0x000a640c) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x000a945e) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x000a945e) list_medium_line_t3_g3_t

0xc136,	// (0x000a6402) list_medium_line_right_iconx2_g1

0xc136,	// (0x000a6402) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x000a9358) list_medium_line_right_iconx2_g

0xce88,	// (0x000a7154) list_medium_line_right_iconx2_t1

0xc136,	// (0x000a6402) list_medium_line_t2_right_iconx2_g1

0xc136,	// (0x000a6402) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x000a9358) list_medium_line_t2_right_iconx2_g

0xce88,	// (0x000a7154) list_medium_line_t2_right_iconx2_t1

0xce88,	// (0x000a7154) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbbe,	// (0x000a9e8a) list_medium_line_t2_right_iconx2_t

0xce88,	// (0x000a7154) list_medium_line_x4_t4_t1

0xce88,	// (0x000a7154) list_medium_line_x4_t4_t2

0xce88,	// (0x000a7154) list_medium_line_x4_t4_t3

0xce88,	// (0x000a7154) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x000a9527) list_medium_line_x4_t4_t

0x779b,	// (0x000a1a67) tport_appsw_pane_ParamLimits

0x779b,	// (0x000a1a67) tport_appsw_pane

0x77b3,	// (0x000a1a7f) tport_contact_pane_ParamLimits

0x77b3,	// (0x000a1a7f) tport_contact_pane

0x77ce,	// (0x000a1a9a) tport_listscroll_pane_ParamLimits

0x77ce,	// (0x000a1a9a) tport_listscroll_pane

0x77e6,	// (0x000a1ab2) cell_tport_appsw_pane_ParamLimits

0x77e6,	// (0x000a1ab2) cell_tport_appsw_pane

0xd307,	// (0x000a75d3) tport_appsw_pane_g1_ParamLimits

0xd307,	// (0x000a75d3) tport_appsw_pane_g1

0x7830,	// (0x000a1afc) tport_contact_pane_g1

0x7839,	// (0x000a1b05) tport_contact_pane_t1

0x7847,	// (0x000a1b13) tport_contact_pane_t2

0x0001,

0xfbfe,	// (0x000a9eca) tport_contact_pane_t

0xbb39,	// (0x000a5e05) list_tport_pane

0xbb42,	// (0x000a5e0e) scroll_pane_cp_030

0x785d,	// (0x000a1b29) cell_tport_appsw_pane_g1

0x786d,	// (0x000a1b39) cell_tport_appsw_pane_t1

0x787b,	// (0x000a1b47) grid_highlight_pane_cp019

0x7883,	// (0x000a1b4f) list_tport_double_graphic_pane_ParamLimits

0x7883,	// (0x000a1b4f) list_tport_double_graphic_pane

0xa438,	// (0x000a4704) list_highlight_pane_cp023_ParamLimits

0xa438,	// (0x000a4704) list_highlight_pane_cp023

0x7890,	// (0x000a1b5c) list_tport_double_graphic_pane_g1_ParamLimits

0x7890,	// (0x000a1b5c) list_tport_double_graphic_pane_g1

0x789d,	// (0x000a1b69) list_tport_double_graphic_pane_t1_ParamLimits

0x789d,	// (0x000a1b69) list_tport_double_graphic_pane_t1

0x78b2,	// (0x000a1b7e) list_tport_double_graphic_pane_t2_ParamLimits

0x78b2,	// (0x000a1b7e) list_tport_double_graphic_pane_t2

0x0001,

0xfc0a,	// (0x000a9ed6) list_tport_double_graphic_pane_t_ParamLimits

0xfc0a,	// (0x000a9ed6) list_tport_double_graphic_pane_t

0x02c8,	// (0x0009a594) main_cale_note_pane

0x5249,	// (0x0009f515) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5249,	// (0x0009f515) cell_vitu2_function_top_wide_pane_cp01

0x6ec2,	// (0x000a118e) wait_bar_pane_cp05_ParamLimits

0xa438,	// (0x000a4704) listscroll_cmail_pane

0xbb53,	// (0x000a5e1f) list_cmail_pane

0x78c4,	// (0x000a1b90) list_cmail_body_pane

0x78db,	// (0x000a1ba7) list_single_cmail_header_caption_pane

0x78f5,	// (0x000a1bc1) list_single_cmail_header_detail_pane_ParamLimits

0x78f5,	// (0x000a1bc1) list_single_cmail_header_detail_pane

0xbb6a,	// (0x000a5e36) list_single_cmail_header_caption_pane_t1

0x7928,	// (0x000a1bf4) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7928,	// (0x000a1bf4) list_single_cmail_header_detail_pane_g1

0xb210,	// (0x000a54dc) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb210,	// (0x000a54dc) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc0f,	// (0x000a9edb) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc0f,	// (0x000a9edb) list_single_cmail_header_detail_pane_g

0x7940,	// (0x000a1c0c) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7940,	// (0x000a1c0c) list_single_cmail_header_detail_pane_t1

0x79a0,	// (0x000a1c6c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x79a0,	// (0x000a1c6c) list_single_cmail_header_editor_pane_bg

0xb80f,	// (0x000a5adb) list_cmail_body_pane_g1

0xbb8e,	// (0x000a5e5a) list_cmail_body_pane_t1

0x5483,	// (0x0009f74f) list_single_cmail_header_editor_pane_bg_g1

0xcb8b,	// (0x000a6e57) list_single_cmail_header_editor_pane_bg_g1_copy1

0x5493,	// (0x0009f75f) list_single_cmail_header_editor_pane_bg_g1_copy2

0x548b,	// (0x0009f757) list_single_cmail_header_editor_pane_bg_g1_copy3

0xac55,	// (0x000a4f21) list_single_cmail_header_editor_pane_bg_g1_copy4

0x54b3,	// (0x0009f77f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x54a3,	// (0x0009f76f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x54ab,	// (0x0009f777) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xcb6b,	// (0x000a6e37) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x79b7,	// (0x000a1c83) calenote_gesture_pane_ParamLimits

0x79b7,	// (0x000a1c83) calenote_gesture_pane

0x79d7,	// (0x000a1ca3) calenote_window_pane_ParamLimits

0x79d7,	// (0x000a1ca3) calenote_window_pane

0xbb9c,	// (0x000a5e68) popup_note_window_cp01

0x79f3,	// (0x000a1cbf) calenote_swipe_1_pane_ParamLimits

0x79f3,	// (0x000a1cbf) calenote_swipe_1_pane

0x72d6,	// (0x000a15a2) calenote_swipe_2_pane_ParamLimits

0x72d6,	// (0x000a15a2) calenote_swipe_2_pane

0xb9e5,	// (0x000a5cb1) calenote_swipe_1_pane_g1_ParamLimits

0xb9e5,	// (0x000a5cb1) calenote_swipe_1_pane_g1

0xbbae,	// (0x000a5e7a) calenote_swipe_1_pane_g2_ParamLimits

0xbbae,	// (0x000a5e7a) calenote_swipe_1_pane_g2

0x0001,

0xfc1b,	// (0x000a9ee7) calenote_swipe_1_pane_g_ParamLimits

0xfc1b,	// (0x000a9ee7) calenote_swipe_1_pane_g

0xbbba,	// (0x000a5e86) calenote_swipe_1_pane_t1_ParamLimits

0xbbba,	// (0x000a5e86) calenote_swipe_1_pane_t1

0xb9e5,	// (0x000a5cb1) calenote_swipe_2_pane_g1_ParamLimits

0xb9e5,	// (0x000a5cb1) calenote_swipe_2_pane_g1

0xbbd9,	// (0x000a5ea5) calenote_swipe_2_pane_g2_ParamLimits

0xbbd9,	// (0x000a5ea5) calenote_swipe_2_pane_g2

0x0001,

0xfc20,	// (0x000a9eec) calenote_swipe_2_pane_g_ParamLimits

0xfc20,	// (0x000a9eec) calenote_swipe_2_pane_g

0xbbe5,	// (0x000a5eb1) calenote_swipe_2_pane_t1_ParamLimits

0xbbe5,	// (0x000a5eb1) calenote_swipe_2_pane_t1

0x02c8,	// (0x0009a594) main_mup_navstr_pane

0x4172,	// (0x0009e43e) main_mup3_pane_t7_ParamLimits

0x4172,	// (0x0009e43e) main_mup3_pane_t7

0xa7a7,	// (0x000a4a73) main_mp4_pane_g6_ParamLimits

0xa7a7,	// (0x000a4a73) main_mp4_pane_g6

0xa9d5,	// (0x000a4ca1) main_image3_pane_t4_ParamLimits

0xa9d5,	// (0x000a4ca1) main_image3_pane_t4

0x7a08,	// (0x000a1cd4) popup_navstr_preview_pane_ParamLimits

0x7a08,	// (0x000a1cd4) popup_navstr_preview_pane

0x7a18,	// (0x000a1ce4) scroll_navstr_pane_ParamLimits

0x7a18,	// (0x000a1ce4) scroll_navstr_pane

0x02c8,	// (0x0009a594) bg_popup_preview_window_pane_cp04

0xbc0c,	// (0x000a5ed8) popup_navstr_preview_pane_t1

0x7a2c,	// (0x000a1cf8) scroll_navstr_pane_g1_ParamLimits

0x7a2c,	// (0x000a1cf8) scroll_navstr_pane_g1

0x7a40,	// (0x000a1d0c) scroll_navstr_pane_t1_ParamLimits

0x7a40,	// (0x000a1d0c) scroll_navstr_pane_t1

0xbba5,	// (0x000a5e71) bg_button_pane_cp014

0xbba5,	// (0x000a5e71) bg_button_pane_cp030

0x715e,	// (0x000a142a) list_double_fisheye_pane_g4_ParamLimits

0x715e,	// (0x000a142a) list_double_fisheye_pane_g4

0x716a,	// (0x000a1436) list_double_fisheye_pane_g5_ParamLimits

0x716a,	// (0x000a1436) list_double_fisheye_pane_g5

0xa4cd,	// (0x000a4799) sp_fs_scroll_pane_cp03

0xbab3,	// (0x000a5d7f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xbabf,	// (0x000a5d8b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbc3,	// (0x000a9e8f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x73cb,	// (0x000a1697) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xbb62,	// (0x000a5e2e) sp_fs_scroll_pane_cp02

0xc2e4,	// (0x000a65b0) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc2e4,	// (0x000a65b0) popup_sp_fs_calendar_preview_list_single_pane

0x02c8,	// (0x0009a594) main_cam6_pano_pane

0xa145,	// (0x000a4411) main_mup3_pane_ParamLimits

0x02c8,	// (0x0009a594) main_phacti_pane

0x6d93,	// (0x000a105f) bg_button_pane_cp11

0x6dad,	// (0x000a1079) main_mobtv_info_pane_g2_ParamLimits

0x6dad,	// (0x000a1079) main_mobtv_info_pane_g2

0x0001,

0xfb28,	// (0x000a9df4) main_mobtv_info_pane_g_ParamLimits

0xfb28,	// (0x000a9df4) main_mobtv_info_pane_g

0xc140,	// (0x000a640c) sc_clock_pane_t5_ParamLimits

0xc140,	// (0x000a640c) sc_clock_pane_t5

0xd307,	// (0x000a75d3) main_radioblah_pane_g1_ParamLimits

0xd315,	// (0x000a75e1) main_radioblah_pane_t3_ParamLimits

0xd315,	// (0x000a75e1) main_radioblah_pane_t3

0xd315,	// (0x000a75e1) main_radioblah_pane_t4_ParamLimits

0xd315,	// (0x000a75e1) main_radioblah_pane_t4

0xa438,	// (0x000a4704) main_radioblah_text_pane_ParamLimits

0xa438,	// (0x000a4704) main_radioblah_text_pane

0xb91c,	// (0x000a5be8) main_radioblah_info_pane_g1_ParamLimits

0xb960,	// (0x000a5c2c) main_radioblah_info_pane_t4_ParamLimits

0xb960,	// (0x000a5c2c) main_radioblah_info_pane_t4

0xa438,	// (0x000a4704) main_sp_fs_calendar_pane

0x7a57,	// (0x000a1d23) main_phacti_pane_g1

0x7a5f,	// (0x000a1d2b) phacti_note_pane_ParamLimits

0x7a5f,	// (0x000a1d2b) phacti_note_pane

0xbc23,	// (0x000a5eef) phacti_term_pane_ParamLimits

0xbc23,	// (0x000a5eef) phacti_term_pane

0xbc38,	// (0x000a5f04) phacti_note_pane_t1_ParamLimits

0xbc38,	// (0x000a5f04) phacti_note_pane_t1

0x7a73,	// (0x000a1d3f) phacti_term_pane_g1

0x7a7b,	// (0x000a1d47) phacti_term_pane_t1_ParamLimits

0x7a7b,	// (0x000a1d47) phacti_term_pane_t1

0xbc4f,	// (0x000a5f1b) popup_sp_fs_calendar_preview_list_single_pane_g1

0xbc57,	// (0x000a5f23) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc2a,	// (0x000a9ef6) popup_sp_fs_calendar_preview_list_single_pane_g

0xbc5f,	// (0x000a5f2b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xbc5f,	// (0x000a5f2b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xbc75,	// (0x000a5f41) aid_popup_sp_fs_bg_corner_pane

0xc136,	// (0x000a6402) popup_sp_fs_calendar_preview_bg_pane_g1

0x02c8,	// (0x0009a594) popup_sp_fs_calendar_preview_bg_pane

0xbc7d,	// (0x000a5f49) popup_sp_fs_calendar_preview_list_pane

0xbc85,	// (0x000a5f51) bg_main_sp_fs_cale_pane_ParamLimits

0xbc85,	// (0x000a5f51) bg_main_sp_fs_cale_pane

0xbc9d,	// (0x000a5f69) listscroll_cale_mrui_pane_ParamLimits

0xbc9d,	// (0x000a5f69) listscroll_cale_mrui_pane

0xebad,	// (0x000a8e79) listscroll_sp_fs_schedule_track_pane

0x7aba,	// (0x000a1d86) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x7aba,	// (0x000a1d86) main_sp_fs_ctrlbar_pane_cp01

0xebad,	// (0x000a8e79) main_sp_fs_ribbon_pane

0x7ad0,	// (0x000a1d9c) popup_sp_fs_cale_preview_window

0xbcb5,	// (0x000a5f81) list_single_sp_fs_schedule_track_pane_ParamLimits

0xbcb5,	// (0x000a5f81) list_single_sp_fs_schedule_track_pane

0xa6c0,	// (0x000a498c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa6c0,	// (0x000a498c) bg_sp_fs_highlight_list_pane_cp03

0xa6b4,	// (0x000a4980) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa6b4,	// (0x000a4980) list_single_sp_fs_schedule_track_pane_g1

0xa6b4,	// (0x000a4980) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa6b4,	// (0x000a4980) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc2f,	// (0x000a9efb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc2f,	// (0x000a9efb) list_single_sp_fs_schedule_track_pane_g

0x7ae2,	// (0x000a1dae) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7ae2,	// (0x000a1dae) list_single_sp_fs_schedule_track_pane_t1

0x7af4,	// (0x000a1dc0) sp_fs_schedule_track_pane_ParamLimits

0x7af4,	// (0x000a1dc0) sp_fs_schedule_track_pane

0xebb5,	// (0x000a8e81) sp_fs_schedule_track_pane_g1

0xebb5,	// (0x000a8e81) sp_fs_schedule_track_pane_g2

0xebb5,	// (0x000a8e81) sp_fs_schedule_track_pane_g3

0xebb5,	// (0x000a8e81) sp_fs_schedule_track_pane_g4

0xebb5,	// (0x000a8e81) sp_fs_schedule_track_pane_g5

0x0004,

0xfc34,	// (0x000a9f00) sp_fs_schedule_track_pane_g

0xebb5,	// (0x000a8e81) bg_sp_fs_schedule_viewer_highlight_g1

0xebb5,	// (0x000a8e81) bg_sp_fs_schedule_viewer_highlight_g2

0xebb5,	// (0x000a8e81) bg_sp_fs_schedule_viewer_highlight_g3

0xebb5,	// (0x000a8e81) bg_sp_fs_schedule_viewer_highlight_g4

0xebb5,	// (0x000a8e81) bg_sp_fs_schedule_viewer_highlight_g5

0xebb5,	// (0x000a8e81) bg_sp_fs_schedule_viewer_highlight_g6

0xebb5,	// (0x000a8e81) bg_sp_fs_schedule_viewer_highlight_g7

0xebb5,	// (0x000a8e81) bg_sp_fs_schedule_viewer_highlight_g8

0xebb5,	// (0x000a8e81) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc3f,	// (0x000a9f0b) bg_sp_fs_schedule_viewer_highlight_g

0xebad,	// (0x000a8e79) bg_main_sp_fs_ribbon_pane

0xebb5,	// (0x000a8e81) main_sp_fs_ribbon_pane_g1

0xbcc1,	// (0x000a5f8d) main_sp_fs_ribbon_pane_t1

0xbcc1,	// (0x000a5f8d) main_sp_fs_ribbon_pane_t2

0xbcc1,	// (0x000a5f8d) main_sp_fs_ribbon_pane_t3

0x0002,

0x0095,	// (0x0009a361) main_sp_fs_ribbon_pane_t

0xebad,	// (0x000a8e79) main_sp_fs_ribbon_scheduler_pane

0xebb5,	// (0x000a8e81) bg_main_sp_fs_ribbon_pane_g1

0xebb5,	// (0x000a8e81) bg_main_sp_fs_ribbon_pane_g2

0xebb5,	// (0x000a8e81) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf69b,	// (0x000a9967) bg_main_sp_fs_ribbon_pane_g

0xebb5,	// (0x000a8e81) main_sp_fs_ribbon_scheduler_pane_g1

0xebb5,	// (0x000a8e81) main_sp_fs_ribbon_scheduler_pane_g2

0xebb5,	// (0x000a8e81) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf69b,	// (0x000a9967) main_sp_fs_ribbon_scheduler_pane_g

0xbccf,	// (0x000a5f9b) list_cale_mrui_pane

0x7b00,	// (0x000a1dcc) sp_fs_scroll_pane_cp07_ParamLimits

0x7b00,	// (0x000a1dcc) sp_fs_scroll_pane_cp07

0xa6c0,	// (0x000a498c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa6c0,	// (0x000a498c) bg_sp_fs_schedule_viewer_highlight

0xebad,	// (0x000a8e79) list_single_sp_fs_schedule_track_pane_cp01

0xebad,	// (0x000a8e79) list_sp_fs_schedule_track_pane

0xbcdc,	// (0x000a5fa8) sp_fs_scroll_pane_cp06_ParamLimits

0xbcdc,	// (0x000a5fa8) sp_fs_scroll_pane_cp06

0xc136,	// (0x000a6402) bgmain_sp_fs_calendar_pane_g1

0x7b1c,	// (0x000a1de8) list_single_cale_mrui_pane_ParamLimits

0x7b1c,	// (0x000a1de8) list_single_cale_mrui_pane

0x7b3c,	// (0x000a1e08) list_single_cale_mrui_row_pane_ParamLimits

0x7b3c,	// (0x000a1e08) list_single_cale_mrui_row_pane

0x7b49,	// (0x000a1e15) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7b49,	// (0x000a1e15) list_single_cale_mrui_row_pane_g1

0x7b81,	// (0x000a1e4d) list_single_cale_mrui_row_pane_t1_ParamLimits

0x7b81,	// (0x000a1e4d) list_single_cale_mrui_row_pane_t1

0x7b93,	// (0x000a1e5f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7b93,	// (0x000a1e5f) list_single_cale_mrui_row_pane_t2

0x7bf9,	// (0x000a1ec5) list_single_cale_mrui_row_pane_t3_ParamLimits

0x7bf9,	// (0x000a1ec5) list_single_cale_mrui_row_pane_t3

0x7c28,	// (0x000a1ef4) list_single_cale_mrui_row_pane_t4_ParamLimits

0x7c28,	// (0x000a1ef4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc59,	// (0x000a9f25) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc59,	// (0x000a9f25) list_single_cale_mrui_row_pane_t

0x7c59,	// (0x000a1f25) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7c59,	// (0x000a1f25) list_single_cmail_header_editor_pane_bg_cp01

0x7c85,	// (0x000a1f51) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7c85,	// (0x000a1f51) list_single_cmail_header_editor_pane_bg_cp02

0xbcfd,	// (0x000a5fc9) main_radioblah_text_pane_t1_ParamLimits

0xbcfd,	// (0x000a5fc9) main_radioblah_text_pane_t1

0xbd17,	// (0x000a5fe3) cam6_indi_pane_cp01

0xbd1f,	// (0x000a5feb) cam6_mode_pane_cp01

0xbd27,	// (0x000a5ff3) cam6_pano_pane

0xbd30,	// (0x000a5ffc) cam6_zoom_pane_cp01

0xbd3a,	// (0x000a6006) cam6_pano_image_pane

0xbd43,	// (0x000a600f) cam6_pano_pane_g1

0xb80f,	// (0x000a5adb) cam6_pano_pane_g2

0xbd4c,	// (0x000a6018) cam6_pano_pane_g3

0xbd55,	// (0x000a6021) cam6_pano_pane_g4

0xee99,	// (0x000a9165) cam6_pano_pane_g5

0xbd5e,	// (0x000a602a) cam6_pano_pane_g6

0xbd66,	// (0x000a6032) cam6_pano_pane_g7

0xbd6e,	// (0x000a603a) cam6_pano_pane_g8

0xbd77,	// (0x000a6043) cam6_pano_pane_g9

0x0008,

0xfc62,	// (0x000a9f2e) cam6_pano_pane_g

0x02c8,	// (0x0009a594) main_browser_tag_pane

0xbc04,	// (0x000a5ed0) grid_navstr_albumart_pane

0xbd82,	// (0x000a604e) cell_navstr_albumart_pane_ParamLimits

0xbd82,	// (0x000a604e) cell_navstr_albumart_pane

0xbd9e,	// (0x000a606a) cell_navstr_albumart_pane_g1

0xbda6,	// (0x000a6072) cell_navstr_albumart_pane_g2

0xbdae,	// (0x000a607a) cell_navstr_albumart_pane_g3

0xbdb6,	// (0x000a6082) cell_navstr_albumart_pane_g4

0x0003,

0x00bf,	// (0x0009a38b) cell_navstr_albumart_pane_g

0x7ca5,	// (0x000a1f71) bt_list_pane_ParamLimits

0x7ca5,	// (0x000a1f71) bt_list_pane

0x7cbb,	// (0x000a1f87) bt_list_pane_t1

0x7cca,	// (0x000a1f96) bt_list_pane_t2

0x0001,

0xfc75,	// (0x000a9f41) bt_list_pane_t

0x02c8,	// (0x0009a594) main_cale_prevew_pane

0x7cd9,	// (0x000a1fa5) popup_cale_preview_window_ParamLimits

0x7cd9,	// (0x000a1fa5) popup_cale_preview_window

0xa438,	// (0x000a4704) bg_popup_preview_window_pane_cp05_ParamLimits

0xa438,	// (0x000a4704) bg_popup_preview_window_pane_cp05

0xbdbe,	// (0x000a608a) list_cale_preview_pane_ParamLimits

0xbdbe,	// (0x000a608a) list_cale_preview_pane

0x7cf6,	// (0x000a1fc2) list_double_cale_preview_pane_ParamLimits

0x7cf6,	// (0x000a1fc2) list_double_cale_preview_pane

0x7d0a,	// (0x000a1fd6) list_single_cale_preview_pane_ParamLimits

0x7d0a,	// (0x000a1fd6) list_single_cale_preview_pane

0x7d22,	// (0x000a1fee) list_single_cale_preview_pane_g1

0x7d2a,	// (0x000a1ff6) list_single_cale_preview_pane_t1_ParamLimits

0x7d2a,	// (0x000a1ff6) list_single_cale_preview_pane_t1

0x7d3f,	// (0x000a200b) list_double_cale_preview_pane_g1

0x7d47,	// (0x000a2013) list_double_cale_preview_pane_t1_ParamLimits

0x7d47,	// (0x000a2013) list_double_cale_preview_pane_t1

0x7d5c,	// (0x000a2028) list_double_cale_preview_pane_t2_ParamLimits

0x7d5c,	// (0x000a2028) list_double_cale_preview_pane_t2

0x0001,

0xfc7a,	// (0x000a9f46) list_double_cale_preview_pane_t_ParamLimits

0xfc7a,	// (0x000a9f46) list_double_cale_preview_pane_t

0x02c8,	// (0x0009a594) main_ezdial_pane

0xa438,	// (0x000a4704) main_sp_fs_email_pane_ParamLimits

0x7336,	// (0x000a1602) cmail_ddmenu_btn01_pane_ParamLimits

0x7336,	// (0x000a1602) cmail_ddmenu_btn01_pane

0x7349,	// (0x000a1615) cmail_ddmenu_btn02_pane_ParamLimits

0x7349,	// (0x000a1615) cmail_ddmenu_btn02_pane

0x736c,	// (0x000a1638) cmail_ddmenu_btn03_pane_ParamLimits

0x736c,	// (0x000a1638) cmail_ddmenu_btn03_pane

0x740a,	// (0x000a16d6) main_sp_fs_ctrlbar_pane_ParamLimits

0x742e,	// (0x000a16fa) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x78c4,	// (0x000a1b90) list_cmail_body_pane_ParamLimits

0xbb78,	// (0x000a5e44) bg_button_pane_cp12

0xbb81,	// (0x000a5e4d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xbb81,	// (0x000a5e4d) list_single_cmail_header_detail_pane_g3

0x797c,	// (0x000a1c48) list_single_cmail_header_detail_pane_t2_ParamLimits

0x797c,	// (0x000a1c48) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc16,	// (0x000a9ee2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc16,	// (0x000a9ee2) list_single_cmail_header_detail_pane_t

0x7a90,	// (0x000a1d5c) phacti_term_pane_t2_ParamLimits

0x7a90,	// (0x000a1d5c) phacti_term_pane_t2

0x0001,

0xfc25,	// (0x000a9ef1) phacti_term_pane_t_ParamLimits

0xfc25,	// (0x000a9ef1) phacti_term_pane_t

0xbdca,	// (0x000a6096) aid_size_list_single_double

0x7d74,	// (0x000a2040) popup_ezdial_listscroll_window

0xbdd6,	// (0x000a60a2) popup_number_entry_window_cp01

0xc37f,	// (0x000a664b) bg_popup_call_pane_cp09

0xbde3,	// (0x000a60af) ezdial_list_pane

0xbdeb,	// (0x000a60b7) scroll_pane_cp23

0xd329,	// (0x000a75f5) bg_button_pane_cp028_ParamLimits

0xd329,	// (0x000a75f5) bg_button_pane_cp028

0x7d90,	// (0x000a205c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7d90,	// (0x000a205c) cmail_ddmenu_btn01_pane_g1

0x7d9f,	// (0x000a206b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7d9f,	// (0x000a206b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc7f,	// (0x000a9f4b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc7f,	// (0x000a9f4b) cmail_ddmenu_btn01_pane_g

0xc3fc,	// (0x000a66c8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xc3fc,	// (0x000a66c8) cmail_ddmenu_btn01_pane_t1

0xd329,	// (0x000a75f5) bg_button_pane_cp029_ParamLimits

0xd329,	// (0x000a75f5) bg_button_pane_cp029

0x7db5,	// (0x000a2081) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7db5,	// (0x000a2081) cmail_ddmenu_btn02_pane_g1

0x7dd0,	// (0x000a209c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7dd0,	// (0x000a209c) cmail_ddmenu_btn02_pane_t1

0xa438,	// (0x000a4704) bg_button_pane_cp031_ParamLimits

0xa438,	// (0x000a4704) bg_button_pane_cp031

0x7db5,	// (0x000a2081) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7db5,	// (0x000a2081) cmail_ddmenu_btn03_pane_g1

0x7dd0,	// (0x000a209c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7dd0,	// (0x000a209c) cmail_ddmenu_btn03_pane_t1

0xc140,	// (0x000a640c) cell_dialer2_keypad_pane_t1_ParamLimits

0xecb1,	// (0x000a8f7d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xecb1,	// (0x000a8f7d) cell_dialer2_keypad_pane_t1_copy1

0x6bb4,	// (0x000a0e80) ncimui_group_button_pane

0xa438,	// (0x000a4704) main_sp_fs_calendar_pane_ParamLimits

0x78db,	// (0x000a1ba7) list_single_cmail_header_caption_pane_ParamLimits

0x7ab1,	// (0x000a1d7d) aid_recal_txt_sm_pane

0x02c8,	// (0x0009a594) mian_recal_day_pane

0x7ad0,	// (0x000a1d9c) popup_sp_fs_cale_preview_window_ParamLimits

0xc412,	// (0x000a66de) list_recal_day_pane

0x7e13,	// (0x000a20df) list_single_recal_day_pane_ParamLimits

0x7e13,	// (0x000a20df) list_single_recal_day_pane

0xc439,	// (0x000a6705) list_single_recal_day_pane_g1_ParamLimits

0xc439,	// (0x000a6705) list_single_recal_day_pane_g1

0x7e25,	// (0x000a20f1) list_single_recal_day_pane_g2_ParamLimits

0x7e25,	// (0x000a20f1) list_single_recal_day_pane_g2

0x7e31,	// (0x000a20fd) list_single_recal_day_pane_g3_ParamLimits

0x7e31,	// (0x000a20fd) list_single_recal_day_pane_g3

0x7e3d,	// (0x000a2109) list_single_recal_day_pane_g4_ParamLimits

0x7e3d,	// (0x000a2109) list_single_recal_day_pane_g4

0x7e4b,	// (0x000a2117) list_single_recal_day_pane_g5_ParamLimits

0x7e4b,	// (0x000a2117) list_single_recal_day_pane_g5

0x7e61,	// (0x000a212d) list_single_recal_day_pane_g6_ParamLimits

0x7e61,	// (0x000a212d) list_single_recal_day_pane_g6

0x0004,

0xfc8e,	// (0x000a9f5a) list_single_recal_day_pane_g_ParamLimits

0xfc8e,	// (0x000a9f5a) list_single_recal_day_pane_g

0x7e75,	// (0x000a2141) list_single_recal_day_pane_t1

0x7e87,	// (0x000a2153) list_single_recal_day_pane_t2

0x0001,

0xfc99,	// (0x000a9f65) list_single_recal_day_pane_t

0x7e99,	// (0x000a2165) ncimui_query_button_pane_ParamLimits

0x7e99,	// (0x000a2165) ncimui_query_button_pane

0x7ea9,	// (0x000a2175) ncimui_query_button_pane_t1_ParamLimits

0x7ea9,	// (0x000a2175) ncimui_query_button_pane_t1

0xc445,	// (0x000a6711) ncimui_query_button_pane_t2_ParamLimits

0xc445,	// (0x000a6711) ncimui_query_button_pane_t2

0x0001,

0xfc9e,	// (0x000a9f6a) ncimui_query_button_pane_t_ParamLimits

0xfc9e,	// (0x000a9f6a) ncimui_query_button_pane_t

0x7ebc,	// (0x000a2188) query_button_pane_ParamLimits

0x7ebc,	// (0x000a2188) query_button_pane

0x02c8,	// (0x0009a594) bg_button_pane_cp0028

0xc458,	// (0x000a6724) query_button_pane_t1

0x3382,	// (0x0009d64e) main_tport_pane_ParamLimits

0x7757,	// (0x000a1a23) bg_popup_window_pane_cp01_ParamLimits

0x7757,	// (0x000a1a23) bg_popup_window_pane_cp01

0x7770,	// (0x000a1a3c) heading_pane_cp08_ParamLimits

0x7770,	// (0x000a1a3c) heading_pane_cp08

0x7786,	// (0x000a1a52) heading_pane_cp07_ParamLimits

0x7786,	// (0x000a1a52) heading_pane_cp07

0x785d,	// (0x000a1b29) cell_tport_appsw_pane_g2

0x0002,

0xfc03,	// (0x000a9ecf) cell_tport_appsw_pane_g

0x2917,	// (0x0009cbe3) input_candi_list_open_g1

0xcd26,	// (0x000a6ff2) list_cale_time_pane_g6_ParamLimits

0xcd26,	// (0x000a6ff2) list_cale_time_pane_g6

0x3a3f,	// (0x0009dd0b) aid_size_touch_calib_1_ParamLimits

0x3a3f,	// (0x0009dd0b) aid_size_touch_calib_1

0x3a51,	// (0x0009dd1d) aid_size_touch_calib_2_ParamLimits

0x3a51,	// (0x0009dd1d) aid_size_touch_calib_2

0x3a69,	// (0x0009dd35) aid_size_touch_calib_3_ParamLimits

0x3a69,	// (0x0009dd35) aid_size_touch_calib_3

0x3a87,	// (0x0009dd53) aid_size_touch_calib_4_ParamLimits

0x3a87,	// (0x0009dd53) aid_size_touch_calib_4

0x3a9f,	// (0x0009dd6b) main_touch_calib_button_group_pane_ParamLimits

0x3a9f,	// (0x0009dd6b) main_touch_calib_button_group_pane

0x3ab7,	// (0x0009dd83) main_touch_calib_pane_g1_ParamLimits

0x3ac9,	// (0x0009dd95) main_touch_calib_pane_g2_ParamLimits

0x3adb,	// (0x0009dda7) main_touch_calib_pane_g3_ParamLimits

0x3aed,	// (0x0009ddb9) main_touch_calib_pane_g4_ParamLimits

0xf649,	// (0x000a9915) main_touch_calib_pane_g_ParamLimits

0x3aff,	// (0x0009ddcb) main_touch_calib_pane_t1_ParamLimits

0x3b19,	// (0x0009dde5) main_touch_calib_pane_t2_ParamLimits

0x3b33,	// (0x0009ddff) main_touch_calib_pane_t3_ParamLimits

0x3b47,	// (0x0009de13) main_touch_calib_pane_t4_ParamLimits

0x3b5d,	// (0x0009de29) main_touch_calib_pane_t5_ParamLimits

0xf652,	// (0x000a991e) main_touch_calib_pane_t_ParamLimits

0xec15,	// (0x000a8ee1) list_single_fp_cale_pane_g3_ParamLimits

0xec15,	// (0x000a8ee1) list_single_fp_cale_pane_g3

0xa145,	// (0x000a4411) bg_button_pane_cp012_ParamLimits

0xa145,	// (0x000a4411) bg_vkb2_func_pane_cp03_ParamLimits

0x5d27,	// (0x0009fff3) cell_vitu2_function_top_pane_g1_ParamLimits

0xa145,	// (0x000a4411) bg_vkb2_func_pane_cp04_ParamLimits

0x6b3f,	// (0x000a0e0b) main_ncimui_button_group_pane_ParamLimits

0x6b3f,	// (0x000a0e0b) main_ncimui_button_group_pane

0x6b9f,	// (0x000a0e6b) main_ncimui_pane_t3_ParamLimits

0x6b9f,	// (0x000a0e6b) main_ncimui_pane_t3

0xbc1a,	// (0x000a5ee6) phacti_button_group_pane

0xbdca,	// (0x000a6096) aid_size_list_single_double_ParamLimits

0x7d74,	// (0x000a2040) popup_ezdial_listscroll_window_ParamLimits

0xbdd6,	// (0x000a60a2) popup_number_entry_window_cp01_ParamLimits

0x7ecf,	// (0x000a219b) phacti_button_pane_ParamLimits

0x7ecf,	// (0x000a219b) phacti_button_pane

0x02c8,	// (0x0009a594) bg_button_pane_cp14

0xc466,	// (0x000a6732) phacti_button_pane_t1

0x7ee0,	// (0x000a21ac) main_touch_calib_button_pane_ParamLimits

0x7ee0,	// (0x000a21ac) main_touch_calib_button_pane

0xc194,	// (0x000a6460) bg_button_pane_cp18_ParamLimits

0xc194,	// (0x000a6460) bg_button_pane_cp18

0xc474,	// (0x000a6740) main_touch_calib_button_pane_t1_ParamLimits

0xc474,	// (0x000a6740) main_touch_calib_button_pane_t1

0xc48a,	// (0x000a6756) main_touch_calib_button_pane_t2_ParamLimits

0xc48a,	// (0x000a6756) main_touch_calib_button_pane_t2

0x0001,

0xfca3,	// (0x000a9f6f) main_touch_calib_button_pane_t_ParamLimits

0xfca3,	// (0x000a9f6f) main_touch_calib_button_pane_t

0x02c8,	// (0x0009a594) cell_ncimui_button_pane

0x02c8,	// (0x0009a594) bg_button_pane_cp032

0xc4a8,	// (0x000a6774) cell_ncimui_button_pane_t1

0xa9b3,	// (0x000a4c7f) image3_infobar_pane_ParamLimits

0xa9b3,	// (0x000a4c7f) image3_infobar_pane

0x6f13,	// (0x000a11df) fs_bigclock_status_pane_ParamLimits

0x6f13,	// (0x000a11df) fs_bigclock_status_pane

0x6f20,	// (0x000a11ec) main_fs_bigclock_clock_pane_ParamLimits

0x6f20,	// (0x000a11ec) main_fs_bigclock_clock_pane

0x6f52,	// (0x000a121e) main_fs_bigclock_indi_pane_ParamLimits

0x6f52,	// (0x000a121e) main_fs_bigclock_indi_pane

0x6f92,	// (0x000a125e) main_fs_bigclock_swipe_pane_ParamLimits

0x6f92,	// (0x000a125e) main_fs_bigclock_swipe_pane

0x02c8,	// (0x0009a594) main_fs_clock_dumped_data

0x6fde,	// (0x000a12aa) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x6fde,	// (0x000a12aa) list_single_fs_bigclock_indicator_pane_g1

0x6ff7,	// (0x000a12c3) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x6ff7,	// (0x000a12c3) list_single_fs_bigclock_indicator_pane_g2

0x7011,	// (0x000a12dd) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7011,	// (0x000a12dd) list_single_fs_bigclock_indicator_pane_g3

0x702b,	// (0x000a12f7) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x702b,	// (0x000a12f7) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb5c,	// (0x000a9e28) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb5c,	// (0x000a9e28) list_single_fs_bigclock_indicator_pane_g

0x705a,	// (0x000a1326) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x705a,	// (0x000a1326) list_single_fs_bigclock_indicator_pane_t1

0x7082,	// (0x000a134e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7082,	// (0x000a134e) list_single_fs_bigclock_indicator_pane_t2

0x70aa,	// (0x000a1376) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x70aa,	// (0x000a1376) list_single_fs_bigclock_indicator_pane_t3

0x70d2,	// (0x000a139e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x70d2,	// (0x000a139e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb67,	// (0x000a9e33) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb67,	// (0x000a9e33) list_single_fs_bigclock_indicator_pane_t

0xc4b6,	// (0x000a6782) image3_infobar_fav_pane_ParamLimits

0xc4b6,	// (0x000a6782) image3_infobar_fav_pane

0xc4c6,	// (0x000a6792) image3_infobar_loc_pane_ParamLimits

0xc4c6,	// (0x000a6792) image3_infobar_loc_pane

0xc4dc,	// (0x000a67a8) image3_infobar_time_pane_ParamLimits

0xc4dc,	// (0x000a67a8) image3_infobar_time_pane

0xc136,	// (0x000a6402) image3_infobar_time_pane_g1

0xc4ec,	// (0x000a67b8) image3_infobar_time_pane_t1

0xc136,	// (0x000a6402) image3_infobar_loc_pane_g1

0xc4fa,	// (0x000a67c6) image3_infobar_loc_pane_g2

0x0001,

0xfca8,	// (0x000a9f74) image3_infobar_loc_pane_g

0xc502,	// (0x000a67ce) image3_infobar_loc_pane_t1

0xc136,	// (0x000a6402) image3_infobar_fav_pane_g1

0xc510,	// (0x000a67dc) image3_infobar_fav_pane_g2

0x0001,

0xfcad,	// (0x000a9f79) image3_infobar_fav_pane_g

0xc518,	// (0x000a67e4) fs_bigclock_status_battery_pane

0xc521,	// (0x000a67ed) fs_bigclock_status_signal_pane

0xc52a,	// (0x000a67f6) fs_bigclock_status_title_pane

0xc533,	// (0x000a67ff) fs_bigclock_status_signal_pane_g1

0xc53c,	// (0x000a6808) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcb2,	// (0x000a9f7e) fs_bigclock_status_signal_pane_g

0xc544,	// (0x000a6810) fs_bigclock_status_battery_pane_g1

0xc54d,	// (0x000a6819) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcb7,	// (0x000a9f83) fs_bigclock_status_battery_pane_g

0xc555,	// (0x000a6821) fs_bigclock_status_title_pane_t1

0x7ef5,	// (0x000a21c1) main_fs_bigclock_clock_pane_g1

0x7ef5,	// (0x000a21c1) main_fs_bigclock_clock_pane_g2

0x7ef5,	// (0x000a21c1) main_fs_bigclock_clock_pane_g3

0x7ef5,	// (0x000a21c1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcbc,	// (0x000a9f88) main_fs_bigclock_clock_pane_g

0x7f0d,	// (0x000a21d9) main_fs_bigclock_clock_pane_t1

0x7f25,	// (0x000a21f1) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcc5,	// (0x000a9f91) main_fs_bigclock_clock_pane_t

0xc563,	// (0x000a682f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xc563,	// (0x000a682f) list_single_fs_bigclock_indicator_pane

0xc574,	// (0x000a6840) list_single_fs_bigclock_pane_ParamLimits

0xc574,	// (0x000a6840) list_single_fs_bigclock_pane

0xc59a,	// (0x000a6866) main_fs_bigclock_indicator_pane_t1

0xc5a9,	// (0x000a6875) list_single_fs_bigclock_pane_g1

0xc5b1,	// (0x000a687d) list_single_fs_bigclock_pane_t1

0xc136,	// (0x000a6402) main_fs_bigclock_swipe_pane_g1

0xc5f4,	// (0x000a68c0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcd6,	// (0x000a9fa2) main_fs_bigclock_swipe_pane_g

0xc5fc,	// (0x000a68c8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xc5fc,	// (0x000a68c8) main_fs_bigclock_swipe_pane_t1

0x22d2,	// (0x0009c59e) call_type_pane_ParamLimits

0x02c8,	// (0x0009a594) main_btmg_pane

0x7b75,	// (0x000a1e41) list_single_cale_mrui_row_pane_g2_ParamLimits

0x7b75,	// (0x000a1e41) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc52,	// (0x000a9f1e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc52,	// (0x000a9f1e) list_single_cale_mrui_row_pane_g

0x7e01,	// (0x000a20cd) list_recal_vselct_arw_lo_pane

0xc431,	// (0x000a66fd) list_recal_vselct_arw_up_pane

0x7e09,	// (0x000a20d5) list_recal_vselct_pane

0x7f87,	// (0x000a2253) btmg_button_pane

0x7f91,	// (0x000a225d) main_btmg_pane_g1

0x02c8,	// (0x0009a594) bg_button_pane_cp044

0xc619,	// (0x000a68e5) btmg_button_pane_t1

0xe4c9,	// (0x000a8795) aid_listscroll_gen

0xa438,	// (0x000a4704) main_cntbar_detail_pane

0xbb4b,	// (0x000a5e17) list_cmail_folder_pane

0xa4cd,	// (0x000a4799) sp_fs_scroll_pane_cp03_ParamLimits

0x7f9b,	// (0x000a2267) list_single_fs_dyc_pane_cp01_ParamLimits

0x7f9b,	// (0x000a2267) list_single_fs_dyc_pane_cp01

0xc627,	// (0x000a68f3) aid_size_cmail_indent

0x7fb5,	// (0x000a2281) list_single_dyc_row_pane_cp01

0x7ff2,	// (0x000a22be) cntbar_detail_list_pane_ParamLimits

0x7ff2,	// (0x000a22be) cntbar_detail_list_pane

0x8044,	// (0x000a2310) main_cntbar_detail_cont_pane_ParamLimits

0x8044,	// (0x000a2310) main_cntbar_detail_cont_pane

0xa4cd,	// (0x000a4799) scroll_pane_cp032_ParamLimits

0xa4cd,	// (0x000a4799) scroll_pane_cp032

0x8058,	// (0x000a2324) cntbar_detail_list_event_pane_ParamLimits

0x8058,	// (0x000a2324) cntbar_detail_list_event_pane

0x8004,	// (0x000a22d0) cntbar_detail_list_shct_pane

0xcbd9,	// (0x000a6ea5) aid_list_gen

0xc630,	// (0x000a68fc) aid_scroll

0xc639,	// (0x000a6905) aid_size_touch_scroll_bar

0x7129,	// (0x000a13f5) aid_list_double

0x8068,	// (0x000a2334) aid_list_single

0x8068,	// (0x000a2334) aid_list_single_lg

0x8071,	// (0x000a233d) aid_list_z_g_a_sm

0x8079,	// (0x000a2345) aid_list_z_g_d

0x8081,	// (0x000a234d) aid_txt_z_prm

0x808f,	// (0x000a235b) aid_txt_z_prm_cp01

0x809d,	// (0x000a2369) aid_txt_z_sec

0x80ab,	// (0x000a2377) main_cntbar_detail_cont_pane_g1_ParamLimits

0x80ab,	// (0x000a2377) main_cntbar_detail_cont_pane_g1

0x80bf,	// (0x000a238b) main_cntbar_detail_cont_pane_g2_ParamLimits

0x80bf,	// (0x000a238b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcdb,	// (0x000a9fa7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcdb,	// (0x000a9fa7) main_cntbar_detail_cont_pane_g

0xc642,	// (0x000a690e) main_cntbar_detail_cont_pane_t1

0xc650,	// (0x000a691c) main_cntbar_detail_cont_pane_t2

0xc65e,	// (0x000a692a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfce0,	// (0x000a9fac) main_cntbar_detail_cont_pane_t

0x80cf,	// (0x000a239b) cell_cntbar_detail_list_shct_pane_ParamLimits

0x80cf,	// (0x000a239b) cell_cntbar_detail_list_shct_pane

0xc66c,	// (0x000a6938) cntbar_detail_list_shct_pane_g1

0xc675,	// (0x000a6941) cntbar_detail_list_shct_pane_g2

0x0001,

0xfce7,	// (0x000a9fb3) cntbar_detail_list_shct_pane_g

0x80e1,	// (0x000a23ad) cntbar_detail_list_event_pane_g1_ParamLimits

0x80e1,	// (0x000a23ad) cntbar_detail_list_event_pane_g1

0x80ed,	// (0x000a23b9) cntbar_detail_list_event_pane_g2_ParamLimits

0x80ed,	// (0x000a23b9) cntbar_detail_list_event_pane_g2

0x0005,

0xfcec,	// (0x000a9fb8) cntbar_detail_list_event_pane_g_ParamLimits

0xfcec,	// (0x000a9fb8) cntbar_detail_list_event_pane_g

0x815b,	// (0x000a2427) cntbar_detail_list_event_pane_t1_ParamLimits

0x815b,	// (0x000a2427) cntbar_detail_list_event_pane_t1

0x8170,	// (0x000a243c) cntbar_detail_list_event_pane_t2_ParamLimits

0x8170,	// (0x000a243c) cntbar_detail_list_event_pane_t2

0x0002,

0xfcf9,	// (0x000a9fc5) cntbar_detail_list_event_pane_t_ParamLimits

0xfcf9,	// (0x000a9fc5) cntbar_detail_list_event_pane_t

0xc136,	// (0x000a6402) cell_cntbar_detail_list_shct_pane_g1

0x266c,	// (0x0009c938) navi_pane_mv_g3

0xa438,	// (0x000a4704) main_cntbar_detail_pane_ParamLimits

0x02c8,	// (0x0009a594) main_notif_wgt_pane

0xa731,	// (0x000a49fd) aid_tch_main_mp4_pane_g4

0xa9a9,	// (0x000a4c75) popup_slider_window_cp02

0x7df7,	// (0x000a20c3) list_recal_day_event_pane

0x7fbe,	// (0x000a228a) cntbar_detail_btn_pane_ParamLimits

0x7fbe,	// (0x000a228a) cntbar_detail_btn_pane

0x7fd7,	// (0x000a22a3) cntbar_detail_btn_pane_cp01_ParamLimits

0x7fd7,	// (0x000a22a3) cntbar_detail_btn_pane_cp01

0x8004,	// (0x000a22d0) cntbar_detail_list_shct_pane_ParamLimits

0x8014,	// (0x000a22e0) cntbar_detail_pane_g1_ParamLimits

0x8014,	// (0x000a22e0) cntbar_detail_pane_g1

0x8028,	// (0x000a22f4) cntbar_detail_pane_t1_ParamLimits

0x8028,	// (0x000a22f4) cntbar_detail_pane_t1

0x80f9,	// (0x000a23c5) cntbar_detail_list_event_pane_g3_ParamLimits

0x80f9,	// (0x000a23c5) cntbar_detail_list_event_pane_g3

0x8111,	// (0x000a23dd) cntbar_detail_list_event_pane_g4_ParamLimits

0x8111,	// (0x000a23dd) cntbar_detail_list_event_pane_g4

0x8129,	// (0x000a23f5) cntbar_detail_list_event_pane_g5_ParamLimits

0x8129,	// (0x000a23f5) cntbar_detail_list_event_pane_g5

0x8141,	// (0x000a240d) cntbar_detail_list_event_pane_g6_ParamLimits

0x8141,	// (0x000a240d) cntbar_detail_list_event_pane_g6

0x8185,	// (0x000a2451) cntbar_detail_list_event_pane_t3_ParamLimits

0x8185,	// (0x000a2451) cntbar_detail_list_event_pane_t3

0x8197,	// (0x000a2463) popup_notif_wgt_window_ParamLimits

0x8197,	// (0x000a2463) popup_notif_wgt_window

0x81b0,	// (0x000a247c) popup_submenu_window_cp01_ParamLimits

0x81b0,	// (0x000a247c) popup_submenu_window_cp01

0xc37f,	// (0x000a664b) bg_popup_window_pane_cp10

0xc67e,	// (0x000a694a) listscroll_notif_wgt_pane

0xc690,	// (0x000a695c) list_notif_wgt_window

0xc699,	// (0x000a6965) scroll_pane_cp033

0x81c4,	// (0x000a2490) list_notif_wgt_row_pane_ParamLimits

0x81c4,	// (0x000a2490) list_notif_wgt_row_pane

0xc6a2,	// (0x000a696e) aid_size_list_notif_wgt_del

0xc6af,	// (0x000a697b) list_notif_wgt_row_pane_g1

0xc6bb,	// (0x000a6987) list_notif_wgt_row_pane_g2

0xc6ca,	// (0x000a6996) list_notif_wgt_row_pane_g3

0x0002,

0xfd00,	// (0x000a9fcc) list_notif_wgt_row_pane_g

0xc6d7,	// (0x000a69a3) list_notif_wgt_row_pane_t1

0xc6ed,	// (0x000a69b9) list_notif_wgt_row_pane_t2

0xc6ff,	// (0x000a69cb) list_notif_wgt_row_pane_t3

0x0002,

0xfd07,	// (0x000a9fd3) list_notif_wgt_row_pane_t

0xac8f,	// (0x000a4f5b) list_recal_day_event_pane_g1

0xc711,	// (0x000a69dd) list_recal_day_event_pane_t1

0x02c8,	// (0x0009a594) bg_button_pane_cp045

0x81d4,	// (0x000a24a0) cntbar_detail_btn_pane_t1

0xd329,	// (0x000a75f5) main_callh_pane_ParamLimits

0xd329,	// (0x000a75f5) main_callh_pane

0x02c8,	// (0x0009a594) main_coverflow0_pane

0x02c8,	// (0x0009a594) main_wgtman_pane

0x6fb3,	// (0x000a127f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6fb3,	// (0x000a127f) main_fs_bigclock_unlock_btn_pane

0x7855,	// (0x000a1b21) bg_button_pane_cp16

0x7865,	// (0x000a1b31) cell_tport_appsw_pane_g3

0x81e2,	// (0x000a24ae) cf0_flow_pane_ParamLimits

0x81e2,	// (0x000a24ae) cf0_flow_pane

0xc720,	// (0x000a69ec) listscroll_cf0_pane

0xc72b,	// (0x000a69f7) main_cf0_pane_g1

0x81f7,	// (0x000a24c3) main_cf0_pane_t1_ParamLimits

0x81f7,	// (0x000a24c3) main_cf0_pane_t1

0x820e,	// (0x000a24da) main_cf0_pane_t2_ParamLimits

0x820e,	// (0x000a24da) main_cf0_pane_t2

0x0001,

0xfd13,	// (0x000a9fdf) main_cf0_pane_t_ParamLimits

0xfd13,	// (0x000a9fdf) main_cf0_pane_t

0xc73d,	// (0x000a6a09) scroll_pane_cp11

0x8225,	// (0x000a24f1) cf0_flow_pane_g1

0x8231,	// (0x000a24fd) cf0_flow_pane_g2

0x0001,

0xfd18,	// (0x000a9fe4) cf0_flow_pane_g

0x823d,	// (0x000a2509) cf0_flow_pane_t1

0x02c8,	// (0x0009a594) main_call6_pane

0x02c8,	// (0x0009a594) main_calllock_pane

0x824f,	// (0x000a251b) call6_btn_grp_pane_ParamLimits

0x824f,	// (0x000a251b) call6_btn_grp_pane

0x8269,	// (0x000a2535) call6_pane_g1_ParamLimits

0x8269,	// (0x000a2535) call6_pane_g1

0x8282,	// (0x000a254e) popup_call6_1st_window_ParamLimits

0x8282,	// (0x000a254e) popup_call6_1st_window

0x8296,	// (0x000a2562) popup_call6_2nd_window_ParamLimits

0x8296,	// (0x000a2562) popup_call6_2nd_window

0x82aa,	// (0x000a2576) cell_call6_btn_pane_ParamLimits

0x82aa,	// (0x000a2576) cell_call6_btn_pane

0xc37f,	// (0x000a664b) bg_popup_call2_in_pane_cp03

0xc748,	// (0x000a6a14) popup_call6_1st_window_g1

0xc750,	// (0x000a6a1c) popup_call6_1st_window_g2

0xc758,	// (0x000a6a24) popup_call6_1st_window_g3

0x0002,

0xfd1d,	// (0x000a9fe9) popup_call6_1st_window_g

0xc760,	// (0x000a6a2c) popup_call6_1st_window_t1

0xc76f,	// (0x000a6a3b) popup_call6_1st_window_t2

0xc77f,	// (0x000a6a4b) popup_call6_1st_window_t3

0x0002,

0xfd24,	// (0x000a9ff0) popup_call6_1st_window_t

0xc37f,	// (0x000a664b) bg_popup_call2_in_pane_cp04

0xc78f,	// (0x000a6a5b) popup_call6_2nd_window_g1

0xc797,	// (0x000a6a63) popup_call6_2nd_window_g2

0xc79f,	// (0x000a6a6b) popup_call6_2nd_window_g3

0x0002,

0xfd2b,	// (0x000a9ff7) popup_call6_2nd_window_g

0xc7a7,	// (0x000a6a73) popup_call6_2nd_window_t1

0xa153,	// (0x000a441f) bg_button_pane_cp15

0xb21c,	// (0x000a54e8) cell_call6_btn_pane_g1

0xb225,	// (0x000a54f1) cell_call6_btn_pane_t1

0x82be,	// (0x000a258a) listscroll_wgtman_pane_ParamLimits

0x82be,	// (0x000a258a) listscroll_wgtman_pane

0x82df,	// (0x000a25ab) wgtman_btn_pane_ParamLimits

0x82df,	// (0x000a25ab) wgtman_btn_pane

0xd116,	// (0x000a73e2) aid_scroll_copy1

0xc7b6,	// (0x000a6a82) list_wgtman_pane

0x8322,	// (0x000a25ee) wgtman_btn_pane_g1_ParamLimits

0x8322,	// (0x000a25ee) wgtman_btn_pane_g1

0x834e,	// (0x000a261a) wgtman_btn_pane_t1_ParamLimits

0x834e,	// (0x000a261a) wgtman_btn_pane_t1

0xc7c0,	// (0x000a6a8c) wgtman_btn_pane_t2_ParamLimits

0xc7c0,	// (0x000a6a8c) wgtman_btn_pane_t2

0x0001,

0xfd32,	// (0x000a9ffe) wgtman_btn_pane_t_ParamLimits

0xfd32,	// (0x000a9ffe) wgtman_btn_pane_t

0x838b,	// (0x000a2657) listrow_wgtman_pane_ParamLimits

0x838b,	// (0x000a2657) listrow_wgtman_pane

0x839f,	// (0x000a266b) listrow_wgtman_pane_g1

0x83ac,	// (0x000a2678) listrow_wgtman_pane_g2

0x0001,

0xfd37,	// (0x000aa003) listrow_wgtman_pane_g

0x83ca,	// (0x000a2696) listrow_wgtman_pane_t1

0x83e2,	// (0x000a26ae) listrow_wgtman_pane_t2

0x0001,

0xfd3c,	// (0x000aa008) listrow_wgtman_pane_t

0x8408,	// (0x000a26d4) wait_bar_pane_cp09

0xc7d7,	// (0x000a6aa3) main_calllock_btn_pane

0xc7e1,	// (0x000a6aad) main_calllock_pane_g1

0x02c8,	// (0x0009a594) bg_button_pane_cp17

0xc7ed,	// (0x000a6ab9) main_calllock_btn_pane_g1

0xc7f6,	// (0x000a6ac2) main_calllock_btn_pane_t1

0x02c8,	// (0x0009a594) main_dialer3_pane

0x02c8,	// (0x0009a594) main_fmrd2_pane

0xc136,	// (0x000a6402) main_fs_bigclock_unlock_btn_pane_g1

0x8422,	// (0x000a26ee) main_fs_bigclock_unlock_btn_pane_t1

0x8430,	// (0x000a26fc) area_fmrd2_info_pane_ParamLimits

0x8430,	// (0x000a26fc) area_fmrd2_info_pane

0x8441,	// (0x000a270d) area_fmrd2_visual_pane_ParamLimits

0x8441,	// (0x000a270d) area_fmrd2_visual_pane

0x844f,	// (0x000a271b) fmrd2_indi_pane_ParamLimits

0x844f,	// (0x000a271b) fmrd2_indi_pane

0x845c,	// (0x000a2728) area_fmrd2_visual_pane_g1

0x8464,	// (0x000a2730) area_fmrd2_visual_pane_t1

0x8474,	// (0x000a2740) area_fmrd2_visual_pane_t2

0x8484,	// (0x000a2750) area_fmrd2_visual_pane_t3

0x0002,

0xfd46,	// (0x000aa012) area_fmrd2_visual_pane_t

0x8494,	// (0x000a2760) area_fmrd2_info_pane_g1

0x849c,	// (0x000a2768) area_fmrd2_info_pane_t1

0x84ac,	// (0x000a2778) area_fmrd2_info_pane_t2

0x84bc,	// (0x000a2788) area_fmrd2_info_pane_t3

0x84cc,	// (0x000a2798) area_fmrd2_info_pane_t4

0x0003,

0xfd4d,	// (0x000aa019) area_fmrd2_info_pane_t

0x84dc,	// (0x000a27a8) fmrd2_indi_pane_t1

0x84ec,	// (0x000a27b8) fmrd2_indi_pane_t2

0x84fc,	// (0x000a27c8) fmrd2_indi_pane_t3

0x0002,

0xfd56,	// (0x000aa022) fmrd2_indi_pane_t

0x703c,	// (0x000a1308) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x703c,	// (0x000a1308) list_single_fs_bigclock_indicator_pane_g5

0x70f1,	// (0x000a13bd) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x70f1,	// (0x000a13bd) list_single_fs_bigclock_indicator_pane_t5

0x7aa5,	// (0x000a1d71) aid_cell_bcale_month_pane_ParamLimits

0x7aa5,	// (0x000a1d71) aid_cell_bcale_month_pane

0x7aa5,	// (0x000a1d71) bcale_month_pane_ParamLimits

0x7aa5,	// (0x000a1d71) bcale_month_pane

0xa6c0,	// (0x000a498c) bcale_preview_pane_ParamLimits

0xa6c0,	// (0x000a498c) bcale_preview_pane

0xc5b1,	// (0x000a687d) list_single_fs_bigclock_pane_t1_ParamLimits

0xc5d0,	// (0x000a689c) list_single_fs_bigclock_pane_t2_ParamLimits

0xc5d0,	// (0x000a689c) list_single_fs_bigclock_pane_t2

0x0001,

0xfcd1,	// (0x000a9f9d) list_single_fs_bigclock_pane_t_ParamLimits

0xfcd1,	// (0x000a9f9d) list_single_fs_bigclock_pane_t

0x841a,	// (0x000a26e6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd41,	// (0x000aa00d) main_fs_bigclock_unlock_btn_pane_g

0x850c,	// (0x000a27d8) aid_dia3_key_size_ParamLimits

0x850c,	// (0x000a27d8) aid_dia3_key_size

0x8520,	// (0x000a27ec) aid_dia3_listrow_size_ParamLimits

0x8520,	// (0x000a27ec) aid_dia3_listrow_size

0x853a,	// (0x000a2806) dia3_keypad_fun_pane_ParamLimits

0x853a,	// (0x000a2806) dia3_keypad_fun_pane

0x8554,	// (0x000a2820) dia3_keypad_num_pane_ParamLimits

0x8554,	// (0x000a2820) dia3_keypad_num_pane

0x856e,	// (0x000a283a) dia3_listscroll_pane_ParamLimits

0x856e,	// (0x000a283a) dia3_listscroll_pane

0x8584,	// (0x000a2850) dia3_numentry_pane_ParamLimits

0x8584,	// (0x000a2850) dia3_numentry_pane

0xc805,	// (0x000a6ad1) dia3_list_pane

0x859e,	// (0x000a286a) scroll_pane_cp12

0x02c8,	// (0x0009a594) bg_dia3_numentry_pane

0x85a9,	// (0x000a2875) dia3_numentry_pane_t1

0xebad,	// (0x000a8e79) cell_dia3_key_num_pane

0x85b8,	// (0x000a2884) cell_dia3_key0_fun_pane_ParamLimits

0x85b8,	// (0x000a2884) cell_dia3_key0_fun_pane

0x85cc,	// (0x000a2898) cell_dia3_key1_fun_pane_ParamLimits

0x85cc,	// (0x000a2898) cell_dia3_key1_fun_pane

0x85e1,	// (0x000a28ad) dia3_listrow_pane

0xb6cb,	// (0x000a5997) bg_dia3_numentry_pane_g1

0x02c8,	// (0x0009a594) bg_button_pane_cp21

0x85f3,	// (0x000a28bf) cell_dia3_key_num_pane_t1

0x8601,	// (0x000a28cd) cell_dia3_key_num_pane_t2

0x8601,	// (0x000a28cd) cell_dia3_key_num_pane_t3

0x8601,	// (0x000a28cd) cell_dia3_key_num_pane_t4

0x0003,

0xfd5d,	// (0x000aa029) cell_dia3_key_num_pane_t

0x02c8,	// (0x0009a594) bg_button_pane_cp19

0x8610,	// (0x000a28dc) cell_dia3_key0_fun_pane_g1

0x02c8,	// (0x0009a594) bg_button_pane_cp20

0x8618,	// (0x000a28e4) cell_dia3_key1_fun_pane_g1

0xa6c0,	// (0x000a498c) area_left_week_number_pane

0xa6c0,	// (0x000a498c) area_top_day_name_pane

0xa6c0,	// (0x000a498c) frame_month_view_pane

0xa6c0,	// (0x000a498c) grid_month_view_pane

0xa6c0,	// (0x000a498c) cell_top_day_name_pane_ParamLimits

0xa6c0,	// (0x000a498c) cell_top_day_name_pane

0xa6c0,	// (0x000a498c) cell_area_left_week_number_pane_ParamLimits

0xa6c0,	// (0x000a498c) cell_area_left_week_number_pane

0xa6c0,	// (0x000a498c) cell_month_view_pane_ParamLimits

0xa6c0,	// (0x000a498c) cell_month_view_pane

0xa6b4,	// (0x000a4980) frm_month_g1

0xa6b4,	// (0x000a4980) frm_month_g2

0xa6b4,	// (0x000a4980) frm_month_g3

0xa6b4,	// (0x000a4980) frm_month_g4

0xa6b4,	// (0x000a4980) frm_month_g5

0xa6b4,	// (0x000a4980) frm_month_g6

0xa6b4,	// (0x000a4980) frm_month_g7

0xa6b4,	// (0x000a4980) frm_month_g8

0xa6b4,	// (0x000a4980) frm_month_g9

0xa6b4,	// (0x000a4980) frm_month_g10

0xa6b4,	// (0x000a4980) frm_month_g11

0xa6b4,	// (0x000a4980) frm_month_g12

0xa6b4,	// (0x000a4980) frm_month_g13

0xa6b4,	// (0x000a4980) frm_month_g14

0xa6b4,	// (0x000a4980) frm_month_g15

0xa6b4,	// (0x000a4980) frm_month_g16

0x000f,

0xfd66,	// (0x000aa032) frm_month_g

0xc80f,	// (0x000a6adb) cell_top_day_name_pane_t1

0xa6b4,	// (0x000a4980) cell_area_left_week_number_pane_g1

0xc80f,	// (0x000a6adb) cell_area_left_week_number_pane_t1

0xa6b4,	// (0x000a4980) cell_month_view_pane_g1

0xc80f,	// (0x000a6adb) cell_month_view_pane_t1

0x02c8,	// (0x0009a594) main_fps_pane

0xba79,	// (0x000a5d45) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xba79,	// (0x000a5d45) cmail_ddmenu_btn02_pane_cp1

0xba95,	// (0x000a5d61) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xba95,	// (0x000a5d61) cmail_ddmenu_btn02_pane_cp2

0x7dc4,	// (0x000a2090) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7dc4,	// (0x000a2090) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc84,	// (0x000a9f50) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc84,	// (0x000a9f50) cmail_ddmenu_btn02_pane_g

0x7de5,	// (0x000a20b1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7de5,	// (0x000a20b1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc89,	// (0x000a9f55) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc89,	// (0x000a9f55) cmail_ddmenu_btn02_pane_t

0x8620,	// (0x000a28ec) fps_text_pane_ParamLimits

0x8620,	// (0x000a28ec) fps_text_pane

0x8637,	// (0x000a2903) main_fps_pane_g1_ParamLimits

0x8637,	// (0x000a2903) main_fps_pane_g1

0x864f,	// (0x000a291b) wait_bar_pane_cp010_ParamLimits

0x864f,	// (0x000a291b) wait_bar_pane_cp010

0x8662,	// (0x000a292e) fps_text_pane_t1_ParamLimits

0x8662,	// (0x000a292e) fps_text_pane_t1

0xc3ce,	// (0x000a669a) cam4_image_uncrop_pane_g1

0xc3d7,	// (0x000a66a3) cam4_image_uncrop_pane_g2

0x4f61,	// (0x0009f22d) cam4_image_uncrop_pane_g3

0x4f6a,	// (0x0009f236) cam4_image_uncrop_pane_g4

0x0003,

0xf7e0,	// (0x000a9aac) cam4_image_uncrop_pane_g

0x85e1,	// (0x000a28ad) dia3_listrow_pane_ParamLimits

0x02c8,	// (0x0009a594) main_phob2_pane

0x77ff,	// (0x000a1acb) cell_tport_appsw_pane_cp02_ParamLimits

0x77ff,	// (0x000a1acb) cell_tport_appsw_pane_cp02

0x7813,	// (0x000a1adf) cell_tport_appsw_pane_cp03_ParamLimits

0x7813,	// (0x000a1adf) cell_tport_appsw_pane_cp03

0x02c8,	// (0x0009a594) phob2_contact_card_pane

0x02c8,	// (0x0009a594) phob2_listscroll_pane

0xc821,	// (0x000a6aed) phob2_list_pane

0xc829,	// (0x000a6af5) scroll_pane_cp034

0x867a,	// (0x000a2946) phob2_cc_data_pane_ParamLimits

0x867a,	// (0x000a2946) phob2_cc_data_pane

0x8693,	// (0x000a295f) phob2_cc_listscroll_pane_ParamLimits

0x8693,	// (0x000a295f) phob2_cc_listscroll_pane

0x86b4,	// (0x000a2980) list_double_large_graphic_phob2_pane_ParamLimits

0x86b4,	// (0x000a2980) list_double_large_graphic_phob2_pane

0x86d5,	// (0x000a29a1) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x86d5,	// (0x000a29a1) list_double_large_graphic_phob2_pane_g1

0x86e7,	// (0x000a29b3) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x86e7,	// (0x000a29b3) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd87,	// (0x000aa053) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd87,	// (0x000aa053) list_double_large_graphic_phob2_pane_g

0x871b,	// (0x000a29e7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x871b,	// (0x000a29e7) list_double_large_graphic_phob2_pane_t1

0x873f,	// (0x000a2a0b) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x873f,	// (0x000a2a0b) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd90,	// (0x000aa05c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd90,	// (0x000aa05c) list_double_large_graphic_phob2_pane_t

0xa438,	// (0x000a4704) list_highlight_pane_cp024

0x8760,	// (0x000a2a2c) phob2_cc_button_pane

0x876c,	// (0x000a2a38) phob2_cc_data_pane_g1_ParamLimits

0x876c,	// (0x000a2a38) phob2_cc_data_pane_g1

0x8784,	// (0x000a2a50) phob2_cc_data_pane_g2_ParamLimits

0x8784,	// (0x000a2a50) phob2_cc_data_pane_g2

0x0001,

0xfd95,	// (0x000aa061) phob2_cc_data_pane_g_ParamLimits

0xfd95,	// (0x000aa061) phob2_cc_data_pane_g

0x879c,	// (0x000a2a68) phob2_cc_data_pane_t1_ParamLimits

0x879c,	// (0x000a2a68) phob2_cc_data_pane_t1

0x87ca,	// (0x000a2a96) phob2_cc_data_pane_t2_ParamLimits

0x87ca,	// (0x000a2a96) phob2_cc_data_pane_t2

0x87fc,	// (0x000a2ac8) phob2_cc_data_pane_t3_ParamLimits

0x87fc,	// (0x000a2ac8) phob2_cc_data_pane_t3

0x0002,

0xfd9a,	// (0x000aa066) phob2_cc_data_pane_t_ParamLimits

0xfd9a,	// (0x000aa066) phob2_cc_data_pane_t

0xc831,	// (0x000a6afd) phob2_cc_list_pane_ParamLimits

0xc831,	// (0x000a6afd) phob2_cc_list_pane

0xb250,	// (0x000a551c) scroll_pane_cp035_ParamLimits

0xb250,	// (0x000a551c) scroll_pane_cp035

0xa438,	// (0x000a4704) bg_button_pane_cp033

0x882c,	// (0x000a2af8) phob2_cc_button_pane_g1

0x8838,	// (0x000a2b04) phob2_cc_button_pane_t1

0x884d,	// (0x000a2b19) phob2_cc_button_pane_t2

0x0001,

0xfda1,	// (0x000aa06d) phob2_cc_button_pane_t

0x885f,	// (0x000a2b2b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x885f,	// (0x000a2b2b) list_double_large_graphic_phob2_cc_pane

0x8896,	// (0x000a2b62) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8896,	// (0x000a2b62) list_double_large_graphic_phob2_cc_pane_g1

0x88a2,	// (0x000a2b6e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x88a2,	// (0x000a2b6e) list_double_large_graphic_phob2_cc_pane_g2

0x88ae,	// (0x000a2b7a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x88ae,	// (0x000a2b7a) list_double_large_graphic_phob2_cc_pane_g3

0x88ba,	// (0x000a2b86) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x88ba,	// (0x000a2b86) list_double_large_graphic_phob2_cc_pane_g4

0x88c6,	// (0x000a2b92) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x88c6,	// (0x000a2b92) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfda6,	// (0x000aa072) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfda6,	// (0x000aa072) list_double_large_graphic_phob2_cc_pane_g

0x88d2,	// (0x000a2b9e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x88d2,	// (0x000a2b9e) list_double_large_graphic_phob2_cc_pane_t1

0x88fb,	// (0x000a2bc7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x88fb,	// (0x000a2bc7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdb1,	// (0x000aa07d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdb1,	// (0x000aa07d) list_double_large_graphic_phob2_cc_pane_t

0xc83d,	// (0x000a6b09) list_highlight_pane_cp025_ParamLimits

0xc83d,	// (0x000a6b09) list_highlight_pane_cp025

0xa438,	// (0x000a4704) bg_button_pane_cp033_ParamLimits

0x882c,	// (0x000a2af8) phob2_cc_button_pane_g1_ParamLimits

0x8838,	// (0x000a2b04) phob2_cc_button_pane_t1_ParamLimits

0x884d,	// (0x000a2b19) phob2_cc_button_pane_t2_ParamLimits

0xfda1,	// (0x000aa06d) phob2_cc_button_pane_t_ParamLimits

0x04f2,	// (0x0009a7be) popup_wgtman_window

0xab08,	// (0x000a4dd4) scroll_pane_cp038

0x8304,	// (0x000a25d0) wgtman_btn_pane_cp_01_ParamLimits

0x8304,	// (0x000a25d0) wgtman_btn_pane_cp_01

0xc84b,	// (0x000a6b17) wgtman_content_pane

0xc854,	// (0x000a6b20) wgtman_heading_pane

0x02c8,	// (0x0009a594) bg_heading_pane_cp02

0xc85d,	// (0x000a6b29) wgtman_heading_pane_g1

0xc865,	// (0x000a6b31) wgtman_heading_pane_t1

0xc873,	// (0x000a6b3f) scroll_pane_cp036

0xc87b,	// (0x000a6b47) wgtman_list_pane

0xc3e2,	// (0x000a66ae) wgtman_list_pane_t1_ParamLimits

0xc3e2,	// (0x000a66ae) wgtman_list_pane_t1

0xaa21,	// (0x000a4ced) cam4_grid_pane

0x5ec7,	// (0x000a0193) bg_button_pane_cp015_ParamLimits

0x5ede,	// (0x000a01aa) bg_button_pane_cp016_ParamLimits

0x5eea,	// (0x000a01b6) bg_button_pane_cp017_ParamLimits

0x5f45,	// (0x000a0211) popup_vitu2_query_window_g3_ParamLimits

0x5f45,	// (0x000a0211) popup_vitu2_query_window_g3

0x5fe8,	// (0x000a02b4) popup_vitu2_query_window_t6_ParamLimits

0x5fe8,	// (0x000a02b4) popup_vitu2_query_window_t6

0x6013,	// (0x000a02df) popup_vitu2_query_window_t7_ParamLimits

0x6013,	// (0x000a02df) popup_vitu2_query_window_t7

0xc3ce,	// (0x000a669a) cam4_grid_pane_g1

0xc3d7,	// (0x000a66a3) cam4_grid_pane_g2

0xc883,	// (0x000a6b4f) cam4_grid_pane_g3

0xc88c,	// (0x000a6b58) cam4_grid_pane_g4

0x0003,

0xfdb6,	// (0x000aa082) cam4_grid_pane_g

0x1193,	// (0x0009b45f) aid_placing_vt_slider_lsc_ParamLimits

0x1470,	// (0x0009b73c) vidtel_button_pane_ParamLimits

0x1470,	// (0x0009b73c) vidtel_button_pane

0x02c8,	// (0x0009a594) bg_button_pane_cp034

0xc897,	// (0x000a6b63) vidtel_button_pane_g1

0xc89f,	// (0x000a6b6b) vidtel_button_pane_t1

0xac31,	// (0x000a4efd) aid_size_vtel_slider_touch

0xb250,	// (0x000a551c) scroll_pane_cp039

0x6d1d,	// (0x000a0fe9) ncim_query_button_pane_cp01_ParamLimits

0x6d3c,	// (0x000a1008) ncimui_query_pane_g1_ParamLimits

0xa438,	// (0x000a4704) input_focus_pane_cp012_ParamLimits

0xb709,	// (0x000a59d5) ncim_query_entry_pane_t1_ParamLimits

0xb250,	// (0x000a551c) scroll_pane_cp039_ParamLimits

0x25de,	// (0x0009c8aa) navi_pane_bcale_mc_g1

0x25e6,	// (0x0009c8b2) navi_pane_bcale_mc_t1

0xbacb,	// (0x000a5d97) main_sp_fs_email_pane_g1

0xbad7,	// (0x000a5da3) main_sp_fs_email_pane_g2

0x0001,

0xfbcc,	// (0x000a9e98) main_sp_fs_email_pane_g

0xbcf0,	// (0x000a5fbc) list_single_cale_mrui_row_pane_g3_ParamLimits

0xbcf0,	// (0x000a5fbc) list_single_cale_mrui_row_pane_g3

0x7e57,	// (0x000a2123) list_single_recal_day_pane_g5_event_pane

0x7e6d,	// (0x000a2139) list_single_recal_day_pane_g7

0xc8b5,	// (0x000a6b81) list_recal_day_event_pane_cp01

0xc8be,	// (0x000a6b8a) list_recal_vselct_arw_lo_pane_cp01

0xc8c6,	// (0x000a6b92) list_recal_vselct_arw_up_pane_cp01

0xc8ce,	// (0x000a6b9a) list_recal_vselct_pane_cp01

0xac8f,	// (0x000a4f5b) list_recal_day_event_pane_cp01_g1

0x8924,	// (0x000a2bf0) list_recal_day_event_pane_cp01_t1

0x7e75,	// (0x000a2141) list_single_recal_day_pane_t1_ParamLimits

0x7e87,	// (0x000a2153) list_single_recal_day_pane_t2_ParamLimits

0xfc99,	// (0x000a9f65) list_single_recal_day_pane_t_ParamLimits

0xc07d,	// (0x000a6349) bg_notes_pane_ParamLimits

0xc172,	// (0x000a643e) list_notes_pane_ParamLimits

0x0748,	// (0x0009aa14) scroll_pane_cp06_ParamLimits

0xc194,	// (0x000a6460) main_notes_pane_ParamLimits

0xa438,	// (0x000a4704) main_welc_pane

0x897a,	// (0x000a2c46) main_welc_body_pane_ParamLimits

0x897a,	// (0x000a2c46) main_welc_body_pane

0x8999,	// (0x000a2c65) main_welc_opti_pane_ParamLimits

0x8999,	// (0x000a2c65) main_welc_opti_pane

0x8a0e,	// (0x000a2cda) main_welc_pane_t1_ParamLimits

0x8a0e,	// (0x000a2cda) main_welc_pane_t1

0x8c51,	// (0x000a2f1d) main_welc_body_row_pane_ParamLimits

0x8c51,	// (0x000a2f1d) main_welc_body_row_pane

0xc0ea,	// (0x000a63b6) main_welc_opti_row_pane_ParamLimits

0xc0ea,	// (0x000a63b6) main_welc_opti_row_pane

0xc8e0,	// (0x000a6bac) main_welc_opti_row_pane_g1

0x8c65,	// (0x000a2f31) main_welc_opti_row_pane_t1

0xc8e8,	// (0x000a6bb4) main_welc_body_row_pane_t1

0xc688,	// (0x000a6954) popup_notif_wgt_heading_pane

0xc6a2,	// (0x000a696e) aid_size_list_notif_wgt_del_ParamLimits

0xc6af,	// (0x000a697b) list_notif_wgt_row_pane_g1_ParamLimits

0xc6bb,	// (0x000a6987) list_notif_wgt_row_pane_g2_ParamLimits

0xc6ca,	// (0x000a6996) list_notif_wgt_row_pane_g3_ParamLimits

0xfd00,	// (0x000a9fcc) list_notif_wgt_row_pane_g_ParamLimits

0xc6d7,	// (0x000a69a3) list_notif_wgt_row_pane_t1_ParamLimits

0xc6ed,	// (0x000a69b9) list_notif_wgt_row_pane_t2_ParamLimits

0xc6ff,	// (0x000a69cb) list_notif_wgt_row_pane_t3_ParamLimits

0xfd07,	// (0x000a9fd3) list_notif_wgt_row_pane_t_ParamLimits

0x839f,	// (0x000a266b) listrow_wgtman_pane_g1_ParamLimits

0x83ac,	// (0x000a2678) listrow_wgtman_pane_g2_ParamLimits

0xfd37,	// (0x000aa003) listrow_wgtman_pane_g_ParamLimits

0x83ca,	// (0x000a2696) listrow_wgtman_pane_t1_ParamLimits

0x83e2,	// (0x000a26ae) listrow_wgtman_pane_t2_ParamLimits

0xfd3c,	// (0x000aa008) listrow_wgtman_pane_t_ParamLimits

0x8408,	// (0x000a26d4) wait_bar_pane_cp09_ParamLimits

0x02c8,	// (0x0009a594) bg_popup_heading_pane_cp02

0xc8f7,	// (0x000a6bc3) popup_notif_wgt_heading_pane_g1

0xc8ff,	// (0x000a6bcb) popup_notif_wgt_heading_pane_t1

0x02c8,	// (0x0009a594) main_vids_pane

0x02c8,	// (0x0009a594) vids_listscroll_pane

0x8c74,	// (0x000a2f40) scroll_pane_cp040

0x02c8,	// (0x0009a594) vids_list_pane

0x8c7f,	// (0x000a2f4b) vids_list_double_pane_ParamLimits

0x8c7f,	// (0x000a2f4b) vids_list_double_pane

0x8c92,	// (0x000a2f5e) vids_list_double_pane_g1

0x8c9b,	// (0x000a2f67) vids_list_double_pane_t1

0x8cab,	// (0x000a2f77) vids_list_double_pane_t2

0x0001,

0xfdd5,	// (0x000aa0a1) vids_list_double_pane_t

0xa145,	// (0x000a4411) main_ncimui_pane_ParamLimits

0x6b53,	// (0x000a0e1f) main_ncimui_pane_g1_ParamLimits

0x6b5f,	// (0x000a0e2b) main_ncimui_pane_g2_ParamLimits

0x6b5f,	// (0x000a0e2b) main_ncimui_pane_g2

0x0001,

0xfad2,	// (0x000a9d9e) main_ncimui_pane_g_ParamLimits

0xfad2,	// (0x000a9d9e) main_ncimui_pane_g

0x89b8,	// (0x000a2c84) main_welc_pane_g1_ParamLimits

0x89b8,	// (0x000a2c84) main_welc_pane_g1

0x89cd,	// (0x000a2c99) main_welc_pane_g2_ParamLimits

0x89cd,	// (0x000a2c99) main_welc_pane_g2

0x0003,

0xfdbf,	// (0x000aa08b) main_welc_pane_g_ParamLimits

0xfdbf,	// (0x000aa08b) main_welc_pane_g

0xc07d,	// (0x000a6349) listscroll_mce_pane_ParamLimits

0x26be,	// (0x0009c98a) wait_bar_pane_cp10

0xe4d1,	// (0x000a879d) main_cale_day_pane_ParamLimits

0xe4d1,	// (0x000a879d) main_cale_week_pane_ParamLimits

0xc07d,	// (0x000a6349) main_messa_pane_ParamLimits

0x438a,	// (0x0009e656) main_clock2_btn_pane_ParamLimits

0x438a,	// (0x0009e656) main_clock2_btn_pane

0xec8f,	// (0x000a8f5b) main_clock2_btn_pane_cp01_ParamLimits

0xec8f,	// (0x000a8f5b) main_clock2_btn_pane_cp01

0xbccf,	// (0x000a5f9b) list_cale_mrui_pane_ParamLimits

0xc735,	// (0x000a6a01) main_cf0_pane_g2

0x0001,

0xfd0e,	// (0x000a9fda) main_cf0_pane_g

0xa6c0,	// (0x000a498c) area_left_week_number_pane_ParamLimits

0xa6c0,	// (0x000a498c) area_top_day_name_pane_ParamLimits

0xa6c0,	// (0x000a498c) frame_month_view_pane_ParamLimits

0xa6c0,	// (0x000a498c) grid_month_view_pane_ParamLimits

0xa6b4,	// (0x000a4980) frm_month_g1_ParamLimits

0xa6b4,	// (0x000a4980) frm_month_g2_ParamLimits

0xa6b4,	// (0x000a4980) frm_month_g3_ParamLimits

0xa6b4,	// (0x000a4980) frm_month_g4_ParamLimits

0xa6b4,	// (0x000a4980) frm_month_g5_ParamLimits

0xa6b4,	// (0x000a4980) frm_month_g6_ParamLimits

0xa6b4,	// (0x000a4980) frm_month_g7_ParamLimits

0xa6b4,	// (0x000a4980) frm_month_g8_ParamLimits

0xa6b4,	// (0x000a4980) frm_month_g9_ParamLimits

0xa6b4,	// (0x000a4980) frm_month_g10_ParamLimits

0xa6b4,	// (0x000a4980) frm_month_g11_ParamLimits

0xa6b4,	// (0x000a4980) frm_month_g12_ParamLimits

0xa6b4,	// (0x000a4980) frm_month_g13_ParamLimits

0xa6b4,	// (0x000a4980) frm_month_g14_ParamLimits

0xa6b4,	// (0x000a4980) frm_month_g15_ParamLimits

0xa6b4,	// (0x000a4980) frm_month_g16_ParamLimits

0xfd66,	// (0x000aa032) frm_month_g_ParamLimits

0xc80f,	// (0x000a6adb) cell_top_day_name_pane_t1_ParamLimits

0xa6b4,	// (0x000a4980) cell_area_left_week_number_pane_g1_ParamLimits

0xc80f,	// (0x000a6adb) cell_area_left_week_number_pane_t1_ParamLimits

0xa6b4,	// (0x000a4980) cell_month_view_pane_g1_ParamLimits

0xc80f,	// (0x000a6adb) cell_month_view_pane_t1_ParamLimits

0xc075,	// (0x000a6341) main_clock2_btn_pane_g1

0xc90d,	// (0x000a6bd9) main_clock2_btn_pane_t1

0xa438,	// (0x000a4704) listscroll_cmail_pane_ParamLimits

0xbacb,	// (0x000a5d97) main_sp_fs_email_pane_g1_ParamLimits

0xbad7,	// (0x000a5da3) main_sp_fs_email_pane_g2_ParamLimits

0xfbcc,	// (0x000a9e98) main_sp_fs_email_pane_g_ParamLimits

0xc412,	// (0x000a66de) list_recal_day_pane_ParamLimits

0xc423,	// (0x000a66ef) mian_recal_day_pane_t1

0x75e4,	// (0x000a18b0) list_single_dyc_row_text_pane_t4_ParamLimits

0x75e4,	// (0x000a18b0) list_single_dyc_row_text_pane_t4

0x762d,	// (0x000a18f9) list_single_dyc_row_text_pane_t5_ParamLimits

0x762d,	// (0x000a18f9) list_single_dyc_row_text_pane_t5

0x76a3,	// (0x000a196f) list_single_dyc_row_text_pane_t6_ParamLimits

0x76a3,	// (0x000a196f) list_single_dyc_row_text_pane_t6

0x222d,	// (0x0009c4f9) aid_mgn_list_cale_time_pane

0xa145,	// (0x000a4411) main_gallery2_pane_ParamLimits

0xeca3,	// (0x000a8f6f) main_clock2_pane_cp01_t1

0xecf0,	// (0x000a8fbc) main_clock2_pane_cp01_t3

0x0001,

0xf6bc,	// (0x000a9988) main_clock2_pane_cp01_t

0x0bab,	// (0x0009ae77) cale_week_scroll_pane_g16_ParamLimits

0x0bab,	// (0x0009ae77) cale_week_scroll_pane_g16

0xc37f,	// (0x000a664b) vorec_slider_pane

0xc89f,	// (0x000a6b6b) vidtel_button_pane_t1_ParamLimits

0x7ef5,	// (0x000a21c1) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7ef5,	// (0x000a21c1) main_fs_bigclock_clock_pane_g2_ParamLimits

0x7ef5,	// (0x000a21c1) main_fs_bigclock_clock_pane_g3_ParamLimits

0x7ef5,	// (0x000a21c1) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcbc,	// (0x000a9f88) main_fs_bigclock_clock_pane_g_ParamLimits

0x7f0d,	// (0x000a21d9) main_fs_bigclock_clock_pane_t1_ParamLimits

0x7f25,	// (0x000a21f1) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcc5,	// (0x000a9f91) main_fs_bigclock_clock_pane_t_ParamLimits

0x3c1f,	// (0x0009deeb) main_mup3_lyrics_pane_ParamLimits

0x3c1f,	// (0x0009deeb) main_mup3_lyrics_pane

0x8cd3,	// (0x000a2f9f) main_mup3_lyrics_pane_t1_ParamLimits

0x8cd3,	// (0x000a2f9f) main_mup3_lyrics_pane_t1

0xa71b,	// (0x000a49e7) aid_main_mp4_pane_t1_area

0xa725,	// (0x000a49f1) aid_main_mp4_pane_t2_area

0xa7cf,	// (0x000a4a9b) main_mp4_pane_g7_ParamLimits

0xa7cf,	// (0x000a4a9b) main_mp4_pane_g7

0xa7db,	// (0x000a4aa7) main_mp4_pane_g8_ParamLimits

0xa7db,	// (0x000a4aa7) main_mp4_pane_g8

0x4d06,	// (0x0009efd2) aid_call6_pane_g1_size

0x887e,	// (0x000a2b4a) list_double_large_graphic_phob2_other_pane_ParamLimits

0x887e,	// (0x000a2b4a) list_double_large_graphic_phob2_other_pane

0xc295,	// (0x000a6561) list_double_large_graphic_phob2_other_pane_g1

0x02c8,	// (0x0009a594) list_highlight_pane_cp026

0xa438,	// (0x000a4704) main_welc_pane_ParamLimits

0x7397,	// (0x000a1663) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7397,	// (0x000a1663) main_sp_fs_ctrlbar_pane_g3

0x73b1,	// (0x000a167d) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x73b1,	// (0x000a167d) main_sp_fs_ctrlbar_pane_g4

0x73e5,	// (0x000a16b1) toolbar2_fixed_button_pane_cp01

0x73f0,	// (0x000a16bc) toolbar2_fixed_button_pane_cp02

0x73fd,	// (0x000a16c9) toolbar2_fixed_button_pane_cp03

0x8954,	// (0x000a2c20) list_welc_entry_pane_ParamLimits

0x8954,	// (0x000a2c20) list_welc_entry_pane

0x89e2,	// (0x000a2cae) main_welc_pane_g3_ParamLimits

0x89e2,	// (0x000a2cae) main_welc_pane_g3

0x8a30,	// (0x000a2cfc) main_welc_pane_t2_ParamLimits

0x8a30,	// (0x000a2cfc) main_welc_pane_t2

0x8a53,	// (0x000a2d1f) main_welc_pane_t3_ParamLimits

0x8a53,	// (0x000a2d1f) main_welc_pane_t3

0x0005,

0xfdc8,	// (0x000aa094) main_welc_pane_t_ParamLimits

0xfdc8,	// (0x000aa094) main_welc_pane_t

0x8ba0,	// (0x000a2e6c) welc_button_pane_ParamLimits

0x8ba0,	// (0x000a2e6c) welc_button_pane

0x8c39,	// (0x000a2f05) welc_service_logo_pane_ParamLimits

0x8c39,	// (0x000a2f05) welc_service_logo_pane

0x8cee,	// (0x000a2fba) list_single_welc_entry_pane_ParamLimits

0x8cee,	// (0x000a2fba) list_single_welc_entry_pane

0x8cff,	// (0x000a2fcb) list_single_welc_entry_pane_g1

0x8d07,	// (0x000a2fd3) list_single_welc_entry_pane_t1

0x8d15,	// (0x000a2fe1) list_single_welc_entry_pane_t2

0x0001,

0xfdda,	// (0x000aa0a6) list_single_welc_entry_pane_t

0x02c8,	// (0x0009a594) bg_button_pane_cp035

0xc91b,	// (0x000a6be7) welc_button_pane_t1

0x8d23,	// (0x000a2fef) welc_service_logo_pane_g1

0x8d2c,	// (0x000a2ff8) welc_service_logo_pane_g2

0x0001,

0xfddf,	// (0x000aa0ab) welc_service_logo_pane_g

0xa153,	// (0x000a441f) main_int_radio_pane

0xb5a7,	// (0x000a5873) list_single_fs_dyc_pane_g1

0x86f6,	// (0x000a29c2) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x86f6,	// (0x000a29c2) list_double_large_graphic_phob2_pane_g3

0x8708,	// (0x000a29d4) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8708,	// (0x000a29d4) list_double_large_graphic_phob2_pane_g4

0x8d35,	// (0x000a3001) main_int_radio1_pane_ParamLimits

0x8d35,	// (0x000a3001) main_int_radio1_pane

0xc929,	// (0x000a6bf5) find_pane_cp02

0x8d52,	// (0x000a301e) input_focus_pane_cp12_ParamLimits

0x8d52,	// (0x000a301e) input_focus_pane_cp12

0x8d62,	// (0x000a302e) input_focus_pane_cp13_ParamLimits

0x8d62,	// (0x000a302e) input_focus_pane_cp13

0x8d76,	// (0x000a3042) input_focus_pane_cp14_ParamLimits

0x8d76,	// (0x000a3042) input_focus_pane_cp14

0xc932,	// (0x000a6bfe) int_radio1_listscroll_pane

0x8d8a,	// (0x000a3056) main_int_radio1_pane_g1_ParamLimits

0x8d8a,	// (0x000a3056) main_int_radio1_pane_g1

0x8da0,	// (0x000a306c) main_int_radio1_pane_t1_ParamLimits

0x8da0,	// (0x000a306c) main_int_radio1_pane_t1

0x8db9,	// (0x000a3085) main_int_radio1_pane_t2_ParamLimits

0x8db9,	// (0x000a3085) main_int_radio1_pane_t2

0x8dd4,	// (0x000a30a0) main_int_radio1_pane_t3_ParamLimits

0x8dd4,	// (0x000a30a0) main_int_radio1_pane_t3

0x8def,	// (0x000a30bb) main_int_radio1_pane_t4_ParamLimits

0x8def,	// (0x000a30bb) main_int_radio1_pane_t4

0xc93c,	// (0x000a6c08) main_int_radio1_pane_t5_ParamLimits

0xc93c,	// (0x000a6c08) main_int_radio1_pane_t5

0x8e01,	// (0x000a30cd) main_int_radio1_pane_t6_ParamLimits

0x8e01,	// (0x000a30cd) main_int_radio1_pane_t6

0x8e16,	// (0x000a30e2) main_int_radio1_pane_t7_ParamLimits

0x8e16,	// (0x000a30e2) main_int_radio1_pane_t7

0x8e2b,	// (0x000a30f7) main_int_radio1_pane_t8_ParamLimits

0x8e2b,	// (0x000a30f7) main_int_radio1_pane_t8

0x8e48,	// (0x000a3114) main_int_radio1_pane_t9_ParamLimits

0x8e48,	// (0x000a3114) main_int_radio1_pane_t9

0x8e5a,	// (0x000a3126) main_int_radio1_pane_t10_ParamLimits

0x8e5a,	// (0x000a3126) main_int_radio1_pane_t10

0x8e80,	// (0x000a314c) main_int_radio1_pane_t11_ParamLimits

0x8e80,	// (0x000a314c) main_int_radio1_pane_t11

0x8ea6,	// (0x000a3172) main_int_radio1_pane_t12_ParamLimits

0x8ea6,	// (0x000a3172) main_int_radio1_pane_t12

0x000b,

0xfde4,	// (0x000aa0b0) main_int_radio1_pane_t_ParamLimits

0xfde4,	// (0x000aa0b0) main_int_radio1_pane_t

0xc821,	// (0x000a6aed) int_radio_list_pane

0xc829,	// (0x000a6af5) scroll_pane_cp037

0xc94e,	// (0x000a6c1a) list_double_large_graphic_int_radio_pane_ParamLimits

0xc94e,	// (0x000a6c1a) list_double_large_graphic_int_radio_pane

0xc962,	// (0x000a6c2e) list_double_large_graphic_int_radio_pane_g1

0x8eb8,	// (0x000a3184) list_double_large_graphic_int_radio_pane_t1

0x8ec6,	// (0x000a3192) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfdfd,	// (0x000aa0c9) list_double_large_graphic_int_radio_pane_t

0x02c8,	// (0x0009a594) list_highlight_pane_cp027

0xc8d8,	// (0x000a6ba4) main_button_pane_4

0x89f6,	// (0x000a2cc2) main_welc_pane_g4_ParamLimits

0x89f6,	// (0x000a2cc2) main_welc_pane_g4

0x8a76,	// (0x000a2d42) main_welc_pane_t4_ParamLimits

0x8a76,	// (0x000a2d42) main_welc_pane_t4

0x8a99,	// (0x000a2d65) main_welc_pane_t5_ParamLimits

0x8a99,	// (0x000a2d65) main_welc_pane_t5

0x8ad8,	// (0x000a2da4) main_welc_pane_t6_ParamLimits

0x8ad8,	// (0x000a2da4) main_welc_pane_t6

0x8bb4,	// (0x000a2e80) welc_button_pane_2_ParamLimits

0x8bb4,	// (0x000a2e80) welc_button_pane_2

0x8bdb,	// (0x000a2ea7) welc_button_pane_3_ParamLimits

0x8bdb,	// (0x000a2ea7) welc_button_pane_3

0xc8d8,	// (0x000a6ba4) welc_button_pane_4

0x8c05,	// (0x000a2ed1) welc_button_pane_5_ParamLimits

0x8c05,	// (0x000a2ed1) welc_button_pane_5

0x02f6,	// (0x0009a5c2) main_popup_welc_pane

0xc983,	// (0x000a6c4f) main_welc_sk_g3

0xc98d,	// (0x000a6c59) main_welc_sk_g4

0xc997,	// (0x000a6c63) main_welc_sk_t3

0x8ed4,	// (0x000a31a0) main_welc_sk_t4

0x8ee4,	// (0x000a31b0) popup_welc_pane_t4

0x8ef2,	// (0x000a31be) popup_welc_pane_t5

0x8f00,	// (0x000a31cc) popup_welc_pane_t6

0xa153,	// (0x000a441f) main_acti_pane

0x02c8,	// (0x0009a594) main_sso_pane

0x8f42,	// (0x000a320e) sso_body_pane_ParamLimits

0x8f42,	// (0x000a320e) sso_body_pane

0x8f65,	// (0x000a3231) sso_logo_pane_ParamLimits

0x8f65,	// (0x000a3231) sso_logo_pane

0x8fa3,	// (0x000a326f) sso_sk_pane_ParamLimits

0x8fa3,	// (0x000a326f) sso_sk_pane

0x8fb5,	// (0x000a3281) main_sso_logo_pane_g1

0x8fbe,	// (0x000a328a) sso_sk_pane_t1_ParamLimits

0x8fbe,	// (0x000a328a) sso_sk_pane_t1

0x8fd8,	// (0x000a32a4) sso_sk_pane_t2_ParamLimits

0x8fd8,	// (0x000a32a4) sso_sk_pane_t2

0x0001,

0xfe02,	// (0x000aa0ce) sso_sk_pane_t_ParamLimits

0xfe02,	// (0x000aa0ce) sso_sk_pane_t

0x8fee,	// (0x000a32ba) aid_sso_gap

0x8ff7,	// (0x000a32c3) aid_sso_txt1

0x9001,	// (0x000a32cd) aid_sso_txt2

0x900b,	// (0x000a32d7) aid_sso_txt3

0x0002,

0xfe07,	// (0x000aa0d3) aid_sso_txt

0x9015,	// (0x000a32e1) aid_sso_widget

0x9073,	// (0x000a333f) sso_btn_pane_ParamLimits

0x9073,	// (0x000a333f) sso_btn_pane

0x9107,	// (0x000a33d3) sso_option_pane_ParamLimits

0x9107,	// (0x000a33d3) sso_option_pane

0x91bb,	// (0x000a3487) sso_query_pane_ParamLimits

0x91bb,	// (0x000a3487) sso_query_pane

0x9211,	// (0x000a34dd) sso_query_pane_cp01_ParamLimits

0x9211,	// (0x000a34dd) sso_query_pane_cp01

0x926f,	// (0x000a353b) sso_t_hdr_pane_ParamLimits

0x926f,	// (0x000a353b) sso_t_hdr_pane

0x9299,	// (0x000a3565) sso_t_nml_pane_ParamLimits

0x9299,	// (0x000a3565) sso_t_nml_pane

0x92ef,	// (0x000a35bb) sso_t_sub_pane

0x8f77,	// (0x000a3243) sso_popup_window_ParamLimits

0x8f77,	// (0x000a3243) sso_popup_window

0x901f,	// (0x000a32eb) sso_apps_pane_ParamLimits

0x901f,	// (0x000a32eb) sso_apps_pane

0x9049,	// (0x000a3315) sso_body_pane_g1

0x9053,	// (0x000a331f) sso_body_pane_t1

0x9063,	// (0x000a332f) sso_body_pane_t2

0x0001,

0xfe0e,	// (0x000aa0da) sso_body_pane_t

0x90bf,	// (0x000a338b) sso_btn_pane_cp01_ParamLimits

0x90bf,	// (0x000a338b) sso_btn_pane_cp01

0x918f,	// (0x000a345b) sso_prog_pane_ParamLimits

0x918f,	// (0x000a345b) sso_prog_pane

0x9320,	// (0x000a35ec) sso_t_hdr_pane_t1_ParamLimits

0x9320,	// (0x000a35ec) sso_t_hdr_pane_t1

0x9333,	// (0x000a35ff) input_focus_pane_cp10_ParamLimits

0x9333,	// (0x000a35ff) input_focus_pane_cp10

0x9347,	// (0x000a3613) sso_query_pane_t1_ParamLimits

0x9347,	// (0x000a3613) sso_query_pane_t1

0x935a,	// (0x000a3626) sso_query_pane_t2_ParamLimits

0x935a,	// (0x000a3626) sso_query_pane_t2

0x9374,	// (0x000a3640) sso_query_pane_t3_ParamLimits

0x9374,	// (0x000a3640) sso_query_pane_t3

0x939e,	// (0x000a366a) sso_query_pane_t4_ParamLimits

0x939e,	// (0x000a366a) sso_query_pane_t4

0x0003,

0xfe13,	// (0x000aa0df) sso_query_pane_t_ParamLimits

0xfe13,	// (0x000aa0df) sso_query_pane_t

0x93c2,	// (0x000a368e) bg_button_pane_cp22

0x93cb,	// (0x000a3697) sso_btn_pane_t1

0x93da,	// (0x000a36a6) sso_t_nml_pane_t1_ParamLimits

0x93da,	// (0x000a36a6) sso_t_nml_pane_t1

0x93f5,	// (0x000a36c1) sso_option_row_pane_ParamLimits

0x93f5,	// (0x000a36c1) sso_option_row_pane

0x9402,	// (0x000a36ce) sso_t_sub_pane_t1_ParamLimits

0x9402,	// (0x000a36ce) sso_t_sub_pane_t1

0xa438,	// (0x000a4704) bg_popup_window_pane_cp11_ParamLimits

0xa438,	// (0x000a4704) bg_popup_window_pane_cp11

0x941f,	// (0x000a36eb) popup_sk_window_cp01_ParamLimits

0x941f,	// (0x000a36eb) popup_sk_window_cp01

0x942c,	// (0x000a36f8) sso_popup_body_pane_ParamLimits

0x942c,	// (0x000a36f8) sso_popup_body_pane

0x9439,	// (0x000a3705) scroll_pane_cp21_ParamLimits

0x9439,	// (0x000a3705) scroll_pane_cp21

0x9446,	// (0x000a3712) sso_popup_body_t_pane_ParamLimits

0x9446,	// (0x000a3712) sso_popup_body_t_pane

0x9453,	// (0x000a371f) sso_popup_body_t_hdr_pane_ParamLimits

0x9453,	// (0x000a371f) sso_popup_body_t_hdr_pane

0x9465,	// (0x000a3731) sso_popup_body_t_nml_pane_ParamLimits

0x9465,	// (0x000a3731) sso_popup_body_t_nml_pane

0x948c,	// (0x000a3758) sso_popup_body_t_sub_pane_ParamLimits

0x948c,	// (0x000a3758) sso_popup_body_t_sub_pane

0x94af,	// (0x000a377b) sso_popup_body_t_hdr_pane_t1

0x94bf,	// (0x000a378b) sso_popup_body_t_nml_pane_t1_ParamLimits

0x94bf,	// (0x000a378b) sso_popup_body_t_nml_pane_t1

0x94f7,	// (0x000a37c3) sso_popup_body_t_sub_pane_t1_ParamLimits

0x94f7,	// (0x000a37c3) sso_popup_body_t_sub_pane_t1

0xc136,	// (0x000a6402) sso_prog_pane_g1

0x951c,	// (0x000a37e8) sso_apps_pane_comp1_ParamLimits

0x951c,	// (0x000a37e8) sso_apps_pane_comp1

0x9536,	// (0x000a3802) sso_apps_pane_comp1_g1

0x953e,	// (0x000a380a) sso_apps_pane_comp1_t1

0x955a,	// (0x000a3826) sso_option_row_pane_g1

0x9572,	// (0x000a383e) sso_option_row_pane_t1

0xbb53,	// (0x000a5e1f) list_cmail_pane_ParamLimits

0x02c8,	// (0x0009a594) main_call7_pane

0x8932,	// (0x000a2bfe) bg_welc_area_ParamLimits

0x8932,	// (0x000a2bfe) bg_welc_area

0x8b1b,	// (0x000a2de7) sso_t_hdr_pane_a_t1_ParamLimits

0x8b1b,	// (0x000a2de7) sso_t_hdr_pane_a_t1

0x8b36,	// (0x000a2e02) sso_t_nml_pane_a_t1_ParamLimits

0x8b36,	// (0x000a2e02) sso_t_nml_pane_a_t1

0x8b65,	// (0x000a2e31) sso_t_sub_pane_a_t1_ParamLimits

0x8b65,	// (0x000a2e31) sso_t_sub_pane_a_t1

0x8c20,	// (0x000a2eec) welc_button_pane_cp01_ParamLimits

0x8c20,	// (0x000a2eec) welc_button_pane_cp01

0xc96b,	// (0x000a6c37) sso_btn_pane_t1_copy1

0xc97a,	// (0x000a6c46) welc_button_pane_2_comp1

0x8f10,	// (0x000a31dc) sso_t_hdr_pane_p_t1

0x8f20,	// (0x000a31ec) sso_t_nml_pane_p_t1

0x8f30,	// (0x000a31fc) sso_t_sub_pane_p_t1

0x02c8,	// (0x0009a594) main_att_pane

0x02c8,	// (0x0009a594) main_vod_pane

0x92ef,	// (0x000a35bb) sso_t_sub_pane_ParamLimits

0x954c,	// (0x000a3818) input_focus_pane_cp10_t1

0x9572,	// (0x000a383e) sso_option_row_pane_t1_ParamLimits

0x958e,	// (0x000a385a) main_att_body_pane_ParamLimits

0x958e,	// (0x000a385a) main_att_body_pane

0x95a4,	// (0x000a3870) att_btn_emg_pane_ParamLimits

0x95a4,	// (0x000a3870) att_btn_emg_pane

0x95c3,	// (0x000a388f) att_btn_pane_ParamLimits

0x95c3,	// (0x000a388f) att_btn_pane

0x9636,	// (0x000a3902) att_btn_pane_cp01_ParamLimits

0x9636,	// (0x000a3902) att_btn_pane_cp01

0x9674,	// (0x000a3940) att_li_srv_pane_ParamLimits

0x9674,	// (0x000a3940) att_li_srv_pane

0x9691,	// (0x000a395d) att_opt_pane_ParamLimits

0x9691,	// (0x000a395d) att_opt_pane

0x96db,	// (0x000a39a7) att_query_pane_ParamLimits

0x96db,	// (0x000a39a7) att_query_pane

0x9754,	// (0x000a3a20) att_query_pane_cp01_ParamLimits

0x9754,	// (0x000a3a20) att_query_pane_cp01

0x97a0,	// (0x000a3a6c) att_t_hdr_pane_ParamLimits

0x97a0,	// (0x000a3a6c) att_t_hdr_pane

0x9810,	// (0x000a3adc) att_t_nml_pane_ParamLimits

0x9810,	// (0x000a3adc) att_t_nml_pane

0x988e,	// (0x000a3b5a) att_t_nml_pane_cp01_ParamLimits

0x988e,	// (0x000a3b5a) att_t_nml_pane_cp01

0x98bc,	// (0x000a3b88) att_t_nmlb_pane_ParamLimits

0x98bc,	// (0x000a3b88) att_t_nmlb_pane

0x992b,	// (0x000a3bf7) att_term_pane_ParamLimits

0x992b,	// (0x000a3bf7) att_term_pane

0x997b,	// (0x000a3c47) main_att_body_pane_g1_ParamLimits

0x997b,	// (0x000a3c47) main_att_body_pane_g1

0x99a7,	// (0x000a3c73) att_t_hdr_pane_t1_ParamLimits

0x99a7,	// (0x000a3c73) att_t_hdr_pane_t1

0x99ba,	// (0x000a3c86) att_t_nml_pane_t1_ParamLimits

0x99ba,	// (0x000a3c86) att_t_nml_pane_t1

0x93cb,	// (0x000a3697) att_btn_pane_t1

0x93c2,	// (0x000a368e) bg_button_pane_cp23

0x99df,	// (0x000a3cab) att_li_srv_row_pane_ParamLimits

0x99df,	// (0x000a3cab) att_li_srv_row_pane

0x99ef,	// (0x000a3cbb) att_t_nmlb_pane_t1_ParamLimits

0x99ef,	// (0x000a3cbb) att_t_nmlb_pane_t1

0x9a0b,	// (0x000a3cd7) att_query_pane_t1

0x9a1a,	// (0x000a3ce6) att_query_pane_t2

0x9a29,	// (0x000a3cf5) att_query_pane_t3

0x0002,

0xfe21,	// (0x000aa0ed) att_query_pane_t

0x9a38,	// (0x000a3d04) input_focus_pane_cp11

0x9a41,	// (0x000a3d0d) att_term_pane_t1_ParamLimits

0x9a41,	// (0x000a3d0d) att_term_pane_t1

0x02c8,	// (0x0009a594) att_opt_row_pane

0x9a5e,	// (0x000a3d2a) att_opt_row_pane_g1

0x9a66,	// (0x000a3d32) att_opt_row_pane_t1_ParamLimits

0x9a66,	// (0x000a3d32) att_opt_row_pane_t1

0x9a7f,	// (0x000a3d4b) att_li_srv_row_pane_g1

0x9a87,	// (0x000a3d53) att_li_srv_row_pane_t1_ParamLimits

0x9a87,	// (0x000a3d53) att_li_srv_row_pane_t1

0x9a87,	// (0x000a3d53) att_li_srv_row_pane_t2_ParamLimits

0x9a87,	// (0x000a3d53) att_li_srv_row_pane_t2

0x0001,

0xfe28,	// (0x000aa0f4) att_li_srv_row_pane_t_ParamLimits

0xfe28,	// (0x000aa0f4) att_li_srv_row_pane_t

0x9a9c,	// (0x000a3d68) att_btn_close_pane_g1

0x02c8,	// (0x0009a594) bg_button_pane_cp24

0x9aa4,	// (0x000a3d70) main_vod_body_pane_ParamLimits

0x9aa4,	// (0x000a3d70) main_vod_body_pane

0x9ab8,	// (0x000a3d84) main_vod_body_pane_g1_ParamLimits

0x9ab8,	// (0x000a3d84) main_vod_body_pane_g1

0x9aec,	// (0x000a3db8) scroll_pane_cp24_ParamLimits

0x9aec,	// (0x000a3db8) scroll_pane_cp24

0x9b3a,	// (0x000a3e06) vod_btn_pane_ParamLimits

0x9b3a,	// (0x000a3e06) vod_btn_pane

0x9b80,	// (0x000a3e4c) vod_det_pane_ParamLimits

0x9b80,	// (0x000a3e4c) vod_det_pane

0x9bb4,	// (0x000a3e80) vod_logo_g1_ParamLimits

0x9bb4,	// (0x000a3e80) vod_logo_g1

0x9bf2,	// (0x000a3ebe) vod_opt_pane_ParamLimits

0x9bf2,	// (0x000a3ebe) vod_opt_pane

0x9c25,	// (0x000a3ef1) vod_opt_pane_cp01_ParamLimits

0x9c25,	// (0x000a3ef1) vod_opt_pane_cp01

0x9c51,	// (0x000a3f1d) vod_query_pane_ParamLimits

0x9c51,	// (0x000a3f1d) vod_query_pane

0x9c7c,	// (0x000a3f48) vod_query_pane_cp01_ParamLimits

0x9c7c,	// (0x000a3f48) vod_query_pane_cp01

0x9c88,	// (0x000a3f54) vod_t_nml_pane_ParamLimits

0x9c88,	// (0x000a3f54) vod_t_nml_pane

0x9d39,	// (0x000a4005) vod_t_nml_pane_cp01_ParamLimits

0x9d39,	// (0x000a4005) vod_t_nml_pane_cp01

0x9d75,	// (0x000a4041) vod_t_sub_pane_ParamLimits

0x9d75,	// (0x000a4041) vod_t_sub_pane

0x9da6,	// (0x000a4072) vod_t_sub_pane_cp01_ParamLimits

0x9da6,	// (0x000a4072) vod_t_sub_pane_cp01

0x9a38,	// (0x000a3d04) vod_query_field_pane

0x9dd2,	// (0x000a409e) vod_query_pane_t1

0x9de1,	// (0x000a40ad) bg_button_pane_cp25

0x93cb,	// (0x000a3697) sso_btn_pane_t1_copy2

0x9dea,	// (0x000a40b6) vod_t_nml_pane_t1_ParamLimits

0x9dea,	// (0x000a40b6) vod_t_nml_pane_t1

0x9e1f,	// (0x000a40eb) vod_opt_row_pane_ParamLimits

0x9e1f,	// (0x000a40eb) vod_opt_row_pane

0x9e31,	// (0x000a40fd) vod_t_sub_pane_t1_ParamLimits

0x9e31,	// (0x000a40fd) vod_t_sub_pane_t1

0x9e4a,	// (0x000a4116) vod_det_cell_pane_ParamLimits

0x9e4a,	// (0x000a4116) vod_det_cell_pane

0x02c8,	// (0x0009a594) input_focus_pane_cp15

0x9e5b,	// (0x000a4127) vod_query_field_pane_t1

0x9e69,	// (0x000a4135) vod_opt_row_pane_g1_ParamLimits

0x9e69,	// (0x000a4135) vod_opt_row_pane_g1

0x9e75,	// (0x000a4141) vod_opt_row_pane_t1_ParamLimits

0x9e75,	// (0x000a4141) vod_opt_row_pane_t1

0x9e97,	// (0x000a4163) vod_det_cell_field_pane

0x9ea0,	// (0x000a416c) vod_det_cell_pane_g1

0x9ea8,	// (0x000a4174) vod_det_cell_pane_t1

0x02c8,	// (0x0009a594) input_focus_pane_cp16

0x9eb7,	// (0x000a4183) vod_det_cell_field_pane_t1

0x9ec5,	// (0x000a4191) call7_btn_grp_pane_ParamLimits

0x9ec5,	// (0x000a4191) call7_btn_grp_pane

0xa438,	// (0x000a4704) call7_bubble_pane_ParamLimits

0xa438,	// (0x000a4704) call7_bubble_pane

0x9edf,	// (0x000a41ab) cell_call7_btn_pane_ParamLimits

0x9edf,	// (0x000a41ab) cell_call7_btn_pane

0x9ef3,	// (0x000a41bf) call7_pane_g1_ParamLimits

0x9ef3,	// (0x000a41bf) call7_pane_g1

0x9f05,	// (0x000a41d1) call7_windows_conf_pane_ParamLimits

0x9f05,	// (0x000a41d1) call7_windows_conf_pane

0x9f23,	// (0x000a41ef) popup_call7_1st_window_ParamLimits

0x9f23,	// (0x000a41ef) popup_call7_1st_window

0x9f35,	// (0x000a4201) popup_call7_2nd_window_ParamLimits

0x9f35,	// (0x000a4201) popup_call7_2nd_window

0x9f47,	// (0x000a4213) popup_call7_3rd_window_ParamLimits

0x9f47,	// (0x000a4213) popup_call7_3rd_window

0x02c8,	// (0x0009a594) bg_button_pane_cp26

0xc7ed,	// (0x000a6ab9) cell_call7_btn_pane_g1

0x9f59,	// (0x000a4225) cell_call7_btn_pane_t1

0x02c8,	// (0x0009a594) bg_popup_window_pane_cp12

0x9f68,	// (0x000a4234) popup_call7_1st_window_g1

0x9f70,	// (0x000a423c) popup_call7_1st_window_g2

0x9f78,	// (0x000a4244) popup_call7_1st_window_g3

0x0002,

0xfe2d,	// (0x000aa0f9) popup_call7_1st_window_g

0x9f80,	// (0x000a424c) popup_call7_1st_window_t1

0x9f8f,	// (0x000a425b) popup_call7_1st_window_t2

0x9f9f,	// (0x000a426b) popup_call7_1st_window_t3

0x0002,

0xfe34,	// (0x000aa100) popup_call7_1st_window_t

0x02c8,	// (0x0009a594) bg_popup_window_pane_cp13

0x9faf,	// (0x000a427b) popup_call7_2nd_window_g1

0x9fb7,	// (0x000a4283) popup_call7_2nd_window_g2

0x9fbf,	// (0x000a428b) popup_call7_2nd_window_g3

0x0002,

0xfe3b,	// (0x000aa107) popup_call7_2nd_window_g

0x9fc7,	// (0x000a4293) popup_call7_2nd_window_t1

0x02c8,	// (0x0009a594) bg_popup_window_pane_cp14

0x9fd6,	// (0x000a42a2) call7_list_conf_pane

0x9fde,	// (0x000a42aa) call7_list_conf_row_pane_ParamLimits

0x9fde,	// (0x000a42aa) call7_list_conf_row_pane

0x9ff1,	// (0x000a42bd) call7_list_conf_row_pane_g1

0x9ff9,	// (0x000a42c5) call7_list_conf_row_pane_g2

0x0001,

0xfe42,	// (0x000aa10e) call7_list_conf_row_pane_g

0xa001,	// (0x000a42cd) call7_list_conf_row_pane_t1

0x02c8,	// (0x0009a594) list_highlight_pane_cp22

0x915b,	// (0x000a3427) sso_option_pane_cp01_ParamLimits

0x915b,	// (0x000a3427) sso_option_pane_cp01

0xc07d,	// (0x000a6349) msg_header_pane_ParamLimits

0xd3ce,	// (0x000a769a) bg_button_pane_cp01_ParamLimits

0xd3e2,	// (0x000a76ae) input_focus_pane_cp07_ParamLimits

0x744e,	// (0x000a171a) popup_email_progress_window

0xc136,	// (0x000a6402) popup_email_progress_window_g1

0xa00f,	// (0x000a42db) popup_email_progress_window_g2

0x0001,

0xfe47,	// (0x000aa113) popup_email_progress_window_g

0xa017,	// (0x000a42e3) popup_email_progress_window_t1

0x02c8,	// (0x0009a594) cmail_conv_pane

0x76f6,	// (0x000a19c2) list_single_dyc_row_pane_g5_ParamLimits

0x76f6,	// (0x000a19c2) list_single_dyc_row_pane_g5

0x7702,	// (0x000a19ce) list_single_dyc_row_pane_g6_ParamLimits

0x7702,	// (0x000a19ce) list_single_dyc_row_pane_g6

0x771a,	// (0x000a19e6) list_single_dyc_row_pane_g7_ParamLimits

0x771a,	// (0x000a19e6) list_single_dyc_row_pane_g7

0x896e,	// (0x000a2c3a) main_button_pane_5_ParamLimits

0x896e,	// (0x000a2c3a) main_button_pane_5

0x8f59,	// (0x000a3225) sso_emg_call_btn_pane_ParamLimits

0x8f59,	// (0x000a3225) sso_emg_call_btn_pane

0x9304,	// (0x000a35d0) sso_t_sub_pane_cp01_ParamLimits

0x9304,	// (0x000a35d0) sso_t_sub_pane_cp01

0x955a,	// (0x000a3826) sso_option_row_pane_g1_ParamLimits

0x9566,	// (0x000a3832) sso_option_row_pane_g2_ParamLimits

0x9566,	// (0x000a3832) sso_option_row_pane_g2

0x0001,

0xfe1c,	// (0x000aa0e8) sso_option_row_pane_g_ParamLimits

0xfe1c,	// (0x000aa0e8) sso_option_row_pane_g

0x9652,	// (0x000a391e) att_btn_pane_cp02_ParamLimits

0x9652,	// (0x000a391e) att_btn_pane_cp02

0xa025,	// (0x000a42f1) cmail_conv_hdr_pane

0xa02e,	// (0x000a42fa) list_cmail_conv_pane

0xa038,	// (0x000a4304) scroll_pane_cp31

0xa040,	// (0x000a430c) cmail_conv_hdr_pane_t1

0xa04e,	// (0x000a431a) cmail_conv_hdr_pane_t2

0x0001,

0xfe4c,	// (0x000aa118) cmail_conv_hdr_pane_t

0xa05c,	// (0x000a4328) bubble_cmail_conv_pane_ParamLimits

0xa05c,	// (0x000a4328) bubble_cmail_conv_pane

0xbc75,	// (0x000a5f41) aid_size_colorization_pane

0xc37f,	// (0x000a664b) bg_bubble_cmail_conv_pane

0xa078,	// (0x000a4344) body_bubble_cmail_conv_pane

0xce60,	// (0x000a712c) bubble_cmail_conv_pane_g1

0xce68,	// (0x000a7134) bubble_cmail_conv_pane_g2

0xce70,	// (0x000a713c) bubble_cmail_conv_pane_g3

0x0002,

0xf24d,	// (0x000a9519) bubble_cmail_conv_pane_g

0xa080,	// (0x000a434c) bubble_cmail_conv_pane_t1

0xa08e,	// (0x000a435a) bg_bubble_cmail_conv_pane_g1

0xa097,	// (0x000a4363) bg_bubble_cmail_conv_pane_g2

0xa0a0,	// (0x000a436c) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe51,	// (0x000aa11d) bg_bubble_cmail_conv_pane_g

0xa0a9,	// (0x000a4375) body_bubble_cmail_conv_pane_t1_ParamLimits

0xa0a9,	// (0x000a4375) body_bubble_cmail_conv_pane_t1

0xa0c0,	// (0x000a438c) body_bubble_cmail_conv_pane_t2_ParamLimits

0xa0c0,	// (0x000a438c) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe58,	// (0x000aa124) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe58,	// (0x000aa124) body_bubble_cmail_conv_pane_t

0xa438,	// (0x000a4704) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
