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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00083df0 };

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
0x45b2,	// (0x000883a2) Screen

0x45be,	// (0x000883ae) application_window

0x4612,	// (0x00088402) area_bottom_pane_ParamLimits

0x4612,	// (0x00088402) area_bottom_pane

0x466c,	// (0x0008845c) area_top_pane_ParamLimits

0x466c,	// (0x0008845c) area_top_pane

0x46d0,	// (0x000884c0) call_video_uplink_pane_ParamLimits

0x46d0,	// (0x000884c0) call_video_uplink_pane

0x470d,	// (0x000884fd) main_pane_ParamLimits

0x470d,	// (0x000884fd) main_pane

0xe113,	// (0x00091f03) context_pane

0x7888,	// (0x0008b678) navi_pane

0x78ac,	// (0x0008b69c) popup_cale_events_window_ParamLimits

0x78ac,	// (0x0008b69c) popup_cale_events_window

0xe126,	// (0x00091f16) popup_mup_playback_window

0x78c4,	// (0x0008b6b4) signal_pane

0xea61,	// (0x00092851) main_browser_pane

0xccfa,	// (0x00090aea) main_burst_pane

0x76e9,	// (0x0008b4d9) main_calc_pane

0xccfa,	// (0x00090aea) main_cale_day_pane

0xea61,	// (0x00092851) main_cale_month_pane

0xccfa,	// (0x00090aea) main_cale_week_pane

0xccfa,	// (0x00090aea) main_call_pane

0xe733,	// (0x00092523) main_call_poc_pane

0xccfa,	// (0x00090aea) main_camera_pane

0xccfa,	// (0x00090aea) main_chi_dic_pane

0xcb9c,	// (0x0009098c) main_clock_pane

0xe733,	// (0x00092523) main_fmradio_pane

0xccfa,	// (0x00090aea) main_graph_messa_pane

0xe733,	// (0x00092523) main_help_pane

0xea61,	// (0x00092851) main_im_pane

0xe98e,	// (0x0009277e) main_image_pane_ParamLimits

0xe98e,	// (0x0009277e) main_image_pane

0xe733,	// (0x00092523) main_location2_pane

0xccfa,	// (0x00090aea) main_location_pane

0xe733,	// (0x00092523) main_messa_pane

0xe733,	// (0x00092523) main_mp2_pane

0xccfa,	// (0x00090aea) main_mp_pane

0xe733,	// (0x00092523) main_msg_pane

0xe733,	// (0x00092523) main_mup_eq_pane

0xe733,	// (0x00092523) main_mup_pane

0xea61,	// (0x00092851) main_notes_pane

0xe733,	// (0x00092523) main_pec_pane

0xe733,	// (0x00092523) main_phob_pane

0xe733,	// (0x00092523) main_pinb_pane

0xe733,	// (0x00092523) main_postcard_pane

0xe733,	// (0x00092523) main_qdial_pane

0xccfa,	// (0x00090aea) main_skin_pane

0xe733,	// (0x00092523) main_smil2_pane

0xccfa,	// (0x00090aea) main_smil_pane

0xccfa,	// (0x00090aea) main_video_pane

0xccfa,	// (0x00090aea) main_video_tele_pane

0xe98e,	// (0x0009277e) main_viewer_pane_ParamLimits

0xe98e,	// (0x0009277e) main_viewer_pane

0xccfa,	// (0x00090aea) main_vorec_pane

0x7737,	// (0x0008b527) popup_blid_sat_info_window_ParamLimits

0x7737,	// (0x0008b527) popup_blid_sat_info_window

0x775d,	// (0x0008b54d) popup_dyc_status_message_window_ParamLimits

0x775d,	// (0x0008b54d) popup_dyc_status_message_window

0x776d,	// (0x0008b55d) popup_grid_large_graphic_window_ParamLimits

0x776d,	// (0x0008b55d) popup_grid_large_graphic_window

0x7802,	// (0x0008b5f2) popup_loc_request_window_ParamLimits

0x7802,	// (0x0008b5f2) popup_loc_request_window

0x785c,	// (0x0008b64c) popup_wml_address_window_ParamLimits

0x785c,	// (0x0008b64c) popup_wml_address_window

0x75c1,	// (0x0008b3b1) call_muted_g1

0x7280,	// (0x0008b070) popup_call_audio_conf_window_ParamLimits

0x7280,	// (0x0008b070) popup_call_audio_conf_window

0x75d1,	// (0x0008b3c1) popup_call_audio_first_window_ParamLimits

0x75d1,	// (0x0008b3c1) popup_call_audio_first_window

0x7611,	// (0x0008b401) popup_call_audio_in_window_ParamLimits

0x7611,	// (0x0008b401) popup_call_audio_in_window

0x7635,	// (0x0008b425) popup_call_audio_out_window_ParamLimits

0x7635,	// (0x0008b425) popup_call_audio_out_window

0x7657,	// (0x0008b447) popup_call_audio_second_window_ParamLimits

0x7657,	// (0x0008b447) popup_call_audio_second_window

0x7687,	// (0x0008b477) popup_call_audio_wait_window_ParamLimits

0x7687,	// (0x0008b477) popup_call_audio_wait_window

0x76a8,	// (0x0008b498) popup_number_entry_window_ParamLimits

0x76a8,	// (0x0008b498) popup_number_entry_window

0xe2dd,	// (0x000920cd) bg_popup_call_pane_cp05_ParamLimits

0xe2dd,	// (0x000920cd) bg_popup_call_pane_cp05

0xe2fd,	// (0x000920ed) popup_number_entry_window_t1

0xe310,	// (0x00092100) popup_number_entry_window_t2

0xe322,	// (0x00092112) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x00092ec8) popup_number_entry_window_t

0xe369,	// (0x00092159) text_title_cp2

0xe37c,	// (0x0009216c) bg_popup_call_pane_cp_ParamLimits

0xe37c,	// (0x0009216c) bg_popup_call_pane_cp

0xe38a,	// (0x0009217a) call_thumbnail_pane

0xe392,	// (0x00092182) popup_call_audio_in_window_g1_ParamLimits

0xe392,	// (0x00092182) popup_call_audio_in_window_g1

0xe39e,	// (0x0009218e) popup_call_audio_in_window_g2_ParamLimits

0xe39e,	// (0x0009218e) popup_call_audio_in_window_g2

0xe3aa,	// (0x0009219a) popup_call_audio_in_window_g3_ParamLimits

0xe3aa,	// (0x0009219a) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x00092ed1) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x00092ed1) popup_call_audio_in_window_g

0xe3b6,	// (0x000921a6) popup_call_audio_in_window_t1_ParamLimits

0xe3b6,	// (0x000921a6) popup_call_audio_in_window_t1

0xe3d2,	// (0x000921c2) popup_call_audio_in_window_t2_ParamLimits

0xe3d2,	// (0x000921c2) popup_call_audio_in_window_t2

0xe3ee,	// (0x000921de) popup_call_audio_in_window_t3_ParamLimits

0xe3ee,	// (0x000921de) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x00092ed8) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x00092ed8) popup_call_audio_in_window_t

0xe37c,	// (0x0009216c) bg_popup_call_pane_cp01_ParamLimits

0xe37c,	// (0x0009216c) bg_popup_call_pane_cp01

0xe38a,	// (0x0009217a) call_thumbnail_pane_cp02

0xe40f,	// (0x000921ff) call_type_pane_cp022

0xe417,	// (0x00092207) popup_call_audio_out_window_g1_ParamLimits

0xe417,	// (0x00092207) popup_call_audio_out_window_g1

0xe429,	// (0x00092219) popup_call_audio_out_window_g2_ParamLimits

0xe429,	// (0x00092219) popup_call_audio_out_window_g2

0xe435,	// (0x00092225) popup_call_audio_out_window_g3_ParamLimits

0xe435,	// (0x00092225) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x00092edf) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x00092edf) popup_call_audio_out_window_g

0xe447,	// (0x00092237) popup_call_audio_out_window_t1_ParamLimits

0xe447,	// (0x00092237) popup_call_audio_out_window_t1

0xe45f,	// (0x0009224f) popup_call_audio_out_window_t2_ParamLimits

0xe45f,	// (0x0009224f) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x00092ee6) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x00092ee6) popup_call_audio_out_window_t

0xe474,	// (0x00092264) bg_popup_call_pane_ParamLimits

0xe474,	// (0x00092264) bg_popup_call_pane

0x48e8,	// (0x000886d8) call_thumbnail_pane_cp_ParamLimits

0x48e8,	// (0x000886d8) call_thumbnail_pane_cp

0xe4f8,	// (0x000922e8) call_type_pane_cp01_ParamLimits

0xe4f8,	// (0x000922e8) call_type_pane_cp01

0xe53c,	// (0x0009232c) popup_call_audio_first_window_g1_ParamLimits

0xe53c,	// (0x0009232c) popup_call_audio_first_window_g1

0xe588,	// (0x00092378) popup_call_audio_first_window_g2_ParamLimits

0xe588,	// (0x00092378) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x00092eeb) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x00092eeb) popup_call_audio_first_window_g

0xe5cc,	// (0x000923bc) popup_call_audio_first_window_t1_ParamLimits

0xe5cc,	// (0x000923bc) popup_call_audio_first_window_t1

0xe678,	// (0x00092468) popup_call_audio_first_window_t4_ParamLimits

0xe678,	// (0x00092468) popup_call_audio_first_window_t4

0xe704,	// (0x000924f4) popup_call_audio_first_window_t5_ParamLimits

0xe704,	// (0x000924f4) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x00092ef0) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x00092ef0) popup_call_audio_first_window_t

0xe733,	// (0x00092523) bg_popup_call_pane_cp02

0xe73d,	// (0x0009252d) call_type_pane_cp023

0xe745,	// (0x00092535) popup_call_audio_wait_window_g1

0xe74d,	// (0x0009253d) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x00092ef7) popup_call_audio_wait_window_g

0xe755,	// (0x00092545) popup_call_audio_wait_window_t3

0xe763,	// (0x00092553) bg_popup_call_pane_cp03_ParamLimits

0xe763,	// (0x00092553) bg_popup_call_pane_cp03

0xe7c3,	// (0x000925b3) call_thumbnail_pane_cp011_ParamLimits

0xe7c3,	// (0x000925b3) call_thumbnail_pane_cp011

0xe7cf,	// (0x000925bf) call_type_pane_cp034_ParamLimits

0xe7cf,	// (0x000925bf) call_type_pane_cp034

0xe80b,	// (0x000925fb) popup_call_audio_second_window_g1_ParamLimits

0xe80b,	// (0x000925fb) popup_call_audio_second_window_g1

0xe847,	// (0x00092637) popup_call_audio_second_window_g2_ParamLimits

0xe847,	// (0x00092637) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x00092efc) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x00092efc) popup_call_audio_second_window_g

0xe883,	// (0x00092673) popup_call_audio_second_window_t1_ParamLimits

0xe883,	// (0x00092673) popup_call_audio_second_window_t1

0xe904,	// (0x000926f4) popup_call_audio_second_window_t2_ParamLimits

0xe904,	// (0x000926f4) popup_call_audio_second_window_t2

0xe93a,	// (0x0009272a) popup_call_audio_second_window_t3_ParamLimits

0xe93a,	// (0x0009272a) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x00092f01) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x00092f01) popup_call_audio_second_window_t

0xe733,	// (0x00092523) bg_popup_call_pane_cp04

0xe970,	// (0x00092760) list_conf_pane

0xe978,	// (0x00092768) popup_call_audio_conf_window_t1

0xe986,	// (0x00092776) call_thumbnail_pane_g1

0xe98e,	// (0x0009277e) bg_pinb_pane_ParamLimits

0xe98e,	// (0x0009277e) bg_pinb_pane

0xe99c,	// (0x0009278c) find_pinb_pane

0xe9a5,	// (0x00092795) listscroll_pinb_pane_ParamLimits

0xe9a5,	// (0x00092795) listscroll_pinb_pane

0xe9b4,	// (0x000927a4) pinb_bg_pane_g1

0x490c,	// (0x000886fc) pinb_bg_pane_g2

0x4918,	// (0x00088708) pinb_bg_pane_g3

0x4924,	// (0x00088714) pinb_bg_pane_g4

0x4930,	// (0x00088720) pinb_bg_pane_g5

0x493c,	// (0x0008872c) pinb_bg_pane_g6

0x4947,	// (0x00088737) pinb_bg_pane_g7

0x4952,	// (0x00088742) pinb_bg_pane_g8

0x495d,	// (0x0008874d) pinb_bg_pane_g9

0x4967,	// (0x00088757) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x00092f08) pinb_bg_pane_g

0x4984,	// (0x00088774) grid_pinb_pane

0x498f,	// (0x0008877f) list_pinb_pane

0x499a,	// (0x0008878a) scroll_pane_cp01_ParamLimits

0x499a,	// (0x0008878a) scroll_pane_cp01

0xe9be,	// (0x000927ae) find_pinb_pane_g1_ParamLimits

0xe9be,	// (0x000927ae) find_pinb_pane_g1

0xe9d6,	// (0x000927c6) find_pinb_pane_t1

0xe9e8,	// (0x000927d8) find_pinb_pane_t2

0x0001,

0xf132,	// (0x00092f22) find_pinb_pane_t

0xe9fd,	// (0x000927ed) input_focus_pane_cp01_ParamLimits

0xe9fd,	// (0x000927ed) input_focus_pane_cp01

0x49ac,	// (0x0008879c) cell_pinb_pane_ParamLimits

0x49ac,	// (0x0008879c) cell_pinb_pane

0x49ca,	// (0x000887ba) cell_pinb_pane_g1_ParamLimits

0x49ca,	// (0x000887ba) cell_pinb_pane_g1

0x49df,	// (0x000887cf) cell_pinb_pane_g2_ParamLimits

0x49df,	// (0x000887cf) cell_pinb_pane_g2

0xea09,	// (0x000927f9) cell_pinb_pane_g3_ParamLimits

0xea09,	// (0x000927f9) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x00092f27) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x00092f27) cell_pinb_pane_g

0xe733,	// (0x00092523) grid_highlight_pane_cp01

0x49eb,	// (0x000887db) list_pinb_item_pane_ParamLimits

0x49eb,	// (0x000887db) list_pinb_item_pane

0xe733,	// (0x00092523) list_highlight_pane_cp02

0x4a06,	// (0x000887f6) list_pinb_item_pane_g1_ParamLimits

0x4a06,	// (0x000887f6) list_pinb_item_pane_g1

0x4a13,	// (0x00088803) list_pinb_item_pane_g2_ParamLimits

0x4a13,	// (0x00088803) list_pinb_item_pane_g2

0x4a1f,	// (0x0008880f) list_pinb_item_pane_g3_ParamLimits

0x4a1f,	// (0x0008880f) list_pinb_item_pane_g3

0x4a30,	// (0x00088820) list_pinb_item_pane_g4_ParamLimits

0x4a30,	// (0x00088820) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x00092f2e) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x00092f2e) list_pinb_item_pane_g

0x4a3c,	// (0x0008882c) list_pinb_item_pane_t1_ParamLimits

0x4a3c,	// (0x0008882c) list_pinb_item_pane_t1

0x4a6d,	// (0x0008885d) calc_display_pane

0x4a8b,	// (0x0008887b) calc_paper_pane

0x4aa7,	// (0x00088897) grid_calc_pane

0xe733,	// (0x00092523) bg_list_pane_cp01

0x4ad3,	// (0x000888c3) clock_g1

0x4adb,	// (0x000888cb) clock_g2

0x0001,

0xf147,	// (0x00092f37) clock_g

0x4ae5,	// (0x000888d5) clock_t1_ParamLimits

0x4ae5,	// (0x000888d5) clock_t1

0x4afa,	// (0x000888ea) clock_t2_ParamLimits

0x4afa,	// (0x000888ea) clock_t2

0x4b0c,	// (0x000888fc) clock_t3_ParamLimits

0x4b0c,	// (0x000888fc) clock_t3

0x4b1e,	// (0x0008890e) clock_t4_ParamLimits

0x4b1e,	// (0x0008890e) clock_t4

0x4b30,	// (0x00088920) clock_t5_ParamLimits

0x4b30,	// (0x00088920) clock_t5

0x4b45,	// (0x00088935) clock_t6_ParamLimits

0x4b45,	// (0x00088935) clock_t6

0x4b57,	// (0x00088947) clock_t7_ParamLimits

0x4b57,	// (0x00088947) clock_t7

0x4b69,	// (0x00088959) clock_t8_ParamLimits

0x4b69,	// (0x00088959) clock_t8

0x4b7f,	// (0x0008896f) clock_t9_ParamLimits

0x4b7f,	// (0x0008896f) clock_t9

0x0008,

0xf14c,	// (0x00092f3c) clock_t_ParamLimits

0xf14c,	// (0x00092f3c) clock_t

0xea15,	// (0x00092805) popup_clock_analogue_window_cp02

0xea15,	// (0x00092805) popup_clock_digital_window_cp01

0xea1d,	// (0x0009280d) listscroll_help_pane

0xe733,	// (0x00092523) phob_pre_status_pane

0xea27,	// (0x00092817) grid_qdial_pane

0xe733,	// (0x00092523) listscroll_mce_pane

0xea31,	// (0x00092821) bg_notes_pane

0xea3f,	// (0x0009282f) list_notes_pane

0x4b95,	// (0x00088985) scroll_pane_cp06

0xea4d,	// (0x0009283d) bg_calc_paper_pane

0x4ba4,	// (0x00088994) list_calc_pane

0xea61,	// (0x00092851) bg_calc_display_pane

0x4bbe,	// (0x000889ae) calc_display_pane_t1

0x4bd3,	// (0x000889c3) calc_display_pane_t2

0x4be8,	// (0x000889d8) calc_display_pane_t3

0x0002,

0xf15f,	// (0x00092f4f) calc_display_pane_t

0x4bfa,	// (0x000889ea) cell_calc_pane_ParamLimits

0x4bfa,	// (0x000889ea) cell_calc_pane

0xea6d,	// (0x0009285d) bg_calc_paper_pane_g1

0xea79,	// (0x00092869) bg_calc_paper_pane_g2

0xea85,	// (0x00092875) bg_calc_paper_pane_g3

0xea91,	// (0x00092881) bg_calc_paper_pane_g4

0xea9d,	// (0x0009288d) bg_calc_paper_pane_g5

0x4c29,	// (0x00088a19) bg_calc_paper_pane_g6

0x4c3a,	// (0x00088a2a) bg_calc_paper_pane_g7

0x4c4b,	// (0x00088a3b) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x00092f56) bg_calc_paper_pane_g

0x4c5e,	// (0x00088a4e) calc_bg_paper_pane_g9

0x4c71,	// (0x00088a61) list_calc_item_pane_ParamLimits

0x4c71,	// (0x00088a61) list_calc_item_pane

0xeaa9,	// (0x00092899) list_calc_item_pane_g1

0x4c92,	// (0x00088a82) list_calc_item_pane_t1_ParamLimits

0x4c92,	// (0x00088a82) list_calc_item_pane_t1

0x4ca4,	// (0x00088a94) list_calc_item_pane_t2_ParamLimits

0x4ca4,	// (0x00088a94) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x00092f67) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x00092f67) list_calc_item_pane_t

0xeab6,	// (0x000928a6) cell_calc_pane_g1

0xeac0,	// (0x000928b0) grid_highlight_pane_cp02

0xeae2,	// (0x000928d2) bg_calc_display_pane_g1

0x4cd4,	// (0x00088ac4) bg_calc_display_pane_g2

0xeaeb,	// (0x000928db) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x00092f71) bg_calc_display_pane_g

0x4cde,	// (0x00088ace) cell_qdial_pane_ParamLimits

0x4cde,	// (0x00088ace) cell_qdial_pane

0x4cf4,	// (0x00088ae4) cell_qdial_pane_g1_ParamLimits

0x4cf4,	// (0x00088ae4) cell_qdial_pane_g1

0x4d01,	// (0x00088af1) cell_qdial_pane_g2_ParamLimits

0x4d01,	// (0x00088af1) cell_qdial_pane_g2

0xeaf4,	// (0x000928e4) cell_qdial_pane_g3_ParamLimits

0xeaf4,	// (0x000928e4) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x00092f78) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x00092f78) cell_qdial_pane_g

0x4d1f,	// (0x00088b0f) cell_qdial_pane_t1_ParamLimits

0x4d1f,	// (0x00088b0f) cell_qdial_pane_t1

0x4d37,	// (0x00088b27) cell_qdial_pane_t2_ParamLimits

0x4d37,	// (0x00088b27) cell_qdial_pane_t2

0x4d4a,	// (0x00088b3a) cell_qdial_pane_t3_ParamLimits

0x4d4a,	// (0x00088b3a) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x00092f81) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x00092f81) cell_qdial_pane_t

0xe733,	// (0x00092523) grid_highlight_pane_cp04

0xeb00,	// (0x000928f0) thumbnail_qdial_pane_ParamLimits

0xeb00,	// (0x000928f0) thumbnail_qdial_pane

0xeb5c,	// (0x0009294c) list_help_pane

0xeb65,	// (0x00092955) scroll_pane_cp02

0x4d5d,	// (0x00088b4d) help_list_pane_t1_ParamLimits

0x4d5d,	// (0x00088b4d) help_list_pane_t1

0x4d84,	// (0x00088b74) bg_notes_pane_g2

0x4d8c,	// (0x00088b7c) bg_notes_pane_g3

0x4d94,	// (0x00088b84) notes_bg_pane_g1

0x4d9c,	// (0x00088b8c) notes_bg_pane_g4

0x4da4,	// (0x00088b94) notes_bg_pane_g5

0x4dac,	// (0x00088b9c) notes_bg_pane_g6

0x4db4,	// (0x00088ba4) notes_bg_pane_g7

0x4dbc,	// (0x00088bac) notes_bg_pane_g8

0x4dc4,	// (0x00088bb4) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x00092f9f) notes_bg_pane_g

0x4dcc,	// (0x00088bbc) list_notes_text_pane_ParamLimits

0x4dcc,	// (0x00088bbc) list_notes_text_pane

0xeb6e,	// (0x0009295e) list_notes_text_pane_g1

0x4df4,	// (0x00088be4) list_notes_text_pane_t1

0xea61,	// (0x00092851) listscroll_cale_week_pane

0x4e1f,	// (0x00088c0f) bg_cale_heading_pane

0xeb88,	// (0x00092978) bg_cale_pane_cp01

0x4e3b,	// (0x00088c2b) cale_week_corner_pane

0x4e51,	// (0x00088c41) cale_week_day_heading_pane

0x4e6d,	// (0x00088c5d) cale_week_scroll_pane_g1

0x4e86,	// (0x00088c76) cale_week_scroll_pane_g2

0x4e97,	// (0x00088c87) cale_week_scroll_pane_g3

0x4ea8,	// (0x00088c98) cale_week_scroll_pane_g4

0x4eb9,	// (0x00088ca9) cale_week_scroll_pane_g5

0x4eca,	// (0x00088cba) cale_week_scroll_pane_g6

0x4edd,	// (0x00088ccd) cale_week_scroll_pane_g7

0x4ef0,	// (0x00088ce0) cale_week_scroll_pane_g8

0x4f03,	// (0x00088cf3) cale_week_scroll_pane_g9

0x4f14,	// (0x00088d04) cale_week_scroll_pane_g10

0x4f25,	// (0x00088d15) cale_week_scroll_pane_g11

0x4f36,	// (0x00088d26) cale_week_scroll_pane_g12

0x4f47,	// (0x00088d37) cale_week_scroll_pane_g13

0x4f58,	// (0x00088d48) cale_week_scroll_pane_g14

0x4f71,	// (0x00088d61) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x00092fae) cale_week_scroll_pane_g

0x4f8a,	// (0x00088d7a) cale_week_time_pane

0x4f9d,	// (0x00088d8d) grid_cale_week_pane

0x4fba,	// (0x00088daa) scroll_pane_cp08

0x4fd4,	// (0x00088dc4) cell_cale_week_pane_ParamLimits

0x4fd4,	// (0x00088dc4) cell_cale_week_pane

0x5016,	// (0x00088e06) cale_week_day_heading_pane_t1

0x5043,	// (0x00088e33) cale_week_day_heading_pane_t2

0x5070,	// (0x00088e60) cale_week_day_heading_pane_t3

0x509d,	// (0x00088e8d) cale_week_day_heading_pane_t4

0x50ca,	// (0x00088eba) cale_week_day_heading_pane_t5

0x50f7,	// (0x00088ee7) cale_week_day_heading_pane_t6

0x5124,	// (0x00088f14) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x00092fcd) cale_week_day_heading_pane_t

0xebb3,	// (0x000929a3) bg_cale_side_pane

0x5151,	// (0x00088f41) cale_week_time_pane_t1

0x5169,	// (0x00088f59) cale_week_time_pane_t2

0x5181,	// (0x00088f71) cale_week_time_pane_t3

0x5199,	// (0x00088f89) cale_week_time_pane_t4

0x51b1,	// (0x00088fa1) cale_week_time_pane_t5

0x51c9,	// (0x00088fb9) cale_week_time_pane_t6

0x51e1,	// (0x00088fd1) cale_week_time_pane_t7

0x51f9,	// (0x00088fe9) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x00092fdc) cale_week_time_pane_t

0x5215,	// (0x00089005) cell_cale_week_pane_g2

0x522e,	// (0x0008901e) cell_cale_week_pane_g3_ParamLimits

0x522e,	// (0x0008901e) cell_cale_week_pane_g3

0xebc1,	// (0x000929b1) grid_highlight_pane_cp07

0xebc9,	// (0x000929b9) listscroll_gms_pane

0xebd3,	// (0x000929c3) grid_gms_pane

0xebdc,	// (0x000929cc) listscroll_gms_pane_g1

0xebe4,	// (0x000929d4) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x00092fed) listscroll_gms_pane_g

0x5246,	// (0x00089036) scroll_pane_cp010

0x5251,	// (0x00089041) cell_gms_pane_ParamLimits

0x5251,	// (0x00089041) cell_gms_pane

0x5264,	// (0x00089054) cell_gms_pane_g1

0xebec,	// (0x000929dc) cell_gms_pane_g2

0xebf4,	// (0x000929e4) cell_gms_pane_g3

0xebfd,	// (0x000929ed) cell_gms_pane_g4

0x0003,

0xf202,	// (0x00092ff2) cell_gms_pane_g

0xec06,	// (0x000929f6) grid_highlight_pane_cp09

0x7569,	// (0x0008b359) phob_pre_status_pane_g1

0x7571,	// (0x0008b361) phob_pre_status_pane_g2

0x7579,	// (0x0008b369) phob_pre_status_pane_g3

0x7581,	// (0x0008b371) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x000933e1) phob_pre_status_pane_g

0x7591,	// (0x0008b381) phob_pre_status_pane_t1

0x75a1,	// (0x0008b391) phob_pre_status_pane_t2

0x75b1,	// (0x0008b3a1) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x000933ec) phob_pre_status_pane_t

0xe733,	// (0x00092523) bg_list_pane_cp05

0x5274,	// (0x00089064) grid_vorec_pane

0x5280,	// (0x00089070) vorec_t1

0x528e,	// (0x0008907e) vorec_t2

0x529c,	// (0x0008908c) vorec_t3

0x52aa,	// (0x0008909a) vorec_t4

0x52b8,	// (0x000890a8) vorec_t5

0x52c6,	// (0x000890b6) vorec_t6

0x0006,

0xf20b,	// (0x00092ffb) vorec_t

0x52e2,	// (0x000890d2) wait_bar_pane_cp01

0x52ea,	// (0x000890da) cell_vorec_pane_ParamLimits

0x52ea,	// (0x000890da) cell_vorec_pane

0xec0e,	// (0x000929fe) cell_vorec_pane_g1

0xe733,	// (0x00092523) grid_highlight_pane_cp05

0x530d,	// (0x000890fd) cams_zoom_pane

0x5319,	// (0x00089109) image_vga_pane

0x5328,	// (0x00089118) main_camera_pane_g1

0x5336,	// (0x00089126) main_camera_pane_g2

0x5342,	// (0x00089132) main_camera_pane_g3

0x5350,	// (0x00089140) main_camera_pane_g4

0x535e,	// (0x0008914e) main_camera_pane_g5

0x536c,	// (0x0008915c) main_camera_pane_g6

0x537a,	// (0x0008916a) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0009300a) main_camera_pane_g

0x5388,	// (0x00089178) main_camera_pane_t1

0x539a,	// (0x0008918a) main_camera_pane_t2

0x0001,

0xf22b,	// (0x0009301b) main_camera_pane_t

0x53bd,	// (0x000891ad) cams_zoom_pane_cp_ParamLimits

0x53bd,	// (0x000891ad) cams_zoom_pane_cp

0x53e1,	// (0x000891d1) image_cif_pane_ParamLimits

0x53e1,	// (0x000891d1) image_cif_pane

0x53ff,	// (0x000891ef) image_subqcif_pane

0x5409,	// (0x000891f9) main_video_pane_g1_ParamLimits

0x5409,	// (0x000891f9) main_video_pane_g1

0x5429,	// (0x00089219) main_video_pane_g2_ParamLimits

0x5429,	// (0x00089219) main_video_pane_g2

0x5459,	// (0x00089249) main_video_pane_g3_ParamLimits

0x5459,	// (0x00089249) main_video_pane_g3

0x5482,	// (0x00089272) main_video_pane_g4_ParamLimits

0x5482,	// (0x00089272) main_video_pane_g4

0x54ab,	// (0x0008929b) main_video_pane_g5_ParamLimits

0x54ab,	// (0x0008929b) main_video_pane_g5

0xec24,	// (0x00092a14) main_video_pane_g6_ParamLimits

0xec24,	// (0x00092a14) main_video_pane_g6

0x0006,

0xf230,	// (0x00093020) main_video_pane_g_ParamLimits

0xf230,	// (0x00093020) main_video_pane_g

0x54cd,	// (0x000892bd) main_video_pane_t1_ParamLimits

0x54cd,	// (0x000892bd) main_video_pane_t1

0xec3e,	// (0x00092a2e) cams_zoom_pane_g1

0xec47,	// (0x00092a37) cams_zoom_pane_g2

0xec50,	// (0x00092a40) cams_zoom_pane_g3

0xec59,	// (0x00092a49) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x0009302f) cams_zoom_pane_g

0x5517,	// (0x00089307) grid_cams_pane

0x5525,	// (0x00089315) linegrid_cams_pane

0x5531,	// (0x00089321) cell_cams_pane_ParamLimits

0x5531,	// (0x00089321) cell_cams_pane

0xec62,	// (0x00092a52) cams_burst_image_pane

0xec6a,	// (0x00092a5a) cell_cams_pane_g1

0xe733,	// (0x00092523) grid_highlight_pane_cp03

0xeab6,	// (0x000928a6) mp_bg_pane_g1

0xe733,	// (0x00092523) bg_list_pane_cp03

0xe028,	// (0x00091e18) bg_mp_pane

0xe030,	// (0x00091e20) grid_mp_pane

0xe038,	// (0x00091e28) media_player_g1

0xe042,	// (0x00091e32) media_player_t1

0xe050,	// (0x00091e40) media_player_t2

0xe05e,	// (0x00091e4e) media_player_t3

0xe06c,	// (0x00091e5c) media_player_t4

0xe07a,	// (0x00091e6a) media_player_t5

0xe088,	// (0x00091e78) media_player_t6

0xe096,	// (0x00091e86) media_player_t7

0x0006,

0xf5db,	// (0x000933cb) media_player_t

0xe0a4,	// (0x00091e94) wait_bar_pane_cp02

0xf5c0,	// (0x000933b0) main_usb_pane_t

0x7560,	// (0x0008b350) cell_mp_pane

0xeab6,	// (0x000928a6) cell_mp_pane_g1

0xe733,	// (0x00092523) grid_highlight_pane_cp06

0xed30,	// (0x00092b20) grid_skin_colour_pane

0xed38,	// (0x00092b28) list_highlight_pane_cp03

0x559d,	// (0x0008938d) skin_g1

0xed40,	// (0x00092b30) skin_t1

0xed4f,	// (0x00092b3f) skin_t2

0x0001,

0xf274,	// (0x00093064) skin_t

0x55a7,	// (0x00089397) cell_skin_colour_pane_ParamLimits

0x55a7,	// (0x00089397) cell_skin_colour_pane

0xed5d,	// (0x00092b4d) cell_skin_colour_pane_g1

0x5627,	// (0x00089417) call_video_g1_ParamLimits

0x5627,	// (0x00089417) call_video_g1

0x5637,	// (0x00089427) call_video_g2_ParamLimits

0x5637,	// (0x00089427) call_video_g2

0x0001,

0xf279,	// (0x00093069) call_video_g_ParamLimits

0xf279,	// (0x00093069) call_video_g

0x5687,	// (0x00089477) call_video_uplink_pane_cp1_ParamLimits

0x5687,	// (0x00089477) call_video_uplink_pane_cp1

0xed6f,	// (0x00092b5f) call_video_uplink_pane_cp2

0x5755,	// (0x00089545) video_down_crop_pane_ParamLimits

0x5755,	// (0x00089545) video_down_crop_pane

0x5847,	// (0x00089637) video_down_pane_ParamLimits

0x5847,	// (0x00089637) video_down_pane

0xed77,	// (0x00092b67) video_down_subqcif_pane_ParamLimits

0xed77,	// (0x00092b67) video_down_subqcif_pane

0xed91,	// (0x00092b81) video_down_subqcif_pane_cp_ParamLimits

0xed91,	// (0x00092b81) video_down_subqcif_pane_cp

0xedb9,	// (0x00092ba9) im_reading_pane_ParamLimits

0xedb9,	// (0x00092ba9) im_reading_pane

0x5964,	// (0x00089754) im_writing_pane_ParamLimits

0x5964,	// (0x00089754) im_writing_pane

0x5982,	// (0x00089772) im_reading_pane_t1

0xedd3,	// (0x00092bc3) list_im_pane

0xede4,	// (0x00092bd4) scroll_pane_cp07

0x59c4,	// (0x000897b4) im_writing_pane_t1_ParamLimits

0x59c4,	// (0x000897b4) im_writing_pane_t1

0xedfd,	// (0x00092bed) im_writing_pane_t2_ParamLimits

0xedfd,	// (0x00092bed) im_writing_pane_t2

0x0001,

0xf283,	// (0x00093073) im_writing_pane_t_ParamLimits

0xf283,	// (0x00093073) im_writing_pane_t

0xe733,	// (0x00092523) input_focus_pane_cp04

0xe733,	// (0x00092523) input_focus_pane_cp05

0x59d6,	// (0x000897c6) list_im_single_pane_ParamLimits

0x59d6,	// (0x000897c6) list_im_single_pane

0x59ef,	// (0x000897df) list_single_im_pane_t1

0x7524,	// (0x0008b314) blid_accuracy_pane

0x752c,	// (0x0008b31c) blid_compass_pane

0x7536,	// (0x0008b326) main_location_t1

0x7544,	// (0x0008b334) main_location_t2

0x7552,	// (0x0008b342) main_location_t3

0x0002,

0xf5ea,	// (0x000933da) main_location_t

0xe733,	// (0x00092523) aid_levels_location

0xeab6,	// (0x000928a6) blid_accuracy_pane_g1

0xeab6,	// (0x000928a6) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x000930d5) blid_accuracy_pane_g

0xee45,	// (0x00092c35) wml_content_pane

0xee83,	// (0x00092c73) wml_button_pane_ParamLimits

0xee83,	// (0x00092c73) wml_button_pane

0x59fe,	// (0x000897ee) wml_list_single_large_pane_ParamLimits

0x59fe,	// (0x000897ee) wml_list_single_large_pane

0x5a20,	// (0x00089810) wml_list_single_medium_pane_ParamLimits

0x5a20,	// (0x00089810) wml_list_single_medium_pane

0x5a43,	// (0x00089833) wml_list_single_small_pane_ParamLimits

0x5a43,	// (0x00089833) wml_list_single_small_pane

0xee97,	// (0x00092c87) wml_selection_box_pane_ParamLimits

0xee97,	// (0x00092c87) wml_selection_box_pane

0xeeaa,	// (0x00092c9a) wml_list_single_pane_t1

0xeeb9,	// (0x00092ca9) wml_list_single_medium_pane_t1

0xeec8,	// (0x00092cb8) wml_list_single_large_pane_t1

0xeed7,	// (0x00092cc7) input_focus_pane_cp02_ParamLimits

0xeed7,	// (0x00092cc7) input_focus_pane_cp02

0xeeea,	// (0x00092cda) wml_selection_box_pane_g1

0xeef3,	// (0x00092ce3) wml_selection_box_pane_t1_ParamLimits

0xeef3,	// (0x00092ce3) wml_selection_box_pane_t1

0xe98e,	// (0x0009277e) bg_wml_button_pane_ParamLimits

0xe98e,	// (0x0009277e) bg_wml_button_pane

0xef0b,	// (0x00092cfb) wml_button_pane_g1

0xef13,	// (0x00092d03) wml_button_pane_t1

0xef0b,	// (0x00092cfb) wml_button_bg_pane_g1

0xef23,	// (0x00092d13) wml_button_bg_pane_g2

0xef2b,	// (0x00092d1b) wml_button_bg_pane_g3

0xef33,	// (0x00092d23) wml_button_bg_pane_g4

0xef3b,	// (0x00092d2b) wml_button_bg_pane_g5

0xef43,	// (0x00092d33) wml_button_bg_pane_g6

0xef4b,	// (0x00092d3b) wml_button_bg_pane_g7

0xef53,	// (0x00092d43) wml_button_bg_pane_g8

0xef5b,	// (0x00092d4b) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x00093078) wml_button_bg_pane_g

0x5a6b,	// (0x0008985b) bg_list_pane_cp02

0xef63,	// (0x00092d53) mce_header_pane_ParamLimits

0xef63,	// (0x00092d53) mce_header_pane

0xef79,	// (0x00092d69) mce_icon_pane

0xef79,	// (0x00092d69) mce_image_pane

0xef82,	// (0x00092d72) mce_text_pane_ParamLimits

0xef82,	// (0x00092d72) mce_text_pane

0x5a75,	// (0x00089865) scroll_pane_cp03

0xee7b,	// (0x00092c6b) scroll_pane_cp04

0xef95,	// (0x00092d85) scroll_pane_cp05_ParamLimits

0xef95,	// (0x00092d85) scroll_pane_cp05

0x5a7f,	// (0x0008986f) mce_header_field_pane_ParamLimits

0x5a7f,	// (0x0008986f) mce_header_field_pane

0x5aa1,	// (0x00089891) mce_header_field_pane_2_ParamLimits

0x5aa1,	// (0x00089891) mce_header_field_pane_2

0x5ab7,	// (0x000898a7) mce_header_field_pane_3

0x5abf,	// (0x000898af) list_single_mce_message_pane_ParamLimits

0x5abf,	// (0x000898af) list_single_mce_message_pane

0x5ad8,	// (0x000898c8) list_single_mce_smart_pane_ParamLimits

0x5ad8,	// (0x000898c8) list_single_mce_smart_pane

0xefa1,	// (0x00092d91) input_focus_pane_cp03

0xefaa,	// (0x00092d9a) list_header_data_pane

0x5afc,	// (0x000898ec) mce_header_field_pane_t1

0x5b0c,	// (0x000898fc) list_single_mce_header_pane_ParamLimits

0x5b0c,	// (0x000898fc) list_single_mce_header_pane

0xefb2,	// (0x00092da2) list_single_mce_header_pane_t1

0xefc1,	// (0x00092db1) list_single_mce_message_pane_g1

0xefc9,	// (0x00092db9) list_single_mce_message_pane_t1

0x5b42,	// (0x00089932) bg_cale_heading_pane_cp01_ParamLimits

0x5b42,	// (0x00089932) bg_cale_heading_pane_cp01

0xefd7,	// (0x00092dc7) bg_cale_pane_cp02_ParamLimits

0xefd7,	// (0x00092dc7) bg_cale_pane_cp02

0x5b75,	// (0x00089965) cale_month_corner_pane

0x5b8b,	// (0x0008997b) cale_month_day_heading_pane_ParamLimits

0x5b8b,	// (0x0008997b) cale_month_day_heading_pane

0x5bce,	// (0x000899be) cale_month_pane_g1_ParamLimits

0x5bce,	// (0x000899be) cale_month_pane_g1

0x5bfa,	// (0x000899ea) cale_month_pane_g2_ParamLimits

0x5bfa,	// (0x000899ea) cale_month_pane_g2

0x5c1d,	// (0x00089a0d) cale_month_pane_g3_ParamLimits

0x5c1d,	// (0x00089a0d) cale_month_pane_g3

0x5c59,	// (0x00089a49) cale_month_pane_g4_ParamLimits

0x5c59,	// (0x00089a49) cale_month_pane_g4

0x5c95,	// (0x00089a85) cale_month_pane_g5_ParamLimits

0x5c95,	// (0x00089a85) cale_month_pane_g5

0x5cd1,	// (0x00089ac1) cale_month_pane_g6_ParamLimits

0x5cd1,	// (0x00089ac1) cale_month_pane_g6

0x5d1d,	// (0x00089b0d) cale_month_pane_g7_ParamLimits

0x5d1d,	// (0x00089b0d) cale_month_pane_g7

0x5d69,	// (0x00089b59) cale_month_pane_g8_ParamLimits

0x5d69,	// (0x00089b59) cale_month_pane_g8

0x5db5,	// (0x00089ba5) cale_month_pane_g9_ParamLimits

0x5db5,	// (0x00089ba5) cale_month_pane_g9

0x5def,	// (0x00089bdf) cale_month_pane_g10_ParamLimits

0x5def,	// (0x00089bdf) cale_month_pane_g10

0x5e29,	// (0x00089c19) cale_month_pane_g11_ParamLimits

0x5e29,	// (0x00089c19) cale_month_pane_g11

0x5e63,	// (0x00089c53) cale_month_pane_g12_ParamLimits

0x5e63,	// (0x00089c53) cale_month_pane_g12

0x5ea1,	// (0x00089c91) cale_month_pane_g13_ParamLimits

0x5ea1,	// (0x00089c91) cale_month_pane_g13

0x000c,

0xf29b,	// (0x0009308b) cale_month_pane_g_ParamLimits

0xf29b,	// (0x0009308b) cale_month_pane_g

0x5edf,	// (0x00089ccf) cale_month_week_pane

0x5ef2,	// (0x00089ce2) grid_cale_month_pane_ParamLimits

0x5ef2,	// (0x00089ce2) grid_cale_month_pane

0x5f30,	// (0x00089d20) cale_month_day_heading_pane_t1

0x5f8e,	// (0x00089d7e) cale_month_day_heading_pane_t2

0x5ff3,	// (0x00089de3) cale_month_day_heading_pane_t3

0x6058,	// (0x00089e48) cale_month_day_heading_pane_t4

0x60bd,	// (0x00089ead) cale_month_day_heading_pane_t5

0x612a,	// (0x00089f1a) cale_month_day_heading_pane_t6

0x619f,	// (0x00089f8f) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x000930a6) cale_month_day_heading_pane_t

0xebb3,	// (0x000929a3) bg_cale_side_pane_cp01

0x6214,	// (0x0008a004) cale_month_week_pane_t1

0x622b,	// (0x0008a01b) cale_month_week_pane_t2

0x6242,	// (0x0008a032) cale_month_week_pane_t3

0x6259,	// (0x0008a049) cale_month_week_pane_t4

0x6270,	// (0x0008a060) cale_month_week_pane_t5

0x6287,	// (0x0008a077) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x000930b5) cale_month_week_pane_t

0x629e,	// (0x0008a08e) cell_cale_month_pane_ParamLimits

0x629e,	// (0x0008a08e) cell_cale_month_pane

0x636c,	// (0x0008a15c) cell_cale_month_pane_g1

0x6378,	// (0x0008a168) cell_cale_month_pane_t1_ParamLimits

0x6378,	// (0x0008a168) cell_cale_month_pane_t1

0xebc1,	// (0x000929b1) grid_highlight_pane_cp08

0xeab6,	// (0x000928a6) main_smil_g1

0x6394,	// (0x0008a184) smil_status_pane

0xf036,	// (0x00092e26) smil_text_pane

0xdf46,	// (0x00091d36) bg_popup_call3_rect_pane_g8

0xdf4e,	// (0x00091d3e) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x0009336e) bg_popup_call3_rect_pane_g

0xe1a0,	// (0x00091f90) smil_status_volume_pane_g1

0xf040,	// (0x00092e30) smil_status_pane_t1

0x7956,	// (0x0008b746) volume_smil_pane

0xf057,	// (0x00092e47) list_smil_text_pane

0x63a7,	// (0x0008a197) scroll_pane_cp011

0x63b2,	// (0x0008a1a2) smil_text_list_pane_t1_ParamLimits

0x63b2,	// (0x0008a1a2) smil_text_list_pane_t1

0x6406,	// (0x0008a1f6) aid_volume_smil_ParamLimits

0x6406,	// (0x0008a1f6) aid_volume_smil

0xeab6,	// (0x000928a6) smil_volume_pane_g1

0xeab6,	// (0x000928a6) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x000930d5) smil_volume_pane_g

0xea61,	// (0x00092851) listscroll_cale_day_pane

0x2ed0,	// (0x00086cc0) bg_cale_pane

0x2ee8,	// (0x00086cd8) list_cale_pane

0x2ef9,	// (0x00086ce9) scroll_pane_cp09

0x2f0a,	// (0x00086cfa) cale_bg_pane_g1

0x2f12,	// (0x00086d02) cale_bg_pane_g2

0x2f1a,	// (0x00086d0a) cale_bg_pane_g3

0x2f22,	// (0x00086d12) cale_bg_pane_g4

0x2f2a,	// (0x00086d1a) cale_bg_pane_g5

0x2f32,	// (0x00086d22) cale_bg_pane_g6

0x2f3a,	// (0x00086d2a) cale_bg_pane_g7

0x2f42,	// (0x00086d32) cale_bg_pane_g8

0x2f4a,	// (0x00086d3a) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x000930da) cale_bg_pane_g

0x6428,	// (0x0008a218) list_cale_time_pane_ParamLimits

0x6428,	// (0x0008a218) list_cale_time_pane

0x643d,	// (0x0008a22d) list_cale_time_pane_g1_ParamLimits

0x643d,	// (0x0008a22d) list_cale_time_pane_g1

0x2f52,	// (0x00086d42) list_cale_time_pane_g2_ParamLimits

0x2f52,	// (0x00086d42) list_cale_time_pane_g2

0x6449,	// (0x0008a239) list_cale_time_pane_g3_ParamLimits

0x6449,	// (0x0008a239) list_cale_time_pane_g3

0x6457,	// (0x0008a247) list_cale_time_pane_g4_ParamLimits

0x6457,	// (0x0008a247) list_cale_time_pane_g4

0x6465,	// (0x0008a255) list_cale_time_pane_g5_ParamLimits

0x6465,	// (0x0008a255) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x000930ed) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x000930ed) list_cale_time_pane_g

0x6473,	// (0x0008a263) list_cale_time_pane_t1_ParamLimits

0x6473,	// (0x0008a263) list_cale_time_pane_t1

0x649b,	// (0x0008a28b) list_cale_time_pane_t2_ParamLimits

0x649b,	// (0x0008a28b) list_cale_time_pane_t2

0x682f,	// (0x0008a61f) aid_blid_cardinal_pane

0x6871,	// (0x0008a661) compass_pane_t4

0x64c3,	// (0x0008a2b3) list_cale_time_pane_t4_ParamLimits

0x64c3,	// (0x0008a2b3) list_cale_time_pane_t4

0x687f,	// (0x0008a66f) compass_pane_t5

0x688f,	// (0x0008a67f) compass_pane_t6

0x689d,	// (0x0008a68d) compass_pane_t7

0xcc4c,	// (0x00090a3c) navi_pane_cc_t1

0xcda1,	// (0x00090b91) aid_phob_thumbnail_center_pane

0x7020,	// (0x0008ae10) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x000930fa) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x000930fa) list_cale_time_pane_t

0xe37c,	// (0x0009216c) bg_popup_window_pane_cp02_ParamLimits

0xe37c,	// (0x0009216c) bg_popup_window_pane_cp02

0x2f6c,	// (0x00086d5c) heading_pane_cp01_ParamLimits

0x2f6c,	// (0x00086d5c) heading_pane_cp01

0x2f78,	// (0x00086d68) loc_req_pane_ParamLimits

0x2f78,	// (0x00086d68) loc_req_pane

0x2f88,	// (0x00086d78) loc_type_pane_ParamLimits

0x2f88,	// (0x00086d78) loc_type_pane

0x2f9a,	// (0x00086d8a) loc_type_pane_t1_ParamLimits

0x2f9a,	// (0x00086d8a) loc_type_pane_t1

0x2fac,	// (0x00086d9c) loc_type_pane_t2_ParamLimits

0x2fac,	// (0x00086d9c) loc_type_pane_t2

0x2fbe,	// (0x00086dae) loc_type_pane_t3_ParamLimits

0x2fbe,	// (0x00086dae) loc_type_pane_t3

0x0002,

0xf311,	// (0x00093101) loc_type_pane_t_ParamLimits

0xf311,	// (0x00093101) loc_type_pane_t

0x2fd0,	// (0x00086dc0) list_loc_req_pane

0x2fda,	// (0x00086dca) scroll_pane_cp012

0x64eb,	// (0x0008a2db) list_single_loc_request_popup_menu_pane_ParamLimits

0x64eb,	// (0x0008a2db) list_single_loc_request_popup_menu_pane

0x2fe5,	// (0x00086dd5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x2fe5,	// (0x00086dd5) list_single_loc_request_popup_menu_pane_g1

0x2ff1,	// (0x00086de1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x2ff1,	// (0x00086de1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00093108) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00093108) list_single_loc_request_popup_menu_pane_g

0x2ffd,	// (0x00086ded) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x2ffd,	// (0x00086ded) list_single_loc_request_popup_menu_pane_t1

0x64fd,	// (0x0008a2ed) bg_popup_window_pane_cp03_ParamLimits

0x64fd,	// (0x0008a2ed) bg_popup_window_pane_cp03

0x650b,	// (0x0008a2fb) heading_loc_req_pane_ParamLimits

0x650b,	// (0x0008a2fb) heading_loc_req_pane

0x6517,	// (0x0008a307) popup_dyc_status_message_window_g1_ParamLimits

0x6517,	// (0x0008a307) popup_dyc_status_message_window_g1

0x6523,	// (0x0008a313) popup_dyc_status_message_window_t1_ParamLimits

0x6523,	// (0x0008a313) popup_dyc_status_message_window_t1

0x6535,	// (0x0008a325) popup_dyc_status_message_window_t2_ParamLimits

0x6535,	// (0x0008a325) popup_dyc_status_message_window_t2

0x6547,	// (0x0008a337) popup_dyc_status_message_window_t3_ParamLimits

0x6547,	// (0x0008a337) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0009310d) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0009310d) popup_dyc_status_message_window_t

0xe733,	// (0x00092523) bg_heading_pane_cp01

0x301f,	// (0x00086e0f) heading_loc_req_pane_g1

0x3027,	// (0x00086e17) heading_loc_req_pane_g2

0x302f,	// (0x00086e1f) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x00093114) heading_loc_req_pane_g

0x3037,	// (0x00086e27) heading_loc_req_pane_t1

0x3047,	// (0x00086e37) bg_popup_sub_pane_cp01_ParamLimits

0x3047,	// (0x00086e37) bg_popup_sub_pane_cp01

0x3055,	// (0x00086e45) popup_cale_events_window_g1_ParamLimits

0x3055,	// (0x00086e45) popup_cale_events_window_g1

0x3075,	// (0x00086e65) popup_cale_events_window_g2_ParamLimits

0x3075,	// (0x00086e65) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x00093148) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x00093148) popup_cale_events_window_g

0x3095,	// (0x00086e85) popup_cale_events_window_t1_ParamLimits

0x3095,	// (0x00086e85) popup_cale_events_window_t1

0x30a7,	// (0x00086e97) popup_cale_events_window_t2_ParamLimits

0x30a7,	// (0x00086e97) popup_cale_events_window_t2

0x30e5,	// (0x00086ed5) popup_cale_events_window_t3_ParamLimits

0x30e5,	// (0x00086ed5) popup_cale_events_window_t3

0x311f,	// (0x00086f0f) popup_cale_events_window_t4_ParamLimits

0x311f,	// (0x00086f0f) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x0009314d) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x0009314d) popup_cale_events_window_t

0x65cb,	// (0x0008a3bb) call_type_pane

0xca9e,	// (0x0009088e) popup_call_status_window_g1

0x65d7,	// (0x0008a3c7) popup_call_status_window_g2

0x65e3,	// (0x0008a3d3) popup_call_status_window_g3

0x0002,

0xf366,	// (0x00093156) popup_call_status_window_g

0x3155,	// (0x00086f45) call_type_pane_g1

0x315e,	// (0x00086f4e) call_type_pane_g2

0x0001,

0xf36d,	// (0x0009315d) call_type_pane_g

0xe733,	// (0x00092523) bg_popup_sub_pane_cp02

0x3167,	// (0x00086f57) listscroll_popup_wml_pane

0x316f,	// (0x00086f5f) list_wml_pane

0x3179,	// (0x00086f69) scroll_pane_cp013

0x3184,	// (0x00086f74) list_single_graphic_popup_wml_pane_ParamLimits

0x3184,	// (0x00086f74) list_single_graphic_popup_wml_pane

0xeab6,	// (0x000928a6) list_single_graphic_popup_wml_pane_g1

0x3198,	// (0x00086f88) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x00093162) list_single_graphic_popup_wml_pane_g

0x31a0,	// (0x00086f90) list_single_graphic_popup_wml_pane_t1

0x31ae,	// (0x00086f9e) aid_call_pane

0xe986,	// (0x00092776) popup_clock_analogue_window_g1

0xe986,	// (0x00092776) popup_clock_analogue_window_g2

0x65ef,	// (0x0008a3df) popup_clock_analogue_window_g3

0x65ef,	// (0x0008a3df) popup_clock_analogue_window_g4

0xeab6,	// (0x000928a6) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x00093167) popup_clock_analogue_window_g

0x65f7,	// (0x0008a3e7) popup_clock_analogue_window_t1

0x6605,	// (0x0008a3f5) clock_digital_number_pane_ParamLimits

0x6605,	// (0x0008a3f5) clock_digital_number_pane

0x6611,	// (0x0008a401) clock_digital_number_pane_cp02_ParamLimits

0x6611,	// (0x0008a401) clock_digital_number_pane_cp02

0x661d,	// (0x0008a40d) clock_digital_number_pane_cp03_ParamLimits

0x661d,	// (0x0008a40d) clock_digital_number_pane_cp03

0x6629,	// (0x0008a419) clock_digital_number_pane_cp04_ParamLimits

0x6629,	// (0x0008a419) clock_digital_number_pane_cp04

0x6635,	// (0x0008a425) clock_digital_separator_pane_ParamLimits

0x6635,	// (0x0008a425) clock_digital_separator_pane

0x6641,	// (0x0008a431) popup_clock_digital_window_t1

0xeab6,	// (0x000928a6) clock_digital_number_pane_g1

0xeab6,	// (0x000928a6) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x000930d5) clock_digital_number_pane_g

0xeab6,	// (0x000928a6) clock_digital_separator_pane_g1

0xeab6,	// (0x000928a6) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x000930d5) clock_digital_separator_pane_g

0xe733,	// (0x00092523) bg_popup_window_pane_cp04

0xcaac,	// (0x0009089c) heading_pane_cp03

0xcab4,	// (0x000908a4) listscroll_popup_gms_pane

0xcabc,	// (0x000908ac) grid_large_graphic_popup_pane

0xcac6,	// (0x000908b6) listscroll_popup_gms_pane_g1

0xcace,	// (0x000908be) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x00093172) listscroll_popup_gms_pane_g

0xee7b,	// (0x00092c6b) scroll_pane_cp014

0x665e,	// (0x0008a44e) cell_large_graphic_popup_pane_ParamLimits

0x665e,	// (0x0008a44e) cell_large_graphic_popup_pane

0x6678,	// (0x0008a468) cell_large_graphic_popup_pane_g1_ParamLimits

0x6678,	// (0x0008a468) cell_large_graphic_popup_pane_g1

0xcad6,	// (0x000908c6) cell_large_graphic_popup_pane_g2_ParamLimits

0xcad6,	// (0x000908c6) cell_large_graphic_popup_pane_g2

0xcae2,	// (0x000908d2) cell_large_graphic_popup_pane_g3_ParamLimits

0xcae2,	// (0x000908d2) cell_large_graphic_popup_pane_g3

0xcaef,	// (0x000908df) cell_large_graphic_popup_pane_g4_ParamLimits

0xcaef,	// (0x000908df) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x00093177) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x00093177) cell_large_graphic_popup_pane_g

0xcaff,	// (0x000908ef) grid_highlight_pane_cp010

0xeab6,	// (0x000928a6) bg_popup_call_pane_g1

0xcb09,	// (0x000908f9) list_single_graphic_popup_conf_pane_ParamLimits

0xcb09,	// (0x000908f9) list_single_graphic_popup_conf_pane

0xcb1b,	// (0x0009090b) list_highlight_pane_cp01

0xcb24,	// (0x00090914) list_single_graphic_popup_conf_pane_g1

0xcb2c,	// (0x0009091c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x00093180) list_single_graphic_popup_conf_pane_g

0xcb34,	// (0x00090924) list_single_graphic_popup_conf_pane_t1

0xcb42,	// (0x00090932) linegrid_cams_pane_g1

0x6684,	// (0x0008a474) linegrid_cams_pane_g2

0xebf4,	// (0x000929e4) linegrid_cams_pane_g3

0xcb4b,	// (0x0009093b) linegrid_cams_pane_g4

0x668d,	// (0x0008a47d) linegrid_cams_pane_g5

0x6696,	// (0x0008a486) linegrid_cams_pane_g6

0xebfd,	// (0x000929ed) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x00093185) linegrid_cams_pane_g

0xcb54,	// (0x00090944) popup_clock_analogue_window

0xcb54,	// (0x00090944) popup_clock_digital_window

0xe733,	// (0x00092523) popup_phob_thumbnail_window

0xeab6,	// (0x000928a6) call_video_uplink_pane_g1

0xcb5d,	// (0x0009094d) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x00093194) call_video_uplink_pane_g

0xcb65,	// (0x00090955) video_uplink_pane

0xcb6d,	// (0x0009095d) mce_image_pane_g1

0x66a1,	// (0x0008a491) mce_image_pane_g2

0x66ab,	// (0x0008a49b) mce_image_pane_g3

0x66b5,	// (0x0008a4a5) mce_image_pane_g4

0x66bd,	// (0x0008a4ad) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x00093199) mce_image_pane_g

0xcb77,	// (0x00090967) control_top_pane_stacon_cp01_ParamLimits

0xcb77,	// (0x00090967) control_top_pane_stacon_cp01

0xcb8b,	// (0x0009097b) uni_indicator_pane_stacon_cp01_ParamLimits

0xcb8b,	// (0x0009097b) uni_indicator_pane_stacon_cp01

0xcb9c,	// (0x0009098c) bg_popup_sub_pane_cp03

0x66c5,	// (0x0008a4b5) chi_dic_find_pane

0x66cd,	// (0x0008a4bd) listscroll_chi_dic_pane

0x66d6,	// (0x0008a4c6) main_pane_chidic_g1

0x66e9,	// (0x0008a4d9) chi_dic_find_pane_t1

0xcba6,	// (0x00090996) find_chidic_pane

0xcbaf,	// (0x0009099f) chi_dic_list_pane_ParamLimits

0xcbaf,	// (0x0009099f) chi_dic_list_pane

0xcbc0,	// (0x000909b0) scroll_pane_cp020

0x66f7,	// (0x0008a4e7) find_chidic_pane_t1

0xe733,	// (0x00092523) input_focus_pane_cp06

0x6706,	// (0x0008a4f6) list_chi_dic_pane_ParamLimits

0x6706,	// (0x0008a4f6) list_chi_dic_pane

0x671b,	// (0x0008a50b) list_chi_dic_pane_t1_ParamLimits

0x671b,	// (0x0008a50b) list_chi_dic_pane_t1

0xe733,	// (0x00092523) list_highlight_pane_cp020

0xcbc8,	// (0x000909b8) bg_cale_heading_pane_g1

0x672e,	// (0x0008a51e) bg_cale_heading_pane_g2

0x6736,	// (0x0008a526) bg_cale_heading_pane_g3

0x673e,	// (0x0008a52e) bg_cale_heading_pane_g4

0x6748,	// (0x0008a538) bg_cale_heading_pane_g5

0x6752,	// (0x0008a542) bg_cale_heading_pane_g6

0x675a,	// (0x0008a54a) bg_cale_heading_pane_g7

0x6762,	// (0x0008a552) bg_cale_heading_pane_g8

0x676c,	// (0x0008a55c) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x000931a4) bg_cale_heading_pane_g

0xcbc8,	// (0x000909b8) bg_cale_side_pane_g1

0x6776,	// (0x0008a566) bg_cale_side_pane_g2

0x6780,	// (0x0008a570) bg_cale_side_pane_g3

0x678a,	// (0x0008a57a) bg_cale_side_pane_g4

0x6794,	// (0x0008a584) bg_cale_side_pane_g5

0x679e,	// (0x0008a58e) bg_cale_side_pane_g6

0x67a8,	// (0x0008a598) bg_cale_side_pane_g7

0x67b2,	// (0x0008a5a2) bg_cale_side_pane_g8

0x67ba,	// (0x0008a5aa) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x000931b7) bg_cale_side_pane_g

0x67c2,	// (0x0008a5b2) popup_call_status_window_ParamLimits

0x67c2,	// (0x0008a5b2) popup_call_status_window

0xcbd0,	// (0x000909c0) stacon_top_pane

0xcbd8,	// (0x000909c8) status_pane_ParamLimits

0xcbd8,	// (0x000909c8) status_pane

0xcbed,	// (0x000909dd) status_small_pane

0xcbf5,	// (0x000909e5) control_pane

0xe733,	// (0x00092523) stacon_bottom_pane

0xcbfd,	// (0x000909ed) list_single_mce_smart_pane_t1_ParamLimits

0xcbfd,	// (0x000909ed) list_single_mce_smart_pane_t1

0xcc10,	// (0x00090a00) list_single_mce_smart_pane_t2_ParamLimits

0xcc10,	// (0x00090a00) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x000931ca) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x000931ca) list_single_mce_smart_pane_t

0x67ce,	// (0x0008a5be) compass_pane

0x67d9,	// (0x0008a5c9) main_location2_pane_t1

0x67ef,	// (0x0008a5df) main_location2_pane_t2

0x6805,	// (0x0008a5f5) main_location2_pane_t3

0x0003,

0xf3df,	// (0x000931cf) main_location2_pane_t

0xcc2f,	// (0x00090a1f) compass_pane_g1_ParamLimits

0xcc2f,	// (0x00090a1f) compass_pane_g1

0x6853,	// (0x0008a643) compass_pane_t1

0x6862,	// (0x0008a652) compass_pane_t2

0x0005,

0xf3e8,	// (0x000931d8) compass_pane_t

0x68ad,	// (0x0008a69d) text_secondary_cp61

0xcc43,	// (0x00090a33) navi_pane_cams_g5

0xcc66,	// (0x00090a56) navi_pane_im_t1

0xcc74,	// (0x00090a64) navi_pane_mp_g1_ParamLimits

0xcc74,	// (0x00090a64) navi_pane_mp_g1

0xcc88,	// (0x00090a78) navi_pane_mp_g2_ParamLimits

0xcc88,	// (0x00090a78) navi_pane_mp_g2

0xcc94,	// (0x00090a84) navi_pane_mp_g3_ParamLimits

0xcc94,	// (0x00090a84) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x000931ec) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x000931ec) navi_pane_mp_g

0xcca0,	// (0x00090a90) navi_pane_mp_t1

0xccae,	// (0x00090a9e) navi_pane_mp_t2

0x0002,

0xf403,	// (0x000931f3) navi_pane_mp_t

0xccea,	// (0x00090ada) navi_pane_vt_g1

0xcca0,	// (0x00090a90) navi_pane_vt_t1

0xccf2,	// (0x00090ae2) navi_slider_pane

0xccfa,	// (0x00090aea) zooming_pane

0xcd02,	// (0x00090af2) navi_slider_pane_g1

0x69da,	// (0x0008a7ca) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x000931fa) navi_slider_pane_g

0xcd26,	// (0x00090b16) aid_levels_zoom

0xcd2e,	// (0x00090b1e) zooming_pane_g1

0xcd36,	// (0x00090b26) zooming_pane_g2

0xcd36,	// (0x00090b26) zooming_pane_g3

0x0002,

0xf419,	// (0x00093209) zooming_pane_g

0xcd3e,	// (0x00090b2e) level_10_zoom

0xcd47,	// (0x00090b37) level_11_zoom

0xcd50,	// (0x00090b40) level_1_zoom

0xcd59,	// (0x00090b49) level_2_zoom

0xcd62,	// (0x00090b52) level_3_zoom

0xcd6b,	// (0x00090b5b) level_4_zoom

0xcd74,	// (0x00090b64) level_5_zoom

0xcd7d,	// (0x00090b6d) level_6_zoom

0xcd86,	// (0x00090b76) level_7_zoom

0xcd8f,	// (0x00090b7f) level_8_zoom

0xcd98,	// (0x00090b88) level_9_zoom

0xcda9,	// (0x00090b99) popup_phob_thumbnail_window_g1

0xcdb1,	// (0x00090ba1) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x00093210) popup_phob_thumbnail_window_g

0xe0ac,	// (0x00091e9c) level_1_location

0xe0b4,	// (0x00091ea4) level_2_location

0xe0bc,	// (0x00091eac) level_3_location

0xe0c4,	// (0x00091eb4) level_4_location

0xccfa,	// (0x00090aea) level_5_location

0x69ec,	// (0x0008a7dc) mce_icon_pane_g1

0x69f4,	// (0x0008a7e4) mce_icon_pane_g2

0x0001,

0xf425,	// (0x00093215) mce_icon_pane_g

0x69fc,	// (0x0008a7ec) main_mup_pane_g1_ParamLimits

0x69fc,	// (0x0008a7ec) main_mup_pane_g1

0x6a14,	// (0x0008a804) main_mup_pane_g2_ParamLimits

0x6a14,	// (0x0008a804) main_mup_pane_g2

0x6a30,	// (0x0008a820) main_mup_pane_g3_ParamLimits

0x6a30,	// (0x0008a820) main_mup_pane_g3

0x6a4c,	// (0x0008a83c) main_mup_pane_g4_ParamLimits

0x6a4c,	// (0x0008a83c) main_mup_pane_g4

0x6a60,	// (0x0008a850) main_mup_pane_g5_ParamLimits

0x6a60,	// (0x0008a850) main_mup_pane_g5

0x6a81,	// (0x0008a871) main_mup_pane_g6_ParamLimits

0x6a81,	// (0x0008a871) main_mup_pane_g6

0x6aa1,	// (0x0008a891) main_mup_pane_g7_ParamLimits

0x6aa1,	// (0x0008a891) main_mup_pane_g7

0x6ac5,	// (0x0008a8b5) main_mup_pane_g8_ParamLimits

0x6ac5,	// (0x0008a8b5) main_mup_pane_g8

0x6ae9,	// (0x0008a8d9) main_mup_pane_g9_ParamLimits

0x6ae9,	// (0x0008a8d9) main_mup_pane_g9

0x6b0c,	// (0x0008a8fc) main_mup_pane_g10_ParamLimits

0x6b0c,	// (0x0008a8fc) main_mup_pane_g10

0x6b2f,	// (0x0008a91f) main_mup_pane_g11_ParamLimits

0x6b2f,	// (0x0008a91f) main_mup_pane_g11

0x6b4f,	// (0x0008a93f) main_mup_pane_g12_ParamLimits

0x6b4f,	// (0x0008a93f) main_mup_pane_g12

0x6b5d,	// (0x0008a94d) main_mup_pane_g13_ParamLimits

0x6b5d,	// (0x0008a94d) main_mup_pane_g13

0x000c,

0xf42a,	// (0x0009321a) main_mup_pane_g_ParamLimits

0xf42a,	// (0x0009321a) main_mup_pane_g

0x6b73,	// (0x0008a963) main_mup_pane_t1_ParamLimits

0x6b73,	// (0x0008a963) main_mup_pane_t1

0x6b92,	// (0x0008a982) main_mup_pane_t2_ParamLimits

0x6b92,	// (0x0008a982) main_mup_pane_t2

0x6bac,	// (0x0008a99c) main_mup_pane_t3_ParamLimits

0x6bac,	// (0x0008a99c) main_mup_pane_t3

0x6bc6,	// (0x0008a9b6) main_mup_pane_t4_ParamLimits

0x6bc6,	// (0x0008a9b6) main_mup_pane_t4

0x6bd8,	// (0x0008a9c8) main_mup_pane_t5_ParamLimits

0x6bd8,	// (0x0008a9c8) main_mup_pane_t5

0x6bea,	// (0x0008a9da) main_mup_pane_t6_ParamLimits

0x6bea,	// (0x0008a9da) main_mup_pane_t6

0x0005,

0xf445,	// (0x00093235) main_mup_pane_t_ParamLimits

0xf445,	// (0x00093235) main_mup_pane_t

0x6c00,	// (0x0008a9f0) mup_progress_pane_ParamLimits

0x6c00,	// (0x0008a9f0) mup_progress_pane

0x6c0c,	// (0x0008a9fc) mup_visualizer_pane_ParamLimits

0x6c0c,	// (0x0008a9fc) mup_visualizer_pane

0x6c46,	// (0x0008aa36) mup_volume_pane_ParamLimits

0x6c46,	// (0x0008aa36) mup_volume_pane

0xca9e,	// (0x0009088e) mup_visualizer_pane_g1_ParamLimits

0xca9e,	// (0x0009088e) mup_visualizer_pane_g1

0xca9e,	// (0x0009088e) mup_visualizer_pane_g2_ParamLimits

0xca9e,	// (0x0009088e) mup_visualizer_pane_g2

0xcc2f,	// (0x00090a1f) mup_visualizer_pane_g3_ParamLimits

0xcc2f,	// (0x00090a1f) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x00093242) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x00093242) mup_visualizer_pane_g

0xeab6,	// (0x000928a6) mup_volume_pane_g1

0xcdc1,	// (0x00090bb1) mup_volume_pane_g2

0x0001,

0xf459,	// (0x00093249) mup_volume_pane_g

0xeab6,	// (0x000928a6) mup_progress_pane_g1

0xcdca,	// (0x00090bba) mup_progress_pane_g2

0xcdd3,	// (0x00090bc3) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x0009324e) mup_progress_pane_g

0xe733,	// (0x00092523) bg_popup_window_pane_cp05

0xcddc,	// (0x00090bcc) heading_pane_cp02_ParamLimits

0xcddc,	// (0x00090bcc) heading_pane_cp02

0xcdf8,	// (0x00090be8) list_popup_blid_pane

0xce00,	// (0x00090bf0) list_blid_sat_info_pane_ParamLimits

0xce00,	// (0x00090bf0) list_blid_sat_info_pane

0xce13,	// (0x00090c03) list_blid_sat_info_pane_g1

0xce1b,	// (0x00090c0b) list_blid_sat_info_pane_t1

0x6d65,	// (0x0008ab55) mup_equalizer_pane_ParamLimits

0x6d65,	// (0x0008ab55) mup_equalizer_pane

0x6d86,	// (0x0008ab76) mup_equalizer_pane_cp1_ParamLimits

0x6d86,	// (0x0008ab76) mup_equalizer_pane_cp1

0x6da7,	// (0x0008ab97) mup_equalizer_pane_cp2_ParamLimits

0x6da7,	// (0x0008ab97) mup_equalizer_pane_cp2

0x6dc8,	// (0x0008abb8) mup_equalizer_pane_cp3_ParamLimits

0x6dc8,	// (0x0008abb8) mup_equalizer_pane_cp3

0x6ded,	// (0x0008abdd) mup_equalizer_pane_cp4_ParamLimits

0x6ded,	// (0x0008abdd) mup_equalizer_pane_cp4

0x6e12,	// (0x0008ac02) mup_equalizer_pane_cp5

0x6e2a,	// (0x0008ac1a) mup_equalizer_pane_cp6

0x6e42,	// (0x0008ac32) mup_equalizer_pane_cp7

0xdfc6,	// (0x00091db6) bg_popup_call_poc_act_pane_g9

0xdfce,	// (0x00091dbe) bg_popup_call_poc_act_pane_g10

0xdfd6,	// (0x00091dc6) bg_popup_call_poc_act_pane_g11

0x000a,

0xe98e,	// (0x0009277e) mup_scale_pane

0xeab6,	// (0x000928a6) mup_scale_pane_g1

0xce29,	// (0x00090c19) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x0009326a) mup_scale_pane_g

0xce4d,	// (0x00090c3d) msg_data_pane

0xce55,	// (0x00090c45) scroll_pane_cp017

0x6e6c,	// (0x0008ac5c) bg_list_pane_cp04_ParamLimits

0x6e6c,	// (0x0008ac5c) bg_list_pane_cp04

0xce5d,	// (0x00090c4d) msg_data_pane_g1

0x6e8c,	// (0x0008ac7c) msg_data_pane_g2

0x6e96,	// (0x0008ac86) msg_data_pane_g3

0x6ea0,	// (0x0008ac90) msg_data_pane_g4

0x6ea8,	// (0x0008ac98) msg_data_pane_g5

0x6eb0,	// (0x0008aca0) msg_data_pane_g6

0x6eb8,	// (0x0008aca8) msg_data_pane_g7

0x0006,

0xf489,	// (0x00093279) msg_data_pane_g

0x6ec0,	// (0x0008acb0) msg_text_pane_ParamLimits

0x6ec0,	// (0x0008acb0) msg_text_pane

0x6ee6,	// (0x0008acd6) qrid_highlight_pane_cp011_ParamLimits

0x6ee6,	// (0x0008acd6) qrid_highlight_pane_cp011

0xe733,	// (0x00092523) msg_body_pane

0xe733,	// (0x00092523) msg_header_pane

0xce6e,	// (0x00090c5e) input_focus_pane_cp07

0x6f0a,	// (0x0008acfa) msg_header_pane_t1_ParamLimits

0x6f0a,	// (0x0008acfa) msg_header_pane_t1

0x0027,	// (0x00083e17) msg_header_pane_t2_ParamLimits

0x0027,	// (0x00083e17) msg_header_pane_t2

0x0001,

0xf49d,	// (0x0009328d) msg_header_pane_t_ParamLimits

0xf49d,	// (0x0009328d) msg_header_pane_t

0xce83,	// (0x00090c73) msg_body_pane_g1

0x0039,	// (0x00083e29) msg_body_pane_t1_ParamLimits

0x0039,	// (0x00083e29) msg_body_pane_t1

0x006a,	// (0x00083e5a) msg_body_pane_t2_ParamLimits

0x006a,	// (0x00083e5a) msg_body_pane_t2

0x007c,	// (0x00083e6c) msg_body_pane_t3_ParamLimits

0x007c,	// (0x00083e6c) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x00093292) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x00093292) msg_body_pane_t

0x6f70,	// (0x0008ad60) main_viewer_pane_g1_ParamLimits

0x6f70,	// (0x0008ad60) main_viewer_pane_g1

0x6f7c,	// (0x0008ad6c) main_viewer_pane_g2_ParamLimits

0x6f7c,	// (0x0008ad6c) main_viewer_pane_g2

0x6f88,	// (0x0008ad78) main_viewer_pane_g3_ParamLimits

0x6f88,	// (0x0008ad78) main_viewer_pane_g3

0x6f99,	// (0x0008ad89) main_viewer_pane_g4_ParamLimits

0x6f99,	// (0x0008ad89) main_viewer_pane_g4

0x6faa,	// (0x0008ad9a) main_viewer_pane_g5_ParamLimits

0x6faa,	// (0x0008ad9a) main_viewer_pane_g5

0x6faa,	// (0x0008ad9a) main_viewer_pane_g7_ParamLimits

0x6faa,	// (0x0008ad9a) main_viewer_pane_g7

0x6fbc,	// (0x0008adac) main_viewer_pane_g8_ParamLimits

0x6fbc,	// (0x0008adac) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x000932a2) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x000932a2) main_viewer_pane_g

0xce8b,	// (0x00090c7b) viewer_content_pane_ParamLimits

0xce8b,	// (0x00090c7b) viewer_content_pane

0x6ff4,	// (0x0008ade4) main_postcard_pane_g1_ParamLimits

0x6ff4,	// (0x0008ade4) main_postcard_pane_g1

0x7002,	// (0x0008adf2) main_postcard_pane_g2_ParamLimits

0x7002,	// (0x0008adf2) main_postcard_pane_g2

0x7010,	// (0x0008ae00) main_postcard_pane_g3_ParamLimits

0x7010,	// (0x0008ae00) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x000932b3) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x000932b3) main_postcard_pane_g

0x7020,	// (0x0008ae10) main_postcard_pane_g4

0xe1b3,	// (0x00091fa3) smil_status_volume_pane_g2

0x704c,	// (0x0008ae3c) postcard_pane_ParamLimits

0x704c,	// (0x0008ae3c) postcard_pane

0xca9e,	// (0x0009088e) postcard_pane_g1_ParamLimits

0xca9e,	// (0x0009088e) postcard_pane_g1

0x7086,	// (0x0008ae76) postcard_pane_g2_ParamLimits

0x7086,	// (0x0008ae76) postcard_pane_g2

0x7092,	// (0x0008ae82) postcard_pane_g3_ParamLimits

0x7092,	// (0x0008ae82) postcard_pane_g3

0xce99,	// (0x00090c89) postcard_pane_g4_ParamLimits

0xce99,	// (0x00090c89) postcard_pane_g4

0x709e,	// (0x0008ae8e) postcard_pane_g5_ParamLimits

0x709e,	// (0x0008ae8e) postcard_pane_g5

0x70aa,	// (0x0008ae9a) postcard_pane_g6_ParamLimits

0x70aa,	// (0x0008ae9a) postcard_pane_g6

0xcea7,	// (0x00090c97) postcard_pane_g7_ParamLimits

0xcea7,	// (0x00090c97) postcard_pane_g7

0x0006,

0xf4d0,	// (0x000932c0) postcard_pane_g_ParamLimits

0xf4d0,	// (0x000932c0) postcard_pane_g

0x70b8,	// (0x0008aea8) main_mp2_pane_g1_ParamLimits

0x70b8,	// (0x0008aea8) main_mp2_pane_g1

0x70c6,	// (0x0008aeb6) main_mp2_pane_g2_ParamLimits

0x70c6,	// (0x0008aeb6) main_mp2_pane_g2

0x70d2,	// (0x0008aec2) main_mp2_pane_g3_ParamLimits

0x70d2,	// (0x0008aec2) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x000932cf) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x000932cf) main_mp2_pane_g

0x70de,	// (0x0008aece) main_mp2_pane_t1_ParamLimits

0x70de,	// (0x0008aece) main_mp2_pane_t1

0x70f5,	// (0x0008aee5) main_mp2_pane_t2_ParamLimits

0x70f5,	// (0x0008aee5) main_mp2_pane_t2

0x7109,	// (0x0008aef9) main_mp2_pane_t3_ParamLimits

0x7109,	// (0x0008aef9) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x000932d6) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x000932d6) main_mp2_pane_t

0xceb5,	// (0x00090ca5) pec_content_pane_ParamLimits

0xceb5,	// (0x00090ca5) pec_content_pane

0xee7b,	// (0x00092c6b) scroll_pane_cp015

0xcec7,	// (0x00090cb7) pec_attribute_pane_ParamLimits

0xcec7,	// (0x00090cb7) pec_attribute_pane

0x711b,	// (0x0008af0b) pec_content_pane_g1_ParamLimits

0x711b,	// (0x0008af0b) pec_content_pane_g1

0xced7,	// (0x00090cc7) pec_content_pane_t1_ParamLimits

0xced7,	// (0x00090cc7) pec_content_pane_t1

0xcee9,	// (0x00090cd9) pec_content_pane_t2_ParamLimits

0xcee9,	// (0x00090cd9) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x000932dd) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x000932dd) pec_content_pane_t

0x7127,	// (0x0008af17) list_single_graphic_pane_cp01_ParamLimits

0x7127,	// (0x0008af17) list_single_graphic_pane_cp01

0xe98e,	// (0x0009277e) bg_popup_sub_pane_cp04

0xcefb,	// (0x00090ceb) popup_mup_playback_window_g1

0xcf07,	// (0x00090cf7) popup_mup_playback_window_t1

0xcf1c,	// (0x00090d0c) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x000932e2) popup_mup_playback_window_t

0xcf53,	// (0x00090d43) main_image_pane_g1_ParamLimits

0xcf53,	// (0x00090d43) main_image_pane_g1

0xcf96,	// (0x00090d86) scroll_pane_cp018_ParamLimits

0xcf96,	// (0x00090d86) scroll_pane_cp018

0xcfae,	// (0x00090d9e) scroll_pane_cp016_ParamLimits

0xcfae,	// (0x00090d9e) scroll_pane_cp016

0x71b5,	// (0x0008afa5) smil2_image_pane_ParamLimits

0x71b5,	// (0x0008afa5) smil2_image_pane

0x71eb,	// (0x0008afdb) smil2_root_pane_ParamLimits

0x71eb,	// (0x0008afdb) smil2_root_pane

0x7217,	// (0x0008b007) smil2_text_pane_ParamLimits

0x7217,	// (0x0008b007) smil2_text_pane

0xe733,	// (0x00092523) bg_list_pane_cp06

0xcfea,	// (0x00090dda) grid_radio_pane

0xe733,	// (0x00092523) bg_popup_window_pane_cp06

0xcff4,	// (0x00090de4) main_fmradio_pane_t1

0xcaac,	// (0x0009089c) heading_pane_cp04

0xd002,	// (0x00090df2) main_fmradio_pane_t2

0xdfde,	// (0x00091dce) popup_cale_lunar_info_window_g1

0xd010,	// (0x00090e00) main_fmradio_pane_t3

0xdfe6,	// (0x00091dd6) popup_cale_lunar_info_window_g2

0xd020,	// (0x00090e10) main_fmradio_pane_t4

0x0001,

0xd02e,	// (0x00090e1e) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x000933bd) popup_cale_lunar_info_window_g

0xf507,	// (0x000932f7) main_fmradio_pane_t

0xd03c,	// (0x00090e2c) wait_bar_pane_cp03

0xd044,	// (0x00090e34) cell_fmradio_pane_ParamLimits

0xd044,	// (0x00090e34) cell_fmradio_pane

0xcea7,	// (0x00090c97) cell_fmradio_pane_g1_ParamLimits

0xcea7,	// (0x00090c97) cell_fmradio_pane_g1

0xe733,	// (0x00092523) grid_highlight_pane_cp011

0xd059,	// (0x00090e49) poc_content_pane_ParamLimits

0xd059,	// (0x00090e49) poc_content_pane

0xd06b,	// (0x00090e5b) scroll_pane_cp019

0x7257,	// (0x0008b047) popup_call_poc_act_window_ParamLimits

0x7257,	// (0x0008b047) popup_call_poc_act_window

0x7264,	// (0x0008b054) popup_call_poc_inact_window_ParamLimits

0x7264,	// (0x0008b054) popup_call_poc_inact_window

0xf5a4,	// (0x00093394) bg_popup_call_poc_act_pane_g

0xdf56,	// (0x00091d46) bg_popup_call_poc_inact_pane_g1

0xdf5e,	// (0x00091d4e) bg_popup_call_poc_inact_pane_g2

0xd073,	// (0x00090e63) popup_call_poc_act_window_g2

0xdf66,	// (0x00091d56) bg_popup_call_poc_inact_pane_g3

0xdf6e,	// (0x00091d5e) bg_popup_call_poc_inact_pane_g4

0xdf76,	// (0x00091d66) bg_popup_call_poc_inact_pane_g5

0xd07b,	// (0x00090e6b) popup_call_poc_act_window_t1_ParamLimits

0xd07b,	// (0x00090e6b) popup_call_poc_act_window_t1

0xd0a3,	// (0x00090e93) popup_call_poc_act_window_t2_ParamLimits

0xd0a3,	// (0x00090e93) popup_call_poc_act_window_t2

0xd0cb,	// (0x00090ebb) popup_call_poc_act_window_t3_ParamLimits

0xd0cb,	// (0x00090ebb) popup_call_poc_act_window_t3

0xd0f3,	// (0x00090ee3) popup_call_poc_act_window_t4_ParamLimits

0xd0f3,	// (0x00090ee3) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x00093302) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x00093302) popup_call_poc_act_window_t

0xdf7e,	// (0x00091d6e) bg_popup_call_poc_inact_pane_g6

0xdf86,	// (0x00091d76) bg_popup_call_poc_inact_pane_g7

0xdf8e,	// (0x00091d7e) bg_popup_call_poc_inact_pane_g8

0xd105,	// (0x00090ef5) popup_call_poc_inact_window_g2

0xdf96,	// (0x00091d86) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x00093381) bg_popup_call_poc_inact_pane_g

0xd10d,	// (0x00090efd) popup_call_poc_inact_window_t1_ParamLimits

0xd10d,	// (0x00090efd) popup_call_poc_inact_window_t1

0xd122,	// (0x00090f12) popup_call_poc_inact_window_t2_ParamLimits

0xd122,	// (0x00090f12) popup_call_poc_inact_window_t2

0xd137,	// (0x00090f27) popup_call_poc_inact_window_t3_ParamLimits

0xd137,	// (0x00090f27) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x0009330b) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x0009330b) popup_call_poc_inact_window_t

0xe113,	// (0x00091f03) context_pane_ParamLimits

0x78c4,	// (0x0008b6b4) signal_pane_ParamLimits

0xccfa,	// (0x00090aea) main_call2_pane

0x7834,	// (0x0008b624) popup_phob_thumbnail2_window_ParamLimits

0x7834,	// (0x0008b624) popup_phob_thumbnail2_window

0x6f1e,	// (0x0008ad0e) aid_hotspot_pointer_arrow_pane

0x6f26,	// (0x0008ad16) aid_hotspot_pointer_hand_pane

0x7589,	// (0x0008b379) phob_pre_status_pane_g5

0x530d,	// (0x000890fd) cams_zoom_pane_ParamLimits

0x5319,	// (0x00089109) image_vga_pane_ParamLimits

0x5328,	// (0x00089118) main_camera_pane_g1_ParamLimits

0x5336,	// (0x00089126) main_camera_pane_g2_ParamLimits

0x5342,	// (0x00089132) main_camera_pane_g3_ParamLimits

0x5350,	// (0x00089140) main_camera_pane_g4_ParamLimits

0x535e,	// (0x0008914e) main_camera_pane_g5_ParamLimits

0x536c,	// (0x0008915c) main_camera_pane_g6_ParamLimits

0x537a,	// (0x0008916a) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0009300a) main_camera_pane_g_ParamLimits

0x5388,	// (0x00089178) main_camera_pane_t1_ParamLimits

0x539a,	// (0x0008918a) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x0009301b) main_camera_pane_t_ParamLimits

0xe98e,	// (0x0009277e) bg_popup_preview_window_pane_cp01_ParamLimits

0xe98e,	// (0x0009277e) bg_popup_preview_window_pane_cp01

0xd14c,	// (0x00090f3c) popup_phob_thumbnail2_window_g1_ParamLimits

0xd14c,	// (0x00090f3c) popup_phob_thumbnail2_window_g1

0xe733,	// (0x00092523) call2_cli_visual_pane

0x7280,	// (0x0008b070) popup_call2_audio_conf_window_ParamLimits

0x7280,	// (0x0008b070) popup_call2_audio_conf_window

0x7299,	// (0x0008b089) popup_call2_audio_first_window_ParamLimits

0x7299,	// (0x0008b089) popup_call2_audio_first_window

0x7337,	// (0x0008b127) popup_call2_audio_in_window_ParamLimits

0x7337,	// (0x0008b127) popup_call2_audio_in_window

0x737b,	// (0x0008b16b) popup_call2_audio_out_window_ParamLimits

0x737b,	// (0x0008b16b) popup_call2_audio_out_window

0x73e5,	// (0x0008b1d5) popup_call2_audio_second_window_ParamLimits

0x73e5,	// (0x0008b1d5) popup_call2_audio_second_window

0x7443,	// (0x0008b233) popup_call2_audio_wait_window_ParamLimits

0x7443,	// (0x0008b233) popup_call2_audio_wait_window

0xe733,	// (0x00092523) bg_popup_call2_act_pane_cp03

0xe970,	// (0x00092760) list_conf_pane_cp

0xd158,	// (0x00090f48) popup_call2_audio_conf_window_t1

0xd166,	// (0x00090f56) list_single_graphic_popup_conf2_pane_ParamLimits

0xd166,	// (0x00090f56) list_single_graphic_popup_conf2_pane

0xcb1b,	// (0x0009090b) list_highlight_pane_cp04

0xd179,	// (0x00090f69) list_single_graphic_popup_conf2_pane_g1

0xcb2c,	// (0x0009091c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x00093312) list_single_graphic_popup_conf2_pane_g

0xd183,	// (0x00090f73) list_single_graphic_popup_conf2_pane_t1

0xd191,	// (0x00090f81) bg_popup_call2_act_pane_cp01_ParamLimits

0xd191,	// (0x00090f81) bg_popup_call2_act_pane_cp01

0xd21b,	// (0x0009100b) call_type_pane_cp05_ParamLimits

0xd21b,	// (0x0009100b) call_type_pane_cp05

0xd26f,	// (0x0009105f) popup_call2_audio_second_window_g1_ParamLimits

0xd26f,	// (0x0009105f) popup_call2_audio_second_window_g1

0xd2c3,	// (0x000910b3) popup_call2_audio_second_window_g2_ParamLimits

0xd2c3,	// (0x000910b3) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00093317) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00093317) popup_call2_audio_second_window_g

0xd328,	// (0x00091118) popup_call2_audio_second_window_t1_ParamLimits

0xd328,	// (0x00091118) popup_call2_audio_second_window_t1

0xd3e3,	// (0x000911d3) popup_call2_audio_second_window_t2_ParamLimits

0xd3e3,	// (0x000911d3) popup_call2_audio_second_window_t2

0xd436,	// (0x00091226) popup_call2_audio_second_window_t3_ParamLimits

0xd436,	// (0x00091226) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x0009331e) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x0009331e) popup_call2_audio_second_window_t

0xe733,	// (0x00092523) bg_popup_call2_in_pane_cp02

0xe73d,	// (0x0009252d) call_type_pane_cp04

0xe745,	// (0x00092535) popup_call2_audio_wait_window_g1

0xe74d,	// (0x0009253d) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x00092ef7) popup_call2_audio_wait_window_g

0xe755,	// (0x00092545) popup_call2_audio_wait_window_t3

0xd529,	// (0x00091319) bg_popup_call2_act_pane_ParamLimits

0xd529,	// (0x00091319) bg_popup_call2_act_pane

0xd5e9,	// (0x000913d9) call_type_pane_cp03_ParamLimits

0xd5e9,	// (0x000913d9) call_type_pane_cp03

0xd64d,	// (0x0009143d) popup_call2_audio_first_window_g1_ParamLimits

0xd64d,	// (0x0009143d) popup_call2_audio_first_window_g1

0xd6bd,	// (0x000914ad) popup_call2_audio_first_window_g2_ParamLimits

0xd6bd,	// (0x000914ad) popup_call2_audio_first_window_g2

0xca9e,	// (0x0009088e) popup_call2_audio_first_window_g3_ParamLimits

0xca9e,	// (0x0009088e) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x00093327) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x00093327) popup_call2_audio_first_window_g

0xd79b,	// (0x0009158b) popup_call2_audio_first_window_t1_ParamLimits

0xd79b,	// (0x0009158b) popup_call2_audio_first_window_t1

0xd89e,	// (0x0009168e) popup_call2_audio_first_window_t4_ParamLimits

0xd89e,	// (0x0009168e) popup_call2_audio_first_window_t4

0xd981,	// (0x00091771) popup_call2_audio_first_window_t5_ParamLimits

0xd981,	// (0x00091771) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x00093332) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x00093332) popup_call2_audio_first_window_t

0xe986,	// (0x00092776) bg_popup_call2_act_pane_g1

0xdff0,	// (0x00091de0) popup_cale_lunar_info_window_t1

0xdffe,	// (0x00091dee) popup_cale_lunar_info_window_t2

0xe00c,	// (0x00091dfc) popup_cale_lunar_info_window_t3

0xe733,	// (0x00092523) bg_popup_call2_bubble_pane

0xda82,	// (0x00091872) bg_popup_call2_in_pane_cp01_ParamLimits

0xda82,	// (0x00091872) bg_popup_call2_in_pane_cp01

0xe40f,	// (0x000921ff) call_type_pane_cp02

0xdaca,	// (0x000918ba) popup_call2_audio_out_window_g1_ParamLimits

0xdaca,	// (0x000918ba) popup_call2_audio_out_window_g1

0xdaf6,	// (0x000918e6) popup_call2_audio_out_window_g2_ParamLimits

0xdaf6,	// (0x000918e6) popup_call2_audio_out_window_g2

0xdb1e,	// (0x0009190e) popup_call2_audio_out_window_g3_ParamLimits

0xdb1e,	// (0x0009190e) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x0009333b) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x0009333b) popup_call2_audio_out_window_g

0xdb59,	// (0x00091949) popup_call2_audio_out_window_t1_ParamLimits

0xdb59,	// (0x00091949) popup_call2_audio_out_window_t1

0xdbb8,	// (0x000919a8) popup_call2_audio_out_window_t2_ParamLimits

0xdbb8,	// (0x000919a8) popup_call2_audio_out_window_t2

0xdc0c,	// (0x000919fc) popup_call2_audio_out_window_t3_ParamLimits

0xdc0c,	// (0x000919fc) popup_call2_audio_out_window_t3

0xdc22,	// (0x00091a12) popup_call2_audio_out_window_t4_ParamLimits

0xdc22,	// (0x00091a12) popup_call2_audio_out_window_t4

0xdc38,	// (0x00091a28) popup_call2_audio_out_window_t5_ParamLimits

0xdc38,	// (0x00091a28) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x00093344) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x00093344) popup_call2_audio_out_window_t

0xdc9c,	// (0x00091a8c) bg_popup_call2_in_pane_ParamLimits

0xdc9c,	// (0x00091a8c) bg_popup_call2_in_pane

0xdcf8,	// (0x00091ae8) popup_call2_audio_in_window_g1_ParamLimits

0xdcf8,	// (0x00091ae8) popup_call2_audio_in_window_g1

0xdd30,	// (0x00091b20) popup_call2_audio_in_window_g2_ParamLimits

0xdd30,	// (0x00091b20) popup_call2_audio_in_window_g2

0xdd68,	// (0x00091b58) popup_call2_audio_in_window_g3_ParamLimits

0xdd68,	// (0x00091b58) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x00093351) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x00093351) popup_call2_audio_in_window_g

0xddc0,	// (0x00091bb0) popup_call2_audio_in_window_t1_ParamLimits

0xddc0,	// (0x00091bb0) popup_call2_audio_in_window_t1

0xde40,	// (0x00091c30) popup_call2_audio_in_window_t2_ParamLimits

0xde40,	// (0x00091c30) popup_call2_audio_in_window_t2

0xdec0,	// (0x00091cb0) popup_call2_audio_in_window_t3_ParamLimits

0xdec0,	// (0x00091cb0) popup_call2_audio_in_window_t3

0xdeda,	// (0x00091cca) popup_call2_audio_in_window_t4_ParamLimits

0xdeda,	// (0x00091cca) popup_call2_audio_in_window_t4

0xdeec,	// (0x00091cdc) popup_call2_audio_in_window_t5_ParamLimits

0xdeec,	// (0x00091cdc) popup_call2_audio_in_window_t5

0xdf01,	// (0x00091cf1) popup_call2_audio_in_window_t6_ParamLimits

0xdf01,	// (0x00091cf1) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x0009335a) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x0009335a) popup_call2_audio_in_window_t

0xe986,	// (0x00092776) bg_popup_call2_in_pane_g1

0xe01a,	// (0x00091e0a) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x000933c2) popup_cale_lunar_info_window_t

0xe98e,	// (0x0009277e) bg_popup_call2_rect_pane_ParamLimits

0xe98e,	// (0x0009277e) bg_popup_call2_rect_pane

0xe733,	// (0x00092523) call2_cli_visual_graphic_pane

0xe733,	// (0x00092523) call2_cli_visual_text_pane

0x7949,	// (0x0008b739) smil_status_volume_pane_g3

0x0002,

0xeab6,	// (0x000928a6) call2_cli_visual_graphic_pane_g1

0xeab6,	// (0x000928a6) call2_cli_visual_graphic_pane_g2

0xeab6,	// (0x000928a6) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x00093367) call2_cli_visual_graphic_pane_g

0xdf16,	// (0x00091d06) bg_popup_call2_rect_pane_g1

0xeb54,	// (0x00092944) bg_popup_call2_rect_pane_g2

0xdf1e,	// (0x00091d0e) bg_popup_call2_rect_pane_g3

0xdf26,	// (0x00091d16) bg_popup_call2_rect_pane_g4

0xdf2e,	// (0x00091d1e) bg_popup_call2_rect_pane_g5

0xdf36,	// (0x00091d26) bg_popup_call2_rect_pane_g6

0xdf3e,	// (0x00091d2e) bg_popup_call2_rect_pane_g7

0xdf46,	// (0x00091d36) bg_popup_call2_rect_pane_g8

0xdf4e,	// (0x00091d3e) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x0009336e) bg_popup_call2_rect_pane_g

0xdf56,	// (0x00091d46) bg_popup_call2_bubble_pane_g1

0xdf5e,	// (0x00091d4e) bg_popup_call2_bubble_pane_g2

0xdf66,	// (0x00091d56) bg_popup_call2_bubble_pane_g3

0xdf6e,	// (0x00091d5e) bg_popup_call2_bubble_pane_g4

0xdf76,	// (0x00091d66) bg_popup_call2_bubble_pane_g5

0xdf7e,	// (0x00091d6e) bg_popup_call2_bubble_pane_g6

0xdf86,	// (0x00091d76) bg_popup_call2_bubble_pane_g7

0xdf8e,	// (0x00091d7e) bg_popup_call2_bubble_pane_g8

0xdf96,	// (0x00091d86) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x00093381) bg_popup_call2_bubble_pane_g

0x4e0c,	// (0x00088bfc) aid_cale_week_size_cell_pane

0x53ae,	// (0x0008919e) aid_cams_cif_uncrop_pane_ParamLimits

0x53ae,	// (0x0008919e) aid_cams_cif_uncrop_pane

0x550b,	// (0x000892fb) aid_cams_size_cell_ParamLimits

0x550b,	// (0x000892fb) aid_cams_size_cell

0x5517,	// (0x00089307) grid_cams_pane_ParamLimits

0x5525,	// (0x00089315) linegrid_cams_pane_ParamLimits

0x564d,	// (0x0008943d) call_video_pane_t1

0x566a,	// (0x0008945a) call_video_pane_t2

0x0001,

0xf27e,	// (0x0009306e) call_video_pane_t

0x5b24,	// (0x00089914) aid_cale_month_size_cell_pane_ParamLimits

0x5b24,	// (0x00089914) aid_cale_month_size_cell_pane

0xf61b,	// (0x0009340b) smil_status_volume_pane_g

0x7956,	// (0x0008b746) volume_smil_pane_ParamLimits

0x45d2,	// (0x000883c2) aid_popup2_width_pane

0x4d12,	// (0x00088b02) cell_qdial_pane_g4_ParamLimits

0x4d12,	// (0x00088b02) cell_qdial_pane_g4

0x682f,	// (0x0008a61f) aid_blid_cardinal_pane_ParamLimits

0x683f,	// (0x0008a62f) aid_blid_destination_pane_ParamLimits

0x683f,	// (0x0008a62f) aid_blid_destination_pane

0xe98e,	// (0x0009277e) bg_popup_call_poc_act_pane_ParamLimits

0xe98e,	// (0x0009277e) bg_popup_call_poc_act_pane

0xe98e,	// (0x0009277e) bg_popup_call_poc_inact_pane_ParamLimits

0xe98e,	// (0x0009277e) bg_popup_call_poc_inact_pane

0xdf9e,	// (0x00091d8e) bg_popup_call_poc_act_pane_g1

0xdfa6,	// (0x00091d96) bg_popup_call_poc_act_pane_g2

0xdfae,	// (0x00091d9e) bg_popup_call_poc_act_pane_g3

0xdf6e,	// (0x00091d5e) bg_popup_call_poc_act_pane_g4

0xdf76,	// (0x00091d66) bg_popup_call_poc_act_pane_g5

0xdfb6,	// (0x00091da6) bg_popup_call_poc_act_pane_g6

0xdf86,	// (0x00091d76) bg_popup_call_poc_act_pane_g7

0xdfbe,	// (0x00091dae) bg_popup_call_poc_act_pane_g8

0xe733,	// (0x00092523) main_usb_pane

0x7751,	// (0x0008b541) popup_cale_lunar_info_window

0x5982,	// (0x00089772) im_reading_pane_t1_ParamLimits

0xedd3,	// (0x00092bc3) list_im_pane_ParamLimits

0xede4,	// (0x00092bd4) scroll_pane_cp07_ParamLimits

0xe733,	// (0x00092523) grid_highlight_pane_cp012

0xe98e,	// (0x0009277e) mup_scale_pane_ParamLimits

0xca9e,	// (0x0009088e) main_usb_pane_g1_ParamLimits

0xca9e,	// (0x0009088e) main_usb_pane_g1

0x74ac,	// (0x0008b29c) main_usb_pane_g2_ParamLimits

0x74ac,	// (0x0008b29c) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x000933ab) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x000933ab) main_usb_pane_g

0x74b8,	// (0x0008b2a8) main_usb_pane_t1_ParamLimits

0x74b8,	// (0x0008b2a8) main_usb_pane_t1

0x74ca,	// (0x0008b2ba) main_usb_pane_t2_ParamLimits

0x74ca,	// (0x0008b2ba) main_usb_pane_t2

0x74dc,	// (0x0008b2cc) main_usb_pane_t3_ParamLimits

0x74dc,	// (0x0008b2cc) main_usb_pane_t3

0x74ee,	// (0x0008b2de) main_usb_pane_t4_ParamLimits

0x74ee,	// (0x0008b2de) main_usb_pane_t4

0x7500,	// (0x0008b2f0) main_usb_pane_t5_ParamLimits

0x7500,	// (0x0008b2f0) main_usb_pane_t5

0x7512,	// (0x0008b302) main_usb_pane_t6_ParamLimits

0x7512,	// (0x0008b302) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x000933b0) main_usb_pane_t_ParamLimits

0x67ce,	// (0x0008a5be) aid_text_placing

0x67d9,	// (0x0008a5c9) main_location2_pane_t1_ParamLimits

0x67ef,	// (0x0008a5df) main_location2_pane_t2_ParamLimits

0x6805,	// (0x0008a5f5) main_location2_pane_t3_ParamLimits

0x681b,	// (0x0008a60b) main_location2_pane_t4_ParamLimits

0x681b,	// (0x0008a60b) main_location2_pane_t4

0xf3df,	// (0x000931cf) main_location2_pane_t_ParamLimits

0xe9ca,	// (0x000927ba) find_pinb_pane_g2_ParamLimits

0xe9ca,	// (0x000927ba) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x00092f1d) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x00092f1d) find_pinb_pane_g

0xe9d6,	// (0x000927c6) find_pinb_pane_t1_ParamLimits

0xe9e8,	// (0x000927d8) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x00092f22) find_pinb_pane_t_ParamLimits

0xe733,	// (0x00092523) main_call3_pane

0x5f30,	// (0x00089d20) cale_month_day_heading_pane_t1_ParamLimits

0x5f8e,	// (0x00089d7e) cale_month_day_heading_pane_t2_ParamLimits

0x5ff3,	// (0x00089de3) cale_month_day_heading_pane_t3_ParamLimits

0x6058,	// (0x00089e48) cale_month_day_heading_pane_t4_ParamLimits

0x60bd,	// (0x00089ead) cale_month_day_heading_pane_t5_ParamLimits

0x612a,	// (0x00089f1a) cale_month_day_heading_pane_t6_ParamLimits

0x619f,	// (0x00089f8f) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x000930a6) cale_month_day_heading_pane_t_ParamLimits

0xf04e,	// (0x00092e3e) smil_status_volume_pane

0x706a,	// (0x0008ae5a) postcard_address_pane_ParamLimits

0x706a,	// (0x0008ae5a) postcard_address_pane

0x7078,	// (0x0008ae68) postcard_message_pane_ParamLimits

0x7078,	// (0x0008ae68) postcard_message_pane

0x7482,	// (0x0008b272) call2_cli_visual_pane_t1_ParamLimits

0x7482,	// (0x0008b272) call2_cli_visual_pane_t1

0x7a9c,	// (0x0008b88c) postcard_message_pane_t1_ParamLimits

0x7a9c,	// (0x0008b88c) postcard_message_pane_t1

0xe1c6,	// (0x00091fb6) postcard_address_pane_t1_ParamLimits

0xe1c6,	// (0x00091fb6) postcard_address_pane_t1

0x7a8d,	// (0x0008b87d) popup_call3_audio_in_window_ParamLimits

0x7a8d,	// (0x0008b87d) popup_call3_audio_in_window

0x796b,	// (0x0008b75b) bg_popup_call3_in_pane_ParamLimits

0x796b,	// (0x0008b75b) bg_popup_call3_in_pane

0x79d3,	// (0x0008b7c3) popup_call3_audio_in_window_g1_ParamLimits

0x79d3,	// (0x0008b7c3) popup_call3_audio_in_window_g1

0x79eb,	// (0x0008b7db) popup_call3_audio_in_window_g2_ParamLimits

0x79eb,	// (0x0008b7db) popup_call3_audio_in_window_g2

0x7a03,	// (0x0008b7f3) popup_call3_audio_in_window_g3_ParamLimits

0x7a03,	// (0x0008b7f3) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x00093412) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x00093412) popup_call3_audio_in_window_g

0x7a2b,	// (0x0008b81b) popup_call3_audio_in_window_t1_ParamLimits

0x7a2b,	// (0x0008b81b) popup_call3_audio_in_window_t1

0x7a53,	// (0x0008b843) popup_call3_audio_in_window_t2_ParamLimits

0x7a53,	// (0x0008b843) popup_call3_audio_in_window_t2

0x7a7b,	// (0x0008b86b) popup_call3_audio_in_window_t3_ParamLimits

0x7a7b,	// (0x0008b86b) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x0009341b) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x0009341b) popup_call3_audio_in_window_t

0xccfa,	// (0x00090aea) bg_popup_call3_rect_pane

0xdf16,	// (0x00091d06) bg_popup_call3_rect_pane_g1

0xeb54,	// (0x00092944) bg_popup_call3_rect_pane_g2

0xdf1e,	// (0x00091d0e) bg_popup_call3_rect_pane_g3

0xdf26,	// (0x00091d16) bg_popup_call3_rect_pane_g4

0xdf2e,	// (0x00091d1e) bg_popup_call3_rect_pane_g5

0xdf36,	// (0x00091d26) bg_popup_call3_rect_pane_g6

0xdf3e,	// (0x00091d2e) bg_popup_call3_rect_pane_g7

0x6c61,	// (0x0008aa51) mup_visualizer_osc_pane

0xcdb9,	// (0x00090ba9) mup_visualizer_spec_pane

0x798b,	// (0x0008b77b) call3_video_qcif_pane_ParamLimits

0x798b,	// (0x0008b77b) call3_video_qcif_pane

0x799d,	// (0x0008b78d) call3_video_qcif_uncrop_pane_ParamLimits

0x799d,	// (0x0008b78d) call3_video_qcif_uncrop_pane

0x79ad,	// (0x0008b79d) call3_video_subqcif_pane_ParamLimits

0x79ad,	// (0x0008b79d) call3_video_subqcif_pane

0x79c1,	// (0x0008b7b1) call3_video_subqcif_uncrop_pane_ParamLimits

0x79c1,	// (0x0008b7b1) call3_video_subqcif_uncrop_pane

0x7a1b,	// (0x0008b80b) popup_call3_audio_in_window_g4_ParamLimits

0x7a1b,	// (0x0008b80b) popup_call3_audio_in_window_g4

0x7938,	// (0x0008b728) mup_spec_half_pane

0x7941,	// (0x0008b731) mup_spec_half_pane_cp

0xe186,	// (0x00091f76) mup_osc_middle_pane

0xe18f,	// (0x00091f7f) mup_visualizer_osc_pane_g1

0x7918,	// (0x0008b708) mup_spec_bar_pane_ParamLimits

0x7918,	// (0x0008b708) mup_spec_bar_pane

0xe173,	// (0x00091f63) mup_spec_bar_pane_g1

0xe17d,	// (0x00091f6d) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00093406) mup_spec_bar_pane_g

0x4e0c,	// (0x00088bfc) aid_cale_week_size_cell_pane_ParamLimits

0x4e1f,	// (0x00088c0f) bg_cale_heading_pane_ParamLimits

0xeb88,	// (0x00092978) bg_cale_pane_cp01_ParamLimits

0x4e3b,	// (0x00088c2b) cale_week_corner_pane_ParamLimits

0x4e51,	// (0x00088c41) cale_week_day_heading_pane_ParamLimits

0x4e6d,	// (0x00088c5d) cale_week_scroll_pane_g1_ParamLimits

0x4e86,	// (0x00088c76) cale_week_scroll_pane_g2_ParamLimits

0x4e97,	// (0x00088c87) cale_week_scroll_pane_g3_ParamLimits

0x4ea8,	// (0x00088c98) cale_week_scroll_pane_g4_ParamLimits

0x4eb9,	// (0x00088ca9) cale_week_scroll_pane_g5_ParamLimits

0x4eca,	// (0x00088cba) cale_week_scroll_pane_g6_ParamLimits

0x4edd,	// (0x00088ccd) cale_week_scroll_pane_g7_ParamLimits

0x4ef0,	// (0x00088ce0) cale_week_scroll_pane_g8_ParamLimits

0x4f03,	// (0x00088cf3) cale_week_scroll_pane_g9_ParamLimits

0x4f14,	// (0x00088d04) cale_week_scroll_pane_g10_ParamLimits

0x4f25,	// (0x00088d15) cale_week_scroll_pane_g11_ParamLimits

0x4f36,	// (0x00088d26) cale_week_scroll_pane_g12_ParamLimits

0x4f47,	// (0x00088d37) cale_week_scroll_pane_g13_ParamLimits

0x4f58,	// (0x00088d48) cale_week_scroll_pane_g14_ParamLimits

0x4f71,	// (0x00088d61) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x00092fae) cale_week_scroll_pane_g_ParamLimits

0x4f8a,	// (0x00088d7a) cale_week_time_pane_ParamLimits

0x4f9d,	// (0x00088d8d) grid_cale_week_pane_ParamLimits

0xeba1,	// (0x00092991) listscroll_cale_week_pane_t1

0x4fba,	// (0x00088daa) scroll_pane_cp08_ParamLimits

0x5b75,	// (0x00089965) cale_month_corner_pane_ParamLimits

0xeffa,	// (0x00092dea) cale_month_pane_t1

0x5edf,	// (0x00089ccf) cale_month_week_pane_ParamLimits

0xca9e,	// (0x0009088e) popup_call_status_window_g1_ParamLimits

0x65d7,	// (0x0008a3c7) popup_call_status_window_g2_ParamLimits

0x65e3,	// (0x0008a3d3) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x00093156) popup_call_status_window_g_ParamLimits

0x31b6,	// (0x00086fa6) aid_call2_pane

0x6efc,	// (0x0008acec) msg_header_pane_g1

0x706a,	// (0x0008ae5a) postcard_address2_pane_ParamLimits

0x706a,	// (0x0008ae5a) postcard_address2_pane

0x7078,	// (0x0008ae68) postcard_message2_pane_ParamLimits

0x7078,	// (0x0008ae68) postcard_message2_pane

0x78d2,	// (0x0008b6c2) message2_row_pane_ParamLimits

0x78d2,	// (0x0008b6c2) message2_row_pane

0xe12e,	// (0x00091f1e) address2_row_pane_ParamLimits

0xe12e,	// (0x00091f1e) address2_row_pane

0xe141,	// (0x00091f31) postcard_message2_row_pane_g1

0xe149,	// (0x00091f39) postcard_message2_row_pane_t1

0xe141,	// (0x00091f31) address2_row_pane_g1

0xe149,	// (0x00091f39) address2_row_pane_t1

0x526c,	// (0x0008905c) aid_size_cell_vorec

0xe733,	// (0x00092523) main_rss_pane

0x78ec,	// (0x0008b6dc) rss_list_single_pane_ParamLimits

0x78ec,	// (0x0008b6dc) rss_list_single_pane

0xe157,	// (0x00091f47) rss_list_single_pane_t1

0xe165,	// (0x00091f55) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x00093401) rss_list_single_pane_t

0xe733,	// (0x00092523) main_camera2_pane

0xe733,	// (0x00092523) main_video2_pane

0x7b00,	// (0x0008b8f0) cams_zoom_pane_cp2_ParamLimits

0x7b00,	// (0x0008b8f0) cams_zoom_pane_cp2

0x7b0c,	// (0x0008b8fc) image2_vga_pane_ParamLimits

0x7b0c,	// (0x0008b8fc) image2_vga_pane

0x7b1b,	// (0x0008b90b) main_camera2_pane_g1_ParamLimits

0x7b1b,	// (0x0008b90b) main_camera2_pane_g1

0x7b27,	// (0x0008b917) main_camera2_pane_g2_ParamLimits

0x7b27,	// (0x0008b917) main_camera2_pane_g2

0x7b33,	// (0x0008b923) main_camera2_pane_g3_ParamLimits

0x7b33,	// (0x0008b923) main_camera2_pane_g3

0x7b3f,	// (0x0008b92f) main_camera2_pane_g4_ParamLimits

0x7b3f,	// (0x0008b92f) main_camera2_pane_g4

0x7b4b,	// (0x0008b93b) main_camera2_pane_g5_ParamLimits

0x7b4b,	// (0x0008b93b) main_camera2_pane_g5

0x7b57,	// (0x0008b947) main_camera2_pane_g6_ParamLimits

0x7b57,	// (0x0008b947) main_camera2_pane_g6

0x7b63,	// (0x0008b953) main_camera2_pane_g7_ParamLimits

0x7b63,	// (0x0008b953) main_camera2_pane_g7

0x7b6f,	// (0x0008b95f) main_camera2_pane_g8_ParamLimits

0x7b6f,	// (0x0008b95f) main_camera2_pane_g8

0x0008,

0xf632,	// (0x00093422) main_camera2_pane_g_ParamLimits

0xf632,	// (0x00093422) main_camera2_pane_g

0x7b87,	// (0x0008b977) main_camera2_pane_t1_ParamLimits

0x7b87,	// (0x0008b977) main_camera2_pane_t1

0x7b99,	// (0x0008b989) main_camera2_pane_t2_ParamLimits

0x7b99,	// (0x0008b989) main_camera2_pane_t2

0x7bab,	// (0x0008b99b) main_camera2_pane_t3_ParamLimits

0x7bab,	// (0x0008b99b) main_camera2_pane_t3

0x7bbd,	// (0x0008b9ad) main_camera2_pane_t4_ParamLimits

0x7bbd,	// (0x0008b9ad) main_camera2_pane_t4

0x0006,

0xf645,	// (0x00093435) main_camera2_pane_t_ParamLimits

0xf645,	// (0x00093435) main_camera2_pane_t

0x7c1a,	// (0x0008ba0a) cams_zoom_pane_cp4_ParamLimits

0x7c1a,	// (0x0008ba0a) cams_zoom_pane_cp4

0x7c2a,	// (0x0008ba1a) image2_cif_pane_ParamLimits

0x7c2a,	// (0x0008ba1a) image2_cif_pane

0x7c3f,	// (0x0008ba2f) image2_subqcif_pane_ParamLimits

0x7c3f,	// (0x0008ba2f) image2_subqcif_pane

0x7c4e,	// (0x0008ba3e) main_video2_pane_g1_ParamLimits

0x7c4e,	// (0x0008ba3e) main_video2_pane_g1

0x7c60,	// (0x0008ba50) main_video2_pane_g2_ParamLimits

0x7c60,	// (0x0008ba50) main_video2_pane_g2

0x7c70,	// (0x0008ba60) main_video2_pane_g3_ParamLimits

0x7c70,	// (0x0008ba60) main_video2_pane_g3

0x7c80,	// (0x0008ba70) main_video2_pane_g4_ParamLimits

0x7c80,	// (0x0008ba70) main_video2_pane_g4

0x7c90,	// (0x0008ba80) main_video2_pane_g5_ParamLimits

0x7c90,	// (0x0008ba80) main_video2_pane_g5

0x7ca0,	// (0x0008ba90) main_video2_pane_g6_ParamLimits

0x7ca0,	// (0x0008ba90) main_video2_pane_g6

0x0005,

0xf654,	// (0x00093444) main_video2_pane_g_ParamLimits

0xf654,	// (0x00093444) main_video2_pane_g

0x7cb2,	// (0x0008baa2) main_video2_pane_t1_ParamLimits

0x7cb2,	// (0x0008baa2) main_video2_pane_t1

0x7ccc,	// (0x0008babc) main_video2_pane_t2_ParamLimits

0x7ccc,	// (0x0008babc) main_video2_pane_t2

0x7cf2,	// (0x0008bae2) main_video2_pane_t3_ParamLimits

0x7cf2,	// (0x0008bae2) main_video2_pane_t3

0x0002,

0xf661,	// (0x00093451) main_video2_pane_t_ParamLimits

0xf661,	// (0x00093451) main_video2_pane_t

0x75c9,	// (0x0008b3b9) call_muted_g2

0x0001,

0xf603,	// (0x000933f3) call_muted_g

0xe733,	// (0x00092523) main_mup2_pane

0xe1dd,	// (0x00091fcd) main_mup2_pane_g1_ParamLimits

0xe1dd,	// (0x00091fcd) main_mup2_pane_g1

0x7d18,	// (0x0008bb08) main_mup2_pane_g2_ParamLimits

0x7d18,	// (0x0008bb08) main_mup2_pane_g2

0x7f9c,	// (0x0008bd8c) main_mup_pane_g13_cp1

0x7fa4,	// (0x0008bd94) mup_volume_pane_cp1

0x7d3a,	// (0x0008bb2a) main_mup2_pane_g4_ParamLimits

0x7d3a,	// (0x0008bb2a) main_mup2_pane_g4

0x7d4b,	// (0x0008bb3b) main_mup2_pane_g5_ParamLimits

0x7d4b,	// (0x0008bb3b) main_mup2_pane_g5

0x7d5c,	// (0x0008bb4c) main_mup2_pane_g6_ParamLimits

0x7d5c,	// (0x0008bb4c) main_mup2_pane_g6

0x7d6d,	// (0x0008bb5d) main_mup2_pane_g7_ParamLimits

0x7d6d,	// (0x0008bb5d) main_mup2_pane_g7

0x0006,

0xf668,	// (0x00093458) main_mup2_pane_g_ParamLimits

0xf668,	// (0x00093458) main_mup2_pane_g

0x7d89,	// (0x0008bb79) main_mup2_pane_t1_ParamLimits

0x7d89,	// (0x0008bb79) main_mup2_pane_t1

0x7da0,	// (0x0008bb90) main_mup2_pane_t2_ParamLimits

0x7da0,	// (0x0008bb90) main_mup2_pane_t2

0x7db7,	// (0x0008bba7) main_mup2_pane_t3_ParamLimits

0x7db7,	// (0x0008bba7) main_mup2_pane_t3

0x7dce,	// (0x0008bbbe) main_mup2_pane_t4_ParamLimits

0x7dce,	// (0x0008bbbe) main_mup2_pane_t4

0x7de8,	// (0x0008bbd8) main_mup2_pane_t5_ParamLimits

0x7de8,	// (0x0008bbd8) main_mup2_pane_t5

0x7e02,	// (0x0008bbf2) main_mup2_pane_t6_ParamLimits

0x7e02,	// (0x0008bbf2) main_mup2_pane_t6

0x0005,

0xf677,	// (0x00093467) main_mup2_pane_t_ParamLimits

0xf677,	// (0x00093467) main_mup2_pane_t

0x7e3a,	// (0x0008bc2a) mup2_visualizer_pane_ParamLimits

0x7e3a,	// (0x0008bc2a) mup2_visualizer_pane

0x7e70,	// (0x0008bc60) mup_progress_pane_cp_ParamLimits

0x7e70,	// (0x0008bc60) mup_progress_pane_cp

0x7f87,	// (0x0008bd77) mup_volume_pane_cp_ParamLimits

0x7f87,	// (0x0008bd77) mup_volume_pane_cp

0x7e89,	// (0x0008bc79) mup2_visualizer_pane_g1_ParamLimits

0x7e89,	// (0x0008bc79) mup2_visualizer_pane_g1

0xe1e9,	// (0x00091fd9) mup2_visualizer_pane_g2_ParamLimits

0xe1e9,	// (0x00091fd9) mup2_visualizer_pane_g2

0x7e9e,	// (0x0008bc8e) mup2_visualizer_pane_g3_ParamLimits

0x7e9e,	// (0x0008bc8e) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x00093474) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x00093474) mup2_visualizer_pane_g

0xcfe2,	// (0x00090dd2) aid_size_cell_fmradio

0x76df,	// (0x0008b4cf) aid_height_parent_landcape

0xee62,	// (0x00092c52) wml_content_pane_cp

0xee6a,	// (0x00092c5a) wml_tabs_pane

0xee73,	// (0x00092c63) popup_wml_miniature_window

0xee7b,	// (0x00092c6b) scroll_pane_cp021

0xee8f,	// (0x00092c7f) wml_content_pane_comp8

0xe733,	// (0x00092523) bg_popup_sub_pane_cp05

0xe207,	// (0x00091ff7) popup_wml_miniature_window_g1

0xe20f,	// (0x00091fff) wml_miniature_view_pane

0x7eaa,	// (0x0008bc9a) aid_size_wml_view

0x7eb2,	// (0x0008bca2) wml_miniature_view_pane_g1

0x7ebb,	// (0x0008bcab) wml_miniature_view_pane_g2

0x7ec4,	// (0x0008bcb4) wml_miniature_view_pane_g3

0x7ecc,	// (0x0008bcbc) wml_miniature_view_pane_g4

0x7ed4,	// (0x0008bcc4) wml_miniature_view_pane_g5

0x7edc,	// (0x0008bccc) wml_miniature_view_pane_g6

0x7ee4,	// (0x0008bcd4) wml_miniature_view_pane_g7

0x7eec,	// (0x0008bcdc) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x0009347b) wml_miniature_view_pane_g

0xe1dd,	// (0x00091fcd) background_graphic_ParamLimits

0xe1dd,	// (0x00091fcd) background_graphic

0xe217,	// (0x00092007) wml_tabs_2_pane

0xe220,	// (0x00092010) wml_tabs_3_pane_ParamLimits

0xe220,	// (0x00092010) wml_tabs_3_pane

0xe232,	// (0x00092022) wml_tabs_4_pane_ParamLimits

0xe232,	// (0x00092022) wml_tabs_4_pane

0xe248,	// (0x00092038) wml_tabs_5_pane_ParamLimits

0xe248,	// (0x00092038) wml_tabs_5_pane

0xe262,	// (0x00092052) wml_tabs_pane_g2_ParamLimits

0xe262,	// (0x00092052) wml_tabs_pane_g2

0xe276,	// (0x00092066) wml_tabs_pane_g3_ParamLimits

0xe276,	// (0x00092066) wml_tabs_pane_g3

0x7ef4,	// (0x0008bce4) wml_tabs_2_active_pane_ParamLimits

0x7ef4,	// (0x0008bce4) wml_tabs_2_active_pane

0x7f06,	// (0x0008bcf6) wml_tabs_2_passive_pane_ParamLimits

0x7f06,	// (0x0008bcf6) wml_tabs_2_passive_pane

0x7f18,	// (0x0008bd08) wml_tabs_3_active_pane_cp_ParamLimits

0x7f18,	// (0x0008bd08) wml_tabs_3_active_pane_cp

0x7f2b,	// (0x0008bd1b) wml_tabs_3_passive_pane_ParamLimits

0x7f2b,	// (0x0008bd1b) wml_tabs_3_passive_pane

0x7f3c,	// (0x0008bd2c) wml_tabs_3_passive_pane_cp_ParamLimits

0x7f3c,	// (0x0008bd2c) wml_tabs_3_passive_pane_cp

0x7f51,	// (0x0008bd41) tabs_4_active_pane

0x7f59,	// (0x0008bd49) tabs_4_passive_pane

0x7f61,	// (0x0008bd51) tabs_4_passive_pane_cp

0x7f69,	// (0x0008bd59) tabs_4_passive_pane_cp2

0x74a4,	// (0x0008b294) aid_height_text

0x6c2a,	// (0x0008aa1a) mup_volume_cont_pane_ParamLimits

0x6c2a,	// (0x0008aa1a) mup_volume_cont_pane

0x4972,	// (0x00088762) aid_size_cell_pinb

0x497c,	// (0x0008876c) aid_size_list_pinb

0x7e59,	// (0x0008bc49) mup2_volume_cont_pane_ParamLimits

0x7e59,	// (0x0008bc49) mup2_volume_cont_pane

0x7f73,	// (0x0008bd63) mup2_volume_cont_pane_g1_ParamLimits

0x7f73,	// (0x0008bd63) mup2_volume_cont_pane_g1

0x45de,	// (0x000883ce) aid_size_cell_touch_ParamLimits

0x45de,	// (0x000883ce) aid_size_cell_touch

0x4891,	// (0x00088681) touch_pane_ParamLimits

0x4891,	// (0x00088681) touch_pane

0x4887,	// (0x00088677) main_rss2_pane

0xe293,	// (0x00092083) listscroll_rss2_pane

0xe29c,	// (0x0009208c) rss2_navigation_pane

0xe2a4,	// (0x00092094) list_rss2_pane

0xcbc0,	// (0x000909b0) scroll_pane_cp22

0xe2ac,	// (0x0009209c) rss2_navigation_pane_g1

0xe2b5,	// (0x000920a5) rss2_navigation_pane_g2

0xe2bd,	// (0x000920ad) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x0009348c) rss2_navigation_pane_g

0xe2c5,	// (0x000920b5) rss2_navigation_pane_t1

0x7fac,	// (0x0008bd9c) rss2_list_single_pane_ParamLimits

0x7fac,	// (0x0008bd9c) rss2_list_single_pane

0x0199,	// (0x00083f89) rss2_list_single_pane_t2

0x01a7,	// (0x00083f97) rss2_list_single_pane_t3_ParamLimits

0x01a7,	// (0x00083f97) rss2_list_single_pane_t3

0x01c4,	// (0x00083fb4) rss2_list_single_pane_t4

0x639f,	// (0x0008a18f) smil_status_pane_g1

0x76f6,	// (0x0008b4e6) main_image2_pane_ParamLimits

0x76f6,	// (0x0008b4e6) main_image2_pane

0x7b7b,	// (0x0008b96b) main_camera2_pane_g9_ParamLimits

0x7b7b,	// (0x0008b96b) main_camera2_pane_g9

0x7bcf,	// (0x0008b9bf) main_camera2_pane_t5_ParamLimits

0x7bcf,	// (0x0008b9bf) main_camera2_pane_t5

0x7be1,	// (0x0008b9d1) main_camera2_pane_t6_ParamLimits

0x7be1,	// (0x0008b9d1) main_camera2_pane_t6

0x7fcf,	// (0x0008bdbf) main_image2_pane_g1_ParamLimits

0x7fcf,	// (0x0008bdbf) main_image2_pane_g1

0x7241,	// (0x0008b031) smil2_video_pane_ParamLimits

0x7241,	// (0x0008b031) smil2_video_pane

0x44ef,	// (0x000882df) aid_zoom_text_primary_cp

0x482c,	// (0x0008861c) popup_preview_fixed_window

0xedcb,	// (0x00092bbb) im_reading_pane_g1

0x7ac5,	// (0x0008b8b5) cams2_bc_adjust_pane_cp_ParamLimits

0x7ac5,	// (0x0008b8b5) cams2_bc_adjust_pane_cp

0x7c0c,	// (0x0008b9fc) cams2_bc_adjust_pane_ParamLimits

0x7c0c,	// (0x0008b9fc) cams2_bc_adjust_pane

0x14f2,	// (0x000852e2) cams2_bc_adjust_pane_g1

0x7fdb,	// (0x0008bdcb) cams2_slider_pane

0x7fe4,	// (0x0008bdd4) cams2_slider_pane_g1

0x7fed,	// (0x0008bddd) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x00093493) cams2_slider_pane_g

0x4a6d,	// (0x0008885d) calc_display_pane_ParamLimits

0x4a8b,	// (0x0008887b) calc_paper_pane_ParamLimits

0x4aa7,	// (0x00088897) grid_calc_pane_ParamLimits

0x6641,	// (0x0008a431) popup_clock_digital_window_t1_ParamLimits

0xcf7f,	// (0x00090d6f) main_image_pane_t1

0x4a53,	// (0x00088843) aid_size_cell_calc_ParamLimits

0x4a53,	// (0x00088843) aid_size_cell_calc

0x7727,	// (0x0008b517) popup_blid_sat_info2_window_ParamLimits

0x7727,	// (0x0008b517) popup_blid_sat_info2_window

0x020e,	// (0x00083ffe) aid_size_cell_blid

0x0216,	// (0x00084006) bg_popup_window_pane_cp07

0x0239,	// (0x00084029) grid_popup_blid_pane

0x0243,	// (0x00084033) heading_pane_cp05_ParamLimits

0x0243,	// (0x00084033) heading_pane_cp05

0x030d,	// (0x000840fd) cell_popup_blid_pane_ParamLimits

0x030d,	// (0x000840fd) cell_popup_blid_pane

0x0337,	// (0x00084127) cell_popup_blid_pane_g1

0x033f,	// (0x0008412f) cell_popup_blid_pane_t1

0x7e1f,	// (0x0008bc0f) mup2_indicator_pane_ParamLimits

0x7e1f,	// (0x0008bc0f) mup2_indicator_pane

0xccfa,	// (0x00090aea) mup2_visualizer_osc_pane

0xe1f5,	// (0x00091fe5) mup2_visualizer_spec_pane_ParamLimits

0xe1f5,	// (0x00091fe5) mup2_visualizer_spec_pane

0x8007,	// (0x0008bdf7) mup2_spec_half_pane

0x8010,	// (0x0008be00) mup2_spec_half_pane_cp

0x8018,	// (0x0008be08) mup2_spec_bar_pane_ParamLimits

0x8018,	// (0x0008be08) mup2_spec_bar_pane

0xe173,	// (0x00091f63) mup2_spec_bar_pane_g1

0xe17d,	// (0x00091f6d) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00093406) mup2_spec_bar_pane_g

0x8037,	// (0x0008be27) mup2_osc_middle_pane

0xe18f,	// (0x00091f7f) mup2_visualizer_osc_pane_g1

0xe2fd,	// (0x000920ed) popup_number_entry_window_t1_ParamLimits

0xe310,	// (0x00092100) popup_number_entry_window_t2_ParamLimits

0xe322,	// (0x00092112) popup_number_entry_window_t3_ParamLimits

0xe334,	// (0x00092124) popup_number_entry_window_t5_ParamLimits

0xe334,	// (0x00092124) popup_number_entry_window_t5

0xf0d8,	// (0x00092ec8) popup_number_entry_window_t_ParamLimits

0xe369,	// (0x00092159) text_title_cp2_ParamLimits

0x6f2e,	// (0x0008ad1e) aid_hotspot_pointer_text2_pane

0x6fc8,	// (0x0008adb8) main_viewer_pane_g9_ParamLimits

0x6fc8,	// (0x0008adb8) main_viewer_pane_g9

0xeffa,	// (0x00092dea) cale_month_pane_t1_ParamLimits

0x2ed0,	// (0x00086cc0) bg_cale_pane_ParamLimits

0x2ee8,	// (0x00086cd8) list_cale_pane_ParamLimits

0xeba1,	// (0x00092991) listscroll_cale_day_pane_t1

0x2ef9,	// (0x00086ce9) scroll_pane_cp09_ParamLimits

0x6c69,	// (0x0008aa59) main_mup_eq_pane_t1_ParamLimits

0x6c69,	// (0x0008aa59) main_mup_eq_pane_t1

0x6c85,	// (0x0008aa75) main_mup_eq_pane_t2_ParamLimits

0x6c85,	// (0x0008aa75) main_mup_eq_pane_t2

0x6ca1,	// (0x0008aa91) main_mup_eq_pane_t3_ParamLimits

0x6ca1,	// (0x0008aa91) main_mup_eq_pane_t3

0x6cbb,	// (0x0008aaab) main_mup_eq_pane_t4_ParamLimits

0x6cbb,	// (0x0008aaab) main_mup_eq_pane_t4

0x6cd5,	// (0x0008aac5) main_mup_eq_pane_t5_ParamLimits

0x6cd5,	// (0x0008aac5) main_mup_eq_pane_t5

0x6cef,	// (0x0008aadf) main_mup_eq_pane_t6_ParamLimits

0x6cef,	// (0x0008aadf) main_mup_eq_pane_t6

0x6d05,	// (0x0008aaf5) main_mup_eq_pane_t7_ParamLimits

0x6d05,	// (0x0008aaf5) main_mup_eq_pane_t7

0x6d1b,	// (0x0008ab0b) main_mup_eq_pane_t8_ParamLimits

0x6d1b,	// (0x0008ab0b) main_mup_eq_pane_t8

0x6d31,	// (0x0008ab21) main_mup_eq_pane_t9_ParamLimits

0x6d31,	// (0x0008ab21) main_mup_eq_pane_t9

0x6d4d,	// (0x0008ab3d) main_mup_eq_pane_t10_ParamLimits

0x6d4d,	// (0x0008ab3d) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x00093255) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x00093255) main_mup_eq_pane_t

0x6e12,	// (0x0008ac02) mup_equalizer_pane_cp5_ParamLimits

0x6e2a,	// (0x0008ac1a) mup_equalizer_pane_cp6_ParamLimits

0x6e42,	// (0x0008ac32) mup_equalizer_pane_cp7_ParamLimits

0x4887,	// (0x00088677) main_gallery_pane

0xe198,	// (0x00091f88) smil2_volume_pane

0xe1a0,	// (0x00091f90) smil_status_volume_pane_g1_ParamLimits

0xe1b3,	// (0x00091fa3) smil_status_volume_pane_g2_ParamLimits

0x7949,	// (0x0008b739) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x0009340b) smil_status_volume_pane_g_ParamLimits

0x0216,	// (0x00084006) bg_popup_window_pane_cp07_ParamLimits

0x0224,	// (0x00084014) blid_firmament_pane

0x8040,	// (0x0008be30) aid_size_cell_gallery_ParamLimits

0x8040,	// (0x0008be30) aid_size_cell_gallery

0x804e,	// (0x0008be3e) grid_gallery_pane_ParamLimits

0x804e,	// (0x0008be3e) grid_gallery_pane

0x805e,	// (0x0008be4e) cell_gallery_pane_ParamLimits

0x805e,	// (0x0008be4e) cell_gallery_pane

0x034d,	// (0x0008413d) bg_cell_gallery_focus_pane_ParamLimits

0x034d,	// (0x0008413d) bg_cell_gallery_focus_pane

0x035f,	// (0x0008414f) cell_gallery_pane_g1_ParamLimits

0x035f,	// (0x0008414f) cell_gallery_pane_g1

0x80a9,	// (0x0008be99) cell_gallery_pane_g2_ParamLimits

0x80a9,	// (0x0008be99) cell_gallery_pane_g2

0x80b6,	// (0x0008bea6) cell_gallery_pane_g3_ParamLimits

0x80b6,	// (0x0008bea6) cell_gallery_pane_g3

0x036b,	// (0x0008415b) cell_gallery_pane_g4_ParamLimits

0x036b,	// (0x0008415b) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x000934b9) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x000934b9) cell_gallery_pane_g

0x0377,	// (0x00084167) bg_cell_gallery_focus_pane_g1

0x037f,	// (0x0008416f) bg_cell_gallery_focus_pane_g2

0x0387,	// (0x00084177) bg_cell_gallery_focus_pane_g3

0x038f,	// (0x0008417f) bg_cell_gallery_focus_pane_g4

0x0397,	// (0x00084187) bg_cell_gallery_focus_pane_g5

0x039f,	// (0x0008418f) bg_cell_gallery_focus_pane_g6

0x03a7,	// (0x00084197) bg_cell_gallery_focus_pane_g7

0x03af,	// (0x0008419f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x000934c2) bg_cell_gallery_focus_pane_g

0x03b7,	// (0x000841a7) aid_firma_cardinal

0x03cb,	// (0x000841bb) blid_firmament_pane_t1

0x03e2,	// (0x000841d2) blid_firmament_pane_t2

0x03f9,	// (0x000841e9) blid_firmament_pane_t3

0x0410,	// (0x00084200) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x000934d3) blid_firmament_pane_t

0x0427,	// (0x00084217) blid_sat_info_pane

0x0437,	// (0x00084227) blid_sat_info_pane_g1

0x0437,	// (0x00084227) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x000934dc) blid_sat_info_pane_g

0x0441,	// (0x00084231) blid_sat_info_pane_t1

0x044f,	// (0x0008423f) smil2_volume_content_pane

0x0458,	// (0x00084248) smil2_volume_pane_g1

0x0460,	// (0x00084250) smil2_volume_content_pane_g1

0x0469,	// (0x00084259) smil2_volume_content_pane_g2

0x0472,	// (0x00084262) smil2_volume_content_pane_g3

0x047b,	// (0x0008426b) smil2_volume_content_pane_g4

0x0484,	// (0x00084274) smil2_volume_content_pane_g5

0x048d,	// (0x0008427d) smil2_volume_content_pane_g6

0x0496,	// (0x00084286) smil2_volume_content_pane_g7

0x049f,	// (0x0008428f) smil2_volume_content_pane_g8

0x04a8,	// (0x00084298) smil2_volume_content_pane_g9

0x04b1,	// (0x000842a1) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x000934e1) smil2_volume_content_pane_g

0x5016,	// (0x00088e06) cale_week_day_heading_pane_t1_ParamLimits

0x5043,	// (0x00088e33) cale_week_day_heading_pane_t2_ParamLimits

0x5070,	// (0x00088e60) cale_week_day_heading_pane_t3_ParamLimits

0x509d,	// (0x00088e8d) cale_week_day_heading_pane_t4_ParamLimits

0x50ca,	// (0x00088eba) cale_week_day_heading_pane_t5_ParamLimits

0x50f7,	// (0x00088ee7) cale_week_day_heading_pane_t6_ParamLimits

0x5124,	// (0x00088f14) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x00092fcd) cale_week_day_heading_pane_t_ParamLimits

0xebb3,	// (0x000929a3) bg_cale_side_pane_ParamLimits

0x5151,	// (0x00088f41) cale_week_time_pane_t1_ParamLimits

0x5169,	// (0x00088f59) cale_week_time_pane_t2_ParamLimits

0x5181,	// (0x00088f71) cale_week_time_pane_t3_ParamLimits

0x5199,	// (0x00088f89) cale_week_time_pane_t4_ParamLimits

0x51b1,	// (0x00088fa1) cale_week_time_pane_t5_ParamLimits

0x51c9,	// (0x00088fb9) cale_week_time_pane_t6_ParamLimits

0x51e1,	// (0x00088fd1) cale_week_time_pane_t7_ParamLimits

0x51f9,	// (0x00088fe9) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x00092fdc) cale_week_time_pane_t_ParamLimits

0x5215,	// (0x00089005) cell_cale_week_pane_g2_ParamLimits

0xebb3,	// (0x000929a3) bg_cale_side_pane_cp01_ParamLimits

0x6214,	// (0x0008a004) cale_month_week_pane_t1_ParamLimits

0x622b,	// (0x0008a01b) cale_month_week_pane_t2_ParamLimits

0x6242,	// (0x0008a032) cale_month_week_pane_t3_ParamLimits

0x6259,	// (0x0008a049) cale_month_week_pane_t4_ParamLimits

0x6270,	// (0x0008a060) cale_month_week_pane_t5_ParamLimits

0x6287,	// (0x0008a077) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x000930b5) cale_month_week_pane_t_ParamLimits

0x636c,	// (0x0008a15c) cell_cale_month_pane_g1_ParamLimits

0x4887,	// (0x00088677) main_cale_event_viewer_pane

0xe2d3,	// (0x000920c3) listscroll_cale_event_viewer_pane

0x04ba,	// (0x000842aa) list_cale_ev_pane

0x04c2,	// (0x000842b2) scroll_pane_cp023

0x80c3,	// (0x0008beb3) field_cale_ev_pane_ParamLimits

0x80c3,	// (0x0008beb3) field_cale_ev_pane

0x04ce,	// (0x000842be) field_cale_ev_content_pane_ParamLimits

0x04ce,	// (0x000842be) field_cale_ev_content_pane

0x04da,	// (0x000842ca) field_cale_ev_pane_g1_ParamLimits

0x04da,	// (0x000842ca) field_cale_ev_pane_g1

0x04e6,	// (0x000842d6) field_cale_ev_pane_g2_ParamLimits

0x04e6,	// (0x000842d6) field_cale_ev_pane_g2

0x04fe,	// (0x000842ee) field_cale_ev_pane_g3_ParamLimits

0x04fe,	// (0x000842ee) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x000934f6) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x000934f6) field_cale_ev_pane_g

0x0516,	// (0x00084306) field_cale_ev_pane_t1_ParamLimits

0x0516,	// (0x00084306) field_cale_ev_pane_t1

0x80e7,	// (0x0008bed7) field_cale_ev_content_pane_t1_ParamLimits

0x80e7,	// (0x0008bed7) field_cale_ev_content_pane_t1

0xce65,	// (0x00090c55) bg_button_pane_cp01

0xea61,	// (0x00092851) listscroll_cale_week_pane_ParamLimits

0x4e02,	// (0x00088bf2) popup_toolbar_window_cp01

0xeba1,	// (0x00092991) listscroll_cale_week_pane_t1_ParamLimits

0xea61,	// (0x00092851) listscroll_cale_day_pane_ParamLimits

0x4e02,	// (0x00088bf2) popup_toolbar_window_cp02

0xeba1,	// (0x00092991) listscroll_cale_day_pane_t1_ParamLimits

0xea61,	// (0x00092851) main_cale_month_pane_ParamLimits

0x7846,	// (0x0008b636) popup_toolbar_window_cp03_ParamLimits

0x7846,	// (0x0008b636) popup_toolbar_window_cp03

0x7151,	// (0x0008af41) main_image_pane_g2_ParamLimits

0x7151,	// (0x0008af41) main_image_pane_g2

0x715d,	// (0x0008af4d) main_image_pane_g3_ParamLimits

0x715d,	// (0x0008af4d) main_image_pane_g3

0x0002,

0xf4f7,	// (0x000932e7) main_image_pane_g_ParamLimits

0xf4f7,	// (0x000932e7) main_image_pane_g

0xcf7f,	// (0x00090d6f) main_image_pane_t1_ParamLimits

0x7169,	// (0x0008af59) main_image_pane_t2_ParamLimits

0x7169,	// (0x0008af59) main_image_pane_t2

0x717b,	// (0x0008af6b) main_image_pane_t3_ParamLimits

0x717b,	// (0x0008af6b) main_image_pane_t3

0x718d,	// (0x0008af7d) main_image_pane_t4_ParamLimits

0x718d,	// (0x0008af7d) main_image_pane_t4

0x0003,

0xf4fe,	// (0x000932ee) main_image_pane_t_ParamLimits

0xf4fe,	// (0x000932ee) main_image_pane_t

0x719f,	// (0x0008af8f) popup_image_details_window_cp01

0x71a9,	// (0x0008af99) popup_toobar_trans_pane_cp01_ParamLimits

0x71a9,	// (0x0008af99) popup_toobar_trans_pane_cp01

0x7788,	// (0x0008b578) popup_image_details_window_ParamLimits

0x7788,	// (0x0008b578) popup_image_details_window

0x7796,	// (0x0008b586) popup_image_focus_window

0x7ab7,	// (0x0008b8a7) camera2_autofocus_pane_ParamLimits

0x7ab7,	// (0x0008b8a7) camera2_autofocus_pane

0xe2d3,	// (0x000920c3) bg_popup_sub_pane_cp06

0x052d,	// (0x0008431d) popup_image_focus_window_g1

0x0535,	// (0x00084325) popup_image_focus_window_g2

0x053d,	// (0x0008432d) popup_image_focus_window_g3

0x0545,	// (0x00084335) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x000934fd) popup_image_focus_window_g

0x054d,	// (0x0008433d) popup_image_focus_window_t1

0x055b,	// (0x0008434b) popup_image_focus_window_t2

0x056b,	// (0x0008435b) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x00093506) popup_image_focus_window_t

0x0579,	// (0x00084369) camera2_autofocus_pane_g1

0xe401,	// (0x000921f1) bg_tb_trans_pane_cp01

0x0587,	// (0x00084377) popup_image_details_window_g1

0x059a,	// (0x0008438a) popup_image_details_window_g2

0x0002,

0xf728,	// (0x00093518) popup_image_details_window_g

0x05c3,	// (0x000843b3) popup_image_details_window_t1

0x05d5,	// (0x000843c5) popup_image_details_window_t2

0x05ee,	// (0x000843de) popup_image_details_window_t3

0x0602,	// (0x000843f2) popup_image_details_window_t4

0x061d,	// (0x0008440d) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x0009351f) popup_image_details_window_t

0xea4d,	// (0x0009283d) bg_calc_paper_pane_ParamLimits

0x4887,	// (0x00088677) grid_highlight_pane_cp013

0x4ba4,	// (0x00088994) list_calc_pane_ParamLimits

0x4bb6,	// (0x000889a6) scroll_pane_cp024

0xea61,	// (0x00092851) bg_calc_display_pane_ParamLimits

0x4bbe,	// (0x000889ae) calc_display_pane_t1_ParamLimits

0x4bd3,	// (0x000889c3) calc_display_pane_t2_ParamLimits

0x4be8,	// (0x000889d8) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x00092f4f) calc_display_pane_t_ParamLimits

0x4cbc,	// (0x00088aac) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x00092f6c) cell_calc_pane_g

0x4cc5,	// (0x00088ab5) cell_calc_pane_t1

0xeac0,	// (0x000928b0) grid_highlight_pane_cp02_ParamLimits

0xead6,	// (0x000928c6) toolbar_button_pane_cp01_ParamLimits

0xead6,	// (0x000928c6) toolbar_button_pane_cp01

0xcfc4,	// (0x00090db4) temp_image_control_pane_ParamLimits

0xcfc4,	// (0x00090db4) temp_image_control_pane

0x76f6,	// (0x0008b4e6) main_mp3_pane

0x0637,	// (0x00084427) temp_image_control_pane_g1_ParamLimits

0x0637,	// (0x00084427) temp_image_control_pane_g1

0x0645,	// (0x00084435) temp_image_control_pane_g2_ParamLimits

0x0645,	// (0x00084435) temp_image_control_pane_g2

0x0657,	// (0x00084447) temp_image_control_pane_g3_ParamLimits

0x0657,	// (0x00084447) temp_image_control_pane_g3

0x8132,	// (0x0008bf22) temp_image_control_pane_g4_ParamLimits

0x8132,	// (0x0008bf22) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x0009352a) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x0009352a) temp_image_control_pane_g

0x0637,	// (0x00084427) main_mp3_pane_g1

0x8143,	// (0x0008bf33) main_mp3_pane_g2

0x0007,

0xf743,	// (0x00093533) main_mp3_pane_g

0x069a,	// (0x0008448a) main_mp3_pane_t1

0xec18,	// (0x00092a08) main_camera_pane_g8_ParamLimits

0xec18,	// (0x00092a08) main_camera_pane_g8

0x54c1,	// (0x000892b1) main_video_pane_g7_ParamLimits

0x54c1,	// (0x000892b1) main_video_pane_g7

0x7bfa,	// (0x0008b9ea) main_camera2_pane_t7_ParamLimits

0x7bfa,	// (0x0008b9ea) main_camera2_pane_t7

0xee22,	// (0x00092c12) scroll_pane_cp025_ParamLimits

0xee22,	// (0x00092c12) scroll_pane_cp025

0xee36,	// (0x00092c26) scroll_pane_cp026_ParamLimits

0xee36,	// (0x00092c26) scroll_pane_cp026

0xee45,	// (0x00092c35) wml_content_pane_ParamLimits

0x4887,	// (0x00088677) main_touch_calib_pane

0x81e7,	// (0x0008bfd7) main_touch_calib_pane_g1

0x81f3,	// (0x0008bfe3) main_touch_calib_pane_g2

0x81ff,	// (0x0008bfef) main_touch_calib_pane_g3

0x820b,	// (0x0008bffb) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x00093551) main_touch_calib_pane_g

0x8217,	// (0x0008c007) main_touch_calib_pane_t1

0x822e,	// (0x0008c01e) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x0009355a) main_touch_calib_pane_t

0xcc3b,	// (0x00090a2b) mup_progress_pane_cp02

0xcc5a,	// (0x00090a4a) navi_pane_g1

0xccbc,	// (0x00090aac) navi_pane_mp_t3

0x76f6,	// (0x0008b4e6) main_mp3_pane_ParamLimits

0x7888,	// (0x0008b678) navi_pane_ParamLimits

0x0637,	// (0x00084427) main_mp3_pane_g1_ParamLimits

0x8143,	// (0x0008bf33) main_mp3_pane_g2_ParamLimits

0x814f,	// (0x0008bf3f) main_mp3_pane_g3_ParamLimits

0x814f,	// (0x0008bf3f) main_mp3_pane_g3

0x815b,	// (0x0008bf4b) main_mp3_pane_g4_ParamLimits

0x815b,	// (0x0008bf4b) main_mp3_pane_g4

0x0667,	// (0x00084457) main_mp3_pane_g5_ParamLimits

0x0667,	// (0x00084457) main_mp3_pane_g5

0x0675,	// (0x00084465) main_mp3_pane_g6_ParamLimits

0x0675,	// (0x00084465) main_mp3_pane_g6

0x0682,	// (0x00084472) main_mp3_pane_g7_ParamLimits

0x0682,	// (0x00084472) main_mp3_pane_g7

0x068e,	// (0x0008447e) main_mp3_pane_g8_ParamLimits

0x068e,	// (0x0008447e) main_mp3_pane_g8

0xf743,	// (0x00093533) main_mp3_pane_g_ParamLimits

0x8167,	// (0x0008bf57) main_mp3_pane_t2

0x8177,	// (0x0008bf67) main_mp3_pane_t3

0x06a8,	// (0x00084498) main_mp3_pane_t4

0x06b6,	// (0x000844a6) main_mp3_pane_t5

0x0005,

0xf754,	// (0x00093544) main_mp3_pane_t

0x06c4,	// (0x000844b4) mup_progress_pane_cp01

0x44ef,	// (0x000882df) aid_zoom_text_secondary2

0x04ba,	// (0x000842aa) list_cale_ev2_pane

0x04c2,	// (0x000842b2) scroll_pane_cp023_ParamLimits

0x8289,	// (0x0008c079) field_cale_ev2_pane_ParamLimits

0x8289,	// (0x0008c079) field_cale_ev2_pane

0x82a4,	// (0x0008c094) field_cale_ev2_pane_g1_ParamLimits

0x82a4,	// (0x0008c094) field_cale_ev2_pane_g1

0x82b0,	// (0x0008c0a0) field_cale_ev2_pane_g2_ParamLimits

0x82b0,	// (0x0008c0a0) field_cale_ev2_pane_g2

0x82c8,	// (0x0008c0b8) field_cale_ev2_pane_g3_ParamLimits

0x82c8,	// (0x0008c0b8) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x00093565) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x00093565) field_cale_ev2_pane_g

0x82e0,	// (0x0008c0d0) field_cale_ev2_pane_t1_ParamLimits

0x82e0,	// (0x0008c0d0) field_cale_ev2_pane_t1

0x82f7,	// (0x0008c0e7) field_cale_ev2_pane_t2_ParamLimits

0x82f7,	// (0x0008c0e7) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x0009356e) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x0009356e) field_cale_ev2_pane_t

0x7030,	// (0x0008ae20) main_postcard_pane_g5_ParamLimits

0x7030,	// (0x0008ae20) main_postcard_pane_g5

0x703e,	// (0x0008ae2e) main_postcard_pane_g6_ParamLimits

0x703e,	// (0x0008ae2e) main_postcard_pane_g6

0x52ff,	// (0x000890ef) camera2_autofocus_pane_cp_ParamLimits

0x52ff,	// (0x000890ef) camera2_autofocus_pane_cp

0x76f6,	// (0x0008b4e6) main_mup3_pane

0x832c,	// (0x0008c11c) main_mup3_pane_g1_ParamLimits

0x832c,	// (0x0008c11c) main_mup3_pane_g1

0x834d,	// (0x0008c13d) main_mup3_pane_g2_ParamLimits

0x834d,	// (0x0008c13d) main_mup3_pane_g2

0x83c9,	// (0x0008c1b9) main_mup3_pane_g3_ParamLimits

0x83c9,	// (0x0008c1b9) main_mup3_pane_g3

0x8412,	// (0x0008c202) main_mup3_pane_g4_ParamLimits

0x8412,	// (0x0008c202) main_mup3_pane_g4

0x845b,	// (0x0008c24b) main_mup3_pane_g5_ParamLimits

0x845b,	// (0x0008c24b) main_mup3_pane_g5

0x84a4,	// (0x0008c294) main_mup3_pane_g6_ParamLimits

0x84a4,	// (0x0008c294) main_mup3_pane_g6

0x06d8,	// (0x000844c8) main_mup3_pane_g7_ParamLimits

0x06d8,	// (0x000844c8) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x0009357e) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x0009357e) main_mup3_pane_g

0x851e,	// (0x0008c30e) main_mup3_pane_t1_ParamLimits

0x851e,	// (0x0008c30e) main_mup3_pane_t1

0x858f,	// (0x0008c37f) main_mup3_pane_t2_ParamLimits

0x858f,	// (0x0008c37f) main_mup3_pane_t2

0x8658,	// (0x0008c448) main_mup3_pane_t4_ParamLimits

0x8658,	// (0x0008c448) main_mup3_pane_t4

0x86ac,	// (0x0008c49c) main_mup3_pane_t5_ParamLimits

0x86ac,	// (0x0008c49c) main_mup3_pane_t5

0x8764,	// (0x0008c554) main_mup3_pane_t6_ParamLimits

0x8764,	// (0x0008c554) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x0009358f) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x0009358f) main_mup3_pane_t

0x8810,	// (0x0008c600) mup3_progress_pane_ParamLimits

0x8810,	// (0x0008c600) mup3_progress_pane

0x8892,	// (0x0008c682) popup_mup3_control_window_ParamLimits

0x8892,	// (0x0008c682) popup_mup3_control_window

0x06e6,	// (0x000844d6) popup_mup3_text_window

0x88af,	// (0x0008c69f) mup3_progress_pane_t1

0x88ce,	// (0x0008c6be) mup3_progress_pane_t2

0x06ee,	// (0x000844de) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x0009359c) mup3_progress_pane_t

0x070b,	// (0x000844fb) mup_progress_pane_cp03

0xe2d3,	// (0x000920c3) bg_tb_trans_pane_cp04

0x88ed,	// (0x0008c6dd) mup3_volume_pane

0x88f5,	// (0x0008c6e5) popup_mup3_control_window_g1

0x151c,	// (0x0008530c) mup3_volume_pane_g1

0x1525,	// (0x00085315) mup3_volume_pane_g2

0x152e,	// (0x0008531e) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x000935a3) mup3_volume_pane_g

0xe2d3,	// (0x000920c3) bg_tb_trans_pane_cp03

0x071b,	// (0x0008450b) popup_mup3_text_window_g1

0x0723,	// (0x00084513) popup_mup3_text_window_t1

0xeaa9,	// (0x00092899) list_calc_item_pane_g1_ParamLimits

0xe28a,	// (0x0009207a) mup_volume_pane_cp_g1

0x8247,	// (0x0008c037) main_touch_calib_pane_t3

0x825d,	// (0x0008c04d) main_touch_calib_pane_t4

0x8273,	// (0x0008c063) main_touch_calib_pane_t5

0x45ca,	// (0x000883ba) aid_cell_size_toolbar2

0x45d2,	// (0x000883c2) aid_popup3_width_pane

0x44df,	// (0x000882cf) aid_zoom_text_msg_primary

0x52d4,	// (0x000890c4) vorec_t7

0xea6d,	// (0x0009285d) bg_calc_paper_pane_g1_ParamLimits

0xea79,	// (0x00092869) bg_calc_paper_pane_g2_ParamLimits

0xea85,	// (0x00092875) bg_calc_paper_pane_g3_ParamLimits

0xea91,	// (0x00092881) bg_calc_paper_pane_g4_ParamLimits

0xea9d,	// (0x0009288d) bg_calc_paper_pane_g5_ParamLimits

0x4c29,	// (0x00088a19) bg_calc_paper_pane_g6_ParamLimits

0x4c3a,	// (0x00088a2a) bg_calc_paper_pane_g7_ParamLimits

0x4c4b,	// (0x00088a3b) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x00092f56) bg_calc_paper_pane_g_ParamLimits

0x4c5e,	// (0x00088a4e) calc_bg_paper_pane_g9_ParamLimits

0x53f0,	// (0x000891e0) image_qvga_pane_ParamLimits

0x53f0,	// (0x000891e0) image_qvga_pane

0xe98e,	// (0x0009277e) bg_popup_sub_pane_cp04_ParamLimits

0xcefb,	// (0x00090ceb) popup_mup_playback_window_g1_ParamLimits

0xcf07,	// (0x00090cf7) popup_mup_playback_window_t1_ParamLimits

0xcf1c,	// (0x00090d0c) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x000932e2) popup_mup_playback_window_t_ParamLimits

0x7d29,	// (0x0008bb19) main_mup2_pane_g3_ParamLimits

0x7d29,	// (0x0008bb19) main_mup2_pane_g3

0x56f3,	// (0x000894e3) popup_toolbar_window_cp04

0xd317,	// (0x00091107) popup_call2_audio_second_window_g3_ParamLimits

0xd317,	// (0x00091107) popup_call2_audio_second_window_g3

0xd721,	// (0x00091511) popup_call2_audio_first_window_g4_ParamLimits

0xd721,	// (0x00091511) popup_call2_audio_first_window_g4

0xdda0,	// (0x00091b90) popup_call2_audio_in_window_g4_ParamLimits

0xdda0,	// (0x00091b90) popup_call2_audio_in_window_g4

0x7144,	// (0x0008af34) aid_area_sk_bg_cut_ParamLimits

0x7144,	// (0x0008af34) aid_area_sk_bg_cut

0xcf31,	// (0x00090d21) aid_area_sk_bg_cut_2_ParamLimits

0xcf31,	// (0x00090d21) aid_area_sk_bg_cut_2

0x8099,	// (0x0008be89) aid_placing_details_win

0x80a1,	// (0x0008be91) aid_placing_details_win_2

0x0579,	// (0x00084369) camera2_autofocus_pane_g1_ParamLimits

0x481d,	// (0x0008860d) popup_fixed_preview_cale_window_ParamLimits

0x481d,	// (0x0008860d) popup_fixed_preview_cale_window

0xcd0b,	// (0x00090afb) navi_slider_pane_g3

0xcd14,	// (0x00090b04) navi_slider_pane_g4

0xcd1d,	// (0x00090b0d) navi_slider_pane_g5

0xcd0b,	// (0x00090afb) navi_slider_pane_g6

0x69e3,	// (0x0008a7d3) navi_slider_pane_g7

0xce32,	// (0x00090c22) mup_scale_pane_g3

0xce3b,	// (0x00090c2b) mup_scale_pane_g4

0xce44,	// (0x00090c34) mup_scale_pane_g5

0x6e5a,	// (0x0008ac4a) mup_scale_pane_g6

0x6e63,	// (0x0008ac53) mup_scale_pane_g7

0xcd0b,	// (0x00090afb) cams2_slider_pane_g3

0x01f5,	// (0x00083fe5) cams2_slider_pane_g4

0x7ff6,	// (0x0008bde6) cams2_slider_pane_g5

0xcd0b,	// (0x00090afb) cams2_slider_pane_g6

0x7ffe,	// (0x0008bdee) cams2_slider_pane_g7

0x0437,	// (0x00084227) camera2_autofocus_pane_cp_g1

0x0731,	// (0x00084521) bg_popup_preview_window_pane_cp02_ParamLimits

0x0731,	// (0x00084521) bg_popup_preview_window_pane_cp02

0x073d,	// (0x0008452d) list_fp_cale_pane_ParamLimits

0x073d,	// (0x0008452d) list_fp_cale_pane

0x0749,	// (0x00084539) popup_fixed_preview_cale_window_t1_ParamLimits

0x0749,	// (0x00084539) popup_fixed_preview_cale_window_t1

0x88fe,	// (0x0008c6ee) popup_fixed_preview_cale_window_t2_ParamLimits

0x88fe,	// (0x0008c6ee) popup_fixed_preview_cale_window_t2

0x8913,	// (0x0008c703) popup_fixed_preview_cale_window_t3_ParamLimits

0x8913,	// (0x0008c703) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x000935aa) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x000935aa) popup_fixed_preview_cale_window_t

0x8928,	// (0x0008c718) list_single_fp_cale_pane_ParamLimits

0x8928,	// (0x0008c718) list_single_fp_cale_pane

0x077f,	// (0x0008456f) list_single_fp_cale_pane_g1_ParamLimits

0x077f,	// (0x0008456f) list_single_fp_cale_pane_g1

0x078b,	// (0x0008457b) list_single_fp_cale_pane_g2_ParamLimits

0x078b,	// (0x0008457b) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x000935b1) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x000935b1) list_single_fp_cale_pane_g

0x07a4,	// (0x00084594) list_single_fp_cale_pane_t1_ParamLimits

0x07a4,	// (0x00084594) list_single_fp_cale_pane_t1

0x07b6,	// (0x000845a6) list_single_fp_cale_pane_t2_ParamLimits

0x07b6,	// (0x000845a6) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x000935b8) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x000935b8) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4887,	// (0x00088677) main_dialer_pane

0x8935,	// (0x0008c725) aid_cell_size_keypad

0x893f,	// (0x0008c72f) dialer_ne_pane

0x8949,	// (0x0008c739) grid_dialer_command_1_pane

0x8951,	// (0x0008c741) grid_dialer_command_2_pane

0x8959,	// (0x0008c749) grid_dialer_keypad_pane

0x896d,	// (0x0008c75d) bg_popup_call_pane_cp06_ParamLimits

0x896d,	// (0x0008c75d) bg_popup_call_pane_cp06

0x8979,	// (0x0008c769) dialer_ne_clear_pane_ParamLimits

0x8979,	// (0x0008c769) dialer_ne_clear_pane

0x07e9,	// (0x000845d9) dialer_ne_pane_g1

0x07f1,	// (0x000845e1) dialer_ne_pane_t1_ParamLimits

0x07f1,	// (0x000845e1) dialer_ne_pane_t1

0x8985,	// (0x0008c775) dialer_ne_pane_t2_ParamLimits

0x8985,	// (0x0008c775) dialer_ne_pane_t2

0x89a2,	// (0x0008c792) dialer_ne_pane_t3_ParamLimits

0x89a2,	// (0x0008c792) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x000935bd) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x000935bd) dialer_ne_pane_t

0x89c6,	// (0x0008c7b6) dialer_ne_pane_t3_copy1_ParamLimits

0x89c6,	// (0x0008c7b6) dialer_ne_pane_t3_copy1

0x89ea,	// (0x0008c7da) cell_dialer_keypad_pane_ParamLimits

0x89ea,	// (0x0008c7da) cell_dialer_keypad_pane

0x89ff,	// (0x0008c7ef) cell_dialer_command_1_pane_ParamLimits

0x89ff,	// (0x0008c7ef) cell_dialer_command_1_pane

0x8a15,	// (0x0008c805) cell_dialer_command_2_pane_ParamLimits

0x8a15,	// (0x0008c805) cell_dialer_command_2_pane

0x0803,	// (0x000845f3) bg_button_pane_cp02_ParamLimits

0x0803,	// (0x000845f3) bg_button_pane_cp02

0x8a24,	// (0x0008c814) cell_dialer_keypad_pane_g1_ParamLimits

0x8a24,	// (0x0008c814) cell_dialer_keypad_pane_g1

0x0803,	// (0x000845f3) bg_button_pane_cp03_ParamLimits

0x0803,	// (0x000845f3) bg_button_pane_cp03

0x8a39,	// (0x0008c829) cell_dialer_command_1_pane_g1_ParamLimits

0x8a39,	// (0x0008c829) cell_dialer_command_1_pane_g1

0x080f,	// (0x000845ff) bg_button_pane_cp04

0x8a4d,	// (0x0008c83d) cell_dialer_command_2_pane_g1

0xccfa,	// (0x00090aea) bg_button_pane_cp06

0x0817,	// (0x00084607) dialer_ne_clear_pane_g1

0x6926,	// (0x0008a716) navi_pane_g2

0x6954,	// (0x0008a744) navi_pane_g3

0x0002,

0xf3f5,	// (0x000931e5) navi_pane_g

0x697f,	// (0x0008a76f) navi_pane_mv_g2

0x69a6,	// (0x0008a796) navi_pane_mv_g5

0x69ae,	// (0x0008a79e) navi_pane_mv_t1

0xea61,	// (0x00092851) main_clock2_pane

0x8a7f,	// (0x0008c86f) main_clock2_list_pane_ParamLimits

0x8a7f,	// (0x0008c86f) main_clock2_list_pane

0x8aa9,	// (0x0008c899) main_clock2_pane_t1_ParamLimits

0x8aa9,	// (0x0008c899) main_clock2_pane_t1

0x8acb,	// (0x0008c8bb) main_clock2_pane_t2_ParamLimits

0x8acb,	// (0x0008c8bb) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x000935c4) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x000935c4) main_clock2_pane_t

0x8b28,	// (0x0008c918) popup_clock_analogue_window_cp03_ParamLimits

0x8b28,	// (0x0008c918) popup_clock_analogue_window_cp03

0x8b48,	// (0x0008c938) popup_clock_digital_window_cp02_ParamLimits

0x8b48,	// (0x0008c938) popup_clock_digital_window_cp02

0x8bb9,	// (0x0008c9a9) main_clock2_list_single_pane_ParamLimits

0x8bb9,	// (0x0008c9a9) main_clock2_list_single_pane

0xccfa,	// (0x00090aea) list_highlight_pane_cp05

0x081f,	// (0x0008460f) main_clock2_list_single_pane_t1

0x56f3,	// (0x000894e3) popup_toolbar_window_cp04_ParamLimits

0x8102,	// (0x0008bef2) camera2_autofocus_pane_g2_ParamLimits

0x8102,	// (0x0008bef2) camera2_autofocus_pane_g2

0x810e,	// (0x0008befe) camera2_autofocus_pane_g3_ParamLimits

0x810e,	// (0x0008befe) camera2_autofocus_pane_g3

0x811a,	// (0x0008bf0a) camera2_autofocus_pane_g4_ParamLimits

0x811a,	// (0x0008bf0a) camera2_autofocus_pane_g4

0x8126,	// (0x0008bf16) camera2_autofocus_pane_g5_ParamLimits

0x8126,	// (0x0008bf16) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x0009350d) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x0009350d) camera2_autofocus_pane_g

0x830c,	// (0x0008c0fc) camera2_autofocus_pane_cp_g2

0x8314,	// (0x0008c104) camera2_autofocus_pane_cp_g3

0x831c,	// (0x0008c10c) camera2_autofocus_pane_cp_g4

0x8324,	// (0x0008c114) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x00093573) camera2_autofocus_pane_cp_g

0x8965,	// (0x0008c755) popup_dialer_spcha_window

0xe2d3,	// (0x000920c3) bg_popup_sub_pane_cp07

0x082d,	// (0x0008461d) list_spcha_pane

0x0835,	// (0x00084625) list_single_spcha_pane_ParamLimits

0x0835,	// (0x00084625) list_single_spcha_pane

0xe2d3,	// (0x000920c3) list_highlight_pane_cp06

0x0846,	// (0x00084636) list_single_spcha_pane_t1

0xdb4a,	// (0x0009193a) popup_call2_audio_out_window_g4_ParamLimits

0xdb4a,	// (0x0009193a) popup_call2_audio_out_window_g4

0x4887,	// (0x00088677) main_imed2_pane

0x77a0,	// (0x0008b590) popup_imed_adjust2_window

0x77b3,	// (0x0008b5a3) popup_imed_trans_window_ParamLimits

0x77b3,	// (0x0008b5a3) popup_imed_trans_window

0x026f,	// (0x0008405f) popup_blid_sat_info2_window_t1

0x027d,	// (0x0008406d) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x000934a2) popup_blid_sat_info2_window_t

0x8c63,	// (0x0008ca53) aid_size_cell_colour_35

0x8c7d,	// (0x0008ca6d) aid_size_cell_colour_112

0x8c94,	// (0x0008ca84) aid_size_cell_effect

0xe401,	// (0x000921f1) bg_tb_trans_pane_cp02

0x3013,	// (0x00086e03) heading_imed_pane

0x8cae,	// (0x0008ca9e) listscroll_imed_pane

0x0854,	// (0x00084644) heading_imed_pane_g1

0x085c,	// (0x0008464c) heading_imed_pane_t1

0x086a,	// (0x0008465a) grid_imed_colour_35_pane_ParamLimits

0x086a,	// (0x0008465a) grid_imed_colour_35_pane

0x8cba,	// (0x0008caaa) grid_imed_effect_pane

0x0886,	// (0x00084676) list_imed_aspect_pane

0x8cca,	// (0x0008caba) scroll_pane_cp027_ParamLimits

0x8cca,	// (0x0008caba) scroll_pane_cp027

0x8cd6,	// (0x0008cac6) cell_imed_effect_pane_ParamLimits

0x8cd6,	// (0x0008cac6) cell_imed_effect_pane

0x088e,	// (0x0008467e) cell_imed_colour_pane_ParamLimits

0x088e,	// (0x0008467e) cell_imed_colour_pane

0x08d8,	// (0x000846c8) cell_imed_colour_pane_g1_ParamLimits

0x08d8,	// (0x000846c8) cell_imed_colour_pane_g1

0x08e9,	// (0x000846d9) hgihlgiht_grid_pane_cp016_ParamLimits

0x08e9,	// (0x000846d9) hgihlgiht_grid_pane_cp016

0x8cf2,	// (0x0008cae2) cell_imed_effect_pane_g1

0x8cfa,	// (0x0008caea) grid_highlight_pane_cp017

0x08fa,	// (0x000846ea) list_imed_single_pane_ParamLimits

0x08fa,	// (0x000846ea) list_imed_single_pane

0xe2d3,	// (0x000920c3) list_highlight_pane_cp07

0x090e,	// (0x000846fe) list_imed_aspect_pane_comp1_t1

0xe105,	// (0x00091ef5) bg_tb_trans_pane_cp05

0x0930,	// (0x00084720) popup_imed_adjust2_window_g1

0x0957,	// (0x00084747) popup_imed_adjust2_window_t1

0x096f,	// (0x0008475f) slider_imed_adjust_pane

0x0983,	// (0x00084773) slider_imed_adjust_pane_g1

0x0993,	// (0x00084783) slider_imed_adjust_pane_g2

0x09a3,	// (0x00084793) slider_imed_adjust_pane_g3

0x09b4,	// (0x000847a4) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x000935e1) slider_imed_adjust_pane_g

0x8d03,	// (0x0008caf3) aid_size_cell_clipart2

0x8d0f,	// (0x0008caff) grid_imed_clipart_pane

0x09c5,	// (0x000847b5) scroll_pane_cp031

0x8d19,	// (0x0008cb09) cell_imed_clipart_pane_ParamLimits

0x8d19,	// (0x0008cb09) cell_imed_clipart_pane

0x8d37,	// (0x0008cb27) cell_imed_clipart_pane_g1

0xe2d3,	// (0x000920c3) grid_highlight_pane_cp014

0x8a8b,	// (0x0008c87b) main_clock2_pane_g1_ParamLimits

0x8a8b,	// (0x0008c87b) main_clock2_pane_g1

0x8b64,	// (0x0008c954) aid_call2_pane_cp10

0x8b76,	// (0x0008c966) aid_call_pane_cp10

0xcc2f,	// (0x00090a1f) popup_clock_analogue_window_cp10_g1

0xcc2f,	// (0x00090a1f) popup_clock_analogue_window_cp10_g2

0x8b88,	// (0x0008c978) popup_clock_analogue_window_cp10_g3

0x8b88,	// (0x0008c978) popup_clock_analogue_window_cp10_g4

0xcc2f,	// (0x00090a1f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x000935cf) popup_clock_analogue_window_cp10_g

0x8b9a,	// (0x0008c98a) popup_clock_analogue_window_cp10_t1

0x8bcb,	// (0x0008c9bb) clock_digital_number_pane_cp10_ParamLimits

0x8bcb,	// (0x0008c9bb) clock_digital_number_pane_cp10

0x8be3,	// (0x0008c9d3) clock_digital_number_pane_cp11_ParamLimits

0x8be3,	// (0x0008c9d3) clock_digital_number_pane_cp11

0x8bfb,	// (0x0008c9eb) clock_digital_number_pane_cp12_ParamLimits

0x8bfb,	// (0x0008c9eb) clock_digital_number_pane_cp12

0x8c13,	// (0x0008ca03) clock_digital_number_pane_cp13_ParamLimits

0x8c13,	// (0x0008ca03) clock_digital_number_pane_cp13

0x8c2b,	// (0x0008ca1b) clock_digital_separator_pane_cp10_ParamLimits

0x8c2b,	// (0x0008ca1b) clock_digital_separator_pane_cp10

0x8c43,	// (0x0008ca33) popup_clock_digital_window_cp02_t1_ParamLimits

0x8c43,	// (0x0008ca33) popup_clock_digital_window_cp02_t1

0xe986,	// (0x00092776) clock_digital_number_pane_cp10_g1

0xe986,	// (0x00092776) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x000935ea) clock_digital_number_pane_cp10_g

0xe986,	// (0x00092776) clock_digital_separator_pane_cp10_g1

0xe986,	// (0x00092776) clock_digital_separator_pane_g2_cp10

0xccca,	// (0x00090aba) navi_pane_vded_g4

0xccd3,	// (0x00090ac3) navi_pane_vded_g5

0xccdc,	// (0x00090acc) navi_pane_vded_t1

0x4887,	// (0x00088677) main_vded_pane

0x8d40,	// (0x0008cb30) main_vded_pane_g1

0x8d4c,	// (0x0008cb3c) main_vded_pane_g2

0x8d56,	// (0x0008cb46) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x000935ef) main_vded_pane_g

0x8d60,	// (0x0008cb50) main_vded_pane_t1

0x8d6e,	// (0x0008cb5e) main_vded_pane_t2

0x0001,

0xf806,	// (0x000935f6) main_vded_pane_t

0x8d7c,	// (0x0008cb6c) vded_slider_pane

0x8d86,	// (0x0008cb76) vded_video_pane

0x09cd,	// (0x000847bd) vded_video_pane_g1

0x8d92,	// (0x0008cb82) vded_video_pane_g2

0x0437,	// (0x00084227) vded_video_pane_g3

0x0002,

0xf80b,	// (0x000935fb) vded_video_pane_g

0x09d7,	// (0x000847c7) vded_slider_pane_g1

0xe28a,	// (0x0009207a) vded_slider_pane_g2

0x09e0,	// (0x000847d0) vded_slider_pane_g3

0x09e9,	// (0x000847d9) vded_slider_pane_g4

0x09f2,	// (0x000847e2) vded_slider_pane_g5

0x0004,

0xf812,	// (0x00093602) vded_slider_pane_g

0x8886,	// (0x0008c676) mup3_rocker_pane_ParamLimits

0x8886,	// (0x0008c676) mup3_rocker_pane

0x8d9b,	// (0x0008cb8b) mup3_control_keys_pane_g1

0x8da3,	// (0x0008cb93) mup3_control_keys_pane_g2

0x8dab,	// (0x0008cb9b) mup3_control_keys_pane_g3

0x8db3,	// (0x0008cba3) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x0009360d) mup3_control_keys_pane_g

0x4845,	// (0x00088635) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4845,	// (0x00088635) popup_toolbar2_fixed_window_cp01

0x88a2,	// (0x0008c692) popup_toolbar2_fixed_window_cp02_ParamLimits

0x88a2,	// (0x0008c692) popup_toolbar2_fixed_window_cp02

0xd489,	// (0x00091279) popup_call2_audio_second_window_t4_ParamLimits

0xd489,	// (0x00091279) popup_call2_audio_second_window_t4

0xd9b7,	// (0x000917a7) popup_call2_audio_first_window_t6_ParamLimits

0xd9b7,	// (0x000917a7) popup_call2_audio_first_window_t6

0xdc4d,	// (0x00091a3d) popup_call2_audio_out_window_t6_ParamLimits

0xdc4d,	// (0x00091a3d) popup_call2_audio_out_window_t6

0x4887,	// (0x00088677) main_vitu_pane

0x8dc3,	// (0x0008cbb3) aid_size_cell_itu_ParamLimits

0x8dc3,	// (0x0008cbb3) aid_size_cell_itu

0x8dd1,	// (0x0008cbc1) bg_popup_window_pane_cp08_ParamLimits

0x8dd1,	// (0x0008cbc1) bg_popup_window_pane_cp08

0x8ddf,	// (0x0008cbcf) field_vitu_entry_pane_ParamLimits

0x8ddf,	// (0x0008cbcf) field_vitu_entry_pane

0x8dee,	// (0x0008cbde) grid_vitu_function_pane_ParamLimits

0x8dee,	// (0x0008cbde) grid_vitu_function_pane

0x8dfe,	// (0x0008cbee) grid_vitu_itu_pane_ParamLimits

0x8dfe,	// (0x0008cbee) grid_vitu_itu_pane

0x8e0c,	// (0x0008cbfc) cell_vitu_itu_pane_ParamLimits

0x8e0c,	// (0x0008cbfc) cell_vitu_itu_pane

0x8e23,	// (0x0008cc13) cell_vitu_function_pane_ParamLimits

0x8e23,	// (0x0008cc13) cell_vitu_function_pane

0xe401,	// (0x000921f1) bg_popup_sub_pane_cp08_ParamLimits

0xe401,	// (0x000921f1) bg_popup_sub_pane_cp08

0x8e37,	// (0x0008cc27) field_vitu_entry_pane_t1_ParamLimits

0x8e37,	// (0x0008cc27) field_vitu_entry_pane_t1

0x0a13,	// (0x00084803) field_vitu_entry_pane_t2_ParamLimits

0x0a13,	// (0x00084803) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x0009361b) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x0009361b) field_vitu_entry_pane_t

0x0a30,	// (0x00084820) bg_button_pane_cp05_ParamLimits

0x0a30,	// (0x00084820) bg_button_pane_cp05

0x8e50,	// (0x0008cc40) cell_vitu_itu_pane_g1

0x8e68,	// (0x0008cc58) cell_vitu_itu_pane_t1_ParamLimits

0x8e68,	// (0x0008cc58) cell_vitu_itu_pane_t1

0x8e7a,	// (0x0008cc6a) cell_vitu_itu_pane_t2_ParamLimits

0x8e7a,	// (0x0008cc6a) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x00093620) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x00093620) cell_vitu_itu_pane_t

0x0a3e,	// (0x0008482e) bg_button_pane_cp07

0x8ebd,	// (0x0008ccad) cell_vitu_function_pane_g1

0x4acb,	// (0x000888bb) main_calc_pane_g1

0x4606,	// (0x000883f6) aid_visual_content_pane

0x4887,	// (0x00088677) main_vradio_pane

0x8ec6,	// (0x0008ccb6) main_vradio_pane_g1_ParamLimits

0x8ec6,	// (0x0008ccb6) main_vradio_pane_g1

0x0a48,	// (0x00084838) main_vradio_pane_g2_ParamLimits

0x0a48,	// (0x00084838) main_vradio_pane_g2

0x0001,

0xf837,	// (0x00093627) main_vradio_pane_g_ParamLimits

0xf837,	// (0x00093627) main_vradio_pane_g

0x8ed4,	// (0x0008ccc4) main_vradio_pane_t1_ParamLimits

0x8ed4,	// (0x0008ccc4) main_vradio_pane_t1

0x8ee6,	// (0x0008ccd6) main_vradio_pane_t2_ParamLimits

0x8ee6,	// (0x0008ccd6) main_vradio_pane_t2

0x0a55,	// (0x00084845) main_vradio_pane_t3_ParamLimits

0x0a55,	// (0x00084845) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x0009362c) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x0009362c) main_vradio_pane_t

0x8ef8,	// (0x0008cce8) vradio_rocker_control_pane_ParamLimits

0x8ef8,	// (0x0008cce8) vradio_rocker_control_pane

0x8f04,	// (0x0008ccf4) vradio_station_info_pane_ParamLimits

0x8f04,	// (0x0008ccf4) vradio_station_info_pane

0x0a69,	// (0x00084859) vradio_frequency_info_pane_ParamLimits

0x0a69,	// (0x00084859) vradio_frequency_info_pane

0x0437,	// (0x00084227) vradio_station_info_pane_g1

0x0a78,	// (0x00084868) vradio_station_info_pane_t1_ParamLimits

0x0a78,	// (0x00084868) vradio_station_info_pane_t1

0x0a9a,	// (0x0008488a) vradio_station_info_pane_t2_ParamLimits

0x0a9a,	// (0x0008488a) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x00093633) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x00093633) vradio_station_info_pane_t

0x0aac,	// (0x0008489c) vradio_tuning_pane

0x0ab4,	// (0x000848a4) vradio_rocker_control_pane_g1

0x0abc,	// (0x000848ac) vradio_rocker_control_pane_g2

0x0ac4,	// (0x000848b4) vradio_rocker_control_pane_g3

0x0acc,	// (0x000848bc) vradio_rocker_control_pane_g4

0x0ad4,	// (0x000848c4) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x00093638) vradio_rocker_control_pane_g

0x8f11,	// (0x0008cd01) vradio_frequency_info_pane_g1

0x0adc,	// (0x000848cc) vradio_frequency_info_pane_t1_ParamLimits

0x0adc,	// (0x000848cc) vradio_frequency_info_pane_t1

0x8f1b,	// (0x0008cd0b) vradio_tuning_pane_g1

0x8f26,	// (0x0008cd16) vradio_tuning_pane_t1

0x4647,	// (0x00088437) area_side_right_pane_ParamLimits

0x4647,	// (0x00088437) area_side_right_pane

0xe0cc,	// (0x00091ebc) status_small_pane_g1

0xe0d4,	// (0x00091ec4) status_small_pane_g2

0xe0dd,	// (0x00091ecd) status_small_pane_g3

0xe0e6,	// (0x00091ed6) status_small_pane_g4

0x0003,

0xf608,	// (0x000933f8) status_small_pane_g

0xe0ef,	// (0x00091edf) status_small_pane_t1

0x4887,	// (0x00088677) main_video3_pane

0x0af0,	// (0x000848e0) cams_zoom_vslider_pane

0x0af8,	// (0x000848e8) image3_wide_pane_ParamLimits

0x0af8,	// (0x000848e8) image3_wide_pane

0x0b12,	// (0x00084902) image3_wide_small_pane

0x0b1e,	// (0x0008490e) main_video3_pane_g1_ParamLimits

0x0b1e,	// (0x0008490e) main_video3_pane_g1

0x0b3a,	// (0x0008492a) main_video3_pane_g2_ParamLimits

0x0b3a,	// (0x0008492a) main_video3_pane_g2

0x0001,

0xf853,	// (0x00093643) main_video3_pane_g_ParamLimits

0xf853,	// (0x00093643) main_video3_pane_g

0x0b56,	// (0x00084946) main_video3_pane_t1_ParamLimits

0x0b56,	// (0x00084946) main_video3_pane_t1

0x0b81,	// (0x00084971) main_video3_pane_t2_ParamLimits

0x0b81,	// (0x00084971) main_video3_pane_t2

0x0bae,	// (0x0008499e) main_video3_pane_t3_ParamLimits

0x0bae,	// (0x0008499e) main_video3_pane_t3

0x0002,

0xf858,	// (0x00093648) main_video3_pane_t_ParamLimits

0xf858,	// (0x00093648) main_video3_pane_t

0x0bdb,	// (0x000849cb) cams_zoom_vslider_pane_g1

0x0be4,	// (0x000849d4) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x0009364f) cams_zoom_vslider_pane_g

0x0bec,	// (0x000849dc) small_slider_vertical_pane

0x0437,	// (0x00084227) small_slider_vertical_pane_g1

0x0437,	// (0x00084227) small_slider_vertical_pane_g2

0x0bf4,	// (0x000849e4) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x00093654) small_slider_vertical_pane_g

0x4887,	// (0x00088677) main_hwr_training_pane

0x0bfd,	// (0x000849ed) hwr_training_instruct_pane_ParamLimits

0x0bfd,	// (0x000849ed) hwr_training_instruct_pane

0x8f35,	// (0x0008cd25) hwr_training_navi_pane_ParamLimits

0x8f35,	// (0x0008cd25) hwr_training_navi_pane

0x8f4f,	// (0x0008cd3f) hwr_training_write_pane_ParamLimits

0x8f4f,	// (0x0008cd3f) hwr_training_write_pane

0xe2d3,	// (0x000920c3) bg_frame_shadow_pane

0x0c34,	// (0x00084a24) hwr_training_write_pane_g1

0x0c3c,	// (0x00084a2c) hwr_training_write_pane_g2

0x0c44,	// (0x00084a34) hwr_training_write_pane_g3

0x0c4c,	// (0x00084a3c) hwr_training_write_pane_g4

0x0c54,	// (0x00084a44) hwr_training_write_pane_g5

0x0c5c,	// (0x00084a4c) hwr_training_write_pane_g6

0x0c64,	// (0x00084a54) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x0009365b) hwr_training_write_pane_g

0x8f87,	// (0x0008cd77) hwr_training_navi_pane_g1_ParamLimits

0x8f87,	// (0x0008cd77) hwr_training_navi_pane_g1

0x8f99,	// (0x0008cd89) hwr_training_navi_pane_g2_ParamLimits

0x8f99,	// (0x0008cd89) hwr_training_navi_pane_g2

0x8fab,	// (0x0008cd9b) hwr_training_navi_pane_g3_ParamLimits

0x8fab,	// (0x0008cd9b) hwr_training_navi_pane_g3

0x8fbb,	// (0x0008cdab) hwr_training_navi_pane_g4_ParamLimits

0x8fbb,	// (0x0008cdab) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x0009366a) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x0009366a) hwr_training_navi_pane_g

0x8fd5,	// (0x0008cdc5) hwr_training_navi_pane_t1

0x8fe3,	// (0x0008cdd3) list_single_hwr_training_instruct_pane_ParamLimits

0x8fe3,	// (0x0008cdd3) list_single_hwr_training_instruct_pane

0x0c6c,	// (0x00084a5c) list_single_hwr_training_instruct_pane_t1

0x0377,	// (0x00084167) bg_frame_shadow_pane_g1

0x0c7b,	// (0x00084a6b) bg_frame_shadow_pane_g2

0x0c83,	// (0x00084a73) bg_frame_shadow_pane_g3

0x0c8b,	// (0x00084a7b) bg_frame_shadow_pane_g4

0x0c93,	// (0x00084a83) bg_frame_shadow_pane_g5

0x0c9b,	// (0x00084a8b) bg_frame_shadow_pane_g6

0x0ca3,	// (0x00084a93) bg_frame_shadow_pane_g7

0xeb2c,	// (0x0009291c) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x00093675) bg_frame_shadow_pane_g

0x4887,	// (0x00088677) main_video_tele_dialer_pane

0x8ffc,	// (0x0008cdec) aid_size_cell_video_keypad_ParamLimits

0x8ffc,	// (0x0008cdec) aid_size_cell_video_keypad

0x900c,	// (0x0008cdfc) grid_video_dialer_keypad_pane_ParamLimits

0x900c,	// (0x0008cdfc) grid_video_dialer_keypad_pane

0x903e,	// (0x0008ce2e) video_down_pane_cp_ParamLimits

0x903e,	// (0x0008ce2e) video_down_pane_cp

0x9066,	// (0x0008ce56) cell_video_dialer_keypad_pane_ParamLimits

0x9066,	// (0x0008ce56) cell_video_dialer_keypad_pane

0x0cab,	// (0x00084a9b) bg_button_pane_cp08_ParamLimits

0x0cab,	// (0x00084a9b) bg_button_pane_cp08

0x907d,	// (0x0008ce6d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x907d,	// (0x0008ce6d) cell_video_dialer_keypad_pane_g1

0x887a,	// (0x0008c66a) mup3_rocker2_pane_ParamLimits

0x887a,	// (0x0008c66a) mup3_rocker2_pane

0x0437,	// (0x00084227) mup3_rocker2_pane_g1

0x7704,	// (0x0008b4f4) main_dialer2_pane

0x4887,	// (0x00088677) main_mp4_pane

0x90bc,	// (0x0008ceac) main_mp4_pane_g1_ParamLimits

0x90bc,	// (0x0008ceac) main_mp4_pane_g1

0x90ca,	// (0x0008ceba) main_mp4_pane_g2_ParamLimits

0x90ca,	// (0x0008ceba) main_mp4_pane_g2

0x90d8,	// (0x0008cec8) main_mp4_pane_g3_ParamLimits

0x90d8,	// (0x0008cec8) main_mp4_pane_g3

0x912b,	// (0x0008cf1b) main_mp4_pane_g4_ParamLimits

0x912b,	// (0x0008cf1b) main_mp4_pane_g4

0x9153,	// (0x0008cf43) main_mp4_pane_g5_ParamLimits

0x9153,	// (0x0008cf43) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x00093695) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x00093695) main_mp4_pane_g

0x91a3,	// (0x0008cf93) main_mp4_pane_t1_ParamLimits

0x91a3,	// (0x0008cf93) main_mp4_pane_t1

0x91ff,	// (0x0008cfef) main_mp4_pane_t2_ParamLimits

0x91ff,	// (0x0008cfef) main_mp4_pane_t2

0x0cb7,	// (0x00084aa7) main_mp4_pane_t3_ParamLimits

0x0cb7,	// (0x00084aa7) main_mp4_pane_t3

0x9251,	// (0x0008d041) main_mp4_pane_t4_ParamLimits

0x9251,	// (0x0008d041) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x000936a2) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x000936a2) main_mp4_pane_t

0x9291,	// (0x0008d081) mp4_progress_pane_ParamLimits

0x9291,	// (0x0008d081) mp4_progress_pane

0x92db,	// (0x0008d0cb) mp4_rocker_pane_ParamLimits

0x92db,	// (0x0008d0cb) mp4_rocker_pane

0x0cdf,	// (0x00084acf) mp4_progress_pane_t1

0x0cf8,	// (0x00084ae8) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x000936ab) mp4_progress_pane_t

0x0d11,	// (0x00084b01) mup_progress_pane_cp04

0x1593,	// (0x00085383) mp4_rocker_pane_g1

0x92fd,	// (0x0008d0ed) aid_cell_size_keypad2_ParamLimits

0x92fd,	// (0x0008d0ed) aid_cell_size_keypad2

0x930d,	// (0x0008d0fd) dialer2_ne_pane_ParamLimits

0x930d,	// (0x0008d0fd) dialer2_ne_pane

0x9319,	// (0x0008d109) grid_dialer2_keypad_pane_ParamLimits

0x9319,	// (0x0008d109) grid_dialer2_keypad_pane

0x15ee,	// (0x000853de) bg_popup_call_pane_cp07_ParamLimits

0x15ee,	// (0x000853de) bg_popup_call_pane_cp07

0x9327,	// (0x0008d117) dialer2_ne_pane_t1_ParamLimits

0x9327,	// (0x0008d117) dialer2_ne_pane_t1

0x934c,	// (0x0008d13c) cell_dialer2_keypad_pane_ParamLimits

0x934c,	// (0x0008d13c) cell_dialer2_keypad_pane

0x0d2f,	// (0x00084b1f) bg_button_pane_pane_cp04_ParamLimits

0x0d2f,	// (0x00084b1f) bg_button_pane_pane_cp04

0x9363,	// (0x0008d153) cell_dialer2_keypad_pane_g1_ParamLimits

0x9363,	// (0x0008d153) cell_dialer2_keypad_pane_g1

0x55c5,	// (0x000893b5) aid_placing_vt_set_content_ParamLimits

0x55c5,	// (0x000893b5) aid_placing_vt_set_content

0x55ed,	// (0x000893dd) aid_placing_vt_set_title_ParamLimits

0x55ed,	// (0x000893dd) aid_placing_vt_set_title

0x4887,	// (0x00088677) main_image3_pane

0x93fd,	// (0x0008d1ed) area_side_right_pane_cp01_ParamLimits

0x93fd,	// (0x0008d1ed) area_side_right_pane_cp01

0x942c,	// (0x0008d21c) main_image3_pane_g1_ParamLimits

0x942c,	// (0x0008d21c) main_image3_pane_g1

0x943a,	// (0x0008d22a) main_image3_pane_g2_ParamLimits

0x943a,	// (0x0008d22a) main_image3_pane_g2

0x9453,	// (0x0008d243) main_image3_pane_g3_ParamLimits

0x9453,	// (0x0008d243) main_image3_pane_g3

0x946c,	// (0x0008d25c) main_image3_pane_g4_ParamLimits

0x946c,	// (0x0008d25c) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x000936ba) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x000936ba) main_image3_pane_g

0x9485,	// (0x0008d275) main_image3_pane_t1_ParamLimits

0x9485,	// (0x0008d275) main_image3_pane_t1

0x94aa,	// (0x0008d29a) main_image3_pane_t2_ParamLimits

0x94aa,	// (0x0008d29a) main_image3_pane_t2

0x94c9,	// (0x0008d2b9) main_image3_pane_t3_ParamLimits

0x94c9,	// (0x0008d2b9) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x000936c3) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x000936c3) main_image3_pane_t

0x8dd1,	// (0x0008cbc1) grid_sctrl_middle_pane_cp01_ParamLimits

0x8dd1,	// (0x0008cbc1) grid_sctrl_middle_pane_cp01

0x952a,	// (0x0008d31a) cell_sctrl_middle_pane_cp01_ParamLimits

0x952a,	// (0x0008d31a) cell_sctrl_middle_pane_cp01

0x953b,	// (0x0008d32b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x953b,	// (0x0008d32b) cell_sctrl_middle_pane_cp01_g1

0x4887,	// (0x00088677) main_call4_pane

0x9548,	// (0x0008d338) aid_size_button_call4_ParamLimits

0x9548,	// (0x0008d338) aid_size_button_call4

0x957a,	// (0x0008d36a) call4_windows_pane_ParamLimits

0x957a,	// (0x0008d36a) call4_windows_pane

0x9596,	// (0x0008d386) grid_call4_button_pane_ParamLimits

0x9596,	// (0x0008d386) grid_call4_button_pane

0x0d3b,	// (0x00084b2b) call4_windows_conf_pane

0x95ba,	// (0x0008d3aa) popup_call4_audio_first_window_ParamLimits

0x95ba,	// (0x0008d3aa) popup_call4_audio_first_window

0x95e6,	// (0x0008d3d6) popup_call4_audio_second_window_ParamLimits

0x95e6,	// (0x0008d3d6) popup_call4_audio_second_window

0x0d78,	// (0x00084b68) popup_call4_audio_wait_window_ParamLimits

0x0d78,	// (0x00084b68) popup_call4_audio_wait_window

0x95fa,	// (0x0008d3ea) cell_call4_button_pane_ParamLimits

0x95fa,	// (0x0008d3ea) cell_call4_button_pane

0x961d,	// (0x0008d40d) bg_button_pane_cp09_ParamLimits

0x961d,	// (0x0008d40d) bg_button_pane_cp09

0x9629,	// (0x0008d419) cell_call4_button_pane_g1_ParamLimits

0x9629,	// (0x0008d419) cell_call4_button_pane_g1

0x9636,	// (0x0008d426) cell_call4_button_pane_t1_ParamLimits

0x9636,	// (0x0008d426) cell_call4_button_pane_t1

0x0dc0,	// (0x00084bb0) popup_call4_audio_conf_window_ParamLimits

0x0dc0,	// (0x00084bb0) popup_call4_audio_conf_window

0x88af,	// (0x0008c69f) mup3_progress_pane_t1_ParamLimits

0x88ce,	// (0x0008c6be) mup3_progress_pane_t2_ParamLimits

0x06ee,	// (0x000844de) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x0009359c) mup3_progress_pane_t_ParamLimits

0x070b,	// (0x000844fb) mup_progress_pane_cp03_ParamLimits

0x8dbb,	// (0x0008cbab) mup3_control_keys_pane_g4_copy1

0x92bf,	// (0x0008d0af) mp4_rocker2_pane_ParamLimits

0x92bf,	// (0x0008d0af) mp4_rocker2_pane

0x0de2,	// (0x00084bd2) mp4_rocker2_pane_g1

0x0dda,	// (0x00084bca) mp4_rocker2_pane_g2

0x9648,	// (0x0008d438) mp4_rocker2_pane_g3

0x9650,	// (0x0008d440) mp4_rocker2_pane_g4

0x9658,	// (0x0008d448) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x000936cc) mp4_rocker2_pane_g

0x4887,	// (0x00088677) main_camera4_pane

0x4887,	// (0x00088677) main_video4_pane

0x901a,	// (0x0008ce0a) main_video_tele_dialer_pane_t1_ParamLimits

0x901a,	// (0x0008ce0a) main_video_tele_dialer_pane_t1

0x902c,	// (0x0008ce1c) main_video_tele_dialer_pane_t2_ParamLimits

0x902c,	// (0x0008ce1c) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x00093686) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x00093686) main_video_tele_dialer_pane_t

0x9678,	// (0x0008d468) cam4_autofocus_pane_ParamLimits

0x9678,	// (0x0008d468) cam4_autofocus_pane

0x9690,	// (0x0008d480) cam4_image_uncrop_pane_ParamLimits

0x9690,	// (0x0008d480) cam4_image_uncrop_pane

0x96a9,	// (0x0008d499) cam4_indicators_pane_ParamLimits

0x96a9,	// (0x0008d499) cam4_indicators_pane

0x96c5,	// (0x0008d4b5) main_camera4_pane_g1_ParamLimits

0x96c5,	// (0x0008d4b5) main_camera4_pane_g1

0x96d1,	// (0x0008d4c1) main_camera4_pane_g2_ParamLimits

0x96d1,	// (0x0008d4c1) main_camera4_pane_g2

0x96d1,	// (0x0008d4c1) main_camera4_pane_g3_ParamLimits

0x96d1,	// (0x0008d4c1) main_camera4_pane_g3

0x96dd,	// (0x0008d4cd) main_camera4_pane_g4_ParamLimits

0x96dd,	// (0x0008d4cd) main_camera4_pane_g4

0x96e9,	// (0x0008d4d9) main_camera4_pane_g5_ParamLimits

0x96e9,	// (0x0008d4d9) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x000936d7) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x000936d7) main_camera4_pane_g

0x9703,	// (0x0008d4f3) main_camera4_pane_t1_ParamLimits

0x9703,	// (0x0008d4f3) main_camera4_pane_t1

0x974d,	// (0x0008d53d) bg_tb_trans_pane_cp06

0x9763,	// (0x0008d553) cam4_indicators_pane_g1

0x9774,	// (0x0008d564) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x000936f2) cam4_indicators_pane_g

0x978c,	// (0x0008d57c) cam4_indicators_pane_t1

0x97b6,	// (0x0008d5a6) main_video4_pane_g1_ParamLimits

0x97b6,	// (0x0008d5a6) main_video4_pane_g1

0x97c2,	// (0x0008d5b2) main_video4_pane_g2_ParamLimits

0x97c2,	// (0x0008d5b2) main_video4_pane_g2

0x97ce,	// (0x0008d5be) main_video4_pane_g3_ParamLimits

0x97ce,	// (0x0008d5be) main_video4_pane_g3

0x97da,	// (0x0008d5ca) main_video4_pane_g4_ParamLimits

0x97da,	// (0x0008d5ca) main_video4_pane_g4

0x0004,

0xf909,	// (0x000936f9) main_video4_pane_g_ParamLimits

0xf909,	// (0x000936f9) main_video4_pane_g

0x97fc,	// (0x0008d5ec) vid4_indicators_pane_ParamLimits

0x97fc,	// (0x0008d5ec) vid4_indicators_pane

0x981b,	// (0x0008d60b) video4_image_uncrop_cif_pane_ParamLimits

0x981b,	// (0x0008d60b) video4_image_uncrop_cif_pane

0x982a,	// (0x0008d61a) video4_image_uncrop_nhd_pane_ParamLimits

0x982a,	// (0x0008d61a) video4_image_uncrop_nhd_pane

0x9690,	// (0x0008d480) video4_image_uncrop_vga_pane_ParamLimits

0x9690,	// (0x0008d480) video4_image_uncrop_vga_pane

0x76f6,	// (0x0008b4e6) bg_tb_trans_pane_cp07

0x9843,	// (0x0008d633) vid4_indicators_pane_g1

0x9859,	// (0x0008d649) vid4_indicators_pane_g2

0x986d,	// (0x0008d65d) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x00093704) vid4_indicators_pane_g

0x989e,	// (0x0008d68e) vid4_indicators_pane_t1

0x98b5,	// (0x0008d6a5) cam4_autofocus_pane_g1

0x98bd,	// (0x0008d6ad) cam4_autofocus_pane_g2

0x98c5,	// (0x0008d6b5) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x0009370f) cam4_autofocus_pane_g

0x98cd,	// (0x0008d6bd) cam4_autofocus_pane_g3_copy1

0x904a,	// (0x0008ce3a) video_down_pane_cp_t1

0x9058,	// (0x0008ce48) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x0009368b) video_down_pane_cp_t

0x486d,	// (0x0008865d) popup_vitu2_window_ParamLimits

0x486d,	// (0x0008865d) popup_vitu2_window

0x98d5,	// (0x0008d6c5) aid_size_cell2_itu2_ParamLimits

0x98d5,	// (0x0008d6c5) aid_size_cell2_itu2

0x98f7,	// (0x0008d6e7) aid_size_cell_itu2_ParamLimits

0x98f7,	// (0x0008d6e7) aid_size_cell_itu2

0x993b,	// (0x0008d72b) bg_popup_window_pane_cp09_ParamLimits

0x993b,	// (0x0008d72b) bg_popup_window_pane_cp09

0x9949,	// (0x0008d739) field_vitu2_entry_pane_ParamLimits

0x9949,	// (0x0008d739) field_vitu2_entry_pane

0x9969,	// (0x0008d759) grid_vitu2_function_pane_ParamLimits

0x9969,	// (0x0008d759) grid_vitu2_function_pane

0x99ad,	// (0x0008d79d) grid_vitu2_itu_pane_ParamLimits

0x99ad,	// (0x0008d79d) grid_vitu2_itu_pane

0x9a21,	// (0x0008d811) cell_vitu2_itu_pane_ParamLimits

0x9a21,	// (0x0008d811) cell_vitu2_itu_pane

0x9a38,	// (0x0008d828) cell_vitu2_function_pane_ParamLimits

0x9a38,	// (0x0008d828) cell_vitu2_function_pane

0x0dfe,	// (0x00084bee) bg_popup_call_pane_cp08_ParamLimits

0x0dfe,	// (0x00084bee) bg_popup_call_pane_cp08

0x0e17,	// (0x00084c07) field_vitu2_entry_pane_g1

0x0e23,	// (0x00084c13) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x00093716) field_vitu2_entry_pane_g

0x9a7c,	// (0x0008d86c) field_vitu2_entry_pane_t1_ParamLimits

0x9a7c,	// (0x0008d86c) field_vitu2_entry_pane_t1

0x0e3d,	// (0x00084c2d) field_vitu2_entry_pane_t2_ParamLimits

0x0e3d,	// (0x00084c2d) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x0009371d) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x0009371d) field_vitu2_entry_pane_t

0x9aa9,	// (0x0008d899) bg_button_pane_cp010_ParamLimits

0x9aa9,	// (0x0008d899) bg_button_pane_cp010

0x9ab7,	// (0x0008d8a7) cell_vitu2_itu_pane_g1

0x9ad5,	// (0x0008d8c5) cell_vitu2_itu_pane_t1_ParamLimits

0x9ad5,	// (0x0008d8c5) cell_vitu2_itu_pane_t1

0x44f7,	// (0x000882e7) cell_vitu2_itu_pane_t2_ParamLimits

0x44f7,	// (0x000882e7) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x00093727) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x00093727) cell_vitu2_itu_pane_t

0x76f6,	// (0x0008b4e6) bg_button_pane_cp011

0x9b27,	// (0x0008d917) cell_vitu2_function_pane_g1

0x4887,	// (0x00088677) main_myfav_hc_pane

0x950b,	// (0x0008d2fb) popup_image3_note_pane_ParamLimits

0x950b,	// (0x0008d2fb) popup_image3_note_pane

0x9519,	// (0x0008d309) popup_image3_tool_bar_pane_ParamLimits

0x9519,	// (0x0008d309) popup_image3_tool_bar_pane

0x4565,	// (0x00088355) cell_vitu2_itu_pane_t3_ParamLimits

0x4565,	// (0x00088355) cell_vitu2_itu_pane_t3

0xe2d3,	// (0x000920c3) bg_popup_trans_pane

0x0e62,	// (0x00084c52) grid_image3_tool_bar_pane

0x0e6c,	// (0x00084c5c) bg_popup_trans_pane_g1

0xef2b,	// (0x00092d1b) bg_popup_trans_pane_g2

0x0e74,	// (0x00084c64) bg_popup_trans_pane_g3

0x0e7c,	// (0x00084c6c) bg_popup_trans_pane_g4

0x0e84,	// (0x00084c74) bg_popup_trans_pane_g5

0x0e8c,	// (0x00084c7c) bg_popup_trans_pane_g6

0x0e94,	// (0x00084c84) bg_popup_trans_pane_g7

0x0e9c,	// (0x00084c8c) bg_popup_trans_pane_g8

0xef0b,	// (0x00092cfb) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x0009372e) bg_popup_trans_pane_g

0x0ea4,	// (0x00084c94) cell_image3_tool_bar_pane_ParamLimits

0x0ea4,	// (0x00084c94) cell_image3_tool_bar_pane

0x0437,	// (0x00084227) cell_image3_tool_bar_pane_g1

0xe2d3,	// (0x000920c3) bg_popup_trans_pane_cp1

0x0eba,	// (0x00084caa) popup_image3_note_pane_t1

0x0ec8,	// (0x00084cb8) popup_image3_note_pane_t2

0x0ed6,	// (0x00084cc6) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x00093741) popup_image3_note_pane_t

0x0ee6,	// (0x00084cd6) popup_image3_note_pane_t3_copy1

0x9b3b,	// (0x0008d92b) bg_myfav_hc_instruction_pane_ParamLimits

0x9b3b,	// (0x0008d92b) bg_myfav_hc_instruction_pane

0x9b53,	// (0x0008d943) cell_myfav_contact_pane_ParamLimits

0x9b53,	// (0x0008d943) cell_myfav_contact_pane

0x9b6d,	// (0x0008d95d) cell_myfav_contact_pane_cp1_ParamLimits

0x9b6d,	// (0x0008d95d) cell_myfav_contact_pane_cp1

0x9b85,	// (0x0008d975) cell_myfav_contact_pane_cp2_ParamLimits

0x9b85,	// (0x0008d975) cell_myfav_contact_pane_cp2

0x9b9d,	// (0x0008d98d) cell_myfav_contact_pane_cp3_ParamLimits

0x9b9d,	// (0x0008d98d) cell_myfav_contact_pane_cp3

0x9bb4,	// (0x0008d9a4) cell_myfav_contact_pane_cp4_ParamLimits

0x9bb4,	// (0x0008d9a4) cell_myfav_contact_pane_cp4

0x9bca,	// (0x0008d9ba) cell_myfav_contact_pane_cp5_ParamLimits

0x9bca,	// (0x0008d9ba) cell_myfav_contact_pane_cp5

0x9bde,	// (0x0008d9ce) cell_myfav_contact_pane_cp6_ParamLimits

0x9bde,	// (0x0008d9ce) cell_myfav_contact_pane_cp6

0x9bf2,	// (0x0008d9e2) cell_myfav_contact_pane_cp7_ParamLimits

0x9bf2,	// (0x0008d9e2) cell_myfav_contact_pane_cp7

0x0ef4,	// (0x00084ce4) listscroll_gen_pane_cp05

0x9c0a,	// (0x0008d9fa) main_myfav_hc_pane_g1_ParamLimits

0x9c0a,	// (0x0008d9fa) main_myfav_hc_pane_g1

0x9c24,	// (0x0008da14) main_myfav_hc_pane_g2_ParamLimits

0x9c24,	// (0x0008da14) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x00093748) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x00093748) main_myfav_hc_pane_g

0x9c56,	// (0x0008da46) main_myfav_hc_pane_t1_ParamLimits

0x9c56,	// (0x0008da46) main_myfav_hc_pane_t1

0x0efd,	// (0x00084ced) main_myfav_hc_pane_t2_ParamLimits

0x0efd,	// (0x00084ced) main_myfav_hc_pane_t2

0x0f0f,	// (0x00084cff) main_myfav_hc_pane_t3_ParamLimits

0x0f0f,	// (0x00084cff) main_myfav_hc_pane_t3

0x9c6d,	// (0x0008da5d) main_myfav_hc_pane_t4_ParamLimits

0x9c6d,	// (0x0008da5d) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x0009374f) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x0009374f) main_myfav_hc_pane_t

0x0437,	// (0x00084227) bg_myfav_hc_instruction_pane_g1

0x0f21,	// (0x00084d11) cell_myfav_contact_pane_g1_ParamLimits

0x0f21,	// (0x00084d11) cell_myfav_contact_pane_g1

0x0f21,	// (0x00084d11) cell_myfav_contact_pane_g2_ParamLimits

0x0f21,	// (0x00084d11) cell_myfav_contact_pane_g2

0x0f2d,	// (0x00084d1d) cell_myfav_contact_pane_g3_ParamLimits

0x0f2d,	// (0x00084d1d) cell_myfav_contact_pane_g3

0x06d8,	// (0x000844c8) cell_myfav_contact_pane_g4_ParamLimits

0x06d8,	// (0x000844c8) cell_myfav_contact_pane_g4

0x0f3a,	// (0x00084d2a) cell_myfav_contact_pane_g5_ParamLimits

0x0f3a,	// (0x00084d2a) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x0009375a) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x0009375a) cell_myfav_contact_pane_g

0x9c3e,	// (0x0008da2e) main_myfav_hc_pane_g3_ParamLimits

0x9c3e,	// (0x0008da2e) main_myfav_hc_pane_g3

0x477f,	// (0x0008856f) popup_adpt_find_window

0x9c97,	// (0x0008da87) afind_page_pane_ParamLimits

0x9c97,	// (0x0008da87) afind_page_pane

0x9ca4,	// (0x0008da94) aid_size_cell_afind_ParamLimits

0x9ca4,	// (0x0008da94) aid_size_cell_afind

0x9cbe,	// (0x0008daae) bg_popup_sub_pane_cp09_ParamLimits

0x9cbe,	// (0x0008daae) bg_popup_sub_pane_cp09

0x9ccb,	// (0x0008dabb) find_pane_cp01_ParamLimits

0x9ccb,	// (0x0008dabb) find_pane_cp01

0x0f46,	// (0x00084d36) grid_afind_control_pane_ParamLimits

0x0f46,	// (0x00084d36) grid_afind_control_pane

0x9cd8,	// (0x0008dac8) grid_afind_pane_ParamLimits

0x9cd8,	// (0x0008dac8) grid_afind_pane

0x9cf4,	// (0x0008dae4) cell_afind_pane_ParamLimits

0x9cf4,	// (0x0008dae4) cell_afind_pane

0x0437,	// (0x00084227) afind_page_pane_g1

0x9d3e,	// (0x0008db2e) afind_page_pane_g2

0x9d47,	// (0x0008db37) afind_page_pane_g3

0x0002,

0xf975,	// (0x00093765) afind_page_pane_g

0x9d50,	// (0x0008db40) afind_page_pane_t1

0x0f5a,	// (0x00084d4a) cell_afind_grid_control_pane_ParamLimits

0x0f5a,	// (0x00084d4a) cell_afind_grid_control_pane

0x0d2f,	// (0x00084b1f) bg_button_pane_cp69_ParamLimits

0x0d2f,	// (0x00084b1f) bg_button_pane_cp69

0x9d70,	// (0x0008db60) cell_afind_pane_g1_ParamLimits

0x9d70,	// (0x0008db60) cell_afind_pane_g1

0x9d7d,	// (0x0008db6d) cell_afind_pane_t1_ParamLimits

0x9d7d,	// (0x0008db6d) cell_afind_pane_t1

0xec62,	// (0x00092a52) bg_button_pane_cp72

0x0f69,	// (0x00084d59) cell_afind_grid_control_pane_g1

0x7271,	// (0x0008b061) aid_image_placing_area_ParamLimits

0x7271,	// (0x0008b061) aid_image_placing_area

0x09fb,	// (0x000847eb) field_vitu_entry_pane_g1_ParamLimits

0x09fb,	// (0x000847eb) field_vitu_entry_pane_g1

0x0a07,	// (0x000847f7) field_vitu_entry_pane_g2_ParamLimits

0x0a07,	// (0x000847f7) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x00093616) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x00093616) field_vitu_entry_pane_g

0x8e50,	// (0x0008cc40) cell_vitu_itu_pane_g1_ParamLimits

0x8ea0,	// (0x0008cc90) cell_vitu_itu_pane_t3_ParamLimits

0x8ea0,	// (0x0008cc90) cell_vitu_itu_pane_t3

0x0cdf,	// (0x00084acf) mp4_progress_pane_t1_ParamLimits

0x0cf8,	// (0x00084ae8) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x000936ab) mp4_progress_pane_t_ParamLimits

0x0d11,	// (0x00084b01) mup_progress_pane_cp04_ParamLimits

0x9c81,	// (0x0008da71) main_myfav_hc_pane_t5_ParamLimits

0x9c81,	// (0x0008da71) main_myfav_hc_pane_t5

0x44e7,	// (0x000882d7) aid_zoom_text_primary

0x477f,	// (0x0008856f) popup_adpt_find_window_ParamLimits

0x76f6,	// (0x0008b4e6) main_cam_set_pane

0x96b7,	// (0x0008d4a7) cam4_zoom_pane_ParamLimits

0x96b7,	// (0x0008d4a7) cam4_zoom_pane

0x9d8f,	// (0x0008db7f) main_cam_set_pane_g1_ParamLimits

0x9d8f,	// (0x0008db7f) main_cam_set_pane_g1

0x9d9d,	// (0x0008db8d) main_cam_set_pane_g2_ParamLimits

0x9d9d,	// (0x0008db8d) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x0009376c) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x0009376c) main_cam_set_pane_g

0x9da9,	// (0x0008db99) main_cam_set_pane_t1_ParamLimits

0x9da9,	// (0x0008db99) main_cam_set_pane_t1

0x9dc5,	// (0x0008dbb5) main_cset_listscroll_pane_ParamLimits

0x9dc5,	// (0x0008dbb5) main_cset_listscroll_pane

0x9df4,	// (0x0008dbe4) main_cset_slider_pane_ParamLimits

0x9df4,	// (0x0008dbe4) main_cset_slider_pane

0x0f7a,	// (0x00084d6a) main_cset_list_pane_ParamLimits

0x0f7a,	// (0x00084d6a) main_cset_list_pane

0x0f8a,	// (0x00084d7a) scroll_pane_cp028

0x9e15,	// (0x0008dc05) aid_area_touch_slider

0x9e31,	// (0x0008dc21) cset_slider_pane

0x9e5b,	// (0x0008dc4b) main_cset_slider_pane_g1

0x9e70,	// (0x0008dc60) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x00093771) main_cset_slider_pane_g

0x0fc3,	// (0x00084db3) main_cset_slider_pane_t1

0x9f2c,	// (0x0008dd1c) main_cset_slider_pane_t2

0x9f46,	// (0x0008dd36) main_cset_slider_pane_t3

0x9f60,	// (0x0008dd50) main_cset_slider_pane_t4

0x9f7a,	// (0x0008dd6a) main_cset_slider_pane_t5

0x9f94,	// (0x0008dd84) main_cset_slider_pane_t6

0x9fa9,	// (0x0008dd99) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x00093796) main_cset_slider_pane_t

0xa0ad,	// (0x0008de9d) cset_list_set_pane_ParamLimits

0xa0ad,	// (0x0008de9d) cset_list_set_pane

0xa0be,	// (0x0008deae) aid_position_infowindow_above

0xa0c6,	// (0x0008deb6) aid_position_infowindow_below

0xa0ce,	// (0x0008debe) cset_list_set_pane_g1_ParamLimits

0xa0ce,	// (0x0008debe) cset_list_set_pane_g1

0xa0da,	// (0x0008deca) cset_list_set_pane_g3_ParamLimits

0xa0da,	// (0x0008deca) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x000937b5) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x000937b5) cset_list_set_pane_g

0xa0e9,	// (0x0008ded9) cset_list_set_pane_t1_ParamLimits

0xa0e9,	// (0x0008ded9) cset_list_set_pane_t1

0xe401,	// (0x000921f1) list_highlight_pane_cp021_ParamLimits

0xe401,	// (0x000921f1) list_highlight_pane_cp021

0xce32,	// (0x00090c22) cset_slider_pane_g1

0xce44,	// (0x00090c34) cset_slider_pane_g2

0xce3b,	// (0x00090c2b) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x000937ba) cset_slider_pane_g

0xa0fe,	// (0x0008deee) aid_area_touch_cam4_zoom

0xa106,	// (0x0008def6) cam4_zoom_cont_pane

0xa10e,	// (0x0008defe) cam4_zoom_pane_g1

0xa116,	// (0x0008df06) cam4_zoom_pane_g2

0xa11e,	// (0x0008df0e) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x000937c1) cam4_zoom_pane_g

0xa126,	// (0x0008df16) cam4_zoom_cont_pane_g1

0xa12f,	// (0x0008df1f) cam4_zoom_cont_pane_g2

0xa138,	// (0x0008df28) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x000937c8) cam4_zoom_cont_pane_g

0x9562,	// (0x0008d352) call4_image_pane_ParamLimits

0x9562,	// (0x0008d352) call4_image_pane

0x0d3b,	// (0x00084b2b) call4_windows_conf_pane_ParamLimits

0x0d56,	// (0x00084b46) popup_call4_audio_in_window_ParamLimits

0x0d56,	// (0x00084b46) popup_call4_audio_in_window

0xe2d3,	// (0x000920c3) bg_popup_call2_act_pane_cp02

0x0db8,	// (0x00084ba8) call4_list_conf_pane

0x0437,	// (0x00084227) call4_image_pane_g1

0x0437,	// (0x00084227) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x000934dc) call4_image_pane_g

0x107e,	// (0x00084e6e) list_single_graphic_popup_conf4_pane_ParamLimits

0x107e,	// (0x00084e6e) list_single_graphic_popup_conf4_pane

0xe2d3,	// (0x000920c3) list_highlight_pane_cp022

0x1093,	// (0x00084e83) list_single_graphic_popup_conf4_pane_g1

0xcb2c,	// (0x0009091c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x000937cf) list_single_graphic_popup_conf4_pane_g

0x109b,	// (0x00084e8b) list_single_graphic_popup_conf4_pane_t1

0x5747,	// (0x00089537) popup_vtel_slider_window_ParamLimits

0x5747,	// (0x00089537) popup_vtel_slider_window

0x0d1d,	// (0x00084b0d) dialer2_ne_pane_t2_ParamLimits

0x0d1d,	// (0x00084b0d) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x000936b0) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x000936b0) dialer2_ne_pane_t

0xe401,	// (0x000921f1) bg_popup_sub_pane_cp010_ParamLimits

0xe401,	// (0x000921f1) bg_popup_sub_pane_cp010

0xa141,	// (0x0008df31) popup_vtel_slider_window_g1_ParamLimits

0xa141,	// (0x0008df31) popup_vtel_slider_window_g1

0xa14d,	// (0x0008df3d) popup_vtel_slider_window_g2_ParamLimits

0xa14d,	// (0x0008df3d) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x000937d4) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x000937d4) popup_vtel_slider_window_g

0xa195,	// (0x0008df85) vtel_slider_pane_ParamLimits

0xa195,	// (0x0008df85) vtel_slider_pane

0xa1a4,	// (0x0008df94) vtel_slider_pane_g1_ParamLimits

0xa1a4,	// (0x0008df94) vtel_slider_pane_g1

0xa1b1,	// (0x0008dfa1) vtel_slider_pane_g2_ParamLimits

0xa1b1,	// (0x0008dfa1) vtel_slider_pane_g2

0xa1be,	// (0x0008dfae) vtel_slider_pane_g3_ParamLimits

0xa1be,	// (0x0008dfae) vtel_slider_pane_g3

0xa1a4,	// (0x0008df94) vtel_slider_pane_g4_ParamLimits

0xa1a4,	// (0x0008df94) vtel_slider_pane_g4

0xa1cb,	// (0x0008dfbb) vtel_slider_pane_g5_ParamLimits

0xa1cb,	// (0x0008dfbb) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x000937dd) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x000937dd) vtel_slider_pane_g

0x4887,	// (0x00088677) main_gallery2_pane

0x991d,	// (0x0008d70d) aid_size_row_itut2_dropdow_list_ParamLimits

0x991d,	// (0x0008d70d) aid_size_row_itut2_dropdow_list

0x998b,	// (0x0008d77b) grid_vitu2_function_top_pane_ParamLimits

0x998b,	// (0x0008d77b) grid_vitu2_function_top_pane

0x99dd,	// (0x0008d7cd) popup_vitu2_dropdown_list_window_ParamLimits

0x99dd,	// (0x0008d7cd) popup_vitu2_dropdown_list_window

0x99fd,	// (0x0008d7ed) popup_vitu2_match_list_window

0xa1d8,	// (0x0008dfc8) cell_vitu2_function_top_pane_ParamLimits

0xa1d8,	// (0x0008dfc8) cell_vitu2_function_top_pane

0xa1f8,	// (0x0008dfe8) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa1f8,	// (0x0008dfe8) cell_vitu2_function_top_pane_cp01

0xa216,	// (0x0008e006) cell_vitu2_function_top_wide_pane_ParamLimits

0xa216,	// (0x0008e006) cell_vitu2_function_top_wide_pane

0x76f6,	// (0x0008b4e6) bg_button_pane_cp012

0xa234,	// (0x0008e024) cell_vitu2_function_top_pane_g1

0xa243,	// (0x0008e033) bg_button_pane_cp013_ParamLimits

0xa243,	// (0x0008e033) bg_button_pane_cp013

0xa25f,	// (0x0008e04f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa25f,	// (0x0008e04f) cell_vitu2_function_top_wide_pane_g1

0x486d,	// (0x0008865d) bg_popup_sub_pane_cp20

0xa277,	// (0x0008e067) list_vitu2_match_list_pane

0x0e6c,	// (0x00084c5c) bg_popup_sub_pane_cp20_g1

0x0e74,	// (0x00084c64) bg_popup_sub_pane_cp20_g2

0xef2b,	// (0x00092d1b) bg_popup_sub_pane_cp20_g3

0x0e7c,	// (0x00084c6c) bg_popup_sub_pane_cp20_g4

0xef0b,	// (0x00092cfb) bg_popup_sub_pane_cp20_g5

0x10bf,	// (0x00084eaf) bg_popup_sub_pane_cp20_g6

0x0e8c,	// (0x00084c7c) bg_popup_sub_pane_cp20_g7

0x0e94,	// (0x00084c84) bg_popup_sub_pane_cp20_g8

0x0e9c,	// (0x00084c8c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x000937e8) bg_popup_sub_pane_cp20_g

0xa28f,	// (0x0008e07f) list_vitu2_match_list_item_pane_ParamLimits

0xa28f,	// (0x0008e07f) list_vitu2_match_list_item_pane

0xa2a1,	// (0x0008e091) list_vitu2_match_list_item_pane_t1

0x4887,	// (0x00088677) bg_popup_sub_pane_cp21

0xa2db,	// (0x0008e0cb) grid_vitu2_dropdown_list_pane

0xa2e3,	// (0x0008e0d3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa2e3,	// (0x0008e0d3) cell_vitu2_dropdown_list_char_pane

0xa308,	// (0x0008e0f8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa308,	// (0x0008e0f8) cell_vitu2_dropdown_list_ctrl_pane

0x10f1,	// (0x00084ee1) cell_vitu2_dropdown_list_char_pane_g1

0x10e8,	// (0x00084ed8) cell_vitu2_dropdown_list_char_pane_g2

0x10df,	// (0x00084ecf) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x00093805) cell_vitu2_dropdown_list_char_pane_g

0xa336,	// (0x0008e126) cell_vitu2_dropdown_list_char_pane_t1

0xa344,	// (0x0008e134) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa344,	// (0x0008e134) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa354,	// (0x0008e144) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa354,	// (0x0008e144) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa365,	// (0x0008e155) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa365,	// (0x0008e155) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa375,	// (0x0008e165) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa375,	// (0x0008e165) cell_vitu2_dropdown_list_ctrl_pane_g4

0x974d,	// (0x0008d53d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x974d,	// (0x0008d53d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x0009380c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x0009380c) cell_vitu2_dropdown_list_ctrl_pane_g

0xa38e,	// (0x0008e17e) aid_size_cell_gallery2_ParamLimits

0xa38e,	// (0x0008e17e) aid_size_cell_gallery2

0xa39c,	// (0x0008e18c) grid_gallery2_pane_ParamLimits

0xa39c,	// (0x0008e18c) grid_gallery2_pane

0xa3ab,	// (0x0008e19b) scroll_pane_cp029_ParamLimits

0xa3ab,	// (0x0008e19b) scroll_pane_cp029

0xa3b7,	// (0x0008e1a7) cell_gallery2_pane_ParamLimits

0xa3b7,	// (0x0008e1a7) cell_gallery2_pane

0x10fa,	// (0x00084eea) cell_gallery2_pane_g2

0xa3e1,	// (0x0008e1d1) cell_gallery2_pane_g3

0x1104,	// (0x00084ef4) cell_gallery2_pane_g4

0x110c,	// (0x00084efc) cell_gallery2_pane_g5

0xccfa,	// (0x00090aea) grid_highlight_pane_cp10

0x99fd,	// (0x0008d7ed) popup_vitu2_match_list_window_ParamLimits

0x9a11,	// (0x0008d801) popup_vitu2_query_window_ParamLimits

0x9a11,	// (0x0008d801) popup_vitu2_query_window

0x4887,	// (0x00088677) bg_vitu2_candi_button_pane

0x10f1,	// (0x00084ee1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x10e8,	// (0x00084ed8) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x10df,	// (0x00084ecf) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xa3e9,	// (0x0008e1d9) bg_button_pane_cp015

0xa3fb,	// (0x0008e1eb) bg_button_pane_cp016

0xa40e,	// (0x0008e1fe) bg_button_pane_cp017

0xe105,	// (0x00091ef5) bg_popup_sub_pane_cp22

0x1114,	// (0x00084f04) popup_vitu2_query_window_g1

0xa453,	// (0x0008e243) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x00093817) popup_vitu2_query_window_g

0xa470,	// (0x0008e260) popup_vitu2_query_window_t1_ParamLimits

0xa470,	// (0x0008e260) popup_vitu2_query_window_t1

0xa4a3,	// (0x0008e293) popup_vitu2_query_window_t2_ParamLimits

0xa4a3,	// (0x0008e293) popup_vitu2_query_window_t2

0xa4b5,	// (0x0008e2a5) popup_vitu2_query_window_t3_ParamLimits

0xa4b5,	// (0x0008e2a5) popup_vitu2_query_window_t3

0xa4dd,	// (0x0008e2cd) popup_vitu2_query_window_t4_ParamLimits

0xa4dd,	// (0x0008e2cd) popup_vitu2_query_window_t4

0xa500,	// (0x0008e2f0) popup_vitu2_query_window_t5_ParamLimits

0xa500,	// (0x0008e2f0) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x0009381e) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x0009381e) popup_vitu2_query_window_t

0x0f72,	// (0x00084d62) main_cset_text_pane

0x9e15,	// (0x0008dc05) aid_area_touch_slider_ParamLimits

0x9e31,	// (0x0008dc21) cset_slider_pane_ParamLimits

0x9e5b,	// (0x0008dc4b) main_cset_slider_pane_g1_ParamLimits

0x9e70,	// (0x0008dc60) main_cset_slider_pane_g2_ParamLimits

0x0f93,	// (0x00084d83) main_cset_slider_pane_g3_ParamLimits

0x0f93,	// (0x00084d83) main_cset_slider_pane_g3

0x9e85,	// (0x0008dc75) main_cset_slider_pane_g4_ParamLimits

0x9e85,	// (0x0008dc75) main_cset_slider_pane_g4

0x9e94,	// (0x0008dc84) main_cset_slider_pane_g5_ParamLimits

0x9e94,	// (0x0008dc84) main_cset_slider_pane_g5

0x9ea0,	// (0x0008dc90) main_cset_slider_pane_g6_ParamLimits

0x9ea0,	// (0x0008dc90) main_cset_slider_pane_g6

0xf981,	// (0x00093771) main_cset_slider_pane_g_ParamLimits

0x0fc3,	// (0x00084db3) main_cset_slider_pane_t1_ParamLimits

0x9f2c,	// (0x0008dd1c) main_cset_slider_pane_t2_ParamLimits

0x9f46,	// (0x0008dd36) main_cset_slider_pane_t3_ParamLimits

0x9f60,	// (0x0008dd50) main_cset_slider_pane_t4_ParamLimits

0x9f7a,	// (0x0008dd6a) main_cset_slider_pane_t5_ParamLimits

0x9f94,	// (0x0008dd84) main_cset_slider_pane_t6_ParamLimits

0x9fa9,	// (0x0008dd99) main_cset_slider_pane_t7_ParamLimits

0x9fd3,	// (0x0008ddc3) main_cset_slider_pane_t8_ParamLimits

0x9fd3,	// (0x0008ddc3) main_cset_slider_pane_t8

0x9ffb,	// (0x0008ddeb) main_cset_slider_pane_t9_ParamLimits

0x9ffb,	// (0x0008ddeb) main_cset_slider_pane_t9

0xa023,	// (0x0008de13) main_cset_slider_pane_t10_ParamLimits

0xa023,	// (0x0008de13) main_cset_slider_pane_t10

0xa04b,	// (0x0008de3b) main_cset_slider_pane_t11_ParamLimits

0xa04b,	// (0x0008de3b) main_cset_slider_pane_t11

0xa073,	// (0x0008de63) main_cset_slider_pane_t12_ParamLimits

0xa073,	// (0x0008de63) main_cset_slider_pane_t12

0xa090,	// (0x0008de80) main_cset_slider_pane_t13_ParamLimits

0xa090,	// (0x0008de80) main_cset_slider_pane_t13

0xf9a6,	// (0x00093796) main_cset_slider_pane_t_ParamLimits

0xe2d3,	// (0x000920c3) bg_popup_sub_pane_cp011

0x1120,	// (0x00084f10) main_cset_text_pane_g1

0x1128,	// (0x00084f18) main_cset_text_pane_t1

0x1136,	// (0x00084f26) main_cset_text_pane_t2

0x1144,	// (0x00084f34) main_cset_text_pane_t3

0x1152,	// (0x00084f42) main_cset_text_pane_t4

0x1160,	// (0x00084f50) main_cset_text_pane_t5

0x116e,	// (0x00084f5e) main_cset_text_pane_t6

0x117c,	// (0x00084f6c) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x0009382d) main_cset_text_pane_t

0x4887,	// (0x00088677) main_cam4_burst_pane

0x4887,	// (0x00088677) main_cam5_pane

0x9d5e,	// (0x0008db4e) bg_button_pane_cp019

0x9d67,	// (0x0008db57) bg_button_pane_cp020

0x0f9f,	// (0x00084d8f) main_cset_slider_pane_g7_ParamLimits

0x0f9f,	// (0x00084d8f) main_cset_slider_pane_g7

0x0fab,	// (0x00084d9b) main_cset_slider_pane_g8_ParamLimits

0x0fab,	// (0x00084d9b) main_cset_slider_pane_g8

0x9eb4,	// (0x0008dca4) main_cset_slider_pane_g9_ParamLimits

0x9eb4,	// (0x0008dca4) main_cset_slider_pane_g9

0x9ec0,	// (0x0008dcb0) main_cset_slider_pane_g10_ParamLimits

0x9ec0,	// (0x0008dcb0) main_cset_slider_pane_g10

0x9ecc,	// (0x0008dcbc) main_cset_slider_pane_g11_ParamLimits

0x9ecc,	// (0x0008dcbc) main_cset_slider_pane_g11

0x9ed8,	// (0x0008dcc8) main_cset_slider_pane_g12_ParamLimits

0x9ed8,	// (0x0008dcc8) main_cset_slider_pane_g12

0x9ee4,	// (0x0008dcd4) main_cset_slider_pane_g13_ParamLimits

0x9ee4,	// (0x0008dcd4) main_cset_slider_pane_g13

0x9ef0,	// (0x0008dce0) main_cset_slider_pane_g14_ParamLimits

0x9ef0,	// (0x0008dce0) main_cset_slider_pane_g14

0x9efc,	// (0x0008dcec) main_cset_slider_pane_g15_ParamLimits

0x9efc,	// (0x0008dcec) main_cset_slider_pane_g15

0x0ff1,	// (0x00084de1) main_cset_slider_pane_t14_ParamLimits

0x0ff1,	// (0x00084de1) main_cset_slider_pane_t14

0x102a,	// (0x00084e1a) main_cset_slider_pane_t15_ParamLimits

0x102a,	// (0x00084e1a) main_cset_slider_pane_t15

0xa579,	// (0x0008e369) aid_cam4_burst_size_cell_ParamLimits

0xa579,	// (0x0008e369) aid_cam4_burst_size_cell

0xa595,	// (0x0008e385) grid_cam4_burst_pane_ParamLimits

0xa595,	// (0x0008e385) grid_cam4_burst_pane

0xa5c7,	// (0x0008e3b7) linegrid_cam4_burst_pane_ParamLimits

0xa5c7,	// (0x0008e3b7) linegrid_cam4_burst_pane

0xa5e5,	// (0x0008e3d5) scroll_pane_cp30_ParamLimits

0xa5e5,	// (0x0008e3d5) scroll_pane_cp30

0xa5f1,	// (0x0008e3e1) cell_cam4_burst_pane_ParamLimits

0xa5f1,	// (0x0008e3e1) cell_cam4_burst_pane

0x1196,	// (0x00084f86) linegrid_cam4_burst_pane_g1_ParamLimits

0x1196,	// (0x00084f86) linegrid_cam4_burst_pane_g1

0xa631,	// (0x0008e421) linegrid_cam4_burst_pane_g2_ParamLimits

0xa631,	// (0x0008e421) linegrid_cam4_burst_pane_g2

0x11a3,	// (0x00084f93) linegrid_cam4_burst_pane_g3_ParamLimits

0x11a3,	// (0x00084f93) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x0009383c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x0009383c) linegrid_cam4_burst_pane_g

0xa642,	// (0x0008e432) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa642,	// (0x0008e432) linegrid_cam4_burst_pane_g3_copy1

0x11b0,	// (0x00084fa0) linegrid_cam4_burst_pane_g4_ParamLimits

0x11b0,	// (0x00084fa0) linegrid_cam4_burst_pane_g4

0xa65c,	// (0x0008e44c) linegrid_cam4_burst_pane_g5_ParamLimits

0xa65c,	// (0x0008e44c) linegrid_cam4_burst_pane_g5

0xa66d,	// (0x0008e45d) linegrid_cam4_burst_pane_g6_ParamLimits

0xa66d,	// (0x0008e45d) linegrid_cam4_burst_pane_g6

0x11bd,	// (0x00084fad) linegrid_cam4_burst_pane_g7_ParamLimits

0x11bd,	// (0x00084fad) linegrid_cam4_burst_pane_g7

0xa684,	// (0x0008e474) cell_cam4_burst_pane_g1

0x11d6,	// (0x00084fc6) main_cam5_pane_t1_ParamLimits

0x11d6,	// (0x00084fc6) main_cam5_pane_t1

0x11e8,	// (0x00084fd8) main_cam5_pane_t2_ParamLimits

0x11e8,	// (0x00084fd8) main_cam5_pane_t2

0x11fa,	// (0x00084fea) main_cam5_pane_t3_ParamLimits

0x11fa,	// (0x00084fea) main_cam5_pane_t3

0x120c,	// (0x00084ffc) main_cam5_pane_t4_ParamLimits

0x120c,	// (0x00084ffc) main_cam5_pane_t4

0x1224,	// (0x00085014) main_cam5_pane_t5_ParamLimits

0x1224,	// (0x00085014) main_cam5_pane_t5

0x1238,	// (0x00085028) main_cam5_pane_t6_ParamLimits

0x1238,	// (0x00085028) main_cam5_pane_t6

0x124c,	// (0x0008503c) main_cam5_pane_t7_ParamLimits

0x124c,	// (0x0008503c) main_cam5_pane_t7

0x125e,	// (0x0008504e) main_cam5_pane_t8_ParamLimits

0x125e,	// (0x0008504e) main_cam5_pane_t8

0x127c,	// (0x0008506c) main_cam5_pane_t9_ParamLimits

0x127c,	// (0x0008506c) main_cam5_pane_t9

0x128e,	// (0x0008507e) main_cam5_pane_t10_ParamLimits

0x128e,	// (0x0008507e) main_cam5_pane_t10

0x12a0,	// (0x00085090) main_cam5_pane_t11_ParamLimits

0x12a0,	// (0x00085090) main_cam5_pane_t11

0x12b4,	// (0x000850a4) main_cam5_pane_t12_ParamLimits

0x12b4,	// (0x000850a4) main_cam5_pane_t12

0x12cb,	// (0x000850bb) main_cam5_pane_t13_ParamLimits

0x12cb,	// (0x000850bb) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x00093848) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x00093848) main_cam5_pane_t

0x4836,	// (0x00088626) popup_scut_keymap_window_ParamLimits

0x4836,	// (0x00088626) popup_scut_keymap_window

0xa697,	// (0x0008e487) aid_size_cell_brow_shortcut

0xccfa,	// (0x00090aea) bg_popup_window_pane_cp010

0xa6a3,	// (0x0008e493) grid_scut_pane

0xa6af,	// (0x0008e49f) cell_scut_pane_ParamLimits

0xa6af,	// (0x0008e49f) cell_scut_pane

0xa6ca,	// (0x0008e4ba) cell_scut_pane_g1

0x12ee,	// (0x000850de) cell_scut_pane_t1

0x12fd,	// (0x000850ed) cell_scut_pane_t2

0xa6d3,	// (0x0008e4c3) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x00093863) cell_scut_pane_t

0x84b2,	// (0x0008c2a2) main_mup3_pane_g8_ParamLimits

0x84b2,	// (0x0008c2a2) main_mup3_pane_g8

0x992b,	// (0x0008d71b) area_vitu2_query_pane_ParamLimits

0x992b,	// (0x0008d71b) area_vitu2_query_pane

0xa421,	// (0x0008e211) input_focus_pane_cp08

0x130c,	// (0x000850fc) area_vitu2_query_pane_g1

0xa6e1,	// (0x0008e4d1) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x0009386a) area_vitu2_query_pane_g

0xa6f2,	// (0x0008e4e2) area_vitu2_query_pane_t1_ParamLimits

0xa6f2,	// (0x0008e4e2) area_vitu2_query_pane_t1

0xa706,	// (0x0008e4f6) area_vitu2_query_pane_t2_ParamLimits

0xa706,	// (0x0008e4f6) area_vitu2_query_pane_t2

0xa71a,	// (0x0008e50a) area_vitu2_query_pane_t3_ParamLimits

0xa71a,	// (0x0008e50a) area_vitu2_query_pane_t3

0x1318,	// (0x00085108) area_vitu2_query_pane_t4_ParamLimits

0x1318,	// (0x00085108) area_vitu2_query_pane_t4

0x1340,	// (0x00085130) area_vitu2_query_pane_t5_ParamLimits

0x1340,	// (0x00085130) area_vitu2_query_pane_t5

0x1368,	// (0x00085158) area_vitu2_query_pane_t6_ParamLimits

0x1368,	// (0x00085158) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x0009386f) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x0009386f) area_vitu2_query_pane_t

0xa742,	// (0x0008e532) bg_button_pane_cp018

0xa750,	// (0x0008e540) bg_button_pane_cp021

0xa75c,	// (0x0008e54c) bg_button_pane_cp022

0xa76d,	// (0x0008e55d) input_focus_pane_cp09

0x68bc,	// (0x0008a6ac) aid_size_touch_mv_arrow_left

0x68e7,	// (0x0008a6d7) aid_size_touch_mv_arrow_right

0x9f14,	// (0x0008dd04) main_cset_slider_pane_g16_ParamLimits

0x9f14,	// (0x0008dd04) main_cset_slider_pane_g16

0x9f20,	// (0x0008dd10) main_cset_slider_pane_g17_ParamLimits

0x9f20,	// (0x0008dd10) main_cset_slider_pane_g17

0xa684,	// (0x0008e474) cell_cam4_burst_pane_g1_ParamLimits

0xe2d3,	// (0x000920c3) compa_mode_pane

0xa159,	// (0x0008df49) popup_vtel_slider_window_g3_ParamLimits

0xa159,	// (0x0008df49) popup_vtel_slider_window_g3

0xa16d,	// (0x0008df5d) popup_vtel_slider_window_g4_ParamLimits

0xa16d,	// (0x0008df5d) popup_vtel_slider_window_g4

0xa181,	// (0x0008df71) popup_vtel_slider_window_t1_ParamLimits

0xa181,	// (0x0008df71) popup_vtel_slider_window_t1

0x4887,	// (0x00088677) main_cl_pane

0x77a0,	// (0x0008b590) popup_imed_adjust2_window_ParamLimits

0xe105,	// (0x00091ef5) bg_tb_trans_pane_cp05_ParamLimits

0x0930,	// (0x00084720) popup_imed_adjust2_window_g1_ParamLimits

0x093f,	// (0x0008472f) popup_imed_adjust2_window_g2_ParamLimits

0x093f,	// (0x0008472f) popup_imed_adjust2_window_g2

0x094b,	// (0x0008473b) popup_imed_adjust2_window_g3_ParamLimits

0x094b,	// (0x0008473b) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x000935da) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x000935da) popup_imed_adjust2_window_g

0x0957,	// (0x00084747) popup_imed_adjust2_window_t1_ParamLimits

0x096f,	// (0x0008475f) slider_imed_adjust_pane_ParamLimits

0x0983,	// (0x00084773) slider_imed_adjust_pane_g1_ParamLimits

0x0993,	// (0x00084783) slider_imed_adjust_pane_g2_ParamLimits

0x09a3,	// (0x00084793) slider_imed_adjust_pane_g3_ParamLimits

0x09b4,	// (0x000847a4) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x000935e1) slider_imed_adjust_pane_g_ParamLimits

0x9660,	// (0x0008d450) aid_touch_area_cam4_ParamLimits

0x9660,	// (0x0008d450) aid_touch_area_cam4

0x9670,	// (0x0008d460) battery_pane_cp01

0x96f7,	// (0x0008d4e7) main_camera4_pane_g6_ParamLimits

0x96f7,	// (0x0008d4e7) main_camera4_pane_g6

0x9715,	// (0x0008d505) main_camera4_pane_t2_ParamLimits

0x9715,	// (0x0008d505) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x000936e4) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x000936e4) main_camera4_pane_t

0x97a6,	// (0x0008d596) aid_touch_area_vid4_ParamLimits

0x97a6,	// (0x0008d596) aid_touch_area_vid4

0x97e6,	// (0x0008d5d6) main_video4_pane_g5_ParamLimits

0x97e6,	// (0x0008d5d6) main_video4_pane_g5

0x980c,	// (0x0008d5fc) vid4_progress_pane_ParamLimits

0x980c,	// (0x0008d5fc) vid4_progress_pane

0x0fb7,	// (0x00084da7) main_cset_slider_pane_g18_ParamLimits

0x0fb7,	// (0x00084da7) main_cset_slider_pane_g18

0x11ca,	// (0x00084fba) cell_cam4_burst_pane_g2_ParamLimits

0x11ca,	// (0x00084fba) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x00093843) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x00093843) cell_cam4_burst_pane_g

0xa77e,	// (0x0008e56e) bg_cl_pane_ParamLimits

0xa77e,	// (0x0008e56e) bg_cl_pane

0xa78a,	// (0x0008e57a) cl_header_pane_ParamLimits

0xa78a,	// (0x0008e57a) cl_header_pane

0xa796,	// (0x0008e586) cl_listscroll_pane_ParamLimits

0xa796,	// (0x0008e586) cl_listscroll_pane

0x13b4,	// (0x000851a4) bg_cl_pane_g1

0x13bc,	// (0x000851ac) bg_cl_pane_g2

0x13c4,	// (0x000851b4) bg_cl_pane_g3

0x13cc,	// (0x000851bc) bg_cl_pane_g4

0x13d4,	// (0x000851c4) bg_cl_pane_g5

0x13dc,	// (0x000851cc) bg_cl_pane_g6

0x13e4,	// (0x000851d4) bg_cl_pane_g7

0x13ec,	// (0x000851dc) bg_cl_pane_g8

0x13f4,	// (0x000851e4) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x0009387e) bg_cl_pane_g

0xa7a2,	// (0x0008e592) aid_height_cl_leading_ParamLimits

0xa7a2,	// (0x0008e592) aid_height_cl_leading

0xa7ae,	// (0x0008e59e) aid_height_cl_text_ParamLimits

0xa7ae,	// (0x0008e59e) aid_height_cl_text

0x8dd1,	// (0x0008cbc1) bg_cl_header_pane_ParamLimits

0x8dd1,	// (0x0008cbc1) bg_cl_header_pane

0xa7c6,	// (0x0008e5b6) cl_header_pane_g1_ParamLimits

0xa7c6,	// (0x0008e5b6) cl_header_pane_g1

0xa7d3,	// (0x0008e5c3) cl_header_pane_t1_ParamLimits

0xa7d3,	// (0x0008e5c3) cl_header_pane_t1

0x13fc,	// (0x000851ec) cl_list_pane

0x0f8a,	// (0x00084d7a) hc_scroll_pane_cp01

0xef0b,	// (0x00092cfb) bg_cl_header_pane_g1

0x0e6c,	// (0x00084c5c) bg_cl_header_pane_g2

0xef2b,	// (0x00092d1b) bg_cl_header_pane_g3

0x0e7c,	// (0x00084c6c) bg_cl_header_pane_g4

0x0e74,	// (0x00084c64) bg_cl_header_pane_g5

0x10bf,	// (0x00084eaf) bg_cl_header_pane_g6

0x0e94,	// (0x00084c84) bg_cl_header_pane_g7

0x0e9c,	// (0x00084c8c) bg_cl_header_pane_g8

0x0e8c,	// (0x00084c7c) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x00093891) bg_cl_header_pane_g

0xa7e5,	// (0x0008e5d5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa7e5,	// (0x0008e5d5) hc_cl_list_double_graphic_heading_pane

0xa7f5,	// (0x0008e5e5) hc_cl_list_single_graphic_pane_ParamLimits

0xa7f5,	// (0x0008e5e5) hc_cl_list_single_graphic_pane

0xa807,	// (0x0008e5f7) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa807,	// (0x0008e5f7) hc_cl_list_single_graphic_pane_g1

0xa813,	// (0x0008e603) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa813,	// (0x0008e603) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x000938a4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x000938a4) hc_cl_list_single_graphic_pane_g

0xa827,	// (0x0008e617) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa827,	// (0x0008e617) hc_cl_list_single_graphic_pane_t1

0xa807,	// (0x0008e5f7) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa807,	// (0x0008e5f7) hc_cl_list_double_graphic_heading_pane_g1

0xa83c,	// (0x0008e62c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa83c,	// (0x0008e62c) hc_cl_list_double_graphic_heading_pane_g2

0xa850,	// (0x0008e640) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa850,	// (0x0008e640) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x000938a9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x000938a9) hc_cl_list_double_graphic_heading_pane_g

0xa864,	// (0x0008e654) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa864,	// (0x0008e654) hc_cl_list_double_graphic_heading_pane_t1

0xa879,	// (0x0008e669) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa879,	// (0x0008e669) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x000938b0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x000938b0) hc_cl_list_double_graphic_heading_pane_t

0xa896,	// (0x0008e686) vid4_progress_pane_g1

0xa8a8,	// (0x0008e698) vid4_progress_pane_g2

0x6fbc,	// (0x0008adac) vid4_progress_pane_g3

0xa8ba,	// (0x0008e6aa) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x000938b5) vid4_progress_pane_g

0xa8d8,	// (0x0008e6c8) vid4_progress_pane_t1

0xa8ed,	// (0x0008e6dd) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x000938c0) vid4_progress_pane_t

0xa918,	// (0x0008e708) wait_bar_pane_cp07

0x0224,	// (0x00084014) blid_firmament_pane_ParamLimits

0x0267,	// (0x00084057) popup_blid_sat_info2_window_g1

0x028b,	// (0x0008407b) popup_blid_sat_info2_window_t3

0x0299,	// (0x00084089) popup_blid_sat_info2_window_t4

0x02a7,	// (0x00084097) popup_blid_sat_info2_window_t5

0x02b5,	// (0x000840a5) popup_blid_sat_info2_window_t6

0x02c5,	// (0x000840b5) popup_blid_sat_info2_window_t7

0x02d3,	// (0x000840c3) popup_blid_sat_info2_window_t8

0x02e1,	// (0x000840d1) popup_blid_sat_info2_window_t9

0x02ef,	// (0x000840df) popup_blid_sat_info2_window_t10

0x03b7,	// (0x000841a7) aid_firma_cardinal_ParamLimits

0x03cb,	// (0x000841bb) blid_firmament_pane_t1_ParamLimits

0x03e2,	// (0x000841d2) blid_firmament_pane_t2_ParamLimits

0x03f9,	// (0x000841e9) blid_firmament_pane_t3_ParamLimits

0x0410,	// (0x00084200) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x000934d3) blid_firmament_pane_t_ParamLimits

0x0427,	// (0x00084217) blid_sat_info_pane_ParamLimits

0x76f6,	// (0x0008b4e6) main_cam_set_pane_ParamLimits

0x8c63,	// (0x0008ca53) aid_size_cell_colour_35_ParamLimits

0x8c7d,	// (0x0008ca6d) aid_size_cell_colour_112_ParamLimits

0x8c94,	// (0x0008ca84) aid_size_cell_effect_ParamLimits

0xe401,	// (0x000921f1) bg_tb_trans_pane_cp02_ParamLimits

0x3013,	// (0x00086e03) heading_imed_pane_ParamLimits

0x8cae,	// (0x0008ca9e) listscroll_imed_pane_ParamLimits

0xd733,	// (0x00091523) popup_call2_audio_first_window_g5_ParamLimits

0xd733,	// (0x00091523) popup_call2_audio_first_window_g5

0x93cb,	// (0x0008d1bb) aid_size_touch_image3_arrow_left_ParamLimits

0x93cb,	// (0x0008d1bb) aid_size_touch_image3_arrow_left

0x93e1,	// (0x0008d1d1) aid_size_touch_image3_arrow_right_ParamLimits

0x93e1,	// (0x0008d1d1) aid_size_touch_image3_arrow_right

0xa903,	// (0x0008e6f3) vid4_progress_pane_t3

0x8f67,	// (0x0008cd57) main_hwr_training_symbol_option_pane_ParamLimits

0x8f67,	// (0x0008cd57) main_hwr_training_symbol_option_pane

0x0c1f,	// (0x00084a0f) popup_hwr_training_preview_window_ParamLimits

0x0c1f,	// (0x00084a0f) popup_hwr_training_preview_window

0x8fc8,	// (0x0008cdb8) hwr_training_navi_pane_g5_ParamLimits

0x8fc8,	// (0x0008cdb8) hwr_training_navi_pane_g5

0x0e5a,	// (0x00084c4a) popup_char_count_window

0x486d,	// (0x0008865d) bg_popup_sub_pane_cp20_ParamLimits

0xa277,	// (0x0008e067) list_vitu2_match_list_pane_ParamLimits

0xa283,	// (0x0008e073) vitu2_page_scroll_pane_ParamLimits

0xa283,	// (0x0008e073) vitu2_page_scroll_pane

0x144e,	// (0x0008523e) list_single_hwr_training_symbol_option_pane_ParamLimits

0x144e,	// (0x0008523e) list_single_hwr_training_symbol_option_pane

0x1461,	// (0x00085251) list_single_hwr_training_symbol_option_pane_g1

0x1469,	// (0x00085259) list_single_hwr_training_symbol_option_pane_t1

0x1477,	// (0x00085267) bg_button_pane_cp023

0x1480,	// (0x00085270) bg_button_pane_cp024

0xa92c,	// (0x0008e71c) vitu2_page_scroll_pane_g1

0xa934,	// (0x0008e724) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x000938c7) vitu2_page_scroll_pane_g

0xa93e,	// (0x0008e72e) vitu2_page_scroll_pane_t1

0xe28a,	// (0x0009207a) popup_char_count_window_g1

0x14b3,	// (0x000852a3) popup_char_count_window_g2

0x14bc,	// (0x000852ac) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x000938cc) popup_char_count_window_g

0x14c5,	// (0x000852b5) popup_char_count_window_t1

0x4887,	// (0x00088677) main_vded2_pane

0x091c,	// (0x0008470c) aid_size_cell_imed_line

0x0926,	// (0x00084716) grid_imed_line_width_pane

0x9880,	// (0x0008d670) vid4_indicators_pane_g4

0x14d3,	// (0x000852c3) cell_imed_line_width_pane_ParamLimits

0x14d3,	// (0x000852c3) cell_imed_line_width_pane

0x14e9,	// (0x000852d9) cell_imed_line_width_pane_g1

0x14f2,	// (0x000852e2) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x000938d3) cell_imed_line_width_pane_g

0xa94d,	// (0x0008e73d) main_vded2_pane_g1_ParamLimits

0xa94d,	// (0x0008e73d) main_vded2_pane_g1

0xa95c,	// (0x0008e74c) main_vded2_pane_g2_ParamLimits

0xa95c,	// (0x0008e74c) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x000938d8) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x000938d8) main_vded2_pane_g

0xa96a,	// (0x0008e75a) vded2_slider_pane_ParamLimits

0xa96a,	// (0x0008e75a) vded2_slider_pane

0xa977,	// (0x0008e767) aid_size_touch_vded2_end

0xa981,	// (0x0008e771) aid_size_touch_vded2_playhead

0x14fa,	// (0x000852ea) aid_size_touch_vded2_start

0x1502,	// (0x000852f2) vded2_slider_bg_pane

0x150b,	// (0x000852fb) vded2_slider_pane_g1

0x1514,	// (0x00085304) vded2_slider_pane_g2

0xa989,	// (0x0008e779) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x000938dd) vded2_slider_pane_g

0x151c,	// (0x0008530c) vded2_slider_bg_pane_g1

0x1525,	// (0x00085315) vded2_slider_bg_pane_g2

0x152e,	// (0x0008531e) vded2_slider_bg_pane_g3

0x0002,

0xf7b3,	// (0x000935a3) vded2_slider_bg_pane_g

0x6fd4,	// (0x0008adc4) aid_postcard_touch_down_pane_ParamLimits

0x6fd4,	// (0x0008adc4) aid_postcard_touch_down_pane

0x6fe4,	// (0x0008add4) aid_postcard_touch_up_pane_ParamLimits

0x6fe4,	// (0x0008add4) aid_postcard_touch_up_pane

0x4887,	// (0x00088677) main_blid2_pane

0x771f,	// (0x0008b50f) popup_blid2_search_window

0xe2d3,	// (0x000920c3) blid2_gps_pane

0xe2d3,	// (0x000920c3) blid2_navig_pane

0xe2d3,	// (0x000920c3) blid2_search_pane

0xe2d3,	// (0x000920c3) blid2_tripm_pane

0xa992,	// (0x0008e782) blid2_search_pane_g1_ParamLimits

0xa992,	// (0x0008e782) blid2_search_pane_g1

0xa99e,	// (0x0008e78e) blid2_search_pane_t1_ParamLimits

0xa99e,	// (0x0008e78e) blid2_search_pane_t1

0xa9b0,	// (0x0008e7a0) aid_size_cell_blid2_gps_ParamLimits

0xa9b0,	// (0x0008e7a0) aid_size_cell_blid2_gps

0xa9c0,	// (0x0008e7b0) blid2_gps_pane_g1_ParamLimits

0xa9c0,	// (0x0008e7b0) blid2_gps_pane_g1

0xa9cc,	// (0x0008e7bc) grid_blid2_satellite_pane_ParamLimits

0xa9cc,	// (0x0008e7bc) grid_blid2_satellite_pane

0xa9da,	// (0x0008e7ca) blid2_navig_pane_g1_ParamLimits

0xa9da,	// (0x0008e7ca) blid2_navig_pane_g1

0xa9e6,	// (0x0008e7d6) blid2_navig_pane_t1_ParamLimits

0xa9e6,	// (0x0008e7d6) blid2_navig_pane_t1

0xa9f8,	// (0x0008e7e8) blid2_navig_pane_t2_ParamLimits

0xa9f8,	// (0x0008e7e8) blid2_navig_pane_t2

0x0001,

0xfaf4,	// (0x000938e4) blid2_navig_pane_t_ParamLimits

0xfaf4,	// (0x000938e4) blid2_navig_pane_t

0xaa0a,	// (0x0008e7fa) blid2_navig_ring_pane_ParamLimits

0xaa0a,	// (0x0008e7fa) blid2_navig_ring_pane

0xaa1a,	// (0x0008e80a) blid2_speed_pane_ParamLimits

0xaa1a,	// (0x0008e80a) blid2_speed_pane

0xaa26,	// (0x0008e816) blid2_tripm_pane_g1_ParamLimits

0xaa26,	// (0x0008e816) blid2_tripm_pane_g1

0xaa36,	// (0x0008e826) blid2_tripm_pane_g2_ParamLimits

0xaa36,	// (0x0008e826) blid2_tripm_pane_g2

0xaa42,	// (0x0008e832) blid2_tripm_pane_g3_ParamLimits

0xaa42,	// (0x0008e832) blid2_tripm_pane_g3

0xaa4e,	// (0x0008e83e) blid2_tripm_pane_g4_ParamLimits

0xaa4e,	// (0x0008e83e) blid2_tripm_pane_g4

0xaa5a,	// (0x0008e84a) blid2_tripm_pane_g5_ParamLimits

0xaa5a,	// (0x0008e84a) blid2_tripm_pane_g5

0x0005,

0xfaf9,	// (0x000938e9) blid2_tripm_pane_g_ParamLimits

0xfaf9,	// (0x000938e9) blid2_tripm_pane_g

0xaa76,	// (0x0008e866) blid2_tripm_pane_t1_ParamLimits

0xaa76,	// (0x0008e866) blid2_tripm_pane_t1

0xaa88,	// (0x0008e878) blid2_tripm_pane_t2_ParamLimits

0xaa88,	// (0x0008e878) blid2_tripm_pane_t2

0xaa9a,	// (0x0008e88a) blid2_tripm_pane_t3_ParamLimits

0xaa9a,	// (0x0008e88a) blid2_tripm_pane_t3

0x0003,

0xfb06,	// (0x000938f6) blid2_tripm_pane_t_ParamLimits

0xfb06,	// (0x000938f6) blid2_tripm_pane_t

0xaacc,	// (0x0008e8bc) cell_blid2_satellite_pane_ParamLimits

0xaacc,	// (0x0008e8bc) cell_blid2_satellite_pane

0xaaea,	// (0x0008e8da) cell_blid2_satellite_pane_g1

0x1537,	// (0x00085327) cell_blid2_satellite_pane_t1

0x0437,	// (0x00084227) blid2_speed_pane_g1

0x1545,	// (0x00085335) blid2_speed_pane_t1

0x1553,	// (0x00085343) blid2_speed_pane_t2

0x0001,

0xfb0f,	// (0x000938ff) blid2_speed_pane_t

0x0437,	// (0x00084227) blid2_navig_ring_pane_g1

0xaaf3,	// (0x0008e8e3) blid2_navig_ring_pane_g2

0xaafb,	// (0x0008e8eb) blid2_navig_ring_pane_g3

0xab03,	// (0x0008e8f3) blid2_navig_ring_pane_g4

0xab0b,	// (0x0008e8fb) blid2_navig_ring_pane_g5

0x0004,

0xfb14,	// (0x00093904) blid2_navig_ring_pane_g

0xe2d3,	// (0x000920c3) bg_popup_window_pane_cp011

0x1561,	// (0x00085351) popup_blid2_search_window_g1

0x1569,	// (0x00085359) popup_blid2_search_window_t1

0x1577,	// (0x00085367) popup_blid2_search_window_t2

0x0001,

0xfb1f,	// (0x0009390f) popup_blid2_search_window_t

0xee1a,	// (0x00092c0a) main_browser_pane_g1

0xea61,	// (0x00092851) main_browser_pane_ParamLimits

0x76f6,	// (0x0008b4e6) bg_button_pane_cp011_ParamLimits

0x9b27,	// (0x0008d917) cell_vitu2_function_pane_g1_ParamLimits

0xe105,	// (0x00091ef5) bg_popup_sub_pane_cp22_ParamLimits

0xa421,	// (0x0008e211) input_focus_pane_cp08_ParamLimits

0xa438,	// (0x0008e228) popup_vitu2_query_button_pane_ParamLimits

0xa438,	// (0x0008e228) popup_vitu2_query_button_pane

0xa449,	// (0x0008e239) popup_vitu2_query_input_button_pane

0x1114,	// (0x00084f04) popup_vitu2_query_window_g1_ParamLimits

0xa453,	// (0x0008e243) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x00093817) popup_vitu2_query_window_g_ParamLimits

0xe2d3,	// (0x000920c3) bg_button_pane_cp026

0xab13,	// (0x0008e903) popup_vitu2_query_input_button_pane_g1

0xe2d3,	// (0x000920c3) bg_button_pane_cp025

0x1585,	// (0x00085375) popup_vitu2_query_button_pane_t1

0x8187,	// (0x0008bf77) main_mp3_pane_t6

0x8197,	// (0x0008bf87) popup_slider_window_cp01

0x975b,	// (0x0008d54b) cam4_battery_pane

0x9839,	// (0x0008d629) cam4_battery_pane_cp02

0xa88e,	// (0x0008e67e) cam4_battery_pane_cp01

0xa88e,	// (0x0008e67e) cam4_battery_pane_cp03

0x1593,	// (0x00085383) cam4_battery_pane_g1

0x0437,	// (0x00084227) cam4_battery_pane_g2

0x0001,

0xfb24,	// (0x00093914) cam4_battery_pane_g

0x02fd,	// (0x000840ed) popup_blid_sat_info2_window_t11

0x68bc,	// (0x0008a6ac) aid_size_touch_mv_arrow_left_ParamLimits

0x68e7,	// (0x0008a6d7) aid_size_touch_mv_arrow_right_ParamLimits

0xcc5a,	// (0x00090a4a) navi_pane_g1_ParamLimits

0x6926,	// (0x0008a716) navi_pane_g2_ParamLimits

0x6954,	// (0x0008a744) navi_pane_g3_ParamLimits

0xf3f5,	// (0x000931e5) navi_pane_g_ParamLimits

0x69ae,	// (0x0008a79e) navi_pane_mv_t1_ParamLimits

0x8cba,	// (0x0008caaa) grid_imed_effect_pane_ParamLimits

0x560f,	// (0x000893ff) aid_placing_vt_slider_lsc

0xed65,	// (0x00092b55) aid_placing_vt_slider_prt

0xe401,	// (0x000921f1) bg_tb_trans_pane_cp01_ParamLimits

0x0587,	// (0x00084377) popup_image_details_window_g1_ParamLimits

0x059a,	// (0x0008438a) popup_image_details_window_g2_ParamLimits

0x05af,	// (0x0008439f) popup_image_details_window_g3_ParamLimits

0x05af,	// (0x0008439f) popup_image_details_window_g3

0xf728,	// (0x00093518) popup_image_details_window_g_ParamLimits

0x05c3,	// (0x000843b3) popup_image_details_window_t1_ParamLimits

0x05d5,	// (0x000843c5) popup_image_details_window_t2_ParamLimits

0x05ee,	// (0x000843de) popup_image_details_window_t3_ParamLimits

0x0602,	// (0x000843f2) popup_image_details_window_t4_ParamLimits

0x061d,	// (0x0008440d) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x0009351f) popup_image_details_window_t_ParamLimits

0xa7ba,	// (0x0008e5aa) cl_header_name_pane_ParamLimits

0xa7ba,	// (0x0008e5aa) cl_header_name_pane

0xab1b,	// (0x0008e90b) cl_header_name_pane_t1_ParamLimits

0xab1b,	// (0x0008e90b) cl_header_name_pane_t1

0xab32,	// (0x0008e922) cl_header_name_pane_t2_ParamLimits

0xab32,	// (0x0008e922) cl_header_name_pane_t2

0xab5c,	// (0x0008e94c) cl_header_name_pane_t3_ParamLimits

0xab5c,	// (0x0008e94c) cl_header_name_pane_t3

0x0002,

0xfb29,	// (0x00093919) cl_header_name_pane_t_ParamLimits

0xfb29,	// (0x00093919) cl_header_name_pane_t

0x697f,	// (0x0008a76f) navi_pane_mv_g2_ParamLimits

0x0e17,	// (0x00084c07) field_vitu2_entry_pane_g1_ParamLimits

0x0e23,	// (0x00084c13) field_vitu2_entry_pane_g2_ParamLimits

0x0e2f,	// (0x00084c1f) field_vitu2_entry_pane_g3_ParamLimits

0x0e2f,	// (0x00084c1f) field_vitu2_entry_pane_g3

0xf926,	// (0x00093716) field_vitu2_entry_pane_g_ParamLimits

0x9ab7,	// (0x0008d8a7) cell_vitu2_itu_pane_g1_ParamLimits

0x9ac7,	// (0x0008d8b7) cell_vitu2_itu_pane_g2_ParamLimits

0x9ac7,	// (0x0008d8b7) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x00093722) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x00093722) cell_vitu2_itu_pane_g

0x76f6,	// (0x0008b4e6) bg_vkb2_func_pane_cp05_ParamLimits

0x76f6,	// (0x0008b4e6) bg_vkb2_func_pane_cp05

0x76f6,	// (0x0008b4e6) bg_vkb2_func_pane_cp03

0x76f6,	// (0x0008b4e6) bg_vkb2_func_pane_cp04

0x76f6,	// (0x0008b4e6) bg_vkb2_func_pane_cp10_ParamLimits

0x76f6,	// (0x0008b4e6) bg_vkb2_func_pane_cp10

0xa75c,	// (0x0008e54c) bg_vkb2_func_pane_cp08

0xa742,	// (0x0008e532) bg_vkb2_func_pane_cp06

0xa750,	// (0x0008e540) bg_vkb2_func_pane_cp07

0x1489,	// (0x00085279) bg_vkb2_func_pane_cp11_ParamLimits

0x1489,	// (0x00085279) bg_vkb2_func_pane_cp11

0x149e,	// (0x0008528e) bg_vkb2_func_pane_cp12_ParamLimits

0x149e,	// (0x0008528e) bg_vkb2_func_pane_cp12

0xe2d3,	// (0x000920c3) bg_vkb2_func_pane_cp09

0x0e6c,	// (0x00084c5c) bg_vkb2_func_pane_g1

0xef2b,	// (0x00092d1b) bg_vkb2_func_pane_g2

0x0e74,	// (0x00084c64) bg_vkb2_func_pane_g3

0x0e7c,	// (0x00084c6c) bg_vkb2_func_pane_g4

0x10bf,	// (0x00084eaf) bg_vkb2_func_pane_g5

0x0e94,	// (0x00084c84) bg_vkb2_func_pane_g6

0x0e9c,	// (0x00084c8c) bg_vkb2_func_pane_g7

0x0e8c,	// (0x00084c7c) bg_vkb2_func_pane_g8

0xef0b,	// (0x00092cfb) bg_vkb2_func_pane_g9

0x0008,

0xfb30,	// (0x00093920) bg_vkb2_func_pane_g

0xaa68,	// (0x0008e858) blid2_tripm_pane_g6_ParamLimits

0xaa68,	// (0x0008e858) blid2_tripm_pane_g6

0x0cd7,	// (0x00084ac7) mp4_progress_pane_g1

0xaac0,	// (0x0008e8b0) blid2_tripm_values_pane_ParamLimits

0xaac0,	// (0x0008e8b0) blid2_tripm_values_pane

0xab81,	// (0x0008e971) blid2_tripm_values_pane_t1

0xab8f,	// (0x0008e97f) blid2_tripm_values_pane_t2

0xab9d,	// (0x0008e98d) blid2_tripm_values_pane_t3

0xabab,	// (0x0008e99b) blid2_tripm_values_pane_t4

0xabb9,	// (0x0008e9a9) blid2_tripm_values_pane_t5

0xabc7,	// (0x0008e9b7) blid2_tripm_values_pane_t6

0xabd5,	// (0x0008e9c5) blid2_tripm_values_pane_t7

0xabe3,	// (0x0008e9d3) blid2_tripm_values_pane_t8

0xabf1,	// (0x0008e9e1) blid2_tripm_values_pane_t9

0x0008,

0xfb43,	// (0x00093933) blid2_tripm_values_pane_t

0x564d,	// (0x0008943d) call_video_pane_t1_ParamLimits

0x566a,	// (0x0008945a) call_video_pane_t2_ParamLimits

0xf27e,	// (0x0009306e) call_video_pane_t_ParamLimits

0x6efc,	// (0x0008acec) msg_header_pane_g1_ParamLimits

0xce77,	// (0x00090c67) msg_header_pane_g2_ParamLimits

0xce77,	// (0x00090c67) msg_header_pane_g2

0x0001,

0xf498,	// (0x00093288) msg_header_pane_g_ParamLimits

0xf498,	// (0x00093288) msg_header_pane_g

0xea61,	// (0x00092851) main_clock2_pane_ParamLimits

0x8a55,	// (0x0008c845) grid_clock2_toolbar_pane_ParamLimits

0x8a55,	// (0x0008c845) grid_clock2_toolbar_pane

0x8a55,	// (0x0008c845) listscroll_clock2_pane_ParamLimits

0x8a55,	// (0x0008c845) listscroll_clock2_pane

0x8af1,	// (0x0008c8e1) main_clock2_pane_t3_ParamLimits

0x8af1,	// (0x0008c8e1) main_clock2_pane_t3

0x8b03,	// (0x0008c8f3) main_clock2_pane_t4_ParamLimits

0x8b03,	// (0x0008c8f3) main_clock2_pane_t4

0x159d,	// (0x0008538d) cell_clock2_toolbar_pane

0x15a5,	// (0x00085395) cell_clock2_toolbar_pane_cp01

0x15a5,	// (0x00085395) cell_clock2_toolbar_pane_cp02

0x15ad,	// (0x0008539d) cell_clock2_toolbar_pane_cp03

0x15b5,	// (0x000853a5) list_clock2_pane

0xcbc0,	// (0x000909b0) scroll_pane_cp10

0x15bd,	// (0x000853ad) list_single_clock2_pane_ParamLimits

0x15bd,	// (0x000853ad) list_single_clock2_pane

0xccfa,	// (0x00090aea) list_highlight_pane_cp08

0x15ca,	// (0x000853ba) list_single_clock2_pane_t1

0x15d8,	// (0x000853c8) list_single_clock2_pane_t2

0x0001,

0xfb56,	// (0x00093946) list_single_clock2_pane_t

0xe2d3,	// (0x000920c3) bg_button_pane_cp10

0x15e6,	// (0x000853d6) cell_clock2_toolbar_pane_g1

0x6f36,	// (0x0008ad26) aid_main_viewer_pane_g1_ParamLimits

0x6f36,	// (0x0008ad26) aid_main_viewer_pane_g1

0x6f42,	// (0x0008ad32) aid_main_viewer_pane_g2_ParamLimits

0x6f42,	// (0x0008ad32) aid_main_viewer_pane_g2

0x6f4e,	// (0x0008ad3e) aid_main_viewer_pane_g3_ParamLimits

0x6f4e,	// (0x0008ad3e) aid_main_viewer_pane_g3

0x6f5f,	// (0x0008ad4f) aid_main_viewer_pane_g4_ParamLimits

0x6f5f,	// (0x0008ad4f) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x00093299) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x00093299) aid_main_viewer_pane_g

0x76e9,	// (0x0008b4d9) main_calc_pane_ParamLimits

0x7704,	// (0x0008b4f4) main_dialer2_pane_ParamLimits

0x4887,	// (0x00088677) main_cam6_pane

0x4887,	// (0x00088677) main_vid6_pane

0x8a61,	// (0x0008c851) listscroll_gen_pane_cp06_ParamLimits

0x8a61,	// (0x0008c851) listscroll_gen_pane_cp06

0x8b15,	// (0x0008c905) main_clock2_pane_t5_ParamLimits

0x8b15,	// (0x0008c905) main_clock2_pane_t5

0x8b64,	// (0x0008c954) aid_call2_pane_cp10_ParamLimits

0x8b76,	// (0x0008c966) aid_call_pane_cp10_ParamLimits

0xcc2f,	// (0x00090a1f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcc2f,	// (0x00090a1f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8b88,	// (0x0008c978) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8b88,	// (0x0008c978) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcc2f,	// (0x00090a1f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x000935cf) popup_clock_analogue_window_cp10_g_ParamLimits

0x8b9a,	// (0x0008c98a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x9378,	// (0x0008d168) cell_dialer2_keypad_pane_g2_ParamLimits

0x9378,	// (0x0008d168) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x000936b5) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x000936b5) cell_dialer2_keypad_pane_g

0x9394,	// (0x0008d184) cell_dialer2_keypad_pane_t1

0x9e02,	// (0x0008dbf2) main_cset_text2_pane_ParamLimits

0x9e02,	// (0x0008dbf2) main_cset_text2_pane

0x130c,	// (0x000850fc) area_vitu2_query_pane_g1_ParamLimits

0xa6e1,	// (0x0008e4d1) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x0009386a) area_vitu2_query_pane_g_ParamLimits

0x1390,	// (0x00085180) area_vitu2_query_pane_t7_ParamLimits

0x1390,	// (0x00085180) area_vitu2_query_pane_t7

0xa742,	// (0x0008e532) bg_button_pane_cp018_ParamLimits

0xa750,	// (0x0008e540) bg_button_pane_cp021_ParamLimits

0xa75c,	// (0x0008e54c) bg_button_pane_cp022_ParamLimits

0xa75c,	// (0x0008e54c) bg_vkb2_func_pane_cp08_ParamLimits

0xa742,	// (0x0008e532) bg_vkb2_func_pane_cp06_ParamLimits

0xa750,	// (0x0008e540) bg_vkb2_func_pane_cp07_ParamLimits

0xa76d,	// (0x0008e55d) input_focus_pane_cp09_ParamLimits

0xabff,	// (0x0008e9ef) cam6_autofocus_pane_ParamLimits

0xabff,	// (0x0008e9ef) cam6_autofocus_pane

0xac21,	// (0x0008ea11) cam6_image_uncrop_pane_ParamLimits

0xac21,	// (0x0008ea11) cam6_image_uncrop_pane

0xac4e,	// (0x0008ea3e) cam6_indi_pane_ParamLimits

0xac4e,	// (0x0008ea3e) cam6_indi_pane

0xac68,	// (0x0008ea58) cam6_mode_pane_ParamLimits

0xac68,	// (0x0008ea58) cam6_mode_pane

0xac7c,	// (0x0008ea6c) cam6_timer_pane_ParamLimits

0xac7c,	// (0x0008ea6c) cam6_timer_pane

0xac88,	// (0x0008ea78) cam6_zoom_pane_ParamLimits

0xac88,	// (0x0008ea78) cam6_zoom_pane

0xaca4,	// (0x0008ea94) cam6_mode_pane_g1_ParamLimits

0xaca4,	// (0x0008ea94) cam6_mode_pane_g1

0xacb0,	// (0x0008eaa0) cam6_mode_pane_g2_ParamLimits

0xacb0,	// (0x0008eaa0) cam6_mode_pane_g2

0xacbc,	// (0x0008eaac) cam6_mode_pane_g3_ParamLimits

0xacbc,	// (0x0008eaac) cam6_mode_pane_g3

0xacc8,	// (0x0008eab8) cam6_mode_pane_g4_ParamLimits

0xacc8,	// (0x0008eab8) cam6_mode_pane_g4

0x0003,

0xfb5b,	// (0x0009394b) cam6_mode_pane_g_ParamLimits

0xfb5b,	// (0x0009394b) cam6_mode_pane_g

0x15ee,	// (0x000853de) bg_tb_trans_pane_cp08_ParamLimits

0x15ee,	// (0x000853de) bg_tb_trans_pane_cp08

0x15fc,	// (0x000853ec) cam6_battery_pane_ParamLimits

0x15fc,	// (0x000853ec) cam6_battery_pane

0x1612,	// (0x00085402) cam6_indi_pane_g1_ParamLimits

0x1612,	// (0x00085402) cam6_indi_pane_g1

0x1624,	// (0x00085414) cam6_indi_pane_g2_ParamLimits

0x1624,	// (0x00085414) cam6_indi_pane_g2

0x1636,	// (0x00085426) cam6_indi_pane_g3_ParamLimits

0x1636,	// (0x00085426) cam6_indi_pane_g3

0x0002,

0xfb64,	// (0x00093954) cam6_indi_pane_g_ParamLimits

0xfb64,	// (0x00093954) cam6_indi_pane_g

0x1648,	// (0x00085438) cam6_indi_pane_t1_ParamLimits

0x1648,	// (0x00085438) cam6_indi_pane_t1

0x98bd,	// (0x0008d6ad) cam6_autofocus_pane_g1

0x98b5,	// (0x0008d6a5) cam6_autofocus_pane_g2

0x98cd,	// (0x0008d6bd) cam6_autofocus_pane_g3

0x98c5,	// (0x0008d6b5) cam6_autofocus_pane_g4

0x0003,

0xfb6b,	// (0x0009395b) cam6_autofocus_pane_g

0x166e,	// (0x0008545e) cam6_timer_pane_g1

0x1676,	// (0x00085466) cam6_timer_pane_t1

0x1684,	// (0x00085474) cam6_zoom_cont_pane

0x168c,	// (0x0008547c) cam6_zoom_pane_g1

0x1694,	// (0x00085484) cam6_zoom_pane_g2

0xacd4,	// (0x0008eac4) cam6_zoom_pane_g3

0x0002,

0xfb74,	// (0x00093964) cam6_zoom_pane_g

0x0437,	// (0x00084227) cam6_battery_pane_g1

0x0437,	// (0x00084227) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x000934dc) cam6_battery_pane_g

0x169c,	// (0x0008548c) cam6_zoom_cont_pane_g1

0x16a5,	// (0x00085495) cam6_zoom_cont_pane_g2

0x16ae,	// (0x0008549e) cam6_zoom_cont_pane_g3

0x0002,

0xfb7b,	// (0x0009396b) cam6_zoom_cont_pane_g

0xacf1,	// (0x0008eae1) cam6_mode_pane_cp_ParamLimits

0xacf1,	// (0x0008eae1) cam6_mode_pane_cp

0xad05,	// (0x0008eaf5) cam6_zoom_pane_cp_ParamLimits

0xad05,	// (0x0008eaf5) cam6_zoom_pane_cp

0xad21,	// (0x0008eb11) vid6_image_uncrop_cif_pane_ParamLimits

0xad21,	// (0x0008eb11) vid6_image_uncrop_cif_pane

0xad4d,	// (0x0008eb3d) vid6_image_uncrop_nhd_pane_ParamLimits

0xad4d,	// (0x0008eb3d) vid6_image_uncrop_nhd_pane

0xad6c,	// (0x0008eb5c) vid6_image_uncrop_vga_pane_ParamLimits

0xad6c,	// (0x0008eb5c) vid6_image_uncrop_vga_pane

0xad8b,	// (0x0008eb7b) vid6_image_uncrop_wvga_pane_ParamLimits

0xad8b,	// (0x0008eb7b) vid6_image_uncrop_wvga_pane

0xadaa,	// (0x0008eb9a) vid6_indi_pane_ParamLimits

0xadaa,	// (0x0008eb9a) vid6_indi_pane

0x15ee,	// (0x000853de) bg_tb_trans_pane_cp09_ParamLimits

0x15ee,	// (0x000853de) bg_tb_trans_pane_cp09

0x16c6,	// (0x000854b6) cam6_battery_pane_cp_ParamLimits

0x16c6,	// (0x000854b6) cam6_battery_pane_cp

0x16d2,	// (0x000854c2) vid6_indi_pane_g1_ParamLimits

0x16d2,	// (0x000854c2) vid6_indi_pane_g1

0x16e4,	// (0x000854d4) vid6_indi_pane_g2_ParamLimits

0x16e4,	// (0x000854d4) vid6_indi_pane_g2

0x16f6,	// (0x000854e6) vid6_indi_pane_g3_ParamLimits

0x16f6,	// (0x000854e6) vid6_indi_pane_g3

0x170d,	// (0x000854fd) vid6_indi_pane_g4_ParamLimits

0x170d,	// (0x000854fd) vid6_indi_pane_g4

0x1724,	// (0x00085514) vid6_indi_pane_g5_ParamLimits

0x1724,	// (0x00085514) vid6_indi_pane_g5

0x0004,

0xfb82,	// (0x00093972) vid6_indi_pane_g_ParamLimits

0xfb82,	// (0x00093972) vid6_indi_pane_g

0x173e,	// (0x0008552e) vid6_indi_pane_t1_ParamLimits

0x173e,	// (0x0008552e) vid6_indi_pane_t1

0x1754,	// (0x00085544) vid6_indi_pane_t2_ParamLimits

0x1754,	// (0x00085544) vid6_indi_pane_t2

0x177c,	// (0x0008556c) vid6_indi_pane_t3_ParamLimits

0x177c,	// (0x0008556c) vid6_indi_pane_t3

0x17a4,	// (0x00085594) vid6_indi_pane_t4_ParamLimits

0x17a4,	// (0x00085594) vid6_indi_pane_t4

0x0003,

0xfb8d,	// (0x0009397d) vid6_indi_pane_t_ParamLimits

0xfb8d,	// (0x0009397d) vid6_indi_pane_t

0x17c8,	// (0x000855b8) wait_bar_pane_cp08

0xadcf,	// (0x0008ebbf) main_cset_text2_pane_t1_ParamLimits

0xadcf,	// (0x0008ebbf) main_cset_text2_pane_t1

0xacdc,	// (0x0008eacc) listscroll_gen_pane_cp06_t1_ParamLimits

0xacdc,	// (0x0008eacc) listscroll_gen_pane_cp06_t1

0x4887,	// (0x00088677) main_cam6_set_pane

0x974d,	// (0x0008d53d) bg_tb_trans_pane_cp06_ParamLimits

0x9763,	// (0x0008d553) cam4_indicators_pane_g1_ParamLimits

0x9774,	// (0x0008d564) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x000936f2) cam4_indicators_pane_g_ParamLimits

0x978c,	// (0x0008d57c) cam4_indicators_pane_t1_ParamLimits

0x76f6,	// (0x0008b4e6) bg_tb_trans_pane_cp07_ParamLimits

0x9843,	// (0x0008d633) vid4_indicators_pane_g1_ParamLimits

0x9859,	// (0x0008d649) vid4_indicators_pane_g2_ParamLimits

0x986d,	// (0x0008d65d) vid4_indicators_pane_g3_ParamLimits

0x9880,	// (0x0008d670) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x00093704) vid4_indicators_pane_g_ParamLimits

0x989e,	// (0x0008d68e) vid4_indicators_pane_t1_ParamLimits

0xa896,	// (0x0008e686) vid4_progress_pane_g1_ParamLimits

0xa8a8,	// (0x0008e698) vid4_progress_pane_g2_ParamLimits

0x6fbc,	// (0x0008adac) vid4_progress_pane_g3_ParamLimits

0xa8ba,	// (0x0008e6aa) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x000938b5) vid4_progress_pane_g_ParamLimits

0xa8d8,	// (0x0008e6c8) vid4_progress_pane_t1_ParamLimits

0xa8ed,	// (0x0008e6dd) vid4_progress_pane_t2_ParamLimits

0xa903,	// (0x0008e6f3) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x000938c0) vid4_progress_pane_t_ParamLimits

0xa918,	// (0x0008e708) wait_bar_pane_cp07_ParamLimits

0xadf6,	// (0x0008ebe6) main_cam6_set_pane_g2_ParamLimits

0xadf6,	// (0x0008ebe6) main_cam6_set_pane_g2

0xae02,	// (0x0008ebf2) main_cset6_listscroll_pane_ParamLimits

0xae02,	// (0x0008ebf2) main_cset6_listscroll_pane

0xae2f,	// (0x0008ec1f) main_cset6_slider_pane_ParamLimits

0xae2f,	// (0x0008ec1f) main_cset6_slider_pane

0xae3b,	// (0x0008ec2b) main_cset6_text2_pane_ParamLimits

0xae3b,	// (0x0008ec2b) main_cset6_text2_pane

0x17d7,	// (0x000855c7) main_cset6_text_pane

0x17df,	// (0x000855cf) main_cset_list_pane_copy1_ParamLimits

0x17df,	// (0x000855cf) main_cset_list_pane_copy1

0x17ef,	// (0x000855df) scroll_pane_cp028_copy1

0xae4e,	// (0x0008ec3e) cset_list_set_pane_copy1

0xae5e,	// (0x0008ec4e) aid_position_infowindow_above_copy1

0xae66,	// (0x0008ec56) aid_position_infowindow_below_copy1

0xae6e,	// (0x0008ec5e) cset_list_set_pane_g1_copy1

0xae76,	// (0x0008ec66) cset_list_set_pane_g3_copy1_ParamLimits

0xae76,	// (0x0008ec66) cset_list_set_pane_g3_copy1

0xae85,	// (0x0008ec75) cset_list_set_pane_t1_copy1_ParamLimits

0xae85,	// (0x0008ec75) cset_list_set_pane_t1_copy1

0xe401,	// (0x000921f1) list_highlight_pane_cp021_copy1_ParamLimits

0xe401,	// (0x000921f1) list_highlight_pane_cp021_copy1

0x17f8,	// (0x000855e8) cset6_slider_pane_ParamLimits

0x17f8,	// (0x000855e8) cset6_slider_pane

0x1824,	// (0x00085614) main_cset6_slider_pane_g1_ParamLimits

0x1824,	// (0x00085614) main_cset6_slider_pane_g1

0xae9a,	// (0x0008ec8a) main_cset6_slider_pane_g2_ParamLimits

0xae9a,	// (0x0008ec8a) main_cset6_slider_pane_g2

0x184c,	// (0x0008563c) main_cset6_slider_pane_g3_ParamLimits

0x184c,	// (0x0008563c) main_cset6_slider_pane_g3

0xaec2,	// (0x0008ecb2) main_cset6_slider_pane_g4_ParamLimits

0xaec2,	// (0x0008ecb2) main_cset6_slider_pane_g4

0xaece,	// (0x0008ecbe) main_cset6_slider_pane_g5_ParamLimits

0xaece,	// (0x0008ecbe) main_cset6_slider_pane_g5

0x0f9f,	// (0x00084d8f) main_cset6_slider_pane_g7_ParamLimits

0x0f9f,	// (0x00084d8f) main_cset6_slider_pane_g7

0x0fab,	// (0x00084d9b) main_cset6_slider_pane_g8_ParamLimits

0x0fab,	// (0x00084d9b) main_cset6_slider_pane_g8

0xaeda,	// (0x0008ecca) main_cset6_slider_pane_g9_ParamLimits

0xaeda,	// (0x0008ecca) main_cset6_slider_pane_g9

0xaee6,	// (0x0008ecd6) main_cset6_slider_pane_g10_ParamLimits

0xaee6,	// (0x0008ecd6) main_cset6_slider_pane_g10

0xaef2,	// (0x0008ece2) main_cset6_slider_pane_g11_ParamLimits

0xaef2,	// (0x0008ece2) main_cset6_slider_pane_g11

0xaefe,	// (0x0008ecee) main_cset6_slider_pane_g12_ParamLimits

0xaefe,	// (0x0008ecee) main_cset6_slider_pane_g12

0xaf0a,	// (0x0008ecfa) main_cset6_slider_pane_g13_ParamLimits

0xaf0a,	// (0x0008ecfa) main_cset6_slider_pane_g13

0xaf16,	// (0x0008ed06) main_cset6_slider_pane_g14_ParamLimits

0xaf16,	// (0x0008ed06) main_cset6_slider_pane_g14

0xaf22,	// (0x0008ed12) main_cset6_slider_pane_g15_ParamLimits

0xaf22,	// (0x0008ed12) main_cset6_slider_pane_g15

0xaf3a,	// (0x0008ed2a) main_cset6_slider_pane_g16_ParamLimits

0xaf3a,	// (0x0008ed2a) main_cset6_slider_pane_g16

0xaf46,	// (0x0008ed36) main_cset6_slider_pane_g17_ParamLimits

0xaf46,	// (0x0008ed36) main_cset6_slider_pane_g17

0x0011,

0xfb96,	// (0x00093986) main_cset6_slider_pane_g_ParamLimits

0xfb96,	// (0x00093986) main_cset6_slider_pane_g

0x1858,	// (0x00085648) main_cset6_slider_pane_t1_ParamLimits

0x1858,	// (0x00085648) main_cset6_slider_pane_t1

0xaf6a,	// (0x0008ed5a) main_cset6_slider_pane_t2_ParamLimits

0xaf6a,	// (0x0008ed5a) main_cset6_slider_pane_t2

0xaf95,	// (0x0008ed85) main_cset6_slider_pane_t3_ParamLimits

0xaf95,	// (0x0008ed85) main_cset6_slider_pane_t3

0xafc0,	// (0x0008edb0) main_cset6_slider_pane_t4_ParamLimits

0xafc0,	// (0x0008edb0) main_cset6_slider_pane_t4

0xafeb,	// (0x0008eddb) main_cset6_slider_pane_t5_ParamLimits

0xafeb,	// (0x0008eddb) main_cset6_slider_pane_t5

0x1899,	// (0x00085689) main_cset6_slider_pane_t7_ParamLimits

0x1899,	// (0x00085689) main_cset6_slider_pane_t7

0xb016,	// (0x0008ee06) main_cset6_slider_pane_t8_ParamLimits

0xb016,	// (0x0008ee06) main_cset6_slider_pane_t8

0xb03a,	// (0x0008ee2a) main_cset6_slider_pane_t9_ParamLimits

0xb03a,	// (0x0008ee2a) main_cset6_slider_pane_t9

0xb05e,	// (0x0008ee4e) main_cset6_slider_pane_t10_ParamLimits

0xb05e,	// (0x0008ee4e) main_cset6_slider_pane_t10

0xb082,	// (0x0008ee72) main_cset6_slider_pane_t11_ParamLimits

0xb082,	// (0x0008ee72) main_cset6_slider_pane_t11

0x18cf,	// (0x000856bf) main_cset6_slider_pane_t14_ParamLimits

0x18cf,	// (0x000856bf) main_cset6_slider_pane_t14

0x1908,	// (0x000856f8) main_cset6_slider_pane_t15_ParamLimits

0x1908,	// (0x000856f8) main_cset6_slider_pane_t15

0x000b,

0xfbbb,	// (0x000939ab) main_cset6_slider_pane_t_ParamLimits

0xfbbb,	// (0x000939ab) main_cset6_slider_pane_t

0x1063,	// (0x00084e53) cset_slider_pane_g1_copy1

0x106c,	// (0x00084e5c) cset_slider_pane_g2_copy1

0x1075,	// (0x00084e65) cset_slider_pane_g3_copy1

0xe2d3,	// (0x000920c3) bg_popup_sub_pane_cp011_copy1

0x1a12,	// (0x00085802) main_cset_text_pane_g1_copy1

0x1128,	// (0x00084f18) main_cset_text_pane_t1_copy1

0x1136,	// (0x00084f26) main_cset_text_pane_t2_copy1

0x1144,	// (0x00084f34) main_cset_text_pane_t3_copy1

0x1152,	// (0x00084f42) main_cset_text_pane_t4_copy1

0x1160,	// (0x00084f50) main_cset_text_pane_t5_copy1

0x1a1a,	// (0x0008580a) main_cset_text_pane_t6_copy1

0x1a28,	// (0x00085818) main_cset_text_pane_t7_copy1

0xb0a6,	// (0x0008ee96) main_cset_text2_pane_t1_copy1

0x76f6,	// (0x0008b4e6) main_ncimui_pane

0x775d,	// (0x0008b54d) popup_query_ncimui_window_ParamLimits

0x775d,	// (0x0008b54d) popup_query_ncimui_window

0x06cc,	// (0x000844bc) field_cale_ev2_pane_g4_ParamLimits

0x06cc,	// (0x000844bc) field_cale_ev2_pane_g4

0x908e,	// (0x0008ce7e) cell_video_dialer_keypad_pane_g2_ParamLimits

0x908e,	// (0x0008ce7e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x00093690) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x00093690) cell_video_dialer_keypad_pane_g

0x90a6,	// (0x0008ce96) cell_video_dialer_keypad_pane_t1

0xe2d3,	// (0x000920c3) bg_popup_window_pane_cp012

0xcaac,	// (0x0009089c) heading_pane_cp06

0x1a54,	// (0x00085844) ncim_query_content_pane

0xe2d3,	// (0x000920c3) bg_popup_heading_pane_cp01

0x1a5c,	// (0x0008584c) ncim_heading_pane_t1

0x1a6a,	// (0x0008585a) ncim_indicator_popup_pane

0x1a7c,	// (0x0008586c) ncim_query_button_pane

0x1a92,	// (0x00085882) ncim_query_content_pane_t1

0x1aa4,	// (0x00085894) ncim_query_content_pane_t2

0x0005,

0xfbff,	// (0x000939ef) ncim_query_content_pane_t

0x1ade,	// (0x000858ce) ncim_query_list_pane

0x1af0,	// (0x000858e0) ncim_query_popup_pane

0x1a6a,	// (0x0008585a) ncim_indicator_popup_pane_ParamLimits

0xb200,	// (0x0008eff0) ncim_query_content_pane_g1_ParamLimits

0xb200,	// (0x0008eff0) ncim_query_content_pane_g1

0x1a92,	// (0x00085882) ncim_query_content_pane_t1_ParamLimits

0x1aa4,	// (0x00085894) ncim_query_content_pane_t2_ParamLimits

0xb20c,	// (0x0008effc) ncim_query_content_pane_t3_ParamLimits

0xb20c,	// (0x0008effc) ncim_query_content_pane_t3

0xb229,	// (0x0008f019) ncim_query_content_pane_t4_ParamLimits

0xb229,	// (0x0008f019) ncim_query_content_pane_t4

0xb246,	// (0x0008f036) ncim_query_content_pane_t5_ParamLimits

0xb246,	// (0x0008f036) ncim_query_content_pane_t5

0x1ab6,	// (0x000858a6) ncim_query_content_pane_t6_ParamLimits

0x1ab6,	// (0x000858a6) ncim_query_content_pane_t6

0xfbff,	// (0x000939ef) ncim_query_content_pane_t_ParamLimits

0x1ade,	// (0x000858ce) ncim_query_list_pane_ParamLimits

0x1af0,	// (0x000858e0) ncim_query_popup_pane_ParamLimits

0x1b04,	// (0x000858f4) wait_bar_pane_cp04

0xe2d3,	// (0x000920c3) input_focus_pane_cp011

0x1b0c,	// (0x000858fc) ncim_query_popup_pane_t1

0x1b1a,	// (0x0008590a) ncim_list_query_list_pane_ParamLimits

0x1b1a,	// (0x0008590a) ncim_list_query_list_pane

0xe2d3,	// (0x000920c3) bg_button_pane_cp027

0x1b2d,	// (0x0008591d) ncim_query_button_pane_g1

0xe2d3,	// (0x000920c3) list_highlight_pane_cp012

0x1b37,	// (0x00085927) ncim_list_query_list_pane_g1

0x1b3f,	// (0x0008592f) ncim_list_query_list_pane_t1

0x9780,	// (0x0008d570) cam4_indicators_pane_g3_ParamLimits

0x9780,	// (0x0008d570) cam4_indicators_pane_g3

0x988c,	// (0x0008d67c) vid4_indicators_pane_g5_ParamLimits

0x988c,	// (0x0008d67c) vid4_indicators_pane_g5

0xa8c9,	// (0x0008e6b9) vid4_progress_pane_g5_ParamLimits

0xa8c9,	// (0x0008e6b9) vid4_progress_pane_g5

0xb0d8,	// (0x0008eec8) main_ncimui_pane_g1

0xb142,	// (0x0008ef32) ncimui_group_query_pane_ParamLimits

0xb142,	// (0x0008ef32) ncimui_group_query_pane

0xb19c,	// (0x0008ef8c) ncimui_list_pane_ParamLimits

0xb19c,	// (0x0008ef8c) ncimui_list_pane

0xb1c3,	// (0x0008efb3) ncimui_text_pane_ParamLimits

0xb1c3,	// (0x0008efb3) ncimui_text_pane

0xb263,	// (0x0008f053) ncimui_text_pane_t1_ParamLimits

0xb263,	// (0x0008f053) ncimui_text_pane_t1

0x1b4d,	// (0x0008593d) ncimui_list_single_graphic_pane_ParamLimits

0x1b4d,	// (0x0008593d) ncimui_list_single_graphic_pane

0xb282,	// (0x0008f072) ncimui_query_pane_ParamLimits

0xb282,	// (0x0008f072) ncimui_query_pane

0xe2d3,	// (0x000920c3) list_highlight_pane_cp013

0x1b5d,	// (0x0008594d) ncim_list_query_list_pane_t1_copy1

0x1b37,	// (0x00085927) ncim_list_single_graphic_pane_g1

0x1b6b,	// (0x0008595b) ncim_query_button_pane_cp01

0x1b77,	// (0x00085967) ncim_query_entry_pane_ParamLimits

0x1b77,	// (0x00085967) ncim_query_entry_pane

0x1b8a,	// (0x0008597a) ncimui_query_pane_g1

0x1b96,	// (0x00085986) ncimui_query_pane_t1_ParamLimits

0x1b96,	// (0x00085986) ncimui_query_pane_t1

0xe401,	// (0x000921f1) input_focus_pane_cp012

0x1baf,	// (0x0008599f) ncim_query_entry_pane_t1

0xea61,	// (0x00092851) main_im_pane_ParamLimits

0x76f6,	// (0x0008b4e6) main_mobtv_pane_ParamLimits

0x76f6,	// (0x0008b4e6) main_mobtv_pane

0xaf52,	// (0x0008ed42) main_cset6_slider_pane_g18_ParamLimits

0xaf52,	// (0x0008ed42) main_cset6_slider_pane_g18

0xaf5e,	// (0x0008ed4e) main_cset6_slider_pane_g19_ParamLimits

0xaf5e,	// (0x0008ed4e) main_cset6_slider_pane_g19

0x0e2f,	// (0x00084c1f) bg_main_mobtv_pane_ParamLimits

0x0e2f,	// (0x00084c1f) bg_main_mobtv_pane

0xb295,	// (0x0008f085) main_mobtv_info_pane

0xb2a0,	// (0x0008f090) main_mobtv_loading_pane_ParamLimits

0xb2a0,	// (0x0008f090) main_mobtv_loading_pane

0x1bc1,	// (0x000859b1) main_mobtv_pg_channel_list_pane

0x1bcb,	// (0x000859bb) main_mobtv_pg_hdr_pane

0xb2ad,	// (0x0008f09d) main_mobtv_programe_curr_pane_ParamLimits

0xb2ad,	// (0x0008f09d) main_mobtv_programe_curr_pane

0xb2ba,	// (0x0008f0aa) main_mobtv_programe_next_pane_ParamLimits

0xb2ba,	// (0x0008f0aa) main_mobtv_programe_next_pane

0x1bd4,	// (0x000859c4) popup_mobtv_noti_window

0x0437,	// (0x00084227) main_tv_pg_hdr_pane_g1

0x1bde,	// (0x000859ce) main_tv_pg_hdr_pane_g2

0x1be6,	// (0x000859d6) main_tv_pg_hdr_pane_g3

0x1bee,	// (0x000859de) main_tv_pg_hdr_pane_g4

0x1bf6,	// (0x000859e6) main_tv_pg_hdr_pane_g5

0x1c00,	// (0x000859f0) main_tv_pg_hdr_pane_g6

0x1c0a,	// (0x000859fa) main_tv_pg_hdr_pane_g7

0x1c14,	// (0x00085a04) main_tv_pg_hdr_pane_g8

0x1c1e,	// (0x00085a0e) main_tv_pg_hdr_pane_g9

0x1c28,	// (0x00085a18) main_tv_pg_hdr_pane_g10

0x1c32,	// (0x00085a22) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0c,	// (0x000939fc) main_tv_pg_hdr_pane_g

0x1c3c,	// (0x00085a2c) main_tv_pg_hdr_pane_t1

0x1c4a,	// (0x00085a3a) main_tv_pg_hdr_pane_t2

0x1c58,	// (0x00085a48) main_tv_pg_hdr_pane_t3

0x1c68,	// (0x00085a58) main_tv_pg_hdr_pane_t4

0x1c78,	// (0x00085a68) main_tv_pg_hdr_pane_t5

0x0004,

0xfc23,	// (0x00093a13) main_tv_pg_hdr_pane_t

0x1c88,	// (0x00085a78) single_mobtv_pg_channel_pane_ParamLimits

0x1c88,	// (0x00085a78) single_mobtv_pg_channel_pane

0x1c9a,	// (0x00085a8a) single_mobtv_pg_channel_table_pane

0x1ca3,	// (0x00085a93) single_mobtv_pg_channel_thumb_pane

0x1cac,	// (0x00085a9c) single_tv_pg_channel_pane_g1

0x1cb5,	// (0x00085aa5) single_tv_pg_channel_pane_g2

0x0001,

0xfc2e,	// (0x00093a1e) single_tv_pg_channel_pane_g

0x0667,	// (0x00084457) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0667,	// (0x00084457) bg_single_mobtv_pg_channel_thumb_pane

0x1cbe,	// (0x00085aae) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x1cbe,	// (0x00085aae) single_mobtv_pg_channel_thumb_pane_g1

0x1ccc,	// (0x00085abc) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x1ccc,	// (0x00085abc) single_mobtv_pg_channel_thumb_pane_g2

0x1cd8,	// (0x00085ac8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x1cd8,	// (0x00085ac8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc33,	// (0x00093a23) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc33,	// (0x00093a23) single_mobtv_pg_channel_thumb_pane_g

0x1ce4,	// (0x00085ad4) single_mobtv_pg_channel_thumb_pane_t1

0x1cf2,	// (0x00085ae2) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3a,	// (0x00093a2a) single_mobtv_pg_channel_thumb_pane_t

0x0437,	// (0x00084227) bg_single_mobtv_pg_channel_table_pane_g1

0x0437,	// (0x00084227) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x000934dc) bg_single_mobtv_pg_channel_table_pane_g

0x1d00,	// (0x00085af0) single_mobtv_pg_channel_table_pane_t1

0x1d0e,	// (0x00085afe) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3f,	// (0x00093a2f) single_mobtv_pg_channel_table_pane_t

0xb2cf,	// (0x0008f0bf) main_mobtv_info_pane_g1_ParamLimits

0xb2cf,	// (0x0008f0bf) main_mobtv_info_pane_g1

0xb2eb,	// (0x0008f0db) main_mobtv_info_pane_t1_ParamLimits

0xb2eb,	// (0x0008f0db) main_mobtv_info_pane_t1

0xb363,	// (0x0008f153) main_mobtv_info_pane_t2_ParamLimits

0xb363,	// (0x0008f153) main_mobtv_info_pane_t2

0x0002,

0xfc49,	// (0x00093a39) main_mobtv_info_pane_t_ParamLimits

0xfc49,	// (0x00093a39) main_mobtv_info_pane_t

0xb3f4,	// (0x0008f1e4) wait_bar_pane_cp05

0xb406,	// (0x0008f1f6) main_mobtv_loading_pane_g1_ParamLimits

0xb406,	// (0x0008f1f6) main_mobtv_loading_pane_g1

0xb412,	// (0x0008f202) main_mobtv_loading_pane_g2_ParamLimits

0xb412,	// (0x0008f202) main_mobtv_loading_pane_g2

0xb41e,	// (0x0008f20e) main_mobtv_loading_pane_g3_ParamLimits

0xb41e,	// (0x0008f20e) main_mobtv_loading_pane_g3

0x0002,

0xfc50,	// (0x00093a40) main_mobtv_loading_pane_g_ParamLimits

0xfc50,	// (0x00093a40) main_mobtv_loading_pane_g

0x1d1c,	// (0x00085b0c) main_mobtv_loading_pane_t1_ParamLimits

0x1d1c,	// (0x00085b0c) main_mobtv_loading_pane_t1

0x1d34,	// (0x00085b24) main_mobtv_loading_pane_t2_ParamLimits

0x1d34,	// (0x00085b24) main_mobtv_loading_pane_t2

0x0001,

0xfc57,	// (0x00093a47) main_mobtv_loading_pane_t_ParamLimits

0xfc57,	// (0x00093a47) main_mobtv_loading_pane_t

0xb42c,	// (0x0008f21c) wait_bar_pane_cp06_ParamLimits

0xb42c,	// (0x0008f21c) wait_bar_pane_cp06

0x1d58,	// (0x00085b48) main_mobtv_programe_curr_pane_t1

0x1d66,	// (0x00085b56) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5c,	// (0x00093a4c) main_mobtv_programe_curr_pane_t

0x1d74,	// (0x00085b64) main_mobtv_programe_next_pane_t1

0x1d82,	// (0x00085b72) main_mobtv_programe_next_pane_t2

0x1d90,	// (0x00085b80) main_mobtv_programe_next_pane_t3

0x0002,

0xfc61,	// (0x00093a51) main_mobtv_programe_next_pane_t

0xe2d3,	// (0x000920c3) bg_popup_mobtv_noti_window_pane

0x1d9e,	// (0x00085b8e) popup_mobtv_noti_window_g1

0x1da6,	// (0x00085b96) popup_mobtv_noti_window_t1

0x1db4,	// (0x00085ba4) popup_mobtv_noti_window_t2

0x0001,

0xfc68,	// (0x00093a58) popup_mobtv_noti_window_t

0x0437,	// (0x00084227) bg_popup_mobtv_noti_window_pane_g1

0x4887,	// (0x00088677) sc_clock_pane

0x4887,	// (0x00088677) main_fs_bigclock_pane

0xaaae,	// (0x0008e89e) blid2_tripm_pane_t4_ParamLimits

0xaaae,	// (0x0008e89e) blid2_tripm_pane_t4

0xb438,	// (0x0008f228) sc_clock_pane_g1_ParamLimits

0xb438,	// (0x0008f228) sc_clock_pane_g1

0xb446,	// (0x0008f236) sc_clock_pane_t1_ParamLimits

0xb446,	// (0x0008f236) sc_clock_pane_t1

0xb45b,	// (0x0008f24b) sc_clock_pane_t2_ParamLimits

0xb45b,	// (0x0008f24b) sc_clock_pane_t2

0xb46d,	// (0x0008f25d) sc_clock_pane_t3_ParamLimits

0xb46d,	// (0x0008f25d) sc_clock_pane_t3

0x0004,

0xfc6d,	// (0x00093a5d) sc_clock_pane_t_ParamLimits

0xfc6d,	// (0x00093a5d) sc_clock_pane_t

0xc18e,	// (0x0008ff7e) main_fs_bigclock_indicator_pane_ParamLimits

0xc18e,	// (0x0008ff7e) main_fs_bigclock_indicator_pane

0xb4fa,	// (0x0008f2ea) main_fs_bigclock_pane_g1_ParamLimits

0xb4fa,	// (0x0008f2ea) main_fs_bigclock_pane_g1

0xc19a,	// (0x0008ff8a) main_fs_bigclock_pane_t1_ParamLimits

0xc19a,	// (0x0008ff8a) main_fs_bigclock_pane_t1

0xc1ac,	// (0x0008ff9c) main_fs_bigclock_pane_t2_ParamLimits

0xc1ac,	// (0x0008ff9c) main_fs_bigclock_pane_t2

0xc1c0,	// (0x0008ffb0) main_fs_bigclock_pane_t3_ParamLimits

0xc1c0,	// (0x0008ffb0) main_fs_bigclock_pane_t3

0x0002,

0xfe71,	// (0x00093c61) main_fs_bigclock_pane_t_ParamLimits

0xfe71,	// (0x00093c61) main_fs_bigclock_pane_t

0x2a2f,	// (0x0008681f) main_fs_bigclock_indicator_pane_g1

0x1a84,	// (0x00085874) ncim_query_content_pane_g2_ParamLimits

0x1a84,	// (0x00085874) ncim_query_content_pane_g2

0x0001,

0xfbfa,	// (0x000939ea) ncim_query_content_pane_g_ParamLimits

0xfbfa,	// (0x000939ea) ncim_query_content_pane_g

0xb47f,	// (0x0008f26f) sc_clock_pane_t4_ParamLimits

0xb47f,	// (0x0008f26f) sc_clock_pane_t4

0x76f6,	// (0x0008b4e6) main_radioblah_pane

0x0d86,	// (0x00084b76) cell_call4_button_pane_t1_copy1_ParamLimits

0x0d86,	// (0x00084b76) cell_call4_button_pane_t1_copy1

0xb0f2,	// (0x0008eee2) main_ncimui_pane_t1_ParamLimits

0xb0f2,	// (0x0008eee2) main_ncimui_pane_t1

0xb10c,	// (0x0008eefc) main_ncimui_pane_t2_ParamLimits

0xb10c,	// (0x0008eefc) main_ncimui_pane_t2

0x0002,

0xfbf3,	// (0x000939e3) main_ncimui_pane_t_ParamLimits

0xfbf3,	// (0x000939e3) main_ncimui_pane_t

0x1f00,	// (0x00085cf0) main_radioblah_anim_pane_ParamLimits

0x1f00,	// (0x00085cf0) main_radioblah_anim_pane

0x1f11,	// (0x00085d01) main_radioblah_info_pane_ParamLimits

0x1f11,	// (0x00085d01) main_radioblah_info_pane

0x1f25,	// (0x00085d15) main_radioblah_pane_t1_ParamLimits

0x1f25,	// (0x00085d15) main_radioblah_pane_t1

0x1f41,	// (0x00085d31) main_radioblah_pane_t2_ParamLimits

0x1f41,	// (0x00085d31) main_radioblah_pane_t2

0x0003,

0xfc8e,	// (0x00093a7e) main_radioblah_pane_t_ParamLimits

0xfc8e,	// (0x00093a7e) main_radioblah_pane_t

0xb54c,	// (0x0008f33c) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb54c,	// (0x0008f33c) main_radioblah_rocker_ctrl_pane

0x1f89,	// (0x00085d79) main_radioblah_info_pane_t1_ParamLimits

0x1f89,	// (0x00085d79) main_radioblah_info_pane_t1

0xb595,	// (0x0008f385) main_radioblah_info_pane_t2_ParamLimits

0xb595,	// (0x0008f385) main_radioblah_info_pane_t2

0x0003,

0xfc97,	// (0x00093a87) main_radioblah_info_pane_t_ParamLimits

0xfc97,	// (0x00093a87) main_radioblah_info_pane_t

0x0437,	// (0x00084227) main_radioblah_rocker_ctrl_pane_g1

0xb645,	// (0x0008f435) main_radioblah_rocker_ctrl_pane_g2

0xb64d,	// (0x0008f43d) main_radioblah_rocker_ctrl_pane_g3

0xb655,	// (0x0008f445) main_radioblah_rocker_ctrl_pane_g4

0xb65d,	// (0x0008f44d) main_radioblah_rocker_ctrl_pane_g5

0xb665,	// (0x0008f455) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca0,	// (0x00093a90) main_radioblah_rocker_ctrl_pane_g

0xb0a6,	// (0x0008ee96) main_cset_text2_pane_t1_copy1_ParamLimits

0x969f,	// (0x0008d48f) cam4_image_uncrop_qvga_pane

0x97f2,	// (0x0008d5e2) vid4_image_uncrop_qcif_pane

0xac40,	// (0x0008ea30) cam6_image_uncrop_qvga_pane_ParamLimits

0xac40,	// (0x0008ea30) cam6_image_uncrop_qvga_pane

0x16b6,	// (0x000854a6) vid6_image_uncrop_qcif_pane_ParamLimits

0x16b6,	// (0x000854a6) vid6_image_uncrop_qcif_pane

0xe2d3,	// (0x000920c3) bg_popup_preview_window_pane_cp03

0x1a36,	// (0x00085826) list_cset_text2_pane

0x1a3e,	// (0x0008582e) main_cset6_text2_pane_g1

0x1a46,	// (0x00085836) main_cset6_text2_pane_t1

0xb66d,	// (0x0008f45d) list_cset_text2_pane_t1_ParamLimits

0xb66d,	// (0x0008f45d) list_cset_text2_pane_t1

0x76f6,	// (0x0008b4e6) main_radioblah_pane_ParamLimits

0xb3e0,	// (0x0008f1d0) main_mobtv_info_pane_t3_ParamLimits

0xb3e0,	// (0x0008f1d0) main_mobtv_info_pane_t3

0xb53a,	// (0x0008f32a) main_radioblah_pane_g1

0xb565,	// (0x0008f355) main_radioblah_info_pane_g1

0xb5ea,	// (0x0008f3da) main_radioblah_info_pane_t3_ParamLimits

0xb5ea,	// (0x0008f3da) main_radioblah_info_pane_t3

0x634e,	// (0x0008a13e) highlight_cell_cale_month_pane_ParamLimits

0x634e,	// (0x0008a13e) highlight_cell_cale_month_pane

0x4887,	// (0x00088677) main_phob_fisheye_pane

0x075b,	// (0x0008454b) scroll_pane_cp0031_ParamLimits

0x075b,	// (0x0008454b) scroll_pane_cp0031

0x17c8,	// (0x000855b8) wait_bar_pane_cp08_ParamLimits

0xae4e,	// (0x0008ec3e) cset_list_set_pane_copy1_ParamLimits

0x1fdd,	// (0x00085dcd) highlight_cell_cale_month_pane_g1

0xb684,	// (0x0008f474) highlight_cell_cale_month_pane_t1

0x13fc,	// (0x000851ec) list_gen_pane_cp01

0x0f8a,	// (0x00084d7a) scroll_pane_01

0xb692,	// (0x0008f482) list_single_double_fisheye_pane

0xb69b,	// (0x0008f48b) list_double_fisheye_pane_g1_ParamLimits

0xb69b,	// (0x0008f48b) list_double_fisheye_pane_g1

0xb6a7,	// (0x0008f497) list_double_fisheye_pane_g2_ParamLimits

0xb6a7,	// (0x0008f497) list_double_fisheye_pane_g2

0xb6bb,	// (0x0008f4ab) list_double_fisheye_pane_g3_ParamLimits

0xb6bb,	// (0x0008f4ab) list_double_fisheye_pane_g3

0x0004,

0xfcad,	// (0x00093a9d) list_double_fisheye_pane_g_ParamLimits

0xfcad,	// (0x00093a9d) list_double_fisheye_pane_g

0xb6e4,	// (0x0008f4d4) list_double_fisheye_pane_t1_ParamLimits

0xb6e4,	// (0x0008f4d4) list_double_fisheye_pane_t1

0xb6ff,	// (0x0008f4ef) list_double_fisheye_pane_t2_ParamLimits

0xb6ff,	// (0x0008f4ef) list_double_fisheye_pane_t2

0x0001,

0xfcb8,	// (0x00093aa8) list_double_fisheye_pane_t_ParamLimits

0xfcb8,	// (0x00093aa8) list_double_fisheye_pane_t

0x4887,	// (0x00088677) main_call5_pane

0xb4a5,	// (0x0008f295) sc_swipe_pane_ParamLimits

0xb4a5,	// (0x0008f295) sc_swipe_pane

0xb72d,	// (0x0008f51d) call5_image_pane_ParamLimits

0xb72d,	// (0x0008f51d) call5_image_pane

0xb73f,	// (0x0008f52f) call5_swipe_1_pane_ParamLimits

0xb73f,	// (0x0008f52f) call5_swipe_1_pane

0xb74b,	// (0x0008f53b) call5_swipe_2_pane_ParamLimits

0xb74b,	// (0x0008f53b) call5_swipe_2_pane

0xb767,	// (0x0008f557) popup_call5_audio_first_window_ParamLimits

0xb767,	// (0x0008f557) popup_call5_audio_first_window

0x0667,	// (0x00084457) call5_swipe_1_pane_g1_ParamLimits

0x0667,	// (0x00084457) call5_swipe_1_pane_g1

0x1fe5,	// (0x00085dd5) call5_swipe_1_pane_g2_ParamLimits

0x1fe5,	// (0x00085dd5) call5_swipe_1_pane_g2

0x0001,

0xfcbd,	// (0x00093aad) call5_swipe_1_pane_g_ParamLimits

0xfcbd,	// (0x00093aad) call5_swipe_1_pane_g

0x1ff1,	// (0x00085de1) call5_swipe_1_pane_t1_ParamLimits

0x1ff1,	// (0x00085de1) call5_swipe_1_pane_t1

0x0667,	// (0x00084457) call5_swipe_2_pane_g1_ParamLimits

0x0667,	// (0x00084457) call5_swipe_2_pane_g1

0x2006,	// (0x00085df6) call5_swipe_2_pane_g2_ParamLimits

0x2006,	// (0x00085df6) call5_swipe_2_pane_g2

0x0001,

0xfcc2,	// (0x00093ab2) call5_swipe_2_pane_g_ParamLimits

0xfcc2,	// (0x00093ab2) call5_swipe_2_pane_g

0x2012,	// (0x00085e02) call5_swipe_2_pane_t1_ParamLimits

0x2012,	// (0x00085e02) call5_swipe_2_pane_t1

0x2027,	// (0x00085e17) sc_swipe_pane_g1_ParamLimits

0x2027,	// (0x00085e17) sc_swipe_pane_g1

0x2034,	// (0x00085e24) sc_swipe_pane_g2_ParamLimits

0x2034,	// (0x00085e24) sc_swipe_pane_g2

0x0001,

0xfcc7,	// (0x00093ab7) sc_swipe_pane_g_ParamLimits

0xfcc7,	// (0x00093ab7) sc_swipe_pane_g

0x2040,	// (0x00085e30) sc_swipe_pane_t1_ParamLimits

0x2040,	// (0x00085e30) sc_swipe_pane_t1

0x4887,	// (0x00088677) main_cmail_launcher_pane

0xb777,	// (0x0008f567) aid_size_cell_cmail_l_ParamLimits

0xb777,	// (0x0008f567) aid_size_cell_cmail_l

0xb787,	// (0x0008f577) grid_cmail_l_pane_ParamLimits

0xb787,	// (0x0008f577) grid_cmail_l_pane

0xb797,	// (0x0008f587) cell_cmail_l_pane_ParamLimits

0xb797,	// (0x0008f587) cell_cmail_l_pane

0xb7ad,	// (0x0008f59d) cell_cmail_l_pane_g1_ParamLimits

0xb7ad,	// (0x0008f59d) cell_cmail_l_pane_g1

0xb7b9,	// (0x0008f5a9) cell_cmail_l_pane_t1_ParamLimits

0xb7b9,	// (0x0008f5a9) cell_cmail_l_pane_t1

0x2055,	// (0x00085e45) cell_cmail_l_pane_t2_ParamLimits

0x2055,	// (0x00085e45) cell_cmail_l_pane_t2

0x0001,

0xfccc,	// (0x00093abc) cell_cmail_l_pane_t_ParamLimits

0xfccc,	// (0x00093abc) cell_cmail_l_pane_t

0xe401,	// (0x000921f1) grid_highlight_pane_cp018_ParamLimits

0xe401,	// (0x000921f1) grid_highlight_pane_cp018

0x46e4,	// (0x000884d4) main2_pane_ParamLimits

0x46e4,	// (0x000884d4) main2_pane

0xeb0c,	// (0x000928fc) popup_sp_fs_action_menu_bg_pane_g1

0xeb14,	// (0x00092904) popup_sp_fs_action_menu_bg_pane_g2

0xeb1c,	// (0x0009290c) popup_sp_fs_action_menu_bg_pane_g3

0xeb24,	// (0x00092914) popup_sp_fs_action_menu_bg_pane_g4

0xeb2c,	// (0x0009291c) popup_sp_fs_action_menu_bg_pane_g5

0xeb34,	// (0x00092924) popup_sp_fs_action_menu_bg_pane_g6

0xeb3c,	// (0x0009292c) popup_sp_fs_action_menu_bg_pane_g7

0xeb44,	// (0x00092934) popup_sp_fs_action_menu_bg_pane_g8

0xeb4c,	// (0x0009293c) popup_sp_fs_action_menu_bg_pane_g9

0xeb54,	// (0x00092944) popup_sp_fs_action_menu_bg_pane_g10

0xeb54,	// (0x00092944) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x00092f88) popup_sp_fs_action_menu_bg_pane_g

0xec72,	// (0x00092a62) list_medium_line_x2_t3_g3_g1_ParamLimits

0xec72,	// (0x00092a62) list_medium_line_x2_t3_g3_g1

0xec7e,	// (0x00092a6e) list_medium_line_x2_t3_g3_g2_ParamLimits

0xec7e,	// (0x00092a6e) list_medium_line_x2_t3_g3_g2

0xec8a,	// (0x00092a7a) list_medium_line_x2_t3_g3_g3_ParamLimits

0xec8a,	// (0x00092a7a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x00093038) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x00093038) list_medium_line_x2_t3_g3_g

0xec96,	// (0x00092a86) list_medium_line_x2_t3_g3_t1_ParamLimits

0xec96,	// (0x00092a86) list_medium_line_x2_t3_g3_t1

0x5546,	// (0x00089336) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5546,	// (0x00089336) list_medium_line_x2_t3_g3_t2

0xecab,	// (0x00092a9b) list_medium_line_x2_t3_g3_t3_ParamLimits

0xecab,	// (0x00092a9b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0009303f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0009303f) list_medium_line_x2_t3_g3_t

0xec72,	// (0x00092a62) list_medium_line_x2_t3_g2_g1_ParamLimits

0xec72,	// (0x00092a62) list_medium_line_x2_t3_g2_g1

0xec8a,	// (0x00092a7a) list_medium_line_x2_t3_g2_g2_ParamLimits

0xec8a,	// (0x00092a7a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x00093046) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x00093046) list_medium_line_x2_t3_g2_g

0xecc0,	// (0x00092ab0) list_medium_line_x2_t3_g2_t1_ParamLimits

0xecc0,	// (0x00092ab0) list_medium_line_x2_t3_g2_t1

0xecd6,	// (0x00092ac6) list_medium_line_x2_t3_g2_t2_ParamLimits

0xecd6,	// (0x00092ac6) list_medium_line_x2_t3_g2_t2

0xece8,	// (0x00092ad8) list_medium_line_x2_t3_g2_t3_ParamLimits

0xece8,	// (0x00092ad8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x0009304b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x0009304b) list_medium_line_x2_t3_g2_t

0xec72,	// (0x00092a62) list_medium_line_x2_t4_g4_g1_ParamLimits

0xec72,	// (0x00092a62) list_medium_line_x2_t4_g4_g1

0xed06,	// (0x00092af6) list_medium_line_x2_t4_g4_g2_ParamLimits

0xed06,	// (0x00092af6) list_medium_line_x2_t4_g4_g2

0xec7e,	// (0x00092a6e) list_medium_line_x2_t4_g4_g3_ParamLimits

0xec7e,	// (0x00092a6e) list_medium_line_x2_t4_g4_g3

0xed12,	// (0x00092b02) list_medium_line_x2_t4_g4_g4_ParamLimits

0xed12,	// (0x00092b02) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x00093052) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x00093052) list_medium_line_x2_t4_g4_g

0x5558,	// (0x00089348) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5558,	// (0x00089348) list_medium_line_x2_t4_g4_t1

0x5572,	// (0x00089362) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5572,	// (0x00089362) list_medium_line_x2_t4_g4_t2

0x5588,	// (0x00089378) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5588,	// (0x00089378) list_medium_line_x2_t4_g4_t3

0xed1e,	// (0x00092b0e) list_medium_line_x2_t4_g4_t4_ParamLimits

0xed1e,	// (0x00092b0e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x0009305b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x0009305b) list_medium_line_x2_t4_g4_t

0xec72,	// (0x00092a62) list_medium_line_x2_t2_g4_g1_ParamLimits

0xec72,	// (0x00092a62) list_medium_line_x2_t2_g4_g1

0xed06,	// (0x00092af6) list_medium_line_x2_t2_g4_g2_ParamLimits

0xed06,	// (0x00092af6) list_medium_line_x2_t2_g4_g2

0xec7e,	// (0x00092a6e) list_medium_line_x2_t2_g4_g3_ParamLimits

0xec7e,	// (0x00092a6e) list_medium_line_x2_t2_g4_g3

0xec8a,	// (0x00092a7a) list_medium_line_x2_t2_g4_g4_ParamLimits

0xec8a,	// (0x00092a7a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x000930c2) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x000930c2) list_medium_line_x2_t2_g4_g

0xf00c,	// (0x00092dfc) list_medium_line_x2_t2_g4_t1_ParamLimits

0xf00c,	// (0x00092dfc) list_medium_line_x2_t2_g4_t1

0xecab,	// (0x00092a9b) list_medium_line_x2_t2_g4_t2_ParamLimits

0xecab,	// (0x00092a9b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x000930cb) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x000930cb) list_medium_line_x2_t2_g4_t

0xec72,	// (0x00092a62) list_medium_line_x2_t2_g3_g1_ParamLimits

0xec72,	// (0x00092a62) list_medium_line_x2_t2_g3_g1

0xec7e,	// (0x00092a6e) list_medium_line_x2_t2_g3_g2_ParamLimits

0xec7e,	// (0x00092a6e) list_medium_line_x2_t2_g3_g2

0xec8a,	// (0x00092a7a) list_medium_line_x2_t2_g3_g3_ParamLimits

0xec8a,	// (0x00092a7a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x00093038) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x00093038) list_medium_line_x2_t2_g3_g

0xf021,	// (0x00092e11) list_medium_line_x2_t2_g3_t1_ParamLimits

0xf021,	// (0x00092e11) list_medium_line_x2_t2_g3_t1

0xecab,	// (0x00092a9b) list_medium_line_x2_t2_g3_t2_ParamLimits

0xecab,	// (0x00092a9b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x000930d0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x000930d0) list_medium_line_x2_t2_g3_t

0x6559,	// (0x0008a349) main_sp_fs_list_pane_ParamLimits

0x6559,	// (0x0008a349) main_sp_fs_list_pane

0x6565,	// (0x0008a355) sp_fs_scroll_pane_ParamLimits

0x6565,	// (0x0008a355) sp_fs_scroll_pane

0x6571,	// (0x0008a361) list_medium_line_x2_t3_t1

0x6581,	// (0x0008a371) list_medium_line_x2_t3_t2

0xf061,	// (0x00092e51) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x0009311b) list_medium_line_x2_t3_t

0x658f,	// (0x0008a37f) list_medium_line_x3_t4_t1

0x659f,	// (0x0008a38f) list_medium_line_x3_t4_t2

0xf06f,	// (0x00092e5f) list_medium_line_x3_t4_t3

0xf061,	// (0x00092e51) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x00093122) list_medium_line_x3_t4_t

0x65ad,	// (0x0008a39d) list_medium_line_x4_t5_t1

0x65bd,	// (0x0008a3ad) list_medium_line_x4_t5_t2

0xf06f,	// (0x00092e5f) list_medium_line_x4_t5_t3

0xf07d,	// (0x00092e6d) list_medium_line_x4_t5_t4

0xf061,	// (0x00092e51) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x0009312b) list_medium_line_x4_t5_t

0xec72,	// (0x00092a62) list_medium_line_t4_g4_g1_ParamLimits

0xec72,	// (0x00092a62) list_medium_line_t4_g4_g1

0xed12,	// (0x00092b02) list_medium_line_t4_g4_g2_ParamLimits

0xed12,	// (0x00092b02) list_medium_line_t4_g4_g2

0xf08b,	// (0x00092e7b) list_medium_line_t4_g4_g3_ParamLimits

0xf08b,	// (0x00092e7b) list_medium_line_t4_g4_g3

0xec8a,	// (0x00092a7a) list_medium_line_t4_g4_g4_ParamLimits

0xec8a,	// (0x00092a7a) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x00093136) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x00093136) list_medium_line_t4_g4_g

0xf097,	// (0x00092e87) list_medium_line_t4_g4_t1_ParamLimits

0xf097,	// (0x00092e87) list_medium_line_t4_g4_t1

0xf0ac,	// (0x00092e9c) list_medium_line_t4_g4_t2_ParamLimits

0xf0ac,	// (0x00092e9c) list_medium_line_t4_g4_t2

0xf0c2,	// (0x00092eb2) list_medium_line_t4_g4_t3_ParamLimits

0xf0c2,	// (0x00092eb2) list_medium_line_t4_g4_t3

0xecab,	// (0x00092a9b) list_medium_line_t4_g4_t4_ParamLimits

0xecab,	// (0x00092a9b) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0009313f) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0009313f) list_medium_line_t4_g4_t

0x66de,	// (0x0008a4ce) chi_dic_find_pane_g1

0x7712,	// (0x0008b502) main_tport_pane

0x10b1,	// (0x00084ea1) list_medium_line_plain_t1

0x10c7,	// (0x00084eb7) list_medium_line_t2_g2_g1_ParamLimits

0x10c7,	// (0x00084eb7) list_medium_line_t2_g2_g1

0x10d3,	// (0x00084ec3) list_medium_line_t2_g2_g2_ParamLimits

0x10d3,	// (0x00084ec3) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x000937fb) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x000937fb) list_medium_line_t2_g2_g

0xa2af,	// (0x0008e09f) list_medium_line_t2_g2_t1_ParamLimits

0xa2af,	// (0x0008e09f) list_medium_line_t2_g2_t1

0xa2c6,	// (0x0008e0b6) list_medium_line_t2_g2_t2_ParamLimits

0xa2c6,	// (0x0008e0b6) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x00093800) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x00093800) list_medium_line_t2_g2_t

0x1405,	// (0x000851f5) aid_sp_fs_list_icon_a_sm

0x3606,	// (0x000873f6) aid_sp_fs_list_icon_d

0x360e,	// (0x000873fe) aid_sp_fs_text_primary

0x140d,	// (0x000851fd) aid_sp_fs_text_secondary

0x1416,	// (0x00085206) list_medium_line

0x1416,	// (0x00085206) list_medium_line_g2

0x1416,	// (0x00085206) list_medium_line_g3

0x1416,	// (0x00085206) list_medium_line_plain

0x1416,	// (0x00085206) list_medium_line_plain_t2

0x1416,	// (0x00085206) list_medium_line_plain_t3

0x1416,	// (0x00085206) list_medium_line_right_icon

0x1416,	// (0x00085206) list_medium_line_right_iconx2

0x1416,	// (0x00085206) list_medium_line_t2

0x1416,	// (0x00085206) list_medium_line_t2_g2

0x1416,	// (0x00085206) list_medium_line_t2_g3

0x1416,	// (0x00085206) list_medium_line_t2_right_icon

0x1416,	// (0x00085206) list_medium_line_t2_right_iconx2

0x1416,	// (0x00085206) list_medium_line_t3

0x1416,	// (0x00085206) list_medium_line_t3_g2

0x1416,	// (0x00085206) list_medium_line_t3_g3

0x1416,	// (0x00085206) list_medium_line_t3_right_iconx2

0x141f,	// (0x0008520f) list_medium_line_t4_g4

0x1428,	// (0x00085218) list_medium_line_x2

0x1428,	// (0x00085218) list_medium_line_x2_t2_g2

0x1428,	// (0x00085218) list_medium_line_x2_t2_g3

0x1428,	// (0x00085218) list_medium_line_x2_t2_g4

0x1428,	// (0x00085218) list_medium_line_x2_t3

0x1428,	// (0x00085218) list_medium_line_x2_t3_g2

0x1428,	// (0x00085218) list_medium_line_x2_t3_g3

0x1428,	// (0x00085218) list_medium_line_x2_t3_g4

0x1428,	// (0x00085218) list_medium_line_x2_t4_g2

0x1428,	// (0x00085218) list_medium_line_x2_t4_g4

0x1431,	// (0x00085221) list_medium_line_x3

0x1431,	// (0x00085221) list_medium_line_x3_t4

0x1431,	// (0x00085221) list_medium_line_x3_t4_g4

0x141f,	// (0x0008520f) list_medium_line_x4_t4

0x141f,	// (0x0008520f) list_medium_line_x4_t4_g7

0x141f,	// (0x0008520f) list_medium_line_x4_t5

0x143a,	// (0x0008522a) list_single_fs_dyc_pane_ParamLimits

0x143a,	// (0x0008522a) list_single_fs_dyc_pane

0xec72,	// (0x00092a62) list_medium_line_x4_t4_g7_g1_ParamLimits

0xec72,	// (0x00092a62) list_medium_line_x4_t4_g7_g1

0x1941,	// (0x00085731) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1941,	// (0x00085731) list_medium_line_x4_t4_g7_g2

0x194d,	// (0x0008573d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x194d,	// (0x0008573d) list_medium_line_x4_t4_g7_g3

0x195c,	// (0x0008574c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x195c,	// (0x0008574c) list_medium_line_x4_t4_g7_g4

0x1968,	// (0x00085758) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1968,	// (0x00085758) list_medium_line_x4_t4_g7_g5

0x1977,	// (0x00085767) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1977,	// (0x00085767) list_medium_line_x4_t4_g7_g6

0x1986,	// (0x00085776) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1986,	// (0x00085776) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd4,	// (0x000939c4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd4,	// (0x000939c4) list_medium_line_x4_t4_g7_g

0x1992,	// (0x00085782) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1992,	// (0x00085782) list_medium_line_x4_t4_g7_t1

0x19a7,	// (0x00085797) list_medium_line_x4_t4_g7_t2_ParamLimits

0x19a7,	// (0x00085797) list_medium_line_x4_t4_g7_t2

0x19bc,	// (0x000857ac) list_medium_line_x4_t4_g7_t3_ParamLimits

0x19bc,	// (0x000857ac) list_medium_line_x4_t4_g7_t3

0x19d1,	// (0x000857c1) list_medium_line_x4_t4_g7_t4_ParamLimits

0x19d1,	// (0x000857c1) list_medium_line_x4_t4_g7_t4

0x19e3,	// (0x000857d3) list_medium_line_x4_t4_g7_t5_ParamLimits

0x19e3,	// (0x000857d3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe3,	// (0x000939d3) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe3,	// (0x000939d3) list_medium_line_x4_t4_g7_t

0x19f5,	// (0x000857e5) list_single_dyc_row_pane_ParamLimits

0x19f5,	// (0x000857e5) list_single_dyc_row_pane

0xb721,	// (0x0008f511) call5_gesture_pane_ParamLimits

0xb721,	// (0x0008f511) call5_gesture_pane

0xb757,	// (0x0008f547) call5_windows_pane_ParamLimits

0xb757,	// (0x0008f547) call5_windows_pane

0xb7cf,	// (0x0008f5bf) call5_swipe_1_pane_cp_ParamLimits

0xb7cf,	// (0x0008f5bf) call5_swipe_1_pane_cp

0xb7db,	// (0x0008f5cb) call5_swipe_2_pane_cp_ParamLimits

0xb7db,	// (0x0008f5cb) call5_swipe_2_pane_cp

0xccfa,	// (0x00090aea) call5_image_pane_cp

0xb7e7,	// (0x0008f5d7) popup_call5_audio_first_window_cp_ParamLimits

0xb7e7,	// (0x0008f5d7) popup_call5_audio_first_window_cp

0x2027,	// (0x00085e17) call5_swipe_1_pane_g1_cp_ParamLimits

0x2027,	// (0x00085e17) call5_swipe_1_pane_g1_cp

0x2067,	// (0x00085e57) call5_swipe_1_pane_g2_cp

0x2040,	// (0x00085e30) call5_swipe_1_pane_t1_cp_ParamLimits

0x2040,	// (0x00085e30) call5_swipe_1_pane_t1_cp

0x2027,	// (0x00085e17) call5_swipe_2_pane_g1_cp_ParamLimits

0x2027,	// (0x00085e17) call5_swipe_2_pane_g1_cp

0x206f,	// (0x00085e5f) call5_swipe_2_pane_g2_cp

0x2077,	// (0x00085e67) call5_swipe_2_pane_t1_cp_ParamLimits

0x2077,	// (0x00085e67) call5_swipe_2_pane_t1_cp

0xe401,	// (0x000921f1) main_sp_fs_email_pane

0x208c,	// (0x00085e7c) main_sp_fs_listscroll_pane_te

0x2095,	// (0x00085e85) popup_sp_fs_action_menu_pane_ParamLimits

0x2095,	// (0x00085e85) popup_sp_fs_action_menu_pane

0x0437,	// (0x00084227) bg_sp_fs_ctrlbar_pane_g1

0x20db,	// (0x00085ecb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x20e4,	// (0x00085ed4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x20ed,	// (0x00085edd) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0437,	// (0x00084227) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd1,	// (0x00093ac1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x0216,	// (0x00084006) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x0216,	// (0x00084006) bg_sp_fs_ctrlbar_ddmenu_pane

0x20f6,	// (0x00085ee6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x20f6,	// (0x00085ee6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2102,	// (0x00085ef2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2102,	// (0x00085ef2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcda,	// (0x00093aca) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcda,	// (0x00093aca) main_sp_fs_ctrlbar_ddmenu_pane_g

0x210e,	// (0x00085efe) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x210e,	// (0x00085efe) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x2128,	// (0x00085f18) list_medium_line_t2_right_icon_g1

0xb7f5,	// (0x0008f5e5) list_medium_line_t2_right_icon_t1

0xb805,	// (0x0008f5f5) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdf,	// (0x00093acf) list_medium_line_t2_right_icon_t

0xe105,	// (0x00091ef5) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe105,	// (0x00091ef5) bg_sp_fs_ctrlbar_pane

0xb86c,	// (0x0008f65c) main_sp_fs_ctrlbar_button_pane_cp01

0xb874,	// (0x0008f664) main_sp_fs_ctrlbar_ddmenu_pane

0x216a,	// (0x00085f5a) main_sp_fs_ctrlbar_pane_g1

0x2176,	// (0x00085f66) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce4,	// (0x00093ad4) main_sp_fs_ctrlbar_pane_g

0x2182,	// (0x00085f72) main_sp_fs_ctrlbar_pane_t1

0xb87e,	// (0x0008f66e) main_sp_fs_ctrlbar_pane

0xb898,	// (0x0008f688) main_sp_fs_listscroll_pane_te_cp01

0xb8a9,	// (0x0008f699) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xb8a9,	// (0x0008f699) popup_sp_fs_action_menu_pane_cp01

0xe401,	// (0x000921f1) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe401,	// (0x000921f1) bg_sp_fs_highlight_list_pane_cp01

0x21a7,	// (0x00085f97) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x21a7,	// (0x00085f97) sp_fs_action_menu_list_gene_pane_g1

0x21b6,	// (0x00085fa6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x21b6,	// (0x00085fa6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcee,	// (0x00093ade) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcee,	// (0x00093ade) sp_fs_action_menu_list_gene_pane_g

0x21c3,	// (0x00085fb3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x21c3,	// (0x00085fb3) sp_fs_action_menu_list_gene_pane_t1

0x21db,	// (0x00085fcb) sp_fs_action_menu_list_gene_pane_ParamLimits

0x21db,	// (0x00085fcb) sp_fs_action_menu_list_gene_pane

0x21fe,	// (0x00085fee) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x21fe,	// (0x00085fee) popup_sp_fs_action_menu_bg_pane

0x220c,	// (0x00085ffc) sp_fs_action_menu_list_pane_ParamLimits

0x220c,	// (0x00085ffc) sp_fs_action_menu_list_pane

0x2230,	// (0x00086020) sp_fs_scroll_pane_cp01_ParamLimits

0x2230,	// (0x00086020) sp_fs_scroll_pane_cp01

0xb8d7,	// (0x0008f6c7) list_medium_line_plain_t2_t1

0xb8e7,	// (0x0008f6d7) list_medium_line_plain_t2_t2

0x0001,

0xfcf3,	// (0x00093ae3) list_medium_line_plain_t2_t

0xb8f5,	// (0x0008f6e5) list_medium_line_plain_t3_t1

0xb905,	// (0x0008f6f5) list_medium_line_plain_t3_t2

0xb913,	// (0x0008f703) list_medium_line_plain_t3_t3

0x0002,

0xfcf8,	// (0x00093ae8) list_medium_line_plain_t3_t

0xec72,	// (0x00092a62) list_medium_line_x2_t2_g2_g1_ParamLimits

0xec72,	// (0x00092a62) list_medium_line_x2_t2_g2_g1

0xec8a,	// (0x00092a7a) list_medium_line_x2_t2_g2_g2_ParamLimits

0xec8a,	// (0x00092a7a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x00093046) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x00093046) list_medium_line_x2_t2_g2_g

0xf097,	// (0x00092e87) list_medium_line_x2_t2_g2_t1_ParamLimits

0xf097,	// (0x00092e87) list_medium_line_x2_t2_g2_t1

0xecab,	// (0x00092a9b) list_medium_line_x2_t2_g2_t2_ParamLimits

0xecab,	// (0x00092a9b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcff,	// (0x00093aef) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcff,	// (0x00093aef) list_medium_line_x2_t2_g2_t

0xec72,	// (0x00092a62) list_medium_line_x2_t4_g2_g1_ParamLimits

0xec72,	// (0x00092a62) list_medium_line_x2_t4_g2_g1

0x2256,	// (0x00086046) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2256,	// (0x00086046) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd04,	// (0x00093af4) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd04,	// (0x00093af4) list_medium_line_x2_t4_g2_g

0xb921,	// (0x0008f711) list_medium_line_x2_t4_g2_t1_ParamLimits

0xb921,	// (0x0008f711) list_medium_line_x2_t4_g2_t1

0xb93b,	// (0x0008f72b) list_medium_line_x2_t4_g2_t2_ParamLimits

0xb93b,	// (0x0008f72b) list_medium_line_x2_t4_g2_t2

0xb951,	// (0x0008f741) list_medium_line_x2_t4_g2_t3_ParamLimits

0xb951,	// (0x0008f741) list_medium_line_x2_t4_g2_t3

0xecab,	// (0x00092a9b) list_medium_line_x2_t4_g2_t4_ParamLimits

0xecab,	// (0x00092a9b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd09,	// (0x00093af9) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd09,	// (0x00093af9) list_medium_line_x2_t4_g2_t

0x2268,	// (0x00086058) list_medium_line_t3_right_iconx2_g1

0x2128,	// (0x00085f18) list_medium_line_t3_right_iconx2_g2

0xb966,	// (0x0008f756) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd12,	// (0x00093b02) list_medium_line_t3_right_iconx2_g

0xb96e,	// (0x0008f75e) list_medium_line_t3_right_iconx2_t1

0xb97e,	// (0x0008f76e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd19,	// (0x00093b09) list_medium_line_t3_right_iconx2_t

0xec72,	// (0x00092a62) list_medium_line_x3_t4_g4_g1_ParamLimits

0xec72,	// (0x00092a62) list_medium_line_x3_t4_g4_g1

0xec7e,	// (0x00092a6e) list_medium_line_x3_t4_g4_g2_ParamLimits

0xec7e,	// (0x00092a6e) list_medium_line_x3_t4_g4_g2

0xed12,	// (0x00092b02) list_medium_line_x3_t4_g4_g3_ParamLimits

0xed12,	// (0x00092b02) list_medium_line_x3_t4_g4_g3

0x2270,	// (0x00086060) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2270,	// (0x00086060) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1e,	// (0x00093b0e) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1e,	// (0x00093b0e) list_medium_line_x3_t4_g4_g

0xb98c,	// (0x0008f77c) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb98c,	// (0x0008f77c) list_medium_line_x3_t4_g4_t1

0xb9a3,	// (0x0008f793) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb9a3,	// (0x0008f793) list_medium_line_x3_t4_g4_t2

0x227c,	// (0x0008606c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x227c,	// (0x0008606c) list_medium_line_x3_t4_g4_t3

0x2291,	// (0x00086081) list_medium_line_x3_t4_g4_t4_ParamLimits

0x2291,	// (0x00086081) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd27,	// (0x00093b17) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd27,	// (0x00093b17) list_medium_line_x3_t4_g4_t

0xb9b8,	// (0x0008f7a8) list_single_dyc_row_text_pane_t1_ParamLimits

0xb9b8,	// (0x0008f7a8) list_single_dyc_row_text_pane_t1

0xb9fb,	// (0x0008f7eb) list_single_dyc_row_text_pane_t2_ParamLimits

0xb9fb,	// (0x0008f7eb) list_single_dyc_row_text_pane_t2

0x22ae,	// (0x0008609e) list_single_dyc_row_text_pane_t3_ParamLimits

0x22ae,	// (0x0008609e) list_single_dyc_row_text_pane_t3

0x0002,

0xfd30,	// (0x00093b20) list_single_dyc_row_text_pane_t_ParamLimits

0xfd30,	// (0x00093b20) list_single_dyc_row_text_pane_t

0x22c0,	// (0x000860b0) list_single_dyc_row_pane_g1_ParamLimits

0x22c0,	// (0x000860b0) list_single_dyc_row_pane_g1

0x22cc,	// (0x000860bc) list_single_dyc_row_pane_g2_ParamLimits

0x22cc,	// (0x000860bc) list_single_dyc_row_pane_g2

0x22d8,	// (0x000860c8) list_single_dyc_row_pane_g3_ParamLimits

0x22d8,	// (0x000860c8) list_single_dyc_row_pane_g3

0x22e4,	// (0x000860d4) list_single_dyc_row_pane_g4_ParamLimits

0x22e4,	// (0x000860d4) list_single_dyc_row_pane_g4

0x0003,

0xfd37,	// (0x00093b27) list_single_dyc_row_pane_g_ParamLimits

0xfd37,	// (0x00093b27) list_single_dyc_row_pane_g

0x22f0,	// (0x000860e0) list_single_dyc_row_text_pane_ParamLimits

0x22f0,	// (0x000860e0) list_single_dyc_row_text_pane

0xe2d3,	// (0x000920c3) bg_sp_fs_scroll_pane

0x230f,	// (0x000860ff) thumb_sp_fs_scroll_pane

0x10c7,	// (0x00084eb7) list_medium_line_g1_ParamLimits

0x10c7,	// (0x00084eb7) list_medium_line_g1

0x2318,	// (0x00086108) list_medium_line_t1_ParamLimits

0x2318,	// (0x00086108) list_medium_line_t1

0xec72,	// (0x00092a62) list_medium_line_x2_g1_ParamLimits

0xec72,	// (0x00092a62) list_medium_line_x2_g1

0xec7e,	// (0x00092a6e) list_medium_line_x2_g2_ParamLimits

0xec7e,	// (0x00092a6e) list_medium_line_x2_g2

0x0001,

0xfd40,	// (0x00093b30) list_medium_line_x2_g_ParamLimits

0xfd40,	// (0x00093b30) list_medium_line_x2_g

0x232d,	// (0x0008611d) list_medium_line_x2_t1_ParamLimits

0x232d,	// (0x0008611d) list_medium_line_x2_t1

0xec72,	// (0x00092a62) list_medium_line_x3_g1_ParamLimits

0xec72,	// (0x00092a62) list_medium_line_x3_g1

0xec7e,	// (0x00092a6e) list_medium_line_x3_g2_ParamLimits

0xec7e,	// (0x00092a6e) list_medium_line_x3_g2

0x0001,

0xfd40,	// (0x00093b30) list_medium_line_x3_g_ParamLimits

0xfd40,	// (0x00093b30) list_medium_line_x3_g

0x232d,	// (0x0008611d) list_medium_line_x3_t1_ParamLimits

0x232d,	// (0x0008611d) list_medium_line_x3_t1

0x2343,	// (0x00086133) thumb_sp_fs_scroll_pane_g1

0x234c,	// (0x0008613c) thumb_sp_fs_scroll_pane_g2

0x2355,	// (0x00086145) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd45,	// (0x00093b35) thumb_sp_fs_scroll_pane_g

0x2343,	// (0x00086133) bg_sp_fs_scroll_pane_g1

0x234c,	// (0x0008613c) bg_sp_fs_scroll_pane_g2

0x2355,	// (0x00086145) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd45,	// (0x00093b35) bg_sp_fs_scroll_pane_g

0xec72,	// (0x00092a62) list_medium_line_x2_t3_g4_g1_ParamLimits

0xec72,	// (0x00092a62) list_medium_line_x2_t3_g4_g1

0xed06,	// (0x00092af6) list_medium_line_x2_t3_g4_g2_ParamLimits

0xed06,	// (0x00092af6) list_medium_line_x2_t3_g4_g2

0xec7e,	// (0x00092a6e) list_medium_line_x2_t3_g4_g3_ParamLimits

0xec7e,	// (0x00092a6e) list_medium_line_x2_t3_g4_g3

0xec8a,	// (0x00092a7a) list_medium_line_x2_t3_g4_g4_ParamLimits

0xec8a,	// (0x00092a7a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x000930c2) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x000930c2) list_medium_line_x2_t3_g4_g

0xba55,	// (0x0008f845) list_medium_line_x2_t3_g4_t1_ParamLimits

0xba55,	// (0x0008f845) list_medium_line_x2_t3_g4_t1

0xba6b,	// (0x0008f85b) list_medium_line_x2_t3_g4_t2_ParamLimits

0xba6b,	// (0x0008f85b) list_medium_line_x2_t3_g4_t2

0xecab,	// (0x00092a9b) list_medium_line_x2_t3_g4_t3_ParamLimits

0xecab,	// (0x00092a9b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4c,	// (0x00093b3c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4c,	// (0x00093b3c) list_medium_line_x2_t3_g4_t

0x10c7,	// (0x00084eb7) list_medium_line_g2_g1_ParamLimits

0x10c7,	// (0x00084eb7) list_medium_line_g2_g1

0x10d3,	// (0x00084ec3) list_medium_line_g2_g2_ParamLimits

0x10d3,	// (0x00084ec3) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x000937fb) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x000937fb) list_medium_line_g2_g

0x235e,	// (0x0008614e) list_medium_line_g2_t1_ParamLimits

0x235e,	// (0x0008614e) list_medium_line_g2_t1

0x10c7,	// (0x00084eb7) list_medium_line_t3_g2_g1_ParamLimits

0x10c7,	// (0x00084eb7) list_medium_line_t3_g2_g1

0x10d3,	// (0x00084ec3) list_medium_line_t3_g2_g2_ParamLimits

0x10d3,	// (0x00084ec3) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x000937fb) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x000937fb) list_medium_line_t3_g2_g

0xba84,	// (0x0008f874) list_medium_line_t3_g2_t1_ParamLimits

0xba84,	// (0x0008f874) list_medium_line_t3_g2_t1

0xba9e,	// (0x0008f88e) list_medium_line_t3_g2_t2_ParamLimits

0xba9e,	// (0x0008f88e) list_medium_line_t3_g2_t2

0xbab4,	// (0x0008f8a4) list_medium_line_t3_g2_t3_ParamLimits

0xbab4,	// (0x0008f8a4) list_medium_line_t3_g2_t3

0x0002,

0xfd53,	// (0x00093b43) list_medium_line_t3_g2_t_ParamLimits

0xfd53,	// (0x00093b43) list_medium_line_t3_g2_t

0x2128,	// (0x00085f18) list_medium_line_right_icon_g1

0x2373,	// (0x00086163) list_medium_line_right_icon_t1

0x10c7,	// (0x00084eb7) list_medium_line_t2_g1_ParamLimits

0x10c7,	// (0x00084eb7) list_medium_line_t2_g1

0xbacb,	// (0x0008f8bb) list_medium_line_t2_t1_ParamLimits

0xbacb,	// (0x0008f8bb) list_medium_line_t2_t1

0xbae5,	// (0x0008f8d5) list_medium_line_t2_t2_ParamLimits

0xbae5,	// (0x0008f8d5) list_medium_line_t2_t2

0x0001,

0xfd5a,	// (0x00093b4a) list_medium_line_t2_t_ParamLimits

0xfd5a,	// (0x00093b4a) list_medium_line_t2_t

0x10c7,	// (0x00084eb7) list_medium_line_t3_g1_ParamLimits

0x10c7,	// (0x00084eb7) list_medium_line_t3_g1

0xbafa,	// (0x0008f8ea) list_medium_line_t3_t1_ParamLimits

0xbafa,	// (0x0008f8ea) list_medium_line_t3_t1

0xbb11,	// (0x0008f901) list_medium_line_t3_t2_ParamLimits

0xbb11,	// (0x0008f901) list_medium_line_t3_t2

0xbb26,	// (0x0008f916) list_medium_line_t3_t3_ParamLimits

0xbb26,	// (0x0008f916) list_medium_line_t3_t3

0x0002,

0xfd5f,	// (0x00093b4f) list_medium_line_t3_t_ParamLimits

0xfd5f,	// (0x00093b4f) list_medium_line_t3_t

0x10c7,	// (0x00084eb7) list_medium_line_g3_g1_ParamLimits

0x10c7,	// (0x00084eb7) list_medium_line_g3_g1

0x2381,	// (0x00086171) list_medium_line_g3_g2_ParamLimits

0x2381,	// (0x00086171) list_medium_line_g3_g2

0x10d3,	// (0x00084ec3) list_medium_line_g3_g3_ParamLimits

0x10d3,	// (0x00084ec3) list_medium_line_g3_g3

0x0002,

0xfd66,	// (0x00093b56) list_medium_line_g3_g_ParamLimits

0xfd66,	// (0x00093b56) list_medium_line_g3_g

0x238d,	// (0x0008617d) list_medium_line_g3_t1_ParamLimits

0x238d,	// (0x0008617d) list_medium_line_g3_t1

0x10c7,	// (0x00084eb7) list_medium_line_t2_g3_g1_ParamLimits

0x10c7,	// (0x00084eb7) list_medium_line_t2_g3_g1

0x2381,	// (0x00086171) list_medium_line_t2_g3_g2_ParamLimits

0x2381,	// (0x00086171) list_medium_line_t2_g3_g2

0x10d3,	// (0x00084ec3) list_medium_line_t2_g3_g3_ParamLimits

0x10d3,	// (0x00084ec3) list_medium_line_t2_g3_g3

0x0002,

0xfd66,	// (0x00093b56) list_medium_line_t2_g3_g_ParamLimits

0xfd66,	// (0x00093b56) list_medium_line_t2_g3_g

0xbb38,	// (0x0008f928) list_medium_line_t2_g3_t1_ParamLimits

0xbb38,	// (0x0008f928) list_medium_line_t2_g3_t1

0xbb4f,	// (0x0008f93f) list_medium_line_t2_g3_t2_ParamLimits

0xbb4f,	// (0x0008f93f) list_medium_line_t2_g3_t2

0x0001,

0xfd6d,	// (0x00093b5d) list_medium_line_t2_g3_t_ParamLimits

0xfd6d,	// (0x00093b5d) list_medium_line_t2_g3_t

0x10c7,	// (0x00084eb7) list_medium_line_t3_g3_g1_ParamLimits

0x10c7,	// (0x00084eb7) list_medium_line_t3_g3_g1

0x2381,	// (0x00086171) list_medium_line_t3_g3_g2_ParamLimits

0x2381,	// (0x00086171) list_medium_line_t3_g3_g2

0x10d3,	// (0x00084ec3) list_medium_line_t3_g3_g3_ParamLimits

0x10d3,	// (0x00084ec3) list_medium_line_t3_g3_g3

0x0002,

0xfd66,	// (0x00093b56) list_medium_line_t3_g3_g_ParamLimits

0xfd66,	// (0x00093b56) list_medium_line_t3_g3_g

0xbb64,	// (0x0008f954) list_medium_line_t3_g3_t1_ParamLimits

0xbb64,	// (0x0008f954) list_medium_line_t3_g3_t1

0xbb78,	// (0x0008f968) list_medium_line_t3_g3_t2_ParamLimits

0xbb78,	// (0x0008f968) list_medium_line_t3_g3_t2

0xbb8a,	// (0x0008f97a) list_medium_line_t3_g3_t3_ParamLimits

0xbb8a,	// (0x0008f97a) list_medium_line_t3_g3_t3

0x0002,

0xfd72,	// (0x00093b62) list_medium_line_t3_g3_t_ParamLimits

0xfd72,	// (0x00093b62) list_medium_line_t3_g3_t

0x2268,	// (0x00086058) list_medium_line_right_iconx2_g1

0x2128,	// (0x00085f18) list_medium_line_right_iconx2_g2

0x0001,

0xfd79,	// (0x00093b69) list_medium_line_right_iconx2_g

0x23a2,	// (0x00086192) list_medium_line_right_iconx2_t1

0x2268,	// (0x00086058) list_medium_line_t2_right_iconx2_g1

0x2128,	// (0x00085f18) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd79,	// (0x00093b69) list_medium_line_t2_right_iconx2_g

0xbb9e,	// (0x0008f98e) list_medium_line_t2_right_iconx2_t1

0xbbae,	// (0x0008f99e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7e,	// (0x00093b6e) list_medium_line_t2_right_iconx2_t

0x23b0,	// (0x000861a0) list_medium_line_x4_t4_t1

0xbbbc,	// (0x0008f9ac) list_medium_line_x4_t4_t2

0xbbcc,	// (0x0008f9bc) list_medium_line_x4_t4_t3

0xbbdc,	// (0x0008f9cc) list_medium_line_x4_t4_t4

0x0003,

0xfd83,	// (0x00093b73) list_medium_line_x4_t4_t

0xbc15,	// (0x0008fa05) tport_appsw_pane_ParamLimits

0xbc15,	// (0x0008fa05) tport_appsw_pane

0xbc23,	// (0x0008fa13) tport_contact_pane_ParamLimits

0xbc23,	// (0x0008fa13) tport_contact_pane

0xbc33,	// (0x0008fa23) tport_listscroll_pane_ParamLimits

0xbc33,	// (0x0008fa23) tport_listscroll_pane

0xbc43,	// (0x0008fa33) cell_tport_appsw_pane_ParamLimits

0xbc43,	// (0x0008fa33) cell_tport_appsw_pane

0x06d8,	// (0x000844c8) tport_appsw_pane_g1_ParamLimits

0x06d8,	// (0x000844c8) tport_appsw_pane_g1

0x23be,	// (0x000861ae) tport_contact_pane_g1

0x23c7,	// (0x000861b7) tport_contact_pane_t1

0x23d5,	// (0x000861c5) tport_contact_pane_t2

0x0001,

0xfd8c,	// (0x00093b7c) tport_contact_pane_t

0x23e3,	// (0x000861d3) list_tport_pane

0x23ec,	// (0x000861dc) scroll_pane_cp_030

0x23fd,	// (0x000861ed) cell_tport_appsw_pane_g1

0x240d,	// (0x000861fd) cell_tport_appsw_pane_t1

0xe2d3,	// (0x000920c3) grid_highlight_pane_cp019

0xbc70,	// (0x0008fa60) list_tport_double_graphic_pane_ParamLimits

0xbc70,	// (0x0008fa60) list_tport_double_graphic_pane

0xe401,	// (0x000921f1) list_highlight_pane_cp023_ParamLimits

0xe401,	// (0x000921f1) list_highlight_pane_cp023

0xbc7d,	// (0x0008fa6d) list_tport_double_graphic_pane_g1_ParamLimits

0xbc7d,	// (0x0008fa6d) list_tport_double_graphic_pane_g1

0xbc8a,	// (0x0008fa7a) list_tport_double_graphic_pane_t1_ParamLimits

0xbc8a,	// (0x0008fa7a) list_tport_double_graphic_pane_t1

0xbc9f,	// (0x0008fa8f) list_tport_double_graphic_pane_t2_ParamLimits

0xbc9f,	// (0x0008fa8f) list_tport_double_graphic_pane_t2

0x0001,

0xfd98,	// (0x00093b88) list_tport_double_graphic_pane_t_ParamLimits

0xfd98,	// (0x00093b88) list_tport_double_graphic_pane_t

0xe2d3,	// (0x000920c3) main_cale_note_pane

0x9a61,	// (0x0008d851) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9a61,	// (0x0008d851) cell_vitu2_function_top_wide_pane_cp01

0xb3f4,	// (0x0008f1e4) wait_bar_pane_cp05_ParamLimits

0xe2d3,	// (0x000920c3) listscroll_cmail_pane

0x2423,	// (0x00086213) list_cmail_pane

0xbcbb,	// (0x0008faab) list_cmail_body_pane

0xbcd0,	// (0x0008fac0) list_single_cmail_header_caption_pane

0xbcea,	// (0x0008fada) list_single_cmail_header_detail_pane_ParamLimits

0xbcea,	// (0x0008fada) list_single_cmail_header_detail_pane

0xbd19,	// (0x0008fb09) list_single_cmail_header_caption_pane_t1

0xbd29,	// (0x0008fb19) list_single_cmail_header_detail_pane_g1_ParamLimits

0xbd29,	// (0x0008fb19) list_single_cmail_header_detail_pane_g1

0x3633,	// (0x00087423) list_single_cmail_header_detail_pane_g2_ParamLimits

0x3633,	// (0x00087423) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9d,	// (0x00093b8d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9d,	// (0x00093b8d) list_single_cmail_header_detail_pane_g

0x2450,	// (0x00086240) list_single_cmail_header_detail_pane_t1_ParamLimits

0x2450,	// (0x00086240) list_single_cmail_header_detail_pane_t1

0x248e,	// (0x0008627e) list_single_cmail_header_editor_pane_bg_ParamLimits

0x248e,	// (0x0008627e) list_single_cmail_header_editor_pane_bg

0x1cb5,	// (0x00085aa5) list_cmail_body_pane_g1

0x24a0,	// (0x00086290) list_cmail_body_pane_t1

0x0e6c,	// (0x00084c5c) list_single_cmail_header_editor_pane_bg_g1

0xef2b,	// (0x00092d1b) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0e7c,	// (0x00084c6c) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0e74,	// (0x00084c64) list_single_cmail_header_editor_pane_bg_g1_copy3

0x10bf,	// (0x00084eaf) list_single_cmail_header_editor_pane_bg_g1_copy4

0x0e9c,	// (0x00084c8c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x0e8c,	// (0x00084c7c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0e94,	// (0x00084c84) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xef0b,	// (0x00092cfb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xbd67,	// (0x0008fb57) calenote_gesture_pane_ParamLimits

0xbd67,	// (0x0008fb57) calenote_gesture_pane

0xbd81,	// (0x0008fb71) calenote_window_pane_ParamLimits

0xbd81,	// (0x0008fb71) calenote_window_pane

0x24ae,	// (0x0008629e) popup_note_window_cp01

0xbd99,	// (0x0008fb89) calenote_swipe_1_pane_ParamLimits

0xbd99,	// (0x0008fb89) calenote_swipe_1_pane

0xb7db,	// (0x0008f5cb) calenote_swipe_2_pane_ParamLimits

0xb7db,	// (0x0008f5cb) calenote_swipe_2_pane

0x2027,	// (0x00085e17) calenote_swipe_1_pane_g1_ParamLimits

0x2027,	// (0x00085e17) calenote_swipe_1_pane_g1

0x2034,	// (0x00085e24) calenote_swipe_1_pane_g2_ParamLimits

0x2034,	// (0x00085e24) calenote_swipe_1_pane_g2

0x0001,

0xfcc7,	// (0x00093ab7) calenote_swipe_1_pane_g_ParamLimits

0xfcc7,	// (0x00093ab7) calenote_swipe_1_pane_g

0x24c0,	// (0x000862b0) calenote_swipe_1_pane_t1_ParamLimits

0x24c0,	// (0x000862b0) calenote_swipe_1_pane_t1

0x2027,	// (0x00085e17) calenote_swipe_2_pane_g1_ParamLimits

0x2027,	// (0x00085e17) calenote_swipe_2_pane_g1

0x24df,	// (0x000862cf) calenote_swipe_2_pane_g2_ParamLimits

0x24df,	// (0x000862cf) calenote_swipe_2_pane_g2

0x0001,

0xfda9,	// (0x00093b99) calenote_swipe_2_pane_g_ParamLimits

0xfda9,	// (0x00093b99) calenote_swipe_2_pane_g

0x24eb,	// (0x000862db) calenote_swipe_2_pane_t1_ParamLimits

0x24eb,	// (0x000862db) calenote_swipe_2_pane_t1

0xe2d3,	// (0x000920c3) main_mup_navstr_pane

0x8776,	// (0x0008c566) main_mup3_pane_t7_ParamLimits

0x8776,	// (0x0008c566) main_mup3_pane_t7

0x917b,	// (0x0008cf6b) main_mp4_pane_g6_ParamLimits

0x917b,	// (0x0008cf6b) main_mp4_pane_g6

0x94f9,	// (0x0008d2e9) main_image3_pane_t4_ParamLimits

0x94f9,	// (0x0008d2e9) main_image3_pane_t4

0xbdac,	// (0x0008fb9c) popup_navstr_preview_pane_ParamLimits

0xbdac,	// (0x0008fb9c) popup_navstr_preview_pane

0xbdb8,	// (0x0008fba8) scroll_navstr_pane_ParamLimits

0xbdb8,	// (0x0008fba8) scroll_navstr_pane

0xe2d3,	// (0x000920c3) bg_popup_preview_window_pane_cp04

0x2512,	// (0x00086302) popup_navstr_preview_pane_t1

0xbdc4,	// (0x0008fbb4) scroll_navstr_pane_g1_ParamLimits

0xbdc4,	// (0x0008fbb4) scroll_navstr_pane_g1

0xbdd1,	// (0x0008fbc1) scroll_navstr_pane_t1_ParamLimits

0xbdd1,	// (0x0008fbc1) scroll_navstr_pane_t1

0x24b7,	// (0x000862a7) bg_button_pane_cp014

0x24b7,	// (0x000862a7) bg_button_pane_cp030

0xb6c7,	// (0x0008f4b7) list_double_fisheye_pane_g4_ParamLimits

0xb6c7,	// (0x0008f4b7) list_double_fisheye_pane_g4

0xb6d3,	// (0x0008f4c3) list_double_fisheye_pane_g5_ParamLimits

0xb6d3,	// (0x0008f4c3) list_double_fisheye_pane_g5

0x242b,	// (0x0008621b) sp_fs_scroll_pane_cp03

0x216a,	// (0x00085f5a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2176,	// (0x00085f66) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce4,	// (0x00093ad4) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x2182,	// (0x00085f72) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xbcb1,	// (0x0008faa1) sp_fs_scroll_pane_cp02

0xeb77,	// (0x00092967) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xeb77,	// (0x00092967) popup_sp_fs_calendar_preview_list_single_pane

0xe2d3,	// (0x000920c3) main_cam6_pano_pane

0x76f6,	// (0x0008b4e6) main_mup3_pane_ParamLimits

0xe2d3,	// (0x000920c3) main_phacti_pane

0xb2c7,	// (0x0008f0b7) bg_button_pane_cp11

0xb2df,	// (0x0008f0cf) main_mobtv_info_pane_g2_ParamLimits

0xb2df,	// (0x0008f0cf) main_mobtv_info_pane_g2

0x0001,

0xfc44,	// (0x00093a34) main_mobtv_info_pane_g_ParamLimits

0xfc44,	// (0x00093a34) main_mobtv_info_pane_g

0xb491,	// (0x0008f281) sc_clock_pane_t5_ParamLimits

0xb491,	// (0x0008f281) sc_clock_pane_t5

0xb53a,	// (0x0008f32a) main_radioblah_pane_g1_ParamLimits

0x1f59,	// (0x00085d49) main_radioblah_pane_t3_ParamLimits

0x1f59,	// (0x00085d49) main_radioblah_pane_t3

0x1f71,	// (0x00085d61) main_radioblah_pane_t4_ParamLimits

0x1f71,	// (0x00085d61) main_radioblah_pane_t4

0xb558,	// (0x0008f348) main_radioblah_text_pane_ParamLimits

0xb558,	// (0x0008f348) main_radioblah_text_pane

0xb565,	// (0x0008f355) main_radioblah_info_pane_g1_ParamLimits

0xb5fe,	// (0x0008f3ee) main_radioblah_info_pane_t4_ParamLimits

0xb5fe,	// (0x0008f3ee) main_radioblah_info_pane_t4

0xe401,	// (0x000921f1) main_sp_fs_calendar_pane

0xbde3,	// (0x0008fbd3) main_phacti_pane_g1

0xbdeb,	// (0x0008fbdb) phacti_note_pane_ParamLimits

0xbdeb,	// (0x0008fbdb) phacti_note_pane

0x2529,	// (0x00086319) phacti_term_pane_ParamLimits

0x2529,	// (0x00086319) phacti_term_pane

0x253e,	// (0x0008632e) phacti_note_pane_t1_ParamLimits

0x253e,	// (0x0008632e) phacti_note_pane_t1

0x2555,	// (0x00086345) phacti_term_pane_g1

0x255d,	// (0x0008634d) phacti_term_pane_t1_ParamLimits

0x255d,	// (0x0008634d) phacti_term_pane_t1

0x2587,	// (0x00086377) popup_sp_fs_calendar_preview_list_single_pane_g1

0x258f,	// (0x0008637f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb3,	// (0x00093ba3) popup_sp_fs_calendar_preview_list_single_pane_g

0x2597,	// (0x00086387) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2597,	// (0x00086387) popup_sp_fs_calendar_preview_list_single_pane_t1

0x25ad,	// (0x0008639d) aid_popup_sp_fs_bg_corner_pane

0x0437,	// (0x00084227) popup_sp_fs_calendar_preview_bg_pane_g1

0xe2d3,	// (0x000920c3) popup_sp_fs_calendar_preview_bg_pane

0x25b5,	// (0x000863a5) popup_sp_fs_calendar_preview_list_pane

0xe401,	// (0x000921f1) bg_main_sp_fs_cale_pane_ParamLimits

0xe401,	// (0x000921f1) bg_main_sp_fs_cale_pane

0x25c6,	// (0x000863b6) listscroll_cale_mrui_pane_ParamLimits

0x25c6,	// (0x000863b6) listscroll_cale_mrui_pane

0x25da,	// (0x000863ca) listscroll_sp_fs_schedule_track_pane

0x25e3,	// (0x000863d3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x25e3,	// (0x000863d3) main_sp_fs_ctrlbar_pane_cp01

0x25f4,	// (0x000863e4) main_sp_fs_ribbon_pane

0x25fc,	// (0x000863ec) popup_sp_fs_cale_preview_window

0xbe32,	// (0x0008fc22) list_single_sp_fs_schedule_track_pane_ParamLimits

0xbe32,	// (0x0008fc22) list_single_sp_fs_schedule_track_pane

0x8dd1,	// (0x0008cbc1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x8dd1,	// (0x0008cbc1) bg_sp_fs_highlight_list_pane_cp03

0xbe46,	// (0x0008fc36) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xbe46,	// (0x0008fc36) list_single_sp_fs_schedule_track_pane_g1

0xbe52,	// (0x0008fc42) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xbe52,	// (0x0008fc42) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb8,	// (0x00093ba8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb8,	// (0x00093ba8) list_single_sp_fs_schedule_track_pane_g

0xbe5e,	// (0x0008fc4e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xbe5e,	// (0x0008fc4e) list_single_sp_fs_schedule_track_pane_t1

0xbe7c,	// (0x0008fc6c) sp_fs_schedule_track_pane_ParamLimits

0xbe7c,	// (0x0008fc6c) sp_fs_schedule_track_pane

0x260e,	// (0x000863fe) sp_fs_schedule_track_pane_g1

0x2616,	// (0x00086406) sp_fs_schedule_track_pane_g2

0x261e,	// (0x0008640e) sp_fs_schedule_track_pane_g3

0x2626,	// (0x00086416) sp_fs_schedule_track_pane_g4

0x262e,	// (0x0008641e) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbd,	// (0x00093bad) sp_fs_schedule_track_pane_g

0x0e6c,	// (0x00084c5c) bg_sp_fs_schedule_viewer_highlight_g1

0xef2b,	// (0x00092d1b) bg_sp_fs_schedule_viewer_highlight_g2

0x0e74,	// (0x00084c64) bg_sp_fs_schedule_viewer_highlight_g3

0x0e7c,	// (0x00084c6c) bg_sp_fs_schedule_viewer_highlight_g4

0x10bf,	// (0x00084eaf) bg_sp_fs_schedule_viewer_highlight_g5

0x0e8c,	// (0x00084c7c) bg_sp_fs_schedule_viewer_highlight_g6

0x0e94,	// (0x00084c84) bg_sp_fs_schedule_viewer_highlight_g7

0x0e9c,	// (0x00084c8c) bg_sp_fs_schedule_viewer_highlight_g8

0xef0b,	// (0x00092cfb) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc8,	// (0x00093bb8) bg_sp_fs_schedule_viewer_highlight_g

0xe2d3,	// (0x000920c3) bg_main_sp_fs_ribbon_pane

0xbe8e,	// (0x0008fc7e) main_sp_fs_ribbon_pane_g1

0x2636,	// (0x00086426) main_sp_fs_ribbon_pane_t1

0xbe97,	// (0x0008fc87) main_sp_fs_ribbon_pane_t2

0x2645,	// (0x00086435) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddb,	// (0x00093bcb) main_sp_fs_ribbon_pane_t

0x2654,	// (0x00086444) main_sp_fs_ribbon_scheduler_pane

0x265c,	// (0x0008644c) bg_main_sp_fs_ribbon_pane_g1

0x2665,	// (0x00086455) bg_main_sp_fs_ribbon_pane_g2

0x266e,	// (0x0008645e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde2,	// (0x00093bd2) bg_main_sp_fs_ribbon_pane_g

0x2676,	// (0x00086466) main_sp_fs_ribbon_scheduler_pane_g1

0x267f,	// (0x0008646f) main_sp_fs_ribbon_scheduler_pane_g2

0x2688,	// (0x00086478) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde9,	// (0x00093bd9) main_sp_fs_ribbon_scheduler_pane_g

0x2691,	// (0x00086481) list_cale_mrui_pane

0xbea6,	// (0x0008fc96) sp_fs_scroll_pane_cp07_ParamLimits

0xbea6,	// (0x0008fc96) sp_fs_scroll_pane_cp07

0xbebc,	// (0x0008fcac) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xbebc,	// (0x0008fcac) bg_sp_fs_schedule_viewer_highlight

0x269a,	// (0x0008648a) list_single_sp_fs_schedule_track_pane_cp01

0x26a2,	// (0x00086492) list_sp_fs_schedule_track_pane

0x26aa,	// (0x0008649a) sp_fs_scroll_pane_cp06_ParamLimits

0x26aa,	// (0x0008649a) sp_fs_scroll_pane_cp06

0x0437,	// (0x00084227) bgmain_sp_fs_calendar_pane_g1

0xbec9,	// (0x0008fcb9) list_single_cale_mrui_pane_ParamLimits

0xbec9,	// (0x0008fcb9) list_single_cale_mrui_pane

0x26bc,	// (0x000864ac) list_single_cale_mrui_row_pane_ParamLimits

0x26bc,	// (0x000864ac) list_single_cale_mrui_row_pane

0x26c9,	// (0x000864b9) list_single_cale_mrui_row_pane_g1_ParamLimits

0x26c9,	// (0x000864b9) list_single_cale_mrui_row_pane_g1

0x270e,	// (0x000864fe) list_single_cale_mrui_row_pane_t1_ParamLimits

0x270e,	// (0x000864fe) list_single_cale_mrui_row_pane_t1

0xbef0,	// (0x0008fce0) list_single_cale_mrui_row_pane_t2_ParamLimits

0xbef0,	// (0x0008fce0) list_single_cale_mrui_row_pane_t2

0x2720,	// (0x00086510) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2720,	// (0x00086510) list_single_cale_mrui_row_pane_t3

0x274f,	// (0x0008653f) list_single_cale_mrui_row_pane_t4_ParamLimits

0x274f,	// (0x0008653f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf7,	// (0x00093be7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf7,	// (0x00093be7) list_single_cale_mrui_row_pane_t

0xbf56,	// (0x0008fd46) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xbf56,	// (0x0008fd46) list_single_cmail_header_editor_pane_bg_cp01

0xbf78,	// (0x0008fd68) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xbf78,	// (0x0008fd68) list_single_cmail_header_editor_pane_bg_cp02

0xbf94,	// (0x0008fd84) main_radioblah_text_pane_t1_ParamLimits

0xbf94,	// (0x0008fd84) main_radioblah_text_pane_t1

0x277e,	// (0x0008656e) cam6_indi_pane_cp01

0x2786,	// (0x00086576) cam6_mode_pane_cp01

0x278e,	// (0x0008657e) cam6_pano_pane

0x2797,	// (0x00086587) cam6_zoom_pane_cp01

0x27a1,	// (0x00086591) cam6_pano_image_pane

0x27aa,	// (0x0008659a) cam6_pano_pane_g1

0x1cb5,	// (0x00085aa5) cam6_pano_pane_g2

0x27b3,	// (0x000865a3) cam6_pano_pane_g3

0x27bc,	// (0x000865ac) cam6_pano_pane_g4

0x09cd,	// (0x000847bd) cam6_pano_pane_g5

0x27c5,	// (0x000865b5) cam6_pano_pane_g6

0x27cd,	// (0x000865bd) cam6_pano_pane_g7

0x27d5,	// (0x000865c5) cam6_pano_pane_g8

0x27de,	// (0x000865ce) cam6_pano_pane_g9

0x0008,

0xfe00,	// (0x00093bf0) cam6_pano_pane_g

0xe2d3,	// (0x000920c3) main_browser_tag_pane

0x250a,	// (0x000862fa) grid_navstr_albumart_pane

0x27e9,	// (0x000865d9) cell_navstr_albumart_pane_ParamLimits

0x27e9,	// (0x000865d9) cell_navstr_albumart_pane

0x2805,	// (0x000865f5) cell_navstr_albumart_pane_g1

0xdf1e,	// (0x00091d0e) cell_navstr_albumart_pane_g2

0xdf2e,	// (0x00091d1e) cell_navstr_albumart_pane_g3

0xdf26,	// (0x00091d16) cell_navstr_albumart_pane_g4

0x0003,

0xfe13,	// (0x00093c03) cell_navstr_albumart_pane_g

0xbfae,	// (0x0008fd9e) bt_list_pane_ParamLimits

0xbfae,	// (0x0008fd9e) bt_list_pane

0xbfc7,	// (0x0008fdb7) bt_list_pane_t1

0xbfd6,	// (0x0008fdc6) bt_list_pane_t2

0x0001,

0xfe1c,	// (0x00093c0c) bt_list_pane_t

0xe2d3,	// (0x000920c3) main_cale_prevew_pane

0xbfe5,	// (0x0008fdd5) popup_cale_preview_window_ParamLimits

0xbfe5,	// (0x0008fdd5) popup_cale_preview_window

0xe401,	// (0x000921f1) bg_popup_preview_window_pane_cp05_ParamLimits

0xe401,	// (0x000921f1) bg_popup_preview_window_pane_cp05

0x280d,	// (0x000865fd) list_cale_preview_pane_ParamLimits

0x280d,	// (0x000865fd) list_cale_preview_pane

0xc000,	// (0x0008fdf0) list_double_cale_preview_pane_ParamLimits

0xc000,	// (0x0008fdf0) list_double_cale_preview_pane

0xc014,	// (0x0008fe04) list_single_cale_preview_pane_ParamLimits

0xc014,	// (0x0008fe04) list_single_cale_preview_pane

0xc02c,	// (0x0008fe1c) list_single_cale_preview_pane_g1

0xc034,	// (0x0008fe24) list_single_cale_preview_pane_t1_ParamLimits

0xc034,	// (0x0008fe24) list_single_cale_preview_pane_t1

0xc049,	// (0x0008fe39) list_double_cale_preview_pane_g1

0xc051,	// (0x0008fe41) list_double_cale_preview_pane_t1_ParamLimits

0xc051,	// (0x0008fe41) list_double_cale_preview_pane_t1

0xc066,	// (0x0008fe56) list_double_cale_preview_pane_t2_ParamLimits

0xc066,	// (0x0008fe56) list_double_cale_preview_pane_t2

0x0001,

0xfe21,	// (0x00093c11) list_double_cale_preview_pane_t_ParamLimits

0xfe21,	// (0x00093c11) list_double_cale_preview_pane_t

0xe2d3,	// (0x000920c3) main_ezdial_pane

0xe401,	// (0x000921f1) main_sp_fs_email_pane_ParamLimits

0xb813,	// (0x0008f603) cmail_ddmenu_btn01_pane_ParamLimits

0xb813,	// (0x0008f603) cmail_ddmenu_btn01_pane

0xb830,	// (0x0008f620) cmail_ddmenu_btn02_pane_ParamLimits

0xb830,	// (0x0008f620) cmail_ddmenu_btn02_pane

0xb84e,	// (0x0008f63e) cmail_ddmenu_btn03_pane_ParamLimits

0xb84e,	// (0x0008f63e) cmail_ddmenu_btn03_pane

0xb87e,	// (0x0008f66e) main_sp_fs_ctrlbar_pane_ParamLimits

0xb898,	// (0x0008f688) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xbcbb,	// (0x0008faab) list_cmail_body_pane_ParamLimits

0x243a,	// (0x0008622a) bg_button_pane_cp12

0x2443,	// (0x00086233) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2443,	// (0x00086233) list_single_cmail_header_detail_pane_g3

0xbd41,	// (0x0008fb31) list_single_cmail_header_detail_pane_t2_ParamLimits

0xbd41,	// (0x0008fb31) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda4,	// (0x00093b94) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda4,	// (0x00093b94) list_single_cmail_header_detail_pane_t

0x2572,	// (0x00086362) phacti_term_pane_t2_ParamLimits

0x2572,	// (0x00086362) phacti_term_pane_t2

0x0001,

0xfdae,	// (0x00093b9e) phacti_term_pane_t_ParamLimits

0xfdae,	// (0x00093b9e) phacti_term_pane_t

0x2819,	// (0x00086609) aid_size_list_single_double

0xc07e,	// (0x0008fe6e) popup_ezdial_listscroll_window

0xc09e,	// (0x0008fe8e) popup_number_entry_window_cp01

0xccfa,	// (0x00090aea) bg_popup_call_pane_cp09

0x2825,	// (0x00086615) ezdial_list_pane

0x282d,	// (0x0008661d) scroll_pane_cp23

0x0216,	// (0x00084006) bg_button_pane_cp028_ParamLimits

0x0216,	// (0x00084006) bg_button_pane_cp028

0xc0ac,	// (0x0008fe9c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc0ac,	// (0x0008fe9c) cmail_ddmenu_btn01_pane_g1

0xc0be,	// (0x0008feae) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc0be,	// (0x0008feae) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe26,	// (0x00093c16) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe26,	// (0x00093c16) cmail_ddmenu_btn01_pane_g

0x2835,	// (0x00086625) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2835,	// (0x00086625) cmail_ddmenu_btn01_pane_t1

0xe105,	// (0x00091ef5) bg_button_pane_cp029_ParamLimits

0xe105,	// (0x00091ef5) bg_button_pane_cp029

0xc0be,	// (0x0008feae) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc0be,	// (0x0008feae) cmail_ddmenu_btn02_pane_g1

0xc0d6,	// (0x0008fec6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc0d6,	// (0x0008fec6) cmail_ddmenu_btn02_pane_t1

0x8dd1,	// (0x0008cbc1) bg_button_pane_cp031_ParamLimits

0x8dd1,	// (0x0008cbc1) bg_button_pane_cp031

0xc0be,	// (0x0008feae) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc0be,	// (0x0008feae) cmail_ddmenu_btn03_pane_g1

0xc0d6,	// (0x0008fec6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc0d6,	// (0x0008fec6) cmail_ddmenu_btn03_pane_t1

0x9394,	// (0x0008d184) cell_dialer2_keypad_pane_t1_ParamLimits

0x93ae,	// (0x0008d19e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x93ae,	// (0x0008d19e) cell_dialer2_keypad_pane_t1_copy1

0xb138,	// (0x0008ef28) ncimui_group_button_pane

0xe401,	// (0x000921f1) main_sp_fs_calendar_pane_ParamLimits

0xbcd0,	// (0x0008fac0) list_single_cmail_header_caption_pane_ParamLimits

0x25bd,	// (0x000863ad) aid_recal_txt_sm_pane

0xe2d3,	// (0x000920c3) mian_recal_day_pane

0x25fc,	// (0x000863ec) popup_sp_fs_cale_preview_window_ParamLimits

0xe2d3,	// (0x000920c3) list_recal_day_pane

0x2864,	// (0x00086654) list_single_recal_day_pane_ParamLimits

0x2864,	// (0x00086654) list_single_recal_day_pane

0x2876,	// (0x00086666) list_single_recal_day_pane_g1_ParamLimits

0x2876,	// (0x00086666) list_single_recal_day_pane_g1

0x2882,	// (0x00086672) list_single_recal_day_pane_g2_ParamLimits

0x2882,	// (0x00086672) list_single_recal_day_pane_g2

0x2892,	// (0x00086682) list_single_recal_day_pane_g3_ParamLimits

0x2892,	// (0x00086682) list_single_recal_day_pane_g3

0xc0fa,	// (0x0008feea) list_single_recal_day_pane_g4_ParamLimits

0xc0fa,	// (0x0008feea) list_single_recal_day_pane_g4

0x289e,	// (0x0008668e) list_single_recal_day_pane_g5_ParamLimits

0x289e,	// (0x0008668e) list_single_recal_day_pane_g5

0x28ae,	// (0x0008669e) list_single_recal_day_pane_g6_ParamLimits

0x28ae,	// (0x0008669e) list_single_recal_day_pane_g6

0x0004,

0xfe35,	// (0x00093c25) list_single_recal_day_pane_g_ParamLimits

0xfe35,	// (0x00093c25) list_single_recal_day_pane_g

0x28c5,	// (0x000866b5) list_single_recal_day_pane_t1

0x28d7,	// (0x000866c7) list_single_recal_day_pane_t2

0x0001,

0xfe40,	// (0x00093c30) list_single_recal_day_pane_t

0xc11a,	// (0x0008ff0a) ncimui_query_button_pane_ParamLimits

0xc11a,	// (0x0008ff0a) ncimui_query_button_pane

0xc12a,	// (0x0008ff1a) ncimui_query_button_pane_t1_ParamLimits

0xc12a,	// (0x0008ff1a) ncimui_query_button_pane_t1

0x28ec,	// (0x000866dc) ncimui_query_button_pane_t2_ParamLimits

0x28ec,	// (0x000866dc) ncimui_query_button_pane_t2

0x0001,

0xfe45,	// (0x00093c35) ncimui_query_button_pane_t_ParamLimits

0xfe45,	// (0x00093c35) ncimui_query_button_pane_t

0xc13d,	// (0x0008ff2d) query_button_pane_ParamLimits

0xc13d,	// (0x0008ff2d) query_button_pane

0xe2d3,	// (0x000920c3) bg_button_pane_cp0028

0x28ff,	// (0x000866ef) query_button_pane_t1

0x7712,	// (0x0008b502) main_tport_pane_ParamLimits

0xbbec,	// (0x0008f9dc) bg_popup_window_pane_cp01_ParamLimits

0xbbec,	// (0x0008f9dc) bg_popup_window_pane_cp01

0xbbf9,	// (0x0008f9e9) heading_pane_cp08_ParamLimits

0xbbf9,	// (0x0008f9e9) heading_pane_cp08

0xbc07,	// (0x0008f9f7) heading_pane_cp07_ParamLimits

0xbc07,	// (0x0008f9f7) heading_pane_cp07

0x23fd,	// (0x000861ed) cell_tport_appsw_pane_g2

0x0002,

0xfd91,	// (0x00093b81) cell_tport_appsw_pane_g

0x001f,	// (0x00083e0f) input_candi_list_open_g1

0x2f5f,	// (0x00086d4f) list_cale_time_pane_g6_ParamLimits

0x2f5f,	// (0x00086d4f) list_cale_time_pane_g6

0x81a1,	// (0x0008bf91) aid_size_touch_calib_1_ParamLimits

0x81a1,	// (0x0008bf91) aid_size_touch_calib_1

0x81ad,	// (0x0008bf9d) aid_size_touch_calib_2_ParamLimits

0x81ad,	// (0x0008bf9d) aid_size_touch_calib_2

0x81bb,	// (0x0008bfab) aid_size_touch_calib_3_ParamLimits

0x81bb,	// (0x0008bfab) aid_size_touch_calib_3

0x81cb,	// (0x0008bfbb) aid_size_touch_calib_4_ParamLimits

0x81cb,	// (0x0008bfbb) aid_size_touch_calib_4

0x81d9,	// (0x0008bfc9) main_touch_calib_button_group_pane_ParamLimits

0x81d9,	// (0x0008bfc9) main_touch_calib_button_group_pane

0x81e7,	// (0x0008bfd7) main_touch_calib_pane_g1_ParamLimits

0x81f3,	// (0x0008bfe3) main_touch_calib_pane_g2_ParamLimits

0x81ff,	// (0x0008bfef) main_touch_calib_pane_g3_ParamLimits

0x820b,	// (0x0008bffb) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x00093551) main_touch_calib_pane_g_ParamLimits

0x8217,	// (0x0008c007) main_touch_calib_pane_t1_ParamLimits

0x822e,	// (0x0008c01e) main_touch_calib_pane_t2_ParamLimits

0x8247,	// (0x0008c037) main_touch_calib_pane_t3_ParamLimits

0x825d,	// (0x0008c04d) main_touch_calib_pane_t4_ParamLimits

0x8273,	// (0x0008c063) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x0009355a) main_touch_calib_pane_t_ParamLimits

0x0797,	// (0x00084587) list_single_fp_cale_pane_g3_ParamLimits

0x0797,	// (0x00084587) list_single_fp_cale_pane_g3

0x76f6,	// (0x0008b4e6) bg_button_pane_cp012_ParamLimits

0x76f6,	// (0x0008b4e6) bg_vkb2_func_pane_cp03_ParamLimits

0xa234,	// (0x0008e024) cell_vitu2_function_top_pane_g1_ParamLimits

0x76f6,	// (0x0008b4e6) bg_vkb2_func_pane_cp04_ParamLimits

0xb0c0,	// (0x0008eeb0) main_ncimui_button_group_pane_ParamLimits

0xb0c0,	// (0x0008eeb0) main_ncimui_button_group_pane

0xb126,	// (0x0008ef16) main_ncimui_pane_t3_ParamLimits

0xb126,	// (0x0008ef16) main_ncimui_pane_t3

0x2520,	// (0x00086310) phacti_button_group_pane

0x2819,	// (0x00086609) aid_size_list_single_double_ParamLimits

0xc07e,	// (0x0008fe6e) popup_ezdial_listscroll_window_ParamLimits

0xc09e,	// (0x0008fe8e) popup_number_entry_window_cp01_ParamLimits

0xc14a,	// (0x0008ff3a) phacti_button_pane_ParamLimits

0xc14a,	// (0x0008ff3a) phacti_button_pane

0xe2d3,	// (0x000920c3) bg_button_pane_cp14

0x290d,	// (0x000866fd) phacti_button_pane_t1

0xc15b,	// (0x0008ff4b) main_touch_calib_button_pane_ParamLimits

0xc15b,	// (0x0008ff4b) main_touch_calib_button_pane

0xea61,	// (0x00092851) bg_button_pane_cp18_ParamLimits

0xea61,	// (0x00092851) bg_button_pane_cp18

0x291b,	// (0x0008670b) main_touch_calib_button_pane_t1_ParamLimits

0x291b,	// (0x0008670b) main_touch_calib_button_pane_t1

0x2931,	// (0x00086721) main_touch_calib_button_pane_t2_ParamLimits

0x2931,	// (0x00086721) main_touch_calib_button_pane_t2

0x0001,

0xfe4a,	// (0x00093c3a) main_touch_calib_button_pane_t_ParamLimits

0xfe4a,	// (0x00093c3a) main_touch_calib_button_pane_t

0xe2d3,	// (0x000920c3) cell_ncimui_button_pane

0xe2d3,	// (0x000920c3) bg_button_pane_cp032

0x294f,	// (0x0008673f) cell_ncimui_button_pane_t1

0x940a,	// (0x0008d1fa) image3_infobar_pane_ParamLimits

0x940a,	// (0x0008d1fa) image3_infobar_pane

0xb4b3,	// (0x0008f2a3) fs_bigclock_status_pane_ParamLimits

0xb4b3,	// (0x0008f2a3) fs_bigclock_status_pane

0xb4c0,	// (0x0008f2b0) main_fs_bigclock_clock_pane_ParamLimits

0xb4c0,	// (0x0008f2b0) main_fs_bigclock_clock_pane

0xb4d6,	// (0x0008f2c6) main_fs_bigclock_indi_pane_ParamLimits

0xb4d6,	// (0x0008f2c6) main_fs_bigclock_indi_pane

0xb508,	// (0x0008f2f8) main_fs_bigclock_swipe_pane_ParamLimits

0xb508,	// (0x0008f2f8) main_fs_bigclock_swipe_pane

0xe2d3,	// (0x000920c3) main_fs_clock_dumped_data

0x1dc2,	// (0x00085bb2) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x1dc2,	// (0x00085bb2) list_single_fs_bigclock_indicator_pane_g1

0x1dec,	// (0x00085bdc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x1dec,	// (0x00085bdc) list_single_fs_bigclock_indicator_pane_g2

0x1e06,	// (0x00085bf6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x1e06,	// (0x00085bf6) list_single_fs_bigclock_indicator_pane_g3

0x1e20,	// (0x00085c10) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x1e20,	// (0x00085c10) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc78,	// (0x00093a68) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc78,	// (0x00093a68) list_single_fs_bigclock_indicator_pane_g

0x1e4b,	// (0x00085c3b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1e4b,	// (0x00085c3b) list_single_fs_bigclock_indicator_pane_t1

0x1e73,	// (0x00085c63) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x1e73,	// (0x00085c63) list_single_fs_bigclock_indicator_pane_t2

0x1e9b,	// (0x00085c8b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x1e9b,	// (0x00085c8b) list_single_fs_bigclock_indicator_pane_t3

0x1ec3,	// (0x00085cb3) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x1ec3,	// (0x00085cb3) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc83,	// (0x00093a73) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc83,	// (0x00093a73) list_single_fs_bigclock_indicator_pane_t

0x295d,	// (0x0008674d) image3_infobar_fav_pane_ParamLimits

0x295d,	// (0x0008674d) image3_infobar_fav_pane

0x296d,	// (0x0008675d) image3_infobar_loc_pane_ParamLimits

0x296d,	// (0x0008675d) image3_infobar_loc_pane

0x2983,	// (0x00086773) image3_infobar_time_pane_ParamLimits

0x2983,	// (0x00086773) image3_infobar_time_pane

0x0437,	// (0x00084227) image3_infobar_time_pane_g1

0x2993,	// (0x00086783) image3_infobar_time_pane_t1

0x0437,	// (0x00084227) image3_infobar_loc_pane_g1

0x29a1,	// (0x00086791) image3_infobar_loc_pane_g2

0x0001,

0xfe4f,	// (0x00093c3f) image3_infobar_loc_pane_g

0x29a9,	// (0x00086799) image3_infobar_loc_pane_t1

0x0437,	// (0x00084227) image3_infobar_fav_pane_g1

0x29b7,	// (0x000867a7) image3_infobar_fav_pane_g2

0x0001,

0xfe54,	// (0x00093c44) image3_infobar_fav_pane_g

0x29bf,	// (0x000867af) fs_bigclock_status_battery_pane

0x29c8,	// (0x000867b8) fs_bigclock_status_signal_pane

0x29d1,	// (0x000867c1) fs_bigclock_status_title_pane

0x29da,	// (0x000867ca) fs_bigclock_status_signal_pane_g1

0x29e3,	// (0x000867d3) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe59,	// (0x00093c49) fs_bigclock_status_signal_pane_g

0x29eb,	// (0x000867db) fs_bigclock_status_battery_pane_g1

0x29f4,	// (0x000867e4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5e,	// (0x00093c4e) fs_bigclock_status_battery_pane_g

0x29fc,	// (0x000867ec) fs_bigclock_status_title_pane_t1

0x0437,	// (0x00084227) main_fs_bigclock_clock_pane_g1

0x2a0a,	// (0x000867fa) main_fs_bigclock_clock_pane_g2

0x2a0a,	// (0x000867fa) main_fs_bigclock_clock_pane_g3

0x2a0a,	// (0x000867fa) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe63,	// (0x00093c53) main_fs_bigclock_clock_pane_g

0x2a12,	// (0x00086802) main_fs_bigclock_clock_pane_t1

0x2a20,	// (0x00086810) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6c,	// (0x00093c5c) main_fs_bigclock_clock_pane_t

0xc16b,	// (0x0008ff5b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xc16b,	// (0x0008ff5b) list_single_fs_bigclock_indicator_pane

0xc17c,	// (0x0008ff6c) list_single_fs_bigclock_pane_ParamLimits

0xc17c,	// (0x0008ff6c) list_single_fs_bigclock_pane

0x2a38,	// (0x00086828) main_fs_bigclock_indicator_pane_t1

0x2a47,	// (0x00086837) list_single_fs_bigclock_pane_g1

0x2a4f,	// (0x0008683f) list_single_fs_bigclock_pane_t1

0x0437,	// (0x00084227) main_fs_bigclock_swipe_pane_g1

0x2a92,	// (0x00086882) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7d,	// (0x00093c6d) main_fs_bigclock_swipe_pane_g

0x2a9a,	// (0x0008688a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2a9a,	// (0x0008688a) main_fs_bigclock_swipe_pane_t1

0x65cb,	// (0x0008a3bb) call_type_pane_ParamLimits

0xe2d3,	// (0x000920c3) main_btmg_pane

0x26f5,	// (0x000864e5) list_single_cale_mrui_row_pane_g2_ParamLimits

0x26f5,	// (0x000864e5) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf0,	// (0x00093be0) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf0,	// (0x00093be0) list_single_cale_mrui_row_pane_g

0x2854,	// (0x00086644) list_recal_vselct_arw_lo_pane

0x285c,	// (0x0008664c) list_recal_vselct_arw_up_pane

0x140d,	// (0x000851fd) list_recal_vselct_pane

0xc1d2,	// (0x0008ffc2) btmg_button_pane

0xc1de,	// (0x0008ffce) main_btmg_pane_g1

0xe2d3,	// (0x000920c3) bg_button_pane_cp044

0x2ab7,	// (0x000868a7) btmg_button_pane_t1

0xe0fd,	// (0x00091eed) aid_listscroll_gen

0xe401,	// (0x000921f1) main_cntbar_detail_pane

0x241b,	// (0x0008620b) list_cmail_folder_pane

0x242b,	// (0x0008621b) sp_fs_scroll_pane_cp03_ParamLimits

0xc1e6,	// (0x0008ffd6) list_single_fs_dyc_pane_cp01_ParamLimits

0xc1e6,	// (0x0008ffd6) list_single_fs_dyc_pane_cp01

0x2ac5,	// (0x000868b5) aid_size_cmail_indent

0x2ace,	// (0x000868be) list_single_dyc_row_pane_cp01

0xc21d,	// (0x0009000d) cntbar_detail_list_pane_ParamLimits

0xc21d,	// (0x0009000d) cntbar_detail_list_pane

0xc25d,	// (0x0009004d) main_cntbar_detail_cont_pane_ParamLimits

0xc25d,	// (0x0009004d) main_cntbar_detail_cont_pane

0x6565,	// (0x0008a355) scroll_pane_cp032_ParamLimits

0x6565,	// (0x0008a355) scroll_pane_cp032

0xc269,	// (0x00090059) cntbar_detail_list_event_pane_ParamLimits

0xc269,	// (0x00090059) cntbar_detail_list_event_pane

0xc22b,	// (0x0009001b) cntbar_detail_list_shct_pane

0xef79,	// (0x00092d69) aid_list_gen

0x2ad7,	// (0x000868c7) aid_scroll

0x2ae0,	// (0x000868d0) aid_size_touch_scroll_bar

0xc279,	// (0x00090069) aid_list_double

0xc282,	// (0x00090072) aid_list_single

0xc28b,	// (0x0009007b) aid_list_single_lg

0x2ae9,	// (0x000868d9) aid_list_z_g_a_sm

0x363f,	// (0x0008742f) aid_list_z_g_d

0xc294,	// (0x00090084) aid_txt_z_prm

0xc2a2,	// (0x00090092) aid_txt_z_prm_cp01

0xc2b0,	// (0x000900a0) aid_txt_z_sec

0xc2be,	// (0x000900ae) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc2be,	// (0x000900ae) main_cntbar_detail_cont_pane_g1

0xc2cb,	// (0x000900bb) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc2cb,	// (0x000900bb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe82,	// (0x00093c72) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe82,	// (0x00093c72) main_cntbar_detail_cont_pane_g

0x2af1,	// (0x000868e1) main_cntbar_detail_cont_pane_t1

0x2aff,	// (0x000868ef) main_cntbar_detail_cont_pane_t2

0x2b0d,	// (0x000868fd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe87,	// (0x00093c77) main_cntbar_detail_cont_pane_t

0xc2d7,	// (0x000900c7) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc2d7,	// (0x000900c7) cell_cntbar_detail_list_shct_pane

0x2b1b,	// (0x0008690b) cntbar_detail_list_shct_pane_g1

0x2b24,	// (0x00086914) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8e,	// (0x00093c7e) cntbar_detail_list_shct_pane_g

0xc2eb,	// (0x000900db) cntbar_detail_list_event_pane_g1_ParamLimits

0xc2eb,	// (0x000900db) cntbar_detail_list_event_pane_g1

0xc2f7,	// (0x000900e7) cntbar_detail_list_event_pane_g2_ParamLimits

0xc2f7,	// (0x000900e7) cntbar_detail_list_event_pane_g2

0x0005,

0xfe93,	// (0x00093c83) cntbar_detail_list_event_pane_g_ParamLimits

0xfe93,	// (0x00093c83) cntbar_detail_list_event_pane_g

0xc365,	// (0x00090155) cntbar_detail_list_event_pane_t1_ParamLimits

0xc365,	// (0x00090155) cntbar_detail_list_event_pane_t1

0xc37a,	// (0x0009016a) cntbar_detail_list_event_pane_t2_ParamLimits

0xc37a,	// (0x0009016a) cntbar_detail_list_event_pane_t2

0x0002,

0xfea0,	// (0x00093c90) cntbar_detail_list_event_pane_t_ParamLimits

0xfea0,	// (0x00093c90) cntbar_detail_list_event_pane_t

0x0437,	// (0x00084227) cell_cntbar_detail_list_shct_pane_g1

0x699e,	// (0x0008a78e) navi_pane_mv_g3

0xe401,	// (0x000921f1) main_cntbar_detail_pane_ParamLimits

0xe2d3,	// (0x000920c3) main_notif_wgt_pane

0x90b4,	// (0x0008cea4) aid_tch_main_mp4_pane_g4

0x92f3,	// (0x0008d0e3) popup_slider_window_cp02

0x284a,	// (0x0008663a) list_recal_day_event_pane

0xc1fd,	// (0x0008ffed) cntbar_detail_btn_pane_ParamLimits

0xc1fd,	// (0x0008ffed) cntbar_detail_btn_pane

0xc20d,	// (0x0008fffd) cntbar_detail_btn_pane_cp01_ParamLimits

0xc20d,	// (0x0008fffd) cntbar_detail_btn_pane_cp01

0xc22b,	// (0x0009001b) cntbar_detail_list_shct_pane_ParamLimits

0xc237,	// (0x00090027) cntbar_detail_pane_g1_ParamLimits

0xc237,	// (0x00090027) cntbar_detail_pane_g1

0xc247,	// (0x00090037) cntbar_detail_pane_t1_ParamLimits

0xc247,	// (0x00090037) cntbar_detail_pane_t1

0xc303,	// (0x000900f3) cntbar_detail_list_event_pane_g3_ParamLimits

0xc303,	// (0x000900f3) cntbar_detail_list_event_pane_g3

0xc31b,	// (0x0009010b) cntbar_detail_list_event_pane_g4_ParamLimits

0xc31b,	// (0x0009010b) cntbar_detail_list_event_pane_g4

0xc333,	// (0x00090123) cntbar_detail_list_event_pane_g5_ParamLimits

0xc333,	// (0x00090123) cntbar_detail_list_event_pane_g5

0xc34b,	// (0x0009013b) cntbar_detail_list_event_pane_g6_ParamLimits

0xc34b,	// (0x0009013b) cntbar_detail_list_event_pane_g6

0xc38f,	// (0x0009017f) cntbar_detail_list_event_pane_t3_ParamLimits

0xc38f,	// (0x0009017f) cntbar_detail_list_event_pane_t3

0xc3a1,	// (0x00090191) popup_notif_wgt_window_ParamLimits

0xc3a1,	// (0x00090191) popup_notif_wgt_window

0xc3b1,	// (0x000901a1) popup_submenu_window_cp01_ParamLimits

0xc3b1,	// (0x000901a1) popup_submenu_window_cp01

0xccfa,	// (0x00090aea) bg_popup_window_pane_cp10

0x2b2d,	// (0x0008691d) listscroll_notif_wgt_pane

0x2b3f,	// (0x0008692f) list_notif_wgt_window

0x2b48,	// (0x00086938) scroll_pane_cp033

0xc3c1,	// (0x000901b1) list_notif_wgt_row_pane_ParamLimits

0xc3c1,	// (0x000901b1) list_notif_wgt_row_pane

0x2b51,	// (0x00086941) aid_size_list_notif_wgt_del

0x2b5e,	// (0x0008694e) list_notif_wgt_row_pane_g1

0x2b6a,	// (0x0008695a) list_notif_wgt_row_pane_g2

0x2b76,	// (0x00086966) list_notif_wgt_row_pane_g3

0x0002,

0xfea7,	// (0x00093c97) list_notif_wgt_row_pane_g

0x2b83,	// (0x00086973) list_notif_wgt_row_pane_t1

0x2b98,	// (0x00086988) list_notif_wgt_row_pane_t2

0x2baa,	// (0x0008699a) list_notif_wgt_row_pane_t3

0x0002,

0xfeae,	// (0x00093c9e) list_notif_wgt_row_pane_t

0x10df,	// (0x00084ecf) list_recal_day_event_pane_g1

0x2bbc,	// (0x000869ac) list_recal_day_event_pane_t1

0xe2d3,	// (0x000920c3) bg_button_pane_cp045

0x2bcb,	// (0x000869bb) cntbar_detail_btn_pane_t1

0xe105,	// (0x00091ef5) main_callh_pane_ParamLimits

0xe105,	// (0x00091ef5) main_callh_pane

0xe2d3,	// (0x000920c3) main_coverflow0_pane

0xe2d3,	// (0x000920c3) main_wgtman_pane

0xb520,	// (0x0008f310) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb520,	// (0x0008f310) main_fs_bigclock_unlock_btn_pane

0x23f5,	// (0x000861e5) bg_button_pane_cp16

0x2405,	// (0x000861f5) cell_tport_appsw_pane_g3

0xc3d5,	// (0x000901c5) cf0_flow_pane_ParamLimits

0xc3d5,	// (0x000901c5) cf0_flow_pane

0x2bd9,	// (0x000869c9) listscroll_cf0_pane

0x2be4,	// (0x000869d4) main_cf0_pane_g1

0xc3e4,	// (0x000901d4) main_cf0_pane_t1_ParamLimits

0xc3e4,	// (0x000901d4) main_cf0_pane_t1

0xc3f8,	// (0x000901e8) main_cf0_pane_t2_ParamLimits

0xc3f8,	// (0x000901e8) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x00093ca5) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x00093ca5) main_cf0_pane_t

0x2bee,	// (0x000869de) scroll_pane_cp11

0xc40c,	// (0x000901fc) cf0_flow_pane_g1

0xc414,	// (0x00090204) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x00093caa) cf0_flow_pane_g

0xc41c,	// (0x0009020c) cf0_flow_pane_t1

0xe2d3,	// (0x000920c3) main_call6_pane

0xe2d3,	// (0x000920c3) main_calllock_pane

0xc42a,	// (0x0009021a) call6_btn_grp_pane_ParamLimits

0xc42a,	// (0x0009021a) call6_btn_grp_pane

0xc437,	// (0x00090227) call6_pane_g1_ParamLimits

0xc437,	// (0x00090227) call6_pane_g1

0xc447,	// (0x00090237) popup_call6_1st_window_ParamLimits

0xc447,	// (0x00090237) popup_call6_1st_window

0xc455,	// (0x00090245) popup_call6_2nd_window_ParamLimits

0xc455,	// (0x00090245) popup_call6_2nd_window

0xc463,	// (0x00090253) cell_call6_btn_pane_ParamLimits

0xc463,	// (0x00090253) cell_call6_btn_pane

0xccfa,	// (0x00090aea) bg_popup_call2_in_pane_cp03

0x2bf9,	// (0x000869e9) popup_call6_1st_window_g1

0x2c01,	// (0x000869f1) popup_call6_1st_window_g2

0x2c09,	// (0x000869f9) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x00093caf) popup_call6_1st_window_g

0x2c11,	// (0x00086a01) popup_call6_1st_window_t1

0x2c20,	// (0x00086a10) popup_call6_1st_window_t2

0x2c30,	// (0x00086a20) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x00093cb6) popup_call6_1st_window_t

0xccfa,	// (0x00090aea) bg_popup_call2_in_pane_cp04

0x2bf9,	// (0x000869e9) popup_call6_2nd_window_g1

0x2c01,	// (0x000869f1) popup_call6_2nd_window_g2

0x2c09,	// (0x000869f9) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x00093caf) popup_call6_2nd_window_g

0x2c11,	// (0x00086a01) popup_call6_2nd_window_t1

0xe2d3,	// (0x000920c3) bg_button_pane_cp15

0x2c40,	// (0x00086a30) cell_call6_btn_pane_g1

0x2c49,	// (0x00086a39) cell_call6_btn_pane_t1

0xc472,	// (0x00090262) listscroll_wgtman_pane_ParamLimits

0xc472,	// (0x00090262) listscroll_wgtman_pane

0xc490,	// (0x00090280) wgtman_btn_pane_ParamLimits

0xc490,	// (0x00090280) wgtman_btn_pane

0xcbc0,	// (0x000909b0) aid_scroll_copy1

0x2c58,	// (0x00086a48) list_wgtman_pane

0xc4c5,	// (0x000902b5) wgtman_btn_pane_g1_ParamLimits

0xc4c5,	// (0x000902b5) wgtman_btn_pane_g1

0xc4ed,	// (0x000902dd) wgtman_btn_pane_t1_ParamLimits

0xc4ed,	// (0x000902dd) wgtman_btn_pane_t1

0x2c62,	// (0x00086a52) wgtman_btn_pane_t2_ParamLimits

0x2c62,	// (0x00086a52) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x00093cbd) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x00093cbd) wgtman_btn_pane_t

0xc524,	// (0x00090314) listrow_wgtman_pane_ParamLimits

0xc524,	// (0x00090314) listrow_wgtman_pane

0xc535,	// (0x00090325) listrow_wgtman_pane_g1

0xc542,	// (0x00090332) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x00093cc2) listrow_wgtman_pane_g

0xc560,	// (0x00090350) listrow_wgtman_pane_t1

0xc578,	// (0x00090368) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x00093cc7) listrow_wgtman_pane_t

0xc59e,	// (0x0009038e) wait_bar_pane_cp09

0x2c79,	// (0x00086a69) main_calllock_btn_pane

0x2c83,	// (0x00086a73) main_calllock_pane_g1

0xe2d3,	// (0x000920c3) bg_button_pane_cp17

0x2c8f,	// (0x00086a7f) main_calllock_btn_pane_g1

0x2c98,	// (0x00086a88) main_calllock_btn_pane_t1

0xe2d3,	// (0x000920c3) main_dialer3_pane

0xe2d3,	// (0x000920c3) main_fmrd2_pane

0x0437,	// (0x00084227) main_fs_bigclock_unlock_btn_pane_g1

0x2caf,	// (0x00086a9f) main_fs_bigclock_unlock_btn_pane_t1

0xc5b0,	// (0x000903a0) area_fmrd2_info_pane_ParamLimits

0xc5b0,	// (0x000903a0) area_fmrd2_info_pane

0xc5bc,	// (0x000903ac) area_fmrd2_visual_pane_ParamLimits

0xc5bc,	// (0x000903ac) area_fmrd2_visual_pane

0xc5ca,	// (0x000903ba) fmrd2_indi_pane_ParamLimits

0xc5ca,	// (0x000903ba) fmrd2_indi_pane

0xc5d7,	// (0x000903c7) area_fmrd2_visual_pane_g1

0xc5df,	// (0x000903cf) area_fmrd2_visual_pane_t1

0xc5ef,	// (0x000903df) area_fmrd2_visual_pane_t2

0xc5ff,	// (0x000903ef) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x00093cd1) area_fmrd2_visual_pane_t

0xc60f,	// (0x000903ff) area_fmrd2_info_pane_g1

0xc617,	// (0x00090407) area_fmrd2_info_pane_t1

0xc627,	// (0x00090417) area_fmrd2_info_pane_t2

0xc637,	// (0x00090427) area_fmrd2_info_pane_t3

0xc647,	// (0x00090437) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x00093cd8) area_fmrd2_info_pane_t

0xc657,	// (0x00090447) fmrd2_indi_pane_t1

0xc667,	// (0x00090457) fmrd2_indi_pane_t2

0xc677,	// (0x00090467) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x00093ce1) fmrd2_indi_pane_t

0x1e2f,	// (0x00085c1f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x1e2f,	// (0x00085c1f) list_single_fs_bigclock_indicator_pane_g5

0x1ed8,	// (0x00085cc8) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x1ed8,	// (0x00085cc8) list_single_fs_bigclock_indicator_pane_t5

0xbe01,	// (0x0008fbf1) aid_cell_bcale_month_pane_ParamLimits

0xbe01,	// (0x0008fbf1) aid_cell_bcale_month_pane

0xbe11,	// (0x0008fc01) bcale_month_pane_ParamLimits

0xbe11,	// (0x0008fc01) bcale_month_pane

0xbe21,	// (0x0008fc11) bcale_preview_pane_ParamLimits

0xbe21,	// (0x0008fc11) bcale_preview_pane

0x2a4f,	// (0x0008683f) list_single_fs_bigclock_pane_t1_ParamLimits

0x2a6e,	// (0x0008685e) list_single_fs_bigclock_pane_t2_ParamLimits

0x2a6e,	// (0x0008685e) list_single_fs_bigclock_pane_t2

0x0001,

0xfe78,	// (0x00093c68) list_single_fs_bigclock_pane_t_ParamLimits

0xfe78,	// (0x00093c68) list_single_fs_bigclock_pane_t

0x2ca7,	// (0x00086a97) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x00093ccc) main_fs_bigclock_unlock_btn_pane_g

0xc687,	// (0x00090477) aid_dia3_key_size_ParamLimits

0xc687,	// (0x00090477) aid_dia3_key_size

0xc693,	// (0x00090483) aid_dia3_listrow_size_ParamLimits

0xc693,	// (0x00090483) aid_dia3_listrow_size

0xc6a3,	// (0x00090493) dia3_keypad_fun_pane_ParamLimits

0xc6a3,	// (0x00090493) dia3_keypad_fun_pane

0xc6b3,	// (0x000904a3) dia3_keypad_num_pane_ParamLimits

0xc6b3,	// (0x000904a3) dia3_keypad_num_pane

0xc6c3,	// (0x000904b3) dia3_listscroll_pane_ParamLimits

0xc6c3,	// (0x000904b3) dia3_listscroll_pane

0xc6d1,	// (0x000904c1) dia3_numentry_pane_ParamLimits

0xc6d1,	// (0x000904c1) dia3_numentry_pane

0x2cbd,	// (0x00086aad) dia3_list_pane

0x2cc8,	// (0x00086ab8) scroll_pane_cp12

0xe2d3,	// (0x000920c3) bg_dia3_numentry_pane

0xc6df,	// (0x000904cf) dia3_numentry_pane_t1

0xc6ee,	// (0x000904de) cell_dia3_key_num_pane

0xc6f6,	// (0x000904e6) cell_dia3_key0_fun_pane_ParamLimits

0xc6f6,	// (0x000904e6) cell_dia3_key0_fun_pane

0xc703,	// (0x000904f3) cell_dia3_key1_fun_pane_ParamLimits

0xc703,	// (0x000904f3) cell_dia3_key1_fun_pane

0xc710,	// (0x00090500) dia3_listrow_pane

0x1b2d,	// (0x0008591d) bg_dia3_numentry_pane_g1

0xe2d3,	// (0x000920c3) bg_button_pane_cp21

0x2cd3,	// (0x00086ac3) cell_dia3_key_num_pane_t1

0x2ce1,	// (0x00086ad1) cell_dia3_key_num_pane_t2

0x2cf0,	// (0x00086ae0) cell_dia3_key_num_pane_t3

0x2cff,	// (0x00086aef) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x00093ce8) cell_dia3_key_num_pane_t

0xe2d3,	// (0x000920c3) bg_button_pane_cp19

0xc71d,	// (0x0009050d) cell_dia3_key0_fun_pane_g1

0xe2d3,	// (0x000920c3) bg_button_pane_cp20

0xc725,	// (0x00090515) cell_dia3_key1_fun_pane_g1

0xc72d,	// (0x0009051d) area_left_week_number_pane

0xc737,	// (0x00090527) area_top_day_name_pane

0xc743,	// (0x00090533) frame_month_view_pane

0xc74d,	// (0x0009053d) grid_month_view_pane

0x2d0e,	// (0x00086afe) cell_top_day_name_pane_ParamLimits

0x2d0e,	// (0x00086afe) cell_top_day_name_pane

0xc757,	// (0x00090547) cell_area_left_week_number_pane_ParamLimits

0xc757,	// (0x00090547) cell_area_left_week_number_pane

0xc76b,	// (0x0009055b) cell_month_view_pane_ParamLimits

0xc76b,	// (0x0009055b) cell_month_view_pane

0x2d2a,	// (0x00086b1a) frm_month_g1

0xc78a,	// (0x0009057a) frm_month_g2

0xc794,	// (0x00090584) frm_month_g3

0xc79e,	// (0x0009058e) frm_month_g4

0xc7a8,	// (0x00090598) frm_month_g5

0xc7b2,	// (0x000905a2) frm_month_g6

0xc7bc,	// (0x000905ac) frm_month_g7

0x2d33,	// (0x00086b23) frm_month_g8

0x3647,	// (0x00087437) frm_month_g9

0x2d3c,	// (0x00086b2c) frm_month_g10

0x2d45,	// (0x00086b35) frm_month_g11

0x2d4e,	// (0x00086b3e) frm_month_g12

0x2d57,	// (0x00086b47) frm_month_g13

0x2d62,	// (0x00086b52) frm_month_g14

0x2d6d,	// (0x00086b5d) frm_month_g15

0x2d78,	// (0x00086b68) frm_month_g16

0x000f,

0xff01,	// (0x00093cf1) frm_month_g

0xc7c6,	// (0x000905b6) cell_top_day_name_pane_t1

0xc7d5,	// (0x000905c5) cell_area_left_week_number_pane_g1

0xc7dd,	// (0x000905cd) cell_area_left_week_number_pane_t1

0x0437,	// (0x00084227) cell_month_view_pane_g1

0xc7ec,	// (0x000905dc) cell_month_view_pane_t1

0xe2d3,	// (0x000920c3) main_fps_pane

0x2130,	// (0x00085f20) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2130,	// (0x00085f20) cmail_ddmenu_btn02_pane_cp1

0x214c,	// (0x00085f3c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x214c,	// (0x00085f3c) cmail_ddmenu_btn02_pane_cp2

0xc0ca,	// (0x0008feba) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc0ca,	// (0x0008feba) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2b,	// (0x00093c1b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2b,	// (0x00093c1b) cmail_ddmenu_btn02_pane_g

0xc0e8,	// (0x0008fed8) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc0e8,	// (0x0008fed8) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe30,	// (0x00093c20) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe30,	// (0x00093c20) cmail_ddmenu_btn02_pane_t

0xc7fb,	// (0x000905eb) fps_text_pane_ParamLimits

0xc7fb,	// (0x000905eb) fps_text_pane

0xc808,	// (0x000905f8) main_fps_pane_g1_ParamLimits

0xc808,	// (0x000905f8) main_fps_pane_g1

0xc814,	// (0x00090604) wait_bar_pane_cp010_ParamLimits

0xc814,	// (0x00090604) wait_bar_pane_cp010

0xc820,	// (0x00090610) fps_text_pane_t1_ParamLimits

0xc820,	// (0x00090610) fps_text_pane_t1

0x9727,	// (0x0008d517) cam4_image_uncrop_pane_g1

0x9730,	// (0x0008d520) cam4_image_uncrop_pane_g2

0x9739,	// (0x0008d529) cam4_image_uncrop_pane_g3

0x9742,	// (0x0008d532) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x000936e9) cam4_image_uncrop_pane_g

0xc710,	// (0x00090500) dia3_listrow_pane_ParamLimits

0xe2d3,	// (0x000920c3) main_phob2_pane

0xbc52,	// (0x0008fa42) cell_tport_appsw_pane_cp02_ParamLimits

0xbc52,	// (0x0008fa42) cell_tport_appsw_pane_cp02

0xbc61,	// (0x0008fa51) cell_tport_appsw_pane_cp03_ParamLimits

0xbc61,	// (0x0008fa51) cell_tport_appsw_pane_cp03

0xe2d3,	// (0x000920c3) phob2_contact_card_pane

0xe2d3,	// (0x000920c3) phob2_listscroll_pane

0x2d83,	// (0x00086b73) phob2_list_pane

0x2d8b,	// (0x00086b7b) scroll_pane_cp034

0xc839,	// (0x00090629) phob2_cc_data_pane_ParamLimits

0xc839,	// (0x00090629) phob2_cc_data_pane

0xc855,	// (0x00090645) phob2_cc_listscroll_pane_ParamLimits

0xc855,	// (0x00090645) phob2_cc_listscroll_pane

0xc871,	// (0x00090661) list_double_large_graphic_phob2_pane_ParamLimits

0xc871,	// (0x00090661) list_double_large_graphic_phob2_pane

0xc889,	// (0x00090679) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc889,	// (0x00090679) list_double_large_graphic_phob2_pane_g1

0xc896,	// (0x00090686) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xc896,	// (0x00090686) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x00093d12) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x00093d12) list_double_large_graphic_phob2_pane_g

0xc8a2,	// (0x00090692) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xc8a2,	// (0x00090692) list_double_large_graphic_phob2_pane_t1

0xc8b7,	// (0x000906a7) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xc8b7,	// (0x000906a7) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x00093d17) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x00093d17) list_double_large_graphic_phob2_pane_t

0xe2d3,	// (0x000920c3) list_highlight_pane_cp024

0x2d93,	// (0x00086b83) phob2_cc_button_pane

0xc8c9,	// (0x000906b9) phob2_cc_data_pane_g1_ParamLimits

0xc8c9,	// (0x000906b9) phob2_cc_data_pane_g1

0xc8d5,	// (0x000906c5) phob2_cc_data_pane_g2_ParamLimits

0xc8d5,	// (0x000906c5) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x00093d1c) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x00093d1c) phob2_cc_data_pane_g

0xc8e1,	// (0x000906d1) phob2_cc_data_pane_t1_ParamLimits

0xc8e1,	// (0x000906d1) phob2_cc_data_pane_t1

0xc8f3,	// (0x000906e3) phob2_cc_data_pane_t2_ParamLimits

0xc8f3,	// (0x000906e3) phob2_cc_data_pane_t2

0xc905,	// (0x000906f5) phob2_cc_data_pane_t3_ParamLimits

0xc905,	// (0x000906f5) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x00093d21) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x00093d21) phob2_cc_data_pane_t

0x2d9b,	// (0x00086b8b) phob2_cc_list_pane_ParamLimits

0x2d9b,	// (0x00086b8b) phob2_cc_list_pane

0x118a,	// (0x00084f7a) scroll_pane_cp035_ParamLimits

0x118a,	// (0x00084f7a) scroll_pane_cp035

0xe401,	// (0x000921f1) bg_button_pane_cp033

0x2da7,	// (0x00086b97) phob2_cc_button_pane_g1

0x2db3,	// (0x00086ba3) phob2_cc_button_pane_t1

0x2dc8,	// (0x00086bb8) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x00093d28) phob2_cc_button_pane_t

0xc917,	// (0x00090707) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc917,	// (0x00090707) list_double_large_graphic_phob2_cc_pane

0xc933,	// (0x00090723) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc933,	// (0x00090723) list_double_large_graphic_phob2_cc_pane_g1

0xc944,	// (0x00090734) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xc944,	// (0x00090734) list_double_large_graphic_phob2_cc_pane_g2

0xc953,	// (0x00090743) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xc953,	// (0x00090743) list_double_large_graphic_phob2_cc_pane_g3

0xc962,	// (0x00090752) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xc962,	// (0x00090752) list_double_large_graphic_phob2_cc_pane_g4

0xc973,	// (0x00090763) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xc973,	// (0x00090763) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x00093d2d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x00093d2d) list_double_large_graphic_phob2_cc_pane_g

0xc982,	// (0x00090772) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xc982,	// (0x00090772) list_double_large_graphic_phob2_cc_pane_t1

0xc9ab,	// (0x0009079b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xc9ab,	// (0x0009079b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x00093d38) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x00093d38) list_double_large_graphic_phob2_cc_pane_t

0x2dda,	// (0x00086bca) list_highlight_pane_cp025_ParamLimits

0x2dda,	// (0x00086bca) list_highlight_pane_cp025

0xe401,	// (0x000921f1) bg_button_pane_cp033_ParamLimits

0x2da7,	// (0x00086b97) phob2_cc_button_pane_g1_ParamLimits

0x2db3,	// (0x00086ba3) phob2_cc_button_pane_t1_ParamLimits

0x2dc8,	// (0x00086bb8) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x00093d28) phob2_cc_button_pane_t_ParamLimits

0x487b,	// (0x0008866b) popup_wgtman_window

0x0f8a,	// (0x00084d7a) scroll_pane_cp038

0xc4ad,	// (0x0009029d) wgtman_btn_pane_cp_01_ParamLimits

0xc4ad,	// (0x0009029d) wgtman_btn_pane_cp_01

0x2de8,	// (0x00086bd8) wgtman_content_pane

0x2df1,	// (0x00086be1) wgtman_heading_pane

0xe2d3,	// (0x000920c3) bg_heading_pane_cp02

0x2dfa,	// (0x00086bea) wgtman_heading_pane_g1

0x2e02,	// (0x00086bf2) wgtman_heading_pane_t1

0x2e10,	// (0x00086c00) scroll_pane_cp036

0x2e18,	// (0x00086c08) wgtman_list_pane

0x1fc3,	// (0x00085db3) wgtman_list_pane_t1_ParamLimits

0x1fc3,	// (0x00085db3) wgtman_list_pane_t1

0x9684,	// (0x0008d474) cam4_grid_pane

0xa3e9,	// (0x0008e1d9) bg_button_pane_cp015_ParamLimits

0xa3fb,	// (0x0008e1eb) bg_button_pane_cp016_ParamLimits

0xa40e,	// (0x0008e1fe) bg_button_pane_cp017_ParamLimits

0xa464,	// (0x0008e254) popup_vitu2_query_window_g3_ParamLimits

0xa464,	// (0x0008e254) popup_vitu2_query_window_g3

0xa523,	// (0x0008e313) popup_vitu2_query_window_t6_ParamLimits

0xa523,	// (0x0008e313) popup_vitu2_query_window_t6

0xa54e,	// (0x0008e33e) popup_vitu2_query_window_t7_ParamLimits

0xa54e,	// (0x0008e33e) popup_vitu2_query_window_t7

0x0dea,	// (0x00084bda) cam4_grid_pane_g1

0x0df3,	// (0x00084be3) cam4_grid_pane_g2

0x2e20,	// (0x00086c10) cam4_grid_pane_g3

0x2e29,	// (0x00086c19) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x00093d3d) cam4_grid_pane_g

0x560f,	// (0x000893ff) aid_placing_vt_slider_lsc_ParamLimits

0x5942,	// (0x00089732) vidtel_button_pane_ParamLimits

0x5942,	// (0x00089732) vidtel_button_pane

0x2e34,	// (0x00086c24) bg_button_pane_cp034

0xc9d4,	// (0x000907c4) vidtel_button_pane_g1

0x2e3e,	// (0x00086c2e) vidtel_button_pane_t1

0x10a9,	// (0x00084e99) aid_size_vtel_slider_touch

0x118a,	// (0x00084f7a) scroll_pane_cp039

0x1b6b,	// (0x0008595b) ncim_query_button_pane_cp01_ParamLimits

0x1b8a,	// (0x0008597a) ncimui_query_pane_g1_ParamLimits

0xe401,	// (0x000921f1) input_focus_pane_cp012_ParamLimits

0x1baf,	// (0x0008599f) ncim_query_entry_pane_t1_ParamLimits

0x118a,	// (0x00084f7a) scroll_pane_cp039_ParamLimits

0x6910,	// (0x0008a700) navi_pane_bcale_mc_g1

0x6918,	// (0x0008a708) navi_pane_bcale_mc_t1

0x2197,	// (0x00085f87) main_sp_fs_email_pane_g1

0x219f,	// (0x00085f8f) main_sp_fs_email_pane_g2

0x0001,

0xfce9,	// (0x00093ad9) main_sp_fs_email_pane_g

0x2701,	// (0x000864f1) list_single_cale_mrui_row_pane_g3_ParamLimits

0x2701,	// (0x000864f1) list_single_cale_mrui_row_pane_g3

0xc110,	// (0x0008ff00) list_single_recal_day_pane_g5_event_pane

0x28bd,	// (0x000866ad) list_single_recal_day_pane_g7

0x2e4c,	// (0x00086c3c) list_recal_day_event_pane_cp01

0x2e55,	// (0x00086c45) list_recal_vselct_arw_lo_pane_cp01

0x2e5d,	// (0x00086c4d) list_recal_vselct_arw_up_pane_cp01

0x2e65,	// (0x00086c55) list_recal_vselct_pane_cp01

0x10df,	// (0x00084ecf) list_recal_day_event_pane_cp01_g1

0x2e6f,	// (0x00086c5f) list_recal_day_event_pane_cp01_t1

0x28c5,	// (0x000866b5) list_single_recal_day_pane_t1_ParamLimits

0x28d7,	// (0x000866c7) list_single_recal_day_pane_t2_ParamLimits

0xfe40,	// (0x00093c30) list_single_recal_day_pane_t_ParamLimits

0xea31,	// (0x00092821) bg_notes_pane_ParamLimits

0xea3f,	// (0x0009282f) list_notes_pane_ParamLimits

0x4b95,	// (0x00088985) scroll_pane_cp06_ParamLimits

0xea61,	// (0x00092851) main_notes_pane_ParamLimits

0xe2d3,	// (0x000920c3) main_welc_pane

0xc9dc,	// (0x000907cc) main_welc_body_pane_ParamLimits

0xc9dc,	// (0x000907cc) main_welc_body_pane

0xc9f7,	// (0x000907e7) main_welc_opti_pane_ParamLimits

0xc9f7,	// (0x000907e7) main_welc_opti_pane

0xca2a,	// (0x0009081a) main_welc_pane_t1_ParamLimits

0xca2a,	// (0x0009081a) main_welc_pane_t1

0xbe32,	// (0x0008fc22) main_welc_body_row_pane_ParamLimits

0xbe32,	// (0x0008fc22) main_welc_body_row_pane

0xca48,	// (0x00090838) main_welc_opti_row_pane_ParamLimits

0xca48,	// (0x00090838) main_welc_opti_row_pane

0x2e94,	// (0x00086c84) main_welc_opti_row_pane_g1

0x2e9c,	// (0x00086c8c) main_welc_opti_row_pane_t1

0x2eab,	// (0x00086c9b) main_welc_body_row_pane_t1

0x2b37,	// (0x00086927) popup_notif_wgt_heading_pane

0x2b51,	// (0x00086941) aid_size_list_notif_wgt_del_ParamLimits

0x2b5e,	// (0x0008694e) list_notif_wgt_row_pane_g1_ParamLimits

0x2b6a,	// (0x0008695a) list_notif_wgt_row_pane_g2_ParamLimits

0x2b76,	// (0x00086966) list_notif_wgt_row_pane_g3_ParamLimits

0xfea7,	// (0x00093c97) list_notif_wgt_row_pane_g_ParamLimits

0x2b83,	// (0x00086973) list_notif_wgt_row_pane_t1_ParamLimits

0x2b98,	// (0x00086988) list_notif_wgt_row_pane_t2_ParamLimits

0x2baa,	// (0x0008699a) list_notif_wgt_row_pane_t3_ParamLimits

0xfeae,	// (0x00093c9e) list_notif_wgt_row_pane_t_ParamLimits

0xc535,	// (0x00090325) listrow_wgtman_pane_g1_ParamLimits

0xc542,	// (0x00090332) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x00093cc2) listrow_wgtman_pane_g_ParamLimits

0xc560,	// (0x00090350) listrow_wgtman_pane_t1_ParamLimits

0xc578,	// (0x00090368) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x00093cc7) listrow_wgtman_pane_t_ParamLimits

0xc59e,	// (0x0009038e) wait_bar_pane_cp09_ParamLimits

0xe2d3,	// (0x000920c3) bg_popup_heading_pane_cp02

0x2eba,	// (0x00086caa) popup_notif_wgt_heading_pane_g1

0x2ec2,	// (0x00086cb2) popup_notif_wgt_heading_pane_t1

0xe2d3,	// (0x000920c3) main_vids_pane

0xe2d3,	// (0x000920c3) vids_listscroll_pane

0xca59,	// (0x00090849) scroll_pane_cp040

0xe2d3,	// (0x000920c3) vids_list_pane

0xca64,	// (0x00090854) vids_list_double_pane_ParamLimits

0xca64,	// (0x00090854) vids_list_double_pane

0xca77,	// (0x00090867) vids_list_double_pane_g1

0xca80,	// (0x00090870) vids_list_double_pane_t1

0xca90,	// (0x00090880) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x00093d4b) vids_list_double_pane_t

0x76f6,	// (0x0008b4e6) main_ncimui_pane_ParamLimits

0xb0d8,	// (0x0008eec8) main_ncimui_pane_g1_ParamLimits

0xb0e6,	// (0x0008eed6) main_ncimui_pane_g2_ParamLimits

0xb0e6,	// (0x0008eed6) main_ncimui_pane_g2

0x0001,

0xfbee,	// (0x000939de) main_ncimui_pane_g_ParamLimits

0xfbee,	// (0x000939de) main_ncimui_pane_g

0xca12,	// (0x00090802) main_welc_pane_g1_ParamLimits

0xca12,	// (0x00090802) main_welc_pane_g1

0xca1e,	// (0x0009080e) main_welc_pane_g2_ParamLimits

0xca1e,	// (0x0009080e) main_welc_pane_g2

0x0001,

0xff56,	// (0x00093d46) main_welc_pane_g_ParamLimits

0xff56,	// (0x00093d46) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
