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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000159fb };

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
0x8560,	// (0x0001df5b) Screen

0x856c,	// (0x0001df67) application_window

0x8578,	// (0x0001df73) area_bottom_pane_ParamLimits

0x8578,	// (0x0001df73) area_bottom_pane

0x6e18,	// (0x0001c813) area_top_pane_ParamLimits

0x6e18,	// (0x0001c813) area_top_pane

0x6e7c,	// (0x0001c877) call_video_uplink_pane_ParamLimits

0x6e7c,	// (0x0001c877) call_video_uplink_pane

0x6ebb,	// (0x0001c8b6) main_pane_ParamLimits

0x6ebb,	// (0x0001c8b6) main_pane

0x304c,	// (0x00018a47) context_pane

0xadb4,	// (0x000207af) navi_pane

0xadda,	// (0x000207d5) popup_cale_events_window_ParamLimits

0xadda,	// (0x000207d5) popup_cale_events_window

0x305f,	// (0x00018a5a) popup_mup_playback_window

0xadf2,	// (0x000207ed) signal_pane

0x0f04,	// (0x000168ff) main_browser_pane

0x1139,	// (0x00016b34) main_burst_pane

0x7477,	// (0x0001ce72) main_calc_pane

0x2fec,	// (0x000189e7) main_cale_day_pane

0x883b,	// (0x0001e236) main_cale_month_pane

0x2fec,	// (0x000189e7) main_cale_week_pane

0x1139,	// (0x00016b34) main_call_pane

0x0b9a,	// (0x00016595) main_call_poc_pane

0x1139,	// (0x00016b34) main_camera_pane

0x1139,	// (0x00016b34) main_chi_dic_pane

0x19b5,	// (0x000173b0) main_clock_pane

0x0b9a,	// (0x00016595) main_fmradio_pane

0x1139,	// (0x00016b34) main_graph_messa_pane

0x0b9a,	// (0x00016595) main_help_pane

0x0f04,	// (0x000168ff) main_im_pane

0x0df5,	// (0x000167f0) main_image_pane_ParamLimits

0x0df5,	// (0x000167f0) main_image_pane

0x0b9a,	// (0x00016595) main_location2_pane

0x1139,	// (0x00016b34) main_location_pane

0x0df5,	// (0x000167f0) main_messa_pane

0x0b9a,	// (0x00016595) main_mp2_pane

0x1139,	// (0x00016b34) main_mp_pane

0x0b9a,	// (0x00016595) main_msg_pane

0x0b9a,	// (0x00016595) main_mup_eq_pane

0x0b9a,	// (0x00016595) main_mup_pane

0x0f04,	// (0x000168ff) main_notes_pane

0x0b9a,	// (0x00016595) main_pec_pane

0x0b9a,	// (0x00016595) main_phob_pane

0x0b9a,	// (0x00016595) main_pinb_pane

0x0b9a,	// (0x00016595) main_postcard_pane

0x0b9a,	// (0x00016595) main_qdial_pane

0x1139,	// (0x00016b34) main_skin_pane

0x0b9a,	// (0x00016595) main_smil2_pane

0x1139,	// (0x00016b34) main_smil_pane

0x1139,	// (0x00016b34) main_video_pane

0x1139,	// (0x00016b34) main_video_tele_pane

0x0df5,	// (0x000167f0) main_viewer_pane_ParamLimits

0x0df5,	// (0x000167f0) main_viewer_pane

0x1139,	// (0x00016b34) main_vorec_pane

0x74cf,	// (0x0001ceca) popup_blid_sat_info_window_ParamLimits

0x74cf,	// (0x0001ceca) popup_blid_sat_info_window

0x74ef,	// (0x0001ceea) popup_dyc_status_message_window_ParamLimits

0x74ef,	// (0x0001ceea) popup_dyc_status_message_window

0x74fd,	// (0x0001cef8) popup_grid_large_graphic_window_ParamLimits

0x74fd,	// (0x0001cef8) popup_grid_large_graphic_window

0x758c,	// (0x0001cf87) popup_loc_request_window_ParamLimits

0x758c,	// (0x0001cf87) popup_loc_request_window

0x75d9,	// (0x0001cfd4) popup_wml_address_window_ParamLimits

0x75d9,	// (0x0001cfd4) popup_wml_address_window

0xac96,	// (0x00020691) call_muted_g1

0xa90b,	// (0x00020306) popup_call_audio_conf_window_ParamLimits

0xa90b,	// (0x00020306) popup_call_audio_conf_window

0xaca6,	// (0x000206a1) popup_call_audio_first_window_ParamLimits

0xaca6,	// (0x000206a1) popup_call_audio_first_window

0xace6,	// (0x000206e1) popup_call_audio_in_window_ParamLimits

0xace6,	// (0x000206e1) popup_call_audio_in_window

0xad0a,	// (0x00020705) popup_call_audio_out_window_ParamLimits

0xad0a,	// (0x00020705) popup_call_audio_out_window

0xad2c,	// (0x00020727) popup_call_audio_second_window_ParamLimits

0xad2c,	// (0x00020727) popup_call_audio_second_window

0xad5c,	// (0x00020757) popup_call_audio_wait_window_ParamLimits

0xad5c,	// (0x00020757) popup_call_audio_wait_window

0xad7d,	// (0x00020778) popup_number_entry_window_ParamLimits

0xad7d,	// (0x00020778) popup_number_entry_window

0x0787,	// (0x00016182) bg_popup_call_pane_cp05_ParamLimits

0x0787,	// (0x00016182) bg_popup_call_pane_cp05

0x07a7,	// (0x000161a2) popup_number_entry_window_t1

0x07ba,	// (0x000161b5) popup_number_entry_window_t2

0x07cc,	// (0x000161c7) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x00024a80) popup_number_entry_window_t

0x07de,	// (0x000161d9) text_title_cp2

0x07f1,	// (0x000161ec) bg_popup_call_pane_cp_ParamLimits

0x07f1,	// (0x000161ec) bg_popup_call_pane_cp

0x07ff,	// (0x000161fa) call_thumbnail_pane

0x0807,	// (0x00016202) popup_call_audio_in_window_g1_ParamLimits

0x0807,	// (0x00016202) popup_call_audio_in_window_g1

0x0813,	// (0x0001620e) popup_call_audio_in_window_g2_ParamLimits

0x0813,	// (0x0001620e) popup_call_audio_in_window_g2

0x081f,	// (0x0001621a) popup_call_audio_in_window_g3_ParamLimits

0x081f,	// (0x0001621a) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00024a89) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00024a89) popup_call_audio_in_window_g

0x082b,	// (0x00016226) popup_call_audio_in_window_t1_ParamLimits

0x082b,	// (0x00016226) popup_call_audio_in_window_t1

0x0847,	// (0x00016242) popup_call_audio_in_window_t2_ParamLimits

0x0847,	// (0x00016242) popup_call_audio_in_window_t2

0x0863,	// (0x0001625e) popup_call_audio_in_window_t3_ParamLimits

0x0863,	// (0x0001625e) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x00024a90) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x00024a90) popup_call_audio_in_window_t

0x07f1,	// (0x000161ec) bg_popup_call_pane_cp01_ParamLimits

0x07f1,	// (0x000161ec) bg_popup_call_pane_cp01

0x07ff,	// (0x000161fa) call_thumbnail_pane_cp02

0x0876,	// (0x00016271) call_type_pane_cp022

0x087e,	// (0x00016279) popup_call_audio_out_window_g1_ParamLimits

0x087e,	// (0x00016279) popup_call_audio_out_window_g1

0x0890,	// (0x0001628b) popup_call_audio_out_window_g2_ParamLimits

0x0890,	// (0x0001628b) popup_call_audio_out_window_g2

0x089c,	// (0x00016297) popup_call_audio_out_window_g3_ParamLimits

0x089c,	// (0x00016297) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x00024a97) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x00024a97) popup_call_audio_out_window_g

0x08ae,	// (0x000162a9) popup_call_audio_out_window_t1_ParamLimits

0x08ae,	// (0x000162a9) popup_call_audio_out_window_t1

0x08c6,	// (0x000162c1) popup_call_audio_out_window_t2_ParamLimits

0x08c6,	// (0x000162c1) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00024a9e) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00024a9e) popup_call_audio_out_window_t

0x08db,	// (0x000162d6) bg_popup_call_pane_ParamLimits

0x08db,	// (0x000162d6) bg_popup_call_pane

0x85f5,	// (0x0001dff0) call_thumbnail_pane_cp_ParamLimits

0x85f5,	// (0x0001dff0) call_thumbnail_pane_cp

0x095f,	// (0x0001635a) call_type_pane_cp01_ParamLimits

0x095f,	// (0x0001635a) call_type_pane_cp01

0x09a3,	// (0x0001639e) popup_call_audio_first_window_g1_ParamLimits

0x09a3,	// (0x0001639e) popup_call_audio_first_window_g1

0x09ef,	// (0x000163ea) popup_call_audio_first_window_g2_ParamLimits

0x09ef,	// (0x000163ea) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x00024aa3) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x00024aa3) popup_call_audio_first_window_g

0x0a33,	// (0x0001642e) popup_call_audio_first_window_t1_ParamLimits

0x0a33,	// (0x0001642e) popup_call_audio_first_window_t1

0x0adf,	// (0x000164da) popup_call_audio_first_window_t4_ParamLimits

0x0adf,	// (0x000164da) popup_call_audio_first_window_t4

0x0b6b,	// (0x00016566) popup_call_audio_first_window_t5_ParamLimits

0x0b6b,	// (0x00016566) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x00024aa8) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x00024aa8) popup_call_audio_first_window_t

0x0b9a,	// (0x00016595) bg_popup_call_pane_cp02

0x0ba4,	// (0x0001659f) call_type_pane_cp023

0x0bac,	// (0x000165a7) popup_call_audio_wait_window_g1

0x0bb4,	// (0x000165af) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00024aaf) popup_call_audio_wait_window_g

0x0bbc,	// (0x000165b7) popup_call_audio_wait_window_t3

0x0bca,	// (0x000165c5) bg_popup_call_pane_cp03_ParamLimits

0x0bca,	// (0x000165c5) bg_popup_call_pane_cp03

0x0c2a,	// (0x00016625) call_thumbnail_pane_cp011_ParamLimits

0x0c2a,	// (0x00016625) call_thumbnail_pane_cp011

0x0c36,	// (0x00016631) call_type_pane_cp034_ParamLimits

0x0c36,	// (0x00016631) call_type_pane_cp034

0x0c72,	// (0x0001666d) popup_call_audio_second_window_g1_ParamLimits

0x0c72,	// (0x0001666d) popup_call_audio_second_window_g1

0x0cae,	// (0x000166a9) popup_call_audio_second_window_g2_ParamLimits

0x0cae,	// (0x000166a9) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x00024ab4) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x00024ab4) popup_call_audio_second_window_g

0x0cea,	// (0x000166e5) popup_call_audio_second_window_t1_ParamLimits

0x0cea,	// (0x000166e5) popup_call_audio_second_window_t1

0x0d6b,	// (0x00016766) popup_call_audio_second_window_t2_ParamLimits

0x0d6b,	// (0x00016766) popup_call_audio_second_window_t2

0x0da1,	// (0x0001679c) popup_call_audio_second_window_t3_ParamLimits

0x0da1,	// (0x0001679c) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00024ab9) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00024ab9) popup_call_audio_second_window_t

0x0b9a,	// (0x00016595) bg_popup_call_pane_cp04

0x0dd7,	// (0x000167d2) list_conf_pane

0x0ddf,	// (0x000167da) popup_call_audio_conf_window_t1

0x0ded,	// (0x000167e8) call_thumbnail_pane_g1

0x0df5,	// (0x000167f0) bg_pinb_pane_ParamLimits

0x0df5,	// (0x000167f0) bg_pinb_pane

0x0e03,	// (0x000167fe) find_pinb_pane

0x0df5,	// (0x000167f0) listscroll_pinb_pane_ParamLimits

0x0df5,	// (0x000167f0) listscroll_pinb_pane

0x0e0d,	// (0x00016808) pinb_bg_pane_g1

0x0e0d,	// (0x00016808) pinb_bg_pane_g2

0x0e0d,	// (0x00016808) pinb_bg_pane_g3

0x0e0d,	// (0x00016808) pinb_bg_pane_g4

0x0e0d,	// (0x00016808) pinb_bg_pane_g5

0x0e0d,	// (0x00016808) pinb_bg_pane_g6

0x0e0d,	// (0x00016808) pinb_bg_pane_g7

0x0e0d,	// (0x00016808) pinb_bg_pane_g8

0x0e0d,	// (0x00016808) pinb_bg_pane_g9

0x0e0d,	// (0x00016808) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00024ac0) pinb_bg_pane_g

0x070a,	// (0x00016105) grid_pinb_pane

0x070a,	// (0x00016105) list_pinb_pane

0x0779,	// (0x00016174) scroll_pane_cp01_ParamLimits

0x0779,	// (0x00016174) scroll_pane_cp01

0x0e17,	// (0x00016812) find_pinb_pane_g1_ParamLimits

0x0e17,	// (0x00016812) find_pinb_pane_g1

0x0e2f,	// (0x0001682a) find_pinb_pane_t1

0x0e41,	// (0x0001683c) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x00024ada) find_pinb_pane_t

0x0e56,	// (0x00016851) input_focus_pane_cp01_ParamLimits

0x0e56,	// (0x00016851) input_focus_pane_cp01

0x0e62,	// (0x0001685d) cell_pinb_pane_ParamLimits

0x0e62,	// (0x0001685d) cell_pinb_pane

0x0e70,	// (0x0001686b) cell_pinb_pane_g1_ParamLimits

0x0e70,	// (0x0001686b) cell_pinb_pane_g1

0x0e7e,	// (0x00016879) cell_pinb_pane_g2_ParamLimits

0x0e7e,	// (0x00016879) cell_pinb_pane_g2

0x0e7e,	// (0x00016879) cell_pinb_pane_g3_ParamLimits

0x0e7e,	// (0x00016879) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00024adf) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00024adf) cell_pinb_pane_g

0x0b9a,	// (0x00016595) grid_highlight_pane_cp01

0x0e62,	// (0x0001685d) list_pinb_item_pane_ParamLimits

0x0e62,	// (0x0001685d) list_pinb_item_pane

0x070a,	// (0x00016105) list_highlight_pane_cp02

0x0e8c,	// (0x00016887) list_pinb_item_pane_g1_ParamLimits

0x0e8c,	// (0x00016887) list_pinb_item_pane_g1

0x0e7e,	// (0x00016879) list_pinb_item_pane_g2_ParamLimits

0x0e7e,	// (0x00016879) list_pinb_item_pane_g2

0x0e70,	// (0x0001686b) list_pinb_item_pane_g3_ParamLimits

0x0e70,	// (0x0001686b) list_pinb_item_pane_g3

0x0e7e,	// (0x00016879) list_pinb_item_pane_g4_ParamLimits

0x0e7e,	// (0x00016879) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x00024ae6) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x00024ae6) list_pinb_item_pane_g

0x0e9a,	// (0x00016895) list_pinb_item_pane_t1_ParamLimits

0x0e9a,	// (0x00016895) list_pinb_item_pane_t1

0x70a9,	// (0x0001caa4) calc_display_pane

0x70c7,	// (0x0001cac2) calc_paper_pane

0x70e3,	// (0x0001cade) grid_calc_pane

0x0b9a,	// (0x00016595) bg_list_pane_cp01

0x8619,	// (0x0001e014) clock_g1

0x8621,	// (0x0001e01c) clock_g2

0x0001,

0xf0f4,	// (0x00024aef) clock_g

0x862b,	// (0x0001e026) clock_t1_ParamLimits

0x862b,	// (0x0001e026) clock_t1

0x8640,	// (0x0001e03b) clock_t2_ParamLimits

0x8640,	// (0x0001e03b) clock_t2

0x8652,	// (0x0001e04d) clock_t3_ParamLimits

0x8652,	// (0x0001e04d) clock_t3

0x8664,	// (0x0001e05f) clock_t4_ParamLimits

0x8664,	// (0x0001e05f) clock_t4

0x8676,	// (0x0001e071) clock_t5_ParamLimits

0x8676,	// (0x0001e071) clock_t5

0x868b,	// (0x0001e086) clock_t6_ParamLimits

0x868b,	// (0x0001e086) clock_t6

0x869d,	// (0x0001e098) clock_t7_ParamLimits

0x869d,	// (0x0001e098) clock_t7

0x86af,	// (0x0001e0aa) clock_t8_ParamLimits

0x86af,	// (0x0001e0aa) clock_t8

0x86c5,	// (0x0001e0c0) clock_t9_ParamLimits

0x86c5,	// (0x0001e0c0) clock_t9

0x0008,

0xf0f9,	// (0x00024af4) clock_t_ParamLimits

0xf0f9,	// (0x00024af4) clock_t

0x0eb6,	// (0x000168b1) popup_clock_analogue_window_cp02

0x0eb6,	// (0x000168b1) popup_clock_digital_window_cp01

0x0b9a,	// (0x00016595) listscroll_help_pane

0x0b9a,	// (0x00016595) phob_pre_status_pane

0x0ebe,	// (0x000168b9) grid_qdial_pane

0x0df5,	// (0x000167f0) listscroll_mce_pane

0x0df5,	// (0x000167f0) bg_notes_pane

0x0ec8,	// (0x000168c3) list_notes_pane

0x86db,	// (0x0001e0d6) scroll_pane_cp06

0x0ed6,	// (0x000168d1) bg_calc_paper_pane

0x710f,	// (0x0001cb0a) list_calc_pane

0x0f04,	// (0x000168ff) bg_calc_display_pane

0x7129,	// (0x0001cb24) calc_display_pane_t1

0x713e,	// (0x0001cb39) calc_display_pane_t2

0x7153,	// (0x0001cb4e) calc_display_pane_t3

0x0002,

0xf10c,	// (0x00024b07) calc_display_pane_t

0x7165,	// (0x0001cb60) cell_calc_pane_ParamLimits

0x7165,	// (0x0001cb60) cell_calc_pane

0x0f22,	// (0x0001691d) bg_calc_paper_pane_g1

0x0f3a,	// (0x00016935) bg_calc_paper_pane_g2

0x0f2e,	// (0x00016929) bg_calc_paper_pane_g3

0x0f52,	// (0x0001694d) bg_calc_paper_pane_g4

0x0f46,	// (0x00016941) bg_calc_paper_pane_g5

0x86ea,	// (0x0001e0e5) bg_calc_paper_pane_g6

0x86fb,	// (0x0001e0f6) bg_calc_paper_pane_g7

0x870c,	// (0x0001e107) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x00024b0e) bg_calc_paper_pane_g

0x871d,	// (0x0001e118) calc_bg_paper_pane_g9

0x872e,	// (0x0001e129) list_calc_item_pane_ParamLimits

0x872e,	// (0x0001e129) list_calc_item_pane

0x0f5e,	// (0x00016959) list_calc_item_pane_g1

0x7192,	// (0x0001cb8d) list_calc_item_pane_t1_ParamLimits

0x7192,	// (0x0001cb8d) list_calc_item_pane_t1

0x71a4,	// (0x0001cb9f) list_calc_item_pane_t2_ParamLimits

0x71a4,	// (0x0001cb9f) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x00024b1f) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x00024b1f) list_calc_item_pane_t

0x0e0d,	// (0x00016808) cell_calc_pane_g1

0x0f7d,	// (0x00016978) grid_highlight_pane_cp02

0x875b,	// (0x0001e156) bg_calc_display_pane_g1

0x71d4,	// (0x0001cbcf) bg_calc_display_pane_g2

0x8764,	// (0x0001e15f) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x00024b29) bg_calc_display_pane_g

0x71de,	// (0x0001cbd9) cell_qdial_pane_ParamLimits

0x71de,	// (0x0001cbd9) cell_qdial_pane

0x876d,	// (0x0001e168) cell_qdial_pane_g1_ParamLimits

0x876d,	// (0x0001e168) cell_qdial_pane_g1

0x877a,	// (0x0001e175) cell_qdial_pane_g2_ParamLimits

0x877a,	// (0x0001e175) cell_qdial_pane_g2

0x0fa8,	// (0x000169a3) cell_qdial_pane_g3_ParamLimits

0x0fa8,	// (0x000169a3) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x00024b30) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x00024b30) cell_qdial_pane_g

0x8797,	// (0x0001e192) cell_qdial_pane_t1_ParamLimits

0x8797,	// (0x0001e192) cell_qdial_pane_t1

0x87af,	// (0x0001e1aa) cell_qdial_pane_t2_ParamLimits

0x87af,	// (0x0001e1aa) cell_qdial_pane_t2

0x87c2,	// (0x0001e1bd) cell_qdial_pane_t3_ParamLimits

0x87c2,	// (0x0001e1bd) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x00024b39) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x00024b39) cell_qdial_pane_t

0x0b9a,	// (0x00016595) grid_highlight_pane_cp04

0x0fb4,	// (0x000169af) thumbnail_qdial_pane_ParamLimits

0x0fb4,	// (0x000169af) thumbnail_qdial_pane

0x1010,	// (0x00016a0b) list_help_pane

0x1019,	// (0x00016a14) scroll_pane_cp02

0x87d5,	// (0x0001e1d0) help_list_pane_t1_ParamLimits

0x87d5,	// (0x0001e1d0) help_list_pane_t1

0x71f2,	// (0x0001cbed) bg_notes_pane_g2

0x71fa,	// (0x0001cbf5) bg_notes_pane_g3

0x7202,	// (0x0001cbfd) notes_bg_pane_g1

0x720a,	// (0x0001cc05) notes_bg_pane_g4

0x7212,	// (0x0001cc0d) notes_bg_pane_g5

0x721a,	// (0x0001cc15) notes_bg_pane_g6

0x7222,	// (0x0001cc1d) notes_bg_pane_g7

0x722a,	// (0x0001cc25) notes_bg_pane_g8

0x7232,	// (0x0001cc2d) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x00024b57) notes_bg_pane_g

0x880f,	// (0x0001e20a) list_notes_text_pane_ParamLimits

0x880f,	// (0x0001e20a) list_notes_text_pane

0x106a,	// (0x00016a65) list_notes_text_pane_g1

0x1073,	// (0x00016a6e) list_notes_text_pane_t1

0x883b,	// (0x0001e236) listscroll_cale_week_pane

0x8860,	// (0x0001e25b) bg_cale_heading_pane

0x109b,	// (0x00016a96) bg_cale_pane_cp01

0x8882,	// (0x0001e27d) cale_week_corner_pane

0x889c,	// (0x0001e297) cale_week_day_heading_pane

0x88be,	// (0x0001e2b9) cale_week_scroll_pane_g1

0x88db,	// (0x0001e2d6) cale_week_scroll_pane_g2

0x88ee,	// (0x0001e2e9) cale_week_scroll_pane_g3

0x8901,	// (0x0001e2fc) cale_week_scroll_pane_g4

0x8914,	// (0x0001e30f) cale_week_scroll_pane_g5

0x8927,	// (0x0001e322) cale_week_scroll_pane_g6

0x893a,	// (0x0001e335) cale_week_scroll_pane_g7

0x894f,	// (0x0001e34a) cale_week_scroll_pane_g8

0x8964,	// (0x0001e35f) cale_week_scroll_pane_g9

0x8977,	// (0x0001e372) cale_week_scroll_pane_g10

0x898a,	// (0x0001e385) cale_week_scroll_pane_g11

0x899d,	// (0x0001e398) cale_week_scroll_pane_g12

0x89b4,	// (0x0001e3af) cale_week_scroll_pane_g13

0x89cf,	// (0x0001e3ca) cale_week_scroll_pane_g14

0x89ea,	// (0x0001e3e5) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00024b66) cale_week_scroll_pane_g

0x8a1a,	// (0x0001e415) cale_week_time_pane

0x8a2f,	// (0x0001e42a) grid_cale_week_pane

0x10ca,	// (0x00016ac5) scroll_pane_cp08

0x8a4e,	// (0x0001e449) cell_cale_week_pane_ParamLimits

0x8a4e,	// (0x0001e449) cell_cale_week_pane

0x8ab0,	// (0x0001e4ab) cale_week_day_heading_pane_t1

0x8acb,	// (0x0001e4c6) cale_week_day_heading_pane_t2

0x8ae6,	// (0x0001e4e1) cale_week_day_heading_pane_t3

0x8b01,	// (0x0001e4fc) cale_week_day_heading_pane_t4

0x8b1c,	// (0x0001e517) cale_week_day_heading_pane_t5

0x8b37,	// (0x0001e532) cale_week_day_heading_pane_t6

0x8b52,	// (0x0001e54d) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00024b87) cale_week_day_heading_pane_t

0x10e7,	// (0x00016ae2) bg_cale_side_pane

0x723a,	// (0x0001cc35) cale_week_time_pane_t1

0x7254,	// (0x0001cc4f) cale_week_time_pane_t2

0x726e,	// (0x0001cc69) cale_week_time_pane_t3

0x7288,	// (0x0001cc83) cale_week_time_pane_t4

0x72a2,	// (0x0001cc9d) cale_week_time_pane_t5

0x72bc,	// (0x0001ccb7) cale_week_time_pane_t6

0x72dc,	// (0x0001ccd7) cale_week_time_pane_t7

0x72fe,	// (0x0001ccf9) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x00024b96) cale_week_time_pane_t

0x8b6d,	// (0x0001e568) cell_cale_week_pane_g2

0x8b91,	// (0x0001e58c) cell_cale_week_pane_g3_ParamLimits

0x8b91,	// (0x0001e58c) cell_cale_week_pane_g3

0x10f5,	// (0x00016af0) grid_highlight_pane_cp07

0x10fd,	// (0x00016af8) listscroll_gms_pane

0x1107,	// (0x00016b02) grid_gms_pane

0x1110,	// (0x00016b0b) listscroll_gms_pane_g1

0x1118,	// (0x00016b13) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00024ba7) listscroll_gms_pane_g

0x8ba9,	// (0x0001e5a4) scroll_pane_cp010

0x8bb4,	// (0x0001e5af) cell_gms_pane_ParamLimits

0x8bb4,	// (0x0001e5af) cell_gms_pane

0x8bc4,	// (0x0001e5bf) cell_gms_pane_g1

0x1120,	// (0x00016b1b) cell_gms_pane_g2

0x106a,	// (0x00016a65) cell_gms_pane_g3

0x1128,	// (0x00016b23) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00024bac) cell_gms_pane_g

0x1131,	// (0x00016b2c) grid_highlight_pane_cp09

0xac1a,	// (0x00020615) phob_pre_status_pane_g1

0xac22,	// (0x0002061d) phob_pre_status_pane_g2

0xac2a,	// (0x00020625) phob_pre_status_pane_g3

0xac32,	// (0x0002062d) phob_pre_status_pane_g4

0x0004,

0xf58d,	// (0x00024f88) phob_pre_status_pane_g

0xac42,	// (0x0002063d) phob_pre_status_pane_t1

0xac52,	// (0x0002064d) phob_pre_status_pane_t2

0xac62,	// (0x0002065d) phob_pre_status_pane_t3

0x0002,

0xf598,	// (0x00024f93) phob_pre_status_pane_t

0x1139,	// (0x00016b34) bg_list_pane_cp05

0x8bd4,	// (0x0001e5cf) grid_vorec_pane

0x8bde,	// (0x0001e5d9) vorec_t1

0x8bec,	// (0x0001e5e7) vorec_t2

0x8bfa,	// (0x0001e5f5) vorec_t3

0x8c08,	// (0x0001e603) vorec_t4

0x853a,	// (0x0001df35) vorec_t5

0x8548,	// (0x0001df43) vorec_t6

0x0004,

0xf1ba,	// (0x00024bb5) vorec_t

0x8556,	// (0x0001df51) wait_bar_pane_cp01

0x8c24,	// (0x0001e61f) cell_vorec_pane_ParamLimits

0x8c24,	// (0x0001e61f) cell_vorec_pane

0x7322,	// (0x0001cd1d) cell_vorec_pane_g1

0x0b9a,	// (0x00016595) grid_highlight_pane_cp05

0x0e62,	// (0x0001685d) cams_zoom_pane

0x0e62,	// (0x0001685d) image_vga_pane

0x0e7e,	// (0x00016879) main_camera_pane_g1

0x0e7e,	// (0x00016879) main_camera_pane_g2

0x0e7e,	// (0x00016879) main_camera_pane_g3

0x0e7e,	// (0x00016879) main_camera_pane_g4

0x0e7e,	// (0x00016879) main_camera_pane_g5

0x0e7e,	// (0x00016879) main_camera_pane_g6

0x0e7e,	// (0x00016879) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00024bc0) main_camera_pane_g

0x1cf8,	// (0x000176f3) main_camera_pane_t1

0x1cf8,	// (0x000176f3) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00024bd1) main_camera_pane_t

0x8c37,	// (0x0001e632) cams_zoom_pane_cp_ParamLimits

0x8c37,	// (0x0001e632) cams_zoom_pane_cp

0x8c65,	// (0x0001e660) image_cif_pane_ParamLimits

0x8c65,	// (0x0001e660) image_cif_pane

0x070a,	// (0x00016105) image_subqcif_pane

0x8c73,	// (0x0001e66e) main_video_pane_g1_ParamLimits

0x8c73,	// (0x0001e66e) main_video_pane_g1

0x8c9b,	// (0x0001e696) main_video_pane_g2_ParamLimits

0x8c9b,	// (0x0001e696) main_video_pane_g2

0x8cce,	// (0x0001e6c9) main_video_pane_g3_ParamLimits

0x8cce,	// (0x0001e6c9) main_video_pane_g3

0x8cce,	// (0x0001e6c9) main_video_pane_g4_ParamLimits

0x8cce,	// (0x0001e6c9) main_video_pane_g4

0x8cfc,	// (0x0001e6f7) main_video_pane_g5_ParamLimits

0x8cfc,	// (0x0001e6f7) main_video_pane_g5

0x115f,	// (0x00016b5a) main_video_pane_g6_ParamLimits

0x115f,	// (0x00016b5a) main_video_pane_g6

0x0006,

0xf1db,	// (0x00024bd6) main_video_pane_g_ParamLimits

0xf1db,	// (0x00024bd6) main_video_pane_g

0x8d18,	// (0x0001e713) main_video_pane_t1_ParamLimits

0x8d18,	// (0x0001e713) main_video_pane_t1

0x1179,	// (0x00016b74) cams_zoom_pane_g1

0x1179,	// (0x00016b74) cams_zoom_pane_g2

0x1179,	// (0x00016b74) cams_zoom_pane_g3

0x1179,	// (0x00016b74) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00024be5) cams_zoom_pane_g

0x8d5e,	// (0x0001e759) grid_cams_pane

0x8d6c,	// (0x0001e767) linegrid_cams_pane

0x8d7a,	// (0x0001e775) cell_cams_pane_ParamLimits

0x8d7a,	// (0x0001e775) cell_cams_pane

0x1183,	// (0x00016b7e) cams_burst_image_pane

0x118b,	// (0x00016b86) cell_cams_pane_g1

0x0b9a,	// (0x00016595) grid_highlight_pane_cp03

0x0e0d,	// (0x00016808) mp_bg_pane_g1

0x070a,	// (0x00016105) bg_list_pane_cp03

0x070a,	// (0x00016105) bg_mp_pane

0x070a,	// (0x00016105) grid_mp_pane

0x1179,	// (0x00016b74) media_player_g1

0x16da,	// (0x000170d5) media_player_t1

0x16da,	// (0x000170d5) media_player_t2

0x16da,	// (0x000170d5) media_player_t3

0x16da,	// (0x000170d5) media_player_t4

0x16da,	// (0x000170d5) media_player_t5

0x16da,	// (0x000170d5) media_player_t6

0x16da,	// (0x000170d5) media_player_t7

0x0006,

0xf577,	// (0x00024f72) media_player_t

0x070a,	// (0x00016105) wait_bar_pane_cp02

0xf55c,	// (0x00024f57) main_usb_pane_t

0x19b5,	// (0x000173b0) cell_mp_pane

0x0e0d,	// (0x00016808) cell_mp_pane_g1

0x0b9a,	// (0x00016595) grid_highlight_pane_cp06

0x1193,	// (0x00016b8e) grid_skin_colour_pane

0x119b,	// (0x00016b96) list_highlight_pane_cp03

0x8d8d,	// (0x0001e788) skin_g1

0x11a3,	// (0x00016b9e) skin_t1

0x11b2,	// (0x00016bad) skin_t2

0x0001,

0xf218,	// (0x00024c13) skin_t

0x8d97,	// (0x0001e792) cell_skin_colour_pane_ParamLimits

0x8d97,	// (0x0001e792) cell_skin_colour_pane

0x11c0,	// (0x00016bbb) cell_skin_colour_pane_g1

0x8e1b,	// (0x0001e816) call_video_g1_ParamLimits

0x8e1b,	// (0x0001e816) call_video_g1

0x8e2b,	// (0x0001e826) call_video_g2_ParamLimits

0x8e2b,	// (0x0001e826) call_video_g2

0x0001,

0xf21d,	// (0x00024c18) call_video_g_ParamLimits

0xf21d,	// (0x00024c18) call_video_g

0x8e85,	// (0x0001e880) call_video_uplink_pane_cp1_ParamLimits

0x8e85,	// (0x0001e880) call_video_uplink_pane_cp1

0x11d2,	// (0x00016bcd) call_video_uplink_pane_cp2

0x8f51,	// (0x0001e94c) video_down_crop_pane_ParamLimits

0x8f51,	// (0x0001e94c) video_down_crop_pane

0x9043,	// (0x0001ea3e) video_down_pane_ParamLimits

0x9043,	// (0x0001ea3e) video_down_pane

0x11da,	// (0x00016bd5) video_down_subqcif_pane_ParamLimits

0x11da,	// (0x00016bd5) video_down_subqcif_pane

0x11f2,	// (0x00016bed) video_down_subqcif_pane_cp_ParamLimits

0x11f2,	// (0x00016bed) video_down_subqcif_pane_cp

0x1218,	// (0x00016c13) im_reading_pane_ParamLimits

0x1218,	// (0x00016c13) im_reading_pane

0x9163,	// (0x0001eb5e) im_writing_pane_ParamLimits

0x9163,	// (0x0001eb5e) im_writing_pane

0x9181,	// (0x0001eb7c) im_reading_pane_t1

0x1232,	// (0x00016c2d) list_im_pane

0x1243,	// (0x00016c3e) scroll_pane_cp07

0x91d9,	// (0x0001ebd4) im_writing_pane_t1_ParamLimits

0x91d9,	// (0x0001ebd4) im_writing_pane_t1

0x125c,	// (0x00016c57) im_writing_pane_t2_ParamLimits

0x125c,	// (0x00016c57) im_writing_pane_t2

0x0001,

0xf227,	// (0x00024c22) im_writing_pane_t_ParamLimits

0xf227,	// (0x00024c22) im_writing_pane_t

0x0b9a,	// (0x00016595) input_focus_pane_cp04

0x0b9a,	// (0x00016595) input_focus_pane_cp05

0x91eb,	// (0x0001ebe6) list_im_single_pane_ParamLimits

0x91eb,	// (0x0001ebe6) list_im_single_pane

0x9212,	// (0x0001ec0d) list_single_im_pane_t1

0x1139,	// (0x00016b34) blid_accuracy_pane

0x1139,	// (0x00016b34) blid_compass_pane

0x2fa4,	// (0x0001899f) main_location_t1

0x2fa4,	// (0x0001899f) main_location_t2

0x2fa4,	// (0x0001899f) main_location_t3

0x0002,

0xf586,	// (0x00024f81) main_location_t

0x0b9a,	// (0x00016595) aid_levels_location

0x0e0d,	// (0x00016808) blid_accuracy_pane_g1

0x0e0d,	// (0x00016808) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x00024c76) blid_accuracy_pane_g

0x12a4,	// (0x00016c9f) wml_content_pane

0x12e2,	// (0x00016cdd) wml_button_pane_ParamLimits

0x12e2,	// (0x00016cdd) wml_button_pane

0x9221,	// (0x0001ec1c) wml_list_single_large_pane_ParamLimits

0x9221,	// (0x0001ec1c) wml_list_single_large_pane

0x924c,	// (0x0001ec47) wml_list_single_medium_pane_ParamLimits

0x924c,	// (0x0001ec47) wml_list_single_medium_pane

0x927e,	// (0x0001ec79) wml_list_single_small_pane_ParamLimits

0x927e,	// (0x0001ec79) wml_list_single_small_pane

0x12f6,	// (0x00016cf1) wml_selection_box_pane_ParamLimits

0x12f6,	// (0x00016cf1) wml_selection_box_pane

0x1309,	// (0x00016d04) wml_list_single_pane_t1

0x1318,	// (0x00016d13) wml_list_single_medium_pane_t1

0x1327,	// (0x00016d22) wml_list_single_large_pane_t1

0x1336,	// (0x00016d31) input_focus_pane_cp02_ParamLimits

0x1336,	// (0x00016d31) input_focus_pane_cp02

0x1349,	// (0x00016d44) wml_selection_box_pane_g1

0x1352,	// (0x00016d4d) wml_selection_box_pane_t1_ParamLimits

0x1352,	// (0x00016d4d) wml_selection_box_pane_t1

0x0df5,	// (0x000167f0) bg_wml_button_pane_ParamLimits

0x0df5,	// (0x000167f0) bg_wml_button_pane

0x136a,	// (0x00016d65) wml_button_pane_g1

0x1372,	// (0x00016d6d) wml_button_pane_t1

0x136a,	// (0x00016d65) wml_button_bg_pane_g1

0x1382,	// (0x00016d7d) wml_button_bg_pane_g2

0x138a,	// (0x00016d85) wml_button_bg_pane_g3

0x1392,	// (0x00016d8d) wml_button_bg_pane_g4

0x139a,	// (0x00016d95) wml_button_bg_pane_g5

0x13a2,	// (0x00016d9d) wml_button_bg_pane_g6

0x13aa,	// (0x00016da5) wml_button_bg_pane_g7

0x13b2,	// (0x00016dad) wml_button_bg_pane_g8

0x13ba,	// (0x00016db5) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00024c27) wml_button_bg_pane_g

0x92bb,	// (0x0001ecb6) bg_list_pane_cp02

0x13c2,	// (0x00016dbd) mce_header_pane_ParamLimits

0x13c2,	// (0x00016dbd) mce_header_pane

0x13d8,	// (0x00016dd3) mce_icon_pane

0x13d8,	// (0x00016dd3) mce_image_pane

0x13e1,	// (0x00016ddc) mce_text_pane_ParamLimits

0x13e1,	// (0x00016ddc) mce_text_pane

0x92c5,	// (0x0001ecc0) scroll_pane_cp03

0x12da,	// (0x00016cd5) scroll_pane_cp04

0x13f4,	// (0x00016def) scroll_pane_cp05_ParamLimits

0x13f4,	// (0x00016def) scroll_pane_cp05

0x92cf,	// (0x0001ecca) mce_header_field_pane_ParamLimits

0x92cf,	// (0x0001ecca) mce_header_field_pane

0x92ef,	// (0x0001ecea) mce_header_field_pane_2_ParamLimits

0x92ef,	// (0x0001ecea) mce_header_field_pane_2

0x9305,	// (0x0001ed00) mce_header_field_pane_3

0x930d,	// (0x0001ed08) list_single_mce_message_pane_ParamLimits

0x930d,	// (0x0001ed08) list_single_mce_message_pane

0x933b,	// (0x0001ed36) list_single_mce_smart_pane_ParamLimits

0x933b,	// (0x0001ed36) list_single_mce_smart_pane

0x1400,	// (0x00016dfb) input_focus_pane_cp03

0x1409,	// (0x00016e04) list_header_data_pane

0x9374,	// (0x0001ed6f) mce_header_field_pane_t1

0x9382,	// (0x0001ed7d) list_single_mce_header_pane_ParamLimits

0x9382,	// (0x0001ed7d) list_single_mce_header_pane

0x1411,	// (0x00016e0c) list_single_mce_header_pane_t1

0x1420,	// (0x00016e1b) list_single_mce_message_pane_g1

0x1428,	// (0x00016e23) list_single_mce_message_pane_t1

0x93d8,	// (0x0001edd3) bg_cale_heading_pane_cp01_ParamLimits

0x93d8,	// (0x0001edd3) bg_cale_heading_pane_cp01

0x1436,	// (0x00016e31) bg_cale_pane_cp02_ParamLimits

0x1436,	// (0x00016e31) bg_cale_pane_cp02

0x9426,	// (0x0001ee21) cale_month_corner_pane

0x9445,	// (0x0001ee40) cale_month_day_heading_pane_ParamLimits

0x9445,	// (0x0001ee40) cale_month_day_heading_pane

0x94ab,	// (0x0001eea6) cale_month_pane_g1_ParamLimits

0x94ab,	// (0x0001eea6) cale_month_pane_g1

0x94ee,	// (0x0001eee9) cale_month_pane_g2_ParamLimits

0x94ee,	// (0x0001eee9) cale_month_pane_g2

0x9528,	// (0x0001ef23) cale_month_pane_g3_ParamLimits

0x9528,	// (0x0001ef23) cale_month_pane_g3

0x9578,	// (0x0001ef73) cale_month_pane_g4_ParamLimits

0x9578,	// (0x0001ef73) cale_month_pane_g4

0x95c8,	// (0x0001efc3) cale_month_pane_g5_ParamLimits

0x95c8,	// (0x0001efc3) cale_month_pane_g5

0x9618,	// (0x0001f013) cale_month_pane_g6_ParamLimits

0x9618,	// (0x0001f013) cale_month_pane_g6

0x9668,	// (0x0001f063) cale_month_pane_g7_ParamLimits

0x9668,	// (0x0001f063) cale_month_pane_g7

0x96d0,	// (0x0001f0cb) cale_month_pane_g8_ParamLimits

0x96d0,	// (0x0001f0cb) cale_month_pane_g8

0x9738,	// (0x0001f133) cale_month_pane_g9_ParamLimits

0x9738,	// (0x0001f133) cale_month_pane_g9

0x9796,	// (0x0001f191) cale_month_pane_g10_ParamLimits

0x9796,	// (0x0001f191) cale_month_pane_g10

0x97f4,	// (0x0001f1ef) cale_month_pane_g11_ParamLimits

0x97f4,	// (0x0001f1ef) cale_month_pane_g11

0x9848,	// (0x0001f243) cale_month_pane_g12_ParamLimits

0x9848,	// (0x0001f243) cale_month_pane_g12

0x989e,	// (0x0001f299) cale_month_pane_g13_ParamLimits

0x989e,	// (0x0001f299) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00024c3a) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00024c3a) cale_month_pane_g

0x98f4,	// (0x0001f2ef) cale_month_week_pane

0x9918,	// (0x0001f313) grid_cale_month_pane_ParamLimits

0x9918,	// (0x0001f313) grid_cale_month_pane

0x9975,	// (0x0001f370) cale_month_day_heading_pane_t1

0x99fb,	// (0x0001f3f6) cale_month_day_heading_pane_t2

0x9a74,	// (0x0001f46f) cale_month_day_heading_pane_t3

0x9aed,	// (0x0001f4e8) cale_month_day_heading_pane_t4

0x9b66,	// (0x0001f561) cale_month_day_heading_pane_t5

0x9bdf,	// (0x0001f5da) cale_month_day_heading_pane_t6

0x9c58,	// (0x0001f653) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00024c55) cale_month_day_heading_pane_t

0x10e7,	// (0x00016ae2) bg_cale_side_pane_cp01

0x9ce9,	// (0x0001f6e4) cale_month_week_pane_t1

0x9d02,	// (0x0001f6fd) cale_month_week_pane_t2

0x9d1b,	// (0x0001f716) cale_month_week_pane_t3

0x9d34,	// (0x0001f72f) cale_month_week_pane_t4

0x9d4f,	// (0x0001f74a) cale_month_week_pane_t5

0x9d70,	// (0x0001f76b) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00024c64) cale_month_week_pane_t

0x9d91,	// (0x0001f78c) cell_cale_month_pane_ParamLimits

0x9d91,	// (0x0001f78c) cell_cale_month_pane

0x732c,	// (0x0001cd27) cell_cale_month_pane_g1

0x7338,	// (0x0001cd33) cell_cale_month_pane_t1_ParamLimits

0x7338,	// (0x0001cd33) cell_cale_month_pane_t1

0x10f5,	// (0x00016af0) grid_highlight_pane_cp08

0x0e0d,	// (0x00016808) main_smil_g1

0x9eb7,	// (0x0001f8b2) smil_status_pane

0x1481,	// (0x00016e7c) smil_text_pane

0x2e7c,	// (0x00018877) bg_popup_call3_rect_pane_g8

0x2e84,	// (0x0001887f) bg_popup_call3_rect_pane_g9

0x0008,

0xf507,	// (0x00024f02) bg_popup_call3_rect_pane_g

0x30d4,	// (0x00018acf) smil_status_volume_pane_g1

0x148b,	// (0x00016e86) smil_status_pane_t1

0x760e,	// (0x0001d009) volume_smil_pane

0x14a2,	// (0x00016e9d) list_smil_text_pane

0x9eca,	// (0x0001f8c5) scroll_pane_cp011

0x9ed5,	// (0x0001f8d0) smil_text_list_pane_t1_ParamLimits

0x9ed5,	// (0x0001f8d0) smil_text_list_pane_t1

0x7364,	// (0x0001cd5f) aid_volume_smil_ParamLimits

0x7364,	// (0x0001cd5f) aid_volume_smil

0x0e0d,	// (0x00016808) smil_volume_pane_g1

0x0e0d,	// (0x00016808) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x00024c76) smil_volume_pane_g

0x883b,	// (0x0001e236) listscroll_cale_day_pane

0x14ce,	// (0x00016ec9) bg_cale_pane

0x14e6,	// (0x00016ee1) list_cale_pane

0x1509,	// (0x00016f04) scroll_pane_cp09

0x151a,	// (0x00016f15) cale_bg_pane_g1

0x1522,	// (0x00016f1d) cale_bg_pane_g2

0x152a,	// (0x00016f25) cale_bg_pane_g3

0x1532,	// (0x00016f2d) cale_bg_pane_g4

0x153a,	// (0x00016f35) cale_bg_pane_g5

0x1542,	// (0x00016f3d) cale_bg_pane_g6

0x154a,	// (0x00016f45) cale_bg_pane_g7

0x1552,	// (0x00016f4d) cale_bg_pane_g8

0x155a,	// (0x00016f55) cale_bg_pane_g9

0x0008,

0xf280,	// (0x00024c7b) cale_bg_pane_g

0x9f6a,	// (0x0001f965) list_cale_time_pane_ParamLimits

0x9f6a,	// (0x0001f965) list_cale_time_pane

0x1562,	// (0x00016f5d) list_cale_time_pane_g1_ParamLimits

0x1562,	// (0x00016f5d) list_cale_time_pane_g1

0x156e,	// (0x00016f69) list_cale_time_pane_g2_ParamLimits

0x156e,	// (0x00016f69) list_cale_time_pane_g2

0x9f92,	// (0x0001f98d) list_cale_time_pane_g3_ParamLimits

0x9f92,	// (0x0001f98d) list_cale_time_pane_g3

0x9fa0,	// (0x0001f99b) list_cale_time_pane_g4_ParamLimits

0x9fa0,	// (0x0001f99b) list_cale_time_pane_g4

0x9fae,	// (0x0001f9a9) list_cale_time_pane_g5_ParamLimits

0x9fae,	// (0x0001f9a9) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x00024c8e) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x00024c8e) list_cale_time_pane_g

0x1588,	// (0x00016f83) list_cale_time_pane_t1_ParamLimits

0x1588,	// (0x00016f83) list_cale_time_pane_t1

0x15b0,	// (0x00016fab) list_cale_time_pane_t2_ParamLimits

0x15b0,	// (0x00016fab) list_cale_time_pane_t2

0xa212,	// (0x0001fc0d) aid_blid_cardinal_pane

0xa254,	// (0x0001fc4f) compass_pane_t4

0x15d8,	// (0x00016fd3) list_cale_time_pane_t4_ParamLimits

0x15d8,	// (0x00016fd3) list_cale_time_pane_t4

0xa262,	// (0x0001fc5d) compass_pane_t5

0xa272,	// (0x0001fc6d) compass_pane_t6

0xa280,	// (0x0001fc7b) compass_pane_t7

0x1acf,	// (0x000174ca) navi_pane_cc_t1

0x1cbe,	// (0x000176b9) aid_phob_thumbnail_center_pane

0xa6b3,	// (0x000200ae) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x00024c9b) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x00024c9b) list_cale_time_pane_t

0x07f1,	// (0x000161ec) bg_popup_window_pane_cp02_ParamLimits

0x07f1,	// (0x000161ec) bg_popup_window_pane_cp02

0x1600,	// (0x00016ffb) heading_pane_cp01_ParamLimits

0x1600,	// (0x00016ffb) heading_pane_cp01

0x160c,	// (0x00017007) loc_req_pane_ParamLimits

0x160c,	// (0x00017007) loc_req_pane

0x161c,	// (0x00017017) loc_type_pane_ParamLimits

0x161c,	// (0x00017017) loc_type_pane

0x162e,	// (0x00017029) loc_type_pane_t1_ParamLimits

0x162e,	// (0x00017029) loc_type_pane_t1

0x1640,	// (0x0001703b) loc_type_pane_t2_ParamLimits

0x1640,	// (0x0001703b) loc_type_pane_t2

0x1652,	// (0x0001704d) loc_type_pane_t3_ParamLimits

0x1652,	// (0x0001704d) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x00024ca2) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x00024ca2) loc_type_pane_t

0x1664,	// (0x0001705f) list_loc_req_pane

0x166e,	// (0x00017069) scroll_pane_cp012

0x9fbc,	// (0x0001f9b7) list_single_loc_request_popup_menu_pane_ParamLimits

0x9fbc,	// (0x0001f9b7) list_single_loc_request_popup_menu_pane

0x1679,	// (0x00017074) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1679,	// (0x00017074) list_single_loc_request_popup_menu_pane_g1

0x1685,	// (0x00017080) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1685,	// (0x00017080) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x00024ca9) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x00024ca9) list_single_loc_request_popup_menu_pane_g

0x1691,	// (0x0001708c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1691,	// (0x0001708c) list_single_loc_request_popup_menu_pane_t1

0x9fd4,	// (0x0001f9cf) bg_popup_window_pane_cp03_ParamLimits

0x9fd4,	// (0x0001f9cf) bg_popup_window_pane_cp03

0x9fe2,	// (0x0001f9dd) heading_loc_req_pane_ParamLimits

0x9fe2,	// (0x0001f9dd) heading_loc_req_pane

0x9fee,	// (0x0001f9e9) popup_dyc_status_message_window_g1_ParamLimits

0x9fee,	// (0x0001f9e9) popup_dyc_status_message_window_g1

0x9ffa,	// (0x0001f9f5) popup_dyc_status_message_window_t1_ParamLimits

0x9ffa,	// (0x0001f9f5) popup_dyc_status_message_window_t1

0xa00c,	// (0x0001fa07) popup_dyc_status_message_window_t2_ParamLimits

0xa00c,	// (0x0001fa07) popup_dyc_status_message_window_t2

0xa01e,	// (0x0001fa19) popup_dyc_status_message_window_t3_ParamLimits

0xa01e,	// (0x0001fa19) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x00024cae) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x00024cae) popup_dyc_status_message_window_t

0x0b9a,	// (0x00016595) bg_heading_pane_cp01

0x16b3,	// (0x000170ae) heading_loc_req_pane_g1

0x16bb,	// (0x000170b6) heading_loc_req_pane_g2

0x16c3,	// (0x000170be) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x00024cb5) heading_loc_req_pane_g

0x16cb,	// (0x000170c6) heading_loc_req_pane_t1

0x16ea,	// (0x000170e5) bg_popup_sub_pane_cp01_ParamLimits

0x16ea,	// (0x000170e5) bg_popup_sub_pane_cp01

0x16f8,	// (0x000170f3) popup_cale_events_window_g1_ParamLimits

0x16f8,	// (0x000170f3) popup_cale_events_window_g1

0x1718,	// (0x00017113) popup_cale_events_window_g2_ParamLimits

0x1718,	// (0x00017113) popup_cale_events_window_g2

0x0001,

0xf2dc,	// (0x00024cd7) popup_cale_events_window_g_ParamLimits

0xf2dc,	// (0x00024cd7) popup_cale_events_window_g

0x1738,	// (0x00017133) popup_cale_events_window_t1_ParamLimits

0x1738,	// (0x00017133) popup_cale_events_window_t1

0x174a,	// (0x00017145) popup_cale_events_window_t2_ParamLimits

0x174a,	// (0x00017145) popup_cale_events_window_t2

0x1788,	// (0x00017183) popup_cale_events_window_t3_ParamLimits

0x1788,	// (0x00017183) popup_cale_events_window_t3

0x17c2,	// (0x000171bd) popup_cale_events_window_t4_ParamLimits

0x17c2,	// (0x000171bd) popup_cale_events_window_t4

0x0003,

0xf2e1,	// (0x00024cdc) popup_cale_events_window_t_ParamLimits

0xf2e1,	// (0x00024cdc) popup_cale_events_window_t

0xa048,	// (0x0001fa43) call_type_pane

0x26a7,	// (0x000180a2) popup_call_status_window_g1

0xa054,	// (0x0001fa4f) popup_call_status_window_g2

0xa060,	// (0x0001fa5b) popup_call_status_window_g3

0x0002,

0xf2ea,	// (0x00024ce5) popup_call_status_window_g

0x17f8,	// (0x000171f3) call_type_pane_g1

0x1801,	// (0x000171fc) call_type_pane_g2

0x0001,

0xf2f1,	// (0x00024cec) call_type_pane_g

0x0b9a,	// (0x00016595) bg_popup_sub_pane_cp02

0x180a,	// (0x00017205) listscroll_popup_wml_pane

0x1812,	// (0x0001720d) list_wml_pane

0x181c,	// (0x00017217) scroll_pane_cp013

0x1827,	// (0x00017222) list_single_graphic_popup_wml_pane_ParamLimits

0x1827,	// (0x00017222) list_single_graphic_popup_wml_pane

0x0e0d,	// (0x00016808) list_single_graphic_popup_wml_pane_g1

0x183b,	// (0x00017236) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f6,	// (0x00024cf1) list_single_graphic_popup_wml_pane_g

0x1843,	// (0x0001723e) list_single_graphic_popup_wml_pane_t1

0x1851,	// (0x0001724c) aid_call_pane

0x0ded,	// (0x000167e8) popup_clock_analogue_window_g1

0x0ded,	// (0x000167e8) popup_clock_analogue_window_g2

0x7386,	// (0x0001cd81) popup_clock_analogue_window_g3

0x7386,	// (0x0001cd81) popup_clock_analogue_window_g4

0x0e0d,	// (0x00016808) popup_clock_analogue_window_g5

0x0004,

0xf2fb,	// (0x00024cf6) popup_clock_analogue_window_g

0x738e,	// (0x0001cd89) popup_clock_analogue_window_t1

0x739c,	// (0x0001cd97) clock_digital_number_pane_ParamLimits

0x739c,	// (0x0001cd97) clock_digital_number_pane

0x73a8,	// (0x0001cda3) clock_digital_number_pane_cp02_ParamLimits

0x73a8,	// (0x0001cda3) clock_digital_number_pane_cp02

0x73b4,	// (0x0001cdaf) clock_digital_number_pane_cp03_ParamLimits

0x73b4,	// (0x0001cdaf) clock_digital_number_pane_cp03

0x73c0,	// (0x0001cdbb) clock_digital_number_pane_cp04_ParamLimits

0x73c0,	// (0x0001cdbb) clock_digital_number_pane_cp04

0x73cc,	// (0x0001cdc7) clock_digital_separator_pane_ParamLimits

0x73cc,	// (0x0001cdc7) clock_digital_separator_pane

0x73d8,	// (0x0001cdd3) popup_clock_digital_window_t1

0x0e0d,	// (0x00016808) clock_digital_number_pane_g1

0x0e0d,	// (0x00016808) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x00024c76) clock_digital_number_pane_g

0x0e0d,	// (0x00016808) clock_digital_separator_pane_g1

0x0e0d,	// (0x00016808) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x00024c76) clock_digital_separator_pane_g

0x0b9a,	// (0x00016595) bg_popup_window_pane_cp04

0x18d0,	// (0x000172cb) heading_pane_cp03

0x1139,	// (0x00016b34) listscroll_popup_gms_pane

0x0b9a,	// (0x00016595) grid_large_graphic_popup_pane

0x18d9,	// (0x000172d4) listscroll_popup_gms_pane_g1

0x18e2,	// (0x000172dd) listscroll_popup_gms_pane_g2

0x0001,

0xf306,	// (0x00024d01) listscroll_popup_gms_pane_g

0x18eb,	// (0x000172e6) scroll_pane_cp014

0x0e62,	// (0x0001685d) cell_large_graphic_popup_pane_ParamLimits

0x0e62,	// (0x0001685d) cell_large_graphic_popup_pane

0x0e70,	// (0x0001686b) cell_large_graphic_popup_pane_g1_ParamLimits

0x0e70,	// (0x0001686b) cell_large_graphic_popup_pane_g1

0x18f4,	// (0x000172ef) cell_large_graphic_popup_pane_g2_ParamLimits

0x18f4,	// (0x000172ef) cell_large_graphic_popup_pane_g2

0x1902,	// (0x000172fd) cell_large_graphic_popup_pane_g3_ParamLimits

0x1902,	// (0x000172fd) cell_large_graphic_popup_pane_g3

0x1910,	// (0x0001730b) cell_large_graphic_popup_pane_g4_ParamLimits

0x1910,	// (0x0001730b) cell_large_graphic_popup_pane_g4

0x0003,

0xf30b,	// (0x00024d06) cell_large_graphic_popup_pane_g_ParamLimits

0xf30b,	// (0x00024d06) cell_large_graphic_popup_pane_g

0x0b9a,	// (0x00016595) grid_highlight_pane_cp010

0x0e0d,	// (0x00016808) bg_popup_call_pane_g1

0x1921,	// (0x0001731c) list_single_graphic_popup_conf_pane_ParamLimits

0x1921,	// (0x0001731c) list_single_graphic_popup_conf_pane

0x1934,	// (0x0001732f) list_highlight_pane_cp01

0x193d,	// (0x00017338) list_single_graphic_popup_conf_pane_g1

0x1945,	// (0x00017340) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf314,	// (0x00024d0f) list_single_graphic_popup_conf_pane_g

0x194d,	// (0x00017348) list_single_graphic_popup_conf_pane_t1

0x195b,	// (0x00017356) linegrid_cams_pane_g1

0xa06c,	// (0x0001fa67) linegrid_cams_pane_g2

0x106a,	// (0x00016a65) linegrid_cams_pane_g3

0x1964,	// (0x0001735f) linegrid_cams_pane_g4

0xa075,	// (0x0001fa70) linegrid_cams_pane_g5

0xa07e,	// (0x0001fa79) linegrid_cams_pane_g6

0x1128,	// (0x00016b23) linegrid_cams_pane_g7

0x0006,

0xf319,	// (0x00024d14) linegrid_cams_pane_g

0x196d,	// (0x00017368) popup_clock_analogue_window

0x196d,	// (0x00017368) popup_clock_digital_window

0x0b9a,	// (0x00016595) popup_phob_thumbnail_window

0x0e0d,	// (0x00016808) call_video_uplink_pane_g1

0x1976,	// (0x00017371) call_video_uplink_pane_g2

0x0001,

0xf328,	// (0x00024d23) call_video_uplink_pane_g

0x197e,	// (0x00017379) video_uplink_pane

0x1986,	// (0x00017381) mce_image_pane_g1

0xa087,	// (0x0001fa82) mce_image_pane_g2

0xa08f,	// (0x0001fa8a) mce_image_pane_g3

0xa097,	// (0x0001fa92) mce_image_pane_g4

0xa09f,	// (0x0001fa9a) mce_image_pane_g5

0x0004,

0xf32d,	// (0x00024d28) mce_image_pane_g

0x1990,	// (0x0001738b) control_top_pane_stacon_cp01_ParamLimits

0x1990,	// (0x0001738b) control_top_pane_stacon_cp01

0x19a4,	// (0x0001739f) uni_indicator_pane_stacon_cp01_ParamLimits

0x19a4,	// (0x0001739f) uni_indicator_pane_stacon_cp01

0x19b5,	// (0x000173b0) bg_popup_sub_pane_cp03

0xa0a7,	// (0x0001faa2) chi_dic_find_pane

0xa0af,	// (0x0001faaa) listscroll_chi_dic_pane

0xa0b8,	// (0x0001fab3) main_pane_chidic_g1

0xa0cb,	// (0x0001fac6) chi_dic_find_pane_t1

0x19bf,	// (0x000173ba) find_chidic_pane

0x19c8,	// (0x000173c3) chi_dic_list_pane_ParamLimits

0x19c8,	// (0x000173c3) chi_dic_list_pane

0x19d9,	// (0x000173d4) scroll_pane_cp020

0xa0d9,	// (0x0001fad4) find_chidic_pane_t1

0x0b9a,	// (0x00016595) input_focus_pane_cp06

0xa0e8,	// (0x0001fae3) list_chi_dic_pane_ParamLimits

0xa0e8,	// (0x0001fae3) list_chi_dic_pane

0xa105,	// (0x0001fb00) list_chi_dic_pane_t1_ParamLimits

0xa105,	// (0x0001fb00) list_chi_dic_pane_t1

0x0b9a,	// (0x00016595) list_highlight_pane_cp020

0x19e1,	// (0x000173dc) bg_cale_heading_pane_g1

0xa118,	// (0x0001fb13) bg_cale_heading_pane_g2

0xa120,	// (0x0001fb1b) bg_cale_heading_pane_g3

0xa128,	// (0x0001fb23) bg_cale_heading_pane_g4

0xa132,	// (0x0001fb2d) bg_cale_heading_pane_g5

0xa13c,	// (0x0001fb37) bg_cale_heading_pane_g6

0xa144,	// (0x0001fb3f) bg_cale_heading_pane_g7

0xa14c,	// (0x0001fb47) bg_cale_heading_pane_g8

0xa156,	// (0x0001fb51) bg_cale_heading_pane_g9

0x0008,

0xf338,	// (0x00024d33) bg_cale_heading_pane_g

0x19e1,	// (0x000173dc) bg_cale_side_pane_g1

0xa160,	// (0x0001fb5b) bg_cale_side_pane_g2

0xa16a,	// (0x0001fb65) bg_cale_side_pane_g3

0xa174,	// (0x0001fb6f) bg_cale_side_pane_g4

0xa17e,	// (0x0001fb79) bg_cale_side_pane_g5

0xa188,	// (0x0001fb83) bg_cale_side_pane_g6

0xa192,	// (0x0001fb8d) bg_cale_side_pane_g7

0xa19c,	// (0x0001fb97) bg_cale_side_pane_g8

0xa1a4,	// (0x0001fb9f) bg_cale_side_pane_g9

0x0008,

0xf34b,	// (0x00024d46) bg_cale_side_pane_g

0xa1ac,	// (0x0001fba7) popup_call_status_window_ParamLimits

0xa1ac,	// (0x0001fba7) popup_call_status_window

0x19e9,	// (0x000173e4) stacon_top_pane

0x19f1,	// (0x000173ec) status_pane_ParamLimits

0x19f1,	// (0x000173ec) status_pane

0x1a06,	// (0x00017401) status_small_pane

0x1a0e,	// (0x00017409) control_pane

0x0b9a,	// (0x00016595) stacon_bottom_pane

0x1a16,	// (0x00017411) list_single_mce_smart_pane_t1_ParamLimits

0x1a16,	// (0x00017411) list_single_mce_smart_pane_t1

0x1a29,	// (0x00017424) list_single_mce_smart_pane_t2_ParamLimits

0x1a29,	// (0x00017424) list_single_mce_smart_pane_t2

0x0001,

0xf35e,	// (0x00024d59) list_single_mce_smart_pane_t_ParamLimits

0xf35e,	// (0x00024d59) list_single_mce_smart_pane_t

0xa1b8,	// (0x0001fbb3) compass_pane

0xa1c4,	// (0x0001fbbf) main_location2_pane_t1

0xa1d8,	// (0x0001fbd3) main_location2_pane_t2

0xa1ec,	// (0x0001fbe7) main_location2_pane_t3

0x0003,

0xf363,	// (0x00024d5e) main_location2_pane_t

0x1a48,	// (0x00017443) compass_pane_g1_ParamLimits

0x1a48,	// (0x00017443) compass_pane_g1

0xa236,	// (0x0001fc31) compass_pane_t1

0xa245,	// (0x0001fc40) compass_pane_t2

0x0005,

0xf36c,	// (0x00024d67) compass_pane_t

0xa290,	// (0x0001fc8b) text_secondary_cp61

0x1ac6,	// (0x000174c1) navi_pane_cams_g5

0x1b42,	// (0x0001753d) navi_pane_im_t1

0x1b50,	// (0x0001754b) navi_pane_mp_g1_ParamLimits

0x1b50,	// (0x0001754b) navi_pane_mp_g1

0x1b64,	// (0x0001755f) navi_pane_mp_g2_ParamLimits

0x1b64,	// (0x0001755f) navi_pane_mp_g2

0x1b70,	// (0x0001756b) navi_pane_mp_g3_ParamLimits

0x1b70,	// (0x0001756b) navi_pane_mp_g3

0x0002,

0xf380,	// (0x00024d7b) navi_pane_mp_g_ParamLimits

0xf380,	// (0x00024d7b) navi_pane_mp_g

0x1b7c,	// (0x00017577) navi_pane_mp_t1

0x1b8a,	// (0x00017585) navi_pane_mp_t2

0x0002,

0xf387,	// (0x00024d82) navi_pane_mp_t

0x1bf5,	// (0x000175f0) navi_pane_vt_g1

0x1b7c,	// (0x00017577) navi_pane_vt_t1

0x1bfd,	// (0x000175f8) navi_slider_pane

0x1139,	// (0x00016b34) zooming_pane

0x1c0d,	// (0x00017608) navi_slider_pane_g1

0x73f5,	// (0x0001cdf0) navi_slider_pane_g2

0x0006,

0xf38e,	// (0x00024d89) navi_slider_pane_g

0x1c43,	// (0x0001763e) aid_levels_zoom

0x1c4b,	// (0x00017646) zooming_pane_g1

0x1c53,	// (0x0001764e) zooming_pane_g2

0x1c53,	// (0x0001764e) zooming_pane_g3

0x0002,

0xf39d,	// (0x00024d98) zooming_pane_g

0x1c5b,	// (0x00017656) level_10_zoom

0x1c64,	// (0x0001765f) level_11_zoom

0x1c6d,	// (0x00017668) level_1_zoom

0x1c76,	// (0x00017671) level_2_zoom

0x1c7f,	// (0x0001767a) level_3_zoom

0x1c88,	// (0x00017683) level_4_zoom

0x1c91,	// (0x0001768c) level_5_zoom

0x1c9a,	// (0x00017695) level_6_zoom

0x1ca3,	// (0x0001769e) level_7_zoom

0x1cac,	// (0x000176a7) level_8_zoom

0x1cb5,	// (0x000176b0) level_9_zoom

0x1cc6,	// (0x000176c1) popup_phob_thumbnail_window_g1

0x1cce,	// (0x000176c9) popup_phob_thumbnail_window_g2

0x0001,

0xf3a4,	// (0x00024d9f) popup_phob_thumbnail_window_g

0xac72,	// (0x0002066d) level_1_location

0xac7a,	// (0x00020675) level_2_location

0xac82,	// (0x0002067d) level_3_location

0xac8c,	// (0x00020687) level_4_location

0x1139,	// (0x00016b34) level_5_location

0xa2cb,	// (0x0001fcc6) mce_icon_pane_g1

0xa2d3,	// (0x0001fcce) mce_icon_pane_g2

0x0001,

0xf3a9,	// (0x00024da4) mce_icon_pane_g

0xa2db,	// (0x0001fcd6) main_mup_pane_g1_ParamLimits

0xa2db,	// (0x0001fcd6) main_mup_pane_g1

0x0e8c,	// (0x00016887) main_mup_pane_g2_ParamLimits

0x0e8c,	// (0x00016887) main_mup_pane_g2

0x0e8c,	// (0x00016887) main_mup_pane_g3_ParamLimits

0x0e8c,	// (0x00016887) main_mup_pane_g3

0x0e8c,	// (0x00016887) main_mup_pane_g4_ParamLimits

0x0e8c,	// (0x00016887) main_mup_pane_g4

0x0e8c,	// (0x00016887) main_mup_pane_g5_ParamLimits

0x0e8c,	// (0x00016887) main_mup_pane_g5

0x0e8c,	// (0x00016887) main_mup_pane_g6_ParamLimits

0x0e8c,	// (0x00016887) main_mup_pane_g6

0x0e8c,	// (0x00016887) main_mup_pane_g7_ParamLimits

0x0e8c,	// (0x00016887) main_mup_pane_g7

0x0e8c,	// (0x00016887) main_mup_pane_g8_ParamLimits

0x0e8c,	// (0x00016887) main_mup_pane_g8

0x0e8c,	// (0x00016887) main_mup_pane_g9_ParamLimits

0x0e8c,	// (0x00016887) main_mup_pane_g9

0x0e8c,	// (0x00016887) main_mup_pane_g10_ParamLimits

0x0e8c,	// (0x00016887) main_mup_pane_g10

0x0e8c,	// (0x00016887) main_mup_pane_g11_ParamLimits

0x0e8c,	// (0x00016887) main_mup_pane_g11

0x0e7e,	// (0x00016879) main_mup_pane_g12_ParamLimits

0x0e7e,	// (0x00016879) main_mup_pane_g12

0x0e8c,	// (0x00016887) main_mup_pane_g13_ParamLimits

0x0e8c,	// (0x00016887) main_mup_pane_g13

0x000c,

0xf3ae,	// (0x00024da9) main_mup_pane_g_ParamLimits

0xf3ae,	// (0x00024da9) main_mup_pane_g

0x0e9a,	// (0x00016895) main_mup_pane_t1_ParamLimits

0x0e9a,	// (0x00016895) main_mup_pane_t1

0x0e9a,	// (0x00016895) main_mup_pane_t2_ParamLimits

0x0e9a,	// (0x00016895) main_mup_pane_t2

0x0e9a,	// (0x00016895) main_mup_pane_t3_ParamLimits

0x0e9a,	// (0x00016895) main_mup_pane_t3

0x1cf8,	// (0x000176f3) main_mup_pane_t4_ParamLimits

0x1cf8,	// (0x000176f3) main_mup_pane_t4

0x1cf8,	// (0x000176f3) main_mup_pane_t5_ParamLimits

0x1cf8,	// (0x000176f3) main_mup_pane_t5

0x114b,	// (0x00016b46) main_mup_pane_t6_ParamLimits

0x114b,	// (0x00016b46) main_mup_pane_t6

0x0005,

0xf3c9,	// (0x00024dc4) main_mup_pane_t_ParamLimits

0xf3c9,	// (0x00024dc4) main_mup_pane_t

0x0779,	// (0x00016174) mup_progress_pane_ParamLimits

0x0779,	// (0x00016174) mup_progress_pane

0x315f,	// (0x00018b5a) mup_visualizer_pane_ParamLimits

0x315f,	// (0x00018b5a) mup_visualizer_pane

0x315f,	// (0x00018b5a) mup_volume_pane_ParamLimits

0x315f,	// (0x00018b5a) mup_volume_pane

0x0e7e,	// (0x00016879) mup_visualizer_pane_g1_ParamLimits

0x0e7e,	// (0x00016879) mup_visualizer_pane_g1

0x1d1a,	// (0x00017715) mup_visualizer_pane_g2_ParamLimits

0x1d1a,	// (0x00017715) mup_visualizer_pane_g2

0x0e70,	// (0x0001686b) mup_visualizer_pane_g3_ParamLimits

0x0e70,	// (0x0001686b) mup_visualizer_pane_g3

0x0002,

0xf3d6,	// (0x00024dd1) mup_visualizer_pane_g_ParamLimits

0xf3d6,	// (0x00024dd1) mup_visualizer_pane_g

0x1179,	// (0x00016b74) mup_volume_pane_g1

0x1179,	// (0x00016b74) mup_volume_pane_g2

0x0001,

0xf3dd,	// (0x00024dd8) mup_volume_pane_g

0x1179,	// (0x00016b74) mup_progress_pane_g1

0x1179,	// (0x00016b74) mup_progress_pane_g2

0x1179,	// (0x00016b74) mup_progress_pane_g3

0x0002,

0xf3e2,	// (0x00024ddd) mup_progress_pane_g

0x0b9a,	// (0x00016595) bg_popup_window_pane_cp05

0x1d28,	// (0x00017723) heading_pane_cp02_ParamLimits

0x1d28,	// (0x00017723) heading_pane_cp02

0x1d42,	// (0x0001773d) list_popup_blid_pane

0x1d4a,	// (0x00017745) list_blid_sat_info_pane_ParamLimits

0x1d4a,	// (0x00017745) list_blid_sat_info_pane

0x1d5d,	// (0x00017758) list_blid_sat_info_pane_g1

0x1d65,	// (0x00017760) list_blid_sat_info_pane_t1

0xa3d6,	// (0x0001fdd1) mup_equalizer_pane_ParamLimits

0xa3d6,	// (0x0001fdd1) mup_equalizer_pane

0xa3f7,	// (0x0001fdf2) mup_equalizer_pane_cp1_ParamLimits

0xa3f7,	// (0x0001fdf2) mup_equalizer_pane_cp1

0xa418,	// (0x0001fe13) mup_equalizer_pane_cp2_ParamLimits

0xa418,	// (0x0001fe13) mup_equalizer_pane_cp2

0xa439,	// (0x0001fe34) mup_equalizer_pane_cp3_ParamLimits

0xa439,	// (0x0001fe34) mup_equalizer_pane_cp3

0xa45a,	// (0x0001fe55) mup_equalizer_pane_cp4_ParamLimits

0xa45a,	// (0x0001fe55) mup_equalizer_pane_cp4

0xa47b,	// (0x0001fe76) mup_equalizer_pane_cp5

0xa491,	// (0x0001fe8c) mup_equalizer_pane_cp6

0xa4a9,	// (0x0001fea4) mup_equalizer_pane_cp7

0x2efc,	// (0x000188f7) bg_popup_call_poc_act_pane_g9

0x2f04,	// (0x000188ff) bg_popup_call_poc_act_pane_g10

0x2f0c,	// (0x00018907) bg_popup_call_poc_act_pane_g11

0x000a,

0x0df5,	// (0x000167f0) mup_scale_pane

0x0e0d,	// (0x00016808) mup_scale_pane_g1

0x1d73,	// (0x0001776e) mup_scale_pane_g2

0x0006,

0xf3fe,	// (0x00024df9) mup_scale_pane_g

0x1d97,	// (0x00017792) msg_data_pane

0x1d9f,	// (0x0001779a) scroll_pane_cp017

0xa4d3,	// (0x0001fece) bg_list_pane_cp04_ParamLimits

0xa4d3,	// (0x0001fece) bg_list_pane_cp04

0x1da7,	// (0x000177a2) msg_data_pane_g1

0xa4f7,	// (0x0001fef2) msg_data_pane_g2

0xa4ff,	// (0x0001fefa) msg_data_pane_g3

0xa507,	// (0x0001ff02) msg_data_pane_g4

0xa50f,	// (0x0001ff0a) msg_data_pane_g5

0xa517,	// (0x0001ff12) msg_data_pane_g6

0xa51f,	// (0x0001ff1a) msg_data_pane_g7

0x0006,

0xf40d,	// (0x00024e08) msg_data_pane_g

0xa527,	// (0x0001ff22) msg_text_pane_ParamLimits

0xa527,	// (0x0001ff22) msg_text_pane

0xa579,	// (0x0001ff74) qrid_highlight_pane_cp011_ParamLimits

0xa579,	// (0x0001ff74) qrid_highlight_pane_cp011

0x0b9a,	// (0x00016595) msg_body_pane

0x0b9a,	// (0x00016595) msg_header_pane

0x1db8,	// (0x000177b3) input_focus_pane_cp07

0xa5a1,	// (0x0001ff9c) msg_header_pane_t1_ParamLimits

0xa5a1,	// (0x0001ff9c) msg_header_pane_t1

0xa5b7,	// (0x0001ffb2) msg_header_pane_t2_ParamLimits

0xa5b7,	// (0x0001ffb2) msg_header_pane_t2

0x0001,

0xf421,	// (0x00024e1c) msg_header_pane_t_ParamLimits

0xf421,	// (0x00024e1c) msg_header_pane_t

0x1dcd,	// (0x000177c8) msg_body_pane_g1

0xa5ce,	// (0x0001ffc9) msg_body_pane_t1_ParamLimits

0xa5ce,	// (0x0001ffc9) msg_body_pane_t1

0xa5ff,	// (0x0001fffa) msg_body_pane_t2_ParamLimits

0xa5ff,	// (0x0001fffa) msg_body_pane_t2

0xa611,	// (0x0002000c) msg_body_pane_t3_ParamLimits

0xa611,	// (0x0002000c) msg_body_pane_t3

0x0002,

0xf426,	// (0x00024e21) msg_body_pane_t_ParamLimits

0xf426,	// (0x00024e21) msg_body_pane_t

0x7437,	// (0x0001ce32) main_viewer_pane_g1_ParamLimits

0x7437,	// (0x0001ce32) main_viewer_pane_g1

0x7443,	// (0x0001ce3e) main_viewer_pane_g2_ParamLimits

0x7443,	// (0x0001ce3e) main_viewer_pane_g2

0xa645,	// (0x00020040) main_viewer_pane_g3_ParamLimits

0xa645,	// (0x00020040) main_viewer_pane_g3

0xa656,	// (0x00020051) main_viewer_pane_g4_ParamLimits

0xa656,	// (0x00020051) main_viewer_pane_g4

0x744f,	// (0x0001ce4a) main_viewer_pane_g5_ParamLimits

0x744f,	// (0x0001ce4a) main_viewer_pane_g5

0x744f,	// (0x0001ce4a) main_viewer_pane_g7_ParamLimits

0x744f,	// (0x0001ce4a) main_viewer_pane_g7

0x1679,	// (0x00017074) main_viewer_pane_g8_ParamLimits

0x1679,	// (0x00017074) main_viewer_pane_g8

0x0007,

0xf436,	// (0x00024e31) main_viewer_pane_g_ParamLimits

0xf436,	// (0x00024e31) main_viewer_pane_g

0x1e17,	// (0x00017812) viewer_content_pane_ParamLimits

0x1e17,	// (0x00017812) viewer_content_pane

0xa687,	// (0x00020082) main_postcard_pane_g1_ParamLimits

0xa687,	// (0x00020082) main_postcard_pane_g1

0xa695,	// (0x00020090) main_postcard_pane_g2_ParamLimits

0xa695,	// (0x00020090) main_postcard_pane_g2

0xa6a3,	// (0x0002009e) main_postcard_pane_g3_ParamLimits

0xa6a3,	// (0x0002009e) main_postcard_pane_g3

0x0005,

0xf447,	// (0x00024e42) main_postcard_pane_g_ParamLimits

0xf447,	// (0x00024e42) main_postcard_pane_g

0xa6b3,	// (0x000200ae) main_postcard_pane_g4

0x30c1,	// (0x00018abc) smil_status_volume_pane_g2

0xa6df,	// (0x000200da) postcard_pane_ParamLimits

0xa6df,	// (0x000200da) postcard_pane

0x26a7,	// (0x000180a2) postcard_pane_g1_ParamLimits

0x26a7,	// (0x000180a2) postcard_pane_g1

0xa711,	// (0x0002010c) postcard_pane_g2_ParamLimits

0xa711,	// (0x0002010c) postcard_pane_g2

0xa71d,	// (0x00020118) postcard_pane_g3_ParamLimits

0xa71d,	// (0x00020118) postcard_pane_g3

0x1e33,	// (0x0001782e) postcard_pane_g4_ParamLimits

0x1e33,	// (0x0001782e) postcard_pane_g4

0xa729,	// (0x00020124) postcard_pane_g5_ParamLimits

0xa729,	// (0x00020124) postcard_pane_g5

0xa735,	// (0x00020130) postcard_pane_g6_ParamLimits

0xa735,	// (0x00020130) postcard_pane_g6

0x1e25,	// (0x00017820) postcard_pane_g7_ParamLimits

0x1e25,	// (0x00017820) postcard_pane_g7

0x0006,

0xf454,	// (0x00024e4f) postcard_pane_g_ParamLimits

0xf454,	// (0x00024e4f) postcard_pane_g

0xa741,	// (0x0002013c) main_mp2_pane_g1_ParamLimits

0xa741,	// (0x0002013c) main_mp2_pane_g1

0xa74d,	// (0x00020148) main_mp2_pane_g2_ParamLimits

0xa74d,	// (0x00020148) main_mp2_pane_g2

0xa759,	// (0x00020154) main_mp2_pane_g3_ParamLimits

0xa759,	// (0x00020154) main_mp2_pane_g3

0x0002,

0xf463,	// (0x00024e5e) main_mp2_pane_g_ParamLimits

0xf463,	// (0x00024e5e) main_mp2_pane_g

0xa765,	// (0x00020160) main_mp2_pane_t1_ParamLimits

0xa765,	// (0x00020160) main_mp2_pane_t1

0xa77c,	// (0x00020177) main_mp2_pane_t2_ParamLimits

0xa77c,	// (0x00020177) main_mp2_pane_t2

0xa78e,	// (0x00020189) main_mp2_pane_t3_ParamLimits

0xa78e,	// (0x00020189) main_mp2_pane_t3

0x0002,

0xf46a,	// (0x00024e65) main_mp2_pane_t_ParamLimits

0xf46a,	// (0x00024e65) main_mp2_pane_t

0x1e41,	// (0x0001783c) pec_content_pane_ParamLimits

0x1e41,	// (0x0001783c) pec_content_pane

0x12da,	// (0x00016cd5) scroll_pane_cp015

0x1e53,	// (0x0001784e) pec_attribute_pane_ParamLimits

0x1e53,	// (0x0001784e) pec_attribute_pane

0xa7a0,	// (0x0002019b) pec_content_pane_g1_ParamLimits

0xa7a0,	// (0x0002019b) pec_content_pane_g1

0x1e63,	// (0x0001785e) pec_content_pane_t1_ParamLimits

0x1e63,	// (0x0001785e) pec_content_pane_t1

0x1e75,	// (0x00017870) pec_content_pane_t2_ParamLimits

0x1e75,	// (0x00017870) pec_content_pane_t2

0x0001,

0xf471,	// (0x00024e6c) pec_content_pane_t_ParamLimits

0xf471,	// (0x00024e6c) pec_content_pane_t

0xa7ac,	// (0x000201a7) list_single_graphic_pane_cp01_ParamLimits

0xa7ac,	// (0x000201a7) list_single_graphic_pane_cp01

0x0df5,	// (0x000167f0) bg_popup_sub_pane_cp04

0x1e87,	// (0x00017882) popup_mup_playback_window_g1

0x1e93,	// (0x0001788e) popup_mup_playback_window_t1

0x1ea8,	// (0x000178a3) popup_mup_playback_window_t2

0x0001,

0xf476,	// (0x00024e71) popup_mup_playback_window_t

0x1edf,	// (0x000178da) main_image_pane_g1_ParamLimits

0x1edf,	// (0x000178da) main_image_pane_g1

0x1f22,	// (0x0001791d) scroll_pane_cp018_ParamLimits

0x1f22,	// (0x0001791d) scroll_pane_cp018

0x1f3a,	// (0x00017935) scroll_pane_cp016_ParamLimits

0x1f3a,	// (0x00017935) scroll_pane_cp016

0xa846,	// (0x00020241) smil2_image_pane_ParamLimits

0xa846,	// (0x00020241) smil2_image_pane

0xa876,	// (0x00020271) smil2_root_pane_ParamLimits

0xa876,	// (0x00020271) smil2_root_pane

0xa8a2,	// (0x0002029d) smil2_text_pane_ParamLimits

0xa8a2,	// (0x0002029d) smil2_text_pane

0x0b9a,	// (0x00016595) bg_list_pane_cp06

0x1f76,	// (0x00017971) grid_radio_pane

0x0b9a,	// (0x00016595) bg_popup_window_pane_cp06

0x1f7e,	// (0x00017979) main_fmradio_pane_t1

0x2f54,	// (0x0001894f) heading_pane_cp04

0x1f8c,	// (0x00017987) main_fmradio_pane_t2

0x2f5c,	// (0x00018957) popup_cale_lunar_info_window_g1

0x1f9a,	// (0x00017995) main_fmradio_pane_t3

0x2f64,	// (0x0001895f) popup_cale_lunar_info_window_g2

0x1fa8,	// (0x000179a3) main_fmradio_pane_t4

0x0001,

0x1fb6,	// (0x000179b1) main_fmradio_pane_t5

0x0004,

0xf569,	// (0x00024f64) popup_cale_lunar_info_window_g

0xf48b,	// (0x00024e86) main_fmradio_pane_t

0x1fc4,	// (0x000179bf) wait_bar_pane_cp03

0x1fcc,	// (0x000179c7) cell_fmradio_pane_ParamLimits

0x1fcc,	// (0x000179c7) cell_fmradio_pane

0x1e25,	// (0x00017820) cell_fmradio_pane_g1_ParamLimits

0x1e25,	// (0x00017820) cell_fmradio_pane_g1

0x0b9a,	// (0x00016595) grid_highlight_pane_cp011

0x1fdf,	// (0x000179da) poc_content_pane_ParamLimits

0x1fdf,	// (0x000179da) poc_content_pane

0x1ff1,	// (0x000179ec) scroll_pane_cp019

0xa8e2,	// (0x000202dd) popup_call_poc_act_window_ParamLimits

0xa8e2,	// (0x000202dd) popup_call_poc_act_window

0xa8ef,	// (0x000202ea) popup_call_poc_inact_window_ParamLimits

0xa8ef,	// (0x000202ea) popup_call_poc_inact_window

0xf52d,	// (0x00024f28) bg_popup_call_poc_act_pane_g

0x2f14,	// (0x0001890f) bg_popup_call_poc_inact_pane_g1

0x2f1c,	// (0x00018917) bg_popup_call_poc_inact_pane_g2

0x1ff9,	// (0x000179f4) popup_call_poc_act_window_g2

0x2f24,	// (0x0001891f) bg_popup_call_poc_inact_pane_g3

0x2ea4,	// (0x0001889f) bg_popup_call_poc_inact_pane_g4

0x2f2c,	// (0x00018927) bg_popup_call_poc_inact_pane_g5

0x2001,	// (0x000179fc) popup_call_poc_act_window_t1_ParamLimits

0x2001,	// (0x000179fc) popup_call_poc_act_window_t1

0x2029,	// (0x00017a24) popup_call_poc_act_window_t2_ParamLimits

0x2029,	// (0x00017a24) popup_call_poc_act_window_t2

0x2051,	// (0x00017a4c) popup_call_poc_act_window_t3_ParamLimits

0x2051,	// (0x00017a4c) popup_call_poc_act_window_t3

0x2079,	// (0x00017a74) popup_call_poc_act_window_t4_ParamLimits

0x2079,	// (0x00017a74) popup_call_poc_act_window_t4

0x0003,

0xf496,	// (0x00024e91) popup_call_poc_act_window_t_ParamLimits

0xf496,	// (0x00024e91) popup_call_poc_act_window_t

0x2f34,	// (0x0001892f) bg_popup_call_poc_inact_pane_g6

0x2f3c,	// (0x00018937) bg_popup_call_poc_inact_pane_g7

0x2f44,	// (0x0001893f) bg_popup_call_poc_inact_pane_g8

0x208b,	// (0x00017a86) popup_call_poc_inact_window_g2

0x2f4c,	// (0x00018947) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf544,	// (0x00024f3f) bg_popup_call_poc_inact_pane_g

0x2093,	// (0x00017a8e) popup_call_poc_inact_window_t1_ParamLimits

0x2093,	// (0x00017a8e) popup_call_poc_inact_window_t1

0x20a8,	// (0x00017aa3) popup_call_poc_inact_window_t2_ParamLimits

0x20a8,	// (0x00017aa3) popup_call_poc_inact_window_t2

0x20bd,	// (0x00017ab8) popup_call_poc_inact_window_t3_ParamLimits

0x20bd,	// (0x00017ab8) popup_call_poc_inact_window_t3

0x0002,

0xf49f,	// (0x00024e9a) popup_call_poc_inact_window_t_ParamLimits

0xf49f,	// (0x00024e9a) popup_call_poc_inact_window_t

0x304c,	// (0x00018a47) context_pane_ParamLimits

0xadf2,	// (0x000207ed) signal_pane_ParamLimits

0x1139,	// (0x00016b34) main_call2_pane

0x75b2,	// (0x0001cfad) popup_phob_thumbnail2_window_ParamLimits

0x75b2,	// (0x0001cfad) popup_phob_thumbnail2_window

0x7407,	// (0x0001ce02) aid_hotspot_pointer_arrow_pane

0x740f,	// (0x0001ce0a) aid_hotspot_pointer_hand_pane

0xac3a,	// (0x00020635) phob_pre_status_pane_g5

0x0e62,	// (0x0001685d) cams_zoom_pane_ParamLimits

0x0e62,	// (0x0001685d) image_vga_pane_ParamLimits

0x0e7e,	// (0x00016879) main_camera_pane_g1_ParamLimits

0x0e7e,	// (0x00016879) main_camera_pane_g2_ParamLimits

0x0e7e,	// (0x00016879) main_camera_pane_g3_ParamLimits

0x0e7e,	// (0x00016879) main_camera_pane_g4_ParamLimits

0x0e7e,	// (0x00016879) main_camera_pane_g5_ParamLimits

0x0e7e,	// (0x00016879) main_camera_pane_g6_ParamLimits

0x0e7e,	// (0x00016879) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00024bc0) main_camera_pane_g_ParamLimits

0x1cf8,	// (0x000176f3) main_camera_pane_t1_ParamLimits

0x1cf8,	// (0x000176f3) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00024bd1) main_camera_pane_t_ParamLimits

0x0df5,	// (0x000167f0) bg_popup_preview_window_pane_cp01_ParamLimits

0x0df5,	// (0x000167f0) bg_popup_preview_window_pane_cp01

0x20d2,	// (0x00017acd) popup_phob_thumbnail2_window_g1_ParamLimits

0x20d2,	// (0x00017acd) popup_phob_thumbnail2_window_g1

0x0b9a,	// (0x00016595) call2_cli_visual_pane

0xa90b,	// (0x00020306) popup_call2_audio_conf_window_ParamLimits

0xa90b,	// (0x00020306) popup_call2_audio_conf_window

0xa920,	// (0x0002031b) popup_call2_audio_first_window_ParamLimits

0xa920,	// (0x0002031b) popup_call2_audio_first_window

0xa9be,	// (0x000203b9) popup_call2_audio_in_window_ParamLimits

0xa9be,	// (0x000203b9) popup_call2_audio_in_window

0xaa00,	// (0x000203fb) popup_call2_audio_out_window_ParamLimits

0xaa00,	// (0x000203fb) popup_call2_audio_out_window

0xaa62,	// (0x0002045d) popup_call2_audio_second_window_ParamLimits

0xaa62,	// (0x0002045d) popup_call2_audio_second_window

0xaac0,	// (0x000204bb) popup_call2_audio_wait_window_ParamLimits

0xaac0,	// (0x000204bb) popup_call2_audio_wait_window

0x0b9a,	// (0x00016595) bg_popup_call2_act_pane_cp03

0x0dd7,	// (0x000167d2) list_conf_pane_cp

0x20de,	// (0x00017ad9) popup_call2_audio_conf_window_t1

0x20ec,	// (0x00017ae7) list_single_graphic_popup_conf2_pane_ParamLimits

0x20ec,	// (0x00017ae7) list_single_graphic_popup_conf2_pane

0x1934,	// (0x0001732f) list_highlight_pane_cp04

0x20ff,	// (0x00017afa) list_single_graphic_popup_conf2_pane_g1

0x1945,	// (0x00017340) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a6,	// (0x00024ea1) list_single_graphic_popup_conf2_pane_g

0x2109,	// (0x00017b04) list_single_graphic_popup_conf2_pane_t1

0x2117,	// (0x00017b12) bg_popup_call2_act_pane_cp01_ParamLimits

0x2117,	// (0x00017b12) bg_popup_call2_act_pane_cp01

0x21a1,	// (0x00017b9c) call_type_pane_cp05_ParamLimits

0x21a1,	// (0x00017b9c) call_type_pane_cp05

0x21f5,	// (0x00017bf0) popup_call2_audio_second_window_g1_ParamLimits

0x21f5,	// (0x00017bf0) popup_call2_audio_second_window_g1

0x2249,	// (0x00017c44) popup_call2_audio_second_window_g2_ParamLimits

0x2249,	// (0x00017c44) popup_call2_audio_second_window_g2

0x0002,

0xf4ab,	// (0x00024ea6) popup_call2_audio_second_window_g_ParamLimits

0xf4ab,	// (0x00024ea6) popup_call2_audio_second_window_g

0x22ae,	// (0x00017ca9) popup_call2_audio_second_window_t1_ParamLimits

0x22ae,	// (0x00017ca9) popup_call2_audio_second_window_t1

0x2369,	// (0x00017d64) popup_call2_audio_second_window_t2_ParamLimits

0x2369,	// (0x00017d64) popup_call2_audio_second_window_t2

0x23bc,	// (0x00017db7) popup_call2_audio_second_window_t3_ParamLimits

0x23bc,	// (0x00017db7) popup_call2_audio_second_window_t3

0x0003,

0xf4b2,	// (0x00024ead) popup_call2_audio_second_window_t_ParamLimits

0xf4b2,	// (0x00024ead) popup_call2_audio_second_window_t

0x0b9a,	// (0x00016595) bg_popup_call2_in_pane_cp02

0x0ba4,	// (0x0001659f) call_type_pane_cp04

0xaaff,	// (0x000204fa) popup_call2_audio_wait_window_g1

0xab07,	// (0x00020502) popup_call2_audio_wait_window_g2

0x0001,

0xf4bb,	// (0x00024eb6) popup_call2_audio_wait_window_g

0x0bbc,	// (0x000165b7) popup_call2_audio_wait_window_t3

0x24af,	// (0x00017eaa) bg_popup_call2_act_pane_ParamLimits

0x24af,	// (0x00017eaa) bg_popup_call2_act_pane

0x256f,	// (0x00017f6a) call_type_pane_cp03_ParamLimits

0x256f,	// (0x00017f6a) call_type_pane_cp03

0x25d3,	// (0x00017fce) popup_call2_audio_first_window_g1_ParamLimits

0x25d3,	// (0x00017fce) popup_call2_audio_first_window_g1

0x2643,	// (0x0001803e) popup_call2_audio_first_window_g2_ParamLimits

0x2643,	// (0x0001803e) popup_call2_audio_first_window_g2

0x26a7,	// (0x000180a2) popup_call2_audio_first_window_g3_ParamLimits

0x26a7,	// (0x000180a2) popup_call2_audio_first_window_g3

0x0004,

0xf4c0,	// (0x00024ebb) popup_call2_audio_first_window_g_ParamLimits

0xf4c0,	// (0x00024ebb) popup_call2_audio_first_window_g

0x272f,	// (0x0001812a) popup_call2_audio_first_window_t1_ParamLimits

0x272f,	// (0x0001812a) popup_call2_audio_first_window_t1

0x2832,	// (0x0001822d) popup_call2_audio_first_window_t4_ParamLimits

0x2832,	// (0x0001822d) popup_call2_audio_first_window_t4

0x2915,	// (0x00018310) popup_call2_audio_first_window_t5_ParamLimits

0x2915,	// (0x00018310) popup_call2_audio_first_window_t5

0x0003,

0xf4cb,	// (0x00024ec6) popup_call2_audio_first_window_t_ParamLimits

0xf4cb,	// (0x00024ec6) popup_call2_audio_first_window_t

0x0ded,	// (0x000167e8) bg_popup_call2_act_pane_g1

0x2f6c,	// (0x00018967) popup_cale_lunar_info_window_t1

0x2f7a,	// (0x00018975) popup_cale_lunar_info_window_t2

0x2f88,	// (0x00018983) popup_cale_lunar_info_window_t3

0x0b9a,	// (0x00016595) bg_popup_call2_bubble_pane

0x2a16,	// (0x00018411) bg_popup_call2_in_pane_cp01_ParamLimits

0x2a16,	// (0x00018411) bg_popup_call2_in_pane_cp01

0x0876,	// (0x00016271) call_type_pane_cp02

0xab0f,	// (0x0002050a) popup_call2_audio_out_window_g1_ParamLimits

0xab0f,	// (0x0002050a) popup_call2_audio_out_window_g1

0x2a5e,	// (0x00018459) popup_call2_audio_out_window_g2_ParamLimits

0x2a5e,	// (0x00018459) popup_call2_audio_out_window_g2

0xab3b,	// (0x00020536) popup_call2_audio_out_window_g3_ParamLimits

0xab3b,	// (0x00020536) popup_call2_audio_out_window_g3

0x0003,

0xf4d4,	// (0x00024ecf) popup_call2_audio_out_window_g_ParamLimits

0xf4d4,	// (0x00024ecf) popup_call2_audio_out_window_g

0x2a95,	// (0x00018490) popup_call2_audio_out_window_t1_ParamLimits

0x2a95,	// (0x00018490) popup_call2_audio_out_window_t1

0x2af4,	// (0x000184ef) popup_call2_audio_out_window_t2_ParamLimits

0x2af4,	// (0x000184ef) popup_call2_audio_out_window_t2

0x2b48,	// (0x00018543) popup_call2_audio_out_window_t3_ParamLimits

0x2b48,	// (0x00018543) popup_call2_audio_out_window_t3

0x2b5e,	// (0x00018559) popup_call2_audio_out_window_t4_ParamLimits

0x2b5e,	// (0x00018559) popup_call2_audio_out_window_t4

0x2b74,	// (0x0001856f) popup_call2_audio_out_window_t5_ParamLimits

0x2b74,	// (0x0001856f) popup_call2_audio_out_window_t5

0x0005,

0xf4dd,	// (0x00024ed8) popup_call2_audio_out_window_t_ParamLimits

0xf4dd,	// (0x00024ed8) popup_call2_audio_out_window_t

0x2bd8,	// (0x000185d3) bg_popup_call2_in_pane_ParamLimits

0x2bd8,	// (0x000185d3) bg_popup_call2_in_pane

0x2c34,	// (0x0001862f) popup_call2_audio_in_window_g1_ParamLimits

0x2c34,	// (0x0001862f) popup_call2_audio_in_window_g1

0x2c6c,	// (0x00018667) popup_call2_audio_in_window_g2_ParamLimits

0x2c6c,	// (0x00018667) popup_call2_audio_in_window_g2

0x2ca4,	// (0x0001869f) popup_call2_audio_in_window_g3_ParamLimits

0x2ca4,	// (0x0001869f) popup_call2_audio_in_window_g3

0x0003,

0xf4ea,	// (0x00024ee5) popup_call2_audio_in_window_g_ParamLimits

0xf4ea,	// (0x00024ee5) popup_call2_audio_in_window_g

0x2cfc,	// (0x000186f7) popup_call2_audio_in_window_t1_ParamLimits

0x2cfc,	// (0x000186f7) popup_call2_audio_in_window_t1

0x2d7c,	// (0x00018777) popup_call2_audio_in_window_t2_ParamLimits

0x2d7c,	// (0x00018777) popup_call2_audio_in_window_t2

0x2dfc,	// (0x000187f7) popup_call2_audio_in_window_t3_ParamLimits

0x2dfc,	// (0x000187f7) popup_call2_audio_in_window_t3

0x2e16,	// (0x00018811) popup_call2_audio_in_window_t4_ParamLimits

0x2e16,	// (0x00018811) popup_call2_audio_in_window_t4

0x2e28,	// (0x00018823) popup_call2_audio_in_window_t5_ParamLimits

0x2e28,	// (0x00018823) popup_call2_audio_in_window_t5

0x2e3a,	// (0x00018835) popup_call2_audio_in_window_t6_ParamLimits

0x2e3a,	// (0x00018835) popup_call2_audio_in_window_t6

0x0005,

0xf4f3,	// (0x00024eee) popup_call2_audio_in_window_t_ParamLimits

0xf4f3,	// (0x00024eee) popup_call2_audio_in_window_t

0x0ded,	// (0x000167e8) bg_popup_call2_in_pane_g1

0x2f96,	// (0x00018991) popup_cale_lunar_info_window_t4

0x0003,

0xf56e,	// (0x00024f69) popup_cale_lunar_info_window_t

0x0df5,	// (0x000167f0) bg_popup_call2_rect_pane_ParamLimits

0x0df5,	// (0x000167f0) bg_popup_call2_rect_pane

0x0b9a,	// (0x00016595) call2_cli_visual_graphic_pane

0x0b9a,	// (0x00016595) call2_cli_visual_text_pane

0x7601,	// (0x0001cffc) smil_status_volume_pane_g3

0x0002,

0x0e0d,	// (0x00016808) call2_cli_visual_graphic_pane_g1

0x0e0d,	// (0x00016808) call2_cli_visual_graphic_pane_g2

0x0e0d,	// (0x00016808) call2_cli_visual_graphic_pane_g3

0x0002,

0xf500,	// (0x00024efb) call2_cli_visual_graphic_pane_g

0x2e4c,	// (0x00018847) bg_popup_call2_rect_pane_g1

0x1008,	// (0x00016a03) bg_popup_call2_rect_pane_g2

0x2e54,	// (0x0001884f) bg_popup_call2_rect_pane_g3

0x2e5c,	// (0x00018857) bg_popup_call2_rect_pane_g4

0x2e64,	// (0x0001885f) bg_popup_call2_rect_pane_g5

0x2e6c,	// (0x00018867) bg_popup_call2_rect_pane_g6

0x2e74,	// (0x0001886f) bg_popup_call2_rect_pane_g7

0x2e7c,	// (0x00018877) bg_popup_call2_rect_pane_g8

0x2e84,	// (0x0001887f) bg_popup_call2_rect_pane_g9

0x0008,

0xf507,	// (0x00024f02) bg_popup_call2_rect_pane_g

0x2e8c,	// (0x00018887) bg_popup_call2_bubble_pane_g1

0x2e94,	// (0x0001888f) bg_popup_call2_bubble_pane_g2

0x2e9c,	// (0x00018897) bg_popup_call2_bubble_pane_g3

0x2ea4,	// (0x0001889f) bg_popup_call2_bubble_pane_g4

0x2eac,	// (0x000188a7) bg_popup_call2_bubble_pane_g5

0x2eb4,	// (0x000188af) bg_popup_call2_bubble_pane_g6

0x2ebc,	// (0x000188b7) bg_popup_call2_bubble_pane_g7

0x2ec4,	// (0x000188bf) bg_popup_call2_bubble_pane_g8

0x2ecc,	// (0x000188c7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf51a,	// (0x00024f15) bg_popup_call2_bubble_pane_g

0x884b,	// (0x0001e246) aid_cale_week_size_cell_pane

0x0df5,	// (0x000167f0) aid_cams_cif_uncrop_pane_ParamLimits

0x0df5,	// (0x000167f0) aid_cams_cif_uncrop_pane

0x8d52,	// (0x0001e74d) aid_cams_size_cell_ParamLimits

0x8d52,	// (0x0001e74d) aid_cams_size_cell

0x8d5e,	// (0x0001e759) grid_cams_pane_ParamLimits

0x8d6c,	// (0x0001e767) linegrid_cams_pane_ParamLimits

0x8e43,	// (0x0001e83e) call_video_pane_t1

0x8e64,	// (0x0001e85f) call_video_pane_t2

0x0001,

0xf222,	// (0x00024c1d) call_video_pane_t

0x93b2,	// (0x0001edad) aid_cale_month_size_cell_pane_ParamLimits

0x93b2,	// (0x0001edad) aid_cale_month_size_cell_pane

0xf5b2,	// (0x00024fad) smil_status_volume_pane_g

0x760e,	// (0x0001d009) volume_smil_pane_ParamLimits

0x6da5,	// (0x0001c7a0) aid_popup2_width_pane

0x878a,	// (0x0001e185) cell_qdial_pane_g4_ParamLimits

0x878a,	// (0x0001e185) cell_qdial_pane_g4

0xa212,	// (0x0001fc0d) aid_blid_cardinal_pane_ParamLimits

0xa222,	// (0x0001fc1d) aid_blid_destination_pane_ParamLimits

0xa222,	// (0x0001fc1d) aid_blid_destination_pane

0x0df5,	// (0x000167f0) bg_popup_call_poc_act_pane_ParamLimits

0x0df5,	// (0x000167f0) bg_popup_call_poc_act_pane

0x0df5,	// (0x000167f0) bg_popup_call_poc_inact_pane_ParamLimits

0x0df5,	// (0x000167f0) bg_popup_call_poc_inact_pane

0x2ed4,	// (0x000188cf) bg_popup_call_poc_act_pane_g1

0x2edc,	// (0x000188d7) bg_popup_call_poc_act_pane_g2

0x2ee4,	// (0x000188df) bg_popup_call_poc_act_pane_g3

0x2ea4,	// (0x0001889f) bg_popup_call_poc_act_pane_g4

0x2eac,	// (0x000188a7) bg_popup_call_poc_act_pane_g5

0x2eec,	// (0x000188e7) bg_popup_call_poc_act_pane_g6

0x2ebc,	// (0x000188b7) bg_popup_call_poc_act_pane_g7

0x2ef4,	// (0x000188ef) bg_popup_call_poc_act_pane_g8

0x0b9a,	// (0x00016595) main_usb_pane

0x74e5,	// (0x0001cee0) popup_cale_lunar_info_window

0x9181,	// (0x0001eb7c) im_reading_pane_t1_ParamLimits

0x1232,	// (0x00016c2d) list_im_pane_ParamLimits

0x1243,	// (0x00016c3e) scroll_pane_cp07_ParamLimits

0x0b9a,	// (0x00016595) grid_highlight_pane_cp012

0x0df5,	// (0x000167f0) mup_scale_pane_ParamLimits

0x26a7,	// (0x000180a2) main_usb_pane_g1_ParamLimits

0x26a7,	// (0x000180a2) main_usb_pane_g1

0xaba2,	// (0x0002059d) main_usb_pane_g2_ParamLimits

0xaba2,	// (0x0002059d) main_usb_pane_g2

0x0001,

0xf557,	// (0x00024f52) main_usb_pane_g_ParamLimits

0xf557,	// (0x00024f52) main_usb_pane_g

0xabae,	// (0x000205a9) main_usb_pane_t1_ParamLimits

0xabae,	// (0x000205a9) main_usb_pane_t1

0xabc0,	// (0x000205bb) main_usb_pane_t2_ParamLimits

0xabc0,	// (0x000205bb) main_usb_pane_t2

0xabd2,	// (0x000205cd) main_usb_pane_t3_ParamLimits

0xabd2,	// (0x000205cd) main_usb_pane_t3

0xabe4,	// (0x000205df) main_usb_pane_t4_ParamLimits

0xabe4,	// (0x000205df) main_usb_pane_t4

0xabf6,	// (0x000205f1) main_usb_pane_t5_ParamLimits

0xabf6,	// (0x000205f1) main_usb_pane_t5

0xac08,	// (0x00020603) main_usb_pane_t6_ParamLimits

0xac08,	// (0x00020603) main_usb_pane_t6

0x0005,

0xf55c,	// (0x00024f57) main_usb_pane_t_ParamLimits

0xa1b8,	// (0x0001fbb3) aid_text_placing

0xa1c4,	// (0x0001fbbf) main_location2_pane_t1_ParamLimits

0xa1d8,	// (0x0001fbd3) main_location2_pane_t2_ParamLimits

0xa1ec,	// (0x0001fbe7) main_location2_pane_t3_ParamLimits

0xa200,	// (0x0001fbfb) main_location2_pane_t4_ParamLimits

0xa200,	// (0x0001fbfb) main_location2_pane_t4

0xf363,	// (0x00024d5e) main_location2_pane_t_ParamLimits

0x0e23,	// (0x0001681e) find_pinb_pane_g2_ParamLimits

0x0e23,	// (0x0001681e) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x00024ad5) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x00024ad5) find_pinb_pane_g

0x0e2f,	// (0x0001682a) find_pinb_pane_t1_ParamLimits

0x0e41,	// (0x0001683c) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x00024ada) find_pinb_pane_t_ParamLimits

0x0b9a,	// (0x00016595) main_call3_pane

0x9975,	// (0x0001f370) cale_month_day_heading_pane_t1_ParamLimits

0x99fb,	// (0x0001f3f6) cale_month_day_heading_pane_t2_ParamLimits

0x9a74,	// (0x0001f46f) cale_month_day_heading_pane_t3_ParamLimits

0x9aed,	// (0x0001f4e8) cale_month_day_heading_pane_t4_ParamLimits

0x9b66,	// (0x0001f561) cale_month_day_heading_pane_t5_ParamLimits

0x9bdf,	// (0x0001f5da) cale_month_day_heading_pane_t6_ParamLimits

0x9c58,	// (0x0001f653) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00024c55) cale_month_day_heading_pane_t_ParamLimits

0x1499,	// (0x00016e94) smil_status_volume_pane

0xa6f9,	// (0x000200f4) postcard_address_pane_ParamLimits

0xa6f9,	// (0x000200f4) postcard_address_pane

0xa705,	// (0x00020100) postcard_message_pane_ParamLimits

0xa705,	// (0x00020100) postcard_message_pane

0xab67,	// (0x00020562) call2_cli_visual_pane_t1_ParamLimits

0xab67,	// (0x00020562) call2_cli_visual_pane_t1

0x3121,	// (0x00018b1c) postcard_message_pane_t1_ParamLimits

0x3121,	// (0x00018b1c) postcard_message_pane_t1

0x3109,	// (0x00018b04) postcard_address_pane_t1_ParamLimits

0x3109,	// (0x00018b04) postcard_address_pane_t1

0xaf4a,	// (0x00020945) popup_call3_audio_in_window_ParamLimits

0xaf4a,	// (0x00020945) popup_call3_audio_in_window

0xae2e,	// (0x00020829) bg_popup_call3_in_pane_ParamLimits

0xae2e,	// (0x00020829) bg_popup_call3_in_pane

0xae90,	// (0x0002088b) popup_call3_audio_in_window_g1_ParamLimits

0xae90,	// (0x0002088b) popup_call3_audio_in_window_g1

0xaea8,	// (0x000208a3) popup_call3_audio_in_window_g2_ParamLimits

0xaea8,	// (0x000208a3) popup_call3_audio_in_window_g2

0xaec0,	// (0x000208bb) popup_call3_audio_in_window_g3_ParamLimits

0xaec0,	// (0x000208bb) popup_call3_audio_in_window_g3

0x0003,

0xf5b9,	// (0x00024fb4) popup_call3_audio_in_window_g_ParamLimits

0xf5b9,	// (0x00024fb4) popup_call3_audio_in_window_g

0xaee8,	// (0x000208e3) popup_call3_audio_in_window_t1_ParamLimits

0xaee8,	// (0x000208e3) popup_call3_audio_in_window_t1

0xaf10,	// (0x0002090b) popup_call3_audio_in_window_t2_ParamLimits

0xaf10,	// (0x0002090b) popup_call3_audio_in_window_t2

0xaf38,	// (0x00020933) popup_call3_audio_in_window_t3_ParamLimits

0xaf38,	// (0x00020933) popup_call3_audio_in_window_t3

0x0002,

0xf5c2,	// (0x00024fbd) popup_call3_audio_in_window_t_ParamLimits

0xf5c2,	// (0x00024fbd) popup_call3_audio_in_window_t

0x1139,	// (0x00016b34) bg_popup_call3_rect_pane

0x2e4c,	// (0x00018847) bg_popup_call3_rect_pane_g1

0x1008,	// (0x00016a03) bg_popup_call3_rect_pane_g2

0x2e54,	// (0x0001884f) bg_popup_call3_rect_pane_g3

0x2e5c,	// (0x00018857) bg_popup_call3_rect_pane_g4

0x2e64,	// (0x0001885f) bg_popup_call3_rect_pane_g5

0x2e6c,	// (0x00018867) bg_popup_call3_rect_pane_g6

0x2e74,	// (0x0001886f) bg_popup_call3_rect_pane_g7

0x070a,	// (0x00016105) mup_visualizer_osc_pane

0x070a,	// (0x00016105) mup_visualizer_spec_pane

0xae4e,	// (0x00020849) call3_video_qcif_pane_ParamLimits

0xae4e,	// (0x00020849) call3_video_qcif_pane

0xae60,	// (0x0002085b) call3_video_qcif_uncrop_pane_ParamLimits

0xae60,	// (0x0002085b) call3_video_qcif_uncrop_pane

0xae6e,	// (0x00020869) call3_video_subqcif_pane_ParamLimits

0xae6e,	// (0x00020869) call3_video_subqcif_pane

0xae80,	// (0x0002087b) call3_video_subqcif_uncrop_pane_ParamLimits

0xae80,	// (0x0002087b) call3_video_subqcif_uncrop_pane

0xaed8,	// (0x000208d3) popup_call3_audio_in_window_g4_ParamLimits

0xaed8,	// (0x000208d3) popup_call3_audio_in_window_g4

0x070a,	// (0x00016105) mup_spec_half_pane

0x070a,	// (0x00016105) mup_spec_half_pane_cp

0x070a,	// (0x00016105) mup_osc_middle_pane

0x1179,	// (0x00016b74) mup_visualizer_osc_pane_g1

0x309a,	// (0x00018a95) mup_spec_bar_pane_ParamLimits

0x309a,	// (0x00018a95) mup_spec_bar_pane

0x1179,	// (0x00016b74) mup_spec_bar_pane_g1

0x1179,	// (0x00016b74) mup_spec_bar_pane_g2

0x0001,

0xf3dd,	// (0x00024dd8) mup_spec_bar_pane_g

0x884b,	// (0x0001e246) aid_cale_week_size_cell_pane_ParamLimits

0x8860,	// (0x0001e25b) bg_cale_heading_pane_ParamLimits

0x109b,	// (0x00016a96) bg_cale_pane_cp01_ParamLimits

0x8882,	// (0x0001e27d) cale_week_corner_pane_ParamLimits

0x889c,	// (0x0001e297) cale_week_day_heading_pane_ParamLimits

0x88be,	// (0x0001e2b9) cale_week_scroll_pane_g1_ParamLimits

0x88db,	// (0x0001e2d6) cale_week_scroll_pane_g2_ParamLimits

0x88ee,	// (0x0001e2e9) cale_week_scroll_pane_g3_ParamLimits

0x8901,	// (0x0001e2fc) cale_week_scroll_pane_g4_ParamLimits

0x8914,	// (0x0001e30f) cale_week_scroll_pane_g5_ParamLimits

0x8927,	// (0x0001e322) cale_week_scroll_pane_g6_ParamLimits

0x893a,	// (0x0001e335) cale_week_scroll_pane_g7_ParamLimits

0x894f,	// (0x0001e34a) cale_week_scroll_pane_g8_ParamLimits

0x8964,	// (0x0001e35f) cale_week_scroll_pane_g9_ParamLimits

0x8977,	// (0x0001e372) cale_week_scroll_pane_g10_ParamLimits

0x898a,	// (0x0001e385) cale_week_scroll_pane_g11_ParamLimits

0x899d,	// (0x0001e398) cale_week_scroll_pane_g12_ParamLimits

0x89b4,	// (0x0001e3af) cale_week_scroll_pane_g13_ParamLimits

0x89cf,	// (0x0001e3ca) cale_week_scroll_pane_g14_ParamLimits

0x89ea,	// (0x0001e3e5) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00024b66) cale_week_scroll_pane_g_ParamLimits

0x8a1a,	// (0x0001e415) cale_week_time_pane_ParamLimits

0x8a2f,	// (0x0001e42a) grid_cale_week_pane_ParamLimits

0x10b8,	// (0x00016ab3) listscroll_cale_week_pane_t1

0x10ca,	// (0x00016ac5) scroll_pane_cp08_ParamLimits

0x9426,	// (0x0001ee21) cale_month_corner_pane_ParamLimits

0x1463,	// (0x00016e5e) cale_month_pane_t1

0x98f4,	// (0x0001f2ef) cale_month_week_pane_ParamLimits

0x26a7,	// (0x000180a2) popup_call_status_window_g1_ParamLimits

0xa054,	// (0x0001fa4f) popup_call_status_window_g2_ParamLimits

0xa060,	// (0x0001fa5b) popup_call_status_window_g3_ParamLimits

0xf2ea,	// (0x00024ce5) popup_call_status_window_g_ParamLimits

0x1859,	// (0x00017254) aid_call2_pane

0xa595,	// (0x0001ff90) msg_header_pane_g1

0xa6f9,	// (0x000200f4) postcard_address2_pane_ParamLimits

0xa6f9,	// (0x000200f4) postcard_address2_pane

0xa705,	// (0x00020100) postcard_message2_pane_ParamLimits

0xa705,	// (0x00020100) postcard_message2_pane

0xae00,	// (0x000207fb) message2_row_pane_ParamLimits

0xae00,	// (0x000207fb) message2_row_pane

0xae1b,	// (0x00020816) address2_row_pane_ParamLimits

0xae1b,	// (0x00020816) address2_row_pane

0x3067,	// (0x00018a62) postcard_message2_row_pane_g1

0x306f,	// (0x00018a6a) postcard_message2_row_pane_t1

0x3067,	// (0x00018a62) address2_row_pane_g1

0x306f,	// (0x00018a6a) address2_row_pane_t1

0x8bcc,	// (0x0001e5c7) aid_size_cell_vorec

0x0b9a,	// (0x00016595) main_rss_pane

0x307d,	// (0x00018a78) rss_list_single_pane_ParamLimits

0x307d,	// (0x00018a78) rss_list_single_pane

0x308b,	// (0x00018a86) rss_list_single_pane_t1

0x308b,	// (0x00018a86) rss_list_single_pane_t2

0x0001,

0xf5ad,	// (0x00024fa8) rss_list_single_pane_t

0x0b9a,	// (0x00016595) main_camera2_pane

0x0b9a,	// (0x00016595) main_video2_pane

0x7020,	// (0x0001ca1b) cams_zoom_pane_cp2_ParamLimits

0x7020,	// (0x0001ca1b) cams_zoom_pane_cp2

0x7020,	// (0x0001ca1b) image2_vga_pane_ParamLimits

0x7020,	// (0x0001ca1b) image2_vga_pane

0x18f4,	// (0x000172ef) main_camera2_pane_g1_ParamLimits

0x18f4,	// (0x000172ef) main_camera2_pane_g1

0x18f4,	// (0x000172ef) main_camera2_pane_g2_ParamLimits

0x18f4,	// (0x000172ef) main_camera2_pane_g2

0x18f4,	// (0x000172ef) main_camera2_pane_g3_ParamLimits

0x18f4,	// (0x000172ef) main_camera2_pane_g3

0x18f4,	// (0x000172ef) main_camera2_pane_g4_ParamLimits

0x18f4,	// (0x000172ef) main_camera2_pane_g4

0x18f4,	// (0x000172ef) main_camera2_pane_g5_ParamLimits

0x18f4,	// (0x000172ef) main_camera2_pane_g5

0x18f4,	// (0x000172ef) main_camera2_pane_g6_ParamLimits

0x18f4,	// (0x000172ef) main_camera2_pane_g6

0x18f4,	// (0x000172ef) main_camera2_pane_g7_ParamLimits

0x18f4,	// (0x000172ef) main_camera2_pane_g7

0x18f4,	// (0x000172ef) main_camera2_pane_g8_ParamLimits

0x18f4,	// (0x000172ef) main_camera2_pane_g8

0x0008,

0xf5c9,	// (0x00024fc4) main_camera2_pane_g_ParamLimits

0xf5c9,	// (0x00024fc4) main_camera2_pane_g

0x7631,	// (0x0001d02c) main_camera2_pane_t1_ParamLimits

0x7631,	// (0x0001d02c) main_camera2_pane_t1

0x7631,	// (0x0001d02c) main_camera2_pane_t2_ParamLimits

0x7631,	// (0x0001d02c) main_camera2_pane_t2

0x7631,	// (0x0001d02c) main_camera2_pane_t3_ParamLimits

0x7631,	// (0x0001d02c) main_camera2_pane_t3

0x7631,	// (0x0001d02c) main_camera2_pane_t4_ParamLimits

0x7631,	// (0x0001d02c) main_camera2_pane_t4

0x0006,

0xf5dc,	// (0x00024fd7) main_camera2_pane_t_ParamLimits

0xf5dc,	// (0x00024fd7) main_camera2_pane_t

0x7659,	// (0x0001d054) cams_zoom_pane_cp4_ParamLimits

0x7659,	// (0x0001d054) cams_zoom_pane_cp4

0x7484,	// (0x0001ce7f) image2_cif_pane_ParamLimits

0x7484,	// (0x0001ce7f) image2_cif_pane

0x7020,	// (0x0001ca1b) image2_subqcif_pane_ParamLimits

0x7020,	// (0x0001ca1b) image2_subqcif_pane

0x7667,	// (0x0001d062) main_video2_pane_g1_ParamLimits

0x7667,	// (0x0001d062) main_video2_pane_g1

0x7667,	// (0x0001d062) main_video2_pane_g2_ParamLimits

0x7667,	// (0x0001d062) main_video2_pane_g2

0x7667,	// (0x0001d062) main_video2_pane_g3_ParamLimits

0x7667,	// (0x0001d062) main_video2_pane_g3

0x7667,	// (0x0001d062) main_video2_pane_g4_ParamLimits

0x7667,	// (0x0001d062) main_video2_pane_g4

0x7667,	// (0x0001d062) main_video2_pane_g5_ParamLimits

0x7667,	// (0x0001d062) main_video2_pane_g5

0x7667,	// (0x0001d062) main_video2_pane_g6_ParamLimits

0x7667,	// (0x0001d062) main_video2_pane_g6

0x0005,

0xf5eb,	// (0x00024fe6) main_video2_pane_g_ParamLimits

0xf5eb,	// (0x00024fe6) main_video2_pane_g

0x7675,	// (0x0001d070) main_video2_pane_t1_ParamLimits

0x7675,	// (0x0001d070) main_video2_pane_t1

0x7675,	// (0x0001d070) main_video2_pane_t2_ParamLimits

0x7675,	// (0x0001d070) main_video2_pane_t2

0x7675,	// (0x0001d070) main_video2_pane_t3_ParamLimits

0x7675,	// (0x0001d070) main_video2_pane_t3

0x0002,

0xf5f8,	// (0x00024ff3) main_video2_pane_t_ParamLimits

0xf5f8,	// (0x00024ff3) main_video2_pane_t

0xac9e,	// (0x00020699) call_muted_g2

0x0001,

0xf59f,	// (0x00024f9a) call_muted_g

0x0b9a,	// (0x00016595) main_mup2_pane

0x0e8c,	// (0x00016887) main_mup2_pane_g1_ParamLimits

0x0e8c,	// (0x00016887) main_mup2_pane_g1

0x0e8c,	// (0x00016887) main_mup2_pane_g2_ParamLimits

0x0e8c,	// (0x00016887) main_mup2_pane_g2

0x49b1,	// (0x0001a3ac) main_mup_pane_g13_cp1

0x702e,	// (0x0001ca29) mup_volume_pane_cp1

0x0e8c,	// (0x00016887) main_mup2_pane_g4_ParamLimits

0x0e8c,	// (0x00016887) main_mup2_pane_g4

0x0e8c,	// (0x00016887) main_mup2_pane_g5_ParamLimits

0x0e8c,	// (0x00016887) main_mup2_pane_g5

0x0e8c,	// (0x00016887) main_mup2_pane_g6_ParamLimits

0x0e8c,	// (0x00016887) main_mup2_pane_g6

0x0e8c,	// (0x00016887) main_mup2_pane_g7_ParamLimits

0x0e8c,	// (0x00016887) main_mup2_pane_g7

0x0006,

0xf5ff,	// (0x00024ffa) main_mup2_pane_g_ParamLimits

0xf5ff,	// (0x00024ffa) main_mup2_pane_g

0x0e9a,	// (0x00016895) main_mup2_pane_t1_ParamLimits

0x0e9a,	// (0x00016895) main_mup2_pane_t1

0x0e9a,	// (0x00016895) main_mup2_pane_t2_ParamLimits

0x0e9a,	// (0x00016895) main_mup2_pane_t2

0x0e9a,	// (0x00016895) main_mup2_pane_t3_ParamLimits

0x0e9a,	// (0x00016895) main_mup2_pane_t3

0x0e9a,	// (0x00016895) main_mup2_pane_t4_ParamLimits

0x0e9a,	// (0x00016895) main_mup2_pane_t4

0x0e9a,	// (0x00016895) main_mup2_pane_t5_ParamLimits

0x0e9a,	// (0x00016895) main_mup2_pane_t5

0x0e9a,	// (0x00016895) main_mup2_pane_t6_ParamLimits

0x0e9a,	// (0x00016895) main_mup2_pane_t6

0x0005,

0xf60e,	// (0x00025009) main_mup2_pane_t_ParamLimits

0xf60e,	// (0x00025009) main_mup2_pane_t

0x315f,	// (0x00018b5a) mup2_visualizer_pane_ParamLimits

0x315f,	// (0x00018b5a) mup2_visualizer_pane

0x315f,	// (0x00018b5a) mup_progress_pane_cp_ParamLimits

0x315f,	// (0x00018b5a) mup_progress_pane_cp

0x769f,	// (0x0001d09a) mup_volume_pane_cp_ParamLimits

0x769f,	// (0x0001d09a) mup_volume_pane_cp

0x0e70,	// (0x0001686b) mup2_visualizer_pane_g1_ParamLimits

0x0e70,	// (0x0001686b) mup2_visualizer_pane_g1

0x0e7e,	// (0x00016879) mup2_visualizer_pane_g2_ParamLimits

0x0e7e,	// (0x00016879) mup2_visualizer_pane_g2

0x0e7e,	// (0x00016879) mup2_visualizer_pane_g3_ParamLimits

0x0e7e,	// (0x00016879) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00024adf) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00024adf) mup2_visualizer_pane_g

0x1f6e,	// (0x00017969) aid_size_cell_fmradio

0x746d,	// (0x0001ce68) aid_height_parent_landcape

0x12c1,	// (0x00016cbc) wml_content_pane_cp

0x12c9,	// (0x00016cc4) wml_tabs_pane

0x12d2,	// (0x00016ccd) popup_wml_miniature_window

0x12da,	// (0x00016cd5) scroll_pane_cp021

0x12ee,	// (0x00016ce9) wml_content_pane_comp8

0x0b9a,	// (0x00016595) bg_popup_sub_pane_cp05

0x3183,	// (0x00018b7e) popup_wml_miniature_window_g1

0x318b,	// (0x00018b86) wml_miniature_view_pane

0xaf59,	// (0x00020954) aid_size_wml_view

0xaf61,	// (0x0002095c) wml_miniature_view_pane_g1

0xaf6a,	// (0x00020965) wml_miniature_view_pane_g2

0xaf73,	// (0x0002096e) wml_miniature_view_pane_g3

0xaf7b,	// (0x00020976) wml_miniature_view_pane_g4

0xaf83,	// (0x0002097e) wml_miniature_view_pane_g5

0xaf8b,	// (0x00020986) wml_miniature_view_pane_g6

0xaf93,	// (0x0002098e) wml_miniature_view_pane_g7

0xaf9b,	// (0x00020996) wml_miniature_view_pane_g8

0x0007,

0xf61b,	// (0x00025016) wml_miniature_view_pane_g

0x3193,	// (0x00018b8e) background_graphic_ParamLimits

0x3193,	// (0x00018b8e) background_graphic

0x319f,	// (0x00018b9a) wml_tabs_2_pane

0x31a8,	// (0x00018ba3) wml_tabs_3_pane_ParamLimits

0x31a8,	// (0x00018ba3) wml_tabs_3_pane

0x31ba,	// (0x00018bb5) wml_tabs_4_pane_ParamLimits

0x31ba,	// (0x00018bb5) wml_tabs_4_pane

0x31d0,	// (0x00018bcb) wml_tabs_5_pane_ParamLimits

0x31d0,	// (0x00018bcb) wml_tabs_5_pane

0x31ea,	// (0x00018be5) wml_tabs_pane_g2_ParamLimits

0x31ea,	// (0x00018be5) wml_tabs_pane_g2

0x31ff,	// (0x00018bfa) wml_tabs_pane_g3_ParamLimits

0x31ff,	// (0x00018bfa) wml_tabs_pane_g3

0x3214,	// (0x00018c0f) wml_tabs_2_active_pane_ParamLimits

0x3214,	// (0x00018c0f) wml_tabs_2_active_pane

0x3214,	// (0x00018c0f) wml_tabs_2_passive_pane_ParamLimits

0x3214,	// (0x00018c0f) wml_tabs_2_passive_pane

0xafa3,	// (0x0002099e) wml_tabs_3_active_pane_cp_ParamLimits

0xafa3,	// (0x0002099e) wml_tabs_3_active_pane_cp

0xafb4,	// (0x000209af) wml_tabs_3_passive_pane_ParamLimits

0xafb4,	// (0x000209af) wml_tabs_3_passive_pane

0xafc5,	// (0x000209c0) wml_tabs_3_passive_pane_cp_ParamLimits

0xafc5,	// (0x000209c0) wml_tabs_3_passive_pane_cp

0xafd6,	// (0x000209d1) tabs_4_active_pane

0xafde,	// (0x000209d9) tabs_4_passive_pane

0xafe6,	// (0x000209e1) tabs_4_passive_pane_cp

0xafee,	// (0x000209e9) tabs_4_passive_pane_cp2

0xab9a,	// (0x00020595) aid_height_text

0x315f,	// (0x00018b5a) mup_volume_cont_pane_ParamLimits

0x315f,	// (0x00018b5a) mup_volume_cont_pane

0x070a,	// (0x00016105) aid_size_cell_pinb

0x070a,	// (0x00016105) aid_size_list_pinb

0x315f,	// (0x00018b5a) mup2_volume_cont_pane_ParamLimits

0x315f,	// (0x00018b5a) mup2_volume_cont_pane

0x7689,	// (0x0001d084) mup2_volume_cont_pane_g1_ParamLimits

0x7689,	// (0x0001d084) mup2_volume_cont_pane_g1

0x6db1,	// (0x0001c7ac) aid_size_cell_touch_ParamLimits

0x6db1,	// (0x0001c7ac) aid_size_cell_touch

0x7038,	// (0x0001ca33) touch_pane_ParamLimits

0x7038,	// (0x0001ca33) touch_pane

0x702e,	// (0x0001ca29) main_rss2_pane

0x3241,	// (0x00018c3c) listscroll_rss2_pane

0x324a,	// (0x00018c45) rss2_navigation_pane

0x3252,	// (0x00018c4d) list_rss2_pane

0x19d9,	// (0x000173d4) scroll_pane_cp22

0x325a,	// (0x00018c55) rss2_navigation_pane_g1

0x3263,	// (0x00018c5e) rss2_navigation_pane_g2

0x326b,	// (0x00018c66) rss2_navigation_pane_g3

0x0002,

0xf62c,	// (0x00025027) rss2_navigation_pane_g

0x3273,	// (0x00018c6e) rss2_navigation_pane_t1

0xaff6,	// (0x000209f1) rss2_list_single_pane_ParamLimits

0xaff6,	// (0x000209f1) rss2_list_single_pane

0x3281,	// (0x00018c7c) rss2_list_single_pane_t2

0x328f,	// (0x00018c8a) rss2_list_single_pane_t3_ParamLimits

0x328f,	// (0x00018c8a) rss2_list_single_pane_t3

0x32ac,	// (0x00018ca7) rss2_list_single_pane_t4

0x9ec2,	// (0x0001f8bd) smil_status_pane_g1

0x7484,	// (0x0001ce7f) main_image2_pane_ParamLimits

0x7484,	// (0x0001ce7f) main_image2_pane

0x18f4,	// (0x000172ef) main_camera2_pane_g9_ParamLimits

0x18f4,	// (0x000172ef) main_camera2_pane_g9

0x7631,	// (0x0001d02c) main_camera2_pane_t5_ParamLimits

0x7631,	// (0x0001d02c) main_camera2_pane_t5

0x7645,	// (0x0001d040) main_camera2_pane_t6_ParamLimits

0x7645,	// (0x0001d040) main_camera2_pane_t6

0xb02a,	// (0x00020a25) main_image2_pane_g1_ParamLimits

0xb02a,	// (0x00020a25) main_image2_pane_g1

0xa8cc,	// (0x000202c7) smil2_video_pane_ParamLimits

0xa8cc,	// (0x000202c7) smil2_video_pane

0x6de5,	// (0x0001c7e0) aid_zoom_text_primary_cp

0x6fd5,	// (0x0001c9d0) popup_preview_fixed_window

0x122a,	// (0x00016c25) im_reading_pane_g1

0x7623,	// (0x0001d01e) cams2_bc_adjust_pane_cp_ParamLimits

0x7623,	// (0x0001d01e) cams2_bc_adjust_pane_cp

0x7020,	// (0x0001ca1b) cams2_bc_adjust_pane_ParamLimits

0x7020,	// (0x0001ca1b) cams2_bc_adjust_pane

0x49b1,	// (0x0001a3ac) cams2_bc_adjust_pane_g1

0x702e,	// (0x0001ca29) cams2_slider_pane

0x49b1,	// (0x0001a3ac) cams2_slider_pane_g1

0x49b1,	// (0x0001a3ac) cams2_slider_pane_g2

0x0006,

0xf633,	// (0x0002502e) cams2_slider_pane_g

0x70a9,	// (0x0001caa4) calc_display_pane_ParamLimits

0x70c7,	// (0x0001cac2) calc_paper_pane_ParamLimits

0x70e3,	// (0x0001cade) grid_calc_pane_ParamLimits

0x73d8,	// (0x0001cdd3) popup_clock_digital_window_t1_ParamLimits

0x1f0b,	// (0x00017906) main_image_pane_t1

0x708f,	// (0x0001ca8a) aid_size_cell_calc_ParamLimits

0x708f,	// (0x0001ca8a) aid_size_cell_calc

0x74c1,	// (0x0001cebc) popup_blid_sat_info2_window_ParamLimits

0x74c1,	// (0x0001cebc) popup_blid_sat_info2_window

0x32ba,	// (0x00018cb5) aid_size_cell_blid

0x315f,	// (0x00018b5a) bg_popup_window_pane_cp07

0x32d7,	// (0x00018cd2) grid_popup_blid_pane

0x32e1,	// (0x00018cdc) heading_pane_cp05_ParamLimits

0x32e1,	// (0x00018cdc) heading_pane_cp05

0x33ab,	// (0x00018da6) cell_popup_blid_pane_ParamLimits

0x33ab,	// (0x00018da6) cell_popup_blid_pane

0x33cf,	// (0x00018dca) cell_popup_blid_pane_g1

0x33d7,	// (0x00018dd2) cell_popup_blid_pane_t1

0x315f,	// (0x00018b5a) mup2_indicator_pane_ParamLimits

0x315f,	// (0x00018b5a) mup2_indicator_pane

0x070a,	// (0x00016105) mup2_visualizer_osc_pane

0x316d,	// (0x00018b68) mup2_visualizer_spec_pane_ParamLimits

0x316d,	// (0x00018b68) mup2_visualizer_spec_pane

0x070a,	// (0x00016105) mup2_spec_half_pane

0x070a,	// (0x00016105) mup2_spec_half_pane_cp

0x33e5,	// (0x00018de0) mup2_spec_bar_pane_ParamLimits

0x33e5,	// (0x00018de0) mup2_spec_bar_pane

0x1179,	// (0x00016b74) mup2_spec_bar_pane_g1

0x3404,	// (0x00018dff) mup2_spec_bar_pane_g2

0x0001,

0xf659,	// (0x00025054) mup2_spec_bar_pane_g

0x070a,	// (0x00016105) mup2_osc_middle_pane

0x1179,	// (0x00016b74) mup2_visualizer_osc_pane_g1

0x07a7,	// (0x000161a2) popup_number_entry_window_t1_ParamLimits

0x07ba,	// (0x000161b5) popup_number_entry_window_t2_ParamLimits

0x07cc,	// (0x000161c7) popup_number_entry_window_t3_ParamLimits

0x85b9,	// (0x0001dfb4) popup_number_entry_window_t5_ParamLimits

0x85b9,	// (0x0001dfb4) popup_number_entry_window_t5

0xf085,	// (0x00024a80) popup_number_entry_window_t_ParamLimits

0x07de,	// (0x000161d9) text_title_cp2_ParamLimits

0x7417,	// (0x0001ce12) aid_hotspot_pointer_text2_pane

0x7461,	// (0x0001ce5c) main_viewer_pane_g9_ParamLimits

0x7461,	// (0x0001ce5c) main_viewer_pane_g9

0x1463,	// (0x00016e5e) cale_month_pane_t1_ParamLimits

0x14ce,	// (0x00016ec9) bg_cale_pane_ParamLimits

0x14e6,	// (0x00016ee1) list_cale_pane_ParamLimits

0x14f7,	// (0x00016ef2) listscroll_cale_day_pane_t1

0x1509,	// (0x00016f04) scroll_pane_cp09_ParamLimits

0xa2ee,	// (0x0001fce9) main_mup_eq_pane_t1_ParamLimits

0xa2ee,	// (0x0001fce9) main_mup_eq_pane_t1

0xa308,	// (0x0001fd03) main_mup_eq_pane_t2_ParamLimits

0xa308,	// (0x0001fd03) main_mup_eq_pane_t2

0xa320,	// (0x0001fd1b) main_mup_eq_pane_t3_ParamLimits

0xa320,	// (0x0001fd1b) main_mup_eq_pane_t3

0xa338,	// (0x0001fd33) main_mup_eq_pane_t4_ParamLimits

0xa338,	// (0x0001fd33) main_mup_eq_pane_t4

0xa350,	// (0x0001fd4b) main_mup_eq_pane_t5_ParamLimits

0xa350,	// (0x0001fd4b) main_mup_eq_pane_t5

0xa368,	// (0x0001fd63) main_mup_eq_pane_t6_ParamLimits

0xa368,	// (0x0001fd63) main_mup_eq_pane_t6

0xa37c,	// (0x0001fd77) main_mup_eq_pane_t7_ParamLimits

0xa37c,	// (0x0001fd77) main_mup_eq_pane_t7

0xa390,	// (0x0001fd8b) main_mup_eq_pane_t8_ParamLimits

0xa390,	// (0x0001fd8b) main_mup_eq_pane_t8

0xa3a6,	// (0x0001fda1) main_mup_eq_pane_t9_ParamLimits

0xa3a6,	// (0x0001fda1) main_mup_eq_pane_t9

0xa3be,	// (0x0001fdb9) main_mup_eq_pane_t10_ParamLimits

0xa3be,	// (0x0001fdb9) main_mup_eq_pane_t10

0x0009,

0xf3e9,	// (0x00024de4) main_mup_eq_pane_t_ParamLimits

0xf3e9,	// (0x00024de4) main_mup_eq_pane_t

0xa47b,	// (0x0001fe76) mup_equalizer_pane_cp5_ParamLimits

0xa491,	// (0x0001fe8c) mup_equalizer_pane_cp6_ParamLimits

0xa4a9,	// (0x0001fea4) mup_equalizer_pane_cp7_ParamLimits

0x702e,	// (0x0001ca29) main_gallery_pane

0x30b9,	// (0x00018ab4) smil2_volume_pane

0x30d4,	// (0x00018acf) smil_status_volume_pane_g1_ParamLimits

0x30c1,	// (0x00018abc) smil_status_volume_pane_g2_ParamLimits

0x7601,	// (0x0001cffc) smil_status_volume_pane_g3_ParamLimits

0xf5b2,	// (0x00024fad) smil_status_volume_pane_g_ParamLimits

0x315f,	// (0x00018b5a) bg_popup_window_pane_cp07_ParamLimits

0x32c2,	// (0x00018cbd) blid_firmament_pane

0x0e62,	// (0x0001685d) aid_size_cell_gallery_ParamLimits

0x0e62,	// (0x0001685d) aid_size_cell_gallery

0x0e62,	// (0x0001685d) grid_gallery_pane_ParamLimits

0x0e62,	// (0x0001685d) grid_gallery_pane

0x1d0c,	// (0x00017707) cell_gallery_pane_ParamLimits

0x1d0c,	// (0x00017707) cell_gallery_pane

0x0779,	// (0x00016174) bg_cell_gallery_focus_pane_ParamLimits

0x0779,	// (0x00016174) bg_cell_gallery_focus_pane

0x0e70,	// (0x0001686b) cell_gallery_pane_g1_ParamLimits

0x0e70,	// (0x0001686b) cell_gallery_pane_g1

0x0e70,	// (0x0001686b) cell_gallery_pane_g2_ParamLimits

0x0e70,	// (0x0001686b) cell_gallery_pane_g2

0x0e70,	// (0x0001686b) cell_gallery_pane_g3_ParamLimits

0x0e70,	// (0x0001686b) cell_gallery_pane_g3

0x0e7e,	// (0x00016879) cell_gallery_pane_g4_ParamLimits

0x0e7e,	// (0x00016879) cell_gallery_pane_g4

0x0003,

0xf65e,	// (0x00025059) cell_gallery_pane_g_ParamLimits

0xf65e,	// (0x00025059) cell_gallery_pane_g

0x340e,	// (0x00018e09) bg_cell_gallery_focus_pane_g1

0x3416,	// (0x00018e11) bg_cell_gallery_focus_pane_g2

0x341e,	// (0x00018e19) bg_cell_gallery_focus_pane_g3

0x3426,	// (0x00018e21) bg_cell_gallery_focus_pane_g4

0x342e,	// (0x00018e29) bg_cell_gallery_focus_pane_g5

0x3436,	// (0x00018e31) bg_cell_gallery_focus_pane_g6

0x343e,	// (0x00018e39) bg_cell_gallery_focus_pane_g7

0x3446,	// (0x00018e41) bg_cell_gallery_focus_pane_g8

0x0007,

0xf667,	// (0x00025062) bg_cell_gallery_focus_pane_g

0x344e,	// (0x00018e49) aid_firma_cardinal

0x3462,	// (0x00018e5d) blid_firmament_pane_t1

0x3479,	// (0x00018e74) blid_firmament_pane_t2

0x3490,	// (0x00018e8b) blid_firmament_pane_t3

0x34a7,	// (0x00018ea2) blid_firmament_pane_t4

0x0003,

0xf678,	// (0x00025073) blid_firmament_pane_t

0x34be,	// (0x00018eb9) blid_sat_info_pane

0x1179,	// (0x00016b74) blid_sat_info_pane_g1

0x1179,	// (0x00016b74) blid_sat_info_pane_g2

0x0001,

0xf3dd,	// (0x00024dd8) blid_sat_info_pane_g

0x34ce,	// (0x00018ec9) blid_sat_info_pane_t1

0x34dc,	// (0x00018ed7) smil2_volume_content_pane

0x34e5,	// (0x00018ee0) smil2_volume_pane_g1

0x0f9f,	// (0x0001699a) smil2_volume_content_pane_g1

0x34ed,	// (0x00018ee8) smil2_volume_content_pane_g2

0x34f6,	// (0x00018ef1) smil2_volume_content_pane_g3

0x34ff,	// (0x00018efa) smil2_volume_content_pane_g4

0x3508,	// (0x00018f03) smil2_volume_content_pane_g5

0x3511,	// (0x00018f0c) smil2_volume_content_pane_g6

0x351a,	// (0x00018f15) smil2_volume_content_pane_g7

0x3523,	// (0x00018f1e) smil2_volume_content_pane_g8

0x352c,	// (0x00018f27) smil2_volume_content_pane_g9

0x3535,	// (0x00018f30) smil2_volume_content_pane_g10

0x0009,

0xf681,	// (0x0002507c) smil2_volume_content_pane_g

0x8ab0,	// (0x0001e4ab) cale_week_day_heading_pane_t1_ParamLimits

0x8acb,	// (0x0001e4c6) cale_week_day_heading_pane_t2_ParamLimits

0x8ae6,	// (0x0001e4e1) cale_week_day_heading_pane_t3_ParamLimits

0x8b01,	// (0x0001e4fc) cale_week_day_heading_pane_t4_ParamLimits

0x8b1c,	// (0x0001e517) cale_week_day_heading_pane_t5_ParamLimits

0x8b37,	// (0x0001e532) cale_week_day_heading_pane_t6_ParamLimits

0x8b52,	// (0x0001e54d) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00024b87) cale_week_day_heading_pane_t_ParamLimits

0x10e7,	// (0x00016ae2) bg_cale_side_pane_ParamLimits

0x723a,	// (0x0001cc35) cale_week_time_pane_t1_ParamLimits

0x7254,	// (0x0001cc4f) cale_week_time_pane_t2_ParamLimits

0x726e,	// (0x0001cc69) cale_week_time_pane_t3_ParamLimits

0x7288,	// (0x0001cc83) cale_week_time_pane_t4_ParamLimits

0x72a2,	// (0x0001cc9d) cale_week_time_pane_t5_ParamLimits

0x72bc,	// (0x0001ccb7) cale_week_time_pane_t6_ParamLimits

0x72dc,	// (0x0001ccd7) cale_week_time_pane_t7_ParamLimits

0x72fe,	// (0x0001ccf9) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x00024b96) cale_week_time_pane_t_ParamLimits

0x8b6d,	// (0x0001e568) cell_cale_week_pane_g2_ParamLimits

0x10e7,	// (0x00016ae2) bg_cale_side_pane_cp01_ParamLimits

0x9ce9,	// (0x0001f6e4) cale_month_week_pane_t1_ParamLimits

0x9d02,	// (0x0001f6fd) cale_month_week_pane_t2_ParamLimits

0x9d1b,	// (0x0001f716) cale_month_week_pane_t3_ParamLimits

0x9d34,	// (0x0001f72f) cale_month_week_pane_t4_ParamLimits

0x9d4f,	// (0x0001f74a) cale_month_week_pane_t5_ParamLimits

0x9d70,	// (0x0001f76b) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00024c64) cale_month_week_pane_t_ParamLimits

0x732c,	// (0x0001cd27) cell_cale_month_pane_g1_ParamLimits

0x702e,	// (0x0001ca29) main_cale_event_viewer_pane

0x070a,	// (0x00016105) listscroll_cale_event_viewer_pane

0x353e,	// (0x00018f39) list_cale_ev_pane

0x3546,	// (0x00018f41) scroll_pane_cp023

0x3552,	// (0x00018f4d) field_cale_ev_pane_ParamLimits

0x3552,	// (0x00018f4d) field_cale_ev_pane

0x3570,	// (0x00018f6b) field_cale_ev_content_pane_ParamLimits

0x3570,	// (0x00018f6b) field_cale_ev_content_pane

0x357c,	// (0x00018f77) field_cale_ev_pane_g1_ParamLimits

0x357c,	// (0x00018f77) field_cale_ev_pane_g1

0x3588,	// (0x00018f83) field_cale_ev_pane_g2_ParamLimits

0x3588,	// (0x00018f83) field_cale_ev_pane_g2

0x35a0,	// (0x00018f9b) field_cale_ev_pane_g3_ParamLimits

0x35a0,	// (0x00018f9b) field_cale_ev_pane_g3

0x0002,

0xf696,	// (0x00025091) field_cale_ev_pane_g_ParamLimits

0xf696,	// (0x00025091) field_cale_ev_pane_g

0x35b8,	// (0x00018fb3) field_cale_ev_pane_t1_ParamLimits

0x35b8,	// (0x00018fb3) field_cale_ev_pane_t1

0x35cf,	// (0x00018fca) field_cale_ev_content_pane_t1_ParamLimits

0x35cf,	// (0x00018fca) field_cale_ev_content_pane_t1

0x1daf,	// (0x000177aa) bg_button_pane_cp01

0x883b,	// (0x0001e236) listscroll_cale_week_pane_ParamLimits

0x1092,	// (0x00016a8d) popup_toolbar_window_cp01

0x10b8,	// (0x00016ab3) listscroll_cale_week_pane_t1_ParamLimits

0x883b,	// (0x0001e236) listscroll_cale_day_pane_ParamLimits

0x1092,	// (0x00016a8d) popup_toolbar_window_cp02

0x14f7,	// (0x00016ef2) listscroll_cale_day_pane_t1_ParamLimits

0x883b,	// (0x0001e236) main_cale_month_pane_ParamLimits

0x75c4,	// (0x0001cfbf) popup_toolbar_window_cp03_ParamLimits

0x75c4,	// (0x0001cfbf) popup_toolbar_window_cp03

0xa7e2,	// (0x000201dd) main_image_pane_g2_ParamLimits

0xa7e2,	// (0x000201dd) main_image_pane_g2

0xa7ee,	// (0x000201e9) main_image_pane_g3_ParamLimits

0xa7ee,	// (0x000201e9) main_image_pane_g3

0x0002,

0xf47b,	// (0x00024e76) main_image_pane_g_ParamLimits

0xf47b,	// (0x00024e76) main_image_pane_g

0x1f0b,	// (0x00017906) main_image_pane_t1_ParamLimits

0xa7fa,	// (0x000201f5) main_image_pane_t2_ParamLimits

0xa7fa,	// (0x000201f5) main_image_pane_t2

0xa80c,	// (0x00020207) main_image_pane_t3_ParamLimits

0xa80c,	// (0x00020207) main_image_pane_t3

0xa81e,	// (0x00020219) main_image_pane_t4_ParamLimits

0xa81e,	// (0x00020219) main_image_pane_t4

0x0003,

0xf482,	// (0x00024e7d) main_image_pane_t_ParamLimits

0xf482,	// (0x00024e7d) main_image_pane_t

0xa830,	// (0x0002022b) popup_image_details_window_cp01

0xa83a,	// (0x00020235) popup_toobar_trans_pane_cp01_ParamLimits

0xa83a,	// (0x00020235) popup_toobar_trans_pane_cp01

0x7514,	// (0x0001cf0f) popup_image_details_window_ParamLimits

0x7514,	// (0x0001cf0f) popup_image_details_window

0x7522,	// (0x0001cf1d) popup_image_focus_window

0x7020,	// (0x0001ca1b) camera2_autofocus_pane_ParamLimits

0x7020,	// (0x0001ca1b) camera2_autofocus_pane

0x070a,	// (0x00016105) bg_popup_sub_pane_cp06

0x35ed,	// (0x00018fe8) popup_image_focus_window_g1

0x35f5,	// (0x00018ff0) popup_image_focus_window_g2

0x35fd,	// (0x00018ff8) popup_image_focus_window_g3

0x3605,	// (0x00019000) popup_image_focus_window_g4

0x0003,

0xf69d,	// (0x00025098) popup_image_focus_window_g

0x360d,	// (0x00019008) popup_image_focus_window_t1

0x361b,	// (0x00019016) popup_image_focus_window_t2

0x362b,	// (0x00019026) popup_image_focus_window_t3

0x0002,

0xf6a6,	// (0x000250a1) popup_image_focus_window_t

0x0e70,	// (0x0001686b) camera2_autofocus_pane_g1

0x0779,	// (0x00016174) bg_tb_trans_pane_cp01

0x3639,	// (0x00019034) popup_image_details_window_g1

0x364c,	// (0x00019047) popup_image_details_window_g2

0x0002,

0xf6b8,	// (0x000250b3) popup_image_details_window_g

0x3675,	// (0x00019070) popup_image_details_window_t1

0x3687,	// (0x00019082) popup_image_details_window_t2

0x36a0,	// (0x0001909b) popup_image_details_window_t3

0x36b4,	// (0x000190af) popup_image_details_window_t4

0x36cf,	// (0x000190ca) popup_image_details_window_t5

0x0004,

0xf6bf,	// (0x000250ba) popup_image_details_window_t

0x0ed6,	// (0x000168d1) bg_calc_paper_pane_ParamLimits

0x702e,	// (0x0001ca29) grid_highlight_pane_cp013

0x710f,	// (0x0001cb0a) list_calc_pane_ParamLimits

0x7121,	// (0x0001cb1c) scroll_pane_cp024

0x0f04,	// (0x000168ff) bg_calc_display_pane_ParamLimits

0x7129,	// (0x0001cb24) calc_display_pane_t1_ParamLimits

0x713e,	// (0x0001cb39) calc_display_pane_t2_ParamLimits

0x7153,	// (0x0001cb4e) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x00024b07) calc_display_pane_t_ParamLimits

0x71bc,	// (0x0001cbb7) cell_calc_pane_g2

0x0001,

0xf129,	// (0x00024b24) cell_calc_pane_g

0x71c5,	// (0x0001cbc0) cell_calc_pane_t1

0x0f7d,	// (0x00016978) grid_highlight_pane_cp02_ParamLimits

0x0f93,	// (0x0001698e) toolbar_button_pane_cp01_ParamLimits

0x0f93,	// (0x0001698e) toolbar_button_pane_cp01

0x1f50,	// (0x0001794b) temp_image_control_pane_ParamLimits

0x1f50,	// (0x0001794b) temp_image_control_pane

0x7484,	// (0x0001ce7f) main_mp3_pane

0x36e9,	// (0x000190e4) temp_image_control_pane_g1_ParamLimits

0x36e9,	// (0x000190e4) temp_image_control_pane_g1

0x36f7,	// (0x000190f2) temp_image_control_pane_g2_ParamLimits

0x36f7,	// (0x000190f2) temp_image_control_pane_g2

0x3709,	// (0x00019104) temp_image_control_pane_g3_ParamLimits

0x3709,	// (0x00019104) temp_image_control_pane_g3

0xb036,	// (0x00020a31) temp_image_control_pane_g4_ParamLimits

0xb036,	// (0x00020a31) temp_image_control_pane_g4

0x0003,

0xf6ca,	// (0x000250c5) temp_image_control_pane_g_ParamLimits

0xf6ca,	// (0x000250c5) temp_image_control_pane_g

0x36e9,	// (0x000190e4) main_mp3_pane_g1

0xb047,	// (0x00020a42) main_mp3_pane_g2

0x0007,

0xf6d3,	// (0x000250ce) main_mp3_pane_g

0x373e,	// (0x00019139) main_mp3_pane_t1

0x0e7e,	// (0x00016879) main_camera_pane_g8_ParamLimits

0x0e7e,	// (0x00016879) main_camera_pane_g8

0x8d0a,	// (0x0001e705) main_video_pane_g7_ParamLimits

0x8d0a,	// (0x0001e705) main_video_pane_g7

0x7631,	// (0x0001d02c) main_camera2_pane_t7_ParamLimits

0x7631,	// (0x0001d02c) main_camera2_pane_t7

0x1281,	// (0x00016c7c) scroll_pane_cp025_ParamLimits

0x1281,	// (0x00016c7c) scroll_pane_cp025

0x1295,	// (0x00016c90) scroll_pane_cp026_ParamLimits

0x1295,	// (0x00016c90) scroll_pane_cp026

0x12a4,	// (0x00016c9f) wml_content_pane_ParamLimits

0x702e,	// (0x0001ca29) main_touch_calib_pane

0xb0eb,	// (0x00020ae6) main_touch_calib_pane_g1

0xb0f7,	// (0x00020af2) main_touch_calib_pane_g2

0xb103,	// (0x00020afe) main_touch_calib_pane_g3

0xb10f,	// (0x00020b0a) main_touch_calib_pane_g4

0x0003,

0xf6f1,	// (0x000250ec) main_touch_calib_pane_g

0xb11b,	// (0x00020b16) main_touch_calib_pane_t1

0xb134,	// (0x00020b2f) main_touch_calib_pane_t2

0x0004,

0xf6fa,	// (0x000250f5) main_touch_calib_pane_t

0x1aa8,	// (0x000174a3) mup_progress_pane_cp02

0x1add,	// (0x000174d8) navi_pane_g1

0x1b98,	// (0x00017593) navi_pane_mp_t3

0x7484,	// (0x0001ce7f) main_mp3_pane_ParamLimits

0xadb4,	// (0x000207af) navi_pane_ParamLimits

0x36e9,	// (0x000190e4) main_mp3_pane_g1_ParamLimits

0xb047,	// (0x00020a42) main_mp3_pane_g2_ParamLimits

0xb053,	// (0x00020a4e) main_mp3_pane_g3_ParamLimits

0xb053,	// (0x00020a4e) main_mp3_pane_g3

0xb05f,	// (0x00020a5a) main_mp3_pane_g4_ParamLimits

0xb05f,	// (0x00020a5a) main_mp3_pane_g4

0x0e70,	// (0x0001686b) main_mp3_pane_g5_ParamLimits

0x0e70,	// (0x0001686b) main_mp3_pane_g5

0x3719,	// (0x00019114) main_mp3_pane_g6_ParamLimits

0x3719,	// (0x00019114) main_mp3_pane_g6

0x3726,	// (0x00019121) main_mp3_pane_g7_ParamLimits

0x3726,	// (0x00019121) main_mp3_pane_g7

0x3732,	// (0x0001912d) main_mp3_pane_g8_ParamLimits

0x3732,	// (0x0001912d) main_mp3_pane_g8

0xf6d3,	// (0x000250ce) main_mp3_pane_g_ParamLimits

0xb06b,	// (0x00020a66) main_mp3_pane_t2

0xb07b,	// (0x00020a76) main_mp3_pane_t3

0x374c,	// (0x00019147) main_mp3_pane_t4

0x375a,	// (0x00019155) main_mp3_pane_t5

0x0005,

0xf6e4,	// (0x000250df) main_mp3_pane_t

0x3768,	// (0x00019163) mup_progress_pane_cp01

0x6de5,	// (0x0001c7e0) aid_zoom_text_secondary2

0x353e,	// (0x00018f39) list_cale_ev2_pane

0x3546,	// (0x00018f41) scroll_pane_cp023_ParamLimits

0xb18f,	// (0x00020b8a) field_cale_ev2_pane_ParamLimits

0xb18f,	// (0x00020b8a) field_cale_ev2_pane

0x3770,	// (0x0001916b) field_cale_ev2_pane_g1_ParamLimits

0x3770,	// (0x0001916b) field_cale_ev2_pane_g1

0x377c,	// (0x00019177) field_cale_ev2_pane_g2_ParamLimits

0x377c,	// (0x00019177) field_cale_ev2_pane_g2

0x3794,	// (0x0001918f) field_cale_ev2_pane_g3_ParamLimits

0x3794,	// (0x0001918f) field_cale_ev2_pane_g3

0x0003,

0xf705,	// (0x00025100) field_cale_ev2_pane_g_ParamLimits

0xf705,	// (0x00025100) field_cale_ev2_pane_g

0x37b8,	// (0x000191b3) field_cale_ev2_pane_t1_ParamLimits

0x37b8,	// (0x000191b3) field_cale_ev2_pane_t1

0x37cf,	// (0x000191ca) field_cale_ev2_pane_t2_ParamLimits

0x37cf,	// (0x000191ca) field_cale_ev2_pane_t2

0x0001,

0xf70e,	// (0x00025109) field_cale_ev2_pane_t_ParamLimits

0xf70e,	// (0x00025109) field_cale_ev2_pane_t

0xa6c3,	// (0x000200be) main_postcard_pane_g5_ParamLimits

0xa6c3,	// (0x000200be) main_postcard_pane_g5

0xa6d1,	// (0x000200cc) main_postcard_pane_g6_ParamLimits

0xa6d1,	// (0x000200cc) main_postcard_pane_g6

0x0e62,	// (0x0001685d) camera2_autofocus_pane_cp_ParamLimits

0x0e62,	// (0x0001685d) camera2_autofocus_pane_cp

0x7484,	// (0x0001ce7f) main_mup3_pane

0xb1f8,	// (0x00020bf3) main_mup3_pane_g1_ParamLimits

0xb1f8,	// (0x00020bf3) main_mup3_pane_g1

0xb219,	// (0x00020c14) main_mup3_pane_g2_ParamLimits

0xb219,	// (0x00020c14) main_mup3_pane_g2

0xb293,	// (0x00020c8e) main_mup3_pane_g3_ParamLimits

0xb293,	// (0x00020c8e) main_mup3_pane_g3

0xb2d6,	// (0x00020cd1) main_mup3_pane_g4_ParamLimits

0xb2d6,	// (0x00020cd1) main_mup3_pane_g4

0xb319,	// (0x00020d14) main_mup3_pane_g5_ParamLimits

0xb319,	// (0x00020d14) main_mup3_pane_g5

0xb35c,	// (0x00020d57) main_mup3_pane_g6_ParamLimits

0xb35c,	// (0x00020d57) main_mup3_pane_g6

0x0e7e,	// (0x00016879) main_mup3_pane_g7_ParamLimits

0x0e7e,	// (0x00016879) main_mup3_pane_g7

0x0007,

0xf71e,	// (0x00025119) main_mup3_pane_g_ParamLimits

0xf71e,	// (0x00025119) main_mup3_pane_g

0xb3d2,	// (0x00020dcd) main_mup3_pane_t1_ParamLimits

0xb3d2,	// (0x00020dcd) main_mup3_pane_t1

0xb441,	// (0x00020e3c) main_mup3_pane_t2_ParamLimits

0xb441,	// (0x00020e3c) main_mup3_pane_t2

0xb50a,	// (0x00020f05) main_mup3_pane_t4_ParamLimits

0xb50a,	// (0x00020f05) main_mup3_pane_t4

0xb558,	// (0x00020f53) main_mup3_pane_t5_ParamLimits

0xb558,	// (0x00020f53) main_mup3_pane_t5

0xb608,	// (0x00021003) main_mup3_pane_t6_ParamLimits

0xb608,	// (0x00021003) main_mup3_pane_t6

0x0005,

0xf72f,	// (0x0002512a) main_mup3_pane_t_ParamLimits

0xf72f,	// (0x0002512a) main_mup3_pane_t

0xb6b4,	// (0x000210af) mup3_progress_pane_ParamLimits

0xb6b4,	// (0x000210af) mup3_progress_pane

0xb728,	// (0x00021123) popup_mup3_control_window_ParamLimits

0xb728,	// (0x00021123) popup_mup3_control_window

0x37e4,	// (0x000191df) popup_mup3_text_window

0xb741,	// (0x0002113c) mup3_progress_pane_t1

0xb760,	// (0x0002115b) mup3_progress_pane_t2

0x37ec,	// (0x000191e7) mup3_progress_pane_t3

0x0002,

0xf73c,	// (0x00025137) mup3_progress_pane_t

0x3809,	// (0x00019204) mup_progress_pane_cp03

0x070a,	// (0x00016105) bg_tb_trans_pane_cp04

0xb77f,	// (0x0002117a) mup3_volume_pane

0xb787,	// (0x00021182) popup_mup3_control_window_g1

0xb790,	// (0x0002118b) mup3_volume_pane_g1

0xb799,	// (0x00021194) mup3_volume_pane_g2

0xb7a2,	// (0x0002119d) mup3_volume_pane_g3

0x0002,

0xf743,	// (0x0002513e) mup3_volume_pane_g

0x070a,	// (0x00016105) bg_tb_trans_pane_cp03

0x3819,	// (0x00019214) popup_mup3_text_window_g1

0x3821,	// (0x0001921c) popup_mup3_text_window_t1

0x0f5e,	// (0x00016959) list_calc_item_pane_g1_ParamLimits

0x3238,	// (0x00018c33) mup_volume_pane_cp_g1

0xb14d,	// (0x00020b48) main_touch_calib_pane_t3

0xb163,	// (0x00020b5e) main_touch_calib_pane_t4

0xb179,	// (0x00020b74) main_touch_calib_pane_t5

0x6d9d,	// (0x0001c798) aid_cell_size_toolbar2

0x6da5,	// (0x0001c7a0) aid_popup3_width_pane

0x6de5,	// (0x0001c7e0) aid_zoom_text_msg_primary

0x8c16,	// (0x0001e611) vorec_t7

0x0f22,	// (0x0001691d) bg_calc_paper_pane_g1_ParamLimits

0x0f3a,	// (0x00016935) bg_calc_paper_pane_g2_ParamLimits

0x0f2e,	// (0x00016929) bg_calc_paper_pane_g3_ParamLimits

0x0f52,	// (0x0001694d) bg_calc_paper_pane_g4_ParamLimits

0x0f46,	// (0x00016941) bg_calc_paper_pane_g5_ParamLimits

0x86ea,	// (0x0001e0e5) bg_calc_paper_pane_g6_ParamLimits

0x86fb,	// (0x0001e0f6) bg_calc_paper_pane_g7_ParamLimits

0x870c,	// (0x0001e107) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x00024b0e) bg_calc_paper_pane_g_ParamLimits

0x871d,	// (0x0001e118) calc_bg_paper_pane_g9_ParamLimits

0x0e62,	// (0x0001685d) image_qvga_pane_ParamLimits

0x0e62,	// (0x0001685d) image_qvga_pane

0x0df5,	// (0x000167f0) bg_popup_sub_pane_cp04_ParamLimits

0x1e87,	// (0x00017882) popup_mup_playback_window_g1_ParamLimits

0x1e93,	// (0x0001788e) popup_mup_playback_window_t1_ParamLimits

0x1ea8,	// (0x000178a3) popup_mup_playback_window_t2_ParamLimits

0xf476,	// (0x00024e71) popup_mup_playback_window_t_ParamLimits

0x0e70,	// (0x0001686b) main_mup2_pane_g3_ParamLimits

0x0e70,	// (0x0001686b) main_mup2_pane_g3

0x8ef1,	// (0x0001e8ec) popup_toolbar_window_cp04

0x229d,	// (0x00017c98) popup_call2_audio_second_window_g3_ParamLimits

0x229d,	// (0x00017c98) popup_call2_audio_second_window_g3

0x26b5,	// (0x000180b0) popup_call2_audio_first_window_g4_ParamLimits

0x26b5,	// (0x000180b0) popup_call2_audio_first_window_g4

0x2cdc,	// (0x000186d7) popup_call2_audio_in_window_g4_ParamLimits

0x2cdc,	// (0x000186d7) popup_call2_audio_in_window_g4

0xa7d5,	// (0x000201d0) aid_area_sk_bg_cut_ParamLimits

0xa7d5,	// (0x000201d0) aid_area_sk_bg_cut

0x1ebd,	// (0x000178b8) aid_area_sk_bg_cut_2_ParamLimits

0x1ebd,	// (0x000178b8) aid_area_sk_bg_cut_2

0x070a,	// (0x00016105) aid_placing_details_win

0x070a,	// (0x00016105) aid_placing_details_win_2

0x0e70,	// (0x0001686b) camera2_autofocus_pane_g1_ParamLimits

0x6fc6,	// (0x0001c9c1) popup_fixed_preview_cale_window_ParamLimits

0x6fc6,	// (0x0001c9c1) popup_fixed_preview_cale_window

0x1c31,	// (0x0001762c) navi_slider_pane_g3

0x1c28,	// (0x00017623) navi_slider_pane_g4

0x1c1f,	// (0x0001761a) navi_slider_pane_g5

0x1c31,	// (0x0001762c) navi_slider_pane_g6

0x73fe,	// (0x0001cdf9) navi_slider_pane_g7

0x1d7c,	// (0x00017777) mup_scale_pane_g3

0x1d85,	// (0x00017780) mup_scale_pane_g4

0x1d8e,	// (0x00017789) mup_scale_pane_g5

0xa4c1,	// (0x0001febc) mup_scale_pane_g6

0xa4ca,	// (0x0001fec5) mup_scale_pane_g7

0x49b1,	// (0x0001a3ac) cams2_slider_pane_g3

0x49b1,	// (0x0001a3ac) cams2_slider_pane_g4

0x49b1,	// (0x0001a3ac) cams2_slider_pane_g5

0x49b1,	// (0x0001a3ac) cams2_slider_pane_g6

0x49b1,	// (0x0001a3ac) cams2_slider_pane_g7

0x1179,	// (0x00016b74) camera2_autofocus_pane_cp_g1

0x2fec,	// (0x000189e7) bg_popup_preview_window_pane_cp02_ParamLimits

0x2fec,	// (0x000189e7) bg_popup_preview_window_pane_cp02

0x382f,	// (0x0001922a) list_fp_cale_pane_ParamLimits

0x382f,	// (0x0001922a) list_fp_cale_pane

0x383b,	// (0x00019236) popup_fixed_preview_cale_window_t1_ParamLimits

0x383b,	// (0x00019236) popup_fixed_preview_cale_window_t1

0xb7ab,	// (0x000211a6) popup_fixed_preview_cale_window_t2_ParamLimits

0xb7ab,	// (0x000211a6) popup_fixed_preview_cale_window_t2

0xb7c0,	// (0x000211bb) popup_fixed_preview_cale_window_t3_ParamLimits

0xb7c0,	// (0x000211bb) popup_fixed_preview_cale_window_t3

0x0002,

0xf74a,	// (0x00025145) popup_fixed_preview_cale_window_t_ParamLimits

0xf74a,	// (0x00025145) popup_fixed_preview_cale_window_t

0xb7d5,	// (0x000211d0) list_single_fp_cale_pane_ParamLimits

0xb7d5,	// (0x000211d0) list_single_fp_cale_pane

0x3859,	// (0x00019254) list_single_fp_cale_pane_g1_ParamLimits

0x3859,	// (0x00019254) list_single_fp_cale_pane_g1

0x3865,	// (0x00019260) list_single_fp_cale_pane_g2_ParamLimits

0x3865,	// (0x00019260) list_single_fp_cale_pane_g2

0x0002,

0xf751,	// (0x0002514c) list_single_fp_cale_pane_g_ParamLimits

0xf751,	// (0x0002514c) list_single_fp_cale_pane_g

0x387e,	// (0x00019279) list_single_fp_cale_pane_t1_ParamLimits

0x387e,	// (0x00019279) list_single_fp_cale_pane_t1

0x3890,	// (0x0001928b) list_single_fp_cale_pane_t2_ParamLimits

0x3890,	// (0x0001928b) list_single_fp_cale_pane_t2

0x0001,

0xf758,	// (0x00025153) list_single_fp_cale_pane_t_ParamLimits

0xf758,	// (0x00025153) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x702e,	// (0x0001ca29) main_dialer_pane

0x070a,	// (0x00016105) aid_cell_size_keypad

0x070a,	// (0x00016105) dialer_ne_pane

0x070a,	// (0x00016105) grid_dialer_command_1_pane

0x070a,	// (0x00016105) grid_dialer_command_2_pane

0x070a,	// (0x00016105) grid_dialer_keypad_pane

0x315f,	// (0x00018b5a) bg_popup_call_pane_cp06_ParamLimits

0x315f,	// (0x00018b5a) bg_popup_call_pane_cp06

0x315f,	// (0x00018b5a) dialer_ne_clear_pane_ParamLimits

0x315f,	// (0x00018b5a) dialer_ne_clear_pane

0x1179,	// (0x00016b74) dialer_ne_pane_g1

0x1cf8,	// (0x000176f3) dialer_ne_pane_t1_ParamLimits

0x1cf8,	// (0x000176f3) dialer_ne_pane_t1

0x3ad9,	// (0x000194d4) dialer_ne_pane_t2_ParamLimits

0x3ad9,	// (0x000194d4) dialer_ne_pane_t2

0xb7e8,	// (0x000211e3) dialer_ne_pane_t3_ParamLimits

0xb7e8,	// (0x000211e3) dialer_ne_pane_t3

0x0002,

0xf75d,	// (0x00025158) dialer_ne_pane_t_ParamLimits

0xf75d,	// (0x00025158) dialer_ne_pane_t

0xb7e8,	// (0x000211e3) dialer_ne_pane_t3_copy1_ParamLimits

0xb7e8,	// (0x000211e3) dialer_ne_pane_t3_copy1

0x38c3,	// (0x000192be) cell_dialer_keypad_pane_ParamLimits

0x38c3,	// (0x000192be) cell_dialer_keypad_pane

0x0779,	// (0x00016174) cell_dialer_command_1_pane_ParamLimits

0x0779,	// (0x00016174) cell_dialer_command_1_pane

0x38da,	// (0x000192d5) cell_dialer_command_2_pane_ParamLimits

0x38da,	// (0x000192d5) cell_dialer_command_2_pane

0x0779,	// (0x00016174) bg_button_pane_cp02_ParamLimits

0x0779,	// (0x00016174) bg_button_pane_cp02

0x0e70,	// (0x0001686b) cell_dialer_keypad_pane_g1_ParamLimits

0x0e70,	// (0x0001686b) cell_dialer_keypad_pane_g1

0x0779,	// (0x00016174) bg_button_pane_cp03_ParamLimits

0x0779,	// (0x00016174) bg_button_pane_cp03

0x0e70,	// (0x0001686b) cell_dialer_command_1_pane_g1_ParamLimits

0x0e70,	// (0x0001686b) cell_dialer_command_1_pane_g1

0x070a,	// (0x00016105) bg_button_pane_cp04

0x1179,	// (0x00016b74) cell_dialer_command_2_pane_g1

0x070a,	// (0x00016105) bg_button_pane_cp06

0x1179,	// (0x00016b74) dialer_ne_clear_pane_g1

0x1ae9,	// (0x000174e4) navi_pane_g2

0x1b17,	// (0x00017512) navi_pane_g3

0x0002,

0xf379,	// (0x00024d74) navi_pane_g

0x1ba6,	// (0x000175a1) navi_pane_mv_g2

0x1bcd,	// (0x000175c8) navi_pane_mv_g5

0xa29f,	// (0x0001fc9a) navi_pane_mv_t1

0x0f04,	// (0x000168ff) main_clock2_pane

0x0e62,	// (0x0001685d) main_clock2_list_pane_ParamLimits

0x0e62,	// (0x0001685d) main_clock2_list_pane

0xb85e,	// (0x00021259) main_clock2_pane_t1_ParamLimits

0xb85e,	// (0x00021259) main_clock2_pane_t1

0xb88c,	// (0x00021287) main_clock2_pane_t2_ParamLimits

0xb88c,	// (0x00021287) main_clock2_pane_t2

0x0004,

0xf769,	// (0x00025164) main_clock2_pane_t_ParamLimits

0xf769,	// (0x00025164) main_clock2_pane_t

0xb8f1,	// (0x000212ec) popup_clock_analogue_window_cp03_ParamLimits

0xb8f1,	// (0x000212ec) popup_clock_analogue_window_cp03

0xb90f,	// (0x0002130a) popup_clock_digital_window_cp02_ParamLimits

0xb90f,	// (0x0002130a) popup_clock_digital_window_cp02

0xb96e,	// (0x00021369) main_clock2_list_single_pane_ParamLimits

0xb96e,	// (0x00021369) main_clock2_list_single_pane

0x1139,	// (0x00016b34) list_highlight_pane_cp05

0x391d,	// (0x00019318) main_clock2_list_single_pane_t1

0x8ef1,	// (0x0001e8ec) popup_toolbar_window_cp04_ParamLimits

0x0e7e,	// (0x00016879) camera2_autofocus_pane_g2_ParamLimits

0x0e7e,	// (0x00016879) camera2_autofocus_pane_g2

0x0e7e,	// (0x00016879) camera2_autofocus_pane_g3_ParamLimits

0x0e7e,	// (0x00016879) camera2_autofocus_pane_g3

0x0e7e,	// (0x00016879) camera2_autofocus_pane_g4_ParamLimits

0x0e7e,	// (0x00016879) camera2_autofocus_pane_g4

0x0e7e,	// (0x00016879) camera2_autofocus_pane_g5_ParamLimits

0x0e7e,	// (0x00016879) camera2_autofocus_pane_g5

0x0004,

0xf6ad,	// (0x000250a8) camera2_autofocus_pane_g_ParamLimits

0xf6ad,	// (0x000250a8) camera2_autofocus_pane_g

0xb1b9,	// (0x00020bb4) camera2_autofocus_pane_cp_g2

0xb1c1,	// (0x00020bbc) camera2_autofocus_pane_cp_g3

0xb1c9,	// (0x00020bc4) camera2_autofocus_pane_cp_g4

0xb1d1,	// (0x00020bcc) camera2_autofocus_pane_cp_g5

0x0004,

0xf713,	// (0x0002510e) camera2_autofocus_pane_cp_g

0x070a,	// (0x00016105) popup_dialer_spcha_window

0x070a,	// (0x00016105) bg_popup_sub_pane_cp07

0x070a,	// (0x00016105) list_spcha_pane

0x392b,	// (0x00019326) list_single_spcha_pane_ParamLimits

0x392b,	// (0x00019326) list_single_spcha_pane

0x070a,	// (0x00016105) list_highlight_pane_cp06

0x16da,	// (0x000170d5) list_single_spcha_pane_t1

0x2a86,	// (0x00018481) popup_call2_audio_out_window_g4_ParamLimits

0x2a86,	// (0x00018481) popup_call2_audio_out_window_g4

0x702e,	// (0x0001ca29) main_imed2_pane

0x752a,	// (0x0001cf25) popup_imed_adjust2_window

0x753d,	// (0x0001cf38) popup_imed_trans_window_ParamLimits

0x753d,	// (0x0001cf38) popup_imed_trans_window

0x330d,	// (0x00018d08) popup_blid_sat_info2_window_t1

0x331b,	// (0x00018d16) popup_blid_sat_info2_window_t2

0x000a,

0xf642,	// (0x0002503d) popup_blid_sat_info2_window_t

0xb980,	// (0x0002137b) aid_size_cell_colour_35

0xb99a,	// (0x00021395) aid_size_cell_colour_112

0xb9b1,	// (0x000213ac) aid_size_cell_effect

0x0779,	// (0x00016174) bg_tb_trans_pane_cp02

0x16a7,	// (0x000170a2) heading_imed_pane

0xb9cb,	// (0x000213c6) listscroll_imed_pane

0x393d,	// (0x00019338) heading_imed_pane_g1

0x3945,	// (0x00019340) heading_imed_pane_t1

0x3953,	// (0x0001934e) grid_imed_colour_35_pane_ParamLimits

0x3953,	// (0x0001934e) grid_imed_colour_35_pane

0xb9d7,	// (0x000213d2) grid_imed_effect_pane

0x396b,	// (0x00019366) list_imed_aspect_pane

0xb9e7,	// (0x000213e2) scroll_pane_cp027_ParamLimits

0xb9e7,	// (0x000213e2) scroll_pane_cp027

0xb9f3,	// (0x000213ee) cell_imed_effect_pane_ParamLimits

0xb9f3,	// (0x000213ee) cell_imed_effect_pane

0x3973,	// (0x0001936e) cell_imed_colour_pane_ParamLimits

0x3973,	// (0x0001936e) cell_imed_colour_pane

0x39b5,	// (0x000193b0) cell_imed_colour_pane_g1_ParamLimits

0x39b5,	// (0x000193b0) cell_imed_colour_pane_g1

0x39c6,	// (0x000193c1) hgihlgiht_grid_pane_cp016_ParamLimits

0x39c6,	// (0x000193c1) hgihlgiht_grid_pane_cp016

0xba0b,	// (0x00021406) cell_imed_effect_pane_g1

0xba13,	// (0x0002140e) grid_highlight_pane_cp017

0x39d7,	// (0x000193d2) list_imed_single_pane_ParamLimits

0x39d7,	// (0x000193d2) list_imed_single_pane

0x070a,	// (0x00016105) list_highlight_pane_cp07

0x39ec,	// (0x000193e7) list_imed_aspect_pane_comp1_t1

0x1d0c,	// (0x00017707) bg_tb_trans_pane_cp05

0x3a0e,	// (0x00019409) popup_imed_adjust2_window_g1

0x3a35,	// (0x00019430) popup_imed_adjust2_window_t1

0x3a4d,	// (0x00019448) slider_imed_adjust_pane

0x3a61,	// (0x0001945c) slider_imed_adjust_pane_g1

0x3a71,	// (0x0001946c) slider_imed_adjust_pane_g2

0x3a81,	// (0x0001947c) slider_imed_adjust_pane_g3

0x3a92,	// (0x0001948d) slider_imed_adjust_pane_g4

0x0003,

0xf786,	// (0x00025181) slider_imed_adjust_pane_g

0xba1c,	// (0x00021417) aid_size_cell_clipart2

0xba28,	// (0x00021423) grid_imed_clipart_pane

0x3aa3,	// (0x0001949e) scroll_pane_cp031

0xba32,	// (0x0002142d) cell_imed_clipart_pane_ParamLimits

0xba32,	// (0x0002142d) cell_imed_clipart_pane

0xba55,	// (0x00021450) cell_imed_clipart_pane_g1

0x070a,	// (0x00016105) grid_highlight_pane_cp014

0xb840,	// (0x0002123b) main_clock2_pane_g1_ParamLimits

0xb840,	// (0x0002123b) main_clock2_pane_g1

0xb92b,	// (0x00021326) aid_call2_pane_cp10

0xb93d,	// (0x00021338) aid_call_pane_cp10

0x1a48,	// (0x00017443) popup_clock_analogue_window_cp10_g1

0x1a48,	// (0x00017443) popup_clock_analogue_window_cp10_g2

0x76b5,	// (0x0001d0b0) popup_clock_analogue_window_cp10_g3

0x76b5,	// (0x0001d0b0) popup_clock_analogue_window_cp10_g4

0x1a48,	// (0x00017443) popup_clock_analogue_window_cp10_g5

0x0004,

0xf774,	// (0x0002516f) popup_clock_analogue_window_cp10_g

0xb94f,	// (0x0002134a) popup_clock_analogue_window_cp10_t1

0x76cb,	// (0x0001d0c6) clock_digital_number_pane_cp10_ParamLimits

0x76cb,	// (0x0001d0c6) clock_digital_number_pane_cp10

0x76e5,	// (0x0001d0e0) clock_digital_number_pane_cp11_ParamLimits

0x76e5,	// (0x0001d0e0) clock_digital_number_pane_cp11

0x76ff,	// (0x0001d0fa) clock_digital_number_pane_cp12_ParamLimits

0x76ff,	// (0x0001d0fa) clock_digital_number_pane_cp12

0x7719,	// (0x0001d114) clock_digital_number_pane_cp13_ParamLimits

0x7719,	// (0x0001d114) clock_digital_number_pane_cp13

0x7733,	// (0x0001d12e) clock_digital_separator_pane_cp10_ParamLimits

0x7733,	// (0x0001d12e) clock_digital_separator_pane_cp10

0x774d,	// (0x0001d148) popup_clock_digital_window_cp02_t1_ParamLimits

0x774d,	// (0x0001d148) popup_clock_digital_window_cp02_t1

0x0ded,	// (0x000167e8) clock_digital_number_pane_cp10_g1

0x0ded,	// (0x000167e8) clock_digital_number_pane_cp10_g2

0x0001,

0xf78f,	// (0x0002518a) clock_digital_number_pane_cp10_g

0x0ded,	// (0x000167e8) clock_digital_separator_pane_cp10_g1

0x0ded,	// (0x000167e8) clock_digital_separator_pane_g2_cp10

0x1bd5,	// (0x000175d0) navi_pane_vded_g4

0x1bde,	// (0x000175d9) navi_pane_vded_g5

0x1be7,	// (0x000175e2) navi_pane_vded_t1

0x702e,	// (0x0001ca29) main_vded_pane

0xba5e,	// (0x00021459) main_vded_pane_g1

0xba6a,	// (0x00021465) main_vded_pane_g2

0xba74,	// (0x0002146f) main_vded_pane_g3

0x0002,

0xf794,	// (0x0002518f) main_vded_pane_g

0xba7e,	// (0x00021479) main_vded_pane_t1

0xba8c,	// (0x00021487) main_vded_pane_t2

0x0001,

0xf79b,	// (0x00025196) main_vded_pane_t

0xba9a,	// (0x00021495) vded_slider_pane

0xbaa4,	// (0x0002149f) vded_video_pane

0x3aab,	// (0x000194a6) vded_video_pane_g1

0xbaae,	// (0x000214a9) vded_video_pane_g2

0x1179,	// (0x00016b74) vded_video_pane_g3

0x0002,

0xf7a0,	// (0x0002519b) vded_video_pane_g

0x3ab5,	// (0x000194b0) vded_slider_pane_g1

0x3238,	// (0x00018c33) vded_slider_pane_g2

0x3abe,	// (0x000194b9) vded_slider_pane_g3

0x3ac7,	// (0x000194c2) vded_slider_pane_g4

0x3ad0,	// (0x000194cb) vded_slider_pane_g5

0x0004,

0xf7a7,	// (0x000251a2) vded_slider_pane_g

0xb71a,	// (0x00021115) mup3_rocker_pane_ParamLimits

0xb71a,	// (0x00021115) mup3_rocker_pane

0xbab7,	// (0x000214b2) mup3_control_keys_pane_g1

0xbabf,	// (0x000214ba) mup3_control_keys_pane_g2

0xbac7,	// (0x000214c2) mup3_control_keys_pane_g3

0xbacf,	// (0x000214ca) mup3_control_keys_pane_g4

0x0003,

0xf7b2,	// (0x000251ad) mup3_control_keys_pane_g

0x6fee,	// (0x0001c9e9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6fee,	// (0x0001c9e9) popup_toolbar2_fixed_window_cp01

0xb734,	// (0x0002112f) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb734,	// (0x0002112f) popup_toolbar2_fixed_window_cp02

0x240f,	// (0x00017e0a) popup_call2_audio_second_window_t4_ParamLimits

0x240f,	// (0x00017e0a) popup_call2_audio_second_window_t4

0x294b,	// (0x00018346) popup_call2_audio_first_window_t6_ParamLimits

0x294b,	// (0x00018346) popup_call2_audio_first_window_t6

0x2b89,	// (0x00018584) popup_call2_audio_out_window_t6_ParamLimits

0x2b89,	// (0x00018584) popup_call2_audio_out_window_t6

0x702e,	// (0x0001ca29) main_vitu_pane

0x0e62,	// (0x0001685d) aid_size_cell_itu_ParamLimits

0x0e62,	// (0x0001685d) aid_size_cell_itu

0x0e62,	// (0x0001685d) bg_popup_window_pane_cp08_ParamLimits

0x0e62,	// (0x0001685d) bg_popup_window_pane_cp08

0x0e62,	// (0x0001685d) field_vitu_entry_pane_ParamLimits

0x0e62,	// (0x0001685d) field_vitu_entry_pane

0x0e62,	// (0x0001685d) grid_vitu_function_pane_ParamLimits

0x0e62,	// (0x0001685d) grid_vitu_function_pane

0x0e62,	// (0x0001685d) grid_vitu_itu_pane_ParamLimits

0x0e62,	// (0x0001685d) grid_vitu_itu_pane

0x0e62,	// (0x0001685d) cell_vitu_itu_pane_ParamLimits

0x0e62,	// (0x0001685d) cell_vitu_itu_pane

0x0e62,	// (0x0001685d) cell_vitu_function_pane_ParamLimits

0x0e62,	// (0x0001685d) cell_vitu_function_pane

0x0779,	// (0x00016174) bg_popup_sub_pane_cp08_ParamLimits

0x0779,	// (0x00016174) bg_popup_sub_pane_cp08

0x114b,	// (0x00016b46) field_vitu_entry_pane_t1_ParamLimits

0x114b,	// (0x00016b46) field_vitu_entry_pane_t1

0x3ad9,	// (0x000194d4) field_vitu_entry_pane_t2_ParamLimits

0x3ad9,	// (0x000194d4) field_vitu_entry_pane_t2

0x0001,

0xf7bb,	// (0x000251b6) field_vitu_entry_pane_t_ParamLimits

0xf7bb,	// (0x000251b6) field_vitu_entry_pane_t

0x315f,	// (0x00018b5a) bg_button_pane_cp05_ParamLimits

0x315f,	// (0x00018b5a) bg_button_pane_cp05

0x3af6,	// (0x000194f1) cell_vitu_itu_pane_g1

0x1ce4,	// (0x000176df) cell_vitu_itu_pane_t1_ParamLimits

0x1ce4,	// (0x000176df) cell_vitu_itu_pane_t1

0x1ce4,	// (0x000176df) cell_vitu_itu_pane_t2_ParamLimits

0x1ce4,	// (0x000176df) cell_vitu_itu_pane_t2

0x0002,

0xf7c0,	// (0x000251bb) cell_vitu_itu_pane_t_ParamLimits

0xf7c0,	// (0x000251bb) cell_vitu_itu_pane_t

0x070a,	// (0x00016105) bg_button_pane_cp07

0x1179,	// (0x00016b74) cell_vitu_function_pane_g1

0x7107,	// (0x0001cb02) main_calc_pane_g1

0x6dd9,	// (0x0001c7d4) aid_visual_content_pane

0x702e,	// (0x0001ca29) main_vradio_pane

0x0e7e,	// (0x00016879) main_vradio_pane_g1_ParamLimits

0x0e7e,	// (0x00016879) main_vradio_pane_g1

0x0e7e,	// (0x00016879) main_vradio_pane_g2_ParamLimits

0x0e7e,	// (0x00016879) main_vradio_pane_g2

0x0001,

0xf7c7,	// (0x000251c2) main_vradio_pane_g_ParamLimits

0xf7c7,	// (0x000251c2) main_vradio_pane_g

0x1cf8,	// (0x000176f3) main_vradio_pane_t1_ParamLimits

0x1cf8,	// (0x000176f3) main_vradio_pane_t1

0x1cf8,	// (0x000176f3) main_vradio_pane_t2_ParamLimits

0x1cf8,	// (0x000176f3) main_vradio_pane_t2

0x1cf8,	// (0x000176f3) main_vradio_pane_t3_ParamLimits

0x1cf8,	// (0x000176f3) main_vradio_pane_t3

0x0002,

0xf7cc,	// (0x000251c7) main_vradio_pane_t_ParamLimits

0xf7cc,	// (0x000251c7) main_vradio_pane_t

0x0e62,	// (0x0001685d) vradio_rocker_control_pane_ParamLimits

0x0e62,	// (0x0001685d) vradio_rocker_control_pane

0x0e62,	// (0x0001685d) vradio_station_info_pane_ParamLimits

0x0e62,	// (0x0001685d) vradio_station_info_pane

0x0779,	// (0x00016174) vradio_frequency_info_pane_ParamLimits

0x0779,	// (0x00016174) vradio_frequency_info_pane

0x1179,	// (0x00016b74) vradio_station_info_pane_g1

0x1ce4,	// (0x000176df) vradio_station_info_pane_t1_ParamLimits

0x1ce4,	// (0x000176df) vradio_station_info_pane_t1

0x1cf8,	// (0x000176f3) vradio_station_info_pane_t2_ParamLimits

0x1cf8,	// (0x000176f3) vradio_station_info_pane_t2

0x0001,

0xf7d3,	// (0x000251ce) vradio_station_info_pane_t_ParamLimits

0xf7d3,	// (0x000251ce) vradio_station_info_pane_t

0x070a,	// (0x00016105) vradio_tuning_pane

0xbadf,	// (0x000214da) vradio_rocker_control_pane_g1

0x3b12,	// (0x0001950d) vradio_rocker_control_pane_g2

0xbae7,	// (0x000214e2) vradio_rocker_control_pane_g3

0xbaef,	// (0x000214ea) vradio_rocker_control_pane_g4

0xbaf7,	// (0x000214f2) vradio_rocker_control_pane_g5

0x0004,

0xf7d8,	// (0x000251d3) vradio_rocker_control_pane_g

0x1179,	// (0x00016b74) vradio_frequency_info_pane_g1

0x114b,	// (0x00016b46) vradio_frequency_info_pane_t1_ParamLimits

0x114b,	// (0x00016b46) vradio_frequency_info_pane_t1

0xbaff,	// (0x000214fa) vradio_tuning_pane_g1

0xbb0c,	// (0x00021507) vradio_tuning_pane_t1

0x6df5,	// (0x0001c7f0) area_side_right_pane_ParamLimits

0x6df5,	// (0x0001c7f0) area_side_right_pane

0x2fb3,	// (0x000189ae) status_small_pane_g1

0x2fbb,	// (0x000189b6) status_small_pane_g2

0x2fc4,	// (0x000189bf) status_small_pane_g3

0x2fcd,	// (0x000189c8) status_small_pane_g4

0x0003,

0xf5a4,	// (0x00024f9f) status_small_pane_g

0x2fd6,	// (0x000189d1) status_small_pane_t1

0x702e,	// (0x0001ca29) main_video3_pane

0x3b3f,	// (0x0001953a) cams_zoom_vslider_pane

0x3b47,	// (0x00019542) image3_wide_pane_ParamLimits

0x3b47,	// (0x00019542) image3_wide_pane

0x3b61,	// (0x0001955c) image3_wide_small_pane

0x3b6d,	// (0x00019568) main_video3_pane_g1_ParamLimits

0x3b6d,	// (0x00019568) main_video3_pane_g1

0x3b89,	// (0x00019584) main_video3_pane_g2_ParamLimits

0x3b89,	// (0x00019584) main_video3_pane_g2

0x0001,

0xf7e3,	// (0x000251de) main_video3_pane_g_ParamLimits

0xf7e3,	// (0x000251de) main_video3_pane_g

0x3ba5,	// (0x000195a0) main_video3_pane_t1_ParamLimits

0x3ba5,	// (0x000195a0) main_video3_pane_t1

0x3bd0,	// (0x000195cb) main_video3_pane_t2_ParamLimits

0x3bd0,	// (0x000195cb) main_video3_pane_t2

0x3bfb,	// (0x000195f6) main_video3_pane_t3_ParamLimits

0x3bfb,	// (0x000195f6) main_video3_pane_t3

0x0002,

0xf7e8,	// (0x000251e3) main_video3_pane_t_ParamLimits

0xf7e8,	// (0x000251e3) main_video3_pane_t

0x3c28,	// (0x00019623) cams_zoom_vslider_pane_g1

0x3c31,	// (0x0001962c) cams_zoom_vslider_pane_g2

0x0001,

0xf7ef,	// (0x000251ea) cams_zoom_vslider_pane_g

0x3c39,	// (0x00019634) small_slider_vertical_pane

0x1179,	// (0x00016b74) small_slider_vertical_pane_g1

0x1179,	// (0x00016b74) small_slider_vertical_pane_g2

0x3c41,	// (0x0001963c) small_slider_vertical_pane_g3

0x0002,

0xf7f4,	// (0x000251ef) small_slider_vertical_pane_g

0x702e,	// (0x0001ca29) main_hwr_training_pane

0x3c4a,	// (0x00019645) hwr_training_instruct_pane_ParamLimits

0x3c4a,	// (0x00019645) hwr_training_instruct_pane

0xbb1b,	// (0x00021516) hwr_training_navi_pane_ParamLimits

0xbb1b,	// (0x00021516) hwr_training_navi_pane

0xbb35,	// (0x00021530) hwr_training_write_pane_ParamLimits

0xbb35,	// (0x00021530) hwr_training_write_pane

0x070a,	// (0x00016105) bg_frame_shadow_pane

0x3c81,	// (0x0001967c) hwr_training_write_pane_g1

0x3c89,	// (0x00019684) hwr_training_write_pane_g2

0x3c91,	// (0x0001968c) hwr_training_write_pane_g3

0x3c99,	// (0x00019694) hwr_training_write_pane_g4

0x3ca1,	// (0x0001969c) hwr_training_write_pane_g5

0x3ca9,	// (0x000196a4) hwr_training_write_pane_g6

0x3cb1,	// (0x000196ac) hwr_training_write_pane_g7

0x0006,

0xf7fb,	// (0x000251f6) hwr_training_write_pane_g

0x776e,	// (0x0001d169) hwr_training_navi_pane_g1_ParamLimits

0x776e,	// (0x0001d169) hwr_training_navi_pane_g1

0x7780,	// (0x0001d17b) hwr_training_navi_pane_g2_ParamLimits

0x7780,	// (0x0001d17b) hwr_training_navi_pane_g2

0x7792,	// (0x0001d18d) hwr_training_navi_pane_g3_ParamLimits

0x7792,	// (0x0001d18d) hwr_training_navi_pane_g3

0x77a2,	// (0x0001d19d) hwr_training_navi_pane_g4_ParamLimits

0x77a2,	// (0x0001d19d) hwr_training_navi_pane_g4

0x0004,

0xf80a,	// (0x00025205) hwr_training_navi_pane_g_ParamLimits

0xf80a,	// (0x00025205) hwr_training_navi_pane_g

0x77bc,	// (0x0001d1b7) hwr_training_navi_pane_t1

0xbb6d,	// (0x00021568) list_single_hwr_training_instruct_pane_ParamLimits

0xbb6d,	// (0x00021568) list_single_hwr_training_instruct_pane

0x3d08,	// (0x00019703) list_single_hwr_training_instruct_pane_t1

0x340e,	// (0x00018e09) bg_frame_shadow_pane_g1

0x3d17,	// (0x00019712) bg_frame_shadow_pane_g2

0x3d1f,	// (0x0001971a) bg_frame_shadow_pane_g3

0x3d27,	// (0x00019722) bg_frame_shadow_pane_g4

0x3d2f,	// (0x0001972a) bg_frame_shadow_pane_g5

0x3d37,	// (0x00019732) bg_frame_shadow_pane_g6

0x3d3f,	// (0x0001973a) bg_frame_shadow_pane_g7

0x0fe0,	// (0x000169db) bg_frame_shadow_pane_g8

0x0007,

0xf815,	// (0x00025210) bg_frame_shadow_pane_g

0x702e,	// (0x0001ca29) main_video_tele_dialer_pane

0x77ca,	// (0x0001d1c5) aid_size_cell_video_keypad_ParamLimits

0x77ca,	// (0x0001d1c5) aid_size_cell_video_keypad

0x77da,	// (0x0001d1d5) grid_video_dialer_keypad_pane_ParamLimits

0x77da,	// (0x0001d1d5) grid_video_dialer_keypad_pane

0x780e,	// (0x0001d209) video_down_pane_cp_ParamLimits

0x780e,	// (0x0001d209) video_down_pane_cp

0x781c,	// (0x0001d217) cell_video_dialer_keypad_pane_ParamLimits

0x781c,	// (0x0001d217) cell_video_dialer_keypad_pane

0x3d47,	// (0x00019742) bg_button_pane_cp08_ParamLimits

0x3d47,	// (0x00019742) bg_button_pane_cp08

0xbbb2,	// (0x000215ad) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbbb2,	// (0x000215ad) cell_video_dialer_keypad_pane_g1

0xb70e,	// (0x00021109) mup3_rocker2_pane_ParamLimits

0xb70e,	// (0x00021109) mup3_rocker2_pane

0x1179,	// (0x00016b74) mup3_rocker2_pane_g1

0x7492,	// (0x0001ce8d) main_dialer2_pane

0x702e,	// (0x0001ca29) main_mp4_pane

0x784f,	// (0x0001d24a) main_mp4_pane_g1_ParamLimits

0x784f,	// (0x0001d24a) main_mp4_pane_g1

0x785d,	// (0x0001d258) main_mp4_pane_g2_ParamLimits

0x785d,	// (0x0001d258) main_mp4_pane_g2

0x786b,	// (0x0001d266) main_mp4_pane_g3_ParamLimits

0x786b,	// (0x0001d266) main_mp4_pane_g3

0x78b0,	// (0x0001d2ab) main_mp4_pane_g4_ParamLimits

0x78b0,	// (0x0001d2ab) main_mp4_pane_g4

0x78de,	// (0x0001d2d9) main_mp4_pane_g5_ParamLimits

0x78de,	// (0x0001d2d9) main_mp4_pane_g5

0x0007,

0xf835,	// (0x00025230) main_mp4_pane_g_ParamLimits

0xf835,	// (0x00025230) main_mp4_pane_g

0x7952,	// (0x0001d34d) main_mp4_pane_t1_ParamLimits

0x7952,	// (0x0001d34d) main_mp4_pane_t1

0x79ae,	// (0x0001d3a9) main_mp4_pane_t2_ParamLimits

0x79ae,	// (0x0001d3a9) main_mp4_pane_t2

0x3ecf,	// (0x000198ca) main_mp4_pane_t3_ParamLimits

0x3ecf,	// (0x000198ca) main_mp4_pane_t3

0x7a00,	// (0x0001d3fb) main_mp4_pane_t4_ParamLimits

0x7a00,	// (0x0001d3fb) main_mp4_pane_t4

0x0003,

0xf846,	// (0x00025241) main_mp4_pane_t_ParamLimits

0xf846,	// (0x00025241) main_mp4_pane_t

0x7a44,	// (0x0001d43f) mp4_progress_pane_ParamLimits

0x7a44,	// (0x0001d43f) mp4_progress_pane

0x7a8e,	// (0x0001d489) mp4_rocker_pane_ParamLimits

0x7a8e,	// (0x0001d489) mp4_rocker_pane

0x3fab,	// (0x000199a6) mp4_progress_pane_t1

0x3fc4,	// (0x000199bf) mp4_progress_pane_t2

0x0001,

0xf84f,	// (0x0002524a) mp4_progress_pane_t

0x3fdd,	// (0x000199d8) mup_progress_pane_cp04

0x49b1,	// (0x0001a3ac) mp4_rocker_pane_g1

0x7aae,	// (0x0001d4a9) aid_cell_size_keypad2_ParamLimits

0x7aae,	// (0x0001d4a9) aid_cell_size_keypad2

0x7abe,	// (0x0001d4b9) dialer2_ne_pane_ParamLimits

0x7abe,	// (0x0001d4b9) dialer2_ne_pane

0x7acc,	// (0x0001d4c7) grid_dialer2_keypad_pane_ParamLimits

0x7acc,	// (0x0001d4c7) grid_dialer2_keypad_pane

0x3b31,	// (0x0001952c) bg_popup_call_pane_cp07_ParamLimits

0x3b31,	// (0x0001952c) bg_popup_call_pane_cp07

0xbbec,	// (0x000215e7) dialer2_ne_pane_t1_ParamLimits

0xbbec,	// (0x000215e7) dialer2_ne_pane_t1

0x7adc,	// (0x0001d4d7) cell_dialer2_keypad_pane_ParamLimits

0x7adc,	// (0x0001d4d7) cell_dialer2_keypad_pane

0x4002,	// (0x000199fd) bg_button_pane_pane_cp04_ParamLimits

0x4002,	// (0x000199fd) bg_button_pane_pane_cp04

0xbc11,	// (0x0002160c) cell_dialer2_keypad_pane_g1_ParamLimits

0xbc11,	// (0x0002160c) cell_dialer2_keypad_pane_g1

0x8db3,	// (0x0001e7ae) aid_placing_vt_set_content_ParamLimits

0x8db3,	// (0x0001e7ae) aid_placing_vt_set_content

0x8ddf,	// (0x0001e7da) aid_placing_vt_set_title_ParamLimits

0x8ddf,	// (0x0001e7da) aid_placing_vt_set_title

0x702e,	// (0x0001ca29) main_image3_pane

0x7b23,	// (0x0001d51e) area_side_right_pane_cp01_ParamLimits

0x7b23,	// (0x0001d51e) area_side_right_pane_cp01

0x7b50,	// (0x0001d54b) main_image3_pane_g1_ParamLimits

0x7b50,	// (0x0001d54b) main_image3_pane_g1

0x7b5e,	// (0x0001d559) main_image3_pane_g2_ParamLimits

0x7b5e,	// (0x0001d559) main_image3_pane_g2

0x7b77,	// (0x0001d572) main_image3_pane_g3_ParamLimits

0x7b77,	// (0x0001d572) main_image3_pane_g3

0x7b90,	// (0x0001d58b) main_image3_pane_g4_ParamLimits

0x7b90,	// (0x0001d58b) main_image3_pane_g4

0x0003,

0xf85e,	// (0x00025259) main_image3_pane_g_ParamLimits

0xf85e,	// (0x00025259) main_image3_pane_g

0x7ba9,	// (0x0001d5a4) main_image3_pane_t1_ParamLimits

0x7ba9,	// (0x0001d5a4) main_image3_pane_t1

0x7bce,	// (0x0001d5c9) main_image3_pane_t2_ParamLimits

0x7bce,	// (0x0001d5c9) main_image3_pane_t2

0x7bed,	// (0x0001d5e8) main_image3_pane_t3_ParamLimits

0x7bed,	// (0x0001d5e8) main_image3_pane_t3

0x0003,

0xf867,	// (0x00025262) main_image3_pane_t_ParamLimits

0xf867,	// (0x00025262) main_image3_pane_t

0x0e62,	// (0x0001685d) grid_sctrl_middle_pane_cp01_ParamLimits

0x0e62,	// (0x0001685d) grid_sctrl_middle_pane_cp01

0xbc79,	// (0x00021674) cell_sctrl_middle_pane_cp01_ParamLimits

0xbc79,	// (0x00021674) cell_sctrl_middle_pane_cp01

0xbc8a,	// (0x00021685) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbc8a,	// (0x00021685) cell_sctrl_middle_pane_cp01_g1

0x702e,	// (0x0001ca29) main_call4_pane

0x7c4e,	// (0x0001d649) aid_size_button_call4_ParamLimits

0x7c4e,	// (0x0001d649) aid_size_button_call4

0x7c84,	// (0x0001d67f) call4_windows_pane_ParamLimits

0x7c84,	// (0x0001d67f) call4_windows_pane

0x7c99,	// (0x0001d694) grid_call4_button_pane_ParamLimits

0x7c99,	// (0x0001d694) grid_call4_button_pane

0xbca3,	// (0x0002169e) call4_windows_conf_pane

0xbcb8,	// (0x000216b3) popup_call4_audio_first_window_ParamLimits

0xbcb8,	// (0x000216b3) popup_call4_audio_first_window

0xbd08,	// (0x00021703) popup_call4_audio_second_window_ParamLimits

0xbd08,	// (0x00021703) popup_call4_audio_second_window

0xbd21,	// (0x0002171c) popup_call4_audio_wait_window_ParamLimits

0xbd21,	// (0x0002171c) popup_call4_audio_wait_window

0x7cbb,	// (0x0001d6b6) cell_call4_button_pane_ParamLimits

0x7cbb,	// (0x0001d6b6) cell_call4_button_pane

0xbd2f,	// (0x0002172a) bg_button_pane_cp09_ParamLimits

0xbd2f,	// (0x0002172a) bg_button_pane_cp09

0x7cde,	// (0x0001d6d9) cell_call4_button_pane_g1_ParamLimits

0x7cde,	// (0x0001d6d9) cell_call4_button_pane_g1

0xbd3b,	// (0x00021736) cell_call4_button_pane_t1_ParamLimits

0xbd3b,	// (0x00021736) cell_call4_button_pane_t1

0x407a,	// (0x00019a75) popup_call4_audio_conf_window_ParamLimits

0x407a,	// (0x00019a75) popup_call4_audio_conf_window

0xb741,	// (0x0002113c) mup3_progress_pane_t1_ParamLimits

0xb760,	// (0x0002115b) mup3_progress_pane_t2_ParamLimits

0x37ec,	// (0x000191e7) mup3_progress_pane_t3_ParamLimits

0xf73c,	// (0x00025137) mup3_progress_pane_t_ParamLimits

0x3809,	// (0x00019204) mup_progress_pane_cp03_ParamLimits

0xbad7,	// (0x000214d2) mup3_control_keys_pane_g4_copy1

0x7a72,	// (0x0001d46d) mp4_rocker2_pane_ParamLimits

0x7a72,	// (0x0001d46d) mp4_rocker2_pane

0x4096,	// (0x00019a91) mp4_rocker2_pane_g1

0x408e,	// (0x00019a89) mp4_rocker2_pane_g2

0x7d1d,	// (0x0001d718) mp4_rocker2_pane_g3

0x7d25,	// (0x0001d720) mp4_rocker2_pane_g4

0x7d2d,	// (0x0001d728) mp4_rocker2_pane_g5

0x0004,

0xf870,	// (0x0002526b) mp4_rocker2_pane_g

0x702e,	// (0x0001ca29) main_camera4_pane

0x702e,	// (0x0001ca29) main_video4_pane

0x77ea,	// (0x0001d1e5) main_video_tele_dialer_pane_t1_ParamLimits

0x77ea,	// (0x0001d1e5) main_video_tele_dialer_pane_t1

0x77fc,	// (0x0001d1f7) main_video_tele_dialer_pane_t2_ParamLimits

0x77fc,	// (0x0001d1f7) main_video_tele_dialer_pane_t2

0x0001,

0xf826,	// (0x00025221) main_video_tele_dialer_pane_t_ParamLimits

0xf826,	// (0x00025221) main_video_tele_dialer_pane_t

0x7d4d,	// (0x0001d748) cam4_autofocus_pane_ParamLimits

0x7d4d,	// (0x0001d748) cam4_autofocus_pane

0x7d67,	// (0x0001d762) cam4_image_uncrop_pane_ParamLimits

0x7d67,	// (0x0001d762) cam4_image_uncrop_pane

0x7d7e,	// (0x0001d779) cam4_indicators_pane_ParamLimits

0x7d7e,	// (0x0001d779) cam4_indicators_pane

0x7d9a,	// (0x0001d795) main_camera4_pane_g1_ParamLimits

0x7d9a,	// (0x0001d795) main_camera4_pane_g1

0x7da6,	// (0x0001d7a1) main_camera4_pane_g2_ParamLimits

0x7da6,	// (0x0001d7a1) main_camera4_pane_g2

0x7da6,	// (0x0001d7a1) main_camera4_pane_g3_ParamLimits

0x7da6,	// (0x0001d7a1) main_camera4_pane_g3

0x7db2,	// (0x0001d7ad) main_camera4_pane_g4_ParamLimits

0x7db2,	// (0x0001d7ad) main_camera4_pane_g4

0x7dbe,	// (0x0001d7b9) main_camera4_pane_g5_ParamLimits

0x7dbe,	// (0x0001d7b9) main_camera4_pane_g5

0x0005,

0xf87b,	// (0x00025276) main_camera4_pane_g_ParamLimits

0xf87b,	// (0x00025276) main_camera4_pane_g

0x7dd8,	// (0x0001d7d3) main_camera4_pane_t1_ParamLimits

0x7dd8,	// (0x0001d7d3) main_camera4_pane_t1

0x5595,	// (0x0001af90) bg_tb_trans_pane_cp06

0x7e04,	// (0x0001d7ff) cam4_indicators_pane_g1

0x7e15,	// (0x0001d810) cam4_indicators_pane_g2

0x0002,

0xf896,	// (0x00025291) cam4_indicators_pane_g

0x7e2d,	// (0x0001d828) cam4_indicators_pane_t1

0x7e57,	// (0x0001d852) main_video4_pane_g1_ParamLimits

0x7e57,	// (0x0001d852) main_video4_pane_g1

0x7e63,	// (0x0001d85e) main_video4_pane_g2_ParamLimits

0x7e63,	// (0x0001d85e) main_video4_pane_g2

0x7e6f,	// (0x0001d86a) main_video4_pane_g3_ParamLimits

0x7e6f,	// (0x0001d86a) main_video4_pane_g3

0x7e7b,	// (0x0001d876) main_video4_pane_g4_ParamLimits

0x7e7b,	// (0x0001d876) main_video4_pane_g4

0x0004,

0xf89d,	// (0x00025298) main_video4_pane_g_ParamLimits

0xf89d,	// (0x00025298) main_video4_pane_g

0x7e9b,	// (0x0001d896) vid4_indicators_pane_ParamLimits

0x7e9b,	// (0x0001d896) vid4_indicators_pane

0x7eba,	// (0x0001d8b5) video4_image_uncrop_cif_pane_ParamLimits

0x7eba,	// (0x0001d8b5) video4_image_uncrop_cif_pane

0x7ec9,	// (0x0001d8c4) video4_image_uncrop_nhd_pane_ParamLimits

0x7ec9,	// (0x0001d8c4) video4_image_uncrop_nhd_pane

0x7d67,	// (0x0001d762) video4_image_uncrop_vga_pane_ParamLimits

0x7d67,	// (0x0001d762) video4_image_uncrop_vga_pane

0x7484,	// (0x0001ce7f) bg_tb_trans_pane_cp07

0x7ede,	// (0x0001d8d9) vid4_indicators_pane_g1

0x7ef2,	// (0x0001d8ed) vid4_indicators_pane_g2

0x7f06,	// (0x0001d901) vid4_indicators_pane_g3

0x0004,

0xf8a8,	// (0x000252a3) vid4_indicators_pane_g

0x7f33,	// (0x0001d92e) vid4_indicators_pane_t1

0xbd71,	// (0x0002176c) cam4_autofocus_pane_g1

0xbd79,	// (0x00021774) cam4_autofocus_pane_g2

0xbd81,	// (0x0002177c) cam4_autofocus_pane_g3

0x0002,

0xf8b3,	// (0x000252ae) cam4_autofocus_pane_g

0xbd89,	// (0x00021784) cam4_autofocus_pane_g3_copy1

0xbb96,	// (0x00021591) video_down_pane_cp_t1

0xbba4,	// (0x0002159f) video_down_pane_cp_t2

0x0001,

0xf82b,	// (0x00025226) video_down_pane_cp_t

0x7020,	// (0x0001ca1b) popup_vitu2_window_ParamLimits

0x7020,	// (0x0001ca1b) popup_vitu2_window

0x7f4a,	// (0x0001d945) aid_size_cell2_itu2_ParamLimits

0x7f4a,	// (0x0001d945) aid_size_cell2_itu2

0x7f66,	// (0x0001d961) aid_size_cell_itu2_ParamLimits

0x7f66,	// (0x0001d961) aid_size_cell_itu2

0x7fa0,	// (0x0001d99b) bg_popup_window_pane_cp09_ParamLimits

0x7fa0,	// (0x0001d99b) bg_popup_window_pane_cp09

0x7fae,	// (0x0001d9a9) field_vitu2_entry_pane_ParamLimits

0x7fae,	// (0x0001d9a9) field_vitu2_entry_pane

0x7fcc,	// (0x0001d9c7) grid_vitu2_function_pane_ParamLimits

0x7fcc,	// (0x0001d9c7) grid_vitu2_function_pane

0x800c,	// (0x0001da07) grid_vitu2_itu_pane_ParamLimits

0x800c,	// (0x0001da07) grid_vitu2_itu_pane

0x8070,	// (0x0001da6b) cell_vitu2_itu_pane_ParamLimits

0x8070,	// (0x0001da6b) cell_vitu2_itu_pane

0x8089,	// (0x0001da84) cell_vitu2_function_pane_ParamLimits

0x8089,	// (0x0001da84) cell_vitu2_function_pane

0x4199,	// (0x00019b94) bg_popup_call_pane_cp08_ParamLimits

0x4199,	// (0x00019b94) bg_popup_call_pane_cp08

0x41b0,	// (0x00019bab) field_vitu2_entry_pane_g1

0x41bc,	// (0x00019bb7) field_vitu2_entry_pane_g2

0x0002,

0xf8ba,	// (0x000252b5) field_vitu2_entry_pane_g

0xbd91,	// (0x0002178c) field_vitu2_entry_pane_t1_ParamLimits

0xbd91,	// (0x0002178c) field_vitu2_entry_pane_t1

0x41c8,	// (0x00019bc3) field_vitu2_entry_pane_t2_ParamLimits

0x41c8,	// (0x00019bc3) field_vitu2_entry_pane_t2

0x0001,

0xf8c1,	// (0x000252bc) field_vitu2_entry_pane_t_ParamLimits

0xf8c1,	// (0x000252bc) field_vitu2_entry_pane_t

0x7623,	// (0x0001d01e) bg_button_pane_cp010_ParamLimits

0x7623,	// (0x0001d01e) bg_button_pane_cp010

0x80ca,	// (0x0001dac5) cell_vitu2_itu_pane_g1

0x80f0,	// (0x0001daeb) cell_vitu2_itu_pane_t1_ParamLimits

0x80f0,	// (0x0001daeb) cell_vitu2_itu_pane_t1

0x813c,	// (0x0001db37) cell_vitu2_itu_pane_t2_ParamLimits

0x813c,	// (0x0001db37) cell_vitu2_itu_pane_t2

0x0002,

0xf8cb,	// (0x000252c6) cell_vitu2_itu_pane_t_ParamLimits

0xf8cb,	// (0x000252c6) cell_vitu2_itu_pane_t

0x7484,	// (0x0001ce7f) bg_button_pane_cp011

0x8204,	// (0x0001dbff) cell_vitu2_function_pane_g1

0x702e,	// (0x0001ca29) main_myfav_hc_pane

0x7c2f,	// (0x0001d62a) popup_image3_note_pane_ParamLimits

0x7c2f,	// (0x0001d62a) popup_image3_note_pane

0x7c3d,	// (0x0001d638) popup_image3_tool_bar_pane_ParamLimits

0x7c3d,	// (0x0001d638) popup_image3_tool_bar_pane

0x81b2,	// (0x0001dbad) cell_vitu2_itu_pane_t3_ParamLimits

0x81b2,	// (0x0001dbad) cell_vitu2_itu_pane_t3

0x070a,	// (0x00016105) bg_popup_trans_pane

0x41ed,	// (0x00019be8) grid_image3_tool_bar_pane

0x41f7,	// (0x00019bf2) bg_popup_trans_pane_g1

0x138a,	// (0x00016d85) bg_popup_trans_pane_g2

0x41ff,	// (0x00019bfa) bg_popup_trans_pane_g3

0x4207,	// (0x00019c02) bg_popup_trans_pane_g4

0x420f,	// (0x00019c0a) bg_popup_trans_pane_g5

0x4217,	// (0x00019c12) bg_popup_trans_pane_g6

0x421f,	// (0x00019c1a) bg_popup_trans_pane_g7

0x4227,	// (0x00019c22) bg_popup_trans_pane_g8

0x136a,	// (0x00016d65) bg_popup_trans_pane_g9

0x0008,

0xf8d2,	// (0x000252cd) bg_popup_trans_pane_g

0x422f,	// (0x00019c2a) cell_image3_tool_bar_pane_ParamLimits

0x422f,	// (0x00019c2a) cell_image3_tool_bar_pane

0x1179,	// (0x00016b74) cell_image3_tool_bar_pane_g1

0x070a,	// (0x00016105) bg_popup_trans_pane_cp1

0x4243,	// (0x00019c3e) popup_image3_note_pane_t1

0x4251,	// (0x00019c4c) popup_image3_note_pane_t2

0x425f,	// (0x00019c5a) popup_image3_note_pane_t3

0x0002,

0xf8e5,	// (0x000252e0) popup_image3_note_pane_t

0x426d,	// (0x00019c68) popup_image3_note_pane_t3_copy1

0xbdc4,	// (0x000217bf) bg_myfav_hc_instruction_pane_ParamLimits

0xbdc4,	// (0x000217bf) bg_myfav_hc_instruction_pane

0xbddc,	// (0x000217d7) cell_myfav_contact_pane_ParamLimits

0xbddc,	// (0x000217d7) cell_myfav_contact_pane

0xbdf6,	// (0x000217f1) cell_myfav_contact_pane_cp1_ParamLimits

0xbdf6,	// (0x000217f1) cell_myfav_contact_pane_cp1

0xbe0e,	// (0x00021809) cell_myfav_contact_pane_cp2_ParamLimits

0xbe0e,	// (0x00021809) cell_myfav_contact_pane_cp2

0xbe26,	// (0x00021821) cell_myfav_contact_pane_cp3_ParamLimits

0xbe26,	// (0x00021821) cell_myfav_contact_pane_cp3

0xbe3d,	// (0x00021838) cell_myfav_contact_pane_cp4_ParamLimits

0xbe3d,	// (0x00021838) cell_myfav_contact_pane_cp4

0xbe53,	// (0x0002184e) cell_myfav_contact_pane_cp5_ParamLimits

0xbe53,	// (0x0002184e) cell_myfav_contact_pane_cp5

0xbe67,	// (0x00021862) cell_myfav_contact_pane_cp6_ParamLimits

0xbe67,	// (0x00021862) cell_myfav_contact_pane_cp6

0xbe7b,	// (0x00021876) cell_myfav_contact_pane_cp7_ParamLimits

0xbe7b,	// (0x00021876) cell_myfav_contact_pane_cp7

0x427b,	// (0x00019c76) listscroll_gen_pane_cp05

0xbe93,	// (0x0002188e) main_myfav_hc_pane_g1_ParamLimits

0xbe93,	// (0x0002188e) main_myfav_hc_pane_g1

0xbea9,	// (0x000218a4) main_myfav_hc_pane_g2_ParamLimits

0xbea9,	// (0x000218a4) main_myfav_hc_pane_g2

0x0002,

0xf8ec,	// (0x000252e7) main_myfav_hc_pane_g_ParamLimits

0xf8ec,	// (0x000252e7) main_myfav_hc_pane_g

0xbed9,	// (0x000218d4) main_myfav_hc_pane_t1_ParamLimits

0xbed9,	// (0x000218d4) main_myfav_hc_pane_t1

0x4284,	// (0x00019c7f) main_myfav_hc_pane_t2_ParamLimits

0x4284,	// (0x00019c7f) main_myfav_hc_pane_t2

0x4296,	// (0x00019c91) main_myfav_hc_pane_t3_ParamLimits

0x4296,	// (0x00019c91) main_myfav_hc_pane_t3

0xbef0,	// (0x000218eb) main_myfav_hc_pane_t4_ParamLimits

0xbef0,	// (0x000218eb) main_myfav_hc_pane_t4

0x0004,

0xf8f3,	// (0x000252ee) main_myfav_hc_pane_t_ParamLimits

0xf8f3,	// (0x000252ee) main_myfav_hc_pane_t

0x1179,	// (0x00016b74) bg_myfav_hc_instruction_pane_g1

0x42a8,	// (0x00019ca3) cell_myfav_contact_pane_g1_ParamLimits

0x42a8,	// (0x00019ca3) cell_myfav_contact_pane_g1

0x42a8,	// (0x00019ca3) cell_myfav_contact_pane_g2_ParamLimits

0x42a8,	// (0x00019ca3) cell_myfav_contact_pane_g2

0x42b4,	// (0x00019caf) cell_myfav_contact_pane_g3_ParamLimits

0x42b4,	// (0x00019caf) cell_myfav_contact_pane_g3

0x0e7e,	// (0x00016879) cell_myfav_contact_pane_g4_ParamLimits

0x0e7e,	// (0x00016879) cell_myfav_contact_pane_g4

0x42c1,	// (0x00019cbc) cell_myfav_contact_pane_g5_ParamLimits

0x42c1,	// (0x00019cbc) cell_myfav_contact_pane_g5

0x0004,

0xf8fe,	// (0x000252f9) cell_myfav_contact_pane_g_ParamLimits

0xf8fe,	// (0x000252f9) cell_myfav_contact_pane_g

0xbec1,	// (0x000218bc) main_myfav_hc_pane_g3_ParamLimits

0xbec1,	// (0x000218bc) main_myfav_hc_pane_g3

0x6f29,	// (0x0001c924) popup_adpt_find_window

0xbf1a,	// (0x00021915) afind_page_pane_ParamLimits

0xbf1a,	// (0x00021915) afind_page_pane

0xbf27,	// (0x00021922) aid_size_cell_afind_ParamLimits

0xbf27,	// (0x00021922) aid_size_cell_afind

0xbf41,	// (0x0002193c) bg_popup_sub_pane_cp09_ParamLimits

0xbf41,	// (0x0002193c) bg_popup_sub_pane_cp09

0xbf4e,	// (0x00021949) find_pane_cp01_ParamLimits

0xbf4e,	// (0x00021949) find_pane_cp01

0x42cd,	// (0x00019cc8) grid_afind_control_pane_ParamLimits

0x42cd,	// (0x00019cc8) grid_afind_control_pane

0xbf5b,	// (0x00021956) grid_afind_pane_ParamLimits

0xbf5b,	// (0x00021956) grid_afind_pane

0xbf75,	// (0x00021970) cell_afind_pane_ParamLimits

0xbf75,	// (0x00021970) cell_afind_pane

0x1179,	// (0x00016b74) afind_page_pane_g1

0xbfbd,	// (0x000219b8) afind_page_pane_g2

0xbfc6,	// (0x000219c1) afind_page_pane_g3

0x0002,

0xf909,	// (0x00025304) afind_page_pane_g

0xbfcf,	// (0x000219ca) afind_page_pane_t1

0x42e1,	// (0x00019cdc) cell_afind_grid_control_pane_ParamLimits

0x42e1,	// (0x00019cdc) cell_afind_grid_control_pane

0x4002,	// (0x000199fd) bg_button_pane_cp69_ParamLimits

0x4002,	// (0x000199fd) bg_button_pane_cp69

0xbfef,	// (0x000219ea) cell_afind_pane_g1_ParamLimits

0xbfef,	// (0x000219ea) cell_afind_pane_g1

0xbffc,	// (0x000219f7) cell_afind_pane_t1_ParamLimits

0xbffc,	// (0x000219f7) cell_afind_pane_t1

0x1183,	// (0x00016b7e) bg_button_pane_cp72

0x42f0,	// (0x00019ceb) cell_afind_grid_control_pane_g1

0xa8fc,	// (0x000202f7) aid_image_placing_area_ParamLimits

0xa8fc,	// (0x000202f7) aid_image_placing_area

0x0e70,	// (0x0001686b) field_vitu_entry_pane_g1_ParamLimits

0x0e70,	// (0x0001686b) field_vitu_entry_pane_g1

0x0e70,	// (0x0001686b) field_vitu_entry_pane_g2_ParamLimits

0x0e70,	// (0x0001686b) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x00024bfc) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x00024bfc) field_vitu_entry_pane_g

0x3af6,	// (0x000194f1) cell_vitu_itu_pane_g1_ParamLimits

0x3ad9,	// (0x000194d4) cell_vitu_itu_pane_t3_ParamLimits

0x3ad9,	// (0x000194d4) cell_vitu_itu_pane_t3

0x3fab,	// (0x000199a6) mp4_progress_pane_t1_ParamLimits

0x3fc4,	// (0x000199bf) mp4_progress_pane_t2_ParamLimits

0xf84f,	// (0x0002524a) mp4_progress_pane_t_ParamLimits

0x3fdd,	// (0x000199d8) mup_progress_pane_cp04_ParamLimits

0xbf04,	// (0x000218ff) main_myfav_hc_pane_t5_ParamLimits

0xbf04,	// (0x000218ff) main_myfav_hc_pane_t5

0x6ded,	// (0x0001c7e8) aid_zoom_text_primary

0x6f29,	// (0x0001c924) popup_adpt_find_window_ParamLimits

0x7484,	// (0x0001ce7f) main_cam_set_pane

0x7d8c,	// (0x0001d787) cam4_zoom_pane_ParamLimits

0x7d8c,	// (0x0001d787) cam4_zoom_pane

0xc00e,	// (0x00021a09) main_cam_set_pane_g1_ParamLimits

0xc00e,	// (0x00021a09) main_cam_set_pane_g1

0xc01c,	// (0x00021a17) main_cam_set_pane_g2_ParamLimits

0xc01c,	// (0x00021a17) main_cam_set_pane_g2

0x0001,

0xf910,	// (0x0002530b) main_cam_set_pane_g_ParamLimits

0xf910,	// (0x0002530b) main_cam_set_pane_g

0xc028,	// (0x00021a23) main_cam_set_pane_t1_ParamLimits

0xc028,	// (0x00021a23) main_cam_set_pane_t1

0xc044,	// (0x00021a3f) main_cset_listscroll_pane_ParamLimits

0xc044,	// (0x00021a3f) main_cset_listscroll_pane

0xc076,	// (0x00021a71) main_cset_slider_pane_ParamLimits

0xc076,	// (0x00021a71) main_cset_slider_pane

0x4301,	// (0x00019cfc) main_cset_list_pane_ParamLimits

0x4301,	// (0x00019cfc) main_cset_list_pane

0x4311,	// (0x00019d0c) scroll_pane_cp028

0xc095,	// (0x00021a90) aid_area_touch_slider

0xc0b1,	// (0x00021aac) cset_slider_pane

0xc0d4,	// (0x00021acf) main_cset_slider_pane_g1

0xc0e9,	// (0x00021ae4) main_cset_slider_pane_g2

0x0011,

0xf915,	// (0x00025310) main_cset_slider_pane_g

0x4362,	// (0x00019d5d) main_cset_slider_pane_t1

0xc1af,	// (0x00021baa) main_cset_slider_pane_t2

0xc1c9,	// (0x00021bc4) main_cset_slider_pane_t3

0xc1e3,	// (0x00021bde) main_cset_slider_pane_t4

0xc201,	// (0x00021bfc) main_cset_slider_pane_t5

0xc21f,	// (0x00021c1a) main_cset_slider_pane_t6

0xc236,	// (0x00021c31) main_cset_slider_pane_t7

0x000e,

0xf93a,	// (0x00025335) main_cset_slider_pane_t

0xc344,	// (0x00021d3f) cset_list_set_pane_ParamLimits

0xc344,	// (0x00021d3f) cset_list_set_pane

0x43fc,	// (0x00019df7) aid_position_infowindow_above

0x4404,	// (0x00019dff) aid_position_infowindow_below

0xc35d,	// (0x00021d58) cset_list_set_pane_g1_ParamLimits

0xc35d,	// (0x00021d58) cset_list_set_pane_g1

0xc369,	// (0x00021d64) cset_list_set_pane_g3_ParamLimits

0xc369,	// (0x00021d64) cset_list_set_pane_g3

0x0001,

0xf959,	// (0x00025354) cset_list_set_pane_g_ParamLimits

0xf959,	// (0x00025354) cset_list_set_pane_g

0xc378,	// (0x00021d73) cset_list_set_pane_t1_ParamLimits

0xc378,	// (0x00021d73) cset_list_set_pane_t1

0x0779,	// (0x00016174) list_highlight_pane_cp021_ParamLimits

0x0779,	// (0x00016174) list_highlight_pane_cp021

0x1d7c,	// (0x00017777) cset_slider_pane_g1

0x1d8e,	// (0x00017789) cset_slider_pane_g2

0x1d85,	// (0x00017780) cset_slider_pane_g3

0x0002,

0xf95e,	// (0x00025359) cset_slider_pane_g

0x8218,	// (0x0001dc13) aid_area_touch_cam4_zoom

0x8220,	// (0x0001dc1b) cam4_zoom_cont_pane

0x8228,	// (0x0001dc23) cam4_zoom_pane_g1

0x8230,	// (0x0001dc2b) cam4_zoom_pane_g2

0x8238,	// (0x0001dc33) cam4_zoom_pane_g3

0x0002,

0xf965,	// (0x00025360) cam4_zoom_pane_g

0x8240,	// (0x0001dc3b) cam4_zoom_cont_pane_g1

0x8249,	// (0x0001dc44) cam4_zoom_cont_pane_g2

0x8252,	// (0x0001dc4d) cam4_zoom_cont_pane_g3

0x0002,

0xf96c,	// (0x00025367) cam4_zoom_cont_pane_g

0x7c68,	// (0x0001d663) call4_image_pane_ParamLimits

0x7c68,	// (0x0001d663) call4_image_pane

0xbca3,	// (0x0002169e) call4_windows_conf_pane_ParamLimits

0xbce6,	// (0x000216e1) popup_call4_audio_in_window_ParamLimits

0xbce6,	// (0x000216e1) popup_call4_audio_in_window

0x070a,	// (0x00016105) bg_popup_call2_act_pane_cp02

0x4072,	// (0x00019a6d) call4_list_conf_pane

0x1179,	// (0x00016b74) call4_image_pane_g1

0x1179,	// (0x00016b74) call4_image_pane_g2

0x0001,

0xf3dd,	// (0x00024dd8) call4_image_pane_g

0x443e,	// (0x00019e39) list_single_graphic_popup_conf4_pane_ParamLimits

0x443e,	// (0x00019e39) list_single_graphic_popup_conf4_pane

0x070a,	// (0x00016105) list_highlight_pane_cp022

0x4451,	// (0x00019e4c) list_single_graphic_popup_conf4_pane_g1

0x1945,	// (0x00017340) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf973,	// (0x0002536e) list_single_graphic_popup_conf4_pane_g

0x4459,	// (0x00019e54) list_single_graphic_popup_conf4_pane_t1

0x8f43,	// (0x0001e93e) popup_vtel_slider_window_ParamLimits

0x8f43,	// (0x0001e93e) popup_vtel_slider_window

0x3ff0,	// (0x000199eb) dialer2_ne_pane_t2_ParamLimits

0x3ff0,	// (0x000199eb) dialer2_ne_pane_t2

0x0001,

0xf854,	// (0x0002524f) dialer2_ne_pane_t_ParamLimits

0xf854,	// (0x0002524f) dialer2_ne_pane_t

0x0779,	// (0x00016174) bg_popup_sub_pane_cp010_ParamLimits

0x0779,	// (0x00016174) bg_popup_sub_pane_cp010

0xc38d,	// (0x00021d88) popup_vtel_slider_window_g1_ParamLimits

0xc38d,	// (0x00021d88) popup_vtel_slider_window_g1

0xc399,	// (0x00021d94) popup_vtel_slider_window_g2_ParamLimits

0xc399,	// (0x00021d94) popup_vtel_slider_window_g2

0x0003,

0xf978,	// (0x00025373) popup_vtel_slider_window_g_ParamLimits

0xf978,	// (0x00025373) popup_vtel_slider_window_g

0xc3e1,	// (0x00021ddc) vtel_slider_pane_ParamLimits

0xc3e1,	// (0x00021ddc) vtel_slider_pane

0xc3f0,	// (0x00021deb) vtel_slider_pane_g1_ParamLimits

0xc3f0,	// (0x00021deb) vtel_slider_pane_g1

0xc3fd,	// (0x00021df8) vtel_slider_pane_g2_ParamLimits

0xc3fd,	// (0x00021df8) vtel_slider_pane_g2

0xc40a,	// (0x00021e05) vtel_slider_pane_g3_ParamLimits

0xc40a,	// (0x00021e05) vtel_slider_pane_g3

0xc3f0,	// (0x00021deb) vtel_slider_pane_g4_ParamLimits

0xc3f0,	// (0x00021deb) vtel_slider_pane_g4

0xc417,	// (0x00021e12) vtel_slider_pane_g5_ParamLimits

0xc417,	// (0x00021e12) vtel_slider_pane_g5

0x0004,

0xf981,	// (0x0002537c) vtel_slider_pane_g_ParamLimits

0xf981,	// (0x0002537c) vtel_slider_pane_g

0x7484,	// (0x0001ce7f) main_gallery2_pane

0x7f82,	// (0x0001d97d) aid_size_row_itut2_dropdow_list_ParamLimits

0x7f82,	// (0x0001d97d) aid_size_row_itut2_dropdow_list

0x7fec,	// (0x0001d9e7) grid_vitu2_function_top_pane_ParamLimits

0x7fec,	// (0x0001d9e7) grid_vitu2_function_top_pane

0x8040,	// (0x0001da3b) popup_vitu2_dropdown_list_window_ParamLimits

0x8040,	// (0x0001da3b) popup_vitu2_dropdown_list_window

0x805e,	// (0x0001da59) popup_vitu2_match_list_window

0x825b,	// (0x0001dc56) cell_vitu2_function_top_pane_ParamLimits

0x825b,	// (0x0001dc56) cell_vitu2_function_top_pane

0x8275,	// (0x0001dc70) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8275,	// (0x0001dc70) cell_vitu2_function_top_pane_cp01

0x8291,	// (0x0001dc8c) cell_vitu2_function_top_wide_pane_ParamLimits

0x8291,	// (0x0001dc8c) cell_vitu2_function_top_wide_pane

0x7484,	// (0x0001ce7f) bg_button_pane_cp012

0x82af,	// (0x0001dcaa) cell_vitu2_function_top_pane_g1

0x82c3,	// (0x0001dcbe) bg_button_pane_cp013_ParamLimits

0x82c3,	// (0x0001dcbe) bg_button_pane_cp013

0xc424,	// (0x00021e1f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc424,	// (0x00021e1f) cell_vitu2_function_top_wide_pane_g1

0x7020,	// (0x0001ca1b) bg_popup_sub_pane_cp20

0x82df,	// (0x0001dcda) list_vitu2_match_list_pane

0x41f7,	// (0x00019bf2) bg_popup_sub_pane_cp20_g1

0x41ff,	// (0x00019bfa) bg_popup_sub_pane_cp20_g2

0x138a,	// (0x00016d85) bg_popup_sub_pane_cp20_g3

0x4207,	// (0x00019c02) bg_popup_sub_pane_cp20_g4

0x136a,	// (0x00016d65) bg_popup_sub_pane_cp20_g5

0x448b,	// (0x00019e86) bg_popup_sub_pane_cp20_g6

0x4217,	// (0x00019c12) bg_popup_sub_pane_cp20_g7

0x421f,	// (0x00019c1a) bg_popup_sub_pane_cp20_g8

0x4227,	// (0x00019c22) bg_popup_sub_pane_cp20_g9

0x0008,

0xf98c,	// (0x00025387) bg_popup_sub_pane_cp20_g

0x82f7,	// (0x0001dcf2) list_vitu2_match_list_item_pane_ParamLimits

0x82f7,	// (0x0001dcf2) list_vitu2_match_list_item_pane

0x8309,	// (0x0001dd04) list_vitu2_match_list_item_pane_t1

0x702e,	// (0x0001ca29) bg_popup_sub_pane_cp21

0x1139,	// (0x00016b34) grid_vitu2_dropdown_list_pane

0x8317,	// (0x0001dd12) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8317,	// (0x0001dd12) cell_vitu2_dropdown_list_char_pane

0x833a,	// (0x0001dd35) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x833a,	// (0x0001dd35) cell_vitu2_dropdown_list_ctrl_pane

0x44c5,	// (0x00019ec0) cell_vitu2_dropdown_list_char_pane_g1

0x44bc,	// (0x00019eb7) cell_vitu2_dropdown_list_char_pane_g2

0x44b3,	// (0x00019eae) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99f,	// (0x0002539a) cell_vitu2_dropdown_list_char_pane_g

0x8364,	// (0x0001dd5f) cell_vitu2_dropdown_list_char_pane_t1

0xc43c,	// (0x00021e37) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc43c,	// (0x00021e37) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc449,	// (0x00021e44) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc449,	// (0x00021e44) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc456,	// (0x00021e51) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc456,	// (0x00021e51) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8372,	// (0x0001dd6d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8372,	// (0x0001dd6d) cell_vitu2_dropdown_list_ctrl_pane_g4

0x5595,	// (0x0001af90) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x5595,	// (0x0001af90) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a6,	// (0x000253a1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a6,	// (0x000253a1) cell_vitu2_dropdown_list_ctrl_pane_g

0xc463,	// (0x00021e5e) aid_size_cell_gallery2_ParamLimits

0xc463,	// (0x00021e5e) aid_size_cell_gallery2

0xc47d,	// (0x00021e78) grid_gallery2_pane_ParamLimits

0xc47d,	// (0x00021e78) grid_gallery2_pane

0xc494,	// (0x00021e8f) scroll_pane_cp029_ParamLimits

0xc494,	// (0x00021e8f) scroll_pane_cp029

0xc4a4,	// (0x00021e9f) cell_gallery2_pane_ParamLimits

0xc4a4,	// (0x00021e9f) cell_gallery2_pane

0x44ce,	// (0x00019ec9) cell_gallery2_pane_g2

0xc4f9,	// (0x00021ef4) cell_gallery2_pane_g3

0x44d6,	// (0x00019ed1) cell_gallery2_pane_g4

0x44de,	// (0x00019ed9) cell_gallery2_pane_g5

0x1139,	// (0x00016b34) grid_highlight_pane_cp10

0x805e,	// (0x0001da59) popup_vitu2_match_list_window_ParamLimits

0x7f90,	// (0x0001d98b) popup_vitu2_query_window_ParamLimits

0x7f90,	// (0x0001d98b) popup_vitu2_query_window

0x702e,	// (0x0001ca29) bg_vitu2_candi_button_pane

0x44c5,	// (0x00019ec0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x44bc,	// (0x00019eb7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x44b3,	// (0x00019eae) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xc501,	// (0x00021efc) bg_button_pane_cp015

0xc513,	// (0x00021f0e) bg_button_pane_cp016

0xc526,	// (0x00021f21) bg_button_pane_cp017

0x1d0c,	// (0x00017707) bg_popup_sub_pane_cp22

0x44e6,	// (0x00019ee1) popup_vitu2_query_window_g1

0xc56b,	// (0x00021f66) popup_vitu2_query_window_g2

0x0002,

0xf9b1,	// (0x000253ac) popup_vitu2_query_window_g

0xc58a,	// (0x00021f85) popup_vitu2_query_window_t1_ParamLimits

0xc58a,	// (0x00021f85) popup_vitu2_query_window_t1

0xc5bf,	// (0x00021fba) popup_vitu2_query_window_t2_ParamLimits

0xc5bf,	// (0x00021fba) popup_vitu2_query_window_t2

0xc5d1,	// (0x00021fcc) popup_vitu2_query_window_t3_ParamLimits

0xc5d1,	// (0x00021fcc) popup_vitu2_query_window_t3

0xc5f9,	// (0x00021ff4) popup_vitu2_query_window_t4_ParamLimits

0xc5f9,	// (0x00021ff4) popup_vitu2_query_window_t4

0xc61a,	// (0x00022015) popup_vitu2_query_window_t5_ParamLimits

0xc61a,	// (0x00022015) popup_vitu2_query_window_t5

0x0006,

0xf9b8,	// (0x000253b3) popup_vitu2_query_window_t_ParamLimits

0xf9b8,	// (0x000253b3) popup_vitu2_query_window_t

0x42f9,	// (0x00019cf4) main_cset_text_pane

0xc095,	// (0x00021a90) aid_area_touch_slider_ParamLimits

0xc0b1,	// (0x00021aac) cset_slider_pane_ParamLimits

0xc0d4,	// (0x00021acf) main_cset_slider_pane_g1_ParamLimits

0xc0e9,	// (0x00021ae4) main_cset_slider_pane_g2_ParamLimits

0x431a,	// (0x00019d15) main_cset_slider_pane_g3_ParamLimits

0x431a,	// (0x00019d15) main_cset_slider_pane_g3

0xc0fe,	// (0x00021af9) main_cset_slider_pane_g4_ParamLimits

0xc0fe,	// (0x00021af9) main_cset_slider_pane_g4

0xc10d,	// (0x00021b08) main_cset_slider_pane_g5_ParamLimits

0xc10d,	// (0x00021b08) main_cset_slider_pane_g5

0xc11b,	// (0x00021b16) main_cset_slider_pane_g6_ParamLimits

0xc11b,	// (0x00021b16) main_cset_slider_pane_g6

0xf915,	// (0x00025310) main_cset_slider_pane_g_ParamLimits

0x4362,	// (0x00019d5d) main_cset_slider_pane_t1_ParamLimits

0xc1af,	// (0x00021baa) main_cset_slider_pane_t2_ParamLimits

0xc1c9,	// (0x00021bc4) main_cset_slider_pane_t3_ParamLimits

0xc1e3,	// (0x00021bde) main_cset_slider_pane_t4_ParamLimits

0xc201,	// (0x00021bfc) main_cset_slider_pane_t5_ParamLimits

0xc21f,	// (0x00021c1a) main_cset_slider_pane_t6_ParamLimits

0xc236,	// (0x00021c31) main_cset_slider_pane_t7_ParamLimits

0xc264,	// (0x00021c5f) main_cset_slider_pane_t8_ParamLimits

0xc264,	// (0x00021c5f) main_cset_slider_pane_t8

0xc28c,	// (0x00021c87) main_cset_slider_pane_t9_ParamLimits

0xc28c,	// (0x00021c87) main_cset_slider_pane_t9

0xc2b4,	// (0x00021caf) main_cset_slider_pane_t10_ParamLimits

0xc2b4,	// (0x00021caf) main_cset_slider_pane_t10

0xc2dc,	// (0x00021cd7) main_cset_slider_pane_t11_ParamLimits

0xc2dc,	// (0x00021cd7) main_cset_slider_pane_t11

0xc306,	// (0x00021d01) main_cset_slider_pane_t12_ParamLimits

0xc306,	// (0x00021d01) main_cset_slider_pane_t12

0xc325,	// (0x00021d20) main_cset_slider_pane_t13_ParamLimits

0xc325,	// (0x00021d20) main_cset_slider_pane_t13

0xf93a,	// (0x00025335) main_cset_slider_pane_t_ParamLimits

0x070a,	// (0x00016105) bg_popup_sub_pane_cp011

0x44f2,	// (0x00019eed) main_cset_text_pane_g1

0x44fa,	// (0x00019ef5) main_cset_text_pane_t1

0x4508,	// (0x00019f03) main_cset_text_pane_t2

0x4516,	// (0x00019f11) main_cset_text_pane_t3

0x4524,	// (0x00019f1f) main_cset_text_pane_t4

0x4532,	// (0x00019f2d) main_cset_text_pane_t5

0x4540,	// (0x00019f3b) main_cset_text_pane_t6

0x454e,	// (0x00019f49) main_cset_text_pane_t7

0x0006,

0xf9c7,	// (0x000253c2) main_cset_text_pane_t

0x702e,	// (0x0001ca29) main_cam4_burst_pane

0x702e,	// (0x0001ca29) main_cam5_pane

0xbfdd,	// (0x000219d8) bg_button_pane_cp019

0xbfe6,	// (0x000219e1) bg_button_pane_cp020

0x4326,	// (0x00019d21) main_cset_slider_pane_g7_ParamLimits

0x4326,	// (0x00019d21) main_cset_slider_pane_g7

0x4332,	// (0x00019d2d) main_cset_slider_pane_g8_ParamLimits

0x4332,	// (0x00019d2d) main_cset_slider_pane_g8

0xc12f,	// (0x00021b2a) main_cset_slider_pane_g9_ParamLimits

0xc12f,	// (0x00021b2a) main_cset_slider_pane_g9

0xc13b,	// (0x00021b36) main_cset_slider_pane_g10_ParamLimits

0xc13b,	// (0x00021b36) main_cset_slider_pane_g10

0xc147,	// (0x00021b42) main_cset_slider_pane_g11_ParamLimits

0xc147,	// (0x00021b42) main_cset_slider_pane_g11

0xc153,	// (0x00021b4e) main_cset_slider_pane_g12_ParamLimits

0xc153,	// (0x00021b4e) main_cset_slider_pane_g12

0xc15f,	// (0x00021b5a) main_cset_slider_pane_g13_ParamLimits

0xc15f,	// (0x00021b5a) main_cset_slider_pane_g13

0xc16d,	// (0x00021b68) main_cset_slider_pane_g14_ParamLimits

0xc16d,	// (0x00021b68) main_cset_slider_pane_g14

0xc17b,	// (0x00021b76) main_cset_slider_pane_g15_ParamLimits

0xc17b,	// (0x00021b76) main_cset_slider_pane_g15

0x438a,	// (0x00019d85) main_cset_slider_pane_t14_ParamLimits

0x438a,	// (0x00019d85) main_cset_slider_pane_t14

0x43c3,	// (0x00019dbe) main_cset_slider_pane_t15_ParamLimits

0x43c3,	// (0x00019dbe) main_cset_slider_pane_t15

0xc691,	// (0x0002208c) aid_cam4_burst_size_cell_ParamLimits

0xc691,	// (0x0002208c) aid_cam4_burst_size_cell

0xc6ad,	// (0x000220a8) grid_cam4_burst_pane_ParamLimits

0xc6ad,	// (0x000220a8) grid_cam4_burst_pane

0xc6dd,	// (0x000220d8) linegrid_cam4_burst_pane_ParamLimits

0xc6dd,	// (0x000220d8) linegrid_cam4_burst_pane

0xc6fd,	// (0x000220f8) scroll_pane_cp30_ParamLimits

0xc6fd,	// (0x000220f8) scroll_pane_cp30

0xc709,	// (0x00022104) cell_cam4_burst_pane_ParamLimits

0xc709,	// (0x00022104) cell_cam4_burst_pane

0x4568,	// (0x00019f63) linegrid_cam4_burst_pane_g1_ParamLimits

0x4568,	// (0x00019f63) linegrid_cam4_burst_pane_g1

0xc745,	// (0x00022140) linegrid_cam4_burst_pane_g2_ParamLimits

0xc745,	// (0x00022140) linegrid_cam4_burst_pane_g2

0x4575,	// (0x00019f70) linegrid_cam4_burst_pane_g3_ParamLimits

0x4575,	// (0x00019f70) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d6,	// (0x000253d1) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d6,	// (0x000253d1) linegrid_cam4_burst_pane_g

0xc756,	// (0x00022151) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc756,	// (0x00022151) linegrid_cam4_burst_pane_g3_copy1

0x4582,	// (0x00019f7d) linegrid_cam4_burst_pane_g4_ParamLimits

0x4582,	// (0x00019f7d) linegrid_cam4_burst_pane_g4

0xc770,	// (0x0002216b) linegrid_cam4_burst_pane_g5_ParamLimits

0xc770,	// (0x0002216b) linegrid_cam4_burst_pane_g5

0xc781,	// (0x0002217c) linegrid_cam4_burst_pane_g6_ParamLimits

0xc781,	// (0x0002217c) linegrid_cam4_burst_pane_g6

0x458f,	// (0x00019f8a) linegrid_cam4_burst_pane_g7_ParamLimits

0x458f,	// (0x00019f8a) linegrid_cam4_burst_pane_g7

0xc792,	// (0x0002218d) cell_cam4_burst_pane_g1

0x45a8,	// (0x00019fa3) main_cam5_pane_t1_ParamLimits

0x45a8,	// (0x00019fa3) main_cam5_pane_t1

0x45ba,	// (0x00019fb5) main_cam5_pane_t2_ParamLimits

0x45ba,	// (0x00019fb5) main_cam5_pane_t2

0x45cc,	// (0x00019fc7) main_cam5_pane_t3_ParamLimits

0x45cc,	// (0x00019fc7) main_cam5_pane_t3

0x45de,	// (0x00019fd9) main_cam5_pane_t4_ParamLimits

0x45de,	// (0x00019fd9) main_cam5_pane_t4

0x45f6,	// (0x00019ff1) main_cam5_pane_t5_ParamLimits

0x45f6,	// (0x00019ff1) main_cam5_pane_t5

0x460a,	// (0x0001a005) main_cam5_pane_t6_ParamLimits

0x460a,	// (0x0001a005) main_cam5_pane_t6

0x461e,	// (0x0001a019) main_cam5_pane_t7_ParamLimits

0x461e,	// (0x0001a019) main_cam5_pane_t7

0x4630,	// (0x0001a02b) main_cam5_pane_t8_ParamLimits

0x4630,	// (0x0001a02b) main_cam5_pane_t8

0x464c,	// (0x0001a047) main_cam5_pane_t9_ParamLimits

0x464c,	// (0x0001a047) main_cam5_pane_t9

0x465e,	// (0x0001a059) main_cam5_pane_t10_ParamLimits

0x465e,	// (0x0001a059) main_cam5_pane_t10

0x4670,	// (0x0001a06b) main_cam5_pane_t11_ParamLimits

0x4670,	// (0x0001a06b) main_cam5_pane_t11

0x4682,	// (0x0001a07d) main_cam5_pane_t12_ParamLimits

0x4682,	// (0x0001a07d) main_cam5_pane_t12

0x4697,	// (0x0001a092) main_cam5_pane_t13_ParamLimits

0x4697,	// (0x0001a092) main_cam5_pane_t13

0x000c,

0xf9e2,	// (0x000253dd) main_cam5_pane_t_ParamLimits

0xf9e2,	// (0x000253dd) main_cam5_pane_t

0x6fdf,	// (0x0001c9da) popup_scut_keymap_window_ParamLimits

0x6fdf,	// (0x0001c9da) popup_scut_keymap_window

0xc7a5,	// (0x000221a0) aid_size_cell_brow_shortcut

0x1139,	// (0x00016b34) bg_popup_window_pane_cp010

0xc7b1,	// (0x000221ac) grid_scut_pane

0xc7bd,	// (0x000221b8) cell_scut_pane_ParamLimits

0xc7bd,	// (0x000221b8) cell_scut_pane

0xc7d4,	// (0x000221cf) cell_scut_pane_g1

0x46b4,	// (0x0001a0af) cell_scut_pane_t1

0x46c3,	// (0x0001a0be) cell_scut_pane_t2

0xc7dd,	// (0x000221d8) cell_scut_pane_t3

0x0002,

0xf9fd,	// (0x000253f8) cell_scut_pane_t

0xb36a,	// (0x00020d65) main_mup3_pane_g8_ParamLimits

0xb36a,	// (0x00020d65) main_mup3_pane_g8

0x7f90,	// (0x0001d98b) area_vitu2_query_pane_ParamLimits

0x7f90,	// (0x0001d98b) area_vitu2_query_pane

0xc539,	// (0x00021f34) input_focus_pane_cp08

0x46d2,	// (0x0001a0cd) area_vitu2_query_pane_g1

0xc7eb,	// (0x000221e6) area_vitu2_query_pane_g2

0x0001,

0xfa04,	// (0x000253ff) area_vitu2_query_pane_g

0xc7fc,	// (0x000221f7) area_vitu2_query_pane_t1_ParamLimits

0xc7fc,	// (0x000221f7) area_vitu2_query_pane_t1

0xc810,	// (0x0002220b) area_vitu2_query_pane_t2_ParamLimits

0xc810,	// (0x0002220b) area_vitu2_query_pane_t2

0xc824,	// (0x0002221f) area_vitu2_query_pane_t3_ParamLimits

0xc824,	// (0x0002221f) area_vitu2_query_pane_t3

0x46de,	// (0x0001a0d9) area_vitu2_query_pane_t4_ParamLimits

0x46de,	// (0x0001a0d9) area_vitu2_query_pane_t4

0x4706,	// (0x0001a101) area_vitu2_query_pane_t5_ParamLimits

0x4706,	// (0x0001a101) area_vitu2_query_pane_t5

0x472e,	// (0x0001a129) area_vitu2_query_pane_t6_ParamLimits

0x472e,	// (0x0001a129) area_vitu2_query_pane_t6

0x0006,

0xfa09,	// (0x00025404) area_vitu2_query_pane_t_ParamLimits

0xfa09,	// (0x00025404) area_vitu2_query_pane_t

0xc84c,	// (0x00022247) bg_button_pane_cp018

0xc85a,	// (0x00022255) bg_button_pane_cp021

0xc866,	// (0x00022261) bg_button_pane_cp022

0xc877,	// (0x00022272) input_focus_pane_cp09

0x1a54,	// (0x0001744f) aid_size_touch_mv_arrow_left

0x1a7f,	// (0x0001747a) aid_size_touch_mv_arrow_right

0xc193,	// (0x00021b8e) main_cset_slider_pane_g16_ParamLimits

0xc193,	// (0x00021b8e) main_cset_slider_pane_g16

0xc1a1,	// (0x00021b9c) main_cset_slider_pane_g17_ParamLimits

0xc1a1,	// (0x00021b9c) main_cset_slider_pane_g17

0xc792,	// (0x0002218d) cell_cam4_burst_pane_g1_ParamLimits

0x070a,	// (0x00016105) compa_mode_pane

0xc3a5,	// (0x00021da0) popup_vtel_slider_window_g3_ParamLimits

0xc3a5,	// (0x00021da0) popup_vtel_slider_window_g3

0xc3b9,	// (0x00021db4) popup_vtel_slider_window_g4_ParamLimits

0xc3b9,	// (0x00021db4) popup_vtel_slider_window_g4

0xc3cd,	// (0x00021dc8) popup_vtel_slider_window_t1_ParamLimits

0xc3cd,	// (0x00021dc8) popup_vtel_slider_window_t1

0x702e,	// (0x0001ca29) main_cl_pane

0x752a,	// (0x0001cf25) popup_imed_adjust2_window_ParamLimits

0x1d0c,	// (0x00017707) bg_tb_trans_pane_cp05_ParamLimits

0x3a0e,	// (0x00019409) popup_imed_adjust2_window_g1_ParamLimits

0x3a1d,	// (0x00019418) popup_imed_adjust2_window_g2_ParamLimits

0x3a1d,	// (0x00019418) popup_imed_adjust2_window_g2

0x3a29,	// (0x00019424) popup_imed_adjust2_window_g3_ParamLimits

0x3a29,	// (0x00019424) popup_imed_adjust2_window_g3

0x0002,

0xf77f,	// (0x0002517a) popup_imed_adjust2_window_g_ParamLimits

0xf77f,	// (0x0002517a) popup_imed_adjust2_window_g

0x3a35,	// (0x00019430) popup_imed_adjust2_window_t1_ParamLimits

0x3a4d,	// (0x00019448) slider_imed_adjust_pane_ParamLimits

0x3a61,	// (0x0001945c) slider_imed_adjust_pane_g1_ParamLimits

0x3a71,	// (0x0001946c) slider_imed_adjust_pane_g2_ParamLimits

0x3a81,	// (0x0001947c) slider_imed_adjust_pane_g3_ParamLimits

0x3a92,	// (0x0001948d) slider_imed_adjust_pane_g4_ParamLimits

0xf786,	// (0x00025181) slider_imed_adjust_pane_g_ParamLimits

0x7d35,	// (0x0001d730) aid_touch_area_cam4_ParamLimits

0x7d35,	// (0x0001d730) aid_touch_area_cam4

0x7d45,	// (0x0001d740) battery_pane_cp01

0x7dcc,	// (0x0001d7c7) main_camera4_pane_g6_ParamLimits

0x7dcc,	// (0x0001d7c7) main_camera4_pane_g6

0x7dea,	// (0x0001d7e5) main_camera4_pane_t2_ParamLimits

0x7dea,	// (0x0001d7e5) main_camera4_pane_t2

0x0001,

0xf888,	// (0x00025283) main_camera4_pane_t_ParamLimits

0xf888,	// (0x00025283) main_camera4_pane_t

0x7e47,	// (0x0001d842) aid_touch_area_vid4_ParamLimits

0x7e47,	// (0x0001d842) aid_touch_area_vid4

0x7e87,	// (0x0001d882) main_video4_pane_g5_ParamLimits

0x7e87,	// (0x0001d882) main_video4_pane_g5

0x7eab,	// (0x0001d8a6) vid4_progress_pane_ParamLimits

0x7eab,	// (0x0001d8a6) vid4_progress_pane

0x4356,	// (0x00019d51) main_cset_slider_pane_g18_ParamLimits

0x4356,	// (0x00019d51) main_cset_slider_pane_g18

0x459c,	// (0x00019f97) cell_cam4_burst_pane_g2_ParamLimits

0x459c,	// (0x00019f97) cell_cam4_burst_pane_g2

0x0001,

0xf9dd,	// (0x000253d8) cell_cam4_burst_pane_g_ParamLimits

0xf9dd,	// (0x000253d8) cell_cam4_burst_pane_g

0xc888,	// (0x00022283) bg_cl_pane_ParamLimits

0xc888,	// (0x00022283) bg_cl_pane

0xc894,	// (0x0002228f) cl_header_pane_ParamLimits

0xc894,	// (0x0002228f) cl_header_pane

0xc8a0,	// (0x0002229b) cl_listscroll_pane_ParamLimits

0xc8a0,	// (0x0002229b) cl_listscroll_pane

0x477a,	// (0x0001a175) bg_cl_pane_g1

0x4782,	// (0x0001a17d) bg_cl_pane_g2

0x478a,	// (0x0001a185) bg_cl_pane_g3

0x4792,	// (0x0001a18d) bg_cl_pane_g4

0x479a,	// (0x0001a195) bg_cl_pane_g5

0x47a2,	// (0x0001a19d) bg_cl_pane_g6

0x47aa,	// (0x0001a1a5) bg_cl_pane_g7

0x47b2,	// (0x0001a1ad) bg_cl_pane_g8

0x47ba,	// (0x0001a1b5) bg_cl_pane_g9

0x0008,

0xfa18,	// (0x00025413) bg_cl_pane_g

0xc8ac,	// (0x000222a7) aid_height_cl_leading_ParamLimits

0xc8ac,	// (0x000222a7) aid_height_cl_leading

0xc8b8,	// (0x000222b3) aid_height_cl_text_ParamLimits

0xc8b8,	// (0x000222b3) aid_height_cl_text

0x0e62,	// (0x0001685d) bg_cl_header_pane_ParamLimits

0x0e62,	// (0x0001685d) bg_cl_header_pane

0xc8d0,	// (0x000222cb) cl_header_pane_g1_ParamLimits

0xc8d0,	// (0x000222cb) cl_header_pane_g1

0xc8dd,	// (0x000222d8) cl_header_pane_t1_ParamLimits

0xc8dd,	// (0x000222d8) cl_header_pane_t1

0x47c2,	// (0x0001a1bd) cl_list_pane

0x4311,	// (0x00019d0c) hc_scroll_pane_cp01

0x136a,	// (0x00016d65) bg_cl_header_pane_g1

0x41f7,	// (0x00019bf2) bg_cl_header_pane_g2

0x138a,	// (0x00016d85) bg_cl_header_pane_g3

0x4207,	// (0x00019c02) bg_cl_header_pane_g4

0x41ff,	// (0x00019bfa) bg_cl_header_pane_g5

0x448b,	// (0x00019e86) bg_cl_header_pane_g6

0x421f,	// (0x00019c1a) bg_cl_header_pane_g7

0x4227,	// (0x00019c22) bg_cl_header_pane_g8

0x4217,	// (0x00019c12) bg_cl_header_pane_g9

0x0008,

0xfa2b,	// (0x00025426) bg_cl_header_pane_g

0xc8ef,	// (0x000222ea) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc8ef,	// (0x000222ea) hc_cl_list_double_graphic_heading_pane

0xc903,	// (0x000222fe) hc_cl_list_single_graphic_pane_ParamLimits

0xc903,	// (0x000222fe) hc_cl_list_single_graphic_pane

0xc91d,	// (0x00022318) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc91d,	// (0x00022318) hc_cl_list_single_graphic_pane_g1

0xc929,	// (0x00022324) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc929,	// (0x00022324) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa3e,	// (0x00025439) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa3e,	// (0x00025439) hc_cl_list_single_graphic_pane_g

0xc93d,	// (0x00022338) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc93d,	// (0x00022338) hc_cl_list_single_graphic_pane_t1

0xc91d,	// (0x00022318) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc91d,	// (0x00022318) hc_cl_list_double_graphic_heading_pane_g1

0xc952,	// (0x0002234d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc952,	// (0x0002234d) hc_cl_list_double_graphic_heading_pane_g2

0xc966,	// (0x00022361) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc966,	// (0x00022361) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa43,	// (0x0002543e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa43,	// (0x0002543e) hc_cl_list_double_graphic_heading_pane_g

0xc97a,	// (0x00022375) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc97a,	// (0x00022375) hc_cl_list_double_graphic_heading_pane_t1

0xc98f,	// (0x0002238a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc98f,	// (0x0002238a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa4a,	// (0x00025445) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa4a,	// (0x00025445) hc_cl_list_double_graphic_heading_pane_t

0x8396,	// (0x0001dd91) vid4_progress_pane_g1

0x83a6,	// (0x0001dda1) vid4_progress_pane_g2

0x83b6,	// (0x0001ddb1) vid4_progress_pane_g3

0x83c8,	// (0x0001ddc3) vid4_progress_pane_g4

0x0004,

0xfa4f,	// (0x0002544a) vid4_progress_pane_g

0x83e0,	// (0x0001dddb) vid4_progress_pane_t1

0x83f6,	// (0x0001ddf1) vid4_progress_pane_t2

0x0002,

0xfa5a,	// (0x00025455) vid4_progress_pane_t

0x8421,	// (0x0001de1c) wait_bar_pane_cp07

0x32c2,	// (0x00018cbd) blid_firmament_pane_ParamLimits

0x3305,	// (0x00018d00) popup_blid_sat_info2_window_g1

0x3329,	// (0x00018d24) popup_blid_sat_info2_window_t3

0x3337,	// (0x00018d32) popup_blid_sat_info2_window_t4

0x3345,	// (0x00018d40) popup_blid_sat_info2_window_t5

0x3353,	// (0x00018d4e) popup_blid_sat_info2_window_t6

0x3363,	// (0x00018d5e) popup_blid_sat_info2_window_t7

0x3371,	// (0x00018d6c) popup_blid_sat_info2_window_t8

0x337f,	// (0x00018d7a) popup_blid_sat_info2_window_t9

0x338d,	// (0x00018d88) popup_blid_sat_info2_window_t10

0x344e,	// (0x00018e49) aid_firma_cardinal_ParamLimits

0x3462,	// (0x00018e5d) blid_firmament_pane_t1_ParamLimits

0x3479,	// (0x00018e74) blid_firmament_pane_t2_ParamLimits

0x3490,	// (0x00018e8b) blid_firmament_pane_t3_ParamLimits

0x34a7,	// (0x00018ea2) blid_firmament_pane_t4_ParamLimits

0xf678,	// (0x00025073) blid_firmament_pane_t_ParamLimits

0x34be,	// (0x00018eb9) blid_sat_info_pane_ParamLimits

0x7484,	// (0x0001ce7f) main_cam_set_pane_ParamLimits

0xb980,	// (0x0002137b) aid_size_cell_colour_35_ParamLimits

0xb99a,	// (0x00021395) aid_size_cell_colour_112_ParamLimits

0xb9b1,	// (0x000213ac) aid_size_cell_effect_ParamLimits

0x0779,	// (0x00016174) bg_tb_trans_pane_cp02_ParamLimits

0x16a7,	// (0x000170a2) heading_imed_pane_ParamLimits

0xb9cb,	// (0x000213c6) listscroll_imed_pane_ParamLimits

0x26c7,	// (0x000180c2) popup_call2_audio_first_window_g5_ParamLimits

0x26c7,	// (0x000180c2) popup_call2_audio_first_window_g5

0x7af1,	// (0x0001d4ec) aid_size_touch_image3_arrow_left_ParamLimits

0x7af1,	// (0x0001d4ec) aid_size_touch_image3_arrow_left

0x7b07,	// (0x0001d502) aid_size_touch_image3_arrow_right_ParamLimits

0x7b07,	// (0x0001d502) aid_size_touch_image3_arrow_right

0x840b,	// (0x0001de06) vid4_progress_pane_t3

0xbb4d,	// (0x00021548) main_hwr_training_symbol_option_pane_ParamLimits

0xbb4d,	// (0x00021548) main_hwr_training_symbol_option_pane

0x3c6c,	// (0x00019667) popup_hwr_training_preview_window_ParamLimits

0x3c6c,	// (0x00019667) popup_hwr_training_preview_window

0x77af,	// (0x0001d1aa) hwr_training_navi_pane_g5_ParamLimits

0x77af,	// (0x0001d1aa) hwr_training_navi_pane_g5

0x41e5,	// (0x00019be0) popup_char_count_window

0x7020,	// (0x0001ca1b) bg_popup_sub_pane_cp20_ParamLimits

0x82df,	// (0x0001dcda) list_vitu2_match_list_pane_ParamLimits

0x82eb,	// (0x0001dce6) vitu2_page_scroll_pane_ParamLimits

0x82eb,	// (0x0001dce6) vitu2_page_scroll_pane

0x4858,	// (0x0001a253) list_single_hwr_training_symbol_option_pane_ParamLimits

0x4858,	// (0x0001a253) list_single_hwr_training_symbol_option_pane

0x486b,	// (0x0001a266) list_single_hwr_training_symbol_option_pane_g1

0x4873,	// (0x0001a26e) list_single_hwr_training_symbol_option_pane_t1

0x4881,	// (0x0001a27c) bg_button_pane_cp023

0x488a,	// (0x0001a285) bg_button_pane_cp024

0x48bd,	// (0x0001a2b8) vitu2_page_scroll_pane_g1

0x48c5,	// (0x0001a2c0) vitu2_page_scroll_pane_g2

0x0001,

0xfa61,	// (0x0002545c) vitu2_page_scroll_pane_g

0x48cd,	// (0x0001a2c8) vitu2_page_scroll_pane_t1

0x0f9f,	// (0x0001699a) popup_char_count_window_g1

0x48dc,	// (0x0001a2d7) popup_char_count_window_g2

0x3b1a,	// (0x00019515) popup_char_count_window_g3

0x0002,

0xfa66,	// (0x00025461) popup_char_count_window_g

0x48e5,	// (0x0001a2e0) popup_char_count_window_t1

0x702e,	// (0x0001ca29) main_vded2_pane

0x39fa,	// (0x000193f5) aid_size_cell_imed_line

0x3a04,	// (0x000193ff) grid_imed_line_width_pane

0x7f17,	// (0x0001d912) vid4_indicators_pane_g4

0x48f3,	// (0x0001a2ee) cell_imed_line_width_pane_ParamLimits

0x48f3,	// (0x0001a2ee) cell_imed_line_width_pane

0x4907,	// (0x0001a302) cell_imed_line_width_pane_g1

0x4910,	// (0x0001a30b) cell_imed_line_width_pane_g2

0x0001,

0xfa6d,	// (0x00025468) cell_imed_line_width_pane_g

0xc9b8,	// (0x000223b3) main_vded2_pane_g1_ParamLimits

0xc9b8,	// (0x000223b3) main_vded2_pane_g1

0xc9c5,	// (0x000223c0) main_vded2_pane_g2_ParamLimits

0xc9c5,	// (0x000223c0) main_vded2_pane_g2

0x0001,

0xfa72,	// (0x0002546d) main_vded2_pane_g_ParamLimits

0xfa72,	// (0x0002546d) main_vded2_pane_g

0xc9d3,	// (0x000223ce) vded2_slider_pane_ParamLimits

0xc9d3,	// (0x000223ce) vded2_slider_pane

0xc9e0,	// (0x000223db) aid_size_touch_vded2_end

0xc9ea,	// (0x000223e5) aid_size_touch_vded2_playhead

0x4918,	// (0x0001a313) aid_size_touch_vded2_start

0x4920,	// (0x0001a31b) vded2_slider_bg_pane

0x4929,	// (0x0001a324) vded2_slider_pane_g1

0x4932,	// (0x0001a32d) vded2_slider_pane_g2

0xc9f2,	// (0x000223ed) vded2_slider_pane_g3

0x0002,

0xfa77,	// (0x00025472) vded2_slider_pane_g

0x493a,	// (0x0001a335) vded2_slider_bg_pane_g1

0x4943,	// (0x0001a33e) vded2_slider_bg_pane_g2

0x494c,	// (0x0001a347) vded2_slider_bg_pane_g3

0x0002,

0xfa7e,	// (0x00025479) vded2_slider_bg_pane_g

0xa667,	// (0x00020062) aid_postcard_touch_down_pane_ParamLimits

0xa667,	// (0x00020062) aid_postcard_touch_down_pane

0xa677,	// (0x00020072) aid_postcard_touch_up_pane_ParamLimits

0xa677,	// (0x00020072) aid_postcard_touch_up_pane

0x702e,	// (0x0001ca29) main_blid2_pane

0x74b9,	// (0x0001ceb4) popup_blid2_search_window

0x070a,	// (0x00016105) blid2_gps_pane

0x070a,	// (0x00016105) blid2_navig_pane

0x070a,	// (0x00016105) blid2_search_pane

0x070a,	// (0x00016105) blid2_tripm_pane

0xc9fb,	// (0x000223f6) blid2_search_pane_g1_ParamLimits

0xc9fb,	// (0x000223f6) blid2_search_pane_g1

0xca0b,	// (0x00022406) blid2_search_pane_t1_ParamLimits

0xca0b,	// (0x00022406) blid2_search_pane_t1

0xca1d,	// (0x00022418) aid_size_cell_blid2_gps_ParamLimits

0xca1d,	// (0x00022418) aid_size_cell_blid2_gps

0xca2d,	// (0x00022428) blid2_gps_pane_g1_ParamLimits

0xca2d,	// (0x00022428) blid2_gps_pane_g1

0xca39,	// (0x00022434) grid_blid2_satellite_pane_ParamLimits

0xca39,	// (0x00022434) grid_blid2_satellite_pane

0xca49,	// (0x00022444) blid2_navig_pane_g1_ParamLimits

0xca49,	// (0x00022444) blid2_navig_pane_g1

0xca55,	// (0x00022450) blid2_navig_pane_t1_ParamLimits

0xca55,	// (0x00022450) blid2_navig_pane_t1

0xca67,	// (0x00022462) blid2_navig_pane_t2_ParamLimits

0xca67,	// (0x00022462) blid2_navig_pane_t2

0x0001,

0xfa85,	// (0x00025480) blid2_navig_pane_t_ParamLimits

0xfa85,	// (0x00025480) blid2_navig_pane_t

0xca79,	// (0x00022474) blid2_navig_ring_pane_ParamLimits

0xca79,	// (0x00022474) blid2_navig_ring_pane

0xca89,	// (0x00022484) blid2_speed_pane_ParamLimits

0xca89,	// (0x00022484) blid2_speed_pane

0xca95,	// (0x00022490) blid2_tripm_pane_g1_ParamLimits

0xca95,	// (0x00022490) blid2_tripm_pane_g1

0xcaa5,	// (0x000224a0) blid2_tripm_pane_g2_ParamLimits

0xcaa5,	// (0x000224a0) blid2_tripm_pane_g2

0xcab1,	// (0x000224ac) blid2_tripm_pane_g3_ParamLimits

0xcab1,	// (0x000224ac) blid2_tripm_pane_g3

0xcabd,	// (0x000224b8) blid2_tripm_pane_g4_ParamLimits

0xcabd,	// (0x000224b8) blid2_tripm_pane_g4

0xcac9,	// (0x000224c4) blid2_tripm_pane_g5_ParamLimits

0xcac9,	// (0x000224c4) blid2_tripm_pane_g5

0x0005,

0xfa8a,	// (0x00025485) blid2_tripm_pane_g_ParamLimits

0xfa8a,	// (0x00025485) blid2_tripm_pane_g

0xcae5,	// (0x000224e0) blid2_tripm_pane_t1_ParamLimits

0xcae5,	// (0x000224e0) blid2_tripm_pane_t1

0xcaf9,	// (0x000224f4) blid2_tripm_pane_t2_ParamLimits

0xcaf9,	// (0x000224f4) blid2_tripm_pane_t2

0xcb0b,	// (0x00022506) blid2_tripm_pane_t3_ParamLimits

0xcb0b,	// (0x00022506) blid2_tripm_pane_t3

0x0003,

0xfa97,	// (0x00025492) blid2_tripm_pane_t_ParamLimits

0xfa97,	// (0x00025492) blid2_tripm_pane_t

0xcb3d,	// (0x00022538) cell_blid2_satellite_pane_ParamLimits

0xcb3d,	// (0x00022538) cell_blid2_satellite_pane

0xcb57,	// (0x00022552) cell_blid2_satellite_pane_g1

0x4955,	// (0x0001a350) cell_blid2_satellite_pane_t1

0x1179,	// (0x00016b74) blid2_speed_pane_g1

0x4963,	// (0x0001a35e) blid2_speed_pane_t1

0x4971,	// (0x0001a36c) blid2_speed_pane_t2

0x0001,

0xfaa0,	// (0x0002549b) blid2_speed_pane_t

0x1179,	// (0x00016b74) blid2_navig_ring_pane_g1

0xcb60,	// (0x0002255b) blid2_navig_ring_pane_g2

0xcb68,	// (0x00022563) blid2_navig_ring_pane_g3

0xcb70,	// (0x0002256b) blid2_navig_ring_pane_g4

0xcb78,	// (0x00022573) blid2_navig_ring_pane_g5

0x0004,

0xfaa5,	// (0x000254a0) blid2_navig_ring_pane_g

0x070a,	// (0x00016105) bg_popup_window_pane_cp011

0x497f,	// (0x0001a37a) popup_blid2_search_window_g1

0x4987,	// (0x0001a382) popup_blid2_search_window_t1

0x4995,	// (0x0001a390) popup_blid2_search_window_t2

0x0001,

0xfab0,	// (0x000254ab) popup_blid2_search_window_t

0x1279,	// (0x00016c74) main_browser_pane_g1

0x0f04,	// (0x000168ff) main_browser_pane_ParamLimits

0x7484,	// (0x0001ce7f) bg_button_pane_cp011_ParamLimits

0x8204,	// (0x0001dbff) cell_vitu2_function_pane_g1_ParamLimits

0x1d0c,	// (0x00017707) bg_popup_sub_pane_cp22_ParamLimits

0xc539,	// (0x00021f34) input_focus_pane_cp08_ParamLimits

0xc550,	// (0x00021f4b) popup_vitu2_query_button_pane_ParamLimits

0xc550,	// (0x00021f4b) popup_vitu2_query_button_pane

0xc561,	// (0x00021f5c) popup_vitu2_query_input_button_pane

0x44e6,	// (0x00019ee1) popup_vitu2_query_window_g1_ParamLimits

0xc56b,	// (0x00021f66) popup_vitu2_query_window_g2_ParamLimits

0xf9b1,	// (0x000253ac) popup_vitu2_query_window_g_ParamLimits

0x070a,	// (0x00016105) bg_button_pane_cp026

0xcb80,	// (0x0002257b) popup_vitu2_query_input_button_pane_g1

0x070a,	// (0x00016105) bg_button_pane_cp025

0x49a3,	// (0x0001a39e) popup_vitu2_query_button_pane_t1

0xb08b,	// (0x00020a86) main_mp3_pane_t6

0xb09b,	// (0x00020a96) popup_slider_window_cp01

0x7dfc,	// (0x0001d7f7) cam4_battery_pane

0x7ed6,	// (0x0001d8d1) cam4_battery_pane_cp02

0x838e,	// (0x0001dd89) cam4_battery_pane_cp01

0x838e,	// (0x0001dd89) cam4_battery_pane_cp03

0x49b1,	// (0x0001a3ac) cam4_battery_pane_g1

0x1179,	// (0x00016b74) cam4_battery_pane_g2

0x0001,

0xfab5,	// (0x000254b0) cam4_battery_pane_g

0x339b,	// (0x00018d96) popup_blid_sat_info2_window_t11

0x1a54,	// (0x0001744f) aid_size_touch_mv_arrow_left_ParamLimits

0x1a7f,	// (0x0001747a) aid_size_touch_mv_arrow_right_ParamLimits

0x1add,	// (0x000174d8) navi_pane_g1_ParamLimits

0x1ae9,	// (0x000174e4) navi_pane_g2_ParamLimits

0x1b17,	// (0x00017512) navi_pane_g3_ParamLimits

0xf379,	// (0x00024d74) navi_pane_g_ParamLimits

0xa29f,	// (0x0001fc9a) navi_pane_mv_t1_ParamLimits

0xb9d7,	// (0x000213d2) grid_imed_effect_pane_ParamLimits

0x8e03,	// (0x0001e7fe) aid_placing_vt_slider_lsc

0x11c8,	// (0x00016bc3) aid_placing_vt_slider_prt

0x0779,	// (0x00016174) bg_tb_trans_pane_cp01_ParamLimits

0x3639,	// (0x00019034) popup_image_details_window_g1_ParamLimits

0x364c,	// (0x00019047) popup_image_details_window_g2_ParamLimits

0x3661,	// (0x0001905c) popup_image_details_window_g3_ParamLimits

0x3661,	// (0x0001905c) popup_image_details_window_g3

0xf6b8,	// (0x000250b3) popup_image_details_window_g_ParamLimits

0x3675,	// (0x00019070) popup_image_details_window_t1_ParamLimits

0x3687,	// (0x00019082) popup_image_details_window_t2_ParamLimits

0x36a0,	// (0x0001909b) popup_image_details_window_t3_ParamLimits

0x36b4,	// (0x000190af) popup_image_details_window_t4_ParamLimits

0x36cf,	// (0x000190ca) popup_image_details_window_t5_ParamLimits

0xf6bf,	// (0x000250ba) popup_image_details_window_t_ParamLimits

0xc8c4,	// (0x000222bf) cl_header_name_pane_ParamLimits

0xc8c4,	// (0x000222bf) cl_header_name_pane

0xcb88,	// (0x00022583) cl_header_name_pane_t1_ParamLimits

0xcb88,	// (0x00022583) cl_header_name_pane_t1

0xcb9f,	// (0x0002259a) cl_header_name_pane_t2_ParamLimits

0xcb9f,	// (0x0002259a) cl_header_name_pane_t2

0xcbc9,	// (0x000225c4) cl_header_name_pane_t3_ParamLimits

0xcbc9,	// (0x000225c4) cl_header_name_pane_t3

0x0002,

0xfaba,	// (0x000254b5) cl_header_name_pane_t_ParamLimits

0xfaba,	// (0x000254b5) cl_header_name_pane_t

0x1ba6,	// (0x000175a1) navi_pane_mv_g2_ParamLimits

0x41b0,	// (0x00019bab) field_vitu2_entry_pane_g1_ParamLimits

0x41bc,	// (0x00019bb7) field_vitu2_entry_pane_g2_ParamLimits

0x1cd6,	// (0x000176d1) field_vitu2_entry_pane_g3_ParamLimits

0x1cd6,	// (0x000176d1) field_vitu2_entry_pane_g3

0xf8ba,	// (0x000252b5) field_vitu2_entry_pane_g_ParamLimits

0x80ca,	// (0x0001dac5) cell_vitu2_itu_pane_g1_ParamLimits

0x80e2,	// (0x0001dadd) cell_vitu2_itu_pane_g2_ParamLimits

0x80e2,	// (0x0001dadd) cell_vitu2_itu_pane_g2

0x0001,

0xf8c6,	// (0x000252c1) cell_vitu2_itu_pane_g_ParamLimits

0xf8c6,	// (0x000252c1) cell_vitu2_itu_pane_g

0x7484,	// (0x0001ce7f) bg_vkb2_func_pane_cp05_ParamLimits

0x7484,	// (0x0001ce7f) bg_vkb2_func_pane_cp05

0x7484,	// (0x0001ce7f) bg_vkb2_func_pane_cp03

0x7484,	// (0x0001ce7f) bg_vkb2_func_pane_cp04

0x7484,	// (0x0001ce7f) bg_vkb2_func_pane_cp10_ParamLimits

0x7484,	// (0x0001ce7f) bg_vkb2_func_pane_cp10

0xc866,	// (0x00022261) bg_vkb2_func_pane_cp08

0xc84c,	// (0x00022247) bg_vkb2_func_pane_cp06

0xc85a,	// (0x00022255) bg_vkb2_func_pane_cp07

0x4893,	// (0x0001a28e) bg_vkb2_func_pane_cp11_ParamLimits

0x4893,	// (0x0001a28e) bg_vkb2_func_pane_cp11

0x48a8,	// (0x0001a2a3) bg_vkb2_func_pane_cp12_ParamLimits

0x48a8,	// (0x0001a2a3) bg_vkb2_func_pane_cp12

0x070a,	// (0x00016105) bg_vkb2_func_pane_cp09

0x41f7,	// (0x00019bf2) bg_vkb2_func_pane_g1

0x138a,	// (0x00016d85) bg_vkb2_func_pane_g2

0x41ff,	// (0x00019bfa) bg_vkb2_func_pane_g3

0x4207,	// (0x00019c02) bg_vkb2_func_pane_g4

0x448b,	// (0x00019e86) bg_vkb2_func_pane_g5

0x421f,	// (0x00019c1a) bg_vkb2_func_pane_g6

0x4227,	// (0x00019c22) bg_vkb2_func_pane_g7

0x4217,	// (0x00019c12) bg_vkb2_func_pane_g8

0x136a,	// (0x00016d65) bg_vkb2_func_pane_g9

0x0008,

0xfac1,	// (0x000254bc) bg_vkb2_func_pane_g

0xcad7,	// (0x000224d2) blid2_tripm_pane_g6_ParamLimits

0xcad7,	// (0x000224d2) blid2_tripm_pane_g6

0x3fa3,	// (0x0001999e) mp4_progress_pane_g1

0xcb31,	// (0x0002252c) blid2_tripm_values_pane_ParamLimits

0xcb31,	// (0x0002252c) blid2_tripm_values_pane

0xcbee,	// (0x000225e9) blid2_tripm_values_pane_t1

0xcbfc,	// (0x000225f7) blid2_tripm_values_pane_t2

0xcc0a,	// (0x00022605) blid2_tripm_values_pane_t3

0xcc18,	// (0x00022613) blid2_tripm_values_pane_t4

0xcc26,	// (0x00022621) blid2_tripm_values_pane_t5

0xcc34,	// (0x0002262f) blid2_tripm_values_pane_t6

0xcc42,	// (0x0002263d) blid2_tripm_values_pane_t7

0xcc50,	// (0x0002264b) blid2_tripm_values_pane_t8

0xcc5e,	// (0x00022659) blid2_tripm_values_pane_t9

0x0008,

0xfad4,	// (0x000254cf) blid2_tripm_values_pane_t

0x8e43,	// (0x0001e83e) call_video_pane_t1_ParamLimits

0x8e64,	// (0x0001e85f) call_video_pane_t2_ParamLimits

0xf222,	// (0x00024c1d) call_video_pane_t_ParamLimits

0xa595,	// (0x0001ff90) msg_header_pane_g1_ParamLimits

0x1dc1,	// (0x000177bc) msg_header_pane_g2_ParamLimits

0x1dc1,	// (0x000177bc) msg_header_pane_g2

0x0001,

0xf41c,	// (0x00024e17) msg_header_pane_g_ParamLimits

0xf41c,	// (0x00024e17) msg_header_pane_g

0x0f04,	// (0x000168ff) main_clock2_pane_ParamLimits

0xb80a,	// (0x00021205) grid_clock2_toolbar_pane_ParamLimits

0xb80a,	// (0x00021205) grid_clock2_toolbar_pane

0xb80a,	// (0x00021205) listscroll_clock2_pane_ParamLimits

0xb80a,	// (0x00021205) listscroll_clock2_pane

0xb8ba,	// (0x000212b5) main_clock2_pane_t3_ParamLimits

0xb8ba,	// (0x000212b5) main_clock2_pane_t3

0xb8cc,	// (0x000212c7) main_clock2_pane_t4_ParamLimits

0xb8cc,	// (0x000212c7) main_clock2_pane_t4

0x49bb,	// (0x0001a3b6) cell_clock2_toolbar_pane

0x49c3,	// (0x0001a3be) cell_clock2_toolbar_pane_cp01

0x49c3,	// (0x0001a3be) cell_clock2_toolbar_pane_cp02

0x49cb,	// (0x0001a3c6) cell_clock2_toolbar_pane_cp03

0x49d3,	// (0x0001a3ce) list_clock2_pane

0x19d9,	// (0x000173d4) scroll_pane_cp10

0x49db,	// (0x0001a3d6) list_single_clock2_pane_ParamLimits

0x49db,	// (0x0001a3d6) list_single_clock2_pane

0x1139,	// (0x00016b34) list_highlight_pane_cp08

0x49e8,	// (0x0001a3e3) list_single_clock2_pane_t1

0x49f6,	// (0x0001a3f1) list_single_clock2_pane_t2

0x0001,

0xfae7,	// (0x000254e2) list_single_clock2_pane_t

0x070a,	// (0x00016105) bg_button_pane_cp10

0x4a04,	// (0x0001a3ff) cell_clock2_toolbar_pane_g1

0x741f,	// (0x0001ce1a) aid_main_viewer_pane_g1_ParamLimits

0x741f,	// (0x0001ce1a) aid_main_viewer_pane_g1

0x742b,	// (0x0001ce26) aid_main_viewer_pane_g2_ParamLimits

0x742b,	// (0x0001ce26) aid_main_viewer_pane_g2

0xa623,	// (0x0002001e) aid_main_viewer_pane_g3_ParamLimits

0xa623,	// (0x0002001e) aid_main_viewer_pane_g3

0xa634,	// (0x0002002f) aid_main_viewer_pane_g4_ParamLimits

0xa634,	// (0x0002002f) aid_main_viewer_pane_g4

0x0003,

0xf42d,	// (0x00024e28) aid_main_viewer_pane_g_ParamLimits

0xf42d,	// (0x00024e28) aid_main_viewer_pane_g

0x7477,	// (0x0001ce72) main_calc_pane_ParamLimits

0x7492,	// (0x0001ce8d) main_dialer2_pane_ParamLimits

0x702e,	// (0x0001ca29) main_cam6_pane

0x702e,	// (0x0001ca29) main_vid6_pane

0xb816,	// (0x00021211) listscroll_gen_pane_cp06_ParamLimits

0xb816,	// (0x00021211) listscroll_gen_pane_cp06

0xb8de,	// (0x000212d9) main_clock2_pane_t5_ParamLimits

0xb8de,	// (0x000212d9) main_clock2_pane_t5

0xb92b,	// (0x00021326) aid_call2_pane_cp10_ParamLimits

0xb93d,	// (0x00021338) aid_call_pane_cp10_ParamLimits

0x1a48,	// (0x00017443) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1a48,	// (0x00017443) popup_clock_analogue_window_cp10_g2_ParamLimits

0x76b5,	// (0x0001d0b0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x76b5,	// (0x0001d0b0) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1a48,	// (0x00017443) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf774,	// (0x0002516f) popup_clock_analogue_window_cp10_g_ParamLimits

0xb94f,	// (0x0002134a) popup_clock_analogue_window_cp10_t1_ParamLimits

0xbc26,	// (0x00021621) cell_dialer2_keypad_pane_g2_ParamLimits

0xbc26,	// (0x00021621) cell_dialer2_keypad_pane_g2

0x0001,

0xf859,	// (0x00025254) cell_dialer2_keypad_pane_g_ParamLimits

0xf859,	// (0x00025254) cell_dialer2_keypad_pane_g

0xbc42,	// (0x0002163d) cell_dialer2_keypad_pane_t1

0xc082,	// (0x00021a7d) main_cset_text2_pane_ParamLimits

0xc082,	// (0x00021a7d) main_cset_text2_pane

0x46d2,	// (0x0001a0cd) area_vitu2_query_pane_g1_ParamLimits

0xc7eb,	// (0x000221e6) area_vitu2_query_pane_g2_ParamLimits

0xfa04,	// (0x000253ff) area_vitu2_query_pane_g_ParamLimits

0x4756,	// (0x0001a151) area_vitu2_query_pane_t7_ParamLimits

0x4756,	// (0x0001a151) area_vitu2_query_pane_t7

0xc84c,	// (0x00022247) bg_button_pane_cp018_ParamLimits

0xc85a,	// (0x00022255) bg_button_pane_cp021_ParamLimits

0xc866,	// (0x00022261) bg_button_pane_cp022_ParamLimits

0xc866,	// (0x00022261) bg_vkb2_func_pane_cp08_ParamLimits

0xc84c,	// (0x00022247) bg_vkb2_func_pane_cp06_ParamLimits

0xc85a,	// (0x00022255) bg_vkb2_func_pane_cp07_ParamLimits

0xc877,	// (0x00022272) input_focus_pane_cp09_ParamLimits

0x8432,	// (0x0001de2d) cam6_autofocus_pane_ParamLimits

0x8432,	// (0x0001de2d) cam6_autofocus_pane

0x8454,	// (0x0001de4f) cam6_image_uncrop_pane_ParamLimits

0x8454,	// (0x0001de4f) cam6_image_uncrop_pane

0x8481,	// (0x0001de7c) cam6_indi_pane_ParamLimits

0x8481,	// (0x0001de7c) cam6_indi_pane

0x849b,	// (0x0001de96) cam6_mode_pane_ParamLimits

0x849b,	// (0x0001de96) cam6_mode_pane

0x84af,	// (0x0001deaa) cam6_timer_pane_ParamLimits

0x84af,	// (0x0001deaa) cam6_timer_pane

0x84c0,	// (0x0001debb) cam6_zoom_pane_ParamLimits

0x84c0,	// (0x0001debb) cam6_zoom_pane

0xcc6c,	// (0x00022667) cam6_mode_pane_g1_ParamLimits

0xcc6c,	// (0x00022667) cam6_mode_pane_g1

0xcc78,	// (0x00022673) cam6_mode_pane_g2_ParamLimits

0xcc78,	// (0x00022673) cam6_mode_pane_g2

0xcc84,	// (0x0002267f) cam6_mode_pane_g3_ParamLimits

0xcc84,	// (0x0002267f) cam6_mode_pane_g3

0xcc90,	// (0x0002268b) cam6_mode_pane_g4_ParamLimits

0xcc90,	// (0x0002268b) cam6_mode_pane_g4

0x0003,

0xfaec,	// (0x000254e7) cam6_mode_pane_g_ParamLimits

0xfaec,	// (0x000254e7) cam6_mode_pane_g

0x3b31,	// (0x0001952c) bg_tb_trans_pane_cp08_ParamLimits

0x3b31,	// (0x0001952c) bg_tb_trans_pane_cp08

0x4a1a,	// (0x0001a415) cam6_battery_pane_ParamLimits

0x4a1a,	// (0x0001a415) cam6_battery_pane

0x4a30,	// (0x0001a42b) cam6_indi_pane_g1_ParamLimits

0x4a30,	// (0x0001a42b) cam6_indi_pane_g1

0x4a42,	// (0x0001a43d) cam6_indi_pane_g2_ParamLimits

0x4a42,	// (0x0001a43d) cam6_indi_pane_g2

0x4a54,	// (0x0001a44f) cam6_indi_pane_g3_ParamLimits

0x4a54,	// (0x0001a44f) cam6_indi_pane_g3

0x0002,

0xfaf5,	// (0x000254f0) cam6_indi_pane_g_ParamLimits

0xfaf5,	// (0x000254f0) cam6_indi_pane_g

0x4a66,	// (0x0001a461) cam6_indi_pane_t1_ParamLimits

0x4a66,	// (0x0001a461) cam6_indi_pane_t1

0xbd79,	// (0x00021774) cam6_autofocus_pane_g1

0xbd71,	// (0x0002176c) cam6_autofocus_pane_g2

0xbd89,	// (0x00021784) cam6_autofocus_pane_g3

0xbd81,	// (0x0002177c) cam6_autofocus_pane_g4

0x0003,

0xfafc,	// (0x000254f7) cam6_autofocus_pane_g

0x4a8c,	// (0x0001a487) cam6_timer_pane_g1

0x4a94,	// (0x0001a48f) cam6_timer_pane_t1

0x4aa2,	// (0x0001a49d) cam6_zoom_cont_pane

0x4aaa,	// (0x0001a4a5) cam6_zoom_pane_g1

0x4ab2,	// (0x0001a4ad) cam6_zoom_pane_g2

0xcc9c,	// (0x00022697) cam6_zoom_pane_g3

0x0002,

0xfb05,	// (0x00025500) cam6_zoom_pane_g

0x1179,	// (0x00016b74) cam6_battery_pane_g1

0x1179,	// (0x00016b74) cam6_battery_pane_g2

0x0001,

0xf3dd,	// (0x00024dd8) cam6_battery_pane_g

0x4aba,	// (0x0001a4b5) cam6_zoom_cont_pane_g1

0x4ac3,	// (0x0001a4be) cam6_zoom_cont_pane_g2

0x4acc,	// (0x0001a4c7) cam6_zoom_cont_pane_g3

0x0002,

0xfb0c,	// (0x00025507) cam6_zoom_cont_pane_g

0xccb9,	// (0x000226b4) cam6_mode_pane_cp_ParamLimits

0xccb9,	// (0x000226b4) cam6_mode_pane_cp

0xcccd,	// (0x000226c8) cam6_zoom_pane_cp_ParamLimits

0xcccd,	// (0x000226c8) cam6_zoom_pane_cp

0xcce5,	// (0x000226e0) vid6_image_uncrop_cif_pane_ParamLimits

0xcce5,	// (0x000226e0) vid6_image_uncrop_cif_pane

0xcd11,	// (0x0002270c) vid6_image_uncrop_nhd_pane_ParamLimits

0xcd11,	// (0x0002270c) vid6_image_uncrop_nhd_pane

0xcd2e,	// (0x00022729) vid6_image_uncrop_vga_pane_ParamLimits

0xcd2e,	// (0x00022729) vid6_image_uncrop_vga_pane

0xcd4d,	// (0x00022748) vid6_image_uncrop_wvga_pane_ParamLimits

0xcd4d,	// (0x00022748) vid6_image_uncrop_wvga_pane

0xcd6a,	// (0x00022765) vid6_indi_pane_ParamLimits

0xcd6a,	// (0x00022765) vid6_indi_pane

0x3b31,	// (0x0001952c) bg_tb_trans_pane_cp09_ParamLimits

0x3b31,	// (0x0001952c) bg_tb_trans_pane_cp09

0x4ae4,	// (0x0001a4df) cam6_battery_pane_cp_ParamLimits

0x4ae4,	// (0x0001a4df) cam6_battery_pane_cp

0x4af0,	// (0x0001a4eb) vid6_indi_pane_g1_ParamLimits

0x4af0,	// (0x0001a4eb) vid6_indi_pane_g1

0x4b02,	// (0x0001a4fd) vid6_indi_pane_g2_ParamLimits

0x4b02,	// (0x0001a4fd) vid6_indi_pane_g2

0x4b14,	// (0x0001a50f) vid6_indi_pane_g3_ParamLimits

0x4b14,	// (0x0001a50f) vid6_indi_pane_g3

0x4b29,	// (0x0001a524) vid6_indi_pane_g4_ParamLimits

0x4b29,	// (0x0001a524) vid6_indi_pane_g4

0x4b3e,	// (0x0001a539) vid6_indi_pane_g5_ParamLimits

0x4b3e,	// (0x0001a539) vid6_indi_pane_g5

0x0004,

0xfb13,	// (0x0002550e) vid6_indi_pane_g_ParamLimits

0xfb13,	// (0x0002550e) vid6_indi_pane_g

0x4b58,	// (0x0001a553) vid6_indi_pane_t1_ParamLimits

0x4b58,	// (0x0001a553) vid6_indi_pane_t1

0x4b6e,	// (0x0001a569) vid6_indi_pane_t2_ParamLimits

0x4b6e,	// (0x0001a569) vid6_indi_pane_t2

0x4b96,	// (0x0001a591) vid6_indi_pane_t3_ParamLimits

0x4b96,	// (0x0001a591) vid6_indi_pane_t3

0x4bbe,	// (0x0001a5b9) vid6_indi_pane_t4_ParamLimits

0x4bbe,	// (0x0001a5b9) vid6_indi_pane_t4

0x0003,

0xfb1e,	// (0x00025519) vid6_indi_pane_t_ParamLimits

0xfb1e,	// (0x00025519) vid6_indi_pane_t

0x4be2,	// (0x0001a5dd) wait_bar_pane_cp08

0xcd8d,	// (0x00022788) main_cset_text2_pane_t1_ParamLimits

0xcd8d,	// (0x00022788) main_cset_text2_pane_t1

0xcca4,	// (0x0002269f) listscroll_gen_pane_cp06_t1_ParamLimits

0xcca4,	// (0x0002269f) listscroll_gen_pane_cp06_t1

0x702e,	// (0x0001ca29) main_cam6_set_pane

0x5595,	// (0x0001af90) bg_tb_trans_pane_cp06_ParamLimits

0x7e04,	// (0x0001d7ff) cam4_indicators_pane_g1_ParamLimits

0x7e15,	// (0x0001d810) cam4_indicators_pane_g2_ParamLimits

0xf896,	// (0x00025291) cam4_indicators_pane_g_ParamLimits

0x7e2d,	// (0x0001d828) cam4_indicators_pane_t1_ParamLimits

0x7484,	// (0x0001ce7f) bg_tb_trans_pane_cp07_ParamLimits

0x7ede,	// (0x0001d8d9) vid4_indicators_pane_g1_ParamLimits

0x7ef2,	// (0x0001d8ed) vid4_indicators_pane_g2_ParamLimits

0x7f06,	// (0x0001d901) vid4_indicators_pane_g3_ParamLimits

0x7f17,	// (0x0001d912) vid4_indicators_pane_g4_ParamLimits

0xf8a8,	// (0x000252a3) vid4_indicators_pane_g_ParamLimits

0x7f33,	// (0x0001d92e) vid4_indicators_pane_t1_ParamLimits

0x8396,	// (0x0001dd91) vid4_progress_pane_g1_ParamLimits

0x83a6,	// (0x0001dda1) vid4_progress_pane_g2_ParamLimits

0x83b6,	// (0x0001ddb1) vid4_progress_pane_g3_ParamLimits

0x83c8,	// (0x0001ddc3) vid4_progress_pane_g4_ParamLimits

0xfa4f,	// (0x0002544a) vid4_progress_pane_g_ParamLimits

0x83e0,	// (0x0001dddb) vid4_progress_pane_t1_ParamLimits

0x83f6,	// (0x0001ddf1) vid4_progress_pane_t2_ParamLimits

0x840b,	// (0x0001de06) vid4_progress_pane_t3_ParamLimits

0xfa5a,	// (0x00025455) vid4_progress_pane_t_ParamLimits

0x8421,	// (0x0001de1c) wait_bar_pane_cp07_ParamLimits

0xcdc4,	// (0x000227bf) main_cam6_set_pane_g2_ParamLimits

0xcdc4,	// (0x000227bf) main_cam6_set_pane_g2

0xcdd0,	// (0x000227cb) main_cset6_listscroll_pane_ParamLimits

0xcdd0,	// (0x000227cb) main_cset6_listscroll_pane

0xcdfb,	// (0x000227f6) main_cset6_slider_pane_ParamLimits

0xcdfb,	// (0x000227f6) main_cset6_slider_pane

0xce07,	// (0x00022802) main_cset6_text2_pane_ParamLimits

0xce07,	// (0x00022802) main_cset6_text2_pane

0x4bf1,	// (0x0001a5ec) main_cset6_text_pane

0x4bf9,	// (0x0001a5f4) main_cset_list_pane_copy1_ParamLimits

0x4bf9,	// (0x0001a5f4) main_cset_list_pane_copy1

0x4c09,	// (0x0001a604) scroll_pane_cp028_copy1

0xce1a,	// (0x00022815) cset_list_set_pane_copy1

0xce30,	// (0x0002282b) aid_position_infowindow_above_copy1

0xce38,	// (0x00022833) aid_position_infowindow_below_copy1

0x4c12,	// (0x0001a60d) cset_list_set_pane_g1_copy1

0x4c1a,	// (0x0001a615) cset_list_set_pane_g3_copy1_ParamLimits

0x4c1a,	// (0x0001a615) cset_list_set_pane_g3_copy1

0x4c29,	// (0x0001a624) cset_list_set_pane_t1_copy1_ParamLimits

0x4c29,	// (0x0001a624) cset_list_set_pane_t1_copy1

0x0779,	// (0x00016174) list_highlight_pane_cp021_copy1_ParamLimits

0x0779,	// (0x00016174) list_highlight_pane_cp021_copy1

0x4c3e,	// (0x0001a639) cset6_slider_pane_ParamLimits

0x4c3e,	// (0x0001a639) cset6_slider_pane

0x4c6a,	// (0x0001a665) main_cset6_slider_pane_g1_ParamLimits

0x4c6a,	// (0x0001a665) main_cset6_slider_pane_g1

0xce40,	// (0x0002283b) main_cset6_slider_pane_g2_ParamLimits

0xce40,	// (0x0002283b) main_cset6_slider_pane_g2

0x4c92,	// (0x0001a68d) main_cset6_slider_pane_g3_ParamLimits

0x4c92,	// (0x0001a68d) main_cset6_slider_pane_g3

0xce68,	// (0x00022863) main_cset6_slider_pane_g4_ParamLimits

0xce68,	// (0x00022863) main_cset6_slider_pane_g4

0xce74,	// (0x0002286f) main_cset6_slider_pane_g5_ParamLimits

0xce74,	// (0x0002286f) main_cset6_slider_pane_g5

0x4326,	// (0x00019d21) main_cset6_slider_pane_g7_ParamLimits

0x4326,	// (0x00019d21) main_cset6_slider_pane_g7

0x4332,	// (0x00019d2d) main_cset6_slider_pane_g8_ParamLimits

0x4332,	// (0x00019d2d) main_cset6_slider_pane_g8

0xce82,	// (0x0002287d) main_cset6_slider_pane_g9_ParamLimits

0xce82,	// (0x0002287d) main_cset6_slider_pane_g9

0xce8e,	// (0x00022889) main_cset6_slider_pane_g10_ParamLimits

0xce8e,	// (0x00022889) main_cset6_slider_pane_g10

0xce9a,	// (0x00022895) main_cset6_slider_pane_g11_ParamLimits

0xce9a,	// (0x00022895) main_cset6_slider_pane_g11

0xcea6,	// (0x000228a1) main_cset6_slider_pane_g12_ParamLimits

0xcea6,	// (0x000228a1) main_cset6_slider_pane_g12

0x433e,	// (0x00019d39) main_cset6_slider_pane_g13_ParamLimits

0x433e,	// (0x00019d39) main_cset6_slider_pane_g13

0x434a,	// (0x00019d45) main_cset6_slider_pane_g14_ParamLimits

0x434a,	// (0x00019d45) main_cset6_slider_pane_g14

0xceb2,	// (0x000228ad) main_cset6_slider_pane_g15_ParamLimits

0xceb2,	// (0x000228ad) main_cset6_slider_pane_g15

0xceca,	// (0x000228c5) main_cset6_slider_pane_g16_ParamLimits

0xceca,	// (0x000228c5) main_cset6_slider_pane_g16

0xced8,	// (0x000228d3) main_cset6_slider_pane_g17_ParamLimits

0xced8,	// (0x000228d3) main_cset6_slider_pane_g17

0x0011,

0xfb27,	// (0x00025522) main_cset6_slider_pane_g_ParamLimits

0xfb27,	// (0x00025522) main_cset6_slider_pane_g

0x4caa,	// (0x0001a6a5) main_cset6_slider_pane_t1_ParamLimits

0x4caa,	// (0x0001a6a5) main_cset6_slider_pane_t1

0xcef2,	// (0x000228ed) main_cset6_slider_pane_t2_ParamLimits

0xcef2,	// (0x000228ed) main_cset6_slider_pane_t2

0xcf1d,	// (0x00022918) main_cset6_slider_pane_t3_ParamLimits

0xcf1d,	// (0x00022918) main_cset6_slider_pane_t3

0xcf48,	// (0x00022943) main_cset6_slider_pane_t4_ParamLimits

0xcf48,	// (0x00022943) main_cset6_slider_pane_t4

0xcf73,	// (0x0002296e) main_cset6_slider_pane_t5_ParamLimits

0xcf73,	// (0x0002296e) main_cset6_slider_pane_t5

0x4ceb,	// (0x0001a6e6) main_cset6_slider_pane_t7_ParamLimits

0x4ceb,	// (0x0001a6e6) main_cset6_slider_pane_t7

0xcfa0,	// (0x0002299b) main_cset6_slider_pane_t8_ParamLimits

0xcfa0,	// (0x0002299b) main_cset6_slider_pane_t8

0xcfc4,	// (0x000229bf) main_cset6_slider_pane_t9_ParamLimits

0xcfc4,	// (0x000229bf) main_cset6_slider_pane_t9

0xcfe8,	// (0x000229e3) main_cset6_slider_pane_t10_ParamLimits

0xcfe8,	// (0x000229e3) main_cset6_slider_pane_t10

0xd00c,	// (0x00022a07) main_cset6_slider_pane_t11_ParamLimits

0xd00c,	// (0x00022a07) main_cset6_slider_pane_t11

0x4d21,	// (0x0001a71c) main_cset6_slider_pane_t14_ParamLimits

0x4d21,	// (0x0001a71c) main_cset6_slider_pane_t14

0x4d5a,	// (0x0001a755) main_cset6_slider_pane_t15_ParamLimits

0x4d5a,	// (0x0001a755) main_cset6_slider_pane_t15

0x000b,

0xfb4c,	// (0x00025547) main_cset6_slider_pane_t_ParamLimits

0xfb4c,	// (0x00025547) main_cset6_slider_pane_t

0x3c41,	// (0x0001963c) cset_slider_pane_g1_copy1

0x442c,	// (0x00019e27) cset_slider_pane_g2_copy1

0x4435,	// (0x00019e30) cset_slider_pane_g3_copy1

0x070a,	// (0x00016105) bg_popup_sub_pane_cp011_copy1

0x4d9c,	// (0x0001a797) main_cset_text_pane_g1_copy1

0x44fa,	// (0x00019ef5) main_cset_text_pane_t1_copy1

0x4508,	// (0x00019f03) main_cset_text_pane_t2_copy1

0x4516,	// (0x00019f11) main_cset_text_pane_t3_copy1

0x4524,	// (0x00019f1f) main_cset_text_pane_t4_copy1

0x4532,	// (0x00019f2d) main_cset_text_pane_t5_copy1

0x4da4,	// (0x0001a79f) main_cset_text_pane_t6_copy1

0x4db2,	// (0x0001a7ad) main_cset_text_pane_t7_copy1

0xd04f,	// (0x00022a4a) main_cset_text2_pane_t1_copy1

0x7484,	// (0x0001ce7f) main_ncimui_pane

0x74ef,	// (0x0001ceea) popup_query_ncimui_window_ParamLimits

0x74ef,	// (0x0001ceea) popup_query_ncimui_window

0x37ac,	// (0x000191a7) field_cale_ev2_pane_g4_ParamLimits

0x37ac,	// (0x000191a7) field_cale_ev2_pane_g4

0xbbc6,	// (0x000215c1) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbbc6,	// (0x000215c1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf830,	// (0x0002522b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf830,	// (0x0002522b) cell_video_dialer_keypad_pane_g

0xbbde,	// (0x000215d9) cell_video_dialer_keypad_pane_t1

0x070a,	// (0x00016105) bg_popup_window_pane_cp012

0x2f54,	// (0x0001894f) heading_pane_cp06

0x4dde,	// (0x0001a7d9) ncim_query_content_pane

0x070a,	// (0x00016105) bg_popup_heading_pane_cp01

0x4de6,	// (0x0001a7e1) ncim_heading_pane_t1

0x4df4,	// (0x0001a7ef) ncim_indicator_popup_pane

0x4e06,	// (0x0001a801) ncim_query_button_pane

0x4e1a,	// (0x0001a815) ncim_query_content_pane_t1

0x4e2c,	// (0x0001a827) ncim_query_content_pane_t2

0x0005,

0xfb90,	// (0x0002558b) ncim_query_content_pane_t

0x4e66,	// (0x0001a861) ncim_query_list_pane

0x4e78,	// (0x0001a873) ncim_query_popup_pane

0x4df4,	// (0x0001a7ef) ncim_indicator_popup_pane_ParamLimits

0xd1a3,	// (0x00022b9e) ncim_query_content_pane_g1_ParamLimits

0xd1a3,	// (0x00022b9e) ncim_query_content_pane_g1

0x4e1a,	// (0x0001a815) ncim_query_content_pane_t1_ParamLimits

0x4e2c,	// (0x0001a827) ncim_query_content_pane_t2_ParamLimits

0xd1af,	// (0x00022baa) ncim_query_content_pane_t3_ParamLimits

0xd1af,	// (0x00022baa) ncim_query_content_pane_t3

0xd1cc,	// (0x00022bc7) ncim_query_content_pane_t4_ParamLimits

0xd1cc,	// (0x00022bc7) ncim_query_content_pane_t4

0xd1e9,	// (0x00022be4) ncim_query_content_pane_t5_ParamLimits

0xd1e9,	// (0x00022be4) ncim_query_content_pane_t5

0x4e3e,	// (0x0001a839) ncim_query_content_pane_t6_ParamLimits

0x4e3e,	// (0x0001a839) ncim_query_content_pane_t6

0xfb90,	// (0x0002558b) ncim_query_content_pane_t_ParamLimits

0x4e66,	// (0x0001a861) ncim_query_list_pane_ParamLimits

0x4e78,	// (0x0001a873) ncim_query_popup_pane_ParamLimits

0x4e8c,	// (0x0001a887) wait_bar_pane_cp04

0x070a,	// (0x00016105) input_focus_pane_cp011

0x4e94,	// (0x0001a88f) ncim_query_popup_pane_t1

0x4ea2,	// (0x0001a89d) ncim_list_query_list_pane_ParamLimits

0x4ea2,	// (0x0001a89d) ncim_list_query_list_pane

0x070a,	// (0x00016105) bg_button_pane_cp027

0x4eaf,	// (0x0001a8aa) ncim_query_button_pane_g1

0x070a,	// (0x00016105) list_highlight_pane_cp012

0x4eb9,	// (0x0001a8b4) ncim_list_query_list_pane_g1

0x4ec1,	// (0x0001a8bc) ncim_list_query_list_pane_t1

0x7e21,	// (0x0001d81c) cam4_indicators_pane_g3_ParamLimits

0x7e21,	// (0x0001d81c) cam4_indicators_pane_g3

0x7f23,	// (0x0001d91e) vid4_indicators_pane_g5_ParamLimits

0x7f23,	// (0x0001d91e) vid4_indicators_pane_g5

0x83d4,	// (0x0001ddcf) vid4_progress_pane_g5_ParamLimits

0x83d4,	// (0x0001ddcf) vid4_progress_pane_g5

0xd08f,	// (0x00022a8a) main_ncimui_pane_g1

0xd0f7,	// (0x00022af2) ncimui_group_query_pane_ParamLimits

0xd0f7,	// (0x00022af2) ncimui_group_query_pane

0xd13f,	// (0x00022b3a) ncimui_list_pane_ParamLimits

0xd13f,	// (0x00022b3a) ncimui_list_pane

0xd166,	// (0x00022b61) ncimui_text_pane_ParamLimits

0xd166,	// (0x00022b61) ncimui_text_pane

0xd206,	// (0x00022c01) ncimui_text_pane_t1_ParamLimits

0xd206,	// (0x00022c01) ncimui_text_pane_t1

0x4ecf,	// (0x0001a8ca) ncimui_list_single_graphic_pane_ParamLimits

0x4ecf,	// (0x0001a8ca) ncimui_list_single_graphic_pane

0xd225,	// (0x00022c20) ncimui_query_pane_ParamLimits

0xd225,	// (0x00022c20) ncimui_query_pane

0x070a,	// (0x00016105) list_highlight_pane_cp013

0x4edf,	// (0x0001a8da) ncim_list_query_list_pane_t1_copy1

0x4eed,	// (0x0001a8e8) ncim_list_single_graphic_pane_g1

0xd238,	// (0x00022c33) ncim_query_button_pane_cp01

0xd244,	// (0x00022c3f) ncim_query_entry_pane_ParamLimits

0xd244,	// (0x00022c3f) ncim_query_entry_pane

0xd257,	// (0x00022c52) ncimui_query_pane_g1

0xd263,	// (0x00022c5e) ncimui_query_pane_t1_ParamLimits

0xd263,	// (0x00022c5e) ncimui_query_pane_t1

0x0779,	// (0x00016174) input_focus_pane_cp012

0x4ef5,	// (0x0001a8f0) ncim_query_entry_pane_t1

0x0f04,	// (0x000168ff) main_im_pane_ParamLimits

0x7484,	// (0x0001ce7f) main_mobtv_pane_ParamLimits

0x7484,	// (0x0001ce7f) main_mobtv_pane

0xcee6,	// (0x000228e1) main_cset6_slider_pane_g18_ParamLimits

0xcee6,	// (0x000228e1) main_cset6_slider_pane_g18

0x4c9e,	// (0x0001a699) main_cset6_slider_pane_g19_ParamLimits

0x4c9e,	// (0x0001a699) main_cset6_slider_pane_g19

0x1cd6,	// (0x000176d1) bg_main_mobtv_pane_ParamLimits

0x1cd6,	// (0x000176d1) bg_main_mobtv_pane

0xd27c,	// (0x00022c77) main_mobtv_info_pane

0xd287,	// (0x00022c82) main_mobtv_loading_pane_ParamLimits

0xd287,	// (0x00022c82) main_mobtv_loading_pane

0x4f07,	// (0x0001a902) main_mobtv_pg_channel_list_pane

0x4f11,	// (0x0001a90c) main_mobtv_pg_hdr_pane

0xd294,	// (0x00022c8f) main_mobtv_programe_curr_pane_ParamLimits

0xd294,	// (0x00022c8f) main_mobtv_programe_curr_pane

0xd2a1,	// (0x00022c9c) main_mobtv_programe_next_pane_ParamLimits

0xd2a1,	// (0x00022c9c) main_mobtv_programe_next_pane

0x4f1a,	// (0x0001a915) popup_mobtv_noti_window

0x1179,	// (0x00016b74) main_tv_pg_hdr_pane_g1

0x4f22,	// (0x0001a91d) main_tv_pg_hdr_pane_g2

0x4f2a,	// (0x0001a925) main_tv_pg_hdr_pane_g3

0x4f32,	// (0x0001a92d) main_tv_pg_hdr_pane_g4

0x4f3a,	// (0x0001a935) main_tv_pg_hdr_pane_g5

0x4f44,	// (0x0001a93f) main_tv_pg_hdr_pane_g6

0x4f5a,	// (0x0001a955) main_tv_pg_hdr_pane_g7

0x4f64,	// (0x0001a95f) main_tv_pg_hdr_pane_g8

0x4f6e,	// (0x0001a969) main_tv_pg_hdr_pane_g9

0x4f78,	// (0x0001a973) main_tv_pg_hdr_pane_g10

0x4f82,	// (0x0001a97d) main_tv_pg_hdr_pane_g11

0x000a,

0xfb9d,	// (0x00025598) main_tv_pg_hdr_pane_g

0x4f8c,	// (0x0001a987) main_tv_pg_hdr_pane_t1

0x4f9a,	// (0x0001a995) main_tv_pg_hdr_pane_t2

0x4fa8,	// (0x0001a9a3) main_tv_pg_hdr_pane_t3

0x4fb8,	// (0x0001a9b3) main_tv_pg_hdr_pane_t4

0x4fc8,	// (0x0001a9c3) main_tv_pg_hdr_pane_t5

0x0004,

0xfbb4,	// (0x000255af) main_tv_pg_hdr_pane_t

0x4fd8,	// (0x0001a9d3) single_mobtv_pg_channel_pane_ParamLimits

0x4fd8,	// (0x0001a9d3) single_mobtv_pg_channel_pane

0x4fea,	// (0x0001a9e5) single_mobtv_pg_channel_table_pane

0x1499,	// (0x00016e94) single_mobtv_pg_channel_thumb_pane

0x4ff3,	// (0x0001a9ee) single_tv_pg_channel_pane_g1

0x4ffc,	// (0x0001a9f7) single_tv_pg_channel_pane_g2

0x0001,

0xfbbf,	// (0x000255ba) single_tv_pg_channel_pane_g

0x0e70,	// (0x0001686b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0e70,	// (0x0001686b) bg_single_mobtv_pg_channel_thumb_pane

0x5005,	// (0x0001aa00) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x5005,	// (0x0001aa00) single_mobtv_pg_channel_thumb_pane_g1

0x5013,	// (0x0001aa0e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x5013,	// (0x0001aa0e) single_mobtv_pg_channel_thumb_pane_g2

0x501f,	// (0x0001aa1a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x501f,	// (0x0001aa1a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbc4,	// (0x000255bf) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbc4,	// (0x000255bf) single_mobtv_pg_channel_thumb_pane_g

0x502b,	// (0x0001aa26) single_mobtv_pg_channel_thumb_pane_t1

0x5039,	// (0x0001aa34) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbcb,	// (0x000255c6) single_mobtv_pg_channel_thumb_pane_t

0x1179,	// (0x00016b74) bg_single_mobtv_pg_channel_table_pane_g1

0x1179,	// (0x00016b74) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3dd,	// (0x00024dd8) bg_single_mobtv_pg_channel_table_pane_g

0x5047,	// (0x0001aa42) single_mobtv_pg_channel_table_pane_t1

0x5055,	// (0x0001aa50) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbd0,	// (0x000255cb) single_mobtv_pg_channel_table_pane_t

0xd2b6,	// (0x00022cb1) main_mobtv_info_pane_g1_ParamLimits

0xd2b6,	// (0x00022cb1) main_mobtv_info_pane_g1

0xd2d2,	// (0x00022ccd) main_mobtv_info_pane_t1_ParamLimits

0xd2d2,	// (0x00022ccd) main_mobtv_info_pane_t1

0xd34a,	// (0x00022d45) main_mobtv_info_pane_t2_ParamLimits

0xd34a,	// (0x00022d45) main_mobtv_info_pane_t2

0x0002,

0xfbda,	// (0x000255d5) main_mobtv_info_pane_t_ParamLimits

0xfbda,	// (0x000255d5) main_mobtv_info_pane_t

0xd3d9,	// (0x00022dd4) wait_bar_pane_cp05

0xd3eb,	// (0x00022de6) main_mobtv_loading_pane_g1_ParamLimits

0xd3eb,	// (0x00022de6) main_mobtv_loading_pane_g1

0xd3f9,	// (0x00022df4) main_mobtv_loading_pane_g2_ParamLimits

0xd3f9,	// (0x00022df4) main_mobtv_loading_pane_g2

0xd405,	// (0x00022e00) main_mobtv_loading_pane_g3_ParamLimits

0xd405,	// (0x00022e00) main_mobtv_loading_pane_g3

0x0002,

0xfbe1,	// (0x000255dc) main_mobtv_loading_pane_g_ParamLimits

0xfbe1,	// (0x000255dc) main_mobtv_loading_pane_g

0x5063,	// (0x0001aa5e) main_mobtv_loading_pane_t1_ParamLimits

0x5063,	// (0x0001aa5e) main_mobtv_loading_pane_t1

0x507b,	// (0x0001aa76) main_mobtv_loading_pane_t2_ParamLimits

0x507b,	// (0x0001aa76) main_mobtv_loading_pane_t2

0x0001,

0xfbe8,	// (0x000255e3) main_mobtv_loading_pane_t_ParamLimits

0xfbe8,	// (0x000255e3) main_mobtv_loading_pane_t

0xd413,	// (0x00022e0e) wait_bar_pane_cp06_ParamLimits

0xd413,	// (0x00022e0e) wait_bar_pane_cp06

0x509f,	// (0x0001aa9a) main_mobtv_programe_curr_pane_t1

0x50ad,	// (0x0001aaa8) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbed,	// (0x000255e8) main_mobtv_programe_curr_pane_t

0x50bb,	// (0x0001aab6) main_mobtv_programe_next_pane_t1

0x50c9,	// (0x0001aac4) main_mobtv_programe_next_pane_t2

0x50d7,	// (0x0001aad2) main_mobtv_programe_next_pane_t3

0x0002,

0xfbf2,	// (0x000255ed) main_mobtv_programe_next_pane_t

0x070a,	// (0x00016105) bg_popup_mobtv_noti_window_pane

0x50e5,	// (0x0001aae0) popup_mobtv_noti_window_g1

0x50ed,	// (0x0001aae8) popup_mobtv_noti_window_t1

0x50fb,	// (0x0001aaf6) popup_mobtv_noti_window_t2

0x0001,

0xfbf9,	// (0x000255f4) popup_mobtv_noti_window_t

0x1179,	// (0x00016b74) bg_popup_mobtv_noti_window_pane_g1

0x702e,	// (0x0001ca29) sc_clock_pane

0x702e,	// (0x0001ca29) main_fs_bigclock_pane

0xcb1f,	// (0x0002251a) blid2_tripm_pane_t4_ParamLimits

0xcb1f,	// (0x0002251a) blid2_tripm_pane_t4

0xd41f,	// (0x00022e1a) sc_clock_pane_g1_ParamLimits

0xd41f,	// (0x00022e1a) sc_clock_pane_g1

0xd42d,	// (0x00022e28) sc_clock_pane_t1_ParamLimits

0xd42d,	// (0x00022e28) sc_clock_pane_t1

0xd440,	// (0x00022e3b) sc_clock_pane_t2_ParamLimits

0xd440,	// (0x00022e3b) sc_clock_pane_t2

0xd452,	// (0x00022e4d) sc_clock_pane_t3_ParamLimits

0xd452,	// (0x00022e4d) sc_clock_pane_t3

0x0004,

0xfbfe,	// (0x000255f9) sc_clock_pane_t_ParamLimits

0xfbfe,	// (0x000255f9) sc_clock_pane_t

0xe08b,	// (0x00023a86) main_fs_bigclock_indicator_pane_ParamLimits

0xe08b,	// (0x00023a86) main_fs_bigclock_indicator_pane

0xd4d5,	// (0x00022ed0) main_fs_bigclock_pane_g1_ParamLimits

0xd4d5,	// (0x00022ed0) main_fs_bigclock_pane_g1

0xe097,	// (0x00023a92) main_fs_bigclock_pane_t1_ParamLimits

0xe097,	// (0x00023a92) main_fs_bigclock_pane_t1

0xe0a9,	// (0x00023aa4) main_fs_bigclock_pane_t2_ParamLimits

0xe0a9,	// (0x00023aa4) main_fs_bigclock_pane_t2

0xe0bd,	// (0x00023ab8) main_fs_bigclock_pane_t3_ParamLimits

0xe0bd,	// (0x00023ab8) main_fs_bigclock_pane_t3

0x0002,

0xfd8f,	// (0x0002578a) main_fs_bigclock_pane_t_ParamLimits

0xfd8f,	// (0x0002578a) main_fs_bigclock_pane_t

0x5c7d,	// (0x0001b678) main_fs_bigclock_indicator_pane_g1

0x4e0e,	// (0x0001a809) ncim_query_content_pane_g2_ParamLimits

0x4e0e,	// (0x0001a809) ncim_query_content_pane_g2

0x0001,

0xfb8b,	// (0x00025586) ncim_query_content_pane_g_ParamLimits

0xfb8b,	// (0x00025586) ncim_query_content_pane_g

0xd466,	// (0x00022e61) sc_clock_pane_t4_ParamLimits

0xd466,	// (0x00022e61) sc_clock_pane_t4

0x7484,	// (0x0001ce7f) main_radioblah_pane

0x7ceb,	// (0x0001d6e6) cell_call4_button_pane_t1_copy1_ParamLimits

0x7ceb,	// (0x0001d6e6) cell_call4_button_pane_t1_copy1

0xd0a9,	// (0x00022aa4) main_ncimui_pane_t1_ParamLimits

0xd0a9,	// (0x00022aa4) main_ncimui_pane_t1

0xd0c3,	// (0x00022abe) main_ncimui_pane_t2_ParamLimits

0xd0c3,	// (0x00022abe) main_ncimui_pane_t2

0x0002,

0xfb84,	// (0x0002557f) main_ncimui_pane_t_ParamLimits

0xfb84,	// (0x0002557f) main_ncimui_pane_t

0x5241,	// (0x0001ac3c) main_radioblah_anim_pane_ParamLimits

0x5241,	// (0x0001ac3c) main_radioblah_anim_pane

0x5252,	// (0x0001ac4d) main_radioblah_info_pane_ParamLimits

0x5252,	// (0x0001ac4d) main_radioblah_info_pane

0x5266,	// (0x0001ac61) main_radioblah_pane_t1_ParamLimits

0x5266,	// (0x0001ac61) main_radioblah_pane_t1

0x5282,	// (0x0001ac7d) main_radioblah_pane_t2_ParamLimits

0x5282,	// (0x0001ac7d) main_radioblah_pane_t2

0x0003,

0xfc1f,	// (0x0002561a) main_radioblah_pane_t_ParamLimits

0xfc1f,	// (0x0002561a) main_radioblah_pane_t

0xd52b,	// (0x00022f26) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd52b,	// (0x00022f26) main_radioblah_rocker_ctrl_pane

0x52ca,	// (0x0001acc5) main_radioblah_info_pane_t1_ParamLimits

0x52ca,	// (0x0001acc5) main_radioblah_info_pane_t1

0xd570,	// (0x00022f6b) main_radioblah_info_pane_t2_ParamLimits

0xd570,	// (0x00022f6b) main_radioblah_info_pane_t2

0x0003,

0xfc28,	// (0x00025623) main_radioblah_info_pane_t_ParamLimits

0xfc28,	// (0x00025623) main_radioblah_info_pane_t

0x1179,	// (0x00016b74) main_radioblah_rocker_ctrl_pane_g1

0xd620,	// (0x0002301b) main_radioblah_rocker_ctrl_pane_g2

0xd628,	// (0x00023023) main_radioblah_rocker_ctrl_pane_g3

0xd630,	// (0x0002302b) main_radioblah_rocker_ctrl_pane_g4

0xd638,	// (0x00023033) main_radioblah_rocker_ctrl_pane_g5

0xd640,	// (0x0002303b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc31,	// (0x0002562c) main_radioblah_rocker_ctrl_pane_g

0xd04f,	// (0x00022a4a) main_cset_text2_pane_t1_copy1_ParamLimits

0x7d76,	// (0x0001d771) cam4_image_uncrop_qvga_pane

0x7e93,	// (0x0001d88e) vid4_image_uncrop_qcif_pane

0x8473,	// (0x0001de6e) cam6_image_uncrop_qvga_pane_ParamLimits

0x8473,	// (0x0001de6e) cam6_image_uncrop_qvga_pane

0x4ad4,	// (0x0001a4cf) vid6_image_uncrop_qcif_pane_ParamLimits

0x4ad4,	// (0x0001a4cf) vid6_image_uncrop_qcif_pane

0x070a,	// (0x00016105) bg_popup_preview_window_pane_cp03

0x4dc0,	// (0x0001a7bb) list_cset_text2_pane

0x4dc8,	// (0x0001a7c3) main_cset6_text2_pane_g1

0x4dd0,	// (0x0001a7cb) main_cset6_text2_pane_t1

0xd648,	// (0x00023043) list_cset_text2_pane_t1_ParamLimits

0xd648,	// (0x00023043) list_cset_text2_pane_t1

0x7484,	// (0x0001ce7f) main_radioblah_pane_ParamLimits

0xd3c5,	// (0x00022dc0) main_mobtv_info_pane_t3_ParamLimits

0xd3c5,	// (0x00022dc0) main_mobtv_info_pane_t3

0xd519,	// (0x00022f14) main_radioblah_pane_g1

0xd544,	// (0x00022f3f) main_radioblah_info_pane_g1

0xd5c5,	// (0x00022fc0) main_radioblah_info_pane_t3_ParamLimits

0xd5c5,	// (0x00022fc0) main_radioblah_info_pane_t3

0x9e91,	// (0x0001f88c) highlight_cell_cale_month_pane_ParamLimits

0x9e91,	// (0x0001f88c) highlight_cell_cale_month_pane

0x702e,	// (0x0001ca29) main_phob_fisheye_pane

0x384d,	// (0x00019248) scroll_pane_cp0031_ParamLimits

0x384d,	// (0x00019248) scroll_pane_cp0031

0x4be2,	// (0x0001a5dd) wait_bar_pane_cp08_ParamLimits

0xce1a,	// (0x00022815) cset_list_set_pane_copy1_ParamLimits

0x5304,	// (0x0001acff) highlight_cell_cale_month_pane_g1

0xd669,	// (0x00023064) highlight_cell_cale_month_pane_t1

0x47c2,	// (0x0001a1bd) list_gen_pane_cp01

0x4311,	// (0x00019d0c) scroll_pane_01

0xd677,	// (0x00023072) list_single_double_fisheye_pane

0xd680,	// (0x0002307b) list_double_fisheye_pane_g1_ParamLimits

0xd680,	// (0x0002307b) list_double_fisheye_pane_g1

0xd68c,	// (0x00023087) list_double_fisheye_pane_g2_ParamLimits

0xd68c,	// (0x00023087) list_double_fisheye_pane_g2

0xd6a0,	// (0x0002309b) list_double_fisheye_pane_g3_ParamLimits

0xd6a0,	// (0x0002309b) list_double_fisheye_pane_g3

0x0004,

0xfc3e,	// (0x00025639) list_double_fisheye_pane_g_ParamLimits

0xfc3e,	// (0x00025639) list_double_fisheye_pane_g

0xd6c9,	// (0x000230c4) list_double_fisheye_pane_t1_ParamLimits

0xd6c9,	// (0x000230c4) list_double_fisheye_pane_t1

0xd6e4,	// (0x000230df) list_double_fisheye_pane_t2_ParamLimits

0xd6e4,	// (0x000230df) list_double_fisheye_pane_t2

0x0001,

0xfc49,	// (0x00025644) list_double_fisheye_pane_t_ParamLimits

0xfc49,	// (0x00025644) list_double_fisheye_pane_t

0x702e,	// (0x0001ca29) main_call5_pane

0xd48c,	// (0x00022e87) sc_swipe_pane_ParamLimits

0xd48c,	// (0x00022e87) sc_swipe_pane

0xd712,	// (0x0002310d) call5_image_pane_ParamLimits

0xd712,	// (0x0002310d) call5_image_pane

0xd722,	// (0x0002311d) call5_swipe_1_pane_ParamLimits

0xd722,	// (0x0002311d) call5_swipe_1_pane

0xd72e,	// (0x00023129) call5_swipe_2_pane_ParamLimits

0xd72e,	// (0x00023129) call5_swipe_2_pane

0xd748,	// (0x00023143) popup_call5_audio_first_window_ParamLimits

0xd748,	// (0x00023143) popup_call5_audio_first_window

0x0e70,	// (0x0001686b) call5_swipe_1_pane_g1_ParamLimits

0x0e70,	// (0x0001686b) call5_swipe_1_pane_g1

0x530c,	// (0x0001ad07) call5_swipe_1_pane_g2_ParamLimits

0x530c,	// (0x0001ad07) call5_swipe_1_pane_g2

0x0001,

0xfc4e,	// (0x00025649) call5_swipe_1_pane_g_ParamLimits

0xfc4e,	// (0x00025649) call5_swipe_1_pane_g

0x5318,	// (0x0001ad13) call5_swipe_1_pane_t1_ParamLimits

0x5318,	// (0x0001ad13) call5_swipe_1_pane_t1

0x0e70,	// (0x0001686b) call5_swipe_2_pane_g1_ParamLimits

0x0e70,	// (0x0001686b) call5_swipe_2_pane_g1

0x532d,	// (0x0001ad28) call5_swipe_2_pane_g2_ParamLimits

0x532d,	// (0x0001ad28) call5_swipe_2_pane_g2

0x0001,

0xfc53,	// (0x0002564e) call5_swipe_2_pane_g_ParamLimits

0xfc53,	// (0x0002564e) call5_swipe_2_pane_g

0x5339,	// (0x0001ad34) call5_swipe_2_pane_t1_ParamLimits

0x5339,	// (0x0001ad34) call5_swipe_2_pane_t1

0x534e,	// (0x0001ad49) sc_swipe_pane_g1_ParamLimits

0x534e,	// (0x0001ad49) sc_swipe_pane_g1

0x535b,	// (0x0001ad56) sc_swipe_pane_g2_ParamLimits

0x535b,	// (0x0001ad56) sc_swipe_pane_g2

0x0001,

0xfc58,	// (0x00025653) sc_swipe_pane_g_ParamLimits

0xfc58,	// (0x00025653) sc_swipe_pane_g

0x5367,	// (0x0001ad62) sc_swipe_pane_t1_ParamLimits

0x5367,	// (0x0001ad62) sc_swipe_pane_t1

0x702e,	// (0x0001ca29) main_cmail_launcher_pane

0xd756,	// (0x00023151) aid_size_cell_cmail_l_ParamLimits

0xd756,	// (0x00023151) aid_size_cell_cmail_l

0xd764,	// (0x0002315f) grid_cmail_l_pane_ParamLimits

0xd764,	// (0x0002315f) grid_cmail_l_pane

0xd774,	// (0x0002316f) cell_cmail_l_pane_ParamLimits

0xd774,	// (0x0002316f) cell_cmail_l_pane

0x537c,	// (0x0001ad77) cell_cmail_l_pane_g1_ParamLimits

0x537c,	// (0x0001ad77) cell_cmail_l_pane_g1

0x5388,	// (0x0001ad83) cell_cmail_l_pane_t1_ParamLimits

0x5388,	// (0x0001ad83) cell_cmail_l_pane_t1

0x539e,	// (0x0001ad99) cell_cmail_l_pane_t2_ParamLimits

0x539e,	// (0x0001ad99) cell_cmail_l_pane_t2

0x0001,

0xfc5d,	// (0x00025658) cell_cmail_l_pane_t_ParamLimits

0xfc5d,	// (0x00025658) cell_cmail_l_pane_t

0x0779,	// (0x00016174) grid_highlight_pane_cp018_ParamLimits

0x0779,	// (0x00016174) grid_highlight_pane_cp018

0x6e90,	// (0x0001c88b) main2_pane_ParamLimits

0x6e90,	// (0x0001c88b) main2_pane

0x0fc0,	// (0x000169bb) popup_sp_fs_action_menu_bg_pane_g1

0x0fc8,	// (0x000169c3) popup_sp_fs_action_menu_bg_pane_g2

0x0fd0,	// (0x000169cb) popup_sp_fs_action_menu_bg_pane_g3

0x0fd8,	// (0x000169d3) popup_sp_fs_action_menu_bg_pane_g4

0x0fe0,	// (0x000169db) popup_sp_fs_action_menu_bg_pane_g5

0x0fe8,	// (0x000169e3) popup_sp_fs_action_menu_bg_pane_g6

0x0ff0,	// (0x000169eb) popup_sp_fs_action_menu_bg_pane_g7

0x0ff8,	// (0x000169f3) popup_sp_fs_action_menu_bg_pane_g8

0x1000,	// (0x000169fb) popup_sp_fs_action_menu_bg_pane_g9

0x1008,	// (0x00016a03) popup_sp_fs_action_menu_bg_pane_g10

0x1008,	// (0x00016a03) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x00024b40) popup_sp_fs_action_menu_bg_pane_g

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g3_g1

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g3_g2

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00024bee) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00024bee) list_medium_line_x2_t3_g3_g

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g3_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g3_t1

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g3_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g3_t2

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g3_t3_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00024bf5) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00024bf5) list_medium_line_x2_t3_g3_t

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g2_g1

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00024bfc) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00024bfc) list_medium_line_x2_t3_g2_g

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g2_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g2_t1

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g2_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g2_t2

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g2_t3_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00024bf5) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00024bf5) list_medium_line_x2_t3_g2_t

0x0e70,	// (0x0001686b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t4_g4_g1

0x0e70,	// (0x0001686b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t4_g4_g2

0x0e70,	// (0x0001686b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t4_g4_g3

0x0e70,	// (0x0001686b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x00024c01) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x00024c01) list_medium_line_x2_t4_g4_g

0x114b,	// (0x00016b46) list_medium_line_x2_t4_g4_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t4_g4_t1

0x114b,	// (0x00016b46) list_medium_line_x2_t4_g4_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t4_g4_t2

0x114b,	// (0x00016b46) list_medium_line_x2_t4_g4_t3_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t4_g4_t3

0x114b,	// (0x00016b46) list_medium_line_x2_t4_g4_t4_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x00024c0a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x00024c0a) list_medium_line_x2_t4_g4_t

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g4_g1

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g4_g2

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g4_g3

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x00024c01) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x00024c01) list_medium_line_x2_t2_g4_g

0x114b,	// (0x00016b46) list_medium_line_x2_t2_g4_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t2_g4_t1

0x114b,	// (0x00016b46) list_medium_line_x2_t2_g4_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x00024c71) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x00024c71) list_medium_line_x2_t2_g4_t

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g3_g1

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g3_g2

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00024bee) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00024bee) list_medium_line_x2_t2_g3_g

0x114b,	// (0x00016b46) list_medium_line_x2_t2_g3_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t2_g3_t1

0x114b,	// (0x00016b46) list_medium_line_x2_t2_g3_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x00024c71) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x00024c71) list_medium_line_x2_t2_g3_t

0xa030,	// (0x0001fa2b) main_sp_fs_list_pane_ParamLimits

0xa030,	// (0x0001fa2b) main_sp_fs_list_pane

0xa03c,	// (0x0001fa37) sp_fs_scroll_pane_ParamLimits

0xa03c,	// (0x0001fa37) sp_fs_scroll_pane

0x16da,	// (0x000170d5) list_medium_line_x2_t3_t1

0x16da,	// (0x000170d5) list_medium_line_x2_t3_t2

0x16da,	// (0x000170d5) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x00024cbc) list_medium_line_x2_t3_t

0x16da,	// (0x000170d5) list_medium_line_x3_t4_t1

0x16da,	// (0x000170d5) list_medium_line_x3_t4_t2

0x16da,	// (0x000170d5) list_medium_line_x3_t4_t3

0x16da,	// (0x000170d5) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x00024cc3) list_medium_line_x3_t4_t

0x16da,	// (0x000170d5) list_medium_line_x4_t5_t1

0x16da,	// (0x000170d5) list_medium_line_x4_t5_t2

0x16da,	// (0x000170d5) list_medium_line_x4_t5_t3

0x16da,	// (0x000170d5) list_medium_line_x4_t5_t4

0x16da,	// (0x000170d5) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x00024ccc) list_medium_line_x4_t5_t

0x0e70,	// (0x0001686b) list_medium_line_t4_g4_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_t4_g4_g1

0x0e70,	// (0x0001686b) list_medium_line_t4_g4_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_t4_g4_g2

0x0e70,	// (0x0001686b) list_medium_line_t4_g4_g3_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_t4_g4_g3

0x0e70,	// (0x0001686b) list_medium_line_t4_g4_g4_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x00024c01) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x00024c01) list_medium_line_t4_g4_g

0x114b,	// (0x00016b46) list_medium_line_t4_g4_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t4_g4_t1

0x114b,	// (0x00016b46) list_medium_line_t4_g4_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t4_g4_t2

0x114b,	// (0x00016b46) list_medium_line_t4_g4_t3_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t4_g4_t3

0x114b,	// (0x00016b46) list_medium_line_t4_g4_t4_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x00024c0a) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x00024c0a) list_medium_line_t4_g4_t

0xa0c0,	// (0x0001fabb) chi_dic_find_pane_g1

0x74ac,	// (0x0001cea7) main_tport_pane

0x16da,	// (0x000170d5) list_medium_line_plain_t1

0x0e70,	// (0x0001686b) list_medium_line_t2_g2_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_t2_g2_g1

0x0e70,	// (0x0001686b) list_medium_line_t2_g2_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x00024bfc) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x00024bfc) list_medium_line_t2_g2_g

0x114b,	// (0x00016b46) list_medium_line_t2_g2_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t2_g2_t1

0x114b,	// (0x00016b46) list_medium_line_t2_g2_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t2_g2_t2

0x0001,

0xf276,	// (0x00024c71) list_medium_line_t2_g2_t_ParamLimits

0xf276,	// (0x00024c71) list_medium_line_t2_g2_t

0x4836,	// (0x0001a231) aid_sp_fs_list_icon_a_sm

0x483e,	// (0x0001a239) aid_sp_fs_list_icon_d

0x4846,	// (0x0001a241) aid_sp_fs_text_primary

0x484f,	// (0x0001a24a) aid_sp_fs_text_secondary

0x070a,	// (0x00016105) list_medium_line

0x070a,	// (0x00016105) list_medium_line_g2

0x070a,	// (0x00016105) list_medium_line_g3

0x070a,	// (0x00016105) list_medium_line_plain

0x070a,	// (0x00016105) list_medium_line_plain_t2

0x070a,	// (0x00016105) list_medium_line_plain_t3

0x070a,	// (0x00016105) list_medium_line_right_icon

0x070a,	// (0x00016105) list_medium_line_right_iconx2

0x070a,	// (0x00016105) list_medium_line_t2

0x070a,	// (0x00016105) list_medium_line_t2_g2

0x070a,	// (0x00016105) list_medium_line_t2_g3

0x070a,	// (0x00016105) list_medium_line_t2_right_icon

0x070a,	// (0x00016105) list_medium_line_t2_right_iconx2

0x070a,	// (0x00016105) list_medium_line_t3

0x070a,	// (0x00016105) list_medium_line_t3_g2

0x070a,	// (0x00016105) list_medium_line_t3_g3

0x070a,	// (0x00016105) list_medium_line_t3_right_iconx2

0x070a,	// (0x00016105) list_medium_line_t4_g4

0x070a,	// (0x00016105) list_medium_line_x2

0x070a,	// (0x00016105) list_medium_line_x2_t2_g2

0x070a,	// (0x00016105) list_medium_line_x2_t2_g3

0x070a,	// (0x00016105) list_medium_line_x2_t2_g4

0x070a,	// (0x00016105) list_medium_line_x2_t3

0x070a,	// (0x00016105) list_medium_line_x2_t3_g2

0x070a,	// (0x00016105) list_medium_line_x2_t3_g3

0x070a,	// (0x00016105) list_medium_line_x2_t3_g4

0x070a,	// (0x00016105) list_medium_line_x2_t4_g2

0x070a,	// (0x00016105) list_medium_line_x2_t4_g4

0x070a,	// (0x00016105) list_medium_line_x3

0x070a,	// (0x00016105) list_medium_line_x3_t4

0x070a,	// (0x00016105) list_medium_line_x3_t4_g4

0x070a,	// (0x00016105) list_medium_line_x4_t4

0x070a,	// (0x00016105) list_medium_line_x4_t4_g7

0x070a,	// (0x00016105) list_medium_line_x4_t5

0xc9a4,	// (0x0002239f) list_single_fs_dyc_pane_ParamLimits

0xc9a4,	// (0x0002239f) list_single_fs_dyc_pane

0x0e70,	// (0x0001686b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x4_t4_g7_g1

0x0e70,	// (0x0001686b) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x4_t4_g7_g2

0x0e70,	// (0x0001686b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x4_t4_g7_g3

0x0e70,	// (0x0001686b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x4_t4_g7_g4

0x0e70,	// (0x0001686b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x4_t4_g7_g5

0x0e70,	// (0x0001686b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x4_t4_g7_g6

0x0e7e,	// (0x00016879) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0e7e,	// (0x00016879) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb65,	// (0x00025560) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb65,	// (0x00025560) list_medium_line_x4_t4_g7_g

0x114b,	// (0x00016b46) list_medium_line_x4_t4_g7_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x4_t4_g7_t1

0x114b,	// (0x00016b46) list_medium_line_x4_t4_g7_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x4_t4_g7_t2

0x114b,	// (0x00016b46) list_medium_line_x4_t4_g7_t3_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x4_t4_g7_t3

0x1cf8,	// (0x000176f3) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1cf8,	// (0x000176f3) list_medium_line_x4_t4_g7_t4

0x1cf8,	// (0x000176f3) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1cf8,	// (0x000176f3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb74,	// (0x0002556f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb74,	// (0x0002556f) list_medium_line_x4_t4_g7_t

0xd032,	// (0x00022a2d) list_single_dyc_row_pane_ParamLimits

0xd032,	// (0x00022a2d) list_single_dyc_row_pane

0xd706,	// (0x00023101) call5_gesture_pane_ParamLimits

0xd706,	// (0x00023101) call5_gesture_pane

0xd73a,	// (0x00023135) call5_windows_pane_ParamLimits

0xd73a,	// (0x00023135) call5_windows_pane

0xd78d,	// (0x00023188) call5_swipe_1_pane_cp_ParamLimits

0xd78d,	// (0x00023188) call5_swipe_1_pane_cp

0xd799,	// (0x00023194) call5_swipe_2_pane_cp_ParamLimits

0xd799,	// (0x00023194) call5_swipe_2_pane_cp

0x1139,	// (0x00016b34) call5_image_pane_cp

0xd7a5,	// (0x000231a0) popup_call5_audio_first_window_cp_ParamLimits

0xd7a5,	// (0x000231a0) popup_call5_audio_first_window_cp

0x534e,	// (0x0001ad49) call5_swipe_1_pane_g1_cp_ParamLimits

0x534e,	// (0x0001ad49) call5_swipe_1_pane_g1_cp

0x53bb,	// (0x0001adb6) call5_swipe_1_pane_g2_cp

0x5367,	// (0x0001ad62) call5_swipe_1_pane_t1_cp_ParamLimits

0x5367,	// (0x0001ad62) call5_swipe_1_pane_t1_cp

0x534e,	// (0x0001ad49) call5_swipe_2_pane_g1_cp_ParamLimits

0x534e,	// (0x0001ad49) call5_swipe_2_pane_g1_cp

0x53c3,	// (0x0001adbe) call5_swipe_2_pane_g2_cp

0x53cb,	// (0x0001adc6) call5_swipe_2_pane_t1_cp_ParamLimits

0x53cb,	// (0x0001adc6) call5_swipe_2_pane_t1_cp

0x0779,	// (0x00016174) main_sp_fs_email_pane

0x53e0,	// (0x0001addb) main_sp_fs_listscroll_pane_te

0xd7b3,	// (0x000231ae) popup_sp_fs_action_menu_pane_ParamLimits

0xd7b3,	// (0x000231ae) popup_sp_fs_action_menu_pane

0x1179,	// (0x00016b74) bg_sp_fs_ctrlbar_pane_g1

0x53e9,	// (0x0001ade4) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x53f2,	// (0x0001aded) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2fcd,	// (0x000189c8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1179,	// (0x00016b74) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc62,	// (0x0002565d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x315f,	// (0x00018b5a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x315f,	// (0x00018b5a) bg_sp_fs_ctrlbar_ddmenu_pane

0x53fb,	// (0x0001adf6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x53fb,	// (0x0001adf6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x5407,	// (0x0001ae02) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x5407,	// (0x0001ae02) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc6b,	// (0x00025666) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc6b,	// (0x00025666) main_sp_fs_ctrlbar_ddmenu_pane_g

0x5413,	// (0x0001ae0e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x5413,	// (0x0001ae0e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1179,	// (0x00016b74) list_medium_line_t2_right_icon_g1

0x16da,	// (0x000170d5) list_medium_line_t2_right_icon_t1

0x16da,	// (0x000170d5) list_medium_line_t2_right_icon_t2

0x0001,

0xfc70,	// (0x0002566b) list_medium_line_t2_right_icon_t

0x1d0c,	// (0x00017707) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1d0c,	// (0x00017707) bg_sp_fs_ctrlbar_pane

0xd83a,	// (0x00023235) main_sp_fs_ctrlbar_button_pane_cp01

0xd842,	// (0x0002323d) main_sp_fs_ctrlbar_ddmenu_pane

0x5465,	// (0x0001ae60) main_sp_fs_ctrlbar_pane_g1

0x5471,	// (0x0001ae6c) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc75,	// (0x00025670) main_sp_fs_ctrlbar_pane_g

0xd87e,	// (0x00023279) main_sp_fs_ctrlbar_pane_t1

0xd8b9,	// (0x000232b4) main_sp_fs_ctrlbar_pane

0xd8cf,	// (0x000232ca) main_sp_fs_listscroll_pane_te_cp01

0xd8e0,	// (0x000232db) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xd8e0,	// (0x000232db) popup_sp_fs_action_menu_pane_cp01

0x0779,	// (0x00016174) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0779,	// (0x00016174) bg_sp_fs_highlight_list_pane_cp01

0x5498,	// (0x0001ae93) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5498,	// (0x0001ae93) sp_fs_action_menu_list_gene_pane_g1

0x54a7,	// (0x0001aea2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x54a7,	// (0x0001aea2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc83,	// (0x0002567e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc83,	// (0x0002567e) sp_fs_action_menu_list_gene_pane_g

0x54b4,	// (0x0001aeaf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x54b4,	// (0x0001aeaf) sp_fs_action_menu_list_gene_pane_t1

0x54cc,	// (0x0001aec7) sp_fs_action_menu_list_gene_pane_ParamLimits

0x54cc,	// (0x0001aec7) sp_fs_action_menu_list_gene_pane

0x54eb,	// (0x0001aee6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x54eb,	// (0x0001aee6) popup_sp_fs_action_menu_bg_pane

0x54f9,	// (0x0001aef4) sp_fs_action_menu_list_pane_ParamLimits

0x54f9,	// (0x0001aef4) sp_fs_action_menu_list_pane

0xd900,	// (0x000232fb) sp_fs_scroll_pane_cp01_ParamLimits

0xd900,	// (0x000232fb) sp_fs_scroll_pane_cp01

0x16da,	// (0x000170d5) list_medium_line_plain_t2_t1

0x16da,	// (0x000170d5) list_medium_line_plain_t2_t2

0x0001,

0xfc70,	// (0x0002566b) list_medium_line_plain_t2_t

0x16da,	// (0x000170d5) list_medium_line_plain_t3_t1

0x16da,	// (0x000170d5) list_medium_line_plain_t3_t2

0x16da,	// (0x000170d5) list_medium_line_plain_t3_t3

0x0002,

0xf2c1,	// (0x00024cbc) list_medium_line_plain_t3_t

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g2_g1

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00024bfc) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00024bfc) list_medium_line_x2_t2_g2_g

0x114b,	// (0x00016b46) list_medium_line_x2_t2_g2_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t2_g2_t1

0x114b,	// (0x00016b46) list_medium_line_x2_t2_g2_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x00024c71) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x00024c71) list_medium_line_x2_t2_g2_t

0x0e70,	// (0x0001686b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t4_g2_g1

0x0e70,	// (0x0001686b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x00024bfc) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x00024bfc) list_medium_line_x2_t4_g2_g

0x114b,	// (0x00016b46) list_medium_line_x2_t4_g2_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t4_g2_t1

0x114b,	// (0x00016b46) list_medium_line_x2_t4_g2_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t4_g2_t2

0x114b,	// (0x00016b46) list_medium_line_x2_t4_g2_t3_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t4_g2_t3

0x114b,	// (0x00016b46) list_medium_line_x2_t4_g2_t4_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x00024c0a) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x00024c0a) list_medium_line_x2_t4_g2_t

0x1179,	// (0x00016b74) list_medium_line_t3_right_iconx2_g1

0x1179,	// (0x00016b74) list_medium_line_t3_right_iconx2_g2

0x1179,	// (0x00016b74) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3e2,	// (0x00024ddd) list_medium_line_t3_right_iconx2_g

0x16da,	// (0x000170d5) list_medium_line_t3_right_iconx2_t1

0x16da,	// (0x000170d5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc70,	// (0x0002566b) list_medium_line_t3_right_iconx2_t

0x0e70,	// (0x0001686b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x3_t4_g4_g1

0x0e70,	// (0x0001686b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x3_t4_g4_g2

0x0e70,	// (0x0001686b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x3_t4_g4_g3

0x0e70,	// (0x0001686b) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x00024c01) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x00024c01) list_medium_line_x3_t4_g4_g

0x114b,	// (0x00016b46) list_medium_line_x3_t4_g4_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x3_t4_g4_t1

0x114b,	// (0x00016b46) list_medium_line_x3_t4_g4_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x3_t4_g4_t2

0x114b,	// (0x00016b46) list_medium_line_x3_t4_g4_t3_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x3_t4_g4_t3

0x114b,	// (0x00016b46) list_medium_line_x3_t4_g4_t4_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x00024c0a) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x00024c0a) list_medium_line_x3_t4_g4_t

0xd926,	// (0x00023321) list_single_dyc_row_text_pane_t1_ParamLimits

0xd926,	// (0x00023321) list_single_dyc_row_text_pane_t1

0xd95d,	// (0x00023358) list_single_dyc_row_text_pane_t2_ParamLimits

0xd95d,	// (0x00023358) list_single_dyc_row_text_pane_t2

0x5519,	// (0x0001af14) list_single_dyc_row_text_pane_t3_ParamLimits

0x5519,	// (0x0001af14) list_single_dyc_row_text_pane_t3

0x0005,

0xfc88,	// (0x00025683) list_single_dyc_row_text_pane_t_ParamLimits

0xfc88,	// (0x00025683) list_single_dyc_row_text_pane_t

0x553d,	// (0x0001af38) list_single_dyc_row_pane_g1_ParamLimits

0x553d,	// (0x0001af38) list_single_dyc_row_pane_g1

0x5549,	// (0x0001af44) list_single_dyc_row_pane_g2_ParamLimits

0x5549,	// (0x0001af44) list_single_dyc_row_pane_g2

0x5555,	// (0x0001af50) list_single_dyc_row_pane_g3_ParamLimits

0x5555,	// (0x0001af50) list_single_dyc_row_pane_g3

0x5561,	// (0x0001af5c) list_single_dyc_row_pane_g4_ParamLimits

0x5561,	// (0x0001af5c) list_single_dyc_row_pane_g4

0x0003,

0xfc95,	// (0x00025690) list_single_dyc_row_pane_g_ParamLimits

0xfc95,	// (0x00025690) list_single_dyc_row_pane_g

0x556d,	// (0x0001af68) list_single_dyc_row_text_pane_ParamLimits

0x556d,	// (0x0001af68) list_single_dyc_row_text_pane

0x070a,	// (0x00016105) bg_sp_fs_scroll_pane

0x558c,	// (0x0001af87) thumb_sp_fs_scroll_pane

0x0e70,	// (0x0001686b) list_medium_line_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_g1

0x114b,	// (0x00016b46) list_medium_line_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t1

0x0e70,	// (0x0001686b) list_medium_line_x2_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_g1

0x0e70,	// (0x0001686b) list_medium_line_x2_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x00024bfc) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x00024bfc) list_medium_line_x2_g

0x114b,	// (0x00016b46) list_medium_line_x2_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t1

0x0e70,	// (0x0001686b) list_medium_line_x3_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x3_g1

0x5595,	// (0x0001af90) list_medium_line_x3_g2_ParamLimits

0x5595,	// (0x0001af90) list_medium_line_x3_g2

0x0001,

0xfc9e,	// (0x00025699) list_medium_line_x3_g_ParamLimits

0xfc9e,	// (0x00025699) list_medium_line_x3_g

0x55a3,	// (0x0001af9e) list_medium_line_x3_t1_ParamLimits

0x55a3,	// (0x0001af9e) list_medium_line_x3_t1

0x55b7,	// (0x0001afb2) thumb_sp_fs_scroll_pane_g1

0x55c0,	// (0x0001afbb) thumb_sp_fs_scroll_pane_g2

0x55c9,	// (0x0001afc4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfca3,	// (0x0002569e) thumb_sp_fs_scroll_pane_g

0x55b7,	// (0x0001afb2) bg_sp_fs_scroll_pane_g1

0x55c0,	// (0x0001afbb) bg_sp_fs_scroll_pane_g2

0x55c9,	// (0x0001afc4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfca3,	// (0x0002569e) bg_sp_fs_scroll_pane_g

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g4_g1

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g4_g2

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g4_g3

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x00024c01) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x00024c01) list_medium_line_x2_t3_g4_g

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g4_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g4_t1

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g4_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g4_t2

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g4_t3_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00024bf5) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00024bf5) list_medium_line_x2_t3_g4_t

0x0e70,	// (0x0001686b) list_medium_line_g2_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_g2_g1

0x0e70,	// (0x0001686b) list_medium_line_g2_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x00024bfc) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x00024bfc) list_medium_line_g2_g

0x114b,	// (0x00016b46) list_medium_line_g2_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_g2_t1

0x0e70,	// (0x0001686b) list_medium_line_t3_g2_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_t3_g2_g1

0x0e70,	// (0x0001686b) list_medium_line_t3_g2_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x00024bfc) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x00024bfc) list_medium_line_t3_g2_g

0x114b,	// (0x00016b46) list_medium_line_t3_g2_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t3_g2_t1

0x114b,	// (0x00016b46) list_medium_line_t3_g2_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t3_g2_t2

0x114b,	// (0x00016b46) list_medium_line_t3_g2_t3_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x00024bf5) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x00024bf5) list_medium_line_t3_g2_t

0x1179,	// (0x00016b74) list_medium_line_right_icon_g1

0x16da,	// (0x000170d5) list_medium_line_right_icon_t1

0x0e70,	// (0x0001686b) list_medium_line_t2_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_t2_g1

0x114b,	// (0x00016b46) list_medium_line_t2_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t2_t1

0x114b,	// (0x00016b46) list_medium_line_t2_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t2_t2

0x0001,

0xf276,	// (0x00024c71) list_medium_line_t2_t_ParamLimits

0xf276,	// (0x00024c71) list_medium_line_t2_t

0x0e70,	// (0x0001686b) list_medium_line_t3_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_t3_g1

0x114b,	// (0x00016b46) list_medium_line_t3_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t3_t1

0x114b,	// (0x00016b46) list_medium_line_t3_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t3_t2

0x114b,	// (0x00016b46) list_medium_line_t3_t3_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x00024bf5) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x00024bf5) list_medium_line_t3_t

0x0e70,	// (0x0001686b) list_medium_line_g3_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_g3_g1

0x0e70,	// (0x0001686b) list_medium_line_g3_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_g3_g2

0x0e70,	// (0x0001686b) list_medium_line_g3_g3_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x00024bee) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x00024bee) list_medium_line_g3_g

0x114b,	// (0x00016b46) list_medium_line_g3_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_g3_t1

0x0e70,	// (0x0001686b) list_medium_line_t2_g3_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_t2_g3_g1

0x0e70,	// (0x0001686b) list_medium_line_t2_g3_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_t2_g3_g2

0x0e70,	// (0x0001686b) list_medium_line_t2_g3_g3_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x00024bee) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x00024bee) list_medium_line_t2_g3_g

0x114b,	// (0x00016b46) list_medium_line_t2_g3_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t2_g3_t1

0x114b,	// (0x00016b46) list_medium_line_t2_g3_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t2_g3_t2

0x0001,

0xf276,	// (0x00024c71) list_medium_line_t2_g3_t_ParamLimits

0xf276,	// (0x00024c71) list_medium_line_t2_g3_t

0x0e70,	// (0x0001686b) list_medium_line_t3_g3_g1_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_t3_g3_g1

0x0e70,	// (0x0001686b) list_medium_line_t3_g3_g2_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_t3_g3_g2

0x0e70,	// (0x0001686b) list_medium_line_t3_g3_g3_ParamLimits

0x0e70,	// (0x0001686b) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x00024bee) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x00024bee) list_medium_line_t3_g3_g

0x114b,	// (0x00016b46) list_medium_line_t3_g3_t1_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t3_g3_t1

0x114b,	// (0x00016b46) list_medium_line_t3_g3_t2_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t3_g3_t2

0x114b,	// (0x00016b46) list_medium_line_t3_g3_t3_ParamLimits

0x114b,	// (0x00016b46) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x00024bf5) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x00024bf5) list_medium_line_t3_g3_t

0x1179,	// (0x00016b74) list_medium_line_right_iconx2_g1

0x1179,	// (0x00016b74) list_medium_line_right_iconx2_g2

0x0001,

0xf3dd,	// (0x00024dd8) list_medium_line_right_iconx2_g

0x16da,	// (0x000170d5) list_medium_line_right_iconx2_t1

0x1179,	// (0x00016b74) list_medium_line_t2_right_iconx2_g1

0x1179,	// (0x00016b74) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3dd,	// (0x00024dd8) list_medium_line_t2_right_iconx2_g

0x16da,	// (0x000170d5) list_medium_line_t2_right_iconx2_t1

0x16da,	// (0x000170d5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc70,	// (0x0002566b) list_medium_line_t2_right_iconx2_t

0x16da,	// (0x000170d5) list_medium_line_x4_t4_t1

0x16da,	// (0x000170d5) list_medium_line_x4_t4_t2

0x16da,	// (0x000170d5) list_medium_line_x4_t4_t3

0x16da,	// (0x000170d5) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x00024cc3) list_medium_line_x4_t4_t

0xdaaa,	// (0x000234a5) tport_appsw_pane_ParamLimits

0xdaaa,	// (0x000234a5) tport_appsw_pane

0xdab8,	// (0x000234b3) tport_contact_pane_ParamLimits

0xdab8,	// (0x000234b3) tport_contact_pane

0xdac8,	// (0x000234c3) tport_listscroll_pane_ParamLimits

0xdac8,	// (0x000234c3) tport_listscroll_pane

0xdad8,	// (0x000234d3) cell_tport_appsw_pane_ParamLimits

0xdad8,	// (0x000234d3) cell_tport_appsw_pane

0x0e7e,	// (0x00016879) tport_appsw_pane_g1_ParamLimits

0x0e7e,	// (0x00016879) tport_appsw_pane_g1

0x55d2,	// (0x0001afcd) tport_contact_pane_g1

0x55db,	// (0x0001afd6) tport_contact_pane_t1

0x55e9,	// (0x0001afe4) tport_contact_pane_t2

0x0001,

0xfcaa,	// (0x000256a5) tport_contact_pane_t

0x55f7,	// (0x0001aff2) list_tport_pane

0x5600,	// (0x0001affb) scroll_pane_cp_030

0xdb0b,	// (0x00023506) cell_tport_appsw_pane_g1

0xdb1b,	// (0x00023516) cell_tport_appsw_pane_t1

0xdb29,	// (0x00023524) grid_highlight_pane_cp019

0xdb31,	// (0x0002352c) list_tport_double_graphic_pane_ParamLimits

0xdb31,	// (0x0002352c) list_tport_double_graphic_pane

0x0779,	// (0x00016174) list_highlight_pane_cp023_ParamLimits

0x0779,	// (0x00016174) list_highlight_pane_cp023

0xdb42,	// (0x0002353d) list_tport_double_graphic_pane_g1_ParamLimits

0xdb42,	// (0x0002353d) list_tport_double_graphic_pane_g1

0xdb4f,	// (0x0002354a) list_tport_double_graphic_pane_t1_ParamLimits

0xdb4f,	// (0x0002354a) list_tport_double_graphic_pane_t1

0xdb64,	// (0x0002355f) list_tport_double_graphic_pane_t2_ParamLimits

0xdb64,	// (0x0002355f) list_tport_double_graphic_pane_t2

0x0001,

0xfcb6,	// (0x000256b1) list_tport_double_graphic_pane_t_ParamLimits

0xfcb6,	// (0x000256b1) list_tport_double_graphic_pane_t

0x070a,	// (0x00016105) main_cale_note_pane

0x80b0,	// (0x0001daab) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x80b0,	// (0x0001daab) cell_vitu2_function_top_wide_pane_cp01

0xd3d9,	// (0x00022dd4) wait_bar_pane_cp05_ParamLimits

0x0779,	// (0x00016174) listscroll_cmail_pane

0x5609,	// (0x0001b004) list_cmail_pane

0xdb76,	// (0x00023571) list_cmail_body_pane

0xdb9e,	// (0x00023599) list_single_cmail_header_caption_pane

0xdbcd,	// (0x000235c8) list_single_cmail_header_detail_pane_ParamLimits

0xdbcd,	// (0x000235c8) list_single_cmail_header_detail_pane

0x5619,	// (0x0001b014) list_single_cmail_header_caption_pane_t1

0xdc06,	// (0x00023601) list_single_cmail_header_detail_pane_g1_ParamLimits

0xdc06,	// (0x00023601) list_single_cmail_header_detail_pane_g1

0x5630,	// (0x0001b02b) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5630,	// (0x0001b02b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcbb,	// (0x000256b6) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcbb,	// (0x000256b6) list_single_cmail_header_detail_pane_g

0x5649,	// (0x0001b044) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5649,	// (0x0001b044) list_single_cmail_header_detail_pane_t1

0x56a9,	// (0x0001b0a4) list_single_cmail_header_editor_pane_bg_ParamLimits

0x56a9,	// (0x0001b0a4) list_single_cmail_header_editor_pane_bg

0x4ffc,	// (0x0001a9f7) list_cmail_body_pane_g1

0x56c0,	// (0x0001b0bb) list_cmail_body_pane_t1

0x41f7,	// (0x00019bf2) list_single_cmail_header_editor_pane_bg_g1

0x138a,	// (0x00016d85) list_single_cmail_header_editor_pane_bg_g1_copy1

0x4207,	// (0x00019c02) list_single_cmail_header_editor_pane_bg_g1_copy2

0x41ff,	// (0x00019bfa) list_single_cmail_header_editor_pane_bg_g1_copy3

0x448b,	// (0x00019e86) list_single_cmail_header_editor_pane_bg_g1_copy4

0x4227,	// (0x00019c22) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x4217,	// (0x00019c12) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x421f,	// (0x00019c1a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x136a,	// (0x00016d65) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xdc1c,	// (0x00023617) calenote_gesture_pane_ParamLimits

0xdc1c,	// (0x00023617) calenote_gesture_pane

0xdc36,	// (0x00023631) calenote_window_pane_ParamLimits

0xdc36,	// (0x00023631) calenote_window_pane

0x56ce,	// (0x0001b0c9) popup_note_window_cp01

0xdc4e,	// (0x00023649) calenote_swipe_1_pane_ParamLimits

0xdc4e,	// (0x00023649) calenote_swipe_1_pane

0xd799,	// (0x00023194) calenote_swipe_2_pane_ParamLimits

0xd799,	// (0x00023194) calenote_swipe_2_pane

0x534e,	// (0x0001ad49) calenote_swipe_1_pane_g1_ParamLimits

0x534e,	// (0x0001ad49) calenote_swipe_1_pane_g1

0x535b,	// (0x0001ad56) calenote_swipe_1_pane_g2_ParamLimits

0x535b,	// (0x0001ad56) calenote_swipe_1_pane_g2

0x0001,

0xfc58,	// (0x00025653) calenote_swipe_1_pane_g_ParamLimits

0xfc58,	// (0x00025653) calenote_swipe_1_pane_g

0x56e0,	// (0x0001b0db) calenote_swipe_1_pane_t1_ParamLimits

0x56e0,	// (0x0001b0db) calenote_swipe_1_pane_t1

0x534e,	// (0x0001ad49) calenote_swipe_2_pane_g1_ParamLimits

0x534e,	// (0x0001ad49) calenote_swipe_2_pane_g1

0x56ff,	// (0x0001b0fa) calenote_swipe_2_pane_g2_ParamLimits

0x56ff,	// (0x0001b0fa) calenote_swipe_2_pane_g2

0x0001,

0xfcc7,	// (0x000256c2) calenote_swipe_2_pane_g_ParamLimits

0xfcc7,	// (0x000256c2) calenote_swipe_2_pane_g

0x570b,	// (0x0001b106) calenote_swipe_2_pane_t1_ParamLimits

0x570b,	// (0x0001b106) calenote_swipe_2_pane_t1

0x070a,	// (0x00016105) main_mup_navstr_pane

0xb61a,	// (0x00021015) main_mup3_pane_t7_ParamLimits

0xb61a,	// (0x00021015) main_mup3_pane_t7

0x790c,	// (0x0001d307) main_mp4_pane_g6_ParamLimits

0x790c,	// (0x0001d307) main_mp4_pane_g6

0x7c1d,	// (0x0001d618) main_image3_pane_t4_ParamLimits

0x7c1d,	// (0x0001d618) main_image3_pane_t4

0xdc61,	// (0x0002365c) popup_navstr_preview_pane_ParamLimits

0xdc61,	// (0x0002365c) popup_navstr_preview_pane

0xdc6d,	// (0x00023668) scroll_navstr_pane_ParamLimits

0xdc6d,	// (0x00023668) scroll_navstr_pane

0x070a,	// (0x00016105) bg_popup_preview_window_pane_cp04

0x5732,	// (0x0001b12d) popup_navstr_preview_pane_t1

0xdc79,	// (0x00023674) scroll_navstr_pane_g1_ParamLimits

0xdc79,	// (0x00023674) scroll_navstr_pane_g1

0xdc86,	// (0x00023681) scroll_navstr_pane_t1_ParamLimits

0xdc86,	// (0x00023681) scroll_navstr_pane_t1

0x56d7,	// (0x0001b0d2) bg_button_pane_cp014

0x56d7,	// (0x0001b0d2) bg_button_pane_cp030

0xd6ac,	// (0x000230a7) list_double_fisheye_pane_g4_ParamLimits

0xd6ac,	// (0x000230a7) list_double_fisheye_pane_g4

0xd6b8,	// (0x000230b3) list_double_fisheye_pane_g5_ParamLimits

0xd6b8,	// (0x000230b3) list_double_fisheye_pane_g5

0x4f4e,	// (0x0001a949) sp_fs_scroll_pane_cp03

0x5465,	// (0x0001ae60) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x5471,	// (0x0001ae6c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc75,	// (0x00025670) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd87e,	// (0x00023279) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x5611,	// (0x0001b00c) sp_fs_scroll_pane_cp02

0x1081,	// (0x00016a7c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1081,	// (0x00016a7c) popup_sp_fs_calendar_preview_list_single_pane

0x070a,	// (0x00016105) main_cam6_pano_pane

0x7484,	// (0x0001ce7f) main_mup3_pane_ParamLimits

0x070a,	// (0x00016105) main_phacti_pane

0xd2ae,	// (0x00022ca9) bg_button_pane_cp11

0xd2c6,	// (0x00022cc1) main_mobtv_info_pane_g2_ParamLimits

0xd2c6,	// (0x00022cc1) main_mobtv_info_pane_g2

0x0001,

0xfbd5,	// (0x000255d0) main_mobtv_info_pane_g_ParamLimits

0xfbd5,	// (0x000255d0) main_mobtv_info_pane_g

0xd478,	// (0x00022e73) sc_clock_pane_t5_ParamLimits

0xd478,	// (0x00022e73) sc_clock_pane_t5

0xd519,	// (0x00022f14) main_radioblah_pane_g1_ParamLimits

0x529a,	// (0x0001ac95) main_radioblah_pane_t3_ParamLimits

0x529a,	// (0x0001ac95) main_radioblah_pane_t3

0x52b2,	// (0x0001acad) main_radioblah_pane_t4_ParamLimits

0x52b2,	// (0x0001acad) main_radioblah_pane_t4

0xd537,	// (0x00022f32) main_radioblah_text_pane_ParamLimits

0xd537,	// (0x00022f32) main_radioblah_text_pane

0xd544,	// (0x00022f3f) main_radioblah_info_pane_g1_ParamLimits

0xd5d9,	// (0x00022fd4) main_radioblah_info_pane_t4_ParamLimits

0xd5d9,	// (0x00022fd4) main_radioblah_info_pane_t4

0x0779,	// (0x00016174) main_sp_fs_calendar_pane

0xdc98,	// (0x00023693) main_phacti_pane_g1

0xdca0,	// (0x0002369b) phacti_note_pane_ParamLimits

0xdca0,	// (0x0002369b) phacti_note_pane

0x5749,	// (0x0001b144) phacti_term_pane_ParamLimits

0x5749,	// (0x0001b144) phacti_term_pane

0x575e,	// (0x0001b159) phacti_note_pane_t1_ParamLimits

0x575e,	// (0x0001b159) phacti_note_pane_t1

0x5775,	// (0x0001b170) phacti_term_pane_g1

0x577d,	// (0x0001b178) phacti_term_pane_t1_ParamLimits

0x577d,	// (0x0001b178) phacti_term_pane_t1

0x57a7,	// (0x0001b1a2) popup_sp_fs_calendar_preview_list_single_pane_g1

0x57af,	// (0x0001b1aa) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcd1,	// (0x000256cc) popup_sp_fs_calendar_preview_list_single_pane_g

0x57b7,	// (0x0001b1b2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x57b7,	// (0x0001b1b2) popup_sp_fs_calendar_preview_list_single_pane_t1

0x57cd,	// (0x0001b1c8) aid_popup_sp_fs_bg_corner_pane

0x1179,	// (0x00016b74) popup_sp_fs_calendar_preview_bg_pane_g1

0x070a,	// (0x00016105) popup_sp_fs_calendar_preview_bg_pane

0x57d5,	// (0x0001b1d0) popup_sp_fs_calendar_preview_list_pane

0x1d0c,	// (0x00017707) bg_main_sp_fs_cale_pane_ParamLimits

0x1d0c,	// (0x00017707) bg_main_sp_fs_cale_pane

0x57e6,	// (0x0001b1e1) listscroll_cale_mrui_pane_ParamLimits

0x57e6,	// (0x0001b1e1) listscroll_cale_mrui_pane

0x57fb,	// (0x0001b1f6) listscroll_sp_fs_schedule_track_pane

0x5804,	// (0x0001b1ff) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5804,	// (0x0001b1ff) main_sp_fs_ctrlbar_pane_cp01

0x5817,	// (0x0001b212) main_sp_fs_ribbon_pane

0x581f,	// (0x0001b21a) popup_sp_fs_cale_preview_window

0xdd03,	// (0x000236fe) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdd03,	// (0x000236fe) list_single_sp_fs_schedule_track_pane

0x0e62,	// (0x0001685d) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0e62,	// (0x0001685d) bg_sp_fs_highlight_list_pane_cp03

0xdd29,	// (0x00023724) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdd29,	// (0x00023724) list_single_sp_fs_schedule_track_pane_g1

0xdd35,	// (0x00023730) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdd35,	// (0x00023730) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcd6,	// (0x000256d1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcd6,	// (0x000256d1) list_single_sp_fs_schedule_track_pane_g

0xdd41,	// (0x0002373c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdd41,	// (0x0002373c) list_single_sp_fs_schedule_track_pane_t1

0xdd59,	// (0x00023754) sp_fs_schedule_track_pane_ParamLimits

0xdd59,	// (0x00023754) sp_fs_schedule_track_pane

0x5831,	// (0x0001b22c) sp_fs_schedule_track_pane_g1

0x5839,	// (0x0001b234) sp_fs_schedule_track_pane_g2

0x5841,	// (0x0001b23c) sp_fs_schedule_track_pane_g3

0x5849,	// (0x0001b244) sp_fs_schedule_track_pane_g4

0x5851,	// (0x0001b24c) sp_fs_schedule_track_pane_g5

0x0004,

0xfcdb,	// (0x000256d6) sp_fs_schedule_track_pane_g

0x41f7,	// (0x00019bf2) bg_sp_fs_schedule_viewer_highlight_g1

0x138a,	// (0x00016d85) bg_sp_fs_schedule_viewer_highlight_g2

0x41ff,	// (0x00019bfa) bg_sp_fs_schedule_viewer_highlight_g3

0x4207,	// (0x00019c02) bg_sp_fs_schedule_viewer_highlight_g4

0x448b,	// (0x00019e86) bg_sp_fs_schedule_viewer_highlight_g5

0x4217,	// (0x00019c12) bg_sp_fs_schedule_viewer_highlight_g6

0x421f,	// (0x00019c1a) bg_sp_fs_schedule_viewer_highlight_g7

0x4227,	// (0x00019c22) bg_sp_fs_schedule_viewer_highlight_g8

0x136a,	// (0x00016d65) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfce6,	// (0x000256e1) bg_sp_fs_schedule_viewer_highlight_g

0x070a,	// (0x00016105) bg_main_sp_fs_ribbon_pane

0xdd69,	// (0x00023764) main_sp_fs_ribbon_pane_g1

0x5859,	// (0x0001b254) main_sp_fs_ribbon_pane_t1

0xdd72,	// (0x0002376d) main_sp_fs_ribbon_pane_t2

0x5868,	// (0x0001b263) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcf9,	// (0x000256f4) main_sp_fs_ribbon_pane_t

0x5877,	// (0x0001b272) main_sp_fs_ribbon_scheduler_pane

0x587f,	// (0x0001b27a) bg_main_sp_fs_ribbon_pane_g1

0x5888,	// (0x0001b283) bg_main_sp_fs_ribbon_pane_g2

0x5891,	// (0x0001b28c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd00,	// (0x000256fb) bg_main_sp_fs_ribbon_pane_g

0x5899,	// (0x0001b294) main_sp_fs_ribbon_scheduler_pane_g1

0x58a2,	// (0x0001b29d) main_sp_fs_ribbon_scheduler_pane_g2

0x58ab,	// (0x0001b2a6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd07,	// (0x00025702) main_sp_fs_ribbon_scheduler_pane_g

0x58b4,	// (0x0001b2af) list_cale_mrui_pane

0xdd81,	// (0x0002377c) sp_fs_scroll_pane_cp07_ParamLimits

0xdd81,	// (0x0002377c) sp_fs_scroll_pane_cp07

0xdd9d,	// (0x00023798) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdd9d,	// (0x00023798) bg_sp_fs_schedule_viewer_highlight

0x58c1,	// (0x0001b2bc) list_single_sp_fs_schedule_track_pane_cp01

0x58c9,	// (0x0001b2c4) list_sp_fs_schedule_track_pane

0x58d1,	// (0x0001b2cc) sp_fs_scroll_pane_cp06_ParamLimits

0x58d1,	// (0x0001b2cc) sp_fs_scroll_pane_cp06

0x1179,	// (0x00016b74) bgmain_sp_fs_calendar_pane_g1

0xddaa,	// (0x000237a5) list_single_cale_mrui_pane_ParamLimits

0xddaa,	// (0x000237a5) list_single_cale_mrui_pane

0x58e3,	// (0x0001b2de) list_single_cale_mrui_row_pane_ParamLimits

0x58e3,	// (0x0001b2de) list_single_cale_mrui_row_pane

0x58f0,	// (0x0001b2eb) list_single_cale_mrui_row_pane_g1_ParamLimits

0x58f0,	// (0x0001b2eb) list_single_cale_mrui_row_pane_g1

0x5935,	// (0x0001b330) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5935,	// (0x0001b330) list_single_cale_mrui_row_pane_t1

0xddd8,	// (0x000237d3) list_single_cale_mrui_row_pane_t2_ParamLimits

0xddd8,	// (0x000237d3) list_single_cale_mrui_row_pane_t2

0x5947,	// (0x0001b342) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5947,	// (0x0001b342) list_single_cale_mrui_row_pane_t3

0x5976,	// (0x0001b371) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5976,	// (0x0001b371) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd15,	// (0x00025710) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd15,	// (0x00025710) list_single_cale_mrui_row_pane_t

0xde3e,	// (0x00023839) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xde3e,	// (0x00023839) list_single_cmail_header_editor_pane_bg_cp01

0xde5e,	// (0x00023859) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xde5e,	// (0x00023859) list_single_cmail_header_editor_pane_bg_cp02

0xde7a,	// (0x00023875) main_radioblah_text_pane_t1_ParamLimits

0xde7a,	// (0x00023875) main_radioblah_text_pane_t1

0x59a5,	// (0x0001b3a0) cam6_indi_pane_cp01

0x59ad,	// (0x0001b3a8) cam6_mode_pane_cp01

0x59b5,	// (0x0001b3b0) cam6_pano_pane

0x59be,	// (0x0001b3b9) cam6_zoom_pane_cp01

0x59c6,	// (0x0001b3c1) cam6_pano_image_pane

0x59d1,	// (0x0001b3cc) cam6_pano_pane_g1

0x4ffc,	// (0x0001a9f7) cam6_pano_pane_g2

0x59da,	// (0x0001b3d5) cam6_pano_pane_g3

0x59e3,	// (0x0001b3de) cam6_pano_pane_g4

0x3aab,	// (0x000194a6) cam6_pano_pane_g5

0x59ec,	// (0x0001b3e7) cam6_pano_pane_g6

0x59f6,	// (0x0001b3f1) cam6_pano_pane_g7

0x59fe,	// (0x0001b3f9) cam6_pano_pane_g8

0x5a07,	// (0x0001b402) cam6_pano_pane_g9

0x0008,

0xfd1e,	// (0x00025719) cam6_pano_pane_g

0x070a,	// (0x00016105) main_browser_tag_pane

0x572a,	// (0x0001b125) grid_navstr_albumart_pane

0x5a12,	// (0x0001b40d) cell_navstr_albumart_pane_ParamLimits

0x5a12,	// (0x0001b40d) cell_navstr_albumart_pane

0x5a32,	// (0x0001b42d) cell_navstr_albumart_pane_g1

0x2e54,	// (0x0001884f) cell_navstr_albumart_pane_g2

0x2e64,	// (0x0001885f) cell_navstr_albumart_pane_g3

0x2e5c,	// (0x00018857) cell_navstr_albumart_pane_g4

0x0003,

0xfd31,	// (0x0002572c) cell_navstr_albumart_pane_g

0xde95,	// (0x00023890) bt_list_pane_ParamLimits

0xde95,	// (0x00023890) bt_list_pane

0xdeb6,	// (0x000238b1) bt_list_pane_t1

0xdec5,	// (0x000238c0) bt_list_pane_t2

0x0001,

0xfd3a,	// (0x00025735) bt_list_pane_t

0x070a,	// (0x00016105) main_cale_prevew_pane

0xded4,	// (0x000238cf) popup_cale_preview_window_ParamLimits

0xded4,	// (0x000238cf) popup_cale_preview_window

0x0779,	// (0x00016174) bg_popup_preview_window_pane_cp05_ParamLimits

0x0779,	// (0x00016174) bg_popup_preview_window_pane_cp05

0x5a3a,	// (0x0001b435) list_cale_preview_pane_ParamLimits

0x5a3a,	// (0x0001b435) list_cale_preview_pane

0xdeed,	// (0x000238e8) list_double_cale_preview_pane_ParamLimits

0xdeed,	// (0x000238e8) list_double_cale_preview_pane

0xdeff,	// (0x000238fa) list_single_cale_preview_pane_ParamLimits

0xdeff,	// (0x000238fa) list_single_cale_preview_pane

0xdf13,	// (0x0002390e) list_single_cale_preview_pane_g1

0xdf1b,	// (0x00023916) list_single_cale_preview_pane_t1_ParamLimits

0xdf1b,	// (0x00023916) list_single_cale_preview_pane_t1

0xdf30,	// (0x0002392b) list_double_cale_preview_pane_g1

0xdf38,	// (0x00023933) list_double_cale_preview_pane_t1_ParamLimits

0xdf38,	// (0x00023933) list_double_cale_preview_pane_t1

0xdf4d,	// (0x00023948) list_double_cale_preview_pane_t2_ParamLimits

0xdf4d,	// (0x00023948) list_double_cale_preview_pane_t2

0x0001,

0xfd3f,	// (0x0002573a) list_double_cale_preview_pane_t_ParamLimits

0xfd3f,	// (0x0002573a) list_double_cale_preview_pane_t

0x070a,	// (0x00016105) main_ezdial_pane

0x0779,	// (0x00016174) main_sp_fs_email_pane_ParamLimits

0xd7f7,	// (0x000231f2) cmail_ddmenu_btn01_pane_ParamLimits

0xd7f7,	// (0x000231f2) cmail_ddmenu_btn01_pane

0xd80c,	// (0x00023207) cmail_ddmenu_btn02_pane_ParamLimits

0xd80c,	// (0x00023207) cmail_ddmenu_btn02_pane

0xd824,	// (0x0002321f) cmail_ddmenu_btn03_pane_ParamLimits

0xd824,	// (0x0002321f) cmail_ddmenu_btn03_pane

0xd8b9,	// (0x000232b4) main_sp_fs_ctrlbar_pane_ParamLimits

0xd8cf,	// (0x000232ca) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xdb76,	// (0x00023571) list_cmail_body_pane_ParamLimits

0x5627,	// (0x0001b022) bg_button_pane_cp12

0x563c,	// (0x0001b037) list_single_cmail_header_detail_pane_g3_ParamLimits

0x563c,	// (0x0001b037) list_single_cmail_header_detail_pane_g3

0x5685,	// (0x0001b080) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5685,	// (0x0001b080) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcc2,	// (0x000256bd) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcc2,	// (0x000256bd) list_single_cmail_header_detail_pane_t

0x5792,	// (0x0001b18d) phacti_term_pane_t2_ParamLimits

0x5792,	// (0x0001b18d) phacti_term_pane_t2

0x0001,

0xfccc,	// (0x000256c7) phacti_term_pane_t_ParamLimits

0xfccc,	// (0x000256c7) phacti_term_pane_t

0x5a46,	// (0x0001b441) aid_size_list_single_double

0xdf65,	// (0x00023960) popup_ezdial_listscroll_window

0xdf89,	// (0x00023984) popup_number_entry_window_cp01

0x1139,	// (0x00016b34) bg_popup_call_pane_cp09

0x5a52,	// (0x0001b44d) ezdial_list_pane

0x5a5a,	// (0x0001b455) scroll_pane_cp23

0x315f,	// (0x00018b5a) bg_button_pane_cp028_ParamLimits

0x315f,	// (0x00018b5a) bg_button_pane_cp028

0xdf97,	// (0x00023992) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xdf97,	// (0x00023992) cmail_ddmenu_btn01_pane_g1

0xdfa7,	// (0x000239a2) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xdfa7,	// (0x000239a2) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd44,	// (0x0002573f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd44,	// (0x0002573f) cmail_ddmenu_btn01_pane_g

0x5a62,	// (0x0001b45d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x5a62,	// (0x0001b45d) cmail_ddmenu_btn01_pane_t1

0x1d0c,	// (0x00017707) bg_button_pane_cp029_ParamLimits

0x1d0c,	// (0x00017707) bg_button_pane_cp029

0xdfa7,	// (0x000239a2) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xdfa7,	// (0x000239a2) cmail_ddmenu_btn02_pane_g1

0xdfbf,	// (0x000239ba) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xdfbf,	// (0x000239ba) cmail_ddmenu_btn02_pane_t1

0x0e62,	// (0x0001685d) bg_button_pane_cp031_ParamLimits

0x0e62,	// (0x0001685d) bg_button_pane_cp031

0xdfa7,	// (0x000239a2) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xdfa7,	// (0x000239a2) cmail_ddmenu_btn03_pane_g1

0xdfbf,	// (0x000239ba) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xdfbf,	// (0x000239ba) cmail_ddmenu_btn03_pane_t1

0xbc42,	// (0x0002163d) cell_dialer2_keypad_pane_t1_ParamLimits

0xbc5c,	// (0x00021657) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbc5c,	// (0x00021657) cell_dialer2_keypad_pane_t1_copy1

0xd0ef,	// (0x00022aea) ncimui_group_button_pane

0x0779,	// (0x00016174) main_sp_fs_calendar_pane_ParamLimits

0xdb9e,	// (0x00023599) list_single_cmail_header_caption_pane_ParamLimits

0x57dd,	// (0x0001b1d8) aid_recal_txt_sm_pane

0x070a,	// (0x00016105) mian_recal_day_pane

0x581f,	// (0x0001b21a) popup_sp_fs_cale_preview_window_ParamLimits

0x5a77,	// (0x0001b472) list_recal_day_pane

0x5ab9,	// (0x0001b4b4) list_single_recal_day_pane_ParamLimits

0x5ab9,	// (0x0001b4b4) list_single_recal_day_pane

0x5acb,	// (0x0001b4c6) list_single_recal_day_pane_g1_ParamLimits

0x5acb,	// (0x0001b4c6) list_single_recal_day_pane_g1

0x5ad7,	// (0x0001b4d2) list_single_recal_day_pane_g2_ParamLimits

0x5ad7,	// (0x0001b4d2) list_single_recal_day_pane_g2

0x5ae3,	// (0x0001b4de) list_single_recal_day_pane_g3_ParamLimits

0x5ae3,	// (0x0001b4de) list_single_recal_day_pane_g3

0xdfe3,	// (0x000239de) list_single_recal_day_pane_g4_ParamLimits

0xdfe3,	// (0x000239de) list_single_recal_day_pane_g4

0x5aef,	// (0x0001b4ea) list_single_recal_day_pane_g5_ParamLimits

0x5aef,	// (0x0001b4ea) list_single_recal_day_pane_g5

0x5afb,	// (0x0001b4f6) list_single_recal_day_pane_g6_ParamLimits

0x5afb,	// (0x0001b4f6) list_single_recal_day_pane_g6

0x0004,

0xfd53,	// (0x0002574e) list_single_recal_day_pane_g_ParamLimits

0xfd53,	// (0x0002574e) list_single_recal_day_pane_g

0x5b0f,	// (0x0001b50a) list_single_recal_day_pane_t1

0x5b21,	// (0x0001b51c) list_single_recal_day_pane_t2

0x0001,

0xfd5e,	// (0x00025759) list_single_recal_day_pane_t

0xdffb,	// (0x000239f6) ncimui_query_button_pane_ParamLimits

0xdffb,	// (0x000239f6) ncimui_query_button_pane

0xe00b,	// (0x00023a06) ncimui_query_button_pane_t1_ParamLimits

0xe00b,	// (0x00023a06) ncimui_query_button_pane_t1

0x5b33,	// (0x0001b52e) ncimui_query_button_pane_t2_ParamLimits

0x5b33,	// (0x0001b52e) ncimui_query_button_pane_t2

0x0001,

0xfd63,	// (0x0002575e) ncimui_query_button_pane_t_ParamLimits

0xfd63,	// (0x0002575e) ncimui_query_button_pane_t

0xe01e,	// (0x00023a19) query_button_pane_ParamLimits

0xe01e,	// (0x00023a19) query_button_pane

0x070a,	// (0x00016105) bg_button_pane_cp0028

0x5b46,	// (0x0001b541) query_button_pane_t1

0x74ac,	// (0x0001cea7) main_tport_pane_ParamLimits

0xda80,	// (0x0002347b) bg_popup_window_pane_cp01_ParamLimits

0xda80,	// (0x0002347b) bg_popup_window_pane_cp01

0xda8e,	// (0x00023489) heading_pane_cp08_ParamLimits

0xda8e,	// (0x00023489) heading_pane_cp08

0xda9c,	// (0x00023497) heading_pane_cp07_ParamLimits

0xda9c,	// (0x00023497) heading_pane_cp07

0xdb0b,	// (0x00023506) cell_tport_appsw_pane_g2

0x0002,

0xfcaf,	// (0x000256aa) cell_tport_appsw_pane_g

0xa4ef,	// (0x0001feea) input_candi_list_open_g1

0x157b,	// (0x00016f76) list_cale_time_pane_g6_ParamLimits

0x157b,	// (0x00016f76) list_cale_time_pane_g6

0xb0a5,	// (0x00020aa0) aid_size_touch_calib_1_ParamLimits

0xb0a5,	// (0x00020aa0) aid_size_touch_calib_1

0xb0b1,	// (0x00020aac) aid_size_touch_calib_2_ParamLimits

0xb0b1,	// (0x00020aac) aid_size_touch_calib_2

0xb0bf,	// (0x00020aba) aid_size_touch_calib_3_ParamLimits

0xb0bf,	// (0x00020aba) aid_size_touch_calib_3

0xb0cf,	// (0x00020aca) aid_size_touch_calib_4_ParamLimits

0xb0cf,	// (0x00020aca) aid_size_touch_calib_4

0xb0dd,	// (0x00020ad8) main_touch_calib_button_group_pane_ParamLimits

0xb0dd,	// (0x00020ad8) main_touch_calib_button_group_pane

0xb0eb,	// (0x00020ae6) main_touch_calib_pane_g1_ParamLimits

0xb0f7,	// (0x00020af2) main_touch_calib_pane_g2_ParamLimits

0xb103,	// (0x00020afe) main_touch_calib_pane_g3_ParamLimits

0xb10f,	// (0x00020b0a) main_touch_calib_pane_g4_ParamLimits

0xf6f1,	// (0x000250ec) main_touch_calib_pane_g_ParamLimits

0xb11b,	// (0x00020b16) main_touch_calib_pane_t1_ParamLimits

0xb134,	// (0x00020b2f) main_touch_calib_pane_t2_ParamLimits

0xb14d,	// (0x00020b48) main_touch_calib_pane_t3_ParamLimits

0xb163,	// (0x00020b5e) main_touch_calib_pane_t4_ParamLimits

0xb179,	// (0x00020b74) main_touch_calib_pane_t5_ParamLimits

0xf6fa,	// (0x000250f5) main_touch_calib_pane_t_ParamLimits

0x3871,	// (0x0001926c) list_single_fp_cale_pane_g3_ParamLimits

0x3871,	// (0x0001926c) list_single_fp_cale_pane_g3

0x7484,	// (0x0001ce7f) bg_button_pane_cp012_ParamLimits

0x7484,	// (0x0001ce7f) bg_vkb2_func_pane_cp03_ParamLimits

0x82af,	// (0x0001dcaa) cell_vitu2_function_top_pane_g1_ParamLimits

0x7484,	// (0x0001ce7f) bg_vkb2_func_pane_cp04_ParamLimits

0xd077,	// (0x00022a72) main_ncimui_button_group_pane_ParamLimits

0xd077,	// (0x00022a72) main_ncimui_button_group_pane

0xd0dd,	// (0x00022ad8) main_ncimui_pane_t3_ParamLimits

0xd0dd,	// (0x00022ad8) main_ncimui_pane_t3

0x5740,	// (0x0001b13b) phacti_button_group_pane

0x5a46,	// (0x0001b441) aid_size_list_single_double_ParamLimits

0xdf65,	// (0x00023960) popup_ezdial_listscroll_window_ParamLimits

0xdf89,	// (0x00023984) popup_number_entry_window_cp01_ParamLimits

0xe02b,	// (0x00023a26) phacti_button_pane_ParamLimits

0xe02b,	// (0x00023a26) phacti_button_pane

0x070a,	// (0x00016105) bg_button_pane_cp14

0x5b54,	// (0x0001b54f) phacti_button_pane_t1

0xe03c,	// (0x00023a37) main_touch_calib_button_pane_ParamLimits

0xe03c,	// (0x00023a37) main_touch_calib_button_pane

0x0f04,	// (0x000168ff) bg_button_pane_cp18_ParamLimits

0x0f04,	// (0x000168ff) bg_button_pane_cp18

0x5b62,	// (0x0001b55d) main_touch_calib_button_pane_t1_ParamLimits

0x5b62,	// (0x0001b55d) main_touch_calib_button_pane_t1

0x5b78,	// (0x0001b573) main_touch_calib_button_pane_t2_ParamLimits

0x5b78,	// (0x0001b573) main_touch_calib_button_pane_t2

0x0001,

0xfd68,	// (0x00025763) main_touch_calib_button_pane_t_ParamLimits

0xfd68,	// (0x00025763) main_touch_calib_button_pane_t

0x070a,	// (0x00016105) cell_ncimui_button_pane

0x070a,	// (0x00016105) bg_button_pane_cp032

0x5b96,	// (0x0001b591) cell_ncimui_button_pane_t1

0x7b30,	// (0x0001d52b) image3_infobar_pane_ParamLimits

0x7b30,	// (0x0001d52b) image3_infobar_pane

0xd49a,	// (0x00022e95) fs_bigclock_status_pane_ParamLimits

0xd49a,	// (0x00022e95) fs_bigclock_status_pane

0xd4a7,	// (0x00022ea2) main_fs_bigclock_clock_pane_ParamLimits

0xd4a7,	// (0x00022ea2) main_fs_bigclock_clock_pane

0xd4bb,	// (0x00022eb6) main_fs_bigclock_indi_pane_ParamLimits

0xd4bb,	// (0x00022eb6) main_fs_bigclock_indi_pane

0xd4e3,	// (0x00022ede) main_fs_bigclock_swipe_pane_ParamLimits

0xd4e3,	// (0x00022ede) main_fs_bigclock_swipe_pane

0x070a,	// (0x00016105) main_fs_clock_dumped_data

0x5109,	// (0x0001ab04) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x5109,	// (0x0001ab04) list_single_fs_bigclock_indicator_pane_g1

0x5125,	// (0x0001ab20) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x5125,	// (0x0001ab20) list_single_fs_bigclock_indicator_pane_g2

0x513f,	// (0x0001ab3a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x513f,	// (0x0001ab3a) list_single_fs_bigclock_indicator_pane_g3

0x5159,	// (0x0001ab54) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x5159,	// (0x0001ab54) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc09,	// (0x00025604) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc09,	// (0x00025604) list_single_fs_bigclock_indicator_pane_g

0x5184,	// (0x0001ab7f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x5184,	// (0x0001ab7f) list_single_fs_bigclock_indicator_pane_t1

0x51ac,	// (0x0001aba7) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x51ac,	// (0x0001aba7) list_single_fs_bigclock_indicator_pane_t2

0x51d4,	// (0x0001abcf) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x51d4,	// (0x0001abcf) list_single_fs_bigclock_indicator_pane_t3

0x51fc,	// (0x0001abf7) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x51fc,	// (0x0001abf7) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc14,	// (0x0002560f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc14,	// (0x0002560f) list_single_fs_bigclock_indicator_pane_t

0x5ba4,	// (0x0001b59f) image3_infobar_fav_pane_ParamLimits

0x5ba4,	// (0x0001b59f) image3_infobar_fav_pane

0x5bb4,	// (0x0001b5af) image3_infobar_loc_pane_ParamLimits

0x5bb4,	// (0x0001b5af) image3_infobar_loc_pane

0x5bc8,	// (0x0001b5c3) image3_infobar_time_pane_ParamLimits

0x5bc8,	// (0x0001b5c3) image3_infobar_time_pane

0x1179,	// (0x00016b74) image3_infobar_time_pane_g1

0x5bd8,	// (0x0001b5d3) image3_infobar_time_pane_t1

0x1179,	// (0x00016b74) image3_infobar_loc_pane_g1

0x5be6,	// (0x0001b5e1) image3_infobar_loc_pane_g2

0x0001,

0xfd6d,	// (0x00025768) image3_infobar_loc_pane_g

0x5bee,	// (0x0001b5e9) image3_infobar_loc_pane_t1

0x1179,	// (0x00016b74) image3_infobar_fav_pane_g1

0x5bfc,	// (0x0001b5f7) image3_infobar_fav_pane_g2

0x0001,

0xfd72,	// (0x0002576d) image3_infobar_fav_pane_g

0x5c04,	// (0x0001b5ff) fs_bigclock_status_battery_pane

0x5c0d,	// (0x0001b608) fs_bigclock_status_signal_pane

0x5c16,	// (0x0001b611) fs_bigclock_status_title_pane

0x5c1f,	// (0x0001b61a) fs_bigclock_status_signal_pane_g1

0x5c28,	// (0x0001b623) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd77,	// (0x00025772) fs_bigclock_status_signal_pane_g

0x5c30,	// (0x0001b62b) fs_bigclock_status_battery_pane_g1

0x5c39,	// (0x0001b634) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd7c,	// (0x00025777) fs_bigclock_status_battery_pane_g

0x5c41,	// (0x0001b63c) fs_bigclock_status_title_pane_t1

0xe04c,	// (0x00023a47) main_fs_bigclock_clock_pane_g1

0xe04c,	// (0x00023a47) main_fs_bigclock_clock_pane_g2

0xe059,	// (0x00023a54) main_fs_bigclock_clock_pane_g3

0xe059,	// (0x00023a54) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd81,	// (0x0002577c) main_fs_bigclock_clock_pane_g

0xe065,	// (0x00023a60) main_fs_bigclock_clock_pane_t1

0xe078,	// (0x00023a73) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd8a,	// (0x00025785) main_fs_bigclock_clock_pane_t

0x5c4f,	// (0x0001b64a) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5c4f,	// (0x0001b64a) list_single_fs_bigclock_indicator_pane

0x5c60,	// (0x0001b65b) list_single_fs_bigclock_pane_ParamLimits

0x5c60,	// (0x0001b65b) list_single_fs_bigclock_pane

0x5c86,	// (0x0001b681) main_fs_bigclock_indicator_pane_t1

0x5c95,	// (0x0001b690) list_single_fs_bigclock_pane_g1

0x5c9d,	// (0x0001b698) list_single_fs_bigclock_pane_t1

0x1179,	// (0x00016b74) main_fs_bigclock_swipe_pane_g1

0x5ce0,	// (0x0001b6db) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd9b,	// (0x00025796) main_fs_bigclock_swipe_pane_g

0x5ce8,	// (0x0001b6e3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5ce8,	// (0x0001b6e3) main_fs_bigclock_swipe_pane_t1

0xa048,	// (0x0001fa43) call_type_pane_ParamLimits

0x070a,	// (0x00016105) main_btmg_pane

0x591c,	// (0x0001b317) list_single_cale_mrui_row_pane_g2_ParamLimits

0x591c,	// (0x0001b317) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd0e,	// (0x00025709) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd0e,	// (0x00025709) list_single_cale_mrui_row_pane_g

0x5aa0,	// (0x0001b49b) list_recal_vselct_arw_lo_pane

0x5aa8,	// (0x0001b4a3) list_recal_vselct_arw_up_pane

0x5ab0,	// (0x0001b4ab) list_recal_vselct_pane

0xe0cf,	// (0x00023aca) btmg_button_pane

0xe0db,	// (0x00023ad6) main_btmg_pane_g1

0x070a,	// (0x00016105) bg_button_pane_cp044

0x5d05,	// (0x0001b700) btmg_button_pane_t1

0x2fe4,	// (0x000189df) aid_listscroll_gen

0x0779,	// (0x00016174) main_cntbar_detail_pane

0x5609,	// (0x0001b004) list_cmail_folder_pane

0x4f4e,	// (0x0001a949) sp_fs_scroll_pane_cp03_ParamLimits

0xe0e3,	// (0x00023ade) list_single_fs_dyc_pane_cp01_ParamLimits

0xe0e3,	// (0x00023ade) list_single_fs_dyc_pane_cp01

0x5d13,	// (0x0001b70e) aid_size_cmail_indent

0x5d1c,	// (0x0001b717) list_single_dyc_row_pane_cp01

0xe12f,	// (0x00023b2a) cntbar_detail_list_pane_ParamLimits

0xe12f,	// (0x00023b2a) cntbar_detail_list_pane

0xe169,	// (0x00023b64) main_cntbar_detail_cont_pane_ParamLimits

0xe169,	// (0x00023b64) main_cntbar_detail_cont_pane

0xa03c,	// (0x0001fa37) scroll_pane_cp032_ParamLimits

0xa03c,	// (0x0001fa37) scroll_pane_cp032

0xe175,	// (0x00023b70) cntbar_detail_list_event_pane_ParamLimits

0xe175,	// (0x00023b70) cntbar_detail_list_event_pane

0xe13b,	// (0x00023b36) cntbar_detail_list_shct_pane

0x13d8,	// (0x00016dd3) aid_list_gen

0x5d25,	// (0x0001b720) aid_scroll

0x5d2e,	// (0x0001b729) aid_size_touch_scroll_bar

0xd677,	// (0x00023072) aid_list_double

0xe189,	// (0x00023b84) aid_list_single

0xe189,	// (0x00023b84) aid_list_single_lg

0xe192,	// (0x00023b8d) aid_list_z_g_a_sm

0xe19a,	// (0x00023b95) aid_list_z_g_d

0xe1a2,	// (0x00023b9d) aid_txt_z_prm

0xe1b0,	// (0x00023bab) aid_txt_z_prm_cp01

0xe1be,	// (0x00023bb9) aid_txt_z_sec

0xe1cc,	// (0x00023bc7) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe1cc,	// (0x00023bc7) main_cntbar_detail_cont_pane_g1

0xe1d9,	// (0x00023bd4) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe1d9,	// (0x00023bd4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfda0,	// (0x0002579b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfda0,	// (0x0002579b) main_cntbar_detail_cont_pane_g

0x5d37,	// (0x0001b732) main_cntbar_detail_cont_pane_t1

0x5d45,	// (0x0001b740) main_cntbar_detail_cont_pane_t2

0x5d53,	// (0x0001b74e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfda5,	// (0x000257a0) main_cntbar_detail_cont_pane_t

0xe1e5,	// (0x00023be0) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe1e5,	// (0x00023be0) cell_cntbar_detail_list_shct_pane

0x5d61,	// (0x0001b75c) cntbar_detail_list_shct_pane_g1

0x5d6a,	// (0x0001b765) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdac,	// (0x000257a7) cntbar_detail_list_shct_pane_g

0xe1f9,	// (0x00023bf4) cntbar_detail_list_event_pane_g1_ParamLimits

0xe1f9,	// (0x00023bf4) cntbar_detail_list_event_pane_g1

0xe205,	// (0x00023c00) cntbar_detail_list_event_pane_g2_ParamLimits

0xe205,	// (0x00023c00) cntbar_detail_list_event_pane_g2

0x0005,

0xfdb1,	// (0x000257ac) cntbar_detail_list_event_pane_g_ParamLimits

0xfdb1,	// (0x000257ac) cntbar_detail_list_event_pane_g

0xe271,	// (0x00023c6c) cntbar_detail_list_event_pane_t1_ParamLimits

0xe271,	// (0x00023c6c) cntbar_detail_list_event_pane_t1

0xe286,	// (0x00023c81) cntbar_detail_list_event_pane_t2_ParamLimits

0xe286,	// (0x00023c81) cntbar_detail_list_event_pane_t2

0x0002,

0xfdbe,	// (0x000257b9) cntbar_detail_list_event_pane_t_ParamLimits

0xfdbe,	// (0x000257b9) cntbar_detail_list_event_pane_t

0x1179,	// (0x00016b74) cell_cntbar_detail_list_shct_pane_g1

0x1bc5,	// (0x000175c0) navi_pane_mv_g3

0x0779,	// (0x00016174) main_cntbar_detail_pane_ParamLimits

0x070a,	// (0x00016105) main_notif_wgt_pane

0x7847,	// (0x0001d242) aid_tch_main_mp4_pane_g4

0x7aa6,	// (0x0001d4a1) popup_slider_window_cp02

0x5a96,	// (0x0001b491) list_recal_day_event_pane

0xe10f,	// (0x00023b0a) cntbar_detail_btn_pane_ParamLimits

0xe10f,	// (0x00023b0a) cntbar_detail_btn_pane

0xe11f,	// (0x00023b1a) cntbar_detail_btn_pane_cp01_ParamLimits

0xe11f,	// (0x00023b1a) cntbar_detail_btn_pane_cp01

0xe13b,	// (0x00023b36) cntbar_detail_list_shct_pane_ParamLimits

0xe147,	// (0x00023b42) cntbar_detail_pane_g1_ParamLimits

0xe147,	// (0x00023b42) cntbar_detail_pane_g1

0xe153,	// (0x00023b4e) cntbar_detail_pane_t1_ParamLimits

0xe153,	// (0x00023b4e) cntbar_detail_pane_t1

0xe211,	// (0x00023c0c) cntbar_detail_list_event_pane_g3_ParamLimits

0xe211,	// (0x00023c0c) cntbar_detail_list_event_pane_g3

0xe229,	// (0x00023c24) cntbar_detail_list_event_pane_g4_ParamLimits

0xe229,	// (0x00023c24) cntbar_detail_list_event_pane_g4

0xe241,	// (0x00023c3c) cntbar_detail_list_event_pane_g5_ParamLimits

0xe241,	// (0x00023c3c) cntbar_detail_list_event_pane_g5

0xe259,	// (0x00023c54) cntbar_detail_list_event_pane_g6_ParamLimits

0xe259,	// (0x00023c54) cntbar_detail_list_event_pane_g6

0xe29b,	// (0x00023c96) cntbar_detail_list_event_pane_t3_ParamLimits

0xe29b,	// (0x00023c96) cntbar_detail_list_event_pane_t3

0xe2ad,	// (0x00023ca8) popup_notif_wgt_window_ParamLimits

0xe2ad,	// (0x00023ca8) popup_notif_wgt_window

0xe2bd,	// (0x00023cb8) popup_submenu_window_cp01_ParamLimits

0xe2bd,	// (0x00023cb8) popup_submenu_window_cp01

0x1139,	// (0x00016b34) bg_popup_window_pane_cp10

0x5d73,	// (0x0001b76e) listscroll_notif_wgt_pane

0x5d85,	// (0x0001b780) list_notif_wgt_window

0x5d8e,	// (0x0001b789) scroll_pane_cp033

0xe2cb,	// (0x00023cc6) list_notif_wgt_row_pane_ParamLimits

0xe2cb,	// (0x00023cc6) list_notif_wgt_row_pane

0x5d97,	// (0x0001b792) aid_size_list_notif_wgt_del

0x5da4,	// (0x0001b79f) list_notif_wgt_row_pane_g1

0x5db0,	// (0x0001b7ab) list_notif_wgt_row_pane_g2

0x5dbf,	// (0x0001b7ba) list_notif_wgt_row_pane_g3

0x0002,

0xfdc5,	// (0x000257c0) list_notif_wgt_row_pane_g

0x5dcc,	// (0x0001b7c7) list_notif_wgt_row_pane_t1

0x5de2,	// (0x0001b7dd) list_notif_wgt_row_pane_t2

0x5df4,	// (0x0001b7ef) list_notif_wgt_row_pane_t3

0x0002,

0xfdcc,	// (0x000257c7) list_notif_wgt_row_pane_t

0x44b3,	// (0x00019eae) list_recal_day_event_pane_g1

0x5e06,	// (0x0001b801) list_recal_day_event_pane_t1

0x070a,	// (0x00016105) bg_button_pane_cp045

0xe2dd,	// (0x00023cd8) cntbar_detail_btn_pane_t1

0x1d0c,	// (0x00017707) main_callh_pane_ParamLimits

0x1d0c,	// (0x00017707) main_callh_pane

0x070a,	// (0x00016105) main_coverflow0_pane

0x070a,	// (0x00016105) main_wgtman_pane

0xd4fb,	// (0x00022ef6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd4fb,	// (0x00022ef6) main_fs_bigclock_unlock_btn_pane

0xdb03,	// (0x000234fe) bg_button_pane_cp16

0xdb13,	// (0x0002350e) cell_tport_appsw_pane_g3

0xe2eb,	// (0x00023ce6) cf0_flow_pane_ParamLimits

0xe2eb,	// (0x00023ce6) cf0_flow_pane

0x5e15,	// (0x0001b810) listscroll_cf0_pane

0x5e20,	// (0x0001b81b) main_cf0_pane_g1

0xe2fa,	// (0x00023cf5) main_cf0_pane_t1_ParamLimits

0xe2fa,	// (0x00023cf5) main_cf0_pane_t1

0xe30e,	// (0x00023d09) main_cf0_pane_t2_ParamLimits

0xe30e,	// (0x00023d09) main_cf0_pane_t2

0x0001,

0xfdd8,	// (0x000257d3) main_cf0_pane_t_ParamLimits

0xfdd8,	// (0x000257d3) main_cf0_pane_t

0x5e32,	// (0x0001b82d) scroll_pane_cp11

0xe322,	// (0x00023d1d) cf0_flow_pane_g1

0xe32a,	// (0x00023d25) cf0_flow_pane_g2

0x0001,

0xfddd,	// (0x000257d8) cf0_flow_pane_g

0xe332,	// (0x00023d2d) cf0_flow_pane_t1

0x070a,	// (0x00016105) main_call6_pane

0x070a,	// (0x00016105) main_calllock_pane

0x84d8,	// (0x0001ded3) call6_btn_grp_pane_ParamLimits

0x84d8,	// (0x0001ded3) call6_btn_grp_pane

0x84e7,	// (0x0001dee2) call6_pane_g1_ParamLimits

0x84e7,	// (0x0001dee2) call6_pane_g1

0x84f7,	// (0x0001def2) popup_call6_1st_window_ParamLimits

0x84f7,	// (0x0001def2) popup_call6_1st_window

0x8505,	// (0x0001df00) popup_call6_2nd_window_ParamLimits

0x8505,	// (0x0001df00) popup_call6_2nd_window

0x8513,	// (0x0001df0e) cell_call6_btn_pane_ParamLimits

0x8513,	// (0x0001df0e) cell_call6_btn_pane

0x1139,	// (0x00016b34) bg_popup_call2_in_pane_cp03

0x5e3d,	// (0x0001b838) popup_call6_1st_window_g1

0x5e45,	// (0x0001b840) popup_call6_1st_window_g2

0x5e4d,	// (0x0001b848) popup_call6_1st_window_g3

0x0002,

0xfde2,	// (0x000257dd) popup_call6_1st_window_g

0x5e55,	// (0x0001b850) popup_call6_1st_window_t1

0x5e64,	// (0x0001b85f) popup_call6_1st_window_t2

0x5e72,	// (0x0001b86d) popup_call6_1st_window_t3

0x0002,

0xfde9,	// (0x000257e4) popup_call6_1st_window_t

0x1139,	// (0x00016b34) bg_popup_call2_in_pane_cp04

0x5e80,	// (0x0001b87b) popup_call6_2nd_window_g1

0x5e88,	// (0x0001b883) popup_call6_2nd_window_g2

0x5e90,	// (0x0001b88b) popup_call6_2nd_window_g3

0x0002,

0xfdf0,	// (0x000257eb) popup_call6_2nd_window_g

0x5e98,	// (0x0001b893) popup_call6_2nd_window_t1

0x702e,	// (0x0001ca29) bg_button_pane_cp15

0x8522,	// (0x0001df1d) cell_call6_btn_pane_g1

0x852b,	// (0x0001df26) cell_call6_btn_pane_t1

0xe340,	// (0x00023d3b) listscroll_wgtman_pane_ParamLimits

0xe340,	// (0x00023d3b) listscroll_wgtman_pane

0xe35c,	// (0x00023d57) wgtman_btn_pane_ParamLimits

0xe35c,	// (0x00023d57) wgtman_btn_pane

0x19d9,	// (0x000173d4) aid_scroll_copy1

0x5ebf,	// (0x0001b8ba) list_wgtman_pane

0xe391,	// (0x00023d8c) wgtman_btn_pane_g1_ParamLimits

0xe391,	// (0x00023d8c) wgtman_btn_pane_g1

0xe3b9,	// (0x00023db4) wgtman_btn_pane_t1_ParamLimits

0xe3b9,	// (0x00023db4) wgtman_btn_pane_t1

0x5ec9,	// (0x0001b8c4) wgtman_btn_pane_t2_ParamLimits

0x5ec9,	// (0x0001b8c4) wgtman_btn_pane_t2

0x0001,

0xfdf7,	// (0x000257f2) wgtman_btn_pane_t_ParamLimits

0xfdf7,	// (0x000257f2) wgtman_btn_pane_t

0xe3f0,	// (0x00023deb) listrow_wgtman_pane_ParamLimits

0xe3f0,	// (0x00023deb) listrow_wgtman_pane

0xe40c,	// (0x00023e07) listrow_wgtman_pane_g1

0xe419,	// (0x00023e14) listrow_wgtman_pane_g2

0x0001,

0xfdfc,	// (0x000257f7) listrow_wgtman_pane_g

0xe437,	// (0x00023e32) listrow_wgtman_pane_t1

0xe44f,	// (0x00023e4a) listrow_wgtman_pane_t2

0x0001,

0xfe01,	// (0x000257fc) listrow_wgtman_pane_t

0xe475,	// (0x00023e70) wait_bar_pane_cp09

0x5ee0,	// (0x0001b8db) main_calllock_btn_pane

0x5eea,	// (0x0001b8e5) main_calllock_pane_g1

0x070a,	// (0x00016105) bg_button_pane_cp17

0x5ea7,	// (0x0001b8a2) main_calllock_btn_pane_g1

0x5ef2,	// (0x0001b8ed) main_calllock_btn_pane_t1

0x070a,	// (0x00016105) main_dialer3_pane

0x070a,	// (0x00016105) main_fmrd2_pane

0x1179,	// (0x00016b74) main_fs_bigclock_unlock_btn_pane_g1

0xe48f,	// (0x00023e8a) main_fs_bigclock_unlock_btn_pane_t1

0xe49d,	// (0x00023e98) area_fmrd2_info_pane_ParamLimits

0xe49d,	// (0x00023e98) area_fmrd2_info_pane

0xe4ab,	// (0x00023ea6) area_fmrd2_visual_pane_ParamLimits

0xe4ab,	// (0x00023ea6) area_fmrd2_visual_pane

0xe4b9,	// (0x00023eb4) fmrd2_indi_pane_ParamLimits

0xe4b9,	// (0x00023eb4) fmrd2_indi_pane

0xe4c6,	// (0x00023ec1) area_fmrd2_visual_pane_g1

0xe4ce,	// (0x00023ec9) area_fmrd2_visual_pane_t1

0xe4de,	// (0x00023ed9) area_fmrd2_visual_pane_t2

0xe4ee,	// (0x00023ee9) area_fmrd2_visual_pane_t3

0x0002,

0xfe0b,	// (0x00025806) area_fmrd2_visual_pane_t

0xe4fe,	// (0x00023ef9) area_fmrd2_info_pane_g1

0xe506,	// (0x00023f01) area_fmrd2_info_pane_t1

0xe516,	// (0x00023f11) area_fmrd2_info_pane_t2

0xe526,	// (0x00023f21) area_fmrd2_info_pane_t3

0xe536,	// (0x00023f31) area_fmrd2_info_pane_t4

0x0003,

0xfe12,	// (0x0002580d) area_fmrd2_info_pane_t

0xe544,	// (0x00023f3f) fmrd2_indi_pane_t1

0xe554,	// (0x00023f4f) fmrd2_indi_pane_t2

0xe564,	// (0x00023f5f) fmrd2_indi_pane_t3

0x0002,

0xfe1b,	// (0x00025816) fmrd2_indi_pane_t

0x5168,	// (0x0001ab63) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x5168,	// (0x0001ab63) list_single_fs_bigclock_indicator_pane_g5

0x5219,	// (0x0001ac14) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x5219,	// (0x0001ac14) list_single_fs_bigclock_indicator_pane_t5

0xdcb6,	// (0x000236b1) aid_cell_bcale_month_pane_ParamLimits

0xdcb6,	// (0x000236b1) aid_cell_bcale_month_pane

0xdcd4,	// (0x000236cf) bcale_month_pane_ParamLimits

0xdcd4,	// (0x000236cf) bcale_month_pane

0xdcf2,	// (0x000236ed) bcale_preview_pane_ParamLimits

0xdcf2,	// (0x000236ed) bcale_preview_pane

0x5c9d,	// (0x0001b698) list_single_fs_bigclock_pane_t1_ParamLimits

0x5cbc,	// (0x0001b6b7) list_single_fs_bigclock_pane_t2_ParamLimits

0x5cbc,	// (0x0001b6b7) list_single_fs_bigclock_pane_t2

0x0001,

0xfd96,	// (0x00025791) list_single_fs_bigclock_pane_t_ParamLimits

0xfd96,	// (0x00025791) list_single_fs_bigclock_pane_t

0xe487,	// (0x00023e82) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe06,	// (0x00025801) main_fs_bigclock_unlock_btn_pane_g

0xe572,	// (0x00023f6d) aid_dia3_key_size_ParamLimits

0xe572,	// (0x00023f6d) aid_dia3_key_size

0xe57e,	// (0x00023f79) aid_dia3_listrow_size_ParamLimits

0xe57e,	// (0x00023f79) aid_dia3_listrow_size

0xe58e,	// (0x00023f89) dia3_keypad_fun_pane_ParamLimits

0xe58e,	// (0x00023f89) dia3_keypad_fun_pane

0xe5a0,	// (0x00023f9b) dia3_keypad_num_pane_ParamLimits

0xe5a0,	// (0x00023f9b) dia3_keypad_num_pane

0xe5b2,	// (0x00023fad) dia3_listscroll_pane_ParamLimits

0xe5b2,	// (0x00023fad) dia3_listscroll_pane

0xe5c0,	// (0x00023fbb) dia3_numentry_pane_ParamLimits

0xe5c0,	// (0x00023fbb) dia3_numentry_pane

0x5f01,	// (0x0001b8fc) dia3_list_pane

0x5f0c,	// (0x0001b907) scroll_pane_cp12

0x070a,	// (0x00016105) bg_dia3_numentry_pane

0xe5ce,	// (0x00023fc9) dia3_numentry_pane_t1

0xe5dd,	// (0x00023fd8) cell_dia3_key_num_pane

0xe5e5,	// (0x00023fe0) cell_dia3_key0_fun_pane_ParamLimits

0xe5e5,	// (0x00023fe0) cell_dia3_key0_fun_pane

0xe5f2,	// (0x00023fed) cell_dia3_key1_fun_pane_ParamLimits

0xe5f2,	// (0x00023fed) cell_dia3_key1_fun_pane

0xe5ff,	// (0x00023ffa) dia3_listrow_pane

0x4eaf,	// (0x0001a8aa) bg_dia3_numentry_pane_g1

0x070a,	// (0x00016105) bg_button_pane_cp21

0x5f17,	// (0x0001b912) cell_dia3_key_num_pane_t1

0x5f25,	// (0x0001b920) cell_dia3_key_num_pane_t2

0x5f34,	// (0x0001b92f) cell_dia3_key_num_pane_t3

0x5f43,	// (0x0001b93e) cell_dia3_key_num_pane_t4

0x0003,

0xfe22,	// (0x0002581d) cell_dia3_key_num_pane_t

0x070a,	// (0x00016105) bg_button_pane_cp19

0xe60c,	// (0x00024007) cell_dia3_key0_fun_pane_g1

0x070a,	// (0x00016105) bg_button_pane_cp20

0xe614,	// (0x0002400f) cell_dia3_key1_fun_pane_g1

0xe61c,	// (0x00024017) area_left_week_number_pane

0xe62f,	// (0x0002402a) area_top_day_name_pane

0xe63d,	// (0x00024038) frame_month_view_pane

0x5f52,	// (0x0001b94d) grid_month_view_pane

0xe652,	// (0x0002404d) cell_top_day_name_pane_ParamLimits

0xe652,	// (0x0002404d) cell_top_day_name_pane

0xe66c,	// (0x00024067) cell_area_left_week_number_pane_ParamLimits

0xe66c,	// (0x00024067) cell_area_left_week_number_pane

0xe68f,	// (0x0002408a) cell_month_view_pane_ParamLimits

0xe68f,	// (0x0002408a) cell_month_view_pane

0xe6bb,	// (0x000240b6) frm_month_g1

0xe6c8,	// (0x000240c3) frm_month_g2

0xe6d9,	// (0x000240d4) frm_month_g3

0xe6ea,	// (0x000240e5) frm_month_g4

0xe6fb,	// (0x000240f6) frm_month_g5

0xe70e,	// (0x00024109) frm_month_g6

0xe721,	// (0x0002411c) frm_month_g7

0xe734,	// (0x0002412f) frm_month_g8

0xe741,	// (0x0002413c) frm_month_g9

0xe74e,	// (0x00024149) frm_month_g10

0xe75b,	// (0x00024156) frm_month_g11

0xe768,	// (0x00024163) frm_month_g12

0xe775,	// (0x00024170) frm_month_g13

0xe782,	// (0x0002417d) frm_month_g14

0xe791,	// (0x0002418c) frm_month_g15

0xe7a0,	// (0x0002419b) frm_month_g16

0x000f,

0xfe2b,	// (0x00025826) frm_month_g

0xe7af,	// (0x000241aa) cell_top_day_name_pane_t1

0xe7c2,	// (0x000241bd) cell_area_left_week_number_pane_g1

0xe7d1,	// (0x000241cc) cell_area_left_week_number_pane_t1

0x0e70,	// (0x0001686b) cell_month_view_pane_g1

0xe7e7,	// (0x000241e2) cell_month_view_pane_t1

0x070a,	// (0x00016105) main_fps_pane

0x542d,	// (0x0001ae28) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x542d,	// (0x0001ae28) cmail_ddmenu_btn02_pane_cp1

0x5449,	// (0x0001ae44) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x5449,	// (0x0001ae44) cmail_ddmenu_btn02_pane_cp2

0xdfb3,	// (0x000239ae) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xdfb3,	// (0x000239ae) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd49,	// (0x00025744) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd49,	// (0x00025744) cmail_ddmenu_btn02_pane_g

0xdfd1,	// (0x000239cc) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xdfd1,	// (0x000239cc) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd4e,	// (0x00025749) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd4e,	// (0x00025749) cmail_ddmenu_btn02_pane_t

0xe7fd,	// (0x000241f8) fps_text_pane_ParamLimits

0xe7fd,	// (0x000241f8) fps_text_pane

0xe80a,	// (0x00024205) main_fps_pane_g1_ParamLimits

0xe80a,	// (0x00024205) main_fps_pane_g1

0xe818,	// (0x00024213) wait_bar_pane_cp010_ParamLimits

0xe818,	// (0x00024213) wait_bar_pane_cp010

0xe824,	// (0x0002421f) fps_text_pane_t1_ParamLimits

0xe824,	// (0x0002421f) fps_text_pane_t1

0xbd4d,	// (0x00021748) cam4_image_uncrop_pane_g1

0xbd56,	// (0x00021751) cam4_image_uncrop_pane_g2

0xbd5f,	// (0x0002175a) cam4_image_uncrop_pane_g3

0xbd68,	// (0x00021763) cam4_image_uncrop_pane_g4

0x0003,

0xf88d,	// (0x00025288) cam4_image_uncrop_pane_g

0xe5ff,	// (0x00023ffa) dia3_listrow_pane_ParamLimits

0x070a,	// (0x00016105) main_phob2_pane

0xdae5,	// (0x000234e0) cell_tport_appsw_pane_cp02_ParamLimits

0xdae5,	// (0x000234e0) cell_tport_appsw_pane_cp02

0xdaf4,	// (0x000234ef) cell_tport_appsw_pane_cp03_ParamLimits

0xdaf4,	// (0x000234ef) cell_tport_appsw_pane_cp03

0x070a,	// (0x00016105) phob2_contact_card_pane

0x070a,	// (0x00016105) phob2_listscroll_pane

0xe83d,	// (0x00024238) phob2_list_pane

0xe845,	// (0x00024240) scroll_pane_cp034

0xe84d,	// (0x00024248) phob2_cc_data_pane_ParamLimits

0xe84d,	// (0x00024248) phob2_cc_data_pane

0xe867,	// (0x00024262) phob2_cc_listscroll_pane_ParamLimits

0xe867,	// (0x00024262) phob2_cc_listscroll_pane

0xe3f0,	// (0x00023deb) list_double_large_graphic_phob2_pane_ParamLimits

0xe3f0,	// (0x00023deb) list_double_large_graphic_phob2_pane

0xe881,	// (0x0002427c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe881,	// (0x0002427c) list_double_large_graphic_phob2_pane_g1

0xe88e,	// (0x00024289) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xe88e,	// (0x00024289) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe4c,	// (0x00025847) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe4c,	// (0x00025847) list_double_large_graphic_phob2_pane_g

0xe8b4,	// (0x000242af) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xe8b4,	// (0x000242af) list_double_large_graphic_phob2_pane_t1

0xe8c9,	// (0x000242c4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xe8c9,	// (0x000242c4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe55,	// (0x00025850) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe55,	// (0x00025850) list_double_large_graphic_phob2_pane_t

0x070a,	// (0x00016105) list_highlight_pane_cp024

0xe8de,	// (0x000242d9) phob2_cc_button_pane

0xe8e6,	// (0x000242e1) phob2_cc_data_pane_g1_ParamLimits

0xe8e6,	// (0x000242e1) phob2_cc_data_pane_g1

0xe8f5,	// (0x000242f0) phob2_cc_data_pane_g2_ParamLimits

0xe8f5,	// (0x000242f0) phob2_cc_data_pane_g2

0x0001,

0xfe5a,	// (0x00025855) phob2_cc_data_pane_g_ParamLimits

0xfe5a,	// (0x00025855) phob2_cc_data_pane_g

0xe904,	// (0x000242ff) phob2_cc_data_pane_t1_ParamLimits

0xe904,	// (0x000242ff) phob2_cc_data_pane_t1

0xe919,	// (0x00024314) phob2_cc_data_pane_t2_ParamLimits

0xe919,	// (0x00024314) phob2_cc_data_pane_t2

0xe92e,	// (0x00024329) phob2_cc_data_pane_t3_ParamLimits

0xe92e,	// (0x00024329) phob2_cc_data_pane_t3

0x0002,

0xfe5f,	// (0x0002585a) phob2_cc_data_pane_t_ParamLimits

0xfe5f,	// (0x0002585a) phob2_cc_data_pane_t

0xe943,	// (0x0002433e) phob2_cc_list_pane_ParamLimits

0xe943,	// (0x0002433e) phob2_cc_list_pane

0x455c,	// (0x00019f57) scroll_pane_cp035_ParamLimits

0x455c,	// (0x00019f57) scroll_pane_cp035

0x0779,	// (0x00016174) bg_button_pane_cp033

0xe94f,	// (0x0002434a) phob2_cc_button_pane_g1

0xe95b,	// (0x00024356) phob2_cc_button_pane_t1

0xe970,	// (0x0002436b) phob2_cc_button_pane_t2

0x0001,

0xfe66,	// (0x00025861) phob2_cc_button_pane_t

0xe982,	// (0x0002437d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe982,	// (0x0002437d) list_double_large_graphic_phob2_cc_pane

0xe9f6,	// (0x000243f1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe9f6,	// (0x000243f1) list_double_large_graphic_phob2_cc_pane_g1

0xea07,	// (0x00024402) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xea07,	// (0x00024402) list_double_large_graphic_phob2_cc_pane_g2

0xea13,	// (0x0002440e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xea13,	// (0x0002440e) list_double_large_graphic_phob2_cc_pane_g3

0xea1f,	// (0x0002441a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xea1f,	// (0x0002441a) list_double_large_graphic_phob2_cc_pane_g4

0xea2b,	// (0x00024426) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xea2b,	// (0x00024426) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe6b,	// (0x00025866) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe6b,	// (0x00025866) list_double_large_graphic_phob2_cc_pane_g

0xea37,	// (0x00024432) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xea37,	// (0x00024432) list_double_large_graphic_phob2_cc_pane_t1

0xea60,	// (0x0002445b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xea60,	// (0x0002445b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe76,	// (0x00025871) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe76,	// (0x00025871) list_double_large_graphic_phob2_cc_pane_t

0xea89,	// (0x00024484) list_highlight_pane_cp025_ParamLimits

0xea89,	// (0x00024484) list_highlight_pane_cp025

0x0779,	// (0x00016174) bg_button_pane_cp033_ParamLimits

0xe94f,	// (0x0002434a) phob2_cc_button_pane_g1_ParamLimits

0xe95b,	// (0x00024356) phob2_cc_button_pane_t1_ParamLimits

0xe970,	// (0x0002436b) phob2_cc_button_pane_t2_ParamLimits

0xfe66,	// (0x00025861) phob2_cc_button_pane_t_ParamLimits

0x85ad,	// (0x0001dfa8) popup_wgtman_window

0x4311,	// (0x00019d0c) scroll_pane_cp038

0xe379,	// (0x00023d74) wgtman_btn_pane_cp_01_ParamLimits

0xe379,	// (0x00023d74) wgtman_btn_pane_cp_01

0xea97,	// (0x00024492) wgtman_content_pane

0xeaa0,	// (0x0002449b) wgtman_heading_pane

0x070a,	// (0x00016105) bg_heading_pane_cp02

0xeaa9,	// (0x000244a4) wgtman_heading_pane_g1

0xeab1,	// (0x000244ac) wgtman_heading_pane_t1

0xeabf,	// (0x000244ba) scroll_pane_cp036

0xeac7,	// (0x000244c2) wgtman_list_pane

0xeacf,	// (0x000244ca) wgtman_list_pane_t1_ParamLimits

0xeacf,	// (0x000244ca) wgtman_list_pane_t1

0x7d5b,	// (0x0001d756) cam4_grid_pane

0xc501,	// (0x00021efc) bg_button_pane_cp015_ParamLimits

0xc513,	// (0x00021f0e) bg_button_pane_cp016_ParamLimits

0xc526,	// (0x00021f21) bg_button_pane_cp017_ParamLimits

0xc57e,	// (0x00021f79) popup_vitu2_query_window_g3_ParamLimits

0xc57e,	// (0x00021f79) popup_vitu2_query_window_g3

0xc63b,	// (0x00022036) popup_vitu2_query_window_t6_ParamLimits

0xc63b,	// (0x00022036) popup_vitu2_query_window_t6

0xc666,	// (0x00022061) popup_vitu2_query_window_t7_ParamLimits

0xc666,	// (0x00022061) popup_vitu2_query_window_t7

0xeaea,	// (0x000244e5) cam4_grid_pane_g1

0xeaf3,	// (0x000244ee) cam4_grid_pane_g2

0xeafc,	// (0x000244f7) cam4_grid_pane_g3

0xeb05,	// (0x00024500) cam4_grid_pane_g4

0x0003,

0xfe7b,	// (0x00025876) cam4_grid_pane_g

0x8e03,	// (0x0001e7fe) aid_placing_vt_slider_lsc_ParamLimits

0x9143,	// (0x0001eb3e) vidtel_button_pane_ParamLimits

0x9143,	// (0x0001eb3e) vidtel_button_pane

0x070a,	// (0x00016105) bg_button_pane_cp034

0xeb10,	// (0x0002450b) vidtel_button_pane_g1

0xeb18,	// (0x00024513) vidtel_button_pane_t1

0x4467,	// (0x00019e62) aid_size_vtel_slider_touch

0x455c,	// (0x00019f57) scroll_pane_cp039

0xd238,	// (0x00022c33) ncim_query_button_pane_cp01_ParamLimits

0xd257,	// (0x00022c52) ncimui_query_pane_g1_ParamLimits

0x0779,	// (0x00016174) input_focus_pane_cp012_ParamLimits

0x4ef5,	// (0x0001a8f0) ncim_query_entry_pane_t1_ParamLimits

0x455c,	// (0x00019f57) scroll_pane_cp039_ParamLimits

0x1ab0,	// (0x000174ab) navi_pane_bcale_mc_g1

0x1ab8,	// (0x000174b3) navi_pane_bcale_mc_t1

0x547d,	// (0x0001ae78) main_sp_fs_email_pane_g1

0x5489,	// (0x0001ae84) main_sp_fs_email_pane_g2

0x0001,

0xfc7e,	// (0x00025679) main_sp_fs_email_pane_g

0x5928,	// (0x0001b323) list_single_cale_mrui_row_pane_g3_ParamLimits

0x5928,	// (0x0001b323) list_single_cale_mrui_row_pane_g3

0xdff1,	// (0x000239ec) list_single_recal_day_pane_g5_event_pane

0x5b07,	// (0x0001b502) list_single_recal_day_pane_g7

0xeb2e,	// (0x00024529) list_recal_day_event_pane_cp01

0xeb37,	// (0x00024532) list_recal_vselct_arw_lo_pane_cp01

0xeb3f,	// (0x0002453a) list_recal_vselct_arw_up_pane_cp01

0xeb47,	// (0x00024542) list_recal_vselct_pane_cp01

0x44b3,	// (0x00019eae) list_recal_day_event_pane_cp01_g1

0xeb51,	// (0x0002454c) list_recal_day_event_pane_cp01_t1

0x5b0f,	// (0x0001b50a) list_single_recal_day_pane_t1_ParamLimits

0x5b21,	// (0x0001b51c) list_single_recal_day_pane_t2_ParamLimits

0xfd5e,	// (0x00025759) list_single_recal_day_pane_t_ParamLimits

0x0df5,	// (0x000167f0) bg_notes_pane_ParamLimits

0x0ec8,	// (0x000168c3) list_notes_pane_ParamLimits

0x86db,	// (0x0001e0d6) scroll_pane_cp06_ParamLimits

0x0f04,	// (0x000168ff) main_notes_pane_ParamLimits

0x0779,	// (0x00016174) main_welc_pane

0xeb76,	// (0x00024571) main_welc_body_pane_ParamLimits

0xeb76,	// (0x00024571) main_welc_body_pane

0xeb8f,	// (0x0002458a) main_welc_opti_pane_ParamLimits

0xeb8f,	// (0x0002458a) main_welc_opti_pane

0xebea,	// (0x000245e5) main_welc_pane_t1_ParamLimits

0xebea,	// (0x000245e5) main_welc_pane_t1

0xed00,	// (0x000246fb) main_welc_body_row_pane_ParamLimits

0xed00,	// (0x000246fb) main_welc_body_row_pane

0x0e62,	// (0x0001685d) main_welc_opti_row_pane_ParamLimits

0x0e62,	// (0x0001685d) main_welc_opti_row_pane

0xed29,	// (0x00024724) main_welc_opti_row_pane_g1

0xed31,	// (0x0002472c) main_welc_opti_row_pane_t1

0xed40,	// (0x0002473b) main_welc_body_row_pane_t1

0x5d7d,	// (0x0001b778) popup_notif_wgt_heading_pane

0x5d97,	// (0x0001b792) aid_size_list_notif_wgt_del_ParamLimits

0x5da4,	// (0x0001b79f) list_notif_wgt_row_pane_g1_ParamLimits

0x5db0,	// (0x0001b7ab) list_notif_wgt_row_pane_g2_ParamLimits

0x5dbf,	// (0x0001b7ba) list_notif_wgt_row_pane_g3_ParamLimits

0xfdc5,	// (0x000257c0) list_notif_wgt_row_pane_g_ParamLimits

0x5dcc,	// (0x0001b7c7) list_notif_wgt_row_pane_t1_ParamLimits

0x5de2,	// (0x0001b7dd) list_notif_wgt_row_pane_t2_ParamLimits

0x5df4,	// (0x0001b7ef) list_notif_wgt_row_pane_t3_ParamLimits

0xfdcc,	// (0x000257c7) list_notif_wgt_row_pane_t_ParamLimits

0xe40c,	// (0x00023e07) listrow_wgtman_pane_g1_ParamLimits

0xe419,	// (0x00023e14) listrow_wgtman_pane_g2_ParamLimits

0xfdfc,	// (0x000257f7) listrow_wgtman_pane_g_ParamLimits

0xe437,	// (0x00023e32) listrow_wgtman_pane_t1_ParamLimits

0xe44f,	// (0x00023e4a) listrow_wgtman_pane_t2_ParamLimits

0xfe01,	// (0x000257fc) listrow_wgtman_pane_t_ParamLimits

0xe475,	// (0x00023e70) wait_bar_pane_cp09_ParamLimits

0x070a,	// (0x00016105) bg_popup_heading_pane_cp02

0xed4f,	// (0x0002474a) popup_notif_wgt_heading_pane_g1

0xed57,	// (0x00024752) popup_notif_wgt_heading_pane_t1

0x070a,	// (0x00016105) main_vids_pane

0x070a,	// (0x00016105) vids_listscroll_pane

0xed65,	// (0x00024760) scroll_pane_cp040

0x070a,	// (0x00016105) vids_list_pane

0xed70,	// (0x0002476b) vids_list_double_pane_ParamLimits

0xed70,	// (0x0002476b) vids_list_double_pane

0xed88,	// (0x00024783) vids_list_double_pane_g1

0xed91,	// (0x0002478c) vids_list_double_pane_t1

0xeda1,	// (0x0002479c) vids_list_double_pane_t2

0x0001,

0xfe9a,	// (0x00025895) vids_list_double_pane_t

0x7484,	// (0x0001ce7f) main_ncimui_pane_ParamLimits

0xd08f,	// (0x00022a8a) main_ncimui_pane_g1_ParamLimits

0xd09b,	// (0x00022a96) main_ncimui_pane_g2_ParamLimits

0xd09b,	// (0x00022a96) main_ncimui_pane_g2

0x0001,

0xfb7f,	// (0x0002557a) main_ncimui_pane_g_ParamLimits

0xfb7f,	// (0x0002557a) main_ncimui_pane_g

0xeba8,	// (0x000245a3) main_welc_pane_g1_ParamLimits

0xeba8,	// (0x000245a3) main_welc_pane_g1

0xebb4,	// (0x000245af) main_welc_pane_g2_ParamLimits

0xebb4,	// (0x000245af) main_welc_pane_g2

0x0003,

0xfe84,	// (0x0002587f) main_welc_pane_g_ParamLimits

0xfe84,	// (0x0002587f) main_welc_pane_g

0x0df5,	// (0x000167f0) listscroll_mce_pane_ParamLimits

0x1c05,	// (0x00017600) wait_bar_pane_cp10

0x2fec,	// (0x000189e7) main_cale_day_pane_ParamLimits

0x2fec,	// (0x000189e7) main_cale_week_pane_ParamLimits

0x0df5,	// (0x000167f0) main_messa_pane_ParamLimits

0xb834,	// (0x0002122f) main_clock2_btn_pane_ParamLimits

0xb834,	// (0x0002122f) main_clock2_btn_pane

0x38eb,	// (0x000192e6) main_clock2_btn_pane_cp01_ParamLimits

0x38eb,	// (0x000192e6) main_clock2_btn_pane_cp01

0x58b4,	// (0x0001b2af) list_cale_mrui_pane_ParamLimits

0x5e2a,	// (0x0001b825) main_cf0_pane_g2

0x0001,

0xfdd3,	// (0x000257ce) main_cf0_pane_g

0xe61c,	// (0x00024017) area_left_week_number_pane_ParamLimits

0xe62f,	// (0x0002402a) area_top_day_name_pane_ParamLimits

0xe63d,	// (0x00024038) frame_month_view_pane_ParamLimits

0x5f52,	// (0x0001b94d) grid_month_view_pane_ParamLimits

0xe6bb,	// (0x000240b6) frm_month_g1_ParamLimits

0xe6c8,	// (0x000240c3) frm_month_g2_ParamLimits

0xe6d9,	// (0x000240d4) frm_month_g3_ParamLimits

0xe6ea,	// (0x000240e5) frm_month_g4_ParamLimits

0xe6fb,	// (0x000240f6) frm_month_g5_ParamLimits

0xe70e,	// (0x00024109) frm_month_g6_ParamLimits

0xe721,	// (0x0002411c) frm_month_g7_ParamLimits

0xe734,	// (0x0002412f) frm_month_g8_ParamLimits

0xe741,	// (0x0002413c) frm_month_g9_ParamLimits

0xe74e,	// (0x00024149) frm_month_g10_ParamLimits

0xe75b,	// (0x00024156) frm_month_g11_ParamLimits

0xe768,	// (0x00024163) frm_month_g12_ParamLimits

0xe775,	// (0x00024170) frm_month_g13_ParamLimits

0xe782,	// (0x0002417d) frm_month_g14_ParamLimits

0xe791,	// (0x0002418c) frm_month_g15_ParamLimits

0xe7a0,	// (0x0002419b) frm_month_g16_ParamLimits

0xfe2b,	// (0x00025826) frm_month_g_ParamLimits

0xe7af,	// (0x000241aa) cell_top_day_name_pane_t1_ParamLimits

0xe7c2,	// (0x000241bd) cell_area_left_week_number_pane_g1_ParamLimits

0xe7d1,	// (0x000241cc) cell_area_left_week_number_pane_t1_ParamLimits

0x0e70,	// (0x0001686b) cell_month_view_pane_g1_ParamLimits

0xe7e7,	// (0x000241e2) cell_month_view_pane_t1_ParamLimits

0x0ded,	// (0x000167e8) main_clock2_btn_pane_g1

0xedaf,	// (0x000247aa) main_clock2_btn_pane_t1

0x0779,	// (0x00016174) listscroll_cmail_pane_ParamLimits

0x547d,	// (0x0001ae78) main_sp_fs_email_pane_g1_ParamLimits

0x5489,	// (0x0001ae84) main_sp_fs_email_pane_g2_ParamLimits

0xfc7e,	// (0x00025679) main_sp_fs_email_pane_g_ParamLimits

0x5a77,	// (0x0001b472) list_recal_day_pane_ParamLimits

0x5a88,	// (0x0001b483) mian_recal_day_pane_t1

0xd9d3,	// (0x000233ce) list_single_dyc_row_text_pane_t4_ParamLimits

0xd9d3,	// (0x000233ce) list_single_dyc_row_text_pane_t4

0xda0a,	// (0x00023405) list_single_dyc_row_text_pane_t5_ParamLimits

0xda0a,	// (0x00023405) list_single_dyc_row_text_pane_t5

0x552b,	// (0x0001af26) list_single_dyc_row_text_pane_t6_ParamLimits

0x552b,	// (0x0001af26) list_single_dyc_row_text_pane_t6

0x9f62,	// (0x0001f95d) aid_mgn_list_cale_time_pane

0x7484,	// (0x0001ce7f) main_gallery2_pane_ParamLimits

0x3901,	// (0x000192fc) main_clock2_pane_cp01_t1

0x390f,	// (0x0001930a) main_clock2_pane_cp01_t3

0x0001,

0xf764,	// (0x0002515f) main_clock2_pane_cp01_t

0x8a05,	// (0x0001e400) cale_week_scroll_pane_g16_ParamLimits

0x8a05,	// (0x0001e400) cale_week_scroll_pane_g16

0x1139,	// (0x00016b34) vorec_slider_pane

0xeb18,	// (0x00024513) vidtel_button_pane_t1_ParamLimits

0xe04c,	// (0x00023a47) main_fs_bigclock_clock_pane_g1_ParamLimits

0xe04c,	// (0x00023a47) main_fs_bigclock_clock_pane_g2_ParamLimits

0xe059,	// (0x00023a54) main_fs_bigclock_clock_pane_g3_ParamLimits

0xe059,	// (0x00023a54) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd81,	// (0x0002577c) main_fs_bigclock_clock_pane_g_ParamLimits

0xe065,	// (0x00023a60) main_fs_bigclock_clock_pane_t1_ParamLimits

0xe078,	// (0x00023a73) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd8a,	// (0x00025785) main_fs_bigclock_clock_pane_t_ParamLimits

0xb1d9,	// (0x00020bd4) main_mup3_lyrics_pane_ParamLimits

0xb1d9,	// (0x00020bd4) main_mup3_lyrics_pane

0xedbd,	// (0x000247b8) main_mup3_lyrics_pane_t1_ParamLimits

0xedbd,	// (0x000247b8) main_mup3_lyrics_pane_t1

0x7831,	// (0x0001d22c) aid_main_mp4_pane_t1_area

0x783b,	// (0x0001d236) aid_main_mp4_pane_t2_area

0x793a,	// (0x0001d335) main_mp4_pane_g7_ParamLimits

0x793a,	// (0x0001d335) main_mp4_pane_g7

0x7946,	// (0x0001d341) main_mp4_pane_g8_ParamLimits

0x7946,	// (0x0001d341) main_mp4_pane_g8

0xbc97,	// (0x00021692) aid_call6_pane_g1_size

0xe9c8,	// (0x000243c3) list_double_large_graphic_phob2_other_pane_ParamLimits

0xe9c8,	// (0x000243c3) list_double_large_graphic_phob2_other_pane

0x151a,	// (0x00016f15) list_double_large_graphic_phob2_other_pane_g1

0x070a,	// (0x00016105) list_highlight_pane_cp026

0x0779,	// (0x00016174) main_welc_pane_ParamLimits

0xd84c,	// (0x00023247) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xd84c,	// (0x00023247) main_sp_fs_ctrlbar_pane_g3

0xd864,	// (0x0002325f) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xd864,	// (0x0002325f) main_sp_fs_ctrlbar_pane_g4

0xd896,	// (0x00023291) toolbar2_fixed_button_pane_cp01

0xd8a1,	// (0x0002329c) toolbar2_fixed_button_pane_cp02

0xd8ac,	// (0x000232a7) toolbar2_fixed_button_pane_cp03

0xeb5f,	// (0x0002455a) list_welc_entry_pane_ParamLimits

0xeb5f,	// (0x0002455a) list_welc_entry_pane

0xebc2,	// (0x000245bd) main_welc_pane_g3_ParamLimits

0xebc2,	// (0x000245bd) main_welc_pane_g3

0xec04,	// (0x000245ff) main_welc_pane_t2_ParamLimits

0xec04,	// (0x000245ff) main_welc_pane_t2

0xec18,	// (0x00024613) main_welc_pane_t3_ParamLimits

0xec18,	// (0x00024613) main_welc_pane_t3

0x0005,

0xfe8d,	// (0x00025888) main_welc_pane_t_ParamLimits

0xfe8d,	// (0x00025888) main_welc_pane_t

0xeca2,	// (0x0002469d) welc_button_pane_ParamLimits

0xeca2,	// (0x0002469d) welc_button_pane

0xecf2,	// (0x000246ed) welc_service_logo_pane_ParamLimits

0xecf2,	// (0x000246ed) welc_service_logo_pane

0xedf3,	// (0x000247ee) list_single_welc_entry_pane_ParamLimits

0xedf3,	// (0x000247ee) list_single_welc_entry_pane

0xee04,	// (0x000247ff) list_single_welc_entry_pane_g1

0xee0c,	// (0x00024807) list_single_welc_entry_pane_t1

0xee1a,	// (0x00024815) list_single_welc_entry_pane_t2

0x0001,

0xfe9f,	// (0x0002589a) list_single_welc_entry_pane_t

0x070a,	// (0x00016105) bg_button_pane_cp035

0xee28,	// (0x00024823) welc_button_pane_t1

0xee36,	// (0x00024831) welc_service_logo_pane_g1

0xee3f,	// (0x0002483a) welc_service_logo_pane_g2

0x0001,

0xfea4,	// (0x0002589f) welc_service_logo_pane_g

0x702e,	// (0x0001ca29) main_int_radio_pane

0x4d93,	// (0x0001a78e) list_single_fs_dyc_pane_g1

0xe89a,	// (0x00024295) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xe89a,	// (0x00024295) list_double_large_graphic_phob2_pane_g3

0xe8a6,	// (0x000242a1) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xe8a6,	// (0x000242a1) list_double_large_graphic_phob2_pane_g4

0xee48,	// (0x00024843) main_int_radio1_pane_ParamLimits

0xee48,	// (0x00024843) main_int_radio1_pane

0xee5a,	// (0x00024855) find_pane_cp02

0xee63,	// (0x0002485e) input_focus_pane_cp12_ParamLimits

0xee63,	// (0x0002485e) input_focus_pane_cp12

0xee6f,	// (0x0002486a) input_focus_pane_cp13_ParamLimits

0xee6f,	// (0x0002486a) input_focus_pane_cp13

0xee87,	// (0x00024882) input_focus_pane_cp14_ParamLimits

0xee87,	// (0x00024882) input_focus_pane_cp14

0xee9f,	// (0x0002489a) int_radio1_listscroll_pane

0xeea9,	// (0x000248a4) main_int_radio1_pane_g1_ParamLimits

0xeea9,	// (0x000248a4) main_int_radio1_pane_g1

0xeeb9,	// (0x000248b4) main_int_radio1_pane_t1_ParamLimits

0xeeb9,	// (0x000248b4) main_int_radio1_pane_t1

0xeecd,	// (0x000248c8) main_int_radio1_pane_t2_ParamLimits

0xeecd,	// (0x000248c8) main_int_radio1_pane_t2

0xeee1,	// (0x000248dc) main_int_radio1_pane_t3_ParamLimits

0xeee1,	// (0x000248dc) main_int_radio1_pane_t3

0xeef5,	// (0x000248f0) main_int_radio1_pane_t4_ParamLimits

0xeef5,	// (0x000248f0) main_int_radio1_pane_t4

0xef0c,	// (0x00024907) main_int_radio1_pane_t5_ParamLimits

0xef0c,	// (0x00024907) main_int_radio1_pane_t5

0xef1e,	// (0x00024919) main_int_radio1_pane_t6_ParamLimits

0xef1e,	// (0x00024919) main_int_radio1_pane_t6

0xef30,	// (0x0002492b) main_int_radio1_pane_t7_ParamLimits

0xef30,	// (0x0002492b) main_int_radio1_pane_t7

0xef42,	// (0x0002493d) main_int_radio1_pane_t8_ParamLimits

0xef42,	// (0x0002493d) main_int_radio1_pane_t8

0xef56,	// (0x00024951) main_int_radio1_pane_t9_ParamLimits

0xef56,	// (0x00024951) main_int_radio1_pane_t9

0xef68,	// (0x00024963) main_int_radio1_pane_t10_ParamLimits

0xef68,	// (0x00024963) main_int_radio1_pane_t10

0xef99,	// (0x00024994) main_int_radio1_pane_t11_ParamLimits

0xef99,	// (0x00024994) main_int_radio1_pane_t11

0xefca,	// (0x000249c5) main_int_radio1_pane_t12_ParamLimits

0xefca,	// (0x000249c5) main_int_radio1_pane_t12

0x000b,

0xfea9,	// (0x000258a4) main_int_radio1_pane_t_ParamLimits

0xfea9,	// (0x000258a4) main_int_radio1_pane_t

0xefe1,	// (0x000249dc) int_radio_list_pane

0xe845,	// (0x00024240) scroll_pane_cp037

0xefe9,	// (0x000249e4) list_double_large_graphic_int_radio_pane_ParamLimits

0xefe9,	// (0x000249e4) list_double_large_graphic_int_radio_pane

0xf002,	// (0x000249fd) list_double_large_graphic_int_radio_pane_g1

0xf00b,	// (0x00024a06) list_double_large_graphic_int_radio_pane_t1

0xf019,	// (0x00024a14) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfec2,	// (0x000258bd) list_double_large_graphic_int_radio_pane_t

0x070a,	// (0x00016105) list_highlight_pane_cp027

0xeb6e,	// (0x00024569) main_button_pane_4

0xebce,	// (0x000245c9) main_welc_pane_g4_ParamLimits

0xebce,	// (0x000245c9) main_welc_pane_g4

0xec2a,	// (0x00024625) main_welc_pane_t4_ParamLimits

0xec2a,	// (0x00024625) main_welc_pane_t4

0xec3c,	// (0x00024637) main_welc_pane_t5_ParamLimits

0xec3c,	// (0x00024637) main_welc_pane_t5

0xec6e,	// (0x00024669) main_welc_pane_t6_ParamLimits

0xec6e,	// (0x00024669) main_welc_pane_t6

0xecb0,	// (0x000246ab) welc_button_pane_2_ParamLimits

0xecb0,	// (0x000246ab) welc_button_pane_2

0xecc8,	// (0x000246c3) welc_button_pane_3_ParamLimits

0xecc8,	// (0x000246c3) welc_button_pane_3

0xeb6e,	// (0x00024569) welc_button_pane_4

0xece2,	// (0x000246dd) welc_button_pane_5_ParamLimits

0xece2,	// (0x000246dd) welc_button_pane_5

0x74a0,	// (0x0001ce9b) main_popup_welc_pane

0xf027,	// (0x00024a22) main_welc_sk_g3

0xf031,	// (0x00024a2c) main_welc_sk_g4

0xf03b,	// (0x00024a36) main_welc_sk_t3

0xf04b,	// (0x00024a46) main_welc_sk_t4

0xf05b,	// (0x00024a56) popup_welc_pane_t4

0xf069,	// (0x00024a64) popup_welc_pane_t5

0xf077,	// (0x00024a72) popup_welc_pane_t6
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
