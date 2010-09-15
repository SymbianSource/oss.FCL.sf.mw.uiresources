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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000a241e };

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
0x05ea,	// (0x000a2a08) Screen

0x05f6,	// (0x000a2a14) application_window

0x065e,	// (0x000a2a7c) area_bottom_pane_ParamLimits

0x065e,	// (0x000a2a7c) area_bottom_pane

0x06ba,	// (0x000a2ad8) area_top_pane_ParamLimits

0x06ba,	// (0x000a2ad8) area_top_pane

0x902a,	// (0x000ab448) call_video_uplink_pane_ParamLimits

0x902a,	// (0x000ab448) call_video_uplink_pane

0x0748,	// (0x000a2b66) main_pane_ParamLimits

0x0748,	// (0x000a2b66) main_pane

0xbff9,	// (0x000ae417) context_pane

0x33d8,	// (0x000a57f6) navi_pane

0x340a,	// (0x000a5828) popup_cale_events_window_ParamLimits

0x340a,	// (0x000a5828) popup_cale_events_window

0xc00c,	// (0x000ae42a) popup_mup_playback_window

0x3422,	// (0x000a5840) signal_pane

0x9ed1,	// (0x000ac2ef) main_browser_pane

0xa083,	// (0x000ac4a1) main_burst_pane

0x312e,	// (0x000a554c) main_calc_pane

0xbfed,	// (0x000ae40b) main_cale_day_pane

0x3142,	// (0x000a5560) main_cale_month_pane

0xbfed,	// (0x000ae40b) main_cale_week_pane

0xa083,	// (0x000ac4a1) main_call_pane

0x9b89,	// (0x000abfa7) main_call_poc_pane

0xa083,	// (0x000ac4a1) main_camera_pane

0xa083,	// (0x000ac4a1) main_chi_dic_pane

0xa883,	// (0x000acca1) main_clock_pane

0x9b89,	// (0x000abfa7) main_fmradio_pane

0xa083,	// (0x000ac4a1) main_graph_messa_pane

0x9b89,	// (0x000abfa7) main_help_pane

0x9ed1,	// (0x000ac2ef) main_im_pane

0x9de4,	// (0x000ac202) main_image_pane_ParamLimits

0x9de4,	// (0x000ac202) main_image_pane

0x9b89,	// (0x000abfa7) main_location2_pane

0xa083,	// (0x000ac4a1) main_location_pane

0x9de4,	// (0x000ac202) main_messa_pane

0x9b89,	// (0x000abfa7) main_mp2_pane

0xa083,	// (0x000ac4a1) main_mp_pane

0x9b89,	// (0x000abfa7) main_msg_pane

0x9b89,	// (0x000abfa7) main_mup_eq_pane

0x9b89,	// (0x000abfa7) main_mup_pane

0x9ed1,	// (0x000ac2ef) main_notes_pane

0x9b89,	// (0x000abfa7) main_pec_pane

0x9b89,	// (0x000abfa7) main_phob_pane

0x9b89,	// (0x000abfa7) main_pinb_pane

0x9b89,	// (0x000abfa7) main_postcard_pane

0x9b89,	// (0x000abfa7) main_qdial_pane

0xa083,	// (0x000ac4a1) main_skin_pane

0x9b89,	// (0x000abfa7) main_smil2_pane

0xa083,	// (0x000ac4a1) main_smil_pane

0xa083,	// (0x000ac4a1) main_video_pane

0xa083,	// (0x000ac4a1) main_video_tele_pane

0x9de4,	// (0x000ac202) main_viewer_pane_ParamLimits

0x9de4,	// (0x000ac202) main_viewer_pane

0xa083,	// (0x000ac4a1) main_vorec_pane

0x3194,	// (0x000a55b2) popup_blid_sat_info_window_ParamLimits

0x3194,	// (0x000a55b2) popup_blid_sat_info_window

0x31ec,	// (0x000a560a) popup_dyc_status_message_window_ParamLimits

0x31ec,	// (0x000a560a) popup_dyc_status_message_window

0x3204,	// (0x000a5622) popup_grid_large_graphic_window_ParamLimits

0x3204,	// (0x000a5622) popup_grid_large_graphic_window

0x32b4,	// (0x000a56d2) popup_loc_request_window_ParamLimits

0x32b4,	// (0x000a56d2) popup_loc_request_window

0x33b0,	// (0x000a57ce) popup_wml_address_window_ParamLimits

0x33b0,	// (0x000a57ce) popup_wml_address_window

0x2f68,	// (0x000a5386) call_muted_g1

0x2bdb,	// (0x000a4ff9) popup_call_audio_conf_window_ParamLimits

0x2bdb,	// (0x000a4ff9) popup_call_audio_conf_window

0x2f7c,	// (0x000a539a) popup_call_audio_first_window_ParamLimits

0x2f7c,	// (0x000a539a) popup_call_audio_first_window

0x2ff2,	// (0x000a5410) popup_call_audio_in_window_ParamLimits

0x2ff2,	// (0x000a5410) popup_call_audio_in_window

0x302e,	// (0x000a544c) popup_call_audio_out_window_ParamLimits

0x302e,	// (0x000a544c) popup_call_audio_out_window

0x3068,	// (0x000a5486) popup_call_audio_second_window_ParamLimits

0x3068,	// (0x000a5486) popup_call_audio_second_window

0x30be,	// (0x000a54dc) popup_call_audio_wait_window_ParamLimits

0x30be,	// (0x000a54dc) popup_call_audio_wait_window

0x30f3,	// (0x000a5511) popup_number_entry_window_ParamLimits

0x30f3,	// (0x000a5511) popup_number_entry_window

0xe693,	// (0x000b0ab1) bg_popup_call_pane_cp05_ParamLimits

0xe693,	// (0x000b0ab1) bg_popup_call_pane_cp05

0xe6b3,	// (0x000b0ad1) popup_number_entry_window_t1

0xe6c6,	// (0x000b0ae4) popup_number_entry_window_t2

0xe6d8,	// (0x000b0af6) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x000b1463) popup_number_entry_window_t

0x9060,	// (0x000ab47e) text_title_cp2

0x9073,	// (0x000ab491) bg_popup_call_pane_cp_ParamLimits

0x9073,	// (0x000ab491) bg_popup_call_pane_cp

0x9081,	// (0x000ab49f) call_thumbnail_pane

0x9089,	// (0x000ab4a7) popup_call_audio_in_window_g1_ParamLimits

0x9089,	// (0x000ab4a7) popup_call_audio_in_window_g1

0x9095,	// (0x000ab4b3) popup_call_audio_in_window_g2_ParamLimits

0x9095,	// (0x000ab4b3) popup_call_audio_in_window_g2

0x90a1,	// (0x000ab4bf) popup_call_audio_in_window_g3_ParamLimits

0x90a1,	// (0x000ab4bf) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x000b146c) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x000b146c) popup_call_audio_in_window_g

0x90ad,	// (0x000ab4cb) popup_call_audio_in_window_t1_ParamLimits

0x90ad,	// (0x000ab4cb) popup_call_audio_in_window_t1

0x90c9,	// (0x000ab4e7) popup_call_audio_in_window_t2_ParamLimits

0x90c9,	// (0x000ab4e7) popup_call_audio_in_window_t2

0x90e5,	// (0x000ab503) popup_call_audio_in_window_t3_ParamLimits

0x90e5,	// (0x000ab503) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x000b1473) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x000b1473) popup_call_audio_in_window_t

0x9073,	// (0x000ab491) bg_popup_call_pane_cp01_ParamLimits

0x9073,	// (0x000ab491) bg_popup_call_pane_cp01

0x9081,	// (0x000ab49f) call_thumbnail_pane_cp02

0x90f8,	// (0x000ab516) call_type_pane_cp022

0x9100,	// (0x000ab51e) popup_call_audio_out_window_g1_ParamLimits

0x9100,	// (0x000ab51e) popup_call_audio_out_window_g1

0x9112,	// (0x000ab530) popup_call_audio_out_window_g2_ParamLimits

0x9112,	// (0x000ab530) popup_call_audio_out_window_g2

0x911e,	// (0x000ab53c) popup_call_audio_out_window_g3_ParamLimits

0x911e,	// (0x000ab53c) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x000b147a) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x000b147a) popup_call_audio_out_window_g

0x9130,	// (0x000ab54e) popup_call_audio_out_window_t1_ParamLimits

0x9130,	// (0x000ab54e) popup_call_audio_out_window_t1

0x9148,	// (0x000ab566) popup_call_audio_out_window_t2_ParamLimits

0x9148,	// (0x000ab566) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x000b1481) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x000b1481) popup_call_audio_out_window_t

0x915d,	// (0x000ab57b) bg_popup_call_pane_ParamLimits

0x915d,	// (0x000ab57b) bg_popup_call_pane

0x0904,	// (0x000a2d22) call_thumbnail_pane_cp_ParamLimits

0x0904,	// (0x000a2d22) call_thumbnail_pane_cp

0x91e1,	// (0x000ab5ff) call_type_pane_cp01_ParamLimits

0x91e1,	// (0x000ab5ff) call_type_pane_cp01

0x9225,	// (0x000ab643) popup_call_audio_first_window_g1_ParamLimits

0x9225,	// (0x000ab643) popup_call_audio_first_window_g1

0x99de,	// (0x000abdfc) popup_call_audio_first_window_g2_ParamLimits

0x99de,	// (0x000abdfc) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x000b1486) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x000b1486) popup_call_audio_first_window_g

0x9a22,	// (0x000abe40) popup_call_audio_first_window_t1_ParamLimits

0x9a22,	// (0x000abe40) popup_call_audio_first_window_t1

0x9ace,	// (0x000abeec) popup_call_audio_first_window_t4_ParamLimits

0x9ace,	// (0x000abeec) popup_call_audio_first_window_t4

0x9b5a,	// (0x000abf78) popup_call_audio_first_window_t5_ParamLimits

0x9b5a,	// (0x000abf78) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x000b148b) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x000b148b) popup_call_audio_first_window_t

0x9b89,	// (0x000abfa7) bg_popup_call_pane_cp02

0x9b93,	// (0x000abfb1) call_type_pane_cp023

0x9b9b,	// (0x000abfb9) popup_call_audio_wait_window_g1

0x9ba3,	// (0x000abfc1) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x000b1492) popup_call_audio_wait_window_g

0x9bab,	// (0x000abfc9) popup_call_audio_wait_window_t3

0x9bb9,	// (0x000abfd7) bg_popup_call_pane_cp03_ParamLimits

0x9bb9,	// (0x000abfd7) bg_popup_call_pane_cp03

0x9c19,	// (0x000ac037) call_thumbnail_pane_cp011_ParamLimits

0x9c19,	// (0x000ac037) call_thumbnail_pane_cp011

0x9c25,	// (0x000ac043) call_type_pane_cp034_ParamLimits

0x9c25,	// (0x000ac043) call_type_pane_cp034

0x9c61,	// (0x000ac07f) popup_call_audio_second_window_g1_ParamLimits

0x9c61,	// (0x000ac07f) popup_call_audio_second_window_g1

0x9c9d,	// (0x000ac0bb) popup_call_audio_second_window_g2_ParamLimits

0x9c9d,	// (0x000ac0bb) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x000b1497) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x000b1497) popup_call_audio_second_window_g

0x9cd9,	// (0x000ac0f7) popup_call_audio_second_window_t1_ParamLimits

0x9cd9,	// (0x000ac0f7) popup_call_audio_second_window_t1

0x9d5a,	// (0x000ac178) popup_call_audio_second_window_t2_ParamLimits

0x9d5a,	// (0x000ac178) popup_call_audio_second_window_t2

0x9d90,	// (0x000ac1ae) popup_call_audio_second_window_t3_ParamLimits

0x9d90,	// (0x000ac1ae) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x000b149c) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x000b149c) popup_call_audio_second_window_t

0x9b89,	// (0x000abfa7) bg_popup_call_pane_cp04

0x9dc6,	// (0x000ac1e4) list_conf_pane

0x9dce,	// (0x000ac1ec) popup_call_audio_conf_window_t1

0x9ddc,	// (0x000ac1fa) call_thumbnail_pane_g1

0x9de4,	// (0x000ac202) bg_pinb_pane_ParamLimits

0x9de4,	// (0x000ac202) bg_pinb_pane

0x9df2,	// (0x000ac210) find_pinb_pane

0x9de4,	// (0x000ac202) listscroll_pinb_pane_ParamLimits

0x9de4,	// (0x000ac202) listscroll_pinb_pane

0x9dfc,	// (0x000ac21a) pinb_bg_pane_g1

0x9dfc,	// (0x000ac21a) pinb_bg_pane_g2

0x9dfc,	// (0x000ac21a) pinb_bg_pane_g3

0x9dfc,	// (0x000ac21a) pinb_bg_pane_g4

0x9dfc,	// (0x000ac21a) pinb_bg_pane_g5

0x9dfc,	// (0x000ac21a) pinb_bg_pane_g6

0x9dfc,	// (0x000ac21a) pinb_bg_pane_g7

0x9dfc,	// (0x000ac21a) pinb_bg_pane_g8

0x9dfc,	// (0x000ac21a) pinb_bg_pane_g9

0x9dfc,	// (0x000ac21a) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x000b14a3) pinb_bg_pane_g

0xe689,	// (0x000b0aa7) grid_pinb_pane

0xe689,	// (0x000b0aa7) list_pinb_pane

0xe6ea,	// (0x000b0b08) scroll_pane_cp01_ParamLimits

0xe6ea,	// (0x000b0b08) scroll_pane_cp01

0x9e06,	// (0x000ac224) find_pinb_pane_g1_ParamLimits

0x9e06,	// (0x000ac224) find_pinb_pane_g1

0x9e1e,	// (0x000ac23c) find_pinb_pane_t1

0x9e30,	// (0x000ac24e) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x000b14bd) find_pinb_pane_t

0x9e45,	// (0x000ac263) input_focus_pane_cp01_ParamLimits

0x9e45,	// (0x000ac263) input_focus_pane_cp01

0x9e51,	// (0x000ac26f) cell_pinb_pane_ParamLimits

0x9e51,	// (0x000ac26f) cell_pinb_pane

0x9e5f,	// (0x000ac27d) cell_pinb_pane_g1_ParamLimits

0x9e5f,	// (0x000ac27d) cell_pinb_pane_g1

0x9e6d,	// (0x000ac28b) cell_pinb_pane_g2_ParamLimits

0x9e6d,	// (0x000ac28b) cell_pinb_pane_g2

0x9e6d,	// (0x000ac28b) cell_pinb_pane_g3_ParamLimits

0x9e6d,	// (0x000ac28b) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x000b14c2) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x000b14c2) cell_pinb_pane_g

0x9b89,	// (0x000abfa7) grid_highlight_pane_cp01

0x9e51,	// (0x000ac26f) list_pinb_item_pane_ParamLimits

0x9e51,	// (0x000ac26f) list_pinb_item_pane

0xe689,	// (0x000b0aa7) list_highlight_pane_cp02

0x9e7b,	// (0x000ac299) list_pinb_item_pane_g1_ParamLimits

0x9e7b,	// (0x000ac299) list_pinb_item_pane_g1

0x9e6d,	// (0x000ac28b) list_pinb_item_pane_g2_ParamLimits

0x9e6d,	// (0x000ac28b) list_pinb_item_pane_g2

0x9e5f,	// (0x000ac27d) list_pinb_item_pane_g3_ParamLimits

0x9e5f,	// (0x000ac27d) list_pinb_item_pane_g3

0x9e6d,	// (0x000ac28b) list_pinb_item_pane_g4_ParamLimits

0x9e6d,	// (0x000ac28b) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x000b14c9) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x000b14c9) list_pinb_item_pane_g

0x9e89,	// (0x000ac2a7) list_pinb_item_pane_t1_ParamLimits

0x9e89,	// (0x000ac2a7) list_pinb_item_pane_t1

0x0946,	// (0x000a2d64) calc_display_pane

0x096b,	// (0x000a2d89) calc_paper_pane

0x098e,	// (0x000a2dac) grid_calc_pane

0x9b89,	// (0x000abfa7) bg_list_pane_cp01

0x09bc,	// (0x000a2dda) clock_g1

0x09c4,	// (0x000a2de2) clock_g2

0x0001,

0xf0b4,	// (0x000b14d2) clock_g

0x09cc,	// (0x000a2dea) clock_t1_ParamLimits

0x09cc,	// (0x000a2dea) clock_t1

0x09e1,	// (0x000a2dff) clock_t2_ParamLimits

0x09e1,	// (0x000a2dff) clock_t2

0x09f3,	// (0x000a2e11) clock_t3_ParamLimits

0x09f3,	// (0x000a2e11) clock_t3

0x0a05,	// (0x000a2e23) clock_t4_ParamLimits

0x0a05,	// (0x000a2e23) clock_t4

0x0a17,	// (0x000a2e35) clock_t5_ParamLimits

0x0a17,	// (0x000a2e35) clock_t5

0x0a2c,	// (0x000a2e4a) clock_t6_ParamLimits

0x0a2c,	// (0x000a2e4a) clock_t6

0x0a3e,	// (0x000a2e5c) clock_t7_ParamLimits

0x0a3e,	// (0x000a2e5c) clock_t7

0x0a50,	// (0x000a2e6e) clock_t8_ParamLimits

0x0a50,	// (0x000a2e6e) clock_t8

0x0a64,	// (0x000a2e82) clock_t9_ParamLimits

0x0a64,	// (0x000a2e82) clock_t9

0x0008,

0xf0b9,	// (0x000b14d7) clock_t_ParamLimits

0xf0b9,	// (0x000b14d7) clock_t

0x9e9d,	// (0x000ac2bb) popup_clock_analogue_window_cp02

0x9e9d,	// (0x000ac2bb) popup_clock_digital_window_cp01

0x9b89,	// (0x000abfa7) listscroll_help_pane

0x9b89,	// (0x000abfa7) phob_pre_status_pane

0x9ea5,	// (0x000ac2c3) grid_qdial_pane

0x9de4,	// (0x000ac202) listscroll_mce_pane

0x9de4,	// (0x000ac202) bg_notes_pane

0x9eaf,	// (0x000ac2cd) list_notes_pane

0x0a78,	// (0x000a2e96) scroll_pane_cp06

0x9ebd,	// (0x000ac2db) bg_calc_paper_pane

0x9279,	// (0x000ab697) list_calc_pane

0x9ed1,	// (0x000ac2ef) bg_calc_display_pane

0x0a8c,	// (0x000a2eaa) calc_display_pane_t1

0x0a9e,	// (0x000a2ebc) calc_display_pane_t2

0x9293,	// (0x000ab6b1) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x000b14ea) calc_display_pane_t

0x0ab0,	// (0x000a2ece) cell_calc_pane_ParamLimits

0x0ab0,	// (0x000a2ece) cell_calc_pane

0x9edd,	// (0x000ac2fb) bg_calc_paper_pane_g1

0x9ee9,	// (0x000ac307) bg_calc_paper_pane_g2

0x9ef5,	// (0x000ac313) bg_calc_paper_pane_g3

0x9f01,	// (0x000ac31f) bg_calc_paper_pane_g4

0x9f0d,	// (0x000ac32b) bg_calc_paper_pane_g5

0x0ae5,	// (0x000a2f03) bg_calc_paper_pane_g6

0x0af4,	// (0x000a2f12) bg_calc_paper_pane_g7

0x0b03,	// (0x000a2f21) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x000b14f1) bg_calc_paper_pane_g

0x0b16,	// (0x000a2f34) calc_bg_paper_pane_g9

0x0b29,	// (0x000a2f47) list_calc_item_pane_ParamLimits

0x0b29,	// (0x000a2f47) list_calc_item_pane

0x9f19,	// (0x000ac337) list_calc_item_pane_g1

0x92a5,	// (0x000ab6c3) list_calc_item_pane_t1_ParamLimits

0x92a5,	// (0x000ab6c3) list_calc_item_pane_t1

0x0b3e,	// (0x000a2f5c) list_calc_item_pane_t2_ParamLimits

0x0b3e,	// (0x000a2f5c) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x000b1502) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x000b1502) list_calc_item_pane_t

0x9dfc,	// (0x000ac21a) cell_calc_pane_g1

0x9f26,	// (0x000ac344) grid_highlight_pane_cp02

0xacf0,	// (0x000ad10e) bg_calc_display_pane_g1

0x0b70,	// (0x000a2f8e) bg_calc_display_pane_g2

0xa365,	// (0x000ac783) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x000b150c) bg_calc_display_pane_g

0x0b7a,	// (0x000a2f98) cell_qdial_pane_ParamLimits

0x0b7a,	// (0x000a2f98) cell_qdial_pane

0x0b8e,	// (0x000a2fac) cell_qdial_pane_g1_ParamLimits

0x0b8e,	// (0x000a2fac) cell_qdial_pane_g1

0x0ba4,	// (0x000a2fc2) cell_qdial_pane_g2_ParamLimits

0x0ba4,	// (0x000a2fc2) cell_qdial_pane_g2

0x9f48,	// (0x000ac366) cell_qdial_pane_g3_ParamLimits

0x9f48,	// (0x000ac366) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x000b1513) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x000b1513) cell_qdial_pane_g

0x0bca,	// (0x000a2fe8) cell_qdial_pane_t1_ParamLimits

0x0bca,	// (0x000a2fe8) cell_qdial_pane_t1

0x0be2,	// (0x000a3000) cell_qdial_pane_t2_ParamLimits

0x0be2,	// (0x000a3000) cell_qdial_pane_t2

0x0bf5,	// (0x000a3013) cell_qdial_pane_t3_ParamLimits

0x0bf5,	// (0x000a3013) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x000b151c) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x000b151c) cell_qdial_pane_t

0x9b89,	// (0x000abfa7) grid_highlight_pane_cp04

0x9f54,	// (0x000ac372) thumbnail_qdial_pane_ParamLimits

0x9f54,	// (0x000ac372) thumbnail_qdial_pane

0x9fb0,	// (0x000ac3ce) list_help_pane

0x9fb9,	// (0x000ac3d7) scroll_pane_cp02

0x0c08,	// (0x000a3026) help_list_pane_t1_ParamLimits

0x0c08,	// (0x000a3026) help_list_pane_t1

0x92b7,	// (0x000ab6d5) bg_notes_pane_g2

0x92bf,	// (0x000ab6dd) bg_notes_pane_g3

0x92c7,	// (0x000ab6e5) notes_bg_pane_g1

0x92cf,	// (0x000ab6ed) notes_bg_pane_g4

0x92d7,	// (0x000ab6f5) notes_bg_pane_g5

0x92df,	// (0x000ab6fd) notes_bg_pane_g6

0x92e7,	// (0x000ab705) notes_bg_pane_g7

0x92ef,	// (0x000ab70d) notes_bg_pane_g8

0x92f7,	// (0x000ab715) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x000b153a) notes_bg_pane_g

0x0c27,	// (0x000a3045) list_notes_text_pane_ParamLimits

0x0c27,	// (0x000a3045) list_notes_text_pane

0x9fc2,	// (0x000ac3e0) list_notes_text_pane_g1

0xa36e,	// (0x000ac78c) list_notes_text_pane_t1

0x0c3d,	// (0x000a305b) listscroll_cale_week_pane

0x0c69,	// (0x000a3087) bg_cale_heading_pane

0x9fe5,	// (0x000ac403) bg_cale_pane_cp01

0x0c81,	// (0x000a309f) cale_week_corner_pane

0x0ca0,	// (0x000a30be) cale_week_day_heading_pane

0x0cbd,	// (0x000a30db) cale_week_scroll_pane_g1

0x0cd0,	// (0x000a30ee) cale_week_scroll_pane_g2

0x0ce8,	// (0x000a3106) cale_week_scroll_pane_g3

0x0d00,	// (0x000a311e) cale_week_scroll_pane_g4

0x0d18,	// (0x000a3136) cale_week_scroll_pane_g5

0x0d38,	// (0x000a3156) cale_week_scroll_pane_g6

0x0d58,	// (0x000a3176) cale_week_scroll_pane_g7

0x0d78,	// (0x000a3196) cale_week_scroll_pane_g8

0x0d9c,	// (0x000a31ba) cale_week_scroll_pane_g9

0x0db4,	// (0x000a31d2) cale_week_scroll_pane_g10

0x0dcc,	// (0x000a31ea) cale_week_scroll_pane_g11

0x0de4,	// (0x000a3202) cale_week_scroll_pane_g12

0x0dfc,	// (0x000a321a) cale_week_scroll_pane_g13

0x0dfc,	// (0x000a321a) cale_week_scroll_pane_g14

0x0dfc,	// (0x000a321a) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x000b1549) cale_week_scroll_pane_g

0x0e38,	// (0x000a3256) cale_week_time_pane

0x0e5c,	// (0x000a327a) grid_cale_week_pane

0xa014,	// (0x000ac432) scroll_pane_cp08

0x0e82,	// (0x000a32a0) cell_cale_week_pane_ParamLimits

0x0e82,	// (0x000a32a0) cell_cale_week_pane

0x0f10,	// (0x000a332e) cale_week_day_heading_pane_t1

0x0f3a,	// (0x000a3358) cale_week_day_heading_pane_t2

0x0f69,	// (0x000a3387) cale_week_day_heading_pane_t3

0x0f98,	// (0x000a33b6) cale_week_day_heading_pane_t4

0x0fc7,	// (0x000a33e5) cale_week_day_heading_pane_t5

0x0ffe,	// (0x000a341c) cale_week_day_heading_pane_t6

0x1035,	// (0x000a3453) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x000b156a) cale_week_day_heading_pane_t

0xa031,	// (0x000ac44f) bg_cale_side_pane

0x105f,	// (0x000a347d) cale_week_time_pane_t1

0x1079,	// (0x000a3497) cale_week_time_pane_t2

0x1093,	// (0x000a34b1) cale_week_time_pane_t3

0x10ad,	// (0x000a34cb) cale_week_time_pane_t4

0x10c7,	// (0x000a34e5) cale_week_time_pane_t5

0x10e1,	// (0x000a34ff) cale_week_time_pane_t6

0x10fb,	// (0x000a3519) cale_week_time_pane_t7

0x1115,	// (0x000a3533) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x000b1579) cale_week_time_pane_t

0x1135,	// (0x000a3553) cell_cale_week_pane_g2

0x1159,	// (0x000a3577) cell_cale_week_pane_g3_ParamLimits

0x1159,	// (0x000a3577) cell_cale_week_pane_g3

0xa03f,	// (0x000ac45d) grid_highlight_pane_cp07

0xa047,	// (0x000ac465) listscroll_gms_pane

0xa051,	// (0x000ac46f) grid_gms_pane

0xa05a,	// (0x000ac478) listscroll_gms_pane_g1

0xa062,	// (0x000ac480) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x000b158a) listscroll_gms_pane_g

0x1171,	// (0x000a358f) scroll_pane_cp010

0x117c,	// (0x000a359a) cell_gms_pane_ParamLimits

0x117c,	// (0x000a359a) cell_gms_pane

0x118e,	// (0x000a35ac) cell_gms_pane_g1

0xa06a,	// (0x000ac488) cell_gms_pane_g2

0x9fc2,	// (0x000ac3e0) cell_gms_pane_g3

0xa072,	// (0x000ac490) cell_gms_pane_g4

0x0003,

0xf171,	// (0x000b158f) cell_gms_pane_g

0xa07b,	// (0x000ac499) grid_highlight_pane_cp09

0x2ef0,	// (0x000a530e) phob_pre_status_pane_g1

0x2ef8,	// (0x000a5316) phob_pre_status_pane_g2

0x2f00,	// (0x000a531e) phob_pre_status_pane_g3

0x2f08,	// (0x000a5326) phob_pre_status_pane_g4

0x0004,

0xf548,	// (0x000b1966) phob_pre_status_pane_g

0x2f18,	// (0x000a5336) phob_pre_status_pane_t1

0x2f26,	// (0x000a5344) phob_pre_status_pane_t2

0x2f36,	// (0x000a5354) phob_pre_status_pane_t3

0x0002,

0xf553,	// (0x000b1971) phob_pre_status_pane_t

0xa083,	// (0x000ac4a1) bg_list_pane_cp05

0x119e,	// (0x000a35bc) grid_vorec_pane

0x11a6,	// (0x000a35c4) vorec_t1

0x11b4,	// (0x000a35d2) vorec_t2

0x11c2,	// (0x000a35e0) vorec_t3

0x11d0,	// (0x000a35ee) vorec_t4

0x99d0,	// (0x000abdee) vorec_t5

0x8374,	// (0x000aa792) vorec_t6

0x0004,

0xf17a,	// (0x000b1598) vorec_t

0x8382,	// (0x000aa7a0) wait_bar_pane_cp01

0x11ec,	// (0x000a360a) cell_vorec_pane_ParamLimits

0x11ec,	// (0x000a360a) cell_vorec_pane

0x92ff,	// (0x000ab71d) cell_vorec_pane_g1

0x9b89,	// (0x000abfa7) grid_highlight_pane_cp05

0xe6ea,	// (0x000b0b08) cams_zoom_pane

0xe6ea,	// (0x000b0b08) image_vga_pane

0x9e5f,	// (0x000ac27d) main_camera_pane_g1

0x9e5f,	// (0x000ac27d) main_camera_pane_g2

0x9e5f,	// (0x000ac27d) main_camera_pane_g3

0x9e5f,	// (0x000ac27d) main_camera_pane_g4

0x9e5f,	// (0x000ac27d) main_camera_pane_g5

0x9e5f,	// (0x000ac27d) main_camera_pane_g6

0x9e5f,	// (0x000ac27d) main_camera_pane_g7

0x0007,

0xf185,	// (0x000b15a3) main_camera_pane_g

0xa08b,	// (0x000ac4a9) main_camera_pane_t1

0xa08b,	// (0x000ac4a9) main_camera_pane_t2

0x0001,

0xf196,	// (0x000b15b4) main_camera_pane_t

0x1213,	// (0x000a3631) cams_zoom_pane_cp_ParamLimits

0x1213,	// (0x000a3631) cams_zoom_pane_cp

0x1247,	// (0x000a3665) image_cif_pane_ParamLimits

0x1247,	// (0x000a3665) image_cif_pane

0xe689,	// (0x000b0aa7) image_subqcif_pane

0x1259,	// (0x000a3677) main_video_pane_g1_ParamLimits

0x1259,	// (0x000a3677) main_video_pane_g1

0x1287,	// (0x000a36a5) main_video_pane_g2_ParamLimits

0x1287,	// (0x000a36a5) main_video_pane_g2

0x12c1,	// (0x000a36df) main_video_pane_g3_ParamLimits

0x12c1,	// (0x000a36df) main_video_pane_g3

0x12c1,	// (0x000a36df) main_video_pane_g4_ParamLimits

0x12c1,	// (0x000a36df) main_video_pane_g4

0x12f5,	// (0x000a3713) main_video_pane_g5_ParamLimits

0x12f5,	// (0x000a3713) main_video_pane_g5

0xa09f,	// (0x000ac4bd) main_video_pane_g6_ParamLimits

0xa09f,	// (0x000ac4bd) main_video_pane_g6

0x0006,

0xf19b,	// (0x000b15b9) main_video_pane_g_ParamLimits

0xf19b,	// (0x000b15b9) main_video_pane_g

0x1311,	// (0x000a372f) main_video_pane_t1_ParamLimits

0x1311,	// (0x000a372f) main_video_pane_t1

0xa0b9,	// (0x000ac4d7) cams_zoom_pane_g1

0xa0b9,	// (0x000ac4d7) cams_zoom_pane_g2

0xa0b9,	// (0x000ac4d7) cams_zoom_pane_g3

0xa0b9,	// (0x000ac4d7) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x000b15c8) cams_zoom_pane_g

0x1369,	// (0x000a3787) grid_cams_pane

0x1383,	// (0x000a37a1) linegrid_cams_pane

0x1396,	// (0x000a37b4) cell_cams_pane_ParamLimits

0x1396,	// (0x000a37b4) cell_cams_pane

0xa0c3,	// (0x000ac4e1) cams_burst_image_pane

0xa0cb,	// (0x000ac4e9) cell_cams_pane_g1

0x9b89,	// (0x000abfa7) grid_highlight_pane_cp03

0x9dfc,	// (0x000ac21a) mp_bg_pane_g1

0xe689,	// (0x000b0aa7) bg_list_pane_cp03

0xe689,	// (0x000b0aa7) bg_mp_pane

0xe689,	// (0x000b0aa7) grid_mp_pane

0xa0b9,	// (0x000ac4d7) media_player_g1

0xa617,	// (0x000aca35) media_player_t1

0xa617,	// (0x000aca35) media_player_t2

0xa617,	// (0x000aca35) media_player_t3

0xa617,	// (0x000aca35) media_player_t4

0xa617,	// (0x000aca35) media_player_t5

0xa617,	// (0x000aca35) media_player_t6

0xa617,	// (0x000aca35) media_player_t7

0x0006,

0xf532,	// (0x000b1950) media_player_t

0xe689,	// (0x000b0aa7) wait_bar_pane_cp02

0xf517,	// (0x000b1935) main_usb_pane_t

0xa883,	// (0x000acca1) cell_mp_pane

0x9dfc,	// (0x000ac21a) cell_mp_pane_g1

0x9b89,	// (0x000abfa7) grid_highlight_pane_cp06

0xa0d3,	// (0x000ac4f1) grid_skin_colour_pane

0xa0db,	// (0x000ac4f9) list_highlight_pane_cp03

0x13b6,	// (0x000a37d4) skin_g1

0xa0e3,	// (0x000ac501) skin_t1

0xa0f2,	// (0x000ac510) skin_t2

0x0001,

0xf1d8,	// (0x000b15f6) skin_t

0x13be,	// (0x000a37dc) cell_skin_colour_pane_ParamLimits

0x13be,	// (0x000a37dc) cell_skin_colour_pane

0xa100,	// (0x000ac51e) cell_skin_colour_pane_g1

0x1437,	// (0x000a3855) call_video_g1_ParamLimits

0x1437,	// (0x000a3855) call_video_g1

0x1453,	// (0x000a3871) call_video_g2_ParamLimits

0x1453,	// (0x000a3871) call_video_g2

0x0001,

0xf1dd,	// (0x000b15fb) call_video_g_ParamLimits

0xf1dd,	// (0x000b15fb) call_video_g

0x14a5,	// (0x000a38c3) call_video_uplink_pane_cp1_ParamLimits

0x14a5,	// (0x000a38c3) call_video_uplink_pane_cp1

0xa112,	// (0x000ac530) call_video_uplink_pane_cp2

0x1544,	// (0x000a3962) video_down_crop_pane_ParamLimits

0x1544,	// (0x000a3962) video_down_crop_pane

0x162d,	// (0x000a3a4b) video_down_pane_ParamLimits

0x162d,	// (0x000a3a4b) video_down_pane

0xa11a,	// (0x000ac538) video_down_subqcif_pane_ParamLimits

0xa11a,	// (0x000ac538) video_down_subqcif_pane

0xa132,	// (0x000ac550) video_down_subqcif_pane_cp_ParamLimits

0xa132,	// (0x000ac550) video_down_subqcif_pane_cp

0xa158,	// (0x000ac576) im_reading_pane_ParamLimits

0xa158,	// (0x000ac576) im_reading_pane

0x173d,	// (0x000a3b5b) im_writing_pane_ParamLimits

0x173d,	// (0x000a3b5b) im_writing_pane

0x1753,	// (0x000a3b71) im_reading_pane_t1

0xa172,	// (0x000ac590) list_im_pane

0xa183,	// (0x000ac5a1) scroll_pane_cp07

0x178d,	// (0x000a3bab) im_writing_pane_t1_ParamLimits

0x178d,	// (0x000a3bab) im_writing_pane_t1

0xa19c,	// (0x000ac5ba) im_writing_pane_t2_ParamLimits

0xa19c,	// (0x000ac5ba) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x000b1605) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x000b1605) im_writing_pane_t

0x9b89,	// (0x000abfa7) input_focus_pane_cp04

0x9b89,	// (0x000abfa7) input_focus_pane_cp05

0x17a2,	// (0x000a3bc0) list_im_single_pane_ParamLimits

0x17a2,	// (0x000a3bc0) list_im_single_pane

0x17b7,	// (0x000a3bd5) list_single_im_pane_t1

0xa083,	// (0x000ac4a1) blid_accuracy_pane

0xa083,	// (0x000ac4a1) blid_compass_pane

0xbfa5,	// (0x000ae3c3) main_location_t1

0xbfa5,	// (0x000ae3c3) main_location_t2

0xbfa5,	// (0x000ae3c3) main_location_t3

0x0002,

0xf541,	// (0x000b195f) main_location_t

0x9b89,	// (0x000abfa7) aid_levels_location

0x9dfc,	// (0x000ac21a) blid_accuracy_pane_g1

0x9dfc,	// (0x000ac21a) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x000b1654) blid_accuracy_pane_g

0xa1e4,	// (0x000ac602) wml_content_pane

0xa222,	// (0x000ac640) wml_button_pane_ParamLimits

0xa222,	// (0x000ac640) wml_button_pane

0x17c6,	// (0x000a3be4) wml_list_single_large_pane_ParamLimits

0x17c6,	// (0x000a3be4) wml_list_single_large_pane

0x17db,	// (0x000a3bf9) wml_list_single_medium_pane_ParamLimits

0x17db,	// (0x000a3bf9) wml_list_single_medium_pane

0x17f2,	// (0x000a3c10) wml_list_single_small_pane_ParamLimits

0x17f2,	// (0x000a3c10) wml_list_single_small_pane

0xa236,	// (0x000ac654) wml_selection_box_pane_ParamLimits

0xa236,	// (0x000ac654) wml_selection_box_pane

0xa249,	// (0x000ac667) wml_list_single_pane_t1

0xa258,	// (0x000ac676) wml_list_single_medium_pane_t1

0xa267,	// (0x000ac685) wml_list_single_large_pane_t1

0xa276,	// (0x000ac694) input_focus_pane_cp02_ParamLimits

0xa276,	// (0x000ac694) input_focus_pane_cp02

0xa289,	// (0x000ac6a7) wml_selection_box_pane_g1

0xa292,	// (0x000ac6b0) wml_selection_box_pane_t1_ParamLimits

0xa292,	// (0x000ac6b0) wml_selection_box_pane_t1

0x9de4,	// (0x000ac202) bg_wml_button_pane_ParamLimits

0x9de4,	// (0x000ac202) bg_wml_button_pane

0xa2aa,	// (0x000ac6c8) wml_button_pane_g1

0xa2b2,	// (0x000ac6d0) wml_button_pane_t1

0xa2aa,	// (0x000ac6c8) wml_button_bg_pane_g1

0xa2c2,	// (0x000ac6e0) wml_button_bg_pane_g2

0xa2ca,	// (0x000ac6e8) wml_button_bg_pane_g3

0xa2d2,	// (0x000ac6f0) wml_button_bg_pane_g4

0xa2da,	// (0x000ac6f8) wml_button_bg_pane_g5

0xa2e2,	// (0x000ac700) wml_button_bg_pane_g6

0xa2ea,	// (0x000ac708) wml_button_bg_pane_g7

0xa2f2,	// (0x000ac710) wml_button_bg_pane_g8

0xa2fa,	// (0x000ac718) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x000b160a) wml_button_bg_pane_g

0x180b,	// (0x000a3c29) bg_list_pane_cp02

0xa302,	// (0x000ac720) mce_header_pane_ParamLimits

0xa302,	// (0x000ac720) mce_header_pane

0xa318,	// (0x000ac736) mce_icon_pane

0xa318,	// (0x000ac736) mce_image_pane

0xa321,	// (0x000ac73f) mce_text_pane_ParamLimits

0xa321,	// (0x000ac73f) mce_text_pane

0x1813,	// (0x000a3c31) scroll_pane_cp03

0xa21a,	// (0x000ac638) scroll_pane_cp04

0xa334,	// (0x000ac752) scroll_pane_cp05_ParamLimits

0xa334,	// (0x000ac752) scroll_pane_cp05

0x181d,	// (0x000a3c3b) mce_header_field_pane_ParamLimits

0x181d,	// (0x000a3c3b) mce_header_field_pane

0x1834,	// (0x000a3c52) mce_header_field_pane_2_ParamLimits

0x1834,	// (0x000a3c52) mce_header_field_pane_2

0x184a,	// (0x000a3c68) mce_header_field_pane_3

0x1852,	// (0x000a3c70) list_single_mce_message_pane_ParamLimits

0x1852,	// (0x000a3c70) list_single_mce_message_pane

0x1868,	// (0x000a3c86) list_single_mce_smart_pane_ParamLimits

0x1868,	// (0x000a3c86) list_single_mce_smart_pane

0xa340,	// (0x000ac75e) input_focus_pane_cp03

0xa349,	// (0x000ac767) list_header_data_pane

0x1889,	// (0x000a3ca7) mce_header_field_pane_t1

0x1899,	// (0x000a3cb7) list_single_mce_header_pane_ParamLimits

0x1899,	// (0x000a3cb7) list_single_mce_header_pane

0xa37c,	// (0x000ac79a) list_single_mce_header_pane_t1

0xa38b,	// (0x000ac7a9) list_single_mce_message_pane_g1

0xa393,	// (0x000ac7b1) list_single_mce_message_pane_t1

0x18d3,	// (0x000a3cf1) bg_cale_heading_pane_cp01_ParamLimits

0x18d3,	// (0x000a3cf1) bg_cale_heading_pane_cp01

0xa3a1,	// (0x000ac7bf) bg_cale_pane_cp02_ParamLimits

0xa3a1,	// (0x000ac7bf) bg_cale_pane_cp02

0x190d,	// (0x000a3d2b) cale_month_corner_pane

0x192c,	// (0x000a3d4a) cale_month_day_heading_pane_ParamLimits

0x192c,	// (0x000a3d4a) cale_month_day_heading_pane

0x197e,	// (0x000a3d9c) cale_month_pane_g1_ParamLimits

0x197e,	// (0x000a3d9c) cale_month_pane_g1

0x19ad,	// (0x000a3dcb) cale_month_pane_g2_ParamLimits

0x19ad,	// (0x000a3dcb) cale_month_pane_g2

0x19dd,	// (0x000a3dfb) cale_month_pane_g3_ParamLimits

0x19dd,	// (0x000a3dfb) cale_month_pane_g3

0x1a19,	// (0x000a3e37) cale_month_pane_g4_ParamLimits

0x1a19,	// (0x000a3e37) cale_month_pane_g4

0x1a55,	// (0x000a3e73) cale_month_pane_g5_ParamLimits

0x1a55,	// (0x000a3e73) cale_month_pane_g5

0x1a9d,	// (0x000a3ebb) cale_month_pane_g6_ParamLimits

0x1a9d,	// (0x000a3ebb) cale_month_pane_g6

0x1ae9,	// (0x000a3f07) cale_month_pane_g7_ParamLimits

0x1ae9,	// (0x000a3f07) cale_month_pane_g7

0x1b39,	// (0x000a3f57) cale_month_pane_g8_ParamLimits

0x1b39,	// (0x000a3f57) cale_month_pane_g8

0x1b8d,	// (0x000a3fab) cale_month_pane_g9_ParamLimits

0x1b8d,	// (0x000a3fab) cale_month_pane_g9

0x1bdf,	// (0x000a3ffd) cale_month_pane_g10_ParamLimits

0x1bdf,	// (0x000a3ffd) cale_month_pane_g10

0x1c31,	// (0x000a404f) cale_month_pane_g11_ParamLimits

0x1c31,	// (0x000a404f) cale_month_pane_g11

0x1c83,	// (0x000a40a1) cale_month_pane_g12_ParamLimits

0x1c83,	// (0x000a40a1) cale_month_pane_g12

0x1cd5,	// (0x000a40f3) cale_month_pane_g13_ParamLimits

0x1cd5,	// (0x000a40f3) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x000b161d) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x000b161d) cale_month_pane_g

0x1d27,	// (0x000a4145) cale_month_week_pane

0x1d4b,	// (0x000a4169) grid_cale_month_pane_ParamLimits

0x1d4b,	// (0x000a4169) grid_cale_month_pane

0x1d94,	// (0x000a41b2) cale_month_day_heading_pane_t1

0x1dd6,	// (0x000a41f4) cale_month_day_heading_pane_t2

0x1e0b,	// (0x000a4229) cale_month_day_heading_pane_t3

0x1e40,	// (0x000a425e) cale_month_day_heading_pane_t4

0x1e7d,	// (0x000a429b) cale_month_day_heading_pane_t5

0x1ec2,	// (0x000a42e0) cale_month_day_heading_pane_t6

0x1f07,	// (0x000a4325) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x000b1638) cale_month_day_heading_pane_t

0xa031,	// (0x000ac44f) bg_cale_side_pane_cp01

0x1f54,	// (0x000a4372) cale_month_week_pane_t1

0x1f6d,	// (0x000a438b) cale_month_week_pane_t2

0x1f86,	// (0x000a43a4) cale_month_week_pane_t3

0x1f9f,	// (0x000a43bd) cale_month_week_pane_t4

0x1fb8,	// (0x000a43d6) cale_month_week_pane_t5

0x1fd1,	// (0x000a43ef) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x000b1647) cale_month_week_pane_t

0x1fea,	// (0x000a4408) cell_cale_month_pane_ParamLimits

0x1fea,	// (0x000a4408) cell_cale_month_pane

0x9309,	// (0x000ab727) cell_cale_month_pane_g1

0x2118,	// (0x000a4536) cell_cale_month_pane_t1_ParamLimits

0x2118,	// (0x000a4536) cell_cale_month_pane_t1

0xa03f,	// (0x000ac45d) grid_highlight_pane_cp08

0x9dfc,	// (0x000ac21a) main_smil_g1

0x2144,	// (0x000a4562) smil_status_pane

0xa3e0,	// (0x000ac7fe) smil_text_pane

0xbe7d,	// (0x000ae29b) bg_popup_call3_rect_pane_g8

0xbe85,	// (0x000ae2a3) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x000b18e0) bg_popup_call3_rect_pane_g

0xc07c,	// (0x000ae49a) smil_status_volume_pane_g1

0xa3ea,	// (0x000ac808) smil_status_pane_t1

0x944f,	// (0x000ab86d) volume_smil_pane

0xa401,	// (0x000ac81f) list_smil_text_pane

0x2159,	// (0x000a4577) scroll_pane_cp011

0x2164,	// (0x000a4582) smil_text_list_pane_t1_ParamLimits

0x2164,	// (0x000a4582) smil_text_list_pane_t1

0x9315,	// (0x000ab733) aid_volume_smil_ParamLimits

0x9315,	// (0x000ab733) aid_volume_smil

0x9dfc,	// (0x000ac21a) smil_volume_pane_g1

0x9dfc,	// (0x000ac21a) smil_volume_pane_g2

0x0001,

0xf236,	// (0x000b1654) smil_volume_pane_g

0x0c3d,	// (0x000a305b) listscroll_cale_day_pane

0xa40b,	// (0x000ac829) bg_cale_pane

0xa423,	// (0x000ac841) list_cale_pane

0xa446,	// (0x000ac864) scroll_pane_cp09

0xa457,	// (0x000ac875) cale_bg_pane_g1

0xa45f,	// (0x000ac87d) cale_bg_pane_g2

0xa467,	// (0x000ac885) cale_bg_pane_g3

0xa46f,	// (0x000ac88d) cale_bg_pane_g4

0xa477,	// (0x000ac895) cale_bg_pane_g5

0xa47f,	// (0x000ac89d) cale_bg_pane_g6

0xa487,	// (0x000ac8a5) cale_bg_pane_g7

0xa48f,	// (0x000ac8ad) cale_bg_pane_g8

0xa497,	// (0x000ac8b5) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x000b1659) cale_bg_pane_g

0x21b0,	// (0x000a45ce) list_cale_time_pane_ParamLimits

0x21b0,	// (0x000a45ce) list_cale_time_pane

0xa49f,	// (0x000ac8bd) list_cale_time_pane_g1_ParamLimits

0xa49f,	// (0x000ac8bd) list_cale_time_pane_g1

0xa4ab,	// (0x000ac8c9) list_cale_time_pane_g2_ParamLimits

0xa4ab,	// (0x000ac8c9) list_cale_time_pane_g2

0x21c6,	// (0x000a45e4) list_cale_time_pane_g3_ParamLimits

0x21c6,	// (0x000a45e4) list_cale_time_pane_g3

0x21d4,	// (0x000a45f2) list_cale_time_pane_g4_ParamLimits

0x21d4,	// (0x000a45f2) list_cale_time_pane_g4

0x21e2,	// (0x000a4600) list_cale_time_pane_g5_ParamLimits

0x21e2,	// (0x000a4600) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x000b166c) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x000b166c) list_cale_time_pane_g

0xa4c5,	// (0x000ac8e3) list_cale_time_pane_t1_ParamLimits

0xa4c5,	// (0x000ac8e3) list_cale_time_pane_t1

0xa4ed,	// (0x000ac90b) list_cale_time_pane_t2_ParamLimits

0xa4ed,	// (0x000ac90b) list_cale_time_pane_t2

0x246f,	// (0x000a488d) aid_blid_cardinal_pane

0x24ad,	// (0x000a48cb) compass_pane_t4

0xa515,	// (0x000ac933) list_cale_time_pane_t4_ParamLimits

0xa515,	// (0x000ac933) list_cale_time_pane_t4

0x24bb,	// (0x000a48d9) compass_pane_t5

0x24c9,	// (0x000a48e7) compass_pane_t6

0x24d7,	// (0x000a48f5) compass_pane_t7

0xa99d,	// (0x000acdbb) navi_pane_cc_t1

0xab7a,	// (0x000acf98) aid_phob_thumbnail_center_pane

0x289e,	// (0x000a4cbc) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x000b1679) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x000b1679) list_cale_time_pane_t

0x9073,	// (0x000ab491) bg_popup_window_pane_cp02_ParamLimits

0x9073,	// (0x000ab491) bg_popup_window_pane_cp02

0xa53d,	// (0x000ac95b) heading_pane_cp01_ParamLimits

0xa53d,	// (0x000ac95b) heading_pane_cp01

0xa549,	// (0x000ac967) loc_req_pane_ParamLimits

0xa549,	// (0x000ac967) loc_req_pane

0xa559,	// (0x000ac977) loc_type_pane_ParamLimits

0xa559,	// (0x000ac977) loc_type_pane

0xa56b,	// (0x000ac989) loc_type_pane_t1_ParamLimits

0xa56b,	// (0x000ac989) loc_type_pane_t1

0xa57d,	// (0x000ac99b) loc_type_pane_t2_ParamLimits

0xa57d,	// (0x000ac99b) loc_type_pane_t2

0xa58f,	// (0x000ac9ad) loc_type_pane_t3_ParamLimits

0xa58f,	// (0x000ac9ad) loc_type_pane_t3

0x0002,

0xf262,	// (0x000b1680) loc_type_pane_t_ParamLimits

0xf262,	// (0x000b1680) loc_type_pane_t

0xa5a1,	// (0x000ac9bf) list_loc_req_pane

0xa5ab,	// (0x000ac9c9) scroll_pane_cp012

0x21f0,	// (0x000a460e) list_single_loc_request_popup_menu_pane_ParamLimits

0x21f0,	// (0x000a460e) list_single_loc_request_popup_menu_pane

0xa5b6,	// (0x000ac9d4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa5b6,	// (0x000ac9d4) list_single_loc_request_popup_menu_pane_g1

0xa5c2,	// (0x000ac9e0) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa5c2,	// (0x000ac9e0) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x000b1687) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x000b1687) list_single_loc_request_popup_menu_pane_g

0xa5ce,	// (0x000ac9ec) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa5ce,	// (0x000ac9ec) list_single_loc_request_popup_menu_pane_t1

0x9de4,	// (0x000ac202) bg_popup_window_pane_cp03_ParamLimits

0x9de4,	// (0x000ac202) bg_popup_window_pane_cp03

0xa5e4,	// (0x000aca02) heading_loc_req_pane_ParamLimits

0xa5e4,	// (0x000aca02) heading_loc_req_pane

0x21fd,	// (0x000a461b) popup_dyc_status_message_window_g1_ParamLimits

0x21fd,	// (0x000a461b) popup_dyc_status_message_window_g1

0x2211,	// (0x000a462f) popup_dyc_status_message_window_t1_ParamLimits

0x2211,	// (0x000a462f) popup_dyc_status_message_window_t1

0x2226,	// (0x000a4644) popup_dyc_status_message_window_t2_ParamLimits

0x2226,	// (0x000a4644) popup_dyc_status_message_window_t2

0x223b,	// (0x000a4659) popup_dyc_status_message_window_t3_ParamLimits

0x223b,	// (0x000a4659) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x000b168c) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x000b168c) popup_dyc_status_message_window_t

0x9b89,	// (0x000abfa7) bg_heading_pane_cp01

0xa5f0,	// (0x000aca0e) heading_loc_req_pane_g1

0xa5f8,	// (0x000aca16) heading_loc_req_pane_g2

0xa600,	// (0x000aca1e) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x000b1693) heading_loc_req_pane_g

0xa608,	// (0x000aca26) heading_loc_req_pane_t1

0xa627,	// (0x000aca45) bg_popup_sub_pane_cp01_ParamLimits

0xa627,	// (0x000aca45) bg_popup_sub_pane_cp01

0xa635,	// (0x000aca53) popup_cale_events_window_g1_ParamLimits

0xa635,	// (0x000aca53) popup_cale_events_window_g1

0xa655,	// (0x000aca73) popup_cale_events_window_g2_ParamLimits

0xa655,	// (0x000aca73) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x000b16b5) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x000b16b5) popup_cale_events_window_g

0xa675,	// (0x000aca93) popup_cale_events_window_t1_ParamLimits

0xa675,	// (0x000aca93) popup_cale_events_window_t1

0xa687,	// (0x000acaa5) popup_cale_events_window_t2_ParamLimits

0xa687,	// (0x000acaa5) popup_cale_events_window_t2

0xa6c5,	// (0x000acae3) popup_cale_events_window_t3_ParamLimits

0xa6c5,	// (0x000acae3) popup_cale_events_window_t3

0xa6ff,	// (0x000acb1d) popup_cale_events_window_t4_ParamLimits

0xa6ff,	// (0x000acb1d) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x000b16ba) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x000b16ba) popup_cale_events_window_t

0x2263,	// (0x000a4681) call_type_pane

0x2273,	// (0x000a4691) popup_call_status_window_g1

0x2287,	// (0x000a46a5) popup_call_status_window_g2

0x229b,	// (0x000a46b9) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x000b16c3) popup_call_status_window_g

0xa735,	// (0x000acb53) call_type_pane_g1

0xa73e,	// (0x000acb5c) call_type_pane_g2

0x0001,

0xf2ac,	// (0x000b16ca) call_type_pane_g

0x9b89,	// (0x000abfa7) bg_popup_sub_pane_cp02

0xa747,	// (0x000acb65) listscroll_popup_wml_pane

0xa74f,	// (0x000acb6d) list_wml_pane

0xa759,	// (0x000acb77) scroll_pane_cp013

0xa764,	// (0x000acb82) list_single_graphic_popup_wml_pane_ParamLimits

0xa764,	// (0x000acb82) list_single_graphic_popup_wml_pane

0x9dfc,	// (0x000ac21a) list_single_graphic_popup_wml_pane_g1

0xa778,	// (0x000acb96) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x000b16cf) list_single_graphic_popup_wml_pane_g

0xa780,	// (0x000acb9e) list_single_graphic_popup_wml_pane_t1

0xa796,	// (0x000acbb4) aid_call_pane

0x9ddc,	// (0x000ac1fa) popup_clock_analogue_window_g1

0x9ddc,	// (0x000ac1fa) popup_clock_analogue_window_g2

0x9337,	// (0x000ab755) popup_clock_analogue_window_g3

0x9337,	// (0x000ab755) popup_clock_analogue_window_g4

0x9dfc,	// (0x000ac21a) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x000b16d4) popup_clock_analogue_window_g

0x933f,	// (0x000ab75d) popup_clock_analogue_window_t1

0x934d,	// (0x000ab76b) clock_digital_number_pane_ParamLimits

0x934d,	// (0x000ab76b) clock_digital_number_pane

0x9359,	// (0x000ab777) clock_digital_number_pane_cp02_ParamLimits

0x9359,	// (0x000ab777) clock_digital_number_pane_cp02

0x9365,	// (0x000ab783) clock_digital_number_pane_cp03_ParamLimits

0x9365,	// (0x000ab783) clock_digital_number_pane_cp03

0x9371,	// (0x000ab78f) clock_digital_number_pane_cp04_ParamLimits

0x9371,	// (0x000ab78f) clock_digital_number_pane_cp04

0x937d,	// (0x000ab79b) clock_digital_separator_pane_ParamLimits

0x937d,	// (0x000ab79b) clock_digital_separator_pane

0x9389,	// (0x000ab7a7) popup_clock_digital_window_t1

0x9dfc,	// (0x000ac21a) clock_digital_number_pane_g1

0x9dfc,	// (0x000ac21a) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x000b1654) clock_digital_number_pane_g

0x9dfc,	// (0x000ac21a) clock_digital_separator_pane_g1

0x9dfc,	// (0x000ac21a) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x000b1654) clock_digital_separator_pane_g

0x9b89,	// (0x000abfa7) bg_popup_window_pane_cp04

0xa79e,	// (0x000acbbc) heading_pane_cp03

0xa083,	// (0x000ac4a1) listscroll_popup_gms_pane

0x9b89,	// (0x000abfa7) grid_large_graphic_popup_pane

0xa7a7,	// (0x000acbc5) listscroll_popup_gms_pane_g1

0xa7b0,	// (0x000acbce) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x000b16df) listscroll_popup_gms_pane_g

0xa7b9,	// (0x000acbd7) scroll_pane_cp014

0x9e51,	// (0x000ac26f) cell_large_graphic_popup_pane_ParamLimits

0x9e51,	// (0x000ac26f) cell_large_graphic_popup_pane

0x9e5f,	// (0x000ac27d) cell_large_graphic_popup_pane_g1_ParamLimits

0x9e5f,	// (0x000ac27d) cell_large_graphic_popup_pane_g1

0xa7c2,	// (0x000acbe0) cell_large_graphic_popup_pane_g2_ParamLimits

0xa7c2,	// (0x000acbe0) cell_large_graphic_popup_pane_g2

0xa7d0,	// (0x000acbee) cell_large_graphic_popup_pane_g3_ParamLimits

0xa7d0,	// (0x000acbee) cell_large_graphic_popup_pane_g3

0xa7de,	// (0x000acbfc) cell_large_graphic_popup_pane_g4_ParamLimits

0xa7de,	// (0x000acbfc) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x000b16e4) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x000b16e4) cell_large_graphic_popup_pane_g

0x9b89,	// (0x000abfa7) grid_highlight_pane_cp010

0x9dfc,	// (0x000ac21a) bg_popup_call_pane_g1

0xa7ef,	// (0x000acc0d) list_single_graphic_popup_conf_pane_ParamLimits

0xa7ef,	// (0x000acc0d) list_single_graphic_popup_conf_pane

0xa802,	// (0x000acc20) list_highlight_pane_cp01

0xa80b,	// (0x000acc29) list_single_graphic_popup_conf_pane_g1

0xa813,	// (0x000acc31) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x000b16ed) list_single_graphic_popup_conf_pane_g

0xa81b,	// (0x000acc39) list_single_graphic_popup_conf_pane_t1

0xa829,	// (0x000acc47) linegrid_cams_pane_g1

0x22aa,	// (0x000a46c8) linegrid_cams_pane_g2

0x9fc2,	// (0x000ac3e0) linegrid_cams_pane_g3

0xa832,	// (0x000acc50) linegrid_cams_pane_g4

0x22b3,	// (0x000a46d1) linegrid_cams_pane_g5

0x22bc,	// (0x000a46da) linegrid_cams_pane_g6

0xa072,	// (0x000ac490) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x000b16f2) linegrid_cams_pane_g

0xa83b,	// (0x000acc59) popup_clock_analogue_window

0xa83b,	// (0x000acc59) popup_clock_digital_window

0x9b89,	// (0x000abfa7) popup_phob_thumbnail_window

0x9dfc,	// (0x000ac21a) call_video_uplink_pane_g1

0xa844,	// (0x000acc62) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x000b1701) call_video_uplink_pane_g

0xa84c,	// (0x000acc6a) video_uplink_pane

0xa854,	// (0x000acc72) mce_image_pane_g1

0x22c7,	// (0x000a46e5) mce_image_pane_g2

0x22cf,	// (0x000a46ed) mce_image_pane_g3

0x22d7,	// (0x000a46f5) mce_image_pane_g4

0x22e1,	// (0x000a46ff) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x000b1706) mce_image_pane_g

0xa85e,	// (0x000acc7c) control_top_pane_stacon_cp01_ParamLimits

0xa85e,	// (0x000acc7c) control_top_pane_stacon_cp01

0xa872,	// (0x000acc90) uni_indicator_pane_stacon_cp01_ParamLimits

0xa872,	// (0x000acc90) uni_indicator_pane_stacon_cp01

0xa883,	// (0x000acca1) bg_popup_sub_pane_cp03

0x22e9,	// (0x000a4707) chi_dic_find_pane

0x22f1,	// (0x000a470f) listscroll_chi_dic_pane

0x22fa,	// (0x000a4718) main_pane_chidic_g1

0x230d,	// (0x000a472b) chi_dic_find_pane_t1

0xa88d,	// (0x000accab) find_chidic_pane

0xa896,	// (0x000accb4) chi_dic_list_pane_ParamLimits

0xa896,	// (0x000accb4) chi_dic_list_pane

0xa8a7,	// (0x000accc5) scroll_pane_cp020

0x231b,	// (0x000a4739) find_chidic_pane_t1

0x9b89,	// (0x000abfa7) input_focus_pane_cp06

0x232a,	// (0x000a4748) list_chi_dic_pane_ParamLimits

0x232a,	// (0x000a4748) list_chi_dic_pane

0x233c,	// (0x000a475a) list_chi_dic_pane_t1_ParamLimits

0x233c,	// (0x000a475a) list_chi_dic_pane_t1

0x9b89,	// (0x000abfa7) list_highlight_pane_cp020

0xa8af,	// (0x000acccd) bg_cale_heading_pane_g1

0x234f,	// (0x000a476d) bg_cale_heading_pane_g2

0x2357,	// (0x000a4775) bg_cale_heading_pane_g3

0x235f,	// (0x000a477d) bg_cale_heading_pane_g4

0x2369,	// (0x000a4787) bg_cale_heading_pane_g5

0x2373,	// (0x000a4791) bg_cale_heading_pane_g6

0x237b,	// (0x000a4799) bg_cale_heading_pane_g7

0x2383,	// (0x000a47a1) bg_cale_heading_pane_g8

0x238d,	// (0x000a47ab) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x000b1711) bg_cale_heading_pane_g

0xa8af,	// (0x000acccd) bg_cale_side_pane_g1

0x2397,	// (0x000a47b5) bg_cale_side_pane_g2

0x239f,	// (0x000a47bd) bg_cale_side_pane_g3

0x23a7,	// (0x000a47c5) bg_cale_side_pane_g4

0x23af,	// (0x000a47cd) bg_cale_side_pane_g5

0x23b7,	// (0x000a47d5) bg_cale_side_pane_g6

0x23bf,	// (0x000a47dd) bg_cale_side_pane_g7

0x23c7,	// (0x000a47e5) bg_cale_side_pane_g8

0x23cf,	// (0x000a47ed) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x000b1724) bg_cale_side_pane_g

0x23d7,	// (0x000a47f5) popup_call_status_window_ParamLimits

0x23d7,	// (0x000a47f5) popup_call_status_window

0xa8b7,	// (0x000accd5) stacon_top_pane

0xa8bf,	// (0x000accdd) status_pane_ParamLimits

0xa8bf,	// (0x000accdd) status_pane

0xa8d4,	// (0x000accf2) status_small_pane

0xa8dc,	// (0x000accfa) control_pane

0x9b89,	// (0x000abfa7) stacon_bottom_pane

0xa8e4,	// (0x000acd02) list_single_mce_smart_pane_t1_ParamLimits

0xa8e4,	// (0x000acd02) list_single_mce_smart_pane_t1

0xa8f7,	// (0x000acd15) list_single_mce_smart_pane_t2_ParamLimits

0xa8f7,	// (0x000acd15) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x000b1737) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x000b1737) list_single_mce_smart_pane_t

0x241e,	// (0x000a483c) compass_pane

0x2427,	// (0x000a4845) main_location2_pane_t1

0x2439,	// (0x000a4857) main_location2_pane_t2

0x244b,	// (0x000a4869) main_location2_pane_t3

0x0003,

0xf31e,	// (0x000b173c) main_location2_pane_t

0xa916,	// (0x000acd34) compass_pane_g1_ParamLimits

0xa916,	// (0x000acd34) compass_pane_g1

0x248f,	// (0x000a48ad) compass_pane_t1

0x249e,	// (0x000a48bc) compass_pane_t2

0x0005,

0xf327,	// (0x000b1745) compass_pane_t

0x24e5,	// (0x000a4903) text_secondary_cp61

0xa994,	// (0x000acdb2) navi_pane_cams_g5

0xaa10,	// (0x000ace2e) navi_pane_im_t1

0xaa1e,	// (0x000ace3c) navi_pane_mp_g1_ParamLimits

0xaa1e,	// (0x000ace3c) navi_pane_mp_g1

0xaa32,	// (0x000ace50) navi_pane_mp_g2_ParamLimits

0xaa32,	// (0x000ace50) navi_pane_mp_g2

0xaa3e,	// (0x000ace5c) navi_pane_mp_g3_ParamLimits

0xaa3e,	// (0x000ace5c) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x000b1759) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x000b1759) navi_pane_mp_g

0xaa4a,	// (0x000ace68) navi_pane_mp_t1

0xaa58,	// (0x000ace76) navi_pane_mp_t2

0x0002,

0xf342,	// (0x000b1760) navi_pane_mp_t

0xaac3,	// (0x000acee1) navi_pane_vt_g1

0xaa4a,	// (0x000ace68) navi_pane_vt_t1

0xaacb,	// (0x000acee9) navi_slider_pane

0xa083,	// (0x000ac4a1) zooming_pane

0xaadb,	// (0x000acef9) navi_slider_pane_g1

0x93a6,	// (0x000ab7c4) navi_slider_pane_g2

0x0006,

0xf349,	// (0x000b1767) navi_slider_pane_g

0xaaff,	// (0x000acf1d) aid_levels_zoom

0xab07,	// (0x000acf25) zooming_pane_g1

0xab0f,	// (0x000acf2d) zooming_pane_g2

0xab0f,	// (0x000acf2d) zooming_pane_g3

0x0002,

0xf358,	// (0x000b1776) zooming_pane_g

0xab17,	// (0x000acf35) level_10_zoom

0xab20,	// (0x000acf3e) level_11_zoom

0xab29,	// (0x000acf47) level_1_zoom

0xab32,	// (0x000acf50) level_2_zoom

0xab3b,	// (0x000acf59) level_3_zoom

0xab44,	// (0x000acf62) level_4_zoom

0xab4d,	// (0x000acf6b) level_5_zoom

0xab56,	// (0x000acf74) level_6_zoom

0xab5f,	// (0x000acf7d) level_7_zoom

0xab68,	// (0x000acf86) level_8_zoom

0xab71,	// (0x000acf8f) level_9_zoom

0xab82,	// (0x000acfa0) popup_phob_thumbnail_window_g1

0xab8a,	// (0x000acfa8) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x000b177d) popup_phob_thumbnail_window_g

0x2f46,	// (0x000a5364) level_1_location

0x2f4e,	// (0x000a536c) level_2_location

0x2f56,	// (0x000a5374) level_3_location

0x2f5e,	// (0x000a537c) level_4_location

0xa083,	// (0x000ac4a1) level_5_location

0x2536,	// (0x000a4954) mce_icon_pane_g1

0x2540,	// (0x000a495e) mce_icon_pane_g2

0x0001,

0xf364,	// (0x000b1782) mce_icon_pane_g

0xab92,	// (0x000acfb0) main_mup_pane_g1_ParamLimits

0xab92,	// (0x000acfb0) main_mup_pane_g1

0xab92,	// (0x000acfb0) main_mup_pane_g2_ParamLimits

0xab92,	// (0x000acfb0) main_mup_pane_g2

0xab92,	// (0x000acfb0) main_mup_pane_g3_ParamLimits

0xab92,	// (0x000acfb0) main_mup_pane_g3

0xab92,	// (0x000acfb0) main_mup_pane_g4_ParamLimits

0xab92,	// (0x000acfb0) main_mup_pane_g4

0xab92,	// (0x000acfb0) main_mup_pane_g5_ParamLimits

0xab92,	// (0x000acfb0) main_mup_pane_g5

0xab92,	// (0x000acfb0) main_mup_pane_g6_ParamLimits

0xab92,	// (0x000acfb0) main_mup_pane_g6

0xab92,	// (0x000acfb0) main_mup_pane_g7_ParamLimits

0xab92,	// (0x000acfb0) main_mup_pane_g7

0xab92,	// (0x000acfb0) main_mup_pane_g8_ParamLimits

0xab92,	// (0x000acfb0) main_mup_pane_g8

0xab92,	// (0x000acfb0) main_mup_pane_g9_ParamLimits

0xab92,	// (0x000acfb0) main_mup_pane_g9

0xab92,	// (0x000acfb0) main_mup_pane_g10_ParamLimits

0xab92,	// (0x000acfb0) main_mup_pane_g10

0xab92,	// (0x000acfb0) main_mup_pane_g11_ParamLimits

0xab92,	// (0x000acfb0) main_mup_pane_g11

0x9e5f,	// (0x000ac27d) main_mup_pane_g12_ParamLimits

0x9e5f,	// (0x000ac27d) main_mup_pane_g12

0xab92,	// (0x000acfb0) main_mup_pane_g13_ParamLimits

0xab92,	// (0x000acfb0) main_mup_pane_g13

0x000c,

0xf369,	// (0x000b1787) main_mup_pane_g_ParamLimits

0xf369,	// (0x000b1787) main_mup_pane_g

0xaba0,	// (0x000acfbe) main_mup_pane_t1_ParamLimits

0xaba0,	// (0x000acfbe) main_mup_pane_t1

0xaba0,	// (0x000acfbe) main_mup_pane_t2_ParamLimits

0xaba0,	// (0x000acfbe) main_mup_pane_t2

0xaba0,	// (0x000acfbe) main_mup_pane_t3_ParamLimits

0xaba0,	// (0x000acfbe) main_mup_pane_t3

0xa08b,	// (0x000ac4a9) main_mup_pane_t4_ParamLimits

0xa08b,	// (0x000ac4a9) main_mup_pane_t4

0xa08b,	// (0x000ac4a9) main_mup_pane_t5_ParamLimits

0xa08b,	// (0x000ac4a9) main_mup_pane_t5

0xa351,	// (0x000ac76f) main_mup_pane_t6_ParamLimits

0xa351,	// (0x000ac76f) main_mup_pane_t6

0x0005,

0xf384,	// (0x000b17a2) main_mup_pane_t_ParamLimits

0xf384,	// (0x000b17a2) main_mup_pane_t

0x9e51,	// (0x000ac26f) mup_progress_pane_ParamLimits

0x9e51,	// (0x000ac26f) mup_progress_pane

0xabb4,	// (0x000acfd2) mup_visualizer_pane_ParamLimits

0xabb4,	// (0x000acfd2) mup_visualizer_pane

0xabb4,	// (0x000acfd2) mup_volume_pane_ParamLimits

0xabb4,	// (0x000acfd2) mup_volume_pane

0x9e6d,	// (0x000ac28b) mup_visualizer_pane_g1_ParamLimits

0x9e6d,	// (0x000ac28b) mup_visualizer_pane_g1

0xabc2,	// (0x000acfe0) mup_visualizer_pane_g2_ParamLimits

0xabc2,	// (0x000acfe0) mup_visualizer_pane_g2

0x9e5f,	// (0x000ac27d) mup_visualizer_pane_g3_ParamLimits

0x9e5f,	// (0x000ac27d) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x000b17af) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x000b17af) mup_visualizer_pane_g

0xa0b9,	// (0x000ac4d7) mup_volume_pane_g1

0xa0b9,	// (0x000ac4d7) mup_volume_pane_g2

0x0001,

0xf398,	// (0x000b17b6) mup_volume_pane_g

0xa0b9,	// (0x000ac4d7) mup_progress_pane_g1

0xa0b9,	// (0x000ac4d7) mup_progress_pane_g2

0xa0b9,	// (0x000ac4d7) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x000b17bb) mup_progress_pane_g

0x9b89,	// (0x000abfa7) bg_popup_window_pane_cp05

0xabd0,	// (0x000acfee) heading_pane_cp02_ParamLimits

0xabd0,	// (0x000acfee) heading_pane_cp02

0xabea,	// (0x000ad008) list_popup_blid_pane

0xabf2,	// (0x000ad010) list_blid_sat_info_pane_ParamLimits

0xabf2,	// (0x000ad010) list_blid_sat_info_pane

0xac05,	// (0x000ad023) list_blid_sat_info_pane_g1

0xac0d,	// (0x000ad02b) list_blid_sat_info_pane_t1

0x2640,	// (0x000a4a5e) mup_equalizer_pane_ParamLimits

0x2640,	// (0x000a4a5e) mup_equalizer_pane

0x2659,	// (0x000a4a77) mup_equalizer_pane_cp1_ParamLimits

0x2659,	// (0x000a4a77) mup_equalizer_pane_cp1

0x2676,	// (0x000a4a94) mup_equalizer_pane_cp2_ParamLimits

0x2676,	// (0x000a4a94) mup_equalizer_pane_cp2

0x2693,	// (0x000a4ab1) mup_equalizer_pane_cp3_ParamLimits

0x2693,	// (0x000a4ab1) mup_equalizer_pane_cp3

0x26b4,	// (0x000a4ad2) mup_equalizer_pane_cp4_ParamLimits

0x26b4,	// (0x000a4ad2) mup_equalizer_pane_cp4

0x26d5,	// (0x000a4af3) mup_equalizer_pane_cp5

0x26e9,	// (0x000a4b07) mup_equalizer_pane_cp6

0x26fd,	// (0x000a4b1b) mup_equalizer_pane_cp7

0xbefd,	// (0x000ae31b) bg_popup_call_poc_act_pane_g9

0xbf05,	// (0x000ae323) bg_popup_call_poc_act_pane_g10

0xbf0d,	// (0x000ae32b) bg_popup_call_poc_act_pane_g11

0x000a,

0x9de4,	// (0x000ac202) mup_scale_pane

0x9dfc,	// (0x000ac21a) mup_scale_pane_g1

0xac1b,	// (0x000ad039) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x000b17d7) mup_scale_pane_g

0xac3f,	// (0x000ad05d) msg_data_pane

0xac47,	// (0x000ad065) scroll_pane_cp017

0x2723,	// (0x000a4b41) bg_list_pane_cp04_ParamLimits

0x2723,	// (0x000a4b41) bg_list_pane_cp04

0xac57,	// (0x000ad075) msg_data_pane_g1

0x273b,	// (0x000a4b59) msg_data_pane_g2

0x2743,	// (0x000a4b61) msg_data_pane_g3

0x274b,	// (0x000a4b69) msg_data_pane_g4

0x2753,	// (0x000a4b71) msg_data_pane_g5

0x275b,	// (0x000a4b79) msg_data_pane_g6

0x2763,	// (0x000a4b81) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x000b17e6) msg_data_pane_g

0x276b,	// (0x000a4b89) msg_text_pane_ParamLimits

0x276b,	// (0x000a4b89) msg_text_pane

0x2796,	// (0x000a4bb4) qrid_highlight_pane_cp011_ParamLimits

0x2796,	// (0x000a4bb4) qrid_highlight_pane_cp011

0x9b89,	// (0x000abfa7) msg_body_pane

0x9b89,	// (0x000abfa7) msg_header_pane

0xac68,	// (0x000ad086) input_focus_pane_cp07

0xac7d,	// (0x000ad09b) msg_header_pane_t1_ParamLimits

0xac7d,	// (0x000ad09b) msg_header_pane_t1

0xad05,	// (0x000ad123) msg_header_pane_t2_ParamLimits

0xad05,	// (0x000ad123) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x000b17fa) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x000b17fa) msg_header_pane_t

0xac93,	// (0x000ad0b1) msg_body_pane_g1

0xad1c,	// (0x000ad13a) msg_body_pane_t1_ParamLimits

0xad1c,	// (0x000ad13a) msg_body_pane_t1

0xad4d,	// (0x000ad16b) msg_body_pane_t2_ParamLimits

0xad4d,	// (0x000ad16b) msg_body_pane_t2

0xad5f,	// (0x000ad17d) msg_body_pane_t3_ParamLimits

0xad5f,	// (0x000ad17d) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x000b17ff) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x000b17ff) msg_body_pane_t

0x27f4,	// (0x000a4c12) main_viewer_pane_g1_ParamLimits

0x27f4,	// (0x000a4c12) main_viewer_pane_g1

0x2802,	// (0x000a4c20) main_viewer_pane_g2_ParamLimits

0x2802,	// (0x000a4c20) main_viewer_pane_g2

0x2810,	// (0x000a4c2e) main_viewer_pane_g3_ParamLimits

0x2810,	// (0x000a4c2e) main_viewer_pane_g3

0x281f,	// (0x000a4c3d) main_viewer_pane_g4_ParamLimits

0x281f,	// (0x000a4c3d) main_viewer_pane_g4

0x93d0,	// (0x000ab7ee) main_viewer_pane_g5_ParamLimits

0x93d0,	// (0x000ab7ee) main_viewer_pane_g5

0x93d0,	// (0x000ab7ee) main_viewer_pane_g7_ParamLimits

0x93d0,	// (0x000ab7ee) main_viewer_pane_g7

0xa5b6,	// (0x000ac9d4) main_viewer_pane_g8_ParamLimits

0xa5b6,	// (0x000ac9d4) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x000b180f) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x000b180f) main_viewer_pane_g

0xac9b,	// (0x000ad0b9) viewer_content_pane_ParamLimits

0xac9b,	// (0x000ad0b9) viewer_content_pane

0x285b,	// (0x000a4c79) main_postcard_pane_g1_ParamLimits

0x285b,	// (0x000a4c79) main_postcard_pane_g1

0x2871,	// (0x000a4c8f) main_postcard_pane_g2_ParamLimits

0x2871,	// (0x000a4c8f) main_postcard_pane_g2

0x2887,	// (0x000a4ca5) main_postcard_pane_g3_ParamLimits

0x2887,	// (0x000a4ca5) main_postcard_pane_g3

0x0005,

0xf402,	// (0x000b1820) main_postcard_pane_g_ParamLimits

0xf402,	// (0x000b1820) main_postcard_pane_g

0x289e,	// (0x000a4cbc) main_postcard_pane_g4

0xc08f,	// (0x000ae4ad) smil_status_volume_pane_g2

0x28e1,	// (0x000a4cff) postcard_pane_ParamLimits

0x28e1,	// (0x000a4cff) postcard_pane

0xaca9,	// (0x000ad0c7) postcard_pane_g1_ParamLimits

0xaca9,	// (0x000ad0c7) postcard_pane_g1

0x2923,	// (0x000a4d41) postcard_pane_g2_ParamLimits

0x2923,	// (0x000a4d41) postcard_pane_g2

0x292f,	// (0x000a4d4d) postcard_pane_g3_ParamLimits

0x292f,	// (0x000a4d4d) postcard_pane_g3

0xacb7,	// (0x000ad0d5) postcard_pane_g4_ParamLimits

0xacb7,	// (0x000ad0d5) postcard_pane_g4

0x293b,	// (0x000a4d59) postcard_pane_g5_ParamLimits

0x293b,	// (0x000a4d59) postcard_pane_g5

0x2950,	// (0x000a4d6e) postcard_pane_g6_ParamLimits

0x2950,	// (0x000a4d6e) postcard_pane_g6

0xaca9,	// (0x000ad0c7) postcard_pane_g7_ParamLimits

0xaca9,	// (0x000ad0c7) postcard_pane_g7

0x0006,

0xf40f,	// (0x000b182d) postcard_pane_g_ParamLimits

0xf40f,	// (0x000b182d) postcard_pane_g

0x2964,	// (0x000a4d82) main_mp2_pane_g1_ParamLimits

0x2964,	// (0x000a4d82) main_mp2_pane_g1

0x2970,	// (0x000a4d8e) main_mp2_pane_g2_ParamLimits

0x2970,	// (0x000a4d8e) main_mp2_pane_g2

0x297c,	// (0x000a4d9a) main_mp2_pane_g3_ParamLimits

0x297c,	// (0x000a4d9a) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x000b183c) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x000b183c) main_mp2_pane_g

0x2988,	// (0x000a4da6) main_mp2_pane_t1_ParamLimits

0x2988,	// (0x000a4da6) main_mp2_pane_t1

0x299d,	// (0x000a4dbb) main_mp2_pane_t2_ParamLimits

0x299d,	// (0x000a4dbb) main_mp2_pane_t2

0x29af,	// (0x000a4dcd) main_mp2_pane_t3_ParamLimits

0x29af,	// (0x000a4dcd) main_mp2_pane_t3

0x0002,

0xf425,	// (0x000b1843) main_mp2_pane_t_ParamLimits

0xf425,	// (0x000b1843) main_mp2_pane_t

0xacc5,	// (0x000ad0e3) pec_content_pane_ParamLimits

0xacc5,	// (0x000ad0e3) pec_content_pane

0xa21a,	// (0x000ac638) scroll_pane_cp015

0xacd7,	// (0x000ad0f5) pec_attribute_pane_ParamLimits

0xacd7,	// (0x000ad0f5) pec_attribute_pane

0x29c1,	// (0x000a4ddf) pec_content_pane_g1_ParamLimits

0x29c1,	// (0x000a4ddf) pec_content_pane_g1

0xad71,	// (0x000ad18f) pec_content_pane_t1_ParamLimits

0xad71,	// (0x000ad18f) pec_content_pane_t1

0xad83,	// (0x000ad1a1) pec_content_pane_t2_ParamLimits

0xad83,	// (0x000ad1a1) pec_content_pane_t2

0x0001,

0xf42c,	// (0x000b184a) pec_content_pane_t_ParamLimits

0xf42c,	// (0x000b184a) pec_content_pane_t

0x29cd,	// (0x000a4deb) list_single_graphic_pane_cp01_ParamLimits

0x29cd,	// (0x000a4deb) list_single_graphic_pane_cp01

0x9de4,	// (0x000ac202) bg_popup_sub_pane_cp04

0xad95,	// (0x000ad1b3) popup_mup_playback_window_g1

0xada1,	// (0x000ad1bf) popup_mup_playback_window_t1

0xadb6,	// (0x000ad1d4) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x000b184f) popup_mup_playback_window_t

0xaded,	// (0x000ad20b) main_image_pane_g1_ParamLimits

0xaded,	// (0x000ad20b) main_image_pane_g1

0xae30,	// (0x000ad24e) scroll_pane_cp018_ParamLimits

0xae30,	// (0x000ad24e) scroll_pane_cp018

0xae48,	// (0x000ad266) scroll_pane_cp016_ParamLimits

0xae48,	// (0x000ad266) scroll_pane_cp016

0x2a9b,	// (0x000a4eb9) smil2_image_pane_ParamLimits

0x2a9b,	// (0x000a4eb9) smil2_image_pane

0x2acb,	// (0x000a4ee9) smil2_root_pane_ParamLimits

0x2acb,	// (0x000a4ee9) smil2_root_pane

0x2b03,	// (0x000a4f21) smil2_text_pane_ParamLimits

0x2b03,	// (0x000a4f21) smil2_text_pane

0x9b89,	// (0x000abfa7) bg_list_pane_cp06

0xae84,	// (0x000ad2a2) grid_radio_pane

0x9b89,	// (0x000abfa7) bg_popup_window_pane_cp06

0xae8c,	// (0x000ad2aa) main_fmradio_pane_t1

0xbf55,	// (0x000ae373) heading_pane_cp04

0xae9a,	// (0x000ad2b8) main_fmradio_pane_t2

0xbf5d,	// (0x000ae37b) popup_cale_lunar_info_window_g1

0xaea8,	// (0x000ad2c6) main_fmradio_pane_t3

0xbf65,	// (0x000ae383) popup_cale_lunar_info_window_g2

0xaeb6,	// (0x000ad2d4) main_fmradio_pane_t4

0x0001,

0xaec4,	// (0x000ad2e2) main_fmradio_pane_t5

0x0004,

0xf524,	// (0x000b1942) popup_cale_lunar_info_window_g

0xf446,	// (0x000b1864) main_fmradio_pane_t

0xaed2,	// (0x000ad2f0) wait_bar_pane_cp03

0xaeda,	// (0x000ad2f8) cell_fmradio_pane_ParamLimits

0xaeda,	// (0x000ad2f8) cell_fmradio_pane

0xaca9,	// (0x000ad0c7) cell_fmradio_pane_g1_ParamLimits

0xaca9,	// (0x000ad0c7) cell_fmradio_pane_g1

0x9b89,	// (0x000abfa7) grid_highlight_pane_cp011

0xaeed,	// (0x000ad30b) poc_content_pane_ParamLimits

0xaeed,	// (0x000ad30b) poc_content_pane

0xaeff,	// (0x000ad31d) scroll_pane_cp019

0x2b83,	// (0x000a4fa1) popup_call_poc_act_window_ParamLimits

0x2b83,	// (0x000a4fa1) popup_call_poc_act_window

0x2ba7,	// (0x000a4fc5) popup_call_poc_inact_window_ParamLimits

0x2ba7,	// (0x000a4fc5) popup_call_poc_inact_window

0xf4e8,	// (0x000b1906) bg_popup_call_poc_act_pane_g

0xbf15,	// (0x000ae333) bg_popup_call_poc_inact_pane_g1

0xbf1d,	// (0x000ae33b) bg_popup_call_poc_inact_pane_g2

0xaf07,	// (0x000ad325) popup_call_poc_act_window_g2

0xbf25,	// (0x000ae343) bg_popup_call_poc_inact_pane_g3

0xbea5,	// (0x000ae2c3) bg_popup_call_poc_inact_pane_g4

0xbf2d,	// (0x000ae34b) bg_popup_call_poc_inact_pane_g5

0xaf0f,	// (0x000ad32d) popup_call_poc_act_window_t1_ParamLimits

0xaf0f,	// (0x000ad32d) popup_call_poc_act_window_t1

0xaf37,	// (0x000ad355) popup_call_poc_act_window_t2_ParamLimits

0xaf37,	// (0x000ad355) popup_call_poc_act_window_t2

0xaf5f,	// (0x000ad37d) popup_call_poc_act_window_t3_ParamLimits

0xaf5f,	// (0x000ad37d) popup_call_poc_act_window_t3

0xaf87,	// (0x000ad3a5) popup_call_poc_act_window_t4_ParamLimits

0xaf87,	// (0x000ad3a5) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x000b186f) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x000b186f) popup_call_poc_act_window_t

0xbf35,	// (0x000ae353) bg_popup_call_poc_inact_pane_g6

0xbf3d,	// (0x000ae35b) bg_popup_call_poc_inact_pane_g7

0xbf45,	// (0x000ae363) bg_popup_call_poc_inact_pane_g8

0xaf99,	// (0x000ad3b7) popup_call_poc_inact_window_g2

0xbf4d,	// (0x000ae36b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4ff,	// (0x000b191d) bg_popup_call_poc_inact_pane_g

0xafa1,	// (0x000ad3bf) popup_call_poc_inact_window_t1_ParamLimits

0xafa1,	// (0x000ad3bf) popup_call_poc_inact_window_t1

0xafb6,	// (0x000ad3d4) popup_call_poc_inact_window_t2_ParamLimits

0xafb6,	// (0x000ad3d4) popup_call_poc_inact_window_t2

0xafcb,	// (0x000ad3e9) popup_call_poc_inact_window_t3_ParamLimits

0xafcb,	// (0x000ad3e9) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x000b1878) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x000b1878) popup_call_poc_inact_window_t

0xbff9,	// (0x000ae417) context_pane_ParamLimits

0x3422,	// (0x000a5840) signal_pane_ParamLimits

0xa083,	// (0x000ac4a1) main_call2_pane

0x941b,	// (0x000ab839) popup_phob_thumbnail2_window_ParamLimits

0x941b,	// (0x000ab839) popup_phob_thumbnail2_window

0x93b8,	// (0x000ab7d6) aid_hotspot_pointer_arrow_pane

0x93c0,	// (0x000ab7de) aid_hotspot_pointer_hand_pane

0x2f10,	// (0x000a532e) phob_pre_status_pane_g5

0xe6ea,	// (0x000b0b08) cams_zoom_pane_ParamLimits

0xe6ea,	// (0x000b0b08) image_vga_pane_ParamLimits

0x9e5f,	// (0x000ac27d) main_camera_pane_g1_ParamLimits

0x9e5f,	// (0x000ac27d) main_camera_pane_g2_ParamLimits

0x9e5f,	// (0x000ac27d) main_camera_pane_g3_ParamLimits

0x9e5f,	// (0x000ac27d) main_camera_pane_g4_ParamLimits

0x9e5f,	// (0x000ac27d) main_camera_pane_g5_ParamLimits

0x9e5f,	// (0x000ac27d) main_camera_pane_g6_ParamLimits

0x9e5f,	// (0x000ac27d) main_camera_pane_g7_ParamLimits

0xf185,	// (0x000b15a3) main_camera_pane_g_ParamLimits

0xa08b,	// (0x000ac4a9) main_camera_pane_t1_ParamLimits

0xa08b,	// (0x000ac4a9) main_camera_pane_t2_ParamLimits

0xf196,	// (0x000b15b4) main_camera_pane_t_ParamLimits

0x9de4,	// (0x000ac202) bg_popup_preview_window_pane_cp01_ParamLimits

0x9de4,	// (0x000ac202) bg_popup_preview_window_pane_cp01

0xafe0,	// (0x000ad3fe) popup_phob_thumbnail2_window_g1_ParamLimits

0xafe0,	// (0x000ad3fe) popup_phob_thumbnail2_window_g1

0x9b89,	// (0x000abfa7) call2_cli_visual_pane

0x2bdb,	// (0x000a4ff9) popup_call2_audio_conf_window_ParamLimits

0x2bdb,	// (0x000a4ff9) popup_call2_audio_conf_window

0x2bfb,	// (0x000a5019) popup_call2_audio_first_window_ParamLimits

0x2bfb,	// (0x000a5019) popup_call2_audio_first_window

0x2c91,	// (0x000a50af) popup_call2_audio_in_window_ParamLimits

0x2c91,	// (0x000a50af) popup_call2_audio_in_window

0x2cd9,	// (0x000a50f7) popup_call2_audio_out_window_ParamLimits

0x2cd9,	// (0x000a50f7) popup_call2_audio_out_window

0x2d43,	// (0x000a5161) popup_call2_audio_second_window_ParamLimits

0x2d43,	// (0x000a5161) popup_call2_audio_second_window

0x2da9,	// (0x000a51c7) popup_call2_audio_wait_window_ParamLimits

0x2da9,	// (0x000a51c7) popup_call2_audio_wait_window

0x9b89,	// (0x000abfa7) bg_popup_call2_act_pane_cp03

0x9dc6,	// (0x000ac1e4) list_conf_pane_cp

0xafec,	// (0x000ad40a) popup_call2_audio_conf_window_t1

0xaffa,	// (0x000ad418) list_single_graphic_popup_conf2_pane_ParamLimits

0xaffa,	// (0x000ad418) list_single_graphic_popup_conf2_pane

0xa802,	// (0x000acc20) list_highlight_pane_cp04

0xb00d,	// (0x000ad42b) list_single_graphic_popup_conf2_pane_g1

0xa813,	// (0x000acc31) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x000b187f) list_single_graphic_popup_conf2_pane_g

0xb017,	// (0x000ad435) list_single_graphic_popup_conf2_pane_t1

0xb025,	// (0x000ad443) bg_popup_call2_act_pane_cp01_ParamLimits

0xb025,	// (0x000ad443) bg_popup_call2_act_pane_cp01

0xb0af,	// (0x000ad4cd) call_type_pane_cp05_ParamLimits

0xb0af,	// (0x000ad4cd) call_type_pane_cp05

0xb103,	// (0x000ad521) popup_call2_audio_second_window_g1_ParamLimits

0xb103,	// (0x000ad521) popup_call2_audio_second_window_g1

0xb157,	// (0x000ad575) popup_call2_audio_second_window_g2_ParamLimits

0xb157,	// (0x000ad575) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x000b1884) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x000b1884) popup_call2_audio_second_window_g

0xb1bc,	// (0x000ad5da) popup_call2_audio_second_window_t1_ParamLimits

0xb1bc,	// (0x000ad5da) popup_call2_audio_second_window_t1

0xb277,	// (0x000ad695) popup_call2_audio_second_window_t2_ParamLimits

0xb277,	// (0x000ad695) popup_call2_audio_second_window_t2

0xb2ca,	// (0x000ad6e8) popup_call2_audio_second_window_t3_ParamLimits

0xb2ca,	// (0x000ad6e8) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x000b188b) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x000b188b) popup_call2_audio_second_window_t

0x9b89,	// (0x000abfa7) bg_popup_call2_in_pane_cp02

0x9b93,	// (0x000abfb1) call_type_pane_cp04

0x2de3,	// (0x000a5201) popup_call2_audio_wait_window_g1

0x2deb,	// (0x000a5209) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x000b1894) popup_call2_audio_wait_window_g

0x9bab,	// (0x000abfc9) popup_call2_audio_wait_window_t3

0xb3bd,	// (0x000ad7db) bg_popup_call2_act_pane_ParamLimits

0xb3bd,	// (0x000ad7db) bg_popup_call2_act_pane

0xb47d,	// (0x000ad89b) call_type_pane_cp03_ParamLimits

0xb47d,	// (0x000ad89b) call_type_pane_cp03

0xb4e1,	// (0x000ad8ff) popup_call2_audio_first_window_g1_ParamLimits

0xb4e1,	// (0x000ad8ff) popup_call2_audio_first_window_g1

0xb551,	// (0x000ad96f) popup_call2_audio_first_window_g2_ParamLimits

0xb551,	// (0x000ad96f) popup_call2_audio_first_window_g2

0xb5b5,	// (0x000ad9d3) popup_call2_audio_first_window_g3_ParamLimits

0xb5b5,	// (0x000ad9d3) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x000b1899) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x000b1899) popup_call2_audio_first_window_g

0xb730,	// (0x000adb4e) popup_call2_audio_first_window_t1_ParamLimits

0xb730,	// (0x000adb4e) popup_call2_audio_first_window_t1

0xb833,	// (0x000adc51) popup_call2_audio_first_window_t4_ParamLimits

0xb833,	// (0x000adc51) popup_call2_audio_first_window_t4

0xb916,	// (0x000add34) popup_call2_audio_first_window_t5_ParamLimits

0xb916,	// (0x000add34) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x000b18a4) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x000b18a4) popup_call2_audio_first_window_t

0x9ddc,	// (0x000ac1fa) bg_popup_call2_act_pane_g1

0xbf6d,	// (0x000ae38b) popup_cale_lunar_info_window_t1

0xbf7b,	// (0x000ae399) popup_cale_lunar_info_window_t2

0xbf89,	// (0x000ae3a7) popup_cale_lunar_info_window_t3

0x9b89,	// (0x000abfa7) bg_popup_call2_bubble_pane

0xba17,	// (0x000ade35) bg_popup_call2_in_pane_cp01_ParamLimits

0xba17,	// (0x000ade35) bg_popup_call2_in_pane_cp01

0x90f8,	// (0x000ab516) call_type_pane_cp02

0x2df3,	// (0x000a5211) popup_call2_audio_out_window_g1_ParamLimits

0x2df3,	// (0x000a5211) popup_call2_audio_out_window_g1

0xba5f,	// (0x000ade7d) popup_call2_audio_out_window_g2_ParamLimits

0xba5f,	// (0x000ade7d) popup_call2_audio_out_window_g2

0x2e1f,	// (0x000a523d) popup_call2_audio_out_window_g3_ParamLimits

0x2e1f,	// (0x000a523d) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x000b18ad) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x000b18ad) popup_call2_audio_out_window_g

0xba96,	// (0x000adeb4) popup_call2_audio_out_window_t1_ParamLimits

0xba96,	// (0x000adeb4) popup_call2_audio_out_window_t1

0xbaf5,	// (0x000adf13) popup_call2_audio_out_window_t2_ParamLimits

0xbaf5,	// (0x000adf13) popup_call2_audio_out_window_t2

0xbb49,	// (0x000adf67) popup_call2_audio_out_window_t3_ParamLimits

0xbb49,	// (0x000adf67) popup_call2_audio_out_window_t3

0xbb5f,	// (0x000adf7d) popup_call2_audio_out_window_t4_ParamLimits

0xbb5f,	// (0x000adf7d) popup_call2_audio_out_window_t4

0xbb75,	// (0x000adf93) popup_call2_audio_out_window_t5_ParamLimits

0xbb75,	// (0x000adf93) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x000b18b6) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x000b18b6) popup_call2_audio_out_window_t

0xbbd9,	// (0x000adff7) bg_popup_call2_in_pane_ParamLimits

0xbbd9,	// (0x000adff7) bg_popup_call2_in_pane

0xbc35,	// (0x000ae053) popup_call2_audio_in_window_g1_ParamLimits

0xbc35,	// (0x000ae053) popup_call2_audio_in_window_g1

0xbc6d,	// (0x000ae08b) popup_call2_audio_in_window_g2_ParamLimits

0xbc6d,	// (0x000ae08b) popup_call2_audio_in_window_g2

0xbca5,	// (0x000ae0c3) popup_call2_audio_in_window_g3_ParamLimits

0xbca5,	// (0x000ae0c3) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x000b18c3) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x000b18c3) popup_call2_audio_in_window_g

0xbcfd,	// (0x000ae11b) popup_call2_audio_in_window_t1_ParamLimits

0xbcfd,	// (0x000ae11b) popup_call2_audio_in_window_t1

0xbd7d,	// (0x000ae19b) popup_call2_audio_in_window_t2_ParamLimits

0xbd7d,	// (0x000ae19b) popup_call2_audio_in_window_t2

0xbdfd,	// (0x000ae21b) popup_call2_audio_in_window_t3_ParamLimits

0xbdfd,	// (0x000ae21b) popup_call2_audio_in_window_t3

0xbe17,	// (0x000ae235) popup_call2_audio_in_window_t4_ParamLimits

0xbe17,	// (0x000ae235) popup_call2_audio_in_window_t4

0xbe29,	// (0x000ae247) popup_call2_audio_in_window_t5_ParamLimits

0xbe29,	// (0x000ae247) popup_call2_audio_in_window_t5

0xbe3b,	// (0x000ae259) popup_call2_audio_in_window_t6_ParamLimits

0xbe3b,	// (0x000ae259) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x000b18cc) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x000b18cc) popup_call2_audio_in_window_t

0x9ddc,	// (0x000ac1fa) bg_popup_call2_in_pane_g1

0xbf97,	// (0x000ae3b5) popup_cale_lunar_info_window_t4

0x0003,

0xf529,	// (0x000b1947) popup_cale_lunar_info_window_t

0x9de4,	// (0x000ac202) bg_popup_call2_rect_pane_ParamLimits

0x9de4,	// (0x000ac202) bg_popup_call2_rect_pane

0x9b89,	// (0x000abfa7) call2_cli_visual_graphic_pane

0x9b89,	// (0x000abfa7) call2_cli_visual_text_pane

0x9442,	// (0x000ab860) smil_status_volume_pane_g3

0x0002,

0x9dfc,	// (0x000ac21a) call2_cli_visual_graphic_pane_g1

0x9dfc,	// (0x000ac21a) call2_cli_visual_graphic_pane_g2

0x9dfc,	// (0x000ac21a) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x000b18d9) call2_cli_visual_graphic_pane_g

0xbe4d,	// (0x000ae26b) bg_popup_call2_rect_pane_g1

0x9fa8,	// (0x000ac3c6) bg_popup_call2_rect_pane_g2

0xbe55,	// (0x000ae273) bg_popup_call2_rect_pane_g3

0xbe5d,	// (0x000ae27b) bg_popup_call2_rect_pane_g4

0xbe65,	// (0x000ae283) bg_popup_call2_rect_pane_g5

0xbe6d,	// (0x000ae28b) bg_popup_call2_rect_pane_g6

0xbe75,	// (0x000ae293) bg_popup_call2_rect_pane_g7

0xbe7d,	// (0x000ae29b) bg_popup_call2_rect_pane_g8

0xbe85,	// (0x000ae2a3) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x000b18e0) bg_popup_call2_rect_pane_g

0xbe8d,	// (0x000ae2ab) bg_popup_call2_bubble_pane_g1

0xbe95,	// (0x000ae2b3) bg_popup_call2_bubble_pane_g2

0xbe9d,	// (0x000ae2bb) bg_popup_call2_bubble_pane_g3

0xbea5,	// (0x000ae2c3) bg_popup_call2_bubble_pane_g4

0xbead,	// (0x000ae2cb) bg_popup_call2_bubble_pane_g5

0xbeb5,	// (0x000ae2d3) bg_popup_call2_bubble_pane_g6

0xbebd,	// (0x000ae2db) bg_popup_call2_bubble_pane_g7

0xbec5,	// (0x000ae2e3) bg_popup_call2_bubble_pane_g8

0xbecd,	// (0x000ae2eb) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x000b18f3) bg_popup_call2_bubble_pane_g

0x0c4f,	// (0x000a306d) aid_cale_week_size_cell_pane

0x11ff,	// (0x000a361d) aid_cams_cif_uncrop_pane_ParamLimits

0x11ff,	// (0x000a361d) aid_cams_cif_uncrop_pane

0x1355,	// (0x000a3773) aid_cams_size_cell_ParamLimits

0x1355,	// (0x000a3773) aid_cams_size_cell

0x1369,	// (0x000a3787) grid_cams_pane_ParamLimits

0x1383,	// (0x000a37a1) linegrid_cams_pane_ParamLimits

0x1469,	// (0x000a3887) call_video_pane_t1

0x1487,	// (0x000a38a5) call_video_pane_t2

0x0001,

0xf1e2,	// (0x000b1600) call_video_pane_t

0x18ad,	// (0x000a3ccb) aid_cale_month_size_cell_pane_ParamLimits

0x18ad,	// (0x000a3ccb) aid_cale_month_size_cell_pane

0xf56d,	// (0x000b198b) smil_status_volume_pane_g

0x944f,	// (0x000ab86d) volume_smil_pane_ParamLimits

0x060a,	// (0x000a2a28) aid_popup2_width_pane

0x0bb4,	// (0x000a2fd2) cell_qdial_pane_g4_ParamLimits

0x0bb4,	// (0x000a2fd2) cell_qdial_pane_g4

0x246f,	// (0x000a488d) aid_blid_cardinal_pane_ParamLimits

0x247b,	// (0x000a4899) aid_blid_destination_pane_ParamLimits

0x247b,	// (0x000a4899) aid_blid_destination_pane

0x9de4,	// (0x000ac202) bg_popup_call_poc_act_pane_ParamLimits

0x9de4,	// (0x000ac202) bg_popup_call_poc_act_pane

0x9de4,	// (0x000ac202) bg_popup_call_poc_inact_pane_ParamLimits

0x9de4,	// (0x000ac202) bg_popup_call_poc_inact_pane

0xbed5,	// (0x000ae2f3) bg_popup_call_poc_act_pane_g1

0xbedd,	// (0x000ae2fb) bg_popup_call_poc_act_pane_g2

0xbee5,	// (0x000ae303) bg_popup_call_poc_act_pane_g3

0xbea5,	// (0x000ae2c3) bg_popup_call_poc_act_pane_g4

0xbead,	// (0x000ae2cb) bg_popup_call_poc_act_pane_g5

0xbeed,	// (0x000ae30b) bg_popup_call_poc_act_pane_g6

0xbebd,	// (0x000ae2db) bg_popup_call_poc_act_pane_g7

0xbef5,	// (0x000ae313) bg_popup_call_poc_act_pane_g8

0x9b89,	// (0x000abfa7) main_usb_pane

0x93f6,	// (0x000ab814) popup_cale_lunar_info_window

0x1753,	// (0x000a3b71) im_reading_pane_t1_ParamLimits

0xa172,	// (0x000ac590) list_im_pane_ParamLimits

0xa183,	// (0x000ac5a1) scroll_pane_cp07_ParamLimits

0x9b89,	// (0x000abfa7) grid_highlight_pane_cp012

0x9de4,	// (0x000ac202) mup_scale_pane_ParamLimits

0xaca9,	// (0x000ad0c7) main_usb_pane_g1_ParamLimits

0xaca9,	// (0x000ad0c7) main_usb_pane_g1

0x2e6e,	// (0x000a528c) main_usb_pane_g2_ParamLimits

0x2e6e,	// (0x000a528c) main_usb_pane_g2

0x0001,

0xf512,	// (0x000b1930) main_usb_pane_g_ParamLimits

0xf512,	// (0x000b1930) main_usb_pane_g

0x2e84,	// (0x000a52a2) main_usb_pane_t1_ParamLimits

0x2e84,	// (0x000a52a2) main_usb_pane_t1

0x2e96,	// (0x000a52b4) main_usb_pane_t2_ParamLimits

0x2e96,	// (0x000a52b4) main_usb_pane_t2

0x2ea8,	// (0x000a52c6) main_usb_pane_t3_ParamLimits

0x2ea8,	// (0x000a52c6) main_usb_pane_t3

0x2eba,	// (0x000a52d8) main_usb_pane_t4_ParamLimits

0x2eba,	// (0x000a52d8) main_usb_pane_t4

0x2ecc,	// (0x000a52ea) main_usb_pane_t5_ParamLimits

0x2ecc,	// (0x000a52ea) main_usb_pane_t5

0x2ede,	// (0x000a52fc) main_usb_pane_t6_ParamLimits

0x2ede,	// (0x000a52fc) main_usb_pane_t6

0x0005,

0xf517,	// (0x000b1935) main_usb_pane_t_ParamLimits

0x241e,	// (0x000a483c) aid_text_placing

0x2427,	// (0x000a4845) main_location2_pane_t1_ParamLimits

0x2439,	// (0x000a4857) main_location2_pane_t2_ParamLimits

0x244b,	// (0x000a4869) main_location2_pane_t3_ParamLimits

0x245d,	// (0x000a487b) main_location2_pane_t4_ParamLimits

0x245d,	// (0x000a487b) main_location2_pane_t4

0xf31e,	// (0x000b173c) main_location2_pane_t_ParamLimits

0x9e12,	// (0x000ac230) find_pinb_pane_g2_ParamLimits

0x9e12,	// (0x000ac230) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x000b14b8) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x000b14b8) find_pinb_pane_g

0x9e1e,	// (0x000ac23c) find_pinb_pane_t1_ParamLimits

0x9e30,	// (0x000ac24e) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x000b14bd) find_pinb_pane_t_ParamLimits

0x9b89,	// (0x000abfa7) main_call3_pane

0x1d94,	// (0x000a41b2) cale_month_day_heading_pane_t1_ParamLimits

0x1dd6,	// (0x000a41f4) cale_month_day_heading_pane_t2_ParamLimits

0x1e0b,	// (0x000a4229) cale_month_day_heading_pane_t3_ParamLimits

0x1e40,	// (0x000a425e) cale_month_day_heading_pane_t4_ParamLimits

0x1e7d,	// (0x000a429b) cale_month_day_heading_pane_t5_ParamLimits

0x1ec2,	// (0x000a42e0) cale_month_day_heading_pane_t6_ParamLimits

0x1f07,	// (0x000a4325) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x000b1638) cale_month_day_heading_pane_t_ParamLimits

0xa3f8,	// (0x000ac816) smil_status_volume_pane

0x28ff,	// (0x000a4d1d) postcard_address_pane_ParamLimits

0x28ff,	// (0x000a4d1d) postcard_address_pane

0x2911,	// (0x000a4d2f) postcard_message_pane_ParamLimits

0x2911,	// (0x000a4d2f) postcard_message_pane

0x2e4b,	// (0x000a5269) call2_cli_visual_pane_t1_ParamLimits

0x2e4b,	// (0x000a5269) call2_cli_visual_pane_t1

0xc0ba,	// (0x000ae4d8) postcard_message_pane_t1_ParamLimits

0xc0ba,	// (0x000ae4d8) postcard_message_pane_t1

0xc0a2,	// (0x000ae4c0) postcard_address_pane_t1_ParamLimits

0xc0a2,	// (0x000ae4c0) postcard_address_pane_t1

0x35d5,	// (0x000a59f3) popup_call3_audio_in_window_ParamLimits

0x35d5,	// (0x000a59f3) popup_call3_audio_in_window

0x3460,	// (0x000a587e) bg_popup_call3_in_pane_ParamLimits

0x3460,	// (0x000a587e) bg_popup_call3_in_pane

0x34d6,	// (0x000a58f4) popup_call3_audio_in_window_g1_ParamLimits

0x34d6,	// (0x000a58f4) popup_call3_audio_in_window_g1

0x34f6,	// (0x000a5914) popup_call3_audio_in_window_g2_ParamLimits

0x34f6,	// (0x000a5914) popup_call3_audio_in_window_g2

0x3516,	// (0x000a5934) popup_call3_audio_in_window_g3_ParamLimits

0x3516,	// (0x000a5934) popup_call3_audio_in_window_g3

0x0003,

0xf574,	// (0x000b1992) popup_call3_audio_in_window_g_ParamLimits

0xf574,	// (0x000b1992) popup_call3_audio_in_window_g

0x3547,	// (0x000a5965) popup_call3_audio_in_window_t1_ParamLimits

0x3547,	// (0x000a5965) popup_call3_audio_in_window_t1

0x3585,	// (0x000a59a3) popup_call3_audio_in_window_t2_ParamLimits

0x3585,	// (0x000a59a3) popup_call3_audio_in_window_t2

0x35c3,	// (0x000a59e1) popup_call3_audio_in_window_t3_ParamLimits

0x35c3,	// (0x000a59e1) popup_call3_audio_in_window_t3

0x0002,

0xf57d,	// (0x000b199b) popup_call3_audio_in_window_t_ParamLimits

0xf57d,	// (0x000b199b) popup_call3_audio_in_window_t

0xa083,	// (0x000ac4a1) bg_popup_call3_rect_pane

0xbe4d,	// (0x000ae26b) bg_popup_call3_rect_pane_g1

0x9fa8,	// (0x000ac3c6) bg_popup_call3_rect_pane_g2

0xbe55,	// (0x000ae273) bg_popup_call3_rect_pane_g3

0xbe5d,	// (0x000ae27b) bg_popup_call3_rect_pane_g4

0xbe65,	// (0x000ae283) bg_popup_call3_rect_pane_g5

0xbe6d,	// (0x000ae28b) bg_popup_call3_rect_pane_g6

0xbe75,	// (0x000ae293) bg_popup_call3_rect_pane_g7

0xe689,	// (0x000b0aa7) mup_visualizer_osc_pane

0xe689,	// (0x000b0aa7) mup_visualizer_spec_pane

0x3490,	// (0x000a58ae) call3_video_qcif_pane_ParamLimits

0x3490,	// (0x000a58ae) call3_video_qcif_pane

0x34a3,	// (0x000a58c1) call3_video_qcif_uncrop_pane_ParamLimits

0x34a3,	// (0x000a58c1) call3_video_qcif_uncrop_pane

0x34b1,	// (0x000a58cf) call3_video_subqcif_pane_ParamLimits

0x34b1,	// (0x000a58cf) call3_video_subqcif_pane

0x34c5,	// (0x000a58e3) call3_video_subqcif_uncrop_pane_ParamLimits

0x34c5,	// (0x000a58e3) call3_video_subqcif_uncrop_pane

0x3536,	// (0x000a5954) popup_call3_audio_in_window_g4_ParamLimits

0x3536,	// (0x000a5954) popup_call3_audio_in_window_g4

0xe689,	// (0x000b0aa7) mup_spec_half_pane

0xe689,	// (0x000b0aa7) mup_spec_half_pane_cp

0xe689,	// (0x000b0aa7) mup_osc_middle_pane

0xa0b9,	// (0x000ac4d7) mup_visualizer_osc_pane_g1

0xc055,	// (0x000ae473) mup_spec_bar_pane_ParamLimits

0xc055,	// (0x000ae473) mup_spec_bar_pane

0xa0b9,	// (0x000ac4d7) mup_spec_bar_pane_g1

0xa0b9,	// (0x000ac4d7) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x000b17b6) mup_spec_bar_pane_g

0x0c4f,	// (0x000a306d) aid_cale_week_size_cell_pane_ParamLimits

0x0c69,	// (0x000a3087) bg_cale_heading_pane_ParamLimits

0x9fe5,	// (0x000ac403) bg_cale_pane_cp01_ParamLimits

0x0c81,	// (0x000a309f) cale_week_corner_pane_ParamLimits

0x0ca0,	// (0x000a30be) cale_week_day_heading_pane_ParamLimits

0x0cbd,	// (0x000a30db) cale_week_scroll_pane_g1_ParamLimits

0x0cd0,	// (0x000a30ee) cale_week_scroll_pane_g2_ParamLimits

0x0ce8,	// (0x000a3106) cale_week_scroll_pane_g3_ParamLimits

0x0d00,	// (0x000a311e) cale_week_scroll_pane_g4_ParamLimits

0x0d18,	// (0x000a3136) cale_week_scroll_pane_g5_ParamLimits

0x0d38,	// (0x000a3156) cale_week_scroll_pane_g6_ParamLimits

0x0d58,	// (0x000a3176) cale_week_scroll_pane_g7_ParamLimits

0x0d78,	// (0x000a3196) cale_week_scroll_pane_g8_ParamLimits

0x0d9c,	// (0x000a31ba) cale_week_scroll_pane_g9_ParamLimits

0x0db4,	// (0x000a31d2) cale_week_scroll_pane_g10_ParamLimits

0x0dcc,	// (0x000a31ea) cale_week_scroll_pane_g11_ParamLimits

0x0de4,	// (0x000a3202) cale_week_scroll_pane_g12_ParamLimits

0x0dfc,	// (0x000a321a) cale_week_scroll_pane_g13_ParamLimits

0x0dfc,	// (0x000a321a) cale_week_scroll_pane_g14_ParamLimits

0x0dfc,	// (0x000a321a) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x000b1549) cale_week_scroll_pane_g_ParamLimits

0x0e38,	// (0x000a3256) cale_week_time_pane_ParamLimits

0x0e5c,	// (0x000a327a) grid_cale_week_pane_ParamLimits

0xa002,	// (0x000ac420) listscroll_cale_week_pane_t1

0xa014,	// (0x000ac432) scroll_pane_cp08_ParamLimits

0x190d,	// (0x000a3d2b) cale_month_corner_pane_ParamLimits

0xa3ce,	// (0x000ac7ec) cale_month_pane_t1

0x1d27,	// (0x000a4145) cale_month_week_pane_ParamLimits

0x2273,	// (0x000a4691) popup_call_status_window_g1_ParamLimits

0x2287,	// (0x000a46a5) popup_call_status_window_g2_ParamLimits

0x229b,	// (0x000a46b9) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x000b16c3) popup_call_status_window_g_ParamLimits

0xa78e,	// (0x000acbac) aid_call2_pane

0x27ac,	// (0x000a4bca) msg_header_pane_g1

0x28ff,	// (0x000a4d1d) postcard_address2_pane_ParamLimits

0x28ff,	// (0x000a4d1d) postcard_address2_pane

0x2911,	// (0x000a4d2f) postcard_message2_pane_ParamLimits

0x2911,	// (0x000a4d2f) postcard_message2_pane

0x3430,	// (0x000a584e) message2_row_pane_ParamLimits

0x3430,	// (0x000a584e) message2_row_pane

0x344d,	// (0x000a586b) address2_row_pane_ParamLimits

0x344d,	// (0x000a586b) address2_row_pane

0xc014,	// (0x000ae432) postcard_message2_row_pane_g1

0xc01c,	// (0x000ae43a) postcard_message2_row_pane_t1

0xc014,	// (0x000ae432) address2_row_pane_g1

0xc01c,	// (0x000ae43a) address2_row_pane_t1

0x1196,	// (0x000a35b4) aid_size_cell_vorec

0x9b89,	// (0x000abfa7) main_rss_pane

0xc02a,	// (0x000ae448) rss_list_single_pane_ParamLimits

0xc02a,	// (0x000ae448) rss_list_single_pane

0xc046,	// (0x000ae464) rss_list_single_pane_t1

0xc046,	// (0x000ae464) rss_list_single_pane_t2

0x0001,

0xf568,	// (0x000b1986) rss_list_single_pane_t

0x9b89,	// (0x000abfa7) main_camera2_pane

0x9b89,	// (0x000abfa7) main_video2_pane

0x9464,	// (0x000ab882) cams_zoom_pane_cp2_ParamLimits

0x9464,	// (0x000ab882) cams_zoom_pane_cp2

0x9464,	// (0x000ab882) image2_vga_pane_ParamLimits

0x9464,	// (0x000ab882) image2_vga_pane

0x9472,	// (0x000ab890) main_camera2_pane_g1_ParamLimits

0x9472,	// (0x000ab890) main_camera2_pane_g1

0x9472,	// (0x000ab890) main_camera2_pane_g2_ParamLimits

0x9472,	// (0x000ab890) main_camera2_pane_g2

0x9472,	// (0x000ab890) main_camera2_pane_g3_ParamLimits

0x9472,	// (0x000ab890) main_camera2_pane_g3

0x9472,	// (0x000ab890) main_camera2_pane_g4_ParamLimits

0x9472,	// (0x000ab890) main_camera2_pane_g4

0x9472,	// (0x000ab890) main_camera2_pane_g5_ParamLimits

0x9472,	// (0x000ab890) main_camera2_pane_g5

0x9472,	// (0x000ab890) main_camera2_pane_g6_ParamLimits

0x9472,	// (0x000ab890) main_camera2_pane_g6

0x9472,	// (0x000ab890) main_camera2_pane_g7_ParamLimits

0x9472,	// (0x000ab890) main_camera2_pane_g7

0x9472,	// (0x000ab890) main_camera2_pane_g8_ParamLimits

0x9472,	// (0x000ab890) main_camera2_pane_g8

0x0008,

0xf584,	// (0x000b19a2) main_camera2_pane_g_ParamLimits

0xf584,	// (0x000b19a2) main_camera2_pane_g

0x35f7,	// (0x000a5a15) main_camera2_pane_t1_ParamLimits

0x35f7,	// (0x000a5a15) main_camera2_pane_t1

0x35f7,	// (0x000a5a15) main_camera2_pane_t2_ParamLimits

0x35f7,	// (0x000a5a15) main_camera2_pane_t2

0x35f7,	// (0x000a5a15) main_camera2_pane_t3_ParamLimits

0x35f7,	// (0x000a5a15) main_camera2_pane_t3

0x35f7,	// (0x000a5a15) main_camera2_pane_t4_ParamLimits

0x35f7,	// (0x000a5a15) main_camera2_pane_t4

0x0006,

0xf597,	// (0x000b19b5) main_camera2_pane_t_ParamLimits

0xf597,	// (0x000b19b5) main_camera2_pane_t

0x94b6,	// (0x000ab8d4) cams_zoom_pane_cp4_ParamLimits

0x94b6,	// (0x000ab8d4) cams_zoom_pane_cp4

0x360b,	// (0x000a5a29) image2_cif_pane_ParamLimits

0x360b,	// (0x000a5a29) image2_cif_pane

0x9048,	// (0x000ab466) image2_subqcif_pane_ParamLimits

0x9048,	// (0x000ab466) image2_subqcif_pane

0x3619,	// (0x000a5a37) main_video2_pane_g1_ParamLimits

0x3619,	// (0x000a5a37) main_video2_pane_g1

0x3619,	// (0x000a5a37) main_video2_pane_g2_ParamLimits

0x3619,	// (0x000a5a37) main_video2_pane_g2

0x3619,	// (0x000a5a37) main_video2_pane_g3_ParamLimits

0x3619,	// (0x000a5a37) main_video2_pane_g3

0x3619,	// (0x000a5a37) main_video2_pane_g4_ParamLimits

0x3619,	// (0x000a5a37) main_video2_pane_g4

0x3619,	// (0x000a5a37) main_video2_pane_g5_ParamLimits

0x3619,	// (0x000a5a37) main_video2_pane_g5

0x3619,	// (0x000a5a37) main_video2_pane_g6_ParamLimits

0x3619,	// (0x000a5a37) main_video2_pane_g6

0x0005,

0xf5a6,	// (0x000b19c4) main_video2_pane_g_ParamLimits

0xf5a6,	// (0x000b19c4) main_video2_pane_g

0x3627,	// (0x000a5a45) main_video2_pane_t1_ParamLimits

0x3627,	// (0x000a5a45) main_video2_pane_t1

0x3627,	// (0x000a5a45) main_video2_pane_t2_ParamLimits

0x3627,	// (0x000a5a45) main_video2_pane_t2

0x3627,	// (0x000a5a45) main_video2_pane_t3_ParamLimits

0x3627,	// (0x000a5a45) main_video2_pane_t3

0x0002,

0xf5b3,	// (0x000b19d1) main_video2_pane_t_ParamLimits

0xf5b3,	// (0x000b19d1) main_video2_pane_t

0x2f72,	// (0x000a5390) call_muted_g2

0x0001,

0xf55a,	// (0x000b1978) call_muted_g

0x9b89,	// (0x000abfa7) main_mup2_pane

0xab92,	// (0x000acfb0) main_mup2_pane_g1_ParamLimits

0xab92,	// (0x000acfb0) main_mup2_pane_g1

0xab92,	// (0x000acfb0) main_mup2_pane_g2_ParamLimits

0xab92,	// (0x000acfb0) main_mup2_pane_g2

0xc9cb,	// (0x000aede9) main_mup_pane_g13_cp1

0x9056,	// (0x000ab474) mup_volume_pane_cp1

0xab92,	// (0x000acfb0) main_mup2_pane_g4_ParamLimits

0xab92,	// (0x000acfb0) main_mup2_pane_g4

0xab92,	// (0x000acfb0) main_mup2_pane_g5_ParamLimits

0xab92,	// (0x000acfb0) main_mup2_pane_g5

0xab92,	// (0x000acfb0) main_mup2_pane_g6_ParamLimits

0xab92,	// (0x000acfb0) main_mup2_pane_g6

0xab92,	// (0x000acfb0) main_mup2_pane_g7_ParamLimits

0xab92,	// (0x000acfb0) main_mup2_pane_g7

0x0006,

0xf5ba,	// (0x000b19d8) main_mup2_pane_g_ParamLimits

0xf5ba,	// (0x000b19d8) main_mup2_pane_g

0xaba0,	// (0x000acfbe) main_mup2_pane_t1_ParamLimits

0xaba0,	// (0x000acfbe) main_mup2_pane_t1

0xaba0,	// (0x000acfbe) main_mup2_pane_t2_ParamLimits

0xaba0,	// (0x000acfbe) main_mup2_pane_t2

0xaba0,	// (0x000acfbe) main_mup2_pane_t3_ParamLimits

0xaba0,	// (0x000acfbe) main_mup2_pane_t3

0xaba0,	// (0x000acfbe) main_mup2_pane_t4_ParamLimits

0xaba0,	// (0x000acfbe) main_mup2_pane_t4

0xaba0,	// (0x000acfbe) main_mup2_pane_t5_ParamLimits

0xaba0,	// (0x000acfbe) main_mup2_pane_t5

0xaba0,	// (0x000acfbe) main_mup2_pane_t6_ParamLimits

0xaba0,	// (0x000acfbe) main_mup2_pane_t6

0x0005,

0xf5c9,	// (0x000b19e7) main_mup2_pane_t_ParamLimits

0xf5c9,	// (0x000b19e7) main_mup2_pane_t

0xabb4,	// (0x000acfd2) mup2_visualizer_pane_ParamLimits

0xabb4,	// (0x000acfd2) mup2_visualizer_pane

0xabb4,	// (0x000acfd2) mup_progress_pane_cp_ParamLimits

0xabb4,	// (0x000acfd2) mup_progress_pane_cp

0x94da,	// (0x000ab8f8) mup_volume_pane_cp_ParamLimits

0x94da,	// (0x000ab8f8) mup_volume_pane_cp

0x9e5f,	// (0x000ac27d) mup2_visualizer_pane_g1_ParamLimits

0x9e5f,	// (0x000ac27d) mup2_visualizer_pane_g1

0x9e6d,	// (0x000ac28b) mup2_visualizer_pane_g2_ParamLimits

0x9e6d,	// (0x000ac28b) mup2_visualizer_pane_g2

0x9e6d,	// (0x000ac28b) mup2_visualizer_pane_g3_ParamLimits

0x9e6d,	// (0x000ac28b) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x000b14c2) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x000b14c2) mup2_visualizer_pane_g

0xae7c,	// (0x000ad29a) aid_size_cell_fmradio

0x3124,	// (0x000a5542) aid_height_parent_landcape

0xa201,	// (0x000ac61f) wml_content_pane_cp

0xa209,	// (0x000ac627) wml_tabs_pane

0xa212,	// (0x000ac630) popup_wml_miniature_window

0xa21a,	// (0x000ac638) scroll_pane_cp021

0xa22e,	// (0x000ac64c) wml_content_pane_comp8

0x9b89,	// (0x000abfa7) bg_popup_sub_pane_cp05

0xc0ec,	// (0x000ae50a) popup_wml_miniature_window_g1

0xc0f4,	// (0x000ae512) wml_miniature_view_pane

0x363b,	// (0x000a5a59) aid_size_wml_view

0x3643,	// (0x000a5a61) wml_miniature_view_pane_g1

0x364c,	// (0x000a5a6a) wml_miniature_view_pane_g2

0x3655,	// (0x000a5a73) wml_miniature_view_pane_g3

0x365d,	// (0x000a5a7b) wml_miniature_view_pane_g4

0x3665,	// (0x000a5a83) wml_miniature_view_pane_g5

0x366d,	// (0x000a5a8b) wml_miniature_view_pane_g6

0x3675,	// (0x000a5a93) wml_miniature_view_pane_g7

0x367d,	// (0x000a5a9b) wml_miniature_view_pane_g8

0x0007,

0xf5d6,	// (0x000b19f4) wml_miniature_view_pane_g

0xc0fc,	// (0x000ae51a) background_graphic_ParamLimits

0xc0fc,	// (0x000ae51a) background_graphic

0xc108,	// (0x000ae526) wml_tabs_2_pane

0xc111,	// (0x000ae52f) wml_tabs_3_pane_ParamLimits

0xc111,	// (0x000ae52f) wml_tabs_3_pane

0xc123,	// (0x000ae541) wml_tabs_4_pane_ParamLimits

0xc123,	// (0x000ae541) wml_tabs_4_pane

0xc139,	// (0x000ae557) wml_tabs_5_pane_ParamLimits

0xc139,	// (0x000ae557) wml_tabs_5_pane

0xc153,	// (0x000ae571) wml_tabs_pane_g2_ParamLimits

0xc153,	// (0x000ae571) wml_tabs_pane_g2

0xc168,	// (0x000ae586) wml_tabs_pane_g3_ParamLimits

0xc168,	// (0x000ae586) wml_tabs_pane_g3

0xc17d,	// (0x000ae59b) wml_tabs_2_active_pane_ParamLimits

0xc17d,	// (0x000ae59b) wml_tabs_2_active_pane

0xc17d,	// (0x000ae59b) wml_tabs_2_passive_pane_ParamLimits

0xc17d,	// (0x000ae59b) wml_tabs_2_passive_pane

0x3685,	// (0x000a5aa3) wml_tabs_3_active_pane_cp_ParamLimits

0x3685,	// (0x000a5aa3) wml_tabs_3_active_pane_cp

0x369a,	// (0x000a5ab8) wml_tabs_3_passive_pane_ParamLimits

0x369a,	// (0x000a5ab8) wml_tabs_3_passive_pane

0x36ad,	// (0x000a5acb) wml_tabs_3_passive_pane_cp_ParamLimits

0x36ad,	// (0x000a5acb) wml_tabs_3_passive_pane_cp

0x36c4,	// (0x000a5ae2) tabs_4_active_pane

0x36cc,	// (0x000a5aea) tabs_4_passive_pane

0x36d6,	// (0x000a5af4) tabs_4_passive_pane_cp

0x36de,	// (0x000a5afc) tabs_4_passive_pane_cp2

0x2e66,	// (0x000a5284) aid_height_text

0xabb4,	// (0x000acfd2) mup_volume_cont_pane_ParamLimits

0xabb4,	// (0x000acfd2) mup_volume_cont_pane

0xe689,	// (0x000b0aa7) aid_size_cell_pinb

0xe689,	// (0x000b0aa7) aid_size_list_pinb

0xabb4,	// (0x000acfd2) mup2_volume_cont_pane_ParamLimits

0xabb4,	// (0x000acfd2) mup2_volume_cont_pane

0x94c4,	// (0x000ab8e2) mup2_volume_cont_pane_g1_ParamLimits

0x94c4,	// (0x000ab8e2) mup2_volume_cont_pane_g1

0x0616,	// (0x000a2a34) aid_size_cell_touch_ParamLimits

0x0616,	// (0x000a2a34) aid_size_cell_touch

0x087d,	// (0x000a2c9b) touch_pane_ParamLimits

0x087d,	// (0x000a2c9b) touch_pane

0x9056,	// (0x000ab474) main_rss2_pane

0xc194,	// (0x000ae5b2) listscroll_rss2_pane

0xc19d,	// (0x000ae5bb) rss2_navigation_pane

0xc1a5,	// (0x000ae5c3) list_rss2_pane

0xa8a7,	// (0x000accc5) scroll_pane_cp22

0xc1ad,	// (0x000ae5cb) rss2_navigation_pane_g1

0xc1b6,	// (0x000ae5d4) rss2_navigation_pane_g2

0xc1be,	// (0x000ae5dc) rss2_navigation_pane_g3

0x0002,

0xf5e7,	// (0x000b1a05) rss2_navigation_pane_g

0xc1c6,	// (0x000ae5e4) rss2_navigation_pane_t1

0x36e8,	// (0x000a5b06) rss2_list_single_pane_ParamLimits

0x36e8,	// (0x000a5b06) rss2_list_single_pane

0xc1d4,	// (0x000ae5f2) rss2_list_single_pane_t2

0xc1e2,	// (0x000ae600) rss2_list_single_pane_t3_ParamLimits

0xc1e2,	// (0x000ae600) rss2_list_single_pane_t3

0xc1ff,	// (0x000ae61d) rss2_list_single_pane_t4

0x214f,	// (0x000a456d) smil_status_pane_g1

0x9048,	// (0x000ab466) main_image2_pane_ParamLimits

0x9048,	// (0x000ab466) main_image2_pane

0x9472,	// (0x000ab890) main_camera2_pane_g9_ParamLimits

0x9472,	// (0x000ab890) main_camera2_pane_g9

0x35f7,	// (0x000a5a15) main_camera2_pane_t5_ParamLimits

0x35f7,	// (0x000a5a15) main_camera2_pane_t5

0x9480,	// (0x000ab89e) main_camera2_pane_t6_ParamLimits

0x9480,	// (0x000ab89e) main_camera2_pane_t6

0x36fe,	// (0x000a5b1c) main_image2_pane_g1_ParamLimits

0x36fe,	// (0x000a5b1c) main_image2_pane_g1

0x2b39,	// (0x000a4f57) smil2_video_pane_ParamLimits

0x2b39,	// (0x000a4f57) smil2_video_pane

0x0656,	// (0x000a2a74) aid_zoom_text_primary_cp

0x903e,	// (0x000ab45c) popup_preview_fixed_window

0xa16a,	// (0x000ac588) im_reading_pane_g1

0x35e9,	// (0x000a5a07) cams2_bc_adjust_pane_cp_ParamLimits

0x35e9,	// (0x000a5a07) cams2_bc_adjust_pane_cp

0x94a8,	// (0x000ab8c6) cams2_bc_adjust_pane_ParamLimits

0x94a8,	// (0x000ab8c6) cams2_bc_adjust_pane

0xc9cb,	// (0x000aede9) cams2_bc_adjust_pane_g1

0x9056,	// (0x000ab474) cams2_slider_pane

0xc9cb,	// (0x000aede9) cams2_slider_pane_g1

0xc9cb,	// (0x000aede9) cams2_slider_pane_g2

0x0006,

0xf5ee,	// (0x000b1a0c) cams2_slider_pane_g

0x0946,	// (0x000a2d64) calc_display_pane_ParamLimits

0x096b,	// (0x000a2d89) calc_paper_pane_ParamLimits

0x098e,	// (0x000a2dac) grid_calc_pane_ParamLimits

0x9389,	// (0x000ab7a7) popup_clock_digital_window_t1_ParamLimits

0xae19,	// (0x000ad237) main_image_pane_t1

0x0928,	// (0x000a2d46) aid_size_cell_calc_ParamLimits

0x0928,	// (0x000a2d46) aid_size_cell_calc

0x317c,	// (0x000a559a) popup_blid_sat_info2_window_ParamLimits

0x317c,	// (0x000a559a) popup_blid_sat_info2_window

0xc20d,	// (0x000ae62b) aid_size_cell_blid

0xc038,	// (0x000ae456) bg_popup_window_pane_cp07

0xc22a,	// (0x000ae648) grid_popup_blid_pane

0xc234,	// (0x000ae652) heading_pane_cp05_ParamLimits

0xc234,	// (0x000ae652) heading_pane_cp05

0xc2fe,	// (0x000ae71c) cell_popup_blid_pane_ParamLimits

0xc2fe,	// (0x000ae71c) cell_popup_blid_pane

0xc322,	// (0x000ae740) cell_popup_blid_pane_g1

0xc32a,	// (0x000ae748) cell_popup_blid_pane_t1

0xabb4,	// (0x000acfd2) mup2_indicator_pane_ParamLimits

0xabb4,	// (0x000acfd2) mup2_indicator_pane

0xe689,	// (0x000b0aa7) mup2_visualizer_osc_pane

0xc0d6,	// (0x000ae4f4) mup2_visualizer_spec_pane_ParamLimits

0xc0d6,	// (0x000ae4f4) mup2_visualizer_spec_pane

0xe689,	// (0x000b0aa7) mup2_spec_half_pane

0xe689,	// (0x000b0aa7) mup2_spec_half_pane_cp

0xc338,	// (0x000ae756) mup2_spec_bar_pane_ParamLimits

0xc338,	// (0x000ae756) mup2_spec_bar_pane

0xa0b9,	// (0x000ac4d7) mup2_spec_bar_pane_g1

0xc357,	// (0x000ae775) mup2_spec_bar_pane_g2

0x0001,

0xf614,	// (0x000b1a32) mup2_spec_bar_pane_g

0xe689,	// (0x000b0aa7) mup2_osc_middle_pane

0xa0b9,	// (0x000ac4d7) mup2_visualizer_osc_pane_g1

0xe6b3,	// (0x000b0ad1) popup_number_entry_window_t1_ParamLimits

0xe6c6,	// (0x000b0ae4) popup_number_entry_window_t2_ParamLimits

0xe6d8,	// (0x000b0af6) popup_number_entry_window_t3_ParamLimits

0x08cf,	// (0x000a2ced) popup_number_entry_window_t5_ParamLimits

0x08cf,	// (0x000a2ced) popup_number_entry_window_t5

0xf045,	// (0x000b1463) popup_number_entry_window_t_ParamLimits

0x9060,	// (0x000ab47e) text_title_cp2_ParamLimits

0x93c8,	// (0x000ab7e6) aid_hotspot_pointer_text2_pane

0x93e2,	// (0x000ab800) main_viewer_pane_g9_ParamLimits

0x93e2,	// (0x000ab800) main_viewer_pane_g9

0xa3ce,	// (0x000ac7ec) cale_month_pane_t1_ParamLimits

0xa40b,	// (0x000ac829) bg_cale_pane_ParamLimits

0xa423,	// (0x000ac841) list_cale_pane_ParamLimits

0xa434,	// (0x000ac852) listscroll_cale_day_pane_t1

0xa446,	// (0x000ac864) scroll_pane_cp09_ParamLimits

0x2548,	// (0x000a4966) main_mup_eq_pane_t1_ParamLimits

0x2548,	// (0x000a4966) main_mup_eq_pane_t1

0x2562,	// (0x000a4980) main_mup_eq_pane_t2_ParamLimits

0x2562,	// (0x000a4980) main_mup_eq_pane_t2

0x257c,	// (0x000a499a) main_mup_eq_pane_t3_ParamLimits

0x257c,	// (0x000a499a) main_mup_eq_pane_t3

0x2598,	// (0x000a49b6) main_mup_eq_pane_t4_ParamLimits

0x2598,	// (0x000a49b6) main_mup_eq_pane_t4

0x25b4,	// (0x000a49d2) main_mup_eq_pane_t5_ParamLimits

0x25b4,	// (0x000a49d2) main_mup_eq_pane_t5

0x25d0,	// (0x000a49ee) main_mup_eq_pane_t6_ParamLimits

0x25d0,	// (0x000a49ee) main_mup_eq_pane_t6

0x25e4,	// (0x000a4a02) main_mup_eq_pane_t7_ParamLimits

0x25e4,	// (0x000a4a02) main_mup_eq_pane_t7

0x25f8,	// (0x000a4a16) main_mup_eq_pane_t8_ParamLimits

0x25f8,	// (0x000a4a16) main_mup_eq_pane_t8

0x260c,	// (0x000a4a2a) main_mup_eq_pane_t9_ParamLimits

0x260c,	// (0x000a4a2a) main_mup_eq_pane_t9

0x2626,	// (0x000a4a44) main_mup_eq_pane_t10_ParamLimits

0x2626,	// (0x000a4a44) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x000b17c2) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x000b17c2) main_mup_eq_pane_t

0x26d5,	// (0x000a4af3) mup_equalizer_pane_cp5_ParamLimits

0x26e9,	// (0x000a4b07) mup_equalizer_pane_cp6_ParamLimits

0x26fd,	// (0x000a4b1b) mup_equalizer_pane_cp7_ParamLimits

0x9056,	// (0x000ab474) main_gallery_pane

0xc074,	// (0x000ae492) smil2_volume_pane

0xc07c,	// (0x000ae49a) smil_status_volume_pane_g1_ParamLimits

0xc08f,	// (0x000ae4ad) smil_status_volume_pane_g2_ParamLimits

0x9442,	// (0x000ab860) smil_status_volume_pane_g3_ParamLimits

0xf56d,	// (0x000b198b) smil_status_volume_pane_g_ParamLimits

0xc038,	// (0x000ae456) bg_popup_window_pane_cp07_ParamLimits

0xc215,	// (0x000ae633) blid_firmament_pane

0xe6ea,	// (0x000b0b08) aid_size_cell_gallery_ParamLimits

0xe6ea,	// (0x000b0b08) aid_size_cell_gallery

0xe6ea,	// (0x000b0b08) grid_gallery_pane_ParamLimits

0xe6ea,	// (0x000b0b08) grid_gallery_pane

0xc038,	// (0x000ae456) cell_gallery_pane_ParamLimits

0xc038,	// (0x000ae456) cell_gallery_pane

0xe6ea,	// (0x000b0b08) bg_cell_gallery_focus_pane_ParamLimits

0xe6ea,	// (0x000b0b08) bg_cell_gallery_focus_pane

0x9e5f,	// (0x000ac27d) cell_gallery_pane_g1_ParamLimits

0x9e5f,	// (0x000ac27d) cell_gallery_pane_g1

0x9e5f,	// (0x000ac27d) cell_gallery_pane_g2_ParamLimits

0x9e5f,	// (0x000ac27d) cell_gallery_pane_g2

0x9e5f,	// (0x000ac27d) cell_gallery_pane_g3_ParamLimits

0x9e5f,	// (0x000ac27d) cell_gallery_pane_g3

0x9e6d,	// (0x000ac28b) cell_gallery_pane_g4_ParamLimits

0x9e6d,	// (0x000ac28b) cell_gallery_pane_g4

0x0003,

0xf619,	// (0x000b1a37) cell_gallery_pane_g_ParamLimits

0xf619,	// (0x000b1a37) cell_gallery_pane_g

0xc361,	// (0x000ae77f) bg_cell_gallery_focus_pane_g1

0xc369,	// (0x000ae787) bg_cell_gallery_focus_pane_g2

0xc371,	// (0x000ae78f) bg_cell_gallery_focus_pane_g3

0xc379,	// (0x000ae797) bg_cell_gallery_focus_pane_g4

0xc381,	// (0x000ae79f) bg_cell_gallery_focus_pane_g5

0xc389,	// (0x000ae7a7) bg_cell_gallery_focus_pane_g6

0xc391,	// (0x000ae7af) bg_cell_gallery_focus_pane_g7

0xc399,	// (0x000ae7b7) bg_cell_gallery_focus_pane_g8

0x0007,

0xf622,	// (0x000b1a40) bg_cell_gallery_focus_pane_g

0xc3a1,	// (0x000ae7bf) aid_firma_cardinal

0xc3b5,	// (0x000ae7d3) blid_firmament_pane_t1

0xc3cc,	// (0x000ae7ea) blid_firmament_pane_t2

0xc3e3,	// (0x000ae801) blid_firmament_pane_t3

0xc3fa,	// (0x000ae818) blid_firmament_pane_t4

0x0003,

0xf633,	// (0x000b1a51) blid_firmament_pane_t

0xc411,	// (0x000ae82f) blid_sat_info_pane

0xa0b9,	// (0x000ac4d7) blid_sat_info_pane_g1

0xa0b9,	// (0x000ac4d7) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x000b17b6) blid_sat_info_pane_g

0xc421,	// (0x000ae83f) blid_sat_info_pane_t1

0xc42f,	// (0x000ae84d) smil2_volume_content_pane

0xc438,	// (0x000ae856) smil2_volume_pane_g1

0xa365,	// (0x000ac783) smil2_volume_content_pane_g1

0xc440,	// (0x000ae85e) smil2_volume_content_pane_g2

0xc449,	// (0x000ae867) smil2_volume_content_pane_g3

0xc452,	// (0x000ae870) smil2_volume_content_pane_g4

0xc45b,	// (0x000ae879) smil2_volume_content_pane_g5

0xc464,	// (0x000ae882) smil2_volume_content_pane_g6

0xc46d,	// (0x000ae88b) smil2_volume_content_pane_g7

0xc476,	// (0x000ae894) smil2_volume_content_pane_g8

0xc47f,	// (0x000ae89d) smil2_volume_content_pane_g9

0xc488,	// (0x000ae8a6) smil2_volume_content_pane_g10

0x0009,

0xf63c,	// (0x000b1a5a) smil2_volume_content_pane_g

0x0f10,	// (0x000a332e) cale_week_day_heading_pane_t1_ParamLimits

0x0f3a,	// (0x000a3358) cale_week_day_heading_pane_t2_ParamLimits

0x0f69,	// (0x000a3387) cale_week_day_heading_pane_t3_ParamLimits

0x0f98,	// (0x000a33b6) cale_week_day_heading_pane_t4_ParamLimits

0x0fc7,	// (0x000a33e5) cale_week_day_heading_pane_t5_ParamLimits

0x0ffe,	// (0x000a341c) cale_week_day_heading_pane_t6_ParamLimits

0x1035,	// (0x000a3453) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x000b156a) cale_week_day_heading_pane_t_ParamLimits

0xa031,	// (0x000ac44f) bg_cale_side_pane_ParamLimits

0x105f,	// (0x000a347d) cale_week_time_pane_t1_ParamLimits

0x1079,	// (0x000a3497) cale_week_time_pane_t2_ParamLimits

0x1093,	// (0x000a34b1) cale_week_time_pane_t3_ParamLimits

0x10ad,	// (0x000a34cb) cale_week_time_pane_t4_ParamLimits

0x10c7,	// (0x000a34e5) cale_week_time_pane_t5_ParamLimits

0x10e1,	// (0x000a34ff) cale_week_time_pane_t6_ParamLimits

0x10fb,	// (0x000a3519) cale_week_time_pane_t7_ParamLimits

0x1115,	// (0x000a3533) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x000b1579) cale_week_time_pane_t_ParamLimits

0x1135,	// (0x000a3553) cell_cale_week_pane_g2_ParamLimits

0xa031,	// (0x000ac44f) bg_cale_side_pane_cp01_ParamLimits

0x1f54,	// (0x000a4372) cale_month_week_pane_t1_ParamLimits

0x1f6d,	// (0x000a438b) cale_month_week_pane_t2_ParamLimits

0x1f86,	// (0x000a43a4) cale_month_week_pane_t3_ParamLimits

0x1f9f,	// (0x000a43bd) cale_month_week_pane_t4_ParamLimits

0x1fb8,	// (0x000a43d6) cale_month_week_pane_t5_ParamLimits

0x1fd1,	// (0x000a43ef) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x000b1647) cale_month_week_pane_t_ParamLimits

0x9309,	// (0x000ab727) cell_cale_month_pane_g1_ParamLimits

0x9056,	// (0x000ab474) main_cale_event_viewer_pane

0xe689,	// (0x000b0aa7) listscroll_cale_event_viewer_pane

0xc491,	// (0x000ae8af) list_cale_ev_pane

0xc499,	// (0x000ae8b7) scroll_pane_cp023

0xc4a5,	// (0x000ae8c3) field_cale_ev_pane_ParamLimits

0xc4a5,	// (0x000ae8c3) field_cale_ev_pane

0xc4c3,	// (0x000ae8e1) field_cale_ev_content_pane_ParamLimits

0xc4c3,	// (0x000ae8e1) field_cale_ev_content_pane

0xc4cf,	// (0x000ae8ed) field_cale_ev_pane_g1_ParamLimits

0xc4cf,	// (0x000ae8ed) field_cale_ev_pane_g1

0xc4db,	// (0x000ae8f9) field_cale_ev_pane_g2_ParamLimits

0xc4db,	// (0x000ae8f9) field_cale_ev_pane_g2

0xc4f3,	// (0x000ae911) field_cale_ev_pane_g3_ParamLimits

0xc4f3,	// (0x000ae911) field_cale_ev_pane_g3

0x0002,

0xf651,	// (0x000b1a6f) field_cale_ev_pane_g_ParamLimits

0xf651,	// (0x000b1a6f) field_cale_ev_pane_g

0xc50b,	// (0x000ae929) field_cale_ev_pane_t1_ParamLimits

0xc50b,	// (0x000ae929) field_cale_ev_pane_t1

0xc522,	// (0x000ae940) field_cale_ev_content_pane_t1_ParamLimits

0xc522,	// (0x000ae940) field_cale_ev_content_pane_t1

0xac5f,	// (0x000ad07d) bg_button_pane_cp01

0x0c3d,	// (0x000a305b) listscroll_cale_week_pane_ParamLimits

0x9fdc,	// (0x000ac3fa) popup_toolbar_window_cp01

0xa002,	// (0x000ac420) listscroll_cale_week_pane_t1_ParamLimits

0x0c3d,	// (0x000a305b) listscroll_cale_day_pane_ParamLimits

0x9fdc,	// (0x000ac3fa) popup_toolbar_window_cp02

0xa434,	// (0x000ac852) listscroll_cale_day_pane_t1_ParamLimits

0x3142,	// (0x000a5560) main_cale_month_pane_ParamLimits

0x942d,	// (0x000ab84b) popup_toolbar_window_cp03_ParamLimits

0x942d,	// (0x000ab84b) popup_toolbar_window_cp03

0x2a01,	// (0x000a4e1f) main_image_pane_g2_ParamLimits

0x2a01,	// (0x000a4e1f) main_image_pane_g2

0x2a12,	// (0x000a4e30) main_image_pane_g3_ParamLimits

0x2a12,	// (0x000a4e30) main_image_pane_g3

0x0002,

0xf436,	// (0x000b1854) main_image_pane_g_ParamLimits

0xf436,	// (0x000b1854) main_image_pane_g

0xae19,	// (0x000ad237) main_image_pane_t1_ParamLimits

0x2a23,	// (0x000a4e41) main_image_pane_t2_ParamLimits

0x2a23,	// (0x000a4e41) main_image_pane_t2

0x2a35,	// (0x000a4e53) main_image_pane_t3_ParamLimits

0x2a35,	// (0x000a4e53) main_image_pane_t3

0x2a5d,	// (0x000a4e7b) main_image_pane_t4_ParamLimits

0x2a5d,	// (0x000a4e7b) main_image_pane_t4

0x0003,

0xf43d,	// (0x000b185b) main_image_pane_t_ParamLimits

0xf43d,	// (0x000b185b) main_image_pane_t

0x2a7d,	// (0x000a4e9b) popup_image_details_window_cp01

0x2a87,	// (0x000a4ea5) popup_toobar_trans_pane_cp01_ParamLimits

0x2a87,	// (0x000a4ea5) popup_toobar_trans_pane_cp01

0x324d,	// (0x000a566b) popup_image_details_window_ParamLimits

0x324d,	// (0x000a566b) popup_image_details_window

0x9400,	// (0x000ab81e) popup_image_focus_window

0x9464,	// (0x000ab882) camera2_autofocus_pane_ParamLimits

0x9464,	// (0x000ab882) camera2_autofocus_pane

0xe689,	// (0x000b0aa7) bg_popup_sub_pane_cp06

0xc540,	// (0x000ae95e) popup_image_focus_window_g1

0xc548,	// (0x000ae966) popup_image_focus_window_g2

0xc550,	// (0x000ae96e) popup_image_focus_window_g3

0xc558,	// (0x000ae976) popup_image_focus_window_g4

0x0003,

0xf658,	// (0x000b1a76) popup_image_focus_window_g

0xc560,	// (0x000ae97e) popup_image_focus_window_t1

0xc56e,	// (0x000ae98c) popup_image_focus_window_t2

0xc57e,	// (0x000ae99c) popup_image_focus_window_t3

0x0002,

0xf661,	// (0x000b1a7f) popup_image_focus_window_t

0x9e5f,	// (0x000ac27d) camera2_autofocus_pane_g1

0xe6ea,	// (0x000b0b08) bg_tb_trans_pane_cp01

0xc58c,	// (0x000ae9aa) popup_image_details_window_g1

0xc59f,	// (0x000ae9bd) popup_image_details_window_g2

0x0002,

0xf673,	// (0x000b1a91) popup_image_details_window_g

0xc5c8,	// (0x000ae9e6) popup_image_details_window_t1

0xc5da,	// (0x000ae9f8) popup_image_details_window_t2

0xc5f3,	// (0x000aea11) popup_image_details_window_t3

0xc607,	// (0x000aea25) popup_image_details_window_t4

0xc622,	// (0x000aea40) popup_image_details_window_t5

0x0004,

0xf67a,	// (0x000b1a98) popup_image_details_window_t

0x9ebd,	// (0x000ac2db) bg_calc_paper_pane_ParamLimits

0x9056,	// (0x000ab474) grid_highlight_pane_cp013

0x9279,	// (0x000ab697) list_calc_pane_ParamLimits

0x928b,	// (0x000ab6a9) scroll_pane_cp024

0x9ed1,	// (0x000ac2ef) bg_calc_display_pane_ParamLimits

0x0a8c,	// (0x000a2eaa) calc_display_pane_t1_ParamLimits

0x0a9e,	// (0x000a2ebc) calc_display_pane_t2_ParamLimits

0x9293,	// (0x000ab6b1) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x000b14ea) calc_display_pane_t_ParamLimits

0x0b58,	// (0x000a2f76) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x000b1507) cell_calc_pane_g

0x0b61,	// (0x000a2f7f) cell_calc_pane_t1

0x9f26,	// (0x000ac344) grid_highlight_pane_cp02_ParamLimits

0x9f3c,	// (0x000ac35a) toolbar_button_pane_cp01_ParamLimits

0x9f3c,	// (0x000ac35a) toolbar_button_pane_cp01

0xae5e,	// (0x000ad27c) temp_image_control_pane_ParamLimits

0xae5e,	// (0x000ad27c) temp_image_control_pane

0x9048,	// (0x000ab466) main_mp3_pane

0xc63c,	// (0x000aea5a) temp_image_control_pane_g1_ParamLimits

0xc63c,	// (0x000aea5a) temp_image_control_pane_g1

0xc64a,	// (0x000aea68) temp_image_control_pane_g2_ParamLimits

0xc64a,	// (0x000aea68) temp_image_control_pane_g2

0xc65c,	// (0x000aea7a) temp_image_control_pane_g3_ParamLimits

0xc65c,	// (0x000aea7a) temp_image_control_pane_g3

0x3714,	// (0x000a5b32) temp_image_control_pane_g4_ParamLimits

0x3714,	// (0x000a5b32) temp_image_control_pane_g4

0x0003,

0xf685,	// (0x000b1aa3) temp_image_control_pane_g_ParamLimits

0xf685,	// (0x000b1aa3) temp_image_control_pane_g

0xc63c,	// (0x000aea5a) main_mp3_pane_g1

0x3727,	// (0x000a5b45) main_mp3_pane_g2

0x0007,

0xf68e,	// (0x000b1aac) main_mp3_pane_g

0xc691,	// (0x000aeaaf) main_mp3_pane_t1

0x9e6d,	// (0x000ac28b) main_camera_pane_g8_ParamLimits

0x9e6d,	// (0x000ac28b) main_camera_pane_g8

0x1303,	// (0x000a3721) main_video_pane_g7_ParamLimits

0x1303,	// (0x000a3721) main_video_pane_g7

0x9494,	// (0x000ab8b2) main_camera2_pane_t7_ParamLimits

0x9494,	// (0x000ab8b2) main_camera2_pane_t7

0xa1c1,	// (0x000ac5df) scroll_pane_cp025_ParamLimits

0xa1c1,	// (0x000ac5df) scroll_pane_cp025

0xa1d5,	// (0x000ac5f3) scroll_pane_cp026_ParamLimits

0xa1d5,	// (0x000ac5f3) scroll_pane_cp026

0xa1e4,	// (0x000ac602) wml_content_pane_ParamLimits

0x9056,	// (0x000ab474) main_touch_calib_pane

0x37fb,	// (0x000a5c19) main_touch_calib_pane_g1

0x380d,	// (0x000a5c2b) main_touch_calib_pane_g2

0x381f,	// (0x000a5c3d) main_touch_calib_pane_g3

0x3831,	// (0x000a5c4f) main_touch_calib_pane_g4

0x0003,

0xf6ac,	// (0x000b1aca) main_touch_calib_pane_g

0x3843,	// (0x000a5c61) main_touch_calib_pane_t1

0x385d,	// (0x000a5c7b) main_touch_calib_pane_t2

0x0004,

0xf6b5,	// (0x000b1ad3) main_touch_calib_pane_t

0xa976,	// (0x000acd94) mup_progress_pane_cp02

0xa9ab,	// (0x000acdc9) navi_pane_g1

0xaa66,	// (0x000ace84) navi_pane_mp_t3

0x9048,	// (0x000ab466) main_mp3_pane_ParamLimits

0x33d8,	// (0x000a57f6) navi_pane_ParamLimits

0xc63c,	// (0x000aea5a) main_mp3_pane_g1_ParamLimits

0x3727,	// (0x000a5b45) main_mp3_pane_g2_ParamLimits

0x3735,	// (0x000a5b53) main_mp3_pane_g3_ParamLimits

0x3735,	// (0x000a5b53) main_mp3_pane_g3

0x3743,	// (0x000a5b61) main_mp3_pane_g4_ParamLimits

0x3743,	// (0x000a5b61) main_mp3_pane_g4

0x9e5f,	// (0x000ac27d) main_mp3_pane_g5_ParamLimits

0x9e5f,	// (0x000ac27d) main_mp3_pane_g5

0xc66c,	// (0x000aea8a) main_mp3_pane_g6_ParamLimits

0xc66c,	// (0x000aea8a) main_mp3_pane_g6

0xc679,	// (0x000aea97) main_mp3_pane_g7_ParamLimits

0xc679,	// (0x000aea97) main_mp3_pane_g7

0xc685,	// (0x000aeaa3) main_mp3_pane_g8_ParamLimits

0xc685,	// (0x000aeaa3) main_mp3_pane_g8

0xf68e,	// (0x000b1aac) main_mp3_pane_g_ParamLimits

0x374f,	// (0x000a5b6d) main_mp3_pane_t2

0x375d,	// (0x000a5b7b) main_mp3_pane_t3

0xc69f,	// (0x000aeabd) main_mp3_pane_t4

0xc6ad,	// (0x000aeacb) main_mp3_pane_t5

0x0005,

0xf69f,	// (0x000b1abd) main_mp3_pane_t

0xc6bb,	// (0x000aead9) mup_progress_pane_cp01

0x0656,	// (0x000a2a74) aid_zoom_text_secondary2

0xc491,	// (0x000ae8af) list_cale_ev2_pane

0xc499,	// (0x000ae8b7) scroll_pane_cp023_ParamLimits

0x38b3,	// (0x000a5cd1) field_cale_ev2_pane_ParamLimits

0x38b3,	// (0x000a5cd1) field_cale_ev2_pane

0xc6c3,	// (0x000aeae1) field_cale_ev2_pane_g1_ParamLimits

0xc6c3,	// (0x000aeae1) field_cale_ev2_pane_g1

0xc6cf,	// (0x000aeaed) field_cale_ev2_pane_g2_ParamLimits

0xc6cf,	// (0x000aeaed) field_cale_ev2_pane_g2

0xc6e7,	// (0x000aeb05) field_cale_ev2_pane_g3_ParamLimits

0xc6e7,	// (0x000aeb05) field_cale_ev2_pane_g3

0x0003,

0xf6c0,	// (0x000b1ade) field_cale_ev2_pane_g_ParamLimits

0xf6c0,	// (0x000b1ade) field_cale_ev2_pane_g

0xc70b,	// (0x000aeb29) field_cale_ev2_pane_t1_ParamLimits

0xc70b,	// (0x000aeb29) field_cale_ev2_pane_t1

0xc722,	// (0x000aeb40) field_cale_ev2_pane_t2_ParamLimits

0xc722,	// (0x000aeb40) field_cale_ev2_pane_t2

0x0001,

0xf6c9,	// (0x000b1ae7) field_cale_ev2_pane_t_ParamLimits

0xf6c9,	// (0x000b1ae7) field_cale_ev2_pane_t

0x28b5,	// (0x000a4cd3) main_postcard_pane_g5_ParamLimits

0x28b5,	// (0x000a4cd3) main_postcard_pane_g5

0x28cb,	// (0x000a4ce9) main_postcard_pane_g6_ParamLimits

0x28cb,	// (0x000a4ce9) main_postcard_pane_g6

0xe6ea,	// (0x000b0b08) camera2_autofocus_pane_cp_ParamLimits

0xe6ea,	// (0x000b0b08) camera2_autofocus_pane_cp

0x9048,	// (0x000ab466) main_mup3_pane

0x3918,	// (0x000a5d36) main_mup3_pane_g1_ParamLimits

0x3918,	// (0x000a5d36) main_mup3_pane_g1

0x393a,	// (0x000a5d58) main_mup3_pane_g2_ParamLimits

0x393a,	// (0x000a5d58) main_mup3_pane_g2

0x39ba,	// (0x000a5dd8) main_mup3_pane_g3_ParamLimits

0x39ba,	// (0x000a5dd8) main_mup3_pane_g3

0x3a00,	// (0x000a5e1e) main_mup3_pane_g4_ParamLimits

0x3a00,	// (0x000a5e1e) main_mup3_pane_g4

0x3a46,	// (0x000a5e64) main_mup3_pane_g5_ParamLimits

0x3a46,	// (0x000a5e64) main_mup3_pane_g5

0x3a8c,	// (0x000a5eaa) main_mup3_pane_g6_ParamLimits

0x3a8c,	// (0x000a5eaa) main_mup3_pane_g6

0x9e6d,	// (0x000ac28b) main_mup3_pane_g7_ParamLimits

0x9e6d,	// (0x000ac28b) main_mup3_pane_g7

0x0007,

0xf6d9,	// (0x000b1af7) main_mup3_pane_g_ParamLimits

0xf6d9,	// (0x000b1af7) main_mup3_pane_g

0x3b0a,	// (0x000a5f28) main_mup3_pane_t1_ParamLimits

0x3b0a,	// (0x000a5f28) main_mup3_pane_t1

0x3b7e,	// (0x000a5f9c) main_mup3_pane_t2_ParamLimits

0x3b7e,	// (0x000a5f9c) main_mup3_pane_t2

0x3c52,	// (0x000a6070) main_mup3_pane_t4_ParamLimits

0x3c52,	// (0x000a6070) main_mup3_pane_t4

0x3ca8,	// (0x000a60c6) main_mup3_pane_t5_ParamLimits

0x3ca8,	// (0x000a60c6) main_mup3_pane_t5

0x3d64,	// (0x000a6182) main_mup3_pane_t6_ParamLimits

0x3d64,	// (0x000a6182) main_mup3_pane_t6

0x0005,

0xf6ea,	// (0x000b1b08) main_mup3_pane_t_ParamLimits

0xf6ea,	// (0x000b1b08) main_mup3_pane_t

0x3e1c,	// (0x000a623a) mup3_progress_pane_ParamLimits

0x3e1c,	// (0x000a623a) mup3_progress_pane

0x3ea8,	// (0x000a62c6) popup_mup3_control_window_ParamLimits

0x3ea8,	// (0x000a62c6) popup_mup3_control_window

0xc737,	// (0x000aeb55) popup_mup3_text_window

0x3eda,	// (0x000a62f8) mup3_progress_pane_t1

0x3ef9,	// (0x000a6317) mup3_progress_pane_t2

0xc73f,	// (0x000aeb5d) mup3_progress_pane_t3

0x0002,

0xf6f7,	// (0x000b1b15) mup3_progress_pane_t

0xc75c,	// (0x000aeb7a) mup_progress_pane_cp03

0xe689,	// (0x000b0aa7) bg_tb_trans_pane_cp04

0x3f18,	// (0x000a6336) mup3_volume_pane

0x3f20,	// (0x000a633e) popup_mup3_control_window_g1

0x3f29,	// (0x000a6347) mup3_volume_pane_g1

0x3f32,	// (0x000a6350) mup3_volume_pane_g2

0x3f3b,	// (0x000a6359) mup3_volume_pane_g3

0x0002,

0xf6fe,	// (0x000b1b1c) mup3_volume_pane_g

0xe689,	// (0x000b0aa7) bg_tb_trans_pane_cp03

0xc76c,	// (0x000aeb8a) popup_mup3_text_window_g1

0xc774,	// (0x000aeb92) popup_mup3_text_window_t1

0x9f19,	// (0x000ac337) list_calc_item_pane_g1_ParamLimits

0xc18b,	// (0x000ae5a9) mup_volume_pane_cp_g1

0x3877,	// (0x000a5c95) main_touch_calib_pane_t3

0x388b,	// (0x000a5ca9) main_touch_calib_pane_t4

0x389f,	// (0x000a5cbd) main_touch_calib_pane_t5

0x0602,	// (0x000a2a20) aid_cell_size_toolbar2

0x060a,	// (0x000a2a28) aid_popup3_width_pane

0x0646,	// (0x000a2a64) aid_zoom_text_msg_primary

0x11de,	// (0x000a35fc) vorec_t7

0x9edd,	// (0x000ac2fb) bg_calc_paper_pane_g1_ParamLimits

0x9ee9,	// (0x000ac307) bg_calc_paper_pane_g2_ParamLimits

0x9ef5,	// (0x000ac313) bg_calc_paper_pane_g3_ParamLimits

0x9f01,	// (0x000ac31f) bg_calc_paper_pane_g4_ParamLimits

0x9f0d,	// (0x000ac32b) bg_calc_paper_pane_g5_ParamLimits

0x0ae5,	// (0x000a2f03) bg_calc_paper_pane_g6_ParamLimits

0x0af4,	// (0x000a2f12) bg_calc_paper_pane_g7_ParamLimits

0x0b03,	// (0x000a2f21) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x000b14f1) bg_calc_paper_pane_g_ParamLimits

0x0b16,	// (0x000a2f34) calc_bg_paper_pane_g9_ParamLimits

0xe6ea,	// (0x000b0b08) image_qvga_pane_ParamLimits

0xe6ea,	// (0x000b0b08) image_qvga_pane

0x9de4,	// (0x000ac202) bg_popup_sub_pane_cp04_ParamLimits

0xad95,	// (0x000ad1b3) popup_mup_playback_window_g1_ParamLimits

0xada1,	// (0x000ad1bf) popup_mup_playback_window_t1_ParamLimits

0xadb6,	// (0x000ad1d4) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x000b184f) popup_mup_playback_window_t_ParamLimits

0x9e6d,	// (0x000ac28b) main_mup2_pane_g3_ParamLimits

0x9e6d,	// (0x000ac28b) main_mup2_pane_g3

0x150a,	// (0x000a3928) popup_toolbar_window_cp04

0xb1ab,	// (0x000ad5c9) popup_call2_audio_second_window_g3_ParamLimits

0xb1ab,	// (0x000ad5c9) popup_call2_audio_second_window_g3

0xb6b6,	// (0x000adad4) popup_call2_audio_first_window_g4_ParamLimits

0xb6b6,	// (0x000adad4) popup_call2_audio_first_window_g4

0xbcdd,	// (0x000ae0fb) popup_call2_audio_in_window_g4_ParamLimits

0xbcdd,	// (0x000ae0fb) popup_call2_audio_in_window_g4

0x29e3,	// (0x000a4e01) aid_area_sk_bg_cut_ParamLimits

0x29e3,	// (0x000a4e01) aid_area_sk_bg_cut

0xadcb,	// (0x000ad1e9) aid_area_sk_bg_cut_2_ParamLimits

0xadcb,	// (0x000ad1e9) aid_area_sk_bg_cut_2

0xe689,	// (0x000b0aa7) aid_placing_details_win

0xe689,	// (0x000b0aa7) aid_placing_details_win_2

0x9e5f,	// (0x000ac27d) camera2_autofocus_pane_g1_ParamLimits

0x0816,	// (0x000a2c34) popup_fixed_preview_cale_window_ParamLimits

0x0816,	// (0x000a2c34) popup_fixed_preview_cale_window

0xaae4,	// (0x000acf02) navi_slider_pane_g3

0xaaed,	// (0x000acf0b) navi_slider_pane_g4

0xaaf6,	// (0x000acf14) navi_slider_pane_g5

0xaae4,	// (0x000acf02) navi_slider_pane_g6

0x93af,	// (0x000ab7cd) navi_slider_pane_g7

0xac24,	// (0x000ad042) mup_scale_pane_g3

0xac2d,	// (0x000ad04b) mup_scale_pane_g4

0xac36,	// (0x000ad054) mup_scale_pane_g5

0x2711,	// (0x000a4b2f) mup_scale_pane_g6

0x271a,	// (0x000a4b38) mup_scale_pane_g7

0xc9cb,	// (0x000aede9) cams2_slider_pane_g3

0xc9cb,	// (0x000aede9) cams2_slider_pane_g4

0xc9cb,	// (0x000aede9) cams2_slider_pane_g5

0xc9cb,	// (0x000aede9) cams2_slider_pane_g6

0xc9cb,	// (0x000aede9) cams2_slider_pane_g7

0xa0b9,	// (0x000ac4d7) camera2_autofocus_pane_cp_g1

0xbfed,	// (0x000ae40b) bg_popup_preview_window_pane_cp02_ParamLimits

0xbfed,	// (0x000ae40b) bg_popup_preview_window_pane_cp02

0xc782,	// (0x000aeba0) list_fp_cale_pane_ParamLimits

0xc782,	// (0x000aeba0) list_fp_cale_pane

0xc78e,	// (0x000aebac) popup_fixed_preview_cale_window_t1_ParamLimits

0xc78e,	// (0x000aebac) popup_fixed_preview_cale_window_t1

0x3f44,	// (0x000a6362) popup_fixed_preview_cale_window_t2_ParamLimits

0x3f44,	// (0x000a6362) popup_fixed_preview_cale_window_t2

0x3f59,	// (0x000a6377) popup_fixed_preview_cale_window_t3_ParamLimits

0x3f59,	// (0x000a6377) popup_fixed_preview_cale_window_t3

0x0002,

0xf705,	// (0x000b1b23) popup_fixed_preview_cale_window_t_ParamLimits

0xf705,	// (0x000b1b23) popup_fixed_preview_cale_window_t

0x3f6e,	// (0x000a638c) list_single_fp_cale_pane_ParamLimits

0x3f6e,	// (0x000a638c) list_single_fp_cale_pane

0xc7ac,	// (0x000aebca) list_single_fp_cale_pane_g1_ParamLimits

0xc7ac,	// (0x000aebca) list_single_fp_cale_pane_g1

0xc7b8,	// (0x000aebd6) list_single_fp_cale_pane_g2_ParamLimits

0xc7b8,	// (0x000aebd6) list_single_fp_cale_pane_g2

0x0002,

0xf70c,	// (0x000b1b2a) list_single_fp_cale_pane_g_ParamLimits

0xf70c,	// (0x000b1b2a) list_single_fp_cale_pane_g

0xc7d1,	// (0x000aebef) list_single_fp_cale_pane_t1_ParamLimits

0xc7d1,	// (0x000aebef) list_single_fp_cale_pane_t1

0xc7e3,	// (0x000aec01) list_single_fp_cale_pane_t2_ParamLimits

0xc7e3,	// (0x000aec01) list_single_fp_cale_pane_t2

0x0001,

0xf713,	// (0x000b1b31) list_single_fp_cale_pane_t_ParamLimits

0xf713,	// (0x000b1b31) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9056,	// (0x000ab474) main_dialer_pane

0xe689,	// (0x000b0aa7) aid_cell_size_keypad

0xe689,	// (0x000b0aa7) dialer_ne_pane

0xe689,	// (0x000b0aa7) grid_dialer_command_1_pane

0xe689,	// (0x000b0aa7) grid_dialer_command_2_pane

0xe689,	// (0x000b0aa7) grid_dialer_keypad_pane

0x3f84,	// (0x000a63a2) bg_popup_call_pane_cp06_ParamLimits

0x3f84,	// (0x000a63a2) bg_popup_call_pane_cp06

0x3f84,	// (0x000a63a2) dialer_ne_clear_pane_ParamLimits

0x3f84,	// (0x000a63a2) dialer_ne_clear_pane

0xa0b9,	// (0x000ac4d7) dialer_ne_pane_g1

0xa351,	// (0x000ac76f) dialer_ne_pane_t1_ParamLimits

0xa351,	// (0x000ac76f) dialer_ne_pane_t1

0x3f92,	// (0x000a63b0) dialer_ne_pane_t2_ParamLimits

0x3f92,	// (0x000a63b0) dialer_ne_pane_t2

0x3fba,	// (0x000a63d8) dialer_ne_pane_t3_ParamLimits

0x3fba,	// (0x000a63d8) dialer_ne_pane_t3

0x0002,

0xf718,	// (0x000b1b36) dialer_ne_pane_t_ParamLimits

0xf718,	// (0x000b1b36) dialer_ne_pane_t

0x3fba,	// (0x000a63d8) dialer_ne_pane_t3_copy1_ParamLimits

0x3fba,	// (0x000a63d8) dialer_ne_pane_t3_copy1

0xc816,	// (0x000aec34) cell_dialer_keypad_pane_ParamLimits

0xc816,	// (0x000aec34) cell_dialer_keypad_pane

0xe6ea,	// (0x000b0b08) cell_dialer_command_1_pane_ParamLimits

0xe6ea,	// (0x000b0b08) cell_dialer_command_1_pane

0xc82d,	// (0x000aec4b) cell_dialer_command_2_pane_ParamLimits

0xc82d,	// (0x000aec4b) cell_dialer_command_2_pane

0xe6ea,	// (0x000b0b08) bg_button_pane_cp02_ParamLimits

0xe6ea,	// (0x000b0b08) bg_button_pane_cp02

0x9e5f,	// (0x000ac27d) cell_dialer_keypad_pane_g1_ParamLimits

0x9e5f,	// (0x000ac27d) cell_dialer_keypad_pane_g1

0xe6ea,	// (0x000b0b08) bg_button_pane_cp03_ParamLimits

0xe6ea,	// (0x000b0b08) bg_button_pane_cp03

0x9e5f,	// (0x000ac27d) cell_dialer_command_1_pane_g1_ParamLimits

0x9e5f,	// (0x000ac27d) cell_dialer_command_1_pane_g1

0xe689,	// (0x000b0aa7) bg_button_pane_cp04

0xa0b9,	// (0x000ac4d7) cell_dialer_command_2_pane_g1

0xe689,	// (0x000b0aa7) bg_button_pane_cp06

0xa0b9,	// (0x000ac4d7) dialer_ne_clear_pane_g1

0xa9b7,	// (0x000acdd5) navi_pane_g2

0xa9e5,	// (0x000ace03) navi_pane_g3

0x0002,

0xf334,	// (0x000b1752) navi_pane_g

0xaa74,	// (0x000ace92) navi_pane_mv_g2

0xaa9b,	// (0x000aceb9) navi_pane_mv_g5

0x24f4,	// (0x000a4912) navi_pane_mv_t1

0x9ed1,	// (0x000ac2ef) main_clock2_pane

0xe6ea,	// (0x000b0b08) main_clock2_list_pane_ParamLimits

0xe6ea,	// (0x000b0b08) main_clock2_list_pane

0x4050,	// (0x000a646e) main_clock2_pane_t1_ParamLimits

0x4050,	// (0x000a646e) main_clock2_pane_t1

0x408b,	// (0x000a64a9) main_clock2_pane_t2_ParamLimits

0x408b,	// (0x000a64a9) main_clock2_pane_t2

0x0004,

0xf724,	// (0x000b1b42) main_clock2_pane_t_ParamLimits

0xf724,	// (0x000b1b42) main_clock2_pane_t

0x412b,	// (0x000a6549) popup_clock_analogue_window_cp03_ParamLimits

0x412b,	// (0x000a6549) popup_clock_analogue_window_cp03

0x4150,	// (0x000a656e) popup_clock_digital_window_cp02_ParamLimits

0x4150,	// (0x000a656e) popup_clock_digital_window_cp02

0x41c9,	// (0x000a65e7) main_clock2_list_single_pane_ParamLimits

0x41c9,	// (0x000a65e7) main_clock2_list_single_pane

0xa083,	// (0x000ac4a1) list_highlight_pane_cp05

0xc870,	// (0x000aec8e) main_clock2_list_single_pane_t1

0x150a,	// (0x000a3928) popup_toolbar_window_cp04_ParamLimits

0x9e6d,	// (0x000ac28b) camera2_autofocus_pane_g2_ParamLimits

0x9e6d,	// (0x000ac28b) camera2_autofocus_pane_g2

0x9e6d,	// (0x000ac28b) camera2_autofocus_pane_g3_ParamLimits

0x9e6d,	// (0x000ac28b) camera2_autofocus_pane_g3

0x9e6d,	// (0x000ac28b) camera2_autofocus_pane_g4_ParamLimits

0x9e6d,	// (0x000ac28b) camera2_autofocus_pane_g4

0x9e6d,	// (0x000ac28b) camera2_autofocus_pane_g5_ParamLimits

0x9e6d,	// (0x000ac28b) camera2_autofocus_pane_g5

0x0004,

0xf668,	// (0x000b1a86) camera2_autofocus_pane_g_ParamLimits

0xf668,	// (0x000b1a86) camera2_autofocus_pane_g

0x38d4,	// (0x000a5cf2) camera2_autofocus_pane_cp_g2

0x38dc,	// (0x000a5cfa) camera2_autofocus_pane_cp_g3

0x38e4,	// (0x000a5d02) camera2_autofocus_pane_cp_g4

0x38ec,	// (0x000a5d0a) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ce,	// (0x000b1aec) camera2_autofocus_pane_cp_g

0xe689,	// (0x000b0aa7) popup_dialer_spcha_window

0xe689,	// (0x000b0aa7) bg_popup_sub_pane_cp07

0xe689,	// (0x000b0aa7) list_spcha_pane

0xc87e,	// (0x000aec9c) list_single_spcha_pane_ParamLimits

0xc87e,	// (0x000aec9c) list_single_spcha_pane

0xe689,	// (0x000b0aa7) list_highlight_pane_cp06

0xa617,	// (0x000aca35) list_single_spcha_pane_t1

0xba87,	// (0x000adea5) popup_call2_audio_out_window_g4_ParamLimits

0xba87,	// (0x000adea5) popup_call2_audio_out_window_g4

0x9056,	// (0x000ab474) main_imed2_pane

0x9408,	// (0x000ab826) popup_imed_adjust2_window

0x3265,	// (0x000a5683) popup_imed_trans_window_ParamLimits

0x3265,	// (0x000a5683) popup_imed_trans_window

0xc260,	// (0x000ae67e) popup_blid_sat_info2_window_t1

0xc26e,	// (0x000ae68c) popup_blid_sat_info2_window_t2

0x000a,

0xf5fd,	// (0x000b1a1b) popup_blid_sat_info2_window_t

0x427a,	// (0x000a6698) aid_size_cell_colour_35

0x429a,	// (0x000a66b8) aid_size_cell_colour_112

0x42ba,	// (0x000a66d8) aid_size_cell_effect

0xabb4,	// (0x000acfd2) bg_tb_trans_pane_cp02

0xa53d,	// (0x000ac95b) heading_imed_pane

0x42da,	// (0x000a66f8) listscroll_imed_pane

0xc890,	// (0x000aecae) heading_imed_pane_g1

0xc898,	// (0x000aecb6) heading_imed_pane_t1

0xc8a6,	// (0x000aecc4) grid_imed_colour_35_pane_ParamLimits

0xc8a6,	// (0x000aecc4) grid_imed_colour_35_pane

0x42e6,	// (0x000a6704) grid_imed_effect_pane

0xc8be,	// (0x000aecdc) list_imed_aspect_pane

0x42fc,	// (0x000a671a) scroll_pane_cp027_ParamLimits

0x42fc,	// (0x000a671a) scroll_pane_cp027

0x430d,	// (0x000a672b) cell_imed_effect_pane_ParamLimits

0x430d,	// (0x000a672b) cell_imed_effect_pane

0xc8c6,	// (0x000aece4) cell_imed_colour_pane_ParamLimits

0xc8c6,	// (0x000aece4) cell_imed_colour_pane

0xc908,	// (0x000aed26) cell_imed_colour_pane_g1_ParamLimits

0xc908,	// (0x000aed26) cell_imed_colour_pane_g1

0xc919,	// (0x000aed37) hgihlgiht_grid_pane_cp016_ParamLimits

0xc919,	// (0x000aed37) hgihlgiht_grid_pane_cp016

0x4334,	// (0x000a6752) cell_imed_effect_pane_g1

0x433c,	// (0x000a675a) grid_highlight_pane_cp017

0xc92a,	// (0x000aed48) list_imed_single_pane_ParamLimits

0xc92a,	// (0x000aed48) list_imed_single_pane

0xe689,	// (0x000b0aa7) list_highlight_pane_cp07

0xc93f,	// (0x000aed5d) list_imed_aspect_pane_comp1_t1

0xabb4,	// (0x000acfd2) bg_tb_trans_pane_cp05

0xc961,	// (0x000aed7f) popup_imed_adjust2_window_g1

0xc988,	// (0x000aeda6) popup_imed_adjust2_window_t1

0xc9d5,	// (0x000aedf3) slider_imed_adjust_pane

0xc9e9,	// (0x000aee07) slider_imed_adjust_pane_g1

0xc9f9,	// (0x000aee17) slider_imed_adjust_pane_g2

0xca09,	// (0x000aee27) slider_imed_adjust_pane_g3

0xca1a,	// (0x000aee38) slider_imed_adjust_pane_g4

0x0003,

0xf741,	// (0x000b1b5f) slider_imed_adjust_pane_g

0x4345,	// (0x000a6763) aid_size_cell_clipart2

0x4351,	// (0x000a676f) grid_imed_clipart_pane

0xca2b,	// (0x000aee49) scroll_pane_cp031

0x435b,	// (0x000a6779) cell_imed_clipart_pane_ParamLimits

0x435b,	// (0x000a6779) cell_imed_clipart_pane

0x437d,	// (0x000a679b) cell_imed_clipart_pane_g1

0xe689,	// (0x000b0aa7) grid_highlight_pane_cp014

0x402c,	// (0x000a644a) main_clock2_pane_g1_ParamLimits

0x402c,	// (0x000a644a) main_clock2_pane_g1

0x4170,	// (0x000a658e) aid_call2_pane_cp10

0x4182,	// (0x000a65a0) aid_call_pane_cp10

0xa916,	// (0x000acd34) popup_clock_analogue_window_cp10_g1

0xa916,	// (0x000acd34) popup_clock_analogue_window_cp10_g2

0x4194,	// (0x000a65b2) popup_clock_analogue_window_cp10_g3

0x4194,	// (0x000a65b2) popup_clock_analogue_window_cp10_g4

0xa916,	// (0x000acd34) popup_clock_analogue_window_cp10_g5

0x0004,

0xf72f,	// (0x000b1b4d) popup_clock_analogue_window_cp10_g

0x41aa,	// (0x000a65c8) popup_clock_analogue_window_cp10_t1

0x41db,	// (0x000a65f9) clock_digital_number_pane_cp10_ParamLimits

0x41db,	// (0x000a65f9) clock_digital_number_pane_cp10

0x41f3,	// (0x000a6611) clock_digital_number_pane_cp11_ParamLimits

0x41f3,	// (0x000a6611) clock_digital_number_pane_cp11

0x420b,	// (0x000a6629) clock_digital_number_pane_cp12_ParamLimits

0x420b,	// (0x000a6629) clock_digital_number_pane_cp12

0x4225,	// (0x000a6643) clock_digital_number_pane_cp13_ParamLimits

0x4225,	// (0x000a6643) clock_digital_number_pane_cp13

0x423f,	// (0x000a665d) clock_digital_separator_pane_cp10_ParamLimits

0x423f,	// (0x000a665d) clock_digital_separator_pane_cp10

0x4259,	// (0x000a6677) popup_clock_digital_window_cp02_t1_ParamLimits

0x4259,	// (0x000a6677) popup_clock_digital_window_cp02_t1

0x9ddc,	// (0x000ac1fa) clock_digital_number_pane_cp10_g1

0x9ddc,	// (0x000ac1fa) clock_digital_number_pane_cp10_g2

0x0001,

0xf74a,	// (0x000b1b68) clock_digital_number_pane_cp10_g

0x9ddc,	// (0x000ac1fa) clock_digital_separator_pane_cp10_g1

0x9ddc,	// (0x000ac1fa) clock_digital_separator_pane_g2_cp10

0xaaa3,	// (0x000acec1) navi_pane_vded_g4

0xaaac,	// (0x000aceca) navi_pane_vded_g5

0xaab5,	// (0x000aced3) navi_pane_vded_t1

0x9056,	// (0x000ab474) main_vded_pane

0x4386,	// (0x000a67a4) main_vded_pane_g1

0x4390,	// (0x000a67ae) main_vded_pane_g2

0x439a,	// (0x000a67b8) main_vded_pane_g3

0x0002,

0xf74f,	// (0x000b1b6d) main_vded_pane_g

0x43a4,	// (0x000a67c2) main_vded_pane_t1

0x43b2,	// (0x000a67d0) main_vded_pane_t2

0x0001,

0xf756,	// (0x000b1b74) main_vded_pane_t

0x43c0,	// (0x000a67de) vded_slider_pane

0x43c8,	// (0x000a67e6) vded_video_pane

0xca33,	// (0x000aee51) vded_video_pane_g1

0x43d0,	// (0x000a67ee) vded_video_pane_g2

0xa0b9,	// (0x000ac4d7) vded_video_pane_g3

0x0002,

0xf75b,	// (0x000b1b79) vded_video_pane_g

0xca3d,	// (0x000aee5b) vded_slider_pane_g1

0xc18b,	// (0x000ae5a9) vded_slider_pane_g2

0xca46,	// (0x000aee64) vded_slider_pane_g3

0xca4f,	// (0x000aee6d) vded_slider_pane_g4

0xca58,	// (0x000aee76) vded_slider_pane_g5

0x0004,

0xf762,	// (0x000b1b80) vded_slider_pane_g

0x3e90,	// (0x000a62ae) mup3_rocker_pane_ParamLimits

0x3e90,	// (0x000a62ae) mup3_rocker_pane

0x43d9,	// (0x000a67f7) mup3_control_keys_pane_g1

0x43e1,	// (0x000a67ff) mup3_control_keys_pane_g2

0x43e9,	// (0x000a6807) mup3_control_keys_pane_g3

0x43f1,	// (0x000a680f) mup3_control_keys_pane_g4

0x0003,

0xf76d,	// (0x000b1b8b) mup3_control_keys_pane_g

0x084d,	// (0x000a2c6b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x084d,	// (0x000a2c6b) popup_toolbar2_fixed_window_cp01

0x3ec4,	// (0x000a62e2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x3ec4,	// (0x000a62e2) popup_toolbar2_fixed_window_cp02

0xb31d,	// (0x000ad73b) popup_call2_audio_second_window_t4_ParamLimits

0xb31d,	// (0x000ad73b) popup_call2_audio_second_window_t4

0xb94c,	// (0x000add6a) popup_call2_audio_first_window_t6_ParamLimits

0xb94c,	// (0x000add6a) popup_call2_audio_first_window_t6

0xbb8a,	// (0x000adfa8) popup_call2_audio_out_window_t6_ParamLimits

0xbb8a,	// (0x000adfa8) popup_call2_audio_out_window_t6

0x9056,	// (0x000ab474) main_vitu_pane

0xe6ea,	// (0x000b0b08) aid_size_cell_itu_ParamLimits

0xe6ea,	// (0x000b0b08) aid_size_cell_itu

0xe6ea,	// (0x000b0b08) bg_popup_window_pane_cp08_ParamLimits

0xe6ea,	// (0x000b0b08) bg_popup_window_pane_cp08

0xe6ea,	// (0x000b0b08) field_vitu_entry_pane_ParamLimits

0xe6ea,	// (0x000b0b08) field_vitu_entry_pane

0xe6ea,	// (0x000b0b08) grid_vitu_function_pane_ParamLimits

0xe6ea,	// (0x000b0b08) grid_vitu_function_pane

0xe6ea,	// (0x000b0b08) grid_vitu_itu_pane_ParamLimits

0xe6ea,	// (0x000b0b08) grid_vitu_itu_pane

0xe6ea,	// (0x000b0b08) cell_vitu_itu_pane_ParamLimits

0xe6ea,	// (0x000b0b08) cell_vitu_itu_pane

0xe6ea,	// (0x000b0b08) cell_vitu_function_pane_ParamLimits

0xe6ea,	// (0x000b0b08) cell_vitu_function_pane

0xe6ea,	// (0x000b0b08) bg_popup_sub_pane_cp08_ParamLimits

0xe6ea,	// (0x000b0b08) bg_popup_sub_pane_cp08

0xa08b,	// (0x000ac4a9) field_vitu_entry_pane_t1_ParamLimits

0xa08b,	// (0x000ac4a9) field_vitu_entry_pane_t1

0xc9a0,	// (0x000aedbe) field_vitu_entry_pane_t2_ParamLimits

0xc9a0,	// (0x000aedbe) field_vitu_entry_pane_t2

0x0001,

0xf776,	// (0x000b1b94) field_vitu_entry_pane_t_ParamLimits

0xf776,	// (0x000b1b94) field_vitu_entry_pane_t

0xc038,	// (0x000ae456) bg_button_pane_cp05_ParamLimits

0xc038,	// (0x000ae456) bg_button_pane_cp05

0xca61,	// (0x000aee7f) cell_vitu_itu_pane_g1

0xaba0,	// (0x000acfbe) cell_vitu_itu_pane_t1_ParamLimits

0xaba0,	// (0x000acfbe) cell_vitu_itu_pane_t1

0xaba0,	// (0x000acfbe) cell_vitu_itu_pane_t2_ParamLimits

0xaba0,	// (0x000acfbe) cell_vitu_itu_pane_t2

0x0002,

0xf77b,	// (0x000b1b99) cell_vitu_itu_pane_t_ParamLimits

0xf77b,	// (0x000b1b99) cell_vitu_itu_pane_t

0xe689,	// (0x000b0aa7) bg_button_pane_cp07

0xa0b9,	// (0x000ac4d7) cell_vitu_function_pane_g1

0x9271,	// (0x000ab68f) main_calc_pane_g1

0x063a,	// (0x000a2a58) aid_visual_content_pane

0x9056,	// (0x000ab474) main_vradio_pane

0x9e5f,	// (0x000ac27d) main_vradio_pane_g1_ParamLimits

0x9e5f,	// (0x000ac27d) main_vradio_pane_g1

0x9e6d,	// (0x000ac28b) main_vradio_pane_g2_ParamLimits

0x9e6d,	// (0x000ac28b) main_vradio_pane_g2

0x0001,

0xf782,	// (0x000b1ba0) main_vradio_pane_g_ParamLimits

0xf782,	// (0x000b1ba0) main_vradio_pane_g

0xa08b,	// (0x000ac4a9) main_vradio_pane_t1_ParamLimits

0xa08b,	// (0x000ac4a9) main_vradio_pane_t1

0xa08b,	// (0x000ac4a9) main_vradio_pane_t2_ParamLimits

0xa08b,	// (0x000ac4a9) main_vradio_pane_t2

0xa351,	// (0x000ac76f) main_vradio_pane_t3_ParamLimits

0xa351,	// (0x000ac76f) main_vradio_pane_t3

0x0002,

0xf787,	// (0x000b1ba5) main_vradio_pane_t_ParamLimits

0xf787,	// (0x000b1ba5) main_vradio_pane_t

0xe6ea,	// (0x000b0b08) vradio_rocker_control_pane_ParamLimits

0xe6ea,	// (0x000b0b08) vradio_rocker_control_pane

0xe6ea,	// (0x000b0b08) vradio_station_info_pane_ParamLimits

0xe6ea,	// (0x000b0b08) vradio_station_info_pane

0xe6ea,	// (0x000b0b08) vradio_frequency_info_pane_ParamLimits

0xe6ea,	// (0x000b0b08) vradio_frequency_info_pane

0xa0b9,	// (0x000ac4d7) vradio_station_info_pane_g1

0xaba0,	// (0x000acfbe) vradio_station_info_pane_t1_ParamLimits

0xaba0,	// (0x000acfbe) vradio_station_info_pane_t1

0xa351,	// (0x000ac76f) vradio_station_info_pane_t2_ParamLimits

0xa351,	// (0x000ac76f) vradio_station_info_pane_t2

0x0001,

0xf78e,	// (0x000b1bac) vradio_station_info_pane_t_ParamLimits

0xf78e,	// (0x000b1bac) vradio_station_info_pane_t

0xe689,	// (0x000b0aa7) vradio_tuning_pane

0x4401,	// (0x000a681f) vradio_rocker_control_pane_g1

0xca7d,	// (0x000aee9b) vradio_rocker_control_pane_g2

0x440b,	// (0x000a6829) vradio_rocker_control_pane_g3

0x4415,	// (0x000a6833) vradio_rocker_control_pane_g4

0x441f,	// (0x000a683d) vradio_rocker_control_pane_g5

0x0004,

0xf793,	// (0x000b1bb1) vradio_rocker_control_pane_g

0xa0b9,	// (0x000ac4d7) vradio_frequency_info_pane_g1

0xa08b,	// (0x000ac4a9) vradio_frequency_info_pane_t1_ParamLimits

0xa08b,	// (0x000ac4a9) vradio_frequency_info_pane_t1

0x4429,	// (0x000a6847) vradio_tuning_pane_g1

0x4434,	// (0x000a6852) vradio_tuning_pane_t1

0x0697,	// (0x000a2ab5) area_side_right_pane_ParamLimits

0x0697,	// (0x000a2ab5) area_side_right_pane

0xbfb4,	// (0x000ae3d2) status_small_pane_g1

0xbfbc,	// (0x000ae3da) status_small_pane_g2

0xbfc5,	// (0x000ae3e3) status_small_pane_g3

0xbfce,	// (0x000ae3ec) status_small_pane_g4

0x0003,

0xf55f,	// (0x000b197d) status_small_pane_g

0xbfd7,	// (0x000ae3f5) status_small_pane_t1

0x9056,	// (0x000ab474) main_video3_pane

0xca85,	// (0x000aeea3) cams_zoom_vslider_pane

0xca8d,	// (0x000aeeab) image3_wide_pane_ParamLimits

0xca8d,	// (0x000aeeab) image3_wide_pane

0xcaa7,	// (0x000aeec5) image3_wide_small_pane

0xcab3,	// (0x000aeed1) main_video3_pane_g1_ParamLimits

0xcab3,	// (0x000aeed1) main_video3_pane_g1

0xcacf,	// (0x000aeeed) main_video3_pane_g2_ParamLimits

0xcacf,	// (0x000aeeed) main_video3_pane_g2

0x0001,

0xf79e,	// (0x000b1bbc) main_video3_pane_g_ParamLimits

0xf79e,	// (0x000b1bbc) main_video3_pane_g

0xcaeb,	// (0x000aef09) main_video3_pane_t1_ParamLimits

0xcaeb,	// (0x000aef09) main_video3_pane_t1

0xcb16,	// (0x000aef34) main_video3_pane_t2_ParamLimits

0xcb16,	// (0x000aef34) main_video3_pane_t2

0xcb41,	// (0x000aef5f) main_video3_pane_t3_ParamLimits

0xcb41,	// (0x000aef5f) main_video3_pane_t3

0x0002,

0xf7a3,	// (0x000b1bc1) main_video3_pane_t_ParamLimits

0xf7a3,	// (0x000b1bc1) main_video3_pane_t

0xcb6e,	// (0x000aef8c) cams_zoom_vslider_pane_g1

0xcb77,	// (0x000aef95) cams_zoom_vslider_pane_g2

0x0001,

0xf7aa,	// (0x000b1bc8) cams_zoom_vslider_pane_g

0xcb7f,	// (0x000aef9d) small_slider_vertical_pane

0xa0b9,	// (0x000ac4d7) small_slider_vertical_pane_g1

0xa0b9,	// (0x000ac4d7) small_slider_vertical_pane_g2

0xcb87,	// (0x000aefa5) small_slider_vertical_pane_g3

0x0002,

0xf7af,	// (0x000b1bcd) small_slider_vertical_pane_g

0x9056,	// (0x000ab474) main_hwr_training_pane

0xcb90,	// (0x000aefae) hwr_training_instruct_pane_ParamLimits

0xcb90,	// (0x000aefae) hwr_training_instruct_pane

0x4443,	// (0x000a6861) hwr_training_navi_pane_ParamLimits

0x4443,	// (0x000a6861) hwr_training_navi_pane

0x4462,	// (0x000a6880) hwr_training_write_pane_ParamLimits

0x4462,	// (0x000a6880) hwr_training_write_pane

0xe689,	// (0x000b0aa7) bg_frame_shadow_pane

0xcbc7,	// (0x000aefe5) hwr_training_write_pane_g1

0xcbcf,	// (0x000aefed) hwr_training_write_pane_g2

0xcbd7,	// (0x000aeff5) hwr_training_write_pane_g3

0xcbdf,	// (0x000aeffd) hwr_training_write_pane_g4

0xcbe7,	// (0x000af005) hwr_training_write_pane_g5

0xcbef,	// (0x000af00d) hwr_training_write_pane_g6

0xcbf7,	// (0x000af015) hwr_training_write_pane_g7

0x0006,

0xf7b6,	// (0x000b1bd4) hwr_training_write_pane_g

0x94f0,	// (0x000ab90e) hwr_training_navi_pane_g1_ParamLimits

0x94f0,	// (0x000ab90e) hwr_training_navi_pane_g1

0x9502,	// (0x000ab920) hwr_training_navi_pane_g2_ParamLimits

0x9502,	// (0x000ab920) hwr_training_navi_pane_g2

0x9514,	// (0x000ab932) hwr_training_navi_pane_g3_ParamLimits

0x9514,	// (0x000ab932) hwr_training_navi_pane_g3

0x9524,	// (0x000ab942) hwr_training_navi_pane_g4_ParamLimits

0x9524,	// (0x000ab942) hwr_training_navi_pane_g4

0x0004,

0xf7c5,	// (0x000b1be3) hwr_training_navi_pane_g_ParamLimits

0xf7c5,	// (0x000b1be3) hwr_training_navi_pane_g

0x9531,	// (0x000ab94f) hwr_training_navi_pane_t1

0x44ac,	// (0x000a68ca) list_single_hwr_training_instruct_pane_ParamLimits

0x44ac,	// (0x000a68ca) list_single_hwr_training_instruct_pane

0xcbff,	// (0x000af01d) list_single_hwr_training_instruct_pane_t1

0xc361,	// (0x000ae77f) bg_frame_shadow_pane_g1

0xcc0e,	// (0x000af02c) bg_frame_shadow_pane_g2

0xcc16,	// (0x000af034) bg_frame_shadow_pane_g3

0xcc1e,	// (0x000af03c) bg_frame_shadow_pane_g4

0xcc26,	// (0x000af044) bg_frame_shadow_pane_g5

0xcc2e,	// (0x000af04c) bg_frame_shadow_pane_g6

0xcc36,	// (0x000af054) bg_frame_shadow_pane_g7

0x9f80,	// (0x000ac39e) bg_frame_shadow_pane_g8

0x0007,

0xf7d0,	// (0x000b1bee) bg_frame_shadow_pane_g

0x9056,	// (0x000ab474) main_video_tele_dialer_pane

0x44c2,	// (0x000a68e0) aid_size_cell_video_keypad_ParamLimits

0x44c2,	// (0x000a68e0) aid_size_cell_video_keypad

0x44dc,	// (0x000a68fa) grid_video_dialer_keypad_pane_ParamLimits

0x44dc,	// (0x000a68fa) grid_video_dialer_keypad_pane

0x452a,	// (0x000a6948) video_down_pane_cp_ParamLimits

0x452a,	// (0x000a6948) video_down_pane_cp

0x455c,	// (0x000a697a) cell_video_dialer_keypad_pane_ParamLimits

0x455c,	// (0x000a697a) cell_video_dialer_keypad_pane

0xcc3e,	// (0x000af05c) bg_button_pane_cp08_ParamLimits

0xcc3e,	// (0x000af05c) bg_button_pane_cp08

0x457e,	// (0x000a699c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x457e,	// (0x000a699c) cell_video_dialer_keypad_pane_g1

0x3e7a,	// (0x000a6298) mup3_rocker2_pane_ParamLimits

0x3e7a,	// (0x000a6298) mup3_rocker2_pane

0xa0b9,	// (0x000ac4d7) mup3_rocker2_pane_g1

0x3154,	// (0x000a5572) main_dialer2_pane

0x9056,	// (0x000ab474) main_mp4_pane

0x955d,	// (0x000ab97b) main_mp4_pane_g1_ParamLimits

0x955d,	// (0x000ab97b) main_mp4_pane_g1

0x955d,	// (0x000ab97b) main_mp4_pane_g2_ParamLimits

0x955d,	// (0x000ab97b) main_mp4_pane_g2

0x45b8,	// (0x000a69d6) main_mp4_pane_g3_ParamLimits

0x45b8,	// (0x000a69d6) main_mp4_pane_g3

0x956b,	// (0x000ab989) main_mp4_pane_g4_ParamLimits

0x956b,	// (0x000ab989) main_mp4_pane_g4

0x9599,	// (0x000ab9b7) main_mp4_pane_g5_ParamLimits

0x9599,	// (0x000ab9b7) main_mp4_pane_g5

0x0007,

0xf7f0,	// (0x000b1c0e) main_mp4_pane_g_ParamLimits

0xf7f0,	// (0x000b1c0e) main_mp4_pane_g

0x960d,	// (0x000aba2b) main_mp4_pane_t1_ParamLimits

0x960d,	// (0x000aba2b) main_mp4_pane_t1

0x9669,	// (0x000aba87) main_mp4_pane_t2_ParamLimits

0x9669,	// (0x000aba87) main_mp4_pane_t2

0xcc4a,	// (0x000af068) main_mp4_pane_t3_ParamLimits

0xcc4a,	// (0x000af068) main_mp4_pane_t3

0x96bb,	// (0x000abad9) main_mp4_pane_t4_ParamLimits

0x96bb,	// (0x000abad9) main_mp4_pane_t4

0x0003,

0xf801,	// (0x000b1c1f) main_mp4_pane_t_ParamLimits

0xf801,	// (0x000b1c1f) main_mp4_pane_t

0x96ff,	// (0x000abb1d) mp4_progress_pane_ParamLimits

0x96ff,	// (0x000abb1d) mp4_progress_pane

0x9749,	// (0x000abb67) mp4_rocker_pane_ParamLimits

0x9749,	// (0x000abb67) mp4_rocker_pane

0xcc78,	// (0x000af096) mp4_progress_pane_t1

0xcc91,	// (0x000af0af) mp4_progress_pane_t2

0x0001,

0xf80a,	// (0x000b1c28) mp4_progress_pane_t

0xccaa,	// (0x000af0c8) mup_progress_pane_cp04

0xc9cb,	// (0x000aede9) mp4_rocker_pane_g1

0x45f4,	// (0x000a6a12) aid_cell_size_keypad2_ParamLimits

0x45f4,	// (0x000a6a12) aid_cell_size_keypad2

0x460a,	// (0x000a6a28) dialer2_ne_pane_ParamLimits

0x460a,	// (0x000a6a28) dialer2_ne_pane

0x4624,	// (0x000a6a42) grid_dialer2_keypad_pane_ParamLimits

0x4624,	// (0x000a6a42) grid_dialer2_keypad_pane

0xc038,	// (0x000ae456) bg_popup_call_pane_cp07_ParamLimits

0xc038,	// (0x000ae456) bg_popup_call_pane_cp07

0x4640,	// (0x000a6a5e) dialer2_ne_pane_t1_ParamLimits

0x4640,	// (0x000a6a5e) dialer2_ne_pane_t1

0x467c,	// (0x000a6a9a) cell_dialer2_keypad_pane_ParamLimits

0x467c,	// (0x000a6a9a) cell_dialer2_keypad_pane

0xcccf,	// (0x000af0ed) bg_button_pane_pane_cp04_ParamLimits

0xcccf,	// (0x000af0ed) bg_button_pane_pane_cp04

0x469e,	// (0x000a6abc) cell_dialer2_keypad_pane_g1_ParamLimits

0x469e,	// (0x000a6abc) cell_dialer2_keypad_pane_g1

0x13de,	// (0x000a37fc) aid_placing_vt_set_content_ParamLimits

0x13de,	// (0x000a37fc) aid_placing_vt_set_content

0x1406,	// (0x000a3824) aid_placing_vt_set_title_ParamLimits

0x1406,	// (0x000a3824) aid_placing_vt_set_title

0x9056,	// (0x000ab474) main_image3_pane

0x4764,	// (0x000a6b82) area_side_right_pane_cp01_ParamLimits

0x4764,	// (0x000a6b82) area_side_right_pane_cp01

0x955d,	// (0x000ab97b) main_image3_pane_g1_ParamLimits

0x955d,	// (0x000ab97b) main_image3_pane_g1

0x477b,	// (0x000a6b99) main_image3_pane_g2_ParamLimits

0x477b,	// (0x000a6b99) main_image3_pane_g2

0x47a3,	// (0x000a6bc1) main_image3_pane_g3_ParamLimits

0x47a3,	// (0x000a6bc1) main_image3_pane_g3

0x47cd,	// (0x000a6beb) main_image3_pane_g4_ParamLimits

0x47cd,	// (0x000a6beb) main_image3_pane_g4

0x0003,

0xf819,	// (0x000b1c37) main_image3_pane_g_ParamLimits

0xf819,	// (0x000b1c37) main_image3_pane_g

0x47f7,	// (0x000a6c15) main_image3_pane_t1_ParamLimits

0x47f7,	// (0x000a6c15) main_image3_pane_t1

0x484f,	// (0x000a6c6d) main_image3_pane_t2_ParamLimits

0x484f,	// (0x000a6c6d) main_image3_pane_t2

0x48a1,	// (0x000a6cbf) main_image3_pane_t3_ParamLimits

0x48a1,	// (0x000a6cbf) main_image3_pane_t3

0x0003,

0xf822,	// (0x000b1c40) main_image3_pane_t_ParamLimits

0xf822,	// (0x000b1c40) main_image3_pane_t

0xe6ea,	// (0x000b0b08) grid_sctrl_middle_pane_cp01_ParamLimits

0xe6ea,	// (0x000b0b08) grid_sctrl_middle_pane_cp01

0x4929,	// (0x000a6d47) cell_sctrl_middle_pane_cp01_ParamLimits

0x4929,	// (0x000a6d47) cell_sctrl_middle_pane_cp01

0x4946,	// (0x000a6d64) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4946,	// (0x000a6d64) cell_sctrl_middle_pane_cp01_g1

0x9056,	// (0x000ab474) main_call4_pane

0x495c,	// (0x000a6d7a) aid_size_button_call4_ParamLimits

0x495c,	// (0x000a6d7a) aid_size_button_call4

0x498f,	// (0x000a6dad) call4_windows_pane_ParamLimits

0x498f,	// (0x000a6dad) call4_windows_pane

0x49ae,	// (0x000a6dcc) grid_call4_button_pane_ParamLimits

0x49ae,	// (0x000a6dcc) grid_call4_button_pane

0x49e1,	// (0x000a6dff) call4_windows_conf_pane

0x49f6,	// (0x000a6e14) popup_call4_audio_first_window_ParamLimits

0x49f6,	// (0x000a6e14) popup_call4_audio_first_window

0x4a46,	// (0x000a6e64) popup_call4_audio_second_window_ParamLimits

0x4a46,	// (0x000a6e64) popup_call4_audio_second_window

0x4a5d,	// (0x000a6e7b) popup_call4_audio_wait_window_ParamLimits

0x4a5d,	// (0x000a6e7b) popup_call4_audio_wait_window

0x4a6b,	// (0x000a6e89) cell_call4_button_pane_ParamLimits

0x4a6b,	// (0x000a6e89) cell_call4_button_pane

0x4a90,	// (0x000a6eae) bg_button_pane_cp09_ParamLimits

0x4a90,	// (0x000a6eae) bg_button_pane_cp09

0x4a9c,	// (0x000a6eba) cell_call4_button_pane_g1_ParamLimits

0x4a9c,	// (0x000a6eba) cell_call4_button_pane_g1

0x4ac2,	// (0x000a6ee0) cell_call4_button_pane_t1_ParamLimits

0x4ac2,	// (0x000a6ee0) cell_call4_button_pane_t1

0xcce3,	// (0x000af101) popup_call4_audio_conf_window_ParamLimits

0xcce3,	// (0x000af101) popup_call4_audio_conf_window

0x3eda,	// (0x000a62f8) mup3_progress_pane_t1_ParamLimits

0x3ef9,	// (0x000a6317) mup3_progress_pane_t2_ParamLimits

0xc73f,	// (0x000aeb5d) mup3_progress_pane_t3_ParamLimits

0xf6f7,	// (0x000b1b15) mup3_progress_pane_t_ParamLimits

0xc75c,	// (0x000aeb7a) mup_progress_pane_cp03_ParamLimits

0x43f9,	// (0x000a6817) mup3_control_keys_pane_g4_copy1

0x972d,	// (0x000abb4b) mp4_rocker2_pane_ParamLimits

0x972d,	// (0x000abb4b) mp4_rocker2_pane

0xccf7,	// (0x000af115) mp4_rocker2_pane_g1

0xccff,	// (0x000af11d) mp4_rocker2_pane_g2

0x97cd,	// (0x000abbeb) mp4_rocker2_pane_g3

0x97d5,	// (0x000abbf3) mp4_rocker2_pane_g4

0x97dd,	// (0x000abbfb) mp4_rocker2_pane_g5

0x0004,

0xf82b,	// (0x000b1c49) mp4_rocker2_pane_g

0x9056,	// (0x000ab474) main_camera4_pane

0x9056,	// (0x000ab474) main_video4_pane

0x44f8,	// (0x000a6916) main_video_tele_dialer_pane_t1_ParamLimits

0x44f8,	// (0x000a6916) main_video_tele_dialer_pane_t1

0x4511,	// (0x000a692f) main_video_tele_dialer_pane_t2_ParamLimits

0x4511,	// (0x000a692f) main_video_tele_dialer_pane_t2

0x0001,

0xf7e1,	// (0x000b1bff) main_video_tele_dialer_pane_t_ParamLimits

0xf7e1,	// (0x000b1bff) main_video_tele_dialer_pane_t

0x4b04,	// (0x000a6f22) cam4_autofocus_pane_ParamLimits

0x4b04,	// (0x000a6f22) cam4_autofocus_pane

0x4b1a,	// (0x000a6f38) cam4_image_uncrop_pane_ParamLimits

0x4b1a,	// (0x000a6f38) cam4_image_uncrop_pane

0x4b34,	// (0x000a6f52) cam4_indicators_pane_ParamLimits

0x4b34,	// (0x000a6f52) cam4_indicators_pane

0x4b5f,	// (0x000a6f7d) main_camera4_pane_g1_ParamLimits

0x4b5f,	// (0x000a6f7d) main_camera4_pane_g1

0x4b71,	// (0x000a6f8f) main_camera4_pane_g2_ParamLimits

0x4b71,	// (0x000a6f8f) main_camera4_pane_g2

0x4b84,	// (0x000a6fa2) main_camera4_pane_g3_ParamLimits

0x4b84,	// (0x000a6fa2) main_camera4_pane_g3

0x4b97,	// (0x000a6fb5) main_camera4_pane_g4_ParamLimits

0x4b97,	// (0x000a6fb5) main_camera4_pane_g4

0x4baa,	// (0x000a6fc8) main_camera4_pane_g5_ParamLimits

0x4baa,	// (0x000a6fc8) main_camera4_pane_g5

0x0005,

0xf836,	// (0x000b1c54) main_camera4_pane_g_ParamLimits

0xf836,	// (0x000b1c54) main_camera4_pane_g

0x4bce,	// (0x000a6fec) main_camera4_pane_t1_ParamLimits

0x4bce,	// (0x000a6fec) main_camera4_pane_t1

0xdd00,	// (0x000b011e) bg_tb_trans_pane_cp06

0x9809,	// (0x000abc27) cam4_indicators_pane_g1

0x981a,	// (0x000abc38) cam4_indicators_pane_g2

0x0002,

0xf851,	// (0x000b1c6f) cam4_indicators_pane_g

0x9832,	// (0x000abc50) cam4_indicators_pane_t1

0x4c32,	// (0x000a7050) main_video4_pane_g1_ParamLimits

0x4c32,	// (0x000a7050) main_video4_pane_g1

0x4c41,	// (0x000a705f) main_video4_pane_g2_ParamLimits

0x4c41,	// (0x000a705f) main_video4_pane_g2

0x4c50,	// (0x000a706e) main_video4_pane_g3_ParamLimits

0x4c50,	// (0x000a706e) main_video4_pane_g3

0x4c5f,	// (0x000a707d) main_video4_pane_g4_ParamLimits

0x4c5f,	// (0x000a707d) main_video4_pane_g4

0x0004,

0xf858,	// (0x000b1c76) main_video4_pane_g_ParamLimits

0xf858,	// (0x000b1c76) main_video4_pane_g

0x4c7d,	// (0x000a709b) vid4_indicators_pane_ParamLimits

0x4c7d,	// (0x000a709b) vid4_indicators_pane

0x4cab,	// (0x000a70c9) video4_image_uncrop_cif_pane_ParamLimits

0x4cab,	// (0x000a70c9) video4_image_uncrop_cif_pane

0x4cc5,	// (0x000a70e3) video4_image_uncrop_nhd_pane_ParamLimits

0x4cc5,	// (0x000a70e3) video4_image_uncrop_nhd_pane

0x4b1a,	// (0x000a6f38) video4_image_uncrop_vga_pane_ParamLimits

0x4b1a,	// (0x000a6f38) video4_image_uncrop_vga_pane

0x9048,	// (0x000ab466) bg_tb_trans_pane_cp07

0x985c,	// (0x000abc7a) vid4_indicators_pane_g1

0x9870,	// (0x000abc8e) vid4_indicators_pane_g2

0x9884,	// (0x000abca2) vid4_indicators_pane_g3

0x0004,

0xf863,	// (0x000b1c81) vid4_indicators_pane_g

0x98b1,	// (0x000abccf) vid4_indicators_pane_t1

0x4cd9,	// (0x000a70f7) cam4_autofocus_pane_g1

0x4ce1,	// (0x000a70ff) cam4_autofocus_pane_g2

0x4ce9,	// (0x000a7107) cam4_autofocus_pane_g3

0x0002,

0xf86e,	// (0x000b1c8c) cam4_autofocus_pane_g

0x4cf1,	// (0x000a710f) cam4_autofocus_pane_g3_copy1

0x4540,	// (0x000a695e) video_down_pane_cp_t1

0x454e,	// (0x000a696c) video_down_pane_cp_t2

0x0001,

0xf7e6,	// (0x000b1c04) video_down_pane_cp_t

0x9048,	// (0x000ab466) popup_vitu2_window_ParamLimits

0x9048,	// (0x000ab466) popup_vitu2_window

0x4cf9,	// (0x000a7117) aid_size_cell2_itu2_ParamLimits

0x4cf9,	// (0x000a7117) aid_size_cell2_itu2

0x4d1f,	// (0x000a713d) aid_size_cell_itu2_ParamLimits

0x4d1f,	// (0x000a713d) aid_size_cell_itu2

0x4d7b,	// (0x000a7199) bg_popup_window_pane_cp09_ParamLimits

0x4d7b,	// (0x000a7199) bg_popup_window_pane_cp09

0x4d89,	// (0x000a71a7) field_vitu2_entry_pane_ParamLimits

0x4d89,	// (0x000a71a7) field_vitu2_entry_pane

0x4daf,	// (0x000a71cd) grid_vitu2_function_pane_ParamLimits

0x4daf,	// (0x000a71cd) grid_vitu2_function_pane

0x4e00,	// (0x000a721e) grid_vitu2_itu_pane_ParamLimits

0x4e00,	// (0x000a721e) grid_vitu2_itu_pane

0x4e96,	// (0x000a72b4) cell_vitu2_itu_pane_ParamLimits

0x4e96,	// (0x000a72b4) cell_vitu2_itu_pane

0x4ec2,	// (0x000a72e0) cell_vitu2_function_pane_ParamLimits

0x4ec2,	// (0x000a72e0) cell_vitu2_function_pane

0xcd19,	// (0x000af137) bg_popup_call_pane_cp08_ParamLimits

0xcd19,	// (0x000af137) bg_popup_call_pane_cp08

0xcd30,	// (0x000af14e) field_vitu2_entry_pane_g1

0xcd3c,	// (0x000af15a) field_vitu2_entry_pane_g2

0x0002,

0xf875,	// (0x000b1c93) field_vitu2_entry_pane_g

0x4f01,	// (0x000a731f) field_vitu2_entry_pane_t1_ParamLimits

0x4f01,	// (0x000a731f) field_vitu2_entry_pane_t1

0xcd48,	// (0x000af166) field_vitu2_entry_pane_t2_ParamLimits

0xcd48,	// (0x000af166) field_vitu2_entry_pane_t2

0x0001,

0xf87c,	// (0x000b1c9a) field_vitu2_entry_pane_t_ParamLimits

0xf87c,	// (0x000b1c9a) field_vitu2_entry_pane_t

0x4f31,	// (0x000a734f) bg_button_pane_cp010_ParamLimits

0x4f31,	// (0x000a734f) bg_button_pane_cp010

0x4f3f,	// (0x000a735d) cell_vitu2_itu_pane_g1

0x4f65,	// (0x000a7383) cell_vitu2_itu_pane_t1_ParamLimits

0x4f65,	// (0x000a7383) cell_vitu2_itu_pane_t1

0x04fe,	// (0x000a291c) cell_vitu2_itu_pane_t2_ParamLimits

0x04fe,	// (0x000a291c) cell_vitu2_itu_pane_t2

0x0002,

0xf886,	// (0x000b1ca4) cell_vitu2_itu_pane_t_ParamLimits

0xf886,	// (0x000b1ca4) cell_vitu2_itu_pane_t

0x9048,	// (0x000ab466) bg_button_pane_cp011

0x4fc3,	// (0x000a73e1) cell_vitu2_function_pane_g1

0x9056,	// (0x000ab474) main_myfav_hc_pane

0x48f1,	// (0x000a6d0f) popup_image3_note_pane_ParamLimits

0x48f1,	// (0x000a6d0f) popup_image3_note_pane

0x490d,	// (0x000a6d2b) popup_image3_tool_bar_pane_ParamLimits

0x490d,	// (0x000a6d2b) popup_image3_tool_bar_pane

0x058c,	// (0x000a29aa) cell_vitu2_itu_pane_t3_ParamLimits

0x058c,	// (0x000a29aa) cell_vitu2_itu_pane_t3

0xe689,	// (0x000b0aa7) bg_popup_trans_pane

0xcd6d,	// (0x000af18b) grid_image3_tool_bar_pane

0xcd77,	// (0x000af195) bg_popup_trans_pane_g1

0xa2ca,	// (0x000ac6e8) bg_popup_trans_pane_g2

0xcd7f,	// (0x000af19d) bg_popup_trans_pane_g3

0xcd87,	// (0x000af1a5) bg_popup_trans_pane_g4

0xcd8f,	// (0x000af1ad) bg_popup_trans_pane_g5

0xcd97,	// (0x000af1b5) bg_popup_trans_pane_g6

0xcd9f,	// (0x000af1bd) bg_popup_trans_pane_g7

0xcda7,	// (0x000af1c5) bg_popup_trans_pane_g8

0xa2aa,	// (0x000ac6c8) bg_popup_trans_pane_g9

0x0008,

0xf88d,	// (0x000b1cab) bg_popup_trans_pane_g

0xcdaf,	// (0x000af1cd) cell_image3_tool_bar_pane_ParamLimits

0xcdaf,	// (0x000af1cd) cell_image3_tool_bar_pane

0xa0b9,	// (0x000ac4d7) cell_image3_tool_bar_pane_g1

0xe689,	// (0x000b0aa7) bg_popup_trans_pane_cp1

0xcdc3,	// (0x000af1e1) popup_image3_note_pane_t1

0xcdd1,	// (0x000af1ef) popup_image3_note_pane_t2

0xcddf,	// (0x000af1fd) popup_image3_note_pane_t3

0x0002,

0xf8a0,	// (0x000b1cbe) popup_image3_note_pane_t

0xcded,	// (0x000af20b) popup_image3_note_pane_t3_copy1

0x4fd6,	// (0x000a73f4) bg_myfav_hc_instruction_pane_ParamLimits

0x4fd6,	// (0x000a73f4) bg_myfav_hc_instruction_pane

0x4fea,	// (0x000a7408) cell_myfav_contact_pane_ParamLimits

0x4fea,	// (0x000a7408) cell_myfav_contact_pane

0x5008,	// (0x000a7426) cell_myfav_contact_pane_cp1_ParamLimits

0x5008,	// (0x000a7426) cell_myfav_contact_pane_cp1

0x5020,	// (0x000a743e) cell_myfav_contact_pane_cp2_ParamLimits

0x5020,	// (0x000a743e) cell_myfav_contact_pane_cp2

0x5038,	// (0x000a7456) cell_myfav_contact_pane_cp3_ParamLimits

0x5038,	// (0x000a7456) cell_myfav_contact_pane_cp3

0x504f,	// (0x000a746d) cell_myfav_contact_pane_cp4_ParamLimits

0x504f,	// (0x000a746d) cell_myfav_contact_pane_cp4

0x5067,	// (0x000a7485) cell_myfav_contact_pane_cp5_ParamLimits

0x5067,	// (0x000a7485) cell_myfav_contact_pane_cp5

0x507b,	// (0x000a7499) cell_myfav_contact_pane_cp6_ParamLimits

0x507b,	// (0x000a7499) cell_myfav_contact_pane_cp6

0x5091,	// (0x000a74af) cell_myfav_contact_pane_cp7_ParamLimits

0x5091,	// (0x000a74af) cell_myfav_contact_pane_cp7

0xcdfb,	// (0x000af219) listscroll_gen_pane_cp05

0x50ab,	// (0x000a74c9) main_myfav_hc_pane_g1_ParamLimits

0x50ab,	// (0x000a74c9) main_myfav_hc_pane_g1

0x50c5,	// (0x000a74e3) main_myfav_hc_pane_g2_ParamLimits

0x50c5,	// (0x000a74e3) main_myfav_hc_pane_g2

0x0002,

0xf8a7,	// (0x000b1cc5) main_myfav_hc_pane_g_ParamLimits

0xf8a7,	// (0x000b1cc5) main_myfav_hc_pane_g

0x50f7,	// (0x000a7515) main_myfav_hc_pane_t1_ParamLimits

0x50f7,	// (0x000a7515) main_myfav_hc_pane_t1

0xce04,	// (0x000af222) main_myfav_hc_pane_t2_ParamLimits

0xce04,	// (0x000af222) main_myfav_hc_pane_t2

0xce16,	// (0x000af234) main_myfav_hc_pane_t3_ParamLimits

0xce16,	// (0x000af234) main_myfav_hc_pane_t3

0x510e,	// (0x000a752c) main_myfav_hc_pane_t4_ParamLimits

0x510e,	// (0x000a752c) main_myfav_hc_pane_t4

0x0004,

0xf8ae,	// (0x000b1ccc) main_myfav_hc_pane_t_ParamLimits

0xf8ae,	// (0x000b1ccc) main_myfav_hc_pane_t

0xa0b9,	// (0x000ac4d7) bg_myfav_hc_instruction_pane_g1

0xce28,	// (0x000af246) cell_myfav_contact_pane_g1_ParamLimits

0xce28,	// (0x000af246) cell_myfav_contact_pane_g1

0xce28,	// (0x000af246) cell_myfav_contact_pane_g2_ParamLimits

0xce28,	// (0x000af246) cell_myfav_contact_pane_g2

0xce34,	// (0x000af252) cell_myfav_contact_pane_g3_ParamLimits

0xce34,	// (0x000af252) cell_myfav_contact_pane_g3

0x9e6d,	// (0x000ac28b) cell_myfav_contact_pane_g4_ParamLimits

0x9e6d,	// (0x000ac28b) cell_myfav_contact_pane_g4

0xce41,	// (0x000af25f) cell_myfav_contact_pane_g5_ParamLimits

0xce41,	// (0x000af25f) cell_myfav_contact_pane_g5

0x0004,

0xf8b9,	// (0x000b1cd7) cell_myfav_contact_pane_g_ParamLimits

0xf8b9,	// (0x000b1cd7) cell_myfav_contact_pane_g

0x50df,	// (0x000a74fd) main_myfav_hc_pane_g3_ParamLimits

0x50df,	// (0x000a74fd) main_myfav_hc_pane_g3

0x07b0,	// (0x000a2bce) popup_adpt_find_window

0x5136,	// (0x000a7554) afind_page_pane_ParamLimits

0x5136,	// (0x000a7554) afind_page_pane

0x514c,	// (0x000a756a) aid_size_cell_afind_ParamLimits

0x514c,	// (0x000a756a) aid_size_cell_afind

0x516a,	// (0x000a7588) bg_popup_sub_pane_cp09_ParamLimits

0x516a,	// (0x000a7588) bg_popup_sub_pane_cp09

0x517c,	// (0x000a759a) find_pane_cp01_ParamLimits

0x517c,	// (0x000a759a) find_pane_cp01

0xce4d,	// (0x000af26b) grid_afind_control_pane_ParamLimits

0xce4d,	// (0x000af26b) grid_afind_control_pane

0x5190,	// (0x000a75ae) grid_afind_pane_ParamLimits

0x5190,	// (0x000a75ae) grid_afind_pane

0x51b2,	// (0x000a75d0) cell_afind_pane_ParamLimits

0x51b2,	// (0x000a75d0) cell_afind_pane

0xa0b9,	// (0x000ac4d7) afind_page_pane_g1

0x5219,	// (0x000a7637) afind_page_pane_g2

0x5221,	// (0x000a763f) afind_page_pane_g3

0x0002,

0xf8c4,	// (0x000b1ce2) afind_page_pane_g

0x5229,	// (0x000a7647) afind_page_pane_t1

0xce73,	// (0x000af291) cell_afind_grid_control_pane_ParamLimits

0xce73,	// (0x000af291) cell_afind_grid_control_pane

0xcccf,	// (0x000af0ed) bg_button_pane_cp69_ParamLimits

0xcccf,	// (0x000af0ed) bg_button_pane_cp69

0x5237,	// (0x000a7655) cell_afind_pane_g1_ParamLimits

0x5237,	// (0x000a7655) cell_afind_pane_g1

0x5244,	// (0x000a7662) cell_afind_pane_t1_ParamLimits

0x5244,	// (0x000a7662) cell_afind_pane_t1

0xa0c3,	// (0x000ac4e1) bg_button_pane_cp72

0xce82,	// (0x000af2a0) cell_afind_grid_control_pane_g1

0x2bc0,	// (0x000a4fde) aid_image_placing_area_ParamLimits

0x2bc0,	// (0x000a4fde) aid_image_placing_area

0x9e5f,	// (0x000ac27d) field_vitu_entry_pane_g1_ParamLimits

0x9e5f,	// (0x000ac27d) field_vitu_entry_pane_g1

0x9e5f,	// (0x000ac27d) field_vitu_entry_pane_g2_ParamLimits

0x9e5f,	// (0x000ac27d) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x000b15df) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x000b15df) field_vitu_entry_pane_g

0xca61,	// (0x000aee7f) cell_vitu_itu_pane_g1_ParamLimits

0xc9a0,	// (0x000aedbe) cell_vitu_itu_pane_t3_ParamLimits

0xc9a0,	// (0x000aedbe) cell_vitu_itu_pane_t3

0xcc78,	// (0x000af096) mp4_progress_pane_t1_ParamLimits

0xcc91,	// (0x000af0af) mp4_progress_pane_t2_ParamLimits

0xf80a,	// (0x000b1c28) mp4_progress_pane_t_ParamLimits

0xccaa,	// (0x000af0c8) mup_progress_pane_cp04_ParamLimits

0x5122,	// (0x000a7540) main_myfav_hc_pane_t5_ParamLimits

0x5122,	// (0x000a7540) main_myfav_hc_pane_t5

0x064e,	// (0x000a2a6c) aid_zoom_text_primary

0x07b0,	// (0x000a2bce) popup_adpt_find_window_ParamLimits

0x9048,	// (0x000ab466) main_cam_set_pane

0x4b4b,	// (0x000a6f69) cam4_zoom_pane_ParamLimits

0x4b4b,	// (0x000a6f69) cam4_zoom_pane

0x5256,	// (0x000a7674) main_cam_set_pane_g1_ParamLimits

0x5256,	// (0x000a7674) main_cam_set_pane_g1

0x5264,	// (0x000a7682) main_cam_set_pane_g2_ParamLimits

0x5264,	// (0x000a7682) main_cam_set_pane_g2

0x0001,

0xf8cb,	// (0x000b1ce9) main_cam_set_pane_g_ParamLimits

0xf8cb,	// (0x000b1ce9) main_cam_set_pane_g

0x5285,	// (0x000a76a3) main_cam_set_pane_t1_ParamLimits

0x5285,	// (0x000a76a3) main_cam_set_pane_t1

0x52a0,	// (0x000a76be) main_cset_listscroll_pane_ParamLimits

0x52a0,	// (0x000a76be) main_cset_listscroll_pane

0x52c6,	// (0x000a76e4) main_cset_slider_pane_ParamLimits

0x52c6,	// (0x000a76e4) main_cset_slider_pane

0xce93,	// (0x000af2b1) main_cset_list_pane_ParamLimits

0xce93,	// (0x000af2b1) main_cset_list_pane

0xcea3,	// (0x000af2c1) scroll_pane_cp028

0x52ec,	// (0x000a770a) aid_area_touch_slider

0x5308,	// (0x000a7726) cset_slider_pane

0x532b,	// (0x000a7749) main_cset_slider_pane_g1

0x5340,	// (0x000a775e) main_cset_slider_pane_g2

0x0011,

0xf8d0,	// (0x000b1cee) main_cset_slider_pane_g

0xcef4,	// (0x000af312) main_cset_slider_pane_t1

0x53e4,	// (0x000a7802) main_cset_slider_pane_t2

0x53fe,	// (0x000a781c) main_cset_slider_pane_t3

0x5418,	// (0x000a7836) main_cset_slider_pane_t4

0x5432,	// (0x000a7850) main_cset_slider_pane_t5

0x544c,	// (0x000a786a) main_cset_slider_pane_t6

0x5461,	// (0x000a787f) main_cset_slider_pane_t7

0x000e,

0xf8f5,	// (0x000b1d13) main_cset_slider_pane_t

0x5565,	// (0x000a7983) cset_list_set_pane_ParamLimits

0x5565,	// (0x000a7983) cset_list_set_pane

0xcf8e,	// (0x000af3ac) aid_position_infowindow_above

0xcf96,	// (0x000af3b4) aid_position_infowindow_below

0x5577,	// (0x000a7995) cset_list_set_pane_g1_ParamLimits

0x5577,	// (0x000a7995) cset_list_set_pane_g1

0x5583,	// (0x000a79a1) cset_list_set_pane_g3_ParamLimits

0x5583,	// (0x000a79a1) cset_list_set_pane_g3

0x0001,

0xf914,	// (0x000b1d32) cset_list_set_pane_g_ParamLimits

0xf914,	// (0x000b1d32) cset_list_set_pane_g

0x5592,	// (0x000a79b0) cset_list_set_pane_t1_ParamLimits

0x5592,	// (0x000a79b0) cset_list_set_pane_t1

0xe6ea,	// (0x000b0b08) list_highlight_pane_cp021_ParamLimits

0xe6ea,	// (0x000b0b08) list_highlight_pane_cp021

0xac24,	// (0x000ad042) cset_slider_pane_g1

0xac36,	// (0x000ad054) cset_slider_pane_g2

0xac2d,	// (0x000ad04b) cset_slider_pane_g3

0x0002,

0xf919,	// (0x000b1d37) cset_slider_pane_g

0x98c8,	// (0x000abce6) aid_area_touch_cam4_zoom

0x98d0,	// (0x000abcee) cam4_zoom_cont_pane

0x98d8,	// (0x000abcf6) cam4_zoom_pane_g1

0x98e0,	// (0x000abcfe) cam4_zoom_pane_g2

0x55a7,	// (0x000a79c5) cam4_zoom_pane_g3

0x0002,

0xf920,	// (0x000b1d3e) cam4_zoom_pane_g

0x98e8,	// (0x000abd06) cam4_zoom_cont_pane_g1

0x98f1,	// (0x000abd0f) cam4_zoom_cont_pane_g2

0x98fa,	// (0x000abd18) cam4_zoom_cont_pane_g3

0x0002,

0xf927,	// (0x000b1d45) cam4_zoom_cont_pane_g

0x497a,	// (0x000a6d98) call4_image_pane_ParamLimits

0x497a,	// (0x000a6d98) call4_image_pane

0x49e1,	// (0x000a6dff) call4_windows_conf_pane_ParamLimits

0x4a24,	// (0x000a6e42) popup_call4_audio_in_window_ParamLimits

0x4a24,	// (0x000a6e42) popup_call4_audio_in_window

0xe689,	// (0x000b0aa7) bg_popup_call2_act_pane_cp02

0xccdb,	// (0x000af0f9) call4_list_conf_pane

0xa0b9,	// (0x000ac4d7) call4_image_pane_g1

0xa0b9,	// (0x000ac4d7) call4_image_pane_g2

0x0001,

0xf398,	// (0x000b17b6) call4_image_pane_g

0xcf9e,	// (0x000af3bc) list_single_graphic_popup_conf4_pane_ParamLimits

0xcf9e,	// (0x000af3bc) list_single_graphic_popup_conf4_pane

0xe689,	// (0x000b0aa7) list_highlight_pane_cp022

0xcfb1,	// (0x000af3cf) list_single_graphic_popup_conf4_pane_g1

0xa813,	// (0x000acc31) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf92e,	// (0x000b1d4c) list_single_graphic_popup_conf4_pane_g

0xcfb9,	// (0x000af3d7) list_single_graphic_popup_conf4_pane_t1

0x152a,	// (0x000a3948) popup_vtel_slider_window_ParamLimits

0x152a,	// (0x000a3948) popup_vtel_slider_window

0xccbd,	// (0x000af0db) dialer2_ne_pane_t2_ParamLimits

0xccbd,	// (0x000af0db) dialer2_ne_pane_t2

0x0001,

0xf80f,	// (0x000b1c2d) dialer2_ne_pane_t_ParamLimits

0xf80f,	// (0x000b1c2d) dialer2_ne_pane_t

0xc038,	// (0x000ae456) bg_popup_sub_pane_cp010_ParamLimits

0xc038,	// (0x000ae456) bg_popup_sub_pane_cp010

0x55af,	// (0x000a79cd) popup_vtel_slider_window_g1_ParamLimits

0x55af,	// (0x000a79cd) popup_vtel_slider_window_g1

0x55c2,	// (0x000a79e0) popup_vtel_slider_window_g2_ParamLimits

0x55c2,	// (0x000a79e0) popup_vtel_slider_window_g2

0x0003,

0xf933,	// (0x000b1d51) popup_vtel_slider_window_g_ParamLimits

0xf933,	// (0x000b1d51) popup_vtel_slider_window_g

0x5618,	// (0x000a7a36) vtel_slider_pane_ParamLimits

0x5618,	// (0x000a7a36) vtel_slider_pane

0x563a,	// (0x000a7a58) vtel_slider_pane_g1_ParamLimits

0x563a,	// (0x000a7a58) vtel_slider_pane_g1

0x564e,	// (0x000a7a6c) vtel_slider_pane_g2_ParamLimits

0x564e,	// (0x000a7a6c) vtel_slider_pane_g2

0x5666,	// (0x000a7a84) vtel_slider_pane_g3_ParamLimits

0x5666,	// (0x000a7a84) vtel_slider_pane_g3

0x563a,	// (0x000a7a58) vtel_slider_pane_g4_ParamLimits

0x563a,	// (0x000a7a58) vtel_slider_pane_g4

0x567c,	// (0x000a7a9a) vtel_slider_pane_g5_ParamLimits

0x567c,	// (0x000a7a9a) vtel_slider_pane_g5

0x0004,

0xf93c,	// (0x000b1d5a) vtel_slider_pane_g_ParamLimits

0xf93c,	// (0x000b1d5a) vtel_slider_pane_g

0x9048,	// (0x000ab466) main_gallery2_pane

0x4d4b,	// (0x000a7169) aid_size_row_itut2_dropdow_list_ParamLimits

0x4d4b,	// (0x000a7169) aid_size_row_itut2_dropdow_list

0x4dd7,	// (0x000a71f5) grid_vitu2_function_top_pane_ParamLimits

0x4dd7,	// (0x000a71f5) grid_vitu2_function_top_pane

0x4e41,	// (0x000a725f) popup_vitu2_dropdown_list_window_ParamLimits

0x4e41,	// (0x000a725f) popup_vitu2_dropdown_list_window

0x4e68,	// (0x000a7286) popup_vitu2_match_list_window

0x5692,	// (0x000a7ab0) cell_vitu2_function_top_pane_ParamLimits

0x5692,	// (0x000a7ab0) cell_vitu2_function_top_pane

0x56aa,	// (0x000a7ac8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x56aa,	// (0x000a7ac8) cell_vitu2_function_top_pane_cp01

0x56c6,	// (0x000a7ae4) cell_vitu2_function_top_wide_pane_ParamLimits

0x56c6,	// (0x000a7ae4) cell_vitu2_function_top_wide_pane

0x9048,	// (0x000ab466) bg_button_pane_cp012

0x56e4,	// (0x000a7b02) cell_vitu2_function_top_pane_g1

0x9903,	// (0x000abd21) bg_button_pane_cp013_ParamLimits

0x9903,	// (0x000abd21) bg_button_pane_cp013

0x56f8,	// (0x000a7b16) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x56f8,	// (0x000a7b16) cell_vitu2_function_top_wide_pane_g1

0x9048,	// (0x000ab466) bg_popup_sub_pane_cp20

0x5710,	// (0x000a7b2e) list_vitu2_match_list_pane

0xcd77,	// (0x000af195) bg_popup_sub_pane_cp20_g1

0xcd7f,	// (0x000af19d) bg_popup_sub_pane_cp20_g2

0xa2ca,	// (0x000ac6e8) bg_popup_sub_pane_cp20_g3

0xcd87,	// (0x000af1a5) bg_popup_sub_pane_cp20_g4

0xa2aa,	// (0x000ac6c8) bg_popup_sub_pane_cp20_g5

0xcfcf,	// (0x000af3ed) bg_popup_sub_pane_cp20_g6

0xcd97,	// (0x000af1b5) bg_popup_sub_pane_cp20_g7

0xcd9f,	// (0x000af1bd) bg_popup_sub_pane_cp20_g8

0xcda7,	// (0x000af1c5) bg_popup_sub_pane_cp20_g9

0x0008,

0xf947,	// (0x000b1d65) bg_popup_sub_pane_cp20_g

0x991f,	// (0x000abd3d) list_vitu2_match_list_item_pane_ParamLimits

0x991f,	// (0x000abd3d) list_vitu2_match_list_item_pane

0x9931,	// (0x000abd4f) list_vitu2_match_list_item_pane_t1

0x9056,	// (0x000ab474) bg_popup_sub_pane_cp21

0xa083,	// (0x000ac4a1) grid_vitu2_dropdown_list_pane

0x5728,	// (0x000a7b46) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5728,	// (0x000a7b46) cell_vitu2_dropdown_list_char_pane

0x5748,	// (0x000a7b66) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5748,	// (0x000a7b66) cell_vitu2_dropdown_list_ctrl_pane

0xcfd7,	// (0x000af3f5) cell_vitu2_dropdown_list_char_pane_g1

0xcfe0,	// (0x000af3fe) cell_vitu2_dropdown_list_char_pane_g2

0xcfe9,	// (0x000af407) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf95a,	// (0x000b1d78) cell_vitu2_dropdown_list_char_pane_g

0x5770,	// (0x000a7b8e) cell_vitu2_dropdown_list_char_pane_t1

0x577e,	// (0x000a7b9c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x577e,	// (0x000a7b9c) cell_vitu2_dropdown_list_ctrl_pane_g1

0x578b,	// (0x000a7ba9) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x578b,	// (0x000a7ba9) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5798,	// (0x000a7bb6) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5798,	// (0x000a7bb6) cell_vitu2_dropdown_list_ctrl_pane_g3

0x57a5,	// (0x000a7bc3) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x57a5,	// (0x000a7bc3) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdd00,	// (0x000b011e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdd00,	// (0x000b011e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf961,	// (0x000b1d7f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf961,	// (0x000b1d7f) cell_vitu2_dropdown_list_ctrl_pane_g

0x57c1,	// (0x000a7bdf) aid_size_cell_gallery2_ParamLimits

0x57c1,	// (0x000a7bdf) aid_size_cell_gallery2

0x57df,	// (0x000a7bfd) grid_gallery2_pane_ParamLimits

0x57df,	// (0x000a7bfd) grid_gallery2_pane

0x57f9,	// (0x000a7c17) scroll_pane_cp029_ParamLimits

0x57f9,	// (0x000a7c17) scroll_pane_cp029

0x580a,	// (0x000a7c28) cell_gallery2_pane_ParamLimits

0x580a,	// (0x000a7c28) cell_gallery2_pane

0xcff2,	// (0x000af410) cell_gallery2_pane_g2

0x5869,	// (0x000a7c87) cell_gallery2_pane_g3

0xcffa,	// (0x000af418) cell_gallery2_pane_g4

0xd002,	// (0x000af420) cell_gallery2_pane_g5

0xa083,	// (0x000ac4a1) grid_highlight_pane_cp10

0x4e68,	// (0x000a7286) popup_vitu2_match_list_window_ParamLimits

0x4e7d,	// (0x000a729b) popup_vitu2_query_window_ParamLimits

0x4e7d,	// (0x000a729b) popup_vitu2_query_window

0x9056,	// (0x000ab474) bg_vitu2_candi_button_pane

0xcfd7,	// (0x000af3f5) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcfe0,	// (0x000af3fe) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcfe9,	// (0x000af407) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5871,	// (0x000a7c8f) bg_button_pane_cp015

0x5882,	// (0x000a7ca0) bg_button_pane_cp016

0x588e,	// (0x000a7cac) bg_button_pane_cp017

0xabb4,	// (0x000acfd2) bg_popup_sub_pane_cp22

0xd00a,	// (0x000af428) popup_vitu2_query_window_g1

0x58cc,	// (0x000a7cea) popup_vitu2_query_window_g2

0x0002,

0xf96c,	// (0x000b1d8a) popup_vitu2_query_window_g

0x58ee,	// (0x000a7d0c) popup_vitu2_query_window_t1_ParamLimits

0x58ee,	// (0x000a7d0c) popup_vitu2_query_window_t1

0x5921,	// (0x000a7d3f) popup_vitu2_query_window_t2_ParamLimits

0x5921,	// (0x000a7d3f) popup_vitu2_query_window_t2

0x5933,	// (0x000a7d51) popup_vitu2_query_window_t3_ParamLimits

0x5933,	// (0x000a7d51) popup_vitu2_query_window_t3

0x595b,	// (0x000a7d79) popup_vitu2_query_window_t4_ParamLimits

0x595b,	// (0x000a7d79) popup_vitu2_query_window_t4

0x596f,	// (0x000a7d8d) popup_vitu2_query_window_t5_ParamLimits

0x596f,	// (0x000a7d8d) popup_vitu2_query_window_t5

0x0006,

0xf973,	// (0x000b1d91) popup_vitu2_query_window_t_ParamLimits

0xf973,	// (0x000b1d91) popup_vitu2_query_window_t

0xce8b,	// (0x000af2a9) main_cset_text_pane

0x52ec,	// (0x000a770a) aid_area_touch_slider_ParamLimits

0x5308,	// (0x000a7726) cset_slider_pane_ParamLimits

0x532b,	// (0x000a7749) main_cset_slider_pane_g1_ParamLimits

0x5340,	// (0x000a775e) main_cset_slider_pane_g2_ParamLimits

0xceac,	// (0x000af2ca) main_cset_slider_pane_g3_ParamLimits

0xceac,	// (0x000af2ca) main_cset_slider_pane_g3

0x5355,	// (0x000a7773) main_cset_slider_pane_g4_ParamLimits

0x5355,	// (0x000a7773) main_cset_slider_pane_g4

0x5364,	// (0x000a7782) main_cset_slider_pane_g5_ParamLimits

0x5364,	// (0x000a7782) main_cset_slider_pane_g5

0x5370,	// (0x000a778e) main_cset_slider_pane_g6_ParamLimits

0x5370,	// (0x000a778e) main_cset_slider_pane_g6

0xf8d0,	// (0x000b1cee) main_cset_slider_pane_g_ParamLimits

0xcef4,	// (0x000af312) main_cset_slider_pane_t1_ParamLimits

0x53e4,	// (0x000a7802) main_cset_slider_pane_t2_ParamLimits

0x53fe,	// (0x000a781c) main_cset_slider_pane_t3_ParamLimits

0x5418,	// (0x000a7836) main_cset_slider_pane_t4_ParamLimits

0x5432,	// (0x000a7850) main_cset_slider_pane_t5_ParamLimits

0x544c,	// (0x000a786a) main_cset_slider_pane_t6_ParamLimits

0x5461,	// (0x000a787f) main_cset_slider_pane_t7_ParamLimits

0x548b,	// (0x000a78a9) main_cset_slider_pane_t8_ParamLimits

0x548b,	// (0x000a78a9) main_cset_slider_pane_t8

0x54b3,	// (0x000a78d1) main_cset_slider_pane_t9_ParamLimits

0x54b3,	// (0x000a78d1) main_cset_slider_pane_t9

0x54db,	// (0x000a78f9) main_cset_slider_pane_t10_ParamLimits

0x54db,	// (0x000a78f9) main_cset_slider_pane_t10

0x5503,	// (0x000a7921) main_cset_slider_pane_t11_ParamLimits

0x5503,	// (0x000a7921) main_cset_slider_pane_t11

0x552b,	// (0x000a7949) main_cset_slider_pane_t12_ParamLimits

0x552b,	// (0x000a7949) main_cset_slider_pane_t12

0x5548,	// (0x000a7966) main_cset_slider_pane_t13_ParamLimits

0x5548,	// (0x000a7966) main_cset_slider_pane_t13

0xf8f5,	// (0x000b1d13) main_cset_slider_pane_t_ParamLimits

0xe689,	// (0x000b0aa7) bg_popup_sub_pane_cp011

0xd016,	// (0x000af434) main_cset_text_pane_g1

0xd01e,	// (0x000af43c) main_cset_text_pane_t1

0xd02c,	// (0x000af44a) main_cset_text_pane_t2

0xd03a,	// (0x000af458) main_cset_text_pane_t3

0xd048,	// (0x000af466) main_cset_text_pane_t4

0xd056,	// (0x000af474) main_cset_text_pane_t5

0xd064,	// (0x000af482) main_cset_text_pane_t6

0xd072,	// (0x000af490) main_cset_text_pane_t7

0x0006,

0xf982,	// (0x000b1da0) main_cset_text_pane_t

0x9056,	// (0x000ab474) main_cam4_burst_pane

0x9056,	// (0x000ab474) main_cam5_pane

0xce61,	// (0x000af27f) bg_button_pane_cp019

0xce6a,	// (0x000af288) bg_button_pane_cp020

0xceb8,	// (0x000af2d6) main_cset_slider_pane_g7_ParamLimits

0xceb8,	// (0x000af2d6) main_cset_slider_pane_g7

0xcec4,	// (0x000af2e2) main_cset_slider_pane_g8_ParamLimits

0xcec4,	// (0x000af2e2) main_cset_slider_pane_g8

0x5384,	// (0x000a77a2) main_cset_slider_pane_g9_ParamLimits

0x5384,	// (0x000a77a2) main_cset_slider_pane_g9

0x5390,	// (0x000a77ae) main_cset_slider_pane_g10_ParamLimits

0x5390,	// (0x000a77ae) main_cset_slider_pane_g10

0x539c,	// (0x000a77ba) main_cset_slider_pane_g11_ParamLimits

0x539c,	// (0x000a77ba) main_cset_slider_pane_g11

0x53a8,	// (0x000a77c6) main_cset_slider_pane_g12_ParamLimits

0x53a8,	// (0x000a77c6) main_cset_slider_pane_g12

0x53b4,	// (0x000a77d2) main_cset_slider_pane_g13_ParamLimits

0x53b4,	// (0x000a77d2) main_cset_slider_pane_g13

0x53c0,	// (0x000a77de) main_cset_slider_pane_g14_ParamLimits

0x53c0,	// (0x000a77de) main_cset_slider_pane_g14

0x53cc,	// (0x000a77ea) main_cset_slider_pane_g15_ParamLimits

0x53cc,	// (0x000a77ea) main_cset_slider_pane_g15

0xcf1c,	// (0x000af33a) main_cset_slider_pane_t14_ParamLimits

0xcf1c,	// (0x000af33a) main_cset_slider_pane_t14

0xcf55,	// (0x000af373) main_cset_slider_pane_t15_ParamLimits

0xcf55,	// (0x000af373) main_cset_slider_pane_t15

0x59d9,	// (0x000a7df7) aid_cam4_burst_size_cell_ParamLimits

0x59d9,	// (0x000a7df7) aid_cam4_burst_size_cell

0x59f9,	// (0x000a7e17) grid_cam4_burst_pane_ParamLimits

0x59f9,	// (0x000a7e17) grid_cam4_burst_pane

0x5a31,	// (0x000a7e4f) linegrid_cam4_burst_pane_ParamLimits

0x5a31,	// (0x000a7e4f) linegrid_cam4_burst_pane

0xd080,	// (0x000af49e) scroll_pane_cp30_ParamLimits

0xd080,	// (0x000af49e) scroll_pane_cp30

0x5a55,	// (0x000a7e73) cell_cam4_burst_pane_ParamLimits

0x5a55,	// (0x000a7e73) cell_cam4_burst_pane

0xd08c,	// (0x000af4aa) linegrid_cam4_burst_pane_g1_ParamLimits

0xd08c,	// (0x000af4aa) linegrid_cam4_burst_pane_g1

0x5aa2,	// (0x000a7ec0) linegrid_cam4_burst_pane_g2_ParamLimits

0x5aa2,	// (0x000a7ec0) linegrid_cam4_burst_pane_g2

0xd099,	// (0x000af4b7) linegrid_cam4_burst_pane_g3_ParamLimits

0xd099,	// (0x000af4b7) linegrid_cam4_burst_pane_g3

0x0002,

0xf991,	// (0x000b1daf) linegrid_cam4_burst_pane_g_ParamLimits

0xf991,	// (0x000b1daf) linegrid_cam4_burst_pane_g

0x5ab3,	// (0x000a7ed1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5ab3,	// (0x000a7ed1) linegrid_cam4_burst_pane_g3_copy1

0xd0a6,	// (0x000af4c4) linegrid_cam4_burst_pane_g4_ParamLimits

0xd0a6,	// (0x000af4c4) linegrid_cam4_burst_pane_g4

0x5acd,	// (0x000a7eeb) linegrid_cam4_burst_pane_g5_ParamLimits

0x5acd,	// (0x000a7eeb) linegrid_cam4_burst_pane_g5

0x5ade,	// (0x000a7efc) linegrid_cam4_burst_pane_g6_ParamLimits

0x5ade,	// (0x000a7efc) linegrid_cam4_burst_pane_g6

0xd0b3,	// (0x000af4d1) linegrid_cam4_burst_pane_g7_ParamLimits

0xd0b3,	// (0x000af4d1) linegrid_cam4_burst_pane_g7

0x5af5,	// (0x000a7f13) cell_cam4_burst_pane_g1

0xd0cc,	// (0x000af4ea) main_cam5_pane_t1_ParamLimits

0xd0cc,	// (0x000af4ea) main_cam5_pane_t1

0xd0de,	// (0x000af4fc) main_cam5_pane_t2_ParamLimits

0xd0de,	// (0x000af4fc) main_cam5_pane_t2

0xd0f0,	// (0x000af50e) main_cam5_pane_t3_ParamLimits

0xd0f0,	// (0x000af50e) main_cam5_pane_t3

0xd102,	// (0x000af520) main_cam5_pane_t4_ParamLimits

0xd102,	// (0x000af520) main_cam5_pane_t4

0xd11a,	// (0x000af538) main_cam5_pane_t5_ParamLimits

0xd11a,	// (0x000af538) main_cam5_pane_t5

0xd12e,	// (0x000af54c) main_cam5_pane_t6_ParamLimits

0xd12e,	// (0x000af54c) main_cam5_pane_t6

0xd142,	// (0x000af560) main_cam5_pane_t7_ParamLimits

0xd142,	// (0x000af560) main_cam5_pane_t7

0xd154,	// (0x000af572) main_cam5_pane_t8_ParamLimits

0xd154,	// (0x000af572) main_cam5_pane_t8

0xd170,	// (0x000af58e) main_cam5_pane_t9_ParamLimits

0xd170,	// (0x000af58e) main_cam5_pane_t9

0xd182,	// (0x000af5a0) main_cam5_pane_t10_ParamLimits

0xd182,	// (0x000af5a0) main_cam5_pane_t10

0xd194,	// (0x000af5b2) main_cam5_pane_t11_ParamLimits

0xd194,	// (0x000af5b2) main_cam5_pane_t11

0xd1a6,	// (0x000af5c4) main_cam5_pane_t12_ParamLimits

0xd1a6,	// (0x000af5c4) main_cam5_pane_t12

0xd1bb,	// (0x000af5d9) main_cam5_pane_t13_ParamLimits

0xd1bb,	// (0x000af5d9) main_cam5_pane_t13

0x000c,

0xf99d,	// (0x000b1dbb) main_cam5_pane_t_ParamLimits

0xf99d,	// (0x000b1dbb) main_cam5_pane_t

0x0831,	// (0x000a2c4f) popup_scut_keymap_window_ParamLimits

0x0831,	// (0x000a2c4f) popup_scut_keymap_window

0x5b08,	// (0x000a7f26) aid_size_cell_brow_shortcut

0xa083,	// (0x000ac4a1) bg_popup_window_pane_cp010

0x5b14,	// (0x000a7f32) grid_scut_pane

0x5b20,	// (0x000a7f3e) cell_scut_pane_ParamLimits

0x5b20,	// (0x000a7f3e) cell_scut_pane

0x5b37,	// (0x000a7f55) cell_scut_pane_g1

0xd1d8,	// (0x000af5f6) cell_scut_pane_t1

0xd1e7,	// (0x000af605) cell_scut_pane_t2

0x5b40,	// (0x000a7f5e) cell_scut_pane_t3

0x0002,

0xf9b8,	// (0x000b1dd6) cell_scut_pane_t

0x3a9d,	// (0x000a5ebb) main_mup3_pane_g8_ParamLimits

0x3a9d,	// (0x000a5ebb) main_mup3_pane_g8

0x4d63,	// (0x000a7181) area_vitu2_query_pane_ParamLimits

0x4d63,	// (0x000a7181) area_vitu2_query_pane

0x589a,	// (0x000a7cb8) input_focus_pane_cp08

0xd1f6,	// (0x000af614) area_vitu2_query_pane_g1

0x5b4e,	// (0x000a7f6c) area_vitu2_query_pane_g2

0x0001,

0xf9bf,	// (0x000b1ddd) area_vitu2_query_pane_g

0x5b5d,	// (0x000a7f7b) area_vitu2_query_pane_t1_ParamLimits

0x5b5d,	// (0x000a7f7b) area_vitu2_query_pane_t1

0x5b71,	// (0x000a7f8f) area_vitu2_query_pane_t2_ParamLimits

0x5b71,	// (0x000a7f8f) area_vitu2_query_pane_t2

0x5b85,	// (0x000a7fa3) area_vitu2_query_pane_t3_ParamLimits

0x5b85,	// (0x000a7fa3) area_vitu2_query_pane_t3

0xd202,	// (0x000af620) area_vitu2_query_pane_t4_ParamLimits

0xd202,	// (0x000af620) area_vitu2_query_pane_t4

0xd22a,	// (0x000af648) area_vitu2_query_pane_t5_ParamLimits

0xd22a,	// (0x000af648) area_vitu2_query_pane_t5

0xd252,	// (0x000af670) area_vitu2_query_pane_t6_ParamLimits

0xd252,	// (0x000af670) area_vitu2_query_pane_t6

0x0006,

0xf9c4,	// (0x000b1de2) area_vitu2_query_pane_t_ParamLimits

0xf9c4,	// (0x000b1de2) area_vitu2_query_pane_t

0x5bad,	// (0x000a7fcb) bg_button_pane_cp018

0x5bb9,	// (0x000a7fd7) bg_button_pane_cp021

0x5bc5,	// (0x000a7fe3) bg_button_pane_cp022

0x5be4,	// (0x000a8002) input_focus_pane_cp09

0xa922,	// (0x000acd40) aid_size_touch_mv_arrow_left

0xa94d,	// (0x000acd6b) aid_size_touch_mv_arrow_right

0xced0,	// (0x000af2ee) main_cset_slider_pane_g16_ParamLimits

0xced0,	// (0x000af2ee) main_cset_slider_pane_g16

0xcedc,	// (0x000af2fa) main_cset_slider_pane_g17_ParamLimits

0xcedc,	// (0x000af2fa) main_cset_slider_pane_g17

0x5af5,	// (0x000a7f13) cell_cam4_burst_pane_g1_ParamLimits

0xe689,	// (0x000b0aa7) compa_mode_pane

0x55d2,	// (0x000a79f0) popup_vtel_slider_window_g3_ParamLimits

0x55d2,	// (0x000a79f0) popup_vtel_slider_window_g3

0x55e9,	// (0x000a7a07) popup_vtel_slider_window_g4_ParamLimits

0x55e9,	// (0x000a7a07) popup_vtel_slider_window_g4

0x5600,	// (0x000a7a1e) popup_vtel_slider_window_t1_ParamLimits

0x5600,	// (0x000a7a1e) popup_vtel_slider_window_t1

0x9056,	// (0x000ab474) main_cl_pane

0x9408,	// (0x000ab826) popup_imed_adjust2_window_ParamLimits

0xabb4,	// (0x000acfd2) bg_tb_trans_pane_cp05_ParamLimits

0xc961,	// (0x000aed7f) popup_imed_adjust2_window_g1_ParamLimits

0xc970,	// (0x000aed8e) popup_imed_adjust2_window_g2_ParamLimits

0xc970,	// (0x000aed8e) popup_imed_adjust2_window_g2

0xc97c,	// (0x000aed9a) popup_imed_adjust2_window_g3_ParamLimits

0xc97c,	// (0x000aed9a) popup_imed_adjust2_window_g3

0x0002,

0xf73a,	// (0x000b1b58) popup_imed_adjust2_window_g_ParamLimits

0xf73a,	// (0x000b1b58) popup_imed_adjust2_window_g

0xc988,	// (0x000aeda6) popup_imed_adjust2_window_t1_ParamLimits

0xc9d5,	// (0x000aedf3) slider_imed_adjust_pane_ParamLimits

0xc9e9,	// (0x000aee07) slider_imed_adjust_pane_g1_ParamLimits

0xc9f9,	// (0x000aee17) slider_imed_adjust_pane_g2_ParamLimits

0xca09,	// (0x000aee27) slider_imed_adjust_pane_g3_ParamLimits

0xca1a,	// (0x000aee38) slider_imed_adjust_pane_g4_ParamLimits

0xf741,	// (0x000b1b5f) slider_imed_adjust_pane_g_ParamLimits

0x4aec,	// (0x000a6f0a) aid_touch_area_cam4_ParamLimits

0x4aec,	// (0x000a6f0a) aid_touch_area_cam4

0x97e5,	// (0x000abc03) battery_pane_cp01

0x4bbb,	// (0x000a6fd9) main_camera4_pane_g6_ParamLimits

0x4bbb,	// (0x000a6fd9) main_camera4_pane_g6

0x4be5,	// (0x000a7003) main_camera4_pane_t2_ParamLimits

0x4be5,	// (0x000a7003) main_camera4_pane_t2

0x0001,

0xf843,	// (0x000b1c61) main_camera4_pane_t_ParamLimits

0xf843,	// (0x000b1c61) main_camera4_pane_t

0x4c1a,	// (0x000a7038) aid_touch_area_vid4_ParamLimits

0x4c1a,	// (0x000a7038) aid_touch_area_vid4

0x4c6e,	// (0x000a708c) main_video4_pane_g5_ParamLimits

0x4c6e,	// (0x000a708c) main_video4_pane_g5

0x4c93,	// (0x000a70b1) vid4_progress_pane_ParamLimits

0x4c93,	// (0x000a70b1) vid4_progress_pane

0xcee8,	// (0x000af306) main_cset_slider_pane_g18_ParamLimits

0xcee8,	// (0x000af306) main_cset_slider_pane_g18

0xd0c0,	// (0x000af4de) cell_cam4_burst_pane_g2_ParamLimits

0xd0c0,	// (0x000af4de) cell_cam4_burst_pane_g2

0x0001,

0xf998,	// (0x000b1db6) cell_cam4_burst_pane_g_ParamLimits

0xf998,	// (0x000b1db6) cell_cam4_burst_pane_g

0x9ed1,	// (0x000ac2ef) bg_cl_pane_ParamLimits

0x9ed1,	// (0x000ac2ef) bg_cl_pane

0x5bf4,	// (0x000a8012) cl_header_pane_ParamLimits

0x5bf4,	// (0x000a8012) cl_header_pane

0x5c08,	// (0x000a8026) cl_listscroll_pane_ParamLimits

0x5c08,	// (0x000a8026) cl_listscroll_pane

0xd29e,	// (0x000af6bc) bg_cl_pane_g1

0xd2a6,	// (0x000af6c4) bg_cl_pane_g2

0xd2ae,	// (0x000af6cc) bg_cl_pane_g3

0xd2b6,	// (0x000af6d4) bg_cl_pane_g4

0xd2be,	// (0x000af6dc) bg_cl_pane_g5

0xd2c6,	// (0x000af6e4) bg_cl_pane_g6

0xd2ce,	// (0x000af6ec) bg_cl_pane_g7

0xd2d6,	// (0x000af6f4) bg_cl_pane_g8

0xd2de,	// (0x000af6fc) bg_cl_pane_g9

0x0008,

0xf9d3,	// (0x000b1df1) bg_cl_pane_g

0x5c18,	// (0x000a8036) aid_height_cl_leading_ParamLimits

0x5c18,	// (0x000a8036) aid_height_cl_leading

0x5c24,	// (0x000a8042) aid_height_cl_text_ParamLimits

0x5c24,	// (0x000a8042) aid_height_cl_text

0xe6ea,	// (0x000b0b08) bg_cl_header_pane_ParamLimits

0xe6ea,	// (0x000b0b08) bg_cl_header_pane

0x5c43,	// (0x000a8061) cl_header_pane_g1_ParamLimits

0x5c43,	// (0x000a8061) cl_header_pane_g1

0x5c59,	// (0x000a8077) cl_header_pane_t1_ParamLimits

0x5c59,	// (0x000a8077) cl_header_pane_t1

0xd2e6,	// (0x000af704) cl_list_pane

0xcea3,	// (0x000af2c1) hc_scroll_pane_cp01

0xa2aa,	// (0x000ac6c8) bg_cl_header_pane_g1

0xcd77,	// (0x000af195) bg_cl_header_pane_g2

0xa2ca,	// (0x000ac6e8) bg_cl_header_pane_g3

0xcd87,	// (0x000af1a5) bg_cl_header_pane_g4

0xcd7f,	// (0x000af19d) bg_cl_header_pane_g5

0xcfcf,	// (0x000af3ed) bg_cl_header_pane_g6

0xcd9f,	// (0x000af1bd) bg_cl_header_pane_g7

0xcda7,	// (0x000af1c5) bg_cl_header_pane_g8

0xcd97,	// (0x000af1b5) bg_cl_header_pane_g9

0x0008,

0xf9e6,	// (0x000b1e04) bg_cl_header_pane_g

0x5c72,	// (0x000a8090) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x5c72,	// (0x000a8090) hc_cl_list_double_graphic_heading_pane

0x5c83,	// (0x000a80a1) hc_cl_list_single_graphic_pane_ParamLimits

0x5c83,	// (0x000a80a1) hc_cl_list_single_graphic_pane

0x5c9c,	// (0x000a80ba) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x5c9c,	// (0x000a80ba) hc_cl_list_single_graphic_pane_g1

0x5ca8,	// (0x000a80c6) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x5ca8,	// (0x000a80c6) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9f9,	// (0x000b1e17) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9f9,	// (0x000b1e17) hc_cl_list_single_graphic_pane_g

0x5cbc,	// (0x000a80da) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x5cbc,	// (0x000a80da) hc_cl_list_single_graphic_pane_t1

0x5c9c,	// (0x000a80ba) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x5c9c,	// (0x000a80ba) hc_cl_list_double_graphic_heading_pane_g1

0x5cd1,	// (0x000a80ef) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x5cd1,	// (0x000a80ef) hc_cl_list_double_graphic_heading_pane_g2

0x5ce5,	// (0x000a8103) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x5ce5,	// (0x000a8103) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9fe,	// (0x000b1e1c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9fe,	// (0x000b1e1c) hc_cl_list_double_graphic_heading_pane_g

0x5cf9,	// (0x000a8117) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x5cf9,	// (0x000a8117) hc_cl_list_double_graphic_heading_pane_t1

0x5d0e,	// (0x000a812c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x5d0e,	// (0x000a812c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa05,	// (0x000b1e23) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa05,	// (0x000b1e23) hc_cl_list_double_graphic_heading_pane_t

0x9947,	// (0x000abd65) vid4_progress_pane_g1

0x9957,	// (0x000abd75) vid4_progress_pane_g2

0x5d23,	// (0x000a8141) vid4_progress_pane_g3

0x9967,	// (0x000abd85) vid4_progress_pane_g4

0x0004,

0xfa0a,	// (0x000b1e28) vid4_progress_pane_g

0x5d35,	// (0x000a8153) vid4_progress_pane_t1

0x997f,	// (0x000abd9d) vid4_progress_pane_t2

0x0002,

0xfa15,	// (0x000b1e33) vid4_progress_pane_t

0x5d4b,	// (0x000a8169) wait_bar_pane_cp07

0xc215,	// (0x000ae633) blid_firmament_pane_ParamLimits

0xc258,	// (0x000ae676) popup_blid_sat_info2_window_g1

0xc27c,	// (0x000ae69a) popup_blid_sat_info2_window_t3

0xc28a,	// (0x000ae6a8) popup_blid_sat_info2_window_t4

0xc298,	// (0x000ae6b6) popup_blid_sat_info2_window_t5

0xc2a6,	// (0x000ae6c4) popup_blid_sat_info2_window_t6

0xc2b6,	// (0x000ae6d4) popup_blid_sat_info2_window_t7

0xc2c4,	// (0x000ae6e2) popup_blid_sat_info2_window_t8

0xc2d2,	// (0x000ae6f0) popup_blid_sat_info2_window_t9

0xc2e0,	// (0x000ae6fe) popup_blid_sat_info2_window_t10

0xc3a1,	// (0x000ae7bf) aid_firma_cardinal_ParamLimits

0xc3b5,	// (0x000ae7d3) blid_firmament_pane_t1_ParamLimits

0xc3cc,	// (0x000ae7ea) blid_firmament_pane_t2_ParamLimits

0xc3e3,	// (0x000ae801) blid_firmament_pane_t3_ParamLimits

0xc3fa,	// (0x000ae818) blid_firmament_pane_t4_ParamLimits

0xf633,	// (0x000b1a51) blid_firmament_pane_t_ParamLimits

0xc411,	// (0x000ae82f) blid_sat_info_pane_ParamLimits

0x9048,	// (0x000ab466) main_cam_set_pane_ParamLimits

0x427a,	// (0x000a6698) aid_size_cell_colour_35_ParamLimits

0x429a,	// (0x000a66b8) aid_size_cell_colour_112_ParamLimits

0x42ba,	// (0x000a66d8) aid_size_cell_effect_ParamLimits

0xabb4,	// (0x000acfd2) bg_tb_trans_pane_cp02_ParamLimits

0xa53d,	// (0x000ac95b) heading_imed_pane_ParamLimits

0x42da,	// (0x000a66f8) listscroll_imed_pane_ParamLimits

0xb6c8,	// (0x000adae6) popup_call2_audio_first_window_g5_ParamLimits

0xb6c8,	// (0x000adae6) popup_call2_audio_first_window_g5

0x4706,	// (0x000a6b24) aid_size_touch_image3_arrow_left_ParamLimits

0x4706,	// (0x000a6b24) aid_size_touch_image3_arrow_left

0x4732,	// (0x000a6b50) aid_size_touch_image3_arrow_right_ParamLimits

0x4732,	// (0x000a6b50) aid_size_touch_image3_arrow_right

0x9994,	// (0x000abdb2) vid4_progress_pane_t3

0x447d,	// (0x000a689b) main_hwr_training_symbol_option_pane_ParamLimits

0x447d,	// (0x000a689b) main_hwr_training_symbol_option_pane

0xcbb2,	// (0x000aefd0) popup_hwr_training_preview_window_ParamLimits

0xcbb2,	// (0x000aefd0) popup_hwr_training_preview_window

0x449d,	// (0x000a68bb) hwr_training_navi_pane_g5_ParamLimits

0x449d,	// (0x000a68bb) hwr_training_navi_pane_g5

0xcd65,	// (0x000af183) popup_char_count_window

0x9048,	// (0x000ab466) bg_popup_sub_pane_cp20_ParamLimits

0x5710,	// (0x000a7b2e) list_vitu2_match_list_pane_ParamLimits

0x571c,	// (0x000a7b3a) vitu2_page_scroll_pane_ParamLimits

0x571c,	// (0x000a7b3a) vitu2_page_scroll_pane

0xd300,	// (0x000af71e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd300,	// (0x000af71e) list_single_hwr_training_symbol_option_pane

0xd313,	// (0x000af731) list_single_hwr_training_symbol_option_pane_g1

0xd31b,	// (0x000af739) list_single_hwr_training_symbol_option_pane_t1

0xd329,	// (0x000af747) bg_button_pane_cp023

0xd332,	// (0x000af750) bg_button_pane_cp024

0xd377,	// (0x000af795) vitu2_page_scroll_pane_g1

0xd37f,	// (0x000af79d) vitu2_page_scroll_pane_g2

0x0001,

0x0058,	// (0x000a2476) vitu2_page_scroll_pane_g

0xd387,	// (0x000af7a5) vitu2_page_scroll_pane_t1

0xa365,	// (0x000ac783) popup_char_count_window_g1

0xd396,	// (0x000af7b4) popup_char_count_window_g2

0xacf0,	// (0x000ad10e) popup_char_count_window_g3

0x0002,

0xfa1c,	// (0x000b1e3a) popup_char_count_window_g

0xd39f,	// (0x000af7bd) popup_char_count_window_t1

0x9056,	// (0x000ab474) main_vded2_pane

0xc94d,	// (0x000aed6b) aid_size_cell_imed_line

0xc957,	// (0x000aed75) grid_imed_line_width_pane

0x9895,	// (0x000abcb3) vid4_indicators_pane_g4

0xd3ad,	// (0x000af7cb) cell_imed_line_width_pane_ParamLimits

0xd3ad,	// (0x000af7cb) cell_imed_line_width_pane

0xd3c1,	// (0x000af7df) cell_imed_line_width_pane_g1

0xd3ca,	// (0x000af7e8) cell_imed_line_width_pane_g2

0x0001,

0x0064,	// (0x000a2482) cell_imed_line_width_pane_g

0x5d70,	// (0x000a818e) main_vded2_pane_g1_ParamLimits

0x5d70,	// (0x000a818e) main_vded2_pane_g1

0x5d86,	// (0x000a81a4) main_vded2_pane_g2_ParamLimits

0x5d86,	// (0x000a81a4) main_vded2_pane_g2

0x0001,

0xfa23,	// (0x000b1e41) main_vded2_pane_g_ParamLimits

0xfa23,	// (0x000b1e41) main_vded2_pane_g

0x5d98,	// (0x000a81b6) vded2_slider_pane_ParamLimits

0x5d98,	// (0x000a81b6) vded2_slider_pane

0x5da8,	// (0x000a81c6) aid_size_touch_vded2_end

0x5db2,	// (0x000a81d0) aid_size_touch_vded2_playhead

0xd3d2,	// (0x000af7f0) aid_size_touch_vded2_start

0xd3da,	// (0x000af7f8) vded2_slider_bg_pane

0xd3e3,	// (0x000af801) vded2_slider_pane_g1

0xd3ec,	// (0x000af80a) vded2_slider_pane_g2

0x5dbc,	// (0x000a81da) vded2_slider_pane_g3

0x0002,

0xfa28,	// (0x000b1e46) vded2_slider_pane_g

0xd3f4,	// (0x000af812) vded2_slider_bg_pane_g1

0xd3fd,	// (0x000af81b) vded2_slider_bg_pane_g2

0xd406,	// (0x000af824) vded2_slider_bg_pane_g3

0x0002,

0x0075,	// (0x000a2493) vded2_slider_bg_pane_g

0x282e,	// (0x000a4c4c) aid_postcard_touch_down_pane_ParamLimits

0x282e,	// (0x000a4c4c) aid_postcard_touch_down_pane

0x2844,	// (0x000a4c62) aid_postcard_touch_up_pane_ParamLimits

0x2844,	// (0x000a4c62) aid_postcard_touch_up_pane

0x9056,	// (0x000ab474) main_blid2_pane

0x93ee,	// (0x000ab80c) popup_blid2_search_window

0xe689,	// (0x000b0aa7) blid2_gps_pane

0xe689,	// (0x000b0aa7) blid2_navig_pane

0xe689,	// (0x000b0aa7) blid2_search_pane

0xe689,	// (0x000b0aa7) blid2_tripm_pane

0x5dc7,	// (0x000a81e5) blid2_search_pane_g1_ParamLimits

0x5dc7,	// (0x000a81e5) blid2_search_pane_g1

0x5ddf,	// (0x000a81fd) blid2_search_pane_t1_ParamLimits

0x5ddf,	// (0x000a81fd) blid2_search_pane_t1

0x5df1,	// (0x000a820f) aid_size_cell_blid2_gps_ParamLimits

0x5df1,	// (0x000a820f) aid_size_cell_blid2_gps

0x5e09,	// (0x000a8227) blid2_gps_pane_g1_ParamLimits

0x5e09,	// (0x000a8227) blid2_gps_pane_g1

0x5e1d,	// (0x000a823b) grid_blid2_satellite_pane_ParamLimits

0x5e1d,	// (0x000a823b) grid_blid2_satellite_pane

0x5e37,	// (0x000a8255) blid2_navig_pane_g1_ParamLimits

0x5e37,	// (0x000a8255) blid2_navig_pane_g1

0x5e43,	// (0x000a8261) blid2_navig_pane_t1_ParamLimits

0x5e43,	// (0x000a8261) blid2_navig_pane_t1

0x5e5e,	// (0x000a827c) blid2_navig_pane_t2_ParamLimits

0x5e5e,	// (0x000a827c) blid2_navig_pane_t2

0x0001,

0xfa2f,	// (0x000b1e4d) blid2_navig_pane_t_ParamLimits

0xfa2f,	// (0x000b1e4d) blid2_navig_pane_t

0x5e79,	// (0x000a8297) blid2_navig_ring_pane_ParamLimits

0x5e79,	// (0x000a8297) blid2_navig_ring_pane

0x5e92,	// (0x000a82b0) blid2_speed_pane_ParamLimits

0x5e92,	// (0x000a82b0) blid2_speed_pane

0x5e9e,	// (0x000a82bc) blid2_tripm_pane_g1_ParamLimits

0x5e9e,	// (0x000a82bc) blid2_tripm_pane_g1

0x5eb9,	// (0x000a82d7) blid2_tripm_pane_g2_ParamLimits

0x5eb9,	// (0x000a82d7) blid2_tripm_pane_g2

0x5ecd,	// (0x000a82eb) blid2_tripm_pane_g3_ParamLimits

0x5ecd,	// (0x000a82eb) blid2_tripm_pane_g3

0x5ee1,	// (0x000a82ff) blid2_tripm_pane_g4_ParamLimits

0x5ee1,	// (0x000a82ff) blid2_tripm_pane_g4

0x5ef5,	// (0x000a8313) blid2_tripm_pane_g5_ParamLimits

0x5ef5,	// (0x000a8313) blid2_tripm_pane_g5

0x0005,

0xfa34,	// (0x000b1e52) blid2_tripm_pane_g_ParamLimits

0xfa34,	// (0x000b1e52) blid2_tripm_pane_g

0x5f1b,	// (0x000a8339) blid2_tripm_pane_t1_ParamLimits

0x5f1b,	// (0x000a8339) blid2_tripm_pane_t1

0x5f36,	// (0x000a8354) blid2_tripm_pane_t2_ParamLimits

0x5f36,	// (0x000a8354) blid2_tripm_pane_t2

0x5f4f,	// (0x000a836d) blid2_tripm_pane_t3_ParamLimits

0x5f4f,	// (0x000a836d) blid2_tripm_pane_t3

0x0003,

0xfa41,	// (0x000b1e5f) blid2_tripm_pane_t_ParamLimits

0xfa41,	// (0x000b1e5f) blid2_tripm_pane_t

0x5f96,	// (0x000a83b4) cell_blid2_satellite_pane_ParamLimits

0x5f96,	// (0x000a83b4) cell_blid2_satellite_pane

0x5fb4,	// (0x000a83d2) cell_blid2_satellite_pane_g1

0xd40f,	// (0x000af82d) cell_blid2_satellite_pane_t1

0xa0b9,	// (0x000ac4d7) blid2_speed_pane_g1

0xd41d,	// (0x000af83b) blid2_speed_pane_t1

0xd42b,	// (0x000af849) blid2_speed_pane_t2

0x0001,

0x0097,	// (0x000a24b5) blid2_speed_pane_t

0xa0b9,	// (0x000ac4d7) blid2_navig_ring_pane_g1

0x5fbd,	// (0x000a83db) blid2_navig_ring_pane_g2

0x5fc5,	// (0x000a83e3) blid2_navig_ring_pane_g3

0x5fcd,	// (0x000a83eb) blid2_navig_ring_pane_g4

0x5fd5,	// (0x000a83f3) blid2_navig_ring_pane_g5

0x0004,

0xfa4a,	// (0x000b1e68) blid2_navig_ring_pane_g

0xe689,	// (0x000b0aa7) bg_popup_window_pane_cp011

0xd439,	// (0x000af857) popup_blid2_search_window_g1

0xd441,	// (0x000af85f) popup_blid2_search_window_t1

0xd44f,	// (0x000af86d) popup_blid2_search_window_t2

0x0001,

0x00a7,	// (0x000a24c5) popup_blid2_search_window_t

0xa1b9,	// (0x000ac5d7) main_browser_pane_g1

0x9ed1,	// (0x000ac2ef) main_browser_pane_ParamLimits

0x9048,	// (0x000ab466) bg_button_pane_cp011_ParamLimits

0x4fc3,	// (0x000a73e1) cell_vitu2_function_pane_g1_ParamLimits

0xabb4,	// (0x000acfd2) bg_popup_sub_pane_cp22_ParamLimits

0x589a,	// (0x000a7cb8) input_focus_pane_cp08_ParamLimits

0x58b5,	// (0x000a7cd3) popup_vitu2_query_button_pane_ParamLimits

0x58b5,	// (0x000a7cd3) popup_vitu2_query_button_pane

0x58c4,	// (0x000a7ce2) popup_vitu2_query_input_button_pane

0xd00a,	// (0x000af428) popup_vitu2_query_window_g1_ParamLimits

0x58cc,	// (0x000a7cea) popup_vitu2_query_window_g2_ParamLimits

0xf96c,	// (0x000b1d8a) popup_vitu2_query_window_g_ParamLimits

0xe689,	// (0x000b0aa7) bg_button_pane_cp026

0x5fdd,	// (0x000a83fb) popup_vitu2_query_input_button_pane_g1

0xe689,	// (0x000b0aa7) bg_button_pane_cp025

0xd45d,	// (0x000af87b) popup_vitu2_query_button_pane_t1

0x376b,	// (0x000a5b89) main_mp3_pane_t6

0x3779,	// (0x000a5b97) popup_slider_window_cp01

0x9801,	// (0x000abc1f) cam4_battery_pane

0x9854,	// (0x000abc72) cam4_battery_pane_cp02

0x993f,	// (0x000abd5d) cam4_battery_pane_cp01

0x993f,	// (0x000abd5d) cam4_battery_pane_cp03

0xc9cb,	// (0x000aede9) cam4_battery_pane_g1

0xa0b9,	// (0x000ac4d7) cam4_battery_pane_g2

0x0001,

0xfa55,	// (0x000b1e73) cam4_battery_pane_g

0xc2ee,	// (0x000ae70c) popup_blid_sat_info2_window_t11

0xa922,	// (0x000acd40) aid_size_touch_mv_arrow_left_ParamLimits

0xa94d,	// (0x000acd6b) aid_size_touch_mv_arrow_right_ParamLimits

0xa9ab,	// (0x000acdc9) navi_pane_g1_ParamLimits

0xa9b7,	// (0x000acdd5) navi_pane_g2_ParamLimits

0xa9e5,	// (0x000ace03) navi_pane_g3_ParamLimits

0xf334,	// (0x000b1752) navi_pane_g_ParamLimits

0x24f4,	// (0x000a4912) navi_pane_mv_t1_ParamLimits

0x42e6,	// (0x000a6704) grid_imed_effect_pane_ParamLimits

0x1427,	// (0x000a3845) aid_placing_vt_slider_lsc

0xa108,	// (0x000ac526) aid_placing_vt_slider_prt

0xe6ea,	// (0x000b0b08) bg_tb_trans_pane_cp01_ParamLimits

0xc58c,	// (0x000ae9aa) popup_image_details_window_g1_ParamLimits

0xc59f,	// (0x000ae9bd) popup_image_details_window_g2_ParamLimits

0xc5b4,	// (0x000ae9d2) popup_image_details_window_g3_ParamLimits

0xc5b4,	// (0x000ae9d2) popup_image_details_window_g3

0xf673,	// (0x000b1a91) popup_image_details_window_g_ParamLimits

0xc5c8,	// (0x000ae9e6) popup_image_details_window_t1_ParamLimits

0xc5da,	// (0x000ae9f8) popup_image_details_window_t2_ParamLimits

0xc5f3,	// (0x000aea11) popup_image_details_window_t3_ParamLimits

0xc607,	// (0x000aea25) popup_image_details_window_t4_ParamLimits

0xc622,	// (0x000aea40) popup_image_details_window_t5_ParamLimits

0xf67a,	// (0x000b1a98) popup_image_details_window_t_ParamLimits

0x5c30,	// (0x000a804e) cl_header_name_pane_ParamLimits

0x5c30,	// (0x000a804e) cl_header_name_pane

0x5fe5,	// (0x000a8403) cl_header_name_pane_t1_ParamLimits

0x5fe5,	// (0x000a8403) cl_header_name_pane_t1

0x6006,	// (0x000a8424) cl_header_name_pane_t2_ParamLimits

0x6006,	// (0x000a8424) cl_header_name_pane_t2

0x6048,	// (0x000a8466) cl_header_name_pane_t3_ParamLimits

0x6048,	// (0x000a8466) cl_header_name_pane_t3

0x0002,

0xfa5a,	// (0x000b1e78) cl_header_name_pane_t_ParamLimits

0xfa5a,	// (0x000b1e78) cl_header_name_pane_t

0xaa74,	// (0x000ace92) navi_pane_mv_g2_ParamLimits

0xcd30,	// (0x000af14e) field_vitu2_entry_pane_g1_ParamLimits

0xcd3c,	// (0x000af15a) field_vitu2_entry_pane_g2_ParamLimits

0xab92,	// (0x000acfb0) field_vitu2_entry_pane_g3_ParamLimits

0xab92,	// (0x000acfb0) field_vitu2_entry_pane_g3

0xf875,	// (0x000b1c93) field_vitu2_entry_pane_g_ParamLimits

0x4f3f,	// (0x000a735d) cell_vitu2_itu_pane_g1_ParamLimits

0x4f57,	// (0x000a7375) cell_vitu2_itu_pane_g2_ParamLimits

0x4f57,	// (0x000a7375) cell_vitu2_itu_pane_g2

0x0001,

0xf881,	// (0x000b1c9f) cell_vitu2_itu_pane_g_ParamLimits

0xf881,	// (0x000b1c9f) cell_vitu2_itu_pane_g

0x9048,	// (0x000ab466) bg_vkb2_func_pane_cp05_ParamLimits

0x9048,	// (0x000ab466) bg_vkb2_func_pane_cp05

0x9048,	// (0x000ab466) bg_vkb2_func_pane_cp03

0x9048,	// (0x000ab466) bg_vkb2_func_pane_cp04

0x9048,	// (0x000ab466) bg_vkb2_func_pane_cp10_ParamLimits

0x9048,	// (0x000ab466) bg_vkb2_func_pane_cp10

0x5bd4,	// (0x000a7ff2) bg_vkb2_func_pane_cp08

0x5bad,	// (0x000a7fcb) bg_vkb2_func_pane_cp06

0x5bb9,	// (0x000a7fd7) bg_vkb2_func_pane_cp07

0xd33b,	// (0x000af759) bg_vkb2_func_pane_cp11_ParamLimits

0xd33b,	// (0x000af759) bg_vkb2_func_pane_cp11

0xd362,	// (0x000af780) bg_vkb2_func_pane_cp12_ParamLimits

0xd362,	// (0x000af780) bg_vkb2_func_pane_cp12

0xe689,	// (0x000b0aa7) bg_vkb2_func_pane_cp09

0xcd77,	// (0x000af195) bg_vkb2_func_pane_g1

0xa2ca,	// (0x000ac6e8) bg_vkb2_func_pane_g2

0xcd7f,	// (0x000af19d) bg_vkb2_func_pane_g3

0xcd87,	// (0x000af1a5) bg_vkb2_func_pane_g4

0xcfcf,	// (0x000af3ed) bg_vkb2_func_pane_g5

0xcd9f,	// (0x000af1bd) bg_vkb2_func_pane_g6

0xcda7,	// (0x000af1c5) bg_vkb2_func_pane_g7

0xcd97,	// (0x000af1b5) bg_vkb2_func_pane_g8

0xa2aa,	// (0x000ac6c8) bg_vkb2_func_pane_g9

0x0008,

0xfa61,	// (0x000b1e7f) bg_vkb2_func_pane_g

0x5f09,	// (0x000a8327) blid2_tripm_pane_g6_ParamLimits

0x5f09,	// (0x000a8327) blid2_tripm_pane_g6

0xcc70,	// (0x000af08e) mp4_progress_pane_g1

0x5f82,	// (0x000a83a0) blid2_tripm_values_pane_ParamLimits

0x5f82,	// (0x000a83a0) blid2_tripm_values_pane

0x6079,	// (0x000a8497) blid2_tripm_values_pane_t1

0x6087,	// (0x000a84a5) blid2_tripm_values_pane_t2

0x6095,	// (0x000a84b3) blid2_tripm_values_pane_t3

0x60a3,	// (0x000a84c1) blid2_tripm_values_pane_t4

0x60b1,	// (0x000a84cf) blid2_tripm_values_pane_t5

0x60bf,	// (0x000a84dd) blid2_tripm_values_pane_t6

0x60cd,	// (0x000a84eb) blid2_tripm_values_pane_t7

0x60db,	// (0x000a84f9) blid2_tripm_values_pane_t8

0x60e9,	// (0x000a8507) blid2_tripm_values_pane_t9

0x0008,

0xfa74,	// (0x000b1e92) blid2_tripm_values_pane_t

0x1469,	// (0x000a3887) call_video_pane_t1_ParamLimits

0x1487,	// (0x000a38a5) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x000b1600) call_video_pane_t_ParamLimits

0x27ac,	// (0x000a4bca) msg_header_pane_g1_ParamLimits

0xac71,	// (0x000ad08f) msg_header_pane_g2_ParamLimits

0xac71,	// (0x000ad08f) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x000b17f5) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x000b17f5) msg_header_pane_g

0x9ed1,	// (0x000ac2ef) main_clock2_pane_ParamLimits

0x3fe7,	// (0x000a6405) grid_clock2_toolbar_pane_ParamLimits

0x3fe7,	// (0x000a6405) grid_clock2_toolbar_pane

0x3fe7,	// (0x000a6405) listscroll_clock2_pane_ParamLimits

0x3fe7,	// (0x000a6405) listscroll_clock2_pane

0x40cb,	// (0x000a64e9) main_clock2_pane_t3_ParamLimits

0x40cb,	// (0x000a64e9) main_clock2_pane_t3

0x40ef,	// (0x000a650d) main_clock2_pane_t4_ParamLimits

0x40ef,	// (0x000a650d) main_clock2_pane_t4

0xd46b,	// (0x000af889) cell_clock2_toolbar_pane

0xd473,	// (0x000af891) cell_clock2_toolbar_pane_cp01

0xd473,	// (0x000af891) cell_clock2_toolbar_pane_cp02

0xd47b,	// (0x000af899) cell_clock2_toolbar_pane_cp03

0xd483,	// (0x000af8a1) list_clock2_pane

0xa8a7,	// (0x000accc5) scroll_pane_cp10

0xd48b,	// (0x000af8a9) list_single_clock2_pane_ParamLimits

0xd48b,	// (0x000af8a9) list_single_clock2_pane

0xa083,	// (0x000ac4a1) list_highlight_pane_cp08

0xd498,	// (0x000af8b6) list_single_clock2_pane_t1

0xd4a6,	// (0x000af8c4) list_single_clock2_pane_t2

0x0001,

0x00de,	// (0x000a24fc) list_single_clock2_pane_t

0xe689,	// (0x000b0aa7) bg_button_pane_cp10

0xd4b4,	// (0x000af8d2) cell_clock2_toolbar_pane_g1

0x27ba,	// (0x000a4bd8) aid_main_viewer_pane_g1_ParamLimits

0x27ba,	// (0x000a4bd8) aid_main_viewer_pane_g1

0x27c8,	// (0x000a4be6) aid_main_viewer_pane_g2_ParamLimits

0x27c8,	// (0x000a4be6) aid_main_viewer_pane_g2

0x27d6,	// (0x000a4bf4) aid_main_viewer_pane_g3_ParamLimits

0x27d6,	// (0x000a4bf4) aid_main_viewer_pane_g3

0x27e5,	// (0x000a4c03) aid_main_viewer_pane_g4_ParamLimits

0x27e5,	// (0x000a4c03) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x000b1806) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x000b1806) aid_main_viewer_pane_g

0x312e,	// (0x000a554c) main_calc_pane_ParamLimits

0x3154,	// (0x000a5572) main_dialer2_pane_ParamLimits

0x9056,	// (0x000ab474) main_cam6_pane

0x9056,	// (0x000ab474) main_vid6_pane

0x3ff3,	// (0x000a6411) listscroll_gen_pane_cp06_ParamLimits

0x3ff3,	// (0x000a6411) listscroll_gen_pane_cp06

0x4112,	// (0x000a6530) main_clock2_pane_t5_ParamLimits

0x4112,	// (0x000a6530) main_clock2_pane_t5

0x4170,	// (0x000a658e) aid_call2_pane_cp10_ParamLimits

0x4182,	// (0x000a65a0) aid_call_pane_cp10_ParamLimits

0xa916,	// (0x000acd34) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa916,	// (0x000acd34) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4194,	// (0x000a65b2) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4194,	// (0x000a65b2) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa916,	// (0x000acd34) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf72f,	// (0x000b1b4d) popup_clock_analogue_window_cp10_g_ParamLimits

0x41aa,	// (0x000a65c8) popup_clock_analogue_window_cp10_t1_ParamLimits

0x46b3,	// (0x000a6ad1) cell_dialer2_keypad_pane_g2_ParamLimits

0x46b3,	// (0x000a6ad1) cell_dialer2_keypad_pane_g2

0x0001,

0xf814,	// (0x000b1c32) cell_dialer2_keypad_pane_g_ParamLimits

0xf814,	// (0x000b1c32) cell_dialer2_keypad_pane_g

0x46cf,	// (0x000a6aed) cell_dialer2_keypad_pane_t1

0x52de,	// (0x000a76fc) main_cset_text2_pane_ParamLimits

0x52de,	// (0x000a76fc) main_cset_text2_pane

0xd1f6,	// (0x000af614) area_vitu2_query_pane_g1_ParamLimits

0x5b4e,	// (0x000a7f6c) area_vitu2_query_pane_g2_ParamLimits

0xf9bf,	// (0x000b1ddd) area_vitu2_query_pane_g_ParamLimits

0xd27a,	// (0x000af698) area_vitu2_query_pane_t7_ParamLimits

0xd27a,	// (0x000af698) area_vitu2_query_pane_t7

0x5bad,	// (0x000a7fcb) bg_button_pane_cp018_ParamLimits

0x5bb9,	// (0x000a7fd7) bg_button_pane_cp021_ParamLimits

0x5bc5,	// (0x000a7fe3) bg_button_pane_cp022_ParamLimits

0x5bd4,	// (0x000a7ff2) bg_vkb2_func_pane_cp08_ParamLimits

0x5bad,	// (0x000a7fcb) bg_vkb2_func_pane_cp06_ParamLimits

0x5bb9,	// (0x000a7fd7) bg_vkb2_func_pane_cp07_ParamLimits

0x5be4,	// (0x000a8002) input_focus_pane_cp09_ParamLimits

0x60f7,	// (0x000a8515) cam6_autofocus_pane_ParamLimits

0x60f7,	// (0x000a8515) cam6_autofocus_pane

0x6103,	// (0x000a8521) cam6_image_uncrop_pane_ParamLimits

0x6103,	// (0x000a8521) cam6_image_uncrop_pane

0x6113,	// (0x000a8531) cam6_indi_pane_ParamLimits

0x6113,	// (0x000a8531) cam6_indi_pane

0x6129,	// (0x000a8547) cam6_mode_pane_ParamLimits

0x6129,	// (0x000a8547) cam6_mode_pane

0x613b,	// (0x000a8559) cam6_timer_pane_ParamLimits

0x613b,	// (0x000a8559) cam6_timer_pane

0x6147,	// (0x000a8565) cam6_zoom_pane_ParamLimits

0x6147,	// (0x000a8565) cam6_zoom_pane

0x6154,	// (0x000a8572) cam6_mode_pane_g1_ParamLimits

0x6154,	// (0x000a8572) cam6_mode_pane_g1

0x6164,	// (0x000a8582) cam6_mode_pane_g2_ParamLimits

0x6164,	// (0x000a8582) cam6_mode_pane_g2

0x6174,	// (0x000a8592) cam6_mode_pane_g3_ParamLimits

0x6174,	// (0x000a8592) cam6_mode_pane_g3

0x6184,	// (0x000a85a2) cam6_mode_pane_g4_ParamLimits

0x6184,	// (0x000a85a2) cam6_mode_pane_g4

0x0003,

0xfa87,	// (0x000b1ea5) cam6_mode_pane_g_ParamLimits

0xfa87,	// (0x000b1ea5) cam6_mode_pane_g

0xc9bd,	// (0x000aeddb) bg_tb_trans_pane_cp08_ParamLimits

0xc9bd,	// (0x000aeddb) bg_tb_trans_pane_cp08

0xd4bc,	// (0x000af8da) cam6_battery_pane_ParamLimits

0xd4bc,	// (0x000af8da) cam6_battery_pane

0xd4d2,	// (0x000af8f0) cam6_indi_pane_g1_ParamLimits

0xd4d2,	// (0x000af8f0) cam6_indi_pane_g1

0xd4e4,	// (0x000af902) cam6_indi_pane_g2_ParamLimits

0xd4e4,	// (0x000af902) cam6_indi_pane_g2

0xd4f6,	// (0x000af914) cam6_indi_pane_g3_ParamLimits

0xd4f6,	// (0x000af914) cam6_indi_pane_g3

0x0002,

0x00ec,	// (0x000a250a) cam6_indi_pane_g_ParamLimits

0x00ec,	// (0x000a250a) cam6_indi_pane_g

0xd508,	// (0x000af926) cam6_indi_pane_t1_ParamLimits

0xd508,	// (0x000af926) cam6_indi_pane_t1

0x4ce1,	// (0x000a70ff) cam6_autofocus_pane_g1

0x4cd9,	// (0x000a70f7) cam6_autofocus_pane_g2

0x4cf1,	// (0x000a710f) cam6_autofocus_pane_g3

0x4ce9,	// (0x000a7107) cam6_autofocus_pane_g4

0x0003,

0xfa90,	// (0x000b1eae) cam6_autofocus_pane_g

0xd52e,	// (0x000af94c) cam6_timer_pane_g1

0xd536,	// (0x000af954) cam6_timer_pane_t1

0xd544,	// (0x000af962) cam6_zoom_cont_pane

0xd54c,	// (0x000af96a) cam6_zoom_pane_g1

0xd555,	// (0x000af973) cam6_zoom_pane_g2

0x6194,	// (0x000a85b2) cam6_zoom_pane_g3

0x0002,

0xfa99,	// (0x000b1eb7) cam6_zoom_pane_g

0xa0b9,	// (0x000ac4d7) cam6_battery_pane_g1

0xa0b9,	// (0x000ac4d7) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x000b17b6) cam6_battery_pane_g

0xd54c,	// (0x000af96a) cam6_zoom_cont_pane_g1

0xd555,	// (0x000af973) cam6_zoom_cont_pane_g2

0xd55e,	// (0x000af97c) cam6_zoom_cont_pane_g3

0x0002,

0x0103,	// (0x000a2521) cam6_zoom_cont_pane_g

0x61b2,	// (0x000a85d0) cam6_mode_pane_cp_ParamLimits

0x61b2,	// (0x000a85d0) cam6_mode_pane_cp

0x61c4,	// (0x000a85e2) cam6_zoom_pane_cp_ParamLimits

0x61c4,	// (0x000a85e2) cam6_zoom_pane_cp

0x61d0,	// (0x000a85ee) vid6_image_uncrop_cif_pane_ParamLimits

0x61d0,	// (0x000a85ee) vid6_image_uncrop_cif_pane

0x61e0,	// (0x000a85fe) vid6_image_uncrop_nhd_pane_ParamLimits

0x61e0,	// (0x000a85fe) vid6_image_uncrop_nhd_pane

0x61ef,	// (0x000a860d) vid6_image_uncrop_vga_pane_ParamLimits

0x61ef,	// (0x000a860d) vid6_image_uncrop_vga_pane

0x61fe,	// (0x000a861c) vid6_image_uncrop_wvga_pane_ParamLimits

0x61fe,	// (0x000a861c) vid6_image_uncrop_wvga_pane

0x620d,	// (0x000a862b) vid6_indi_pane_ParamLimits

0x620d,	// (0x000a862b) vid6_indi_pane

0xc9bd,	// (0x000aeddb) bg_tb_trans_pane_cp09_ParamLimits

0xc9bd,	// (0x000aeddb) bg_tb_trans_pane_cp09

0xd576,	// (0x000af994) cam6_battery_pane_cp_ParamLimits

0xd576,	// (0x000af994) cam6_battery_pane_cp

0xd582,	// (0x000af9a0) vid6_indi_pane_g1_ParamLimits

0xd582,	// (0x000af9a0) vid6_indi_pane_g1

0xd594,	// (0x000af9b2) vid6_indi_pane_g2_ParamLimits

0xd594,	// (0x000af9b2) vid6_indi_pane_g2

0xd5a6,	// (0x000af9c4) vid6_indi_pane_g3_ParamLimits

0xd5a6,	// (0x000af9c4) vid6_indi_pane_g3

0xd5bb,	// (0x000af9d9) vid6_indi_pane_g4_ParamLimits

0xd5bb,	// (0x000af9d9) vid6_indi_pane_g4

0xd5d0,	// (0x000af9ee) vid6_indi_pane_g5_ParamLimits

0xd5d0,	// (0x000af9ee) vid6_indi_pane_g5

0x0004,

0x010a,	// (0x000a2528) vid6_indi_pane_g_ParamLimits

0x010a,	// (0x000a2528) vid6_indi_pane_g

0xd5ea,	// (0x000afa08) vid6_indi_pane_t1_ParamLimits

0xd5ea,	// (0x000afa08) vid6_indi_pane_t1

0xd600,	// (0x000afa1e) vid6_indi_pane_t2_ParamLimits

0xd600,	// (0x000afa1e) vid6_indi_pane_t2

0xd628,	// (0x000afa46) vid6_indi_pane_t3_ParamLimits

0xd628,	// (0x000afa46) vid6_indi_pane_t3

0xd650,	// (0x000afa6e) vid6_indi_pane_t4_ParamLimits

0xd650,	// (0x000afa6e) vid6_indi_pane_t4

0x0003,

0x0115,	// (0x000a2533) vid6_indi_pane_t_ParamLimits

0x0115,	// (0x000a2533) vid6_indi_pane_t

0xd674,	// (0x000afa92) wait_bar_pane_cp08

0x6225,	// (0x000a8643) main_cset_text2_pane_t1_ParamLimits

0x6225,	// (0x000a8643) main_cset_text2_pane_t1

0x619d,	// (0x000a85bb) listscroll_gen_pane_cp06_t1_ParamLimits

0x619d,	// (0x000a85bb) listscroll_gen_pane_cp06_t1

0x9056,	// (0x000ab474) main_cam6_set_pane

0xdd00,	// (0x000b011e) bg_tb_trans_pane_cp06_ParamLimits

0x9809,	// (0x000abc27) cam4_indicators_pane_g1_ParamLimits

0x981a,	// (0x000abc38) cam4_indicators_pane_g2_ParamLimits

0xf851,	// (0x000b1c6f) cam4_indicators_pane_g_ParamLimits

0x9832,	// (0x000abc50) cam4_indicators_pane_t1_ParamLimits

0x9048,	// (0x000ab466) bg_tb_trans_pane_cp07_ParamLimits

0x985c,	// (0x000abc7a) vid4_indicators_pane_g1_ParamLimits

0x9870,	// (0x000abc8e) vid4_indicators_pane_g2_ParamLimits

0x9884,	// (0x000abca2) vid4_indicators_pane_g3_ParamLimits

0x9895,	// (0x000abcb3) vid4_indicators_pane_g4_ParamLimits

0xf863,	// (0x000b1c81) vid4_indicators_pane_g_ParamLimits

0x98b1,	// (0x000abccf) vid4_indicators_pane_t1_ParamLimits

0x9947,	// (0x000abd65) vid4_progress_pane_g1_ParamLimits

0x9957,	// (0x000abd75) vid4_progress_pane_g2_ParamLimits

0x5d23,	// (0x000a8141) vid4_progress_pane_g3_ParamLimits

0x9967,	// (0x000abd85) vid4_progress_pane_g4_ParamLimits

0xfa0a,	// (0x000b1e28) vid4_progress_pane_g_ParamLimits

0x5d35,	// (0x000a8153) vid4_progress_pane_t1_ParamLimits

0x997f,	// (0x000abd9d) vid4_progress_pane_t2_ParamLimits

0x9994,	// (0x000abdb2) vid4_progress_pane_t3_ParamLimits

0xfa15,	// (0x000b1e33) vid4_progress_pane_t_ParamLimits

0x5d4b,	// (0x000a8169) wait_bar_pane_cp07_ParamLimits

0x6243,	// (0x000a8661) main_cam6_set_pane_g2_ParamLimits

0x6243,	// (0x000a8661) main_cam6_set_pane_g2

0x6267,	// (0x000a8685) main_cset6_listscroll_pane_ParamLimits

0x6267,	// (0x000a8685) main_cset6_listscroll_pane

0x6283,	// (0x000a86a1) main_cset6_slider_pane_ParamLimits

0x6283,	// (0x000a86a1) main_cset6_slider_pane

0x6299,	// (0x000a86b7) main_cset6_text2_pane_ParamLimits

0x6299,	// (0x000a86b7) main_cset6_text2_pane

0xd683,	// (0x000afaa1) main_cset6_text_pane

0xd68b,	// (0x000afaa9) main_cset_list_pane_copy1_ParamLimits

0xd68b,	// (0x000afaa9) main_cset_list_pane_copy1

0xd69b,	// (0x000afab9) scroll_pane_cp028_copy1

0x62a7,	// (0x000a86c5) cset_list_set_pane_copy1

0x62b9,	// (0x000a86d7) aid_position_infowindow_above_copy1

0x62c1,	// (0x000a86df) aid_position_infowindow_below_copy1

0xdd16,	// (0x000b0134) cset_list_set_pane_g1_copy1

0xd6a4,	// (0x000afac2) cset_list_set_pane_g3_copy1_ParamLimits

0xd6a4,	// (0x000afac2) cset_list_set_pane_g3_copy1

0xd6b3,	// (0x000afad1) cset_list_set_pane_t1_copy1_ParamLimits

0xd6b3,	// (0x000afad1) cset_list_set_pane_t1_copy1

0xe6ea,	// (0x000b0b08) list_highlight_pane_cp021_copy1_ParamLimits

0xe6ea,	// (0x000b0b08) list_highlight_pane_cp021_copy1

0xd6c8,	// (0x000afae6) cset6_slider_pane_ParamLimits

0xd6c8,	// (0x000afae6) cset6_slider_pane

0xd6f4,	// (0x000afb12) main_cset6_slider_pane_g1_ParamLimits

0xd6f4,	// (0x000afb12) main_cset6_slider_pane_g1

0x62c9,	// (0x000a86e7) main_cset6_slider_pane_g2_ParamLimits

0x62c9,	// (0x000a86e7) main_cset6_slider_pane_g2

0xd71c,	// (0x000afb3a) main_cset6_slider_pane_g3_ParamLimits

0xd71c,	// (0x000afb3a) main_cset6_slider_pane_g3

0x62f1,	// (0x000a870f) main_cset6_slider_pane_g4_ParamLimits

0x62f1,	// (0x000a870f) main_cset6_slider_pane_g4

0xd728,	// (0x000afb46) main_cset6_slider_pane_g5_ParamLimits

0xd728,	// (0x000afb46) main_cset6_slider_pane_g5

0xceb8,	// (0x000af2d6) main_cset6_slider_pane_g7_ParamLimits

0xceb8,	// (0x000af2d6) main_cset6_slider_pane_g7

0xcec4,	// (0x000af2e2) main_cset6_slider_pane_g8_ParamLimits

0xcec4,	// (0x000af2e2) main_cset6_slider_pane_g8

0x5384,	// (0x000a77a2) main_cset6_slider_pane_g9_ParamLimits

0x5384,	// (0x000a77a2) main_cset6_slider_pane_g9

0x5390,	// (0x000a77ae) main_cset6_slider_pane_g10_ParamLimits

0x5390,	// (0x000a77ae) main_cset6_slider_pane_g10

0x539c,	// (0x000a77ba) main_cset6_slider_pane_g11_ParamLimits

0x539c,	// (0x000a77ba) main_cset6_slider_pane_g11

0x53a8,	// (0x000a77c6) main_cset6_slider_pane_g12_ParamLimits

0x53a8,	// (0x000a77c6) main_cset6_slider_pane_g12

0x53b4,	// (0x000a77d2) main_cset6_slider_pane_g13_ParamLimits

0x53b4,	// (0x000a77d2) main_cset6_slider_pane_g13

0x53c0,	// (0x000a77de) main_cset6_slider_pane_g14_ParamLimits

0x53c0,	// (0x000a77de) main_cset6_slider_pane_g14

0x62fd,	// (0x000a871b) main_cset6_slider_pane_g15_ParamLimits

0x62fd,	// (0x000a871b) main_cset6_slider_pane_g15

0xced0,	// (0x000af2ee) main_cset6_slider_pane_g16_ParamLimits

0xced0,	// (0x000af2ee) main_cset6_slider_pane_g16

0xcedc,	// (0x000af2fa) main_cset6_slider_pane_g17_ParamLimits

0xcedc,	// (0x000af2fa) main_cset6_slider_pane_g17

0x0011,

0xfaa0,	// (0x000b1ebe) main_cset6_slider_pane_g_ParamLimits

0xfaa0,	// (0x000b1ebe) main_cset6_slider_pane_g

0xd734,	// (0x000afb52) main_cset6_slider_pane_t1_ParamLimits

0xd734,	// (0x000afb52) main_cset6_slider_pane_t1

0x632d,	// (0x000a874b) main_cset6_slider_pane_t2_ParamLimits

0x632d,	// (0x000a874b) main_cset6_slider_pane_t2

0x6358,	// (0x000a8776) main_cset6_slider_pane_t3_ParamLimits

0x6358,	// (0x000a8776) main_cset6_slider_pane_t3

0x6383,	// (0x000a87a1) main_cset6_slider_pane_t4_ParamLimits

0x6383,	// (0x000a87a1) main_cset6_slider_pane_t4

0x63ae,	// (0x000a87cc) main_cset6_slider_pane_t5_ParamLimits

0x63ae,	// (0x000a87cc) main_cset6_slider_pane_t5

0xd775,	// (0x000afb93) main_cset6_slider_pane_t7_ParamLimits

0xd775,	// (0x000afb93) main_cset6_slider_pane_t7

0x63d9,	// (0x000a87f7) main_cset6_slider_pane_t8_ParamLimits

0x63d9,	// (0x000a87f7) main_cset6_slider_pane_t8

0x63fd,	// (0x000a881b) main_cset6_slider_pane_t9_ParamLimits

0x63fd,	// (0x000a881b) main_cset6_slider_pane_t9

0x6421,	// (0x000a883f) main_cset6_slider_pane_t10_ParamLimits

0x6421,	// (0x000a883f) main_cset6_slider_pane_t10

0x6445,	// (0x000a8863) main_cset6_slider_pane_t11_ParamLimits

0x6445,	// (0x000a8863) main_cset6_slider_pane_t11

0xd7ab,	// (0x000afbc9) main_cset6_slider_pane_t14_ParamLimits

0xd7ab,	// (0x000afbc9) main_cset6_slider_pane_t14

0xd7e4,	// (0x000afc02) main_cset6_slider_pane_t15_ParamLimits

0xd7e4,	// (0x000afc02) main_cset6_slider_pane_t15

0x000b,

0xfac5,	// (0x000b1ee3) main_cset6_slider_pane_t_ParamLimits

0xfac5,	// (0x000b1ee3) main_cset6_slider_pane_t

0xcb87,	// (0x000aefa5) cset_slider_pane_g1_copy1

0xd350,	// (0x000af76e) cset_slider_pane_g2_copy1

0xd359,	// (0x000af777) cset_slider_pane_g3_copy1

0xe689,	// (0x000b0aa7) bg_popup_sub_pane_cp011_copy1

0xd826,	// (0x000afc44) main_cset_text_pane_g1_copy1

0xd01e,	// (0x000af43c) main_cset_text_pane_t1_copy1

0xd02c,	// (0x000af44a) main_cset_text_pane_t2_copy1

0xd03a,	// (0x000af458) main_cset_text_pane_t3_copy1

0xd048,	// (0x000af466) main_cset_text_pane_t4_copy1

0xd056,	// (0x000af474) main_cset_text_pane_t5_copy1

0xd82e,	// (0x000afc4c) main_cset_text_pane_t6_copy1

0xd83c,	// (0x000afc5a) main_cset_text_pane_t7_copy1

0x6225,	// (0x000a8643) main_cset_text2_pane_t1_copy1

0x9048,	// (0x000ab466) main_ncimui_pane

0x3398,	// (0x000a57b6) popup_query_ncimui_window_ParamLimits

0x3398,	// (0x000a57b6) popup_query_ncimui_window

0xc6ff,	// (0x000aeb1d) field_cale_ev2_pane_g4_ParamLimits

0xc6ff,	// (0x000aeb1d) field_cale_ev2_pane_g4

0x4592,	// (0x000a69b0) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4592,	// (0x000a69b0) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7eb,	// (0x000b1c09) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7eb,	// (0x000b1c09) cell_video_dialer_keypad_pane_g

0x45aa,	// (0x000a69c8) cell_video_dialer_keypad_pane_t1

0xe689,	// (0x000b0aa7) bg_popup_window_pane_cp012

0xbf55,	// (0x000ae373) heading_pane_cp06

0xd868,	// (0x000afc86) ncim_query_content_pane

0xe689,	// (0x000b0aa7) bg_popup_heading_pane_cp01

0xd870,	// (0x000afc8e) ncim_heading_pane_t1

0xd87e,	// (0x000afc9c) ncim_indicator_popup_pane

0xd890,	// (0x000afcae) ncim_query_button_pane

0xd8a4,	// (0x000afcc2) ncim_query_content_pane_t1

0xd8b6,	// (0x000afcd4) ncim_query_content_pane_t2

0x0005,

0xfafa,	// (0x000b1f18) ncim_query_content_pane_t

0xd8f0,	// (0x000afd0e) ncim_query_list_pane

0xd902,	// (0x000afd20) ncim_query_popup_pane

0xd87e,	// (0x000afc9c) ncim_indicator_popup_pane_ParamLimits

0x65af,	// (0x000a89cd) ncim_query_content_pane_g1_ParamLimits

0x65af,	// (0x000a89cd) ncim_query_content_pane_g1

0xd8a4,	// (0x000afcc2) ncim_query_content_pane_t1_ParamLimits

0xd8b6,	// (0x000afcd4) ncim_query_content_pane_t2_ParamLimits

0x65bb,	// (0x000a89d9) ncim_query_content_pane_t3_ParamLimits

0x65bb,	// (0x000a89d9) ncim_query_content_pane_t3

0x65e3,	// (0x000a8a01) ncim_query_content_pane_t4_ParamLimits

0x65e3,	// (0x000a8a01) ncim_query_content_pane_t4

0x660b,	// (0x000a8a29) ncim_query_content_pane_t5_ParamLimits

0x660b,	// (0x000a8a29) ncim_query_content_pane_t5

0xd8c8,	// (0x000afce6) ncim_query_content_pane_t6_ParamLimits

0xd8c8,	// (0x000afce6) ncim_query_content_pane_t6

0xfafa,	// (0x000b1f18) ncim_query_content_pane_t_ParamLimits

0xd8f0,	// (0x000afd0e) ncim_query_list_pane_ParamLimits

0xd902,	// (0x000afd20) ncim_query_popup_pane_ParamLimits

0xd916,	// (0x000afd34) wait_bar_pane_cp04

0xe689,	// (0x000b0aa7) input_focus_pane_cp011

0xd91e,	// (0x000afd3c) ncim_query_popup_pane_t1

0xd92c,	// (0x000afd4a) ncim_list_query_list_pane_ParamLimits

0xd92c,	// (0x000afd4a) ncim_list_query_list_pane

0xe689,	// (0x000b0aa7) bg_button_pane_cp027

0xd939,	// (0x000afd57) ncim_query_button_pane_g1

0xe689,	// (0x000b0aa7) list_highlight_pane_cp012

0xd943,	// (0x000afd61) ncim_list_query_list_pane_g1

0xd94b,	// (0x000afd69) ncim_list_query_list_pane_t1

0x9826,	// (0x000abc44) cam4_indicators_pane_g3_ParamLimits

0x9826,	// (0x000abc44) cam4_indicators_pane_g3

0x98a1,	// (0x000abcbf) vid4_indicators_pane_g5_ParamLimits

0x98a1,	// (0x000abcbf) vid4_indicators_pane_g5

0x9973,	// (0x000abd91) vid4_progress_pane_g5_ParamLimits

0x9973,	// (0x000abd91) vid4_progress_pane_g5

0x649a,	// (0x000a88b8) main_ncimui_pane_g1

0x6503,	// (0x000a8921) ncimui_group_query_pane_ParamLimits

0x6503,	// (0x000a8921) ncimui_group_query_pane

0x654b,	// (0x000a8969) ncimui_list_pane_ParamLimits

0x654b,	// (0x000a8969) ncimui_list_pane

0x6572,	// (0x000a8990) ncimui_text_pane_ParamLimits

0x6572,	// (0x000a8990) ncimui_text_pane

0x6633,	// (0x000a8a51) ncimui_text_pane_t1_ParamLimits

0x6633,	// (0x000a8a51) ncimui_text_pane_t1

0xd959,	// (0x000afd77) ncimui_list_single_graphic_pane_ParamLimits

0xd959,	// (0x000afd77) ncimui_list_single_graphic_pane

0x6651,	// (0x000a8a6f) ncimui_query_pane_ParamLimits

0x6651,	// (0x000a8a6f) ncimui_query_pane

0xe689,	// (0x000b0aa7) list_highlight_pane_cp013

0xd969,	// (0x000afd87) ncim_list_query_list_pane_t1_copy1

0xd977,	// (0x000afd95) ncim_list_single_graphic_pane_g1

0x6664,	// (0x000a8a82) ncim_query_button_pane_cp01

0x6670,	// (0x000a8a8e) ncim_query_entry_pane_ParamLimits

0x6670,	// (0x000a8a8e) ncim_query_entry_pane

0x6683,	// (0x000a8aa1) ncimui_query_pane_g1

0x668f,	// (0x000a8aad) ncimui_query_pane_t1_ParamLimits

0x668f,	// (0x000a8aad) ncimui_query_pane_t1

0xe6ea,	// (0x000b0b08) input_focus_pane_cp012

0xd97f,	// (0x000afd9d) ncim_query_entry_pane_t1

0x9ed1,	// (0x000ac2ef) main_im_pane_ParamLimits

0x9048,	// (0x000ab466) main_mobtv_pane_ParamLimits

0x9048,	// (0x000ab466) main_mobtv_pane

0x6315,	// (0x000a8733) main_cset6_slider_pane_g18_ParamLimits

0x6315,	// (0x000a8733) main_cset6_slider_pane_g18

0x6321,	// (0x000a873f) main_cset6_slider_pane_g19_ParamLimits

0x6321,	// (0x000a873f) main_cset6_slider_pane_g19

0x9e7b,	// (0x000ac299) bg_main_mobtv_pane_ParamLimits

0x9e7b,	// (0x000ac299) bg_main_mobtv_pane

0x66a8,	// (0x000a8ac6) main_mobtv_info_pane

0x66b1,	// (0x000a8acf) main_mobtv_loading_pane_ParamLimits

0x66b1,	// (0x000a8acf) main_mobtv_loading_pane

0xd991,	// (0x000afdaf) main_mobtv_pg_channel_list_pane

0xd99b,	// (0x000afdb9) main_mobtv_pg_hdr_pane

0x66be,	// (0x000a8adc) main_mobtv_programe_curr_pane_ParamLimits

0x66be,	// (0x000a8adc) main_mobtv_programe_curr_pane

0x66cb,	// (0x000a8ae9) main_mobtv_programe_next_pane_ParamLimits

0x66cb,	// (0x000a8ae9) main_mobtv_programe_next_pane

0xd9a4,	// (0x000afdc2) popup_mobtv_noti_window

0xa0b9,	// (0x000ac4d7) main_tv_pg_hdr_pane_g1

0xd9ac,	// (0x000afdca) main_tv_pg_hdr_pane_g2

0xd9b4,	// (0x000afdd2) main_tv_pg_hdr_pane_g3

0xd9bc,	// (0x000afdda) main_tv_pg_hdr_pane_g4

0xd9c4,	// (0x000afde2) main_tv_pg_hdr_pane_g5

0xd9ce,	// (0x000afdec) main_tv_pg_hdr_pane_g6

0xd9d8,	// (0x000afdf6) main_tv_pg_hdr_pane_g7

0xd9e2,	// (0x000afe00) main_tv_pg_hdr_pane_g8

0xd9ec,	// (0x000afe0a) main_tv_pg_hdr_pane_g9

0xd9f6,	// (0x000afe14) main_tv_pg_hdr_pane_g10

0xda00,	// (0x000afe1e) main_tv_pg_hdr_pane_g11

0x000a,

0x0194,	// (0x000a25b2) main_tv_pg_hdr_pane_g

0xda0a,	// (0x000afe28) main_tv_pg_hdr_pane_t1

0xda18,	// (0x000afe36) main_tv_pg_hdr_pane_t2

0xda26,	// (0x000afe44) main_tv_pg_hdr_pane_t3

0xda36,	// (0x000afe54) main_tv_pg_hdr_pane_t4

0xda46,	// (0x000afe64) main_tv_pg_hdr_pane_t5

0x0004,

0x01ab,	// (0x000a25c9) main_tv_pg_hdr_pane_t

0xda56,	// (0x000afe74) single_mobtv_pg_channel_pane_ParamLimits

0xda56,	// (0x000afe74) single_mobtv_pg_channel_pane

0xda68,	// (0x000afe86) single_mobtv_pg_channel_table_pane

0xa3f8,	// (0x000ac816) single_mobtv_pg_channel_thumb_pane

0xda71,	// (0x000afe8f) single_tv_pg_channel_pane_g1

0xda7a,	// (0x000afe98) single_tv_pg_channel_pane_g2

0x0001,

0x01b6,	// (0x000a25d4) single_tv_pg_channel_pane_g

0x9e5f,	// (0x000ac27d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9e5f,	// (0x000ac27d) bg_single_mobtv_pg_channel_thumb_pane

0xda83,	// (0x000afea1) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xda83,	// (0x000afea1) single_mobtv_pg_channel_thumb_pane_g1

0xda91,	// (0x000afeaf) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xda91,	// (0x000afeaf) single_mobtv_pg_channel_thumb_pane_g2

0xda9d,	// (0x000afebb) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xda9d,	// (0x000afebb) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x01bb,	// (0x000a25d9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x01bb,	// (0x000a25d9) single_mobtv_pg_channel_thumb_pane_g

0xdaa9,	// (0x000afec7) single_mobtv_pg_channel_thumb_pane_t1

0xdab7,	// (0x000afed5) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x01c2,	// (0x000a25e0) single_mobtv_pg_channel_thumb_pane_t

0xa0b9,	// (0x000ac4d7) bg_single_mobtv_pg_channel_table_pane_g1

0xa0b9,	// (0x000ac4d7) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x000b17b6) bg_single_mobtv_pg_channel_table_pane_g

0xdac5,	// (0x000afee3) single_mobtv_pg_channel_table_pane_t1

0xdad3,	// (0x000afef1) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x01c7,	// (0x000a25e5) single_mobtv_pg_channel_table_pane_t

0x66e0,	// (0x000a8afe) main_mobtv_info_pane_g1_ParamLimits

0x66e0,	// (0x000a8afe) main_mobtv_info_pane_g1

0x66fe,	// (0x000a8b1c) main_mobtv_info_pane_t1_ParamLimits

0x66fe,	// (0x000a8b1c) main_mobtv_info_pane_t1

0x6776,	// (0x000a8b94) main_mobtv_info_pane_t2_ParamLimits

0x6776,	// (0x000a8b94) main_mobtv_info_pane_t2

0x0002,

0xfb0c,	// (0x000b1f2a) main_mobtv_info_pane_t_ParamLimits

0xfb0c,	// (0x000b1f2a) main_mobtv_info_pane_t

0x6805,	// (0x000a8c23) wait_bar_pane_cp05

0x6817,	// (0x000a8c35) main_mobtv_loading_pane_g1_ParamLimits

0x6817,	// (0x000a8c35) main_mobtv_loading_pane_g1

0x682a,	// (0x000a8c48) main_mobtv_loading_pane_g2_ParamLimits

0x682a,	// (0x000a8c48) main_mobtv_loading_pane_g2

0x6836,	// (0x000a8c54) main_mobtv_loading_pane_g3_ParamLimits

0x6836,	// (0x000a8c54) main_mobtv_loading_pane_g3

0x0002,

0xfb13,	// (0x000b1f31) main_mobtv_loading_pane_g_ParamLimits

0xfb13,	// (0x000b1f31) main_mobtv_loading_pane_g

0xdae1,	// (0x000afeff) main_mobtv_loading_pane_t1_ParamLimits

0xdae1,	// (0x000afeff) main_mobtv_loading_pane_t1

0xdaf9,	// (0x000aff17) main_mobtv_loading_pane_t2_ParamLimits

0xdaf9,	// (0x000aff17) main_mobtv_loading_pane_t2

0x0001,

0x01df,	// (0x000a25fd) main_mobtv_loading_pane_t_ParamLimits

0x01df,	// (0x000a25fd) main_mobtv_loading_pane_t

0x6849,	// (0x000a8c67) wait_bar_pane_cp06_ParamLimits

0x6849,	// (0x000a8c67) wait_bar_pane_cp06

0xdb1d,	// (0x000aff3b) main_mobtv_programe_curr_pane_t1

0xdb2b,	// (0x000aff49) main_mobtv_programe_curr_pane_t2

0x0001,

0x01e4,	// (0x000a2602) main_mobtv_programe_curr_pane_t

0xdb39,	// (0x000aff57) main_mobtv_programe_next_pane_t1

0xdb47,	// (0x000aff65) main_mobtv_programe_next_pane_t2

0xdb55,	// (0x000aff73) main_mobtv_programe_next_pane_t3

0x0002,

0x01e9,	// (0x000a2607) main_mobtv_programe_next_pane_t

0xe689,	// (0x000b0aa7) bg_popup_mobtv_noti_window_pane

0xdb63,	// (0x000aff81) popup_mobtv_noti_window_g1

0xdb6b,	// (0x000aff89) popup_mobtv_noti_window_t1

0xdb79,	// (0x000aff97) popup_mobtv_noti_window_t2

0x0001,

0x01f0,	// (0x000a260e) popup_mobtv_noti_window_t

0xa0b9,	// (0x000ac4d7) bg_popup_mobtv_noti_window_pane_g1

0x9056,	// (0x000ab474) sc_clock_pane

0x9056,	// (0x000ab474) main_fs_bigclock_pane

0x5f6c,	// (0x000a838a) blid2_tripm_pane_t4_ParamLimits

0x5f6c,	// (0x000a838a) blid2_tripm_pane_t4

0x6858,	// (0x000a8c76) sc_clock_pane_g1_ParamLimits

0x6858,	// (0x000a8c76) sc_clock_pane_g1

0x686a,	// (0x000a8c88) sc_clock_pane_t1_ParamLimits

0x686a,	// (0x000a8c88) sc_clock_pane_t1

0x688c,	// (0x000a8caa) sc_clock_pane_t2_ParamLimits

0x688c,	// (0x000a8caa) sc_clock_pane_t2

0x68a4,	// (0x000a8cc2) sc_clock_pane_t3_ParamLimits

0x68a4,	// (0x000a8cc2) sc_clock_pane_t3

0x0004,

0xfb1a,	// (0x000b1f38) sc_clock_pane_t_ParamLimits

0xfb1a,	// (0x000b1f38) sc_clock_pane_t

0x75e3,	// (0x000a9a01) main_fs_bigclock_indicator_pane_ParamLimits

0x75e3,	// (0x000a9a01) main_fs_bigclock_indicator_pane

0x694a,	// (0x000a8d68) main_fs_bigclock_pane_g1_ParamLimits

0x694a,	// (0x000a8d68) main_fs_bigclock_pane_g1

0x75ef,	// (0x000a9a0d) main_fs_bigclock_pane_t1_ParamLimits

0x75ef,	// (0x000a9a0d) main_fs_bigclock_pane_t1

0x7601,	// (0x000a9a1f) main_fs_bigclock_pane_t2_ParamLimits

0x7601,	// (0x000a9a1f) main_fs_bigclock_pane_t2

0x7615,	// (0x000a9a33) main_fs_bigclock_pane_t3_ParamLimits

0x7615,	// (0x000a9a33) main_fs_bigclock_pane_t3

0x0002,

0xfc90,	// (0x000b20ae) main_fs_bigclock_pane_t_ParamLimits

0xfc90,	// (0x000b20ae) main_fs_bigclock_pane_t

0xe7ca,	// (0x000b0be8) main_fs_bigclock_indicator_pane_g1

0xd898,	// (0x000afcb6) ncim_query_content_pane_g2_ParamLimits

0xd898,	// (0x000afcb6) ncim_query_content_pane_g2

0x0001,

0xfaf5,	// (0x000b1f13) ncim_query_content_pane_g_ParamLimits

0xfaf5,	// (0x000b1f13) ncim_query_content_pane_g

0x68bd,	// (0x000a8cdb) sc_clock_pane_t4_ParamLimits

0x68bd,	// (0x000a8cdb) sc_clock_pane_t4

0x9048,	// (0x000ab466) main_radioblah_pane

0x979b,	// (0x000abbb9) cell_call4_button_pane_t1_copy1_ParamLimits

0x979b,	// (0x000abbb9) cell_call4_button_pane_t1_copy1

0x64b2,	// (0x000a88d0) main_ncimui_pane_t1_ParamLimits

0x64b2,	// (0x000a88d0) main_ncimui_pane_t1

0x64cc,	// (0x000a88ea) main_ncimui_pane_t2_ParamLimits

0x64cc,	// (0x000a88ea) main_ncimui_pane_t2

0x0002,

0xfaee,	// (0x000b1f0c) main_ncimui_pane_t_ParamLimits

0xfaee,	// (0x000b1f0c) main_ncimui_pane_t

0xdcbf,	// (0x000b00dd) main_radioblah_anim_pane_ParamLimits

0xdcbf,	// (0x000b00dd) main_radioblah_anim_pane

0xdcd0,	// (0x000b00ee) main_radioblah_info_pane_ParamLimits

0xdcd0,	// (0x000b00ee) main_radioblah_info_pane

0xdce4,	// (0x000b0102) main_radioblah_pane_t1_ParamLimits

0xdce4,	// (0x000b0102) main_radioblah_pane_t1

0xdd1e,	// (0x000b013c) main_radioblah_pane_t2_ParamLimits

0xdd1e,	// (0x000b013c) main_radioblah_pane_t2

0x0003,

0xfb25,	// (0x000b1f43) main_radioblah_pane_t_ParamLimits

0xfb25,	// (0x000b1f43) main_radioblah_pane_t

0x69a9,	// (0x000a8dc7) main_radioblah_rocker_ctrl_pane_ParamLimits

0x69a9,	// (0x000a8dc7) main_radioblah_rocker_ctrl_pane

0xdd66,	// (0x000b0184) main_radioblah_info_pane_t1_ParamLimits

0xdd66,	// (0x000b0184) main_radioblah_info_pane_t1

0x6a01,	// (0x000a8e1f) main_radioblah_info_pane_t2_ParamLimits

0x6a01,	// (0x000a8e1f) main_radioblah_info_pane_t2

0x0003,

0xfb2e,	// (0x000b1f4c) main_radioblah_info_pane_t_ParamLimits

0xfb2e,	// (0x000b1f4c) main_radioblah_info_pane_t

0xa0b9,	// (0x000ac4d7) main_radioblah_rocker_ctrl_pane_g1

0x6ab1,	// (0x000a8ecf) main_radioblah_rocker_ctrl_pane_g2

0x6ab9,	// (0x000a8ed7) main_radioblah_rocker_ctrl_pane_g3

0x6ac1,	// (0x000a8edf) main_radioblah_rocker_ctrl_pane_g4

0x6ac9,	// (0x000a8ee7) main_radioblah_rocker_ctrl_pane_g5

0x6ad1,	// (0x000a8eef) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb37,	// (0x000b1f55) main_radioblah_rocker_ctrl_pane_g

0x6225,	// (0x000a8643) main_cset_text2_pane_t1_copy1_ParamLimits

0x97f9,	// (0x000abc17) cam4_image_uncrop_qvga_pane

0x984c,	// (0x000abc6a) vid4_image_uncrop_qcif_pane

0x99aa,	// (0x000abdc8) cam6_image_uncrop_qvga_pane_ParamLimits

0x99aa,	// (0x000abdc8) cam6_image_uncrop_qvga_pane

0xd566,	// (0x000af984) vid6_image_uncrop_qcif_pane_ParamLimits

0xd566,	// (0x000af984) vid6_image_uncrop_qcif_pane

0xe689,	// (0x000b0aa7) bg_popup_preview_window_pane_cp03

0xd84a,	// (0x000afc68) list_cset_text2_pane

0xd852,	// (0x000afc70) main_cset6_text2_pane_g1

0xd85a,	// (0x000afc78) main_cset6_text2_pane_t1

0xdda0,	// (0x000b01be) list_cset_text2_pane_t1_ParamLimits

0xdda0,	// (0x000b01be) list_cset_text2_pane_t1

0x9048,	// (0x000ab466) main_radioblah_pane_ParamLimits

0x67f1,	// (0x000a8c0f) main_mobtv_info_pane_t3_ParamLimits

0x67f1,	// (0x000a8c0f) main_mobtv_info_pane_t3

0x6997,	// (0x000a8db5) main_radioblah_pane_g1

0x69d1,	// (0x000a8def) main_radioblah_info_pane_g1

0x6a56,	// (0x000a8e74) main_radioblah_info_pane_t3_ParamLimits

0x6a56,	// (0x000a8e74) main_radioblah_info_pane_t3

0x20f2,	// (0x000a4510) highlight_cell_cale_month_pane_ParamLimits

0x20f2,	// (0x000a4510) highlight_cell_cale_month_pane

0x9056,	// (0x000ab474) main_phob_fisheye_pane

0xc7a0,	// (0x000aebbe) scroll_pane_cp0031_ParamLimits

0xc7a0,	// (0x000aebbe) scroll_pane_cp0031

0xd674,	// (0x000afa92) wait_bar_pane_cp08_ParamLimits

0x62a7,	// (0x000a86c5) cset_list_set_pane_copy1_ParamLimits

0xddbb,	// (0x000b01d9) highlight_cell_cale_month_pane_g1

0x6ad9,	// (0x000a8ef7) highlight_cell_cale_month_pane_t1

0xd2e6,	// (0x000af704) list_gen_pane_cp01

0xcea3,	// (0x000af2c1) scroll_pane_01

0x6ae7,	// (0x000a8f05) list_single_double_fisheye_pane

0xddc3,	// (0x000b01e1) list_double_fisheye_pane_g1_ParamLimits

0xddc3,	// (0x000b01e1) list_double_fisheye_pane_g1

0xddcf,	// (0x000b01ed) list_double_fisheye_pane_g2_ParamLimits

0xddcf,	// (0x000b01ed) list_double_fisheye_pane_g2

0x6af0,	// (0x000a8f0e) list_double_fisheye_pane_g3_ParamLimits

0x6af0,	// (0x000a8f0e) list_double_fisheye_pane_g3

0x0004,

0xfb44,	// (0x000b1f62) list_double_fisheye_pane_g_ParamLimits

0xfb44,	// (0x000b1f62) list_double_fisheye_pane_g

0x6afc,	// (0x000a8f1a) list_double_fisheye_pane_t1_ParamLimits

0x6afc,	// (0x000a8f1a) list_double_fisheye_pane_t1

0x6b17,	// (0x000a8f35) list_double_fisheye_pane_t2_ParamLimits

0x6b17,	// (0x000a8f35) list_double_fisheye_pane_t2

0x0001,

0xfb4f,	// (0x000b1f6d) list_double_fisheye_pane_t_ParamLimits

0xfb4f,	// (0x000b1f6d) list_double_fisheye_pane_t

0x9056,	// (0x000ab474) main_call5_pane

0x68e8,	// (0x000a8d06) sc_swipe_pane_ParamLimits

0x68e8,	// (0x000a8d06) sc_swipe_pane

0x6b4c,	// (0x000a8f6a) call5_image_pane_ParamLimits

0x6b4c,	// (0x000a8f6a) call5_image_pane

0x6b69,	// (0x000a8f87) call5_swipe_1_pane_ParamLimits

0x6b69,	// (0x000a8f87) call5_swipe_1_pane

0x6b7c,	// (0x000a8f9a) call5_swipe_2_pane_ParamLimits

0x6b7c,	// (0x000a8f9a) call5_swipe_2_pane

0x6ba7,	// (0x000a8fc5) popup_call5_audio_first_window_ParamLimits

0x6ba7,	// (0x000a8fc5) popup_call5_audio_first_window

0x9e5f,	// (0x000ac27d) call5_swipe_1_pane_g1_ParamLimits

0x9e5f,	// (0x000ac27d) call5_swipe_1_pane_g1

0xde00,	// (0x000b021e) call5_swipe_1_pane_g2_ParamLimits

0xde00,	// (0x000b021e) call5_swipe_1_pane_g2

0x0001,

0xfb54,	// (0x000b1f72) call5_swipe_1_pane_g_ParamLimits

0xfb54,	// (0x000b1f72) call5_swipe_1_pane_g

0xde0c,	// (0x000b022a) call5_swipe_1_pane_t1_ParamLimits

0xde0c,	// (0x000b022a) call5_swipe_1_pane_t1

0x9e5f,	// (0x000ac27d) call5_swipe_2_pane_g1_ParamLimits

0x9e5f,	// (0x000ac27d) call5_swipe_2_pane_g1

0xde21,	// (0x000b023f) call5_swipe_2_pane_g2_ParamLimits

0xde21,	// (0x000b023f) call5_swipe_2_pane_g2

0x0001,

0xfb59,	// (0x000b1f77) call5_swipe_2_pane_g_ParamLimits

0xfb59,	// (0x000b1f77) call5_swipe_2_pane_g

0xde2d,	// (0x000b024b) call5_swipe_2_pane_t1_ParamLimits

0xde2d,	// (0x000b024b) call5_swipe_2_pane_t1

0xde42,	// (0x000b0260) sc_swipe_pane_g1_ParamLimits

0xde42,	// (0x000b0260) sc_swipe_pane_g1

0xde4f,	// (0x000b026d) sc_swipe_pane_g2_ParamLimits

0xde4f,	// (0x000b026d) sc_swipe_pane_g2

0x0001,

0xfb5e,	// (0x000b1f7c) sc_swipe_pane_g_ParamLimits

0xfb5e,	// (0x000b1f7c) sc_swipe_pane_g

0xde5b,	// (0x000b0279) sc_swipe_pane_t1_ParamLimits

0xde5b,	// (0x000b0279) sc_swipe_pane_t1

0x9056,	// (0x000ab474) main_cmail_launcher_pane

0x6bb8,	// (0x000a8fd6) aid_size_cell_cmail_l_ParamLimits

0x6bb8,	// (0x000a8fd6) aid_size_cell_cmail_l

0x6bc6,	// (0x000a8fe4) grid_cmail_l_pane_ParamLimits

0x6bc6,	// (0x000a8fe4) grid_cmail_l_pane

0x6be0,	// (0x000a8ffe) cell_cmail_l_pane_ParamLimits

0x6be0,	// (0x000a8ffe) cell_cmail_l_pane

0xde70,	// (0x000b028e) cell_cmail_l_pane_g1_ParamLimits

0xde70,	// (0x000b028e) cell_cmail_l_pane_g1

0xde7c,	// (0x000b029a) cell_cmail_l_pane_t1_ParamLimits

0xde7c,	// (0x000b029a) cell_cmail_l_pane_t1

0xde92,	// (0x000b02b0) cell_cmail_l_pane_t2_ParamLimits

0xde92,	// (0x000b02b0) cell_cmail_l_pane_t2

0x0001,

0xfb63,	// (0x000b1f81) cell_cmail_l_pane_t_ParamLimits

0xfb63,	// (0x000b1f81) cell_cmail_l_pane_t

0xe6ea,	// (0x000b0b08) grid_highlight_pane_cp018_ParamLimits

0xe6ea,	// (0x000b0b08) grid_highlight_pane_cp018

0x0717,	// (0x000a2b35) main2_pane_ParamLimits

0x0717,	// (0x000a2b35) main2_pane

0x9f60,	// (0x000ac37e) popup_sp_fs_action_menu_bg_pane_g1

0x9f68,	// (0x000ac386) popup_sp_fs_action_menu_bg_pane_g2

0x9f70,	// (0x000ac38e) popup_sp_fs_action_menu_bg_pane_g3

0x9f78,	// (0x000ac396) popup_sp_fs_action_menu_bg_pane_g4

0x9f80,	// (0x000ac39e) popup_sp_fs_action_menu_bg_pane_g5

0x9f88,	// (0x000ac3a6) popup_sp_fs_action_menu_bg_pane_g6

0x9f90,	// (0x000ac3ae) popup_sp_fs_action_menu_bg_pane_g7

0x9f98,	// (0x000ac3b6) popup_sp_fs_action_menu_bg_pane_g8

0x9fa0,	// (0x000ac3be) popup_sp_fs_action_menu_bg_pane_g9

0x9fa8,	// (0x000ac3c6) popup_sp_fs_action_menu_bg_pane_g10

0x9fa8,	// (0x000ac3c6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x000b1523) popup_sp_fs_action_menu_bg_pane_g

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g3_g1

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g3_g2

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x000b15d1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x000b15d1) list_medium_line_x2_t3_g3_g

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g3_t1

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g3_t2

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x000b15d8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x000b15d8) list_medium_line_x2_t3_g3_t

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g2_g1

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x000b15df) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x000b15df) list_medium_line_x2_t3_g2_g

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g2_t1

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g2_t2

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x000b15d8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x000b15d8) list_medium_line_x2_t3_g2_t

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t4_g4_g1

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t4_g4_g2

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t4_g4_g3

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x000b15e4) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x000b15e4) list_medium_line_x2_t4_g4_g

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t4_g4_t1

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t4_g4_t2

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t4_g4_t3

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x000b15ed) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x000b15ed) list_medium_line_x2_t4_g4_t

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g4_g1

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g4_g2

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g4_g3

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x000b15e4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x000b15e4) list_medium_line_x2_t2_g4_g

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t2_g4_t1

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x000b15b4) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x000b15b4) list_medium_line_x2_t2_g4_t

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g3_g1

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g3_g2

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x000b15d1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x000b15d1) list_medium_line_x2_t2_g3_g

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t2_g3_t1

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x000b15b4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x000b15b4) list_medium_line_x2_t2_g3_t

0x2257,	// (0x000a4675) main_sp_fs_list_pane_ParamLimits

0x2257,	// (0x000a4675) main_sp_fs_list_pane

0xacf9,	// (0x000ad117) sp_fs_scroll_pane_ParamLimits

0xacf9,	// (0x000ad117) sp_fs_scroll_pane

0xa617,	// (0x000aca35) list_medium_line_x2_t3_t1

0xa617,	// (0x000aca35) list_medium_line_x2_t3_t2

0xa617,	// (0x000aca35) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x000b169a) list_medium_line_x2_t3_t

0xa617,	// (0x000aca35) list_medium_line_x3_t4_t1

0xa617,	// (0x000aca35) list_medium_line_x3_t4_t2

0xa617,	// (0x000aca35) list_medium_line_x3_t4_t3

0xa617,	// (0x000aca35) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x000b16a1) list_medium_line_x3_t4_t

0xa617,	// (0x000aca35) list_medium_line_x4_t5_t1

0xa617,	// (0x000aca35) list_medium_line_x4_t5_t2

0xa617,	// (0x000aca35) list_medium_line_x4_t5_t3

0xa617,	// (0x000aca35) list_medium_line_x4_t5_t4

0xa617,	// (0x000aca35) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x000b16aa) list_medium_line_x4_t5_t

0x9e5f,	// (0x000ac27d) list_medium_line_t4_g4_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_t4_g4_g1

0x9e5f,	// (0x000ac27d) list_medium_line_t4_g4_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_t4_g4_g2

0x9e5f,	// (0x000ac27d) list_medium_line_t4_g4_g3_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_t4_g4_g3

0x9e5f,	// (0x000ac27d) list_medium_line_t4_g4_g4_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x000b15e4) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x000b15e4) list_medium_line_t4_g4_g

0xa08b,	// (0x000ac4a9) list_medium_line_t4_g4_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t4_g4_t1

0xa08b,	// (0x000ac4a9) list_medium_line_t4_g4_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t4_g4_t2

0xa08b,	// (0x000ac4a9) list_medium_line_t4_g4_t3_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t4_g4_t3

0xa08b,	// (0x000ac4a9) list_medium_line_t4_g4_t4_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x000b15ed) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x000b15ed) list_medium_line_t4_g4_t

0x2302,	// (0x000a4720) chi_dic_find_pane_g1

0x3168,	// (0x000a5586) main_tport_pane

0xa617,	// (0x000aca35) list_medium_line_plain_t1

0x9e5f,	// (0x000ac27d) list_medium_line_t2_g2_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_t2_g2_g1

0x9e5f,	// (0x000ac27d) list_medium_line_t2_g2_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x000b15df) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x000b15df) list_medium_line_t2_g2_g

0xa08b,	// (0x000ac4a9) list_medium_line_t2_g2_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t2_g2_t1

0xa08b,	// (0x000ac4a9) list_medium_line_t2_g2_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x000b15b4) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x000b15b4) list_medium_line_t2_g2_t

0xd2ef,	// (0x000af70d) aid_sp_fs_list_icon_a_sm

0xdd0e,	// (0x000b012c) aid_sp_fs_list_icon_d

0xd2f7,	// (0x000af715) aid_sp_fs_text_primary

0xe6f8,	// (0x000b0b16) aid_sp_fs_text_secondary

0xe689,	// (0x000b0aa7) list_medium_line

0xe689,	// (0x000b0aa7) list_medium_line_g2

0xe689,	// (0x000b0aa7) list_medium_line_g3

0xe689,	// (0x000b0aa7) list_medium_line_plain

0xe689,	// (0x000b0aa7) list_medium_line_plain_t2

0xe689,	// (0x000b0aa7) list_medium_line_plain_t3

0xe689,	// (0x000b0aa7) list_medium_line_right_icon

0xe689,	// (0x000b0aa7) list_medium_line_right_iconx2

0xe689,	// (0x000b0aa7) list_medium_line_t2

0xe689,	// (0x000b0aa7) list_medium_line_t2_g2

0xe689,	// (0x000b0aa7) list_medium_line_t2_g3

0xe689,	// (0x000b0aa7) list_medium_line_t2_right_icon

0xe689,	// (0x000b0aa7) list_medium_line_t2_right_iconx2

0xe689,	// (0x000b0aa7) list_medium_line_t3

0xe689,	// (0x000b0aa7) list_medium_line_t3_g2

0xe689,	// (0x000b0aa7) list_medium_line_t3_g3

0xe689,	// (0x000b0aa7) list_medium_line_t3_right_iconx2

0xe689,	// (0x000b0aa7) list_medium_line_t4_g4

0xe689,	// (0x000b0aa7) list_medium_line_x2

0xe689,	// (0x000b0aa7) list_medium_line_x2_t2_g2

0xe689,	// (0x000b0aa7) list_medium_line_x2_t2_g3

0xe689,	// (0x000b0aa7) list_medium_line_x2_t2_g4

0xe689,	// (0x000b0aa7) list_medium_line_x2_t3

0xe689,	// (0x000b0aa7) list_medium_line_x2_t3_g2

0xe689,	// (0x000b0aa7) list_medium_line_x2_t3_g3

0xe689,	// (0x000b0aa7) list_medium_line_x2_t3_g4

0xe689,	// (0x000b0aa7) list_medium_line_x2_t4_g2

0xe689,	// (0x000b0aa7) list_medium_line_x2_t4_g4

0xe689,	// (0x000b0aa7) list_medium_line_x3

0xe689,	// (0x000b0aa7) list_medium_line_x3_t4

0xe689,	// (0x000b0aa7) list_medium_line_x3_t4_g4

0xe689,	// (0x000b0aa7) list_medium_line_x4_t4

0xe689,	// (0x000b0aa7) list_medium_line_x4_t4_g7

0xe689,	// (0x000b0aa7) list_medium_line_x4_t5

0x5d5c,	// (0x000a817a) list_single_fs_dyc_pane_ParamLimits

0x5d5c,	// (0x000a817a) list_single_fs_dyc_pane

0x9e5f,	// (0x000ac27d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x4_t4_g7_g1

0x9e5f,	// (0x000ac27d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x4_t4_g7_g2

0x9e5f,	// (0x000ac27d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x4_t4_g7_g3

0x9e5f,	// (0x000ac27d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x4_t4_g7_g4

0x9e5f,	// (0x000ac27d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x4_t4_g7_g5

0x9e5f,	// (0x000ac27d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x4_t4_g7_g6

0x9e6d,	// (0x000ac28b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9e6d,	// (0x000ac28b) list_medium_line_x4_t4_g7_g7

0x0006,

0x015c,	// (0x000a257a) list_medium_line_x4_t4_g7_g_ParamLimits

0x015c,	// (0x000a257a) list_medium_line_x4_t4_g7_g

0xa08b,	// (0x000ac4a9) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x4_t4_g7_t1

0xa08b,	// (0x000ac4a9) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x4_t4_g7_t2

0xa08b,	// (0x000ac4a9) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x4_t4_g7_t3

0xa351,	// (0x000ac76f) list_medium_line_x4_t4_g7_t4_ParamLimits

0xa351,	// (0x000ac76f) list_medium_line_x4_t4_g7_t4

0xa351,	// (0x000ac76f) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa351,	// (0x000ac76f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfade,	// (0x000b1efc) list_medium_line_x4_t4_g7_t_ParamLimits

0xfade,	// (0x000b1efc) list_medium_line_x4_t4_g7_t

0x6469,	// (0x000a8887) list_single_dyc_row_pane_ParamLimits

0x6469,	// (0x000a8887) list_single_dyc_row_pane

0x6b39,	// (0x000a8f57) call5_gesture_pane_ParamLimits

0x6b39,	// (0x000a8f57) call5_gesture_pane

0x6b8f,	// (0x000a8fad) call5_windows_pane_ParamLimits

0x6b8f,	// (0x000a8fad) call5_windows_pane

0x6bfa,	// (0x000a9018) call5_swipe_1_pane_cp_ParamLimits

0x6bfa,	// (0x000a9018) call5_swipe_1_pane_cp

0x6c06,	// (0x000a9024) call5_swipe_2_pane_cp_ParamLimits

0x6c06,	// (0x000a9024) call5_swipe_2_pane_cp

0xa083,	// (0x000ac4a1) call5_image_pane_cp

0x6c12,	// (0x000a9030) popup_call5_audio_first_window_cp_ParamLimits

0x6c12,	// (0x000a9030) popup_call5_audio_first_window_cp

0xde42,	// (0x000b0260) call5_swipe_1_pane_g1_cp_ParamLimits

0xde42,	// (0x000b0260) call5_swipe_1_pane_g1_cp

0xdeaf,	// (0x000b02cd) call5_swipe_1_pane_g2_cp

0xde5b,	// (0x000b0279) call5_swipe_1_pane_t1_cp_ParamLimits

0xde5b,	// (0x000b0279) call5_swipe_1_pane_t1_cp

0xde42,	// (0x000b0260) call5_swipe_2_pane_g1_cp_ParamLimits

0xde42,	// (0x000b0260) call5_swipe_2_pane_g1_cp

0xdeb7,	// (0x000b02d5) call5_swipe_2_pane_g2_cp

0xdebf,	// (0x000b02dd) call5_swipe_2_pane_t1_cp_ParamLimits

0xdebf,	// (0x000b02dd) call5_swipe_2_pane_t1_cp

0xe6ea,	// (0x000b0b08) main_sp_fs_email_pane

0xded4,	// (0x000b02f2) main_sp_fs_listscroll_pane_te

0x6c20,	// (0x000a903e) popup_sp_fs_action_menu_pane_ParamLimits

0x6c20,	// (0x000a903e) popup_sp_fs_action_menu_pane

0xa0b9,	// (0x000ac4d7) bg_sp_fs_ctrlbar_pane_g1

0xdedd,	// (0x000b02fb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdee6,	// (0x000b0304) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xbfce,	// (0x000ae3ec) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa0b9,	// (0x000ac4d7) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb68,	// (0x000b1f86) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc038,	// (0x000ae456) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc038,	// (0x000ae456) bg_sp_fs_ctrlbar_ddmenu_pane

0xdeef,	// (0x000b030d) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdeef,	// (0x000b030d) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdefb,	// (0x000b0319) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdefb,	// (0x000b0319) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb71,	// (0x000b1f8f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb71,	// (0x000b1f8f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdf07,	// (0x000b0325) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdf07,	// (0x000b0325) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa0b9,	// (0x000ac4d7) list_medium_line_t2_right_icon_g1

0xa617,	// (0x000aca35) list_medium_line_t2_right_icon_t1

0xa617,	// (0x000aca35) list_medium_line_t2_right_icon_t2

0x0001,

0xfb76,	// (0x000b1f94) list_medium_line_t2_right_icon_t

0xabb4,	// (0x000acfd2) bg_sp_fs_ctrlbar_pane_ParamLimits

0xabb4,	// (0x000acfd2) bg_sp_fs_ctrlbar_pane

0x6caa,	// (0x000a90c8) main_sp_fs_ctrlbar_button_pane_cp01

0x6cb4,	// (0x000a90d2) main_sp_fs_ctrlbar_ddmenu_pane

0xdf59,	// (0x000b0377) main_sp_fs_ctrlbar_pane_g1

0xdf65,	// (0x000b0383) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfb7b,	// (0x000b1f99) main_sp_fs_ctrlbar_pane_g

0x6cf2,	// (0x000a9110) main_sp_fs_ctrlbar_pane_t1

0x6d31,	// (0x000a914f) main_sp_fs_ctrlbar_pane

0x6d55,	// (0x000a9173) main_sp_fs_listscroll_pane_te_cp01

0x6d75,	// (0x000a9193) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6d75,	// (0x000a9193) popup_sp_fs_action_menu_pane_cp01

0xe6ea,	// (0x000b0b08) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe6ea,	// (0x000b0b08) bg_sp_fs_highlight_list_pane_cp01

0xdf8c,	// (0x000b03aa) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdf8c,	// (0x000b03aa) sp_fs_action_menu_list_gene_pane_g1

0xdf9b,	// (0x000b03b9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdf9b,	// (0x000b03b9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb89,	// (0x000b1fa7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb89,	// (0x000b1fa7) sp_fs_action_menu_list_gene_pane_g

0xdfa8,	// (0x000b03c6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdfa8,	// (0x000b03c6) sp_fs_action_menu_list_gene_pane_t1

0xdfc0,	// (0x000b03de) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdfc0,	// (0x000b03de) sp_fs_action_menu_list_gene_pane

0xdfdf,	// (0x000b03fd) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdfdf,	// (0x000b03fd) popup_sp_fs_action_menu_bg_pane

0xdfed,	// (0x000b040b) sp_fs_action_menu_list_pane_ParamLimits

0xdfed,	// (0x000b040b) sp_fs_action_menu_list_pane

0x6d9a,	// (0x000a91b8) sp_fs_scroll_pane_cp01_ParamLimits

0x6d9a,	// (0x000a91b8) sp_fs_scroll_pane_cp01

0xa617,	// (0x000aca35) list_medium_line_plain_t2_t1

0xa617,	// (0x000aca35) list_medium_line_plain_t2_t2

0x0001,

0xfb76,	// (0x000b1f94) list_medium_line_plain_t2_t

0xa617,	// (0x000aca35) list_medium_line_plain_t3_t1

0xa617,	// (0x000aca35) list_medium_line_plain_t3_t2

0xa617,	// (0x000aca35) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x000b169a) list_medium_line_plain_t3_t

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g2_g1

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x000b15df) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x000b15df) list_medium_line_x2_t2_g2_g

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t2_g2_t1

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x000b15b4) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x000b15b4) list_medium_line_x2_t2_g2_t

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t4_g2_g1

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x000b15df) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x000b15df) list_medium_line_x2_t4_g2_g

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t4_g2_t1

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t4_g2_t2

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t4_g2_t3

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x000b15ed) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x000b15ed) list_medium_line_x2_t4_g2_t

0xa0b9,	// (0x000ac4d7) list_medium_line_t3_right_iconx2_g1

0xa0b9,	// (0x000ac4d7) list_medium_line_t3_right_iconx2_g2

0xa0b9,	// (0x000ac4d7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x000b17bb) list_medium_line_t3_right_iconx2_g

0xa617,	// (0x000aca35) list_medium_line_t3_right_iconx2_t1

0xa617,	// (0x000aca35) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfb76,	// (0x000b1f94) list_medium_line_t3_right_iconx2_t

0x9e5f,	// (0x000ac27d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x3_t4_g4_g1

0x9e5f,	// (0x000ac27d) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x3_t4_g4_g2

0x9e5f,	// (0x000ac27d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x3_t4_g4_g3

0x9e5f,	// (0x000ac27d) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x000b15e4) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x000b15e4) list_medium_line_x3_t4_g4_g

0xa08b,	// (0x000ac4a9) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x3_t4_g4_t1

0xa08b,	// (0x000ac4a9) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x3_t4_g4_t2

0xa08b,	// (0x000ac4a9) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x3_t4_g4_t3

0xa08b,	// (0x000ac4a9) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x000b15ed) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x000b15ed) list_medium_line_x3_t4_g4_t

0x6dc0,	// (0x000a91de) list_single_dyc_row_text_pane_t1_ParamLimits

0x6dc0,	// (0x000a91de) list_single_dyc_row_text_pane_t1

0x6e09,	// (0x000a9227) list_single_dyc_row_text_pane_t2_ParamLimits

0x6e09,	// (0x000a9227) list_single_dyc_row_text_pane_t2

0xe00d,	// (0x000b042b) list_single_dyc_row_text_pane_t3_ParamLimits

0xe00d,	// (0x000b042b) list_single_dyc_row_text_pane_t3

0x0005,

0xfb8e,	// (0x000b1fac) list_single_dyc_row_text_pane_t_ParamLimits

0xfb8e,	// (0x000b1fac) list_single_dyc_row_text_pane_t

0xe031,	// (0x000b044f) list_single_dyc_row_pane_g1_ParamLimits

0xe031,	// (0x000b044f) list_single_dyc_row_pane_g1

0xe03d,	// (0x000b045b) list_single_dyc_row_pane_g2_ParamLimits

0xe03d,	// (0x000b045b) list_single_dyc_row_pane_g2

0xe049,	// (0x000b0467) list_single_dyc_row_pane_g3_ParamLimits

0xe049,	// (0x000b0467) list_single_dyc_row_pane_g3

0xe055,	// (0x000b0473) list_single_dyc_row_pane_g4_ParamLimits

0xe055,	// (0x000b0473) list_single_dyc_row_pane_g4

0x0003,

0xfb9b,	// (0x000b1fb9) list_single_dyc_row_pane_g_ParamLimits

0xfb9b,	// (0x000b1fb9) list_single_dyc_row_pane_g

0xe061,	// (0x000b047f) list_single_dyc_row_text_pane_ParamLimits

0xe061,	// (0x000b047f) list_single_dyc_row_text_pane

0xe689,	// (0x000b0aa7) bg_sp_fs_scroll_pane

0xe080,	// (0x000b049e) thumb_sp_fs_scroll_pane

0x9e5f,	// (0x000ac27d) list_medium_line_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_g1

0xa08b,	// (0x000ac4a9) list_medium_line_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t1

0x9e5f,	// (0x000ac27d) list_medium_line_x2_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_g1

0x9e5f,	// (0x000ac27d) list_medium_line_x2_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x000b15df) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x000b15df) list_medium_line_x2_g

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t1

0x9e5f,	// (0x000ac27d) list_medium_line_x3_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x3_g1

0xdd00,	// (0x000b011e) list_medium_line_x3_g2_ParamLimits

0xdd00,	// (0x000b011e) list_medium_line_x3_g2

0x0001,

0xfba4,	// (0x000b1fc2) list_medium_line_x3_g_ParamLimits

0xfba4,	// (0x000b1fc2) list_medium_line_x3_g

0xe089,	// (0x000b04a7) list_medium_line_x3_t1_ParamLimits

0xe089,	// (0x000b04a7) list_medium_line_x3_t1

0xe09d,	// (0x000b04bb) thumb_sp_fs_scroll_pane_g1

0xe0a6,	// (0x000b04c4) thumb_sp_fs_scroll_pane_g2

0xe0af,	// (0x000b04cd) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfba9,	// (0x000b1fc7) thumb_sp_fs_scroll_pane_g

0xe09d,	// (0x000b04bb) bg_sp_fs_scroll_pane_g1

0xe0a6,	// (0x000b04c4) bg_sp_fs_scroll_pane_g2

0xe0af,	// (0x000b04cd) bg_sp_fs_scroll_pane_g3

0x0002,

0xfba9,	// (0x000b1fc7) bg_sp_fs_scroll_pane_g

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g4_g1

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g4_g2

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g4_g3

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x000b15e4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x000b15e4) list_medium_line_x2_t3_g4_g

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g4_t1

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g4_t2

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x000b15d8) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x000b15d8) list_medium_line_x2_t3_g4_t

0x9e5f,	// (0x000ac27d) list_medium_line_g2_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_g2_g1

0x9e5f,	// (0x000ac27d) list_medium_line_g2_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x000b15df) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x000b15df) list_medium_line_g2_g

0xa08b,	// (0x000ac4a9) list_medium_line_g2_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_g2_t1

0x9e5f,	// (0x000ac27d) list_medium_line_t3_g2_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_t3_g2_g1

0x9e5f,	// (0x000ac27d) list_medium_line_t3_g2_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x000b15df) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x000b15df) list_medium_line_t3_g2_g

0xa08b,	// (0x000ac4a9) list_medium_line_t3_g2_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t3_g2_t1

0xa08b,	// (0x000ac4a9) list_medium_line_t3_g2_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t3_g2_t2

0xa08b,	// (0x000ac4a9) list_medium_line_t3_g2_t3_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x000b15d8) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x000b15d8) list_medium_line_t3_g2_t

0xa0b9,	// (0x000ac4d7) list_medium_line_right_icon_g1

0xa617,	// (0x000aca35) list_medium_line_right_icon_t1

0x9e5f,	// (0x000ac27d) list_medium_line_t2_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_t2_g1

0xa08b,	// (0x000ac4a9) list_medium_line_t2_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t2_t1

0xa08b,	// (0x000ac4a9) list_medium_line_t2_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x000b15b4) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x000b15b4) list_medium_line_t2_t

0x9e5f,	// (0x000ac27d) list_medium_line_t3_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_t3_g1

0xa08b,	// (0x000ac4a9) list_medium_line_t3_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t3_t1

0xa08b,	// (0x000ac4a9) list_medium_line_t3_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t3_t2

0xa08b,	// (0x000ac4a9) list_medium_line_t3_t3_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x000b15d8) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x000b15d8) list_medium_line_t3_t

0x9e5f,	// (0x000ac27d) list_medium_line_g3_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_g3_g1

0x9e5f,	// (0x000ac27d) list_medium_line_g3_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_g3_g2

0x9e5f,	// (0x000ac27d) list_medium_line_g3_g3_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x000b15d1) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x000b15d1) list_medium_line_g3_g

0xa08b,	// (0x000ac4a9) list_medium_line_g3_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_g3_t1

0x9e5f,	// (0x000ac27d) list_medium_line_t2_g3_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_t2_g3_g1

0x9e5f,	// (0x000ac27d) list_medium_line_t2_g3_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_t2_g3_g2

0x9e5f,	// (0x000ac27d) list_medium_line_t2_g3_g3_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x000b15d1) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x000b15d1) list_medium_line_t2_g3_g

0xa08b,	// (0x000ac4a9) list_medium_line_t2_g3_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t2_g3_t1

0xa08b,	// (0x000ac4a9) list_medium_line_t2_g3_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x000b15b4) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x000b15b4) list_medium_line_t2_g3_t

0x9e5f,	// (0x000ac27d) list_medium_line_t3_g3_g1_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_t3_g3_g1

0x9e5f,	// (0x000ac27d) list_medium_line_t3_g3_g2_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_t3_g3_g2

0x9e5f,	// (0x000ac27d) list_medium_line_t3_g3_g3_ParamLimits

0x9e5f,	// (0x000ac27d) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x000b15d1) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x000b15d1) list_medium_line_t3_g3_g

0xa08b,	// (0x000ac4a9) list_medium_line_t3_g3_t1_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t3_g3_t1

0xa08b,	// (0x000ac4a9) list_medium_line_t3_g3_t2_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t3_g3_t2

0xa08b,	// (0x000ac4a9) list_medium_line_t3_g3_t3_ParamLimits

0xa08b,	// (0x000ac4a9) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x000b15d8) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x000b15d8) list_medium_line_t3_g3_t

0xa0b9,	// (0x000ac4d7) list_medium_line_right_iconx2_g1

0xa0b9,	// (0x000ac4d7) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x000b17b6) list_medium_line_right_iconx2_g

0xa617,	// (0x000aca35) list_medium_line_right_iconx2_t1

0xa0b9,	// (0x000ac4d7) list_medium_line_t2_right_iconx2_g1

0xa0b9,	// (0x000ac4d7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x000b17b6) list_medium_line_t2_right_iconx2_g

0xa617,	// (0x000aca35) list_medium_line_t2_right_iconx2_t1

0xa617,	// (0x000aca35) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb76,	// (0x000b1f94) list_medium_line_t2_right_iconx2_t

0xa617,	// (0x000aca35) list_medium_line_x4_t4_t1

0xa617,	// (0x000aca35) list_medium_line_x4_t4_t2

0xa617,	// (0x000aca35) list_medium_line_x4_t4_t3

0xa617,	// (0x000aca35) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x000b16a1) list_medium_line_x4_t4_t

0x6f81,	// (0x000a939f) tport_appsw_pane_ParamLimits

0x6f81,	// (0x000a939f) tport_appsw_pane

0x6f99,	// (0x000a93b7) tport_contact_pane_ParamLimits

0x6f99,	// (0x000a93b7) tport_contact_pane

0x6fb1,	// (0x000a93cf) tport_listscroll_pane_ParamLimits

0x6fb1,	// (0x000a93cf) tport_listscroll_pane

0x6fcb,	// (0x000a93e9) cell_tport_appsw_pane_ParamLimits

0x6fcb,	// (0x000a93e9) cell_tport_appsw_pane

0xab92,	// (0x000acfb0) tport_appsw_pane_g1_ParamLimits

0xab92,	// (0x000acfb0) tport_appsw_pane_g1

0xe0b8,	// (0x000b04d6) tport_contact_pane_g1

0xe0c1,	// (0x000b04df) tport_contact_pane_t1

0xe0cf,	// (0x000b04ed) tport_contact_pane_t2

0x0001,

0xfbb0,	// (0x000b1fce) tport_contact_pane_t

0xe0dd,	// (0x000b04fb) list_tport_pane

0xe0e6,	// (0x000b0504) scroll_pane_cp_030

0x7013,	// (0x000a9431) cell_tport_appsw_pane_g1

0x7023,	// (0x000a9441) cell_tport_appsw_pane_t1

0x7031,	// (0x000a944f) grid_highlight_pane_cp019

0x7039,	// (0x000a9457) list_tport_double_graphic_pane_ParamLimits

0x7039,	// (0x000a9457) list_tport_double_graphic_pane

0xe6ea,	// (0x000b0b08) list_highlight_pane_cp023_ParamLimits

0xe6ea,	// (0x000b0b08) list_highlight_pane_cp023

0x7046,	// (0x000a9464) list_tport_double_graphic_pane_g1_ParamLimits

0x7046,	// (0x000a9464) list_tport_double_graphic_pane_g1

0x7053,	// (0x000a9471) list_tport_double_graphic_pane_t1_ParamLimits

0x7053,	// (0x000a9471) list_tport_double_graphic_pane_t1

0x7068,	// (0x000a9486) list_tport_double_graphic_pane_t2_ParamLimits

0x7068,	// (0x000a9486) list_tport_double_graphic_pane_t2

0x0001,

0xfbbc,	// (0x000b1fda) list_tport_double_graphic_pane_t_ParamLimits

0xfbbc,	// (0x000b1fda) list_tport_double_graphic_pane_t

0xe689,	// (0x000b0aa7) main_cale_note_pane

0x4ee7,	// (0x000a7305) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x4ee7,	// (0x000a7305) cell_vitu2_function_top_wide_pane_cp01

0x6805,	// (0x000a8c23) wait_bar_pane_cp05_ParamLimits

0xe6ea,	// (0x000b0b08) listscroll_cmail_pane

0xe0f7,	// (0x000b0515) list_cmail_pane

0x707a,	// (0x000a9498) list_cmail_body_pane

0x7090,	// (0x000a94ae) list_single_cmail_header_caption_pane

0x70a7,	// (0x000a94c5) list_single_cmail_header_detail_pane_ParamLimits

0x70a7,	// (0x000a94c5) list_single_cmail_header_detail_pane

0xe10e,	// (0x000b052c) list_single_cmail_header_caption_pane_t1

0x70d5,	// (0x000a94f3) list_single_cmail_header_detail_pane_g1_ParamLimits

0x70d5,	// (0x000a94f3) list_single_cmail_header_detail_pane_g1

0xe125,	// (0x000b0543) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe125,	// (0x000b0543) list_single_cmail_header_detail_pane_g2

0x0002,

0xfbc1,	// (0x000b1fdf) list_single_cmail_header_detail_pane_g_ParamLimits

0xfbc1,	// (0x000b1fdf) list_single_cmail_header_detail_pane_g

0x70ed,	// (0x000a950b) list_single_cmail_header_detail_pane_t1_ParamLimits

0x70ed,	// (0x000a950b) list_single_cmail_header_detail_pane_t1

0x712b,	// (0x000a9549) list_single_cmail_header_editor_pane_bg_ParamLimits

0x712b,	// (0x000a9549) list_single_cmail_header_editor_pane_bg

0xda7a,	// (0x000afe98) list_cmail_body_pane_g1

0xe162,	// (0x000b0580) list_cmail_body_pane_t1

0xcd77,	// (0x000af195) list_single_cmail_header_editor_pane_bg_g1

0xa2ca,	// (0x000ac6e8) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcd87,	// (0x000af1a5) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcd7f,	// (0x000af19d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcfcf,	// (0x000af3ed) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcda7,	// (0x000af1c5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcd97,	// (0x000af1b5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcd9f,	// (0x000af1bd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa2aa,	// (0x000ac6c8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7144,	// (0x000a9562) calenote_gesture_pane_ParamLimits

0x7144,	// (0x000a9562) calenote_gesture_pane

0x7164,	// (0x000a9582) calenote_window_pane_ParamLimits

0x7164,	// (0x000a9582) calenote_window_pane

0xe170,	// (0x000b058e) popup_note_window_cp01

0x7180,	// (0x000a959e) calenote_swipe_1_pane_ParamLimits

0x7180,	// (0x000a959e) calenote_swipe_1_pane

0x6c06,	// (0x000a9024) calenote_swipe_2_pane_ParamLimits

0x6c06,	// (0x000a9024) calenote_swipe_2_pane

0xde42,	// (0x000b0260) calenote_swipe_1_pane_g1_ParamLimits

0xde42,	// (0x000b0260) calenote_swipe_1_pane_g1

0xde4f,	// (0x000b026d) calenote_swipe_1_pane_g2_ParamLimits

0xde4f,	// (0x000b026d) calenote_swipe_1_pane_g2

0x0001,

0xfb5e,	// (0x000b1f7c) calenote_swipe_1_pane_g_ParamLimits

0xfb5e,	// (0x000b1f7c) calenote_swipe_1_pane_g

0xe182,	// (0x000b05a0) calenote_swipe_1_pane_t1_ParamLimits

0xe182,	// (0x000b05a0) calenote_swipe_1_pane_t1

0xde42,	// (0x000b0260) calenote_swipe_2_pane_g1_ParamLimits

0xde42,	// (0x000b0260) calenote_swipe_2_pane_g1

0xe1a1,	// (0x000b05bf) calenote_swipe_2_pane_g2_ParamLimits

0xe1a1,	// (0x000b05bf) calenote_swipe_2_pane_g2

0x0001,

0xfbcd,	// (0x000b1feb) calenote_swipe_2_pane_g_ParamLimits

0xfbcd,	// (0x000b1feb) calenote_swipe_2_pane_g

0xe1ad,	// (0x000b05cb) calenote_swipe_2_pane_t1_ParamLimits

0xe1ad,	// (0x000b05cb) calenote_swipe_2_pane_t1

0xe689,	// (0x000b0aa7) main_mup_navstr_pane

0x3d76,	// (0x000a6194) main_mup3_pane_t7_ParamLimits

0x3d76,	// (0x000a6194) main_mup3_pane_t7

0x95c7,	// (0x000ab9e5) main_mp4_pane_g6_ParamLimits

0x95c7,	// (0x000ab9e5) main_mp4_pane_g6

0x9789,	// (0x000abba7) main_image3_pane_t4_ParamLimits

0x9789,	// (0x000abba7) main_image3_pane_t4

0x7195,	// (0x000a95b3) popup_navstr_preview_pane_ParamLimits

0x7195,	// (0x000a95b3) popup_navstr_preview_pane

0x71a9,	// (0x000a95c7) scroll_navstr_pane_ParamLimits

0x71a9,	// (0x000a95c7) scroll_navstr_pane

0xe689,	// (0x000b0aa7) bg_popup_preview_window_pane_cp04

0xe1d4,	// (0x000b05f2) popup_navstr_preview_pane_t1

0x71bd,	// (0x000a95db) scroll_navstr_pane_g1_ParamLimits

0x71bd,	// (0x000a95db) scroll_navstr_pane_g1

0x71d1,	// (0x000a95ef) scroll_navstr_pane_t1_ParamLimits

0x71d1,	// (0x000a95ef) scroll_navstr_pane_t1

0xe179,	// (0x000b0597) bg_button_pane_cp014

0xe179,	// (0x000b0597) bg_button_pane_cp030

0xdde3,	// (0x000b0201) list_double_fisheye_pane_g4_ParamLimits

0xdde3,	// (0x000b0201) list_double_fisheye_pane_g4

0xddef,	// (0x000b020d) list_double_fisheye_pane_g5_ParamLimits

0xddef,	// (0x000b020d) list_double_fisheye_pane_g5

0xacf9,	// (0x000ad117) sp_fs_scroll_pane_cp03

0xdf59,	// (0x000b0377) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdf65,	// (0x000b0383) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb7b,	// (0x000b1f99) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x6cf2,	// (0x000a9110) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe106,	// (0x000b0524) sp_fs_scroll_pane_cp02

0x9fcb,	// (0x000ac3e9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9fcb,	// (0x000ac3e9) popup_sp_fs_calendar_preview_list_single_pane

0xe689,	// (0x000b0aa7) main_cam6_pano_pane

0x9048,	// (0x000ab466) main_mup3_pane_ParamLimits

0xe689,	// (0x000b0aa7) main_phacti_pane

0x66d8,	// (0x000a8af6) bg_button_pane_cp11

0x66f2,	// (0x000a8b10) main_mobtv_info_pane_g2_ParamLimits

0x66f2,	// (0x000a8b10) main_mobtv_info_pane_g2

0x0001,

0xfb07,	// (0x000b1f25) main_mobtv_info_pane_g_ParamLimits

0xfb07,	// (0x000b1f25) main_mobtv_info_pane_g

0x68cf,	// (0x000a8ced) sc_clock_pane_t5_ParamLimits

0x68cf,	// (0x000a8ced) sc_clock_pane_t5

0x6997,	// (0x000a8db5) main_radioblah_pane_g1_ParamLimits

0xdd36,	// (0x000b0154) main_radioblah_pane_t3_ParamLimits

0xdd36,	// (0x000b0154) main_radioblah_pane_t3

0xdd4e,	// (0x000b016c) main_radioblah_pane_t4_ParamLimits

0xdd4e,	// (0x000b016c) main_radioblah_pane_t4

0x69bf,	// (0x000a8ddd) main_radioblah_text_pane_ParamLimits

0x69bf,	// (0x000a8ddd) main_radioblah_text_pane

0x69d1,	// (0x000a8def) main_radioblah_info_pane_g1_ParamLimits

0x6a6a,	// (0x000a8e88) main_radioblah_info_pane_t4_ParamLimits

0x6a6a,	// (0x000a8e88) main_radioblah_info_pane_t4

0xe6ea,	// (0x000b0b08) main_sp_fs_calendar_pane

0x71e8,	// (0x000a9606) main_phacti_pane_g1

0x71f0,	// (0x000a960e) phacti_note_pane_ParamLimits

0x71f0,	// (0x000a960e) phacti_note_pane

0xe1eb,	// (0x000b0609) phacti_term_pane_ParamLimits

0xe1eb,	// (0x000b0609) phacti_term_pane

0xe200,	// (0x000b061e) phacti_note_pane_t1_ParamLimits

0xe200,	// (0x000b061e) phacti_note_pane_t1

0xe217,	// (0x000b0635) phacti_term_pane_g1

0xe21f,	// (0x000b063d) phacti_term_pane_t1_ParamLimits

0xe21f,	// (0x000b063d) phacti_term_pane_t1

0xe249,	// (0x000b0667) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe251,	// (0x000b066f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfbd7,	// (0x000b1ff5) popup_sp_fs_calendar_preview_list_single_pane_g

0xe259,	// (0x000b0677) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe259,	// (0x000b0677) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe26f,	// (0x000b068d) aid_popup_sp_fs_bg_corner_pane

0xa0b9,	// (0x000ac4d7) popup_sp_fs_calendar_preview_bg_pane_g1

0xe689,	// (0x000b0aa7) popup_sp_fs_calendar_preview_bg_pane

0xe277,	// (0x000b0695) popup_sp_fs_calendar_preview_list_pane

0xabb4,	// (0x000acfd2) bg_main_sp_fs_cale_pane_ParamLimits

0xabb4,	// (0x000acfd2) bg_main_sp_fs_cale_pane

0xe288,	// (0x000b06a6) listscroll_cale_mrui_pane_ParamLimits

0xe288,	// (0x000b06a6) listscroll_cale_mrui_pane

0xe29d,	// (0x000b06bb) listscroll_sp_fs_schedule_track_pane

0xe2a6,	// (0x000b06c4) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe2a6,	// (0x000b06c4) main_sp_fs_ctrlbar_pane_cp01

0xe2b9,	// (0x000b06d7) main_sp_fs_ribbon_pane

0xe2c1,	// (0x000b06df) popup_sp_fs_cale_preview_window

0x7265,	// (0x000a9683) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7265,	// (0x000a9683) list_single_sp_fs_schedule_track_pane

0xe6ea,	// (0x000b0b08) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe6ea,	// (0x000b0b08) bg_sp_fs_highlight_list_pane_cp03

0x7279,	// (0x000a9697) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7279,	// (0x000a9697) list_single_sp_fs_schedule_track_pane_g1

0x7285,	// (0x000a96a3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7285,	// (0x000a96a3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfbdc,	// (0x000b1ffa) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfbdc,	// (0x000b1ffa) list_single_sp_fs_schedule_track_pane_g

0x7291,	// (0x000a96af) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7291,	// (0x000a96af) list_single_sp_fs_schedule_track_pane_t1

0x72ab,	// (0x000a96c9) sp_fs_schedule_track_pane_ParamLimits

0x72ab,	// (0x000a96c9) sp_fs_schedule_track_pane

0xe2d3,	// (0x000b06f1) sp_fs_schedule_track_pane_g1

0xe2db,	// (0x000b06f9) sp_fs_schedule_track_pane_g2

0xe2e3,	// (0x000b0701) sp_fs_schedule_track_pane_g3

0xe2eb,	// (0x000b0709) sp_fs_schedule_track_pane_g4

0xe2f3,	// (0x000b0711) sp_fs_schedule_track_pane_g5

0x0004,

0xfbe1,	// (0x000b1fff) sp_fs_schedule_track_pane_g

0xcd77,	// (0x000af195) bg_sp_fs_schedule_viewer_highlight_g1

0xa2ca,	// (0x000ac6e8) bg_sp_fs_schedule_viewer_highlight_g2

0xcd7f,	// (0x000af19d) bg_sp_fs_schedule_viewer_highlight_g3

0xcd87,	// (0x000af1a5) bg_sp_fs_schedule_viewer_highlight_g4

0xcfcf,	// (0x000af3ed) bg_sp_fs_schedule_viewer_highlight_g5

0xcd97,	// (0x000af1b5) bg_sp_fs_schedule_viewer_highlight_g6

0xcd9f,	// (0x000af1bd) bg_sp_fs_schedule_viewer_highlight_g7

0xcda7,	// (0x000af1c5) bg_sp_fs_schedule_viewer_highlight_g8

0xa2aa,	// (0x000ac6c8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfbec,	// (0x000b200a) bg_sp_fs_schedule_viewer_highlight_g

0xe689,	// (0x000b0aa7) bg_main_sp_fs_ribbon_pane

0x72bc,	// (0x000a96da) main_sp_fs_ribbon_pane_g1

0xe2fb,	// (0x000b0719) main_sp_fs_ribbon_pane_t1

0x72c5,	// (0x000a96e3) main_sp_fs_ribbon_pane_t2

0xe30a,	// (0x000b0728) main_sp_fs_ribbon_pane_t3

0x0002,

0xfbff,	// (0x000b201d) main_sp_fs_ribbon_pane_t

0xe319,	// (0x000b0737) main_sp_fs_ribbon_scheduler_pane

0xe321,	// (0x000b073f) bg_main_sp_fs_ribbon_pane_g1

0xe32a,	// (0x000b0748) bg_main_sp_fs_ribbon_pane_g2

0xe333,	// (0x000b0751) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc06,	// (0x000b2024) bg_main_sp_fs_ribbon_pane_g

0xe33b,	// (0x000b0759) main_sp_fs_ribbon_scheduler_pane_g1

0xe344,	// (0x000b0762) main_sp_fs_ribbon_scheduler_pane_g2

0xe34d,	// (0x000b076b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc0d,	// (0x000b202b) main_sp_fs_ribbon_scheduler_pane_g

0xe356,	// (0x000b0774) list_cale_mrui_pane

0x72d4,	// (0x000a96f2) sp_fs_scroll_pane_cp07_ParamLimits

0x72d4,	// (0x000a96f2) sp_fs_scroll_pane_cp07

0x72f0,	// (0x000a970e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x72f0,	// (0x000a970e) bg_sp_fs_schedule_viewer_highlight

0xe363,	// (0x000b0781) list_single_sp_fs_schedule_track_pane_cp01

0xe36b,	// (0x000b0789) list_sp_fs_schedule_track_pane

0xe373,	// (0x000b0791) sp_fs_scroll_pane_cp06_ParamLimits

0xe373,	// (0x000b0791) sp_fs_scroll_pane_cp06

0xa0b9,	// (0x000ac4d7) bgmain_sp_fs_calendar_pane_g1

0x7300,	// (0x000a971e) list_single_cale_mrui_pane_ParamLimits

0x7300,	// (0x000a971e) list_single_cale_mrui_pane

0xe385,	// (0x000b07a3) list_single_cale_mrui_row_pane_ParamLimits

0xe385,	// (0x000b07a3) list_single_cale_mrui_row_pane

0xe392,	// (0x000b07b0) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe392,	// (0x000b07b0) list_single_cale_mrui_row_pane_g1

0xe3d7,	// (0x000b07f5) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe3d7,	// (0x000b07f5) list_single_cale_mrui_row_pane_t1

0x7321,	// (0x000a973f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7321,	// (0x000a973f) list_single_cale_mrui_row_pane_t2

0xe3e9,	// (0x000b0807) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe3e9,	// (0x000b0807) list_single_cale_mrui_row_pane_t3

0xe418,	// (0x000b0836) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe418,	// (0x000b0836) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc1b,	// (0x000b2039) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc1b,	// (0x000b2039) list_single_cale_mrui_row_pane_t

0x7389,	// (0x000a97a7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7389,	// (0x000a97a7) list_single_cmail_header_editor_pane_bg_cp01

0x73b7,	// (0x000a97d5) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x73b7,	// (0x000a97d5) list_single_cmail_header_editor_pane_bg_cp02

0x73d7,	// (0x000a97f5) main_radioblah_text_pane_t1_ParamLimits

0x73d7,	// (0x000a97f5) main_radioblah_text_pane_t1

0xe447,	// (0x000b0865) cam6_indi_pane_cp01

0xe44f,	// (0x000b086d) cam6_mode_pane_cp01

0xe457,	// (0x000b0875) cam6_pano_pane

0xe460,	// (0x000b087e) cam6_zoom_pane_cp01

0xe468,	// (0x000b0886) cam6_pano_image_pane

0xe473,	// (0x000b0891) cam6_pano_pane_g1

0xda7a,	// (0x000afe98) cam6_pano_pane_g2

0xe47c,	// (0x000b089a) cam6_pano_pane_g3

0xe485,	// (0x000b08a3) cam6_pano_pane_g4

0xca33,	// (0x000aee51) cam6_pano_pane_g5

0xe48e,	// (0x000b08ac) cam6_pano_pane_g6

0xe498,	// (0x000b08b6) cam6_pano_pane_g7

0xe4a0,	// (0x000b08be) cam6_pano_pane_g8

0xe4a9,	// (0x000b08c7) cam6_pano_pane_g9

0x0008,

0xfc24,	// (0x000b2042) cam6_pano_pane_g

0xe689,	// (0x000b0aa7) main_browser_tag_pane

0xe1cc,	// (0x000b05ea) grid_navstr_albumart_pane

0xe4b4,	// (0x000b08d2) cell_navstr_albumart_pane_ParamLimits

0xe4b4,	// (0x000b08d2) cell_navstr_albumart_pane

0xe4d4,	// (0x000b08f2) cell_navstr_albumart_pane_g1

0xbe55,	// (0x000ae273) cell_navstr_albumart_pane_g2

0xbe65,	// (0x000ae283) cell_navstr_albumart_pane_g3

0xbe5d,	// (0x000ae27b) cell_navstr_albumart_pane_g4

0x0003,

0xfc37,	// (0x000b2055) cell_navstr_albumart_pane_g

0x73f2,	// (0x000a9810) bt_list_pane_ParamLimits

0x73f2,	// (0x000a9810) bt_list_pane

0x7406,	// (0x000a9824) bt_list_pane_t1

0x7415,	// (0x000a9833) bt_list_pane_t2

0x0001,

0xfc40,	// (0x000b205e) bt_list_pane_t

0xe689,	// (0x000b0aa7) main_cale_prevew_pane

0x7424,	// (0x000a9842) popup_cale_preview_window_ParamLimits

0x7424,	// (0x000a9842) popup_cale_preview_window

0xe6ea,	// (0x000b0b08) bg_popup_preview_window_pane_cp05_ParamLimits

0xe6ea,	// (0x000b0b08) bg_popup_preview_window_pane_cp05

0xe4dc,	// (0x000b08fa) list_cale_preview_pane_ParamLimits

0xe4dc,	// (0x000b08fa) list_cale_preview_pane

0x743d,	// (0x000a985b) list_double_cale_preview_pane_ParamLimits

0x743d,	// (0x000a985b) list_double_cale_preview_pane

0xcdaf,	// (0x000af1cd) list_single_cale_preview_pane_ParamLimits

0xcdaf,	// (0x000af1cd) list_single_cale_preview_pane

0x744f,	// (0x000a986d) list_single_cale_preview_pane_g1

0x7457,	// (0x000a9875) list_single_cale_preview_pane_t1_ParamLimits

0x7457,	// (0x000a9875) list_single_cale_preview_pane_t1

0x746c,	// (0x000a988a) list_double_cale_preview_pane_g1

0x7474,	// (0x000a9892) list_double_cale_preview_pane_t1_ParamLimits

0x7474,	// (0x000a9892) list_double_cale_preview_pane_t1

0x7489,	// (0x000a98a7) list_double_cale_preview_pane_t2_ParamLimits

0x7489,	// (0x000a98a7) list_double_cale_preview_pane_t2

0x0001,

0xfc45,	// (0x000b2063) list_double_cale_preview_pane_t_ParamLimits

0xfc45,	// (0x000b2063) list_double_cale_preview_pane_t

0xe689,	// (0x000b0aa7) main_ezdial_pane

0xe6ea,	// (0x000b0b08) main_sp_fs_email_pane_ParamLimits

0x6c62,	// (0x000a9080) cmail_ddmenu_btn01_pane_ParamLimits

0x6c62,	// (0x000a9080) cmail_ddmenu_btn01_pane

0x6c75,	// (0x000a9093) cmail_ddmenu_btn02_pane_ParamLimits

0x6c75,	// (0x000a9093) cmail_ddmenu_btn02_pane

0x6c98,	// (0x000a90b6) cmail_ddmenu_btn03_pane_ParamLimits

0x6c98,	// (0x000a90b6) cmail_ddmenu_btn03_pane

0x6d31,	// (0x000a914f) main_sp_fs_ctrlbar_pane_ParamLimits

0x6d55,	// (0x000a9173) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x707a,	// (0x000a9498) list_cmail_body_pane_ParamLimits

0xe11c,	// (0x000b053a) bg_button_pane_cp12

0xe131,	// (0x000b054f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe131,	// (0x000b054f) list_single_cmail_header_detail_pane_g3

0xe13e,	// (0x000b055c) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe13e,	// (0x000b055c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfbc8,	// (0x000b1fe6) list_single_cmail_header_detail_pane_t_ParamLimits

0xfbc8,	// (0x000b1fe6) list_single_cmail_header_detail_pane_t

0xe234,	// (0x000b0652) phacti_term_pane_t2_ParamLimits

0xe234,	// (0x000b0652) phacti_term_pane_t2

0x0001,

0xfbd2,	// (0x000b1ff0) phacti_term_pane_t_ParamLimits

0xfbd2,	// (0x000b1ff0) phacti_term_pane_t

0xe4e8,	// (0x000b0906) aid_size_list_single_double

0x74a1,	// (0x000a98bf) popup_ezdial_listscroll_window

0x74bd,	// (0x000a98db) popup_number_entry_window_cp01

0xa083,	// (0x000ac4a1) bg_popup_call_pane_cp09

0xe4f4,	// (0x000b0912) ezdial_list_pane

0xe4fc,	// (0x000b091a) scroll_pane_cp23

0xabb4,	// (0x000acfd2) bg_button_pane_cp028_ParamLimits

0xabb4,	// (0x000acfd2) bg_button_pane_cp028

0x74cb,	// (0x000a98e9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x74cb,	// (0x000a98e9) cmail_ddmenu_btn01_pane_g1

0x74d7,	// (0x000a98f5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x74d7,	// (0x000a98f5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc4a,	// (0x000b2068) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc4a,	// (0x000b2068) cmail_ddmenu_btn01_pane_g

0xe504,	// (0x000b0922) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe504,	// (0x000b0922) cmail_ddmenu_btn01_pane_t1

0xabb4,	// (0x000acfd2) bg_button_pane_cp029_ParamLimits

0xabb4,	// (0x000acfd2) bg_button_pane_cp029

0x74e3,	// (0x000a9901) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x74e3,	// (0x000a9901) cmail_ddmenu_btn02_pane_g1

0x74fb,	// (0x000a9919) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x74fb,	// (0x000a9919) cmail_ddmenu_btn02_pane_t1

0xe6ea,	// (0x000b0b08) bg_button_pane_cp031_ParamLimits

0xe6ea,	// (0x000b0b08) bg_button_pane_cp031

0x74e3,	// (0x000a9901) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x74e3,	// (0x000a9901) cmail_ddmenu_btn03_pane_g1

0x74fb,	// (0x000a9919) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x74fb,	// (0x000a9919) cmail_ddmenu_btn03_pane_t1

0x46cf,	// (0x000a6aed) cell_dialer2_keypad_pane_t1_ParamLimits

0x46e9,	// (0x000a6b07) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x46e9,	// (0x000a6b07) cell_dialer2_keypad_pane_t1_copy1

0x64fb,	// (0x000a8919) ncimui_group_button_pane

0xe6ea,	// (0x000b0b08) main_sp_fs_calendar_pane_ParamLimits

0x7090,	// (0x000a94ae) list_single_cmail_header_caption_pane_ParamLimits

0xe27f,	// (0x000b069d) aid_recal_txt_sm_pane

0xe689,	// (0x000b0aa7) mian_recal_day_pane

0xe2c1,	// (0x000b06df) popup_sp_fs_cale_preview_window_ParamLimits

0xe519,	// (0x000b0937) list_recal_day_pane

0xe55b,	// (0x000b0979) list_single_recal_day_pane_ParamLimits

0xe55b,	// (0x000b0979) list_single_recal_day_pane

0xe56d,	// (0x000b098b) list_single_recal_day_pane_g1_ParamLimits

0xe56d,	// (0x000b098b) list_single_recal_day_pane_g1

0xe579,	// (0x000b0997) list_single_recal_day_pane_g2_ParamLimits

0xe579,	// (0x000b0997) list_single_recal_day_pane_g2

0xe585,	// (0x000b09a3) list_single_recal_day_pane_g3_ParamLimits

0xe585,	// (0x000b09a3) list_single_recal_day_pane_g3

0x751f,	// (0x000a993d) list_single_recal_day_pane_g4_ParamLimits

0x751f,	// (0x000a993d) list_single_recal_day_pane_g4

0xe591,	// (0x000b09af) list_single_recal_day_pane_g5_ParamLimits

0xe591,	// (0x000b09af) list_single_recal_day_pane_g5

0xe59d,	// (0x000b09bb) list_single_recal_day_pane_g6_ParamLimits

0xe59d,	// (0x000b09bb) list_single_recal_day_pane_g6

0x0004,

0xfc59,	// (0x000b2077) list_single_recal_day_pane_g_ParamLimits

0xfc59,	// (0x000b2077) list_single_recal_day_pane_g

0xe5b1,	// (0x000b09cf) list_single_recal_day_pane_t1

0xe5c3,	// (0x000b09e1) list_single_recal_day_pane_t2

0x0001,

0x0355,	// (0x000a2773) list_single_recal_day_pane_t

0x7537,	// (0x000a9955) ncimui_query_button_pane_ParamLimits

0x7537,	// (0x000a9955) ncimui_query_button_pane

0x7547,	// (0x000a9965) ncimui_query_button_pane_t1_ParamLimits

0x7547,	// (0x000a9965) ncimui_query_button_pane_t1

0xe5d5,	// (0x000b09f3) ncimui_query_button_pane_t2_ParamLimits

0xe5d5,	// (0x000b09f3) ncimui_query_button_pane_t2

0x0001,

0xfc64,	// (0x000b2082) ncimui_query_button_pane_t_ParamLimits

0xfc64,	// (0x000b2082) ncimui_query_button_pane_t

0x755a,	// (0x000a9978) query_button_pane_ParamLimits

0x755a,	// (0x000a9978) query_button_pane

0xe689,	// (0x000b0aa7) bg_button_pane_cp0028

0xe5e8,	// (0x000b0a06) query_button_pane_t1

0x3168,	// (0x000a5586) main_tport_pane_ParamLimits

0x6f3e,	// (0x000a935c) bg_popup_window_pane_cp01_ParamLimits

0x6f3e,	// (0x000a935c) bg_popup_window_pane_cp01

0x6f59,	// (0x000a9377) heading_pane_cp08_ParamLimits

0x6f59,	// (0x000a9377) heading_pane_cp08

0x6f6c,	// (0x000a938a) heading_pane_cp07_ParamLimits

0x6f6c,	// (0x000a938a) heading_pane_cp07

0x7013,	// (0x000a9431) cell_tport_appsw_pane_g2

0x0002,

0xfbb5,	// (0x000b1fd3) cell_tport_appsw_pane_g

0xac4f,	// (0x000ad06d) input_candi_list_open_g1

0xa4b8,	// (0x000ac8d6) list_cale_time_pane_g6_ParamLimits

0xa4b8,	// (0x000ac8d6) list_cale_time_pane_g6

0x3783,	// (0x000a5ba1) aid_size_touch_calib_1_ParamLimits

0x3783,	// (0x000a5ba1) aid_size_touch_calib_1

0x3795,	// (0x000a5bb3) aid_size_touch_calib_2_ParamLimits

0x3795,	// (0x000a5bb3) aid_size_touch_calib_2

0x37ad,	// (0x000a5bcb) aid_size_touch_calib_3_ParamLimits

0x37ad,	// (0x000a5bcb) aid_size_touch_calib_3

0x37cb,	// (0x000a5be9) aid_size_touch_calib_4_ParamLimits

0x37cb,	// (0x000a5be9) aid_size_touch_calib_4

0x37e3,	// (0x000a5c01) main_touch_calib_button_group_pane_ParamLimits

0x37e3,	// (0x000a5c01) main_touch_calib_button_group_pane

0x37fb,	// (0x000a5c19) main_touch_calib_pane_g1_ParamLimits

0x380d,	// (0x000a5c2b) main_touch_calib_pane_g2_ParamLimits

0x381f,	// (0x000a5c3d) main_touch_calib_pane_g3_ParamLimits

0x3831,	// (0x000a5c4f) main_touch_calib_pane_g4_ParamLimits

0xf6ac,	// (0x000b1aca) main_touch_calib_pane_g_ParamLimits

0x3843,	// (0x000a5c61) main_touch_calib_pane_t1_ParamLimits

0x385d,	// (0x000a5c7b) main_touch_calib_pane_t2_ParamLimits

0x3877,	// (0x000a5c95) main_touch_calib_pane_t3_ParamLimits

0x388b,	// (0x000a5ca9) main_touch_calib_pane_t4_ParamLimits

0x389f,	// (0x000a5cbd) main_touch_calib_pane_t5_ParamLimits

0xf6b5,	// (0x000b1ad3) main_touch_calib_pane_t_ParamLimits

0xc7c4,	// (0x000aebe2) list_single_fp_cale_pane_g3_ParamLimits

0xc7c4,	// (0x000aebe2) list_single_fp_cale_pane_g3

0x9048,	// (0x000ab466) bg_button_pane_cp012_ParamLimits

0x9048,	// (0x000ab466) bg_vkb2_func_pane_cp03_ParamLimits

0x56e4,	// (0x000a7b02) cell_vitu2_function_top_pane_g1_ParamLimits

0x9048,	// (0x000ab466) bg_vkb2_func_pane_cp04_ParamLimits

0x6486,	// (0x000a88a4) main_ncimui_button_group_pane_ParamLimits

0x6486,	// (0x000a88a4) main_ncimui_button_group_pane

0x64e6,	// (0x000a8904) main_ncimui_pane_t3_ParamLimits

0x64e6,	// (0x000a8904) main_ncimui_pane_t3

0xe1e2,	// (0x000b0600) phacti_button_group_pane

0xe4e8,	// (0x000b0906) aid_size_list_single_double_ParamLimits

0x74a1,	// (0x000a98bf) popup_ezdial_listscroll_window_ParamLimits

0x74bd,	// (0x000a98db) popup_number_entry_window_cp01_ParamLimits

0x756d,	// (0x000a998b) phacti_button_pane_ParamLimits

0x756d,	// (0x000a998b) phacti_button_pane

0xe689,	// (0x000b0aa7) bg_button_pane_cp14

0xe5f6,	// (0x000b0a14) phacti_button_pane_t1

0x757e,	// (0x000a999c) main_touch_calib_button_pane_ParamLimits

0x757e,	// (0x000a999c) main_touch_calib_button_pane

0x9ed1,	// (0x000ac2ef) bg_button_pane_cp18_ParamLimits

0x9ed1,	// (0x000ac2ef) bg_button_pane_cp18

0xe604,	// (0x000b0a22) main_touch_calib_button_pane_t1_ParamLimits

0xe604,	// (0x000b0a22) main_touch_calib_button_pane_t1

0xe61a,	// (0x000b0a38) main_touch_calib_button_pane_t2_ParamLimits

0xe61a,	// (0x000b0a38) main_touch_calib_button_pane_t2

0x0001,

0xfc69,	// (0x000b2087) main_touch_calib_button_pane_t_ParamLimits

0xfc69,	// (0x000b2087) main_touch_calib_button_pane_t

0xe689,	// (0x000b0aa7) cell_ncimui_button_pane

0xe689,	// (0x000b0aa7) bg_button_pane_cp032

0xe638,	// (0x000b0a56) cell_ncimui_button_pane_t1

0x9769,	// (0x000abb87) image3_infobar_pane_ParamLimits

0x9769,	// (0x000abb87) image3_infobar_pane

0x68fb,	// (0x000a8d19) fs_bigclock_status_pane_ParamLimits

0x68fb,	// (0x000a8d19) fs_bigclock_status_pane

0x6908,	// (0x000a8d26) main_fs_bigclock_clock_pane_ParamLimits

0x6908,	// (0x000a8d26) main_fs_bigclock_clock_pane

0x6926,	// (0x000a8d44) main_fs_bigclock_indi_pane_ParamLimits

0x6926,	// (0x000a8d44) main_fs_bigclock_indi_pane

0x6958,	// (0x000a8d76) main_fs_bigclock_swipe_pane_ParamLimits

0x6958,	// (0x000a8d76) main_fs_bigclock_swipe_pane

0xe689,	// (0x000b0aa7) main_fs_clock_dumped_data

0xdb87,	// (0x000affa5) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdb87,	// (0x000affa5) list_single_fs_bigclock_indicator_pane_g1

0xdba3,	// (0x000affc1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdba3,	// (0x000affc1) list_single_fs_bigclock_indicator_pane_g2

0xdbbd,	// (0x000affdb) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdbbd,	// (0x000affdb) list_single_fs_bigclock_indicator_pane_g3

0xdbd7,	// (0x000afff5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdbd7,	// (0x000afff5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0200,	// (0x000a261e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0200,	// (0x000a261e) list_single_fs_bigclock_indicator_pane_g

0xdc02,	// (0x000b0020) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdc02,	// (0x000b0020) list_single_fs_bigclock_indicator_pane_t1

0xdc2a,	// (0x000b0048) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdc2a,	// (0x000b0048) list_single_fs_bigclock_indicator_pane_t2

0xdc52,	// (0x000b0070) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdc52,	// (0x000b0070) list_single_fs_bigclock_indicator_pane_t3

0xdc7a,	// (0x000b0098) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdc7a,	// (0x000b0098) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x020b,	// (0x000a2629) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x020b,	// (0x000a2629) list_single_fs_bigclock_indicator_pane_t

0xe646,	// (0x000b0a64) image3_infobar_fav_pane_ParamLimits

0xe646,	// (0x000b0a64) image3_infobar_fav_pane

0xe701,	// (0x000b0b1f) image3_infobar_loc_pane_ParamLimits

0xe701,	// (0x000b0b1f) image3_infobar_loc_pane

0xe715,	// (0x000b0b33) image3_infobar_time_pane_ParamLimits

0xe715,	// (0x000b0b33) image3_infobar_time_pane

0xa0b9,	// (0x000ac4d7) image3_infobar_time_pane_g1

0xe725,	// (0x000b0b43) image3_infobar_time_pane_t1

0xa0b9,	// (0x000ac4d7) image3_infobar_loc_pane_g1

0xe733,	// (0x000b0b51) image3_infobar_loc_pane_g2

0x0001,

0xfc6e,	// (0x000b208c) image3_infobar_loc_pane_g

0xe73b,	// (0x000b0b59) image3_infobar_loc_pane_t1

0xa0b9,	// (0x000ac4d7) image3_infobar_fav_pane_g1

0xe749,	// (0x000b0b67) image3_infobar_fav_pane_g2

0x0001,

0xfc73,	// (0x000b2091) image3_infobar_fav_pane_g

0xe751,	// (0x000b0b6f) fs_bigclock_status_battery_pane

0xe75a,	// (0x000b0b78) fs_bigclock_status_signal_pane

0xe763,	// (0x000b0b81) fs_bigclock_status_title_pane

0xe76c,	// (0x000b0b8a) fs_bigclock_status_signal_pane_g1

0xe775,	// (0x000b0b93) fs_bigclock_status_signal_pane_g2

0x0001,

0xfc78,	// (0x000b2096) fs_bigclock_status_signal_pane_g

0xe77d,	// (0x000b0b9b) fs_bigclock_status_battery_pane_g1

0xe786,	// (0x000b0ba4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfc7d,	// (0x000b209b) fs_bigclock_status_battery_pane_g

0xe78e,	// (0x000b0bac) fs_bigclock_status_title_pane_t1

0x7593,	// (0x000a99b1) main_fs_bigclock_clock_pane_g1

0x7593,	// (0x000a99b1) main_fs_bigclock_clock_pane_g2

0x75a4,	// (0x000a99c2) main_fs_bigclock_clock_pane_g3

0x75a4,	// (0x000a99c2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfc82,	// (0x000b20a0) main_fs_bigclock_clock_pane_g

0x75b7,	// (0x000a99d5) main_fs_bigclock_clock_pane_t1

0x75cd,	// (0x000a99eb) main_fs_bigclock_clock_pane_t2

0x0001,

0xfc8b,	// (0x000b20a9) main_fs_bigclock_clock_pane_t

0xe79c,	// (0x000b0bba) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe79c,	// (0x000b0bba) list_single_fs_bigclock_indicator_pane

0xe7ad,	// (0x000b0bcb) list_single_fs_bigclock_pane_ParamLimits

0xe7ad,	// (0x000b0bcb) list_single_fs_bigclock_pane

0xe7d3,	// (0x000b0bf1) main_fs_bigclock_indicator_pane_t1

0xe7e2,	// (0x000b0c00) list_single_fs_bigclock_pane_g1

0xe7ea,	// (0x000b0c08) list_single_fs_bigclock_pane_t1

0xa0b9,	// (0x000ac4d7) main_fs_bigclock_swipe_pane_g1

0xe82d,	// (0x000b0c4b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfc9c,	// (0x000b20ba) main_fs_bigclock_swipe_pane_g

0xe835,	// (0x000b0c53) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe835,	// (0x000b0c53) main_fs_bigclock_swipe_pane_t1

0x2263,	// (0x000a4681) call_type_pane_ParamLimits

0xe689,	// (0x000b0aa7) main_btmg_pane

0xe3be,	// (0x000b07dc) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe3be,	// (0x000b07dc) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc14,	// (0x000b2032) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc14,	// (0x000b2032) list_single_cale_mrui_row_pane_g

0xe542,	// (0x000b0960) list_recal_vselct_arw_lo_pane

0xe54a,	// (0x000b0968) list_recal_vselct_arw_up_pane

0xe552,	// (0x000b0970) list_recal_vselct_pane

0x7627,	// (0x000a9a45) btmg_button_pane

0x7631,	// (0x000a9a4f) main_btmg_pane_g1

0xe689,	// (0x000b0aa7) bg_button_pane_cp044

0xe852,	// (0x000b0c70) btmg_button_pane_t1

0xbfe5,	// (0x000ae403) aid_listscroll_gen

0xe6ea,	// (0x000b0b08) main_cntbar_detail_pane

0xe0ef,	// (0x000b050d) list_cmail_folder_pane

0xacf9,	// (0x000ad117) sp_fs_scroll_pane_cp03_ParamLimits

0x763b,	// (0x000a9a59) list_single_fs_dyc_pane_cp01_ParamLimits

0x763b,	// (0x000a9a59) list_single_fs_dyc_pane_cp01

0xe860,	// (0x000b0c7e) aid_size_cmail_indent

0xe656,	// (0x000b0a74) list_single_dyc_row_pane_cp01

0x7683,	// (0x000a9aa1) cntbar_detail_list_pane_ParamLimits

0x7683,	// (0x000a9aa1) cntbar_detail_list_pane

0x76cf,	// (0x000a9aed) main_cntbar_detail_cont_pane_ParamLimits

0x76cf,	// (0x000a9aed) main_cntbar_detail_cont_pane

0xacf9,	// (0x000ad117) scroll_pane_cp032_ParamLimits

0xacf9,	// (0x000ad117) scroll_pane_cp032

0xe869,	// (0x000b0c87) cntbar_detail_list_event_pane_ParamLimits

0xe869,	// (0x000b0c87) cntbar_detail_list_event_pane

0x7693,	// (0x000a9ab1) cntbar_detail_list_shct_pane

0xa318,	// (0x000ac736) aid_list_gen

0xe879,	// (0x000b0c97) aid_scroll

0xe882,	// (0x000b0ca0) aid_size_touch_scroll_bar

0x6ae7,	// (0x000a8f05) aid_list_double

0x76e3,	// (0x000a9b01) aid_list_single

0xace7,	// (0x000ad105) aid_list_single_lg

0x76ec,	// (0x000a9b0a) aid_list_z_g_a_sm

0x76f4,	// (0x000a9b12) aid_list_z_g_d

0x76fc,	// (0x000a9b1a) aid_txt_z_prm

0x770a,	// (0x000a9b28) aid_txt_z_prm_cp01

0x7718,	// (0x000a9b36) aid_txt_z_sec

0x7726,	// (0x000a9b44) main_cntbar_detail_cont_pane_g1_ParamLimits

0x7726,	// (0x000a9b44) main_cntbar_detail_cont_pane_g1

0x773a,	// (0x000a9b58) main_cntbar_detail_cont_pane_g2_ParamLimits

0x773a,	// (0x000a9b58) main_cntbar_detail_cont_pane_g2

0x0001,

0xfca1,	// (0x000b20bf) main_cntbar_detail_cont_pane_g_ParamLimits

0xfca1,	// (0x000b20bf) main_cntbar_detail_cont_pane_g

0xe88b,	// (0x000b0ca9) main_cntbar_detail_cont_pane_t1

0xe899,	// (0x000b0cb7) main_cntbar_detail_cont_pane_t2

0xe8a7,	// (0x000b0cc5) main_cntbar_detail_cont_pane_t3

0x0002,

0xfca6,	// (0x000b20c4) main_cntbar_detail_cont_pane_t

0x774a,	// (0x000a9b68) cell_cntbar_detail_list_shct_pane_ParamLimits

0x774a,	// (0x000a9b68) cell_cntbar_detail_list_shct_pane

0xe8b5,	// (0x000b0cd3) cntbar_detail_list_shct_pane_g1

0xe8be,	// (0x000b0cdc) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcad,	// (0x000b20cb) cntbar_detail_list_shct_pane_g

0x775e,	// (0x000a9b7c) cntbar_detail_list_event_pane_g1_ParamLimits

0x775e,	// (0x000a9b7c) cntbar_detail_list_event_pane_g1

0x776a,	// (0x000a9b88) cntbar_detail_list_event_pane_g2_ParamLimits

0x776a,	// (0x000a9b88) cntbar_detail_list_event_pane_g2

0x0005,

0xfcb2,	// (0x000b20d0) cntbar_detail_list_event_pane_g_ParamLimits

0xfcb2,	// (0x000b20d0) cntbar_detail_list_event_pane_g

0x77d6,	// (0x000a9bf4) cntbar_detail_list_event_pane_t1_ParamLimits

0x77d6,	// (0x000a9bf4) cntbar_detail_list_event_pane_t1

0x77eb,	// (0x000a9c09) cntbar_detail_list_event_pane_t2_ParamLimits

0x77eb,	// (0x000a9c09) cntbar_detail_list_event_pane_t2

0x0002,

0xfcbf,	// (0x000b20dd) cntbar_detail_list_event_pane_t_ParamLimits

0xfcbf,	// (0x000b20dd) cntbar_detail_list_event_pane_t

0xa0b9,	// (0x000ac4d7) cell_cntbar_detail_list_shct_pane_g1

0xaa93,	// (0x000aceb1) navi_pane_mv_g3

0xe6ea,	// (0x000b0b08) main_cntbar_detail_pane_ParamLimits

0xe689,	// (0x000b0aa7) main_notif_wgt_pane

0x9555,	// (0x000ab973) aid_tch_main_mp4_pane_g4

0x9761,	// (0x000abb7f) popup_slider_window_cp02

0xe538,	// (0x000b0956) list_recal_day_event_pane

0x7651,	// (0x000a9a6f) cntbar_detail_btn_pane_ParamLimits

0x7651,	// (0x000a9a6f) cntbar_detail_btn_pane

0x766a,	// (0x000a9a88) cntbar_detail_btn_pane_cp01_ParamLimits

0x766a,	// (0x000a9a88) cntbar_detail_btn_pane_cp01

0x7693,	// (0x000a9ab1) cntbar_detail_list_shct_pane_ParamLimits

0x76a3,	// (0x000a9ac1) cntbar_detail_pane_g1_ParamLimits

0x76a3,	// (0x000a9ac1) cntbar_detail_pane_g1

0x76b3,	// (0x000a9ad1) cntbar_detail_pane_t1_ParamLimits

0x76b3,	// (0x000a9ad1) cntbar_detail_pane_t1

0x7776,	// (0x000a9b94) cntbar_detail_list_event_pane_g3_ParamLimits

0x7776,	// (0x000a9b94) cntbar_detail_list_event_pane_g3

0x778e,	// (0x000a9bac) cntbar_detail_list_event_pane_g4_ParamLimits

0x778e,	// (0x000a9bac) cntbar_detail_list_event_pane_g4

0x77a6,	// (0x000a9bc4) cntbar_detail_list_event_pane_g5_ParamLimits

0x77a6,	// (0x000a9bc4) cntbar_detail_list_event_pane_g5

0x77be,	// (0x000a9bdc) cntbar_detail_list_event_pane_g6_ParamLimits

0x77be,	// (0x000a9bdc) cntbar_detail_list_event_pane_g6

0x7800,	// (0x000a9c1e) cntbar_detail_list_event_pane_t3_ParamLimits

0x7800,	// (0x000a9c1e) cntbar_detail_list_event_pane_t3

0x7812,	// (0x000a9c30) popup_notif_wgt_window_ParamLimits

0x7812,	// (0x000a9c30) popup_notif_wgt_window

0x782b,	// (0x000a9c49) popup_submenu_window_cp01_ParamLimits

0x782b,	// (0x000a9c49) popup_submenu_window_cp01

0xa083,	// (0x000ac4a1) bg_popup_window_pane_cp10

0xe8c7,	// (0x000b0ce5) listscroll_notif_wgt_pane

0xe8d9,	// (0x000b0cf7) list_notif_wgt_window

0xe8e2,	// (0x000b0d00) scroll_pane_cp033

0x783d,	// (0x000a9c5b) list_notif_wgt_row_pane_ParamLimits

0x783d,	// (0x000a9c5b) list_notif_wgt_row_pane

0xe8eb,	// (0x000b0d09) aid_size_list_notif_wgt_del

0xe8f8,	// (0x000b0d16) list_notif_wgt_row_pane_g1

0xe904,	// (0x000b0d22) list_notif_wgt_row_pane_g2

0xe913,	// (0x000b0d31) list_notif_wgt_row_pane_g3

0x0002,

0xfcc6,	// (0x000b20e4) list_notif_wgt_row_pane_g

0xe920,	// (0x000b0d3e) list_notif_wgt_row_pane_t1

0xe936,	// (0x000b0d54) list_notif_wgt_row_pane_t2

0xe948,	// (0x000b0d66) list_notif_wgt_row_pane_t3

0x0002,

0xfccd,	// (0x000b20eb) list_notif_wgt_row_pane_t

0xcfe9,	// (0x000af407) list_recal_day_event_pane_g1

0xe95a,	// (0x000b0d78) list_recal_day_event_pane_t1

0xe689,	// (0x000b0aa7) bg_button_pane_cp045

0x784d,	// (0x000a9c6b) cntbar_detail_btn_pane_t1

0xabb4,	// (0x000acfd2) main_callh_pane_ParamLimits

0xabb4,	// (0x000acfd2) main_callh_pane

0xe689,	// (0x000b0aa7) main_coverflow0_pane

0xe689,	// (0x000b0aa7) main_wgtman_pane

0x6970,	// (0x000a8d8e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6970,	// (0x000a8d8e) main_fs_bigclock_unlock_btn_pane

0x700b,	// (0x000a9429) bg_button_pane_cp16

0x701b,	// (0x000a9439) cell_tport_appsw_pane_g3

0x785b,	// (0x000a9c79) cf0_flow_pane_ParamLimits

0x785b,	// (0x000a9c79) cf0_flow_pane

0xe969,	// (0x000b0d87) listscroll_cf0_pane

0xe974,	// (0x000b0d92) main_cf0_pane_g1

0x7870,	// (0x000a9c8e) main_cf0_pane_t1_ParamLimits

0x7870,	// (0x000a9c8e) main_cf0_pane_t1

0x7887,	// (0x000a9ca5) main_cf0_pane_t2_ParamLimits

0x7887,	// (0x000a9ca5) main_cf0_pane_t2

0x0001,

0xfcd9,	// (0x000b20f7) main_cf0_pane_t_ParamLimits

0xfcd9,	// (0x000b20f7) main_cf0_pane_t

0xe986,	// (0x000b0da4) scroll_pane_cp11

0x789e,	// (0x000a9cbc) cf0_flow_pane_g1

0x78a6,	// (0x000a9cc4) cf0_flow_pane_g2

0x0001,

0xfcde,	// (0x000b20fc) cf0_flow_pane_g

0x78ae,	// (0x000a9ccc) cf0_flow_pane_t1

0xe689,	// (0x000b0aa7) main_call6_pane

0xe689,	// (0x000b0aa7) main_calllock_pane

0x78bc,	// (0x000a9cda) call6_btn_grp_pane_ParamLimits

0x78bc,	// (0x000a9cda) call6_btn_grp_pane

0x78d6,	// (0x000a9cf4) call6_pane_g1_ParamLimits

0x78d6,	// (0x000a9cf4) call6_pane_g1

0x78ec,	// (0x000a9d0a) popup_call6_1st_window_ParamLimits

0x78ec,	// (0x000a9d0a) popup_call6_1st_window

0x78fd,	// (0x000a9d1b) popup_call6_2nd_window_ParamLimits

0x78fd,	// (0x000a9d1b) popup_call6_2nd_window

0x790e,	// (0x000a9d2c) cell_call6_btn_pane_ParamLimits

0x790e,	// (0x000a9d2c) cell_call6_btn_pane

0xa083,	// (0x000ac4a1) bg_popup_call2_in_pane_cp03

0xe991,	// (0x000b0daf) popup_call6_1st_window_g1

0xe999,	// (0x000b0db7) popup_call6_1st_window_g2

0xe9a1,	// (0x000b0dbf) popup_call6_1st_window_g3

0x0002,

0xfce3,	// (0x000b2101) popup_call6_1st_window_g

0xe9a9,	// (0x000b0dc7) popup_call6_1st_window_t1

0xe9b8,	// (0x000b0dd6) popup_call6_1st_window_t2

0xe9c6,	// (0x000b0de4) popup_call6_1st_window_t3

0x0002,

0xfcea,	// (0x000b2108) popup_call6_1st_window_t

0xa083,	// (0x000ac4a1) bg_popup_call2_in_pane_cp04

0xe9d4,	// (0x000b0df2) popup_call6_2nd_window_g1

0xe9dc,	// (0x000b0dfa) popup_call6_2nd_window_g2

0xe9e4,	// (0x000b0e02) popup_call6_2nd_window_g3

0x0002,

0xfcf1,	// (0x000b210f) popup_call6_2nd_window_g

0xe9ec,	// (0x000b0e0a) popup_call6_2nd_window_t1

0x9056,	// (0x000ab474) bg_button_pane_cp15

0x99b8,	// (0x000abdd6) cell_call6_btn_pane_g1

0x99c1,	// (0x000abddf) cell_call6_btn_pane_t1

0x7922,	// (0x000a9d40) listscroll_wgtman_pane_ParamLimits

0x7922,	// (0x000a9d40) listscroll_wgtman_pane

0x7943,	// (0x000a9d61) wgtman_btn_pane_ParamLimits

0x7943,	// (0x000a9d61) wgtman_btn_pane

0xa8a7,	// (0x000accc5) aid_scroll_copy1

0xe9fb,	// (0x000b0e19) list_wgtman_pane

0x7986,	// (0x000a9da4) wgtman_btn_pane_g1_ParamLimits

0x7986,	// (0x000a9da4) wgtman_btn_pane_g1

0x79b2,	// (0x000a9dd0) wgtman_btn_pane_t1_ParamLimits

0x79b2,	// (0x000a9dd0) wgtman_btn_pane_t1

0xea05,	// (0x000b0e23) wgtman_btn_pane_t2_ParamLimits

0xea05,	// (0x000b0e23) wgtman_btn_pane_t2

0x0001,

0xfcf8,	// (0x000b2116) wgtman_btn_pane_t_ParamLimits

0xfcf8,	// (0x000b2116) wgtman_btn_pane_t

0x79ef,	// (0x000a9e0d) listrow_wgtman_pane_ParamLimits

0x79ef,	// (0x000a9e0d) listrow_wgtman_pane

0x7a02,	// (0x000a9e20) listrow_wgtman_pane_g1

0x7a0f,	// (0x000a9e2d) listrow_wgtman_pane_g2

0x0001,

0xfcfd,	// (0x000b211b) listrow_wgtman_pane_g

0x7a2d,	// (0x000a9e4b) listrow_wgtman_pane_t1

0x7a45,	// (0x000a9e63) listrow_wgtman_pane_t2

0x0001,

0xfd02,	// (0x000b2120) listrow_wgtman_pane_t

0x7a6b,	// (0x000a9e89) wait_bar_pane_cp09

0xea1c,	// (0x000b0e3a) main_calllock_btn_pane

0xea26,	// (0x000b0e44) main_calllock_pane_g1

0xe689,	// (0x000b0aa7) bg_button_pane_cp17

0xea2e,	// (0x000b0e4c) main_calllock_btn_pane_g1

0xea37,	// (0x000b0e55) main_calllock_btn_pane_t1

0xe689,	// (0x000b0aa7) main_dialer3_pane

0xe689,	// (0x000b0aa7) main_fmrd2_pane

0xa0b9,	// (0x000ac4d7) main_fs_bigclock_unlock_btn_pane_g1

0x7a85,	// (0x000a9ea3) main_fs_bigclock_unlock_btn_pane_t1

0x7a93,	// (0x000a9eb1) area_fmrd2_info_pane_ParamLimits

0x7a93,	// (0x000a9eb1) area_fmrd2_info_pane

0x7aa4,	// (0x000a9ec2) area_fmrd2_visual_pane_ParamLimits

0x7aa4,	// (0x000a9ec2) area_fmrd2_visual_pane

0x7ab2,	// (0x000a9ed0) fmrd2_indi_pane_ParamLimits

0x7ab2,	// (0x000a9ed0) fmrd2_indi_pane

0x7abf,	// (0x000a9edd) area_fmrd2_visual_pane_g1

0x7ac7,	// (0x000a9ee5) area_fmrd2_visual_pane_t1

0x7ad7,	// (0x000a9ef5) area_fmrd2_visual_pane_t2

0x7ae7,	// (0x000a9f05) area_fmrd2_visual_pane_t3

0x0002,

0xfd0c,	// (0x000b212a) area_fmrd2_visual_pane_t

0x7af7,	// (0x000a9f15) area_fmrd2_info_pane_g1

0x7aff,	// (0x000a9f1d) area_fmrd2_info_pane_t1

0x7b0f,	// (0x000a9f2d) area_fmrd2_info_pane_t2

0x7b1f,	// (0x000a9f3d) area_fmrd2_info_pane_t3

0x7b2f,	// (0x000a9f4d) area_fmrd2_info_pane_t4

0x0003,

0xfd13,	// (0x000b2131) area_fmrd2_info_pane_t

0x7b3d,	// (0x000a9f5b) fmrd2_indi_pane_t1

0x7b4d,	// (0x000a9f6b) fmrd2_indi_pane_t2

0x7b5d,	// (0x000a9f7b) fmrd2_indi_pane_t3

0x0002,

0xfd1c,	// (0x000b213a) fmrd2_indi_pane_t

0xdbe6,	// (0x000b0004) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdbe6,	// (0x000b0004) list_single_fs_bigclock_indicator_pane_g5

0xdc97,	// (0x000b00b5) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdc97,	// (0x000b00b5) list_single_fs_bigclock_indicator_pane_t5

0x7204,	// (0x000a9622) aid_cell_bcale_month_pane_ParamLimits

0x7204,	// (0x000a9622) aid_cell_bcale_month_pane

0x7222,	// (0x000a9640) bcale_month_pane_ParamLimits

0x7222,	// (0x000a9640) bcale_month_pane

0x7246,	// (0x000a9664) bcale_preview_pane_ParamLimits

0x7246,	// (0x000a9664) bcale_preview_pane

0xe7ea,	// (0x000b0c08) list_single_fs_bigclock_pane_t1_ParamLimits

0xe809,	// (0x000b0c27) list_single_fs_bigclock_pane_t2_ParamLimits

0xe809,	// (0x000b0c27) list_single_fs_bigclock_pane_t2

0x0001,

0xfc97,	// (0x000b20b5) list_single_fs_bigclock_pane_t_ParamLimits

0xfc97,	// (0x000b20b5) list_single_fs_bigclock_pane_t

0x7a7d,	// (0x000a9e9b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd07,	// (0x000b2125) main_fs_bigclock_unlock_btn_pane_g

0x7b6d,	// (0x000a9f8b) aid_dia3_key_size_ParamLimits

0x7b6d,	// (0x000a9f8b) aid_dia3_key_size

0x7b7c,	// (0x000a9f9a) aid_dia3_listrow_size_ParamLimits

0x7b7c,	// (0x000a9f9a) aid_dia3_listrow_size

0x7b91,	// (0x000a9faf) dia3_keypad_fun_pane_ParamLimits

0x7b91,	// (0x000a9faf) dia3_keypad_fun_pane

0x7bad,	// (0x000a9fcb) dia3_keypad_num_pane_ParamLimits

0x7bad,	// (0x000a9fcb) dia3_keypad_num_pane

0x7bc8,	// (0x000a9fe6) dia3_listscroll_pane_ParamLimits

0x7bc8,	// (0x000a9fe6) dia3_listscroll_pane

0x7bdb,	// (0x000a9ff9) dia3_numentry_pane_ParamLimits

0x7bdb,	// (0x000a9ff9) dia3_numentry_pane

0xea46,	// (0x000b0e64) dia3_list_pane

0xea51,	// (0x000b0e6f) scroll_pane_cp12

0xe689,	// (0x000b0aa7) bg_dia3_numentry_pane

0x7bf3,	// (0x000aa011) dia3_numentry_pane_t1

0x7c02,	// (0x000aa020) cell_dia3_key_num_pane

0x7c0a,	// (0x000aa028) cell_dia3_key0_fun_pane_ParamLimits

0x7c0a,	// (0x000aa028) cell_dia3_key0_fun_pane

0x7c1e,	// (0x000aa03c) cell_dia3_key1_fun_pane_ParamLimits

0x7c1e,	// (0x000aa03c) cell_dia3_key1_fun_pane

0x7c36,	// (0x000aa054) dia3_listrow_pane

0xd939,	// (0x000afd57) bg_dia3_numentry_pane_g1

0xe689,	// (0x000b0aa7) bg_button_pane_cp21

0xea5c,	// (0x000b0e7a) cell_dia3_key_num_pane_t1

0xea6a,	// (0x000b0e88) cell_dia3_key_num_pane_t2

0xea79,	// (0x000b0e97) cell_dia3_key_num_pane_t3

0xea88,	// (0x000b0ea6) cell_dia3_key_num_pane_t4

0x0003,

0xfd23,	// (0x000b2141) cell_dia3_key_num_pane_t

0xe689,	// (0x000b0aa7) bg_button_pane_cp19

0x7c48,	// (0x000aa066) cell_dia3_key0_fun_pane_g1

0xe689,	// (0x000b0aa7) bg_button_pane_cp20

0x7c50,	// (0x000aa06e) cell_dia3_key1_fun_pane_g1

0x7c58,	// (0x000aa076) area_left_week_number_pane

0x7c64,	// (0x000aa082) area_top_day_name_pane

0x7c77,	// (0x000aa095) frame_month_view_pane

0xea97,	// (0x000b0eb5) grid_month_view_pane

0x7c8a,	// (0x000aa0a8) cell_top_day_name_pane_ParamLimits

0x7c8a,	// (0x000aa0a8) cell_top_day_name_pane

0x7cb7,	// (0x000aa0d5) cell_area_left_week_number_pane_ParamLimits

0x7cb7,	// (0x000aa0d5) cell_area_left_week_number_pane

0x7ccb,	// (0x000aa0e9) cell_month_view_pane_ParamLimits

0x7ccb,	// (0x000aa0e9) cell_month_view_pane

0xeaa5,	// (0x000b0ec3) frm_month_g1

0x7cf8,	// (0x000aa116) frm_month_g2

0x7d0b,	// (0x000aa129) frm_month_g3

0x7d1e,	// (0x000aa13c) frm_month_g4

0x7d31,	// (0x000aa14f) frm_month_g5

0x7d44,	// (0x000aa162) frm_month_g6

0x7d57,	// (0x000aa175) frm_month_g7

0xeab2,	// (0x000b0ed0) frm_month_g8

0x7d6a,	// (0x000aa188) frm_month_g9

0x7d7a,	// (0x000aa198) frm_month_g10

0x7d8a,	// (0x000aa1a8) frm_month_g11

0x7d9a,	// (0x000aa1b8) frm_month_g12

0x7dac,	// (0x000aa1ca) frm_month_g13

0x7dbe,	// (0x000aa1dc) frm_month_g14

0x7dd2,	// (0x000aa1f0) frm_month_g15

0x7de6,	// (0x000aa204) frm_month_g16

0x000f,

0xfd2c,	// (0x000b214a) frm_month_g

0xeabf,	// (0x000b0edd) cell_top_day_name_pane_t1

0x7dfa,	// (0x000aa218) cell_area_left_week_number_pane_g1

0x7e06,	// (0x000aa224) cell_area_left_week_number_pane_t1

0x9e5f,	// (0x000ac27d) cell_month_view_pane_g1

0x7e19,	// (0x000aa237) cell_month_view_pane_t1

0xe689,	// (0x000b0aa7) main_fps_pane

0xdf21,	// (0x000b033f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdf21,	// (0x000b033f) cmail_ddmenu_btn02_pane_cp1

0xdf3d,	// (0x000b035b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdf3d,	// (0x000b035b) cmail_ddmenu_btn02_pane_cp2

0x74ef,	// (0x000a990d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x74ef,	// (0x000a990d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc4f,	// (0x000b206d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc4f,	// (0x000b206d) cmail_ddmenu_btn02_pane_g

0x750d,	// (0x000a992b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x750d,	// (0x000a992b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc54,	// (0x000b2072) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc54,	// (0x000b2072) cmail_ddmenu_btn02_pane_t

0x7e2c,	// (0x000aa24a) fps_text_pane_ParamLimits

0x7e2c,	// (0x000aa24a) fps_text_pane

0x7e43,	// (0x000aa261) main_fps_pane_g1_ParamLimits

0x7e43,	// (0x000aa261) main_fps_pane_g1

0x7e5d,	// (0x000aa27b) wait_bar_pane_cp010_ParamLimits

0x7e5d,	// (0x000aa27b) wait_bar_pane_cp010

0x7e6e,	// (0x000aa28c) fps_text_pane_t1_ParamLimits

0x7e6e,	// (0x000aa28c) fps_text_pane_t1

0xcd07,	// (0x000af125) cam4_image_uncrop_pane_g1

0xcd10,	// (0x000af12e) cam4_image_uncrop_pane_g2

0x4c06,	// (0x000a7024) cam4_image_uncrop_pane_g3

0x4c0f,	// (0x000a702d) cam4_image_uncrop_pane_g4

0x0003,

0xf848,	// (0x000b1c66) cam4_image_uncrop_pane_g

0x7c36,	// (0x000aa054) dia3_listrow_pane_ParamLimits

0xe689,	// (0x000b0aa7) main_phob2_pane

0x6fdc,	// (0x000a93fa) cell_tport_appsw_pane_cp02_ParamLimits

0x6fdc,	// (0x000a93fa) cell_tport_appsw_pane_cp02

0x6ff0,	// (0x000a940e) cell_tport_appsw_pane_cp03_ParamLimits

0x6ff0,	// (0x000a940e) cell_tport_appsw_pane_cp03

0xe689,	// (0x000b0aa7) phob2_contact_card_pane

0xe689,	// (0x000b0aa7) phob2_listscroll_pane

0xead2,	// (0x000b0ef0) phob2_list_pane

0xeada,	// (0x000b0ef8) scroll_pane_cp034

0x7e86,	// (0x000aa2a4) phob2_cc_data_pane_ParamLimits

0x7e86,	// (0x000aa2a4) phob2_cc_data_pane

0x7ea5,	// (0x000aa2c3) phob2_cc_listscroll_pane_ParamLimits

0x7ea5,	// (0x000aa2c3) phob2_cc_listscroll_pane

0x79ef,	// (0x000a9e0d) list_double_large_graphic_phob2_pane_ParamLimits

0x79ef,	// (0x000a9e0d) list_double_large_graphic_phob2_pane

0x7ec3,	// (0x000aa2e1) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x7ec3,	// (0x000aa2e1) list_double_large_graphic_phob2_pane_g1

0x7ed0,	// (0x000aa2ee) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x7ed0,	// (0x000aa2ee) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd4d,	// (0x000b216b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd4d,	// (0x000b216b) list_double_large_graphic_phob2_pane_g

0x7ef6,	// (0x000aa314) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x7ef6,	// (0x000aa314) list_double_large_graphic_phob2_pane_t1

0x7f0b,	// (0x000aa329) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x7f0b,	// (0x000aa329) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd56,	// (0x000b2174) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd56,	// (0x000b2174) list_double_large_graphic_phob2_pane_t

0xe689,	// (0x000b0aa7) list_highlight_pane_cp024

0xeae2,	// (0x000b0f00) phob2_cc_button_pane

0x7f20,	// (0x000aa33e) phob2_cc_data_pane_g1_ParamLimits

0x7f20,	// (0x000aa33e) phob2_cc_data_pane_g1

0x7f37,	// (0x000aa355) phob2_cc_data_pane_g2_ParamLimits

0x7f37,	// (0x000aa355) phob2_cc_data_pane_g2

0x0001,

0xfd5b,	// (0x000b2179) phob2_cc_data_pane_g_ParamLimits

0xfd5b,	// (0x000b2179) phob2_cc_data_pane_g

0x7f49,	// (0x000aa367) phob2_cc_data_pane_t1_ParamLimits

0x7f49,	// (0x000aa367) phob2_cc_data_pane_t1

0x7f61,	// (0x000aa37f) phob2_cc_data_pane_t2_ParamLimits

0x7f61,	// (0x000aa37f) phob2_cc_data_pane_t2

0x7f79,	// (0x000aa397) phob2_cc_data_pane_t3_ParamLimits

0x7f79,	// (0x000aa397) phob2_cc_data_pane_t3

0x0002,

0xfd60,	// (0x000b217e) phob2_cc_data_pane_t_ParamLimits

0xfd60,	// (0x000b217e) phob2_cc_data_pane_t

0xeaea,	// (0x000b0f08) phob2_cc_list_pane_ParamLimits

0xeaea,	// (0x000b0f08) phob2_cc_list_pane

0xd080,	// (0x000af49e) scroll_pane_cp035_ParamLimits

0xd080,	// (0x000af49e) scroll_pane_cp035

0xe6ea,	// (0x000b0b08) bg_button_pane_cp033

0xeaf6,	// (0x000b0f14) phob2_cc_button_pane_g1

0xeb02,	// (0x000b0f20) phob2_cc_button_pane_t1

0xeb17,	// (0x000b0f35) phob2_cc_button_pane_t2

0x0001,

0xfd67,	// (0x000b2185) phob2_cc_button_pane_t

0x7f91,	// (0x000aa3af) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x7f91,	// (0x000aa3af) list_double_large_graphic_phob2_cc_pane

0x7fc3,	// (0x000aa3e1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x7fc3,	// (0x000aa3e1) list_double_large_graphic_phob2_cc_pane_g1

0x7fcf,	// (0x000aa3ed) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x7fcf,	// (0x000aa3ed) list_double_large_graphic_phob2_cc_pane_g2

0x7fdb,	// (0x000aa3f9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x7fdb,	// (0x000aa3f9) list_double_large_graphic_phob2_cc_pane_g3

0x7fe7,	// (0x000aa405) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x7fe7,	// (0x000aa405) list_double_large_graphic_phob2_cc_pane_g4

0x7ff3,	// (0x000aa411) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x7ff3,	// (0x000aa411) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfd6c,	// (0x000b218a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfd6c,	// (0x000b218a) list_double_large_graphic_phob2_cc_pane_g

0x7fff,	// (0x000aa41d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x7fff,	// (0x000aa41d) list_double_large_graphic_phob2_cc_pane_t1

0x8028,	// (0x000aa446) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8028,	// (0x000aa446) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfd77,	// (0x000b2195) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfd77,	// (0x000b2195) list_double_large_graphic_phob2_cc_pane_t

0xeb29,	// (0x000b0f47) list_highlight_pane_cp025_ParamLimits

0xeb29,	// (0x000b0f47) list_highlight_pane_cp025

0xe6ea,	// (0x000b0b08) bg_button_pane_cp033_ParamLimits

0xeaf6,	// (0x000b0f14) phob2_cc_button_pane_g1_ParamLimits

0xeb02,	// (0x000b0f20) phob2_cc_button_pane_t1_ParamLimits

0xeb17,	// (0x000b0f35) phob2_cc_button_pane_t2_ParamLimits

0xfd67,	// (0x000b2185) phob2_cc_button_pane_t_ParamLimits

0x0871,	// (0x000a2c8f) popup_wgtman_window

0xcea3,	// (0x000af2c1) scroll_pane_cp038

0x7968,	// (0x000a9d86) wgtman_btn_pane_cp_01_ParamLimits

0x7968,	// (0x000a9d86) wgtman_btn_pane_cp_01

0xeb37,	// (0x000b0f55) wgtman_content_pane

0xeb40,	// (0x000b0f5e) wgtman_heading_pane

0xe689,	// (0x000b0aa7) bg_heading_pane_cp02

0xeb49,	// (0x000b0f67) wgtman_heading_pane_g1

0xeb51,	// (0x000b0f6f) wgtman_heading_pane_t1

0xeb5f,	// (0x000b0f7d) scroll_pane_cp036

0xeb67,	// (0x000b0f85) wgtman_list_pane

0xdda0,	// (0x000b01be) wgtman_list_pane_t1_ParamLimits

0xdda0,	// (0x000b01be) wgtman_list_pane_t1

0x97ed,	// (0x000abc0b) cam4_grid_pane

0x5871,	// (0x000a7c8f) bg_button_pane_cp015_ParamLimits

0x5882,	// (0x000a7ca0) bg_button_pane_cp016_ParamLimits

0x588e,	// (0x000a7cac) bg_button_pane_cp017_ParamLimits

0x58e2,	// (0x000a7d00) popup_vitu2_query_window_g3_ParamLimits

0x58e2,	// (0x000a7d00) popup_vitu2_query_window_g3

0x5983,	// (0x000a7da1) popup_vitu2_query_window_t6_ParamLimits

0x5983,	// (0x000a7da1) popup_vitu2_query_window_t6

0x59ae,	// (0x000a7dcc) popup_vitu2_query_window_t7_ParamLimits

0x59ae,	// (0x000a7dcc) popup_vitu2_query_window_t7

0xcd07,	// (0x000af125) cam4_grid_pane_g1

0xcd10,	// (0x000af12e) cam4_grid_pane_g2

0xeb6f,	// (0x000b0f8d) cam4_grid_pane_g3

0xeb78,	// (0x000b0f96) cam4_grid_pane_g4

0x0003,

0xfd7c,	// (0x000b219a) cam4_grid_pane_g

0x1427,	// (0x000a3845) aid_placing_vt_slider_lsc_ParamLimits

0x1724,	// (0x000a3b42) vidtel_button_pane_ParamLimits

0x1724,	// (0x000a3b42) vidtel_button_pane

0xe689,	// (0x000b0aa7) bg_button_pane_cp034

0xeb83,	// (0x000b0fa1) vidtel_button_pane_g1

0xeb8b,	// (0x000b0fa9) vidtel_button_pane_t1

0xcfc7,	// (0x000af3e5) aid_size_vtel_slider_touch

0xd080,	// (0x000af49e) scroll_pane_cp039

0x6664,	// (0x000a8a82) ncim_query_button_pane_cp01_ParamLimits

0x6683,	// (0x000a8aa1) ncimui_query_pane_g1_ParamLimits

0xe6ea,	// (0x000b0b08) input_focus_pane_cp012_ParamLimits

0xd97f,	// (0x000afd9d) ncim_query_entry_pane_t1_ParamLimits

0xd080,	// (0x000af49e) scroll_pane_cp039_ParamLimits

0xa97e,	// (0x000acd9c) navi_pane_bcale_mc_g1

0xa986,	// (0x000acda4) navi_pane_bcale_mc_t1

0xdf71,	// (0x000b038f) main_sp_fs_email_pane_g1

0xdf7d,	// (0x000b039b) main_sp_fs_email_pane_g2

0x0001,

0xfb84,	// (0x000b1fa2) main_sp_fs_email_pane_g

0xe3ca,	// (0x000b07e8) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe3ca,	// (0x000b07e8) list_single_cale_mrui_row_pane_g3

0x752d,	// (0x000a994b) list_single_recal_day_pane_g5_event_pane

0xe5a9,	// (0x000b09c7) list_single_recal_day_pane_g7

0xeba1,	// (0x000b0fbf) list_recal_day_event_pane_cp01

0xebaa,	// (0x000b0fc8) list_recal_vselct_arw_lo_pane_cp01

0xebb2,	// (0x000b0fd0) list_recal_vselct_arw_up_pane_cp01

0xebba,	// (0x000b0fd8) list_recal_vselct_pane_cp01

0xcfe9,	// (0x000af407) list_recal_day_event_pane_cp01_g1

0xe65f,	// (0x000b0a7d) list_recal_day_event_pane_cp01_t1

0xe5b1,	// (0x000b09cf) list_single_recal_day_pane_t1_ParamLimits

0xe5c3,	// (0x000b09e1) list_single_recal_day_pane_t2_ParamLimits

0x0355,	// (0x000a2773) list_single_recal_day_pane_t_ParamLimits

0x9de4,	// (0x000ac202) bg_notes_pane_ParamLimits

0x9eaf,	// (0x000ac2cd) list_notes_pane_ParamLimits

0x0a78,	// (0x000a2e96) scroll_pane_cp06_ParamLimits

0x9ed1,	// (0x000ac2ef) main_notes_pane_ParamLimits

0xe6ea,	// (0x000b0b08) main_welc_pane

0x807e,	// (0x000aa49c) main_welc_body_pane_ParamLimits

0x807e,	// (0x000aa49c) main_welc_body_pane

0x809b,	// (0x000aa4b9) main_welc_opti_pane_ParamLimits

0x809b,	// (0x000aa4b9) main_welc_opti_pane

0x8114,	// (0x000aa532) main_welc_pane_t1_ParamLimits

0x8114,	// (0x000aa532) main_welc_pane_t1

0x830c,	// (0x000aa72a) main_welc_body_row_pane_ParamLimits

0x830c,	// (0x000aa72a) main_welc_body_row_pane

0x9e51,	// (0x000ac26f) main_welc_opti_row_pane_ParamLimits

0x9e51,	// (0x000ac26f) main_welc_opti_row_pane

0xebd4,	// (0x000b0ff2) main_welc_opti_row_pane_g1

0x8321,	// (0x000aa73f) main_welc_opti_row_pane_t1

0xebdc,	// (0x000b0ffa) main_welc_body_row_pane_t1

0xe8d1,	// (0x000b0cef) popup_notif_wgt_heading_pane

0xe8eb,	// (0x000b0d09) aid_size_list_notif_wgt_del_ParamLimits

0xe8f8,	// (0x000b0d16) list_notif_wgt_row_pane_g1_ParamLimits

0xe904,	// (0x000b0d22) list_notif_wgt_row_pane_g2_ParamLimits

0xe913,	// (0x000b0d31) list_notif_wgt_row_pane_g3_ParamLimits

0xfcc6,	// (0x000b20e4) list_notif_wgt_row_pane_g_ParamLimits

0xe920,	// (0x000b0d3e) list_notif_wgt_row_pane_t1_ParamLimits

0xe936,	// (0x000b0d54) list_notif_wgt_row_pane_t2_ParamLimits

0xe948,	// (0x000b0d66) list_notif_wgt_row_pane_t3_ParamLimits

0xfccd,	// (0x000b20eb) list_notif_wgt_row_pane_t_ParamLimits

0x7a02,	// (0x000a9e20) listrow_wgtman_pane_g1_ParamLimits

0x7a0f,	// (0x000a9e2d) listrow_wgtman_pane_g2_ParamLimits

0xfcfd,	// (0x000b211b) listrow_wgtman_pane_g_ParamLimits

0x7a2d,	// (0x000a9e4b) listrow_wgtman_pane_t1_ParamLimits

0x7a45,	// (0x000a9e63) listrow_wgtman_pane_t2_ParamLimits

0xfd02,	// (0x000b2120) listrow_wgtman_pane_t_ParamLimits

0x7a6b,	// (0x000a9e89) wait_bar_pane_cp09_ParamLimits

0xe689,	// (0x000b0aa7) bg_popup_heading_pane_cp02

0xebeb,	// (0x000b1009) popup_notif_wgt_heading_pane_g1

0xebf3,	// (0x000b1011) popup_notif_wgt_heading_pane_t1

0xe689,	// (0x000b0aa7) main_vids_pane

0xe689,	// (0x000b0aa7) vids_listscroll_pane

0x8330,	// (0x000aa74e) scroll_pane_cp040

0xe689,	// (0x000b0aa7) vids_list_pane

0x833b,	// (0x000aa759) vids_list_double_pane_ParamLimits

0x833b,	// (0x000aa759) vids_list_double_pane

0x834c,	// (0x000aa76a) vids_list_double_pane_g1

0x8355,	// (0x000aa773) vids_list_double_pane_t1

0x8364,	// (0x000aa782) vids_list_double_pane_t2

0x0001,

0xfd9b,	// (0x000b21b9) vids_list_double_pane_t

0x9048,	// (0x000ab466) main_ncimui_pane_ParamLimits

0x649a,	// (0x000a88b8) main_ncimui_pane_g1_ParamLimits

0x64a6,	// (0x000a88c4) main_ncimui_pane_g2_ParamLimits

0x64a6,	// (0x000a88c4) main_ncimui_pane_g2

0x0001,

0xfae9,	// (0x000b1f07) main_ncimui_pane_g_ParamLimits

0xfae9,	// (0x000b1f07) main_ncimui_pane_g

0x80b6,	// (0x000aa4d4) main_welc_pane_g1_ParamLimits

0x80b6,	// (0x000aa4d4) main_welc_pane_g1

0x80cb,	// (0x000aa4e9) main_welc_pane_g2_ParamLimits

0x80cb,	// (0x000aa4e9) main_welc_pane_g2

0x0003,

0xfd85,	// (0x000b21a3) main_welc_pane_g_ParamLimits

0xfd85,	// (0x000b21a3) main_welc_pane_g

0x9de4,	// (0x000ac202) listscroll_mce_pane_ParamLimits

0xaad3,	// (0x000acef1) wait_bar_pane_cp10

0xbfed,	// (0x000ae40b) main_cale_day_pane_ParamLimits

0xbfed,	// (0x000ae40b) main_cale_week_pane_ParamLimits

0x9de4,	// (0x000ac202) main_messa_pane_ParamLimits

0x4018,	// (0x000a6436) main_clock2_btn_pane_ParamLimits

0x4018,	// (0x000a6436) main_clock2_btn_pane

0xc83e,	// (0x000aec5c) main_clock2_btn_pane_cp01_ParamLimits

0xc83e,	// (0x000aec5c) main_clock2_btn_pane_cp01

0xe356,	// (0x000b0774) list_cale_mrui_pane_ParamLimits

0xe97e,	// (0x000b0d9c) main_cf0_pane_g2

0x0001,

0xfcd4,	// (0x000b20f2) main_cf0_pane_g

0x7c58,	// (0x000aa076) area_left_week_number_pane_ParamLimits

0x7c64,	// (0x000aa082) area_top_day_name_pane_ParamLimits

0x7c77,	// (0x000aa095) frame_month_view_pane_ParamLimits

0xea97,	// (0x000b0eb5) grid_month_view_pane_ParamLimits

0xeaa5,	// (0x000b0ec3) frm_month_g1_ParamLimits

0x7cf8,	// (0x000aa116) frm_month_g2_ParamLimits

0x7d0b,	// (0x000aa129) frm_month_g3_ParamLimits

0x7d1e,	// (0x000aa13c) frm_month_g4_ParamLimits

0x7d31,	// (0x000aa14f) frm_month_g5_ParamLimits

0x7d44,	// (0x000aa162) frm_month_g6_ParamLimits

0x7d57,	// (0x000aa175) frm_month_g7_ParamLimits

0xeab2,	// (0x000b0ed0) frm_month_g8_ParamLimits

0x7d6a,	// (0x000aa188) frm_month_g9_ParamLimits

0x7d7a,	// (0x000aa198) frm_month_g10_ParamLimits

0x7d8a,	// (0x000aa1a8) frm_month_g11_ParamLimits

0x7d9a,	// (0x000aa1b8) frm_month_g12_ParamLimits

0x7dac,	// (0x000aa1ca) frm_month_g13_ParamLimits

0x7dbe,	// (0x000aa1dc) frm_month_g14_ParamLimits

0x7dd2,	// (0x000aa1f0) frm_month_g15_ParamLimits

0x7de6,	// (0x000aa204) frm_month_g16_ParamLimits

0xfd2c,	// (0x000b214a) frm_month_g_ParamLimits

0xeabf,	// (0x000b0edd) cell_top_day_name_pane_t1_ParamLimits

0x7dfa,	// (0x000aa218) cell_area_left_week_number_pane_g1_ParamLimits

0x7e06,	// (0x000aa224) cell_area_left_week_number_pane_t1_ParamLimits

0x9e5f,	// (0x000ac27d) cell_month_view_pane_g1_ParamLimits

0x7e19,	// (0x000aa237) cell_month_view_pane_t1_ParamLimits

0x9ddc,	// (0x000ac1fa) main_clock2_btn_pane_g1

0xec01,	// (0x000b101f) main_clock2_btn_pane_t1

0xe6ea,	// (0x000b0b08) listscroll_cmail_pane_ParamLimits

0xdf71,	// (0x000b038f) main_sp_fs_email_pane_g1_ParamLimits

0xdf7d,	// (0x000b039b) main_sp_fs_email_pane_g2_ParamLimits

0xfb84,	// (0x000b1fa2) main_sp_fs_email_pane_g_ParamLimits

0xe519,	// (0x000b0937) list_recal_day_pane_ParamLimits

0xe52a,	// (0x000b0948) mian_recal_day_pane_t1

0x6e7f,	// (0x000a929d) list_single_dyc_row_text_pane_t4_ParamLimits

0x6e7f,	// (0x000a929d) list_single_dyc_row_text_pane_t4

0x6ec8,	// (0x000a92e6) list_single_dyc_row_text_pane_t5_ParamLimits

0x6ec8,	// (0x000a92e6) list_single_dyc_row_text_pane_t5

0xe01f,	// (0x000b043d) list_single_dyc_row_text_pane_t6_ParamLimits

0xe01f,	// (0x000b043d) list_single_dyc_row_text_pane_t6

0x21a8,	// (0x000a45c6) aid_mgn_list_cale_time_pane

0x9048,	// (0x000ab466) main_gallery2_pane_ParamLimits

0xc854,	// (0x000aec72) main_clock2_pane_cp01_t1

0xc862,	// (0x000aec80) main_clock2_pane_cp01_t3

0x0001,

0xf71f,	// (0x000b1b3d) main_clock2_pane_cp01_t

0x0e14,	// (0x000a3232) cale_week_scroll_pane_g16_ParamLimits

0x0e14,	// (0x000a3232) cale_week_scroll_pane_g16

0xa083,	// (0x000ac4a1) vorec_slider_pane

0xeb8b,	// (0x000b0fa9) vidtel_button_pane_t1_ParamLimits

0x7593,	// (0x000a99b1) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7593,	// (0x000a99b1) main_fs_bigclock_clock_pane_g2_ParamLimits

0x75a4,	// (0x000a99c2) main_fs_bigclock_clock_pane_g3_ParamLimits

0x75a4,	// (0x000a99c2) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfc82,	// (0x000b20a0) main_fs_bigclock_clock_pane_g_ParamLimits

0x75b7,	// (0x000a99d5) main_fs_bigclock_clock_pane_t1_ParamLimits

0x75cd,	// (0x000a99eb) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfc8b,	// (0x000b20a9) main_fs_bigclock_clock_pane_t_ParamLimits

0x38f4,	// (0x000a5d12) main_mup3_lyrics_pane_ParamLimits

0x38f4,	// (0x000a5d12) main_mup3_lyrics_pane

0x838c,	// (0x000aa7aa) main_mup3_lyrics_pane_t1_ParamLimits

0x838c,	// (0x000aa7aa) main_mup3_lyrics_pane_t1

0x953f,	// (0x000ab95d) aid_main_mp4_pane_t1_area

0x9549,	// (0x000ab967) aid_main_mp4_pane_t2_area

0x95f5,	// (0x000aba13) main_mp4_pane_g7_ParamLimits

0x95f5,	// (0x000aba13) main_mp4_pane_g7

0x9601,	// (0x000aba1f) main_mp4_pane_g8_ParamLimits

0x9601,	// (0x000aba1f) main_mp4_pane_g8

0x49d7,	// (0x000a6df5) aid_call6_pane_g1_size

0x7fac,	// (0x000aa3ca) list_double_large_graphic_phob2_other_pane_ParamLimits

0x7fac,	// (0x000aa3ca) list_double_large_graphic_phob2_other_pane

0xa8af,	// (0x000acccd) list_double_large_graphic_phob2_other_pane_g1

0xe689,	// (0x000b0aa7) list_highlight_pane_cp026

0xe6ea,	// (0x000b0b08) main_welc_pane_ParamLimits

0x6cbe,	// (0x000a90dc) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x6cbe,	// (0x000a90dc) main_sp_fs_ctrlbar_pane_g3

0x6cd8,	// (0x000a90f6) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x6cd8,	// (0x000a90f6) main_sp_fs_ctrlbar_pane_g4

0x6d0c,	// (0x000a912a) toolbar2_fixed_button_pane_cp01

0x6d17,	// (0x000a9135) toolbar2_fixed_button_pane_cp02

0x6d24,	// (0x000a9142) toolbar2_fixed_button_pane_cp03

0x8064,	// (0x000aa482) list_welc_entry_pane_ParamLimits

0x8064,	// (0x000aa482) list_welc_entry_pane

0x80e0,	// (0x000aa4fe) main_welc_pane_g3_ParamLimits

0x80e0,	// (0x000aa4fe) main_welc_pane_g3

0x8132,	// (0x000aa550) main_welc_pane_t2_ParamLimits

0x8132,	// (0x000aa550) main_welc_pane_t2

0x814d,	// (0x000aa56b) main_welc_pane_t3_ParamLimits

0x814d,	// (0x000aa56b) main_welc_pane_t3

0x0005,

0xfd8e,	// (0x000b21ac) main_welc_pane_t_ParamLimits

0xfd8e,	// (0x000b21ac) main_welc_pane_t

0x827d,	// (0x000aa69b) welc_button_pane_ParamLimits

0x827d,	// (0x000aa69b) welc_button_pane

0x82f7,	// (0x000aa715) welc_service_logo_pane_ParamLimits

0x82f7,	// (0x000aa715) welc_service_logo_pane

0x83a8,	// (0x000aa7c6) list_single_welc_entry_pane_ParamLimits

0x83a8,	// (0x000aa7c6) list_single_welc_entry_pane

0x83b9,	// (0x000aa7d7) list_single_welc_entry_pane_g1

0x83c1,	// (0x000aa7df) list_single_welc_entry_pane_t1

0x83cf,	// (0x000aa7ed) list_single_welc_entry_pane_t2

0x0001,

0xfda0,	// (0x000b21be) list_single_welc_entry_pane_t

0xe689,	// (0x000b0aa7) bg_button_pane_cp035

0x83dd,	// (0x000aa7fb) welc_button_pane_t1

0xec0f,	// (0x000b102d) welc_service_logo_pane_g1

0xec18,	// (0x000b1036) welc_service_logo_pane_g2

0x0001,

0xfda5,	// (0x000b21c3) welc_service_logo_pane_g

0x9056,	// (0x000ab474) main_int_radio_pane

0xd81d,	// (0x000afc3b) list_single_fs_dyc_pane_g1

0x7edc,	// (0x000aa2fa) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x7edc,	// (0x000aa2fa) list_double_large_graphic_phob2_pane_g3

0x7ee8,	// (0x000aa306) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x7ee8,	// (0x000aa306) list_double_large_graphic_phob2_pane_g4

0x83eb,	// (0x000aa809) main_int_radio1_pane_ParamLimits

0x83eb,	// (0x000aa809) main_int_radio1_pane

0xec21,	// (0x000b103f) find_pane_cp02

0x8408,	// (0x000aa826) input_focus_pane_cp12_ParamLimits

0x8408,	// (0x000aa826) input_focus_pane_cp12

0x8418,	// (0x000aa836) input_focus_pane_cp13_ParamLimits

0x8418,	// (0x000aa836) input_focus_pane_cp13

0x842c,	// (0x000aa84a) input_focus_pane_cp14_ParamLimits

0x842c,	// (0x000aa84a) input_focus_pane_cp14

0xec2a,	// (0x000b1048) int_radio1_listscroll_pane

0x8440,	// (0x000aa85e) main_int_radio1_pane_g1_ParamLimits

0x8440,	// (0x000aa85e) main_int_radio1_pane_g1

0x8458,	// (0x000aa876) main_int_radio1_pane_t1_ParamLimits

0x8458,	// (0x000aa876) main_int_radio1_pane_t1

0x8473,	// (0x000aa891) main_int_radio1_pane_t2_ParamLimits

0x8473,	// (0x000aa891) main_int_radio1_pane_t2

0x848e,	// (0x000aa8ac) main_int_radio1_pane_t3_ParamLimits

0x848e,	// (0x000aa8ac) main_int_radio1_pane_t3

0x84a9,	// (0x000aa8c7) main_int_radio1_pane_t4_ParamLimits

0x84a9,	// (0x000aa8c7) main_int_radio1_pane_t4

0xec34,	// (0x000b1052) main_int_radio1_pane_t5_ParamLimits

0xec34,	// (0x000b1052) main_int_radio1_pane_t5

0x84bb,	// (0x000aa8d9) main_int_radio1_pane_t6_ParamLimits

0x84bb,	// (0x000aa8d9) main_int_radio1_pane_t6

0x84d0,	// (0x000aa8ee) main_int_radio1_pane_t7_ParamLimits

0x84d0,	// (0x000aa8ee) main_int_radio1_pane_t7

0x84e5,	// (0x000aa903) main_int_radio1_pane_t8_ParamLimits

0x84e5,	// (0x000aa903) main_int_radio1_pane_t8

0x8504,	// (0x000aa922) main_int_radio1_pane_t9_ParamLimits

0x8504,	// (0x000aa922) main_int_radio1_pane_t9

0x8516,	// (0x000aa934) main_int_radio1_pane_t10_ParamLimits

0x8516,	// (0x000aa934) main_int_radio1_pane_t10

0x853c,	// (0x000aa95a) main_int_radio1_pane_t11_ParamLimits

0x853c,	// (0x000aa95a) main_int_radio1_pane_t11

0x8562,	// (0x000aa980) main_int_radio1_pane_t12_ParamLimits

0x8562,	// (0x000aa980) main_int_radio1_pane_t12

0x000b,

0xfdaa,	// (0x000b21c8) main_int_radio1_pane_t_ParamLimits

0xfdaa,	// (0x000b21c8) main_int_radio1_pane_t

0xec46,	// (0x000b1064) int_radio_list_pane

0xeada,	// (0x000b0ef8) scroll_pane_cp037

0xec4e,	// (0x000b106c) list_double_large_graphic_int_radio_pane_ParamLimits

0xec4e,	// (0x000b106c) list_double_large_graphic_int_radio_pane

0xec67,	// (0x000b1085) list_double_large_graphic_int_radio_pane_g1

0xe66d,	// (0x000b0a8b) list_double_large_graphic_int_radio_pane_t1

0xe67b,	// (0x000b0a99) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfdc3,	// (0x000b21e1) list_double_large_graphic_int_radio_pane_t

0xe689,	// (0x000b0aa7) list_highlight_pane_cp027

0xebc4,	// (0x000b0fe2) main_button_pane_4

0x80f3,	// (0x000aa511) main_welc_pane_g4_ParamLimits

0x80f3,	// (0x000aa511) main_welc_pane_g4

0x8166,	// (0x000aa584) main_welc_pane_t4_ParamLimits

0x8166,	// (0x000aa584) main_welc_pane_t4

0x817d,	// (0x000aa59b) main_welc_pane_t5_ParamLimits

0x817d,	// (0x000aa59b) main_welc_pane_t5

0x81ba,	// (0x000aa5d8) main_welc_pane_t6_ParamLimits

0x81ba,	// (0x000aa5d8) main_welc_pane_t6

0x8294,	// (0x000aa6b2) welc_button_pane_2_ParamLimits

0x8294,	// (0x000aa6b2) welc_button_pane_2

0x82b0,	// (0x000aa6ce) welc_button_pane_3_ParamLimits

0x82b0,	// (0x000aa6ce) welc_button_pane_3

0xebcc,	// (0x000b0fea) welc_button_pane_4

0x82cf,	// (0x000aa6ed) welc_button_pane_5_ParamLimits

0x82cf,	// (0x000aa6ed) welc_button_pane_5

0x063a,	// (0x000a2a58) main_popup_welc_pane

0xec7f,	// (0x000b109d) main_welc_sk_g3

0xec89,	// (0x000b10a7) main_welc_sk_g4

0xec93,	// (0x000b10b1) main_welc_sk_t3

0xeca3,	// (0x000b10c1) main_welc_sk_t4

0xecb3,	// (0x000b10d1) popup_welc_pane_t4

0xecc1,	// (0x000b10df) popup_welc_pane_t5

0xeccf,	// (0x000b10ed) popup_welc_pane_t6

0x9056,	// (0x000ab474) main_acti_pane

0xe689,	// (0x000b0aa7) main_sso_pane

0x8574,	// (0x000aa992) sso_body_pane_ParamLimits

0x8574,	// (0x000aa992) sso_body_pane

0x8588,	// (0x000aa9a6) sso_logo_pane_ParamLimits

0x8588,	// (0x000aa9a6) sso_logo_pane

0x85b8,	// (0x000aa9d6) sso_sk_pane_ParamLimits

0x85b8,	// (0x000aa9d6) sso_sk_pane

0xa0b9,	// (0x000ac4d7) main_sso_logo_pane_g1

0x85ca,	// (0x000aa9e8) sso_sk_pane_t1_ParamLimits

0x85ca,	// (0x000aa9e8) sso_sk_pane_t1

0x85e4,	// (0x000aaa02) sso_sk_pane_t2_ParamLimits

0x85e4,	// (0x000aaa02) sso_sk_pane_t2

0x0001,

0xfdc8,	// (0x000b21e6) sso_sk_pane_t_ParamLimits

0xfdc8,	// (0x000b21e6) sso_sk_pane_t

0xed0d,	// (0x000b112b) aid_sso_gap

0xed16,	// (0x000b1134) aid_sso_txt1

0xed20,	// (0x000b113e) aid_sso_txt2

0xed2a,	// (0x000b1148) aid_sso_txt3

0x0002,

0xfdcd,	// (0x000b21eb) aid_sso_txt

0xed34,	// (0x000b1152) aid_sso_widget

0x864e,	// (0x000aaa6c) sso_btn_pane_ParamLimits

0x864e,	// (0x000aaa6c) sso_btn_pane

0x86d6,	// (0x000aaaf4) sso_option_pane_ParamLimits

0x86d6,	// (0x000aaaf4) sso_option_pane

0x8756,	// (0x000aab74) sso_query_pane_ParamLimits

0x8756,	// (0x000aab74) sso_query_pane

0x87ac,	// (0x000aabca) sso_query_pane_cp01_ParamLimits

0x87ac,	// (0x000aabca) sso_query_pane_cp01

0x8804,	// (0x000aac22) sso_t_hdr_pane_ParamLimits

0x8804,	// (0x000aac22) sso_t_hdr_pane

0x882e,	// (0x000aac4c) sso_t_nml_pane_ParamLimits

0x882e,	// (0x000aac4c) sso_t_nml_pane

0xed3e,	// (0x000b115c) sso_t_sub_pane

0x8595,	// (0x000aa9b3) sso_popup_window_ParamLimits

0x8595,	// (0x000aa9b3) sso_popup_window

0x85fa,	// (0x000aaa18) sso_apps_pane_ParamLimits

0x85fa,	// (0x000aaa18) sso_apps_pane

0x8624,	// (0x000aaa42) sso_body_pane_g1

0x862e,	// (0x000aaa4c) sso_body_pane_t1

0x863e,	// (0x000aaa5c) sso_body_pane_t2

0x0001,

0xfdd4,	// (0x000b21f2) sso_body_pane_t

0x86a0,	// (0x000aaabe) sso_btn_pane_cp01_ParamLimits

0x86a0,	// (0x000aaabe) sso_btn_pane_cp01

0x872a,	// (0x000aab48) sso_prog_pane_ParamLimits

0x872a,	// (0x000aab48) sso_prog_pane

0x8884,	// (0x000aaca2) sso_t_hdr_pane_t1_ParamLimits

0x8884,	// (0x000aaca2) sso_t_hdr_pane_t1

0xed53,	// (0x000b1171) input_focus_pane_cp10_ParamLimits

0xed53,	// (0x000b1171) input_focus_pane_cp10

0xed6d,	// (0x000b118b) sso_query_pane_t1_ParamLimits

0xed6d,	// (0x000b118b) sso_query_pane_t1

0xed80,	// (0x000b119e) sso_query_pane_t2_ParamLimits

0xed80,	// (0x000b119e) sso_query_pane_t2

0xed9b,	// (0x000b11b9) sso_query_pane_t3_ParamLimits

0xed9b,	// (0x000b11b9) sso_query_pane_t3

0xedc5,	// (0x000b11e3) sso_query_pane_t4_ParamLimits

0xedc5,	// (0x000b11e3) sso_query_pane_t4

0x0003,

0xfdd9,	// (0x000b21f7) sso_query_pane_t_ParamLimits

0xfdd9,	// (0x000b21f7) sso_query_pane_t

0xe689,	// (0x000b0aa7) bg_button_pane_cp22

0xec70,	// (0x000b108e) sso_btn_pane_t1

0x8897,	// (0x000aacb5) sso_t_nml_pane_t1_ParamLimits

0x8897,	// (0x000aacb5) sso_t_nml_pane_t1

0xede9,	// (0x000b1207) sso_option_row_pane_ParamLimits

0xede9,	// (0x000b1207) sso_option_row_pane

0xedfc,	// (0x000b121a) sso_t_sub_pane_t1_ParamLimits

0xedfc,	// (0x000b121a) sso_t_sub_pane_t1

0xe6ea,	// (0x000b0b08) bg_popup_window_pane_cp11_ParamLimits

0xe6ea,	// (0x000b0b08) bg_popup_window_pane_cp11

0xee19,	// (0x000b1237) popup_sk_window_cp01_ParamLimits

0xee19,	// (0x000b1237) popup_sk_window_cp01

0xee26,	// (0x000b1244) sso_popup_body_pane_ParamLimits

0xee26,	// (0x000b1244) sso_popup_body_pane

0xee33,	// (0x000b1251) scroll_pane_cp21_ParamLimits

0xee33,	// (0x000b1251) scroll_pane_cp21

0xee40,	// (0x000b125e) sso_popup_body_t_pane_ParamLimits

0xee40,	// (0x000b125e) sso_popup_body_t_pane

0xee4d,	// (0x000b126b) sso_popup_body_t_hdr_pane_ParamLimits

0xee4d,	// (0x000b126b) sso_popup_body_t_hdr_pane

0xee60,	// (0x000b127e) sso_popup_body_t_nml_pane_ParamLimits

0xee60,	// (0x000b127e) sso_popup_body_t_nml_pane

0xee7e,	// (0x000b129c) sso_popup_body_t_sub_pane_ParamLimits

0xee7e,	// (0x000b129c) sso_popup_body_t_sub_pane

0xeea1,	// (0x000b12bf) sso_popup_body_t_hdr_pane_t1

0x88b2,	// (0x000aacd0) sso_popup_body_t_nml_pane_t1_ParamLimits

0x88b2,	// (0x000aacd0) sso_popup_body_t_nml_pane_t1

0xeeb1,	// (0x000b12cf) sso_popup_body_t_sub_pane_t1_ParamLimits

0xeeb1,	// (0x000b12cf) sso_popup_body_t_sub_pane_t1

0xa0b9,	// (0x000ac4d7) sso_prog_pane_g1

0x88ec,	// (0x000aad0a) sso_apps_pane_comp1_ParamLimits

0x88ec,	// (0x000aad0a) sso_apps_pane_comp1

0xeed6,	// (0x000b12f4) sso_apps_pane_comp1_g1

0xeede,	// (0x000b12fc) sso_apps_pane_comp1_t1

0xeefa,	// (0x000b1318) sso_option_row_pane_g1

0xef02,	// (0x000b1320) sso_option_row_pane_t1

0x8051,	// (0x000aa46f) bg_welc_area_ParamLimits

0x8051,	// (0x000aa46f) bg_welc_area

0x81f8,	// (0x000aa616) sso_t_hdr_pane_a_t1_ParamLimits

0x81f8,	// (0x000aa616) sso_t_hdr_pane_a_t1

0x8213,	// (0x000aa631) sso_t_nml_pane_a_t1_ParamLimits

0x8213,	// (0x000aa631) sso_t_nml_pane_a_t1

0x8242,	// (0x000aa660) sso_t_sub_pane_a_t1_ParamLimits

0x8242,	// (0x000aa660) sso_t_sub_pane_a_t1

0xec70,	// (0x000b108e) sso_btn_pane_t1_copy1

0xe689,	// (0x000b0aa7) welc_button_pane_2_comp1

0xecdd,	// (0x000b10fb) sso_t_hdr_pane_p_t1

0xeced,	// (0x000b110b) sso_t_nml_pane_p_t1

0xecfd,	// (0x000b111b) sso_t_sub_pane_p_t1

0xe0f7,	// (0x000b0515) list_cmail_pane_ParamLimits

0x82e5,	// (0x000aa703) welc_button_pane_cp01_ParamLimits

0x82e5,	// (0x000aa703) welc_button_pane_cp01

0xe689,	// (0x000b0aa7) main_att_pane

0xeeec,	// (0x000b130a) input_focus_pane_cp10_t1

0xef02,	// (0x000b1320) sso_option_row_pane_t1_ParamLimits

0x8906,	// (0x000aad24) main_att_body_pane_ParamLimits

0x8906,	// (0x000aad24) main_att_body_pane

0x893b,	// (0x000aad59) att_btn_pane_ParamLimits

0x893b,	// (0x000aad59) att_btn_pane

0x8960,	// (0x000aad7e) att_btn_pane_cp01_ParamLimits

0x8960,	// (0x000aad7e) att_btn_pane_cp01

0x8980,	// (0x000aad9e) att_li_srv_pane_ParamLimits

0x8980,	// (0x000aad9e) att_li_srv_pane

0x899d,	// (0x000aadbb) att_opt_pane_ParamLimits

0x899d,	// (0x000aadbb) att_opt_pane

0x89e9,	// (0x000aae07) att_query_pane_ParamLimits

0x89e9,	// (0x000aae07) att_query_pane

0x8a35,	// (0x000aae53) att_query_pane_cp01_ParamLimits

0x8a35,	// (0x000aae53) att_query_pane_cp01

0x8a81,	// (0x000aae9f) att_t_hdr_pane_ParamLimits

0x8a81,	// (0x000aae9f) att_t_hdr_pane

0x8ad9,	// (0x000aaef7) att_t_nml_pane_ParamLimits

0x8ad9,	// (0x000aaef7) att_t_nml_pane

0x8b12,	// (0x000aaf30) att_t_nml_pane_cp01_ParamLimits

0x8b12,	// (0x000aaf30) att_t_nml_pane_cp01

0x8b3e,	// (0x000aaf5c) att_t_nmlb_pane_ParamLimits

0x8b3e,	// (0x000aaf5c) att_t_nmlb_pane

0x8b5b,	// (0x000aaf79) att_term_pane_ParamLimits

0x8b5b,	// (0x000aaf79) att_term_pane

0x8ba7,	// (0x000aafc5) main_att_body_pane_g1_ParamLimits

0x8ba7,	// (0x000aafc5) main_att_body_pane_g1

0xef18,	// (0x000b1336) att_t_hdr_pane_t1_ParamLimits

0xef18,	// (0x000b1336) att_t_hdr_pane_t1

0xef31,	// (0x000b134f) att_t_nml_pane_t1_ParamLimits

0xef31,	// (0x000b134f) att_t_nml_pane_t1

0xef56,	// (0x000b1374) att_btn_pane_t1

0xe689,	// (0x000b0aa7) bg_button_pane_cp23

0x8bde,	// (0x000aaffc) att_li_srv_row_pane_ParamLimits

0x8bde,	// (0x000aaffc) att_li_srv_row_pane

0xef66,	// (0x000b1384) att_t_nmlb_pane_t1_ParamLimits

0xef66,	// (0x000b1384) att_t_nmlb_pane_t1

0xef7f,	// (0x000b139d) att_query_pane_t1

0xef8e,	// (0x000b13ac) att_query_pane_t2

0xef9d,	// (0x000b13bb) att_query_pane_t3

0x0002,

0xfde2,	// (0x000b2200) att_query_pane_t

0xefac,	// (0x000b13ca) input_focus_pane_cp11

0xefb5,	// (0x000b13d3) att_term_pane_t1_ParamLimits

0xefb5,	// (0x000b13d3) att_term_pane_t1

0xe689,	// (0x000b0aa7) att_opt_row_pane

0xefd2,	// (0x000b13f0) att_opt_row_pane_g1

0xefda,	// (0x000b13f8) att_opt_row_pane_t1_ParamLimits

0xefda,	// (0x000b13f8) att_opt_row_pane_t1

0x8bee,	// (0x000ab00c) att_li_srv_row_pane_g1

0x8bf6,	// (0x000ab014) att_li_srv_row_pane_t1

0x8c0b,	// (0x000ab029) att_li_srv_row_pane_t2

0x0001,

0xfde9,	// (0x000b2207) att_li_srv_row_pane_t

0xe689,	// (0x000b0aa7) main_call7_pane

0xe689,	// (0x000b0aa7) main_vod_pane

0xed3e,	// (0x000b115c) sso_t_sub_pane_ParamLimits

0x891c,	// (0x000aad3a) att_btn_emg_pane_ParamLimits

0x891c,	// (0x000aad3a) att_btn_emg_pane

0x8bf6,	// (0x000ab014) att_li_srv_row_pane_t1_ParamLimits

0x8c0b,	// (0x000ab029) att_li_srv_row_pane_t2_ParamLimits

0xfde9,	// (0x000b2207) att_li_srv_row_pane_t_ParamLimits

0xeff3,	// (0x000b1411) att_btn_close_pane_g1

0xe689,	// (0x000b0aa7) bg_button_pane_cp24

0x8c20,	// (0x000ab03e) main_vod_body_pane_ParamLimits

0x8c20,	// (0x000ab03e) main_vod_body_pane

0x8c34,	// (0x000ab052) main_vod_body_pane_g1_ParamLimits

0x8c34,	// (0x000ab052) main_vod_body_pane_g1

0x8c68,	// (0x000ab086) scroll_pane_cp24_ParamLimits

0x8c68,	// (0x000ab086) scroll_pane_cp24

0x8cb6,	// (0x000ab0d4) vod_btn_pane_ParamLimits

0x8cb6,	// (0x000ab0d4) vod_btn_pane

0x8cfa,	// (0x000ab118) vod_det_pane_ParamLimits

0x8cfa,	// (0x000ab118) vod_det_pane

0x8d2a,	// (0x000ab148) vod_logo_g1_ParamLimits

0x8d2a,	// (0x000ab148) vod_logo_g1

0x8d68,	// (0x000ab186) vod_opt_pane_ParamLimits

0x8d68,	// (0x000ab186) vod_opt_pane

0x8d9b,	// (0x000ab1b9) vod_opt_pane_cp01_ParamLimits

0x8d9b,	// (0x000ab1b9) vod_opt_pane_cp01

0x8dc7,	// (0x000ab1e5) vod_query_pane_ParamLimits

0x8dc7,	// (0x000ab1e5) vod_query_pane

0x8df4,	// (0x000ab212) vod_query_pane_cp01_ParamLimits

0x8df4,	// (0x000ab212) vod_query_pane_cp01

0x8e00,	// (0x000ab21e) vod_t_nml_pane_ParamLimits

0x8e00,	// (0x000ab21e) vod_t_nml_pane

0x8ea9,	// (0x000ab2c7) vod_t_nml_pane_cp01_ParamLimits

0x8ea9,	// (0x000ab2c7) vod_t_nml_pane_cp01

0x8ee5,	// (0x000ab303) vod_t_sub_pane_ParamLimits

0x8ee5,	// (0x000ab303) vod_t_sub_pane

0x8f1a,	// (0x000ab338) vod_t_sub_pane_cp01_ParamLimits

0x8f1a,	// (0x000ab338) vod_t_sub_pane_cp01

0xefac,	// (0x000b13ca) vod_query_field_pane

0xef7f,	// (0x000b139d) vod_query_pane_t1

0xe689,	// (0x000b0aa7) bg_button_pane_cp25

0xeffb,	// (0x000b1419) sso_btn_pane_t1_copy2

0x8f46,	// (0x000ab364) vod_t_nml_pane_t1_ParamLimits

0x8f46,	// (0x000ab364) vod_t_nml_pane_t1

0xf01a,	// (0x000b1438) vod_opt_row_pane_ParamLimits

0xf01a,	// (0x000b1438) vod_opt_row_pane

0xf02c,	// (0x000b144a) vod_t_sub_pane_t1_ParamLimits

0xf02c,	// (0x000b144a) vod_t_sub_pane_t1

0x8f75,	// (0x000ab393) vod_det_cell_pane_ParamLimits

0x8f75,	// (0x000ab393) vod_det_cell_pane

0xe689,	// (0x000b0aa7) input_focus_pane_cp15

0xb5c3,	// (0x000ad9e1) vod_query_field_pane_t1

0xb5d1,	// (0x000ad9ef) vod_opt_row_pane_g1_ParamLimits

0xb5d1,	// (0x000ad9ef) vod_opt_row_pane_g1

0xb5dd,	// (0x000ad9fb) vod_opt_row_pane_t1_ParamLimits

0xb5dd,	// (0x000ad9fb) vod_opt_row_pane_t1

0xb602,	// (0x000ada20) vod_det_cell_field_pane

0xb60b,	// (0x000ada29) vod_det_cell_pane_g1

0xef7f,	// (0x000b139d) vod_det_cell_pane_t1

0xe689,	// (0x000b0aa7) input_focus_pane_cp16

0xb5c3,	// (0x000ad9e1) vod_det_cell_field_pane_t1

0x8f89,	// (0x000ab3a7) call7_btn_grp_pane_ParamLimits

0x8f89,	// (0x000ab3a7) call7_btn_grp_pane

0x8fa3,	// (0x000ab3c1) call7_bubble_pane_ParamLimits

0x8fa3,	// (0x000ab3c1) call7_bubble_pane

0x8fba,	// (0x000ab3d8) cell_call7_btn_pane_ParamLimits

0x8fba,	// (0x000ab3d8) cell_call7_btn_pane

0x8fce,	// (0x000ab3ec) call7_pane_g1_ParamLimits

0x8fce,	// (0x000ab3ec) call7_pane_g1

0x8fdd,	// (0x000ab3fb) call7_windows_conf_pane_ParamLimits

0x8fdd,	// (0x000ab3fb) call7_windows_conf_pane

0x8ff7,	// (0x000ab415) popup_call7_1st_window_ParamLimits

0x8ff7,	// (0x000ab415) popup_call7_1st_window

0x9008,	// (0x000ab426) popup_call7_2nd_window_ParamLimits

0x9008,	// (0x000ab426) popup_call7_2nd_window

0x9019,	// (0x000ab437) popup_call7_3rd_window_ParamLimits

0x9019,	// (0x000ab437) popup_call7_3rd_window

0xe689,	// (0x000b0aa7) bg_button_pane_cp26

0xea2e,	// (0x000b0e4c) cell_call7_btn_pane_g1

0xf00b,	// (0x000b1429) cell_call7_btn_pane_t1

0xe689,	// (0x000b0aa7) bg_popup_window_pane_cp12

0xb613,	// (0x000ada31) popup_call7_1st_window_g1

0xb61b,	// (0x000ada39) popup_call7_1st_window_g2

0xb623,	// (0x000ada41) popup_call7_1st_window_g3

0x0002,

0xfdee,	// (0x000b220c) popup_call7_1st_window_g

0xb62b,	// (0x000ada49) popup_call7_1st_window_t1

0xb63a,	// (0x000ada58) popup_call7_1st_window_t2

0xb648,	// (0x000ada66) popup_call7_1st_window_t3

0x0002,

0xfdf5,	// (0x000b2213) popup_call7_1st_window_t

0xe689,	// (0x000b0aa7) bg_popup_window_pane_cp13

0xb656,	// (0x000ada74) popup_call7_2nd_window_g1

0xb65e,	// (0x000ada7c) popup_call7_2nd_window_g2

0xb666,	// (0x000ada84) popup_call7_2nd_window_g3

0x0002,

0xfdfc,	// (0x000b221a) popup_call7_2nd_window_g

0xb66e,	// (0x000ada8c) popup_call7_2nd_window_t1

0xe689,	// (0x000b0aa7) bg_popup_window_pane_cp14

0xb67d,	// (0x000ada9b) call7_list_conf_pane

0xb685,	// (0x000adaa3) call7_list_conf_row_pane_ParamLimits

0xb685,	// (0x000adaa3) call7_list_conf_row_pane

0xb698,	// (0x000adab6) call7_list_conf_row_pane_g1

0xb6a0,	// (0x000adabe) call7_list_conf_row_pane_g2

0x0001,

0xfe03,	// (0x000b2221) call7_list_conf_row_pane_g

0xb6a8,	// (0x000adac6) call7_list_conf_row_pane_t1

0xe689,	// (0x000b0aa7) list_highlight_pane_cp22
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
