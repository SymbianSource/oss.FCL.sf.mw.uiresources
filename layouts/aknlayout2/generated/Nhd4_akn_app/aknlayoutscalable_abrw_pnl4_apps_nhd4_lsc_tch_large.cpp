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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000a4e1d };

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
0x0293,	// (0x000a50b0) Screen

0x029f,	// (0x000a50bc) application_window

0x02ff,	// (0x000a511c) area_bottom_pane_ParamLimits

0x02ff,	// (0x000a511c) area_bottom_pane

0x0338,	// (0x000a5155) area_top_pane_ParamLimits

0x0338,	// (0x000a5155) area_top_pane

0x958f,	// (0x000ae3ac) call_video_uplink_pane_ParamLimits

0x958f,	// (0x000ae3ac) call_video_uplink_pane

0x03c6,	// (0x000a51e3) main_pane_ParamLimits

0x03c6,	// (0x000a51e3) main_pane

0xb7f3,	// (0x000b0610) context_pane

0x3be0,	// (0x000a89fd) navi_pane

0x3c08,	// (0x000a8a25) popup_cale_events_window_ParamLimits

0x3c08,	// (0x000a8a25) popup_cale_events_window

0xb806,	// (0x000b0623) popup_mup_playback_window

0x3c20,	// (0x000a8a3d) signal_pane

0xe850,	// (0x000b366d) main_browser_pane

0xa3bd,	// (0x000af1da) main_burst_pane

0x393e,	// (0x000a875b) main_calc_pane

0xb7d9,	// (0x000b05f6) main_cale_day_pane

0x3952,	// (0x000a876f) main_cale_month_pane

0xb7d9,	// (0x000b05f6) main_cale_week_pane

0xa3bd,	// (0x000af1da) main_call_pane

0xe511,	// (0x000b332e) main_call_poc_pane

0xa3bd,	// (0x000af1da) main_camera_pane

0xa3bd,	// (0x000af1da) main_chi_dic_pane

0xa242,	// (0x000af05f) main_clock_pane

0xe511,	// (0x000b332e) main_fmradio_pane

0xa3bd,	// (0x000af1da) main_graph_messa_pane

0xe511,	// (0x000b332e) main_help_pane

0xe850,	// (0x000b366d) main_im_pane

0xe76c,	// (0x000b3589) main_image_pane_ParamLimits

0xe76c,	// (0x000b3589) main_image_pane

0xe511,	// (0x000b332e) main_location2_pane

0xa3bd,	// (0x000af1da) main_location_pane

0xe76c,	// (0x000b3589) main_messa_pane

0xe511,	// (0x000b332e) main_mp2_pane

0xa3bd,	// (0x000af1da) main_mp_pane

0xe511,	// (0x000b332e) main_msg_pane

0xe511,	// (0x000b332e) main_mup_eq_pane

0xe511,	// (0x000b332e) main_mup_pane

0xe850,	// (0x000b366d) main_notes_pane

0xe511,	// (0x000b332e) main_pec_pane

0xe511,	// (0x000b332e) main_phob_pane

0xe511,	// (0x000b332e) main_pinb_pane

0xe511,	// (0x000b332e) main_postcard_pane

0xe511,	// (0x000b332e) main_qdial_pane

0xa3bd,	// (0x000af1da) main_skin_pane

0xe511,	// (0x000b332e) main_smil2_pane

0xa3bd,	// (0x000af1da) main_smil_pane

0xa3bd,	// (0x000af1da) main_video_pane

0xa3bd,	// (0x000af1da) main_video_tele_pane

0xe76c,	// (0x000b3589) main_viewer_pane_ParamLimits

0xe76c,	// (0x000b3589) main_viewer_pane

0xa3bd,	// (0x000af1da) main_vorec_pane

0x39a4,	// (0x000a87c1) popup_blid_sat_info_window_ParamLimits

0x39a4,	// (0x000a87c1) popup_blid_sat_info_window

0x39fc,	// (0x000a8819) popup_dyc_status_message_window_ParamLimits

0x39fc,	// (0x000a8819) popup_dyc_status_message_window

0x3a14,	// (0x000a8831) popup_grid_large_graphic_window_ParamLimits

0x3a14,	// (0x000a8831) popup_grid_large_graphic_window

0x3aca,	// (0x000a88e7) popup_loc_request_window_ParamLimits

0x3aca,	// (0x000a88e7) popup_loc_request_window

0x3bb8,	// (0x000a89d5) popup_wml_address_window_ParamLimits

0x3bb8,	// (0x000a89d5) popup_wml_address_window

0x3778,	// (0x000a8595) call_muted_g1

0x342b,	// (0x000a8248) popup_call_audio_conf_window_ParamLimits

0x342b,	// (0x000a8248) popup_call_audio_conf_window

0x378c,	// (0x000a85a9) popup_call_audio_first_window_ParamLimits

0x378c,	// (0x000a85a9) popup_call_audio_first_window

0x3802,	// (0x000a861f) popup_call_audio_in_window_ParamLimits

0x3802,	// (0x000a861f) popup_call_audio_in_window

0x383e,	// (0x000a865b) popup_call_audio_out_window_ParamLimits

0x383e,	// (0x000a865b) popup_call_audio_out_window

0x3878,	// (0x000a8695) popup_call_audio_second_window_ParamLimits

0x3878,	// (0x000a8695) popup_call_audio_second_window

0x38ce,	// (0x000a86eb) popup_call_audio_wait_window_ParamLimits

0x38ce,	// (0x000a86eb) popup_call_audio_wait_window

0x3903,	// (0x000a8720) popup_number_entry_window_ParamLimits

0x3903,	// (0x000a8720) popup_number_entry_window

0xd4d4,	// (0x000b22f1) bg_popup_call_pane_cp05_ParamLimits

0xd4d4,	// (0x000b22f1) bg_popup_call_pane_cp05

0xd4f4,	// (0x000b2311) popup_number_entry_window_t1

0xd507,	// (0x000b2324) popup_number_entry_window_t2

0xe143,	// (0x000b2f60) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x000b3ef0) popup_number_entry_window_t

0xe155,	// (0x000b2f72) text_title_cp2

0xe168,	// (0x000b2f85) bg_popup_call_pane_cp_ParamLimits

0xe168,	// (0x000b2f85) bg_popup_call_pane_cp

0xe176,	// (0x000b2f93) call_thumbnail_pane

0xe17e,	// (0x000b2f9b) popup_call_audio_in_window_g1_ParamLimits

0xe17e,	// (0x000b2f9b) popup_call_audio_in_window_g1

0xe18a,	// (0x000b2fa7) popup_call_audio_in_window_g2_ParamLimits

0xe18a,	// (0x000b2fa7) popup_call_audio_in_window_g2

0xe196,	// (0x000b2fb3) popup_call_audio_in_window_g3_ParamLimits

0xe196,	// (0x000b2fb3) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x000b3ef9) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x000b3ef9) popup_call_audio_in_window_g

0xe1a2,	// (0x000b2fbf) popup_call_audio_in_window_t1_ParamLimits

0xe1a2,	// (0x000b2fbf) popup_call_audio_in_window_t1

0xe1be,	// (0x000b2fdb) popup_call_audio_in_window_t2_ParamLimits

0xe1be,	// (0x000b2fdb) popup_call_audio_in_window_t2

0xe1da,	// (0x000b2ff7) popup_call_audio_in_window_t3_ParamLimits

0xe1da,	// (0x000b2ff7) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x000b3f00) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x000b3f00) popup_call_audio_in_window_t

0xe168,	// (0x000b2f85) bg_popup_call_pane_cp01_ParamLimits

0xe168,	// (0x000b2f85) bg_popup_call_pane_cp01

0xe176,	// (0x000b2f93) call_thumbnail_pane_cp02

0xe1ed,	// (0x000b300a) call_type_pane_cp022

0xe1f5,	// (0x000b3012) popup_call_audio_out_window_g1_ParamLimits

0xe1f5,	// (0x000b3012) popup_call_audio_out_window_g1

0xe207,	// (0x000b3024) popup_call_audio_out_window_g2_ParamLimits

0xe207,	// (0x000b3024) popup_call_audio_out_window_g2

0xe213,	// (0x000b3030) popup_call_audio_out_window_g3_ParamLimits

0xe213,	// (0x000b3030) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x000b3f07) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x000b3f07) popup_call_audio_out_window_g

0xe225,	// (0x000b3042) popup_call_audio_out_window_t1_ParamLimits

0xe225,	// (0x000b3042) popup_call_audio_out_window_t1

0xe23d,	// (0x000b305a) popup_call_audio_out_window_t2_ParamLimits

0xe23d,	// (0x000b305a) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x000b3f0e) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x000b3f0e) popup_call_audio_out_window_t

0xe252,	// (0x000b306f) bg_popup_call_pane_ParamLimits

0xe252,	// (0x000b306f) bg_popup_call_pane

0x0583,	// (0x000a53a0) call_thumbnail_pane_cp_ParamLimits

0x0583,	// (0x000a53a0) call_thumbnail_pane_cp

0xe2d6,	// (0x000b30f3) call_type_pane_cp01_ParamLimits

0xe2d6,	// (0x000b30f3) call_type_pane_cp01

0xe31a,	// (0x000b3137) popup_call_audio_first_window_g1_ParamLimits

0xe31a,	// (0x000b3137) popup_call_audio_first_window_g1

0xe366,	// (0x000b3183) popup_call_audio_first_window_g2_ParamLimits

0xe366,	// (0x000b3183) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x000b3f13) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x000b3f13) popup_call_audio_first_window_g

0xe3aa,	// (0x000b31c7) popup_call_audio_first_window_t1_ParamLimits

0xe3aa,	// (0x000b31c7) popup_call_audio_first_window_t1

0xe456,	// (0x000b3273) popup_call_audio_first_window_t4_ParamLimits

0xe456,	// (0x000b3273) popup_call_audio_first_window_t4

0xe4e2,	// (0x000b32ff) popup_call_audio_first_window_t5_ParamLimits

0xe4e2,	// (0x000b32ff) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x000b3f18) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x000b3f18) popup_call_audio_first_window_t

0xe511,	// (0x000b332e) bg_popup_call_pane_cp02

0xe51b,	// (0x000b3338) call_type_pane_cp023

0xe523,	// (0x000b3340) popup_call_audio_wait_window_g1

0xe52b,	// (0x000b3348) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x000b3f1f) popup_call_audio_wait_window_g

0xe533,	// (0x000b3350) popup_call_audio_wait_window_t3

0xe541,	// (0x000b335e) bg_popup_call_pane_cp03_ParamLimits

0xe541,	// (0x000b335e) bg_popup_call_pane_cp03

0xe5a1,	// (0x000b33be) call_thumbnail_pane_cp011_ParamLimits

0xe5a1,	// (0x000b33be) call_thumbnail_pane_cp011

0xe5ad,	// (0x000b33ca) call_type_pane_cp034_ParamLimits

0xe5ad,	// (0x000b33ca) call_type_pane_cp034

0xe5e9,	// (0x000b3406) popup_call_audio_second_window_g1_ParamLimits

0xe5e9,	// (0x000b3406) popup_call_audio_second_window_g1

0xe625,	// (0x000b3442) popup_call_audio_second_window_g2_ParamLimits

0xe625,	// (0x000b3442) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x000b3f24) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x000b3f24) popup_call_audio_second_window_g

0xe661,	// (0x000b347e) popup_call_audio_second_window_t1_ParamLimits

0xe661,	// (0x000b347e) popup_call_audio_second_window_t1

0xe6e2,	// (0x000b34ff) popup_call_audio_second_window_t2_ParamLimits

0xe6e2,	// (0x000b34ff) popup_call_audio_second_window_t2

0xe718,	// (0x000b3535) popup_call_audio_second_window_t3_ParamLimits

0xe718,	// (0x000b3535) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x000b3f29) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x000b3f29) popup_call_audio_second_window_t

0xe511,	// (0x000b332e) bg_popup_call_pane_cp04

0xe74e,	// (0x000b356b) list_conf_pane

0xe756,	// (0x000b3573) popup_call_audio_conf_window_t1

0xe764,	// (0x000b3581) call_thumbnail_pane_g1

0xe76c,	// (0x000b3589) bg_pinb_pane_ParamLimits

0xe76c,	// (0x000b3589) bg_pinb_pane

0xe77a,	// (0x000b3597) find_pinb_pane

0xe783,	// (0x000b35a0) listscroll_pinb_pane_ParamLimits

0xe783,	// (0x000b35a0) listscroll_pinb_pane

0xe792,	// (0x000b35af) pinb_bg_pane_g1

0x05a7,	// (0x000a53c4) pinb_bg_pane_g2

0x05b3,	// (0x000a53d0) pinb_bg_pane_g3

0x05bf,	// (0x000a53dc) pinb_bg_pane_g4

0x05cb,	// (0x000a53e8) pinb_bg_pane_g5

0x05d7,	// (0x000a53f4) pinb_bg_pane_g6

0x05e2,	// (0x000a53ff) pinb_bg_pane_g7

0x05ed,	// (0x000a540a) pinb_bg_pane_g8

0x05f8,	// (0x000a5415) pinb_bg_pane_g9

0x0602,	// (0x000a541f) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x000b3f30) pinb_bg_pane_g

0x061f,	// (0x000a543c) grid_pinb_pane

0x0628,	// (0x000a5445) list_pinb_pane

0x0631,	// (0x000a544e) scroll_pane_cp01_ParamLimits

0x0631,	// (0x000a544e) scroll_pane_cp01

0xe79c,	// (0x000b35b9) find_pinb_pane_g1_ParamLimits

0xe79c,	// (0x000b35b9) find_pinb_pane_g1

0xe7b4,	// (0x000b35d1) find_pinb_pane_t1

0xe7c6,	// (0x000b35e3) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x000b3f4a) find_pinb_pane_t

0xe7db,	// (0x000b35f8) input_focus_pane_cp01_ParamLimits

0xe7db,	// (0x000b35f8) input_focus_pane_cp01

0x0643,	// (0x000a5460) cell_pinb_pane_ParamLimits

0x0643,	// (0x000a5460) cell_pinb_pane

0xe7e7,	// (0x000b3604) cell_pinb_pane_g1_ParamLimits

0xe7e7,	// (0x000b3604) cell_pinb_pane_g1

0xe7fa,	// (0x000b3617) cell_pinb_pane_g2_ParamLimits

0xe7fa,	// (0x000b3617) cell_pinb_pane_g2

0xe806,	// (0x000b3623) cell_pinb_pane_g3_ParamLimits

0xe806,	// (0x000b3623) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x000b3f4f) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x000b3f4f) cell_pinb_pane_g

0xe511,	// (0x000b332e) grid_highlight_pane_cp01

0x0671,	// (0x000a548e) list_pinb_item_pane_ParamLimits

0x0671,	// (0x000a548e) list_pinb_item_pane

0xe511,	// (0x000b332e) list_highlight_pane_cp02

0x0684,	// (0x000a54a1) list_pinb_item_pane_g1_ParamLimits

0x0684,	// (0x000a54a1) list_pinb_item_pane_g1

0x0691,	// (0x000a54ae) list_pinb_item_pane_g2_ParamLimits

0x0691,	// (0x000a54ae) list_pinb_item_pane_g2

0x069d,	// (0x000a54ba) list_pinb_item_pane_g3_ParamLimits

0x069d,	// (0x000a54ba) list_pinb_item_pane_g3

0x06ae,	// (0x000a54cb) list_pinb_item_pane_g4_ParamLimits

0x06ae,	// (0x000a54cb) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x000b3f56) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x000b3f56) list_pinb_item_pane_g

0x06ba,	// (0x000a54d7) list_pinb_item_pane_t1_ParamLimits

0x06ba,	// (0x000a54d7) list_pinb_item_pane_t1

0x06ef,	// (0x000a550c) calc_display_pane

0x0717,	// (0x000a5534) calc_paper_pane

0x073a,	// (0x000a5557) grid_calc_pane

0xe511,	// (0x000b332e) bg_list_pane_cp01

0x0768,	// (0x000a5585) clock_g1

0x0770,	// (0x000a558d) clock_g2

0x0001,

0xf142,	// (0x000b3f5f) clock_g

0x0778,	// (0x000a5595) clock_t1_ParamLimits

0x0778,	// (0x000a5595) clock_t1

0x078d,	// (0x000a55aa) clock_t2_ParamLimits

0x078d,	// (0x000a55aa) clock_t2

0x079f,	// (0x000a55bc) clock_t3_ParamLimits

0x079f,	// (0x000a55bc) clock_t3

0x07b1,	// (0x000a55ce) clock_t4_ParamLimits

0x07b1,	// (0x000a55ce) clock_t4

0x07c3,	// (0x000a55e0) clock_t5_ParamLimits

0x07c3,	// (0x000a55e0) clock_t5

0x07d8,	// (0x000a55f5) clock_t6_ParamLimits

0x07d8,	// (0x000a55f5) clock_t6

0x07ea,	// (0x000a5607) clock_t7_ParamLimits

0x07ea,	// (0x000a5607) clock_t7

0x07fc,	// (0x000a5619) clock_t8_ParamLimits

0x07fc,	// (0x000a5619) clock_t8

0x0810,	// (0x000a562d) clock_t9_ParamLimits

0x0810,	// (0x000a562d) clock_t9

0x0008,

0xf147,	// (0x000b3f64) clock_t_ParamLimits

0xf147,	// (0x000b3f64) clock_t

0xe812,	// (0x000b362f) popup_clock_analogue_window_cp02

0xe812,	// (0x000b362f) popup_clock_digital_window_cp01

0xe81a,	// (0x000b3637) listscroll_help_pane

0xe511,	// (0x000b332e) phob_pre_status_pane

0xe824,	// (0x000b3641) grid_qdial_pane

0xe76c,	// (0x000b3589) listscroll_mce_pane

0xe76c,	// (0x000b3589) bg_notes_pane

0xe82e,	// (0x000b364b) list_notes_pane

0x0824,	// (0x000a5641) scroll_pane_cp06

0xe83c,	// (0x000b3659) bg_calc_paper_pane

0x95cd,	// (0x000ae3ea) list_calc_pane

0xe850,	// (0x000b366d) bg_calc_display_pane

0x0838,	// (0x000a5655) calc_display_pane_t1

0x084a,	// (0x000a5667) calc_display_pane_t2

0x95e7,	// (0x000ae404) calc_display_pane_t3

0x0002,

0xf15a,	// (0x000b3f77) calc_display_pane_t

0x085c,	// (0x000a5679) cell_calc_pane_ParamLimits

0x085c,	// (0x000a5679) cell_calc_pane

0xe85c,	// (0x000b3679) bg_calc_paper_pane_g1

0xe868,	// (0x000b3685) bg_calc_paper_pane_g2

0xe874,	// (0x000b3691) bg_calc_paper_pane_g3

0xe880,	// (0x000b369d) bg_calc_paper_pane_g4

0xe88c,	// (0x000b36a9) bg_calc_paper_pane_g5

0x0893,	// (0x000a56b0) bg_calc_paper_pane_g6

0x08a4,	// (0x000a56c1) bg_calc_paper_pane_g7

0x08b5,	// (0x000a56d2) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x000b3f7e) bg_calc_paper_pane_g

0x08c8,	// (0x000a56e5) calc_bg_paper_pane_g9

0x08db,	// (0x000a56f8) list_calc_item_pane_ParamLimits

0x08db,	// (0x000a56f8) list_calc_item_pane

0xe898,	// (0x000b36b5) list_calc_item_pane_g1

0x95f9,	// (0x000ae416) list_calc_item_pane_t1_ParamLimits

0x95f9,	// (0x000ae416) list_calc_item_pane_t1

0x08f5,	// (0x000a5712) list_calc_item_pane_t2_ParamLimits

0x08f5,	// (0x000a5712) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x000b3f8f) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x000b3f8f) list_calc_item_pane_t

0xe8a5,	// (0x000b36c2) cell_calc_pane_g1

0xe8af,	// (0x000b36cc) grid_highlight_pane_cp02

0xe8d1,	// (0x000b36ee) bg_calc_display_pane_g1

0x960b,	// (0x000ae428) bg_calc_display_pane_g2

0xe8da,	// (0x000b36f7) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x000b3f99) bg_calc_display_pane_g

0x0927,	// (0x000a5744) cell_qdial_pane_ParamLimits

0x0927,	// (0x000a5744) cell_qdial_pane

0x093b,	// (0x000a5758) cell_qdial_pane_g1_ParamLimits

0x093b,	// (0x000a5758) cell_qdial_pane_g1

0x0951,	// (0x000a576e) cell_qdial_pane_g2_ParamLimits

0x0951,	// (0x000a576e) cell_qdial_pane_g2

0xe8e3,	// (0x000b3700) cell_qdial_pane_g3_ParamLimits

0xe8e3,	// (0x000b3700) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x000b3fa0) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x000b3fa0) cell_qdial_pane_g

0x0977,	// (0x000a5794) cell_qdial_pane_t1_ParamLimits

0x0977,	// (0x000a5794) cell_qdial_pane_t1

0x098f,	// (0x000a57ac) cell_qdial_pane_t2_ParamLimits

0x098f,	// (0x000a57ac) cell_qdial_pane_t2

0x09a2,	// (0x000a57bf) cell_qdial_pane_t3_ParamLimits

0x09a2,	// (0x000a57bf) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x000b3fa9) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x000b3fa9) cell_qdial_pane_t

0xe511,	// (0x000b332e) grid_highlight_pane_cp04

0xe8ef,	// (0x000b370c) thumbnail_qdial_pane_ParamLimits

0xe8ef,	// (0x000b370c) thumbnail_qdial_pane

0xeddc,	// (0x000b3bf9) list_help_pane

0xede5,	// (0x000b3c02) scroll_pane_cp02

0x09b5,	// (0x000a57d2) help_list_pane_t1_ParamLimits

0x09b5,	// (0x000a57d2) help_list_pane_t1

0x9615,	// (0x000ae432) bg_notes_pane_g2

0x961d,	// (0x000ae43a) bg_notes_pane_g3

0x9625,	// (0x000ae442) notes_bg_pane_g1

0x962d,	// (0x000ae44a) notes_bg_pane_g4

0x9635,	// (0x000ae452) notes_bg_pane_g5

0x963d,	// (0x000ae45a) notes_bg_pane_g6

0x9645,	// (0x000ae462) notes_bg_pane_g7

0x964d,	// (0x000ae46a) notes_bg_pane_g8

0x9655,	// (0x000ae472) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x000b3fc7) notes_bg_pane_g

0x09d4,	// (0x000a57f1) list_notes_text_pane_ParamLimits

0x09d4,	// (0x000a57f1) list_notes_text_pane

0xedee,	// (0x000b3c0b) list_notes_text_pane_g1

0xaf50,	// (0x000afd6d) list_notes_text_pane_t1

0x09ea,	// (0x000a5807) listscroll_cale_week_pane

0x0a16,	// (0x000a5833) bg_cale_heading_pane

0xee11,	// (0x000b3c2e) bg_cale_pane_cp01

0x0a34,	// (0x000a5851) cale_week_corner_pane

0x0a53,	// (0x000a5870) cale_week_day_heading_pane

0x0a76,	// (0x000a5893) cale_week_scroll_pane_g1

0x0a8f,	// (0x000a58ac) cale_week_scroll_pane_g2

0x0aa7,	// (0x000a58c4) cale_week_scroll_pane_g3

0x0abf,	// (0x000a58dc) cale_week_scroll_pane_g4

0x0ad7,	// (0x000a58f4) cale_week_scroll_pane_g5

0x0af3,	// (0x000a5910) cale_week_scroll_pane_g6

0x0b13,	// (0x000a5930) cale_week_scroll_pane_g7

0x0b33,	// (0x000a5950) cale_week_scroll_pane_g8

0x0b57,	// (0x000a5974) cale_week_scroll_pane_g9

0x0b6f,	// (0x000a598c) cale_week_scroll_pane_g10

0x0b87,	// (0x000a59a4) cale_week_scroll_pane_g11

0x0b9f,	// (0x000a59bc) cale_week_scroll_pane_g12

0x0bb7,	// (0x000a59d4) cale_week_scroll_pane_g13

0x0bb7,	// (0x000a59d4) cale_week_scroll_pane_g14

0x0bb7,	// (0x000a59d4) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x000b3fd6) cale_week_scroll_pane_g

0x0bcf,	// (0x000a59ec) cale_week_time_pane

0x0bf3,	// (0x000a5a10) grid_cale_week_pane

0xee41,	// (0x000b3c5e) scroll_pane_cp08

0x0c19,	// (0x000a5a36) cell_cale_week_pane_ParamLimits

0x0c19,	// (0x000a5a36) cell_cale_week_pane

0x0ca7,	// (0x000a5ac4) cale_week_day_heading_pane_t1

0x0cf1,	// (0x000a5b0e) cale_week_day_heading_pane_t2

0x0d40,	// (0x000a5b5d) cale_week_day_heading_pane_t3

0x0d8f,	// (0x000a5bac) cale_week_day_heading_pane_t4

0x0dde,	// (0x000a5bfb) cale_week_day_heading_pane_t5

0x0e35,	// (0x000a5c52) cale_week_day_heading_pane_t6

0x0e8c,	// (0x000a5ca9) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x000b3ff5) cale_week_day_heading_pane_t

0xee5e,	// (0x000b3c7b) bg_cale_side_pane

0x0ed6,	// (0x000a5cf3) cale_week_time_pane_t1

0x0ef0,	// (0x000a5d0d) cale_week_time_pane_t2

0x0f0a,	// (0x000a5d27) cale_week_time_pane_t3

0x0f24,	// (0x000a5d41) cale_week_time_pane_t4

0x0f3e,	// (0x000a5d5b) cale_week_time_pane_t5

0x0f58,	// (0x000a5d75) cale_week_time_pane_t6

0x0f72,	// (0x000a5d8f) cale_week_time_pane_t7

0x0f92,	// (0x000a5daf) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x000b4004) cale_week_time_pane_t

0x0fb2,	// (0x000a5dcf) cell_cale_week_pane_g2

0x0fd1,	// (0x000a5dee) cell_cale_week_pane_g3_ParamLimits

0x0fd1,	// (0x000a5dee) cell_cale_week_pane_g3

0xee6c,	// (0x000b3c89) grid_highlight_pane_cp07

0xee74,	// (0x000b3c91) listscroll_gms_pane

0xee7e,	// (0x000b3c9b) grid_gms_pane

0xee87,	// (0x000b3ca4) listscroll_gms_pane_g1

0xee8f,	// (0x000b3cac) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x000b4015) listscroll_gms_pane_g

0x0fe9,	// (0x000a5e06) scroll_pane_cp010

0x0ff4,	// (0x000a5e11) cell_gms_pane_ParamLimits

0x0ff4,	// (0x000a5e11) cell_gms_pane

0x1006,	// (0x000a5e23) cell_gms_pane_g1

0xee97,	// (0x000b3cb4) cell_gms_pane_g2

0xedee,	// (0x000b3c0b) cell_gms_pane_g3

0xee9f,	// (0x000b3cbc) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x000b401a) cell_gms_pane_g

0xeea8,	// (0x000b3cc5) grid_highlight_pane_cp09

0x3722,	// (0x000a853f) phob_pre_status_pane_g1

0x372a,	// (0x000a8547) phob_pre_status_pane_g2

0x3732,	// (0x000a854f) phob_pre_status_pane_g3

0x373a,	// (0x000a8557) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x000b4409) phob_pre_status_pane_g

0x374a,	// (0x000a8567) phob_pre_status_pane_t1

0x3758,	// (0x000a8575) phob_pre_status_pane_t2

0x3768,	// (0x000a8585) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x000b4414) phob_pre_status_pane_t

0xe511,	// (0x000b332e) bg_list_pane_cp05

0x1016,	// (0x000a5e33) grid_vorec_pane

0x1022,	// (0x000a5e3f) vorec_t1

0x1030,	// (0x000a5e4d) vorec_t2

0x103e,	// (0x000a5e5b) vorec_t3

0x104c,	// (0x000a5e69) vorec_t4

0x105a,	// (0x000a5e77) vorec_t5

0x965d,	// (0x000ae47a) vorec_t6

0x0006,

0xf206,	// (0x000b4023) vorec_t

0x1076,	// (0x000a5e93) wait_bar_pane_cp01

0x107e,	// (0x000a5e9b) cell_vorec_pane_ParamLimits

0x107e,	// (0x000a5e9b) cell_vorec_pane

0xeeb0,	// (0x000b3ccd) cell_vorec_pane_g1

0xe511,	// (0x000b332e) grid_highlight_pane_cp05

0x10a9,	// (0x000a5ec6) cams_zoom_pane

0x10b8,	// (0x000a5ed5) image_vga_pane

0x10d2,	// (0x000a5eef) main_camera_pane_g1

0x10e4,	// (0x000a5f01) main_camera_pane_g2

0x10f4,	// (0x000a5f11) main_camera_pane_g3

0x1106,	// (0x000a5f23) main_camera_pane_g4

0x1118,	// (0x000a5f35) main_camera_pane_g5

0x112a,	// (0x000a5f47) main_camera_pane_g6

0x113c,	// (0x000a5f59) main_camera_pane_g7

0x0007,

0xf215,	// (0x000b4032) main_camera_pane_g

0x114e,	// (0x000a5f6b) main_camera_pane_t1

0x1164,	// (0x000a5f81) main_camera_pane_t2

0x0001,

0xf226,	// (0x000b4043) main_camera_pane_t

0x11a0,	// (0x000a5fbd) cams_zoom_pane_cp_ParamLimits

0x11a0,	// (0x000a5fbd) cams_zoom_pane_cp

0x11c8,	// (0x000a5fe5) image_cif_pane_ParamLimits

0x11c8,	// (0x000a5fe5) image_cif_pane

0x1203,	// (0x000a6020) image_subqcif_pane

0x120b,	// (0x000a6028) main_video_pane_g1_ParamLimits

0x120b,	// (0x000a6028) main_video_pane_g1

0x122f,	// (0x000a604c) main_video_pane_g2_ParamLimits

0x122f,	// (0x000a604c) main_video_pane_g2

0x1263,	// (0x000a6080) main_video_pane_g3_ParamLimits

0x1263,	// (0x000a6080) main_video_pane_g3

0x1291,	// (0x000a60ae) main_video_pane_g4_ParamLimits

0x1291,	// (0x000a60ae) main_video_pane_g4

0x12bf,	// (0x000a60dc) main_video_pane_g5_ParamLimits

0x12bf,	// (0x000a60dc) main_video_pane_g5

0xeec6,	// (0x000b3ce3) main_video_pane_g6_ParamLimits

0xeec6,	// (0x000b3ce3) main_video_pane_g6

0x0006,

0xf22b,	// (0x000b4048) main_video_pane_g_ParamLimits

0xf22b,	// (0x000b4048) main_video_pane_g

0x12e8,	// (0x000a6105) main_video_pane_t1_ParamLimits

0x12e8,	// (0x000a6105) main_video_pane_t1

0xeee0,	// (0x000b3cfd) cams_zoom_pane_g1

0xeee9,	// (0x000b3d06) cams_zoom_pane_g2

0xeef2,	// (0x000b3d0f) cams_zoom_pane_g3

0xeefb,	// (0x000b3d18) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x000b4057) cams_zoom_pane_g

0x1345,	// (0x000a6162) grid_cams_pane

0x135f,	// (0x000a617c) linegrid_cams_pane

0x1372,	// (0x000a618f) cell_cams_pane_ParamLimits

0x1372,	// (0x000a618f) cell_cams_pane

0xef04,	// (0x000b3d21) cams_burst_image_pane

0xef0c,	// (0x000b3d29) cell_cams_pane_g1

0xe511,	// (0x000b332e) grid_highlight_pane_cp03

0xe8a5,	// (0x000b36c2) mp_bg_pane_g1

0xe511,	// (0x000b332e) bg_list_pane_cp03

0xb6fe,	// (0x000b051b) bg_mp_pane

0xb706,	// (0x000b0523) grid_mp_pane

0xb70e,	// (0x000b052b) media_player_g1

0xb716,	// (0x000b0533) media_player_t1

0xb724,	// (0x000b0541) media_player_t2

0xb732,	// (0x000b054f) media_player_t3

0xb740,	// (0x000b055d) media_player_t4

0xb74e,	// (0x000b056b) media_player_t5

0xb75c,	// (0x000b0579) media_player_t6

0xb76a,	// (0x000b0587) media_player_t7

0x0006,

0xf5d6,	// (0x000b43f3) media_player_t

0xb778,	// (0x000b0595) wait_bar_pane_cp02

0xf5bb,	// (0x000b43d8) main_usb_pane_t

0x3719,	// (0x000a8536) cell_mp_pane

0xe8a5,	// (0x000b36c2) cell_mp_pane_g1

0xe511,	// (0x000b332e) grid_highlight_pane_cp06

0xef14,	// (0x000b3d31) grid_skin_colour_pane

0xef1c,	// (0x000b3d39) list_highlight_pane_cp03

0x14a1,	// (0x000a62be) skin_g1

0xef24,	// (0x000b3d41) skin_t1

0xef33,	// (0x000b3d50) skin_t2

0x0001,

0xf26f,	// (0x000b408c) skin_t

0x14a9,	// (0x000a62c6) cell_skin_colour_pane_ParamLimits

0x14a9,	// (0x000a62c6) cell_skin_colour_pane

0xef41,	// (0x000b3d5e) cell_skin_colour_pane_g1

0x1522,	// (0x000a633f) call_video_g1_ParamLimits

0x1522,	// (0x000a633f) call_video_g1

0x153e,	// (0x000a635b) call_video_g2_ParamLimits

0x153e,	// (0x000a635b) call_video_g2

0x0001,

0xf274,	// (0x000b4091) call_video_g_ParamLimits

0xf274,	// (0x000b4091) call_video_g

0x1590,	// (0x000a63ad) call_video_uplink_pane_cp1_ParamLimits

0x1590,	// (0x000a63ad) call_video_uplink_pane_cp1

0xef53,	// (0x000b3d70) call_video_uplink_pane_cp2

0x162f,	// (0x000a644c) video_down_crop_pane_ParamLimits

0x162f,	// (0x000a644c) video_down_crop_pane

0x1718,	// (0x000a6535) video_down_pane_ParamLimits

0x1718,	// (0x000a6535) video_down_pane

0xef5b,	// (0x000b3d78) video_down_subqcif_pane_ParamLimits

0xef5b,	// (0x000b3d78) video_down_subqcif_pane

0xef73,	// (0x000b3d90) video_down_subqcif_pane_cp_ParamLimits

0xef73,	// (0x000b3d90) video_down_subqcif_pane_cp

0xef99,	// (0x000b3db6) im_reading_pane_ParamLimits

0xef99,	// (0x000b3db6) im_reading_pane

0x1826,	// (0x000a6643) im_writing_pane_ParamLimits

0x1826,	// (0x000a6643) im_writing_pane

0x183c,	// (0x000a6659) im_reading_pane_t1

0xefb3,	// (0x000b3dd0) list_im_pane

0xefc4,	// (0x000b3de1) scroll_pane_cp07

0x1879,	// (0x000a6696) im_writing_pane_t1_ParamLimits

0x1879,	// (0x000a6696) im_writing_pane_t1

0xefdd,	// (0x000b3dfa) im_writing_pane_t2_ParamLimits

0xefdd,	// (0x000b3dfa) im_writing_pane_t2

0x0001,

0xf27e,	// (0x000b409b) im_writing_pane_t_ParamLimits

0xf27e,	// (0x000b409b) im_writing_pane_t

0xe511,	// (0x000b332e) input_focus_pane_cp04

0xe511,	// (0x000b332e) input_focus_pane_cp05

0x188e,	// (0x000a66ab) list_im_single_pane_ParamLimits

0x188e,	// (0x000a66ab) list_im_single_pane

0x18a4,	// (0x000a66c1) list_single_im_pane_t1

0x36d9,	// (0x000a84f6) blid_accuracy_pane

0x36e1,	// (0x000a84fe) blid_compass_pane

0x36eb,	// (0x000a8508) main_location_t1

0x36fb,	// (0x000a8518) main_location_t2

0x370b,	// (0x000a8528) main_location_t3

0x0002,

0xf5e5,	// (0x000b4402) main_location_t

0xe511,	// (0x000b332e) aid_levels_location

0xe8a5,	// (0x000b36c2) blid_accuracy_pane_g1

0xe8a5,	// (0x000b36c2) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x000b40fd) blid_accuracy_pane_g

0xf025,	// (0x000b3e42) wml_content_pane

0xf063,	// (0x000b3e80) wml_button_pane_ParamLimits

0xf063,	// (0x000b3e80) wml_button_pane

0x18b3,	// (0x000a66d0) wml_list_single_large_pane_ParamLimits

0x18b3,	// (0x000a66d0) wml_list_single_large_pane

0x18c9,	// (0x000a66e6) wml_list_single_medium_pane_ParamLimits

0x18c9,	// (0x000a66e6) wml_list_single_medium_pane

0x18e3,	// (0x000a6700) wml_list_single_small_pane_ParamLimits

0x18e3,	// (0x000a6700) wml_list_single_small_pane

0xf077,	// (0x000b3e94) wml_selection_box_pane_ParamLimits

0xf077,	// (0x000b3e94) wml_selection_box_pane

0xf08a,	// (0x000b3ea7) wml_list_single_pane_t1

0xf099,	// (0x000b3eb6) wml_list_single_medium_pane_t1

0xf0a8,	// (0x000b3ec5) wml_list_single_large_pane_t1

0xf0b7,	// (0x000b3ed4) input_focus_pane_cp02_ParamLimits

0xf0b7,	// (0x000b3ed4) input_focus_pane_cp02

0x966b,	// (0x000ae488) wml_selection_box_pane_g1

0x9674,	// (0x000ae491) wml_selection_box_pane_t1_ParamLimits

0x9674,	// (0x000ae491) wml_selection_box_pane_t1

0xe76c,	// (0x000b3589) bg_wml_button_pane_ParamLimits

0xe76c,	// (0x000b3589) bg_wml_button_pane

0x968c,	// (0x000ae4a9) wml_button_pane_g1

0x9694,	// (0x000ae4b1) wml_button_pane_t1

0x968c,	// (0x000ae4a9) wml_button_bg_pane_g1

0x96a4,	// (0x000ae4c1) wml_button_bg_pane_g2

0x96ac,	// (0x000ae4c9) wml_button_bg_pane_g3

0x96b4,	// (0x000ae4d1) wml_button_bg_pane_g4

0x96bc,	// (0x000ae4d9) wml_button_bg_pane_g5

0x96c4,	// (0x000ae4e1) wml_button_bg_pane_g6

0x96cc,	// (0x000ae4e9) wml_button_bg_pane_g7

0x96d4,	// (0x000ae4f1) wml_button_bg_pane_g8

0x96dc,	// (0x000ae4f9) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x000b40a0) wml_button_bg_pane_g

0x18fd,	// (0x000a671a) bg_list_pane_cp02

0x96e4,	// (0x000ae501) mce_header_pane_ParamLimits

0x96e4,	// (0x000ae501) mce_header_pane

0x96fa,	// (0x000ae517) mce_icon_pane

0x96fa,	// (0x000ae517) mce_image_pane

0x9703,	// (0x000ae520) mce_text_pane_ParamLimits

0x9703,	// (0x000ae520) mce_text_pane

0x1905,	// (0x000a6722) scroll_pane_cp03

0xf05b,	// (0x000b3e78) scroll_pane_cp04

0x9716,	// (0x000ae533) scroll_pane_cp05_ParamLimits

0x9716,	// (0x000ae533) scroll_pane_cp05

0x190f,	// (0x000a672c) mce_header_field_pane_ParamLimits

0x190f,	// (0x000a672c) mce_header_field_pane

0x1926,	// (0x000a6743) mce_header_field_pane_2_ParamLimits

0x1926,	// (0x000a6743) mce_header_field_pane_2

0x193c,	// (0x000a6759) mce_header_field_pane_3

0x1944,	// (0x000a6761) list_single_mce_message_pane_ParamLimits

0x1944,	// (0x000a6761) list_single_mce_message_pane

0x195b,	// (0x000a6778) list_single_mce_smart_pane_ParamLimits

0x195b,	// (0x000a6778) list_single_mce_smart_pane

0x9722,	// (0x000ae53f) input_focus_pane_cp03

0x972b,	// (0x000ae548) list_header_data_pane

0x197d,	// (0x000a679a) mce_header_field_pane_t1

0x198d,	// (0x000a67aa) list_single_mce_header_pane_ParamLimits

0x198d,	// (0x000a67aa) list_single_mce_header_pane

0x9733,	// (0x000ae550) list_single_mce_header_pane_t1

0x9742,	// (0x000ae55f) list_single_mce_message_pane_g1

0x974a,	// (0x000ae567) list_single_mce_message_pane_t1

0x19c7,	// (0x000a67e4) bg_cale_heading_pane_cp01_ParamLimits

0x19c7,	// (0x000a67e4) bg_cale_heading_pane_cp01

0x9758,	// (0x000ae575) bg_cale_pane_cp02_ParamLimits

0x9758,	// (0x000ae575) bg_cale_pane_cp02

0x1a02,	// (0x000a681f) cale_month_corner_pane

0x1a21,	// (0x000a683e) cale_month_day_heading_pane_ParamLimits

0x1a21,	// (0x000a683e) cale_month_day_heading_pane

0x1a74,	// (0x000a6891) cale_month_pane_g1_ParamLimits

0x1a74,	// (0x000a6891) cale_month_pane_g1

0x1aa4,	// (0x000a68c1) cale_month_pane_g2_ParamLimits

0x1aa4,	// (0x000a68c1) cale_month_pane_g2

0x1ad4,	// (0x000a68f1) cale_month_pane_g3_ParamLimits

0x1ad4,	// (0x000a68f1) cale_month_pane_g3

0x1b10,	// (0x000a692d) cale_month_pane_g4_ParamLimits

0x1b10,	// (0x000a692d) cale_month_pane_g4

0x1b4c,	// (0x000a6969) cale_month_pane_g5_ParamLimits

0x1b4c,	// (0x000a6969) cale_month_pane_g5

0x1b94,	// (0x000a69b1) cale_month_pane_g6_ParamLimits

0x1b94,	// (0x000a69b1) cale_month_pane_g6

0x1be0,	// (0x000a69fd) cale_month_pane_g7_ParamLimits

0x1be0,	// (0x000a69fd) cale_month_pane_g7

0x1c34,	// (0x000a6a51) cale_month_pane_g8_ParamLimits

0x1c34,	// (0x000a6a51) cale_month_pane_g8

0x1c88,	// (0x000a6aa5) cale_month_pane_g9_ParamLimits

0x1c88,	// (0x000a6aa5) cale_month_pane_g9

0x1cda,	// (0x000a6af7) cale_month_pane_g10_ParamLimits

0x1cda,	// (0x000a6af7) cale_month_pane_g10

0x1d2c,	// (0x000a6b49) cale_month_pane_g11_ParamLimits

0x1d2c,	// (0x000a6b49) cale_month_pane_g11

0x1d7e,	// (0x000a6b9b) cale_month_pane_g12_ParamLimits

0x1d7e,	// (0x000a6b9b) cale_month_pane_g12

0x1dd0,	// (0x000a6bed) cale_month_pane_g13_ParamLimits

0x1dd0,	// (0x000a6bed) cale_month_pane_g13

0x000c,

0xf296,	// (0x000b40b3) cale_month_pane_g_ParamLimits

0xf296,	// (0x000b40b3) cale_month_pane_g

0x1e22,	// (0x000a6c3f) cale_month_week_pane

0x1e46,	// (0x000a6c63) grid_cale_month_pane_ParamLimits

0x1e46,	// (0x000a6c63) grid_cale_month_pane

0x1e84,	// (0x000a6ca1) cale_month_day_heading_pane_t1

0x1f0a,	// (0x000a6d27) cale_month_day_heading_pane_t2

0x1f9b,	// (0x000a6db8) cale_month_day_heading_pane_t3

0x202c,	// (0x000a6e49) cale_month_day_heading_pane_t4

0x20c5,	// (0x000a6ee2) cale_month_day_heading_pane_t5

0x2166,	// (0x000a6f83) cale_month_day_heading_pane_t6

0x2207,	// (0x000a7024) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x000b40ce) cale_month_day_heading_pane_t

0xee5e,	// (0x000b3c7b) bg_cale_side_pane_cp01

0x22b0,	// (0x000a70cd) cale_month_week_pane_t1

0x22c9,	// (0x000a70e6) cale_month_week_pane_t2

0x22e2,	// (0x000a70ff) cale_month_week_pane_t3

0x22fb,	// (0x000a7118) cale_month_week_pane_t4

0x2314,	// (0x000a7131) cale_month_week_pane_t5

0x232d,	// (0x000a714a) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x000b40dd) cale_month_week_pane_t

0x2346,	// (0x000a7163) cell_cale_month_pane_ParamLimits

0x2346,	// (0x000a7163) cell_cale_month_pane

0x9797,	// (0x000ae5b4) cell_cale_month_pane_g1

0x249e,	// (0x000a72bb) cell_cale_month_pane_t1_ParamLimits

0x249e,	// (0x000a72bb) cell_cale_month_pane_t1

0xee6c,	// (0x000b3c89) grid_highlight_pane_cp08

0xe8a5,	// (0x000b36c2) main_smil_g1

0x24be,	// (0x000a72db) smil_status_pane

0x97a3,	// (0x000ae5c0) smil_text_pane

0xb61e,	// (0x000b043b) bg_popup_call3_rect_pane_g8

0xb626,	// (0x000b0443) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x000b4396) bg_popup_call3_rect_pane_g

0xb86d,	// (0x000b068a) smil_status_volume_pane_g1

0x97ad,	// (0x000ae5ca) smil_status_pane_t1

0x9cb2,	// (0x000aeacf) volume_smil_pane

0x97c4,	// (0x000ae5e1) list_smil_text_pane

0x24d3,	// (0x000a72f0) scroll_pane_cp011

0x24de,	// (0x000a72fb) smil_text_list_pane_t1_ParamLimits

0x24de,	// (0x000a72fb) smil_text_list_pane_t1

0x97ce,	// (0x000ae5eb) aid_volume_smil_ParamLimits

0x97ce,	// (0x000ae5eb) aid_volume_smil

0xe8a5,	// (0x000b36c2) smil_volume_pane_g1

0xe8a5,	// (0x000b36c2) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x000b40fd) smil_volume_pane_g

0x09ea,	// (0x000a5807) listscroll_cale_day_pane

0x97f0,	// (0x000ae60d) bg_cale_pane

0x9808,	// (0x000ae625) list_cale_pane

0x982b,	// (0x000ae648) scroll_pane_cp09

0x983c,	// (0x000ae659) cale_bg_pane_g1

0x9844,	// (0x000ae661) cale_bg_pane_g2

0x984c,	// (0x000ae669) cale_bg_pane_g3

0x9854,	// (0x000ae671) cale_bg_pane_g4

0x985c,	// (0x000ae679) cale_bg_pane_g5

0x9864,	// (0x000ae681) cale_bg_pane_g6

0x986c,	// (0x000ae689) cale_bg_pane_g7

0x9874,	// (0x000ae691) cale_bg_pane_g8

0x987c,	// (0x000ae699) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x000b4102) cale_bg_pane_g

0x2520,	// (0x000a733d) list_cale_time_pane_ParamLimits

0x2520,	// (0x000a733d) list_cale_time_pane

0x2534,	// (0x000a7351) list_cale_time_pane_g1_ParamLimits

0x2534,	// (0x000a7351) list_cale_time_pane_g1

0x9884,	// (0x000ae6a1) list_cale_time_pane_g2_ParamLimits

0x9884,	// (0x000ae6a1) list_cale_time_pane_g2

0x2540,	// (0x000a735d) list_cale_time_pane_g3_ParamLimits

0x2540,	// (0x000a735d) list_cale_time_pane_g3

0x254e,	// (0x000a736b) list_cale_time_pane_g4_ParamLimits

0x254e,	// (0x000a736b) list_cale_time_pane_g4

0x255c,	// (0x000a7379) list_cale_time_pane_g5_ParamLimits

0x255c,	// (0x000a7379) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x000b4115) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x000b4115) list_cale_time_pane_g

0x256a,	// (0x000a7387) list_cale_time_pane_t1_ParamLimits

0x256a,	// (0x000a7387) list_cale_time_pane_t1

0x2592,	// (0x000a73af) list_cale_time_pane_t2_ParamLimits

0x2592,	// (0x000a73af) list_cale_time_pane_t2

0x2916,	// (0x000a7733) aid_blid_cardinal_pane

0x2954,	// (0x000a7771) compass_pane_t4

0x25ba,	// (0x000a73d7) list_cale_time_pane_t4_ParamLimits

0x25ba,	// (0x000a73d7) list_cale_time_pane_t4

0x2962,	// (0x000a777f) compass_pane_t5

0x2970,	// (0x000a778d) compass_pane_t6

0x297e,	// (0x000a779b) compass_pane_t7

0xa30f,	// (0x000af12c) navi_pane_cc_t1

0xa464,	// (0x000af281) aid_phob_thumbnail_center_pane

0x30e9,	// (0x000a7f06) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x000b4122) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x000b4122) list_cale_time_pane_t

0xe168,	// (0x000b2f85) bg_popup_window_pane_cp02_ParamLimits

0xe168,	// (0x000b2f85) bg_popup_window_pane_cp02

0x989e,	// (0x000ae6bb) heading_pane_cp01_ParamLimits

0x989e,	// (0x000ae6bb) heading_pane_cp01

0x98aa,	// (0x000ae6c7) loc_req_pane_ParamLimits

0x98aa,	// (0x000ae6c7) loc_req_pane

0x98ba,	// (0x000ae6d7) loc_type_pane_ParamLimits

0x98ba,	// (0x000ae6d7) loc_type_pane

0x98cc,	// (0x000ae6e9) loc_type_pane_t1_ParamLimits

0x98cc,	// (0x000ae6e9) loc_type_pane_t1

0x98de,	// (0x000ae6fb) loc_type_pane_t2_ParamLimits

0x98de,	// (0x000ae6fb) loc_type_pane_t2

0x98f0,	// (0x000ae70d) loc_type_pane_t3_ParamLimits

0x98f0,	// (0x000ae70d) loc_type_pane_t3

0x0002,

0xf30c,	// (0x000b4129) loc_type_pane_t_ParamLimits

0xf30c,	// (0x000b4129) loc_type_pane_t

0x9902,	// (0x000ae71f) list_loc_req_pane

0x990c,	// (0x000ae729) scroll_pane_cp012

0x25e2,	// (0x000a73ff) list_single_loc_request_popup_menu_pane_ParamLimits

0x25e2,	// (0x000a73ff) list_single_loc_request_popup_menu_pane

0x9917,	// (0x000ae734) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x9917,	// (0x000ae734) list_single_loc_request_popup_menu_pane_g1

0x9923,	// (0x000ae740) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x9923,	// (0x000ae740) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x000b4130) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x000b4130) list_single_loc_request_popup_menu_pane_g

0x992f,	// (0x000ae74c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x992f,	// (0x000ae74c) list_single_loc_request_popup_menu_pane_t1

0xe76c,	// (0x000b3589) bg_popup_window_pane_cp03_ParamLimits

0xe76c,	// (0x000b3589) bg_popup_window_pane_cp03

0xaf5e,	// (0x000afd7b) heading_loc_req_pane_ParamLimits

0xaf5e,	// (0x000afd7b) heading_loc_req_pane

0x25ef,	// (0x000a740c) popup_dyc_status_message_window_g1_ParamLimits

0x25ef,	// (0x000a740c) popup_dyc_status_message_window_g1

0x2603,	// (0x000a7420) popup_dyc_status_message_window_t1_ParamLimits

0x2603,	// (0x000a7420) popup_dyc_status_message_window_t1

0x2618,	// (0x000a7435) popup_dyc_status_message_window_t2_ParamLimits

0x2618,	// (0x000a7435) popup_dyc_status_message_window_t2

0x262d,	// (0x000a744a) popup_dyc_status_message_window_t3_ParamLimits

0x262d,	// (0x000a744a) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x000b4135) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x000b4135) popup_dyc_status_message_window_t

0xe511,	// (0x000b332e) bg_heading_pane_cp01

0x9945,	// (0x000ae762) heading_loc_req_pane_g1

0x994d,	// (0x000ae76a) heading_loc_req_pane_g2

0x9955,	// (0x000ae772) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x000b413c) heading_loc_req_pane_g

0x995d,	// (0x000ae77a) heading_loc_req_pane_t1

0x996c,	// (0x000ae789) bg_popup_sub_pane_cp01_ParamLimits

0x996c,	// (0x000ae789) bg_popup_sub_pane_cp01

0x997a,	// (0x000ae797) popup_cale_events_window_g1_ParamLimits

0x997a,	// (0x000ae797) popup_cale_events_window_g1

0x999a,	// (0x000ae7b7) popup_cale_events_window_g2_ParamLimits

0x999a,	// (0x000ae7b7) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x000b4170) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x000b4170) popup_cale_events_window_g

0x99ba,	// (0x000ae7d7) popup_cale_events_window_t1_ParamLimits

0x99ba,	// (0x000ae7d7) popup_cale_events_window_t1

0x99cc,	// (0x000ae7e9) popup_cale_events_window_t2_ParamLimits

0x99cc,	// (0x000ae7e9) popup_cale_events_window_t2

0x9a0a,	// (0x000ae827) popup_cale_events_window_t3_ParamLimits

0x9a0a,	// (0x000ae827) popup_cale_events_window_t3

0x9a44,	// (0x000ae861) popup_cale_events_window_t4_ParamLimits

0x9a44,	// (0x000ae861) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x000b4175) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x000b4175) popup_cale_events_window_t

0x2724,	// (0x000a7541) call_type_pane

0x2734,	// (0x000a7551) popup_call_status_window_g1

0x2748,	// (0x000a7565) popup_call_status_window_g2

0x275c,	// (0x000a7579) popup_call_status_window_g3

0x0002,

0xf361,	// (0x000b417e) popup_call_status_window_g

0x9a7a,	// (0x000ae897) call_type_pane_g1

0x9a83,	// (0x000ae8a0) call_type_pane_g2

0x0001,

0xf368,	// (0x000b4185) call_type_pane_g

0xe511,	// (0x000b332e) bg_popup_sub_pane_cp02

0x9a8c,	// (0x000ae8a9) listscroll_popup_wml_pane

0x9a94,	// (0x000ae8b1) list_wml_pane

0x9a9e,	// (0x000ae8bb) scroll_pane_cp013

0x9aa9,	// (0x000ae8c6) list_single_graphic_popup_wml_pane_ParamLimits

0x9aa9,	// (0x000ae8c6) list_single_graphic_popup_wml_pane

0xe8a5,	// (0x000b36c2) list_single_graphic_popup_wml_pane_g1

0x9abd,	// (0x000ae8da) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x000b418a) list_single_graphic_popup_wml_pane_g

0x9ac5,	// (0x000ae8e2) list_single_graphic_popup_wml_pane_t1

0x9adb,	// (0x000ae8f8) aid_call_pane

0xe764,	// (0x000b3581) popup_clock_analogue_window_g1

0xe764,	// (0x000b3581) popup_clock_analogue_window_g2

0x9ae3,	// (0x000ae900) popup_clock_analogue_window_g3

0x9ae3,	// (0x000ae900) popup_clock_analogue_window_g4

0xe8a5,	// (0x000b36c2) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x000b418f) popup_clock_analogue_window_g

0x9aeb,	// (0x000ae908) popup_clock_analogue_window_t1

0x9af9,	// (0x000ae916) clock_digital_number_pane_ParamLimits

0x9af9,	// (0x000ae916) clock_digital_number_pane

0x9b05,	// (0x000ae922) clock_digital_number_pane_cp02_ParamLimits

0x9b05,	// (0x000ae922) clock_digital_number_pane_cp02

0x9b11,	// (0x000ae92e) clock_digital_number_pane_cp03_ParamLimits

0x9b11,	// (0x000ae92e) clock_digital_number_pane_cp03

0x9b1d,	// (0x000ae93a) clock_digital_number_pane_cp04_ParamLimits

0x9b1d,	// (0x000ae93a) clock_digital_number_pane_cp04

0x9b2d,	// (0x000ae94a) clock_digital_separator_pane_ParamLimits

0x9b2d,	// (0x000ae94a) clock_digital_separator_pane

0x9b39,	// (0x000ae956) popup_clock_digital_window_t1

0xe8a5,	// (0x000b36c2) clock_digital_number_pane_g1

0xe8a5,	// (0x000b36c2) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x000b40fd) clock_digital_number_pane_g

0xe8a5,	// (0x000b36c2) clock_digital_separator_pane_g1

0xe8a5,	// (0x000b36c2) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x000b40fd) clock_digital_separator_pane_g

0xe511,	// (0x000b332e) bg_popup_window_pane_cp04

0x9b56,	// (0x000ae973) heading_pane_cp03

0x9b5e,	// (0x000ae97b) listscroll_popup_gms_pane

0x9b66,	// (0x000ae983) grid_large_graphic_popup_pane

0x9b70,	// (0x000ae98d) listscroll_popup_gms_pane_g1

0x9b78,	// (0x000ae995) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x000b419a) listscroll_popup_gms_pane_g

0xf05b,	// (0x000b3e78) scroll_pane_cp014

0x9b80,	// (0x000ae99d) cell_large_graphic_popup_pane_ParamLimits

0x9b80,	// (0x000ae99d) cell_large_graphic_popup_pane

0x9b98,	// (0x000ae9b5) cell_large_graphic_popup_pane_g1_ParamLimits

0x9b98,	// (0x000ae9b5) cell_large_graphic_popup_pane_g1

0x9ba4,	// (0x000ae9c1) cell_large_graphic_popup_pane_g2_ParamLimits

0x9ba4,	// (0x000ae9c1) cell_large_graphic_popup_pane_g2

0x9bb0,	// (0x000ae9cd) cell_large_graphic_popup_pane_g3_ParamLimits

0x9bb0,	// (0x000ae9cd) cell_large_graphic_popup_pane_g3

0x9bbd,	// (0x000ae9da) cell_large_graphic_popup_pane_g4_ParamLimits

0x9bbd,	// (0x000ae9da) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x000b419f) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x000b419f) cell_large_graphic_popup_pane_g

0x9bcd,	// (0x000ae9ea) grid_highlight_pane_cp010

0xe8a5,	// (0x000b36c2) bg_popup_call_pane_g1

0x9bd7,	// (0x000ae9f4) list_single_graphic_popup_conf_pane_ParamLimits

0x9bd7,	// (0x000ae9f4) list_single_graphic_popup_conf_pane

0x9bea,	// (0x000aea07) list_highlight_pane_cp01

0x9bf3,	// (0x000aea10) list_single_graphic_popup_conf_pane_g1

0xa1da,	// (0x000aeff7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x000b41a8) list_single_graphic_popup_conf_pane_g

0xa1e2,	// (0x000aefff) list_single_graphic_popup_conf_pane_t1

0xa1f0,	// (0x000af00d) linegrid_cams_pane_g1

0x276b,	// (0x000a7588) linegrid_cams_pane_g2

0xedee,	// (0x000b3c0b) linegrid_cams_pane_g3

0xa1f9,	// (0x000af016) linegrid_cams_pane_g4

0x2774,	// (0x000a7591) linegrid_cams_pane_g5

0x277d,	// (0x000a759a) linegrid_cams_pane_g6

0xee9f,	// (0x000b3cbc) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x000b41ad) linegrid_cams_pane_g

0xa202,	// (0x000af01f) popup_clock_analogue_window

0xa202,	// (0x000af01f) popup_clock_digital_window

0xe511,	// (0x000b332e) popup_phob_thumbnail_window

0xe8a5,	// (0x000b36c2) call_video_uplink_pane_g1

0xa20b,	// (0x000af028) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x000b41bc) call_video_uplink_pane_g

0xee6c,	// (0x000b3c89) video_uplink_pane

0xa213,	// (0x000af030) mce_image_pane_g1

0x2788,	// (0x000a75a5) mce_image_pane_g2

0x2790,	// (0x000a75ad) mce_image_pane_g3

0x2798,	// (0x000a75b5) mce_image_pane_g4

0x27a2,	// (0x000a75bf) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x000b41c1) mce_image_pane_g

0xa21d,	// (0x000af03a) control_top_pane_stacon_cp01_ParamLimits

0xa21d,	// (0x000af03a) control_top_pane_stacon_cp01

0xa231,	// (0x000af04e) uni_indicator_pane_stacon_cp01_ParamLimits

0xa231,	// (0x000af04e) uni_indicator_pane_stacon_cp01

0xa242,	// (0x000af05f) bg_popup_sub_pane_cp03

0x27aa,	// (0x000a75c7) chi_dic_find_pane

0x27b2,	// (0x000a75cf) listscroll_chi_dic_pane

0x27bb,	// (0x000a75d8) main_pane_chidic_g1

0xa24c,	// (0x000af069) chi_dic_find_pane_t1

0xa25a,	// (0x000af077) find_chidic_pane

0xa263,	// (0x000af080) chi_dic_list_pane_ParamLimits

0xa263,	// (0x000af080) chi_dic_list_pane

0xa274,	// (0x000af091) scroll_pane_cp020

0xa27c,	// (0x000af099) find_chidic_pane_t1

0xe511,	// (0x000b332e) input_focus_pane_cp06

0x27ce,	// (0x000a75eb) list_chi_dic_pane_ParamLimits

0x27ce,	// (0x000a75eb) list_chi_dic_pane

0x27e1,	// (0x000a75fe) list_chi_dic_pane_t1_ParamLimits

0x27e1,	// (0x000a75fe) list_chi_dic_pane_t1

0xe511,	// (0x000b332e) list_highlight_pane_cp020

0xa28b,	// (0x000af0a8) bg_cale_heading_pane_g1

0x27f4,	// (0x000a7611) bg_cale_heading_pane_g2

0x27fc,	// (0x000a7619) bg_cale_heading_pane_g3

0x2804,	// (0x000a7621) bg_cale_heading_pane_g4

0x280e,	// (0x000a762b) bg_cale_heading_pane_g5

0x2818,	// (0x000a7635) bg_cale_heading_pane_g6

0x2820,	// (0x000a763d) bg_cale_heading_pane_g7

0x2828,	// (0x000a7645) bg_cale_heading_pane_g8

0x2832,	// (0x000a764f) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x000b41cc) bg_cale_heading_pane_g

0xa28b,	// (0x000af0a8) bg_cale_side_pane_g1

0x283c,	// (0x000a7659) bg_cale_side_pane_g2

0x2844,	// (0x000a7661) bg_cale_side_pane_g3

0x284c,	// (0x000a7669) bg_cale_side_pane_g4

0x2854,	// (0x000a7671) bg_cale_side_pane_g5

0x285c,	// (0x000a7679) bg_cale_side_pane_g6

0x2864,	// (0x000a7681) bg_cale_side_pane_g7

0x286c,	// (0x000a7689) bg_cale_side_pane_g8

0x2874,	// (0x000a7691) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x000b41df) bg_cale_side_pane_g

0x287c,	// (0x000a7699) popup_call_status_window_ParamLimits

0x287c,	// (0x000a7699) popup_call_status_window

0xa293,	// (0x000af0b0) stacon_top_pane

0xa29b,	// (0x000af0b8) status_pane_ParamLimits

0xa29b,	// (0x000af0b8) status_pane

0xa2b0,	// (0x000af0cd) status_small_pane

0xa2b8,	// (0x000af0d5) control_pane

0xe511,	// (0x000b332e) stacon_bottom_pane

0xa2c0,	// (0x000af0dd) list_single_mce_smart_pane_t1_ParamLimits

0xa2c0,	// (0x000af0dd) list_single_mce_smart_pane_t1

0xa2d3,	// (0x000af0f0) list_single_mce_smart_pane_t2_ParamLimits

0xa2d3,	// (0x000af0f0) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x000b41f2) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x000b41f2) list_single_mce_smart_pane_t

0x28c3,	// (0x000a76e0) compass_pane

0x28cc,	// (0x000a76e9) main_location2_pane_t1

0x28de,	// (0x000a76fb) main_location2_pane_t2

0x28f0,	// (0x000a770d) main_location2_pane_t3

0x0003,

0xf3da,	// (0x000b41f7) main_location2_pane_t

0xa2f2,	// (0x000af10f) compass_pane_g1_ParamLimits

0xa2f2,	// (0x000af10f) compass_pane_g1

0x2936,	// (0x000a7753) compass_pane_t1

0x2945,	// (0x000a7762) compass_pane_t2

0x0005,

0xf3e3,	// (0x000b4200) compass_pane_t

0x298c,	// (0x000a77a9) text_secondary_cp61

0xa306,	// (0x000af123) navi_pane_cams_g5

0xa329,	// (0x000af146) navi_pane_im_t1

0xa337,	// (0x000af154) navi_pane_mp_g1_ParamLimits

0xa337,	// (0x000af154) navi_pane_mp_g1

0xa34b,	// (0x000af168) navi_pane_mp_g2_ParamLimits

0xa34b,	// (0x000af168) navi_pane_mp_g2

0xa357,	// (0x000af174) navi_pane_mp_g3_ParamLimits

0xa357,	// (0x000af174) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x000b4214) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x000b4214) navi_pane_mp_g

0xa363,	// (0x000af180) navi_pane_mp_t1

0xa371,	// (0x000af18e) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x000b421b) navi_pane_mp_t

0xa3ad,	// (0x000af1ca) navi_pane_vt_g1

0xa363,	// (0x000af180) navi_pane_vt_t1

0xa3b5,	// (0x000af1d2) navi_slider_pane

0xa3bd,	// (0x000af1da) zooming_pane

0xa3c5,	// (0x000af1e2) navi_slider_pane_g1

0x9bfb,	// (0x000aea18) navi_slider_pane_g2

0x0006,

0xf405,	// (0x000b4222) navi_slider_pane_g

0xa3e9,	// (0x000af206) aid_levels_zoom

0xa3f1,	// (0x000af20e) zooming_pane_g1

0xa3f9,	// (0x000af216) zooming_pane_g2

0xa3f9,	// (0x000af216) zooming_pane_g3

0x0002,

0xf414,	// (0x000b4231) zooming_pane_g

0xa401,	// (0x000af21e) level_10_zoom

0xa40a,	// (0x000af227) level_11_zoom

0xa413,	// (0x000af230) level_1_zoom

0xa41c,	// (0x000af239) level_2_zoom

0xa425,	// (0x000af242) level_3_zoom

0xa42e,	// (0x000af24b) level_4_zoom

0xa437,	// (0x000af254) level_5_zoom

0xa440,	// (0x000af25d) level_6_zoom

0xa449,	// (0x000af266) level_7_zoom

0xa452,	// (0x000af26f) level_8_zoom

0xa45b,	// (0x000af278) level_9_zoom

0xa46c,	// (0x000af289) popup_phob_thumbnail_window_g1

0xa474,	// (0x000af291) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x000b4238) popup_phob_thumbnail_window_g

0xb780,	// (0x000b059d) level_1_location

0xb788,	// (0x000b05a5) level_2_location

0xb790,	// (0x000b05ad) level_3_location

0xb798,	// (0x000b05b5) level_4_location

0xa3bd,	// (0x000af1da) level_5_location

0x2ad3,	// (0x000a78f0) mce_icon_pane_g1

0x2add,	// (0x000a78fa) mce_icon_pane_g2

0x0001,

0xf420,	// (0x000b423d) mce_icon_pane_g

0x2ae7,	// (0x000a7904) main_mup_pane_g1_ParamLimits

0x2ae7,	// (0x000a7904) main_mup_pane_g1

0x2afd,	// (0x000a791a) main_mup_pane_g2_ParamLimits

0x2afd,	// (0x000a791a) main_mup_pane_g2

0x2b15,	// (0x000a7932) main_mup_pane_g3_ParamLimits

0x2b15,	// (0x000a7932) main_mup_pane_g3

0x2b2d,	// (0x000a794a) main_mup_pane_g4_ParamLimits

0x2b2d,	// (0x000a794a) main_mup_pane_g4

0x2b45,	// (0x000a7962) main_mup_pane_g5_ParamLimits

0x2b45,	// (0x000a7962) main_mup_pane_g5

0x2b61,	// (0x000a797e) main_mup_pane_g6_ParamLimits

0x2b61,	// (0x000a797e) main_mup_pane_g6

0x2b79,	// (0x000a7996) main_mup_pane_g7_ParamLimits

0x2b79,	// (0x000a7996) main_mup_pane_g7

0x2b91,	// (0x000a79ae) main_mup_pane_g8_ParamLimits

0x2b91,	// (0x000a79ae) main_mup_pane_g8

0x2ba9,	// (0x000a79c6) main_mup_pane_g9_ParamLimits

0x2ba9,	// (0x000a79c6) main_mup_pane_g9

0x2bc3,	// (0x000a79e0) main_mup_pane_g10_ParamLimits

0x2bc3,	// (0x000a79e0) main_mup_pane_g10

0x2bdd,	// (0x000a79fa) main_mup_pane_g11_ParamLimits

0x2bdd,	// (0x000a79fa) main_mup_pane_g11

0x2bf1,	// (0x000a7a0e) main_mup_pane_g12_ParamLimits

0x2bf1,	// (0x000a7a0e) main_mup_pane_g12

0x2c07,	// (0x000a7a24) main_mup_pane_g13_ParamLimits

0x2c07,	// (0x000a7a24) main_mup_pane_g13

0x000c,

0xf425,	// (0x000b4242) main_mup_pane_g_ParamLimits

0xf425,	// (0x000b4242) main_mup_pane_g

0x2c1b,	// (0x000a7a38) main_mup_pane_t1_ParamLimits

0x2c1b,	// (0x000a7a38) main_mup_pane_t1

0x2c35,	// (0x000a7a52) main_mup_pane_t2_ParamLimits

0x2c35,	// (0x000a7a52) main_mup_pane_t2

0x2c4d,	// (0x000a7a6a) main_mup_pane_t3_ParamLimits

0x2c4d,	// (0x000a7a6a) main_mup_pane_t3

0x2c65,	// (0x000a7a82) main_mup_pane_t4_ParamLimits

0x2c65,	// (0x000a7a82) main_mup_pane_t4

0x2c83,	// (0x000a7aa0) main_mup_pane_t5_ParamLimits

0x2c83,	// (0x000a7aa0) main_mup_pane_t5

0x2c98,	// (0x000a7ab5) main_mup_pane_t6_ParamLimits

0x2c98,	// (0x000a7ab5) main_mup_pane_t6

0x0005,

0xf440,	// (0x000b425d) main_mup_pane_t_ParamLimits

0xf440,	// (0x000b425d) main_mup_pane_t

0x2caa,	// (0x000a7ac7) mup_progress_pane_ParamLimits

0x2caa,	// (0x000a7ac7) mup_progress_pane

0x2cb6,	// (0x000a7ad3) mup_visualizer_pane_ParamLimits

0x2cb6,	// (0x000a7ad3) mup_visualizer_pane

0x2cea,	// (0x000a7b07) mup_volume_pane_ParamLimits

0x2cea,	// (0x000a7b07) mup_volume_pane

0x9c0d,	// (0x000aea2a) mup_visualizer_pane_g1_ParamLimits

0x9c0d,	// (0x000aea2a) mup_visualizer_pane_g1

0x9c0d,	// (0x000aea2a) mup_visualizer_pane_g2_ParamLimits

0x9c0d,	// (0x000aea2a) mup_visualizer_pane_g2

0xa2f2,	// (0x000af10f) mup_visualizer_pane_g3_ParamLimits

0xa2f2,	// (0x000af10f) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x000b426a) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x000b426a) mup_visualizer_pane_g

0xe8a5,	// (0x000b36c2) mup_volume_pane_g1

0xa484,	// (0x000af2a1) mup_volume_pane_g2

0x0001,

0xf454,	// (0x000b4271) mup_volume_pane_g

0xe8a5,	// (0x000b36c2) mup_progress_pane_g1

0xa48d,	// (0x000af2aa) mup_progress_pane_g2

0xa496,	// (0x000af2b3) mup_progress_pane_g3

0x0002,

0xf459,	// (0x000b4276) mup_progress_pane_g

0xe511,	// (0x000b332e) bg_popup_window_pane_cp05

0xa49f,	// (0x000af2bc) heading_pane_cp02_ParamLimits

0xa49f,	// (0x000af2bc) heading_pane_cp02

0xa4b9,	// (0x000af2d6) list_popup_blid_pane

0xa4c1,	// (0x000af2de) list_blid_sat_info_pane_ParamLimits

0xa4c1,	// (0x000af2de) list_blid_sat_info_pane

0xa4d4,	// (0x000af2f1) list_blid_sat_info_pane_g1

0xa4dc,	// (0x000af2f9) list_blid_sat_info_pane_t1

0x2e00,	// (0x000a7c1d) mup_equalizer_pane_ParamLimits

0x2e00,	// (0x000a7c1d) mup_equalizer_pane

0x2e19,	// (0x000a7c36) mup_equalizer_pane_cp1_ParamLimits

0x2e19,	// (0x000a7c36) mup_equalizer_pane_cp1

0x2e36,	// (0x000a7c53) mup_equalizer_pane_cp2_ParamLimits

0x2e36,	// (0x000a7c53) mup_equalizer_pane_cp2

0x2e53,	// (0x000a7c70) mup_equalizer_pane_cp3_ParamLimits

0x2e53,	// (0x000a7c70) mup_equalizer_pane_cp3

0x2e74,	// (0x000a7c91) mup_equalizer_pane_cp4_ParamLimits

0x2e74,	// (0x000a7c91) mup_equalizer_pane_cp4

0x2e95,	// (0x000a7cb2) mup_equalizer_pane_cp5

0x2ea9,	// (0x000a7cc6) mup_equalizer_pane_cp6

0x2ebd,	// (0x000a7cda) mup_equalizer_pane_cp7

0xb69e,	// (0x000b04bb) bg_popup_call_poc_act_pane_g9

0xb6a6,	// (0x000b04c3) bg_popup_call_poc_act_pane_g10

0xb6ae,	// (0x000b04cb) bg_popup_call_poc_act_pane_g11

0x000a,

0xe76c,	// (0x000b3589) mup_scale_pane

0xe8a5,	// (0x000b36c2) mup_scale_pane_g1

0xa4ea,	// (0x000af307) mup_scale_pane_g2

0x0006,

0xf475,	// (0x000b4292) mup_scale_pane_g

0xa50e,	// (0x000af32b) msg_data_pane

0xa516,	// (0x000af333) scroll_pane_cp017

0x2ee3,	// (0x000a7d00) bg_list_pane_cp04_ParamLimits

0x2ee3,	// (0x000a7d00) bg_list_pane_cp04

0xa51e,	// (0x000af33b) msg_data_pane_g1

0x2f07,	// (0x000a7d24) msg_data_pane_g2

0x2f0f,	// (0x000a7d2c) msg_data_pane_g3

0x2f17,	// (0x000a7d34) msg_data_pane_g4

0x2f1f,	// (0x000a7d3c) msg_data_pane_g5

0x2f27,	// (0x000a7d44) msg_data_pane_g6

0x2f2f,	// (0x000a7d4c) msg_data_pane_g7

0x0006,

0xf484,	// (0x000b42a1) msg_data_pane_g

0x2f37,	// (0x000a7d54) msg_text_pane_ParamLimits

0x2f37,	// (0x000a7d54) msg_text_pane

0x2f5d,	// (0x000a7d7a) qrid_highlight_pane_cp011_ParamLimits

0x2f5d,	// (0x000a7d7a) qrid_highlight_pane_cp011

0xe511,	// (0x000b332e) msg_body_pane

0xe511,	// (0x000b332e) msg_header_pane

0xa526,	// (0x000af343) input_focus_pane_cp07

0x2f8c,	// (0x000a7da9) msg_header_pane_t1_ParamLimits

0x2f8c,	// (0x000a7da9) msg_header_pane_t1

0x2f9e,	// (0x000a7dbb) msg_header_pane_t2_ParamLimits

0x2f9e,	// (0x000a7dbb) msg_header_pane_t2

0x0001,

0xf498,	// (0x000b42b5) msg_header_pane_t_ParamLimits

0xf498,	// (0x000b42b5) msg_header_pane_t

0xa53b,	// (0x000af358) msg_body_pane_g1

0x2fb0,	// (0x000a7dcd) msg_body_pane_t1_ParamLimits

0x2fb0,	// (0x000a7dcd) msg_body_pane_t1

0x2fe1,	// (0x000a7dfe) msg_body_pane_t2_ParamLimits

0x2fe1,	// (0x000a7dfe) msg_body_pane_t2

0x2ff3,	// (0x000a7e10) msg_body_pane_t3_ParamLimits

0x2ff3,	// (0x000a7e10) msg_body_pane_t3

0x0002,

0xf49d,	// (0x000b42ba) msg_body_pane_t_ParamLimits

0xf49d,	// (0x000b42ba) msg_body_pane_t

0x303f,	// (0x000a7e5c) main_viewer_pane_g1_ParamLimits

0x303f,	// (0x000a7e5c) main_viewer_pane_g1

0x304d,	// (0x000a7e6a) main_viewer_pane_g2_ParamLimits

0x304d,	// (0x000a7e6a) main_viewer_pane_g2

0x305b,	// (0x000a7e78) main_viewer_pane_g3_ParamLimits

0x305b,	// (0x000a7e78) main_viewer_pane_g3

0x306a,	// (0x000a7e87) main_viewer_pane_g4_ParamLimits

0x306a,	// (0x000a7e87) main_viewer_pane_g4

0x9c33,	// (0x000aea50) main_viewer_pane_g5_ParamLimits

0x9c33,	// (0x000aea50) main_viewer_pane_g5

0x9c33,	// (0x000aea50) main_viewer_pane_g7_ParamLimits

0x9c33,	// (0x000aea50) main_viewer_pane_g7

0x9917,	// (0x000ae734) main_viewer_pane_g8_ParamLimits

0x9917,	// (0x000ae734) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x000b42ca) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x000b42ca) main_viewer_pane_g

0xa543,	// (0x000af360) viewer_content_pane_ParamLimits

0xa543,	// (0x000af360) viewer_content_pane

0x30a6,	// (0x000a7ec3) main_postcard_pane_g1_ParamLimits

0x30a6,	// (0x000a7ec3) main_postcard_pane_g1

0x30bc,	// (0x000a7ed9) main_postcard_pane_g2_ParamLimits

0x30bc,	// (0x000a7ed9) main_postcard_pane_g2

0x30d2,	// (0x000a7eef) main_postcard_pane_g3_ParamLimits

0x30d2,	// (0x000a7eef) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x000b42db) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x000b42db) main_postcard_pane_g

0x30e9,	// (0x000a7f06) main_postcard_pane_g4

0xb880,	// (0x000b069d) smil_status_volume_pane_g2

0x312c,	// (0x000a7f49) postcard_pane_ParamLimits

0x312c,	// (0x000a7f49) postcard_pane

0xa551,	// (0x000af36e) postcard_pane_g1_ParamLimits

0xa551,	// (0x000af36e) postcard_pane_g1

0x316e,	// (0x000a7f8b) postcard_pane_g2_ParamLimits

0x316e,	// (0x000a7f8b) postcard_pane_g2

0x317a,	// (0x000a7f97) postcard_pane_g3_ParamLimits

0x317a,	// (0x000a7f97) postcard_pane_g3

0xa55f,	// (0x000af37c) postcard_pane_g4_ParamLimits

0xa55f,	// (0x000af37c) postcard_pane_g4

0x3186,	// (0x000a7fa3) postcard_pane_g5_ParamLimits

0x3186,	// (0x000a7fa3) postcard_pane_g5

0x319b,	// (0x000a7fb8) postcard_pane_g6_ParamLimits

0x319b,	// (0x000a7fb8) postcard_pane_g6

0xa551,	// (0x000af36e) postcard_pane_g7_ParamLimits

0xa551,	// (0x000af36e) postcard_pane_g7

0x0006,

0xf4cb,	// (0x000b42e8) postcard_pane_g_ParamLimits

0xf4cb,	// (0x000b42e8) postcard_pane_g

0x31af,	// (0x000a7fcc) main_mp2_pane_g1_ParamLimits

0x31af,	// (0x000a7fcc) main_mp2_pane_g1

0x31bb,	// (0x000a7fd8) main_mp2_pane_g2_ParamLimits

0x31bb,	// (0x000a7fd8) main_mp2_pane_g2

0x31c7,	// (0x000a7fe4) main_mp2_pane_g3_ParamLimits

0x31c7,	// (0x000a7fe4) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x000b42f7) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x000b42f7) main_mp2_pane_g

0x31d3,	// (0x000a7ff0) main_mp2_pane_t1_ParamLimits

0x31d3,	// (0x000a7ff0) main_mp2_pane_t1

0x31e8,	// (0x000a8005) main_mp2_pane_t2_ParamLimits

0x31e8,	// (0x000a8005) main_mp2_pane_t2

0x31fa,	// (0x000a8017) main_mp2_pane_t3_ParamLimits

0x31fa,	// (0x000a8017) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x000b42fe) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x000b42fe) main_mp2_pane_t

0xa56d,	// (0x000af38a) pec_content_pane_ParamLimits

0xa56d,	// (0x000af38a) pec_content_pane

0xf05b,	// (0x000b3e78) scroll_pane_cp015

0xa57f,	// (0x000af39c) pec_attribute_pane_ParamLimits

0xa57f,	// (0x000af39c) pec_attribute_pane

0x320c,	// (0x000a8029) pec_content_pane_g1_ParamLimits

0x320c,	// (0x000a8029) pec_content_pane_g1

0xa58f,	// (0x000af3ac) pec_content_pane_t1_ParamLimits

0xa58f,	// (0x000af3ac) pec_content_pane_t1

0xa5a1,	// (0x000af3be) pec_content_pane_t2_ParamLimits

0xa5a1,	// (0x000af3be) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x000b4305) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x000b4305) pec_content_pane_t

0x3218,	// (0x000a8035) list_single_graphic_pane_cp01_ParamLimits

0x3218,	// (0x000a8035) list_single_graphic_pane_cp01

0xe76c,	// (0x000b3589) bg_popup_sub_pane_cp04

0xa5b3,	// (0x000af3d0) popup_mup_playback_window_g1

0xa5bf,	// (0x000af3dc) popup_mup_playback_window_t1

0xa5d4,	// (0x000af3f1) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x000b430a) popup_mup_playback_window_t

0xa60b,	// (0x000af428) main_image_pane_g1_ParamLimits

0xa60b,	// (0x000af428) main_image_pane_g1

0xa64e,	// (0x000af46b) scroll_pane_cp018_ParamLimits

0xa64e,	// (0x000af46b) scroll_pane_cp018

0xa666,	// (0x000af483) scroll_pane_cp016_ParamLimits

0xa666,	// (0x000af483) scroll_pane_cp016

0x32e7,	// (0x000a8104) smil2_image_pane_ParamLimits

0x32e7,	// (0x000a8104) smil2_image_pane

0x331b,	// (0x000a8138) smil2_root_pane_ParamLimits

0x331b,	// (0x000a8138) smil2_root_pane

0x3353,	// (0x000a8170) smil2_text_pane_ParamLimits

0x3353,	// (0x000a8170) smil2_text_pane

0xe511,	// (0x000b332e) bg_list_pane_cp06

0xa6a2,	// (0x000af4bf) grid_radio_pane

0xe511,	// (0x000b332e) bg_popup_window_pane_cp06

0xa6aa,	// (0x000af4c7) main_fmradio_pane_t1

0x9b56,	// (0x000ae973) heading_pane_cp04

0xa6b8,	// (0x000af4d5) main_fmradio_pane_t2

0xb6b6,	// (0x000b04d3) popup_cale_lunar_info_window_g1

0xa6c6,	// (0x000af4e3) main_fmradio_pane_t3

0xb6be,	// (0x000b04db) popup_cale_lunar_info_window_g2

0xa6d4,	// (0x000af4f1) main_fmradio_pane_t4

0x0001,

0xa6e2,	// (0x000af4ff) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x000b43e5) popup_cale_lunar_info_window_g

0xf502,	// (0x000b431f) main_fmradio_pane_t

0xa6f0,	// (0x000af50d) wait_bar_pane_cp03

0xa6f8,	// (0x000af515) cell_fmradio_pane_ParamLimits

0xa6f8,	// (0x000af515) cell_fmradio_pane

0xa551,	// (0x000af36e) cell_fmradio_pane_g1_ParamLimits

0xa551,	// (0x000af36e) cell_fmradio_pane_g1

0xe511,	// (0x000b332e) grid_highlight_pane_cp011

0xa70b,	// (0x000af528) poc_content_pane_ParamLimits

0xa70b,	// (0x000af528) poc_content_pane

0xa71d,	// (0x000af53a) scroll_pane_cp019

0x33d3,	// (0x000a81f0) popup_call_poc_act_window_ParamLimits

0x33d3,	// (0x000a81f0) popup_call_poc_act_window

0x33f7,	// (0x000a8214) popup_call_poc_inact_window_ParamLimits

0x33f7,	// (0x000a8214) popup_call_poc_inact_window

0xf59f,	// (0x000b43bc) bg_popup_call_poc_act_pane_g

0xb62e,	// (0x000b044b) bg_popup_call_poc_inact_pane_g1

0xb636,	// (0x000b0453) bg_popup_call_poc_inact_pane_g2

0xa725,	// (0x000af542) popup_call_poc_act_window_g2

0xb63e,	// (0x000b045b) bg_popup_call_poc_inact_pane_g3

0xb646,	// (0x000b0463) bg_popup_call_poc_inact_pane_g4

0xb64e,	// (0x000b046b) bg_popup_call_poc_inact_pane_g5

0xa72d,	// (0x000af54a) popup_call_poc_act_window_t1_ParamLimits

0xa72d,	// (0x000af54a) popup_call_poc_act_window_t1

0xa755,	// (0x000af572) popup_call_poc_act_window_t2_ParamLimits

0xa755,	// (0x000af572) popup_call_poc_act_window_t2

0xa77d,	// (0x000af59a) popup_call_poc_act_window_t3_ParamLimits

0xa77d,	// (0x000af59a) popup_call_poc_act_window_t3

0xa7a5,	// (0x000af5c2) popup_call_poc_act_window_t4_ParamLimits

0xa7a5,	// (0x000af5c2) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x000b432a) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x000b432a) popup_call_poc_act_window_t

0xb656,	// (0x000b0473) bg_popup_call_poc_inact_pane_g6

0xb65e,	// (0x000b047b) bg_popup_call_poc_inact_pane_g7

0xb666,	// (0x000b0483) bg_popup_call_poc_inact_pane_g8

0xa7b7,	// (0x000af5d4) popup_call_poc_inact_window_g2

0xb66e,	// (0x000b048b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x000b43a9) bg_popup_call_poc_inact_pane_g

0xa7bf,	// (0x000af5dc) popup_call_poc_inact_window_t1_ParamLimits

0xa7bf,	// (0x000af5dc) popup_call_poc_inact_window_t1

0xa7d4,	// (0x000af5f1) popup_call_poc_inact_window_t2_ParamLimits

0xa7d4,	// (0x000af5f1) popup_call_poc_inact_window_t2

0xa7e9,	// (0x000af606) popup_call_poc_inact_window_t3_ParamLimits

0xa7e9,	// (0x000af606) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x000b4333) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x000b4333) popup_call_poc_inact_window_t

0xb7f3,	// (0x000b0610) context_pane_ParamLimits

0x3c20,	// (0x000a8a3d) signal_pane_ParamLimits

0xa3bd,	// (0x000af1da) main_call2_pane

0x9c7e,	// (0x000aea9b) popup_phob_thumbnail2_window_ParamLimits

0x9c7e,	// (0x000aea9b) popup_phob_thumbnail2_window

0x9c1b,	// (0x000aea38) aid_hotspot_pointer_arrow_pane

0x9c23,	// (0x000aea40) aid_hotspot_pointer_hand_pane

0x3742,	// (0x000a855f) phob_pre_status_pane_g5

0x10a9,	// (0x000a5ec6) cams_zoom_pane_ParamLimits

0x10b8,	// (0x000a5ed5) image_vga_pane_ParamLimits

0x10d2,	// (0x000a5eef) main_camera_pane_g1_ParamLimits

0x10e4,	// (0x000a5f01) main_camera_pane_g2_ParamLimits

0x10f4,	// (0x000a5f11) main_camera_pane_g3_ParamLimits

0x1106,	// (0x000a5f23) main_camera_pane_g4_ParamLimits

0x1118,	// (0x000a5f35) main_camera_pane_g5_ParamLimits

0x112a,	// (0x000a5f47) main_camera_pane_g6_ParamLimits

0x113c,	// (0x000a5f59) main_camera_pane_g7_ParamLimits

0xf215,	// (0x000b4032) main_camera_pane_g_ParamLimits

0x114e,	// (0x000a5f6b) main_camera_pane_t1_ParamLimits

0x1164,	// (0x000a5f81) main_camera_pane_t2_ParamLimits

0xf226,	// (0x000b4043) main_camera_pane_t_ParamLimits

0xe76c,	// (0x000b3589) bg_popup_preview_window_pane_cp01_ParamLimits

0xe76c,	// (0x000b3589) bg_popup_preview_window_pane_cp01

0xa7fe,	// (0x000af61b) popup_phob_thumbnail2_window_g1_ParamLimits

0xa7fe,	// (0x000af61b) popup_phob_thumbnail2_window_g1

0xe511,	// (0x000b332e) call2_cli_visual_pane

0x342b,	// (0x000a8248) popup_call2_audio_conf_window_ParamLimits

0x342b,	// (0x000a8248) popup_call2_audio_conf_window

0x344b,	// (0x000a8268) popup_call2_audio_first_window_ParamLimits

0x344b,	// (0x000a8268) popup_call2_audio_first_window

0x34e1,	// (0x000a82fe) popup_call2_audio_in_window_ParamLimits

0x34e1,	// (0x000a82fe) popup_call2_audio_in_window

0x3529,	// (0x000a8346) popup_call2_audio_out_window_ParamLimits

0x3529,	// (0x000a8346) popup_call2_audio_out_window

0x3593,	// (0x000a83b0) popup_call2_audio_second_window_ParamLimits

0x3593,	// (0x000a83b0) popup_call2_audio_second_window

0x35f9,	// (0x000a8416) popup_call2_audio_wait_window_ParamLimits

0x35f9,	// (0x000a8416) popup_call2_audio_wait_window

0xe511,	// (0x000b332e) bg_popup_call2_act_pane_cp03

0xe74e,	// (0x000b356b) list_conf_pane_cp

0xa80a,	// (0x000af627) popup_call2_audio_conf_window_t1

0xa818,	// (0x000af635) list_single_graphic_popup_conf2_pane_ParamLimits

0xa818,	// (0x000af635) list_single_graphic_popup_conf2_pane

0x9bea,	// (0x000aea07) list_highlight_pane_cp04

0xa82b,	// (0x000af648) list_single_graphic_popup_conf2_pane_g1

0xa1da,	// (0x000aeff7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x000b433a) list_single_graphic_popup_conf2_pane_g

0xa835,	// (0x000af652) list_single_graphic_popup_conf2_pane_t1

0xa843,	// (0x000af660) bg_popup_call2_act_pane_cp01_ParamLimits

0xa843,	// (0x000af660) bg_popup_call2_act_pane_cp01

0xa8cd,	// (0x000af6ea) call_type_pane_cp05_ParamLimits

0xa8cd,	// (0x000af6ea) call_type_pane_cp05

0xa921,	// (0x000af73e) popup_call2_audio_second_window_g1_ParamLimits

0xa921,	// (0x000af73e) popup_call2_audio_second_window_g1

0xa975,	// (0x000af792) popup_call2_audio_second_window_g2_ParamLimits

0xa975,	// (0x000af792) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x000b433f) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x000b433f) popup_call2_audio_second_window_g

0xa9da,	// (0x000af7f7) popup_call2_audio_second_window_t1_ParamLimits

0xa9da,	// (0x000af7f7) popup_call2_audio_second_window_t1

0xaa95,	// (0x000af8b2) popup_call2_audio_second_window_t2_ParamLimits

0xaa95,	// (0x000af8b2) popup_call2_audio_second_window_t2

0xaae8,	// (0x000af905) popup_call2_audio_second_window_t3_ParamLimits

0xaae8,	// (0x000af905) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x000b4346) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x000b4346) popup_call2_audio_second_window_t

0xe511,	// (0x000b332e) bg_popup_call2_in_pane_cp02

0xe51b,	// (0x000b3338) call_type_pane_cp04

0xe523,	// (0x000b3340) popup_call2_audio_wait_window_g1

0xe52b,	// (0x000b3348) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x000b3f1f) popup_call2_audio_wait_window_g

0xe533,	// (0x000b3350) popup_call2_audio_wait_window_t3

0xabdb,	// (0x000af9f8) bg_popup_call2_act_pane_ParamLimits

0xabdb,	// (0x000af9f8) bg_popup_call2_act_pane

0xac9b,	// (0x000afab8) call_type_pane_cp03_ParamLimits

0xac9b,	// (0x000afab8) call_type_pane_cp03

0xacff,	// (0x000afb1c) popup_call2_audio_first_window_g1_ParamLimits

0xacff,	// (0x000afb1c) popup_call2_audio_first_window_g1

0xad6f,	// (0x000afb8c) popup_call2_audio_first_window_g2_ParamLimits

0xad6f,	// (0x000afb8c) popup_call2_audio_first_window_g2

0x9c0d,	// (0x000aea2a) popup_call2_audio_first_window_g3_ParamLimits

0x9c0d,	// (0x000aea2a) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x000b434f) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x000b434f) popup_call2_audio_first_window_g

0xae4d,	// (0x000afc6a) popup_call2_audio_first_window_t1_ParamLimits

0xae4d,	// (0x000afc6a) popup_call2_audio_first_window_t1

0xaf76,	// (0x000afd93) popup_call2_audio_first_window_t4_ParamLimits

0xaf76,	// (0x000afd93) popup_call2_audio_first_window_t4

0xb059,	// (0x000afe76) popup_call2_audio_first_window_t5_ParamLimits

0xb059,	// (0x000afe76) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x000b435a) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x000b435a) popup_call2_audio_first_window_t

0xe764,	// (0x000b3581) bg_popup_call2_act_pane_g1

0xb6c6,	// (0x000b04e3) popup_cale_lunar_info_window_t1

0xb6d4,	// (0x000b04f1) popup_cale_lunar_info_window_t2

0xb6e2,	// (0x000b04ff) popup_cale_lunar_info_window_t3

0xe511,	// (0x000b332e) bg_popup_call2_bubble_pane

0xb15a,	// (0x000aff77) bg_popup_call2_in_pane_cp01_ParamLimits

0xb15a,	// (0x000aff77) bg_popup_call2_in_pane_cp01

0xe1ed,	// (0x000b300a) call_type_pane_cp02

0xb1a2,	// (0x000affbf) popup_call2_audio_out_window_g1_ParamLimits

0xb1a2,	// (0x000affbf) popup_call2_audio_out_window_g1

0xb1ce,	// (0x000affeb) popup_call2_audio_out_window_g2_ParamLimits

0xb1ce,	// (0x000affeb) popup_call2_audio_out_window_g2

0xb1f6,	// (0x000b0013) popup_call2_audio_out_window_g3_ParamLimits

0xb1f6,	// (0x000b0013) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x000b4363) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x000b4363) popup_call2_audio_out_window_g

0xb231,	// (0x000b004e) popup_call2_audio_out_window_t1_ParamLimits

0xb231,	// (0x000b004e) popup_call2_audio_out_window_t1

0xb290,	// (0x000b00ad) popup_call2_audio_out_window_t2_ParamLimits

0xb290,	// (0x000b00ad) popup_call2_audio_out_window_t2

0xb2e4,	// (0x000b0101) popup_call2_audio_out_window_t3_ParamLimits

0xb2e4,	// (0x000b0101) popup_call2_audio_out_window_t3

0xb2fa,	// (0x000b0117) popup_call2_audio_out_window_t4_ParamLimits

0xb2fa,	// (0x000b0117) popup_call2_audio_out_window_t4

0xb310,	// (0x000b012d) popup_call2_audio_out_window_t5_ParamLimits

0xb310,	// (0x000b012d) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x000b436c) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x000b436c) popup_call2_audio_out_window_t

0xb374,	// (0x000b0191) bg_popup_call2_in_pane_ParamLimits

0xb374,	// (0x000b0191) bg_popup_call2_in_pane

0xb3d0,	// (0x000b01ed) popup_call2_audio_in_window_g1_ParamLimits

0xb3d0,	// (0x000b01ed) popup_call2_audio_in_window_g1

0xb408,	// (0x000b0225) popup_call2_audio_in_window_g2_ParamLimits

0xb408,	// (0x000b0225) popup_call2_audio_in_window_g2

0xb440,	// (0x000b025d) popup_call2_audio_in_window_g3_ParamLimits

0xb440,	// (0x000b025d) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x000b4379) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x000b4379) popup_call2_audio_in_window_g

0xb498,	// (0x000b02b5) popup_call2_audio_in_window_t1_ParamLimits

0xb498,	// (0x000b02b5) popup_call2_audio_in_window_t1

0xb518,	// (0x000b0335) popup_call2_audio_in_window_t2_ParamLimits

0xb518,	// (0x000b0335) popup_call2_audio_in_window_t2

0xb598,	// (0x000b03b5) popup_call2_audio_in_window_t3_ParamLimits

0xb598,	// (0x000b03b5) popup_call2_audio_in_window_t3

0xb5b2,	// (0x000b03cf) popup_call2_audio_in_window_t4_ParamLimits

0xb5b2,	// (0x000b03cf) popup_call2_audio_in_window_t4

0xb5c4,	// (0x000b03e1) popup_call2_audio_in_window_t5_ParamLimits

0xb5c4,	// (0x000b03e1) popup_call2_audio_in_window_t5

0xb5d9,	// (0x000b03f6) popup_call2_audio_in_window_t6_ParamLimits

0xb5d9,	// (0x000b03f6) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x000b4382) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x000b4382) popup_call2_audio_in_window_t

0xe764,	// (0x000b3581) bg_popup_call2_in_pane_g1

0xb6f0,	// (0x000b050d) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x000b43ea) popup_cale_lunar_info_window_t

0xe76c,	// (0x000b3589) bg_popup_call2_rect_pane_ParamLimits

0xe76c,	// (0x000b3589) bg_popup_call2_rect_pane

0xe511,	// (0x000b332e) call2_cli_visual_graphic_pane

0xe511,	// (0x000b332e) call2_cli_visual_text_pane

0x9ca5,	// (0x000aeac2) smil_status_volume_pane_g3

0x0002,

0xe8a5,	// (0x000b36c2) call2_cli_visual_graphic_pane_g1

0xe8a5,	// (0x000b36c2) call2_cli_visual_graphic_pane_g2

0xe8a5,	// (0x000b36c2) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x000b438f) call2_cli_visual_graphic_pane_g

0xb5ee,	// (0x000b040b) bg_popup_call2_rect_pane_g1

0xedd4,	// (0x000b3bf1) bg_popup_call2_rect_pane_g2

0xb5f6,	// (0x000b0413) bg_popup_call2_rect_pane_g3

0xb5fe,	// (0x000b041b) bg_popup_call2_rect_pane_g4

0xb606,	// (0x000b0423) bg_popup_call2_rect_pane_g5

0xb60e,	// (0x000b042b) bg_popup_call2_rect_pane_g6

0xb616,	// (0x000b0433) bg_popup_call2_rect_pane_g7

0xb61e,	// (0x000b043b) bg_popup_call2_rect_pane_g8

0xb626,	// (0x000b0443) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x000b4396) bg_popup_call2_rect_pane_g

0xb62e,	// (0x000b044b) bg_popup_call2_bubble_pane_g1

0xb636,	// (0x000b0453) bg_popup_call2_bubble_pane_g2

0xb63e,	// (0x000b045b) bg_popup_call2_bubble_pane_g3

0xb646,	// (0x000b0463) bg_popup_call2_bubble_pane_g4

0xb64e,	// (0x000b046b) bg_popup_call2_bubble_pane_g5

0xb656,	// (0x000b0473) bg_popup_call2_bubble_pane_g6

0xb65e,	// (0x000b047b) bg_popup_call2_bubble_pane_g7

0xb666,	// (0x000b0483) bg_popup_call2_bubble_pane_g8

0xb66e,	// (0x000b048b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x000b43a9) bg_popup_call2_bubble_pane_g

0x09fc,	// (0x000a5819) aid_cale_week_size_cell_pane

0x117c,	// (0x000a5f99) aid_cams_cif_uncrop_pane_ParamLimits

0x117c,	// (0x000a5f99) aid_cams_cif_uncrop_pane

0x1331,	// (0x000a614e) aid_cams_size_cell_ParamLimits

0x1331,	// (0x000a614e) aid_cams_size_cell

0x1345,	// (0x000a6162) grid_cams_pane_ParamLimits

0x135f,	// (0x000a617c) linegrid_cams_pane_ParamLimits

0x1554,	// (0x000a6371) call_video_pane_t1

0x1572,	// (0x000a638f) call_video_pane_t2

0x0001,

0xf279,	// (0x000b4096) call_video_pane_t

0x19a1,	// (0x000a67be) aid_cale_month_size_cell_pane_ParamLimits

0x19a1,	// (0x000a67be) aid_cale_month_size_cell_pane

0xf616,	// (0x000b4433) smil_status_volume_pane_g

0x9cb2,	// (0x000aeacf) volume_smil_pane_ParamLimits

0x02b3,	// (0x000a50d0) aid_popup2_width_pane

0x0961,	// (0x000a577e) cell_qdial_pane_g4_ParamLimits

0x0961,	// (0x000a577e) cell_qdial_pane_g4

0x2916,	// (0x000a7733) aid_blid_cardinal_pane_ParamLimits

0x2922,	// (0x000a773f) aid_blid_destination_pane_ParamLimits

0x2922,	// (0x000a773f) aid_blid_destination_pane

0xe76c,	// (0x000b3589) bg_popup_call_poc_act_pane_ParamLimits

0xe76c,	// (0x000b3589) bg_popup_call_poc_act_pane

0xe76c,	// (0x000b3589) bg_popup_call_poc_inact_pane_ParamLimits

0xe76c,	// (0x000b3589) bg_popup_call_poc_inact_pane

0xb676,	// (0x000b0493) bg_popup_call_poc_act_pane_g1

0xb67e,	// (0x000b049b) bg_popup_call_poc_act_pane_g2

0xb686,	// (0x000b04a3) bg_popup_call_poc_act_pane_g3

0xb646,	// (0x000b0463) bg_popup_call_poc_act_pane_g4

0xb64e,	// (0x000b046b) bg_popup_call_poc_act_pane_g5

0xb68e,	// (0x000b04ab) bg_popup_call_poc_act_pane_g6

0xb65e,	// (0x000b047b) bg_popup_call_poc_act_pane_g7

0xb696,	// (0x000b04b3) bg_popup_call_poc_act_pane_g8

0xe511,	// (0x000b332e) main_usb_pane

0x9c59,	// (0x000aea76) popup_cale_lunar_info_window

0x183c,	// (0x000a6659) im_reading_pane_t1_ParamLimits

0xefb3,	// (0x000b3dd0) list_im_pane_ParamLimits

0xefc4,	// (0x000b3de1) scroll_pane_cp07_ParamLimits

0xe511,	// (0x000b332e) grid_highlight_pane_cp012

0xe76c,	// (0x000b3589) mup_scale_pane_ParamLimits

0xa551,	// (0x000af36e) main_usb_pane_g1_ParamLimits

0xa551,	// (0x000af36e) main_usb_pane_g1

0x3657,	// (0x000a8474) main_usb_pane_g2_ParamLimits

0x3657,	// (0x000a8474) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x000b43d3) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x000b43d3) main_usb_pane_g

0x366d,	// (0x000a848a) main_usb_pane_t1_ParamLimits

0x366d,	// (0x000a848a) main_usb_pane_t1

0x367f,	// (0x000a849c) main_usb_pane_t2_ParamLimits

0x367f,	// (0x000a849c) main_usb_pane_t2

0x3691,	// (0x000a84ae) main_usb_pane_t3_ParamLimits

0x3691,	// (0x000a84ae) main_usb_pane_t3

0x36a3,	// (0x000a84c0) main_usb_pane_t4_ParamLimits

0x36a3,	// (0x000a84c0) main_usb_pane_t4

0x36b5,	// (0x000a84d2) main_usb_pane_t5_ParamLimits

0x36b5,	// (0x000a84d2) main_usb_pane_t5

0x36c7,	// (0x000a84e4) main_usb_pane_t6_ParamLimits

0x36c7,	// (0x000a84e4) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x000b43d8) main_usb_pane_t_ParamLimits

0x28c3,	// (0x000a76e0) aid_text_placing

0x28cc,	// (0x000a76e9) main_location2_pane_t1_ParamLimits

0x28de,	// (0x000a76fb) main_location2_pane_t2_ParamLimits

0x28f0,	// (0x000a770d) main_location2_pane_t3_ParamLimits

0x2904,	// (0x000a7721) main_location2_pane_t4_ParamLimits

0x2904,	// (0x000a7721) main_location2_pane_t4

0xf3da,	// (0x000b41f7) main_location2_pane_t_ParamLimits

0xe7a8,	// (0x000b35c5) find_pinb_pane_g2_ParamLimits

0xe7a8,	// (0x000b35c5) find_pinb_pane_g2

0x0001,

0xf128,	// (0x000b3f45) find_pinb_pane_g_ParamLimits

0xf128,	// (0x000b3f45) find_pinb_pane_g

0xe7b4,	// (0x000b35d1) find_pinb_pane_t1_ParamLimits

0xe7c6,	// (0x000b35e3) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x000b3f4a) find_pinb_pane_t_ParamLimits

0xe511,	// (0x000b332e) main_call3_pane

0x1e84,	// (0x000a6ca1) cale_month_day_heading_pane_t1_ParamLimits

0x1f0a,	// (0x000a6d27) cale_month_day_heading_pane_t2_ParamLimits

0x1f9b,	// (0x000a6db8) cale_month_day_heading_pane_t3_ParamLimits

0x202c,	// (0x000a6e49) cale_month_day_heading_pane_t4_ParamLimits

0x20c5,	// (0x000a6ee2) cale_month_day_heading_pane_t5_ParamLimits

0x2166,	// (0x000a6f83) cale_month_day_heading_pane_t6_ParamLimits

0x2207,	// (0x000a7024) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x000b40ce) cale_month_day_heading_pane_t_ParamLimits

0x97bb,	// (0x000ae5d8) smil_status_volume_pane

0x314a,	// (0x000a7f67) postcard_address_pane_ParamLimits

0x314a,	// (0x000a7f67) postcard_address_pane

0x315c,	// (0x000a7f79) postcard_message_pane_ParamLimits

0x315c,	// (0x000a7f79) postcard_message_pane

0x3633,	// (0x000a8450) call2_cli_visual_pane_t1_ParamLimits

0x3633,	// (0x000a8450) call2_cli_visual_pane_t1

0x3e4f,	// (0x000a8c6c) postcard_message_pane_t1_ParamLimits

0x3e4f,	// (0x000a8c6c) postcard_message_pane_t1

0x3e38,	// (0x000a8c55) postcard_address_pane_t1_ParamLimits

0x3e38,	// (0x000a8c55) postcard_address_pane_t1

0x3e24,	// (0x000a8c41) popup_call3_audio_in_window_ParamLimits

0x3e24,	// (0x000a8c41) popup_call3_audio_in_window

0x3cb1,	// (0x000a8ace) bg_popup_call3_in_pane_ParamLimits

0x3cb1,	// (0x000a8ace) bg_popup_call3_in_pane

0x3d25,	// (0x000a8b42) popup_call3_audio_in_window_g1_ParamLimits

0x3d25,	// (0x000a8b42) popup_call3_audio_in_window_g1

0x3d45,	// (0x000a8b62) popup_call3_audio_in_window_g2_ParamLimits

0x3d45,	// (0x000a8b62) popup_call3_audio_in_window_g2

0x3d65,	// (0x000a8b82) popup_call3_audio_in_window_g3_ParamLimits

0x3d65,	// (0x000a8b82) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x000b443a) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x000b443a) popup_call3_audio_in_window_g

0x3d96,	// (0x000a8bb3) popup_call3_audio_in_window_t1_ParamLimits

0x3d96,	// (0x000a8bb3) popup_call3_audio_in_window_t1

0x3dd4,	// (0x000a8bf1) popup_call3_audio_in_window_t2_ParamLimits

0x3dd4,	// (0x000a8bf1) popup_call3_audio_in_window_t2

0x3e12,	// (0x000a8c2f) popup_call3_audio_in_window_t3_ParamLimits

0x3e12,	// (0x000a8c2f) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x000b4443) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x000b4443) popup_call3_audio_in_window_t

0xa3bd,	// (0x000af1da) bg_popup_call3_rect_pane

0xb5ee,	// (0x000b040b) bg_popup_call3_rect_pane_g1

0xedd4,	// (0x000b3bf1) bg_popup_call3_rect_pane_g2

0xb5f6,	// (0x000b0413) bg_popup_call3_rect_pane_g3

0xb5fe,	// (0x000b041b) bg_popup_call3_rect_pane_g4

0xb606,	// (0x000b0423) bg_popup_call3_rect_pane_g5

0xb60e,	// (0x000b042b) bg_popup_call3_rect_pane_g6

0xb616,	// (0x000b0433) bg_popup_call3_rect_pane_g7

0x2d00,	// (0x000a7b1d) mup_visualizer_osc_pane

0xa47c,	// (0x000af299) mup_visualizer_spec_pane

0x3ce1,	// (0x000a8afe) call3_video_qcif_pane_ParamLimits

0x3ce1,	// (0x000a8afe) call3_video_qcif_pane

0x3cf2,	// (0x000a8b0f) call3_video_qcif_uncrop_pane_ParamLimits

0x3cf2,	// (0x000a8b0f) call3_video_qcif_uncrop_pane

0x3d00,	// (0x000a8b1d) call3_video_subqcif_pane_ParamLimits

0x3d00,	// (0x000a8b1d) call3_video_subqcif_pane

0x3d14,	// (0x000a8b31) call3_video_subqcif_uncrop_pane_ParamLimits

0x3d14,	// (0x000a8b31) call3_video_subqcif_uncrop_pane

0x3d85,	// (0x000a8ba2) popup_call3_audio_in_window_g4_ParamLimits

0x3d85,	// (0x000a8ba2) popup_call3_audio_in_window_g4

0x3ca0,	// (0x000a8abd) mup_spec_half_pane

0x3ca9,	// (0x000a8ac6) mup_spec_half_pane_cp

0xb853,	// (0x000b0670) mup_osc_middle_pane

0xb85c,	// (0x000b0679) mup_visualizer_osc_pane_g1

0x3c80,	// (0x000a8a9d) mup_spec_bar_pane_ParamLimits

0x3c80,	// (0x000a8a9d) mup_spec_bar_pane

0xb840,	// (0x000b065d) mup_spec_bar_pane_g1

0xb84a,	// (0x000b0667) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x000b442e) mup_spec_bar_pane_g

0x09fc,	// (0x000a5819) aid_cale_week_size_cell_pane_ParamLimits

0x0a16,	// (0x000a5833) bg_cale_heading_pane_ParamLimits

0xee11,	// (0x000b3c2e) bg_cale_pane_cp01_ParamLimits

0x0a34,	// (0x000a5851) cale_week_corner_pane_ParamLimits

0x0a53,	// (0x000a5870) cale_week_day_heading_pane_ParamLimits

0x0a76,	// (0x000a5893) cale_week_scroll_pane_g1_ParamLimits

0x0a8f,	// (0x000a58ac) cale_week_scroll_pane_g2_ParamLimits

0x0aa7,	// (0x000a58c4) cale_week_scroll_pane_g3_ParamLimits

0x0abf,	// (0x000a58dc) cale_week_scroll_pane_g4_ParamLimits

0x0ad7,	// (0x000a58f4) cale_week_scroll_pane_g5_ParamLimits

0x0af3,	// (0x000a5910) cale_week_scroll_pane_g6_ParamLimits

0x0b13,	// (0x000a5930) cale_week_scroll_pane_g7_ParamLimits

0x0b33,	// (0x000a5950) cale_week_scroll_pane_g8_ParamLimits

0x0b57,	// (0x000a5974) cale_week_scroll_pane_g9_ParamLimits

0x0b6f,	// (0x000a598c) cale_week_scroll_pane_g10_ParamLimits

0x0b87,	// (0x000a59a4) cale_week_scroll_pane_g11_ParamLimits

0x0b9f,	// (0x000a59bc) cale_week_scroll_pane_g12_ParamLimits

0x0bb7,	// (0x000a59d4) cale_week_scroll_pane_g13_ParamLimits

0x0bb7,	// (0x000a59d4) cale_week_scroll_pane_g14_ParamLimits

0x0bb7,	// (0x000a59d4) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x000b3fd6) cale_week_scroll_pane_g_ParamLimits

0x0bcf,	// (0x000a59ec) cale_week_time_pane_ParamLimits

0x0bf3,	// (0x000a5a10) grid_cale_week_pane_ParamLimits

0xee2f,	// (0x000b3c4c) listscroll_cale_week_pane_t1

0xee41,	// (0x000b3c5e) scroll_pane_cp08_ParamLimits

0x1a02,	// (0x000a681f) cale_month_corner_pane_ParamLimits

0x9785,	// (0x000ae5a2) cale_month_pane_t1

0x1e22,	// (0x000a6c3f) cale_month_week_pane_ParamLimits

0x2734,	// (0x000a7551) popup_call_status_window_g1_ParamLimits

0x2748,	// (0x000a7565) popup_call_status_window_g2_ParamLimits

0x275c,	// (0x000a7579) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x000b417e) popup_call_status_window_g_ParamLimits

0x9ad3,	// (0x000ae8f0) aid_call2_pane

0x2f7e,	// (0x000a7d9b) msg_header_pane_g1

0x314a,	// (0x000a7f67) postcard_address2_pane_ParamLimits

0x314a,	// (0x000a7f67) postcard_address2_pane

0x315c,	// (0x000a7f79) postcard_message2_pane_ParamLimits

0x315c,	// (0x000a7f79) postcard_message2_pane

0x3c2e,	// (0x000a8a4b) message2_row_pane_ParamLimits

0x3c2e,	// (0x000a8a4b) message2_row_pane

0x3c4d,	// (0x000a8a6a) address2_row_pane_ParamLimits

0x3c4d,	// (0x000a8a6a) address2_row_pane

0xb80e,	// (0x000b062b) postcard_message2_row_pane_g1

0xb816,	// (0x000b0633) postcard_message2_row_pane_t1

0xb80e,	// (0x000b062b) address2_row_pane_g1

0xb816,	// (0x000b0633) address2_row_pane_t1

0x100e,	// (0x000a5e2b) aid_size_cell_vorec

0xe511,	// (0x000b332e) main_rss_pane

0x3c60,	// (0x000a8a7d) rss_list_single_pane_ParamLimits

0x3c60,	// (0x000a8a7d) rss_list_single_pane

0xb824,	// (0x000b0641) rss_list_single_pane_t1

0xb832,	// (0x000b064f) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x000b4429) rss_list_single_pane_t

0xe511,	// (0x000b332e) main_camera2_pane

0xe511,	// (0x000b332e) main_video2_pane

0x3ec8,	// (0x000a8ce5) cams_zoom_pane_cp2_ParamLimits

0x3ec8,	// (0x000a8ce5) cams_zoom_pane_cp2

0x3ee8,	// (0x000a8d05) image2_vga_pane_ParamLimits

0x3ee8,	// (0x000a8d05) image2_vga_pane

0x3f39,	// (0x000a8d56) main_camera2_pane_g1_ParamLimits

0x3f39,	// (0x000a8d56) main_camera2_pane_g1

0x3f59,	// (0x000a8d76) main_camera2_pane_g2_ParamLimits

0x3f59,	// (0x000a8d76) main_camera2_pane_g2

0x3f79,	// (0x000a8d96) main_camera2_pane_g3_ParamLimits

0x3f79,	// (0x000a8d96) main_camera2_pane_g3

0x3f99,	// (0x000a8db6) main_camera2_pane_g4_ParamLimits

0x3f99,	// (0x000a8db6) main_camera2_pane_g4

0x3fb9,	// (0x000a8dd6) main_camera2_pane_g5_ParamLimits

0x3fb9,	// (0x000a8dd6) main_camera2_pane_g5

0x3fd9,	// (0x000a8df6) main_camera2_pane_g6_ParamLimits

0x3fd9,	// (0x000a8df6) main_camera2_pane_g6

0x3ff9,	// (0x000a8e16) main_camera2_pane_g7_ParamLimits

0x3ff9,	// (0x000a8e16) main_camera2_pane_g7

0x4019,	// (0x000a8e36) main_camera2_pane_g8_ParamLimits

0x4019,	// (0x000a8e36) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x000b444a) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x000b444a) main_camera2_pane_g

0x4059,	// (0x000a8e76) main_camera2_pane_t1_ParamLimits

0x4059,	// (0x000a8e76) main_camera2_pane_t1

0x408e,	// (0x000a8eab) main_camera2_pane_t2_ParamLimits

0x408e,	// (0x000a8eab) main_camera2_pane_t2

0x40b4,	// (0x000a8ed1) main_camera2_pane_t3_ParamLimits

0x40b4,	// (0x000a8ed1) main_camera2_pane_t3

0x4112,	// (0x000a8f2f) main_camera2_pane_t4_ParamLimits

0x4112,	// (0x000a8f2f) main_camera2_pane_t4

0x0006,

0xf640,	// (0x000b445d) main_camera2_pane_t_ParamLimits

0xf640,	// (0x000b445d) main_camera2_pane_t

0x41a4,	// (0x000a8fc1) cams_zoom_pane_cp4_ParamLimits

0x41a4,	// (0x000a8fc1) cams_zoom_pane_cp4

0x41ba,	// (0x000a8fd7) image2_cif_pane_ParamLimits

0x41ba,	// (0x000a8fd7) image2_cif_pane

0x41e5,	// (0x000a9002) image2_subqcif_pane_ParamLimits

0x41e5,	// (0x000a9002) image2_subqcif_pane

0x41ff,	// (0x000a901c) main_video2_pane_g1_ParamLimits

0x41ff,	// (0x000a901c) main_video2_pane_g1

0x4219,	// (0x000a9036) main_video2_pane_g2_ParamLimits

0x4219,	// (0x000a9036) main_video2_pane_g2

0x422f,	// (0x000a904c) main_video2_pane_g3_ParamLimits

0x422f,	// (0x000a904c) main_video2_pane_g3

0x4245,	// (0x000a9062) main_video2_pane_g4_ParamLimits

0x4245,	// (0x000a9062) main_video2_pane_g4

0x425b,	// (0x000a9078) main_video2_pane_g5_ParamLimits

0x425b,	// (0x000a9078) main_video2_pane_g5

0x4271,	// (0x000a908e) main_video2_pane_g6_ParamLimits

0x4271,	// (0x000a908e) main_video2_pane_g6

0x0005,

0xf64f,	// (0x000b446c) main_video2_pane_g_ParamLimits

0xf64f,	// (0x000b446c) main_video2_pane_g

0x428b,	// (0x000a90a8) main_video2_pane_t1_ParamLimits

0x428b,	// (0x000a90a8) main_video2_pane_t1

0x42af,	// (0x000a90cc) main_video2_pane_t2_ParamLimits

0x42af,	// (0x000a90cc) main_video2_pane_t2

0x42fd,	// (0x000a911a) main_video2_pane_t3_ParamLimits

0x42fd,	// (0x000a911a) main_video2_pane_t3

0x0002,

0xf65c,	// (0x000b4479) main_video2_pane_t_ParamLimits

0xf65c,	// (0x000b4479) main_video2_pane_t

0x3782,	// (0x000a859f) call_muted_g2

0x0001,

0xf5fe,	// (0x000b441b) call_muted_g

0xe511,	// (0x000b332e) main_mup2_pane

0x4345,	// (0x000a9162) main_mup2_pane_g1_ParamLimits

0x4345,	// (0x000a9162) main_mup2_pane_g1

0x4351,	// (0x000a916e) main_mup2_pane_g2_ParamLimits

0x4351,	// (0x000a916e) main_mup2_pane_g2

0x9d20,	// (0x000aeb3d) main_mup_pane_g13_cp1

0x9d28,	// (0x000aeb45) mup_volume_pane_cp1

0x436d,	// (0x000a918a) main_mup2_pane_g4_ParamLimits

0x436d,	// (0x000a918a) main_mup2_pane_g4

0x437f,	// (0x000a919c) main_mup2_pane_g5_ParamLimits

0x437f,	// (0x000a919c) main_mup2_pane_g5

0x4391,	// (0x000a91ae) main_mup2_pane_g6_ParamLimits

0x4391,	// (0x000a91ae) main_mup2_pane_g6

0x43a3,	// (0x000a91c0) main_mup2_pane_g7_ParamLimits

0x43a3,	// (0x000a91c0) main_mup2_pane_g7

0x0006,

0xf663,	// (0x000b4480) main_mup2_pane_g_ParamLimits

0xf663,	// (0x000b4480) main_mup2_pane_g

0x43bb,	// (0x000a91d8) main_mup2_pane_t1_ParamLimits

0x43bb,	// (0x000a91d8) main_mup2_pane_t1

0x43d1,	// (0x000a91ee) main_mup2_pane_t2_ParamLimits

0x43d1,	// (0x000a91ee) main_mup2_pane_t2

0x43e7,	// (0x000a9204) main_mup2_pane_t3_ParamLimits

0x43e7,	// (0x000a9204) main_mup2_pane_t3

0x43fd,	// (0x000a921a) main_mup2_pane_t4_ParamLimits

0x43fd,	// (0x000a921a) main_mup2_pane_t4

0x4415,	// (0x000a9232) main_mup2_pane_t5_ParamLimits

0x4415,	// (0x000a9232) main_mup2_pane_t5

0x442d,	// (0x000a924a) main_mup2_pane_t6_ParamLimits

0x442d,	// (0x000a924a) main_mup2_pane_t6

0x0005,

0xf672,	// (0x000b448f) main_mup2_pane_t_ParamLimits

0xf672,	// (0x000b448f) main_mup2_pane_t

0x445d,	// (0x000a927a) mup2_visualizer_pane_ParamLimits

0x445d,	// (0x000a927a) mup2_visualizer_pane

0x448b,	// (0x000a92a8) mup_progress_pane_cp_ParamLimits

0x448b,	// (0x000a92a8) mup_progress_pane_cp

0x9d0b,	// (0x000aeb28) mup_volume_pane_cp_ParamLimits

0x9d0b,	// (0x000aeb28) mup_volume_pane_cp

0x449f,	// (0x000a92bc) mup2_visualizer_pane_g1_ParamLimits

0x449f,	// (0x000a92bc) mup2_visualizer_pane_g1

0xb893,	// (0x000b06b0) mup2_visualizer_pane_g2_ParamLimits

0xb893,	// (0x000b06b0) mup2_visualizer_pane_g2

0x44b6,	// (0x000a92d3) mup2_visualizer_pane_g3_ParamLimits

0x44b6,	// (0x000a92d3) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x000b449c) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x000b449c) mup2_visualizer_pane_g

0xa69a,	// (0x000af4b7) aid_size_cell_fmradio

0x3934,	// (0x000a8751) aid_height_parent_landcape

0xf042,	// (0x000b3e5f) wml_content_pane_cp

0xf04a,	// (0x000b3e67) wml_tabs_pane

0xf053,	// (0x000b3e70) popup_wml_miniature_window

0xf05b,	// (0x000b3e78) scroll_pane_cp021

0xf06f,	// (0x000b3e8c) wml_content_pane_comp8

0xe511,	// (0x000b332e) bg_popup_sub_pane_cp05

0xb8b1,	// (0x000b06ce) popup_wml_miniature_window_g1

0xb8b9,	// (0x000b06d6) wml_miniature_view_pane

0x44c2,	// (0x000a92df) aid_size_wml_view

0x44ca,	// (0x000a92e7) wml_miniature_view_pane_g1

0x44d3,	// (0x000a92f0) wml_miniature_view_pane_g2

0x44dc,	// (0x000a92f9) wml_miniature_view_pane_g3

0x44e4,	// (0x000a9301) wml_miniature_view_pane_g4

0x44ec,	// (0x000a9309) wml_miniature_view_pane_g5

0x44f4,	// (0x000a9311) wml_miniature_view_pane_g6

0x44fc,	// (0x000a9319) wml_miniature_view_pane_g7

0x4504,	// (0x000a9321) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x000b44a3) wml_miniature_view_pane_g

0xb8c1,	// (0x000b06de) background_graphic_ParamLimits

0xb8c1,	// (0x000b06de) background_graphic

0xb8cd,	// (0x000b06ea) wml_tabs_2_pane

0xb8d6,	// (0x000b06f3) wml_tabs_3_pane_ParamLimits

0xb8d6,	// (0x000b06f3) wml_tabs_3_pane

0xb8e8,	// (0x000b0705) wml_tabs_4_pane_ParamLimits

0xb8e8,	// (0x000b0705) wml_tabs_4_pane

0xb8fe,	// (0x000b071b) wml_tabs_5_pane_ParamLimits

0xb8fe,	// (0x000b071b) wml_tabs_5_pane

0xb918,	// (0x000b0735) wml_tabs_pane_g2_ParamLimits

0xb918,	// (0x000b0735) wml_tabs_pane_g2

0xb92c,	// (0x000b0749) wml_tabs_pane_g3_ParamLimits

0xb92c,	// (0x000b0749) wml_tabs_pane_g3

0x450c,	// (0x000a9329) wml_tabs_2_active_pane_ParamLimits

0x450c,	// (0x000a9329) wml_tabs_2_active_pane

0x4520,	// (0x000a933d) wml_tabs_2_passive_pane_ParamLimits

0x4520,	// (0x000a933d) wml_tabs_2_passive_pane

0x4534,	// (0x000a9351) wml_tabs_3_active_pane_cp_ParamLimits

0x4534,	// (0x000a9351) wml_tabs_3_active_pane_cp

0x4549,	// (0x000a9366) wml_tabs_3_passive_pane_ParamLimits

0x4549,	// (0x000a9366) wml_tabs_3_passive_pane

0x455c,	// (0x000a9379) wml_tabs_3_passive_pane_cp_ParamLimits

0x455c,	// (0x000a9379) wml_tabs_3_passive_pane_cp

0x4573,	// (0x000a9390) tabs_4_active_pane

0x457b,	// (0x000a9398) tabs_4_passive_pane

0x4585,	// (0x000a93a2) tabs_4_passive_pane_cp

0x458d,	// (0x000a93aa) tabs_4_passive_pane_cp2

0x364f,	// (0x000a846c) aid_height_text

0x2cd2,	// (0x000a7aef) mup_volume_cont_pane_ParamLimits

0x2cd2,	// (0x000a7aef) mup_volume_cont_pane

0x060d,	// (0x000a542a) aid_size_cell_pinb

0x0617,	// (0x000a5434) aid_size_list_pinb

0x4477,	// (0x000a9294) mup2_volume_cont_pane_ParamLimits

0x4477,	// (0x000a9294) mup2_volume_cont_pane

0x9cf7,	// (0x000aeb14) mup2_volume_cont_pane_g1_ParamLimits

0x9cf7,	// (0x000aeb14) mup2_volume_cont_pane_g1

0x02bf,	// (0x000a50dc) aid_size_cell_touch_ParamLimits

0x02bf,	// (0x000a50dc) aid_size_cell_touch

0x04fc,	// (0x000a5319) touch_pane_ParamLimits

0x04fc,	// (0x000a5319) touch_pane

0x95bb,	// (0x000ae3d8) main_rss2_pane

0xb949,	// (0x000b0766) listscroll_rss2_pane

0xb952,	// (0x000b076f) rss2_navigation_pane

0xb95a,	// (0x000b0777) list_rss2_pane

0xa274,	// (0x000af091) scroll_pane_cp22

0xb962,	// (0x000b077f) rss2_navigation_pane_g1

0xb96b,	// (0x000b0788) rss2_navigation_pane_g2

0xb973,	// (0x000b0790) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x000b44b4) rss2_navigation_pane_g

0xb97b,	// (0x000b0798) rss2_navigation_pane_t1

0x4597,	// (0x000a93b4) rss2_list_single_pane_ParamLimits

0x4597,	// (0x000a93b4) rss2_list_single_pane

0xb989,	// (0x000b07a6) rss2_list_single_pane_t2

0xb997,	// (0x000b07b4) rss2_list_single_pane_t3_ParamLimits

0xb997,	// (0x000b07b4) rss2_list_single_pane_t3

0xb9b4,	// (0x000b07d1) rss2_list_single_pane_t4

0x24c9,	// (0x000a72e6) smil_status_pane_g1

0x95ad,	// (0x000ae3ca) main_image2_pane_ParamLimits

0x95ad,	// (0x000ae3ca) main_image2_pane

0x4039,	// (0x000a8e56) main_camera2_pane_g9_ParamLimits

0x4039,	// (0x000a8e56) main_camera2_pane_g9

0x4167,	// (0x000a8f84) main_camera2_pane_t5_ParamLimits

0x4167,	// (0x000a8f84) main_camera2_pane_t5

0x9cc7,	// (0x000aeae4) main_camera2_pane_t6_ParamLimits

0x9cc7,	// (0x000aeae4) main_camera2_pane_t6

0x45ae,	// (0x000a93cb) main_image2_pane_g1_ParamLimits

0x45ae,	// (0x000a93cb) main_image2_pane_g1

0x3389,	// (0x000a81a6) smil2_video_pane_ParamLimits

0x3389,	// (0x000a81a6) smil2_video_pane

0x02f7,	// (0x000a5114) aid_zoom_text_primary_cp

0x95a3,	// (0x000ae3c0) popup_preview_fixed_window

0xefab,	// (0x000b3dc8) im_reading_pane_g1

0x3eb0,	// (0x000a8ccd) cams2_bc_adjust_pane_cp_ParamLimits

0x3eb0,	// (0x000a8ccd) cams2_bc_adjust_pane_cp

0x4196,	// (0x000a8fb3) cams2_bc_adjust_pane_ParamLimits

0x4196,	// (0x000a8fb3) cams2_bc_adjust_pane

0xc85c,	// (0x000b1679) cams2_bc_adjust_pane_g1

0x9d30,	// (0x000aeb4d) cams2_slider_pane

0x9d39,	// (0x000aeb56) cams2_slider_pane_g1

0x9d42,	// (0x000aeb5f) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x000b44bb) cams2_slider_pane_g

0x06ef,	// (0x000a550c) calc_display_pane_ParamLimits

0x0717,	// (0x000a5534) calc_paper_pane_ParamLimits

0x073a,	// (0x000a5557) grid_calc_pane_ParamLimits

0x9b39,	// (0x000ae956) popup_clock_digital_window_t1_ParamLimits

0xa637,	// (0x000af454) main_image_pane_t1

0x06d1,	// (0x000a54ee) aid_size_cell_calc_ParamLimits

0x06d1,	// (0x000a54ee) aid_size_cell_calc

0x398c,	// (0x000a87a9) popup_blid_sat_info2_window_ParamLimits

0x398c,	// (0x000a87a9) popup_blid_sat_info2_window

0xb9ca,	// (0x000b07e7) aid_size_cell_blid

0xb9d2,	// (0x000b07ef) bg_popup_window_pane_cp07

0xb9f5,	// (0x000b0812) grid_popup_blid_pane

0xb9ff,	// (0x000b081c) heading_pane_cp05_ParamLimits

0xb9ff,	// (0x000b081c) heading_pane_cp05

0xbac9,	// (0x000b08e6) cell_popup_blid_pane_ParamLimits

0xbac9,	// (0x000b08e6) cell_popup_blid_pane

0xbaef,	// (0x000b090c) cell_popup_blid_pane_g1

0xbaf7,	// (0x000b0914) cell_popup_blid_pane_t1

0x4447,	// (0x000a9264) mup2_indicator_pane_ParamLimits

0x4447,	// (0x000a9264) mup2_indicator_pane

0xa3bd,	// (0x000af1da) mup2_visualizer_osc_pane

0xb89f,	// (0x000b06bc) mup2_visualizer_spec_pane_ParamLimits

0xb89f,	// (0x000b06bc) mup2_visualizer_spec_pane

0x45c4,	// (0x000a93e1) mup2_spec_half_pane

0x45cd,	// (0x000a93ea) mup2_spec_half_pane_cp

0x45d5,	// (0x000a93f2) mup2_spec_bar_pane_ParamLimits

0x45d5,	// (0x000a93f2) mup2_spec_bar_pane

0xb840,	// (0x000b065d) mup2_spec_bar_pane_g1

0xb84a,	// (0x000b0667) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x000b442e) mup2_spec_bar_pane_g

0x45f5,	// (0x000a9412) mup2_osc_middle_pane

0xb85c,	// (0x000b0679) mup2_visualizer_osc_pane_g1

0xd4f4,	// (0x000b2311) popup_number_entry_window_t1_ParamLimits

0xd507,	// (0x000b2324) popup_number_entry_window_t2_ParamLimits

0xe143,	// (0x000b2f60) popup_number_entry_window_t3_ParamLimits

0x054e,	// (0x000a536b) popup_number_entry_window_t5_ParamLimits

0x054e,	// (0x000a536b) popup_number_entry_window_t5

0xf0d3,	// (0x000b3ef0) popup_number_entry_window_t_ParamLimits

0xe155,	// (0x000b2f72) text_title_cp2_ParamLimits

0x9c2b,	// (0x000aea48) aid_hotspot_pointer_text2_pane

0x9c45,	// (0x000aea62) main_viewer_pane_g9_ParamLimits

0x9c45,	// (0x000aea62) main_viewer_pane_g9

0x9785,	// (0x000ae5a2) cale_month_pane_t1_ParamLimits

0x97f0,	// (0x000ae60d) bg_cale_pane_ParamLimits

0x9808,	// (0x000ae625) list_cale_pane_ParamLimits

0x9819,	// (0x000ae636) listscroll_cale_day_pane_t1

0x982b,	// (0x000ae648) scroll_pane_cp09_ParamLimits

0x2d08,	// (0x000a7b25) main_mup_eq_pane_t1_ParamLimits

0x2d08,	// (0x000a7b25) main_mup_eq_pane_t1

0x2d22,	// (0x000a7b3f) main_mup_eq_pane_t2_ParamLimits

0x2d22,	// (0x000a7b3f) main_mup_eq_pane_t2

0x2d3c,	// (0x000a7b59) main_mup_eq_pane_t3_ParamLimits

0x2d3c,	// (0x000a7b59) main_mup_eq_pane_t3

0x2d58,	// (0x000a7b75) main_mup_eq_pane_t4_ParamLimits

0x2d58,	// (0x000a7b75) main_mup_eq_pane_t4

0x2d74,	// (0x000a7b91) main_mup_eq_pane_t5_ParamLimits

0x2d74,	// (0x000a7b91) main_mup_eq_pane_t5

0x2d90,	// (0x000a7bad) main_mup_eq_pane_t6_ParamLimits

0x2d90,	// (0x000a7bad) main_mup_eq_pane_t6

0x2da4,	// (0x000a7bc1) main_mup_eq_pane_t7_ParamLimits

0x2da4,	// (0x000a7bc1) main_mup_eq_pane_t7

0x2db8,	// (0x000a7bd5) main_mup_eq_pane_t8_ParamLimits

0x2db8,	// (0x000a7bd5) main_mup_eq_pane_t8

0x2dcc,	// (0x000a7be9) main_mup_eq_pane_t9_ParamLimits

0x2dcc,	// (0x000a7be9) main_mup_eq_pane_t9

0x2de6,	// (0x000a7c03) main_mup_eq_pane_t10_ParamLimits

0x2de6,	// (0x000a7c03) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x000b427d) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x000b427d) main_mup_eq_pane_t

0x2e95,	// (0x000a7cb2) mup_equalizer_pane_cp5_ParamLimits

0x2ea9,	// (0x000a7cc6) mup_equalizer_pane_cp6_ParamLimits

0x2ebd,	// (0x000a7cda) mup_equalizer_pane_cp7_ParamLimits

0x95bb,	// (0x000ae3d8) main_gallery_pane

0xb865,	// (0x000b0682) smil2_volume_pane

0xb86d,	// (0x000b068a) smil_status_volume_pane_g1_ParamLimits

0xb880,	// (0x000b069d) smil_status_volume_pane_g2_ParamLimits

0x9ca5,	// (0x000aeac2) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x000b4433) smil_status_volume_pane_g_ParamLimits

0xb9d2,	// (0x000b07ef) bg_popup_window_pane_cp07_ParamLimits

0xb9e0,	// (0x000b07fd) blid_firmament_pane

0x45fe,	// (0x000a941b) aid_size_cell_gallery_ParamLimits

0x45fe,	// (0x000a941b) aid_size_cell_gallery

0x4614,	// (0x000a9431) grid_gallery_pane_ParamLimits

0x4614,	// (0x000a9431) grid_gallery_pane

0x462d,	// (0x000a944a) cell_gallery_pane_ParamLimits

0x462d,	// (0x000a944a) cell_gallery_pane

0xbb05,	// (0x000b0922) bg_cell_gallery_focus_pane_ParamLimits

0xbb05,	// (0x000b0922) bg_cell_gallery_focus_pane

0xbb17,	// (0x000b0934) cell_gallery_pane_g1_ParamLimits

0xbb17,	// (0x000b0934) cell_gallery_pane_g1

0x4676,	// (0x000a9493) cell_gallery_pane_g2_ParamLimits

0x4676,	// (0x000a9493) cell_gallery_pane_g2

0x4683,	// (0x000a94a0) cell_gallery_pane_g3_ParamLimits

0x4683,	// (0x000a94a0) cell_gallery_pane_g3

0xbb23,	// (0x000b0940) cell_gallery_pane_g4_ParamLimits

0xbb23,	// (0x000b0940) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x000b44e1) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x000b44e1) cell_gallery_pane_g

0xbb2f,	// (0x000b094c) bg_cell_gallery_focus_pane_g1

0xbb37,	// (0x000b0954) bg_cell_gallery_focus_pane_g2

0xbb3f,	// (0x000b095c) bg_cell_gallery_focus_pane_g3

0xbb47,	// (0x000b0964) bg_cell_gallery_focus_pane_g4

0xbb4f,	// (0x000b096c) bg_cell_gallery_focus_pane_g5

0xbb57,	// (0x000b0974) bg_cell_gallery_focus_pane_g6

0xbb5f,	// (0x000b097c) bg_cell_gallery_focus_pane_g7

0xbb67,	// (0x000b0984) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x000b44ea) bg_cell_gallery_focus_pane_g

0xbb6f,	// (0x000b098c) aid_firma_cardinal

0xbb83,	// (0x000b09a0) blid_firmament_pane_t1

0xbb9a,	// (0x000b09b7) blid_firmament_pane_t2

0xbbb1,	// (0x000b09ce) blid_firmament_pane_t3

0xbbc8,	// (0x000b09e5) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x000b44fb) blid_firmament_pane_t

0xbbdf,	// (0x000b09fc) blid_sat_info_pane

0xbbef,	// (0x000b0a0c) blid_sat_info_pane_g1

0xbbef,	// (0x000b0a0c) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x000b4504) blid_sat_info_pane_g

0xbbf9,	// (0x000b0a16) blid_sat_info_pane_t1

0xbc07,	// (0x000b0a24) smil2_volume_content_pane

0xbc10,	// (0x000b0a2d) smil2_volume_pane_g1

0xe8da,	// (0x000b36f7) smil2_volume_content_pane_g1

0xbc18,	// (0x000b0a35) smil2_volume_content_pane_g2

0xbc21,	// (0x000b0a3e) smil2_volume_content_pane_g3

0xbc2a,	// (0x000b0a47) smil2_volume_content_pane_g4

0xbc33,	// (0x000b0a50) smil2_volume_content_pane_g5

0xbc3c,	// (0x000b0a59) smil2_volume_content_pane_g6

0xbc45,	// (0x000b0a62) smil2_volume_content_pane_g7

0xbc4e,	// (0x000b0a6b) smil2_volume_content_pane_g8

0xbc57,	// (0x000b0a74) smil2_volume_content_pane_g9

0xbc60,	// (0x000b0a7d) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x000b4509) smil2_volume_content_pane_g

0x0ca7,	// (0x000a5ac4) cale_week_day_heading_pane_t1_ParamLimits

0x0cf1,	// (0x000a5b0e) cale_week_day_heading_pane_t2_ParamLimits

0x0d40,	// (0x000a5b5d) cale_week_day_heading_pane_t3_ParamLimits

0x0d8f,	// (0x000a5bac) cale_week_day_heading_pane_t4_ParamLimits

0x0dde,	// (0x000a5bfb) cale_week_day_heading_pane_t5_ParamLimits

0x0e35,	// (0x000a5c52) cale_week_day_heading_pane_t6_ParamLimits

0x0e8c,	// (0x000a5ca9) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x000b3ff5) cale_week_day_heading_pane_t_ParamLimits

0xee5e,	// (0x000b3c7b) bg_cale_side_pane_ParamLimits

0x0ed6,	// (0x000a5cf3) cale_week_time_pane_t1_ParamLimits

0x0ef0,	// (0x000a5d0d) cale_week_time_pane_t2_ParamLimits

0x0f0a,	// (0x000a5d27) cale_week_time_pane_t3_ParamLimits

0x0f24,	// (0x000a5d41) cale_week_time_pane_t4_ParamLimits

0x0f3e,	// (0x000a5d5b) cale_week_time_pane_t5_ParamLimits

0x0f58,	// (0x000a5d75) cale_week_time_pane_t6_ParamLimits

0x0f72,	// (0x000a5d8f) cale_week_time_pane_t7_ParamLimits

0x0f92,	// (0x000a5daf) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x000b4004) cale_week_time_pane_t_ParamLimits

0x0fb2,	// (0x000a5dcf) cell_cale_week_pane_g2_ParamLimits

0xee5e,	// (0x000b3c7b) bg_cale_side_pane_cp01_ParamLimits

0x22b0,	// (0x000a70cd) cale_month_week_pane_t1_ParamLimits

0x22c9,	// (0x000a70e6) cale_month_week_pane_t2_ParamLimits

0x22e2,	// (0x000a70ff) cale_month_week_pane_t3_ParamLimits

0x22fb,	// (0x000a7118) cale_month_week_pane_t4_ParamLimits

0x2314,	// (0x000a7131) cale_month_week_pane_t5_ParamLimits

0x232d,	// (0x000a714a) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x000b40dd) cale_month_week_pane_t_ParamLimits

0x9797,	// (0x000ae5b4) cell_cale_month_pane_g1_ParamLimits

0x95bb,	// (0x000ae3d8) main_cale_event_viewer_pane

0xd4ca,	// (0x000b22e7) listscroll_cale_event_viewer_pane

0xbc69,	// (0x000b0a86) list_cale_ev_pane

0xbc71,	// (0x000b0a8e) scroll_pane_cp023

0xbc7d,	// (0x000b0a9a) field_cale_ev_pane_ParamLimits

0xbc7d,	// (0x000b0a9a) field_cale_ev_pane

0xbc99,	// (0x000b0ab6) field_cale_ev_content_pane_ParamLimits

0xbc99,	// (0x000b0ab6) field_cale_ev_content_pane

0xbca5,	// (0x000b0ac2) field_cale_ev_pane_g1_ParamLimits

0xbca5,	// (0x000b0ac2) field_cale_ev_pane_g1

0xbcb1,	// (0x000b0ace) field_cale_ev_pane_g2_ParamLimits

0xbcb1,	// (0x000b0ace) field_cale_ev_pane_g2

0xbcc9,	// (0x000b0ae6) field_cale_ev_pane_g3_ParamLimits

0xbcc9,	// (0x000b0ae6) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x000b451e) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x000b451e) field_cale_ev_pane_g

0xbce1,	// (0x000b0afe) field_cale_ev_pane_t1_ParamLimits

0xbce1,	// (0x000b0afe) field_cale_ev_pane_t1

0xbcf8,	// (0x000b0b15) field_cale_ev_content_pane_t1_ParamLimits

0xbcf8,	// (0x000b0b15) field_cale_ev_content_pane_t1

0x2f73,	// (0x000a7d90) bg_button_pane_cp01

0x09ea,	// (0x000a5807) listscroll_cale_week_pane_ParamLimits

0xee08,	// (0x000b3c25) popup_toolbar_window_cp01

0xee2f,	// (0x000b3c4c) listscroll_cale_week_pane_t1_ParamLimits

0x09ea,	// (0x000a5807) listscroll_cale_day_pane_ParamLimits

0xee08,	// (0x000b3c25) popup_toolbar_window_cp02

0x9819,	// (0x000ae636) listscroll_cale_day_pane_t1_ParamLimits

0x3952,	// (0x000a876f) main_cale_month_pane_ParamLimits

0x9c90,	// (0x000aeaad) popup_toolbar_window_cp03_ParamLimits

0x9c90,	// (0x000aeaad) popup_toolbar_window_cp03

0x324d,	// (0x000a806a) main_image_pane_g2_ParamLimits

0x324d,	// (0x000a806a) main_image_pane_g2

0x325e,	// (0x000a807b) main_image_pane_g3_ParamLimits

0x325e,	// (0x000a807b) main_image_pane_g3

0x0002,

0xf4f2,	// (0x000b430f) main_image_pane_g_ParamLimits

0xf4f2,	// (0x000b430f) main_image_pane_g

0xa637,	// (0x000af454) main_image_pane_t1_ParamLimits

0x326f,	// (0x000a808c) main_image_pane_t2_ParamLimits

0x326f,	// (0x000a808c) main_image_pane_t2

0x3281,	// (0x000a809e) main_image_pane_t3_ParamLimits

0x3281,	// (0x000a809e) main_image_pane_t3

0x32a9,	// (0x000a80c6) main_image_pane_t4_ParamLimits

0x32a9,	// (0x000a80c6) main_image_pane_t4

0x0003,

0xf4f9,	// (0x000b4316) main_image_pane_t_ParamLimits

0xf4f9,	// (0x000b4316) main_image_pane_t

0x32c9,	// (0x000a80e6) popup_image_details_window_cp01

0x32d3,	// (0x000a80f0) popup_toobar_trans_pane_cp01_ParamLimits

0x32d3,	// (0x000a80f0) popup_toobar_trans_pane_cp01

0x3a63,	// (0x000a8880) popup_image_details_window_ParamLimits

0x3a63,	// (0x000a8880) popup_image_details_window

0x9c63,	// (0x000aea80) popup_image_focus_window

0x3e6a,	// (0x000a8c87) camera2_autofocus_pane_ParamLimits

0x3e6a,	// (0x000a8c87) camera2_autofocus_pane

0xd4ca,	// (0x000b22e7) bg_popup_sub_pane_cp06

0xbd15,	// (0x000b0b32) popup_image_focus_window_g1

0xbd1d,	// (0x000b0b3a) popup_image_focus_window_g2

0xbd25,	// (0x000b0b42) popup_image_focus_window_g3

0xbd2d,	// (0x000b0b4a) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x000b4525) popup_image_focus_window_g

0xbd35,	// (0x000b0b52) popup_image_focus_window_t1

0xbd43,	// (0x000b0b60) popup_image_focus_window_t2

0xbd53,	// (0x000b0b70) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x000b452e) popup_image_focus_window_t

0xbd61,	// (0x000b0b7e) camera2_autofocus_pane_g1

0xe923,	// (0x000b3740) bg_tb_trans_pane_cp01

0xbd6f,	// (0x000b0b8c) popup_image_details_window_g1

0xbd82,	// (0x000b0b9f) popup_image_details_window_g2

0x0002,

0xf723,	// (0x000b4540) popup_image_details_window_g

0xbdab,	// (0x000b0bc8) popup_image_details_window_t1

0xbdbd,	// (0x000b0bda) popup_image_details_window_t2

0xbdd6,	// (0x000b0bf3) popup_image_details_window_t3

0xbdea,	// (0x000b0c07) popup_image_details_window_t4

0xbe05,	// (0x000b0c22) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x000b4547) popup_image_details_window_t

0xe83c,	// (0x000b3659) bg_calc_paper_pane_ParamLimits

0x95bb,	// (0x000ae3d8) grid_highlight_pane_cp013

0x95cd,	// (0x000ae3ea) list_calc_pane_ParamLimits

0x95df,	// (0x000ae3fc) scroll_pane_cp024

0xe850,	// (0x000b366d) bg_calc_display_pane_ParamLimits

0x0838,	// (0x000a5655) calc_display_pane_t1_ParamLimits

0x084a,	// (0x000a5667) calc_display_pane_t2_ParamLimits

0x95e7,	// (0x000ae404) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x000b3f77) calc_display_pane_t_ParamLimits

0x090f,	// (0x000a572c) cell_calc_pane_g2

0x0001,

0xf177,	// (0x000b3f94) cell_calc_pane_g

0x0918,	// (0x000a5735) cell_calc_pane_t1

0xe8af,	// (0x000b36cc) grid_highlight_pane_cp02_ParamLimits

0xe8c5,	// (0x000b36e2) toolbar_button_pane_cp01_ParamLimits

0xe8c5,	// (0x000b36e2) toolbar_button_pane_cp01

0xa67c,	// (0x000af499) temp_image_control_pane_ParamLimits

0xa67c,	// (0x000af499) temp_image_control_pane

0x95ad,	// (0x000ae3ca) main_mp3_pane

0xbe1f,	// (0x000b0c3c) temp_image_control_pane_g1_ParamLimits

0xbe1f,	// (0x000b0c3c) temp_image_control_pane_g1

0xbe2d,	// (0x000b0c4a) temp_image_control_pane_g2_ParamLimits

0xbe2d,	// (0x000b0c4a) temp_image_control_pane_g2

0xbe3f,	// (0x000b0c5c) temp_image_control_pane_g3_ParamLimits

0xbe3f,	// (0x000b0c5c) temp_image_control_pane_g3

0x46c0,	// (0x000a94dd) temp_image_control_pane_g4_ParamLimits

0x46c0,	// (0x000a94dd) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x000b4552) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x000b4552) temp_image_control_pane_g

0xbe1f,	// (0x000b0c3c) main_mp3_pane_g1

0x46d3,	// (0x000a94f0) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x000b455b) main_mp3_pane_g

0xbe82,	// (0x000b0c9f) main_mp3_pane_t1

0xeeba,	// (0x000b3cd7) main_camera_pane_g8_ParamLimits

0xeeba,	// (0x000b3cd7) main_camera_pane_g8

0x12d7,	// (0x000a60f4) main_video_pane_g7_ParamLimits

0x12d7,	// (0x000a60f4) main_video_pane_g7

0x9ce5,	// (0x000aeb02) main_camera2_pane_t7_ParamLimits

0x9ce5,	// (0x000aeb02) main_camera2_pane_t7

0xf002,	// (0x000b3e1f) scroll_pane_cp025_ParamLimits

0xf002,	// (0x000b3e1f) scroll_pane_cp025

0xf016,	// (0x000b3e33) scroll_pane_cp026_ParamLimits

0xf016,	// (0x000b3e33) scroll_pane_cp026

0xf025,	// (0x000b3e42) wml_content_pane_ParamLimits

0x95bb,	// (0x000ae3d8) main_touch_calib_pane

0x47a9,	// (0x000a95c6) main_touch_calib_pane_g1

0x47bb,	// (0x000a95d8) main_touch_calib_pane_g2

0x47cd,	// (0x000a95ea) main_touch_calib_pane_g3

0x47df,	// (0x000a95fc) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x000b4579) main_touch_calib_pane_g

0x47f1,	// (0x000a960e) main_touch_calib_pane_t1

0x480b,	// (0x000a9628) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x000b4582) main_touch_calib_pane_t

0xa2fe,	// (0x000af11b) mup_progress_pane_cp02

0xa31d,	// (0x000af13a) navi_pane_g1

0xa37f,	// (0x000af19c) navi_pane_mp_t3

0x95ad,	// (0x000ae3ca) main_mp3_pane_ParamLimits

0x3be0,	// (0x000a89fd) navi_pane_ParamLimits

0xbe1f,	// (0x000b0c3c) main_mp3_pane_g1_ParamLimits

0x46d3,	// (0x000a94f0) main_mp3_pane_g2_ParamLimits

0x46e1,	// (0x000a94fe) main_mp3_pane_g3_ParamLimits

0x46e1,	// (0x000a94fe) main_mp3_pane_g3

0x46ef,	// (0x000a950c) main_mp3_pane_g4_ParamLimits

0x46ef,	// (0x000a950c) main_mp3_pane_g4

0xbe4f,	// (0x000b0c6c) main_mp3_pane_g5_ParamLimits

0xbe4f,	// (0x000b0c6c) main_mp3_pane_g5

0xbe5d,	// (0x000b0c7a) main_mp3_pane_g6_ParamLimits

0xbe5d,	// (0x000b0c7a) main_mp3_pane_g6

0xbe6a,	// (0x000b0c87) main_mp3_pane_g7_ParamLimits

0xbe6a,	// (0x000b0c87) main_mp3_pane_g7

0xbe76,	// (0x000b0c93) main_mp3_pane_g8_ParamLimits

0xbe76,	// (0x000b0c93) main_mp3_pane_g8

0xf73e,	// (0x000b455b) main_mp3_pane_g_ParamLimits

0x46fd,	// (0x000a951a) main_mp3_pane_t2

0x470b,	// (0x000a9528) main_mp3_pane_t3

0xbe90,	// (0x000b0cad) main_mp3_pane_t4

0xbe9e,	// (0x000b0cbb) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x000b456c) main_mp3_pane_t

0xbeac,	// (0x000b0cc9) mup_progress_pane_cp01

0x02f7,	// (0x000a5114) aid_zoom_text_secondary2

0xbc69,	// (0x000b0a86) list_cale_ev2_pane

0xbc71,	// (0x000b0a8e) scroll_pane_cp023_ParamLimits

0x4861,	// (0x000a967e) field_cale_ev2_pane_ParamLimits

0x4861,	// (0x000a967e) field_cale_ev2_pane

0xbeb4,	// (0x000b0cd1) field_cale_ev2_pane_g1_ParamLimits

0xbeb4,	// (0x000b0cd1) field_cale_ev2_pane_g1

0xbec0,	// (0x000b0cdd) field_cale_ev2_pane_g2_ParamLimits

0xbec0,	// (0x000b0cdd) field_cale_ev2_pane_g2

0xbed8,	// (0x000b0cf5) field_cale_ev2_pane_g3_ParamLimits

0xbed8,	// (0x000b0cf5) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x000b458d) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x000b458d) field_cale_ev2_pane_g

0xbefc,	// (0x000b0d19) field_cale_ev2_pane_t1_ParamLimits

0xbefc,	// (0x000b0d19) field_cale_ev2_pane_t1

0xbf13,	// (0x000b0d30) field_cale_ev2_pane_t2_ParamLimits

0xbf13,	// (0x000b0d30) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x000b4596) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x000b4596) field_cale_ev2_pane_t

0x3100,	// (0x000a7f1d) main_postcard_pane_g5_ParamLimits

0x3100,	// (0x000a7f1d) main_postcard_pane_g5

0x3116,	// (0x000a7f33) main_postcard_pane_g6_ParamLimits

0x3116,	// (0x000a7f33) main_postcard_pane_g6

0x1091,	// (0x000a5eae) camera2_autofocus_pane_cp_ParamLimits

0x1091,	// (0x000a5eae) camera2_autofocus_pane_cp

0x95ad,	// (0x000ae3ca) main_mup3_pane

0x48a3,	// (0x000a96c0) main_mup3_pane_g1_ParamLimits

0x48a3,	// (0x000a96c0) main_mup3_pane_g1

0x48c5,	// (0x000a96e2) main_mup3_pane_g2_ParamLimits

0x48c5,	// (0x000a96e2) main_mup3_pane_g2

0x4947,	// (0x000a9764) main_mup3_pane_g3_ParamLimits

0x4947,	// (0x000a9764) main_mup3_pane_g3

0x498d,	// (0x000a97aa) main_mup3_pane_g4_ParamLimits

0x498d,	// (0x000a97aa) main_mup3_pane_g4

0x49d3,	// (0x000a97f0) main_mup3_pane_g5_ParamLimits

0x49d3,	// (0x000a97f0) main_mup3_pane_g5

0x4a1b,	// (0x000a9838) main_mup3_pane_g6_ParamLimits

0x4a1b,	// (0x000a9838) main_mup3_pane_g6

0xbf28,	// (0x000b0d45) main_mup3_pane_g7_ParamLimits

0xbf28,	// (0x000b0d45) main_mup3_pane_g7

0x0007,

0xf789,	// (0x000b45a6) main_mup3_pane_g_ParamLimits

0xf789,	// (0x000b45a6) main_mup3_pane_g

0x4a99,	// (0x000a98b6) main_mup3_pane_t1_ParamLimits

0x4a99,	// (0x000a98b6) main_mup3_pane_t1

0x4b0d,	// (0x000a992a) main_mup3_pane_t2_ParamLimits

0x4b0d,	// (0x000a992a) main_mup3_pane_t2

0x4be1,	// (0x000a99fe) main_mup3_pane_t4_ParamLimits

0x4be1,	// (0x000a99fe) main_mup3_pane_t4

0x4c37,	// (0x000a9a54) main_mup3_pane_t5_ParamLimits

0x4c37,	// (0x000a9a54) main_mup3_pane_t5

0x4cf3,	// (0x000a9b10) main_mup3_pane_t6_ParamLimits

0x4cf3,	// (0x000a9b10) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x000b45b7) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x000b45b7) main_mup3_pane_t

0x4dab,	// (0x000a9bc8) mup3_progress_pane_ParamLimits

0x4dab,	// (0x000a9bc8) mup3_progress_pane

0x4e37,	// (0x000a9c54) popup_mup3_control_window_ParamLimits

0x4e37,	// (0x000a9c54) popup_mup3_control_window

0xbf36,	// (0x000b0d53) popup_mup3_text_window

0x4e69,	// (0x000a9c86) mup3_progress_pane_t1

0x4e88,	// (0x000a9ca5) mup3_progress_pane_t2

0xbf3e,	// (0x000b0d5b) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x000b45c4) mup3_progress_pane_t

0xbf5b,	// (0x000b0d78) mup_progress_pane_cp03

0xd4ca,	// (0x000b22e7) bg_tb_trans_pane_cp04

0x4ea7,	// (0x000a9cc4) mup3_volume_pane

0x4eaf,	// (0x000a9ccc) popup_mup3_control_window_g1

0x4eb8,	// (0x000a9cd5) mup3_volume_pane_g1

0x4ec1,	// (0x000a9cde) mup3_volume_pane_g2

0x4eca,	// (0x000a9ce7) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x000b45cb) mup3_volume_pane_g

0xd4ca,	// (0x000b22e7) bg_tb_trans_pane_cp03

0xbf6b,	// (0x000b0d88) popup_mup3_text_window_g1

0xbf73,	// (0x000b0d90) popup_mup3_text_window_t1

0xe898,	// (0x000b36b5) list_calc_item_pane_g1_ParamLimits

0xb940,	// (0x000b075d) mup_volume_pane_cp_g1

0x4825,	// (0x000a9642) main_touch_calib_pane_t3

0x4839,	// (0x000a9656) main_touch_calib_pane_t4

0x484d,	// (0x000a966a) main_touch_calib_pane_t5

0x02ab,	// (0x000a50c8) aid_cell_size_toolbar2

0x02b3,	// (0x000a50d0) aid_popup3_width_pane

0x9563,	// (0x000ae380) aid_zoom_text_msg_primary

0x1068,	// (0x000a5e85) vorec_t7

0xe85c,	// (0x000b3679) bg_calc_paper_pane_g1_ParamLimits

0xe868,	// (0x000b3685) bg_calc_paper_pane_g2_ParamLimits

0xe874,	// (0x000b3691) bg_calc_paper_pane_g3_ParamLimits

0xe880,	// (0x000b369d) bg_calc_paper_pane_g4_ParamLimits

0xe88c,	// (0x000b36a9) bg_calc_paper_pane_g5_ParamLimits

0x0893,	// (0x000a56b0) bg_calc_paper_pane_g6_ParamLimits

0x08a4,	// (0x000a56c1) bg_calc_paper_pane_g7_ParamLimits

0x08b5,	// (0x000a56d2) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x000b3f7e) bg_calc_paper_pane_g_ParamLimits

0x08c8,	// (0x000a56e5) calc_bg_paper_pane_g9_ParamLimits

0x11e9,	// (0x000a6006) image_qvga_pane_ParamLimits

0x11e9,	// (0x000a6006) image_qvga_pane

0xe76c,	// (0x000b3589) bg_popup_sub_pane_cp04_ParamLimits

0xa5b3,	// (0x000af3d0) popup_mup_playback_window_g1_ParamLimits

0xa5bf,	// (0x000af3dc) popup_mup_playback_window_t1_ParamLimits

0xa5d4,	// (0x000af3f1) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x000b430a) popup_mup_playback_window_t_ParamLimits

0x4361,	// (0x000a917e) main_mup2_pane_g3_ParamLimits

0x4361,	// (0x000a917e) main_mup2_pane_g3

0x15f5,	// (0x000a6412) popup_toolbar_window_cp04

0xa9c9,	// (0x000af7e6) popup_call2_audio_second_window_g3_ParamLimits

0xa9c9,	// (0x000af7e6) popup_call2_audio_second_window_g3

0xadd3,	// (0x000afbf0) popup_call2_audio_first_window_g4_ParamLimits

0xadd3,	// (0x000afbf0) popup_call2_audio_first_window_g4

0xb478,	// (0x000b0295) popup_call2_audio_in_window_g4_ParamLimits

0xb478,	// (0x000b0295) popup_call2_audio_in_window_g4

0x322f,	// (0x000a804c) aid_area_sk_bg_cut_ParamLimits

0x322f,	// (0x000a804c) aid_area_sk_bg_cut

0xa5e9,	// (0x000af406) aid_area_sk_bg_cut_2_ParamLimits

0xa5e9,	// (0x000af406) aid_area_sk_bg_cut_2

0x4666,	// (0x000a9483) aid_placing_details_win

0x466e,	// (0x000a948b) aid_placing_details_win_2

0xbd61,	// (0x000b0b7e) camera2_autofocus_pane_g1_ParamLimits

0x0495,	// (0x000a52b2) popup_fixed_preview_cale_window_ParamLimits

0x0495,	// (0x000a52b2) popup_fixed_preview_cale_window

0xa3ce,	// (0x000af1eb) navi_slider_pane_g3

0xa3d7,	// (0x000af1f4) navi_slider_pane_g4

0xa3e0,	// (0x000af1fd) navi_slider_pane_g5

0xa3ce,	// (0x000af1eb) navi_slider_pane_g6

0x9c04,	// (0x000aea21) navi_slider_pane_g7

0xa4f3,	// (0x000af310) mup_scale_pane_g3

0xa4fc,	// (0x000af319) mup_scale_pane_g4

0xa505,	// (0x000af322) mup_scale_pane_g5

0x2ed1,	// (0x000a7cee) mup_scale_pane_g6

0x2eda,	// (0x000a7cf7) mup_scale_pane_g7

0xa3ce,	// (0x000af1eb) cams2_slider_pane_g3

0xb9c2,	// (0x000b07df) cams2_slider_pane_g4

0x9d4b,	// (0x000aeb68) cams2_slider_pane_g5

0xa3ce,	// (0x000af1eb) cams2_slider_pane_g6

0x9d53,	// (0x000aeb70) cams2_slider_pane_g7

0xbbef,	// (0x000b0a0c) camera2_autofocus_pane_cp_g1

0xb7d9,	// (0x000b05f6) bg_popup_preview_window_pane_cp02_ParamLimits

0xb7d9,	// (0x000b05f6) bg_popup_preview_window_pane_cp02

0xbf81,	// (0x000b0d9e) list_fp_cale_pane_ParamLimits

0xbf81,	// (0x000b0d9e) list_fp_cale_pane

0xbf8d,	// (0x000b0daa) popup_fixed_preview_cale_window_t1_ParamLimits

0xbf8d,	// (0x000b0daa) popup_fixed_preview_cale_window_t1

0x4ed3,	// (0x000a9cf0) popup_fixed_preview_cale_window_t2_ParamLimits

0x4ed3,	// (0x000a9cf0) popup_fixed_preview_cale_window_t2

0x4ee8,	// (0x000a9d05) popup_fixed_preview_cale_window_t3_ParamLimits

0x4ee8,	// (0x000a9d05) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x000b45d2) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x000b45d2) popup_fixed_preview_cale_window_t

0x4efd,	// (0x000a9d1a) list_single_fp_cale_pane_ParamLimits

0x4efd,	// (0x000a9d1a) list_single_fp_cale_pane

0xbfab,	// (0x000b0dc8) list_single_fp_cale_pane_g1_ParamLimits

0xbfab,	// (0x000b0dc8) list_single_fp_cale_pane_g1

0xbfb7,	// (0x000b0dd4) list_single_fp_cale_pane_g2_ParamLimits

0xbfb7,	// (0x000b0dd4) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x000b45d9) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x000b45d9) list_single_fp_cale_pane_g

0xbfd0,	// (0x000b0ded) list_single_fp_cale_pane_t1_ParamLimits

0xbfd0,	// (0x000b0ded) list_single_fp_cale_pane_t1

0xbfe2,	// (0x000b0dff) list_single_fp_cale_pane_t2_ParamLimits

0xbfe2,	// (0x000b0dff) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x000b45e0) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x000b45e0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x95bb,	// (0x000ae3d8) main_dialer_pane

0x4f14,	// (0x000a9d31) aid_cell_size_keypad

0x4f1e,	// (0x000a9d3b) dialer_ne_pane

0x4f26,	// (0x000a9d43) grid_dialer_command_1_pane

0x4f2e,	// (0x000a9d4b) grid_dialer_command_2_pane

0x4f36,	// (0x000a9d53) grid_dialer_keypad_pane

0x4f48,	// (0x000a9d65) bg_popup_call_pane_cp06_ParamLimits

0x4f48,	// (0x000a9d65) bg_popup_call_pane_cp06

0x4f54,	// (0x000a9d71) dialer_ne_clear_pane_ParamLimits

0x4f54,	// (0x000a9d71) dialer_ne_clear_pane

0xc015,	// (0x000b0e32) dialer_ne_pane_g1

0xc01d,	// (0x000b0e3a) dialer_ne_pane_t1_ParamLimits

0xc01d,	// (0x000b0e3a) dialer_ne_pane_t1

0x4f60,	// (0x000a9d7d) dialer_ne_pane_t2_ParamLimits

0x4f60,	// (0x000a9d7d) dialer_ne_pane_t2

0x4f8a,	// (0x000a9da7) dialer_ne_pane_t3_ParamLimits

0x4f8a,	// (0x000a9da7) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x000b45e5) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x000b45e5) dialer_ne_pane_t

0x4fba,	// (0x000a9dd7) dialer_ne_pane_t3_copy1_ParamLimits

0x4fba,	// (0x000a9dd7) dialer_ne_pane_t3_copy1

0x4fe9,	// (0x000a9e06) cell_dialer_keypad_pane_ParamLimits

0x4fe9,	// (0x000a9e06) cell_dialer_keypad_pane

0x5000,	// (0x000a9e1d) cell_dialer_command_1_pane_ParamLimits

0x5000,	// (0x000a9e1d) cell_dialer_command_1_pane

0x5016,	// (0x000a9e33) cell_dialer_command_2_pane_ParamLimits

0x5016,	// (0x000a9e33) cell_dialer_command_2_pane

0xc02f,	// (0x000b0e4c) bg_button_pane_cp02_ParamLimits

0xc02f,	// (0x000b0e4c) bg_button_pane_cp02

0x5025,	// (0x000a9e42) cell_dialer_keypad_pane_g1_ParamLimits

0x5025,	// (0x000a9e42) cell_dialer_keypad_pane_g1

0xc02f,	// (0x000b0e4c) bg_button_pane_cp03_ParamLimits

0xc02f,	// (0x000b0e4c) bg_button_pane_cp03

0x503a,	// (0x000a9e57) cell_dialer_command_1_pane_g1_ParamLimits

0x503a,	// (0x000a9e57) cell_dialer_command_1_pane_g1

0xc03b,	// (0x000b0e58) bg_button_pane_cp04

0x504d,	// (0x000a9e6a) cell_dialer_command_2_pane_g1

0xa3bd,	// (0x000af1da) bg_button_pane_cp06

0xc043,	// (0x000b0e60) dialer_ne_clear_pane_g1

0x2a03,	// (0x000a7820) navi_pane_g2

0x2a31,	// (0x000a784e) navi_pane_g3

0x0002,

0xf3f0,	// (0x000b420d) navi_pane_g

0x2a5a,	// (0x000a7877) navi_pane_mv_g2

0x2a81,	// (0x000a789e) navi_pane_mv_g5

0x2a89,	// (0x000a78a6) navi_pane_mv_t1

0xe850,	// (0x000b366d) main_clock2_pane

0x509a,	// (0x000a9eb7) main_clock2_list_pane_ParamLimits

0x509a,	// (0x000a9eb7) main_clock2_list_pane

0x50d4,	// (0x000a9ef1) main_clock2_pane_t1_ParamLimits

0x50d4,	// (0x000a9ef1) main_clock2_pane_t1

0x5112,	// (0x000a9f2f) main_clock2_pane_t2_ParamLimits

0x5112,	// (0x000a9f2f) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x000b45ec) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x000b45ec) main_clock2_pane_t

0x51b0,	// (0x000a9fcd) popup_clock_analogue_window_cp03_ParamLimits

0x51b0,	// (0x000a9fcd) popup_clock_analogue_window_cp03

0x51d5,	// (0x000a9ff2) popup_clock_digital_window_cp02_ParamLimits

0x51d5,	// (0x000a9ff2) popup_clock_digital_window_cp02

0x5248,	// (0x000aa065) main_clock2_list_single_pane_ParamLimits

0x5248,	// (0x000aa065) main_clock2_list_single_pane

0xa3bd,	// (0x000af1da) list_highlight_pane_cp05

0xc061,	// (0x000b0e7e) main_clock2_list_single_pane_t1

0x15f5,	// (0x000a6412) popup_toolbar_window_cp04_ParamLimits

0x4690,	// (0x000a94ad) camera2_autofocus_pane_g2_ParamLimits

0x4690,	// (0x000a94ad) camera2_autofocus_pane_g2

0x469c,	// (0x000a94b9) camera2_autofocus_pane_g3_ParamLimits

0x469c,	// (0x000a94b9) camera2_autofocus_pane_g3

0x46a8,	// (0x000a94c5) camera2_autofocus_pane_g4_ParamLimits

0x46a8,	// (0x000a94c5) camera2_autofocus_pane_g4

0x46b4,	// (0x000a94d1) camera2_autofocus_pane_g5_ParamLimits

0x46b4,	// (0x000a94d1) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x000b4535) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x000b4535) camera2_autofocus_pane_g

0x4883,	// (0x000a96a0) camera2_autofocus_pane_cp_g2

0x488b,	// (0x000a96a8) camera2_autofocus_pane_cp_g3

0x4893,	// (0x000a96b0) camera2_autofocus_pane_cp_g4

0x489b,	// (0x000a96b8) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x000b459b) camera2_autofocus_pane_cp_g

0x4f40,	// (0x000a9d5d) popup_dialer_spcha_window

0xd4ca,	// (0x000b22e7) bg_popup_sub_pane_cp07

0xc06f,	// (0x000b0e8c) list_spcha_pane

0xc077,	// (0x000b0e94) list_single_spcha_pane_ParamLimits

0xc077,	// (0x000b0e94) list_single_spcha_pane

0xd4ca,	// (0x000b22e7) list_highlight_pane_cp06

0xc088,	// (0x000b0ea5) list_single_spcha_pane_t1

0xb222,	// (0x000b003f) popup_call2_audio_out_window_g4_ParamLimits

0xb222,	// (0x000b003f) popup_call2_audio_out_window_g4

0x95bb,	// (0x000ae3d8) main_imed2_pane

0x9c6b,	// (0x000aea88) popup_imed_adjust2_window

0x3a7b,	// (0x000a8898) popup_imed_trans_window_ParamLimits

0x3a7b,	// (0x000a8898) popup_imed_trans_window

0xba2b,	// (0x000b0848) popup_blid_sat_info2_window_t1

0xba39,	// (0x000b0856) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x000b44ca) popup_blid_sat_info2_window_t

0x52f2,	// (0x000aa10f) aid_size_cell_colour_35

0x5312,	// (0x000aa12f) aid_size_cell_colour_112

0x5332,	// (0x000aa14f) aid_size_cell_effect

0xb7e5,	// (0x000b0602) bg_tb_trans_pane_cp02

0x989e,	// (0x000ae6bb) heading_imed_pane

0x5352,	// (0x000aa16f) listscroll_imed_pane

0xc096,	// (0x000b0eb3) heading_imed_pane_g1

0xc09e,	// (0x000b0ebb) heading_imed_pane_t1

0xc0ac,	// (0x000b0ec9) grid_imed_colour_35_pane_ParamLimits

0xc0ac,	// (0x000b0ec9) grid_imed_colour_35_pane

0x535e,	// (0x000aa17b) grid_imed_effect_pane

0xc0c4,	// (0x000b0ee1) list_imed_aspect_pane

0x5374,	// (0x000aa191) scroll_pane_cp027_ParamLimits

0x5374,	// (0x000aa191) scroll_pane_cp027

0x5385,	// (0x000aa1a2) cell_imed_effect_pane_ParamLimits

0x5385,	// (0x000aa1a2) cell_imed_effect_pane

0xc0cc,	// (0x000b0ee9) cell_imed_colour_pane_ParamLimits

0xc0cc,	// (0x000b0ee9) cell_imed_colour_pane

0xc10e,	// (0x000b0f2b) cell_imed_colour_pane_g1_ParamLimits

0xc10e,	// (0x000b0f2b) cell_imed_colour_pane_g1

0xc11f,	// (0x000b0f3c) hgihlgiht_grid_pane_cp016_ParamLimits

0xc11f,	// (0x000b0f3c) hgihlgiht_grid_pane_cp016

0x53ac,	// (0x000aa1c9) cell_imed_effect_pane_g1

0x53b4,	// (0x000aa1d1) grid_highlight_pane_cp017

0xc130,	// (0x000b0f4d) list_imed_single_pane_ParamLimits

0xc130,	// (0x000b0f4d) list_imed_single_pane

0xd4ca,	// (0x000b22e7) list_highlight_pane_cp07

0xc146,	// (0x000b0f63) list_imed_aspect_pane_comp1_t1

0xb7e5,	// (0x000b0602) bg_tb_trans_pane_cp05

0xc168,	// (0x000b0f85) popup_imed_adjust2_window_g1

0xc18f,	// (0x000b0fac) popup_imed_adjust2_window_t1

0xc1a7,	// (0x000b0fc4) slider_imed_adjust_pane

0xc1bb,	// (0x000b0fd8) slider_imed_adjust_pane_g1

0xc1cb,	// (0x000b0fe8) slider_imed_adjust_pane_g2

0xc1db,	// (0x000b0ff8) slider_imed_adjust_pane_g3

0xc1ec,	// (0x000b1009) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x000b4609) slider_imed_adjust_pane_g

0x53bd,	// (0x000aa1da) aid_size_cell_clipart2

0x53c9,	// (0x000aa1e6) grid_imed_clipart_pane

0xc1fd,	// (0x000b101a) scroll_pane_cp031

0x53d3,	// (0x000aa1f0) cell_imed_clipart_pane_ParamLimits

0x53d3,	// (0x000aa1f0) cell_imed_clipart_pane

0x53f7,	// (0x000aa214) cell_imed_clipart_pane_g1

0xd4ca,	// (0x000b22e7) grid_highlight_pane_cp014

0x50af,	// (0x000a9ecc) main_clock2_pane_g1_ParamLimits

0x50af,	// (0x000a9ecc) main_clock2_pane_g1

0x51f3,	// (0x000aa010) aid_call2_pane_cp10

0x5205,	// (0x000aa022) aid_call_pane_cp10

0xa2f2,	// (0x000af10f) popup_clock_analogue_window_cp10_g1

0xa2f2,	// (0x000af10f) popup_clock_analogue_window_cp10_g2

0x5217,	// (0x000aa034) popup_clock_analogue_window_cp10_g3

0x5217,	// (0x000aa034) popup_clock_analogue_window_cp10_g4

0xa2f2,	// (0x000af10f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x000b45f7) popup_clock_analogue_window_cp10_g

0x5229,	// (0x000aa046) popup_clock_analogue_window_cp10_t1

0x525a,	// (0x000aa077) clock_digital_number_pane_cp10_ParamLimits

0x525a,	// (0x000aa077) clock_digital_number_pane_cp10

0x5272,	// (0x000aa08f) clock_digital_number_pane_cp11_ParamLimits

0x5272,	// (0x000aa08f) clock_digital_number_pane_cp11

0x528a,	// (0x000aa0a7) clock_digital_number_pane_cp12_ParamLimits

0x528a,	// (0x000aa0a7) clock_digital_number_pane_cp12

0x52a2,	// (0x000aa0bf) clock_digital_number_pane_cp13_ParamLimits

0x52a2,	// (0x000aa0bf) clock_digital_number_pane_cp13

0x52ba,	// (0x000aa0d7) clock_digital_separator_pane_cp10_ParamLimits

0x52ba,	// (0x000aa0d7) clock_digital_separator_pane_cp10

0x52d2,	// (0x000aa0ef) popup_clock_digital_window_cp02_t1_ParamLimits

0x52d2,	// (0x000aa0ef) popup_clock_digital_window_cp02_t1

0xe764,	// (0x000b3581) clock_digital_number_pane_cp10_g1

0xe764,	// (0x000b3581) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x000b4612) clock_digital_number_pane_cp10_g

0xe764,	// (0x000b3581) clock_digital_separator_pane_cp10_g1

0xe764,	// (0x000b3581) clock_digital_separator_pane_g2_cp10

0xa38d,	// (0x000af1aa) navi_pane_vded_g4

0xa396,	// (0x000af1b3) navi_pane_vded_g5

0xa39f,	// (0x000af1bc) navi_pane_vded_t1

0x95bb,	// (0x000ae3d8) main_vded_pane

0x5400,	// (0x000aa21d) main_vded_pane_g1

0x540a,	// (0x000aa227) main_vded_pane_g2

0x5414,	// (0x000aa231) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x000b4617) main_vded_pane_g

0x541e,	// (0x000aa23b) main_vded_pane_t1

0x542c,	// (0x000aa249) main_vded_pane_t2

0x0001,

0xf801,	// (0x000b461e) main_vded_pane_t

0x543a,	// (0x000aa257) vded_slider_pane

0x5444,	// (0x000aa261) vded_video_pane

0xc205,	// (0x000b1022) vded_video_pane_g1

0x544e,	// (0x000aa26b) vded_video_pane_g2

0xbbef,	// (0x000b0a0c) vded_video_pane_g3

0x0002,

0xf806,	// (0x000b4623) vded_video_pane_g

0xc20f,	// (0x000b102c) vded_slider_pane_g1

0xc218,	// (0x000b1035) vded_slider_pane_g2

0xc221,	// (0x000b103e) vded_slider_pane_g3

0xc22a,	// (0x000b1047) vded_slider_pane_g4

0xc233,	// (0x000b1050) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x000b462a) vded_slider_pane_g

0x4e1f,	// (0x000a9c3c) mup3_rocker_pane_ParamLimits

0x4e1f,	// (0x000a9c3c) mup3_rocker_pane

0x5457,	// (0x000aa274) mup3_control_keys_pane_g1

0x545f,	// (0x000aa27c) mup3_control_keys_pane_g2

0x5467,	// (0x000aa284) mup3_control_keys_pane_g3

0x546f,	// (0x000aa28c) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x000b4635) mup3_control_keys_pane_g

0x04cc,	// (0x000a52e9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x04cc,	// (0x000a52e9) popup_toolbar2_fixed_window_cp01

0x4e53,	// (0x000a9c70) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4e53,	// (0x000a9c70) popup_toolbar2_fixed_window_cp02

0xab3b,	// (0x000af958) popup_call2_audio_second_window_t4_ParamLimits

0xab3b,	// (0x000af958) popup_call2_audio_second_window_t4

0xb08f,	// (0x000afeac) popup_call2_audio_first_window_t6_ParamLimits

0xb08f,	// (0x000afeac) popup_call2_audio_first_window_t6

0xb325,	// (0x000b0142) popup_call2_audio_out_window_t6_ParamLimits

0xb325,	// (0x000b0142) popup_call2_audio_out_window_t6

0x95bb,	// (0x000ae3d8) main_vitu_pane

0x547f,	// (0x000aa29c) aid_size_cell_itu_ParamLimits

0x547f,	// (0x000aa29c) aid_size_cell_itu

0xe923,	// (0x000b3740) bg_popup_window_pane_cp08_ParamLimits

0xe923,	// (0x000b3740) bg_popup_window_pane_cp08

0x5495,	// (0x000aa2b2) field_vitu_entry_pane_ParamLimits

0x5495,	// (0x000aa2b2) field_vitu_entry_pane

0x54ac,	// (0x000aa2c9) grid_vitu_function_pane_ParamLimits

0x54ac,	// (0x000aa2c9) grid_vitu_function_pane

0x54c7,	// (0x000aa2e4) grid_vitu_itu_pane_ParamLimits

0x54c7,	// (0x000aa2e4) grid_vitu_itu_pane

0x54e5,	// (0x000aa302) cell_vitu_itu_pane_ParamLimits

0x54e5,	// (0x000aa302) cell_vitu_itu_pane

0x5509,	// (0x000aa326) cell_vitu_function_pane_ParamLimits

0x5509,	// (0x000aa326) cell_vitu_function_pane

0xe923,	// (0x000b3740) bg_popup_sub_pane_cp08_ParamLimits

0xe923,	// (0x000b3740) bg_popup_sub_pane_cp08

0x5524,	// (0x000aa341) field_vitu_entry_pane_t1_ParamLimits

0x5524,	// (0x000aa341) field_vitu_entry_pane_t1

0xc254,	// (0x000b1071) field_vitu_entry_pane_t2_ParamLimits

0xc254,	// (0x000b1071) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x000b4643) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x000b4643) field_vitu_entry_pane_t

0xc271,	// (0x000b108e) bg_button_pane_cp05_ParamLimits

0xc271,	// (0x000b108e) bg_button_pane_cp05

0x5543,	// (0x000aa360) cell_vitu_itu_pane_g1

0x555b,	// (0x000aa378) cell_vitu_itu_pane_t1_ParamLimits

0x555b,	// (0x000aa378) cell_vitu_itu_pane_t1

0x556d,	// (0x000aa38a) cell_vitu_itu_pane_t2_ParamLimits

0x556d,	// (0x000aa38a) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x000b4648) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x000b4648) cell_vitu_itu_pane_t

0xc27f,	// (0x000b109c) bg_button_pane_cp07

0x55b0,	// (0x000aa3cd) cell_vitu_function_pane_g1

0x95c5,	// (0x000ae3e2) main_calc_pane_g1

0x02e3,	// (0x000a5100) aid_visual_content_pane

0x95bb,	// (0x000ae3d8) main_vradio_pane

0x55b9,	// (0x000aa3d6) main_vradio_pane_g1_ParamLimits

0x55b9,	// (0x000aa3d6) main_vradio_pane_g1

0xc289,	// (0x000b10a6) main_vradio_pane_g2_ParamLimits

0xc289,	// (0x000b10a6) main_vradio_pane_g2

0x0001,

0xf832,	// (0x000b464f) main_vradio_pane_g_ParamLimits

0xf832,	// (0x000b464f) main_vradio_pane_g

0x55d2,	// (0x000aa3ef) main_vradio_pane_t1_ParamLimits

0x55d2,	// (0x000aa3ef) main_vradio_pane_t1

0x55e7,	// (0x000aa404) main_vradio_pane_t2_ParamLimits

0x55e7,	// (0x000aa404) main_vradio_pane_t2

0xc296,	// (0x000b10b3) main_vradio_pane_t3_ParamLimits

0xc296,	// (0x000b10b3) main_vradio_pane_t3

0x0002,

0xf837,	// (0x000b4654) main_vradio_pane_t_ParamLimits

0xf837,	// (0x000b4654) main_vradio_pane_t

0x55fc,	// (0x000aa419) vradio_rocker_control_pane_ParamLimits

0x55fc,	// (0x000aa419) vradio_rocker_control_pane

0x560e,	// (0x000aa42b) vradio_station_info_pane_ParamLimits

0x560e,	// (0x000aa42b) vradio_station_info_pane

0xc2aa,	// (0x000b10c7) vradio_frequency_info_pane_ParamLimits

0xc2aa,	// (0x000b10c7) vradio_frequency_info_pane

0xbbef,	// (0x000b0a0c) vradio_station_info_pane_g1

0xc2b9,	// (0x000b10d6) vradio_station_info_pane_t1_ParamLimits

0xc2b9,	// (0x000b10d6) vradio_station_info_pane_t1

0xc2db,	// (0x000b10f8) vradio_station_info_pane_t2_ParamLimits

0xc2db,	// (0x000b10f8) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x000b465b) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x000b465b) vradio_station_info_pane_t

0xc2ed,	// (0x000b110a) vradio_tuning_pane

0xc2f5,	// (0x000b1112) vradio_rocker_control_pane_g1

0xc2fd,	// (0x000b111a) vradio_rocker_control_pane_g2

0xc305,	// (0x000b1122) vradio_rocker_control_pane_g3

0xc30d,	// (0x000b112a) vradio_rocker_control_pane_g4

0xc315,	// (0x000b1132) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x000b4660) vradio_rocker_control_pane_g

0x5620,	// (0x000aa43d) vradio_frequency_info_pane_g1

0xc31d,	// (0x000b113a) vradio_frequency_info_pane_t1_ParamLimits

0xc31d,	// (0x000b113a) vradio_frequency_info_pane_t1

0x562a,	// (0x000aa447) vradio_tuning_pane_g1

0x5635,	// (0x000aa452) vradio_tuning_pane_t1

0x956b,	// (0x000ae388) area_side_right_pane_ParamLimits

0x956b,	// (0x000ae388) area_side_right_pane

0xb7a0,	// (0x000b05bd) status_small_pane_g1

0xb7a8,	// (0x000b05c5) status_small_pane_g2

0xb7b1,	// (0x000b05ce) status_small_pane_g3

0xb7ba,	// (0x000b05d7) status_small_pane_g4

0x0003,

0xf603,	// (0x000b4420) status_small_pane_g

0xb7c3,	// (0x000b05e0) status_small_pane_t1

0x95bb,	// (0x000ae3d8) main_video3_pane

0xc331,	// (0x000b114e) cams_zoom_vslider_pane

0xc339,	// (0x000b1156) image3_wide_pane_ParamLimits

0xc339,	// (0x000b1156) image3_wide_pane

0xc353,	// (0x000b1170) image3_wide_small_pane

0xc35f,	// (0x000b117c) main_video3_pane_g1_ParamLimits

0xc35f,	// (0x000b117c) main_video3_pane_g1

0xc37b,	// (0x000b1198) main_video3_pane_g2_ParamLimits

0xc37b,	// (0x000b1198) main_video3_pane_g2

0x0001,

0xf84e,	// (0x000b466b) main_video3_pane_g_ParamLimits

0xf84e,	// (0x000b466b) main_video3_pane_g

0xc397,	// (0x000b11b4) main_video3_pane_t1_ParamLimits

0xc397,	// (0x000b11b4) main_video3_pane_t1

0xc3c2,	// (0x000b11df) main_video3_pane_t2_ParamLimits

0xc3c2,	// (0x000b11df) main_video3_pane_t2

0xc3ed,	// (0x000b120a) main_video3_pane_t3_ParamLimits

0xc3ed,	// (0x000b120a) main_video3_pane_t3

0x0002,

0xf853,	// (0x000b4670) main_video3_pane_t_ParamLimits

0xf853,	// (0x000b4670) main_video3_pane_t

0xc41a,	// (0x000b1237) cams_zoom_vslider_pane_g1

0xc423,	// (0x000b1240) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x000b4677) cams_zoom_vslider_pane_g

0xc42b,	// (0x000b1248) small_slider_vertical_pane

0xbbef,	// (0x000b0a0c) small_slider_vertical_pane_g1

0xbbef,	// (0x000b0a0c) small_slider_vertical_pane_g2

0xc433,	// (0x000b1250) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x000b467c) small_slider_vertical_pane_g

0x95bb,	// (0x000ae3d8) main_hwr_training_pane

0xc43c,	// (0x000b1259) hwr_training_instruct_pane_ParamLimits

0xc43c,	// (0x000b1259) hwr_training_instruct_pane

0x5644,	// (0x000aa461) hwr_training_navi_pane_ParamLimits

0x5644,	// (0x000aa461) hwr_training_navi_pane

0x5663,	// (0x000aa480) hwr_training_write_pane_ParamLimits

0x5663,	// (0x000aa480) hwr_training_write_pane

0xd4ca,	// (0x000b22e7) bg_frame_shadow_pane

0xc473,	// (0x000b1290) hwr_training_write_pane_g1

0xc47b,	// (0x000b1298) hwr_training_write_pane_g2

0xc483,	// (0x000b12a0) hwr_training_write_pane_g3

0xc48b,	// (0x000b12a8) hwr_training_write_pane_g4

0xc493,	// (0x000b12b0) hwr_training_write_pane_g5

0xc49b,	// (0x000b12b8) hwr_training_write_pane_g6

0xc4a3,	// (0x000b12c0) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x000b4683) hwr_training_write_pane_g

0x9d5c,	// (0x000aeb79) hwr_training_navi_pane_g1_ParamLimits

0x9d5c,	// (0x000aeb79) hwr_training_navi_pane_g1

0x9d6e,	// (0x000aeb8b) hwr_training_navi_pane_g2_ParamLimits

0x9d6e,	// (0x000aeb8b) hwr_training_navi_pane_g2

0x9d80,	// (0x000aeb9d) hwr_training_navi_pane_g3_ParamLimits

0x9d80,	// (0x000aeb9d) hwr_training_navi_pane_g3

0x9d90,	// (0x000aebad) hwr_training_navi_pane_g4_ParamLimits

0x9d90,	// (0x000aebad) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x000b4692) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x000b4692) hwr_training_navi_pane_g

0x9d9d,	// (0x000aebba) hwr_training_navi_pane_t1

0x56ad,	// (0x000aa4ca) list_single_hwr_training_instruct_pane_ParamLimits

0x56ad,	// (0x000aa4ca) list_single_hwr_training_instruct_pane

0xc4ab,	// (0x000b12c8) list_single_hwr_training_instruct_pane_t1

0xbb2f,	// (0x000b094c) bg_frame_shadow_pane_g1

0xc4ba,	// (0x000b12d7) bg_frame_shadow_pane_g2

0xc4c2,	// (0x000b12df) bg_frame_shadow_pane_g3

0xc4ca,	// (0x000b12e7) bg_frame_shadow_pane_g4

0xc4d2,	// (0x000b12ef) bg_frame_shadow_pane_g5

0xc4da,	// (0x000b12f7) bg_frame_shadow_pane_g6

0xc4e2,	// (0x000b12ff) bg_frame_shadow_pane_g7

0xe91b,	// (0x000b3738) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x000b469d) bg_frame_shadow_pane_g

0x95bb,	// (0x000ae3d8) main_video_tele_dialer_pane

0x56c4,	// (0x000aa4e1) aid_size_cell_video_keypad_ParamLimits

0x56c4,	// (0x000aa4e1) aid_size_cell_video_keypad

0x56de,	// (0x000aa4fb) grid_video_dialer_keypad_pane_ParamLimits

0x56de,	// (0x000aa4fb) grid_video_dialer_keypad_pane

0x572c,	// (0x000aa549) video_down_pane_cp_ParamLimits

0x572c,	// (0x000aa549) video_down_pane_cp

0x575e,	// (0x000aa57b) cell_video_dialer_keypad_pane_ParamLimits

0x575e,	// (0x000aa57b) cell_video_dialer_keypad_pane

0xc4ea,	// (0x000b1307) bg_button_pane_cp08_ParamLimits

0xc4ea,	// (0x000b1307) bg_button_pane_cp08

0x5780,	// (0x000aa59d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5780,	// (0x000aa59d) cell_video_dialer_keypad_pane_g1

0x4e09,	// (0x000a9c26) mup3_rocker2_pane_ParamLimits

0x4e09,	// (0x000a9c26) mup3_rocker2_pane

0xbbef,	// (0x000b0a0c) mup3_rocker2_pane_g1

0x3964,	// (0x000a8781) main_dialer2_pane

0x95bb,	// (0x000ae3d8) main_mp4_pane

0x9db3,	// (0x000aebd0) main_mp4_pane_g1_ParamLimits

0x9db3,	// (0x000aebd0) main_mp4_pane_g1

0x9db3,	// (0x000aebd0) main_mp4_pane_g2_ParamLimits

0x9db3,	// (0x000aebd0) main_mp4_pane_g2

0x57bb,	// (0x000aa5d8) main_mp4_pane_g3_ParamLimits

0x57bb,	// (0x000aa5d8) main_mp4_pane_g3

0x9dc1,	// (0x000aebde) main_mp4_pane_g4_ParamLimits

0x9dc1,	// (0x000aebde) main_mp4_pane_g4

0x9de9,	// (0x000aec06) main_mp4_pane_g5_ParamLimits

0x9de9,	// (0x000aec06) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x000b46bd) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x000b46bd) main_mp4_pane_g

0x9e39,	// (0x000aec56) main_mp4_pane_t1_ParamLimits

0x9e39,	// (0x000aec56) main_mp4_pane_t1

0x9e95,	// (0x000aecb2) main_mp4_pane_t2_ParamLimits

0x9e95,	// (0x000aecb2) main_mp4_pane_t2

0xc4f6,	// (0x000b1313) main_mp4_pane_t3_ParamLimits

0xc4f6,	// (0x000b1313) main_mp4_pane_t3

0x9ee7,	// (0x000aed04) main_mp4_pane_t4_ParamLimits

0x9ee7,	// (0x000aed04) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x000b46ca) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x000b46ca) main_mp4_pane_t

0x9f2b,	// (0x000aed48) mp4_progress_pane_ParamLimits

0x9f2b,	// (0x000aed48) mp4_progress_pane

0x9f75,	// (0x000aed92) mp4_rocker_pane_ParamLimits

0x9f75,	// (0x000aed92) mp4_rocker_pane

0xc51e,	// (0x000b133b) mp4_progress_pane_t1

0xc537,	// (0x000b1354) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x000b46d3) mp4_progress_pane_t

0xc550,	// (0x000b136d) mup_progress_pane_cp04

0xc864,	// (0x000b1681) mp4_rocker_pane_g1

0x57f7,	// (0x000aa614) aid_cell_size_keypad2_ParamLimits

0x57f7,	// (0x000aa614) aid_cell_size_keypad2

0x580d,	// (0x000aa62a) dialer2_ne_pane_ParamLimits

0x580d,	// (0x000aa62a) dialer2_ne_pane

0x5827,	// (0x000aa644) grid_dialer2_keypad_pane_ParamLimits

0x5827,	// (0x000aa644) grid_dialer2_keypad_pane

0xb9d2,	// (0x000b07ef) bg_popup_call_pane_cp07_ParamLimits

0xb9d2,	// (0x000b07ef) bg_popup_call_pane_cp07

0x5845,	// (0x000aa662) dialer2_ne_pane_t1_ParamLimits

0x5845,	// (0x000aa662) dialer2_ne_pane_t1

0x5882,	// (0x000aa69f) cell_dialer2_keypad_pane_ParamLimits

0x5882,	// (0x000aa69f) cell_dialer2_keypad_pane

0xc56e,	// (0x000b138b) bg_button_pane_pane_cp04_ParamLimits

0xc56e,	// (0x000b138b) bg_button_pane_pane_cp04

0x58a4,	// (0x000aa6c1) cell_dialer2_keypad_pane_g1_ParamLimits

0x58a4,	// (0x000aa6c1) cell_dialer2_keypad_pane_g1

0x14c9,	// (0x000a62e6) aid_placing_vt_set_content_ParamLimits

0x14c9,	// (0x000a62e6) aid_placing_vt_set_content

0x14f1,	// (0x000a630e) aid_placing_vt_set_title_ParamLimits

0x14f1,	// (0x000a630e) aid_placing_vt_set_title

0x95bb,	// (0x000ae3d8) main_image3_pane

0x596a,	// (0x000aa787) area_side_right_pane_cp01_ParamLimits

0x596a,	// (0x000aa787) area_side_right_pane_cp01

0x9db3,	// (0x000aebd0) main_image3_pane_g1_ParamLimits

0x9db3,	// (0x000aebd0) main_image3_pane_g1

0x5981,	// (0x000aa79e) main_image3_pane_g2_ParamLimits

0x5981,	// (0x000aa79e) main_image3_pane_g2

0x59a9,	// (0x000aa7c6) main_image3_pane_g3_ParamLimits

0x59a9,	// (0x000aa7c6) main_image3_pane_g3

0x59d3,	// (0x000aa7f0) main_image3_pane_g4_ParamLimits

0x59d3,	// (0x000aa7f0) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x000b46e2) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x000b46e2) main_image3_pane_g

0x59fd,	// (0x000aa81a) main_image3_pane_t1_ParamLimits

0x59fd,	// (0x000aa81a) main_image3_pane_t1

0x5a55,	// (0x000aa872) main_image3_pane_t2_ParamLimits

0x5a55,	// (0x000aa872) main_image3_pane_t2

0x5aa7,	// (0x000aa8c4) main_image3_pane_t3_ParamLimits

0x5aa7,	// (0x000aa8c4) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x000b46eb) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x000b46eb) main_image3_pane_t

0xe923,	// (0x000b3740) grid_sctrl_middle_pane_cp01_ParamLimits

0xe923,	// (0x000b3740) grid_sctrl_middle_pane_cp01

0x5b2f,	// (0x000aa94c) cell_sctrl_middle_pane_cp01_ParamLimits

0x5b2f,	// (0x000aa94c) cell_sctrl_middle_pane_cp01

0x5b4c,	// (0x000aa969) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5b4c,	// (0x000aa969) cell_sctrl_middle_pane_cp01_g1

0x95bb,	// (0x000ae3d8) main_call4_pane

0x5b62,	// (0x000aa97f) aid_size_button_call4_ParamLimits

0x5b62,	// (0x000aa97f) aid_size_button_call4

0x5b93,	// (0x000aa9b0) call4_windows_pane_ParamLimits

0x5b93,	// (0x000aa9b0) call4_windows_pane

0x5bb3,	// (0x000aa9d0) grid_call4_button_pane_ParamLimits

0x5bb3,	// (0x000aa9d0) grid_call4_button_pane

0xc57a,	// (0x000b1397) call4_windows_conf_pane

0xc58f,	// (0x000b13ac) popup_call4_audio_first_window_ParamLimits

0xc58f,	// (0x000b13ac) popup_call4_audio_first_window

0xc5db,	// (0x000b13f8) popup_call4_audio_second_window_ParamLimits

0xc5db,	// (0x000b13f8) popup_call4_audio_second_window

0xc5ef,	// (0x000b140c) popup_call4_audio_wait_window_ParamLimits

0xc5ef,	// (0x000b140c) popup_call4_audio_wait_window

0x5be0,	// (0x000aa9fd) cell_call4_button_pane_ParamLimits

0x5be0,	// (0x000aa9fd) cell_call4_button_pane

0x5c09,	// (0x000aaa26) bg_button_pane_cp09_ParamLimits

0x5c09,	// (0x000aaa26) bg_button_pane_cp09

0x5c15,	// (0x000aaa32) cell_call4_button_pane_g1_ParamLimits

0x5c15,	// (0x000aaa32) cell_call4_button_pane_g1

0x5c3b,	// (0x000aaa58) cell_call4_button_pane_t1_ParamLimits

0x5c3b,	// (0x000aaa58) cell_call4_button_pane_t1

0xc637,	// (0x000b1454) popup_call4_audio_conf_window_ParamLimits

0xc637,	// (0x000b1454) popup_call4_audio_conf_window

0x4e69,	// (0x000a9c86) mup3_progress_pane_t1_ParamLimits

0x4e88,	// (0x000a9ca5) mup3_progress_pane_t2_ParamLimits

0xbf3e,	// (0x000b0d5b) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x000b45c4) mup3_progress_pane_t_ParamLimits

0xbf5b,	// (0x000b0d78) mup_progress_pane_cp03_ParamLimits

0x5477,	// (0x000aa294) mup3_control_keys_pane_g4_copy1

0x9f59,	// (0x000aed76) mp4_rocker2_pane_ParamLimits

0x9f59,	// (0x000aed76) mp4_rocker2_pane

0xc64b,	// (0x000b1468) mp4_rocker2_pane_g1

0xc653,	// (0x000b1470) mp4_rocker2_pane_g2

0x9fc7,	// (0x000aede4) mp4_rocker2_pane_g3

0x9fcf,	// (0x000aedec) mp4_rocker2_pane_g4

0x9fd7,	// (0x000aedf4) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x000b46f4) mp4_rocker2_pane_g

0x95bb,	// (0x000ae3d8) main_camera4_pane

0x95bb,	// (0x000ae3d8) main_video4_pane

0x56fa,	// (0x000aa517) main_video_tele_dialer_pane_t1_ParamLimits

0x56fa,	// (0x000aa517) main_video_tele_dialer_pane_t1

0x5713,	// (0x000aa530) main_video_tele_dialer_pane_t2_ParamLimits

0x5713,	// (0x000aa530) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x000b46ae) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x000b46ae) main_video_tele_dialer_pane_t

0x5c79,	// (0x000aaa96) cam4_autofocus_pane_ParamLimits

0x5c79,	// (0x000aaa96) cam4_autofocus_pane

0x5c8f,	// (0x000aaaac) cam4_image_uncrop_pane_ParamLimits

0x5c8f,	// (0x000aaaac) cam4_image_uncrop_pane

0x5ca9,	// (0x000aaac6) cam4_indicators_pane_ParamLimits

0x5ca9,	// (0x000aaac6) cam4_indicators_pane

0x5cd4,	// (0x000aaaf1) main_camera4_pane_g1_ParamLimits

0x5cd4,	// (0x000aaaf1) main_camera4_pane_g1

0x5ce6,	// (0x000aab03) main_camera4_pane_g2_ParamLimits

0x5ce6,	// (0x000aab03) main_camera4_pane_g2

0x5cf9,	// (0x000aab16) main_camera4_pane_g3_ParamLimits

0x5cf9,	// (0x000aab16) main_camera4_pane_g3

0x5d0c,	// (0x000aab29) main_camera4_pane_g4_ParamLimits

0x5d0c,	// (0x000aab29) main_camera4_pane_g4

0x5d1f,	// (0x000aab3c) main_camera4_pane_g5_ParamLimits

0x5d1f,	// (0x000aab3c) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x000b46ff) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x000b46ff) main_camera4_pane_g

0x5d43,	// (0x000aab60) main_camera4_pane_t1_ParamLimits

0x5d43,	// (0x000aab60) main_camera4_pane_t1

0x9ffb,	// (0x000aee18) bg_tb_trans_pane_cp06

0xa011,	// (0x000aee2e) cam4_indicators_pane_g1

0xa022,	// (0x000aee3f) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x000b471a) cam4_indicators_pane_g

0xa040,	// (0x000aee5d) cam4_indicators_pane_t1

0x5da7,	// (0x000aabc4) main_video4_pane_g1_ParamLimits

0x5da7,	// (0x000aabc4) main_video4_pane_g1

0x5db6,	// (0x000aabd3) main_video4_pane_g2_ParamLimits

0x5db6,	// (0x000aabd3) main_video4_pane_g2

0x5dc5,	// (0x000aabe2) main_video4_pane_g3_ParamLimits

0x5dc5,	// (0x000aabe2) main_video4_pane_g3

0x5dd4,	// (0x000aabf1) main_video4_pane_g4_ParamLimits

0x5dd4,	// (0x000aabf1) main_video4_pane_g4

0x0004,

0xf904,	// (0x000b4721) main_video4_pane_g_ParamLimits

0xf904,	// (0x000b4721) main_video4_pane_g

0x5df2,	// (0x000aac0f) vid4_indicators_pane_ParamLimits

0x5df2,	// (0x000aac0f) vid4_indicators_pane

0x5e20,	// (0x000aac3d) video4_image_uncrop_cif_pane_ParamLimits

0x5e20,	// (0x000aac3d) video4_image_uncrop_cif_pane

0x5e3a,	// (0x000aac57) video4_image_uncrop_nhd_pane_ParamLimits

0x5e3a,	// (0x000aac57) video4_image_uncrop_nhd_pane

0x5c8f,	// (0x000aaaac) video4_image_uncrop_vga_pane_ParamLimits

0x5c8f,	// (0x000aaaac) video4_image_uncrop_vga_pane

0x95ad,	// (0x000ae3ca) bg_tb_trans_pane_cp07

0xa06a,	// (0x000aee87) vid4_indicators_pane_g1

0xa07e,	// (0x000aee9b) vid4_indicators_pane_g2

0xa092,	// (0x000aeeaf) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x000b472c) vid4_indicators_pane_g

0xa0bf,	// (0x000aeedc) vid4_indicators_pane_t1

0x5e4e,	// (0x000aac6b) cam4_autofocus_pane_g1

0x5e56,	// (0x000aac73) cam4_autofocus_pane_g2

0x5e5e,	// (0x000aac7b) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x000b4737) cam4_autofocus_pane_g

0x5e66,	// (0x000aac83) cam4_autofocus_pane_g3_copy1

0x5742,	// (0x000aa55f) video_down_pane_cp_t1

0x5750,	// (0x000aa56d) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x000b46b3) video_down_pane_cp_t

0x95ad,	// (0x000ae3ca) popup_vitu2_window_ParamLimits

0x95ad,	// (0x000ae3ca) popup_vitu2_window

0x5e6e,	// (0x000aac8b) aid_size_cell2_itu2_ParamLimits

0x5e6e,	// (0x000aac8b) aid_size_cell2_itu2

0x5e94,	// (0x000aacb1) aid_size_cell_itu2_ParamLimits

0x5e94,	// (0x000aacb1) aid_size_cell_itu2

0x5ef0,	// (0x000aad0d) bg_popup_window_pane_cp09_ParamLimits

0x5ef0,	// (0x000aad0d) bg_popup_window_pane_cp09

0x5efe,	// (0x000aad1b) field_vitu2_entry_pane_ParamLimits

0x5efe,	// (0x000aad1b) field_vitu2_entry_pane

0x5f24,	// (0x000aad41) grid_vitu2_function_pane_ParamLimits

0x5f24,	// (0x000aad41) grid_vitu2_function_pane

0x5f75,	// (0x000aad92) grid_vitu2_itu_pane_ParamLimits

0x5f75,	// (0x000aad92) grid_vitu2_itu_pane

0x6006,	// (0x000aae23) cell_vitu2_itu_pane_ParamLimits

0x6006,	// (0x000aae23) cell_vitu2_itu_pane

0x602a,	// (0x000aae47) cell_vitu2_function_pane_ParamLimits

0x602a,	// (0x000aae47) cell_vitu2_function_pane

0xc66d,	// (0x000b148a) bg_popup_call_pane_cp08_ParamLimits

0xc66d,	// (0x000b148a) bg_popup_call_pane_cp08

0xc686,	// (0x000b14a3) field_vitu2_entry_pane_g1

0xc692,	// (0x000b14af) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x000b473e) field_vitu2_entry_pane_g

0x6069,	// (0x000aae86) field_vitu2_entry_pane_t1_ParamLimits

0x6069,	// (0x000aae86) field_vitu2_entry_pane_t1

0xc6ac,	// (0x000b14c9) field_vitu2_entry_pane_t2_ParamLimits

0xc6ac,	// (0x000b14c9) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x000b4745) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x000b4745) field_vitu2_entry_pane_t

0x6098,	// (0x000aaeb5) bg_button_pane_cp010_ParamLimits

0x6098,	// (0x000aaeb5) bg_button_pane_cp010

0x60a6,	// (0x000aaec3) cell_vitu2_itu_pane_g1

0x60c4,	// (0x000aaee1) cell_vitu2_itu_pane_t1_ParamLimits

0x60c4,	// (0x000aaee1) cell_vitu2_itu_pane_t1

0x01b7,	// (0x000a4fd4) cell_vitu2_itu_pane_t2_ParamLimits

0x01b7,	// (0x000a4fd4) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x000b474f) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x000b474f) cell_vitu2_itu_pane_t

0x95ad,	// (0x000ae3ca) bg_button_pane_cp011

0x612a,	// (0x000aaf47) cell_vitu2_function_pane_g1

0x95bb,	// (0x000ae3d8) main_myfav_hc_pane

0x5af7,	// (0x000aa914) popup_image3_note_pane_ParamLimits

0x5af7,	// (0x000aa914) popup_image3_note_pane

0x5b13,	// (0x000aa930) popup_image3_tool_bar_pane_ParamLimits

0x5b13,	// (0x000aa930) popup_image3_tool_bar_pane

0x023b,	// (0x000a5058) cell_vitu2_itu_pane_t3_ParamLimits

0x023b,	// (0x000a5058) cell_vitu2_itu_pane_t3

0xd4ca,	// (0x000b22e7) bg_popup_trans_pane

0xc6d1,	// (0x000b14ee) grid_image3_tool_bar_pane

0xc6db,	// (0x000b14f8) bg_popup_trans_pane_g1

0x96ac,	// (0x000ae4c9) bg_popup_trans_pane_g2

0xc6e3,	// (0x000b1500) bg_popup_trans_pane_g3

0xc6eb,	// (0x000b1508) bg_popup_trans_pane_g4

0xc6f3,	// (0x000b1510) bg_popup_trans_pane_g5

0xc6fb,	// (0x000b1518) bg_popup_trans_pane_g6

0xc703,	// (0x000b1520) bg_popup_trans_pane_g7

0xc70b,	// (0x000b1528) bg_popup_trans_pane_g8

0x968c,	// (0x000ae4a9) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x000b4756) bg_popup_trans_pane_g

0xc713,	// (0x000b1530) cell_image3_tool_bar_pane_ParamLimits

0xc713,	// (0x000b1530) cell_image3_tool_bar_pane

0xbbef,	// (0x000b0a0c) cell_image3_tool_bar_pane_g1

0xd4ca,	// (0x000b22e7) bg_popup_trans_pane_cp1

0xc727,	// (0x000b1544) popup_image3_note_pane_t1

0xc735,	// (0x000b1552) popup_image3_note_pane_t2

0xc743,	// (0x000b1560) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x000b4769) popup_image3_note_pane_t

0xc751,	// (0x000b156e) popup_image3_note_pane_t3_copy1

0x613e,	// (0x000aaf5b) bg_myfav_hc_instruction_pane_ParamLimits

0x613e,	// (0x000aaf5b) bg_myfav_hc_instruction_pane

0x6154,	// (0x000aaf71) cell_myfav_contact_pane_ParamLimits

0x6154,	// (0x000aaf71) cell_myfav_contact_pane

0x6172,	// (0x000aaf8f) cell_myfav_contact_pane_cp1_ParamLimits

0x6172,	// (0x000aaf8f) cell_myfav_contact_pane_cp1

0x618a,	// (0x000aafa7) cell_myfav_contact_pane_cp2_ParamLimits

0x618a,	// (0x000aafa7) cell_myfav_contact_pane_cp2

0x61a2,	// (0x000aafbf) cell_myfav_contact_pane_cp3_ParamLimits

0x61a2,	// (0x000aafbf) cell_myfav_contact_pane_cp3

0x61b9,	// (0x000aafd6) cell_myfav_contact_pane_cp4_ParamLimits

0x61b9,	// (0x000aafd6) cell_myfav_contact_pane_cp4

0x61d1,	// (0x000aafee) cell_myfav_contact_pane_cp5_ParamLimits

0x61d1,	// (0x000aafee) cell_myfav_contact_pane_cp5

0x61e5,	// (0x000ab002) cell_myfav_contact_pane_cp6_ParamLimits

0x61e5,	// (0x000ab002) cell_myfav_contact_pane_cp6

0x61fb,	// (0x000ab018) cell_myfav_contact_pane_cp7_ParamLimits

0x61fb,	// (0x000ab018) cell_myfav_contact_pane_cp7

0xc75f,	// (0x000b157c) listscroll_gen_pane_cp05

0x6215,	// (0x000ab032) main_myfav_hc_pane_g1_ParamLimits

0x6215,	// (0x000ab032) main_myfav_hc_pane_g1

0x622f,	// (0x000ab04c) main_myfav_hc_pane_g2_ParamLimits

0x622f,	// (0x000ab04c) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x000b4770) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x000b4770) main_myfav_hc_pane_g

0x6261,	// (0x000ab07e) main_myfav_hc_pane_t1_ParamLimits

0x6261,	// (0x000ab07e) main_myfav_hc_pane_t1

0xc768,	// (0x000b1585) main_myfav_hc_pane_t2_ParamLimits

0xc768,	// (0x000b1585) main_myfav_hc_pane_t2

0xc77a,	// (0x000b1597) main_myfav_hc_pane_t3_ParamLimits

0xc77a,	// (0x000b1597) main_myfav_hc_pane_t3

0x6278,	// (0x000ab095) main_myfav_hc_pane_t4_ParamLimits

0x6278,	// (0x000ab095) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x000b4777) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x000b4777) main_myfav_hc_pane_t

0xbbef,	// (0x000b0a0c) bg_myfav_hc_instruction_pane_g1

0xc78c,	// (0x000b15a9) cell_myfav_contact_pane_g1_ParamLimits

0xc78c,	// (0x000b15a9) cell_myfav_contact_pane_g1

0xc78c,	// (0x000b15a9) cell_myfav_contact_pane_g2_ParamLimits

0xc78c,	// (0x000b15a9) cell_myfav_contact_pane_g2

0xc798,	// (0x000b15b5) cell_myfav_contact_pane_g3_ParamLimits

0xc798,	// (0x000b15b5) cell_myfav_contact_pane_g3

0xbf28,	// (0x000b0d45) cell_myfav_contact_pane_g4_ParamLimits

0xbf28,	// (0x000b0d45) cell_myfav_contact_pane_g4

0xc7a5,	// (0x000b15c2) cell_myfav_contact_pane_g5_ParamLimits

0xc7a5,	// (0x000b15c2) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x000b4782) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x000b4782) cell_myfav_contact_pane_g

0x6249,	// (0x000ab066) main_myfav_hc_pane_g3_ParamLimits

0x6249,	// (0x000ab066) main_myfav_hc_pane_g3

0x042e,	// (0x000a524b) popup_adpt_find_window

0x62a0,	// (0x000ab0bd) afind_page_pane_ParamLimits

0x62a0,	// (0x000ab0bd) afind_page_pane

0x62b5,	// (0x000ab0d2) aid_size_cell_afind_ParamLimits

0x62b5,	// (0x000ab0d2) aid_size_cell_afind

0x62d3,	// (0x000ab0f0) bg_popup_sub_pane_cp09_ParamLimits

0x62d3,	// (0x000ab0f0) bg_popup_sub_pane_cp09

0x62e0,	// (0x000ab0fd) find_pane_cp01_ParamLimits

0x62e0,	// (0x000ab0fd) find_pane_cp01

0xc7b1,	// (0x000b15ce) grid_afind_control_pane_ParamLimits

0xc7b1,	// (0x000b15ce) grid_afind_control_pane

0x62ed,	// (0x000ab10a) grid_afind_pane_ParamLimits

0x62ed,	// (0x000ab10a) grid_afind_pane

0x630c,	// (0x000ab129) cell_afind_pane_ParamLimits

0x630c,	// (0x000ab129) cell_afind_pane

0xbbef,	// (0x000b0a0c) afind_page_pane_g1

0x636d,	// (0x000ab18a) afind_page_pane_g2

0x6376,	// (0x000ab193) afind_page_pane_g3

0x0002,

0xf970,	// (0x000b478d) afind_page_pane_g

0x637f,	// (0x000ab19c) afind_page_pane_t1

0xc7c5,	// (0x000b15e2) cell_afind_grid_control_pane_ParamLimits

0xc7c5,	// (0x000b15e2) cell_afind_grid_control_pane

0xc56e,	// (0x000b138b) bg_button_pane_cp69_ParamLimits

0xc56e,	// (0x000b138b) bg_button_pane_cp69

0x639f,	// (0x000ab1bc) cell_afind_pane_g1_ParamLimits

0x639f,	// (0x000ab1bc) cell_afind_pane_g1

0x63ac,	// (0x000ab1c9) cell_afind_pane_t1_ParamLimits

0x63ac,	// (0x000ab1c9) cell_afind_pane_t1

0xef04,	// (0x000b3d21) bg_button_pane_cp72

0xc7d4,	// (0x000b15f1) cell_afind_grid_control_pane_g1

0x3410,	// (0x000a822d) aid_image_placing_area_ParamLimits

0x3410,	// (0x000a822d) aid_image_placing_area

0xc23c,	// (0x000b1059) field_vitu_entry_pane_g1_ParamLimits

0xc23c,	// (0x000b1059) field_vitu_entry_pane_g1

0xc248,	// (0x000b1065) field_vitu_entry_pane_g2_ParamLimits

0xc248,	// (0x000b1065) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x000b463e) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x000b463e) field_vitu_entry_pane_g

0x5543,	// (0x000aa360) cell_vitu_itu_pane_g1_ParamLimits

0x5593,	// (0x000aa3b0) cell_vitu_itu_pane_t3_ParamLimits

0x5593,	// (0x000aa3b0) cell_vitu_itu_pane_t3

0xc51e,	// (0x000b133b) mp4_progress_pane_t1_ParamLimits

0xc537,	// (0x000b1354) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x000b46d3) mp4_progress_pane_t_ParamLimits

0xc550,	// (0x000b136d) mup_progress_pane_cp04_ParamLimits

0x628c,	// (0x000ab0a9) main_myfav_hc_pane_t5_ParamLimits

0x628c,	// (0x000ab0a9) main_myfav_hc_pane_t5

0x02ef,	// (0x000a510c) aid_zoom_text_primary

0x042e,	// (0x000a524b) popup_adpt_find_window_ParamLimits

0x95ad,	// (0x000ae3ca) main_cam_set_pane

0x5cc0,	// (0x000aaadd) cam4_zoom_pane_ParamLimits

0x5cc0,	// (0x000aaadd) cam4_zoom_pane

0x63be,	// (0x000ab1db) main_cam_set_pane_g1_ParamLimits

0x63be,	// (0x000ab1db) main_cam_set_pane_g1

0x63cc,	// (0x000ab1e9) main_cam_set_pane_g2_ParamLimits

0x63cc,	// (0x000ab1e9) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x000b4794) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x000b4794) main_cam_set_pane_g

0x63ed,	// (0x000ab20a) main_cam_set_pane_t1_ParamLimits

0x63ed,	// (0x000ab20a) main_cam_set_pane_t1

0x6408,	// (0x000ab225) main_cset_listscroll_pane_ParamLimits

0x6408,	// (0x000ab225) main_cset_listscroll_pane

0x6428,	// (0x000ab245) main_cset_slider_pane_ParamLimits

0x6428,	// (0x000ab245) main_cset_slider_pane

0xc7e5,	// (0x000b1602) main_cset_list_pane_ParamLimits

0xc7e5,	// (0x000b1602) main_cset_list_pane

0xc7f5,	// (0x000b1612) scroll_pane_cp028

0x644e,	// (0x000ab26b) aid_area_touch_slider

0x646a,	// (0x000ab287) cset_slider_pane

0x6494,	// (0x000ab2b1) main_cset_slider_pane_g1

0x64a9,	// (0x000ab2c6) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x000b4799) main_cset_slider_pane_g

0xc82e,	// (0x000b164b) main_cset_slider_pane_t1

0x6565,	// (0x000ab382) main_cset_slider_pane_t2

0x657f,	// (0x000ab39c) main_cset_slider_pane_t3

0x6599,	// (0x000ab3b6) main_cset_slider_pane_t4

0x65b3,	// (0x000ab3d0) main_cset_slider_pane_t5

0x65cd,	// (0x000ab3ea) main_cset_slider_pane_t6

0x65e2,	// (0x000ab3ff) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x000b47be) main_cset_slider_pane_t

0x66e6,	// (0x000ab503) cset_list_set_pane_ParamLimits

0x66e6,	// (0x000ab503) cset_list_set_pane

0x66f9,	// (0x000ab516) aid_position_infowindow_above

0x6701,	// (0x000ab51e) aid_position_infowindow_below

0x6709,	// (0x000ab526) cset_list_set_pane_g1_ParamLimits

0x6709,	// (0x000ab526) cset_list_set_pane_g1

0xc8e0,	// (0x000b16fd) cset_list_set_pane_g3_ParamLimits

0xc8e0,	// (0x000b16fd) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x000b47dd) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x000b47dd) cset_list_set_pane_g

0xc8ef,	// (0x000b170c) cset_list_set_pane_t1_ParamLimits

0xc8ef,	// (0x000b170c) cset_list_set_pane_t1

0xe923,	// (0x000b3740) list_highlight_pane_cp021_ParamLimits

0xe923,	// (0x000b3740) list_highlight_pane_cp021

0xa4f3,	// (0x000af310) cset_slider_pane_g1

0xa505,	// (0x000af322) cset_slider_pane_g2

0xa4fc,	// (0x000af319) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x000b47e2) cset_slider_pane_g

0xa0d6,	// (0x000aeef3) aid_area_touch_cam4_zoom

0xa0de,	// (0x000aeefb) cam4_zoom_cont_pane

0xa0e6,	// (0x000aef03) cam4_zoom_pane_g1

0xa0ee,	// (0x000aef0b) cam4_zoom_pane_g2

0x6715,	// (0x000ab532) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x000b47e9) cam4_zoom_pane_g

0xa0f6,	// (0x000aef13) cam4_zoom_cont_pane_g1

0xa0ff,	// (0x000aef1c) cam4_zoom_cont_pane_g2

0xa108,	// (0x000aef25) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x000b47f0) cam4_zoom_cont_pane_g

0x5b80,	// (0x000aa99d) call4_image_pane_ParamLimits

0x5b80,	// (0x000aa99d) call4_image_pane

0xc57a,	// (0x000b1397) call4_windows_conf_pane_ParamLimits

0xc5b9,	// (0x000b13d6) popup_call4_audio_in_window_ParamLimits

0xc5b9,	// (0x000b13d6) popup_call4_audio_in_window

0xd4ca,	// (0x000b22e7) bg_popup_call2_act_pane_cp02

0xc62f,	// (0x000b144c) call4_list_conf_pane

0xbbef,	// (0x000b0a0c) call4_image_pane_g1

0xbbef,	// (0x000b0a0c) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x000b4504) call4_image_pane_g

0xc904,	// (0x000b1721) list_single_graphic_popup_conf4_pane_ParamLimits

0xc904,	// (0x000b1721) list_single_graphic_popup_conf4_pane

0xd4ca,	// (0x000b22e7) list_highlight_pane_cp022

0xc917,	// (0x000b1734) list_single_graphic_popup_conf4_pane_g1

0xa1da,	// (0x000aeff7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x000b47f7) list_single_graphic_popup_conf4_pane_g

0xc91f,	// (0x000b173c) list_single_graphic_popup_conf4_pane_t1

0x1615,	// (0x000a6432) popup_vtel_slider_window_ParamLimits

0x1615,	// (0x000a6432) popup_vtel_slider_window

0xc55c,	// (0x000b1379) dialer2_ne_pane_t2_ParamLimits

0xc55c,	// (0x000b1379) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x000b46d8) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x000b46d8) dialer2_ne_pane_t

0xb9d2,	// (0x000b07ef) bg_popup_sub_pane_cp010_ParamLimits

0xb9d2,	// (0x000b07ef) bg_popup_sub_pane_cp010

0x671d,	// (0x000ab53a) popup_vtel_slider_window_g1_ParamLimits

0x671d,	// (0x000ab53a) popup_vtel_slider_window_g1

0x6730,	// (0x000ab54d) popup_vtel_slider_window_g2_ParamLimits

0x6730,	// (0x000ab54d) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x000b47fc) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x000b47fc) popup_vtel_slider_window_g

0x6786,	// (0x000ab5a3) vtel_slider_pane_ParamLimits

0x6786,	// (0x000ab5a3) vtel_slider_pane

0x67a8,	// (0x000ab5c5) vtel_slider_pane_g1_ParamLimits

0x67a8,	// (0x000ab5c5) vtel_slider_pane_g1

0x67bc,	// (0x000ab5d9) vtel_slider_pane_g2_ParamLimits

0x67bc,	// (0x000ab5d9) vtel_slider_pane_g2

0x67d4,	// (0x000ab5f1) vtel_slider_pane_g3_ParamLimits

0x67d4,	// (0x000ab5f1) vtel_slider_pane_g3

0x67a8,	// (0x000ab5c5) vtel_slider_pane_g4_ParamLimits

0x67a8,	// (0x000ab5c5) vtel_slider_pane_g4

0x67ea,	// (0x000ab607) vtel_slider_pane_g5_ParamLimits

0x67ea,	// (0x000ab607) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x000b4805) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x000b4805) vtel_slider_pane_g

0x95bb,	// (0x000ae3d8) main_gallery2_pane

0x5ec0,	// (0x000aacdd) aid_size_row_itut2_dropdow_list_ParamLimits

0x5ec0,	// (0x000aacdd) aid_size_row_itut2_dropdow_list

0x5f4c,	// (0x000aad69) grid_vitu2_function_top_pane_ParamLimits

0x5f4c,	// (0x000aad69) grid_vitu2_function_top_pane

0x5fb1,	// (0x000aadce) popup_vitu2_dropdown_list_window_ParamLimits

0x5fb1,	// (0x000aadce) popup_vitu2_dropdown_list_window

0x5fda,	// (0x000aadf7) popup_vitu2_match_list_window

0x680e,	// (0x000ab62b) cell_vitu2_function_top_pane_ParamLimits

0x680e,	// (0x000ab62b) cell_vitu2_function_top_pane

0x682c,	// (0x000ab649) cell_vitu2_function_top_pane_cp01_ParamLimits

0x682c,	// (0x000ab649) cell_vitu2_function_top_pane_cp01

0x684a,	// (0x000ab667) cell_vitu2_function_top_wide_pane_ParamLimits

0x684a,	// (0x000ab667) cell_vitu2_function_top_wide_pane

0x95ad,	// (0x000ae3ca) bg_button_pane_cp012

0x6868,	// (0x000ab685) cell_vitu2_function_top_pane_g1

0xa111,	// (0x000aef2e) bg_button_pane_cp013_ParamLimits

0xa111,	// (0x000aef2e) bg_button_pane_cp013

0x687c,	// (0x000ab699) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x687c,	// (0x000ab699) cell_vitu2_function_top_wide_pane_g1

0x95ad,	// (0x000ae3ca) bg_popup_sub_pane_cp20

0x6894,	// (0x000ab6b1) list_vitu2_match_list_pane

0xc6db,	// (0x000b14f8) bg_popup_sub_pane_cp20_g1

0xc6e3,	// (0x000b1500) bg_popup_sub_pane_cp20_g2

0x96ac,	// (0x000ae4c9) bg_popup_sub_pane_cp20_g3

0xc6eb,	// (0x000b1508) bg_popup_sub_pane_cp20_g4

0x968c,	// (0x000ae4a9) bg_popup_sub_pane_cp20_g5

0xc935,	// (0x000b1752) bg_popup_sub_pane_cp20_g6

0xc6fb,	// (0x000b1518) bg_popup_sub_pane_cp20_g7

0xc703,	// (0x000b1520) bg_popup_sub_pane_cp20_g8

0xc70b,	// (0x000b1528) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x000b4810) bg_popup_sub_pane_cp20_g

0xa12d,	// (0x000aef4a) list_vitu2_match_list_item_pane_ParamLimits

0xa12d,	// (0x000aef4a) list_vitu2_match_list_item_pane

0xa13f,	// (0x000aef5c) list_vitu2_match_list_item_pane_t1

0x95bb,	// (0x000ae3d8) bg_popup_sub_pane_cp21

0xa14d,	// (0x000aef6a) grid_vitu2_dropdown_list_pane

0x68ff,	// (0x000ab71c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x68ff,	// (0x000ab71c) cell_vitu2_dropdown_list_char_pane

0x6920,	// (0x000ab73d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6920,	// (0x000ab73d) cell_vitu2_dropdown_list_ctrl_pane

0xc93d,	// (0x000b175a) cell_vitu2_dropdown_list_char_pane_g1

0xc946,	// (0x000b1763) cell_vitu2_dropdown_list_char_pane_g2

0xc94f,	// (0x000b176c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x000b482d) cell_vitu2_dropdown_list_char_pane_g

0x694c,	// (0x000ab769) cell_vitu2_dropdown_list_char_pane_t1

0x695a,	// (0x000ab777) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x695a,	// (0x000ab777) cell_vitu2_dropdown_list_ctrl_pane_g1

0x696a,	// (0x000ab787) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x696a,	// (0x000ab787) cell_vitu2_dropdown_list_ctrl_pane_g2

0x697b,	// (0x000ab798) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x697b,	// (0x000ab798) cell_vitu2_dropdown_list_ctrl_pane_g3

0x698b,	// (0x000ab7a8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x698b,	// (0x000ab7a8) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9ffb,	// (0x000aee18) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9ffb,	// (0x000aee18) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x000b4834) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x000b4834) cell_vitu2_dropdown_list_ctrl_pane_g

0x69a7,	// (0x000ab7c4) aid_size_cell_gallery2_ParamLimits

0x69a7,	// (0x000ab7c4) aid_size_cell_gallery2

0x69bd,	// (0x000ab7da) grid_gallery2_pane_ParamLimits

0x69bd,	// (0x000ab7da) grid_gallery2_pane

0x69d1,	// (0x000ab7ee) scroll_pane_cp029_ParamLimits

0x69d1,	// (0x000ab7ee) scroll_pane_cp029

0x69dd,	// (0x000ab7fa) cell_gallery2_pane_ParamLimits

0x69dd,	// (0x000ab7fa) cell_gallery2_pane

0xc958,	// (0x000b1775) cell_gallery2_pane_g2

0x6a13,	// (0x000ab830) cell_gallery2_pane_g3

0xc962,	// (0x000b177f) cell_gallery2_pane_g4

0xc96a,	// (0x000b1787) cell_gallery2_pane_g5

0xa3bd,	// (0x000af1da) grid_highlight_pane_cp10

0x5fda,	// (0x000aadf7) popup_vitu2_match_list_window_ParamLimits

0x5fef,	// (0x000aae0c) popup_vitu2_query_window_ParamLimits

0x5fef,	// (0x000aae0c) popup_vitu2_query_window

0x95bb,	// (0x000ae3d8) bg_vitu2_candi_button_pane

0xc93d,	// (0x000b175a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xc946,	// (0x000b1763) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xc94f,	// (0x000b176c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6a1b,	// (0x000ab838) bg_button_pane_cp015

0x6a2f,	// (0x000ab84c) bg_button_pane_cp016

0x6a42,	// (0x000ab85f) bg_button_pane_cp017

0xb7e5,	// (0x000b0602) bg_popup_sub_pane_cp22

0xc972,	// (0x000b178f) popup_vitu2_query_window_g1

0x6a87,	// (0x000ab8a4) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x000b483f) popup_vitu2_query_window_g

0x6aa6,	// (0x000ab8c3) popup_vitu2_query_window_t1_ParamLimits

0x6aa6,	// (0x000ab8c3) popup_vitu2_query_window_t1

0x6adb,	// (0x000ab8f8) popup_vitu2_query_window_t2_ParamLimits

0x6adb,	// (0x000ab8f8) popup_vitu2_query_window_t2

0x6aed,	// (0x000ab90a) popup_vitu2_query_window_t3_ParamLimits

0x6aed,	// (0x000ab90a) popup_vitu2_query_window_t3

0x6b15,	// (0x000ab932) popup_vitu2_query_window_t4_ParamLimits

0x6b15,	// (0x000ab932) popup_vitu2_query_window_t4

0x6b36,	// (0x000ab953) popup_vitu2_query_window_t5_ParamLimits

0x6b36,	// (0x000ab953) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x000b4846) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x000b4846) popup_vitu2_query_window_t

0xc7dd,	// (0x000b15fa) main_cset_text_pane

0x644e,	// (0x000ab26b) aid_area_touch_slider_ParamLimits

0x646a,	// (0x000ab287) cset_slider_pane_ParamLimits

0x6494,	// (0x000ab2b1) main_cset_slider_pane_g1_ParamLimits

0x64a9,	// (0x000ab2c6) main_cset_slider_pane_g2_ParamLimits

0xc7fe,	// (0x000b161b) main_cset_slider_pane_g3_ParamLimits

0xc7fe,	// (0x000b161b) main_cset_slider_pane_g3

0x64be,	// (0x000ab2db) main_cset_slider_pane_g4_ParamLimits

0x64be,	// (0x000ab2db) main_cset_slider_pane_g4

0x64cd,	// (0x000ab2ea) main_cset_slider_pane_g5_ParamLimits

0x64cd,	// (0x000ab2ea) main_cset_slider_pane_g5

0x64d9,	// (0x000ab2f6) main_cset_slider_pane_g6_ParamLimits

0x64d9,	// (0x000ab2f6) main_cset_slider_pane_g6

0xf97c,	// (0x000b4799) main_cset_slider_pane_g_ParamLimits

0xc82e,	// (0x000b164b) main_cset_slider_pane_t1_ParamLimits

0x6565,	// (0x000ab382) main_cset_slider_pane_t2_ParamLimits

0x657f,	// (0x000ab39c) main_cset_slider_pane_t3_ParamLimits

0x6599,	// (0x000ab3b6) main_cset_slider_pane_t4_ParamLimits

0x65b3,	// (0x000ab3d0) main_cset_slider_pane_t5_ParamLimits

0x65cd,	// (0x000ab3ea) main_cset_slider_pane_t6_ParamLimits

0x65e2,	// (0x000ab3ff) main_cset_slider_pane_t7_ParamLimits

0x660c,	// (0x000ab429) main_cset_slider_pane_t8_ParamLimits

0x660c,	// (0x000ab429) main_cset_slider_pane_t8

0x6634,	// (0x000ab451) main_cset_slider_pane_t9_ParamLimits

0x6634,	// (0x000ab451) main_cset_slider_pane_t9

0x665c,	// (0x000ab479) main_cset_slider_pane_t10_ParamLimits

0x665c,	// (0x000ab479) main_cset_slider_pane_t10

0x6684,	// (0x000ab4a1) main_cset_slider_pane_t11_ParamLimits

0x6684,	// (0x000ab4a1) main_cset_slider_pane_t11

0x66ac,	// (0x000ab4c9) main_cset_slider_pane_t12_ParamLimits

0x66ac,	// (0x000ab4c9) main_cset_slider_pane_t12

0x66c9,	// (0x000ab4e6) main_cset_slider_pane_t13_ParamLimits

0x66c9,	// (0x000ab4e6) main_cset_slider_pane_t13

0xf9a1,	// (0x000b47be) main_cset_slider_pane_t_ParamLimits

0xd4ca,	// (0x000b22e7) bg_popup_sub_pane_cp011

0xc97e,	// (0x000b179b) main_cset_text_pane_g1

0xc986,	// (0x000b17a3) main_cset_text_pane_t1

0xc994,	// (0x000b17b1) main_cset_text_pane_t2

0xc9a2,	// (0x000b17bf) main_cset_text_pane_t3

0xc9b0,	// (0x000b17cd) main_cset_text_pane_t4

0xc9be,	// (0x000b17db) main_cset_text_pane_t5

0xc9cc,	// (0x000b17e9) main_cset_text_pane_t6

0xc9da,	// (0x000b17f7) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x000b4855) main_cset_text_pane_t

0x95bb,	// (0x000ae3d8) main_cam4_burst_pane

0x95bb,	// (0x000ae3d8) main_cam5_pane

0x638d,	// (0x000ab1aa) bg_button_pane_cp019

0x6396,	// (0x000ab1b3) bg_button_pane_cp020

0xc80a,	// (0x000b1627) main_cset_slider_pane_g7_ParamLimits

0xc80a,	// (0x000b1627) main_cset_slider_pane_g7

0xc816,	// (0x000b1633) main_cset_slider_pane_g8_ParamLimits

0xc816,	// (0x000b1633) main_cset_slider_pane_g8

0x64ed,	// (0x000ab30a) main_cset_slider_pane_g9_ParamLimits

0x64ed,	// (0x000ab30a) main_cset_slider_pane_g9

0x64f9,	// (0x000ab316) main_cset_slider_pane_g10_ParamLimits

0x64f9,	// (0x000ab316) main_cset_slider_pane_g10

0x6505,	// (0x000ab322) main_cset_slider_pane_g11_ParamLimits

0x6505,	// (0x000ab322) main_cset_slider_pane_g11

0x6511,	// (0x000ab32e) main_cset_slider_pane_g12_ParamLimits

0x6511,	// (0x000ab32e) main_cset_slider_pane_g12

0x651d,	// (0x000ab33a) main_cset_slider_pane_g13_ParamLimits

0x651d,	// (0x000ab33a) main_cset_slider_pane_g13

0x6529,	// (0x000ab346) main_cset_slider_pane_g14_ParamLimits

0x6529,	// (0x000ab346) main_cset_slider_pane_g14

0x6535,	// (0x000ab352) main_cset_slider_pane_g15_ParamLimits

0x6535,	// (0x000ab352) main_cset_slider_pane_g15

0xc86e,	// (0x000b168b) main_cset_slider_pane_t14_ParamLimits

0xc86e,	// (0x000b168b) main_cset_slider_pane_t14

0xc8a7,	// (0x000b16c4) main_cset_slider_pane_t15_ParamLimits

0xc8a7,	// (0x000b16c4) main_cset_slider_pane_t15

0x6bad,	// (0x000ab9ca) aid_cam4_burst_size_cell_ParamLimits

0x6bad,	// (0x000ab9ca) aid_cam4_burst_size_cell

0x6bcd,	// (0x000ab9ea) grid_cam4_burst_pane_ParamLimits

0x6bcd,	// (0x000ab9ea) grid_cam4_burst_pane

0x6c05,	// (0x000aba22) linegrid_cam4_burst_pane_ParamLimits

0x6c05,	// (0x000aba22) linegrid_cam4_burst_pane

0xc9e8,	// (0x000b1805) scroll_pane_cp30_ParamLimits

0xc9e8,	// (0x000b1805) scroll_pane_cp30

0x6c2b,	// (0x000aba48) cell_cam4_burst_pane_ParamLimits

0x6c2b,	// (0x000aba48) cell_cam4_burst_pane

0xc9f4,	// (0x000b1811) linegrid_cam4_burst_pane_g1_ParamLimits

0xc9f4,	// (0x000b1811) linegrid_cam4_burst_pane_g1

0x6c78,	// (0x000aba95) linegrid_cam4_burst_pane_g2_ParamLimits

0x6c78,	// (0x000aba95) linegrid_cam4_burst_pane_g2

0xca01,	// (0x000b181e) linegrid_cam4_burst_pane_g3_ParamLimits

0xca01,	// (0x000b181e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x000b4864) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x000b4864) linegrid_cam4_burst_pane_g

0x6c89,	// (0x000abaa6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6c89,	// (0x000abaa6) linegrid_cam4_burst_pane_g3_copy1

0xca0e,	// (0x000b182b) linegrid_cam4_burst_pane_g4_ParamLimits

0xca0e,	// (0x000b182b) linegrid_cam4_burst_pane_g4

0x6ca3,	// (0x000abac0) linegrid_cam4_burst_pane_g5_ParamLimits

0x6ca3,	// (0x000abac0) linegrid_cam4_burst_pane_g5

0x6cb4,	// (0x000abad1) linegrid_cam4_burst_pane_g6_ParamLimits

0x6cb4,	// (0x000abad1) linegrid_cam4_burst_pane_g6

0xca1b,	// (0x000b1838) linegrid_cam4_burst_pane_g7_ParamLimits

0xca1b,	// (0x000b1838) linegrid_cam4_burst_pane_g7

0x6ccb,	// (0x000abae8) cell_cam4_burst_pane_g1

0xca34,	// (0x000b1851) main_cam5_pane_t1_ParamLimits

0xca34,	// (0x000b1851) main_cam5_pane_t1

0xca46,	// (0x000b1863) main_cam5_pane_t2_ParamLimits

0xca46,	// (0x000b1863) main_cam5_pane_t2

0xca58,	// (0x000b1875) main_cam5_pane_t3_ParamLimits

0xca58,	// (0x000b1875) main_cam5_pane_t3

0xca6a,	// (0x000b1887) main_cam5_pane_t4_ParamLimits

0xca6a,	// (0x000b1887) main_cam5_pane_t4

0xca82,	// (0x000b189f) main_cam5_pane_t5_ParamLimits

0xca82,	// (0x000b189f) main_cam5_pane_t5

0xca96,	// (0x000b18b3) main_cam5_pane_t6_ParamLimits

0xca96,	// (0x000b18b3) main_cam5_pane_t6

0xcaaa,	// (0x000b18c7) main_cam5_pane_t7_ParamLimits

0xcaaa,	// (0x000b18c7) main_cam5_pane_t7

0xcabc,	// (0x000b18d9) main_cam5_pane_t8_ParamLimits

0xcabc,	// (0x000b18d9) main_cam5_pane_t8

0xcad8,	// (0x000b18f5) main_cam5_pane_t9_ParamLimits

0xcad8,	// (0x000b18f5) main_cam5_pane_t9

0xcaea,	// (0x000b1907) main_cam5_pane_t10_ParamLimits

0xcaea,	// (0x000b1907) main_cam5_pane_t10

0xcafc,	// (0x000b1919) main_cam5_pane_t11_ParamLimits

0xcafc,	// (0x000b1919) main_cam5_pane_t11

0xcb0e,	// (0x000b192b) main_cam5_pane_t12_ParamLimits

0xcb0e,	// (0x000b192b) main_cam5_pane_t12

0xcb23,	// (0x000b1940) main_cam5_pane_t13_ParamLimits

0xcb23,	// (0x000b1940) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x000b4870) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x000b4870) main_cam5_pane_t

0x04b0,	// (0x000a52cd) popup_scut_keymap_window_ParamLimits

0x04b0,	// (0x000a52cd) popup_scut_keymap_window

0x6ce0,	// (0x000abafd) aid_size_cell_brow_shortcut

0xa3bd,	// (0x000af1da) bg_popup_window_pane_cp010

0x6cec,	// (0x000abb09) grid_scut_pane

0x6cf8,	// (0x000abb15) cell_scut_pane_ParamLimits

0x6cf8,	// (0x000abb15) cell_scut_pane

0x6d0f,	// (0x000abb2c) cell_scut_pane_g1

0xcb40,	// (0x000b195d) cell_scut_pane_t1

0xcb4f,	// (0x000b196c) cell_scut_pane_t2

0x6d18,	// (0x000abb35) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x000b488b) cell_scut_pane_t

0x4a2c,	// (0x000a9849) main_mup3_pane_g8_ParamLimits

0x4a2c,	// (0x000a9849) main_mup3_pane_g8

0x5ed8,	// (0x000aacf5) area_vitu2_query_pane_ParamLimits

0x5ed8,	// (0x000aacf5) area_vitu2_query_pane

0x6a55,	// (0x000ab872) input_focus_pane_cp08

0xcb5e,	// (0x000b197b) area_vitu2_query_pane_g1

0x6d26,	// (0x000abb43) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x000b4892) area_vitu2_query_pane_g

0x6d37,	// (0x000abb54) area_vitu2_query_pane_t1_ParamLimits

0x6d37,	// (0x000abb54) area_vitu2_query_pane_t1

0x6d4b,	// (0x000abb68) area_vitu2_query_pane_t2_ParamLimits

0x6d4b,	// (0x000abb68) area_vitu2_query_pane_t2

0x6d5f,	// (0x000abb7c) area_vitu2_query_pane_t3_ParamLimits

0x6d5f,	// (0x000abb7c) area_vitu2_query_pane_t3

0xcb6a,	// (0x000b1987) area_vitu2_query_pane_t4_ParamLimits

0xcb6a,	// (0x000b1987) area_vitu2_query_pane_t4

0xcb92,	// (0x000b19af) area_vitu2_query_pane_t5_ParamLimits

0xcb92,	// (0x000b19af) area_vitu2_query_pane_t5

0xcbba,	// (0x000b19d7) area_vitu2_query_pane_t6_ParamLimits

0xcbba,	// (0x000b19d7) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x000b4897) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x000b4897) area_vitu2_query_pane_t

0x6d87,	// (0x000abba4) bg_button_pane_cp018

0x6d95,	// (0x000abbb2) bg_button_pane_cp021

0x6da1,	// (0x000abbbe) bg_button_pane_cp022

0x6db2,	// (0x000abbcf) input_focus_pane_cp09

0x299b,	// (0x000a77b8) aid_size_touch_mv_arrow_left

0x29c4,	// (0x000a77e1) aid_size_touch_mv_arrow_right

0x654d,	// (0x000ab36a) main_cset_slider_pane_g16_ParamLimits

0x654d,	// (0x000ab36a) main_cset_slider_pane_g16

0x6559,	// (0x000ab376) main_cset_slider_pane_g17_ParamLimits

0x6559,	// (0x000ab376) main_cset_slider_pane_g17

0x6ccb,	// (0x000abae8) cell_cam4_burst_pane_g1_ParamLimits

0xd4ca,	// (0x000b22e7) compa_mode_pane

0x6740,	// (0x000ab55d) popup_vtel_slider_window_g3_ParamLimits

0x6740,	// (0x000ab55d) popup_vtel_slider_window_g3

0x6757,	// (0x000ab574) popup_vtel_slider_window_g4_ParamLimits

0x6757,	// (0x000ab574) popup_vtel_slider_window_g4

0x676e,	// (0x000ab58b) popup_vtel_slider_window_t1_ParamLimits

0x676e,	// (0x000ab58b) popup_vtel_slider_window_t1

0x95bb,	// (0x000ae3d8) main_cl_pane

0x9c6b,	// (0x000aea88) popup_imed_adjust2_window_ParamLimits

0xb7e5,	// (0x000b0602) bg_tb_trans_pane_cp05_ParamLimits

0xc168,	// (0x000b0f85) popup_imed_adjust2_window_g1_ParamLimits

0xc177,	// (0x000b0f94) popup_imed_adjust2_window_g2_ParamLimits

0xc177,	// (0x000b0f94) popup_imed_adjust2_window_g2

0xc183,	// (0x000b0fa0) popup_imed_adjust2_window_g3_ParamLimits

0xc183,	// (0x000b0fa0) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x000b4602) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x000b4602) popup_imed_adjust2_window_g

0xc18f,	// (0x000b0fac) popup_imed_adjust2_window_t1_ParamLimits

0xc1a7,	// (0x000b0fc4) slider_imed_adjust_pane_ParamLimits

0xc1bb,	// (0x000b0fd8) slider_imed_adjust_pane_g1_ParamLimits

0xc1cb,	// (0x000b0fe8) slider_imed_adjust_pane_g2_ParamLimits

0xc1db,	// (0x000b0ff8) slider_imed_adjust_pane_g3_ParamLimits

0xc1ec,	// (0x000b1009) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x000b4609) slider_imed_adjust_pane_g_ParamLimits

0x5c61,	// (0x000aaa7e) aid_touch_area_cam4_ParamLimits

0x5c61,	// (0x000aaa7e) aid_touch_area_cam4

0x9fdf,	// (0x000aedfc) battery_pane_cp01

0x5d30,	// (0x000aab4d) main_camera4_pane_g6_ParamLimits

0x5d30,	// (0x000aab4d) main_camera4_pane_g6

0x5d5a,	// (0x000aab77) main_camera4_pane_t2_ParamLimits

0x5d5a,	// (0x000aab77) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x000b470c) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x000b470c) main_camera4_pane_t

0x5d8f,	// (0x000aabac) aid_touch_area_vid4_ParamLimits

0x5d8f,	// (0x000aabac) aid_touch_area_vid4

0x5de3,	// (0x000aac00) main_video4_pane_g5_ParamLimits

0x5de3,	// (0x000aac00) main_video4_pane_g5

0x5e08,	// (0x000aac25) vid4_progress_pane_ParamLimits

0x5e08,	// (0x000aac25) vid4_progress_pane

0xc822,	// (0x000b163f) main_cset_slider_pane_g18_ParamLimits

0xc822,	// (0x000b163f) main_cset_slider_pane_g18

0xca28,	// (0x000b1845) cell_cam4_burst_pane_g2_ParamLimits

0xca28,	// (0x000b1845) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x000b486b) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x000b486b) cell_cam4_burst_pane_g

0xe850,	// (0x000b366d) bg_cl_pane_ParamLimits

0xe850,	// (0x000b366d) bg_cl_pane

0x6dc3,	// (0x000abbe0) cl_header_pane_ParamLimits

0x6dc3,	// (0x000abbe0) cl_header_pane

0x6dd7,	// (0x000abbf4) cl_listscroll_pane_ParamLimits

0x6dd7,	// (0x000abbf4) cl_listscroll_pane

0xcc06,	// (0x000b1a23) bg_cl_pane_g1

0xcc0e,	// (0x000b1a2b) bg_cl_pane_g2

0xcc16,	// (0x000b1a33) bg_cl_pane_g3

0xcc1e,	// (0x000b1a3b) bg_cl_pane_g4

0xcc26,	// (0x000b1a43) bg_cl_pane_g5

0xcc2e,	// (0x000b1a4b) bg_cl_pane_g6

0xcc36,	// (0x000b1a53) bg_cl_pane_g7

0xcc3e,	// (0x000b1a5b) bg_cl_pane_g8

0xcc46,	// (0x000b1a63) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x000b48a6) bg_cl_pane_g

0x6de7,	// (0x000abc04) aid_height_cl_leading_ParamLimits

0x6de7,	// (0x000abc04) aid_height_cl_leading

0x6df3,	// (0x000abc10) aid_height_cl_text_ParamLimits

0x6df3,	// (0x000abc10) aid_height_cl_text

0xe923,	// (0x000b3740) bg_cl_header_pane_ParamLimits

0xe923,	// (0x000b3740) bg_cl_header_pane

0x6e12,	// (0x000abc2f) cl_header_pane_g1_ParamLimits

0x6e12,	// (0x000abc2f) cl_header_pane_g1

0x6e28,	// (0x000abc45) cl_header_pane_t1_ParamLimits

0x6e28,	// (0x000abc45) cl_header_pane_t1

0xcc4e,	// (0x000b1a6b) cl_list_pane

0xc7f5,	// (0x000b1612) hc_scroll_pane_cp01

0x968c,	// (0x000ae4a9) bg_cl_header_pane_g1

0xc6db,	// (0x000b14f8) bg_cl_header_pane_g2

0x96ac,	// (0x000ae4c9) bg_cl_header_pane_g3

0xc6eb,	// (0x000b1508) bg_cl_header_pane_g4

0xc6e3,	// (0x000b1500) bg_cl_header_pane_g5

0xc935,	// (0x000b1752) bg_cl_header_pane_g6

0xc703,	// (0x000b1520) bg_cl_header_pane_g7

0xc70b,	// (0x000b1528) bg_cl_header_pane_g8

0xc6fb,	// (0x000b1518) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x000b48b9) bg_cl_header_pane_g

0x6e41,	// (0x000abc5e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6e41,	// (0x000abc5e) hc_cl_list_double_graphic_heading_pane

0x6e52,	// (0x000abc6f) hc_cl_list_single_graphic_pane_ParamLimits

0x6e52,	// (0x000abc6f) hc_cl_list_single_graphic_pane

0x6e6b,	// (0x000abc88) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6e6b,	// (0x000abc88) hc_cl_list_single_graphic_pane_g1

0x6e77,	// (0x000abc94) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6e77,	// (0x000abc94) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x000b48cc) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x000b48cc) hc_cl_list_single_graphic_pane_g

0x6e8b,	// (0x000abca8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6e8b,	// (0x000abca8) hc_cl_list_single_graphic_pane_t1

0x6e6b,	// (0x000abc88) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6e6b,	// (0x000abc88) hc_cl_list_double_graphic_heading_pane_g1

0x6ea0,	// (0x000abcbd) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6ea0,	// (0x000abcbd) hc_cl_list_double_graphic_heading_pane_g2

0x6eb4,	// (0x000abcd1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6eb4,	// (0x000abcd1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x000b48d1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x000b48d1) hc_cl_list_double_graphic_heading_pane_g

0x6ec8,	// (0x000abce5) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6ec8,	// (0x000abce5) hc_cl_list_double_graphic_heading_pane_t1

0x6edd,	// (0x000abcfa) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6edd,	// (0x000abcfa) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x000b48d8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x000b48d8) hc_cl_list_double_graphic_heading_pane_t

0x6ef2,	// (0x000abd0f) vid4_progress_pane_g1

0x6f04,	// (0x000abd21) vid4_progress_pane_g2

0x9917,	// (0x000ae734) vid4_progress_pane_g3

0xa15d,	// (0x000aef7a) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x000b48dd) vid4_progress_pane_g

0xa17b,	// (0x000aef98) vid4_progress_pane_t1

0xa190,	// (0x000aefad) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x000b48e8) vid4_progress_pane_t

0xa1bc,	// (0x000aefd9) wait_bar_pane_cp07

0xb9e0,	// (0x000b07fd) blid_firmament_pane_ParamLimits

0xba23,	// (0x000b0840) popup_blid_sat_info2_window_g1

0xba47,	// (0x000b0864) popup_blid_sat_info2_window_t3

0xba55,	// (0x000b0872) popup_blid_sat_info2_window_t4

0xba63,	// (0x000b0880) popup_blid_sat_info2_window_t5

0xba71,	// (0x000b088e) popup_blid_sat_info2_window_t6

0xba81,	// (0x000b089e) popup_blid_sat_info2_window_t7

0xba8f,	// (0x000b08ac) popup_blid_sat_info2_window_t8

0xba9d,	// (0x000b08ba) popup_blid_sat_info2_window_t9

0xbaab,	// (0x000b08c8) popup_blid_sat_info2_window_t10

0xbb6f,	// (0x000b098c) aid_firma_cardinal_ParamLimits

0xbb83,	// (0x000b09a0) blid_firmament_pane_t1_ParamLimits

0xbb9a,	// (0x000b09b7) blid_firmament_pane_t2_ParamLimits

0xbbb1,	// (0x000b09ce) blid_firmament_pane_t3_ParamLimits

0xbbc8,	// (0x000b09e5) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x000b44fb) blid_firmament_pane_t_ParamLimits

0xbbdf,	// (0x000b09fc) blid_sat_info_pane_ParamLimits

0x95ad,	// (0x000ae3ca) main_cam_set_pane_ParamLimits

0x52f2,	// (0x000aa10f) aid_size_cell_colour_35_ParamLimits

0x5312,	// (0x000aa12f) aid_size_cell_colour_112_ParamLimits

0x5332,	// (0x000aa14f) aid_size_cell_effect_ParamLimits

0xb7e5,	// (0x000b0602) bg_tb_trans_pane_cp02_ParamLimits

0x989e,	// (0x000ae6bb) heading_imed_pane_ParamLimits

0x5352,	// (0x000aa16f) listscroll_imed_pane_ParamLimits

0xade5,	// (0x000afc02) popup_call2_audio_first_window_g5_ParamLimits

0xade5,	// (0x000afc02) popup_call2_audio_first_window_g5

0x590c,	// (0x000aa729) aid_size_touch_image3_arrow_left_ParamLimits

0x590c,	// (0x000aa729) aid_size_touch_image3_arrow_left

0x5938,	// (0x000aa755) aid_size_touch_image3_arrow_right_ParamLimits

0x5938,	// (0x000aa755) aid_size_touch_image3_arrow_right

0xa1a6,	// (0x000aefc3) vid4_progress_pane_t3

0x567e,	// (0x000aa49b) main_hwr_training_symbol_option_pane_ParamLimits

0x567e,	// (0x000aa49b) main_hwr_training_symbol_option_pane

0xc45e,	// (0x000b127b) popup_hwr_training_preview_window_ParamLimits

0xc45e,	// (0x000b127b) popup_hwr_training_preview_window

0x569e,	// (0x000aa4bb) hwr_training_navi_pane_g5_ParamLimits

0x569e,	// (0x000aa4bb) hwr_training_navi_pane_g5

0xc6c9,	// (0x000b14e6) popup_char_count_window

0x95ad,	// (0x000ae3ca) bg_popup_sub_pane_cp20_ParamLimits

0x6894,	// (0x000ab6b1) list_vitu2_match_list_pane_ParamLimits

0x68a3,	// (0x000ab6c0) vitu2_page_scroll_pane_ParamLimits

0x68a3,	// (0x000ab6c0) vitu2_page_scroll_pane

0xcc68,	// (0x000b1a85) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcc68,	// (0x000b1a85) list_single_hwr_training_symbol_option_pane

0xcc7b,	// (0x000b1a98) list_single_hwr_training_symbol_option_pane_g1

0xcc83,	// (0x000b1aa0) list_single_hwr_training_symbol_option_pane_t1

0xcc91,	// (0x000b1aae) bg_button_pane_cp023

0xcc9a,	// (0x000b1ab7) bg_button_pane_cp024

0x6f4e,	// (0x000abd6b) vitu2_page_scroll_pane_g1

0x6f56,	// (0x000abd73) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x000b48ef) vitu2_page_scroll_pane_g

0x6f5e,	// (0x000abd7b) vitu2_page_scroll_pane_t1

0xc218,	// (0x000b1035) popup_char_count_window_g1

0xcccd,	// (0x000b1aea) popup_char_count_window_g2

0xccd6,	// (0x000b1af3) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x000b48f4) popup_char_count_window_g

0xccdf,	// (0x000b1afc) popup_char_count_window_t1

0x95bb,	// (0x000ae3d8) main_vded2_pane

0xc154,	// (0x000b0f71) aid_size_cell_imed_line

0xc15e,	// (0x000b0f7b) grid_imed_line_width_pane

0xa0a3,	// (0x000aeec0) vid4_indicators_pane_g4

0xcced,	// (0x000b1b0a) cell_imed_line_width_pane_ParamLimits

0xcced,	// (0x000b1b0a) cell_imed_line_width_pane

0xcd01,	// (0x000b1b1e) cell_imed_line_width_pane_g1

0xc85c,	// (0x000b1679) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x000b48fb) cell_imed_line_width_pane_g

0x6f6d,	// (0x000abd8a) main_vded2_pane_g1_ParamLimits

0x6f6d,	// (0x000abd8a) main_vded2_pane_g1

0x6f83,	// (0x000abda0) main_vded2_pane_g2_ParamLimits

0x6f83,	// (0x000abda0) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x000b4900) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x000b4900) main_vded2_pane_g

0x6f95,	// (0x000abdb2) vded2_slider_pane_ParamLimits

0x6f95,	// (0x000abdb2) vded2_slider_pane

0x6fa5,	// (0x000abdc2) aid_size_touch_vded2_end

0x6faf,	// (0x000abdcc) aid_size_touch_vded2_playhead

0xcd0a,	// (0x000b1b27) aid_size_touch_vded2_start

0xcd12,	// (0x000b1b2f) vded2_slider_bg_pane

0xcd1b,	// (0x000b1b38) vded2_slider_pane_g1

0xcd24,	// (0x000b1b41) vded2_slider_pane_g2

0x6fb9,	// (0x000abdd6) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x000b4905) vded2_slider_pane_g

0xcd2c,	// (0x000b1b49) vded2_slider_bg_pane_g1

0xcd35,	// (0x000b1b52) vded2_slider_bg_pane_g2

0xcd3e,	// (0x000b1b5b) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x000b490c) vded2_slider_bg_pane_g

0x3079,	// (0x000a7e96) aid_postcard_touch_down_pane_ParamLimits

0x3079,	// (0x000a7e96) aid_postcard_touch_down_pane

0x308f,	// (0x000a7eac) aid_postcard_touch_up_pane_ParamLimits

0x308f,	// (0x000a7eac) aid_postcard_touch_up_pane

0x95bb,	// (0x000ae3d8) main_blid2_pane

0x9c51,	// (0x000aea6e) popup_blid2_search_window

0xd4ca,	// (0x000b22e7) blid2_gps_pane

0xd4ca,	// (0x000b22e7) blid2_navig_pane

0xd4ca,	// (0x000b22e7) blid2_search_pane

0xd4ca,	// (0x000b22e7) blid2_tripm_pane

0x6fc4,	// (0x000abde1) blid2_search_pane_g1_ParamLimits

0x6fc4,	// (0x000abde1) blid2_search_pane_g1

0x6fdc,	// (0x000abdf9) blid2_search_pane_t1_ParamLimits

0x6fdc,	// (0x000abdf9) blid2_search_pane_t1

0x6fee,	// (0x000abe0b) aid_size_cell_blid2_gps_ParamLimits

0x6fee,	// (0x000abe0b) aid_size_cell_blid2_gps

0x7006,	// (0x000abe23) blid2_gps_pane_g1_ParamLimits

0x7006,	// (0x000abe23) blid2_gps_pane_g1

0x701a,	// (0x000abe37) grid_blid2_satellite_pane_ParamLimits

0x701a,	// (0x000abe37) grid_blid2_satellite_pane

0x7034,	// (0x000abe51) blid2_navig_pane_g1_ParamLimits

0x7034,	// (0x000abe51) blid2_navig_pane_g1

0x7040,	// (0x000abe5d) blid2_navig_pane_t1_ParamLimits

0x7040,	// (0x000abe5d) blid2_navig_pane_t1

0x705b,	// (0x000abe78) blid2_navig_pane_t2_ParamLimits

0x705b,	// (0x000abe78) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x000b4913) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x000b4913) blid2_navig_pane_t

0x7076,	// (0x000abe93) blid2_navig_ring_pane_ParamLimits

0x7076,	// (0x000abe93) blid2_navig_ring_pane

0x708f,	// (0x000abeac) blid2_speed_pane_ParamLimits

0x708f,	// (0x000abeac) blid2_speed_pane

0x709b,	// (0x000abeb8) blid2_tripm_pane_g1_ParamLimits

0x709b,	// (0x000abeb8) blid2_tripm_pane_g1

0x70b6,	// (0x000abed3) blid2_tripm_pane_g2_ParamLimits

0x70b6,	// (0x000abed3) blid2_tripm_pane_g2

0x70ca,	// (0x000abee7) blid2_tripm_pane_g3_ParamLimits

0x70ca,	// (0x000abee7) blid2_tripm_pane_g3

0x70de,	// (0x000abefb) blid2_tripm_pane_g4_ParamLimits

0x70de,	// (0x000abefb) blid2_tripm_pane_g4

0x70f2,	// (0x000abf0f) blid2_tripm_pane_g5_ParamLimits

0x70f2,	// (0x000abf0f) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x000b4918) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x000b4918) blid2_tripm_pane_g

0x7118,	// (0x000abf35) blid2_tripm_pane_t1_ParamLimits

0x7118,	// (0x000abf35) blid2_tripm_pane_t1

0x7133,	// (0x000abf50) blid2_tripm_pane_t2_ParamLimits

0x7133,	// (0x000abf50) blid2_tripm_pane_t2

0x714c,	// (0x000abf69) blid2_tripm_pane_t3_ParamLimits

0x714c,	// (0x000abf69) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x000b4925) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x000b4925) blid2_tripm_pane_t

0x7193,	// (0x000abfb0) cell_blid2_satellite_pane_ParamLimits

0x7193,	// (0x000abfb0) cell_blid2_satellite_pane

0x71b1,	// (0x000abfce) cell_blid2_satellite_pane_g1

0xcd47,	// (0x000b1b64) cell_blid2_satellite_pane_t1

0xbbef,	// (0x000b0a0c) blid2_speed_pane_g1

0xcd55,	// (0x000b1b72) blid2_speed_pane_t1

0xcd63,	// (0x000b1b80) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x000b492e) blid2_speed_pane_t

0xbbef,	// (0x000b0a0c) blid2_navig_ring_pane_g1

0x71ba,	// (0x000abfd7) blid2_navig_ring_pane_g2

0x71c2,	// (0x000abfdf) blid2_navig_ring_pane_g3

0x71ca,	// (0x000abfe7) blid2_navig_ring_pane_g4

0x71d2,	// (0x000abfef) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x000b4933) blid2_navig_ring_pane_g

0xd4ca,	// (0x000b22e7) bg_popup_window_pane_cp011

0xcd71,	// (0x000b1b8e) popup_blid2_search_window_g1

0xcd79,	// (0x000b1b96) popup_blid2_search_window_t1

0xcd87,	// (0x000b1ba4) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x000b493e) popup_blid2_search_window_t

0xeffa,	// (0x000b3e17) main_browser_pane_g1

0xe850,	// (0x000b366d) main_browser_pane_ParamLimits

0x95ad,	// (0x000ae3ca) bg_button_pane_cp011_ParamLimits

0x612a,	// (0x000aaf47) cell_vitu2_function_pane_g1_ParamLimits

0xb7e5,	// (0x000b0602) bg_popup_sub_pane_cp22_ParamLimits

0x6a55,	// (0x000ab872) input_focus_pane_cp08_ParamLimits

0x6a6c,	// (0x000ab889) popup_vitu2_query_button_pane_ParamLimits

0x6a6c,	// (0x000ab889) popup_vitu2_query_button_pane

0x6a7d,	// (0x000ab89a) popup_vitu2_query_input_button_pane

0xc972,	// (0x000b178f) popup_vitu2_query_window_g1_ParamLimits

0x6a87,	// (0x000ab8a4) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x000b483f) popup_vitu2_query_window_g_ParamLimits

0xd4ca,	// (0x000b22e7) bg_button_pane_cp026

0x71da,	// (0x000abff7) popup_vitu2_query_input_button_pane_g1

0xd4ca,	// (0x000b22e7) bg_button_pane_cp025

0xcd95,	// (0x000b1bb2) popup_vitu2_query_button_pane_t1

0x4719,	// (0x000a9536) main_mp3_pane_t6

0x4727,	// (0x000a9544) popup_slider_window_cp01

0xa009,	// (0x000aee26) cam4_battery_pane

0xa062,	// (0x000aee7f) cam4_battery_pane_cp02

0xa155,	// (0x000aef72) cam4_battery_pane_cp01

0xa155,	// (0x000aef72) cam4_battery_pane_cp03

0xc864,	// (0x000b1681) cam4_battery_pane_g1

0xbbef,	// (0x000b0a0c) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x000b4943) cam4_battery_pane_g

0xbab9,	// (0x000b08d6) popup_blid_sat_info2_window_t11

0x299b,	// (0x000a77b8) aid_size_touch_mv_arrow_left_ParamLimits

0x29c4,	// (0x000a77e1) aid_size_touch_mv_arrow_right_ParamLimits

0xa31d,	// (0x000af13a) navi_pane_g1_ParamLimits

0x2a03,	// (0x000a7820) navi_pane_g2_ParamLimits

0x2a31,	// (0x000a784e) navi_pane_g3_ParamLimits

0xf3f0,	// (0x000b420d) navi_pane_g_ParamLimits

0x2a89,	// (0x000a78a6) navi_pane_mv_t1_ParamLimits

0x535e,	// (0x000aa17b) grid_imed_effect_pane_ParamLimits

0x1512,	// (0x000a632f) aid_placing_vt_slider_lsc

0xef49,	// (0x000b3d66) aid_placing_vt_slider_prt

0xe923,	// (0x000b3740) bg_tb_trans_pane_cp01_ParamLimits

0xbd6f,	// (0x000b0b8c) popup_image_details_window_g1_ParamLimits

0xbd82,	// (0x000b0b9f) popup_image_details_window_g2_ParamLimits

0xbd97,	// (0x000b0bb4) popup_image_details_window_g3_ParamLimits

0xbd97,	// (0x000b0bb4) popup_image_details_window_g3

0xf723,	// (0x000b4540) popup_image_details_window_g_ParamLimits

0xbdab,	// (0x000b0bc8) popup_image_details_window_t1_ParamLimits

0xbdbd,	// (0x000b0bda) popup_image_details_window_t2_ParamLimits

0xbdd6,	// (0x000b0bf3) popup_image_details_window_t3_ParamLimits

0xbdea,	// (0x000b0c07) popup_image_details_window_t4_ParamLimits

0xbe05,	// (0x000b0c22) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x000b4547) popup_image_details_window_t_ParamLimits

0x6dff,	// (0x000abc1c) cl_header_name_pane_ParamLimits

0x6dff,	// (0x000abc1c) cl_header_name_pane

0x71e2,	// (0x000abfff) cl_header_name_pane_t1_ParamLimits

0x71e2,	// (0x000abfff) cl_header_name_pane_t1

0x7203,	// (0x000ac020) cl_header_name_pane_t2_ParamLimits

0x7203,	// (0x000ac020) cl_header_name_pane_t2

0x7245,	// (0x000ac062) cl_header_name_pane_t3_ParamLimits

0x7245,	// (0x000ac062) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x000b4948) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x000b4948) cl_header_name_pane_t

0x2a5a,	// (0x000a7877) navi_pane_mv_g2_ParamLimits

0xc686,	// (0x000b14a3) field_vitu2_entry_pane_g1_ParamLimits

0xc692,	// (0x000b14af) field_vitu2_entry_pane_g2_ParamLimits

0xc69e,	// (0x000b14bb) field_vitu2_entry_pane_g3_ParamLimits

0xc69e,	// (0x000b14bb) field_vitu2_entry_pane_g3

0xf921,	// (0x000b473e) field_vitu2_entry_pane_g_ParamLimits

0x60a6,	// (0x000aaec3) cell_vitu2_itu_pane_g1_ParamLimits

0x60b6,	// (0x000aaed3) cell_vitu2_itu_pane_g2_ParamLimits

0x60b6,	// (0x000aaed3) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x000b474a) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x000b474a) cell_vitu2_itu_pane_g

0x95ad,	// (0x000ae3ca) bg_vkb2_func_pane_cp05_ParamLimits

0x95ad,	// (0x000ae3ca) bg_vkb2_func_pane_cp05

0x95ad,	// (0x000ae3ca) bg_vkb2_func_pane_cp03

0x95ad,	// (0x000ae3ca) bg_vkb2_func_pane_cp04

0x95ad,	// (0x000ae3ca) bg_vkb2_func_pane_cp10_ParamLimits

0x95ad,	// (0x000ae3ca) bg_vkb2_func_pane_cp10

0x6da1,	// (0x000abbbe) bg_vkb2_func_pane_cp08

0x6d87,	// (0x000abba4) bg_vkb2_func_pane_cp06

0x6d95,	// (0x000abbb2) bg_vkb2_func_pane_cp07

0xcca3,	// (0x000b1ac0) bg_vkb2_func_pane_cp11_ParamLimits

0xcca3,	// (0x000b1ac0) bg_vkb2_func_pane_cp11

0xccb8,	// (0x000b1ad5) bg_vkb2_func_pane_cp12_ParamLimits

0xccb8,	// (0x000b1ad5) bg_vkb2_func_pane_cp12

0xd4ca,	// (0x000b22e7) bg_vkb2_func_pane_cp09

0xc6db,	// (0x000b14f8) bg_vkb2_func_pane_g1

0x96ac,	// (0x000ae4c9) bg_vkb2_func_pane_g2

0xc6e3,	// (0x000b1500) bg_vkb2_func_pane_g3

0xc6eb,	// (0x000b1508) bg_vkb2_func_pane_g4

0xc935,	// (0x000b1752) bg_vkb2_func_pane_g5

0xc703,	// (0x000b1520) bg_vkb2_func_pane_g6

0xc70b,	// (0x000b1528) bg_vkb2_func_pane_g7

0xc6fb,	// (0x000b1518) bg_vkb2_func_pane_g8

0x968c,	// (0x000ae4a9) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x000b494f) bg_vkb2_func_pane_g

0x7106,	// (0x000abf23) blid2_tripm_pane_g6_ParamLimits

0x7106,	// (0x000abf23) blid2_tripm_pane_g6

0xc516,	// (0x000b1333) mp4_progress_pane_g1

0x717f,	// (0x000abf9c) blid2_tripm_values_pane_ParamLimits

0x717f,	// (0x000abf9c) blid2_tripm_values_pane

0x7276,	// (0x000ac093) blid2_tripm_values_pane_t1

0x7284,	// (0x000ac0a1) blid2_tripm_values_pane_t2

0x7292,	// (0x000ac0af) blid2_tripm_values_pane_t3

0x72a0,	// (0x000ac0bd) blid2_tripm_values_pane_t4

0x72ae,	// (0x000ac0cb) blid2_tripm_values_pane_t5

0x72bc,	// (0x000ac0d9) blid2_tripm_values_pane_t6

0x72ca,	// (0x000ac0e7) blid2_tripm_values_pane_t7

0x72d8,	// (0x000ac0f5) blid2_tripm_values_pane_t8

0x72e6,	// (0x000ac103) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x000b4962) blid2_tripm_values_pane_t

0x1554,	// (0x000a6371) call_video_pane_t1_ParamLimits

0x1572,	// (0x000a638f) call_video_pane_t2_ParamLimits

0xf279,	// (0x000b4096) call_video_pane_t_ParamLimits

0x2f7e,	// (0x000a7d9b) msg_header_pane_g1_ParamLimits

0xa52f,	// (0x000af34c) msg_header_pane_g2_ParamLimits

0xa52f,	// (0x000af34c) msg_header_pane_g2

0x0001,

0xf493,	// (0x000b42b0) msg_header_pane_g_ParamLimits

0xf493,	// (0x000b42b0) msg_header_pane_g

0xe850,	// (0x000b366d) main_clock2_pane_ParamLimits

0x5055,	// (0x000a9e72) grid_clock2_toolbar_pane_ParamLimits

0x5055,	// (0x000a9e72) grid_clock2_toolbar_pane

0x5055,	// (0x000a9e72) listscroll_clock2_pane_ParamLimits

0x5055,	// (0x000a9e72) listscroll_clock2_pane

0x5150,	// (0x000a9f6d) main_clock2_pane_t3_ParamLimits

0x5150,	// (0x000a9f6d) main_clock2_pane_t3

0x5174,	// (0x000a9f91) main_clock2_pane_t4_ParamLimits

0x5174,	// (0x000a9f91) main_clock2_pane_t4

0xcda3,	// (0x000b1bc0) cell_clock2_toolbar_pane

0xcdab,	// (0x000b1bc8) cell_clock2_toolbar_pane_cp01

0xcdab,	// (0x000b1bc8) cell_clock2_toolbar_pane_cp02

0xcdb3,	// (0x000b1bd0) cell_clock2_toolbar_pane_cp03

0xcdbb,	// (0x000b1bd8) list_clock2_pane

0xa274,	// (0x000af091) scroll_pane_cp10

0xcdc3,	// (0x000b1be0) list_single_clock2_pane_ParamLimits

0xcdc3,	// (0x000b1be0) list_single_clock2_pane

0xa3bd,	// (0x000af1da) list_highlight_pane_cp08

0xcdd0,	// (0x000b1bed) list_single_clock2_pane_t1

0xcdde,	// (0x000b1bfb) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x000b4975) list_single_clock2_pane_t

0xd4ca,	// (0x000b22e7) bg_button_pane_cp10

0xcdec,	// (0x000b1c09) cell_clock2_toolbar_pane_g1

0x3005,	// (0x000a7e22) aid_main_viewer_pane_g1_ParamLimits

0x3005,	// (0x000a7e22) aid_main_viewer_pane_g1

0x3013,	// (0x000a7e30) aid_main_viewer_pane_g2_ParamLimits

0x3013,	// (0x000a7e30) aid_main_viewer_pane_g2

0x3021,	// (0x000a7e3e) aid_main_viewer_pane_g3_ParamLimits

0x3021,	// (0x000a7e3e) aid_main_viewer_pane_g3

0x3030,	// (0x000a7e4d) aid_main_viewer_pane_g4_ParamLimits

0x3030,	// (0x000a7e4d) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x000b42c1) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x000b42c1) aid_main_viewer_pane_g

0x393e,	// (0x000a875b) main_calc_pane_ParamLimits

0x3964,	// (0x000a8781) main_dialer2_pane_ParamLimits

0x95bb,	// (0x000ae3d8) main_cam6_pane

0x95bb,	// (0x000ae3d8) main_vid6_pane

0x5061,	// (0x000a9e7e) listscroll_gen_pane_cp06_ParamLimits

0x5061,	// (0x000a9e7e) listscroll_gen_pane_cp06

0x5197,	// (0x000a9fb4) main_clock2_pane_t5_ParamLimits

0x5197,	// (0x000a9fb4) main_clock2_pane_t5

0x51f3,	// (0x000aa010) aid_call2_pane_cp10_ParamLimits

0x5205,	// (0x000aa022) aid_call_pane_cp10_ParamLimits

0xa2f2,	// (0x000af10f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa2f2,	// (0x000af10f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5217,	// (0x000aa034) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5217,	// (0x000aa034) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa2f2,	// (0x000af10f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x000b45f7) popup_clock_analogue_window_cp10_g_ParamLimits

0x5229,	// (0x000aa046) popup_clock_analogue_window_cp10_t1_ParamLimits

0x58b9,	// (0x000aa6d6) cell_dialer2_keypad_pane_g2_ParamLimits

0x58b9,	// (0x000aa6d6) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x000b46dd) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x000b46dd) cell_dialer2_keypad_pane_g

0x58d5,	// (0x000aa6f2) cell_dialer2_keypad_pane_t1

0x6440,	// (0x000ab25d) main_cset_text2_pane_ParamLimits

0x6440,	// (0x000ab25d) main_cset_text2_pane

0xcb5e,	// (0x000b197b) area_vitu2_query_pane_g1_ParamLimits

0x6d26,	// (0x000abb43) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x000b4892) area_vitu2_query_pane_g_ParamLimits

0xcbe2,	// (0x000b19ff) area_vitu2_query_pane_t7_ParamLimits

0xcbe2,	// (0x000b19ff) area_vitu2_query_pane_t7

0x6d87,	// (0x000abba4) bg_button_pane_cp018_ParamLimits

0x6d95,	// (0x000abbb2) bg_button_pane_cp021_ParamLimits

0x6da1,	// (0x000abbbe) bg_button_pane_cp022_ParamLimits

0x6da1,	// (0x000abbbe) bg_vkb2_func_pane_cp08_ParamLimits

0x6d87,	// (0x000abba4) bg_vkb2_func_pane_cp06_ParamLimits

0x6d95,	// (0x000abbb2) bg_vkb2_func_pane_cp07_ParamLimits

0x6db2,	// (0x000abbcf) input_focus_pane_cp09_ParamLimits

0xa1cc,	// (0x000aefe9) cam6_autofocus_pane_ParamLimits

0xa1cc,	// (0x000aefe9) cam6_autofocus_pane

0x72f4,	// (0x000ac111) cam6_image_uncrop_pane_ParamLimits

0x72f4,	// (0x000ac111) cam6_image_uncrop_pane

0x7303,	// (0x000ac120) cam6_indi_pane_ParamLimits

0x7303,	// (0x000ac120) cam6_indi_pane

0x7319,	// (0x000ac136) cam6_mode_pane_ParamLimits

0x7319,	// (0x000ac136) cam6_mode_pane

0x732b,	// (0x000ac148) cam6_timer_pane_ParamLimits

0x732b,	// (0x000ac148) cam6_timer_pane

0x7337,	// (0x000ac154) cam6_zoom_pane_ParamLimits

0x7337,	// (0x000ac154) cam6_zoom_pane

0x7343,	// (0x000ac160) cam6_mode_pane_g1_ParamLimits

0x7343,	// (0x000ac160) cam6_mode_pane_g1

0x7353,	// (0x000ac170) cam6_mode_pane_g2_ParamLimits

0x7353,	// (0x000ac170) cam6_mode_pane_g2

0x7363,	// (0x000ac180) cam6_mode_pane_g3_ParamLimits

0x7363,	// (0x000ac180) cam6_mode_pane_g3

0x7373,	// (0x000ac190) cam6_mode_pane_g4_ParamLimits

0x7373,	// (0x000ac190) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x000b497a) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x000b497a) cam6_mode_pane_g

0xcdf4,	// (0x000b1c11) bg_tb_trans_pane_cp08_ParamLimits

0xcdf4,	// (0x000b1c11) bg_tb_trans_pane_cp08

0xce02,	// (0x000b1c1f) cam6_battery_pane_ParamLimits

0xce02,	// (0x000b1c1f) cam6_battery_pane

0xce18,	// (0x000b1c35) cam6_indi_pane_g1_ParamLimits

0xce18,	// (0x000b1c35) cam6_indi_pane_g1

0xce2a,	// (0x000b1c47) cam6_indi_pane_g2_ParamLimits

0xce2a,	// (0x000b1c47) cam6_indi_pane_g2

0xce3c,	// (0x000b1c59) cam6_indi_pane_g3_ParamLimits

0xce3c,	// (0x000b1c59) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x000b4983) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x000b4983) cam6_indi_pane_g

0xce4e,	// (0x000b1c6b) cam6_indi_pane_t1_ParamLimits

0xce4e,	// (0x000b1c6b) cam6_indi_pane_t1

0x7383,	// (0x000ac1a0) cam6_autofocus_pane_g1

0x738b,	// (0x000ac1a8) cam6_autofocus_pane_g2

0x7393,	// (0x000ac1b0) cam6_autofocus_pane_g3

0x739b,	// (0x000ac1b8) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x000b498a) cam6_autofocus_pane_g

0xce74,	// (0x000b1c91) cam6_timer_pane_g1

0xce7c,	// (0x000b1c99) cam6_timer_pane_t1

0xce8a,	// (0x000b1ca7) cam6_zoom_cont_pane

0xce92,	// (0x000b1caf) cam6_zoom_pane_g1

0xce9a,	// (0x000b1cb7) cam6_zoom_pane_g2

0x73a3,	// (0x000ac1c0) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x000b4993) cam6_zoom_pane_g

0xbbef,	// (0x000b0a0c) cam6_battery_pane_g1

0xbbef,	// (0x000b0a0c) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x000b4504) cam6_battery_pane_g

0xcea2,	// (0x000b1cbf) cam6_zoom_cont_pane_g1

0xceab,	// (0x000b1cc8) cam6_zoom_cont_pane_g2

0xceb4,	// (0x000b1cd1) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x000b499a) cam6_zoom_cont_pane_g

0x73c0,	// (0x000ac1dd) cam6_mode_pane_cp_ParamLimits

0x73c0,	// (0x000ac1dd) cam6_mode_pane_cp

0x73d2,	// (0x000ac1ef) cam6_zoom_pane_cp_ParamLimits

0x73d2,	// (0x000ac1ef) cam6_zoom_pane_cp

0x73de,	// (0x000ac1fb) vid6_image_uncrop_cif_pane_ParamLimits

0x73de,	// (0x000ac1fb) vid6_image_uncrop_cif_pane

0x73ee,	// (0x000ac20b) vid6_image_uncrop_nhd_pane_ParamLimits

0x73ee,	// (0x000ac20b) vid6_image_uncrop_nhd_pane

0x73fd,	// (0x000ac21a) vid6_image_uncrop_vga_pane_ParamLimits

0x73fd,	// (0x000ac21a) vid6_image_uncrop_vga_pane

0x740c,	// (0x000ac229) vid6_image_uncrop_wvga_pane_ParamLimits

0x740c,	// (0x000ac229) vid6_image_uncrop_wvga_pane

0x741b,	// (0x000ac238) vid6_indi_pane_ParamLimits

0x741b,	// (0x000ac238) vid6_indi_pane

0xcdf4,	// (0x000b1c11) bg_tb_trans_pane_cp09_ParamLimits

0xcdf4,	// (0x000b1c11) bg_tb_trans_pane_cp09

0xcecc,	// (0x000b1ce9) cam6_battery_pane_cp_ParamLimits

0xcecc,	// (0x000b1ce9) cam6_battery_pane_cp

0xced8,	// (0x000b1cf5) vid6_indi_pane_g1_ParamLimits

0xced8,	// (0x000b1cf5) vid6_indi_pane_g1

0xceea,	// (0x000b1d07) vid6_indi_pane_g2_ParamLimits

0xceea,	// (0x000b1d07) vid6_indi_pane_g2

0xcefc,	// (0x000b1d19) vid6_indi_pane_g3_ParamLimits

0xcefc,	// (0x000b1d19) vid6_indi_pane_g3

0xcf11,	// (0x000b1d2e) vid6_indi_pane_g4_ParamLimits

0xcf11,	// (0x000b1d2e) vid6_indi_pane_g4

0xcf26,	// (0x000b1d43) vid6_indi_pane_g5_ParamLimits

0xcf26,	// (0x000b1d43) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x000b49a1) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x000b49a1) vid6_indi_pane_g

0xcf40,	// (0x000b1d5d) vid6_indi_pane_t1_ParamLimits

0xcf40,	// (0x000b1d5d) vid6_indi_pane_t1

0xcf56,	// (0x000b1d73) vid6_indi_pane_t2_ParamLimits

0xcf56,	// (0x000b1d73) vid6_indi_pane_t2

0xcf7e,	// (0x000b1d9b) vid6_indi_pane_t3_ParamLimits

0xcf7e,	// (0x000b1d9b) vid6_indi_pane_t3

0xcfa6,	// (0x000b1dc3) vid6_indi_pane_t4_ParamLimits

0xcfa6,	// (0x000b1dc3) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x000b49ac) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x000b49ac) vid6_indi_pane_t

0xcfca,	// (0x000b1de7) wait_bar_pane_cp08

0x7433,	// (0x000ac250) main_cset_text2_pane_t1_ParamLimits

0x7433,	// (0x000ac250) main_cset_text2_pane_t1

0x73ab,	// (0x000ac1c8) listscroll_gen_pane_cp06_t1_ParamLimits

0x73ab,	// (0x000ac1c8) listscroll_gen_pane_cp06_t1

0x95bb,	// (0x000ae3d8) main_cam6_set_pane

0x9ffb,	// (0x000aee18) bg_tb_trans_pane_cp06_ParamLimits

0xa011,	// (0x000aee2e) cam4_indicators_pane_g1_ParamLimits

0xa022,	// (0x000aee3f) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x000b471a) cam4_indicators_pane_g_ParamLimits

0xa040,	// (0x000aee5d) cam4_indicators_pane_t1_ParamLimits

0x95ad,	// (0x000ae3ca) bg_tb_trans_pane_cp07_ParamLimits

0xa06a,	// (0x000aee87) vid4_indicators_pane_g1_ParamLimits

0xa07e,	// (0x000aee9b) vid4_indicators_pane_g2_ParamLimits

0xa092,	// (0x000aeeaf) vid4_indicators_pane_g3_ParamLimits

0xa0a3,	// (0x000aeec0) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x000b472c) vid4_indicators_pane_g_ParamLimits

0xa0bf,	// (0x000aeedc) vid4_indicators_pane_t1_ParamLimits

0x6ef2,	// (0x000abd0f) vid4_progress_pane_g1_ParamLimits

0x6f04,	// (0x000abd21) vid4_progress_pane_g2_ParamLimits

0x9917,	// (0x000ae734) vid4_progress_pane_g3_ParamLimits

0xa15d,	// (0x000aef7a) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x000b48dd) vid4_progress_pane_g_ParamLimits

0xa17b,	// (0x000aef98) vid4_progress_pane_t1_ParamLimits

0xa190,	// (0x000aefad) vid4_progress_pane_t2_ParamLimits

0xa1a6,	// (0x000aefc3) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x000b48e8) vid4_progress_pane_t_ParamLimits

0xa1bc,	// (0x000aefd9) wait_bar_pane_cp07_ParamLimits

0x7452,	// (0x000ac26f) main_cam6_set_pane_g2_ParamLimits

0x7452,	// (0x000ac26f) main_cam6_set_pane_g2

0x7476,	// (0x000ac293) main_cset6_listscroll_pane_ParamLimits

0x7476,	// (0x000ac293) main_cset6_listscroll_pane

0x7492,	// (0x000ac2af) main_cset6_slider_pane_ParamLimits

0x7492,	// (0x000ac2af) main_cset6_slider_pane

0x74a8,	// (0x000ac2c5) main_cset6_text2_pane_ParamLimits

0x74a8,	// (0x000ac2c5) main_cset6_text2_pane

0xcfd9,	// (0x000b1df6) main_cset6_text_pane

0xcfe1,	// (0x000b1dfe) main_cset_list_pane_copy1_ParamLimits

0xcfe1,	// (0x000b1dfe) main_cset_list_pane_copy1

0xcff1,	// (0x000b1e0e) scroll_pane_cp028_copy1

0x74b6,	// (0x000ac2d3) cset_list_set_pane_copy1

0x74c8,	// (0x000ac2e5) aid_position_infowindow_above_copy1

0x74d0,	// (0x000ac2ed) aid_position_infowindow_below_copy1

0x74d8,	// (0x000ac2f5) cset_list_set_pane_g1_copy1

0x74e0,	// (0x000ac2fd) cset_list_set_pane_g3_copy1_ParamLimits

0x74e0,	// (0x000ac2fd) cset_list_set_pane_g3_copy1

0x74ef,	// (0x000ac30c) cset_list_set_pane_t1_copy1_ParamLimits

0x74ef,	// (0x000ac30c) cset_list_set_pane_t1_copy1

0xe923,	// (0x000b3740) list_highlight_pane_cp021_copy1_ParamLimits

0xe923,	// (0x000b3740) list_highlight_pane_cp021_copy1

0xcffa,	// (0x000b1e17) cset6_slider_pane_ParamLimits

0xcffa,	// (0x000b1e17) cset6_slider_pane

0xd026,	// (0x000b1e43) main_cset6_slider_pane_g1_ParamLimits

0xd026,	// (0x000b1e43) main_cset6_slider_pane_g1

0x7504,	// (0x000ac321) main_cset6_slider_pane_g2_ParamLimits

0x7504,	// (0x000ac321) main_cset6_slider_pane_g2

0xd04e,	// (0x000b1e6b) main_cset6_slider_pane_g3_ParamLimits

0xd04e,	// (0x000b1e6b) main_cset6_slider_pane_g3

0x752c,	// (0x000ac349) main_cset6_slider_pane_g4_ParamLimits

0x752c,	// (0x000ac349) main_cset6_slider_pane_g4

0x7538,	// (0x000ac355) main_cset6_slider_pane_g5_ParamLimits

0x7538,	// (0x000ac355) main_cset6_slider_pane_g5

0xc80a,	// (0x000b1627) main_cset6_slider_pane_g7_ParamLimits

0xc80a,	// (0x000b1627) main_cset6_slider_pane_g7

0xc816,	// (0x000b1633) main_cset6_slider_pane_g8_ParamLimits

0xc816,	// (0x000b1633) main_cset6_slider_pane_g8

0x64ed,	// (0x000ab30a) main_cset6_slider_pane_g9_ParamLimits

0x64ed,	// (0x000ab30a) main_cset6_slider_pane_g9

0x64f9,	// (0x000ab316) main_cset6_slider_pane_g10_ParamLimits

0x64f9,	// (0x000ab316) main_cset6_slider_pane_g10

0x6505,	// (0x000ab322) main_cset6_slider_pane_g11_ParamLimits

0x6505,	// (0x000ab322) main_cset6_slider_pane_g11

0x6511,	// (0x000ab32e) main_cset6_slider_pane_g12_ParamLimits

0x6511,	// (0x000ab32e) main_cset6_slider_pane_g12

0x651d,	// (0x000ab33a) main_cset6_slider_pane_g13_ParamLimits

0x651d,	// (0x000ab33a) main_cset6_slider_pane_g13

0x6529,	// (0x000ab346) main_cset6_slider_pane_g14_ParamLimits

0x6529,	// (0x000ab346) main_cset6_slider_pane_g14

0x7544,	// (0x000ac361) main_cset6_slider_pane_g15_ParamLimits

0x7544,	// (0x000ac361) main_cset6_slider_pane_g15

0x654d,	// (0x000ab36a) main_cset6_slider_pane_g16_ParamLimits

0x654d,	// (0x000ab36a) main_cset6_slider_pane_g16

0x6559,	// (0x000ab376) main_cset6_slider_pane_g17_ParamLimits

0x6559,	// (0x000ab376) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x000b49b5) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x000b49b5) main_cset6_slider_pane_g

0xd05a,	// (0x000b1e77) main_cset6_slider_pane_t1_ParamLimits

0xd05a,	// (0x000b1e77) main_cset6_slider_pane_t1

0x7574,	// (0x000ac391) main_cset6_slider_pane_t2_ParamLimits

0x7574,	// (0x000ac391) main_cset6_slider_pane_t2

0x759f,	// (0x000ac3bc) main_cset6_slider_pane_t3_ParamLimits

0x759f,	// (0x000ac3bc) main_cset6_slider_pane_t3

0x75ca,	// (0x000ac3e7) main_cset6_slider_pane_t4_ParamLimits

0x75ca,	// (0x000ac3e7) main_cset6_slider_pane_t4

0x75f5,	// (0x000ac412) main_cset6_slider_pane_t5_ParamLimits

0x75f5,	// (0x000ac412) main_cset6_slider_pane_t5

0xd09b,	// (0x000b1eb8) main_cset6_slider_pane_t7_ParamLimits

0xd09b,	// (0x000b1eb8) main_cset6_slider_pane_t7

0x7620,	// (0x000ac43d) main_cset6_slider_pane_t8_ParamLimits

0x7620,	// (0x000ac43d) main_cset6_slider_pane_t8

0x7644,	// (0x000ac461) main_cset6_slider_pane_t9_ParamLimits

0x7644,	// (0x000ac461) main_cset6_slider_pane_t9

0x7668,	// (0x000ac485) main_cset6_slider_pane_t10_ParamLimits

0x7668,	// (0x000ac485) main_cset6_slider_pane_t10

0x768c,	// (0x000ac4a9) main_cset6_slider_pane_t11_ParamLimits

0x768c,	// (0x000ac4a9) main_cset6_slider_pane_t11

0xd0d1,	// (0x000b1eee) main_cset6_slider_pane_t14_ParamLimits

0xd0d1,	// (0x000b1eee) main_cset6_slider_pane_t14

0xd10a,	// (0x000b1f27) main_cset6_slider_pane_t15_ParamLimits

0xd10a,	// (0x000b1f27) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x000b49da) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x000b49da) main_cset6_slider_pane_t

0xd143,	// (0x000b1f60) cset_slider_pane_g1_copy1

0xd14c,	// (0x000b1f69) cset_slider_pane_g2_copy1

0xd155,	// (0x000b1f72) cset_slider_pane_g3_copy1

0xd4ca,	// (0x000b22e7) bg_popup_sub_pane_cp011_copy1

0xd15e,	// (0x000b1f7b) main_cset_text_pane_g1_copy1

0xc986,	// (0x000b17a3) main_cset_text_pane_t1_copy1

0xc994,	// (0x000b17b1) main_cset_text_pane_t2_copy1

0xc9a2,	// (0x000b17bf) main_cset_text_pane_t3_copy1

0xc9b0,	// (0x000b17cd) main_cset_text_pane_t4_copy1

0xc9be,	// (0x000b17db) main_cset_text_pane_t5_copy1

0xd166,	// (0x000b1f83) main_cset_text_pane_t6_copy1

0xd174,	// (0x000b1f91) main_cset_text_pane_t7_copy1

0x7781,	// (0x000ac59e) main_cset_text2_pane_t1_copy1

0x95ad,	// (0x000ae3ca) main_ncimui_pane

0x3ba0,	// (0x000a89bd) popup_query_ncimui_window_ParamLimits

0x3ba0,	// (0x000a89bd) popup_query_ncimui_window

0xbef0,	// (0x000b0d0d) field_cale_ev2_pane_g4_ParamLimits

0xbef0,	// (0x000b0d0d) field_cale_ev2_pane_g4

0x5795,	// (0x000aa5b2) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5795,	// (0x000aa5b2) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x000b46b8) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x000b46b8) cell_video_dialer_keypad_pane_g

0x57ad,	// (0x000aa5ca) cell_video_dialer_keypad_pane_t1

0xd4ca,	// (0x000b22e7) bg_popup_window_pane_cp012

0x9b56,	// (0x000ae973) heading_pane_cp06

0xd1a0,	// (0x000b1fbd) ncim_query_content_pane

0xd4ca,	// (0x000b22e7) bg_popup_heading_pane_cp01

0xd1a8,	// (0x000b1fc5) ncim_heading_pane_t1

0xd1b6,	// (0x000b1fd3) ncim_indicator_popup_pane

0xd1c8,	// (0x000b1fe5) ncim_query_button_pane

0xd1dc,	// (0x000b1ff9) ncim_query_content_pane_t1

0xd1ee,	// (0x000b200b) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x000b4a1e) ncim_query_content_pane_t

0xd228,	// (0x000b2045) ncim_query_list_pane

0xd23a,	// (0x000b2057) ncim_query_popup_pane

0xd1b6,	// (0x000b1fd3) ncim_indicator_popup_pane_ParamLimits

0x78c5,	// (0x000ac6e2) ncim_query_content_pane_g1_ParamLimits

0x78c5,	// (0x000ac6e2) ncim_query_content_pane_g1

0xd1dc,	// (0x000b1ff9) ncim_query_content_pane_t1_ParamLimits

0xd1ee,	// (0x000b200b) ncim_query_content_pane_t2_ParamLimits

0x78d1,	// (0x000ac6ee) ncim_query_content_pane_t3_ParamLimits

0x78d1,	// (0x000ac6ee) ncim_query_content_pane_t3

0x78f9,	// (0x000ac716) ncim_query_content_pane_t4_ParamLimits

0x78f9,	// (0x000ac716) ncim_query_content_pane_t4

0x7921,	// (0x000ac73e) ncim_query_content_pane_t5_ParamLimits

0x7921,	// (0x000ac73e) ncim_query_content_pane_t5

0xd200,	// (0x000b201d) ncim_query_content_pane_t6_ParamLimits

0xd200,	// (0x000b201d) ncim_query_content_pane_t6

0xfc01,	// (0x000b4a1e) ncim_query_content_pane_t_ParamLimits

0xd228,	// (0x000b2045) ncim_query_list_pane_ParamLimits

0xd23a,	// (0x000b2057) ncim_query_popup_pane_ParamLimits

0xd24e,	// (0x000b206b) wait_bar_pane_cp04

0xd4ca,	// (0x000b22e7) input_focus_pane_cp011

0xd256,	// (0x000b2073) ncim_query_popup_pane_t1

0xd264,	// (0x000b2081) ncim_list_query_list_pane_ParamLimits

0xd264,	// (0x000b2081) ncim_list_query_list_pane

0xd4ca,	// (0x000b22e7) bg_button_pane_cp027

0xd277,	// (0x000b2094) ncim_query_button_pane_g1

0xd4ca,	// (0x000b22e7) list_highlight_pane_cp012

0xd281,	// (0x000b209e) ncim_list_query_list_pane_g1

0xd289,	// (0x000b20a6) ncim_list_query_list_pane_t1

0xa031,	// (0x000aee4e) cam4_indicators_pane_g3_ParamLimits

0xa031,	// (0x000aee4e) cam4_indicators_pane_g3

0xa0af,	// (0x000aeecc) vid4_indicators_pane_g5_ParamLimits

0xa0af,	// (0x000aeecc) vid4_indicators_pane_g5

0xa16c,	// (0x000aef89) vid4_progress_pane_g5_ParamLimits

0xa16c,	// (0x000aef89) vid4_progress_pane_g5

0x77b3,	// (0x000ac5d0) main_ncimui_pane_g1

0x7819,	// (0x000ac636) ncimui_group_query_pane_ParamLimits

0x7819,	// (0x000ac636) ncimui_group_query_pane

0x7861,	// (0x000ac67e) ncimui_list_pane_ParamLimits

0x7861,	// (0x000ac67e) ncimui_list_pane

0x7888,	// (0x000ac6a5) ncimui_text_pane_ParamLimits

0x7888,	// (0x000ac6a5) ncimui_text_pane

0x7949,	// (0x000ac766) ncimui_text_pane_t1_ParamLimits

0x7949,	// (0x000ac766) ncimui_text_pane_t1

0xd297,	// (0x000b20b4) ncimui_list_single_graphic_pane_ParamLimits

0xd297,	// (0x000b20b4) ncimui_list_single_graphic_pane

0x7967,	// (0x000ac784) ncimui_query_pane_ParamLimits

0x7967,	// (0x000ac784) ncimui_query_pane

0xd4ca,	// (0x000b22e7) list_highlight_pane_cp013

0xd2a7,	// (0x000b20c4) ncim_list_query_list_pane_t1_copy1

0xd281,	// (0x000b209e) ncim_list_single_graphic_pane_g1

0xd2b5,	// (0x000b20d2) ncim_query_button_pane_cp01

0xd2c1,	// (0x000b20de) ncim_query_entry_pane_ParamLimits

0xd2c1,	// (0x000b20de) ncim_query_entry_pane

0xd2d4,	// (0x000b20f1) ncimui_query_pane_g1

0xd2e0,	// (0x000b20fd) ncimui_query_pane_t1_ParamLimits

0xd2e0,	// (0x000b20fd) ncimui_query_pane_t1

0xe923,	// (0x000b3740) input_focus_pane_cp012

0xd2f9,	// (0x000b2116) ncim_query_entry_pane_t1

0xe850,	// (0x000b366d) main_im_pane_ParamLimits

0x95ad,	// (0x000ae3ca) main_mobtv_pane_ParamLimits

0x95ad,	// (0x000ae3ca) main_mobtv_pane

0x755c,	// (0x000ac379) main_cset6_slider_pane_g18_ParamLimits

0x755c,	// (0x000ac379) main_cset6_slider_pane_g18

0x7568,	// (0x000ac385) main_cset6_slider_pane_g19_ParamLimits

0x7568,	// (0x000ac385) main_cset6_slider_pane_g19

0x797a,	// (0x000ac797) bg_main_mobtv_pane_ParamLimits

0x797a,	// (0x000ac797) bg_main_mobtv_pane

0x7988,	// (0x000ac7a5) main_mobtv_info_pane

0x7991,	// (0x000ac7ae) main_mobtv_loading_pane_ParamLimits

0x7991,	// (0x000ac7ae) main_mobtv_loading_pane

0xd30b,	// (0x000b2128) main_mobtv_pg_channel_list_pane

0xd315,	// (0x000b2132) main_mobtv_pg_hdr_pane

0x799e,	// (0x000ac7bb) main_mobtv_programe_curr_pane_ParamLimits

0x799e,	// (0x000ac7bb) main_mobtv_programe_curr_pane

0x79ab,	// (0x000ac7c8) main_mobtv_programe_next_pane_ParamLimits

0x79ab,	// (0x000ac7c8) main_mobtv_programe_next_pane

0xd31e,	// (0x000b213b) popup_mobtv_noti_window

0xbbef,	// (0x000b0a0c) main_tv_pg_hdr_pane_g1

0xd326,	// (0x000b2143) main_tv_pg_hdr_pane_g2

0xd32e,	// (0x000b214b) main_tv_pg_hdr_pane_g3

0xd336,	// (0x000b2153) main_tv_pg_hdr_pane_g4

0xd33e,	// (0x000b215b) main_tv_pg_hdr_pane_g5

0xd348,	// (0x000b2165) main_tv_pg_hdr_pane_g6

0xd352,	// (0x000b216f) main_tv_pg_hdr_pane_g7

0xd35c,	// (0x000b2179) main_tv_pg_hdr_pane_g8

0xd366,	// (0x000b2183) main_tv_pg_hdr_pane_g9

0xd370,	// (0x000b218d) main_tv_pg_hdr_pane_g10

0xd37a,	// (0x000b2197) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x000b4a2b) main_tv_pg_hdr_pane_g

0xd384,	// (0x000b21a1) main_tv_pg_hdr_pane_t1

0xd392,	// (0x000b21af) main_tv_pg_hdr_pane_t2

0xd3a0,	// (0x000b21bd) main_tv_pg_hdr_pane_t3

0xd3b0,	// (0x000b21cd) main_tv_pg_hdr_pane_t4

0xd3c0,	// (0x000b21dd) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x000b4a42) main_tv_pg_hdr_pane_t

0xd3d0,	// (0x000b21ed) single_mobtv_pg_channel_pane_ParamLimits

0xd3d0,	// (0x000b21ed) single_mobtv_pg_channel_pane

0xd3e2,	// (0x000b21ff) single_mobtv_pg_channel_table_pane

0xd3eb,	// (0x000b2208) single_mobtv_pg_channel_thumb_pane

0xd3f4,	// (0x000b2211) single_tv_pg_channel_pane_g1

0xd3fd,	// (0x000b221a) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x000b4a4d) single_tv_pg_channel_pane_g

0xbe4f,	// (0x000b0c6c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbe4f,	// (0x000b0c6c) bg_single_mobtv_pg_channel_thumb_pane

0xd406,	// (0x000b2223) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd406,	// (0x000b2223) single_mobtv_pg_channel_thumb_pane_g1

0xd414,	// (0x000b2231) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd414,	// (0x000b2231) single_mobtv_pg_channel_thumb_pane_g2

0xd420,	// (0x000b223d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd420,	// (0x000b223d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x000b4a52) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x000b4a52) single_mobtv_pg_channel_thumb_pane_g

0xd42c,	// (0x000b2249) single_mobtv_pg_channel_thumb_pane_t1

0xd43a,	// (0x000b2257) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x000b4a59) single_mobtv_pg_channel_thumb_pane_t

0xbbef,	// (0x000b0a0c) bg_single_mobtv_pg_channel_table_pane_g1

0xbbef,	// (0x000b0a0c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x000b4504) bg_single_mobtv_pg_channel_table_pane_g

0xd448,	// (0x000b2265) single_mobtv_pg_channel_table_pane_t1

0xd456,	// (0x000b2273) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x000b4a5e) single_mobtv_pg_channel_table_pane_t

0x79c0,	// (0x000ac7dd) main_mobtv_info_pane_g1_ParamLimits

0x79c0,	// (0x000ac7dd) main_mobtv_info_pane_g1

0x79de,	// (0x000ac7fb) main_mobtv_info_pane_t1_ParamLimits

0x79de,	// (0x000ac7fb) main_mobtv_info_pane_t1

0x7a56,	// (0x000ac873) main_mobtv_info_pane_t2_ParamLimits

0x7a56,	// (0x000ac873) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x000b4a68) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x000b4a68) main_mobtv_info_pane_t

0x7ae5,	// (0x000ac902) wait_bar_pane_cp05

0x7af7,	// (0x000ac914) main_mobtv_loading_pane_g1_ParamLimits

0x7af7,	// (0x000ac914) main_mobtv_loading_pane_g1

0x7b0a,	// (0x000ac927) main_mobtv_loading_pane_g2_ParamLimits

0x7b0a,	// (0x000ac927) main_mobtv_loading_pane_g2

0x7b16,	// (0x000ac933) main_mobtv_loading_pane_g3_ParamLimits

0x7b16,	// (0x000ac933) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x000b4a6f) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x000b4a6f) main_mobtv_loading_pane_g

0xd464,	// (0x000b2281) main_mobtv_loading_pane_t1_ParamLimits

0xd464,	// (0x000b2281) main_mobtv_loading_pane_t1

0xd47c,	// (0x000b2299) main_mobtv_loading_pane_t2_ParamLimits

0xd47c,	// (0x000b2299) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x000b4a76) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x000b4a76) main_mobtv_loading_pane_t

0x7b29,	// (0x000ac946) wait_bar_pane_cp06_ParamLimits

0x7b29,	// (0x000ac946) wait_bar_pane_cp06

0xd4a0,	// (0x000b22bd) main_mobtv_programe_curr_pane_t1

0xd4ae,	// (0x000b22cb) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x000b4a7b) main_mobtv_programe_curr_pane_t

0xd4bc,	// (0x000b22d9) main_mobtv_programe_next_pane_t1

0xd519,	// (0x000b2336) main_mobtv_programe_next_pane_t2

0xd527,	// (0x000b2344) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x000b4a80) main_mobtv_programe_next_pane_t

0xd4ca,	// (0x000b22e7) bg_popup_mobtv_noti_window_pane

0xd535,	// (0x000b2352) popup_mobtv_noti_window_g1

0xd53d,	// (0x000b235a) popup_mobtv_noti_window_t1

0xd54b,	// (0x000b2368) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x000b4a87) popup_mobtv_noti_window_t

0xbbef,	// (0x000b0a0c) bg_popup_mobtv_noti_window_pane_g1

0x95bb,	// (0x000ae3d8) sc_clock_pane

0x95bb,	// (0x000ae3d8) main_fs_bigclock_pane

0x7169,	// (0x000abf86) blid2_tripm_pane_t4_ParamLimits

0x7169,	// (0x000abf86) blid2_tripm_pane_t4

0x7b38,	// (0x000ac955) sc_clock_pane_g1_ParamLimits

0x7b38,	// (0x000ac955) sc_clock_pane_g1

0x7b4a,	// (0x000ac967) sc_clock_pane_t1_ParamLimits

0x7b4a,	// (0x000ac967) sc_clock_pane_t1

0x7b6c,	// (0x000ac989) sc_clock_pane_t2_ParamLimits

0x7b6c,	// (0x000ac989) sc_clock_pane_t2

0x7b84,	// (0x000ac9a1) sc_clock_pane_t3_ParamLimits

0x7b84,	// (0x000ac9a1) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x000b4a8c) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x000b4a8c) sc_clock_pane_t

0x8a6e,	// (0x000ad88b) main_fs_bigclock_indicator_pane_ParamLimits

0x8a6e,	// (0x000ad88b) main_fs_bigclock_indicator_pane

0xbe1f,	// (0x000b0c3c) main_fs_bigclock_pane_g1_ParamLimits

0xbe1f,	// (0x000b0c3c) main_fs_bigclock_pane_g1

0x8a7a,	// (0x000ad897) main_fs_bigclock_pane_t1_ParamLimits

0x8a7a,	// (0x000ad897) main_fs_bigclock_pane_t1

0x8a8c,	// (0x000ad8a9) main_fs_bigclock_pane_t2_ParamLimits

0x8a8c,	// (0x000ad8a9) main_fs_bigclock_pane_t2

0x8a9e,	// (0x000ad8bb) main_fs_bigclock_pane_t3_ParamLimits

0x8a9e,	// (0x000ad8bb) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000b4c90) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000b4c90) main_fs_bigclock_pane_t

0xe093,	// (0x000b2eb0) main_fs_bigclock_indicator_pane_g1

0xd1d0,	// (0x000b1fed) ncim_query_content_pane_g2_ParamLimits

0xd1d0,	// (0x000b1fed) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x000b4a19) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x000b4a19) ncim_query_content_pane_g

0x7b9d,	// (0x000ac9ba) sc_clock_pane_t4_ParamLimits

0x7b9d,	// (0x000ac9ba) sc_clock_pane_t4

0x95ad,	// (0x000ae3ca) main_radioblah_pane

0xc5fd,	// (0x000b141a) cell_call4_button_pane_t1_copy1_ParamLimits

0xc5fd,	// (0x000b141a) cell_call4_button_pane_t1_copy1

0x77cb,	// (0x000ac5e8) main_ncimui_pane_t1_ParamLimits

0x77cb,	// (0x000ac5e8) main_ncimui_pane_t1

0x77e5,	// (0x000ac602) main_ncimui_pane_t2_ParamLimits

0x77e5,	// (0x000ac602) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x000b4a12) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x000b4a12) main_ncimui_pane_t

0xd686,	// (0x000b24a3) main_radioblah_anim_pane_ParamLimits

0xd686,	// (0x000b24a3) main_radioblah_anim_pane

0xd697,	// (0x000b24b4) main_radioblah_info_pane_ParamLimits

0xd697,	// (0x000b24b4) main_radioblah_info_pane

0xd6ab,	// (0x000b24c8) main_radioblah_pane_t1_ParamLimits

0xd6ab,	// (0x000b24c8) main_radioblah_pane_t1

0xd6c7,	// (0x000b24e4) main_radioblah_pane_t2_ParamLimits

0xd6c7,	// (0x000b24e4) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x000b4aad) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x000b4aad) main_radioblah_pane_t

0x7c53,	// (0x000aca70) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7c53,	// (0x000aca70) main_radioblah_rocker_ctrl_pane

0xd70f,	// (0x000b252c) main_radioblah_info_pane_t1_ParamLimits

0xd70f,	// (0x000b252c) main_radioblah_info_pane_t1

0x7cab,	// (0x000acac8) main_radioblah_info_pane_t2_ParamLimits

0x7cab,	// (0x000acac8) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x000b4ab6) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x000b4ab6) main_radioblah_info_pane_t

0xbbef,	// (0x000b0a0c) main_radioblah_rocker_ctrl_pane_g1

0x7d5b,	// (0x000acb78) main_radioblah_rocker_ctrl_pane_g2

0x7d63,	// (0x000acb80) main_radioblah_rocker_ctrl_pane_g3

0x7d6b,	// (0x000acb88) main_radioblah_rocker_ctrl_pane_g4

0x7d73,	// (0x000acb90) main_radioblah_rocker_ctrl_pane_g5

0x7d7b,	// (0x000acb98) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x000b4abf) main_radioblah_rocker_ctrl_pane_g

0x7781,	// (0x000ac59e) main_cset_text2_pane_t1_copy1_ParamLimits

0x9ff3,	// (0x000aee10) cam4_image_uncrop_qvga_pane

0xa05a,	// (0x000aee77) vid4_image_uncrop_qcif_pane

0xa1cc,	// (0x000aefe9) cam6_image_uncrop_qvga_pane_ParamLimits

0xa1cc,	// (0x000aefe9) cam6_image_uncrop_qvga_pane

0xcebc,	// (0x000b1cd9) vid6_image_uncrop_qcif_pane_ParamLimits

0xcebc,	// (0x000b1cd9) vid6_image_uncrop_qcif_pane

0xd4ca,	// (0x000b22e7) bg_popup_preview_window_pane_cp03

0xd182,	// (0x000b1f9f) list_cset_text2_pane

0xd18a,	// (0x000b1fa7) main_cset6_text2_pane_g1

0xd192,	// (0x000b1faf) main_cset6_text2_pane_t1

0x7d83,	// (0x000acba0) list_cset_text2_pane_t1_ParamLimits

0x7d83,	// (0x000acba0) list_cset_text2_pane_t1

0x95ad,	// (0x000ae3ca) main_radioblah_pane_ParamLimits

0x7ad1,	// (0x000ac8ee) main_mobtv_info_pane_t3_ParamLimits

0x7ad1,	// (0x000ac8ee) main_mobtv_info_pane_t3

0x7c41,	// (0x000aca5e) main_radioblah_pane_g1

0x7c7b,	// (0x000aca98) main_radioblah_info_pane_g1

0x7d00,	// (0x000acb1d) main_radioblah_info_pane_t3_ParamLimits

0x7d00,	// (0x000acb1d) main_radioblah_info_pane_t3

0x244e,	// (0x000a726b) highlight_cell_cale_month_pane_ParamLimits

0x244e,	// (0x000a726b) highlight_cell_cale_month_pane

0x95bb,	// (0x000ae3d8) main_phob_fisheye_pane

0xbf9f,	// (0x000b0dbc) scroll_pane_cp0031_ParamLimits

0xbf9f,	// (0x000b0dbc) scroll_pane_cp0031

0xcfca,	// (0x000b1de7) wait_bar_pane_cp08_ParamLimits

0x74b6,	// (0x000ac2d3) cset_list_set_pane_copy1_ParamLimits

0xd749,	// (0x000b2566) highlight_cell_cale_month_pane_g1

0x7d9e,	// (0x000acbbb) highlight_cell_cale_month_pane_t1

0xcc4e,	// (0x000b1a6b) list_gen_pane_cp01

0xc7f5,	// (0x000b1612) scroll_pane_01

0x7dac,	// (0x000acbc9) list_single_double_fisheye_pane

0x7db5,	// (0x000acbd2) list_double_fisheye_pane_g1_ParamLimits

0x7db5,	// (0x000acbd2) list_double_fisheye_pane_g1

0x7dc1,	// (0x000acbde) list_double_fisheye_pane_g2_ParamLimits

0x7dc1,	// (0x000acbde) list_double_fisheye_pane_g2

0x7dd5,	// (0x000acbf2) list_double_fisheye_pane_g3_ParamLimits

0x7dd5,	// (0x000acbf2) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x000b4acc) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x000b4acc) list_double_fisheye_pane_g

0x7dfe,	// (0x000acc1b) list_double_fisheye_pane_t1_ParamLimits

0x7dfe,	// (0x000acc1b) list_double_fisheye_pane_t1

0x7e19,	// (0x000acc36) list_double_fisheye_pane_t2_ParamLimits

0x7e19,	// (0x000acc36) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x000b4ad7) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x000b4ad7) list_double_fisheye_pane_t

0x95bb,	// (0x000ae3d8) main_call5_pane

0x7bc8,	// (0x000ac9e5) sc_swipe_pane_ParamLimits

0x7bc8,	// (0x000ac9e5) sc_swipe_pane

0x7e4e,	// (0x000acc6b) call5_image_pane_ParamLimits

0x7e4e,	// (0x000acc6b) call5_image_pane

0x7e6b,	// (0x000acc88) call5_swipe_1_pane_ParamLimits

0x7e6b,	// (0x000acc88) call5_swipe_1_pane

0x7e7e,	// (0x000acc9b) call5_swipe_2_pane_ParamLimits

0x7e7e,	// (0x000acc9b) call5_swipe_2_pane

0x7ea9,	// (0x000accc6) popup_call5_audio_first_window_ParamLimits

0x7ea9,	// (0x000accc6) popup_call5_audio_first_window

0xbe4f,	// (0x000b0c6c) call5_swipe_1_pane_g1_ParamLimits

0xbe4f,	// (0x000b0c6c) call5_swipe_1_pane_g1

0xd751,	// (0x000b256e) call5_swipe_1_pane_g2_ParamLimits

0xd751,	// (0x000b256e) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x000b4adc) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x000b4adc) call5_swipe_1_pane_g

0xd75d,	// (0x000b257a) call5_swipe_1_pane_t1_ParamLimits

0xd75d,	// (0x000b257a) call5_swipe_1_pane_t1

0xbe4f,	// (0x000b0c6c) call5_swipe_2_pane_g1_ParamLimits

0xbe4f,	// (0x000b0c6c) call5_swipe_2_pane_g1

0xd772,	// (0x000b258f) call5_swipe_2_pane_g2_ParamLimits

0xd772,	// (0x000b258f) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x000b4ae1) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x000b4ae1) call5_swipe_2_pane_g

0xd77e,	// (0x000b259b) call5_swipe_2_pane_t1_ParamLimits

0xd77e,	// (0x000b259b) call5_swipe_2_pane_t1

0xd793,	// (0x000b25b0) sc_swipe_pane_g1_ParamLimits

0xd793,	// (0x000b25b0) sc_swipe_pane_g1

0xd7a0,	// (0x000b25bd) sc_swipe_pane_g2_ParamLimits

0xd7a0,	// (0x000b25bd) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x000b4ae6) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x000b4ae6) sc_swipe_pane_g

0xd7ac,	// (0x000b25c9) sc_swipe_pane_t1_ParamLimits

0xd7ac,	// (0x000b25c9) sc_swipe_pane_t1

0x95bb,	// (0x000ae3d8) main_cmail_launcher_pane

0x7eba,	// (0x000accd7) aid_size_cell_cmail_l_ParamLimits

0x7eba,	// (0x000accd7) aid_size_cell_cmail_l

0x7ed4,	// (0x000accf1) grid_cmail_l_pane_ParamLimits

0x7ed4,	// (0x000accf1) grid_cmail_l_pane

0x7eef,	// (0x000acd0c) cell_cmail_l_pane_ParamLimits

0x7eef,	// (0x000acd0c) cell_cmail_l_pane

0x7f15,	// (0x000acd32) cell_cmail_l_pane_g1_ParamLimits

0x7f15,	// (0x000acd32) cell_cmail_l_pane_g1

0x7f26,	// (0x000acd43) cell_cmail_l_pane_t1_ParamLimits

0x7f26,	// (0x000acd43) cell_cmail_l_pane_t1

0xd7c1,	// (0x000b25de) cell_cmail_l_pane_t2_ParamLimits

0xd7c1,	// (0x000b25de) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x000b4aeb) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x000b4aeb) cell_cmail_l_pane_t

0xe923,	// (0x000b3740) grid_highlight_pane_cp018_ParamLimits

0xe923,	// (0x000b3740) grid_highlight_pane_cp018

0x0395,	// (0x000a51b2) main2_pane_ParamLimits

0x0395,	// (0x000a51b2) main2_pane

0xe8fb,	// (0x000b3718) popup_sp_fs_action_menu_bg_pane_g1

0xe903,	// (0x000b3720) popup_sp_fs_action_menu_bg_pane_g2

0xe90b,	// (0x000b3728) popup_sp_fs_action_menu_bg_pane_g3

0xe913,	// (0x000b3730) popup_sp_fs_action_menu_bg_pane_g4

0xe91b,	// (0x000b3738) popup_sp_fs_action_menu_bg_pane_g5

0xedb4,	// (0x000b3bd1) popup_sp_fs_action_menu_bg_pane_g6

0xedbc,	// (0x000b3bd9) popup_sp_fs_action_menu_bg_pane_g7

0xedc4,	// (0x000b3be1) popup_sp_fs_action_menu_bg_pane_g8

0xedcc,	// (0x000b3be9) popup_sp_fs_action_menu_bg_pane_g9

0xedd4,	// (0x000b3bf1) popup_sp_fs_action_menu_bg_pane_g10

0xedd4,	// (0x000b3bf1) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x000b3fb0) popup_sp_fs_action_menu_bg_pane_g

0x1392,	// (0x000a61af) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1392,	// (0x000a61af) list_medium_line_x2_t3_g3_g1

0x139e,	// (0x000a61bb) list_medium_line_x2_t3_g3_g2_ParamLimits

0x139e,	// (0x000a61bb) list_medium_line_x2_t3_g3_g2

0x13aa,	// (0x000a61c7) list_medium_line_x2_t3_g3_g3_ParamLimits

0x13aa,	// (0x000a61c7) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x000b4060) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x000b4060) list_medium_line_x2_t3_g3_g

0x13b6,	// (0x000a61d3) list_medium_line_x2_t3_g3_t1_ParamLimits

0x13b6,	// (0x000a61d3) list_medium_line_x2_t3_g3_t1

0x13cb,	// (0x000a61e8) list_medium_line_x2_t3_g3_t2_ParamLimits

0x13cb,	// (0x000a61e8) list_medium_line_x2_t3_g3_t2

0x13df,	// (0x000a61fc) list_medium_line_x2_t3_g3_t3_ParamLimits

0x13df,	// (0x000a61fc) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x000b4067) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x000b4067) list_medium_line_x2_t3_g3_t

0x1392,	// (0x000a61af) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1392,	// (0x000a61af) list_medium_line_x2_t3_g2_g1

0x13aa,	// (0x000a61c7) list_medium_line_x2_t3_g2_g2_ParamLimits

0x13aa,	// (0x000a61c7) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x000b406e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x000b406e) list_medium_line_x2_t3_g2_g

0x13f4,	// (0x000a6211) list_medium_line_x2_t3_g2_t1_ParamLimits

0x13f4,	// (0x000a6211) list_medium_line_x2_t3_g2_t1

0x140a,	// (0x000a6227) list_medium_line_x2_t3_g2_t2_ParamLimits

0x140a,	// (0x000a6227) list_medium_line_x2_t3_g2_t2

0x141c,	// (0x000a6239) list_medium_line_x2_t3_g2_t3_ParamLimits

0x141c,	// (0x000a6239) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x000b4073) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x000b4073) list_medium_line_x2_t3_g2_t

0x1392,	// (0x000a61af) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1392,	// (0x000a61af) list_medium_line_x2_t4_g4_g1

0x1439,	// (0x000a6256) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1439,	// (0x000a6256) list_medium_line_x2_t4_g4_g2

0x139e,	// (0x000a61bb) list_medium_line_x2_t4_g4_g3_ParamLimits

0x139e,	// (0x000a61bb) list_medium_line_x2_t4_g4_g3

0x1445,	// (0x000a6262) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1445,	// (0x000a6262) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x000b407a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x000b407a) list_medium_line_x2_t4_g4_g

0x1451,	// (0x000a626e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1451,	// (0x000a626e) list_medium_line_x2_t4_g4_t1

0x1468,	// (0x000a6285) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1468,	// (0x000a6285) list_medium_line_x2_t4_g4_t2

0x147d,	// (0x000a629a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x147d,	// (0x000a629a) list_medium_line_x2_t4_g4_t3

0x148f,	// (0x000a62ac) list_medium_line_x2_t4_g4_t4_ParamLimits

0x148f,	// (0x000a62ac) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x000b4083) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x000b4083) list_medium_line_x2_t4_g4_t

0x1392,	// (0x000a61af) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1392,	// (0x000a61af) list_medium_line_x2_t2_g4_g1

0x1439,	// (0x000a6256) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1439,	// (0x000a6256) list_medium_line_x2_t2_g4_g2

0x139e,	// (0x000a61bb) list_medium_line_x2_t2_g4_g3_ParamLimits

0x139e,	// (0x000a61bb) list_medium_line_x2_t2_g4_g3

0x13aa,	// (0x000a61c7) list_medium_line_x2_t2_g4_g4_ParamLimits

0x13aa,	// (0x000a61c7) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x000b40ea) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x000b40ea) list_medium_line_x2_t2_g4_g

0x2474,	// (0x000a7291) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2474,	// (0x000a7291) list_medium_line_x2_t2_g4_t1

0x13df,	// (0x000a61fc) list_medium_line_x2_t2_g4_t2_ParamLimits

0x13df,	// (0x000a61fc) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x000b40f3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x000b40f3) list_medium_line_x2_t2_g4_t

0x1392,	// (0x000a61af) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1392,	// (0x000a61af) list_medium_line_x2_t2_g3_g1

0x139e,	// (0x000a61bb) list_medium_line_x2_t2_g3_g2_ParamLimits

0x139e,	// (0x000a61bb) list_medium_line_x2_t2_g3_g2

0x13aa,	// (0x000a61c7) list_medium_line_x2_t2_g3_g3_ParamLimits

0x13aa,	// (0x000a61c7) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x000b4060) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x000b4060) list_medium_line_x2_t2_g3_g

0x2489,	// (0x000a72a6) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2489,	// (0x000a72a6) list_medium_line_x2_t2_g3_t1

0x13df,	// (0x000a61fc) list_medium_line_x2_t2_g3_t2_ParamLimits

0x13df,	// (0x000a61fc) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x000b40f8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x000b40f8) list_medium_line_x2_t2_g3_t

0x2649,	// (0x000a7466) main_sp_fs_list_pane_ParamLimits

0x2649,	// (0x000a7466) main_sp_fs_list_pane

0xaf6a,	// (0x000afd87) sp_fs_scroll_pane_ParamLimits

0xaf6a,	// (0x000afd87) sp_fs_scroll_pane

0x2655,	// (0x000a7472) list_medium_line_x2_t3_t1

0x2665,	// (0x000a7482) list_medium_line_x2_t3_t2

0x2673,	// (0x000a7490) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x000b4143) list_medium_line_x2_t3_t

0x2681,	// (0x000a749e) list_medium_line_x3_t4_t1

0x2691,	// (0x000a74ae) list_medium_line_x3_t4_t2

0x269f,	// (0x000a74bc) list_medium_line_x3_t4_t3

0x2673,	// (0x000a7490) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x000b414a) list_medium_line_x3_t4_t

0x26ad,	// (0x000a74ca) list_medium_line_x4_t5_t1

0x26bd,	// (0x000a74da) list_medium_line_x4_t5_t2

0x269f,	// (0x000a74bc) list_medium_line_x4_t5_t3

0x26cb,	// (0x000a74e8) list_medium_line_x4_t5_t4

0x2673,	// (0x000a7490) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x000b4153) list_medium_line_x4_t5_t

0x1392,	// (0x000a61af) list_medium_line_t4_g4_g1_ParamLimits

0x1392,	// (0x000a61af) list_medium_line_t4_g4_g1

0x1445,	// (0x000a6262) list_medium_line_t4_g4_g2_ParamLimits

0x1445,	// (0x000a6262) list_medium_line_t4_g4_g2

0x26d9,	// (0x000a74f6) list_medium_line_t4_g4_g3_ParamLimits

0x26d9,	// (0x000a74f6) list_medium_line_t4_g4_g3

0x13aa,	// (0x000a61c7) list_medium_line_t4_g4_g4_ParamLimits

0x13aa,	// (0x000a61c7) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x000b415e) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x000b415e) list_medium_line_t4_g4_g

0x26e5,	// (0x000a7502) list_medium_line_t4_g4_t1_ParamLimits

0x26e5,	// (0x000a7502) list_medium_line_t4_g4_t1

0x26fa,	// (0x000a7517) list_medium_line_t4_g4_t2_ParamLimits

0x26fa,	// (0x000a7517) list_medium_line_t4_g4_t2

0x270f,	// (0x000a752c) list_medium_line_t4_g4_t3_ParamLimits

0x270f,	// (0x000a752c) list_medium_line_t4_g4_t3

0x13df,	// (0x000a61fc) list_medium_line_t4_g4_t4_ParamLimits

0x13df,	// (0x000a61fc) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x000b4167) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x000b4167) list_medium_line_t4_g4_t

0x27c3,	// (0x000a75e0) chi_dic_find_pane_g1

0x3978,	// (0x000a8795) main_tport_pane

0x6800,	// (0x000ab61d) list_medium_line_plain_t1

0x68b2,	// (0x000ab6cf) list_medium_line_t2_g2_g1_ParamLimits

0x68b2,	// (0x000ab6cf) list_medium_line_t2_g2_g1

0x68be,	// (0x000ab6db) list_medium_line_t2_g2_g2_ParamLimits

0x68be,	// (0x000ab6db) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x000b4823) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x000b4823) list_medium_line_t2_g2_g

0x68ca,	// (0x000ab6e7) list_medium_line_t2_g2_t1_ParamLimits

0x68ca,	// (0x000ab6e7) list_medium_line_t2_g2_t1

0x68e4,	// (0x000ab701) list_medium_line_t2_g2_t2_ParamLimits

0x68e4,	// (0x000ab701) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x000b4828) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x000b4828) list_medium_line_t2_g2_t

0xcc57,	// (0x000b1a74) aid_sp_fs_list_icon_a_sm

0xe931,	// (0x000b374e) aid_sp_fs_list_icon_d

0xf0ca,	// (0x000b3ee7) aid_sp_fs_text_primary

0xcc5f,	// (0x000b1a7c) aid_sp_fs_text_secondary

0x6f16,	// (0x000abd33) list_medium_line

0x6f16,	// (0x000abd33) list_medium_line_g2

0x6f16,	// (0x000abd33) list_medium_line_g3

0x6f16,	// (0x000abd33) list_medium_line_plain

0x6f16,	// (0x000abd33) list_medium_line_plain_t2

0x6f16,	// (0x000abd33) list_medium_line_plain_t3

0x6f16,	// (0x000abd33) list_medium_line_right_icon

0x6f16,	// (0x000abd33) list_medium_line_right_iconx2

0x6f16,	// (0x000abd33) list_medium_line_t2

0x6f16,	// (0x000abd33) list_medium_line_t2_g2

0x6f16,	// (0x000abd33) list_medium_line_t2_g3

0x6f16,	// (0x000abd33) list_medium_line_t2_right_icon

0x6f16,	// (0x000abd33) list_medium_line_t2_right_iconx2

0x6f16,	// (0x000abd33) list_medium_line_t3

0x6f16,	// (0x000abd33) list_medium_line_t3_g2

0x6f16,	// (0x000abd33) list_medium_line_t3_g3

0x6f16,	// (0x000abd33) list_medium_line_t3_right_iconx2

0x6f1f,	// (0x000abd3c) list_medium_line_t4_g4

0x6f28,	// (0x000abd45) list_medium_line_x2

0x6f28,	// (0x000abd45) list_medium_line_x2_t2_g2

0x6f28,	// (0x000abd45) list_medium_line_x2_t2_g3

0x6f28,	// (0x000abd45) list_medium_line_x2_t2_g4

0x6f28,	// (0x000abd45) list_medium_line_x2_t3

0x6f28,	// (0x000abd45) list_medium_line_x2_t3_g2

0x6f28,	// (0x000abd45) list_medium_line_x2_t3_g3

0x6f28,	// (0x000abd45) list_medium_line_x2_t3_g4

0x6f28,	// (0x000abd45) list_medium_line_x2_t4_g2

0x6f28,	// (0x000abd45) list_medium_line_x2_t4_g4

0x6f31,	// (0x000abd4e) list_medium_line_x3

0x6f31,	// (0x000abd4e) list_medium_line_x3_t4

0x6f31,	// (0x000abd4e) list_medium_line_x3_t4_g4

0x6f1f,	// (0x000abd3c) list_medium_line_x4_t4

0x6f1f,	// (0x000abd3c) list_medium_line_x4_t4_g7

0x6f1f,	// (0x000abd3c) list_medium_line_x4_t5

0x6f3a,	// (0x000abd57) list_single_fs_dyc_pane_ParamLimits

0x6f3a,	// (0x000abd57) list_single_fs_dyc_pane

0x1392,	// (0x000a61af) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1392,	// (0x000a61af) list_medium_line_x4_t4_g7_g1

0x76b0,	// (0x000ac4cd) list_medium_line_x4_t4_g7_g2_ParamLimits

0x76b0,	// (0x000ac4cd) list_medium_line_x4_t4_g7_g2

0x76bc,	// (0x000ac4d9) list_medium_line_x4_t4_g7_g3_ParamLimits

0x76bc,	// (0x000ac4d9) list_medium_line_x4_t4_g7_g3

0x76cb,	// (0x000ac4e8) list_medium_line_x4_t4_g7_g4_ParamLimits

0x76cb,	// (0x000ac4e8) list_medium_line_x4_t4_g7_g4

0x76d7,	// (0x000ac4f4) list_medium_line_x4_t4_g7_g5_ParamLimits

0x76d7,	// (0x000ac4f4) list_medium_line_x4_t4_g7_g5

0x76e6,	// (0x000ac503) list_medium_line_x4_t4_g7_g6_ParamLimits

0x76e6,	// (0x000ac503) list_medium_line_x4_t4_g7_g6

0x76f5,	// (0x000ac512) list_medium_line_x4_t4_g7_g7_ParamLimits

0x76f5,	// (0x000ac512) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x000b49f3) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x000b49f3) list_medium_line_x4_t4_g7_g

0x7701,	// (0x000ac51e) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7701,	// (0x000ac51e) list_medium_line_x4_t4_g7_t1

0x7716,	// (0x000ac533) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7716,	// (0x000ac533) list_medium_line_x4_t4_g7_t2

0x772b,	// (0x000ac548) list_medium_line_x4_t4_g7_t3_ParamLimits

0x772b,	// (0x000ac548) list_medium_line_x4_t4_g7_t3

0x7740,	// (0x000ac55d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7740,	// (0x000ac55d) list_medium_line_x4_t4_g7_t4

0x7752,	// (0x000ac56f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7752,	// (0x000ac56f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x000b4a02) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x000b4a02) list_medium_line_x4_t4_g7_t

0x7764,	// (0x000ac581) list_single_dyc_row_pane_ParamLimits

0x7764,	// (0x000ac581) list_single_dyc_row_pane

0x7e3b,	// (0x000acc58) call5_gesture_pane_ParamLimits

0x7e3b,	// (0x000acc58) call5_gesture_pane

0x7e91,	// (0x000accae) call5_windows_pane_ParamLimits

0x7e91,	// (0x000accae) call5_windows_pane

0x7f3c,	// (0x000acd59) call5_swipe_1_pane_cp_ParamLimits

0x7f3c,	// (0x000acd59) call5_swipe_1_pane_cp

0x7f48,	// (0x000acd65) call5_swipe_2_pane_cp_ParamLimits

0x7f48,	// (0x000acd65) call5_swipe_2_pane_cp

0xa3bd,	// (0x000af1da) call5_image_pane_cp

0x7f54,	// (0x000acd71) popup_call5_audio_first_window_cp_ParamLimits

0x7f54,	// (0x000acd71) popup_call5_audio_first_window_cp

0xd793,	// (0x000b25b0) call5_swipe_1_pane_g1_cp_ParamLimits

0xd793,	// (0x000b25b0) call5_swipe_1_pane_g1_cp

0xd7d3,	// (0x000b25f0) call5_swipe_1_pane_g2_cp

0xd7ac,	// (0x000b25c9) call5_swipe_1_pane_t1_cp_ParamLimits

0xd7ac,	// (0x000b25c9) call5_swipe_1_pane_t1_cp

0xd793,	// (0x000b25b0) call5_swipe_2_pane_g1_cp_ParamLimits

0xd793,	// (0x000b25b0) call5_swipe_2_pane_g1_cp

0xd7db,	// (0x000b25f8) call5_swipe_2_pane_g2_cp

0xd7e3,	// (0x000b2600) call5_swipe_2_pane_t1_cp_ParamLimits

0xd7e3,	// (0x000b2600) call5_swipe_2_pane_t1_cp

0xe923,	// (0x000b3740) main_sp_fs_email_pane

0xd7f8,	// (0x000b2615) main_sp_fs_listscroll_pane_te

0xe939,	// (0x000b3756) popup_sp_fs_action_menu_pane_ParamLimits

0xe939,	// (0x000b3756) popup_sp_fs_action_menu_pane

0xbbef,	// (0x000b0a0c) bg_sp_fs_ctrlbar_pane_g1

0xd801,	// (0x000b261e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd80a,	// (0x000b2627) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd813,	// (0x000b2630) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbbef,	// (0x000b0a0c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x000b4af0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xb9d2,	// (0x000b07ef) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xb9d2,	// (0x000b07ef) bg_sp_fs_ctrlbar_ddmenu_pane

0xd81c,	// (0x000b2639) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd81c,	// (0x000b2639) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd828,	// (0x000b2645) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd828,	// (0x000b2645) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x000b4af9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x000b4af9) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd834,	// (0x000b2651) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd834,	// (0x000b2651) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7f62,	// (0x000acd7f) list_medium_line_t2_right_icon_g1

0x7f6a,	// (0x000acd87) list_medium_line_t2_right_icon_t1

0x7f7a,	// (0x000acd97) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x000b4afe) list_medium_line_t2_right_icon_t

0xb7e5,	// (0x000b0602) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb7e5,	// (0x000b0602) bg_sp_fs_ctrlbar_pane

0x7fd4,	// (0x000acdf1) main_sp_fs_ctrlbar_button_pane_cp01

0x7fde,	// (0x000acdfb) main_sp_fs_ctrlbar_ddmenu_pane

0xd886,	// (0x000b26a3) main_sp_fs_ctrlbar_pane_g1

0xd892,	// (0x000b26af) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x000b4b03) main_sp_fs_ctrlbar_pane_g

0xd89e,	// (0x000b26bb) main_sp_fs_ctrlbar_pane_t1

0x7fe8,	// (0x000ace05) main_sp_fs_ctrlbar_pane

0x800c,	// (0x000ace29) main_sp_fs_listscroll_pane_te_cp01

0x802c,	// (0x000ace49) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x802c,	// (0x000ace49) popup_sp_fs_action_menu_pane_cp01

0xe923,	// (0x000b3740) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe923,	// (0x000b3740) bg_sp_fs_highlight_list_pane_cp01

0xd8ce,	// (0x000b26eb) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd8ce,	// (0x000b26eb) sp_fs_action_menu_list_gene_pane_g1

0xd8dd,	// (0x000b26fa) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xd8dd,	// (0x000b26fa) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x000b4b0d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x000b4b0d) sp_fs_action_menu_list_gene_pane_g

0xd8ea,	// (0x000b2707) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd8ea,	// (0x000b2707) sp_fs_action_menu_list_gene_pane_t1

0xd902,	// (0x000b271f) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd902,	// (0x000b271f) sp_fs_action_menu_list_gene_pane

0xd921,	// (0x000b273e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd921,	// (0x000b273e) popup_sp_fs_action_menu_bg_pane

0xd92f,	// (0x000b274c) sp_fs_action_menu_list_pane_ParamLimits

0xd92f,	// (0x000b274c) sp_fs_action_menu_list_pane

0xe97b,	// (0x000b3798) sp_fs_scroll_pane_cp01_ParamLimits

0xe97b,	// (0x000b3798) sp_fs_scroll_pane_cp01

0x805c,	// (0x000ace79) list_medium_line_plain_t2_t1

0x806c,	// (0x000ace89) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x000b4b12) list_medium_line_plain_t2_t

0x807c,	// (0x000ace99) list_medium_line_plain_t3_t1

0x808c,	// (0x000acea9) list_medium_line_plain_t3_t2

0x809a,	// (0x000aceb7) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x000b4b17) list_medium_line_plain_t3_t

0x1392,	// (0x000a61af) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1392,	// (0x000a61af) list_medium_line_x2_t2_g2_g1

0x13aa,	// (0x000a61c7) list_medium_line_x2_t2_g2_g2_ParamLimits

0x13aa,	// (0x000a61c7) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x000b406e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x000b406e) list_medium_line_x2_t2_g2_g

0x26e5,	// (0x000a7502) list_medium_line_x2_t2_g2_t1_ParamLimits

0x26e5,	// (0x000a7502) list_medium_line_x2_t2_g2_t1

0x13df,	// (0x000a61fc) list_medium_line_x2_t2_g2_t2_ParamLimits

0x13df,	// (0x000a61fc) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x000b4b1e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x000b4b1e) list_medium_line_x2_t2_g2_t

0x1392,	// (0x000a61af) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1392,	// (0x000a61af) list_medium_line_x2_t4_g2_g1

0x80a8,	// (0x000acec5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x80a8,	// (0x000acec5) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd06,	// (0x000b4b23) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd06,	// (0x000b4b23) list_medium_line_x2_t4_g2_g

0x80ba,	// (0x000aced7) list_medium_line_x2_t4_g2_t1_ParamLimits

0x80ba,	// (0x000aced7) list_medium_line_x2_t4_g2_t1

0x80d4,	// (0x000acef1) list_medium_line_x2_t4_g2_t2_ParamLimits

0x80d4,	// (0x000acef1) list_medium_line_x2_t4_g2_t2

0x80e9,	// (0x000acf06) list_medium_line_x2_t4_g2_t3_ParamLimits

0x80e9,	// (0x000acf06) list_medium_line_x2_t4_g2_t3

0x13df,	// (0x000a61fc) list_medium_line_x2_t4_g2_t4_ParamLimits

0x13df,	// (0x000a61fc) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x000b4b28) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x000b4b28) list_medium_line_x2_t4_g2_t

0x80fe,	// (0x000acf1b) list_medium_line_t3_right_iconx2_g1

0x7f62,	// (0x000acd7f) list_medium_line_t3_right_iconx2_g2

0x8106,	// (0x000acf23) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x000b4b31) list_medium_line_t3_right_iconx2_g

0x8110,	// (0x000acf2d) list_medium_line_t3_right_iconx2_t1

0x8120,	// (0x000acf3d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x000b4b38) list_medium_line_t3_right_iconx2_t

0x1392,	// (0x000a61af) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1392,	// (0x000a61af) list_medium_line_x3_t4_g4_g1

0x139e,	// (0x000a61bb) list_medium_line_x3_t4_g4_g2_ParamLimits

0x139e,	// (0x000a61bb) list_medium_line_x3_t4_g4_g2

0x1445,	// (0x000a6262) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1445,	// (0x000a6262) list_medium_line_x3_t4_g4_g3

0x812e,	// (0x000acf4b) list_medium_line_x3_t4_g4_g4_ParamLimits

0x812e,	// (0x000acf4b) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x000b4b3d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x000b4b3d) list_medium_line_x3_t4_g4_g

0x813a,	// (0x000acf57) list_medium_line_x3_t4_g4_t1_ParamLimits

0x813a,	// (0x000acf57) list_medium_line_x3_t4_g4_t1

0x8151,	// (0x000acf6e) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8151,	// (0x000acf6e) list_medium_line_x3_t4_g4_t2

0x26fa,	// (0x000a7517) list_medium_line_x3_t4_g4_t3_ParamLimits

0x26fa,	// (0x000a7517) list_medium_line_x3_t4_g4_t3

0x816c,	// (0x000acf89) list_medium_line_x3_t4_g4_t4_ParamLimits

0x816c,	// (0x000acf89) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x000b4b46) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x000b4b46) list_medium_line_x3_t4_g4_t

0x8189,	// (0x000acfa6) list_single_dyc_row_text_pane_t1_ParamLimits

0x8189,	// (0x000acfa6) list_single_dyc_row_text_pane_t1

0x81d2,	// (0x000acfef) list_single_dyc_row_text_pane_t2_ParamLimits

0x81d2,	// (0x000acfef) list_single_dyc_row_text_pane_t2

0xd94f,	// (0x000b276c) list_single_dyc_row_text_pane_t3_ParamLimits

0xd94f,	// (0x000b276c) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x000b4b4f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x000b4b4f) list_single_dyc_row_text_pane_t

0xd961,	// (0x000b277e) list_single_dyc_row_pane_g1_ParamLimits

0xd961,	// (0x000b277e) list_single_dyc_row_pane_g1

0xd96d,	// (0x000b278a) list_single_dyc_row_pane_g2_ParamLimits

0xd96d,	// (0x000b278a) list_single_dyc_row_pane_g2

0xd979,	// (0x000b2796) list_single_dyc_row_pane_g3_ParamLimits

0xd979,	// (0x000b2796) list_single_dyc_row_pane_g3

0xd985,	// (0x000b27a2) list_single_dyc_row_pane_g4_ParamLimits

0xd985,	// (0x000b27a2) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000b4b56) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000b4b56) list_single_dyc_row_pane_g

0xd991,	// (0x000b27ae) list_single_dyc_row_text_pane_ParamLimits

0xd991,	// (0x000b27ae) list_single_dyc_row_text_pane

0xd4ca,	// (0x000b22e7) bg_sp_fs_scroll_pane

0xd9b0,	// (0x000b27cd) thumb_sp_fs_scroll_pane

0x68b2,	// (0x000ab6cf) list_medium_line_g1_ParamLimits

0x68b2,	// (0x000ab6cf) list_medium_line_g1

0x822c,	// (0x000ad049) list_medium_line_t1_ParamLimits

0x822c,	// (0x000ad049) list_medium_line_t1

0x1392,	// (0x000a61af) list_medium_line_x2_g1_ParamLimits

0x1392,	// (0x000a61af) list_medium_line_x2_g1

0x139e,	// (0x000a61bb) list_medium_line_x2_g2_ParamLimits

0x139e,	// (0x000a61bb) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000b4b5f) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000b4b5f) list_medium_line_x2_g

0xd9b9,	// (0x000b27d6) list_medium_line_x2_t1_ParamLimits

0xd9b9,	// (0x000b27d6) list_medium_line_x2_t1

0x1392,	// (0x000a61af) list_medium_line_x3_g1_ParamLimits

0x1392,	// (0x000a61af) list_medium_line_x3_g1

0x139e,	// (0x000a61bb) list_medium_line_x3_g2_ParamLimits

0x139e,	// (0x000a61bb) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000b4b5f) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000b4b5f) list_medium_line_x3_g

0xd9b9,	// (0x000b27d6) list_medium_line_x3_t1_ParamLimits

0xd9b9,	// (0x000b27d6) list_medium_line_x3_t1

0xd9cf,	// (0x000b27ec) thumb_sp_fs_scroll_pane_g1

0xd9d8,	// (0x000b27f5) thumb_sp_fs_scroll_pane_g2

0xd9e1,	// (0x000b27fe) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b4b64) thumb_sp_fs_scroll_pane_g

0xd9cf,	// (0x000b27ec) bg_sp_fs_scroll_pane_g1

0xd9d8,	// (0x000b27f5) bg_sp_fs_scroll_pane_g2

0xd9e1,	// (0x000b27fe) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b4b64) bg_sp_fs_scroll_pane_g

0x1392,	// (0x000a61af) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1392,	// (0x000a61af) list_medium_line_x2_t3_g4_g1

0x1439,	// (0x000a6256) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1439,	// (0x000a6256) list_medium_line_x2_t3_g4_g2

0x139e,	// (0x000a61bb) list_medium_line_x2_t3_g4_g3_ParamLimits

0x139e,	// (0x000a61bb) list_medium_line_x2_t3_g4_g3

0x13aa,	// (0x000a61c7) list_medium_line_x2_t3_g4_g4_ParamLimits

0x13aa,	// (0x000a61c7) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x000b40ea) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x000b40ea) list_medium_line_x2_t3_g4_g

0x8241,	// (0x000ad05e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8241,	// (0x000ad05e) list_medium_line_x2_t3_g4_t1

0x825b,	// (0x000ad078) list_medium_line_x2_t3_g4_t2_ParamLimits

0x825b,	// (0x000ad078) list_medium_line_x2_t3_g4_t2

0x13df,	// (0x000a61fc) list_medium_line_x2_t3_g4_t3_ParamLimits

0x13df,	// (0x000a61fc) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000b4b6b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000b4b6b) list_medium_line_x2_t3_g4_t

0x68b2,	// (0x000ab6cf) list_medium_line_g2_g1_ParamLimits

0x68b2,	// (0x000ab6cf) list_medium_line_g2_g1

0x68be,	// (0x000ab6db) list_medium_line_g2_g2_ParamLimits

0x68be,	// (0x000ab6db) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x000b4823) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x000b4823) list_medium_line_g2_g

0x8274,	// (0x000ad091) list_medium_line_g2_t1_ParamLimits

0x8274,	// (0x000ad091) list_medium_line_g2_t1

0x68b2,	// (0x000ab6cf) list_medium_line_t3_g2_g1_ParamLimits

0x68b2,	// (0x000ab6cf) list_medium_line_t3_g2_g1

0x68be,	// (0x000ab6db) list_medium_line_t3_g2_g2_ParamLimits

0x68be,	// (0x000ab6db) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x000b4823) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x000b4823) list_medium_line_t3_g2_g

0x8289,	// (0x000ad0a6) list_medium_line_t3_g2_t1_ParamLimits

0x8289,	// (0x000ad0a6) list_medium_line_t3_g2_t1

0x82a0,	// (0x000ad0bd) list_medium_line_t3_g2_t2_ParamLimits

0x82a0,	// (0x000ad0bd) list_medium_line_t3_g2_t2

0x82b5,	// (0x000ad0d2) list_medium_line_t3_g2_t3_ParamLimits

0x82b5,	// (0x000ad0d2) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000b4b72) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000b4b72) list_medium_line_t3_g2_t

0x7f62,	// (0x000acd7f) list_medium_line_right_icon_g1

0x82ce,	// (0x000ad0eb) list_medium_line_right_icon_t1

0x68b2,	// (0x000ab6cf) list_medium_line_t2_g1_ParamLimits

0x68b2,	// (0x000ab6cf) list_medium_line_t2_g1

0x82dc,	// (0x000ad0f9) list_medium_line_t2_t1_ParamLimits

0x82dc,	// (0x000ad0f9) list_medium_line_t2_t1

0x82f6,	// (0x000ad113) list_medium_line_t2_t2_ParamLimits

0x82f6,	// (0x000ad113) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000b4b79) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000b4b79) list_medium_line_t2_t

0x68b2,	// (0x000ab6cf) list_medium_line_t3_g1_ParamLimits

0x68b2,	// (0x000ab6cf) list_medium_line_t3_g1

0x830f,	// (0x000ad12c) list_medium_line_t3_t1_ParamLimits

0x830f,	// (0x000ad12c) list_medium_line_t3_t1

0x8329,	// (0x000ad146) list_medium_line_t3_t2_ParamLimits

0x8329,	// (0x000ad146) list_medium_line_t3_t2

0x833e,	// (0x000ad15b) list_medium_line_t3_t3_ParamLimits

0x833e,	// (0x000ad15b) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000b4b7e) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000b4b7e) list_medium_line_t3_t

0x68b2,	// (0x000ab6cf) list_medium_line_g3_g1_ParamLimits

0x68b2,	// (0x000ab6cf) list_medium_line_g3_g1

0x8353,	// (0x000ad170) list_medium_line_g3_g2_ParamLimits

0x8353,	// (0x000ad170) list_medium_line_g3_g2

0x68be,	// (0x000ab6db) list_medium_line_g3_g3_ParamLimits

0x68be,	// (0x000ab6db) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000b4b85) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000b4b85) list_medium_line_g3_g

0x835f,	// (0x000ad17c) list_medium_line_g3_t1_ParamLimits

0x835f,	// (0x000ad17c) list_medium_line_g3_t1

0x68b2,	// (0x000ab6cf) list_medium_line_t2_g3_g1_ParamLimits

0x68b2,	// (0x000ab6cf) list_medium_line_t2_g3_g1

0x8353,	// (0x000ad170) list_medium_line_t2_g3_g2_ParamLimits

0x8353,	// (0x000ad170) list_medium_line_t2_g3_g2

0x68be,	// (0x000ab6db) list_medium_line_t2_g3_g3_ParamLimits

0x68be,	// (0x000ab6db) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000b4b85) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000b4b85) list_medium_line_t2_g3_g

0x8374,	// (0x000ad191) list_medium_line_t2_g3_t1_ParamLimits

0x8374,	// (0x000ad191) list_medium_line_t2_g3_t1

0x838b,	// (0x000ad1a8) list_medium_line_t2_g3_t2_ParamLimits

0x838b,	// (0x000ad1a8) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000b4b8c) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000b4b8c) list_medium_line_t2_g3_t

0x68b2,	// (0x000ab6cf) list_medium_line_t3_g3_g1_ParamLimits

0x68b2,	// (0x000ab6cf) list_medium_line_t3_g3_g1

0x8353,	// (0x000ad170) list_medium_line_t3_g3_g2_ParamLimits

0x8353,	// (0x000ad170) list_medium_line_t3_g3_g2

0x68be,	// (0x000ab6db) list_medium_line_t3_g3_g3_ParamLimits

0x68be,	// (0x000ab6db) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000b4b85) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000b4b85) list_medium_line_t3_g3_g

0x83a6,	// (0x000ad1c3) list_medium_line_t3_g3_t1_ParamLimits

0x83a6,	// (0x000ad1c3) list_medium_line_t3_g3_t1

0x83ba,	// (0x000ad1d7) list_medium_line_t3_g3_t2_ParamLimits

0x83ba,	// (0x000ad1d7) list_medium_line_t3_g3_t2

0x83cc,	// (0x000ad1e9) list_medium_line_t3_g3_t3_ParamLimits

0x83cc,	// (0x000ad1e9) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000b4b91) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000b4b91) list_medium_line_t3_g3_t

0x80fe,	// (0x000acf1b) list_medium_line_right_iconx2_g1

0x7f62,	// (0x000acd7f) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b4b98) list_medium_line_right_iconx2_g

0x83e0,	// (0x000ad1fd) list_medium_line_right_iconx2_t1

0x80fe,	// (0x000acf1b) list_medium_line_t2_right_iconx2_g1

0x7f62,	// (0x000acd7f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b4b98) list_medium_line_t2_right_iconx2_g

0x83ee,	// (0x000ad20b) list_medium_line_t2_right_iconx2_t1

0x83fe,	// (0x000ad21b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000b4b9d) list_medium_line_t2_right_iconx2_t

0x8410,	// (0x000ad22d) list_medium_line_x4_t4_t1

0x841e,	// (0x000ad23b) list_medium_line_x4_t4_t2

0x842e,	// (0x000ad24b) list_medium_line_x4_t4_t3

0x843e,	// (0x000ad25b) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000b4ba2) list_medium_line_x4_t4_t

0x8491,	// (0x000ad2ae) tport_appsw_pane_ParamLimits

0x8491,	// (0x000ad2ae) tport_appsw_pane

0x84a9,	// (0x000ad2c6) tport_contact_pane_ParamLimits

0x84a9,	// (0x000ad2c6) tport_contact_pane

0x84c1,	// (0x000ad2de) tport_listscroll_pane_ParamLimits

0x84c1,	// (0x000ad2de) tport_listscroll_pane

0x84db,	// (0x000ad2f8) cell_tport_appsw_pane_ParamLimits

0x84db,	// (0x000ad2f8) cell_tport_appsw_pane

0xc69e,	// (0x000b14bb) tport_appsw_pane_g1_ParamLimits

0xc69e,	// (0x000b14bb) tport_appsw_pane_g1

0xd9ea,	// (0x000b2807) tport_contact_pane_g1

0xd256,	// (0x000b2073) tport_contact_pane_t1

0xd9f3,	// (0x000b2810) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000b4bab) tport_contact_pane_t

0xda01,	// (0x000b281e) list_tport_pane

0xda0a,	// (0x000b2827) scroll_pane_cp_030

0x8523,	// (0x000ad340) cell_tport_appsw_pane_g1

0x8533,	// (0x000ad350) cell_tport_appsw_pane_t1

0xd4ca,	// (0x000b22e7) grid_highlight_pane_cp019

0x8541,	// (0x000ad35e) list_tport_double_graphic_pane_ParamLimits

0x8541,	// (0x000ad35e) list_tport_double_graphic_pane

0xe923,	// (0x000b3740) list_highlight_pane_cp023_ParamLimits

0xe923,	// (0x000b3740) list_highlight_pane_cp023

0x854e,	// (0x000ad36b) list_tport_double_graphic_pane_g1_ParamLimits

0x854e,	// (0x000ad36b) list_tport_double_graphic_pane_g1

0x855b,	// (0x000ad378) list_tport_double_graphic_pane_t1_ParamLimits

0x855b,	// (0x000ad378) list_tport_double_graphic_pane_t1

0x8570,	// (0x000ad38d) list_tport_double_graphic_pane_t2_ParamLimits

0x8570,	// (0x000ad38d) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000b4bb7) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000b4bb7) list_tport_double_graphic_pane_t

0xd4ca,	// (0x000b22e7) main_cale_note_pane

0x604f,	// (0x000aae6c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x604f,	// (0x000aae6c) cell_vitu2_function_top_wide_pane_cp01

0x7ae5,	// (0x000ac902) wait_bar_pane_cp05_ParamLimits

0xe923,	// (0x000b3740) listscroll_cmail_pane

0xda13,	// (0x000b2830) list_cmail_pane

0x8582,	// (0x000ad39f) list_cmail_body_pane

0x8596,	// (0x000ad3b3) list_single_cmail_header_caption_pane

0x85ae,	// (0x000ad3cb) list_single_cmail_header_detail_pane_ParamLimits

0x85ae,	// (0x000ad3cb) list_single_cmail_header_detail_pane

0xda23,	// (0x000b2840) list_single_cmail_header_caption_pane_t1

0x85e1,	// (0x000ad3fe) list_single_cmail_header_detail_pane_g1_ParamLimits

0x85e1,	// (0x000ad3fe) list_single_cmail_header_detail_pane_g1

0xe9a1,	// (0x000b37be) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe9a1,	// (0x000b37be) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000b4bbc) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000b4bbc) list_single_cmail_header_detail_pane_g

0x85f9,	// (0x000ad416) list_single_cmail_header_detail_pane_t1_ParamLimits

0x85f9,	// (0x000ad416) list_single_cmail_header_detail_pane_t1

0x8637,	// (0x000ad454) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8637,	// (0x000ad454) list_single_cmail_header_editor_pane_bg

0xda62,	// (0x000b287f) list_cmail_body_pane_g1

0xda6b,	// (0x000b2888) list_cmail_body_pane_t1

0xc6db,	// (0x000b14f8) list_single_cmail_header_editor_pane_bg_g1

0x96ac,	// (0x000ae4c9) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc6eb,	// (0x000b1508) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc6e3,	// (0x000b1500) list_single_cmail_header_editor_pane_bg_g1_copy3

0xc935,	// (0x000b1752) list_single_cmail_header_editor_pane_bg_g1_copy4

0xc70b,	// (0x000b1528) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xc6fb,	// (0x000b1518) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xc703,	// (0x000b1520) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x968c,	// (0x000ae4a9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8650,	// (0x000ad46d) calenote_gesture_pane_ParamLimits

0x8650,	// (0x000ad46d) calenote_gesture_pane

0x8670,	// (0x000ad48d) calenote_window_pane_ParamLimits

0x8670,	// (0x000ad48d) calenote_window_pane

0xda79,	// (0x000b2896) popup_note_window_cp01

0x868c,	// (0x000ad4a9) calenote_swipe_1_pane_ParamLimits

0x868c,	// (0x000ad4a9) calenote_swipe_1_pane

0x7f48,	// (0x000acd65) calenote_swipe_2_pane_ParamLimits

0x7f48,	// (0x000acd65) calenote_swipe_2_pane

0xd793,	// (0x000b25b0) calenote_swipe_1_pane_g1_ParamLimits

0xd793,	// (0x000b25b0) calenote_swipe_1_pane_g1

0xd7a0,	// (0x000b25bd) calenote_swipe_1_pane_g2_ParamLimits

0xd7a0,	// (0x000b25bd) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x000b4ae6) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x000b4ae6) calenote_swipe_1_pane_g

0xda8b,	// (0x000b28a8) calenote_swipe_1_pane_t1_ParamLimits

0xda8b,	// (0x000b28a8) calenote_swipe_1_pane_t1

0xd793,	// (0x000b25b0) calenote_swipe_2_pane_g1_ParamLimits

0xd793,	// (0x000b25b0) calenote_swipe_2_pane_g1

0xdaaa,	// (0x000b28c7) calenote_swipe_2_pane_g2_ParamLimits

0xdaaa,	// (0x000b28c7) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000b4bc8) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000b4bc8) calenote_swipe_2_pane_g

0xdab6,	// (0x000b28d3) calenote_swipe_2_pane_t1_ParamLimits

0xdab6,	// (0x000b28d3) calenote_swipe_2_pane_t1

0xd4ca,	// (0x000b22e7) main_mup_navstr_pane

0x4d05,	// (0x000a9b22) main_mup3_pane_t7_ParamLimits

0x4d05,	// (0x000a9b22) main_mup3_pane_t7

0x9e11,	// (0x000aec2e) main_mp4_pane_g6_ParamLimits

0x9e11,	// (0x000aec2e) main_mp4_pane_g6

0x9fb5,	// (0x000aedd2) main_image3_pane_t4_ParamLimits

0x9fb5,	// (0x000aedd2) main_image3_pane_t4

0x86a1,	// (0x000ad4be) popup_navstr_preview_pane_ParamLimits

0x86a1,	// (0x000ad4be) popup_navstr_preview_pane

0x86b5,	// (0x000ad4d2) scroll_navstr_pane_ParamLimits

0x86b5,	// (0x000ad4d2) scroll_navstr_pane

0xd4ca,	// (0x000b22e7) bg_popup_preview_window_pane_cp04

0xdadd,	// (0x000b28fa) popup_navstr_preview_pane_t1

0x86c9,	// (0x000ad4e6) scroll_navstr_pane_g1_ParamLimits

0x86c9,	// (0x000ad4e6) scroll_navstr_pane_g1

0x86dd,	// (0x000ad4fa) scroll_navstr_pane_t1_ParamLimits

0x86dd,	// (0x000ad4fa) scroll_navstr_pane_t1

0xda82,	// (0x000b289f) bg_button_pane_cp014

0xda82,	// (0x000b289f) bg_button_pane_cp030

0x7de1,	// (0x000acbfe) list_double_fisheye_pane_g4_ParamLimits

0x7de1,	// (0x000acbfe) list_double_fisheye_pane_g4

0x7ded,	// (0x000acc0a) list_double_fisheye_pane_g5_ParamLimits

0x7ded,	// (0x000acc0a) list_double_fisheye_pane_g5

0xaf6a,	// (0x000afd87) sp_fs_scroll_pane_cp03

0xd886,	// (0x000b26a3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd892,	// (0x000b26af) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x000b4b03) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd89e,	// (0x000b26bb) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xda1b,	// (0x000b2838) sp_fs_scroll_pane_cp02

0xedf7,	// (0x000b3c14) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xedf7,	// (0x000b3c14) popup_sp_fs_calendar_preview_list_single_pane

0xd4ca,	// (0x000b22e7) main_cam6_pano_pane

0x95ad,	// (0x000ae3ca) main_mup3_pane_ParamLimits

0xd4ca,	// (0x000b22e7) main_phacti_pane

0x79b8,	// (0x000ac7d5) bg_button_pane_cp11

0x79d2,	// (0x000ac7ef) main_mobtv_info_pane_g2_ParamLimits

0x79d2,	// (0x000ac7ef) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x000b4a63) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x000b4a63) main_mobtv_info_pane_g

0x7baf,	// (0x000ac9cc) sc_clock_pane_t5_ParamLimits

0x7baf,	// (0x000ac9cc) sc_clock_pane_t5

0x7c41,	// (0x000aca5e) main_radioblah_pane_g1_ParamLimits

0xd6df,	// (0x000b24fc) main_radioblah_pane_t3_ParamLimits

0xd6df,	// (0x000b24fc) main_radioblah_pane_t3

0xd6f7,	// (0x000b2514) main_radioblah_pane_t4_ParamLimits

0xd6f7,	// (0x000b2514) main_radioblah_pane_t4

0x7c69,	// (0x000aca86) main_radioblah_text_pane_ParamLimits

0x7c69,	// (0x000aca86) main_radioblah_text_pane

0x7c7b,	// (0x000aca98) main_radioblah_info_pane_g1_ParamLimits

0x7d14,	// (0x000acb31) main_radioblah_info_pane_t4_ParamLimits

0x7d14,	// (0x000acb31) main_radioblah_info_pane_t4

0xe923,	// (0x000b3740) main_sp_fs_calendar_pane

0x86f3,	// (0x000ad510) main_phacti_pane_g1

0x86fb,	// (0x000ad518) phacti_note_pane_ParamLimits

0x86fb,	// (0x000ad518) phacti_note_pane

0xdaf4,	// (0x000b2911) phacti_term_pane_ParamLimits

0xdaf4,	// (0x000b2911) phacti_term_pane

0xdb09,	// (0x000b2926) phacti_note_pane_t1_ParamLimits

0xdb09,	// (0x000b2926) phacti_note_pane_t1

0xdb20,	// (0x000b293d) phacti_term_pane_g1

0xdb28,	// (0x000b2945) phacti_term_pane_t1_ParamLimits

0xdb28,	// (0x000b2945) phacti_term_pane_t1

0xdb52,	// (0x000b296f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xdb5a,	// (0x000b2977) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000b4bd2) popup_sp_fs_calendar_preview_list_single_pane_g

0xdb62,	// (0x000b297f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdb62,	// (0x000b297f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdb78,	// (0x000b2995) aid_popup_sp_fs_bg_corner_pane

0xbbef,	// (0x000b0a0c) popup_sp_fs_calendar_preview_bg_pane_g1

0xd4ca,	// (0x000b22e7) popup_sp_fs_calendar_preview_bg_pane

0x121b,	// (0x000a6038) popup_sp_fs_calendar_preview_list_pane

0xb7e5,	// (0x000b0602) bg_main_sp_fs_cale_pane_ParamLimits

0xb7e5,	// (0x000b0602) bg_main_sp_fs_cale_pane

0xdb80,	// (0x000b299d) listscroll_cale_mrui_pane_ParamLimits

0xdb80,	// (0x000b299d) listscroll_cale_mrui_pane

0xdb95,	// (0x000b29b2) listscroll_sp_fs_schedule_track_pane

0xdb9e,	// (0x000b29bb) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdb9e,	// (0x000b29bb) main_sp_fs_ctrlbar_pane_cp01

0xdbb1,	// (0x000b29ce) main_sp_fs_ribbon_pane

0xdbb9,	// (0x000b29d6) popup_sp_fs_cale_preview_window

0x8770,	// (0x000ad58d) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8770,	// (0x000ad58d) list_single_sp_fs_schedule_track_pane

0xe923,	// (0x000b3740) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe923,	// (0x000b3740) bg_sp_fs_highlight_list_pane_cp03

0x8785,	// (0x000ad5a2) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8785,	// (0x000ad5a2) list_single_sp_fs_schedule_track_pane_g1

0x8791,	// (0x000ad5ae) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8791,	// (0x000ad5ae) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000b4bd7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000b4bd7) list_single_sp_fs_schedule_track_pane_g

0x879d,	// (0x000ad5ba) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x879d,	// (0x000ad5ba) list_single_sp_fs_schedule_track_pane_t1

0x87b7,	// (0x000ad5d4) sp_fs_schedule_track_pane_ParamLimits

0x87b7,	// (0x000ad5d4) sp_fs_schedule_track_pane

0xdbcb,	// (0x000b29e8) sp_fs_schedule_track_pane_g1

0xdbd3,	// (0x000b29f0) sp_fs_schedule_track_pane_g2

0xdbdb,	// (0x000b29f8) sp_fs_schedule_track_pane_g3

0xdbe3,	// (0x000b2a00) sp_fs_schedule_track_pane_g4

0xdbeb,	// (0x000b2a08) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000b4bdc) sp_fs_schedule_track_pane_g

0xc6db,	// (0x000b14f8) bg_sp_fs_schedule_viewer_highlight_g1

0x96ac,	// (0x000ae4c9) bg_sp_fs_schedule_viewer_highlight_g2

0xc6e3,	// (0x000b1500) bg_sp_fs_schedule_viewer_highlight_g3

0xc6eb,	// (0x000b1508) bg_sp_fs_schedule_viewer_highlight_g4

0xc935,	// (0x000b1752) bg_sp_fs_schedule_viewer_highlight_g5

0xc6fb,	// (0x000b1518) bg_sp_fs_schedule_viewer_highlight_g6

0xc703,	// (0x000b1520) bg_sp_fs_schedule_viewer_highlight_g7

0xc70b,	// (0x000b1528) bg_sp_fs_schedule_viewer_highlight_g8

0x968c,	// (0x000ae4a9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000b4be7) bg_sp_fs_schedule_viewer_highlight_g

0xd4ca,	// (0x000b22e7) bg_main_sp_fs_ribbon_pane

0x87c8,	// (0x000ad5e5) main_sp_fs_ribbon_pane_g1

0xdbf3,	// (0x000b2a10) main_sp_fs_ribbon_pane_t1

0x87d1,	// (0x000ad5ee) main_sp_fs_ribbon_pane_t2

0xdc02,	// (0x000b2a1f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000b4bfa) main_sp_fs_ribbon_pane_t

0xdc11,	// (0x000b2a2e) main_sp_fs_ribbon_scheduler_pane

0xdc19,	// (0x000b2a36) bg_main_sp_fs_ribbon_pane_g1

0xdc22,	// (0x000b2a3f) bg_main_sp_fs_ribbon_pane_g2

0xdc2b,	// (0x000b2a48) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000b4c01) bg_main_sp_fs_ribbon_pane_g

0xdc33,	// (0x000b2a50) main_sp_fs_ribbon_scheduler_pane_g1

0xdc3c,	// (0x000b2a59) main_sp_fs_ribbon_scheduler_pane_g2

0xdc45,	// (0x000b2a62) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000b4c08) main_sp_fs_ribbon_scheduler_pane_g

0xdc4e,	// (0x000b2a6b) list_cale_mrui_pane

0x87e0,	// (0x000ad5fd) sp_fs_scroll_pane_cp07_ParamLimits

0x87e0,	// (0x000ad5fd) sp_fs_scroll_pane_cp07

0x87fc,	// (0x000ad619) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x87fc,	// (0x000ad619) bg_sp_fs_schedule_viewer_highlight

0xdc5b,	// (0x000b2a78) list_single_sp_fs_schedule_track_pane_cp01

0xdc63,	// (0x000b2a80) list_sp_fs_schedule_track_pane

0xdc6b,	// (0x000b2a88) sp_fs_scroll_pane_cp06_ParamLimits

0xdc6b,	// (0x000b2a88) sp_fs_scroll_pane_cp06

0xbbef,	// (0x000b0a0c) bgmain_sp_fs_calendar_pane_g1

0x880c,	// (0x000ad629) list_single_cale_mrui_pane_ParamLimits

0x880c,	// (0x000ad629) list_single_cale_mrui_pane

0xdc7d,	// (0x000b2a9a) list_single_cale_mrui_row_pane_ParamLimits

0xdc7d,	// (0x000b2a9a) list_single_cale_mrui_row_pane

0xdc8a,	// (0x000b2aa7) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdc8a,	// (0x000b2aa7) list_single_cale_mrui_row_pane_g1

0xdccf,	// (0x000b2aec) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdccf,	// (0x000b2aec) list_single_cale_mrui_row_pane_t1

0x882e,	// (0x000ad64b) list_single_cale_mrui_row_pane_t2_ParamLimits

0x882e,	// (0x000ad64b) list_single_cale_mrui_row_pane_t2

0xdce1,	// (0x000b2afe) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdce1,	// (0x000b2afe) list_single_cale_mrui_row_pane_t3

0xdd10,	// (0x000b2b2d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xdd10,	// (0x000b2b2d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000b4c16) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000b4c16) list_single_cale_mrui_row_pane_t

0x8896,	// (0x000ad6b3) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8896,	// (0x000ad6b3) list_single_cmail_header_editor_pane_bg_cp01

0x88bc,	// (0x000ad6d9) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x88bc,	// (0x000ad6d9) list_single_cmail_header_editor_pane_bg_cp02

0x88dc,	// (0x000ad6f9) main_radioblah_text_pane_t1_ParamLimits

0x88dc,	// (0x000ad6f9) main_radioblah_text_pane_t1

0xdd3f,	// (0x000b2b5c) cam6_indi_pane_cp01

0xdd47,	// (0x000b2b64) cam6_mode_pane_cp01

0xdd4f,	// (0x000b2b6c) cam6_pano_pane

0xdd58,	// (0x000b2b75) cam6_zoom_pane_cp01

0xdd60,	// (0x000b2b7d) cam6_pano_image_pane

0xdd6b,	// (0x000b2b88) cam6_pano_pane_g1

0xd3fd,	// (0x000b221a) cam6_pano_pane_g2

0xdd74,	// (0x000b2b91) cam6_pano_pane_g3

0xdd7d,	// (0x000b2b9a) cam6_pano_pane_g4

0xc205,	// (0x000b1022) cam6_pano_pane_g5

0xdd86,	// (0x000b2ba3) cam6_pano_pane_g6

0xdd90,	// (0x000b2bad) cam6_pano_pane_g7

0xdd98,	// (0x000b2bb5) cam6_pano_pane_g8

0xdda1,	// (0x000b2bbe) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000b4c1f) cam6_pano_pane_g

0xd4ca,	// (0x000b22e7) main_browser_tag_pane

0xdad5,	// (0x000b28f2) grid_navstr_albumart_pane

0xddac,	// (0x000b2bc9) cell_navstr_albumart_pane_ParamLimits

0xddac,	// (0x000b2bc9) cell_navstr_albumart_pane

0xa51e,	// (0x000af33b) cell_navstr_albumart_pane_g1

0xb5f6,	// (0x000b0413) cell_navstr_albumart_pane_g2

0xb606,	// (0x000b0423) cell_navstr_albumart_pane_g3

0xb5fe,	// (0x000b041b) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000b4c32) cell_navstr_albumart_pane_g

0x88f7,	// (0x000ad714) bt_list_pane_ParamLimits

0x88f7,	// (0x000ad714) bt_list_pane

0xddce,	// (0x000b2beb) bt_list_pane_t1

0xdddd,	// (0x000b2bfa) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000b4c3b) bt_list_pane_t

0xd4ca,	// (0x000b22e7) main_cale_prevew_pane

0x890c,	// (0x000ad729) popup_cale_preview_window_ParamLimits

0x890c,	// (0x000ad729) popup_cale_preview_window

0xe923,	// (0x000b3740) bg_popup_preview_window_pane_cp05_ParamLimits

0xe923,	// (0x000b3740) bg_popup_preview_window_pane_cp05

0xddec,	// (0x000b2c09) list_cale_preview_pane_ParamLimits

0xddec,	// (0x000b2c09) list_cale_preview_pane

0xddf8,	// (0x000b2c15) list_double_cale_preview_pane_ParamLimits

0xddf8,	// (0x000b2c15) list_double_cale_preview_pane

0xde0a,	// (0x000b2c27) list_single_cale_preview_pane_ParamLimits

0xde0a,	// (0x000b2c27) list_single_cale_preview_pane

0xde1e,	// (0x000b2c3b) list_single_cale_preview_pane_g1

0xde26,	// (0x000b2c43) list_single_cale_preview_pane_t1_ParamLimits

0xde26,	// (0x000b2c43) list_single_cale_preview_pane_t1

0xde3b,	// (0x000b2c58) list_double_cale_preview_pane_g1

0xde43,	// (0x000b2c60) list_double_cale_preview_pane_t1_ParamLimits

0xde43,	// (0x000b2c60) list_double_cale_preview_pane_t1

0xde58,	// (0x000b2c75) list_double_cale_preview_pane_t2_ParamLimits

0xde58,	// (0x000b2c75) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000b4c40) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000b4c40) list_double_cale_preview_pane_t

0xd4ca,	// (0x000b22e7) main_ezdial_pane

0xe923,	// (0x000b3740) main_sp_fs_email_pane_ParamLimits

0x7f8c,	// (0x000acda9) cmail_ddmenu_btn01_pane_ParamLimits

0x7f8c,	// (0x000acda9) cmail_ddmenu_btn01_pane

0x7f9f,	// (0x000acdbc) cmail_ddmenu_btn02_pane_ParamLimits

0x7f9f,	// (0x000acdbc) cmail_ddmenu_btn02_pane

0x7fc2,	// (0x000acddf) cmail_ddmenu_btn03_pane_ParamLimits

0x7fc2,	// (0x000acddf) cmail_ddmenu_btn03_pane

0x7fe8,	// (0x000ace05) main_sp_fs_ctrlbar_pane_ParamLimits

0x800c,	// (0x000ace29) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8582,	// (0x000ad39f) list_cmail_body_pane_ParamLimits

0x85d6,	// (0x000ad3f3) bg_button_pane_cp12

0xda31,	// (0x000b284e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xda31,	// (0x000b284e) list_single_cmail_header_detail_pane_g3

0xda3e,	// (0x000b285b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xda3e,	// (0x000b285b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000b4bc3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000b4bc3) list_single_cmail_header_detail_pane_t

0xdb3d,	// (0x000b295a) phacti_term_pane_t2_ParamLimits

0xdb3d,	// (0x000b295a) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000b4bcd) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000b4bcd) phacti_term_pane_t

0xde70,	// (0x000b2c8d) aid_size_list_single_double

0x8925,	// (0x000ad742) popup_ezdial_listscroll_window

0x8940,	// (0x000ad75d) popup_number_entry_window_cp01

0xa3bd,	// (0x000af1da) bg_popup_call_pane_cp09

0xde7c,	// (0x000b2c99) ezdial_list_pane

0xde84,	// (0x000b2ca1) scroll_pane_cp23

0xb7e5,	// (0x000b0602) bg_button_pane_cp028_ParamLimits

0xb7e5,	// (0x000b0602) bg_button_pane_cp028

0x894e,	// (0x000ad76b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x894e,	// (0x000ad76b) cmail_ddmenu_btn01_pane_g1

0x895a,	// (0x000ad777) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x895a,	// (0x000ad777) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000b4c45) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000b4c45) cmail_ddmenu_btn01_pane_g

0xde8c,	// (0x000b2ca9) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xde8c,	// (0x000b2ca9) cmail_ddmenu_btn01_pane_t1

0xb7e5,	// (0x000b0602) bg_button_pane_cp029_ParamLimits

0xb7e5,	// (0x000b0602) bg_button_pane_cp029

0x8970,	// (0x000ad78d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8970,	// (0x000ad78d) cmail_ddmenu_btn02_pane_g1

0x8988,	// (0x000ad7a5) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8988,	// (0x000ad7a5) cmail_ddmenu_btn02_pane_t1

0xe923,	// (0x000b3740) bg_button_pane_cp031_ParamLimits

0xe923,	// (0x000b3740) bg_button_pane_cp031

0x8970,	// (0x000ad78d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8970,	// (0x000ad78d) cmail_ddmenu_btn03_pane_g1

0x8988,	// (0x000ad7a5) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8988,	// (0x000ad7a5) cmail_ddmenu_btn03_pane_t1

0x58d5,	// (0x000aa6f2) cell_dialer2_keypad_pane_t1_ParamLimits

0x58ef,	// (0x000aa70c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x58ef,	// (0x000aa70c) cell_dialer2_keypad_pane_t1_copy1

0x7811,	// (0x000ac62e) ncimui_group_button_pane

0xe923,	// (0x000b3740) main_sp_fs_calendar_pane_ParamLimits

0x8596,	// (0x000ad3b3) list_single_cmail_header_caption_pane_ParamLimits

0xe9ad,	// (0x000b37ca) aid_recal_txt_sm_pane

0xd4ca,	// (0x000b22e7) mian_recal_day_pane

0xdbb9,	// (0x000b29d6) popup_sp_fs_cale_preview_window_ParamLimits

0xdea2,	// (0x000b2cbf) list_recal_day_pane

0xdee4,	// (0x000b2d01) list_single_recal_day_pane_ParamLimits

0xdee4,	// (0x000b2d01) list_single_recal_day_pane

0xdef6,	// (0x000b2d13) list_single_recal_day_pane_g1_ParamLimits

0xdef6,	// (0x000b2d13) list_single_recal_day_pane_g1

0xdf02,	// (0x000b2d1f) list_single_recal_day_pane_g2_ParamLimits

0xdf02,	// (0x000b2d1f) list_single_recal_day_pane_g2

0xdf12,	// (0x000b2d2f) list_single_recal_day_pane_g3_ParamLimits

0xdf12,	// (0x000b2d2f) list_single_recal_day_pane_g3

0x89ac,	// (0x000ad7c9) list_single_recal_day_pane_g4_ParamLimits

0x89ac,	// (0x000ad7c9) list_single_recal_day_pane_g4

0xdf1e,	// (0x000b2d3b) list_single_recal_day_pane_g5_ParamLimits

0xdf1e,	// (0x000b2d3b) list_single_recal_day_pane_g5

0xdf2e,	// (0x000b2d4b) list_single_recal_day_pane_g6_ParamLimits

0xdf2e,	// (0x000b2d4b) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000b4c54) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000b4c54) list_single_recal_day_pane_g

0xdf42,	// (0x000b2d5f) list_single_recal_day_pane_t1

0xdf54,	// (0x000b2d71) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000b4c5f) list_single_recal_day_pane_t

0x89cc,	// (0x000ad7e9) ncimui_query_button_pane_ParamLimits

0x89cc,	// (0x000ad7e9) ncimui_query_button_pane

0x89dc,	// (0x000ad7f9) ncimui_query_button_pane_t1_ParamLimits

0x89dc,	// (0x000ad7f9) ncimui_query_button_pane_t1

0xdf66,	// (0x000b2d83) ncimui_query_button_pane_t2_ParamLimits

0xdf66,	// (0x000b2d83) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000b4c64) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000b4c64) ncimui_query_button_pane_t

0x89ef,	// (0x000ad80c) query_button_pane_ParamLimits

0x89ef,	// (0x000ad80c) query_button_pane

0xd4ca,	// (0x000b22e7) bg_button_pane_cp0028

0xdf79,	// (0x000b2d96) query_button_pane_t1

0x3978,	// (0x000a8795) main_tport_pane_ParamLimits

0x844e,	// (0x000ad26b) bg_popup_window_pane_cp01_ParamLimits

0x844e,	// (0x000ad26b) bg_popup_window_pane_cp01

0x8469,	// (0x000ad286) heading_pane_cp08_ParamLimits

0x8469,	// (0x000ad286) heading_pane_cp08

0x847c,	// (0x000ad299) heading_pane_cp07_ParamLimits

0x847c,	// (0x000ad299) heading_pane_cp07

0x8523,	// (0x000ad340) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000b4bb0) cell_tport_appsw_pane_g

0x2eff,	// (0x000a7d1c) input_candi_list_open_g1

0x9891,	// (0x000ae6ae) list_cale_time_pane_g6_ParamLimits

0x9891,	// (0x000ae6ae) list_cale_time_pane_g6

0x4731,	// (0x000a954e) aid_size_touch_calib_1_ParamLimits

0x4731,	// (0x000a954e) aid_size_touch_calib_1

0x4743,	// (0x000a9560) aid_size_touch_calib_2_ParamLimits

0x4743,	// (0x000a9560) aid_size_touch_calib_2

0x475b,	// (0x000a9578) aid_size_touch_calib_3_ParamLimits

0x475b,	// (0x000a9578) aid_size_touch_calib_3

0x4779,	// (0x000a9596) aid_size_touch_calib_4_ParamLimits

0x4779,	// (0x000a9596) aid_size_touch_calib_4

0x4791,	// (0x000a95ae) main_touch_calib_button_group_pane_ParamLimits

0x4791,	// (0x000a95ae) main_touch_calib_button_group_pane

0x47a9,	// (0x000a95c6) main_touch_calib_pane_g1_ParamLimits

0x47bb,	// (0x000a95d8) main_touch_calib_pane_g2_ParamLimits

0x47cd,	// (0x000a95ea) main_touch_calib_pane_g3_ParamLimits

0x47df,	// (0x000a95fc) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x000b4579) main_touch_calib_pane_g_ParamLimits

0x47f1,	// (0x000a960e) main_touch_calib_pane_t1_ParamLimits

0x480b,	// (0x000a9628) main_touch_calib_pane_t2_ParamLimits

0x4825,	// (0x000a9642) main_touch_calib_pane_t3_ParamLimits

0x4839,	// (0x000a9656) main_touch_calib_pane_t4_ParamLimits

0x484d,	// (0x000a966a) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x000b4582) main_touch_calib_pane_t_ParamLimits

0xbfc3,	// (0x000b0de0) list_single_fp_cale_pane_g3_ParamLimits

0xbfc3,	// (0x000b0de0) list_single_fp_cale_pane_g3

0x95ad,	// (0x000ae3ca) bg_button_pane_cp012_ParamLimits

0x95ad,	// (0x000ae3ca) bg_vkb2_func_pane_cp03_ParamLimits

0x6868,	// (0x000ab685) cell_vitu2_function_top_pane_g1_ParamLimits

0x95ad,	// (0x000ae3ca) bg_vkb2_func_pane_cp04_ParamLimits

0x779f,	// (0x000ac5bc) main_ncimui_button_group_pane_ParamLimits

0x779f,	// (0x000ac5bc) main_ncimui_button_group_pane

0x77ff,	// (0x000ac61c) main_ncimui_pane_t3_ParamLimits

0x77ff,	// (0x000ac61c) main_ncimui_pane_t3

0xdaeb,	// (0x000b2908) phacti_button_group_pane

0xde70,	// (0x000b2c8d) aid_size_list_single_double_ParamLimits

0x8925,	// (0x000ad742) popup_ezdial_listscroll_window_ParamLimits

0x8940,	// (0x000ad75d) popup_number_entry_window_cp01_ParamLimits

0x8a02,	// (0x000ad81f) phacti_button_pane_ParamLimits

0x8a02,	// (0x000ad81f) phacti_button_pane

0xd4ca,	// (0x000b22e7) bg_button_pane_cp14

0xdf87,	// (0x000b2da4) phacti_button_pane_t1

0x8a13,	// (0x000ad830) main_touch_calib_button_pane_ParamLimits

0x8a13,	// (0x000ad830) main_touch_calib_button_pane

0xe850,	// (0x000b366d) bg_button_pane_cp18_ParamLimits

0xe850,	// (0x000b366d) bg_button_pane_cp18

0xdf95,	// (0x000b2db2) main_touch_calib_button_pane_t1_ParamLimits

0xdf95,	// (0x000b2db2) main_touch_calib_button_pane_t1

0xdfab,	// (0x000b2dc8) main_touch_calib_button_pane_t2_ParamLimits

0xdfab,	// (0x000b2dc8) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000b4c69) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000b4c69) main_touch_calib_button_pane_t

0xd4ca,	// (0x000b22e7) cell_ncimui_button_pane

0xd4ca,	// (0x000b22e7) bg_button_pane_cp032

0xdfc9,	// (0x000b2de6) cell_ncimui_button_pane_t1

0x9f95,	// (0x000aedb2) image3_infobar_pane_ParamLimits

0x9f95,	// (0x000aedb2) image3_infobar_pane

0x7bdb,	// (0x000ac9f8) fs_bigclock_status_pane_ParamLimits

0x7bdb,	// (0x000ac9f8) fs_bigclock_status_pane

0x7be8,	// (0x000aca05) main_fs_bigclock_clock_pane_ParamLimits

0x7be8,	// (0x000aca05) main_fs_bigclock_clock_pane

0x7c04,	// (0x000aca21) main_fs_bigclock_indi_pane_ParamLimits

0x7c04,	// (0x000aca21) main_fs_bigclock_indi_pane

0x7c1d,	// (0x000aca3a) main_fs_bigclock_swipe_pane_ParamLimits

0x7c1d,	// (0x000aca3a) main_fs_bigclock_swipe_pane

0xd4ca,	// (0x000b22e7) main_fs_clock_dumped_data

0xd559,	// (0x000b2376) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd559,	// (0x000b2376) list_single_fs_bigclock_indicator_pane_g1

0xd574,	// (0x000b2391) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd574,	// (0x000b2391) list_single_fs_bigclock_indicator_pane_g2

0xd58e,	// (0x000b23ab) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd58e,	// (0x000b23ab) list_single_fs_bigclock_indicator_pane_g3

0xd5a8,	// (0x000b23c5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd5a8,	// (0x000b23c5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x000b4a97) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x000b4a97) list_single_fs_bigclock_indicator_pane_g

0xd5d1,	// (0x000b23ee) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd5d1,	// (0x000b23ee) list_single_fs_bigclock_indicator_pane_t1

0xd5f9,	// (0x000b2416) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd5f9,	// (0x000b2416) list_single_fs_bigclock_indicator_pane_t2

0xd621,	// (0x000b243e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd621,	// (0x000b243e) list_single_fs_bigclock_indicator_pane_t3

0xd649,	// (0x000b2466) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd649,	// (0x000b2466) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x000b4aa2) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x000b4aa2) list_single_fs_bigclock_indicator_pane_t

0xdfd7,	// (0x000b2df4) image3_infobar_fav_pane_ParamLimits

0xdfd7,	// (0x000b2df4) image3_infobar_fav_pane

0xdfe7,	// (0x000b2e04) image3_infobar_loc_pane_ParamLimits

0xdfe7,	// (0x000b2e04) image3_infobar_loc_pane

0xdffb,	// (0x000b2e18) image3_infobar_time_pane_ParamLimits

0xdffb,	// (0x000b2e18) image3_infobar_time_pane

0xbbef,	// (0x000b0a0c) image3_infobar_time_pane_g1

0xe00b,	// (0x000b2e28) image3_infobar_time_pane_t1

0xbbef,	// (0x000b0a0c) image3_infobar_loc_pane_g1

0xe019,	// (0x000b2e36) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000b4c6e) image3_infobar_loc_pane_g

0xe021,	// (0x000b2e3e) image3_infobar_loc_pane_t1

0xbbef,	// (0x000b0a0c) image3_infobar_fav_pane_g1

0xe02f,	// (0x000b2e4c) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000b4c73) image3_infobar_fav_pane_g

0xe037,	// (0x000b2e54) fs_bigclock_status_battery_pane

0xe040,	// (0x000b2e5d) fs_bigclock_status_signal_pane

0xe049,	// (0x000b2e66) fs_bigclock_status_title_pane

0xe052,	// (0x000b2e6f) fs_bigclock_status_signal_pane_g1

0xe05b,	// (0x000b2e78) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000b4c78) fs_bigclock_status_signal_pane_g

0xe063,	// (0x000b2e80) fs_bigclock_status_battery_pane_g1

0xe06c,	// (0x000b2e89) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000b4c7d) fs_bigclock_status_battery_pane_g

0xe074,	// (0x000b2e91) fs_bigclock_status_title_pane_t1

0xbbef,	// (0x000b0a0c) main_fs_bigclock_clock_pane_g1

0x8a28,	// (0x000ad845) main_fs_bigclock_clock_pane_g2

0x8a28,	// (0x000ad845) main_fs_bigclock_clock_pane_g3

0x8a28,	// (0x000ad845) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000b4c82) main_fs_bigclock_clock_pane_g

0x8a30,	// (0x000ad84d) main_fs_bigclock_clock_pane_t1

0x8a3e,	// (0x000ad85b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000b4c8b) main_fs_bigclock_clock_pane_t

0xe082,	// (0x000b2e9f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe082,	// (0x000b2e9f) list_single_fs_bigclock_indicator_pane

0x8a4d,	// (0x000ad86a) list_single_fs_bigclock_pane_ParamLimits

0x8a4d,	// (0x000ad86a) list_single_fs_bigclock_pane

0xe09c,	// (0x000b2eb9) main_fs_bigclock_indicator_pane_t1

0xe0ab,	// (0x000b2ec8) list_single_fs_bigclock_pane_g1

0xe0b3,	// (0x000b2ed0) list_single_fs_bigclock_pane_t1

0xbbef,	// (0x000b0a0c) main_fs_bigclock_swipe_pane_g1

0xe0f6,	// (0x000b2f13) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000b4c9c) main_fs_bigclock_swipe_pane_g

0xe0fe,	// (0x000b2f1b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe0fe,	// (0x000b2f1b) main_fs_bigclock_swipe_pane_t1

0x2724,	// (0x000a7541) call_type_pane_ParamLimits

0xd4ca,	// (0x000b22e7) main_btmg_pane

0xdcb6,	// (0x000b2ad3) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdcb6,	// (0x000b2ad3) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000b4c0f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000b4c0f) list_single_cale_mrui_row_pane_g

0xdecb,	// (0x000b2ce8) list_recal_vselct_arw_lo_pane

0xded3,	// (0x000b2cf0) list_recal_vselct_arw_up_pane

0xdedb,	// (0x000b2cf8) list_recal_vselct_pane

0x8ab0,	// (0x000ad8cd) btmg_button_pane

0x8aba,	// (0x000ad8d7) main_btmg_pane_g1

0xd4ca,	// (0x000b22e7) bg_button_pane_cp044

0xe11b,	// (0x000b2f38) btmg_button_pane_t1

0xb7d1,	// (0x000b05ee) aid_listscroll_gen

0xe923,	// (0x000b3740) main_cntbar_detail_pane

0xda13,	// (0x000b2830) list_cmail_folder_pane

0xaf6a,	// (0x000afd87) sp_fs_scroll_pane_cp03_ParamLimits

0x8ac4,	// (0x000ad8e1) list_single_fs_dyc_pane_cp01_ParamLimits

0x8ac4,	// (0x000ad8e1) list_single_fs_dyc_pane_cp01

0xe129,	// (0x000b2f46) aid_size_cmail_indent

0xe132,	// (0x000b2f4f) list_single_dyc_row_pane_cp01

0x8b07,	// (0x000ad924) cntbar_detail_list_pane_ParamLimits

0x8b07,	// (0x000ad924) cntbar_detail_list_pane

0x8b53,	// (0x000ad970) main_cntbar_detail_cont_pane_ParamLimits

0x8b53,	// (0x000ad970) main_cntbar_detail_cont_pane

0xaf6a,	// (0x000afd87) scroll_pane_cp032_ParamLimits

0xaf6a,	// (0x000afd87) scroll_pane_cp032

0x8b67,	// (0x000ad984) cntbar_detail_list_event_pane_ParamLimits

0x8b67,	// (0x000ad984) cntbar_detail_list_event_pane

0x8b17,	// (0x000ad934) cntbar_detail_list_shct_pane

0x96fa,	// (0x000ae517) aid_list_gen

0xe9b6,	// (0x000b37d3) aid_scroll

0xe9bf,	// (0x000b37dc) aid_size_touch_scroll_bar

0x6f28,	// (0x000abd45) aid_list_double

0xe9c8,	// (0x000b37e5) aid_list_single

0x6f16,	// (0x000abd33) aid_list_single_lg

0xe13b,	// (0x000b2f58) aid_list_z_g_a_sm

0xe9d1,	// (0x000b37ee) aid_list_z_g_d

0xe9d9,	// (0x000b37f6) aid_txt_z_prm

0x8b77,	// (0x000ad994) aid_txt_z_prm_cp01

0x8b85,	// (0x000ad9a2) aid_txt_z_sec

0x8b93,	// (0x000ad9b0) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b93,	// (0x000ad9b0) main_cntbar_detail_cont_pane_g1

0x8ba7,	// (0x000ad9c4) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8ba7,	// (0x000ad9c4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000b4ca1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000b4ca1) main_cntbar_detail_cont_pane_g

0xe9e7,	// (0x000b3804) main_cntbar_detail_cont_pane_t1

0xe9f5,	// (0x000b3812) main_cntbar_detail_cont_pane_t2

0xea03,	// (0x000b3820) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000b4ca6) main_cntbar_detail_cont_pane_t

0x8bb7,	// (0x000ad9d4) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8bb7,	// (0x000ad9d4) cell_cntbar_detail_list_shct_pane

0xea11,	// (0x000b382e) cntbar_detail_list_shct_pane_g1

0xea1a,	// (0x000b3837) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000b4cad) cntbar_detail_list_shct_pane_g

0x8bcb,	// (0x000ad9e8) cntbar_detail_list_event_pane_g1_ParamLimits

0x8bcb,	// (0x000ad9e8) cntbar_detail_list_event_pane_g1

0x8bd7,	// (0x000ad9f4) cntbar_detail_list_event_pane_g2_ParamLimits

0x8bd7,	// (0x000ad9f4) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000b4cb2) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000b4cb2) cntbar_detail_list_event_pane_g

0x8c43,	// (0x000ada60) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c43,	// (0x000ada60) cntbar_detail_list_event_pane_t1

0x8c58,	// (0x000ada75) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c58,	// (0x000ada75) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000b4cbf) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000b4cbf) cntbar_detail_list_event_pane_t

0xbbef,	// (0x000b0a0c) cell_cntbar_detail_list_shct_pane_g1

0x2a79,	// (0x000a7896) navi_pane_mv_g3

0xe923,	// (0x000b3740) main_cntbar_detail_pane_ParamLimits

0xd4ca,	// (0x000b22e7) main_notif_wgt_pane

0x9dab,	// (0x000aebc8) aid_tch_main_mp4_pane_g4

0x9f8d,	// (0x000aedaa) popup_slider_window_cp02

0xdec1,	// (0x000b2cde) list_recal_day_event_pane

0x8adb,	// (0x000ad8f8) cntbar_detail_btn_pane_ParamLimits

0x8adb,	// (0x000ad8f8) cntbar_detail_btn_pane

0x8af1,	// (0x000ad90e) cntbar_detail_btn_pane_cp01_ParamLimits

0x8af1,	// (0x000ad90e) cntbar_detail_btn_pane_cp01

0x8b17,	// (0x000ad934) cntbar_detail_list_shct_pane_ParamLimits

0x8b27,	// (0x000ad944) cntbar_detail_pane_g1_ParamLimits

0x8b27,	// (0x000ad944) cntbar_detail_pane_g1

0x8b37,	// (0x000ad954) cntbar_detail_pane_t1_ParamLimits

0x8b37,	// (0x000ad954) cntbar_detail_pane_t1

0x8be3,	// (0x000ada00) cntbar_detail_list_event_pane_g3_ParamLimits

0x8be3,	// (0x000ada00) cntbar_detail_list_event_pane_g3

0x8bfb,	// (0x000ada18) cntbar_detail_list_event_pane_g4_ParamLimits

0x8bfb,	// (0x000ada18) cntbar_detail_list_event_pane_g4

0x8c13,	// (0x000ada30) cntbar_detail_list_event_pane_g5_ParamLimits

0x8c13,	// (0x000ada30) cntbar_detail_list_event_pane_g5

0x8c2b,	// (0x000ada48) cntbar_detail_list_event_pane_g6_ParamLimits

0x8c2b,	// (0x000ada48) cntbar_detail_list_event_pane_g6

0x8c6d,	// (0x000ada8a) cntbar_detail_list_event_pane_t3_ParamLimits

0x8c6d,	// (0x000ada8a) cntbar_detail_list_event_pane_t3

0x8c7f,	// (0x000ada9c) popup_notif_wgt_window_ParamLimits

0x8c7f,	// (0x000ada9c) popup_notif_wgt_window

0x8c98,	// (0x000adab5) popup_submenu_window_cp01_ParamLimits

0x8c98,	// (0x000adab5) popup_submenu_window_cp01

0xa3bd,	// (0x000af1da) bg_popup_window_pane_cp10

0xea23,	// (0x000b3840) listscroll_notif_wgt_pane

0xea34,	// (0x000b3851) list_notif_wgt_window

0xea3d,	// (0x000b385a) scroll_pane_cp033

0x8caa,	// (0x000adac7) list_notif_wgt_row_pane_ParamLimits

0x8caa,	// (0x000adac7) list_notif_wgt_row_pane

0xea46,	// (0x000b3863) aid_size_list_notif_wgt_del

0xea53,	// (0x000b3870) list_notif_wgt_row_pane_g1

0xea5f,	// (0x000b387c) list_notif_wgt_row_pane_g2

0xea6b,	// (0x000b3888) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000b4cc6) list_notif_wgt_row_pane_g

0xea78,	// (0x000b3895) list_notif_wgt_row_pane_t1

0xea8d,	// (0x000b38aa) list_notif_wgt_row_pane_t2

0xea9f,	// (0x000b38bc) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000b4ccd) list_notif_wgt_row_pane_t

0xc94f,	// (0x000b176c) list_recal_day_event_pane_g1

0xeab1,	// (0x000b38ce) list_recal_day_event_pane_t1

0xd4ca,	// (0x000b22e7) bg_button_pane_cp045

0xeac0,	// (0x000b38dd) cntbar_detail_btn_pane_t1

0xb7e5,	// (0x000b0602) main_callh_pane_ParamLimits

0xb7e5,	// (0x000b0602) main_callh_pane

0xd4ca,	// (0x000b22e7) main_coverflow0_pane

0xd4ca,	// (0x000b22e7) main_wgtman_pane

0x7c2b,	// (0x000aca48) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7c2b,	// (0x000aca48) main_fs_bigclock_unlock_btn_pane

0x851b,	// (0x000ad338) bg_button_pane_cp16

0x852b,	// (0x000ad348) cell_tport_appsw_pane_g3

0x8cba,	// (0x000adad7) cf0_flow_pane_ParamLimits

0x8cba,	// (0x000adad7) cf0_flow_pane

0xeace,	// (0x000b38eb) listscroll_cf0_pane

0xead9,	// (0x000b38f6) main_cf0_pane_g1

0x8ccf,	// (0x000adaec) main_cf0_pane_t1_ParamLimits

0x8ccf,	// (0x000adaec) main_cf0_pane_t1

0x8ce6,	// (0x000adb03) main_cf0_pane_t2_ParamLimits

0x8ce6,	// (0x000adb03) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000b4cd9) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000b4cd9) main_cf0_pane_t

0xeaeb,	// (0x000b3908) scroll_pane_cp11

0x8cfd,	// (0x000adb1a) cf0_flow_pane_g1

0x8d05,	// (0x000adb22) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000b4cde) cf0_flow_pane_g

0x8d0d,	// (0x000adb2a) cf0_flow_pane_t1

0xd4ca,	// (0x000b22e7) main_call6_pane

0xd4ca,	// (0x000b22e7) main_calllock_pane

0x8d1b,	// (0x000adb38) call6_btn_grp_pane_ParamLimits

0x8d1b,	// (0x000adb38) call6_btn_grp_pane

0x8d35,	// (0x000adb52) call6_pane_g1_ParamLimits

0x8d35,	// (0x000adb52) call6_pane_g1

0x8d4a,	// (0x000adb67) popup_call6_1st_window_ParamLimits

0x8d4a,	// (0x000adb67) popup_call6_1st_window

0x8d5b,	// (0x000adb78) popup_call6_2nd_window_ParamLimits

0x8d5b,	// (0x000adb78) popup_call6_2nd_window

0x8d6c,	// (0x000adb89) cell_call6_btn_pane_ParamLimits

0x8d6c,	// (0x000adb89) cell_call6_btn_pane

0xa3bd,	// (0x000af1da) bg_popup_call2_in_pane_cp03

0xeaf6,	// (0x000b3913) popup_call6_1st_window_g1

0xeafe,	// (0x000b391b) popup_call6_1st_window_g2

0xeb06,	// (0x000b3923) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000b4ce3) popup_call6_1st_window_g

0xeb0e,	// (0x000b392b) popup_call6_1st_window_t1

0xeb1d,	// (0x000b393a) popup_call6_1st_window_t2

0xeb2d,	// (0x000b394a) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000b4cea) popup_call6_1st_window_t

0xa3bd,	// (0x000af1da) bg_popup_call2_in_pane_cp04

0xeaf6,	// (0x000b3913) popup_call6_2nd_window_g1

0xeafe,	// (0x000b391b) popup_call6_2nd_window_g2

0xeb06,	// (0x000b3923) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000b4ce3) popup_call6_2nd_window_g

0xeb0e,	// (0x000b392b) popup_call6_2nd_window_t1

0xd4ca,	// (0x000b22e7) bg_button_pane_cp15

0xeb3d,	// (0x000b395a) cell_call6_btn_pane_g1

0xeb46,	// (0x000b3963) cell_call6_btn_pane_t1

0x8d80,	// (0x000adb9d) listscroll_wgtman_pane_ParamLimits

0x8d80,	// (0x000adb9d) listscroll_wgtman_pane

0x8da3,	// (0x000adbc0) wgtman_btn_pane_ParamLimits

0x8da3,	// (0x000adbc0) wgtman_btn_pane

0xa274,	// (0x000af091) aid_scroll_copy1

0xeb55,	// (0x000b3972) list_wgtman_pane

0x8de6,	// (0x000adc03) wgtman_btn_pane_g1_ParamLimits

0x8de6,	// (0x000adc03) wgtman_btn_pane_g1

0x8e12,	// (0x000adc2f) wgtman_btn_pane_t1_ParamLimits

0x8e12,	// (0x000adc2f) wgtman_btn_pane_t1

0xeb5f,	// (0x000b397c) wgtman_btn_pane_t2_ParamLimits

0xeb5f,	// (0x000b397c) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000b4cf1) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000b4cf1) wgtman_btn_pane_t

0x8e4f,	// (0x000adc6c) listrow_wgtman_pane_ParamLimits

0x8e4f,	// (0x000adc6c) listrow_wgtman_pane

0x8e62,	// (0x000adc7f) listrow_wgtman_pane_g1

0x8e6f,	// (0x000adc8c) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000b4cf6) listrow_wgtman_pane_g

0x8e8d,	// (0x000adcaa) listrow_wgtman_pane_t1

0x8ea5,	// (0x000adcc2) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000b4cfb) listrow_wgtman_pane_t

0x8ecb,	// (0x000adce8) wait_bar_pane_cp09

0xeb76,	// (0x000b3993) main_calllock_btn_pane

0xeb80,	// (0x000b399d) main_calllock_pane_g1

0xd4ca,	// (0x000b22e7) bg_button_pane_cp17

0xeb8b,	// (0x000b39a8) main_calllock_btn_pane_g1

0xeb94,	// (0x000b39b1) main_calllock_btn_pane_t1

0xd4ca,	// (0x000b22e7) main_dialer3_pane

0xd4ca,	// (0x000b22e7) main_fmrd2_pane

0xbbef,	// (0x000b0a0c) main_fs_bigclock_unlock_btn_pane_g1

0xebab,	// (0x000b39c8) main_fs_bigclock_unlock_btn_pane_t1

0x8edd,	// (0x000adcfa) area_fmrd2_info_pane_ParamLimits

0x8edd,	// (0x000adcfa) area_fmrd2_info_pane

0x8eee,	// (0x000add0b) area_fmrd2_visual_pane_ParamLimits

0x8eee,	// (0x000add0b) area_fmrd2_visual_pane

0x8efc,	// (0x000add19) fmrd2_indi_pane_ParamLimits

0x8efc,	// (0x000add19) fmrd2_indi_pane

0x8f09,	// (0x000add26) area_fmrd2_visual_pane_g1

0x8f11,	// (0x000add2e) area_fmrd2_visual_pane_t1

0x8f21,	// (0x000add3e) area_fmrd2_visual_pane_t2

0x8f31,	// (0x000add4e) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000b4d05) area_fmrd2_visual_pane_t

0x8f41,	// (0x000add5e) area_fmrd2_info_pane_g1

0x8f49,	// (0x000add66) area_fmrd2_info_pane_t1

0x8f59,	// (0x000add76) area_fmrd2_info_pane_t2

0x8f69,	// (0x000add86) area_fmrd2_info_pane_t3

0x8f79,	// (0x000add96) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000b4d0c) area_fmrd2_info_pane_t

0x8f87,	// (0x000adda4) fmrd2_indi_pane_t1

0x8f97,	// (0x000addb4) fmrd2_indi_pane_t2

0x8fa7,	// (0x000addc4) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000b4d15) fmrd2_indi_pane_t

0xd5b7,	// (0x000b23d4) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd5b7,	// (0x000b23d4) list_single_fs_bigclock_indicator_pane_g5

0xd65e,	// (0x000b247b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd65e,	// (0x000b247b) list_single_fs_bigclock_indicator_pane_t5

0x870f,	// (0x000ad52c) aid_cell_bcale_month_pane_ParamLimits

0x870f,	// (0x000ad52c) aid_cell_bcale_month_pane

0x872d,	// (0x000ad54a) bcale_month_pane_ParamLimits

0x872d,	// (0x000ad54a) bcale_month_pane

0x8751,	// (0x000ad56e) bcale_preview_pane_ParamLimits

0x8751,	// (0x000ad56e) bcale_preview_pane

0xe0b3,	// (0x000b2ed0) list_single_fs_bigclock_pane_t1_ParamLimits

0xe0d2,	// (0x000b2eef) list_single_fs_bigclock_pane_t2_ParamLimits

0xe0d2,	// (0x000b2eef) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000b4c97) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000b4c97) list_single_fs_bigclock_pane_t

0xeba3,	// (0x000b39c0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000b4d00) main_fs_bigclock_unlock_btn_pane_g

0x8fb7,	// (0x000addd4) aid_dia3_key_size_ParamLimits

0x8fb7,	// (0x000addd4) aid_dia3_key_size

0x8fc6,	// (0x000adde3) aid_dia3_listrow_size_ParamLimits

0x8fc6,	// (0x000adde3) aid_dia3_listrow_size

0x8fdb,	// (0x000addf8) dia3_keypad_fun_pane_ParamLimits

0x8fdb,	// (0x000addf8) dia3_keypad_fun_pane

0x8ff7,	// (0x000ade14) dia3_keypad_num_pane_ParamLimits

0x8ff7,	// (0x000ade14) dia3_keypad_num_pane

0x9012,	// (0x000ade2f) dia3_listscroll_pane_ParamLimits

0x9012,	// (0x000ade2f) dia3_listscroll_pane

0x9025,	// (0x000ade42) dia3_numentry_pane_ParamLimits

0x9025,	// (0x000ade42) dia3_numentry_pane

0xebb9,	// (0x000b39d6) dia3_list_pane

0xebc4,	// (0x000b39e1) scroll_pane_cp12

0xd4ca,	// (0x000b22e7) bg_dia3_numentry_pane

0x9039,	// (0x000ade56) dia3_numentry_pane_t1

0x9048,	// (0x000ade65) cell_dia3_key_num_pane

0x9050,	// (0x000ade6d) cell_dia3_key0_fun_pane_ParamLimits

0x9050,	// (0x000ade6d) cell_dia3_key0_fun_pane

0x9064,	// (0x000ade81) cell_dia3_key1_fun_pane_ParamLimits

0x9064,	// (0x000ade81) cell_dia3_key1_fun_pane

0x907c,	// (0x000ade99) dia3_listrow_pane

0xd277,	// (0x000b2094) bg_dia3_numentry_pane_g1

0xd4ca,	// (0x000b22e7) bg_button_pane_cp21

0xebcf,	// (0x000b39ec) cell_dia3_key_num_pane_t1

0xebdd,	// (0x000b39fa) cell_dia3_key_num_pane_t2

0xebec,	// (0x000b3a09) cell_dia3_key_num_pane_t3

0xebfb,	// (0x000b3a18) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000b4d1c) cell_dia3_key_num_pane_t

0xd4ca,	// (0x000b22e7) bg_button_pane_cp19

0x908e,	// (0x000adeab) cell_dia3_key0_fun_pane_g1

0xd4ca,	// (0x000b22e7) bg_button_pane_cp20

0x9096,	// (0x000adeb3) cell_dia3_key1_fun_pane_g1

0x909e,	// (0x000adebb) area_left_week_number_pane

0x90aa,	// (0x000adec7) area_top_day_name_pane

0x90bd,	// (0x000adeda) frame_month_view_pane

0xec0a,	// (0x000b3a27) grid_month_view_pane

0x90d0,	// (0x000adeed) cell_top_day_name_pane_ParamLimits

0x90d0,	// (0x000adeed) cell_top_day_name_pane

0x90fd,	// (0x000adf1a) cell_area_left_week_number_pane_ParamLimits

0x90fd,	// (0x000adf1a) cell_area_left_week_number_pane

0x9111,	// (0x000adf2e) cell_month_view_pane_ParamLimits

0x9111,	// (0x000adf2e) cell_month_view_pane

0xec18,	// (0x000b3a35) frm_month_g1

0x913e,	// (0x000adf5b) frm_month_g2

0x9151,	// (0x000adf6e) frm_month_g3

0x9164,	// (0x000adf81) frm_month_g4

0x9177,	// (0x000adf94) frm_month_g5

0x918a,	// (0x000adfa7) frm_month_g6

0x919d,	// (0x000adfba) frm_month_g7

0xec25,	// (0x000b3a42) frm_month_g8

0x91b0,	// (0x000adfcd) frm_month_g9

0x91c0,	// (0x000adfdd) frm_month_g10

0x91d0,	// (0x000adfed) frm_month_g11

0x91e0,	// (0x000adffd) frm_month_g12

0x91f2,	// (0x000ae00f) frm_month_g13

0x9204,	// (0x000ae021) frm_month_g14

0x9218,	// (0x000ae035) frm_month_g15

0x922c,	// (0x000ae049) frm_month_g16

0x000f,

0xff08,	// (0x000b4d25) frm_month_g

0xec32,	// (0x000b3a4f) cell_top_day_name_pane_t1

0x9240,	// (0x000ae05d) cell_area_left_week_number_pane_g1

0x924c,	// (0x000ae069) cell_area_left_week_number_pane_t1

0xbe4f,	// (0x000b0c6c) cell_month_view_pane_g1

0x925f,	// (0x000ae07c) cell_month_view_pane_t1

0xd4ca,	// (0x000b22e7) main_fps_pane

0xd84e,	// (0x000b266b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd84e,	// (0x000b266b) cmail_ddmenu_btn02_pane_cp1

0xd86a,	// (0x000b2687) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd86a,	// (0x000b2687) cmail_ddmenu_btn02_pane_cp2

0x897c,	// (0x000ad799) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x897c,	// (0x000ad799) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000b4c4a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000b4c4a) cmail_ddmenu_btn02_pane_g

0x899a,	// (0x000ad7b7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x899a,	// (0x000ad7b7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000b4c4f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000b4c4f) cmail_ddmenu_btn02_pane_t

0x9272,	// (0x000ae08f) fps_text_pane_ParamLimits

0x9272,	// (0x000ae08f) fps_text_pane

0x9289,	// (0x000ae0a6) main_fps_pane_g1_ParamLimits

0x9289,	// (0x000ae0a6) main_fps_pane_g1

0x92a3,	// (0x000ae0c0) wait_bar_pane_cp010_ParamLimits

0x92a3,	// (0x000ae0c0) wait_bar_pane_cp010

0x92b4,	// (0x000ae0d1) fps_text_pane_t1_ParamLimits

0x92b4,	// (0x000ae0d1) fps_text_pane_t1

0xc65b,	// (0x000b1478) cam4_image_uncrop_pane_g1

0xc664,	// (0x000b1481) cam4_image_uncrop_pane_g2

0x5d7b,	// (0x000aab98) cam4_image_uncrop_pane_g3

0x5d84,	// (0x000aaba1) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x000b4711) cam4_image_uncrop_pane_g

0x907c,	// (0x000ade99) dia3_listrow_pane_ParamLimits

0xd4ca,	// (0x000b22e7) main_phob2_pane

0x84ec,	// (0x000ad309) cell_tport_appsw_pane_cp02_ParamLimits

0x84ec,	// (0x000ad309) cell_tport_appsw_pane_cp02

0x8500,	// (0x000ad31d) cell_tport_appsw_pane_cp03_ParamLimits

0x8500,	// (0x000ad31d) cell_tport_appsw_pane_cp03

0xd4ca,	// (0x000b22e7) phob2_contact_card_pane

0xd4ca,	// (0x000b22e7) phob2_listscroll_pane

0xec45,	// (0x000b3a62) phob2_list_pane

0xec4d,	// (0x000b3a6a) scroll_pane_cp034

0x92cc,	// (0x000ae0e9) phob2_cc_data_pane_ParamLimits

0x92cc,	// (0x000ae0e9) phob2_cc_data_pane

0x92eb,	// (0x000ae108) phob2_cc_listscroll_pane_ParamLimits

0x92eb,	// (0x000ae108) phob2_cc_listscroll_pane

0x9309,	// (0x000ae126) list_double_large_graphic_phob2_pane_ParamLimits

0x9309,	// (0x000ae126) list_double_large_graphic_phob2_pane

0x931c,	// (0x000ae139) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x931c,	// (0x000ae139) list_double_large_graphic_phob2_pane_g1

0x9332,	// (0x000ae14f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9332,	// (0x000ae14f) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000b4d46) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000b4d46) list_double_large_graphic_phob2_pane_g

0x933e,	// (0x000ae15b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x933e,	// (0x000ae15b) list_double_large_graphic_phob2_pane_t1

0x9354,	// (0x000ae171) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9354,	// (0x000ae171) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000b4d4b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000b4d4b) list_double_large_graphic_phob2_pane_t

0xd4ca,	// (0x000b22e7) list_highlight_pane_cp024

0xec55,	// (0x000b3a72) phob2_cc_button_pane

0x9369,	// (0x000ae186) phob2_cc_data_pane_g1_ParamLimits

0x9369,	// (0x000ae186) phob2_cc_data_pane_g1

0x937e,	// (0x000ae19b) phob2_cc_data_pane_g2_ParamLimits

0x937e,	// (0x000ae19b) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000b4d50) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000b4d50) phob2_cc_data_pane_g

0x9390,	// (0x000ae1ad) phob2_cc_data_pane_t1_ParamLimits

0x9390,	// (0x000ae1ad) phob2_cc_data_pane_t1

0x93a8,	// (0x000ae1c5) phob2_cc_data_pane_t2_ParamLimits

0x93a8,	// (0x000ae1c5) phob2_cc_data_pane_t2

0x93c0,	// (0x000ae1dd) phob2_cc_data_pane_t3_ParamLimits

0x93c0,	// (0x000ae1dd) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000b4d55) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000b4d55) phob2_cc_data_pane_t

0xec5d,	// (0x000b3a7a) phob2_cc_list_pane_ParamLimits

0xec5d,	// (0x000b3a7a) phob2_cc_list_pane

0xc9e8,	// (0x000b1805) scroll_pane_cp035_ParamLimits

0xc9e8,	// (0x000b1805) scroll_pane_cp035

0xe923,	// (0x000b3740) bg_button_pane_cp033

0xec69,	// (0x000b3a86) phob2_cc_button_pane_g1

0xec75,	// (0x000b3a92) phob2_cc_button_pane_t1

0xec8a,	// (0x000b3aa7) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000b4d5c) phob2_cc_button_pane_t

0x93d8,	// (0x000ae1f5) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x93d8,	// (0x000ae1f5) list_double_large_graphic_phob2_cc_pane

0x93eb,	// (0x000ae208) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x93eb,	// (0x000ae208) list_double_large_graphic_phob2_cc_pane_g1

0x93f7,	// (0x000ae214) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x93f7,	// (0x000ae214) list_double_large_graphic_phob2_cc_pane_g2

0x9403,	// (0x000ae220) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9403,	// (0x000ae220) list_double_large_graphic_phob2_cc_pane_g3

0x940f,	// (0x000ae22c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x940f,	// (0x000ae22c) list_double_large_graphic_phob2_cc_pane_g4

0x941b,	// (0x000ae238) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x941b,	// (0x000ae238) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000b4d61) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000b4d61) list_double_large_graphic_phob2_cc_pane_g

0x9427,	// (0x000ae244) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9427,	// (0x000ae244) list_double_large_graphic_phob2_cc_pane_t1

0x9450,	// (0x000ae26d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9450,	// (0x000ae26d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000b4d6c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000b4d6c) list_double_large_graphic_phob2_cc_pane_t

0xec9c,	// (0x000b3ab9) list_highlight_pane_cp025_ParamLimits

0xec9c,	// (0x000b3ab9) list_highlight_pane_cp025

0xe923,	// (0x000b3740) bg_button_pane_cp033_ParamLimits

0xec69,	// (0x000b3a86) phob2_cc_button_pane_g1_ParamLimits

0xec75,	// (0x000b3a92) phob2_cc_button_pane_t1_ParamLimits

0xec8a,	// (0x000b3aa7) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000b4d5c) phob2_cc_button_pane_t_ParamLimits

0x04f0,	// (0x000a530d) popup_wgtman_window

0xc7f5,	// (0x000b1612) scroll_pane_cp038

0x8dc8,	// (0x000adbe5) wgtman_btn_pane_cp_01_ParamLimits

0x8dc8,	// (0x000adbe5) wgtman_btn_pane_cp_01

0xecaa,	// (0x000b3ac7) wgtman_content_pane

0xecb3,	// (0x000b3ad0) wgtman_heading_pane

0xd4ca,	// (0x000b22e7) bg_heading_pane_cp02

0xecbc,	// (0x000b3ad9) wgtman_heading_pane_g1

0xecc4,	// (0x000b3ae1) wgtman_heading_pane_t1

0xecd2,	// (0x000b3aef) scroll_pane_cp036

0xecda,	// (0x000b3af7) wgtman_list_pane

0xece2,	// (0x000b3aff) wgtman_list_pane_t1_ParamLimits

0xece2,	// (0x000b3aff) wgtman_list_pane_t1

0x9fe7,	// (0x000aee04) cam4_grid_pane

0x6a1b,	// (0x000ab838) bg_button_pane_cp015_ParamLimits

0x6a2f,	// (0x000ab84c) bg_button_pane_cp016_ParamLimits

0x6a42,	// (0x000ab85f) bg_button_pane_cp017_ParamLimits

0x6a9a,	// (0x000ab8b7) popup_vitu2_query_window_g3_ParamLimits

0x6a9a,	// (0x000ab8b7) popup_vitu2_query_window_g3

0x6b57,	// (0x000ab974) popup_vitu2_query_window_t6_ParamLimits

0x6b57,	// (0x000ab974) popup_vitu2_query_window_t6

0x6b82,	// (0x000ab99f) popup_vitu2_query_window_t7_ParamLimits

0x6b82,	// (0x000ab99f) popup_vitu2_query_window_t7

0xc65b,	// (0x000b1478) cam4_grid_pane_g1

0xc664,	// (0x000b1481) cam4_grid_pane_g2

0xecfe,	// (0x000b3b1b) cam4_grid_pane_g3

0xed07,	// (0x000b3b24) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000b4d71) cam4_grid_pane_g

0x1512,	// (0x000a632f) aid_placing_vt_slider_lsc_ParamLimits

0x180f,	// (0x000a662c) vidtel_button_pane_ParamLimits

0x180f,	// (0x000a662c) vidtel_button_pane

0xed12,	// (0x000b3b2f) bg_button_pane_cp034

0x9479,	// (0x000ae296) vidtel_button_pane_g1

0xed1c,	// (0x000b3b39) vidtel_button_pane_t1

0xc92d,	// (0x000b174a) aid_size_vtel_slider_touch

0xc9e8,	// (0x000b1805) scroll_pane_cp039

0xd2b5,	// (0x000b20d2) ncim_query_button_pane_cp01_ParamLimits

0xd2d4,	// (0x000b20f1) ncimui_query_pane_g1_ParamLimits

0xe923,	// (0x000b3740) input_focus_pane_cp012_ParamLimits

0xd2f9,	// (0x000b2116) ncim_query_entry_pane_t1_ParamLimits

0xc9e8,	// (0x000b1805) scroll_pane_cp039_ParamLimits

0x29ed,	// (0x000a780a) navi_pane_bcale_mc_g1

0x29f5,	// (0x000a7812) navi_pane_bcale_mc_t1

0xd8b3,	// (0x000b26d0) main_sp_fs_email_pane_g1

0xd8bf,	// (0x000b26dc) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x000b4b08) main_sp_fs_email_pane_g

0xdcc2,	// (0x000b2adf) list_single_cale_mrui_row_pane_g3_ParamLimits

0xdcc2,	// (0x000b2adf) list_single_cale_mrui_row_pane_g3

0x89c2,	// (0x000ad7df) list_single_recal_day_pane_g5_event_pane

0xdf3a,	// (0x000b2d57) list_single_recal_day_pane_g7

0xed2a,	// (0x000b3b47) list_recal_day_event_pane_cp01

0xed33,	// (0x000b3b50) list_recal_vselct_arw_lo_pane_cp01

0xed3b,	// (0x000b3b58) list_recal_vselct_arw_up_pane_cp01

0xed43,	// (0x000b3b60) list_recal_vselct_pane_cp01

0xc94f,	// (0x000b176c) list_recal_day_event_pane_cp01_g1

0xed4d,	// (0x000b3b6a) list_recal_day_event_pane_cp01_t1

0xdf42,	// (0x000b2d5f) list_single_recal_day_pane_t1_ParamLimits

0xdf54,	// (0x000b2d71) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000b4c5f) list_single_recal_day_pane_t_ParamLimits

0xe76c,	// (0x000b3589) bg_notes_pane_ParamLimits

0xe82e,	// (0x000b364b) list_notes_pane_ParamLimits

0x0824,	// (0x000a5641) scroll_pane_cp06_ParamLimits

0xe850,	// (0x000b366d) main_notes_pane_ParamLimits

0xd4ca,	// (0x000b22e7) main_welc_pane

0x9481,	// (0x000ae29e) main_welc_body_pane_ParamLimits

0x9481,	// (0x000ae29e) main_welc_body_pane

0x949e,	// (0x000ae2bb) main_welc_opti_pane_ParamLimits

0x949e,	// (0x000ae2bb) main_welc_opti_pane

0x94e7,	// (0x000ae304) main_welc_pane_t1_ParamLimits

0x94e7,	// (0x000ae304) main_welc_pane_t1

0x9509,	// (0x000ae326) main_welc_body_row_pane_ParamLimits

0x9509,	// (0x000ae326) main_welc_body_row_pane

0xed5b,	// (0x000b3b78) main_welc_opti_row_pane_ParamLimits

0xed5b,	// (0x000b3b78) main_welc_opti_row_pane

0xed69,	// (0x000b3b86) main_welc_opti_row_pane_g1

0xed71,	// (0x000b3b8e) main_welc_opti_row_pane_t1

0xed81,	// (0x000b3b9e) main_welc_body_row_pane_t1

0xea2c,	// (0x000b3849) popup_notif_wgt_heading_pane

0xea46,	// (0x000b3863) aid_size_list_notif_wgt_del_ParamLimits

0xea53,	// (0x000b3870) list_notif_wgt_row_pane_g1_ParamLimits

0xea5f,	// (0x000b387c) list_notif_wgt_row_pane_g2_ParamLimits

0xea6b,	// (0x000b3888) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000b4cc6) list_notif_wgt_row_pane_g_ParamLimits

0xea78,	// (0x000b3895) list_notif_wgt_row_pane_t1_ParamLimits

0xea8d,	// (0x000b38aa) list_notif_wgt_row_pane_t2_ParamLimits

0xea9f,	// (0x000b38bc) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000b4ccd) list_notif_wgt_row_pane_t_ParamLimits

0x8e62,	// (0x000adc7f) listrow_wgtman_pane_g1_ParamLimits

0x8e6f,	// (0x000adc8c) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000b4cf6) listrow_wgtman_pane_g_ParamLimits

0x8e8d,	// (0x000adcaa) listrow_wgtman_pane_t1_ParamLimits

0x8ea5,	// (0x000adcc2) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000b4cfb) listrow_wgtman_pane_t_ParamLimits

0x8ecb,	// (0x000adce8) wait_bar_pane_cp09_ParamLimits

0xd4ca,	// (0x000b22e7) bg_popup_heading_pane_cp02

0xed90,	// (0x000b3bad) popup_notif_wgt_heading_pane_g1

0xed98,	// (0x000b3bb5) popup_notif_wgt_heading_pane_t1

0xd4ca,	// (0x000b22e7) main_vids_pane

0xd4ca,	// (0x000b22e7) vids_listscroll_pane

0x951f,	// (0x000ae33c) scroll_pane_cp040

0xd4ca,	// (0x000b22e7) vids_list_pane

0x952a,	// (0x000ae347) vids_list_double_pane_ParamLimits

0x952a,	// (0x000ae347) vids_list_double_pane

0x953b,	// (0x000ae358) vids_list_double_pane_g1

0x9544,	// (0x000ae361) vids_list_double_pane_t1

0x9553,	// (0x000ae370) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000b4d7f) vids_list_double_pane_t

0x95ad,	// (0x000ae3ca) main_ncimui_pane_ParamLimits

0x77b3,	// (0x000ac5d0) main_ncimui_pane_g1_ParamLimits

0x77bf,	// (0x000ac5dc) main_ncimui_pane_g2_ParamLimits

0x77bf,	// (0x000ac5dc) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x000b4a0d) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x000b4a0d) main_ncimui_pane_g

0x94bd,	// (0x000ae2da) main_welc_pane_g1_ParamLimits

0x94bd,	// (0x000ae2da) main_welc_pane_g1

0x94d2,	// (0x000ae2ef) main_welc_pane_g2_ParamLimits

0x94d2,	// (0x000ae2ef) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000b4d7a) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000b4d7a) main_welc_pane_g

0xe76c,	// (0x000b3589) listscroll_mce_pane_ParamLimits

0x2acb,	// (0x000a78e8) wait_bar_pane_cp10

0xb7d9,	// (0x000b05f6) main_cale_day_pane_ParamLimits

0xb7d9,	// (0x000b05f6) main_cale_week_pane_ParamLimits

0xe76c,	// (0x000b3589) main_messa_pane_ParamLimits

0x5086,	// (0x000a9ea3) main_clock2_btn_pane_ParamLimits

0x5086,	// (0x000a9ea3) main_clock2_btn_pane

0xc04b,	// (0x000b0e68) main_clock2_btn_pane_cp01_ParamLimits

0xc04b,	// (0x000b0e68) main_clock2_btn_pane_cp01

0xdc4e,	// (0x000b2a6b) list_cale_mrui_pane_ParamLimits

0xeae3,	// (0x000b3900) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000b4cd4) main_cf0_pane_g

0x909e,	// (0x000adebb) area_left_week_number_pane_ParamLimits

0x90aa,	// (0x000adec7) area_top_day_name_pane_ParamLimits

0x90bd,	// (0x000adeda) frame_month_view_pane_ParamLimits

0xec0a,	// (0x000b3a27) grid_month_view_pane_ParamLimits

0xec18,	// (0x000b3a35) frm_month_g1_ParamLimits

0x913e,	// (0x000adf5b) frm_month_g2_ParamLimits

0x9151,	// (0x000adf6e) frm_month_g3_ParamLimits

0x9164,	// (0x000adf81) frm_month_g4_ParamLimits

0x9177,	// (0x000adf94) frm_month_g5_ParamLimits

0x918a,	// (0x000adfa7) frm_month_g6_ParamLimits

0x919d,	// (0x000adfba) frm_month_g7_ParamLimits

0xec25,	// (0x000b3a42) frm_month_g8_ParamLimits

0x91b0,	// (0x000adfcd) frm_month_g9_ParamLimits

0x91c0,	// (0x000adfdd) frm_month_g10_ParamLimits

0x91d0,	// (0x000adfed) frm_month_g11_ParamLimits

0x91e0,	// (0x000adffd) frm_month_g12_ParamLimits

0x91f2,	// (0x000ae00f) frm_month_g13_ParamLimits

0x9204,	// (0x000ae021) frm_month_g14_ParamLimits

0x9218,	// (0x000ae035) frm_month_g15_ParamLimits

0x922c,	// (0x000ae049) frm_month_g16_ParamLimits

0xff08,	// (0x000b4d25) frm_month_g_ParamLimits

0xec32,	// (0x000b3a4f) cell_top_day_name_pane_t1_ParamLimits

0x9240,	// (0x000ae05d) cell_area_left_week_number_pane_g1_ParamLimits

0x924c,	// (0x000ae069) cell_area_left_week_number_pane_t1_ParamLimits

0xbe4f,	// (0x000b0c6c) cell_month_view_pane_g1_ParamLimits

0x925f,	// (0x000ae07c) cell_month_view_pane_t1_ParamLimits

0xe764,	// (0x000b3581) main_clock2_btn_pane_g1

0xeda6,	// (0x000b3bc3) main_clock2_btn_pane_t1

0xe923,	// (0x000b3740) listscroll_cmail_pane_ParamLimits

0xd8b3,	// (0x000b26d0) main_sp_fs_email_pane_g1_ParamLimits

0xd8bf,	// (0x000b26dc) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x000b4b08) main_sp_fs_email_pane_g_ParamLimits

0xdea2,	// (0x000b2cbf) list_recal_day_pane_ParamLimits

0xdeb3,	// (0x000b2cd0) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
