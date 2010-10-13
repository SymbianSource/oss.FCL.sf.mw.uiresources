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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00088543 };

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
0x22cb,	// (0x0008a80e) Screen

0x22d7,	// (0x0008a81a) application_window

0x2333,	// (0x0008a876) area_bottom_pane_ParamLimits

0x2333,	// (0x0008a876) area_bottom_pane

0x238b,	// (0x0008a8ce) area_top_pane_ParamLimits

0x238b,	// (0x0008a8ce) area_top_pane

0x23ef,	// (0x0008a932) call_video_uplink_pane_ParamLimits

0x23ef,	// (0x0008a932) call_video_uplink_pane

0x242e,	// (0x0008a971) main_pane_ParamLimits

0x242e,	// (0x0008a971) main_pane

0xe49e,	// (0x000969e1) context_pane

0x5160,	// (0x0008d6a3) navi_pane

0x5186,	// (0x0008d6c9) popup_cale_events_window_ParamLimits

0x5186,	// (0x0008d6c9) popup_cale_events_window

0xe4b1,	// (0x000969f4) popup_mup_playback_window

0x519e,	// (0x0008d6e1) signal_pane

0xc524,	// (0x00094a67) main_browser_pane

0xc6ed,	// (0x00094c30) main_burst_pane

0x4fe2,	// (0x0008d525) main_calc_pane

0xe492,	// (0x000969d5) main_cale_day_pane

0x2978,	// (0x0008aebb) main_cale_month_pane

0xe492,	// (0x000969d5) main_cale_week_pane

0xc6ed,	// (0x00094c30) main_call_pane

0xc1b2,	// (0x000946f5) main_call_poc_pane

0xc6ed,	// (0x00094c30) main_camera_pane

0xc6ed,	// (0x00094c30) main_chi_dic_pane

0xce94,	// (0x000953d7) main_clock_pane

0xc1b2,	// (0x000946f5) main_fmradio_pane

0xc6ed,	// (0x00094c30) main_graph_messa_pane

0xc1b2,	// (0x000946f5) main_help_pane

0xc524,	// (0x00094a67) main_im_pane

0xc40d,	// (0x00094950) main_image_pane_ParamLimits

0xc40d,	// (0x00094950) main_image_pane

0xc1b2,	// (0x000946f5) main_location2_pane

0xc6ed,	// (0x00094c30) main_location_pane

0xc40d,	// (0x00094950) main_messa_pane

0xc1b2,	// (0x000946f5) main_mp2_pane

0xc6ed,	// (0x00094c30) main_mp_pane

0xc1b2,	// (0x000946f5) main_msg_pane

0xc1b2,	// (0x000946f5) main_mup_eq_pane

0xc1b2,	// (0x000946f5) main_mup_pane

0xc524,	// (0x00094a67) main_notes_pane

0xc1b2,	// (0x000946f5) main_pec_pane

0xc1b2,	// (0x000946f5) main_phob_pane

0xc1b2,	// (0x000946f5) main_pinb_pane

0xc1b2,	// (0x000946f5) main_postcard_pane

0xc1b2,	// (0x000946f5) main_qdial_pane

0xc6ed,	// (0x00094c30) main_skin_pane

0xc1b2,	// (0x000946f5) main_smil2_pane

0xc6ed,	// (0x00094c30) main_smil_pane

0xc6ed,	// (0x00094c30) main_video_pane

0xc6ed,	// (0x00094c30) main_video_tele_pane

0xc40d,	// (0x00094950) main_viewer_pane_ParamLimits

0xc40d,	// (0x00094950) main_viewer_pane

0xc6ed,	// (0x00094c30) main_vorec_pane

0x502e,	// (0x0008d571) popup_blid_sat_info_window_ParamLimits

0x502e,	// (0x0008d571) popup_blid_sat_info_window

0x504e,	// (0x0008d591) popup_dyc_status_message_window_ParamLimits

0x504e,	// (0x0008d591) popup_dyc_status_message_window

0x505c,	// (0x0008d59f) popup_grid_large_graphic_window_ParamLimits

0x505c,	// (0x0008d59f) popup_grid_large_graphic_window

0x50eb,	// (0x0008d62e) popup_loc_request_window_ParamLimits

0x50eb,	// (0x0008d62e) popup_loc_request_window

0x5138,	// (0x0008d67b) popup_wml_address_window_ParamLimits

0x5138,	// (0x0008d67b) popup_wml_address_window

0x4eba,	// (0x0008d3fd) call_muted_g1

0x4ba7,	// (0x0008d0ea) popup_call_audio_conf_window_ParamLimits

0x4ba7,	// (0x0008d0ea) popup_call_audio_conf_window

0x4eca,	// (0x0008d40d) popup_call_audio_first_window_ParamLimits

0x4eca,	// (0x0008d40d) popup_call_audio_first_window

0x4f0a,	// (0x0008d44d) popup_call_audio_in_window_ParamLimits

0x4f0a,	// (0x0008d44d) popup_call_audio_in_window

0x4f2e,	// (0x0008d471) popup_call_audio_out_window_ParamLimits

0x4f2e,	// (0x0008d471) popup_call_audio_out_window

0x4f50,	// (0x0008d493) popup_call_audio_second_window_ParamLimits

0x4f50,	// (0x0008d493) popup_call_audio_second_window

0x4f80,	// (0x0008d4c3) popup_call_audio_wait_window_ParamLimits

0x4f80,	// (0x0008d4c3) popup_call_audio_wait_window

0x4fa1,	// (0x0008d4e4) popup_number_entry_window_ParamLimits

0x4fa1,	// (0x0008d4e4) popup_number_entry_window

0xaa53,	// (0x00092f96) bg_popup_call_pane_cp05_ParamLimits

0xaa53,	// (0x00092f96) bg_popup_call_pane_cp05

0xbccc,	// (0x0009420f) popup_number_entry_window_t1

0xbcdf,	// (0x00094222) popup_number_entry_window_t2

0xbcf1,	// (0x00094234) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x00097583) popup_number_entry_window_t

0xbd03,	// (0x00094246) text_title_cp2

0xbd16,	// (0x00094259) bg_popup_call_pane_cp_ParamLimits

0xbd16,	// (0x00094259) bg_popup_call_pane_cp

0xbd24,	// (0x00094267) call_thumbnail_pane

0xbd2c,	// (0x0009426f) popup_call_audio_in_window_g1_ParamLimits

0xbd2c,	// (0x0009426f) popup_call_audio_in_window_g1

0xbd38,	// (0x0009427b) popup_call_audio_in_window_g2_ParamLimits

0xbd38,	// (0x0009427b) popup_call_audio_in_window_g2

0xbd44,	// (0x00094287) popup_call_audio_in_window_g3_ParamLimits

0xbd44,	// (0x00094287) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x0009758c) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x0009758c) popup_call_audio_in_window_g

0xbd50,	// (0x00094293) popup_call_audio_in_window_t1_ParamLimits

0xbd50,	// (0x00094293) popup_call_audio_in_window_t1

0xbd6c,	// (0x000942af) popup_call_audio_in_window_t2_ParamLimits

0xbd6c,	// (0x000942af) popup_call_audio_in_window_t2

0xbd88,	// (0x000942cb) popup_call_audio_in_window_t3_ParamLimits

0xbd88,	// (0x000942cb) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x00097593) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x00097593) popup_call_audio_in_window_t

0xbd16,	// (0x00094259) bg_popup_call_pane_cp01_ParamLimits

0xbd16,	// (0x00094259) bg_popup_call_pane_cp01

0xbd24,	// (0x00094267) call_thumbnail_pane_cp02

0xbd9b,	// (0x000942de) call_type_pane_cp022

0xbda3,	// (0x000942e6) popup_call_audio_out_window_g1_ParamLimits

0xbda3,	// (0x000942e6) popup_call_audio_out_window_g1

0xbdb5,	// (0x000942f8) popup_call_audio_out_window_g2_ParamLimits

0xbdb5,	// (0x000942f8) popup_call_audio_out_window_g2

0xbdc1,	// (0x00094304) popup_call_audio_out_window_g3_ParamLimits

0xbdc1,	// (0x00094304) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x0009759a) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x0009759a) popup_call_audio_out_window_g

0xbdd3,	// (0x00094316) popup_call_audio_out_window_t1_ParamLimits

0xbdd3,	// (0x00094316) popup_call_audio_out_window_t1

0xbdeb,	// (0x0009432e) popup_call_audio_out_window_t2_ParamLimits

0xbdeb,	// (0x0009432e) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x000975a1) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x000975a1) popup_call_audio_out_window_t

0xbe00,	// (0x00094343) bg_popup_call_pane_ParamLimits

0xbe00,	// (0x00094343) bg_popup_call_pane

0x2649,	// (0x0008ab8c) call_thumbnail_pane_cp_ParamLimits

0x2649,	// (0x0008ab8c) call_thumbnail_pane_cp

0xbe84,	// (0x000943c7) call_type_pane_cp01_ParamLimits

0xbe84,	// (0x000943c7) call_type_pane_cp01

0xbec8,	// (0x0009440b) popup_call_audio_first_window_g1_ParamLimits

0xbec8,	// (0x0009440b) popup_call_audio_first_window_g1

0xbf14,	// (0x00094457) popup_call_audio_first_window_g2_ParamLimits

0xbf14,	// (0x00094457) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x000975a6) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x000975a6) popup_call_audio_first_window_g

0xbf58,	// (0x0009449b) popup_call_audio_first_window_t1_ParamLimits

0xbf58,	// (0x0009449b) popup_call_audio_first_window_t1

0xc004,	// (0x00094547) popup_call_audio_first_window_t4_ParamLimits

0xc004,	// (0x00094547) popup_call_audio_first_window_t4

0xc183,	// (0x000946c6) popup_call_audio_first_window_t5_ParamLimits

0xc183,	// (0x000946c6) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x000975ab) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x000975ab) popup_call_audio_first_window_t

0xc1b2,	// (0x000946f5) bg_popup_call_pane_cp02

0xc1bc,	// (0x000946ff) call_type_pane_cp023

0xc1c4,	// (0x00094707) popup_call_audio_wait_window_g1

0xc1cc,	// (0x0009470f) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x000975b2) popup_call_audio_wait_window_g

0xc1d4,	// (0x00094717) popup_call_audio_wait_window_t3

0xc1e2,	// (0x00094725) bg_popup_call_pane_cp03_ParamLimits

0xc1e2,	// (0x00094725) bg_popup_call_pane_cp03

0xc242,	// (0x00094785) call_thumbnail_pane_cp011_ParamLimits

0xc242,	// (0x00094785) call_thumbnail_pane_cp011

0xc24e,	// (0x00094791) call_type_pane_cp034_ParamLimits

0xc24e,	// (0x00094791) call_type_pane_cp034

0xc28a,	// (0x000947cd) popup_call_audio_second_window_g1_ParamLimits

0xc28a,	// (0x000947cd) popup_call_audio_second_window_g1

0xc2c6,	// (0x00094809) popup_call_audio_second_window_g2_ParamLimits

0xc2c6,	// (0x00094809) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x000975b7) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x000975b7) popup_call_audio_second_window_g

0xc302,	// (0x00094845) popup_call_audio_second_window_t1_ParamLimits

0xc302,	// (0x00094845) popup_call_audio_second_window_t1

0xc383,	// (0x000948c6) popup_call_audio_second_window_t2_ParamLimits

0xc383,	// (0x000948c6) popup_call_audio_second_window_t2

0xc3b9,	// (0x000948fc) popup_call_audio_second_window_t3_ParamLimits

0xc3b9,	// (0x000948fc) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x000975bc) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x000975bc) popup_call_audio_second_window_t

0xc1b2,	// (0x000946f5) bg_popup_call_pane_cp04

0xc3ef,	// (0x00094932) list_conf_pane

0xc3f7,	// (0x0009493a) popup_call_audio_conf_window_t1

0xc405,	// (0x00094948) call_thumbnail_pane_g1

0xc40d,	// (0x00094950) bg_pinb_pane_ParamLimits

0xc40d,	// (0x00094950) bg_pinb_pane

0xc41b,	// (0x0009495e) find_pinb_pane

0xc40d,	// (0x00094950) listscroll_pinb_pane_ParamLimits

0xc40d,	// (0x00094950) listscroll_pinb_pane

0xc425,	// (0x00094968) pinb_bg_pane_g1

0xc425,	// (0x00094968) pinb_bg_pane_g2

0xc425,	// (0x00094968) pinb_bg_pane_g3

0xc425,	// (0x00094968) pinb_bg_pane_g4

0xc425,	// (0x00094968) pinb_bg_pane_g5

0xc425,	// (0x00094968) pinb_bg_pane_g6

0xc425,	// (0x00094968) pinb_bg_pane_g7

0xc425,	// (0x00094968) pinb_bg_pane_g8

0xc425,	// (0x00094968) pinb_bg_pane_g9

0xc425,	// (0x00094968) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x000975c3) pinb_bg_pane_g

0xaa49,	// (0x00092f8c) grid_pinb_pane

0xaa49,	// (0x00092f8c) list_pinb_pane

0xc090,	// (0x000945d3) scroll_pane_cp01_ParamLimits

0xc090,	// (0x000945d3) scroll_pane_cp01

0xc42f,	// (0x00094972) find_pinb_pane_g1_ParamLimits

0xc42f,	// (0x00094972) find_pinb_pane_g1

0xc447,	// (0x0009498a) find_pinb_pane_t1

0xc459,	// (0x0009499c) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x000975dd) find_pinb_pane_t

0xc46e,	// (0x000949b1) input_focus_pane_cp01_ParamLimits

0xc46e,	// (0x000949b1) input_focus_pane_cp01

0xc47a,	// (0x000949bd) cell_pinb_pane_ParamLimits

0xc47a,	// (0x000949bd) cell_pinb_pane

0xc488,	// (0x000949cb) cell_pinb_pane_g1_ParamLimits

0xc488,	// (0x000949cb) cell_pinb_pane_g1

0xc496,	// (0x000949d9) cell_pinb_pane_g2_ParamLimits

0xc496,	// (0x000949d9) cell_pinb_pane_g2

0xc496,	// (0x000949d9) cell_pinb_pane_g3_ParamLimits

0xc496,	// (0x000949d9) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x000975e2) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x000975e2) cell_pinb_pane_g

0xc1b2,	// (0x000946f5) grid_highlight_pane_cp01

0xc47a,	// (0x000949bd) list_pinb_item_pane_ParamLimits

0xc47a,	// (0x000949bd) list_pinb_item_pane

0xaa49,	// (0x00092f8c) list_highlight_pane_cp02

0xc4a4,	// (0x000949e7) list_pinb_item_pane_g1_ParamLimits

0xc4a4,	// (0x000949e7) list_pinb_item_pane_g1

0xc496,	// (0x000949d9) list_pinb_item_pane_g2_ParamLimits

0xc496,	// (0x000949d9) list_pinb_item_pane_g2

0xc488,	// (0x000949cb) list_pinb_item_pane_g3_ParamLimits

0xc488,	// (0x000949cb) list_pinb_item_pane_g3

0xc496,	// (0x000949d9) list_pinb_item_pane_g4_ParamLimits

0xc496,	// (0x000949d9) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x000975e9) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x000975e9) list_pinb_item_pane_g

0xc4b2,	// (0x000949f5) list_pinb_item_pane_t1_ParamLimits

0xc4b2,	// (0x000949f5) list_pinb_item_pane_t1

0x2687,	// (0x0008abca) calc_display_pane

0x26a5,	// (0x0008abe8) calc_paper_pane

0x26c1,	// (0x0008ac04) grid_calc_pane

0xaa49,	// (0x00092f8c) bg_list_pane_cp01

0xc4c6,	// (0x00094a09) clock_g1

0xc4c6,	// (0x00094a09) clock_g2

0x0001,

0xf0af,	// (0x000975f2) clock_g

0xc4d0,	// (0x00094a13) clock_t1_ParamLimits

0xc4d0,	// (0x00094a13) clock_t1

0xc4e4,	// (0x00094a27) clock_t2_ParamLimits

0xc4e4,	// (0x00094a27) clock_t2

0xc4e4,	// (0x00094a27) clock_t3_ParamLimits

0xc4e4,	// (0x00094a27) clock_t3

0xc4e4,	// (0x00094a27) clock_t4_ParamLimits

0xc4e4,	// (0x00094a27) clock_t4

0xc4d0,	// (0x00094a13) clock_t5_ParamLimits

0xc4d0,	// (0x00094a13) clock_t5

0xc4e4,	// (0x00094a27) clock_t6_ParamLimits

0xc4e4,	// (0x00094a27) clock_t6

0xc4e4,	// (0x00094a27) clock_t7_ParamLimits

0xc4e4,	// (0x00094a27) clock_t7

0xc4e4,	// (0x00094a27) clock_t8_ParamLimits

0xc4e4,	// (0x00094a27) clock_t8

0xc4e4,	// (0x00094a27) clock_t9_ParamLimits

0xc4e4,	// (0x00094a27) clock_t9

0x0008,

0xf0b4,	// (0x000975f7) clock_t_ParamLimits

0xf0b4,	// (0x000975f7) clock_t

0xaa49,	// (0x00092f8c) popup_clock_analogue_window_cp02

0xaa49,	// (0x00092f8c) popup_clock_digital_window_cp01

0xc1b2,	// (0x000946f5) listscroll_help_pane

0xc1b2,	// (0x000946f5) phob_pre_status_pane

0xc4f8,	// (0x00094a3b) grid_qdial_pane

0xc40d,	// (0x00094950) listscroll_mce_pane

0xc40d,	// (0x00094950) bg_notes_pane

0xc502,	// (0x00094a45) list_notes_pane

0x26ed,	// (0x0008ac30) scroll_pane_cp06

0xc510,	// (0x00094a53) bg_calc_paper_pane

0x26fc,	// (0x0008ac3f) list_calc_pane

0xc524,	// (0x00094a67) bg_calc_display_pane

0x2716,	// (0x0008ac59) calc_display_pane_t1

0x272b,	// (0x0008ac6e) calc_display_pane_t2

0x2740,	// (0x0008ac83) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x0009760a) calc_display_pane_t

0x2752,	// (0x0008ac95) cell_calc_pane_ParamLimits

0x2752,	// (0x0008ac95) cell_calc_pane

0xc530,	// (0x00094a73) bg_calc_paper_pane_g1

0xc53c,	// (0x00094a7f) bg_calc_paper_pane_g2

0xc548,	// (0x00094a8b) bg_calc_paper_pane_g3

0xc554,	// (0x00094a97) bg_calc_paper_pane_g4

0xc560,	// (0x00094aa3) bg_calc_paper_pane_g5

0x277f,	// (0x0008acc2) bg_calc_paper_pane_g6

0x2790,	// (0x0008acd3) bg_calc_paper_pane_g7

0x27a1,	// (0x0008ace4) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x00097611) bg_calc_paper_pane_g

0x27b2,	// (0x0008acf5) calc_bg_paper_pane_g9

0x27c3,	// (0x0008ad06) list_calc_item_pane_ParamLimits

0x27c3,	// (0x0008ad06) list_calc_item_pane

0xc56c,	// (0x00094aaf) list_calc_item_pane_g1

0x27f0,	// (0x0008ad33) list_calc_item_pane_t1_ParamLimits

0x27f0,	// (0x0008ad33) list_calc_item_pane_t1

0x2802,	// (0x0008ad45) list_calc_item_pane_t2_ParamLimits

0x2802,	// (0x0008ad45) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00097622) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00097622) list_calc_item_pane_t

0xc425,	// (0x00094968) cell_calc_pane_g1

0xc579,	// (0x00094abc) grid_highlight_pane_cp02

0x2832,	// (0x0008ad75) bg_calc_display_pane_g1

0x283b,	// (0x0008ad7e) bg_calc_display_pane_g2

0x2845,	// (0x0008ad88) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x0009762c) bg_calc_display_pane_g

0x284e,	// (0x0008ad91) cell_qdial_pane_ParamLimits

0x284e,	// (0x0008ad91) cell_qdial_pane

0x2862,	// (0x0008ada5) cell_qdial_pane_g1_ParamLimits

0x2862,	// (0x0008ada5) cell_qdial_pane_g1

0x286f,	// (0x0008adb2) cell_qdial_pane_g2_ParamLimits

0x286f,	// (0x0008adb2) cell_qdial_pane_g2

0xc59b,	// (0x00094ade) cell_qdial_pane_g3_ParamLimits

0xc59b,	// (0x00094ade) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x00097633) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x00097633) cell_qdial_pane_g

0x288c,	// (0x0008adcf) cell_qdial_pane_t1_ParamLimits

0x288c,	// (0x0008adcf) cell_qdial_pane_t1

0x28a4,	// (0x0008ade7) cell_qdial_pane_t2_ParamLimits

0x28a4,	// (0x0008ade7) cell_qdial_pane_t2

0x28b7,	// (0x0008adfa) cell_qdial_pane_t3_ParamLimits

0x28b7,	// (0x0008adfa) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x0009763c) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x0009763c) cell_qdial_pane_t

0xc1b2,	// (0x000946f5) grid_highlight_pane_cp04

0xc5a7,	// (0x00094aea) thumbnail_qdial_pane_ParamLimits

0xc5a7,	// (0x00094aea) thumbnail_qdial_pane

0xc60c,	// (0x00094b4f) list_help_pane

0xc615,	// (0x00094b58) scroll_pane_cp02

0x28ca,	// (0x0008ae0d) help_list_pane_t1_ParamLimits

0x28ca,	// (0x0008ae0d) help_list_pane_t1

0x2904,	// (0x0008ae47) bg_notes_pane_g2

0x290c,	// (0x0008ae4f) bg_notes_pane_g3

0x2914,	// (0x0008ae57) notes_bg_pane_g1

0x291c,	// (0x0008ae5f) notes_bg_pane_g4

0x2924,	// (0x0008ae67) notes_bg_pane_g5

0x292c,	// (0x0008ae6f) notes_bg_pane_g6

0x2934,	// (0x0008ae77) notes_bg_pane_g7

0x293c,	// (0x0008ae7f) notes_bg_pane_g8

0x2944,	// (0x0008ae87) notes_bg_pane_g9

0x0006,

0xf117,	// (0x0009765a) notes_bg_pane_g

0x294c,	// (0x0008ae8f) list_notes_text_pane_ParamLimits

0x294c,	// (0x0008ae8f) list_notes_text_pane

0xc61e,	// (0x00094b61) list_notes_text_pane_g1

0xc627,	// (0x00094b6a) list_notes_text_pane_t1

0x2978,	// (0x0008aebb) listscroll_cale_week_pane

0x299d,	// (0x0008aee0) bg_cale_heading_pane

0xc64f,	// (0x00094b92) bg_cale_pane_cp01

0x29bf,	// (0x0008af02) cale_week_corner_pane

0x29d9,	// (0x0008af1c) cale_week_day_heading_pane

0x29fb,	// (0x0008af3e) cale_week_scroll_pane_g1

0x2a18,	// (0x0008af5b) cale_week_scroll_pane_g2

0x2a2b,	// (0x0008af6e) cale_week_scroll_pane_g3

0x2a3e,	// (0x0008af81) cale_week_scroll_pane_g4

0x2a51,	// (0x0008af94) cale_week_scroll_pane_g5

0x2a64,	// (0x0008afa7) cale_week_scroll_pane_g6

0x2a77,	// (0x0008afba) cale_week_scroll_pane_g7

0x2a8c,	// (0x0008afcf) cale_week_scroll_pane_g8

0x2aa1,	// (0x0008afe4) cale_week_scroll_pane_g9

0x2ab4,	// (0x0008aff7) cale_week_scroll_pane_g10

0x2ac7,	// (0x0008b00a) cale_week_scroll_pane_g11

0x2ada,	// (0x0008b01d) cale_week_scroll_pane_g12

0x2af1,	// (0x0008b034) cale_week_scroll_pane_g13

0x2b0c,	// (0x0008b04f) cale_week_scroll_pane_g14

0x2b27,	// (0x0008b06a) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00097669) cale_week_scroll_pane_g

0x2b57,	// (0x0008b09a) cale_week_time_pane

0x2b6c,	// (0x0008b0af) grid_cale_week_pane

0xc67e,	// (0x00094bc1) scroll_pane_cp08

0x2b8b,	// (0x0008b0ce) cell_cale_week_pane_ParamLimits

0x2b8b,	// (0x0008b0ce) cell_cale_week_pane

0x2bed,	// (0x0008b130) cale_week_day_heading_pane_t1

0x2c08,	// (0x0008b14b) cale_week_day_heading_pane_t2

0x2c23,	// (0x0008b166) cale_week_day_heading_pane_t3

0x2c3e,	// (0x0008b181) cale_week_day_heading_pane_t4

0x2c59,	// (0x0008b19c) cale_week_day_heading_pane_t5

0x2c74,	// (0x0008b1b7) cale_week_day_heading_pane_t6

0x2c8f,	// (0x0008b1d2) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x0009768a) cale_week_day_heading_pane_t

0xc69b,	// (0x00094bde) bg_cale_side_pane

0x2caa,	// (0x0008b1ed) cale_week_time_pane_t1

0x2cc4,	// (0x0008b207) cale_week_time_pane_t2

0x2cde,	// (0x0008b221) cale_week_time_pane_t3

0x2cf8,	// (0x0008b23b) cale_week_time_pane_t4

0x2d12,	// (0x0008b255) cale_week_time_pane_t5

0x2d2c,	// (0x0008b26f) cale_week_time_pane_t6

0x2d4c,	// (0x0008b28f) cale_week_time_pane_t7

0x2d6e,	// (0x0008b2b1) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x00097699) cale_week_time_pane_t

0x2d92,	// (0x0008b2d5) cell_cale_week_pane_g2

0x2db6,	// (0x0008b2f9) cell_cale_week_pane_g3_ParamLimits

0x2db6,	// (0x0008b2f9) cell_cale_week_pane_g3

0xc6a9,	// (0x00094bec) grid_highlight_pane_cp07

0xc6b1,	// (0x00094bf4) listscroll_gms_pane

0xc6bb,	// (0x00094bfe) grid_gms_pane

0xc6c4,	// (0x00094c07) listscroll_gms_pane_g1

0xc6cc,	// (0x00094c0f) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x000976aa) listscroll_gms_pane_g

0x2dce,	// (0x0008b311) scroll_pane_cp010

0x2dd9,	// (0x0008b31c) cell_gms_pane_ParamLimits

0x2dd9,	// (0x0008b31c) cell_gms_pane

0x2de9,	// (0x0008b32c) cell_gms_pane_g1

0xc6d4,	// (0x00094c17) cell_gms_pane_g2

0xc61e,	// (0x00094b61) cell_gms_pane_g3

0xc6dc,	// (0x00094c1f) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x000976af) cell_gms_pane_g

0xc6e5,	// (0x00094c28) grid_highlight_pane_cp09

0x4e3e,	// (0x0008d381) phob_pre_status_pane_g1

0x4e46,	// (0x0008d389) phob_pre_status_pane_g2

0x4e4e,	// (0x0008d391) phob_pre_status_pane_g3

0x4e56,	// (0x0008d399) phob_pre_status_pane_g4

0x0004,

0xf538,	// (0x00097a7b) phob_pre_status_pane_g

0x4e66,	// (0x0008d3a9) phob_pre_status_pane_t1

0x4e76,	// (0x0008d3b9) phob_pre_status_pane_t2

0x4e86,	// (0x0008d3c9) phob_pre_status_pane_t3

0x0002,

0xf543,	// (0x00097a86) phob_pre_status_pane_t

0xc6ed,	// (0x00094c30) bg_list_pane_cp05

0x2df9,	// (0x0008b33c) grid_vorec_pane

0x2e03,	// (0x0008b346) vorec_t1

0x2e11,	// (0x0008b354) vorec_t2

0x2e1f,	// (0x0008b362) vorec_t3

0x2e2d,	// (0x0008b370) vorec_t4

0x9d18,	// (0x0009225b) vorec_t5

0x9d26,	// (0x00092269) vorec_t6

0x0004,

0xf175,	// (0x000976b8) vorec_t

0x9d34,	// (0x00092277) wait_bar_pane_cp01

0x2e49,	// (0x0008b38c) cell_vorec_pane_ParamLimits

0x2e49,	// (0x0008b38c) cell_vorec_pane

0x2e5c,	// (0x0008b39f) cell_vorec_pane_g1

0xc1b2,	// (0x000946f5) grid_highlight_pane_cp05

0xc47a,	// (0x000949bd) cams_zoom_pane

0xc47a,	// (0x000949bd) image_vga_pane

0xc496,	// (0x000949d9) main_camera_pane_g1

0xc496,	// (0x000949d9) main_camera_pane_g2

0xc496,	// (0x000949d9) main_camera_pane_g3

0xc496,	// (0x000949d9) main_camera_pane_g4

0xc496,	// (0x000949d9) main_camera_pane_g5

0xc496,	// (0x000949d9) main_camera_pane_g6

0xc496,	// (0x000949d9) main_camera_pane_g7

0x0007,

0xf180,	// (0x000976c3) main_camera_pane_g

0xc4e4,	// (0x00094a27) main_camera_pane_t1

0xc4e4,	// (0x00094a27) main_camera_pane_t2

0x0001,

0xf191,	// (0x000976d4) main_camera_pane_t

0x2e66,	// (0x0008b3a9) cams_zoom_pane_cp_ParamLimits

0x2e66,	// (0x0008b3a9) cams_zoom_pane_cp

0x2e94,	// (0x0008b3d7) image_cif_pane_ParamLimits

0x2e94,	// (0x0008b3d7) image_cif_pane

0xaa49,	// (0x00092f8c) image_subqcif_pane

0x2ea2,	// (0x0008b3e5) main_video_pane_g1_ParamLimits

0x2ea2,	// (0x0008b3e5) main_video_pane_g1

0x2eca,	// (0x0008b40d) main_video_pane_g2_ParamLimits

0x2eca,	// (0x0008b40d) main_video_pane_g2

0x2efd,	// (0x0008b440) main_video_pane_g3_ParamLimits

0x2efd,	// (0x0008b440) main_video_pane_g3

0x2efd,	// (0x0008b440) main_video_pane_g4_ParamLimits

0x2efd,	// (0x0008b440) main_video_pane_g4

0x2f2b,	// (0x0008b46e) main_video_pane_g5_ParamLimits

0x2f2b,	// (0x0008b46e) main_video_pane_g5

0xc6f5,	// (0x00094c38) main_video_pane_g6_ParamLimits

0xc6f5,	// (0x00094c38) main_video_pane_g6

0x0006,

0xf196,	// (0x000976d9) main_video_pane_g_ParamLimits

0xf196,	// (0x000976d9) main_video_pane_g

0x2f47,	// (0x0008b48a) main_video_pane_t1_ParamLimits

0x2f47,	// (0x0008b48a) main_video_pane_t1

0xc4c6,	// (0x00094a09) cams_zoom_pane_g1

0xc4c6,	// (0x00094a09) cams_zoom_pane_g2

0xc4c6,	// (0x00094a09) cams_zoom_pane_g3

0xc4c6,	// (0x00094a09) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x000976e8) cams_zoom_pane_g

0xc47a,	// (0x000949bd) grid_cams_pane

0xc47a,	// (0x000949bd) linegrid_cams_pane

0x2f81,	// (0x0008b4c4) cell_cams_pane_ParamLimits

0x2f81,	// (0x0008b4c4) cell_cams_pane

0xaa49,	// (0x00092f8c) cams_burst_image_pane

0xc4c6,	// (0x00094a09) cell_cams_pane_g1

0xaa49,	// (0x00092f8c) grid_highlight_pane_cp03

0xc425,	// (0x00094968) mp_bg_pane_g1

0xaa49,	// (0x00092f8c) bg_list_pane_cp03

0xaa49,	// (0x00092f8c) bg_mp_pane

0xaa49,	// (0x00092f8c) grid_mp_pane

0xc4c6,	// (0x00094a09) media_player_g1

0xcc1c,	// (0x0009515f) media_player_t1

0xcc1c,	// (0x0009515f) media_player_t2

0xcc1c,	// (0x0009515f) media_player_t3

0xcc1c,	// (0x0009515f) media_player_t4

0xcc1c,	// (0x0009515f) media_player_t5

0xcc1c,	// (0x0009515f) media_player_t6

0xcc1c,	// (0x0009515f) media_player_t7

0x0006,

0xf522,	// (0x00097a65) media_player_t

0xaa49,	// (0x00092f8c) wait_bar_pane_cp02

0xf507,	// (0x00097a4a) main_usb_pane_t

0xce94,	// (0x000953d7) cell_mp_pane

0xc425,	// (0x00094968) cell_mp_pane_g1

0xc1b2,	// (0x000946f5) grid_highlight_pane_cp06

0xc70f,	// (0x00094c52) grid_skin_colour_pane

0xc717,	// (0x00094c5a) list_highlight_pane_cp03

0x2f96,	// (0x0008b4d9) skin_g1

0xc71f,	// (0x00094c62) skin_t1

0xc72e,	// (0x00094c71) skin_t2

0x0001,

0xf1d3,	// (0x00097716) skin_t

0x2fa0,	// (0x0008b4e3) cell_skin_colour_pane_ParamLimits

0x2fa0,	// (0x0008b4e3) cell_skin_colour_pane

0xc73c,	// (0x00094c7f) cell_skin_colour_pane_g1

0x3024,	// (0x0008b567) call_video_g1_ParamLimits

0x3024,	// (0x0008b567) call_video_g1

0x3034,	// (0x0008b577) call_video_g2_ParamLimits

0x3034,	// (0x0008b577) call_video_g2

0x0001,

0xf1d8,	// (0x0009771b) call_video_g_ParamLimits

0xf1d8,	// (0x0009771b) call_video_g

0x308e,	// (0x0008b5d1) call_video_uplink_pane_cp1_ParamLimits

0x308e,	// (0x0008b5d1) call_video_uplink_pane_cp1

0xc74e,	// (0x00094c91) call_video_uplink_pane_cp2

0x315a,	// (0x0008b69d) video_down_crop_pane_ParamLimits

0x315a,	// (0x0008b69d) video_down_crop_pane

0x324c,	// (0x0008b78f) video_down_pane_ParamLimits

0x324c,	// (0x0008b78f) video_down_pane

0xc756,	// (0x00094c99) video_down_subqcif_pane_ParamLimits

0xc756,	// (0x00094c99) video_down_subqcif_pane

0xc76e,	// (0x00094cb1) video_down_subqcif_pane_cp_ParamLimits

0xc76e,	// (0x00094cb1) video_down_subqcif_pane_cp

0xc794,	// (0x00094cd7) im_reading_pane_ParamLimits

0xc794,	// (0x00094cd7) im_reading_pane

0x336c,	// (0x0008b8af) im_writing_pane_ParamLimits

0x336c,	// (0x0008b8af) im_writing_pane

0x338a,	// (0x0008b8cd) im_reading_pane_t1

0xc7ae,	// (0x00094cf1) list_im_pane

0xc7bf,	// (0x00094d02) scroll_pane_cp07

0x33e2,	// (0x0008b925) im_writing_pane_t1_ParamLimits

0x33e2,	// (0x0008b925) im_writing_pane_t1

0xc7d8,	// (0x00094d1b) im_writing_pane_t2_ParamLimits

0xc7d8,	// (0x00094d1b) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x00097725) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x00097725) im_writing_pane_t

0xc1b2,	// (0x000946f5) input_focus_pane_cp04

0xc1b2,	// (0x000946f5) input_focus_pane_cp05

0x33f4,	// (0x0008b937) list_im_single_pane_ParamLimits

0x33f4,	// (0x0008b937) list_im_single_pane

0x341b,	// (0x0008b95e) list_single_im_pane_t1

0xc6ed,	// (0x00094c30) blid_accuracy_pane

0xc6ed,	// (0x00094c30) blid_compass_pane

0xe44a,	// (0x0009698d) main_location_t1

0xe44a,	// (0x0009698d) main_location_t2

0xe44a,	// (0x0009698d) main_location_t3

0x0002,

0xf531,	// (0x00097a74) main_location_t

0xc1b2,	// (0x000946f5) aid_levels_location

0xc425,	// (0x00094968) blid_accuracy_pane_g1

0xc425,	// (0x00094968) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x00097779) blid_accuracy_pane_g

0xc820,	// (0x00094d63) wml_content_pane

0xc85e,	// (0x00094da1) wml_button_pane_ParamLimits

0xc85e,	// (0x00094da1) wml_button_pane

0x342a,	// (0x0008b96d) wml_list_single_large_pane_ParamLimits

0x342a,	// (0x0008b96d) wml_list_single_large_pane

0x3455,	// (0x0008b998) wml_list_single_medium_pane_ParamLimits

0x3455,	// (0x0008b998) wml_list_single_medium_pane

0x3487,	// (0x0008b9ca) wml_list_single_small_pane_ParamLimits

0x3487,	// (0x0008b9ca) wml_list_single_small_pane

0xc872,	// (0x00094db5) wml_selection_box_pane_ParamLimits

0xc872,	// (0x00094db5) wml_selection_box_pane

0xc885,	// (0x00094dc8) wml_list_single_pane_t1

0xc894,	// (0x00094dd7) wml_list_single_medium_pane_t1

0xc8a3,	// (0x00094de6) wml_list_single_large_pane_t1

0xc8b2,	// (0x00094df5) input_focus_pane_cp02_ParamLimits

0xc8b2,	// (0x00094df5) input_focus_pane_cp02

0xc8c5,	// (0x00094e08) wml_selection_box_pane_g1

0xc8ce,	// (0x00094e11) wml_selection_box_pane_t1_ParamLimits

0xc8ce,	// (0x00094e11) wml_selection_box_pane_t1

0xc40d,	// (0x00094950) bg_wml_button_pane_ParamLimits

0xc40d,	// (0x00094950) bg_wml_button_pane

0xc8e6,	// (0x00094e29) wml_button_pane_g1

0xc8ee,	// (0x00094e31) wml_button_pane_t1

0xc8e6,	// (0x00094e29) wml_button_bg_pane_g1

0xc8fe,	// (0x00094e41) wml_button_bg_pane_g2

0xc906,	// (0x00094e49) wml_button_bg_pane_g3

0xc90e,	// (0x00094e51) wml_button_bg_pane_g4

0xc916,	// (0x00094e59) wml_button_bg_pane_g5

0xc91e,	// (0x00094e61) wml_button_bg_pane_g6

0xc926,	// (0x00094e69) wml_button_bg_pane_g7

0xc92e,	// (0x00094e71) wml_button_bg_pane_g8

0xc936,	// (0x00094e79) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x0009772a) wml_button_bg_pane_g

0x34c4,	// (0x0008ba07) bg_list_pane_cp02

0xc93e,	// (0x00094e81) mce_header_pane_ParamLimits

0xc93e,	// (0x00094e81) mce_header_pane

0xc954,	// (0x00094e97) mce_icon_pane

0xc954,	// (0x00094e97) mce_image_pane

0xc95d,	// (0x00094ea0) mce_text_pane_ParamLimits

0xc95d,	// (0x00094ea0) mce_text_pane

0x34ce,	// (0x0008ba11) scroll_pane_cp03

0xc856,	// (0x00094d99) scroll_pane_cp04

0xc970,	// (0x00094eb3) scroll_pane_cp05_ParamLimits

0xc970,	// (0x00094eb3) scroll_pane_cp05

0x34d8,	// (0x0008ba1b) mce_header_field_pane_ParamLimits

0x34d8,	// (0x0008ba1b) mce_header_field_pane

0x34f8,	// (0x0008ba3b) mce_header_field_pane_2_ParamLimits

0x34f8,	// (0x0008ba3b) mce_header_field_pane_2

0x350e,	// (0x0008ba51) mce_header_field_pane_3

0x3516,	// (0x0008ba59) list_single_mce_message_pane_ParamLimits

0x3516,	// (0x0008ba59) list_single_mce_message_pane

0x3544,	// (0x0008ba87) list_single_mce_smart_pane_ParamLimits

0x3544,	// (0x0008ba87) list_single_mce_smart_pane

0xc97c,	// (0x00094ebf) input_focus_pane_cp03

0xc985,	// (0x00094ec8) list_header_data_pane

0x357d,	// (0x0008bac0) mce_header_field_pane_t1

0x358b,	// (0x0008bace) list_single_mce_header_pane_ParamLimits

0x358b,	// (0x0008bace) list_single_mce_header_pane

0xc98d,	// (0x00094ed0) list_single_mce_header_pane_t1

0xc99c,	// (0x00094edf) list_single_mce_message_pane_g1

0xc9a4,	// (0x00094ee7) list_single_mce_message_pane_t1

0x35e1,	// (0x0008bb24) bg_cale_heading_pane_cp01_ParamLimits

0x35e1,	// (0x0008bb24) bg_cale_heading_pane_cp01

0xc9b2,	// (0x00094ef5) bg_cale_pane_cp02_ParamLimits

0xc9b2,	// (0x00094ef5) bg_cale_pane_cp02

0x362f,	// (0x0008bb72) cale_month_corner_pane

0x364e,	// (0x0008bb91) cale_month_day_heading_pane_ParamLimits

0x364e,	// (0x0008bb91) cale_month_day_heading_pane

0x36b4,	// (0x0008bbf7) cale_month_pane_g1_ParamLimits

0x36b4,	// (0x0008bbf7) cale_month_pane_g1

0x36f7,	// (0x0008bc3a) cale_month_pane_g2_ParamLimits

0x36f7,	// (0x0008bc3a) cale_month_pane_g2

0x3731,	// (0x0008bc74) cale_month_pane_g3_ParamLimits

0x3731,	// (0x0008bc74) cale_month_pane_g3

0x3781,	// (0x0008bcc4) cale_month_pane_g4_ParamLimits

0x3781,	// (0x0008bcc4) cale_month_pane_g4

0x37d1,	// (0x0008bd14) cale_month_pane_g5_ParamLimits

0x37d1,	// (0x0008bd14) cale_month_pane_g5

0x3821,	// (0x0008bd64) cale_month_pane_g6_ParamLimits

0x3821,	// (0x0008bd64) cale_month_pane_g6

0x3871,	// (0x0008bdb4) cale_month_pane_g7_ParamLimits

0x3871,	// (0x0008bdb4) cale_month_pane_g7

0x38d9,	// (0x0008be1c) cale_month_pane_g8_ParamLimits

0x38d9,	// (0x0008be1c) cale_month_pane_g8

0x3941,	// (0x0008be84) cale_month_pane_g9_ParamLimits

0x3941,	// (0x0008be84) cale_month_pane_g9

0x399f,	// (0x0008bee2) cale_month_pane_g10_ParamLimits

0x399f,	// (0x0008bee2) cale_month_pane_g10

0x39fd,	// (0x0008bf40) cale_month_pane_g11_ParamLimits

0x39fd,	// (0x0008bf40) cale_month_pane_g11

0x3a51,	// (0x0008bf94) cale_month_pane_g12_ParamLimits

0x3a51,	// (0x0008bf94) cale_month_pane_g12

0x3aa7,	// (0x0008bfea) cale_month_pane_g13_ParamLimits

0x3aa7,	// (0x0008bfea) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x0009773d) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x0009773d) cale_month_pane_g

0x3afd,	// (0x0008c040) cale_month_week_pane

0x3b21,	// (0x0008c064) grid_cale_month_pane_ParamLimits

0x3b21,	// (0x0008c064) grid_cale_month_pane

0x3b7e,	// (0x0008c0c1) cale_month_day_heading_pane_t1

0x3c04,	// (0x0008c147) cale_month_day_heading_pane_t2

0x3c7d,	// (0x0008c1c0) cale_month_day_heading_pane_t3

0x3cf6,	// (0x0008c239) cale_month_day_heading_pane_t4

0x3d6f,	// (0x0008c2b2) cale_month_day_heading_pane_t5

0x3de8,	// (0x0008c32b) cale_month_day_heading_pane_t6

0x3e61,	// (0x0008c3a4) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x00097758) cale_month_day_heading_pane_t

0xc69b,	// (0x00094bde) bg_cale_side_pane_cp01

0x3ef2,	// (0x0008c435) cale_month_week_pane_t1

0x3f0b,	// (0x0008c44e) cale_month_week_pane_t2

0x3f24,	// (0x0008c467) cale_month_week_pane_t3

0x3f3d,	// (0x0008c480) cale_month_week_pane_t4

0x3f58,	// (0x0008c49b) cale_month_week_pane_t5

0x3f79,	// (0x0008c4bc) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x00097767) cale_month_week_pane_t

0x3f9a,	// (0x0008c4dd) cell_cale_month_pane_ParamLimits

0x3f9a,	// (0x0008c4dd) cell_cale_month_pane

0x40c0,	// (0x0008c603) cell_cale_month_pane_g1

0x40cc,	// (0x0008c60f) cell_cale_month_pane_t1_ParamLimits

0x40cc,	// (0x0008c60f) cell_cale_month_pane_t1

0xc6a9,	// (0x00094bec) grid_highlight_pane_cp08

0xc425,	// (0x00094968) main_smil_g1

0x40f8,	// (0x0008c63b) smil_status_pane

0xc9f1,	// (0x00094f34) smil_text_pane

0xe314,	// (0x00096857) bg_popup_call3_rect_pane_g8

0xe31c,	// (0x0009685f) bg_popup_call3_rect_pane_g9

0x0008,

0xf4b2,	// (0x000979f5) bg_popup_call3_rect_pane_g

0xe513,	// (0x00096a56) smil_status_volume_pane_g1

0xc9fb,	// (0x00094f3e) smil_status_pane_t1

0x51e7,	// (0x0008d72a) volume_smil_pane

0xca12,	// (0x00094f55) list_smil_text_pane

0x410b,	// (0x0008c64e) scroll_pane_cp011

0x4116,	// (0x0008c659) smil_text_list_pane_t1_ParamLimits

0x4116,	// (0x0008c659) smil_text_list_pane_t1

0x41a3,	// (0x0008c6e6) aid_volume_smil_ParamLimits

0x41a3,	// (0x0008c6e6) aid_volume_smil

0xc425,	// (0x00094968) smil_volume_pane_g1

0xc425,	// (0x00094968) smil_volume_pane_g2

0x0001,

0xf236,	// (0x00097779) smil_volume_pane_g

0x2978,	// (0x0008aebb) listscroll_cale_day_pane

0xca1c,	// (0x00094f5f) bg_cale_pane

0xca34,	// (0x00094f77) list_cale_pane

0xca57,	// (0x00094f9a) scroll_pane_cp09

0xca68,	// (0x00094fab) cale_bg_pane_g1

0xca70,	// (0x00094fb3) cale_bg_pane_g2

0xca78,	// (0x00094fbb) cale_bg_pane_g3

0xca80,	// (0x00094fc3) cale_bg_pane_g4

0xca88,	// (0x00094fcb) cale_bg_pane_g5

0xca90,	// (0x00094fd3) cale_bg_pane_g6

0xca98,	// (0x00094fdb) cale_bg_pane_g7

0xcaa0,	// (0x00094fe3) cale_bg_pane_g8

0xcaa8,	// (0x00094feb) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x0009777e) cale_bg_pane_g

0x41cd,	// (0x0008c710) list_cale_time_pane_ParamLimits

0x41cd,	// (0x0008c710) list_cale_time_pane

0xcab0,	// (0x00094ff3) list_cale_time_pane_g1_ParamLimits

0xcab0,	// (0x00094ff3) list_cale_time_pane_g1

0xcabc,	// (0x00094fff) list_cale_time_pane_g2_ParamLimits

0xcabc,	// (0x00094fff) list_cale_time_pane_g2

0x41f5,	// (0x0008c738) list_cale_time_pane_g3_ParamLimits

0x41f5,	// (0x0008c738) list_cale_time_pane_g3

0x4203,	// (0x0008c746) list_cale_time_pane_g4_ParamLimits

0x4203,	// (0x0008c746) list_cale_time_pane_g4

0x4211,	// (0x0008c754) list_cale_time_pane_g5_ParamLimits

0x4211,	// (0x0008c754) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x00097791) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x00097791) list_cale_time_pane_g

0xcad6,	// (0x00095019) list_cale_time_pane_t1_ParamLimits

0xcad6,	// (0x00095019) list_cale_time_pane_t1

0xcafe,	// (0x00095041) list_cale_time_pane_t2_ParamLimits

0xcafe,	// (0x00095041) list_cale_time_pane_t2

0x44e6,	// (0x0008ca29) aid_blid_cardinal_pane

0x4528,	// (0x0008ca6b) compass_pane_t4

0xcb26,	// (0x00095069) list_cale_time_pane_t4_ParamLimits

0xcb26,	// (0x00095069) list_cale_time_pane_t4

0x4536,	// (0x0008ca79) compass_pane_t5

0x4546,	// (0x0008ca89) compass_pane_t6

0x4554,	// (0x0008ca97) compass_pane_t7

0xcfae,	// (0x000954f1) navi_pane_cc_t1

0xd18b,	// (0x000956ce) aid_phob_thumbnail_center_pane

0x4984,	// (0x0008cec7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x0009779e) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x0009779e) list_cale_time_pane_t

0xbd16,	// (0x00094259) bg_popup_window_pane_cp02_ParamLimits

0xbd16,	// (0x00094259) bg_popup_window_pane_cp02

0xcb4e,	// (0x00095091) heading_pane_cp01_ParamLimits

0xcb4e,	// (0x00095091) heading_pane_cp01

0xcb5a,	// (0x0009509d) loc_req_pane_ParamLimits

0xcb5a,	// (0x0009509d) loc_req_pane

0xcb6a,	// (0x000950ad) loc_type_pane_ParamLimits

0xcb6a,	// (0x000950ad) loc_type_pane

0xcb7c,	// (0x000950bf) loc_type_pane_t1_ParamLimits

0xcb7c,	// (0x000950bf) loc_type_pane_t1

0xcb8e,	// (0x000950d1) loc_type_pane_t2_ParamLimits

0xcb8e,	// (0x000950d1) loc_type_pane_t2

0xcba0,	// (0x000950e3) loc_type_pane_t3_ParamLimits

0xcba0,	// (0x000950e3) loc_type_pane_t3

0x0002,

0xf262,	// (0x000977a5) loc_type_pane_t_ParamLimits

0xf262,	// (0x000977a5) loc_type_pane_t

0xcbb2,	// (0x000950f5) list_loc_req_pane

0xcbbc,	// (0x000950ff) scroll_pane_cp012

0x421f,	// (0x0008c762) list_single_loc_request_popup_menu_pane_ParamLimits

0x421f,	// (0x0008c762) list_single_loc_request_popup_menu_pane

0xcbc7,	// (0x0009510a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcbc7,	// (0x0009510a) list_single_loc_request_popup_menu_pane_g1

0xcbd3,	// (0x00095116) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcbd3,	// (0x00095116) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x000977ac) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x000977ac) list_single_loc_request_popup_menu_pane_g

0xcbdf,	// (0x00095122) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcbdf,	// (0x00095122) list_single_loc_request_popup_menu_pane_t1

0x4239,	// (0x0008c77c) bg_popup_window_pane_cp03_ParamLimits

0x4239,	// (0x0008c77c) bg_popup_window_pane_cp03

0x4247,	// (0x0008c78a) heading_loc_req_pane_ParamLimits

0x4247,	// (0x0008c78a) heading_loc_req_pane

0x4253,	// (0x0008c796) popup_dyc_status_message_window_g1_ParamLimits

0x4253,	// (0x0008c796) popup_dyc_status_message_window_g1

0x425f,	// (0x0008c7a2) popup_dyc_status_message_window_t1_ParamLimits

0x425f,	// (0x0008c7a2) popup_dyc_status_message_window_t1

0x4271,	// (0x0008c7b4) popup_dyc_status_message_window_t2_ParamLimits

0x4271,	// (0x0008c7b4) popup_dyc_status_message_window_t2

0x4283,	// (0x0008c7c6) popup_dyc_status_message_window_t3_ParamLimits

0x4283,	// (0x0008c7c6) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x000977b1) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x000977b1) popup_dyc_status_message_window_t

0xc1b2,	// (0x000946f5) bg_heading_pane_cp01

0xcbf5,	// (0x00095138) heading_loc_req_pane_g1

0xcbfd,	// (0x00095140) heading_loc_req_pane_g2

0xcc05,	// (0x00095148) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x000977b8) heading_loc_req_pane_g

0xcc0d,	// (0x00095150) heading_loc_req_pane_t1

0xcc2c,	// (0x0009516f) bg_popup_sub_pane_cp01_ParamLimits

0xcc2c,	// (0x0009516f) bg_popup_sub_pane_cp01

0xcc3a,	// (0x0009517d) popup_cale_events_window_g1_ParamLimits

0xcc3a,	// (0x0009517d) popup_cale_events_window_g1

0xcc5a,	// (0x0009519d) popup_cale_events_window_g2_ParamLimits

0xcc5a,	// (0x0009519d) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x000977da) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x000977da) popup_cale_events_window_g

0xcc7a,	// (0x000951bd) popup_cale_events_window_t1_ParamLimits

0xcc7a,	// (0x000951bd) popup_cale_events_window_t1

0xcc8c,	// (0x000951cf) popup_cale_events_window_t2_ParamLimits

0xcc8c,	// (0x000951cf) popup_cale_events_window_t2

0xccca,	// (0x0009520d) popup_cale_events_window_t3_ParamLimits

0xccca,	// (0x0009520d) popup_cale_events_window_t3

0xcd04,	// (0x00095247) popup_cale_events_window_t4_ParamLimits

0xcd04,	// (0x00095247) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x000977df) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x000977df) popup_cale_events_window_t

0x42ad,	// (0x0008c7f0) call_type_pane

0xda6b,	// (0x00095fae) popup_call_status_window_g1

0x42b9,	// (0x0008c7fc) popup_call_status_window_g2

0x42c5,	// (0x0008c808) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x000977e8) popup_call_status_window_g

0xcd3a,	// (0x0009527d) call_type_pane_g1

0xcd43,	// (0x00095286) call_type_pane_g2

0x0001,

0xf2ac,	// (0x000977ef) call_type_pane_g

0xc1b2,	// (0x000946f5) bg_popup_sub_pane_cp02

0xcd4c,	// (0x0009528f) listscroll_popup_wml_pane

0xcd54,	// (0x00095297) list_wml_pane

0xcd5e,	// (0x000952a1) scroll_pane_cp013

0xcd69,	// (0x000952ac) list_single_graphic_popup_wml_pane_ParamLimits

0xcd69,	// (0x000952ac) list_single_graphic_popup_wml_pane

0xc425,	// (0x00094968) list_single_graphic_popup_wml_pane_g1

0xcd7d,	// (0x000952c0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x000977f4) list_single_graphic_popup_wml_pane_g

0xcd85,	// (0x000952c8) list_single_graphic_popup_wml_pane_t1

0xcd93,	// (0x000952d6) aid_call_pane

0xc405,	// (0x00094948) popup_clock_analogue_window_g1

0xc405,	// (0x00094948) popup_clock_analogue_window_g2

0x42d1,	// (0x0008c814) popup_clock_analogue_window_g3

0x42d1,	// (0x0008c814) popup_clock_analogue_window_g4

0xc425,	// (0x00094968) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x000977f9) popup_clock_analogue_window_g

0x42d9,	// (0x0008c81c) popup_clock_analogue_window_t1

0x42e7,	// (0x0008c82a) clock_digital_number_pane_ParamLimits

0x42e7,	// (0x0008c82a) clock_digital_number_pane

0x42f3,	// (0x0008c836) clock_digital_number_pane_cp02_ParamLimits

0x42f3,	// (0x0008c836) clock_digital_number_pane_cp02

0x42ff,	// (0x0008c842) clock_digital_number_pane_cp03_ParamLimits

0x42ff,	// (0x0008c842) clock_digital_number_pane_cp03

0x430b,	// (0x0008c84e) clock_digital_number_pane_cp04_ParamLimits

0x430b,	// (0x0008c84e) clock_digital_number_pane_cp04

0x4317,	// (0x0008c85a) clock_digital_separator_pane_ParamLimits

0x4317,	// (0x0008c85a) clock_digital_separator_pane

0x4323,	// (0x0008c866) popup_clock_digital_window_t1

0xc425,	// (0x00094968) clock_digital_number_pane_g1

0xc425,	// (0x00094968) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x00097779) clock_digital_number_pane_g

0xc425,	// (0x00094968) clock_digital_separator_pane_g1

0xc425,	// (0x00094968) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x00097779) clock_digital_separator_pane_g

0xc1b2,	// (0x000946f5) bg_popup_window_pane_cp04

0xcdaf,	// (0x000952f2) heading_pane_cp03

0xc6ed,	// (0x00094c30) listscroll_popup_gms_pane

0xc1b2,	// (0x000946f5) grid_large_graphic_popup_pane

0xcdb8,	// (0x000952fb) listscroll_popup_gms_pane_g1

0xcdc1,	// (0x00095304) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x00097804) listscroll_popup_gms_pane_g

0xcdca,	// (0x0009530d) scroll_pane_cp014

0xc47a,	// (0x000949bd) cell_large_graphic_popup_pane_ParamLimits

0xc47a,	// (0x000949bd) cell_large_graphic_popup_pane

0xc488,	// (0x000949cb) cell_large_graphic_popup_pane_g1_ParamLimits

0xc488,	// (0x000949cb) cell_large_graphic_popup_pane_g1

0xcdd3,	// (0x00095316) cell_large_graphic_popup_pane_g2_ParamLimits

0xcdd3,	// (0x00095316) cell_large_graphic_popup_pane_g2

0xcde1,	// (0x00095324) cell_large_graphic_popup_pane_g3_ParamLimits

0xcde1,	// (0x00095324) cell_large_graphic_popup_pane_g3

0xcdef,	// (0x00095332) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdef,	// (0x00095332) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x00097809) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x00097809) cell_large_graphic_popup_pane_g

0xc1b2,	// (0x000946f5) grid_highlight_pane_cp010

0xc425,	// (0x00094968) bg_popup_call_pane_g1

0xce00,	// (0x00095343) list_single_graphic_popup_conf_pane_ParamLimits

0xce00,	// (0x00095343) list_single_graphic_popup_conf_pane

0xce13,	// (0x00095356) list_highlight_pane_cp01

0xce1c,	// (0x0009535f) list_single_graphic_popup_conf_pane_g1

0xce24,	// (0x00095367) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x00097812) list_single_graphic_popup_conf_pane_g

0xce2c,	// (0x0009536f) list_single_graphic_popup_conf_pane_t1

0xce3a,	// (0x0009537d) linegrid_cams_pane_g1

0x4340,	// (0x0008c883) linegrid_cams_pane_g2

0xc61e,	// (0x00094b61) linegrid_cams_pane_g3

0xce43,	// (0x00095386) linegrid_cams_pane_g4

0x4349,	// (0x0008c88c) linegrid_cams_pane_g5

0x4352,	// (0x0008c895) linegrid_cams_pane_g6

0xc6dc,	// (0x00094c1f) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x00097817) linegrid_cams_pane_g

0xce4c,	// (0x0009538f) popup_clock_analogue_window

0xce4c,	// (0x0009538f) popup_clock_digital_window

0xc1b2,	// (0x000946f5) popup_phob_thumbnail_window

0xc425,	// (0x00094968) call_video_uplink_pane_g1

0xce55,	// (0x00095398) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x00097826) call_video_uplink_pane_g

0xce5d,	// (0x000953a0) video_uplink_pane

0xce65,	// (0x000953a8) mce_image_pane_g1

0x435b,	// (0x0008c89e) mce_image_pane_g2

0x4363,	// (0x0008c8a6) mce_image_pane_g3

0x436b,	// (0x0008c8ae) mce_image_pane_g4

0x4373,	// (0x0008c8b6) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x0009782b) mce_image_pane_g

0xce6f,	// (0x000953b2) control_top_pane_stacon_cp01_ParamLimits

0xce6f,	// (0x000953b2) control_top_pane_stacon_cp01

0xce83,	// (0x000953c6) uni_indicator_pane_stacon_cp01_ParamLimits

0xce83,	// (0x000953c6) uni_indicator_pane_stacon_cp01

0xce94,	// (0x000953d7) bg_popup_sub_pane_cp03

0x437b,	// (0x0008c8be) chi_dic_find_pane

0x4383,	// (0x0008c8c6) listscroll_chi_dic_pane

0x438c,	// (0x0008c8cf) main_pane_chidic_g1

0x439f,	// (0x0008c8e2) chi_dic_find_pane_t1

0xce9e,	// (0x000953e1) find_chidic_pane

0xcea7,	// (0x000953ea) chi_dic_list_pane_ParamLimits

0xcea7,	// (0x000953ea) chi_dic_list_pane

0xceb8,	// (0x000953fb) scroll_pane_cp020

0x43ad,	// (0x0008c8f0) find_chidic_pane_t1

0xc1b2,	// (0x000946f5) input_focus_pane_cp06

0x43bc,	// (0x0008c8ff) list_chi_dic_pane_ParamLimits

0x43bc,	// (0x0008c8ff) list_chi_dic_pane

0x43d9,	// (0x0008c91c) list_chi_dic_pane_t1_ParamLimits

0x43d9,	// (0x0008c91c) list_chi_dic_pane_t1

0xc1b2,	// (0x000946f5) list_highlight_pane_cp020

0xcec0,	// (0x00095403) bg_cale_heading_pane_g1

0x43ec,	// (0x0008c92f) bg_cale_heading_pane_g2

0x43f4,	// (0x0008c937) bg_cale_heading_pane_g3

0x43fc,	// (0x0008c93f) bg_cale_heading_pane_g4

0x4406,	// (0x0008c949) bg_cale_heading_pane_g5

0x4410,	// (0x0008c953) bg_cale_heading_pane_g6

0x4418,	// (0x0008c95b) bg_cale_heading_pane_g7

0x4420,	// (0x0008c963) bg_cale_heading_pane_g8

0x442a,	// (0x0008c96d) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x00097836) bg_cale_heading_pane_g

0xcec0,	// (0x00095403) bg_cale_side_pane_g1

0x4434,	// (0x0008c977) bg_cale_side_pane_g2

0x443e,	// (0x0008c981) bg_cale_side_pane_g3

0x4448,	// (0x0008c98b) bg_cale_side_pane_g4

0x4452,	// (0x0008c995) bg_cale_side_pane_g5

0x445c,	// (0x0008c99f) bg_cale_side_pane_g6

0x4466,	// (0x0008c9a9) bg_cale_side_pane_g7

0x4470,	// (0x0008c9b3) bg_cale_side_pane_g8

0x4478,	// (0x0008c9bb) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x00097849) bg_cale_side_pane_g

0x4480,	// (0x0008c9c3) popup_call_status_window_ParamLimits

0x4480,	// (0x0008c9c3) popup_call_status_window

0xcec8,	// (0x0009540b) stacon_top_pane

0xced0,	// (0x00095413) status_pane_ParamLimits

0xced0,	// (0x00095413) status_pane

0xcee5,	// (0x00095428) status_small_pane

0xceed,	// (0x00095430) control_pane

0xc1b2,	// (0x000946f5) stacon_bottom_pane

0xcef5,	// (0x00095438) list_single_mce_smart_pane_t1_ParamLimits

0xcef5,	// (0x00095438) list_single_mce_smart_pane_t1

0xcf08,	// (0x0009544b) list_single_mce_smart_pane_t2_ParamLimits

0xcf08,	// (0x0009544b) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x0009785c) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x0009785c) list_single_mce_smart_pane_t

0x448c,	// (0x0008c9cf) compass_pane

0x4498,	// (0x0008c9db) main_location2_pane_t1

0x44ac,	// (0x0008c9ef) main_location2_pane_t2

0x44c0,	// (0x0008ca03) main_location2_pane_t3

0x0003,

0xf31e,	// (0x00097861) main_location2_pane_t

0xcf27,	// (0x0009546a) compass_pane_g1_ParamLimits

0xcf27,	// (0x0009546a) compass_pane_g1

0x450a,	// (0x0008ca4d) compass_pane_t1

0x4519,	// (0x0008ca5c) compass_pane_t2

0x0005,

0xf327,	// (0x0009786a) compass_pane_t

0x4564,	// (0x0008caa7) text_secondary_cp61

0xcfa5,	// (0x000954e8) navi_pane_cams_g5

0xd021,	// (0x00095564) navi_pane_im_t1

0xd02f,	// (0x00095572) navi_pane_mp_g1_ParamLimits

0xd02f,	// (0x00095572) navi_pane_mp_g1

0xd043,	// (0x00095586) navi_pane_mp_g2_ParamLimits

0xd043,	// (0x00095586) navi_pane_mp_g2

0xd04f,	// (0x00095592) navi_pane_mp_g3_ParamLimits

0xd04f,	// (0x00095592) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x0009787e) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x0009787e) navi_pane_mp_g

0xd05b,	// (0x0009559e) navi_pane_mp_t1

0xd069,	// (0x000955ac) navi_pane_mp_t2

0x0002,

0xf342,	// (0x00097885) navi_pane_mp_t

0xd0d4,	// (0x00095617) navi_pane_vt_g1

0xd05b,	// (0x0009559e) navi_pane_vt_t1

0xd0dc,	// (0x0009561f) navi_slider_pane

0xc6ed,	// (0x00094c30) zooming_pane

0xd0ec,	// (0x0009562f) navi_slider_pane_g1

0x459f,	// (0x0008cae2) navi_slider_pane_g2

0x0006,

0xf349,	// (0x0009788c) navi_slider_pane_g

0xd110,	// (0x00095653) aid_levels_zoom

0xd118,	// (0x0009565b) zooming_pane_g1

0xd120,	// (0x00095663) zooming_pane_g2

0xd120,	// (0x00095663) zooming_pane_g3

0x0002,

0xf358,	// (0x0009789b) zooming_pane_g

0xd128,	// (0x0009566b) level_10_zoom

0xd131,	// (0x00095674) level_11_zoom

0xd13a,	// (0x0009567d) level_1_zoom

0xd143,	// (0x00095686) level_2_zoom

0xd14c,	// (0x0009568f) level_3_zoom

0xd155,	// (0x00095698) level_4_zoom

0xd15e,	// (0x000956a1) level_5_zoom

0xd167,	// (0x000956aa) level_6_zoom

0xd170,	// (0x000956b3) level_7_zoom

0xd179,	// (0x000956bc) level_8_zoom

0xd182,	// (0x000956c5) level_9_zoom

0xd193,	// (0x000956d6) popup_phob_thumbnail_window_g1

0xd19b,	// (0x000956de) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x000978a2) popup_phob_thumbnail_window_g

0x4e96,	// (0x0008d3d9) level_1_location

0x4e9e,	// (0x0008d3e1) level_2_location

0x4ea6,	// (0x0008d3e9) level_3_location

0x4eb0,	// (0x0008d3f3) level_4_location

0xc6ed,	// (0x00094c30) level_5_location

0x45b1,	// (0x0008caf4) mce_icon_pane_g1

0x45b9,	// (0x0008cafc) mce_icon_pane_g2

0x0001,

0xf364,	// (0x000978a7) mce_icon_pane_g

0x45c1,	// (0x0008cb04) main_mup_pane_g1_ParamLimits

0x45c1,	// (0x0008cb04) main_mup_pane_g1

0xc4a4,	// (0x000949e7) main_mup_pane_g2_ParamLimits

0xc4a4,	// (0x000949e7) main_mup_pane_g2

0xc4a4,	// (0x000949e7) main_mup_pane_g3_ParamLimits

0xc4a4,	// (0x000949e7) main_mup_pane_g3

0xc4a4,	// (0x000949e7) main_mup_pane_g4_ParamLimits

0xc4a4,	// (0x000949e7) main_mup_pane_g4

0xc4a4,	// (0x000949e7) main_mup_pane_g5_ParamLimits

0xc4a4,	// (0x000949e7) main_mup_pane_g5

0xc4a4,	// (0x000949e7) main_mup_pane_g6_ParamLimits

0xc4a4,	// (0x000949e7) main_mup_pane_g6

0xc4a4,	// (0x000949e7) main_mup_pane_g7_ParamLimits

0xc4a4,	// (0x000949e7) main_mup_pane_g7

0xc4a4,	// (0x000949e7) main_mup_pane_g8_ParamLimits

0xc4a4,	// (0x000949e7) main_mup_pane_g8

0xc4a4,	// (0x000949e7) main_mup_pane_g9_ParamLimits

0xc4a4,	// (0x000949e7) main_mup_pane_g9

0xc4a4,	// (0x000949e7) main_mup_pane_g10_ParamLimits

0xc4a4,	// (0x000949e7) main_mup_pane_g10

0xc4a4,	// (0x000949e7) main_mup_pane_g11_ParamLimits

0xc4a4,	// (0x000949e7) main_mup_pane_g11

0xc496,	// (0x000949d9) main_mup_pane_g12_ParamLimits

0xc496,	// (0x000949d9) main_mup_pane_g12

0xc4a4,	// (0x000949e7) main_mup_pane_g13_ParamLimits

0xc4a4,	// (0x000949e7) main_mup_pane_g13

0x000c,

0xf369,	// (0x000978ac) main_mup_pane_g_ParamLimits

0xf369,	// (0x000978ac) main_mup_pane_g

0xc4b2,	// (0x000949f5) main_mup_pane_t1_ParamLimits

0xc4b2,	// (0x000949f5) main_mup_pane_t1

0xc4b2,	// (0x000949f5) main_mup_pane_t2_ParamLimits

0xc4b2,	// (0x000949f5) main_mup_pane_t2

0xc4b2,	// (0x000949f5) main_mup_pane_t3_ParamLimits

0xc4b2,	// (0x000949f5) main_mup_pane_t3

0xc4e4,	// (0x00094a27) main_mup_pane_t4_ParamLimits

0xc4e4,	// (0x00094a27) main_mup_pane_t4

0xc4e4,	// (0x00094a27) main_mup_pane_t5_ParamLimits

0xc4e4,	// (0x00094a27) main_mup_pane_t5

0xc4d0,	// (0x00094a13) main_mup_pane_t6_ParamLimits

0xc4d0,	// (0x00094a13) main_mup_pane_t6

0x0005,

0xf384,	// (0x000978c7) main_mup_pane_t_ParamLimits

0xf384,	// (0x000978c7) main_mup_pane_t

0xc090,	// (0x000945d3) mup_progress_pane_ParamLimits

0xc090,	// (0x000945d3) mup_progress_pane

0xe3d4,	// (0x00096917) mup_visualizer_pane_ParamLimits

0xe3d4,	// (0x00096917) mup_visualizer_pane

0xe3d4,	// (0x00096917) mup_volume_pane_ParamLimits

0xe3d4,	// (0x00096917) mup_volume_pane

0xc496,	// (0x000949d9) mup_visualizer_pane_g1_ParamLimits

0xc496,	// (0x000949d9) mup_visualizer_pane_g1

0xd1a3,	// (0x000956e6) mup_visualizer_pane_g2_ParamLimits

0xd1a3,	// (0x000956e6) mup_visualizer_pane_g2

0xc488,	// (0x000949cb) mup_visualizer_pane_g3_ParamLimits

0xc488,	// (0x000949cb) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x000978d4) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x000978d4) mup_visualizer_pane_g

0xc4c6,	// (0x00094a09) mup_volume_pane_g1

0xc4c6,	// (0x00094a09) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x000975f2) mup_volume_pane_g

0xc4c6,	// (0x00094a09) mup_progress_pane_g1

0xc4c6,	// (0x00094a09) mup_progress_pane_g2

0xc4c6,	// (0x00094a09) mup_progress_pane_g3

0x0002,

0xf398,	// (0x000978db) mup_progress_pane_g

0xc1b2,	// (0x000946f5) bg_popup_window_pane_cp05

0xd1b1,	// (0x000956f4) heading_pane_cp02_ParamLimits

0xd1b1,	// (0x000956f4) heading_pane_cp02

0xd1cb,	// (0x0009570e) list_popup_blid_pane

0xd1d3,	// (0x00095716) list_blid_sat_info_pane_ParamLimits

0xd1d3,	// (0x00095716) list_blid_sat_info_pane

0xd1e6,	// (0x00095729) list_blid_sat_info_pane_g1

0xd1ee,	// (0x00095731) list_blid_sat_info_pane_t1

0x46bc,	// (0x0008cbff) mup_equalizer_pane_ParamLimits

0x46bc,	// (0x0008cbff) mup_equalizer_pane

0x46dd,	// (0x0008cc20) mup_equalizer_pane_cp1_ParamLimits

0x46dd,	// (0x0008cc20) mup_equalizer_pane_cp1

0x46fe,	// (0x0008cc41) mup_equalizer_pane_cp2_ParamLimits

0x46fe,	// (0x0008cc41) mup_equalizer_pane_cp2

0x471f,	// (0x0008cc62) mup_equalizer_pane_cp3_ParamLimits

0x471f,	// (0x0008cc62) mup_equalizer_pane_cp3

0x4740,	// (0x0008cc83) mup_equalizer_pane_cp4_ParamLimits

0x4740,	// (0x0008cc83) mup_equalizer_pane_cp4

0x4761,	// (0x0008cca4) mup_equalizer_pane_cp5

0x4777,	// (0x0008ccba) mup_equalizer_pane_cp6

0x478f,	// (0x0008ccd2) mup_equalizer_pane_cp7

0xe394,	// (0x000968d7) bg_popup_call_poc_act_pane_g9

0xe39c,	// (0x000968df) bg_popup_call_poc_act_pane_g10

0xe3a4,	// (0x000968e7) bg_popup_call_poc_act_pane_g11

0x000a,

0xc40d,	// (0x00094950) mup_scale_pane

0xc425,	// (0x00094968) mup_scale_pane_g1

0xd1fc,	// (0x0009573f) mup_scale_pane_g2

0x0006,

0xf3b4,	// (0x000978f7) mup_scale_pane_g

0xd220,	// (0x00095763) msg_data_pane

0xd228,	// (0x0009576b) scroll_pane_cp017

0x47b9,	// (0x0008ccfc) bg_list_pane_cp04_ParamLimits

0x47b9,	// (0x0008ccfc) bg_list_pane_cp04

0xd238,	// (0x0009577b) msg_data_pane_g1

0x47d5,	// (0x0008cd18) msg_data_pane_g2

0x47dd,	// (0x0008cd20) msg_data_pane_g3

0x47e5,	// (0x0008cd28) msg_data_pane_g4

0x47ed,	// (0x0008cd30) msg_data_pane_g5

0x47f5,	// (0x0008cd38) msg_data_pane_g6

0x47fd,	// (0x0008cd40) msg_data_pane_g7

0x0006,

0xf3c3,	// (0x00097906) msg_data_pane_g

0x4805,	// (0x0008cd48) msg_text_pane_ParamLimits

0x4805,	// (0x0008cd48) msg_text_pane

0x4866,	// (0x0008cda9) qrid_highlight_pane_cp011_ParamLimits

0x4866,	// (0x0008cda9) qrid_highlight_pane_cp011

0xc1b2,	// (0x000946f5) msg_body_pane

0xc40d,	// (0x00094950) msg_header_pane

0xd254,	// (0x00095797) input_focus_pane_cp07

0xd275,	// (0x000957b8) msg_header_pane_t1_ParamLimits

0xd275,	// (0x000957b8) msg_header_pane_t1

0xd291,	// (0x000957d4) msg_header_pane_t2_ParamLimits

0xd291,	// (0x000957d4) msg_header_pane_t2

0x0001,

0xf3d7,	// (0x0009791a) msg_header_pane_t_ParamLimits

0xf3d7,	// (0x0009791a) msg_header_pane_t

0xd2b1,	// (0x000957f4) msg_body_pane_g1

0xd2b9,	// (0x000957fc) msg_body_pane_t1_ParamLimits

0xd2b9,	// (0x000957fc) msg_body_pane_t1

0xd2ea,	// (0x0009582d) msg_body_pane_t2_ParamLimits

0xd2ea,	// (0x0009582d) msg_body_pane_t2

0xd2fc,	// (0x0009583f) msg_body_pane_t3_ParamLimits

0xd2fc,	// (0x0009583f) msg_body_pane_t3

0x0002,

0xf3dc,	// (0x0009791f) msg_body_pane_t_ParamLimits

0xf3dc,	// (0x0009791f) msg_body_pane_t

0x48e0,	// (0x0008ce23) main_viewer_pane_g1_ParamLimits

0x48e0,	// (0x0008ce23) main_viewer_pane_g1

0x48ec,	// (0x0008ce2f) main_viewer_pane_g2_ParamLimits

0x48ec,	// (0x0008ce2f) main_viewer_pane_g2

0x48f8,	// (0x0008ce3b) main_viewer_pane_g3_ParamLimits

0x48f8,	// (0x0008ce3b) main_viewer_pane_g3

0x4909,	// (0x0008ce4c) main_viewer_pane_g4_ParamLimits

0x4909,	// (0x0008ce4c) main_viewer_pane_g4

0x491a,	// (0x0008ce5d) main_viewer_pane_g5_ParamLimits

0x491a,	// (0x0008ce5d) main_viewer_pane_g5

0x491a,	// (0x0008ce5d) main_viewer_pane_g7_ParamLimits

0x491a,	// (0x0008ce5d) main_viewer_pane_g7

0xcbc7,	// (0x0009510a) main_viewer_pane_g8_ParamLimits

0xcbc7,	// (0x0009510a) main_viewer_pane_g8

0x0007,

0xf3ec,	// (0x0009792f) main_viewer_pane_g_ParamLimits

0xf3ec,	// (0x0009792f) main_viewer_pane_g

0xd30e,	// (0x00095851) viewer_content_pane_ParamLimits

0xd30e,	// (0x00095851) viewer_content_pane

0x4958,	// (0x0008ce9b) main_postcard_pane_g1_ParamLimits

0x4958,	// (0x0008ce9b) main_postcard_pane_g1

0x4966,	// (0x0008cea9) main_postcard_pane_g2_ParamLimits

0x4966,	// (0x0008cea9) main_postcard_pane_g2

0x4974,	// (0x0008ceb7) main_postcard_pane_g3_ParamLimits

0x4974,	// (0x0008ceb7) main_postcard_pane_g3

0x0005,

0xf3fd,	// (0x00097940) main_postcard_pane_g_ParamLimits

0xf3fd,	// (0x00097940) main_postcard_pane_g

0x4984,	// (0x0008cec7) main_postcard_pane_g4

0xe526,	// (0x00096a69) smil_status_volume_pane_g2

0x49b0,	// (0x0008cef3) postcard_pane_ParamLimits

0x49b0,	// (0x0008cef3) postcard_pane

0xda6b,	// (0x00095fae) postcard_pane_g1_ParamLimits

0xda6b,	// (0x00095fae) postcard_pane_g1

0x49e2,	// (0x0008cf25) postcard_pane_g2_ParamLimits

0x49e2,	// (0x0008cf25) postcard_pane_g2

0x49ee,	// (0x0008cf31) postcard_pane_g3_ParamLimits

0x49ee,	// (0x0008cf31) postcard_pane_g3

0xd31c,	// (0x0009585f) postcard_pane_g4_ParamLimits

0xd31c,	// (0x0009585f) postcard_pane_g4

0x49fa,	// (0x0008cf3d) postcard_pane_g5_ParamLimits

0x49fa,	// (0x0008cf3d) postcard_pane_g5

0x4a06,	// (0x0008cf49) postcard_pane_g6_ParamLimits

0x4a06,	// (0x0008cf49) postcard_pane_g6

0xd32a,	// (0x0009586d) postcard_pane_g7_ParamLimits

0xd32a,	// (0x0009586d) postcard_pane_g7

0x0006,

0xf40a,	// (0x0009794d) postcard_pane_g_ParamLimits

0xf40a,	// (0x0009794d) postcard_pane_g

0x4a12,	// (0x0008cf55) main_mp2_pane_g1_ParamLimits

0x4a12,	// (0x0008cf55) main_mp2_pane_g1

0x4a1e,	// (0x0008cf61) main_mp2_pane_g2_ParamLimits

0x4a1e,	// (0x0008cf61) main_mp2_pane_g2

0x4a2a,	// (0x0008cf6d) main_mp2_pane_g3_ParamLimits

0x4a2a,	// (0x0008cf6d) main_mp2_pane_g3

0x0002,

0xf419,	// (0x0009795c) main_mp2_pane_g_ParamLimits

0xf419,	// (0x0009795c) main_mp2_pane_g

0x4a36,	// (0x0008cf79) main_mp2_pane_t1_ParamLimits

0x4a36,	// (0x0008cf79) main_mp2_pane_t1

0x4a4d,	// (0x0008cf90) main_mp2_pane_t2_ParamLimits

0x4a4d,	// (0x0008cf90) main_mp2_pane_t2

0x4a5f,	// (0x0008cfa2) main_mp2_pane_t3_ParamLimits

0x4a5f,	// (0x0008cfa2) main_mp2_pane_t3

0x0002,

0xf420,	// (0x00097963) main_mp2_pane_t_ParamLimits

0xf420,	// (0x00097963) main_mp2_pane_t

0xc090,	// (0x000945d3) pec_content_pane_ParamLimits

0xc090,	// (0x000945d3) pec_content_pane

0xaa49,	// (0x00092f8c) scroll_pane_cp015

0xd338,	// (0x0009587b) pec_attribute_pane_ParamLimits

0xd338,	// (0x0009587b) pec_attribute_pane

0xc488,	// (0x000949cb) pec_content_pane_g1_ParamLimits

0xc488,	// (0x000949cb) pec_content_pane_g1

0xd346,	// (0x00095889) pec_content_pane_t1_ParamLimits

0xd346,	// (0x00095889) pec_content_pane_t1

0xd35a,	// (0x0009589d) pec_content_pane_t2_ParamLimits

0xd35a,	// (0x0009589d) pec_content_pane_t2

0x0001,

0xf427,	// (0x0009796a) pec_content_pane_t_ParamLimits

0xf427,	// (0x0009796a) pec_content_pane_t

0xc47a,	// (0x000949bd) list_single_graphic_pane_cp01_ParamLimits

0xc47a,	// (0x000949bd) list_single_graphic_pane_cp01

0xc40d,	// (0x00094950) bg_popup_sub_pane_cp04

0xd36e,	// (0x000958b1) popup_mup_playback_window_g1

0xd37a,	// (0x000958bd) popup_mup_playback_window_t1

0xd38f,	// (0x000958d2) popup_mup_playback_window_t2

0x0001,

0xf42c,	// (0x0009796f) popup_mup_playback_window_t

0xd3c6,	// (0x00095909) main_image_pane_g1_ParamLimits

0xd3c6,	// (0x00095909) main_image_pane_g1

0xd42b,	// (0x0009596e) scroll_pane_cp018_ParamLimits

0xd42b,	// (0x0009596e) scroll_pane_cp018

0xd443,	// (0x00095986) scroll_pane_cp016_ParamLimits

0xd443,	// (0x00095986) scroll_pane_cp016

0x4ae2,	// (0x0008d025) smil2_image_pane_ParamLimits

0x4ae2,	// (0x0008d025) smil2_image_pane

0x4b12,	// (0x0008d055) smil2_root_pane_ParamLimits

0x4b12,	// (0x0008d055) smil2_root_pane

0x4b3e,	// (0x0008d081) smil2_text_pane_ParamLimits

0x4b3e,	// (0x0008d081) smil2_text_pane

0xaa49,	// (0x00092f8c) bg_list_pane_cp06

0xaa49,	// (0x00092f8c) grid_radio_pane

0xc1b2,	// (0x000946f5) bg_popup_window_pane_cp06

0xcc1c,	// (0x0009515f) main_fmradio_pane_t1

0xe3fa,	// (0x0009693d) heading_pane_cp04

0xcc1c,	// (0x0009515f) main_fmradio_pane_t2

0xe402,	// (0x00096945) popup_cale_lunar_info_window_g1

0xcc1c,	// (0x0009515f) main_fmradio_pane_t3

0xe40a,	// (0x0009694d) popup_cale_lunar_info_window_g2

0xcc1c,	// (0x0009515f) main_fmradio_pane_t4

0x0001,

0xcc1c,	// (0x0009515f) main_fmradio_pane_t5

0x0004,

0xf514,	// (0x00097a57) popup_cale_lunar_info_window_g

0xf28c,	// (0x000977cf) main_fmradio_pane_t

0xaa49,	// (0x00092f8c) wait_bar_pane_cp03

0xc47a,	// (0x000949bd) cell_fmradio_pane_ParamLimits

0xc47a,	// (0x000949bd) cell_fmradio_pane

0xc488,	// (0x000949cb) cell_fmradio_pane_g1_ParamLimits

0xc488,	// (0x000949cb) cell_fmradio_pane_g1

0xaa49,	// (0x00092f8c) grid_highlight_pane_cp011

0xd477,	// (0x000959ba) poc_content_pane_ParamLimits

0xd477,	// (0x000959ba) poc_content_pane

0xd489,	// (0x000959cc) scroll_pane_cp019

0x4b7e,	// (0x0008d0c1) popup_call_poc_act_window_ParamLimits

0x4b7e,	// (0x0008d0c1) popup_call_poc_act_window

0x4b8b,	// (0x0008d0ce) popup_call_poc_inact_window_ParamLimits

0x4b8b,	// (0x0008d0ce) popup_call_poc_inact_window

0xf4d8,	// (0x00097a1b) bg_popup_call_poc_act_pane_g

0xe3ac,	// (0x000968ef) bg_popup_call_poc_inact_pane_g1

0xe3b4,	// (0x000968f7) bg_popup_call_poc_inact_pane_g2

0xd491,	// (0x000959d4) popup_call_poc_act_window_g2

0xe3bc,	// (0x000968ff) bg_popup_call_poc_inact_pane_g3

0xe33c,	// (0x0009687f) bg_popup_call_poc_inact_pane_g4

0xe3c4,	// (0x00096907) bg_popup_call_poc_inact_pane_g5

0xd499,	// (0x000959dc) popup_call_poc_act_window_t1_ParamLimits

0xd499,	// (0x000959dc) popup_call_poc_act_window_t1

0xd4c1,	// (0x00095a04) popup_call_poc_act_window_t2_ParamLimits

0xd4c1,	// (0x00095a04) popup_call_poc_act_window_t2

0xd4e9,	// (0x00095a2c) popup_call_poc_act_window_t3_ParamLimits

0xd4e9,	// (0x00095a2c) popup_call_poc_act_window_t3

0xd511,	// (0x00095a54) popup_call_poc_act_window_t4_ParamLimits

0xd511,	// (0x00095a54) popup_call_poc_act_window_t4

0x0003,

0xf441,	// (0x00097984) popup_call_poc_act_window_t_ParamLimits

0xf441,	// (0x00097984) popup_call_poc_act_window_t

0xe3cc,	// (0x0009690f) bg_popup_call_poc_inact_pane_g6

0xe3e2,	// (0x00096925) bg_popup_call_poc_inact_pane_g7

0xe3ea,	// (0x0009692d) bg_popup_call_poc_inact_pane_g8

0xd523,	// (0x00095a66) popup_call_poc_inact_window_g2

0xe3f2,	// (0x00096935) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4ef,	// (0x00097a32) bg_popup_call_poc_inact_pane_g

0xd52b,	// (0x00095a6e) popup_call_poc_inact_window_t1_ParamLimits

0xd52b,	// (0x00095a6e) popup_call_poc_inact_window_t1

0xd540,	// (0x00095a83) popup_call_poc_inact_window_t2_ParamLimits

0xd540,	// (0x00095a83) popup_call_poc_inact_window_t2

0xd555,	// (0x00095a98) popup_call_poc_inact_window_t3_ParamLimits

0xd555,	// (0x00095a98) popup_call_poc_inact_window_t3

0x0002,

0xf44a,	// (0x0009798d) popup_call_poc_inact_window_t_ParamLimits

0xf44a,	// (0x0009798d) popup_call_poc_inact_window_t

0xe49e,	// (0x000969e1) context_pane_ParamLimits

0x519e,	// (0x0008d6e1) signal_pane_ParamLimits

0xc6ed,	// (0x00094c30) main_call2_pane

0x5111,	// (0x0008d654) popup_phob_thumbnail2_window_ParamLimits

0x5111,	// (0x0008d654) popup_phob_thumbnail2_window

0x488e,	// (0x0008cdd1) aid_hotspot_pointer_arrow_pane

0x4896,	// (0x0008cdd9) aid_hotspot_pointer_hand_pane

0x4e5e,	// (0x0008d3a1) phob_pre_status_pane_g5

0xc47a,	// (0x000949bd) cams_zoom_pane_ParamLimits

0xc47a,	// (0x000949bd) image_vga_pane_ParamLimits

0xc496,	// (0x000949d9) main_camera_pane_g1_ParamLimits

0xc496,	// (0x000949d9) main_camera_pane_g2_ParamLimits

0xc496,	// (0x000949d9) main_camera_pane_g3_ParamLimits

0xc496,	// (0x000949d9) main_camera_pane_g4_ParamLimits

0xc496,	// (0x000949d9) main_camera_pane_g5_ParamLimits

0xc496,	// (0x000949d9) main_camera_pane_g6_ParamLimits

0xc496,	// (0x000949d9) main_camera_pane_g7_ParamLimits

0xf180,	// (0x000976c3) main_camera_pane_g_ParamLimits

0xc4e4,	// (0x00094a27) main_camera_pane_t1_ParamLimits

0xc4e4,	// (0x00094a27) main_camera_pane_t2_ParamLimits

0xf191,	// (0x000976d4) main_camera_pane_t_ParamLimits

0xc40d,	// (0x00094950) bg_popup_preview_window_pane_cp01_ParamLimits

0xc40d,	// (0x00094950) bg_popup_preview_window_pane_cp01

0xd56a,	// (0x00095aad) popup_phob_thumbnail2_window_g1_ParamLimits

0xd56a,	// (0x00095aad) popup_phob_thumbnail2_window_g1

0xc1b2,	// (0x000946f5) call2_cli_visual_pane

0x4ba7,	// (0x0008d0ea) popup_call2_audio_conf_window_ParamLimits

0x4ba7,	// (0x0008d0ea) popup_call2_audio_conf_window

0x4bbc,	// (0x0008d0ff) popup_call2_audio_first_window_ParamLimits

0x4bbc,	// (0x0008d0ff) popup_call2_audio_first_window

0x4c5a,	// (0x0008d19d) popup_call2_audio_in_window_ParamLimits

0x4c5a,	// (0x0008d19d) popup_call2_audio_in_window

0x4c9c,	// (0x0008d1df) popup_call2_audio_out_window_ParamLimits

0x4c9c,	// (0x0008d1df) popup_call2_audio_out_window

0x4cfe,	// (0x0008d241) popup_call2_audio_second_window_ParamLimits

0x4cfe,	// (0x0008d241) popup_call2_audio_second_window

0x4d5c,	// (0x0008d29f) popup_call2_audio_wait_window_ParamLimits

0x4d5c,	// (0x0008d29f) popup_call2_audio_wait_window

0xc1b2,	// (0x000946f5) bg_popup_call2_act_pane_cp03

0xc3ef,	// (0x00094932) list_conf_pane_cp

0xd576,	// (0x00095ab9) popup_call2_audio_conf_window_t1

0xd584,	// (0x00095ac7) list_single_graphic_popup_conf2_pane_ParamLimits

0xd584,	// (0x00095ac7) list_single_graphic_popup_conf2_pane

0xce13,	// (0x00095356) list_highlight_pane_cp04

0xd597,	// (0x00095ada) list_single_graphic_popup_conf2_pane_g1

0xce24,	// (0x00095367) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf451,	// (0x00097994) list_single_graphic_popup_conf2_pane_g

0xd5a1,	// (0x00095ae4) list_single_graphic_popup_conf2_pane_t1

0xd5af,	// (0x00095af2) bg_popup_call2_act_pane_cp01_ParamLimits

0xd5af,	// (0x00095af2) bg_popup_call2_act_pane_cp01

0xd639,	// (0x00095b7c) call_type_pane_cp05_ParamLimits

0xd639,	// (0x00095b7c) call_type_pane_cp05

0xd68d,	// (0x00095bd0) popup_call2_audio_second_window_g1_ParamLimits

0xd68d,	// (0x00095bd0) popup_call2_audio_second_window_g1

0xd6e1,	// (0x00095c24) popup_call2_audio_second_window_g2_ParamLimits

0xd6e1,	// (0x00095c24) popup_call2_audio_second_window_g2

0x0002,

0xf456,	// (0x00097999) popup_call2_audio_second_window_g_ParamLimits

0xf456,	// (0x00097999) popup_call2_audio_second_window_g

0xd746,	// (0x00095c89) popup_call2_audio_second_window_t1_ParamLimits

0xd746,	// (0x00095c89) popup_call2_audio_second_window_t1

0xd801,	// (0x00095d44) popup_call2_audio_second_window_t2_ParamLimits

0xd801,	// (0x00095d44) popup_call2_audio_second_window_t2

0xd854,	// (0x00095d97) popup_call2_audio_second_window_t3_ParamLimits

0xd854,	// (0x00095d97) popup_call2_audio_second_window_t3

0x0003,

0xf45d,	// (0x000979a0) popup_call2_audio_second_window_t_ParamLimits

0xf45d,	// (0x000979a0) popup_call2_audio_second_window_t

0xc1b2,	// (0x000946f5) bg_popup_call2_in_pane_cp02

0xc1bc,	// (0x000946ff) call_type_pane_cp04

0x4d9b,	// (0x0008d2de) popup_call2_audio_wait_window_g1

0x4da3,	// (0x0008d2e6) popup_call2_audio_wait_window_g2

0x0001,

0xf466,	// (0x000979a9) popup_call2_audio_wait_window_g

0xc1d4,	// (0x00094717) popup_call2_audio_wait_window_t3

0xd947,	// (0x00095e8a) bg_popup_call2_act_pane_ParamLimits

0xd947,	// (0x00095e8a) bg_popup_call2_act_pane

0xda07,	// (0x00095f4a) call_type_pane_cp03_ParamLimits

0xda07,	// (0x00095f4a) call_type_pane_cp03

0xda79,	// (0x00095fbc) popup_call2_audio_first_window_g1_ParamLimits

0xda79,	// (0x00095fbc) popup_call2_audio_first_window_g1

0xdae9,	// (0x0009602c) popup_call2_audio_first_window_g2_ParamLimits

0xdae9,	// (0x0009602c) popup_call2_audio_first_window_g2

0xda6b,	// (0x00095fae) popup_call2_audio_first_window_g3_ParamLimits

0xda6b,	// (0x00095fae) popup_call2_audio_first_window_g3

0x0004,

0xf46b,	// (0x000979ae) popup_call2_audio_first_window_g_ParamLimits

0xf46b,	// (0x000979ae) popup_call2_audio_first_window_g

0xdbc7,	// (0x0009610a) popup_call2_audio_first_window_t1_ParamLimits

0xdbc7,	// (0x0009610a) popup_call2_audio_first_window_t1

0xdcca,	// (0x0009620d) popup_call2_audio_first_window_t4_ParamLimits

0xdcca,	// (0x0009620d) popup_call2_audio_first_window_t4

0xddad,	// (0x000962f0) popup_call2_audio_first_window_t5_ParamLimits

0xddad,	// (0x000962f0) popup_call2_audio_first_window_t5

0x0003,

0xf476,	// (0x000979b9) popup_call2_audio_first_window_t_ParamLimits

0xf476,	// (0x000979b9) popup_call2_audio_first_window_t

0xc405,	// (0x00094948) bg_popup_call2_act_pane_g1

0xe412,	// (0x00096955) popup_cale_lunar_info_window_t1

0xe420,	// (0x00096963) popup_cale_lunar_info_window_t2

0xe42e,	// (0x00096971) popup_cale_lunar_info_window_t3

0xc1b2,	// (0x000946f5) bg_popup_call2_bubble_pane

0xdeae,	// (0x000963f1) bg_popup_call2_in_pane_cp01_ParamLimits

0xdeae,	// (0x000963f1) bg_popup_call2_in_pane_cp01

0xbd9b,	// (0x000942de) call_type_pane_cp02

0x4dab,	// (0x0008d2ee) popup_call2_audio_out_window_g1_ParamLimits

0x4dab,	// (0x0008d2ee) popup_call2_audio_out_window_g1

0xdef6,	// (0x00096439) popup_call2_audio_out_window_g2_ParamLimits

0xdef6,	// (0x00096439) popup_call2_audio_out_window_g2

0x4dd7,	// (0x0008d31a) popup_call2_audio_out_window_g3_ParamLimits

0x4dd7,	// (0x0008d31a) popup_call2_audio_out_window_g3

0x0003,

0xf47f,	// (0x000979c2) popup_call2_audio_out_window_g_ParamLimits

0xf47f,	// (0x000979c2) popup_call2_audio_out_window_g

0xdf2d,	// (0x00096470) popup_call2_audio_out_window_t1_ParamLimits

0xdf2d,	// (0x00096470) popup_call2_audio_out_window_t1

0xdf8c,	// (0x000964cf) popup_call2_audio_out_window_t2_ParamLimits

0xdf8c,	// (0x000964cf) popup_call2_audio_out_window_t2

0xdfe0,	// (0x00096523) popup_call2_audio_out_window_t3_ParamLimits

0xdfe0,	// (0x00096523) popup_call2_audio_out_window_t3

0xdff6,	// (0x00096539) popup_call2_audio_out_window_t4_ParamLimits

0xdff6,	// (0x00096539) popup_call2_audio_out_window_t4

0xe00c,	// (0x0009654f) popup_call2_audio_out_window_t5_ParamLimits

0xe00c,	// (0x0009654f) popup_call2_audio_out_window_t5

0x0005,

0xf488,	// (0x000979cb) popup_call2_audio_out_window_t_ParamLimits

0xf488,	// (0x000979cb) popup_call2_audio_out_window_t

0xe070,	// (0x000965b3) bg_popup_call2_in_pane_ParamLimits

0xe070,	// (0x000965b3) bg_popup_call2_in_pane

0xe0cc,	// (0x0009660f) popup_call2_audio_in_window_g1_ParamLimits

0xe0cc,	// (0x0009660f) popup_call2_audio_in_window_g1

0xe104,	// (0x00096647) popup_call2_audio_in_window_g2_ParamLimits

0xe104,	// (0x00096647) popup_call2_audio_in_window_g2

0xe13c,	// (0x0009667f) popup_call2_audio_in_window_g3_ParamLimits

0xe13c,	// (0x0009667f) popup_call2_audio_in_window_g3

0x0003,

0xf495,	// (0x000979d8) popup_call2_audio_in_window_g_ParamLimits

0xf495,	// (0x000979d8) popup_call2_audio_in_window_g

0xe194,	// (0x000966d7) popup_call2_audio_in_window_t1_ParamLimits

0xe194,	// (0x000966d7) popup_call2_audio_in_window_t1

0xe214,	// (0x00096757) popup_call2_audio_in_window_t2_ParamLimits

0xe214,	// (0x00096757) popup_call2_audio_in_window_t2

0xe294,	// (0x000967d7) popup_call2_audio_in_window_t3_ParamLimits

0xe294,	// (0x000967d7) popup_call2_audio_in_window_t3

0xe2ae,	// (0x000967f1) popup_call2_audio_in_window_t4_ParamLimits

0xe2ae,	// (0x000967f1) popup_call2_audio_in_window_t4

0xe2c0,	// (0x00096803) popup_call2_audio_in_window_t5_ParamLimits

0xe2c0,	// (0x00096803) popup_call2_audio_in_window_t5

0xe2d2,	// (0x00096815) popup_call2_audio_in_window_t6_ParamLimits

0xe2d2,	// (0x00096815) popup_call2_audio_in_window_t6

0x0005,

0xf49e,	// (0x000979e1) popup_call2_audio_in_window_t_ParamLimits

0xf49e,	// (0x000979e1) popup_call2_audio_in_window_t

0xc405,	// (0x00094948) bg_popup_call2_in_pane_g1

0xe43c,	// (0x0009697f) popup_cale_lunar_info_window_t4

0x0003,

0xf519,	// (0x00097a5c) popup_cale_lunar_info_window_t

0xc40d,	// (0x00094950) bg_popup_call2_rect_pane_ParamLimits

0xc40d,	// (0x00094950) bg_popup_call2_rect_pane

0xc1b2,	// (0x000946f5) call2_cli_visual_graphic_pane

0xc1b2,	// (0x000946f5) call2_cli_visual_text_pane

0x51da,	// (0x0008d71d) smil_status_volume_pane_g3

0x0002,

0xc425,	// (0x00094968) call2_cli_visual_graphic_pane_g1

0xc425,	// (0x00094968) call2_cli_visual_graphic_pane_g2

0xc425,	// (0x00094968) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ab,	// (0x000979ee) call2_cli_visual_graphic_pane_g

0xe2e4,	// (0x00096827) bg_popup_call2_rect_pane_g1

0xc604,	// (0x00094b47) bg_popup_call2_rect_pane_g2

0xe2ec,	// (0x0009682f) bg_popup_call2_rect_pane_g3

0xe2f4,	// (0x00096837) bg_popup_call2_rect_pane_g4

0xe2fc,	// (0x0009683f) bg_popup_call2_rect_pane_g5

0xe304,	// (0x00096847) bg_popup_call2_rect_pane_g6

0xe30c,	// (0x0009684f) bg_popup_call2_rect_pane_g7

0xe314,	// (0x00096857) bg_popup_call2_rect_pane_g8

0xe31c,	// (0x0009685f) bg_popup_call2_rect_pane_g9

0x0008,

0xf4b2,	// (0x000979f5) bg_popup_call2_rect_pane_g

0xe324,	// (0x00096867) bg_popup_call2_bubble_pane_g1

0xe32c,	// (0x0009686f) bg_popup_call2_bubble_pane_g2

0xe334,	// (0x00096877) bg_popup_call2_bubble_pane_g3

0xe33c,	// (0x0009687f) bg_popup_call2_bubble_pane_g4

0xe344,	// (0x00096887) bg_popup_call2_bubble_pane_g5

0xe34c,	// (0x0009688f) bg_popup_call2_bubble_pane_g6

0xe354,	// (0x00096897) bg_popup_call2_bubble_pane_g7

0xe35c,	// (0x0009689f) bg_popup_call2_bubble_pane_g8

0xe364,	// (0x000968a7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c5,	// (0x00097a08) bg_popup_call2_bubble_pane_g

0x2988,	// (0x0008aecb) aid_cale_week_size_cell_pane

0xc40d,	// (0x00094950) aid_cams_cif_uncrop_pane_ParamLimits

0xc40d,	// (0x00094950) aid_cams_cif_uncrop_pane

0xc47a,	// (0x000949bd) aid_cams_size_cell_ParamLimits

0xc47a,	// (0x000949bd) aid_cams_size_cell

0xc47a,	// (0x000949bd) grid_cams_pane_ParamLimits

0xc47a,	// (0x000949bd) linegrid_cams_pane_ParamLimits

0x304c,	// (0x0008b58f) call_video_pane_t1

0x306d,	// (0x0008b5b0) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00097720) call_video_pane_t

0x35bb,	// (0x0008bafe) aid_cale_month_size_cell_pane_ParamLimits

0x35bb,	// (0x0008bafe) aid_cale_month_size_cell_pane

0xf55d,	// (0x00097aa0) smil_status_volume_pane_g

0x51e7,	// (0x0008d72a) volume_smil_pane_ParamLimits

0x22eb,	// (0x0008a82e) aid_popup2_width_pane

0x287f,	// (0x0008adc2) cell_qdial_pane_g4_ParamLimits

0x287f,	// (0x0008adc2) cell_qdial_pane_g4

0x44e6,	// (0x0008ca29) aid_blid_cardinal_pane_ParamLimits

0x44f6,	// (0x0008ca39) aid_blid_destination_pane_ParamLimits

0x44f6,	// (0x0008ca39) aid_blid_destination_pane

0xc40d,	// (0x00094950) bg_popup_call_poc_act_pane_ParamLimits

0xc40d,	// (0x00094950) bg_popup_call_poc_act_pane

0xc40d,	// (0x00094950) bg_popup_call_poc_inact_pane_ParamLimits

0xc40d,	// (0x00094950) bg_popup_call_poc_inact_pane

0xe36c,	// (0x000968af) bg_popup_call_poc_act_pane_g1

0xe374,	// (0x000968b7) bg_popup_call_poc_act_pane_g2

0xe37c,	// (0x000968bf) bg_popup_call_poc_act_pane_g3

0xe33c,	// (0x0009687f) bg_popup_call_poc_act_pane_g4

0xe344,	// (0x00096887) bg_popup_call_poc_act_pane_g5

0xe384,	// (0x000968c7) bg_popup_call_poc_act_pane_g6

0xe354,	// (0x00096897) bg_popup_call_poc_act_pane_g7

0xe38c,	// (0x000968cf) bg_popup_call_poc_act_pane_g8

0xc1b2,	// (0x000946f5) main_usb_pane

0x5044,	// (0x0008d587) popup_cale_lunar_info_window

0x338a,	// (0x0008b8cd) im_reading_pane_t1_ParamLimits

0xc7ae,	// (0x00094cf1) list_im_pane_ParamLimits

0xc7bf,	// (0x00094d02) scroll_pane_cp07_ParamLimits

0xc1b2,	// (0x000946f5) grid_highlight_pane_cp012

0xc40d,	// (0x00094950) mup_scale_pane_ParamLimits

0xc496,	// (0x000949d9) main_usb_pane_g1_ParamLimits

0xc496,	// (0x000949d9) main_usb_pane_g1

0xc496,	// (0x000949d9) main_usb_pane_g2_ParamLimits

0xc496,	// (0x000949d9) main_usb_pane_g2

0x0001,

0xf502,	// (0x00097a45) main_usb_pane_g_ParamLimits

0xf502,	// (0x00097a45) main_usb_pane_g

0xc4e4,	// (0x00094a27) main_usb_pane_t1_ParamLimits

0xc4e4,	// (0x00094a27) main_usb_pane_t1

0xc4e4,	// (0x00094a27) main_usb_pane_t2_ParamLimits

0xc4e4,	// (0x00094a27) main_usb_pane_t2

0xc4e4,	// (0x00094a27) main_usb_pane_t3_ParamLimits

0xc4e4,	// (0x00094a27) main_usb_pane_t3

0xc4e4,	// (0x00094a27) main_usb_pane_t4_ParamLimits

0xc4e4,	// (0x00094a27) main_usb_pane_t4

0xc4e4,	// (0x00094a27) main_usb_pane_t5_ParamLimits

0xc4e4,	// (0x00094a27) main_usb_pane_t5

0xc4e4,	// (0x00094a27) main_usb_pane_t6_ParamLimits

0xc4e4,	// (0x00094a27) main_usb_pane_t6

0x0005,

0xf507,	// (0x00097a4a) main_usb_pane_t_ParamLimits

0x448c,	// (0x0008c9cf) aid_text_placing

0x4498,	// (0x0008c9db) main_location2_pane_t1_ParamLimits

0x44ac,	// (0x0008c9ef) main_location2_pane_t2_ParamLimits

0x44c0,	// (0x0008ca03) main_location2_pane_t3_ParamLimits

0x44d4,	// (0x0008ca17) main_location2_pane_t4_ParamLimits

0x44d4,	// (0x0008ca17) main_location2_pane_t4

0xf31e,	// (0x00097861) main_location2_pane_t_ParamLimits

0xc43b,	// (0x0009497e) find_pinb_pane_g2_ParamLimits

0xc43b,	// (0x0009497e) find_pinb_pane_g2

0x0001,

0xf095,	// (0x000975d8) find_pinb_pane_g_ParamLimits

0xf095,	// (0x000975d8) find_pinb_pane_g

0xc447,	// (0x0009498a) find_pinb_pane_t1_ParamLimits

0xc459,	// (0x0009499c) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x000975dd) find_pinb_pane_t_ParamLimits

0xc1b2,	// (0x000946f5) main_call3_pane

0x3b7e,	// (0x0008c0c1) cale_month_day_heading_pane_t1_ParamLimits

0x3c04,	// (0x0008c147) cale_month_day_heading_pane_t2_ParamLimits

0x3c7d,	// (0x0008c1c0) cale_month_day_heading_pane_t3_ParamLimits

0x3cf6,	// (0x0008c239) cale_month_day_heading_pane_t4_ParamLimits

0x3d6f,	// (0x0008c2b2) cale_month_day_heading_pane_t5_ParamLimits

0x3de8,	// (0x0008c32b) cale_month_day_heading_pane_t6_ParamLimits

0x3e61,	// (0x0008c3a4) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x00097758) cale_month_day_heading_pane_t_ParamLimits

0xca09,	// (0x00094f4c) smil_status_volume_pane

0x49ca,	// (0x0008cf0d) postcard_address_pane_ParamLimits

0x49ca,	// (0x0008cf0d) postcard_address_pane

0x49d6,	// (0x0008cf19) postcard_message_pane_ParamLimits

0x49d6,	// (0x0008cf19) postcard_message_pane

0x4e03,	// (0x0008d346) call2_cli_visual_pane_t1_ParamLimits

0x4e03,	// (0x0008d346) call2_cli_visual_pane_t1

0xe551,	// (0x00096a94) postcard_message_pane_t1_ParamLimits

0xe551,	// (0x00096a94) postcard_message_pane_t1

0xe539,	// (0x00096a7c) postcard_address_pane_t1_ParamLimits

0xe539,	// (0x00096a7c) postcard_address_pane_t1

0x5318,	// (0x0008d85b) popup_call3_audio_in_window_ParamLimits

0x5318,	// (0x0008d85b) popup_call3_audio_in_window

0x51fc,	// (0x0008d73f) bg_popup_call3_in_pane_ParamLimits

0x51fc,	// (0x0008d73f) bg_popup_call3_in_pane

0x525e,	// (0x0008d7a1) popup_call3_audio_in_window_g1_ParamLimits

0x525e,	// (0x0008d7a1) popup_call3_audio_in_window_g1

0x5276,	// (0x0008d7b9) popup_call3_audio_in_window_g2_ParamLimits

0x5276,	// (0x0008d7b9) popup_call3_audio_in_window_g2

0x528e,	// (0x0008d7d1) popup_call3_audio_in_window_g3_ParamLimits

0x528e,	// (0x0008d7d1) popup_call3_audio_in_window_g3

0x0003,

0xf564,	// (0x00097aa7) popup_call3_audio_in_window_g_ParamLimits

0xf564,	// (0x00097aa7) popup_call3_audio_in_window_g

0x52b6,	// (0x0008d7f9) popup_call3_audio_in_window_t1_ParamLimits

0x52b6,	// (0x0008d7f9) popup_call3_audio_in_window_t1

0x52de,	// (0x0008d821) popup_call3_audio_in_window_t2_ParamLimits

0x52de,	// (0x0008d821) popup_call3_audio_in_window_t2

0x5306,	// (0x0008d849) popup_call3_audio_in_window_t3_ParamLimits

0x5306,	// (0x0008d849) popup_call3_audio_in_window_t3

0x0002,

0xf56d,	// (0x00097ab0) popup_call3_audio_in_window_t_ParamLimits

0xf56d,	// (0x00097ab0) popup_call3_audio_in_window_t

0xc6ed,	// (0x00094c30) bg_popup_call3_rect_pane

0xe2e4,	// (0x00096827) bg_popup_call3_rect_pane_g1

0xc604,	// (0x00094b47) bg_popup_call3_rect_pane_g2

0xe2ec,	// (0x0009682f) bg_popup_call3_rect_pane_g3

0xe2f4,	// (0x00096837) bg_popup_call3_rect_pane_g4

0xe2fc,	// (0x0009683f) bg_popup_call3_rect_pane_g5

0xe304,	// (0x00096847) bg_popup_call3_rect_pane_g6

0xe30c,	// (0x0009684f) bg_popup_call3_rect_pane_g7

0xaa49,	// (0x00092f8c) mup_visualizer_osc_pane

0xaa49,	// (0x00092f8c) mup_visualizer_spec_pane

0x521c,	// (0x0008d75f) call3_video_qcif_pane_ParamLimits

0x521c,	// (0x0008d75f) call3_video_qcif_pane

0x522e,	// (0x0008d771) call3_video_qcif_uncrop_pane_ParamLimits

0x522e,	// (0x0008d771) call3_video_qcif_uncrop_pane

0x523c,	// (0x0008d77f) call3_video_subqcif_pane_ParamLimits

0x523c,	// (0x0008d77f) call3_video_subqcif_pane

0x524e,	// (0x0008d791) call3_video_subqcif_uncrop_pane_ParamLimits

0x524e,	// (0x0008d791) call3_video_subqcif_uncrop_pane

0x52a6,	// (0x0008d7e9) popup_call3_audio_in_window_g4_ParamLimits

0x52a6,	// (0x0008d7e9) popup_call3_audio_in_window_g4

0xaa49,	// (0x00092f8c) mup_spec_half_pane

0xaa49,	// (0x00092f8c) mup_spec_half_pane_cp

0xaa49,	// (0x00092f8c) mup_osc_middle_pane

0xc4c6,	// (0x00094a09) mup_visualizer_osc_pane_g1

0xe4ec,	// (0x00096a2f) mup_spec_bar_pane_ParamLimits

0xe4ec,	// (0x00096a2f) mup_spec_bar_pane

0xc4c6,	// (0x00094a09) mup_spec_bar_pane_g1

0xc4c6,	// (0x00094a09) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x000975f2) mup_spec_bar_pane_g

0x2988,	// (0x0008aecb) aid_cale_week_size_cell_pane_ParamLimits

0x299d,	// (0x0008aee0) bg_cale_heading_pane_ParamLimits

0xc64f,	// (0x00094b92) bg_cale_pane_cp01_ParamLimits

0x29bf,	// (0x0008af02) cale_week_corner_pane_ParamLimits

0x29d9,	// (0x0008af1c) cale_week_day_heading_pane_ParamLimits

0x29fb,	// (0x0008af3e) cale_week_scroll_pane_g1_ParamLimits

0x2a18,	// (0x0008af5b) cale_week_scroll_pane_g2_ParamLimits

0x2a2b,	// (0x0008af6e) cale_week_scroll_pane_g3_ParamLimits

0x2a3e,	// (0x0008af81) cale_week_scroll_pane_g4_ParamLimits

0x2a51,	// (0x0008af94) cale_week_scroll_pane_g5_ParamLimits

0x2a64,	// (0x0008afa7) cale_week_scroll_pane_g6_ParamLimits

0x2a77,	// (0x0008afba) cale_week_scroll_pane_g7_ParamLimits

0x2a8c,	// (0x0008afcf) cale_week_scroll_pane_g8_ParamLimits

0x2aa1,	// (0x0008afe4) cale_week_scroll_pane_g9_ParamLimits

0x2ab4,	// (0x0008aff7) cale_week_scroll_pane_g10_ParamLimits

0x2ac7,	// (0x0008b00a) cale_week_scroll_pane_g11_ParamLimits

0x2ada,	// (0x0008b01d) cale_week_scroll_pane_g12_ParamLimits

0x2af1,	// (0x0008b034) cale_week_scroll_pane_g13_ParamLimits

0x2b0c,	// (0x0008b04f) cale_week_scroll_pane_g14_ParamLimits

0x2b27,	// (0x0008b06a) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00097669) cale_week_scroll_pane_g_ParamLimits

0x2b57,	// (0x0008b09a) cale_week_time_pane_ParamLimits

0x2b6c,	// (0x0008b0af) grid_cale_week_pane_ParamLimits

0xc66c,	// (0x00094baf) listscroll_cale_week_pane_t1

0xc67e,	// (0x00094bc1) scroll_pane_cp08_ParamLimits

0x362f,	// (0x0008bb72) cale_month_corner_pane_ParamLimits

0xc9df,	// (0x00094f22) cale_month_pane_t1

0x3afd,	// (0x0008c040) cale_month_week_pane_ParamLimits

0xda6b,	// (0x00095fae) popup_call_status_window_g1_ParamLimits

0x42b9,	// (0x0008c7fc) popup_call_status_window_g2_ParamLimits

0x42c5,	// (0x0008c808) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x000977e8) popup_call_status_window_g_ParamLimits

0xcda7,	// (0x000952ea) aid_call2_pane

0x4882,	// (0x0008cdc5) msg_header_pane_g1

0x49ca,	// (0x0008cf0d) postcard_address2_pane_ParamLimits

0x49ca,	// (0x0008cf0d) postcard_address2_pane

0x49d6,	// (0x0008cf19) postcard_message2_pane_ParamLimits

0x49d6,	// (0x0008cf19) postcard_message2_pane

0x51ac,	// (0x0008d6ef) message2_row_pane_ParamLimits

0x51ac,	// (0x0008d6ef) message2_row_pane

0x51c7,	// (0x0008d70a) address2_row_pane_ParamLimits

0x51c7,	// (0x0008d70a) address2_row_pane

0xe4b9,	// (0x000969fc) postcard_message2_row_pane_g1

0xe4c1,	// (0x00096a04) postcard_message2_row_pane_t1

0xe4b9,	// (0x000969fc) address2_row_pane_g1

0xe4c1,	// (0x00096a04) address2_row_pane_t1

0x2df1,	// (0x0008b334) aid_size_cell_vorec

0xc1b2,	// (0x000946f5) main_rss_pane

0xe4cf,	// (0x00096a12) rss_list_single_pane_ParamLimits

0xe4cf,	// (0x00096a12) rss_list_single_pane

0xe4dd,	// (0x00096a20) rss_list_single_pane_t1

0xe4dd,	// (0x00096a20) rss_list_single_pane_t2

0x0001,

0xf558,	// (0x00097a9b) rss_list_single_pane_t

0xc1b2,	// (0x000946f5) main_camera2_pane

0xc1b2,	// (0x000946f5) main_video2_pane

0x2592,	// (0x0008aad5) cams_zoom_pane_cp2_ParamLimits

0x2592,	// (0x0008aad5) cams_zoom_pane_cp2

0x2592,	// (0x0008aad5) image2_vga_pane_ParamLimits

0x2592,	// (0x0008aad5) image2_vga_pane

0xcdd3,	// (0x00095316) main_camera2_pane_g1_ParamLimits

0xcdd3,	// (0x00095316) main_camera2_pane_g1

0xcdd3,	// (0x00095316) main_camera2_pane_g2_ParamLimits

0xcdd3,	// (0x00095316) main_camera2_pane_g2

0xcdd3,	// (0x00095316) main_camera2_pane_g3_ParamLimits

0xcdd3,	// (0x00095316) main_camera2_pane_g3

0xcdd3,	// (0x00095316) main_camera2_pane_g4_ParamLimits

0xcdd3,	// (0x00095316) main_camera2_pane_g4

0xcdd3,	// (0x00095316) main_camera2_pane_g5_ParamLimits

0xcdd3,	// (0x00095316) main_camera2_pane_g5

0xcdd3,	// (0x00095316) main_camera2_pane_g6_ParamLimits

0xcdd3,	// (0x00095316) main_camera2_pane_g6

0xcdd3,	// (0x00095316) main_camera2_pane_g7_ParamLimits

0xcdd3,	// (0x00095316) main_camera2_pane_g7

0xcdd3,	// (0x00095316) main_camera2_pane_g8_ParamLimits

0xcdd3,	// (0x00095316) main_camera2_pane_g8

0x0008,

0xf574,	// (0x00097ab7) main_camera2_pane_g_ParamLimits

0xf574,	// (0x00097ab7) main_camera2_pane_g

0x5335,	// (0x0008d878) main_camera2_pane_t1_ParamLimits

0x5335,	// (0x0008d878) main_camera2_pane_t1

0x5335,	// (0x0008d878) main_camera2_pane_t2_ParamLimits

0x5335,	// (0x0008d878) main_camera2_pane_t2

0x5335,	// (0x0008d878) main_camera2_pane_t3_ParamLimits

0x5335,	// (0x0008d878) main_camera2_pane_t3

0x5335,	// (0x0008d878) main_camera2_pane_t4_ParamLimits

0x5335,	// (0x0008d878) main_camera2_pane_t4

0x0006,

0xf587,	// (0x00097aca) main_camera2_pane_t_ParamLimits

0xf587,	// (0x00097aca) main_camera2_pane_t

0x535d,	// (0x0008d8a0) cams_zoom_pane_cp4_ParamLimits

0x535d,	// (0x0008d8a0) cams_zoom_pane_cp4

0x4fef,	// (0x0008d532) image2_cif_pane_ParamLimits

0x4fef,	// (0x0008d532) image2_cif_pane

0x2592,	// (0x0008aad5) image2_subqcif_pane_ParamLimits

0x2592,	// (0x0008aad5) image2_subqcif_pane

0x536b,	// (0x0008d8ae) main_video2_pane_g1_ParamLimits

0x536b,	// (0x0008d8ae) main_video2_pane_g1

0x536b,	// (0x0008d8ae) main_video2_pane_g2_ParamLimits

0x536b,	// (0x0008d8ae) main_video2_pane_g2

0x536b,	// (0x0008d8ae) main_video2_pane_g3_ParamLimits

0x536b,	// (0x0008d8ae) main_video2_pane_g3

0x536b,	// (0x0008d8ae) main_video2_pane_g4_ParamLimits

0x536b,	// (0x0008d8ae) main_video2_pane_g4

0x536b,	// (0x0008d8ae) main_video2_pane_g5_ParamLimits

0x536b,	// (0x0008d8ae) main_video2_pane_g5

0x536b,	// (0x0008d8ae) main_video2_pane_g6_ParamLimits

0x536b,	// (0x0008d8ae) main_video2_pane_g6

0x0005,

0xf596,	// (0x00097ad9) main_video2_pane_g_ParamLimits

0xf596,	// (0x00097ad9) main_video2_pane_g

0x5379,	// (0x0008d8bc) main_video2_pane_t1_ParamLimits

0x5379,	// (0x0008d8bc) main_video2_pane_t1

0x5379,	// (0x0008d8bc) main_video2_pane_t2_ParamLimits

0x5379,	// (0x0008d8bc) main_video2_pane_t2

0x5379,	// (0x0008d8bc) main_video2_pane_t3_ParamLimits

0x5379,	// (0x0008d8bc) main_video2_pane_t3

0x0002,

0xf5a3,	// (0x00097ae6) main_video2_pane_t_ParamLimits

0xf5a3,	// (0x00097ae6) main_video2_pane_t

0x4ec2,	// (0x0008d405) call_muted_g2

0x0001,

0xf54a,	// (0x00097a8d) call_muted_g

0xc1b2,	// (0x000946f5) main_mup2_pane

0xc4a4,	// (0x000949e7) main_mup2_pane_g1_ParamLimits

0xc4a4,	// (0x000949e7) main_mup2_pane_g1

0xc4a4,	// (0x000949e7) main_mup2_pane_g2_ParamLimits

0xc4a4,	// (0x000949e7) main_mup2_pane_g2

0x1250,	// (0x00089793) main_mup_pane_g13_cp1

0x25ac,	// (0x0008aaef) mup_volume_pane_cp1

0xc4a4,	// (0x000949e7) main_mup2_pane_g4_ParamLimits

0xc4a4,	// (0x000949e7) main_mup2_pane_g4

0xc4a4,	// (0x000949e7) main_mup2_pane_g5_ParamLimits

0xc4a4,	// (0x000949e7) main_mup2_pane_g5

0xc4a4,	// (0x000949e7) main_mup2_pane_g6_ParamLimits

0xc4a4,	// (0x000949e7) main_mup2_pane_g6

0xc4a4,	// (0x000949e7) main_mup2_pane_g7_ParamLimits

0xc4a4,	// (0x000949e7) main_mup2_pane_g7

0x0006,

0xf5aa,	// (0x00097aed) main_mup2_pane_g_ParamLimits

0xf5aa,	// (0x00097aed) main_mup2_pane_g

0xc4b2,	// (0x000949f5) main_mup2_pane_t1_ParamLimits

0xc4b2,	// (0x000949f5) main_mup2_pane_t1

0xc4b2,	// (0x000949f5) main_mup2_pane_t2_ParamLimits

0xc4b2,	// (0x000949f5) main_mup2_pane_t2

0xc4b2,	// (0x000949f5) main_mup2_pane_t3_ParamLimits

0xc4b2,	// (0x000949f5) main_mup2_pane_t3

0xc4b2,	// (0x000949f5) main_mup2_pane_t4_ParamLimits

0xc4b2,	// (0x000949f5) main_mup2_pane_t4

0xc4b2,	// (0x000949f5) main_mup2_pane_t5_ParamLimits

0xc4b2,	// (0x000949f5) main_mup2_pane_t5

0xc4b2,	// (0x000949f5) main_mup2_pane_t6_ParamLimits

0xc4b2,	// (0x000949f5) main_mup2_pane_t6

0x0005,

0xf5b9,	// (0x00097afc) main_mup2_pane_t_ParamLimits

0xf5b9,	// (0x00097afc) main_mup2_pane_t

0xe3d4,	// (0x00096917) mup2_visualizer_pane_ParamLimits

0xe3d4,	// (0x00096917) mup2_visualizer_pane

0xe3d4,	// (0x00096917) mup_progress_pane_cp_ParamLimits

0xe3d4,	// (0x00096917) mup_progress_pane_cp

0x5440,	// (0x0008d983) mup_volume_pane_cp_ParamLimits

0x5440,	// (0x0008d983) mup_volume_pane_cp

0xc488,	// (0x000949cb) mup2_visualizer_pane_g1_ParamLimits

0xc488,	// (0x000949cb) mup2_visualizer_pane_g1

0xc496,	// (0x000949d9) mup2_visualizer_pane_g2_ParamLimits

0xc496,	// (0x000949d9) mup2_visualizer_pane_g2

0xc496,	// (0x000949d9) mup2_visualizer_pane_g3_ParamLimits

0xc496,	// (0x000949d9) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x000975e2) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x000975e2) mup2_visualizer_pane_g

0xaa49,	// (0x00092f8c) aid_size_cell_fmradio

0x4fd8,	// (0x0008d51b) aid_height_parent_landcape

0xc83d,	// (0x00094d80) wml_content_pane_cp

0xc845,	// (0x00094d88) wml_tabs_pane

0xc84e,	// (0x00094d91) popup_wml_miniature_window

0xc856,	// (0x00094d99) scroll_pane_cp021

0xc86a,	// (0x00094dad) wml_content_pane_comp8

0xc1b2,	// (0x000946f5) bg_popup_sub_pane_cp05

0xe583,	// (0x00096ac6) popup_wml_miniature_window_g1

0xe58b,	// (0x00096ace) wml_miniature_view_pane

0x538d,	// (0x0008d8d0) aid_size_wml_view

0x5395,	// (0x0008d8d8) wml_miniature_view_pane_g1

0x539e,	// (0x0008d8e1) wml_miniature_view_pane_g2

0x53a7,	// (0x0008d8ea) wml_miniature_view_pane_g3

0x53af,	// (0x0008d8f2) wml_miniature_view_pane_g4

0x53b7,	// (0x0008d8fa) wml_miniature_view_pane_g5

0x53bf,	// (0x0008d902) wml_miniature_view_pane_g6

0x53c7,	// (0x0008d90a) wml_miniature_view_pane_g7

0x53cf,	// (0x0008d912) wml_miniature_view_pane_g8

0x0007,

0xf5c6,	// (0x00097b09) wml_miniature_view_pane_g

0xe593,	// (0x00096ad6) background_graphic_ParamLimits

0xe593,	// (0x00096ad6) background_graphic

0xe59f,	// (0x00096ae2) wml_tabs_2_pane

0xe5a8,	// (0x00096aeb) wml_tabs_3_pane_ParamLimits

0xe5a8,	// (0x00096aeb) wml_tabs_3_pane

0xe5ba,	// (0x00096afd) wml_tabs_4_pane_ParamLimits

0xe5ba,	// (0x00096afd) wml_tabs_4_pane

0xe5d0,	// (0x00096b13) wml_tabs_5_pane_ParamLimits

0xe5d0,	// (0x00096b13) wml_tabs_5_pane

0xe5ea,	// (0x00096b2d) wml_tabs_pane_g2_ParamLimits

0xe5ea,	// (0x00096b2d) wml_tabs_pane_g2

0xe5ff,	// (0x00096b42) wml_tabs_pane_g3_ParamLimits

0xe5ff,	// (0x00096b42) wml_tabs_pane_g3

0xe614,	// (0x00096b57) wml_tabs_2_active_pane_ParamLimits

0xe614,	// (0x00096b57) wml_tabs_2_active_pane

0xe614,	// (0x00096b57) wml_tabs_2_passive_pane_ParamLimits

0xe614,	// (0x00096b57) wml_tabs_2_passive_pane

0x53d7,	// (0x0008d91a) wml_tabs_3_active_pane_cp_ParamLimits

0x53d7,	// (0x0008d91a) wml_tabs_3_active_pane_cp

0x53e8,	// (0x0008d92b) wml_tabs_3_passive_pane_ParamLimits

0x53e8,	// (0x0008d92b) wml_tabs_3_passive_pane

0x53f9,	// (0x0008d93c) wml_tabs_3_passive_pane_cp_ParamLimits

0x53f9,	// (0x0008d93c) wml_tabs_3_passive_pane_cp

0x540a,	// (0x0008d94d) tabs_4_active_pane

0x5412,	// (0x0008d955) tabs_4_passive_pane

0x541a,	// (0x0008d95d) tabs_4_passive_pane_cp

0x5422,	// (0x0008d965) tabs_4_passive_pane_cp2

0x4e36,	// (0x0008d379) aid_height_text

0xe3d4,	// (0x00096917) mup_volume_cont_pane_ParamLimits

0xe3d4,	// (0x00096917) mup_volume_cont_pane

0xaa49,	// (0x00092f8c) aid_size_cell_pinb

0xaa49,	// (0x00092f8c) aid_size_list_pinb

0xe3d4,	// (0x00096917) mup2_volume_cont_pane_ParamLimits

0xe3d4,	// (0x00096917) mup2_volume_cont_pane

0x542a,	// (0x0008d96d) mup2_volume_cont_pane_g1_ParamLimits

0x542a,	// (0x0008d96d) mup2_volume_cont_pane_g1

0x22f7,	// (0x0008a83a) aid_size_cell_touch_ParamLimits

0x22f7,	// (0x0008a83a) aid_size_cell_touch

0x25b6,	// (0x0008aaf9) touch_pane_ParamLimits

0x25b6,	// (0x0008aaf9) touch_pane

0x25ac,	// (0x0008aaef) main_rss2_pane

0xe64d,	// (0x00096b90) listscroll_rss2_pane

0xe656,	// (0x00096b99) rss2_navigation_pane

0xe65e,	// (0x00096ba1) list_rss2_pane

0xceb8,	// (0x000953fb) scroll_pane_cp22

0xe666,	// (0x00096ba9) rss2_navigation_pane_g1

0xe66f,	// (0x00096bb2) rss2_navigation_pane_g2

0xe677,	// (0x00096bba) rss2_navigation_pane_g3

0x0002,

0xf5d7,	// (0x00097b1a) rss2_navigation_pane_g

0xe67f,	// (0x00096bc2) rss2_navigation_pane_t1

0x5456,	// (0x0008d999) rss2_list_single_pane_ParamLimits

0x5456,	// (0x0008d999) rss2_list_single_pane

0xe68d,	// (0x00096bd0) rss2_list_single_pane_t2

0xe69b,	// (0x00096bde) rss2_list_single_pane_t3_ParamLimits

0xe69b,	// (0x00096bde) rss2_list_single_pane_t3

0xe6b8,	// (0x00096bfb) rss2_list_single_pane_t4

0x4103,	// (0x0008c646) smil_status_pane_g1

0x4fef,	// (0x0008d532) main_image2_pane_ParamLimits

0x4fef,	// (0x0008d532) main_image2_pane

0xcdd3,	// (0x00095316) main_camera2_pane_g9_ParamLimits

0xcdd3,	// (0x00095316) main_camera2_pane_g9

0x5335,	// (0x0008d878) main_camera2_pane_t5_ParamLimits

0x5335,	// (0x0008d878) main_camera2_pane_t5

0x5349,	// (0x0008d88c) main_camera2_pane_t6_ParamLimits

0x5349,	// (0x0008d88c) main_camera2_pane_t6

0x548a,	// (0x0008d9cd) main_image2_pane_g1_ParamLimits

0x548a,	// (0x0008d9cd) main_image2_pane_g1

0x4b68,	// (0x0008d0ab) smil2_video_pane_ParamLimits

0x4b68,	// (0x0008d0ab) smil2_video_pane

0x232b,	// (0x0008a86e) aid_zoom_text_primary_cp

0x2547,	// (0x0008aa8a) popup_preview_fixed_window

0xc7a6,	// (0x00094ce9) im_reading_pane_g1

0x5327,	// (0x0008d86a) cams2_bc_adjust_pane_cp_ParamLimits

0x5327,	// (0x0008d86a) cams2_bc_adjust_pane_cp

0x2592,	// (0x0008aad5) cams2_bc_adjust_pane_ParamLimits

0x2592,	// (0x0008aad5) cams2_bc_adjust_pane

0x1250,	// (0x00089793) cams2_bc_adjust_pane_g1

0x25ac,	// (0x0008aaef) cams2_slider_pane

0x1250,	// (0x00089793) cams2_slider_pane_g1

0x1250,	// (0x00089793) cams2_slider_pane_g2

0x0006,

0xf5de,	// (0x00097b21) cams2_slider_pane_g

0x2687,	// (0x0008abca) calc_display_pane_ParamLimits

0x26a5,	// (0x0008abe8) calc_paper_pane_ParamLimits

0x26c1,	// (0x0008ac04) grid_calc_pane_ParamLimits

0x4323,	// (0x0008c866) popup_clock_digital_window_t1_ParamLimits

0xd414,	// (0x00095957) main_image_pane_t1

0x266d,	// (0x0008abb0) aid_size_cell_calc_ParamLimits

0x266d,	// (0x0008abb0) aid_size_cell_calc

0x5020,	// (0x0008d563) popup_blid_sat_info2_window_ParamLimits

0x5020,	// (0x0008d563) popup_blid_sat_info2_window

0xe6c6,	// (0x00096c09) aid_size_cell_blid

0xe3d4,	// (0x00096917) bg_popup_window_pane_cp07

0xe6e3,	// (0x00096c26) grid_popup_blid_pane

0xe6ed,	// (0x00096c30) heading_pane_cp05_ParamLimits

0xe6ed,	// (0x00096c30) heading_pane_cp05

0xe7b7,	// (0x00096cfa) cell_popup_blid_pane_ParamLimits

0xe7b7,	// (0x00096cfa) cell_popup_blid_pane

0xe7db,	// (0x00096d1e) cell_popup_blid_pane_g1

0xe7e3,	// (0x00096d26) cell_popup_blid_pane_t1

0xe3d4,	// (0x00096917) mup2_indicator_pane_ParamLimits

0xe3d4,	// (0x00096917) mup2_indicator_pane

0xaa49,	// (0x00092f8c) mup2_visualizer_osc_pane

0xe56d,	// (0x00096ab0) mup2_visualizer_spec_pane_ParamLimits

0xe56d,	// (0x00096ab0) mup2_visualizer_spec_pane

0xaa49,	// (0x00092f8c) mup2_spec_half_pane

0xaa49,	// (0x00092f8c) mup2_spec_half_pane_cp

0xe7f1,	// (0x00096d34) mup2_spec_bar_pane_ParamLimits

0xe7f1,	// (0x00096d34) mup2_spec_bar_pane

0xc4c6,	// (0x00094a09) mup2_spec_bar_pane_g1

0xe810,	// (0x00096d53) mup2_spec_bar_pane_g2

0x0001,

0xf604,	// (0x00097b47) mup2_spec_bar_pane_g

0xaa49,	// (0x00092f8c) mup2_osc_middle_pane

0xc4c6,	// (0x00094a09) mup2_visualizer_osc_pane_g1

0xbccc,	// (0x0009420f) popup_number_entry_window_t1_ParamLimits

0xbcdf,	// (0x00094222) popup_number_entry_window_t2_ParamLimits

0xbcf1,	// (0x00094234) popup_number_entry_window_t3_ParamLimits

0x260d,	// (0x0008ab50) popup_number_entry_window_t5_ParamLimits

0x260d,	// (0x0008ab50) popup_number_entry_window_t5

0xf040,	// (0x00097583) popup_number_entry_window_t_ParamLimits

0xbd03,	// (0x00094246) text_title_cp2_ParamLimits

0x489e,	// (0x0008cde1) aid_hotspot_pointer_text2_pane

0x492c,	// (0x0008ce6f) main_viewer_pane_g9_ParamLimits

0x492c,	// (0x0008ce6f) main_viewer_pane_g9

0xc9df,	// (0x00094f22) cale_month_pane_t1_ParamLimits

0xca1c,	// (0x00094f5f) bg_cale_pane_ParamLimits

0xca34,	// (0x00094f77) list_cale_pane_ParamLimits

0xca45,	// (0x00094f88) listscroll_cale_day_pane_t1

0xca57,	// (0x00094f9a) scroll_pane_cp09_ParamLimits

0x45d4,	// (0x0008cb17) main_mup_eq_pane_t1_ParamLimits

0x45d4,	// (0x0008cb17) main_mup_eq_pane_t1

0x45ee,	// (0x0008cb31) main_mup_eq_pane_t2_ParamLimits

0x45ee,	// (0x0008cb31) main_mup_eq_pane_t2

0x4606,	// (0x0008cb49) main_mup_eq_pane_t3_ParamLimits

0x4606,	// (0x0008cb49) main_mup_eq_pane_t3

0x461e,	// (0x0008cb61) main_mup_eq_pane_t4_ParamLimits

0x461e,	// (0x0008cb61) main_mup_eq_pane_t4

0x4636,	// (0x0008cb79) main_mup_eq_pane_t5_ParamLimits

0x4636,	// (0x0008cb79) main_mup_eq_pane_t5

0x464e,	// (0x0008cb91) main_mup_eq_pane_t6_ParamLimits

0x464e,	// (0x0008cb91) main_mup_eq_pane_t6

0x4662,	// (0x0008cba5) main_mup_eq_pane_t7_ParamLimits

0x4662,	// (0x0008cba5) main_mup_eq_pane_t7

0x4676,	// (0x0008cbb9) main_mup_eq_pane_t8_ParamLimits

0x4676,	// (0x0008cbb9) main_mup_eq_pane_t8

0x468c,	// (0x0008cbcf) main_mup_eq_pane_t9_ParamLimits

0x468c,	// (0x0008cbcf) main_mup_eq_pane_t9

0x46a4,	// (0x0008cbe7) main_mup_eq_pane_t10_ParamLimits

0x46a4,	// (0x0008cbe7) main_mup_eq_pane_t10

0x0009,

0xf39f,	// (0x000978e2) main_mup_eq_pane_t_ParamLimits

0xf39f,	// (0x000978e2) main_mup_eq_pane_t

0x4761,	// (0x0008cca4) mup_equalizer_pane_cp5_ParamLimits

0x4777,	// (0x0008ccba) mup_equalizer_pane_cp6_ParamLimits

0x478f,	// (0x0008ccd2) mup_equalizer_pane_cp7_ParamLimits

0x25ac,	// (0x0008aaef) main_gallery_pane

0xe50b,	// (0x00096a4e) smil2_volume_pane

0xe513,	// (0x00096a56) smil_status_volume_pane_g1_ParamLimits

0xe526,	// (0x00096a69) smil_status_volume_pane_g2_ParamLimits

0x51da,	// (0x0008d71d) smil_status_volume_pane_g3_ParamLimits

0xf55d,	// (0x00097aa0) smil_status_volume_pane_g_ParamLimits

0xe3d4,	// (0x00096917) bg_popup_window_pane_cp07_ParamLimits

0xe6ce,	// (0x00096c11) blid_firmament_pane

0xc47a,	// (0x000949bd) aid_size_cell_gallery_ParamLimits

0xc47a,	// (0x000949bd) aid_size_cell_gallery

0xc47a,	// (0x000949bd) grid_gallery_pane_ParamLimits

0xc47a,	// (0x000949bd) grid_gallery_pane

0xd338,	// (0x0009587b) cell_gallery_pane_ParamLimits

0xd338,	// (0x0009587b) cell_gallery_pane

0xc090,	// (0x000945d3) bg_cell_gallery_focus_pane_ParamLimits

0xc090,	// (0x000945d3) bg_cell_gallery_focus_pane

0xc488,	// (0x000949cb) cell_gallery_pane_g1_ParamLimits

0xc488,	// (0x000949cb) cell_gallery_pane_g1

0xc488,	// (0x000949cb) cell_gallery_pane_g2_ParamLimits

0xc488,	// (0x000949cb) cell_gallery_pane_g2

0xc488,	// (0x000949cb) cell_gallery_pane_g3_ParamLimits

0xc488,	// (0x000949cb) cell_gallery_pane_g3

0xc496,	// (0x000949d9) cell_gallery_pane_g4_ParamLimits

0xc496,	// (0x000949d9) cell_gallery_pane_g4

0x0003,

0xf609,	// (0x00097b4c) cell_gallery_pane_g_ParamLimits

0xf609,	// (0x00097b4c) cell_gallery_pane_g

0xe81a,	// (0x00096d5d) bg_cell_gallery_focus_pane_g1

0xe822,	// (0x00096d65) bg_cell_gallery_focus_pane_g2

0xe82a,	// (0x00096d6d) bg_cell_gallery_focus_pane_g3

0xe832,	// (0x00096d75) bg_cell_gallery_focus_pane_g4

0xe83a,	// (0x00096d7d) bg_cell_gallery_focus_pane_g5

0xe842,	// (0x00096d85) bg_cell_gallery_focus_pane_g6

0xe84a,	// (0x00096d8d) bg_cell_gallery_focus_pane_g7

0xe852,	// (0x00096d95) bg_cell_gallery_focus_pane_g8

0x0007,

0xf612,	// (0x00097b55) bg_cell_gallery_focus_pane_g

0xe85a,	// (0x00096d9d) aid_firma_cardinal

0xe86e,	// (0x00096db1) blid_firmament_pane_t1

0xe885,	// (0x00096dc8) blid_firmament_pane_t2

0xe89c,	// (0x00096ddf) blid_firmament_pane_t3

0xe8b3,	// (0x00096df6) blid_firmament_pane_t4

0x0003,

0xf623,	// (0x00097b66) blid_firmament_pane_t

0xe8ca,	// (0x00096e0d) blid_sat_info_pane

0xc4c6,	// (0x00094a09) blid_sat_info_pane_g1

0xc4c6,	// (0x00094a09) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x000975f2) blid_sat_info_pane_g

0xe8da,	// (0x00096e1d) blid_sat_info_pane_t1

0xe8e8,	// (0x00096e2b) smil2_volume_content_pane

0xe8f1,	// (0x00096e34) smil2_volume_pane_g1

0xc5c3,	// (0x00094b06) smil2_volume_content_pane_g1

0xe8f9,	// (0x00096e3c) smil2_volume_content_pane_g2

0xe902,	// (0x00096e45) smil2_volume_content_pane_g3

0xe90b,	// (0x00096e4e) smil2_volume_content_pane_g4

0xe914,	// (0x00096e57) smil2_volume_content_pane_g5

0xe91d,	// (0x00096e60) smil2_volume_content_pane_g6

0xe926,	// (0x00096e69) smil2_volume_content_pane_g7

0xe92f,	// (0x00096e72) smil2_volume_content_pane_g8

0xe938,	// (0x00096e7b) smil2_volume_content_pane_g9

0xe941,	// (0x00096e84) smil2_volume_content_pane_g10

0x0009,

0xf62c,	// (0x00097b6f) smil2_volume_content_pane_g

0x2bed,	// (0x0008b130) cale_week_day_heading_pane_t1_ParamLimits

0x2c08,	// (0x0008b14b) cale_week_day_heading_pane_t2_ParamLimits

0x2c23,	// (0x0008b166) cale_week_day_heading_pane_t3_ParamLimits

0x2c3e,	// (0x0008b181) cale_week_day_heading_pane_t4_ParamLimits

0x2c59,	// (0x0008b19c) cale_week_day_heading_pane_t5_ParamLimits

0x2c74,	// (0x0008b1b7) cale_week_day_heading_pane_t6_ParamLimits

0x2c8f,	// (0x0008b1d2) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x0009768a) cale_week_day_heading_pane_t_ParamLimits

0xc69b,	// (0x00094bde) bg_cale_side_pane_ParamLimits

0x2caa,	// (0x0008b1ed) cale_week_time_pane_t1_ParamLimits

0x2cc4,	// (0x0008b207) cale_week_time_pane_t2_ParamLimits

0x2cde,	// (0x0008b221) cale_week_time_pane_t3_ParamLimits

0x2cf8,	// (0x0008b23b) cale_week_time_pane_t4_ParamLimits

0x2d12,	// (0x0008b255) cale_week_time_pane_t5_ParamLimits

0x2d2c,	// (0x0008b26f) cale_week_time_pane_t6_ParamLimits

0x2d4c,	// (0x0008b28f) cale_week_time_pane_t7_ParamLimits

0x2d6e,	// (0x0008b2b1) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x00097699) cale_week_time_pane_t_ParamLimits

0x2d92,	// (0x0008b2d5) cell_cale_week_pane_g2_ParamLimits

0xc69b,	// (0x00094bde) bg_cale_side_pane_cp01_ParamLimits

0x3ef2,	// (0x0008c435) cale_month_week_pane_t1_ParamLimits

0x3f0b,	// (0x0008c44e) cale_month_week_pane_t2_ParamLimits

0x3f24,	// (0x0008c467) cale_month_week_pane_t3_ParamLimits

0x3f3d,	// (0x0008c480) cale_month_week_pane_t4_ParamLimits

0x3f58,	// (0x0008c49b) cale_month_week_pane_t5_ParamLimits

0x3f79,	// (0x0008c4bc) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x00097767) cale_month_week_pane_t_ParamLimits

0x40c0,	// (0x0008c603) cell_cale_month_pane_g1_ParamLimits

0x25ac,	// (0x0008aaef) main_cale_event_viewer_pane

0xaa49,	// (0x00092f8c) listscroll_cale_event_viewer_pane

0xe94a,	// (0x00096e8d) list_cale_ev_pane

0xe952,	// (0x00096e95) scroll_pane_cp023

0xe95e,	// (0x00096ea1) field_cale_ev_pane_ParamLimits

0xe95e,	// (0x00096ea1) field_cale_ev_pane

0xe97c,	// (0x00096ebf) field_cale_ev_content_pane_ParamLimits

0xe97c,	// (0x00096ebf) field_cale_ev_content_pane

0xe988,	// (0x00096ecb) field_cale_ev_pane_g1_ParamLimits

0xe988,	// (0x00096ecb) field_cale_ev_pane_g1

0xe994,	// (0x00096ed7) field_cale_ev_pane_g2_ParamLimits

0xe994,	// (0x00096ed7) field_cale_ev_pane_g2

0xe9ac,	// (0x00096eef) field_cale_ev_pane_g3_ParamLimits

0xe9ac,	// (0x00096eef) field_cale_ev_pane_g3

0x0002,

0xf641,	// (0x00097b84) field_cale_ev_pane_g_ParamLimits

0xf641,	// (0x00097b84) field_cale_ev_pane_g

0xe9c4,	// (0x00096f07) field_cale_ev_pane_t1_ParamLimits

0xe9c4,	// (0x00096f07) field_cale_ev_pane_t1

0xe9db,	// (0x00096f1e) field_cale_ev_content_pane_t1_ParamLimits

0xe9db,	// (0x00096f1e) field_cale_ev_content_pane_t1

0xd240,	// (0x00095783) bg_button_pane_cp01

0x2978,	// (0x0008aebb) listscroll_cale_week_pane_ParamLimits

0xc646,	// (0x00094b89) popup_toolbar_window_cp01

0xc66c,	// (0x00094baf) listscroll_cale_week_pane_t1_ParamLimits

0x2978,	// (0x0008aebb) listscroll_cale_day_pane_ParamLimits

0xc646,	// (0x00094b89) popup_toolbar_window_cp02

0xca45,	// (0x00094f88) listscroll_cale_day_pane_t1_ParamLimits

0x2978,	// (0x0008aebb) main_cale_month_pane_ParamLimits

0x5123,	// (0x0008d666) popup_toolbar_window_cp03_ParamLimits

0x5123,	// (0x0008d666) popup_toolbar_window_cp03

0x4a7e,	// (0x0008cfc1) main_image_pane_g2_ParamLimits

0x4a7e,	// (0x0008cfc1) main_image_pane_g2

0x4a8a,	// (0x0008cfcd) main_image_pane_g3_ParamLimits

0x4a8a,	// (0x0008cfcd) main_image_pane_g3

0x0002,

0xf431,	// (0x00097974) main_image_pane_g_ParamLimits

0xf431,	// (0x00097974) main_image_pane_g

0xd414,	// (0x00095957) main_image_pane_t1_ParamLimits

0x4a96,	// (0x0008cfd9) main_image_pane_t2_ParamLimits

0x4a96,	// (0x0008cfd9) main_image_pane_t2

0x4aa8,	// (0x0008cfeb) main_image_pane_t3_ParamLimits

0x4aa8,	// (0x0008cfeb) main_image_pane_t3

0x4aba,	// (0x0008cffd) main_image_pane_t4_ParamLimits

0x4aba,	// (0x0008cffd) main_image_pane_t4

0x0003,

0xf438,	// (0x0009797b) main_image_pane_t_ParamLimits

0xf438,	// (0x0009797b) main_image_pane_t

0x4acc,	// (0x0008d00f) popup_image_details_window_cp01

0x4ad6,	// (0x0008d019) popup_toobar_trans_pane_cp01_ParamLimits

0x4ad6,	// (0x0008d019) popup_toobar_trans_pane_cp01

0x5073,	// (0x0008d5b6) popup_image_details_window_ParamLimits

0x5073,	// (0x0008d5b6) popup_image_details_window

0x5081,	// (0x0008d5c4) popup_image_focus_window

0x2592,	// (0x0008aad5) camera2_autofocus_pane_ParamLimits

0x2592,	// (0x0008aad5) camera2_autofocus_pane

0xaa49,	// (0x00092f8c) bg_popup_sub_pane_cp06

0xe9f9,	// (0x00096f3c) popup_image_focus_window_g1

0xea01,	// (0x00096f44) popup_image_focus_window_g2

0xea09,	// (0x00096f4c) popup_image_focus_window_g3

0xea11,	// (0x00096f54) popup_image_focus_window_g4

0x0003,

0xf648,	// (0x00097b8b) popup_image_focus_window_g

0xea19,	// (0x00096f5c) popup_image_focus_window_t1

0xea27,	// (0x00096f6a) popup_image_focus_window_t2

0xea37,	// (0x00096f7a) popup_image_focus_window_t3

0x0002,

0xf651,	// (0x00097b94) popup_image_focus_window_t

0xc488,	// (0x000949cb) camera2_autofocus_pane_g1

0xc090,	// (0x000945d3) bg_tb_trans_pane_cp01

0xea45,	// (0x00096f88) popup_image_details_window_g1

0xea58,	// (0x00096f9b) popup_image_details_window_g2

0x0002,

0xf663,	// (0x00097ba6) popup_image_details_window_g

0xea81,	// (0x00096fc4) popup_image_details_window_t1

0xea93,	// (0x00096fd6) popup_image_details_window_t2

0xeaac,	// (0x00096fef) popup_image_details_window_t3

0xeac0,	// (0x00097003) popup_image_details_window_t4

0xeadb,	// (0x0009701e) popup_image_details_window_t5

0x0004,

0xf66a,	// (0x00097bad) popup_image_details_window_t

0xc510,	// (0x00094a53) bg_calc_paper_pane_ParamLimits

0x25ac,	// (0x0008aaef) grid_highlight_pane_cp013

0x26fc,	// (0x0008ac3f) list_calc_pane_ParamLimits

0x270e,	// (0x0008ac51) scroll_pane_cp024

0xc524,	// (0x00094a67) bg_calc_display_pane_ParamLimits

0x2716,	// (0x0008ac59) calc_display_pane_t1_ParamLimits

0x272b,	// (0x0008ac6e) calc_display_pane_t2_ParamLimits

0x2740,	// (0x0008ac83) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x0009760a) calc_display_pane_t_ParamLimits

0x281a,	// (0x0008ad5d) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x00097627) cell_calc_pane_g

0x2823,	// (0x0008ad66) cell_calc_pane_t1

0xc579,	// (0x00094abc) grid_highlight_pane_cp02_ParamLimits

0xc58f,	// (0x00094ad2) toolbar_button_pane_cp01_ParamLimits

0xc58f,	// (0x00094ad2) toolbar_button_pane_cp01

0xd459,	// (0x0009599c) temp_image_control_pane_ParamLimits

0xd459,	// (0x0009599c) temp_image_control_pane

0x4fef,	// (0x0008d532) main_mp3_pane

0xeaf5,	// (0x00097038) temp_image_control_pane_g1_ParamLimits

0xeaf5,	// (0x00097038) temp_image_control_pane_g1

0xeb03,	// (0x00097046) temp_image_control_pane_g2_ParamLimits

0xeb03,	// (0x00097046) temp_image_control_pane_g2

0xeb15,	// (0x00097058) temp_image_control_pane_g3_ParamLimits

0xeb15,	// (0x00097058) temp_image_control_pane_g3

0x5496,	// (0x0008d9d9) temp_image_control_pane_g4_ParamLimits

0x5496,	// (0x0008d9d9) temp_image_control_pane_g4

0x0003,

0xf675,	// (0x00097bb8) temp_image_control_pane_g_ParamLimits

0xf675,	// (0x00097bb8) temp_image_control_pane_g

0xeaf5,	// (0x00097038) main_mp3_pane_g1

0x54a7,	// (0x0008d9ea) main_mp3_pane_g2

0x0007,

0xf67e,	// (0x00097bc1) main_mp3_pane_g

0xeb4a,	// (0x0009708d) main_mp3_pane_t1

0xc496,	// (0x000949d9) main_camera_pane_g8_ParamLimits

0xc496,	// (0x000949d9) main_camera_pane_g8

0x2f39,	// (0x0008b47c) main_video_pane_g7_ParamLimits

0x2f39,	// (0x0008b47c) main_video_pane_g7

0x5335,	// (0x0008d878) main_camera2_pane_t7_ParamLimits

0x5335,	// (0x0008d878) main_camera2_pane_t7

0xc7fd,	// (0x00094d40) scroll_pane_cp025_ParamLimits

0xc7fd,	// (0x00094d40) scroll_pane_cp025

0xc811,	// (0x00094d54) scroll_pane_cp026_ParamLimits

0xc811,	// (0x00094d54) scroll_pane_cp026

0xc820,	// (0x00094d63) wml_content_pane_ParamLimits

0x25ac,	// (0x0008aaef) main_touch_calib_pane

0x554b,	// (0x0008da8e) main_touch_calib_pane_g1

0x5557,	// (0x0008da9a) main_touch_calib_pane_g2

0x5563,	// (0x0008daa6) main_touch_calib_pane_g3

0x556f,	// (0x0008dab2) main_touch_calib_pane_g4

0x0003,

0xf69c,	// (0x00097bdf) main_touch_calib_pane_g

0x557b,	// (0x0008dabe) main_touch_calib_pane_t1

0x5594,	// (0x0008dad7) main_touch_calib_pane_t2

0x0004,

0xf6a5,	// (0x00097be8) main_touch_calib_pane_t

0xcf87,	// (0x000954ca) mup_progress_pane_cp02

0xcfbc,	// (0x000954ff) navi_pane_g1

0xd077,	// (0x000955ba) navi_pane_mp_t3

0x4fef,	// (0x0008d532) main_mp3_pane_ParamLimits

0x5160,	// (0x0008d6a3) navi_pane_ParamLimits

0xeaf5,	// (0x00097038) main_mp3_pane_g1_ParamLimits

0x54a7,	// (0x0008d9ea) main_mp3_pane_g2_ParamLimits

0x54b3,	// (0x0008d9f6) main_mp3_pane_g3_ParamLimits

0x54b3,	// (0x0008d9f6) main_mp3_pane_g3

0x54bf,	// (0x0008da02) main_mp3_pane_g4_ParamLimits

0x54bf,	// (0x0008da02) main_mp3_pane_g4

0xc488,	// (0x000949cb) main_mp3_pane_g5_ParamLimits

0xc488,	// (0x000949cb) main_mp3_pane_g5

0xeb25,	// (0x00097068) main_mp3_pane_g6_ParamLimits

0xeb25,	// (0x00097068) main_mp3_pane_g6

0xeb32,	// (0x00097075) main_mp3_pane_g7_ParamLimits

0xeb32,	// (0x00097075) main_mp3_pane_g7

0xeb3e,	// (0x00097081) main_mp3_pane_g8_ParamLimits

0xeb3e,	// (0x00097081) main_mp3_pane_g8

0xf67e,	// (0x00097bc1) main_mp3_pane_g_ParamLimits

0x54cb,	// (0x0008da0e) main_mp3_pane_t2

0x54db,	// (0x0008da1e) main_mp3_pane_t3

0xeb58,	// (0x0009709b) main_mp3_pane_t4

0xeb66,	// (0x000970a9) main_mp3_pane_t5

0x0005,

0xf68f,	// (0x00097bd2) main_mp3_pane_t

0xeb74,	// (0x000970b7) mup_progress_pane_cp01

0x232b,	// (0x0008a86e) aid_zoom_text_secondary2

0xe94a,	// (0x00096e8d) list_cale_ev2_pane

0xe952,	// (0x00096e95) scroll_pane_cp023_ParamLimits

0x55ef,	// (0x0008db32) field_cale_ev2_pane_ParamLimits

0x55ef,	// (0x0008db32) field_cale_ev2_pane

0xeb7c,	// (0x000970bf) field_cale_ev2_pane_g1_ParamLimits

0xeb7c,	// (0x000970bf) field_cale_ev2_pane_g1

0xeb88,	// (0x000970cb) field_cale_ev2_pane_g2_ParamLimits

0xeb88,	// (0x000970cb) field_cale_ev2_pane_g2

0xeba0,	// (0x000970e3) field_cale_ev2_pane_g3_ParamLimits

0xeba0,	// (0x000970e3) field_cale_ev2_pane_g3

0x0003,

0xf6b0,	// (0x00097bf3) field_cale_ev2_pane_g_ParamLimits

0xf6b0,	// (0x00097bf3) field_cale_ev2_pane_g

0xebc4,	// (0x00097107) field_cale_ev2_pane_t1_ParamLimits

0xebc4,	// (0x00097107) field_cale_ev2_pane_t1

0xebdb,	// (0x0009711e) field_cale_ev2_pane_t2_ParamLimits

0xebdb,	// (0x0009711e) field_cale_ev2_pane_t2

0x0001,

0xf6b9,	// (0x00097bfc) field_cale_ev2_pane_t_ParamLimits

0xf6b9,	// (0x00097bfc) field_cale_ev2_pane_t

0x4994,	// (0x0008ced7) main_postcard_pane_g5_ParamLimits

0x4994,	// (0x0008ced7) main_postcard_pane_g5

0x49a2,	// (0x0008cee5) main_postcard_pane_g6_ParamLimits

0x49a2,	// (0x0008cee5) main_postcard_pane_g6

0xc47a,	// (0x000949bd) camera2_autofocus_pane_cp_ParamLimits

0xc47a,	// (0x000949bd) camera2_autofocus_pane_cp

0x4fef,	// (0x0008d532) main_mup3_pane

0x5658,	// (0x0008db9b) main_mup3_pane_g1_ParamLimits

0x5658,	// (0x0008db9b) main_mup3_pane_g1

0x5679,	// (0x0008dbbc) main_mup3_pane_g2_ParamLimits

0x5679,	// (0x0008dbbc) main_mup3_pane_g2

0x56f3,	// (0x0008dc36) main_mup3_pane_g3_ParamLimits

0x56f3,	// (0x0008dc36) main_mup3_pane_g3

0x5736,	// (0x0008dc79) main_mup3_pane_g4_ParamLimits

0x5736,	// (0x0008dc79) main_mup3_pane_g4

0x5779,	// (0x0008dcbc) main_mup3_pane_g5_ParamLimits

0x5779,	// (0x0008dcbc) main_mup3_pane_g5

0x57bc,	// (0x0008dcff) main_mup3_pane_g6_ParamLimits

0x57bc,	// (0x0008dcff) main_mup3_pane_g6

0xc496,	// (0x000949d9) main_mup3_pane_g7_ParamLimits

0xc496,	// (0x000949d9) main_mup3_pane_g7

0x0007,

0xf6c9,	// (0x00097c0c) main_mup3_pane_g_ParamLimits

0xf6c9,	// (0x00097c0c) main_mup3_pane_g

0x5832,	// (0x0008dd75) main_mup3_pane_t1_ParamLimits

0x5832,	// (0x0008dd75) main_mup3_pane_t1

0x58a1,	// (0x0008dde4) main_mup3_pane_t2_ParamLimits

0x58a1,	// (0x0008dde4) main_mup3_pane_t2

0x596a,	// (0x0008dead) main_mup3_pane_t4_ParamLimits

0x596a,	// (0x0008dead) main_mup3_pane_t4

0x59b8,	// (0x0008defb) main_mup3_pane_t5_ParamLimits

0x59b8,	// (0x0008defb) main_mup3_pane_t5

0x5a68,	// (0x0008dfab) main_mup3_pane_t6_ParamLimits

0x5a68,	// (0x0008dfab) main_mup3_pane_t6

0x0005,

0xf6da,	// (0x00097c1d) main_mup3_pane_t_ParamLimits

0xf6da,	// (0x00097c1d) main_mup3_pane_t

0x5b14,	// (0x0008e057) mup3_progress_pane_ParamLimits

0x5b14,	// (0x0008e057) mup3_progress_pane

0x5b88,	// (0x0008e0cb) popup_mup3_control_window_ParamLimits

0x5b88,	// (0x0008e0cb) popup_mup3_control_window

0xebf0,	// (0x00097133) popup_mup3_text_window

0x5ba1,	// (0x0008e0e4) mup3_progress_pane_t1

0x5bc0,	// (0x0008e103) mup3_progress_pane_t2

0xebf8,	// (0x0009713b) mup3_progress_pane_t3

0x0002,

0xf6e7,	// (0x00097c2a) mup3_progress_pane_t

0xec15,	// (0x00097158) mup_progress_pane_cp03

0xaa49,	// (0x00092f8c) bg_tb_trans_pane_cp04

0x5bdf,	// (0x0008e122) mup3_volume_pane

0x5be7,	// (0x0008e12a) popup_mup3_control_window_g1

0x5bf0,	// (0x0008e133) mup3_volume_pane_g1

0x5bf9,	// (0x0008e13c) mup3_volume_pane_g2

0x5c02,	// (0x0008e145) mup3_volume_pane_g3

0x0002,

0xf6ee,	// (0x00097c31) mup3_volume_pane_g

0xaa49,	// (0x00092f8c) bg_tb_trans_pane_cp03

0xec25,	// (0x00097168) popup_mup3_text_window_g1

0xec2d,	// (0x00097170) popup_mup3_text_window_t1

0xc56c,	// (0x00094aaf) list_calc_item_pane_g1_ParamLimits

0xe644,	// (0x00096b87) mup_volume_pane_cp_g1

0x55ad,	// (0x0008daf0) main_touch_calib_pane_t3

0x55c3,	// (0x0008db06) main_touch_calib_pane_t4

0x55d9,	// (0x0008db1c) main_touch_calib_pane_t5

0x22e3,	// (0x0008a826) aid_cell_size_toolbar2

0x22eb,	// (0x0008a82e) aid_popup3_width_pane

0x21f3,	// (0x0008a736) aid_zoom_text_msg_primary

0x2e3b,	// (0x0008b37e) vorec_t7

0xc530,	// (0x00094a73) bg_calc_paper_pane_g1_ParamLimits

0xc53c,	// (0x00094a7f) bg_calc_paper_pane_g2_ParamLimits

0xc548,	// (0x00094a8b) bg_calc_paper_pane_g3_ParamLimits

0xc554,	// (0x00094a97) bg_calc_paper_pane_g4_ParamLimits

0xc560,	// (0x00094aa3) bg_calc_paper_pane_g5_ParamLimits

0x277f,	// (0x0008acc2) bg_calc_paper_pane_g6_ParamLimits

0x2790,	// (0x0008acd3) bg_calc_paper_pane_g7_ParamLimits

0x27a1,	// (0x0008ace4) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x00097611) bg_calc_paper_pane_g_ParamLimits

0x27b2,	// (0x0008acf5) calc_bg_paper_pane_g9_ParamLimits

0xc47a,	// (0x000949bd) image_qvga_pane_ParamLimits

0xc47a,	// (0x000949bd) image_qvga_pane

0xc40d,	// (0x00094950) bg_popup_sub_pane_cp04_ParamLimits

0xd36e,	// (0x000958b1) popup_mup_playback_window_g1_ParamLimits

0xd37a,	// (0x000958bd) popup_mup_playback_window_t1_ParamLimits

0xd38f,	// (0x000958d2) popup_mup_playback_window_t2_ParamLimits

0xf42c,	// (0x0009796f) popup_mup_playback_window_t_ParamLimits

0xc488,	// (0x000949cb) main_mup2_pane_g3_ParamLimits

0xc488,	// (0x000949cb) main_mup2_pane_g3

0x30fa,	// (0x0008b63d) popup_toolbar_window_cp04

0xd735,	// (0x00095c78) popup_call2_audio_second_window_g3_ParamLimits

0xd735,	// (0x00095c78) popup_call2_audio_second_window_g3

0xdb4d,	// (0x00096090) popup_call2_audio_first_window_g4_ParamLimits

0xdb4d,	// (0x00096090) popup_call2_audio_first_window_g4

0xe174,	// (0x000966b7) popup_call2_audio_in_window_g4_ParamLimits

0xe174,	// (0x000966b7) popup_call2_audio_in_window_g4

0x4a71,	// (0x0008cfb4) aid_area_sk_bg_cut_ParamLimits

0x4a71,	// (0x0008cfb4) aid_area_sk_bg_cut

0xd3a4,	// (0x000958e7) aid_area_sk_bg_cut_2_ParamLimits

0xd3a4,	// (0x000958e7) aid_area_sk_bg_cut_2

0xaa49,	// (0x00092f8c) aid_placing_details_win

0xaa49,	// (0x00092f8c) aid_placing_details_win_2

0xc488,	// (0x000949cb) camera2_autofocus_pane_g1_ParamLimits

0x2538,	// (0x0008aa7b) popup_fixed_preview_cale_window_ParamLimits

0x2538,	// (0x0008aa7b) popup_fixed_preview_cale_window

0xd0f5,	// (0x00095638) navi_slider_pane_g3

0xd0fe,	// (0x00095641) navi_slider_pane_g4

0xd107,	// (0x0009564a) navi_slider_pane_g5

0xd0f5,	// (0x00095638) navi_slider_pane_g6

0x45a8,	// (0x0008caeb) navi_slider_pane_g7

0xd205,	// (0x00095748) mup_scale_pane_g3

0xd20e,	// (0x00095751) mup_scale_pane_g4

0xd217,	// (0x0009575a) mup_scale_pane_g5

0x47a7,	// (0x0008ccea) mup_scale_pane_g6

0x47b0,	// (0x0008ccf3) mup_scale_pane_g7

0x1250,	// (0x00089793) cams2_slider_pane_g3

0x1250,	// (0x00089793) cams2_slider_pane_g4

0x1250,	// (0x00089793) cams2_slider_pane_g5

0x1250,	// (0x00089793) cams2_slider_pane_g6

0x1250,	// (0x00089793) cams2_slider_pane_g7

0xc4c6,	// (0x00094a09) camera2_autofocus_pane_cp_g1

0xe492,	// (0x000969d5) bg_popup_preview_window_pane_cp02_ParamLimits

0xe492,	// (0x000969d5) bg_popup_preview_window_pane_cp02

0xec3b,	// (0x0009717e) list_fp_cale_pane_ParamLimits

0xec3b,	// (0x0009717e) list_fp_cale_pane

0xec47,	// (0x0009718a) popup_fixed_preview_cale_window_t1_ParamLimits

0xec47,	// (0x0009718a) popup_fixed_preview_cale_window_t1

0x5c0b,	// (0x0008e14e) popup_fixed_preview_cale_window_t2_ParamLimits

0x5c0b,	// (0x0008e14e) popup_fixed_preview_cale_window_t2

0x5c20,	// (0x0008e163) popup_fixed_preview_cale_window_t3_ParamLimits

0x5c20,	// (0x0008e163) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f5,	// (0x00097c38) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f5,	// (0x00097c38) popup_fixed_preview_cale_window_t

0x5c35,	// (0x0008e178) list_single_fp_cale_pane_ParamLimits

0x5c35,	// (0x0008e178) list_single_fp_cale_pane

0xec65,	// (0x000971a8) list_single_fp_cale_pane_g1_ParamLimits

0xec65,	// (0x000971a8) list_single_fp_cale_pane_g1

0xec71,	// (0x000971b4) list_single_fp_cale_pane_g2_ParamLimits

0xec71,	// (0x000971b4) list_single_fp_cale_pane_g2

0x0002,

0xf6fc,	// (0x00097c3f) list_single_fp_cale_pane_g_ParamLimits

0xf6fc,	// (0x00097c3f) list_single_fp_cale_pane_g

0xec8a,	// (0x000971cd) list_single_fp_cale_pane_t1_ParamLimits

0xec8a,	// (0x000971cd) list_single_fp_cale_pane_t1

0xec9c,	// (0x000971df) list_single_fp_cale_pane_t2_ParamLimits

0xec9c,	// (0x000971df) list_single_fp_cale_pane_t2

0x0001,

0xf703,	// (0x00097c46) list_single_fp_cale_pane_t_ParamLimits

0xf703,	// (0x00097c46) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x25ac,	// (0x0008aaef) main_dialer_pane

0xaa49,	// (0x00092f8c) aid_cell_size_keypad

0xaa49,	// (0x00092f8c) dialer_ne_pane

0xaa49,	// (0x00092f8c) grid_dialer_command_1_pane

0xaa49,	// (0x00092f8c) grid_dialer_command_2_pane

0xaa49,	// (0x00092f8c) grid_dialer_keypad_pane

0xe3d4,	// (0x00096917) bg_popup_call_pane_cp06_ParamLimits

0xe3d4,	// (0x00096917) bg_popup_call_pane_cp06

0xe3d4,	// (0x00096917) dialer_ne_clear_pane_ParamLimits

0xe3d4,	// (0x00096917) dialer_ne_clear_pane

0xc4c6,	// (0x00094a09) dialer_ne_pane_g1

0xc4e4,	// (0x00094a27) dialer_ne_pane_t1_ParamLimits

0xc4e4,	// (0x00094a27) dialer_ne_pane_t1

0xedc1,	// (0x00097304) dialer_ne_pane_t2_ParamLimits

0xedc1,	// (0x00097304) dialer_ne_pane_t2

0x5c48,	// (0x0008e18b) dialer_ne_pane_t3_ParamLimits

0x5c48,	// (0x0008e18b) dialer_ne_pane_t3

0x0002,

0xf708,	// (0x00097c4b) dialer_ne_pane_t_ParamLimits

0xf708,	// (0x00097c4b) dialer_ne_pane_t

0x5c48,	// (0x0008e18b) dialer_ne_pane_t3_copy1_ParamLimits

0x5c48,	// (0x0008e18b) dialer_ne_pane_t3_copy1

0xeccf,	// (0x00097212) cell_dialer_keypad_pane_ParamLimits

0xeccf,	// (0x00097212) cell_dialer_keypad_pane

0xc090,	// (0x000945d3) cell_dialer_command_1_pane_ParamLimits

0xc090,	// (0x000945d3) cell_dialer_command_1_pane

0xece6,	// (0x00097229) cell_dialer_command_2_pane_ParamLimits

0xece6,	// (0x00097229) cell_dialer_command_2_pane

0xc090,	// (0x000945d3) bg_button_pane_cp02_ParamLimits

0xc090,	// (0x000945d3) bg_button_pane_cp02

0xc488,	// (0x000949cb) cell_dialer_keypad_pane_g1_ParamLimits

0xc488,	// (0x000949cb) cell_dialer_keypad_pane_g1

0xc090,	// (0x000945d3) bg_button_pane_cp03_ParamLimits

0xc090,	// (0x000945d3) bg_button_pane_cp03

0xc488,	// (0x000949cb) cell_dialer_command_1_pane_g1_ParamLimits

0xc488,	// (0x000949cb) cell_dialer_command_1_pane_g1

0xaa49,	// (0x00092f8c) bg_button_pane_cp04

0xc4c6,	// (0x00094a09) cell_dialer_command_2_pane_g1

0xaa49,	// (0x00092f8c) bg_button_pane_cp06

0xc4c6,	// (0x00094a09) dialer_ne_clear_pane_g1

0xcfc8,	// (0x0009550b) navi_pane_g2

0xcff6,	// (0x00095539) navi_pane_g3

0x0002,

0xf334,	// (0x00097877) navi_pane_g

0xd085,	// (0x000955c8) navi_pane_mv_g2

0xd0ac,	// (0x000955ef) navi_pane_mv_g5

0x4573,	// (0x0008cab6) navi_pane_mv_t1

0xc524,	// (0x00094a67) main_clock2_pane

0xc47a,	// (0x000949bd) main_clock2_list_pane_ParamLimits

0xc47a,	// (0x000949bd) main_clock2_list_pane

0x5cbe,	// (0x0008e201) main_clock2_pane_t1_ParamLimits

0x5cbe,	// (0x0008e201) main_clock2_pane_t1

0x5cec,	// (0x0008e22f) main_clock2_pane_t2_ParamLimits

0x5cec,	// (0x0008e22f) main_clock2_pane_t2

0x0004,

0xf714,	// (0x00097c57) main_clock2_pane_t_ParamLimits

0xf714,	// (0x00097c57) main_clock2_pane_t

0x5d51,	// (0x0008e294) popup_clock_analogue_window_cp03_ParamLimits

0x5d51,	// (0x0008e294) popup_clock_analogue_window_cp03

0x5d6f,	// (0x0008e2b2) popup_clock_digital_window_cp02_ParamLimits

0x5d6f,	// (0x0008e2b2) popup_clock_digital_window_cp02

0x5de4,	// (0x0008e327) main_clock2_list_single_pane_ParamLimits

0x5de4,	// (0x0008e327) main_clock2_list_single_pane

0xc6ed,	// (0x00094c30) list_highlight_pane_cp05

0xed29,	// (0x0009726c) main_clock2_list_single_pane_t1

0x30fa,	// (0x0008b63d) popup_toolbar_window_cp04_ParamLimits

0xc496,	// (0x000949d9) camera2_autofocus_pane_g2_ParamLimits

0xc496,	// (0x000949d9) camera2_autofocus_pane_g2

0xc496,	// (0x000949d9) camera2_autofocus_pane_g3_ParamLimits

0xc496,	// (0x000949d9) camera2_autofocus_pane_g3

0xc496,	// (0x000949d9) camera2_autofocus_pane_g4_ParamLimits

0xc496,	// (0x000949d9) camera2_autofocus_pane_g4

0xc496,	// (0x000949d9) camera2_autofocus_pane_g5_ParamLimits

0xc496,	// (0x000949d9) camera2_autofocus_pane_g5

0x0004,

0xf658,	// (0x00097b9b) camera2_autofocus_pane_g_ParamLimits

0xf658,	// (0x00097b9b) camera2_autofocus_pane_g

0x5619,	// (0x0008db5c) camera2_autofocus_pane_cp_g2

0x5621,	// (0x0008db64) camera2_autofocus_pane_cp_g3

0x5629,	// (0x0008db6c) camera2_autofocus_pane_cp_g4

0x5631,	// (0x0008db74) camera2_autofocus_pane_cp_g5

0x0004,

0xf6be,	// (0x00097c01) camera2_autofocus_pane_cp_g

0xaa49,	// (0x00092f8c) popup_dialer_spcha_window

0xaa49,	// (0x00092f8c) bg_popup_sub_pane_cp07

0xaa49,	// (0x00092f8c) list_spcha_pane

0xed37,	// (0x0009727a) list_single_spcha_pane_ParamLimits

0xed37,	// (0x0009727a) list_single_spcha_pane

0xaa49,	// (0x00092f8c) list_highlight_pane_cp06

0xcc1c,	// (0x0009515f) list_single_spcha_pane_t1

0xdf1e,	// (0x00096461) popup_call2_audio_out_window_g4_ParamLimits

0xdf1e,	// (0x00096461) popup_call2_audio_out_window_g4

0x25ac,	// (0x0008aaef) main_imed2_pane

0x5089,	// (0x0008d5cc) popup_imed_adjust2_window

0x509c,	// (0x0008d5df) popup_imed_trans_window_ParamLimits

0x509c,	// (0x0008d5df) popup_imed_trans_window

0xe719,	// (0x00096c5c) popup_blid_sat_info2_window_t1

0xe727,	// (0x00096c6a) popup_blid_sat_info2_window_t2

0x000a,

0xf5ed,	// (0x00097b30) popup_blid_sat_info2_window_t

0x5e99,	// (0x0008e3dc) aid_size_cell_colour_35

0x5eb3,	// (0x0008e3f6) aid_size_cell_colour_112

0x5eca,	// (0x0008e40d) aid_size_cell_effect

0xc090,	// (0x000945d3) bg_tb_trans_pane_cp02

0xcd9b,	// (0x000952de) heading_imed_pane

0x5ee4,	// (0x0008e427) listscroll_imed_pane

0xed49,	// (0x0009728c) heading_imed_pane_g1

0xed51,	// (0x00097294) heading_imed_pane_t1

0xed5f,	// (0x000972a2) grid_imed_colour_35_pane_ParamLimits

0xed5f,	// (0x000972a2) grid_imed_colour_35_pane

0x5ef0,	// (0x0008e433) grid_imed_effect_pane

0xed77,	// (0x000972ba) list_imed_aspect_pane

0x5f00,	// (0x0008e443) scroll_pane_cp027_ParamLimits

0x5f00,	// (0x0008e443) scroll_pane_cp027

0x5f0c,	// (0x0008e44f) cell_imed_effect_pane_ParamLimits

0x5f0c,	// (0x0008e44f) cell_imed_effect_pane

0xed7f,	// (0x000972c2) cell_imed_colour_pane_ParamLimits

0xed7f,	// (0x000972c2) cell_imed_colour_pane

0xedde,	// (0x00097321) cell_imed_colour_pane_g1_ParamLimits

0xedde,	// (0x00097321) cell_imed_colour_pane_g1

0xedef,	// (0x00097332) hgihlgiht_grid_pane_cp016_ParamLimits

0xedef,	// (0x00097332) hgihlgiht_grid_pane_cp016

0x5f24,	// (0x0008e467) cell_imed_effect_pane_g1

0x5f2c,	// (0x0008e46f) grid_highlight_pane_cp017

0xee00,	// (0x00097343) list_imed_single_pane_ParamLimits

0xee00,	// (0x00097343) list_imed_single_pane

0xaa49,	// (0x00092f8c) list_highlight_pane_cp07

0xee15,	// (0x00097358) list_imed_aspect_pane_comp1_t1

0xd338,	// (0x0009587b) bg_tb_trans_pane_cp05

0xee37,	// (0x0009737a) popup_imed_adjust2_window_g1

0xee5e,	// (0x000973a1) popup_imed_adjust2_window_t1

0xee76,	// (0x000973b9) slider_imed_adjust_pane

0xee8a,	// (0x000973cd) slider_imed_adjust_pane_g1

0xee9a,	// (0x000973dd) slider_imed_adjust_pane_g2

0xeeaa,	// (0x000973ed) slider_imed_adjust_pane_g3

0xeebb,	// (0x000973fe) slider_imed_adjust_pane_g4

0x0003,

0xf731,	// (0x00097c74) slider_imed_adjust_pane_g

0x5f35,	// (0x0008e478) aid_size_cell_clipart2

0x5f41,	// (0x0008e484) grid_imed_clipart_pane

0xd228,	// (0x0009576b) scroll_pane_cp031

0x5f4b,	// (0x0008e48e) cell_imed_clipart_pane_ParamLimits

0x5f4b,	// (0x0008e48e) cell_imed_clipart_pane

0x5f6e,	// (0x0008e4b1) cell_imed_clipart_pane_g1

0xaa49,	// (0x00092f8c) grid_highlight_pane_cp014

0x5ca0,	// (0x0008e1e3) main_clock2_pane_g1_ParamLimits

0x5ca0,	// (0x0008e1e3) main_clock2_pane_g1

0x5d8b,	// (0x0008e2ce) aid_call2_pane_cp10

0x5d9d,	// (0x0008e2e0) aid_call_pane_cp10

0xcf27,	// (0x0009546a) popup_clock_analogue_window_cp10_g1

0xcf27,	// (0x0009546a) popup_clock_analogue_window_cp10_g2

0x5daf,	// (0x0008e2f2) popup_clock_analogue_window_cp10_g3

0x5daf,	// (0x0008e2f2) popup_clock_analogue_window_cp10_g4

0xcf27,	// (0x0009546a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71f,	// (0x00097c62) popup_clock_analogue_window_cp10_g

0x5dc5,	// (0x0008e308) popup_clock_analogue_window_cp10_t1

0x5df6,	// (0x0008e339) clock_digital_number_pane_cp10_ParamLimits

0x5df6,	// (0x0008e339) clock_digital_number_pane_cp10

0x5e10,	// (0x0008e353) clock_digital_number_pane_cp11_ParamLimits

0x5e10,	// (0x0008e353) clock_digital_number_pane_cp11

0x5e2a,	// (0x0008e36d) clock_digital_number_pane_cp12_ParamLimits

0x5e2a,	// (0x0008e36d) clock_digital_number_pane_cp12

0x5e44,	// (0x0008e387) clock_digital_number_pane_cp13_ParamLimits

0x5e44,	// (0x0008e387) clock_digital_number_pane_cp13

0x5e5e,	// (0x0008e3a1) clock_digital_separator_pane_cp10_ParamLimits

0x5e5e,	// (0x0008e3a1) clock_digital_separator_pane_cp10

0x5e78,	// (0x0008e3bb) popup_clock_digital_window_cp02_t1_ParamLimits

0x5e78,	// (0x0008e3bb) popup_clock_digital_window_cp02_t1

0xc405,	// (0x00094948) clock_digital_number_pane_cp10_g1

0xc405,	// (0x00094948) clock_digital_number_pane_cp10_g2

0x0001,

0xf73a,	// (0x00097c7d) clock_digital_number_pane_cp10_g

0xc405,	// (0x00094948) clock_digital_separator_pane_cp10_g1

0xc405,	// (0x00094948) clock_digital_separator_pane_g2_cp10

0xd0b4,	// (0x000955f7) navi_pane_vded_g4

0xd0bd,	// (0x00095600) navi_pane_vded_g5

0xd0c6,	// (0x00095609) navi_pane_vded_t1

0x25ac,	// (0x0008aaef) main_vded_pane

0x5f77,	// (0x0008e4ba) main_vded_pane_g1

0x5f83,	// (0x0008e4c6) main_vded_pane_g2

0x5f8d,	// (0x0008e4d0) main_vded_pane_g3

0x0002,

0xf73f,	// (0x00097c82) main_vded_pane_g

0x5f97,	// (0x0008e4da) main_vded_pane_t1

0x5fa5,	// (0x0008e4e8) main_vded_pane_t2

0x0001,

0xf746,	// (0x00097c89) main_vded_pane_t

0x5fb3,	// (0x0008e4f6) vded_slider_pane

0x5fbd,	// (0x0008e500) vded_video_pane

0xeecc,	// (0x0009740f) vded_video_pane_g1

0x5fc7,	// (0x0008e50a) vded_video_pane_g2

0xc4c6,	// (0x00094a09) vded_video_pane_g3

0x0002,

0xf74b,	// (0x00097c8e) vded_video_pane_g

0xeed6,	// (0x00097419) vded_slider_pane_g1

0xe644,	// (0x00096b87) vded_slider_pane_g2

0xeedf,	// (0x00097422) vded_slider_pane_g3

0xeee8,	// (0x0009742b) vded_slider_pane_g4

0xeef1,	// (0x00097434) vded_slider_pane_g5

0x0004,

0xf752,	// (0x00097c95) vded_slider_pane_g

0x5b7a,	// (0x0008e0bd) mup3_rocker_pane_ParamLimits

0x5b7a,	// (0x0008e0bd) mup3_rocker_pane

0x5fd0,	// (0x0008e513) mup3_control_keys_pane_g1

0x5fd8,	// (0x0008e51b) mup3_control_keys_pane_g2

0x5fe0,	// (0x0008e523) mup3_control_keys_pane_g3

0x5fe8,	// (0x0008e52b) mup3_control_keys_pane_g4

0x0003,

0xf75d,	// (0x00097ca0) mup3_control_keys_pane_g

0x2560,	// (0x0008aaa3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2560,	// (0x0008aaa3) popup_toolbar2_fixed_window_cp01

0x5b94,	// (0x0008e0d7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5b94,	// (0x0008e0d7) popup_toolbar2_fixed_window_cp02

0xd8a7,	// (0x00095dea) popup_call2_audio_second_window_t4_ParamLimits

0xd8a7,	// (0x00095dea) popup_call2_audio_second_window_t4

0xdde3,	// (0x00096326) popup_call2_audio_first_window_t6_ParamLimits

0xdde3,	// (0x00096326) popup_call2_audio_first_window_t6

0xe021,	// (0x00096564) popup_call2_audio_out_window_t6_ParamLimits

0xe021,	// (0x00096564) popup_call2_audio_out_window_t6

0x25ac,	// (0x0008aaef) main_vitu_pane

0xc47a,	// (0x000949bd) aid_size_cell_itu_ParamLimits

0xc47a,	// (0x000949bd) aid_size_cell_itu

0xc47a,	// (0x000949bd) bg_popup_window_pane_cp08_ParamLimits

0xc47a,	// (0x000949bd) bg_popup_window_pane_cp08

0xc47a,	// (0x000949bd) field_vitu_entry_pane_ParamLimits

0xc47a,	// (0x000949bd) field_vitu_entry_pane

0xc47a,	// (0x000949bd) grid_vitu_function_pane_ParamLimits

0xc47a,	// (0x000949bd) grid_vitu_function_pane

0xc47a,	// (0x000949bd) grid_vitu_itu_pane_ParamLimits

0xc47a,	// (0x000949bd) grid_vitu_itu_pane

0xc47a,	// (0x000949bd) cell_vitu_itu_pane_ParamLimits

0xc47a,	// (0x000949bd) cell_vitu_itu_pane

0xc47a,	// (0x000949bd) cell_vitu_function_pane_ParamLimits

0xc47a,	// (0x000949bd) cell_vitu_function_pane

0xc090,	// (0x000945d3) bg_popup_sub_pane_cp08_ParamLimits

0xc090,	// (0x000945d3) bg_popup_sub_pane_cp08

0xc4d0,	// (0x00094a13) field_vitu_entry_pane_t1_ParamLimits

0xc4d0,	// (0x00094a13) field_vitu_entry_pane_t1

0xedc1,	// (0x00097304) field_vitu_entry_pane_t2_ParamLimits

0xedc1,	// (0x00097304) field_vitu_entry_pane_t2

0x0001,

0xf766,	// (0x00097ca9) field_vitu_entry_pane_t_ParamLimits

0xf766,	// (0x00097ca9) field_vitu_entry_pane_t

0xe3d4,	// (0x00096917) bg_button_pane_cp05_ParamLimits

0xe3d4,	// (0x00096917) bg_button_pane_cp05

0xeefa,	// (0x0009743d) cell_vitu_itu_pane_g1

0xd3f2,	// (0x00095935) cell_vitu_itu_pane_t1_ParamLimits

0xd3f2,	// (0x00095935) cell_vitu_itu_pane_t1

0xd3f2,	// (0x00095935) cell_vitu_itu_pane_t2_ParamLimits

0xd3f2,	// (0x00095935) cell_vitu_itu_pane_t2

0x0002,

0xf76b,	// (0x00097cae) cell_vitu_itu_pane_t_ParamLimits

0xf76b,	// (0x00097cae) cell_vitu_itu_pane_t

0xaa49,	// (0x00092f8c) bg_button_pane_cp07

0xc4c6,	// (0x00094a09) cell_vitu_function_pane_g1

0x26e5,	// (0x0008ac28) main_calc_pane_g1

0x231f,	// (0x0008a862) aid_visual_content_pane

0x25ac,	// (0x0008aaef) main_vradio_pane

0xc496,	// (0x000949d9) main_vradio_pane_g1_ParamLimits

0xc496,	// (0x000949d9) main_vradio_pane_g1

0xc496,	// (0x000949d9) main_vradio_pane_g2_ParamLimits

0xc496,	// (0x000949d9) main_vradio_pane_g2

0x0001,

0xf502,	// (0x00097a45) main_vradio_pane_g_ParamLimits

0xf502,	// (0x00097a45) main_vradio_pane_g

0xc4e4,	// (0x00094a27) main_vradio_pane_t1_ParamLimits

0xc4e4,	// (0x00094a27) main_vradio_pane_t1

0xc4e4,	// (0x00094a27) main_vradio_pane_t2_ParamLimits

0xc4e4,	// (0x00094a27) main_vradio_pane_t2

0xc4e4,	// (0x00094a27) main_vradio_pane_t3_ParamLimits

0xc4e4,	// (0x00094a27) main_vradio_pane_t3

0x0002,

0xf772,	// (0x00097cb5) main_vradio_pane_t_ParamLimits

0xf772,	// (0x00097cb5) main_vradio_pane_t

0xc47a,	// (0x000949bd) vradio_rocker_control_pane_ParamLimits

0xc47a,	// (0x000949bd) vradio_rocker_control_pane

0xc47a,	// (0x000949bd) vradio_station_info_pane_ParamLimits

0xc47a,	// (0x000949bd) vradio_station_info_pane

0xc090,	// (0x000945d3) vradio_frequency_info_pane_ParamLimits

0xc090,	// (0x000945d3) vradio_frequency_info_pane

0xc4c6,	// (0x00094a09) vradio_station_info_pane_g1

0xd3f2,	// (0x00095935) vradio_station_info_pane_t1_ParamLimits

0xd3f2,	// (0x00095935) vradio_station_info_pane_t1

0xc4e4,	// (0x00094a27) vradio_station_info_pane_t2_ParamLimits

0xc4e4,	// (0x00094a27) vradio_station_info_pane_t2

0x0001,

0xf779,	// (0x00097cbc) vradio_station_info_pane_t_ParamLimits

0xf779,	// (0x00097cbc) vradio_station_info_pane_t

0xaa49,	// (0x00092f8c) vradio_tuning_pane

0x5ff8,	// (0x0008e53b) vradio_rocker_control_pane_g1

0xef16,	// (0x00097459) vradio_rocker_control_pane_g2

0x6000,	// (0x0008e543) vradio_rocker_control_pane_g3

0x6008,	// (0x0008e54b) vradio_rocker_control_pane_g4

0x6010,	// (0x0008e553) vradio_rocker_control_pane_g5

0x0004,

0xf77e,	// (0x00097cc1) vradio_rocker_control_pane_g

0xc4c6,	// (0x00094a09) vradio_frequency_info_pane_g1

0xc4d0,	// (0x00094a13) vradio_frequency_info_pane_t1_ParamLimits

0xc4d0,	// (0x00094a13) vradio_frequency_info_pane_t1

0x6018,	// (0x0008e55b) vradio_tuning_pane_g1

0x6025,	// (0x0008e568) vradio_tuning_pane_t1

0x2368,	// (0x0008a8ab) area_side_right_pane_ParamLimits

0x2368,	// (0x0008a8ab) area_side_right_pane

0xe459,	// (0x0009699c) status_small_pane_g1

0xe461,	// (0x000969a4) status_small_pane_g2

0xe46a,	// (0x000969ad) status_small_pane_g3

0xe473,	// (0x000969b6) status_small_pane_g4

0x0003,

0xf54f,	// (0x00097a92) status_small_pane_g

0xe47c,	// (0x000969bf) status_small_pane_t1

0x25ac,	// (0x0008aaef) main_video3_pane

0xaa49,	// (0x00092f8c) cams_zoom_vslider_pane

0xef1e,	// (0x00097461) image3_wide_pane_ParamLimits

0xef1e,	// (0x00097461) image3_wide_pane

0xaa49,	// (0x00092f8c) image3_wide_small_pane

0xef38,	// (0x0009747b) main_video3_pane_g1_ParamLimits

0xef38,	// (0x0009747b) main_video3_pane_g1

0xef38,	// (0x0009747b) main_video3_pane_g2_ParamLimits

0xef38,	// (0x0009747b) main_video3_pane_g2

0x0001,

0xf789,	// (0x00097ccc) main_video3_pane_g_ParamLimits

0xf789,	// (0x00097ccc) main_video3_pane_g

0xef56,	// (0x00097499) main_video3_pane_t1_ParamLimits

0xef56,	// (0x00097499) main_video3_pane_t1

0xef56,	// (0x00097499) main_video3_pane_t2_ParamLimits

0xef56,	// (0x00097499) main_video3_pane_t2

0xef56,	// (0x00097499) main_video3_pane_t3_ParamLimits

0xef56,	// (0x00097499) main_video3_pane_t3

0x0002,

0xf78e,	// (0x00097cd1) main_video3_pane_t_ParamLimits

0xf78e,	// (0x00097cd1) main_video3_pane_t

0xc4c6,	// (0x00094a09) cams_zoom_vslider_pane_g1

0xc4c6,	// (0x00094a09) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x000975f2) cams_zoom_vslider_pane_g

0xaa49,	// (0x00092f8c) small_slider_vertical_pane

0xc4c6,	// (0x00094a09) small_slider_vertical_pane_g1

0xc4c6,	// (0x00094a09) small_slider_vertical_pane_g2

0xef7d,	// (0x000974c0) small_slider_vertical_pane_g3

0x0002,

0xf795,	// (0x00097cd8) small_slider_vertical_pane_g

0x25ac,	// (0x0008aaef) main_hwr_training_pane

0xef86,	// (0x000974c9) hwr_training_instruct_pane_ParamLimits

0xef86,	// (0x000974c9) hwr_training_instruct_pane

0x6034,	// (0x0008e577) hwr_training_navi_pane_ParamLimits

0x6034,	// (0x0008e577) hwr_training_navi_pane

0x604e,	// (0x0008e591) hwr_training_write_pane_ParamLimits

0x604e,	// (0x0008e591) hwr_training_write_pane

0xaa49,	// (0x00092f8c) bg_frame_shadow_pane

0xefbd,	// (0x00097500) hwr_training_write_pane_g1

0xefc5,	// (0x00097508) hwr_training_write_pane_g2

0xefcd,	// (0x00097510) hwr_training_write_pane_g3

0xefd5,	// (0x00097518) hwr_training_write_pane_g4

0xefdd,	// (0x00097520) hwr_training_write_pane_g5

0xefe5,	// (0x00097528) hwr_training_write_pane_g6

0xefed,	// (0x00097530) hwr_training_write_pane_g7

0x0006,

0xf79c,	// (0x00097cdf) hwr_training_write_pane_g

0x6086,	// (0x0008e5c9) hwr_training_navi_pane_g1_ParamLimits

0x6086,	// (0x0008e5c9) hwr_training_navi_pane_g1

0x6098,	// (0x0008e5db) hwr_training_navi_pane_g2_ParamLimits

0x6098,	// (0x0008e5db) hwr_training_navi_pane_g2

0x60aa,	// (0x0008e5ed) hwr_training_navi_pane_g3_ParamLimits

0x60aa,	// (0x0008e5ed) hwr_training_navi_pane_g3

0x60ba,	// (0x0008e5fd) hwr_training_navi_pane_g4_ParamLimits

0x60ba,	// (0x0008e5fd) hwr_training_navi_pane_g4

0x0004,

0xf7ab,	// (0x00097cee) hwr_training_navi_pane_g_ParamLimits

0xf7ab,	// (0x00097cee) hwr_training_navi_pane_g

0x60d4,	// (0x0008e617) hwr_training_navi_pane_t1

0x60e2,	// (0x0008e625) list_single_hwr_training_instruct_pane_ParamLimits

0x60e2,	// (0x0008e625) list_single_hwr_training_instruct_pane

0xeff5,	// (0x00097538) list_single_hwr_training_instruct_pane_t1

0xe81a,	// (0x00096d5d) bg_frame_shadow_pane_g1

0xf004,	// (0x00097547) bg_frame_shadow_pane_g2

0xf00c,	// (0x0009754f) bg_frame_shadow_pane_g3

0xf014,	// (0x00097557) bg_frame_shadow_pane_g4

0xf01c,	// (0x0009755f) bg_frame_shadow_pane_g5

0xf024,	// (0x00097567) bg_frame_shadow_pane_g6

0xf02c,	// (0x0009756f) bg_frame_shadow_pane_g7

0xc5dc,	// (0x00094b1f) bg_frame_shadow_pane_g8

0x0007,

0xf7b6,	// (0x00097cf9) bg_frame_shadow_pane_g

0x25ac,	// (0x0008aaef) main_video_tele_dialer_pane

0x610b,	// (0x0008e64e) aid_size_cell_video_keypad_ParamLimits

0x610b,	// (0x0008e64e) aid_size_cell_video_keypad

0x611b,	// (0x0008e65e) grid_video_dialer_keypad_pane_ParamLimits

0x611b,	// (0x0008e65e) grid_video_dialer_keypad_pane

0x614f,	// (0x0008e692) video_down_pane_cp_ParamLimits

0x614f,	// (0x0008e692) video_down_pane_cp

0x6179,	// (0x0008e6bc) cell_video_dialer_keypad_pane_ParamLimits

0x6179,	// (0x0008e6bc) cell_video_dialer_keypad_pane

0xf034,	// (0x00097577) bg_button_pane_cp08_ParamLimits

0xf034,	// (0x00097577) bg_button_pane_cp08

0x618e,	// (0x0008e6d1) cell_video_dialer_keypad_pane_g1_ParamLimits

0x618e,	// (0x0008e6d1) cell_video_dialer_keypad_pane_g1

0x5b6e,	// (0x0008e0b1) mup3_rocker2_pane_ParamLimits

0x5b6e,	// (0x0008e0b1) mup3_rocker2_pane

0xc4c6,	// (0x00094a09) mup3_rocker2_pane_g1

0x4ffd,	// (0x0008d540) main_dialer2_pane

0x25ac,	// (0x0008aaef) main_mp4_pane

0x61e6,	// (0x0008e729) main_mp4_pane_g1_ParamLimits

0x61e6,	// (0x0008e729) main_mp4_pane_g1

0x6208,	// (0x0008e74b) main_mp4_pane_g2_ParamLimits

0x6208,	// (0x0008e74b) main_mp4_pane_g2

0x6226,	// (0x0008e769) main_mp4_pane_g3_ParamLimits

0x6226,	// (0x0008e769) main_mp4_pane_g3

0x625f,	// (0x0008e7a2) main_mp4_pane_g4_ParamLimits

0x625f,	// (0x0008e7a2) main_mp4_pane_g4

0x6287,	// (0x0008e7ca) main_mp4_pane_g5_ParamLimits

0x6287,	// (0x0008e7ca) main_mp4_pane_g5

0x0007,

0xf7d6,	// (0x00097d19) main_mp4_pane_g_ParamLimits

0xf7d6,	// (0x00097d19) main_mp4_pane_g

0x62ef,	// (0x0008e832) main_mp4_pane_t1_ParamLimits

0x62ef,	// (0x0008e832) main_mp4_pane_t1

0x6351,	// (0x0008e894) main_mp4_pane_t2_ParamLimits

0x6351,	// (0x0008e894) main_mp4_pane_t2

0x63b5,	// (0x0008e8f8) main_mp4_pane_t3_ParamLimits

0x63b5,	// (0x0008e8f8) main_mp4_pane_t3

0x6413,	// (0x0008e956) main_mp4_pane_t4_ParamLimits

0x6413,	// (0x0008e956) main_mp4_pane_t4

0x0003,

0xf7e7,	// (0x00097d2a) main_mp4_pane_t_ParamLimits

0xf7e7,	// (0x00097d2a) main_mp4_pane_t

0x6471,	// (0x0008e9b4) mp4_progress_pane_ParamLimits

0x6471,	// (0x0008e9b4) mp4_progress_pane

0x64a5,	// (0x0008e9e8) mp4_rocker_pane_ParamLimits

0x64a5,	// (0x0008e9e8) mp4_rocker_pane

0x08f7,	// (0x00088e3a) mp4_progress_pane_t1

0x0919,	// (0x00088e5c) mp4_progress_pane_t2

0x0001,

0xf7f0,	// (0x00097d33) mp4_progress_pane_t

0x093b,	// (0x00088e7e) mup_progress_pane_cp04

0x1250,	// (0x00089793) mp4_rocker_pane_g1

0x2592,	// (0x0008aad5) aid_cell_size_keypad2_ParamLimits

0x2592,	// (0x0008aad5) aid_cell_size_keypad2

0x2592,	// (0x0008aad5) dialer2_ne_pane_ParamLimits

0x2592,	// (0x0008aad5) dialer2_ne_pane

0x2592,	// (0x0008aad5) grid_dialer2_keypad_pane_ParamLimits

0x2592,	// (0x0008aad5) grid_dialer2_keypad_pane

0xe622,	// (0x00096b65) bg_popup_call_pane_cp07_ParamLimits

0xe622,	// (0x00096b65) bg_popup_call_pane_cp07

0x64b9,	// (0x0008e9fc) dialer2_ne_pane_t1_ParamLimits

0x64b9,	// (0x0008e9fc) dialer2_ne_pane_t1

0x64e0,	// (0x0008ea23) cell_dialer2_keypad_pane_ParamLimits

0x64e0,	// (0x0008ea23) cell_dialer2_keypad_pane

0xe3d4,	// (0x00096917) bg_button_pane_pane_cp04_ParamLimits

0xe3d4,	// (0x00096917) bg_button_pane_pane_cp04

0xc488,	// (0x000949cb) cell_dialer2_keypad_pane_g1_ParamLimits

0xc488,	// (0x000949cb) cell_dialer2_keypad_pane_g1

0x2fbc,	// (0x0008b4ff) aid_placing_vt_set_content_ParamLimits

0x2fbc,	// (0x0008b4ff) aid_placing_vt_set_content

0x2fe8,	// (0x0008b52b) aid_placing_vt_set_title_ParamLimits

0x2fe8,	// (0x0008b52b) aid_placing_vt_set_title

0x25ac,	// (0x0008aaef) main_image3_pane

0x6529,	// (0x0008ea6c) area_side_right_pane_cp01_ParamLimits

0x6529,	// (0x0008ea6c) area_side_right_pane_cp01

0x6556,	// (0x0008ea99) main_image3_pane_g1_ParamLimits

0x6556,	// (0x0008ea99) main_image3_pane_g1

0x6564,	// (0x0008eaa7) main_image3_pane_g2_ParamLimits

0x6564,	// (0x0008eaa7) main_image3_pane_g2

0x657d,	// (0x0008eac0) main_image3_pane_g3_ParamLimits

0x657d,	// (0x0008eac0) main_image3_pane_g3

0x6596,	// (0x0008ead9) main_image3_pane_g4_ParamLimits

0x6596,	// (0x0008ead9) main_image3_pane_g4

0x0003,

0xf7ff,	// (0x00097d42) main_image3_pane_g_ParamLimits

0xf7ff,	// (0x00097d42) main_image3_pane_g

0x65af,	// (0x0008eaf2) main_image3_pane_t1_ParamLimits

0x65af,	// (0x0008eaf2) main_image3_pane_t1

0x65d4,	// (0x0008eb17) main_image3_pane_t2_ParamLimits

0x65d4,	// (0x0008eb17) main_image3_pane_t2

0x65f3,	// (0x0008eb36) main_image3_pane_t3_ParamLimits

0x65f3,	// (0x0008eb36) main_image3_pane_t3

0x0003,

0xf808,	// (0x00097d4b) main_image3_pane_t_ParamLimits

0xf808,	// (0x00097d4b) main_image3_pane_t

0xc47a,	// (0x000949bd) grid_sctrl_middle_pane_cp01_ParamLimits

0xc47a,	// (0x000949bd) grid_sctrl_middle_pane_cp01

0x6654,	// (0x0008eb97) cell_sctrl_middle_pane_cp01_ParamLimits

0x6654,	// (0x0008eb97) cell_sctrl_middle_pane_cp01

0x6665,	// (0x0008eba8) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6665,	// (0x0008eba8) cell_sctrl_middle_pane_cp01_g1

0x25ac,	// (0x0008aaef) main_call4_pane

0x6672,	// (0x0008ebb5) aid_size_button_call4_ParamLimits

0x6672,	// (0x0008ebb5) aid_size_button_call4

0x66a8,	// (0x0008ebeb) call4_windows_pane_ParamLimits

0x66a8,	// (0x0008ebeb) call4_windows_pane

0x66bd,	// (0x0008ec00) grid_call4_button_pane_ParamLimits

0x66bd,	// (0x0008ec00) grid_call4_button_pane

0x66eb,	// (0x0008ec2e) call4_windows_conf_pane

0x6700,	// (0x0008ec43) popup_call4_audio_first_window_ParamLimits

0x6700,	// (0x0008ec43) popup_call4_audio_first_window

0x6750,	// (0x0008ec93) popup_call4_audio_second_window_ParamLimits

0x6750,	// (0x0008ec93) popup_call4_audio_second_window

0x6769,	// (0x0008ecac) popup_call4_audio_wait_window_ParamLimits

0x6769,	// (0x0008ecac) popup_call4_audio_wait_window

0x6777,	// (0x0008ecba) cell_call4_button_pane_ParamLimits

0x6777,	// (0x0008ecba) cell_call4_button_pane

0x679a,	// (0x0008ecdd) bg_button_pane_cp09_ParamLimits

0x679a,	// (0x0008ecdd) bg_button_pane_cp09

0x67a6,	// (0x0008ece9) cell_call4_button_pane_g1_ParamLimits

0x67a6,	// (0x0008ece9) cell_call4_button_pane_g1

0x67b3,	// (0x0008ecf6) cell_call4_button_pane_t1_ParamLimits

0x67b3,	// (0x0008ecf6) cell_call4_button_pane_t1

0x09c8,	// (0x00088f0b) popup_call4_audio_conf_window_ParamLimits

0x09c8,	// (0x00088f0b) popup_call4_audio_conf_window

0x5ba1,	// (0x0008e0e4) mup3_progress_pane_t1_ParamLimits

0x5bc0,	// (0x0008e103) mup3_progress_pane_t2_ParamLimits

0xebf8,	// (0x0009713b) mup3_progress_pane_t3_ParamLimits

0xf6e7,	// (0x00097c2a) mup3_progress_pane_t_ParamLimits

0xec15,	// (0x00097158) mup_progress_pane_cp03_ParamLimits

0x5ff0,	// (0x0008e533) mup3_control_keys_pane_g4_copy1

0x64a5,	// (0x0008e9e8) mp4_rocker2_pane_ParamLimits

0x64a5,	// (0x0008e9e8) mp4_rocker2_pane

0x67f7,	// (0x0008ed3a) mp4_rocker2_pane_g1

0x67f7,	// (0x0008ed3a) mp4_rocker2_pane_g2

0x67f7,	// (0x0008ed3a) mp4_rocker2_pane_g3

0x67f7,	// (0x0008ed3a) mp4_rocker2_pane_g4

0x67f7,	// (0x0008ed3a) mp4_rocker2_pane_g5

0x0004,

0xf811,	// (0x00097d54) mp4_rocker2_pane_g

0x25ac,	// (0x0008aaef) main_camera4_pane

0x25ac,	// (0x0008aaef) main_video4_pane

0x612b,	// (0x0008e66e) main_video_tele_dialer_pane_t1_ParamLimits

0x612b,	// (0x0008e66e) main_video_tele_dialer_pane_t1

0x613d,	// (0x0008e680) main_video_tele_dialer_pane_t2_ParamLimits

0x613d,	// (0x0008e680) main_video_tele_dialer_pane_t2

0x0001,

0xf7c7,	// (0x00097d0a) main_video_tele_dialer_pane_t_ParamLimits

0xf7c7,	// (0x00097d0a) main_video_tele_dialer_pane_t

0x6817,	// (0x0008ed5a) cam4_autofocus_pane_ParamLimits

0x6817,	// (0x0008ed5a) cam4_autofocus_pane

0x6831,	// (0x0008ed74) cam4_image_uncrop_pane_ParamLimits

0x6831,	// (0x0008ed74) cam4_image_uncrop_pane

0x6848,	// (0x0008ed8b) cam4_indicators_pane_ParamLimits

0x6848,	// (0x0008ed8b) cam4_indicators_pane

0x6864,	// (0x0008eda7) main_camera4_pane_g1_ParamLimits

0x6864,	// (0x0008eda7) main_camera4_pane_g1

0x6870,	// (0x0008edb3) main_camera4_pane_g2_ParamLimits

0x6870,	// (0x0008edb3) main_camera4_pane_g2

0x6870,	// (0x0008edb3) main_camera4_pane_g3_ParamLimits

0x6870,	// (0x0008edb3) main_camera4_pane_g3

0x687c,	// (0x0008edbf) main_camera4_pane_g4_ParamLimits

0x687c,	// (0x0008edbf) main_camera4_pane_g4

0x6888,	// (0x0008edcb) main_camera4_pane_g5_ParamLimits

0x6888,	// (0x0008edcb) main_camera4_pane_g5

0x0005,

0xf81c,	// (0x00097d5f) main_camera4_pane_g_ParamLimits

0xf81c,	// (0x00097d5f) main_camera4_pane_g

0x68a2,	// (0x0008ede5) main_camera4_pane_t1_ParamLimits

0x68a2,	// (0x0008ede5) main_camera4_pane_t1

0xaa73,	// (0x00092fb6) bg_tb_trans_pane_cp06

0x68f2,	// (0x0008ee35) cam4_indicators_pane_g1

0x6903,	// (0x0008ee46) cam4_indicators_pane_g2

0x0002,

0xf837,	// (0x00097d7a) cam4_indicators_pane_g

0x691b,	// (0x0008ee5e) cam4_indicators_pane_t1

0x6945,	// (0x0008ee88) main_video4_pane_g1_ParamLimits

0x6945,	// (0x0008ee88) main_video4_pane_g1

0x6951,	// (0x0008ee94) main_video4_pane_g2_ParamLimits

0x6951,	// (0x0008ee94) main_video4_pane_g2

0x695d,	// (0x0008eea0) main_video4_pane_g3_ParamLimits

0x695d,	// (0x0008eea0) main_video4_pane_g3

0x6969,	// (0x0008eeac) main_video4_pane_g4_ParamLimits

0x6969,	// (0x0008eeac) main_video4_pane_g4

0x0004,

0xf83e,	// (0x00097d81) main_video4_pane_g_ParamLimits

0xf83e,	// (0x00097d81) main_video4_pane_g

0x6989,	// (0x0008eecc) vid4_indicators_pane_ParamLimits

0x6989,	// (0x0008eecc) vid4_indicators_pane

0x69a8,	// (0x0008eeeb) video4_image_uncrop_cif_pane_ParamLimits

0x69a8,	// (0x0008eeeb) video4_image_uncrop_cif_pane

0x69b7,	// (0x0008eefa) video4_image_uncrop_nhd_pane_ParamLimits

0x69b7,	// (0x0008eefa) video4_image_uncrop_nhd_pane

0x6831,	// (0x0008ed74) video4_image_uncrop_vga_pane_ParamLimits

0x6831,	// (0x0008ed74) video4_image_uncrop_vga_pane

0x4fef,	// (0x0008d532) bg_tb_trans_pane_cp07

0x69cc,	// (0x0008ef0f) vid4_indicators_pane_g1

0x69e0,	// (0x0008ef23) vid4_indicators_pane_g2

0x69f4,	// (0x0008ef37) vid4_indicators_pane_g3

0x0004,

0xf849,	// (0x00097d8c) vid4_indicators_pane_g

0x6a21,	// (0x0008ef64) vid4_indicators_pane_t1

0x6a38,	// (0x0008ef7b) cam4_autofocus_pane_g1

0x6a40,	// (0x0008ef83) cam4_autofocus_pane_g2

0x6a48,	// (0x0008ef8b) cam4_autofocus_pane_g3

0x0002,

0xf854,	// (0x00097d97) cam4_autofocus_pane_g

0x6a50,	// (0x0008ef93) cam4_autofocus_pane_g3_copy1

0x615d,	// (0x0008e6a0) video_down_pane_cp_t1

0x616b,	// (0x0008e6ae) video_down_pane_cp_t2

0x0001,

0xf7cc,	// (0x00097d0f) video_down_pane_cp_t

0x2592,	// (0x0008aad5) popup_vitu2_window_ParamLimits

0x2592,	// (0x0008aad5) popup_vitu2_window

0x6a58,	// (0x0008ef9b) aid_size_cell2_itu2_ParamLimits

0x6a58,	// (0x0008ef9b) aid_size_cell2_itu2

0x6a7a,	// (0x0008efbd) aid_size_cell_itu2_ParamLimits

0x6a7a,	// (0x0008efbd) aid_size_cell_itu2

0x6abe,	// (0x0008f001) bg_popup_window_pane_cp09_ParamLimits

0x6abe,	// (0x0008f001) bg_popup_window_pane_cp09

0x6acc,	// (0x0008f00f) field_vitu2_entry_pane_ParamLimits

0x6acc,	// (0x0008f00f) field_vitu2_entry_pane

0x6aec,	// (0x0008f02f) grid_vitu2_function_pane_ParamLimits

0x6aec,	// (0x0008f02f) grid_vitu2_function_pane

0x6b2c,	// (0x0008f06f) grid_vitu2_itu_pane_ParamLimits

0x6b2c,	// (0x0008f06f) grid_vitu2_itu_pane

0x6ba0,	// (0x0008f0e3) cell_vitu2_itu_pane_ParamLimits

0x6ba0,	// (0x0008f0e3) cell_vitu2_itu_pane

0x6bb9,	// (0x0008f0fc) cell_vitu2_function_pane_ParamLimits

0x6bb9,	// (0x0008f0fc) cell_vitu2_function_pane

0x0ac7,	// (0x0008900a) bg_popup_call_pane_cp08_ParamLimits

0x0ac7,	// (0x0008900a) bg_popup_call_pane_cp08

0x0ade,	// (0x00089021) field_vitu2_entry_pane_g1

0x0aea,	// (0x0008902d) field_vitu2_entry_pane_g2

0x0002,

0xf85b,	// (0x00097d9e) field_vitu2_entry_pane_g

0x6bfa,	// (0x0008f13d) field_vitu2_entry_pane_t1_ParamLimits

0x6bfa,	// (0x0008f13d) field_vitu2_entry_pane_t1

0x009d,	// (0x000885e0) field_vitu2_entry_pane_t2_ParamLimits

0x009d,	// (0x000885e0) field_vitu2_entry_pane_t2

0x0001,

0xf862,	// (0x00097da5) field_vitu2_entry_pane_t_ParamLimits

0xf862,	// (0x00097da5) field_vitu2_entry_pane_t

0x5327,	// (0x0008d86a) bg_button_pane_cp010_ParamLimits

0x5327,	// (0x0008d86a) bg_button_pane_cp010

0x6c31,	// (0x0008f174) cell_vitu2_itu_pane_g1

0x6c57,	// (0x0008f19a) cell_vitu2_itu_pane_t1_ParamLimits

0x6c57,	// (0x0008f19a) cell_vitu2_itu_pane_t1

0x2203,	// (0x0008a746) cell_vitu2_itu_pane_t2_ParamLimits

0x2203,	// (0x0008a746) cell_vitu2_itu_pane_t2

0x0002,

0xf86c,	// (0x00097daf) cell_vitu2_itu_pane_t_ParamLimits

0xf86c,	// (0x00097daf) cell_vitu2_itu_pane_t

0x4fef,	// (0x0008d532) bg_button_pane_cp011

0x6ca3,	// (0x0008f1e6) cell_vitu2_function_pane_g1

0x25ac,	// (0x0008aaef) main_myfav_hc_pane

0x6635,	// (0x0008eb78) popup_image3_note_pane_ParamLimits

0x6635,	// (0x0008eb78) popup_image3_note_pane

0x6643,	// (0x0008eb86) popup_image3_tool_bar_pane_ParamLimits

0x6643,	// (0x0008eb86) popup_image3_tool_bar_pane

0x2279,	// (0x0008a7bc) cell_vitu2_itu_pane_t3_ParamLimits

0x2279,	// (0x0008a7bc) cell_vitu2_itu_pane_t3

0xaa49,	// (0x00092f8c) bg_popup_trans_pane

0x0afe,	// (0x00089041) grid_image3_tool_bar_pane

0x0b08,	// (0x0008904b) bg_popup_trans_pane_g1

0xc906,	// (0x00094e49) bg_popup_trans_pane_g2

0x0b10,	// (0x00089053) bg_popup_trans_pane_g3

0x0b18,	// (0x0008905b) bg_popup_trans_pane_g4

0x0b20,	// (0x00089063) bg_popup_trans_pane_g5

0x0b28,	// (0x0008906b) bg_popup_trans_pane_g6

0x0b30,	// (0x00089073) bg_popup_trans_pane_g7

0x0b38,	// (0x0008907b) bg_popup_trans_pane_g8

0xc8e6,	// (0x00094e29) bg_popup_trans_pane_g9

0x0008,

0xf873,	// (0x00097db6) bg_popup_trans_pane_g

0x0b40,	// (0x00089083) cell_image3_tool_bar_pane_ParamLimits

0x0b40,	// (0x00089083) cell_image3_tool_bar_pane

0xc4c6,	// (0x00094a09) cell_image3_tool_bar_pane_g1

0xaa49,	// (0x00092f8c) bg_popup_trans_pane_cp1

0x0b54,	// (0x00089097) popup_image3_note_pane_t1

0x0b62,	// (0x000890a5) popup_image3_note_pane_t2

0x0b70,	// (0x000890b3) popup_image3_note_pane_t3

0x0002,

0xf886,	// (0x00097dc9) popup_image3_note_pane_t

0x0b7e,	// (0x000890c1) popup_image3_note_pane_t3_copy1

0x6cb7,	// (0x0008f1fa) bg_myfav_hc_instruction_pane_ParamLimits

0x6cb7,	// (0x0008f1fa) bg_myfav_hc_instruction_pane

0x6ccf,	// (0x0008f212) cell_myfav_contact_pane_ParamLimits

0x6ccf,	// (0x0008f212) cell_myfav_contact_pane

0x6ce9,	// (0x0008f22c) cell_myfav_contact_pane_cp1_ParamLimits

0x6ce9,	// (0x0008f22c) cell_myfav_contact_pane_cp1

0x6d01,	// (0x0008f244) cell_myfav_contact_pane_cp2_ParamLimits

0x6d01,	// (0x0008f244) cell_myfav_contact_pane_cp2

0x6d19,	// (0x0008f25c) cell_myfav_contact_pane_cp3_ParamLimits

0x6d19,	// (0x0008f25c) cell_myfav_contact_pane_cp3

0x6d30,	// (0x0008f273) cell_myfav_contact_pane_cp4_ParamLimits

0x6d30,	// (0x0008f273) cell_myfav_contact_pane_cp4

0x6d46,	// (0x0008f289) cell_myfav_contact_pane_cp5_ParamLimits

0x6d46,	// (0x0008f289) cell_myfav_contact_pane_cp5

0x6d5a,	// (0x0008f29d) cell_myfav_contact_pane_cp6_ParamLimits

0x6d5a,	// (0x0008f29d) cell_myfav_contact_pane_cp6

0x6d6e,	// (0x0008f2b1) cell_myfav_contact_pane_cp7_ParamLimits

0x6d6e,	// (0x0008f2b1) cell_myfav_contact_pane_cp7

0x0b8c,	// (0x000890cf) listscroll_gen_pane_cp05

0x6d86,	// (0x0008f2c9) main_myfav_hc_pane_g1_ParamLimits

0x6d86,	// (0x0008f2c9) main_myfav_hc_pane_g1

0x6d9c,	// (0x0008f2df) main_myfav_hc_pane_g2_ParamLimits

0x6d9c,	// (0x0008f2df) main_myfav_hc_pane_g2

0x0002,

0xf88d,	// (0x00097dd0) main_myfav_hc_pane_g_ParamLimits

0xf88d,	// (0x00097dd0) main_myfav_hc_pane_g

0x6dcc,	// (0x0008f30f) main_myfav_hc_pane_t1_ParamLimits

0x6dcc,	// (0x0008f30f) main_myfav_hc_pane_t1

0x0b95,	// (0x000890d8) main_myfav_hc_pane_t2_ParamLimits

0x0b95,	// (0x000890d8) main_myfav_hc_pane_t2

0x0ba7,	// (0x000890ea) main_myfav_hc_pane_t3_ParamLimits

0x0ba7,	// (0x000890ea) main_myfav_hc_pane_t3

0x6de3,	// (0x0008f326) main_myfav_hc_pane_t4_ParamLimits

0x6de3,	// (0x0008f326) main_myfav_hc_pane_t4

0x0004,

0xf894,	// (0x00097dd7) main_myfav_hc_pane_t_ParamLimits

0xf894,	// (0x00097dd7) main_myfav_hc_pane_t

0xc4c6,	// (0x00094a09) bg_myfav_hc_instruction_pane_g1

0x0bb9,	// (0x000890fc) cell_myfav_contact_pane_g1_ParamLimits

0x0bb9,	// (0x000890fc) cell_myfav_contact_pane_g1

0x0bb9,	// (0x000890fc) cell_myfav_contact_pane_g2_ParamLimits

0x0bb9,	// (0x000890fc) cell_myfav_contact_pane_g2

0x0bc5,	// (0x00089108) cell_myfav_contact_pane_g3_ParamLimits

0x0bc5,	// (0x00089108) cell_myfav_contact_pane_g3

0xc496,	// (0x000949d9) cell_myfav_contact_pane_g4_ParamLimits

0xc496,	// (0x000949d9) cell_myfav_contact_pane_g4

0x0bd2,	// (0x00089115) cell_myfav_contact_pane_g5_ParamLimits

0x0bd2,	// (0x00089115) cell_myfav_contact_pane_g5

0x0004,

0xf89f,	// (0x00097de2) cell_myfav_contact_pane_g_ParamLimits

0xf89f,	// (0x00097de2) cell_myfav_contact_pane_g

0x6db4,	// (0x0008f2f7) main_myfav_hc_pane_g3_ParamLimits

0x6db4,	// (0x0008f2f7) main_myfav_hc_pane_g3

0x249c,	// (0x0008a9df) popup_adpt_find_window

0x6e0d,	// (0x0008f350) afind_page_pane_ParamLimits

0x6e0d,	// (0x0008f350) afind_page_pane

0x6e1a,	// (0x0008f35d) aid_size_cell_afind_ParamLimits

0x6e1a,	// (0x0008f35d) aid_size_cell_afind

0x6e34,	// (0x0008f377) bg_popup_sub_pane_cp09_ParamLimits

0x6e34,	// (0x0008f377) bg_popup_sub_pane_cp09

0x6e45,	// (0x0008f388) find_pane_cp01_ParamLimits

0x6e45,	// (0x0008f388) find_pane_cp01

0x0bde,	// (0x00089121) grid_afind_control_pane_ParamLimits

0x0bde,	// (0x00089121) grid_afind_control_pane

0x6e58,	// (0x0008f39b) grid_afind_pane_ParamLimits

0x6e58,	// (0x0008f39b) grid_afind_pane

0x6e74,	// (0x0008f3b7) cell_afind_pane_ParamLimits

0x6e74,	// (0x0008f3b7) cell_afind_pane

0xc4c6,	// (0x00094a09) afind_page_pane_g1

0x6ebc,	// (0x0008f3ff) afind_page_pane_g2

0x6ec4,	// (0x0008f407) afind_page_pane_g3

0x0002,

0xf8aa,	// (0x00097ded) afind_page_pane_g

0x6ecc,	// (0x0008f40f) afind_page_pane_t1

0x0c04,	// (0x00089147) cell_afind_grid_control_pane_ParamLimits

0x0c04,	// (0x00089147) cell_afind_grid_control_pane

0x0c13,	// (0x00089156) bg_button_pane_cp69_ParamLimits

0x0c13,	// (0x00089156) bg_button_pane_cp69

0x6eda,	// (0x0008f41d) cell_afind_pane_g1_ParamLimits

0x6eda,	// (0x0008f41d) cell_afind_pane_g1

0x6ee7,	// (0x0008f42a) cell_afind_pane_t1_ParamLimits

0x6ee7,	// (0x0008f42a) cell_afind_pane_t1

0x0c1f,	// (0x00089162) bg_button_pane_cp72

0x0c27,	// (0x0008916a) cell_afind_grid_control_pane_g1

0x4b98,	// (0x0008d0db) aid_image_placing_area_ParamLimits

0x4b98,	// (0x0008d0db) aid_image_placing_area

0xc488,	// (0x000949cb) field_vitu_entry_pane_g1_ParamLimits

0xc488,	// (0x000949cb) field_vitu_entry_pane_g1

0xc488,	// (0x000949cb) field_vitu_entry_pane_g2_ParamLimits

0xc488,	// (0x000949cb) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x000976ff) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x000976ff) field_vitu_entry_pane_g

0xeefa,	// (0x0009743d) cell_vitu_itu_pane_g1_ParamLimits

0xedc1,	// (0x00097304) cell_vitu_itu_pane_t3_ParamLimits

0xedc1,	// (0x00097304) cell_vitu_itu_pane_t3

0x08f7,	// (0x00088e3a) mp4_progress_pane_t1_ParamLimits

0x0919,	// (0x00088e5c) mp4_progress_pane_t2_ParamLimits

0xf7f0,	// (0x00097d33) mp4_progress_pane_t_ParamLimits

0x093b,	// (0x00088e7e) mup_progress_pane_cp04_ParamLimits

0x6df7,	// (0x0008f33a) main_myfav_hc_pane_t5_ParamLimits

0x6df7,	// (0x0008f33a) main_myfav_hc_pane_t5

0x21fb,	// (0x0008a73e) aid_zoom_text_primary

0x249c,	// (0x0008a9df) popup_adpt_find_window_ParamLimits

0x4fef,	// (0x0008d532) main_cam_set_pane

0x6856,	// (0x0008ed99) cam4_zoom_pane_ParamLimits

0x6856,	// (0x0008ed99) cam4_zoom_pane

0x6ef9,	// (0x0008f43c) main_cam_set_pane_g1_ParamLimits

0x6ef9,	// (0x0008f43c) main_cam_set_pane_g1

0x6f07,	// (0x0008f44a) main_cam_set_pane_g2_ParamLimits

0x6f07,	// (0x0008f44a) main_cam_set_pane_g2

0x0001,

0xf8b1,	// (0x00097df4) main_cam_set_pane_g_ParamLimits

0xf8b1,	// (0x00097df4) main_cam_set_pane_g

0x6f13,	// (0x0008f456) main_cam_set_pane_t1_ParamLimits

0x6f13,	// (0x0008f456) main_cam_set_pane_t1

0x6f2f,	// (0x0008f472) main_cset_listscroll_pane_ParamLimits

0x6f2f,	// (0x0008f472) main_cset_listscroll_pane

0x6f61,	// (0x0008f4a4) main_cset_slider_pane_ParamLimits

0x6f61,	// (0x0008f4a4) main_cset_slider_pane

0x0c38,	// (0x0008917b) main_cset_list_pane_ParamLimits

0x0c38,	// (0x0008917b) main_cset_list_pane

0x0c48,	// (0x0008918b) scroll_pane_cp028

0x6f80,	// (0x0008f4c3) aid_area_touch_slider

0x6f9c,	// (0x0008f4df) cset_slider_pane

0x6fbf,	// (0x0008f502) main_cset_slider_pane_g1

0x6fd4,	// (0x0008f517) main_cset_slider_pane_g2

0x0011,

0xf8b6,	// (0x00097df9) main_cset_slider_pane_g

0x0c81,	// (0x000891c4) main_cset_slider_pane_t1

0x709a,	// (0x0008f5dd) main_cset_slider_pane_t2

0x70b4,	// (0x0008f5f7) main_cset_slider_pane_t3

0x70ce,	// (0x0008f611) main_cset_slider_pane_t4

0x70ec,	// (0x0008f62f) main_cset_slider_pane_t5

0x710a,	// (0x0008f64d) main_cset_slider_pane_t6

0x7121,	// (0x0008f664) main_cset_slider_pane_t7

0x000e,

0xf8db,	// (0x00097e1e) main_cset_slider_pane_t

0x722f,	// (0x0008f772) cset_list_set_pane_ParamLimits

0x722f,	// (0x0008f772) cset_list_set_pane

0x0e1a,	// (0x0008935d) aid_position_infowindow_above

0x0e22,	// (0x00089365) aid_position_infowindow_below

0x7248,	// (0x0008f78b) cset_list_set_pane_g1_ParamLimits

0x7248,	// (0x0008f78b) cset_list_set_pane_g1

0x7254,	// (0x0008f797) cset_list_set_pane_g3_ParamLimits

0x7254,	// (0x0008f797) cset_list_set_pane_g3

0x0001,

0xf8fa,	// (0x00097e3d) cset_list_set_pane_g_ParamLimits

0xf8fa,	// (0x00097e3d) cset_list_set_pane_g

0x7263,	// (0x0008f7a6) cset_list_set_pane_t1_ParamLimits

0x7263,	// (0x0008f7a6) cset_list_set_pane_t1

0xc090,	// (0x000945d3) list_highlight_pane_cp021_ParamLimits

0xc090,	// (0x000945d3) list_highlight_pane_cp021

0xd205,	// (0x00095748) cset_slider_pane_g1

0xd217,	// (0x0009575a) cset_slider_pane_g2

0xd20e,	// (0x00095751) cset_slider_pane_g3

0x0002,

0xf8ff,	// (0x00097e42) cset_slider_pane_g

0x7278,	// (0x0008f7bb) aid_area_touch_cam4_zoom

0x7280,	// (0x0008f7c3) cam4_zoom_cont_pane

0x7288,	// (0x0008f7cb) cam4_zoom_pane_g1

0x7290,	// (0x0008f7d3) cam4_zoom_pane_g2

0x7298,	// (0x0008f7db) cam4_zoom_pane_g3

0x0002,

0xf906,	// (0x00097e49) cam4_zoom_pane_g

0x72a0,	// (0x0008f7e3) cam4_zoom_cont_pane_g1

0x72a9,	// (0x0008f7ec) cam4_zoom_cont_pane_g2

0x72b2,	// (0x0008f7f5) cam4_zoom_cont_pane_g3

0x0002,

0xf90d,	// (0x00097e50) cam4_zoom_cont_pane_g

0x668c,	// (0x0008ebcf) call4_image_pane_ParamLimits

0x668c,	// (0x0008ebcf) call4_image_pane

0x66eb,	// (0x0008ec2e) call4_windows_conf_pane_ParamLimits

0x672e,	// (0x0008ec71) popup_call4_audio_in_window_ParamLimits

0x672e,	// (0x0008ec71) popup_call4_audio_in_window

0xaa49,	// (0x00092f8c) bg_popup_call2_act_pane_cp02

0x09c0,	// (0x00088f03) call4_list_conf_pane

0xc4c6,	// (0x00094a09) call4_image_pane_g1

0xc4c6,	// (0x00094a09) call4_image_pane_g2

0x0001,

0xf0af,	// (0x000975f2) call4_image_pane_g

0x0e45,	// (0x00089388) list_single_graphic_popup_conf4_pane_ParamLimits

0x0e45,	// (0x00089388) list_single_graphic_popup_conf4_pane

0xaa49,	// (0x00092f8c) list_highlight_pane_cp022

0x0e58,	// (0x0008939b) list_single_graphic_popup_conf4_pane_g1

0xce24,	// (0x00095367) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf914,	// (0x00097e57) list_single_graphic_popup_conf4_pane_g

0x0e60,	// (0x000893a3) list_single_graphic_popup_conf4_pane_t1

0x314c,	// (0x0008b68f) popup_vtel_slider_window_ParamLimits

0x314c,	// (0x0008b68f) popup_vtel_slider_window

0x094e,	// (0x00088e91) dialer2_ne_pane_t2_ParamLimits

0x094e,	// (0x00088e91) dialer2_ne_pane_t2

0x0001,

0xf7f5,	// (0x00097d38) dialer2_ne_pane_t_ParamLimits

0xf7f5,	// (0x00097d38) dialer2_ne_pane_t

0xc090,	// (0x000945d3) bg_popup_sub_pane_cp010_ParamLimits

0xc090,	// (0x000945d3) bg_popup_sub_pane_cp010

0x72bb,	// (0x0008f7fe) popup_vtel_slider_window_g1_ParamLimits

0x72bb,	// (0x0008f7fe) popup_vtel_slider_window_g1

0x72c7,	// (0x0008f80a) popup_vtel_slider_window_g2_ParamLimits

0x72c7,	// (0x0008f80a) popup_vtel_slider_window_g2

0x0003,

0xf919,	// (0x00097e5c) popup_vtel_slider_window_g_ParamLimits

0xf919,	// (0x00097e5c) popup_vtel_slider_window_g

0x730f,	// (0x0008f852) vtel_slider_pane_ParamLimits

0x730f,	// (0x0008f852) vtel_slider_pane

0x731e,	// (0x0008f861) vtel_slider_pane_g1_ParamLimits

0x731e,	// (0x0008f861) vtel_slider_pane_g1

0x732b,	// (0x0008f86e) vtel_slider_pane_g2_ParamLimits

0x732b,	// (0x0008f86e) vtel_slider_pane_g2

0x7338,	// (0x0008f87b) vtel_slider_pane_g3_ParamLimits

0x7338,	// (0x0008f87b) vtel_slider_pane_g3

0x731e,	// (0x0008f861) vtel_slider_pane_g4_ParamLimits

0x731e,	// (0x0008f861) vtel_slider_pane_g4

0x7345,	// (0x0008f888) vtel_slider_pane_g5_ParamLimits

0x7345,	// (0x0008f888) vtel_slider_pane_g5

0x0004,

0xf922,	// (0x00097e65) vtel_slider_pane_g_ParamLimits

0xf922,	// (0x00097e65) vtel_slider_pane_g

0x4fef,	// (0x0008d532) main_gallery2_pane

0x6aa0,	// (0x0008efe3) aid_size_row_itut2_dropdow_list_ParamLimits

0x6aa0,	// (0x0008efe3) aid_size_row_itut2_dropdow_list

0x6b0a,	// (0x0008f04d) grid_vitu2_function_top_pane_ParamLimits

0x6b0a,	// (0x0008f04d) grid_vitu2_function_top_pane

0x6b5e,	// (0x0008f0a1) popup_vitu2_dropdown_list_window_ParamLimits

0x6b5e,	// (0x0008f0a1) popup_vitu2_dropdown_list_window

0x6b80,	// (0x0008f0c3) popup_vitu2_match_list_window

0x7352,	// (0x0008f895) cell_vitu2_function_top_pane_ParamLimits

0x7352,	// (0x0008f895) cell_vitu2_function_top_pane

0x736c,	// (0x0008f8af) cell_vitu2_function_top_pane_cp01_ParamLimits

0x736c,	// (0x0008f8af) cell_vitu2_function_top_pane_cp01

0x7388,	// (0x0008f8cb) cell_vitu2_function_top_wide_pane_ParamLimits

0x7388,	// (0x0008f8cb) cell_vitu2_function_top_wide_pane

0x4fef,	// (0x0008d532) bg_button_pane_cp012

0x73a6,	// (0x0008f8e9) cell_vitu2_function_top_pane_g1

0x73ba,	// (0x0008f8fd) bg_button_pane_cp013_ParamLimits

0x73ba,	// (0x0008f8fd) bg_button_pane_cp013

0x73d6,	// (0x0008f919) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x73d6,	// (0x0008f919) cell_vitu2_function_top_wide_pane_g1

0x2592,	// (0x0008aad5) bg_popup_sub_pane_cp20

0x73ee,	// (0x0008f931) list_vitu2_match_list_pane

0x0b08,	// (0x0008904b) bg_popup_sub_pane_cp20_g1

0x0b10,	// (0x00089053) bg_popup_sub_pane_cp20_g2

0xc906,	// (0x00094e49) bg_popup_sub_pane_cp20_g3

0x0b18,	// (0x0008905b) bg_popup_sub_pane_cp20_g4

0xc8e6,	// (0x00094e29) bg_popup_sub_pane_cp20_g5

0x0e76,	// (0x000893b9) bg_popup_sub_pane_cp20_g6

0x0b28,	// (0x0008906b) bg_popup_sub_pane_cp20_g7

0x0b30,	// (0x00089073) bg_popup_sub_pane_cp20_g8

0x0b38,	// (0x0008907b) bg_popup_sub_pane_cp20_g9

0x0008,

0xf92d,	// (0x00097e70) bg_popup_sub_pane_cp20_g

0x7406,	// (0x0008f949) list_vitu2_match_list_item_pane_ParamLimits

0x7406,	// (0x0008f949) list_vitu2_match_list_item_pane

0x7418,	// (0x0008f95b) list_vitu2_match_list_item_pane_t1

0x25ac,	// (0x0008aaef) bg_popup_sub_pane_cp21

0xc6ed,	// (0x00094c30) grid_vitu2_dropdown_list_pane

0x7426,	// (0x0008f969) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7426,	// (0x0008f969) cell_vitu2_dropdown_list_char_pane

0x7448,	// (0x0008f98b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7448,	// (0x0008f98b) cell_vitu2_dropdown_list_ctrl_pane

0x0e90,	// (0x000893d3) cell_vitu2_dropdown_list_char_pane_g1

0x0e87,	// (0x000893ca) cell_vitu2_dropdown_list_char_pane_g2

0x0e7e,	// (0x000893c1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf940,	// (0x00097e83) cell_vitu2_dropdown_list_char_pane_g

0x7470,	// (0x0008f9b3) cell_vitu2_dropdown_list_char_pane_t1

0x747e,	// (0x0008f9c1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x747e,	// (0x0008f9c1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x748e,	// (0x0008f9d1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x748e,	// (0x0008f9d1) cell_vitu2_dropdown_list_ctrl_pane_g2

0x749f,	// (0x0008f9e2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x749f,	// (0x0008f9e2) cell_vitu2_dropdown_list_ctrl_pane_g3

0x74af,	// (0x0008f9f2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x74af,	// (0x0008f9f2) cell_vitu2_dropdown_list_ctrl_pane_g4

0xaa73,	// (0x00092fb6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xaa73,	// (0x00092fb6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf947,	// (0x00097e8a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf947,	// (0x00097e8a) cell_vitu2_dropdown_list_ctrl_pane_g

0x74c8,	// (0x0008fa0b) aid_size_cell_gallery2_ParamLimits

0x74c8,	// (0x0008fa0b) aid_size_cell_gallery2

0x74e2,	// (0x0008fa25) grid_gallery2_pane_ParamLimits

0x74e2,	// (0x0008fa25) grid_gallery2_pane

0x74f9,	// (0x0008fa3c) scroll_pane_cp029_ParamLimits

0x74f9,	// (0x0008fa3c) scroll_pane_cp029

0x7509,	// (0x0008fa4c) cell_gallery2_pane_ParamLimits

0x7509,	// (0x0008fa4c) cell_gallery2_pane

0x0e99,	// (0x000893dc) cell_gallery2_pane_g2

0x755e,	// (0x0008faa1) cell_gallery2_pane_g3

0x0ea1,	// (0x000893e4) cell_gallery2_pane_g4

0x0ea9,	// (0x000893ec) cell_gallery2_pane_g5

0xc6ed,	// (0x00094c30) grid_highlight_pane_cp10

0x6b80,	// (0x0008f0c3) popup_vitu2_match_list_window_ParamLimits

0x6b92,	// (0x0008f0d5) popup_vitu2_query_window_ParamLimits

0x6b92,	// (0x0008f0d5) popup_vitu2_query_window

0x25ac,	// (0x0008aaef) bg_vitu2_candi_button_pane

0x0e90,	// (0x000893d3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0e87,	// (0x000893ca) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0e7e,	// (0x000893c1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7566,	// (0x0008faa9) bg_button_pane_cp015

0x757b,	// (0x0008fabe) bg_button_pane_cp016

0x7587,	// (0x0008faca) bg_button_pane_cp017

0xd338,	// (0x0009587b) bg_popup_sub_pane_cp22

0x0eb1,	// (0x000893f4) popup_vitu2_query_window_g1

0x75c7,	// (0x0008fb0a) popup_vitu2_query_window_g2

0x0002,

0xf952,	// (0x00097e95) popup_vitu2_query_window_g

0x75eb,	// (0x0008fb2e) popup_vitu2_query_window_t1_ParamLimits

0x75eb,	// (0x0008fb2e) popup_vitu2_query_window_t1

0x761e,	// (0x0008fb61) popup_vitu2_query_window_t2_ParamLimits

0x761e,	// (0x0008fb61) popup_vitu2_query_window_t2

0x7630,	// (0x0008fb73) popup_vitu2_query_window_t3_ParamLimits

0x7630,	// (0x0008fb73) popup_vitu2_query_window_t3

0x7658,	// (0x0008fb9b) popup_vitu2_query_window_t4_ParamLimits

0x7658,	// (0x0008fb9b) popup_vitu2_query_window_t4

0x766c,	// (0x0008fbaf) popup_vitu2_query_window_t5_ParamLimits

0x766c,	// (0x0008fbaf) popup_vitu2_query_window_t5

0x0006,

0xf959,	// (0x00097e9c) popup_vitu2_query_window_t_ParamLimits

0xf959,	// (0x00097e9c) popup_vitu2_query_window_t

0x0c30,	// (0x00089173) main_cset_text_pane

0x6f80,	// (0x0008f4c3) aid_area_touch_slider_ParamLimits

0x6f9c,	// (0x0008f4df) cset_slider_pane_ParamLimits

0x6fbf,	// (0x0008f502) main_cset_slider_pane_g1_ParamLimits

0x6fd4,	// (0x0008f517) main_cset_slider_pane_g2_ParamLimits

0x0c51,	// (0x00089194) main_cset_slider_pane_g3_ParamLimits

0x0c51,	// (0x00089194) main_cset_slider_pane_g3

0x6fe9,	// (0x0008f52c) main_cset_slider_pane_g4_ParamLimits

0x6fe9,	// (0x0008f52c) main_cset_slider_pane_g4

0x6ff8,	// (0x0008f53b) main_cset_slider_pane_g5_ParamLimits

0x6ff8,	// (0x0008f53b) main_cset_slider_pane_g5

0x7006,	// (0x0008f549) main_cset_slider_pane_g6_ParamLimits

0x7006,	// (0x0008f549) main_cset_slider_pane_g6

0xf8b6,	// (0x00097df9) main_cset_slider_pane_g_ParamLimits

0x0c81,	// (0x000891c4) main_cset_slider_pane_t1_ParamLimits

0x709a,	// (0x0008f5dd) main_cset_slider_pane_t2_ParamLimits

0x70b4,	// (0x0008f5f7) main_cset_slider_pane_t3_ParamLimits

0x70ce,	// (0x0008f611) main_cset_slider_pane_t4_ParamLimits

0x70ec,	// (0x0008f62f) main_cset_slider_pane_t5_ParamLimits

0x710a,	// (0x0008f64d) main_cset_slider_pane_t6_ParamLimits

0x7121,	// (0x0008f664) main_cset_slider_pane_t7_ParamLimits

0x714f,	// (0x0008f692) main_cset_slider_pane_t8_ParamLimits

0x714f,	// (0x0008f692) main_cset_slider_pane_t8

0x7177,	// (0x0008f6ba) main_cset_slider_pane_t9_ParamLimits

0x7177,	// (0x0008f6ba) main_cset_slider_pane_t9

0x719f,	// (0x0008f6e2) main_cset_slider_pane_t10_ParamLimits

0x719f,	// (0x0008f6e2) main_cset_slider_pane_t10

0x71c7,	// (0x0008f70a) main_cset_slider_pane_t11_ParamLimits

0x71c7,	// (0x0008f70a) main_cset_slider_pane_t11

0x71f1,	// (0x0008f734) main_cset_slider_pane_t12_ParamLimits

0x71f1,	// (0x0008f734) main_cset_slider_pane_t12

0x7210,	// (0x0008f753) main_cset_slider_pane_t13_ParamLimits

0x7210,	// (0x0008f753) main_cset_slider_pane_t13

0xf8db,	// (0x00097e1e) main_cset_slider_pane_t_ParamLimits

0xaa49,	// (0x00092f8c) bg_popup_sub_pane_cp011

0x0ebd,	// (0x00089400) main_cset_text_pane_g1

0x0ec5,	// (0x00089408) main_cset_text_pane_t1

0x0ed3,	// (0x00089416) main_cset_text_pane_t2

0x0ee1,	// (0x00089424) main_cset_text_pane_t3

0x0eef,	// (0x00089432) main_cset_text_pane_t4

0x0efd,	// (0x00089440) main_cset_text_pane_t5

0x0f0b,	// (0x0008944e) main_cset_text_pane_t6

0x0f19,	// (0x0008945c) main_cset_text_pane_t7

0x0006,

0xf968,	// (0x00097eab) main_cset_text_pane_t

0x25ac,	// (0x0008aaef) main_cam4_burst_pane

0x25ac,	// (0x0008aaef) main_cam5_pane

0x0bf2,	// (0x00089135) bg_button_pane_cp019

0x0bfb,	// (0x0008913e) bg_button_pane_cp020

0x0c5d,	// (0x000891a0) main_cset_slider_pane_g7_ParamLimits

0x0c5d,	// (0x000891a0) main_cset_slider_pane_g7

0x0c69,	// (0x000891ac) main_cset_slider_pane_g8_ParamLimits

0x0c69,	// (0x000891ac) main_cset_slider_pane_g8

0x701a,	// (0x0008f55d) main_cset_slider_pane_g9_ParamLimits

0x701a,	// (0x0008f55d) main_cset_slider_pane_g9

0x7026,	// (0x0008f569) main_cset_slider_pane_g10_ParamLimits

0x7026,	// (0x0008f569) main_cset_slider_pane_g10

0x7032,	// (0x0008f575) main_cset_slider_pane_g11_ParamLimits

0x7032,	// (0x0008f575) main_cset_slider_pane_g11

0x703e,	// (0x0008f581) main_cset_slider_pane_g12_ParamLimits

0x703e,	// (0x0008f581) main_cset_slider_pane_g12

0x704a,	// (0x0008f58d) main_cset_slider_pane_g13_ParamLimits

0x704a,	// (0x0008f58d) main_cset_slider_pane_g13

0x7058,	// (0x0008f59b) main_cset_slider_pane_g14_ParamLimits

0x7058,	// (0x0008f59b) main_cset_slider_pane_g14

0x7066,	// (0x0008f5a9) main_cset_slider_pane_g15_ParamLimits

0x7066,	// (0x0008f5a9) main_cset_slider_pane_g15

0x0da8,	// (0x000892eb) main_cset_slider_pane_t14_ParamLimits

0x0da8,	// (0x000892eb) main_cset_slider_pane_t14

0x0de1,	// (0x00089324) main_cset_slider_pane_t15_ParamLimits

0x0de1,	// (0x00089324) main_cset_slider_pane_t15

0x76d6,	// (0x0008fc19) aid_cam4_burst_size_cell_ParamLimits

0x76d6,	// (0x0008fc19) aid_cam4_burst_size_cell

0x76f2,	// (0x0008fc35) grid_cam4_burst_pane_ParamLimits

0x76f2,	// (0x0008fc35) grid_cam4_burst_pane

0x7722,	// (0x0008fc65) linegrid_cam4_burst_pane_ParamLimits

0x7722,	// (0x0008fc65) linegrid_cam4_burst_pane

0x7742,	// (0x0008fc85) scroll_pane_cp30_ParamLimits

0x7742,	// (0x0008fc85) scroll_pane_cp30

0x774e,	// (0x0008fc91) cell_cam4_burst_pane_ParamLimits

0x774e,	// (0x0008fc91) cell_cam4_burst_pane

0x0f27,	// (0x0008946a) linegrid_cam4_burst_pane_g1_ParamLimits

0x0f27,	// (0x0008946a) linegrid_cam4_burst_pane_g1

0x778a,	// (0x0008fccd) linegrid_cam4_burst_pane_g2_ParamLimits

0x778a,	// (0x0008fccd) linegrid_cam4_burst_pane_g2

0x0f34,	// (0x00089477) linegrid_cam4_burst_pane_g3_ParamLimits

0x0f34,	// (0x00089477) linegrid_cam4_burst_pane_g3

0x0002,

0xf977,	// (0x00097eba) linegrid_cam4_burst_pane_g_ParamLimits

0xf977,	// (0x00097eba) linegrid_cam4_burst_pane_g

0x779b,	// (0x0008fcde) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x779b,	// (0x0008fcde) linegrid_cam4_burst_pane_g3_copy1

0x0f41,	// (0x00089484) linegrid_cam4_burst_pane_g4_ParamLimits

0x0f41,	// (0x00089484) linegrid_cam4_burst_pane_g4

0x77b5,	// (0x0008fcf8) linegrid_cam4_burst_pane_g5_ParamLimits

0x77b5,	// (0x0008fcf8) linegrid_cam4_burst_pane_g5

0x77c6,	// (0x0008fd09) linegrid_cam4_burst_pane_g6_ParamLimits

0x77c6,	// (0x0008fd09) linegrid_cam4_burst_pane_g6

0x0f4e,	// (0x00089491) linegrid_cam4_burst_pane_g7_ParamLimits

0x0f4e,	// (0x00089491) linegrid_cam4_burst_pane_g7

0x77d7,	// (0x0008fd1a) cell_cam4_burst_pane_g1

0x0f67,	// (0x000894aa) main_cam5_pane_t1_ParamLimits

0x0f67,	// (0x000894aa) main_cam5_pane_t1

0x0f79,	// (0x000894bc) main_cam5_pane_t2_ParamLimits

0x0f79,	// (0x000894bc) main_cam5_pane_t2

0x0f8b,	// (0x000894ce) main_cam5_pane_t3_ParamLimits

0x0f8b,	// (0x000894ce) main_cam5_pane_t3

0x0f9d,	// (0x000894e0) main_cam5_pane_t4_ParamLimits

0x0f9d,	// (0x000894e0) main_cam5_pane_t4

0x0fb5,	// (0x000894f8) main_cam5_pane_t5_ParamLimits

0x0fb5,	// (0x000894f8) main_cam5_pane_t5

0x0fc9,	// (0x0008950c) main_cam5_pane_t6_ParamLimits

0x0fc9,	// (0x0008950c) main_cam5_pane_t6

0x0fdd,	// (0x00089520) main_cam5_pane_t7_ParamLimits

0x0fdd,	// (0x00089520) main_cam5_pane_t7

0x0fef,	// (0x00089532) main_cam5_pane_t8_ParamLimits

0x0fef,	// (0x00089532) main_cam5_pane_t8

0x100b,	// (0x0008954e) main_cam5_pane_t9_ParamLimits

0x100b,	// (0x0008954e) main_cam5_pane_t9

0x101d,	// (0x00089560) main_cam5_pane_t10_ParamLimits

0x101d,	// (0x00089560) main_cam5_pane_t10

0x102f,	// (0x00089572) main_cam5_pane_t11_ParamLimits

0x102f,	// (0x00089572) main_cam5_pane_t11

0x1041,	// (0x00089584) main_cam5_pane_t12_ParamLimits

0x1041,	// (0x00089584) main_cam5_pane_t12

0x1056,	// (0x00089599) main_cam5_pane_t13_ParamLimits

0x1056,	// (0x00089599) main_cam5_pane_t13

0x000c,

0xf983,	// (0x00097ec6) main_cam5_pane_t_ParamLimits

0xf983,	// (0x00097ec6) main_cam5_pane_t

0x2551,	// (0x0008aa94) popup_scut_keymap_window_ParamLimits

0x2551,	// (0x0008aa94) popup_scut_keymap_window

0x77ea,	// (0x0008fd2d) aid_size_cell_brow_shortcut

0xc6ed,	// (0x00094c30) bg_popup_window_pane_cp010

0x77f6,	// (0x0008fd39) grid_scut_pane

0x7802,	// (0x0008fd45) cell_scut_pane_ParamLimits

0x7802,	// (0x0008fd45) cell_scut_pane

0x7819,	// (0x0008fd5c) cell_scut_pane_g1

0x1073,	// (0x000895b6) cell_scut_pane_t1

0x1082,	// (0x000895c5) cell_scut_pane_t2

0x7822,	// (0x0008fd65) cell_scut_pane_t3

0x0002,

0xf99e,	// (0x00097ee1) cell_scut_pane_t

0x57ca,	// (0x0008dd0d) main_mup3_pane_g8_ParamLimits

0x57ca,	// (0x0008dd0d) main_mup3_pane_g8

0x6ab0,	// (0x0008eff3) area_vitu2_query_pane_ParamLimits

0x6ab0,	// (0x0008eff3) area_vitu2_query_pane

0x7593,	// (0x0008fad6) input_focus_pane_cp08

0x1091,	// (0x000895d4) area_vitu2_query_pane_g1

0x7830,	// (0x0008fd73) area_vitu2_query_pane_g2

0x0001,

0xf9a5,	// (0x00097ee8) area_vitu2_query_pane_g

0x7841,	// (0x0008fd84) area_vitu2_query_pane_t1_ParamLimits

0x7841,	// (0x0008fd84) area_vitu2_query_pane_t1

0x7855,	// (0x0008fd98) area_vitu2_query_pane_t2_ParamLimits

0x7855,	// (0x0008fd98) area_vitu2_query_pane_t2

0x7869,	// (0x0008fdac) area_vitu2_query_pane_t3_ParamLimits

0x7869,	// (0x0008fdac) area_vitu2_query_pane_t3

0x00ba,	// (0x000885fd) area_vitu2_query_pane_t4_ParamLimits

0x00ba,	// (0x000885fd) area_vitu2_query_pane_t4

0x00e2,	// (0x00088625) area_vitu2_query_pane_t5_ParamLimits

0x00e2,	// (0x00088625) area_vitu2_query_pane_t5

0x010a,	// (0x0008864d) area_vitu2_query_pane_t6_ParamLimits

0x010a,	// (0x0008864d) area_vitu2_query_pane_t6

0x0006,

0xf9aa,	// (0x00097eed) area_vitu2_query_pane_t_ParamLimits

0xf9aa,	// (0x00097eed) area_vitu2_query_pane_t

0x757b,	// (0x0008fabe) bg_button_pane_cp018

0x7891,	// (0x0008fdd4) bg_button_pane_cp021

0x789d,	// (0x0008fde0) bg_button_pane_cp022

0x78c0,	// (0x0008fe03) input_focus_pane_cp09

0xcf33,	// (0x00095476) aid_size_touch_mv_arrow_left

0xcf5e,	// (0x000954a1) aid_size_touch_mv_arrow_right

0x707e,	// (0x0008f5c1) main_cset_slider_pane_g16_ParamLimits

0x707e,	// (0x0008f5c1) main_cset_slider_pane_g16

0x708c,	// (0x0008f5cf) main_cset_slider_pane_g17_ParamLimits

0x708c,	// (0x0008f5cf) main_cset_slider_pane_g17

0x77d7,	// (0x0008fd1a) cell_cam4_burst_pane_g1_ParamLimits

0xaa49,	// (0x00092f8c) compa_mode_pane

0x72d3,	// (0x0008f816) popup_vtel_slider_window_g3_ParamLimits

0x72d3,	// (0x0008f816) popup_vtel_slider_window_g3

0x72e7,	// (0x0008f82a) popup_vtel_slider_window_g4_ParamLimits

0x72e7,	// (0x0008f82a) popup_vtel_slider_window_g4

0x72fb,	// (0x0008f83e) popup_vtel_slider_window_t1_ParamLimits

0x72fb,	// (0x0008f83e) popup_vtel_slider_window_t1

0x25ac,	// (0x0008aaef) main_cl_pane

0x5089,	// (0x0008d5cc) popup_imed_adjust2_window_ParamLimits

0xd338,	// (0x0009587b) bg_tb_trans_pane_cp05_ParamLimits

0xee37,	// (0x0009737a) popup_imed_adjust2_window_g1_ParamLimits

0xee46,	// (0x00097389) popup_imed_adjust2_window_g2_ParamLimits

0xee46,	// (0x00097389) popup_imed_adjust2_window_g2

0xee52,	// (0x00097395) popup_imed_adjust2_window_g3_ParamLimits

0xee52,	// (0x00097395) popup_imed_adjust2_window_g3

0x0002,

0xf72a,	// (0x00097c6d) popup_imed_adjust2_window_g_ParamLimits

0xf72a,	// (0x00097c6d) popup_imed_adjust2_window_g

0xee5e,	// (0x000973a1) popup_imed_adjust2_window_t1_ParamLimits

0xee76,	// (0x000973b9) slider_imed_adjust_pane_ParamLimits

0xee8a,	// (0x000973cd) slider_imed_adjust_pane_g1_ParamLimits

0xee9a,	// (0x000973dd) slider_imed_adjust_pane_g2_ParamLimits

0xeeaa,	// (0x000973ed) slider_imed_adjust_pane_g3_ParamLimits

0xeebb,	// (0x000973fe) slider_imed_adjust_pane_g4_ParamLimits

0xf731,	// (0x00097c74) slider_imed_adjust_pane_g_ParamLimits

0x67ff,	// (0x0008ed42) aid_touch_area_cam4_ParamLimits

0x67ff,	// (0x0008ed42) aid_touch_area_cam4

0x680f,	// (0x0008ed52) battery_pane_cp01

0x6896,	// (0x0008edd9) main_camera4_pane_g6_ParamLimits

0x6896,	// (0x0008edd9) main_camera4_pane_g6

0x68b4,	// (0x0008edf7) main_camera4_pane_t2_ParamLimits

0x68b4,	// (0x0008edf7) main_camera4_pane_t2

0x0001,

0xf829,	// (0x00097d6c) main_camera4_pane_t_ParamLimits

0xf829,	// (0x00097d6c) main_camera4_pane_t

0x6935,	// (0x0008ee78) aid_touch_area_vid4_ParamLimits

0x6935,	// (0x0008ee78) aid_touch_area_vid4

0x6975,	// (0x0008eeb8) main_video4_pane_g5_ParamLimits

0x6975,	// (0x0008eeb8) main_video4_pane_g5

0x6999,	// (0x0008eedc) vid4_progress_pane_ParamLimits

0x6999,	// (0x0008eedc) vid4_progress_pane

0x0c75,	// (0x000891b8) main_cset_slider_pane_g18_ParamLimits

0x0c75,	// (0x000891b8) main_cset_slider_pane_g18

0x0f5b,	// (0x0008949e) cell_cam4_burst_pane_g2_ParamLimits

0x0f5b,	// (0x0008949e) cell_cam4_burst_pane_g2

0x0001,

0xf97e,	// (0x00097ec1) cell_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x00097ec1) cell_cam4_burst_pane_g

0x78d0,	// (0x0008fe13) bg_cl_pane_ParamLimits

0x78d0,	// (0x0008fe13) bg_cl_pane

0x78dc,	// (0x0008fe1f) cl_header_pane_ParamLimits

0x78dc,	// (0x0008fe1f) cl_header_pane

0x78e8,	// (0x0008fe2b) cl_listscroll_pane_ParamLimits

0x78e8,	// (0x0008fe2b) cl_listscroll_pane

0x109d,	// (0x000895e0) bg_cl_pane_g1

0x10a5,	// (0x000895e8) bg_cl_pane_g2

0x10ad,	// (0x000895f0) bg_cl_pane_g3

0x10b5,	// (0x000895f8) bg_cl_pane_g4

0x10bd,	// (0x00089600) bg_cl_pane_g5

0x10c5,	// (0x00089608) bg_cl_pane_g6

0x10cd,	// (0x00089610) bg_cl_pane_g7

0x10d5,	// (0x00089618) bg_cl_pane_g8

0x10dd,	// (0x00089620) bg_cl_pane_g9

0x0008,

0xf9b9,	// (0x00097efc) bg_cl_pane_g

0x78f4,	// (0x0008fe37) aid_height_cl_leading_ParamLimits

0x78f4,	// (0x0008fe37) aid_height_cl_leading

0x7900,	// (0x0008fe43) aid_height_cl_text_ParamLimits

0x7900,	// (0x0008fe43) aid_height_cl_text

0xc47a,	// (0x000949bd) bg_cl_header_pane_ParamLimits

0xc47a,	// (0x000949bd) bg_cl_header_pane

0x7918,	// (0x0008fe5b) cl_header_pane_g1_ParamLimits

0x7918,	// (0x0008fe5b) cl_header_pane_g1

0x7925,	// (0x0008fe68) cl_header_pane_t1_ParamLimits

0x7925,	// (0x0008fe68) cl_header_pane_t1

0x10e5,	// (0x00089628) cl_list_pane

0x0c48,	// (0x0008918b) hc_scroll_pane_cp01

0xc8e6,	// (0x00094e29) bg_cl_header_pane_g1

0x0b08,	// (0x0008904b) bg_cl_header_pane_g2

0xc906,	// (0x00094e49) bg_cl_header_pane_g3

0x0b18,	// (0x0008905b) bg_cl_header_pane_g4

0x0b10,	// (0x00089053) bg_cl_header_pane_g5

0x0e76,	// (0x000893b9) bg_cl_header_pane_g6

0x0b30,	// (0x00089073) bg_cl_header_pane_g7

0x0b38,	// (0x0008907b) bg_cl_header_pane_g8

0x0b28,	// (0x0008906b) bg_cl_header_pane_g9

0x0008,

0xf9cc,	// (0x00097f0f) bg_cl_header_pane_g

0x7937,	// (0x0008fe7a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7937,	// (0x0008fe7a) hc_cl_list_double_graphic_heading_pane

0x794b,	// (0x0008fe8e) hc_cl_list_single_graphic_pane_ParamLimits

0x794b,	// (0x0008fe8e) hc_cl_list_single_graphic_pane

0x7965,	// (0x0008fea8) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7965,	// (0x0008fea8) hc_cl_list_single_graphic_pane_g1

0x7971,	// (0x0008feb4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7971,	// (0x0008feb4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9df,	// (0x00097f22) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9df,	// (0x00097f22) hc_cl_list_single_graphic_pane_g

0x7985,	// (0x0008fec8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7985,	// (0x0008fec8) hc_cl_list_single_graphic_pane_t1

0x7965,	// (0x0008fea8) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7965,	// (0x0008fea8) hc_cl_list_double_graphic_heading_pane_g1

0x799a,	// (0x0008fedd) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x799a,	// (0x0008fedd) hc_cl_list_double_graphic_heading_pane_g2

0x79ae,	// (0x0008fef1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x79ae,	// (0x0008fef1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9e4,	// (0x00097f27) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9e4,	// (0x00097f27) hc_cl_list_double_graphic_heading_pane_g

0x79c2,	// (0x0008ff05) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x79c2,	// (0x0008ff05) hc_cl_list_double_graphic_heading_pane_t1

0x79d7,	// (0x0008ff1a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x79d7,	// (0x0008ff1a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9eb,	// (0x00097f2e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9eb,	// (0x00097f2e) hc_cl_list_double_graphic_heading_pane_t

0x79f4,	// (0x0008ff37) vid4_progress_pane_g1

0x7a04,	// (0x0008ff47) vid4_progress_pane_g2

0x7a14,	// (0x0008ff57) vid4_progress_pane_g3

0x7a26,	// (0x0008ff69) vid4_progress_pane_g4

0x0004,

0xf9f0,	// (0x00097f33) vid4_progress_pane_g

0x7a3e,	// (0x0008ff81) vid4_progress_pane_t1

0x7a54,	// (0x0008ff97) vid4_progress_pane_t2

0x0002,

0xf9fb,	// (0x00097f3e) vid4_progress_pane_t

0x7a7f,	// (0x0008ffc2) wait_bar_pane_cp07

0xe6ce,	// (0x00096c11) blid_firmament_pane_ParamLimits

0xe711,	// (0x00096c54) popup_blid_sat_info2_window_g1

0xe735,	// (0x00096c78) popup_blid_sat_info2_window_t3

0xe743,	// (0x00096c86) popup_blid_sat_info2_window_t4

0xe751,	// (0x00096c94) popup_blid_sat_info2_window_t5

0xe75f,	// (0x00096ca2) popup_blid_sat_info2_window_t6

0xe76f,	// (0x00096cb2) popup_blid_sat_info2_window_t7

0xe77d,	// (0x00096cc0) popup_blid_sat_info2_window_t8

0xe78b,	// (0x00096cce) popup_blid_sat_info2_window_t9

0xe799,	// (0x00096cdc) popup_blid_sat_info2_window_t10

0xe85a,	// (0x00096d9d) aid_firma_cardinal_ParamLimits

0xe86e,	// (0x00096db1) blid_firmament_pane_t1_ParamLimits

0xe885,	// (0x00096dc8) blid_firmament_pane_t2_ParamLimits

0xe89c,	// (0x00096ddf) blid_firmament_pane_t3_ParamLimits

0xe8b3,	// (0x00096df6) blid_firmament_pane_t4_ParamLimits

0xf623,	// (0x00097b66) blid_firmament_pane_t_ParamLimits

0xe8ca,	// (0x00096e0d) blid_sat_info_pane_ParamLimits

0x4fef,	// (0x0008d532) main_cam_set_pane_ParamLimits

0x5e99,	// (0x0008e3dc) aid_size_cell_colour_35_ParamLimits

0x5eb3,	// (0x0008e3f6) aid_size_cell_colour_112_ParamLimits

0x5eca,	// (0x0008e40d) aid_size_cell_effect_ParamLimits

0xc090,	// (0x000945d3) bg_tb_trans_pane_cp02_ParamLimits

0xcd9b,	// (0x000952de) heading_imed_pane_ParamLimits

0x5ee4,	// (0x0008e427) listscroll_imed_pane_ParamLimits

0xdb5f,	// (0x000960a2) popup_call2_audio_first_window_g5_ParamLimits

0xdb5f,	// (0x000960a2) popup_call2_audio_first_window_g5

0x64f7,	// (0x0008ea3a) aid_size_touch_image3_arrow_left_ParamLimits

0x64f7,	// (0x0008ea3a) aid_size_touch_image3_arrow_left

0x650d,	// (0x0008ea50) aid_size_touch_image3_arrow_right_ParamLimits

0x650d,	// (0x0008ea50) aid_size_touch_image3_arrow_right

0x7a69,	// (0x0008ffac) vid4_progress_pane_t3

0x6066,	// (0x0008e5a9) main_hwr_training_symbol_option_pane_ParamLimits

0x6066,	// (0x0008e5a9) main_hwr_training_symbol_option_pane

0xefa8,	// (0x000974eb) popup_hwr_training_preview_window_ParamLimits

0xefa8,	// (0x000974eb) popup_hwr_training_preview_window

0x60c7,	// (0x0008e60a) hwr_training_navi_pane_g5_ParamLimits

0x60c7,	// (0x0008e60a) hwr_training_navi_pane_g5

0x0af6,	// (0x00089039) popup_char_count_window

0x2592,	// (0x0008aad5) bg_popup_sub_pane_cp20_ParamLimits

0x73ee,	// (0x0008f931) list_vitu2_match_list_pane_ParamLimits

0x73fa,	// (0x0008f93d) vitu2_page_scroll_pane_ParamLimits

0x73fa,	// (0x0008f93d) vitu2_page_scroll_pane

0x10f7,	// (0x0008963a) list_single_hwr_training_symbol_option_pane_ParamLimits

0x10f7,	// (0x0008963a) list_single_hwr_training_symbol_option_pane

0x110a,	// (0x0008964d) list_single_hwr_training_symbol_option_pane_g1

0x1112,	// (0x00089655) list_single_hwr_training_symbol_option_pane_t1

0x1120,	// (0x00089663) bg_button_pane_cp023

0x1129,	// (0x0008966c) bg_button_pane_cp024

0x115c,	// (0x0008969f) vitu2_page_scroll_pane_g1

0x1164,	// (0x000896a7) vitu2_page_scroll_pane_g2

0x0001,

0xfa02,	// (0x00097f45) vitu2_page_scroll_pane_g

0x116c,	// (0x000896af) vitu2_page_scroll_pane_t1

0xc5c3,	// (0x00094b06) popup_char_count_window_g1

0x117b,	// (0x000896be) popup_char_count_window_g2

0x08d8,	// (0x00088e1b) popup_char_count_window_g3

0x0002,

0xfa07,	// (0x00097f4a) popup_char_count_window_g

0x1184,	// (0x000896c7) popup_char_count_window_t1

0x25ac,	// (0x0008aaef) main_vded2_pane

0xee23,	// (0x00097366) aid_size_cell_imed_line

0xee2d,	// (0x00097370) grid_imed_line_width_pane

0x6a05,	// (0x0008ef48) vid4_indicators_pane_g4

0x1192,	// (0x000896d5) cell_imed_line_width_pane_ParamLimits

0x1192,	// (0x000896d5) cell_imed_line_width_pane

0x11a6,	// (0x000896e9) cell_imed_line_width_pane_g1

0x11af,	// (0x000896f2) cell_imed_line_width_pane_g2

0x0001,

0xfa0e,	// (0x00097f51) cell_imed_line_width_pane_g

0x7aa4,	// (0x0008ffe7) main_vded2_pane_g1_ParamLimits

0x7aa4,	// (0x0008ffe7) main_vded2_pane_g1

0x7ab1,	// (0x0008fff4) main_vded2_pane_g2_ParamLimits

0x7ab1,	// (0x0008fff4) main_vded2_pane_g2

0x0001,

0xfa13,	// (0x00097f56) main_vded2_pane_g_ParamLimits

0xfa13,	// (0x00097f56) main_vded2_pane_g

0x7abf,	// (0x00090002) vded2_slider_pane_ParamLimits

0x7abf,	// (0x00090002) vded2_slider_pane

0x7acc,	// (0x0009000f) aid_size_touch_vded2_end

0x7ad6,	// (0x00090019) aid_size_touch_vded2_playhead

0x11b7,	// (0x000896fa) aid_size_touch_vded2_start

0x11bf,	// (0x00089702) vded2_slider_bg_pane

0x11c8,	// (0x0008970b) vded2_slider_pane_g1

0x11d1,	// (0x00089714) vded2_slider_pane_g2

0x7ade,	// (0x00090021) vded2_slider_pane_g3

0x0002,

0xfa18,	// (0x00097f5b) vded2_slider_pane_g

0x11d9,	// (0x0008971c) vded2_slider_bg_pane_g1

0x11e2,	// (0x00089725) vded2_slider_bg_pane_g2

0x11eb,	// (0x0008972e) vded2_slider_bg_pane_g3

0x0002,

0xfa1f,	// (0x00097f62) vded2_slider_bg_pane_g

0x4938,	// (0x0008ce7b) aid_postcard_touch_down_pane_ParamLimits

0x4938,	// (0x0008ce7b) aid_postcard_touch_down_pane

0x4948,	// (0x0008ce8b) aid_postcard_touch_up_pane_ParamLimits

0x4948,	// (0x0008ce8b) aid_postcard_touch_up_pane

0x25ac,	// (0x0008aaef) main_blid2_pane

0x5018,	// (0x0008d55b) popup_blid2_search_window

0xaa49,	// (0x00092f8c) blid2_gps_pane

0xaa49,	// (0x00092f8c) blid2_navig_pane

0xaa49,	// (0x00092f8c) blid2_search_pane

0xaa49,	// (0x00092f8c) blid2_tripm_pane

0x7ae7,	// (0x0009002a) blid2_search_pane_g1_ParamLimits

0x7ae7,	// (0x0009002a) blid2_search_pane_g1

0x7af7,	// (0x0009003a) blid2_search_pane_t1_ParamLimits

0x7af7,	// (0x0009003a) blid2_search_pane_t1

0x7b09,	// (0x0009004c) aid_size_cell_blid2_gps_ParamLimits

0x7b09,	// (0x0009004c) aid_size_cell_blid2_gps

0x7b19,	// (0x0009005c) blid2_gps_pane_g1_ParamLimits

0x7b19,	// (0x0009005c) blid2_gps_pane_g1

0x7b25,	// (0x00090068) grid_blid2_satellite_pane_ParamLimits

0x7b25,	// (0x00090068) grid_blid2_satellite_pane

0x7b35,	// (0x00090078) blid2_navig_pane_g1_ParamLimits

0x7b35,	// (0x00090078) blid2_navig_pane_g1

0x7b41,	// (0x00090084) blid2_navig_pane_t1_ParamLimits

0x7b41,	// (0x00090084) blid2_navig_pane_t1

0x7b53,	// (0x00090096) blid2_navig_pane_t2_ParamLimits

0x7b53,	// (0x00090096) blid2_navig_pane_t2

0x0001,

0xfa26,	// (0x00097f69) blid2_navig_pane_t_ParamLimits

0xfa26,	// (0x00097f69) blid2_navig_pane_t

0x7b65,	// (0x000900a8) blid2_navig_ring_pane_ParamLimits

0x7b65,	// (0x000900a8) blid2_navig_ring_pane

0x7b75,	// (0x000900b8) blid2_speed_pane_ParamLimits

0x7b75,	// (0x000900b8) blid2_speed_pane

0x7b81,	// (0x000900c4) blid2_tripm_pane_g1_ParamLimits

0x7b81,	// (0x000900c4) blid2_tripm_pane_g1

0x7b91,	// (0x000900d4) blid2_tripm_pane_g2_ParamLimits

0x7b91,	// (0x000900d4) blid2_tripm_pane_g2

0x7b9d,	// (0x000900e0) blid2_tripm_pane_g3_ParamLimits

0x7b9d,	// (0x000900e0) blid2_tripm_pane_g3

0x7ba9,	// (0x000900ec) blid2_tripm_pane_g4_ParamLimits

0x7ba9,	// (0x000900ec) blid2_tripm_pane_g4

0x7bb5,	// (0x000900f8) blid2_tripm_pane_g5_ParamLimits

0x7bb5,	// (0x000900f8) blid2_tripm_pane_g5

0x0005,

0xfa2b,	// (0x00097f6e) blid2_tripm_pane_g_ParamLimits

0xfa2b,	// (0x00097f6e) blid2_tripm_pane_g

0x7bd1,	// (0x00090114) blid2_tripm_pane_t1_ParamLimits

0x7bd1,	// (0x00090114) blid2_tripm_pane_t1

0x7be5,	// (0x00090128) blid2_tripm_pane_t2_ParamLimits

0x7be5,	// (0x00090128) blid2_tripm_pane_t2

0x7bf7,	// (0x0009013a) blid2_tripm_pane_t3_ParamLimits

0x7bf7,	// (0x0009013a) blid2_tripm_pane_t3

0x0003,

0xfa38,	// (0x00097f7b) blid2_tripm_pane_t_ParamLimits

0xfa38,	// (0x00097f7b) blid2_tripm_pane_t

0x7c29,	// (0x0009016c) cell_blid2_satellite_pane_ParamLimits

0x7c29,	// (0x0009016c) cell_blid2_satellite_pane

0x7c43,	// (0x00090186) cell_blid2_satellite_pane_g1

0x11f4,	// (0x00089737) cell_blid2_satellite_pane_t1

0xc4c6,	// (0x00094a09) blid2_speed_pane_g1

0x1202,	// (0x00089745) blid2_speed_pane_t1

0x1210,	// (0x00089753) blid2_speed_pane_t2

0x0001,

0xfa41,	// (0x00097f84) blid2_speed_pane_t

0xc4c6,	// (0x00094a09) blid2_navig_ring_pane_g1

0x7c4c,	// (0x0009018f) blid2_navig_ring_pane_g2

0x7c54,	// (0x00090197) blid2_navig_ring_pane_g3

0x7c5c,	// (0x0009019f) blid2_navig_ring_pane_g4

0x7c64,	// (0x000901a7) blid2_navig_ring_pane_g5

0x0004,

0xfa46,	// (0x00097f89) blid2_navig_ring_pane_g

0xaa49,	// (0x00092f8c) bg_popup_window_pane_cp011

0x121e,	// (0x00089761) popup_blid2_search_window_g1

0x1226,	// (0x00089769) popup_blid2_search_window_t1

0x1234,	// (0x00089777) popup_blid2_search_window_t2

0x0001,

0xfa51,	// (0x00097f94) popup_blid2_search_window_t

0xc7f5,	// (0x00094d38) main_browser_pane_g1

0xc524,	// (0x00094a67) main_browser_pane_ParamLimits

0x4fef,	// (0x0008d532) bg_button_pane_cp011_ParamLimits

0x6ca3,	// (0x0008f1e6) cell_vitu2_function_pane_g1_ParamLimits

0xd338,	// (0x0009587b) bg_popup_sub_pane_cp22_ParamLimits

0x7593,	// (0x0008fad6) input_focus_pane_cp08_ParamLimits

0x75ae,	// (0x0008faf1) popup_vitu2_query_button_pane_ParamLimits

0x75ae,	// (0x0008faf1) popup_vitu2_query_button_pane

0x75bd,	// (0x0008fb00) popup_vitu2_query_input_button_pane

0x0eb1,	// (0x000893f4) popup_vitu2_query_window_g1_ParamLimits

0x75c7,	// (0x0008fb0a) popup_vitu2_query_window_g2_ParamLimits

0xf952,	// (0x00097e95) popup_vitu2_query_window_g_ParamLimits

0xaa49,	// (0x00092f8c) bg_button_pane_cp026

0x7c6c,	// (0x000901af) popup_vitu2_query_input_button_pane_g1

0xaa49,	// (0x00092f8c) bg_button_pane_cp025

0x1242,	// (0x00089785) popup_vitu2_query_button_pane_t1

0x54eb,	// (0x0008da2e) main_mp3_pane_t6

0x54fb,	// (0x0008da3e) popup_slider_window_cp01

0x68ea,	// (0x0008ee2d) cam4_battery_pane

0x69c4,	// (0x0008ef07) cam4_battery_pane_cp02

0x79ec,	// (0x0008ff2f) cam4_battery_pane_cp01

0x79ec,	// (0x0008ff2f) cam4_battery_pane_cp03

0x1250,	// (0x00089793) cam4_battery_pane_g1

0xc4c6,	// (0x00094a09) cam4_battery_pane_g2

0x0001,

0xfa56,	// (0x00097f99) cam4_battery_pane_g

0xe7a7,	// (0x00096cea) popup_blid_sat_info2_window_t11

0xcf33,	// (0x00095476) aid_size_touch_mv_arrow_left_ParamLimits

0xcf5e,	// (0x000954a1) aid_size_touch_mv_arrow_right_ParamLimits

0xcfbc,	// (0x000954ff) navi_pane_g1_ParamLimits

0xcfc8,	// (0x0009550b) navi_pane_g2_ParamLimits

0xcff6,	// (0x00095539) navi_pane_g3_ParamLimits

0xf334,	// (0x00097877) navi_pane_g_ParamLimits

0x4573,	// (0x0008cab6) navi_pane_mv_t1_ParamLimits

0x5ef0,	// (0x0008e433) grid_imed_effect_pane_ParamLimits

0x300c,	// (0x0008b54f) aid_placing_vt_slider_lsc

0xc744,	// (0x00094c87) aid_placing_vt_slider_prt

0xc090,	// (0x000945d3) bg_tb_trans_pane_cp01_ParamLimits

0xea45,	// (0x00096f88) popup_image_details_window_g1_ParamLimits

0xea58,	// (0x00096f9b) popup_image_details_window_g2_ParamLimits

0xea6d,	// (0x00096fb0) popup_image_details_window_g3_ParamLimits

0xea6d,	// (0x00096fb0) popup_image_details_window_g3

0xf663,	// (0x00097ba6) popup_image_details_window_g_ParamLimits

0xea81,	// (0x00096fc4) popup_image_details_window_t1_ParamLimits

0xea93,	// (0x00096fd6) popup_image_details_window_t2_ParamLimits

0xeaac,	// (0x00096fef) popup_image_details_window_t3_ParamLimits

0xeac0,	// (0x00097003) popup_image_details_window_t4_ParamLimits

0xeadb,	// (0x0009701e) popup_image_details_window_t5_ParamLimits

0xf66a,	// (0x00097bad) popup_image_details_window_t_ParamLimits

0x790c,	// (0x0008fe4f) cl_header_name_pane_ParamLimits

0x790c,	// (0x0008fe4f) cl_header_name_pane

0x7c74,	// (0x000901b7) cl_header_name_pane_t1_ParamLimits

0x7c74,	// (0x000901b7) cl_header_name_pane_t1

0x7c8b,	// (0x000901ce) cl_header_name_pane_t2_ParamLimits

0x7c8b,	// (0x000901ce) cl_header_name_pane_t2

0x7cb5,	// (0x000901f8) cl_header_name_pane_t3_ParamLimits

0x7cb5,	// (0x000901f8) cl_header_name_pane_t3

0x0002,

0xfa5b,	// (0x00097f9e) cl_header_name_pane_t_ParamLimits

0xfa5b,	// (0x00097f9e) cl_header_name_pane_t

0xd085,	// (0x000955c8) navi_pane_mv_g2_ParamLimits

0x0ade,	// (0x00089021) field_vitu2_entry_pane_g1_ParamLimits

0x0aea,	// (0x0008902d) field_vitu2_entry_pane_g2_ParamLimits

0xd406,	// (0x00095949) field_vitu2_entry_pane_g3_ParamLimits

0xd406,	// (0x00095949) field_vitu2_entry_pane_g3

0xf85b,	// (0x00097d9e) field_vitu2_entry_pane_g_ParamLimits

0x6c31,	// (0x0008f174) cell_vitu2_itu_pane_g1_ParamLimits

0x6c49,	// (0x0008f18c) cell_vitu2_itu_pane_g2_ParamLimits

0x6c49,	// (0x0008f18c) cell_vitu2_itu_pane_g2

0x0001,

0xf867,	// (0x00097daa) cell_vitu2_itu_pane_g_ParamLimits

0xf867,	// (0x00097daa) cell_vitu2_itu_pane_g

0x4fef,	// (0x0008d532) bg_vkb2_func_pane_cp05_ParamLimits

0x4fef,	// (0x0008d532) bg_vkb2_func_pane_cp05

0x4fef,	// (0x0008d532) bg_vkb2_func_pane_cp03

0x4fef,	// (0x0008d532) bg_vkb2_func_pane_cp04

0x4fef,	// (0x0008d532) bg_vkb2_func_pane_cp10_ParamLimits

0x4fef,	// (0x0008d532) bg_vkb2_func_pane_cp10

0x78ae,	// (0x0008fdf1) bg_vkb2_func_pane_cp08

0x757b,	// (0x0008fabe) bg_vkb2_func_pane_cp06

0x7891,	// (0x0008fdd4) bg_vkb2_func_pane_cp07

0x1132,	// (0x00089675) bg_vkb2_func_pane_cp11_ParamLimits

0x1132,	// (0x00089675) bg_vkb2_func_pane_cp11

0x1147,	// (0x0008968a) bg_vkb2_func_pane_cp12_ParamLimits

0x1147,	// (0x0008968a) bg_vkb2_func_pane_cp12

0xaa49,	// (0x00092f8c) bg_vkb2_func_pane_cp09

0x0b08,	// (0x0008904b) bg_vkb2_func_pane_g1

0xc906,	// (0x00094e49) bg_vkb2_func_pane_g2

0x0b10,	// (0x00089053) bg_vkb2_func_pane_g3

0x0b18,	// (0x0008905b) bg_vkb2_func_pane_g4

0x0e76,	// (0x000893b9) bg_vkb2_func_pane_g5

0x0b30,	// (0x00089073) bg_vkb2_func_pane_g6

0x0b38,	// (0x0008907b) bg_vkb2_func_pane_g7

0x0b28,	// (0x0008906b) bg_vkb2_func_pane_g8

0xc8e6,	// (0x00094e29) bg_vkb2_func_pane_g9

0x0008,

0xfa62,	// (0x00097fa5) bg_vkb2_func_pane_g

0x7bc3,	// (0x00090106) blid2_tripm_pane_g6_ParamLimits

0x7bc3,	// (0x00090106) blid2_tripm_pane_g6

0x08ef,	// (0x00088e32) mp4_progress_pane_g1

0x7c1d,	// (0x00090160) blid2_tripm_values_pane_ParamLimits

0x7c1d,	// (0x00090160) blid2_tripm_values_pane

0x7cda,	// (0x0009021d) blid2_tripm_values_pane_t1

0x7ce8,	// (0x0009022b) blid2_tripm_values_pane_t2

0x7cf6,	// (0x00090239) blid2_tripm_values_pane_t3

0x7d04,	// (0x00090247) blid2_tripm_values_pane_t4

0x7d12,	// (0x00090255) blid2_tripm_values_pane_t5

0x7d20,	// (0x00090263) blid2_tripm_values_pane_t6

0x7d2e,	// (0x00090271) blid2_tripm_values_pane_t7

0x7d3c,	// (0x0009027f) blid2_tripm_values_pane_t8

0x7d4a,	// (0x0009028d) blid2_tripm_values_pane_t9

0x0008,

0xfa75,	// (0x00097fb8) blid2_tripm_values_pane_t

0x304c,	// (0x0008b58f) call_video_pane_t1_ParamLimits

0x306d,	// (0x0008b5b0) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00097720) call_video_pane_t_ParamLimits

0x4882,	// (0x0008cdc5) msg_header_pane_g1_ParamLimits

0xd269,	// (0x000957ac) msg_header_pane_g2_ParamLimits

0xd269,	// (0x000957ac) msg_header_pane_g2

0x0001,

0xf3d2,	// (0x00097915) msg_header_pane_g_ParamLimits

0xf3d2,	// (0x00097915) msg_header_pane_g

0xc524,	// (0x00094a67) main_clock2_pane_ParamLimits

0x5c6a,	// (0x0008e1ad) grid_clock2_toolbar_pane_ParamLimits

0x5c6a,	// (0x0008e1ad) grid_clock2_toolbar_pane

0x5c6a,	// (0x0008e1ad) listscroll_clock2_pane_ParamLimits

0x5c6a,	// (0x0008e1ad) listscroll_clock2_pane

0x5d1a,	// (0x0008e25d) main_clock2_pane_t3_ParamLimits

0x5d1a,	// (0x0008e25d) main_clock2_pane_t3

0x5d2c,	// (0x0008e26f) main_clock2_pane_t4_ParamLimits

0x5d2c,	// (0x0008e26f) main_clock2_pane_t4

0x125a,	// (0x0008979d) cell_clock2_toolbar_pane

0x1262,	// (0x000897a5) cell_clock2_toolbar_pane_cp01

0x1262,	// (0x000897a5) cell_clock2_toolbar_pane_cp02

0x126a,	// (0x000897ad) cell_clock2_toolbar_pane_cp03

0x127e,	// (0x000897c1) list_clock2_pane

0xceb8,	// (0x000953fb) scroll_pane_cp10

0x1286,	// (0x000897c9) list_single_clock2_pane_ParamLimits

0x1286,	// (0x000897c9) list_single_clock2_pane

0xc6ed,	// (0x00094c30) list_highlight_pane_cp08

0x1293,	// (0x000897d6) list_single_clock2_pane_t1

0x12a1,	// (0x000897e4) list_single_clock2_pane_t2

0x0001,

0xfa88,	// (0x00097fcb) list_single_clock2_pane_t

0xaa49,	// (0x00092f8c) bg_button_pane_cp10

0x12af,	// (0x000897f2) cell_clock2_toolbar_pane_g1

0x48a6,	// (0x0008cde9) aid_main_viewer_pane_g1_ParamLimits

0x48a6,	// (0x0008cde9) aid_main_viewer_pane_g1

0x48b2,	// (0x0008cdf5) aid_main_viewer_pane_g2_ParamLimits

0x48b2,	// (0x0008cdf5) aid_main_viewer_pane_g2

0x48be,	// (0x0008ce01) aid_main_viewer_pane_g3_ParamLimits

0x48be,	// (0x0008ce01) aid_main_viewer_pane_g3

0x48cf,	// (0x0008ce12) aid_main_viewer_pane_g4_ParamLimits

0x48cf,	// (0x0008ce12) aid_main_viewer_pane_g4

0x0003,

0xf3e3,	// (0x00097926) aid_main_viewer_pane_g_ParamLimits

0xf3e3,	// (0x00097926) aid_main_viewer_pane_g

0x4fe2,	// (0x0008d525) main_calc_pane_ParamLimits

0x4ffd,	// (0x0008d540) main_dialer2_pane_ParamLimits

0x25ac,	// (0x0008aaef) main_cam6_pane

0x25ac,	// (0x0008aaef) main_vid6_pane

0x5c76,	// (0x0008e1b9) listscroll_gen_pane_cp06_ParamLimits

0x5c76,	// (0x0008e1b9) listscroll_gen_pane_cp06

0x5d3e,	// (0x0008e281) main_clock2_pane_t5_ParamLimits

0x5d3e,	// (0x0008e281) main_clock2_pane_t5

0x5d8b,	// (0x0008e2ce) aid_call2_pane_cp10_ParamLimits

0x5d9d,	// (0x0008e2e0) aid_call_pane_cp10_ParamLimits

0xcf27,	// (0x0009546a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf27,	// (0x0009546a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5daf,	// (0x0008e2f2) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5daf,	// (0x0008e2f2) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf27,	// (0x0009546a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71f,	// (0x00097c62) popup_clock_analogue_window_cp10_g_ParamLimits

0x5dc5,	// (0x0008e308) popup_clock_analogue_window_cp10_t1_ParamLimits

0x0960,	// (0x00088ea3) cell_dialer2_keypad_pane_g2_ParamLimits

0x0960,	// (0x00088ea3) cell_dialer2_keypad_pane_g2

0x0001,

0xf7fa,	// (0x00097d3d) cell_dialer2_keypad_pane_g_ParamLimits

0xf7fa,	// (0x00097d3d) cell_dialer2_keypad_pane_g

0xc4d0,	// (0x00094a13) cell_dialer2_keypad_pane_t1

0x6f6d,	// (0x0008f4b0) main_cset_text2_pane_ParamLimits

0x6f6d,	// (0x0008f4b0) main_cset_text2_pane

0x1091,	// (0x000895d4) area_vitu2_query_pane_g1_ParamLimits

0x7830,	// (0x0008fd73) area_vitu2_query_pane_g2_ParamLimits

0xf9a5,	// (0x00097ee8) area_vitu2_query_pane_g_ParamLimits

0x0132,	// (0x00088675) area_vitu2_query_pane_t7_ParamLimits

0x0132,	// (0x00088675) area_vitu2_query_pane_t7

0x757b,	// (0x0008fabe) bg_button_pane_cp018_ParamLimits

0x7891,	// (0x0008fdd4) bg_button_pane_cp021_ParamLimits

0x789d,	// (0x0008fde0) bg_button_pane_cp022_ParamLimits

0x78ae,	// (0x0008fdf1) bg_vkb2_func_pane_cp08_ParamLimits

0x757b,	// (0x0008fabe) bg_vkb2_func_pane_cp06_ParamLimits

0x7891,	// (0x0008fdd4) bg_vkb2_func_pane_cp07_ParamLimits

0x78c0,	// (0x0008fe03) input_focus_pane_cp09_ParamLimits

0x7d58,	// (0x0009029b) cam6_autofocus_pane_ParamLimits

0x7d58,	// (0x0009029b) cam6_autofocus_pane

0x7d74,	// (0x000902b7) cam6_image_uncrop_pane_ParamLimits

0x7d74,	// (0x000902b7) cam6_image_uncrop_pane

0x7dad,	// (0x000902f0) cam6_indi_pane_ParamLimits

0x7dad,	// (0x000902f0) cam6_indi_pane

0x7dc7,	// (0x0009030a) cam6_mode_pane_ParamLimits

0x7dc7,	// (0x0009030a) cam6_mode_pane

0x7ddb,	// (0x0009031e) cam6_timer_pane_ParamLimits

0x7ddb,	// (0x0009031e) cam6_timer_pane

0x7def,	// (0x00090332) cam6_zoom_pane_ParamLimits

0x7def,	// (0x00090332) cam6_zoom_pane

0x7e0a,	// (0x0009034d) cam6_mode_pane_g1_ParamLimits

0x7e0a,	// (0x0009034d) cam6_mode_pane_g1

0x7e16,	// (0x00090359) cam6_mode_pane_g2_ParamLimits

0x7e16,	// (0x00090359) cam6_mode_pane_g2

0x7e22,	// (0x00090365) cam6_mode_pane_g3_ParamLimits

0x7e22,	// (0x00090365) cam6_mode_pane_g3

0x7e2e,	// (0x00090371) cam6_mode_pane_g4_ParamLimits

0x7e2e,	// (0x00090371) cam6_mode_pane_g4

0x0003,

0xfa8d,	// (0x00097fd0) cam6_mode_pane_g_ParamLimits

0xfa8d,	// (0x00097fd0) cam6_mode_pane_g

0xe622,	// (0x00096b65) bg_tb_trans_pane_cp08_ParamLimits

0xe622,	// (0x00096b65) bg_tb_trans_pane_cp08

0x12b7,	// (0x000897fa) cam6_battery_pane_ParamLimits

0x12b7,	// (0x000897fa) cam6_battery_pane

0x12cd,	// (0x00089810) cam6_indi_pane_g1_ParamLimits

0x12cd,	// (0x00089810) cam6_indi_pane_g1

0x12df,	// (0x00089822) cam6_indi_pane_g2_ParamLimits

0x12df,	// (0x00089822) cam6_indi_pane_g2

0x12f1,	// (0x00089834) cam6_indi_pane_g3_ParamLimits

0x12f1,	// (0x00089834) cam6_indi_pane_g3

0x0002,

0xfa96,	// (0x00097fd9) cam6_indi_pane_g_ParamLimits

0xfa96,	// (0x00097fd9) cam6_indi_pane_g

0x1303,	// (0x00089846) cam6_indi_pane_t1_ParamLimits

0x1303,	// (0x00089846) cam6_indi_pane_t1

0x6a40,	// (0x0008ef83) cam6_autofocus_pane_g1

0x6a38,	// (0x0008ef7b) cam6_autofocus_pane_g2

0x6a50,	// (0x0008ef93) cam6_autofocus_pane_g3

0x6a48,	// (0x0008ef8b) cam6_autofocus_pane_g4

0x0003,

0xfa9d,	// (0x00097fe0) cam6_autofocus_pane_g

0x1329,	// (0x0008986c) cam6_timer_pane_g1

0x1331,	// (0x00089874) cam6_timer_pane_t1

0x133f,	// (0x00089882) cam6_zoom_cont_pane

0x1347,	// (0x0008988a) cam6_zoom_pane_g1

0x1350,	// (0x00089893) cam6_zoom_pane_g2

0x7e3a,	// (0x0009037d) cam6_zoom_pane_g3

0x0002,

0xfaa6,	// (0x00097fe9) cam6_zoom_pane_g

0xc4c6,	// (0x00094a09) cam6_battery_pane_g1

0xc4c6,	// (0x00094a09) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x000975f2) cam6_battery_pane_g

0x1347,	// (0x0008988a) cam6_zoom_cont_pane_g1

0x1350,	// (0x00089893) cam6_zoom_cont_pane_g2

0x1359,	// (0x0008989c) cam6_zoom_cont_pane_g3

0x0002,

0xfaad,	// (0x00097ff0) cam6_zoom_cont_pane_g

0x7e58,	// (0x0009039b) cam6_mode_pane_cp_ParamLimits

0x7e58,	// (0x0009039b) cam6_mode_pane_cp

0x7e6c,	// (0x000903af) cam6_zoom_pane_cp_ParamLimits

0x7e6c,	// (0x000903af) cam6_zoom_pane_cp

0x7e84,	// (0x000903c7) vid6_image_uncrop_cif_pane_ParamLimits

0x7e84,	// (0x000903c7) vid6_image_uncrop_cif_pane

0x7eb0,	// (0x000903f3) vid6_image_uncrop_nhd_pane_ParamLimits

0x7eb0,	// (0x000903f3) vid6_image_uncrop_nhd_pane

0x7ecd,	// (0x00090410) vid6_image_uncrop_vga_pane_ParamLimits

0x7ecd,	// (0x00090410) vid6_image_uncrop_vga_pane

0x7eec,	// (0x0009042f) vid6_image_uncrop_wvga_pane_ParamLimits

0x7eec,	// (0x0009042f) vid6_image_uncrop_wvga_pane

0x7f09,	// (0x0009044c) vid6_indi_pane_ParamLimits

0x7f09,	// (0x0009044c) vid6_indi_pane

0xe622,	// (0x00096b65) bg_tb_trans_pane_cp09_ParamLimits

0xe622,	// (0x00096b65) bg_tb_trans_pane_cp09

0x1371,	// (0x000898b4) cam6_battery_pane_cp_ParamLimits

0x1371,	// (0x000898b4) cam6_battery_pane_cp

0x137d,	// (0x000898c0) vid6_indi_pane_g1_ParamLimits

0x137d,	// (0x000898c0) vid6_indi_pane_g1

0x138f,	// (0x000898d2) vid6_indi_pane_g2_ParamLimits

0x138f,	// (0x000898d2) vid6_indi_pane_g2

0x13a1,	// (0x000898e4) vid6_indi_pane_g3_ParamLimits

0x13a1,	// (0x000898e4) vid6_indi_pane_g3

0x13b6,	// (0x000898f9) vid6_indi_pane_g4_ParamLimits

0x13b6,	// (0x000898f9) vid6_indi_pane_g4

0x13cb,	// (0x0008990e) vid6_indi_pane_g5_ParamLimits

0x13cb,	// (0x0008990e) vid6_indi_pane_g5

0x0004,

0xfab4,	// (0x00097ff7) vid6_indi_pane_g_ParamLimits

0xfab4,	// (0x00097ff7) vid6_indi_pane_g

0x13e5,	// (0x00089928) vid6_indi_pane_t1_ParamLimits

0x13e5,	// (0x00089928) vid6_indi_pane_t1

0xaa81,	// (0x00092fc4) vid6_indi_pane_t2_ParamLimits

0xaa81,	// (0x00092fc4) vid6_indi_pane_t2

0xaaa9,	// (0x00092fec) vid6_indi_pane_t3_ParamLimits

0xaaa9,	// (0x00092fec) vid6_indi_pane_t3

0xaad1,	// (0x00093014) vid6_indi_pane_t4_ParamLimits

0xaad1,	// (0x00093014) vid6_indi_pane_t4

0x0003,

0xfabf,	// (0x00098002) vid6_indi_pane_t_ParamLimits

0xfabf,	// (0x00098002) vid6_indi_pane_t

0xaaf5,	// (0x00093038) wait_bar_pane_cp08

0x7f2c,	// (0x0009046f) main_cset_text2_pane_t1_ParamLimits

0x7f2c,	// (0x0009046f) main_cset_text2_pane_t1

0x7e43,	// (0x00090386) listscroll_gen_pane_cp06_t1_ParamLimits

0x7e43,	// (0x00090386) listscroll_gen_pane_cp06_t1

0x25ac,	// (0x0008aaef) main_cam6_set_pane

0xaa73,	// (0x00092fb6) bg_tb_trans_pane_cp06_ParamLimits

0x68f2,	// (0x0008ee35) cam4_indicators_pane_g1_ParamLimits

0x6903,	// (0x0008ee46) cam4_indicators_pane_g2_ParamLimits

0xf837,	// (0x00097d7a) cam4_indicators_pane_g_ParamLimits

0x691b,	// (0x0008ee5e) cam4_indicators_pane_t1_ParamLimits

0x4fef,	// (0x0008d532) bg_tb_trans_pane_cp07_ParamLimits

0x69cc,	// (0x0008ef0f) vid4_indicators_pane_g1_ParamLimits

0x69e0,	// (0x0008ef23) vid4_indicators_pane_g2_ParamLimits

0x69f4,	// (0x0008ef37) vid4_indicators_pane_g3_ParamLimits

0x6a05,	// (0x0008ef48) vid4_indicators_pane_g4_ParamLimits

0xf849,	// (0x00097d8c) vid4_indicators_pane_g_ParamLimits

0x6a21,	// (0x0008ef64) vid4_indicators_pane_t1_ParamLimits

0x79f4,	// (0x0008ff37) vid4_progress_pane_g1_ParamLimits

0x7a04,	// (0x0008ff47) vid4_progress_pane_g2_ParamLimits

0x7a14,	// (0x0008ff57) vid4_progress_pane_g3_ParamLimits

0x7a26,	// (0x0008ff69) vid4_progress_pane_g4_ParamLimits

0xf9f0,	// (0x00097f33) vid4_progress_pane_g_ParamLimits

0x7a3e,	// (0x0008ff81) vid4_progress_pane_t1_ParamLimits

0x7a54,	// (0x0008ff97) vid4_progress_pane_t2_ParamLimits

0x7a69,	// (0x0008ffac) vid4_progress_pane_t3_ParamLimits

0xf9fb,	// (0x00097f3e) vid4_progress_pane_t_ParamLimits

0x7a7f,	// (0x0008ffc2) wait_bar_pane_cp07_ParamLimits

0x7f63,	// (0x000904a6) main_cam6_set_pane_g2_ParamLimits

0x7f63,	// (0x000904a6) main_cam6_set_pane_g2

0x7f6f,	// (0x000904b2) main_cset6_listscroll_pane_ParamLimits

0x7f6f,	// (0x000904b2) main_cset6_listscroll_pane

0x7f9a,	// (0x000904dd) main_cset6_slider_pane_ParamLimits

0x7f9a,	// (0x000904dd) main_cset6_slider_pane

0x7fa6,	// (0x000904e9) main_cset6_text2_pane_ParamLimits

0x7fa6,	// (0x000904e9) main_cset6_text2_pane

0xab04,	// (0x00093047) main_cset6_text_pane

0xab0c,	// (0x0009304f) main_cset_list_pane_copy1_ParamLimits

0xab0c,	// (0x0009304f) main_cset_list_pane_copy1

0xab1c,	// (0x0009305f) scroll_pane_cp028_copy1

0x7fb9,	// (0x000904fc) cset_list_set_pane_copy1

0x7fcf,	// (0x00090512) aid_position_infowindow_above_copy1

0x7fd7,	// (0x0009051a) aid_position_infowindow_below_copy1

0x0d86,	// (0x000892c9) cset_list_set_pane_g1_copy1

0x0167,	// (0x000886aa) cset_list_set_pane_g3_copy1_ParamLimits

0x0167,	// (0x000886aa) cset_list_set_pane_g3_copy1

0x0176,	// (0x000886b9) cset_list_set_pane_t1_copy1_ParamLimits

0x0176,	// (0x000886b9) cset_list_set_pane_t1_copy1

0xc090,	// (0x000945d3) list_highlight_pane_cp021_copy1_ParamLimits

0xc090,	// (0x000945d3) list_highlight_pane_cp021_copy1

0xab25,	// (0x00093068) cset6_slider_pane_ParamLimits

0xab25,	// (0x00093068) cset6_slider_pane

0xab51,	// (0x00093094) main_cset6_slider_pane_g1_ParamLimits

0xab51,	// (0x00093094) main_cset6_slider_pane_g1

0x7fdf,	// (0x00090522) main_cset6_slider_pane_g2_ParamLimits

0x7fdf,	// (0x00090522) main_cset6_slider_pane_g2

0xab79,	// (0x000930bc) main_cset6_slider_pane_g3_ParamLimits

0xab79,	// (0x000930bc) main_cset6_slider_pane_g3

0x8007,	// (0x0009054a) main_cset6_slider_pane_g4_ParamLimits

0x8007,	// (0x0009054a) main_cset6_slider_pane_g4

0x8013,	// (0x00090556) main_cset6_slider_pane_g5_ParamLimits

0x8013,	// (0x00090556) main_cset6_slider_pane_g5

0x0c5d,	// (0x000891a0) main_cset6_slider_pane_g7_ParamLimits

0x0c5d,	// (0x000891a0) main_cset6_slider_pane_g7

0x0c69,	// (0x000891ac) main_cset6_slider_pane_g8_ParamLimits

0x0c69,	// (0x000891ac) main_cset6_slider_pane_g8

0x8021,	// (0x00090564) main_cset6_slider_pane_g9_ParamLimits

0x8021,	// (0x00090564) main_cset6_slider_pane_g9

0x802d,	// (0x00090570) main_cset6_slider_pane_g10_ParamLimits

0x802d,	// (0x00090570) main_cset6_slider_pane_g10

0x8039,	// (0x0009057c) main_cset6_slider_pane_g11_ParamLimits

0x8039,	// (0x0009057c) main_cset6_slider_pane_g11

0x8045,	// (0x00090588) main_cset6_slider_pane_g12_ParamLimits

0x8045,	// (0x00090588) main_cset6_slider_pane_g12

0xab85,	// (0x000930c8) main_cset6_slider_pane_g13_ParamLimits

0xab85,	// (0x000930c8) main_cset6_slider_pane_g13

0xab91,	// (0x000930d4) main_cset6_slider_pane_g14_ParamLimits

0xab91,	// (0x000930d4) main_cset6_slider_pane_g14

0x8051,	// (0x00090594) main_cset6_slider_pane_g15_ParamLimits

0x8051,	// (0x00090594) main_cset6_slider_pane_g15

0x8069,	// (0x000905ac) main_cset6_slider_pane_g16_ParamLimits

0x8069,	// (0x000905ac) main_cset6_slider_pane_g16

0x8077,	// (0x000905ba) main_cset6_slider_pane_g17_ParamLimits

0x8077,	// (0x000905ba) main_cset6_slider_pane_g17

0x0011,

0xfac8,	// (0x0009800b) main_cset6_slider_pane_g_ParamLimits

0xfac8,	// (0x0009800b) main_cset6_slider_pane_g

0xaba9,	// (0x000930ec) main_cset6_slider_pane_t1_ParamLimits

0xaba9,	// (0x000930ec) main_cset6_slider_pane_t1

0x8091,	// (0x000905d4) main_cset6_slider_pane_t2_ParamLimits

0x8091,	// (0x000905d4) main_cset6_slider_pane_t2

0x80bc,	// (0x000905ff) main_cset6_slider_pane_t3_ParamLimits

0x80bc,	// (0x000905ff) main_cset6_slider_pane_t3

0x80e7,	// (0x0009062a) main_cset6_slider_pane_t4_ParamLimits

0x80e7,	// (0x0009062a) main_cset6_slider_pane_t4

0x8112,	// (0x00090655) main_cset6_slider_pane_t5_ParamLimits

0x8112,	// (0x00090655) main_cset6_slider_pane_t5

0xabea,	// (0x0009312d) main_cset6_slider_pane_t7_ParamLimits

0xabea,	// (0x0009312d) main_cset6_slider_pane_t7

0x813f,	// (0x00090682) main_cset6_slider_pane_t8_ParamLimits

0x813f,	// (0x00090682) main_cset6_slider_pane_t8

0x8163,	// (0x000906a6) main_cset6_slider_pane_t9_ParamLimits

0x8163,	// (0x000906a6) main_cset6_slider_pane_t9

0x8187,	// (0x000906ca) main_cset6_slider_pane_t10_ParamLimits

0x8187,	// (0x000906ca) main_cset6_slider_pane_t10

0x81ab,	// (0x000906ee) main_cset6_slider_pane_t11_ParamLimits

0x81ab,	// (0x000906ee) main_cset6_slider_pane_t11

0xac20,	// (0x00093163) main_cset6_slider_pane_t14_ParamLimits

0xac20,	// (0x00093163) main_cset6_slider_pane_t14

0xac59,	// (0x0009319c) main_cset6_slider_pane_t15_ParamLimits

0xac59,	// (0x0009319c) main_cset6_slider_pane_t15

0x000b,

0xfaed,	// (0x00098030) main_cset6_slider_pane_t_ParamLimits

0xfaed,	// (0x00098030) main_cset6_slider_pane_t

0x0e2a,	// (0x0008936d) cset_slider_pane_g1_copy1

0x0e33,	// (0x00089376) cset_slider_pane_g2_copy1

0x0e3c,	// (0x0008937f) cset_slider_pane_g3_copy1

0xaa49,	// (0x00092f8c) bg_popup_sub_pane_cp011_copy1

0xac9b,	// (0x000931de) main_cset_text_pane_g1_copy1

0x0ec5,	// (0x00089408) main_cset_text_pane_t1_copy1

0x0ed3,	// (0x00089416) main_cset_text_pane_t2_copy1

0x0ee1,	// (0x00089424) main_cset_text_pane_t3_copy1

0x0eef,	// (0x00089432) main_cset_text_pane_t4_copy1

0x0efd,	// (0x00089440) main_cset_text_pane_t5_copy1

0xaca3,	// (0x000931e6) main_cset_text_pane_t6_copy1

0xacb1,	// (0x000931f4) main_cset_text_pane_t7_copy1

0x81ee,	// (0x00090731) main_cset_text2_pane_t1_copy1

0x4fef,	// (0x0008d532) main_ncimui_pane

0x504e,	// (0x0008d591) popup_query_ncimui_window_ParamLimits

0x504e,	// (0x0008d591) popup_query_ncimui_window

0xebb8,	// (0x000970fb) field_cale_ev2_pane_g4_ParamLimits

0xebb8,	// (0x000970fb) field_cale_ev2_pane_g4

0x61a2,	// (0x0008e6e5) cell_video_dialer_keypad_pane_g2_ParamLimits

0x61a2,	// (0x0008e6e5) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d1,	// (0x00097d14) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d1,	// (0x00097d14) cell_video_dialer_keypad_pane_g

0x61ba,	// (0x0008e6fd) cell_video_dialer_keypad_pane_t1

0xaa49,	// (0x00092f8c) bg_popup_window_pane_cp012

0xe3fa,	// (0x0009693d) heading_pane_cp06

0xace9,	// (0x0009322c) ncim_query_content_pane

0xaa49,	// (0x00092f8c) bg_popup_heading_pane_cp01

0xacf1,	// (0x00093234) ncim_heading_pane_t1

0xacff,	// (0x00093242) ncim_indicator_popup_pane

0xad11,	// (0x00093254) ncim_query_button_pane

0xad25,	// (0x00093268) ncim_query_content_pane_t1

0xad37,	// (0x0009327a) ncim_query_content_pane_t2

0x0005,

0xfb31,	// (0x00098074) ncim_query_content_pane_t

0xad71,	// (0x000932b4) ncim_query_list_pane

0xad83,	// (0x000932c6) ncim_query_popup_pane

0xacff,	// (0x00093242) ncim_indicator_popup_pane_ParamLimits

0x8342,	// (0x00090885) ncim_query_content_pane_g1_ParamLimits

0x8342,	// (0x00090885) ncim_query_content_pane_g1

0xad25,	// (0x00093268) ncim_query_content_pane_t1_ParamLimits

0xad37,	// (0x0009327a) ncim_query_content_pane_t2_ParamLimits

0x834e,	// (0x00090891) ncim_query_content_pane_t3_ParamLimits

0x834e,	// (0x00090891) ncim_query_content_pane_t3

0x836b,	// (0x000908ae) ncim_query_content_pane_t4_ParamLimits

0x836b,	// (0x000908ae) ncim_query_content_pane_t4

0x8388,	// (0x000908cb) ncim_query_content_pane_t5_ParamLimits

0x8388,	// (0x000908cb) ncim_query_content_pane_t5

0xad49,	// (0x0009328c) ncim_query_content_pane_t6_ParamLimits

0xad49,	// (0x0009328c) ncim_query_content_pane_t6

0xfb31,	// (0x00098074) ncim_query_content_pane_t_ParamLimits

0xad71,	// (0x000932b4) ncim_query_list_pane_ParamLimits

0xad83,	// (0x000932c6) ncim_query_popup_pane_ParamLimits

0xad97,	// (0x000932da) wait_bar_pane_cp04

0xaa49,	// (0x00092f8c) input_focus_pane_cp011

0xad9f,	// (0x000932e2) ncim_query_popup_pane_t1

0xadad,	// (0x000932f0) ncim_list_query_list_pane_ParamLimits

0xadad,	// (0x000932f0) ncim_list_query_list_pane

0xaa49,	// (0x00092f8c) bg_button_pane_cp027

0xadba,	// (0x000932fd) ncim_query_button_pane_g1

0xaa49,	// (0x00092f8c) list_highlight_pane_cp012

0xadc4,	// (0x00093307) ncim_list_query_list_pane_g1

0xadcc,	// (0x0009330f) ncim_list_query_list_pane_t1

0x690f,	// (0x0008ee52) cam4_indicators_pane_g3_ParamLimits

0x690f,	// (0x0008ee52) cam4_indicators_pane_g3

0x6a11,	// (0x0008ef54) vid4_indicators_pane_g5_ParamLimits

0x6a11,	// (0x0008ef54) vid4_indicators_pane_g5

0x7a32,	// (0x0008ff75) vid4_progress_pane_g5_ParamLimits

0x7a32,	// (0x0008ff75) vid4_progress_pane_g5

0x822e,	// (0x00090771) main_ncimui_pane_g1

0x8296,	// (0x000907d9) ncimui_group_query_pane_ParamLimits

0x8296,	// (0x000907d9) ncimui_group_query_pane

0x82de,	// (0x00090821) ncimui_list_pane_ParamLimits

0x82de,	// (0x00090821) ncimui_list_pane

0x8305,	// (0x00090848) ncimui_text_pane_ParamLimits

0x8305,	// (0x00090848) ncimui_text_pane

0x83a5,	// (0x000908e8) ncimui_text_pane_t1_ParamLimits

0x83a5,	// (0x000908e8) ncimui_text_pane_t1

0xadda,	// (0x0009331d) ncimui_list_single_graphic_pane_ParamLimits

0xadda,	// (0x0009331d) ncimui_list_single_graphic_pane

0x83c4,	// (0x00090907) ncimui_query_pane_ParamLimits

0x83c4,	// (0x00090907) ncimui_query_pane

0xaa49,	// (0x00092f8c) list_highlight_pane_cp013

0xadea,	// (0x0009332d) ncim_list_query_list_pane_t1_copy1

0xadf8,	// (0x0009333b) ncim_list_single_graphic_pane_g1

0x83d7,	// (0x0009091a) ncim_query_button_pane_cp01

0x83e3,	// (0x00090926) ncim_query_entry_pane_ParamLimits

0x83e3,	// (0x00090926) ncim_query_entry_pane

0x83f6,	// (0x00090939) ncimui_query_pane_g1

0x8402,	// (0x00090945) ncimui_query_pane_t1_ParamLimits

0x8402,	// (0x00090945) ncimui_query_pane_t1

0xc090,	// (0x000945d3) input_focus_pane_cp012

0xae00,	// (0x00093343) ncim_query_entry_pane_t1

0xc524,	// (0x00094a67) main_im_pane_ParamLimits

0x4fef,	// (0x0008d532) main_mobtv_pane_ParamLimits

0x4fef,	// (0x0008d532) main_mobtv_pane

0x8085,	// (0x000905c8) main_cset6_slider_pane_g18_ParamLimits

0x8085,	// (0x000905c8) main_cset6_slider_pane_g18

0xab9d,	// (0x000930e0) main_cset6_slider_pane_g19_ParamLimits

0xab9d,	// (0x000930e0) main_cset6_slider_pane_g19

0xd406,	// (0x00095949) bg_main_mobtv_pane_ParamLimits

0xd406,	// (0x00095949) bg_main_mobtv_pane

0x841b,	// (0x0009095e) main_mobtv_info_pane

0x8426,	// (0x00090969) main_mobtv_loading_pane_ParamLimits

0x8426,	// (0x00090969) main_mobtv_loading_pane

0xae12,	// (0x00093355) main_mobtv_pg_channel_list_pane

0xae1c,	// (0x0009335f) main_mobtv_pg_hdr_pane

0x8433,	// (0x00090976) main_mobtv_programe_curr_pane_ParamLimits

0x8433,	// (0x00090976) main_mobtv_programe_curr_pane

0x8440,	// (0x00090983) main_mobtv_programe_next_pane_ParamLimits

0x8440,	// (0x00090983) main_mobtv_programe_next_pane

0xae25,	// (0x00093368) popup_mobtv_noti_window

0xc4c6,	// (0x00094a09) main_tv_pg_hdr_pane_g1

0xae2d,	// (0x00093370) main_tv_pg_hdr_pane_g2

0xae35,	// (0x00093378) main_tv_pg_hdr_pane_g3

0xae3d,	// (0x00093380) main_tv_pg_hdr_pane_g4

0xae45,	// (0x00093388) main_tv_pg_hdr_pane_g5

0xae4f,	// (0x00093392) main_tv_pg_hdr_pane_g6

0xae59,	// (0x0009339c) main_tv_pg_hdr_pane_g7

0xae63,	// (0x000933a6) main_tv_pg_hdr_pane_g8

0xae6d,	// (0x000933b0) main_tv_pg_hdr_pane_g9

0xae77,	// (0x000933ba) main_tv_pg_hdr_pane_g10

0xae81,	// (0x000933c4) main_tv_pg_hdr_pane_g11

0x000a,

0xfb3e,	// (0x00098081) main_tv_pg_hdr_pane_g

0xae8b,	// (0x000933ce) main_tv_pg_hdr_pane_t1

0xae99,	// (0x000933dc) main_tv_pg_hdr_pane_t2

0xaea7,	// (0x000933ea) main_tv_pg_hdr_pane_t3

0xaeb7,	// (0x000933fa) main_tv_pg_hdr_pane_t4

0xaec7,	// (0x0009340a) main_tv_pg_hdr_pane_t5

0x0004,

0xfb55,	// (0x00098098) main_tv_pg_hdr_pane_t

0xaed7,	// (0x0009341a) single_mobtv_pg_channel_pane_ParamLimits

0xaed7,	// (0x0009341a) single_mobtv_pg_channel_pane

0xaee9,	// (0x0009342c) single_mobtv_pg_channel_table_pane

0xca09,	// (0x00094f4c) single_mobtv_pg_channel_thumb_pane

0xaef2,	// (0x00093435) single_tv_pg_channel_pane_g1

0xaefb,	// (0x0009343e) single_tv_pg_channel_pane_g2

0x0001,

0xfb60,	// (0x000980a3) single_tv_pg_channel_pane_g

0xc488,	// (0x000949cb) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc488,	// (0x000949cb) bg_single_mobtv_pg_channel_thumb_pane

0xaf04,	// (0x00093447) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xaf04,	// (0x00093447) single_mobtv_pg_channel_thumb_pane_g1

0xaf12,	// (0x00093455) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xaf12,	// (0x00093455) single_mobtv_pg_channel_thumb_pane_g2

0xaf1e,	// (0x00093461) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xaf1e,	// (0x00093461) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb65,	// (0x000980a8) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb65,	// (0x000980a8) single_mobtv_pg_channel_thumb_pane_g

0xaf2a,	// (0x0009346d) single_mobtv_pg_channel_thumb_pane_t1

0xaf38,	// (0x0009347b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb6c,	// (0x000980af) single_mobtv_pg_channel_thumb_pane_t

0xc4c6,	// (0x00094a09) bg_single_mobtv_pg_channel_table_pane_g1

0xc4c6,	// (0x00094a09) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x000975f2) bg_single_mobtv_pg_channel_table_pane_g

0xaf46,	// (0x00093489) single_mobtv_pg_channel_table_pane_t1

0xaf54,	// (0x00093497) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb71,	// (0x000980b4) single_mobtv_pg_channel_table_pane_t

0x8455,	// (0x00090998) main_mobtv_info_pane_g1_ParamLimits

0x8455,	// (0x00090998) main_mobtv_info_pane_g1

0x8471,	// (0x000909b4) main_mobtv_info_pane_t1_ParamLimits

0x8471,	// (0x000909b4) main_mobtv_info_pane_t1

0x84e9,	// (0x00090a2c) main_mobtv_info_pane_t2_ParamLimits

0x84e9,	// (0x00090a2c) main_mobtv_info_pane_t2

0x0002,

0xfb7b,	// (0x000980be) main_mobtv_info_pane_t_ParamLimits

0xfb7b,	// (0x000980be) main_mobtv_info_pane_t

0x8578,	// (0x00090abb) wait_bar_pane_cp05

0x858a,	// (0x00090acd) main_mobtv_loading_pane_g1_ParamLimits

0x858a,	// (0x00090acd) main_mobtv_loading_pane_g1

0x8598,	// (0x00090adb) main_mobtv_loading_pane_g2_ParamLimits

0x8598,	// (0x00090adb) main_mobtv_loading_pane_g2

0x85a4,	// (0x00090ae7) main_mobtv_loading_pane_g3_ParamLimits

0x85a4,	// (0x00090ae7) main_mobtv_loading_pane_g3

0x0002,

0xfb82,	// (0x000980c5) main_mobtv_loading_pane_g_ParamLimits

0xfb82,	// (0x000980c5) main_mobtv_loading_pane_g

0xaf62,	// (0x000934a5) main_mobtv_loading_pane_t1_ParamLimits

0xaf62,	// (0x000934a5) main_mobtv_loading_pane_t1

0xaf7a,	// (0x000934bd) main_mobtv_loading_pane_t2_ParamLimits

0xaf7a,	// (0x000934bd) main_mobtv_loading_pane_t2

0x0001,

0xfb89,	// (0x000980cc) main_mobtv_loading_pane_t_ParamLimits

0xfb89,	// (0x000980cc) main_mobtv_loading_pane_t

0x85b2,	// (0x00090af5) wait_bar_pane_cp06_ParamLimits

0x85b2,	// (0x00090af5) wait_bar_pane_cp06

0xaf9e,	// (0x000934e1) main_mobtv_programe_curr_pane_t1

0xafac,	// (0x000934ef) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb8e,	// (0x000980d1) main_mobtv_programe_curr_pane_t

0xafba,	// (0x000934fd) main_mobtv_programe_next_pane_t1

0xafc8,	// (0x0009350b) main_mobtv_programe_next_pane_t2

0xafd6,	// (0x00093519) main_mobtv_programe_next_pane_t3

0x0002,

0xfb93,	// (0x000980d6) main_mobtv_programe_next_pane_t

0xaa49,	// (0x00092f8c) bg_popup_mobtv_noti_window_pane

0xafe4,	// (0x00093527) popup_mobtv_noti_window_g1

0xafec,	// (0x0009352f) popup_mobtv_noti_window_t1

0xaffa,	// (0x0009353d) popup_mobtv_noti_window_t2

0x0001,

0xfb9a,	// (0x000980dd) popup_mobtv_noti_window_t

0xc4c6,	// (0x00094a09) bg_popup_mobtv_noti_window_pane_g1

0x25ac,	// (0x0008aaef) sc_clock_pane

0x25ac,	// (0x0008aaef) main_fs_bigclock_pane

0x7c0b,	// (0x0009014e) blid2_tripm_pane_t4_ParamLimits

0x7c0b,	// (0x0009014e) blid2_tripm_pane_t4

0xc496,	// (0x000949d9) sc_clock_pane_g1_ParamLimits

0xc496,	// (0x000949d9) sc_clock_pane_g1

0xc4e4,	// (0x00094a27) sc_clock_pane_t1_ParamLimits

0xc4e4,	// (0x00094a27) sc_clock_pane_t1

0xc4e4,	// (0x00094a27) sc_clock_pane_t2_ParamLimits

0xc4e4,	// (0x00094a27) sc_clock_pane_t2

0xc4e4,	// (0x00094a27) sc_clock_pane_t3_ParamLimits

0xc4e4,	// (0x00094a27) sc_clock_pane_t3

0x0004,

0xfb9f,	// (0x000980e2) sc_clock_pane_t_ParamLimits

0xfb9f,	// (0x000980e2) sc_clock_pane_t

0x9078,	// (0x000915bb) main_fs_bigclock_indicator_pane_ParamLimits

0x9078,	// (0x000915bb) main_fs_bigclock_indicator_pane

0x85f9,	// (0x00090b3c) main_fs_bigclock_pane_g1_ParamLimits

0x85f9,	// (0x00090b3c) main_fs_bigclock_pane_g1

0x9084,	// (0x000915c7) main_fs_bigclock_pane_t1_ParamLimits

0x9084,	// (0x000915c7) main_fs_bigclock_pane_t1

0x9096,	// (0x000915d9) main_fs_bigclock_pane_t2_ParamLimits

0x9096,	// (0x000915d9) main_fs_bigclock_pane_t2

0x90aa,	// (0x000915ed) main_fs_bigclock_pane_t3_ParamLimits

0x90aa,	// (0x000915ed) main_fs_bigclock_pane_t3

0x0002,

0xfd35,	// (0x00098278) main_fs_bigclock_pane_t_ParamLimits

0xfd35,	// (0x00098278) main_fs_bigclock_pane_t

0xb848,	// (0x00093d8b) main_fs_bigclock_indicator_pane_g1

0xad19,	// (0x0009325c) ncim_query_content_pane_g2_ParamLimits

0xad19,	// (0x0009325c) ncim_query_content_pane_g2

0x0001,

0xfb2c,	// (0x0009806f) ncim_query_content_pane_g_ParamLimits

0xfb2c,	// (0x0009806f) ncim_query_content_pane_g

0xc4e4,	// (0x00094a27) sc_clock_pane_t4_ParamLimits

0xc4e4,	// (0x00094a27) sc_clock_pane_t4

0x4fef,	// (0x0008d532) main_radioblah_pane

0x67c5,	// (0x0008ed08) cell_call4_button_pane_t1_copy1_ParamLimits

0x67c5,	// (0x0008ed08) cell_call4_button_pane_t1_copy1

0x8248,	// (0x0009078b) main_ncimui_pane_t1_ParamLimits

0x8248,	// (0x0009078b) main_ncimui_pane_t1

0x8262,	// (0x000907a5) main_ncimui_pane_t2_ParamLimits

0x8262,	// (0x000907a5) main_ncimui_pane_t2

0x0002,

0xfb25,	// (0x00098068) main_ncimui_pane_t_ParamLimits

0xfb25,	// (0x00098068) main_ncimui_pane_t

0xd338,	// (0x0009587b) main_radioblah_anim_pane_ParamLimits

0xd338,	// (0x0009587b) main_radioblah_anim_pane

0xd338,	// (0x0009587b) main_radioblah_info_pane_ParamLimits

0xd338,	// (0x0009587b) main_radioblah_info_pane

0xd3f2,	// (0x00095935) main_radioblah_pane_t1_ParamLimits

0xd3f2,	// (0x00095935) main_radioblah_pane_t1

0xd3f2,	// (0x00095935) main_radioblah_pane_t2_ParamLimits

0xd3f2,	// (0x00095935) main_radioblah_pane_t2

0x0003,

0xfbc0,	// (0x00098103) main_radioblah_pane_t_ParamLimits

0xfbc0,	// (0x00098103) main_radioblah_pane_t

0xc47a,	// (0x000949bd) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc47a,	// (0x000949bd) main_radioblah_rocker_ctrl_pane

0xe630,	// (0x00096b73) main_radioblah_info_pane_t1_ParamLimits

0xe630,	// (0x00096b73) main_radioblah_info_pane_t1

0xb170,	// (0x000936b3) main_radioblah_info_pane_t2_ParamLimits

0xb170,	// (0x000936b3) main_radioblah_info_pane_t2

0x0003,

0xfbc9,	// (0x0009810c) main_radioblah_info_pane_t_ParamLimits

0xfbc9,	// (0x0009810c) main_radioblah_info_pane_t

0xc4c6,	// (0x00094a09) main_radioblah_rocker_ctrl_pane_g1

0xc4c6,	// (0x00094a09) main_radioblah_rocker_ctrl_pane_g2

0xc4c6,	// (0x00094a09) main_radioblah_rocker_ctrl_pane_g3

0xc4c6,	// (0x00094a09) main_radioblah_rocker_ctrl_pane_g4

0xc4c6,	// (0x00094a09) main_radioblah_rocker_ctrl_pane_g5

0xc4c6,	// (0x00094a09) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd2,	// (0x00098115) main_radioblah_rocker_ctrl_pane_g

0x81ee,	// (0x00090731) main_cset_text2_pane_t1_copy1_ParamLimits

0x6840,	// (0x0008ed83) cam4_image_uncrop_qvga_pane

0x6981,	// (0x0008eec4) vid4_image_uncrop_qcif_pane

0x7d9f,	// (0x000902e2) cam6_image_uncrop_qvga_pane_ParamLimits

0x7d9f,	// (0x000902e2) cam6_image_uncrop_qvga_pane

0x1361,	// (0x000898a4) vid6_image_uncrop_qcif_pane_ParamLimits

0x1361,	// (0x000898a4) vid6_image_uncrop_qcif_pane

0xaa49,	// (0x00092f8c) bg_popup_preview_window_pane_cp03

0xacbf,	// (0x00093202) list_cset_text2_pane

0xacc7,	// (0x0009320a) main_cset6_text2_pane_g1

0xaccf,	// (0x00093212) main_cset6_text2_pane_t1

0x863d,	// (0x00090b80) list_cset_text2_pane_t1_ParamLimits

0x863d,	// (0x00090b80) list_cset_text2_pane_t1

0x4fef,	// (0x0008d532) main_radioblah_pane_ParamLimits

0x8564,	// (0x00090aa7) main_mobtv_info_pane_t3_ParamLimits

0x8564,	// (0x00090aa7) main_mobtv_info_pane_t3

0xd406,	// (0x00095949) main_radioblah_pane_g1

0xb140,	// (0x00093683) main_radioblah_info_pane_g1

0xc4e4,	// (0x00094a27) main_radioblah_info_pane_t3_ParamLimits

0xc4e4,	// (0x00094a27) main_radioblah_info_pane_t3

0x409a,	// (0x0008c5dd) highlight_cell_cale_month_pane_ParamLimits

0x409a,	// (0x0008c5dd) highlight_cell_cale_month_pane

0x25ac,	// (0x0008aaef) main_phob_fisheye_pane

0xec59,	// (0x0009719c) scroll_pane_cp0031_ParamLimits

0xec59,	// (0x0009719c) scroll_pane_cp0031

0xaaf5,	// (0x00093038) wait_bar_pane_cp08_ParamLimits

0x7fb9,	// (0x000904fc) cset_list_set_pane_copy1_ParamLimits

0xb1bf,	// (0x00093702) highlight_cell_cale_month_pane_g1

0x865e,	// (0x00090ba1) highlight_cell_cale_month_pane_t1

0x10e5,	// (0x00089628) list_gen_pane_cp01

0x0c48,	// (0x0008918b) scroll_pane_01

0x866c,	// (0x00090baf) list_single_double_fisheye_pane

0x018b,	// (0x000886ce) list_double_fisheye_pane_g1_ParamLimits

0x018b,	// (0x000886ce) list_double_fisheye_pane_g1

0x0197,	// (0x000886da) list_double_fisheye_pane_g2_ParamLimits

0x0197,	// (0x000886da) list_double_fisheye_pane_g2

0x8675,	// (0x00090bb8) list_double_fisheye_pane_g3_ParamLimits

0x8675,	// (0x00090bb8) list_double_fisheye_pane_g3

0x0004,

0xfbdf,	// (0x00098122) list_double_fisheye_pane_g_ParamLimits

0xfbdf,	// (0x00098122) list_double_fisheye_pane_g

0x8681,	// (0x00090bc4) list_double_fisheye_pane_t1_ParamLimits

0x8681,	// (0x00090bc4) list_double_fisheye_pane_t1

0x869c,	// (0x00090bdf) list_double_fisheye_pane_t2_ParamLimits

0x869c,	// (0x00090bdf) list_double_fisheye_pane_t2

0x0001,

0xfbea,	// (0x0009812d) list_double_fisheye_pane_t_ParamLimits

0xfbea,	// (0x0009812d) list_double_fisheye_pane_t

0x25ac,	// (0x0008aaef) main_call5_pane

0xc47a,	// (0x000949bd) sc_swipe_pane_ParamLimits

0xc47a,	// (0x000949bd) sc_swipe_pane

0x86ca,	// (0x00090c0d) call5_image_pane_ParamLimits

0x86ca,	// (0x00090c0d) call5_image_pane

0x86da,	// (0x00090c1d) call5_swipe_1_pane_ParamLimits

0x86da,	// (0x00090c1d) call5_swipe_1_pane

0x86e6,	// (0x00090c29) call5_swipe_2_pane_ParamLimits

0x86e6,	// (0x00090c29) call5_swipe_2_pane

0x8700,	// (0x00090c43) popup_call5_audio_first_window_ParamLimits

0x8700,	// (0x00090c43) popup_call5_audio_first_window

0xc488,	// (0x000949cb) call5_swipe_1_pane_g1_ParamLimits

0xc488,	// (0x000949cb) call5_swipe_1_pane_g1

0xb1c7,	// (0x0009370a) call5_swipe_1_pane_g2_ParamLimits

0xb1c7,	// (0x0009370a) call5_swipe_1_pane_g2

0x0001,

0xfbef,	// (0x00098132) call5_swipe_1_pane_g_ParamLimits

0xfbef,	// (0x00098132) call5_swipe_1_pane_g

0xb1d3,	// (0x00093716) call5_swipe_1_pane_t1_ParamLimits

0xb1d3,	// (0x00093716) call5_swipe_1_pane_t1

0xc488,	// (0x000949cb) call5_swipe_2_pane_g1_ParamLimits

0xc488,	// (0x000949cb) call5_swipe_2_pane_g1

0xb1e8,	// (0x0009372b) call5_swipe_2_pane_g2_ParamLimits

0xb1e8,	// (0x0009372b) call5_swipe_2_pane_g2

0x0001,

0xfbf4,	// (0x00098137) call5_swipe_2_pane_g_ParamLimits

0xfbf4,	// (0x00098137) call5_swipe_2_pane_g

0xb1f4,	// (0x00093737) call5_swipe_2_pane_t1_ParamLimits

0xb1f4,	// (0x00093737) call5_swipe_2_pane_t1

0xc488,	// (0x000949cb) sc_swipe_pane_g1_ParamLimits

0xc488,	// (0x000949cb) sc_swipe_pane_g1

0xc496,	// (0x000949d9) sc_swipe_pane_g2_ParamLimits

0xc496,	// (0x000949d9) sc_swipe_pane_g2

0x0001,

0xfbf9,	// (0x0009813c) sc_swipe_pane_g_ParamLimits

0xfbf9,	// (0x0009813c) sc_swipe_pane_g

0xc4d0,	// (0x00094a13) sc_swipe_pane_t1_ParamLimits

0xc4d0,	// (0x00094a13) sc_swipe_pane_t1

0x25ac,	// (0x0008aaef) main_cmail_launcher_pane

0x870e,	// (0x00090c51) aid_size_cell_cmail_l_ParamLimits

0x870e,	// (0x00090c51) aid_size_cell_cmail_l

0x871c,	// (0x00090c5f) grid_cmail_l_pane_ParamLimits

0x871c,	// (0x00090c5f) grid_cmail_l_pane

0x872c,	// (0x00090c6f) cell_cmail_l_pane_ParamLimits

0x872c,	// (0x00090c6f) cell_cmail_l_pane

0xb209,	// (0x0009374c) cell_cmail_l_pane_g1_ParamLimits

0xb209,	// (0x0009374c) cell_cmail_l_pane_g1

0xb215,	// (0x00093758) cell_cmail_l_pane_t1_ParamLimits

0xb215,	// (0x00093758) cell_cmail_l_pane_t1

0xb22b,	// (0x0009376e) cell_cmail_l_pane_t2_ParamLimits

0xb22b,	// (0x0009376e) cell_cmail_l_pane_t2

0x0001,

0xfbfe,	// (0x00098141) cell_cmail_l_pane_t_ParamLimits

0xfbfe,	// (0x00098141) cell_cmail_l_pane_t

0xc090,	// (0x000945d3) grid_highlight_pane_cp018_ParamLimits

0xc090,	// (0x000945d3) grid_highlight_pane_cp018

0x2403,	// (0x0008a946) main2_pane_ParamLimits

0x2403,	// (0x0008a946) main2_pane

0xc5b3,	// (0x00094af6) popup_sp_fs_action_menu_bg_pane_g1

0xc5bb,	// (0x00094afe) popup_sp_fs_action_menu_bg_pane_g2

0xc5cc,	// (0x00094b0f) popup_sp_fs_action_menu_bg_pane_g3

0xc5d4,	// (0x00094b17) popup_sp_fs_action_menu_bg_pane_g4

0xc5dc,	// (0x00094b1f) popup_sp_fs_action_menu_bg_pane_g5

0xc5e4,	// (0x00094b27) popup_sp_fs_action_menu_bg_pane_g6

0xc5ec,	// (0x00094b2f) popup_sp_fs_action_menu_bg_pane_g7

0xc5f4,	// (0x00094b37) popup_sp_fs_action_menu_bg_pane_g8

0xc5fc,	// (0x00094b3f) popup_sp_fs_action_menu_bg_pane_g9

0xc604,	// (0x00094b47) popup_sp_fs_action_menu_bg_pane_g10

0xc604,	// (0x00094b47) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x00097643) popup_sp_fs_action_menu_bg_pane_g

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g3_g1

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g3_g2

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x000976f1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x000976f1) list_medium_line_x2_t3_g3_g

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g3_t1

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g3_t2

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x000976f8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x000976f8) list_medium_line_x2_t3_g3_t

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g2_g1

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x000976ff) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x000976ff) list_medium_line_x2_t3_g2_g

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g2_t1

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g2_t2

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x000976f8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x000976f8) list_medium_line_x2_t3_g2_t

0xc488,	// (0x000949cb) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t4_g4_g1

0xc488,	// (0x000949cb) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t4_g4_g2

0xc488,	// (0x000949cb) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t4_g4_g3

0xc488,	// (0x000949cb) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x00097704) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x00097704) list_medium_line_x2_t4_g4_g

0xc4d0,	// (0x00094a13) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t4_g4_t1

0xc4d0,	// (0x00094a13) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t4_g4_t2

0xc4d0,	// (0x00094a13) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t4_g4_t3

0xc4d0,	// (0x00094a13) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x0009770d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x0009770d) list_medium_line_x2_t4_g4_t

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g4_g1

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g4_g2

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g4_g3

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x00097704) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x00097704) list_medium_line_x2_t2_g4_g

0xc4d0,	// (0x00094a13) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t2_g4_t1

0xc4d0,	// (0x00094a13) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t2_g4_t2

0x0001,

0xf231,	// (0x00097774) list_medium_line_x2_t2_g4_t_ParamLimits

0xf231,	// (0x00097774) list_medium_line_x2_t2_g4_t

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g3_g1

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g3_g2

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x000976f1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x000976f1) list_medium_line_x2_t2_g3_g

0xc4d0,	// (0x00094a13) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t2_g3_t1

0xc4d0,	// (0x00094a13) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t2_g3_t2

0x0001,

0xf231,	// (0x00097774) list_medium_line_x2_t2_g3_t_ParamLimits

0xf231,	// (0x00097774) list_medium_line_x2_t2_g3_t

0x4295,	// (0x0008c7d8) main_sp_fs_list_pane_ParamLimits

0x4295,	// (0x0008c7d8) main_sp_fs_list_pane

0x42a1,	// (0x0008c7e4) sp_fs_scroll_pane_ParamLimits

0x42a1,	// (0x0008c7e4) sp_fs_scroll_pane

0xcc1c,	// (0x0009515f) list_medium_line_x2_t3_t1

0xcc1c,	// (0x0009515f) list_medium_line_x2_t3_t2

0xcc1c,	// (0x0009515f) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x000977bf) list_medium_line_x2_t3_t

0xcc1c,	// (0x0009515f) list_medium_line_x3_t4_t1

0xcc1c,	// (0x0009515f) list_medium_line_x3_t4_t2

0xcc1c,	// (0x0009515f) list_medium_line_x3_t4_t3

0xcc1c,	// (0x0009515f) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x000977c6) list_medium_line_x3_t4_t

0xcc1c,	// (0x0009515f) list_medium_line_x4_t5_t1

0xcc1c,	// (0x0009515f) list_medium_line_x4_t5_t2

0xcc1c,	// (0x0009515f) list_medium_line_x4_t5_t3

0xcc1c,	// (0x0009515f) list_medium_line_x4_t5_t4

0xcc1c,	// (0x0009515f) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x000977cf) list_medium_line_x4_t5_t

0xc488,	// (0x000949cb) list_medium_line_t4_g4_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_t4_g4_g1

0xc488,	// (0x000949cb) list_medium_line_t4_g4_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_t4_g4_g2

0xc488,	// (0x000949cb) list_medium_line_t4_g4_g3_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_t4_g4_g3

0xc488,	// (0x000949cb) list_medium_line_t4_g4_g4_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x00097704) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x00097704) list_medium_line_t4_g4_g

0xc4d0,	// (0x00094a13) list_medium_line_t4_g4_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t4_g4_t1

0xc4d0,	// (0x00094a13) list_medium_line_t4_g4_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t4_g4_t2

0xc4d0,	// (0x00094a13) list_medium_line_t4_g4_t3_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t4_g4_t3

0xc4d0,	// (0x00094a13) list_medium_line_t4_g4_t4_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x0009770d) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x0009770d) list_medium_line_t4_g4_t

0x4394,	// (0x0008c8d7) chi_dic_find_pane_g1

0x500b,	// (0x0008d54e) main_tport_pane

0xcc1c,	// (0x0009515f) list_medium_line_plain_t1

0xc488,	// (0x000949cb) list_medium_line_t2_g2_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_t2_g2_g1

0xc488,	// (0x000949cb) list_medium_line_t2_g2_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x000976ff) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x000976ff) list_medium_line_t2_g2_g

0xc4d0,	// (0x00094a13) list_medium_line_t2_g2_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t2_g2_t1

0xc4d0,	// (0x00094a13) list_medium_line_t2_g2_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t2_g2_t2

0x0001,

0xf231,	// (0x00097774) list_medium_line_t2_g2_t_ParamLimits

0xf231,	// (0x00097774) list_medium_line_t2_g2_t

0x0156,	// (0x00088699) aid_sp_fs_list_icon_a_sm

0x0d70,	// (0x000892b3) aid_sp_fs_list_icon_d

0x015e,	// (0x000886a1) aid_sp_fs_text_primary

0x10ee,	// (0x00089631) aid_sp_fs_text_secondary

0xaa49,	// (0x00092f8c) list_medium_line

0xaa49,	// (0x00092f8c) list_medium_line_g2

0xaa49,	// (0x00092f8c) list_medium_line_g3

0xaa49,	// (0x00092f8c) list_medium_line_plain

0xaa49,	// (0x00092f8c) list_medium_line_plain_t2

0xaa49,	// (0x00092f8c) list_medium_line_plain_t3

0xaa49,	// (0x00092f8c) list_medium_line_right_icon

0xaa49,	// (0x00092f8c) list_medium_line_right_iconx2

0xaa49,	// (0x00092f8c) list_medium_line_t2

0xaa49,	// (0x00092f8c) list_medium_line_t2_g2

0xaa49,	// (0x00092f8c) list_medium_line_t2_g3

0xaa49,	// (0x00092f8c) list_medium_line_t2_right_icon

0xaa49,	// (0x00092f8c) list_medium_line_t2_right_iconx2

0xaa49,	// (0x00092f8c) list_medium_line_t3

0xaa49,	// (0x00092f8c) list_medium_line_t3_g2

0xaa49,	// (0x00092f8c) list_medium_line_t3_g3

0xaa49,	// (0x00092f8c) list_medium_line_t3_right_iconx2

0xaa49,	// (0x00092f8c) list_medium_line_t4_g4

0xaa49,	// (0x00092f8c) list_medium_line_x2

0xaa49,	// (0x00092f8c) list_medium_line_x2_t2_g2

0xaa49,	// (0x00092f8c) list_medium_line_x2_t2_g3

0xaa49,	// (0x00092f8c) list_medium_line_x2_t2_g4

0xaa49,	// (0x00092f8c) list_medium_line_x2_t3

0xaa49,	// (0x00092f8c) list_medium_line_x2_t3_g2

0xaa49,	// (0x00092f8c) list_medium_line_x2_t3_g3

0xaa49,	// (0x00092f8c) list_medium_line_x2_t3_g4

0xaa49,	// (0x00092f8c) list_medium_line_x2_t4_g2

0xaa49,	// (0x00092f8c) list_medium_line_x2_t4_g4

0xaa49,	// (0x00092f8c) list_medium_line_x3

0xaa49,	// (0x00092f8c) list_medium_line_x3_t4

0xaa49,	// (0x00092f8c) list_medium_line_x3_t4_g4

0xaa49,	// (0x00092f8c) list_medium_line_x4_t4

0xaa49,	// (0x00092f8c) list_medium_line_x4_t4_g7

0xaa49,	// (0x00092f8c) list_medium_line_x4_t5

0x7a90,	// (0x0008ffd3) list_single_fs_dyc_pane_ParamLimits

0x7a90,	// (0x0008ffd3) list_single_fs_dyc_pane

0xc488,	// (0x000949cb) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x4_t4_g7_g1

0xc488,	// (0x000949cb) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x4_t4_g7_g2

0xc488,	// (0x000949cb) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x4_t4_g7_g3

0xc488,	// (0x000949cb) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x4_t4_g7_g4

0xc488,	// (0x000949cb) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x4_t4_g7_g5

0xc488,	// (0x000949cb) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x4_t4_g7_g6

0xc496,	// (0x000949d9) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc496,	// (0x000949d9) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb06,	// (0x00098049) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb06,	// (0x00098049) list_medium_line_x4_t4_g7_g

0xc4d0,	// (0x00094a13) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x4_t4_g7_t1

0xc4d0,	// (0x00094a13) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x4_t4_g7_t2

0xc4d0,	// (0x00094a13) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x4_t4_g7_t3

0xc4e4,	// (0x00094a27) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc4e4,	// (0x00094a27) list_medium_line_x4_t4_g7_t4

0xc4e4,	// (0x00094a27) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc4e4,	// (0x00094a27) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb15,	// (0x00098058) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb15,	// (0x00098058) list_medium_line_x4_t4_g7_t

0x81d1,	// (0x00090714) list_single_dyc_row_pane_ParamLimits

0x81d1,	// (0x00090714) list_single_dyc_row_pane

0x86be,	// (0x00090c01) call5_gesture_pane_ParamLimits

0x86be,	// (0x00090c01) call5_gesture_pane

0x86f2,	// (0x00090c35) call5_windows_pane_ParamLimits

0x86f2,	// (0x00090c35) call5_windows_pane

0x8745,	// (0x00090c88) call5_swipe_1_pane_cp_ParamLimits

0x8745,	// (0x00090c88) call5_swipe_1_pane_cp

0x8751,	// (0x00090c94) call5_swipe_2_pane_cp_ParamLimits

0x8751,	// (0x00090c94) call5_swipe_2_pane_cp

0xc6ed,	// (0x00094c30) call5_image_pane_cp

0x875d,	// (0x00090ca0) popup_call5_audio_first_window_cp_ParamLimits

0x875d,	// (0x00090ca0) popup_call5_audio_first_window_cp

0xb248,	// (0x0009378b) call5_swipe_1_pane_g1_cp_ParamLimits

0xb248,	// (0x0009378b) call5_swipe_1_pane_g1_cp

0xb255,	// (0x00093798) call5_swipe_1_pane_g2_cp

0xb25d,	// (0x000937a0) call5_swipe_1_pane_t1_cp_ParamLimits

0xb25d,	// (0x000937a0) call5_swipe_1_pane_t1_cp

0xb248,	// (0x0009378b) call5_swipe_2_pane_g1_cp_ParamLimits

0xb248,	// (0x0009378b) call5_swipe_2_pane_g1_cp

0xb272,	// (0x000937b5) call5_swipe_2_pane_g2_cp

0xb27a,	// (0x000937bd) call5_swipe_2_pane_t1_cp_ParamLimits

0xb27a,	// (0x000937bd) call5_swipe_2_pane_t1_cp

0xc090,	// (0x000945d3) main_sp_fs_email_pane

0xb28f,	// (0x000937d2) main_sp_fs_listscroll_pane_te

0x876b,	// (0x00090cae) popup_sp_fs_action_menu_pane_ParamLimits

0x876b,	// (0x00090cae) popup_sp_fs_action_menu_pane

0xc4c6,	// (0x00094a09) bg_sp_fs_ctrlbar_pane_g1

0xb298,	// (0x000937db) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xb2a1,	// (0x000937e4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe473,	// (0x000969b6) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc4c6,	// (0x00094a09) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc03,	// (0x00098146) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe3d4,	// (0x00096917) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe3d4,	// (0x00096917) bg_sp_fs_ctrlbar_ddmenu_pane

0xb2aa,	// (0x000937ed) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xb2aa,	// (0x000937ed) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xb2b6,	// (0x000937f9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xb2b6,	// (0x000937f9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc0c,	// (0x0009814f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc0c,	// (0x0009814f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xb2c2,	// (0x00093805) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xb2c2,	// (0x00093805) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc4c6,	// (0x00094a09) list_medium_line_t2_right_icon_g1

0xcc1c,	// (0x0009515f) list_medium_line_t2_right_icon_t1

0xcc1c,	// (0x0009515f) list_medium_line_t2_right_icon_t2

0x0001,

0xfc11,	// (0x00098154) list_medium_line_t2_right_icon_t

0xd338,	// (0x0009587b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd338,	// (0x0009587b) bg_sp_fs_ctrlbar_pane

0x87f2,	// (0x00090d35) main_sp_fs_ctrlbar_button_pane_cp01

0x87fa,	// (0x00090d3d) main_sp_fs_ctrlbar_ddmenu_pane

0xb314,	// (0x00093857) main_sp_fs_ctrlbar_pane_g1

0xb320,	// (0x00093863) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc16,	// (0x00098159) main_sp_fs_ctrlbar_pane_g

0x8836,	// (0x00090d79) main_sp_fs_ctrlbar_pane_t1

0x8871,	// (0x00090db4) main_sp_fs_ctrlbar_pane

0x8887,	// (0x00090dca) main_sp_fs_listscroll_pane_te_cp01

0x88a2,	// (0x00090de5) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x88a2,	// (0x00090de5) popup_sp_fs_action_menu_pane_cp01

0xc090,	// (0x000945d3) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc090,	// (0x000945d3) bg_sp_fs_highlight_list_pane_cp01

0x01c8,	// (0x0008870b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x01c8,	// (0x0008870b) sp_fs_action_menu_list_gene_pane_g1

0xb347,	// (0x0009388a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xb347,	// (0x0009388a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc24,	// (0x00098167) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc24,	// (0x00098167) sp_fs_action_menu_list_gene_pane_g

0x01d7,	// (0x0008871a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x01d7,	// (0x0008871a) sp_fs_action_menu_list_gene_pane_t1

0x01ef,	// (0x00088732) sp_fs_action_menu_list_gene_pane_ParamLimits

0x01ef,	// (0x00088732) sp_fs_action_menu_list_gene_pane

0xb354,	// (0x00093897) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xb354,	// (0x00093897) popup_sp_fs_action_menu_bg_pane

0x020e,	// (0x00088751) sp_fs_action_menu_list_pane_ParamLimits

0x020e,	// (0x00088751) sp_fs_action_menu_list_pane

0x88c2,	// (0x00090e05) sp_fs_scroll_pane_cp01_ParamLimits

0x88c2,	// (0x00090e05) sp_fs_scroll_pane_cp01

0xcc1c,	// (0x0009515f) list_medium_line_plain_t2_t1

0xcc1c,	// (0x0009515f) list_medium_line_plain_t2_t2

0x0001,

0xfc11,	// (0x00098154) list_medium_line_plain_t2_t

0xcc1c,	// (0x0009515f) list_medium_line_plain_t3_t1

0xcc1c,	// (0x0009515f) list_medium_line_plain_t3_t2

0xcc1c,	// (0x0009515f) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x000977bf) list_medium_line_plain_t3_t

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g2_g1

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x000976ff) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x000976ff) list_medium_line_x2_t2_g2_g

0xc4d0,	// (0x00094a13) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t2_g2_t1

0xc4d0,	// (0x00094a13) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t2_g2_t2

0x0001,

0xf231,	// (0x00097774) list_medium_line_x2_t2_g2_t_ParamLimits

0xf231,	// (0x00097774) list_medium_line_x2_t2_g2_t

0xc488,	// (0x000949cb) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t4_g2_g1

0xc488,	// (0x000949cb) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x000976ff) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x000976ff) list_medium_line_x2_t4_g2_g

0xc4d0,	// (0x00094a13) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t4_g2_t1

0xc4d0,	// (0x00094a13) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t4_g2_t2

0xc4d0,	// (0x00094a13) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t4_g2_t3

0xc4d0,	// (0x00094a13) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x0009770d) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x0009770d) list_medium_line_x2_t4_g2_t

0xc4c6,	// (0x00094a09) list_medium_line_t3_right_iconx2_g1

0xc4c6,	// (0x00094a09) list_medium_line_t3_right_iconx2_g2

0xc4c6,	// (0x00094a09) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf398,	// (0x000978db) list_medium_line_t3_right_iconx2_g

0xcc1c,	// (0x0009515f) list_medium_line_t3_right_iconx2_t1

0xcc1c,	// (0x0009515f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc11,	// (0x00098154) list_medium_line_t3_right_iconx2_t

0xc488,	// (0x000949cb) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x3_t4_g4_g1

0xc488,	// (0x000949cb) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x3_t4_g4_g2

0xc488,	// (0x000949cb) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x3_t4_g4_g3

0xc488,	// (0x000949cb) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x00097704) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x00097704) list_medium_line_x3_t4_g4_g

0xc4d0,	// (0x00094a13) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x3_t4_g4_t1

0xc4d0,	// (0x00094a13) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x3_t4_g4_t2

0xc4d0,	// (0x00094a13) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x3_t4_g4_t3

0xc4d0,	// (0x00094a13) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x0009770d) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x0009770d) list_medium_line_x3_t4_g4_t

0x88e8,	// (0x00090e2b) list_single_dyc_row_text_pane_t1_ParamLimits

0x88e8,	// (0x00090e2b) list_single_dyc_row_text_pane_t1

0x891f,	// (0x00090e62) list_single_dyc_row_text_pane_t2_ParamLimits

0x891f,	// (0x00090e62) list_single_dyc_row_text_pane_t2

0x022e,	// (0x00088771) list_single_dyc_row_text_pane_t3_ParamLimits

0x022e,	// (0x00088771) list_single_dyc_row_text_pane_t3

0x0005,

0xfc29,	// (0x0009816c) list_single_dyc_row_text_pane_t_ParamLimits

0xfc29,	// (0x0009816c) list_single_dyc_row_text_pane_t

0x0252,	// (0x00088795) list_single_dyc_row_pane_g1_ParamLimits

0x0252,	// (0x00088795) list_single_dyc_row_pane_g1

0x025e,	// (0x000887a1) list_single_dyc_row_pane_g2_ParamLimits

0x025e,	// (0x000887a1) list_single_dyc_row_pane_g2

0x026a,	// (0x000887ad) list_single_dyc_row_pane_g3_ParamLimits

0x026a,	// (0x000887ad) list_single_dyc_row_pane_g3

0x0276,	// (0x000887b9) list_single_dyc_row_pane_g4_ParamLimits

0x0276,	// (0x000887b9) list_single_dyc_row_pane_g4

0x0003,

0xfc36,	// (0x00098179) list_single_dyc_row_pane_g_ParamLimits

0xfc36,	// (0x00098179) list_single_dyc_row_pane_g

0x0282,	// (0x000887c5) list_single_dyc_row_text_pane_ParamLimits

0x0282,	// (0x000887c5) list_single_dyc_row_text_pane

0xaa49,	// (0x00092f8c) bg_sp_fs_scroll_pane

0xb362,	// (0x000938a5) thumb_sp_fs_scroll_pane

0xc488,	// (0x000949cb) list_medium_line_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_g1

0xc4d0,	// (0x00094a13) list_medium_line_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t1

0xc488,	// (0x000949cb) list_medium_line_x2_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_g1

0xc488,	// (0x000949cb) list_medium_line_x2_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x000976ff) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x000976ff) list_medium_line_x2_g

0xc4d0,	// (0x00094a13) list_medium_line_x2_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t1

0xc488,	// (0x000949cb) list_medium_line_x3_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x3_g1

0xaa73,	// (0x00092fb6) list_medium_line_x3_g2_ParamLimits

0xaa73,	// (0x00092fb6) list_medium_line_x3_g2

0x0001,

0xfc3f,	// (0x00098182) list_medium_line_x3_g_ParamLimits

0xfc3f,	// (0x00098182) list_medium_line_x3_g

0xb36b,	// (0x000938ae) list_medium_line_x3_t1_ParamLimits

0xb36b,	// (0x000938ae) list_medium_line_x3_t1

0xb37f,	// (0x000938c2) thumb_sp_fs_scroll_pane_g1

0xb388,	// (0x000938cb) thumb_sp_fs_scroll_pane_g2

0xb391,	// (0x000938d4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc44,	// (0x00098187) thumb_sp_fs_scroll_pane_g

0xb37f,	// (0x000938c2) bg_sp_fs_scroll_pane_g1

0xb388,	// (0x000938cb) bg_sp_fs_scroll_pane_g2

0xb391,	// (0x000938d4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc44,	// (0x00098187) bg_sp_fs_scroll_pane_g

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g4_g1

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g4_g2

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g4_g3

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x00097704) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x00097704) list_medium_line_x2_t3_g4_g

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g4_t1

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g4_t2

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x000976f8) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x000976f8) list_medium_line_x2_t3_g4_t

0xc488,	// (0x000949cb) list_medium_line_g2_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_g2_g1

0xc488,	// (0x000949cb) list_medium_line_g2_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x000976ff) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x000976ff) list_medium_line_g2_g

0xc4d0,	// (0x00094a13) list_medium_line_g2_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_g2_t1

0xc488,	// (0x000949cb) list_medium_line_t3_g2_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_t3_g2_g1

0xc488,	// (0x000949cb) list_medium_line_t3_g2_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x000976ff) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x000976ff) list_medium_line_t3_g2_g

0xc4d0,	// (0x00094a13) list_medium_line_t3_g2_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t3_g2_t1

0xc4d0,	// (0x00094a13) list_medium_line_t3_g2_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t3_g2_t2

0xc4d0,	// (0x00094a13) list_medium_line_t3_g2_t3_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x000976f8) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x000976f8) list_medium_line_t3_g2_t

0xc4c6,	// (0x00094a09) list_medium_line_right_icon_g1

0xcc1c,	// (0x0009515f) list_medium_line_right_icon_t1

0xc488,	// (0x000949cb) list_medium_line_t2_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_t2_g1

0xc4d0,	// (0x00094a13) list_medium_line_t2_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t2_t1

0xc4d0,	// (0x00094a13) list_medium_line_t2_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t2_t2

0x0001,

0xf231,	// (0x00097774) list_medium_line_t2_t_ParamLimits

0xf231,	// (0x00097774) list_medium_line_t2_t

0xc488,	// (0x000949cb) list_medium_line_t3_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_t3_g1

0xc4d0,	// (0x00094a13) list_medium_line_t3_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t3_t1

0xc4d0,	// (0x00094a13) list_medium_line_t3_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t3_t2

0xc4d0,	// (0x00094a13) list_medium_line_t3_t3_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x000976f8) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x000976f8) list_medium_line_t3_t

0xc488,	// (0x000949cb) list_medium_line_g3_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_g3_g1

0xc488,	// (0x000949cb) list_medium_line_g3_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_g3_g2

0xc488,	// (0x000949cb) list_medium_line_g3_g3_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x000976f1) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x000976f1) list_medium_line_g3_g

0xc4d0,	// (0x00094a13) list_medium_line_g3_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_g3_t1

0xc488,	// (0x000949cb) list_medium_line_t2_g3_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_t2_g3_g1

0xc488,	// (0x000949cb) list_medium_line_t2_g3_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_t2_g3_g2

0xc488,	// (0x000949cb) list_medium_line_t2_g3_g3_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x000976f1) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x000976f1) list_medium_line_t2_g3_g

0xc4d0,	// (0x00094a13) list_medium_line_t2_g3_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t2_g3_t1

0xc4d0,	// (0x00094a13) list_medium_line_t2_g3_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t2_g3_t2

0x0001,

0xf231,	// (0x00097774) list_medium_line_t2_g3_t_ParamLimits

0xf231,	// (0x00097774) list_medium_line_t2_g3_t

0xc488,	// (0x000949cb) list_medium_line_t3_g3_g1_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_t3_g3_g1

0xc488,	// (0x000949cb) list_medium_line_t3_g3_g2_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_t3_g3_g2

0xc488,	// (0x000949cb) list_medium_line_t3_g3_g3_ParamLimits

0xc488,	// (0x000949cb) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x000976f1) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x000976f1) list_medium_line_t3_g3_g

0xc4d0,	// (0x00094a13) list_medium_line_t3_g3_t1_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t3_g3_t1

0xc4d0,	// (0x00094a13) list_medium_line_t3_g3_t2_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t3_g3_t2

0xc4d0,	// (0x00094a13) list_medium_line_t3_g3_t3_ParamLimits

0xc4d0,	// (0x00094a13) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x000976f8) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x000976f8) list_medium_line_t3_g3_t

0xc4c6,	// (0x00094a09) list_medium_line_right_iconx2_g1

0xc4c6,	// (0x00094a09) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x000975f2) list_medium_line_right_iconx2_g

0xcc1c,	// (0x0009515f) list_medium_line_right_iconx2_t1

0xc4c6,	// (0x00094a09) list_medium_line_t2_right_iconx2_g1

0xc4c6,	// (0x00094a09) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x000975f2) list_medium_line_t2_right_iconx2_g

0xcc1c,	// (0x0009515f) list_medium_line_t2_right_iconx2_t1

0xcc1c,	// (0x0009515f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc11,	// (0x00098154) list_medium_line_t2_right_iconx2_t

0xcc1c,	// (0x0009515f) list_medium_line_x4_t4_t1

0xcc1c,	// (0x0009515f) list_medium_line_x4_t4_t2

0xcc1c,	// (0x0009515f) list_medium_line_x4_t4_t3

0xcc1c,	// (0x0009515f) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x000977c6) list_medium_line_x4_t4_t

0x8a6c,	// (0x00090faf) tport_appsw_pane_ParamLimits

0x8a6c,	// (0x00090faf) tport_appsw_pane

0x8a7a,	// (0x00090fbd) tport_contact_pane_ParamLimits

0x8a7a,	// (0x00090fbd) tport_contact_pane

0x8a8a,	// (0x00090fcd) tport_listscroll_pane_ParamLimits

0x8a8a,	// (0x00090fcd) tport_listscroll_pane

0x8a9a,	// (0x00090fdd) cell_tport_appsw_pane_ParamLimits

0x8a9a,	// (0x00090fdd) cell_tport_appsw_pane

0xc496,	// (0x000949d9) tport_appsw_pane_g1_ParamLimits

0xc496,	// (0x000949d9) tport_appsw_pane_g1

0xb39a,	// (0x000938dd) tport_contact_pane_g1

0xb3a3,	// (0x000938e6) tport_contact_pane_t1

0xb3b1,	// (0x000938f4) tport_contact_pane_t2

0x0001,

0xfc4b,	// (0x0009818e) tport_contact_pane_t

0xb3bf,	// (0x00093902) list_tport_pane

0xb3c8,	// (0x0009390b) scroll_pane_cp_030

0x8acd,	// (0x00091010) cell_tport_appsw_pane_g1

0x8add,	// (0x00091020) cell_tport_appsw_pane_t1

0x8aeb,	// (0x0009102e) grid_highlight_pane_cp019

0x8af3,	// (0x00091036) list_tport_double_graphic_pane_ParamLimits

0x8af3,	// (0x00091036) list_tport_double_graphic_pane

0xc090,	// (0x000945d3) list_highlight_pane_cp023_ParamLimits

0xc090,	// (0x000945d3) list_highlight_pane_cp023

0x8b04,	// (0x00091047) list_tport_double_graphic_pane_g1_ParamLimits

0x8b04,	// (0x00091047) list_tport_double_graphic_pane_g1

0x8b11,	// (0x00091054) list_tport_double_graphic_pane_t1_ParamLimits

0x8b11,	// (0x00091054) list_tport_double_graphic_pane_t1

0x8b26,	// (0x00091069) list_tport_double_graphic_pane_t2_ParamLimits

0x8b26,	// (0x00091069) list_tport_double_graphic_pane_t2

0x0001,

0xfc57,	// (0x0009819a) list_tport_double_graphic_pane_t_ParamLimits

0xfc57,	// (0x0009819a) list_tport_double_graphic_pane_t

0xaa49,	// (0x00092f8c) main_cale_note_pane

0x6be0,	// (0x0008f123) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6be0,	// (0x0008f123) cell_vitu2_function_top_wide_pane_cp01

0x8578,	// (0x00090abb) wait_bar_pane_cp05_ParamLimits

0xc090,	// (0x000945d3) listscroll_cmail_pane

0xb3d9,	// (0x0009391c) list_cmail_pane

0x8b38,	// (0x0009107b) list_cmail_body_pane

0x8b60,	// (0x000910a3) list_single_cmail_header_caption_pane

0x8b8f,	// (0x000910d2) list_single_cmail_header_detail_pane_ParamLimits

0x8b8f,	// (0x000910d2) list_single_cmail_header_detail_pane

0xb3f0,	// (0x00093933) list_single_cmail_header_caption_pane_t1

0x8bcc,	// (0x0009110f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8bcc,	// (0x0009110f) list_single_cmail_header_detail_pane_g1

0x0d8e,	// (0x000892d1) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0d8e,	// (0x000892d1) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc5c,	// (0x0009819f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc5c,	// (0x0009819f) list_single_cmail_header_detail_pane_g

0x8be2,	// (0x00091125) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8be2,	// (0x00091125) list_single_cmail_header_detail_pane_t1

0x8c1e,	// (0x00091161) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8c1e,	// (0x00091161) list_single_cmail_header_editor_pane_bg

0xaefb,	// (0x0009343e) list_cmail_body_pane_g1

0xb414,	// (0x00093957) list_cmail_body_pane_t1

0x0b08,	// (0x0008904b) list_single_cmail_header_editor_pane_bg_g1

0xc906,	// (0x00094e49) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0b18,	// (0x0008905b) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0b10,	// (0x00089053) list_single_cmail_header_editor_pane_bg_g1_copy3

0x0e76,	// (0x000893b9) list_single_cmail_header_editor_pane_bg_g1_copy4

0x0b38,	// (0x0008907b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x0b28,	// (0x0008906b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0b30,	// (0x00089073) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc8e6,	// (0x00094e29) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c35,	// (0x00091178) calenote_gesture_pane_ParamLimits

0x8c35,	// (0x00091178) calenote_gesture_pane

0x8c4f,	// (0x00091192) calenote_window_pane_ParamLimits

0x8c4f,	// (0x00091192) calenote_window_pane

0xb422,	// (0x00093965) popup_note_window_cp01

0x8c67,	// (0x000911aa) calenote_swipe_1_pane_ParamLimits

0x8c67,	// (0x000911aa) calenote_swipe_1_pane

0x8751,	// (0x00090c94) calenote_swipe_2_pane_ParamLimits

0x8751,	// (0x00090c94) calenote_swipe_2_pane

0xb248,	// (0x0009378b) calenote_swipe_1_pane_g1_ParamLimits

0xb248,	// (0x0009378b) calenote_swipe_1_pane_g1

0xb434,	// (0x00093977) calenote_swipe_1_pane_g2_ParamLimits

0xb434,	// (0x00093977) calenote_swipe_1_pane_g2

0x0001,

0xfc68,	// (0x000981ab) calenote_swipe_1_pane_g_ParamLimits

0xfc68,	// (0x000981ab) calenote_swipe_1_pane_g

0xb440,	// (0x00093983) calenote_swipe_1_pane_t1_ParamLimits

0xb440,	// (0x00093983) calenote_swipe_1_pane_t1

0xb248,	// (0x0009378b) calenote_swipe_2_pane_g1_ParamLimits

0xb248,	// (0x0009378b) calenote_swipe_2_pane_g1

0xb45f,	// (0x000939a2) calenote_swipe_2_pane_g2_ParamLimits

0xb45f,	// (0x000939a2) calenote_swipe_2_pane_g2

0x0001,

0xfc6d,	// (0x000981b0) calenote_swipe_2_pane_g_ParamLimits

0xfc6d,	// (0x000981b0) calenote_swipe_2_pane_g

0xb46b,	// (0x000939ae) calenote_swipe_2_pane_t1_ParamLimits

0xb46b,	// (0x000939ae) calenote_swipe_2_pane_t1

0xaa49,	// (0x00092f8c) main_mup_navstr_pane

0x5a7a,	// (0x0008dfbd) main_mup3_pane_t7_ParamLimits

0x5a7a,	// (0x0008dfbd) main_mup3_pane_t7

0x62af,	// (0x0008e7f2) main_mp4_pane_g6_ParamLimits

0x62af,	// (0x0008e7f2) main_mp4_pane_g6

0x6623,	// (0x0008eb66) main_image3_pane_t4_ParamLimits

0x6623,	// (0x0008eb66) main_image3_pane_t4

0x8c7a,	// (0x000911bd) popup_navstr_preview_pane_ParamLimits

0x8c7a,	// (0x000911bd) popup_navstr_preview_pane

0x8c86,	// (0x000911c9) scroll_navstr_pane_ParamLimits

0x8c86,	// (0x000911c9) scroll_navstr_pane

0xaa49,	// (0x00092f8c) bg_popup_preview_window_pane_cp04

0xb492,	// (0x000939d5) popup_navstr_preview_pane_t1

0x8c92,	// (0x000911d5) scroll_navstr_pane_g1_ParamLimits

0x8c92,	// (0x000911d5) scroll_navstr_pane_g1

0x8c9f,	// (0x000911e2) scroll_navstr_pane_t1_ParamLimits

0x8c9f,	// (0x000911e2) scroll_navstr_pane_t1

0xb42b,	// (0x0009396e) bg_button_pane_cp014

0xb42b,	// (0x0009396e) bg_button_pane_cp030

0x01ab,	// (0x000886ee) list_double_fisheye_pane_g4_ParamLimits

0x01ab,	// (0x000886ee) list_double_fisheye_pane_g4

0x01b7,	// (0x000886fa) list_double_fisheye_pane_g5_ParamLimits

0x01b7,	// (0x000886fa) list_double_fisheye_pane_g5

0x1272,	// (0x000897b5) sp_fs_scroll_pane_cp03

0xb314,	// (0x00093857) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xb320,	// (0x00093863) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc16,	// (0x00098159) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8836,	// (0x00090d79) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb3e8,	// (0x0009392b) sp_fs_scroll_pane_cp02

0xc635,	// (0x00094b78) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc635,	// (0x00094b78) popup_sp_fs_calendar_preview_list_single_pane

0xaa49,	// (0x00092f8c) main_cam6_pano_pane

0x4fef,	// (0x0008d532) main_mup3_pane_ParamLimits

0xaa49,	// (0x00092f8c) main_phacti_pane

0x844d,	// (0x00090990) bg_button_pane_cp11

0x8465,	// (0x000909a8) main_mobtv_info_pane_g2_ParamLimits

0x8465,	// (0x000909a8) main_mobtv_info_pane_g2

0x0001,

0xfb76,	// (0x000980b9) main_mobtv_info_pane_g_ParamLimits

0xfb76,	// (0x000980b9) main_mobtv_info_pane_g

0xc4e4,	// (0x00094a27) sc_clock_pane_t5_ParamLimits

0xc4e4,	// (0x00094a27) sc_clock_pane_t5

0xd406,	// (0x00095949) main_radioblah_pane_g1_ParamLimits

0xd3f2,	// (0x00095935) main_radioblah_pane_t3_ParamLimits

0xd3f2,	// (0x00095935) main_radioblah_pane_t3

0xd3f2,	// (0x00095935) main_radioblah_pane_t4_ParamLimits

0xd3f2,	// (0x00095935) main_radioblah_pane_t4

0xc47a,	// (0x000949bd) main_radioblah_text_pane_ParamLimits

0xc47a,	// (0x000949bd) main_radioblah_text_pane

0xb140,	// (0x00093683) main_radioblah_info_pane_g1_ParamLimits

0xb184,	// (0x000936c7) main_radioblah_info_pane_t4_ParamLimits

0xb184,	// (0x000936c7) main_radioblah_info_pane_t4

0xc090,	// (0x000945d3) main_sp_fs_calendar_pane

0x8cb1,	// (0x000911f4) main_phacti_pane_g1

0x8cb9,	// (0x000911fc) phacti_note_pane_ParamLimits

0x8cb9,	// (0x000911fc) phacti_note_pane

0xb4a9,	// (0x000939ec) phacti_term_pane_ParamLimits

0xb4a9,	// (0x000939ec) phacti_term_pane

0xb4be,	// (0x00093a01) phacti_note_pane_t1_ParamLimits

0xb4be,	// (0x00093a01) phacti_note_pane_t1

0x02c5,	// (0x00088808) phacti_term_pane_g1

0x02cd,	// (0x00088810) phacti_term_pane_t1_ParamLimits

0x02cd,	// (0x00088810) phacti_term_pane_t1

0xb4d5,	// (0x00093a18) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb4dd,	// (0x00093a20) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc77,	// (0x000981ba) popup_sp_fs_calendar_preview_list_single_pane_g

0xb4e5,	// (0x00093a28) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb4e5,	// (0x00093a28) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb4fb,	// (0x00093a3e) aid_popup_sp_fs_bg_corner_pane

0xc4c6,	// (0x00094a09) popup_sp_fs_calendar_preview_bg_pane_g1

0xaa49,	// (0x00092f8c) popup_sp_fs_calendar_preview_bg_pane

0xb503,	// (0x00093a46) popup_sp_fs_calendar_preview_list_pane

0xd338,	// (0x0009587b) bg_main_sp_fs_cale_pane_ParamLimits

0xd338,	// (0x0009587b) bg_main_sp_fs_cale_pane

0x0300,	// (0x00088843) listscroll_cale_mrui_pane_ParamLimits

0x0300,	// (0x00088843) listscroll_cale_mrui_pane

0x0315,	// (0x00088858) listscroll_sp_fs_schedule_track_pane

0x031e,	// (0x00088861) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x031e,	// (0x00088861) main_sp_fs_ctrlbar_pane_cp01

0xb50b,	// (0x00093a4e) main_sp_fs_ribbon_pane

0x0331,	// (0x00088874) popup_sp_fs_cale_preview_window

0x8d1c,	// (0x0009125f) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d1c,	// (0x0009125f) list_single_sp_fs_schedule_track_pane

0xc47a,	// (0x000949bd) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xc47a,	// (0x000949bd) bg_sp_fs_highlight_list_pane_cp03

0x8d42,	// (0x00091285) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d42,	// (0x00091285) list_single_sp_fs_schedule_track_pane_g1

0x8d4e,	// (0x00091291) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d4e,	// (0x00091291) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7c,	// (0x000981bf) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7c,	// (0x000981bf) list_single_sp_fs_schedule_track_pane_g

0x8d5a,	// (0x0009129d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d5a,	// (0x0009129d) list_single_sp_fs_schedule_track_pane_t1

0x8d72,	// (0x000912b5) sp_fs_schedule_track_pane_ParamLimits

0x8d72,	// (0x000912b5) sp_fs_schedule_track_pane

0xb513,	// (0x00093a56) sp_fs_schedule_track_pane_g1

0xb51b,	// (0x00093a5e) sp_fs_schedule_track_pane_g2

0xb523,	// (0x00093a66) sp_fs_schedule_track_pane_g3

0xb52b,	// (0x00093a6e) sp_fs_schedule_track_pane_g4

0xb533,	// (0x00093a76) sp_fs_schedule_track_pane_g5

0x0004,

0xfc81,	// (0x000981c4) sp_fs_schedule_track_pane_g

0x0b08,	// (0x0008904b) bg_sp_fs_schedule_viewer_highlight_g1

0xc906,	// (0x00094e49) bg_sp_fs_schedule_viewer_highlight_g2

0x0b10,	// (0x00089053) bg_sp_fs_schedule_viewer_highlight_g3

0x0b18,	// (0x0008905b) bg_sp_fs_schedule_viewer_highlight_g4

0x0e76,	// (0x000893b9) bg_sp_fs_schedule_viewer_highlight_g5

0x0b28,	// (0x0008906b) bg_sp_fs_schedule_viewer_highlight_g6

0x0b30,	// (0x00089073) bg_sp_fs_schedule_viewer_highlight_g7

0x0b38,	// (0x0008907b) bg_sp_fs_schedule_viewer_highlight_g8

0xc8e6,	// (0x00094e29) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8c,	// (0x000981cf) bg_sp_fs_schedule_viewer_highlight_g

0xaa49,	// (0x00092f8c) bg_main_sp_fs_ribbon_pane

0x8d82,	// (0x000912c5) main_sp_fs_ribbon_pane_g1

0xb53b,	// (0x00093a7e) main_sp_fs_ribbon_pane_t1

0x8d8b,	// (0x000912ce) main_sp_fs_ribbon_pane_t2

0xb54a,	// (0x00093a8d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc9f,	// (0x000981e2) main_sp_fs_ribbon_pane_t

0xb559,	// (0x00093a9c) main_sp_fs_ribbon_scheduler_pane

0xb561,	// (0x00093aa4) bg_main_sp_fs_ribbon_pane_g1

0xb56a,	// (0x00093aad) bg_main_sp_fs_ribbon_pane_g2

0xb573,	// (0x00093ab6) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca6,	// (0x000981e9) bg_main_sp_fs_ribbon_pane_g

0xb57b,	// (0x00093abe) main_sp_fs_ribbon_scheduler_pane_g1

0xb584,	// (0x00093ac7) main_sp_fs_ribbon_scheduler_pane_g2

0xb58d,	// (0x00093ad0) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcad,	// (0x000981f0) main_sp_fs_ribbon_scheduler_pane_g

0xb596,	// (0x00093ad9) list_cale_mrui_pane

0x8d9a,	// (0x000912dd) sp_fs_scroll_pane_cp07_ParamLimits

0x8d9a,	// (0x000912dd) sp_fs_scroll_pane_cp07

0x8db6,	// (0x000912f9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8db6,	// (0x000912f9) bg_sp_fs_schedule_viewer_highlight

0xb5a3,	// (0x00093ae6) list_single_sp_fs_schedule_track_pane_cp01

0xb5ab,	// (0x00093aee) list_sp_fs_schedule_track_pane

0xb5b3,	// (0x00093af6) sp_fs_scroll_pane_cp06_ParamLimits

0xb5b3,	// (0x00093af6) sp_fs_scroll_pane_cp06

0xc4c6,	// (0x00094a09) bgmain_sp_fs_calendar_pane_g1

0x8dc3,	// (0x00091306) list_single_cale_mrui_pane_ParamLimits

0x8dc3,	// (0x00091306) list_single_cale_mrui_pane

0x0343,	// (0x00088886) list_single_cale_mrui_row_pane_ParamLimits

0x0343,	// (0x00088886) list_single_cale_mrui_row_pane

0x0350,	// (0x00088893) list_single_cale_mrui_row_pane_g1_ParamLimits

0x0350,	// (0x00088893) list_single_cale_mrui_row_pane_g1

0x0388,	// (0x000888cb) list_single_cale_mrui_row_pane_t1_ParamLimits

0x0388,	// (0x000888cb) list_single_cale_mrui_row_pane_t1

0x8df1,	// (0x00091334) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8df1,	// (0x00091334) list_single_cale_mrui_row_pane_t2

0x039a,	// (0x000888dd) list_single_cale_mrui_row_pane_t3_ParamLimits

0x039a,	// (0x000888dd) list_single_cale_mrui_row_pane_t3

0x03c9,	// (0x0008890c) list_single_cale_mrui_row_pane_t4_ParamLimits

0x03c9,	// (0x0008890c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbb,	// (0x000981fe) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbb,	// (0x000981fe) list_single_cale_mrui_row_pane_t

0x8e57,	// (0x0009139a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e57,	// (0x0009139a) list_single_cmail_header_editor_pane_bg_cp01

0x8e7f,	// (0x000913c2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e7f,	// (0x000913c2) list_single_cmail_header_editor_pane_bg_cp02

0xb5d2,	// (0x00093b15) main_radioblah_text_pane_t1_ParamLimits

0xb5d2,	// (0x00093b15) main_radioblah_text_pane_t1

0xb5ec,	// (0x00093b2f) cam6_indi_pane_cp01

0xb5f4,	// (0x00093b37) cam6_mode_pane_cp01

0xb5fc,	// (0x00093b3f) cam6_pano_pane

0xb605,	// (0x00093b48) cam6_zoom_pane_cp01

0xb60d,	// (0x00093b50) cam6_pano_image_pane

0xb618,	// (0x00093b5b) cam6_pano_pane_g1

0xaefb,	// (0x0009343e) cam6_pano_pane_g2

0xb621,	// (0x00093b64) cam6_pano_pane_g3

0xb62a,	// (0x00093b6d) cam6_pano_pane_g4

0xeecc,	// (0x0009740f) cam6_pano_pane_g5

0xb633,	// (0x00093b76) cam6_pano_pane_g6

0xb63d,	// (0x00093b80) cam6_pano_pane_g7

0xb645,	// (0x00093b88) cam6_pano_pane_g8

0xb64e,	// (0x00093b91) cam6_pano_pane_g9

0x0008,

0xfcc4,	// (0x00098207) cam6_pano_pane_g

0xaa49,	// (0x00092f8c) main_browser_tag_pane

0xb48a,	// (0x000939cd) grid_navstr_albumart_pane

0xb659,	// (0x00093b9c) cell_navstr_albumart_pane_ParamLimits

0xb659,	// (0x00093b9c) cell_navstr_albumart_pane

0xb679,	// (0x00093bbc) cell_navstr_albumart_pane_g1

0xe2ec,	// (0x0009682f) cell_navstr_albumart_pane_g2

0xe2fc,	// (0x0009683f) cell_navstr_albumart_pane_g3

0xe2f4,	// (0x00096837) cell_navstr_albumart_pane_g4

0x0003,

0xfcd7,	// (0x0009821a) cell_navstr_albumart_pane_g

0x8e9b,	// (0x000913de) bt_list_pane_ParamLimits

0x8e9b,	// (0x000913de) bt_list_pane

0x8ebc,	// (0x000913ff) bt_list_pane_t1

0x8ecb,	// (0x0009140e) bt_list_pane_t2

0x0001,

0xfce0,	// (0x00098223) bt_list_pane_t

0xaa49,	// (0x00092f8c) main_cale_prevew_pane

0x8eda,	// (0x0009141d) popup_cale_preview_window_ParamLimits

0x8eda,	// (0x0009141d) popup_cale_preview_window

0xc090,	// (0x000945d3) bg_popup_preview_window_pane_cp05_ParamLimits

0xc090,	// (0x000945d3) bg_popup_preview_window_pane_cp05

0xb681,	// (0x00093bc4) list_cale_preview_pane_ParamLimits

0xb681,	// (0x00093bc4) list_cale_preview_pane

0x8ef3,	// (0x00091436) list_double_cale_preview_pane_ParamLimits

0x8ef3,	// (0x00091436) list_double_cale_preview_pane

0x8f05,	// (0x00091448) list_single_cale_preview_pane_ParamLimits

0x8f05,	// (0x00091448) list_single_cale_preview_pane

0x8f19,	// (0x0009145c) list_single_cale_preview_pane_g1

0x8f21,	// (0x00091464) list_single_cale_preview_pane_t1_ParamLimits

0x8f21,	// (0x00091464) list_single_cale_preview_pane_t1

0x8f36,	// (0x00091479) list_double_cale_preview_pane_g1

0x8f3e,	// (0x00091481) list_double_cale_preview_pane_t1_ParamLimits

0x8f3e,	// (0x00091481) list_double_cale_preview_pane_t1

0x8f53,	// (0x00091496) list_double_cale_preview_pane_t2_ParamLimits

0x8f53,	// (0x00091496) list_double_cale_preview_pane_t2

0x0001,

0xfce5,	// (0x00098228) list_double_cale_preview_pane_t_ParamLimits

0xfce5,	// (0x00098228) list_double_cale_preview_pane_t

0xaa49,	// (0x00092f8c) main_ezdial_pane

0xc090,	// (0x000945d3) main_sp_fs_email_pane_ParamLimits

0x87af,	// (0x00090cf2) cmail_ddmenu_btn01_pane_ParamLimits

0x87af,	// (0x00090cf2) cmail_ddmenu_btn01_pane

0x87c4,	// (0x00090d07) cmail_ddmenu_btn02_pane_ParamLimits

0x87c4,	// (0x00090d07) cmail_ddmenu_btn02_pane

0x87dc,	// (0x00090d1f) cmail_ddmenu_btn03_pane_ParamLimits

0x87dc,	// (0x00090d1f) cmail_ddmenu_btn03_pane

0x8871,	// (0x00090db4) main_sp_fs_ctrlbar_pane_ParamLimits

0x8887,	// (0x00090dca) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b38,	// (0x0009107b) list_cmail_body_pane_ParamLimits

0xb3fe,	// (0x00093941) bg_button_pane_cp12

0xb407,	// (0x0009394a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb407,	// (0x0009394a) list_single_cmail_header_detail_pane_g3

0x02a1,	// (0x000887e4) list_single_cmail_header_detail_pane_t2_ParamLimits

0x02a1,	// (0x000887e4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc63,	// (0x000981a6) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc63,	// (0x000981a6) list_single_cmail_header_detail_pane_t

0x02e2,	// (0x00088825) phacti_term_pane_t2_ParamLimits

0x02e2,	// (0x00088825) phacti_term_pane_t2

0x0001,

0xfc72,	// (0x000981b5) phacti_term_pane_t_ParamLimits

0xfc72,	// (0x000981b5) phacti_term_pane_t

0xb68d,	// (0x00093bd0) aid_size_list_single_double

0x8f6b,	// (0x000914ae) popup_ezdial_listscroll_window

0xb699,	// (0x00093bdc) popup_number_entry_window_cp01

0xc6ed,	// (0x00094c30) bg_popup_call_pane_cp09

0xb6a6,	// (0x00093be9) ezdial_list_pane

0xb6ae,	// (0x00093bf1) scroll_pane_cp23

0xe3d4,	// (0x00096917) bg_button_pane_cp028_ParamLimits

0xe3d4,	// (0x00096917) bg_button_pane_cp028

0x8f84,	// (0x000914c7) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f84,	// (0x000914c7) cmail_ddmenu_btn01_pane_g1

0x8f94,	// (0x000914d7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f94,	// (0x000914d7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcea,	// (0x0009822d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcea,	// (0x0009822d) cmail_ddmenu_btn01_pane_g

0xb6b6,	// (0x00093bf9) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb6b6,	// (0x00093bf9) cmail_ddmenu_btn01_pane_t1

0xd338,	// (0x0009587b) bg_button_pane_cp029_ParamLimits

0xd338,	// (0x0009587b) bg_button_pane_cp029

0x8f94,	// (0x000914d7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8f94,	// (0x000914d7) cmail_ddmenu_btn02_pane_g1

0x8fac,	// (0x000914ef) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8fac,	// (0x000914ef) cmail_ddmenu_btn02_pane_t1

0xc47a,	// (0x000949bd) bg_button_pane_cp031_ParamLimits

0xc47a,	// (0x000949bd) bg_button_pane_cp031

0x8f94,	// (0x000914d7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8f94,	// (0x000914d7) cmail_ddmenu_btn03_pane_g1

0x8fac,	// (0x000914ef) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8fac,	// (0x000914ef) cmail_ddmenu_btn03_pane_t1

0xc4d0,	// (0x00094a13) cell_dialer2_keypad_pane_t1_ParamLimits

0xedc1,	// (0x00097304) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xedc1,	// (0x00097304) cell_dialer2_keypad_pane_t1_copy1

0x828e,	// (0x000907d1) ncimui_group_button_pane

0xc090,	// (0x000945d3) main_sp_fs_calendar_pane_ParamLimits

0x8b60,	// (0x000910a3) list_single_cmail_header_caption_pane_ParamLimits

0x02f7,	// (0x0008883a) aid_recal_txt_sm_pane

0xaa49,	// (0x00092f8c) mian_recal_day_pane

0x0331,	// (0x00088874) popup_sp_fs_cale_preview_window_ParamLimits

0xb6cb,	// (0x00093c0e) list_recal_day_pane

0x0413,	// (0x00088956) list_single_recal_day_pane_ParamLimits

0x0413,	// (0x00088956) list_single_recal_day_pane

0xb6f2,	// (0x00093c35) list_single_recal_day_pane_g1_ParamLimits

0xb6f2,	// (0x00093c35) list_single_recal_day_pane_g1

0x0425,	// (0x00088968) list_single_recal_day_pane_g2_ParamLimits

0x0425,	// (0x00088968) list_single_recal_day_pane_g2

0x0431,	// (0x00088974) list_single_recal_day_pane_g3_ParamLimits

0x0431,	// (0x00088974) list_single_recal_day_pane_g3

0x8fd0,	// (0x00091513) list_single_recal_day_pane_g4_ParamLimits

0x8fd0,	// (0x00091513) list_single_recal_day_pane_g4

0x043d,	// (0x00088980) list_single_recal_day_pane_g5_ParamLimits

0x043d,	// (0x00088980) list_single_recal_day_pane_g5

0x0449,	// (0x0008898c) list_single_recal_day_pane_g6_ParamLimits

0x0449,	// (0x0008898c) list_single_recal_day_pane_g6

0x0004,

0xfcf9,	// (0x0009823c) list_single_recal_day_pane_g_ParamLimits

0xfcf9,	// (0x0009823c) list_single_recal_day_pane_g

0x045d,	// (0x000889a0) list_single_recal_day_pane_t1

0x046f,	// (0x000889b2) list_single_recal_day_pane_t2

0x0001,

0xfd04,	// (0x00098247) list_single_recal_day_pane_t

0x8fe8,	// (0x0009152b) ncimui_query_button_pane_ParamLimits

0x8fe8,	// (0x0009152b) ncimui_query_button_pane

0x8ff8,	// (0x0009153b) ncimui_query_button_pane_t1_ParamLimits

0x8ff8,	// (0x0009153b) ncimui_query_button_pane_t1

0xb6fe,	// (0x00093c41) ncimui_query_button_pane_t2_ParamLimits

0xb6fe,	// (0x00093c41) ncimui_query_button_pane_t2

0x0001,

0xfd09,	// (0x0009824c) ncimui_query_button_pane_t_ParamLimits

0xfd09,	// (0x0009824c) ncimui_query_button_pane_t

0x900b,	// (0x0009154e) query_button_pane_ParamLimits

0x900b,	// (0x0009154e) query_button_pane

0xaa49,	// (0x00092f8c) bg_button_pane_cp0028

0xb711,	// (0x00093c54) query_button_pane_t1

0x500b,	// (0x0008d54e) main_tport_pane_ParamLimits

0x8a42,	// (0x00090f85) bg_popup_window_pane_cp01_ParamLimits

0x8a42,	// (0x00090f85) bg_popup_window_pane_cp01

0x8a50,	// (0x00090f93) heading_pane_cp08_ParamLimits

0x8a50,	// (0x00090f93) heading_pane_cp08

0x8a5e,	// (0x00090fa1) heading_pane_cp07_ParamLimits

0x8a5e,	// (0x00090fa1) heading_pane_cp07

0x8acd,	// (0x00091010) cell_tport_appsw_pane_g2

0x0002,

0xfc50,	// (0x00098193) cell_tport_appsw_pane_g

0xd230,	// (0x00095773) input_candi_list_open_g1

0xcac9,	// (0x0009500c) list_cale_time_pane_g6_ParamLimits

0xcac9,	// (0x0009500c) list_cale_time_pane_g6

0x5505,	// (0x0008da48) aid_size_touch_calib_1_ParamLimits

0x5505,	// (0x0008da48) aid_size_touch_calib_1

0x5511,	// (0x0008da54) aid_size_touch_calib_2_ParamLimits

0x5511,	// (0x0008da54) aid_size_touch_calib_2

0x551f,	// (0x0008da62) aid_size_touch_calib_3_ParamLimits

0x551f,	// (0x0008da62) aid_size_touch_calib_3

0x552f,	// (0x0008da72) aid_size_touch_calib_4_ParamLimits

0x552f,	// (0x0008da72) aid_size_touch_calib_4

0x553d,	// (0x0008da80) main_touch_calib_button_group_pane_ParamLimits

0x553d,	// (0x0008da80) main_touch_calib_button_group_pane

0x554b,	// (0x0008da8e) main_touch_calib_pane_g1_ParamLimits

0x5557,	// (0x0008da9a) main_touch_calib_pane_g2_ParamLimits

0x5563,	// (0x0008daa6) main_touch_calib_pane_g3_ParamLimits

0x556f,	// (0x0008dab2) main_touch_calib_pane_g4_ParamLimits

0xf69c,	// (0x00097bdf) main_touch_calib_pane_g_ParamLimits

0x557b,	// (0x0008dabe) main_touch_calib_pane_t1_ParamLimits

0x5594,	// (0x0008dad7) main_touch_calib_pane_t2_ParamLimits

0x55ad,	// (0x0008daf0) main_touch_calib_pane_t3_ParamLimits

0x55c3,	// (0x0008db06) main_touch_calib_pane_t4_ParamLimits

0x55d9,	// (0x0008db1c) main_touch_calib_pane_t5_ParamLimits

0xf6a5,	// (0x00097be8) main_touch_calib_pane_t_ParamLimits

0xec7d,	// (0x000971c0) list_single_fp_cale_pane_g3_ParamLimits

0xec7d,	// (0x000971c0) list_single_fp_cale_pane_g3

0x4fef,	// (0x0008d532) bg_button_pane_cp012_ParamLimits

0x4fef,	// (0x0008d532) bg_vkb2_func_pane_cp03_ParamLimits

0x73a6,	// (0x0008f8e9) cell_vitu2_function_top_pane_g1_ParamLimits

0x4fef,	// (0x0008d532) bg_vkb2_func_pane_cp04_ParamLimits

0x8216,	// (0x00090759) main_ncimui_button_group_pane_ParamLimits

0x8216,	// (0x00090759) main_ncimui_button_group_pane

0x827c,	// (0x000907bf) main_ncimui_pane_t3_ParamLimits

0x827c,	// (0x000907bf) main_ncimui_pane_t3

0xb4a0,	// (0x000939e3) phacti_button_group_pane

0xb68d,	// (0x00093bd0) aid_size_list_single_double_ParamLimits

0x8f6b,	// (0x000914ae) popup_ezdial_listscroll_window_ParamLimits

0xb699,	// (0x00093bdc) popup_number_entry_window_cp01_ParamLimits

0x9018,	// (0x0009155b) phacti_button_pane_ParamLimits

0x9018,	// (0x0009155b) phacti_button_pane

0xaa49,	// (0x00092f8c) bg_button_pane_cp14

0xb71f,	// (0x00093c62) phacti_button_pane_t1

0x9029,	// (0x0009156c) main_touch_calib_button_pane_ParamLimits

0x9029,	// (0x0009156c) main_touch_calib_button_pane

0xc524,	// (0x00094a67) bg_button_pane_cp18_ParamLimits

0xc524,	// (0x00094a67) bg_button_pane_cp18

0xb72d,	// (0x00093c70) main_touch_calib_button_pane_t1_ParamLimits

0xb72d,	// (0x00093c70) main_touch_calib_button_pane_t1

0xb743,	// (0x00093c86) main_touch_calib_button_pane_t2_ParamLimits

0xb743,	// (0x00093c86) main_touch_calib_button_pane_t2

0x0001,

0xfd0e,	// (0x00098251) main_touch_calib_button_pane_t_ParamLimits

0xfd0e,	// (0x00098251) main_touch_calib_button_pane_t

0xaa49,	// (0x00092f8c) cell_ncimui_button_pane

0xaa49,	// (0x00092f8c) bg_button_pane_cp032

0xb761,	// (0x00093ca4) cell_ncimui_button_pane_t1

0x6536,	// (0x0008ea79) image3_infobar_pane_ParamLimits

0x6536,	// (0x0008ea79) image3_infobar_pane

0x85be,	// (0x00090b01) fs_bigclock_status_pane_ParamLimits

0x85be,	// (0x00090b01) fs_bigclock_status_pane

0x85cb,	// (0x00090b0e) main_fs_bigclock_clock_pane_ParamLimits

0x85cb,	// (0x00090b0e) main_fs_bigclock_clock_pane

0x85df,	// (0x00090b22) main_fs_bigclock_indi_pane_ParamLimits

0x85df,	// (0x00090b22) main_fs_bigclock_indi_pane

0x8607,	// (0x00090b4a) main_fs_bigclock_swipe_pane_ParamLimits

0x8607,	// (0x00090b4a) main_fs_bigclock_swipe_pane

0xaa49,	// (0x00092f8c) main_fs_clock_dumped_data

0xb008,	// (0x0009354b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xb008,	// (0x0009354b) list_single_fs_bigclock_indicator_pane_g1

0xb024,	// (0x00093567) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xb024,	// (0x00093567) list_single_fs_bigclock_indicator_pane_g2

0xb03e,	// (0x00093581) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xb03e,	// (0x00093581) list_single_fs_bigclock_indicator_pane_g3

0xb058,	// (0x0009359b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xb058,	// (0x0009359b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbaa,	// (0x000980ed) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbaa,	// (0x000980ed) list_single_fs_bigclock_indicator_pane_g

0xb083,	// (0x000935c6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xb083,	// (0x000935c6) list_single_fs_bigclock_indicator_pane_t1

0xb0ab,	// (0x000935ee) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xb0ab,	// (0x000935ee) list_single_fs_bigclock_indicator_pane_t2

0xb0d3,	// (0x00093616) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xb0d3,	// (0x00093616) list_single_fs_bigclock_indicator_pane_t3

0xb0fb,	// (0x0009363e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xb0fb,	// (0x0009363e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbb5,	// (0x000980f8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbb5,	// (0x000980f8) list_single_fs_bigclock_indicator_pane_t

0xb76f,	// (0x00093cb2) image3_infobar_fav_pane_ParamLimits

0xb76f,	// (0x00093cb2) image3_infobar_fav_pane

0xb77f,	// (0x00093cc2) image3_infobar_loc_pane_ParamLimits

0xb77f,	// (0x00093cc2) image3_infobar_loc_pane

0xb793,	// (0x00093cd6) image3_infobar_time_pane_ParamLimits

0xb793,	// (0x00093cd6) image3_infobar_time_pane

0xc4c6,	// (0x00094a09) image3_infobar_time_pane_g1

0xb7a3,	// (0x00093ce6) image3_infobar_time_pane_t1

0xc4c6,	// (0x00094a09) image3_infobar_loc_pane_g1

0xb7b1,	// (0x00093cf4) image3_infobar_loc_pane_g2

0x0001,

0xfd13,	// (0x00098256) image3_infobar_loc_pane_g

0xb7b9,	// (0x00093cfc) image3_infobar_loc_pane_t1

0xc4c6,	// (0x00094a09) image3_infobar_fav_pane_g1

0xb7c7,	// (0x00093d0a) image3_infobar_fav_pane_g2

0x0001,

0xfd18,	// (0x0009825b) image3_infobar_fav_pane_g

0xb7cf,	// (0x00093d12) fs_bigclock_status_battery_pane

0xb7d8,	// (0x00093d1b) fs_bigclock_status_signal_pane

0xb7e1,	// (0x00093d24) fs_bigclock_status_title_pane

0xb7ea,	// (0x00093d2d) fs_bigclock_status_signal_pane_g1

0xb7f3,	// (0x00093d36) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1d,	// (0x00098260) fs_bigclock_status_signal_pane_g

0xb7fb,	// (0x00093d3e) fs_bigclock_status_battery_pane_g1

0xb804,	// (0x00093d47) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd22,	// (0x00098265) fs_bigclock_status_battery_pane_g

0xb80c,	// (0x00093d4f) fs_bigclock_status_title_pane_t1

0x9039,	// (0x0009157c) main_fs_bigclock_clock_pane_g1

0x9039,	// (0x0009157c) main_fs_bigclock_clock_pane_g2

0x9046,	// (0x00091589) main_fs_bigclock_clock_pane_g3

0x9046,	// (0x00091589) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd27,	// (0x0009826a) main_fs_bigclock_clock_pane_g

0x9052,	// (0x00091595) main_fs_bigclock_clock_pane_t1

0x9065,	// (0x000915a8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd30,	// (0x00098273) main_fs_bigclock_clock_pane_t

0xb81a,	// (0x00093d5d) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb81a,	// (0x00093d5d) list_single_fs_bigclock_indicator_pane

0xb82b,	// (0x00093d6e) list_single_fs_bigclock_pane_ParamLimits

0xb82b,	// (0x00093d6e) list_single_fs_bigclock_pane

0xb851,	// (0x00093d94) main_fs_bigclock_indicator_pane_t1

0xb860,	// (0x00093da3) list_single_fs_bigclock_pane_g1

0xb868,	// (0x00093dab) list_single_fs_bigclock_pane_t1

0xc4c6,	// (0x00094a09) main_fs_bigclock_swipe_pane_g1

0xb8ab,	// (0x00093dee) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd41,	// (0x00098284) main_fs_bigclock_swipe_pane_g

0xb8b3,	// (0x00093df6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xb8b3,	// (0x00093df6) main_fs_bigclock_swipe_pane_t1

0x42ad,	// (0x0008c7f0) call_type_pane_ParamLimits

0xaa49,	// (0x00092f8c) main_btmg_pane

0x037c,	// (0x000888bf) list_single_cale_mrui_row_pane_g2_ParamLimits

0x037c,	// (0x000888bf) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb4,	// (0x000981f7) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb4,	// (0x000981f7) list_single_cale_mrui_row_pane_g

0x0402,	// (0x00088945) list_recal_vselct_arw_lo_pane

0xb6ea,	// (0x00093c2d) list_recal_vselct_arw_up_pane

0x040a,	// (0x0008894d) list_recal_vselct_pane

0x90bc,	// (0x000915ff) btmg_button_pane

0x90c8,	// (0x0009160b) main_btmg_pane_g1

0xaa49,	// (0x00092f8c) bg_button_pane_cp044

0xb8d0,	// (0x00093e13) btmg_button_pane_t1

0xe48a,	// (0x000969cd) aid_listscroll_gen

0xc090,	// (0x000945d3) main_cntbar_detail_pane

0xb3d1,	// (0x00093914) list_cmail_folder_pane

0x1272,	// (0x000897b5) sp_fs_scroll_pane_cp03_ParamLimits

0x90d0,	// (0x00091613) list_single_fs_dyc_pane_cp01_ParamLimits

0x90d0,	// (0x00091613) list_single_fs_dyc_pane_cp01

0xb8de,	// (0x00093e21) aid_size_cmail_indent

0x0481,	// (0x000889c4) list_single_dyc_row_pane_cp01

0x911b,	// (0x0009165e) cntbar_detail_list_pane_ParamLimits

0x911b,	// (0x0009165e) cntbar_detail_list_pane

0x9155,	// (0x00091698) main_cntbar_detail_cont_pane_ParamLimits

0x9155,	// (0x00091698) main_cntbar_detail_cont_pane

0x42a1,	// (0x0008c7e4) scroll_pane_cp032_ParamLimits

0x42a1,	// (0x0008c7e4) scroll_pane_cp032

0x9161,	// (0x000916a4) cntbar_detail_list_event_pane_ParamLimits

0x9161,	// (0x000916a4) cntbar_detail_list_event_pane

0x9127,	// (0x0009166a) cntbar_detail_list_shct_pane

0xc954,	// (0x00094e97) aid_list_gen

0xb8e7,	// (0x00093e2a) aid_scroll

0xb8f0,	// (0x00093e33) aid_size_touch_scroll_bar

0x9175,	// (0x000916b8) aid_list_double

0x917e,	// (0x000916c1) aid_list_single

0xb8f9,	// (0x00093e3c) aid_list_single_lg

0x9187,	// (0x000916ca) aid_list_z_g_a_sm

0x918f,	// (0x000916d2) aid_list_z_g_d

0x9197,	// (0x000916da) aid_txt_z_prm

0x91a5,	// (0x000916e8) aid_txt_z_prm_cp01

0x91b3,	// (0x000916f6) aid_txt_z_sec

0x91c1,	// (0x00091704) main_cntbar_detail_cont_pane_g1_ParamLimits

0x91c1,	// (0x00091704) main_cntbar_detail_cont_pane_g1

0x91ce,	// (0x00091711) main_cntbar_detail_cont_pane_g2_ParamLimits

0x91ce,	// (0x00091711) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd46,	// (0x00098289) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd46,	// (0x00098289) main_cntbar_detail_cont_pane_g

0xb902,	// (0x00093e45) main_cntbar_detail_cont_pane_t1

0xb910,	// (0x00093e53) main_cntbar_detail_cont_pane_t2

0xb91e,	// (0x00093e61) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4b,	// (0x0009828e) main_cntbar_detail_cont_pane_t

0x91da,	// (0x0009171d) cell_cntbar_detail_list_shct_pane_ParamLimits

0x91da,	// (0x0009171d) cell_cntbar_detail_list_shct_pane

0xb92c,	// (0x00093e6f) cntbar_detail_list_shct_pane_g1

0xb935,	// (0x00093e78) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd52,	// (0x00098295) cntbar_detail_list_shct_pane_g

0x91ee,	// (0x00091731) cntbar_detail_list_event_pane_g1_ParamLimits

0x91ee,	// (0x00091731) cntbar_detail_list_event_pane_g1

0x91fa,	// (0x0009173d) cntbar_detail_list_event_pane_g2_ParamLimits

0x91fa,	// (0x0009173d) cntbar_detail_list_event_pane_g2

0x0005,

0xfd57,	// (0x0009829a) cntbar_detail_list_event_pane_g_ParamLimits

0xfd57,	// (0x0009829a) cntbar_detail_list_event_pane_g

0x9266,	// (0x000917a9) cntbar_detail_list_event_pane_t1_ParamLimits

0x9266,	// (0x000917a9) cntbar_detail_list_event_pane_t1

0x927b,	// (0x000917be) cntbar_detail_list_event_pane_t2_ParamLimits

0x927b,	// (0x000917be) cntbar_detail_list_event_pane_t2

0x0002,

0xfd64,	// (0x000982a7) cntbar_detail_list_event_pane_t_ParamLimits

0xfd64,	// (0x000982a7) cntbar_detail_list_event_pane_t

0xc4c6,	// (0x00094a09) cell_cntbar_detail_list_shct_pane_g1

0xd0a4,	// (0x000955e7) navi_pane_mv_g3

0xc090,	// (0x000945d3) main_cntbar_detail_pane_ParamLimits

0xaa49,	// (0x00092f8c) main_notif_wgt_pane

0x61de,	// (0x0008e721) aid_tch_main_mp4_pane_g4

0x64b1,	// (0x0008e9f4) popup_slider_window_cp02

0x03f8,	// (0x0008893b) list_recal_day_event_pane

0x90fb,	// (0x0009163e) cntbar_detail_btn_pane_ParamLimits

0x90fb,	// (0x0009163e) cntbar_detail_btn_pane

0x910b,	// (0x0009164e) cntbar_detail_btn_pane_cp01_ParamLimits

0x910b,	// (0x0009164e) cntbar_detail_btn_pane_cp01

0x9127,	// (0x0009166a) cntbar_detail_list_shct_pane_ParamLimits

0x9133,	// (0x00091676) cntbar_detail_pane_g1_ParamLimits

0x9133,	// (0x00091676) cntbar_detail_pane_g1

0x913f,	// (0x00091682) cntbar_detail_pane_t1_ParamLimits

0x913f,	// (0x00091682) cntbar_detail_pane_t1

0x9206,	// (0x00091749) cntbar_detail_list_event_pane_g3_ParamLimits

0x9206,	// (0x00091749) cntbar_detail_list_event_pane_g3

0x921e,	// (0x00091761) cntbar_detail_list_event_pane_g4_ParamLimits

0x921e,	// (0x00091761) cntbar_detail_list_event_pane_g4

0x9236,	// (0x00091779) cntbar_detail_list_event_pane_g5_ParamLimits

0x9236,	// (0x00091779) cntbar_detail_list_event_pane_g5

0x924e,	// (0x00091791) cntbar_detail_list_event_pane_g6_ParamLimits

0x924e,	// (0x00091791) cntbar_detail_list_event_pane_g6

0x9290,	// (0x000917d3) cntbar_detail_list_event_pane_t3_ParamLimits

0x9290,	// (0x000917d3) cntbar_detail_list_event_pane_t3

0x92a2,	// (0x000917e5) popup_notif_wgt_window_ParamLimits

0x92a2,	// (0x000917e5) popup_notif_wgt_window

0x92b2,	// (0x000917f5) popup_submenu_window_cp01_ParamLimits

0x92b2,	// (0x000917f5) popup_submenu_window_cp01

0xc6ed,	// (0x00094c30) bg_popup_window_pane_cp10

0xb93e,	// (0x00093e81) listscroll_notif_wgt_pane

0xb950,	// (0x00093e93) list_notif_wgt_window

0xb959,	// (0x00093e9c) scroll_pane_cp033

0x92c0,	// (0x00091803) list_notif_wgt_row_pane_ParamLimits

0x92c0,	// (0x00091803) list_notif_wgt_row_pane

0xb962,	// (0x00093ea5) aid_size_list_notif_wgt_del

0xb96f,	// (0x00093eb2) list_notif_wgt_row_pane_g1

0xb97b,	// (0x00093ebe) list_notif_wgt_row_pane_g2

0xb98a,	// (0x00093ecd) list_notif_wgt_row_pane_g3

0x0002,

0xfd6b,	// (0x000982ae) list_notif_wgt_row_pane_g

0xb997,	// (0x00093eda) list_notif_wgt_row_pane_t1

0xb9ad,	// (0x00093ef0) list_notif_wgt_row_pane_t2

0xb9bf,	// (0x00093f02) list_notif_wgt_row_pane_t3

0x0002,

0xfd72,	// (0x000982b5) list_notif_wgt_row_pane_t

0x0e7e,	// (0x000893c1) list_recal_day_event_pane_g1

0xb9d1,	// (0x00093f14) list_recal_day_event_pane_t1

0xaa49,	// (0x00092f8c) bg_button_pane_cp045

0x92d2,	// (0x00091815) cntbar_detail_btn_pane_t1

0xd338,	// (0x0009587b) main_callh_pane_ParamLimits

0xd338,	// (0x0009587b) main_callh_pane

0xaa49,	// (0x00092f8c) main_coverflow0_pane

0xaa49,	// (0x00092f8c) main_wgtman_pane

0x861f,	// (0x00090b62) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x861f,	// (0x00090b62) main_fs_bigclock_unlock_btn_pane

0x8ac5,	// (0x00091008) bg_button_pane_cp16

0x8ad5,	// (0x00091018) cell_tport_appsw_pane_g3

0x92e0,	// (0x00091823) cf0_flow_pane_ParamLimits

0x92e0,	// (0x00091823) cf0_flow_pane

0xb9e0,	// (0x00093f23) listscroll_cf0_pane

0xb9eb,	// (0x00093f2e) main_cf0_pane_g1

0x92ef,	// (0x00091832) main_cf0_pane_t1_ParamLimits

0x92ef,	// (0x00091832) main_cf0_pane_t1

0x9303,	// (0x00091846) main_cf0_pane_t2_ParamLimits

0x9303,	// (0x00091846) main_cf0_pane_t2

0x0001,

0xfd7e,	// (0x000982c1) main_cf0_pane_t_ParamLimits

0xfd7e,	// (0x000982c1) main_cf0_pane_t

0xb9fd,	// (0x00093f40) scroll_pane_cp11

0x9317,	// (0x0009185a) cf0_flow_pane_g1

0x931f,	// (0x00091862) cf0_flow_pane_g2

0x0001,

0xfd83,	// (0x000982c6) cf0_flow_pane_g

0x9327,	// (0x0009186a) cf0_flow_pane_t1

0xaa49,	// (0x00092f8c) main_call6_pane

0xaa49,	// (0x00092f8c) main_calllock_pane

0x9335,	// (0x00091878) call6_btn_grp_pane_ParamLimits

0x9335,	// (0x00091878) call6_btn_grp_pane

0x9344,	// (0x00091887) call6_pane_g1_ParamLimits

0x9344,	// (0x00091887) call6_pane_g1

0x9354,	// (0x00091897) popup_call6_1st_window_ParamLimits

0x9354,	// (0x00091897) popup_call6_1st_window

0x9362,	// (0x000918a5) popup_call6_2nd_window_ParamLimits

0x9362,	// (0x000918a5) popup_call6_2nd_window

0x9370,	// (0x000918b3) cell_call6_btn_pane_ParamLimits

0x9370,	// (0x000918b3) cell_call6_btn_pane

0xc6ed,	// (0x00094c30) bg_popup_call2_in_pane_cp03

0xba08,	// (0x00093f4b) popup_call6_1st_window_g1

0xba10,	// (0x00093f53) popup_call6_1st_window_g2

0xba18,	// (0x00093f5b) popup_call6_1st_window_g3

0x0002,

0xfd88,	// (0x000982cb) popup_call6_1st_window_g

0xba20,	// (0x00093f63) popup_call6_1st_window_t1

0xba2f,	// (0x00093f72) popup_call6_1st_window_t2

0xba3d,	// (0x00093f80) popup_call6_1st_window_t3

0x0002,

0xfd8f,	// (0x000982d2) popup_call6_1st_window_t

0xc6ed,	// (0x00094c30) bg_popup_call2_in_pane_cp04

0xba4b,	// (0x00093f8e) popup_call6_2nd_window_g1

0xba53,	// (0x00093f96) popup_call6_2nd_window_g2

0xba5b,	// (0x00093f9e) popup_call6_2nd_window_g3

0x0002,

0xfd96,	// (0x000982d9) popup_call6_2nd_window_g

0xba63,	// (0x00093fa6) popup_call6_2nd_window_t1

0x25ac,	// (0x0008aaef) bg_button_pane_cp15

0x937f,	// (0x000918c2) cell_call6_btn_pane_g1

0x9388,	// (0x000918cb) cell_call6_btn_pane_t1

0x9397,	// (0x000918da) listscroll_wgtman_pane_ParamLimits

0x9397,	// (0x000918da) listscroll_wgtman_pane

0x93b3,	// (0x000918f6) wgtman_btn_pane_ParamLimits

0x93b3,	// (0x000918f6) wgtman_btn_pane

0xceb8,	// (0x000953fb) aid_scroll_copy1

0xba72,	// (0x00093fb5) list_wgtman_pane

0x93e8,	// (0x0009192b) wgtman_btn_pane_g1_ParamLimits

0x93e8,	// (0x0009192b) wgtman_btn_pane_g1

0x9410,	// (0x00091953) wgtman_btn_pane_t1_ParamLimits

0x9410,	// (0x00091953) wgtman_btn_pane_t1

0xba7c,	// (0x00093fbf) wgtman_btn_pane_t2_ParamLimits

0xba7c,	// (0x00093fbf) wgtman_btn_pane_t2

0x0001,

0xfd9d,	// (0x000982e0) wgtman_btn_pane_t_ParamLimits

0xfd9d,	// (0x000982e0) wgtman_btn_pane_t

0x9447,	// (0x0009198a) listrow_wgtman_pane_ParamLimits

0x9447,	// (0x0009198a) listrow_wgtman_pane

0x9463,	// (0x000919a6) listrow_wgtman_pane_g1

0x9470,	// (0x000919b3) listrow_wgtman_pane_g2

0x0001,

0xfda2,	// (0x000982e5) listrow_wgtman_pane_g

0x948e,	// (0x000919d1) listrow_wgtman_pane_t1

0x94a6,	// (0x000919e9) listrow_wgtman_pane_t2

0x0001,

0xfda7,	// (0x000982ea) listrow_wgtman_pane_t

0x94cc,	// (0x00091a0f) wait_bar_pane_cp09

0xba93,	// (0x00093fd6) main_calllock_btn_pane

0xba9d,	// (0x00093fe0) main_calllock_pane_g1

0xaa49,	// (0x00092f8c) bg_button_pane_cp17

0xbaa5,	// (0x00093fe8) main_calllock_btn_pane_g1

0xbaae,	// (0x00093ff1) main_calllock_btn_pane_t1

0xaa49,	// (0x00092f8c) main_dialer3_pane

0xaa49,	// (0x00092f8c) main_fmrd2_pane

0xc4c6,	// (0x00094a09) main_fs_bigclock_unlock_btn_pane_g1

0x94e6,	// (0x00091a29) main_fs_bigclock_unlock_btn_pane_t1

0x94f4,	// (0x00091a37) area_fmrd2_info_pane_ParamLimits

0x94f4,	// (0x00091a37) area_fmrd2_info_pane

0x9502,	// (0x00091a45) area_fmrd2_visual_pane_ParamLimits

0x9502,	// (0x00091a45) area_fmrd2_visual_pane

0x9510,	// (0x00091a53) fmrd2_indi_pane_ParamLimits

0x9510,	// (0x00091a53) fmrd2_indi_pane

0x951d,	// (0x00091a60) area_fmrd2_visual_pane_g1

0x9525,	// (0x00091a68) area_fmrd2_visual_pane_t1

0x9535,	// (0x00091a78) area_fmrd2_visual_pane_t2

0x9545,	// (0x00091a88) area_fmrd2_visual_pane_t3

0x0002,

0xfdb1,	// (0x000982f4) area_fmrd2_visual_pane_t

0x9555,	// (0x00091a98) area_fmrd2_info_pane_g1

0x955d,	// (0x00091aa0) area_fmrd2_info_pane_t1

0x956d,	// (0x00091ab0) area_fmrd2_info_pane_t2

0x957d,	// (0x00091ac0) area_fmrd2_info_pane_t3

0x958d,	// (0x00091ad0) area_fmrd2_info_pane_t4

0x0003,

0xfdb8,	// (0x000982fb) area_fmrd2_info_pane_t

0x959b,	// (0x00091ade) fmrd2_indi_pane_t1

0x95ab,	// (0x00091aee) fmrd2_indi_pane_t2

0x95bb,	// (0x00091afe) fmrd2_indi_pane_t3

0x0002,

0xfdc1,	// (0x00098304) fmrd2_indi_pane_t

0xb067,	// (0x000935aa) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xb067,	// (0x000935aa) list_single_fs_bigclock_indicator_pane_g5

0xb118,	// (0x0009365b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xb118,	// (0x0009365b) list_single_fs_bigclock_indicator_pane_t5

0x8ccf,	// (0x00091212) aid_cell_bcale_month_pane_ParamLimits

0x8ccf,	// (0x00091212) aid_cell_bcale_month_pane

0x8ced,	// (0x00091230) bcale_month_pane_ParamLimits

0x8ced,	// (0x00091230) bcale_month_pane

0x8d0b,	// (0x0009124e) bcale_preview_pane_ParamLimits

0x8d0b,	// (0x0009124e) bcale_preview_pane

0xb868,	// (0x00093dab) list_single_fs_bigclock_pane_t1_ParamLimits

0xb887,	// (0x00093dca) list_single_fs_bigclock_pane_t2_ParamLimits

0xb887,	// (0x00093dca) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3c,	// (0x0009827f) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3c,	// (0x0009827f) list_single_fs_bigclock_pane_t

0x94de,	// (0x00091a21) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdac,	// (0x000982ef) main_fs_bigclock_unlock_btn_pane_g

0x95c9,	// (0x00091b0c) aid_dia3_key_size_ParamLimits

0x95c9,	// (0x00091b0c) aid_dia3_key_size

0x95d5,	// (0x00091b18) aid_dia3_listrow_size_ParamLimits

0x95d5,	// (0x00091b18) aid_dia3_listrow_size

0x95e5,	// (0x00091b28) dia3_keypad_fun_pane_ParamLimits

0x95e5,	// (0x00091b28) dia3_keypad_fun_pane

0x95f7,	// (0x00091b3a) dia3_keypad_num_pane_ParamLimits

0x95f7,	// (0x00091b3a) dia3_keypad_num_pane

0x9609,	// (0x00091b4c) dia3_listscroll_pane_ParamLimits

0x9609,	// (0x00091b4c) dia3_listscroll_pane

0x9617,	// (0x00091b5a) dia3_numentry_pane_ParamLimits

0x9617,	// (0x00091b5a) dia3_numentry_pane

0xbabd,	// (0x00094000) dia3_list_pane

0xbac8,	// (0x0009400b) scroll_pane_cp12

0xaa49,	// (0x00092f8c) bg_dia3_numentry_pane

0x9625,	// (0x00091b68) dia3_numentry_pane_t1

0x9634,	// (0x00091b77) cell_dia3_key_num_pane

0x963c,	// (0x00091b7f) cell_dia3_key0_fun_pane_ParamLimits

0x963c,	// (0x00091b7f) cell_dia3_key0_fun_pane

0x9649,	// (0x00091b8c) cell_dia3_key1_fun_pane_ParamLimits

0x9649,	// (0x00091b8c) cell_dia3_key1_fun_pane

0x9656,	// (0x00091b99) dia3_listrow_pane

0xadba,	// (0x000932fd) bg_dia3_numentry_pane_g1

0xaa49,	// (0x00092f8c) bg_button_pane_cp21

0xbad3,	// (0x00094016) cell_dia3_key_num_pane_t1

0xbae1,	// (0x00094024) cell_dia3_key_num_pane_t2

0xbaf0,	// (0x00094033) cell_dia3_key_num_pane_t3

0xbaff,	// (0x00094042) cell_dia3_key_num_pane_t4

0x0003,

0xfdc8,	// (0x0009830b) cell_dia3_key_num_pane_t

0xaa49,	// (0x00092f8c) bg_button_pane_cp19

0x9663,	// (0x00091ba6) cell_dia3_key0_fun_pane_g1

0xaa49,	// (0x00092f8c) bg_button_pane_cp20

0x966b,	// (0x00091bae) cell_dia3_key1_fun_pane_g1

0x9673,	// (0x00091bb6) area_left_week_number_pane

0x9686,	// (0x00091bc9) area_top_day_name_pane

0x9694,	// (0x00091bd7) frame_month_view_pane

0xbb0e,	// (0x00094051) grid_month_view_pane

0x96a9,	// (0x00091bec) cell_top_day_name_pane_ParamLimits

0x96a9,	// (0x00091bec) cell_top_day_name_pane

0x96c3,	// (0x00091c06) cell_area_left_week_number_pane_ParamLimits

0x96c3,	// (0x00091c06) cell_area_left_week_number_pane

0x96e6,	// (0x00091c29) cell_month_view_pane_ParamLimits

0x96e6,	// (0x00091c29) cell_month_view_pane

0xbb1c,	// (0x0009405f) frm_month_g1

0x9712,	// (0x00091c55) frm_month_g2

0x9723,	// (0x00091c66) frm_month_g3

0x9734,	// (0x00091c77) frm_month_g4

0x9745,	// (0x00091c88) frm_month_g5

0x9758,	// (0x00091c9b) frm_month_g6

0x976b,	// (0x00091cae) frm_month_g7

0xbb29,	// (0x0009406c) frm_month_g8

0x977e,	// (0x00091cc1) frm_month_g9

0x978b,	// (0x00091cce) frm_month_g10

0x9798,	// (0x00091cdb) frm_month_g11

0x97a5,	// (0x00091ce8) frm_month_g12

0x97b2,	// (0x00091cf5) frm_month_g13

0x97bf,	// (0x00091d02) frm_month_g14

0x97ce,	// (0x00091d11) frm_month_g15

0x97dd,	// (0x00091d20) frm_month_g16

0x000f,

0xfdd1,	// (0x00098314) frm_month_g

0xbb36,	// (0x00094079) cell_top_day_name_pane_t1

0x97ec,	// (0x00091d2f) cell_area_left_week_number_pane_g1

0x97fb,	// (0x00091d3e) cell_area_left_week_number_pane_t1

0xc488,	// (0x000949cb) cell_month_view_pane_g1

0x9811,	// (0x00091d54) cell_month_view_pane_t1

0xaa49,	// (0x00092f8c) main_fps_pane

0xb2dc,	// (0x0009381f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xb2dc,	// (0x0009381f) cmail_ddmenu_btn02_pane_cp1

0xb2f8,	// (0x0009383b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xb2f8,	// (0x0009383b) cmail_ddmenu_btn02_pane_cp2

0x8fa0,	// (0x000914e3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fa0,	// (0x000914e3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcef,	// (0x00098232) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcef,	// (0x00098232) cmail_ddmenu_btn02_pane_g

0x8fbe,	// (0x00091501) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8fbe,	// (0x00091501) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf4,	// (0x00098237) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf4,	// (0x00098237) cmail_ddmenu_btn02_pane_t

0x9827,	// (0x00091d6a) fps_text_pane_ParamLimits

0x9827,	// (0x00091d6a) fps_text_pane

0x9834,	// (0x00091d77) main_fps_pane_g1_ParamLimits

0x9834,	// (0x00091d77) main_fps_pane_g1

0x9842,	// (0x00091d85) wait_bar_pane_cp010_ParamLimits

0x9842,	// (0x00091d85) wait_bar_pane_cp010

0x984e,	// (0x00091d91) fps_text_pane_t1_ParamLimits

0x984e,	// (0x00091d91) fps_text_pane_t1

0x68c6,	// (0x0008ee09) cam4_image_uncrop_pane_g1

0x68cf,	// (0x0008ee12) cam4_image_uncrop_pane_g2

0x68d8,	// (0x0008ee1b) cam4_image_uncrop_pane_g3

0x68e1,	// (0x0008ee24) cam4_image_uncrop_pane_g4

0x0003,

0xf82e,	// (0x00097d71) cam4_image_uncrop_pane_g

0x9656,	// (0x00091b99) dia3_listrow_pane_ParamLimits

0xaa49,	// (0x00092f8c) main_phob2_pane

0x8aa7,	// (0x00090fea) cell_tport_appsw_pane_cp02_ParamLimits

0x8aa7,	// (0x00090fea) cell_tport_appsw_pane_cp02

0x8ab6,	// (0x00090ff9) cell_tport_appsw_pane_cp03_ParamLimits

0x8ab6,	// (0x00090ff9) cell_tport_appsw_pane_cp03

0xaa49,	// (0x00092f8c) phob2_contact_card_pane

0xaa49,	// (0x00092f8c) phob2_listscroll_pane

0xbb49,	// (0x0009408c) phob2_list_pane

0xb6ae,	// (0x00093bf1) scroll_pane_cp034

0x9867,	// (0x00091daa) phob2_cc_data_pane_ParamLimits

0x9867,	// (0x00091daa) phob2_cc_data_pane

0x9881,	// (0x00091dc4) phob2_cc_listscroll_pane_ParamLimits

0x9881,	// (0x00091dc4) phob2_cc_listscroll_pane

0x9447,	// (0x0009198a) list_double_large_graphic_phob2_pane_ParamLimits

0x9447,	// (0x0009198a) list_double_large_graphic_phob2_pane

0x989b,	// (0x00091dde) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x989b,	// (0x00091dde) list_double_large_graphic_phob2_pane_g1

0x98a8,	// (0x00091deb) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x98a8,	// (0x00091deb) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf2,	// (0x00098335) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf2,	// (0x00098335) list_double_large_graphic_phob2_pane_g

0x98ce,	// (0x00091e11) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x98ce,	// (0x00091e11) list_double_large_graphic_phob2_pane_t1

0x98e3,	// (0x00091e26) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x98e3,	// (0x00091e26) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfb,	// (0x0009833e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfb,	// (0x0009833e) list_double_large_graphic_phob2_pane_t

0xaa49,	// (0x00092f8c) list_highlight_pane_cp024

0xbb51,	// (0x00094094) phob2_cc_button_pane

0x98f8,	// (0x00091e3b) phob2_cc_data_pane_g1_ParamLimits

0x98f8,	// (0x00091e3b) phob2_cc_data_pane_g1

0x9907,	// (0x00091e4a) phob2_cc_data_pane_g2_ParamLimits

0x9907,	// (0x00091e4a) phob2_cc_data_pane_g2

0x0001,

0xfe00,	// (0x00098343) phob2_cc_data_pane_g_ParamLimits

0xfe00,	// (0x00098343) phob2_cc_data_pane_g

0x9916,	// (0x00091e59) phob2_cc_data_pane_t1_ParamLimits

0x9916,	// (0x00091e59) phob2_cc_data_pane_t1

0x992b,	// (0x00091e6e) phob2_cc_data_pane_t2_ParamLimits

0x992b,	// (0x00091e6e) phob2_cc_data_pane_t2

0x9940,	// (0x00091e83) phob2_cc_data_pane_t3_ParamLimits

0x9940,	// (0x00091e83) phob2_cc_data_pane_t3

0x0002,

0xfe05,	// (0x00098348) phob2_cc_data_pane_t_ParamLimits

0xfe05,	// (0x00098348) phob2_cc_data_pane_t

0xbb59,	// (0x0009409c) phob2_cc_list_pane_ParamLimits

0xbb59,	// (0x0009409c) phob2_cc_list_pane

0xacdd,	// (0x00093220) scroll_pane_cp035_ParamLimits

0xacdd,	// (0x00093220) scroll_pane_cp035

0xc090,	// (0x000945d3) bg_button_pane_cp033

0xbb65,	// (0x000940a8) phob2_cc_button_pane_g1

0xbb71,	// (0x000940b4) phob2_cc_button_pane_t1

0xbb86,	// (0x000940c9) phob2_cc_button_pane_t2

0x0001,

0xfe0c,	// (0x0009834f) phob2_cc_button_pane_t

0x9955,	// (0x00091e98) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9955,	// (0x00091e98) list_double_large_graphic_phob2_cc_pane

0x99c9,	// (0x00091f0c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x99c9,	// (0x00091f0c) list_double_large_graphic_phob2_cc_pane_g1

0x99da,	// (0x00091f1d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x99da,	// (0x00091f1d) list_double_large_graphic_phob2_cc_pane_g2

0x99e9,	// (0x00091f2c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x99e9,	// (0x00091f2c) list_double_large_graphic_phob2_cc_pane_g3

0x99f8,	// (0x00091f3b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x99f8,	// (0x00091f3b) list_double_large_graphic_phob2_cc_pane_g4

0x9a09,	// (0x00091f4c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a09,	// (0x00091f4c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe11,	// (0x00098354) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe11,	// (0x00098354) list_double_large_graphic_phob2_cc_pane_g

0x9a18,	// (0x00091f5b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a18,	// (0x00091f5b) list_double_large_graphic_phob2_cc_pane_t1

0x9a41,	// (0x00091f84) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a41,	// (0x00091f84) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1c,	// (0x0009835f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1c,	// (0x0009835f) list_double_large_graphic_phob2_cc_pane_t

0xbb98,	// (0x000940db) list_highlight_pane_cp025_ParamLimits

0xbb98,	// (0x000940db) list_highlight_pane_cp025

0xc090,	// (0x000945d3) bg_button_pane_cp033_ParamLimits

0xbb65,	// (0x000940a8) phob2_cc_button_pane_g1_ParamLimits

0xbb71,	// (0x000940b4) phob2_cc_button_pane_t1_ParamLimits

0xbb86,	// (0x000940c9) phob2_cc_button_pane_t2_ParamLimits

0xfe0c,	// (0x0009834f) phob2_cc_button_pane_t_ParamLimits

0x25a0,	// (0x0008aae3) popup_wgtman_window

0x0c48,	// (0x0008918b) scroll_pane_cp038

0x93d0,	// (0x00091913) wgtman_btn_pane_cp_01_ParamLimits

0x93d0,	// (0x00091913) wgtman_btn_pane_cp_01

0xbba6,	// (0x000940e9) wgtman_content_pane

0xbbaf,	// (0x000940f2) wgtman_heading_pane

0xaa49,	// (0x00092f8c) bg_heading_pane_cp02

0xbbb8,	// (0x000940fb) wgtman_heading_pane_g1

0xbbc0,	// (0x00094103) wgtman_heading_pane_t1

0xbbce,	// (0x00094111) scroll_pane_cp036

0xbbd6,	// (0x00094119) wgtman_list_pane

0xbbde,	// (0x00094121) wgtman_list_pane_t1_ParamLimits

0xbbde,	// (0x00094121) wgtman_list_pane_t1

0x6825,	// (0x0008ed68) cam4_grid_pane

0x7566,	// (0x0008faa9) bg_button_pane_cp015_ParamLimits

0x757b,	// (0x0008fabe) bg_button_pane_cp016_ParamLimits

0x7587,	// (0x0008faca) bg_button_pane_cp017_ParamLimits

0x75df,	// (0x0008fb22) popup_vitu2_query_window_g3_ParamLimits

0x75df,	// (0x0008fb22) popup_vitu2_query_window_g3

0x7680,	// (0x0008fbc3) popup_vitu2_query_window_t6_ParamLimits

0x7680,	// (0x0008fbc3) popup_vitu2_query_window_t6

0x76ab,	// (0x0008fbee) popup_vitu2_query_window_t7_ParamLimits

0x76ab,	// (0x0008fbee) popup_vitu2_query_window_t7

0xbbf9,	// (0x0009413c) cam4_grid_pane_g1

0xbc02,	// (0x00094145) cam4_grid_pane_g2

0xbc0b,	// (0x0009414e) cam4_grid_pane_g3

0xbc14,	// (0x00094157) cam4_grid_pane_g4

0x0003,

0xfe21,	// (0x00098364) cam4_grid_pane_g

0x300c,	// (0x0008b54f) aid_placing_vt_slider_lsc_ParamLimits

0x334c,	// (0x0008b88f) vidtel_button_pane_ParamLimits

0x334c,	// (0x0008b88f) vidtel_button_pane

0xaa49,	// (0x00092f8c) bg_button_pane_cp034

0xbc1f,	// (0x00094162) vidtel_button_pane_g1

0xbc27,	// (0x0009416a) vidtel_button_pane_t1

0x0e6e,	// (0x000893b1) aid_size_vtel_slider_touch

0xacdd,	// (0x00093220) scroll_pane_cp039

0x83d7,	// (0x0009091a) ncim_query_button_pane_cp01_ParamLimits

0x83f6,	// (0x00090939) ncimui_query_pane_g1_ParamLimits

0xc090,	// (0x000945d3) input_focus_pane_cp012_ParamLimits

0xae00,	// (0x00093343) ncim_query_entry_pane_t1_ParamLimits

0xacdd,	// (0x00093220) scroll_pane_cp039_ParamLimits

0xcf8f,	// (0x000954d2) navi_pane_bcale_mc_g1

0xcf97,	// (0x000954da) navi_pane_bcale_mc_t1

0xb32c,	// (0x0009386f) main_sp_fs_email_pane_g1

0xb338,	// (0x0009387b) main_sp_fs_email_pane_g2

0x0001,

0xfc1f,	// (0x00098162) main_sp_fs_email_pane_g

0xb5c5,	// (0x00093b08) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb5c5,	// (0x00093b08) list_single_cale_mrui_row_pane_g3

0x8fde,	// (0x00091521) list_single_recal_day_pane_g5_event_pane

0x0455,	// (0x00088998) list_single_recal_day_pane_g7

0xbc3d,	// (0x00094180) list_recal_day_event_pane_cp01

0xbc46,	// (0x00094189) list_recal_vselct_arw_lo_pane_cp01

0xbc4e,	// (0x00094191) list_recal_vselct_arw_up_pane_cp01

0xbc56,	// (0x00094199) list_recal_vselct_pane_cp01

0x0e7e,	// (0x000893c1) list_recal_day_event_pane_cp01_g1

0x048a,	// (0x000889cd) list_recal_day_event_pane_cp01_t1

0x045d,	// (0x000889a0) list_single_recal_day_pane_t1_ParamLimits

0x046f,	// (0x000889b2) list_single_recal_day_pane_t2_ParamLimits

0xfd04,	// (0x00098247) list_single_recal_day_pane_t_ParamLimits

0xc40d,	// (0x00094950) bg_notes_pane_ParamLimits

0xc502,	// (0x00094a45) list_notes_pane_ParamLimits

0x26ed,	// (0x0008ac30) scroll_pane_cp06_ParamLimits

0xc524,	// (0x00094a67) main_notes_pane_ParamLimits

0xc090,	// (0x000945d3) main_welc_pane

0x9a8c,	// (0x00091fcf) main_welc_body_pane_ParamLimits

0x9a8c,	// (0x00091fcf) main_welc_body_pane

0x9aa5,	// (0x00091fe8) main_welc_opti_pane_ParamLimits

0x9aa5,	// (0x00091fe8) main_welc_opti_pane

0x9b00,	// (0x00092043) main_welc_pane_t1_ParamLimits

0x9b00,	// (0x00092043) main_welc_pane_t1

0x9c96,	// (0x000921d9) main_welc_body_row_pane_ParamLimits

0x9c96,	// (0x000921d9) main_welc_body_row_pane

0xc47a,	// (0x000949bd) main_welc_opti_row_pane_ParamLimits

0xc47a,	// (0x000949bd) main_welc_opti_row_pane

0xbc70,	// (0x000941b3) main_welc_opti_row_pane_g1

0x9cbf,	// (0x00092202) main_welc_opti_row_pane_t1

0xbc78,	// (0x000941bb) main_welc_body_row_pane_t1

0xb948,	// (0x00093e8b) popup_notif_wgt_heading_pane

0xb962,	// (0x00093ea5) aid_size_list_notif_wgt_del_ParamLimits

0xb96f,	// (0x00093eb2) list_notif_wgt_row_pane_g1_ParamLimits

0xb97b,	// (0x00093ebe) list_notif_wgt_row_pane_g2_ParamLimits

0xb98a,	// (0x00093ecd) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6b,	// (0x000982ae) list_notif_wgt_row_pane_g_ParamLimits

0xb997,	// (0x00093eda) list_notif_wgt_row_pane_t1_ParamLimits

0xb9ad,	// (0x00093ef0) list_notif_wgt_row_pane_t2_ParamLimits

0xb9bf,	// (0x00093f02) list_notif_wgt_row_pane_t3_ParamLimits

0xfd72,	// (0x000982b5) list_notif_wgt_row_pane_t_ParamLimits

0x9463,	// (0x000919a6) listrow_wgtman_pane_g1_ParamLimits

0x9470,	// (0x000919b3) listrow_wgtman_pane_g2_ParamLimits

0xfda2,	// (0x000982e5) listrow_wgtman_pane_g_ParamLimits

0x948e,	// (0x000919d1) listrow_wgtman_pane_t1_ParamLimits

0x94a6,	// (0x000919e9) listrow_wgtman_pane_t2_ParamLimits

0xfda7,	// (0x000982ea) listrow_wgtman_pane_t_ParamLimits

0x94cc,	// (0x00091a0f) wait_bar_pane_cp09_ParamLimits

0xaa49,	// (0x00092f8c) bg_popup_heading_pane_cp02

0xbc87,	// (0x000941ca) popup_notif_wgt_heading_pane_g1

0xbc8f,	// (0x000941d2) popup_notif_wgt_heading_pane_t1

0xaa49,	// (0x00092f8c) main_vids_pane

0xaa49,	// (0x00092f8c) vids_listscroll_pane

0x9cce,	// (0x00092211) scroll_pane_cp040

0xaa49,	// (0x00092f8c) vids_list_pane

0x9cd9,	// (0x0009221c) vids_list_double_pane_ParamLimits

0x9cd9,	// (0x0009221c) vids_list_double_pane

0x9cf1,	// (0x00092234) vids_list_double_pane_g1

0x9cfa,	// (0x0009223d) vids_list_double_pane_t1

0x9d0a,	// (0x0009224d) vids_list_double_pane_t2

0x0001,

0xfe40,	// (0x00098383) vids_list_double_pane_t

0x4fef,	// (0x0008d532) main_ncimui_pane_ParamLimits

0x822e,	// (0x00090771) main_ncimui_pane_g1_ParamLimits

0x823a,	// (0x0009077d) main_ncimui_pane_g2_ParamLimits

0x823a,	// (0x0009077d) main_ncimui_pane_g2

0x0001,

0xfb20,	// (0x00098063) main_ncimui_pane_g_ParamLimits

0xfb20,	// (0x00098063) main_ncimui_pane_g

0x9abe,	// (0x00092001) main_welc_pane_g1_ParamLimits

0x9abe,	// (0x00092001) main_welc_pane_g1

0x9aca,	// (0x0009200d) main_welc_pane_g2_ParamLimits

0x9aca,	// (0x0009200d) main_welc_pane_g2

0x0003,

0xfe2a,	// (0x0009836d) main_welc_pane_g_ParamLimits

0xfe2a,	// (0x0009836d) main_welc_pane_g

0xc40d,	// (0x00094950) listscroll_mce_pane_ParamLimits

0xd0e4,	// (0x00095627) wait_bar_pane_cp10

0xe492,	// (0x000969d5) main_cale_day_pane_ParamLimits

0xe492,	// (0x000969d5) main_cale_week_pane_ParamLimits

0xc40d,	// (0x00094950) main_messa_pane_ParamLimits

0x5c94,	// (0x0008e1d7) main_clock2_btn_pane_ParamLimits

0x5c94,	// (0x0008e1d7) main_clock2_btn_pane

0xecf7,	// (0x0009723a) main_clock2_btn_pane_cp01_ParamLimits

0xecf7,	// (0x0009723a) main_clock2_btn_pane_cp01

0xb596,	// (0x00093ad9) list_cale_mrui_pane_ParamLimits

0xb9f5,	// (0x00093f38) main_cf0_pane_g2

0x0001,

0xfd79,	// (0x000982bc) main_cf0_pane_g

0x9673,	// (0x00091bb6) area_left_week_number_pane_ParamLimits

0x9686,	// (0x00091bc9) area_top_day_name_pane_ParamLimits

0x9694,	// (0x00091bd7) frame_month_view_pane_ParamLimits

0xbb0e,	// (0x00094051) grid_month_view_pane_ParamLimits

0xbb1c,	// (0x0009405f) frm_month_g1_ParamLimits

0x9712,	// (0x00091c55) frm_month_g2_ParamLimits

0x9723,	// (0x00091c66) frm_month_g3_ParamLimits

0x9734,	// (0x00091c77) frm_month_g4_ParamLimits

0x9745,	// (0x00091c88) frm_month_g5_ParamLimits

0x9758,	// (0x00091c9b) frm_month_g6_ParamLimits

0x976b,	// (0x00091cae) frm_month_g7_ParamLimits

0xbb29,	// (0x0009406c) frm_month_g8_ParamLimits

0x977e,	// (0x00091cc1) frm_month_g9_ParamLimits

0x978b,	// (0x00091cce) frm_month_g10_ParamLimits

0x9798,	// (0x00091cdb) frm_month_g11_ParamLimits

0x97a5,	// (0x00091ce8) frm_month_g12_ParamLimits

0x97b2,	// (0x00091cf5) frm_month_g13_ParamLimits

0x97bf,	// (0x00091d02) frm_month_g14_ParamLimits

0x97ce,	// (0x00091d11) frm_month_g15_ParamLimits

0x97dd,	// (0x00091d20) frm_month_g16_ParamLimits

0xfdd1,	// (0x00098314) frm_month_g_ParamLimits

0xbb36,	// (0x00094079) cell_top_day_name_pane_t1_ParamLimits

0x97ec,	// (0x00091d2f) cell_area_left_week_number_pane_g1_ParamLimits

0x97fb,	// (0x00091d3e) cell_area_left_week_number_pane_t1_ParamLimits

0xc488,	// (0x000949cb) cell_month_view_pane_g1_ParamLimits

0x9811,	// (0x00091d54) cell_month_view_pane_t1_ParamLimits

0xc405,	// (0x00094948) main_clock2_btn_pane_g1

0xbc9d,	// (0x000941e0) main_clock2_btn_pane_t1

0xc090,	// (0x000945d3) listscroll_cmail_pane_ParamLimits

0xb32c,	// (0x0009386f) main_sp_fs_email_pane_g1_ParamLimits

0xb338,	// (0x0009387b) main_sp_fs_email_pane_g2_ParamLimits

0xfc1f,	// (0x00098162) main_sp_fs_email_pane_g_ParamLimits

0xb6cb,	// (0x00093c0e) list_recal_day_pane_ParamLimits

0xb6dc,	// (0x00093c1f) mian_recal_day_pane_t1

0x8995,	// (0x00090ed8) list_single_dyc_row_text_pane_t4_ParamLimits

0x8995,	// (0x00090ed8) list_single_dyc_row_text_pane_t4

0x89cc,	// (0x00090f0f) list_single_dyc_row_text_pane_t5_ParamLimits

0x89cc,	// (0x00090f0f) list_single_dyc_row_text_pane_t5

0x0240,	// (0x00088783) list_single_dyc_row_text_pane_t6_ParamLimits

0x0240,	// (0x00088783) list_single_dyc_row_text_pane_t6

0x41c5,	// (0x0008c708) aid_mgn_list_cale_time_pane

0x4fef,	// (0x0008d532) main_gallery2_pane_ParamLimits

0xed0d,	// (0x00097250) main_clock2_pane_cp01_t1

0xed1b,	// (0x0009725e) main_clock2_pane_cp01_t3

0x0001,

0xf70f,	// (0x00097c52) main_clock2_pane_cp01_t

0x2b42,	// (0x0008b085) cale_week_scroll_pane_g16_ParamLimits

0x2b42,	// (0x0008b085) cale_week_scroll_pane_g16

0xc6ed,	// (0x00094c30) vorec_slider_pane

0xbc27,	// (0x0009416a) vidtel_button_pane_t1_ParamLimits

0x9039,	// (0x0009157c) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9039,	// (0x0009157c) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9046,	// (0x00091589) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9046,	// (0x00091589) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd27,	// (0x0009826a) main_fs_bigclock_clock_pane_g_ParamLimits

0x9052,	// (0x00091595) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9065,	// (0x000915a8) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd30,	// (0x00098273) main_fs_bigclock_clock_pane_t_ParamLimits

0x5639,	// (0x0008db7c) main_mup3_lyrics_pane_ParamLimits

0x5639,	// (0x0008db7c) main_mup3_lyrics_pane

0x9d3d,	// (0x00092280) main_mup3_lyrics_pane_t1_ParamLimits

0x9d3d,	// (0x00092280) main_mup3_lyrics_pane_t1

0x61c8,	// (0x0008e70b) aid_main_mp4_pane_t1_area

0x61d2,	// (0x0008e715) aid_main_mp4_pane_t2_area

0x62d7,	// (0x0008e81a) main_mp4_pane_g7_ParamLimits

0x62d7,	// (0x0008e81a) main_mp4_pane_g7

0x62e3,	// (0x0008e826) main_mp4_pane_g8_ParamLimits

0x62e3,	// (0x0008e826) main_mp4_pane_g8

0x66df,	// (0x0008ec22) aid_call6_pane_g1_size

0x999b,	// (0x00091ede) list_double_large_graphic_phob2_other_pane_ParamLimits

0x999b,	// (0x00091ede) list_double_large_graphic_phob2_other_pane

0xca68,	// (0x00094fab) list_double_large_graphic_phob2_other_pane_g1

0xaa49,	// (0x00092f8c) list_highlight_pane_cp026

0xc090,	// (0x000945d3) main_welc_pane_ParamLimits

0x8804,	// (0x00090d47) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8804,	// (0x00090d47) main_sp_fs_ctrlbar_pane_g3

0x881c,	// (0x00090d5f) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x881c,	// (0x00090d5f) main_sp_fs_ctrlbar_pane_g4

0x884e,	// (0x00090d91) toolbar2_fixed_button_pane_cp01

0x8859,	// (0x00090d9c) toolbar2_fixed_button_pane_cp02

0x8864,	// (0x00090da7) toolbar2_fixed_button_pane_cp03

0x9a7c,	// (0x00091fbf) list_welc_entry_pane_ParamLimits

0x9a7c,	// (0x00091fbf) list_welc_entry_pane

0x9ad8,	// (0x0009201b) main_welc_pane_g3_ParamLimits

0x9ad8,	// (0x0009201b) main_welc_pane_g3

0x9b1a,	// (0x0009205d) main_welc_pane_t2_ParamLimits

0x9b1a,	// (0x0009205d) main_welc_pane_t2

0x9b2e,	// (0x00092071) main_welc_pane_t3_ParamLimits

0x9b2e,	// (0x00092071) main_welc_pane_t3

0x0005,

0xfe33,	// (0x00098376) main_welc_pane_t_ParamLimits

0xfe33,	// (0x00098376) main_welc_pane_t

0x9c2a,	// (0x0009216d) welc_button_pane_ParamLimits

0x9c2a,	// (0x0009216d) welc_button_pane

0x9c88,	// (0x000921cb) welc_service_logo_pane_ParamLimits

0x9c88,	// (0x000921cb) welc_service_logo_pane

0x9d73,	// (0x000922b6) list_single_welc_entry_pane_ParamLimits

0x9d73,	// (0x000922b6) list_single_welc_entry_pane

0x9d84,	// (0x000922c7) list_single_welc_entry_pane_g1

0x9d8c,	// (0x000922cf) list_single_welc_entry_pane_t1

0x9d9a,	// (0x000922dd) list_single_welc_entry_pane_t2

0x0001,

0xfe45,	// (0x00098388) list_single_welc_entry_pane_t

0xaa49,	// (0x00092f8c) bg_button_pane_cp035

0x9da8,	// (0x000922eb) welc_button_pane_t1

0xbcab,	// (0x000941ee) welc_service_logo_pane_g1

0xbcb4,	// (0x000941f7) welc_service_logo_pane_g2

0x0001,

0xfe4a,	// (0x0009838d) welc_service_logo_pane_g

0x25ac,	// (0x0008aaef) main_int_radio_pane

0xac92,	// (0x000931d5) list_single_fs_dyc_pane_g1

0x98b4,	// (0x00091df7) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x98b4,	// (0x00091df7) list_double_large_graphic_phob2_pane_g3

0x98c0,	// (0x00091e03) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x98c0,	// (0x00091e03) list_double_large_graphic_phob2_pane_g4

0x9db6,	// (0x000922f9) main_int_radio1_pane_ParamLimits

0x9db6,	// (0x000922f9) main_int_radio1_pane

0xc09e,	// (0x000945e1) find_pane_cp02

0x9dc8,	// (0x0009230b) input_focus_pane_cp12_ParamLimits

0x9dc8,	// (0x0009230b) input_focus_pane_cp12

0x9dd4,	// (0x00092317) input_focus_pane_cp13_ParamLimits

0x9dd4,	// (0x00092317) input_focus_pane_cp13

0x9dec,	// (0x0009232f) input_focus_pane_cp14_ParamLimits

0x9dec,	// (0x0009232f) input_focus_pane_cp14

0xc0a7,	// (0x000945ea) int_radio1_listscroll_pane

0x9e04,	// (0x00092347) main_int_radio1_pane_g1_ParamLimits

0x9e04,	// (0x00092347) main_int_radio1_pane_g1

0x9e14,	// (0x00092357) main_int_radio1_pane_t1_ParamLimits

0x9e14,	// (0x00092357) main_int_radio1_pane_t1

0x9e28,	// (0x0009236b) main_int_radio1_pane_t2_ParamLimits

0x9e28,	// (0x0009236b) main_int_radio1_pane_t2

0x9e3c,	// (0x0009237f) main_int_radio1_pane_t3_ParamLimits

0x9e3c,	// (0x0009237f) main_int_radio1_pane_t3

0x9e50,	// (0x00092393) main_int_radio1_pane_t4_ParamLimits

0x9e50,	// (0x00092393) main_int_radio1_pane_t4

0xc0b1,	// (0x000945f4) main_int_radio1_pane_t5_ParamLimits

0xc0b1,	// (0x000945f4) main_int_radio1_pane_t5

0x9e67,	// (0x000923aa) main_int_radio1_pane_t6_ParamLimits

0x9e67,	// (0x000923aa) main_int_radio1_pane_t6

0x9e79,	// (0x000923bc) main_int_radio1_pane_t7_ParamLimits

0x9e79,	// (0x000923bc) main_int_radio1_pane_t7

0x9e8b,	// (0x000923ce) main_int_radio1_pane_t8_ParamLimits

0x9e8b,	// (0x000923ce) main_int_radio1_pane_t8

0x9e9f,	// (0x000923e2) main_int_radio1_pane_t9_ParamLimits

0x9e9f,	// (0x000923e2) main_int_radio1_pane_t9

0x9eb1,	// (0x000923f4) main_int_radio1_pane_t10_ParamLimits

0x9eb1,	// (0x000923f4) main_int_radio1_pane_t10

0x9ee2,	// (0x00092425) main_int_radio1_pane_t11_ParamLimits

0x9ee2,	// (0x00092425) main_int_radio1_pane_t11

0x9f13,	// (0x00092456) main_int_radio1_pane_t12_ParamLimits

0x9f13,	// (0x00092456) main_int_radio1_pane_t12

0x000b,

0xfe4f,	// (0x00098392) main_int_radio1_pane_t_ParamLimits

0xfe4f,	// (0x00098392) main_int_radio1_pane_t

0xc0c3,	// (0x00094606) int_radio_list_pane

0xb6ae,	// (0x00093bf1) scroll_pane_cp037

0xc0cb,	// (0x0009460e) list_double_large_graphic_int_radio_pane_ParamLimits

0xc0cb,	// (0x0009460e) list_double_large_graphic_int_radio_pane

0xc0e4,	// (0x00094627) list_double_large_graphic_int_radio_pane_g1

0x0498,	// (0x000889db) list_double_large_graphic_int_radio_pane_t1

0x04a6,	// (0x000889e9) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe68,	// (0x000983ab) list_double_large_graphic_int_radio_pane_t

0xaa49,	// (0x00092f8c) list_highlight_pane_cp027

0xbc60,	// (0x000941a3) main_button_pane_4

0x9ae4,	// (0x00092027) main_welc_pane_g4_ParamLimits

0x9ae4,	// (0x00092027) main_welc_pane_g4

0x9b40,	// (0x00092083) main_welc_pane_t4_ParamLimits

0x9b40,	// (0x00092083) main_welc_pane_t4

0x9b52,	// (0x00092095) main_welc_pane_t5_ParamLimits

0x9b52,	// (0x00092095) main_welc_pane_t5

0x9b82,	// (0x000920c5) main_welc_pane_t6_ParamLimits

0x9b82,	// (0x000920c5) main_welc_pane_t6

0x9c38,	// (0x0009217b) welc_button_pane_2_ParamLimits

0x9c38,	// (0x0009217b) welc_button_pane_2

0x9c50,	// (0x00092193) welc_button_pane_3_ParamLimits

0x9c50,	// (0x00092193) welc_button_pane_3

0xbc68,	// (0x000941ab) welc_button_pane_4

0x9c6a,	// (0x000921ad) welc_button_pane_5_ParamLimits

0x9c6a,	// (0x000921ad) welc_button_pane_5

0x231f,	// (0x0008a862) main_popup_welc_pane

0xc105,	// (0x00094648) main_welc_sk_g3

0xc10f,	// (0x00094652) main_welc_sk_g4

0xc119,	// (0x0009465c) main_welc_sk_t3

0xc129,	// (0x0009466c) main_welc_sk_t4

0xc139,	// (0x0009467c) popup_welc_pane_t4

0xc147,	// (0x0009468a) popup_welc_pane_t5

0xc155,	// (0x00094698) popup_welc_pane_t6

0x25ac,	// (0x0008aaef) main_acti_pane

0xaa49,	// (0x00092f8c) main_sso_pane

0x9f2a,	// (0x0009246d) sso_body_pane_ParamLimits

0x9f2a,	// (0x0009246d) sso_body_pane

0x9f38,	// (0x0009247b) sso_logo_pane_ParamLimits

0x9f38,	// (0x0009247b) sso_logo_pane

0x9f69,	// (0x000924ac) sso_sk_pane_ParamLimits

0x9f69,	// (0x000924ac) sso_sk_pane

0x04c4,	// (0x00088a07) main_sso_logo_pane_g1

0x9f76,	// (0x000924b9) sso_sk_pane_t1_ParamLimits

0x9f76,	// (0x000924b9) sso_sk_pane_t1

0x9f8a,	// (0x000924cd) sso_sk_pane_t2_ParamLimits

0x9f8a,	// (0x000924cd) sso_sk_pane_t2

0x0001,

0xfe6d,	// (0x000983b0) sso_sk_pane_t_ParamLimits

0xfe6d,	// (0x000983b0) sso_sk_pane_t

0x04cf,	// (0x00088a12) aid_sso_gap

0x04d8,	// (0x00088a1b) aid_sso_txt1

0x04e2,	// (0x00088a25) aid_sso_txt2

0x04ec,	// (0x00088a2f) aid_sso_txt3

0x0002,

0xfe72,	// (0x000983b5) aid_sso_txt

0x04f6,	// (0x00088a39) aid_sso_widget

0x9fe7,	// (0x0009252a) sso_btn_pane_ParamLimits

0x9fe7,	// (0x0009252a) sso_btn_pane

0xa05b,	// (0x0009259e) sso_option_pane_ParamLimits

0xa05b,	// (0x0009259e) sso_option_pane

0xa107,	// (0x0009264a) sso_query_pane_ParamLimits

0xa107,	// (0x0009264a) sso_query_pane

0xa157,	// (0x0009269a) sso_query_pane_cp01_ParamLimits

0xa157,	// (0x0009269a) sso_query_pane_cp01

0xa1a9,	// (0x000926ec) sso_t_hdr_pane_ParamLimits

0xa1a9,	// (0x000926ec) sso_t_hdr_pane

0xa1cd,	// (0x00092710) sso_t_nml_pane_ParamLimits

0xa1cd,	// (0x00092710) sso_t_nml_pane

0x0500,	// (0x00088a43) sso_t_sub_pane

0x9f45,	// (0x00092488) sso_popup_window_ParamLimits

0x9f45,	// (0x00092488) sso_popup_window

0x9f9c,	// (0x000924df) sso_apps_pane_ParamLimits

0x9f9c,	// (0x000924df) sso_apps_pane

0x9fbf,	// (0x00092502) sso_body_pane_g1

0x9fc7,	// (0x0009250a) sso_body_pane_t1

0x9fd7,	// (0x0009251a) sso_body_pane_t2

0x0001,

0xfe79,	// (0x000983bc) sso_body_pane_t

0xa02b,	// (0x0009256e) sso_btn_pane_cp01_ParamLimits

0xa02b,	// (0x0009256e) sso_btn_pane_cp01

0xa0d9,	// (0x0009261c) sso_prog_pane_ParamLimits

0xa0d9,	// (0x0009261c) sso_prog_pane

0xa21d,	// (0x00092760) sso_t_hdr_pane_t1_ParamLimits

0xa21d,	// (0x00092760) sso_t_hdr_pane_t1

0x0515,	// (0x00088a58) input_focus_pane_cp10_ParamLimits

0x0515,	// (0x00088a58) input_focus_pane_cp10

0x0529,	// (0x00088a6c) sso_query_pane_t1_ParamLimits

0x0529,	// (0x00088a6c) sso_query_pane_t1

0x053c,	// (0x00088a7f) sso_query_pane_t2_ParamLimits

0x053c,	// (0x00088a7f) sso_query_pane_t2

0x0555,	// (0x00088a98) sso_query_pane_t3_ParamLimits

0x0555,	// (0x00088a98) sso_query_pane_t3

0x057f,	// (0x00088ac2) sso_query_pane_t4_ParamLimits

0x057f,	// (0x00088ac2) sso_query_pane_t4

0x0003,

0xfe7e,	// (0x000983c1) sso_query_pane_t_ParamLimits

0xfe7e,	// (0x000983c1) sso_query_pane_t

0xc0fc,	// (0x0009463f) bg_button_pane_cp22

0xc0ed,	// (0x00094630) sso_btn_pane_t1

0xa236,	// (0x00092779) sso_t_nml_pane_t1_ParamLimits

0xa236,	// (0x00092779) sso_t_nml_pane_t1

0x05a3,	// (0x00088ae6) sso_option_row_pane_ParamLimits

0x05a3,	// (0x00088ae6) sso_option_row_pane

0x05b0,	// (0x00088af3) sso_t_sub_pane_t1_ParamLimits

0x05b0,	// (0x00088af3) sso_t_sub_pane_t1

0xc090,	// (0x000945d3) bg_popup_window_pane_cp11_ParamLimits

0xc090,	// (0x000945d3) bg_popup_window_pane_cp11

0x05cd,	// (0x00088b10) popup_sk_window_cp01_ParamLimits

0x05cd,	// (0x00088b10) popup_sk_window_cp01

0x05da,	// (0x00088b1d) sso_popup_body_pane_ParamLimits

0x05da,	// (0x00088b1d) sso_popup_body_pane

0x05e7,	// (0x00088b2a) scroll_pane_cp21_ParamLimits

0x05e7,	// (0x00088b2a) scroll_pane_cp21

0x05f4,	// (0x00088b37) sso_popup_body_t_pane_ParamLimits

0x05f4,	// (0x00088b37) sso_popup_body_t_pane

0x0601,	// (0x00088b44) sso_popup_body_t_hdr_pane_ParamLimits

0x0601,	// (0x00088b44) sso_popup_body_t_hdr_pane

0xa253,	// (0x00092796) sso_popup_body_t_nml_pane_ParamLimits

0xa253,	// (0x00092796) sso_popup_body_t_nml_pane

0xa271,	// (0x000927b4) sso_popup_body_t_sub_pane_ParamLimits

0xa271,	// (0x000927b4) sso_popup_body_t_sub_pane

0x0613,	// (0x00088b56) sso_popup_body_t_hdr_pane_t1

0xa294,	// (0x000927d7) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa294,	// (0x000927d7) sso_popup_body_t_nml_pane_t1

0x0623,	// (0x00088b66) sso_popup_body_t_sub_pane_t1_ParamLimits

0x0623,	// (0x00088b66) sso_popup_body_t_sub_pane_t1

0xc4c6,	// (0x00094a09) sso_prog_pane_g1

0xa2db,	// (0x0009281e) sso_apps_pane_comp1_ParamLimits

0xa2db,	// (0x0009281e) sso_apps_pane_comp1

0x0648,	// (0x00088b8b) sso_apps_pane_comp1_g1

0x0650,	// (0x00088b93) sso_apps_pane_comp1_t1

0x066c,	// (0x00088baf) sso_option_row_pane_g1

0x0674,	// (0x00088bb7) sso_option_row_pane_t1

0xb3d9,	// (0x0009391c) list_cmail_pane_ParamLimits

0xaa49,	// (0x00092f8c) main_call7_pane

0x9a6a,	// (0x00091fad) bg_welc_area_ParamLimits

0x9a6a,	// (0x00091fad) bg_welc_area

0x9bb8,	// (0x000920fb) sso_t_hdr_pane_a_t1_ParamLimits

0x9bb8,	// (0x000920fb) sso_t_hdr_pane_a_t1

0x9bcc,	// (0x0009210f) sso_t_nml_pane_a_t1_ParamLimits

0x9bcc,	// (0x0009210f) sso_t_nml_pane_a_t1

0x9bf6,	// (0x00092139) sso_t_sub_pane_a_t1_ParamLimits

0x9bf6,	// (0x00092139) sso_t_sub_pane_a_t1

0x9c7a,	// (0x000921bd) welc_button_pane_cp01_ParamLimits

0x9c7a,	// (0x000921bd) welc_button_pane_cp01

0xc0ed,	// (0x00094630) sso_btn_pane_t1_copy1

0xc0fc,	// (0x0009463f) welc_button_pane_2_comp1

0xc163,	// (0x000946a6) sso_t_hdr_pane_p_t1

0xc173,	// (0x000946b6) sso_t_nml_pane_p_t1

0x04b4,	// (0x000889f7) sso_t_sub_pane_p_t1

0xaa49,	// (0x00092f8c) main_att_pane

0xaa49,	// (0x00092f8c) main_vod_pane

0x0500,	// (0x00088a43) sso_t_sub_pane_ParamLimits

0x065e,	// (0x00088ba1) input_focus_pane_cp10_t1

0x0674,	// (0x00088bb7) sso_option_row_pane_t1_ParamLimits

0xa2f5,	// (0x00092838) main_att_body_pane_ParamLimits

0xa2f5,	// (0x00092838) main_att_body_pane

0xa309,	// (0x0009284c) att_btn_emg_pane_ParamLimits

0xa309,	// (0x0009284c) att_btn_emg_pane

0xa321,	// (0x00092864) att_btn_pane_ParamLimits

0xa321,	// (0x00092864) att_btn_pane

0xa389,	// (0x000928cc) att_btn_pane_cp01_ParamLimits

0xa389,	// (0x000928cc) att_btn_pane_cp01

0xa3a3,	// (0x000928e6) att_li_srv_pane_ParamLimits

0xa3a3,	// (0x000928e6) att_li_srv_pane

0xa3b5,	// (0x000928f8) att_opt_pane_ParamLimits

0xa3b5,	// (0x000928f8) att_opt_pane

0xa3f9,	// (0x0009293c) att_query_pane_ParamLimits

0xa3f9,	// (0x0009293c) att_query_pane

0xa469,	// (0x000929ac) att_query_pane_cp01_ParamLimits

0xa469,	// (0x000929ac) att_query_pane_cp01

0xa4ad,	// (0x000929f0) att_t_hdr_pane_ParamLimits

0xa4ad,	// (0x000929f0) att_t_hdr_pane

0xa513,	// (0x00092a56) att_t_nml_pane_ParamLimits

0xa513,	// (0x00092a56) att_t_nml_pane

0xa57b,	// (0x00092abe) att_t_nml_pane_cp01_ParamLimits

0xa57b,	// (0x00092abe) att_t_nml_pane_cp01

0xa59f,	// (0x00092ae2) att_t_nmlb_pane_ParamLimits

0xa59f,	// (0x00092ae2) att_t_nmlb_pane

0xa603,	// (0x00092b46) att_term_pane_ParamLimits

0xa603,	// (0x00092b46) att_term_pane

0xa645,	// (0x00092b88) main_att_body_pane_g1_ParamLimits

0xa645,	// (0x00092b88) main_att_body_pane_g1

0x068d,	// (0x00088bd0) att_t_hdr_pane_t1_ParamLimits

0x068d,	// (0x00088bd0) att_t_hdr_pane_t1

0x06a6,	// (0x00088be9) att_t_nml_pane_t1_ParamLimits

0x06a6,	// (0x00088be9) att_t_nml_pane_t1

0x06cb,	// (0x00088c0e) att_btn_pane_t1

0xc0fc,	// (0x0009463f) bg_button_pane_cp23

0xa66f,	// (0x00092bb2) att_li_srv_row_pane_ParamLimits

0xa66f,	// (0x00092bb2) att_li_srv_row_pane

0x06db,	// (0x00088c1e) att_t_nmlb_pane_t1_ParamLimits

0x06db,	// (0x00088c1e) att_t_nmlb_pane_t1

0x06f9,	// (0x00088c3c) att_query_pane_t1

0x0708,	// (0x00088c4b) att_query_pane_t2

0x0717,	// (0x00088c5a) att_query_pane_t3

0x0002,

0xfe87,	// (0x000983ca) att_query_pane_t

0x0726,	// (0x00088c69) input_focus_pane_cp11

0x072f,	// (0x00088c72) att_term_pane_t1_ParamLimits

0x072f,	// (0x00088c72) att_term_pane_t1

0xaa49,	// (0x00092f8c) att_opt_row_pane

0x066c,	// (0x00088baf) att_opt_row_pane_g1

0x074c,	// (0x00088c8f) att_opt_row_pane_t1_ParamLimits

0x074c,	// (0x00088c8f) att_opt_row_pane_t1

0xa67f,	// (0x00092bc2) att_li_srv_row_pane_g1

0xa687,	// (0x00092bca) att_li_srv_row_pane_t1_ParamLimits

0xa687,	// (0x00092bca) att_li_srv_row_pane_t1

0xa69c,	// (0x00092bdf) att_li_srv_row_pane_t2_ParamLimits

0xa69c,	// (0x00092bdf) att_li_srv_row_pane_t2

0x0001,

0xfe8e,	// (0x000983d1) att_li_srv_row_pane_t_ParamLimits

0xfe8e,	// (0x000983d1) att_li_srv_row_pane_t

0x0765,	// (0x00088ca8) att_btn_close_pane_g1

0xaa49,	// (0x00092f8c) bg_button_pane_cp24

0xa6b1,	// (0x00092bf4) main_vod_body_pane_ParamLimits

0xa6b1,	// (0x00092bf4) main_vod_body_pane

0xa6bf,	// (0x00092c02) main_vod_body_pane_g1_ParamLimits

0xa6bf,	// (0x00092c02) main_vod_body_pane_g1

0xa6ef,	// (0x00092c32) scroll_pane_cp24_ParamLimits

0xa6ef,	// (0x00092c32) scroll_pane_cp24

0xa737,	// (0x00092c7a) vod_btn_pane_ParamLimits

0xa737,	// (0x00092c7a) vod_btn_pane

0xa775,	// (0x00092cb8) vod_det_pane_ParamLimits

0xa775,	// (0x00092cb8) vod_det_pane

0xa79f,	// (0x00092ce2) vod_logo_g1_ParamLimits

0xa79f,	// (0x00092ce2) vod_logo_g1

0xa7d9,	// (0x00092d1c) vod_opt_pane_ParamLimits

0xa7d9,	// (0x00092d1c) vod_opt_pane

0xa809,	// (0x00092d4c) vod_opt_pane_cp01_ParamLimits

0xa809,	// (0x00092d4c) vod_opt_pane_cp01

0xa831,	// (0x00092d74) vod_query_pane_ParamLimits

0xa831,	// (0x00092d74) vod_query_pane

0xa859,	// (0x00092d9c) vod_query_pane_cp01_ParamLimits

0xa859,	// (0x00092d9c) vod_query_pane_cp01

0xa865,	// (0x00092da8) vod_t_nml_pane_ParamLimits

0xa865,	// (0x00092da8) vod_t_nml_pane

0xa907,	// (0x00092e4a) vod_t_nml_pane_cp01_ParamLimits

0xa907,	// (0x00092e4a) vod_t_nml_pane_cp01

0xa93f,	// (0x00092e82) vod_t_sub_pane_ParamLimits

0xa93f,	// (0x00092e82) vod_t_sub_pane

0xa96b,	// (0x00092eae) vod_t_sub_pane_cp01_ParamLimits

0xa96b,	// (0x00092eae) vod_t_sub_pane_cp01

0x0726,	// (0x00088c69) vod_query_field_pane

0x076d,	// (0x00088cb0) vod_query_pane_t1

0xc0fc,	// (0x0009463f) bg_button_pane_cp25

0xc0ed,	// (0x00094630) sso_btn_pane_t1_copy2

0xa993,	// (0x00092ed6) vod_t_nml_pane_t1_ParamLimits

0xa993,	// (0x00092ed6) vod_t_nml_pane_t1

0x077c,	// (0x00088cbf) vod_opt_row_pane_ParamLimits

0x077c,	// (0x00088cbf) vod_opt_row_pane

0x078e,	// (0x00088cd1) vod_t_sub_pane_t1_ParamLimits

0x078e,	// (0x00088cd1) vod_t_sub_pane_t1

0x07a7,	// (0x00088cea) vod_det_cell_pane_ParamLimits

0x07a7,	// (0x00088cea) vod_det_cell_pane

0xaa49,	// (0x00092f8c) input_focus_pane_cp15

0x07b8,	// (0x00088cfb) vod_query_field_pane_t1

0x07c6,	// (0x00088d09) vod_opt_row_pane_g1_ParamLimits

0x07c6,	// (0x00088d09) vod_opt_row_pane_g1

0x07d2,	// (0x00088d15) vod_opt_row_pane_t1_ParamLimits

0x07d2,	// (0x00088d15) vod_opt_row_pane_t1

0x07f1,	// (0x00088d34) vod_det_cell_field_pane

0x07fa,	// (0x00088d3d) vod_det_cell_pane_g1

0x0802,	// (0x00088d45) vod_det_cell_pane_t1

0xaa49,	// (0x00092f8c) input_focus_pane_cp16

0x0811,	// (0x00088d54) vod_det_cell_field_pane_t1

0xa9c8,	// (0x00092f0b) call7_btn_grp_pane_ParamLimits

0xa9c8,	// (0x00092f0b) call7_btn_grp_pane

0xa9d7,	// (0x00092f1a) call7_bubble_pane_ParamLimits

0xa9d7,	// (0x00092f1a) call7_bubble_pane

0xa9e5,	// (0x00092f28) cell_call7_btn_pane_ParamLimits

0xa9e5,	// (0x00092f28) cell_call7_btn_pane

0xa9f4,	// (0x00092f37) call7_pane_g1_ParamLimits

0xa9f4,	// (0x00092f37) call7_pane_g1

0xaa03,	// (0x00092f46) call7_windows_conf_pane_ParamLimits

0xaa03,	// (0x00092f46) call7_windows_conf_pane

0xaa1f,	// (0x00092f62) popup_call7_1st_window_ParamLimits

0xaa1f,	// (0x00092f62) popup_call7_1st_window

0xaa2d,	// (0x00092f70) popup_call7_2nd_window_ParamLimits

0xaa2d,	// (0x00092f70) popup_call7_2nd_window

0xaa3b,	// (0x00092f7e) popup_call7_3rd_window_ParamLimits

0xaa3b,	// (0x00092f7e) popup_call7_3rd_window

0xaa49,	// (0x00092f8c) bg_button_pane_cp26

0xbaa5,	// (0x00093fe8) cell_call7_btn_pane_g1

0xbcbd,	// (0x00094200) cell_call7_btn_pane_t1

0xaa49,	// (0x00092f8c) bg_popup_window_pane_cp12

0x081f,	// (0x00088d62) popup_call7_1st_window_g1

0x0827,	// (0x00088d6a) popup_call7_1st_window_g2

0x082f,	// (0x00088d72) popup_call7_1st_window_g3

0x0002,

0xfe93,	// (0x000983d6) popup_call7_1st_window_g

0x0837,	// (0x00088d7a) popup_call7_1st_window_t1

0x0846,	// (0x00088d89) popup_call7_1st_window_t2

0x0854,	// (0x00088d97) popup_call7_1st_window_t3

0x0002,

0xfe9a,	// (0x000983dd) popup_call7_1st_window_t

0xaa49,	// (0x00092f8c) bg_popup_window_pane_cp13

0x0862,	// (0x00088da5) popup_call7_2nd_window_g1

0x086a,	// (0x00088dad) popup_call7_2nd_window_g2

0x0872,	// (0x00088db5) popup_call7_2nd_window_g3

0x0002,

0xfea1,	// (0x000983e4) popup_call7_2nd_window_g

0x087a,	// (0x00088dbd) popup_call7_2nd_window_t1

0xaa49,	// (0x00092f8c) bg_popup_window_pane_cp14

0x0889,	// (0x00088dcc) call7_list_conf_pane

0x0891,	// (0x00088dd4) call7_list_conf_row_pane_ParamLimits

0x0891,	// (0x00088dd4) call7_list_conf_row_pane

0x08a4,	// (0x00088de7) call7_list_conf_row_pane_g1

0x08ac,	// (0x00088def) call7_list_conf_row_pane_g2

0x0001,

0xfea8,	// (0x000983eb) call7_list_conf_row_pane_g

0x08b4,	// (0x00088df7) call7_list_conf_row_pane_t1

0xaa49,	// (0x00092f8c) list_highlight_pane_cp22

0xa0ab,	// (0x000925ee) sso_option_pane_cp01_ParamLimits

0xa0ab,	// (0x000925ee) sso_option_pane_cp01

0xc40d,	// (0x00094950) msg_header_pane_ParamLimits

0xd240,	// (0x00095783) bg_button_pane_cp01_ParamLimits

0xd254,	// (0x00095797) input_focus_pane_cp07_ParamLimits

0x8898,	// (0x00090ddb) popup_email_progress_window

0xc4c6,	// (0x00094a09) popup_email_progress_window_g1

0x08c2,	// (0x00088e05) popup_email_progress_window_g2

0x0001,

0xfead,	// (0x000983f0) popup_email_progress_window_g

0x08ca,	// (0x00088e0d) popup_email_progress_window_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
