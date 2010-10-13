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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0006b513 };

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
0x692c,	// (0x00071e3f) Screen

0x6938,	// (0x00071e4b) application_window

0x6994,	// (0x00071ea7) area_bottom_pane_ParamLimits

0x6994,	// (0x00071ea7) area_bottom_pane

0x69ec,	// (0x00071eff) area_top_pane_ParamLimits

0x69ec,	// (0x00071eff) area_top_pane

0x6a50,	// (0x00071f63) call_video_uplink_pane_ParamLimits

0x6a50,	// (0x00071f63) call_video_uplink_pane

0x6a8f,	// (0x00071fa2) main_pane_ParamLimits

0x6a8f,	// (0x00071fa2) main_pane

0x42e0,	// (0x0006f7f3) context_pane

0x9690,	// (0x00074ba3) navi_pane

0x96b6,	// (0x00074bc9) popup_cale_events_window_ParamLimits

0x96b6,	// (0x00074bc9) popup_cale_events_window

0x42f3,	// (0x0006f806) popup_mup_playback_window

0x96ce,	// (0x00074be1) signal_pane

0x1e74,	// (0x0006d387) main_browser_pane

0x204d,	// (0x0006d560) main_burst_pane

0x951c,	// (0x00074a2f) main_calc_pane

0x42d4,	// (0x0006f7e7) main_cale_day_pane

0x6fb6,	// (0x000724c9) main_cale_month_pane

0x42d4,	// (0x0006f7e7) main_cale_week_pane

0x204d,	// (0x0006d560) main_call_pane

0x1ae6,	// (0x0006cff9) main_call_poc_pane

0x204d,	// (0x0006d560) main_camera_pane

0x204d,	// (0x0006d560) main_chi_dic_pane

0x2d75,	// (0x0006e288) main_clock_pane

0x1ae6,	// (0x0006cff9) main_fmradio_pane

0x204d,	// (0x0006d560) main_graph_messa_pane

0x1ae6,	// (0x0006cff9) main_help_pane

0x1e74,	// (0x0006d387) main_im_pane

0x1d41,	// (0x0006d254) main_image_pane_ParamLimits

0x1d41,	// (0x0006d254) main_image_pane

0x1ae6,	// (0x0006cff9) main_location2_pane

0x204d,	// (0x0006d560) main_location_pane

0x1d41,	// (0x0006d254) main_messa_pane

0x1ae6,	// (0x0006cff9) main_mp2_pane

0x204d,	// (0x0006d560) main_mp_pane

0x1ae6,	// (0x0006cff9) main_msg_pane

0x1ae6,	// (0x0006cff9) main_mup_eq_pane

0x1ae6,	// (0x0006cff9) main_mup_pane

0x1e74,	// (0x0006d387) main_notes_pane

0x1ae6,	// (0x0006cff9) main_pec_pane

0x1ae6,	// (0x0006cff9) main_phob_pane

0x1ae6,	// (0x0006cff9) main_pinb_pane

0x1ae6,	// (0x0006cff9) main_postcard_pane

0x1ae6,	// (0x0006cff9) main_qdial_pane

0x204d,	// (0x0006d560) main_skin_pane

0x1ae6,	// (0x0006cff9) main_smil2_pane

0x204d,	// (0x0006d560) main_smil_pane

0x204d,	// (0x0006d560) main_video_pane

0x204d,	// (0x0006d560) main_video_tele_pane

0x1d41,	// (0x0006d254) main_viewer_pane_ParamLimits

0x1d41,	// (0x0006d254) main_viewer_pane

0x204d,	// (0x0006d560) main_vorec_pane

0x955a,	// (0x00074a6d) popup_blid_sat_info_window_ParamLimits

0x955a,	// (0x00074a6d) popup_blid_sat_info_window

0x957a,	// (0x00074a8d) popup_dyc_status_message_window_ParamLimits

0x957a,	// (0x00074a8d) popup_dyc_status_message_window

0x958a,	// (0x00074a9d) popup_grid_large_graphic_window_ParamLimits

0x958a,	// (0x00074a9d) popup_grid_large_graphic_window

0x961b,	// (0x00074b2e) popup_loc_request_window_ParamLimits

0x961b,	// (0x00074b2e) popup_loc_request_window

0x9668,	// (0x00074b7b) popup_wml_address_window_ParamLimits

0x9668,	// (0x00074b7b) popup_wml_address_window

0x93f4,	// (0x00074907) call_muted_g1

0x90e7,	// (0x000745fa) popup_call_audio_conf_window_ParamLimits

0x90e7,	// (0x000745fa) popup_call_audio_conf_window

0x9404,	// (0x00074917) popup_call_audio_first_window_ParamLimits

0x9404,	// (0x00074917) popup_call_audio_first_window

0x9444,	// (0x00074957) popup_call_audio_in_window_ParamLimits

0x9444,	// (0x00074957) popup_call_audio_in_window

0x9468,	// (0x0007497b) popup_call_audio_out_window_ParamLimits

0x9468,	// (0x0007497b) popup_call_audio_out_window

0x948a,	// (0x0007499d) popup_call_audio_second_window_ParamLimits

0x948a,	// (0x0007499d) popup_call_audio_second_window

0x94ba,	// (0x000749cd) popup_call_audio_wait_window_ParamLimits

0x94ba,	// (0x000749cd) popup_call_audio_wait_window

0x94db,	// (0x000749ee) popup_number_entry_window_ParamLimits

0x94db,	// (0x000749ee) popup_number_entry_window

0x16d3,	// (0x0006cbe6) bg_popup_call_pane_cp05_ParamLimits

0x16d3,	// (0x0006cbe6) bg_popup_call_pane_cp05

0x16f3,	// (0x0006cc06) popup_number_entry_window_t1

0x1706,	// (0x0006cc19) popup_number_entry_window_t2

0x1718,	// (0x0006cc2b) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x0007a553) popup_number_entry_window_t

0x172a,	// (0x0006cc3d) text_title_cp2

0x173d,	// (0x0006cc50) bg_popup_call_pane_cp_ParamLimits

0x173d,	// (0x0006cc50) bg_popup_call_pane_cp

0x174b,	// (0x0006cc5e) call_thumbnail_pane

0x1753,	// (0x0006cc66) popup_call_audio_in_window_g1_ParamLimits

0x1753,	// (0x0006cc66) popup_call_audio_in_window_g1

0x175f,	// (0x0006cc72) popup_call_audio_in_window_g2_ParamLimits

0x175f,	// (0x0006cc72) popup_call_audio_in_window_g2

0x176b,	// (0x0006cc7e) popup_call_audio_in_window_g3_ParamLimits

0x176b,	// (0x0006cc7e) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x0007a55c) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x0007a55c) popup_call_audio_in_window_g

0x1777,	// (0x0006cc8a) popup_call_audio_in_window_t1_ParamLimits

0x1777,	// (0x0006cc8a) popup_call_audio_in_window_t1

0x1793,	// (0x0006cca6) popup_call_audio_in_window_t2_ParamLimits

0x1793,	// (0x0006cca6) popup_call_audio_in_window_t2

0x17af,	// (0x0006ccc2) popup_call_audio_in_window_t3_ParamLimits

0x17af,	// (0x0006ccc2) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x0007a563) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x0007a563) popup_call_audio_in_window_t

0x173d,	// (0x0006cc50) bg_popup_call_pane_cp01_ParamLimits

0x173d,	// (0x0006cc50) bg_popup_call_pane_cp01

0x174b,	// (0x0006cc5e) call_thumbnail_pane_cp02

0x17c2,	// (0x0006ccd5) call_type_pane_cp022

0x17ca,	// (0x0006ccdd) popup_call_audio_out_window_g1_ParamLimits

0x17ca,	// (0x0006ccdd) popup_call_audio_out_window_g1

0x17dc,	// (0x0006ccef) popup_call_audio_out_window_g2_ParamLimits

0x17dc,	// (0x0006ccef) popup_call_audio_out_window_g2

0x17e8,	// (0x0006ccfb) popup_call_audio_out_window_g3_ParamLimits

0x17e8,	// (0x0006ccfb) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x0007a56a) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x0007a56a) popup_call_audio_out_window_g

0x17fa,	// (0x0006cd0d) popup_call_audio_out_window_t1_ParamLimits

0x17fa,	// (0x0006cd0d) popup_call_audio_out_window_t1

0x1812,	// (0x0006cd25) popup_call_audio_out_window_t2_ParamLimits

0x1812,	// (0x0006cd25) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x0007a571) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x0007a571) popup_call_audio_out_window_t

0x1827,	// (0x0006cd3a) bg_popup_call_pane_ParamLimits

0x1827,	// (0x0006cd3a) bg_popup_call_pane

0x6c8f,	// (0x000721a2) call_thumbnail_pane_cp_ParamLimits

0x6c8f,	// (0x000721a2) call_thumbnail_pane_cp

0x18ab,	// (0x0006cdbe) call_type_pane_cp01_ParamLimits

0x18ab,	// (0x0006cdbe) call_type_pane_cp01

0x18ef,	// (0x0006ce02) popup_call_audio_first_window_g1_ParamLimits

0x18ef,	// (0x0006ce02) popup_call_audio_first_window_g1

0x193b,	// (0x0006ce4e) popup_call_audio_first_window_g2_ParamLimits

0x193b,	// (0x0006ce4e) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x0007a576) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x0007a576) popup_call_audio_first_window_g

0x197f,	// (0x0006ce92) popup_call_audio_first_window_t1_ParamLimits

0x197f,	// (0x0006ce92) popup_call_audio_first_window_t1

0x1a2b,	// (0x0006cf3e) popup_call_audio_first_window_t4_ParamLimits

0x1a2b,	// (0x0006cf3e) popup_call_audio_first_window_t4

0x1ab7,	// (0x0006cfca) popup_call_audio_first_window_t5_ParamLimits

0x1ab7,	// (0x0006cfca) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x0007a57b) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x0007a57b) popup_call_audio_first_window_t

0x1ae6,	// (0x0006cff9) bg_popup_call_pane_cp02

0x1af0,	// (0x0006d003) call_type_pane_cp023

0x1af8,	// (0x0006d00b) popup_call_audio_wait_window_g1

0x1b00,	// (0x0006d013) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x0007a582) popup_call_audio_wait_window_g

0x1b08,	// (0x0006d01b) popup_call_audio_wait_window_t3

0x1b16,	// (0x0006d029) bg_popup_call_pane_cp03_ParamLimits

0x1b16,	// (0x0006d029) bg_popup_call_pane_cp03

0x1b76,	// (0x0006d089) call_thumbnail_pane_cp011_ParamLimits

0x1b76,	// (0x0006d089) call_thumbnail_pane_cp011

0x1b82,	// (0x0006d095) call_type_pane_cp034_ParamLimits

0x1b82,	// (0x0006d095) call_type_pane_cp034

0x1bbe,	// (0x0006d0d1) popup_call_audio_second_window_g1_ParamLimits

0x1bbe,	// (0x0006d0d1) popup_call_audio_second_window_g1

0x1bfa,	// (0x0006d10d) popup_call_audio_second_window_g2_ParamLimits

0x1bfa,	// (0x0006d10d) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x0007a587) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x0007a587) popup_call_audio_second_window_g

0x1c36,	// (0x0006d149) popup_call_audio_second_window_t1_ParamLimits

0x1c36,	// (0x0006d149) popup_call_audio_second_window_t1

0x1cb7,	// (0x0006d1ca) popup_call_audio_second_window_t2_ParamLimits

0x1cb7,	// (0x0006d1ca) popup_call_audio_second_window_t2

0x1ced,	// (0x0006d200) popup_call_audio_second_window_t3_ParamLimits

0x1ced,	// (0x0006d200) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x0007a58c) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x0007a58c) popup_call_audio_second_window_t

0x1ae6,	// (0x0006cff9) bg_popup_call_pane_cp04

0x1d23,	// (0x0006d236) list_conf_pane

0x1d2b,	// (0x0006d23e) popup_call_audio_conf_window_t1

0x1d39,	// (0x0006d24c) call_thumbnail_pane_g1

0x1d41,	// (0x0006d254) bg_pinb_pane_ParamLimits

0x1d41,	// (0x0006d254) bg_pinb_pane

0x1d4f,	// (0x0006d262) find_pinb_pane

0x1d41,	// (0x0006d254) listscroll_pinb_pane_ParamLimits

0x1d41,	// (0x0006d254) listscroll_pinb_pane

0x1d59,	// (0x0006d26c) pinb_bg_pane_g1

0x1d59,	// (0x0006d26c) pinb_bg_pane_g2

0x1d59,	// (0x0006d26c) pinb_bg_pane_g3

0x1d59,	// (0x0006d26c) pinb_bg_pane_g4

0x1d59,	// (0x0006d26c) pinb_bg_pane_g5

0x1d59,	// (0x0006d26c) pinb_bg_pane_g6

0x1d59,	// (0x0006d26c) pinb_bg_pane_g7

0x1d59,	// (0x0006d26c) pinb_bg_pane_g8

0x1d59,	// (0x0006d26c) pinb_bg_pane_g9

0x1d59,	// (0x0006d26c) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x0007a593) pinb_bg_pane_g

0x16c9,	// (0x0006cbdc) grid_pinb_pane

0x16c9,	// (0x0006cbdc) list_pinb_pane

0x1d63,	// (0x0006d276) scroll_pane_cp01_ParamLimits

0x1d63,	// (0x0006d276) scroll_pane_cp01

0x1d71,	// (0x0006d284) find_pinb_pane_g1_ParamLimits

0x1d71,	// (0x0006d284) find_pinb_pane_g1

0x1d89,	// (0x0006d29c) find_pinb_pane_t1

0x1d9b,	// (0x0006d2ae) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x0007a5ad) find_pinb_pane_t

0x1db0,	// (0x0006d2c3) input_focus_pane_cp01_ParamLimits

0x1db0,	// (0x0006d2c3) input_focus_pane_cp01

0x1dbc,	// (0x0006d2cf) cell_pinb_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) cell_pinb_pane

0x1dca,	// (0x0006d2dd) cell_pinb_pane_g1_ParamLimits

0x1dca,	// (0x0006d2dd) cell_pinb_pane_g1

0x1dd8,	// (0x0006d2eb) cell_pinb_pane_g2_ParamLimits

0x1dd8,	// (0x0006d2eb) cell_pinb_pane_g2

0x1dd8,	// (0x0006d2eb) cell_pinb_pane_g3_ParamLimits

0x1dd8,	// (0x0006d2eb) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x0007a5b2) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x0007a5b2) cell_pinb_pane_g

0x1ae6,	// (0x0006cff9) grid_highlight_pane_cp01

0x1dbc,	// (0x0006d2cf) list_pinb_item_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) list_pinb_item_pane

0x16c9,	// (0x0006cbdc) list_highlight_pane_cp02

0x1de6,	// (0x0006d2f9) list_pinb_item_pane_g1_ParamLimits

0x1de6,	// (0x0006d2f9) list_pinb_item_pane_g1

0x1dd8,	// (0x0006d2eb) list_pinb_item_pane_g2_ParamLimits

0x1dd8,	// (0x0006d2eb) list_pinb_item_pane_g2

0x1dca,	// (0x0006d2dd) list_pinb_item_pane_g3_ParamLimits

0x1dca,	// (0x0006d2dd) list_pinb_item_pane_g3

0x1dd8,	// (0x0006d2eb) list_pinb_item_pane_g4_ParamLimits

0x1dd8,	// (0x0006d2eb) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x0007a5b9) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x0007a5b9) list_pinb_item_pane_g

0x1e02,	// (0x0006d315) list_pinb_item_pane_t1_ParamLimits

0x1e02,	// (0x0006d315) list_pinb_item_pane_t1

0x6ccd,	// (0x000721e0) calc_display_pane

0x6ceb,	// (0x000721fe) calc_paper_pane

0x6d07,	// (0x0007221a) grid_calc_pane

0x16c9,	// (0x0006cbdc) bg_list_pane_cp01

0x1e16,	// (0x0006d329) clock_g1

0x1e16,	// (0x0006d329) clock_g2

0x0001,

0xf0af,	// (0x0007a5c2) clock_g

0x1e20,	// (0x0006d333) clock_t1_ParamLimits

0x1e20,	// (0x0006d333) clock_t1

0x1e34,	// (0x0006d347) clock_t2_ParamLimits

0x1e34,	// (0x0006d347) clock_t2

0x1e34,	// (0x0006d347) clock_t3_ParamLimits

0x1e34,	// (0x0006d347) clock_t3

0x1e34,	// (0x0006d347) clock_t4_ParamLimits

0x1e34,	// (0x0006d347) clock_t4

0x1e20,	// (0x0006d333) clock_t5_ParamLimits

0x1e20,	// (0x0006d333) clock_t5

0x1e34,	// (0x0006d347) clock_t6_ParamLimits

0x1e34,	// (0x0006d347) clock_t6

0x1e34,	// (0x0006d347) clock_t7_ParamLimits

0x1e34,	// (0x0006d347) clock_t7

0x1e34,	// (0x0006d347) clock_t8_ParamLimits

0x1e34,	// (0x0006d347) clock_t8

0x1e34,	// (0x0006d347) clock_t9_ParamLimits

0x1e34,	// (0x0006d347) clock_t9

0x0008,

0xf0b4,	// (0x0007a5c7) clock_t_ParamLimits

0xf0b4,	// (0x0007a5c7) clock_t

0x16c9,	// (0x0006cbdc) popup_clock_analogue_window_cp02

0x16c9,	// (0x0006cbdc) popup_clock_digital_window_cp01

0x1ae6,	// (0x0006cff9) listscroll_help_pane

0x1ae6,	// (0x0006cff9) phob_pre_status_pane

0x1e48,	// (0x0006d35b) grid_qdial_pane

0x1d41,	// (0x0006d254) listscroll_mce_pane

0x1d41,	// (0x0006d254) bg_notes_pane

0x1e52,	// (0x0006d365) list_notes_pane

0x6d33,	// (0x00072246) scroll_pane_cp06

0x1e60,	// (0x0006d373) bg_calc_paper_pane

0x6d42,	// (0x00072255) list_calc_pane

0x1e74,	// (0x0006d387) bg_calc_display_pane

0x6d5c,	// (0x0007226f) calc_display_pane_t1

0x6d71,	// (0x00072284) calc_display_pane_t2

0x6d86,	// (0x00072299) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x0007a5da) calc_display_pane_t

0x6d98,	// (0x000722ab) cell_calc_pane_ParamLimits

0x6d98,	// (0x000722ab) cell_calc_pane

0x1e80,	// (0x0006d393) bg_calc_paper_pane_g1

0x1e98,	// (0x0006d3ab) bg_calc_paper_pane_g2

0x1e8c,	// (0x0006d39f) bg_calc_paper_pane_g3

0x1eb0,	// (0x0006d3c3) bg_calc_paper_pane_g4

0x1ea4,	// (0x0006d3b7) bg_calc_paper_pane_g5

0x6dc5,	// (0x000722d8) bg_calc_paper_pane_g6

0x6dd6,	// (0x000722e9) bg_calc_paper_pane_g7

0x6de7,	// (0x000722fa) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x0007a5e1) bg_calc_paper_pane_g

0x6df8,	// (0x0007230b) calc_bg_paper_pane_g9

0x6e09,	// (0x0007231c) list_calc_item_pane_ParamLimits

0x6e09,	// (0x0007231c) list_calc_item_pane

0x1ebc,	// (0x0006d3cf) list_calc_item_pane_g1

0x6e35,	// (0x00072348) list_calc_item_pane_t1_ParamLimits

0x6e35,	// (0x00072348) list_calc_item_pane_t1

0x6e47,	// (0x0007235a) list_calc_item_pane_t2_ParamLimits

0x6e47,	// (0x0007235a) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x0007a5f2) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x0007a5f2) list_calc_item_pane_t

0x1d59,	// (0x0006d26c) cell_calc_pane_g1

0x1ec9,	// (0x0006d3dc) grid_highlight_pane_cp02

0x6e77,	// (0x0007238a) bg_calc_display_pane_g1

0x6e80,	// (0x00072393) bg_calc_display_pane_g2

0x6e8a,	// (0x0007239d) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x0007a5fc) bg_calc_display_pane_g

0x6e93,	// (0x000723a6) cell_qdial_pane_ParamLimits

0x6e93,	// (0x000723a6) cell_qdial_pane

0x6ea7,	// (0x000723ba) cell_qdial_pane_g1_ParamLimits

0x6ea7,	// (0x000723ba) cell_qdial_pane_g1

0x6eb4,	// (0x000723c7) cell_qdial_pane_g2_ParamLimits

0x6eb4,	// (0x000723c7) cell_qdial_pane_g2

0x1ef4,	// (0x0006d407) cell_qdial_pane_g3_ParamLimits

0x1ef4,	// (0x0006d407) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x0007a603) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x0007a603) cell_qdial_pane_g

0x6ed2,	// (0x000723e5) cell_qdial_pane_t1_ParamLimits

0x6ed2,	// (0x000723e5) cell_qdial_pane_t1

0x6eea,	// (0x000723fd) cell_qdial_pane_t2_ParamLimits

0x6eea,	// (0x000723fd) cell_qdial_pane_t2

0x6efd,	// (0x00072410) cell_qdial_pane_t3_ParamLimits

0x6efd,	// (0x00072410) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x0007a60c) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x0007a60c) cell_qdial_pane_t

0x1ae6,	// (0x0006cff9) grid_highlight_pane_cp04

0x1f00,	// (0x0006d413) thumbnail_qdial_pane_ParamLimits

0x1f00,	// (0x0006d413) thumbnail_qdial_pane

0x1f5c,	// (0x0006d46f) list_help_pane

0x1f65,	// (0x0006d478) scroll_pane_cp02

0x6f10,	// (0x00072423) help_list_pane_t1_ParamLimits

0x6f10,	// (0x00072423) help_list_pane_t1

0x6f46,	// (0x00072459) bg_notes_pane_g2

0x6f4e,	// (0x00072461) bg_notes_pane_g3

0x6f56,	// (0x00072469) notes_bg_pane_g1

0x6f5e,	// (0x00072471) notes_bg_pane_g4

0x6f66,	// (0x00072479) notes_bg_pane_g5

0x6f6e,	// (0x00072481) notes_bg_pane_g6

0x6f76,	// (0x00072489) notes_bg_pane_g7

0x6f7e,	// (0x00072491) notes_bg_pane_g8

0x6f86,	// (0x00072499) notes_bg_pane_g9

0x0006,

0xf117,	// (0x0007a62a) notes_bg_pane_g

0x6f8e,	// (0x000724a1) list_notes_text_pane_ParamLimits

0x6f8e,	// (0x000724a1) list_notes_text_pane

0x1f8c,	// (0x0006d49f) list_notes_text_pane_g1

0x5c61,	// (0x00071174) list_notes_text_pane_t1

0x6fb6,	// (0x000724c9) listscroll_cale_week_pane

0x6fdb,	// (0x000724ee) bg_cale_heading_pane

0x1faf,	// (0x0006d4c2) bg_cale_pane_cp01

0x6ffb,	// (0x0007250e) cale_week_corner_pane

0x7015,	// (0x00072528) cale_week_day_heading_pane

0x7035,	// (0x00072548) cale_week_scroll_pane_g1

0x7050,	// (0x00072563) cale_week_scroll_pane_g2

0x7063,	// (0x00072576) cale_week_scroll_pane_g3

0x7076,	// (0x00072589) cale_week_scroll_pane_g4

0x7089,	// (0x0007259c) cale_week_scroll_pane_g5

0x709c,	// (0x000725af) cale_week_scroll_pane_g6

0x70af,	// (0x000725c2) cale_week_scroll_pane_g7

0x70c4,	// (0x000725d7) cale_week_scroll_pane_g8

0x70d9,	// (0x000725ec) cale_week_scroll_pane_g9

0x70ec,	// (0x000725ff) cale_week_scroll_pane_g10

0x70ff,	// (0x00072612) cale_week_scroll_pane_g11

0x7112,	// (0x00072625) cale_week_scroll_pane_g12

0x7129,	// (0x0007263c) cale_week_scroll_pane_g13

0x7144,	// (0x00072657) cale_week_scroll_pane_g14

0x715f,	// (0x00072672) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x0007a639) cale_week_scroll_pane_g

0x718f,	// (0x000726a2) cale_week_time_pane

0x71a4,	// (0x000726b7) grid_cale_week_pane

0x1fde,	// (0x0006d4f1) scroll_pane_cp08

0x71c3,	// (0x000726d6) cell_cale_week_pane_ParamLimits

0x71c3,	// (0x000726d6) cell_cale_week_pane

0x7225,	// (0x00072738) cale_week_day_heading_pane_t1

0x7240,	// (0x00072753) cale_week_day_heading_pane_t2

0x725b,	// (0x0007276e) cale_week_day_heading_pane_t3

0x7276,	// (0x00072789) cale_week_day_heading_pane_t4

0x7291,	// (0x000727a4) cale_week_day_heading_pane_t5

0x72ac,	// (0x000727bf) cale_week_day_heading_pane_t6

0x72c7,	// (0x000727da) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x0007a65a) cale_week_day_heading_pane_t

0x1ffb,	// (0x0006d50e) bg_cale_side_pane

0x72e2,	// (0x000727f5) cale_week_time_pane_t1

0x72fc,	// (0x0007280f) cale_week_time_pane_t2

0x7316,	// (0x00072829) cale_week_time_pane_t3

0x7330,	// (0x00072843) cale_week_time_pane_t4

0x734a,	// (0x0007285d) cale_week_time_pane_t5

0x7364,	// (0x00072877) cale_week_time_pane_t6

0x7382,	// (0x00072895) cale_week_time_pane_t7

0x73a4,	// (0x000728b7) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x0007a669) cale_week_time_pane_t

0x73c8,	// (0x000728db) cell_cale_week_pane_g2

0x73ec,	// (0x000728ff) cell_cale_week_pane_g3_ParamLimits

0x73ec,	// (0x000728ff) cell_cale_week_pane_g3

0x2009,	// (0x0006d51c) grid_highlight_pane_cp07

0x2011,	// (0x0006d524) listscroll_gms_pane

0x201b,	// (0x0006d52e) grid_gms_pane

0x2024,	// (0x0006d537) listscroll_gms_pane_g1

0x202c,	// (0x0006d53f) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x0007a67a) listscroll_gms_pane_g

0x7404,	// (0x00072917) scroll_pane_cp010

0x740f,	// (0x00072922) cell_gms_pane_ParamLimits

0x740f,	// (0x00072922) cell_gms_pane

0x7422,	// (0x00072935) cell_gms_pane_g1

0x2034,	// (0x0006d547) cell_gms_pane_g2

0x1f8c,	// (0x0006d49f) cell_gms_pane_g3

0x203c,	// (0x0006d54f) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x0007a67f) cell_gms_pane_g

0x2045,	// (0x0006d558) grid_highlight_pane_cp09

0x9378,	// (0x0007488b) phob_pre_status_pane_g1

0x9380,	// (0x00074893) phob_pre_status_pane_g2

0x9388,	// (0x0007489b) phob_pre_status_pane_g3

0x9390,	// (0x000748a3) phob_pre_status_pane_g4

0x0004,

0xf525,	// (0x0007aa38) phob_pre_status_pane_g

0x93a0,	// (0x000748b3) phob_pre_status_pane_t1

0x93b0,	// (0x000748c3) phob_pre_status_pane_t2

0x93c0,	// (0x000748d3) phob_pre_status_pane_t3

0x0002,

0xf530,	// (0x0007aa43) phob_pre_status_pane_t

0x204d,	// (0x0006d560) bg_list_pane_cp05

0x7432,	// (0x00072945) grid_vorec_pane

0x743c,	// (0x0007294f) vorec_t1

0x744a,	// (0x0007295d) vorec_t2

0x7458,	// (0x0007296b) vorec_t3

0x7466,	// (0x00072979) vorec_t4

0xdb16,	// (0x00079029) vorec_t5

0xdb24,	// (0x00079037) vorec_t6

0x0004,

0xf175,	// (0x0007a688) vorec_t

0xdb32,	// (0x00079045) wait_bar_pane_cp01

0x7482,	// (0x00072995) cell_vorec_pane_ParamLimits

0x7482,	// (0x00072995) cell_vorec_pane

0x7495,	// (0x000729a8) cell_vorec_pane_g1

0x1ae6,	// (0x0006cff9) grid_highlight_pane_cp05

0x1dbc,	// (0x0006d2cf) cams_zoom_pane

0x1dbc,	// (0x0006d2cf) image_vga_pane

0x1dd8,	// (0x0006d2eb) main_camera_pane_g1

0x1dd8,	// (0x0006d2eb) main_camera_pane_g2

0x1dd8,	// (0x0006d2eb) main_camera_pane_g3

0x1dd8,	// (0x0006d2eb) main_camera_pane_g4

0x1dd8,	// (0x0006d2eb) main_camera_pane_g5

0x1dd8,	// (0x0006d2eb) main_camera_pane_g6

0x1dd8,	// (0x0006d2eb) main_camera_pane_g7

0x0007,

0xf180,	// (0x0007a693) main_camera_pane_g

0x1e34,	// (0x0006d347) main_camera_pane_t1

0x1e34,	// (0x0006d347) main_camera_pane_t2

0x0001,

0xf191,	// (0x0007a6a4) main_camera_pane_t

0x749f,	// (0x000729b2) cams_zoom_pane_cp_ParamLimits

0x749f,	// (0x000729b2) cams_zoom_pane_cp

0x74cd,	// (0x000729e0) image_cif_pane_ParamLimits

0x74cd,	// (0x000729e0) image_cif_pane

0x16c9,	// (0x0006cbdc) image_subqcif_pane

0x74db,	// (0x000729ee) main_video_pane_g1_ParamLimits

0x74db,	// (0x000729ee) main_video_pane_g1

0x7503,	// (0x00072a16) main_video_pane_g2_ParamLimits

0x7503,	// (0x00072a16) main_video_pane_g2

0x7536,	// (0x00072a49) main_video_pane_g3_ParamLimits

0x7536,	// (0x00072a49) main_video_pane_g3

0x7536,	// (0x00072a49) main_video_pane_g4_ParamLimits

0x7536,	// (0x00072a49) main_video_pane_g4

0x7564,	// (0x00072a77) main_video_pane_g5_ParamLimits

0x7564,	// (0x00072a77) main_video_pane_g5

0x2055,	// (0x0006d568) main_video_pane_g6_ParamLimits

0x2055,	// (0x0006d568) main_video_pane_g6

0x0006,

0xf196,	// (0x0007a6a9) main_video_pane_g_ParamLimits

0xf196,	// (0x0007a6a9) main_video_pane_g

0x7580,	// (0x00072a93) main_video_pane_t1_ParamLimits

0x7580,	// (0x00072a93) main_video_pane_t1

0x1e16,	// (0x0006d329) cams_zoom_pane_g1

0x1e16,	// (0x0006d329) cams_zoom_pane_g2

0x1e16,	// (0x0006d329) cams_zoom_pane_g3

0x1e16,	// (0x0006d329) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x0007a6b8) cams_zoom_pane_g

0x1dbc,	// (0x0006d2cf) grid_cams_pane

0x1dbc,	// (0x0006d2cf) linegrid_cams_pane

0x75ba,	// (0x00072acd) cell_cams_pane_ParamLimits

0x75ba,	// (0x00072acd) cell_cams_pane

0x16c9,	// (0x0006cbdc) cams_burst_image_pane

0x1e16,	// (0x0006d329) cell_cams_pane_g1

0x16c9,	// (0x0006cbdc) grid_highlight_pane_cp03

0x1d59,	// (0x0006d26c) mp_bg_pane_g1

0x16c9,	// (0x0006cbdc) bg_list_pane_cp03

0x16c9,	// (0x0006cbdc) bg_mp_pane

0x16c9,	// (0x0006cbdc) grid_mp_pane

0x1e16,	// (0x0006d329) media_player_g1

0x2604,	// (0x0006db17) media_player_t1

0x2604,	// (0x0006db17) media_player_t2

0x2604,	// (0x0006db17) media_player_t3

0x2604,	// (0x0006db17) media_player_t4

0x2604,	// (0x0006db17) media_player_t5

0x2604,	// (0x0006db17) media_player_t6

0x2604,	// (0x0006db17) media_player_t7

0x0006,

0xf50f,	// (0x0007aa22) media_player_t

0x16c9,	// (0x0006cbdc) wait_bar_pane_cp02

0xf4f4,	// (0x0007aa07) main_usb_pane_t

0x2d75,	// (0x0006e288) cell_mp_pane

0x1d59,	// (0x0006d26c) cell_mp_pane_g1

0x1ae6,	// (0x0006cff9) grid_highlight_pane_cp06

0x206f,	// (0x0006d582) grid_skin_colour_pane

0x2077,	// (0x0006d58a) list_highlight_pane_cp03

0x75cf,	// (0x00072ae2) skin_g1

0x207f,	// (0x0006d592) skin_t1

0x208e,	// (0x0006d5a1) skin_t2

0x0001,

0xf1d3,	// (0x0007a6e6) skin_t

0x75d9,	// (0x00072aec) cell_skin_colour_pane_ParamLimits

0x75d9,	// (0x00072aec) cell_skin_colour_pane

0x209c,	// (0x0006d5af) cell_skin_colour_pane_g1

0x765d,	// (0x00072b70) call_video_g1_ParamLimits

0x765d,	// (0x00072b70) call_video_g1

0x766d,	// (0x00072b80) call_video_g2_ParamLimits

0x766d,	// (0x00072b80) call_video_g2

0x0001,

0xf1d8,	// (0x0007a6eb) call_video_g_ParamLimits

0xf1d8,	// (0x0007a6eb) call_video_g

0x76c7,	// (0x00072bda) call_video_uplink_pane_cp1_ParamLimits

0x76c7,	// (0x00072bda) call_video_uplink_pane_cp1

0x20ae,	// (0x0006d5c1) call_video_uplink_pane_cp2

0x7793,	// (0x00072ca6) video_down_crop_pane_ParamLimits

0x7793,	// (0x00072ca6) video_down_crop_pane

0x7891,	// (0x00072da4) video_down_pane_ParamLimits

0x7891,	// (0x00072da4) video_down_pane

0x20b6,	// (0x0006d5c9) video_down_subqcif_pane_ParamLimits

0x20b6,	// (0x0006d5c9) video_down_subqcif_pane

0x20ce,	// (0x0006d5e1) video_down_subqcif_pane_cp_ParamLimits

0x20ce,	// (0x0006d5e1) video_down_subqcif_pane_cp

0x20f4,	// (0x0006d607) im_reading_pane_ParamLimits

0x20f4,	// (0x0006d607) im_reading_pane

0x79b1,	// (0x00072ec4) im_writing_pane_ParamLimits

0x79b1,	// (0x00072ec4) im_writing_pane

0x79cf,	// (0x00072ee2) im_reading_pane_t1

0x210e,	// (0x0006d621) list_im_pane

0x211f,	// (0x0006d632) scroll_pane_cp07

0x7a23,	// (0x00072f36) im_writing_pane_t1_ParamLimits

0x7a23,	// (0x00072f36) im_writing_pane_t1

0x2138,	// (0x0006d64b) im_writing_pane_t2_ParamLimits

0x2138,	// (0x0006d64b) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x0007a6f5) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x0007a6f5) im_writing_pane_t

0x1ae6,	// (0x0006cff9) input_focus_pane_cp04

0x1ae6,	// (0x0006cff9) input_focus_pane_cp05

0x7a38,	// (0x00072f4b) list_im_single_pane_ParamLimits

0x7a38,	// (0x00072f4b) list_im_single_pane

0x7a5c,	// (0x00072f6f) list_single_im_pane_t1

0x204d,	// (0x0006d560) blid_accuracy_pane

0x204d,	// (0x0006d560) blid_compass_pane

0x428c,	// (0x0006f79f) main_location_t1

0x428c,	// (0x0006f79f) main_location_t2

0x428c,	// (0x0006f79f) main_location_t3

0x0002,

0xf51e,	// (0x0007aa31) main_location_t

0x1ae6,	// (0x0006cff9) aid_levels_location

0x1d59,	// (0x0006d26c) blid_accuracy_pane_g1

0x1d59,	// (0x0006d26c) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x0007a749) blid_accuracy_pane_g

0x2180,	// (0x0006d693) wml_content_pane

0x21be,	// (0x0006d6d1) wml_button_pane_ParamLimits

0x21be,	// (0x0006d6d1) wml_button_pane

0x7a6b,	// (0x00072f7e) wml_list_single_large_pane_ParamLimits

0x7a6b,	// (0x00072f7e) wml_list_single_large_pane

0x7a95,	// (0x00072fa8) wml_list_single_medium_pane_ParamLimits

0x7a95,	// (0x00072fa8) wml_list_single_medium_pane

0x7ac6,	// (0x00072fd9) wml_list_single_small_pane_ParamLimits

0x7ac6,	// (0x00072fd9) wml_list_single_small_pane

0x21d2,	// (0x0006d6e5) wml_selection_box_pane_ParamLimits

0x21d2,	// (0x0006d6e5) wml_selection_box_pane

0x21e5,	// (0x0006d6f8) wml_list_single_pane_t1

0x21f4,	// (0x0006d707) wml_list_single_medium_pane_t1

0x2203,	// (0x0006d716) wml_list_single_large_pane_t1

0x2212,	// (0x0006d725) input_focus_pane_cp02_ParamLimits

0x2212,	// (0x0006d725) input_focus_pane_cp02

0x2225,	// (0x0006d738) wml_selection_box_pane_g1

0x222e,	// (0x0006d741) wml_selection_box_pane_t1_ParamLimits

0x222e,	// (0x0006d741) wml_selection_box_pane_t1

0x1d41,	// (0x0006d254) bg_wml_button_pane_ParamLimits

0x1d41,	// (0x0006d254) bg_wml_button_pane

0x2246,	// (0x0006d759) wml_button_pane_g1

0x224e,	// (0x0006d761) wml_button_pane_t1

0x2246,	// (0x0006d759) wml_button_bg_pane_g1

0x225e,	// (0x0006d771) wml_button_bg_pane_g2

0x2266,	// (0x0006d779) wml_button_bg_pane_g3

0x226e,	// (0x0006d781) wml_button_bg_pane_g4

0x2276,	// (0x0006d789) wml_button_bg_pane_g5

0x227e,	// (0x0006d791) wml_button_bg_pane_g6

0x2286,	// (0x0006d799) wml_button_bg_pane_g7

0x228e,	// (0x0006d7a1) wml_button_bg_pane_g8

0x2296,	// (0x0006d7a9) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x0007a6fa) wml_button_bg_pane_g

0x7b00,	// (0x00073013) bg_list_pane_cp02

0x229e,	// (0x0006d7b1) mce_header_pane_ParamLimits

0x229e,	// (0x0006d7b1) mce_header_pane

0x22b4,	// (0x0006d7c7) mce_icon_pane

0x22b4,	// (0x0006d7c7) mce_image_pane

0x22bd,	// (0x0006d7d0) mce_text_pane_ParamLimits

0x22bd,	// (0x0006d7d0) mce_text_pane

0x7b0a,	// (0x0007301d) scroll_pane_cp03

0x21b6,	// (0x0006d6c9) scroll_pane_cp04

0x22d0,	// (0x0006d7e3) scroll_pane_cp05_ParamLimits

0x22d0,	// (0x0006d7e3) scroll_pane_cp05

0x7b14,	// (0x00073027) mce_header_field_pane_ParamLimits

0x7b14,	// (0x00073027) mce_header_field_pane

0x7b34,	// (0x00073047) mce_header_field_pane_2_ParamLimits

0x7b34,	// (0x00073047) mce_header_field_pane_2

0x7b4a,	// (0x0007305d) mce_header_field_pane_3

0x7b52,	// (0x00073065) list_single_mce_message_pane_ParamLimits

0x7b52,	// (0x00073065) list_single_mce_message_pane

0x7b7d,	// (0x00073090) list_single_mce_smart_pane_ParamLimits

0x7b7d,	// (0x00073090) list_single_mce_smart_pane

0x22dc,	// (0x0006d7ef) input_focus_pane_cp03

0x22e5,	// (0x0006d7f8) list_header_data_pane

0x7bb3,	// (0x000730c6) mce_header_field_pane_t1

0x7bc1,	// (0x000730d4) list_single_mce_header_pane_ParamLimits

0x7bc1,	// (0x000730d4) list_single_mce_header_pane

0x22ed,	// (0x0006d800) list_single_mce_header_pane_t1

0x22fc,	// (0x0006d80f) list_single_mce_message_pane_g1

0x2304,	// (0x0006d817) list_single_mce_message_pane_t1

0x7c13,	// (0x00073126) bg_cale_heading_pane_cp01_ParamLimits

0x7c13,	// (0x00073126) bg_cale_heading_pane_cp01

0x2312,	// (0x0006d825) bg_cale_pane_cp02_ParamLimits

0x2312,	// (0x0006d825) bg_cale_pane_cp02

0x7c61,	// (0x00073174) cale_month_corner_pane

0x7c80,	// (0x00073193) cale_month_day_heading_pane_ParamLimits

0x7c80,	// (0x00073193) cale_month_day_heading_pane

0x7ce6,	// (0x000731f9) cale_month_pane_g1_ParamLimits

0x7ce6,	// (0x000731f9) cale_month_pane_g1

0x7d29,	// (0x0007323c) cale_month_pane_g2_ParamLimits

0x7d29,	// (0x0007323c) cale_month_pane_g2

0x7d61,	// (0x00073274) cale_month_pane_g3_ParamLimits

0x7d61,	// (0x00073274) cale_month_pane_g3

0x7dad,	// (0x000732c0) cale_month_pane_g4_ParamLimits

0x7dad,	// (0x000732c0) cale_month_pane_g4

0x7df9,	// (0x0007330c) cale_month_pane_g5_ParamLimits

0x7df9,	// (0x0007330c) cale_month_pane_g5

0x7e45,	// (0x00073358) cale_month_pane_g6_ParamLimits

0x7e45,	// (0x00073358) cale_month_pane_g6

0x7e91,	// (0x000733a4) cale_month_pane_g7_ParamLimits

0x7e91,	// (0x000733a4) cale_month_pane_g7

0x7ef5,	// (0x00073408) cale_month_pane_g8_ParamLimits

0x7ef5,	// (0x00073408) cale_month_pane_g8

0x7f59,	// (0x0007346c) cale_month_pane_g9_ParamLimits

0x7f59,	// (0x0007346c) cale_month_pane_g9

0x7fb7,	// (0x000734ca) cale_month_pane_g10_ParamLimits

0x7fb7,	// (0x000734ca) cale_month_pane_g10

0x8013,	// (0x00073526) cale_month_pane_g11_ParamLimits

0x8013,	// (0x00073526) cale_month_pane_g11

0x8067,	// (0x0007357a) cale_month_pane_g12_ParamLimits

0x8067,	// (0x0007357a) cale_month_pane_g12

0x80bd,	// (0x000735d0) cale_month_pane_g13_ParamLimits

0x80bd,	// (0x000735d0) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x0007a70d) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x0007a70d) cale_month_pane_g

0x8113,	// (0x00073626) cale_month_week_pane

0x8137,	// (0x0007364a) grid_cale_month_pane_ParamLimits

0x8137,	// (0x0007364a) grid_cale_month_pane

0x8190,	// (0x000736a3) cale_month_day_heading_pane_t1

0x8216,	// (0x00073729) cale_month_day_heading_pane_t2

0x828f,	// (0x000737a2) cale_month_day_heading_pane_t3

0x8308,	// (0x0007381b) cale_month_day_heading_pane_t4

0x8381,	// (0x00073894) cale_month_day_heading_pane_t5

0x83fa,	// (0x0007390d) cale_month_day_heading_pane_t6

0x8473,	// (0x00073986) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x0007a728) cale_month_day_heading_pane_t

0x1ffb,	// (0x0006d50e) bg_cale_side_pane_cp01

0x8504,	// (0x00073a17) cale_month_week_pane_t1

0x851d,	// (0x00073a30) cale_month_week_pane_t2

0x8536,	// (0x00073a49) cale_month_week_pane_t3

0x854f,	// (0x00073a62) cale_month_week_pane_t4

0x8568,	// (0x00073a7b) cale_month_week_pane_t5

0x8589,	// (0x00073a9c) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x0007a737) cale_month_week_pane_t

0x85aa,	// (0x00073abd) cell_cale_month_pane_ParamLimits

0x85aa,	// (0x00073abd) cell_cale_month_pane

0x86cc,	// (0x00073bdf) cell_cale_month_pane_g1

0x86d8,	// (0x00073beb) cell_cale_month_pane_t1_ParamLimits

0x86d8,	// (0x00073beb) cell_cale_month_pane_t1

0x2009,	// (0x0006d51c) grid_highlight_pane_cp08

0x1d59,	// (0x0006d26c) main_smil_g1

0x8704,	// (0x00073c17) smil_status_pane

0x2351,	// (0x0006d864) smil_text_pane

0x4196,	// (0x0006f6a9) bg_popup_call3_rect_pane_g8

0x419e,	// (0x0006f6b1) bg_popup_call3_rect_pane_g9

0x0008,

0xf4b2,	// (0x0007a9c5) bg_popup_call3_rect_pane_g

0x4368,	// (0x0006f87b) smil_status_volume_pane_g1

0x235b,	// (0x0006d86e) smil_status_pane_t1

0x9717,	// (0x00074c2a) volume_smil_pane

0x2372,	// (0x0006d885) list_smil_text_pane

0x8717,	// (0x00073c2a) scroll_pane_cp011

0x8722,	// (0x00073c35) smil_text_list_pane_t1_ParamLimits

0x8722,	// (0x00073c35) smil_text_list_pane_t1

0x879a,	// (0x00073cad) aid_volume_smil_ParamLimits

0x879a,	// (0x00073cad) aid_volume_smil

0x1d59,	// (0x0006d26c) smil_volume_pane_g1

0x1d59,	// (0x0006d26c) smil_volume_pane_g2

0x0001,

0xf236,	// (0x0007a749) smil_volume_pane_g

0x6fb6,	// (0x000724c9) listscroll_cale_day_pane

0x237c,	// (0x0006d88f) bg_cale_pane

0x2394,	// (0x0006d8a7) list_cale_pane

0x23b7,	// (0x0006d8ca) scroll_pane_cp09

0x23c8,	// (0x0006d8db) cale_bg_pane_g1

0x23d0,	// (0x0006d8e3) cale_bg_pane_g2

0x23d8,	// (0x0006d8eb) cale_bg_pane_g3

0x23e0,	// (0x0006d8f3) cale_bg_pane_g4

0x23e8,	// (0x0006d8fb) cale_bg_pane_g5

0x23f0,	// (0x0006d903) cale_bg_pane_g6

0x23f8,	// (0x0006d90b) cale_bg_pane_g7

0x2400,	// (0x0006d913) cale_bg_pane_g8

0x2408,	// (0x0006d91b) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x0007a74e) cale_bg_pane_g

0x87bc,	// (0x00073ccf) list_cale_time_pane_ParamLimits

0x87bc,	// (0x00073ccf) list_cale_time_pane

0x2418,	// (0x0006d92b) list_cale_time_pane_g1_ParamLimits

0x2418,	// (0x0006d92b) list_cale_time_pane_g1

0x2424,	// (0x0006d937) list_cale_time_pane_g2_ParamLimits

0x2424,	// (0x0006d937) list_cale_time_pane_g2

0x87de,	// (0x00073cf1) list_cale_time_pane_g3_ParamLimits

0x87de,	// (0x00073cf1) list_cale_time_pane_g3

0x87ec,	// (0x00073cff) list_cale_time_pane_g4_ParamLimits

0x87ec,	// (0x00073cff) list_cale_time_pane_g4

0x87fa,	// (0x00073d0d) list_cale_time_pane_g5_ParamLimits

0x87fa,	// (0x00073d0d) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x0007a761) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x0007a761) list_cale_time_pane_g

0x243e,	// (0x0006d951) list_cale_time_pane_t1_ParamLimits

0x243e,	// (0x0006d951) list_cale_time_pane_t1

0x2466,	// (0x0006d979) list_cale_time_pane_t2_ParamLimits

0x2466,	// (0x0006d979) list_cale_time_pane_t2

0x8a9d,	// (0x00073fb0) aid_blid_cardinal_pane

0x8adf,	// (0x00073ff2) compass_pane_t4

0x248e,	// (0x0006d9a1) list_cale_time_pane_t4_ParamLimits

0x248e,	// (0x0006d9a1) list_cale_time_pane_t4

0x8aed,	// (0x00074000) compass_pane_t5

0x8afd,	// (0x00074010) compass_pane_t6

0x8b0b,	// (0x0007401e) compass_pane_t7

0x2eba,	// (0x0006e3cd) navi_pane_cc_t1

0x3097,	// (0x0006e5aa) aid_phob_thumbnail_center_pane

0x8ec2,	// (0x000743d5) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x0007a76e) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x0007a76e) list_cale_time_pane_t

0x173d,	// (0x0006cc50) bg_popup_window_pane_cp02_ParamLimits

0x173d,	// (0x0006cc50) bg_popup_window_pane_cp02

0x2536,	// (0x0006da49) heading_pane_cp01_ParamLimits

0x2536,	// (0x0006da49) heading_pane_cp01

0x2542,	// (0x0006da55) loc_req_pane_ParamLimits

0x2542,	// (0x0006da55) loc_req_pane

0x2552,	// (0x0006da65) loc_type_pane_ParamLimits

0x2552,	// (0x0006da65) loc_type_pane

0x2564,	// (0x0006da77) loc_type_pane_t1_ParamLimits

0x2564,	// (0x0006da77) loc_type_pane_t1

0x2576,	// (0x0006da89) loc_type_pane_t2_ParamLimits

0x2576,	// (0x0006da89) loc_type_pane_t2

0x2588,	// (0x0006da9b) loc_type_pane_t3_ParamLimits

0x2588,	// (0x0006da9b) loc_type_pane_t3

0x0002,

0xf262,	// (0x0007a775) loc_type_pane_t_ParamLimits

0xf262,	// (0x0007a775) loc_type_pane_t

0x259a,	// (0x0006daad) list_loc_req_pane

0x25a4,	// (0x0006dab7) scroll_pane_cp012

0x8808,	// (0x00073d1b) list_single_loc_request_popup_menu_pane_ParamLimits

0x8808,	// (0x00073d1b) list_single_loc_request_popup_menu_pane

0x25af,	// (0x0006dac2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x25af,	// (0x0006dac2) list_single_loc_request_popup_menu_pane_g1

0x25bb,	// (0x0006dace) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x25bb,	// (0x0006dace) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x0007a77c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x0007a77c) list_single_loc_request_popup_menu_pane_g

0x25c7,	// (0x0006dada) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x25c7,	// (0x0006dada) list_single_loc_request_popup_menu_pane_t1

0x881a,	// (0x00073d2d) bg_popup_window_pane_cp03_ParamLimits

0x881a,	// (0x00073d2d) bg_popup_window_pane_cp03

0x8828,	// (0x00073d3b) heading_loc_req_pane_ParamLimits

0x8828,	// (0x00073d3b) heading_loc_req_pane

0x8834,	// (0x00073d47) popup_dyc_status_message_window_g1_ParamLimits

0x8834,	// (0x00073d47) popup_dyc_status_message_window_g1

0x8840,	// (0x00073d53) popup_dyc_status_message_window_t1_ParamLimits

0x8840,	// (0x00073d53) popup_dyc_status_message_window_t1

0x8852,	// (0x00073d65) popup_dyc_status_message_window_t2_ParamLimits

0x8852,	// (0x00073d65) popup_dyc_status_message_window_t2

0x8864,	// (0x00073d77) popup_dyc_status_message_window_t3_ParamLimits

0x8864,	// (0x00073d77) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x0007a781) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x0007a781) popup_dyc_status_message_window_t

0x1ae6,	// (0x0006cff9) bg_heading_pane_cp01

0x25dd,	// (0x0006daf0) heading_loc_req_pane_g1

0x25e5,	// (0x0006daf8) heading_loc_req_pane_g2

0x25ed,	// (0x0006db00) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x0007a788) heading_loc_req_pane_g

0x25f5,	// (0x0006db08) heading_loc_req_pane_t1

0x2614,	// (0x0006db27) bg_popup_sub_pane_cp01_ParamLimits

0x2614,	// (0x0006db27) bg_popup_sub_pane_cp01

0x2622,	// (0x0006db35) popup_cale_events_window_g1_ParamLimits

0x2622,	// (0x0006db35) popup_cale_events_window_g1

0x2642,	// (0x0006db55) popup_cale_events_window_g2_ParamLimits

0x2642,	// (0x0006db55) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x0007a7aa) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x0007a7aa) popup_cale_events_window_g

0x2662,	// (0x0006db75) popup_cale_events_window_t1_ParamLimits

0x2662,	// (0x0006db75) popup_cale_events_window_t1

0x2674,	// (0x0006db87) popup_cale_events_window_t2_ParamLimits

0x2674,	// (0x0006db87) popup_cale_events_window_t2

0x26b2,	// (0x0006dbc5) popup_cale_events_window_t3_ParamLimits

0x26b2,	// (0x0006dbc5) popup_cale_events_window_t3

0x26ec,	// (0x0006dbff) popup_cale_events_window_t4_ParamLimits

0x26ec,	// (0x0006dbff) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x0007a7af) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x0007a7af) popup_cale_events_window_t

0x888e,	// (0x00073da1) call_type_pane

0x39bb,	// (0x0006eece) popup_call_status_window_g1

0x889a,	// (0x00073dad) popup_call_status_window_g2

0x88a6,	// (0x00073db9) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x0007a7b8) popup_call_status_window_g

0x2722,	// (0x0006dc35) call_type_pane_g1

0x272b,	// (0x0006dc3e) call_type_pane_g2

0x0001,

0xf2ac,	// (0x0007a7bf) call_type_pane_g

0x1ae6,	// (0x0006cff9) bg_popup_sub_pane_cp02

0x2734,	// (0x0006dc47) listscroll_popup_wml_pane

0x273c,	// (0x0006dc4f) list_wml_pane

0x2746,	// (0x0006dc59) scroll_pane_cp013

0x2751,	// (0x0006dc64) list_single_graphic_popup_wml_pane_ParamLimits

0x2751,	// (0x0006dc64) list_single_graphic_popup_wml_pane

0x1d59,	// (0x0006d26c) list_single_graphic_popup_wml_pane_g1

0x2765,	// (0x0006dc78) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x0007a7c4) list_single_graphic_popup_wml_pane_g

0x2c72,	// (0x0006e185) list_single_graphic_popup_wml_pane_t1

0x2c80,	// (0x0006e193) aid_call_pane

0x1d39,	// (0x0006d24c) popup_clock_analogue_window_g1

0x1d39,	// (0x0006d24c) popup_clock_analogue_window_g2

0x88b2,	// (0x00073dc5) popup_clock_analogue_window_g3

0x88b2,	// (0x00073dc5) popup_clock_analogue_window_g4

0x1d59,	// (0x0006d26c) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x0007a7c9) popup_clock_analogue_window_g

0x88ba,	// (0x00073dcd) popup_clock_analogue_window_t1

0x88c8,	// (0x00073ddb) clock_digital_number_pane_ParamLimits

0x88c8,	// (0x00073ddb) clock_digital_number_pane

0x88d4,	// (0x00073de7) clock_digital_number_pane_cp02_ParamLimits

0x88d4,	// (0x00073de7) clock_digital_number_pane_cp02

0x88e0,	// (0x00073df3) clock_digital_number_pane_cp03_ParamLimits

0x88e0,	// (0x00073df3) clock_digital_number_pane_cp03

0x88ec,	// (0x00073dff) clock_digital_number_pane_cp04_ParamLimits

0x88ec,	// (0x00073dff) clock_digital_number_pane_cp04

0x88fc,	// (0x00073e0f) clock_digital_separator_pane_ParamLimits

0x88fc,	// (0x00073e0f) clock_digital_separator_pane

0x8908,	// (0x00073e1b) popup_clock_digital_window_t1

0x1d59,	// (0x0006d26c) clock_digital_number_pane_g1

0x1d59,	// (0x0006d26c) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x0007a749) clock_digital_number_pane_g

0x1d59,	// (0x0006d26c) clock_digital_separator_pane_g1

0x1d59,	// (0x0006d26c) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x0007a749) clock_digital_separator_pane_g

0x1ae6,	// (0x0006cff9) bg_popup_window_pane_cp04

0x2c90,	// (0x0006e1a3) heading_pane_cp03

0x204d,	// (0x0006d560) listscroll_popup_gms_pane

0x1ae6,	// (0x0006cff9) grid_large_graphic_popup_pane

0x2c99,	// (0x0006e1ac) listscroll_popup_gms_pane_g1

0x2ca2,	// (0x0006e1b5) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x0007a7d4) listscroll_popup_gms_pane_g

0x2cab,	// (0x0006e1be) scroll_pane_cp014

0x1dbc,	// (0x0006d2cf) cell_large_graphic_popup_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) cell_large_graphic_popup_pane

0x1dca,	// (0x0006d2dd) cell_large_graphic_popup_pane_g1_ParamLimits

0x1dca,	// (0x0006d2dd) cell_large_graphic_popup_pane_g1

0x2cb4,	// (0x0006e1c7) cell_large_graphic_popup_pane_g2_ParamLimits

0x2cb4,	// (0x0006e1c7) cell_large_graphic_popup_pane_g2

0x2cc2,	// (0x0006e1d5) cell_large_graphic_popup_pane_g3_ParamLimits

0x2cc2,	// (0x0006e1d5) cell_large_graphic_popup_pane_g3

0x2cd0,	// (0x0006e1e3) cell_large_graphic_popup_pane_g4_ParamLimits

0x2cd0,	// (0x0006e1e3) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x0007a7d9) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x0007a7d9) cell_large_graphic_popup_pane_g

0x1ae6,	// (0x0006cff9) grid_highlight_pane_cp010

0x1d59,	// (0x0006d26c) bg_popup_call_pane_g1

0x2ce1,	// (0x0006e1f4) list_single_graphic_popup_conf_pane_ParamLimits

0x2ce1,	// (0x0006e1f4) list_single_graphic_popup_conf_pane

0x2cf4,	// (0x0006e207) list_highlight_pane_cp01

0x2cfd,	// (0x0006e210) list_single_graphic_popup_conf_pane_g1

0x2d05,	// (0x0006e218) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x0007a7e2) list_single_graphic_popup_conf_pane_g

0x2d0d,	// (0x0006e220) list_single_graphic_popup_conf_pane_t1

0x2d1b,	// (0x0006e22e) linegrid_cams_pane_g1

0x8925,	// (0x00073e38) linegrid_cams_pane_g2

0x1f8c,	// (0x0006d49f) linegrid_cams_pane_g3

0x2d24,	// (0x0006e237) linegrid_cams_pane_g4

0x892e,	// (0x00073e41) linegrid_cams_pane_g5

0x8937,	// (0x00073e4a) linegrid_cams_pane_g6

0x203c,	// (0x0006d54f) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x0007a7e7) linegrid_cams_pane_g

0x2d2d,	// (0x0006e240) popup_clock_analogue_window

0x2d2d,	// (0x0006e240) popup_clock_digital_window

0x1ae6,	// (0x0006cff9) popup_phob_thumbnail_window

0x1d59,	// (0x0006d26c) call_video_uplink_pane_g1

0x2d36,	// (0x0006e249) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x0007a7f6) call_video_uplink_pane_g

0x2d3e,	// (0x0006e251) video_uplink_pane

0x2d46,	// (0x0006e259) mce_image_pane_g1

0x8940,	// (0x00073e53) mce_image_pane_g2

0x894a,	// (0x00073e5d) mce_image_pane_g3

0x8952,	// (0x00073e65) mce_image_pane_g4

0x895a,	// (0x00073e6d) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x0007a7fb) mce_image_pane_g

0x2d50,	// (0x0006e263) control_top_pane_stacon_cp01_ParamLimits

0x2d50,	// (0x0006e263) control_top_pane_stacon_cp01

0x2d64,	// (0x0006e277) uni_indicator_pane_stacon_cp01_ParamLimits

0x2d64,	// (0x0006e277) uni_indicator_pane_stacon_cp01

0x2d75,	// (0x0006e288) bg_popup_sub_pane_cp03

0x2d7f,	// (0x0006e292) chi_dic_find_pane

0x8962,	// (0x00073e75) listscroll_chi_dic_pane

0x2d87,	// (0x0006e29a) main_pane_chidic_g1

0x2d8f,	// (0x0006e2a2) chi_dic_find_pane_t1

0x2d9d,	// (0x0006e2b0) find_chidic_pane

0x2da6,	// (0x0006e2b9) chi_dic_list_pane_ParamLimits

0x2da6,	// (0x0006e2b9) chi_dic_list_pane

0x2db7,	// (0x0006e2ca) scroll_pane_cp020

0x2dbf,	// (0x0006e2d2) find_chidic_pane_t1

0x1ae6,	// (0x0006cff9) input_focus_pane_cp06

0x8976,	// (0x00073e89) list_chi_dic_pane_ParamLimits

0x8976,	// (0x00073e89) list_chi_dic_pane

0x8990,	// (0x00073ea3) list_chi_dic_pane_t1_ParamLimits

0x8990,	// (0x00073ea3) list_chi_dic_pane_t1

0x1ae6,	// (0x0006cff9) list_highlight_pane_cp020

0x2dce,	// (0x0006e2e1) bg_cale_heading_pane_g1

0x89a3,	// (0x00073eb6) bg_cale_heading_pane_g2

0x89ab,	// (0x00073ebe) bg_cale_heading_pane_g3

0x89b3,	// (0x00073ec6) bg_cale_heading_pane_g4

0x89bd,	// (0x00073ed0) bg_cale_heading_pane_g5

0x89c7,	// (0x00073eda) bg_cale_heading_pane_g6

0x89cf,	// (0x00073ee2) bg_cale_heading_pane_g7

0x89d7,	// (0x00073eea) bg_cale_heading_pane_g8

0x89e1,	// (0x00073ef4) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x0007a806) bg_cale_heading_pane_g

0x2dce,	// (0x0006e2e1) bg_cale_side_pane_g1

0x89eb,	// (0x00073efe) bg_cale_side_pane_g2

0x89f5,	// (0x00073f08) bg_cale_side_pane_g3

0x89ff,	// (0x00073f12) bg_cale_side_pane_g4

0x8a09,	// (0x00073f1c) bg_cale_side_pane_g5

0x8a13,	// (0x00073f26) bg_cale_side_pane_g6

0x8a1d,	// (0x00073f30) bg_cale_side_pane_g7

0x8a27,	// (0x00073f3a) bg_cale_side_pane_g8

0x8a2f,	// (0x00073f42) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x0007a819) bg_cale_side_pane_g

0x8a37,	// (0x00073f4a) popup_call_status_window_ParamLimits

0x8a37,	// (0x00073f4a) popup_call_status_window

0x2dd6,	// (0x0006e2e9) stacon_top_pane

0x2dde,	// (0x0006e2f1) status_pane_ParamLimits

0x2dde,	// (0x0006e2f1) status_pane

0x2df3,	// (0x0006e306) status_small_pane

0x2dfb,	// (0x0006e30e) control_pane

0x1ae6,	// (0x0006cff9) stacon_bottom_pane

0x2e03,	// (0x0006e316) list_single_mce_smart_pane_t1_ParamLimits

0x2e03,	// (0x0006e316) list_single_mce_smart_pane_t1

0x2e16,	// (0x0006e329) list_single_mce_smart_pane_t2_ParamLimits

0x2e16,	// (0x0006e329) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x0007a82c) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x0007a82c) list_single_mce_smart_pane_t

0x8a43,	// (0x00073f56) compass_pane

0x8a4f,	// (0x00073f62) main_location2_pane_t1

0x8a63,	// (0x00073f76) main_location2_pane_t2

0x8a77,	// (0x00073f8a) main_location2_pane_t3

0x0003,

0xf31e,	// (0x0007a831) main_location2_pane_t

0x2e35,	// (0x0006e348) compass_pane_g1_ParamLimits

0x2e35,	// (0x0006e348) compass_pane_g1

0x8ac1,	// (0x00073fd4) compass_pane_t1

0x8ad0,	// (0x00073fe3) compass_pane_t2

0x0005,

0xf327,	// (0x0007a83a) compass_pane_t

0x8b1b,	// (0x0007402e) text_secondary_cp61

0x2eb1,	// (0x0006e3c4) navi_pane_cams_g5

0x2f2d,	// (0x0006e440) navi_pane_im_t1

0x2f3b,	// (0x0006e44e) navi_pane_mp_g1_ParamLimits

0x2f3b,	// (0x0006e44e) navi_pane_mp_g1

0x2f4f,	// (0x0006e462) navi_pane_mp_g2_ParamLimits

0x2f4f,	// (0x0006e462) navi_pane_mp_g2

0x2f5b,	// (0x0006e46e) navi_pane_mp_g3_ParamLimits

0x2f5b,	// (0x0006e46e) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x0007a84e) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x0007a84e) navi_pane_mp_g

0x2f67,	// (0x0006e47a) navi_pane_mp_t1

0x2f75,	// (0x0006e488) navi_pane_mp_t2

0x0002,

0xf342,	// (0x0007a855) navi_pane_mp_t

0x2fe0,	// (0x0006e4f3) navi_pane_vt_g1

0x2f67,	// (0x0006e47a) navi_pane_vt_t1

0x2fe8,	// (0x0006e4fb) navi_slider_pane

0x204d,	// (0x0006d560) zooming_pane

0x2ff8,	// (0x0006e50b) navi_slider_pane_g1

0x8b56,	// (0x00074069) navi_slider_pane_g2

0x0006,

0xf349,	// (0x0007a85c) navi_slider_pane_g

0x301c,	// (0x0006e52f) aid_levels_zoom

0x3024,	// (0x0006e537) zooming_pane_g1

0x302c,	// (0x0006e53f) zooming_pane_g2

0x302c,	// (0x0006e53f) zooming_pane_g3

0x0002,

0xf358,	// (0x0007a86b) zooming_pane_g

0x3034,	// (0x0006e547) level_10_zoom

0x303d,	// (0x0006e550) level_11_zoom

0x3046,	// (0x0006e559) level_1_zoom

0x304f,	// (0x0006e562) level_2_zoom

0x3058,	// (0x0006e56b) level_3_zoom

0x3061,	// (0x0006e574) level_4_zoom

0x306a,	// (0x0006e57d) level_5_zoom

0x3073,	// (0x0006e586) level_6_zoom

0x307c,	// (0x0006e58f) level_7_zoom

0x3085,	// (0x0006e598) level_8_zoom

0x308e,	// (0x0006e5a1) level_9_zoom

0x309f,	// (0x0006e5b2) popup_phob_thumbnail_window_g1

0x30a7,	// (0x0006e5ba) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x0007a872) popup_phob_thumbnail_window_g

0x93d0,	// (0x000748e3) level_1_location

0x93d8,	// (0x000748eb) level_2_location

0x93e0,	// (0x000748f3) level_3_location

0x93ea,	// (0x000748fd) level_4_location

0x204d,	// (0x0006d560) level_5_location

0x8b68,	// (0x0007407b) mce_icon_pane_g1

0x8b70,	// (0x00074083) mce_icon_pane_g2

0x0001,

0xf364,	// (0x0007a877) mce_icon_pane_g

0x8b78,	// (0x0007408b) main_mup_pane_g1_ParamLimits

0x8b78,	// (0x0007408b) main_mup_pane_g1

0x1de6,	// (0x0006d2f9) main_mup_pane_g2_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup_pane_g2

0x1de6,	// (0x0006d2f9) main_mup_pane_g3_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup_pane_g3

0x1de6,	// (0x0006d2f9) main_mup_pane_g4_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup_pane_g4

0x1de6,	// (0x0006d2f9) main_mup_pane_g5_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup_pane_g5

0x1de6,	// (0x0006d2f9) main_mup_pane_g6_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup_pane_g6

0x1de6,	// (0x0006d2f9) main_mup_pane_g7_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup_pane_g7

0x1de6,	// (0x0006d2f9) main_mup_pane_g8_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup_pane_g8

0x1de6,	// (0x0006d2f9) main_mup_pane_g9_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup_pane_g9

0x1de6,	// (0x0006d2f9) main_mup_pane_g10_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup_pane_g10

0x1de6,	// (0x0006d2f9) main_mup_pane_g11_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup_pane_g11

0x1dd8,	// (0x0006d2eb) main_mup_pane_g12_ParamLimits

0x1dd8,	// (0x0006d2eb) main_mup_pane_g12

0x1de6,	// (0x0006d2f9) main_mup_pane_g13_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup_pane_g13

0x000c,

0xf369,	// (0x0007a87c) main_mup_pane_g_ParamLimits

0xf369,	// (0x0007a87c) main_mup_pane_g

0x1e02,	// (0x0006d315) main_mup_pane_t1_ParamLimits

0x1e02,	// (0x0006d315) main_mup_pane_t1

0x1e02,	// (0x0006d315) main_mup_pane_t2_ParamLimits

0x1e02,	// (0x0006d315) main_mup_pane_t2

0x1e02,	// (0x0006d315) main_mup_pane_t3_ParamLimits

0x1e02,	// (0x0006d315) main_mup_pane_t3

0x1e34,	// (0x0006d347) main_mup_pane_t4_ParamLimits

0x1e34,	// (0x0006d347) main_mup_pane_t4

0x1e34,	// (0x0006d347) main_mup_pane_t5_ParamLimits

0x1e34,	// (0x0006d347) main_mup_pane_t5

0x1e20,	// (0x0006d333) main_mup_pane_t6_ParamLimits

0x1e20,	// (0x0006d333) main_mup_pane_t6

0x0005,

0xf384,	// (0x0007a897) main_mup_pane_t_ParamLimits

0xf384,	// (0x0007a897) main_mup_pane_t

0x1d63,	// (0x0006d276) mup_progress_pane_ParamLimits

0x1d63,	// (0x0006d276) mup_progress_pane

0x4270,	// (0x0006f783) mup_visualizer_pane_ParamLimits

0x4270,	// (0x0006f783) mup_visualizer_pane

0x4270,	// (0x0006f783) mup_volume_pane_ParamLimits

0x4270,	// (0x0006f783) mup_volume_pane

0x1dd8,	// (0x0006d2eb) mup_visualizer_pane_g1_ParamLimits

0x1dd8,	// (0x0006d2eb) mup_visualizer_pane_g1

0x30df,	// (0x0006e5f2) mup_visualizer_pane_g2_ParamLimits

0x30df,	// (0x0006e5f2) mup_visualizer_pane_g2

0x1dca,	// (0x0006d2dd) mup_visualizer_pane_g3_ParamLimits

0x1dca,	// (0x0006d2dd) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x0007a8a4) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x0007a8a4) mup_visualizer_pane_g

0x1e16,	// (0x0006d329) mup_volume_pane_g1

0x1e16,	// (0x0006d329) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x0007a5c2) mup_volume_pane_g

0x1e16,	// (0x0006d329) mup_progress_pane_g1

0x1e16,	// (0x0006d329) mup_progress_pane_g2

0x1e16,	// (0x0006d329) mup_progress_pane_g3

0x0002,

0xf398,	// (0x0007a8ab) mup_progress_pane_g

0x1ae6,	// (0x0006cff9) bg_popup_window_pane_cp05

0x30ed,	// (0x0006e600) heading_pane_cp02_ParamLimits

0x30ed,	// (0x0006e600) heading_pane_cp02

0x3107,	// (0x0006e61a) list_popup_blid_pane

0x310f,	// (0x0006e622) list_blid_sat_info_pane_ParamLimits

0x310f,	// (0x0006e622) list_blid_sat_info_pane

0x3122,	// (0x0006e635) list_blid_sat_info_pane_g1

0x312a,	// (0x0006e63d) list_blid_sat_info_pane_t1

0x8c75,	// (0x00074188) mup_equalizer_pane_ParamLimits

0x8c75,	// (0x00074188) mup_equalizer_pane

0x8c96,	// (0x000741a9) mup_equalizer_pane_cp1_ParamLimits

0x8c96,	// (0x000741a9) mup_equalizer_pane_cp1

0x8cb7,	// (0x000741ca) mup_equalizer_pane_cp2_ParamLimits

0x8cb7,	// (0x000741ca) mup_equalizer_pane_cp2

0x8cd8,	// (0x000741eb) mup_equalizer_pane_cp3_ParamLimits

0x8cd8,	// (0x000741eb) mup_equalizer_pane_cp3

0x8cf9,	// (0x0007420c) mup_equalizer_pane_cp4_ParamLimits

0x8cf9,	// (0x0007420c) mup_equalizer_pane_cp4

0x8d1a,	// (0x0007422d) mup_equalizer_pane_cp5

0x8d30,	// (0x00074243) mup_equalizer_pane_cp6

0x8d48,	// (0x0007425b) mup_equalizer_pane_cp7

0x4216,	// (0x0006f729) bg_popup_call_poc_act_pane_g9

0x421e,	// (0x0006f731) bg_popup_call_poc_act_pane_g10

0x4226,	// (0x0006f739) bg_popup_call_poc_act_pane_g11

0x000a,

0x1d41,	// (0x0006d254) mup_scale_pane

0x1d59,	// (0x0006d26c) mup_scale_pane_g1

0x3138,	// (0x0006e64b) mup_scale_pane_g2

0x0006,

0xf3b4,	// (0x0007a8c7) mup_scale_pane_g

0x315c,	// (0x0006e66f) msg_data_pane

0x3164,	// (0x0006e677) scroll_pane_cp017

0x5c6f,	// (0x00071182) bg_list_pane_cp04_ParamLimits

0x5c6f,	// (0x00071182) bg_list_pane_cp04

0x316c,	// (0x0006e67f) msg_data_pane_g1

0x8d72,	// (0x00074285) msg_data_pane_g2

0x8d7c,	// (0x0007428f) msg_data_pane_g3

0x8d84,	// (0x00074297) msg_data_pane_g4

0x8d8c,	// (0x0007429f) msg_data_pane_g5

0x8d94,	// (0x000742a7) msg_data_pane_g6

0x8d9c,	// (0x000742af) msg_data_pane_g7

0x0006,

0xf3c3,	// (0x0007a8d6) msg_data_pane_g

0x5c95,	// (0x000711a8) msg_text_pane_ParamLimits

0x5c95,	// (0x000711a8) msg_text_pane

0x8da4,	// (0x000742b7) qrid_highlight_pane_cp011_ParamLimits

0x8da4,	// (0x000742b7) qrid_highlight_pane_cp011

0x1ae6,	// (0x0006cff9) msg_body_pane

0x1d41,	// (0x0006d254) msg_header_pane

0x5cea,	// (0x000711fd) input_focus_pane_cp07

0x5d0b,	// (0x0007121e) msg_header_pane_t1_ParamLimits

0x5d0b,	// (0x0007121e) msg_header_pane_t1

0x5d27,	// (0x0007123a) msg_header_pane_t2_ParamLimits

0x5d27,	// (0x0007123a) msg_header_pane_t2

0x0001,

0xf3d7,	// (0x0007a8ea) msg_header_pane_t_ParamLimits

0xf3d7,	// (0x0007a8ea) msg_header_pane_t

0x31c5,	// (0x0006e6d8) msg_body_pane_g1

0x5d47,	// (0x0007125a) msg_body_pane_t1_ParamLimits

0x5d47,	// (0x0007125a) msg_body_pane_t1

0x5d78,	// (0x0007128b) msg_body_pane_t2_ParamLimits

0x5d78,	// (0x0007128b) msg_body_pane_t2

0x5d8a,	// (0x0007129d) msg_body_pane_t3_ParamLimits

0x5d8a,	// (0x0007129d) msg_body_pane_t3

0x0002,

0xf3dc,	// (0x0007a8ef) msg_body_pane_t_ParamLimits

0xf3dc,	// (0x0007a8ef) msg_body_pane_t

0x8e12,	// (0x00074325) main_viewer_pane_g1_ParamLimits

0x8e12,	// (0x00074325) main_viewer_pane_g1

0x8e1e,	// (0x00074331) main_viewer_pane_g2_ParamLimits

0x8e1e,	// (0x00074331) main_viewer_pane_g2

0x8e2a,	// (0x0007433d) main_viewer_pane_g3_ParamLimits

0x8e2a,	// (0x0007433d) main_viewer_pane_g3

0x8e3b,	// (0x0007434e) main_viewer_pane_g4_ParamLimits

0x8e3b,	// (0x0007434e) main_viewer_pane_g4

0x8e4c,	// (0x0007435f) main_viewer_pane_g5_ParamLimits

0x8e4c,	// (0x0007435f) main_viewer_pane_g5

0x8e4c,	// (0x0007435f) main_viewer_pane_g7_ParamLimits

0x8e4c,	// (0x0007435f) main_viewer_pane_g7

0x8e5e,	// (0x00074371) main_viewer_pane_g8_ParamLimits

0x8e5e,	// (0x00074371) main_viewer_pane_g8

0x0007,

0xf3ec,	// (0x0007a8ff) main_viewer_pane_g_ParamLimits

0xf3ec,	// (0x0007a8ff) main_viewer_pane_g

0x31cd,	// (0x0006e6e0) viewer_content_pane_ParamLimits

0x31cd,	// (0x0006e6e0) viewer_content_pane

0x8e96,	// (0x000743a9) main_postcard_pane_g1_ParamLimits

0x8e96,	// (0x000743a9) main_postcard_pane_g1

0x8ea4,	// (0x000743b7) main_postcard_pane_g2_ParamLimits

0x8ea4,	// (0x000743b7) main_postcard_pane_g2

0x8eb2,	// (0x000743c5) main_postcard_pane_g3_ParamLimits

0x8eb2,	// (0x000743c5) main_postcard_pane_g3

0x0005,

0xf3fd,	// (0x0007a910) main_postcard_pane_g_ParamLimits

0xf3fd,	// (0x0007a910) main_postcard_pane_g

0x8ec2,	// (0x000743d5) main_postcard_pane_g4

0x4355,	// (0x0006f868) smil_status_volume_pane_g2

0x8eee,	// (0x00074401) postcard_pane_ParamLimits

0x8eee,	// (0x00074401) postcard_pane

0x39bb,	// (0x0006eece) postcard_pane_g1_ParamLimits

0x39bb,	// (0x0006eece) postcard_pane_g1

0x8f20,	// (0x00074433) postcard_pane_g2_ParamLimits

0x8f20,	// (0x00074433) postcard_pane_g2

0x8f2c,	// (0x0007443f) postcard_pane_g3_ParamLimits

0x8f2c,	// (0x0007443f) postcard_pane_g3

0x31e9,	// (0x0006e6fc) postcard_pane_g4_ParamLimits

0x31e9,	// (0x0006e6fc) postcard_pane_g4

0x8f38,	// (0x0007444b) postcard_pane_g5_ParamLimits

0x8f38,	// (0x0007444b) postcard_pane_g5

0x8f44,	// (0x00074457) postcard_pane_g6_ParamLimits

0x8f44,	// (0x00074457) postcard_pane_g6

0x31db,	// (0x0006e6ee) postcard_pane_g7_ParamLimits

0x31db,	// (0x0006e6ee) postcard_pane_g7

0x0006,

0xf40a,	// (0x0007a91d) postcard_pane_g_ParamLimits

0xf40a,	// (0x0007a91d) postcard_pane_g

0x8f50,	// (0x00074463) main_mp2_pane_g1_ParamLimits

0x8f50,	// (0x00074463) main_mp2_pane_g1

0x8f5c,	// (0x0007446f) main_mp2_pane_g2_ParamLimits

0x8f5c,	// (0x0007446f) main_mp2_pane_g2

0x8f68,	// (0x0007447b) main_mp2_pane_g3_ParamLimits

0x8f68,	// (0x0007447b) main_mp2_pane_g3

0x0002,

0xf419,	// (0x0007a92c) main_mp2_pane_g_ParamLimits

0xf419,	// (0x0007a92c) main_mp2_pane_g

0x8f74,	// (0x00074487) main_mp2_pane_t1_ParamLimits

0x8f74,	// (0x00074487) main_mp2_pane_t1

0x8f8b,	// (0x0007449e) main_mp2_pane_t2_ParamLimits

0x8f8b,	// (0x0007449e) main_mp2_pane_t2

0x8f9f,	// (0x000744b2) main_mp2_pane_t3_ParamLimits

0x8f9f,	// (0x000744b2) main_mp2_pane_t3

0x0002,

0xf420,	// (0x0007a933) main_mp2_pane_t_ParamLimits

0xf420,	// (0x0007a933) main_mp2_pane_t

0x1d63,	// (0x0006d276) pec_content_pane_ParamLimits

0x1d63,	// (0x0006d276) pec_content_pane

0x16c9,	// (0x0006cbdc) scroll_pane_cp015

0x30d1,	// (0x0006e5e4) pec_attribute_pane_ParamLimits

0x30d1,	// (0x0006e5e4) pec_attribute_pane

0x1dca,	// (0x0006d2dd) pec_content_pane_g1_ParamLimits

0x1dca,	// (0x0006d2dd) pec_content_pane_g1

0x31f7,	// (0x0006e70a) pec_content_pane_t1_ParamLimits

0x31f7,	// (0x0006e70a) pec_content_pane_t1

0x320b,	// (0x0006e71e) pec_content_pane_t2_ParamLimits

0x320b,	// (0x0006e71e) pec_content_pane_t2

0x0001,

0xf427,	// (0x0007a93a) pec_content_pane_t_ParamLimits

0xf427,	// (0x0007a93a) pec_content_pane_t

0x1dbc,	// (0x0006d2cf) list_single_graphic_pane_cp01_ParamLimits

0x1dbc,	// (0x0006d2cf) list_single_graphic_pane_cp01

0x1d41,	// (0x0006d254) bg_popup_sub_pane_cp04

0x321f,	// (0x0006e732) popup_mup_playback_window_g1

0x322b,	// (0x0006e73e) popup_mup_playback_window_t1

0x3240,	// (0x0006e753) popup_mup_playback_window_t2

0x0001,

0xf42c,	// (0x0007a93f) popup_mup_playback_window_t

0x3277,	// (0x0006e78a) main_image_pane_g1_ParamLimits

0x3277,	// (0x0006e78a) main_image_pane_g1

0x32ba,	// (0x0006e7cd) scroll_pane_cp018_ParamLimits

0x32ba,	// (0x0006e7cd) scroll_pane_cp018

0x32d2,	// (0x0006e7e5) scroll_pane_cp016_ParamLimits

0x32d2,	// (0x0006e7e5) scroll_pane_cp016

0x9022,	// (0x00074535) smil2_image_pane_ParamLimits

0x9022,	// (0x00074535) smil2_image_pane

0x9052,	// (0x00074565) smil2_root_pane_ParamLimits

0x9052,	// (0x00074565) smil2_root_pane

0x907e,	// (0x00074591) smil2_text_pane_ParamLimits

0x907e,	// (0x00074591) smil2_text_pane

0x16c9,	// (0x0006cbdc) bg_list_pane_cp06

0x16c9,	// (0x0006cbdc) grid_radio_pane

0x1ae6,	// (0x0006cff9) bg_popup_window_pane_cp06

0x2604,	// (0x0006db17) main_fmradio_pane_t1

0x422e,	// (0x0006f741) heading_pane_cp04

0x2604,	// (0x0006db17) main_fmradio_pane_t2

0x4236,	// (0x0006f749) popup_cale_lunar_info_window_g1

0x2604,	// (0x0006db17) main_fmradio_pane_t3

0x423e,	// (0x0006f751) popup_cale_lunar_info_window_g2

0x2604,	// (0x0006db17) main_fmradio_pane_t4

0x0001,

0x2604,	// (0x0006db17) main_fmradio_pane_t5

0x0004,

0xf501,	// (0x0007aa14) popup_cale_lunar_info_window_g

0xf28c,	// (0x0007a79f) main_fmradio_pane_t

0x16c9,	// (0x0006cbdc) wait_bar_pane_cp03

0x1dbc,	// (0x0006d2cf) cell_fmradio_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) cell_fmradio_pane

0x1dca,	// (0x0006d2dd) cell_fmradio_pane_g1_ParamLimits

0x1dca,	// (0x0006d2dd) cell_fmradio_pane_g1

0x16c9,	// (0x0006cbdc) grid_highlight_pane_cp011

0x3306,	// (0x0006e819) poc_content_pane_ParamLimits

0x3306,	// (0x0006e819) poc_content_pane

0x3318,	// (0x0006e82b) scroll_pane_cp019

0x90be,	// (0x000745d1) popup_call_poc_act_window_ParamLimits

0x90be,	// (0x000745d1) popup_call_poc_act_window

0x90cb,	// (0x000745de) popup_call_poc_inact_window_ParamLimits

0x90cb,	// (0x000745de) popup_call_poc_inact_window

0xf4d8,	// (0x0007a9eb) bg_popup_call_poc_act_pane_g

0x41a6,	// (0x0006f6b9) bg_popup_call_poc_inact_pane_g1

0x41ae,	// (0x0006f6c1) bg_popup_call_poc_inact_pane_g2

0x3320,	// (0x0006e833) popup_call_poc_act_window_g2

0x41b6,	// (0x0006f6c9) bg_popup_call_poc_inact_pane_g3

0x41be,	// (0x0006f6d1) bg_popup_call_poc_inact_pane_g4

0x41c6,	// (0x0006f6d9) bg_popup_call_poc_inact_pane_g5

0x3328,	// (0x0006e83b) popup_call_poc_act_window_t1_ParamLimits

0x3328,	// (0x0006e83b) popup_call_poc_act_window_t1

0x3350,	// (0x0006e863) popup_call_poc_act_window_t2_ParamLimits

0x3350,	// (0x0006e863) popup_call_poc_act_window_t2

0x3378,	// (0x0006e88b) popup_call_poc_act_window_t3_ParamLimits

0x3378,	// (0x0006e88b) popup_call_poc_act_window_t3

0x33a0,	// (0x0006e8b3) popup_call_poc_act_window_t4_ParamLimits

0x33a0,	// (0x0006e8b3) popup_call_poc_act_window_t4

0x0003,

0xf441,	// (0x0007a954) popup_call_poc_act_window_t_ParamLimits

0xf441,	// (0x0007a954) popup_call_poc_act_window_t

0x41ce,	// (0x0006f6e1) bg_popup_call_poc_inact_pane_g6

0x41d6,	// (0x0006f6e9) bg_popup_call_poc_inact_pane_g7

0x41de,	// (0x0006f6f1) bg_popup_call_poc_inact_pane_g8

0x33b2,	// (0x0006e8c5) popup_call_poc_inact_window_g2

0x41e6,	// (0x0006f6f9) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c5,	// (0x0007a9d8) bg_popup_call_poc_inact_pane_g

0x33ba,	// (0x0006e8cd) popup_call_poc_inact_window_t1_ParamLimits

0x33ba,	// (0x0006e8cd) popup_call_poc_inact_window_t1

0x33cf,	// (0x0006e8e2) popup_call_poc_inact_window_t2_ParamLimits

0x33cf,	// (0x0006e8e2) popup_call_poc_inact_window_t2

0x33e4,	// (0x0006e8f7) popup_call_poc_inact_window_t3_ParamLimits

0x33e4,	// (0x0006e8f7) popup_call_poc_inact_window_t3

0x0002,

0xf44a,	// (0x0007a95d) popup_call_poc_inact_window_t_ParamLimits

0xf44a,	// (0x0007a95d) popup_call_poc_inact_window_t

0x42e0,	// (0x0006f7f3) context_pane_ParamLimits

0x96ce,	// (0x00074be1) signal_pane_ParamLimits

0x204d,	// (0x0006d560) main_call2_pane

0x9641,	// (0x00074b54) popup_phob_thumbnail2_window_ParamLimits

0x9641,	// (0x00074b54) popup_phob_thumbnail2_window

0x8dc0,	// (0x000742d3) aid_hotspot_pointer_arrow_pane

0x8dc8,	// (0x000742db) aid_hotspot_pointer_hand_pane

0x9398,	// (0x000748ab) phob_pre_status_pane_g5

0x1dbc,	// (0x0006d2cf) cams_zoom_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) image_vga_pane_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera_pane_g1_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera_pane_g2_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera_pane_g3_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera_pane_g4_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera_pane_g5_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera_pane_g6_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera_pane_g7_ParamLimits

0xf180,	// (0x0007a693) main_camera_pane_g_ParamLimits

0x1e34,	// (0x0006d347) main_camera_pane_t1_ParamLimits

0x1e34,	// (0x0006d347) main_camera_pane_t2_ParamLimits

0xf191,	// (0x0007a6a4) main_camera_pane_t_ParamLimits

0x1d41,	// (0x0006d254) bg_popup_preview_window_pane_cp01_ParamLimits

0x1d41,	// (0x0006d254) bg_popup_preview_window_pane_cp01

0x33f9,	// (0x0006e90c) popup_phob_thumbnail2_window_g1_ParamLimits

0x33f9,	// (0x0006e90c) popup_phob_thumbnail2_window_g1

0x1ae6,	// (0x0006cff9) call2_cli_visual_pane

0x90e7,	// (0x000745fa) popup_call2_audio_conf_window_ParamLimits

0x90e7,	// (0x000745fa) popup_call2_audio_conf_window

0x90fc,	// (0x0007460f) popup_call2_audio_first_window_ParamLimits

0x90fc,	// (0x0007460f) popup_call2_audio_first_window

0x919a,	// (0x000746ad) popup_call2_audio_in_window_ParamLimits

0x919a,	// (0x000746ad) popup_call2_audio_in_window

0x91dc,	// (0x000746ef) popup_call2_audio_out_window_ParamLimits

0x91dc,	// (0x000746ef) popup_call2_audio_out_window

0x923e,	// (0x00074751) popup_call2_audio_second_window_ParamLimits

0x923e,	// (0x00074751) popup_call2_audio_second_window

0x929c,	// (0x000747af) popup_call2_audio_wait_window_ParamLimits

0x929c,	// (0x000747af) popup_call2_audio_wait_window

0x1ae6,	// (0x0006cff9) bg_popup_call2_act_pane_cp03

0x1d23,	// (0x0006d236) list_conf_pane_cp

0x3405,	// (0x0006e918) popup_call2_audio_conf_window_t1

0x2ce1,	// (0x0006e1f4) list_single_graphic_popup_conf2_pane_ParamLimits

0x2ce1,	// (0x0006e1f4) list_single_graphic_popup_conf2_pane

0x2cf4,	// (0x0006e207) list_highlight_pane_cp04

0x3413,	// (0x0006e926) list_single_graphic_popup_conf2_pane_g1

0x2d05,	// (0x0006e218) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf451,	// (0x0007a964) list_single_graphic_popup_conf2_pane_g

0x341d,	// (0x0006e930) list_single_graphic_popup_conf2_pane_t1

0x342b,	// (0x0006e93e) bg_popup_call2_act_pane_cp01_ParamLimits

0x342b,	// (0x0006e93e) bg_popup_call2_act_pane_cp01

0x34b5,	// (0x0006e9c8) call_type_pane_cp05_ParamLimits

0x34b5,	// (0x0006e9c8) call_type_pane_cp05

0x3509,	// (0x0006ea1c) popup_call2_audio_second_window_g1_ParamLimits

0x3509,	// (0x0006ea1c) popup_call2_audio_second_window_g1

0x355d,	// (0x0006ea70) popup_call2_audio_second_window_g2_ParamLimits

0x355d,	// (0x0006ea70) popup_call2_audio_second_window_g2

0x0002,

0xf456,	// (0x0007a969) popup_call2_audio_second_window_g_ParamLimits

0xf456,	// (0x0007a969) popup_call2_audio_second_window_g

0x35c2,	// (0x0006ead5) popup_call2_audio_second_window_t1_ParamLimits

0x35c2,	// (0x0006ead5) popup_call2_audio_second_window_t1

0x367d,	// (0x0006eb90) popup_call2_audio_second_window_t2_ParamLimits

0x367d,	// (0x0006eb90) popup_call2_audio_second_window_t2

0x36d0,	// (0x0006ebe3) popup_call2_audio_second_window_t3_ParamLimits

0x36d0,	// (0x0006ebe3) popup_call2_audio_second_window_t3

0x0003,

0xf45d,	// (0x0007a970) popup_call2_audio_second_window_t_ParamLimits

0xf45d,	// (0x0007a970) popup_call2_audio_second_window_t

0x1ae6,	// (0x0006cff9) bg_popup_call2_in_pane_cp02

0x1af0,	// (0x0006d003) call_type_pane_cp04

0x92db,	// (0x000747ee) popup_call2_audio_wait_window_g1

0x92e3,	// (0x000747f6) popup_call2_audio_wait_window_g2

0x0001,

0xf466,	// (0x0007a979) popup_call2_audio_wait_window_g

0x1b08,	// (0x0006d01b) popup_call2_audio_wait_window_t3

0x37c3,	// (0x0006ecd6) bg_popup_call2_act_pane_ParamLimits

0x37c3,	// (0x0006ecd6) bg_popup_call2_act_pane

0x3883,	// (0x0006ed96) call_type_pane_cp03_ParamLimits

0x3883,	// (0x0006ed96) call_type_pane_cp03

0x38e7,	// (0x0006edfa) popup_call2_audio_first_window_g1_ParamLimits

0x38e7,	// (0x0006edfa) popup_call2_audio_first_window_g1

0x3957,	// (0x0006ee6a) popup_call2_audio_first_window_g2_ParamLimits

0x3957,	// (0x0006ee6a) popup_call2_audio_first_window_g2

0x39bb,	// (0x0006eece) popup_call2_audio_first_window_g3_ParamLimits

0x39bb,	// (0x0006eece) popup_call2_audio_first_window_g3

0x0004,

0xf46b,	// (0x0007a97e) popup_call2_audio_first_window_g_ParamLimits

0xf46b,	// (0x0007a97e) popup_call2_audio_first_window_g

0x3a43,	// (0x0006ef56) popup_call2_audio_first_window_t1_ParamLimits

0x3a43,	// (0x0006ef56) popup_call2_audio_first_window_t1

0x3b46,	// (0x0006f059) popup_call2_audio_first_window_t4_ParamLimits

0x3b46,	// (0x0006f059) popup_call2_audio_first_window_t4

0x3c29,	// (0x0006f13c) popup_call2_audio_first_window_t5_ParamLimits

0x3c29,	// (0x0006f13c) popup_call2_audio_first_window_t5

0x0003,

0xf476,	// (0x0007a989) popup_call2_audio_first_window_t_ParamLimits

0xf476,	// (0x0007a989) popup_call2_audio_first_window_t

0x1d39,	// (0x0006d24c) bg_popup_call2_act_pane_g1

0x4246,	// (0x0006f759) popup_cale_lunar_info_window_t1

0x4254,	// (0x0006f767) popup_cale_lunar_info_window_t2

0x4262,	// (0x0006f775) popup_cale_lunar_info_window_t3

0x1ae6,	// (0x0006cff9) bg_popup_call2_bubble_pane

0x3d2a,	// (0x0006f23d) bg_popup_call2_in_pane_cp01_ParamLimits

0x3d2a,	// (0x0006f23d) bg_popup_call2_in_pane_cp01

0x17c2,	// (0x0006ccd5) call_type_pane_cp02

0x92eb,	// (0x000747fe) popup_call2_audio_out_window_g1_ParamLimits

0x92eb,	// (0x000747fe) popup_call2_audio_out_window_g1

0x3d72,	// (0x0006f285) popup_call2_audio_out_window_g2_ParamLimits

0x3d72,	// (0x0006f285) popup_call2_audio_out_window_g2

0x9317,	// (0x0007482a) popup_call2_audio_out_window_g3_ParamLimits

0x9317,	// (0x0007482a) popup_call2_audio_out_window_g3

0x0003,

0xf47f,	// (0x0007a992) popup_call2_audio_out_window_g_ParamLimits

0xf47f,	// (0x0007a992) popup_call2_audio_out_window_g

0x3da9,	// (0x0006f2bc) popup_call2_audio_out_window_t1_ParamLimits

0x3da9,	// (0x0006f2bc) popup_call2_audio_out_window_t1

0x3e08,	// (0x0006f31b) popup_call2_audio_out_window_t2_ParamLimits

0x3e08,	// (0x0006f31b) popup_call2_audio_out_window_t2

0x3e5c,	// (0x0006f36f) popup_call2_audio_out_window_t3_ParamLimits

0x3e5c,	// (0x0006f36f) popup_call2_audio_out_window_t3

0x3e72,	// (0x0006f385) popup_call2_audio_out_window_t4_ParamLimits

0x3e72,	// (0x0006f385) popup_call2_audio_out_window_t4

0x3e88,	// (0x0006f39b) popup_call2_audio_out_window_t5_ParamLimits

0x3e88,	// (0x0006f39b) popup_call2_audio_out_window_t5

0x0005,

0xf488,	// (0x0007a99b) popup_call2_audio_out_window_t_ParamLimits

0xf488,	// (0x0007a99b) popup_call2_audio_out_window_t

0x3eec,	// (0x0006f3ff) bg_popup_call2_in_pane_ParamLimits

0x3eec,	// (0x0006f3ff) bg_popup_call2_in_pane

0x3f48,	// (0x0006f45b) popup_call2_audio_in_window_g1_ParamLimits

0x3f48,	// (0x0006f45b) popup_call2_audio_in_window_g1

0x3f80,	// (0x0006f493) popup_call2_audio_in_window_g2_ParamLimits

0x3f80,	// (0x0006f493) popup_call2_audio_in_window_g2

0x3fb8,	// (0x0006f4cb) popup_call2_audio_in_window_g3_ParamLimits

0x3fb8,	// (0x0006f4cb) popup_call2_audio_in_window_g3

0x0003,

0xf495,	// (0x0007a9a8) popup_call2_audio_in_window_g_ParamLimits

0xf495,	// (0x0007a9a8) popup_call2_audio_in_window_g

0x4010,	// (0x0006f523) popup_call2_audio_in_window_t1_ParamLimits

0x4010,	// (0x0006f523) popup_call2_audio_in_window_t1

0x4090,	// (0x0006f5a3) popup_call2_audio_in_window_t2_ParamLimits

0x4090,	// (0x0006f5a3) popup_call2_audio_in_window_t2

0x4110,	// (0x0006f623) popup_call2_audio_in_window_t3_ParamLimits

0x4110,	// (0x0006f623) popup_call2_audio_in_window_t3

0x412a,	// (0x0006f63d) popup_call2_audio_in_window_t4_ParamLimits

0x412a,	// (0x0006f63d) popup_call2_audio_in_window_t4

0x413c,	// (0x0006f64f) popup_call2_audio_in_window_t5_ParamLimits

0x413c,	// (0x0006f64f) popup_call2_audio_in_window_t5

0x4151,	// (0x0006f664) popup_call2_audio_in_window_t6_ParamLimits

0x4151,	// (0x0006f664) popup_call2_audio_in_window_t6

0x0005,

0xf49e,	// (0x0007a9b1) popup_call2_audio_in_window_t_ParamLimits

0xf49e,	// (0x0007a9b1) popup_call2_audio_in_window_t

0x1d39,	// (0x0006d24c) bg_popup_call2_in_pane_g1

0x427e,	// (0x0006f791) popup_cale_lunar_info_window_t4

0x0003,

0xf506,	// (0x0007aa19) popup_cale_lunar_info_window_t

0x1d41,	// (0x0006d254) bg_popup_call2_rect_pane_ParamLimits

0x1d41,	// (0x0006d254) bg_popup_call2_rect_pane

0x1ae6,	// (0x0006cff9) call2_cli_visual_graphic_pane

0x1ae6,	// (0x0006cff9) call2_cli_visual_text_pane

0x970a,	// (0x00074c1d) smil_status_volume_pane_g3

0x0002,

0x1d59,	// (0x0006d26c) call2_cli_visual_graphic_pane_g1

0x1d59,	// (0x0006d26c) call2_cli_visual_graphic_pane_g2

0x1d59,	// (0x0006d26c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ab,	// (0x0007a9be) call2_cli_visual_graphic_pane_g

0x4166,	// (0x0006f679) bg_popup_call2_rect_pane_g1

0x1f54,	// (0x0006d467) bg_popup_call2_rect_pane_g2

0x416e,	// (0x0006f681) bg_popup_call2_rect_pane_g3

0x4176,	// (0x0006f689) bg_popup_call2_rect_pane_g4

0x417e,	// (0x0006f691) bg_popup_call2_rect_pane_g5

0x4186,	// (0x0006f699) bg_popup_call2_rect_pane_g6

0x418e,	// (0x0006f6a1) bg_popup_call2_rect_pane_g7

0x4196,	// (0x0006f6a9) bg_popup_call2_rect_pane_g8

0x419e,	// (0x0006f6b1) bg_popup_call2_rect_pane_g9

0x0008,

0xf4b2,	// (0x0007a9c5) bg_popup_call2_rect_pane_g

0x41a6,	// (0x0006f6b9) bg_popup_call2_bubble_pane_g1

0x41ae,	// (0x0006f6c1) bg_popup_call2_bubble_pane_g2

0x41b6,	// (0x0006f6c9) bg_popup_call2_bubble_pane_g3

0x41be,	// (0x0006f6d1) bg_popup_call2_bubble_pane_g4

0x41c6,	// (0x0006f6d9) bg_popup_call2_bubble_pane_g5

0x41ce,	// (0x0006f6e1) bg_popup_call2_bubble_pane_g6

0x41d6,	// (0x0006f6e9) bg_popup_call2_bubble_pane_g7

0x41de,	// (0x0006f6f1) bg_popup_call2_bubble_pane_g8

0x41e6,	// (0x0006f6f9) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c5,	// (0x0007a9d8) bg_popup_call2_bubble_pane_g

0x6fc6,	// (0x000724d9) aid_cale_week_size_cell_pane

0x1d41,	// (0x0006d254) aid_cams_cif_uncrop_pane_ParamLimits

0x1d41,	// (0x0006d254) aid_cams_cif_uncrop_pane

0x1dbc,	// (0x0006d2cf) aid_cams_size_cell_ParamLimits

0x1dbc,	// (0x0006d2cf) aid_cams_size_cell

0x1dbc,	// (0x0006d2cf) grid_cams_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) linegrid_cams_pane_ParamLimits

0x7685,	// (0x00072b98) call_video_pane_t1

0x76a6,	// (0x00072bb9) call_video_pane_t2

0x0001,

0xf1dd,	// (0x0007a6f0) call_video_pane_t

0x7bed,	// (0x00073100) aid_cale_month_size_cell_pane_ParamLimits

0x7bed,	// (0x00073100) aid_cale_month_size_cell_pane

0xf54a,	// (0x0007aa5d) smil_status_volume_pane_g

0x9717,	// (0x00074c2a) volume_smil_pane_ParamLimits

0x694c,	// (0x00071e5f) aid_popup2_width_pane

0x6ec5,	// (0x000723d8) cell_qdial_pane_g4_ParamLimits

0x6ec5,	// (0x000723d8) cell_qdial_pane_g4

0x8a9d,	// (0x00073fb0) aid_blid_cardinal_pane_ParamLimits

0x8aad,	// (0x00073fc0) aid_blid_destination_pane_ParamLimits

0x8aad,	// (0x00073fc0) aid_blid_destination_pane

0x1d41,	// (0x0006d254) bg_popup_call_poc_act_pane_ParamLimits

0x1d41,	// (0x0006d254) bg_popup_call_poc_act_pane

0x1d41,	// (0x0006d254) bg_popup_call_poc_inact_pane_ParamLimits

0x1d41,	// (0x0006d254) bg_popup_call_poc_inact_pane

0x41ee,	// (0x0006f701) bg_popup_call_poc_act_pane_g1

0x41f6,	// (0x0006f709) bg_popup_call_poc_act_pane_g2

0x41fe,	// (0x0006f711) bg_popup_call_poc_act_pane_g3

0x41be,	// (0x0006f6d1) bg_popup_call_poc_act_pane_g4

0x41c6,	// (0x0006f6d9) bg_popup_call_poc_act_pane_g5

0x4206,	// (0x0006f719) bg_popup_call_poc_act_pane_g6

0x41d6,	// (0x0006f6e9) bg_popup_call_poc_act_pane_g7

0x420e,	// (0x0006f721) bg_popup_call_poc_act_pane_g8

0x1ae6,	// (0x0006cff9) main_usb_pane

0x9570,	// (0x00074a83) popup_cale_lunar_info_window

0x79cf,	// (0x00072ee2) im_reading_pane_t1_ParamLimits

0x210e,	// (0x0006d621) list_im_pane_ParamLimits

0x211f,	// (0x0006d632) scroll_pane_cp07_ParamLimits

0x1ae6,	// (0x0006cff9) grid_highlight_pane_cp012

0x1d41,	// (0x0006d254) mup_scale_pane_ParamLimits

0x1dd8,	// (0x0006d2eb) main_usb_pane_g1_ParamLimits

0x1dd8,	// (0x0006d2eb) main_usb_pane_g1

0x1dd8,	// (0x0006d2eb) main_usb_pane_g2_ParamLimits

0x1dd8,	// (0x0006d2eb) main_usb_pane_g2

0x0001,

0xf4ef,	// (0x0007aa02) main_usb_pane_g_ParamLimits

0xf4ef,	// (0x0007aa02) main_usb_pane_g

0x1e34,	// (0x0006d347) main_usb_pane_t1_ParamLimits

0x1e34,	// (0x0006d347) main_usb_pane_t1

0x1e34,	// (0x0006d347) main_usb_pane_t2_ParamLimits

0x1e34,	// (0x0006d347) main_usb_pane_t2

0x1e34,	// (0x0006d347) main_usb_pane_t3_ParamLimits

0x1e34,	// (0x0006d347) main_usb_pane_t3

0x1e34,	// (0x0006d347) main_usb_pane_t4_ParamLimits

0x1e34,	// (0x0006d347) main_usb_pane_t4

0x1e34,	// (0x0006d347) main_usb_pane_t5_ParamLimits

0x1e34,	// (0x0006d347) main_usb_pane_t5

0x1e34,	// (0x0006d347) main_usb_pane_t6_ParamLimits

0x1e34,	// (0x0006d347) main_usb_pane_t6

0x0005,

0xf4f4,	// (0x0007aa07) main_usb_pane_t_ParamLimits

0x8a43,	// (0x00073f56) aid_text_placing

0x8a4f,	// (0x00073f62) main_location2_pane_t1_ParamLimits

0x8a63,	// (0x00073f76) main_location2_pane_t2_ParamLimits

0x8a77,	// (0x00073f8a) main_location2_pane_t3_ParamLimits

0x8a8b,	// (0x00073f9e) main_location2_pane_t4_ParamLimits

0x8a8b,	// (0x00073f9e) main_location2_pane_t4

0xf31e,	// (0x0007a831) main_location2_pane_t_ParamLimits

0x1d7d,	// (0x0006d290) find_pinb_pane_g2_ParamLimits

0x1d7d,	// (0x0006d290) find_pinb_pane_g2

0x0001,

0xf095,	// (0x0007a5a8) find_pinb_pane_g_ParamLimits

0xf095,	// (0x0007a5a8) find_pinb_pane_g

0x1d89,	// (0x0006d29c) find_pinb_pane_t1_ParamLimits

0x1d9b,	// (0x0006d2ae) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x0007a5ad) find_pinb_pane_t_ParamLimits

0x1ae6,	// (0x0006cff9) main_call3_pane

0x8190,	// (0x000736a3) cale_month_day_heading_pane_t1_ParamLimits

0x8216,	// (0x00073729) cale_month_day_heading_pane_t2_ParamLimits

0x828f,	// (0x000737a2) cale_month_day_heading_pane_t3_ParamLimits

0x8308,	// (0x0007381b) cale_month_day_heading_pane_t4_ParamLimits

0x8381,	// (0x00073894) cale_month_day_heading_pane_t5_ParamLimits

0x83fa,	// (0x0007390d) cale_month_day_heading_pane_t6_ParamLimits

0x8473,	// (0x00073986) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x0007a728) cale_month_day_heading_pane_t_ParamLimits

0x2369,	// (0x0006d87c) smil_status_volume_pane

0x8f08,	// (0x0007441b) postcard_address_pane_ParamLimits

0x8f08,	// (0x0007441b) postcard_address_pane

0x8f14,	// (0x00074427) postcard_message_pane_ParamLimits

0x8f14,	// (0x00074427) postcard_message_pane

0x9343,	// (0x00074856) call2_cli_visual_pane_t1_ParamLimits

0x9343,	// (0x00074856) call2_cli_visual_pane_t1

0x4393,	// (0x0006f8a6) postcard_message_pane_t1_ParamLimits

0x4393,	// (0x0006f8a6) postcard_message_pane_t1

0x437b,	// (0x0006f88e) postcard_address_pane_t1_ParamLimits

0x437b,	// (0x0006f88e) postcard_address_pane_t1

0x9848,	// (0x00074d5b) popup_call3_audio_in_window_ParamLimits

0x9848,	// (0x00074d5b) popup_call3_audio_in_window

0x972c,	// (0x00074c3f) bg_popup_call3_in_pane_ParamLimits

0x972c,	// (0x00074c3f) bg_popup_call3_in_pane

0x978e,	// (0x00074ca1) popup_call3_audio_in_window_g1_ParamLimits

0x978e,	// (0x00074ca1) popup_call3_audio_in_window_g1

0x97a6,	// (0x00074cb9) popup_call3_audio_in_window_g2_ParamLimits

0x97a6,	// (0x00074cb9) popup_call3_audio_in_window_g2

0x97be,	// (0x00074cd1) popup_call3_audio_in_window_g3_ParamLimits

0x97be,	// (0x00074cd1) popup_call3_audio_in_window_g3

0x0003,

0xf551,	// (0x0007aa64) popup_call3_audio_in_window_g_ParamLimits

0xf551,	// (0x0007aa64) popup_call3_audio_in_window_g

0x97e6,	// (0x00074cf9) popup_call3_audio_in_window_t1_ParamLimits

0x97e6,	// (0x00074cf9) popup_call3_audio_in_window_t1

0x980e,	// (0x00074d21) popup_call3_audio_in_window_t2_ParamLimits

0x980e,	// (0x00074d21) popup_call3_audio_in_window_t2

0x9836,	// (0x00074d49) popup_call3_audio_in_window_t3_ParamLimits

0x9836,	// (0x00074d49) popup_call3_audio_in_window_t3

0x0002,

0xf55a,	// (0x0007aa6d) popup_call3_audio_in_window_t_ParamLimits

0xf55a,	// (0x0007aa6d) popup_call3_audio_in_window_t

0x204d,	// (0x0006d560) bg_popup_call3_rect_pane

0x4166,	// (0x0006f679) bg_popup_call3_rect_pane_g1

0x1f54,	// (0x0006d467) bg_popup_call3_rect_pane_g2

0x416e,	// (0x0006f681) bg_popup_call3_rect_pane_g3

0x4176,	// (0x0006f689) bg_popup_call3_rect_pane_g4

0x417e,	// (0x0006f691) bg_popup_call3_rect_pane_g5

0x4186,	// (0x0006f699) bg_popup_call3_rect_pane_g6

0x418e,	// (0x0006f6a1) bg_popup_call3_rect_pane_g7

0x16c9,	// (0x0006cbdc) mup_visualizer_osc_pane

0x16c9,	// (0x0006cbdc) mup_visualizer_spec_pane

0x974c,	// (0x00074c5f) call3_video_qcif_pane_ParamLimits

0x974c,	// (0x00074c5f) call3_video_qcif_pane

0x975e,	// (0x00074c71) call3_video_qcif_uncrop_pane_ParamLimits

0x975e,	// (0x00074c71) call3_video_qcif_uncrop_pane

0x976c,	// (0x00074c7f) call3_video_subqcif_pane_ParamLimits

0x976c,	// (0x00074c7f) call3_video_subqcif_pane

0x977e,	// (0x00074c91) call3_video_subqcif_uncrop_pane_ParamLimits

0x977e,	// (0x00074c91) call3_video_subqcif_uncrop_pane

0x97d6,	// (0x00074ce9) popup_call3_audio_in_window_g4_ParamLimits

0x97d6,	// (0x00074ce9) popup_call3_audio_in_window_g4

0x16c9,	// (0x0006cbdc) mup_spec_half_pane

0x16c9,	// (0x0006cbdc) mup_spec_half_pane_cp

0x16c9,	// (0x0006cbdc) mup_osc_middle_pane

0x1e16,	// (0x0006d329) mup_visualizer_osc_pane_g1

0x432e,	// (0x0006f841) mup_spec_bar_pane_ParamLimits

0x432e,	// (0x0006f841) mup_spec_bar_pane

0x1e16,	// (0x0006d329) mup_spec_bar_pane_g1

0x1e16,	// (0x0006d329) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x0007a5c2) mup_spec_bar_pane_g

0x6fc6,	// (0x000724d9) aid_cale_week_size_cell_pane_ParamLimits

0x6fdb,	// (0x000724ee) bg_cale_heading_pane_ParamLimits

0x1faf,	// (0x0006d4c2) bg_cale_pane_cp01_ParamLimits

0x6ffb,	// (0x0007250e) cale_week_corner_pane_ParamLimits

0x7015,	// (0x00072528) cale_week_day_heading_pane_ParamLimits

0x7035,	// (0x00072548) cale_week_scroll_pane_g1_ParamLimits

0x7050,	// (0x00072563) cale_week_scroll_pane_g2_ParamLimits

0x7063,	// (0x00072576) cale_week_scroll_pane_g3_ParamLimits

0x7076,	// (0x00072589) cale_week_scroll_pane_g4_ParamLimits

0x7089,	// (0x0007259c) cale_week_scroll_pane_g5_ParamLimits

0x709c,	// (0x000725af) cale_week_scroll_pane_g6_ParamLimits

0x70af,	// (0x000725c2) cale_week_scroll_pane_g7_ParamLimits

0x70c4,	// (0x000725d7) cale_week_scroll_pane_g8_ParamLimits

0x70d9,	// (0x000725ec) cale_week_scroll_pane_g9_ParamLimits

0x70ec,	// (0x000725ff) cale_week_scroll_pane_g10_ParamLimits

0x70ff,	// (0x00072612) cale_week_scroll_pane_g11_ParamLimits

0x7112,	// (0x00072625) cale_week_scroll_pane_g12_ParamLimits

0x7129,	// (0x0007263c) cale_week_scroll_pane_g13_ParamLimits

0x7144,	// (0x00072657) cale_week_scroll_pane_g14_ParamLimits

0x715f,	// (0x00072672) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x0007a639) cale_week_scroll_pane_g_ParamLimits

0x718f,	// (0x000726a2) cale_week_time_pane_ParamLimits

0x71a4,	// (0x000726b7) grid_cale_week_pane_ParamLimits

0x1fcc,	// (0x0006d4df) listscroll_cale_week_pane_t1

0x1fde,	// (0x0006d4f1) scroll_pane_cp08_ParamLimits

0x7c61,	// (0x00073174) cale_month_corner_pane_ParamLimits

0x233f,	// (0x0006d852) cale_month_pane_t1

0x8113,	// (0x00073626) cale_month_week_pane_ParamLimits

0x39bb,	// (0x0006eece) popup_call_status_window_g1_ParamLimits

0x889a,	// (0x00073dad) popup_call_status_window_g2_ParamLimits

0x88a6,	// (0x00073db9) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x0007a7b8) popup_call_status_window_g_ParamLimits

0x2c88,	// (0x0006e19b) aid_call2_pane

0x5cff,	// (0x00071212) msg_header_pane_g1

0x8f08,	// (0x0007441b) postcard_address2_pane_ParamLimits

0x8f08,	// (0x0007441b) postcard_address2_pane

0x8f14,	// (0x00074427) postcard_message2_pane_ParamLimits

0x8f14,	// (0x00074427) postcard_message2_pane

0x96dc,	// (0x00074bef) message2_row_pane_ParamLimits

0x96dc,	// (0x00074bef) message2_row_pane

0x96f7,	// (0x00074c0a) address2_row_pane_ParamLimits

0x96f7,	// (0x00074c0a) address2_row_pane

0x42fb,	// (0x0006f80e) postcard_message2_row_pane_g1

0x4303,	// (0x0006f816) postcard_message2_row_pane_t1

0x42fb,	// (0x0006f80e) address2_row_pane_g1

0x4303,	// (0x0006f816) address2_row_pane_t1

0x742a,	// (0x0007293d) aid_size_cell_vorec

0x1ae6,	// (0x0006cff9) main_rss_pane

0x4311,	// (0x0006f824) rss_list_single_pane_ParamLimits

0x4311,	// (0x0006f824) rss_list_single_pane

0x431f,	// (0x0006f832) rss_list_single_pane_t1

0x431f,	// (0x0006f832) rss_list_single_pane_t2

0x0001,

0xf545,	// (0x0007aa58) rss_list_single_pane_t

0x1ae6,	// (0x0006cff9) main_camera2_pane

0x1ae6,	// (0x0006cff9) main_video2_pane

0x1dbc,	// (0x0006d2cf) cams_zoom_pane_cp2_ParamLimits

0x1dbc,	// (0x0006d2cf) cams_zoom_pane_cp2

0x1dbc,	// (0x0006d2cf) image2_vga_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) image2_vga_pane

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g1_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g1

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g2_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g2

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g3_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g3

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g4_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g4

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g5_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g5

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g6_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g6

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g7_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g7

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g8_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g8

0x0008,

0xf561,	// (0x0007aa74) main_camera2_pane_g_ParamLimits

0xf561,	// (0x0007aa74) main_camera2_pane_g

0x1e34,	// (0x0006d347) main_camera2_pane_t1_ParamLimits

0x1e34,	// (0x0006d347) main_camera2_pane_t1

0x1e34,	// (0x0006d347) main_camera2_pane_t2_ParamLimits

0x1e34,	// (0x0006d347) main_camera2_pane_t2

0x1e34,	// (0x0006d347) main_camera2_pane_t3_ParamLimits

0x1e34,	// (0x0006d347) main_camera2_pane_t3

0x1e34,	// (0x0006d347) main_camera2_pane_t4_ParamLimits

0x1e34,	// (0x0006d347) main_camera2_pane_t4

0x0006,

0xf574,	// (0x0007aa87) main_camera2_pane_t_ParamLimits

0xf574,	// (0x0007aa87) main_camera2_pane_t

0x30d1,	// (0x0006e5e4) cams_zoom_pane_cp4_ParamLimits

0x30d1,	// (0x0006e5e4) cams_zoom_pane_cp4

0x1d63,	// (0x0006d276) image2_cif_pane_ParamLimits

0x1d63,	// (0x0006d276) image2_cif_pane

0x1dbc,	// (0x0006d2cf) image2_subqcif_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) image2_subqcif_pane

0x30af,	// (0x0006e5c2) main_video2_pane_g1_ParamLimits

0x30af,	// (0x0006e5c2) main_video2_pane_g1

0x30af,	// (0x0006e5c2) main_video2_pane_g2_ParamLimits

0x30af,	// (0x0006e5c2) main_video2_pane_g2

0x30af,	// (0x0006e5c2) main_video2_pane_g3_ParamLimits

0x30af,	// (0x0006e5c2) main_video2_pane_g3

0x30af,	// (0x0006e5c2) main_video2_pane_g4_ParamLimits

0x30af,	// (0x0006e5c2) main_video2_pane_g4

0x30af,	// (0x0006e5c2) main_video2_pane_g5_ParamLimits

0x30af,	// (0x0006e5c2) main_video2_pane_g5

0x30af,	// (0x0006e5c2) main_video2_pane_g6_ParamLimits

0x30af,	// (0x0006e5c2) main_video2_pane_g6

0x0005,

0xf583,	// (0x0007aa96) main_video2_pane_g_ParamLimits

0xf583,	// (0x0007aa96) main_video2_pane_g

0x30bd,	// (0x0006e5d0) main_video2_pane_t1_ParamLimits

0x30bd,	// (0x0006e5d0) main_video2_pane_t1

0x30bd,	// (0x0006e5d0) main_video2_pane_t2_ParamLimits

0x30bd,	// (0x0006e5d0) main_video2_pane_t2

0x30bd,	// (0x0006e5d0) main_video2_pane_t3_ParamLimits

0x30bd,	// (0x0006e5d0) main_video2_pane_t3

0x0002,

0xf590,	// (0x0007aaa3) main_video2_pane_t_ParamLimits

0xf590,	// (0x0007aaa3) main_video2_pane_t

0x93fc,	// (0x0007490f) call_muted_g2

0x0001,

0xf537,	// (0x0007aa4a) call_muted_g

0x1ae6,	// (0x0006cff9) main_mup2_pane

0x1de6,	// (0x0006d2f9) main_mup2_pane_g1_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup2_pane_g1

0x1de6,	// (0x0006d2f9) main_mup2_pane_g2_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup2_pane_g2

0x1e16,	// (0x0006d329) main_mup_pane_g13_cp1

0x16c9,	// (0x0006cbdc) mup_volume_pane_cp1

0x1de6,	// (0x0006d2f9) main_mup2_pane_g4_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup2_pane_g4

0x1de6,	// (0x0006d2f9) main_mup2_pane_g5_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup2_pane_g5

0x1de6,	// (0x0006d2f9) main_mup2_pane_g6_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup2_pane_g6

0x1de6,	// (0x0006d2f9) main_mup2_pane_g7_ParamLimits

0x1de6,	// (0x0006d2f9) main_mup2_pane_g7

0x0006,

0xf597,	// (0x0007aaaa) main_mup2_pane_g_ParamLimits

0xf597,	// (0x0007aaaa) main_mup2_pane_g

0x1e02,	// (0x0006d315) main_mup2_pane_t1_ParamLimits

0x1e02,	// (0x0006d315) main_mup2_pane_t1

0x1e02,	// (0x0006d315) main_mup2_pane_t2_ParamLimits

0x1e02,	// (0x0006d315) main_mup2_pane_t2

0x1e02,	// (0x0006d315) main_mup2_pane_t3_ParamLimits

0x1e02,	// (0x0006d315) main_mup2_pane_t3

0x1e02,	// (0x0006d315) main_mup2_pane_t4_ParamLimits

0x1e02,	// (0x0006d315) main_mup2_pane_t4

0x1e02,	// (0x0006d315) main_mup2_pane_t5_ParamLimits

0x1e02,	// (0x0006d315) main_mup2_pane_t5

0x1e02,	// (0x0006d315) main_mup2_pane_t6_ParamLimits

0x1e02,	// (0x0006d315) main_mup2_pane_t6

0x0005,

0xf5a6,	// (0x0007aab9) main_mup2_pane_t_ParamLimits

0xf5a6,	// (0x0007aab9) main_mup2_pane_t

0x4270,	// (0x0006f783) mup2_visualizer_pane_ParamLimits

0x4270,	// (0x0006f783) mup2_visualizer_pane

0x4270,	// (0x0006f783) mup_progress_pane_cp_ParamLimits

0x4270,	// (0x0006f783) mup_progress_pane_cp

0x43af,	// (0x0006f8c2) mup_volume_pane_cp_ParamLimits

0x43af,	// (0x0006f8c2) mup_volume_pane_cp

0x1dca,	// (0x0006d2dd) mup2_visualizer_pane_g1_ParamLimits

0x1dca,	// (0x0006d2dd) mup2_visualizer_pane_g1

0x1dd8,	// (0x0006d2eb) mup2_visualizer_pane_g2_ParamLimits

0x1dd8,	// (0x0006d2eb) mup2_visualizer_pane_g2

0x1dd8,	// (0x0006d2eb) mup2_visualizer_pane_g3_ParamLimits

0x1dd8,	// (0x0006d2eb) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x0007a5b2) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x0007a5b2) mup2_visualizer_pane_g

0x16c9,	// (0x0006cbdc) aid_size_cell_fmradio

0x9512,	// (0x00074a25) aid_height_parent_landcape

0x219d,	// (0x0006d6b0) wml_content_pane_cp

0x21a5,	// (0x0006d6b8) wml_tabs_pane

0x21ae,	// (0x0006d6c1) popup_wml_miniature_window

0x21b6,	// (0x0006d6c9) scroll_pane_cp021

0x21ca,	// (0x0006d6dd) wml_content_pane_comp8

0x1ae6,	// (0x0006cff9) bg_popup_sub_pane_cp05

0x43c5,	// (0x0006f8d8) popup_wml_miniature_window_g1

0x43cd,	// (0x0006f8e0) wml_miniature_view_pane

0x9865,	// (0x00074d78) aid_size_wml_view

0x986d,	// (0x00074d80) wml_miniature_view_pane_g1

0x9876,	// (0x00074d89) wml_miniature_view_pane_g2

0x987f,	// (0x00074d92) wml_miniature_view_pane_g3

0x9887,	// (0x00074d9a) wml_miniature_view_pane_g4

0x988f,	// (0x00074da2) wml_miniature_view_pane_g5

0x9897,	// (0x00074daa) wml_miniature_view_pane_g6

0x989f,	// (0x00074db2) wml_miniature_view_pane_g7

0x98a7,	// (0x00074dba) wml_miniature_view_pane_g8

0x0007,

0xf5b3,	// (0x0007aac6) wml_miniature_view_pane_g

0x43d5,	// (0x0006f8e8) background_graphic_ParamLimits

0x43d5,	// (0x0006f8e8) background_graphic

0x43e1,	// (0x0006f8f4) wml_tabs_2_pane

0x43ea,	// (0x0006f8fd) wml_tabs_3_pane_ParamLimits

0x43ea,	// (0x0006f8fd) wml_tabs_3_pane

0x43fc,	// (0x0006f90f) wml_tabs_4_pane_ParamLimits

0x43fc,	// (0x0006f90f) wml_tabs_4_pane

0x4412,	// (0x0006f925) wml_tabs_5_pane_ParamLimits

0x4412,	// (0x0006f925) wml_tabs_5_pane

0x442c,	// (0x0006f93f) wml_tabs_pane_g2_ParamLimits

0x442c,	// (0x0006f93f) wml_tabs_pane_g2

0x4441,	// (0x0006f954) wml_tabs_pane_g3_ParamLimits

0x4441,	// (0x0006f954) wml_tabs_pane_g3

0x4456,	// (0x0006f969) wml_tabs_2_active_pane_ParamLimits

0x4456,	// (0x0006f969) wml_tabs_2_active_pane

0x4456,	// (0x0006f969) wml_tabs_2_passive_pane_ParamLimits

0x4456,	// (0x0006f969) wml_tabs_2_passive_pane

0x98af,	// (0x00074dc2) wml_tabs_3_active_pane_cp_ParamLimits

0x98af,	// (0x00074dc2) wml_tabs_3_active_pane_cp

0x98c0,	// (0x00074dd3) wml_tabs_3_passive_pane_ParamLimits

0x98c0,	// (0x00074dd3) wml_tabs_3_passive_pane

0x98d1,	// (0x00074de4) wml_tabs_3_passive_pane_cp_ParamLimits

0x98d1,	// (0x00074de4) wml_tabs_3_passive_pane_cp

0x98e2,	// (0x00074df5) tabs_4_active_pane

0x98ea,	// (0x00074dfd) tabs_4_passive_pane

0x98f2,	// (0x00074e05) tabs_4_passive_pane_cp

0x98fa,	// (0x00074e0d) tabs_4_passive_pane_cp2

0x9370,	// (0x00074883) aid_height_text

0x4270,	// (0x0006f783) mup_volume_cont_pane_ParamLimits

0x4270,	// (0x0006f783) mup_volume_cont_pane

0x16c9,	// (0x0006cbdc) aid_size_cell_pinb

0x16c9,	// (0x0006cbdc) aid_size_list_pinb

0x4270,	// (0x0006f783) mup2_volume_cont_pane_ParamLimits

0x4270,	// (0x0006f783) mup2_volume_cont_pane

0x9902,	// (0x00074e15) mup2_volume_cont_pane_g1_ParamLimits

0x9902,	// (0x00074e15) mup2_volume_cont_pane_g1

0x6958,	// (0x00071e6b) aid_size_cell_touch_ParamLimits

0x6958,	// (0x00071e6b) aid_size_cell_touch

0x6bff,	// (0x00072112) touch_pane_ParamLimits

0x6bff,	// (0x00072112) touch_pane

0x16c9,	// (0x0006cbdc) main_rss2_pane

0x446d,	// (0x0006f980) listscroll_rss2_pane

0x4476,	// (0x0006f989) rss2_navigation_pane

0x447e,	// (0x0006f991) list_rss2_pane

0x2db7,	// (0x0006e2ca) scroll_pane_cp22

0x4486,	// (0x0006f999) rss2_navigation_pane_g1

0x448f,	// (0x0006f9a2) rss2_navigation_pane_g2

0x4497,	// (0x0006f9aa) rss2_navigation_pane_g3

0x0002,

0xf5c4,	// (0x0007aad7) rss2_navigation_pane_g

0x449f,	// (0x0006f9b2) rss2_navigation_pane_t1

0x9918,	// (0x00074e2b) rss2_list_single_pane_ParamLimits

0x9918,	// (0x00074e2b) rss2_list_single_pane

0x44ad,	// (0x0006f9c0) rss2_list_single_pane_t2

0x44bb,	// (0x0006f9ce) rss2_list_single_pane_t3_ParamLimits

0x44bb,	// (0x0006f9ce) rss2_list_single_pane_t3

0x44d8,	// (0x0006f9eb) rss2_list_single_pane_t4

0x870f,	// (0x00073c22) smil_status_pane_g1

0x1d63,	// (0x0006d276) main_image2_pane_ParamLimits

0x1d63,	// (0x0006d276) main_image2_pane

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g9_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera2_pane_g9

0x1e34,	// (0x0006d347) main_camera2_pane_t5_ParamLimits

0x1e34,	// (0x0006d347) main_camera2_pane_t5

0x4998,	// (0x0006feab) main_camera2_pane_t6_ParamLimits

0x4998,	// (0x0006feab) main_camera2_pane_t6

0x9949,	// (0x00074e5c) main_image2_pane_g1_ParamLimits

0x9949,	// (0x00074e5c) main_image2_pane_g1

0x90a8,	// (0x000745bb) smil2_video_pane_ParamLimits

0x90a8,	// (0x000745bb) smil2_video_pane

0x698c,	// (0x00071e9f) aid_zoom_text_primary_cp

0x6ba8,	// (0x000720bb) popup_preview_fixed_window

0x2106,	// (0x0006d619) im_reading_pane_g1

0x9857,	// (0x00074d6a) cams2_bc_adjust_pane_cp_ParamLimits

0x9857,	// (0x00074d6a) cams2_bc_adjust_pane_cp

0x1dbc,	// (0x0006d2cf) cams2_bc_adjust_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) cams2_bc_adjust_pane

0x1e16,	// (0x0006d329) cams2_bc_adjust_pane_g1

0x16c9,	// (0x0006cbdc) cams2_slider_pane

0x1e16,	// (0x0006d329) cams2_slider_pane_g1

0x1e16,	// (0x0006d329) cams2_slider_pane_g2

0x0006,

0xf5cb,	// (0x0007aade) cams2_slider_pane_g

0x6ccd,	// (0x000721e0) calc_display_pane_ParamLimits

0x6ceb,	// (0x000721fe) calc_paper_pane_ParamLimits

0x6d07,	// (0x0007221a) grid_calc_pane_ParamLimits

0x8908,	// (0x00073e1b) popup_clock_digital_window_t1_ParamLimits

0x32a3,	// (0x0006e7b6) main_image_pane_t1

0x6cb3,	// (0x000721c6) aid_size_cell_calc_ParamLimits

0x6cb3,	// (0x000721c6) aid_size_cell_calc

0x954c,	// (0x00074a5f) popup_blid_sat_info2_window_ParamLimits

0x954c,	// (0x00074a5f) popup_blid_sat_info2_window

0x44e6,	// (0x0006f9f9) aid_size_cell_blid

0x4270,	// (0x0006f783) bg_popup_window_pane_cp07

0x4503,	// (0x0006fa16) grid_popup_blid_pane

0x450d,	// (0x0006fa20) heading_pane_cp05_ParamLimits

0x450d,	// (0x0006fa20) heading_pane_cp05

0x45d7,	// (0x0006faea) cell_popup_blid_pane_ParamLimits

0x45d7,	// (0x0006faea) cell_popup_blid_pane

0x45fb,	// (0x0006fb0e) cell_popup_blid_pane_g1

0x4603,	// (0x0006fb16) cell_popup_blid_pane_t1

0x4270,	// (0x0006f783) mup2_indicator_pane_ParamLimits

0x4270,	// (0x0006f783) mup2_indicator_pane

0x16c9,	// (0x0006cbdc) mup2_visualizer_osc_pane

0x43af,	// (0x0006f8c2) mup2_visualizer_spec_pane_ParamLimits

0x43af,	// (0x0006f8c2) mup2_visualizer_spec_pane

0x16c9,	// (0x0006cbdc) mup2_spec_half_pane

0x16c9,	// (0x0006cbdc) mup2_spec_half_pane_cp

0x4611,	// (0x0006fb24) mup2_spec_bar_pane_ParamLimits

0x4611,	// (0x0006fb24) mup2_spec_bar_pane

0x1e16,	// (0x0006d329) mup2_spec_bar_pane_g1

0x4630,	// (0x0006fb43) mup2_spec_bar_pane_g2

0x0001,

0xf5f1,	// (0x0007ab04) mup2_spec_bar_pane_g

0x16c9,	// (0x0006cbdc) mup2_osc_middle_pane

0x1e16,	// (0x0006d329) mup2_visualizer_osc_pane_g1

0x16f3,	// (0x0006cc06) popup_number_entry_window_t1_ParamLimits

0x1706,	// (0x0006cc19) popup_number_entry_window_t2_ParamLimits

0x1718,	// (0x0006cc2b) popup_number_entry_window_t3_ParamLimits

0x6c56,	// (0x00072169) popup_number_entry_window_t5_ParamLimits

0x6c56,	// (0x00072169) popup_number_entry_window_t5

0xf040,	// (0x0007a553) popup_number_entry_window_t_ParamLimits

0x172a,	// (0x0006cc3d) text_title_cp2_ParamLimits

0x8dd0,	// (0x000742e3) aid_hotspot_pointer_text2_pane

0x8e6a,	// (0x0007437d) main_viewer_pane_g9_ParamLimits

0x8e6a,	// (0x0007437d) main_viewer_pane_g9

0x233f,	// (0x0006d852) cale_month_pane_t1_ParamLimits

0x237c,	// (0x0006d88f) bg_cale_pane_ParamLimits

0x2394,	// (0x0006d8a7) list_cale_pane_ParamLimits

0x23a5,	// (0x0006d8b8) listscroll_cale_day_pane_t1

0x23b7,	// (0x0006d8ca) scroll_pane_cp09_ParamLimits

0x8b8b,	// (0x0007409e) main_mup_eq_pane_t1_ParamLimits

0x8b8b,	// (0x0007409e) main_mup_eq_pane_t1

0x8ba5,	// (0x000740b8) main_mup_eq_pane_t2_ParamLimits

0x8ba5,	// (0x000740b8) main_mup_eq_pane_t2

0x8bbf,	// (0x000740d2) main_mup_eq_pane_t3_ParamLimits

0x8bbf,	// (0x000740d2) main_mup_eq_pane_t3

0x8bd7,	// (0x000740ea) main_mup_eq_pane_t4_ParamLimits

0x8bd7,	// (0x000740ea) main_mup_eq_pane_t4

0x8bef,	// (0x00074102) main_mup_eq_pane_t5_ParamLimits

0x8bef,	// (0x00074102) main_mup_eq_pane_t5

0x8c07,	// (0x0007411a) main_mup_eq_pane_t6_ParamLimits

0x8c07,	// (0x0007411a) main_mup_eq_pane_t6

0x8c1b,	// (0x0007412e) main_mup_eq_pane_t7_ParamLimits

0x8c1b,	// (0x0007412e) main_mup_eq_pane_t7

0x8c2f,	// (0x00074142) main_mup_eq_pane_t8_ParamLimits

0x8c2f,	// (0x00074142) main_mup_eq_pane_t8

0x8c45,	// (0x00074158) main_mup_eq_pane_t9_ParamLimits

0x8c45,	// (0x00074158) main_mup_eq_pane_t9

0x8c5d,	// (0x00074170) main_mup_eq_pane_t10_ParamLimits

0x8c5d,	// (0x00074170) main_mup_eq_pane_t10

0x0009,

0xf39f,	// (0x0007a8b2) main_mup_eq_pane_t_ParamLimits

0xf39f,	// (0x0007a8b2) main_mup_eq_pane_t

0x8d1a,	// (0x0007422d) mup_equalizer_pane_cp5_ParamLimits

0x8d30,	// (0x00074243) mup_equalizer_pane_cp6_ParamLimits

0x8d48,	// (0x0007425b) mup_equalizer_pane_cp7_ParamLimits

0x16c9,	// (0x0006cbdc) main_gallery_pane

0x434d,	// (0x0006f860) smil2_volume_pane

0x4368,	// (0x0006f87b) smil_status_volume_pane_g1_ParamLimits

0x4355,	// (0x0006f868) smil_status_volume_pane_g2_ParamLimits

0x970a,	// (0x00074c1d) smil_status_volume_pane_g3_ParamLimits

0xf54a,	// (0x0007aa5d) smil_status_volume_pane_g_ParamLimits

0x4270,	// (0x0006f783) bg_popup_window_pane_cp07_ParamLimits

0x44ee,	// (0x0006fa01) blid_firmament_pane

0x1dbc,	// (0x0006d2cf) aid_size_cell_gallery_ParamLimits

0x1dbc,	// (0x0006d2cf) aid_size_cell_gallery

0x1dbc,	// (0x0006d2cf) grid_gallery_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) grid_gallery_pane

0x30d1,	// (0x0006e5e4) cell_gallery_pane_ParamLimits

0x30d1,	// (0x0006e5e4) cell_gallery_pane

0x1d63,	// (0x0006d276) bg_cell_gallery_focus_pane_ParamLimits

0x1d63,	// (0x0006d276) bg_cell_gallery_focus_pane

0x1dca,	// (0x0006d2dd) cell_gallery_pane_g1_ParamLimits

0x1dca,	// (0x0006d2dd) cell_gallery_pane_g1

0x1dca,	// (0x0006d2dd) cell_gallery_pane_g2_ParamLimits

0x1dca,	// (0x0006d2dd) cell_gallery_pane_g2

0x1dca,	// (0x0006d2dd) cell_gallery_pane_g3_ParamLimits

0x1dca,	// (0x0006d2dd) cell_gallery_pane_g3

0x1dd8,	// (0x0006d2eb) cell_gallery_pane_g4_ParamLimits

0x1dd8,	// (0x0006d2eb) cell_gallery_pane_g4

0x0003,

0xf5f6,	// (0x0007ab09) cell_gallery_pane_g_ParamLimits

0xf5f6,	// (0x0007ab09) cell_gallery_pane_g

0x463a,	// (0x0006fb4d) bg_cell_gallery_focus_pane_g1

0x4642,	// (0x0006fb55) bg_cell_gallery_focus_pane_g2

0x464a,	// (0x0006fb5d) bg_cell_gallery_focus_pane_g3

0x4652,	// (0x0006fb65) bg_cell_gallery_focus_pane_g4

0x465a,	// (0x0006fb6d) bg_cell_gallery_focus_pane_g5

0x4662,	// (0x0006fb75) bg_cell_gallery_focus_pane_g6

0x466a,	// (0x0006fb7d) bg_cell_gallery_focus_pane_g7

0x4672,	// (0x0006fb85) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5ff,	// (0x0007ab12) bg_cell_gallery_focus_pane_g

0x467a,	// (0x0006fb8d) aid_firma_cardinal

0x468e,	// (0x0006fba1) blid_firmament_pane_t1

0x46a5,	// (0x0006fbb8) blid_firmament_pane_t2

0x46bc,	// (0x0006fbcf) blid_firmament_pane_t3

0x46d3,	// (0x0006fbe6) blid_firmament_pane_t4

0x0003,

0xf610,	// (0x0007ab23) blid_firmament_pane_t

0x46ea,	// (0x0006fbfd) blid_sat_info_pane

0x1e16,	// (0x0006d329) blid_sat_info_pane_g1

0x1e16,	// (0x0006d329) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x0007a5c2) blid_sat_info_pane_g

0x46fa,	// (0x0006fc0d) blid_sat_info_pane_t1

0x4708,	// (0x0006fc1b) smil2_volume_content_pane

0x4711,	// (0x0006fc24) smil2_volume_pane_g1

0x1eeb,	// (0x0006d3fe) smil2_volume_content_pane_g1

0x4719,	// (0x0006fc2c) smil2_volume_content_pane_g2

0x4722,	// (0x0006fc35) smil2_volume_content_pane_g3

0x472b,	// (0x0006fc3e) smil2_volume_content_pane_g4

0x4734,	// (0x0006fc47) smil2_volume_content_pane_g5

0x473d,	// (0x0006fc50) smil2_volume_content_pane_g6

0x4746,	// (0x0006fc59) smil2_volume_content_pane_g7

0x474f,	// (0x0006fc62) smil2_volume_content_pane_g8

0x4758,	// (0x0006fc6b) smil2_volume_content_pane_g9

0x4761,	// (0x0006fc74) smil2_volume_content_pane_g10

0x0009,

0xf619,	// (0x0007ab2c) smil2_volume_content_pane_g

0x7225,	// (0x00072738) cale_week_day_heading_pane_t1_ParamLimits

0x7240,	// (0x00072753) cale_week_day_heading_pane_t2_ParamLimits

0x725b,	// (0x0007276e) cale_week_day_heading_pane_t3_ParamLimits

0x7276,	// (0x00072789) cale_week_day_heading_pane_t4_ParamLimits

0x7291,	// (0x000727a4) cale_week_day_heading_pane_t5_ParamLimits

0x72ac,	// (0x000727bf) cale_week_day_heading_pane_t6_ParamLimits

0x72c7,	// (0x000727da) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x0007a65a) cale_week_day_heading_pane_t_ParamLimits

0x1ffb,	// (0x0006d50e) bg_cale_side_pane_ParamLimits

0x72e2,	// (0x000727f5) cale_week_time_pane_t1_ParamLimits

0x72fc,	// (0x0007280f) cale_week_time_pane_t2_ParamLimits

0x7316,	// (0x00072829) cale_week_time_pane_t3_ParamLimits

0x7330,	// (0x00072843) cale_week_time_pane_t4_ParamLimits

0x734a,	// (0x0007285d) cale_week_time_pane_t5_ParamLimits

0x7364,	// (0x00072877) cale_week_time_pane_t6_ParamLimits

0x7382,	// (0x00072895) cale_week_time_pane_t7_ParamLimits

0x73a4,	// (0x000728b7) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x0007a669) cale_week_time_pane_t_ParamLimits

0x73c8,	// (0x000728db) cell_cale_week_pane_g2_ParamLimits

0x1ffb,	// (0x0006d50e) bg_cale_side_pane_cp01_ParamLimits

0x8504,	// (0x00073a17) cale_month_week_pane_t1_ParamLimits

0x851d,	// (0x00073a30) cale_month_week_pane_t2_ParamLimits

0x8536,	// (0x00073a49) cale_month_week_pane_t3_ParamLimits

0x854f,	// (0x00073a62) cale_month_week_pane_t4_ParamLimits

0x8568,	// (0x00073a7b) cale_month_week_pane_t5_ParamLimits

0x8589,	// (0x00073a9c) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x0007a737) cale_month_week_pane_t_ParamLimits

0x86cc,	// (0x00073bdf) cell_cale_month_pane_g1_ParamLimits

0x16c9,	// (0x0006cbdc) main_cale_event_viewer_pane

0x16c9,	// (0x0006cbdc) listscroll_cale_event_viewer_pane

0x476a,	// (0x0006fc7d) list_cale_ev_pane

0x4772,	// (0x0006fc85) scroll_pane_cp023

0x477e,	// (0x0006fc91) field_cale_ev_pane_ParamLimits

0x477e,	// (0x0006fc91) field_cale_ev_pane

0x479c,	// (0x0006fcaf) field_cale_ev_content_pane_ParamLimits

0x479c,	// (0x0006fcaf) field_cale_ev_content_pane

0x47a8,	// (0x0006fcbb) field_cale_ev_pane_g1_ParamLimits

0x47a8,	// (0x0006fcbb) field_cale_ev_pane_g1

0x47b4,	// (0x0006fcc7) field_cale_ev_pane_g2_ParamLimits

0x47b4,	// (0x0006fcc7) field_cale_ev_pane_g2

0x47cc,	// (0x0006fcdf) field_cale_ev_pane_g3_ParamLimits

0x47cc,	// (0x0006fcdf) field_cale_ev_pane_g3

0x0002,

0xf62e,	// (0x0007ab41) field_cale_ev_pane_g_ParamLimits

0xf62e,	// (0x0007ab41) field_cale_ev_pane_g

0x47e4,	// (0x0006fcf7) field_cale_ev_pane_t1_ParamLimits

0x47e4,	// (0x0006fcf7) field_cale_ev_pane_t1

0x1f6e,	// (0x0006d481) field_cale_ev_content_pane_t1_ParamLimits

0x1f6e,	// (0x0006d481) field_cale_ev_content_pane_t1

0x3174,	// (0x0006e687) bg_button_pane_cp01

0x6fb6,	// (0x000724c9) listscroll_cale_week_pane_ParamLimits

0x1fa6,	// (0x0006d4b9) popup_toolbar_window_cp01

0x1fcc,	// (0x0006d4df) listscroll_cale_week_pane_t1_ParamLimits

0x6fb6,	// (0x000724c9) listscroll_cale_day_pane_ParamLimits

0x1fa6,	// (0x0006d4b9) popup_toolbar_window_cp02

0x23a5,	// (0x0006d8b8) listscroll_cale_day_pane_t1_ParamLimits

0x6fb6,	// (0x000724c9) main_cale_month_pane_ParamLimits

0x9653,	// (0x00074b66) popup_toolbar_window_cp03_ParamLimits

0x9653,	// (0x00074b66) popup_toolbar_window_cp03

0x8fbe,	// (0x000744d1) main_image_pane_g2_ParamLimits

0x8fbe,	// (0x000744d1) main_image_pane_g2

0x8fca,	// (0x000744dd) main_image_pane_g3_ParamLimits

0x8fca,	// (0x000744dd) main_image_pane_g3

0x0002,

0xf431,	// (0x0007a944) main_image_pane_g_ParamLimits

0xf431,	// (0x0007a944) main_image_pane_g

0x32a3,	// (0x0006e7b6) main_image_pane_t1_ParamLimits

0x8fd6,	// (0x000744e9) main_image_pane_t2_ParamLimits

0x8fd6,	// (0x000744e9) main_image_pane_t2

0x8fe8,	// (0x000744fb) main_image_pane_t3_ParamLimits

0x8fe8,	// (0x000744fb) main_image_pane_t3

0x8ffa,	// (0x0007450d) main_image_pane_t4_ParamLimits

0x8ffa,	// (0x0007450d) main_image_pane_t4

0x0003,

0xf438,	// (0x0007a94b) main_image_pane_t_ParamLimits

0xf438,	// (0x0007a94b) main_image_pane_t

0x900c,	// (0x0007451f) popup_image_details_window_cp01

0x9016,	// (0x00074529) popup_toobar_trans_pane_cp01_ParamLimits

0x9016,	// (0x00074529) popup_toobar_trans_pane_cp01

0x95a3,	// (0x00074ab6) popup_image_details_window_ParamLimits

0x95a3,	// (0x00074ab6) popup_image_details_window

0x95b1,	// (0x00074ac4) popup_image_focus_window

0x1dbc,	// (0x0006d2cf) camera2_autofocus_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) camera2_autofocus_pane

0x16c9,	// (0x0006cbdc) bg_popup_sub_pane_cp06

0x47fb,	// (0x0006fd0e) popup_image_focus_window_g1

0x4803,	// (0x0006fd16) popup_image_focus_window_g2

0x480b,	// (0x0006fd1e) popup_image_focus_window_g3

0x4813,	// (0x0006fd26) popup_image_focus_window_g4

0x0003,

0xf635,	// (0x0007ab48) popup_image_focus_window_g

0x481b,	// (0x0006fd2e) popup_image_focus_window_t1

0x4829,	// (0x0006fd3c) popup_image_focus_window_t2

0x4839,	// (0x0006fd4c) popup_image_focus_window_t3

0x0002,

0xf63e,	// (0x0007ab51) popup_image_focus_window_t

0x1dca,	// (0x0006d2dd) camera2_autofocus_pane_g1

0x1d63,	// (0x0006d276) bg_tb_trans_pane_cp01

0x4847,	// (0x0006fd5a) popup_image_details_window_g1

0x485a,	// (0x0006fd6d) popup_image_details_window_g2

0x0002,

0xf650,	// (0x0007ab63) popup_image_details_window_g

0x4883,	// (0x0006fd96) popup_image_details_window_t1

0x4895,	// (0x0006fda8) popup_image_details_window_t2

0x48ae,	// (0x0006fdc1) popup_image_details_window_t3

0x48c2,	// (0x0006fdd5) popup_image_details_window_t4

0x48dd,	// (0x0006fdf0) popup_image_details_window_t5

0x0004,

0xf657,	// (0x0007ab6a) popup_image_details_window_t

0x1e60,	// (0x0006d373) bg_calc_paper_pane_ParamLimits

0x16c9,	// (0x0006cbdc) grid_highlight_pane_cp013

0x6d42,	// (0x00072255) list_calc_pane_ParamLimits

0x6d54,	// (0x00072267) scroll_pane_cp024

0x1e74,	// (0x0006d387) bg_calc_display_pane_ParamLimits

0x6d5c,	// (0x0007226f) calc_display_pane_t1_ParamLimits

0x6d71,	// (0x00072284) calc_display_pane_t2_ParamLimits

0x6d86,	// (0x00072299) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x0007a5da) calc_display_pane_t_ParamLimits

0x6e5f,	// (0x00072372) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x0007a5f7) cell_calc_pane_g

0x6e68,	// (0x0007237b) cell_calc_pane_t1

0x1ec9,	// (0x0006d3dc) grid_highlight_pane_cp02_ParamLimits

0x1edf,	// (0x0006d3f2) toolbar_button_pane_cp01_ParamLimits

0x1edf,	// (0x0006d3f2) toolbar_button_pane_cp01

0x32e8,	// (0x0006e7fb) temp_image_control_pane_ParamLimits

0x32e8,	// (0x0006e7fb) temp_image_control_pane

0x1d63,	// (0x0006d276) main_mp3_pane

0x48f7,	// (0x0006fe0a) temp_image_control_pane_g1_ParamLimits

0x48f7,	// (0x0006fe0a) temp_image_control_pane_g1

0x4905,	// (0x0006fe18) temp_image_control_pane_g2_ParamLimits

0x4905,	// (0x0006fe18) temp_image_control_pane_g2

0x4917,	// (0x0006fe2a) temp_image_control_pane_g3_ParamLimits

0x4917,	// (0x0006fe2a) temp_image_control_pane_g3

0x9955,	// (0x00074e68) temp_image_control_pane_g4_ParamLimits

0x9955,	// (0x00074e68) temp_image_control_pane_g4

0x0003,

0xf662,	// (0x0007ab75) temp_image_control_pane_g_ParamLimits

0xf662,	// (0x0007ab75) temp_image_control_pane_g

0x48f7,	// (0x0006fe0a) main_mp3_pane_g1

0x9966,	// (0x00074e79) main_mp3_pane_g2

0x0007,

0xf66b,	// (0x0007ab7e) main_mp3_pane_g

0x494c,	// (0x0006fe5f) main_mp3_pane_t1

0x1dd8,	// (0x0006d2eb) main_camera_pane_g8_ParamLimits

0x1dd8,	// (0x0006d2eb) main_camera_pane_g8

0x7572,	// (0x00072a85) main_video_pane_g7_ParamLimits

0x7572,	// (0x00072a85) main_video_pane_g7

0x1e34,	// (0x0006d347) main_camera2_pane_t7_ParamLimits

0x1e34,	// (0x0006d347) main_camera2_pane_t7

0x215d,	// (0x0006d670) scroll_pane_cp025_ParamLimits

0x215d,	// (0x0006d670) scroll_pane_cp025

0x2171,	// (0x0006d684) scroll_pane_cp026_ParamLimits

0x2171,	// (0x0006d684) scroll_pane_cp026

0x2180,	// (0x0006d693) wml_content_pane_ParamLimits

0x16c9,	// (0x0006cbdc) main_touch_calib_pane

0x9a0a,	// (0x00074f1d) main_touch_calib_pane_g1

0x9a16,	// (0x00074f29) main_touch_calib_pane_g2

0x9a22,	// (0x00074f35) main_touch_calib_pane_g3

0x9a2e,	// (0x00074f41) main_touch_calib_pane_g4

0x0003,

0xf689,	// (0x0007ab9c) main_touch_calib_pane_g

0x9a3a,	// (0x00074f4d) main_touch_calib_pane_t1

0x9a53,	// (0x00074f66) main_touch_calib_pane_t2

0x0004,

0xf692,	// (0x0007aba5) main_touch_calib_pane_t

0x2e93,	// (0x0006e3a6) mup_progress_pane_cp02

0x2ec8,	// (0x0006e3db) navi_pane_g1

0x2f83,	// (0x0006e496) navi_pane_mp_t3

0x1d63,	// (0x0006d276) main_mp3_pane_ParamLimits

0x9690,	// (0x00074ba3) navi_pane_ParamLimits

0x48f7,	// (0x0006fe0a) main_mp3_pane_g1_ParamLimits

0x9966,	// (0x00074e79) main_mp3_pane_g2_ParamLimits

0x9972,	// (0x00074e85) main_mp3_pane_g3_ParamLimits

0x9972,	// (0x00074e85) main_mp3_pane_g3

0x997e,	// (0x00074e91) main_mp3_pane_g4_ParamLimits

0x997e,	// (0x00074e91) main_mp3_pane_g4

0x1dca,	// (0x0006d2dd) main_mp3_pane_g5_ParamLimits

0x1dca,	// (0x0006d2dd) main_mp3_pane_g5

0x4927,	// (0x0006fe3a) main_mp3_pane_g6_ParamLimits

0x4927,	// (0x0006fe3a) main_mp3_pane_g6

0x4934,	// (0x0006fe47) main_mp3_pane_g7_ParamLimits

0x4934,	// (0x0006fe47) main_mp3_pane_g7

0x4940,	// (0x0006fe53) main_mp3_pane_g8_ParamLimits

0x4940,	// (0x0006fe53) main_mp3_pane_g8

0xf66b,	// (0x0007ab7e) main_mp3_pane_g_ParamLimits

0x998a,	// (0x00074e9d) main_mp3_pane_t2

0x999a,	// (0x00074ead) main_mp3_pane_t3

0x495a,	// (0x0006fe6d) main_mp3_pane_t4

0x4968,	// (0x0006fe7b) main_mp3_pane_t5

0x0005,

0xf67c,	// (0x0007ab8f) main_mp3_pane_t

0x4976,	// (0x0006fe89) mup_progress_pane_cp01

0x698c,	// (0x00071e9f) aid_zoom_text_secondary2

0x476a,	// (0x0006fc7d) list_cale_ev2_pane

0x4772,	// (0x0006fc85) scroll_pane_cp023_ParamLimits

0x9aae,	// (0x00074fc1) field_cale_ev2_pane_ParamLimits

0x9aae,	// (0x00074fc1) field_cale_ev2_pane

0x9ad7,	// (0x00074fea) field_cale_ev2_pane_g1_ParamLimits

0x9ad7,	// (0x00074fea) field_cale_ev2_pane_g1

0x9ae3,	// (0x00074ff6) field_cale_ev2_pane_g2_ParamLimits

0x9ae3,	// (0x00074ff6) field_cale_ev2_pane_g2

0x9afb,	// (0x0007500e) field_cale_ev2_pane_g3_ParamLimits

0x9afb,	// (0x0007500e) field_cale_ev2_pane_g3

0x0003,

0xf69d,	// (0x0007abb0) field_cale_ev2_pane_g_ParamLimits

0xf69d,	// (0x0007abb0) field_cale_ev2_pane_g

0x5d9c,	// (0x000712af) field_cale_ev2_pane_t1_ParamLimits

0x5d9c,	// (0x000712af) field_cale_ev2_pane_t1

0x5db3,	// (0x000712c6) field_cale_ev2_pane_t2_ParamLimits

0x5db3,	// (0x000712c6) field_cale_ev2_pane_t2

0x0001,

0xf6a6,	// (0x0007abb9) field_cale_ev2_pane_t_ParamLimits

0xf6a6,	// (0x0007abb9) field_cale_ev2_pane_t

0x8ed2,	// (0x000743e5) main_postcard_pane_g5_ParamLimits

0x8ed2,	// (0x000743e5) main_postcard_pane_g5

0x8ee0,	// (0x000743f3) main_postcard_pane_g6_ParamLimits

0x8ee0,	// (0x000743f3) main_postcard_pane_g6

0x1dbc,	// (0x0006d2cf) camera2_autofocus_pane_cp_ParamLimits

0x1dbc,	// (0x0006d2cf) camera2_autofocus_pane_cp

0x1d63,	// (0x0006d276) main_mup3_pane

0x9b5e,	// (0x00075071) main_mup3_pane_g1_ParamLimits

0x9b5e,	// (0x00075071) main_mup3_pane_g1

0x9b7f,	// (0x00075092) main_mup3_pane_g2_ParamLimits

0x9b7f,	// (0x00075092) main_mup3_pane_g2

0x9bf7,	// (0x0007510a) main_mup3_pane_g3_ParamLimits

0x9bf7,	// (0x0007510a) main_mup3_pane_g3

0x9c3a,	// (0x0007514d) main_mup3_pane_g4_ParamLimits

0x9c3a,	// (0x0007514d) main_mup3_pane_g4

0x9c7d,	// (0x00075190) main_mup3_pane_g5_ParamLimits

0x9c7d,	// (0x00075190) main_mup3_pane_g5

0x9cc0,	// (0x000751d3) main_mup3_pane_g6_ParamLimits

0x9cc0,	// (0x000751d3) main_mup3_pane_g6

0x1dd8,	// (0x0006d2eb) main_mup3_pane_g7_ParamLimits

0x1dd8,	// (0x0006d2eb) main_mup3_pane_g7

0x0007,

0xf6b6,	// (0x0007abc9) main_mup3_pane_g_ParamLimits

0xf6b6,	// (0x0007abc9) main_mup3_pane_g

0x9d36,	// (0x00075249) main_mup3_pane_t1_ParamLimits

0x9d36,	// (0x00075249) main_mup3_pane_t1

0x9da5,	// (0x000752b8) main_mup3_pane_t2_ParamLimits

0x9da5,	// (0x000752b8) main_mup3_pane_t2

0x9e6e,	// (0x00075381) main_mup3_pane_t4_ParamLimits

0x9e6e,	// (0x00075381) main_mup3_pane_t4

0x9ebc,	// (0x000753cf) main_mup3_pane_t5_ParamLimits

0x9ebc,	// (0x000753cf) main_mup3_pane_t5

0x9f6c,	// (0x0007547f) main_mup3_pane_t6_ParamLimits

0x9f6c,	// (0x0007547f) main_mup3_pane_t6

0x0005,

0xf6c7,	// (0x0007abda) main_mup3_pane_t_ParamLimits

0xf6c7,	// (0x0007abda) main_mup3_pane_t

0xa018,	// (0x0007552b) mup3_progress_pane_ParamLimits

0xa018,	// (0x0007552b) mup3_progress_pane

0xa096,	// (0x000755a9) popup_mup3_control_window_ParamLimits

0xa096,	// (0x000755a9) popup_mup3_control_window

0x49e8,	// (0x0006fefb) popup_mup3_text_window

0xa0af,	// (0x000755c2) mup3_progress_pane_t1

0xa0ce,	// (0x000755e1) mup3_progress_pane_t2

0x49f0,	// (0x0006ff03) mup3_progress_pane_t3

0x0002,

0xf6d4,	// (0x0007abe7) mup3_progress_pane_t

0x4a0d,	// (0x0006ff20) mup_progress_pane_cp03

0x16c9,	// (0x0006cbdc) bg_tb_trans_pane_cp04

0xa0ed,	// (0x00075600) mup3_volume_pane

0xa0f5,	// (0x00075608) popup_mup3_control_window_g1

0xa0fe,	// (0x00075611) mup3_volume_pane_g1

0xa107,	// (0x0007561a) mup3_volume_pane_g2

0xa110,	// (0x00075623) mup3_volume_pane_g3

0x0002,

0xf6db,	// (0x0007abee) mup3_volume_pane_g

0x16c9,	// (0x0006cbdc) bg_tb_trans_pane_cp03

0x4a1d,	// (0x0006ff30) popup_mup3_text_window_g1

0x4a25,	// (0x0006ff38) popup_mup3_text_window_t1

0x1ebc,	// (0x0006d3cf) list_calc_item_pane_g1_ParamLimits

0x4464,	// (0x0006f977) mup_volume_pane_cp_g1

0x9a6c,	// (0x00074f7f) main_touch_calib_pane_t3

0x9a82,	// (0x00074f95) main_touch_calib_pane_t4

0x9a98,	// (0x00074fab) main_touch_calib_pane_t5

0x6944,	// (0x00071e57) aid_cell_size_toolbar2

0x694c,	// (0x00071e5f) aid_popup3_width_pane

0x5c51,	// (0x00071164) aid_zoom_text_msg_primary

0x7474,	// (0x00072987) vorec_t7

0x1e80,	// (0x0006d393) bg_calc_paper_pane_g1_ParamLimits

0x1e98,	// (0x0006d3ab) bg_calc_paper_pane_g2_ParamLimits

0x1e8c,	// (0x0006d39f) bg_calc_paper_pane_g3_ParamLimits

0x1eb0,	// (0x0006d3c3) bg_calc_paper_pane_g4_ParamLimits

0x1ea4,	// (0x0006d3b7) bg_calc_paper_pane_g5_ParamLimits

0x6dc5,	// (0x000722d8) bg_calc_paper_pane_g6_ParamLimits

0x6dd6,	// (0x000722e9) bg_calc_paper_pane_g7_ParamLimits

0x6de7,	// (0x000722fa) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x0007a5e1) bg_calc_paper_pane_g_ParamLimits

0x6df8,	// (0x0007230b) calc_bg_paper_pane_g9_ParamLimits

0x1dbc,	// (0x0006d2cf) image_qvga_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) image_qvga_pane

0x1d41,	// (0x0006d254) bg_popup_sub_pane_cp04_ParamLimits

0x321f,	// (0x0006e732) popup_mup_playback_window_g1_ParamLimits

0x322b,	// (0x0006e73e) popup_mup_playback_window_t1_ParamLimits

0x3240,	// (0x0006e753) popup_mup_playback_window_t2_ParamLimits

0xf42c,	// (0x0007a93f) popup_mup_playback_window_t_ParamLimits

0x1dca,	// (0x0006d2dd) main_mup2_pane_g3_ParamLimits

0x1dca,	// (0x0006d2dd) main_mup2_pane_g3

0x7733,	// (0x00072c46) popup_toolbar_window_cp04

0x35b1,	// (0x0006eac4) popup_call2_audio_second_window_g3_ParamLimits

0x35b1,	// (0x0006eac4) popup_call2_audio_second_window_g3

0x39c9,	// (0x0006eedc) popup_call2_audio_first_window_g4_ParamLimits

0x39c9,	// (0x0006eedc) popup_call2_audio_first_window_g4

0x3ff0,	// (0x0006f503) popup_call2_audio_in_window_g4_ParamLimits

0x3ff0,	// (0x0006f503) popup_call2_audio_in_window_g4

0x8fb1,	// (0x000744c4) aid_area_sk_bg_cut_ParamLimits

0x8fb1,	// (0x000744c4) aid_area_sk_bg_cut

0x3255,	// (0x0006e768) aid_area_sk_bg_cut_2_ParamLimits

0x3255,	// (0x0006e768) aid_area_sk_bg_cut_2

0x16c9,	// (0x0006cbdc) aid_placing_details_win

0x16c9,	// (0x0006cbdc) aid_placing_details_win_2

0x1dca,	// (0x0006d2dd) camera2_autofocus_pane_g1_ParamLimits

0x6b99,	// (0x000720ac) popup_fixed_preview_cale_window_ParamLimits

0x6b99,	// (0x000720ac) popup_fixed_preview_cale_window

0x3013,	// (0x0006e526) navi_slider_pane_g3

0x300a,	// (0x0006e51d) navi_slider_pane_g4

0x3001,	// (0x0006e514) navi_slider_pane_g5

0x3013,	// (0x0006e526) navi_slider_pane_g6

0x8b5f,	// (0x00074072) navi_slider_pane_g7

0x3141,	// (0x0006e654) mup_scale_pane_g3

0x314a,	// (0x0006e65d) mup_scale_pane_g4

0x3153,	// (0x0006e666) mup_scale_pane_g5

0x8d60,	// (0x00074273) mup_scale_pane_g6

0x8d69,	// (0x0007427c) mup_scale_pane_g7

0x1e16,	// (0x0006d329) cams2_slider_pane_g3

0x1e16,	// (0x0006d329) cams2_slider_pane_g4

0x1e16,	// (0x0006d329) cams2_slider_pane_g5

0x1e16,	// (0x0006d329) cams2_slider_pane_g6

0x1e16,	// (0x0006d329) cams2_slider_pane_g7

0x1e16,	// (0x0006d329) camera2_autofocus_pane_cp_g1

0x42d4,	// (0x0006f7e7) bg_popup_preview_window_pane_cp02_ParamLimits

0x42d4,	// (0x0006f7e7) bg_popup_preview_window_pane_cp02

0x4a33,	// (0x0006ff46) list_fp_cale_pane_ParamLimits

0x4a33,	// (0x0006ff46) list_fp_cale_pane

0x4a3f,	// (0x0006ff52) popup_fixed_preview_cale_window_t1_ParamLimits

0x4a3f,	// (0x0006ff52) popup_fixed_preview_cale_window_t1

0xa119,	// (0x0007562c) popup_fixed_preview_cale_window_t2_ParamLimits

0xa119,	// (0x0007562c) popup_fixed_preview_cale_window_t2

0xa12e,	// (0x00075641) popup_fixed_preview_cale_window_t3_ParamLimits

0xa12e,	// (0x00075641) popup_fixed_preview_cale_window_t3

0x0002,

0xf6e2,	// (0x0007abf5) popup_fixed_preview_cale_window_t_ParamLimits

0xf6e2,	// (0x0007abf5) popup_fixed_preview_cale_window_t

0xa143,	// (0x00075656) list_single_fp_cale_pane_ParamLimits

0xa143,	// (0x00075656) list_single_fp_cale_pane

0x4a5d,	// (0x0006ff70) list_single_fp_cale_pane_g1_ParamLimits

0x4a5d,	// (0x0006ff70) list_single_fp_cale_pane_g1

0x4a69,	// (0x0006ff7c) list_single_fp_cale_pane_g2_ParamLimits

0x4a69,	// (0x0006ff7c) list_single_fp_cale_pane_g2

0x0002,

0xf6e9,	// (0x0007abfc) list_single_fp_cale_pane_g_ParamLimits

0xf6e9,	// (0x0007abfc) list_single_fp_cale_pane_g

0x4a82,	// (0x0006ff95) list_single_fp_cale_pane_t1_ParamLimits

0x4a82,	// (0x0006ff95) list_single_fp_cale_pane_t1

0x4a94,	// (0x0006ffa7) list_single_fp_cale_pane_t2_ParamLimits

0x4a94,	// (0x0006ffa7) list_single_fp_cale_pane_t2

0x0001,

0xf6f0,	// (0x0007ac03) list_single_fp_cale_pane_t_ParamLimits

0xf6f0,	// (0x0007ac03) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x16c9,	// (0x0006cbdc) main_dialer_pane

0x16c9,	// (0x0006cbdc) aid_cell_size_keypad

0x16c9,	// (0x0006cbdc) dialer_ne_pane

0x16c9,	// (0x0006cbdc) grid_dialer_command_1_pane

0x16c9,	// (0x0006cbdc) grid_dialer_command_2_pane

0x16c9,	// (0x0006cbdc) grid_dialer_keypad_pane

0x4270,	// (0x0006f783) bg_popup_call_pane_cp06_ParamLimits

0x4270,	// (0x0006f783) bg_popup_call_pane_cp06

0x4270,	// (0x0006f783) dialer_ne_clear_pane_ParamLimits

0x4270,	// (0x0006f783) dialer_ne_clear_pane

0x1e16,	// (0x0006d329) dialer_ne_pane_g1

0x1e34,	// (0x0006d347) dialer_ne_pane_t1_ParamLimits

0x1e34,	// (0x0006d347) dialer_ne_pane_t1

0x4cd8,	// (0x000701eb) dialer_ne_pane_t2_ParamLimits

0x4cd8,	// (0x000701eb) dialer_ne_pane_t2

0xa156,	// (0x00075669) dialer_ne_pane_t3_ParamLimits

0xa156,	// (0x00075669) dialer_ne_pane_t3

0x0002,

0xf6f5,	// (0x0007ac08) dialer_ne_pane_t_ParamLimits

0xf6f5,	// (0x0007ac08) dialer_ne_pane_t

0xa156,	// (0x00075669) dialer_ne_pane_t3_copy1_ParamLimits

0xa156,	// (0x00075669) dialer_ne_pane_t3_copy1

0x4ac7,	// (0x0006ffda) cell_dialer_keypad_pane_ParamLimits

0x4ac7,	// (0x0006ffda) cell_dialer_keypad_pane

0x1d63,	// (0x0006d276) cell_dialer_command_1_pane_ParamLimits

0x1d63,	// (0x0006d276) cell_dialer_command_1_pane

0x4ade,	// (0x0006fff1) cell_dialer_command_2_pane_ParamLimits

0x4ade,	// (0x0006fff1) cell_dialer_command_2_pane

0x1d63,	// (0x0006d276) bg_button_pane_cp02_ParamLimits

0x1d63,	// (0x0006d276) bg_button_pane_cp02

0x1dca,	// (0x0006d2dd) cell_dialer_keypad_pane_g1_ParamLimits

0x1dca,	// (0x0006d2dd) cell_dialer_keypad_pane_g1

0x1d63,	// (0x0006d276) bg_button_pane_cp03_ParamLimits

0x1d63,	// (0x0006d276) bg_button_pane_cp03

0x1dca,	// (0x0006d2dd) cell_dialer_command_1_pane_g1_ParamLimits

0x1dca,	// (0x0006d2dd) cell_dialer_command_1_pane_g1

0x16c9,	// (0x0006cbdc) bg_button_pane_cp04

0x1e16,	// (0x0006d329) cell_dialer_command_2_pane_g1

0x16c9,	// (0x0006cbdc) bg_button_pane_cp06

0x1e16,	// (0x0006d329) dialer_ne_clear_pane_g1

0x2ed4,	// (0x0006e3e7) navi_pane_g2

0x2f02,	// (0x0006e415) navi_pane_g3

0x0002,

0xf334,	// (0x0007a847) navi_pane_g

0x2f91,	// (0x0006e4a4) navi_pane_mv_g2

0x2fb8,	// (0x0006e4cb) navi_pane_mv_g5

0x8b2a,	// (0x0007403d) navi_pane_mv_t1

0x1e74,	// (0x0006d387) main_clock2_pane

0x1dbc,	// (0x0006d2cf) main_clock2_list_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) main_clock2_list_pane

0xa1cc,	// (0x000756df) main_clock2_pane_t1_ParamLimits

0xa1cc,	// (0x000756df) main_clock2_pane_t1

0xa1fa,	// (0x0007570d) main_clock2_pane_t2_ParamLimits

0xa1fa,	// (0x0007570d) main_clock2_pane_t2

0x0004,

0xf701,	// (0x0007ac14) main_clock2_pane_t_ParamLimits

0xf701,	// (0x0007ac14) main_clock2_pane_t

0xa25f,	// (0x00075772) popup_clock_analogue_window_cp03_ParamLimits

0xa25f,	// (0x00075772) popup_clock_analogue_window_cp03

0xa27d,	// (0x00075790) popup_clock_digital_window_cp02_ParamLimits

0xa27d,	// (0x00075790) popup_clock_digital_window_cp02

0xa2f2,	// (0x00075805) main_clock2_list_single_pane_ParamLimits

0xa2f2,	// (0x00075805) main_clock2_list_single_pane

0x204d,	// (0x0006d560) list_highlight_pane_cp05

0x4b25,	// (0x00070038) main_clock2_list_single_pane_t1

0x7733,	// (0x00072c46) popup_toolbar_window_cp04_ParamLimits

0x1dd8,	// (0x0006d2eb) camera2_autofocus_pane_g2_ParamLimits

0x1dd8,	// (0x0006d2eb) camera2_autofocus_pane_g2

0x1dd8,	// (0x0006d2eb) camera2_autofocus_pane_g3_ParamLimits

0x1dd8,	// (0x0006d2eb) camera2_autofocus_pane_g3

0x1dd8,	// (0x0006d2eb) camera2_autofocus_pane_g4_ParamLimits

0x1dd8,	// (0x0006d2eb) camera2_autofocus_pane_g4

0x1dd8,	// (0x0006d2eb) camera2_autofocus_pane_g5_ParamLimits

0x1dd8,	// (0x0006d2eb) camera2_autofocus_pane_g5

0x0004,

0xf645,	// (0x0007ab58) camera2_autofocus_pane_g_ParamLimits

0xf645,	// (0x0007ab58) camera2_autofocus_pane_g

0x9b1f,	// (0x00075032) camera2_autofocus_pane_cp_g2

0x9b27,	// (0x0007503a) camera2_autofocus_pane_cp_g3

0x9b2f,	// (0x00075042) camera2_autofocus_pane_cp_g4

0x9b37,	// (0x0007504a) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ab,	// (0x0007abbe) camera2_autofocus_pane_cp_g

0x16c9,	// (0x0006cbdc) popup_dialer_spcha_window

0x16c9,	// (0x0006cbdc) bg_popup_sub_pane_cp07

0x16c9,	// (0x0006cbdc) list_spcha_pane

0x4b33,	// (0x00070046) list_single_spcha_pane_ParamLimits

0x4b33,	// (0x00070046) list_single_spcha_pane

0x16c9,	// (0x0006cbdc) list_highlight_pane_cp06

0x2604,	// (0x0006db17) list_single_spcha_pane_t1

0x3d9a,	// (0x0006f2ad) popup_call2_audio_out_window_g4_ParamLimits

0x3d9a,	// (0x0006f2ad) popup_call2_audio_out_window_g4

0x16c9,	// (0x0006cbdc) main_imed2_pane

0x95b9,	// (0x00074acc) popup_imed_adjust2_window

0x95cc,	// (0x00074adf) popup_imed_trans_window_ParamLimits

0x95cc,	// (0x00074adf) popup_imed_trans_window

0x4539,	// (0x0006fa4c) popup_blid_sat_info2_window_t1

0x4547,	// (0x0006fa5a) popup_blid_sat_info2_window_t2

0x000a,

0xf5da,	// (0x0007aaed) popup_blid_sat_info2_window_t

0xa3a7,	// (0x000758ba) aid_size_cell_colour_35

0xa3c1,	// (0x000758d4) aid_size_cell_colour_112

0xa3d8,	// (0x000758eb) aid_size_cell_effect

0x1d63,	// (0x0006d276) bg_tb_trans_pane_cp02

0x2c66,	// (0x0006e179) heading_imed_pane

0xa3f2,	// (0x00075905) listscroll_imed_pane

0x4b45,	// (0x00070058) heading_imed_pane_g1

0x4b4d,	// (0x00070060) heading_imed_pane_t1

0x4b5b,	// (0x0007006e) grid_imed_colour_35_pane_ParamLimits

0x4b5b,	// (0x0007006e) grid_imed_colour_35_pane

0xa3fe,	// (0x00075911) grid_imed_effect_pane

0x4b72,	// (0x00070085) list_imed_aspect_pane

0xa40e,	// (0x00075921) scroll_pane_cp027_ParamLimits

0xa40e,	// (0x00075921) scroll_pane_cp027

0xa41a,	// (0x0007592d) cell_imed_effect_pane_ParamLimits

0xa41a,	// (0x0007592d) cell_imed_effect_pane

0x4b7a,	// (0x0007008d) cell_imed_colour_pane_ParamLimits

0x4b7a,	// (0x0007008d) cell_imed_colour_pane

0x4bbc,	// (0x000700cf) cell_imed_colour_pane_g1_ParamLimits

0x4bbc,	// (0x000700cf) cell_imed_colour_pane_g1

0x4bcd,	// (0x000700e0) hgihlgiht_grid_pane_cp016_ParamLimits

0x4bcd,	// (0x000700e0) hgihlgiht_grid_pane_cp016

0xa432,	// (0x00075945) cell_imed_effect_pane_g1

0xa43a,	// (0x0007594d) grid_highlight_pane_cp017

0x4bde,	// (0x000700f1) list_imed_single_pane_ParamLimits

0x4bde,	// (0x000700f1) list_imed_single_pane

0x16c9,	// (0x0006cbdc) list_highlight_pane_cp07

0x4bf3,	// (0x00070106) list_imed_aspect_pane_comp1_t1

0x30d1,	// (0x0006e5e4) bg_tb_trans_pane_cp05

0x4c15,	// (0x00070128) popup_imed_adjust2_window_g1

0x4c3c,	// (0x0007014f) popup_imed_adjust2_window_t1

0x4c54,	// (0x00070167) slider_imed_adjust_pane

0x4c68,	// (0x0007017b) slider_imed_adjust_pane_g1

0x4c78,	// (0x0007018b) slider_imed_adjust_pane_g2

0x4c88,	// (0x0007019b) slider_imed_adjust_pane_g3

0x4c99,	// (0x000701ac) slider_imed_adjust_pane_g4

0x0003,

0xf71e,	// (0x0007ac31) slider_imed_adjust_pane_g

0xa443,	// (0x00075956) aid_size_cell_clipart2

0xa44f,	// (0x00075962) grid_imed_clipart_pane

0x3164,	// (0x0006e677) scroll_pane_cp031

0xa459,	// (0x0007596c) cell_imed_clipart_pane_ParamLimits

0xa459,	// (0x0007596c) cell_imed_clipart_pane

0xa47b,	// (0x0007598e) cell_imed_clipart_pane_g1

0x16c9,	// (0x0006cbdc) grid_highlight_pane_cp014

0xa1ae,	// (0x000756c1) main_clock2_pane_g1_ParamLimits

0xa1ae,	// (0x000756c1) main_clock2_pane_g1

0xa299,	// (0x000757ac) aid_call2_pane_cp10

0xa2ab,	// (0x000757be) aid_call_pane_cp10

0x2e35,	// (0x0006e348) popup_clock_analogue_window_cp10_g1

0x2e35,	// (0x0006e348) popup_clock_analogue_window_cp10_g2

0xa2bd,	// (0x000757d0) popup_clock_analogue_window_cp10_g3

0xa2bd,	// (0x000757d0) popup_clock_analogue_window_cp10_g4

0x2e35,	// (0x0006e348) popup_clock_analogue_window_cp10_g5

0x0004,

0xf70c,	// (0x0007ac1f) popup_clock_analogue_window_cp10_g

0xa2d3,	// (0x000757e6) popup_clock_analogue_window_cp10_t1

0xa304,	// (0x00075817) clock_digital_number_pane_cp10_ParamLimits

0xa304,	// (0x00075817) clock_digital_number_pane_cp10

0xa31e,	// (0x00075831) clock_digital_number_pane_cp11_ParamLimits

0xa31e,	// (0x00075831) clock_digital_number_pane_cp11

0xa338,	// (0x0007584b) clock_digital_number_pane_cp12_ParamLimits

0xa338,	// (0x0007584b) clock_digital_number_pane_cp12

0xa352,	// (0x00075865) clock_digital_number_pane_cp13_ParamLimits

0xa352,	// (0x00075865) clock_digital_number_pane_cp13

0xa36c,	// (0x0007587f) clock_digital_separator_pane_cp10_ParamLimits

0xa36c,	// (0x0007587f) clock_digital_separator_pane_cp10

0xa386,	// (0x00075899) popup_clock_digital_window_cp02_t1_ParamLimits

0xa386,	// (0x00075899) popup_clock_digital_window_cp02_t1

0x1d39,	// (0x0006d24c) clock_digital_number_pane_cp10_g1

0x1d39,	// (0x0006d24c) clock_digital_number_pane_cp10_g2

0x0001,

0xf727,	// (0x0007ac3a) clock_digital_number_pane_cp10_g

0x1d39,	// (0x0006d24c) clock_digital_separator_pane_cp10_g1

0x1d39,	// (0x0006d24c) clock_digital_separator_pane_g2_cp10

0x2fc0,	// (0x0006e4d3) navi_pane_vded_g4

0x2fc9,	// (0x0006e4dc) navi_pane_vded_g5

0x2fd2,	// (0x0006e4e5) navi_pane_vded_t1

0x16c9,	// (0x0006cbdc) main_vded_pane

0xa484,	// (0x00075997) main_vded_pane_g1

0xa490,	// (0x000759a3) main_vded_pane_g2

0xa49a,	// (0x000759ad) main_vded_pane_g3

0x0002,

0xf72c,	// (0x0007ac3f) main_vded_pane_g

0xa4a4,	// (0x000759b7) main_vded_pane_t1

0xa4b2,	// (0x000759c5) main_vded_pane_t2

0x0001,

0xf733,	// (0x0007ac46) main_vded_pane_t

0xa4c0,	// (0x000759d3) vded_slider_pane

0xa4ca,	// (0x000759dd) vded_video_pane

0x4caa,	// (0x000701bd) vded_video_pane_g1

0xa4d4,	// (0x000759e7) vded_video_pane_g2

0x1e16,	// (0x0006d329) vded_video_pane_g3

0x0002,

0xf738,	// (0x0007ac4b) vded_video_pane_g

0x4cb4,	// (0x000701c7) vded_slider_pane_g1

0x4464,	// (0x0006f977) vded_slider_pane_g2

0x4cbd,	// (0x000701d0) vded_slider_pane_g3

0x4cc6,	// (0x000701d9) vded_slider_pane_g4

0x4ccf,	// (0x000701e2) vded_slider_pane_g5

0x0004,

0xf73f,	// (0x0007ac52) vded_slider_pane_g

0xa088,	// (0x0007559b) mup3_rocker_pane_ParamLimits

0xa088,	// (0x0007559b) mup3_rocker_pane

0xa4dd,	// (0x000759f0) mup3_control_keys_pane_g1

0xa4e5,	// (0x000759f8) mup3_control_keys_pane_g2

0xa4ed,	// (0x00075a00) mup3_control_keys_pane_g3

0xa4f5,	// (0x00075a08) mup3_control_keys_pane_g4

0x0003,

0xf74a,	// (0x0007ac5d) mup3_control_keys_pane_g

0x6bc1,	// (0x000720d4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6bc1,	// (0x000720d4) popup_toolbar2_fixed_window_cp01

0xa0a2,	// (0x000755b5) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa0a2,	// (0x000755b5) popup_toolbar2_fixed_window_cp02

0x3723,	// (0x0006ec36) popup_call2_audio_second_window_t4_ParamLimits

0x3723,	// (0x0006ec36) popup_call2_audio_second_window_t4

0x3c5f,	// (0x0006f172) popup_call2_audio_first_window_t6_ParamLimits

0x3c5f,	// (0x0006f172) popup_call2_audio_first_window_t6

0x3e9d,	// (0x0006f3b0) popup_call2_audio_out_window_t6_ParamLimits

0x3e9d,	// (0x0006f3b0) popup_call2_audio_out_window_t6

0x16c9,	// (0x0006cbdc) main_vitu_pane

0x1dbc,	// (0x0006d2cf) aid_size_cell_itu_ParamLimits

0x1dbc,	// (0x0006d2cf) aid_size_cell_itu

0x1dbc,	// (0x0006d2cf) bg_popup_window_pane_cp08_ParamLimits

0x1dbc,	// (0x0006d2cf) bg_popup_window_pane_cp08

0x1dbc,	// (0x0006d2cf) field_vitu_entry_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) field_vitu_entry_pane

0x1dbc,	// (0x0006d2cf) grid_vitu_function_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) grid_vitu_function_pane

0x1dbc,	// (0x0006d2cf) grid_vitu_itu_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) grid_vitu_itu_pane

0x1dbc,	// (0x0006d2cf) cell_vitu_itu_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) cell_vitu_itu_pane

0x1dbc,	// (0x0006d2cf) cell_vitu_function_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) cell_vitu_function_pane

0x1d63,	// (0x0006d276) bg_popup_sub_pane_cp08_ParamLimits

0x1d63,	// (0x0006d276) bg_popup_sub_pane_cp08

0x1e20,	// (0x0006d333) field_vitu_entry_pane_t1_ParamLimits

0x1e20,	// (0x0006d333) field_vitu_entry_pane_t1

0x4cd8,	// (0x000701eb) field_vitu_entry_pane_t2_ParamLimits

0x4cd8,	// (0x000701eb) field_vitu_entry_pane_t2

0x0001,

0xf753,	// (0x0007ac66) field_vitu_entry_pane_t_ParamLimits

0xf753,	// (0x0007ac66) field_vitu_entry_pane_t

0x4270,	// (0x0006f783) bg_button_pane_cp05_ParamLimits

0x4270,	// (0x0006f783) bg_button_pane_cp05

0x4cf5,	// (0x00070208) cell_vitu_itu_pane_g1

0x30bd,	// (0x0006e5d0) cell_vitu_itu_pane_t1_ParamLimits

0x30bd,	// (0x0006e5d0) cell_vitu_itu_pane_t1

0x30bd,	// (0x0006e5d0) cell_vitu_itu_pane_t2_ParamLimits

0x30bd,	// (0x0006e5d0) cell_vitu_itu_pane_t2

0x0002,

0xf758,	// (0x0007ac6b) cell_vitu_itu_pane_t_ParamLimits

0xf758,	// (0x0007ac6b) cell_vitu_itu_pane_t

0x16c9,	// (0x0006cbdc) bg_button_pane_cp07

0x1e16,	// (0x0006d329) cell_vitu_function_pane_g1

0x6d2b,	// (0x0007223e) main_calc_pane_g1

0x6980,	// (0x00071e93) aid_visual_content_pane

0x16c9,	// (0x0006cbdc) main_vradio_pane

0x1dd8,	// (0x0006d2eb) main_vradio_pane_g1_ParamLimits

0x1dd8,	// (0x0006d2eb) main_vradio_pane_g1

0x1dd8,	// (0x0006d2eb) main_vradio_pane_g2_ParamLimits

0x1dd8,	// (0x0006d2eb) main_vradio_pane_g2

0x0001,

0xf4ef,	// (0x0007aa02) main_vradio_pane_g_ParamLimits

0xf4ef,	// (0x0007aa02) main_vradio_pane_g

0x1e34,	// (0x0006d347) main_vradio_pane_t1_ParamLimits

0x1e34,	// (0x0006d347) main_vradio_pane_t1

0x1e34,	// (0x0006d347) main_vradio_pane_t2_ParamLimits

0x1e34,	// (0x0006d347) main_vradio_pane_t2

0x1e34,	// (0x0006d347) main_vradio_pane_t3_ParamLimits

0x1e34,	// (0x0006d347) main_vradio_pane_t3

0x0002,

0xf75f,	// (0x0007ac72) main_vradio_pane_t_ParamLimits

0xf75f,	// (0x0007ac72) main_vradio_pane_t

0x1dbc,	// (0x0006d2cf) vradio_rocker_control_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) vradio_rocker_control_pane

0x1dbc,	// (0x0006d2cf) vradio_station_info_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) vradio_station_info_pane

0x1d63,	// (0x0006d276) vradio_frequency_info_pane_ParamLimits

0x1d63,	// (0x0006d276) vradio_frequency_info_pane

0x1e16,	// (0x0006d329) vradio_station_info_pane_g1

0x30bd,	// (0x0006e5d0) vradio_station_info_pane_t1_ParamLimits

0x30bd,	// (0x0006e5d0) vradio_station_info_pane_t1

0x1e34,	// (0x0006d347) vradio_station_info_pane_t2_ParamLimits

0x1e34,	// (0x0006d347) vradio_station_info_pane_t2

0x0001,

0xf766,	// (0x0007ac79) vradio_station_info_pane_t_ParamLimits

0xf766,	// (0x0007ac79) vradio_station_info_pane_t

0x16c9,	// (0x0006cbdc) vradio_tuning_pane

0xa505,	// (0x00075a18) vradio_rocker_control_pane_g1

0x4d11,	// (0x00070224) vradio_rocker_control_pane_g2

0xa50d,	// (0x00075a20) vradio_rocker_control_pane_g3

0xa515,	// (0x00075a28) vradio_rocker_control_pane_g4

0xa51d,	// (0x00075a30) vradio_rocker_control_pane_g5

0x0004,

0xf76b,	// (0x0007ac7e) vradio_rocker_control_pane_g

0x1e16,	// (0x0006d329) vradio_frequency_info_pane_g1

0x1e20,	// (0x0006d333) vradio_frequency_info_pane_t1_ParamLimits

0x1e20,	// (0x0006d333) vradio_frequency_info_pane_t1

0xa525,	// (0x00075a38) vradio_tuning_pane_g1

0xa532,	// (0x00075a45) vradio_tuning_pane_t1

0x69c9,	// (0x00071edc) area_side_right_pane_ParamLimits

0x69c9,	// (0x00071edc) area_side_right_pane

0x429b,	// (0x0006f7ae) status_small_pane_g1

0x42a3,	// (0x0006f7b6) status_small_pane_g2

0x42ac,	// (0x0006f7bf) status_small_pane_g3

0x42b5,	// (0x0006f7c8) status_small_pane_g4

0x0003,

0xf53c,	// (0x0007aa4f) status_small_pane_g

0x42be,	// (0x0006f7d1) status_small_pane_t1

0x16c9,	// (0x0006cbdc) main_video3_pane

0x16c9,	// (0x0006cbdc) cams_zoom_vslider_pane

0x4d19,	// (0x0007022c) image3_wide_pane_ParamLimits

0x4d19,	// (0x0007022c) image3_wide_pane

0x16c9,	// (0x0006cbdc) image3_wide_small_pane

0x4d33,	// (0x00070246) main_video3_pane_g1_ParamLimits

0x4d33,	// (0x00070246) main_video3_pane_g1

0x4d33,	// (0x00070246) main_video3_pane_g2_ParamLimits

0x4d33,	// (0x00070246) main_video3_pane_g2

0x0001,

0xf776,	// (0x0007ac89) main_video3_pane_g_ParamLimits

0xf776,	// (0x0007ac89) main_video3_pane_g

0x4d51,	// (0x00070264) main_video3_pane_t1_ParamLimits

0x4d51,	// (0x00070264) main_video3_pane_t1

0x4d51,	// (0x00070264) main_video3_pane_t2_ParamLimits

0x4d51,	// (0x00070264) main_video3_pane_t2

0x4d51,	// (0x00070264) main_video3_pane_t3_ParamLimits

0x4d51,	// (0x00070264) main_video3_pane_t3

0x0002,

0xf77b,	// (0x0007ac8e) main_video3_pane_t_ParamLimits

0xf77b,	// (0x0007ac8e) main_video3_pane_t

0x1e16,	// (0x0006d329) cams_zoom_vslider_pane_g1

0x1e16,	// (0x0006d329) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x0007a5c2) cams_zoom_vslider_pane_g

0x16c9,	// (0x0006cbdc) small_slider_vertical_pane

0x1e16,	// (0x0006d329) small_slider_vertical_pane_g1

0x1e16,	// (0x0006d329) small_slider_vertical_pane_g2

0x4d78,	// (0x0007028b) small_slider_vertical_pane_g3

0x0002,

0xf782,	// (0x0007ac95) small_slider_vertical_pane_g

0x16c9,	// (0x0006cbdc) main_hwr_training_pane

0x4d81,	// (0x00070294) hwr_training_instruct_pane_ParamLimits

0x4d81,	// (0x00070294) hwr_training_instruct_pane

0xa541,	// (0x00075a54) hwr_training_navi_pane_ParamLimits

0xa541,	// (0x00075a54) hwr_training_navi_pane

0xa55b,	// (0x00075a6e) hwr_training_write_pane_ParamLimits

0xa55b,	// (0x00075a6e) hwr_training_write_pane

0x16c9,	// (0x0006cbdc) bg_frame_shadow_pane

0x4db8,	// (0x000702cb) hwr_training_write_pane_g1

0x4dc0,	// (0x000702d3) hwr_training_write_pane_g2

0x4dc8,	// (0x000702db) hwr_training_write_pane_g3

0x4dd0,	// (0x000702e3) hwr_training_write_pane_g4

0x4dd8,	// (0x000702eb) hwr_training_write_pane_g5

0x4de0,	// (0x000702f3) hwr_training_write_pane_g6

0x4de8,	// (0x000702fb) hwr_training_write_pane_g7

0x0006,

0xf789,	// (0x0007ac9c) hwr_training_write_pane_g

0xa593,	// (0x00075aa6) hwr_training_navi_pane_g1_ParamLimits

0xa593,	// (0x00075aa6) hwr_training_navi_pane_g1

0xa5a5,	// (0x00075ab8) hwr_training_navi_pane_g2_ParamLimits

0xa5a5,	// (0x00075ab8) hwr_training_navi_pane_g2

0xa5b7,	// (0x00075aca) hwr_training_navi_pane_g3_ParamLimits

0xa5b7,	// (0x00075aca) hwr_training_navi_pane_g3

0xa5c7,	// (0x00075ada) hwr_training_navi_pane_g4_ParamLimits

0xa5c7,	// (0x00075ada) hwr_training_navi_pane_g4

0x0004,

0xf798,	// (0x0007acab) hwr_training_navi_pane_g_ParamLimits

0xf798,	// (0x0007acab) hwr_training_navi_pane_g

0xa5e1,	// (0x00075af4) hwr_training_navi_pane_t1

0xa5ef,	// (0x00075b02) list_single_hwr_training_instruct_pane_ParamLimits

0xa5ef,	// (0x00075b02) list_single_hwr_training_instruct_pane

0x4df0,	// (0x00070303) list_single_hwr_training_instruct_pane_t1

0x463a,	// (0x0006fb4d) bg_frame_shadow_pane_g1

0x4dff,	// (0x00070312) bg_frame_shadow_pane_g2

0x4e07,	// (0x0007031a) bg_frame_shadow_pane_g3

0x4e0f,	// (0x00070322) bg_frame_shadow_pane_g4

0x4e17,	// (0x0007032a) bg_frame_shadow_pane_g5

0x4e1f,	// (0x00070332) bg_frame_shadow_pane_g6

0x4e27,	// (0x0007033a) bg_frame_shadow_pane_g7

0x1f2c,	// (0x0006d43f) bg_frame_shadow_pane_g8

0x0007,

0xf7a3,	// (0x0007acb6) bg_frame_shadow_pane_g

0x16c9,	// (0x0006cbdc) main_video_tele_dialer_pane

0xa614,	// (0x00075b27) aid_size_cell_video_keypad_ParamLimits

0xa614,	// (0x00075b27) aid_size_cell_video_keypad

0xa624,	// (0x00075b37) grid_video_dialer_keypad_pane_ParamLimits

0xa624,	// (0x00075b37) grid_video_dialer_keypad_pane

0xa658,	// (0x00075b6b) video_down_pane_cp_ParamLimits

0xa658,	// (0x00075b6b) video_down_pane_cp

0xa682,	// (0x00075b95) cell_video_dialer_keypad_pane_ParamLimits

0xa682,	// (0x00075b95) cell_video_dialer_keypad_pane

0x4e2f,	// (0x00070342) bg_button_pane_cp08_ParamLimits

0x4e2f,	// (0x00070342) bg_button_pane_cp08

0xa697,	// (0x00075baa) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa697,	// (0x00075baa) cell_video_dialer_keypad_pane_g1

0xa07c,	// (0x0007558f) mup3_rocker2_pane_ParamLimits

0xa07c,	// (0x0007558f) mup3_rocker2_pane

0x1e16,	// (0x0006d329) mup3_rocker2_pane_g1

0x9529,	// (0x00074a3c) main_dialer2_pane

0x16c9,	// (0x0006cbdc) main_mp4_pane

0xa6ec,	// (0x00075bff) main_mp4_pane_g1_ParamLimits

0xa6ec,	// (0x00075bff) main_mp4_pane_g1

0xa70e,	// (0x00075c21) main_mp4_pane_g2_ParamLimits

0xa70e,	// (0x00075c21) main_mp4_pane_g2

0xa72c,	// (0x00075c3f) main_mp4_pane_g3_ParamLimits

0xa72c,	// (0x00075c3f) main_mp4_pane_g3

0xa765,	// (0x00075c78) main_mp4_pane_g4_ParamLimits

0xa765,	// (0x00075c78) main_mp4_pane_g4

0xa78d,	// (0x00075ca0) main_mp4_pane_g5_ParamLimits

0xa78d,	// (0x00075ca0) main_mp4_pane_g5

0x0007,

0xf7c3,	// (0x0007acd6) main_mp4_pane_g_ParamLimits

0xf7c3,	// (0x0007acd6) main_mp4_pane_g

0xa7f5,	// (0x00075d08) main_mp4_pane_t1_ParamLimits

0xa7f5,	// (0x00075d08) main_mp4_pane_t1

0xa857,	// (0x00075d6a) main_mp4_pane_t2_ParamLimits

0xa857,	// (0x00075d6a) main_mp4_pane_t2

0xa8bb,	// (0x00075dce) main_mp4_pane_t3_ParamLimits

0xa8bb,	// (0x00075dce) main_mp4_pane_t3

0xa919,	// (0x00075e2c) main_mp4_pane_t4_ParamLimits

0xa919,	// (0x00075e2c) main_mp4_pane_t4

0x0003,

0xf7d4,	// (0x0007ace7) main_mp4_pane_t_ParamLimits

0xf7d4,	// (0x0007ace7) main_mp4_pane_t

0xa977,	// (0x00075e8a) mp4_progress_pane_ParamLimits

0xa977,	// (0x00075e8a) mp4_progress_pane

0xa9ab,	// (0x00075ebe) mp4_rocker_pane_ParamLimits

0xa9ab,	// (0x00075ebe) mp4_rocker_pane

0xe81f,	// (0x00079d32) mp4_progress_pane_t1

0xe841,	// (0x00079d54) mp4_progress_pane_t2

0x0001,

0xf7dd,	// (0x0007acf0) mp4_progress_pane_t

0xe863,	// (0x00079d76) mup_progress_pane_cp04

0x1e16,	// (0x0006d329) mp4_rocker_pane_g1

0x1dbc,	// (0x0006d2cf) aid_cell_size_keypad2_ParamLimits

0x1dbc,	// (0x0006d2cf) aid_cell_size_keypad2

0x1dbc,	// (0x0006d2cf) dialer2_ne_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) dialer2_ne_pane

0x1dbc,	// (0x0006d2cf) grid_dialer2_keypad_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) grid_dialer2_keypad_pane

0x498a,	// (0x0006fe9d) bg_popup_call_pane_cp07_ParamLimits

0x498a,	// (0x0006fe9d) bg_popup_call_pane_cp07

0xa9bf,	// (0x00075ed2) dialer2_ne_pane_t1_ParamLimits

0xa9bf,	// (0x00075ed2) dialer2_ne_pane_t1

0x4ac7,	// (0x0006ffda) cell_dialer2_keypad_pane_ParamLimits

0x4ac7,	// (0x0006ffda) cell_dialer2_keypad_pane

0x4270,	// (0x0006f783) bg_button_pane_pane_cp04_ParamLimits

0x4270,	// (0x0006f783) bg_button_pane_pane_cp04

0x1dca,	// (0x0006d2dd) cell_dialer2_keypad_pane_g1_ParamLimits

0x1dca,	// (0x0006d2dd) cell_dialer2_keypad_pane_g1

0x75f5,	// (0x00072b08) aid_placing_vt_set_content_ParamLimits

0x75f5,	// (0x00072b08) aid_placing_vt_set_content

0x7621,	// (0x00072b34) aid_placing_vt_set_title_ParamLimits

0x7621,	// (0x00072b34) aid_placing_vt_set_title

0x16c9,	// (0x0006cbdc) main_image3_pane

0xaa18,	// (0x00075f2b) area_side_right_pane_cp01_ParamLimits

0xaa18,	// (0x00075f2b) area_side_right_pane_cp01

0x1de6,	// (0x0006d2f9) main_image3_pane_g1_ParamLimits

0x1de6,	// (0x0006d2f9) main_image3_pane_g1

0xaa45,	// (0x00075f58) main_image3_pane_g2_ParamLimits

0xaa45,	// (0x00075f58) main_image3_pane_g2

0xaa5e,	// (0x00075f71) main_image3_pane_g3_ParamLimits

0xaa5e,	// (0x00075f71) main_image3_pane_g3

0xaa77,	// (0x00075f8a) main_image3_pane_g4_ParamLimits

0xaa77,	// (0x00075f8a) main_image3_pane_g4

0x0003,

0xf7ec,	// (0x0007acff) main_image3_pane_g_ParamLimits

0xf7ec,	// (0x0007acff) main_image3_pane_g

0xaa90,	// (0x00075fa3) main_image3_pane_t1_ParamLimits

0xaa90,	// (0x00075fa3) main_image3_pane_t1

0xaab5,	// (0x00075fc8) main_image3_pane_t2_ParamLimits

0xaab5,	// (0x00075fc8) main_image3_pane_t2

0xaad4,	// (0x00075fe7) main_image3_pane_t3_ParamLimits

0xaad4,	// (0x00075fe7) main_image3_pane_t3

0x0003,

0xf7f5,	// (0x0007ad08) main_image3_pane_t_ParamLimits

0xf7f5,	// (0x0007ad08) main_image3_pane_t

0x1dbc,	// (0x0006d2cf) grid_sctrl_middle_pane_cp01_ParamLimits

0x1dbc,	// (0x0006d2cf) grid_sctrl_middle_pane_cp01

0xab35,	// (0x00076048) cell_sctrl_middle_pane_cp01_ParamLimits

0xab35,	// (0x00076048) cell_sctrl_middle_pane_cp01

0xab46,	// (0x00076059) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xab46,	// (0x00076059) cell_sctrl_middle_pane_cp01_g1

0x16c9,	// (0x0006cbdc) main_call4_pane

0xab53,	// (0x00076066) aid_size_button_call4_ParamLimits

0xab53,	// (0x00076066) aid_size_button_call4

0xab89,	// (0x0007609c) call4_windows_pane_ParamLimits

0xab89,	// (0x0007609c) call4_windows_pane

0xab9e,	// (0x000760b1) grid_call4_button_pane_ParamLimits

0xab9e,	// (0x000760b1) grid_call4_button_pane

0xabcc,	// (0x000760df) call4_windows_conf_pane

0xabe3,	// (0x000760f6) popup_call4_audio_first_window_ParamLimits

0xabe3,	// (0x000760f6) popup_call4_audio_first_window

0xac33,	// (0x00076146) popup_call4_audio_second_window_ParamLimits

0xac33,	// (0x00076146) popup_call4_audio_second_window

0xac4c,	// (0x0007615f) popup_call4_audio_wait_window_ParamLimits

0xac4c,	// (0x0007615f) popup_call4_audio_wait_window

0xac5a,	// (0x0007616d) cell_call4_button_pane_ParamLimits

0xac5a,	// (0x0007616d) cell_call4_button_pane

0xac7d,	// (0x00076190) bg_button_pane_cp09_ParamLimits

0xac7d,	// (0x00076190) bg_button_pane_cp09

0xac89,	// (0x0007619c) cell_call4_button_pane_g1_ParamLimits

0xac89,	// (0x0007619c) cell_call4_button_pane_g1

0xac96,	// (0x000761a9) cell_call4_button_pane_t1_ParamLimits

0xac96,	// (0x000761a9) cell_call4_button_pane_t1

0xe8ac,	// (0x00079dbf) popup_call4_audio_conf_window_ParamLimits

0xe8ac,	// (0x00079dbf) popup_call4_audio_conf_window

0xa0af,	// (0x000755c2) mup3_progress_pane_t1_ParamLimits

0xa0ce,	// (0x000755e1) mup3_progress_pane_t2_ParamLimits

0x49f0,	// (0x0006ff03) mup3_progress_pane_t3_ParamLimits

0xf6d4,	// (0x0007abe7) mup3_progress_pane_t_ParamLimits

0x4a0d,	// (0x0006ff20) mup_progress_pane_cp03_ParamLimits

0xa4fd,	// (0x00075a10) mup3_control_keys_pane_g4_copy1

0xa9ab,	// (0x00075ebe) mp4_rocker2_pane_ParamLimits

0xa9ab,	// (0x00075ebe) mp4_rocker2_pane

0xacda,	// (0x000761ed) mp4_rocker2_pane_g1

0xacda,	// (0x000761ed) mp4_rocker2_pane_g2

0xacda,	// (0x000761ed) mp4_rocker2_pane_g3

0xacda,	// (0x000761ed) mp4_rocker2_pane_g4

0xacda,	// (0x000761ed) mp4_rocker2_pane_g5

0x0004,

0xf7fe,	// (0x0007ad11) mp4_rocker2_pane_g

0x16c9,	// (0x0006cbdc) main_camera4_pane

0x16c9,	// (0x0006cbdc) main_video4_pane

0xa634,	// (0x00075b47) main_video_tele_dialer_pane_t1_ParamLimits

0xa634,	// (0x00075b47) main_video_tele_dialer_pane_t1

0xa646,	// (0x00075b59) main_video_tele_dialer_pane_t2_ParamLimits

0xa646,	// (0x00075b59) main_video_tele_dialer_pane_t2

0x0001,

0xf7b4,	// (0x0007acc7) main_video_tele_dialer_pane_t_ParamLimits

0xf7b4,	// (0x0007acc7) main_video_tele_dialer_pane_t

0xacfa,	// (0x0007620d) cam4_autofocus_pane_ParamLimits

0xacfa,	// (0x0007620d) cam4_autofocus_pane

0xad14,	// (0x00076227) cam4_image_uncrop_pane_ParamLimits

0xad14,	// (0x00076227) cam4_image_uncrop_pane

0xad2b,	// (0x0007623e) cam4_indicators_pane_ParamLimits

0xad2b,	// (0x0007623e) cam4_indicators_pane

0xad47,	// (0x0007625a) main_camera4_pane_g1_ParamLimits

0xad47,	// (0x0007625a) main_camera4_pane_g1

0xad53,	// (0x00076266) main_camera4_pane_g2_ParamLimits

0xad53,	// (0x00076266) main_camera4_pane_g2

0xad53,	// (0x00076266) main_camera4_pane_g3_ParamLimits

0xad53,	// (0x00076266) main_camera4_pane_g3

0xad5f,	// (0x00076272) main_camera4_pane_g4_ParamLimits

0xad5f,	// (0x00076272) main_camera4_pane_g4

0xad6b,	// (0x0007627e) main_camera4_pane_g5_ParamLimits

0xad6b,	// (0x0007627e) main_camera4_pane_g5

0x0005,

0xf809,	// (0x0007ad1c) main_camera4_pane_g_ParamLimits

0xf809,	// (0x0007ad1c) main_camera4_pane_g

0xad85,	// (0x00076298) main_camera4_pane_t1_ParamLimits

0xad85,	// (0x00076298) main_camera4_pane_t1

0x1dca,	// (0x0006d2dd) bg_tb_trans_pane_cp06

0xadd5,	// (0x000762e8) cam4_indicators_pane_g1

0xade6,	// (0x000762f9) cam4_indicators_pane_g2

0x0002,

0xf824,	// (0x0007ad37) cam4_indicators_pane_g

0xae04,	// (0x00076317) cam4_indicators_pane_t1

0xae2e,	// (0x00076341) main_video4_pane_g1_ParamLimits

0xae2e,	// (0x00076341) main_video4_pane_g1

0xae3a,	// (0x0007634d) main_video4_pane_g2_ParamLimits

0xae3a,	// (0x0007634d) main_video4_pane_g2

0xae46,	// (0x00076359) main_video4_pane_g3_ParamLimits

0xae46,	// (0x00076359) main_video4_pane_g3

0xae52,	// (0x00076365) main_video4_pane_g4_ParamLimits

0xae52,	// (0x00076365) main_video4_pane_g4

0x0004,

0xf82b,	// (0x0007ad3e) main_video4_pane_g_ParamLimits

0xf82b,	// (0x0007ad3e) main_video4_pane_g

0xae72,	// (0x00076385) vid4_indicators_pane_ParamLimits

0xae72,	// (0x00076385) vid4_indicators_pane

0xae91,	// (0x000763a4) video4_image_uncrop_cif_pane_ParamLimits

0xae91,	// (0x000763a4) video4_image_uncrop_cif_pane

0xaea0,	// (0x000763b3) video4_image_uncrop_nhd_pane_ParamLimits

0xaea0,	// (0x000763b3) video4_image_uncrop_nhd_pane

0xad14,	// (0x00076227) video4_image_uncrop_vga_pane_ParamLimits

0xad14,	// (0x00076227) video4_image_uncrop_vga_pane

0x1d63,	// (0x0006d276) bg_tb_trans_pane_cp07

0xaeb7,	// (0x000763ca) vid4_indicators_pane_g1

0xaecb,	// (0x000763de) vid4_indicators_pane_g2

0xaedf,	// (0x000763f2) vid4_indicators_pane_g3

0x0004,

0xf836,	// (0x0007ad49) vid4_indicators_pane_g

0xaf0e,	// (0x00076421) vid4_indicators_pane_t1

0xaf25,	// (0x00076438) cam4_autofocus_pane_g1

0xaf2d,	// (0x00076440) cam4_autofocus_pane_g2

0xaf35,	// (0x00076448) cam4_autofocus_pane_g3

0x0002,

0xf841,	// (0x0007ad54) cam4_autofocus_pane_g

0xaf3d,	// (0x00076450) cam4_autofocus_pane_g3_copy1

0xa666,	// (0x00075b79) video_down_pane_cp_t1

0xa674,	// (0x00075b87) video_down_pane_cp_t2

0x0001,

0xf7b9,	// (0x0007accc) video_down_pane_cp_t

0x1dbc,	// (0x0006d2cf) popup_vitu2_window_ParamLimits

0x1dbc,	// (0x0006d2cf) popup_vitu2_window

0xaf45,	// (0x00076458) aid_size_cell2_itu2_ParamLimits

0xaf45,	// (0x00076458) aid_size_cell2_itu2

0xaf67,	// (0x0007647a) aid_size_cell_itu2_ParamLimits

0xaf67,	// (0x0007647a) aid_size_cell_itu2

0x498a,	// (0x0006fe9d) bg_popup_window_pane_cp09_ParamLimits

0x498a,	// (0x0006fe9d) bg_popup_window_pane_cp09

0xafab,	// (0x000764be) field_vitu2_entry_pane_ParamLimits

0xafab,	// (0x000764be) field_vitu2_entry_pane

0xafcb,	// (0x000764de) grid_vitu2_function_pane_ParamLimits

0xafcb,	// (0x000764de) grid_vitu2_function_pane

0xb00f,	// (0x00076522) grid_vitu2_itu_pane_ParamLimits

0xb00f,	// (0x00076522) grid_vitu2_itu_pane

0xb087,	// (0x0007659a) cell_vitu2_itu_pane_ParamLimits

0xb087,	// (0x0007659a) cell_vitu2_itu_pane

0xb0a0,	// (0x000765b3) cell_vitu2_function_pane_ParamLimits

0xb0a0,	// (0x000765b3) cell_vitu2_function_pane

0xe8c0,	// (0x00079dd3) bg_popup_call_pane_cp08_ParamLimits

0xe8c0,	// (0x00079dd3) bg_popup_call_pane_cp08

0xe8d7,	// (0x00079dea) field_vitu2_entry_pane_g1

0xe8e3,	// (0x00079df6) field_vitu2_entry_pane_g2

0x0002,

0xf848,	// (0x0007ad5b) field_vitu2_entry_pane_g

0x5dc8,	// (0x000712db) field_vitu2_entry_pane_t1_ParamLimits

0x5dc8,	// (0x000712db) field_vitu2_entry_pane_t1

0x5dfa,	// (0x0007130d) field_vitu2_entry_pane_t2_ParamLimits

0x5dfa,	// (0x0007130d) field_vitu2_entry_pane_t2

0x0001,

0xf84f,	// (0x0007ad62) field_vitu2_entry_pane_t_ParamLimits

0xf84f,	// (0x0007ad62) field_vitu2_entry_pane_t

0x9857,	// (0x00074d6a) bg_button_pane_cp010_ParamLimits

0x9857,	// (0x00074d6a) bg_button_pane_cp010

0xb0e1,	// (0x000765f4) cell_vitu2_itu_pane_g1

0xb107,	// (0x0007661a) cell_vitu2_itu_pane_t1_ParamLimits

0xb107,	// (0x0007661a) cell_vitu2_itu_pane_t1

0x5e17,	// (0x0007132a) cell_vitu2_itu_pane_t2_ParamLimits

0x5e17,	// (0x0007132a) cell_vitu2_itu_pane_t2

0x0002,

0xf859,	// (0x0007ad6c) cell_vitu2_itu_pane_t_ParamLimits

0xf859,	// (0x0007ad6c) cell_vitu2_itu_pane_t

0x1d63,	// (0x0006d276) bg_button_pane_cp011

0xb153,	// (0x00076666) cell_vitu2_function_pane_g1

0x16c9,	// (0x0006cbdc) main_myfav_hc_pane

0xab16,	// (0x00076029) popup_image3_note_pane_ParamLimits

0xab16,	// (0x00076029) popup_image3_note_pane

0xab24,	// (0x00076037) popup_image3_tool_bar_pane_ParamLimits

0xab24,	// (0x00076037) popup_image3_tool_bar_pane

0x5e8d,	// (0x000713a0) cell_vitu2_itu_pane_t3_ParamLimits

0x5e8d,	// (0x000713a0) cell_vitu2_itu_pane_t3

0x16c9,	// (0x0006cbdc) bg_popup_trans_pane

0xe8f7,	// (0x00079e0a) grid_image3_tool_bar_pane

0xe901,	// (0x00079e14) bg_popup_trans_pane_g1

0x2266,	// (0x0006d779) bg_popup_trans_pane_g2

0xe909,	// (0x00079e1c) bg_popup_trans_pane_g3

0xe911,	// (0x00079e24) bg_popup_trans_pane_g4

0xe919,	// (0x00079e2c) bg_popup_trans_pane_g5

0xe921,	// (0x00079e34) bg_popup_trans_pane_g6

0xe929,	// (0x00079e3c) bg_popup_trans_pane_g7

0xe931,	// (0x00079e44) bg_popup_trans_pane_g8

0x2246,	// (0x0006d759) bg_popup_trans_pane_g9

0x0008,

0xf860,	// (0x0007ad73) bg_popup_trans_pane_g

0xe939,	// (0x00079e4c) cell_image3_tool_bar_pane_ParamLimits

0xe939,	// (0x00079e4c) cell_image3_tool_bar_pane

0x1e16,	// (0x0006d329) cell_image3_tool_bar_pane_g1

0x16c9,	// (0x0006cbdc) bg_popup_trans_pane_cp1

0xe94d,	// (0x00079e60) popup_image3_note_pane_t1

0xe95b,	// (0x00079e6e) popup_image3_note_pane_t2

0xe969,	// (0x00079e7c) popup_image3_note_pane_t3

0x0002,

0xf873,	// (0x0007ad86) popup_image3_note_pane_t

0xe977,	// (0x00079e8a) popup_image3_note_pane_t3_copy1

0xb167,	// (0x0007667a) bg_myfav_hc_instruction_pane_ParamLimits

0xb167,	// (0x0007667a) bg_myfav_hc_instruction_pane

0xb17f,	// (0x00076692) cell_myfav_contact_pane_ParamLimits

0xb17f,	// (0x00076692) cell_myfav_contact_pane

0xb199,	// (0x000766ac) cell_myfav_contact_pane_cp1_ParamLimits

0xb199,	// (0x000766ac) cell_myfav_contact_pane_cp1

0xb1b1,	// (0x000766c4) cell_myfav_contact_pane_cp2_ParamLimits

0xb1b1,	// (0x000766c4) cell_myfav_contact_pane_cp2

0xb1c9,	// (0x000766dc) cell_myfav_contact_pane_cp3_ParamLimits

0xb1c9,	// (0x000766dc) cell_myfav_contact_pane_cp3

0xb1e0,	// (0x000766f3) cell_myfav_contact_pane_cp4_ParamLimits

0xb1e0,	// (0x000766f3) cell_myfav_contact_pane_cp4

0xb1f6,	// (0x00076709) cell_myfav_contact_pane_cp5_ParamLimits

0xb1f6,	// (0x00076709) cell_myfav_contact_pane_cp5

0xb20a,	// (0x0007671d) cell_myfav_contact_pane_cp6_ParamLimits

0xb20a,	// (0x0007671d) cell_myfav_contact_pane_cp6

0xb21e,	// (0x00076731) cell_myfav_contact_pane_cp7_ParamLimits

0xb21e,	// (0x00076731) cell_myfav_contact_pane_cp7

0xe985,	// (0x00079e98) listscroll_gen_pane_cp05

0xb236,	// (0x00076749) main_myfav_hc_pane_g1_ParamLimits

0xb236,	// (0x00076749) main_myfav_hc_pane_g1

0xb24c,	// (0x0007675f) main_myfav_hc_pane_g2_ParamLimits

0xb24c,	// (0x0007675f) main_myfav_hc_pane_g2

0x0002,

0xf87a,	// (0x0007ad8d) main_myfav_hc_pane_g_ParamLimits

0xf87a,	// (0x0007ad8d) main_myfav_hc_pane_g

0xb27a,	// (0x0007678d) main_myfav_hc_pane_t1_ParamLimits

0xb27a,	// (0x0007678d) main_myfav_hc_pane_t1

0xe98e,	// (0x00079ea1) main_myfav_hc_pane_t2_ParamLimits

0xe98e,	// (0x00079ea1) main_myfav_hc_pane_t2

0xe9a0,	// (0x00079eb3) main_myfav_hc_pane_t3_ParamLimits

0xe9a0,	// (0x00079eb3) main_myfav_hc_pane_t3

0xb291,	// (0x000767a4) main_myfav_hc_pane_t4_ParamLimits

0xb291,	// (0x000767a4) main_myfav_hc_pane_t4

0x0004,

0xf881,	// (0x0007ad94) main_myfav_hc_pane_t_ParamLimits

0xf881,	// (0x0007ad94) main_myfav_hc_pane_t

0x1e16,	// (0x0006d329) bg_myfav_hc_instruction_pane_g1

0xe9b2,	// (0x00079ec5) cell_myfav_contact_pane_g1_ParamLimits

0xe9b2,	// (0x00079ec5) cell_myfav_contact_pane_g1

0xe9b2,	// (0x00079ec5) cell_myfav_contact_pane_g2_ParamLimits

0xe9b2,	// (0x00079ec5) cell_myfav_contact_pane_g2

0xe9be,	// (0x00079ed1) cell_myfav_contact_pane_g3_ParamLimits

0xe9be,	// (0x00079ed1) cell_myfav_contact_pane_g3

0x1dd8,	// (0x0006d2eb) cell_myfav_contact_pane_g4_ParamLimits

0x1dd8,	// (0x0006d2eb) cell_myfav_contact_pane_g4

0xe9cb,	// (0x00079ede) cell_myfav_contact_pane_g5_ParamLimits

0xe9cb,	// (0x00079ede) cell_myfav_contact_pane_g5

0x0004,

0xf88c,	// (0x0007ad9f) cell_myfav_contact_pane_g_ParamLimits

0xf88c,	// (0x0007ad9f) cell_myfav_contact_pane_g

0xb262,	// (0x00076775) main_myfav_hc_pane_g3_ParamLimits

0xb262,	// (0x00076775) main_myfav_hc_pane_g3

0x6afd,	// (0x00072010) popup_adpt_find_window

0xb2bb,	// (0x000767ce) afind_page_pane_ParamLimits

0xb2bb,	// (0x000767ce) afind_page_pane

0xb2c8,	// (0x000767db) aid_size_cell_afind_ParamLimits

0xb2c8,	// (0x000767db) aid_size_cell_afind

0xb2e2,	// (0x000767f5) bg_popup_sub_pane_cp09_ParamLimits

0xb2e2,	// (0x000767f5) bg_popup_sub_pane_cp09

0xb2ef,	// (0x00076802) find_pane_cp01_ParamLimits

0xb2ef,	// (0x00076802) find_pane_cp01

0xe9d7,	// (0x00079eea) grid_afind_control_pane_ParamLimits

0xe9d7,	// (0x00079eea) grid_afind_control_pane

0xb2fc,	// (0x0007680f) grid_afind_pane_ParamLimits

0xb2fc,	// (0x0007680f) grid_afind_pane

0xb318,	// (0x0007682b) cell_afind_pane_ParamLimits

0xb318,	// (0x0007682b) cell_afind_pane

0x1e16,	// (0x0006d329) afind_page_pane_g1

0xb360,	// (0x00076873) afind_page_pane_g2

0xb368,	// (0x0007687b) afind_page_pane_g3

0x0002,

0xf897,	// (0x0007adaa) afind_page_pane_g

0xb370,	// (0x00076883) afind_page_pane_t1

0xe9fd,	// (0x00079f10) cell_afind_grid_control_pane_ParamLimits

0xe9fd,	// (0x00079f10) cell_afind_grid_control_pane

0xea0c,	// (0x00079f1f) bg_button_pane_cp69_ParamLimits

0xea0c,	// (0x00079f1f) bg_button_pane_cp69

0xb37e,	// (0x00076891) cell_afind_pane_g1_ParamLimits

0xb37e,	// (0x00076891) cell_afind_pane_g1

0xb38b,	// (0x0007689e) cell_afind_pane_t1_ParamLimits

0xb38b,	// (0x0007689e) cell_afind_pane_t1

0xea18,	// (0x00079f2b) bg_button_pane_cp72

0xea20,	// (0x00079f33) cell_afind_grid_control_pane_g1

0x90d8,	// (0x000745eb) aid_image_placing_area_ParamLimits

0x90d8,	// (0x000745eb) aid_image_placing_area

0x1dca,	// (0x0006d2dd) field_vitu_entry_pane_g1_ParamLimits

0x1dca,	// (0x0006d2dd) field_vitu_entry_pane_g1

0x1dca,	// (0x0006d2dd) field_vitu_entry_pane_g2_ParamLimits

0x1dca,	// (0x0006d2dd) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x0007a6cf) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x0007a6cf) field_vitu_entry_pane_g

0x4cf5,	// (0x00070208) cell_vitu_itu_pane_g1_ParamLimits

0x4cd8,	// (0x000701eb) cell_vitu_itu_pane_t3_ParamLimits

0x4cd8,	// (0x000701eb) cell_vitu_itu_pane_t3

0xe81f,	// (0x00079d32) mp4_progress_pane_t1_ParamLimits

0xe841,	// (0x00079d54) mp4_progress_pane_t2_ParamLimits

0xf7dd,	// (0x0007acf0) mp4_progress_pane_t_ParamLimits

0xe863,	// (0x00079d76) mup_progress_pane_cp04_ParamLimits

0xb2a5,	// (0x000767b8) main_myfav_hc_pane_t5_ParamLimits

0xb2a5,	// (0x000767b8) main_myfav_hc_pane_t5

0x5c59,	// (0x0007116c) aid_zoom_text_primary

0x6afd,	// (0x00072010) popup_adpt_find_window_ParamLimits

0x1d63,	// (0x0006d276) main_cam_set_pane

0xad39,	// (0x0007624c) cam4_zoom_pane_ParamLimits

0xad39,	// (0x0007624c) cam4_zoom_pane

0xb39d,	// (0x000768b0) main_cam_set_pane_g1_ParamLimits

0xb39d,	// (0x000768b0) main_cam_set_pane_g1

0xb3ab,	// (0x000768be) main_cam_set_pane_g2_ParamLimits

0xb3ab,	// (0x000768be) main_cam_set_pane_g2

0x0001,

0xf89e,	// (0x0007adb1) main_cam_set_pane_g_ParamLimits

0xf89e,	// (0x0007adb1) main_cam_set_pane_g

0xb3b7,	// (0x000768ca) main_cam_set_pane_t1_ParamLimits

0xb3b7,	// (0x000768ca) main_cam_set_pane_t1

0xb3d3,	// (0x000768e6) main_cset_listscroll_pane_ParamLimits

0xb3d3,	// (0x000768e6) main_cset_listscroll_pane

0xb405,	// (0x00076918) main_cset_slider_pane_ParamLimits

0xb405,	// (0x00076918) main_cset_slider_pane

0xea31,	// (0x00079f44) main_cset_list_pane_ParamLimits

0xea31,	// (0x00079f44) main_cset_list_pane

0xea41,	// (0x00079f54) scroll_pane_cp028

0xb424,	// (0x00076937) aid_area_touch_slider

0xb440,	// (0x00076953) cset_slider_pane

0xb463,	// (0x00076976) main_cset_slider_pane_g1

0xb478,	// (0x0007698b) main_cset_slider_pane_g2

0x0011,

0xf8a3,	// (0x0007adb6) main_cset_slider_pane_g

0xea7a,	// (0x00079f8d) main_cset_slider_pane_t1

0xb53a,	// (0x00076a4d) main_cset_slider_pane_t2

0xb554,	// (0x00076a67) main_cset_slider_pane_t3

0xb56e,	// (0x00076a81) main_cset_slider_pane_t4

0xb588,	// (0x00076a9b) main_cset_slider_pane_t5

0xb5a6,	// (0x00076ab9) main_cset_slider_pane_t6

0xb5bd,	// (0x00076ad0) main_cset_slider_pane_t7

0x000e,

0xf8c8,	// (0x0007addb) main_cset_slider_pane_t

0xb6c9,	// (0x00076bdc) cset_list_set_pane_ParamLimits

0xb6c9,	// (0x00076bdc) cset_list_set_pane

0xeb14,	// (0x0007a027) aid_position_infowindow_above

0xeb1c,	// (0x0007a02f) aid_position_infowindow_below

0xb6df,	// (0x00076bf2) cset_list_set_pane_g1_ParamLimits

0xb6df,	// (0x00076bf2) cset_list_set_pane_g1

0x5edf,	// (0x000713f2) cset_list_set_pane_g3_ParamLimits

0x5edf,	// (0x000713f2) cset_list_set_pane_g3

0x0001,

0xf8e7,	// (0x0007adfa) cset_list_set_pane_g_ParamLimits

0xf8e7,	// (0x0007adfa) cset_list_set_pane_g

0x5eee,	// (0x00071401) cset_list_set_pane_t1_ParamLimits

0x5eee,	// (0x00071401) cset_list_set_pane_t1

0x1d63,	// (0x0006d276) list_highlight_pane_cp021_ParamLimits

0x1d63,	// (0x0006d276) list_highlight_pane_cp021

0x3141,	// (0x0006e654) cset_slider_pane_g1

0x3153,	// (0x0006e666) cset_slider_pane_g2

0x314a,	// (0x0006e65d) cset_slider_pane_g3

0x0002,

0xf8ec,	// (0x0007adff) cset_slider_pane_g

0xb6eb,	// (0x00076bfe) aid_area_touch_cam4_zoom

0xb6f3,	// (0x00076c06) cam4_zoom_cont_pane

0xb6fb,	// (0x00076c0e) cam4_zoom_pane_g1

0xb703,	// (0x00076c16) cam4_zoom_pane_g2

0xb70b,	// (0x00076c1e) cam4_zoom_pane_g3

0x0002,

0xf8f3,	// (0x0007ae06) cam4_zoom_pane_g

0xeb24,	// (0x0007a037) cam4_zoom_cont_pane_g1

0xeb2d,	// (0x0007a040) cam4_zoom_cont_pane_g2

0xeb36,	// (0x0007a049) cam4_zoom_cont_pane_g3

0x0002,

0xf8fa,	// (0x0007ae0d) cam4_zoom_cont_pane_g

0xab6d,	// (0x00076080) call4_image_pane_ParamLimits

0xab6d,	// (0x00076080) call4_image_pane

0xabcc,	// (0x000760df) call4_windows_conf_pane_ParamLimits

0xac11,	// (0x00076124) popup_call4_audio_in_window_ParamLimits

0xac11,	// (0x00076124) popup_call4_audio_in_window

0x16c9,	// (0x0006cbdc) bg_popup_call2_act_pane_cp02

0xe8a4,	// (0x00079db7) call4_list_conf_pane

0x1e16,	// (0x0006d329) call4_image_pane_g1

0x1e16,	// (0x0006d329) call4_image_pane_g2

0x0001,

0xf0af,	// (0x0007a5c2) call4_image_pane_g

0xeb3f,	// (0x0007a052) list_single_graphic_popup_conf4_pane_ParamLimits

0xeb3f,	// (0x0007a052) list_single_graphic_popup_conf4_pane

0x16c9,	// (0x0006cbdc) list_highlight_pane_cp022

0xeb52,	// (0x0007a065) list_single_graphic_popup_conf4_pane_g1

0x2d05,	// (0x0006e218) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf901,	// (0x0007ae14) list_single_graphic_popup_conf4_pane_g

0xeb5a,	// (0x0007a06d) list_single_graphic_popup_conf4_pane_t1

0x7785,	// (0x00072c98) popup_vtel_slider_window_ParamLimits

0x7785,	// (0x00072c98) popup_vtel_slider_window

0xe876,	// (0x00079d89) dialer2_ne_pane_t2_ParamLimits

0xe876,	// (0x00079d89) dialer2_ne_pane_t2

0x0001,

0xf7e2,	// (0x0007acf5) dialer2_ne_pane_t_ParamLimits

0xf7e2,	// (0x0007acf5) dialer2_ne_pane_t

0x1d63,	// (0x0006d276) bg_popup_sub_pane_cp010_ParamLimits

0x1d63,	// (0x0006d276) bg_popup_sub_pane_cp010

0xb713,	// (0x00076c26) popup_vtel_slider_window_g1_ParamLimits

0xb713,	// (0x00076c26) popup_vtel_slider_window_g1

0xb71f,	// (0x00076c32) popup_vtel_slider_window_g2_ParamLimits

0xb71f,	// (0x00076c32) popup_vtel_slider_window_g2

0x0003,

0xf906,	// (0x0007ae19) popup_vtel_slider_window_g_ParamLimits

0xf906,	// (0x0007ae19) popup_vtel_slider_window_g

0xb767,	// (0x00076c7a) vtel_slider_pane_ParamLimits

0xb767,	// (0x00076c7a) vtel_slider_pane

0xb776,	// (0x00076c89) vtel_slider_pane_g1_ParamLimits

0xb776,	// (0x00076c89) vtel_slider_pane_g1

0xb783,	// (0x00076c96) vtel_slider_pane_g2_ParamLimits

0xb783,	// (0x00076c96) vtel_slider_pane_g2

0xb790,	// (0x00076ca3) vtel_slider_pane_g3_ParamLimits

0xb790,	// (0x00076ca3) vtel_slider_pane_g3

0xb776,	// (0x00076c89) vtel_slider_pane_g4_ParamLimits

0xb776,	// (0x00076c89) vtel_slider_pane_g4

0xb79d,	// (0x00076cb0) vtel_slider_pane_g5_ParamLimits

0xb79d,	// (0x00076cb0) vtel_slider_pane_g5

0x0004,

0xf90f,	// (0x0007ae22) vtel_slider_pane_g_ParamLimits

0xf90f,	// (0x0007ae22) vtel_slider_pane_g

0x1d63,	// (0x0006d276) main_gallery2_pane

0xaf8d,	// (0x000764a0) aid_size_row_itut2_dropdow_list_ParamLimits

0xaf8d,	// (0x000764a0) aid_size_row_itut2_dropdow_list

0xafed,	// (0x00076500) grid_vitu2_function_top_pane_ParamLimits

0xafed,	// (0x00076500) grid_vitu2_function_top_pane

0xb047,	// (0x0007655a) popup_vitu2_dropdown_list_window_ParamLimits

0xb047,	// (0x0007655a) popup_vitu2_dropdown_list_window

0xb065,	// (0x00076578) popup_vitu2_match_list_window

0xb7aa,	// (0x00076cbd) cell_vitu2_function_top_pane_ParamLimits

0xb7aa,	// (0x00076cbd) cell_vitu2_function_top_pane

0xb7c4,	// (0x00076cd7) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb7c4,	// (0x00076cd7) cell_vitu2_function_top_pane_cp01

0xb7e0,	// (0x00076cf3) cell_vitu2_function_top_wide_pane_ParamLimits

0xb7e0,	// (0x00076cf3) cell_vitu2_function_top_wide_pane

0x1d63,	// (0x0006d276) bg_button_pane_cp012

0xb7fe,	// (0x00076d11) cell_vitu2_function_top_pane_g1

0xb812,	// (0x00076d25) bg_button_pane_cp013_ParamLimits

0xb812,	// (0x00076d25) bg_button_pane_cp013

0xb82e,	// (0x00076d41) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb82e,	// (0x00076d41) cell_vitu2_function_top_wide_pane_g1

0x1dbc,	// (0x0006d2cf) bg_popup_sub_pane_cp20

0xb846,	// (0x00076d59) list_vitu2_match_list_pane

0xe901,	// (0x00079e14) bg_popup_sub_pane_cp20_g1

0xe909,	// (0x00079e1c) bg_popup_sub_pane_cp20_g2

0x2266,	// (0x0006d779) bg_popup_sub_pane_cp20_g3

0xe911,	// (0x00079e24) bg_popup_sub_pane_cp20_g4

0x2246,	// (0x0006d759) bg_popup_sub_pane_cp20_g5

0xeb70,	// (0x0007a083) bg_popup_sub_pane_cp20_g6

0xe921,	// (0x00079e34) bg_popup_sub_pane_cp20_g7

0xe929,	// (0x00079e3c) bg_popup_sub_pane_cp20_g8

0xe931,	// (0x00079e44) bg_popup_sub_pane_cp20_g9

0x0008,

0xf91a,	// (0x0007ae2d) bg_popup_sub_pane_cp20_g

0xb85e,	// (0x00076d71) list_vitu2_match_list_item_pane_ParamLimits

0xb85e,	// (0x00076d71) list_vitu2_match_list_item_pane

0xb870,	// (0x00076d83) list_vitu2_match_list_item_pane_t1

0x16c9,	// (0x0006cbdc) bg_popup_sub_pane_cp21

0x204d,	// (0x0006d560) grid_vitu2_dropdown_list_pane

0xb87e,	// (0x00076d91) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb87e,	// (0x00076d91) cell_vitu2_dropdown_list_char_pane

0xb8a0,	// (0x00076db3) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb8a0,	// (0x00076db3) cell_vitu2_dropdown_list_ctrl_pane

0xeb78,	// (0x0007a08b) cell_vitu2_dropdown_list_char_pane_g1

0xeb81,	// (0x0007a094) cell_vitu2_dropdown_list_char_pane_g2

0xeb8a,	// (0x0007a09d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf92d,	// (0x0007ae40) cell_vitu2_dropdown_list_char_pane_g

0xb8c8,	// (0x00076ddb) cell_vitu2_dropdown_list_char_pane_t1

0xb8d6,	// (0x00076de9) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb8d6,	// (0x00076de9) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb8e3,	// (0x00076df6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb8e3,	// (0x00076df6) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb8f0,	// (0x00076e03) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb8f0,	// (0x00076e03) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb8fd,	// (0x00076e10) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb8fd,	// (0x00076e10) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1dca,	// (0x0006d2dd) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1dca,	// (0x0006d2dd) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf934,	// (0x0007ae47) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf934,	// (0x0007ae47) cell_vitu2_dropdown_list_ctrl_pane_g

0xb919,	// (0x00076e2c) aid_size_cell_gallery2_ParamLimits

0xb919,	// (0x00076e2c) aid_size_cell_gallery2

0xb933,	// (0x00076e46) grid_gallery2_pane_ParamLimits

0xb933,	// (0x00076e46) grid_gallery2_pane

0xb94a,	// (0x00076e5d) scroll_pane_cp029_ParamLimits

0xb94a,	// (0x00076e5d) scroll_pane_cp029

0xb95a,	// (0x00076e6d) cell_gallery2_pane_ParamLimits

0xb95a,	// (0x00076e6d) cell_gallery2_pane

0xeb93,	// (0x0007a0a6) cell_gallery2_pane_g2

0xeb9b,	// (0x0007a0ae) cell_gallery2_pane_g3

0xeba3,	// (0x0007a0b6) cell_gallery2_pane_g4

0xebab,	// (0x0007a0be) cell_gallery2_pane_g5

0x204d,	// (0x0006d560) grid_highlight_pane_cp10

0xb065,	// (0x00076578) popup_vitu2_match_list_window_ParamLimits

0xb077,	// (0x0007658a) popup_vitu2_query_window_ParamLimits

0xb077,	// (0x0007658a) popup_vitu2_query_window

0x16c9,	// (0x0006cbdc) bg_vitu2_candi_button_pane

0xeb78,	// (0x0007a08b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xeb81,	// (0x0007a094) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xeb8a,	// (0x0007a09d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5f03,	// (0x00071416) bg_button_pane_cp015

0xb9af,	// (0x00076ec2) bg_button_pane_cp016

0xb9bb,	// (0x00076ece) bg_button_pane_cp017

0x30d1,	// (0x0006e5e4) bg_popup_sub_pane_cp22

0xebb3,	// (0x0007a0c6) popup_vitu2_query_window_g1

0x5f3d,	// (0x00071450) popup_vitu2_query_window_g2

0x0002,

0xf93f,	// (0x0007ae52) popup_vitu2_query_window_g

0x5f55,	// (0x00071468) popup_vitu2_query_window_t1_ParamLimits

0x5f55,	// (0x00071468) popup_vitu2_query_window_t1

0x5f88,	// (0x0007149b) popup_vitu2_query_window_t2_ParamLimits

0x5f88,	// (0x0007149b) popup_vitu2_query_window_t2

0x5f9a,	// (0x000714ad) popup_vitu2_query_window_t3_ParamLimits

0x5f9a,	// (0x000714ad) popup_vitu2_query_window_t3

0xb9e2,	// (0x00076ef5) popup_vitu2_query_window_t4_ParamLimits

0xb9e2,	// (0x00076ef5) popup_vitu2_query_window_t4

0xb9f6,	// (0x00076f09) popup_vitu2_query_window_t5_ParamLimits

0xb9f6,	// (0x00076f09) popup_vitu2_query_window_t5

0x0006,

0xf946,	// (0x0007ae59) popup_vitu2_query_window_t_ParamLimits

0xf946,	// (0x0007ae59) popup_vitu2_query_window_t

0xea29,	// (0x00079f3c) main_cset_text_pane

0xb424,	// (0x00076937) aid_area_touch_slider_ParamLimits

0xb440,	// (0x00076953) cset_slider_pane_ParamLimits

0xb463,	// (0x00076976) main_cset_slider_pane_g1_ParamLimits

0xb478,	// (0x0007698b) main_cset_slider_pane_g2_ParamLimits

0xea4a,	// (0x00079f5d) main_cset_slider_pane_g3_ParamLimits

0xea4a,	// (0x00079f5d) main_cset_slider_pane_g3

0xb48d,	// (0x000769a0) main_cset_slider_pane_g4_ParamLimits

0xb48d,	// (0x000769a0) main_cset_slider_pane_g4

0xb49c,	// (0x000769af) main_cset_slider_pane_g5_ParamLimits

0xb49c,	// (0x000769af) main_cset_slider_pane_g5

0xb4aa,	// (0x000769bd) main_cset_slider_pane_g6_ParamLimits

0xb4aa,	// (0x000769bd) main_cset_slider_pane_g6

0xf8a3,	// (0x0007adb6) main_cset_slider_pane_g_ParamLimits

0xea7a,	// (0x00079f8d) main_cset_slider_pane_t1_ParamLimits

0xb53a,	// (0x00076a4d) main_cset_slider_pane_t2_ParamLimits

0xb554,	// (0x00076a67) main_cset_slider_pane_t3_ParamLimits

0xb56e,	// (0x00076a81) main_cset_slider_pane_t4_ParamLimits

0xb588,	// (0x00076a9b) main_cset_slider_pane_t5_ParamLimits

0xb5a6,	// (0x00076ab9) main_cset_slider_pane_t6_ParamLimits

0xb5bd,	// (0x00076ad0) main_cset_slider_pane_t7_ParamLimits

0xb5eb,	// (0x00076afe) main_cset_slider_pane_t8_ParamLimits

0xb5eb,	// (0x00076afe) main_cset_slider_pane_t8

0xb613,	// (0x00076b26) main_cset_slider_pane_t9_ParamLimits

0xb613,	// (0x00076b26) main_cset_slider_pane_t9

0xb63b,	// (0x00076b4e) main_cset_slider_pane_t10_ParamLimits

0xb63b,	// (0x00076b4e) main_cset_slider_pane_t10

0xb663,	// (0x00076b76) main_cset_slider_pane_t11_ParamLimits

0xb663,	// (0x00076b76) main_cset_slider_pane_t11

0xb68d,	// (0x00076ba0) main_cset_slider_pane_t12_ParamLimits

0xb68d,	// (0x00076ba0) main_cset_slider_pane_t12

0xb6aa,	// (0x00076bbd) main_cset_slider_pane_t13_ParamLimits

0xb6aa,	// (0x00076bbd) main_cset_slider_pane_t13

0xf8c8,	// (0x0007addb) main_cset_slider_pane_t_ParamLimits

0x16c9,	// (0x0006cbdc) bg_popup_sub_pane_cp011

0xebbf,	// (0x0007a0d2) main_cset_text_pane_g1

0xebc7,	// (0x0007a0da) main_cset_text_pane_t1

0xebd5,	// (0x0007a0e8) main_cset_text_pane_t2

0xebe3,	// (0x0007a0f6) main_cset_text_pane_t3

0xebf1,	// (0x0007a104) main_cset_text_pane_t4

0xebff,	// (0x0007a112) main_cset_text_pane_t5

0xec0d,	// (0x0007a120) main_cset_text_pane_t6

0xec1b,	// (0x0007a12e) main_cset_text_pane_t7

0x0006,

0xf955,	// (0x0007ae68) main_cset_text_pane_t

0x16c9,	// (0x0006cbdc) main_cam4_burst_pane

0x16c9,	// (0x0006cbdc) main_cam5_pane

0xe9eb,	// (0x00079efe) bg_button_pane_cp019

0xe9f4,	// (0x00079f07) bg_button_pane_cp020

0xea56,	// (0x00079f69) main_cset_slider_pane_g7_ParamLimits

0xea56,	// (0x00079f69) main_cset_slider_pane_g7

0xea62,	// (0x00079f75) main_cset_slider_pane_g8_ParamLimits

0xea62,	// (0x00079f75) main_cset_slider_pane_g8

0xb4be,	// (0x000769d1) main_cset_slider_pane_g9_ParamLimits

0xb4be,	// (0x000769d1) main_cset_slider_pane_g9

0xb4ca,	// (0x000769dd) main_cset_slider_pane_g10_ParamLimits

0xb4ca,	// (0x000769dd) main_cset_slider_pane_g10

0xb4d6,	// (0x000769e9) main_cset_slider_pane_g11_ParamLimits

0xb4d6,	// (0x000769e9) main_cset_slider_pane_g11

0xb4e2,	// (0x000769f5) main_cset_slider_pane_g12_ParamLimits

0xb4e2,	// (0x000769f5) main_cset_slider_pane_g12

0xb4ee,	// (0x00076a01) main_cset_slider_pane_g13_ParamLimits

0xb4ee,	// (0x00076a01) main_cset_slider_pane_g13

0xb4fa,	// (0x00076a0d) main_cset_slider_pane_g14_ParamLimits

0xb4fa,	// (0x00076a0d) main_cset_slider_pane_g14

0xb506,	// (0x00076a19) main_cset_slider_pane_g15_ParamLimits

0xb506,	// (0x00076a19) main_cset_slider_pane_g15

0xeaa2,	// (0x00079fb5) main_cset_slider_pane_t14_ParamLimits

0xeaa2,	// (0x00079fb5) main_cset_slider_pane_t14

0xeadb,	// (0x00079fee) main_cset_slider_pane_t15_ParamLimits

0xeadb,	// (0x00079fee) main_cset_slider_pane_t15

0xba0a,	// (0x00076f1d) aid_cam4_burst_size_cell_ParamLimits

0xba0a,	// (0x00076f1d) aid_cam4_burst_size_cell

0xba26,	// (0x00076f39) grid_cam4_burst_pane_ParamLimits

0xba26,	// (0x00076f39) grid_cam4_burst_pane

0xba56,	// (0x00076f69) linegrid_cam4_burst_pane_ParamLimits

0xba56,	// (0x00076f69) linegrid_cam4_burst_pane

0xba76,	// (0x00076f89) scroll_pane_cp30_ParamLimits

0xba76,	// (0x00076f89) scroll_pane_cp30

0xba82,	// (0x00076f95) cell_cam4_burst_pane_ParamLimits

0xba82,	// (0x00076f95) cell_cam4_burst_pane

0xec29,	// (0x0007a13c) linegrid_cam4_burst_pane_g1_ParamLimits

0xec29,	// (0x0007a13c) linegrid_cam4_burst_pane_g1

0xbabe,	// (0x00076fd1) linegrid_cam4_burst_pane_g2_ParamLimits

0xbabe,	// (0x00076fd1) linegrid_cam4_burst_pane_g2

0xec36,	// (0x0007a149) linegrid_cam4_burst_pane_g3_ParamLimits

0xec36,	// (0x0007a149) linegrid_cam4_burst_pane_g3

0x0002,

0xf964,	// (0x0007ae77) linegrid_cam4_burst_pane_g_ParamLimits

0xf964,	// (0x0007ae77) linegrid_cam4_burst_pane_g

0xbacf,	// (0x00076fe2) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbacf,	// (0x00076fe2) linegrid_cam4_burst_pane_g3_copy1

0xec43,	// (0x0007a156) linegrid_cam4_burst_pane_g4_ParamLimits

0xec43,	// (0x0007a156) linegrid_cam4_burst_pane_g4

0xbae9,	// (0x00076ffc) linegrid_cam4_burst_pane_g5_ParamLimits

0xbae9,	// (0x00076ffc) linegrid_cam4_burst_pane_g5

0xbafa,	// (0x0007700d) linegrid_cam4_burst_pane_g6_ParamLimits

0xbafa,	// (0x0007700d) linegrid_cam4_burst_pane_g6

0xec50,	// (0x0007a163) linegrid_cam4_burst_pane_g7_ParamLimits

0xec50,	// (0x0007a163) linegrid_cam4_burst_pane_g7

0xbb0b,	// (0x0007701e) cell_cam4_burst_pane_g1

0xec69,	// (0x0007a17c) main_cam5_pane_t1_ParamLimits

0xec69,	// (0x0007a17c) main_cam5_pane_t1

0xec7b,	// (0x0007a18e) main_cam5_pane_t2_ParamLimits

0xec7b,	// (0x0007a18e) main_cam5_pane_t2

0xec8d,	// (0x0007a1a0) main_cam5_pane_t3_ParamLimits

0xec8d,	// (0x0007a1a0) main_cam5_pane_t3

0xec9f,	// (0x0007a1b2) main_cam5_pane_t4_ParamLimits

0xec9f,	// (0x0007a1b2) main_cam5_pane_t4

0xecb7,	// (0x0007a1ca) main_cam5_pane_t5_ParamLimits

0xecb7,	// (0x0007a1ca) main_cam5_pane_t5

0xeccb,	// (0x0007a1de) main_cam5_pane_t6_ParamLimits

0xeccb,	// (0x0007a1de) main_cam5_pane_t6

0xecdf,	// (0x0007a1f2) main_cam5_pane_t7_ParamLimits

0xecdf,	// (0x0007a1f2) main_cam5_pane_t7

0xecf1,	// (0x0007a204) main_cam5_pane_t8_ParamLimits

0xecf1,	// (0x0007a204) main_cam5_pane_t8

0xed0d,	// (0x0007a220) main_cam5_pane_t9_ParamLimits

0xed0d,	// (0x0007a220) main_cam5_pane_t9

0xed1f,	// (0x0007a232) main_cam5_pane_t10_ParamLimits

0xed1f,	// (0x0007a232) main_cam5_pane_t10

0xed31,	// (0x0007a244) main_cam5_pane_t11_ParamLimits

0xed31,	// (0x0007a244) main_cam5_pane_t11

0xed43,	// (0x0007a256) main_cam5_pane_t12_ParamLimits

0xed43,	// (0x0007a256) main_cam5_pane_t12

0xed58,	// (0x0007a26b) main_cam5_pane_t13_ParamLimits

0xed58,	// (0x0007a26b) main_cam5_pane_t13

0x000c,

0xf970,	// (0x0007ae83) main_cam5_pane_t_ParamLimits

0xf970,	// (0x0007ae83) main_cam5_pane_t

0x6bb2,	// (0x000720c5) popup_scut_keymap_window_ParamLimits

0x6bb2,	// (0x000720c5) popup_scut_keymap_window

0xbb1e,	// (0x00077031) aid_size_cell_brow_shortcut

0x204d,	// (0x0006d560) bg_popup_window_pane_cp010

0xbb2a,	// (0x0007703d) grid_scut_pane

0xbb36,	// (0x00077049) cell_scut_pane_ParamLimits

0xbb36,	// (0x00077049) cell_scut_pane

0xbb4d,	// (0x00077060) cell_scut_pane_g1

0xed75,	// (0x0007a288) cell_scut_pane_t1

0xed84,	// (0x0007a297) cell_scut_pane_t2

0xbb56,	// (0x00077069) cell_scut_pane_t3

0x0002,

0xf98b,	// (0x0007ae9e) cell_scut_pane_t

0x9cce,	// (0x000751e1) main_mup3_pane_g8_ParamLimits

0x9cce,	// (0x000751e1) main_mup3_pane_g8

0xaf9b,	// (0x000764ae) area_vitu2_query_pane_ParamLimits

0xaf9b,	// (0x000764ae) area_vitu2_query_pane

0x5f18,	// (0x0007142b) input_focus_pane_cp08

0xed93,	// (0x0007a2a6) area_vitu2_query_pane_g1

0x6018,	// (0x0007152b) area_vitu2_query_pane_g2

0x0001,

0xf992,	// (0x0007aea5) area_vitu2_query_pane_g

0xbb64,	// (0x00077077) area_vitu2_query_pane_t1_ParamLimits

0xbb64,	// (0x00077077) area_vitu2_query_pane_t1

0xbb78,	// (0x0007708b) area_vitu2_query_pane_t2_ParamLimits

0xbb78,	// (0x0007708b) area_vitu2_query_pane_t2

0x6029,	// (0x0007153c) area_vitu2_query_pane_t3_ParamLimits

0x6029,	// (0x0007153c) area_vitu2_query_pane_t3

0x6051,	// (0x00071564) area_vitu2_query_pane_t4_ParamLimits

0x6051,	// (0x00071564) area_vitu2_query_pane_t4

0x6079,	// (0x0007158c) area_vitu2_query_pane_t5_ParamLimits

0x6079,	// (0x0007158c) area_vitu2_query_pane_t5

0x60a1,	// (0x000715b4) area_vitu2_query_pane_t6_ParamLimits

0x60a1,	// (0x000715b4) area_vitu2_query_pane_t6

0x0006,

0xf997,	// (0x0007aeaa) area_vitu2_query_pane_t_ParamLimits

0xf997,	// (0x0007aeaa) area_vitu2_query_pane_t

0xb9af,	// (0x00076ec2) bg_button_pane_cp018

0xbb8c,	// (0x0007709f) bg_button_pane_cp021

0x60ed,	// (0x00071600) bg_button_pane_cp022

0x6110,	// (0x00071623) input_focus_pane_cp09

0x2e41,	// (0x0006e354) aid_size_touch_mv_arrow_left

0x2e6a,	// (0x0006e37d) aid_size_touch_mv_arrow_right

0xb51e,	// (0x00076a31) main_cset_slider_pane_g16_ParamLimits

0xb51e,	// (0x00076a31) main_cset_slider_pane_g16

0xb52c,	// (0x00076a3f) main_cset_slider_pane_g17_ParamLimits

0xb52c,	// (0x00076a3f) main_cset_slider_pane_g17

0xbb0b,	// (0x0007701e) cell_cam4_burst_pane_g1_ParamLimits

0x16c9,	// (0x0006cbdc) compa_mode_pane

0xb72b,	// (0x00076c3e) popup_vtel_slider_window_g3_ParamLimits

0xb72b,	// (0x00076c3e) popup_vtel_slider_window_g3

0xb73f,	// (0x00076c52) popup_vtel_slider_window_g4_ParamLimits

0xb73f,	// (0x00076c52) popup_vtel_slider_window_g4

0xb753,	// (0x00076c66) popup_vtel_slider_window_t1_ParamLimits

0xb753,	// (0x00076c66) popup_vtel_slider_window_t1

0x16c9,	// (0x0006cbdc) main_cl_pane

0x95b9,	// (0x00074acc) popup_imed_adjust2_window_ParamLimits

0x30d1,	// (0x0006e5e4) bg_tb_trans_pane_cp05_ParamLimits

0x4c15,	// (0x00070128) popup_imed_adjust2_window_g1_ParamLimits

0x4c24,	// (0x00070137) popup_imed_adjust2_window_g2_ParamLimits

0x4c24,	// (0x00070137) popup_imed_adjust2_window_g2

0x4c30,	// (0x00070143) popup_imed_adjust2_window_g3_ParamLimits

0x4c30,	// (0x00070143) popup_imed_adjust2_window_g3

0x0002,

0xf717,	// (0x0007ac2a) popup_imed_adjust2_window_g_ParamLimits

0xf717,	// (0x0007ac2a) popup_imed_adjust2_window_g

0x4c3c,	// (0x0007014f) popup_imed_adjust2_window_t1_ParamLimits

0x4c54,	// (0x00070167) slider_imed_adjust_pane_ParamLimits

0x4c68,	// (0x0007017b) slider_imed_adjust_pane_g1_ParamLimits

0x4c78,	// (0x0007018b) slider_imed_adjust_pane_g2_ParamLimits

0x4c88,	// (0x0007019b) slider_imed_adjust_pane_g3_ParamLimits

0x4c99,	// (0x000701ac) slider_imed_adjust_pane_g4_ParamLimits

0xf71e,	// (0x0007ac31) slider_imed_adjust_pane_g_ParamLimits

0xace2,	// (0x000761f5) aid_touch_area_cam4_ParamLimits

0xace2,	// (0x000761f5) aid_touch_area_cam4

0xacf2,	// (0x00076205) battery_pane_cp01

0xad79,	// (0x0007628c) main_camera4_pane_g6_ParamLimits

0xad79,	// (0x0007628c) main_camera4_pane_g6

0xad97,	// (0x000762aa) main_camera4_pane_t2_ParamLimits

0xad97,	// (0x000762aa) main_camera4_pane_t2

0x0001,

0xf816,	// (0x0007ad29) main_camera4_pane_t_ParamLimits

0xf816,	// (0x0007ad29) main_camera4_pane_t

0xae1e,	// (0x00076331) aid_touch_area_vid4_ParamLimits

0xae1e,	// (0x00076331) aid_touch_area_vid4

0xae5e,	// (0x00076371) main_video4_pane_g5_ParamLimits

0xae5e,	// (0x00076371) main_video4_pane_g5

0xae82,	// (0x00076395) vid4_progress_pane_ParamLimits

0xae82,	// (0x00076395) vid4_progress_pane

0xea6e,	// (0x00079f81) main_cset_slider_pane_g18_ParamLimits

0xea6e,	// (0x00079f81) main_cset_slider_pane_g18

0xec5d,	// (0x0007a170) cell_cam4_burst_pane_g2_ParamLimits

0xec5d,	// (0x0007a170) cell_cam4_burst_pane_g2

0x0001,

0xf96b,	// (0x0007ae7e) cell_cam4_burst_pane_g_ParamLimits

0xf96b,	// (0x0007ae7e) cell_cam4_burst_pane_g

0xbb98,	// (0x000770ab) bg_cl_pane_ParamLimits

0xbb98,	// (0x000770ab) bg_cl_pane

0xbba4,	// (0x000770b7) cl_header_pane_ParamLimits

0xbba4,	// (0x000770b7) cl_header_pane

0xbbb0,	// (0x000770c3) cl_listscroll_pane_ParamLimits

0xbbb0,	// (0x000770c3) cl_listscroll_pane

0xed9f,	// (0x0007a2b2) bg_cl_pane_g1

0xeda7,	// (0x0007a2ba) bg_cl_pane_g2

0xedaf,	// (0x0007a2c2) bg_cl_pane_g3

0xedb7,	// (0x0007a2ca) bg_cl_pane_g4

0xedbf,	// (0x0007a2d2) bg_cl_pane_g5

0xedc7,	// (0x0007a2da) bg_cl_pane_g6

0xedcf,	// (0x0007a2e2) bg_cl_pane_g7

0xedd7,	// (0x0007a2ea) bg_cl_pane_g8

0xeddf,	// (0x0007a2f2) bg_cl_pane_g9

0x0008,

0xf9a6,	// (0x0007aeb9) bg_cl_pane_g

0xbbbc,	// (0x000770cf) aid_height_cl_leading_ParamLimits

0xbbbc,	// (0x000770cf) aid_height_cl_leading

0xbbc8,	// (0x000770db) aid_height_cl_text_ParamLimits

0xbbc8,	// (0x000770db) aid_height_cl_text

0x1dbc,	// (0x0006d2cf) bg_cl_header_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) bg_cl_header_pane

0xbbe0,	// (0x000770f3) cl_header_pane_g1_ParamLimits

0xbbe0,	// (0x000770f3) cl_header_pane_g1

0xbbed,	// (0x00077100) cl_header_pane_t1_ParamLimits

0xbbed,	// (0x00077100) cl_header_pane_t1

0xede7,	// (0x0007a2fa) cl_list_pane

0xea41,	// (0x00079f54) hc_scroll_pane_cp01

0x2246,	// (0x0006d759) bg_cl_header_pane_g1

0xe901,	// (0x00079e14) bg_cl_header_pane_g2

0x2266,	// (0x0006d779) bg_cl_header_pane_g3

0xe911,	// (0x00079e24) bg_cl_header_pane_g4

0xe909,	// (0x00079e1c) bg_cl_header_pane_g5

0xeb70,	// (0x0007a083) bg_cl_header_pane_g6

0xe929,	// (0x00079e3c) bg_cl_header_pane_g7

0xe931,	// (0x00079e44) bg_cl_header_pane_g8

0xe921,	// (0x00079e34) bg_cl_header_pane_g9

0x0008,

0xf9b9,	// (0x0007aecc) bg_cl_header_pane_g

0xbbff,	// (0x00077112) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbbff,	// (0x00077112) hc_cl_list_double_graphic_heading_pane

0xbc10,	// (0x00077123) hc_cl_list_single_graphic_pane_ParamLimits

0xbc10,	// (0x00077123) hc_cl_list_single_graphic_pane

0xbc29,	// (0x0007713c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbc29,	// (0x0007713c) hc_cl_list_single_graphic_pane_g1

0xbc35,	// (0x00077148) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbc35,	// (0x00077148) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9cc,	// (0x0007aedf) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9cc,	// (0x0007aedf) hc_cl_list_single_graphic_pane_g

0xbc49,	// (0x0007715c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbc49,	// (0x0007715c) hc_cl_list_single_graphic_pane_t1

0xbc29,	// (0x0007713c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbc29,	// (0x0007713c) hc_cl_list_double_graphic_heading_pane_g1

0xbc5e,	// (0x00077171) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbc5e,	// (0x00077171) hc_cl_list_double_graphic_heading_pane_g2

0xbc72,	// (0x00077185) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbc72,	// (0x00077185) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9d1,	// (0x0007aee4) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9d1,	// (0x0007aee4) hc_cl_list_double_graphic_heading_pane_g

0xbc86,	// (0x00077199) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbc86,	// (0x00077199) hc_cl_list_double_graphic_heading_pane_t1

0xbc9b,	// (0x000771ae) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbc9b,	// (0x000771ae) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d8,	// (0x0007aeeb) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d8,	// (0x0007aeeb) hc_cl_list_double_graphic_heading_pane_t

0xbcb8,	// (0x000771cb) vid4_progress_pane_g1

0xbcc8,	// (0x000771db) vid4_progress_pane_g2

0xbcd8,	// (0x000771eb) vid4_progress_pane_g3

0xbcea,	// (0x000771fd) vid4_progress_pane_g4

0x0004,

0xf9dd,	// (0x0007aef0) vid4_progress_pane_g

0xbd02,	// (0x00077215) vid4_progress_pane_t1

0xbd18,	// (0x0007722b) vid4_progress_pane_t2

0x0002,

0xf9e8,	// (0x0007aefb) vid4_progress_pane_t

0xbd42,	// (0x00077255) wait_bar_pane_cp07

0x44ee,	// (0x0006fa01) blid_firmament_pane_ParamLimits

0x4531,	// (0x0006fa44) popup_blid_sat_info2_window_g1

0x4555,	// (0x0006fa68) popup_blid_sat_info2_window_t3

0x4563,	// (0x0006fa76) popup_blid_sat_info2_window_t4

0x4571,	// (0x0006fa84) popup_blid_sat_info2_window_t5

0x457f,	// (0x0006fa92) popup_blid_sat_info2_window_t6

0x458f,	// (0x0006faa2) popup_blid_sat_info2_window_t7

0x459d,	// (0x0006fab0) popup_blid_sat_info2_window_t8

0x45ab,	// (0x0006fabe) popup_blid_sat_info2_window_t9

0x45b9,	// (0x0006facc) popup_blid_sat_info2_window_t10

0x467a,	// (0x0006fb8d) aid_firma_cardinal_ParamLimits

0x468e,	// (0x0006fba1) blid_firmament_pane_t1_ParamLimits

0x46a5,	// (0x0006fbb8) blid_firmament_pane_t2_ParamLimits

0x46bc,	// (0x0006fbcf) blid_firmament_pane_t3_ParamLimits

0x46d3,	// (0x0006fbe6) blid_firmament_pane_t4_ParamLimits

0xf610,	// (0x0007ab23) blid_firmament_pane_t_ParamLimits

0x46ea,	// (0x0006fbfd) blid_sat_info_pane_ParamLimits

0x1d63,	// (0x0006d276) main_cam_set_pane_ParamLimits

0xa3a7,	// (0x000758ba) aid_size_cell_colour_35_ParamLimits

0xa3c1,	// (0x000758d4) aid_size_cell_colour_112_ParamLimits

0xa3d8,	// (0x000758eb) aid_size_cell_effect_ParamLimits

0x1d63,	// (0x0006d276) bg_tb_trans_pane_cp02_ParamLimits

0x2c66,	// (0x0006e179) heading_imed_pane_ParamLimits

0xa3f2,	// (0x00075905) listscroll_imed_pane_ParamLimits

0x39db,	// (0x0006eeee) popup_call2_audio_first_window_g5_ParamLimits

0x39db,	// (0x0006eeee) popup_call2_audio_first_window_g5

0xa9e6,	// (0x00075ef9) aid_size_touch_image3_arrow_left_ParamLimits

0xa9e6,	// (0x00075ef9) aid_size_touch_image3_arrow_left

0xa9fc,	// (0x00075f0f) aid_size_touch_image3_arrow_right_ParamLimits

0xa9fc,	// (0x00075f0f) aid_size_touch_image3_arrow_right

0xbd2d,	// (0x00077240) vid4_progress_pane_t3

0xa573,	// (0x00075a86) main_hwr_training_symbol_option_pane_ParamLimits

0xa573,	// (0x00075a86) main_hwr_training_symbol_option_pane

0x4da3,	// (0x000702b6) popup_hwr_training_preview_window_ParamLimits

0x4da3,	// (0x000702b6) popup_hwr_training_preview_window

0xa5d4,	// (0x00075ae7) hwr_training_navi_pane_g5_ParamLimits

0xa5d4,	// (0x00075ae7) hwr_training_navi_pane_g5

0xe8ef,	// (0x00079e02) popup_char_count_window

0x1dbc,	// (0x0006d2cf) bg_popup_sub_pane_cp20_ParamLimits

0xb846,	// (0x00076d59) list_vitu2_match_list_pane_ParamLimits

0xb852,	// (0x00076d65) vitu2_page_scroll_pane_ParamLimits

0xb852,	// (0x00076d65) vitu2_page_scroll_pane

0xedf9,	// (0x0007a30c) list_single_hwr_training_symbol_option_pane_ParamLimits

0xedf9,	// (0x0007a30c) list_single_hwr_training_symbol_option_pane

0xee0c,	// (0x0007a31f) list_single_hwr_training_symbol_option_pane_g1

0xee14,	// (0x0007a327) list_single_hwr_training_symbol_option_pane_t1

0xee22,	// (0x0007a335) bg_button_pane_cp023

0xee2b,	// (0x0007a33e) bg_button_pane_cp024

0xee5e,	// (0x0007a371) vitu2_page_scroll_pane_g1

0xee66,	// (0x0007a379) vitu2_page_scroll_pane_g2

0x0001,

0xf9ef,	// (0x0007af02) vitu2_page_scroll_pane_g

0xee6e,	// (0x0007a381) vitu2_page_scroll_pane_t1

0x4464,	// (0x0006f977) popup_char_count_window_g1

0xee7d,	// (0x0007a390) popup_char_count_window_g2

0xee86,	// (0x0007a399) popup_char_count_window_g3

0x0002,

0xf9f4,	// (0x0007af07) popup_char_count_window_g

0xee8f,	// (0x0007a3a2) popup_char_count_window_t1

0x16c9,	// (0x0006cbdc) main_vded2_pane

0x4c01,	// (0x00070114) aid_size_cell_imed_line

0x4c0b,	// (0x0007011e) grid_imed_line_width_pane

0xaef0,	// (0x00076403) vid4_indicators_pane_g4

0xee9d,	// (0x0007a3b0) cell_imed_line_width_pane_ParamLimits

0xee9d,	// (0x0007a3b0) cell_imed_line_width_pane

0xeeb1,	// (0x0007a3c4) cell_imed_line_width_pane_g1

0xeeba,	// (0x0007a3cd) cell_imed_line_width_pane_g2

0x0001,

0xf9fb,	// (0x0007af0e) cell_imed_line_width_pane_g

0xbd5d,	// (0x00077270) main_vded2_pane_g1_ParamLimits

0xbd5d,	// (0x00077270) main_vded2_pane_g1

0xbd6a,	// (0x0007727d) main_vded2_pane_g2_ParamLimits

0xbd6a,	// (0x0007727d) main_vded2_pane_g2

0x0001,

0xfa00,	// (0x0007af13) main_vded2_pane_g_ParamLimits

0xfa00,	// (0x0007af13) main_vded2_pane_g

0xbd78,	// (0x0007728b) vded2_slider_pane_ParamLimits

0xbd78,	// (0x0007728b) vded2_slider_pane

0xbd85,	// (0x00077298) aid_size_touch_vded2_end

0xbd8f,	// (0x000772a2) aid_size_touch_vded2_playhead

0xeec2,	// (0x0007a3d5) aid_size_touch_vded2_start

0xeeca,	// (0x0007a3dd) vded2_slider_bg_pane

0xeed3,	// (0x0007a3e6) vded2_slider_pane_g1

0xeedc,	// (0x0007a3ef) vded2_slider_pane_g2

0xbd97,	// (0x000772aa) vded2_slider_pane_g3

0x0002,

0xfa05,	// (0x0007af18) vded2_slider_pane_g

0xeee4,	// (0x0007a3f7) vded2_slider_bg_pane_g1

0xeeed,	// (0x0007a400) vded2_slider_bg_pane_g2

0xeef6,	// (0x0007a409) vded2_slider_bg_pane_g3

0x0002,

0xfa0c,	// (0x0007af1f) vded2_slider_bg_pane_g

0x8e76,	// (0x00074389) aid_postcard_touch_down_pane_ParamLimits

0x8e76,	// (0x00074389) aid_postcard_touch_down_pane

0x8e86,	// (0x00074399) aid_postcard_touch_up_pane_ParamLimits

0x8e86,	// (0x00074399) aid_postcard_touch_up_pane

0x16c9,	// (0x0006cbdc) main_blid2_pane

0x9544,	// (0x00074a57) popup_blid2_search_window

0x16c9,	// (0x0006cbdc) blid2_gps_pane

0x16c9,	// (0x0006cbdc) blid2_navig_pane

0x16c9,	// (0x0006cbdc) blid2_search_pane

0x16c9,	// (0x0006cbdc) blid2_tripm_pane

0xbda0,	// (0x000772b3) blid2_search_pane_g1_ParamLimits

0xbda0,	// (0x000772b3) blid2_search_pane_g1

0xbdb0,	// (0x000772c3) blid2_search_pane_t1_ParamLimits

0xbdb0,	// (0x000772c3) blid2_search_pane_t1

0xbdc2,	// (0x000772d5) aid_size_cell_blid2_gps_ParamLimits

0xbdc2,	// (0x000772d5) aid_size_cell_blid2_gps

0xbdd2,	// (0x000772e5) blid2_gps_pane_g1_ParamLimits

0xbdd2,	// (0x000772e5) blid2_gps_pane_g1

0xbdde,	// (0x000772f1) grid_blid2_satellite_pane_ParamLimits

0xbdde,	// (0x000772f1) grid_blid2_satellite_pane

0xbdee,	// (0x00077301) blid2_navig_pane_g1_ParamLimits

0xbdee,	// (0x00077301) blid2_navig_pane_g1

0xbdfa,	// (0x0007730d) blid2_navig_pane_t1_ParamLimits

0xbdfa,	// (0x0007730d) blid2_navig_pane_t1

0xbe0c,	// (0x0007731f) blid2_navig_pane_t2_ParamLimits

0xbe0c,	// (0x0007731f) blid2_navig_pane_t2

0x0001,

0xfa13,	// (0x0007af26) blid2_navig_pane_t_ParamLimits

0xfa13,	// (0x0007af26) blid2_navig_pane_t

0xbe1e,	// (0x00077331) blid2_navig_ring_pane_ParamLimits

0xbe1e,	// (0x00077331) blid2_navig_ring_pane

0xbe2e,	// (0x00077341) blid2_speed_pane_ParamLimits

0xbe2e,	// (0x00077341) blid2_speed_pane

0xbe3a,	// (0x0007734d) blid2_tripm_pane_g1_ParamLimits

0xbe3a,	// (0x0007734d) blid2_tripm_pane_g1

0xbe4a,	// (0x0007735d) blid2_tripm_pane_g2_ParamLimits

0xbe4a,	// (0x0007735d) blid2_tripm_pane_g2

0xbe56,	// (0x00077369) blid2_tripm_pane_g3_ParamLimits

0xbe56,	// (0x00077369) blid2_tripm_pane_g3

0xbe62,	// (0x00077375) blid2_tripm_pane_g4_ParamLimits

0xbe62,	// (0x00077375) blid2_tripm_pane_g4

0xbe6e,	// (0x00077381) blid2_tripm_pane_g5_ParamLimits

0xbe6e,	// (0x00077381) blid2_tripm_pane_g5

0x0005,

0xfa18,	// (0x0007af2b) blid2_tripm_pane_g_ParamLimits

0xfa18,	// (0x0007af2b) blid2_tripm_pane_g

0xbe8a,	// (0x0007739d) blid2_tripm_pane_t1_ParamLimits

0xbe8a,	// (0x0007739d) blid2_tripm_pane_t1

0xbe9e,	// (0x000773b1) blid2_tripm_pane_t2_ParamLimits

0xbe9e,	// (0x000773b1) blid2_tripm_pane_t2

0xbeb0,	// (0x000773c3) blid2_tripm_pane_t3_ParamLimits

0xbeb0,	// (0x000773c3) blid2_tripm_pane_t3

0x0003,

0xfa25,	// (0x0007af38) blid2_tripm_pane_t_ParamLimits

0xfa25,	// (0x0007af38) blid2_tripm_pane_t

0xbee2,	// (0x000773f5) cell_blid2_satellite_pane_ParamLimits

0xbee2,	// (0x000773f5) cell_blid2_satellite_pane

0xbefc,	// (0x0007740f) cell_blid2_satellite_pane_g1

0xeeff,	// (0x0007a412) cell_blid2_satellite_pane_t1

0x1e16,	// (0x0006d329) blid2_speed_pane_g1

0xef0d,	// (0x0007a420) blid2_speed_pane_t1

0xef1b,	// (0x0007a42e) blid2_speed_pane_t2

0x0001,

0xfa2e,	// (0x0007af41) blid2_speed_pane_t

0x1e16,	// (0x0006d329) blid2_navig_ring_pane_g1

0xbf05,	// (0x00077418) blid2_navig_ring_pane_g2

0xbf0d,	// (0x00077420) blid2_navig_ring_pane_g3

0xbf15,	// (0x00077428) blid2_navig_ring_pane_g4

0xbf1d,	// (0x00077430) blid2_navig_ring_pane_g5

0x0004,

0xfa33,	// (0x0007af46) blid2_navig_ring_pane_g

0x16c9,	// (0x0006cbdc) bg_popup_window_pane_cp011

0xef29,	// (0x0007a43c) popup_blid2_search_window_g1

0xef31,	// (0x0007a444) popup_blid2_search_window_t1

0xef3f,	// (0x0007a452) popup_blid2_search_window_t2

0x0001,

0xfa3e,	// (0x0007af51) popup_blid2_search_window_t

0x2155,	// (0x0006d668) main_browser_pane_g1

0x1e74,	// (0x0006d387) main_browser_pane_ParamLimits

0x1d63,	// (0x0006d276) bg_button_pane_cp011_ParamLimits

0xb153,	// (0x00076666) cell_vitu2_function_pane_g1_ParamLimits

0x30d1,	// (0x0006e5e4) bg_popup_sub_pane_cp22_ParamLimits

0x5f18,	// (0x0007142b) input_focus_pane_cp08_ParamLimits

0xb9c7,	// (0x00076eda) popup_vitu2_query_button_pane_ParamLimits

0xb9c7,	// (0x00076eda) popup_vitu2_query_button_pane

0x5f33,	// (0x00071446) popup_vitu2_query_input_button_pane

0xebb3,	// (0x0007a0c6) popup_vitu2_query_window_g1_ParamLimits

0x5f3d,	// (0x00071450) popup_vitu2_query_window_g2_ParamLimits

0xf93f,	// (0x0007ae52) popup_vitu2_query_window_g_ParamLimits

0x16c9,	// (0x0006cbdc) bg_button_pane_cp026

0xbf25,	// (0x00077438) popup_vitu2_query_input_button_pane_g1

0x16c9,	// (0x0006cbdc) bg_button_pane_cp025

0xef4d,	// (0x0007a460) popup_vitu2_query_button_pane_t1

0x99aa,	// (0x00074ebd) main_mp3_pane_t6

0x99ba,	// (0x00074ecd) popup_slider_window_cp01

0xadcd,	// (0x000762e0) cam4_battery_pane

0xaead,	// (0x000763c0) cam4_battery_pane_cp02

0xbcb0,	// (0x000771c3) cam4_battery_pane_cp01

0xbcb0,	// (0x000771c3) cam4_battery_pane_cp03

0x1e16,	// (0x0006d329) cam4_battery_pane_g1

0xef5b,	// (0x0007a46e) cam4_battery_pane_g2

0x0001,

0xfa43,	// (0x0007af56) cam4_battery_pane_g

0x45c7,	// (0x0006fada) popup_blid_sat_info2_window_t11

0x2e41,	// (0x0006e354) aid_size_touch_mv_arrow_left_ParamLimits

0x2e6a,	// (0x0006e37d) aid_size_touch_mv_arrow_right_ParamLimits

0x2ec8,	// (0x0006e3db) navi_pane_g1_ParamLimits

0x2ed4,	// (0x0006e3e7) navi_pane_g2_ParamLimits

0x2f02,	// (0x0006e415) navi_pane_g3_ParamLimits

0xf334,	// (0x0007a847) navi_pane_g_ParamLimits

0x8b2a,	// (0x0007403d) navi_pane_mv_t1_ParamLimits

0xa3fe,	// (0x00075911) grid_imed_effect_pane_ParamLimits

0x7645,	// (0x00072b58) aid_placing_vt_slider_lsc

0x20a4,	// (0x0006d5b7) aid_placing_vt_slider_prt

0x1d63,	// (0x0006d276) bg_tb_trans_pane_cp01_ParamLimits

0x4847,	// (0x0006fd5a) popup_image_details_window_g1_ParamLimits

0x485a,	// (0x0006fd6d) popup_image_details_window_g2_ParamLimits

0x486f,	// (0x0006fd82) popup_image_details_window_g3_ParamLimits

0x486f,	// (0x0006fd82) popup_image_details_window_g3

0xf650,	// (0x0007ab63) popup_image_details_window_g_ParamLimits

0x4883,	// (0x0006fd96) popup_image_details_window_t1_ParamLimits

0x4895,	// (0x0006fda8) popup_image_details_window_t2_ParamLimits

0x48ae,	// (0x0006fdc1) popup_image_details_window_t3_ParamLimits

0x48c2,	// (0x0006fdd5) popup_image_details_window_t4_ParamLimits

0x48dd,	// (0x0006fdf0) popup_image_details_window_t5_ParamLimits

0xf657,	// (0x0007ab6a) popup_image_details_window_t_ParamLimits

0xbbd4,	// (0x000770e7) cl_header_name_pane_ParamLimits

0xbbd4,	// (0x000770e7) cl_header_name_pane

0xbf2d,	// (0x00077440) cl_header_name_pane_t1_ParamLimits

0xbf2d,	// (0x00077440) cl_header_name_pane_t1

0xbf44,	// (0x00077457) cl_header_name_pane_t2_ParamLimits

0xbf44,	// (0x00077457) cl_header_name_pane_t2

0xbf6e,	// (0x00077481) cl_header_name_pane_t3_ParamLimits

0xbf6e,	// (0x00077481) cl_header_name_pane_t3

0x0002,

0xfa48,	// (0x0007af5b) cl_header_name_pane_t_ParamLimits

0xfa48,	// (0x0007af5b) cl_header_name_pane_t

0x2f91,	// (0x0006e4a4) navi_pane_mv_g2_ParamLimits

0xe8d7,	// (0x00079dea) field_vitu2_entry_pane_g1_ParamLimits

0xe8e3,	// (0x00079df6) field_vitu2_entry_pane_g2_ParamLimits

0x30af,	// (0x0006e5c2) field_vitu2_entry_pane_g3_ParamLimits

0x30af,	// (0x0006e5c2) field_vitu2_entry_pane_g3

0xf848,	// (0x0007ad5b) field_vitu2_entry_pane_g_ParamLimits

0xb0e1,	// (0x000765f4) cell_vitu2_itu_pane_g1_ParamLimits

0xb0f9,	// (0x0007660c) cell_vitu2_itu_pane_g2_ParamLimits

0xb0f9,	// (0x0007660c) cell_vitu2_itu_pane_g2

0x0001,

0xf854,	// (0x0007ad67) cell_vitu2_itu_pane_g_ParamLimits

0xf854,	// (0x0007ad67) cell_vitu2_itu_pane_g

0x1d63,	// (0x0006d276) bg_vkb2_func_pane_cp05_ParamLimits

0x1d63,	// (0x0006d276) bg_vkb2_func_pane_cp05

0x1d63,	// (0x0006d276) bg_vkb2_func_pane_cp03

0x1d63,	// (0x0006d276) bg_vkb2_func_pane_cp04

0x1d63,	// (0x0006d276) bg_vkb2_func_pane_cp10_ParamLimits

0x1d63,	// (0x0006d276) bg_vkb2_func_pane_cp10

0x60fe,	// (0x00071611) bg_vkb2_func_pane_cp08

0xb9af,	// (0x00076ec2) bg_vkb2_func_pane_cp06

0xbb8c,	// (0x0007709f) bg_vkb2_func_pane_cp07

0xee34,	// (0x0007a347) bg_vkb2_func_pane_cp11_ParamLimits

0xee34,	// (0x0007a347) bg_vkb2_func_pane_cp11

0xee49,	// (0x0007a35c) bg_vkb2_func_pane_cp12_ParamLimits

0xee49,	// (0x0007a35c) bg_vkb2_func_pane_cp12

0x16c9,	// (0x0006cbdc) bg_vkb2_func_pane_cp09

0xe901,	// (0x00079e14) bg_vkb2_func_pane_g1

0x2266,	// (0x0006d779) bg_vkb2_func_pane_g2

0xe909,	// (0x00079e1c) bg_vkb2_func_pane_g3

0xe911,	// (0x00079e24) bg_vkb2_func_pane_g4

0xeb70,	// (0x0007a083) bg_vkb2_func_pane_g5

0xe929,	// (0x00079e3c) bg_vkb2_func_pane_g6

0xe931,	// (0x00079e44) bg_vkb2_func_pane_g7

0xe921,	// (0x00079e34) bg_vkb2_func_pane_g8

0x2246,	// (0x0006d759) bg_vkb2_func_pane_g9

0x0008,

0xfa4f,	// (0x0007af62) bg_vkb2_func_pane_g

0xbe7c,	// (0x0007738f) blid2_tripm_pane_g6_ParamLimits

0xbe7c,	// (0x0007738f) blid2_tripm_pane_g6

0xe817,	// (0x00079d2a) mp4_progress_pane_g1

0xbed6,	// (0x000773e9) blid2_tripm_values_pane_ParamLimits

0xbed6,	// (0x000773e9) blid2_tripm_values_pane

0xbf93,	// (0x000774a6) blid2_tripm_values_pane_t1

0xbfa1,	// (0x000774b4) blid2_tripm_values_pane_t2

0xbfaf,	// (0x000774c2) blid2_tripm_values_pane_t3

0xbfbd,	// (0x000774d0) blid2_tripm_values_pane_t4

0xbfcb,	// (0x000774de) blid2_tripm_values_pane_t5

0xbfd9,	// (0x000774ec) blid2_tripm_values_pane_t6

0xbfe7,	// (0x000774fa) blid2_tripm_values_pane_t7

0xbff5,	// (0x00077508) blid2_tripm_values_pane_t8

0xc003,	// (0x00077516) blid2_tripm_values_pane_t9

0x0008,

0xfa62,	// (0x0007af75) blid2_tripm_values_pane_t

0x7685,	// (0x00072b98) call_video_pane_t1_ParamLimits

0x76a6,	// (0x00072bb9) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x0007a6f0) call_video_pane_t_ParamLimits

0x5cff,	// (0x00071212) msg_header_pane_g1_ParamLimits

0x319d,	// (0x0006e6b0) msg_header_pane_g2_ParamLimits

0x319d,	// (0x0006e6b0) msg_header_pane_g2

0x0001,

0xf3d2,	// (0x0007a8e5) msg_header_pane_g_ParamLimits

0xf3d2,	// (0x0007a8e5) msg_header_pane_g

0x1e74,	// (0x0006d387) main_clock2_pane_ParamLimits

0xa178,	// (0x0007568b) grid_clock2_toolbar_pane_ParamLimits

0xa178,	// (0x0007568b) grid_clock2_toolbar_pane

0xa178,	// (0x0007568b) listscroll_clock2_pane_ParamLimits

0xa178,	// (0x0007568b) listscroll_clock2_pane

0xa228,	// (0x0007573b) main_clock2_pane_t3_ParamLimits

0xa228,	// (0x0007573b) main_clock2_pane_t3

0xa23a,	// (0x0007574d) main_clock2_pane_t4_ParamLimits

0xa23a,	// (0x0007574d) main_clock2_pane_t4

0xef65,	// (0x0007a478) cell_clock2_toolbar_pane

0xef6d,	// (0x0007a480) cell_clock2_toolbar_pane_cp01

0xef6d,	// (0x0007a480) cell_clock2_toolbar_pane_cp02

0xef75,	// (0x0007a488) cell_clock2_toolbar_pane_cp03

0xef7d,	// (0x0007a490) list_clock2_pane

0x2db7,	// (0x0006e2ca) scroll_pane_cp10

0xef85,	// (0x0007a498) list_single_clock2_pane_ParamLimits

0xef85,	// (0x0007a498) list_single_clock2_pane

0x204d,	// (0x0006d560) list_highlight_pane_cp08

0xef92,	// (0x0007a4a5) list_single_clock2_pane_t1

0xefa0,	// (0x0007a4b3) list_single_clock2_pane_t2

0x0001,

0xfa75,	// (0x0007af88) list_single_clock2_pane_t

0x16c9,	// (0x0006cbdc) bg_button_pane_cp10

0xefae,	// (0x0007a4c1) cell_clock2_toolbar_pane_g1

0x8dd8,	// (0x000742eb) aid_main_viewer_pane_g1_ParamLimits

0x8dd8,	// (0x000742eb) aid_main_viewer_pane_g1

0x8de4,	// (0x000742f7) aid_main_viewer_pane_g2_ParamLimits

0x8de4,	// (0x000742f7) aid_main_viewer_pane_g2

0x8df0,	// (0x00074303) aid_main_viewer_pane_g3_ParamLimits

0x8df0,	// (0x00074303) aid_main_viewer_pane_g3

0x8e01,	// (0x00074314) aid_main_viewer_pane_g4_ParamLimits

0x8e01,	// (0x00074314) aid_main_viewer_pane_g4

0x0003,

0xf3e3,	// (0x0007a8f6) aid_main_viewer_pane_g_ParamLimits

0xf3e3,	// (0x0007a8f6) aid_main_viewer_pane_g

0x951c,	// (0x00074a2f) main_calc_pane_ParamLimits

0x9529,	// (0x00074a3c) main_dialer2_pane_ParamLimits

0x16c9,	// (0x0006cbdc) main_cam6_pane

0x16c9,	// (0x0006cbdc) main_vid6_pane

0xa184,	// (0x00075697) listscroll_gen_pane_cp06_ParamLimits

0xa184,	// (0x00075697) listscroll_gen_pane_cp06

0xa24c,	// (0x0007575f) main_clock2_pane_t5_ParamLimits

0xa24c,	// (0x0007575f) main_clock2_pane_t5

0xa299,	// (0x000757ac) aid_call2_pane_cp10_ParamLimits

0xa2ab,	// (0x000757be) aid_call_pane_cp10_ParamLimits

0x2e35,	// (0x0006e348) popup_clock_analogue_window_cp10_g1_ParamLimits

0x2e35,	// (0x0006e348) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa2bd,	// (0x000757d0) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa2bd,	// (0x000757d0) popup_clock_analogue_window_cp10_g4_ParamLimits

0x2e35,	// (0x0006e348) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf70c,	// (0x0007ac1f) popup_clock_analogue_window_cp10_g_ParamLimits

0xa2d3,	// (0x000757e6) popup_clock_analogue_window_cp10_t1_ParamLimits

0xe888,	// (0x00079d9b) cell_dialer2_keypad_pane_g2_ParamLimits

0xe888,	// (0x00079d9b) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e7,	// (0x0007acfa) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e7,	// (0x0007acfa) cell_dialer2_keypad_pane_g

0x1e20,	// (0x0006d333) cell_dialer2_keypad_pane_t1

0xb411,	// (0x00076924) main_cset_text2_pane_ParamLimits

0xb411,	// (0x00076924) main_cset_text2_pane

0xed93,	// (0x0007a2a6) area_vitu2_query_pane_g1_ParamLimits

0x6018,	// (0x0007152b) area_vitu2_query_pane_g2_ParamLimits

0xf992,	// (0x0007aea5) area_vitu2_query_pane_g_ParamLimits

0x60c9,	// (0x000715dc) area_vitu2_query_pane_t7_ParamLimits

0x60c9,	// (0x000715dc) area_vitu2_query_pane_t7

0xb9af,	// (0x00076ec2) bg_button_pane_cp018_ParamLimits

0xbb8c,	// (0x0007709f) bg_button_pane_cp021_ParamLimits

0x60ed,	// (0x00071600) bg_button_pane_cp022_ParamLimits

0x60fe,	// (0x00071611) bg_vkb2_func_pane_cp08_ParamLimits

0xb9af,	// (0x00076ec2) bg_vkb2_func_pane_cp06_ParamLimits

0xbb8c,	// (0x0007709f) bg_vkb2_func_pane_cp07_ParamLimits

0x6110,	// (0x00071623) input_focus_pane_cp09_ParamLimits

0xc011,	// (0x00077524) cam6_autofocus_pane_ParamLimits

0xc011,	// (0x00077524) cam6_autofocus_pane

0xc02d,	// (0x00077540) cam6_image_uncrop_pane_ParamLimits

0xc02d,	// (0x00077540) cam6_image_uncrop_pane

0xc066,	// (0x00077579) cam6_indi_pane_ParamLimits

0xc066,	// (0x00077579) cam6_indi_pane

0xc080,	// (0x00077593) cam6_mode_pane_ParamLimits

0xc080,	// (0x00077593) cam6_mode_pane

0xc094,	// (0x000775a7) cam6_timer_pane_ParamLimits

0xc094,	// (0x000775a7) cam6_timer_pane

0xc0a8,	// (0x000775bb) cam6_zoom_pane_ParamLimits

0xc0a8,	// (0x000775bb) cam6_zoom_pane

0xc0c3,	// (0x000775d6) cam6_mode_pane_g1_ParamLimits

0xc0c3,	// (0x000775d6) cam6_mode_pane_g1

0xc0cf,	// (0x000775e2) cam6_mode_pane_g2_ParamLimits

0xc0cf,	// (0x000775e2) cam6_mode_pane_g2

0xc0db,	// (0x000775ee) cam6_mode_pane_g3_ParamLimits

0xc0db,	// (0x000775ee) cam6_mode_pane_g3

0xc0e7,	// (0x000775fa) cam6_mode_pane_g4_ParamLimits

0xc0e7,	// (0x000775fa) cam6_mode_pane_g4

0x0003,

0xfa7a,	// (0x0007af8d) cam6_mode_pane_g_ParamLimits

0xfa7a,	// (0x0007af8d) cam6_mode_pane_g

0x498a,	// (0x0006fe9d) bg_tb_trans_pane_cp08_ParamLimits

0x498a,	// (0x0006fe9d) bg_tb_trans_pane_cp08

0xefb6,	// (0x0007a4c9) cam6_battery_pane_ParamLimits

0xefb6,	// (0x0007a4c9) cam6_battery_pane

0xefcc,	// (0x0007a4df) cam6_indi_pane_g1_ParamLimits

0xefcc,	// (0x0007a4df) cam6_indi_pane_g1

0xefde,	// (0x0007a4f1) cam6_indi_pane_g2_ParamLimits

0xefde,	// (0x0007a4f1) cam6_indi_pane_g2

0xeff0,	// (0x0007a503) cam6_indi_pane_g3_ParamLimits

0xeff0,	// (0x0007a503) cam6_indi_pane_g3

0x0002,

0xfa83,	// (0x0007af96) cam6_indi_pane_g_ParamLimits

0xfa83,	// (0x0007af96) cam6_indi_pane_g

0xf002,	// (0x0007a515) cam6_indi_pane_t1_ParamLimits

0xf002,	// (0x0007a515) cam6_indi_pane_t1

0xaf25,	// (0x00076438) cam6_autofocus_pane_g1

0xaf2d,	// (0x00076440) cam6_autofocus_pane_g2

0xaf35,	// (0x00076448) cam6_autofocus_pane_g3

0xaf3d,	// (0x00076450) cam6_autofocus_pane_g4

0x0003,

0xfa8a,	// (0x0007af9d) cam6_autofocus_pane_g

0x0466,	// (0x0006b979) cam6_timer_pane_g1

0x046e,	// (0x0006b981) cam6_timer_pane_t1

0x047c,	// (0x0006b98f) cam6_zoom_cont_pane

0x0484,	// (0x0006b997) cam6_zoom_pane_g1

0x048d,	// (0x0006b9a0) cam6_zoom_pane_g2

0xc0f3,	// (0x00077606) cam6_zoom_pane_g3

0x0002,

0xfa93,	// (0x0007afa6) cam6_zoom_pane_g

0x1e16,	// (0x0006d329) cam6_battery_pane_g1

0x1e16,	// (0x0006d329) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x0007a5c2) cam6_battery_pane_g

0x0484,	// (0x0006b997) cam6_zoom_cont_pane_g1

0x048d,	// (0x0006b9a0) cam6_zoom_cont_pane_g2

0x0496,	// (0x0006b9a9) cam6_zoom_cont_pane_g3

0x0002,

0xfa9a,	// (0x0007afad) cam6_zoom_cont_pane_g

0xc111,	// (0x00077624) cam6_mode_pane_cp_ParamLimits

0xc111,	// (0x00077624) cam6_mode_pane_cp

0xc125,	// (0x00077638) cam6_zoom_pane_cp_ParamLimits

0xc125,	// (0x00077638) cam6_zoom_pane_cp

0xc13d,	// (0x00077650) vid6_image_uncrop_cif_pane_ParamLimits

0xc13d,	// (0x00077650) vid6_image_uncrop_cif_pane

0xc169,	// (0x0007767c) vid6_image_uncrop_nhd_pane_ParamLimits

0xc169,	// (0x0007767c) vid6_image_uncrop_nhd_pane

0xc186,	// (0x00077699) vid6_image_uncrop_vga_pane_ParamLimits

0xc186,	// (0x00077699) vid6_image_uncrop_vga_pane

0xc1a5,	// (0x000776b8) vid6_image_uncrop_wvga_pane_ParamLimits

0xc1a5,	// (0x000776b8) vid6_image_uncrop_wvga_pane

0xc1c2,	// (0x000776d5) vid6_indi_pane_ParamLimits

0xc1c2,	// (0x000776d5) vid6_indi_pane

0x498a,	// (0x0006fe9d) bg_tb_trans_pane_cp09_ParamLimits

0x498a,	// (0x0006fe9d) bg_tb_trans_pane_cp09

0x04ae,	// (0x0006b9c1) cam6_battery_pane_cp_ParamLimits

0x04ae,	// (0x0006b9c1) cam6_battery_pane_cp

0x04ba,	// (0x0006b9cd) vid6_indi_pane_g1_ParamLimits

0x04ba,	// (0x0006b9cd) vid6_indi_pane_g1

0x04cc,	// (0x0006b9df) vid6_indi_pane_g2_ParamLimits

0x04cc,	// (0x0006b9df) vid6_indi_pane_g2

0x04de,	// (0x0006b9f1) vid6_indi_pane_g3_ParamLimits

0x04de,	// (0x0006b9f1) vid6_indi_pane_g3

0x04f3,	// (0x0006ba06) vid6_indi_pane_g4_ParamLimits

0x04f3,	// (0x0006ba06) vid6_indi_pane_g4

0x0508,	// (0x0006ba1b) vid6_indi_pane_g5_ParamLimits

0x0508,	// (0x0006ba1b) vid6_indi_pane_g5

0x0004,

0xfaa1,	// (0x0007afb4) vid6_indi_pane_g_ParamLimits

0xfaa1,	// (0x0007afb4) vid6_indi_pane_g

0x0522,	// (0x0006ba35) vid6_indi_pane_t1_ParamLimits

0x0522,	// (0x0006ba35) vid6_indi_pane_t1

0x0538,	// (0x0006ba4b) vid6_indi_pane_t2_ParamLimits

0x0538,	// (0x0006ba4b) vid6_indi_pane_t2

0x0560,	// (0x0006ba73) vid6_indi_pane_t3_ParamLimits

0x0560,	// (0x0006ba73) vid6_indi_pane_t3

0x0588,	// (0x0006ba9b) vid6_indi_pane_t4_ParamLimits

0x0588,	// (0x0006ba9b) vid6_indi_pane_t4

0x0003,

0xfaac,	// (0x0007afbf) vid6_indi_pane_t_ParamLimits

0xfaac,	// (0x0007afbf) vid6_indi_pane_t

0x05ac,	// (0x0006babf) wait_bar_pane_cp08

0xc1e7,	// (0x000776fa) main_cset_text2_pane_t1_ParamLimits

0xc1e7,	// (0x000776fa) main_cset_text2_pane_t1

0xc0fc,	// (0x0007760f) listscroll_gen_pane_cp06_t1_ParamLimits

0xc0fc,	// (0x0007760f) listscroll_gen_pane_cp06_t1

0x16c9,	// (0x0006cbdc) main_cam6_set_pane

0x1dca,	// (0x0006d2dd) bg_tb_trans_pane_cp06_ParamLimits

0xadd5,	// (0x000762e8) cam4_indicators_pane_g1_ParamLimits

0xade6,	// (0x000762f9) cam4_indicators_pane_g2_ParamLimits

0xf824,	// (0x0007ad37) cam4_indicators_pane_g_ParamLimits

0xae04,	// (0x00076317) cam4_indicators_pane_t1_ParamLimits

0x1d63,	// (0x0006d276) bg_tb_trans_pane_cp07_ParamLimits

0xaeb7,	// (0x000763ca) vid4_indicators_pane_g1_ParamLimits

0xaecb,	// (0x000763de) vid4_indicators_pane_g2_ParamLimits

0xaedf,	// (0x000763f2) vid4_indicators_pane_g3_ParamLimits

0xaef0,	// (0x00076403) vid4_indicators_pane_g4_ParamLimits

0xf836,	// (0x0007ad49) vid4_indicators_pane_g_ParamLimits

0xaf0e,	// (0x00076421) vid4_indicators_pane_t1_ParamLimits

0xbcb8,	// (0x000771cb) vid4_progress_pane_g1_ParamLimits

0xbcc8,	// (0x000771db) vid4_progress_pane_g2_ParamLimits

0xbcd8,	// (0x000771eb) vid4_progress_pane_g3_ParamLimits

0xbcea,	// (0x000771fd) vid4_progress_pane_g4_ParamLimits

0xf9dd,	// (0x0007aef0) vid4_progress_pane_g_ParamLimits

0xbd02,	// (0x00077215) vid4_progress_pane_t1_ParamLimits

0xbd18,	// (0x0007722b) vid4_progress_pane_t2_ParamLimits

0xbd2d,	// (0x00077240) vid4_progress_pane_t3_ParamLimits

0xf9e8,	// (0x0007aefb) vid4_progress_pane_t_ParamLimits

0xbd42,	// (0x00077255) wait_bar_pane_cp07_ParamLimits

0xc21a,	// (0x0007772d) main_cam6_set_pane_g2_ParamLimits

0xc21a,	// (0x0007772d) main_cam6_set_pane_g2

0xc226,	// (0x00077739) main_cset6_listscroll_pane_ParamLimits

0xc226,	// (0x00077739) main_cset6_listscroll_pane

0xc251,	// (0x00077764) main_cset6_slider_pane_ParamLimits

0xc251,	// (0x00077764) main_cset6_slider_pane

0xc25d,	// (0x00077770) main_cset6_text2_pane_ParamLimits

0xc25d,	// (0x00077770) main_cset6_text2_pane

0x05bb,	// (0x0006bace) main_cset6_text_pane

0x05c3,	// (0x0006bad6) main_cset_list_pane_copy1_ParamLimits

0x05c3,	// (0x0006bad6) main_cset_list_pane_copy1

0x05d3,	// (0x0006bae6) scroll_pane_cp028_copy1

0xc270,	// (0x00077783) cset_list_set_pane_copy1

0xc283,	// (0x00077796) aid_position_infowindow_above_copy1

0xc28b,	// (0x0007779e) aid_position_infowindow_below_copy1

0xc293,	// (0x000777a6) cset_list_set_pane_g1_copy1

0x5edf,	// (0x000713f2) cset_list_set_pane_g3_copy1_ParamLimits

0x5edf,	// (0x000713f2) cset_list_set_pane_g3_copy1

0x5eee,	// (0x00071401) cset_list_set_pane_t1_copy1_ParamLimits

0x5eee,	// (0x00071401) cset_list_set_pane_t1_copy1

0x1d63,	// (0x0006d276) list_highlight_pane_cp021_copy1_ParamLimits

0x1d63,	// (0x0006d276) list_highlight_pane_cp021_copy1

0x05dc,	// (0x0006baef) cset6_slider_pane_ParamLimits

0x05dc,	// (0x0006baef) cset6_slider_pane

0x0608,	// (0x0006bb1b) main_cset6_slider_pane_g1_ParamLimits

0x0608,	// (0x0006bb1b) main_cset6_slider_pane_g1

0xc29b,	// (0x000777ae) main_cset6_slider_pane_g2_ParamLimits

0xc29b,	// (0x000777ae) main_cset6_slider_pane_g2

0x0630,	// (0x0006bb43) main_cset6_slider_pane_g3_ParamLimits

0x0630,	// (0x0006bb43) main_cset6_slider_pane_g3

0xc2c3,	// (0x000777d6) main_cset6_slider_pane_g4_ParamLimits

0xc2c3,	// (0x000777d6) main_cset6_slider_pane_g4

0xc2cf,	// (0x000777e2) main_cset6_slider_pane_g5_ParamLimits

0xc2cf,	// (0x000777e2) main_cset6_slider_pane_g5

0xea56,	// (0x00079f69) main_cset6_slider_pane_g7_ParamLimits

0xea56,	// (0x00079f69) main_cset6_slider_pane_g7

0xea62,	// (0x00079f75) main_cset6_slider_pane_g8_ParamLimits

0xea62,	// (0x00079f75) main_cset6_slider_pane_g8

0xc2dd,	// (0x000777f0) main_cset6_slider_pane_g9_ParamLimits

0xc2dd,	// (0x000777f0) main_cset6_slider_pane_g9

0xc2e9,	// (0x000777fc) main_cset6_slider_pane_g10_ParamLimits

0xc2e9,	// (0x000777fc) main_cset6_slider_pane_g10

0xc2f5,	// (0x00077808) main_cset6_slider_pane_g11_ParamLimits

0xc2f5,	// (0x00077808) main_cset6_slider_pane_g11

0xc301,	// (0x00077814) main_cset6_slider_pane_g12_ParamLimits

0xc301,	// (0x00077814) main_cset6_slider_pane_g12

0xc30d,	// (0x00077820) main_cset6_slider_pane_g13_ParamLimits

0xc30d,	// (0x00077820) main_cset6_slider_pane_g13

0xc319,	// (0x0007782c) main_cset6_slider_pane_g14_ParamLimits

0xc319,	// (0x0007782c) main_cset6_slider_pane_g14

0xc325,	// (0x00077838) main_cset6_slider_pane_g15_ParamLimits

0xc325,	// (0x00077838) main_cset6_slider_pane_g15

0xc33d,	// (0x00077850) main_cset6_slider_pane_g16_ParamLimits

0xc33d,	// (0x00077850) main_cset6_slider_pane_g16

0xc34b,	// (0x0007785e) main_cset6_slider_pane_g17_ParamLimits

0xc34b,	// (0x0007785e) main_cset6_slider_pane_g17

0x0011,

0xfab5,	// (0x0007afc8) main_cset6_slider_pane_g_ParamLimits

0xfab5,	// (0x0007afc8) main_cset6_slider_pane_g

0x063c,	// (0x0006bb4f) main_cset6_slider_pane_t1_ParamLimits

0x063c,	// (0x0006bb4f) main_cset6_slider_pane_t1

0xc371,	// (0x00077884) main_cset6_slider_pane_t2_ParamLimits

0xc371,	// (0x00077884) main_cset6_slider_pane_t2

0xc39c,	// (0x000778af) main_cset6_slider_pane_t3_ParamLimits

0xc39c,	// (0x000778af) main_cset6_slider_pane_t3

0xc3c7,	// (0x000778da) main_cset6_slider_pane_t4_ParamLimits

0xc3c7,	// (0x000778da) main_cset6_slider_pane_t4

0xc3f2,	// (0x00077905) main_cset6_slider_pane_t5_ParamLimits

0xc3f2,	// (0x00077905) main_cset6_slider_pane_t5

0x067d,	// (0x0006bb90) main_cset6_slider_pane_t7_ParamLimits

0x067d,	// (0x0006bb90) main_cset6_slider_pane_t7

0xc41f,	// (0x00077932) main_cset6_slider_pane_t8_ParamLimits

0xc41f,	// (0x00077932) main_cset6_slider_pane_t8

0xc443,	// (0x00077956) main_cset6_slider_pane_t9_ParamLimits

0xc443,	// (0x00077956) main_cset6_slider_pane_t9

0xc467,	// (0x0007797a) main_cset6_slider_pane_t10_ParamLimits

0xc467,	// (0x0007797a) main_cset6_slider_pane_t10

0xc48b,	// (0x0007799e) main_cset6_slider_pane_t11_ParamLimits

0xc48b,	// (0x0007799e) main_cset6_slider_pane_t11

0x06b3,	// (0x0006bbc6) main_cset6_slider_pane_t14_ParamLimits

0x06b3,	// (0x0006bbc6) main_cset6_slider_pane_t14

0x06ec,	// (0x0006bbff) main_cset6_slider_pane_t15_ParamLimits

0x06ec,	// (0x0006bbff) main_cset6_slider_pane_t15

0x000b,

0xfada,	// (0x0007afed) main_cset6_slider_pane_t_ParamLimits

0xfada,	// (0x0007afed) main_cset6_slider_pane_t

0xeb24,	// (0x0007a037) cset_slider_pane_g1_copy1

0xeb2d,	// (0x0007a040) cset_slider_pane_g2_copy1

0xeb36,	// (0x0007a049) cset_slider_pane_g3_copy1

0x16c9,	// (0x0006cbdc) bg_popup_sub_pane_cp011_copy1

0x0725,	// (0x0006bc38) main_cset_text_pane_g1_copy1

0xebc7,	// (0x0007a0da) main_cset_text_pane_t1_copy1

0xebd5,	// (0x0007a0e8) main_cset_text_pane_t2_copy1

0xebe3,	// (0x0007a0f6) main_cset_text_pane_t3_copy1

0xebf1,	// (0x0007a104) main_cset_text_pane_t4_copy1

0xebff,	// (0x0007a112) main_cset_text_pane_t5_copy1

0x072d,	// (0x0006bc40) main_cset_text_pane_t6_copy1

0x073b,	// (0x0006bc4e) main_cset_text_pane_t7_copy1

0xc4af,	// (0x000779c2) main_cset_text2_pane_t1_copy1

0x1d63,	// (0x0006d276) main_ncimui_pane

0x957a,	// (0x00074a8d) popup_query_ncimui_window_ParamLimits

0x957a,	// (0x00074a8d) popup_query_ncimui_window

0x9b13,	// (0x00075026) field_cale_ev2_pane_g4_ParamLimits

0x9b13,	// (0x00075026) field_cale_ev2_pane_g4

0xa6a8,	// (0x00075bbb) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa6a8,	// (0x00075bbb) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7be,	// (0x0007acd1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7be,	// (0x0007acd1) cell_video_dialer_keypad_pane_g

0xa6c0,	// (0x00075bd3) cell_video_dialer_keypad_pane_t1

0x16c9,	// (0x0006cbdc) bg_popup_window_pane_cp012

0x422e,	// (0x0006f741) heading_pane_cp06

0x0767,	// (0x0006bc7a) ncim_query_content_pane

0x16c9,	// (0x0006cbdc) bg_popup_heading_pane_cp01

0x076f,	// (0x0006bc82) ncim_heading_pane_t1

0x077d,	// (0x0006bc90) ncim_indicator_popup_pane

0x078f,	// (0x0006bca2) ncim_query_button_pane

0x07a3,	// (0x0006bcb6) ncim_query_content_pane_t1

0x07b5,	// (0x0006bcc8) ncim_query_content_pane_t2

0x0005,

0xfb1e,	// (0x0007b031) ncim_query_content_pane_t

0x07ef,	// (0x0006bd02) ncim_query_list_pane

0x0801,	// (0x0006bd14) ncim_query_popup_pane

0x077d,	// (0x0006bc90) ncim_indicator_popup_pane_ParamLimits

0xc602,	// (0x00077b15) ncim_query_content_pane_g1_ParamLimits

0xc602,	// (0x00077b15) ncim_query_content_pane_g1

0x07a3,	// (0x0006bcb6) ncim_query_content_pane_t1_ParamLimits

0x07b5,	// (0x0006bcc8) ncim_query_content_pane_t2_ParamLimits

0xc60e,	// (0x00077b21) ncim_query_content_pane_t3_ParamLimits

0xc60e,	// (0x00077b21) ncim_query_content_pane_t3

0xc62b,	// (0x00077b3e) ncim_query_content_pane_t4_ParamLimits

0xc62b,	// (0x00077b3e) ncim_query_content_pane_t4

0xc648,	// (0x00077b5b) ncim_query_content_pane_t5_ParamLimits

0xc648,	// (0x00077b5b) ncim_query_content_pane_t5

0x07c7,	// (0x0006bcda) ncim_query_content_pane_t6_ParamLimits

0x07c7,	// (0x0006bcda) ncim_query_content_pane_t6

0xfb1e,	// (0x0007b031) ncim_query_content_pane_t_ParamLimits

0x07ef,	// (0x0006bd02) ncim_query_list_pane_ParamLimits

0x0801,	// (0x0006bd14) ncim_query_popup_pane_ParamLimits

0x0815,	// (0x0006bd28) wait_bar_pane_cp04

0x16c9,	// (0x0006cbdc) input_focus_pane_cp011

0x081d,	// (0x0006bd30) ncim_query_popup_pane_t1

0x082b,	// (0x0006bd3e) ncim_list_query_list_pane_ParamLimits

0x082b,	// (0x0006bd3e) ncim_list_query_list_pane

0x16c9,	// (0x0006cbdc) bg_button_pane_cp027

0x0838,	// (0x0006bd4b) ncim_query_button_pane_g1

0x16c9,	// (0x0006cbdc) list_highlight_pane_cp012

0x0842,	// (0x0006bd55) ncim_list_query_list_pane_g1

0x084a,	// (0x0006bd5d) ncim_list_query_list_pane_t1

0xadf5,	// (0x00076308) cam4_indicators_pane_g3_ParamLimits

0xadf5,	// (0x00076308) cam4_indicators_pane_g3

0xaefc,	// (0x0007640f) vid4_indicators_pane_g5_ParamLimits

0xaefc,	// (0x0007640f) vid4_indicators_pane_g5

0xbcf6,	// (0x00077209) vid4_progress_pane_g5_ParamLimits

0xbcf6,	// (0x00077209) vid4_progress_pane_g5

0xc4ee,	// (0x00077a01) main_ncimui_pane_g1

0xc556,	// (0x00077a69) ncimui_group_query_pane_ParamLimits

0xc556,	// (0x00077a69) ncimui_group_query_pane

0xc59e,	// (0x00077ab1) ncimui_list_pane_ParamLimits

0xc59e,	// (0x00077ab1) ncimui_list_pane

0xc5c5,	// (0x00077ad8) ncimui_text_pane_ParamLimits

0xc5c5,	// (0x00077ad8) ncimui_text_pane

0xc665,	// (0x00077b78) ncimui_text_pane_t1_ParamLimits

0xc665,	// (0x00077b78) ncimui_text_pane_t1

0x0858,	// (0x0006bd6b) ncimui_list_single_graphic_pane_ParamLimits

0x0858,	// (0x0006bd6b) ncimui_list_single_graphic_pane

0xc684,	// (0x00077b97) ncimui_query_pane_ParamLimits

0xc684,	// (0x00077b97) ncimui_query_pane

0x16c9,	// (0x0006cbdc) list_highlight_pane_cp013

0x0868,	// (0x0006bd7b) ncim_list_query_list_pane_t1_copy1

0x0842,	// (0x0006bd55) ncim_list_single_graphic_pane_g1

0xc697,	// (0x00077baa) ncim_query_button_pane_cp01

0xc6a3,	// (0x00077bb6) ncim_query_entry_pane_ParamLimits

0xc6a3,	// (0x00077bb6) ncim_query_entry_pane

0xc6b6,	// (0x00077bc9) ncimui_query_pane_g1

0xc6c2,	// (0x00077bd5) ncimui_query_pane_t1_ParamLimits

0xc6c2,	// (0x00077bd5) ncimui_query_pane_t1

0x1d63,	// (0x0006d276) input_focus_pane_cp012

0x0876,	// (0x0006bd89) ncim_query_entry_pane_t1

0x1e74,	// (0x0006d387) main_im_pane_ParamLimits

0x1d63,	// (0x0006d276) main_mobtv_pane_ParamLimits

0x1d63,	// (0x0006d276) main_mobtv_pane

0xc359,	// (0x0007786c) main_cset6_slider_pane_g18_ParamLimits

0xc359,	// (0x0007786c) main_cset6_slider_pane_g18

0xc365,	// (0x00077878) main_cset6_slider_pane_g19_ParamLimits

0xc365,	// (0x00077878) main_cset6_slider_pane_g19

0x30af,	// (0x0006e5c2) bg_main_mobtv_pane_ParamLimits

0x30af,	// (0x0006e5c2) bg_main_mobtv_pane

0xc6db,	// (0x00077bee) main_mobtv_info_pane

0xc6e6,	// (0x00077bf9) main_mobtv_loading_pane_ParamLimits

0xc6e6,	// (0x00077bf9) main_mobtv_loading_pane

0x0888,	// (0x0006bd9b) main_mobtv_pg_channel_list_pane

0x0892,	// (0x0006bda5) main_mobtv_pg_hdr_pane

0xc6f3,	// (0x00077c06) main_mobtv_programe_curr_pane_ParamLimits

0xc6f3,	// (0x00077c06) main_mobtv_programe_curr_pane

0xc700,	// (0x00077c13) main_mobtv_programe_next_pane_ParamLimits

0xc700,	// (0x00077c13) main_mobtv_programe_next_pane

0x089b,	// (0x0006bdae) popup_mobtv_noti_window

0x1e16,	// (0x0006d329) main_tv_pg_hdr_pane_g1

0x08a3,	// (0x0006bdb6) main_tv_pg_hdr_pane_g2

0x08ab,	// (0x0006bdbe) main_tv_pg_hdr_pane_g3

0x08b3,	// (0x0006bdc6) main_tv_pg_hdr_pane_g4

0x08bb,	// (0x0006bdce) main_tv_pg_hdr_pane_g5

0x08c5,	// (0x0006bdd8) main_tv_pg_hdr_pane_g6

0x08cf,	// (0x0006bde2) main_tv_pg_hdr_pane_g7

0x08d9,	// (0x0006bdec) main_tv_pg_hdr_pane_g8

0x08e3,	// (0x0006bdf6) main_tv_pg_hdr_pane_g9

0x08ed,	// (0x0006be00) main_tv_pg_hdr_pane_g10

0x08f7,	// (0x0006be0a) main_tv_pg_hdr_pane_g11

0x000a,

0xfb2b,	// (0x0007b03e) main_tv_pg_hdr_pane_g

0x0901,	// (0x0006be14) main_tv_pg_hdr_pane_t1

0x090f,	// (0x0006be22) main_tv_pg_hdr_pane_t2

0x091d,	// (0x0006be30) main_tv_pg_hdr_pane_t3

0x092d,	// (0x0006be40) main_tv_pg_hdr_pane_t4

0x093d,	// (0x0006be50) main_tv_pg_hdr_pane_t5

0x0004,

0xfb42,	// (0x0007b055) main_tv_pg_hdr_pane_t

0x094d,	// (0x0006be60) single_mobtv_pg_channel_pane_ParamLimits

0x094d,	// (0x0006be60) single_mobtv_pg_channel_pane

0x095f,	// (0x0006be72) single_mobtv_pg_channel_table_pane

0x0968,	// (0x0006be7b) single_mobtv_pg_channel_thumb_pane

0x0971,	// (0x0006be84) single_tv_pg_channel_pane_g1

0x097a,	// (0x0006be8d) single_tv_pg_channel_pane_g2

0x0001,

0xfb4d,	// (0x0007b060) single_tv_pg_channel_pane_g

0x1dca,	// (0x0006d2dd) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1dca,	// (0x0006d2dd) bg_single_mobtv_pg_channel_thumb_pane

0x0983,	// (0x0006be96) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x0983,	// (0x0006be96) single_mobtv_pg_channel_thumb_pane_g1

0x0991,	// (0x0006bea4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x0991,	// (0x0006bea4) single_mobtv_pg_channel_thumb_pane_g2

0x099d,	// (0x0006beb0) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x099d,	// (0x0006beb0) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb52,	// (0x0007b065) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb52,	// (0x0007b065) single_mobtv_pg_channel_thumb_pane_g

0x09a9,	// (0x0006bebc) single_mobtv_pg_channel_thumb_pane_t1

0x09b7,	// (0x0006beca) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb59,	// (0x0007b06c) single_mobtv_pg_channel_thumb_pane_t

0x1e16,	// (0x0006d329) bg_single_mobtv_pg_channel_table_pane_g1

0x1e16,	// (0x0006d329) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x0007a5c2) bg_single_mobtv_pg_channel_table_pane_g

0x09c5,	// (0x0006bed8) single_mobtv_pg_channel_table_pane_t1

0x09d3,	// (0x0006bee6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb5e,	// (0x0007b071) single_mobtv_pg_channel_table_pane_t

0xc715,	// (0x00077c28) main_mobtv_info_pane_g1_ParamLimits

0xc715,	// (0x00077c28) main_mobtv_info_pane_g1

0xc731,	// (0x00077c44) main_mobtv_info_pane_t1_ParamLimits

0xc731,	// (0x00077c44) main_mobtv_info_pane_t1

0xc7a9,	// (0x00077cbc) main_mobtv_info_pane_t2_ParamLimits

0xc7a9,	// (0x00077cbc) main_mobtv_info_pane_t2

0x0002,

0xfb68,	// (0x0007b07b) main_mobtv_info_pane_t_ParamLimits

0xfb68,	// (0x0007b07b) main_mobtv_info_pane_t

0xc838,	// (0x00077d4b) wait_bar_pane_cp05

0xc84a,	// (0x00077d5d) main_mobtv_loading_pane_g1_ParamLimits

0xc84a,	// (0x00077d5d) main_mobtv_loading_pane_g1

0xc858,	// (0x00077d6b) main_mobtv_loading_pane_g2_ParamLimits

0xc858,	// (0x00077d6b) main_mobtv_loading_pane_g2

0xc864,	// (0x00077d77) main_mobtv_loading_pane_g3_ParamLimits

0xc864,	// (0x00077d77) main_mobtv_loading_pane_g3

0x0002,

0xfb6f,	// (0x0007b082) main_mobtv_loading_pane_g_ParamLimits

0xfb6f,	// (0x0007b082) main_mobtv_loading_pane_g

0x09e1,	// (0x0006bef4) main_mobtv_loading_pane_t1_ParamLimits

0x09e1,	// (0x0006bef4) main_mobtv_loading_pane_t1

0x09f9,	// (0x0006bf0c) main_mobtv_loading_pane_t2_ParamLimits

0x09f9,	// (0x0006bf0c) main_mobtv_loading_pane_t2

0x0001,

0xfb76,	// (0x0007b089) main_mobtv_loading_pane_t_ParamLimits

0xfb76,	// (0x0007b089) main_mobtv_loading_pane_t

0xc872,	// (0x00077d85) wait_bar_pane_cp06_ParamLimits

0xc872,	// (0x00077d85) wait_bar_pane_cp06

0x0a1d,	// (0x0006bf30) main_mobtv_programe_curr_pane_t1

0x0a2b,	// (0x0006bf3e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb7b,	// (0x0007b08e) main_mobtv_programe_curr_pane_t

0x0a39,	// (0x0006bf4c) main_mobtv_programe_next_pane_t1

0x0a47,	// (0x0006bf5a) main_mobtv_programe_next_pane_t2

0x0a55,	// (0x0006bf68) main_mobtv_programe_next_pane_t3

0x0002,

0xfb80,	// (0x0007b093) main_mobtv_programe_next_pane_t

0x16c9,	// (0x0006cbdc) bg_popup_mobtv_noti_window_pane

0x0a63,	// (0x0006bf76) popup_mobtv_noti_window_g1

0x0a6b,	// (0x0006bf7e) popup_mobtv_noti_window_t1

0x0a79,	// (0x0006bf8c) popup_mobtv_noti_window_t2

0x0001,

0xfb87,	// (0x0007b09a) popup_mobtv_noti_window_t

0x1e16,	// (0x0006d329) bg_popup_mobtv_noti_window_pane_g1

0x16c9,	// (0x0006cbdc) sc_clock_pane

0x16c9,	// (0x0006cbdc) main_fs_bigclock_pane

0xbec4,	// (0x000773d7) blid2_tripm_pane_t4_ParamLimits

0xbec4,	// (0x000773d7) blid2_tripm_pane_t4

0x1dd8,	// (0x0006d2eb) sc_clock_pane_g1_ParamLimits

0x1dd8,	// (0x0006d2eb) sc_clock_pane_g1

0x1e34,	// (0x0006d347) sc_clock_pane_t1_ParamLimits

0x1e34,	// (0x0006d347) sc_clock_pane_t1

0x1e34,	// (0x0006d347) sc_clock_pane_t2_ParamLimits

0x1e34,	// (0x0006d347) sc_clock_pane_t2

0x1e34,	// (0x0006d347) sc_clock_pane_t3_ParamLimits

0x1e34,	// (0x0006d347) sc_clock_pane_t3

0x0004,

0xfb8c,	// (0x0007b09f) sc_clock_pane_t_ParamLimits

0xfb8c,	// (0x0007b09f) sc_clock_pane_t

0xd006,	// (0x00078519) main_fs_bigclock_indicator_pane_ParamLimits

0xd006,	// (0x00078519) main_fs_bigclock_indicator_pane

0xc8b9,	// (0x00077dcc) main_fs_bigclock_pane_g1_ParamLimits

0xc8b9,	// (0x00077dcc) main_fs_bigclock_pane_g1

0xd012,	// (0x00078525) main_fs_bigclock_pane_t1_ParamLimits

0xd012,	// (0x00078525) main_fs_bigclock_pane_t1

0xd024,	// (0x00078537) main_fs_bigclock_pane_t2_ParamLimits

0xd024,	// (0x00078537) main_fs_bigclock_pane_t2

0xd038,	// (0x0007854b) main_fs_bigclock_pane_t3_ParamLimits

0xd038,	// (0x0007854b) main_fs_bigclock_pane_t3

0x0002,

0xfd22,	// (0x0007b235) main_fs_bigclock_pane_t_ParamLimits

0xfd22,	// (0x0007b235) main_fs_bigclock_pane_t

0x12b2,	// (0x0006c7c5) main_fs_bigclock_indicator_pane_g1

0x0797,	// (0x0006bcaa) ncim_query_content_pane_g2_ParamLimits

0x0797,	// (0x0006bcaa) ncim_query_content_pane_g2

0x0001,

0xfb19,	// (0x0007b02c) ncim_query_content_pane_g_ParamLimits

0xfb19,	// (0x0007b02c) ncim_query_content_pane_g

0x1e34,	// (0x0006d347) sc_clock_pane_t4_ParamLimits

0x1e34,	// (0x0006d347) sc_clock_pane_t4

0x1d63,	// (0x0006d276) main_radioblah_pane

0xaca8,	// (0x000761bb) cell_call4_button_pane_t1_copy1_ParamLimits

0xaca8,	// (0x000761bb) cell_call4_button_pane_t1_copy1

0xc508,	// (0x00077a1b) main_ncimui_pane_t1_ParamLimits

0xc508,	// (0x00077a1b) main_ncimui_pane_t1

0xc522,	// (0x00077a35) main_ncimui_pane_t2_ParamLimits

0xc522,	// (0x00077a35) main_ncimui_pane_t2

0x0002,

0xfb12,	// (0x0007b025) main_ncimui_pane_t_ParamLimits

0xfb12,	// (0x0007b025) main_ncimui_pane_t

0x30d1,	// (0x0006e5e4) main_radioblah_anim_pane_ParamLimits

0x30d1,	// (0x0006e5e4) main_radioblah_anim_pane

0x30d1,	// (0x0006e5e4) main_radioblah_info_pane_ParamLimits

0x30d1,	// (0x0006e5e4) main_radioblah_info_pane

0x30bd,	// (0x0006e5d0) main_radioblah_pane_t1_ParamLimits

0x30bd,	// (0x0006e5d0) main_radioblah_pane_t1

0x30bd,	// (0x0006e5d0) main_radioblah_pane_t2_ParamLimits

0x30bd,	// (0x0006e5d0) main_radioblah_pane_t2

0x0003,

0xfbad,	// (0x0007b0c0) main_radioblah_pane_t_ParamLimits

0xfbad,	// (0x0007b0c0) main_radioblah_pane_t

0x1dbc,	// (0x0006d2cf) main_radioblah_rocker_ctrl_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) main_radioblah_rocker_ctrl_pane

0x4998,	// (0x0006feab) main_radioblah_info_pane_t1_ParamLimits

0x4998,	// (0x0006feab) main_radioblah_info_pane_t1

0x0bee,	// (0x0006c101) main_radioblah_info_pane_t2_ParamLimits

0x0bee,	// (0x0006c101) main_radioblah_info_pane_t2

0x0003,

0xfbb6,	// (0x0007b0c9) main_radioblah_info_pane_t_ParamLimits

0xfbb6,	// (0x0007b0c9) main_radioblah_info_pane_t

0x1e16,	// (0x0006d329) main_radioblah_rocker_ctrl_pane_g1

0x1e16,	// (0x0006d329) main_radioblah_rocker_ctrl_pane_g2

0x1e16,	// (0x0006d329) main_radioblah_rocker_ctrl_pane_g3

0x1e16,	// (0x0006d329) main_radioblah_rocker_ctrl_pane_g4

0x1e16,	// (0x0006d329) main_radioblah_rocker_ctrl_pane_g5

0x1e16,	// (0x0006d329) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbbf,	// (0x0007b0d2) main_radioblah_rocker_ctrl_pane_g

0xc4af,	// (0x000779c2) main_cset_text2_pane_t1_copy1_ParamLimits

0xad23,	// (0x00076236) cam4_image_uncrop_qvga_pane

0xae6a,	// (0x0007637d) vid4_image_uncrop_qcif_pane

0xc058,	// (0x0007756b) cam6_image_uncrop_qvga_pane_ParamLimits

0xc058,	// (0x0007756b) cam6_image_uncrop_qvga_pane

0x049e,	// (0x0006b9b1) vid6_image_uncrop_qcif_pane_ParamLimits

0x049e,	// (0x0006b9b1) vid6_image_uncrop_qcif_pane

0x16c9,	// (0x0006cbdc) bg_popup_preview_window_pane_cp03

0x0749,	// (0x0006bc5c) list_cset_text2_pane

0x0751,	// (0x0006bc64) main_cset6_text2_pane_g1

0x0759,	// (0x0006bc6c) main_cset6_text2_pane_t1

0xc8fd,	// (0x00077e10) list_cset_text2_pane_t1_ParamLimits

0xc8fd,	// (0x00077e10) list_cset_text2_pane_t1

0x1d63,	// (0x0006d276) main_radioblah_pane_ParamLimits

0xc824,	// (0x00077d37) main_mobtv_info_pane_t3_ParamLimits

0xc824,	// (0x00077d37) main_mobtv_info_pane_t3

0x30af,	// (0x0006e5c2) main_radioblah_pane_g1

0x0bbe,	// (0x0006c0d1) main_radioblah_info_pane_g1

0x1e34,	// (0x0006d347) main_radioblah_info_pane_t3_ParamLimits

0x1e34,	// (0x0006d347) main_radioblah_info_pane_t3

0x86a6,	// (0x00073bb9) highlight_cell_cale_month_pane_ParamLimits

0x86a6,	// (0x00073bb9) highlight_cell_cale_month_pane

0x16c9,	// (0x0006cbdc) main_phob_fisheye_pane

0x4a51,	// (0x0006ff64) scroll_pane_cp0031_ParamLimits

0x4a51,	// (0x0006ff64) scroll_pane_cp0031

0x05ac,	// (0x0006babf) wait_bar_pane_cp08_ParamLimits

0xc270,	// (0x00077783) cset_list_set_pane_copy1_ParamLimits

0x0c3d,	// (0x0006c150) highlight_cell_cale_month_pane_g1

0xc91a,	// (0x00077e2d) highlight_cell_cale_month_pane_t1

0xede7,	// (0x0007a2fa) list_gen_pane_cp01

0xea41,	// (0x00079f54) scroll_pane_01

0x6162,	// (0x00071675) list_single_double_fisheye_pane

0x616b,	// (0x0007167e) list_double_fisheye_pane_g1_ParamLimits

0x616b,	// (0x0007167e) list_double_fisheye_pane_g1

0x6177,	// (0x0007168a) list_double_fisheye_pane_g2_ParamLimits

0x6177,	// (0x0007168a) list_double_fisheye_pane_g2

0x618b,	// (0x0007169e) list_double_fisheye_pane_g3_ParamLimits

0x618b,	// (0x0007169e) list_double_fisheye_pane_g3

0x0004,

0xfbcc,	// (0x0007b0df) list_double_fisheye_pane_g_ParamLimits

0xfbcc,	// (0x0007b0df) list_double_fisheye_pane_g

0x61b4,	// (0x000716c7) list_double_fisheye_pane_t1_ParamLimits

0x61b4,	// (0x000716c7) list_double_fisheye_pane_t1

0x61cf,	// (0x000716e2) list_double_fisheye_pane_t2_ParamLimits

0x61cf,	// (0x000716e2) list_double_fisheye_pane_t2

0x0001,

0xfbd7,	// (0x0007b0ea) list_double_fisheye_pane_t_ParamLimits

0xfbd7,	// (0x0007b0ea) list_double_fisheye_pane_t

0x16c9,	// (0x0006cbdc) main_call5_pane

0x1dbc,	// (0x0006d2cf) sc_swipe_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) sc_swipe_pane

0xc934,	// (0x00077e47) call5_image_pane_ParamLimits

0xc934,	// (0x00077e47) call5_image_pane

0xc944,	// (0x00077e57) call5_swipe_1_pane_ParamLimits

0xc944,	// (0x00077e57) call5_swipe_1_pane

0xc950,	// (0x00077e63) call5_swipe_2_pane_ParamLimits

0xc950,	// (0x00077e63) call5_swipe_2_pane

0xc96a,	// (0x00077e7d) popup_call5_audio_first_window_ParamLimits

0xc96a,	// (0x00077e7d) popup_call5_audio_first_window

0x1dca,	// (0x0006d2dd) call5_swipe_1_pane_g1_ParamLimits

0x1dca,	// (0x0006d2dd) call5_swipe_1_pane_g1

0x0c45,	// (0x0006c158) call5_swipe_1_pane_g2_ParamLimits

0x0c45,	// (0x0006c158) call5_swipe_1_pane_g2

0x0001,

0xfbdc,	// (0x0007b0ef) call5_swipe_1_pane_g_ParamLimits

0xfbdc,	// (0x0007b0ef) call5_swipe_1_pane_g

0x0c51,	// (0x0006c164) call5_swipe_1_pane_t1_ParamLimits

0x0c51,	// (0x0006c164) call5_swipe_1_pane_t1

0x1dca,	// (0x0006d2dd) call5_swipe_2_pane_g1_ParamLimits

0x1dca,	// (0x0006d2dd) call5_swipe_2_pane_g1

0x0c66,	// (0x0006c179) call5_swipe_2_pane_g2_ParamLimits

0x0c66,	// (0x0006c179) call5_swipe_2_pane_g2

0x0001,

0xfbe1,	// (0x0007b0f4) call5_swipe_2_pane_g_ParamLimits

0xfbe1,	// (0x0007b0f4) call5_swipe_2_pane_g

0x0c72,	// (0x0006c185) call5_swipe_2_pane_t1_ParamLimits

0x0c72,	// (0x0006c185) call5_swipe_2_pane_t1

0x1dca,	// (0x0006d2dd) sc_swipe_pane_g1_ParamLimits

0x1dca,	// (0x0006d2dd) sc_swipe_pane_g1

0x1dd8,	// (0x0006d2eb) sc_swipe_pane_g2_ParamLimits

0x1dd8,	// (0x0006d2eb) sc_swipe_pane_g2

0x0001,

0xfbe6,	// (0x0007b0f9) sc_swipe_pane_g_ParamLimits

0xfbe6,	// (0x0007b0f9) sc_swipe_pane_g

0x1e20,	// (0x0006d333) sc_swipe_pane_t1_ParamLimits

0x1e20,	// (0x0006d333) sc_swipe_pane_t1

0x16c9,	// (0x0006cbdc) main_cmail_launcher_pane

0xc978,	// (0x00077e8b) aid_size_cell_cmail_l_ParamLimits

0xc978,	// (0x00077e8b) aid_size_cell_cmail_l

0xc986,	// (0x00077e99) grid_cmail_l_pane_ParamLimits

0xc986,	// (0x00077e99) grid_cmail_l_pane

0xc996,	// (0x00077ea9) cell_cmail_l_pane_ParamLimits

0xc996,	// (0x00077ea9) cell_cmail_l_pane

0x0c87,	// (0x0006c19a) cell_cmail_l_pane_g1_ParamLimits

0x0c87,	// (0x0006c19a) cell_cmail_l_pane_g1

0x0c93,	// (0x0006c1a6) cell_cmail_l_pane_t1_ParamLimits

0x0c93,	// (0x0006c1a6) cell_cmail_l_pane_t1

0x0ca9,	// (0x0006c1bc) cell_cmail_l_pane_t2_ParamLimits

0x0ca9,	// (0x0006c1bc) cell_cmail_l_pane_t2

0x0001,

0xfbeb,	// (0x0007b0fe) cell_cmail_l_pane_t_ParamLimits

0xfbeb,	// (0x0007b0fe) cell_cmail_l_pane_t

0x1d63,	// (0x0006d276) grid_highlight_pane_cp018_ParamLimits

0x1d63,	// (0x0006d276) grid_highlight_pane_cp018

0x6a64,	// (0x00071f77) main2_pane_ParamLimits

0x6a64,	// (0x00071f77) main2_pane

0x1f0c,	// (0x0006d41f) popup_sp_fs_action_menu_bg_pane_g1

0x1f14,	// (0x0006d427) popup_sp_fs_action_menu_bg_pane_g2

0x1f1c,	// (0x0006d42f) popup_sp_fs_action_menu_bg_pane_g3

0x1f24,	// (0x0006d437) popup_sp_fs_action_menu_bg_pane_g4

0x1f2c,	// (0x0006d43f) popup_sp_fs_action_menu_bg_pane_g5

0x1f34,	// (0x0006d447) popup_sp_fs_action_menu_bg_pane_g6

0x1f3c,	// (0x0006d44f) popup_sp_fs_action_menu_bg_pane_g7

0x1f44,	// (0x0006d457) popup_sp_fs_action_menu_bg_pane_g8

0x1f4c,	// (0x0006d45f) popup_sp_fs_action_menu_bg_pane_g9

0x1f54,	// (0x0006d467) popup_sp_fs_action_menu_bg_pane_g10

0x1f54,	// (0x0006d467) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x0007a613) popup_sp_fs_action_menu_bg_pane_g

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g3_g1

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g3_g2

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x0007a6c1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x0007a6c1) list_medium_line_x2_t3_g3_g

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g3_t1

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g3_t2

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x0007a6c8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x0007a6c8) list_medium_line_x2_t3_g3_t

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g2_g1

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x0007a6cf) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x0007a6cf) list_medium_line_x2_t3_g2_g

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g2_t1

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g2_t2

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x0007a6c8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x0007a6c8) list_medium_line_x2_t3_g2_t

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t4_g4_g1

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t4_g4_g2

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t4_g4_g3

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x0007a6d4) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x0007a6d4) list_medium_line_x2_t4_g4_g

0x1e20,	// (0x0006d333) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t4_g4_t1

0x1e20,	// (0x0006d333) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t4_g4_t2

0x1e20,	// (0x0006d333) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t4_g4_t3

0x1e20,	// (0x0006d333) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x0007a6dd) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x0007a6dd) list_medium_line_x2_t4_g4_t

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g4_g1

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g4_g2

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g4_g3

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x0007a6d4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x0007a6d4) list_medium_line_x2_t2_g4_g

0x1e20,	// (0x0006d333) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t2_g4_t1

0x1e20,	// (0x0006d333) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t2_g4_t2

0x0001,

0xf231,	// (0x0007a744) list_medium_line_x2_t2_g4_t_ParamLimits

0xf231,	// (0x0007a744) list_medium_line_x2_t2_g4_t

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g3_g1

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g3_g2

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x0007a6c1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x0007a6c1) list_medium_line_x2_t2_g3_g

0x1e20,	// (0x0006d333) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t2_g3_t1

0x1e20,	// (0x0006d333) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t2_g3_t2

0x0001,

0xf231,	// (0x0007a744) list_medium_line_x2_t2_g3_t_ParamLimits

0xf231,	// (0x0007a744) list_medium_line_x2_t2_g3_t

0x8876,	// (0x00073d89) main_sp_fs_list_pane_ParamLimits

0x8876,	// (0x00073d89) main_sp_fs_list_pane

0x8882,	// (0x00073d95) sp_fs_scroll_pane_ParamLimits

0x8882,	// (0x00073d95) sp_fs_scroll_pane

0x2604,	// (0x0006db17) list_medium_line_x2_t3_t1

0x2604,	// (0x0006db17) list_medium_line_x2_t3_t2

0x2604,	// (0x0006db17) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x0007a78f) list_medium_line_x2_t3_t

0x2604,	// (0x0006db17) list_medium_line_x3_t4_t1

0x2604,	// (0x0006db17) list_medium_line_x3_t4_t2

0x2604,	// (0x0006db17) list_medium_line_x3_t4_t3

0x2604,	// (0x0006db17) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x0007a796) list_medium_line_x3_t4_t

0x2604,	// (0x0006db17) list_medium_line_x4_t5_t1

0x2604,	// (0x0006db17) list_medium_line_x4_t5_t2

0x2604,	// (0x0006db17) list_medium_line_x4_t5_t3

0x2604,	// (0x0006db17) list_medium_line_x4_t5_t4

0x2604,	// (0x0006db17) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x0007a79f) list_medium_line_x4_t5_t

0x1dca,	// (0x0006d2dd) list_medium_line_t4_g4_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_t4_g4_g1

0x1dca,	// (0x0006d2dd) list_medium_line_t4_g4_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_t4_g4_g2

0x1dca,	// (0x0006d2dd) list_medium_line_t4_g4_g3_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_t4_g4_g3

0x1dca,	// (0x0006d2dd) list_medium_line_t4_g4_g4_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x0007a6d4) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x0007a6d4) list_medium_line_t4_g4_g

0x1e20,	// (0x0006d333) list_medium_line_t4_g4_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t4_g4_t1

0x1e20,	// (0x0006d333) list_medium_line_t4_g4_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t4_g4_t2

0x1e20,	// (0x0006d333) list_medium_line_t4_g4_t3_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t4_g4_t3

0x1e20,	// (0x0006d333) list_medium_line_t4_g4_t4_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x0007a6dd) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x0007a6dd) list_medium_line_t4_g4_t

0x896b,	// (0x00073e7e) chi_dic_find_pane_g1

0x9537,	// (0x00074a4a) main_tport_pane

0x2604,	// (0x0006db17) list_medium_line_plain_t1

0x1dca,	// (0x0006d2dd) list_medium_line_t2_g2_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_t2_g2_g1

0x1dca,	// (0x0006d2dd) list_medium_line_t2_g2_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x0007a6cf) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x0007a6cf) list_medium_line_t2_g2_g

0x1e20,	// (0x0006d333) list_medium_line_t2_g2_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t2_g2_t1

0x1e20,	// (0x0006d333) list_medium_line_t2_g2_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t2_g2_t2

0x0001,

0xf231,	// (0x0007a744) list_medium_line_t2_g2_t_ParamLimits

0xf231,	// (0x0007a744) list_medium_line_t2_g2_t

0x6120,	// (0x00071633) aid_sp_fs_list_icon_a_sm

0xbd55,	// (0x00077268) aid_sp_fs_list_icon_d

0xedf0,	// (0x0007a303) aid_sp_fs_text_primary

0x6128,	// (0x0007163b) aid_sp_fs_text_secondary

0x16c9,	// (0x0006cbdc) list_medium_line

0x16c9,	// (0x0006cbdc) list_medium_line_g2

0x16c9,	// (0x0006cbdc) list_medium_line_g3

0x16c9,	// (0x0006cbdc) list_medium_line_plain

0x16c9,	// (0x0006cbdc) list_medium_line_plain_t2

0x16c9,	// (0x0006cbdc) list_medium_line_plain_t3

0x16c9,	// (0x0006cbdc) list_medium_line_right_icon

0x16c9,	// (0x0006cbdc) list_medium_line_right_iconx2

0x16c9,	// (0x0006cbdc) list_medium_line_t2

0x16c9,	// (0x0006cbdc) list_medium_line_t2_g2

0x16c9,	// (0x0006cbdc) list_medium_line_t2_g3

0x16c9,	// (0x0006cbdc) list_medium_line_t2_right_icon

0x16c9,	// (0x0006cbdc) list_medium_line_t2_right_iconx2

0x16c9,	// (0x0006cbdc) list_medium_line_t3

0x16c9,	// (0x0006cbdc) list_medium_line_t3_g2

0x16c9,	// (0x0006cbdc) list_medium_line_t3_g3

0x16c9,	// (0x0006cbdc) list_medium_line_t3_right_iconx2

0x16c9,	// (0x0006cbdc) list_medium_line_t4_g4

0x16c9,	// (0x0006cbdc) list_medium_line_x2

0x16c9,	// (0x0006cbdc) list_medium_line_x2_t2_g2

0x16c9,	// (0x0006cbdc) list_medium_line_x2_t2_g3

0x16c9,	// (0x0006cbdc) list_medium_line_x2_t2_g4

0x16c9,	// (0x0006cbdc) list_medium_line_x2_t3

0x16c9,	// (0x0006cbdc) list_medium_line_x2_t3_g2

0x16c9,	// (0x0006cbdc) list_medium_line_x2_t3_g3

0x16c9,	// (0x0006cbdc) list_medium_line_x2_t3_g4

0x16c9,	// (0x0006cbdc) list_medium_line_x2_t4_g2

0x16c9,	// (0x0006cbdc) list_medium_line_x2_t4_g4

0x16c9,	// (0x0006cbdc) list_medium_line_x3

0x16c9,	// (0x0006cbdc) list_medium_line_x3_t4

0x16c9,	// (0x0006cbdc) list_medium_line_x3_t4_g4

0x16c9,	// (0x0006cbdc) list_medium_line_x4_t4

0x16c9,	// (0x0006cbdc) list_medium_line_x4_t4_g7

0x16c9,	// (0x0006cbdc) list_medium_line_x4_t5

0x6131,	// (0x00071644) list_single_fs_dyc_pane_ParamLimits

0x6131,	// (0x00071644) list_single_fs_dyc_pane

0x1dca,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g1

0x1dca,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g2

0x1dca,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g3

0x1dca,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g4

0x1dca,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g5

0x1dca,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g6

0x1dd8,	// (0x0006d2eb) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1dd8,	// (0x0006d2eb) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaf3,	// (0x0007b006) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaf3,	// (0x0007b006) list_medium_line_x4_t4_g7_g

0x1e20,	// (0x0006d333) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x4_t4_g7_t1

0x1e20,	// (0x0006d333) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x4_t4_g7_t2

0x1e20,	// (0x0006d333) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x4_t4_g7_t3

0x1e34,	// (0x0006d347) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1e34,	// (0x0006d347) list_medium_line_x4_t4_g7_t4

0x1e34,	// (0x0006d347) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1e34,	// (0x0006d347) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb02,	// (0x0007b015) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb02,	// (0x0007b015) list_medium_line_x4_t4_g7_t

0x6145,	// (0x00071658) list_single_dyc_row_pane_ParamLimits

0x6145,	// (0x00071658) list_single_dyc_row_pane

0xc928,	// (0x00077e3b) call5_gesture_pane_ParamLimits

0xc928,	// (0x00077e3b) call5_gesture_pane

0xc95c,	// (0x00077e6f) call5_windows_pane_ParamLimits

0xc95c,	// (0x00077e6f) call5_windows_pane

0xc9af,	// (0x00077ec2) call5_swipe_1_pane_cp_ParamLimits

0xc9af,	// (0x00077ec2) call5_swipe_1_pane_cp

0xc9bb,	// (0x00077ece) call5_swipe_2_pane_cp_ParamLimits

0xc9bb,	// (0x00077ece) call5_swipe_2_pane_cp

0x204d,	// (0x0006d560) call5_image_pane_cp

0xc9c7,	// (0x00077eda) popup_call5_audio_first_window_cp_ParamLimits

0xc9c7,	// (0x00077eda) popup_call5_audio_first_window_cp

0x0cc6,	// (0x0006c1d9) call5_swipe_1_pane_g1_cp_ParamLimits

0x0cc6,	// (0x0006c1d9) call5_swipe_1_pane_g1_cp

0x0cd3,	// (0x0006c1e6) call5_swipe_1_pane_g2_cp

0x0cdb,	// (0x0006c1ee) call5_swipe_1_pane_t1_cp_ParamLimits

0x0cdb,	// (0x0006c1ee) call5_swipe_1_pane_t1_cp

0x0cc6,	// (0x0006c1d9) call5_swipe_2_pane_g1_cp_ParamLimits

0x0cc6,	// (0x0006c1d9) call5_swipe_2_pane_g1_cp

0x0cf0,	// (0x0006c203) call5_swipe_2_pane_g2_cp

0x0cf8,	// (0x0006c20b) call5_swipe_2_pane_t1_cp_ParamLimits

0x0cf8,	// (0x0006c20b) call5_swipe_2_pane_t1_cp

0x1d63,	// (0x0006d276) main_sp_fs_email_pane

0x0d0d,	// (0x0006c220) main_sp_fs_listscroll_pane_te

0xc9d5,	// (0x00077ee8) popup_sp_fs_action_menu_pane_ParamLimits

0xc9d5,	// (0x00077ee8) popup_sp_fs_action_menu_pane

0x1e16,	// (0x0006d329) bg_sp_fs_ctrlbar_pane_g1

0x0d16,	// (0x0006c229) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x0d1f,	// (0x0006c232) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x0d28,	// (0x0006c23b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1e16,	// (0x0006d329) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbf0,	// (0x0007b103) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4270,	// (0x0006f783) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4270,	// (0x0006f783) bg_sp_fs_ctrlbar_ddmenu_pane

0x0d31,	// (0x0006c244) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x0d31,	// (0x0006c244) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x0d3d,	// (0x0006c250) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x0d3d,	// (0x0006c250) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbf9,	// (0x0007b10c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbf9,	// (0x0007b10c) main_sp_fs_ctrlbar_ddmenu_pane_g

0x0d49,	// (0x0006c25c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x0d49,	// (0x0006c25c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1e16,	// (0x0006d329) list_medium_line_t2_right_icon_g1

0x2604,	// (0x0006db17) list_medium_line_t2_right_icon_t1

0x2604,	// (0x0006db17) list_medium_line_t2_right_icon_t2

0x0001,

0xfbfe,	// (0x0007b111) list_medium_line_t2_right_icon_t

0x30d1,	// (0x0006e5e4) bg_sp_fs_ctrlbar_pane_ParamLimits

0x30d1,	// (0x0006e5e4) bg_sp_fs_ctrlbar_pane

0xca70,	// (0x00077f83) main_sp_fs_ctrlbar_button_pane_cp01

0xca78,	// (0x00077f8b) main_sp_fs_ctrlbar_ddmenu_pane

0x0d9b,	// (0x0006c2ae) main_sp_fs_ctrlbar_pane_g1

0x0da7,	// (0x0006c2ba) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc03,	// (0x0007b116) main_sp_fs_ctrlbar_pane_g

0xcab4,	// (0x00077fc7) main_sp_fs_ctrlbar_pane_t1

0xcaef,	// (0x00078002) main_sp_fs_ctrlbar_pane

0xcb05,	// (0x00078018) main_sp_fs_listscroll_pane_te_cp01

0x61f1,	// (0x00071704) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x61f1,	// (0x00071704) popup_sp_fs_action_menu_pane_cp01

0x1d63,	// (0x0006d276) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1d63,	// (0x0006d276) bg_sp_fs_highlight_list_pane_cp01

0x6211,	// (0x00071724) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6211,	// (0x00071724) sp_fs_action_menu_list_gene_pane_g1

0x0dce,	// (0x0006c2e1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0dce,	// (0x0006c2e1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc11,	// (0x0007b124) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc11,	// (0x0007b124) sp_fs_action_menu_list_gene_pane_g

0x6220,	// (0x00071733) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6220,	// (0x00071733) sp_fs_action_menu_list_gene_pane_t1

0x6238,	// (0x0007174b) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6238,	// (0x0007174b) sp_fs_action_menu_list_gene_pane

0x0ddb,	// (0x0006c2ee) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x0ddb,	// (0x0006c2ee) popup_sp_fs_action_menu_bg_pane

0x6259,	// (0x0007176c) sp_fs_action_menu_list_pane_ParamLimits

0x6259,	// (0x0007176c) sp_fs_action_menu_list_pane

0x627b,	// (0x0007178e) sp_fs_scroll_pane_cp01_ParamLimits

0x627b,	// (0x0007178e) sp_fs_scroll_pane_cp01

0x2604,	// (0x0006db17) list_medium_line_plain_t2_t1

0x2604,	// (0x0006db17) list_medium_line_plain_t2_t2

0x0001,

0xfbfe,	// (0x0007b111) list_medium_line_plain_t2_t

0x2604,	// (0x0006db17) list_medium_line_plain_t3_t1

0x2604,	// (0x0006db17) list_medium_line_plain_t3_t2

0x2604,	// (0x0006db17) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x0007a78f) list_medium_line_plain_t3_t

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g2_g1

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x0007a6cf) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x0007a6cf) list_medium_line_x2_t2_g2_g

0x1e20,	// (0x0006d333) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t2_g2_t1

0x1e20,	// (0x0006d333) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t2_g2_t2

0x0001,

0xf231,	// (0x0007a744) list_medium_line_x2_t2_g2_t_ParamLimits

0xf231,	// (0x0007a744) list_medium_line_x2_t2_g2_t

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t4_g2_g1

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x0007a6cf) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x0007a6cf) list_medium_line_x2_t4_g2_g

0x1e20,	// (0x0006d333) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t4_g2_t1

0x1e20,	// (0x0006d333) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t4_g2_t2

0x1e20,	// (0x0006d333) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t4_g2_t3

0x1e20,	// (0x0006d333) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x0007a6dd) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x0007a6dd) list_medium_line_x2_t4_g2_t

0x1e16,	// (0x0006d329) list_medium_line_t3_right_iconx2_g1

0x1e16,	// (0x0006d329) list_medium_line_t3_right_iconx2_g2

0x1e16,	// (0x0006d329) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf398,	// (0x0007a8ab) list_medium_line_t3_right_iconx2_g

0x2604,	// (0x0006db17) list_medium_line_t3_right_iconx2_t1

0x2604,	// (0x0006db17) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbfe,	// (0x0007b111) list_medium_line_t3_right_iconx2_t

0x1dca,	// (0x0006d2dd) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x3_t4_g4_g1

0x1dca,	// (0x0006d2dd) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x3_t4_g4_g2

0x1dca,	// (0x0006d2dd) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x3_t4_g4_g3

0x1dca,	// (0x0006d2dd) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x0007a6d4) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x0007a6d4) list_medium_line_x3_t4_g4_g

0x1e20,	// (0x0006d333) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x3_t4_g4_t1

0x1e20,	// (0x0006d333) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x3_t4_g4_t2

0x1e20,	// (0x0006d333) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x3_t4_g4_t3

0x1e20,	// (0x0006d333) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x0007a6dd) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x0007a6dd) list_medium_line_x3_t4_g4_t

0x62a1,	// (0x000717b4) list_single_dyc_row_text_pane_t1_ParamLimits

0x62a1,	// (0x000717b4) list_single_dyc_row_text_pane_t1

0x62d8,	// (0x000717eb) list_single_dyc_row_text_pane_t2_ParamLimits

0x62d8,	// (0x000717eb) list_single_dyc_row_text_pane_t2

0x634e,	// (0x00071861) list_single_dyc_row_text_pane_t3_ParamLimits

0x634e,	// (0x00071861) list_single_dyc_row_text_pane_t3

0x0005,

0xfc16,	// (0x0007b129) list_single_dyc_row_text_pane_t_ParamLimits

0xfc16,	// (0x0007b129) list_single_dyc_row_text_pane_t

0x641f,	// (0x00071932) list_single_dyc_row_pane_g1_ParamLimits

0x641f,	// (0x00071932) list_single_dyc_row_pane_g1

0x642b,	// (0x0007193e) list_single_dyc_row_pane_g2_ParamLimits

0x642b,	// (0x0007193e) list_single_dyc_row_pane_g2

0x6437,	// (0x0007194a) list_single_dyc_row_pane_g3_ParamLimits

0x6437,	// (0x0007194a) list_single_dyc_row_pane_g3

0x6443,	// (0x00071956) list_single_dyc_row_pane_g4_ParamLimits

0x6443,	// (0x00071956) list_single_dyc_row_pane_g4

0x0003,

0xfc23,	// (0x0007b136) list_single_dyc_row_pane_g_ParamLimits

0xfc23,	// (0x0007b136) list_single_dyc_row_pane_g

0x644f,	// (0x00071962) list_single_dyc_row_text_pane_ParamLimits

0x644f,	// (0x00071962) list_single_dyc_row_text_pane

0x16c9,	// (0x0006cbdc) bg_sp_fs_scroll_pane

0x0de9,	// (0x0006c2fc) thumb_sp_fs_scroll_pane

0x1dca,	// (0x0006d2dd) list_medium_line_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_g1

0x1e20,	// (0x0006d333) list_medium_line_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t1

0x1dca,	// (0x0006d2dd) list_medium_line_x2_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_g1

0x1dca,	// (0x0006d2dd) list_medium_line_x2_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x0007a6cf) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x0007a6cf) list_medium_line_x2_g

0x1e20,	// (0x0006d333) list_medium_line_x2_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t1

0x1dca,	// (0x0006d2dd) list_medium_line_x3_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x3_g1

0x0298,	// (0x0006b7ab) list_medium_line_x3_g2_ParamLimits

0x0298,	// (0x0006b7ab) list_medium_line_x3_g2

0x0001,

0xfc2c,	// (0x0007b13f) list_medium_line_x3_g_ParamLimits

0xfc2c,	// (0x0007b13f) list_medium_line_x3_g

0x0df2,	// (0x0006c305) list_medium_line_x3_t1_ParamLimits

0x0df2,	// (0x0006c305) list_medium_line_x3_t1

0x0e06,	// (0x0006c319) thumb_sp_fs_scroll_pane_g1

0x0e0f,	// (0x0006c322) thumb_sp_fs_scroll_pane_g2

0x0e18,	// (0x0006c32b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc31,	// (0x0007b144) thumb_sp_fs_scroll_pane_g

0x0e06,	// (0x0006c319) bg_sp_fs_scroll_pane_g1

0x0e0f,	// (0x0006c322) bg_sp_fs_scroll_pane_g2

0x0e18,	// (0x0006c32b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc31,	// (0x0007b144) bg_sp_fs_scroll_pane_g

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g4_g1

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g4_g2

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g4_g3

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x0007a6d4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x0007a6d4) list_medium_line_x2_t3_g4_g

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g4_t1

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g4_t2

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x0007a6c8) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x0007a6c8) list_medium_line_x2_t3_g4_t

0x1dca,	// (0x0006d2dd) list_medium_line_g2_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_g2_g1

0x1dca,	// (0x0006d2dd) list_medium_line_g2_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x0007a6cf) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x0007a6cf) list_medium_line_g2_g

0x1e20,	// (0x0006d333) list_medium_line_g2_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_g2_t1

0x1dca,	// (0x0006d2dd) list_medium_line_t3_g2_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_t3_g2_g1

0x1dca,	// (0x0006d2dd) list_medium_line_t3_g2_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x0007a6cf) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x0007a6cf) list_medium_line_t3_g2_g

0x1e20,	// (0x0006d333) list_medium_line_t3_g2_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t3_g2_t1

0x1e20,	// (0x0006d333) list_medium_line_t3_g2_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t3_g2_t2

0x1e20,	// (0x0006d333) list_medium_line_t3_g2_t3_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x0007a6c8) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x0007a6c8) list_medium_line_t3_g2_t

0x1e16,	// (0x0006d329) list_medium_line_right_icon_g1

0x2604,	// (0x0006db17) list_medium_line_right_icon_t1

0x1dca,	// (0x0006d2dd) list_medium_line_t2_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_t2_g1

0x1e20,	// (0x0006d333) list_medium_line_t2_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t2_t1

0x1e20,	// (0x0006d333) list_medium_line_t2_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t2_t2

0x0001,

0xf231,	// (0x0007a744) list_medium_line_t2_t_ParamLimits

0xf231,	// (0x0007a744) list_medium_line_t2_t

0x1dca,	// (0x0006d2dd) list_medium_line_t3_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_t3_g1

0x1e20,	// (0x0006d333) list_medium_line_t3_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t3_t1

0x1e20,	// (0x0006d333) list_medium_line_t3_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t3_t2

0x1e20,	// (0x0006d333) list_medium_line_t3_t3_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x0007a6c8) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x0007a6c8) list_medium_line_t3_t

0x1dca,	// (0x0006d2dd) list_medium_line_g3_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_g3_g1

0x1dca,	// (0x0006d2dd) list_medium_line_g3_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_g3_g2

0x1dca,	// (0x0006d2dd) list_medium_line_g3_g3_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x0007a6c1) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x0007a6c1) list_medium_line_g3_g

0x1e20,	// (0x0006d333) list_medium_line_g3_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_g3_t1

0x1dca,	// (0x0006d2dd) list_medium_line_t2_g3_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_t2_g3_g1

0x1dca,	// (0x0006d2dd) list_medium_line_t2_g3_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_t2_g3_g2

0x1dca,	// (0x0006d2dd) list_medium_line_t2_g3_g3_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x0007a6c1) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x0007a6c1) list_medium_line_t2_g3_g

0x1e20,	// (0x0006d333) list_medium_line_t2_g3_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t2_g3_t1

0x1e20,	// (0x0006d333) list_medium_line_t2_g3_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t2_g3_t2

0x0001,

0xf231,	// (0x0007a744) list_medium_line_t2_g3_t_ParamLimits

0xf231,	// (0x0007a744) list_medium_line_t2_g3_t

0x1dca,	// (0x0006d2dd) list_medium_line_t3_g3_g1_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_t3_g3_g1

0x1dca,	// (0x0006d2dd) list_medium_line_t3_g3_g2_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_t3_g3_g2

0x1dca,	// (0x0006d2dd) list_medium_line_t3_g3_g3_ParamLimits

0x1dca,	// (0x0006d2dd) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x0007a6c1) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x0007a6c1) list_medium_line_t3_g3_g

0x1e20,	// (0x0006d333) list_medium_line_t3_g3_t1_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t3_g3_t1

0x1e20,	// (0x0006d333) list_medium_line_t3_g3_t2_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t3_g3_t2

0x1e20,	// (0x0006d333) list_medium_line_t3_g3_t3_ParamLimits

0x1e20,	// (0x0006d333) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x0007a6c8) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x0007a6c8) list_medium_line_t3_g3_t

0x1e16,	// (0x0006d329) list_medium_line_right_iconx2_g1

0x1e16,	// (0x0006d329) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x0007a5c2) list_medium_line_right_iconx2_g

0x2604,	// (0x0006db17) list_medium_line_right_iconx2_t1

0x1e16,	// (0x0006d329) list_medium_line_t2_right_iconx2_g1

0x1e16,	// (0x0006d329) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x0007a5c2) list_medium_line_t2_right_iconx2_g

0x2604,	// (0x0006db17) list_medium_line_t2_right_iconx2_t1

0x2604,	// (0x0006db17) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbfe,	// (0x0007b111) list_medium_line_t2_right_iconx2_t

0x2604,	// (0x0006db17) list_medium_line_x4_t4_t1

0x2604,	// (0x0006db17) list_medium_line_x4_t4_t2

0x2604,	// (0x0006db17) list_medium_line_x4_t4_t3

0x2604,	// (0x0006db17) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x0007a796) list_medium_line_x4_t4_t

0xcb4a,	// (0x0007805d) tport_appsw_pane_ParamLimits

0xcb4a,	// (0x0007805d) tport_appsw_pane

0xcb58,	// (0x0007806b) tport_contact_pane_ParamLimits

0xcb58,	// (0x0007806b) tport_contact_pane

0xcb68,	// (0x0007807b) tport_listscroll_pane_ParamLimits

0xcb68,	// (0x0007807b) tport_listscroll_pane

0xcb78,	// (0x0007808b) cell_tport_appsw_pane_ParamLimits

0xcb78,	// (0x0007808b) cell_tport_appsw_pane

0x1dd8,	// (0x0006d2eb) tport_appsw_pane_g1_ParamLimits

0x1dd8,	// (0x0006d2eb) tport_appsw_pane_g1

0x0e21,	// (0x0006c334) tport_contact_pane_g1

0x081d,	// (0x0006bd30) tport_contact_pane_t1

0x0e2a,	// (0x0006c33d) tport_contact_pane_t2

0x0001,

0xfc38,	// (0x0007b14b) tport_contact_pane_t

0x0e38,	// (0x0006c34b) list_tport_pane

0x0e41,	// (0x0006c354) scroll_pane_cp_030

0xcbab,	// (0x000780be) cell_tport_appsw_pane_g1

0xcbbb,	// (0x000780ce) cell_tport_appsw_pane_t1

0xcbc9,	// (0x000780dc) grid_highlight_pane_cp019

0xcbd1,	// (0x000780e4) list_tport_double_graphic_pane_ParamLimits

0xcbd1,	// (0x000780e4) list_tport_double_graphic_pane

0x1d63,	// (0x0006d276) list_highlight_pane_cp023_ParamLimits

0x1d63,	// (0x0006d276) list_highlight_pane_cp023

0xcbe2,	// (0x000780f5) list_tport_double_graphic_pane_g1_ParamLimits

0xcbe2,	// (0x000780f5) list_tport_double_graphic_pane_g1

0xcbef,	// (0x00078102) list_tport_double_graphic_pane_t1_ParamLimits

0xcbef,	// (0x00078102) list_tport_double_graphic_pane_t1

0xcc04,	// (0x00078117) list_tport_double_graphic_pane_t2_ParamLimits

0xcc04,	// (0x00078117) list_tport_double_graphic_pane_t2

0x0001,

0xfc44,	// (0x0007b157) list_tport_double_graphic_pane_t_ParamLimits

0xfc44,	// (0x0007b157) list_tport_double_graphic_pane_t

0x16c9,	// (0x0006cbdc) main_cale_note_pane

0xb0c7,	// (0x000765da) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb0c7,	// (0x000765da) cell_vitu2_function_top_wide_pane_cp01

0xc838,	// (0x00077d4b) wait_bar_pane_cp05_ParamLimits

0x1d63,	// (0x0006d276) listscroll_cmail_pane

0x0e52,	// (0x0006c365) list_cmail_pane

0xcc16,	// (0x00078129) list_cmail_body_pane

0xcc3d,	// (0x00078150) list_single_cmail_header_caption_pane

0xcc66,	// (0x00078179) list_single_cmail_header_detail_pane_ParamLimits

0xcc66,	// (0x00078179) list_single_cmail_header_detail_pane

0x0e69,	// (0x0006c37c) list_single_cmail_header_caption_pane_t1

0x646e,	// (0x00071981) list_single_cmail_header_detail_pane_g1_ParamLimits

0x646e,	// (0x00071981) list_single_cmail_header_detail_pane_g1

0xcca0,	// (0x000781b3) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcca0,	// (0x000781b3) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc49,	// (0x0007b15c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc49,	// (0x0007b15c) list_single_cmail_header_detail_pane_g

0x6484,	// (0x00071997) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6484,	// (0x00071997) list_single_cmail_header_detail_pane_t1

0x64e4,	// (0x000719f7) list_single_cmail_header_editor_pane_bg_ParamLimits

0x64e4,	// (0x000719f7) list_single_cmail_header_editor_pane_bg

0x097a,	// (0x0006be8d) list_cmail_body_pane_g1

0x0e8d,	// (0x0006c3a0) list_cmail_body_pane_t1

0xe901,	// (0x00079e14) list_single_cmail_header_editor_pane_bg_g1

0x2266,	// (0x0006d779) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe911,	// (0x00079e24) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe909,	// (0x00079e1c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xeb70,	// (0x0007a083) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe931,	// (0x00079e44) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe921,	// (0x00079e34) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe929,	// (0x00079e3c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2246,	// (0x0006d759) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xccac,	// (0x000781bf) calenote_gesture_pane_ParamLimits

0xccac,	// (0x000781bf) calenote_gesture_pane

0xccc6,	// (0x000781d9) calenote_window_pane_ParamLimits

0xccc6,	// (0x000781d9) calenote_window_pane

0x0e9b,	// (0x0006c3ae) popup_note_window_cp01

0xccde,	// (0x000781f1) calenote_swipe_1_pane_ParamLimits

0xccde,	// (0x000781f1) calenote_swipe_1_pane

0xc9bb,	// (0x00077ece) calenote_swipe_2_pane_ParamLimits

0xc9bb,	// (0x00077ece) calenote_swipe_2_pane

0x0cc6,	// (0x0006c1d9) calenote_swipe_1_pane_g1_ParamLimits

0x0cc6,	// (0x0006c1d9) calenote_swipe_1_pane_g1

0x0ead,	// (0x0006c3c0) calenote_swipe_1_pane_g2_ParamLimits

0x0ead,	// (0x0006c3c0) calenote_swipe_1_pane_g2

0x0001,

0xfc55,	// (0x0007b168) calenote_swipe_1_pane_g_ParamLimits

0xfc55,	// (0x0007b168) calenote_swipe_1_pane_g

0x0eb9,	// (0x0006c3cc) calenote_swipe_1_pane_t1_ParamLimits

0x0eb9,	// (0x0006c3cc) calenote_swipe_1_pane_t1

0x0cc6,	// (0x0006c1d9) calenote_swipe_2_pane_g1_ParamLimits

0x0cc6,	// (0x0006c1d9) calenote_swipe_2_pane_g1

0x0ed8,	// (0x0006c3eb) calenote_swipe_2_pane_g2_ParamLimits

0x0ed8,	// (0x0006c3eb) calenote_swipe_2_pane_g2

0x0001,

0xfc5a,	// (0x0007b16d) calenote_swipe_2_pane_g_ParamLimits

0xfc5a,	// (0x0007b16d) calenote_swipe_2_pane_g

0x0ee4,	// (0x0006c3f7) calenote_swipe_2_pane_t1_ParamLimits

0x0ee4,	// (0x0006c3f7) calenote_swipe_2_pane_t1

0x16c9,	// (0x0006cbdc) main_mup_navstr_pane

0x9f7e,	// (0x00075491) main_mup3_pane_t7_ParamLimits

0x9f7e,	// (0x00075491) main_mup3_pane_t7

0xa7b5,	// (0x00075cc8) main_mp4_pane_g6_ParamLimits

0xa7b5,	// (0x00075cc8) main_mp4_pane_g6

0xab04,	// (0x00076017) main_image3_pane_t4_ParamLimits

0xab04,	// (0x00076017) main_image3_pane_t4

0xccf1,	// (0x00078204) popup_navstr_preview_pane_ParamLimits

0xccf1,	// (0x00078204) popup_navstr_preview_pane

0xccfd,	// (0x00078210) scroll_navstr_pane_ParamLimits

0xccfd,	// (0x00078210) scroll_navstr_pane

0x16c9,	// (0x0006cbdc) bg_popup_preview_window_pane_cp04

0x0f0b,	// (0x0006c41e) popup_navstr_preview_pane_t1

0xcd09,	// (0x0007821c) scroll_navstr_pane_g1_ParamLimits

0xcd09,	// (0x0007821c) scroll_navstr_pane_g1

0xcd16,	// (0x00078229) scroll_navstr_pane_t1_ParamLimits

0xcd16,	// (0x00078229) scroll_navstr_pane_t1

0x0ea4,	// (0x0006c3b7) bg_button_pane_cp014

0x0ea4,	// (0x0006c3b7) bg_button_pane_cp030

0x6197,	// (0x000716aa) list_double_fisheye_pane_g4_ParamLimits

0x6197,	// (0x000716aa) list_double_fisheye_pane_g4

0x61a3,	// (0x000716b6) list_double_fisheye_pane_g5_ParamLimits

0x61a3,	// (0x000716b6) list_double_fisheye_pane_g5

0xf034,	// (0x0007a547) sp_fs_scroll_pane_cp03

0x0d9b,	// (0x0006c2ae) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0da7,	// (0x0006c2ba) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc03,	// (0x0007b116) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xcab4,	// (0x00077fc7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0e61,	// (0x0006c374) sp_fs_scroll_pane_cp02

0x1f95,	// (0x0006d4a8) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1f95,	// (0x0006d4a8) popup_sp_fs_calendar_preview_list_single_pane

0x16c9,	// (0x0006cbdc) main_cam6_pano_pane

0x1d63,	// (0x0006d276) main_mup3_pane_ParamLimits

0x16c9,	// (0x0006cbdc) main_phacti_pane

0xc70d,	// (0x00077c20) bg_button_pane_cp11

0xc725,	// (0x00077c38) main_mobtv_info_pane_g2_ParamLimits

0xc725,	// (0x00077c38) main_mobtv_info_pane_g2

0x0001,

0xfb63,	// (0x0007b076) main_mobtv_info_pane_g_ParamLimits

0xfb63,	// (0x0007b076) main_mobtv_info_pane_g

0x1e34,	// (0x0006d347) sc_clock_pane_t5_ParamLimits

0x1e34,	// (0x0006d347) sc_clock_pane_t5

0x30af,	// (0x0006e5c2) main_radioblah_pane_g1_ParamLimits

0x30bd,	// (0x0006e5d0) main_radioblah_pane_t3_ParamLimits

0x30bd,	// (0x0006e5d0) main_radioblah_pane_t3

0x30bd,	// (0x0006e5d0) main_radioblah_pane_t4_ParamLimits

0x30bd,	// (0x0006e5d0) main_radioblah_pane_t4

0x1dbc,	// (0x0006d2cf) main_radioblah_text_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) main_radioblah_text_pane

0x0bbe,	// (0x0006c0d1) main_radioblah_info_pane_g1_ParamLimits

0x0c02,	// (0x0006c115) main_radioblah_info_pane_t4_ParamLimits

0x0c02,	// (0x0006c115) main_radioblah_info_pane_t4

0x1d63,	// (0x0006d276) main_sp_fs_calendar_pane

0xcd28,	// (0x0007823b) main_phacti_pane_g1

0xcd30,	// (0x00078243) phacti_note_pane_ParamLimits

0xcd30,	// (0x00078243) phacti_note_pane

0x0f22,	// (0x0006c435) phacti_term_pane_ParamLimits

0x0f22,	// (0x0006c435) phacti_term_pane

0x0f37,	// (0x0006c44a) phacti_note_pane_t1_ParamLimits

0x0f37,	// (0x0006c44a) phacti_note_pane_t1

0x64fb,	// (0x00071a0e) phacti_term_pane_g1

0x6503,	// (0x00071a16) phacti_term_pane_t1_ParamLimits

0x6503,	// (0x00071a16) phacti_term_pane_t1

0x0f4e,	// (0x0006c461) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2034,	// (0x0006d547) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc64,	// (0x0007b177) popup_sp_fs_calendar_preview_list_single_pane_g

0x0f56,	// (0x0006c469) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0f56,	// (0x0006c469) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0f6c,	// (0x0006c47f) aid_popup_sp_fs_bg_corner_pane

0x1e16,	// (0x0006d329) popup_sp_fs_calendar_preview_bg_pane_g1

0x16c9,	// (0x0006cbdc) popup_sp_fs_calendar_preview_bg_pane

0x0f74,	// (0x0006c487) popup_sp_fs_calendar_preview_list_pane

0x30d1,	// (0x0006e5e4) bg_main_sp_fs_cale_pane_ParamLimits

0x30d1,	// (0x0006e5e4) bg_main_sp_fs_cale_pane

0x6536,	// (0x00071a49) listscroll_cale_mrui_pane_ParamLimits

0x6536,	// (0x00071a49) listscroll_cale_mrui_pane

0x654b,	// (0x00071a5e) listscroll_sp_fs_schedule_track_pane

0x6554,	// (0x00071a67) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x6554,	// (0x00071a67) main_sp_fs_ctrlbar_pane_cp01

0x0f7c,	// (0x0006c48f) main_sp_fs_ribbon_pane

0x6567,	// (0x00071a7a) popup_sp_fs_cale_preview_window

0xcd93,	// (0x000782a6) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcd93,	// (0x000782a6) list_single_sp_fs_schedule_track_pane

0x1dbc,	// (0x0006d2cf) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1dbc,	// (0x0006d2cf) bg_sp_fs_highlight_list_pane_cp03

0xcdb3,	// (0x000782c6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcdb3,	// (0x000782c6) list_single_sp_fs_schedule_track_pane_g1

0xcdbf,	// (0x000782d2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcdbf,	// (0x000782d2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc69,	// (0x0007b17c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc69,	// (0x0007b17c) list_single_sp_fs_schedule_track_pane_g

0xcdcb,	// (0x000782de) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcdcb,	// (0x000782de) list_single_sp_fs_schedule_track_pane_t1

0xcde3,	// (0x000782f6) sp_fs_schedule_track_pane_ParamLimits

0xcde3,	// (0x000782f6) sp_fs_schedule_track_pane

0x0f84,	// (0x0006c497) sp_fs_schedule_track_pane_g1

0x0f8c,	// (0x0006c49f) sp_fs_schedule_track_pane_g2

0x0f94,	// (0x0006c4a7) sp_fs_schedule_track_pane_g3

0x0f9c,	// (0x0006c4af) sp_fs_schedule_track_pane_g4

0x0fa4,	// (0x0006c4b7) sp_fs_schedule_track_pane_g5

0x0004,

0xfc6e,	// (0x0007b181) sp_fs_schedule_track_pane_g

0xe901,	// (0x00079e14) bg_sp_fs_schedule_viewer_highlight_g1

0x2266,	// (0x0006d779) bg_sp_fs_schedule_viewer_highlight_g2

0xe909,	// (0x00079e1c) bg_sp_fs_schedule_viewer_highlight_g3

0xe911,	// (0x00079e24) bg_sp_fs_schedule_viewer_highlight_g4

0xeb70,	// (0x0007a083) bg_sp_fs_schedule_viewer_highlight_g5

0xe921,	// (0x00079e34) bg_sp_fs_schedule_viewer_highlight_g6

0xe929,	// (0x00079e3c) bg_sp_fs_schedule_viewer_highlight_g7

0xe931,	// (0x00079e44) bg_sp_fs_schedule_viewer_highlight_g8

0x2246,	// (0x0006d759) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc79,	// (0x0007b18c) bg_sp_fs_schedule_viewer_highlight_g

0x16c9,	// (0x0006cbdc) bg_main_sp_fs_ribbon_pane

0xcdf3,	// (0x00078306) main_sp_fs_ribbon_pane_g1

0x0fac,	// (0x0006c4bf) main_sp_fs_ribbon_pane_t1

0xcdfc,	// (0x0007830f) main_sp_fs_ribbon_pane_t2

0x0fbb,	// (0x0006c4ce) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc8c,	// (0x0007b19f) main_sp_fs_ribbon_pane_t

0x0fca,	// (0x0006c4dd) main_sp_fs_ribbon_scheduler_pane

0x0fd2,	// (0x0006c4e5) bg_main_sp_fs_ribbon_pane_g1

0x0fdb,	// (0x0006c4ee) bg_main_sp_fs_ribbon_pane_g2

0x0fe4,	// (0x0006c4f7) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc93,	// (0x0007b1a6) bg_main_sp_fs_ribbon_pane_g

0x0fec,	// (0x0006c4ff) main_sp_fs_ribbon_scheduler_pane_g1

0x0ff5,	// (0x0006c508) main_sp_fs_ribbon_scheduler_pane_g2

0x0ffe,	// (0x0006c511) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc9a,	// (0x0007b1ad) main_sp_fs_ribbon_scheduler_pane_g

0x1007,	// (0x0006c51a) list_cale_mrui_pane

0xce0b,	// (0x0007831e) sp_fs_scroll_pane_cp07_ParamLimits

0xce0b,	// (0x0007831e) sp_fs_scroll_pane_cp07

0xce27,	// (0x0007833a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xce27,	// (0x0007833a) bg_sp_fs_schedule_viewer_highlight

0x1014,	// (0x0006c527) list_single_sp_fs_schedule_track_pane_cp01

0x101c,	// (0x0006c52f) list_sp_fs_schedule_track_pane

0x1024,	// (0x0006c537) sp_fs_scroll_pane_cp06_ParamLimits

0x1024,	// (0x0006c537) sp_fs_scroll_pane_cp06

0x1e16,	// (0x0006d329) bgmain_sp_fs_calendar_pane_g1

0x6579,	// (0x00071a8c) list_single_cale_mrui_pane_ParamLimits

0x6579,	// (0x00071a8c) list_single_cale_mrui_pane

0x65a3,	// (0x00071ab6) list_single_cale_mrui_row_pane_ParamLimits

0x65a3,	// (0x00071ab6) list_single_cale_mrui_row_pane

0x65b0,	// (0x00071ac3) list_single_cale_mrui_row_pane_g1_ParamLimits

0x65b0,	// (0x00071ac3) list_single_cale_mrui_row_pane_g1

0x65e8,	// (0x00071afb) list_single_cale_mrui_row_pane_t1_ParamLimits

0x65e8,	// (0x00071afb) list_single_cale_mrui_row_pane_t1

0x65fa,	// (0x00071b0d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x65fa,	// (0x00071b0d) list_single_cale_mrui_row_pane_t2

0x6660,	// (0x00071b73) list_single_cale_mrui_row_pane_t3_ParamLimits

0x6660,	// (0x00071b73) list_single_cale_mrui_row_pane_t3

0x668f,	// (0x00071ba2) list_single_cale_mrui_row_pane_t4_ParamLimits

0x668f,	// (0x00071ba2) list_single_cale_mrui_row_pane_t4

0x0003,

0xfca8,	// (0x0007b1bb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfca8,	// (0x0007b1bb) list_single_cale_mrui_row_pane_t

0x66be,	// (0x00071bd1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x66be,	// (0x00071bd1) list_single_cmail_header_editor_pane_bg_cp01

0x66e6,	// (0x00071bf9) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x66e6,	// (0x00071bf9) list_single_cmail_header_editor_pane_bg_cp02

0x1043,	// (0x0006c556) main_radioblah_text_pane_t1_ParamLimits

0x1043,	// (0x0006c556) main_radioblah_text_pane_t1

0x105d,	// (0x0006c570) cam6_indi_pane_cp01

0x1065,	// (0x0006c578) cam6_mode_pane_cp01

0x106d,	// (0x0006c580) cam6_pano_pane

0x1076,	// (0x0006c589) cam6_zoom_pane_cp01

0x107e,	// (0x0006c591) cam6_pano_image_pane

0x1089,	// (0x0006c59c) cam6_pano_pane_g1

0x097a,	// (0x0006be8d) cam6_pano_pane_g2

0x1092,	// (0x0006c5a5) cam6_pano_pane_g3

0x109b,	// (0x0006c5ae) cam6_pano_pane_g4

0x4caa,	// (0x000701bd) cam6_pano_pane_g5

0x10a4,	// (0x0006c5b7) cam6_pano_pane_g6

0xeb9b,	// (0x0007a0ae) cam6_pano_pane_g7

0x10ae,	// (0x0006c5c1) cam6_pano_pane_g8

0x10b7,	// (0x0006c5ca) cam6_pano_pane_g9

0x0008,

0xfcb1,	// (0x0007b1c4) cam6_pano_pane_g

0x16c9,	// (0x0006cbdc) main_browser_tag_pane

0x0f03,	// (0x0006c416) grid_navstr_albumart_pane

0x10c2,	// (0x0006c5d5) cell_navstr_albumart_pane_ParamLimits

0x10c2,	// (0x0006c5d5) cell_navstr_albumart_pane

0x10e2,	// (0x0006c5f5) cell_navstr_albumart_pane_g1

0x416e,	// (0x0006f681) cell_navstr_albumart_pane_g2

0x417e,	// (0x0006f691) cell_navstr_albumart_pane_g3

0x4176,	// (0x0006f689) cell_navstr_albumart_pane_g4

0x0003,

0xfcc4,	// (0x0007b1d7) cell_navstr_albumart_pane_g

0xce34,	// (0x00078347) bt_list_pane_ParamLimits

0xce34,	// (0x00078347) bt_list_pane

0xce54,	// (0x00078367) bt_list_pane_t1

0xce63,	// (0x00078376) bt_list_pane_t2

0x0001,

0xfccd,	// (0x0007b1e0) bt_list_pane_t

0x16c9,	// (0x0006cbdc) main_cale_prevew_pane

0xce72,	// (0x00078385) popup_cale_preview_window_ParamLimits

0xce72,	// (0x00078385) popup_cale_preview_window

0x1d63,	// (0x0006d276) bg_popup_preview_window_pane_cp05_ParamLimits

0x1d63,	// (0x0006d276) bg_popup_preview_window_pane_cp05

0x10ea,	// (0x0006c5fd) list_cale_preview_pane_ParamLimits

0x10ea,	// (0x0006c5fd) list_cale_preview_pane

0xce8b,	// (0x0007839e) list_double_cale_preview_pane_ParamLimits

0xce8b,	// (0x0007839e) list_double_cale_preview_pane

0xce9d,	// (0x000783b0) list_single_cale_preview_pane_ParamLimits

0xce9d,	// (0x000783b0) list_single_cale_preview_pane

0xceb3,	// (0x000783c6) list_single_cale_preview_pane_g1

0xcebb,	// (0x000783ce) list_single_cale_preview_pane_t1_ParamLimits

0xcebb,	// (0x000783ce) list_single_cale_preview_pane_t1

0xced0,	// (0x000783e3) list_double_cale_preview_pane_g1

0xced8,	// (0x000783eb) list_double_cale_preview_pane_t1_ParamLimits

0xced8,	// (0x000783eb) list_double_cale_preview_pane_t1

0xceed,	// (0x00078400) list_double_cale_preview_pane_t2_ParamLimits

0xceed,	// (0x00078400) list_double_cale_preview_pane_t2

0x0001,

0xfcd2,	// (0x0007b1e5) list_double_cale_preview_pane_t_ParamLimits

0xfcd2,	// (0x0007b1e5) list_double_cale_preview_pane_t

0x16c9,	// (0x0006cbdc) main_ezdial_pane

0x1d63,	// (0x0006d276) main_sp_fs_email_pane_ParamLimits

0xca19,	// (0x00077f2c) cmail_ddmenu_btn01_pane_ParamLimits

0xca19,	// (0x00077f2c) cmail_ddmenu_btn01_pane

0xca36,	// (0x00077f49) cmail_ddmenu_btn02_pane_ParamLimits

0xca36,	// (0x00077f49) cmail_ddmenu_btn02_pane

0xca54,	// (0x00077f67) cmail_ddmenu_btn03_pane_ParamLimits

0xca54,	// (0x00077f67) cmail_ddmenu_btn03_pane

0xcaef,	// (0x00078002) main_sp_fs_ctrlbar_pane_ParamLimits

0xcb05,	// (0x00078018) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcc16,	// (0x00078129) list_cmail_body_pane_ParamLimits

0x0e77,	// (0x0006c38a) bg_button_pane_cp12

0x0e80,	// (0x0006c393) list_single_cmail_header_detail_pane_g3_ParamLimits

0x0e80,	// (0x0006c393) list_single_cmail_header_detail_pane_g3

0x64c0,	// (0x000719d3) list_single_cmail_header_detail_pane_t2_ParamLimits

0x64c0,	// (0x000719d3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc50,	// (0x0007b163) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc50,	// (0x0007b163) list_single_cmail_header_detail_pane_t

0x6518,	// (0x00071a2b) phacti_term_pane_t2_ParamLimits

0x6518,	// (0x00071a2b) phacti_term_pane_t2

0x0001,

0xfc5f,	// (0x0007b172) phacti_term_pane_t_ParamLimits

0xfc5f,	// (0x0007b172) phacti_term_pane_t

0x10f6,	// (0x0006c609) aid_size_list_single_double

0xcf05,	// (0x00078418) popup_ezdial_listscroll_window

0x1102,	// (0x0006c615) popup_number_entry_window_cp01

0x204d,	// (0x0006d560) bg_popup_call_pane_cp09

0x110f,	// (0x0006c622) ezdial_list_pane

0x1117,	// (0x0006c62a) scroll_pane_cp23

0x4270,	// (0x0006f783) bg_button_pane_cp028_ParamLimits

0x4270,	// (0x0006f783) bg_button_pane_cp028

0xcf1e,	// (0x00078431) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcf1e,	// (0x00078431) cmail_ddmenu_btn01_pane_g1

0xcf2e,	// (0x00078441) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcf2e,	// (0x00078441) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcd7,	// (0x0007b1ea) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcd7,	// (0x0007b1ea) cmail_ddmenu_btn01_pane_g

0x111f,	// (0x0006c632) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x111f,	// (0x0006c632) cmail_ddmenu_btn01_pane_t1

0x30d1,	// (0x0006e5e4) bg_button_pane_cp029_ParamLimits

0x30d1,	// (0x0006e5e4) bg_button_pane_cp029

0xcf3a,	// (0x0007844d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcf3a,	// (0x0007844d) cmail_ddmenu_btn02_pane_g1

0xcf52,	// (0x00078465) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcf52,	// (0x00078465) cmail_ddmenu_btn02_pane_t1

0x1dbc,	// (0x0006d2cf) bg_button_pane_cp031_ParamLimits

0x1dbc,	// (0x0006d2cf) bg_button_pane_cp031

0xcf3a,	// (0x0007844d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcf3a,	// (0x0007844d) cmail_ddmenu_btn03_pane_g1

0xcf52,	// (0x00078465) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcf52,	// (0x00078465) cmail_ddmenu_btn03_pane_t1

0x1e20,	// (0x0006d333) cell_dialer2_keypad_pane_t1_ParamLimits

0x4cd8,	// (0x000701eb) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x4cd8,	// (0x000701eb) cell_dialer2_keypad_pane_t1_copy1

0xc54e,	// (0x00077a61) ncimui_group_button_pane

0x1d63,	// (0x0006d276) main_sp_fs_calendar_pane_ParamLimits

0xcc3d,	// (0x00078150) list_single_cmail_header_caption_pane_ParamLimits

0x652d,	// (0x00071a40) aid_recal_txt_sm_pane

0x16c9,	// (0x0006cbdc) mian_recal_day_pane

0x6567,	// (0x00071a7a) popup_sp_fs_cale_preview_window_ParamLimits

0x1135,	// (0x0006c648) list_recal_day_pane

0x671d,	// (0x00071c30) list_single_recal_day_pane_ParamLimits

0x671d,	// (0x00071c30) list_single_recal_day_pane

0x115c,	// (0x0006c66f) list_single_recal_day_pane_g1_ParamLimits

0x115c,	// (0x0006c66f) list_single_recal_day_pane_g1

0x672f,	// (0x00071c42) list_single_recal_day_pane_g2_ParamLimits

0x672f,	// (0x00071c42) list_single_recal_day_pane_g2

0x673b,	// (0x00071c4e) list_single_recal_day_pane_g3_ParamLimits

0x673b,	// (0x00071c4e) list_single_recal_day_pane_g3

0x6747,	// (0x00071c5a) list_single_recal_day_pane_g4_ParamLimits

0x6747,	// (0x00071c5a) list_single_recal_day_pane_g4

0x6755,	// (0x00071c68) list_single_recal_day_pane_g5_ParamLimits

0x6755,	// (0x00071c68) list_single_recal_day_pane_g5

0x676b,	// (0x00071c7e) list_single_recal_day_pane_g6_ParamLimits

0x676b,	// (0x00071c7e) list_single_recal_day_pane_g6

0x0004,

0xfce6,	// (0x0007b1f9) list_single_recal_day_pane_g_ParamLimits

0xfce6,	// (0x0007b1f9) list_single_recal_day_pane_g

0x677f,	// (0x00071c92) list_single_recal_day_pane_t1

0x6791,	// (0x00071ca4) list_single_recal_day_pane_t2

0x0001,

0xfcf1,	// (0x0007b204) list_single_recal_day_pane_t

0xcf76,	// (0x00078489) ncimui_query_button_pane_ParamLimits

0xcf76,	// (0x00078489) ncimui_query_button_pane

0xcf86,	// (0x00078499) ncimui_query_button_pane_t1_ParamLimits

0xcf86,	// (0x00078499) ncimui_query_button_pane_t1

0x1168,	// (0x0006c67b) ncimui_query_button_pane_t2_ParamLimits

0x1168,	// (0x0006c67b) ncimui_query_button_pane_t2

0x0001,

0xfcf6,	// (0x0007b209) ncimui_query_button_pane_t_ParamLimits

0xfcf6,	// (0x0007b209) ncimui_query_button_pane_t

0xcf99,	// (0x000784ac) query_button_pane_ParamLimits

0xcf99,	// (0x000784ac) query_button_pane

0x16c9,	// (0x0006cbdc) bg_button_pane_cp0028

0x117b,	// (0x0006c68e) query_button_pane_t1

0x9537,	// (0x00074a4a) main_tport_pane_ParamLimits

0xcb20,	// (0x00078033) bg_popup_window_pane_cp01_ParamLimits

0xcb20,	// (0x00078033) bg_popup_window_pane_cp01

0xcb2e,	// (0x00078041) heading_pane_cp08_ParamLimits

0xcb2e,	// (0x00078041) heading_pane_cp08

0xcb3c,	// (0x0007804f) heading_pane_cp07_ParamLimits

0xcb3c,	// (0x0007804f) heading_pane_cp07

0xcbab,	// (0x000780be) cell_tport_appsw_pane_g2

0x0002,

0xfc3d,	// (0x0007b150) cell_tport_appsw_pane_g

0x5c8d,	// (0x000711a0) input_candi_list_open_g1

0x2431,	// (0x0006d944) list_cale_time_pane_g6_ParamLimits

0x2431,	// (0x0006d944) list_cale_time_pane_g6

0x99c4,	// (0x00074ed7) aid_size_touch_calib_1_ParamLimits

0x99c4,	// (0x00074ed7) aid_size_touch_calib_1

0x99d0,	// (0x00074ee3) aid_size_touch_calib_2_ParamLimits

0x99d0,	// (0x00074ee3) aid_size_touch_calib_2

0x99de,	// (0x00074ef1) aid_size_touch_calib_3_ParamLimits

0x99de,	// (0x00074ef1) aid_size_touch_calib_3

0x99ee,	// (0x00074f01) aid_size_touch_calib_4_ParamLimits

0x99ee,	// (0x00074f01) aid_size_touch_calib_4

0x99fc,	// (0x00074f0f) main_touch_calib_button_group_pane_ParamLimits

0x99fc,	// (0x00074f0f) main_touch_calib_button_group_pane

0x9a0a,	// (0x00074f1d) main_touch_calib_pane_g1_ParamLimits

0x9a16,	// (0x00074f29) main_touch_calib_pane_g2_ParamLimits

0x9a22,	// (0x00074f35) main_touch_calib_pane_g3_ParamLimits

0x9a2e,	// (0x00074f41) main_touch_calib_pane_g4_ParamLimits

0xf689,	// (0x0007ab9c) main_touch_calib_pane_g_ParamLimits

0x9a3a,	// (0x00074f4d) main_touch_calib_pane_t1_ParamLimits

0x9a53,	// (0x00074f66) main_touch_calib_pane_t2_ParamLimits

0x9a6c,	// (0x00074f7f) main_touch_calib_pane_t3_ParamLimits

0x9a82,	// (0x00074f95) main_touch_calib_pane_t4_ParamLimits

0x9a98,	// (0x00074fab) main_touch_calib_pane_t5_ParamLimits

0xf692,	// (0x0007aba5) main_touch_calib_pane_t_ParamLimits

0x4a75,	// (0x0006ff88) list_single_fp_cale_pane_g3_ParamLimits

0x4a75,	// (0x0006ff88) list_single_fp_cale_pane_g3

0x1d63,	// (0x0006d276) bg_button_pane_cp012_ParamLimits

0x1d63,	// (0x0006d276) bg_vkb2_func_pane_cp03_ParamLimits

0xb7fe,	// (0x00076d11) cell_vitu2_function_top_pane_g1_ParamLimits

0x1d63,	// (0x0006d276) bg_vkb2_func_pane_cp04_ParamLimits

0xc4d6,	// (0x000779e9) main_ncimui_button_group_pane_ParamLimits

0xc4d6,	// (0x000779e9) main_ncimui_button_group_pane

0xc53c,	// (0x00077a4f) main_ncimui_pane_t3_ParamLimits

0xc53c,	// (0x00077a4f) main_ncimui_pane_t3

0x0f19,	// (0x0006c42c) phacti_button_group_pane

0x10f6,	// (0x0006c609) aid_size_list_single_double_ParamLimits

0xcf05,	// (0x00078418) popup_ezdial_listscroll_window_ParamLimits

0x1102,	// (0x0006c615) popup_number_entry_window_cp01_ParamLimits

0xcfa6,	// (0x000784b9) phacti_button_pane_ParamLimits

0xcfa6,	// (0x000784b9) phacti_button_pane

0x16c9,	// (0x0006cbdc) bg_button_pane_cp14

0x1189,	// (0x0006c69c) phacti_button_pane_t1

0xcfb7,	// (0x000784ca) main_touch_calib_button_pane_ParamLimits

0xcfb7,	// (0x000784ca) main_touch_calib_button_pane

0x1e74,	// (0x0006d387) bg_button_pane_cp18_ParamLimits

0x1e74,	// (0x0006d387) bg_button_pane_cp18

0x1197,	// (0x0006c6aa) main_touch_calib_button_pane_t1_ParamLimits

0x1197,	// (0x0006c6aa) main_touch_calib_button_pane_t1

0x11ad,	// (0x0006c6c0) main_touch_calib_button_pane_t2_ParamLimits

0x11ad,	// (0x0006c6c0) main_touch_calib_button_pane_t2

0x0001,

0xfcfb,	// (0x0007b20e) main_touch_calib_button_pane_t_ParamLimits

0xfcfb,	// (0x0007b20e) main_touch_calib_button_pane_t

0x16c9,	// (0x0006cbdc) cell_ncimui_button_pane

0x16c9,	// (0x0006cbdc) bg_button_pane_cp032

0x11cb,	// (0x0006c6de) cell_ncimui_button_pane_t1

0xaa25,	// (0x00075f38) image3_infobar_pane_ParamLimits

0xaa25,	// (0x00075f38) image3_infobar_pane

0xc87e,	// (0x00077d91) fs_bigclock_status_pane_ParamLimits

0xc87e,	// (0x00077d91) fs_bigclock_status_pane

0xc88b,	// (0x00077d9e) main_fs_bigclock_clock_pane_ParamLimits

0xc88b,	// (0x00077d9e) main_fs_bigclock_clock_pane

0xc89f,	// (0x00077db2) main_fs_bigclock_indi_pane_ParamLimits

0xc89f,	// (0x00077db2) main_fs_bigclock_indi_pane

0xc8c7,	// (0x00077dda) main_fs_bigclock_swipe_pane_ParamLimits

0xc8c7,	// (0x00077dda) main_fs_bigclock_swipe_pane

0x16c9,	// (0x0006cbdc) main_fs_clock_dumped_data

0x0a87,	// (0x0006bf9a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x0a87,	// (0x0006bf9a) list_single_fs_bigclock_indicator_pane_g1

0x0aa2,	// (0x0006bfb5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x0aa2,	// (0x0006bfb5) list_single_fs_bigclock_indicator_pane_g2

0x0abc,	// (0x0006bfcf) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x0abc,	// (0x0006bfcf) list_single_fs_bigclock_indicator_pane_g3

0x0ad6,	// (0x0006bfe9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x0ad6,	// (0x0006bfe9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb97,	// (0x0007b0aa) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb97,	// (0x0007b0aa) list_single_fs_bigclock_indicator_pane_g

0x0b01,	// (0x0006c014) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x0b01,	// (0x0006c014) list_single_fs_bigclock_indicator_pane_t1

0x0b29,	// (0x0006c03c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x0b29,	// (0x0006c03c) list_single_fs_bigclock_indicator_pane_t2

0x0b51,	// (0x0006c064) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x0b51,	// (0x0006c064) list_single_fs_bigclock_indicator_pane_t3

0x0b79,	// (0x0006c08c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x0b79,	// (0x0006c08c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfba2,	// (0x0007b0b5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfba2,	// (0x0007b0b5) list_single_fs_bigclock_indicator_pane_t

0x11d9,	// (0x0006c6ec) image3_infobar_fav_pane_ParamLimits

0x11d9,	// (0x0006c6ec) image3_infobar_fav_pane

0x11e9,	// (0x0006c6fc) image3_infobar_loc_pane_ParamLimits

0x11e9,	// (0x0006c6fc) image3_infobar_loc_pane

0x11fd,	// (0x0006c710) image3_infobar_time_pane_ParamLimits

0x11fd,	// (0x0006c710) image3_infobar_time_pane

0x1e16,	// (0x0006d329) image3_infobar_time_pane_g1

0x120d,	// (0x0006c720) image3_infobar_time_pane_t1

0x1e16,	// (0x0006d329) image3_infobar_loc_pane_g1

0x121b,	// (0x0006c72e) image3_infobar_loc_pane_g2

0x0001,

0xfd00,	// (0x0007b213) image3_infobar_loc_pane_g

0x1223,	// (0x0006c736) image3_infobar_loc_pane_t1

0x1e16,	// (0x0006d329) image3_infobar_fav_pane_g1

0x1231,	// (0x0006c744) image3_infobar_fav_pane_g2

0x0001,

0xfd05,	// (0x0007b218) image3_infobar_fav_pane_g

0x1239,	// (0x0006c74c) fs_bigclock_status_battery_pane

0x1242,	// (0x0006c755) fs_bigclock_status_signal_pane

0x124b,	// (0x0006c75e) fs_bigclock_status_title_pane

0x1254,	// (0x0006c767) fs_bigclock_status_signal_pane_g1

0x125d,	// (0x0006c770) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd0a,	// (0x0007b21d) fs_bigclock_status_signal_pane_g

0x1265,	// (0x0006c778) fs_bigclock_status_battery_pane_g1

0x126e,	// (0x0006c781) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd0f,	// (0x0007b222) fs_bigclock_status_battery_pane_g

0x1276,	// (0x0006c789) fs_bigclock_status_title_pane_t1

0xcfc7,	// (0x000784da) main_fs_bigclock_clock_pane_g1

0xcfc7,	// (0x000784da) main_fs_bigclock_clock_pane_g2

0xcfd4,	// (0x000784e7) main_fs_bigclock_clock_pane_g3

0xcfd4,	// (0x000784e7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd14,	// (0x0007b227) main_fs_bigclock_clock_pane_g

0xcfe0,	// (0x000784f3) main_fs_bigclock_clock_pane_t1

0xcff3,	// (0x00078506) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd1d,	// (0x0007b230) main_fs_bigclock_clock_pane_t

0x1284,	// (0x0006c797) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1284,	// (0x0006c797) list_single_fs_bigclock_indicator_pane

0x1295,	// (0x0006c7a8) list_single_fs_bigclock_pane_ParamLimits

0x1295,	// (0x0006c7a8) list_single_fs_bigclock_pane

0x12bb,	// (0x0006c7ce) main_fs_bigclock_indicator_pane_t1

0x12ca,	// (0x0006c7dd) list_single_fs_bigclock_pane_g1

0x12d2,	// (0x0006c7e5) list_single_fs_bigclock_pane_t1

0x1e16,	// (0x0006d329) main_fs_bigclock_swipe_pane_g1

0x1315,	// (0x0006c828) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd2e,	// (0x0007b241) main_fs_bigclock_swipe_pane_g

0x131d,	// (0x0006c830) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x131d,	// (0x0006c830) main_fs_bigclock_swipe_pane_t1

0x888e,	// (0x00073da1) call_type_pane_ParamLimits

0x16c9,	// (0x0006cbdc) main_btmg_pane

0x65dc,	// (0x00071aef) list_single_cale_mrui_row_pane_g2_ParamLimits

0x65dc,	// (0x00071aef) list_single_cale_mrui_row_pane_g2

0x0002,

0xfca1,	// (0x0007b1b4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfca1,	// (0x0007b1b4) list_single_cale_mrui_row_pane_g

0x670c,	// (0x00071c1f) list_recal_vselct_arw_lo_pane

0x1154,	// (0x0006c667) list_recal_vselct_arw_up_pane

0x6714,	// (0x00071c27) list_recal_vselct_pane

0xd04a,	// (0x0007855d) btmg_button_pane

0xd056,	// (0x00078569) main_btmg_pane_g1

0x16c9,	// (0x0006cbdc) bg_button_pane_cp044

0x133a,	// (0x0006c84d) btmg_button_pane_t1

0x42cc,	// (0x0006f7df) aid_listscroll_gen

0x1d63,	// (0x0006d276) main_cntbar_detail_pane

0x0e4a,	// (0x0006c35d) list_cmail_folder_pane

0xf034,	// (0x0007a547) sp_fs_scroll_pane_cp03_ParamLimits

0x67a3,	// (0x00071cb6) list_single_fs_dyc_pane_cp01_ParamLimits

0x67a3,	// (0x00071cb6) list_single_fs_dyc_pane_cp01

0x1348,	// (0x0006c85b) aid_size_cmail_indent

0x67cb,	// (0x00071cde) list_single_dyc_row_pane_cp01

0xd07e,	// (0x00078591) cntbar_detail_list_pane_ParamLimits

0xd07e,	// (0x00078591) cntbar_detail_list_pane

0xd0b8,	// (0x000785cb) main_cntbar_detail_cont_pane_ParamLimits

0xd0b8,	// (0x000785cb) main_cntbar_detail_cont_pane

0x8882,	// (0x00073d95) scroll_pane_cp032_ParamLimits

0x8882,	// (0x00073d95) scroll_pane_cp032

0xd0c4,	// (0x000785d7) cntbar_detail_list_event_pane_ParamLimits

0xd0c4,	// (0x000785d7) cntbar_detail_list_event_pane

0xd08a,	// (0x0007859d) cntbar_detail_list_shct_pane

0x22b4,	// (0x0006d7c7) aid_list_gen

0x1351,	// (0x0006c864) aid_scroll

0x135a,	// (0x0006c86d) aid_size_touch_scroll_bar

0xd0d8,	// (0x000785eb) aid_list_double

0x1363,	// (0x0006c876) aid_list_single

0xd0e1,	// (0x000785f4) aid_list_single_lg

0x67d4,	// (0x00071ce7) aid_list_z_g_a_sm

0xd0ea,	// (0x000785fd) aid_list_z_g_d

0x67dc,	// (0x00071cef) aid_txt_z_prm

0x67ea,	// (0x00071cfd) aid_txt_z_prm_cp01

0x67f8,	// (0x00071d0b) aid_txt_z_sec

0xd0f2,	// (0x00078605) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd0f2,	// (0x00078605) main_cntbar_detail_cont_pane_g1

0xd0ff,	// (0x00078612) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd0ff,	// (0x00078612) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd33,	// (0x0007b246) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd33,	// (0x0007b246) main_cntbar_detail_cont_pane_g

0x136c,	// (0x0006c87f) main_cntbar_detail_cont_pane_t1

0x137a,	// (0x0006c88d) main_cntbar_detail_cont_pane_t2

0x1388,	// (0x0006c89b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd38,	// (0x0007b24b) main_cntbar_detail_cont_pane_t

0xd10b,	// (0x0007861e) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd10b,	// (0x0007861e) cell_cntbar_detail_list_shct_pane

0x1396,	// (0x0006c8a9) cntbar_detail_list_shct_pane_g1

0x139f,	// (0x0006c8b2) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd3f,	// (0x0007b252) cntbar_detail_list_shct_pane_g

0xd11f,	// (0x00078632) cntbar_detail_list_event_pane_g1_ParamLimits

0xd11f,	// (0x00078632) cntbar_detail_list_event_pane_g1

0xd12b,	// (0x0007863e) cntbar_detail_list_event_pane_g2_ParamLimits

0xd12b,	// (0x0007863e) cntbar_detail_list_event_pane_g2

0x0005,

0xfd44,	// (0x0007b257) cntbar_detail_list_event_pane_g_ParamLimits

0xfd44,	// (0x0007b257) cntbar_detail_list_event_pane_g

0xd197,	// (0x000786aa) cntbar_detail_list_event_pane_t1_ParamLimits

0xd197,	// (0x000786aa) cntbar_detail_list_event_pane_t1

0xd1ac,	// (0x000786bf) cntbar_detail_list_event_pane_t2_ParamLimits

0xd1ac,	// (0x000786bf) cntbar_detail_list_event_pane_t2

0x0002,

0xfd51,	// (0x0007b264) cntbar_detail_list_event_pane_t_ParamLimits

0xfd51,	// (0x0007b264) cntbar_detail_list_event_pane_t

0x1e16,	// (0x0006d329) cell_cntbar_detail_list_shct_pane_g1

0x2fb0,	// (0x0006e4c3) navi_pane_mv_g3

0x1d63,	// (0x0006d276) main_cntbar_detail_pane_ParamLimits

0x16c9,	// (0x0006cbdc) main_notif_wgt_pane

0xa6e4,	// (0x00075bf7) aid_tch_main_mp4_pane_g4

0xa9b7,	// (0x00075eca) popup_slider_window_cp02

0x6702,	// (0x00071c15) list_recal_day_event_pane

0xd05e,	// (0x00078571) cntbar_detail_btn_pane_ParamLimits

0xd05e,	// (0x00078571) cntbar_detail_btn_pane

0xd06e,	// (0x00078581) cntbar_detail_btn_pane_cp01_ParamLimits

0xd06e,	// (0x00078581) cntbar_detail_btn_pane_cp01

0xd08a,	// (0x0007859d) cntbar_detail_list_shct_pane_ParamLimits

0xd096,	// (0x000785a9) cntbar_detail_pane_g1_ParamLimits

0xd096,	// (0x000785a9) cntbar_detail_pane_g1

0xd0a2,	// (0x000785b5) cntbar_detail_pane_t1_ParamLimits

0xd0a2,	// (0x000785b5) cntbar_detail_pane_t1

0xd137,	// (0x0007864a) cntbar_detail_list_event_pane_g3_ParamLimits

0xd137,	// (0x0007864a) cntbar_detail_list_event_pane_g3

0xd14f,	// (0x00078662) cntbar_detail_list_event_pane_g4_ParamLimits

0xd14f,	// (0x00078662) cntbar_detail_list_event_pane_g4

0xd167,	// (0x0007867a) cntbar_detail_list_event_pane_g5_ParamLimits

0xd167,	// (0x0007867a) cntbar_detail_list_event_pane_g5

0xd17f,	// (0x00078692) cntbar_detail_list_event_pane_g6_ParamLimits

0xd17f,	// (0x00078692) cntbar_detail_list_event_pane_g6

0xd1c1,	// (0x000786d4) cntbar_detail_list_event_pane_t3_ParamLimits

0xd1c1,	// (0x000786d4) cntbar_detail_list_event_pane_t3

0xd1d3,	// (0x000786e6) popup_notif_wgt_window_ParamLimits

0xd1d3,	// (0x000786e6) popup_notif_wgt_window

0xd1e3,	// (0x000786f6) popup_submenu_window_cp01_ParamLimits

0xd1e3,	// (0x000786f6) popup_submenu_window_cp01

0x204d,	// (0x0006d560) bg_popup_window_pane_cp10

0x13a8,	// (0x0006c8bb) listscroll_notif_wgt_pane

0x13ba,	// (0x0006c8cd) list_notif_wgt_window

0x13c3,	// (0x0006c8d6) scroll_pane_cp033

0xd1f5,	// (0x00078708) list_notif_wgt_row_pane_ParamLimits

0xd1f5,	// (0x00078708) list_notif_wgt_row_pane

0x13cc,	// (0x0006c8df) aid_size_list_notif_wgt_del

0x13d9,	// (0x0006c8ec) list_notif_wgt_row_pane_g1

0x13e5,	// (0x0006c8f8) list_notif_wgt_row_pane_g2

0x13f4,	// (0x0006c907) list_notif_wgt_row_pane_g3

0x0002,

0xfd58,	// (0x0007b26b) list_notif_wgt_row_pane_g

0x1401,	// (0x0006c914) list_notif_wgt_row_pane_t1

0x1417,	// (0x0006c92a) list_notif_wgt_row_pane_t2

0x1429,	// (0x0006c93c) list_notif_wgt_row_pane_t3

0x0002,

0xfd5f,	// (0x0007b272) list_notif_wgt_row_pane_t

0xeb78,	// (0x0007a08b) list_recal_day_event_pane_g1

0x143b,	// (0x0006c94e) list_recal_day_event_pane_t1

0x16c9,	// (0x0006cbdc) bg_button_pane_cp045

0x144a,	// (0x0006c95d) cntbar_detail_btn_pane_t1

0x30d1,	// (0x0006e5e4) main_callh_pane_ParamLimits

0x30d1,	// (0x0006e5e4) main_callh_pane

0x16c9,	// (0x0006cbdc) main_coverflow0_pane

0x16c9,	// (0x0006cbdc) main_wgtman_pane

0xc8df,	// (0x00077df2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc8df,	// (0x00077df2) main_fs_bigclock_unlock_btn_pane

0xcba3,	// (0x000780b6) bg_button_pane_cp16

0xcbb3,	// (0x000780c6) cell_tport_appsw_pane_g3

0xd207,	// (0x0007871a) cf0_flow_pane_ParamLimits

0xd207,	// (0x0007871a) cf0_flow_pane

0x1458,	// (0x0006c96b) listscroll_cf0_pane

0x1463,	// (0x0006c976) main_cf0_pane_g1

0xd216,	// (0x00078729) main_cf0_pane_t1_ParamLimits

0xd216,	// (0x00078729) main_cf0_pane_t1

0xd22a,	// (0x0007873d) main_cf0_pane_t2_ParamLimits

0xd22a,	// (0x0007873d) main_cf0_pane_t2

0x0001,

0xfd6b,	// (0x0007b27e) main_cf0_pane_t_ParamLimits

0xfd6b,	// (0x0007b27e) main_cf0_pane_t

0x1475,	// (0x0006c988) scroll_pane_cp11

0xd23e,	// (0x00078751) cf0_flow_pane_g1

0xd246,	// (0x00078759) cf0_flow_pane_g2

0x0001,

0xfd70,	// (0x0007b283) cf0_flow_pane_g

0xd24e,	// (0x00078761) cf0_flow_pane_t1

0x16c9,	// (0x0006cbdc) main_call6_pane

0x16c9,	// (0x0006cbdc) main_calllock_pane

0xd25c,	// (0x0007876f) call6_btn_grp_pane_ParamLimits

0xd25c,	// (0x0007876f) call6_btn_grp_pane

0xd26b,	// (0x0007877e) call6_pane_g1_ParamLimits

0xd26b,	// (0x0007877e) call6_pane_g1

0xd27b,	// (0x0007878e) popup_call6_1st_window_ParamLimits

0xd27b,	// (0x0007878e) popup_call6_1st_window

0xd289,	// (0x0007879c) popup_call6_2nd_window_ParamLimits

0xd289,	// (0x0007879c) popup_call6_2nd_window

0xd297,	// (0x000787aa) cell_call6_btn_pane_ParamLimits

0xd297,	// (0x000787aa) cell_call6_btn_pane

0x204d,	// (0x0006d560) bg_popup_call2_in_pane_cp03

0x1480,	// (0x0006c993) popup_call6_1st_window_g1

0x1488,	// (0x0006c99b) popup_call6_1st_window_g2

0x1490,	// (0x0006c9a3) popup_call6_1st_window_g3

0x0002,

0xfd75,	// (0x0007b288) popup_call6_1st_window_g

0x1498,	// (0x0006c9ab) popup_call6_1st_window_t1

0x14a7,	// (0x0006c9ba) popup_call6_1st_window_t2

0x14b5,	// (0x0006c9c8) popup_call6_1st_window_t3

0x0002,

0xfd7c,	// (0x0007b28f) popup_call6_1st_window_t

0x204d,	// (0x0006d560) bg_popup_call2_in_pane_cp04

0x14c3,	// (0x0006c9d6) popup_call6_2nd_window_g1

0x14cb,	// (0x0006c9de) popup_call6_2nd_window_g2

0x14d3,	// (0x0006c9e6) popup_call6_2nd_window_g3

0x0002,

0xfd83,	// (0x0007b296) popup_call6_2nd_window_g

0x14db,	// (0x0006c9ee) popup_call6_2nd_window_t1

0x16c9,	// (0x0006cbdc) bg_button_pane_cp15

0x1535,	// (0x0006ca48) cell_call6_btn_pane_g1

0x16ba,	// (0x0006cbcd) cell_call6_btn_pane_t1

0xd2a6,	// (0x000787b9) listscroll_wgtman_pane_ParamLimits

0xd2a6,	// (0x000787b9) listscroll_wgtman_pane

0xd2c2,	// (0x000787d5) wgtman_btn_pane_ParamLimits

0xd2c2,	// (0x000787d5) wgtman_btn_pane

0x2db7,	// (0x0006e2ca) aid_scroll_copy1

0x1502,	// (0x0006ca15) list_wgtman_pane

0xd2f7,	// (0x0007880a) wgtman_btn_pane_g1_ParamLimits

0xd2f7,	// (0x0007880a) wgtman_btn_pane_g1

0xd31f,	// (0x00078832) wgtman_btn_pane_t1_ParamLimits

0xd31f,	// (0x00078832) wgtman_btn_pane_t1

0x150c,	// (0x0006ca1f) wgtman_btn_pane_t2_ParamLimits

0x150c,	// (0x0006ca1f) wgtman_btn_pane_t2

0x0001,

0xfd8a,	// (0x0007b29d) wgtman_btn_pane_t_ParamLimits

0xfd8a,	// (0x0007b29d) wgtman_btn_pane_t

0xd356,	// (0x00078869) listrow_wgtman_pane_ParamLimits

0xd356,	// (0x00078869) listrow_wgtman_pane

0xd371,	// (0x00078884) listrow_wgtman_pane_g1

0xd37e,	// (0x00078891) listrow_wgtman_pane_g2

0x0001,

0xfd8f,	// (0x0007b2a2) listrow_wgtman_pane_g

0x6806,	// (0x00071d19) listrow_wgtman_pane_t1

0x681e,	// (0x00071d31) listrow_wgtman_pane_t2

0x0001,

0xfd94,	// (0x0007b2a7) listrow_wgtman_pane_t

0x6844,	// (0x00071d57) wait_bar_pane_cp09

0x1523,	// (0x0006ca36) main_calllock_btn_pane

0x152d,	// (0x0006ca40) main_calllock_pane_g1

0x16c9,	// (0x0006cbdc) bg_button_pane_cp17

0x1535,	// (0x0006ca48) main_calllock_btn_pane_g1

0x153e,	// (0x0006ca51) main_calllock_btn_pane_t1

0x16c9,	// (0x0006cbdc) main_dialer3_pane

0x16c9,	// (0x0006cbdc) main_fmrd2_pane

0x1e16,	// (0x0006d329) main_fs_bigclock_unlock_btn_pane_g1

0xd3a4,	// (0x000788b7) main_fs_bigclock_unlock_btn_pane_t1

0xd3b2,	// (0x000788c5) area_fmrd2_info_pane_ParamLimits

0xd3b2,	// (0x000788c5) area_fmrd2_info_pane

0xd3c0,	// (0x000788d3) area_fmrd2_visual_pane_ParamLimits

0xd3c0,	// (0x000788d3) area_fmrd2_visual_pane

0xd3ce,	// (0x000788e1) fmrd2_indi_pane_ParamLimits

0xd3ce,	// (0x000788e1) fmrd2_indi_pane

0xd3db,	// (0x000788ee) area_fmrd2_visual_pane_g1

0xd3e3,	// (0x000788f6) area_fmrd2_visual_pane_t1

0xd3f3,	// (0x00078906) area_fmrd2_visual_pane_t2

0xd403,	// (0x00078916) area_fmrd2_visual_pane_t3

0x0002,

0xfd9e,	// (0x0007b2b1) area_fmrd2_visual_pane_t

0xd413,	// (0x00078926) area_fmrd2_info_pane_g1

0xd41b,	// (0x0007892e) area_fmrd2_info_pane_t1

0xd42b,	// (0x0007893e) area_fmrd2_info_pane_t2

0xd43b,	// (0x0007894e) area_fmrd2_info_pane_t3

0xd44b,	// (0x0007895e) area_fmrd2_info_pane_t4

0x0003,

0xfda5,	// (0x0007b2b8) area_fmrd2_info_pane_t

0xd459,	// (0x0007896c) fmrd2_indi_pane_t1

0xd469,	// (0x0007897c) fmrd2_indi_pane_t2

0xd479,	// (0x0007898c) fmrd2_indi_pane_t3

0x0002,

0xfdae,	// (0x0007b2c1) fmrd2_indi_pane_t

0x0ae5,	// (0x0006bff8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x0ae5,	// (0x0006bff8) list_single_fs_bigclock_indicator_pane_g5

0x0b96,	// (0x0006c0a9) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x0b96,	// (0x0006c0a9) list_single_fs_bigclock_indicator_pane_t5

0xcd46,	// (0x00078259) aid_cell_bcale_month_pane_ParamLimits

0xcd46,	// (0x00078259) aid_cell_bcale_month_pane

0xcd64,	// (0x00078277) bcale_month_pane_ParamLimits

0xcd64,	// (0x00078277) bcale_month_pane

0xcd82,	// (0x00078295) bcale_preview_pane_ParamLimits

0xcd82,	// (0x00078295) bcale_preview_pane

0x12d2,	// (0x0006c7e5) list_single_fs_bigclock_pane_t1_ParamLimits

0x12f1,	// (0x0006c804) list_single_fs_bigclock_pane_t2_ParamLimits

0x12f1,	// (0x0006c804) list_single_fs_bigclock_pane_t2

0x0001,

0xfd29,	// (0x0007b23c) list_single_fs_bigclock_pane_t_ParamLimits

0xfd29,	// (0x0007b23c) list_single_fs_bigclock_pane_t

0xd39c,	// (0x000788af) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd99,	// (0x0007b2ac) main_fs_bigclock_unlock_btn_pane_g

0xd487,	// (0x0007899a) aid_dia3_key_size_ParamLimits

0xd487,	// (0x0007899a) aid_dia3_key_size

0xd493,	// (0x000789a6) aid_dia3_listrow_size_ParamLimits

0xd493,	// (0x000789a6) aid_dia3_listrow_size

0xd4a3,	// (0x000789b6) dia3_keypad_fun_pane_ParamLimits

0xd4a3,	// (0x000789b6) dia3_keypad_fun_pane

0xd4b5,	// (0x000789c8) dia3_keypad_num_pane_ParamLimits

0xd4b5,	// (0x000789c8) dia3_keypad_num_pane

0xd4c7,	// (0x000789da) dia3_listscroll_pane_ParamLimits

0xd4c7,	// (0x000789da) dia3_listscroll_pane

0xd4d5,	// (0x000789e8) dia3_numentry_pane_ParamLimits

0xd4d5,	// (0x000789e8) dia3_numentry_pane

0x154d,	// (0x0006ca60) dia3_list_pane

0x1558,	// (0x0006ca6b) scroll_pane_cp12

0x16c9,	// (0x0006cbdc) bg_dia3_numentry_pane

0xd4e3,	// (0x000789f6) dia3_numentry_pane_t1

0xd4f2,	// (0x00078a05) cell_dia3_key_num_pane

0xd4fa,	// (0x00078a0d) cell_dia3_key0_fun_pane_ParamLimits

0xd4fa,	// (0x00078a0d) cell_dia3_key0_fun_pane

0xd507,	// (0x00078a1a) cell_dia3_key1_fun_pane_ParamLimits

0xd507,	// (0x00078a1a) cell_dia3_key1_fun_pane

0xd514,	// (0x00078a27) dia3_listrow_pane

0x0838,	// (0x0006bd4b) bg_dia3_numentry_pane_g1

0x16c9,	// (0x0006cbdc) bg_button_pane_cp21

0x1563,	// (0x0006ca76) cell_dia3_key_num_pane_t1

0x1571,	// (0x0006ca84) cell_dia3_key_num_pane_t2

0x1580,	// (0x0006ca93) cell_dia3_key_num_pane_t3

0x158f,	// (0x0006caa2) cell_dia3_key_num_pane_t4

0x0003,

0xfdb5,	// (0x0007b2c8) cell_dia3_key_num_pane_t

0x16c9,	// (0x0006cbdc) bg_button_pane_cp19

0xd521,	// (0x00078a34) cell_dia3_key0_fun_pane_g1

0x16c9,	// (0x0006cbdc) bg_button_pane_cp20

0xd529,	// (0x00078a3c) cell_dia3_key1_fun_pane_g1

0xd531,	// (0x00078a44) area_left_week_number_pane

0xd544,	// (0x00078a57) area_top_day_name_pane

0xd552,	// (0x00078a65) frame_month_view_pane

0x159e,	// (0x0006cab1) grid_month_view_pane

0xd567,	// (0x00078a7a) cell_top_day_name_pane_ParamLimits

0xd567,	// (0x00078a7a) cell_top_day_name_pane

0xd581,	// (0x00078a94) cell_area_left_week_number_pane_ParamLimits

0xd581,	// (0x00078a94) cell_area_left_week_number_pane

0xd5a4,	// (0x00078ab7) cell_month_view_pane_ParamLimits

0xd5a4,	// (0x00078ab7) cell_month_view_pane

0x15ac,	// (0x0006cabf) frm_month_g1

0xd5d0,	// (0x00078ae3) frm_month_g2

0xd5e1,	// (0x00078af4) frm_month_g3

0xd5f2,	// (0x00078b05) frm_month_g4

0xd603,	// (0x00078b16) frm_month_g5

0xd616,	// (0x00078b29) frm_month_g6

0xd629,	// (0x00078b3c) frm_month_g7

0x15b9,	// (0x0006cacc) frm_month_g8

0xd63c,	// (0x00078b4f) frm_month_g9

0xd649,	// (0x00078b5c) frm_month_g10

0xd656,	// (0x00078b69) frm_month_g11

0xd663,	// (0x00078b76) frm_month_g12

0xd670,	// (0x00078b83) frm_month_g13

0xd67d,	// (0x00078b90) frm_month_g14

0xd68c,	// (0x00078b9f) frm_month_g15

0xd69b,	// (0x00078bae) frm_month_g16

0x000f,

0xfdbe,	// (0x0007b2d1) frm_month_g

0x15c6,	// (0x0006cad9) cell_top_day_name_pane_t1

0xd6aa,	// (0x00078bbd) cell_area_left_week_number_pane_g1

0xd6b9,	// (0x00078bcc) cell_area_left_week_number_pane_t1

0x1dca,	// (0x0006d2dd) cell_month_view_pane_g1

0xd6cf,	// (0x00078be2) cell_month_view_pane_t1

0x16c9,	// (0x0006cbdc) main_fps_pane

0x0d63,	// (0x0006c276) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0d63,	// (0x0006c276) cmail_ddmenu_btn02_pane_cp1

0x0d7f,	// (0x0006c292) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0d7f,	// (0x0006c292) cmail_ddmenu_btn02_pane_cp2

0xcf46,	// (0x00078459) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcf46,	// (0x00078459) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcdc,	// (0x0007b1ef) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcdc,	// (0x0007b1ef) cmail_ddmenu_btn02_pane_g

0xcf64,	// (0x00078477) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcf64,	// (0x00078477) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfce1,	// (0x0007b1f4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfce1,	// (0x0007b1f4) cmail_ddmenu_btn02_pane_t

0xd6e5,	// (0x00078bf8) fps_text_pane_ParamLimits

0xd6e5,	// (0x00078bf8) fps_text_pane

0xd6f2,	// (0x00078c05) main_fps_pane_g1_ParamLimits

0xd6f2,	// (0x00078c05) main_fps_pane_g1

0xd700,	// (0x00078c13) wait_bar_pane_cp010_ParamLimits

0xd700,	// (0x00078c13) wait_bar_pane_cp010

0xd70c,	// (0x00078c1f) fps_text_pane_t1_ParamLimits

0xd70c,	// (0x00078c1f) fps_text_pane_t1

0xada9,	// (0x000762bc) cam4_image_uncrop_pane_g1

0xadb2,	// (0x000762c5) cam4_image_uncrop_pane_g2

0xadbb,	// (0x000762ce) cam4_image_uncrop_pane_g3

0xadc4,	// (0x000762d7) cam4_image_uncrop_pane_g4

0x0003,

0xf81b,	// (0x0007ad2e) cam4_image_uncrop_pane_g

0xd514,	// (0x00078a27) dia3_listrow_pane_ParamLimits

0x16c9,	// (0x0006cbdc) main_phob2_pane

0xcb85,	// (0x00078098) cell_tport_appsw_pane_cp02_ParamLimits

0xcb85,	// (0x00078098) cell_tport_appsw_pane_cp02

0xcb94,	// (0x000780a7) cell_tport_appsw_pane_cp03_ParamLimits

0xcb94,	// (0x000780a7) cell_tport_appsw_pane_cp03

0x16c9,	// (0x0006cbdc) phob2_contact_card_pane

0x16c9,	// (0x0006cbdc) phob2_listscroll_pane

0x15d9,	// (0x0006caec) phob2_list_pane

0x1117,	// (0x0006c62a) scroll_pane_cp034

0xd725,	// (0x00078c38) phob2_cc_data_pane_ParamLimits

0xd725,	// (0x00078c38) phob2_cc_data_pane

0xd73f,	// (0x00078c52) phob2_cc_listscroll_pane_ParamLimits

0xd73f,	// (0x00078c52) phob2_cc_listscroll_pane

0xd356,	// (0x00078869) list_double_large_graphic_phob2_pane_ParamLimits

0xd356,	// (0x00078869) list_double_large_graphic_phob2_pane

0xd759,	// (0x00078c6c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd759,	// (0x00078c6c) list_double_large_graphic_phob2_pane_g1

0xd766,	// (0x00078c79) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd766,	// (0x00078c79) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfddf,	// (0x0007b2f2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfddf,	// (0x0007b2f2) list_double_large_graphic_phob2_pane_g

0x6862,	// (0x00071d75) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x6862,	// (0x00071d75) list_double_large_graphic_phob2_pane_t1

0x6877,	// (0x00071d8a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6877,	// (0x00071d8a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfde8,	// (0x0007b2fb) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfde8,	// (0x0007b2fb) list_double_large_graphic_phob2_pane_t

0x16c9,	// (0x0006cbdc) list_highlight_pane_cp024

0x15e1,	// (0x0006caf4) phob2_cc_button_pane

0xd780,	// (0x00078c93) phob2_cc_data_pane_g1_ParamLimits

0xd780,	// (0x00078c93) phob2_cc_data_pane_g1

0xd78f,	// (0x00078ca2) phob2_cc_data_pane_g2_ParamLimits

0xd78f,	// (0x00078ca2) phob2_cc_data_pane_g2

0x0001,

0xfded,	// (0x0007b300) phob2_cc_data_pane_g_ParamLimits

0xfded,	// (0x0007b300) phob2_cc_data_pane_g

0xd79e,	// (0x00078cb1) phob2_cc_data_pane_t1_ParamLimits

0xd79e,	// (0x00078cb1) phob2_cc_data_pane_t1

0xd7b3,	// (0x00078cc6) phob2_cc_data_pane_t2_ParamLimits

0xd7b3,	// (0x00078cc6) phob2_cc_data_pane_t2

0xd7c8,	// (0x00078cdb) phob2_cc_data_pane_t3_ParamLimits

0xd7c8,	// (0x00078cdb) phob2_cc_data_pane_t3

0x0002,

0xfdf2,	// (0x0007b305) phob2_cc_data_pane_t_ParamLimits

0xfdf2,	// (0x0007b305) phob2_cc_data_pane_t

0x15e9,	// (0x0006cafc) phob2_cc_list_pane_ParamLimits

0x15e9,	// (0x0006cafc) phob2_cc_list_pane

0xf028,	// (0x0007a53b) scroll_pane_cp035_ParamLimits

0xf028,	// (0x0007a53b) scroll_pane_cp035

0x1d63,	// (0x0006d276) bg_button_pane_cp033

0x15f5,	// (0x0006cb08) phob2_cc_button_pane_g1

0x1601,	// (0x0006cb14) phob2_cc_button_pane_t1

0x1616,	// (0x0006cb29) phob2_cc_button_pane_t2

0x0001,

0xfdf9,	// (0x0007b30c) phob2_cc_button_pane_t

0xd7dd,	// (0x00078cf0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd7dd,	// (0x00078cf0) list_double_large_graphic_phob2_cc_pane

0xd84b,	// (0x00078d5e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd84b,	// (0x00078d5e) list_double_large_graphic_phob2_cc_pane_g1

0xd85c,	// (0x00078d6f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd85c,	// (0x00078d6f) list_double_large_graphic_phob2_cc_pane_g2

0x688c,	// (0x00071d9f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x688c,	// (0x00071d9f) list_double_large_graphic_phob2_cc_pane_g3

0x6898,	// (0x00071dab) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6898,	// (0x00071dab) list_double_large_graphic_phob2_cc_pane_g4

0x68a4,	// (0x00071db7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x68a4,	// (0x00071db7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdfe,	// (0x0007b311) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdfe,	// (0x0007b311) list_double_large_graphic_phob2_cc_pane_g

0x68b0,	// (0x00071dc3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x68b0,	// (0x00071dc3) list_double_large_graphic_phob2_cc_pane_t1

0x68d9,	// (0x00071dec) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x68d9,	// (0x00071dec) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe09,	// (0x0007b31c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe09,	// (0x0007b31c) list_double_large_graphic_phob2_cc_pane_t

0x1628,	// (0x0006cb3b) list_highlight_pane_cp025_ParamLimits

0x1628,	// (0x0006cb3b) list_highlight_pane_cp025

0x1d63,	// (0x0006d276) bg_button_pane_cp033_ParamLimits

0x15f5,	// (0x0006cb08) phob2_cc_button_pane_g1_ParamLimits

0x1601,	// (0x0006cb14) phob2_cc_button_pane_t1_ParamLimits

0x1616,	// (0x0006cb29) phob2_cc_button_pane_t2_ParamLimits

0xfdf9,	// (0x0007b30c) phob2_cc_button_pane_t_ParamLimits

0x6bf3,	// (0x00072106) popup_wgtman_window

0xea41,	// (0x00079f54) scroll_pane_cp038

0xd2df,	// (0x000787f2) wgtman_btn_pane_cp_01_ParamLimits

0xd2df,	// (0x000787f2) wgtman_btn_pane_cp_01

0x1636,	// (0x0006cb49) wgtman_content_pane

0x163f,	// (0x0006cb52) wgtman_heading_pane

0x16c9,	// (0x0006cbdc) bg_heading_pane_cp02

0x1648,	// (0x0006cb5b) wgtman_heading_pane_g1

0x1650,	// (0x0006cb63) wgtman_heading_pane_t1

0x165e,	// (0x0006cb71) scroll_pane_cp036

0x1666,	// (0x0006cb79) wgtman_list_pane

0x166e,	// (0x0006cb81) wgtman_list_pane_t1_ParamLimits

0x166e,	// (0x0006cb81) wgtman_list_pane_t1

0xad08,	// (0x0007621b) cam4_grid_pane

0x5f03,	// (0x00071416) bg_button_pane_cp015_ParamLimits

0xb9af,	// (0x00076ec2) bg_button_pane_cp016_ParamLimits

0xb9bb,	// (0x00076ece) bg_button_pane_cp017_ParamLimits

0xb9d6,	// (0x00076ee9) popup_vitu2_query_window_g3_ParamLimits

0xb9d6,	// (0x00076ee9) popup_vitu2_query_window_g3

0x5fc2,	// (0x000714d5) popup_vitu2_query_window_t6_ParamLimits

0x5fc2,	// (0x000714d5) popup_vitu2_query_window_t6

0x5fed,	// (0x00071500) popup_vitu2_query_window_t7_ParamLimits

0x5fed,	// (0x00071500) popup_vitu2_query_window_t7

0x0286,	// (0x0006b799) cam4_grid_pane_g1

0x028f,	// (0x0006b7a2) cam4_grid_pane_g2

0x1688,	// (0x0006cb9b) cam4_grid_pane_g3

0x1691,	// (0x0006cba4) cam4_grid_pane_g4

0x0003,

0xfe0e,	// (0x0007b321) cam4_grid_pane_g

0x7645,	// (0x00072b58) aid_placing_vt_slider_lsc_ParamLimits

0x7991,	// (0x00072ea4) vidtel_button_pane_ParamLimits

0x7991,	// (0x00072ea4) vidtel_button_pane

0x16c9,	// (0x0006cbdc) bg_button_pane_cp034

0x169c,	// (0x0006cbaf) vidtel_button_pane_g1

0x16a4,	// (0x0006cbb7) vidtel_button_pane_t1

0xeb68,	// (0x0007a07b) aid_size_vtel_slider_touch

0xf028,	// (0x0007a53b) scroll_pane_cp039

0xc697,	// (0x00077baa) ncim_query_button_pane_cp01_ParamLimits

0xc6b6,	// (0x00077bc9) ncimui_query_pane_g1_ParamLimits

0x1d63,	// (0x0006d276) input_focus_pane_cp012_ParamLimits

0x0876,	// (0x0006bd89) ncim_query_entry_pane_t1_ParamLimits

0xf028,	// (0x0007a53b) scroll_pane_cp039_ParamLimits

0x2e9b,	// (0x0006e3ae) navi_pane_bcale_mc_g1

0x2ea3,	// (0x0006e3b6) navi_pane_bcale_mc_t1

0x0db3,	// (0x0006c2c6) main_sp_fs_email_pane_g1

0x0dbf,	// (0x0006c2d2) main_sp_fs_email_pane_g2

0x0001,

0xfc0c,	// (0x0007b11f) main_sp_fs_email_pane_g

0x1036,	// (0x0006c549) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1036,	// (0x0006c549) list_single_cale_mrui_row_pane_g3

0x6761,	// (0x00071c74) list_single_recal_day_pane_g5_event_pane

0x6777,	// (0x00071c8a) list_single_recal_day_pane_g7

0x24b6,	// (0x0006d9c9) list_recal_day_event_pane_cp01

0x24bf,	// (0x0006d9d2) list_recal_vselct_arw_lo_pane_cp01

0x24c7,	// (0x0006d9da) list_recal_vselct_arw_up_pane_cp01

0x24cf,	// (0x0006d9e2) list_recal_vselct_pane_cp01

0xeb78,	// (0x0007a08b) list_recal_day_event_pane_cp01_g1

0x6902,	// (0x00071e15) list_recal_day_event_pane_cp01_t1

0x677f,	// (0x00071c92) list_single_recal_day_pane_t1_ParamLimits

0x6791,	// (0x00071ca4) list_single_recal_day_pane_t2_ParamLimits

0xfcf1,	// (0x0007b204) list_single_recal_day_pane_t_ParamLimits

0x1d41,	// (0x0006d254) bg_notes_pane_ParamLimits

0x1e52,	// (0x0006d365) list_notes_pane_ParamLimits

0x6d33,	// (0x00072246) scroll_pane_cp06_ParamLimits

0x1e74,	// (0x0006d387) main_notes_pane_ParamLimits

0x1d63,	// (0x0006d276) main_welc_pane

0xd88a,	// (0x00078d9d) main_welc_body_pane_ParamLimits

0xd88a,	// (0x00078d9d) main_welc_body_pane

0xd8a4,	// (0x00078db7) main_welc_opti_pane_ParamLimits

0xd8a4,	// (0x00078db7) main_welc_opti_pane

0xd903,	// (0x00078e16) main_welc_pane_t1_ParamLimits

0xd903,	// (0x00078e16) main_welc_pane_t1

0xda99,	// (0x00078fac) main_welc_body_row_pane_ParamLimits

0xda99,	// (0x00078fac) main_welc_body_row_pane

0x1dbc,	// (0x0006d2cf) main_welc_opti_row_pane_ParamLimits

0x1dbc,	// (0x0006d2cf) main_welc_opti_row_pane

0x24e9,	// (0x0006d9fc) main_welc_opti_row_pane_g1

0xdabe,	// (0x00078fd1) main_welc_opti_row_pane_t1

0x24f1,	// (0x0006da04) main_welc_body_row_pane_t1

0x13b2,	// (0x0006c8c5) popup_notif_wgt_heading_pane

0x13cc,	// (0x0006c8df) aid_size_list_notif_wgt_del_ParamLimits

0x13d9,	// (0x0006c8ec) list_notif_wgt_row_pane_g1_ParamLimits

0x13e5,	// (0x0006c8f8) list_notif_wgt_row_pane_g2_ParamLimits

0x13f4,	// (0x0006c907) list_notif_wgt_row_pane_g3_ParamLimits

0xfd58,	// (0x0007b26b) list_notif_wgt_row_pane_g_ParamLimits

0x1401,	// (0x0006c914) list_notif_wgt_row_pane_t1_ParamLimits

0x1417,	// (0x0006c92a) list_notif_wgt_row_pane_t2_ParamLimits

0x1429,	// (0x0006c93c) list_notif_wgt_row_pane_t3_ParamLimits

0xfd5f,	// (0x0007b272) list_notif_wgt_row_pane_t_ParamLimits

0xd371,	// (0x00078884) listrow_wgtman_pane_g1_ParamLimits

0xd37e,	// (0x00078891) listrow_wgtman_pane_g2_ParamLimits

0xfd8f,	// (0x0007b2a2) listrow_wgtman_pane_g_ParamLimits

0x6806,	// (0x00071d19) listrow_wgtman_pane_t1_ParamLimits

0x681e,	// (0x00071d31) listrow_wgtman_pane_t2_ParamLimits

0xfd94,	// (0x0007b2a7) listrow_wgtman_pane_t_ParamLimits

0x6844,	// (0x00071d57) wait_bar_pane_cp09_ParamLimits

0x16c9,	// (0x0006cbdc) bg_popup_heading_pane_cp02

0x2500,	// (0x0006da13) popup_notif_wgt_heading_pane_g1

0x2508,	// (0x0006da1b) popup_notif_wgt_heading_pane_t1

0x16c9,	// (0x0006cbdc) main_vids_pane

0x16c9,	// (0x0006cbdc) vids_listscroll_pane

0xdacd,	// (0x00078fe0) scroll_pane_cp040

0x16c9,	// (0x0006cbdc) vids_list_pane

0xdad8,	// (0x00078feb) vids_list_double_pane_ParamLimits

0xdad8,	// (0x00078feb) vids_list_double_pane

0xdaef,	// (0x00079002) vids_list_double_pane_g1

0xdaf8,	// (0x0007900b) vids_list_double_pane_t1

0xdb08,	// (0x0007901b) vids_list_double_pane_t2

0x0001,

0xfe2d,	// (0x0007b340) vids_list_double_pane_t

0x1d63,	// (0x0006d276) main_ncimui_pane_ParamLimits

0xc4ee,	// (0x00077a01) main_ncimui_pane_g1_ParamLimits

0xc4fa,	// (0x00077a0d) main_ncimui_pane_g2_ParamLimits

0xc4fa,	// (0x00077a0d) main_ncimui_pane_g2

0x0001,

0xfb0d,	// (0x0007b020) main_ncimui_pane_g_ParamLimits

0xfb0d,	// (0x0007b020) main_ncimui_pane_g

0xd8bd,	// (0x00078dd0) main_welc_pane_g1_ParamLimits

0xd8bd,	// (0x00078dd0) main_welc_pane_g1

0xd8c9,	// (0x00078ddc) main_welc_pane_g2_ParamLimits

0xd8c9,	// (0x00078ddc) main_welc_pane_g2

0x0003,

0xfe17,	// (0x0007b32a) main_welc_pane_g_ParamLimits

0xfe17,	// (0x0007b32a) main_welc_pane_g

0x1d41,	// (0x0006d254) listscroll_mce_pane_ParamLimits

0x2ff0,	// (0x0006e503) wait_bar_pane_cp10

0x42d4,	// (0x0006f7e7) main_cale_day_pane_ParamLimits

0x42d4,	// (0x0006f7e7) main_cale_week_pane_ParamLimits

0x1d41,	// (0x0006d254) main_messa_pane_ParamLimits

0xa1a2,	// (0x000756b5) main_clock2_btn_pane_ParamLimits

0xa1a2,	// (0x000756b5) main_clock2_btn_pane

0x4aef,	// (0x00070002) main_clock2_btn_pane_cp01_ParamLimits

0x4aef,	// (0x00070002) main_clock2_btn_pane_cp01

0x1007,	// (0x0006c51a) list_cale_mrui_pane_ParamLimits

0x146d,	// (0x0006c980) main_cf0_pane_g2

0x0001,

0xfd66,	// (0x0007b279) main_cf0_pane_g

0xd531,	// (0x00078a44) area_left_week_number_pane_ParamLimits

0xd544,	// (0x00078a57) area_top_day_name_pane_ParamLimits

0xd552,	// (0x00078a65) frame_month_view_pane_ParamLimits

0x159e,	// (0x0006cab1) grid_month_view_pane_ParamLimits

0x15ac,	// (0x0006cabf) frm_month_g1_ParamLimits

0xd5d0,	// (0x00078ae3) frm_month_g2_ParamLimits

0xd5e1,	// (0x00078af4) frm_month_g3_ParamLimits

0xd5f2,	// (0x00078b05) frm_month_g4_ParamLimits

0xd603,	// (0x00078b16) frm_month_g5_ParamLimits

0xd616,	// (0x00078b29) frm_month_g6_ParamLimits

0xd629,	// (0x00078b3c) frm_month_g7_ParamLimits

0x15b9,	// (0x0006cacc) frm_month_g8_ParamLimits

0xd63c,	// (0x00078b4f) frm_month_g9_ParamLimits

0xd649,	// (0x00078b5c) frm_month_g10_ParamLimits

0xd656,	// (0x00078b69) frm_month_g11_ParamLimits

0xd663,	// (0x00078b76) frm_month_g12_ParamLimits

0xd670,	// (0x00078b83) frm_month_g13_ParamLimits

0xd67d,	// (0x00078b90) frm_month_g14_ParamLimits

0xd68c,	// (0x00078b9f) frm_month_g15_ParamLimits

0xd69b,	// (0x00078bae) frm_month_g16_ParamLimits

0xfdbe,	// (0x0007b2d1) frm_month_g_ParamLimits

0x15c6,	// (0x0006cad9) cell_top_day_name_pane_t1_ParamLimits

0xd6aa,	// (0x00078bbd) cell_area_left_week_number_pane_g1_ParamLimits

0xd6b9,	// (0x00078bcc) cell_area_left_week_number_pane_t1_ParamLimits

0x1dca,	// (0x0006d2dd) cell_month_view_pane_g1_ParamLimits

0xd6cf,	// (0x00078be2) cell_month_view_pane_t1_ParamLimits

0x1d39,	// (0x0006d24c) main_clock2_btn_pane_g1

0x2516,	// (0x0006da29) main_clock2_btn_pane_t1

0x1d63,	// (0x0006d276) listscroll_cmail_pane_ParamLimits

0x0db3,	// (0x0006c2c6) main_sp_fs_email_pane_g1_ParamLimits

0x0dbf,	// (0x0006c2d2) main_sp_fs_email_pane_g2_ParamLimits

0xfc0c,	// (0x0007b11f) main_sp_fs_email_pane_g_ParamLimits

0x1135,	// (0x0006c648) list_recal_day_pane_ParamLimits

0x1146,	// (0x0006c659) mian_recal_day_pane_t1

0x6360,	// (0x00071873) list_single_dyc_row_text_pane_t4_ParamLimits

0x6360,	// (0x00071873) list_single_dyc_row_text_pane_t4

0x6397,	// (0x000718aa) list_single_dyc_row_text_pane_t5_ParamLimits

0x6397,	// (0x000718aa) list_single_dyc_row_text_pane_t5

0x640d,	// (0x00071920) list_single_dyc_row_text_pane_t6_ParamLimits

0x640d,	// (0x00071920) list_single_dyc_row_text_pane_t6

0x2410,	// (0x0006d923) aid_mgn_list_cale_time_pane

0x1d63,	// (0x0006d276) main_gallery2_pane_ParamLimits

0x4b05,	// (0x00070018) main_clock2_pane_cp01_t1

0x4b15,	// (0x00070028) main_clock2_pane_cp01_t3

0x0001,

0xf6fc,	// (0x0007ac0f) main_clock2_pane_cp01_t

0x717a,	// (0x0007268d) cale_week_scroll_pane_g16_ParamLimits

0x717a,	// (0x0007268d) cale_week_scroll_pane_g16

0x204d,	// (0x0006d560) vorec_slider_pane

0x16a4,	// (0x0006cbb7) vidtel_button_pane_t1_ParamLimits

0xcfc7,	// (0x000784da) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcfc7,	// (0x000784da) main_fs_bigclock_clock_pane_g2_ParamLimits

0xcfd4,	// (0x000784e7) main_fs_bigclock_clock_pane_g3_ParamLimits

0xcfd4,	// (0x000784e7) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd14,	// (0x0007b227) main_fs_bigclock_clock_pane_g_ParamLimits

0xcfe0,	// (0x000784f3) main_fs_bigclock_clock_pane_t1_ParamLimits

0xcff3,	// (0x00078506) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd1d,	// (0x0007b230) main_fs_bigclock_clock_pane_t_ParamLimits

0x9b3f,	// (0x00075052) main_mup3_lyrics_pane_ParamLimits

0x9b3f,	// (0x00075052) main_mup3_lyrics_pane

0xdb3b,	// (0x0007904e) main_mup3_lyrics_pane_t1_ParamLimits

0xdb3b,	// (0x0007904e) main_mup3_lyrics_pane_t1

0xa6ce,	// (0x00075be1) aid_main_mp4_pane_t1_area

0xa6d8,	// (0x00075beb) aid_main_mp4_pane_t2_area

0xa7dd,	// (0x00075cf0) main_mp4_pane_g7_ParamLimits

0xa7dd,	// (0x00075cf0) main_mp4_pane_g7

0xa7e9,	// (0x00075cfc) main_mp4_pane_g8_ParamLimits

0xa7e9,	// (0x00075cfc) main_mp4_pane_g8

0xabc0,	// (0x000760d3) aid_call6_pane_g1_size

0xd81f,	// (0x00078d32) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd81f,	// (0x00078d32) list_double_large_graphic_phob2_other_pane

0x23c8,	// (0x0006d8db) list_double_large_graphic_phob2_other_pane_g1

0x16c9,	// (0x0006cbdc) list_highlight_pane_cp026

0x1d63,	// (0x0006d276) main_welc_pane_ParamLimits

0xca82,	// (0x00077f95) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xca82,	// (0x00077f95) main_sp_fs_ctrlbar_pane_g3

0xca9a,	// (0x00077fad) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xca9a,	// (0x00077fad) main_sp_fs_ctrlbar_pane_g4

0xcacc,	// (0x00077fdf) toolbar2_fixed_button_pane_cp01

0xcad7,	// (0x00077fea) toolbar2_fixed_button_pane_cp02

0xcae2,	// (0x00077ff5) toolbar2_fixed_button_pane_cp03

0xd87a,	// (0x00078d8d) list_welc_entry_pane_ParamLimits

0xd87a,	// (0x00078d8d) list_welc_entry_pane

0xd8d7,	// (0x00078dea) main_welc_pane_g3_ParamLimits

0xd8d7,	// (0x00078dea) main_welc_pane_g3

0xd91d,	// (0x00078e30) main_welc_pane_t2_ParamLimits

0xd91d,	// (0x00078e30) main_welc_pane_t2

0xd931,	// (0x00078e44) main_welc_pane_t3_ParamLimits

0xd931,	// (0x00078e44) main_welc_pane_t3

0x0005,

0xfe20,	// (0x0007b333) main_welc_pane_t_ParamLimits

0xfe20,	// (0x0007b333) main_welc_pane_t

0xda2d,	// (0x00078f40) welc_button_pane_ParamLimits

0xda2d,	// (0x00078f40) welc_button_pane

0xda8b,	// (0x00078f9e) welc_service_logo_pane_ParamLimits

0xda8b,	// (0x00078f9e) welc_service_logo_pane

0xdb6d,	// (0x00079080) list_single_welc_entry_pane_ParamLimits

0xdb6d,	// (0x00079080) list_single_welc_entry_pane

0xdb7e,	// (0x00079091) list_single_welc_entry_pane_g1

0xdb86,	// (0x00079099) list_single_welc_entry_pane_t1

0xdb94,	// (0x000790a7) list_single_welc_entry_pane_t2

0x0001,

0xfe32,	// (0x0007b345) list_single_welc_entry_pane_t

0x16c9,	// (0x0006cbdc) bg_button_pane_cp035

0xdba2,	// (0x000790b5) welc_button_pane_t1

0x2524,	// (0x0006da37) welc_service_logo_pane_g1

0x252d,	// (0x0006da40) welc_service_logo_pane_g2

0x0001,

0xfe37,	// (0x0007b34a) welc_service_logo_pane_g

0x16c9,	// (0x0006cbdc) main_int_radio_pane

0x1eeb,	// (0x0006d3fe) list_single_fs_dyc_pane_g1

0x6856,	// (0x00071d69) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x6856,	// (0x00071d69) list_double_large_graphic_phob2_pane_g3

0xd772,	// (0x00078c85) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd772,	// (0x00078c85) list_double_large_graphic_phob2_pane_g4

0xdbb0,	// (0x000790c3) main_int_radio1_pane_ParamLimits

0xdbb0,	// (0x000790c3) main_int_radio1_pane

0x276d,	// (0x0006dc80) find_pane_cp02

0xdbc2,	// (0x000790d5) input_focus_pane_cp12_ParamLimits

0xdbc2,	// (0x000790d5) input_focus_pane_cp12

0xdbce,	// (0x000790e1) input_focus_pane_cp13_ParamLimits

0xdbce,	// (0x000790e1) input_focus_pane_cp13

0xdbe6,	// (0x000790f9) input_focus_pane_cp14_ParamLimits

0xdbe6,	// (0x000790f9) input_focus_pane_cp14

0x2776,	// (0x0006dc89) int_radio1_listscroll_pane

0xdbfe,	// (0x00079111) main_int_radio1_pane_g1_ParamLimits

0xdbfe,	// (0x00079111) main_int_radio1_pane_g1

0xdc0e,	// (0x00079121) main_int_radio1_pane_t1_ParamLimits

0xdc0e,	// (0x00079121) main_int_radio1_pane_t1

0xdc22,	// (0x00079135) main_int_radio1_pane_t2_ParamLimits

0xdc22,	// (0x00079135) main_int_radio1_pane_t2

0xdc36,	// (0x00079149) main_int_radio1_pane_t3_ParamLimits

0xdc36,	// (0x00079149) main_int_radio1_pane_t3

0xdc4a,	// (0x0007915d) main_int_radio1_pane_t4_ParamLimits

0xdc4a,	// (0x0007915d) main_int_radio1_pane_t4

0x2780,	// (0x0006dc93) main_int_radio1_pane_t5_ParamLimits

0x2780,	// (0x0006dc93) main_int_radio1_pane_t5

0xdc61,	// (0x00079174) main_int_radio1_pane_t6_ParamLimits

0xdc61,	// (0x00079174) main_int_radio1_pane_t6

0xdc73,	// (0x00079186) main_int_radio1_pane_t7_ParamLimits

0xdc73,	// (0x00079186) main_int_radio1_pane_t7

0xdc85,	// (0x00079198) main_int_radio1_pane_t8_ParamLimits

0xdc85,	// (0x00079198) main_int_radio1_pane_t8

0xdc99,	// (0x000791ac) main_int_radio1_pane_t9_ParamLimits

0xdc99,	// (0x000791ac) main_int_radio1_pane_t9

0xdcab,	// (0x000791be) main_int_radio1_pane_t10_ParamLimits

0xdcab,	// (0x000791be) main_int_radio1_pane_t10

0xdcdc,	// (0x000791ef) main_int_radio1_pane_t11_ParamLimits

0xdcdc,	// (0x000791ef) main_int_radio1_pane_t11

0xdd0d,	// (0x00079220) main_int_radio1_pane_t12_ParamLimits

0xdd0d,	// (0x00079220) main_int_radio1_pane_t12

0x000b,

0xfe3c,	// (0x0007b34f) main_int_radio1_pane_t_ParamLimits

0xfe3c,	// (0x0007b34f) main_int_radio1_pane_t

0x2792,	// (0x0006dca5) int_radio_list_pane

0x1117,	// (0x0006c62a) scroll_pane_cp037

0x279a,	// (0x0006dcad) list_double_large_graphic_int_radio_pane_ParamLimits

0x279a,	// (0x0006dcad) list_double_large_graphic_int_radio_pane

0x27b2,	// (0x0006dcc5) list_double_large_graphic_int_radio_pane_g1

0x6910,	// (0x00071e23) list_double_large_graphic_int_radio_pane_t1

0x691e,	// (0x00071e31) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe55,	// (0x0007b368) list_double_large_graphic_int_radio_pane_t

0x16c9,	// (0x0006cbdc) list_highlight_pane_cp027

0x24d9,	// (0x0006d9ec) main_button_pane_4

0xd8e3,	// (0x00078df6) main_welc_pane_g4_ParamLimits

0xd8e3,	// (0x00078df6) main_welc_pane_g4

0xd943,	// (0x00078e56) main_welc_pane_t4_ParamLimits

0xd943,	// (0x00078e56) main_welc_pane_t4

0xd955,	// (0x00078e68) main_welc_pane_t5_ParamLimits

0xd955,	// (0x00078e68) main_welc_pane_t5

0xd985,	// (0x00078e98) main_welc_pane_t6_ParamLimits

0xd985,	// (0x00078e98) main_welc_pane_t6

0xda3b,	// (0x00078f4e) welc_button_pane_2_ParamLimits

0xda3b,	// (0x00078f4e) welc_button_pane_2

0xda53,	// (0x00078f66) welc_button_pane_3_ParamLimits

0xda53,	// (0x00078f66) welc_button_pane_3

0x24e1,	// (0x0006d9f4) welc_button_pane_4

0xda6d,	// (0x00078f80) welc_button_pane_5_ParamLimits

0xda6d,	// (0x00078f80) welc_button_pane_5

0x6980,	// (0x00071e93) main_popup_welc_pane

0x27d3,	// (0x0006dce6) main_welc_sk_g3

0x27dd,	// (0x0006dcf0) main_welc_sk_g4

0x27e7,	// (0x0006dcfa) main_welc_sk_t3

0x27f7,	// (0x0006dd0a) main_welc_sk_t4

0x2807,	// (0x0006dd1a) popup_welc_pane_t4

0x2815,	// (0x0006dd28) popup_welc_pane_t5

0x2823,	// (0x0006dd36) popup_welc_pane_t6

0x16c9,	// (0x0006cbdc) main_acti_pane

0x16c9,	// (0x0006cbdc) main_sso_pane

0xdd24,	// (0x00079237) sso_body_pane_ParamLimits

0xdd24,	// (0x00079237) sso_body_pane

0xdd32,	// (0x00079245) sso_logo_pane_ParamLimits

0xdd32,	// (0x00079245) sso_logo_pane

0xdd63,	// (0x00079276) sso_sk_pane_ParamLimits

0xdd63,	// (0x00079276) sso_sk_pane

0x2861,	// (0x0006dd74) main_sso_logo_pane_g1

0xdd70,	// (0x00079283) sso_sk_pane_t1_ParamLimits

0xdd70,	// (0x00079283) sso_sk_pane_t1

0xdd84,	// (0x00079297) sso_sk_pane_t2_ParamLimits

0xdd84,	// (0x00079297) sso_sk_pane_t2

0x0001,

0xfe5a,	// (0x0007b36d) sso_sk_pane_t_ParamLimits

0xfe5a,	// (0x0007b36d) sso_sk_pane_t

0x286c,	// (0x0006dd7f) aid_sso_gap

0x2875,	// (0x0006dd88) aid_sso_txt1

0x287f,	// (0x0006dd92) aid_sso_txt2

0x2889,	// (0x0006dd9c) aid_sso_txt3

0x0002,

0xfe5f,	// (0x0007b372) aid_sso_txt

0x2893,	// (0x0006dda6) aid_sso_widget

0xdde1,	// (0x000792f4) sso_btn_pane_ParamLimits

0xdde1,	// (0x000792f4) sso_btn_pane

0xde55,	// (0x00079368) sso_option_pane_ParamLimits

0xde55,	// (0x00079368) sso_option_pane

0xdf01,	// (0x00079414) sso_query_pane_ParamLimits

0xdf01,	// (0x00079414) sso_query_pane

0xdf51,	// (0x00079464) sso_query_pane_cp01_ParamLimits

0xdf51,	// (0x00079464) sso_query_pane_cp01

0xdfa3,	// (0x000794b6) sso_t_hdr_pane_ParamLimits

0xdfa3,	// (0x000794b6) sso_t_hdr_pane

0xdfc7,	// (0x000794da) sso_t_nml_pane_ParamLimits

0xdfc7,	// (0x000794da) sso_t_nml_pane

0x289d,	// (0x0006ddb0) sso_t_sub_pane

0xdd3f,	// (0x00079252) sso_popup_window_ParamLimits

0xdd3f,	// (0x00079252) sso_popup_window

0xdd96,	// (0x000792a9) sso_apps_pane_ParamLimits

0xdd96,	// (0x000792a9) sso_apps_pane

0xddb9,	// (0x000792cc) sso_body_pane_g1

0xddc1,	// (0x000792d4) sso_body_pane_t1

0xddd1,	// (0x000792e4) sso_body_pane_t2

0x0001,

0xfe66,	// (0x0007b379) sso_body_pane_t

0xde25,	// (0x00079338) sso_btn_pane_cp01_ParamLimits

0xde25,	// (0x00079338) sso_btn_pane_cp01

0xded3,	// (0x000793e6) sso_prog_pane_ParamLimits

0xded3,	// (0x000793e6) sso_prog_pane

0xe017,	// (0x0007952a) sso_t_hdr_pane_t1_ParamLimits

0xe017,	// (0x0007952a) sso_t_hdr_pane_t1

0x28b2,	// (0x0006ddc5) input_focus_pane_cp10_ParamLimits

0x28b2,	// (0x0006ddc5) input_focus_pane_cp10

0x28c6,	// (0x0006ddd9) sso_query_pane_t1_ParamLimits

0x28c6,	// (0x0006ddd9) sso_query_pane_t1

0x28d9,	// (0x0006ddec) sso_query_pane_t2_ParamLimits

0x28d9,	// (0x0006ddec) sso_query_pane_t2

0x28f2,	// (0x0006de05) sso_query_pane_t3_ParamLimits

0x28f2,	// (0x0006de05) sso_query_pane_t3

0x291c,	// (0x0006de2f) sso_query_pane_t4_ParamLimits

0x291c,	// (0x0006de2f) sso_query_pane_t4

0x0003,

0xfe6b,	// (0x0007b37e) sso_query_pane_t_ParamLimits

0xfe6b,	// (0x0007b37e) sso_query_pane_t

0x27ca,	// (0x0006dcdd) bg_button_pane_cp22

0x27bb,	// (0x0006dcce) sso_btn_pane_t1

0xe030,	// (0x00079543) sso_t_nml_pane_t1_ParamLimits

0xe030,	// (0x00079543) sso_t_nml_pane_t1

0x2940,	// (0x0006de53) sso_option_row_pane_ParamLimits

0x2940,	// (0x0006de53) sso_option_row_pane

0x294d,	// (0x0006de60) sso_t_sub_pane_t1_ParamLimits

0x294d,	// (0x0006de60) sso_t_sub_pane_t1

0x1d63,	// (0x0006d276) bg_popup_window_pane_cp11_ParamLimits

0x1d63,	// (0x0006d276) bg_popup_window_pane_cp11

0x296a,	// (0x0006de7d) popup_sk_window_cp01_ParamLimits

0x296a,	// (0x0006de7d) popup_sk_window_cp01

0x2977,	// (0x0006de8a) sso_popup_body_pane_ParamLimits

0x2977,	// (0x0006de8a) sso_popup_body_pane

0x2984,	// (0x0006de97) scroll_pane_cp21_ParamLimits

0x2984,	// (0x0006de97) scroll_pane_cp21

0x2991,	// (0x0006dea4) sso_popup_body_t_pane_ParamLimits

0x2991,	// (0x0006dea4) sso_popup_body_t_pane

0x299e,	// (0x0006deb1) sso_popup_body_t_hdr_pane_ParamLimits

0x299e,	// (0x0006deb1) sso_popup_body_t_hdr_pane

0xe04d,	// (0x00079560) sso_popup_body_t_nml_pane_ParamLimits

0xe04d,	// (0x00079560) sso_popup_body_t_nml_pane

0xe06b,	// (0x0007957e) sso_popup_body_t_sub_pane_ParamLimits

0xe06b,	// (0x0007957e) sso_popup_body_t_sub_pane

0x29b0,	// (0x0006dec3) sso_popup_body_t_hdr_pane_t1

0xe08e,	// (0x000795a1) sso_popup_body_t_nml_pane_t1_ParamLimits

0xe08e,	// (0x000795a1) sso_popup_body_t_nml_pane_t1

0x29c0,	// (0x0006ded3) sso_popup_body_t_sub_pane_t1_ParamLimits

0x29c0,	// (0x0006ded3) sso_popup_body_t_sub_pane_t1

0x1e16,	// (0x0006d329) sso_prog_pane_g1

0xe0d2,	// (0x000795e5) sso_apps_pane_comp1_ParamLimits

0xe0d2,	// (0x000795e5) sso_apps_pane_comp1

0x29e5,	// (0x0006def8) sso_apps_pane_comp1_g1

0x29ed,	// (0x0006df00) sso_apps_pane_comp1_t1

0x2a09,	// (0x0006df1c) sso_option_row_pane_g1

0x2a11,	// (0x0006df24) sso_option_row_pane_t1

0x0e52,	// (0x0006c365) list_cmail_pane_ParamLimits

0x16c9,	// (0x0006cbdc) main_call7_pane

0xd868,	// (0x00078d7b) bg_welc_area_ParamLimits

0xd868,	// (0x00078d7b) bg_welc_area

0xd9bb,	// (0x00078ece) sso_t_hdr_pane_a_t1_ParamLimits

0xd9bb,	// (0x00078ece) sso_t_hdr_pane_a_t1

0xd9cf,	// (0x00078ee2) sso_t_nml_pane_a_t1_ParamLimits

0xd9cf,	// (0x00078ee2) sso_t_nml_pane_a_t1

0xd9f9,	// (0x00078f0c) sso_t_sub_pane_a_t1_ParamLimits

0xd9f9,	// (0x00078f0c) sso_t_sub_pane_a_t1

0xda7d,	// (0x00078f90) welc_button_pane_cp01_ParamLimits

0xda7d,	// (0x00078f90) welc_button_pane_cp01

0x27bb,	// (0x0006dcce) sso_btn_pane_t1_copy1

0x27ca,	// (0x0006dcdd) welc_button_pane_2_comp1

0x2831,	// (0x0006dd44) sso_t_hdr_pane_p_t1

0x2841,	// (0x0006dd54) sso_t_nml_pane_p_t1

0x2851,	// (0x0006dd64) sso_t_sub_pane_p_t1

0x16c9,	// (0x0006cbdc) main_att_pane

0x16c9,	// (0x0006cbdc) main_vod_pane

0x289d,	// (0x0006ddb0) sso_t_sub_pane_ParamLimits

0x29fb,	// (0x0006df0e) input_focus_pane_cp10_t1

0x2a11,	// (0x0006df24) sso_option_row_pane_t1_ParamLimits

0xe0e9,	// (0x000795fc) main_att_body_pane_ParamLimits

0xe0e9,	// (0x000795fc) main_att_body_pane

0xe0fd,	// (0x00079610) att_btn_emg_pane_ParamLimits

0xe0fd,	// (0x00079610) att_btn_emg_pane

0xe115,	// (0x00079628) att_btn_pane_ParamLimits

0xe115,	// (0x00079628) att_btn_pane

0xe17d,	// (0x00079690) att_btn_pane_cp01_ParamLimits

0xe17d,	// (0x00079690) att_btn_pane_cp01

0xe197,	// (0x000796aa) att_li_srv_pane_ParamLimits

0xe197,	// (0x000796aa) att_li_srv_pane

0xe1a9,	// (0x000796bc) att_opt_pane_ParamLimits

0xe1a9,	// (0x000796bc) att_opt_pane

0xe1ed,	// (0x00079700) att_query_pane_ParamLimits

0xe1ed,	// (0x00079700) att_query_pane

0xe25d,	// (0x00079770) att_query_pane_cp01_ParamLimits

0xe25d,	// (0x00079770) att_query_pane_cp01

0xe2a1,	// (0x000797b4) att_t_hdr_pane_ParamLimits

0xe2a1,	// (0x000797b4) att_t_hdr_pane

0xe307,	// (0x0007981a) att_t_nml_pane_ParamLimits

0xe307,	// (0x0007981a) att_t_nml_pane

0xe36f,	// (0x00079882) att_t_nml_pane_cp01_ParamLimits

0xe36f,	// (0x00079882) att_t_nml_pane_cp01

0xe393,	// (0x000798a6) att_t_nmlb_pane_ParamLimits

0xe393,	// (0x000798a6) att_t_nmlb_pane

0xe3f7,	// (0x0007990a) att_term_pane_ParamLimits

0xe3f7,	// (0x0007990a) att_term_pane

0xe439,	// (0x0007994c) main_att_body_pane_g1_ParamLimits

0xe439,	// (0x0007994c) main_att_body_pane_g1

0x2a2a,	// (0x0006df3d) att_t_hdr_pane_t1_ParamLimits

0x2a2a,	// (0x0006df3d) att_t_hdr_pane_t1

0x2a43,	// (0x0006df56) att_t_nml_pane_t1_ParamLimits

0x2a43,	// (0x0006df56) att_t_nml_pane_t1

0x2a68,	// (0x0006df7b) att_btn_pane_t1

0x27ca,	// (0x0006dcdd) bg_button_pane_cp23

0xe463,	// (0x00079976) att_li_srv_row_pane_ParamLimits

0xe463,	// (0x00079976) att_li_srv_row_pane

0x2a78,	// (0x0006df8b) att_t_nmlb_pane_t1_ParamLimits

0x2a78,	// (0x0006df8b) att_t_nmlb_pane_t1

0x2a96,	// (0x0006dfa9) att_query_pane_t1

0x2aa5,	// (0x0006dfb8) att_query_pane_t2

0x2ab4,	// (0x0006dfc7) att_query_pane_t3

0x0002,

0xfe74,	// (0x0007b387) att_query_pane_t

0x2ac3,	// (0x0006dfd6) input_focus_pane_cp11

0x2acc,	// (0x0006dfdf) att_term_pane_t1_ParamLimits

0x2acc,	// (0x0006dfdf) att_term_pane_t1

0x16c9,	// (0x0006cbdc) att_opt_row_pane

0x2a09,	// (0x0006df1c) att_opt_row_pane_g1

0x2ae9,	// (0x0006dffc) att_opt_row_pane_t1_ParamLimits

0x2ae9,	// (0x0006dffc) att_opt_row_pane_t1

0xe473,	// (0x00079986) att_li_srv_row_pane_g1

0xe47b,	// (0x0007998e) att_li_srv_row_pane_t1_ParamLimits

0xe47b,	// (0x0007998e) att_li_srv_row_pane_t1

0xe490,	// (0x000799a3) att_li_srv_row_pane_t2_ParamLimits

0xe490,	// (0x000799a3) att_li_srv_row_pane_t2

0x0001,

0xfe7b,	// (0x0007b38e) att_li_srv_row_pane_t_ParamLimits

0xfe7b,	// (0x0007b38e) att_li_srv_row_pane_t

0x2b02,	// (0x0006e015) att_btn_close_pane_g1

0x16c9,	// (0x0006cbdc) bg_button_pane_cp24

0x9529,	// (0x00074a3c) main_vod_body_pane_ParamLimits

0x9529,	// (0x00074a3c) main_vod_body_pane

0xe4a5,	// (0x000799b8) main_vod_body_pane_g1_ParamLimits

0xe4a5,	// (0x000799b8) main_vod_body_pane_g1

0xe4d5,	// (0x000799e8) scroll_pane_cp24_ParamLimits

0xe4d5,	// (0x000799e8) scroll_pane_cp24

0xe51d,	// (0x00079a30) vod_btn_pane_ParamLimits

0xe51d,	// (0x00079a30) vod_btn_pane

0xe55b,	// (0x00079a6e) vod_det_pane_ParamLimits

0xe55b,	// (0x00079a6e) vod_det_pane

0xe587,	// (0x00079a9a) vod_logo_g1_ParamLimits

0xe587,	// (0x00079a9a) vod_logo_g1

0xe5c1,	// (0x00079ad4) vod_opt_pane_ParamLimits

0xe5c1,	// (0x00079ad4) vod_opt_pane

0xe5f1,	// (0x00079b04) vod_opt_pane_cp01_ParamLimits

0xe5f1,	// (0x00079b04) vod_opt_pane_cp01

0xe619,	// (0x00079b2c) vod_query_pane_ParamLimits

0xe619,	// (0x00079b2c) vod_query_pane

0xe641,	// (0x00079b54) vod_query_pane_cp01_ParamLimits

0xe641,	// (0x00079b54) vod_query_pane_cp01

0xe64d,	// (0x00079b60) vod_t_nml_pane_ParamLimits

0xe64d,	// (0x00079b60) vod_t_nml_pane

0xe6f3,	// (0x00079c06) vod_t_nml_pane_cp01_ParamLimits

0xe6f3,	// (0x00079c06) vod_t_nml_pane_cp01

0xe72b,	// (0x00079c3e) vod_t_sub_pane_ParamLimits

0xe72b,	// (0x00079c3e) vod_t_sub_pane

0xe757,	// (0x00079c6a) vod_t_sub_pane_cp01_ParamLimits

0xe757,	// (0x00079c6a) vod_t_sub_pane_cp01

0x2ac3,	// (0x0006dfd6) vod_query_field_pane

0x2b0a,	// (0x0006e01d) vod_query_pane_t1

0x27ca,	// (0x0006dcdd) bg_button_pane_cp25

0x27bb,	// (0x0006dcce) sso_btn_pane_t1_copy2

0xe77f,	// (0x00079c92) vod_t_nml_pane_t1_ParamLimits

0xe77f,	// (0x00079c92) vod_t_nml_pane_t1

0x2b19,	// (0x0006e02c) vod_opt_row_pane_ParamLimits

0x2b19,	// (0x0006e02c) vod_opt_row_pane

0x2b2b,	// (0x0006e03e) vod_t_sub_pane_t1_ParamLimits

0x2b2b,	// (0x0006e03e) vod_t_sub_pane_t1

0x2b44,	// (0x0006e057) vod_det_cell_pane_ParamLimits

0x2b44,	// (0x0006e057) vod_det_cell_pane

0x16c9,	// (0x0006cbdc) input_focus_pane_cp15

0x2b55,	// (0x0006e068) vod_query_field_pane_t1

0x2b63,	// (0x0006e076) vod_opt_row_pane_g1_ParamLimits

0x2b63,	// (0x0006e076) vod_opt_row_pane_g1

0x2b6f,	// (0x0006e082) vod_opt_row_pane_t1_ParamLimits

0x2b6f,	// (0x0006e082) vod_opt_row_pane_t1

0x2b8e,	// (0x0006e0a1) vod_det_cell_field_pane

0x2b97,	// (0x0006e0aa) vod_det_cell_pane_g1

0x2b9f,	// (0x0006e0b2) vod_det_cell_pane_t1

0x16c9,	// (0x0006cbdc) input_focus_pane_cp16

0x2bae,	// (0x0006e0c1) vod_det_cell_field_pane_t1

0xd25c,	// (0x0007876f) call7_btn_grp_pane_ParamLimits

0xd25c,	// (0x0007876f) call7_btn_grp_pane

0xe7b6,	// (0x00079cc9) call7_bubble_pane_ParamLimits

0xe7b6,	// (0x00079cc9) call7_bubble_pane

0xd297,	// (0x000787aa) cell_call7_btn_pane_ParamLimits

0xd297,	// (0x000787aa) cell_call7_btn_pane

0xe7c4,	// (0x00079cd7) call7_pane_g1_ParamLimits

0xe7c4,	// (0x00079cd7) call7_pane_g1

0xe7d3,	// (0x00079ce6) call7_windows_conf_pane_ParamLimits

0xe7d3,	// (0x00079ce6) call7_windows_conf_pane

0xe7ed,	// (0x00079d00) popup_call7_1st_window_ParamLimits

0xe7ed,	// (0x00079d00) popup_call7_1st_window

0xe7fb,	// (0x00079d0e) popup_call7_2nd_window_ParamLimits

0xe7fb,	// (0x00079d0e) popup_call7_2nd_window

0xe809,	// (0x00079d1c) popup_call7_3rd_window_ParamLimits

0xe809,	// (0x00079d1c) popup_call7_3rd_window

0x16c9,	// (0x0006cbdc) bg_button_pane_cp26

0x1535,	// (0x0006ca48) cell_call7_btn_pane_g1

0x16ba,	// (0x0006cbcd) cell_call7_btn_pane_t1

0x16c9,	// (0x0006cbdc) bg_popup_window_pane_cp12

0x2bbc,	// (0x0006e0cf) popup_call7_1st_window_g1

0x2bc4,	// (0x0006e0d7) popup_call7_1st_window_g2

0x2bcc,	// (0x0006e0df) popup_call7_1st_window_g3

0x0002,

0xfe80,	// (0x0007b393) popup_call7_1st_window_g

0x2bd4,	// (0x0006e0e7) popup_call7_1st_window_t1

0x2be3,	// (0x0006e0f6) popup_call7_1st_window_t2

0x2bf1,	// (0x0006e104) popup_call7_1st_window_t3

0x0002,

0xfe87,	// (0x0007b39a) popup_call7_1st_window_t

0x16c9,	// (0x0006cbdc) bg_popup_window_pane_cp13

0x2bff,	// (0x0006e112) popup_call7_2nd_window_g1

0x2c07,	// (0x0006e11a) popup_call7_2nd_window_g2

0x2c0f,	// (0x0006e122) popup_call7_2nd_window_g3

0x0002,

0xfe8e,	// (0x0007b3a1) popup_call7_2nd_window_g

0x2bd4,	// (0x0006e0e7) popup_call7_2nd_window_t1

0x16c9,	// (0x0006cbdc) bg_popup_window_pane_cp14

0x2c17,	// (0x0006e12a) call7_list_conf_pane

0x2c1f,	// (0x0006e132) call7_list_conf_row_pane_ParamLimits

0x2c1f,	// (0x0006e132) call7_list_conf_row_pane

0x2c32,	// (0x0006e145) call7_list_conf_row_pane_g1

0x2c3a,	// (0x0006e14d) call7_list_conf_row_pane_g2

0x0001,

0xfe95,	// (0x0007b3a8) call7_list_conf_row_pane_g

0x2c42,	// (0x0006e155) call7_list_conf_row_pane_t1

0x16c9,	// (0x0006cbdc) list_highlight_pane_cp22

0xdea5,	// (0x000793b8) sso_option_pane_cp01_ParamLimits

0xdea5,	// (0x000793b8) sso_option_pane_cp01

0x1d41,	// (0x0006d254) msg_header_pane_ParamLimits

0x3174,	// (0x0006e687) bg_button_pane_cp01_ParamLimits

0x5cea,	// (0x000711fd) input_focus_pane_cp07_ParamLimits

0xcb16,	// (0x00078029) popup_email_progress_window

0x1e16,	// (0x0006d329) popup_email_progress_window_g1

0x2c50,	// (0x0006e163) popup_email_progress_window_g2

0x0001,

0xfe9a,	// (0x0007b3ad) popup_email_progress_window_g

0x2c58,	// (0x0006e16b) popup_email_progress_window_t1
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

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
