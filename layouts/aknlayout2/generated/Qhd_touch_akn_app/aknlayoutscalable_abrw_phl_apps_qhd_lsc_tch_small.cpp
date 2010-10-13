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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0006130e };

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
0x087e,	// (0x00061b8c) Screen

0x088a,	// (0x00061b98) application_window

0x08c6,	// (0x00061bd4) area_bottom_pane_ParamLimits

0x08c6,	// (0x00061bd4) area_bottom_pane

0x08ff,	// (0x00061c0d) area_top_pane_ParamLimits

0x08ff,	// (0x00061c0d) area_top_pane

0x9e59,	// (0x0006b167) call_video_uplink_pane_ParamLimits

0x9e59,	// (0x0006b167) call_video_uplink_pane

0x098d,	// (0x00061c9b) main_pane_ParamLimits

0x098d,	// (0x00061c9b) main_pane

0xe4e5,	// (0x0006f7f3) context_pane

0x363f,	// (0x0006494d) navi_pane

0x3671,	// (0x0006497f) popup_cale_events_window_ParamLimits

0x3671,	// (0x0006497f) popup_cale_events_window

0xe4f8,	// (0x0006f806) popup_mup_playback_window

0x3689,	// (0x00064997) signal_pane

0xc079,	// (0x0006d387) main_browser_pane

0xc252,	// (0x0006d560) main_burst_pane

0x338d,	// (0x0006469b) main_calc_pane

0xe4d9,	// (0x0006f7e7) main_cale_day_pane

0x33a1,	// (0x000646af) main_cale_month_pane

0xe4d9,	// (0x0006f7e7) main_cale_week_pane

0xc252,	// (0x0006d560) main_call_pane

0xbceb,	// (0x0006cff9) main_call_poc_pane

0xc252,	// (0x0006d560) main_camera_pane

0xc252,	// (0x0006d560) main_chi_dic_pane

0xcf7a,	// (0x0006e288) main_clock_pane

0xbceb,	// (0x0006cff9) main_fmradio_pane

0xc252,	// (0x0006d560) main_graph_messa_pane

0xbceb,	// (0x0006cff9) main_help_pane

0xc079,	// (0x0006d387) main_im_pane

0xbf46,	// (0x0006d254) main_image_pane_ParamLimits

0xbf46,	// (0x0006d254) main_image_pane

0xbceb,	// (0x0006cff9) main_location2_pane

0xc252,	// (0x0006d560) main_location_pane

0xbf46,	// (0x0006d254) main_messa_pane

0xbceb,	// (0x0006cff9) main_mp2_pane

0xc252,	// (0x0006d560) main_mp_pane

0xbceb,	// (0x0006cff9) main_msg_pane

0xbceb,	// (0x0006cff9) main_mup_eq_pane

0xbceb,	// (0x0006cff9) main_mup_pane

0xc079,	// (0x0006d387) main_notes_pane

0xbceb,	// (0x0006cff9) main_pec_pane

0xbceb,	// (0x0006cff9) main_phob_pane

0xbceb,	// (0x0006cff9) main_pinb_pane

0xbceb,	// (0x0006cff9) main_postcard_pane

0xbceb,	// (0x0006cff9) main_qdial_pane

0xc252,	// (0x0006d560) main_skin_pane

0xbceb,	// (0x0006cff9) main_smil2_pane

0xc252,	// (0x0006d560) main_smil_pane

0xc252,	// (0x0006d560) main_video_pane

0xc252,	// (0x0006d560) main_video_tele_pane

0xbf46,	// (0x0006d254) main_viewer_pane_ParamLimits

0xbf46,	// (0x0006d254) main_viewer_pane

0xc252,	// (0x0006d560) main_vorec_pane

0x33f3,	// (0x00064701) popup_blid_sat_info_window_ParamLimits

0x33f3,	// (0x00064701) popup_blid_sat_info_window

0x344b,	// (0x00064759) popup_dyc_status_message_window_ParamLimits

0x344b,	// (0x00064759) popup_dyc_status_message_window

0x3465,	// (0x00064773) popup_grid_large_graphic_window_ParamLimits

0x3465,	// (0x00064773) popup_grid_large_graphic_window

0x3521,	// (0x0006482f) popup_loc_request_window_ParamLimits

0x3521,	// (0x0006482f) popup_loc_request_window

0x3617,	// (0x00064925) popup_wml_address_window_ParamLimits

0x3617,	// (0x00064925) popup_wml_address_window

0x31c7,	// (0x000644d5) call_muted_g1

0x2ebd,	// (0x000641cb) popup_call_audio_conf_window_ParamLimits

0x2ebd,	// (0x000641cb) popup_call_audio_conf_window

0x31db,	// (0x000644e9) popup_call_audio_first_window_ParamLimits

0x31db,	// (0x000644e9) popup_call_audio_first_window

0x3251,	// (0x0006455f) popup_call_audio_in_window_ParamLimits

0x3251,	// (0x0006455f) popup_call_audio_in_window

0x328d,	// (0x0006459b) popup_call_audio_out_window_ParamLimits

0x328d,	// (0x0006459b) popup_call_audio_out_window

0x32c7,	// (0x000645d5) popup_call_audio_second_window_ParamLimits

0x32c7,	// (0x000645d5) popup_call_audio_second_window

0x331d,	// (0x0006462b) popup_call_audio_wait_window_ParamLimits

0x331d,	// (0x0006462b) popup_call_audio_wait_window

0x3352,	// (0x00064660) popup_number_entry_window_ParamLimits

0x3352,	// (0x00064660) popup_number_entry_window

0xb8d8,	// (0x0006cbe6) bg_popup_call_pane_cp05_ParamLimits

0xb8d8,	// (0x0006cbe6) bg_popup_call_pane_cp05

0xb8f8,	// (0x0006cc06) popup_number_entry_window_t1

0xb90b,	// (0x0006cc19) popup_number_entry_window_t2

0xb91d,	// (0x0006cc2b) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x0007034e) popup_number_entry_window_t

0xb92f,	// (0x0006cc3d) text_title_cp2

0xb942,	// (0x0006cc50) bg_popup_call_pane_cp_ParamLimits

0xb942,	// (0x0006cc50) bg_popup_call_pane_cp

0xb950,	// (0x0006cc5e) call_thumbnail_pane

0xb958,	// (0x0006cc66) popup_call_audio_in_window_g1_ParamLimits

0xb958,	// (0x0006cc66) popup_call_audio_in_window_g1

0xb964,	// (0x0006cc72) popup_call_audio_in_window_g2_ParamLimits

0xb964,	// (0x0006cc72) popup_call_audio_in_window_g2

0xb970,	// (0x0006cc7e) popup_call_audio_in_window_g3_ParamLimits

0xb970,	// (0x0006cc7e) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x00070357) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x00070357) popup_call_audio_in_window_g

0xb97c,	// (0x0006cc8a) popup_call_audio_in_window_t1_ParamLimits

0xb97c,	// (0x0006cc8a) popup_call_audio_in_window_t1

0xb998,	// (0x0006cca6) popup_call_audio_in_window_t2_ParamLimits

0xb998,	// (0x0006cca6) popup_call_audio_in_window_t2

0xb9b4,	// (0x0006ccc2) popup_call_audio_in_window_t3_ParamLimits

0xb9b4,	// (0x0006ccc2) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x0007035e) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x0007035e) popup_call_audio_in_window_t

0xb942,	// (0x0006cc50) bg_popup_call_pane_cp01_ParamLimits

0xb942,	// (0x0006cc50) bg_popup_call_pane_cp01

0xb950,	// (0x0006cc5e) call_thumbnail_pane_cp02

0xb9c7,	// (0x0006ccd5) call_type_pane_cp022

0xb9cf,	// (0x0006ccdd) popup_call_audio_out_window_g1_ParamLimits

0xb9cf,	// (0x0006ccdd) popup_call_audio_out_window_g1

0xb9e1,	// (0x0006ccef) popup_call_audio_out_window_g2_ParamLimits

0xb9e1,	// (0x0006ccef) popup_call_audio_out_window_g2

0xb9ed,	// (0x0006ccfb) popup_call_audio_out_window_g3_ParamLimits

0xb9ed,	// (0x0006ccfb) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x00070365) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x00070365) popup_call_audio_out_window_g

0xb9ff,	// (0x0006cd0d) popup_call_audio_out_window_t1_ParamLimits

0xb9ff,	// (0x0006cd0d) popup_call_audio_out_window_t1

0xba17,	// (0x0006cd25) popup_call_audio_out_window_t2_ParamLimits

0xba17,	// (0x0006cd25) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x0007036c) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x0007036c) popup_call_audio_out_window_t

0xba2c,	// (0x0006cd3a) bg_popup_call_pane_ParamLimits

0xba2c,	// (0x0006cd3a) bg_popup_call_pane

0x0ae2,	// (0x00061df0) call_thumbnail_pane_cp_ParamLimits

0x0ae2,	// (0x00061df0) call_thumbnail_pane_cp

0xbab0,	// (0x0006cdbe) call_type_pane_cp01_ParamLimits

0xbab0,	// (0x0006cdbe) call_type_pane_cp01

0xbaf4,	// (0x0006ce02) popup_call_audio_first_window_g1_ParamLimits

0xbaf4,	// (0x0006ce02) popup_call_audio_first_window_g1

0xbb40,	// (0x0006ce4e) popup_call_audio_first_window_g2_ParamLimits

0xbb40,	// (0x0006ce4e) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x00070371) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x00070371) popup_call_audio_first_window_g

0xbb84,	// (0x0006ce92) popup_call_audio_first_window_t1_ParamLimits

0xbb84,	// (0x0006ce92) popup_call_audio_first_window_t1

0xbc30,	// (0x0006cf3e) popup_call_audio_first_window_t4_ParamLimits

0xbc30,	// (0x0006cf3e) popup_call_audio_first_window_t4

0xbcbc,	// (0x0006cfca) popup_call_audio_first_window_t5_ParamLimits

0xbcbc,	// (0x0006cfca) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x00070376) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x00070376) popup_call_audio_first_window_t

0xbceb,	// (0x0006cff9) bg_popup_call_pane_cp02

0xbcf5,	// (0x0006d003) call_type_pane_cp023

0xbcfd,	// (0x0006d00b) popup_call_audio_wait_window_g1

0xbd05,	// (0x0006d013) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x0007037d) popup_call_audio_wait_window_g

0xbd0d,	// (0x0006d01b) popup_call_audio_wait_window_t3

0xbd1b,	// (0x0006d029) bg_popup_call_pane_cp03_ParamLimits

0xbd1b,	// (0x0006d029) bg_popup_call_pane_cp03

0xbd7b,	// (0x0006d089) call_thumbnail_pane_cp011_ParamLimits

0xbd7b,	// (0x0006d089) call_thumbnail_pane_cp011

0xbd87,	// (0x0006d095) call_type_pane_cp034_ParamLimits

0xbd87,	// (0x0006d095) call_type_pane_cp034

0xbdc3,	// (0x0006d0d1) popup_call_audio_second_window_g1_ParamLimits

0xbdc3,	// (0x0006d0d1) popup_call_audio_second_window_g1

0xbdff,	// (0x0006d10d) popup_call_audio_second_window_g2_ParamLimits

0xbdff,	// (0x0006d10d) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x00070382) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x00070382) popup_call_audio_second_window_g

0xbe3b,	// (0x0006d149) popup_call_audio_second_window_t1_ParamLimits

0xbe3b,	// (0x0006d149) popup_call_audio_second_window_t1

0xbebc,	// (0x0006d1ca) popup_call_audio_second_window_t2_ParamLimits

0xbebc,	// (0x0006d1ca) popup_call_audio_second_window_t2

0xbef2,	// (0x0006d200) popup_call_audio_second_window_t3_ParamLimits

0xbef2,	// (0x0006d200) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x00070387) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x00070387) popup_call_audio_second_window_t

0xbceb,	// (0x0006cff9) bg_popup_call_pane_cp04

0xbf28,	// (0x0006d236) list_conf_pane

0xbf30,	// (0x0006d23e) popup_call_audio_conf_window_t1

0xbf3e,	// (0x0006d24c) call_thumbnail_pane_g1

0xbf46,	// (0x0006d254) bg_pinb_pane_ParamLimits

0xbf46,	// (0x0006d254) bg_pinb_pane

0xbf54,	// (0x0006d262) find_pinb_pane

0xbf46,	// (0x0006d254) listscroll_pinb_pane_ParamLimits

0xbf46,	// (0x0006d254) listscroll_pinb_pane

0xbf5e,	// (0x0006d26c) pinb_bg_pane_g1

0xbf5e,	// (0x0006d26c) pinb_bg_pane_g2

0xbf5e,	// (0x0006d26c) pinb_bg_pane_g3

0xbf5e,	// (0x0006d26c) pinb_bg_pane_g4

0xbf5e,	// (0x0006d26c) pinb_bg_pane_g5

0xbf5e,	// (0x0006d26c) pinb_bg_pane_g6

0xbf5e,	// (0x0006d26c) pinb_bg_pane_g7

0xbf5e,	// (0x0006d26c) pinb_bg_pane_g8

0xbf5e,	// (0x0006d26c) pinb_bg_pane_g9

0xbf5e,	// (0x0006d26c) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x0007038e) pinb_bg_pane_g

0xb8ce,	// (0x0006cbdc) grid_pinb_pane

0xb8ce,	// (0x0006cbdc) list_pinb_pane

0xbf68,	// (0x0006d276) scroll_pane_cp01_ParamLimits

0xbf68,	// (0x0006d276) scroll_pane_cp01

0xbf76,	// (0x0006d284) find_pinb_pane_g1_ParamLimits

0xbf76,	// (0x0006d284) find_pinb_pane_g1

0xbf8e,	// (0x0006d29c) find_pinb_pane_t1

0xbfa0,	// (0x0006d2ae) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x000703a8) find_pinb_pane_t

0xbfb5,	// (0x0006d2c3) input_focus_pane_cp01_ParamLimits

0xbfb5,	// (0x0006d2c3) input_focus_pane_cp01

0xbfc1,	// (0x0006d2cf) cell_pinb_pane_ParamLimits

0xbfc1,	// (0x0006d2cf) cell_pinb_pane

0xbfcf,	// (0x0006d2dd) cell_pinb_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) cell_pinb_pane_g1

0xbfdd,	// (0x0006d2eb) cell_pinb_pane_g2_ParamLimits

0xbfdd,	// (0x0006d2eb) cell_pinb_pane_g2

0xbfdd,	// (0x0006d2eb) cell_pinb_pane_g3_ParamLimits

0xbfdd,	// (0x0006d2eb) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x000703ad) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x000703ad) cell_pinb_pane_g

0xbceb,	// (0x0006cff9) grid_highlight_pane_cp01

0xbfc1,	// (0x0006d2cf) list_pinb_item_pane_ParamLimits

0xbfc1,	// (0x0006d2cf) list_pinb_item_pane

0xb8ce,	// (0x0006cbdc) list_highlight_pane_cp02

0xbfeb,	// (0x0006d2f9) list_pinb_item_pane_g1_ParamLimits

0xbfeb,	// (0x0006d2f9) list_pinb_item_pane_g1

0xbfdd,	// (0x0006d2eb) list_pinb_item_pane_g2_ParamLimits

0xbfdd,	// (0x0006d2eb) list_pinb_item_pane_g2

0xbfcf,	// (0x0006d2dd) list_pinb_item_pane_g3_ParamLimits

0xbfcf,	// (0x0006d2dd) list_pinb_item_pane_g3

0xbfdd,	// (0x0006d2eb) list_pinb_item_pane_g4_ParamLimits

0xbfdd,	// (0x0006d2eb) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x000703b4) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x000703b4) list_pinb_item_pane_g

0xc007,	// (0x0006d315) list_pinb_item_pane_t1_ParamLimits

0xc007,	// (0x0006d315) list_pinb_item_pane_t1

0x0b24,	// (0x00061e32) calc_display_pane

0x0b49,	// (0x00061e57) calc_paper_pane

0x0b6c,	// (0x00061e7a) grid_calc_pane

0xb8ce,	// (0x0006cbdc) bg_list_pane_cp01

0xc01b,	// (0x0006d329) clock_g1

0xc01b,	// (0x0006d329) clock_g2

0x0001,

0xf0af,	// (0x000703bd) clock_g

0xc025,	// (0x0006d333) clock_t1_ParamLimits

0xc025,	// (0x0006d333) clock_t1

0xc039,	// (0x0006d347) clock_t2_ParamLimits

0xc039,	// (0x0006d347) clock_t2

0xc039,	// (0x0006d347) clock_t3_ParamLimits

0xc039,	// (0x0006d347) clock_t3

0xc039,	// (0x0006d347) clock_t4_ParamLimits

0xc039,	// (0x0006d347) clock_t4

0xc025,	// (0x0006d333) clock_t5_ParamLimits

0xc025,	// (0x0006d333) clock_t5

0xc039,	// (0x0006d347) clock_t6_ParamLimits

0xc039,	// (0x0006d347) clock_t6

0xc039,	// (0x0006d347) clock_t7_ParamLimits

0xc039,	// (0x0006d347) clock_t7

0xc039,	// (0x0006d347) clock_t8_ParamLimits

0xc039,	// (0x0006d347) clock_t8

0xc039,	// (0x0006d347) clock_t9_ParamLimits

0xc039,	// (0x0006d347) clock_t9

0x0008,

0xf0b4,	// (0x000703c2) clock_t_ParamLimits

0xf0b4,	// (0x000703c2) clock_t

0xb8ce,	// (0x0006cbdc) popup_clock_analogue_window_cp02

0xb8ce,	// (0x0006cbdc) popup_clock_digital_window_cp01

0xbceb,	// (0x0006cff9) listscroll_help_pane

0xbceb,	// (0x0006cff9) phob_pre_status_pane

0xc04d,	// (0x0006d35b) grid_qdial_pane

0xbf46,	// (0x0006d254) listscroll_mce_pane

0xbf46,	// (0x0006d254) bg_notes_pane

0xc057,	// (0x0006d365) list_notes_pane

0x0b9a,	// (0x00061ea8) scroll_pane_cp06

0xc065,	// (0x0006d373) bg_calc_paper_pane

0x9e97,	// (0x0006b1a5) list_calc_pane

0xc079,	// (0x0006d387) bg_calc_display_pane

0x0bae,	// (0x00061ebc) calc_display_pane_t1

0x0bc3,	// (0x00061ed1) calc_display_pane_t2

0x9eb1,	// (0x0006b1bf) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x000703d5) calc_display_pane_t

0x0bd8,	// (0x00061ee6) cell_calc_pane_ParamLimits

0x0bd8,	// (0x00061ee6) cell_calc_pane

0xc085,	// (0x0006d393) bg_calc_paper_pane_g1

0xc091,	// (0x0006d39f) bg_calc_paper_pane_g2

0xc09d,	// (0x0006d3ab) bg_calc_paper_pane_g3

0xc0a9,	// (0x0006d3b7) bg_calc_paper_pane_g4

0xc0b5,	// (0x0006d3c3) bg_calc_paper_pane_g5

0x0c0d,	// (0x00061f1b) bg_calc_paper_pane_g6

0x0c1c,	// (0x00061f2a) bg_calc_paper_pane_g7

0x0c2b,	// (0x00061f39) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x000703dc) bg_calc_paper_pane_g

0x0c3e,	// (0x00061f4c) calc_bg_paper_pane_g9

0x0c51,	// (0x00061f5f) list_calc_item_pane_ParamLimits

0x0c51,	// (0x00061f5f) list_calc_item_pane

0xc0c1,	// (0x0006d3cf) list_calc_item_pane_g1

0x9ec3,	// (0x0006b1d1) list_calc_item_pane_t1_ParamLimits

0x9ec3,	// (0x0006b1d1) list_calc_item_pane_t1

0x0c69,	// (0x00061f77) list_calc_item_pane_t2_ParamLimits

0x0c69,	// (0x00061f77) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x000703ed) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x000703ed) list_calc_item_pane_t

0xbf5e,	// (0x0006d26c) cell_calc_pane_g1

0xc0ce,	// (0x0006d3dc) grid_highlight_pane_cp02

0x0c9b,	// (0x00061fa9) bg_calc_display_pane_g1

0x0ca4,	// (0x00061fb2) bg_calc_display_pane_g2

0xc0f0,	// (0x0006d3fe) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x000703f7) bg_calc_display_pane_g

0x0cae,	// (0x00061fbc) cell_qdial_pane_ParamLimits

0x0cae,	// (0x00061fbc) cell_qdial_pane

0x0cc2,	// (0x00061fd0) cell_qdial_pane_g1_ParamLimits

0x0cc2,	// (0x00061fd0) cell_qdial_pane_g1

0x0cd8,	// (0x00061fe6) cell_qdial_pane_g2_ParamLimits

0x0cd8,	// (0x00061fe6) cell_qdial_pane_g2

0xc0f9,	// (0x0006d407) cell_qdial_pane_g3_ParamLimits

0xc0f9,	// (0x0006d407) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x000703fe) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x000703fe) cell_qdial_pane_g

0x0cff,	// (0x0006200d) cell_qdial_pane_t1_ParamLimits

0x0cff,	// (0x0006200d) cell_qdial_pane_t1

0x0d17,	// (0x00062025) cell_qdial_pane_t2_ParamLimits

0x0d17,	// (0x00062025) cell_qdial_pane_t2

0x0d2a,	// (0x00062038) cell_qdial_pane_t3_ParamLimits

0x0d2a,	// (0x00062038) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x00070407) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x00070407) cell_qdial_pane_t

0xbceb,	// (0x0006cff9) grid_highlight_pane_cp04

0xc105,	// (0x0006d413) thumbnail_qdial_pane_ParamLimits

0xc105,	// (0x0006d413) thumbnail_qdial_pane

0xc161,	// (0x0006d46f) list_help_pane

0xc16a,	// (0x0006d478) scroll_pane_cp02

0xc173,	// (0x0006d481) help_list_pane_t1_ParamLimits

0xc173,	// (0x0006d481) help_list_pane_t1

0x9ed5,	// (0x0006b1e3) bg_notes_pane_g2

0x9edd,	// (0x0006b1eb) bg_notes_pane_g3

0x9ee5,	// (0x0006b1f3) notes_bg_pane_g1

0x9eed,	// (0x0006b1fb) notes_bg_pane_g4

0x9ef5,	// (0x0006b203) notes_bg_pane_g5

0x9efd,	// (0x0006b20b) notes_bg_pane_g6

0x9f05,	// (0x0006b213) notes_bg_pane_g7

0x9f0d,	// (0x0006b21b) notes_bg_pane_g8

0x9f15,	// (0x0006b223) notes_bg_pane_g9

0x0006,

0xf117,	// (0x00070425) notes_bg_pane_g

0x0d3d,	// (0x0006204b) list_notes_text_pane_ParamLimits

0x0d3d,	// (0x0006204b) list_notes_text_pane

0xc191,	// (0x0006d49f) list_notes_text_pane_g1

0x0d52,	// (0x00062060) list_notes_text_pane_t1

0x0d60,	// (0x0006206e) listscroll_cale_week_pane

0x0d8c,	// (0x0006209a) bg_cale_heading_pane

0xc1b4,	// (0x0006d4c2) bg_cale_pane_cp01

0x0da4,	// (0x000620b2) cale_week_corner_pane

0x0dc3,	// (0x000620d1) cale_week_day_heading_pane

0x0de0,	// (0x000620ee) cale_week_scroll_pane_g1

0x0df3,	// (0x00062101) cale_week_scroll_pane_g2

0x0e0b,	// (0x00062119) cale_week_scroll_pane_g3

0x0e23,	// (0x00062131) cale_week_scroll_pane_g4

0x0e3b,	// (0x00062149) cale_week_scroll_pane_g5

0x0e5b,	// (0x00062169) cale_week_scroll_pane_g6

0x0e7b,	// (0x00062189) cale_week_scroll_pane_g7

0x0e9b,	// (0x000621a9) cale_week_scroll_pane_g8

0x0ebf,	// (0x000621cd) cale_week_scroll_pane_g9

0x0ed7,	// (0x000621e5) cale_week_scroll_pane_g10

0x0eef,	// (0x000621fd) cale_week_scroll_pane_g11

0x0f07,	// (0x00062215) cale_week_scroll_pane_g12

0x0f1f,	// (0x0006222d) cale_week_scroll_pane_g13

0x0f1f,	// (0x0006222d) cale_week_scroll_pane_g14

0x0f1f,	// (0x0006222d) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00070434) cale_week_scroll_pane_g

0x0f5b,	// (0x00062269) cale_week_time_pane

0x0f7f,	// (0x0006228d) grid_cale_week_pane

0xc1e3,	// (0x0006d4f1) scroll_pane_cp08

0x0fa5,	// (0x000622b3) cell_cale_week_pane_ParamLimits

0x0fa5,	// (0x000622b3) cell_cale_week_pane

0x1033,	// (0x00062341) cale_week_day_heading_pane_t1

0x105d,	// (0x0006236b) cale_week_day_heading_pane_t2

0x108c,	// (0x0006239a) cale_week_day_heading_pane_t3

0x10bb,	// (0x000623c9) cale_week_day_heading_pane_t4

0x10ea,	// (0x000623f8) cale_week_day_heading_pane_t5

0x1121,	// (0x0006242f) cale_week_day_heading_pane_t6

0x1158,	// (0x00062466) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x00070455) cale_week_day_heading_pane_t

0xc200,	// (0x0006d50e) bg_cale_side_pane

0x1182,	// (0x00062490) cale_week_time_pane_t1

0x119c,	// (0x000624aa) cale_week_time_pane_t2

0x11b6,	// (0x000624c4) cale_week_time_pane_t3

0x11d0,	// (0x000624de) cale_week_time_pane_t4

0x11ea,	// (0x000624f8) cale_week_time_pane_t5

0x1204,	// (0x00062512) cale_week_time_pane_t6

0x121e,	// (0x0006252c) cale_week_time_pane_t7

0x1238,	// (0x00062546) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x00070464) cale_week_time_pane_t

0x1252,	// (0x00062560) cell_cale_week_pane_g2

0x1271,	// (0x0006257f) cell_cale_week_pane_g3_ParamLimits

0x1271,	// (0x0006257f) cell_cale_week_pane_g3

0xc20e,	// (0x0006d51c) grid_highlight_pane_cp07

0xc216,	// (0x0006d524) listscroll_gms_pane

0xc220,	// (0x0006d52e) grid_gms_pane

0xc229,	// (0x0006d537) listscroll_gms_pane_g1

0xc231,	// (0x0006d53f) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x00070475) listscroll_gms_pane_g

0x1289,	// (0x00062597) scroll_pane_cp010

0x1294,	// (0x000625a2) cell_gms_pane_ParamLimits

0x1294,	// (0x000625a2) cell_gms_pane

0x12a7,	// (0x000625b5) cell_gms_pane_g1

0xc239,	// (0x0006d547) cell_gms_pane_g2

0xc191,	// (0x0006d49f) cell_gms_pane_g3

0xc241,	// (0x0006d54f) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x0007047a) cell_gms_pane_g

0xc24a,	// (0x0006d558) grid_highlight_pane_cp09

0x314f,	// (0x0006445d) phob_pre_status_pane_g1

0x3157,	// (0x00064465) phob_pre_status_pane_g2

0x315f,	// (0x0006446d) phob_pre_status_pane_g3

0x3167,	// (0x00064475) phob_pre_status_pane_g4

0x0004,

0xf51b,	// (0x00070829) phob_pre_status_pane_g

0x3177,	// (0x00064485) phob_pre_status_pane_t1

0x3185,	// (0x00064493) phob_pre_status_pane_t2

0x3195,	// (0x000644a3) phob_pre_status_pane_t3

0x0002,

0xf526,	// (0x00070834) phob_pre_status_pane_t

0xc252,	// (0x0006d560) bg_list_pane_cp05

0x12b7,	// (0x000625c5) grid_vorec_pane

0x12bf,	// (0x000625cd) vorec_t1

0x12cd,	// (0x000625db) vorec_t2

0x12db,	// (0x000625e9) vorec_t3

0x12e9,	// (0x000625f7) vorec_t4

0xbff9,	// (0x0006d307) vorec_t5

0x8fc1,	// (0x0006a2cf) vorec_t6

0x0004,

0xf175,	// (0x00070483) vorec_t

0x8fcf,	// (0x0006a2dd) wait_bar_pane_cp01

0x1305,	// (0x00062613) cell_vorec_pane_ParamLimits

0x1305,	// (0x00062613) cell_vorec_pane

0x9f1d,	// (0x0006b22b) cell_vorec_pane_g1

0xbceb,	// (0x0006cff9) grid_highlight_pane_cp05

0xbf68,	// (0x0006d276) cams_zoom_pane

0xbf68,	// (0x0006d276) image_vga_pane

0xbfcf,	// (0x0006d2dd) main_camera_pane_g1

0xbfcf,	// (0x0006d2dd) main_camera_pane_g2

0xbfcf,	// (0x0006d2dd) main_camera_pane_g3

0xbfcf,	// (0x0006d2dd) main_camera_pane_g4

0xbfcf,	// (0x0006d2dd) main_camera_pane_g5

0xbfcf,	// (0x0006d2dd) main_camera_pane_g6

0xbfcf,	// (0x0006d2dd) main_camera_pane_g7

0x0007,

0xf180,	// (0x0007048e) main_camera_pane_g

0xc025,	// (0x0006d333) main_camera_pane_t1

0xc025,	// (0x0006d333) main_camera_pane_t2

0x0001,

0xf191,	// (0x0007049f) main_camera_pane_t

0x132c,	// (0x0006263a) cams_zoom_pane_cp_ParamLimits

0x132c,	// (0x0006263a) cams_zoom_pane_cp

0x1360,	// (0x0006266e) image_cif_pane_ParamLimits

0x1360,	// (0x0006266e) image_cif_pane

0xb8ce,	// (0x0006cbdc) image_subqcif_pane

0x1372,	// (0x00062680) main_video_pane_g1_ParamLimits

0x1372,	// (0x00062680) main_video_pane_g1

0x13a0,	// (0x000626ae) main_video_pane_g2_ParamLimits

0x13a0,	// (0x000626ae) main_video_pane_g2

0x13da,	// (0x000626e8) main_video_pane_g3_ParamLimits

0x13da,	// (0x000626e8) main_video_pane_g3

0x13da,	// (0x000626e8) main_video_pane_g4_ParamLimits

0x13da,	// (0x000626e8) main_video_pane_g4

0x140e,	// (0x0006271c) main_video_pane_g5_ParamLimits

0x140e,	// (0x0006271c) main_video_pane_g5

0xc25a,	// (0x0006d568) main_video_pane_g6_ParamLimits

0xc25a,	// (0x0006d568) main_video_pane_g6

0x0006,

0xf196,	// (0x000704a4) main_video_pane_g_ParamLimits

0xf196,	// (0x000704a4) main_video_pane_g

0x142a,	// (0x00062738) main_video_pane_t1_ParamLimits

0x142a,	// (0x00062738) main_video_pane_t1

0xc01b,	// (0x0006d329) cams_zoom_pane_g1

0xc01b,	// (0x0006d329) cams_zoom_pane_g2

0xc01b,	// (0x0006d329) cams_zoom_pane_g3

0xc01b,	// (0x0006d329) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x000704b3) cams_zoom_pane_g

0xbf68,	// (0x0006d276) grid_cams_pane

0xbf68,	// (0x0006d276) linegrid_cams_pane

0x146e,	// (0x0006277c) cell_cams_pane_ParamLimits

0x146e,	// (0x0006277c) cell_cams_pane

0xb8ce,	// (0x0006cbdc) cams_burst_image_pane

0xc01b,	// (0x0006d329) cell_cams_pane_g1

0xb8ce,	// (0x0006cbdc) grid_highlight_pane_cp03

0xbf5e,	// (0x0006d26c) mp_bg_pane_g1

0xb8ce,	// (0x0006cbdc) bg_list_pane_cp03

0xb8ce,	// (0x0006cbdc) bg_mp_pane

0xb8ce,	// (0x0006cbdc) grid_mp_pane

0xc01b,	// (0x0006d329) media_player_g1

0xc809,	// (0x0006db17) media_player_t1

0xc809,	// (0x0006db17) media_player_t2

0xc809,	// (0x0006db17) media_player_t3

0xc809,	// (0x0006db17) media_player_t4

0xc809,	// (0x0006db17) media_player_t5

0xc809,	// (0x0006db17) media_player_t6

0xc809,	// (0x0006db17) media_player_t7

0x0006,

0xf505,	// (0x00070813) media_player_t

0xb8ce,	// (0x0006cbdc) wait_bar_pane_cp02

0xf4ea,	// (0x000707f8) main_usb_pane_t

0xcf7a,	// (0x0006e288) cell_mp_pane

0xbf5e,	// (0x0006d26c) cell_mp_pane_g1

0xbceb,	// (0x0006cff9) grid_highlight_pane_cp06

0xc274,	// (0x0006d582) grid_skin_colour_pane

0xc27c,	// (0x0006d58a) list_highlight_pane_cp03

0x1483,	// (0x00062791) skin_g1

0xc284,	// (0x0006d592) skin_t1

0xc293,	// (0x0006d5a1) skin_t2

0x0001,

0xf1d3,	// (0x000704e1) skin_t

0x148b,	// (0x00062799) cell_skin_colour_pane_ParamLimits

0x148b,	// (0x00062799) cell_skin_colour_pane

0xc2a1,	// (0x0006d5af) cell_skin_colour_pane_g1

0x1504,	// (0x00062812) call_video_g1_ParamLimits

0x1504,	// (0x00062812) call_video_g1

0x1520,	// (0x0006282e) call_video_g2_ParamLimits

0x1520,	// (0x0006282e) call_video_g2

0x0001,

0xf1d8,	// (0x000704e6) call_video_g_ParamLimits

0xf1d8,	// (0x000704e6) call_video_g

0x1572,	// (0x00062880) call_video_uplink_pane_cp1_ParamLimits

0x1572,	// (0x00062880) call_video_uplink_pane_cp1

0xc2b3,	// (0x0006d5c1) call_video_uplink_pane_cp2

0x1611,	// (0x0006291f) video_down_crop_pane_ParamLimits

0x1611,	// (0x0006291f) video_down_crop_pane

0x1708,	// (0x00062a16) video_down_pane_ParamLimits

0x1708,	// (0x00062a16) video_down_pane

0xc2bb,	// (0x0006d5c9) video_down_subqcif_pane_ParamLimits

0xc2bb,	// (0x0006d5c9) video_down_subqcif_pane

0xc2d3,	// (0x0006d5e1) video_down_subqcif_pane_cp_ParamLimits

0xc2d3,	// (0x0006d5e1) video_down_subqcif_pane_cp

0xc2f9,	// (0x0006d607) im_reading_pane_ParamLimits

0xc2f9,	// (0x0006d607) im_reading_pane

0x1818,	// (0x00062b26) im_writing_pane_ParamLimits

0x1818,	// (0x00062b26) im_writing_pane

0x182e,	// (0x00062b3c) im_reading_pane_t1

0xc313,	// (0x0006d621) list_im_pane

0xc324,	// (0x0006d632) scroll_pane_cp07

0x1867,	// (0x00062b75) im_writing_pane_t1_ParamLimits

0x1867,	// (0x00062b75) im_writing_pane_t1

0xc33d,	// (0x0006d64b) im_writing_pane_t2_ParamLimits

0xc33d,	// (0x0006d64b) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x000704f0) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x000704f0) im_writing_pane_t

0xbceb,	// (0x0006cff9) input_focus_pane_cp04

0xbceb,	// (0x0006cff9) input_focus_pane_cp05

0x187c,	// (0x00062b8a) list_im_single_pane_ParamLimits

0x187c,	// (0x00062b8a) list_im_single_pane

0x1890,	// (0x00062b9e) list_single_im_pane_t1

0xc252,	// (0x0006d560) blid_accuracy_pane

0xc252,	// (0x0006d560) blid_compass_pane

0xe491,	// (0x0006f79f) main_location_t1

0xe491,	// (0x0006f79f) main_location_t2

0xe491,	// (0x0006f79f) main_location_t3

0x0002,

0xf514,	// (0x00070822) main_location_t

0xbceb,	// (0x0006cff9) aid_levels_location

0xbf5e,	// (0x0006d26c) blid_accuracy_pane_g1

0xbf5e,	// (0x0006d26c) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x0007053f) blid_accuracy_pane_g

0xc385,	// (0x0006d693) wml_content_pane

0xc3c3,	// (0x0006d6d1) wml_button_pane_ParamLimits

0xc3c3,	// (0x0006d6d1) wml_button_pane

0x189f,	// (0x00062bad) wml_list_single_large_pane_ParamLimits

0x189f,	// (0x00062bad) wml_list_single_large_pane

0x18b4,	// (0x00062bc2) wml_list_single_medium_pane_ParamLimits

0x18b4,	// (0x00062bc2) wml_list_single_medium_pane

0x18ca,	// (0x00062bd8) wml_list_single_small_pane_ParamLimits

0x18ca,	// (0x00062bd8) wml_list_single_small_pane

0xc3d7,	// (0x0006d6e5) wml_selection_box_pane_ParamLimits

0xc3d7,	// (0x0006d6e5) wml_selection_box_pane

0xc3ea,	// (0x0006d6f8) wml_list_single_pane_t1

0xc3f9,	// (0x0006d707) wml_list_single_medium_pane_t1

0xc408,	// (0x0006d716) wml_list_single_large_pane_t1

0xc417,	// (0x0006d725) input_focus_pane_cp02_ParamLimits

0xc417,	// (0x0006d725) input_focus_pane_cp02

0xc42a,	// (0x0006d738) wml_selection_box_pane_g1

0xc433,	// (0x0006d741) wml_selection_box_pane_t1_ParamLimits

0xc433,	// (0x0006d741) wml_selection_box_pane_t1

0xbf46,	// (0x0006d254) bg_wml_button_pane_ParamLimits

0xbf46,	// (0x0006d254) bg_wml_button_pane

0xc44b,	// (0x0006d759) wml_button_pane_g1

0xc453,	// (0x0006d761) wml_button_pane_t1

0xc44b,	// (0x0006d759) wml_button_bg_pane_g1

0xc463,	// (0x0006d771) wml_button_bg_pane_g2

0xc46b,	// (0x0006d779) wml_button_bg_pane_g3

0xc473,	// (0x0006d781) wml_button_bg_pane_g4

0xc47b,	// (0x0006d789) wml_button_bg_pane_g5

0xc483,	// (0x0006d791) wml_button_bg_pane_g6

0xc48b,	// (0x0006d799) wml_button_bg_pane_g7

0xc493,	// (0x0006d7a1) wml_button_bg_pane_g8

0xc49b,	// (0x0006d7a9) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x000704f5) wml_button_bg_pane_g

0x18e2,	// (0x00062bf0) bg_list_pane_cp02

0xc4a3,	// (0x0006d7b1) mce_header_pane_ParamLimits

0xc4a3,	// (0x0006d7b1) mce_header_pane

0xc4b9,	// (0x0006d7c7) mce_icon_pane

0xc4b9,	// (0x0006d7c7) mce_image_pane

0xc4c2,	// (0x0006d7d0) mce_text_pane_ParamLimits

0xc4c2,	// (0x0006d7d0) mce_text_pane

0x18ea,	// (0x00062bf8) scroll_pane_cp03

0xc3bb,	// (0x0006d6c9) scroll_pane_cp04

0xc4d5,	// (0x0006d7e3) scroll_pane_cp05_ParamLimits

0xc4d5,	// (0x0006d7e3) scroll_pane_cp05

0x18f4,	// (0x00062c02) mce_header_field_pane_ParamLimits

0x18f4,	// (0x00062c02) mce_header_field_pane

0x190b,	// (0x00062c19) mce_header_field_pane_2_ParamLimits

0x190b,	// (0x00062c19) mce_header_field_pane_2

0x1921,	// (0x00062c2f) mce_header_field_pane_3

0x1929,	// (0x00062c37) list_single_mce_message_pane_ParamLimits

0x1929,	// (0x00062c37) list_single_mce_message_pane

0x193e,	// (0x00062c4c) list_single_mce_smart_pane_ParamLimits

0x193e,	// (0x00062c4c) list_single_mce_smart_pane

0xc4e1,	// (0x0006d7ef) input_focus_pane_cp03

0xc4ea,	// (0x0006d7f8) list_header_data_pane

0x195e,	// (0x00062c6c) mce_header_field_pane_t1

0x196e,	// (0x00062c7c) list_single_mce_header_pane_ParamLimits

0x196e,	// (0x00062c7c) list_single_mce_header_pane

0xc4f2,	// (0x0006d800) list_single_mce_header_pane_t1

0xc501,	// (0x0006d80f) list_single_mce_message_pane_g1

0xc509,	// (0x0006d817) list_single_mce_message_pane_t1

0x19a8,	// (0x00062cb6) bg_cale_heading_pane_cp01_ParamLimits

0x19a8,	// (0x00062cb6) bg_cale_heading_pane_cp01

0xc517,	// (0x0006d825) bg_cale_pane_cp02_ParamLimits

0xc517,	// (0x0006d825) bg_cale_pane_cp02

0x19e2,	// (0x00062cf0) cale_month_corner_pane

0x1a01,	// (0x00062d0f) cale_month_day_heading_pane_ParamLimits

0x1a01,	// (0x00062d0f) cale_month_day_heading_pane

0x1a53,	// (0x00062d61) cale_month_pane_g1_ParamLimits

0x1a53,	// (0x00062d61) cale_month_pane_g1

0x1a82,	// (0x00062d90) cale_month_pane_g2_ParamLimits

0x1a82,	// (0x00062d90) cale_month_pane_g2

0x1ab2,	// (0x00062dc0) cale_month_pane_g3_ParamLimits

0x1ab2,	// (0x00062dc0) cale_month_pane_g3

0x1aee,	// (0x00062dfc) cale_month_pane_g4_ParamLimits

0x1aee,	// (0x00062dfc) cale_month_pane_g4

0x1b2a,	// (0x00062e38) cale_month_pane_g5_ParamLimits

0x1b2a,	// (0x00062e38) cale_month_pane_g5

0x1b72,	// (0x00062e80) cale_month_pane_g6_ParamLimits

0x1b72,	// (0x00062e80) cale_month_pane_g6

0x1bbe,	// (0x00062ecc) cale_month_pane_g7_ParamLimits

0x1bbe,	// (0x00062ecc) cale_month_pane_g7

0x1c12,	// (0x00062f20) cale_month_pane_g8_ParamLimits

0x1c12,	// (0x00062f20) cale_month_pane_g8

0x1c66,	// (0x00062f74) cale_month_pane_g9_ParamLimits

0x1c66,	// (0x00062f74) cale_month_pane_g9

0x1cb8,	// (0x00062fc6) cale_month_pane_g10_ParamLimits

0x1cb8,	// (0x00062fc6) cale_month_pane_g10

0x1d0a,	// (0x00063018) cale_month_pane_g11_ParamLimits

0x1d0a,	// (0x00063018) cale_month_pane_g11

0x1d5c,	// (0x0006306a) cale_month_pane_g12_ParamLimits

0x1d5c,	// (0x0006306a) cale_month_pane_g12

0x1dae,	// (0x000630bc) cale_month_pane_g13_ParamLimits

0x1dae,	// (0x000630bc) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x00070508) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x00070508) cale_month_pane_g

0x1e00,	// (0x0006310e) cale_month_week_pane

0x1e24,	// (0x00063132) grid_cale_month_pane_ParamLimits

0x1e24,	// (0x00063132) grid_cale_month_pane

0x1e6d,	// (0x0006317b) cale_month_day_heading_pane_t1

0x1ef3,	// (0x00063201) cale_month_day_heading_pane_t2

0x1f6c,	// (0x0006327a) cale_month_day_heading_pane_t3

0x1fe5,	// (0x000632f3) cale_month_day_heading_pane_t4

0x2066,	// (0x00063374) cale_month_day_heading_pane_t5

0x20ef,	// (0x000633fd) cale_month_day_heading_pane_t6

0x2178,	// (0x00063486) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x00070523) cale_month_day_heading_pane_t

0xc200,	// (0x0006d50e) bg_cale_side_pane_cp01

0x2209,	// (0x00063517) cale_month_week_pane_t1

0x2222,	// (0x00063530) cale_month_week_pane_t2

0x223b,	// (0x00063549) cale_month_week_pane_t3

0x2254,	// (0x00063562) cale_month_week_pane_t4

0x226d,	// (0x0006357b) cale_month_week_pane_t5

0x2286,	// (0x00063594) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x00070532) cale_month_week_pane_t

0x229f,	// (0x000635ad) cell_cale_month_pane_ParamLimits

0x229f,	// (0x000635ad) cell_cale_month_pane

0x9f27,	// (0x0006b235) cell_cale_month_pane_g1

0x23cd,	// (0x000636db) cell_cale_month_pane_t1_ParamLimits

0x23cd,	// (0x000636db) cell_cale_month_pane_t1

0xc20e,	// (0x0006d51c) grid_highlight_pane_cp08

0xbf5e,	// (0x0006d26c) main_smil_g1

0x23f9,	// (0x00063707) smil_status_pane

0xc556,	// (0x0006d864) smil_text_pane

0xe39b,	// (0x0006f6a9) bg_popup_call3_rect_pane_g8

0xe3a3,	// (0x0006f6b1) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x000707bb) bg_popup_call3_rect_pane_g

0xe55a,	// (0x0006f868) smil_status_volume_pane_g1

0xc560,	// (0x0006d86e) smil_status_pane_t1

0xa07d,	// (0x0006b38b) volume_smil_pane

0xc577,	// (0x0006d885) list_smil_text_pane

0x240c,	// (0x0006371a) scroll_pane_cp011

0x2417,	// (0x00063725) smil_text_list_pane_t1_ParamLimits

0x2417,	// (0x00063725) smil_text_list_pane_t1

0x9f33,	// (0x0006b241) aid_volume_smil_ParamLimits

0x9f33,	// (0x0006b241) aid_volume_smil

0xbf5e,	// (0x0006d26c) smil_volume_pane_g1

0xbf5e,	// (0x0006d26c) smil_volume_pane_g2

0x0001,

0xf231,	// (0x0007053f) smil_volume_pane_g

0x0d60,	// (0x0006206e) listscroll_cale_day_pane

0xc581,	// (0x0006d88f) bg_cale_pane

0xc599,	// (0x0006d8a7) list_cale_pane

0xc5bc,	// (0x0006d8ca) scroll_pane_cp09

0xc5cd,	// (0x0006d8db) cale_bg_pane_g1

0xc5d5,	// (0x0006d8e3) cale_bg_pane_g2

0xc5dd,	// (0x0006d8eb) cale_bg_pane_g3

0xc5e5,	// (0x0006d8f3) cale_bg_pane_g4

0xc5ed,	// (0x0006d8fb) cale_bg_pane_g5

0xc5f5,	// (0x0006d903) cale_bg_pane_g6

0xc5fd,	// (0x0006d90b) cale_bg_pane_g7

0xc605,	// (0x0006d913) cale_bg_pane_g8

0xc60d,	// (0x0006d91b) cale_bg_pane_g9

0x0008,

0xf236,	// (0x00070544) cale_bg_pane_g

0x2453,	// (0x00063761) list_cale_time_pane_ParamLimits

0x2453,	// (0x00063761) list_cale_time_pane

0xc61d,	// (0x0006d92b) list_cale_time_pane_g1_ParamLimits

0xc61d,	// (0x0006d92b) list_cale_time_pane_g1

0xc629,	// (0x0006d937) list_cale_time_pane_g2_ParamLimits

0xc629,	// (0x0006d937) list_cale_time_pane_g2

0x2468,	// (0x00063776) list_cale_time_pane_g3_ParamLimits

0x2468,	// (0x00063776) list_cale_time_pane_g3

0x2476,	// (0x00063784) list_cale_time_pane_g4_ParamLimits

0x2476,	// (0x00063784) list_cale_time_pane_g4

0x2484,	// (0x00063792) list_cale_time_pane_g5_ParamLimits

0x2484,	// (0x00063792) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x00070557) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x00070557) list_cale_time_pane_g

0xc643,	// (0x0006d951) list_cale_time_pane_t1_ParamLimits

0xc643,	// (0x0006d951) list_cale_time_pane_t1

0xc66b,	// (0x0006d979) list_cale_time_pane_t2_ParamLimits

0xc66b,	// (0x0006d979) list_cale_time_pane_t2

0x26e6,	// (0x000639f4) aid_blid_cardinal_pane

0x2724,	// (0x00063a32) compass_pane_t4

0xc693,	// (0x0006d9a1) list_cale_time_pane_t4_ParamLimits

0xc693,	// (0x0006d9a1) list_cale_time_pane_t4

0x2732,	// (0x00063a40) compass_pane_t5

0x2740,	// (0x00063a4e) compass_pane_t6

0x274e,	// (0x00063a5c) compass_pane_t7

0xd0bf,	// (0x0006e3cd) navi_pane_cc_t1

0xd29c,	// (0x0006e5aa) aid_phob_thumbnail_center_pane

0x2ba2,	// (0x00063eb0) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x00070564) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x00070564) list_cale_time_pane_t

0xb942,	// (0x0006cc50) bg_popup_window_pane_cp02_ParamLimits

0xb942,	// (0x0006cc50) bg_popup_window_pane_cp02

0xc73b,	// (0x0006da49) heading_pane_cp01_ParamLimits

0xc73b,	// (0x0006da49) heading_pane_cp01

0xc747,	// (0x0006da55) loc_req_pane_ParamLimits

0xc747,	// (0x0006da55) loc_req_pane

0xc757,	// (0x0006da65) loc_type_pane_ParamLimits

0xc757,	// (0x0006da65) loc_type_pane

0xc769,	// (0x0006da77) loc_type_pane_t1_ParamLimits

0xc769,	// (0x0006da77) loc_type_pane_t1

0xc77b,	// (0x0006da89) loc_type_pane_t2_ParamLimits

0xc77b,	// (0x0006da89) loc_type_pane_t2

0xc78d,	// (0x0006da9b) loc_type_pane_t3_ParamLimits

0xc78d,	// (0x0006da9b) loc_type_pane_t3

0x0002,

0xf25d,	// (0x0007056b) loc_type_pane_t_ParamLimits

0xf25d,	// (0x0007056b) loc_type_pane_t

0xc79f,	// (0x0006daad) list_loc_req_pane

0xc7a9,	// (0x0006dab7) scroll_pane_cp012

0x2492,	// (0x000637a0) list_single_loc_request_popup_menu_pane_ParamLimits

0x2492,	// (0x000637a0) list_single_loc_request_popup_menu_pane

0xc7b4,	// (0x0006dac2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc7b4,	// (0x0006dac2) list_single_loc_request_popup_menu_pane_g1

0xc7c0,	// (0x0006dace) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc7c0,	// (0x0006dace) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x00070572) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x00070572) list_single_loc_request_popup_menu_pane_g

0xc7cc,	// (0x0006dada) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc7cc,	// (0x0006dada) list_single_loc_request_popup_menu_pane_t1

0xbf46,	// (0x0006d254) bg_popup_window_pane_cp03_ParamLimits

0xbf46,	// (0x0006d254) bg_popup_window_pane_cp03

0xce6b,	// (0x0006e179) heading_loc_req_pane_ParamLimits

0xce6b,	// (0x0006e179) heading_loc_req_pane

0x249f,	// (0x000637ad) popup_dyc_status_message_window_g1_ParamLimits

0x249f,	// (0x000637ad) popup_dyc_status_message_window_g1

0x24b3,	// (0x000637c1) popup_dyc_status_message_window_t1_ParamLimits

0x24b3,	// (0x000637c1) popup_dyc_status_message_window_t1

0x24c8,	// (0x000637d6) popup_dyc_status_message_window_t2_ParamLimits

0x24c8,	// (0x000637d6) popup_dyc_status_message_window_t2

0x24dd,	// (0x000637eb) popup_dyc_status_message_window_t3_ParamLimits

0x24dd,	// (0x000637eb) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x00070577) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x00070577) popup_dyc_status_message_window_t

0xbceb,	// (0x0006cff9) bg_heading_pane_cp01

0xc7e2,	// (0x0006daf0) heading_loc_req_pane_g1

0xc7ea,	// (0x0006daf8) heading_loc_req_pane_g2

0xc7f2,	// (0x0006db00) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x0007057e) heading_loc_req_pane_g

0xc7fa,	// (0x0006db08) heading_loc_req_pane_t1

0xc819,	// (0x0006db27) bg_popup_sub_pane_cp01_ParamLimits

0xc819,	// (0x0006db27) bg_popup_sub_pane_cp01

0xc827,	// (0x0006db35) popup_cale_events_window_g1_ParamLimits

0xc827,	// (0x0006db35) popup_cale_events_window_g1

0xc847,	// (0x0006db55) popup_cale_events_window_g2_ParamLimits

0xc847,	// (0x0006db55) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x000705a0) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x000705a0) popup_cale_events_window_g

0xc867,	// (0x0006db75) popup_cale_events_window_t1_ParamLimits

0xc867,	// (0x0006db75) popup_cale_events_window_t1

0xc879,	// (0x0006db87) popup_cale_events_window_t2_ParamLimits

0xc879,	// (0x0006db87) popup_cale_events_window_t2

0xc8b7,	// (0x0006dbc5) popup_cale_events_window_t3_ParamLimits

0xc8b7,	// (0x0006dbc5) popup_cale_events_window_t3

0xc8f1,	// (0x0006dbff) popup_cale_events_window_t4_ParamLimits

0xc8f1,	// (0x0006dbff) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x000705a5) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x000705a5) popup_cale_events_window_t

0x2505,	// (0x00063813) call_type_pane

0x2515,	// (0x00063823) popup_call_status_window_g1

0x2529,	// (0x00063837) popup_call_status_window_g2

0x253d,	// (0x0006384b) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x000705ae) popup_call_status_window_g

0xc927,	// (0x0006dc35) call_type_pane_g1

0xc930,	// (0x0006dc3e) call_type_pane_g2

0x0001,

0xf2a7,	// (0x000705b5) call_type_pane_g

0xbceb,	// (0x0006cff9) bg_popup_sub_pane_cp02

0xc939,	// (0x0006dc47) listscroll_popup_wml_pane

0xc941,	// (0x0006dc4f) list_wml_pane

0xc94b,	// (0x0006dc59) scroll_pane_cp013

0xc956,	// (0x0006dc64) list_single_graphic_popup_wml_pane_ParamLimits

0xc956,	// (0x0006dc64) list_single_graphic_popup_wml_pane

0xbf5e,	// (0x0006d26c) list_single_graphic_popup_wml_pane_g1

0xc96a,	// (0x0006dc78) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x000705ba) list_single_graphic_popup_wml_pane_g

0xce77,	// (0x0006e185) list_single_graphic_popup_wml_pane_t1

0xce8d,	// (0x0006e19b) aid_call_pane

0xbf3e,	// (0x0006d24c) popup_clock_analogue_window_g1

0xbf3e,	// (0x0006d24c) popup_clock_analogue_window_g2

0x9f61,	// (0x0006b26f) popup_clock_analogue_window_g3

0x9f61,	// (0x0006b26f) popup_clock_analogue_window_g4

0xbf5e,	// (0x0006d26c) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x000705bf) popup_clock_analogue_window_g

0x9f69,	// (0x0006b277) popup_clock_analogue_window_t1

0x9f77,	// (0x0006b285) clock_digital_number_pane_ParamLimits

0x9f77,	// (0x0006b285) clock_digital_number_pane

0x9f83,	// (0x0006b291) clock_digital_number_pane_cp02_ParamLimits

0x9f83,	// (0x0006b291) clock_digital_number_pane_cp02

0x9f8f,	// (0x0006b29d) clock_digital_number_pane_cp03_ParamLimits

0x9f8f,	// (0x0006b29d) clock_digital_number_pane_cp03

0x9f9b,	// (0x0006b2a9) clock_digital_number_pane_cp04_ParamLimits

0x9f9b,	// (0x0006b2a9) clock_digital_number_pane_cp04

0x9fab,	// (0x0006b2b9) clock_digital_separator_pane_ParamLimits

0x9fab,	// (0x0006b2b9) clock_digital_separator_pane

0x9fb7,	// (0x0006b2c5) popup_clock_digital_window_t1

0xbf5e,	// (0x0006d26c) clock_digital_number_pane_g1

0xbf5e,	// (0x0006d26c) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x0007053f) clock_digital_number_pane_g

0xbf5e,	// (0x0006d26c) clock_digital_separator_pane_g1

0xbf5e,	// (0x0006d26c) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x0007053f) clock_digital_separator_pane_g

0xbceb,	// (0x0006cff9) bg_popup_window_pane_cp04

0xce95,	// (0x0006e1a3) heading_pane_cp03

0xc252,	// (0x0006d560) listscroll_popup_gms_pane

0xbceb,	// (0x0006cff9) grid_large_graphic_popup_pane

0xce9e,	// (0x0006e1ac) listscroll_popup_gms_pane_g1

0xcea7,	// (0x0006e1b5) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x000705ca) listscroll_popup_gms_pane_g

0xceb0,	// (0x0006e1be) scroll_pane_cp014

0xbfc1,	// (0x0006d2cf) cell_large_graphic_popup_pane_ParamLimits

0xbfc1,	// (0x0006d2cf) cell_large_graphic_popup_pane

0xbfcf,	// (0x0006d2dd) cell_large_graphic_popup_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) cell_large_graphic_popup_pane_g1

0xceb9,	// (0x0006e1c7) cell_large_graphic_popup_pane_g2_ParamLimits

0xceb9,	// (0x0006e1c7) cell_large_graphic_popup_pane_g2

0xcec7,	// (0x0006e1d5) cell_large_graphic_popup_pane_g3_ParamLimits

0xcec7,	// (0x0006e1d5) cell_large_graphic_popup_pane_g3

0xced5,	// (0x0006e1e3) cell_large_graphic_popup_pane_g4_ParamLimits

0xced5,	// (0x0006e1e3) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x000705cf) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x000705cf) cell_large_graphic_popup_pane_g

0xbceb,	// (0x0006cff9) grid_highlight_pane_cp010

0xbf5e,	// (0x0006d26c) bg_popup_call_pane_g1

0xcee6,	// (0x0006e1f4) list_single_graphic_popup_conf_pane_ParamLimits

0xcee6,	// (0x0006e1f4) list_single_graphic_popup_conf_pane

0xcef9,	// (0x0006e207) list_highlight_pane_cp01

0xcf02,	// (0x0006e210) list_single_graphic_popup_conf_pane_g1

0xcf0a,	// (0x0006e218) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x000705d8) list_single_graphic_popup_conf_pane_g

0xcf12,	// (0x0006e220) list_single_graphic_popup_conf_pane_t1

0xcf20,	// (0x0006e22e) linegrid_cams_pane_g1

0x254c,	// (0x0006385a) linegrid_cams_pane_g2

0xc191,	// (0x0006d49f) linegrid_cams_pane_g3

0xcf29,	// (0x0006e237) linegrid_cams_pane_g4

0x2555,	// (0x00063863) linegrid_cams_pane_g5

0x255e,	// (0x0006386c) linegrid_cams_pane_g6

0xc241,	// (0x0006d54f) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x000705dd) linegrid_cams_pane_g

0xcf32,	// (0x0006e240) popup_clock_analogue_window

0xcf32,	// (0x0006e240) popup_clock_digital_window

0xbceb,	// (0x0006cff9) popup_phob_thumbnail_window

0xbf5e,	// (0x0006d26c) call_video_uplink_pane_g1

0xcf3b,	// (0x0006e249) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x000705ec) call_video_uplink_pane_g

0xcf43,	// (0x0006e251) video_uplink_pane

0xcf4b,	// (0x0006e259) mce_image_pane_g1

0x2569,	// (0x00063877) mce_image_pane_g2

0x2573,	// (0x00063881) mce_image_pane_g3

0x257b,	// (0x00063889) mce_image_pane_g4

0x2583,	// (0x00063891) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x000705f1) mce_image_pane_g

0xcf55,	// (0x0006e263) control_top_pane_stacon_cp01_ParamLimits

0xcf55,	// (0x0006e263) control_top_pane_stacon_cp01

0xcf69,	// (0x0006e277) uni_indicator_pane_stacon_cp01_ParamLimits

0xcf69,	// (0x0006e277) uni_indicator_pane_stacon_cp01

0xcf7a,	// (0x0006e288) bg_popup_sub_pane_cp03

0xcf84,	// (0x0006e292) chi_dic_find_pane

0x258b,	// (0x00063899) listscroll_chi_dic_pane

0xcf8c,	// (0x0006e29a) main_pane_chidic_g1

0xcf94,	// (0x0006e2a2) chi_dic_find_pane_t1

0xcfa2,	// (0x0006e2b0) find_chidic_pane

0xcfab,	// (0x0006e2b9) chi_dic_list_pane_ParamLimits

0xcfab,	// (0x0006e2b9) chi_dic_list_pane

0xcfbc,	// (0x0006e2ca) scroll_pane_cp020

0xcfc4,	// (0x0006e2d2) find_chidic_pane_t1

0xbceb,	// (0x0006cff9) input_focus_pane_cp06

0x259f,	// (0x000638ad) list_chi_dic_pane_ParamLimits

0x259f,	// (0x000638ad) list_chi_dic_pane

0x25b1,	// (0x000638bf) list_chi_dic_pane_t1_ParamLimits

0x25b1,	// (0x000638bf) list_chi_dic_pane_t1

0xbceb,	// (0x0006cff9) list_highlight_pane_cp020

0xcfd3,	// (0x0006e2e1) bg_cale_heading_pane_g1

0x25c4,	// (0x000638d2) bg_cale_heading_pane_g2

0x25cc,	// (0x000638da) bg_cale_heading_pane_g3

0x25d4,	// (0x000638e2) bg_cale_heading_pane_g4

0x25de,	// (0x000638ec) bg_cale_heading_pane_g5

0x25e8,	// (0x000638f6) bg_cale_heading_pane_g6

0x25f0,	// (0x000638fe) bg_cale_heading_pane_g7

0x25f8,	// (0x00063906) bg_cale_heading_pane_g8

0x2602,	// (0x00063910) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x000705fc) bg_cale_heading_pane_g

0xcfd3,	// (0x0006e2e1) bg_cale_side_pane_g1

0x260c,	// (0x0006391a) bg_cale_side_pane_g2

0x2614,	// (0x00063922) bg_cale_side_pane_g3

0x261c,	// (0x0006392a) bg_cale_side_pane_g4

0x2624,	// (0x00063932) bg_cale_side_pane_g5

0x262c,	// (0x0006393a) bg_cale_side_pane_g6

0x2634,	// (0x00063942) bg_cale_side_pane_g7

0x263c,	// (0x0006394a) bg_cale_side_pane_g8

0x2644,	// (0x00063952) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x0007060f) bg_cale_side_pane_g

0x264c,	// (0x0006395a) popup_call_status_window_ParamLimits

0x264c,	// (0x0006395a) popup_call_status_window

0xcfdb,	// (0x0006e2e9) stacon_top_pane

0xcfe3,	// (0x0006e2f1) status_pane_ParamLimits

0xcfe3,	// (0x0006e2f1) status_pane

0xcff8,	// (0x0006e306) status_small_pane

0xd000,	// (0x0006e30e) control_pane

0xbceb,	// (0x0006cff9) stacon_bottom_pane

0xd008,	// (0x0006e316) list_single_mce_smart_pane_t1_ParamLimits

0xd008,	// (0x0006e316) list_single_mce_smart_pane_t1

0xd01b,	// (0x0006e329) list_single_mce_smart_pane_t2_ParamLimits

0xd01b,	// (0x0006e329) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x00070622) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x00070622) list_single_mce_smart_pane_t

0x2695,	// (0x000639a3) compass_pane

0x269e,	// (0x000639ac) main_location2_pane_t1

0x26b0,	// (0x000639be) main_location2_pane_t2

0x26c2,	// (0x000639d0) main_location2_pane_t3

0x0003,

0xf319,	// (0x00070627) main_location2_pane_t

0xd03a,	// (0x0006e348) compass_pane_g1_ParamLimits

0xd03a,	// (0x0006e348) compass_pane_g1

0x2706,	// (0x00063a14) compass_pane_t1

0x2715,	// (0x00063a23) compass_pane_t2

0x0005,

0xf322,	// (0x00070630) compass_pane_t

0x275c,	// (0x00063a6a) text_secondary_cp61

0xd0b6,	// (0x0006e3c4) navi_pane_cams_g5

0xd132,	// (0x0006e440) navi_pane_im_t1

0xd140,	// (0x0006e44e) navi_pane_mp_g1_ParamLimits

0xd140,	// (0x0006e44e) navi_pane_mp_g1

0xd154,	// (0x0006e462) navi_pane_mp_g2_ParamLimits

0xd154,	// (0x0006e462) navi_pane_mp_g2

0xd160,	// (0x0006e46e) navi_pane_mp_g3_ParamLimits

0xd160,	// (0x0006e46e) navi_pane_mp_g3

0x0002,

0xf336,	// (0x00070644) navi_pane_mp_g_ParamLimits

0xf336,	// (0x00070644) navi_pane_mp_g

0xd16c,	// (0x0006e47a) navi_pane_mp_t1

0xd17a,	// (0x0006e488) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x0007064b) navi_pane_mp_t

0xd1e5,	// (0x0006e4f3) navi_pane_vt_g1

0xd16c,	// (0x0006e47a) navi_pane_vt_t1

0xd1ed,	// (0x0006e4fb) navi_slider_pane

0xc252,	// (0x0006d560) zooming_pane

0xd1fd,	// (0x0006e50b) navi_slider_pane_g1

0x9fd4,	// (0x0006b2e2) navi_slider_pane_g2

0x0006,

0xf344,	// (0x00070652) navi_slider_pane_g

0xd221,	// (0x0006e52f) aid_levels_zoom

0xd229,	// (0x0006e537) zooming_pane_g1

0xd231,	// (0x0006e53f) zooming_pane_g2

0xd231,	// (0x0006e53f) zooming_pane_g3

0x0002,

0xf353,	// (0x00070661) zooming_pane_g

0xd239,	// (0x0006e547) level_10_zoom

0xd242,	// (0x0006e550) level_11_zoom

0xd24b,	// (0x0006e559) level_1_zoom

0xd254,	// (0x0006e562) level_2_zoom

0xd25d,	// (0x0006e56b) level_3_zoom

0xd266,	// (0x0006e574) level_4_zoom

0xd26f,	// (0x0006e57d) level_5_zoom

0xd278,	// (0x0006e586) level_6_zoom

0xd281,	// (0x0006e58f) level_7_zoom

0xd28a,	// (0x0006e598) level_8_zoom

0xd293,	// (0x0006e5a1) level_9_zoom

0xd2a4,	// (0x0006e5b2) popup_phob_thumbnail_window_g1

0xd2ac,	// (0x0006e5ba) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x00070668) popup_phob_thumbnail_window_g

0x31a5,	// (0x000644b3) level_1_location

0x31ad,	// (0x000644bb) level_2_location

0x31b5,	// (0x000644c3) level_3_location

0x31bd,	// (0x000644cb) level_4_location

0xc252,	// (0x0006d560) level_5_location

0x27ad,	// (0x00063abb) mce_icon_pane_g1

0x27b7,	// (0x00063ac5) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x0007066d) mce_icon_pane_g

0xd2b4,	// (0x0006e5c2) main_mup_pane_g1_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup_pane_g1

0xd2b4,	// (0x0006e5c2) main_mup_pane_g2_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup_pane_g2

0xd2b4,	// (0x0006e5c2) main_mup_pane_g3_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup_pane_g3

0xd2b4,	// (0x0006e5c2) main_mup_pane_g4_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup_pane_g4

0xd2b4,	// (0x0006e5c2) main_mup_pane_g5_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup_pane_g5

0xd2b4,	// (0x0006e5c2) main_mup_pane_g6_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup_pane_g6

0xd2b4,	// (0x0006e5c2) main_mup_pane_g7_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup_pane_g7

0xd2b4,	// (0x0006e5c2) main_mup_pane_g8_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup_pane_g8

0xd2b4,	// (0x0006e5c2) main_mup_pane_g9_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup_pane_g9

0xd2b4,	// (0x0006e5c2) main_mup_pane_g10_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup_pane_g10

0xd2b4,	// (0x0006e5c2) main_mup_pane_g11_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup_pane_g11

0xbfcf,	// (0x0006d2dd) main_mup_pane_g12_ParamLimits

0xbfcf,	// (0x0006d2dd) main_mup_pane_g12

0xd2b4,	// (0x0006e5c2) main_mup_pane_g13_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup_pane_g13

0x000c,

0xf364,	// (0x00070672) main_mup_pane_g_ParamLimits

0xf364,	// (0x00070672) main_mup_pane_g

0xd2c2,	// (0x0006e5d0) main_mup_pane_t1_ParamLimits

0xd2c2,	// (0x0006e5d0) main_mup_pane_t1

0xd2c2,	// (0x0006e5d0) main_mup_pane_t2_ParamLimits

0xd2c2,	// (0x0006e5d0) main_mup_pane_t2

0xd2c2,	// (0x0006e5d0) main_mup_pane_t3_ParamLimits

0xd2c2,	// (0x0006e5d0) main_mup_pane_t3

0xc025,	// (0x0006d333) main_mup_pane_t4_ParamLimits

0xc025,	// (0x0006d333) main_mup_pane_t4

0xc025,	// (0x0006d333) main_mup_pane_t5_ParamLimits

0xc025,	// (0x0006d333) main_mup_pane_t5

0xc039,	// (0x0006d347) main_mup_pane_t6_ParamLimits

0xc039,	// (0x0006d347) main_mup_pane_t6

0x0005,

0xf37f,	// (0x0007068d) main_mup_pane_t_ParamLimits

0xf37f,	// (0x0007068d) main_mup_pane_t

0xbfc1,	// (0x0006d2cf) mup_progress_pane_ParamLimits

0xbfc1,	// (0x0006d2cf) mup_progress_pane

0xd2d6,	// (0x0006e5e4) mup_visualizer_pane_ParamLimits

0xd2d6,	// (0x0006e5e4) mup_visualizer_pane

0xd2d6,	// (0x0006e5e4) mup_volume_pane_ParamLimits

0xd2d6,	// (0x0006e5e4) mup_volume_pane

0xbfdd,	// (0x0006d2eb) mup_visualizer_pane_g1_ParamLimits

0xbfdd,	// (0x0006d2eb) mup_visualizer_pane_g1

0xd2e4,	// (0x0006e5f2) mup_visualizer_pane_g2_ParamLimits

0xd2e4,	// (0x0006e5f2) mup_visualizer_pane_g2

0xbfcf,	// (0x0006d2dd) mup_visualizer_pane_g3_ParamLimits

0xbfcf,	// (0x0006d2dd) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x0007069a) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x0007069a) mup_visualizer_pane_g

0xc01b,	// (0x0006d329) mup_volume_pane_g1

0xc01b,	// (0x0006d329) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x000703bd) mup_volume_pane_g

0xc01b,	// (0x0006d329) mup_progress_pane_g1

0xc01b,	// (0x0006d329) mup_progress_pane_g2

0xc01b,	// (0x0006d329) mup_progress_pane_g3

0x0002,

0xf393,	// (0x000706a1) mup_progress_pane_g

0xbceb,	// (0x0006cff9) bg_popup_window_pane_cp05

0xd2f2,	// (0x0006e600) heading_pane_cp02_ParamLimits

0xd2f2,	// (0x0006e600) heading_pane_cp02

0xd30c,	// (0x0006e61a) list_popup_blid_pane

0xd314,	// (0x0006e622) list_blid_sat_info_pane_ParamLimits

0xd314,	// (0x0006e622) list_blid_sat_info_pane

0xd327,	// (0x0006e635) list_blid_sat_info_pane_g1

0xd32f,	// (0x0006e63d) list_blid_sat_info_pane_t1

0x28b7,	// (0x00063bc5) mup_equalizer_pane_ParamLimits

0x28b7,	// (0x00063bc5) mup_equalizer_pane

0x28d0,	// (0x00063bde) mup_equalizer_pane_cp1_ParamLimits

0x28d0,	// (0x00063bde) mup_equalizer_pane_cp1

0x28ed,	// (0x00063bfb) mup_equalizer_pane_cp2_ParamLimits

0x28ed,	// (0x00063bfb) mup_equalizer_pane_cp2

0x290a,	// (0x00063c18) mup_equalizer_pane_cp3_ParamLimits

0x290a,	// (0x00063c18) mup_equalizer_pane_cp3

0x292b,	// (0x00063c39) mup_equalizer_pane_cp4_ParamLimits

0x292b,	// (0x00063c39) mup_equalizer_pane_cp4

0x294c,	// (0x00063c5a) mup_equalizer_pane_cp5

0x2960,	// (0x00063c6e) mup_equalizer_pane_cp6

0x2974,	// (0x00063c82) mup_equalizer_pane_cp7

0xe41b,	// (0x0006f729) bg_popup_call_poc_act_pane_g9

0xe423,	// (0x0006f731) bg_popup_call_poc_act_pane_g10

0xe42b,	// (0x0006f739) bg_popup_call_poc_act_pane_g11

0x000a,

0xbf46,	// (0x0006d254) mup_scale_pane

0xbf5e,	// (0x0006d26c) mup_scale_pane_g1

0xd33d,	// (0x0006e64b) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x000706bd) mup_scale_pane_g

0xd361,	// (0x0006e66f) msg_data_pane

0xd369,	// (0x0006e677) scroll_pane_cp017

0x299a,	// (0x00063ca8) bg_list_pane_cp04_ParamLimits

0x299a,	// (0x00063ca8) bg_list_pane_cp04

0xd371,	// (0x0006e67f) msg_data_pane_g1

0x29be,	// (0x00063ccc) msg_data_pane_g2

0x29c8,	// (0x00063cd6) msg_data_pane_g3

0x29d0,	// (0x00063cde) msg_data_pane_g4

0x29d8,	// (0x00063ce6) msg_data_pane_g5

0x29e0,	// (0x00063cee) msg_data_pane_g6

0x29e8,	// (0x00063cf6) msg_data_pane_g7

0x0006,

0xf3be,	// (0x000706cc) msg_data_pane_g

0x29f0,	// (0x00063cfe) msg_text_pane_ParamLimits

0x29f0,	// (0x00063cfe) msg_text_pane

0x2a25,	// (0x00063d33) qrid_highlight_pane_cp011_ParamLimits

0x2a25,	// (0x00063d33) qrid_highlight_pane_cp011

0xbceb,	// (0x0006cff9) msg_body_pane

0xbf46,	// (0x0006d254) msg_header_pane

0xd38d,	// (0x0006e69b) input_focus_pane_cp07

0xd3ae,	// (0x0006e6bc) msg_header_pane_t1_ParamLimits

0xd3ae,	// (0x0006e6bc) msg_header_pane_t1

0x2a49,	// (0x00063d57) msg_header_pane_t2_ParamLimits

0x2a49,	// (0x00063d57) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x000706e0) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x000706e0) msg_header_pane_t

0xd3ca,	// (0x0006e6d8) msg_body_pane_g1

0x2a69,	// (0x00063d77) msg_body_pane_t1_ParamLimits

0x2a69,	// (0x00063d77) msg_body_pane_t1

0x2a9a,	// (0x00063da8) msg_body_pane_t2_ParamLimits

0x2a9a,	// (0x00063da8) msg_body_pane_t2

0x2aac,	// (0x00063dba) msg_body_pane_t3_ParamLimits

0x2aac,	// (0x00063dba) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x000706e5) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x000706e5) msg_body_pane_t

0x2af8,	// (0x00063e06) main_viewer_pane_g1_ParamLimits

0x2af8,	// (0x00063e06) main_viewer_pane_g1

0x2b06,	// (0x00063e14) main_viewer_pane_g2_ParamLimits

0x2b06,	// (0x00063e14) main_viewer_pane_g2

0x2b14,	// (0x00063e22) main_viewer_pane_g3_ParamLimits

0x2b14,	// (0x00063e22) main_viewer_pane_g3

0x2b23,	// (0x00063e31) main_viewer_pane_g4_ParamLimits

0x2b23,	// (0x00063e31) main_viewer_pane_g4

0x9ffe,	// (0x0006b30c) main_viewer_pane_g5_ParamLimits

0x9ffe,	// (0x0006b30c) main_viewer_pane_g5

0x9ffe,	// (0x0006b30c) main_viewer_pane_g7_ParamLimits

0x9ffe,	// (0x0006b30c) main_viewer_pane_g7

0xc7b4,	// (0x0006dac2) main_viewer_pane_g8_ParamLimits

0xc7b4,	// (0x0006dac2) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x000706f5) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x000706f5) main_viewer_pane_g

0xd3d2,	// (0x0006e6e0) viewer_content_pane_ParamLimits

0xd3d2,	// (0x0006e6e0) viewer_content_pane

0x2b5f,	// (0x00063e6d) main_postcard_pane_g1_ParamLimits

0x2b5f,	// (0x00063e6d) main_postcard_pane_g1

0x2b75,	// (0x00063e83) main_postcard_pane_g2_ParamLimits

0x2b75,	// (0x00063e83) main_postcard_pane_g2

0x2b8b,	// (0x00063e99) main_postcard_pane_g3_ParamLimits

0x2b8b,	// (0x00063e99) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x00070706) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x00070706) main_postcard_pane_g

0x2ba2,	// (0x00063eb0) main_postcard_pane_g4

0xe56d,	// (0x0006f87b) smil_status_volume_pane_g2

0x2be5,	// (0x00063ef3) postcard_pane_ParamLimits

0x2be5,	// (0x00063ef3) postcard_pane

0xd3e0,	// (0x0006e6ee) postcard_pane_g1_ParamLimits

0xd3e0,	// (0x0006e6ee) postcard_pane_g1

0x2c27,	// (0x00063f35) postcard_pane_g2_ParamLimits

0x2c27,	// (0x00063f35) postcard_pane_g2

0x2c33,	// (0x00063f41) postcard_pane_g3_ParamLimits

0x2c33,	// (0x00063f41) postcard_pane_g3

0xd3ee,	// (0x0006e6fc) postcard_pane_g4_ParamLimits

0xd3ee,	// (0x0006e6fc) postcard_pane_g4

0x2c3f,	// (0x00063f4d) postcard_pane_g5_ParamLimits

0x2c3f,	// (0x00063f4d) postcard_pane_g5

0x2c54,	// (0x00063f62) postcard_pane_g6_ParamLimits

0x2c54,	// (0x00063f62) postcard_pane_g6

0xd3e0,	// (0x0006e6ee) postcard_pane_g7_ParamLimits

0xd3e0,	// (0x0006e6ee) postcard_pane_g7

0x0006,

0xf405,	// (0x00070713) postcard_pane_g_ParamLimits

0xf405,	// (0x00070713) postcard_pane_g

0x2c68,	// (0x00063f76) main_mp2_pane_g1_ParamLimits

0x2c68,	// (0x00063f76) main_mp2_pane_g1

0x2c74,	// (0x00063f82) main_mp2_pane_g2_ParamLimits

0x2c74,	// (0x00063f82) main_mp2_pane_g2

0x2c80,	// (0x00063f8e) main_mp2_pane_g3_ParamLimits

0x2c80,	// (0x00063f8e) main_mp2_pane_g3

0x0002,

0xf414,	// (0x00070722) main_mp2_pane_g_ParamLimits

0xf414,	// (0x00070722) main_mp2_pane_g

0x2c8c,	// (0x00063f9a) main_mp2_pane_t1_ParamLimits

0x2c8c,	// (0x00063f9a) main_mp2_pane_t1

0x2ca1,	// (0x00063faf) main_mp2_pane_t2_ParamLimits

0x2ca1,	// (0x00063faf) main_mp2_pane_t2

0x2cb3,	// (0x00063fc1) main_mp2_pane_t3_ParamLimits

0x2cb3,	// (0x00063fc1) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x00070729) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x00070729) main_mp2_pane_t

0xbf68,	// (0x0006d276) pec_content_pane_ParamLimits

0xbf68,	// (0x0006d276) pec_content_pane

0xb8ce,	// (0x0006cbdc) scroll_pane_cp015

0xd2d6,	// (0x0006e5e4) pec_attribute_pane_ParamLimits

0xd2d6,	// (0x0006e5e4) pec_attribute_pane

0xbfcf,	// (0x0006d2dd) pec_content_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) pec_content_pane_g1

0xd3fc,	// (0x0006e70a) pec_content_pane_t1_ParamLimits

0xd3fc,	// (0x0006e70a) pec_content_pane_t1

0xd410,	// (0x0006e71e) pec_content_pane_t2_ParamLimits

0xd410,	// (0x0006e71e) pec_content_pane_t2

0x0001,

0xf422,	// (0x00070730) pec_content_pane_t_ParamLimits

0xf422,	// (0x00070730) pec_content_pane_t

0xbfc1,	// (0x0006d2cf) list_single_graphic_pane_cp01_ParamLimits

0xbfc1,	// (0x0006d2cf) list_single_graphic_pane_cp01

0xbf46,	// (0x0006d254) bg_popup_sub_pane_cp04

0xd424,	// (0x0006e732) popup_mup_playback_window_g1

0xd430,	// (0x0006e73e) popup_mup_playback_window_t1

0xd445,	// (0x0006e753) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x00070735) popup_mup_playback_window_t

0xd47c,	// (0x0006e78a) main_image_pane_g1_ParamLimits

0xd47c,	// (0x0006e78a) main_image_pane_g1

0xd4bf,	// (0x0006e7cd) scroll_pane_cp018_ParamLimits

0xd4bf,	// (0x0006e7cd) scroll_pane_cp018

0xd4d7,	// (0x0006e7e5) scroll_pane_cp016_ParamLimits

0xd4d7,	// (0x0006e7e5) scroll_pane_cp016

0x2d7d,	// (0x0006408b) smil2_image_pane_ParamLimits

0x2d7d,	// (0x0006408b) smil2_image_pane

0x2dad,	// (0x000640bb) smil2_root_pane_ParamLimits

0x2dad,	// (0x000640bb) smil2_root_pane

0x2de5,	// (0x000640f3) smil2_text_pane_ParamLimits

0x2de5,	// (0x000640f3) smil2_text_pane

0xb8ce,	// (0x0006cbdc) bg_list_pane_cp06

0xb8ce,	// (0x0006cbdc) grid_radio_pane

0xbceb,	// (0x0006cff9) bg_popup_window_pane_cp06

0xc809,	// (0x0006db17) main_fmradio_pane_t1

0xe433,	// (0x0006f741) heading_pane_cp04

0xc809,	// (0x0006db17) main_fmradio_pane_t2

0xe43b,	// (0x0006f749) popup_cale_lunar_info_window_g1

0xc809,	// (0x0006db17) main_fmradio_pane_t3

0xe443,	// (0x0006f751) popup_cale_lunar_info_window_g2

0xc809,	// (0x0006db17) main_fmradio_pane_t4

0x0001,

0xc809,	// (0x0006db17) main_fmradio_pane_t5

0x0004,

0xf4f7,	// (0x00070805) popup_cale_lunar_info_window_g

0xf287,	// (0x00070595) main_fmradio_pane_t

0xb8ce,	// (0x0006cbdc) wait_bar_pane_cp03

0xbfc1,	// (0x0006d2cf) cell_fmradio_pane_ParamLimits

0xbfc1,	// (0x0006d2cf) cell_fmradio_pane

0xbfcf,	// (0x0006d2dd) cell_fmradio_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) cell_fmradio_pane_g1

0xb8ce,	// (0x0006cbdc) grid_highlight_pane_cp011

0xd50b,	// (0x0006e819) poc_content_pane_ParamLimits

0xd50b,	// (0x0006e819) poc_content_pane

0xd51d,	// (0x0006e82b) scroll_pane_cp019

0x2e65,	// (0x00064173) popup_call_poc_act_window_ParamLimits

0x2e65,	// (0x00064173) popup_call_poc_act_window

0x2e89,	// (0x00064197) popup_call_poc_inact_window_ParamLimits

0x2e89,	// (0x00064197) popup_call_poc_inact_window

0xf4d3,	// (0x000707e1) bg_popup_call_poc_act_pane_g

0xe3ab,	// (0x0006f6b9) bg_popup_call_poc_inact_pane_g1

0xe3b3,	// (0x0006f6c1) bg_popup_call_poc_inact_pane_g2

0xd525,	// (0x0006e833) popup_call_poc_act_window_g2

0xe3bb,	// (0x0006f6c9) bg_popup_call_poc_inact_pane_g3

0xe3c3,	// (0x0006f6d1) bg_popup_call_poc_inact_pane_g4

0xe3cb,	// (0x0006f6d9) bg_popup_call_poc_inact_pane_g5

0xd52d,	// (0x0006e83b) popup_call_poc_act_window_t1_ParamLimits

0xd52d,	// (0x0006e83b) popup_call_poc_act_window_t1

0xd555,	// (0x0006e863) popup_call_poc_act_window_t2_ParamLimits

0xd555,	// (0x0006e863) popup_call_poc_act_window_t2

0xd57d,	// (0x0006e88b) popup_call_poc_act_window_t3_ParamLimits

0xd57d,	// (0x0006e88b) popup_call_poc_act_window_t3

0xd5a5,	// (0x0006e8b3) popup_call_poc_act_window_t4_ParamLimits

0xd5a5,	// (0x0006e8b3) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x0007074a) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x0007074a) popup_call_poc_act_window_t

0xe3d3,	// (0x0006f6e1) bg_popup_call_poc_inact_pane_g6

0xe3db,	// (0x0006f6e9) bg_popup_call_poc_inact_pane_g7

0xe3e3,	// (0x0006f6f1) bg_popup_call_poc_inact_pane_g8

0xd5b7,	// (0x0006e8c5) popup_call_poc_inact_window_g2

0xe3eb,	// (0x0006f6f9) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c0,	// (0x000707ce) bg_popup_call_poc_inact_pane_g

0xd5bf,	// (0x0006e8cd) popup_call_poc_inact_window_t1_ParamLimits

0xd5bf,	// (0x0006e8cd) popup_call_poc_inact_window_t1

0xd5d4,	// (0x0006e8e2) popup_call_poc_inact_window_t2_ParamLimits

0xd5d4,	// (0x0006e8e2) popup_call_poc_inact_window_t2

0xd5e9,	// (0x0006e8f7) popup_call_poc_inact_window_t3_ParamLimits

0xd5e9,	// (0x0006e8f7) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x00070753) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x00070753) popup_call_poc_inact_window_t

0xe4e5,	// (0x0006f7f3) context_pane_ParamLimits

0x3689,	// (0x00064997) signal_pane_ParamLimits

0xc252,	// (0x0006d560) main_call2_pane

0xa049,	// (0x0006b357) popup_phob_thumbnail2_window_ParamLimits

0xa049,	// (0x0006b357) popup_phob_thumbnail2_window

0x9fe6,	// (0x0006b2f4) aid_hotspot_pointer_arrow_pane

0x9fee,	// (0x0006b2fc) aid_hotspot_pointer_hand_pane

0x316f,	// (0x0006447d) phob_pre_status_pane_g5

0xbf68,	// (0x0006d276) cams_zoom_pane_ParamLimits

0xbf68,	// (0x0006d276) image_vga_pane_ParamLimits

0xbfcf,	// (0x0006d2dd) main_camera_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) main_camera_pane_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) main_camera_pane_g3_ParamLimits

0xbfcf,	// (0x0006d2dd) main_camera_pane_g4_ParamLimits

0xbfcf,	// (0x0006d2dd) main_camera_pane_g5_ParamLimits

0xbfcf,	// (0x0006d2dd) main_camera_pane_g6_ParamLimits

0xbfcf,	// (0x0006d2dd) main_camera_pane_g7_ParamLimits

0xf180,	// (0x0007048e) main_camera_pane_g_ParamLimits

0xc025,	// (0x0006d333) main_camera_pane_t1_ParamLimits

0xc025,	// (0x0006d333) main_camera_pane_t2_ParamLimits

0xf191,	// (0x0007049f) main_camera_pane_t_ParamLimits

0xbf46,	// (0x0006d254) bg_popup_preview_window_pane_cp01_ParamLimits

0xbf46,	// (0x0006d254) bg_popup_preview_window_pane_cp01

0xd5fe,	// (0x0006e90c) popup_phob_thumbnail2_window_g1_ParamLimits

0xd5fe,	// (0x0006e90c) popup_phob_thumbnail2_window_g1

0xbceb,	// (0x0006cff9) call2_cli_visual_pane

0x2ebd,	// (0x000641cb) popup_call2_audio_conf_window_ParamLimits

0x2ebd,	// (0x000641cb) popup_call2_audio_conf_window

0x2edd,	// (0x000641eb) popup_call2_audio_first_window_ParamLimits

0x2edd,	// (0x000641eb) popup_call2_audio_first_window

0x2f73,	// (0x00064281) popup_call2_audio_in_window_ParamLimits

0x2f73,	// (0x00064281) popup_call2_audio_in_window

0x2fbb,	// (0x000642c9) popup_call2_audio_out_window_ParamLimits

0x2fbb,	// (0x000642c9) popup_call2_audio_out_window

0x3025,	// (0x00064333) popup_call2_audio_second_window_ParamLimits

0x3025,	// (0x00064333) popup_call2_audio_second_window

0x308b,	// (0x00064399) popup_call2_audio_wait_window_ParamLimits

0x308b,	// (0x00064399) popup_call2_audio_wait_window

0xbceb,	// (0x0006cff9) bg_popup_call2_act_pane_cp03

0xbf28,	// (0x0006d236) list_conf_pane_cp

0xd60a,	// (0x0006e918) popup_call2_audio_conf_window_t1

0xcee6,	// (0x0006e1f4) list_single_graphic_popup_conf2_pane_ParamLimits

0xcee6,	// (0x0006e1f4) list_single_graphic_popup_conf2_pane

0xcef9,	// (0x0006e207) list_highlight_pane_cp04

0xd618,	// (0x0006e926) list_single_graphic_popup_conf2_pane_g1

0xcf0a,	// (0x0006e218) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x0007075a) list_single_graphic_popup_conf2_pane_g

0xd622,	// (0x0006e930) list_single_graphic_popup_conf2_pane_t1

0xd630,	// (0x0006e93e) bg_popup_call2_act_pane_cp01_ParamLimits

0xd630,	// (0x0006e93e) bg_popup_call2_act_pane_cp01

0xd6ba,	// (0x0006e9c8) call_type_pane_cp05_ParamLimits

0xd6ba,	// (0x0006e9c8) call_type_pane_cp05

0xd70e,	// (0x0006ea1c) popup_call2_audio_second_window_g1_ParamLimits

0xd70e,	// (0x0006ea1c) popup_call2_audio_second_window_g1

0xd762,	// (0x0006ea70) popup_call2_audio_second_window_g2_ParamLimits

0xd762,	// (0x0006ea70) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x0007075f) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x0007075f) popup_call2_audio_second_window_g

0xd7c7,	// (0x0006ead5) popup_call2_audio_second_window_t1_ParamLimits

0xd7c7,	// (0x0006ead5) popup_call2_audio_second_window_t1

0xd882,	// (0x0006eb90) popup_call2_audio_second_window_t2_ParamLimits

0xd882,	// (0x0006eb90) popup_call2_audio_second_window_t2

0xd8d5,	// (0x0006ebe3) popup_call2_audio_second_window_t3_ParamLimits

0xd8d5,	// (0x0006ebe3) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x00070766) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x00070766) popup_call2_audio_second_window_t

0xbceb,	// (0x0006cff9) bg_popup_call2_in_pane_cp02

0xbcf5,	// (0x0006d003) call_type_pane_cp04

0x30c5,	// (0x000643d3) popup_call2_audio_wait_window_g1

0x30cd,	// (0x000643db) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x0007076f) popup_call2_audio_wait_window_g

0xbd0d,	// (0x0006d01b) popup_call2_audio_wait_window_t3

0xd9c8,	// (0x0006ecd6) bg_popup_call2_act_pane_ParamLimits

0xd9c8,	// (0x0006ecd6) bg_popup_call2_act_pane

0xda88,	// (0x0006ed96) call_type_pane_cp03_ParamLimits

0xda88,	// (0x0006ed96) call_type_pane_cp03

0xdaec,	// (0x0006edfa) popup_call2_audio_first_window_g1_ParamLimits

0xdaec,	// (0x0006edfa) popup_call2_audio_first_window_g1

0xdb5c,	// (0x0006ee6a) popup_call2_audio_first_window_g2_ParamLimits

0xdb5c,	// (0x0006ee6a) popup_call2_audio_first_window_g2

0xdbc0,	// (0x0006eece) popup_call2_audio_first_window_g3_ParamLimits

0xdbc0,	// (0x0006eece) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x00070774) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x00070774) popup_call2_audio_first_window_g

0xdc48,	// (0x0006ef56) popup_call2_audio_first_window_t1_ParamLimits

0xdc48,	// (0x0006ef56) popup_call2_audio_first_window_t1

0xdd4b,	// (0x0006f059) popup_call2_audio_first_window_t4_ParamLimits

0xdd4b,	// (0x0006f059) popup_call2_audio_first_window_t4

0xde2e,	// (0x0006f13c) popup_call2_audio_first_window_t5_ParamLimits

0xde2e,	// (0x0006f13c) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x0007077f) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x0007077f) popup_call2_audio_first_window_t

0xbf3e,	// (0x0006d24c) bg_popup_call2_act_pane_g1

0xe44b,	// (0x0006f759) popup_cale_lunar_info_window_t1

0xe459,	// (0x0006f767) popup_cale_lunar_info_window_t2

0xe467,	// (0x0006f775) popup_cale_lunar_info_window_t3

0xbceb,	// (0x0006cff9) bg_popup_call2_bubble_pane

0xdf2f,	// (0x0006f23d) bg_popup_call2_in_pane_cp01_ParamLimits

0xdf2f,	// (0x0006f23d) bg_popup_call2_in_pane_cp01

0xb9c7,	// (0x0006ccd5) call_type_pane_cp02

0x30d5,	// (0x000643e3) popup_call2_audio_out_window_g1_ParamLimits

0x30d5,	// (0x000643e3) popup_call2_audio_out_window_g1

0xdf77,	// (0x0006f285) popup_call2_audio_out_window_g2_ParamLimits

0xdf77,	// (0x0006f285) popup_call2_audio_out_window_g2

0x3101,	// (0x0006440f) popup_call2_audio_out_window_g3_ParamLimits

0x3101,	// (0x0006440f) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x00070788) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x00070788) popup_call2_audio_out_window_g

0xdfae,	// (0x0006f2bc) popup_call2_audio_out_window_t1_ParamLimits

0xdfae,	// (0x0006f2bc) popup_call2_audio_out_window_t1

0xe00d,	// (0x0006f31b) popup_call2_audio_out_window_t2_ParamLimits

0xe00d,	// (0x0006f31b) popup_call2_audio_out_window_t2

0xe061,	// (0x0006f36f) popup_call2_audio_out_window_t3_ParamLimits

0xe061,	// (0x0006f36f) popup_call2_audio_out_window_t3

0xe077,	// (0x0006f385) popup_call2_audio_out_window_t4_ParamLimits

0xe077,	// (0x0006f385) popup_call2_audio_out_window_t4

0xe08d,	// (0x0006f39b) popup_call2_audio_out_window_t5_ParamLimits

0xe08d,	// (0x0006f39b) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x00070791) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x00070791) popup_call2_audio_out_window_t

0xe0f1,	// (0x0006f3ff) bg_popup_call2_in_pane_ParamLimits

0xe0f1,	// (0x0006f3ff) bg_popup_call2_in_pane

0xe14d,	// (0x0006f45b) popup_call2_audio_in_window_g1_ParamLimits

0xe14d,	// (0x0006f45b) popup_call2_audio_in_window_g1

0xe185,	// (0x0006f493) popup_call2_audio_in_window_g2_ParamLimits

0xe185,	// (0x0006f493) popup_call2_audio_in_window_g2

0xe1bd,	// (0x0006f4cb) popup_call2_audio_in_window_g3_ParamLimits

0xe1bd,	// (0x0006f4cb) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x0007079e) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x0007079e) popup_call2_audio_in_window_g

0xe215,	// (0x0006f523) popup_call2_audio_in_window_t1_ParamLimits

0xe215,	// (0x0006f523) popup_call2_audio_in_window_t1

0xe295,	// (0x0006f5a3) popup_call2_audio_in_window_t2_ParamLimits

0xe295,	// (0x0006f5a3) popup_call2_audio_in_window_t2

0xe315,	// (0x0006f623) popup_call2_audio_in_window_t3_ParamLimits

0xe315,	// (0x0006f623) popup_call2_audio_in_window_t3

0xe32f,	// (0x0006f63d) popup_call2_audio_in_window_t4_ParamLimits

0xe32f,	// (0x0006f63d) popup_call2_audio_in_window_t4

0xe341,	// (0x0006f64f) popup_call2_audio_in_window_t5_ParamLimits

0xe341,	// (0x0006f64f) popup_call2_audio_in_window_t5

0xe356,	// (0x0006f664) popup_call2_audio_in_window_t6_ParamLimits

0xe356,	// (0x0006f664) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x000707a7) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x000707a7) popup_call2_audio_in_window_t

0xbf3e,	// (0x0006d24c) bg_popup_call2_in_pane_g1

0xe483,	// (0x0006f791) popup_cale_lunar_info_window_t4

0x0003,

0xf4fc,	// (0x0007080a) popup_cale_lunar_info_window_t

0xbf46,	// (0x0006d254) bg_popup_call2_rect_pane_ParamLimits

0xbf46,	// (0x0006d254) bg_popup_call2_rect_pane

0xbceb,	// (0x0006cff9) call2_cli_visual_graphic_pane

0xbceb,	// (0x0006cff9) call2_cli_visual_text_pane

0xa070,	// (0x0006b37e) smil_status_volume_pane_g3

0x0002,

0xbf5e,	// (0x0006d26c) call2_cli_visual_graphic_pane_g1

0xbf5e,	// (0x0006d26c) call2_cli_visual_graphic_pane_g2

0xbf5e,	// (0x0006d26c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x000707b4) call2_cli_visual_graphic_pane_g

0xe36b,	// (0x0006f679) bg_popup_call2_rect_pane_g1

0xc159,	// (0x0006d467) bg_popup_call2_rect_pane_g2

0xe373,	// (0x0006f681) bg_popup_call2_rect_pane_g3

0xe37b,	// (0x0006f689) bg_popup_call2_rect_pane_g4

0xe383,	// (0x0006f691) bg_popup_call2_rect_pane_g5

0xe38b,	// (0x0006f699) bg_popup_call2_rect_pane_g6

0xe393,	// (0x0006f6a1) bg_popup_call2_rect_pane_g7

0xe39b,	// (0x0006f6a9) bg_popup_call2_rect_pane_g8

0xe3a3,	// (0x0006f6b1) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x000707bb) bg_popup_call2_rect_pane_g

0xe3ab,	// (0x0006f6b9) bg_popup_call2_bubble_pane_g1

0xe3b3,	// (0x0006f6c1) bg_popup_call2_bubble_pane_g2

0xe3bb,	// (0x0006f6c9) bg_popup_call2_bubble_pane_g3

0xe3c3,	// (0x0006f6d1) bg_popup_call2_bubble_pane_g4

0xe3cb,	// (0x0006f6d9) bg_popup_call2_bubble_pane_g5

0xe3d3,	// (0x0006f6e1) bg_popup_call2_bubble_pane_g6

0xe3db,	// (0x0006f6e9) bg_popup_call2_bubble_pane_g7

0xe3e3,	// (0x0006f6f1) bg_popup_call2_bubble_pane_g8

0xe3eb,	// (0x0006f6f9) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x000707ce) bg_popup_call2_bubble_pane_g

0x0d72,	// (0x00062080) aid_cale_week_size_cell_pane

0x1318,	// (0x00062626) aid_cams_cif_uncrop_pane_ParamLimits

0x1318,	// (0x00062626) aid_cams_cif_uncrop_pane

0xbf68,	// (0x0006d276) aid_cams_size_cell_ParamLimits

0xbf68,	// (0x0006d276) aid_cams_size_cell

0xbf68,	// (0x0006d276) grid_cams_pane_ParamLimits

0xbf68,	// (0x0006d276) linegrid_cams_pane_ParamLimits

0x1536,	// (0x00062844) call_video_pane_t1

0x1554,	// (0x00062862) call_video_pane_t2

0x0001,

0xf1dd,	// (0x000704eb) call_video_pane_t

0x1982,	// (0x00062c90) aid_cale_month_size_cell_pane_ParamLimits

0x1982,	// (0x00062c90) aid_cale_month_size_cell_pane

0xf540,	// (0x0007084e) smil_status_volume_pane_g

0xa07d,	// (0x0006b38b) volume_smil_pane_ParamLimits

0x9e12,	// (0x0006b120) aid_popup2_width_pane

0x0ce9,	// (0x00061ff7) cell_qdial_pane_g4_ParamLimits

0x0ce9,	// (0x00061ff7) cell_qdial_pane_g4

0x26e6,	// (0x000639f4) aid_blid_cardinal_pane_ParamLimits

0x26f2,	// (0x00063a00) aid_blid_destination_pane_ParamLimits

0x26f2,	// (0x00063a00) aid_blid_destination_pane

0xbf46,	// (0x0006d254) bg_popup_call_poc_act_pane_ParamLimits

0xbf46,	// (0x0006d254) bg_popup_call_poc_act_pane

0xbf46,	// (0x0006d254) bg_popup_call_poc_inact_pane_ParamLimits

0xbf46,	// (0x0006d254) bg_popup_call_poc_inact_pane

0xe3f3,	// (0x0006f701) bg_popup_call_poc_act_pane_g1

0xe3fb,	// (0x0006f709) bg_popup_call_poc_act_pane_g2

0xe403,	// (0x0006f711) bg_popup_call_poc_act_pane_g3

0xe3c3,	// (0x0006f6d1) bg_popup_call_poc_act_pane_g4

0xe3cb,	// (0x0006f6d9) bg_popup_call_poc_act_pane_g5

0xe40b,	// (0x0006f719) bg_popup_call_poc_act_pane_g6

0xe3db,	// (0x0006f6e9) bg_popup_call_poc_act_pane_g7

0xe413,	// (0x0006f721) bg_popup_call_poc_act_pane_g8

0xbceb,	// (0x0006cff9) main_usb_pane

0xa024,	// (0x0006b332) popup_cale_lunar_info_window

0x182e,	// (0x00062b3c) im_reading_pane_t1_ParamLimits

0xc313,	// (0x0006d621) list_im_pane_ParamLimits

0xc324,	// (0x0006d632) scroll_pane_cp07_ParamLimits

0xbceb,	// (0x0006cff9) grid_highlight_pane_cp012

0xbf46,	// (0x0006d254) mup_scale_pane_ParamLimits

0xbfcf,	// (0x0006d2dd) main_usb_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) main_usb_pane_g1

0xbfcf,	// (0x0006d2dd) main_usb_pane_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x000704ca) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x000704ca) main_usb_pane_g

0xc025,	// (0x0006d333) main_usb_pane_t1_ParamLimits

0xc025,	// (0x0006d333) main_usb_pane_t1

0xc025,	// (0x0006d333) main_usb_pane_t2_ParamLimits

0xc025,	// (0x0006d333) main_usb_pane_t2

0xc025,	// (0x0006d333) main_usb_pane_t3_ParamLimits

0xc025,	// (0x0006d333) main_usb_pane_t3

0xc025,	// (0x0006d333) main_usb_pane_t4_ParamLimits

0xc025,	// (0x0006d333) main_usb_pane_t4

0xc025,	// (0x0006d333) main_usb_pane_t5_ParamLimits

0xc025,	// (0x0006d333) main_usb_pane_t5

0xc025,	// (0x0006d333) main_usb_pane_t6_ParamLimits

0xc025,	// (0x0006d333) main_usb_pane_t6

0x0005,

0xf4ea,	// (0x000707f8) main_usb_pane_t_ParamLimits

0x2695,	// (0x000639a3) aid_text_placing

0x269e,	// (0x000639ac) main_location2_pane_t1_ParamLimits

0x26b0,	// (0x000639be) main_location2_pane_t2_ParamLimits

0x26c2,	// (0x000639d0) main_location2_pane_t3_ParamLimits

0x26d4,	// (0x000639e2) main_location2_pane_t4_ParamLimits

0x26d4,	// (0x000639e2) main_location2_pane_t4

0xf319,	// (0x00070627) main_location2_pane_t_ParamLimits

0xbf82,	// (0x0006d290) find_pinb_pane_g2_ParamLimits

0xbf82,	// (0x0006d290) find_pinb_pane_g2

0x0001,

0xf095,	// (0x000703a3) find_pinb_pane_g_ParamLimits

0xf095,	// (0x000703a3) find_pinb_pane_g

0xbf8e,	// (0x0006d29c) find_pinb_pane_t1_ParamLimits

0xbfa0,	// (0x0006d2ae) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x000703a8) find_pinb_pane_t_ParamLimits

0xbceb,	// (0x0006cff9) main_call3_pane

0x1e6d,	// (0x0006317b) cale_month_day_heading_pane_t1_ParamLimits

0x1ef3,	// (0x00063201) cale_month_day_heading_pane_t2_ParamLimits

0x1f6c,	// (0x0006327a) cale_month_day_heading_pane_t3_ParamLimits

0x1fe5,	// (0x000632f3) cale_month_day_heading_pane_t4_ParamLimits

0x2066,	// (0x00063374) cale_month_day_heading_pane_t5_ParamLimits

0x20ef,	// (0x000633fd) cale_month_day_heading_pane_t6_ParamLimits

0x2178,	// (0x00063486) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x00070523) cale_month_day_heading_pane_t_ParamLimits

0xc56e,	// (0x0006d87c) smil_status_volume_pane

0x2c03,	// (0x00063f11) postcard_address_pane_ParamLimits

0x2c03,	// (0x00063f11) postcard_address_pane

0x2c15,	// (0x00063f23) postcard_message_pane_ParamLimits

0x2c15,	// (0x00063f23) postcard_message_pane

0x312d,	// (0x0006443b) call2_cli_visual_pane_t1_ParamLimits

0x312d,	// (0x0006443b) call2_cli_visual_pane_t1

0xe598,	// (0x0006f8a6) postcard_message_pane_t1_ParamLimits

0xe598,	// (0x0006f8a6) postcard_message_pane_t1

0xe580,	// (0x0006f88e) postcard_address_pane_t1_ParamLimits

0xe580,	// (0x0006f88e) postcard_address_pane_t1

0x383b,	// (0x00064b49) popup_call3_audio_in_window_ParamLimits

0x383b,	// (0x00064b49) popup_call3_audio_in_window

0x36c6,	// (0x000649d4) bg_popup_call3_in_pane_ParamLimits

0x36c6,	// (0x000649d4) bg_popup_call3_in_pane

0x373c,	// (0x00064a4a) popup_call3_audio_in_window_g1_ParamLimits

0x373c,	// (0x00064a4a) popup_call3_audio_in_window_g1

0x375c,	// (0x00064a6a) popup_call3_audio_in_window_g2_ParamLimits

0x375c,	// (0x00064a6a) popup_call3_audio_in_window_g2

0x377c,	// (0x00064a8a) popup_call3_audio_in_window_g3_ParamLimits

0x377c,	// (0x00064a8a) popup_call3_audio_in_window_g3

0x0003,

0xf547,	// (0x00070855) popup_call3_audio_in_window_g_ParamLimits

0xf547,	// (0x00070855) popup_call3_audio_in_window_g

0x37ad,	// (0x00064abb) popup_call3_audio_in_window_t1_ParamLimits

0x37ad,	// (0x00064abb) popup_call3_audio_in_window_t1

0x37eb,	// (0x00064af9) popup_call3_audio_in_window_t2_ParamLimits

0x37eb,	// (0x00064af9) popup_call3_audio_in_window_t2

0x3829,	// (0x00064b37) popup_call3_audio_in_window_t3_ParamLimits

0x3829,	// (0x00064b37) popup_call3_audio_in_window_t3

0x0002,

0xf550,	// (0x0007085e) popup_call3_audio_in_window_t_ParamLimits

0xf550,	// (0x0007085e) popup_call3_audio_in_window_t

0xc252,	// (0x0006d560) bg_popup_call3_rect_pane

0xe36b,	// (0x0006f679) bg_popup_call3_rect_pane_g1

0xc159,	// (0x0006d467) bg_popup_call3_rect_pane_g2

0xe373,	// (0x0006f681) bg_popup_call3_rect_pane_g3

0xe37b,	// (0x0006f689) bg_popup_call3_rect_pane_g4

0xe383,	// (0x0006f691) bg_popup_call3_rect_pane_g5

0xe38b,	// (0x0006f699) bg_popup_call3_rect_pane_g6

0xe393,	// (0x0006f6a1) bg_popup_call3_rect_pane_g7

0xb8ce,	// (0x0006cbdc) mup_visualizer_osc_pane

0xb8ce,	// (0x0006cbdc) mup_visualizer_spec_pane

0x36f6,	// (0x00064a04) call3_video_qcif_pane_ParamLimits

0x36f6,	// (0x00064a04) call3_video_qcif_pane

0x3709,	// (0x00064a17) call3_video_qcif_uncrop_pane_ParamLimits

0x3709,	// (0x00064a17) call3_video_qcif_uncrop_pane

0x3717,	// (0x00064a25) call3_video_subqcif_pane_ParamLimits

0x3717,	// (0x00064a25) call3_video_subqcif_pane

0x372b,	// (0x00064a39) call3_video_subqcif_uncrop_pane_ParamLimits

0x372b,	// (0x00064a39) call3_video_subqcif_uncrop_pane

0x379c,	// (0x00064aaa) popup_call3_audio_in_window_g4_ParamLimits

0x379c,	// (0x00064aaa) popup_call3_audio_in_window_g4

0xb8ce,	// (0x0006cbdc) mup_spec_half_pane

0xb8ce,	// (0x0006cbdc) mup_spec_half_pane_cp

0xb8ce,	// (0x0006cbdc) mup_osc_middle_pane

0xc01b,	// (0x0006d329) mup_visualizer_osc_pane_g1

0xe533,	// (0x0006f841) mup_spec_bar_pane_ParamLimits

0xe533,	// (0x0006f841) mup_spec_bar_pane

0xc01b,	// (0x0006d329) mup_spec_bar_pane_g1

0xc01b,	// (0x0006d329) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x000703bd) mup_spec_bar_pane_g

0x0d72,	// (0x00062080) aid_cale_week_size_cell_pane_ParamLimits

0x0d8c,	// (0x0006209a) bg_cale_heading_pane_ParamLimits

0xc1b4,	// (0x0006d4c2) bg_cale_pane_cp01_ParamLimits

0x0da4,	// (0x000620b2) cale_week_corner_pane_ParamLimits

0x0dc3,	// (0x000620d1) cale_week_day_heading_pane_ParamLimits

0x0de0,	// (0x000620ee) cale_week_scroll_pane_g1_ParamLimits

0x0df3,	// (0x00062101) cale_week_scroll_pane_g2_ParamLimits

0x0e0b,	// (0x00062119) cale_week_scroll_pane_g3_ParamLimits

0x0e23,	// (0x00062131) cale_week_scroll_pane_g4_ParamLimits

0x0e3b,	// (0x00062149) cale_week_scroll_pane_g5_ParamLimits

0x0e5b,	// (0x00062169) cale_week_scroll_pane_g6_ParamLimits

0x0e7b,	// (0x00062189) cale_week_scroll_pane_g7_ParamLimits

0x0e9b,	// (0x000621a9) cale_week_scroll_pane_g8_ParamLimits

0x0ebf,	// (0x000621cd) cale_week_scroll_pane_g9_ParamLimits

0x0ed7,	// (0x000621e5) cale_week_scroll_pane_g10_ParamLimits

0x0eef,	// (0x000621fd) cale_week_scroll_pane_g11_ParamLimits

0x0f07,	// (0x00062215) cale_week_scroll_pane_g12_ParamLimits

0x0f1f,	// (0x0006222d) cale_week_scroll_pane_g13_ParamLimits

0x0f1f,	// (0x0006222d) cale_week_scroll_pane_g14_ParamLimits

0x0f1f,	// (0x0006222d) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00070434) cale_week_scroll_pane_g_ParamLimits

0x0f5b,	// (0x00062269) cale_week_time_pane_ParamLimits

0x0f7f,	// (0x0006228d) grid_cale_week_pane_ParamLimits

0xc1d1,	// (0x0006d4df) listscroll_cale_week_pane_t1

0xc1e3,	// (0x0006d4f1) scroll_pane_cp08_ParamLimits

0x19e2,	// (0x00062cf0) cale_month_corner_pane_ParamLimits

0xc544,	// (0x0006d852) cale_month_pane_t1

0x1e00,	// (0x0006310e) cale_month_week_pane_ParamLimits

0x2515,	// (0x00063823) popup_call_status_window_g1_ParamLimits

0x2529,	// (0x00063837) popup_call_status_window_g2_ParamLimits

0x253d,	// (0x0006384b) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x000705ae) popup_call_status_window_g_ParamLimits

0xce85,	// (0x0006e193) aid_call2_pane

0x2a3b,	// (0x00063d49) msg_header_pane_g1

0x2c03,	// (0x00063f11) postcard_address2_pane_ParamLimits

0x2c03,	// (0x00063f11) postcard_address2_pane

0x2c15,	// (0x00063f23) postcard_message2_pane_ParamLimits

0x2c15,	// (0x00063f23) postcard_message2_pane

0x3697,	// (0x000649a5) message2_row_pane_ParamLimits

0x3697,	// (0x000649a5) message2_row_pane

0x36b3,	// (0x000649c1) address2_row_pane_ParamLimits

0x36b3,	// (0x000649c1) address2_row_pane

0xe500,	// (0x0006f80e) postcard_message2_row_pane_g1

0xe508,	// (0x0006f816) postcard_message2_row_pane_t1

0xe500,	// (0x0006f80e) address2_row_pane_g1

0xe508,	// (0x0006f816) address2_row_pane_t1

0x12af,	// (0x000625bd) aid_size_cell_vorec

0xbceb,	// (0x0006cff9) main_rss_pane

0xe516,	// (0x0006f824) rss_list_single_pane_ParamLimits

0xe516,	// (0x0006f824) rss_list_single_pane

0xe524,	// (0x0006f832) rss_list_single_pane_t1

0xe524,	// (0x0006f832) rss_list_single_pane_t2

0x0001,

0xf53b,	// (0x00070849) rss_list_single_pane_t

0xbceb,	// (0x0006cff9) main_camera2_pane

0xbceb,	// (0x0006cff9) main_video2_pane

0xa092,	// (0x0006b3a0) cams_zoom_pane_cp2_ParamLimits

0xa092,	// (0x0006b3a0) cams_zoom_pane_cp2

0xa092,	// (0x0006b3a0) image2_vga_pane_ParamLimits

0xa092,	// (0x0006b3a0) image2_vga_pane

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g1_ParamLimits

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g1

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g2_ParamLimits

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g2

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g3_ParamLimits

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g3

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g4_ParamLimits

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g4

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g5_ParamLimits

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g5

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g6_ParamLimits

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g6

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g7_ParamLimits

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g7

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g8_ParamLimits

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g8

0x0008,

0xf557,	// (0x00070865) main_camera2_pane_g_ParamLimits

0xf557,	// (0x00070865) main_camera2_pane_g

0x385d,	// (0x00064b6b) main_camera2_pane_t1_ParamLimits

0x385d,	// (0x00064b6b) main_camera2_pane_t1

0x385d,	// (0x00064b6b) main_camera2_pane_t2_ParamLimits

0x385d,	// (0x00064b6b) main_camera2_pane_t2

0x385d,	// (0x00064b6b) main_camera2_pane_t3_ParamLimits

0x385d,	// (0x00064b6b) main_camera2_pane_t3

0x385d,	// (0x00064b6b) main_camera2_pane_t4_ParamLimits

0x385d,	// (0x00064b6b) main_camera2_pane_t4

0x0006,

0xf56a,	// (0x00070878) main_camera2_pane_t_ParamLimits

0xf56a,	// (0x00070878) main_camera2_pane_t

0xa0e4,	// (0x0006b3f2) cams_zoom_pane_cp4_ParamLimits

0xa0e4,	// (0x0006b3f2) cams_zoom_pane_cp4

0x3871,	// (0x00064b7f) image2_cif_pane_ParamLimits

0x3871,	// (0x00064b7f) image2_cif_pane

0x9e77,	// (0x0006b185) image2_subqcif_pane_ParamLimits

0x9e77,	// (0x0006b185) image2_subqcif_pane

0x387f,	// (0x00064b8d) main_video2_pane_g1_ParamLimits

0x387f,	// (0x00064b8d) main_video2_pane_g1

0x387f,	// (0x00064b8d) main_video2_pane_g2_ParamLimits

0x387f,	// (0x00064b8d) main_video2_pane_g2

0x387f,	// (0x00064b8d) main_video2_pane_g3_ParamLimits

0x387f,	// (0x00064b8d) main_video2_pane_g3

0x387f,	// (0x00064b8d) main_video2_pane_g4_ParamLimits

0x387f,	// (0x00064b8d) main_video2_pane_g4

0x387f,	// (0x00064b8d) main_video2_pane_g5_ParamLimits

0x387f,	// (0x00064b8d) main_video2_pane_g5

0x387f,	// (0x00064b8d) main_video2_pane_g6_ParamLimits

0x387f,	// (0x00064b8d) main_video2_pane_g6

0x0005,

0xf579,	// (0x00070887) main_video2_pane_g_ParamLimits

0xf579,	// (0x00070887) main_video2_pane_g

0x388d,	// (0x00064b9b) main_video2_pane_t1_ParamLimits

0x388d,	// (0x00064b9b) main_video2_pane_t1

0x388d,	// (0x00064b9b) main_video2_pane_t2_ParamLimits

0x388d,	// (0x00064b9b) main_video2_pane_t2

0x388d,	// (0x00064b9b) main_video2_pane_t3_ParamLimits

0x388d,	// (0x00064b9b) main_video2_pane_t3

0x0002,

0xf586,	// (0x00070894) main_video2_pane_t_ParamLimits

0xf586,	// (0x00070894) main_video2_pane_t

0x31d1,	// (0x000644df) call_muted_g2

0x0001,

0xf52d,	// (0x0007083b) call_muted_g

0xbceb,	// (0x0006cff9) main_mup2_pane

0xd2b4,	// (0x0006e5c2) main_mup2_pane_g1_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup2_pane_g1

0xd2b4,	// (0x0006e5c2) main_mup2_pane_g2_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup2_pane_g2

0x394e,	// (0x00064c5c) main_mup_pane_g13_cp1

0x9e85,	// (0x0006b193) mup_volume_pane_cp1

0xd2b4,	// (0x0006e5c2) main_mup2_pane_g4_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup2_pane_g4

0xd2b4,	// (0x0006e5c2) main_mup2_pane_g5_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup2_pane_g5

0xd2b4,	// (0x0006e5c2) main_mup2_pane_g6_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup2_pane_g6

0xd2b4,	// (0x0006e5c2) main_mup2_pane_g7_ParamLimits

0xd2b4,	// (0x0006e5c2) main_mup2_pane_g7

0x0006,

0xf58d,	// (0x0007089b) main_mup2_pane_g_ParamLimits

0xf58d,	// (0x0007089b) main_mup2_pane_g

0xd2c2,	// (0x0006e5d0) main_mup2_pane_t1_ParamLimits

0xd2c2,	// (0x0006e5d0) main_mup2_pane_t1

0xd2c2,	// (0x0006e5d0) main_mup2_pane_t2_ParamLimits

0xd2c2,	// (0x0006e5d0) main_mup2_pane_t2

0xd2c2,	// (0x0006e5d0) main_mup2_pane_t3_ParamLimits

0xd2c2,	// (0x0006e5d0) main_mup2_pane_t3

0xd2c2,	// (0x0006e5d0) main_mup2_pane_t4_ParamLimits

0xd2c2,	// (0x0006e5d0) main_mup2_pane_t4

0xd2c2,	// (0x0006e5d0) main_mup2_pane_t5_ParamLimits

0xd2c2,	// (0x0006e5d0) main_mup2_pane_t5

0xd2c2,	// (0x0006e5d0) main_mup2_pane_t6_ParamLimits

0xd2c2,	// (0x0006e5d0) main_mup2_pane_t6

0x0005,

0xf59c,	// (0x000708aa) main_mup2_pane_t_ParamLimits

0xf59c,	// (0x000708aa) main_mup2_pane_t

0xd2d6,	// (0x0006e5e4) mup2_visualizer_pane_ParamLimits

0xd2d6,	// (0x0006e5e4) mup2_visualizer_pane

0xd2d6,	// (0x0006e5e4) mup_progress_pane_cp_ParamLimits

0xd2d6,	// (0x0006e5e4) mup_progress_pane_cp

0xa108,	// (0x0006b416) mup_volume_pane_cp_ParamLimits

0xa108,	// (0x0006b416) mup_volume_pane_cp

0xbfcf,	// (0x0006d2dd) mup2_visualizer_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) mup2_visualizer_pane_g1

0xbfdd,	// (0x0006d2eb) mup2_visualizer_pane_g2_ParamLimits

0xbfdd,	// (0x0006d2eb) mup2_visualizer_pane_g2

0xbfdd,	// (0x0006d2eb) mup2_visualizer_pane_g3_ParamLimits

0xbfdd,	// (0x0006d2eb) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x000703ad) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x000703ad) mup2_visualizer_pane_g

0xb8ce,	// (0x0006cbdc) aid_size_cell_fmradio

0x3383,	// (0x00064691) aid_height_parent_landcape

0xc3a2,	// (0x0006d6b0) wml_content_pane_cp

0xc3aa,	// (0x0006d6b8) wml_tabs_pane

0xc3b3,	// (0x0006d6c1) popup_wml_miniature_window

0xc3bb,	// (0x0006d6c9) scroll_pane_cp021

0xc3cf,	// (0x0006d6dd) wml_content_pane_comp8

0xbceb,	// (0x0006cff9) bg_popup_sub_pane_cp05

0xe5ca,	// (0x0006f8d8) popup_wml_miniature_window_g1

0xe5d2,	// (0x0006f8e0) wml_miniature_view_pane

0x38a1,	// (0x00064baf) aid_size_wml_view

0x38a9,	// (0x00064bb7) wml_miniature_view_pane_g1

0x38b2,	// (0x00064bc0) wml_miniature_view_pane_g2

0x38bb,	// (0x00064bc9) wml_miniature_view_pane_g3

0x38c3,	// (0x00064bd1) wml_miniature_view_pane_g4

0x38cb,	// (0x00064bd9) wml_miniature_view_pane_g5

0x38d3,	// (0x00064be1) wml_miniature_view_pane_g6

0x38db,	// (0x00064be9) wml_miniature_view_pane_g7

0x38e3,	// (0x00064bf1) wml_miniature_view_pane_g8

0x0007,

0xf5a9,	// (0x000708b7) wml_miniature_view_pane_g

0xe5da,	// (0x0006f8e8) background_graphic_ParamLimits

0xe5da,	// (0x0006f8e8) background_graphic

0xe5e6,	// (0x0006f8f4) wml_tabs_2_pane

0xe5ef,	// (0x0006f8fd) wml_tabs_3_pane_ParamLimits

0xe5ef,	// (0x0006f8fd) wml_tabs_3_pane

0xe601,	// (0x0006f90f) wml_tabs_4_pane_ParamLimits

0xe601,	// (0x0006f90f) wml_tabs_4_pane

0xe617,	// (0x0006f925) wml_tabs_5_pane_ParamLimits

0xe617,	// (0x0006f925) wml_tabs_5_pane

0xe631,	// (0x0006f93f) wml_tabs_pane_g2_ParamLimits

0xe631,	// (0x0006f93f) wml_tabs_pane_g2

0xe646,	// (0x0006f954) wml_tabs_pane_g3_ParamLimits

0xe646,	// (0x0006f954) wml_tabs_pane_g3

0xe65b,	// (0x0006f969) wml_tabs_2_active_pane_ParamLimits

0xe65b,	// (0x0006f969) wml_tabs_2_active_pane

0xe65b,	// (0x0006f969) wml_tabs_2_passive_pane_ParamLimits

0xe65b,	// (0x0006f969) wml_tabs_2_passive_pane

0x38eb,	// (0x00064bf9) wml_tabs_3_active_pane_cp_ParamLimits

0x38eb,	// (0x00064bf9) wml_tabs_3_active_pane_cp

0x3900,	// (0x00064c0e) wml_tabs_3_passive_pane_ParamLimits

0x3900,	// (0x00064c0e) wml_tabs_3_passive_pane

0x3913,	// (0x00064c21) wml_tabs_3_passive_pane_cp_ParamLimits

0x3913,	// (0x00064c21) wml_tabs_3_passive_pane_cp

0x392a,	// (0x00064c38) tabs_4_active_pane

0x3932,	// (0x00064c40) tabs_4_passive_pane

0x393c,	// (0x00064c4a) tabs_4_passive_pane_cp

0x3944,	// (0x00064c52) tabs_4_passive_pane_cp2

0x3147,	// (0x00064455) aid_height_text

0xd2d6,	// (0x0006e5e4) mup_volume_cont_pane_ParamLimits

0xd2d6,	// (0x0006e5e4) mup_volume_cont_pane

0xb8ce,	// (0x0006cbdc) aid_size_cell_pinb

0xb8ce,	// (0x0006cbdc) aid_size_list_pinb

0xd2d6,	// (0x0006e5e4) mup2_volume_cont_pane_ParamLimits

0xd2d6,	// (0x0006e5e4) mup2_volume_cont_pane

0xa0f2,	// (0x0006b400) mup2_volume_cont_pane_g1_ParamLimits

0xa0f2,	// (0x0006b400) mup2_volume_cont_pane_g1

0x0896,	// (0x00061ba4) aid_size_cell_touch_ParamLimits

0x0896,	// (0x00061ba4) aid_size_cell_touch

0x0a5c,	// (0x00061d6a) touch_pane_ParamLimits

0x0a5c,	// (0x00061d6a) touch_pane

0x9e85,	// (0x0006b193) main_rss2_pane

0xe672,	// (0x0006f980) listscroll_rss2_pane

0xe67b,	// (0x0006f989) rss2_navigation_pane

0xe683,	// (0x0006f991) list_rss2_pane

0xcfbc,	// (0x0006e2ca) scroll_pane_cp22

0xe68b,	// (0x0006f999) rss2_navigation_pane_g1

0xe694,	// (0x0006f9a2) rss2_navigation_pane_g2

0xe69c,	// (0x0006f9aa) rss2_navigation_pane_g3

0x0002,

0xf5ba,	// (0x000708c8) rss2_navigation_pane_g

0xe6a4,	// (0x0006f9b2) rss2_navigation_pane_t1

0x3958,	// (0x00064c66) rss2_list_single_pane_ParamLimits

0x3958,	// (0x00064c66) rss2_list_single_pane

0xe6b2,	// (0x0006f9c0) rss2_list_single_pane_t2

0xe6c0,	// (0x0006f9ce) rss2_list_single_pane_t3_ParamLimits

0xe6c0,	// (0x0006f9ce) rss2_list_single_pane_t3

0xe6dd,	// (0x0006f9eb) rss2_list_single_pane_t4

0x2402,	// (0x00063710) smil_status_pane_g1

0x9e77,	// (0x0006b185) main_image2_pane_ParamLimits

0x9e77,	// (0x0006b185) main_image2_pane

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g9_ParamLimits

0xa0a0,	// (0x0006b3ae) main_camera2_pane_g9

0x385d,	// (0x00064b6b) main_camera2_pane_t5_ParamLimits

0x385d,	// (0x00064b6b) main_camera2_pane_t5

0xa0ae,	// (0x0006b3bc) main_camera2_pane_t6_ParamLimits

0xa0ae,	// (0x0006b3bc) main_camera2_pane_t6

0x396d,	// (0x00064c7b) main_image2_pane_g1_ParamLimits

0x396d,	// (0x00064c7b) main_image2_pane_g1

0x2e1b,	// (0x00064129) smil2_video_pane_ParamLimits

0x2e1b,	// (0x00064129) smil2_video_pane

0x9e2e,	// (0x0006b13c) aid_zoom_text_primary_cp

0x9e6d,	// (0x0006b17b) popup_preview_fixed_window

0xc30b,	// (0x0006d619) im_reading_pane_g1

0x384f,	// (0x00064b5d) cams2_bc_adjust_pane_cp_ParamLimits

0x384f,	// (0x00064b5d) cams2_bc_adjust_pane_cp

0xa0d6,	// (0x0006b3e4) cams2_bc_adjust_pane_ParamLimits

0xa0d6,	// (0x0006b3e4) cams2_bc_adjust_pane

0x394e,	// (0x00064c5c) cams2_bc_adjust_pane_g1

0x9e85,	// (0x0006b193) cams2_slider_pane

0x394e,	// (0x00064c5c) cams2_slider_pane_g1

0x394e,	// (0x00064c5c) cams2_slider_pane_g2

0x0006,

0xf5c1,	// (0x000708cf) cams2_slider_pane_g

0x0b24,	// (0x00061e32) calc_display_pane_ParamLimits

0x0b49,	// (0x00061e57) calc_paper_pane_ParamLimits

0x0b6c,	// (0x00061e7a) grid_calc_pane_ParamLimits

0x9fb7,	// (0x0006b2c5) popup_clock_digital_window_t1_ParamLimits

0xd4a8,	// (0x0006e7b6) main_image_pane_t1

0x0b06,	// (0x00061e14) aid_size_cell_calc_ParamLimits

0x0b06,	// (0x00061e14) aid_size_cell_calc

0x33db,	// (0x000646e9) popup_blid_sat_info2_window_ParamLimits

0x33db,	// (0x000646e9) popup_blid_sat_info2_window

0xe6eb,	// (0x0006f9f9) aid_size_cell_blid

0xe475,	// (0x0006f783) bg_popup_window_pane_cp07

0xe708,	// (0x0006fa16) grid_popup_blid_pane

0xe712,	// (0x0006fa20) heading_pane_cp05_ParamLimits

0xe712,	// (0x0006fa20) heading_pane_cp05

0xe7dc,	// (0x0006faea) cell_popup_blid_pane_ParamLimits

0xe7dc,	// (0x0006faea) cell_popup_blid_pane

0xe800,	// (0x0006fb0e) cell_popup_blid_pane_g1

0xe808,	// (0x0006fb16) cell_popup_blid_pane_t1

0xd2d6,	// (0x0006e5e4) mup2_indicator_pane_ParamLimits

0xd2d6,	// (0x0006e5e4) mup2_indicator_pane

0xb8ce,	// (0x0006cbdc) mup2_visualizer_osc_pane

0xe5b4,	// (0x0006f8c2) mup2_visualizer_spec_pane_ParamLimits

0xe5b4,	// (0x0006f8c2) mup2_visualizer_spec_pane

0xb8ce,	// (0x0006cbdc) mup2_spec_half_pane

0xb8ce,	// (0x0006cbdc) mup2_spec_half_pane_cp

0xe816,	// (0x0006fb24) mup2_spec_bar_pane_ParamLimits

0xe816,	// (0x0006fb24) mup2_spec_bar_pane

0xc01b,	// (0x0006d329) mup2_spec_bar_pane_g1

0xe835,	// (0x0006fb43) mup2_spec_bar_pane_g2

0x0001,

0xf5e7,	// (0x000708f5) mup2_spec_bar_pane_g

0xb8ce,	// (0x0006cbdc) mup2_osc_middle_pane

0xc01b,	// (0x0006d329) mup2_visualizer_osc_pane_g1

0xb8f8,	// (0x0006cc06) popup_number_entry_window_t1_ParamLimits

0xb90b,	// (0x0006cc19) popup_number_entry_window_t2_ParamLimits

0xb91d,	// (0x0006cc2b) popup_number_entry_window_t3_ParamLimits

0x0aae,	// (0x00061dbc) popup_number_entry_window_t5_ParamLimits

0x0aae,	// (0x00061dbc) popup_number_entry_window_t5

0xf040,	// (0x0007034e) popup_number_entry_window_t_ParamLimits

0xb92f,	// (0x0006cc3d) text_title_cp2_ParamLimits

0x9ff6,	// (0x0006b304) aid_hotspot_pointer_text2_pane

0xa010,	// (0x0006b31e) main_viewer_pane_g9_ParamLimits

0xa010,	// (0x0006b31e) main_viewer_pane_g9

0xc544,	// (0x0006d852) cale_month_pane_t1_ParamLimits

0xc581,	// (0x0006d88f) bg_cale_pane_ParamLimits

0xc599,	// (0x0006d8a7) list_cale_pane_ParamLimits

0xc5aa,	// (0x0006d8b8) listscroll_cale_day_pane_t1

0xc5bc,	// (0x0006d8ca) scroll_pane_cp09_ParamLimits

0x27bf,	// (0x00063acd) main_mup_eq_pane_t1_ParamLimits

0x27bf,	// (0x00063acd) main_mup_eq_pane_t1

0x27d9,	// (0x00063ae7) main_mup_eq_pane_t2_ParamLimits

0x27d9,	// (0x00063ae7) main_mup_eq_pane_t2

0x27f3,	// (0x00063b01) main_mup_eq_pane_t3_ParamLimits

0x27f3,	// (0x00063b01) main_mup_eq_pane_t3

0x280f,	// (0x00063b1d) main_mup_eq_pane_t4_ParamLimits

0x280f,	// (0x00063b1d) main_mup_eq_pane_t4

0x282b,	// (0x00063b39) main_mup_eq_pane_t5_ParamLimits

0x282b,	// (0x00063b39) main_mup_eq_pane_t5

0x2847,	// (0x00063b55) main_mup_eq_pane_t6_ParamLimits

0x2847,	// (0x00063b55) main_mup_eq_pane_t6

0x285b,	// (0x00063b69) main_mup_eq_pane_t7_ParamLimits

0x285b,	// (0x00063b69) main_mup_eq_pane_t7

0x286f,	// (0x00063b7d) main_mup_eq_pane_t8_ParamLimits

0x286f,	// (0x00063b7d) main_mup_eq_pane_t8

0x2883,	// (0x00063b91) main_mup_eq_pane_t9_ParamLimits

0x2883,	// (0x00063b91) main_mup_eq_pane_t9

0x289d,	// (0x00063bab) main_mup_eq_pane_t10_ParamLimits

0x289d,	// (0x00063bab) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x000706a8) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x000706a8) main_mup_eq_pane_t

0x294c,	// (0x00063c5a) mup_equalizer_pane_cp5_ParamLimits

0x2960,	// (0x00063c6e) mup_equalizer_pane_cp6_ParamLimits

0x2974,	// (0x00063c82) mup_equalizer_pane_cp7_ParamLimits

0x9e85,	// (0x0006b193) main_gallery_pane

0xe552,	// (0x0006f860) smil2_volume_pane

0xe55a,	// (0x0006f868) smil_status_volume_pane_g1_ParamLimits

0xe56d,	// (0x0006f87b) smil_status_volume_pane_g2_ParamLimits

0xa070,	// (0x0006b37e) smil_status_volume_pane_g3_ParamLimits

0xf540,	// (0x0007084e) smil_status_volume_pane_g_ParamLimits

0xe475,	// (0x0006f783) bg_popup_window_pane_cp07_ParamLimits

0xe6f3,	// (0x0006fa01) blid_firmament_pane

0xbf68,	// (0x0006d276) aid_size_cell_gallery_ParamLimits

0xbf68,	// (0x0006d276) aid_size_cell_gallery

0xbf68,	// (0x0006d276) grid_gallery_pane_ParamLimits

0xbf68,	// (0x0006d276) grid_gallery_pane

0xe475,	// (0x0006f783) cell_gallery_pane_ParamLimits

0xe475,	// (0x0006f783) cell_gallery_pane

0xbf68,	// (0x0006d276) bg_cell_gallery_focus_pane_ParamLimits

0xbf68,	// (0x0006d276) bg_cell_gallery_focus_pane

0xbfcf,	// (0x0006d2dd) cell_gallery_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) cell_gallery_pane_g1

0xbfcf,	// (0x0006d2dd) cell_gallery_pane_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) cell_gallery_pane_g2

0xbfcf,	// (0x0006d2dd) cell_gallery_pane_g3_ParamLimits

0xbfcf,	// (0x0006d2dd) cell_gallery_pane_g3

0xbfdd,	// (0x0006d2eb) cell_gallery_pane_g4_ParamLimits

0xbfdd,	// (0x0006d2eb) cell_gallery_pane_g4

0x0003,

0xf5ec,	// (0x000708fa) cell_gallery_pane_g_ParamLimits

0xf5ec,	// (0x000708fa) cell_gallery_pane_g

0xe83f,	// (0x0006fb4d) bg_cell_gallery_focus_pane_g1

0xe847,	// (0x0006fb55) bg_cell_gallery_focus_pane_g2

0xe84f,	// (0x0006fb5d) bg_cell_gallery_focus_pane_g3

0xe857,	// (0x0006fb65) bg_cell_gallery_focus_pane_g4

0xe85f,	// (0x0006fb6d) bg_cell_gallery_focus_pane_g5

0xe867,	// (0x0006fb75) bg_cell_gallery_focus_pane_g6

0xe86f,	// (0x0006fb7d) bg_cell_gallery_focus_pane_g7

0xe877,	// (0x0006fb85) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5f5,	// (0x00070903) bg_cell_gallery_focus_pane_g

0xe87f,	// (0x0006fb8d) aid_firma_cardinal

0xe893,	// (0x0006fba1) blid_firmament_pane_t1

0xe8aa,	// (0x0006fbb8) blid_firmament_pane_t2

0xe8c1,	// (0x0006fbcf) blid_firmament_pane_t3

0xe8d8,	// (0x0006fbe6) blid_firmament_pane_t4

0x0003,

0xf606,	// (0x00070914) blid_firmament_pane_t

0xe8ef,	// (0x0006fbfd) blid_sat_info_pane

0xc01b,	// (0x0006d329) blid_sat_info_pane_g1

0xc01b,	// (0x0006d329) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x000703bd) blid_sat_info_pane_g

0xe8ff,	// (0x0006fc0d) blid_sat_info_pane_t1

0xe90d,	// (0x0006fc1b) smil2_volume_content_pane

0xe916,	// (0x0006fc24) smil2_volume_pane_g1

0xc0f0,	// (0x0006d3fe) smil2_volume_content_pane_g1

0xe91e,	// (0x0006fc2c) smil2_volume_content_pane_g2

0xe927,	// (0x0006fc35) smil2_volume_content_pane_g3

0xe930,	// (0x0006fc3e) smil2_volume_content_pane_g4

0xe939,	// (0x0006fc47) smil2_volume_content_pane_g5

0xe942,	// (0x0006fc50) smil2_volume_content_pane_g6

0xe94b,	// (0x0006fc59) smil2_volume_content_pane_g7

0xe954,	// (0x0006fc62) smil2_volume_content_pane_g8

0xe95d,	// (0x0006fc6b) smil2_volume_content_pane_g9

0xe966,	// (0x0006fc74) smil2_volume_content_pane_g10

0x0009,

0xf60f,	// (0x0007091d) smil2_volume_content_pane_g

0x1033,	// (0x00062341) cale_week_day_heading_pane_t1_ParamLimits

0x105d,	// (0x0006236b) cale_week_day_heading_pane_t2_ParamLimits

0x108c,	// (0x0006239a) cale_week_day_heading_pane_t3_ParamLimits

0x10bb,	// (0x000623c9) cale_week_day_heading_pane_t4_ParamLimits

0x10ea,	// (0x000623f8) cale_week_day_heading_pane_t5_ParamLimits

0x1121,	// (0x0006242f) cale_week_day_heading_pane_t6_ParamLimits

0x1158,	// (0x00062466) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x00070455) cale_week_day_heading_pane_t_ParamLimits

0xc200,	// (0x0006d50e) bg_cale_side_pane_ParamLimits

0x1182,	// (0x00062490) cale_week_time_pane_t1_ParamLimits

0x119c,	// (0x000624aa) cale_week_time_pane_t2_ParamLimits

0x11b6,	// (0x000624c4) cale_week_time_pane_t3_ParamLimits

0x11d0,	// (0x000624de) cale_week_time_pane_t4_ParamLimits

0x11ea,	// (0x000624f8) cale_week_time_pane_t5_ParamLimits

0x1204,	// (0x00062512) cale_week_time_pane_t6_ParamLimits

0x121e,	// (0x0006252c) cale_week_time_pane_t7_ParamLimits

0x1238,	// (0x00062546) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x00070464) cale_week_time_pane_t_ParamLimits

0x1252,	// (0x00062560) cell_cale_week_pane_g2_ParamLimits

0xc200,	// (0x0006d50e) bg_cale_side_pane_cp01_ParamLimits

0x2209,	// (0x00063517) cale_month_week_pane_t1_ParamLimits

0x2222,	// (0x00063530) cale_month_week_pane_t2_ParamLimits

0x223b,	// (0x00063549) cale_month_week_pane_t3_ParamLimits

0x2254,	// (0x00063562) cale_month_week_pane_t4_ParamLimits

0x226d,	// (0x0006357b) cale_month_week_pane_t5_ParamLimits

0x2286,	// (0x00063594) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x00070532) cale_month_week_pane_t_ParamLimits

0x9f27,	// (0x0006b235) cell_cale_month_pane_g1_ParamLimits

0x9e85,	// (0x0006b193) main_cale_event_viewer_pane

0xb8ce,	// (0x0006cbdc) listscroll_cale_event_viewer_pane

0xe96f,	// (0x0006fc7d) list_cale_ev_pane

0xe977,	// (0x0006fc85) scroll_pane_cp023

0xe983,	// (0x0006fc91) field_cale_ev_pane_ParamLimits

0xe983,	// (0x0006fc91) field_cale_ev_pane

0xe9a1,	// (0x0006fcaf) field_cale_ev_content_pane_ParamLimits

0xe9a1,	// (0x0006fcaf) field_cale_ev_content_pane

0xe9ad,	// (0x0006fcbb) field_cale_ev_pane_g1_ParamLimits

0xe9ad,	// (0x0006fcbb) field_cale_ev_pane_g1

0xe9b9,	// (0x0006fcc7) field_cale_ev_pane_g2_ParamLimits

0xe9b9,	// (0x0006fcc7) field_cale_ev_pane_g2

0xe9d1,	// (0x0006fcdf) field_cale_ev_pane_g3_ParamLimits

0xe9d1,	// (0x0006fcdf) field_cale_ev_pane_g3

0x0002,

0xf624,	// (0x00070932) field_cale_ev_pane_g_ParamLimits

0xf624,	// (0x00070932) field_cale_ev_pane_g

0xe9e9,	// (0x0006fcf7) field_cale_ev_pane_t1_ParamLimits

0xe9e9,	// (0x0006fcf7) field_cale_ev_pane_t1

0xc173,	// (0x0006d481) field_cale_ev_content_pane_t1_ParamLimits

0xc173,	// (0x0006d481) field_cale_ev_content_pane_t1

0xd379,	// (0x0006e687) bg_button_pane_cp01

0x0d60,	// (0x0006206e) listscroll_cale_week_pane_ParamLimits

0xc1ab,	// (0x0006d4b9) popup_toolbar_window_cp01

0xc1d1,	// (0x0006d4df) listscroll_cale_week_pane_t1_ParamLimits

0x0d60,	// (0x0006206e) listscroll_cale_day_pane_ParamLimits

0xc1ab,	// (0x0006d4b9) popup_toolbar_window_cp02

0xc5aa,	// (0x0006d8b8) listscroll_cale_day_pane_t1_ParamLimits

0x33a1,	// (0x000646af) main_cale_month_pane_ParamLimits

0xa05b,	// (0x0006b369) popup_toolbar_window_cp03_ParamLimits

0xa05b,	// (0x0006b369) popup_toolbar_window_cp03

0x2ce3,	// (0x00063ff1) main_image_pane_g2_ParamLimits

0x2ce3,	// (0x00063ff1) main_image_pane_g2

0x2cf4,	// (0x00064002) main_image_pane_g3_ParamLimits

0x2cf4,	// (0x00064002) main_image_pane_g3

0x0002,

0xf42c,	// (0x0007073a) main_image_pane_g_ParamLimits

0xf42c,	// (0x0007073a) main_image_pane_g

0xd4a8,	// (0x0006e7b6) main_image_pane_t1_ParamLimits

0x2d05,	// (0x00064013) main_image_pane_t2_ParamLimits

0x2d05,	// (0x00064013) main_image_pane_t2

0x2d17,	// (0x00064025) main_image_pane_t3_ParamLimits

0x2d17,	// (0x00064025) main_image_pane_t3

0x2d3f,	// (0x0006404d) main_image_pane_t4_ParamLimits

0x2d3f,	// (0x0006404d) main_image_pane_t4

0x0003,

0xf433,	// (0x00070741) main_image_pane_t_ParamLimits

0xf433,	// (0x00070741) main_image_pane_t

0x2d5f,	// (0x0006406d) popup_image_details_window_cp01

0x2d69,	// (0x00064077) popup_toobar_trans_pane_cp01_ParamLimits

0x2d69,	// (0x00064077) popup_toobar_trans_pane_cp01

0x34ba,	// (0x000647c8) popup_image_details_window_ParamLimits

0x34ba,	// (0x000647c8) popup_image_details_window

0xa02e,	// (0x0006b33c) popup_image_focus_window

0xa092,	// (0x0006b3a0) camera2_autofocus_pane_ParamLimits

0xa092,	// (0x0006b3a0) camera2_autofocus_pane

0xb8ce,	// (0x0006cbdc) bg_popup_sub_pane_cp06

0xea00,	// (0x0006fd0e) popup_image_focus_window_g1

0xea08,	// (0x0006fd16) popup_image_focus_window_g2

0xea10,	// (0x0006fd1e) popup_image_focus_window_g3

0xea18,	// (0x0006fd26) popup_image_focus_window_g4

0x0003,

0xf62b,	// (0x00070939) popup_image_focus_window_g

0xea20,	// (0x0006fd2e) popup_image_focus_window_t1

0xea2e,	// (0x0006fd3c) popup_image_focus_window_t2

0xea3e,	// (0x0006fd4c) popup_image_focus_window_t3

0x0002,

0xf634,	// (0x00070942) popup_image_focus_window_t

0xbfcf,	// (0x0006d2dd) camera2_autofocus_pane_g1

0xbf68,	// (0x0006d276) bg_tb_trans_pane_cp01

0xea4c,	// (0x0006fd5a) popup_image_details_window_g1

0xea5f,	// (0x0006fd6d) popup_image_details_window_g2

0x0002,

0xf646,	// (0x00070954) popup_image_details_window_g

0xea88,	// (0x0006fd96) popup_image_details_window_t1

0xea9a,	// (0x0006fda8) popup_image_details_window_t2

0xeab3,	// (0x0006fdc1) popup_image_details_window_t3

0xeac7,	// (0x0006fdd5) popup_image_details_window_t4

0xeae2,	// (0x0006fdf0) popup_image_details_window_t5

0x0004,

0xf64d,	// (0x0007095b) popup_image_details_window_t

0xc065,	// (0x0006d373) bg_calc_paper_pane_ParamLimits

0x9e85,	// (0x0006b193) grid_highlight_pane_cp013

0x9e97,	// (0x0006b1a5) list_calc_pane_ParamLimits

0x9ea9,	// (0x0006b1b7) scroll_pane_cp024

0xc079,	// (0x0006d387) bg_calc_display_pane_ParamLimits

0x0bae,	// (0x00061ebc) calc_display_pane_t1_ParamLimits

0x0bc3,	// (0x00061ed1) calc_display_pane_t2_ParamLimits

0x9eb1,	// (0x0006b1bf) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x000703d5) calc_display_pane_t_ParamLimits

0x0c83,	// (0x00061f91) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x000703f2) cell_calc_pane_g

0x0c8c,	// (0x00061f9a) cell_calc_pane_t1

0xc0ce,	// (0x0006d3dc) grid_highlight_pane_cp02_ParamLimits

0xc0e4,	// (0x0006d3f2) toolbar_button_pane_cp01_ParamLimits

0xc0e4,	// (0x0006d3f2) toolbar_button_pane_cp01

0xd4ed,	// (0x0006e7fb) temp_image_control_pane_ParamLimits

0xd4ed,	// (0x0006e7fb) temp_image_control_pane

0x9e77,	// (0x0006b185) main_mp3_pane

0xeafc,	// (0x0006fe0a) temp_image_control_pane_g1_ParamLimits

0xeafc,	// (0x0006fe0a) temp_image_control_pane_g1

0xeb0a,	// (0x0006fe18) temp_image_control_pane_g2_ParamLimits

0xeb0a,	// (0x0006fe18) temp_image_control_pane_g2

0xeb1c,	// (0x0006fe2a) temp_image_control_pane_g3_ParamLimits

0xeb1c,	// (0x0006fe2a) temp_image_control_pane_g3

0x3983,	// (0x00064c91) temp_image_control_pane_g4_ParamLimits

0x3983,	// (0x00064c91) temp_image_control_pane_g4

0x0003,

0xf658,	// (0x00070966) temp_image_control_pane_g_ParamLimits

0xf658,	// (0x00070966) temp_image_control_pane_g

0xeafc,	// (0x0006fe0a) main_mp3_pane_g1

0x3996,	// (0x00064ca4) main_mp3_pane_g2

0x0007,

0xf661,	// (0x0007096f) main_mp3_pane_g

0xeb51,	// (0x0006fe5f) main_mp3_pane_t1

0xbfdd,	// (0x0006d2eb) main_camera_pane_g8_ParamLimits

0xbfdd,	// (0x0006d2eb) main_camera_pane_g8

0x141c,	// (0x0006272a) main_video_pane_g7_ParamLimits

0x141c,	// (0x0006272a) main_video_pane_g7

0xa0c2,	// (0x0006b3d0) main_camera2_pane_t7_ParamLimits

0xa0c2,	// (0x0006b3d0) main_camera2_pane_t7

0xc362,	// (0x0006d670) scroll_pane_cp025_ParamLimits

0xc362,	// (0x0006d670) scroll_pane_cp025

0xc376,	// (0x0006d684) scroll_pane_cp026_ParamLimits

0xc376,	// (0x0006d684) scroll_pane_cp026

0xc385,	// (0x0006d693) wml_content_pane_ParamLimits

0x9e85,	// (0x0006b193) main_touch_calib_pane

0x3a6a,	// (0x00064d78) main_touch_calib_pane_g1

0x3a7c,	// (0x00064d8a) main_touch_calib_pane_g2

0x3a8e,	// (0x00064d9c) main_touch_calib_pane_g3

0x3aa0,	// (0x00064dae) main_touch_calib_pane_g4

0x0003,

0xf67f,	// (0x0007098d) main_touch_calib_pane_g

0x3ab2,	// (0x00064dc0) main_touch_calib_pane_t1

0x3acc,	// (0x00064dda) main_touch_calib_pane_t2

0x0004,

0xf688,	// (0x00070996) main_touch_calib_pane_t

0xd098,	// (0x0006e3a6) mup_progress_pane_cp02

0xd0cd,	// (0x0006e3db) navi_pane_g1

0xd188,	// (0x0006e496) navi_pane_mp_t3

0x9e77,	// (0x0006b185) main_mp3_pane_ParamLimits

0x363f,	// (0x0006494d) navi_pane_ParamLimits

0xeafc,	// (0x0006fe0a) main_mp3_pane_g1_ParamLimits

0x3996,	// (0x00064ca4) main_mp3_pane_g2_ParamLimits

0x39a4,	// (0x00064cb2) main_mp3_pane_g3_ParamLimits

0x39a4,	// (0x00064cb2) main_mp3_pane_g3

0x39b2,	// (0x00064cc0) main_mp3_pane_g4_ParamLimits

0x39b2,	// (0x00064cc0) main_mp3_pane_g4

0xbfcf,	// (0x0006d2dd) main_mp3_pane_g5_ParamLimits

0xbfcf,	// (0x0006d2dd) main_mp3_pane_g5

0xeb2c,	// (0x0006fe3a) main_mp3_pane_g6_ParamLimits

0xeb2c,	// (0x0006fe3a) main_mp3_pane_g6

0xeb39,	// (0x0006fe47) main_mp3_pane_g7_ParamLimits

0xeb39,	// (0x0006fe47) main_mp3_pane_g7

0xeb45,	// (0x0006fe53) main_mp3_pane_g8_ParamLimits

0xeb45,	// (0x0006fe53) main_mp3_pane_g8

0xf661,	// (0x0007096f) main_mp3_pane_g_ParamLimits

0x39be,	// (0x00064ccc) main_mp3_pane_t2

0x39cc,	// (0x00064cda) main_mp3_pane_t3

0xeb5f,	// (0x0006fe6d) main_mp3_pane_t4

0xeb6d,	// (0x0006fe7b) main_mp3_pane_t5

0x0005,

0xf672,	// (0x00070980) main_mp3_pane_t

0xeb7b,	// (0x0006fe89) mup_progress_pane_cp01

0x9e2e,	// (0x0006b13c) aid_zoom_text_secondary2

0xe96f,	// (0x0006fc7d) list_cale_ev2_pane

0xe977,	// (0x0006fc85) scroll_pane_cp023_ParamLimits

0x3b22,	// (0x00064e30) field_cale_ev2_pane_ParamLimits

0x3b22,	// (0x00064e30) field_cale_ev2_pane

0xeb83,	// (0x0006fe91) field_cale_ev2_pane_g1_ParamLimits

0xeb83,	// (0x0006fe91) field_cale_ev2_pane_g1

0xebb1,	// (0x0006febf) field_cale_ev2_pane_g2_ParamLimits

0xebb1,	// (0x0006febf) field_cale_ev2_pane_g2

0xebc9,	// (0x0006fed7) field_cale_ev2_pane_g3_ParamLimits

0xebc9,	// (0x0006fed7) field_cale_ev2_pane_g3

0x0003,

0xf693,	// (0x000709a1) field_cale_ev2_pane_g_ParamLimits

0xf693,	// (0x000709a1) field_cale_ev2_pane_g

0x3b42,	// (0x00064e50) field_cale_ev2_pane_t1_ParamLimits

0x3b42,	// (0x00064e50) field_cale_ev2_pane_t1

0x3b59,	// (0x00064e67) field_cale_ev2_pane_t2_ParamLimits

0x3b59,	// (0x00064e67) field_cale_ev2_pane_t2

0x0001,

0xf69c,	// (0x000709aa) field_cale_ev2_pane_t_ParamLimits

0xf69c,	// (0x000709aa) field_cale_ev2_pane_t

0x2bb9,	// (0x00063ec7) main_postcard_pane_g5_ParamLimits

0x2bb9,	// (0x00063ec7) main_postcard_pane_g5

0x2bcf,	// (0x00063edd) main_postcard_pane_g6_ParamLimits

0x2bcf,	// (0x00063edd) main_postcard_pane_g6

0xbf68,	// (0x0006d276) camera2_autofocus_pane_cp_ParamLimits

0xbf68,	// (0x0006d276) camera2_autofocus_pane_cp

0x9e77,	// (0x0006b185) main_mup3_pane

0x3bb2,	// (0x00064ec0) main_mup3_pane_g1_ParamLimits

0x3bb2,	// (0x00064ec0) main_mup3_pane_g1

0x3bd4,	// (0x00064ee2) main_mup3_pane_g2_ParamLimits

0x3bd4,	// (0x00064ee2) main_mup3_pane_g2

0x3c52,	// (0x00064f60) main_mup3_pane_g3_ParamLimits

0x3c52,	// (0x00064f60) main_mup3_pane_g3

0x3c98,	// (0x00064fa6) main_mup3_pane_g4_ParamLimits

0x3c98,	// (0x00064fa6) main_mup3_pane_g4

0x3cde,	// (0x00064fec) main_mup3_pane_g5_ParamLimits

0x3cde,	// (0x00064fec) main_mup3_pane_g5

0x3d24,	// (0x00065032) main_mup3_pane_g6_ParamLimits

0x3d24,	// (0x00065032) main_mup3_pane_g6

0xbfdd,	// (0x0006d2eb) main_mup3_pane_g7_ParamLimits

0xbfdd,	// (0x0006d2eb) main_mup3_pane_g7

0x0007,

0xf6ac,	// (0x000709ba) main_mup3_pane_g_ParamLimits

0xf6ac,	// (0x000709ba) main_mup3_pane_g

0x3da2,	// (0x000650b0) main_mup3_pane_t1_ParamLimits

0x3da2,	// (0x000650b0) main_mup3_pane_t1

0x3e16,	// (0x00065124) main_mup3_pane_t2_ParamLimits

0x3e16,	// (0x00065124) main_mup3_pane_t2

0x3eea,	// (0x000651f8) main_mup3_pane_t4_ParamLimits

0x3eea,	// (0x000651f8) main_mup3_pane_t4

0x3f40,	// (0x0006524e) main_mup3_pane_t5_ParamLimits

0x3f40,	// (0x0006524e) main_mup3_pane_t5

0x3ffc,	// (0x0006530a) main_mup3_pane_t6_ParamLimits

0x3ffc,	// (0x0006530a) main_mup3_pane_t6

0x0005,

0xf6bd,	// (0x000709cb) main_mup3_pane_t_ParamLimits

0xf6bd,	// (0x000709cb) main_mup3_pane_t

0x40b4,	// (0x000653c2) mup3_progress_pane_ParamLimits

0x40b4,	// (0x000653c2) mup3_progress_pane

0x414a,	// (0x00065458) popup_mup3_control_window_ParamLimits

0x414a,	// (0x00065458) popup_mup3_control_window

0xebed,	// (0x0006fefb) popup_mup3_text_window

0x417c,	// (0x0006548a) mup3_progress_pane_t1

0x419b,	// (0x000654a9) mup3_progress_pane_t2

0xebf5,	// (0x0006ff03) mup3_progress_pane_t3

0x0002,

0xf6ca,	// (0x000709d8) mup3_progress_pane_t

0xec12,	// (0x0006ff20) mup_progress_pane_cp03

0xb8ce,	// (0x0006cbdc) bg_tb_trans_pane_cp04

0x41ba,	// (0x000654c8) mup3_volume_pane

0x41c2,	// (0x000654d0) popup_mup3_control_window_g1

0x41cb,	// (0x000654d9) mup3_volume_pane_g1

0x41d4,	// (0x000654e2) mup3_volume_pane_g2

0x41dd,	// (0x000654eb) mup3_volume_pane_g3

0x0002,

0xf6d1,	// (0x000709df) mup3_volume_pane_g

0xb8ce,	// (0x0006cbdc) bg_tb_trans_pane_cp03

0xec22,	// (0x0006ff30) popup_mup3_text_window_g1

0xec2a,	// (0x0006ff38) popup_mup3_text_window_t1

0xc0c1,	// (0x0006d3cf) list_calc_item_pane_g1_ParamLimits

0xe669,	// (0x0006f977) mup_volume_pane_cp_g1

0x3ae6,	// (0x00064df4) main_touch_calib_pane_t3

0x3afa,	// (0x00064e08) main_touch_calib_pane_t4

0x3b0e,	// (0x00064e1c) main_touch_calib_pane_t5

0x9e0a,	// (0x0006b118) aid_cell_size_toolbar2

0x9e12,	// (0x0006b120) aid_popup3_width_pane

0x9e1e,	// (0x0006b12c) aid_zoom_text_msg_primary

0x12f7,	// (0x00062605) vorec_t7

0xc085,	// (0x0006d393) bg_calc_paper_pane_g1_ParamLimits

0xc091,	// (0x0006d39f) bg_calc_paper_pane_g2_ParamLimits

0xc09d,	// (0x0006d3ab) bg_calc_paper_pane_g3_ParamLimits

0xc0a9,	// (0x0006d3b7) bg_calc_paper_pane_g4_ParamLimits

0xc0b5,	// (0x0006d3c3) bg_calc_paper_pane_g5_ParamLimits

0x0c0d,	// (0x00061f1b) bg_calc_paper_pane_g6_ParamLimits

0x0c1c,	// (0x00061f2a) bg_calc_paper_pane_g7_ParamLimits

0x0c2b,	// (0x00061f39) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x000703dc) bg_calc_paper_pane_g_ParamLimits

0x0c3e,	// (0x00061f4c) calc_bg_paper_pane_g9_ParamLimits

0xbf68,	// (0x0006d276) image_qvga_pane_ParamLimits

0xbf68,	// (0x0006d276) image_qvga_pane

0xbf46,	// (0x0006d254) bg_popup_sub_pane_cp04_ParamLimits

0xd424,	// (0x0006e732) popup_mup_playback_window_g1_ParamLimits

0xd430,	// (0x0006e73e) popup_mup_playback_window_t1_ParamLimits

0xd445,	// (0x0006e753) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x00070735) popup_mup_playback_window_t_ParamLimits

0xbfdd,	// (0x0006d2eb) main_mup2_pane_g3_ParamLimits

0xbfdd,	// (0x0006d2eb) main_mup2_pane_g3

0x15d7,	// (0x000628e5) popup_toolbar_window_cp04

0xd7b6,	// (0x0006eac4) popup_call2_audio_second_window_g3_ParamLimits

0xd7b6,	// (0x0006eac4) popup_call2_audio_second_window_g3

0xdbce,	// (0x0006eedc) popup_call2_audio_first_window_g4_ParamLimits

0xdbce,	// (0x0006eedc) popup_call2_audio_first_window_g4

0xe1f5,	// (0x0006f503) popup_call2_audio_in_window_g4_ParamLimits

0xe1f5,	// (0x0006f503) popup_call2_audio_in_window_g4

0x2cc5,	// (0x00063fd3) aid_area_sk_bg_cut_ParamLimits

0x2cc5,	// (0x00063fd3) aid_area_sk_bg_cut

0xd45a,	// (0x0006e768) aid_area_sk_bg_cut_2_ParamLimits

0xd45a,	// (0x0006e768) aid_area_sk_bg_cut_2

0xb8ce,	// (0x0006cbdc) aid_placing_details_win

0xb8ce,	// (0x0006cbdc) aid_placing_details_win_2

0xbfcf,	// (0x0006d2dd) camera2_autofocus_pane_g1_ParamLimits

0x09f5,	// (0x00061d03) popup_fixed_preview_cale_window_ParamLimits

0x09f5,	// (0x00061d03) popup_fixed_preview_cale_window

0xd206,	// (0x0006e514) navi_slider_pane_g3

0xd20f,	// (0x0006e51d) navi_slider_pane_g4

0xd218,	// (0x0006e526) navi_slider_pane_g5

0xd206,	// (0x0006e514) navi_slider_pane_g6

0x9fdd,	// (0x0006b2eb) navi_slider_pane_g7

0xd346,	// (0x0006e654) mup_scale_pane_g3

0xd34f,	// (0x0006e65d) mup_scale_pane_g4

0xd358,	// (0x0006e666) mup_scale_pane_g5

0x2988,	// (0x00063c96) mup_scale_pane_g6

0x2991,	// (0x00063c9f) mup_scale_pane_g7

0x394e,	// (0x00064c5c) cams2_slider_pane_g3

0x394e,	// (0x00064c5c) cams2_slider_pane_g4

0x394e,	// (0x00064c5c) cams2_slider_pane_g5

0x394e,	// (0x00064c5c) cams2_slider_pane_g6

0x394e,	// (0x00064c5c) cams2_slider_pane_g7

0xc01b,	// (0x0006d329) camera2_autofocus_pane_cp_g1

0xe4d9,	// (0x0006f7e7) bg_popup_preview_window_pane_cp02_ParamLimits

0xe4d9,	// (0x0006f7e7) bg_popup_preview_window_pane_cp02

0xec38,	// (0x0006ff46) list_fp_cale_pane_ParamLimits

0xec38,	// (0x0006ff46) list_fp_cale_pane

0xec44,	// (0x0006ff52) popup_fixed_preview_cale_window_t1_ParamLimits

0xec44,	// (0x0006ff52) popup_fixed_preview_cale_window_t1

0x41e6,	// (0x000654f4) popup_fixed_preview_cale_window_t2_ParamLimits

0x41e6,	// (0x000654f4) popup_fixed_preview_cale_window_t2

0x41fb,	// (0x00065509) popup_fixed_preview_cale_window_t3_ParamLimits

0x41fb,	// (0x00065509) popup_fixed_preview_cale_window_t3

0x0002,

0xf6d8,	// (0x000709e6) popup_fixed_preview_cale_window_t_ParamLimits

0xf6d8,	// (0x000709e6) popup_fixed_preview_cale_window_t

0x4210,	// (0x0006551e) list_single_fp_cale_pane_ParamLimits

0x4210,	// (0x0006551e) list_single_fp_cale_pane

0xec62,	// (0x0006ff70) list_single_fp_cale_pane_g1_ParamLimits

0xec62,	// (0x0006ff70) list_single_fp_cale_pane_g1

0xec6e,	// (0x0006ff7c) list_single_fp_cale_pane_g2_ParamLimits

0xec6e,	// (0x0006ff7c) list_single_fp_cale_pane_g2

0x0002,

0xf6df,	// (0x000709ed) list_single_fp_cale_pane_g_ParamLimits

0xf6df,	// (0x000709ed) list_single_fp_cale_pane_g

0xec87,	// (0x0006ff95) list_single_fp_cale_pane_t1_ParamLimits

0xec87,	// (0x0006ff95) list_single_fp_cale_pane_t1

0xec99,	// (0x0006ffa7) list_single_fp_cale_pane_t2_ParamLimits

0xec99,	// (0x0006ffa7) list_single_fp_cale_pane_t2

0x0001,

0xf6e6,	// (0x000709f4) list_single_fp_cale_pane_t_ParamLimits

0xf6e6,	// (0x000709f4) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9e85,	// (0x0006b193) main_dialer_pane

0xb8ce,	// (0x0006cbdc) aid_cell_size_keypad

0xb8ce,	// (0x0006cbdc) dialer_ne_pane

0xb8ce,	// (0x0006cbdc) grid_dialer_command_1_pane

0xb8ce,	// (0x0006cbdc) grid_dialer_command_2_pane

0xb8ce,	// (0x0006cbdc) grid_dialer_keypad_pane

0x4225,	// (0x00065533) bg_popup_call_pane_cp06_ParamLimits

0x4225,	// (0x00065533) bg_popup_call_pane_cp06

0x4225,	// (0x00065533) dialer_ne_clear_pane_ParamLimits

0x4225,	// (0x00065533) dialer_ne_clear_pane

0xc01b,	// (0x0006d329) dialer_ne_pane_g1

0xc039,	// (0x0006d347) dialer_ne_pane_t1_ParamLimits

0xc039,	// (0x0006d347) dialer_ne_pane_t1

0x4233,	// (0x00065541) dialer_ne_pane_t2_ParamLimits

0x4233,	// (0x00065541) dialer_ne_pane_t2

0x425b,	// (0x00065569) dialer_ne_pane_t3_ParamLimits

0x425b,	// (0x00065569) dialer_ne_pane_t3

0x0002,

0xf6eb,	// (0x000709f9) dialer_ne_pane_t_ParamLimits

0xf6eb,	// (0x000709f9) dialer_ne_pane_t

0x425b,	// (0x00065569) dialer_ne_pane_t3_copy1_ParamLimits

0x425b,	// (0x00065569) dialer_ne_pane_t3_copy1

0xeccc,	// (0x0006ffda) cell_dialer_keypad_pane_ParamLimits

0xeccc,	// (0x0006ffda) cell_dialer_keypad_pane

0xbf68,	// (0x0006d276) cell_dialer_command_1_pane_ParamLimits

0xbf68,	// (0x0006d276) cell_dialer_command_1_pane

0xece3,	// (0x0006fff1) cell_dialer_command_2_pane_ParamLimits

0xece3,	// (0x0006fff1) cell_dialer_command_2_pane

0xbf68,	// (0x0006d276) bg_button_pane_cp02_ParamLimits

0xbf68,	// (0x0006d276) bg_button_pane_cp02

0xbfcf,	// (0x0006d2dd) cell_dialer_keypad_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) cell_dialer_keypad_pane_g1

0xbf68,	// (0x0006d276) bg_button_pane_cp03_ParamLimits

0xbf68,	// (0x0006d276) bg_button_pane_cp03

0xbfcf,	// (0x0006d2dd) cell_dialer_command_1_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) cell_dialer_command_1_pane_g1

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp04

0xc01b,	// (0x0006d329) cell_dialer_command_2_pane_g1

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp06

0xc01b,	// (0x0006d329) dialer_ne_clear_pane_g1

0xd0d9,	// (0x0006e3e7) navi_pane_g2

0xd107,	// (0x0006e415) navi_pane_g3

0x0002,

0xf32f,	// (0x0007063d) navi_pane_g

0xd196,	// (0x0006e4a4) navi_pane_mv_g2

0xd1bd,	// (0x0006e4cb) navi_pane_mv_g5

0x276b,	// (0x00063a79) navi_pane_mv_t1

0xc079,	// (0x0006d387) main_clock2_pane

0xbf68,	// (0x0006d276) main_clock2_list_pane_ParamLimits

0xbf68,	// (0x0006d276) main_clock2_list_pane

0x42f1,	// (0x000655ff) main_clock2_pane_t1_ParamLimits

0x42f1,	// (0x000655ff) main_clock2_pane_t1

0x432c,	// (0x0006563a) main_clock2_pane_t2_ParamLimits

0x432c,	// (0x0006563a) main_clock2_pane_t2

0x0004,

0xf6f7,	// (0x00070a05) main_clock2_pane_t_ParamLimits

0xf6f7,	// (0x00070a05) main_clock2_pane_t

0x43cc,	// (0x000656da) popup_clock_analogue_window_cp03_ParamLimits

0x43cc,	// (0x000656da) popup_clock_analogue_window_cp03

0x43f1,	// (0x000656ff) popup_clock_digital_window_cp02_ParamLimits

0x43f1,	// (0x000656ff) popup_clock_digital_window_cp02

0x446a,	// (0x00065778) main_clock2_list_single_pane_ParamLimits

0x446a,	// (0x00065778) main_clock2_list_single_pane

0xc252,	// (0x0006d560) list_highlight_pane_cp05

0xed2a,	// (0x00070038) main_clock2_list_single_pane_t1

0x15d7,	// (0x000628e5) popup_toolbar_window_cp04_ParamLimits

0xbfdd,	// (0x0006d2eb) camera2_autofocus_pane_g2_ParamLimits

0xbfdd,	// (0x0006d2eb) camera2_autofocus_pane_g2

0xbfdd,	// (0x0006d2eb) camera2_autofocus_pane_g3_ParamLimits

0xbfdd,	// (0x0006d2eb) camera2_autofocus_pane_g3

0xbfdd,	// (0x0006d2eb) camera2_autofocus_pane_g4_ParamLimits

0xbfdd,	// (0x0006d2eb) camera2_autofocus_pane_g4

0xbfdd,	// (0x0006d2eb) camera2_autofocus_pane_g5_ParamLimits

0xbfdd,	// (0x0006d2eb) camera2_autofocus_pane_g5

0x0004,

0xf63b,	// (0x00070949) camera2_autofocus_pane_g_ParamLimits

0xf63b,	// (0x00070949) camera2_autofocus_pane_g

0x3b6e,	// (0x00064e7c) camera2_autofocus_pane_cp_g2

0x3b76,	// (0x00064e84) camera2_autofocus_pane_cp_g3

0x3b7e,	// (0x00064e8c) camera2_autofocus_pane_cp_g4

0x3b86,	// (0x00064e94) camera2_autofocus_pane_cp_g5

0x0004,

0xf6a1,	// (0x000709af) camera2_autofocus_pane_cp_g

0xb8ce,	// (0x0006cbdc) popup_dialer_spcha_window

0xb8ce,	// (0x0006cbdc) bg_popup_sub_pane_cp07

0xb8ce,	// (0x0006cbdc) list_spcha_pane

0xed38,	// (0x00070046) list_single_spcha_pane_ParamLimits

0xed38,	// (0x00070046) list_single_spcha_pane

0xb8ce,	// (0x0006cbdc) list_highlight_pane_cp06

0xc809,	// (0x0006db17) list_single_spcha_pane_t1

0xdf9f,	// (0x0006f2ad) popup_call2_audio_out_window_g4_ParamLimits

0xdf9f,	// (0x0006f2ad) popup_call2_audio_out_window_g4

0x9e85,	// (0x0006b193) main_imed2_pane

0xa036,	// (0x0006b344) popup_imed_adjust2_window

0x34d2,	// (0x000647e0) popup_imed_trans_window_ParamLimits

0x34d2,	// (0x000647e0) popup_imed_trans_window

0xe73e,	// (0x0006fa4c) popup_blid_sat_info2_window_t1

0xe74c,	// (0x0006fa5a) popup_blid_sat_info2_window_t2

0x000a,

0xf5d0,	// (0x000708de) popup_blid_sat_info2_window_t

0x451b,	// (0x00065829) aid_size_cell_colour_35

0x453b,	// (0x00065849) aid_size_cell_colour_112

0x455b,	// (0x00065869) aid_size_cell_effect

0xd2d6,	// (0x0006e5e4) bg_tb_trans_pane_cp02

0xc73b,	// (0x0006da49) heading_imed_pane

0x457b,	// (0x00065889) listscroll_imed_pane

0xed4a,	// (0x00070058) heading_imed_pane_g1

0xed52,	// (0x00070060) heading_imed_pane_t1

0xed60,	// (0x0007006e) grid_imed_colour_35_pane_ParamLimits

0xed60,	// (0x0007006e) grid_imed_colour_35_pane

0x4587,	// (0x00065895) grid_imed_effect_pane

0xed77,	// (0x00070085) list_imed_aspect_pane

0x459d,	// (0x000658ab) scroll_pane_cp027_ParamLimits

0x459d,	// (0x000658ab) scroll_pane_cp027

0x45ae,	// (0x000658bc) cell_imed_effect_pane_ParamLimits

0x45ae,	// (0x000658bc) cell_imed_effect_pane

0xed7f,	// (0x0007008d) cell_imed_colour_pane_ParamLimits

0xed7f,	// (0x0007008d) cell_imed_colour_pane

0xedc1,	// (0x000700cf) cell_imed_colour_pane_g1_ParamLimits

0xedc1,	// (0x000700cf) cell_imed_colour_pane_g1

0xedd2,	// (0x000700e0) hgihlgiht_grid_pane_cp016_ParamLimits

0xedd2,	// (0x000700e0) hgihlgiht_grid_pane_cp016

0x45d5,	// (0x000658e3) cell_imed_effect_pane_g1

0x45dd,	// (0x000658eb) grid_highlight_pane_cp017

0xede3,	// (0x000700f1) list_imed_single_pane_ParamLimits

0xede3,	// (0x000700f1) list_imed_single_pane

0xb8ce,	// (0x0006cbdc) list_highlight_pane_cp07

0xedf8,	// (0x00070106) list_imed_aspect_pane_comp1_t1

0xd2d6,	// (0x0006e5e4) bg_tb_trans_pane_cp05

0xee1a,	// (0x00070128) popup_imed_adjust2_window_g1

0xee41,	// (0x0007014f) popup_imed_adjust2_window_t1

0xee59,	// (0x00070167) slider_imed_adjust_pane

0xee6d,	// (0x0007017b) slider_imed_adjust_pane_g1

0xee7d,	// (0x0007018b) slider_imed_adjust_pane_g2

0xee8d,	// (0x0007019b) slider_imed_adjust_pane_g3

0xee9e,	// (0x000701ac) slider_imed_adjust_pane_g4

0x0003,

0xf714,	// (0x00070a22) slider_imed_adjust_pane_g

0x45e6,	// (0x000658f4) aid_size_cell_clipart2

0x45f2,	// (0x00065900) grid_imed_clipart_pane

0xd369,	// (0x0006e677) scroll_pane_cp031

0x45fc,	// (0x0006590a) cell_imed_clipart_pane_ParamLimits

0x45fc,	// (0x0006590a) cell_imed_clipart_pane

0x461e,	// (0x0006592c) cell_imed_clipart_pane_g1

0xb8ce,	// (0x0006cbdc) grid_highlight_pane_cp014

0x42cd,	// (0x000655db) main_clock2_pane_g1_ParamLimits

0x42cd,	// (0x000655db) main_clock2_pane_g1

0x4411,	// (0x0006571f) aid_call2_pane_cp10

0x4423,	// (0x00065731) aid_call_pane_cp10

0xd03a,	// (0x0006e348) popup_clock_analogue_window_cp10_g1

0xd03a,	// (0x0006e348) popup_clock_analogue_window_cp10_g2

0x4435,	// (0x00065743) popup_clock_analogue_window_cp10_g3

0x4435,	// (0x00065743) popup_clock_analogue_window_cp10_g4

0xd03a,	// (0x0006e348) popup_clock_analogue_window_cp10_g5

0x0004,

0xf702,	// (0x00070a10) popup_clock_analogue_window_cp10_g

0x444b,	// (0x00065759) popup_clock_analogue_window_cp10_t1

0x447c,	// (0x0006578a) clock_digital_number_pane_cp10_ParamLimits

0x447c,	// (0x0006578a) clock_digital_number_pane_cp10

0x4494,	// (0x000657a2) clock_digital_number_pane_cp11_ParamLimits

0x4494,	// (0x000657a2) clock_digital_number_pane_cp11

0x44ac,	// (0x000657ba) clock_digital_number_pane_cp12_ParamLimits

0x44ac,	// (0x000657ba) clock_digital_number_pane_cp12

0x44c6,	// (0x000657d4) clock_digital_number_pane_cp13_ParamLimits

0x44c6,	// (0x000657d4) clock_digital_number_pane_cp13

0x44e0,	// (0x000657ee) clock_digital_separator_pane_cp10_ParamLimits

0x44e0,	// (0x000657ee) clock_digital_separator_pane_cp10

0x44fa,	// (0x00065808) popup_clock_digital_window_cp02_t1_ParamLimits

0x44fa,	// (0x00065808) popup_clock_digital_window_cp02_t1

0xbf3e,	// (0x0006d24c) clock_digital_number_pane_cp10_g1

0xbf3e,	// (0x0006d24c) clock_digital_number_pane_cp10_g2

0x0001,

0xf71d,	// (0x00070a2b) clock_digital_number_pane_cp10_g

0xbf3e,	// (0x0006d24c) clock_digital_separator_pane_cp10_g1

0xbf3e,	// (0x0006d24c) clock_digital_separator_pane_g2_cp10

0xd1c5,	// (0x0006e4d3) navi_pane_vded_g4

0xd1ce,	// (0x0006e4dc) navi_pane_vded_g5

0xd1d7,	// (0x0006e4e5) navi_pane_vded_t1

0x9e85,	// (0x0006b193) main_vded_pane

0x4627,	// (0x00065935) main_vded_pane_g1

0x4631,	// (0x0006593f) main_vded_pane_g2

0x463b,	// (0x00065949) main_vded_pane_g3

0x0002,

0xf722,	// (0x00070a30) main_vded_pane_g

0x4645,	// (0x00065953) main_vded_pane_t1

0x4653,	// (0x00065961) main_vded_pane_t2

0x0001,

0xf729,	// (0x00070a37) main_vded_pane_t

0x4661,	// (0x0006596f) vded_slider_pane

0x4669,	// (0x00065977) vded_video_pane

0xeeaf,	// (0x000701bd) vded_video_pane_g1

0x4671,	// (0x0006597f) vded_video_pane_g2

0xc01b,	// (0x0006d329) vded_video_pane_g3

0x0002,

0xf72e,	// (0x00070a3c) vded_video_pane_g

0xeeb9,	// (0x000701c7) vded_slider_pane_g1

0xe669,	// (0x0006f977) vded_slider_pane_g2

0xeec2,	// (0x000701d0) vded_slider_pane_g3

0xeecb,	// (0x000701d9) vded_slider_pane_g4

0xeed4,	// (0x000701e2) vded_slider_pane_g5

0x0004,

0xf735,	// (0x00070a43) vded_slider_pane_g

0x4132,	// (0x00065440) mup3_rocker_pane_ParamLimits

0x4132,	// (0x00065440) mup3_rocker_pane

0x467a,	// (0x00065988) mup3_control_keys_pane_g1

0x4682,	// (0x00065990) mup3_control_keys_pane_g2

0x468a,	// (0x00065998) mup3_control_keys_pane_g3

0x4692,	// (0x000659a0) mup3_control_keys_pane_g4

0x0003,

0xf740,	// (0x00070a4e) mup3_control_keys_pane_g

0x0a2c,	// (0x00061d3a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0a2c,	// (0x00061d3a) popup_toolbar2_fixed_window_cp01

0x4166,	// (0x00065474) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4166,	// (0x00065474) popup_toolbar2_fixed_window_cp02

0xd928,	// (0x0006ec36) popup_call2_audio_second_window_t4_ParamLimits

0xd928,	// (0x0006ec36) popup_call2_audio_second_window_t4

0xde64,	// (0x0006f172) popup_call2_audio_first_window_t6_ParamLimits

0xde64,	// (0x0006f172) popup_call2_audio_first_window_t6

0xe0a2,	// (0x0006f3b0) popup_call2_audio_out_window_t6_ParamLimits

0xe0a2,	// (0x0006f3b0) popup_call2_audio_out_window_t6

0x9e85,	// (0x0006b193) main_vitu_pane

0xbf68,	// (0x0006d276) aid_size_cell_itu_ParamLimits

0xbf68,	// (0x0006d276) aid_size_cell_itu

0xbf68,	// (0x0006d276) bg_popup_window_pane_cp08_ParamLimits

0xbf68,	// (0x0006d276) bg_popup_window_pane_cp08

0xbf68,	// (0x0006d276) field_vitu_entry_pane_ParamLimits

0xbf68,	// (0x0006d276) field_vitu_entry_pane

0xbf68,	// (0x0006d276) grid_vitu_function_pane_ParamLimits

0xbf68,	// (0x0006d276) grid_vitu_function_pane

0xbf68,	// (0x0006d276) grid_vitu_itu_pane_ParamLimits

0xbf68,	// (0x0006d276) grid_vitu_itu_pane

0xbf68,	// (0x0006d276) cell_vitu_itu_pane_ParamLimits

0xbf68,	// (0x0006d276) cell_vitu_itu_pane

0xbf68,	// (0x0006d276) cell_vitu_function_pane_ParamLimits

0xbf68,	// (0x0006d276) cell_vitu_function_pane

0xbf68,	// (0x0006d276) bg_popup_sub_pane_cp08_ParamLimits

0xbf68,	// (0x0006d276) bg_popup_sub_pane_cp08

0xc025,	// (0x0006d333) field_vitu_entry_pane_t1_ParamLimits

0xc025,	// (0x0006d333) field_vitu_entry_pane_t1

0xeedd,	// (0x000701eb) field_vitu_entry_pane_t2_ParamLimits

0xeedd,	// (0x000701eb) field_vitu_entry_pane_t2

0x0001,

0xf749,	// (0x00070a57) field_vitu_entry_pane_t_ParamLimits

0xf749,	// (0x00070a57) field_vitu_entry_pane_t

0xe475,	// (0x0006f783) bg_button_pane_cp05_ParamLimits

0xe475,	// (0x0006f783) bg_button_pane_cp05

0xeefa,	// (0x00070208) cell_vitu_itu_pane_g1

0xd2c2,	// (0x0006e5d0) cell_vitu_itu_pane_t1_ParamLimits

0xd2c2,	// (0x0006e5d0) cell_vitu_itu_pane_t1

0xd2c2,	// (0x0006e5d0) cell_vitu_itu_pane_t2_ParamLimits

0xd2c2,	// (0x0006e5d0) cell_vitu_itu_pane_t2

0x0002,

0xf74e,	// (0x00070a5c) cell_vitu_itu_pane_t_ParamLimits

0xf74e,	// (0x00070a5c) cell_vitu_itu_pane_t

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp07

0xc01b,	// (0x0006d329) cell_vitu_function_pane_g1

0x9e8f,	// (0x0006b19d) main_calc_pane_g1

0x08ba,	// (0x00061bc8) aid_visual_content_pane

0x9e85,	// (0x0006b193) main_vradio_pane

0xbfcf,	// (0x0006d2dd) main_vradio_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) main_vradio_pane_g1

0xbfdd,	// (0x0006d2eb) main_vradio_pane_g2_ParamLimits

0xbfdd,	// (0x0006d2eb) main_vradio_pane_g2

0x0001,

0xf755,	// (0x00070a63) main_vradio_pane_g_ParamLimits

0xf755,	// (0x00070a63) main_vradio_pane_g

0xc025,	// (0x0006d333) main_vradio_pane_t1_ParamLimits

0xc025,	// (0x0006d333) main_vradio_pane_t1

0xc025,	// (0x0006d333) main_vradio_pane_t2_ParamLimits

0xc025,	// (0x0006d333) main_vradio_pane_t2

0xc039,	// (0x0006d347) main_vradio_pane_t3_ParamLimits

0xc039,	// (0x0006d347) main_vradio_pane_t3

0x0002,

0xf75a,	// (0x00070a68) main_vradio_pane_t_ParamLimits

0xf75a,	// (0x00070a68) main_vradio_pane_t

0xbf68,	// (0x0006d276) vradio_rocker_control_pane_ParamLimits

0xbf68,	// (0x0006d276) vradio_rocker_control_pane

0xbf68,	// (0x0006d276) vradio_station_info_pane_ParamLimits

0xbf68,	// (0x0006d276) vradio_station_info_pane

0xbf68,	// (0x0006d276) vradio_frequency_info_pane_ParamLimits

0xbf68,	// (0x0006d276) vradio_frequency_info_pane

0xc01b,	// (0x0006d329) vradio_station_info_pane_g1

0xd2c2,	// (0x0006e5d0) vradio_station_info_pane_t1_ParamLimits

0xd2c2,	// (0x0006e5d0) vradio_station_info_pane_t1

0xc039,	// (0x0006d347) vradio_station_info_pane_t2_ParamLimits

0xc039,	// (0x0006d347) vradio_station_info_pane_t2

0x0001,

0xf761,	// (0x00070a6f) vradio_station_info_pane_t_ParamLimits

0xf761,	// (0x00070a6f) vradio_station_info_pane_t

0xb8ce,	// (0x0006cbdc) vradio_tuning_pane

0x46a2,	// (0x000659b0) vradio_rocker_control_pane_g1

0xef16,	// (0x00070224) vradio_rocker_control_pane_g2

0x46ac,	// (0x000659ba) vradio_rocker_control_pane_g3

0x46b6,	// (0x000659c4) vradio_rocker_control_pane_g4

0x46c0,	// (0x000659ce) vradio_rocker_control_pane_g5

0x0004,

0xf766,	// (0x00070a74) vradio_rocker_control_pane_g

0xc01b,	// (0x0006d329) vradio_frequency_info_pane_g1

0xc025,	// (0x0006d333) vradio_frequency_info_pane_t1_ParamLimits

0xc025,	// (0x0006d333) vradio_frequency_info_pane_t1

0x46ca,	// (0x000659d8) vradio_tuning_pane_g1

0x46d7,	// (0x000659e5) vradio_tuning_pane_t1

0x9e36,	// (0x0006b144) area_side_right_pane_ParamLimits

0x9e36,	// (0x0006b144) area_side_right_pane

0xe4a0,	// (0x0006f7ae) status_small_pane_g1

0xe4a8,	// (0x0006f7b6) status_small_pane_g2

0xe4b1,	// (0x0006f7bf) status_small_pane_g3

0xe4ba,	// (0x0006f7c8) status_small_pane_g4

0x0003,

0xf532,	// (0x00070840) status_small_pane_g

0xe4c3,	// (0x0006f7d1) status_small_pane_t1

0x9e85,	// (0x0006b193) main_video3_pane

0xb8ce,	// (0x0006cbdc) cams_zoom_vslider_pane

0xef1e,	// (0x0007022c) image3_wide_pane_ParamLimits

0xef1e,	// (0x0007022c) image3_wide_pane

0xb8ce,	// (0x0006cbdc) image3_wide_small_pane

0xef38,	// (0x00070246) main_video3_pane_g1_ParamLimits

0xef38,	// (0x00070246) main_video3_pane_g1

0xef38,	// (0x00070246) main_video3_pane_g2_ParamLimits

0xef38,	// (0x00070246) main_video3_pane_g2

0x0001,

0x0008,	// (0x00061316) main_video3_pane_g_ParamLimits

0x0008,	// (0x00061316) main_video3_pane_g

0xef56,	// (0x00070264) main_video3_pane_t1_ParamLimits

0xef56,	// (0x00070264) main_video3_pane_t1

0xef56,	// (0x00070264) main_video3_pane_t2_ParamLimits

0xef56,	// (0x00070264) main_video3_pane_t2

0xef56,	// (0x00070264) main_video3_pane_t3_ParamLimits

0xef56,	// (0x00070264) main_video3_pane_t3

0x0002,

0x000d,	// (0x0006131b) main_video3_pane_t_ParamLimits

0x000d,	// (0x0006131b) main_video3_pane_t

0xc01b,	// (0x0006d329) cams_zoom_vslider_pane_g1

0xc01b,	// (0x0006d329) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x000703bd) cams_zoom_vslider_pane_g

0xb8ce,	// (0x0006cbdc) small_slider_vertical_pane

0xc01b,	// (0x0006d329) small_slider_vertical_pane_g1

0xc01b,	// (0x0006d329) small_slider_vertical_pane_g2

0xef7d,	// (0x0007028b) small_slider_vertical_pane_g3

0x0002,

0x0014,	// (0x00061322) small_slider_vertical_pane_g

0x9e85,	// (0x0006b193) main_hwr_training_pane

0xef86,	// (0x00070294) hwr_training_instruct_pane_ParamLimits

0xef86,	// (0x00070294) hwr_training_instruct_pane

0x46e6,	// (0x000659f4) hwr_training_navi_pane_ParamLimits

0x46e6,	// (0x000659f4) hwr_training_navi_pane

0x4705,	// (0x00065a13) hwr_training_write_pane_ParamLimits

0x4705,	// (0x00065a13) hwr_training_write_pane

0xb8ce,	// (0x0006cbdc) bg_frame_shadow_pane

0xefbd,	// (0x000702cb) hwr_training_write_pane_g1

0xefc5,	// (0x000702d3) hwr_training_write_pane_g2

0xefcd,	// (0x000702db) hwr_training_write_pane_g3

0xefd5,	// (0x000702e3) hwr_training_write_pane_g4

0xefdd,	// (0x000702eb) hwr_training_write_pane_g5

0xefe5,	// (0x000702f3) hwr_training_write_pane_g6

0xefed,	// (0x000702fb) hwr_training_write_pane_g7

0x0006,

0x001b,	// (0x00061329) hwr_training_write_pane_g

0xa11e,	// (0x0006b42c) hwr_training_navi_pane_g1_ParamLimits

0xa11e,	// (0x0006b42c) hwr_training_navi_pane_g1

0xa130,	// (0x0006b43e) hwr_training_navi_pane_g2_ParamLimits

0xa130,	// (0x0006b43e) hwr_training_navi_pane_g2

0xa142,	// (0x0006b450) hwr_training_navi_pane_g3_ParamLimits

0xa142,	// (0x0006b450) hwr_training_navi_pane_g3

0xa152,	// (0x0006b460) hwr_training_navi_pane_g4_ParamLimits

0xa152,	// (0x0006b460) hwr_training_navi_pane_g4

0x0004,

0xf771,	// (0x00070a7f) hwr_training_navi_pane_g_ParamLimits

0xf771,	// (0x00070a7f) hwr_training_navi_pane_g

0xa15f,	// (0x0006b46d) hwr_training_navi_pane_t1

0x474d,	// (0x00065a5b) list_single_hwr_training_instruct_pane_ParamLimits

0x474d,	// (0x00065a5b) list_single_hwr_training_instruct_pane

0xeff5,	// (0x00070303) list_single_hwr_training_instruct_pane_t1

0xe83f,	// (0x0006fb4d) bg_frame_shadow_pane_g1

0xf004,	// (0x00070312) bg_frame_shadow_pane_g2

0xf00c,	// (0x0007031a) bg_frame_shadow_pane_g3

0xf014,	// (0x00070322) bg_frame_shadow_pane_g4

0xf01c,	// (0x0007032a) bg_frame_shadow_pane_g5

0xf024,	// (0x00070332) bg_frame_shadow_pane_g6

0xf02c,	// (0x0007033a) bg_frame_shadow_pane_g7

0xc131,	// (0x0006d43f) bg_frame_shadow_pane_g8

0x0007,

0xf77c,	// (0x00070a8a) bg_frame_shadow_pane_g

0x9e85,	// (0x0006b193) main_video_tele_dialer_pane

0x4762,	// (0x00065a70) aid_size_cell_video_keypad_ParamLimits

0x4762,	// (0x00065a70) aid_size_cell_video_keypad

0x477c,	// (0x00065a8a) grid_video_dialer_keypad_pane_ParamLimits

0x477c,	// (0x00065a8a) grid_video_dialer_keypad_pane

0x47c8,	// (0x00065ad6) video_down_pane_cp_ParamLimits

0x47c8,	// (0x00065ad6) video_down_pane_cp

0x47fa,	// (0x00065b08) cell_video_dialer_keypad_pane_ParamLimits

0x47fa,	// (0x00065b08) cell_video_dialer_keypad_pane

0xf034,	// (0x00070342) bg_button_pane_cp08_ParamLimits

0xf034,	// (0x00070342) bg_button_pane_cp08

0x481c,	// (0x00065b2a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x481c,	// (0x00065b2a) cell_video_dialer_keypad_pane_g1

0x411c,	// (0x0006542a) mup3_rocker2_pane_ParamLimits

0x411c,	// (0x0006542a) mup3_rocker2_pane

0xc01b,	// (0x0006d329) mup3_rocker2_pane_g1

0x33b3,	// (0x000646c1) main_dialer2_pane

0x9e85,	// (0x0006b193) main_mp4_pane

0xa18b,	// (0x0006b499) main_mp4_pane_g1_ParamLimits

0xa18b,	// (0x0006b499) main_mp4_pane_g1

0xa18b,	// (0x0006b499) main_mp4_pane_g2_ParamLimits

0xa18b,	// (0x0006b499) main_mp4_pane_g2

0x4853,	// (0x00065b61) main_mp4_pane_g3_ParamLimits

0x4853,	// (0x00065b61) main_mp4_pane_g3

0xa1a9,	// (0x0006b4b7) main_mp4_pane_g4_ParamLimits

0xa1a9,	// (0x0006b4b7) main_mp4_pane_g4

0xa1d1,	// (0x0006b4df) main_mp4_pane_g5_ParamLimits

0xa1d1,	// (0x0006b4df) main_mp4_pane_g5

0x0007,

0xf79c,	// (0x00070aaa) main_mp4_pane_g_ParamLimits

0xf79c,	// (0x00070aaa) main_mp4_pane_g

0xa239,	// (0x0006b547) main_mp4_pane_t1_ParamLimits

0xa239,	// (0x0006b547) main_mp4_pane_t1

0xa29b,	// (0x0006b5a9) main_mp4_pane_t2_ParamLimits

0xa29b,	// (0x0006b5a9) main_mp4_pane_t2

0xa2ff,	// (0x0006b60d) main_mp4_pane_t3_ParamLimits

0xa2ff,	// (0x0006b60d) main_mp4_pane_t3

0xa35d,	// (0x0006b66b) main_mp4_pane_t4_ParamLimits

0xa35d,	// (0x0006b66b) main_mp4_pane_t4

0x0003,

0xf7ad,	// (0x00070abb) main_mp4_pane_t_ParamLimits

0xf7ad,	// (0x00070abb) main_mp4_pane_t

0xa3bb,	// (0x0006b6c9) mp4_progress_pane_ParamLimits

0xa3bb,	// (0x0006b6c9) mp4_progress_pane

0xa3ef,	// (0x0006b6fd) mp4_rocker_pane_ParamLimits

0xa3ef,	// (0x0006b6fd) mp4_rocker_pane

0x488b,	// (0x00065b99) mp4_progress_pane_t1

0x48ad,	// (0x00065bbb) mp4_progress_pane_t2

0x0001,

0xf7b6,	// (0x00070ac4) mp4_progress_pane_t

0x48cf,	// (0x00065bdd) mup_progress_pane_cp04

0x394e,	// (0x00064c5c) mp4_rocker_pane_g1

0x9e77,	// (0x0006b185) aid_cell_size_keypad2_ParamLimits

0x9e77,	// (0x0006b185) aid_cell_size_keypad2

0x9e77,	// (0x0006b185) dialer2_ne_pane_ParamLimits

0x9e77,	// (0x0006b185) dialer2_ne_pane

0x9e77,	// (0x0006b185) grid_dialer2_keypad_pane_ParamLimits

0x9e77,	// (0x0006b185) grid_dialer2_keypad_pane

0xe475,	// (0x0006f783) bg_popup_call_pane_cp07_ParamLimits

0xe475,	// (0x0006f783) bg_popup_call_pane_cp07

0x48e2,	// (0x00065bf0) dialer2_ne_pane_t1_ParamLimits

0x48e2,	// (0x00065bf0) dialer2_ne_pane_t1

0x4932,	// (0x00065c40) cell_dialer2_keypad_pane_ParamLimits

0x4932,	// (0x00065c40) cell_dialer2_keypad_pane

0xe475,	// (0x0006f783) bg_button_pane_pane_cp04_ParamLimits

0xe475,	// (0x0006f783) bg_button_pane_pane_cp04

0xbfcf,	// (0x0006d2dd) cell_dialer2_keypad_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) cell_dialer2_keypad_pane_g1

0x14ab,	// (0x000627b9) aid_placing_vt_set_content_ParamLimits

0x14ab,	// (0x000627b9) aid_placing_vt_set_content

0x14d3,	// (0x000627e1) aid_placing_vt_set_title_ParamLimits

0x14d3,	// (0x000627e1) aid_placing_vt_set_title

0x9e85,	// (0x0006b193) main_image3_pane

0x49c3,	// (0x00065cd1) area_side_right_pane_cp01_ParamLimits

0x49c3,	// (0x00065cd1) area_side_right_pane_cp01

0x49da,	// (0x00065ce8) main_image3_pane_g1_ParamLimits

0x49da,	// (0x00065ce8) main_image3_pane_g1

0x49e8,	// (0x00065cf6) main_image3_pane_g2_ParamLimits

0x49e8,	// (0x00065cf6) main_image3_pane_g2

0x4a10,	// (0x00065d1e) main_image3_pane_g3_ParamLimits

0x4a10,	// (0x00065d1e) main_image3_pane_g3

0x4a3a,	// (0x00065d48) main_image3_pane_g4_ParamLimits

0x4a3a,	// (0x00065d48) main_image3_pane_g4

0x0003,

0xf7c5,	// (0x00070ad3) main_image3_pane_g_ParamLimits

0xf7c5,	// (0x00070ad3) main_image3_pane_g

0x4a64,	// (0x00065d72) main_image3_pane_t1_ParamLimits

0x4a64,	// (0x00065d72) main_image3_pane_t1

0x4abc,	// (0x00065dca) main_image3_pane_t2_ParamLimits

0x4abc,	// (0x00065dca) main_image3_pane_t2

0x4b0e,	// (0x00065e1c) main_image3_pane_t3_ParamLimits

0x4b0e,	// (0x00065e1c) main_image3_pane_t3

0x0003,

0xf7ce,	// (0x00070adc) main_image3_pane_t_ParamLimits

0xf7ce,	// (0x00070adc) main_image3_pane_t

0xbf68,	// (0x0006d276) grid_sctrl_middle_pane_cp01_ParamLimits

0xbf68,	// (0x0006d276) grid_sctrl_middle_pane_cp01

0x4b96,	// (0x00065ea4) cell_sctrl_middle_pane_cp01_ParamLimits

0x4b96,	// (0x00065ea4) cell_sctrl_middle_pane_cp01

0x4bb3,	// (0x00065ec1) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4bb3,	// (0x00065ec1) cell_sctrl_middle_pane_cp01_g1

0x9e85,	// (0x0006b193) main_call4_pane

0x4bc9,	// (0x00065ed7) aid_size_button_call4_ParamLimits

0x4bc9,	// (0x00065ed7) aid_size_button_call4

0x4bfc,	// (0x00065f0a) call4_windows_pane_ParamLimits

0x4bfc,	// (0x00065f0a) call4_windows_pane

0x4c1b,	// (0x00065f29) grid_call4_button_pane_ParamLimits

0x4c1b,	// (0x00065f29) grid_call4_button_pane

0x4c4e,	// (0x00065f5c) call4_windows_conf_pane

0x4c65,	// (0x00065f73) popup_call4_audio_first_window_ParamLimits

0x4c65,	// (0x00065f73) popup_call4_audio_first_window

0x4cb5,	// (0x00065fc3) popup_call4_audio_second_window_ParamLimits

0x4cb5,	// (0x00065fc3) popup_call4_audio_second_window

0x4ccc,	// (0x00065fda) popup_call4_audio_wait_window_ParamLimits

0x4ccc,	// (0x00065fda) popup_call4_audio_wait_window

0x4cda,	// (0x00065fe8) cell_call4_button_pane_ParamLimits

0x4cda,	// (0x00065fe8) cell_call4_button_pane

0x4cff,	// (0x0006600d) bg_button_pane_cp09_ParamLimits

0x4cff,	// (0x0006600d) bg_button_pane_cp09

0x4d0b,	// (0x00066019) cell_call4_button_pane_g1_ParamLimits

0x4d0b,	// (0x00066019) cell_call4_button_pane_g1

0x4d31,	// (0x0006603f) cell_call4_button_pane_t1_ParamLimits

0x4d31,	// (0x0006603f) cell_call4_button_pane_t1

0x4d5f,	// (0x0006606d) popup_call4_audio_conf_window_ParamLimits

0x4d5f,	// (0x0006606d) popup_call4_audio_conf_window

0x417c,	// (0x0006548a) mup3_progress_pane_t1_ParamLimits

0x419b,	// (0x000654a9) mup3_progress_pane_t2_ParamLimits

0xebf5,	// (0x0006ff03) mup3_progress_pane_t3_ParamLimits

0xf6ca,	// (0x000709d8) mup3_progress_pane_t_ParamLimits

0xec12,	// (0x0006ff20) mup_progress_pane_cp03_ParamLimits

0x469a,	// (0x000659a8) mup3_control_keys_pane_g4_copy1

0xa3ef,	// (0x0006b6fd) mp4_rocker2_pane_ParamLimits

0xa3ef,	// (0x0006b6fd) mp4_rocker2_pane

0xa467,	// (0x0006b775) mp4_rocker2_pane_g1

0xa467,	// (0x0006b775) mp4_rocker2_pane_g2

0xa467,	// (0x0006b775) mp4_rocker2_pane_g3

0xa467,	// (0x0006b775) mp4_rocker2_pane_g4

0xa467,	// (0x0006b775) mp4_rocker2_pane_g5

0x0004,

0xf7d7,	// (0x00070ae5) mp4_rocker2_pane_g

0x9e85,	// (0x0006b193) main_camera4_pane

0x9e85,	// (0x0006b193) main_video4_pane

0x4796,	// (0x00065aa4) main_video_tele_dialer_pane_t1_ParamLimits

0x4796,	// (0x00065aa4) main_video_tele_dialer_pane_t1

0x47af,	// (0x00065abd) main_video_tele_dialer_pane_t2_ParamLimits

0x47af,	// (0x00065abd) main_video_tele_dialer_pane_t2

0x0001,

0xf78d,	// (0x00070a9b) main_video_tele_dialer_pane_t_ParamLimits

0xf78d,	// (0x00070a9b) main_video_tele_dialer_pane_t

0x4d8b,	// (0x00066099) cam4_autofocus_pane_ParamLimits

0x4d8b,	// (0x00066099) cam4_autofocus_pane

0x4da1,	// (0x000660af) cam4_image_uncrop_pane_ParamLimits

0x4da1,	// (0x000660af) cam4_image_uncrop_pane

0x4dbb,	// (0x000660c9) cam4_indicators_pane_ParamLimits

0x4dbb,	// (0x000660c9) cam4_indicators_pane

0x4de6,	// (0x000660f4) main_camera4_pane_g1_ParamLimits

0x4de6,	// (0x000660f4) main_camera4_pane_g1

0x4df8,	// (0x00066106) main_camera4_pane_g2_ParamLimits

0x4df8,	// (0x00066106) main_camera4_pane_g2

0x4e0b,	// (0x00066119) main_camera4_pane_g3_ParamLimits

0x4e0b,	// (0x00066119) main_camera4_pane_g3

0x4e1e,	// (0x0006612c) main_camera4_pane_g4_ParamLimits

0x4e1e,	// (0x0006612c) main_camera4_pane_g4

0x4e31,	// (0x0006613f) main_camera4_pane_g5_ParamLimits

0x4e31,	// (0x0006613f) main_camera4_pane_g5

0x0005,

0xf7e2,	// (0x00070af0) main_camera4_pane_g_ParamLimits

0xf7e2,	// (0x00070af0) main_camera4_pane_g

0x4e55,	// (0x00066163) main_camera4_pane_t1_ParamLimits

0x4e55,	// (0x00066163) main_camera4_pane_t1

0xa49d,	// (0x0006b7ab) bg_tb_trans_pane_cp06

0xa4b3,	// (0x0006b7c1) cam4_indicators_pane_g1

0xa4c4,	// (0x0006b7d2) cam4_indicators_pane_g2

0x0002,

0xf7fd,	// (0x00070b0b) cam4_indicators_pane_g

0xa4e2,	// (0x0006b7f0) cam4_indicators_pane_t1

0x4eb9,	// (0x000661c7) main_video4_pane_g1_ParamLimits

0x4eb9,	// (0x000661c7) main_video4_pane_g1

0x4ec8,	// (0x000661d6) main_video4_pane_g2_ParamLimits

0x4ec8,	// (0x000661d6) main_video4_pane_g2

0x4ed7,	// (0x000661e5) main_video4_pane_g3_ParamLimits

0x4ed7,	// (0x000661e5) main_video4_pane_g3

0x4ee6,	// (0x000661f4) main_video4_pane_g4_ParamLimits

0x4ee6,	// (0x000661f4) main_video4_pane_g4

0x0004,

0xf804,	// (0x00070b12) main_video4_pane_g_ParamLimits

0xf804,	// (0x00070b12) main_video4_pane_g

0x4f04,	// (0x00066212) vid4_indicators_pane_ParamLimits

0x4f04,	// (0x00066212) vid4_indicators_pane

0x4f32,	// (0x00066240) video4_image_uncrop_cif_pane_ParamLimits

0x4f32,	// (0x00066240) video4_image_uncrop_cif_pane

0x4f4c,	// (0x0006625a) video4_image_uncrop_nhd_pane_ParamLimits

0x4f4c,	// (0x0006625a) video4_image_uncrop_nhd_pane

0x4da1,	// (0x000660af) video4_image_uncrop_vga_pane_ParamLimits

0x4da1,	// (0x000660af) video4_image_uncrop_vga_pane

0x9e77,	// (0x0006b185) bg_tb_trans_pane_cp07

0xa50e,	// (0x0006b81c) vid4_indicators_pane_g1

0xa522,	// (0x0006b830) vid4_indicators_pane_g2

0xa536,	// (0x0006b844) vid4_indicators_pane_g3

0x0004,

0xf80f,	// (0x00070b1d) vid4_indicators_pane_g

0xa565,	// (0x0006b873) vid4_indicators_pane_t1

0x4f60,	// (0x0006626e) cam4_autofocus_pane_g1

0x4f68,	// (0x00066276) cam4_autofocus_pane_g2

0x4f70,	// (0x0006627e) cam4_autofocus_pane_g3

0x0002,

0xf81a,	// (0x00070b28) cam4_autofocus_pane_g

0x4f78,	// (0x00066286) cam4_autofocus_pane_g3_copy1

0x47de,	// (0x00065aec) video_down_pane_cp_t1

0x47ec,	// (0x00065afa) video_down_pane_cp_t2

0x0001,

0xf792,	// (0x00070aa0) video_down_pane_cp_t

0x9e77,	// (0x0006b185) popup_vitu2_window_ParamLimits

0x9e77,	// (0x0006b185) popup_vitu2_window

0x4f80,	// (0x0006628e) aid_size_cell2_itu2_ParamLimits

0x4f80,	// (0x0006628e) aid_size_cell2_itu2

0x4fa6,	// (0x000662b4) aid_size_cell_itu2_ParamLimits

0x4fa6,	// (0x000662b4) aid_size_cell_itu2

0x5002,	// (0x00066310) bg_popup_window_pane_cp09_ParamLimits

0x5002,	// (0x00066310) bg_popup_window_pane_cp09

0x5010,	// (0x0006631e) field_vitu2_entry_pane_ParamLimits

0x5010,	// (0x0006631e) field_vitu2_entry_pane

0x5036,	// (0x00066344) grid_vitu2_function_pane_ParamLimits

0x5036,	// (0x00066344) grid_vitu2_function_pane

0x5087,	// (0x00066395) grid_vitu2_itu_pane_ParamLimits

0x5087,	// (0x00066395) grid_vitu2_itu_pane

0x511d,	// (0x0006642b) cell_vitu2_itu_pane_ParamLimits

0x511d,	// (0x0006642b) cell_vitu2_itu_pane

0x5149,	// (0x00066457) cell_vitu2_function_pane_ParamLimits

0x5149,	// (0x00066457) cell_vitu2_function_pane

0x5188,	// (0x00066496) bg_popup_call_pane_cp08_ParamLimits

0x5188,	// (0x00066496) bg_popup_call_pane_cp08

0x519f,	// (0x000664ad) field_vitu2_entry_pane_g1

0x51ab,	// (0x000664b9) field_vitu2_entry_pane_g2

0x0002,

0xf821,	// (0x00070b2f) field_vitu2_entry_pane_g

0x51b7,	// (0x000664c5) field_vitu2_entry_pane_t1_ParamLimits

0x51b7,	// (0x000664c5) field_vitu2_entry_pane_t1

0x51e7,	// (0x000664f5) field_vitu2_entry_pane_t2_ParamLimits

0x51e7,	// (0x000664f5) field_vitu2_entry_pane_t2

0x0001,

0xf828,	// (0x00070b36) field_vitu2_entry_pane_t_ParamLimits

0xf828,	// (0x00070b36) field_vitu2_entry_pane_t

0x520c,	// (0x0006651a) bg_button_pane_cp010_ParamLimits

0x520c,	// (0x0006651a) bg_button_pane_cp010

0x521a,	// (0x00066528) cell_vitu2_itu_pane_g1

0x5240,	// (0x0006654e) cell_vitu2_itu_pane_t1_ParamLimits

0x5240,	// (0x0006654e) cell_vitu2_itu_pane_t1

0x0792,	// (0x00061aa0) cell_vitu2_itu_pane_t2_ParamLimits

0x0792,	// (0x00061aa0) cell_vitu2_itu_pane_t2

0x0002,

0xf832,	// (0x00070b40) cell_vitu2_itu_pane_t_ParamLimits

0xf832,	// (0x00070b40) cell_vitu2_itu_pane_t

0x9e77,	// (0x0006b185) bg_button_pane_cp011

0x529e,	// (0x000665ac) cell_vitu2_function_pane_g1

0x9e85,	// (0x0006b193) main_myfav_hc_pane

0x4b5e,	// (0x00065e6c) popup_image3_note_pane_ParamLimits

0x4b5e,	// (0x00065e6c) popup_image3_note_pane

0x4b7a,	// (0x00065e88) popup_image3_tool_bar_pane_ParamLimits

0x4b7a,	// (0x00065e88) popup_image3_tool_bar_pane

0x0820,	// (0x00061b2e) cell_vitu2_itu_pane_t3_ParamLimits

0x0820,	// (0x00061b2e) cell_vitu2_itu_pane_t3

0xb8ce,	// (0x0006cbdc) bg_popup_trans_pane

0x52b2,	// (0x000665c0) grid_image3_tool_bar_pane

0x52bc,	// (0x000665ca) bg_popup_trans_pane_g1

0xc46b,	// (0x0006d779) bg_popup_trans_pane_g2

0x52c4,	// (0x000665d2) bg_popup_trans_pane_g3

0x52cc,	// (0x000665da) bg_popup_trans_pane_g4

0x52d4,	// (0x000665e2) bg_popup_trans_pane_g5

0x52dc,	// (0x000665ea) bg_popup_trans_pane_g6

0x52e4,	// (0x000665f2) bg_popup_trans_pane_g7

0x52ec,	// (0x000665fa) bg_popup_trans_pane_g8

0xc44b,	// (0x0006d759) bg_popup_trans_pane_g9

0x0008,

0xf839,	// (0x00070b47) bg_popup_trans_pane_g

0x52f4,	// (0x00066602) cell_image3_tool_bar_pane_ParamLimits

0x52f4,	// (0x00066602) cell_image3_tool_bar_pane

0xc01b,	// (0x0006d329) cell_image3_tool_bar_pane_g1

0xb8ce,	// (0x0006cbdc) bg_popup_trans_pane_cp1

0x5308,	// (0x00066616) popup_image3_note_pane_t1

0x5316,	// (0x00066624) popup_image3_note_pane_t2

0x5324,	// (0x00066632) popup_image3_note_pane_t3

0x0002,

0xf84c,	// (0x00070b5a) popup_image3_note_pane_t

0x5332,	// (0x00066640) popup_image3_note_pane_t3_copy1

0x5340,	// (0x0006664e) bg_myfav_hc_instruction_pane_ParamLimits

0x5340,	// (0x0006664e) bg_myfav_hc_instruction_pane

0x5354,	// (0x00066662) cell_myfav_contact_pane_ParamLimits

0x5354,	// (0x00066662) cell_myfav_contact_pane

0x5372,	// (0x00066680) cell_myfav_contact_pane_cp1_ParamLimits

0x5372,	// (0x00066680) cell_myfav_contact_pane_cp1

0x538a,	// (0x00066698) cell_myfav_contact_pane_cp2_ParamLimits

0x538a,	// (0x00066698) cell_myfav_contact_pane_cp2

0x53a2,	// (0x000666b0) cell_myfav_contact_pane_cp3_ParamLimits

0x53a2,	// (0x000666b0) cell_myfav_contact_pane_cp3

0x53b9,	// (0x000666c7) cell_myfav_contact_pane_cp4_ParamLimits

0x53b9,	// (0x000666c7) cell_myfav_contact_pane_cp4

0x53d1,	// (0x000666df) cell_myfav_contact_pane_cp5_ParamLimits

0x53d1,	// (0x000666df) cell_myfav_contact_pane_cp5

0x53e5,	// (0x000666f3) cell_myfav_contact_pane_cp6_ParamLimits

0x53e5,	// (0x000666f3) cell_myfav_contact_pane_cp6

0x53fb,	// (0x00066709) cell_myfav_contact_pane_cp7_ParamLimits

0x53fb,	// (0x00066709) cell_myfav_contact_pane_cp7

0x5415,	// (0x00066723) listscroll_gen_pane_cp05

0x541e,	// (0x0006672c) main_myfav_hc_pane_g1_ParamLimits

0x541e,	// (0x0006672c) main_myfav_hc_pane_g1

0x5438,	// (0x00066746) main_myfav_hc_pane_g2_ParamLimits

0x5438,	// (0x00066746) main_myfav_hc_pane_g2

0x0002,

0xf853,	// (0x00070b61) main_myfav_hc_pane_g_ParamLimits

0xf853,	// (0x00070b61) main_myfav_hc_pane_g

0x546a,	// (0x00066778) main_myfav_hc_pane_t1_ParamLimits

0x546a,	// (0x00066778) main_myfav_hc_pane_t1

0x5481,	// (0x0006678f) main_myfav_hc_pane_t2_ParamLimits

0x5481,	// (0x0006678f) main_myfav_hc_pane_t2

0x5493,	// (0x000667a1) main_myfav_hc_pane_t3_ParamLimits

0x5493,	// (0x000667a1) main_myfav_hc_pane_t3

0x54a5,	// (0x000667b3) main_myfav_hc_pane_t4_ParamLimits

0x54a5,	// (0x000667b3) main_myfav_hc_pane_t4

0x0004,

0xf85a,	// (0x00070b68) main_myfav_hc_pane_t_ParamLimits

0xf85a,	// (0x00070b68) main_myfav_hc_pane_t

0xc01b,	// (0x0006d329) bg_myfav_hc_instruction_pane_g1

0x54cd,	// (0x000667db) cell_myfav_contact_pane_g1_ParamLimits

0x54cd,	// (0x000667db) cell_myfav_contact_pane_g1

0x54cd,	// (0x000667db) cell_myfav_contact_pane_g2_ParamLimits

0x54cd,	// (0x000667db) cell_myfav_contact_pane_g2

0x54d9,	// (0x000667e7) cell_myfav_contact_pane_g3_ParamLimits

0x54d9,	// (0x000667e7) cell_myfav_contact_pane_g3

0xbfdd,	// (0x0006d2eb) cell_myfav_contact_pane_g4_ParamLimits

0xbfdd,	// (0x0006d2eb) cell_myfav_contact_pane_g4

0x54e6,	// (0x000667f4) cell_myfav_contact_pane_g5_ParamLimits

0x54e6,	// (0x000667f4) cell_myfav_contact_pane_g5

0x0004,

0xf865,	// (0x00070b73) cell_myfav_contact_pane_g_ParamLimits

0xf865,	// (0x00070b73) cell_myfav_contact_pane_g

0x5452,	// (0x00066760) main_myfav_hc_pane_g3_ParamLimits

0x5452,	// (0x00066760) main_myfav_hc_pane_g3

0x072c,	// (0x00061a3a) popup_adpt_find_window

0x54f2,	// (0x00066800) afind_page_pane_ParamLimits

0x54f2,	// (0x00066800) afind_page_pane

0x5507,	// (0x00066815) aid_size_cell_afind_ParamLimits

0x5507,	// (0x00066815) aid_size_cell_afind

0x5525,	// (0x00066833) bg_popup_sub_pane_cp09_ParamLimits

0x5525,	// (0x00066833) bg_popup_sub_pane_cp09

0x5532,	// (0x00066840) find_pane_cp01_ParamLimits

0x5532,	// (0x00066840) find_pane_cp01

0x553f,	// (0x0006684d) grid_afind_control_pane_ParamLimits

0x553f,	// (0x0006684d) grid_afind_control_pane

0x5553,	// (0x00066861) grid_afind_pane_ParamLimits

0x5553,	// (0x00066861) grid_afind_pane

0x5575,	// (0x00066883) cell_afind_pane_ParamLimits

0x5575,	// (0x00066883) cell_afind_pane

0xc01b,	// (0x0006d329) afind_page_pane_g1

0x55dc,	// (0x000668ea) afind_page_pane_g2

0x55e4,	// (0x000668f2) afind_page_pane_g3

0x0002,

0xf870,	// (0x00070b7e) afind_page_pane_g

0x55ec,	// (0x000668fa) afind_page_pane_t1

0x560c,	// (0x0006691a) cell_afind_grid_control_pane_ParamLimits

0x560c,	// (0x0006691a) cell_afind_grid_control_pane

0x561b,	// (0x00066929) bg_button_pane_cp69_ParamLimits

0x561b,	// (0x00066929) bg_button_pane_cp69

0x5627,	// (0x00066935) cell_afind_pane_g1_ParamLimits

0x5627,	// (0x00066935) cell_afind_pane_g1

0x5634,	// (0x00066942) cell_afind_pane_t1_ParamLimits

0x5634,	// (0x00066942) cell_afind_pane_t1

0x5646,	// (0x00066954) bg_button_pane_cp72

0x564e,	// (0x0006695c) cell_afind_grid_control_pane_g1

0x2ea2,	// (0x000641b0) aid_image_placing_area_ParamLimits

0x2ea2,	// (0x000641b0) aid_image_placing_area

0xbfcf,	// (0x0006d2dd) field_vitu_entry_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) field_vitu_entry_pane_g1

0xbfcf,	// (0x0006d2dd) field_vitu_entry_pane_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x000704ca) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x000704ca) field_vitu_entry_pane_g

0xeefa,	// (0x00070208) cell_vitu_itu_pane_g1_ParamLimits

0xeedd,	// (0x000701eb) cell_vitu_itu_pane_t3_ParamLimits

0xeedd,	// (0x000701eb) cell_vitu_itu_pane_t3

0x488b,	// (0x00065b99) mp4_progress_pane_t1_ParamLimits

0x48ad,	// (0x00065bbb) mp4_progress_pane_t2_ParamLimits

0xf7b6,	// (0x00070ac4) mp4_progress_pane_t_ParamLimits

0x48cf,	// (0x00065bdd) mup_progress_pane_cp04_ParamLimits

0x54b9,	// (0x000667c7) main_myfav_hc_pane_t5_ParamLimits

0x54b9,	// (0x000667c7) main_myfav_hc_pane_t5

0x9e26,	// (0x0006b134) aid_zoom_text_primary

0x072c,	// (0x00061a3a) popup_adpt_find_window_ParamLimits

0x9e77,	// (0x0006b185) main_cam_set_pane

0x4dd2,	// (0x000660e0) cam4_zoom_pane_ParamLimits

0x4dd2,	// (0x000660e0) cam4_zoom_pane

0x5657,	// (0x00066965) main_cam_set_pane_g1_ParamLimits

0x5657,	// (0x00066965) main_cam_set_pane_g1

0x5665,	// (0x00066973) main_cam_set_pane_g2_ParamLimits

0x5665,	// (0x00066973) main_cam_set_pane_g2

0x0001,

0xf877,	// (0x00070b85) main_cam_set_pane_g_ParamLimits

0xf877,	// (0x00070b85) main_cam_set_pane_g

0x5686,	// (0x00066994) main_cam_set_pane_t1_ParamLimits

0x5686,	// (0x00066994) main_cam_set_pane_t1

0x56a1,	// (0x000669af) main_cset_listscroll_pane_ParamLimits

0x56a1,	// (0x000669af) main_cset_listscroll_pane

0x56c7,	// (0x000669d5) main_cset_slider_pane_ParamLimits

0x56c7,	// (0x000669d5) main_cset_slider_pane

0x56f5,	// (0x00066a03) main_cset_list_pane_ParamLimits

0x56f5,	// (0x00066a03) main_cset_list_pane

0x5705,	// (0x00066a13) scroll_pane_cp028

0x570e,	// (0x00066a1c) aid_area_touch_slider

0x572a,	// (0x00066a38) cset_slider_pane

0x574d,	// (0x00066a5b) main_cset_slider_pane_g1

0x5762,	// (0x00066a70) main_cset_slider_pane_g2

0x0011,

0xf87c,	// (0x00070b8a) main_cset_slider_pane_g

0x584e,	// (0x00066b5c) main_cset_slider_pane_t1

0x5876,	// (0x00066b84) main_cset_slider_pane_t2

0x5890,	// (0x00066b9e) main_cset_slider_pane_t3

0x58aa,	// (0x00066bb8) main_cset_slider_pane_t4

0x58c4,	// (0x00066bd2) main_cset_slider_pane_t5

0x58de,	// (0x00066bec) main_cset_slider_pane_t6

0x58f3,	// (0x00066c01) main_cset_slider_pane_t7

0x000e,

0xf8a1,	// (0x00070baf) main_cset_slider_pane_t

0x5a69,	// (0x00066d77) cset_list_set_pane_ParamLimits

0x5a69,	// (0x00066d77) cset_list_set_pane

0x5a7b,	// (0x00066d89) aid_position_infowindow_above

0x5a83,	// (0x00066d91) aid_position_infowindow_below

0x5a8b,	// (0x00066d99) cset_list_set_pane_g1_ParamLimits

0x5a8b,	// (0x00066d99) cset_list_set_pane_g1

0x5a97,	// (0x00066da5) cset_list_set_pane_g3_ParamLimits

0x5a97,	// (0x00066da5) cset_list_set_pane_g3

0x0001,

0xf8c0,	// (0x00070bce) cset_list_set_pane_g_ParamLimits

0xf8c0,	// (0x00070bce) cset_list_set_pane_g

0x5aa6,	// (0x00066db4) cset_list_set_pane_t1_ParamLimits

0x5aa6,	// (0x00066db4) cset_list_set_pane_t1

0xbf68,	// (0x0006d276) list_highlight_pane_cp021_ParamLimits

0xbf68,	// (0x0006d276) list_highlight_pane_cp021

0xd346,	// (0x0006e654) cset_slider_pane_g1

0xd358,	// (0x0006e666) cset_slider_pane_g2

0xd34f,	// (0x0006e65d) cset_slider_pane_g3

0x0002,

0xf8c5,	// (0x00070bd3) cset_slider_pane_g

0xa57c,	// (0x0006b88a) aid_area_touch_cam4_zoom

0xa584,	// (0x0006b892) cam4_zoom_cont_pane

0xa58c,	// (0x0006b89a) cam4_zoom_pane_g1

0xa594,	// (0x0006b8a2) cam4_zoom_pane_g2

0x5abb,	// (0x00066dc9) cam4_zoom_pane_g3

0x0002,

0xf8cc,	// (0x00070bda) cam4_zoom_pane_g

0xa59c,	// (0x0006b8aa) cam4_zoom_cont_pane_g1

0xa5a5,	// (0x0006b8b3) cam4_zoom_cont_pane_g2

0xa5ae,	// (0x0006b8bc) cam4_zoom_cont_pane_g3

0x0002,

0xf8d3,	// (0x00070be1) cam4_zoom_cont_pane_g

0x4be7,	// (0x00065ef5) call4_image_pane_ParamLimits

0x4be7,	// (0x00065ef5) call4_image_pane

0x4c4e,	// (0x00065f5c) call4_windows_conf_pane_ParamLimits

0x4c93,	// (0x00065fa1) popup_call4_audio_in_window_ParamLimits

0x4c93,	// (0x00065fa1) popup_call4_audio_in_window

0xb8ce,	// (0x0006cbdc) bg_popup_call2_act_pane_cp02

0x4d57,	// (0x00066065) call4_list_conf_pane

0xc01b,	// (0x0006d329) call4_image_pane_g1

0xc01b,	// (0x0006d329) call4_image_pane_g2

0x0001,

0xf0af,	// (0x000703bd) call4_image_pane_g

0x5ac3,	// (0x00066dd1) list_single_graphic_popup_conf4_pane_ParamLimits

0x5ac3,	// (0x00066dd1) list_single_graphic_popup_conf4_pane

0xb8ce,	// (0x0006cbdc) list_highlight_pane_cp022

0x5ad6,	// (0x00066de4) list_single_graphic_popup_conf4_pane_g1

0xcf0a,	// (0x0006e218) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8da,	// (0x00070be8) list_single_graphic_popup_conf4_pane_g

0x5ade,	// (0x00066dec) list_single_graphic_popup_conf4_pane_t1

0x15f7,	// (0x00062905) popup_vtel_slider_window_ParamLimits

0x15f7,	// (0x00062905) popup_vtel_slider_window

0x4920,	// (0x00065c2e) dialer2_ne_pane_t2_ParamLimits

0x4920,	// (0x00065c2e) dialer2_ne_pane_t2

0x0001,

0xf7bb,	// (0x00070ac9) dialer2_ne_pane_t_ParamLimits

0xf7bb,	// (0x00070ac9) dialer2_ne_pane_t

0xe475,	// (0x0006f783) bg_popup_sub_pane_cp010_ParamLimits

0xe475,	// (0x0006f783) bg_popup_sub_pane_cp010

0x5af4,	// (0x00066e02) popup_vtel_slider_window_g1_ParamLimits

0x5af4,	// (0x00066e02) popup_vtel_slider_window_g1

0x5b07,	// (0x00066e15) popup_vtel_slider_window_g2_ParamLimits

0x5b07,	// (0x00066e15) popup_vtel_slider_window_g2

0x0003,

0xf8df,	// (0x00070bed) popup_vtel_slider_window_g_ParamLimits

0xf8df,	// (0x00070bed) popup_vtel_slider_window_g

0x5b5d,	// (0x00066e6b) vtel_slider_pane_ParamLimits

0x5b5d,	// (0x00066e6b) vtel_slider_pane

0x5b7f,	// (0x00066e8d) vtel_slider_pane_g1_ParamLimits

0x5b7f,	// (0x00066e8d) vtel_slider_pane_g1

0x5b93,	// (0x00066ea1) vtel_slider_pane_g2_ParamLimits

0x5b93,	// (0x00066ea1) vtel_slider_pane_g2

0x5bab,	// (0x00066eb9) vtel_slider_pane_g3_ParamLimits

0x5bab,	// (0x00066eb9) vtel_slider_pane_g3

0x5b7f,	// (0x00066e8d) vtel_slider_pane_g4_ParamLimits

0x5b7f,	// (0x00066e8d) vtel_slider_pane_g4

0x5bc1,	// (0x00066ecf) vtel_slider_pane_g5_ParamLimits

0x5bc1,	// (0x00066ecf) vtel_slider_pane_g5

0x0004,

0xf8e8,	// (0x00070bf6) vtel_slider_pane_g_ParamLimits

0xf8e8,	// (0x00070bf6) vtel_slider_pane_g

0x9e77,	// (0x0006b185) main_gallery2_pane

0x4fd2,	// (0x000662e0) aid_size_row_itut2_dropdow_list_ParamLimits

0x4fd2,	// (0x000662e0) aid_size_row_itut2_dropdow_list

0x505e,	// (0x0006636c) grid_vitu2_function_top_pane_ParamLimits

0x505e,	// (0x0006636c) grid_vitu2_function_top_pane

0x50c8,	// (0x000663d6) popup_vitu2_dropdown_list_window_ParamLimits

0x50c8,	// (0x000663d6) popup_vitu2_dropdown_list_window

0x50ef,	// (0x000663fd) popup_vitu2_match_list_window

0x5bd7,	// (0x00066ee5) cell_vitu2_function_top_pane_ParamLimits

0x5bd7,	// (0x00066ee5) cell_vitu2_function_top_pane

0x5bef,	// (0x00066efd) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5bef,	// (0x00066efd) cell_vitu2_function_top_pane_cp01

0x5c0b,	// (0x00066f19) cell_vitu2_function_top_wide_pane_ParamLimits

0x5c0b,	// (0x00066f19) cell_vitu2_function_top_wide_pane

0x9e77,	// (0x0006b185) bg_button_pane_cp012

0x5c29,	// (0x00066f37) cell_vitu2_function_top_pane_g1

0xa5b7,	// (0x0006b8c5) bg_button_pane_cp013_ParamLimits

0xa5b7,	// (0x0006b8c5) bg_button_pane_cp013

0x5c3d,	// (0x00066f4b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5c3d,	// (0x00066f4b) cell_vitu2_function_top_wide_pane_g1

0x9e77,	// (0x0006b185) bg_popup_sub_pane_cp20

0x5c55,	// (0x00066f63) list_vitu2_match_list_pane

0x52bc,	// (0x000665ca) bg_popup_sub_pane_cp20_g1

0x52c4,	// (0x000665d2) bg_popup_sub_pane_cp20_g2

0xc46b,	// (0x0006d779) bg_popup_sub_pane_cp20_g3

0x52cc,	// (0x000665da) bg_popup_sub_pane_cp20_g4

0xc44b,	// (0x0006d759) bg_popup_sub_pane_cp20_g5

0x5c6d,	// (0x00066f7b) bg_popup_sub_pane_cp20_g6

0x52dc,	// (0x000665ea) bg_popup_sub_pane_cp20_g7

0x52e4,	// (0x000665f2) bg_popup_sub_pane_cp20_g8

0x52ec,	// (0x000665fa) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8f3,	// (0x00070c01) bg_popup_sub_pane_cp20_g

0xa5d3,	// (0x0006b8e1) list_vitu2_match_list_item_pane_ParamLimits

0xa5d3,	// (0x0006b8e1) list_vitu2_match_list_item_pane

0xa5e5,	// (0x0006b8f3) list_vitu2_match_list_item_pane_t1

0x9e85,	// (0x0006b193) bg_popup_sub_pane_cp21

0xc252,	// (0x0006d560) grid_vitu2_dropdown_list_pane

0x5c75,	// (0x00066f83) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5c75,	// (0x00066f83) cell_vitu2_dropdown_list_char_pane

0x5c95,	// (0x00066fa3) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5c95,	// (0x00066fa3) cell_vitu2_dropdown_list_ctrl_pane

0x5cbd,	// (0x00066fcb) cell_vitu2_dropdown_list_char_pane_g1

0x5cc6,	// (0x00066fd4) cell_vitu2_dropdown_list_char_pane_g2

0x5ccf,	// (0x00066fdd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf906,	// (0x00070c14) cell_vitu2_dropdown_list_char_pane_g

0x5cd8,	// (0x00066fe6) cell_vitu2_dropdown_list_char_pane_t1

0x5ce6,	// (0x00066ff4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5ce6,	// (0x00066ff4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5cf3,	// (0x00067001) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5cf3,	// (0x00067001) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5d00,	// (0x0006700e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5d00,	// (0x0006700e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5d0d,	// (0x0006701b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5d0d,	// (0x0006701b) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa49d,	// (0x0006b7ab) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa49d,	// (0x0006b7ab) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf90d,	// (0x00070c1b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf90d,	// (0x00070c1b) cell_vitu2_dropdown_list_ctrl_pane_g

0x5d29,	// (0x00067037) aid_size_cell_gallery2_ParamLimits

0x5d29,	// (0x00067037) aid_size_cell_gallery2

0x5d47,	// (0x00067055) grid_gallery2_pane_ParamLimits

0x5d47,	// (0x00067055) grid_gallery2_pane

0x5d61,	// (0x0006706f) scroll_pane_cp029_ParamLimits

0x5d61,	// (0x0006706f) scroll_pane_cp029

0x5d72,	// (0x00067080) cell_gallery2_pane_ParamLimits

0x5d72,	// (0x00067080) cell_gallery2_pane

0x5dd1,	// (0x000670df) cell_gallery2_pane_g2

0x5dd9,	// (0x000670e7) cell_gallery2_pane_g3

0x5de1,	// (0x000670ef) cell_gallery2_pane_g4

0x5de9,	// (0x000670f7) cell_gallery2_pane_g5

0xc252,	// (0x0006d560) grid_highlight_pane_cp10

0x50ef,	// (0x000663fd) popup_vitu2_match_list_window_ParamLimits

0x5104,	// (0x00066412) popup_vitu2_query_window_ParamLimits

0x5104,	// (0x00066412) popup_vitu2_query_window

0x9e85,	// (0x0006b193) bg_vitu2_candi_button_pane

0x5cbd,	// (0x00066fcb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x5cc6,	// (0x00066fd4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x5ccf,	// (0x00066fdd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5df1,	// (0x000670ff) bg_button_pane_cp015

0x5e02,	// (0x00067110) bg_button_pane_cp016

0x5e0e,	// (0x0006711c) bg_button_pane_cp017

0xd2d6,	// (0x0006e5e4) bg_popup_sub_pane_cp22

0x5e4c,	// (0x0006715a) popup_vitu2_query_window_g1

0x5e58,	// (0x00067166) popup_vitu2_query_window_g2

0x0002,

0xf918,	// (0x00070c26) popup_vitu2_query_window_g

0x5e7a,	// (0x00067188) popup_vitu2_query_window_t1_ParamLimits

0x5e7a,	// (0x00067188) popup_vitu2_query_window_t1

0x5ead,	// (0x000671bb) popup_vitu2_query_window_t2_ParamLimits

0x5ead,	// (0x000671bb) popup_vitu2_query_window_t2

0x5ebf,	// (0x000671cd) popup_vitu2_query_window_t3_ParamLimits

0x5ebf,	// (0x000671cd) popup_vitu2_query_window_t3

0x5ee7,	// (0x000671f5) popup_vitu2_query_window_t4_ParamLimits

0x5ee7,	// (0x000671f5) popup_vitu2_query_window_t4

0x5efb,	// (0x00067209) popup_vitu2_query_window_t5_ParamLimits

0x5efb,	// (0x00067209) popup_vitu2_query_window_t5

0x0006,

0xf91f,	// (0x00070c2d) popup_vitu2_query_window_t_ParamLimits

0xf91f,	// (0x00070c2d) popup_vitu2_query_window_t

0x56ed,	// (0x000669fb) main_cset_text_pane

0x570e,	// (0x00066a1c) aid_area_touch_slider_ParamLimits

0x572a,	// (0x00066a38) cset_slider_pane_ParamLimits

0x574d,	// (0x00066a5b) main_cset_slider_pane_g1_ParamLimits

0x5762,	// (0x00066a70) main_cset_slider_pane_g2_ParamLimits

0x5777,	// (0x00066a85) main_cset_slider_pane_g3_ParamLimits

0x5777,	// (0x00066a85) main_cset_slider_pane_g3

0x5783,	// (0x00066a91) main_cset_slider_pane_g4_ParamLimits

0x5783,	// (0x00066a91) main_cset_slider_pane_g4

0x5792,	// (0x00066aa0) main_cset_slider_pane_g5_ParamLimits

0x5792,	// (0x00066aa0) main_cset_slider_pane_g5

0x579e,	// (0x00066aac) main_cset_slider_pane_g6_ParamLimits

0x579e,	// (0x00066aac) main_cset_slider_pane_g6

0xf87c,	// (0x00070b8a) main_cset_slider_pane_g_ParamLimits

0x584e,	// (0x00066b5c) main_cset_slider_pane_t1_ParamLimits

0x5876,	// (0x00066b84) main_cset_slider_pane_t2_ParamLimits

0x5890,	// (0x00066b9e) main_cset_slider_pane_t3_ParamLimits

0x58aa,	// (0x00066bb8) main_cset_slider_pane_t4_ParamLimits

0x58c4,	// (0x00066bd2) main_cset_slider_pane_t5_ParamLimits

0x58de,	// (0x00066bec) main_cset_slider_pane_t6_ParamLimits

0x58f3,	// (0x00066c01) main_cset_slider_pane_t7_ParamLimits

0x591d,	// (0x00066c2b) main_cset_slider_pane_t8_ParamLimits

0x591d,	// (0x00066c2b) main_cset_slider_pane_t8

0x5945,	// (0x00066c53) main_cset_slider_pane_t9_ParamLimits

0x5945,	// (0x00066c53) main_cset_slider_pane_t9

0x596d,	// (0x00066c7b) main_cset_slider_pane_t10_ParamLimits

0x596d,	// (0x00066c7b) main_cset_slider_pane_t10

0x5995,	// (0x00066ca3) main_cset_slider_pane_t11_ParamLimits

0x5995,	// (0x00066ca3) main_cset_slider_pane_t11

0x59bd,	// (0x00066ccb) main_cset_slider_pane_t12_ParamLimits

0x59bd,	// (0x00066ccb) main_cset_slider_pane_t12

0x59da,	// (0x00066ce8) main_cset_slider_pane_t13_ParamLimits

0x59da,	// (0x00066ce8) main_cset_slider_pane_t13

0xf8a1,	// (0x00070baf) main_cset_slider_pane_t_ParamLimits

0xb8ce,	// (0x0006cbdc) bg_popup_sub_pane_cp011

0x5f65,	// (0x00067273) main_cset_text_pane_g1

0x5f6d,	// (0x0006727b) main_cset_text_pane_t1

0x5f7b,	// (0x00067289) main_cset_text_pane_t2

0x5f89,	// (0x00067297) main_cset_text_pane_t3

0x5f97,	// (0x000672a5) main_cset_text_pane_t4

0x5fa5,	// (0x000672b3) main_cset_text_pane_t5

0x5fb3,	// (0x000672c1) main_cset_text_pane_t6

0x5fc1,	// (0x000672cf) main_cset_text_pane_t7

0x0006,

0xf92e,	// (0x00070c3c) main_cset_text_pane_t

0x9e85,	// (0x0006b193) main_cam4_burst_pane

0x9e85,	// (0x0006b193) main_cam5_pane

0x55fa,	// (0x00066908) bg_button_pane_cp019

0x5603,	// (0x00066911) bg_button_pane_cp020

0x57b2,	// (0x00066ac0) main_cset_slider_pane_g7_ParamLimits

0x57b2,	// (0x00066ac0) main_cset_slider_pane_g7

0x57be,	// (0x00066acc) main_cset_slider_pane_g8_ParamLimits

0x57be,	// (0x00066acc) main_cset_slider_pane_g8

0x57ca,	// (0x00066ad8) main_cset_slider_pane_g9_ParamLimits

0x57ca,	// (0x00066ad8) main_cset_slider_pane_g9

0x57d6,	// (0x00066ae4) main_cset_slider_pane_g10_ParamLimits

0x57d6,	// (0x00066ae4) main_cset_slider_pane_g10

0x57e2,	// (0x00066af0) main_cset_slider_pane_g11_ParamLimits

0x57e2,	// (0x00066af0) main_cset_slider_pane_g11

0x57ee,	// (0x00066afc) main_cset_slider_pane_g12_ParamLimits

0x57ee,	// (0x00066afc) main_cset_slider_pane_g12

0x57fa,	// (0x00066b08) main_cset_slider_pane_g13_ParamLimits

0x57fa,	// (0x00066b08) main_cset_slider_pane_g13

0x5806,	// (0x00066b14) main_cset_slider_pane_g14_ParamLimits

0x5806,	// (0x00066b14) main_cset_slider_pane_g14

0x5812,	// (0x00066b20) main_cset_slider_pane_g15_ParamLimits

0x5812,	// (0x00066b20) main_cset_slider_pane_g15

0x59f7,	// (0x00066d05) main_cset_slider_pane_t14_ParamLimits

0x59f7,	// (0x00066d05) main_cset_slider_pane_t14

0x5a30,	// (0x00066d3e) main_cset_slider_pane_t15_ParamLimits

0x5a30,	// (0x00066d3e) main_cset_slider_pane_t15

0x5fcf,	// (0x000672dd) aid_cam4_burst_size_cell_ParamLimits

0x5fcf,	// (0x000672dd) aid_cam4_burst_size_cell

0x5fef,	// (0x000672fd) grid_cam4_burst_pane_ParamLimits

0x5fef,	// (0x000672fd) grid_cam4_burst_pane

0x6027,	// (0x00067335) linegrid_cam4_burst_pane_ParamLimits

0x6027,	// (0x00067335) linegrid_cam4_burst_pane

0x604b,	// (0x00067359) scroll_pane_cp30_ParamLimits

0x604b,	// (0x00067359) scroll_pane_cp30

0x6057,	// (0x00067365) cell_cam4_burst_pane_ParamLimits

0x6057,	// (0x00067365) cell_cam4_burst_pane

0x60a4,	// (0x000673b2) linegrid_cam4_burst_pane_g1_ParamLimits

0x60a4,	// (0x000673b2) linegrid_cam4_burst_pane_g1

0x60b1,	// (0x000673bf) linegrid_cam4_burst_pane_g2_ParamLimits

0x60b1,	// (0x000673bf) linegrid_cam4_burst_pane_g2

0x60c2,	// (0x000673d0) linegrid_cam4_burst_pane_g3_ParamLimits

0x60c2,	// (0x000673d0) linegrid_cam4_burst_pane_g3

0x0002,

0xf93d,	// (0x00070c4b) linegrid_cam4_burst_pane_g_ParamLimits

0xf93d,	// (0x00070c4b) linegrid_cam4_burst_pane_g

0x60cf,	// (0x000673dd) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x60cf,	// (0x000673dd) linegrid_cam4_burst_pane_g3_copy1

0x60e9,	// (0x000673f7) linegrid_cam4_burst_pane_g4_ParamLimits

0x60e9,	// (0x000673f7) linegrid_cam4_burst_pane_g4

0x60f6,	// (0x00067404) linegrid_cam4_burst_pane_g5_ParamLimits

0x60f6,	// (0x00067404) linegrid_cam4_burst_pane_g5

0x6107,	// (0x00067415) linegrid_cam4_burst_pane_g6_ParamLimits

0x6107,	// (0x00067415) linegrid_cam4_burst_pane_g6

0x611e,	// (0x0006742c) linegrid_cam4_burst_pane_g7_ParamLimits

0x611e,	// (0x0006742c) linegrid_cam4_burst_pane_g7

0x612b,	// (0x00067439) cell_cam4_burst_pane_g1

0x614a,	// (0x00067458) main_cam5_pane_t1_ParamLimits

0x614a,	// (0x00067458) main_cam5_pane_t1

0x615c,	// (0x0006746a) main_cam5_pane_t2_ParamLimits

0x615c,	// (0x0006746a) main_cam5_pane_t2

0x616e,	// (0x0006747c) main_cam5_pane_t3_ParamLimits

0x616e,	// (0x0006747c) main_cam5_pane_t3

0x6180,	// (0x0006748e) main_cam5_pane_t4_ParamLimits

0x6180,	// (0x0006748e) main_cam5_pane_t4

0x6198,	// (0x000674a6) main_cam5_pane_t5_ParamLimits

0x6198,	// (0x000674a6) main_cam5_pane_t5

0x61ac,	// (0x000674ba) main_cam5_pane_t6_ParamLimits

0x61ac,	// (0x000674ba) main_cam5_pane_t6

0x61c0,	// (0x000674ce) main_cam5_pane_t7_ParamLimits

0x61c0,	// (0x000674ce) main_cam5_pane_t7

0x61d2,	// (0x000674e0) main_cam5_pane_t8_ParamLimits

0x61d2,	// (0x000674e0) main_cam5_pane_t8

0x61ee,	// (0x000674fc) main_cam5_pane_t9_ParamLimits

0x61ee,	// (0x000674fc) main_cam5_pane_t9

0x6200,	// (0x0006750e) main_cam5_pane_t10_ParamLimits

0x6200,	// (0x0006750e) main_cam5_pane_t10

0x6212,	// (0x00067520) main_cam5_pane_t11_ParamLimits

0x6212,	// (0x00067520) main_cam5_pane_t11

0x6224,	// (0x00067532) main_cam5_pane_t12_ParamLimits

0x6224,	// (0x00067532) main_cam5_pane_t12

0x6239,	// (0x00067547) main_cam5_pane_t13_ParamLimits

0x6239,	// (0x00067547) main_cam5_pane_t13

0x000c,

0xf949,	// (0x00070c57) main_cam5_pane_t_ParamLimits

0xf949,	// (0x00070c57) main_cam5_pane_t

0x0a10,	// (0x00061d1e) popup_scut_keymap_window_ParamLimits

0x0a10,	// (0x00061d1e) popup_scut_keymap_window

0x6256,	// (0x00067564) aid_size_cell_brow_shortcut

0xc252,	// (0x0006d560) bg_popup_window_pane_cp010

0x6262,	// (0x00067570) grid_scut_pane

0x626e,	// (0x0006757c) cell_scut_pane_ParamLimits

0x626e,	// (0x0006757c) cell_scut_pane

0x6285,	// (0x00067593) cell_scut_pane_g1

0x628e,	// (0x0006759c) cell_scut_pane_t1

0x629d,	// (0x000675ab) cell_scut_pane_t2

0x62ac,	// (0x000675ba) cell_scut_pane_t3

0x0002,

0xf964,	// (0x00070c72) cell_scut_pane_t

0x3d35,	// (0x00065043) main_mup3_pane_g8_ParamLimits

0x3d35,	// (0x00065043) main_mup3_pane_g8

0x4fea,	// (0x000662f8) area_vitu2_query_pane_ParamLimits

0x4fea,	// (0x000662f8) area_vitu2_query_pane

0x5e1a,	// (0x00067128) input_focus_pane_cp08

0x62ba,	// (0x000675c8) area_vitu2_query_pane_g1

0x62c6,	// (0x000675d4) area_vitu2_query_pane_g2

0x0001,

0xf96b,	// (0x00070c79) area_vitu2_query_pane_g

0x62d5,	// (0x000675e3) area_vitu2_query_pane_t1_ParamLimits

0x62d5,	// (0x000675e3) area_vitu2_query_pane_t1

0x62e9,	// (0x000675f7) area_vitu2_query_pane_t2_ParamLimits

0x62e9,	// (0x000675f7) area_vitu2_query_pane_t2

0x62fd,	// (0x0006760b) area_vitu2_query_pane_t3_ParamLimits

0x62fd,	// (0x0006760b) area_vitu2_query_pane_t3

0x6325,	// (0x00067633) area_vitu2_query_pane_t4_ParamLimits

0x6325,	// (0x00067633) area_vitu2_query_pane_t4

0x634d,	// (0x0006765b) area_vitu2_query_pane_t5_ParamLimits

0x634d,	// (0x0006765b) area_vitu2_query_pane_t5

0x6375,	// (0x00067683) area_vitu2_query_pane_t6_ParamLimits

0x6375,	// (0x00067683) area_vitu2_query_pane_t6

0x0006,

0xf970,	// (0x00070c7e) area_vitu2_query_pane_t_ParamLimits

0xf970,	// (0x00070c7e) area_vitu2_query_pane_t

0x63c1,	// (0x000676cf) bg_button_pane_cp018

0x63cd,	// (0x000676db) bg_button_pane_cp021

0x63d9,	// (0x000676e7) bg_button_pane_cp022

0x63f8,	// (0x00067706) input_focus_pane_cp09

0xd046,	// (0x0006e354) aid_size_touch_mv_arrow_left

0xd06f,	// (0x0006e37d) aid_size_touch_mv_arrow_right

0x582a,	// (0x00066b38) main_cset_slider_pane_g16_ParamLimits

0x582a,	// (0x00066b38) main_cset_slider_pane_g16

0x5836,	// (0x00066b44) main_cset_slider_pane_g17_ParamLimits

0x5836,	// (0x00066b44) main_cset_slider_pane_g17

0x612b,	// (0x00067439) cell_cam4_burst_pane_g1_ParamLimits

0xb8ce,	// (0x0006cbdc) compa_mode_pane

0x5b17,	// (0x00066e25) popup_vtel_slider_window_g3_ParamLimits

0x5b17,	// (0x00066e25) popup_vtel_slider_window_g3

0x5b2e,	// (0x00066e3c) popup_vtel_slider_window_g4_ParamLimits

0x5b2e,	// (0x00066e3c) popup_vtel_slider_window_g4

0x5b45,	// (0x00066e53) popup_vtel_slider_window_t1_ParamLimits

0x5b45,	// (0x00066e53) popup_vtel_slider_window_t1

0x9e85,	// (0x0006b193) main_cl_pane

0xa036,	// (0x0006b344) popup_imed_adjust2_window_ParamLimits

0xd2d6,	// (0x0006e5e4) bg_tb_trans_pane_cp05_ParamLimits

0xee1a,	// (0x00070128) popup_imed_adjust2_window_g1_ParamLimits

0xee29,	// (0x00070137) popup_imed_adjust2_window_g2_ParamLimits

0xee29,	// (0x00070137) popup_imed_adjust2_window_g2

0xee35,	// (0x00070143) popup_imed_adjust2_window_g3_ParamLimits

0xee35,	// (0x00070143) popup_imed_adjust2_window_g3

0x0002,

0xf70d,	// (0x00070a1b) popup_imed_adjust2_window_g_ParamLimits

0xf70d,	// (0x00070a1b) popup_imed_adjust2_window_g

0xee41,	// (0x0007014f) popup_imed_adjust2_window_t1_ParamLimits

0xee59,	// (0x00070167) slider_imed_adjust_pane_ParamLimits

0xee6d,	// (0x0007017b) slider_imed_adjust_pane_g1_ParamLimits

0xee7d,	// (0x0007018b) slider_imed_adjust_pane_g2_ParamLimits

0xee8d,	// (0x0007019b) slider_imed_adjust_pane_g3_ParamLimits

0xee9e,	// (0x000701ac) slider_imed_adjust_pane_g4_ParamLimits

0xf714,	// (0x00070a22) slider_imed_adjust_pane_g_ParamLimits

0x4d73,	// (0x00066081) aid_touch_area_cam4_ParamLimits

0x4d73,	// (0x00066081) aid_touch_area_cam4

0xa46f,	// (0x0006b77d) battery_pane_cp01

0x4e42,	// (0x00066150) main_camera4_pane_g6_ParamLimits

0x4e42,	// (0x00066150) main_camera4_pane_g6

0x4e6c,	// (0x0006617a) main_camera4_pane_t2_ParamLimits

0x4e6c,	// (0x0006617a) main_camera4_pane_t2

0x0001,

0xf7ef,	// (0x00070afd) main_camera4_pane_t_ParamLimits

0xf7ef,	// (0x00070afd) main_camera4_pane_t

0x4ea1,	// (0x000661af) aid_touch_area_vid4_ParamLimits

0x4ea1,	// (0x000661af) aid_touch_area_vid4

0x4ef5,	// (0x00066203) main_video4_pane_g5_ParamLimits

0x4ef5,	// (0x00066203) main_video4_pane_g5

0x4f1a,	// (0x00066228) vid4_progress_pane_ParamLimits

0x4f1a,	// (0x00066228) vid4_progress_pane

0x5842,	// (0x00066b50) main_cset_slider_pane_g18_ParamLimits

0x5842,	// (0x00066b50) main_cset_slider_pane_g18

0x613e,	// (0x0006744c) cell_cam4_burst_pane_g2_ParamLimits

0x613e,	// (0x0006744c) cell_cam4_burst_pane_g2

0x0001,

0xf944,	// (0x00070c52) cell_cam4_burst_pane_g_ParamLimits

0xf944,	// (0x00070c52) cell_cam4_burst_pane_g

0xc079,	// (0x0006d387) bg_cl_pane_ParamLimits

0xc079,	// (0x0006d387) bg_cl_pane

0x6408,	// (0x00067716) cl_header_pane_ParamLimits

0x6408,	// (0x00067716) cl_header_pane

0x641c,	// (0x0006772a) cl_listscroll_pane_ParamLimits

0x641c,	// (0x0006772a) cl_listscroll_pane

0x642c,	// (0x0006773a) bg_cl_pane_g1

0x6434,	// (0x00067742) bg_cl_pane_g2

0x643c,	// (0x0006774a) bg_cl_pane_g3

0x6444,	// (0x00067752) bg_cl_pane_g4

0x644c,	// (0x0006775a) bg_cl_pane_g5

0x6454,	// (0x00067762) bg_cl_pane_g6

0x645c,	// (0x0006776a) bg_cl_pane_g7

0x6464,	// (0x00067772) bg_cl_pane_g8

0x646c,	// (0x0006777a) bg_cl_pane_g9

0x0008,

0xf97f,	// (0x00070c8d) bg_cl_pane_g

0x6474,	// (0x00067782) aid_height_cl_leading_ParamLimits

0x6474,	// (0x00067782) aid_height_cl_leading

0x6480,	// (0x0006778e) aid_height_cl_text_ParamLimits

0x6480,	// (0x0006778e) aid_height_cl_text

0xbf68,	// (0x0006d276) bg_cl_header_pane_ParamLimits

0xbf68,	// (0x0006d276) bg_cl_header_pane

0x649f,	// (0x000677ad) cl_header_pane_g1_ParamLimits

0x649f,	// (0x000677ad) cl_header_pane_g1

0x64b5,	// (0x000677c3) cl_header_pane_t1_ParamLimits

0x64b5,	// (0x000677c3) cl_header_pane_t1

0x64ce,	// (0x000677dc) cl_list_pane

0x5705,	// (0x00066a13) hc_scroll_pane_cp01

0xc44b,	// (0x0006d759) bg_cl_header_pane_g1

0x52bc,	// (0x000665ca) bg_cl_header_pane_g2

0xc46b,	// (0x0006d779) bg_cl_header_pane_g3

0x52cc,	// (0x000665da) bg_cl_header_pane_g4

0x52c4,	// (0x000665d2) bg_cl_header_pane_g5

0x5c6d,	// (0x00066f7b) bg_cl_header_pane_g6

0x52e4,	// (0x000665f2) bg_cl_header_pane_g7

0x52ec,	// (0x000665fa) bg_cl_header_pane_g8

0x52dc,	// (0x000665ea) bg_cl_header_pane_g9

0x0008,

0xf992,	// (0x00070ca0) bg_cl_header_pane_g

0x64d7,	// (0x000677e5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x64d7,	// (0x000677e5) hc_cl_list_double_graphic_heading_pane

0x64e8,	// (0x000677f6) hc_cl_list_single_graphic_pane_ParamLimits

0x64e8,	// (0x000677f6) hc_cl_list_single_graphic_pane

0x64fe,	// (0x0006780c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x64fe,	// (0x0006780c) hc_cl_list_single_graphic_pane_g1

0x650a,	// (0x00067818) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x650a,	// (0x00067818) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9a5,	// (0x00070cb3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9a5,	// (0x00070cb3) hc_cl_list_single_graphic_pane_g

0x651e,	// (0x0006782c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x651e,	// (0x0006782c) hc_cl_list_single_graphic_pane_t1

0x64fe,	// (0x0006780c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x64fe,	// (0x0006780c) hc_cl_list_double_graphic_heading_pane_g1

0x6533,	// (0x00067841) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6533,	// (0x00067841) hc_cl_list_double_graphic_heading_pane_g2

0x6547,	// (0x00067855) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6547,	// (0x00067855) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9aa,	// (0x00070cb8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9aa,	// (0x00070cb8) hc_cl_list_double_graphic_heading_pane_g

0x655b,	// (0x00067869) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x655b,	// (0x00067869) hc_cl_list_double_graphic_heading_pane_t1

0x6570,	// (0x0006787e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6570,	// (0x0006787e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9b1,	// (0x00070cbf) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9b1,	// (0x00070cbf) hc_cl_list_double_graphic_heading_pane_t

0xa5fb,	// (0x0006b909) vid4_progress_pane_g1

0xa60b,	// (0x0006b919) vid4_progress_pane_g2

0x6585,	// (0x00067893) vid4_progress_pane_g3

0xa61b,	// (0x0006b929) vid4_progress_pane_g4

0x0004,

0xf9b6,	// (0x00070cc4) vid4_progress_pane_g

0x6597,	// (0x000678a5) vid4_progress_pane_t1

0xa633,	// (0x0006b941) vid4_progress_pane_t2

0x0002,

0xf9c1,	// (0x00070ccf) vid4_progress_pane_t

0x65af,	// (0x000678bd) wait_bar_pane_cp07

0xe6f3,	// (0x0006fa01) blid_firmament_pane_ParamLimits

0xe736,	// (0x0006fa44) popup_blid_sat_info2_window_g1

0xe75a,	// (0x0006fa68) popup_blid_sat_info2_window_t3

0xe768,	// (0x0006fa76) popup_blid_sat_info2_window_t4

0xe776,	// (0x0006fa84) popup_blid_sat_info2_window_t5

0xe784,	// (0x0006fa92) popup_blid_sat_info2_window_t6

0xe794,	// (0x0006faa2) popup_blid_sat_info2_window_t7

0xe7a2,	// (0x0006fab0) popup_blid_sat_info2_window_t8

0xe7b0,	// (0x0006fabe) popup_blid_sat_info2_window_t9

0xe7be,	// (0x0006facc) popup_blid_sat_info2_window_t10

0xe87f,	// (0x0006fb8d) aid_firma_cardinal_ParamLimits

0xe893,	// (0x0006fba1) blid_firmament_pane_t1_ParamLimits

0xe8aa,	// (0x0006fbb8) blid_firmament_pane_t2_ParamLimits

0xe8c1,	// (0x0006fbcf) blid_firmament_pane_t3_ParamLimits

0xe8d8,	// (0x0006fbe6) blid_firmament_pane_t4_ParamLimits

0xf606,	// (0x00070914) blid_firmament_pane_t_ParamLimits

0xe8ef,	// (0x0006fbfd) blid_sat_info_pane_ParamLimits

0x9e77,	// (0x0006b185) main_cam_set_pane_ParamLimits

0x451b,	// (0x00065829) aid_size_cell_colour_35_ParamLimits

0x453b,	// (0x00065849) aid_size_cell_colour_112_ParamLimits

0x455b,	// (0x00065869) aid_size_cell_effect_ParamLimits

0xd2d6,	// (0x0006e5e4) bg_tb_trans_pane_cp02_ParamLimits

0xc73b,	// (0x0006da49) heading_imed_pane_ParamLimits

0x457b,	// (0x00065889) listscroll_imed_pane_ParamLimits

0xdbe0,	// (0x0006eeee) popup_call2_audio_first_window_g5_ParamLimits

0xdbe0,	// (0x0006eeee) popup_call2_audio_first_window_g5

0x4965,	// (0x00065c73) aid_size_touch_image3_arrow_left_ParamLimits

0x4965,	// (0x00065c73) aid_size_touch_image3_arrow_left

0x4991,	// (0x00065c9f) aid_size_touch_image3_arrow_right_ParamLimits

0x4991,	// (0x00065c9f) aid_size_touch_image3_arrow_right

0xa648,	// (0x0006b956) vid4_progress_pane_t3

0x4720,	// (0x00065a2e) main_hwr_training_symbol_option_pane_ParamLimits

0x4720,	// (0x00065a2e) main_hwr_training_symbol_option_pane

0xefa8,	// (0x000702b6) popup_hwr_training_preview_window_ParamLimits

0xefa8,	// (0x000702b6) popup_hwr_training_preview_window

0x4740,	// (0x00065a4e) hwr_training_navi_pane_g5_ParamLimits

0x4740,	// (0x00065a4e) hwr_training_navi_pane_g5

0x5204,	// (0x00066512) popup_char_count_window

0x9e77,	// (0x0006b185) bg_popup_sub_pane_cp20_ParamLimits

0x5c55,	// (0x00066f63) list_vitu2_match_list_pane_ParamLimits

0x5c61,	// (0x00066f6f) vitu2_page_scroll_pane_ParamLimits

0x5c61,	// (0x00066f6f) vitu2_page_scroll_pane

0x65f8,	// (0x00067906) list_single_hwr_training_symbol_option_pane_ParamLimits

0x65f8,	// (0x00067906) list_single_hwr_training_symbol_option_pane

0x660b,	// (0x00067919) list_single_hwr_training_symbol_option_pane_g1

0x6613,	// (0x00067921) list_single_hwr_training_symbol_option_pane_t1

0x6621,	// (0x0006792f) bg_button_pane_cp023

0x662a,	// (0x00067938) bg_button_pane_cp024

0x665d,	// (0x0006796b) vitu2_page_scroll_pane_g1

0x6665,	// (0x00067973) vitu2_page_scroll_pane_g2

0x0001,

0xf9c8,	// (0x00070cd6) vitu2_page_scroll_pane_g

0x666d,	// (0x0006797b) vitu2_page_scroll_pane_t1

0xe669,	// (0x0006f977) popup_char_count_window_g1

0x667c,	// (0x0006798a) popup_char_count_window_g2

0x6685,	// (0x00067993) popup_char_count_window_g3

0x0002,

0xf9cd,	// (0x00070cdb) popup_char_count_window_g

0x668e,	// (0x0006799c) popup_char_count_window_t1

0x9e85,	// (0x0006b193) main_vded2_pane

0xee06,	// (0x00070114) aid_size_cell_imed_line

0xee10,	// (0x0007011e) grid_imed_line_width_pane

0xa547,	// (0x0006b855) vid4_indicators_pane_g4

0x669c,	// (0x000679aa) cell_imed_line_width_pane_ParamLimits

0x669c,	// (0x000679aa) cell_imed_line_width_pane

0x66b0,	// (0x000679be) cell_imed_line_width_pane_g1

0x66b9,	// (0x000679c7) cell_imed_line_width_pane_g2

0x0001,

0xf9d4,	// (0x00070ce2) cell_imed_line_width_pane_g

0x66c1,	// (0x000679cf) main_vded2_pane_g1_ParamLimits

0x66c1,	// (0x000679cf) main_vded2_pane_g1

0x66d7,	// (0x000679e5) main_vded2_pane_g2_ParamLimits

0x66d7,	// (0x000679e5) main_vded2_pane_g2

0x0001,

0xf9d9,	// (0x00070ce7) main_vded2_pane_g_ParamLimits

0xf9d9,	// (0x00070ce7) main_vded2_pane_g

0x66e9,	// (0x000679f7) vded2_slider_pane_ParamLimits

0x66e9,	// (0x000679f7) vded2_slider_pane

0x66f9,	// (0x00067a07) aid_size_touch_vded2_end

0x6703,	// (0x00067a11) aid_size_touch_vded2_playhead

0x670d,	// (0x00067a1b) aid_size_touch_vded2_start

0x6715,	// (0x00067a23) vded2_slider_bg_pane

0x671e,	// (0x00067a2c) vded2_slider_pane_g1

0x6727,	// (0x00067a35) vded2_slider_pane_g2

0x672f,	// (0x00067a3d) vded2_slider_pane_g3

0x0002,

0xf9de,	// (0x00070cec) vded2_slider_pane_g

0x673a,	// (0x00067a48) vded2_slider_bg_pane_g1

0x6743,	// (0x00067a51) vded2_slider_bg_pane_g2

0x674c,	// (0x00067a5a) vded2_slider_bg_pane_g3

0x0002,

0xf9e5,	// (0x00070cf3) vded2_slider_bg_pane_g

0x2b32,	// (0x00063e40) aid_postcard_touch_down_pane_ParamLimits

0x2b32,	// (0x00063e40) aid_postcard_touch_down_pane

0x2b48,	// (0x00063e56) aid_postcard_touch_up_pane_ParamLimits

0x2b48,	// (0x00063e56) aid_postcard_touch_up_pane

0x9e85,	// (0x0006b193) main_blid2_pane

0xa01c,	// (0x0006b32a) popup_blid2_search_window

0xb8ce,	// (0x0006cbdc) blid2_gps_pane

0xb8ce,	// (0x0006cbdc) blid2_navig_pane

0xb8ce,	// (0x0006cbdc) blid2_search_pane

0xb8ce,	// (0x0006cbdc) blid2_tripm_pane

0x6755,	// (0x00067a63) blid2_search_pane_g1_ParamLimits

0x6755,	// (0x00067a63) blid2_search_pane_g1

0x676f,	// (0x00067a7d) blid2_search_pane_t1_ParamLimits

0x676f,	// (0x00067a7d) blid2_search_pane_t1

0x6781,	// (0x00067a8f) aid_size_cell_blid2_gps_ParamLimits

0x6781,	// (0x00067a8f) aid_size_cell_blid2_gps

0x6799,	// (0x00067aa7) blid2_gps_pane_g1_ParamLimits

0x6799,	// (0x00067aa7) blid2_gps_pane_g1

0x67ad,	// (0x00067abb) grid_blid2_satellite_pane_ParamLimits

0x67ad,	// (0x00067abb) grid_blid2_satellite_pane

0x67c7,	// (0x00067ad5) blid2_navig_pane_g1_ParamLimits

0x67c7,	// (0x00067ad5) blid2_navig_pane_g1

0x67d3,	// (0x00067ae1) blid2_navig_pane_t1_ParamLimits

0x67d3,	// (0x00067ae1) blid2_navig_pane_t1

0x67ee,	// (0x00067afc) blid2_navig_pane_t2_ParamLimits

0x67ee,	// (0x00067afc) blid2_navig_pane_t2

0x0001,

0xf9ec,	// (0x00070cfa) blid2_navig_pane_t_ParamLimits

0xf9ec,	// (0x00070cfa) blid2_navig_pane_t

0x6809,	// (0x00067b17) blid2_navig_ring_pane_ParamLimits

0x6809,	// (0x00067b17) blid2_navig_ring_pane

0x6822,	// (0x00067b30) blid2_speed_pane_ParamLimits

0x6822,	// (0x00067b30) blid2_speed_pane

0x682e,	// (0x00067b3c) blid2_tripm_pane_g1_ParamLimits

0x682e,	// (0x00067b3c) blid2_tripm_pane_g1

0x6847,	// (0x00067b55) blid2_tripm_pane_g2_ParamLimits

0x6847,	// (0x00067b55) blid2_tripm_pane_g2

0x685b,	// (0x00067b69) blid2_tripm_pane_g3_ParamLimits

0x685b,	// (0x00067b69) blid2_tripm_pane_g3

0x686f,	// (0x00067b7d) blid2_tripm_pane_g4_ParamLimits

0x686f,	// (0x00067b7d) blid2_tripm_pane_g4

0x6883,	// (0x00067b91) blid2_tripm_pane_g5_ParamLimits

0x6883,	// (0x00067b91) blid2_tripm_pane_g5

0x0005,

0xf9f1,	// (0x00070cff) blid2_tripm_pane_g_ParamLimits

0xf9f1,	// (0x00070cff) blid2_tripm_pane_g

0x68a9,	// (0x00067bb7) blid2_tripm_pane_t1_ParamLimits

0x68a9,	// (0x00067bb7) blid2_tripm_pane_t1

0x68c4,	// (0x00067bd2) blid2_tripm_pane_t2_ParamLimits

0x68c4,	// (0x00067bd2) blid2_tripm_pane_t2

0x68dd,	// (0x00067beb) blid2_tripm_pane_t3_ParamLimits

0x68dd,	// (0x00067beb) blid2_tripm_pane_t3

0x0003,

0xf9fe,	// (0x00070d0c) blid2_tripm_pane_t_ParamLimits

0xf9fe,	// (0x00070d0c) blid2_tripm_pane_t

0x6924,	// (0x00067c32) cell_blid2_satellite_pane_ParamLimits

0x6924,	// (0x00067c32) cell_blid2_satellite_pane

0x6942,	// (0x00067c50) cell_blid2_satellite_pane_g1

0x694b,	// (0x00067c59) cell_blid2_satellite_pane_t1

0xc01b,	// (0x0006d329) blid2_speed_pane_g1

0x6959,	// (0x00067c67) blid2_speed_pane_t1

0x6967,	// (0x00067c75) blid2_speed_pane_t2

0x0001,

0xfa07,	// (0x00070d15) blid2_speed_pane_t

0xc01b,	// (0x0006d329) blid2_navig_ring_pane_g1

0x6975,	// (0x00067c83) blid2_navig_ring_pane_g2

0x697d,	// (0x00067c8b) blid2_navig_ring_pane_g3

0x6985,	// (0x00067c93) blid2_navig_ring_pane_g4

0x698d,	// (0x00067c9b) blid2_navig_ring_pane_g5

0x0004,

0xfa0c,	// (0x00070d1a) blid2_navig_ring_pane_g

0xb8ce,	// (0x0006cbdc) bg_popup_window_pane_cp011

0x6995,	// (0x00067ca3) popup_blid2_search_window_g1

0x699d,	// (0x00067cab) popup_blid2_search_window_t1

0x69ab,	// (0x00067cb9) popup_blid2_search_window_t2

0x0001,

0xfa17,	// (0x00070d25) popup_blid2_search_window_t

0xc35a,	// (0x0006d668) main_browser_pane_g1

0xc079,	// (0x0006d387) main_browser_pane_ParamLimits

0x9e77,	// (0x0006b185) bg_button_pane_cp011_ParamLimits

0x529e,	// (0x000665ac) cell_vitu2_function_pane_g1_ParamLimits

0xd2d6,	// (0x0006e5e4) bg_popup_sub_pane_cp22_ParamLimits

0x5e1a,	// (0x00067128) input_focus_pane_cp08_ParamLimits

0x5e35,	// (0x00067143) popup_vitu2_query_button_pane_ParamLimits

0x5e35,	// (0x00067143) popup_vitu2_query_button_pane

0x5e44,	// (0x00067152) popup_vitu2_query_input_button_pane

0x5e4c,	// (0x0006715a) popup_vitu2_query_window_g1_ParamLimits

0x5e58,	// (0x00067166) popup_vitu2_query_window_g2_ParamLimits

0xf918,	// (0x00070c26) popup_vitu2_query_window_g_ParamLimits

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp026

0x69b9,	// (0x00067cc7) popup_vitu2_query_input_button_pane_g1

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp025

0x69c1,	// (0x00067ccf) popup_vitu2_query_button_pane_t1

0x39da,	// (0x00064ce8) main_mp3_pane_t6

0x39e8,	// (0x00064cf6) popup_slider_window_cp01

0xa4ab,	// (0x0006b7b9) cam4_battery_pane

0xa504,	// (0x0006b812) cam4_battery_pane_cp02

0xa5f3,	// (0x0006b901) cam4_battery_pane_cp01

0xa5f3,	// (0x0006b901) cam4_battery_pane_cp03

0x394e,	// (0x00064c5c) cam4_battery_pane_g1

0xc01b,	// (0x0006d329) cam4_battery_pane_g2

0x0001,

0xfa1c,	// (0x00070d2a) cam4_battery_pane_g

0xe7cc,	// (0x0006fada) popup_blid_sat_info2_window_t11

0xd046,	// (0x0006e354) aid_size_touch_mv_arrow_left_ParamLimits

0xd06f,	// (0x0006e37d) aid_size_touch_mv_arrow_right_ParamLimits

0xd0cd,	// (0x0006e3db) navi_pane_g1_ParamLimits

0xd0d9,	// (0x0006e3e7) navi_pane_g2_ParamLimits

0xd107,	// (0x0006e415) navi_pane_g3_ParamLimits

0xf32f,	// (0x0007063d) navi_pane_g_ParamLimits

0x276b,	// (0x00063a79) navi_pane_mv_t1_ParamLimits

0x4587,	// (0x00065895) grid_imed_effect_pane_ParamLimits

0x14f4,	// (0x00062802) aid_placing_vt_slider_lsc

0xc2a9,	// (0x0006d5b7) aid_placing_vt_slider_prt

0xbf68,	// (0x0006d276) bg_tb_trans_pane_cp01_ParamLimits

0xea4c,	// (0x0006fd5a) popup_image_details_window_g1_ParamLimits

0xea5f,	// (0x0006fd6d) popup_image_details_window_g2_ParamLimits

0xea74,	// (0x0006fd82) popup_image_details_window_g3_ParamLimits

0xea74,	// (0x0006fd82) popup_image_details_window_g3

0xf646,	// (0x00070954) popup_image_details_window_g_ParamLimits

0xea88,	// (0x0006fd96) popup_image_details_window_t1_ParamLimits

0xea9a,	// (0x0006fda8) popup_image_details_window_t2_ParamLimits

0xeab3,	// (0x0006fdc1) popup_image_details_window_t3_ParamLimits

0xeac7,	// (0x0006fdd5) popup_image_details_window_t4_ParamLimits

0xeae2,	// (0x0006fdf0) popup_image_details_window_t5_ParamLimits

0xf64d,	// (0x0007095b) popup_image_details_window_t_ParamLimits

0x648c,	// (0x0006779a) cl_header_name_pane_ParamLimits

0x648c,	// (0x0006779a) cl_header_name_pane

0x69cf,	// (0x00067cdd) cl_header_name_pane_t1_ParamLimits

0x69cf,	// (0x00067cdd) cl_header_name_pane_t1

0x69f0,	// (0x00067cfe) cl_header_name_pane_t2_ParamLimits

0x69f0,	// (0x00067cfe) cl_header_name_pane_t2

0x6a32,	// (0x00067d40) cl_header_name_pane_t3_ParamLimits

0x6a32,	// (0x00067d40) cl_header_name_pane_t3

0x0002,

0xfa21,	// (0x00070d2f) cl_header_name_pane_t_ParamLimits

0xfa21,	// (0x00070d2f) cl_header_name_pane_t

0xd196,	// (0x0006e4a4) navi_pane_mv_g2_ParamLimits

0x519f,	// (0x000664ad) field_vitu2_entry_pane_g1_ParamLimits

0x51ab,	// (0x000664b9) field_vitu2_entry_pane_g2_ParamLimits

0xd2b4,	// (0x0006e5c2) field_vitu2_entry_pane_g3_ParamLimits

0xd2b4,	// (0x0006e5c2) field_vitu2_entry_pane_g3

0xf821,	// (0x00070b2f) field_vitu2_entry_pane_g_ParamLimits

0x521a,	// (0x00066528) cell_vitu2_itu_pane_g1_ParamLimits

0x5232,	// (0x00066540) cell_vitu2_itu_pane_g2_ParamLimits

0x5232,	// (0x00066540) cell_vitu2_itu_pane_g2

0x0001,

0xf82d,	// (0x00070b3b) cell_vitu2_itu_pane_g_ParamLimits

0xf82d,	// (0x00070b3b) cell_vitu2_itu_pane_g

0x9e77,	// (0x0006b185) bg_vkb2_func_pane_cp05_ParamLimits

0x9e77,	// (0x0006b185) bg_vkb2_func_pane_cp05

0x9e77,	// (0x0006b185) bg_vkb2_func_pane_cp03

0x9e77,	// (0x0006b185) bg_vkb2_func_pane_cp04

0x9e77,	// (0x0006b185) bg_vkb2_func_pane_cp10_ParamLimits

0x9e77,	// (0x0006b185) bg_vkb2_func_pane_cp10

0x63e8,	// (0x000676f6) bg_vkb2_func_pane_cp08

0x63c1,	// (0x000676cf) bg_vkb2_func_pane_cp06

0x63cd,	// (0x000676db) bg_vkb2_func_pane_cp07

0x6633,	// (0x00067941) bg_vkb2_func_pane_cp11_ParamLimits

0x6633,	// (0x00067941) bg_vkb2_func_pane_cp11

0x6648,	// (0x00067956) bg_vkb2_func_pane_cp12_ParamLimits

0x6648,	// (0x00067956) bg_vkb2_func_pane_cp12

0xb8ce,	// (0x0006cbdc) bg_vkb2_func_pane_cp09

0x52bc,	// (0x000665ca) bg_vkb2_func_pane_g1

0xc46b,	// (0x0006d779) bg_vkb2_func_pane_g2

0x52c4,	// (0x000665d2) bg_vkb2_func_pane_g3

0x52cc,	// (0x000665da) bg_vkb2_func_pane_g4

0x5c6d,	// (0x00066f7b) bg_vkb2_func_pane_g5

0x52e4,	// (0x000665f2) bg_vkb2_func_pane_g6

0x52ec,	// (0x000665fa) bg_vkb2_func_pane_g7

0x52dc,	// (0x000665ea) bg_vkb2_func_pane_g8

0xc44b,	// (0x0006d759) bg_vkb2_func_pane_g9

0x0008,

0xfa28,	// (0x00070d36) bg_vkb2_func_pane_g

0x6897,	// (0x00067ba5) blid2_tripm_pane_g6_ParamLimits

0x6897,	// (0x00067ba5) blid2_tripm_pane_g6

0x4883,	// (0x00065b91) mp4_progress_pane_g1

0x6910,	// (0x00067c1e) blid2_tripm_values_pane_ParamLimits

0x6910,	// (0x00067c1e) blid2_tripm_values_pane

0x6a63,	// (0x00067d71) blid2_tripm_values_pane_t1

0x6a71,	// (0x00067d7f) blid2_tripm_values_pane_t2

0x6a7f,	// (0x00067d8d) blid2_tripm_values_pane_t3

0x6a8d,	// (0x00067d9b) blid2_tripm_values_pane_t4

0x6a9b,	// (0x00067da9) blid2_tripm_values_pane_t5

0x6aa9,	// (0x00067db7) blid2_tripm_values_pane_t6

0x6ab7,	// (0x00067dc5) blid2_tripm_values_pane_t7

0x6ac5,	// (0x00067dd3) blid2_tripm_values_pane_t8

0x6ad3,	// (0x00067de1) blid2_tripm_values_pane_t9

0x0008,

0xfa3b,	// (0x00070d49) blid2_tripm_values_pane_t

0x1536,	// (0x00062844) call_video_pane_t1_ParamLimits

0x1554,	// (0x00062862) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x000704eb) call_video_pane_t_ParamLimits

0x2a3b,	// (0x00063d49) msg_header_pane_g1_ParamLimits

0xd3a2,	// (0x0006e6b0) msg_header_pane_g2_ParamLimits

0xd3a2,	// (0x0006e6b0) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x000706db) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x000706db) msg_header_pane_g

0xc079,	// (0x0006d387) main_clock2_pane_ParamLimits

0x4288,	// (0x00065596) grid_clock2_toolbar_pane_ParamLimits

0x4288,	// (0x00065596) grid_clock2_toolbar_pane

0x4288,	// (0x00065596) listscroll_clock2_pane_ParamLimits

0x4288,	// (0x00065596) listscroll_clock2_pane

0x436c,	// (0x0006567a) main_clock2_pane_t3_ParamLimits

0x436c,	// (0x0006567a) main_clock2_pane_t3

0x4390,	// (0x0006569e) main_clock2_pane_t4_ParamLimits

0x4390,	// (0x0006569e) main_clock2_pane_t4

0x6ae1,	// (0x00067def) cell_clock2_toolbar_pane

0x6ae9,	// (0x00067df7) cell_clock2_toolbar_pane_cp01

0x6ae9,	// (0x00067df7) cell_clock2_toolbar_pane_cp02

0x6af1,	// (0x00067dff) cell_clock2_toolbar_pane_cp03

0x6af9,	// (0x00067e07) list_clock2_pane

0xcfbc,	// (0x0006e2ca) scroll_pane_cp10

0x6b01,	// (0x00067e0f) list_single_clock2_pane_ParamLimits

0x6b01,	// (0x00067e0f) list_single_clock2_pane

0xc252,	// (0x0006d560) list_highlight_pane_cp08

0x6b0e,	// (0x00067e1c) list_single_clock2_pane_t1

0x6b1c,	// (0x00067e2a) list_single_clock2_pane_t2

0x0001,

0xfa4e,	// (0x00070d5c) list_single_clock2_pane_t

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp10

0x6b2a,	// (0x00067e38) cell_clock2_toolbar_pane_g1

0x2abe,	// (0x00063dcc) aid_main_viewer_pane_g1_ParamLimits

0x2abe,	// (0x00063dcc) aid_main_viewer_pane_g1

0x2acc,	// (0x00063dda) aid_main_viewer_pane_g2_ParamLimits

0x2acc,	// (0x00063dda) aid_main_viewer_pane_g2

0x2ada,	// (0x00063de8) aid_main_viewer_pane_g3_ParamLimits

0x2ada,	// (0x00063de8) aid_main_viewer_pane_g3

0x2ae9,	// (0x00063df7) aid_main_viewer_pane_g4_ParamLimits

0x2ae9,	// (0x00063df7) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x000706ec) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x000706ec) aid_main_viewer_pane_g

0x338d,	// (0x0006469b) main_calc_pane_ParamLimits

0x33b3,	// (0x000646c1) main_dialer2_pane_ParamLimits

0x9e85,	// (0x0006b193) main_cam6_pane

0x9e85,	// (0x0006b193) main_vid6_pane

0x4294,	// (0x000655a2) listscroll_gen_pane_cp06_ParamLimits

0x4294,	// (0x000655a2) listscroll_gen_pane_cp06

0x43b3,	// (0x000656c1) main_clock2_pane_t5_ParamLimits

0x43b3,	// (0x000656c1) main_clock2_pane_t5

0x4411,	// (0x0006571f) aid_call2_pane_cp10_ParamLimits

0x4423,	// (0x00065731) aid_call_pane_cp10_ParamLimits

0xd03a,	// (0x0006e348) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd03a,	// (0x0006e348) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4435,	// (0x00065743) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4435,	// (0x00065743) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd03a,	// (0x0006e348) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf702,	// (0x00070a10) popup_clock_analogue_window_cp10_g_ParamLimits

0x444b,	// (0x00065759) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4949,	// (0x00065c57) cell_dialer2_keypad_pane_g2_ParamLimits

0x4949,	// (0x00065c57) cell_dialer2_keypad_pane_g2

0x0001,

0xf7c0,	// (0x00070ace) cell_dialer2_keypad_pane_g_ParamLimits

0xf7c0,	// (0x00070ace) cell_dialer2_keypad_pane_g

0xc025,	// (0x0006d333) cell_dialer2_keypad_pane_t1

0x56df,	// (0x000669ed) main_cset_text2_pane_ParamLimits

0x56df,	// (0x000669ed) main_cset_text2_pane

0x62ba,	// (0x000675c8) area_vitu2_query_pane_g1_ParamLimits

0x62c6,	// (0x000675d4) area_vitu2_query_pane_g2_ParamLimits

0xf96b,	// (0x00070c79) area_vitu2_query_pane_g_ParamLimits

0x639d,	// (0x000676ab) area_vitu2_query_pane_t7_ParamLimits

0x639d,	// (0x000676ab) area_vitu2_query_pane_t7

0x63c1,	// (0x000676cf) bg_button_pane_cp018_ParamLimits

0x63cd,	// (0x000676db) bg_button_pane_cp021_ParamLimits

0x63d9,	// (0x000676e7) bg_button_pane_cp022_ParamLimits

0x63e8,	// (0x000676f6) bg_vkb2_func_pane_cp08_ParamLimits

0x63c1,	// (0x000676cf) bg_vkb2_func_pane_cp06_ParamLimits

0x63cd,	// (0x000676db) bg_vkb2_func_pane_cp07_ParamLimits

0x63f8,	// (0x00067706) input_focus_pane_cp09_ParamLimits

0x6b32,	// (0x00067e40) cam6_autofocus_pane_ParamLimits

0x6b32,	// (0x00067e40) cam6_autofocus_pane

0x6b3e,	// (0x00067e4c) cam6_image_uncrop_pane_ParamLimits

0x6b3e,	// (0x00067e4c) cam6_image_uncrop_pane

0x6b4e,	// (0x00067e5c) cam6_indi_pane_ParamLimits

0x6b4e,	// (0x00067e5c) cam6_indi_pane

0x6b64,	// (0x00067e72) cam6_mode_pane_ParamLimits

0x6b64,	// (0x00067e72) cam6_mode_pane

0x6b76,	// (0x00067e84) cam6_timer_pane_ParamLimits

0x6b76,	// (0x00067e84) cam6_timer_pane

0x6b82,	// (0x00067e90) cam6_zoom_pane_ParamLimits

0x6b82,	// (0x00067e90) cam6_zoom_pane

0x6b8f,	// (0x00067e9d) cam6_mode_pane_g1_ParamLimits

0x6b8f,	// (0x00067e9d) cam6_mode_pane_g1

0x6b9f,	// (0x00067ead) cam6_mode_pane_g2_ParamLimits

0x6b9f,	// (0x00067ead) cam6_mode_pane_g2

0x6baf,	// (0x00067ebd) cam6_mode_pane_g3_ParamLimits

0x6baf,	// (0x00067ebd) cam6_mode_pane_g3

0x6bbf,	// (0x00067ecd) cam6_mode_pane_g4_ParamLimits

0x6bbf,	// (0x00067ecd) cam6_mode_pane_g4

0x0003,

0xfa53,	// (0x00070d61) cam6_mode_pane_g_ParamLimits

0xfa53,	// (0x00070d61) cam6_mode_pane_g

0xeb8f,	// (0x0006fe9d) bg_tb_trans_pane_cp08_ParamLimits

0xeb8f,	// (0x0006fe9d) bg_tb_trans_pane_cp08

0x6bcf,	// (0x00067edd) cam6_battery_pane_ParamLimits

0x6bcf,	// (0x00067edd) cam6_battery_pane

0x6be5,	// (0x00067ef3) cam6_indi_pane_g1_ParamLimits

0x6be5,	// (0x00067ef3) cam6_indi_pane_g1

0x6bf7,	// (0x00067f05) cam6_indi_pane_g2_ParamLimits

0x6bf7,	// (0x00067f05) cam6_indi_pane_g2

0x6c09,	// (0x00067f17) cam6_indi_pane_g3_ParamLimits

0x6c09,	// (0x00067f17) cam6_indi_pane_g3

0x0002,

0xfa5c,	// (0x00070d6a) cam6_indi_pane_g_ParamLimits

0xfa5c,	// (0x00070d6a) cam6_indi_pane_g

0x6c1b,	// (0x00067f29) cam6_indi_pane_t1_ParamLimits

0x6c1b,	// (0x00067f29) cam6_indi_pane_t1

0x4f68,	// (0x00066276) cam6_autofocus_pane_g1

0x4f60,	// (0x0006626e) cam6_autofocus_pane_g2

0x4f78,	// (0x00066286) cam6_autofocus_pane_g3

0x4f70,	// (0x0006627e) cam6_autofocus_pane_g4

0x0003,

0xfa63,	// (0x00070d71) cam6_autofocus_pane_g

0xa66b,	// (0x0006b979) cam6_timer_pane_g1

0xa673,	// (0x0006b981) cam6_timer_pane_t1

0xa681,	// (0x0006b98f) cam6_zoom_cont_pane

0xa689,	// (0x0006b997) cam6_zoom_pane_g1

0xa692,	// (0x0006b9a0) cam6_zoom_pane_g2

0x6c41,	// (0x00067f4f) cam6_zoom_pane_g3

0x0002,

0xfa6c,	// (0x00070d7a) cam6_zoom_pane_g

0xc01b,	// (0x0006d329) cam6_battery_pane_g1

0xc01b,	// (0x0006d329) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x000703bd) cam6_battery_pane_g

0xa689,	// (0x0006b997) cam6_zoom_cont_pane_g1

0xa692,	// (0x0006b9a0) cam6_zoom_cont_pane_g2

0xa69b,	// (0x0006b9a9) cam6_zoom_cont_pane_g3

0x0002,

0xfa73,	// (0x00070d81) cam6_zoom_cont_pane_g

0x6c5c,	// (0x00067f6a) cam6_mode_pane_cp_ParamLimits

0x6c5c,	// (0x00067f6a) cam6_mode_pane_cp

0x6c6e,	// (0x00067f7c) cam6_zoom_pane_cp_ParamLimits

0x6c6e,	// (0x00067f7c) cam6_zoom_pane_cp

0x6c7a,	// (0x00067f88) vid6_image_uncrop_cif_pane_ParamLimits

0x6c7a,	// (0x00067f88) vid6_image_uncrop_cif_pane

0x6c8a,	// (0x00067f98) vid6_image_uncrop_nhd_pane_ParamLimits

0x6c8a,	// (0x00067f98) vid6_image_uncrop_nhd_pane

0x6c99,	// (0x00067fa7) vid6_image_uncrop_vga_pane_ParamLimits

0x6c99,	// (0x00067fa7) vid6_image_uncrop_vga_pane

0x6ca8,	// (0x00067fb6) vid6_image_uncrop_wvga_pane_ParamLimits

0x6ca8,	// (0x00067fb6) vid6_image_uncrop_wvga_pane

0x6cb7,	// (0x00067fc5) vid6_indi_pane_ParamLimits

0x6cb7,	// (0x00067fc5) vid6_indi_pane

0xeb8f,	// (0x0006fe9d) bg_tb_trans_pane_cp09_ParamLimits

0xeb8f,	// (0x0006fe9d) bg_tb_trans_pane_cp09

0xa6b3,	// (0x0006b9c1) cam6_battery_pane_cp_ParamLimits

0xa6b3,	// (0x0006b9c1) cam6_battery_pane_cp

0xa6bf,	// (0x0006b9cd) vid6_indi_pane_g1_ParamLimits

0xa6bf,	// (0x0006b9cd) vid6_indi_pane_g1

0xa6d1,	// (0x0006b9df) vid6_indi_pane_g2_ParamLimits

0xa6d1,	// (0x0006b9df) vid6_indi_pane_g2

0xa6e3,	// (0x0006b9f1) vid6_indi_pane_g3_ParamLimits

0xa6e3,	// (0x0006b9f1) vid6_indi_pane_g3

0xa6f8,	// (0x0006ba06) vid6_indi_pane_g4_ParamLimits

0xa6f8,	// (0x0006ba06) vid6_indi_pane_g4

0xa70d,	// (0x0006ba1b) vid6_indi_pane_g5_ParamLimits

0xa70d,	// (0x0006ba1b) vid6_indi_pane_g5

0x0004,

0xfa7a,	// (0x00070d88) vid6_indi_pane_g_ParamLimits

0xfa7a,	// (0x00070d88) vid6_indi_pane_g

0xa727,	// (0x0006ba35) vid6_indi_pane_t1_ParamLimits

0xa727,	// (0x0006ba35) vid6_indi_pane_t1

0xa73d,	// (0x0006ba4b) vid6_indi_pane_t2_ParamLimits

0xa73d,	// (0x0006ba4b) vid6_indi_pane_t2

0xa765,	// (0x0006ba73) vid6_indi_pane_t3_ParamLimits

0xa765,	// (0x0006ba73) vid6_indi_pane_t3

0xa78d,	// (0x0006ba9b) vid6_indi_pane_t4_ParamLimits

0xa78d,	// (0x0006ba9b) vid6_indi_pane_t4

0x0003,

0xfa85,	// (0x00070d93) vid6_indi_pane_t_ParamLimits

0xfa85,	// (0x00070d93) vid6_indi_pane_t

0xa7b1,	// (0x0006babf) wait_bar_pane_cp08

0x6ccf,	// (0x00067fdd) main_cset_text2_pane_t1_ParamLimits

0x6ccf,	// (0x00067fdd) main_cset_text2_pane_t1

0x6c4a,	// (0x00067f58) listscroll_gen_pane_cp06_t1_ParamLimits

0x6c4a,	// (0x00067f58) listscroll_gen_pane_cp06_t1

0x9e85,	// (0x0006b193) main_cam6_set_pane

0xa49d,	// (0x0006b7ab) bg_tb_trans_pane_cp06_ParamLimits

0xa4b3,	// (0x0006b7c1) cam4_indicators_pane_g1_ParamLimits

0xa4c4,	// (0x0006b7d2) cam4_indicators_pane_g2_ParamLimits

0xf7fd,	// (0x00070b0b) cam4_indicators_pane_g_ParamLimits

0xa4e2,	// (0x0006b7f0) cam4_indicators_pane_t1_ParamLimits

0x9e77,	// (0x0006b185) bg_tb_trans_pane_cp07_ParamLimits

0xa50e,	// (0x0006b81c) vid4_indicators_pane_g1_ParamLimits

0xa522,	// (0x0006b830) vid4_indicators_pane_g2_ParamLimits

0xa536,	// (0x0006b844) vid4_indicators_pane_g3_ParamLimits

0xa547,	// (0x0006b855) vid4_indicators_pane_g4_ParamLimits

0xf80f,	// (0x00070b1d) vid4_indicators_pane_g_ParamLimits

0xa565,	// (0x0006b873) vid4_indicators_pane_t1_ParamLimits

0xa5fb,	// (0x0006b909) vid4_progress_pane_g1_ParamLimits

0xa60b,	// (0x0006b919) vid4_progress_pane_g2_ParamLimits

0x6585,	// (0x00067893) vid4_progress_pane_g3_ParamLimits

0xa61b,	// (0x0006b929) vid4_progress_pane_g4_ParamLimits

0xf9b6,	// (0x00070cc4) vid4_progress_pane_g_ParamLimits

0x6597,	// (0x000678a5) vid4_progress_pane_t1_ParamLimits

0xa633,	// (0x0006b941) vid4_progress_pane_t2_ParamLimits

0xa648,	// (0x0006b956) vid4_progress_pane_t3_ParamLimits

0xf9c1,	// (0x00070ccf) vid4_progress_pane_t_ParamLimits

0x65af,	// (0x000678bd) wait_bar_pane_cp07_ParamLimits

0x6cec,	// (0x00067ffa) main_cam6_set_pane_g2_ParamLimits

0x6cec,	// (0x00067ffa) main_cam6_set_pane_g2

0x6d10,	// (0x0006801e) main_cset6_listscroll_pane_ParamLimits

0x6d10,	// (0x0006801e) main_cset6_listscroll_pane

0x6d30,	// (0x0006803e) main_cset6_slider_pane_ParamLimits

0x6d30,	// (0x0006803e) main_cset6_slider_pane

0x6d46,	// (0x00068054) main_cset6_text2_pane_ParamLimits

0x6d46,	// (0x00068054) main_cset6_text2_pane

0xa7c0,	// (0x0006bace) main_cset6_text_pane

0xa7c8,	// (0x0006bad6) main_cset_list_pane_copy1_ParamLimits

0xa7c8,	// (0x0006bad6) main_cset_list_pane_copy1

0xa7d8,	// (0x0006bae6) scroll_pane_cp028_copy1

0x6d54,	// (0x00068062) cset_list_set_pane_copy1

0x6d65,	// (0x00068073) aid_position_infowindow_above_copy1

0x6d6d,	// (0x0006807b) aid_position_infowindow_below_copy1

0x6d75,	// (0x00068083) cset_list_set_pane_g1_copy1

0x6d7d,	// (0x0006808b) cset_list_set_pane_g3_copy1_ParamLimits

0x6d7d,	// (0x0006808b) cset_list_set_pane_g3_copy1

0x6d8c,	// (0x0006809a) cset_list_set_pane_t1_copy1_ParamLimits

0x6d8c,	// (0x0006809a) cset_list_set_pane_t1_copy1

0xbf68,	// (0x0006d276) list_highlight_pane_cp021_copy1_ParamLimits

0xbf68,	// (0x0006d276) list_highlight_pane_cp021_copy1

0xa7e1,	// (0x0006baef) cset6_slider_pane_ParamLimits

0xa7e1,	// (0x0006baef) cset6_slider_pane

0xa80d,	// (0x0006bb1b) main_cset6_slider_pane_g1_ParamLimits

0xa80d,	// (0x0006bb1b) main_cset6_slider_pane_g1

0x6da1,	// (0x000680af) main_cset6_slider_pane_g2_ParamLimits

0x6da1,	// (0x000680af) main_cset6_slider_pane_g2

0xa835,	// (0x0006bb43) main_cset6_slider_pane_g3_ParamLimits

0xa835,	// (0x0006bb43) main_cset6_slider_pane_g3

0x6dc9,	// (0x000680d7) main_cset6_slider_pane_g4_ParamLimits

0x6dc9,	// (0x000680d7) main_cset6_slider_pane_g4

0x6dd5,	// (0x000680e3) main_cset6_slider_pane_g5_ParamLimits

0x6dd5,	// (0x000680e3) main_cset6_slider_pane_g5

0x57b2,	// (0x00066ac0) main_cset6_slider_pane_g7_ParamLimits

0x57b2,	// (0x00066ac0) main_cset6_slider_pane_g7

0x57be,	// (0x00066acc) main_cset6_slider_pane_g8_ParamLimits

0x57be,	// (0x00066acc) main_cset6_slider_pane_g8

0x57ca,	// (0x00066ad8) main_cset6_slider_pane_g9_ParamLimits

0x57ca,	// (0x00066ad8) main_cset6_slider_pane_g9

0x57d6,	// (0x00066ae4) main_cset6_slider_pane_g10_ParamLimits

0x57d6,	// (0x00066ae4) main_cset6_slider_pane_g10

0x57e2,	// (0x00066af0) main_cset6_slider_pane_g11_ParamLimits

0x57e2,	// (0x00066af0) main_cset6_slider_pane_g11

0x57ee,	// (0x00066afc) main_cset6_slider_pane_g12_ParamLimits

0x57ee,	// (0x00066afc) main_cset6_slider_pane_g12

0x57fa,	// (0x00066b08) main_cset6_slider_pane_g13_ParamLimits

0x57fa,	// (0x00066b08) main_cset6_slider_pane_g13

0x5806,	// (0x00066b14) main_cset6_slider_pane_g14_ParamLimits

0x5806,	// (0x00066b14) main_cset6_slider_pane_g14

0x6de1,	// (0x000680ef) main_cset6_slider_pane_g15_ParamLimits

0x6de1,	// (0x000680ef) main_cset6_slider_pane_g15

0x582a,	// (0x00066b38) main_cset6_slider_pane_g16_ParamLimits

0x582a,	// (0x00066b38) main_cset6_slider_pane_g16

0x5836,	// (0x00066b44) main_cset6_slider_pane_g17_ParamLimits

0x5836,	// (0x00066b44) main_cset6_slider_pane_g17

0x0011,

0xfa8e,	// (0x00070d9c) main_cset6_slider_pane_g_ParamLimits

0xfa8e,	// (0x00070d9c) main_cset6_slider_pane_g

0xa841,	// (0x0006bb4f) main_cset6_slider_pane_t1_ParamLimits

0xa841,	// (0x0006bb4f) main_cset6_slider_pane_t1

0x6e11,	// (0x0006811f) main_cset6_slider_pane_t2_ParamLimits

0x6e11,	// (0x0006811f) main_cset6_slider_pane_t2

0x6e3c,	// (0x0006814a) main_cset6_slider_pane_t3_ParamLimits

0x6e3c,	// (0x0006814a) main_cset6_slider_pane_t3

0x6e67,	// (0x00068175) main_cset6_slider_pane_t4_ParamLimits

0x6e67,	// (0x00068175) main_cset6_slider_pane_t4

0x6e92,	// (0x000681a0) main_cset6_slider_pane_t5_ParamLimits

0x6e92,	// (0x000681a0) main_cset6_slider_pane_t5

0xa882,	// (0x0006bb90) main_cset6_slider_pane_t7_ParamLimits

0xa882,	// (0x0006bb90) main_cset6_slider_pane_t7

0x6ebd,	// (0x000681cb) main_cset6_slider_pane_t8_ParamLimits

0x6ebd,	// (0x000681cb) main_cset6_slider_pane_t8

0x6ee1,	// (0x000681ef) main_cset6_slider_pane_t9_ParamLimits

0x6ee1,	// (0x000681ef) main_cset6_slider_pane_t9

0x6f05,	// (0x00068213) main_cset6_slider_pane_t10_ParamLimits

0x6f05,	// (0x00068213) main_cset6_slider_pane_t10

0x6f29,	// (0x00068237) main_cset6_slider_pane_t11_ParamLimits

0x6f29,	// (0x00068237) main_cset6_slider_pane_t11

0xa8b8,	// (0x0006bbc6) main_cset6_slider_pane_t14_ParamLimits

0xa8b8,	// (0x0006bbc6) main_cset6_slider_pane_t14

0xa8f1,	// (0x0006bbff) main_cset6_slider_pane_t15_ParamLimits

0xa8f1,	// (0x0006bbff) main_cset6_slider_pane_t15

0x000b,

0xfab3,	// (0x00070dc1) main_cset6_slider_pane_t_ParamLimits

0xfab3,	// (0x00070dc1) main_cset6_slider_pane_t

0x6f4d,	// (0x0006825b) cset_slider_pane_g1_copy1

0x6f56,	// (0x00068264) cset_slider_pane_g2_copy1

0x6f5f,	// (0x0006826d) cset_slider_pane_g3_copy1

0xb8ce,	// (0x0006cbdc) bg_popup_sub_pane_cp011_copy1

0xa92a,	// (0x0006bc38) main_cset_text_pane_g1_copy1

0x5f6d,	// (0x0006727b) main_cset_text_pane_t1_copy1

0x5f7b,	// (0x00067289) main_cset_text_pane_t2_copy1

0x5f89,	// (0x00067297) main_cset_text_pane_t3_copy1

0x5f97,	// (0x000672a5) main_cset_text_pane_t4_copy1

0x5fa5,	// (0x000672b3) main_cset_text_pane_t5_copy1

0xa932,	// (0x0006bc40) main_cset_text_pane_t6_copy1

0xa940,	// (0x0006bc4e) main_cset_text_pane_t7_copy1

0x6ccf,	// (0x00067fdd) main_cset_text2_pane_t1_copy1

0x9e77,	// (0x0006b185) main_ncimui_pane

0x35fd,	// (0x0006490b) popup_query_ncimui_window_ParamLimits

0x35fd,	// (0x0006490b) popup_query_ncimui_window

0xebe1,	// (0x0006feef) field_cale_ev2_pane_g4_ParamLimits

0xebe1,	// (0x0006feef) field_cale_ev2_pane_g4

0x482d,	// (0x00065b3b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x482d,	// (0x00065b3b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf797,	// (0x00070aa5) cell_video_dialer_keypad_pane_g_ParamLimits

0xf797,	// (0x00070aa5) cell_video_dialer_keypad_pane_g

0x4845,	// (0x00065b53) cell_video_dialer_keypad_pane_t1

0xb8ce,	// (0x0006cbdc) bg_popup_window_pane_cp012

0xe433,	// (0x0006f741) heading_pane_cp06

0xa96c,	// (0x0006bc7a) ncim_query_content_pane

0xb8ce,	// (0x0006cbdc) bg_popup_heading_pane_cp01

0xa974,	// (0x0006bc82) ncim_heading_pane_t1

0xa982,	// (0x0006bc90) ncim_indicator_popup_pane

0xa994,	// (0x0006bca2) ncim_query_button_pane

0xa9a8,	// (0x0006bcb6) ncim_query_content_pane_t1

0xa9ba,	// (0x0006bcc8) ncim_query_content_pane_t2

0x0005,

0xfaec,	// (0x00070dfa) ncim_query_content_pane_t

0xa9f4,	// (0x0006bd02) ncim_query_list_pane

0xaa06,	// (0x0006bd14) ncim_query_popup_pane

0xa982,	// (0x0006bc90) ncim_indicator_popup_pane_ParamLimits

0x70ae,	// (0x000683bc) ncim_query_content_pane_g1_ParamLimits

0x70ae,	// (0x000683bc) ncim_query_content_pane_g1

0xa9a8,	// (0x0006bcb6) ncim_query_content_pane_t1_ParamLimits

0xa9ba,	// (0x0006bcc8) ncim_query_content_pane_t2_ParamLimits

0x70ba,	// (0x000683c8) ncim_query_content_pane_t3_ParamLimits

0x70ba,	// (0x000683c8) ncim_query_content_pane_t3

0x70e2,	// (0x000683f0) ncim_query_content_pane_t4_ParamLimits

0x70e2,	// (0x000683f0) ncim_query_content_pane_t4

0x710a,	// (0x00068418) ncim_query_content_pane_t5_ParamLimits

0x710a,	// (0x00068418) ncim_query_content_pane_t5

0xa9cc,	// (0x0006bcda) ncim_query_content_pane_t6_ParamLimits

0xa9cc,	// (0x0006bcda) ncim_query_content_pane_t6

0xfaec,	// (0x00070dfa) ncim_query_content_pane_t_ParamLimits

0xa9f4,	// (0x0006bd02) ncim_query_list_pane_ParamLimits

0xaa06,	// (0x0006bd14) ncim_query_popup_pane_ParamLimits

0xaa1a,	// (0x0006bd28) wait_bar_pane_cp04

0xb8ce,	// (0x0006cbdc) input_focus_pane_cp011

0xaa22,	// (0x0006bd30) ncim_query_popup_pane_t1

0xaa30,	// (0x0006bd3e) ncim_list_query_list_pane_ParamLimits

0xaa30,	// (0x0006bd3e) ncim_list_query_list_pane

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp027

0xaa3d,	// (0x0006bd4b) ncim_query_button_pane_g1

0xb8ce,	// (0x0006cbdc) list_highlight_pane_cp012

0xaa47,	// (0x0006bd55) ncim_list_query_list_pane_g1

0xaa4f,	// (0x0006bd5d) ncim_list_query_list_pane_t1

0xa4d3,	// (0x0006b7e1) cam4_indicators_pane_g3_ParamLimits

0xa4d3,	// (0x0006b7e1) cam4_indicators_pane_g3

0xa553,	// (0x0006b861) vid4_indicators_pane_g5_ParamLimits

0xa553,	// (0x0006b861) vid4_indicators_pane_g5

0xa627,	// (0x0006b935) vid4_progress_pane_g5_ParamLimits

0xa627,	// (0x0006b935) vid4_progress_pane_g5

0x6f99,	// (0x000682a7) main_ncimui_pane_g1

0x7002,	// (0x00068310) ncimui_group_query_pane_ParamLimits

0x7002,	// (0x00068310) ncimui_group_query_pane

0x704a,	// (0x00068358) ncimui_list_pane_ParamLimits

0x704a,	// (0x00068358) ncimui_list_pane

0x7071,	// (0x0006837f) ncimui_text_pane_ParamLimits

0x7071,	// (0x0006837f) ncimui_text_pane

0x7132,	// (0x00068440) ncimui_text_pane_t1_ParamLimits

0x7132,	// (0x00068440) ncimui_text_pane_t1

0xaa5d,	// (0x0006bd6b) ncimui_list_single_graphic_pane_ParamLimits

0xaa5d,	// (0x0006bd6b) ncimui_list_single_graphic_pane

0x7150,	// (0x0006845e) ncimui_query_pane_ParamLimits

0x7150,	// (0x0006845e) ncimui_query_pane

0xb8ce,	// (0x0006cbdc) list_highlight_pane_cp013

0xaa6d,	// (0x0006bd7b) ncim_list_query_list_pane_t1_copy1

0xaa47,	// (0x0006bd55) ncim_list_single_graphic_pane_g1

0x7163,	// (0x00068471) ncim_query_button_pane_cp01

0x716f,	// (0x0006847d) ncim_query_entry_pane_ParamLimits

0x716f,	// (0x0006847d) ncim_query_entry_pane

0x7182,	// (0x00068490) ncimui_query_pane_g1

0x718e,	// (0x0006849c) ncimui_query_pane_t1_ParamLimits

0x718e,	// (0x0006849c) ncimui_query_pane_t1

0xbf68,	// (0x0006d276) input_focus_pane_cp012

0xaa7b,	// (0x0006bd89) ncim_query_entry_pane_t1

0xc079,	// (0x0006d387) main_im_pane_ParamLimits

0x9e77,	// (0x0006b185) main_mobtv_pane_ParamLimits

0x9e77,	// (0x0006b185) main_mobtv_pane

0x6df9,	// (0x00068107) main_cset6_slider_pane_g18_ParamLimits

0x6df9,	// (0x00068107) main_cset6_slider_pane_g18

0x6e05,	// (0x00068113) main_cset6_slider_pane_g19_ParamLimits

0x6e05,	// (0x00068113) main_cset6_slider_pane_g19

0xbfeb,	// (0x0006d2f9) bg_main_mobtv_pane_ParamLimits

0xbfeb,	// (0x0006d2f9) bg_main_mobtv_pane

0x71a7,	// (0x000684b5) main_mobtv_info_pane

0x71b0,	// (0x000684be) main_mobtv_loading_pane_ParamLimits

0x71b0,	// (0x000684be) main_mobtv_loading_pane

0xaa8d,	// (0x0006bd9b) main_mobtv_pg_channel_list_pane

0xaa97,	// (0x0006bda5) main_mobtv_pg_hdr_pane

0x71bd,	// (0x000684cb) main_mobtv_programe_curr_pane_ParamLimits

0x71bd,	// (0x000684cb) main_mobtv_programe_curr_pane

0x71ca,	// (0x000684d8) main_mobtv_programe_next_pane_ParamLimits

0x71ca,	// (0x000684d8) main_mobtv_programe_next_pane

0xaaa0,	// (0x0006bdae) popup_mobtv_noti_window

0xc01b,	// (0x0006d329) main_tv_pg_hdr_pane_g1

0xaaa8,	// (0x0006bdb6) main_tv_pg_hdr_pane_g2

0xaab0,	// (0x0006bdbe) main_tv_pg_hdr_pane_g3

0xaab8,	// (0x0006bdc6) main_tv_pg_hdr_pane_g4

0xaac0,	// (0x0006bdce) main_tv_pg_hdr_pane_g5

0xaaca,	// (0x0006bdd8) main_tv_pg_hdr_pane_g6

0xaad4,	// (0x0006bde2) main_tv_pg_hdr_pane_g7

0xaade,	// (0x0006bdec) main_tv_pg_hdr_pane_g8

0xaae8,	// (0x0006bdf6) main_tv_pg_hdr_pane_g9

0xaaf2,	// (0x0006be00) main_tv_pg_hdr_pane_g10

0xaafc,	// (0x0006be0a) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf9,	// (0x00070e07) main_tv_pg_hdr_pane_g

0xab06,	// (0x0006be14) main_tv_pg_hdr_pane_t1

0xab14,	// (0x0006be22) main_tv_pg_hdr_pane_t2

0xab22,	// (0x0006be30) main_tv_pg_hdr_pane_t3

0xab32,	// (0x0006be40) main_tv_pg_hdr_pane_t4

0xab42,	// (0x0006be50) main_tv_pg_hdr_pane_t5

0x0004,

0xfb10,	// (0x00070e1e) main_tv_pg_hdr_pane_t

0xab52,	// (0x0006be60) single_mobtv_pg_channel_pane_ParamLimits

0xab52,	// (0x0006be60) single_mobtv_pg_channel_pane

0xab64,	// (0x0006be72) single_mobtv_pg_channel_table_pane

0xab6d,	// (0x0006be7b) single_mobtv_pg_channel_thumb_pane

0xab76,	// (0x0006be84) single_tv_pg_channel_pane_g1

0xab7f,	// (0x0006be8d) single_tv_pg_channel_pane_g2

0x0001,

0xfb1b,	// (0x00070e29) single_tv_pg_channel_pane_g

0xbfcf,	// (0x0006d2dd) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbfcf,	// (0x0006d2dd) bg_single_mobtv_pg_channel_thumb_pane

0xab88,	// (0x0006be96) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xab88,	// (0x0006be96) single_mobtv_pg_channel_thumb_pane_g1

0xab96,	// (0x0006bea4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xab96,	// (0x0006bea4) single_mobtv_pg_channel_thumb_pane_g2

0xaba2,	// (0x0006beb0) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xaba2,	// (0x0006beb0) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb20,	// (0x00070e2e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb20,	// (0x00070e2e) single_mobtv_pg_channel_thumb_pane_g

0xabae,	// (0x0006bebc) single_mobtv_pg_channel_thumb_pane_t1

0xabbc,	// (0x0006beca) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb27,	// (0x00070e35) single_mobtv_pg_channel_thumb_pane_t

0xc01b,	// (0x0006d329) bg_single_mobtv_pg_channel_table_pane_g1

0xc01b,	// (0x0006d329) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x000703bd) bg_single_mobtv_pg_channel_table_pane_g

0xabca,	// (0x0006bed8) single_mobtv_pg_channel_table_pane_t1

0xabd8,	// (0x0006bee6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb2c,	// (0x00070e3a) single_mobtv_pg_channel_table_pane_t

0x71df,	// (0x000684ed) main_mobtv_info_pane_g1_ParamLimits

0x71df,	// (0x000684ed) main_mobtv_info_pane_g1

0x71fd,	// (0x0006850b) main_mobtv_info_pane_t1_ParamLimits

0x71fd,	// (0x0006850b) main_mobtv_info_pane_t1

0x7275,	// (0x00068583) main_mobtv_info_pane_t2_ParamLimits

0x7275,	// (0x00068583) main_mobtv_info_pane_t2

0x0002,

0xfb36,	// (0x00070e44) main_mobtv_info_pane_t_ParamLimits

0xfb36,	// (0x00070e44) main_mobtv_info_pane_t

0x7304,	// (0x00068612) wait_bar_pane_cp05

0x7316,	// (0x00068624) main_mobtv_loading_pane_g1_ParamLimits

0x7316,	// (0x00068624) main_mobtv_loading_pane_g1

0x7329,	// (0x00068637) main_mobtv_loading_pane_g2_ParamLimits

0x7329,	// (0x00068637) main_mobtv_loading_pane_g2

0x7335,	// (0x00068643) main_mobtv_loading_pane_g3_ParamLimits

0x7335,	// (0x00068643) main_mobtv_loading_pane_g3

0x0002,

0xfb3d,	// (0x00070e4b) main_mobtv_loading_pane_g_ParamLimits

0xfb3d,	// (0x00070e4b) main_mobtv_loading_pane_g

0xabe6,	// (0x0006bef4) main_mobtv_loading_pane_t1_ParamLimits

0xabe6,	// (0x0006bef4) main_mobtv_loading_pane_t1

0xabfe,	// (0x0006bf0c) main_mobtv_loading_pane_t2_ParamLimits

0xabfe,	// (0x0006bf0c) main_mobtv_loading_pane_t2

0x0001,

0xfb44,	// (0x00070e52) main_mobtv_loading_pane_t_ParamLimits

0xfb44,	// (0x00070e52) main_mobtv_loading_pane_t

0x7348,	// (0x00068656) wait_bar_pane_cp06_ParamLimits

0x7348,	// (0x00068656) wait_bar_pane_cp06

0xac22,	// (0x0006bf30) main_mobtv_programe_curr_pane_t1

0xac30,	// (0x0006bf3e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb49,	// (0x00070e57) main_mobtv_programe_curr_pane_t

0xac3e,	// (0x0006bf4c) main_mobtv_programe_next_pane_t1

0xac4c,	// (0x0006bf5a) main_mobtv_programe_next_pane_t2

0xac5a,	// (0x0006bf68) main_mobtv_programe_next_pane_t3

0x0002,

0xfb4e,	// (0x00070e5c) main_mobtv_programe_next_pane_t

0xb8ce,	// (0x0006cbdc) bg_popup_mobtv_noti_window_pane

0xac68,	// (0x0006bf76) popup_mobtv_noti_window_g1

0xac70,	// (0x0006bf7e) popup_mobtv_noti_window_t1

0xac7e,	// (0x0006bf8c) popup_mobtv_noti_window_t2

0x0001,

0xfb55,	// (0x00070e63) popup_mobtv_noti_window_t

0xc01b,	// (0x0006d329) bg_popup_mobtv_noti_window_pane_g1

0x9e85,	// (0x0006b193) sc_clock_pane

0x9e85,	// (0x0006b193) main_fs_bigclock_pane

0x68fa,	// (0x00067c08) blid2_tripm_pane_t4_ParamLimits

0x68fa,	// (0x00067c08) blid2_tripm_pane_t4

0xbfcf,	// (0x0006d2dd) sc_clock_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) sc_clock_pane_g1

0xc025,	// (0x0006d333) sc_clock_pane_t1_ParamLimits

0xc025,	// (0x0006d333) sc_clock_pane_t1

0xc025,	// (0x0006d333) sc_clock_pane_t2_ParamLimits

0xc025,	// (0x0006d333) sc_clock_pane_t2

0xc025,	// (0x0006d333) sc_clock_pane_t3_ParamLimits

0xc025,	// (0x0006d333) sc_clock_pane_t3

0x0004,

0xfb5a,	// (0x00070e68) sc_clock_pane_t_ParamLimits

0xfb5a,	// (0x00070e68) sc_clock_pane_t

0x8218,	// (0x00069526) main_fs_bigclock_indicator_pane_ParamLimits

0x8218,	// (0x00069526) main_fs_bigclock_indicator_pane

0x73a6,	// (0x000686b4) main_fs_bigclock_pane_g1_ParamLimits

0x73a6,	// (0x000686b4) main_fs_bigclock_pane_g1

0x8224,	// (0x00069532) main_fs_bigclock_pane_t1_ParamLimits

0x8224,	// (0x00069532) main_fs_bigclock_pane_t1

0x8236,	// (0x00069544) main_fs_bigclock_pane_t2_ParamLimits

0x8236,	// (0x00069544) main_fs_bigclock_pane_t2

0x824a,	// (0x00069558) main_fs_bigclock_pane_t3_ParamLimits

0x824a,	// (0x00069558) main_fs_bigclock_pane_t3

0x0002,

0xfcde,	// (0x00070fec) main_fs_bigclock_pane_t_ParamLimits

0xfcde,	// (0x00070fec) main_fs_bigclock_pane_t

0xb4b7,	// (0x0006c7c5) main_fs_bigclock_indicator_pane_g1

0xa99c,	// (0x0006bcaa) ncim_query_content_pane_g2_ParamLimits

0xa99c,	// (0x0006bcaa) ncim_query_content_pane_g2

0x0001,

0xfae7,	// (0x00070df5) ncim_query_content_pane_g_ParamLimits

0xfae7,	// (0x00070df5) ncim_query_content_pane_g

0xc025,	// (0x0006d333) sc_clock_pane_t4_ParamLimits

0xc025,	// (0x0006d333) sc_clock_pane_t4

0x9e77,	// (0x0006b185) main_radioblah_pane

0xa435,	// (0x0006b743) cell_call4_button_pane_t1_copy1_ParamLimits

0xa435,	// (0x0006b743) cell_call4_button_pane_t1_copy1

0x6fb1,	// (0x000682bf) main_ncimui_pane_t1_ParamLimits

0x6fb1,	// (0x000682bf) main_ncimui_pane_t1

0x6fcb,	// (0x000682d9) main_ncimui_pane_t2_ParamLimits

0x6fcb,	// (0x000682d9) main_ncimui_pane_t2

0x0002,

0xfae0,	// (0x00070dee) main_ncimui_pane_t_ParamLimits

0xfae0,	// (0x00070dee) main_ncimui_pane_t

0xd2d6,	// (0x0006e5e4) main_radioblah_anim_pane_ParamLimits

0xd2d6,	// (0x0006e5e4) main_radioblah_anim_pane

0xd2d6,	// (0x0006e5e4) main_radioblah_info_pane_ParamLimits

0xd2d6,	// (0x0006e5e4) main_radioblah_info_pane

0xd2c2,	// (0x0006e5d0) main_radioblah_pane_t1_ParamLimits

0xd2c2,	// (0x0006e5d0) main_radioblah_pane_t1

0xd2c2,	// (0x0006e5d0) main_radioblah_pane_t2_ParamLimits

0xd2c2,	// (0x0006e5d0) main_radioblah_pane_t2

0x0003,

0xfb7b,	// (0x00070e89) main_radioblah_pane_t_ParamLimits

0xfb7b,	// (0x00070e89) main_radioblah_pane_t

0xbf68,	// (0x0006d276) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbf68,	// (0x0006d276) main_radioblah_rocker_ctrl_pane

0xeb9d,	// (0x0006feab) main_radioblah_info_pane_t1_ParamLimits

0xeb9d,	// (0x0006feab) main_radioblah_info_pane_t1

0xadf3,	// (0x0006c101) main_radioblah_info_pane_t2_ParamLimits

0xadf3,	// (0x0006c101) main_radioblah_info_pane_t2

0x0003,

0xfb84,	// (0x00070e92) main_radioblah_info_pane_t_ParamLimits

0xfb84,	// (0x00070e92) main_radioblah_info_pane_t

0xc01b,	// (0x0006d329) main_radioblah_rocker_ctrl_pane_g1

0xc01b,	// (0x0006d329) main_radioblah_rocker_ctrl_pane_g2

0xc01b,	// (0x0006d329) main_radioblah_rocker_ctrl_pane_g3

0xc01b,	// (0x0006d329) main_radioblah_rocker_ctrl_pane_g4

0xc01b,	// (0x0006d329) main_radioblah_rocker_ctrl_pane_g5

0xc01b,	// (0x0006d329) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0x0451,	// (0x0006175f) main_radioblah_rocker_ctrl_pane_g

0x6ccf,	// (0x00067fdd) main_cset_text2_pane_t1_copy1_ParamLimits

0xa483,	// (0x0006b791) cam4_image_uncrop_qvga_pane

0xa4fc,	// (0x0006b80a) vid4_image_uncrop_qcif_pane

0xa65d,	// (0x0006b96b) cam6_image_uncrop_qvga_pane_ParamLimits

0xa65d,	// (0x0006b96b) cam6_image_uncrop_qvga_pane

0xa6a3,	// (0x0006b9b1) vid6_image_uncrop_qcif_pane_ParamLimits

0xa6a3,	// (0x0006b9b1) vid6_image_uncrop_qcif_pane

0xb8ce,	// (0x0006cbdc) bg_popup_preview_window_pane_cp03

0xa94e,	// (0x0006bc5c) list_cset_text2_pane

0xa956,	// (0x0006bc64) main_cset6_text2_pane_g1

0xa95e,	// (0x0006bc6c) main_cset6_text2_pane_t1

0x73f3,	// (0x00068701) list_cset_text2_pane_t1_ParamLimits

0x73f3,	// (0x00068701) list_cset_text2_pane_t1

0x9e77,	// (0x0006b185) main_radioblah_pane_ParamLimits

0x72f0,	// (0x000685fe) main_mobtv_info_pane_t3_ParamLimits

0x72f0,	// (0x000685fe) main_mobtv_info_pane_t3

0xd2b4,	// (0x0006e5c2) main_radioblah_pane_g1

0xadc3,	// (0x0006c0d1) main_radioblah_info_pane_g1

0xc039,	// (0x0006d347) main_radioblah_info_pane_t3_ParamLimits

0xc039,	// (0x0006d347) main_radioblah_info_pane_t3

0x23a7,	// (0x000636b5) highlight_cell_cale_month_pane_ParamLimits

0x23a7,	// (0x000636b5) highlight_cell_cale_month_pane

0x9e85,	// (0x0006b193) main_phob_fisheye_pane

0xec56,	// (0x0006ff64) scroll_pane_cp0031_ParamLimits

0xec56,	// (0x0006ff64) scroll_pane_cp0031

0xa7b1,	// (0x0006babf) wait_bar_pane_cp08_ParamLimits

0x6d54,	// (0x00068062) cset_list_set_pane_copy1_ParamLimits

0xae42,	// (0x0006c150) highlight_cell_cale_month_pane_g1

0x740c,	// (0x0006871a) highlight_cell_cale_month_pane_t1

0x64ce,	// (0x000677dc) list_gen_pane_cp01

0x5705,	// (0x00066a13) scroll_pane_01

0x741a,	// (0x00068728) list_single_double_fisheye_pane

0x7423,	// (0x00068731) list_double_fisheye_pane_g1_ParamLimits

0x7423,	// (0x00068731) list_double_fisheye_pane_g1

0x742f,	// (0x0006873d) list_double_fisheye_pane_g2_ParamLimits

0x742f,	// (0x0006873d) list_double_fisheye_pane_g2

0x7443,	// (0x00068751) list_double_fisheye_pane_g3_ParamLimits

0x7443,	// (0x00068751) list_double_fisheye_pane_g3

0x0004,

0xfb8d,	// (0x00070e9b) list_double_fisheye_pane_g_ParamLimits

0xfb8d,	// (0x00070e9b) list_double_fisheye_pane_g

0x746c,	// (0x0006877a) list_double_fisheye_pane_t1_ParamLimits

0x746c,	// (0x0006877a) list_double_fisheye_pane_t1

0x7487,	// (0x00068795) list_double_fisheye_pane_t2_ParamLimits

0x7487,	// (0x00068795) list_double_fisheye_pane_t2

0x0001,

0xfb98,	// (0x00070ea6) list_double_fisheye_pane_t_ParamLimits

0xfb98,	// (0x00070ea6) list_double_fisheye_pane_t

0x9e85,	// (0x0006b193) main_call5_pane

0xbf68,	// (0x0006d276) sc_swipe_pane_ParamLimits

0xbf68,	// (0x0006d276) sc_swipe_pane

0x74bc,	// (0x000687ca) call5_image_pane_ParamLimits

0x74bc,	// (0x000687ca) call5_image_pane

0x74d9,	// (0x000687e7) call5_swipe_1_pane_ParamLimits

0x74d9,	// (0x000687e7) call5_swipe_1_pane

0x74ec,	// (0x000687fa) call5_swipe_2_pane_ParamLimits

0x74ec,	// (0x000687fa) call5_swipe_2_pane

0x7517,	// (0x00068825) popup_call5_audio_first_window_ParamLimits

0x7517,	// (0x00068825) popup_call5_audio_first_window

0xbfcf,	// (0x0006d2dd) call5_swipe_1_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) call5_swipe_1_pane_g1

0xae4a,	// (0x0006c158) call5_swipe_1_pane_g2_ParamLimits

0xae4a,	// (0x0006c158) call5_swipe_1_pane_g2

0x0001,

0xfb9d,	// (0x00070eab) call5_swipe_1_pane_g_ParamLimits

0xfb9d,	// (0x00070eab) call5_swipe_1_pane_g

0xae56,	// (0x0006c164) call5_swipe_1_pane_t1_ParamLimits

0xae56,	// (0x0006c164) call5_swipe_1_pane_t1

0xbfcf,	// (0x0006d2dd) call5_swipe_2_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) call5_swipe_2_pane_g1

0xae6b,	// (0x0006c179) call5_swipe_2_pane_g2_ParamLimits

0xae6b,	// (0x0006c179) call5_swipe_2_pane_g2

0x0001,

0xfba2,	// (0x00070eb0) call5_swipe_2_pane_g_ParamLimits

0xfba2,	// (0x00070eb0) call5_swipe_2_pane_g

0xae77,	// (0x0006c185) call5_swipe_2_pane_t1_ParamLimits

0xae77,	// (0x0006c185) call5_swipe_2_pane_t1

0xbfcf,	// (0x0006d2dd) sc_swipe_pane_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) sc_swipe_pane_g1

0xbfdd,	// (0x0006d2eb) sc_swipe_pane_g2_ParamLimits

0xbfdd,	// (0x0006d2eb) sc_swipe_pane_g2

0x0001,

0xf755,	// (0x00070a63) sc_swipe_pane_g_ParamLimits

0xf755,	// (0x00070a63) sc_swipe_pane_g

0xc025,	// (0x0006d333) sc_swipe_pane_t1_ParamLimits

0xc025,	// (0x0006d333) sc_swipe_pane_t1

0x9e85,	// (0x0006b193) main_cmail_launcher_pane

0x7528,	// (0x00068836) aid_size_cell_cmail_l_ParamLimits

0x7528,	// (0x00068836) aid_size_cell_cmail_l

0x7536,	// (0x00068844) grid_cmail_l_pane_ParamLimits

0x7536,	// (0x00068844) grid_cmail_l_pane

0x7550,	// (0x0006885e) cell_cmail_l_pane_ParamLimits

0x7550,	// (0x0006885e) cell_cmail_l_pane

0xae8c,	// (0x0006c19a) cell_cmail_l_pane_g1_ParamLimits

0xae8c,	// (0x0006c19a) cell_cmail_l_pane_g1

0xae98,	// (0x0006c1a6) cell_cmail_l_pane_t1_ParamLimits

0xae98,	// (0x0006c1a6) cell_cmail_l_pane_t1

0xaeae,	// (0x0006c1bc) cell_cmail_l_pane_t2_ParamLimits

0xaeae,	// (0x0006c1bc) cell_cmail_l_pane_t2

0x0001,

0xfba7,	// (0x00070eb5) cell_cmail_l_pane_t_ParamLimits

0xfba7,	// (0x00070eb5) cell_cmail_l_pane_t

0xbf68,	// (0x0006d276) grid_highlight_pane_cp018_ParamLimits

0xbf68,	// (0x0006d276) grid_highlight_pane_cp018

0x095c,	// (0x00061c6a) main2_pane_ParamLimits

0x095c,	// (0x00061c6a) main2_pane

0xc111,	// (0x0006d41f) popup_sp_fs_action_menu_bg_pane_g1

0xc119,	// (0x0006d427) popup_sp_fs_action_menu_bg_pane_g2

0xc121,	// (0x0006d42f) popup_sp_fs_action_menu_bg_pane_g3

0xc129,	// (0x0006d437) popup_sp_fs_action_menu_bg_pane_g4

0xc131,	// (0x0006d43f) popup_sp_fs_action_menu_bg_pane_g5

0xc139,	// (0x0006d447) popup_sp_fs_action_menu_bg_pane_g6

0xc141,	// (0x0006d44f) popup_sp_fs_action_menu_bg_pane_g7

0xc149,	// (0x0006d457) popup_sp_fs_action_menu_bg_pane_g8

0xc151,	// (0x0006d45f) popup_sp_fs_action_menu_bg_pane_g9

0xc159,	// (0x0006d467) popup_sp_fs_action_menu_bg_pane_g10

0xc159,	// (0x0006d467) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x0007040e) popup_sp_fs_action_menu_bg_pane_g

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g3_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g3_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g3_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g3_g2

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g3_g3_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x000704bc) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x000704bc) list_medium_line_x2_t3_g3_g

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g3_t1

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g3_t2

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x000704c3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x000704c3) list_medium_line_x2_t3_g3_t

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g2_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g2_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g2_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x000704ca) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x000704ca) list_medium_line_x2_t3_g2_g

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g2_t1

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g2_t2

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x000704c3) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x000704c3) list_medium_line_x2_t3_g2_t

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t4_g4_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t4_g4_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t4_g4_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t4_g4_g2

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t4_g4_g3_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t4_g4_g3

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t4_g4_g4_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x000704cf) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x000704cf) list_medium_line_x2_t4_g4_g

0xc025,	// (0x0006d333) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t4_g4_t1

0xc025,	// (0x0006d333) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t4_g4_t2

0xc025,	// (0x0006d333) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t4_g4_t3

0xc025,	// (0x0006d333) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x000704d8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x000704d8) list_medium_line_x2_t4_g4_t

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g4_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g4_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g4_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g4_g2

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g4_g3_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g4_g3

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g4_g4_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x000704cf) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x000704cf) list_medium_line_x2_t2_g4_g

0xc025,	// (0x0006d333) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t2_g4_t1

0xc025,	// (0x0006d333) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x0007049f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x0007049f) list_medium_line_x2_t2_g4_t

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g3_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g3_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g3_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g3_g2

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g3_g3_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x000704bc) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x000704bc) list_medium_line_x2_t2_g3_g

0xc025,	// (0x0006d333) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t2_g3_t1

0xc025,	// (0x0006d333) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x0007049f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x0007049f) list_medium_line_x2_t2_g3_t

0x24f9,	// (0x00063807) main_sp_fs_list_pane_ParamLimits

0x24f9,	// (0x00063807) main_sp_fs_list_pane

0x9f55,	// (0x0006b263) sp_fs_scroll_pane_ParamLimits

0x9f55,	// (0x0006b263) sp_fs_scroll_pane

0xc809,	// (0x0006db17) list_medium_line_x2_t3_t1

0xc809,	// (0x0006db17) list_medium_line_x2_t3_t2

0xc809,	// (0x0006db17) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x00070585) list_medium_line_x2_t3_t

0xc809,	// (0x0006db17) list_medium_line_x3_t4_t1

0xc809,	// (0x0006db17) list_medium_line_x3_t4_t2

0xc809,	// (0x0006db17) list_medium_line_x3_t4_t3

0xc809,	// (0x0006db17) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x0007058c) list_medium_line_x3_t4_t

0xc809,	// (0x0006db17) list_medium_line_x4_t5_t1

0xc809,	// (0x0006db17) list_medium_line_x4_t5_t2

0xc809,	// (0x0006db17) list_medium_line_x4_t5_t3

0xc809,	// (0x0006db17) list_medium_line_x4_t5_t4

0xc809,	// (0x0006db17) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x00070595) list_medium_line_x4_t5_t

0xbfcf,	// (0x0006d2dd) list_medium_line_t4_g4_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_t4_g4_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_t4_g4_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_t4_g4_g2

0xbfcf,	// (0x0006d2dd) list_medium_line_t4_g4_g3_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_t4_g4_g3

0xbfcf,	// (0x0006d2dd) list_medium_line_t4_g4_g4_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x000704cf) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x000704cf) list_medium_line_t4_g4_g

0xc025,	// (0x0006d333) list_medium_line_t4_g4_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t4_g4_t1

0xc025,	// (0x0006d333) list_medium_line_t4_g4_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t4_g4_t2

0xc025,	// (0x0006d333) list_medium_line_t4_g4_t3_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t4_g4_t3

0xc025,	// (0x0006d333) list_medium_line_t4_g4_t4_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x000704d8) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x000704d8) list_medium_line_t4_g4_t

0x2594,	// (0x000638a2) chi_dic_find_pane_g1

0x33c7,	// (0x000646d5) main_tport_pane

0xc809,	// (0x0006db17) list_medium_line_plain_t1

0xbfcf,	// (0x0006d2dd) list_medium_line_t2_g2_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_t2_g2_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_t2_g2_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x000704ca) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x000704ca) list_medium_line_t2_g2_g

0xc025,	// (0x0006d333) list_medium_line_t2_g2_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t2_g2_t1

0xc025,	// (0x0006d333) list_medium_line_t2_g2_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x0007049f) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x0007049f) list_medium_line_t2_g2_t

0x65c2,	// (0x000678d0) aid_sp_fs_list_icon_a_sm

0x65ca,	// (0x000678d8) aid_sp_fs_list_icon_d

0x65d2,	// (0x000678e0) aid_sp_fs_text_primary

0x65db,	// (0x000678e9) aid_sp_fs_text_secondary

0xb8ce,	// (0x0006cbdc) list_medium_line

0xb8ce,	// (0x0006cbdc) list_medium_line_g2

0xb8ce,	// (0x0006cbdc) list_medium_line_g3

0xb8ce,	// (0x0006cbdc) list_medium_line_plain

0xb8ce,	// (0x0006cbdc) list_medium_line_plain_t2

0xb8ce,	// (0x0006cbdc) list_medium_line_plain_t3

0xb8ce,	// (0x0006cbdc) list_medium_line_right_icon

0xb8ce,	// (0x0006cbdc) list_medium_line_right_iconx2

0xb8ce,	// (0x0006cbdc) list_medium_line_t2

0xb8ce,	// (0x0006cbdc) list_medium_line_t2_g2

0xb8ce,	// (0x0006cbdc) list_medium_line_t2_g3

0xb8ce,	// (0x0006cbdc) list_medium_line_t2_right_icon

0xb8ce,	// (0x0006cbdc) list_medium_line_t2_right_iconx2

0xb8ce,	// (0x0006cbdc) list_medium_line_t3

0xb8ce,	// (0x0006cbdc) list_medium_line_t3_g2

0xb8ce,	// (0x0006cbdc) list_medium_line_t3_g3

0xb8ce,	// (0x0006cbdc) list_medium_line_t3_right_iconx2

0xb8ce,	// (0x0006cbdc) list_medium_line_t4_g4

0xb8ce,	// (0x0006cbdc) list_medium_line_x2

0xb8ce,	// (0x0006cbdc) list_medium_line_x2_t2_g2

0xb8ce,	// (0x0006cbdc) list_medium_line_x2_t2_g3

0xb8ce,	// (0x0006cbdc) list_medium_line_x2_t2_g4

0xb8ce,	// (0x0006cbdc) list_medium_line_x2_t3

0xb8ce,	// (0x0006cbdc) list_medium_line_x2_t3_g2

0xb8ce,	// (0x0006cbdc) list_medium_line_x2_t3_g3

0xb8ce,	// (0x0006cbdc) list_medium_line_x2_t3_g4

0xb8ce,	// (0x0006cbdc) list_medium_line_x2_t4_g2

0xb8ce,	// (0x0006cbdc) list_medium_line_x2_t4_g4

0xb8ce,	// (0x0006cbdc) list_medium_line_x3

0xb8ce,	// (0x0006cbdc) list_medium_line_x3_t4

0xb8ce,	// (0x0006cbdc) list_medium_line_x3_t4_g4

0xb8ce,	// (0x0006cbdc) list_medium_line_x4_t4

0xb8ce,	// (0x0006cbdc) list_medium_line_x4_t4_g7

0xb8ce,	// (0x0006cbdc) list_medium_line_x4_t5

0x65e4,	// (0x000678f2) list_single_fs_dyc_pane_ParamLimits

0x65e4,	// (0x000678f2) list_single_fs_dyc_pane

0xbfcf,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g2

0xbfcf,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g3_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g3

0xbfcf,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g4_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g4

0xbfcf,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g5_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g5

0xbfcf,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g6_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x4_t4_g7_g6

0xbfdd,	// (0x0006d2eb) list_medium_line_x4_t4_g7_g7_ParamLimits

0xbfdd,	// (0x0006d2eb) list_medium_line_x4_t4_g7_g7

0x0006,

0xfacc,	// (0x00070dda) list_medium_line_x4_t4_g7_g_ParamLimits

0xfacc,	// (0x00070dda) list_medium_line_x4_t4_g7_g

0xc025,	// (0x0006d333) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x4_t4_g7_t1

0xc025,	// (0x0006d333) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x4_t4_g7_t2

0xc025,	// (0x0006d333) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x4_t4_g7_t3

0xc039,	// (0x0006d347) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc039,	// (0x0006d347) list_medium_line_x4_t4_g7_t4

0xc039,	// (0x0006d347) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc039,	// (0x0006d347) list_medium_line_x4_t4_g7_t5

0x0004,

0x0394,	// (0x000616a2) list_medium_line_x4_t4_g7_t_ParamLimits

0x0394,	// (0x000616a2) list_medium_line_x4_t4_g7_t

0x6f68,	// (0x00068276) list_single_dyc_row_pane_ParamLimits

0x6f68,	// (0x00068276) list_single_dyc_row_pane

0x74a9,	// (0x000687b7) call5_gesture_pane_ParamLimits

0x74a9,	// (0x000687b7) call5_gesture_pane

0x74ff,	// (0x0006880d) call5_windows_pane_ParamLimits

0x74ff,	// (0x0006880d) call5_windows_pane

0x756a,	// (0x00068878) call5_swipe_1_pane_cp_ParamLimits

0x756a,	// (0x00068878) call5_swipe_1_pane_cp

0x7576,	// (0x00068884) call5_swipe_2_pane_cp_ParamLimits

0x7576,	// (0x00068884) call5_swipe_2_pane_cp

0xc252,	// (0x0006d560) call5_image_pane_cp

0x7582,	// (0x00068890) popup_call5_audio_first_window_cp_ParamLimits

0x7582,	// (0x00068890) popup_call5_audio_first_window_cp

0xaecb,	// (0x0006c1d9) call5_swipe_1_pane_g1_cp_ParamLimits

0xaecb,	// (0x0006c1d9) call5_swipe_1_pane_g1_cp

0xaed8,	// (0x0006c1e6) call5_swipe_1_pane_g2_cp

0xaee0,	// (0x0006c1ee) call5_swipe_1_pane_t1_cp_ParamLimits

0xaee0,	// (0x0006c1ee) call5_swipe_1_pane_t1_cp

0xaecb,	// (0x0006c1d9) call5_swipe_2_pane_g1_cp_ParamLimits

0xaecb,	// (0x0006c1d9) call5_swipe_2_pane_g1_cp

0xaef5,	// (0x0006c203) call5_swipe_2_pane_g2_cp

0xaefd,	// (0x0006c20b) call5_swipe_2_pane_t1_cp_ParamLimits

0xaefd,	// (0x0006c20b) call5_swipe_2_pane_t1_cp

0xbf68,	// (0x0006d276) main_sp_fs_email_pane

0xaf12,	// (0x0006c220) main_sp_fs_listscroll_pane_te

0x7590,	// (0x0006889e) popup_sp_fs_action_menu_pane_ParamLimits

0x7590,	// (0x0006889e) popup_sp_fs_action_menu_pane

0xc01b,	// (0x0006d329) bg_sp_fs_ctrlbar_pane_g1

0xaf1b,	// (0x0006c229) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xaf24,	// (0x0006c232) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xaf2d,	// (0x0006c23b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc01b,	// (0x0006d329) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbac,	// (0x00070eba) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe475,	// (0x0006f783) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe475,	// (0x0006f783) bg_sp_fs_ctrlbar_ddmenu_pane

0xaf36,	// (0x0006c244) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xaf36,	// (0x0006c244) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xaf42,	// (0x0006c250) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xaf42,	// (0x0006c250) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbb5,	// (0x00070ec3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbb5,	// (0x00070ec3) main_sp_fs_ctrlbar_ddmenu_pane_g

0xaf4e,	// (0x0006c25c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xaf4e,	// (0x0006c25c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc01b,	// (0x0006d329) list_medium_line_t2_right_icon_g1

0xc809,	// (0x0006db17) list_medium_line_t2_right_icon_t1

0xc809,	// (0x0006db17) list_medium_line_t2_right_icon_t2

0x0001,

0xfbba,	// (0x00070ec8) list_medium_line_t2_right_icon_t

0xd2d6,	// (0x0006e5e4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd2d6,	// (0x0006e5e4) bg_sp_fs_ctrlbar_pane

0x761a,	// (0x00068928) main_sp_fs_ctrlbar_button_pane_cp01

0x7624,	// (0x00068932) main_sp_fs_ctrlbar_ddmenu_pane

0xafa0,	// (0x0006c2ae) main_sp_fs_ctrlbar_pane_g1

0xafac,	// (0x0006c2ba) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbbf,	// (0x00070ecd) main_sp_fs_ctrlbar_pane_g

0x7662,	// (0x00068970) main_sp_fs_ctrlbar_pane_t1

0x76a1,	// (0x000689af) main_sp_fs_ctrlbar_pane

0x76c5,	// (0x000689d3) main_sp_fs_listscroll_pane_te_cp01

0x76ef,	// (0x000689fd) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x76ef,	// (0x000689fd) popup_sp_fs_action_menu_pane_cp01

0xbf68,	// (0x0006d276) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbf68,	// (0x0006d276) bg_sp_fs_highlight_list_pane_cp01

0x7714,	// (0x00068a22) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x7714,	// (0x00068a22) sp_fs_action_menu_list_gene_pane_g1

0xafd3,	// (0x0006c2e1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xafd3,	// (0x0006c2e1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbcd,	// (0x00070edb) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbcd,	// (0x00070edb) sp_fs_action_menu_list_gene_pane_g

0x7723,	// (0x00068a31) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x7723,	// (0x00068a31) sp_fs_action_menu_list_gene_pane_t1

0x773b,	// (0x00068a49) sp_fs_action_menu_list_gene_pane_ParamLimits

0x773b,	// (0x00068a49) sp_fs_action_menu_list_gene_pane

0xafe0,	// (0x0006c2ee) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xafe0,	// (0x0006c2ee) popup_sp_fs_action_menu_bg_pane

0x775a,	// (0x00068a68) sp_fs_action_menu_list_pane_ParamLimits

0x775a,	// (0x00068a68) sp_fs_action_menu_list_pane

0x777a,	// (0x00068a88) sp_fs_scroll_pane_cp01_ParamLimits

0x777a,	// (0x00068a88) sp_fs_scroll_pane_cp01

0xc809,	// (0x0006db17) list_medium_line_plain_t2_t1

0xc809,	// (0x0006db17) list_medium_line_plain_t2_t2

0x0001,

0xfbba,	// (0x00070ec8) list_medium_line_plain_t2_t

0xc809,	// (0x0006db17) list_medium_line_plain_t3_t1

0xc809,	// (0x0006db17) list_medium_line_plain_t3_t2

0xc809,	// (0x0006db17) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x00070585) list_medium_line_plain_t3_t

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g2_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g2_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g2_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x000704ca) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x000704ca) list_medium_line_x2_t2_g2_g

0xc025,	// (0x0006d333) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t2_g2_t1

0xc025,	// (0x0006d333) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x0007049f) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x0007049f) list_medium_line_x2_t2_g2_t

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t4_g2_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t4_g2_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t4_g2_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x000704ca) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x000704ca) list_medium_line_x2_t4_g2_g

0xc025,	// (0x0006d333) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t4_g2_t1

0xc025,	// (0x0006d333) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t4_g2_t2

0xc025,	// (0x0006d333) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t4_g2_t3

0xc025,	// (0x0006d333) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x000704d8) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x000704d8) list_medium_line_x2_t4_g2_t

0xc01b,	// (0x0006d329) list_medium_line_t3_right_iconx2_g1

0xc01b,	// (0x0006d329) list_medium_line_t3_right_iconx2_g2

0xc01b,	// (0x0006d329) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x000706a1) list_medium_line_t3_right_iconx2_g

0xc809,	// (0x0006db17) list_medium_line_t3_right_iconx2_t1

0xc809,	// (0x0006db17) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbba,	// (0x00070ec8) list_medium_line_t3_right_iconx2_t

0xbfcf,	// (0x0006d2dd) list_medium_line_x3_t4_g4_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x3_t4_g4_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_x3_t4_g4_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x3_t4_g4_g2

0xbfcf,	// (0x0006d2dd) list_medium_line_x3_t4_g4_g3_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x3_t4_g4_g3

0xbfcf,	// (0x0006d2dd) list_medium_line_x3_t4_g4_g4_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x000704cf) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x000704cf) list_medium_line_x3_t4_g4_g

0xc025,	// (0x0006d333) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x3_t4_g4_t1

0xc025,	// (0x0006d333) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x3_t4_g4_t2

0xc025,	// (0x0006d333) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x3_t4_g4_t3

0xc025,	// (0x0006d333) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x000704d8) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x000704d8) list_medium_line_x3_t4_g4_t

0x77a0,	// (0x00068aae) list_single_dyc_row_text_pane_t1_ParamLimits

0x77a0,	// (0x00068aae) list_single_dyc_row_text_pane_t1

0x77e9,	// (0x00068af7) list_single_dyc_row_text_pane_t2_ParamLimits

0x77e9,	// (0x00068af7) list_single_dyc_row_text_pane_t2

0x785f,	// (0x00068b6d) list_single_dyc_row_text_pane_t3_ParamLimits

0x785f,	// (0x00068b6d) list_single_dyc_row_text_pane_t3

0x0005,

0xfbd2,	// (0x00070ee0) list_single_dyc_row_text_pane_t_ParamLimits

0xfbd2,	// (0x00070ee0) list_single_dyc_row_text_pane_t

0x7942,	// (0x00068c50) list_single_dyc_row_pane_g1_ParamLimits

0x7942,	// (0x00068c50) list_single_dyc_row_pane_g1

0x794e,	// (0x00068c5c) list_single_dyc_row_pane_g2_ParamLimits

0x794e,	// (0x00068c5c) list_single_dyc_row_pane_g2

0x795a,	// (0x00068c68) list_single_dyc_row_pane_g3_ParamLimits

0x795a,	// (0x00068c68) list_single_dyc_row_pane_g3

0x7966,	// (0x00068c74) list_single_dyc_row_pane_g4_ParamLimits

0x7966,	// (0x00068c74) list_single_dyc_row_pane_g4

0x0003,

0xfbdf,	// (0x00070eed) list_single_dyc_row_pane_g_ParamLimits

0xfbdf,	// (0x00070eed) list_single_dyc_row_pane_g

0x7972,	// (0x00068c80) list_single_dyc_row_text_pane_ParamLimits

0x7972,	// (0x00068c80) list_single_dyc_row_text_pane

0xb8ce,	// (0x0006cbdc) bg_sp_fs_scroll_pane

0xafee,	// (0x0006c2fc) thumb_sp_fs_scroll_pane

0xbfcf,	// (0x0006d2dd) list_medium_line_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_g1

0xc025,	// (0x0006d333) list_medium_line_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t1

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x000704ca) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x000704ca) list_medium_line_x2_g

0xc025,	// (0x0006d333) list_medium_line_x2_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t1

0xbfcf,	// (0x0006d2dd) list_medium_line_x3_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x3_g1

0xa49d,	// (0x0006b7ab) list_medium_line_x3_g2_ParamLimits

0xa49d,	// (0x0006b7ab) list_medium_line_x3_g2

0x0001,

0xfbe8,	// (0x00070ef6) list_medium_line_x3_g_ParamLimits

0xfbe8,	// (0x00070ef6) list_medium_line_x3_g

0xaff7,	// (0x0006c305) list_medium_line_x3_t1_ParamLimits

0xaff7,	// (0x0006c305) list_medium_line_x3_t1

0xb00b,	// (0x0006c319) thumb_sp_fs_scroll_pane_g1

0xb014,	// (0x0006c322) thumb_sp_fs_scroll_pane_g2

0xb01d,	// (0x0006c32b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbed,	// (0x00070efb) thumb_sp_fs_scroll_pane_g

0xb00b,	// (0x0006c319) bg_sp_fs_scroll_pane_g1

0xb014,	// (0x0006c322) bg_sp_fs_scroll_pane_g2

0xb01d,	// (0x0006c32b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbed,	// (0x00070efb) bg_sp_fs_scroll_pane_g

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g4_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g4_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g4_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g4_g2

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g4_g3_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g4_g3

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g4_g4_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x000704cf) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x000704cf) list_medium_line_x2_t3_g4_g

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g4_t1

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g4_t2

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x000704c3) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x000704c3) list_medium_line_x2_t3_g4_t

0xbfcf,	// (0x0006d2dd) list_medium_line_g2_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_g2_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_g2_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x000704ca) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x000704ca) list_medium_line_g2_g

0xc025,	// (0x0006d333) list_medium_line_g2_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_g2_t1

0xbfcf,	// (0x0006d2dd) list_medium_line_t3_g2_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_t3_g2_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_t3_g2_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x000704ca) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x000704ca) list_medium_line_t3_g2_g

0xc025,	// (0x0006d333) list_medium_line_t3_g2_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t3_g2_t1

0xc025,	// (0x0006d333) list_medium_line_t3_g2_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t3_g2_t2

0xc025,	// (0x0006d333) list_medium_line_t3_g2_t3_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x000704c3) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x000704c3) list_medium_line_t3_g2_t

0xc01b,	// (0x0006d329) list_medium_line_right_icon_g1

0xc809,	// (0x0006db17) list_medium_line_right_icon_t1

0xbfcf,	// (0x0006d2dd) list_medium_line_t2_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_t2_g1

0xc025,	// (0x0006d333) list_medium_line_t2_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t2_t1

0xc025,	// (0x0006d333) list_medium_line_t2_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x0007049f) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x0007049f) list_medium_line_t2_t

0xbfcf,	// (0x0006d2dd) list_medium_line_t3_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_t3_g1

0xc025,	// (0x0006d333) list_medium_line_t3_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t3_t1

0xc025,	// (0x0006d333) list_medium_line_t3_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t3_t2

0xc025,	// (0x0006d333) list_medium_line_t3_t3_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x000704c3) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x000704c3) list_medium_line_t3_t

0xbfcf,	// (0x0006d2dd) list_medium_line_g3_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_g3_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_g3_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_g3_g2

0xbfcf,	// (0x0006d2dd) list_medium_line_g3_g3_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x000704bc) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x000704bc) list_medium_line_g3_g

0xc025,	// (0x0006d333) list_medium_line_g3_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_g3_t1

0xbfcf,	// (0x0006d2dd) list_medium_line_t2_g3_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_t2_g3_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_t2_g3_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_t2_g3_g2

0xbfcf,	// (0x0006d2dd) list_medium_line_t2_g3_g3_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x000704bc) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x000704bc) list_medium_line_t2_g3_g

0xc025,	// (0x0006d333) list_medium_line_t2_g3_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t2_g3_t1

0xc025,	// (0x0006d333) list_medium_line_t2_g3_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x0007049f) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x0007049f) list_medium_line_t2_g3_t

0xbfcf,	// (0x0006d2dd) list_medium_line_t3_g3_g1_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_t3_g3_g1

0xbfcf,	// (0x0006d2dd) list_medium_line_t3_g3_g2_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_t3_g3_g2

0xbfcf,	// (0x0006d2dd) list_medium_line_t3_g3_g3_ParamLimits

0xbfcf,	// (0x0006d2dd) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x000704bc) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x000704bc) list_medium_line_t3_g3_g

0xc025,	// (0x0006d333) list_medium_line_t3_g3_t1_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t3_g3_t1

0xc025,	// (0x0006d333) list_medium_line_t3_g3_t2_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t3_g3_t2

0xc025,	// (0x0006d333) list_medium_line_t3_g3_t3_ParamLimits

0xc025,	// (0x0006d333) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x000704c3) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x000704c3) list_medium_line_t3_g3_t

0xc01b,	// (0x0006d329) list_medium_line_right_iconx2_g1

0xc01b,	// (0x0006d329) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x000703bd) list_medium_line_right_iconx2_g

0xc809,	// (0x0006db17) list_medium_line_right_iconx2_t1

0xc01b,	// (0x0006d329) list_medium_line_t2_right_iconx2_g1

0xc01b,	// (0x0006d329) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x000703bd) list_medium_line_t2_right_iconx2_g

0xc809,	// (0x0006db17) list_medium_line_t2_right_iconx2_t1

0xc809,	// (0x0006db17) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbba,	// (0x00070ec8) list_medium_line_t2_right_iconx2_t

0xc809,	// (0x0006db17) list_medium_line_x4_t4_t1

0xc809,	// (0x0006db17) list_medium_line_x4_t4_t2

0xc809,	// (0x0006db17) list_medium_line_x4_t4_t3

0xc809,	// (0x0006db17) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x0007058c) list_medium_line_x4_t4_t

0x79d4,	// (0x00068ce2) tport_appsw_pane_ParamLimits

0x79d4,	// (0x00068ce2) tport_appsw_pane

0x79ec,	// (0x00068cfa) tport_contact_pane_ParamLimits

0x79ec,	// (0x00068cfa) tport_contact_pane

0x7a04,	// (0x00068d12) tport_listscroll_pane_ParamLimits

0x7a04,	// (0x00068d12) tport_listscroll_pane

0x7a1e,	// (0x00068d2c) cell_tport_appsw_pane_ParamLimits

0x7a1e,	// (0x00068d2c) cell_tport_appsw_pane

0xd2b4,	// (0x0006e5c2) tport_appsw_pane_g1_ParamLimits

0xd2b4,	// (0x0006e5c2) tport_appsw_pane_g1

0xb026,	// (0x0006c334) tport_contact_pane_g1

0xaa22,	// (0x0006bd30) tport_contact_pane_t1

0xb02f,	// (0x0006c33d) tport_contact_pane_t2

0x0001,

0xfbf4,	// (0x00070f02) tport_contact_pane_t

0xb03d,	// (0x0006c34b) list_tport_pane

0xb046,	// (0x0006c354) scroll_pane_cp_030

0x7a66,	// (0x00068d74) cell_tport_appsw_pane_g1

0x7a76,	// (0x00068d84) cell_tport_appsw_pane_t1

0x7a84,	// (0x00068d92) grid_highlight_pane_cp019

0x7a8c,	// (0x00068d9a) list_tport_double_graphic_pane_ParamLimits

0x7a8c,	// (0x00068d9a) list_tport_double_graphic_pane

0xbf68,	// (0x0006d276) list_highlight_pane_cp023_ParamLimits

0xbf68,	// (0x0006d276) list_highlight_pane_cp023

0x7a99,	// (0x00068da7) list_tport_double_graphic_pane_g1_ParamLimits

0x7a99,	// (0x00068da7) list_tport_double_graphic_pane_g1

0x7aa6,	// (0x00068db4) list_tport_double_graphic_pane_t1_ParamLimits

0x7aa6,	// (0x00068db4) list_tport_double_graphic_pane_t1

0x7abb,	// (0x00068dc9) list_tport_double_graphic_pane_t2_ParamLimits

0x7abb,	// (0x00068dc9) list_tport_double_graphic_pane_t2

0x0001,

0xfc00,	// (0x00070f0e) list_tport_double_graphic_pane_t_ParamLimits

0xfc00,	// (0x00070f0e) list_tport_double_graphic_pane_t

0xb8ce,	// (0x0006cbdc) main_cale_note_pane

0x516e,	// (0x0006647c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x516e,	// (0x0006647c) cell_vitu2_function_top_wide_pane_cp01

0x7304,	// (0x00068612) wait_bar_pane_cp05_ParamLimits

0xbf68,	// (0x0006d276) listscroll_cmail_pane

0xb057,	// (0x0006c365) list_cmail_pane

0x7acd,	// (0x00068ddb) list_cmail_body_pane

0x7ae2,	// (0x00068df0) list_single_cmail_header_caption_pane

0x7af8,	// (0x00068e06) list_single_cmail_header_detail_pane_ParamLimits

0x7af8,	// (0x00068e06) list_single_cmail_header_detail_pane

0xb06e,	// (0x0006c37c) list_single_cmail_header_caption_pane_t1

0x7b25,	// (0x00068e33) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7b25,	// (0x00068e33) list_single_cmail_header_detail_pane_g1

0x7b3d,	// (0x00068e4b) list_single_cmail_header_detail_pane_g2_ParamLimits

0x7b3d,	// (0x00068e4b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc05,	// (0x00070f13) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc05,	// (0x00070f13) list_single_cmail_header_detail_pane_g

0x7b49,	// (0x00068e57) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7b49,	// (0x00068e57) list_single_cmail_header_detail_pane_t1

0x7bab,	// (0x00068eb9) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7bab,	// (0x00068eb9) list_single_cmail_header_editor_pane_bg

0xab7f,	// (0x0006be8d) list_cmail_body_pane_g1

0xb092,	// (0x0006c3a0) list_cmail_body_pane_t1

0x52bc,	// (0x000665ca) list_single_cmail_header_editor_pane_bg_g1

0xc46b,	// (0x0006d779) list_single_cmail_header_editor_pane_bg_g1_copy1

0x52cc,	// (0x000665da) list_single_cmail_header_editor_pane_bg_g1_copy2

0x52c4,	// (0x000665d2) list_single_cmail_header_editor_pane_bg_g1_copy3

0x5c6d,	// (0x00066f7b) list_single_cmail_header_editor_pane_bg_g1_copy4

0x52ec,	// (0x000665fa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x52dc,	// (0x000665ea) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x52e4,	// (0x000665f2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc44b,	// (0x0006d759) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7bc4,	// (0x00068ed2) calenote_gesture_pane_ParamLimits

0x7bc4,	// (0x00068ed2) calenote_gesture_pane

0x7be4,	// (0x00068ef2) calenote_window_pane_ParamLimits

0x7be4,	// (0x00068ef2) calenote_window_pane

0xb0a0,	// (0x0006c3ae) popup_note_window_cp01

0x7c00,	// (0x00068f0e) calenote_swipe_1_pane_ParamLimits

0x7c00,	// (0x00068f0e) calenote_swipe_1_pane

0x7576,	// (0x00068884) calenote_swipe_2_pane_ParamLimits

0x7576,	// (0x00068884) calenote_swipe_2_pane

0xaecb,	// (0x0006c1d9) calenote_swipe_1_pane_g1_ParamLimits

0xaecb,	// (0x0006c1d9) calenote_swipe_1_pane_g1

0xb0b2,	// (0x0006c3c0) calenote_swipe_1_pane_g2_ParamLimits

0xb0b2,	// (0x0006c3c0) calenote_swipe_1_pane_g2

0x0001,

0xfc11,	// (0x00070f1f) calenote_swipe_1_pane_g_ParamLimits

0xfc11,	// (0x00070f1f) calenote_swipe_1_pane_g

0xb0be,	// (0x0006c3cc) calenote_swipe_1_pane_t1_ParamLimits

0xb0be,	// (0x0006c3cc) calenote_swipe_1_pane_t1

0xaecb,	// (0x0006c1d9) calenote_swipe_2_pane_g1_ParamLimits

0xaecb,	// (0x0006c1d9) calenote_swipe_2_pane_g1

0xb0dd,	// (0x0006c3eb) calenote_swipe_2_pane_g2_ParamLimits

0xb0dd,	// (0x0006c3eb) calenote_swipe_2_pane_g2

0x0001,

0xfc16,	// (0x00070f24) calenote_swipe_2_pane_g_ParamLimits

0xfc16,	// (0x00070f24) calenote_swipe_2_pane_g

0xb0e9,	// (0x0006c3f7) calenote_swipe_2_pane_t1_ParamLimits

0xb0e9,	// (0x0006c3f7) calenote_swipe_2_pane_t1

0xb8ce,	// (0x0006cbdc) main_mup_navstr_pane

0x400e,	// (0x0006531c) main_mup3_pane_t7_ParamLimits

0x400e,	// (0x0006531c) main_mup3_pane_t7

0xa1f9,	// (0x0006b507) main_mp4_pane_g6_ParamLimits

0xa1f9,	// (0x0006b507) main_mp4_pane_g6

0xa423,	// (0x0006b731) main_image3_pane_t4_ParamLimits

0xa423,	// (0x0006b731) main_image3_pane_t4

0x7c15,	// (0x00068f23) popup_navstr_preview_pane_ParamLimits

0x7c15,	// (0x00068f23) popup_navstr_preview_pane

0x7c29,	// (0x00068f37) scroll_navstr_pane_ParamLimits

0x7c29,	// (0x00068f37) scroll_navstr_pane

0xb8ce,	// (0x0006cbdc) bg_popup_preview_window_pane_cp04

0xb110,	// (0x0006c41e) popup_navstr_preview_pane_t1

0x7c3d,	// (0x00068f4b) scroll_navstr_pane_g1_ParamLimits

0x7c3d,	// (0x00068f4b) scroll_navstr_pane_g1

0x7c51,	// (0x00068f5f) scroll_navstr_pane_t1_ParamLimits

0x7c51,	// (0x00068f5f) scroll_navstr_pane_t1

0xb0a9,	// (0x0006c3b7) bg_button_pane_cp014

0xb0a9,	// (0x0006c3b7) bg_button_pane_cp030

0x744f,	// (0x0006875d) list_double_fisheye_pane_g4_ParamLimits

0x744f,	// (0x0006875d) list_double_fisheye_pane_g4

0x745b,	// (0x00068769) list_double_fisheye_pane_g5_ParamLimits

0x745b,	// (0x00068769) list_double_fisheye_pane_g5

0x9f55,	// (0x0006b263) sp_fs_scroll_pane_cp03

0xafa0,	// (0x0006c2ae) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xafac,	// (0x0006c2ba) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbbf,	// (0x00070ecd) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7662,	// (0x00068970) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb066,	// (0x0006c374) sp_fs_scroll_pane_cp02

0xc19a,	// (0x0006d4a8) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc19a,	// (0x0006d4a8) popup_sp_fs_calendar_preview_list_single_pane

0xb8ce,	// (0x0006cbdc) main_cam6_pano_pane

0x9e77,	// (0x0006b185) main_mup3_pane_ParamLimits

0xb8ce,	// (0x0006cbdc) main_phacti_pane

0x71d7,	// (0x000684e5) bg_button_pane_cp11

0x71f1,	// (0x000684ff) main_mobtv_info_pane_g2_ParamLimits

0x71f1,	// (0x000684ff) main_mobtv_info_pane_g2

0x0001,

0xfb31,	// (0x00070e3f) main_mobtv_info_pane_g_ParamLimits

0xfb31,	// (0x00070e3f) main_mobtv_info_pane_g

0xc025,	// (0x0006d333) sc_clock_pane_t5_ParamLimits

0xc025,	// (0x0006d333) sc_clock_pane_t5

0xd2b4,	// (0x0006e5c2) main_radioblah_pane_g1_ParamLimits

0xd2c2,	// (0x0006e5d0) main_radioblah_pane_t3_ParamLimits

0xd2c2,	// (0x0006e5d0) main_radioblah_pane_t3

0xd2c2,	// (0x0006e5d0) main_radioblah_pane_t4_ParamLimits

0xd2c2,	// (0x0006e5d0) main_radioblah_pane_t4

0xbf68,	// (0x0006d276) main_radioblah_text_pane_ParamLimits

0xbf68,	// (0x0006d276) main_radioblah_text_pane

0xadc3,	// (0x0006c0d1) main_radioblah_info_pane_g1_ParamLimits

0xae07,	// (0x0006c115) main_radioblah_info_pane_t4_ParamLimits

0xae07,	// (0x0006c115) main_radioblah_info_pane_t4

0xbf68,	// (0x0006d276) main_sp_fs_calendar_pane

0x7c68,	// (0x00068f76) main_phacti_pane_g1

0x7c70,	// (0x00068f7e) phacti_note_pane_ParamLimits

0x7c70,	// (0x00068f7e) phacti_note_pane

0xb127,	// (0x0006c435) phacti_term_pane_ParamLimits

0xb127,	// (0x0006c435) phacti_term_pane

0xb13c,	// (0x0006c44a) phacti_note_pane_t1_ParamLimits

0xb13c,	// (0x0006c44a) phacti_note_pane_t1

0x7c84,	// (0x00068f92) phacti_term_pane_g1

0x7c8c,	// (0x00068f9a) phacti_term_pane_t1_ParamLimits

0x7c8c,	// (0x00068f9a) phacti_term_pane_t1

0xb153,	// (0x0006c461) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc239,	// (0x0006d547) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc20,	// (0x00070f2e) popup_sp_fs_calendar_preview_list_single_pane_g

0xb15b,	// (0x0006c469) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb15b,	// (0x0006c469) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb171,	// (0x0006c47f) aid_popup_sp_fs_bg_corner_pane

0xc01b,	// (0x0006d329) popup_sp_fs_calendar_preview_bg_pane_g1

0xb8ce,	// (0x0006cbdc) popup_sp_fs_calendar_preview_bg_pane

0xb179,	// (0x0006c487) popup_sp_fs_calendar_preview_list_pane

0xd2d6,	// (0x0006e5e4) bg_main_sp_fs_cale_pane_ParamLimits

0xd2d6,	// (0x0006e5e4) bg_main_sp_fs_cale_pane

0x7d20,	// (0x0006902e) listscroll_cale_mrui_pane_ParamLimits

0x7d20,	// (0x0006902e) listscroll_cale_mrui_pane

0x7d35,	// (0x00069043) listscroll_sp_fs_schedule_track_pane

0x7d3e,	// (0x0006904c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x7d3e,	// (0x0006904c) main_sp_fs_ctrlbar_pane_cp01

0xb181,	// (0x0006c48f) main_sp_fs_ribbon_pane

0x7d51,	// (0x0006905f) popup_sp_fs_cale_preview_window

0x7d63,	// (0x00069071) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7d63,	// (0x00069071) list_single_sp_fs_schedule_track_pane

0xbf68,	// (0x0006d276) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xbf68,	// (0x0006d276) bg_sp_fs_highlight_list_pane_cp03

0x7d76,	// (0x00069084) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7d76,	// (0x00069084) list_single_sp_fs_schedule_track_pane_g1

0x7d82,	// (0x00069090) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7d82,	// (0x00069090) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc25,	// (0x00070f33) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc25,	// (0x00070f33) list_single_sp_fs_schedule_track_pane_g

0x7d8e,	// (0x0006909c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7d8e,	// (0x0006909c) list_single_sp_fs_schedule_track_pane_t1

0x7da8,	// (0x000690b6) sp_fs_schedule_track_pane_ParamLimits

0x7da8,	// (0x000690b6) sp_fs_schedule_track_pane

0xb189,	// (0x0006c497) sp_fs_schedule_track_pane_g1

0xb191,	// (0x0006c49f) sp_fs_schedule_track_pane_g2

0xb199,	// (0x0006c4a7) sp_fs_schedule_track_pane_g3

0xb1a1,	// (0x0006c4af) sp_fs_schedule_track_pane_g4

0xb1a9,	// (0x0006c4b7) sp_fs_schedule_track_pane_g5

0x0004,

0xfc2a,	// (0x00070f38) sp_fs_schedule_track_pane_g

0x52bc,	// (0x000665ca) bg_sp_fs_schedule_viewer_highlight_g1

0xc46b,	// (0x0006d779) bg_sp_fs_schedule_viewer_highlight_g2

0x52c4,	// (0x000665d2) bg_sp_fs_schedule_viewer_highlight_g3

0x52cc,	// (0x000665da) bg_sp_fs_schedule_viewer_highlight_g4

0x5c6d,	// (0x00066f7b) bg_sp_fs_schedule_viewer_highlight_g5

0x52dc,	// (0x000665ea) bg_sp_fs_schedule_viewer_highlight_g6

0x52e4,	// (0x000665f2) bg_sp_fs_schedule_viewer_highlight_g7

0x52ec,	// (0x000665fa) bg_sp_fs_schedule_viewer_highlight_g8

0xc44b,	// (0x0006d759) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc35,	// (0x00070f43) bg_sp_fs_schedule_viewer_highlight_g

0xb8ce,	// (0x0006cbdc) bg_main_sp_fs_ribbon_pane

0x7db9,	// (0x000690c7) main_sp_fs_ribbon_pane_g1

0xb1b1,	// (0x0006c4bf) main_sp_fs_ribbon_pane_t1

0x7dc2,	// (0x000690d0) main_sp_fs_ribbon_pane_t2

0xb1c0,	// (0x0006c4ce) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc48,	// (0x00070f56) main_sp_fs_ribbon_pane_t

0xb1cf,	// (0x0006c4dd) main_sp_fs_ribbon_scheduler_pane

0xb1d7,	// (0x0006c4e5) bg_main_sp_fs_ribbon_pane_g1

0xb1e0,	// (0x0006c4ee) bg_main_sp_fs_ribbon_pane_g2

0xb1e9,	// (0x0006c4f7) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc4f,	// (0x00070f5d) bg_main_sp_fs_ribbon_pane_g

0xb1f1,	// (0x0006c4ff) main_sp_fs_ribbon_scheduler_pane_g1

0xb1fa,	// (0x0006c508) main_sp_fs_ribbon_scheduler_pane_g2

0xb203,	// (0x0006c511) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc56,	// (0x00070f64) main_sp_fs_ribbon_scheduler_pane_g

0xb20c,	// (0x0006c51a) list_cale_mrui_pane

0x7dd1,	// (0x000690df) sp_fs_scroll_pane_cp07_ParamLimits

0x7dd1,	// (0x000690df) sp_fs_scroll_pane_cp07

0x7ded,	// (0x000690fb) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7ded,	// (0x000690fb) bg_sp_fs_schedule_viewer_highlight

0xb219,	// (0x0006c527) list_single_sp_fs_schedule_track_pane_cp01

0xb221,	// (0x0006c52f) list_sp_fs_schedule_track_pane

0xb229,	// (0x0006c537) sp_fs_scroll_pane_cp06_ParamLimits

0xb229,	// (0x0006c537) sp_fs_scroll_pane_cp06

0xc01b,	// (0x0006d329) bgmain_sp_fs_calendar_pane_g1

0x7dfd,	// (0x0006910b) list_single_cale_mrui_pane_ParamLimits

0x7dfd,	// (0x0006910b) list_single_cale_mrui_pane

0x7e1e,	// (0x0006912c) list_single_cale_mrui_row_pane_ParamLimits

0x7e1e,	// (0x0006912c) list_single_cale_mrui_row_pane

0x7e2b,	// (0x00069139) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7e2b,	// (0x00069139) list_single_cale_mrui_row_pane_g1

0x7e63,	// (0x00069171) list_single_cale_mrui_row_pane_t1_ParamLimits

0x7e63,	// (0x00069171) list_single_cale_mrui_row_pane_t1

0x7e75,	// (0x00069183) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7e75,	// (0x00069183) list_single_cale_mrui_row_pane_t2

0x7edd,	// (0x000691eb) list_single_cale_mrui_row_pane_t3_ParamLimits

0x7edd,	// (0x000691eb) list_single_cale_mrui_row_pane_t3

0x7f0c,	// (0x0006921a) list_single_cale_mrui_row_pane_t4_ParamLimits

0x7f0c,	// (0x0006921a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc64,	// (0x00070f72) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc64,	// (0x00070f72) list_single_cale_mrui_row_pane_t

0x7f3b,	// (0x00069249) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7f3b,	// (0x00069249) list_single_cmail_header_editor_pane_bg_cp01

0x7f69,	// (0x00069277) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7f69,	// (0x00069277) list_single_cmail_header_editor_pane_bg_cp02

0xb248,	// (0x0006c556) main_radioblah_text_pane_t1_ParamLimits

0xb248,	// (0x0006c556) main_radioblah_text_pane_t1

0xb262,	// (0x0006c570) cam6_indi_pane_cp01

0xb26a,	// (0x0006c578) cam6_mode_pane_cp01

0xb272,	// (0x0006c580) cam6_pano_pane

0xb27b,	// (0x0006c589) cam6_zoom_pane_cp01

0xb283,	// (0x0006c591) cam6_pano_image_pane

0xb28e,	// (0x0006c59c) cam6_pano_pane_g1

0xab7f,	// (0x0006be8d) cam6_pano_pane_g2

0xb297,	// (0x0006c5a5) cam6_pano_pane_g3

0xb2a0,	// (0x0006c5ae) cam6_pano_pane_g4

0xeeaf,	// (0x000701bd) cam6_pano_pane_g5

0xb2a9,	// (0x0006c5b7) cam6_pano_pane_g6

0x7f89,	// (0x00069297) cam6_pano_pane_g7

0xb2b3,	// (0x0006c5c1) cam6_pano_pane_g8

0xb2bc,	// (0x0006c5ca) cam6_pano_pane_g9

0x0008,

0xfc6d,	// (0x00070f7b) cam6_pano_pane_g

0xb8ce,	// (0x0006cbdc) main_browser_tag_pane

0xb108,	// (0x0006c416) grid_navstr_albumart_pane

0xb2c7,	// (0x0006c5d5) cell_navstr_albumart_pane_ParamLimits

0xb2c7,	// (0x0006c5d5) cell_navstr_albumart_pane

0xb2e7,	// (0x0006c5f5) cell_navstr_albumart_pane_g1

0xe373,	// (0x0006f681) cell_navstr_albumart_pane_g2

0xe383,	// (0x0006f691) cell_navstr_albumart_pane_g3

0xe37b,	// (0x0006f689) cell_navstr_albumart_pane_g4

0x0003,

0xfc80,	// (0x00070f8e) cell_navstr_albumart_pane_g

0x7f91,	// (0x0006929f) bt_list_pane_ParamLimits

0x7f91,	// (0x0006929f) bt_list_pane

0x7fa5,	// (0x000692b3) bt_list_pane_t1

0x7fb4,	// (0x000692c2) bt_list_pane_t2

0x0001,

0xfc89,	// (0x00070f97) bt_list_pane_t

0xb8ce,	// (0x0006cbdc) main_cale_prevew_pane

0x7fc3,	// (0x000692d1) popup_cale_preview_window_ParamLimits

0x7fc3,	// (0x000692d1) popup_cale_preview_window

0xbf68,	// (0x0006d276) bg_popup_preview_window_pane_cp05_ParamLimits

0xbf68,	// (0x0006d276) bg_popup_preview_window_pane_cp05

0xb2ef,	// (0x0006c5fd) list_cale_preview_pane_ParamLimits

0xb2ef,	// (0x0006c5fd) list_cale_preview_pane

0x7fde,	// (0x000692ec) list_double_cale_preview_pane_ParamLimits

0x7fde,	// (0x000692ec) list_double_cale_preview_pane

0x7ff0,	// (0x000692fe) list_single_cale_preview_pane_ParamLimits

0x7ff0,	// (0x000692fe) list_single_cale_preview_pane

0x8006,	// (0x00069314) list_single_cale_preview_pane_g1

0x800e,	// (0x0006931c) list_single_cale_preview_pane_t1_ParamLimits

0x800e,	// (0x0006931c) list_single_cale_preview_pane_t1

0x8023,	// (0x00069331) list_double_cale_preview_pane_g1

0x802b,	// (0x00069339) list_double_cale_preview_pane_t1_ParamLimits

0x802b,	// (0x00069339) list_double_cale_preview_pane_t1

0x8040,	// (0x0006934e) list_double_cale_preview_pane_t2_ParamLimits

0x8040,	// (0x0006934e) list_double_cale_preview_pane_t2

0x0001,

0xfc8e,	// (0x00070f9c) list_double_cale_preview_pane_t_ParamLimits

0xfc8e,	// (0x00070f9c) list_double_cale_preview_pane_t

0xb8ce,	// (0x0006cbdc) main_ezdial_pane

0xbf68,	// (0x0006d276) main_sp_fs_email_pane_ParamLimits

0x75d2,	// (0x000688e0) cmail_ddmenu_btn01_pane_ParamLimits

0x75d2,	// (0x000688e0) cmail_ddmenu_btn01_pane

0x75e5,	// (0x000688f3) cmail_ddmenu_btn02_pane_ParamLimits

0x75e5,	// (0x000688f3) cmail_ddmenu_btn02_pane

0x7608,	// (0x00068916) cmail_ddmenu_btn03_pane_ParamLimits

0x7608,	// (0x00068916) cmail_ddmenu_btn03_pane

0x76a1,	// (0x000689af) main_sp_fs_ctrlbar_pane_ParamLimits

0x76c5,	// (0x000689d3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7acd,	// (0x00068ddb) list_cmail_body_pane_ParamLimits

0xb07c,	// (0x0006c38a) bg_button_pane_cp12

0xb085,	// (0x0006c393) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb085,	// (0x0006c393) list_single_cmail_header_detail_pane_g3

0x7b87,	// (0x00068e95) list_single_cmail_header_detail_pane_t2_ParamLimits

0x7b87,	// (0x00068e95) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc0c,	// (0x00070f1a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc0c,	// (0x00070f1a) list_single_cmail_header_detail_pane_t

0x7ca1,	// (0x00068faf) phacti_term_pane_t2_ParamLimits

0x7ca1,	// (0x00068faf) phacti_term_pane_t2

0x0001,

0xfc1b,	// (0x00070f29) phacti_term_pane_t_ParamLimits

0xfc1b,	// (0x00070f29) phacti_term_pane_t

0xb2fb,	// (0x0006c609) aid_size_list_single_double

0x8058,	// (0x00069366) popup_ezdial_listscroll_window

0xb307,	// (0x0006c615) popup_number_entry_window_cp01

0xc252,	// (0x0006d560) bg_popup_call_pane_cp09

0xb314,	// (0x0006c622) ezdial_list_pane

0xb31c,	// (0x0006c62a) scroll_pane_cp23

0xd2d6,	// (0x0006e5e4) bg_button_pane_cp028_ParamLimits

0xd2d6,	// (0x0006e5e4) bg_button_pane_cp028

0x806f,	// (0x0006937d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x806f,	// (0x0006937d) cmail_ddmenu_btn01_pane_g1

0x807b,	// (0x00069389) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x807b,	// (0x00069389) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc93,	// (0x00070fa1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc93,	// (0x00070fa1) cmail_ddmenu_btn01_pane_g

0xb324,	// (0x0006c632) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb324,	// (0x0006c632) cmail_ddmenu_btn01_pane_t1

0xd2d6,	// (0x0006e5e4) bg_button_pane_cp029_ParamLimits

0xd2d6,	// (0x0006e5e4) bg_button_pane_cp029

0x808f,	// (0x0006939d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x808f,	// (0x0006939d) cmail_ddmenu_btn02_pane_g1

0x80a7,	// (0x000693b5) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x80a7,	// (0x000693b5) cmail_ddmenu_btn02_pane_t1

0xbf68,	// (0x0006d276) bg_button_pane_cp031_ParamLimits

0xbf68,	// (0x0006d276) bg_button_pane_cp031

0x808f,	// (0x0006939d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x808f,	// (0x0006939d) cmail_ddmenu_btn03_pane_g1

0x80a7,	// (0x000693b5) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x80a7,	// (0x000693b5) cmail_ddmenu_btn03_pane_t1

0xc025,	// (0x0006d333) cell_dialer2_keypad_pane_t1_ParamLimits

0xeedd,	// (0x000701eb) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xeedd,	// (0x000701eb) cell_dialer2_keypad_pane_t1_copy1

0x6ffa,	// (0x00068308) ncimui_group_button_pane

0xbf68,	// (0x0006d276) main_sp_fs_calendar_pane_ParamLimits

0x7ae2,	// (0x00068df0) list_single_cmail_header_caption_pane_ParamLimits

0x7cd4,	// (0x00068fe2) aid_recal_txt_sm_pane

0xb8ce,	// (0x0006cbdc) mian_recal_day_pane

0x7d51,	// (0x0006905f) popup_sp_fs_cale_preview_window_ParamLimits

0xb33a,	// (0x0006c648) list_recal_day_pane

0x80e6,	// (0x000693f4) list_single_recal_day_pane_ParamLimits

0x80e6,	// (0x000693f4) list_single_recal_day_pane

0xb361,	// (0x0006c66f) list_single_recal_day_pane_g1_ParamLimits

0xb361,	// (0x0006c66f) list_single_recal_day_pane_g1

0x80f8,	// (0x00069406) list_single_recal_day_pane_g2_ParamLimits

0x80f8,	// (0x00069406) list_single_recal_day_pane_g2

0x8104,	// (0x00069412) list_single_recal_day_pane_g3_ParamLimits

0x8104,	// (0x00069412) list_single_recal_day_pane_g3

0x8110,	// (0x0006941e) list_single_recal_day_pane_g4_ParamLimits

0x8110,	// (0x0006941e) list_single_recal_day_pane_g4

0x811e,	// (0x0006942c) list_single_recal_day_pane_g5_ParamLimits

0x811e,	// (0x0006942c) list_single_recal_day_pane_g5

0x8134,	// (0x00069442) list_single_recal_day_pane_g6_ParamLimits

0x8134,	// (0x00069442) list_single_recal_day_pane_g6

0x0004,

0xfca2,	// (0x00070fb0) list_single_recal_day_pane_g_ParamLimits

0xfca2,	// (0x00070fb0) list_single_recal_day_pane_g

0x8148,	// (0x00069456) list_single_recal_day_pane_t1

0x815a,	// (0x00069468) list_single_recal_day_pane_t2

0x0001,

0xfcad,	// (0x00070fbb) list_single_recal_day_pane_t

0x816c,	// (0x0006947a) ncimui_query_button_pane_ParamLimits

0x816c,	// (0x0006947a) ncimui_query_button_pane

0x817c,	// (0x0006948a) ncimui_query_button_pane_t1_ParamLimits

0x817c,	// (0x0006948a) ncimui_query_button_pane_t1

0xb36d,	// (0x0006c67b) ncimui_query_button_pane_t2_ParamLimits

0xb36d,	// (0x0006c67b) ncimui_query_button_pane_t2

0x0001,

0xfcb2,	// (0x00070fc0) ncimui_query_button_pane_t_ParamLimits

0xfcb2,	// (0x00070fc0) ncimui_query_button_pane_t

0x818f,	// (0x0006949d) query_button_pane_ParamLimits

0x818f,	// (0x0006949d) query_button_pane

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp0028

0xb380,	// (0x0006c68e) query_button_pane_t1

0x33c7,	// (0x000646d5) main_tport_pane_ParamLimits

0x7991,	// (0x00068c9f) bg_popup_window_pane_cp01_ParamLimits

0x7991,	// (0x00068c9f) bg_popup_window_pane_cp01

0x79ac,	// (0x00068cba) heading_pane_cp08_ParamLimits

0x79ac,	// (0x00068cba) heading_pane_cp08

0x79bf,	// (0x00068ccd) heading_pane_cp07_ParamLimits

0x79bf,	// (0x00068ccd) heading_pane_cp07

0x7a66,	// (0x00068d74) cell_tport_appsw_pane_g2

0x0002,

0xfbf9,	// (0x00070f07) cell_tport_appsw_pane_g

0x29b6,	// (0x00063cc4) input_candi_list_open_g1

0xc636,	// (0x0006d944) list_cale_time_pane_g6_ParamLimits

0xc636,	// (0x0006d944) list_cale_time_pane_g6

0x39f2,	// (0x00064d00) aid_size_touch_calib_1_ParamLimits

0x39f2,	// (0x00064d00) aid_size_touch_calib_1

0x3a04,	// (0x00064d12) aid_size_touch_calib_2_ParamLimits

0x3a04,	// (0x00064d12) aid_size_touch_calib_2

0x3a1c,	// (0x00064d2a) aid_size_touch_calib_3_ParamLimits

0x3a1c,	// (0x00064d2a) aid_size_touch_calib_3

0x3a3a,	// (0x00064d48) aid_size_touch_calib_4_ParamLimits

0x3a3a,	// (0x00064d48) aid_size_touch_calib_4

0x3a52,	// (0x00064d60) main_touch_calib_button_group_pane_ParamLimits

0x3a52,	// (0x00064d60) main_touch_calib_button_group_pane

0x3a6a,	// (0x00064d78) main_touch_calib_pane_g1_ParamLimits

0x3a7c,	// (0x00064d8a) main_touch_calib_pane_g2_ParamLimits

0x3a8e,	// (0x00064d9c) main_touch_calib_pane_g3_ParamLimits

0x3aa0,	// (0x00064dae) main_touch_calib_pane_g4_ParamLimits

0xf67f,	// (0x0007098d) main_touch_calib_pane_g_ParamLimits

0x3ab2,	// (0x00064dc0) main_touch_calib_pane_t1_ParamLimits

0x3acc,	// (0x00064dda) main_touch_calib_pane_t2_ParamLimits

0x3ae6,	// (0x00064df4) main_touch_calib_pane_t3_ParamLimits

0x3afa,	// (0x00064e08) main_touch_calib_pane_t4_ParamLimits

0x3b0e,	// (0x00064e1c) main_touch_calib_pane_t5_ParamLimits

0xf688,	// (0x00070996) main_touch_calib_pane_t_ParamLimits

0xec7a,	// (0x0006ff88) list_single_fp_cale_pane_g3_ParamLimits

0xec7a,	// (0x0006ff88) list_single_fp_cale_pane_g3

0x9e77,	// (0x0006b185) bg_button_pane_cp012_ParamLimits

0x9e77,	// (0x0006b185) bg_vkb2_func_pane_cp03_ParamLimits

0x5c29,	// (0x00066f37) cell_vitu2_function_top_pane_g1_ParamLimits

0x9e77,	// (0x0006b185) bg_vkb2_func_pane_cp04_ParamLimits

0x6f85,	// (0x00068293) main_ncimui_button_group_pane_ParamLimits

0x6f85,	// (0x00068293) main_ncimui_button_group_pane

0x6fe5,	// (0x000682f3) main_ncimui_pane_t3_ParamLimits

0x6fe5,	// (0x000682f3) main_ncimui_pane_t3

0xb11e,	// (0x0006c42c) phacti_button_group_pane

0xb2fb,	// (0x0006c609) aid_size_list_single_double_ParamLimits

0x8058,	// (0x00069366) popup_ezdial_listscroll_window_ParamLimits

0xb307,	// (0x0006c615) popup_number_entry_window_cp01_ParamLimits

0x81a2,	// (0x000694b0) phacti_button_pane_ParamLimits

0x81a2,	// (0x000694b0) phacti_button_pane

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp14

0xb38e,	// (0x0006c69c) phacti_button_pane_t1

0x81b3,	// (0x000694c1) main_touch_calib_button_pane_ParamLimits

0x81b3,	// (0x000694c1) main_touch_calib_button_pane

0xc079,	// (0x0006d387) bg_button_pane_cp18_ParamLimits

0xc079,	// (0x0006d387) bg_button_pane_cp18

0xb39c,	// (0x0006c6aa) main_touch_calib_button_pane_t1_ParamLimits

0xb39c,	// (0x0006c6aa) main_touch_calib_button_pane_t1

0xb3b2,	// (0x0006c6c0) main_touch_calib_button_pane_t2_ParamLimits

0xb3b2,	// (0x0006c6c0) main_touch_calib_button_pane_t2

0x0001,

0xfcb7,	// (0x00070fc5) main_touch_calib_button_pane_t_ParamLimits

0xfcb7,	// (0x00070fc5) main_touch_calib_button_pane_t

0xb8ce,	// (0x0006cbdc) cell_ncimui_button_pane

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp032

0xb3d0,	// (0x0006c6de) cell_ncimui_button_pane_t1

0xa403,	// (0x0006b711) image3_infobar_pane_ParamLimits

0xa403,	// (0x0006b711) image3_infobar_pane

0x7357,	// (0x00068665) fs_bigclock_status_pane_ParamLimits

0x7357,	// (0x00068665) fs_bigclock_status_pane

0x7364,	// (0x00068672) main_fs_bigclock_clock_pane_ParamLimits

0x7364,	// (0x00068672) main_fs_bigclock_clock_pane

0x7382,	// (0x00068690) main_fs_bigclock_indi_pane_ParamLimits

0x7382,	// (0x00068690) main_fs_bigclock_indi_pane

0x73b4,	// (0x000686c2) main_fs_bigclock_swipe_pane_ParamLimits

0x73b4,	// (0x000686c2) main_fs_bigclock_swipe_pane

0xb8ce,	// (0x0006cbdc) main_fs_clock_dumped_data

0xac8c,	// (0x0006bf9a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xac8c,	// (0x0006bf9a) list_single_fs_bigclock_indicator_pane_g1

0xaca7,	// (0x0006bfb5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xaca7,	// (0x0006bfb5) list_single_fs_bigclock_indicator_pane_g2

0xacc1,	// (0x0006bfcf) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xacc1,	// (0x0006bfcf) list_single_fs_bigclock_indicator_pane_g3

0xacdb,	// (0x0006bfe9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xacdb,	// (0x0006bfe9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb65,	// (0x00070e73) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb65,	// (0x00070e73) list_single_fs_bigclock_indicator_pane_g

0xad06,	// (0x0006c014) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xad06,	// (0x0006c014) list_single_fs_bigclock_indicator_pane_t1

0xad2e,	// (0x0006c03c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xad2e,	// (0x0006c03c) list_single_fs_bigclock_indicator_pane_t2

0xad56,	// (0x0006c064) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xad56,	// (0x0006c064) list_single_fs_bigclock_indicator_pane_t3

0xad7e,	// (0x0006c08c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xad7e,	// (0x0006c08c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb70,	// (0x00070e7e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb70,	// (0x00070e7e) list_single_fs_bigclock_indicator_pane_t

0xb3de,	// (0x0006c6ec) image3_infobar_fav_pane_ParamLimits

0xb3de,	// (0x0006c6ec) image3_infobar_fav_pane

0xb3ee,	// (0x0006c6fc) image3_infobar_loc_pane_ParamLimits

0xb3ee,	// (0x0006c6fc) image3_infobar_loc_pane

0xb402,	// (0x0006c710) image3_infobar_time_pane_ParamLimits

0xb402,	// (0x0006c710) image3_infobar_time_pane

0xc01b,	// (0x0006d329) image3_infobar_time_pane_g1

0xb412,	// (0x0006c720) image3_infobar_time_pane_t1

0xc01b,	// (0x0006d329) image3_infobar_loc_pane_g1

0xb420,	// (0x0006c72e) image3_infobar_loc_pane_g2

0x0001,

0xfcbc,	// (0x00070fca) image3_infobar_loc_pane_g

0xb428,	// (0x0006c736) image3_infobar_loc_pane_t1

0xc01b,	// (0x0006d329) image3_infobar_fav_pane_g1

0xb436,	// (0x0006c744) image3_infobar_fav_pane_g2

0x0001,

0xfcc1,	// (0x00070fcf) image3_infobar_fav_pane_g

0xb43e,	// (0x0006c74c) fs_bigclock_status_battery_pane

0xb447,	// (0x0006c755) fs_bigclock_status_signal_pane

0xb450,	// (0x0006c75e) fs_bigclock_status_title_pane

0xb459,	// (0x0006c767) fs_bigclock_status_signal_pane_g1

0xb462,	// (0x0006c770) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcc6,	// (0x00070fd4) fs_bigclock_status_signal_pane_g

0xb46a,	// (0x0006c778) fs_bigclock_status_battery_pane_g1

0xb473,	// (0x0006c781) fs_bigclock_status_battery_pane_g2

0x0001,

0xfccb,	// (0x00070fd9) fs_bigclock_status_battery_pane_g

0xb47b,	// (0x0006c789) fs_bigclock_status_title_pane_t1

0x81c8,	// (0x000694d6) main_fs_bigclock_clock_pane_g1

0x81c8,	// (0x000694d6) main_fs_bigclock_clock_pane_g2

0x81d9,	// (0x000694e7) main_fs_bigclock_clock_pane_g3

0x81d9,	// (0x000694e7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcd0,	// (0x00070fde) main_fs_bigclock_clock_pane_g

0x81ec,	// (0x000694fa) main_fs_bigclock_clock_pane_t1

0x8202,	// (0x00069510) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcd9,	// (0x00070fe7) main_fs_bigclock_clock_pane_t

0xb489,	// (0x0006c797) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb489,	// (0x0006c797) list_single_fs_bigclock_indicator_pane

0xb49a,	// (0x0006c7a8) list_single_fs_bigclock_pane_ParamLimits

0xb49a,	// (0x0006c7a8) list_single_fs_bigclock_pane

0xb4c0,	// (0x0006c7ce) main_fs_bigclock_indicator_pane_t1

0xb4cf,	// (0x0006c7dd) list_single_fs_bigclock_pane_g1

0xb4d7,	// (0x0006c7e5) list_single_fs_bigclock_pane_t1

0xc01b,	// (0x0006d329) main_fs_bigclock_swipe_pane_g1

0xb51a,	// (0x0006c828) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcea,	// (0x00070ff8) main_fs_bigclock_swipe_pane_g

0xb522,	// (0x0006c830) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xb522,	// (0x0006c830) main_fs_bigclock_swipe_pane_t1

0x2505,	// (0x00063813) call_type_pane_ParamLimits

0xb8ce,	// (0x0006cbdc) main_btmg_pane

0x7e57,	// (0x00069165) list_single_cale_mrui_row_pane_g2_ParamLimits

0x7e57,	// (0x00069165) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc5d,	// (0x00070f6b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc5d,	// (0x00070f6b) list_single_cale_mrui_row_pane_g

0x80d5,	// (0x000693e3) list_recal_vselct_arw_lo_pane

0xb359,	// (0x0006c667) list_recal_vselct_arw_up_pane

0x80dd,	// (0x000693eb) list_recal_vselct_pane

0x825c,	// (0x0006956a) btmg_button_pane

0x8266,	// (0x00069574) main_btmg_pane_g1

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp044

0xb53f,	// (0x0006c84d) btmg_button_pane_t1

0xe4d1,	// (0x0006f7df) aid_listscroll_gen

0xbf68,	// (0x0006d276) main_cntbar_detail_pane

0xb04f,	// (0x0006c35d) list_cmail_folder_pane

0x9f55,	// (0x0006b263) sp_fs_scroll_pane_cp03_ParamLimits

0x8270,	// (0x0006957e) list_single_fs_dyc_pane_cp01_ParamLimits

0x8270,	// (0x0006957e) list_single_fs_dyc_pane_cp01

0xb54d,	// (0x0006c85b) aid_size_cmail_indent

0x8287,	// (0x00069595) list_single_dyc_row_pane_cp01

0x82bc,	// (0x000695ca) cntbar_detail_list_pane_ParamLimits

0x82bc,	// (0x000695ca) cntbar_detail_list_pane

0x8308,	// (0x00069616) main_cntbar_detail_cont_pane_ParamLimits

0x8308,	// (0x00069616) main_cntbar_detail_cont_pane

0x9f55,	// (0x0006b263) scroll_pane_cp032_ParamLimits

0x9f55,	// (0x0006b263) scroll_pane_cp032

0x831c,	// (0x0006962a) cntbar_detail_list_event_pane_ParamLimits

0x831c,	// (0x0006962a) cntbar_detail_list_event_pane

0x82cc,	// (0x000695da) cntbar_detail_list_shct_pane

0xc4b9,	// (0x0006d7c7) aid_list_gen

0xb556,	// (0x0006c864) aid_scroll

0xb55f,	// (0x0006c86d) aid_size_touch_scroll_bar

0x741a,	// (0x00068728) aid_list_double

0x832c,	// (0x0006963a) aid_list_single

0xb568,	// (0x0006c876) aid_list_single_lg

0x8335,	// (0x00069643) aid_list_z_g_a_sm

0x833d,	// (0x0006964b) aid_list_z_g_d

0x8345,	// (0x00069653) aid_txt_z_prm

0x8353,	// (0x00069661) aid_txt_z_prm_cp01

0x8361,	// (0x0006966f) aid_txt_z_sec

0x836f,	// (0x0006967d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x836f,	// (0x0006967d) main_cntbar_detail_cont_pane_g1

0x8383,	// (0x00069691) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8383,	// (0x00069691) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcef,	// (0x00070ffd) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcef,	// (0x00070ffd) main_cntbar_detail_cont_pane_g

0xb571,	// (0x0006c87f) main_cntbar_detail_cont_pane_t1

0xb57f,	// (0x0006c88d) main_cntbar_detail_cont_pane_t2

0xb58d,	// (0x0006c89b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcf4,	// (0x00071002) main_cntbar_detail_cont_pane_t

0x8393,	// (0x000696a1) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8393,	// (0x000696a1) cell_cntbar_detail_list_shct_pane

0xb59b,	// (0x0006c8a9) cntbar_detail_list_shct_pane_g1

0xb5a4,	// (0x0006c8b2) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcfb,	// (0x00071009) cntbar_detail_list_shct_pane_g

0x83a7,	// (0x000696b5) cntbar_detail_list_event_pane_g1_ParamLimits

0x83a7,	// (0x000696b5) cntbar_detail_list_event_pane_g1

0x83b3,	// (0x000696c1) cntbar_detail_list_event_pane_g2_ParamLimits

0x83b3,	// (0x000696c1) cntbar_detail_list_event_pane_g2

0x0005,

0xfd00,	// (0x0007100e) cntbar_detail_list_event_pane_g_ParamLimits

0xfd00,	// (0x0007100e) cntbar_detail_list_event_pane_g

0x841f,	// (0x0006972d) cntbar_detail_list_event_pane_t1_ParamLimits

0x841f,	// (0x0006972d) cntbar_detail_list_event_pane_t1

0x8434,	// (0x00069742) cntbar_detail_list_event_pane_t2_ParamLimits

0x8434,	// (0x00069742) cntbar_detail_list_event_pane_t2

0x0002,

0xfd0d,	// (0x0007101b) cntbar_detail_list_event_pane_t_ParamLimits

0xfd0d,	// (0x0007101b) cntbar_detail_list_event_pane_t

0xc01b,	// (0x0006d329) cell_cntbar_detail_list_shct_pane_g1

0xd1b5,	// (0x0006e4c3) navi_pane_mv_g3

0xbf68,	// (0x0006d276) main_cntbar_detail_pane_ParamLimits

0xb8ce,	// (0x0006cbdc) main_notif_wgt_pane

0xa183,	// (0x0006b491) aid_tch_main_mp4_pane_g4

0xa3fb,	// (0x0006b709) popup_slider_window_cp02

0x80cb,	// (0x000693d9) list_recal_day_event_pane

0x8290,	// (0x0006959e) cntbar_detail_btn_pane_ParamLimits

0x8290,	// (0x0006959e) cntbar_detail_btn_pane

0x82a6,	// (0x000695b4) cntbar_detail_btn_pane_cp01_ParamLimits

0x82a6,	// (0x000695b4) cntbar_detail_btn_pane_cp01

0x82cc,	// (0x000695da) cntbar_detail_list_shct_pane_ParamLimits

0x82dc,	// (0x000695ea) cntbar_detail_pane_g1_ParamLimits

0x82dc,	// (0x000695ea) cntbar_detail_pane_g1

0x82ec,	// (0x000695fa) cntbar_detail_pane_t1_ParamLimits

0x82ec,	// (0x000695fa) cntbar_detail_pane_t1

0x83bf,	// (0x000696cd) cntbar_detail_list_event_pane_g3_ParamLimits

0x83bf,	// (0x000696cd) cntbar_detail_list_event_pane_g3

0x83d7,	// (0x000696e5) cntbar_detail_list_event_pane_g4_ParamLimits

0x83d7,	// (0x000696e5) cntbar_detail_list_event_pane_g4

0x83ef,	// (0x000696fd) cntbar_detail_list_event_pane_g5_ParamLimits

0x83ef,	// (0x000696fd) cntbar_detail_list_event_pane_g5

0x8407,	// (0x00069715) cntbar_detail_list_event_pane_g6_ParamLimits

0x8407,	// (0x00069715) cntbar_detail_list_event_pane_g6

0x8449,	// (0x00069757) cntbar_detail_list_event_pane_t3_ParamLimits

0x8449,	// (0x00069757) cntbar_detail_list_event_pane_t3

0x845b,	// (0x00069769) popup_notif_wgt_window_ParamLimits

0x845b,	// (0x00069769) popup_notif_wgt_window

0x8474,	// (0x00069782) popup_submenu_window_cp01_ParamLimits

0x8474,	// (0x00069782) popup_submenu_window_cp01

0xc252,	// (0x0006d560) bg_popup_window_pane_cp10

0xb5ad,	// (0x0006c8bb) listscroll_notif_wgt_pane

0xb5bf,	// (0x0006c8cd) list_notif_wgt_window

0xb5c8,	// (0x0006c8d6) scroll_pane_cp033

0x848a,	// (0x00069798) list_notif_wgt_row_pane_ParamLimits

0x848a,	// (0x00069798) list_notif_wgt_row_pane

0xb5d1,	// (0x0006c8df) aid_size_list_notif_wgt_del

0xb5de,	// (0x0006c8ec) list_notif_wgt_row_pane_g1

0xb5ea,	// (0x0006c8f8) list_notif_wgt_row_pane_g2

0xb5f9,	// (0x0006c907) list_notif_wgt_row_pane_g3

0x0002,

0xfd14,	// (0x00071022) list_notif_wgt_row_pane_g

0xb606,	// (0x0006c914) list_notif_wgt_row_pane_t1

0xb61c,	// (0x0006c92a) list_notif_wgt_row_pane_t2

0xb62e,	// (0x0006c93c) list_notif_wgt_row_pane_t3

0x0002,

0xfd1b,	// (0x00071029) list_notif_wgt_row_pane_t

0x5ccf,	// (0x00066fdd) list_recal_day_event_pane_g1

0xb640,	// (0x0006c94e) list_recal_day_event_pane_t1

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp045

0xb64f,	// (0x0006c95d) cntbar_detail_btn_pane_t1

0xd2d6,	// (0x0006e5e4) main_callh_pane_ParamLimits

0xd2d6,	// (0x0006e5e4) main_callh_pane

0xb8ce,	// (0x0006cbdc) main_coverflow0_pane

0xb8ce,	// (0x0006cbdc) main_wgtman_pane

0x73cc,	// (0x000686da) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x73cc,	// (0x000686da) main_fs_bigclock_unlock_btn_pane

0x7a5e,	// (0x00068d6c) bg_button_pane_cp16

0x7a6e,	// (0x00068d7c) cell_tport_appsw_pane_g3

0x849a,	// (0x000697a8) cf0_flow_pane_ParamLimits

0x849a,	// (0x000697a8) cf0_flow_pane

0xb65d,	// (0x0006c96b) listscroll_cf0_pane

0xb668,	// (0x0006c976) main_cf0_pane_g1

0x84af,	// (0x000697bd) main_cf0_pane_t1_ParamLimits

0x84af,	// (0x000697bd) main_cf0_pane_t1

0x84c6,	// (0x000697d4) main_cf0_pane_t2_ParamLimits

0x84c6,	// (0x000697d4) main_cf0_pane_t2

0x0001,

0xfd27,	// (0x00071035) main_cf0_pane_t_ParamLimits

0xfd27,	// (0x00071035) main_cf0_pane_t

0xb67a,	// (0x0006c988) scroll_pane_cp11

0x84dd,	// (0x000697eb) cf0_flow_pane_g1

0x84e5,	// (0x000697f3) cf0_flow_pane_g2

0x0001,

0xfd2c,	// (0x0007103a) cf0_flow_pane_g

0x84ed,	// (0x000697fb) cf0_flow_pane_t1

0xb8ce,	// (0x0006cbdc) main_call6_pane

0xb8ce,	// (0x0006cbdc) main_calllock_pane

0x84fb,	// (0x00069809) call6_btn_grp_pane_ParamLimits

0x84fb,	// (0x00069809) call6_btn_grp_pane

0x8515,	// (0x00069823) call6_pane_g1_ParamLimits

0x8515,	// (0x00069823) call6_pane_g1

0x852b,	// (0x00069839) popup_call6_1st_window_ParamLimits

0x852b,	// (0x00069839) popup_call6_1st_window

0x853c,	// (0x0006984a) popup_call6_2nd_window_ParamLimits

0x853c,	// (0x0006984a) popup_call6_2nd_window

0x854d,	// (0x0006985b) cell_call6_btn_pane_ParamLimits

0x854d,	// (0x0006985b) cell_call6_btn_pane

0xc252,	// (0x0006d560) bg_popup_call2_in_pane_cp03

0xb685,	// (0x0006c993) popup_call6_1st_window_g1

0xb68d,	// (0x0006c99b) popup_call6_1st_window_g2

0xb695,	// (0x0006c9a3) popup_call6_1st_window_g3

0x0002,

0xfd31,	// (0x0007103f) popup_call6_1st_window_g

0xb69d,	// (0x0006c9ab) popup_call6_1st_window_t1

0xb6ac,	// (0x0006c9ba) popup_call6_1st_window_t2

0xb6ba,	// (0x0006c9c8) popup_call6_1st_window_t3

0x0002,

0xfd38,	// (0x00071046) popup_call6_1st_window_t

0xc252,	// (0x0006d560) bg_popup_call2_in_pane_cp04

0xb6c8,	// (0x0006c9d6) popup_call6_2nd_window_g1

0xb6d0,	// (0x0006c9de) popup_call6_2nd_window_g2

0xb6d8,	// (0x0006c9e6) popup_call6_2nd_window_g3

0x0002,

0xfd3f,	// (0x0007104d) popup_call6_2nd_window_g

0xb6e0,	// (0x0006c9ee) popup_call6_2nd_window_t1

0x9e85,	// (0x0006b193) bg_button_pane_cp15

0xb6ef,	// (0x0006c9fd) cell_call6_btn_pane_g1

0xb6f8,	// (0x0006ca06) cell_call6_btn_pane_t1

0x8560,	// (0x0006986e) listscroll_wgtman_pane_ParamLimits

0x8560,	// (0x0006986e) listscroll_wgtman_pane

0x8581,	// (0x0006988f) wgtman_btn_pane_ParamLimits

0x8581,	// (0x0006988f) wgtman_btn_pane

0xcfbc,	// (0x0006e2ca) aid_scroll_copy1

0xb707,	// (0x0006ca15) list_wgtman_pane

0x85c4,	// (0x000698d2) wgtman_btn_pane_g1_ParamLimits

0x85c4,	// (0x000698d2) wgtman_btn_pane_g1

0x85f0,	// (0x000698fe) wgtman_btn_pane_t1_ParamLimits

0x85f0,	// (0x000698fe) wgtman_btn_pane_t1

0xb711,	// (0x0006ca1f) wgtman_btn_pane_t2_ParamLimits

0xb711,	// (0x0006ca1f) wgtman_btn_pane_t2

0x0001,

0xfd46,	// (0x00071054) wgtman_btn_pane_t_ParamLimits

0xfd46,	// (0x00071054) wgtman_btn_pane_t

0x862d,	// (0x0006993b) listrow_wgtman_pane_ParamLimits

0x862d,	// (0x0006993b) listrow_wgtman_pane

0x863f,	// (0x0006994d) listrow_wgtman_pane_g1

0x864c,	// (0x0006995a) listrow_wgtman_pane_g2

0x0001,

0xfd4b,	// (0x00071059) listrow_wgtman_pane_g

0x866a,	// (0x00069978) listrow_wgtman_pane_t1

0x8682,	// (0x00069990) listrow_wgtman_pane_t2

0x0001,

0xfd50,	// (0x0007105e) listrow_wgtman_pane_t

0x86a8,	// (0x000699b6) wait_bar_pane_cp09

0xb728,	// (0x0006ca36) main_calllock_btn_pane

0xb732,	// (0x0006ca40) main_calllock_pane_g1

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp17

0xb73a,	// (0x0006ca48) main_calllock_btn_pane_g1

0xb743,	// (0x0006ca51) main_calllock_btn_pane_t1

0xb8ce,	// (0x0006cbdc) main_dialer3_pane

0xb8ce,	// (0x0006cbdc) main_fmrd2_pane

0xc01b,	// (0x0006d329) main_fs_bigclock_unlock_btn_pane_g1

0x86c2,	// (0x000699d0) main_fs_bigclock_unlock_btn_pane_t1

0x86d0,	// (0x000699de) area_fmrd2_info_pane_ParamLimits

0x86d0,	// (0x000699de) area_fmrd2_info_pane

0x86e1,	// (0x000699ef) area_fmrd2_visual_pane_ParamLimits

0x86e1,	// (0x000699ef) area_fmrd2_visual_pane

0x86ef,	// (0x000699fd) fmrd2_indi_pane_ParamLimits

0x86ef,	// (0x000699fd) fmrd2_indi_pane

0x86fc,	// (0x00069a0a) area_fmrd2_visual_pane_g1

0x8704,	// (0x00069a12) area_fmrd2_visual_pane_t1

0x8714,	// (0x00069a22) area_fmrd2_visual_pane_t2

0x8724,	// (0x00069a32) area_fmrd2_visual_pane_t3

0x0002,

0xfd5a,	// (0x00071068) area_fmrd2_visual_pane_t

0x8734,	// (0x00069a42) area_fmrd2_info_pane_g1

0x873c,	// (0x00069a4a) area_fmrd2_info_pane_t1

0x874c,	// (0x00069a5a) area_fmrd2_info_pane_t2

0x875c,	// (0x00069a6a) area_fmrd2_info_pane_t3

0x876c,	// (0x00069a7a) area_fmrd2_info_pane_t4

0x0003,

0xfd61,	// (0x0007106f) area_fmrd2_info_pane_t

0x877a,	// (0x00069a88) fmrd2_indi_pane_t1

0x878a,	// (0x00069a98) fmrd2_indi_pane_t2

0x879a,	// (0x00069aa8) fmrd2_indi_pane_t3

0x0002,

0xfd6a,	// (0x00071078) fmrd2_indi_pane_t

0xacea,	// (0x0006bff8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xacea,	// (0x0006bff8) list_single_fs_bigclock_indicator_pane_g5

0xad9b,	// (0x0006c0a9) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xad9b,	// (0x0006c0a9) list_single_fs_bigclock_indicator_pane_t5

0x7cb6,	// (0x00068fc4) aid_cell_bcale_month_pane_ParamLimits

0x7cb6,	// (0x00068fc4) aid_cell_bcale_month_pane

0x7cdd,	// (0x00068feb) bcale_month_pane_ParamLimits

0x7cdd,	// (0x00068feb) bcale_month_pane

0x7d01,	// (0x0006900f) bcale_preview_pane_ParamLimits

0x7d01,	// (0x0006900f) bcale_preview_pane

0xb4d7,	// (0x0006c7e5) list_single_fs_bigclock_pane_t1_ParamLimits

0xb4f6,	// (0x0006c804) list_single_fs_bigclock_pane_t2_ParamLimits

0xb4f6,	// (0x0006c804) list_single_fs_bigclock_pane_t2

0x0001,

0xfce5,	// (0x00070ff3) list_single_fs_bigclock_pane_t_ParamLimits

0xfce5,	// (0x00070ff3) list_single_fs_bigclock_pane_t

0x86ba,	// (0x000699c8) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd55,	// (0x00071063) main_fs_bigclock_unlock_btn_pane_g

0x87aa,	// (0x00069ab8) aid_dia3_key_size_ParamLimits

0x87aa,	// (0x00069ab8) aid_dia3_key_size

0x87b9,	// (0x00069ac7) aid_dia3_listrow_size_ParamLimits

0x87b9,	// (0x00069ac7) aid_dia3_listrow_size

0x87ce,	// (0x00069adc) dia3_keypad_fun_pane_ParamLimits

0x87ce,	// (0x00069adc) dia3_keypad_fun_pane

0x87ea,	// (0x00069af8) dia3_keypad_num_pane_ParamLimits

0x87ea,	// (0x00069af8) dia3_keypad_num_pane

0x8805,	// (0x00069b13) dia3_listscroll_pane_ParamLimits

0x8805,	// (0x00069b13) dia3_listscroll_pane

0x8818,	// (0x00069b26) dia3_numentry_pane_ParamLimits

0x8818,	// (0x00069b26) dia3_numentry_pane

0xb752,	// (0x0006ca60) dia3_list_pane

0xb75d,	// (0x0006ca6b) scroll_pane_cp12

0xb8ce,	// (0x0006cbdc) bg_dia3_numentry_pane

0x8830,	// (0x00069b3e) dia3_numentry_pane_t1

0x883f,	// (0x00069b4d) cell_dia3_key_num_pane

0x8847,	// (0x00069b55) cell_dia3_key0_fun_pane_ParamLimits

0x8847,	// (0x00069b55) cell_dia3_key0_fun_pane

0x885b,	// (0x00069b69) cell_dia3_key1_fun_pane_ParamLimits

0x885b,	// (0x00069b69) cell_dia3_key1_fun_pane

0x8873,	// (0x00069b81) dia3_listrow_pane

0xaa3d,	// (0x0006bd4b) bg_dia3_numentry_pane_g1

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp21

0xb768,	// (0x0006ca76) cell_dia3_key_num_pane_t1

0xb776,	// (0x0006ca84) cell_dia3_key_num_pane_t2

0xb785,	// (0x0006ca93) cell_dia3_key_num_pane_t3

0xb794,	// (0x0006caa2) cell_dia3_key_num_pane_t4

0x0003,

0xfd71,	// (0x0007107f) cell_dia3_key_num_pane_t

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp19

0x8885,	// (0x00069b93) cell_dia3_key0_fun_pane_g1

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp20

0x888d,	// (0x00069b9b) cell_dia3_key1_fun_pane_g1

0x8895,	// (0x00069ba3) area_left_week_number_pane

0x88a1,	// (0x00069baf) area_top_day_name_pane

0x88b4,	// (0x00069bc2) frame_month_view_pane

0xb7a3,	// (0x0006cab1) grid_month_view_pane

0x88c7,	// (0x00069bd5) cell_top_day_name_pane_ParamLimits

0x88c7,	// (0x00069bd5) cell_top_day_name_pane

0x88f4,	// (0x00069c02) cell_area_left_week_number_pane_ParamLimits

0x88f4,	// (0x00069c02) cell_area_left_week_number_pane

0x8908,	// (0x00069c16) cell_month_view_pane_ParamLimits

0x8908,	// (0x00069c16) cell_month_view_pane

0xb7b1,	// (0x0006cabf) frm_month_g1

0x8935,	// (0x00069c43) frm_month_g2

0x8948,	// (0x00069c56) frm_month_g3

0x895b,	// (0x00069c69) frm_month_g4

0x896e,	// (0x00069c7c) frm_month_g5

0x8981,	// (0x00069c8f) frm_month_g6

0x8994,	// (0x00069ca2) frm_month_g7

0xb7be,	// (0x0006cacc) frm_month_g8

0x89a7,	// (0x00069cb5) frm_month_g9

0x89b7,	// (0x00069cc5) frm_month_g10

0x89c7,	// (0x00069cd5) frm_month_g11

0x89d7,	// (0x00069ce5) frm_month_g12

0x89e9,	// (0x00069cf7) frm_month_g13

0x89fb,	// (0x00069d09) frm_month_g14

0x8a0f,	// (0x00069d1d) frm_month_g15

0x8a23,	// (0x00069d31) frm_month_g16

0x000f,

0xfd7a,	// (0x00071088) frm_month_g

0xb7cb,	// (0x0006cad9) cell_top_day_name_pane_t1

0x8a37,	// (0x00069d45) cell_area_left_week_number_pane_g1

0x8a43,	// (0x00069d51) cell_area_left_week_number_pane_t1

0xbfcf,	// (0x0006d2dd) cell_month_view_pane_g1

0x8a56,	// (0x00069d64) cell_month_view_pane_t1

0xb8ce,	// (0x0006cbdc) main_fps_pane

0xaf68,	// (0x0006c276) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xaf68,	// (0x0006c276) cmail_ddmenu_btn02_pane_cp1

0xaf84,	// (0x0006c292) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xaf84,	// (0x0006c292) cmail_ddmenu_btn02_pane_cp2

0x809b,	// (0x000693a9) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x809b,	// (0x000693a9) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc98,	// (0x00070fa6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc98,	// (0x00070fa6) cmail_ddmenu_btn02_pane_g

0x80b9,	// (0x000693c7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x80b9,	// (0x000693c7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc9d,	// (0x00070fab) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc9d,	// (0x00070fab) cmail_ddmenu_btn02_pane_t

0x8a69,	// (0x00069d77) fps_text_pane_ParamLimits

0x8a69,	// (0x00069d77) fps_text_pane

0x8a80,	// (0x00069d8e) main_fps_pane_g1_ParamLimits

0x8a80,	// (0x00069d8e) main_fps_pane_g1

0x8a9a,	// (0x00069da8) wait_bar_pane_cp010_ParamLimits

0x8a9a,	// (0x00069da8) wait_bar_pane_cp010

0x8aab,	// (0x00069db9) fps_text_pane_t1_ParamLimits

0x8aab,	// (0x00069db9) fps_text_pane_t1

0xa48b,	// (0x0006b799) cam4_image_uncrop_pane_g1

0xa494,	// (0x0006b7a2) cam4_image_uncrop_pane_g2

0x4e8d,	// (0x0006619b) cam4_image_uncrop_pane_g3

0x4e96,	// (0x000661a4) cam4_image_uncrop_pane_g4

0x0003,

0xf7f4,	// (0x00070b02) cam4_image_uncrop_pane_g

0x8873,	// (0x00069b81) dia3_listrow_pane_ParamLimits

0xb8ce,	// (0x0006cbdc) main_phob2_pane

0x7a2f,	// (0x00068d3d) cell_tport_appsw_pane_cp02_ParamLimits

0x7a2f,	// (0x00068d3d) cell_tport_appsw_pane_cp02

0x7a43,	// (0x00068d51) cell_tport_appsw_pane_cp03_ParamLimits

0x7a43,	// (0x00068d51) cell_tport_appsw_pane_cp03

0xb8ce,	// (0x0006cbdc) phob2_contact_card_pane

0xb8ce,	// (0x0006cbdc) phob2_listscroll_pane

0xb7de,	// (0x0006caec) phob2_list_pane

0xb31c,	// (0x0006c62a) scroll_pane_cp034

0x8ac3,	// (0x00069dd1) phob2_cc_data_pane_ParamLimits

0x8ac3,	// (0x00069dd1) phob2_cc_data_pane

0x8ae2,	// (0x00069df0) phob2_cc_listscroll_pane_ParamLimits

0x8ae2,	// (0x00069df0) phob2_cc_listscroll_pane

0x862d,	// (0x0006993b) list_double_large_graphic_phob2_pane_ParamLimits

0x862d,	// (0x0006993b) list_double_large_graphic_phob2_pane

0x8b00,	// (0x00069e0e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8b00,	// (0x00069e0e) list_double_large_graphic_phob2_pane_g1

0x8b0d,	// (0x00069e1b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8b0d,	// (0x00069e1b) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd9b,	// (0x000710a9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd9b,	// (0x000710a9) list_double_large_graphic_phob2_pane_g

0x8b33,	// (0x00069e41) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8b33,	// (0x00069e41) list_double_large_graphic_phob2_pane_t1

0x8b48,	// (0x00069e56) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8b48,	// (0x00069e56) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfda4,	// (0x000710b2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfda4,	// (0x000710b2) list_double_large_graphic_phob2_pane_t

0xb8ce,	// (0x0006cbdc) list_highlight_pane_cp024

0xb7e6,	// (0x0006caf4) phob2_cc_button_pane

0x8b5d,	// (0x00069e6b) phob2_cc_data_pane_g1_ParamLimits

0x8b5d,	// (0x00069e6b) phob2_cc_data_pane_g1

0x8b74,	// (0x00069e82) phob2_cc_data_pane_g2_ParamLimits

0x8b74,	// (0x00069e82) phob2_cc_data_pane_g2

0x0001,

0xfda9,	// (0x000710b7) phob2_cc_data_pane_g_ParamLimits

0xfda9,	// (0x000710b7) phob2_cc_data_pane_g

0x8b86,	// (0x00069e94) phob2_cc_data_pane_t1_ParamLimits

0x8b86,	// (0x00069e94) phob2_cc_data_pane_t1

0x8b9e,	// (0x00069eac) phob2_cc_data_pane_t2_ParamLimits

0x8b9e,	// (0x00069eac) phob2_cc_data_pane_t2

0x8bb6,	// (0x00069ec4) phob2_cc_data_pane_t3_ParamLimits

0x8bb6,	// (0x00069ec4) phob2_cc_data_pane_t3

0x0002,

0xfdae,	// (0x000710bc) phob2_cc_data_pane_t_ParamLimits

0xfdae,	// (0x000710bc) phob2_cc_data_pane_t

0xb7ee,	// (0x0006cafc) phob2_cc_list_pane_ParamLimits

0xb7ee,	// (0x0006cafc) phob2_cc_list_pane

0x604b,	// (0x00067359) scroll_pane_cp035_ParamLimits

0x604b,	// (0x00067359) scroll_pane_cp035

0xbf68,	// (0x0006d276) bg_button_pane_cp033

0xb7fa,	// (0x0006cb08) phob2_cc_button_pane_g1

0xb806,	// (0x0006cb14) phob2_cc_button_pane_t1

0xb81b,	// (0x0006cb29) phob2_cc_button_pane_t2

0x0001,

0xfdb5,	// (0x000710c3) phob2_cc_button_pane_t

0x8bce,	// (0x00069edc) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8bce,	// (0x00069edc) list_double_large_graphic_phob2_cc_pane

0x8bfe,	// (0x00069f0c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8bfe,	// (0x00069f0c) list_double_large_graphic_phob2_cc_pane_g1

0x8c0a,	// (0x00069f18) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8c0a,	// (0x00069f18) list_double_large_graphic_phob2_cc_pane_g2

0x8c16,	// (0x00069f24) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8c16,	// (0x00069f24) list_double_large_graphic_phob2_cc_pane_g3

0x8c22,	// (0x00069f30) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8c22,	// (0x00069f30) list_double_large_graphic_phob2_cc_pane_g4

0x8c2e,	// (0x00069f3c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8c2e,	// (0x00069f3c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdba,	// (0x000710c8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdba,	// (0x000710c8) list_double_large_graphic_phob2_cc_pane_g

0x8c3a,	// (0x00069f48) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8c3a,	// (0x00069f48) list_double_large_graphic_phob2_cc_pane_t1

0x8c63,	// (0x00069f71) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8c63,	// (0x00069f71) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdc5,	// (0x000710d3) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdc5,	// (0x000710d3) list_double_large_graphic_phob2_cc_pane_t

0xb82d,	// (0x0006cb3b) list_highlight_pane_cp025_ParamLimits

0xb82d,	// (0x0006cb3b) list_highlight_pane_cp025

0xbf68,	// (0x0006d276) bg_button_pane_cp033_ParamLimits

0xb7fa,	// (0x0006cb08) phob2_cc_button_pane_g1_ParamLimits

0xb806,	// (0x0006cb14) phob2_cc_button_pane_t1_ParamLimits

0xb81b,	// (0x0006cb29) phob2_cc_button_pane_t2_ParamLimits

0xfdb5,	// (0x000710c3) phob2_cc_button_pane_t_ParamLimits

0x0a50,	// (0x00061d5e) popup_wgtman_window

0x5705,	// (0x00066a13) scroll_pane_cp038

0x85a6,	// (0x000698b4) wgtman_btn_pane_cp_01_ParamLimits

0x85a6,	// (0x000698b4) wgtman_btn_pane_cp_01

0xb83b,	// (0x0006cb49) wgtman_content_pane

0xb844,	// (0x0006cb52) wgtman_heading_pane

0xb8ce,	// (0x0006cbdc) bg_heading_pane_cp02

0xb84d,	// (0x0006cb5b) wgtman_heading_pane_g1

0xb855,	// (0x0006cb63) wgtman_heading_pane_t1

0xb863,	// (0x0006cb71) scroll_pane_cp036

0xb86b,	// (0x0006cb79) wgtman_list_pane

0xb873,	// (0x0006cb81) wgtman_list_pane_t1_ParamLimits

0xb873,	// (0x0006cb81) wgtman_list_pane_t1

0xa477,	// (0x0006b785) cam4_grid_pane

0x5df1,	// (0x000670ff) bg_button_pane_cp015_ParamLimits

0x5e02,	// (0x00067110) bg_button_pane_cp016_ParamLimits

0x5e0e,	// (0x0006711c) bg_button_pane_cp017_ParamLimits

0x5e6e,	// (0x0006717c) popup_vitu2_query_window_g3_ParamLimits

0x5e6e,	// (0x0006717c) popup_vitu2_query_window_g3

0x5f0f,	// (0x0006721d) popup_vitu2_query_window_t6_ParamLimits

0x5f0f,	// (0x0006721d) popup_vitu2_query_window_t6

0x5f3a,	// (0x00067248) popup_vitu2_query_window_t7_ParamLimits

0x5f3a,	// (0x00067248) popup_vitu2_query_window_t7

0xa48b,	// (0x0006b799) cam4_grid_pane_g1

0xa494,	// (0x0006b7a2) cam4_grid_pane_g2

0xb88d,	// (0x0006cb9b) cam4_grid_pane_g3

0xb896,	// (0x0006cba4) cam4_grid_pane_g4

0x0003,

0xfdca,	// (0x000710d8) cam4_grid_pane_g

0x14f4,	// (0x00062802) aid_placing_vt_slider_lsc_ParamLimits

0x17ff,	// (0x00062b0d) vidtel_button_pane_ParamLimits

0x17ff,	// (0x00062b0d) vidtel_button_pane

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp034

0xb8a1,	// (0x0006cbaf) vidtel_button_pane_g1

0xb8a9,	// (0x0006cbb7) vidtel_button_pane_t1

0x5aec,	// (0x00066dfa) aid_size_vtel_slider_touch

0x604b,	// (0x00067359) scroll_pane_cp039

0x7163,	// (0x00068471) ncim_query_button_pane_cp01_ParamLimits

0x7182,	// (0x00068490) ncimui_query_pane_g1_ParamLimits

0xbf68,	// (0x0006d276) input_focus_pane_cp012_ParamLimits

0xaa7b,	// (0x0006bd89) ncim_query_entry_pane_t1_ParamLimits

0x604b,	// (0x00067359) scroll_pane_cp039_ParamLimits

0xd0a0,	// (0x0006e3ae) navi_pane_bcale_mc_g1

0xd0a8,	// (0x0006e3b6) navi_pane_bcale_mc_t1

0xafb8,	// (0x0006c2c6) main_sp_fs_email_pane_g1

0xafc4,	// (0x0006c2d2) main_sp_fs_email_pane_g2

0x0001,

0xfbc8,	// (0x00070ed6) main_sp_fs_email_pane_g

0xb23b,	// (0x0006c549) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb23b,	// (0x0006c549) list_single_cale_mrui_row_pane_g3

0x812a,	// (0x00069438) list_single_recal_day_pane_g5_event_pane

0x8140,	// (0x0006944e) list_single_recal_day_pane_g7

0xc6bb,	// (0x0006d9c9) list_recal_day_event_pane_cp01

0xc6c4,	// (0x0006d9d2) list_recal_vselct_arw_lo_pane_cp01

0xc6cc,	// (0x0006d9da) list_recal_vselct_arw_up_pane_cp01

0xc6d4,	// (0x0006d9e2) list_recal_vselct_pane_cp01

0x5ccf,	// (0x00066fdd) list_recal_day_event_pane_cp01_g1

0x8c8c,	// (0x00069f9a) list_recal_day_event_pane_cp01_t1

0x8148,	// (0x00069456) list_single_recal_day_pane_t1_ParamLimits

0x815a,	// (0x00069468) list_single_recal_day_pane_t2_ParamLimits

0xfcad,	// (0x00070fbb) list_single_recal_day_pane_t_ParamLimits

0xbf46,	// (0x0006d254) bg_notes_pane_ParamLimits

0xc057,	// (0x0006d365) list_notes_pane_ParamLimits

0x0b9a,	// (0x00061ea8) scroll_pane_cp06_ParamLimits

0xc079,	// (0x0006d387) main_notes_pane_ParamLimits

0xbf68,	// (0x0006d276) main_welc_pane

0x8cc7,	// (0x00069fd5) main_welc_body_pane_ParamLimits

0x8cc7,	// (0x00069fd5) main_welc_body_pane

0x8ce5,	// (0x00069ff3) main_welc_opti_pane_ParamLimits

0x8ce5,	// (0x00069ff3) main_welc_opti_pane

0x8d61,	// (0x0006a06f) main_welc_pane_t1_ParamLimits

0x8d61,	// (0x0006a06f) main_welc_pane_t1

0x8f59,	// (0x0006a267) main_welc_body_row_pane_ParamLimits

0x8f59,	// (0x0006a267) main_welc_body_row_pane

0xbfc1,	// (0x0006d2cf) main_welc_opti_row_pane_ParamLimits

0xbfc1,	// (0x0006d2cf) main_welc_opti_row_pane

0xc6ee,	// (0x0006d9fc) main_welc_opti_row_pane_g1

0x8f6d,	// (0x0006a27b) main_welc_opti_row_pane_t1

0xc6f6,	// (0x0006da04) main_welc_body_row_pane_t1

0xb5b7,	// (0x0006c8c5) popup_notif_wgt_heading_pane

0xb5d1,	// (0x0006c8df) aid_size_list_notif_wgt_del_ParamLimits

0xb5de,	// (0x0006c8ec) list_notif_wgt_row_pane_g1_ParamLimits

0xb5ea,	// (0x0006c8f8) list_notif_wgt_row_pane_g2_ParamLimits

0xb5f9,	// (0x0006c907) list_notif_wgt_row_pane_g3_ParamLimits

0xfd14,	// (0x00071022) list_notif_wgt_row_pane_g_ParamLimits

0xb606,	// (0x0006c914) list_notif_wgt_row_pane_t1_ParamLimits

0xb61c,	// (0x0006c92a) list_notif_wgt_row_pane_t2_ParamLimits

0xb62e,	// (0x0006c93c) list_notif_wgt_row_pane_t3_ParamLimits

0xfd1b,	// (0x00071029) list_notif_wgt_row_pane_t_ParamLimits

0x863f,	// (0x0006994d) listrow_wgtman_pane_g1_ParamLimits

0x864c,	// (0x0006995a) listrow_wgtman_pane_g2_ParamLimits

0xfd4b,	// (0x00071059) listrow_wgtman_pane_g_ParamLimits

0x866a,	// (0x00069978) listrow_wgtman_pane_t1_ParamLimits

0x8682,	// (0x00069990) listrow_wgtman_pane_t2_ParamLimits

0xfd50,	// (0x0007105e) listrow_wgtman_pane_t_ParamLimits

0x86a8,	// (0x000699b6) wait_bar_pane_cp09_ParamLimits

0xb8ce,	// (0x0006cbdc) bg_popup_heading_pane_cp02

0xc705,	// (0x0006da13) popup_notif_wgt_heading_pane_g1

0xc70d,	// (0x0006da1b) popup_notif_wgt_heading_pane_t1

0xb8ce,	// (0x0006cbdc) main_vids_pane

0xb8ce,	// (0x0006cbdc) vids_listscroll_pane

0x8f7c,	// (0x0006a28a) scroll_pane_cp040

0xb8ce,	// (0x0006cbdc) vids_list_pane

0x8f87,	// (0x0006a295) vids_list_double_pane_ParamLimits

0x8f87,	// (0x0006a295) vids_list_double_pane

0x8f98,	// (0x0006a2a6) vids_list_double_pane_g1

0x8fa1,	// (0x0006a2af) vids_list_double_pane_t1

0x8fb1,	// (0x0006a2bf) vids_list_double_pane_t2

0x0001,

0xfde9,	// (0x000710f7) vids_list_double_pane_t

0x9e77,	// (0x0006b185) main_ncimui_pane_ParamLimits

0x6f99,	// (0x000682a7) main_ncimui_pane_g1_ParamLimits

0x6fa5,	// (0x000682b3) main_ncimui_pane_g2_ParamLimits

0x6fa5,	// (0x000682b3) main_ncimui_pane_g2

0x0001,

0xfadb,	// (0x00070de9) main_ncimui_pane_g_ParamLimits

0xfadb,	// (0x00070de9) main_ncimui_pane_g

0x8d00,	// (0x0006a00e) main_welc_pane_g1_ParamLimits

0x8d00,	// (0x0006a00e) main_welc_pane_g1

0x8d15,	// (0x0006a023) main_welc_pane_g2_ParamLimits

0x8d15,	// (0x0006a023) main_welc_pane_g2

0x0003,

0xfdd3,	// (0x000710e1) main_welc_pane_g_ParamLimits

0xfdd3,	// (0x000710e1) main_welc_pane_g

0xbf46,	// (0x0006d254) listscroll_mce_pane_ParamLimits

0xd1f5,	// (0x0006e503) wait_bar_pane_cp10

0xe4d9,	// (0x0006f7e7) main_cale_day_pane_ParamLimits

0xe4d9,	// (0x0006f7e7) main_cale_week_pane_ParamLimits

0xbf46,	// (0x0006d254) main_messa_pane_ParamLimits

0x42b9,	// (0x000655c7) main_clock2_btn_pane_ParamLimits

0x42b9,	// (0x000655c7) main_clock2_btn_pane

0xecf4,	// (0x00070002) main_clock2_btn_pane_cp01_ParamLimits

0xecf4,	// (0x00070002) main_clock2_btn_pane_cp01

0xb20c,	// (0x0006c51a) list_cale_mrui_pane_ParamLimits

0xb672,	// (0x0006c980) main_cf0_pane_g2

0x0001,

0xfd22,	// (0x00071030) main_cf0_pane_g

0x8895,	// (0x00069ba3) area_left_week_number_pane_ParamLimits

0x88a1,	// (0x00069baf) area_top_day_name_pane_ParamLimits

0x88b4,	// (0x00069bc2) frame_month_view_pane_ParamLimits

0xb7a3,	// (0x0006cab1) grid_month_view_pane_ParamLimits

0xb7b1,	// (0x0006cabf) frm_month_g1_ParamLimits

0x8935,	// (0x00069c43) frm_month_g2_ParamLimits

0x8948,	// (0x00069c56) frm_month_g3_ParamLimits

0x895b,	// (0x00069c69) frm_month_g4_ParamLimits

0x896e,	// (0x00069c7c) frm_month_g5_ParamLimits

0x8981,	// (0x00069c8f) frm_month_g6_ParamLimits

0x8994,	// (0x00069ca2) frm_month_g7_ParamLimits

0xb7be,	// (0x0006cacc) frm_month_g8_ParamLimits

0x89a7,	// (0x00069cb5) frm_month_g9_ParamLimits

0x89b7,	// (0x00069cc5) frm_month_g10_ParamLimits

0x89c7,	// (0x00069cd5) frm_month_g11_ParamLimits

0x89d7,	// (0x00069ce5) frm_month_g12_ParamLimits

0x89e9,	// (0x00069cf7) frm_month_g13_ParamLimits

0x89fb,	// (0x00069d09) frm_month_g14_ParamLimits

0x8a0f,	// (0x00069d1d) frm_month_g15_ParamLimits

0x8a23,	// (0x00069d31) frm_month_g16_ParamLimits

0xfd7a,	// (0x00071088) frm_month_g_ParamLimits

0xb7cb,	// (0x0006cad9) cell_top_day_name_pane_t1_ParamLimits

0x8a37,	// (0x00069d45) cell_area_left_week_number_pane_g1_ParamLimits

0x8a43,	// (0x00069d51) cell_area_left_week_number_pane_t1_ParamLimits

0xbfcf,	// (0x0006d2dd) cell_month_view_pane_g1_ParamLimits

0x8a56,	// (0x00069d64) cell_month_view_pane_t1_ParamLimits

0xbf3e,	// (0x0006d24c) main_clock2_btn_pane_g1

0xc71b,	// (0x0006da29) main_clock2_btn_pane_t1

0xbf68,	// (0x0006d276) listscroll_cmail_pane_ParamLimits

0xafb8,	// (0x0006c2c6) main_sp_fs_email_pane_g1_ParamLimits

0xafc4,	// (0x0006c2d2) main_sp_fs_email_pane_g2_ParamLimits

0xfbc8,	// (0x00070ed6) main_sp_fs_email_pane_g_ParamLimits

0xb33a,	// (0x0006c648) list_recal_day_pane_ParamLimits

0xb34b,	// (0x0006c659) mian_recal_day_pane_t1

0x7871,	// (0x00068b7f) list_single_dyc_row_text_pane_t4_ParamLimits

0x7871,	// (0x00068b7f) list_single_dyc_row_text_pane_t4

0x78ba,	// (0x00068bc8) list_single_dyc_row_text_pane_t5_ParamLimits

0x78ba,	// (0x00068bc8) list_single_dyc_row_text_pane_t5

0x7930,	// (0x00068c3e) list_single_dyc_row_text_pane_t6_ParamLimits

0x7930,	// (0x00068c3e) list_single_dyc_row_text_pane_t6

0xc615,	// (0x0006d923) aid_mgn_list_cale_time_pane

0x9e77,	// (0x0006b185) main_gallery2_pane_ParamLimits

0xed0a,	// (0x00070018) main_clock2_pane_cp01_t1

0xed1a,	// (0x00070028) main_clock2_pane_cp01_t3

0x0001,

0xf6f2,	// (0x00070a00) main_clock2_pane_cp01_t

0x0f37,	// (0x00062245) cale_week_scroll_pane_g16_ParamLimits

0x0f37,	// (0x00062245) cale_week_scroll_pane_g16

0xc252,	// (0x0006d560) vorec_slider_pane

0xb8a9,	// (0x0006cbb7) vidtel_button_pane_t1_ParamLimits

0x81c8,	// (0x000694d6) main_fs_bigclock_clock_pane_g1_ParamLimits

0x81c8,	// (0x000694d6) main_fs_bigclock_clock_pane_g2_ParamLimits

0x81d9,	// (0x000694e7) main_fs_bigclock_clock_pane_g3_ParamLimits

0x81d9,	// (0x000694e7) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcd0,	// (0x00070fde) main_fs_bigclock_clock_pane_g_ParamLimits

0x81ec,	// (0x000694fa) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8202,	// (0x00069510) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcd9,	// (0x00070fe7) main_fs_bigclock_clock_pane_t_ParamLimits

0x3b8e,	// (0x00064e9c) main_mup3_lyrics_pane_ParamLimits

0x3b8e,	// (0x00064e9c) main_mup3_lyrics_pane

0x8fd9,	// (0x0006a2e7) main_mup3_lyrics_pane_t1_ParamLimits

0x8fd9,	// (0x0006a2e7) main_mup3_lyrics_pane_t1

0xa16d,	// (0x0006b47b) aid_main_mp4_pane_t1_area

0xa177,	// (0x0006b485) aid_main_mp4_pane_t2_area

0xa221,	// (0x0006b52f) main_mp4_pane_g7_ParamLimits

0xa221,	// (0x0006b52f) main_mp4_pane_g7

0xa22d,	// (0x0006b53b) main_mp4_pane_g8_ParamLimits

0xa22d,	// (0x0006b53b) main_mp4_pane_g8

0x4c44,	// (0x00065f52) aid_call6_pane_g1_size

0x8be8,	// (0x00069ef6) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8be8,	// (0x00069ef6) list_double_large_graphic_phob2_other_pane

0xc5cd,	// (0x0006d8db) list_double_large_graphic_phob2_other_pane_g1

0xb8ce,	// (0x0006cbdc) list_highlight_pane_cp026

0xbf68,	// (0x0006d276) main_welc_pane_ParamLimits

0x762e,	// (0x0006893c) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x762e,	// (0x0006893c) main_sp_fs_ctrlbar_pane_g3

0x7648,	// (0x00068956) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7648,	// (0x00068956) main_sp_fs_ctrlbar_pane_g4

0x767c,	// (0x0006898a) toolbar2_fixed_button_pane_cp01

0x7687,	// (0x00068995) toolbar2_fixed_button_pane_cp02

0x7694,	// (0x000689a2) toolbar2_fixed_button_pane_cp03

0x8cad,	// (0x00069fbb) list_welc_entry_pane_ParamLimits

0x8cad,	// (0x00069fbb) list_welc_entry_pane

0x8d2a,	// (0x0006a038) main_welc_pane_g3_ParamLimits

0x8d2a,	// (0x0006a038) main_welc_pane_g3

0x8d7f,	// (0x0006a08d) main_welc_pane_t2_ParamLimits

0x8d7f,	// (0x0006a08d) main_welc_pane_t2

0x8d9a,	// (0x0006a0a8) main_welc_pane_t3_ParamLimits

0x8d9a,	// (0x0006a0a8) main_welc_pane_t3

0x0005,

0xfddc,	// (0x000710ea) main_welc_pane_t_ParamLimits

0xfddc,	// (0x000710ea) main_welc_pane_t

0x8eca,	// (0x0006a1d8) welc_button_pane_ParamLimits

0x8eca,	// (0x0006a1d8) welc_button_pane

0x8f44,	// (0x0006a252) welc_service_logo_pane_ParamLimits

0x8f44,	// (0x0006a252) welc_service_logo_pane

0x8ff5,	// (0x0006a303) list_single_welc_entry_pane_ParamLimits

0x8ff5,	// (0x0006a303) list_single_welc_entry_pane

0x9006,	// (0x0006a314) list_single_welc_entry_pane_g1

0x900e,	// (0x0006a31c) list_single_welc_entry_pane_t1

0x901c,	// (0x0006a32a) list_single_welc_entry_pane_t2

0x0001,

0xfdee,	// (0x000710fc) list_single_welc_entry_pane_t

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp035

0x902a,	// (0x0006a338) welc_button_pane_t1

0xc729,	// (0x0006da37) welc_service_logo_pane_g1

0xc732,	// (0x0006da40) welc_service_logo_pane_g2

0x0001,

0x06c4,	// (0x000619d2) welc_service_logo_pane_g

0x9e85,	// (0x0006b193) main_int_radio_pane

0xc0f0,	// (0x0006d3fe) list_single_fs_dyc_pane_g1

0x8b19,	// (0x00069e27) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8b19,	// (0x00069e27) list_double_large_graphic_phob2_pane_g3

0x8b25,	// (0x00069e33) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8b25,	// (0x00069e33) list_double_large_graphic_phob2_pane_g4

0x9038,	// (0x0006a346) main_int_radio1_pane_ParamLimits

0x9038,	// (0x0006a346) main_int_radio1_pane

0xc972,	// (0x0006dc80) find_pane_cp02

0x9055,	// (0x0006a363) input_focus_pane_cp12_ParamLimits

0x9055,	// (0x0006a363) input_focus_pane_cp12

0x9065,	// (0x0006a373) input_focus_pane_cp13_ParamLimits

0x9065,	// (0x0006a373) input_focus_pane_cp13

0x9079,	// (0x0006a387) input_focus_pane_cp14_ParamLimits

0x9079,	// (0x0006a387) input_focus_pane_cp14

0xc97b,	// (0x0006dc89) int_radio1_listscroll_pane

0x908d,	// (0x0006a39b) main_int_radio1_pane_g1_ParamLimits

0x908d,	// (0x0006a39b) main_int_radio1_pane_g1

0x90a5,	// (0x0006a3b3) main_int_radio1_pane_t1_ParamLimits

0x90a5,	// (0x0006a3b3) main_int_radio1_pane_t1

0x90c0,	// (0x0006a3ce) main_int_radio1_pane_t2_ParamLimits

0x90c0,	// (0x0006a3ce) main_int_radio1_pane_t2

0x90db,	// (0x0006a3e9) main_int_radio1_pane_t3_ParamLimits

0x90db,	// (0x0006a3e9) main_int_radio1_pane_t3

0x90f6,	// (0x0006a404) main_int_radio1_pane_t4_ParamLimits

0x90f6,	// (0x0006a404) main_int_radio1_pane_t4

0xc985,	// (0x0006dc93) main_int_radio1_pane_t5_ParamLimits

0xc985,	// (0x0006dc93) main_int_radio1_pane_t5

0x9108,	// (0x0006a416) main_int_radio1_pane_t6_ParamLimits

0x9108,	// (0x0006a416) main_int_radio1_pane_t6

0x911d,	// (0x0006a42b) main_int_radio1_pane_t7_ParamLimits

0x911d,	// (0x0006a42b) main_int_radio1_pane_t7

0x9132,	// (0x0006a440) main_int_radio1_pane_t8_ParamLimits

0x9132,	// (0x0006a440) main_int_radio1_pane_t8

0x9151,	// (0x0006a45f) main_int_radio1_pane_t9_ParamLimits

0x9151,	// (0x0006a45f) main_int_radio1_pane_t9

0x9163,	// (0x0006a471) main_int_radio1_pane_t10_ParamLimits

0x9163,	// (0x0006a471) main_int_radio1_pane_t10

0x9189,	// (0x0006a497) main_int_radio1_pane_t11_ParamLimits

0x9189,	// (0x0006a497) main_int_radio1_pane_t11

0x91af,	// (0x0006a4bd) main_int_radio1_pane_t12_ParamLimits

0x91af,	// (0x0006a4bd) main_int_radio1_pane_t12

0x000b,

0xfdf3,	// (0x00071101) main_int_radio1_pane_t_ParamLimits

0xfdf3,	// (0x00071101) main_int_radio1_pane_t

0xc997,	// (0x0006dca5) int_radio_list_pane

0xb31c,	// (0x0006c62a) scroll_pane_cp037

0xc99f,	// (0x0006dcad) list_double_large_graphic_int_radio_pane_ParamLimits

0xc99f,	// (0x0006dcad) list_double_large_graphic_int_radio_pane

0xc9b7,	// (0x0006dcc5) list_double_large_graphic_int_radio_pane_g1

0x91c1,	// (0x0006a4cf) list_double_large_graphic_int_radio_pane_t1

0x91cf,	// (0x0006a4dd) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe0c,	// (0x0007111a) list_double_large_graphic_int_radio_pane_t

0xb8ce,	// (0x0006cbdc) list_highlight_pane_cp027

0xc6de,	// (0x0006d9ec) main_button_pane_4

0x8d3d,	// (0x0006a04b) main_welc_pane_g4_ParamLimits

0x8d3d,	// (0x0006a04b) main_welc_pane_g4

0x8db3,	// (0x0006a0c1) main_welc_pane_t4_ParamLimits

0x8db3,	// (0x0006a0c1) main_welc_pane_t4

0x8dca,	// (0x0006a0d8) main_welc_pane_t5_ParamLimits

0x8dca,	// (0x0006a0d8) main_welc_pane_t5

0x8e07,	// (0x0006a115) main_welc_pane_t6_ParamLimits

0x8e07,	// (0x0006a115) main_welc_pane_t6

0x8ee1,	// (0x0006a1ef) welc_button_pane_2_ParamLimits

0x8ee1,	// (0x0006a1ef) welc_button_pane_2

0x8efd,	// (0x0006a20b) welc_button_pane_3_ParamLimits

0x8efd,	// (0x0006a20b) welc_button_pane_3

0xc6e6,	// (0x0006d9f4) welc_button_pane_4

0x8f1c,	// (0x0006a22a) welc_button_pane_5_ParamLimits

0x8f1c,	// (0x0006a22a) welc_button_pane_5

0x08ba,	// (0x00061bc8) main_popup_welc_pane

0xc9d8,	// (0x0006dce6) main_welc_sk_g3

0xc9e2,	// (0x0006dcf0) main_welc_sk_g4

0xc9ec,	// (0x0006dcfa) main_welc_sk_t3

0xc9fc,	// (0x0006dd0a) main_welc_sk_t4

0xca0c,	// (0x0006dd1a) popup_welc_pane_t4

0xca1a,	// (0x0006dd28) popup_welc_pane_t5

0xca28,	// (0x0006dd36) popup_welc_pane_t6

0x9e85,	// (0x0006b193) main_acti_pane

0xb8ce,	// (0x0006cbdc) main_sso_pane

0x91dd,	// (0x0006a4eb) sso_body_pane_ParamLimits

0x91dd,	// (0x0006a4eb) sso_body_pane

0x91f1,	// (0x0006a4ff) sso_logo_pane_ParamLimits

0x91f1,	// (0x0006a4ff) sso_logo_pane

0x922a,	// (0x0006a538) sso_sk_pane_ParamLimits

0x922a,	// (0x0006a538) sso_sk_pane

0xca66,	// (0x0006dd74) main_sso_logo_pane_g1

0x923c,	// (0x0006a54a) sso_sk_pane_t1_ParamLimits

0x923c,	// (0x0006a54a) sso_sk_pane_t1

0x9256,	// (0x0006a564) sso_sk_pane_t2_ParamLimits

0x9256,	// (0x0006a564) sso_sk_pane_t2

0x0001,

0xfe11,	// (0x0007111f) sso_sk_pane_t_ParamLimits

0xfe11,	// (0x0007111f) sso_sk_pane_t

0xca71,	// (0x0006dd7f) aid_sso_gap

0xca7a,	// (0x0006dd88) aid_sso_txt1

0xca84,	// (0x0006dd92) aid_sso_txt2

0xca8e,	// (0x0006dd9c) aid_sso_txt3

0x0002,

0xfe16,	// (0x00071124) aid_sso_txt

0xca98,	// (0x0006dda6) aid_sso_widget

0x92c0,	// (0x0006a5ce) sso_btn_pane_ParamLimits

0x92c0,	// (0x0006a5ce) sso_btn_pane

0x9344,	// (0x0006a652) sso_option_pane_ParamLimits

0x9344,	// (0x0006a652) sso_option_pane

0x93fa,	// (0x0006a708) sso_query_pane_ParamLimits

0x93fa,	// (0x0006a708) sso_query_pane

0x9450,	// (0x0006a75e) sso_query_pane_cp01_ParamLimits

0x9450,	// (0x0006a75e) sso_query_pane_cp01

0x94aa,	// (0x0006a7b8) sso_t_hdr_pane_ParamLimits

0x94aa,	// (0x0006a7b8) sso_t_hdr_pane

0x94d4,	// (0x0006a7e2) sso_t_nml_pane_ParamLimits

0x94d4,	// (0x0006a7e2) sso_t_nml_pane

0xcaa2,	// (0x0006ddb0) sso_t_sub_pane

0x91fe,	// (0x0006a50c) sso_popup_window_ParamLimits

0x91fe,	// (0x0006a50c) sso_popup_window

0x926c,	// (0x0006a57a) sso_apps_pane_ParamLimits

0x926c,	// (0x0006a57a) sso_apps_pane

0x9296,	// (0x0006a5a4) sso_body_pane_g1

0x92a0,	// (0x0006a5ae) sso_body_pane_t1

0x92b0,	// (0x0006a5be) sso_body_pane_t2

0x0001,

0xfe1d,	// (0x0007112b) sso_body_pane_t

0x930c,	// (0x0006a61a) sso_btn_pane_cp01_ParamLimits

0x930c,	// (0x0006a61a) sso_btn_pane_cp01

0x93ce,	// (0x0006a6dc) sso_prog_pane_ParamLimits

0x93ce,	// (0x0006a6dc) sso_prog_pane

0x952a,	// (0x0006a838) sso_t_hdr_pane_t1_ParamLimits

0x952a,	// (0x0006a838) sso_t_hdr_pane_t1

0xcab7,	// (0x0006ddc5) input_focus_pane_cp10_ParamLimits

0xcab7,	// (0x0006ddc5) input_focus_pane_cp10

0xcacb,	// (0x0006ddd9) sso_query_pane_t1_ParamLimits

0xcacb,	// (0x0006ddd9) sso_query_pane_t1

0xcade,	// (0x0006ddec) sso_query_pane_t2_ParamLimits

0xcade,	// (0x0006ddec) sso_query_pane_t2

0xcaf7,	// (0x0006de05) sso_query_pane_t3_ParamLimits

0xcaf7,	// (0x0006de05) sso_query_pane_t3

0xcb21,	// (0x0006de2f) sso_query_pane_t4_ParamLimits

0xcb21,	// (0x0006de2f) sso_query_pane_t4

0x0003,

0xfe22,	// (0x00071130) sso_query_pane_t_ParamLimits

0xfe22,	// (0x00071130) sso_query_pane_t

0xc9cf,	// (0x0006dcdd) bg_button_pane_cp22

0xc9c0,	// (0x0006dcce) sso_btn_pane_t1

0x953d,	// (0x0006a84b) sso_t_nml_pane_t1_ParamLimits

0x953d,	// (0x0006a84b) sso_t_nml_pane_t1

0xcb45,	// (0x0006de53) sso_option_row_pane_ParamLimits

0xcb45,	// (0x0006de53) sso_option_row_pane

0xcb52,	// (0x0006de60) sso_t_sub_pane_t1_ParamLimits

0xcb52,	// (0x0006de60) sso_t_sub_pane_t1

0xbf68,	// (0x0006d276) bg_popup_window_pane_cp11_ParamLimits

0xbf68,	// (0x0006d276) bg_popup_window_pane_cp11

0xcb6f,	// (0x0006de7d) popup_sk_window_cp01_ParamLimits

0xcb6f,	// (0x0006de7d) popup_sk_window_cp01

0xcb7c,	// (0x0006de8a) sso_popup_body_pane_ParamLimits

0xcb7c,	// (0x0006de8a) sso_popup_body_pane

0xcb89,	// (0x0006de97) scroll_pane_cp21_ParamLimits

0xcb89,	// (0x0006de97) scroll_pane_cp21

0xcb96,	// (0x0006dea4) sso_popup_body_t_pane_ParamLimits

0xcb96,	// (0x0006dea4) sso_popup_body_t_pane

0xcba3,	// (0x0006deb1) sso_popup_body_t_hdr_pane_ParamLimits

0xcba3,	// (0x0006deb1) sso_popup_body_t_hdr_pane

0x9558,	// (0x0006a866) sso_popup_body_t_nml_pane_ParamLimits

0x9558,	// (0x0006a866) sso_popup_body_t_nml_pane

0x957f,	// (0x0006a88d) sso_popup_body_t_sub_pane_ParamLimits

0x957f,	// (0x0006a88d) sso_popup_body_t_sub_pane

0xcbb5,	// (0x0006dec3) sso_popup_body_t_hdr_pane_t1

0x95a2,	// (0x0006a8b0) sso_popup_body_t_nml_pane_t1_ParamLimits

0x95a2,	// (0x0006a8b0) sso_popup_body_t_nml_pane_t1

0xcbc5,	// (0x0006ded3) sso_popup_body_t_sub_pane_t1_ParamLimits

0xcbc5,	// (0x0006ded3) sso_popup_body_t_sub_pane_t1

0xc01b,	// (0x0006d329) sso_prog_pane_g1

0x95da,	// (0x0006a8e8) sso_apps_pane_comp1_ParamLimits

0x95da,	// (0x0006a8e8) sso_apps_pane_comp1

0xcbea,	// (0x0006def8) sso_apps_pane_comp1_g1

0xcbf2,	// (0x0006df00) sso_apps_pane_comp1_t1

0xcc0e,	// (0x0006df1c) sso_option_row_pane_g1

0xcc16,	// (0x0006df24) sso_option_row_pane_t1

0xb057,	// (0x0006c365) list_cmail_pane_ParamLimits

0xb8ce,	// (0x0006cbdc) main_call7_pane

0x8c9a,	// (0x00069fa8) bg_welc_area_ParamLimits

0x8c9a,	// (0x00069fa8) bg_welc_area

0x8e45,	// (0x0006a153) sso_t_hdr_pane_a_t1_ParamLimits

0x8e45,	// (0x0006a153) sso_t_hdr_pane_a_t1

0x8e60,	// (0x0006a16e) sso_t_nml_pane_a_t1_ParamLimits

0x8e60,	// (0x0006a16e) sso_t_nml_pane_a_t1

0x8e8f,	// (0x0006a19d) sso_t_sub_pane_a_t1_ParamLimits

0x8e8f,	// (0x0006a19d) sso_t_sub_pane_a_t1

0x8f32,	// (0x0006a240) welc_button_pane_cp01_ParamLimits

0x8f32,	// (0x0006a240) welc_button_pane_cp01

0xc9c0,	// (0x0006dcce) sso_btn_pane_t1_copy1

0xc9cf,	// (0x0006dcdd) welc_button_pane_2_comp1

0xca36,	// (0x0006dd44) sso_t_hdr_pane_p_t1

0xca46,	// (0x0006dd54) sso_t_nml_pane_p_t1

0xca56,	// (0x0006dd64) sso_t_sub_pane_p_t1

0xb8ce,	// (0x0006cbdc) main_att_pane

0xb8ce,	// (0x0006cbdc) main_vod_pane

0xcaa2,	// (0x0006ddb0) sso_t_sub_pane_ParamLimits

0xcc00,	// (0x0006df0e) input_focus_pane_cp10_t1

0xcc16,	// (0x0006df24) sso_option_row_pane_t1_ParamLimits

0x95f4,	// (0x0006a902) main_att_body_pane_ParamLimits

0x95f4,	// (0x0006a902) main_att_body_pane

0x960a,	// (0x0006a918) att_btn_emg_pane_ParamLimits

0x960a,	// (0x0006a918) att_btn_emg_pane

0x9629,	// (0x0006a937) att_btn_pane_ParamLimits

0x9629,	// (0x0006a937) att_btn_pane

0x969a,	// (0x0006a9a8) att_btn_pane_cp01_ParamLimits

0x969a,	// (0x0006a9a8) att_btn_pane_cp01

0x96ba,	// (0x0006a9c8) att_li_srv_pane_ParamLimits

0x96ba,	// (0x0006a9c8) att_li_srv_pane

0x96d7,	// (0x0006a9e5) att_opt_pane_ParamLimits

0x96d7,	// (0x0006a9e5) att_opt_pane

0x9721,	// (0x0006aa2f) att_query_pane_ParamLimits

0x9721,	// (0x0006aa2f) att_query_pane

0x979a,	// (0x0006aaa8) att_query_pane_cp01_ParamLimits

0x979a,	// (0x0006aaa8) att_query_pane_cp01

0x97e6,	// (0x0006aaf4) att_t_hdr_pane_ParamLimits

0x97e6,	// (0x0006aaf4) att_t_hdr_pane

0x9852,	// (0x0006ab60) att_t_nml_pane_ParamLimits

0x9852,	// (0x0006ab60) att_t_nml_pane

0x98c2,	// (0x0006abd0) att_t_nml_pane_cp01_ParamLimits

0x98c2,	// (0x0006abd0) att_t_nml_pane_cp01

0x98ee,	// (0x0006abfc) att_t_nmlb_pane_ParamLimits

0x98ee,	// (0x0006abfc) att_t_nmlb_pane

0x995b,	// (0x0006ac69) att_term_pane_ParamLimits

0x995b,	// (0x0006ac69) att_term_pane

0x99a5,	// (0x0006acb3) main_att_body_pane_g1_ParamLimits

0x99a5,	// (0x0006acb3) main_att_body_pane_g1

0xcc2f,	// (0x0006df3d) att_t_hdr_pane_t1_ParamLimits

0xcc2f,	// (0x0006df3d) att_t_hdr_pane_t1

0xcc48,	// (0x0006df56) att_t_nml_pane_t1_ParamLimits

0xcc48,	// (0x0006df56) att_t_nml_pane_t1

0xcc6d,	// (0x0006df7b) att_btn_pane_t1

0xc9cf,	// (0x0006dcdd) bg_button_pane_cp23

0x99d1,	// (0x0006acdf) att_li_srv_row_pane_ParamLimits

0x99d1,	// (0x0006acdf) att_li_srv_row_pane

0xcc7d,	// (0x0006df8b) att_t_nmlb_pane_t1_ParamLimits

0xcc7d,	// (0x0006df8b) att_t_nmlb_pane_t1

0xcc9b,	// (0x0006dfa9) att_query_pane_t1

0xccaa,	// (0x0006dfb8) att_query_pane_t2

0xccb9,	// (0x0006dfc7) att_query_pane_t3

0x0002,

0xfe2b,	// (0x00071139) att_query_pane_t

0xccc8,	// (0x0006dfd6) input_focus_pane_cp11

0xccd1,	// (0x0006dfdf) att_term_pane_t1_ParamLimits

0xccd1,	// (0x0006dfdf) att_term_pane_t1

0xb8ce,	// (0x0006cbdc) att_opt_row_pane

0xcc0e,	// (0x0006df1c) att_opt_row_pane_g1

0xccee,	// (0x0006dffc) att_opt_row_pane_t1_ParamLimits

0xccee,	// (0x0006dffc) att_opt_row_pane_t1

0x99e1,	// (0x0006acef) att_li_srv_row_pane_g1

0x99e9,	// (0x0006acf7) att_li_srv_row_pane_t1_ParamLimits

0x99e9,	// (0x0006acf7) att_li_srv_row_pane_t1

0x99fe,	// (0x0006ad0c) att_li_srv_row_pane_t2_ParamLimits

0x99fe,	// (0x0006ad0c) att_li_srv_row_pane_t2

0x0001,

0xfe32,	// (0x00071140) att_li_srv_row_pane_t_ParamLimits

0xfe32,	// (0x00071140) att_li_srv_row_pane_t

0xcd07,	// (0x0006e015) att_btn_close_pane_g1

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp24

0x9a13,	// (0x0006ad21) main_vod_body_pane_ParamLimits

0x9a13,	// (0x0006ad21) main_vod_body_pane

0x9a27,	// (0x0006ad35) main_vod_body_pane_g1_ParamLimits

0x9a27,	// (0x0006ad35) main_vod_body_pane_g1

0x9a5b,	// (0x0006ad69) scroll_pane_cp24_ParamLimits

0x9a5b,	// (0x0006ad69) scroll_pane_cp24

0x9aa9,	// (0x0006adb7) vod_btn_pane_ParamLimits

0x9aa9,	// (0x0006adb7) vod_btn_pane

0x9aeb,	// (0x0006adf9) vod_det_pane_ParamLimits

0x9aeb,	// (0x0006adf9) vod_det_pane

0x9b1f,	// (0x0006ae2d) vod_logo_g1_ParamLimits

0x9b1f,	// (0x0006ae2d) vod_logo_g1

0x9b5d,	// (0x0006ae6b) vod_opt_pane_ParamLimits

0x9b5d,	// (0x0006ae6b) vod_opt_pane

0x9b90,	// (0x0006ae9e) vod_opt_pane_cp01_ParamLimits

0x9b90,	// (0x0006ae9e) vod_opt_pane_cp01

0x9bbc,	// (0x0006aeca) vod_query_pane_ParamLimits

0x9bbc,	// (0x0006aeca) vod_query_pane

0x9be7,	// (0x0006aef5) vod_query_pane_cp01_ParamLimits

0x9be7,	// (0x0006aef5) vod_query_pane_cp01

0x9bf3,	// (0x0006af01) vod_t_nml_pane_ParamLimits

0x9bf3,	// (0x0006af01) vod_t_nml_pane

0x9ca0,	// (0x0006afae) vod_t_nml_pane_cp01_ParamLimits

0x9ca0,	// (0x0006afae) vod_t_nml_pane_cp01

0x9cdc,	// (0x0006afea) vod_t_sub_pane_ParamLimits

0x9cdc,	// (0x0006afea) vod_t_sub_pane

0x9d0d,	// (0x0006b01b) vod_t_sub_pane_cp01_ParamLimits

0x9d0d,	// (0x0006b01b) vod_t_sub_pane_cp01

0xccc8,	// (0x0006dfd6) vod_query_field_pane

0xcd0f,	// (0x0006e01d) vod_query_pane_t1

0xc9cf,	// (0x0006dcdd) bg_button_pane_cp25

0xc9c0,	// (0x0006dcce) sso_btn_pane_t1_copy2

0x9d39,	// (0x0006b047) vod_t_nml_pane_t1_ParamLimits

0x9d39,	// (0x0006b047) vod_t_nml_pane_t1

0xcd1e,	// (0x0006e02c) vod_opt_row_pane_ParamLimits

0xcd1e,	// (0x0006e02c) vod_opt_row_pane

0xcd30,	// (0x0006e03e) vod_t_sub_pane_t1_ParamLimits

0xcd30,	// (0x0006e03e) vod_t_sub_pane_t1

0xcd49,	// (0x0006e057) vod_det_cell_pane_ParamLimits

0xcd49,	// (0x0006e057) vod_det_cell_pane

0xb8ce,	// (0x0006cbdc) input_focus_pane_cp15

0xcd5a,	// (0x0006e068) vod_query_field_pane_t1

0xcd68,	// (0x0006e076) vod_opt_row_pane_g1_ParamLimits

0xcd68,	// (0x0006e076) vod_opt_row_pane_g1

0xcd74,	// (0x0006e082) vod_opt_row_pane_t1_ParamLimits

0xcd74,	// (0x0006e082) vod_opt_row_pane_t1

0xcd93,	// (0x0006e0a1) vod_det_cell_field_pane

0xcd9c,	// (0x0006e0aa) vod_det_cell_pane_g1

0xcda4,	// (0x0006e0b2) vod_det_cell_pane_t1

0xb8ce,	// (0x0006cbdc) input_focus_pane_cp16

0xcdb3,	// (0x0006e0c1) vod_det_cell_field_pane_t1

0x9d6a,	// (0x0006b078) call7_btn_grp_pane_ParamLimits

0x9d6a,	// (0x0006b078) call7_btn_grp_pane

0x9d84,	// (0x0006b092) call7_bubble_pane_ParamLimits

0x9d84,	// (0x0006b092) call7_bubble_pane

0x9d9b,	// (0x0006b0a9) cell_call7_btn_pane_ParamLimits

0x9d9b,	// (0x0006b0a9) cell_call7_btn_pane

0x9dae,	// (0x0006b0bc) call7_pane_g1_ParamLimits

0x9dae,	// (0x0006b0bc) call7_pane_g1

0x9dbd,	// (0x0006b0cb) call7_windows_conf_pane_ParamLimits

0x9dbd,	// (0x0006b0cb) call7_windows_conf_pane

0x9dd7,	// (0x0006b0e5) popup_call7_1st_window_ParamLimits

0x9dd7,	// (0x0006b0e5) popup_call7_1st_window

0x9de8,	// (0x0006b0f6) popup_call7_2nd_window_ParamLimits

0x9de8,	// (0x0006b0f6) popup_call7_2nd_window

0x9df9,	// (0x0006b107) popup_call7_3rd_window_ParamLimits

0x9df9,	// (0x0006b107) popup_call7_3rd_window

0xb8ce,	// (0x0006cbdc) bg_button_pane_cp26

0xb73a,	// (0x0006ca48) cell_call7_btn_pane_g1

0xb8bf,	// (0x0006cbcd) cell_call7_btn_pane_t1

0xb8ce,	// (0x0006cbdc) bg_popup_window_pane_cp12

0xcdc1,	// (0x0006e0cf) popup_call7_1st_window_g1

0xcdc9,	// (0x0006e0d7) popup_call7_1st_window_g2

0xcdd1,	// (0x0006e0df) popup_call7_1st_window_g3

0x0002,

0xfe37,	// (0x00071145) popup_call7_1st_window_g

0xcdd9,	// (0x0006e0e7) popup_call7_1st_window_t1

0xcde8,	// (0x0006e0f6) popup_call7_1st_window_t2

0xcdf6,	// (0x0006e104) popup_call7_1st_window_t3

0x0002,

0xfe3e,	// (0x0007114c) popup_call7_1st_window_t

0xb8ce,	// (0x0006cbdc) bg_popup_window_pane_cp13

0xce04,	// (0x0006e112) popup_call7_2nd_window_g1

0xce0c,	// (0x0006e11a) popup_call7_2nd_window_g2

0xce14,	// (0x0006e122) popup_call7_2nd_window_g3

0x0002,

0xfe45,	// (0x00071153) popup_call7_2nd_window_g

0xcdd9,	// (0x0006e0e7) popup_call7_2nd_window_t1

0xb8ce,	// (0x0006cbdc) bg_popup_window_pane_cp14

0xce1c,	// (0x0006e12a) call7_list_conf_pane

0xce24,	// (0x0006e132) call7_list_conf_row_pane_ParamLimits

0xce24,	// (0x0006e132) call7_list_conf_row_pane

0xce37,	// (0x0006e145) call7_list_conf_row_pane_g1

0xce3f,	// (0x0006e14d) call7_list_conf_row_pane_g2

0x0001,

0xfe4c,	// (0x0007115a) call7_list_conf_row_pane_g

0xce47,	// (0x0006e155) call7_list_conf_row_pane_t1

0xb8ce,	// (0x0006cbdc) list_highlight_pane_cp22

0x939a,	// (0x0006a6a8) sso_option_pane_cp01_ParamLimits

0x939a,	// (0x0006a6a8) sso_option_pane_cp01

0xbf46,	// (0x0006d254) msg_header_pane_ParamLimits

0xd379,	// (0x0006e687) bg_button_pane_cp01_ParamLimits

0xd38d,	// (0x0006e69b) input_focus_pane_cp07_ParamLimits

0x76e5,	// (0x000689f3) popup_email_progress_window

0xc01b,	// (0x0006d329) popup_email_progress_window_g1

0xce55,	// (0x0006e163) popup_email_progress_window_g2

0x0001,

0xfe51,	// (0x0007115f) popup_email_progress_window_g

0xce5d,	// (0x0006e16b) popup_email_progress_window_t1
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
