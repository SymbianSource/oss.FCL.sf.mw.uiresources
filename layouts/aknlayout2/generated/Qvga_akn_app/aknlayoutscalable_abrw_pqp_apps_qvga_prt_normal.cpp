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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x000164fc };

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
0x88a5,	// (0x0001eda1) Screen

0x88af,	// (0x0001edab) application_window

0x88b9,	// (0x0001edb5) area_bottom_pane_ParamLimits

0x88b9,	// (0x0001edb5) area_bottom_pane

0x7068,	// (0x0001d564) area_top_pane_ParamLimits

0x7068,	// (0x0001d564) area_top_pane

0x70be,	// (0x0001d5ba) call_video_uplink_pane_ParamLimits

0x70be,	// (0x0001d5ba) call_video_uplink_pane

0x70f7,	// (0x0001d5f3) main_pane_ParamLimits

0x70f7,	// (0x0001d5f3) main_pane

0x2fbf,	// (0x000194bb) context_pane

0xaf22,	// (0x0002141e) navi_pane

0xaf42,	// (0x0002143e) popup_cale_events_window_ParamLimits

0xaf42,	// (0x0002143e) popup_cale_events_window

0x2fd2,	// (0x000194ce) popup_mup_playback_window

0xaf59,	// (0x00021455) signal_pane

0x0e13,	// (0x0001730f) main_browser_pane

0x1048,	// (0x00017544) main_burst_pane

0x77cb,	// (0x0001dcc7) main_calc_pane

0x2f5d,	// (0x00019459) main_cale_day_pane

0x77d8,	// (0x0001dcd4) main_cale_month_pane

0x2f5d,	// (0x00019459) main_cale_week_pane

0x1048,	// (0x00017544) main_call_pane

0x0ac5,	// (0x00016fc1) main_call_poc_pane

0x1048,	// (0x00017544) main_camera_pane

0x1048,	// (0x00017544) main_chi_dic_pane

0x18c3,	// (0x00017dbf) main_clock_pane

0x0ac5,	// (0x00016fc1) main_fmradio_pane

0x1048,	// (0x00017544) main_graph_messa_pane

0x0ac5,	// (0x00016fc1) main_help_pane

0x0e13,	// (0x0001730f) main_im_pane

0x0d20,	// (0x0001721c) main_image_pane_ParamLimits

0x0d20,	// (0x0001721c) main_image_pane

0x0ac5,	// (0x00016fc1) main_location2_pane

0x1048,	// (0x00017544) main_location_pane

0x0d20,	// (0x0001721c) main_messa_pane

0x0ac5,	// (0x00016fc1) main_mp2_pane

0x1048,	// (0x00017544) main_mp_pane

0x0ac5,	// (0x00016fc1) main_msg_pane

0x0ac5,	// (0x00016fc1) main_mup_eq_pane

0x0ac5,	// (0x00016fc1) main_mup_pane

0x0e13,	// (0x0001730f) main_notes_pane

0x0ac5,	// (0x00016fc1) main_pec_pane

0x0ac5,	// (0x00016fc1) main_phob_pane

0x0ac5,	// (0x00016fc1) main_pinb_pane

0x0ac5,	// (0x00016fc1) main_postcard_pane

0x0ac5,	// (0x00016fc1) main_qdial_pane

0x1048,	// (0x00017544) main_skin_pane

0x0ac5,	// (0x00016fc1) main_smil2_pane

0x1048,	// (0x00017544) main_smil_pane

0x1048,	// (0x00017544) main_video_pane

0x1048,	// (0x00017544) main_video_tele_pane

0x0d20,	// (0x0001721c) main_viewer_pane_ParamLimits

0x0d20,	// (0x0001721c) main_viewer_pane

0x1048,	// (0x00017544) main_vorec_pane

0x7825,	// (0x0001dd21) popup_blid_sat_info_window_ParamLimits

0x7825,	// (0x0001dd21) popup_blid_sat_info_window

0x7841,	// (0x0001dd3d) popup_dyc_status_message_window_ParamLimits

0x7841,	// (0x0001dd3d) popup_dyc_status_message_window

0x784d,	// (0x0001dd49) popup_grid_large_graphic_window_ParamLimits

0x784d,	// (0x0001dd49) popup_grid_large_graphic_window

0x78c2,	// (0x0001ddbe) popup_loc_request_window_ParamLimits

0x78c2,	// (0x0001ddbe) popup_loc_request_window

0x7905,	// (0x0001de01) popup_wml_address_window_ParamLimits

0x7905,	// (0x0001de01) popup_wml_address_window

0xae38,	// (0x00021334) call_muted_g1

0xab75,	// (0x00021071) popup_call_audio_conf_window_ParamLimits

0xab75,	// (0x00021071) popup_call_audio_conf_window

0xae48,	// (0x00021344) popup_call_audio_first_window_ParamLimits

0xae48,	// (0x00021344) popup_call_audio_first_window

0xae7c,	// (0x00021378) popup_call_audio_in_window_ParamLimits

0xae7c,	// (0x00021378) popup_call_audio_in_window

0xae98,	// (0x00021394) popup_call_audio_out_window_ParamLimits

0xae98,	// (0x00021394) popup_call_audio_out_window

0xaeb4,	// (0x000213b0) popup_call_audio_second_window_ParamLimits

0xaeb4,	// (0x000213b0) popup_call_audio_second_window

0xaedc,	// (0x000213d8) popup_call_audio_wait_window_ParamLimits

0xaedc,	// (0x000213d8) popup_call_audio_wait_window

0xaefb,	// (0x000213f7) popup_number_entry_window_ParamLimits

0xaefb,	// (0x000213f7) popup_number_entry_window

0x0680,	// (0x00016b7c) bg_popup_call_pane_cp05_ParamLimits

0x0680,	// (0x00016b7c) bg_popup_call_pane_cp05

0x06a0,	// (0x00016b9c) popup_number_entry_window_t1

0x06b3,	// (0x00016baf) popup_number_entry_window_t2

0x06c5,	// (0x00016bc1) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000255c6) popup_number_entry_window_t

0x070b,	// (0x00016c07) text_title_cp2

0x071e,	// (0x00016c1a) bg_popup_call_pane_cp_ParamLimits

0x071e,	// (0x00016c1a) bg_popup_call_pane_cp

0x072c,	// (0x00016c28) call_thumbnail_pane

0x0734,	// (0x00016c30) popup_call_audio_in_window_g1_ParamLimits

0x0734,	// (0x00016c30) popup_call_audio_in_window_g1

0x0740,	// (0x00016c3c) popup_call_audio_in_window_g2_ParamLimits

0x0740,	// (0x00016c3c) popup_call_audio_in_window_g2

0x074c,	// (0x00016c48) popup_call_audio_in_window_g3_ParamLimits

0x074c,	// (0x00016c48) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000255cf) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000255cf) popup_call_audio_in_window_g

0x0758,	// (0x00016c54) popup_call_audio_in_window_t1_ParamLimits

0x0758,	// (0x00016c54) popup_call_audio_in_window_t1

0x0773,	// (0x00016c6f) popup_call_audio_in_window_t2_ParamLimits

0x0773,	// (0x00016c6f) popup_call_audio_in_window_t2

0x078e,	// (0x00016c8a) popup_call_audio_in_window_t3_ParamLimits

0x078e,	// (0x00016c8a) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000255d6) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000255d6) popup_call_audio_in_window_t

0x071e,	// (0x00016c1a) bg_popup_call_pane_cp01_ParamLimits

0x071e,	// (0x00016c1a) bg_popup_call_pane_cp01

0x072c,	// (0x00016c28) call_thumbnail_pane_cp02

0x07a1,	// (0x00016c9d) call_type_pane_cp022

0x07a9,	// (0x00016ca5) popup_call_audio_out_window_g1_ParamLimits

0x07a9,	// (0x00016ca5) popup_call_audio_out_window_g1

0x07bb,	// (0x00016cb7) popup_call_audio_out_window_g2_ParamLimits

0x07bb,	// (0x00016cb7) popup_call_audio_out_window_g2

0x07c7,	// (0x00016cc3) popup_call_audio_out_window_g3_ParamLimits

0x07c7,	// (0x00016cc3) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000255dd) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000255dd) popup_call_audio_out_window_g

0x07d9,	// (0x00016cd5) popup_call_audio_out_window_t1_ParamLimits

0x07d9,	// (0x00016cd5) popup_call_audio_out_window_t1

0x07f1,	// (0x00016ced) popup_call_audio_out_window_t2_ParamLimits

0x07f1,	// (0x00016ced) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000255e4) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000255e4) popup_call_audio_out_window_t

0x0806,	// (0x00016d02) bg_popup_call_pane_ParamLimits

0x0806,	// (0x00016d02) bg_popup_call_pane

0x88ee,	// (0x0001edea) call_thumbnail_pane_cp_ParamLimits

0x88ee,	// (0x0001edea) call_thumbnail_pane_cp

0x088a,	// (0x00016d86) call_type_pane_cp01_ParamLimits

0x088a,	// (0x00016d86) call_type_pane_cp01

0x08ce,	// (0x00016dca) popup_call_audio_first_window_g1_ParamLimits

0x08ce,	// (0x00016dca) popup_call_audio_first_window_g1

0x091a,	// (0x00016e16) popup_call_audio_first_window_g2_ParamLimits

0x091a,	// (0x00016e16) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000255e9) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000255e9) popup_call_audio_first_window_g

0x095e,	// (0x00016e5a) popup_call_audio_first_window_t1_ParamLimits

0x095e,	// (0x00016e5a) popup_call_audio_first_window_t1

0x0a0a,	// (0x00016f06) popup_call_audio_first_window_t4_ParamLimits

0x0a0a,	// (0x00016f06) popup_call_audio_first_window_t4

0x0a96,	// (0x00016f92) popup_call_audio_first_window_t5_ParamLimits

0x0a96,	// (0x00016f92) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000255ee) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000255ee) popup_call_audio_first_window_t

0x0ac5,	// (0x00016fc1) bg_popup_call_pane_cp02

0x0acf,	// (0x00016fcb) call_type_pane_cp023

0x0ad7,	// (0x00016fd3) popup_call_audio_wait_window_g1

0x0adf,	// (0x00016fdb) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000255f5) popup_call_audio_wait_window_g

0x0ae7,	// (0x00016fe3) popup_call_audio_wait_window_t3

0x0af5,	// (0x00016ff1) bg_popup_call_pane_cp03_ParamLimits

0x0af5,	// (0x00016ff1) bg_popup_call_pane_cp03

0x0b55,	// (0x00017051) call_thumbnail_pane_cp011_ParamLimits

0x0b55,	// (0x00017051) call_thumbnail_pane_cp011

0x0b61,	// (0x0001705d) call_type_pane_cp034_ParamLimits

0x0b61,	// (0x0001705d) call_type_pane_cp034

0x0b9d,	// (0x00017099) popup_call_audio_second_window_g1_ParamLimits

0x0b9d,	// (0x00017099) popup_call_audio_second_window_g1

0x0bd9,	// (0x000170d5) popup_call_audio_second_window_g2_ParamLimits

0x0bd9,	// (0x000170d5) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000255fa) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000255fa) popup_call_audio_second_window_g

0x0c15,	// (0x00017111) popup_call_audio_second_window_t1_ParamLimits

0x0c15,	// (0x00017111) popup_call_audio_second_window_t1

0x0c96,	// (0x00017192) popup_call_audio_second_window_t2_ParamLimits

0x0c96,	// (0x00017192) popup_call_audio_second_window_t2

0x0ccc,	// (0x000171c8) popup_call_audio_second_window_t3_ParamLimits

0x0ccc,	// (0x000171c8) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000255ff) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000255ff) popup_call_audio_second_window_t

0x0ac5,	// (0x00016fc1) bg_popup_call_pane_cp04

0x0d02,	// (0x000171fe) list_conf_pane

0x0d0a,	// (0x00017206) popup_call_audio_conf_window_t1

0x0d18,	// (0x00017214) call_thumbnail_pane_g1

0x0d20,	// (0x0001721c) bg_pinb_pane_ParamLimits

0x0d20,	// (0x0001721c) bg_pinb_pane

0x0d2e,	// (0x0001722a) find_pinb_pane

0x0d37,	// (0x00017233) listscroll_pinb_pane_ParamLimits

0x0d37,	// (0x00017233) listscroll_pinb_pane

0x0d46,	// (0x00017242) pinb_bg_pane_g1

0x8912,	// (0x0001ee0e) pinb_bg_pane_g2

0x891c,	// (0x0001ee18) pinb_bg_pane_g3

0x8926,	// (0x0001ee22) pinb_bg_pane_g4

0x8930,	// (0x0001ee2c) pinb_bg_pane_g5

0x893a,	// (0x0001ee36) pinb_bg_pane_g6

0x8945,	// (0x0001ee41) pinb_bg_pane_g7

0x8950,	// (0x0001ee4c) pinb_bg_pane_g8

0x8959,	// (0x0001ee55) pinb_bg_pane_g9

0x8961,	// (0x0001ee5d) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x00025606) pinb_bg_pane_g

0x897e,	// (0x0001ee7a) grid_pinb_pane

0x8987,	// (0x0001ee83) list_pinb_pane

0x8992,	// (0x0001ee8e) scroll_pane_cp01_ParamLimits

0x8992,	// (0x0001ee8e) scroll_pane_cp01

0x0d50,	// (0x0001724c) find_pinb_pane_g1_ParamLimits

0x0d50,	// (0x0001724c) find_pinb_pane_g1

0x0d68,	// (0x00017264) find_pinb_pane_t1

0x0d7a,	// (0x00017276) find_pinb_pane_t2

0x0001,

0xf124,	// (0x00025620) find_pinb_pane_t

0x0d8f,	// (0x0001728b) input_focus_pane_cp01_ParamLimits

0x0d8f,	// (0x0001728b) input_focus_pane_cp01

0x89a2,	// (0x0001ee9e) cell_pinb_pane_ParamLimits

0x89a2,	// (0x0001ee9e) cell_pinb_pane

0x89bb,	// (0x0001eeb7) cell_pinb_pane_g1_ParamLimits

0x89bb,	// (0x0001eeb7) cell_pinb_pane_g1

0x89cc,	// (0x0001eec8) cell_pinb_pane_g2_ParamLimits

0x89cc,	// (0x0001eec8) cell_pinb_pane_g2

0x0d9b,	// (0x00017297) cell_pinb_pane_g3_ParamLimits

0x0d9b,	// (0x00017297) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x00025625) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x00025625) cell_pinb_pane_g

0x0ac5,	// (0x00016fc1) grid_highlight_pane_cp01

0x89d8,	// (0x0001eed4) list_pinb_item_pane_ParamLimits

0x89d8,	// (0x0001eed4) list_pinb_item_pane

0x0ac5,	// (0x00016fc1) list_highlight_pane_cp02

0x89ed,	// (0x0001eee9) list_pinb_item_pane_g1_ParamLimits

0x89ed,	// (0x0001eee9) list_pinb_item_pane_g1

0x0da7,	// (0x000172a3) list_pinb_item_pane_g2_ParamLimits

0x0da7,	// (0x000172a3) list_pinb_item_pane_g2

0x89fa,	// (0x0001eef6) list_pinb_item_pane_g3_ParamLimits

0x89fa,	// (0x0001eef6) list_pinb_item_pane_g3

0x8a09,	// (0x0001ef05) list_pinb_item_pane_g4_ParamLimits

0x8a09,	// (0x0001ef05) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0002562c) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0002562c) list_pinb_item_pane_g

0x8a15,	// (0x0001ef11) list_pinb_item_pane_t1_ParamLimits

0x8a15,	// (0x0001ef11) list_pinb_item_pane_t1

0x72d3,	// (0x0001d7cf) calc_display_pane

0x72ed,	// (0x0001d7e9) calc_paper_pane

0x7305,	// (0x0001d801) grid_calc_pane

0x0ac5,	// (0x00016fc1) bg_list_pane_cp01

0x8a2c,	// (0x0001ef28) clock_g1

0x8a34,	// (0x0001ef30) clock_g2

0x0001,

0xf139,	// (0x00025635) clock_g

0x8a3c,	// (0x0001ef38) clock_t1_ParamLimits

0x8a3c,	// (0x0001ef38) clock_t1

0x8a51,	// (0x0001ef4d) clock_t2_ParamLimits

0x8a51,	// (0x0001ef4d) clock_t2

0x8a63,	// (0x0001ef5f) clock_t3_ParamLimits

0x8a63,	// (0x0001ef5f) clock_t3

0x8a75,	// (0x0001ef71) clock_t4_ParamLimits

0x8a75,	// (0x0001ef71) clock_t4

0x8a87,	// (0x0001ef83) clock_t5_ParamLimits

0x8a87,	// (0x0001ef83) clock_t5

0x8a9c,	// (0x0001ef98) clock_t6_ParamLimits

0x8a9c,	// (0x0001ef98) clock_t6

0x8aae,	// (0x0001efaa) clock_t7_ParamLimits

0x8aae,	// (0x0001efaa) clock_t7

0x8ac0,	// (0x0001efbc) clock_t8_ParamLimits

0x8ac0,	// (0x0001efbc) clock_t8

0x8ad2,	// (0x0001efce) clock_t9_ParamLimits

0x8ad2,	// (0x0001efce) clock_t9

0x0008,

0xf13e,	// (0x0002563a) clock_t_ParamLimits

0xf13e,	// (0x0002563a) clock_t

0x0dbb,	// (0x000172b7) popup_clock_analogue_window_cp02

0x0dbb,	// (0x000172b7) popup_clock_digital_window_cp01

0x0dc3,	// (0x000172bf) listscroll_help_pane

0x0ac5,	// (0x00016fc1) phob_pre_status_pane

0x0dcd,	// (0x000172c9) grid_qdial_pane

0x0d20,	// (0x0001721c) listscroll_mce_pane

0x0d20,	// (0x0001721c) bg_notes_pane

0x0dd7,	// (0x000172d3) list_notes_pane

0x8ae4,	// (0x0001efe0) scroll_pane_cp06

0x0de5,	// (0x000172e1) bg_calc_paper_pane

0x7329,	// (0x0001d825) list_calc_pane

0x0e13,	// (0x0001730f) bg_calc_display_pane

0x7343,	// (0x0001d83f) calc_display_pane_t1

0x7358,	// (0x0001d854) calc_display_pane_t2

0x736d,	// (0x0001d869) calc_display_pane_t3

0x0002,

0xf151,	// (0x0002564d) calc_display_pane_t

0x737f,	// (0x0001d87b) cell_calc_pane_ParamLimits

0x737f,	// (0x0001d87b) cell_calc_pane

0x0e31,	// (0x0001732d) bg_calc_paper_pane_g1

0x0e49,	// (0x00017345) bg_calc_paper_pane_g2

0x0e3d,	// (0x00017339) bg_calc_paper_pane_g3

0x0e61,	// (0x0001735d) bg_calc_paper_pane_g4

0x0e55,	// (0x00017351) bg_calc_paper_pane_g5

0x8af1,	// (0x0001efed) bg_calc_paper_pane_g6

0x8b00,	// (0x0001effc) bg_calc_paper_pane_g7

0x8b0f,	// (0x0001f00b) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x00025654) bg_calc_paper_pane_g

0x8b1e,	// (0x0001f01a) calc_bg_paper_pane_g9

0x8b2d,	// (0x0001f029) list_calc_item_pane_ParamLimits

0x8b2d,	// (0x0001f029) list_calc_item_pane

0x0e6d,	// (0x00017369) list_calc_item_pane_g1

0x73a6,	// (0x0001d8a2) list_calc_item_pane_t1_ParamLimits

0x73a6,	// (0x0001d8a2) list_calc_item_pane_t1

0x73b8,	// (0x0001d8b4) list_calc_item_pane_t2_ParamLimits

0x73b8,	// (0x0001d8b4) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x00025665) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x00025665) list_calc_item_pane_t

0x0e8c,	// (0x00017388) cell_calc_pane_g1

0x0e96,	// (0x00017392) grid_highlight_pane_cp02

0x0ecb,	// (0x000173c7) bg_calc_display_pane_g1

0x73e6,	// (0x0001d8e2) bg_calc_display_pane_g2

0x0eb8,	// (0x000173b4) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0002566f) bg_calc_display_pane_g

0x73f0,	// (0x0001d8ec) cell_qdial_pane_ParamLimits

0x73f0,	// (0x0001d8ec) cell_qdial_pane

0x8b45,	// (0x0001f041) cell_qdial_pane_g1_ParamLimits

0x8b45,	// (0x0001f041) cell_qdial_pane_g1

0x8b52,	// (0x0001f04e) cell_qdial_pane_g2_ParamLimits

0x8b52,	// (0x0001f04e) cell_qdial_pane_g2

0x0ed4,	// (0x000173d0) cell_qdial_pane_g3_ParamLimits

0x0ed4,	// (0x000173d0) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x00025676) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x00025676) cell_qdial_pane_g

0x8b70,	// (0x0001f06c) cell_qdial_pane_t1_ParamLimits

0x8b70,	// (0x0001f06c) cell_qdial_pane_t1

0x8b88,	// (0x0001f084) cell_qdial_pane_t2_ParamLimits

0x8b88,	// (0x0001f084) cell_qdial_pane_t2

0x8b9b,	// (0x0001f097) cell_qdial_pane_t3_ParamLimits

0x8b9b,	// (0x0001f097) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0002567f) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0002567f) cell_qdial_pane_t

0x0ac5,	// (0x00016fc1) grid_highlight_pane_cp04

0x0ee0,	// (0x000173dc) thumbnail_qdial_pane_ParamLimits

0x0ee0,	// (0x000173dc) thumbnail_qdial_pane

0x0f3c,	// (0x00017438) list_help_pane

0x0f45,	// (0x00017441) scroll_pane_cp02

0x8bae,	// (0x0001f0aa) help_list_pane_t1_ParamLimits

0x8bae,	// (0x0001f0aa) help_list_pane_t1

0x7402,	// (0x0001d8fe) bg_notes_pane_g2

0x740a,	// (0x0001d906) bg_notes_pane_g3

0x7412,	// (0x0001d90e) notes_bg_pane_g1

0x741a,	// (0x0001d916) notes_bg_pane_g4

0x7422,	// (0x0001d91e) notes_bg_pane_g5

0x742a,	// (0x0001d926) notes_bg_pane_g6

0x7432,	// (0x0001d92e) notes_bg_pane_g7

0x743a,	// (0x0001d936) notes_bg_pane_g8

0x7442,	// (0x0001d93e) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0002569d) notes_bg_pane_g

0x8bca,	// (0x0001f0c6) list_notes_text_pane_ParamLimits

0x8bca,	// (0x0001f0c6) list_notes_text_pane

0x0f96,	// (0x00017492) list_notes_text_pane_g1

0x0f9f,	// (0x0001749b) list_notes_text_pane_t1

0x8beb,	// (0x0001f0e7) listscroll_cale_week_pane

0x8c15,	// (0x0001f111) bg_cale_heading_pane

0x8c32,	// (0x0001f12e) bg_cale_pane_cp01

0x8c54,	// (0x0001f150) cale_week_corner_pane

0x8c73,	// (0x0001f16f) cale_week_day_heading_pane

0x8c95,	// (0x0001f191) cale_week_scroll_pane_g1

0x8cad,	// (0x0001f1a9) cale_week_scroll_pane_g2

0x8cc5,	// (0x0001f1c1) cale_week_scroll_pane_g3

0x8cdd,	// (0x0001f1d9) cale_week_scroll_pane_g4

0x8cf5,	// (0x0001f1f1) cale_week_scroll_pane_g5

0x8d0d,	// (0x0001f209) cale_week_scroll_pane_g6

0x8d25,	// (0x0001f221) cale_week_scroll_pane_g7

0x8d3d,	// (0x0001f239) cale_week_scroll_pane_g8

0x8d55,	// (0x0001f251) cale_week_scroll_pane_g9

0x8d72,	// (0x0001f26e) cale_week_scroll_pane_g10

0x8d8f,	// (0x0001f28b) cale_week_scroll_pane_g11

0x8dac,	// (0x0001f2a8) cale_week_scroll_pane_g12

0x8dc9,	// (0x0001f2c5) cale_week_scroll_pane_g13

0x8de6,	// (0x0001f2e2) cale_week_scroll_pane_g14

0x8e03,	// (0x0001f2ff) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000256ac) cale_week_scroll_pane_g

0x8e38,	// (0x0001f334) cale_week_time_pane

0x8e50,	// (0x0001f34c) grid_cale_week_pane

0x0fd9,	// (0x000174d5) scroll_pane_cp08

0x8e6f,	// (0x0001f36b) cell_cale_week_pane_ParamLimits

0x8e6f,	// (0x0001f36b) cell_cale_week_pane

0x8ee5,	// (0x0001f3e1) cale_week_day_heading_pane_t1

0x8f0d,	// (0x0001f409) cale_week_day_heading_pane_t2

0x8f3a,	// (0x0001f436) cale_week_day_heading_pane_t3

0x8f67,	// (0x0001f463) cale_week_day_heading_pane_t4

0x8f94,	// (0x0001f490) cale_week_day_heading_pane_t5

0x8fc1,	// (0x0001f4bd) cale_week_day_heading_pane_t6

0x8fee,	// (0x0001f4ea) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000256cd) cale_week_day_heading_pane_t

0x0ff6,	// (0x000174f2) bg_cale_side_pane

0x744a,	// (0x0001d946) cale_week_time_pane_t1

0x748e,	// (0x0001d98a) cale_week_time_pane_t2

0x74d2,	// (0x0001d9ce) cale_week_time_pane_t3

0x7516,	// (0x0001da12) cale_week_time_pane_t4

0x755a,	// (0x0001da56) cale_week_time_pane_t5

0x759e,	// (0x0001da9a) cale_week_time_pane_t6

0x75e2,	// (0x0001dade) cale_week_time_pane_t7

0x7626,	// (0x0001db22) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000256dc) cale_week_time_pane_t

0x9016,	// (0x0001f512) cell_cale_week_pane_g2

0x903a,	// (0x0001f536) cell_cale_week_pane_g3_ParamLimits

0x903a,	// (0x0001f536) cell_cale_week_pane_g3

0x1004,	// (0x00017500) grid_highlight_pane_cp07

0x100c,	// (0x00017508) listscroll_gms_pane

0x1016,	// (0x00017512) grid_gms_pane

0x101f,	// (0x0001751b) listscroll_gms_pane_g1

0x1027,	// (0x00017523) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000256ed) listscroll_gms_pane_g

0x9052,	// (0x0001f54e) scroll_pane_cp010

0x905b,	// (0x0001f557) cell_gms_pane_ParamLimits

0x905b,	// (0x0001f557) cell_gms_pane

0x906c,	// (0x0001f568) cell_gms_pane_g1

0x102f,	// (0x0001752b) cell_gms_pane_g2

0x0f96,	// (0x00017492) cell_gms_pane_g3

0x1037,	// (0x00017533) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000256f2) cell_gms_pane_g

0x1040,	// (0x0001753c) grid_highlight_pane_cp09

0xade6,	// (0x000212e2) phob_pre_status_pane_g1

0xadee,	// (0x000212ea) phob_pre_status_pane_g2

0xadf6,	// (0x000212f2) phob_pre_status_pane_g3

0xadfe,	// (0x000212fa) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x00025af0) phob_pre_status_pane_g

0xae0e,	// (0x0002130a) phob_pre_status_pane_t1

0xae1c,	// (0x00021318) phob_pre_status_pane_t2

0xae2a,	// (0x00021326) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x00025afb) phob_pre_status_pane_t

0x1048,	// (0x00017544) bg_list_pane_cp05

0x907c,	// (0x0001f578) grid_vorec_pane

0x9084,	// (0x0001f580) vorec_t1

0x9092,	// (0x0001f58e) vorec_t2

0x90a0,	// (0x0001f59c) vorec_t3

0x90ae,	// (0x0001f5aa) vorec_t4

0x8881,	// (0x0001ed7d) vorec_t5

0x888f,	// (0x0001ed8b) vorec_t6

0x0004,

0xf1ff,	// (0x000256fb) vorec_t

0x889d,	// (0x0001ed99) wait_bar_pane_cp01

0x90ca,	// (0x0001f5c6) cell_vorec_pane_ParamLimits

0x90ca,	// (0x0001f5c6) cell_vorec_pane

0x766a,	// (0x0001db66) cell_vorec_pane_g1

0x0ac5,	// (0x00016fc1) grid_highlight_pane_cp05

0x90e9,	// (0x0001f5e5) cams_zoom_pane

0x90f5,	// (0x0001f5f1) image_vga_pane

0x9102,	// (0x0001f5fe) main_camera_pane_g1

0x910e,	// (0x0001f60a) main_camera_pane_g2

0x911a,	// (0x0001f616) main_camera_pane_g3

0x9126,	// (0x0001f622) main_camera_pane_g4

0x9132,	// (0x0001f62e) main_camera_pane_g5

0x913e,	// (0x0001f63a) main_camera_pane_g6

0x914a,	// (0x0001f646) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00025706) main_camera_pane_g

0x9156,	// (0x0001f652) main_camera_pane_t1

0x9168,	// (0x0001f664) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00025717) main_camera_pane_t

0x918c,	// (0x0001f688) cams_zoom_pane_cp_ParamLimits

0x918c,	// (0x0001f688) cams_zoom_pane_cp

0x91b0,	// (0x0001f6ac) image_cif_pane_ParamLimits

0x91b0,	// (0x0001f6ac) image_cif_pane

0x91ca,	// (0x0001f6c6) image_subqcif_pane

0x91d2,	// (0x0001f6ce) main_video_pane_g1_ParamLimits

0x91d2,	// (0x0001f6ce) main_video_pane_g1

0x91f2,	// (0x0001f6ee) main_video_pane_g2_ParamLimits

0x91f2,	// (0x0001f6ee) main_video_pane_g2

0x9220,	// (0x0001f71c) main_video_pane_g3_ParamLimits

0x9220,	// (0x0001f71c) main_video_pane_g3

0x9249,	// (0x0001f745) main_video_pane_g4_ParamLimits

0x9249,	// (0x0001f745) main_video_pane_g4

0x9272,	// (0x0001f76e) main_video_pane_g5_ParamLimits

0x9272,	// (0x0001f76e) main_video_pane_g5

0x1066,	// (0x00017562) main_video_pane_g6_ParamLimits

0x1066,	// (0x00017562) main_video_pane_g6

0x0006,

0xf220,	// (0x0002571c) main_video_pane_g_ParamLimits

0xf220,	// (0x0002571c) main_video_pane_g

0x9294,	// (0x0001f790) main_video_pane_t1_ParamLimits

0x9294,	// (0x0001f790) main_video_pane_t1

0x1080,	// (0x0001757c) cams_zoom_pane_g1

0x1089,	// (0x00017585) cams_zoom_pane_g2

0x1092,	// (0x0001758e) cams_zoom_pane_g3

0x109b,	// (0x00017597) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0002572b) cams_zoom_pane_g

0x92de,	// (0x0001f7da) grid_cams_pane

0x92ea,	// (0x0001f7e6) linegrid_cams_pane

0x92f6,	// (0x0001f7f2) cell_cams_pane_ParamLimits

0x92f6,	// (0x0001f7f2) cell_cams_pane

0x10a4,	// (0x000175a0) cams_burst_image_pane

0x10ac,	// (0x000175a8) cell_cams_pane_g1

0x0ac5,	// (0x00016fc1) grid_highlight_pane_cp03

0x0e8c,	// (0x00017388) mp_bg_pane_g1

0x0ac5,	// (0x00016fc1) bg_list_pane_cp03

0x2e82,	// (0x0001937e) bg_mp_pane

0x2e8a,	// (0x00019386) grid_mp_pane

0x2e92,	// (0x0001938e) media_player_g1

0x2e9a,	// (0x00019396) media_player_t1

0x2ea8,	// (0x000193a4) media_player_t2

0x2eb6,	// (0x000193b2) media_player_t3

0x2ec4,	// (0x000193c0) media_player_t4

0x2ed2,	// (0x000193ce) media_player_t5

0x2ee0,	// (0x000193dc) media_player_t6

0x2eee,	// (0x000193ea) media_player_t7

0x0006,

0xf5de,	// (0x00025ada) media_player_t

0x2efc,	// (0x000193f8) wait_bar_pane_cp02

0xf5c3,	// (0x00025abf) main_usb_pane_t

0xaddd,	// (0x000212d9) cell_mp_pane

0x0e8c,	// (0x00017388) cell_mp_pane_g1

0x0ac5,	// (0x00016fc1) grid_highlight_pane_cp06

0x10b4,	// (0x000175b0) grid_skin_colour_pane

0x10bc,	// (0x000175b8) list_highlight_pane_cp03

0x941d,	// (0x0001f919) skin_g1

0x10c4,	// (0x000175c0) skin_t1

0x10d3,	// (0x000175cf) skin_t2

0x0001,

0xf264,	// (0x00025760) skin_t

0x9425,	// (0x0001f921) cell_skin_colour_pane_ParamLimits

0x9425,	// (0x0001f921) cell_skin_colour_pane

0x10e1,	// (0x000175dd) cell_skin_colour_pane_g1

0x949b,	// (0x0001f997) call_video_g1_ParamLimits

0x949b,	// (0x0001f997) call_video_g1

0x94a7,	// (0x0001f9a3) call_video_g2_ParamLimits

0x94a7,	// (0x0001f9a3) call_video_g2

0x0001,

0xf269,	// (0x00025765) call_video_g_ParamLimits

0xf269,	// (0x00025765) call_video_g

0x94f7,	// (0x0001f9f3) call_video_uplink_pane_cp1_ParamLimits

0x94f7,	// (0x0001f9f3) call_video_uplink_pane_cp1

0x10f3,	// (0x000175ef) call_video_uplink_pane_cp2

0x95b3,	// (0x0001faaf) video_down_crop_pane_ParamLimits

0x95b3,	// (0x0001faaf) video_down_crop_pane

0x967d,	// (0x0001fb79) video_down_pane_ParamLimits

0x967d,	// (0x0001fb79) video_down_pane

0x10fb,	// (0x000175f7) video_down_subqcif_pane_ParamLimits

0x10fb,	// (0x000175f7) video_down_subqcif_pane

0x1113,	// (0x0001760f) video_down_subqcif_pane_cp_ParamLimits

0x1113,	// (0x0001760f) video_down_subqcif_pane_cp

0x1137,	// (0x00017633) im_reading_pane_ParamLimits

0x1137,	// (0x00017633) im_reading_pane

0x9747,	// (0x0001fc43) im_writing_pane_ParamLimits

0x9747,	// (0x0001fc43) im_writing_pane

0x975d,	// (0x0001fc59) im_reading_pane_t1

0x1151,	// (0x0001764d) list_im_pane

0x1162,	// (0x0001765e) scroll_pane_cp07

0x9795,	// (0x0001fc91) im_writing_pane_t1_ParamLimits

0x9795,	// (0x0001fc91) im_writing_pane_t1

0x117b,	// (0x00017677) im_writing_pane_t2_ParamLimits

0x117b,	// (0x00017677) im_writing_pane_t2

0x0001,

0xf273,	// (0x0002576f) im_writing_pane_t_ParamLimits

0xf273,	// (0x0002576f) im_writing_pane_t

0x0ac5,	// (0x00016fc1) input_focus_pane_cp04

0x0ac5,	// (0x00016fc1) input_focus_pane_cp05

0x97a7,	// (0x0001fca3) list_im_single_pane_ParamLimits

0x97a7,	// (0x0001fca3) list_im_single_pane

0x1198,	// (0x00017694) list_single_im_pane_t1

0xada3,	// (0x0002129f) blid_accuracy_pane

0xadab,	// (0x000212a7) blid_compass_pane

0xadb3,	// (0x000212af) main_location_t1

0xadc1,	// (0x000212bd) main_location_t2

0xadcf,	// (0x000212cb) main_location_t3

0x0002,

0xf5ed,	// (0x00025ae9) main_location_t

0x0ac5,	// (0x00016fc1) aid_levels_location

0x0e8c,	// (0x00017388) blid_accuracy_pane_g1

0x0e8c,	// (0x00017388) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000257d1) blid_accuracy_pane_g

0x11d2,	// (0x000176ce) wml_content_pane

0x1210,	// (0x0001770c) wml_button_pane_ParamLimits

0x1210,	// (0x0001770c) wml_button_pane

0x97bb,	// (0x0001fcb7) wml_list_single_large_pane_ParamLimits

0x97bb,	// (0x0001fcb7) wml_list_single_large_pane

0x97d1,	// (0x0001fccd) wml_list_single_medium_pane_ParamLimits

0x97d1,	// (0x0001fccd) wml_list_single_medium_pane

0x97e9,	// (0x0001fce5) wml_list_single_small_pane_ParamLimits

0x97e9,	// (0x0001fce5) wml_list_single_small_pane

0x1224,	// (0x00017720) wml_selection_box_pane_ParamLimits

0x1224,	// (0x00017720) wml_selection_box_pane

0x1237,	// (0x00017733) wml_list_single_pane_t1

0x1246,	// (0x00017742) wml_list_single_medium_pane_t1

0x1255,	// (0x00017751) wml_list_single_large_pane_t1

0x1264,	// (0x00017760) input_focus_pane_cp02_ParamLimits

0x1264,	// (0x00017760) input_focus_pane_cp02

0x1277,	// (0x00017773) wml_selection_box_pane_g1

0x1280,	// (0x0001777c) wml_selection_box_pane_t1_ParamLimits

0x1280,	// (0x0001777c) wml_selection_box_pane_t1

0x0d20,	// (0x0001721c) bg_wml_button_pane_ParamLimits

0x0d20,	// (0x0001721c) bg_wml_button_pane

0x1298,	// (0x00017794) wml_button_pane_g1

0x12a0,	// (0x0001779c) wml_button_pane_t1

0x1298,	// (0x00017794) wml_button_bg_pane_g1

0x12b0,	// (0x000177ac) wml_button_bg_pane_g2

0x12b8,	// (0x000177b4) wml_button_bg_pane_g3

0x12c0,	// (0x000177bc) wml_button_bg_pane_g4

0x12c8,	// (0x000177c4) wml_button_bg_pane_g5

0x12d0,	// (0x000177cc) wml_button_bg_pane_g6

0x12d8,	// (0x000177d4) wml_button_bg_pane_g7

0x12e0,	// (0x000177dc) wml_button_bg_pane_g8

0x12e8,	// (0x000177e4) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x00025774) wml_button_bg_pane_g

0x9803,	// (0x0001fcff) bg_list_pane_cp02

0x12f0,	// (0x000177ec) mce_header_pane_ParamLimits

0x12f0,	// (0x000177ec) mce_header_pane

0x1306,	// (0x00017802) mce_icon_pane

0x1306,	// (0x00017802) mce_image_pane

0x130f,	// (0x0001780b) mce_text_pane_ParamLimits

0x130f,	// (0x0001780b) mce_text_pane

0x980b,	// (0x0001fd07) scroll_pane_cp03

0x1208,	// (0x00017704) scroll_pane_cp04

0x1322,	// (0x0001781e) scroll_pane_cp05_ParamLimits

0x1322,	// (0x0001781e) scroll_pane_cp05

0x9813,	// (0x0001fd0f) mce_header_field_pane_ParamLimits

0x9813,	// (0x0001fd0f) mce_header_field_pane

0x9833,	// (0x0001fd2f) mce_header_field_pane_2_ParamLimits

0x9833,	// (0x0001fd2f) mce_header_field_pane_2

0x9849,	// (0x0001fd45) mce_header_field_pane_3

0x9851,	// (0x0001fd4d) list_single_mce_message_pane_ParamLimits

0x9851,	// (0x0001fd4d) list_single_mce_message_pane

0x9866,	// (0x0001fd62) list_single_mce_smart_pane_ParamLimits

0x9866,	// (0x0001fd62) list_single_mce_smart_pane

0x132e,	// (0x0001782a) input_focus_pane_cp03

0x1337,	// (0x00017833) list_header_data_pane

0x9886,	// (0x0001fd82) mce_header_field_pane_t1

0x9894,	// (0x0001fd90) list_single_mce_header_pane_ParamLimits

0x9894,	// (0x0001fd90) list_single_mce_header_pane

0x133f,	// (0x0001783b) list_single_mce_header_pane_t1

0x134e,	// (0x0001784a) list_single_mce_message_pane_g1

0x1356,	// (0x00017852) list_single_mce_message_pane_t1

0x98d0,	// (0x0001fdcc) bg_cale_heading_pane_cp01_ParamLimits

0x98d0,	// (0x0001fdcc) bg_cale_heading_pane_cp01

0x1364,	// (0x00017860) bg_cale_pane_cp02_ParamLimits

0x1364,	// (0x00017860) bg_cale_pane_cp02

0x990a,	// (0x0001fe06) cale_month_corner_pane

0x9922,	// (0x0001fe1e) cale_month_day_heading_pane_ParamLimits

0x9922,	// (0x0001fe1e) cale_month_day_heading_pane

0x995c,	// (0x0001fe58) cale_month_pane_g1_ParamLimits

0x995c,	// (0x0001fe58) cale_month_pane_g1

0x998b,	// (0x0001fe87) cale_month_pane_g2_ParamLimits

0x998b,	// (0x0001fe87) cale_month_pane_g2

0x99af,	// (0x0001feab) cale_month_pane_g3_ParamLimits

0x99af,	// (0x0001feab) cale_month_pane_g3

0x99eb,	// (0x0001fee7) cale_month_pane_g4_ParamLimits

0x99eb,	// (0x0001fee7) cale_month_pane_g4

0x9a27,	// (0x0001ff23) cale_month_pane_g5_ParamLimits

0x9a27,	// (0x0001ff23) cale_month_pane_g5

0x9a63,	// (0x0001ff5f) cale_month_pane_g6_ParamLimits

0x9a63,	// (0x0001ff5f) cale_month_pane_g6

0x9a9f,	// (0x0001ff9b) cale_month_pane_g7_ParamLimits

0x9a9f,	// (0x0001ff9b) cale_month_pane_g7

0x9adb,	// (0x0001ffd7) cale_month_pane_g8_ParamLimits

0x9adb,	// (0x0001ffd7) cale_month_pane_g8

0x9b17,	// (0x00020013) cale_month_pane_g9_ParamLimits

0x9b17,	// (0x00020013) cale_month_pane_g9

0x9b51,	// (0x0002004d) cale_month_pane_g10_ParamLimits

0x9b51,	// (0x0002004d) cale_month_pane_g10

0x9b8b,	// (0x00020087) cale_month_pane_g11_ParamLimits

0x9b8b,	// (0x00020087) cale_month_pane_g11

0x9bc5,	// (0x000200c1) cale_month_pane_g12_ParamLimits

0x9bc5,	// (0x000200c1) cale_month_pane_g12

0x9bff,	// (0x000200fb) cale_month_pane_g13_ParamLimits

0x9bff,	// (0x000200fb) cale_month_pane_g13

0x000c,

0xf28b,	// (0x00025787) cale_month_pane_g_ParamLimits

0xf28b,	// (0x00025787) cale_month_pane_g

0x9c39,	// (0x00020135) cale_month_week_pane

0x9c51,	// (0x0002014d) grid_cale_month_pane_ParamLimits

0x9c51,	// (0x0002014d) grid_cale_month_pane

0x9c82,	// (0x0002017e) cale_month_day_heading_pane_t1

0x9cb5,	// (0x000201b1) cale_month_day_heading_pane_t2

0x9cdf,	// (0x000201db) cale_month_day_heading_pane_t3

0x9d09,	// (0x00020205) cale_month_day_heading_pane_t4

0x9d33,	// (0x0002022f) cale_month_day_heading_pane_t5

0x9d5d,	// (0x00020259) cale_month_day_heading_pane_t6

0x9d87,	// (0x00020283) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000257a2) cale_month_day_heading_pane_t

0x0ff6,	// (0x000174f2) bg_cale_side_pane_cp01

0x9db1,	// (0x000202ad) cale_month_week_pane_t1

0x9dca,	// (0x000202c6) cale_month_week_pane_t2

0x9de3,	// (0x000202df) cale_month_week_pane_t3

0x9dfc,	// (0x000202f8) cale_month_week_pane_t4

0x9e15,	// (0x00020311) cale_month_week_pane_t5

0x9e2e,	// (0x0002032a) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000257b1) cale_month_week_pane_t

0x9e47,	// (0x00020343) cell_cale_month_pane_ParamLimits

0x9e47,	// (0x00020343) cell_cale_month_pane

0x7674,	// (0x0001db70) cell_cale_month_pane_g1

0x7680,	// (0x0001db7c) cell_cale_month_pane_t1_ParamLimits

0x7680,	// (0x0001db7c) cell_cale_month_pane_t1

0x1004,	// (0x00017500) grid_highlight_pane_cp08

0x0e8c,	// (0x00017388) main_smil_g1

0x9f5f,	// (0x0002045b) smil_status_pane

0x13af,	// (0x000178ab) smil_text_pane

0x2d62,	// (0x0001925e) bg_popup_call3_rect_pane_g8

0x2d6a,	// (0x00019266) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x00025a6a) bg_popup_call3_rect_pane_g

0x304c,	// (0x00019548) smil_status_volume_pane_g1

0x13b9,	// (0x000178b5) smil_status_pane_t1

0x7938,	// (0x0001de34) volume_smil_pane

0x13d0,	// (0x000178cc) list_smil_text_pane

0x9f70,	// (0x0002046c) scroll_pane_cp011

0x9f79,	// (0x00020475) smil_text_list_pane_t1_ParamLimits

0x9f79,	// (0x00020475) smil_text_list_pane_t1

0x76ac,	// (0x0001dba8) aid_volume_smil_ParamLimits

0x76ac,	// (0x0001dba8) aid_volume_smil

0x0e8c,	// (0x00017388) smil_volume_pane_g1

0x0e8c,	// (0x00017388) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000257d1) smil_volume_pane_g

0x8beb,	// (0x0001f0e7) listscroll_cale_day_pane

0x13fc,	// (0x000178f8) bg_cale_pane

0x1414,	// (0x00017910) list_cale_pane

0x1437,	// (0x00017933) scroll_pane_cp09

0x1448,	// (0x00017944) cale_bg_pane_g1

0x1450,	// (0x0001794c) cale_bg_pane_g2

0x1458,	// (0x00017954) cale_bg_pane_g3

0x1460,	// (0x0001795c) cale_bg_pane_g4

0x1468,	// (0x00017964) cale_bg_pane_g5

0x1470,	// (0x0001796c) cale_bg_pane_g6

0x1478,	// (0x00017974) cale_bg_pane_g7

0x1480,	// (0x0001797c) cale_bg_pane_g8

0x1488,	// (0x00017984) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000257d6) cale_bg_pane_g

0x9fb8,	// (0x000204b4) list_cale_time_pane_ParamLimits

0x9fb8,	// (0x000204b4) list_cale_time_pane

0x1498,	// (0x00017994) list_cale_time_pane_g1_ParamLimits

0x1498,	// (0x00017994) list_cale_time_pane_g1

0x14a4,	// (0x000179a0) list_cale_time_pane_g2_ParamLimits

0x14a4,	// (0x000179a0) list_cale_time_pane_g2

0x9fca,	// (0x000204c6) list_cale_time_pane_g3_ParamLimits

0x9fca,	// (0x000204c6) list_cale_time_pane_g3

0x9fd6,	// (0x000204d2) list_cale_time_pane_g4_ParamLimits

0x9fd6,	// (0x000204d2) list_cale_time_pane_g4

0x9fe2,	// (0x000204de) list_cale_time_pane_g5_ParamLimits

0x9fe2,	// (0x000204de) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000257e9) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000257e9) list_cale_time_pane_g

0x14be,	// (0x000179ba) list_cale_time_pane_t1_ParamLimits

0x14be,	// (0x000179ba) list_cale_time_pane_t1

0x14e6,	// (0x000179e2) list_cale_time_pane_t2_ParamLimits

0x14e6,	// (0x000179e2) list_cale_time_pane_t2

0xa308,	// (0x00020804) aid_blid_cardinal_pane

0xa346,	// (0x00020842) compass_pane_t4

0x150e,	// (0x00017a0a) list_cale_time_pane_t4_ParamLimits

0x150e,	// (0x00017a0a) list_cale_time_pane_t4

0xa354,	// (0x00020850) compass_pane_t5

0xa362,	// (0x0002085e) compass_pane_t6

0xa370,	// (0x0002086c) compass_pane_t7

0x19db,	// (0x00017ed7) navi_pane_cc_t1

0x1bc8,	// (0x000180c4) aid_phob_thumbnail_center_pane

0xa930,	// (0x00020e2c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000257f6) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000257f6) list_cale_time_pane_t

0x071e,	// (0x00016c1a) bg_popup_window_pane_cp02_ParamLimits

0x071e,	// (0x00016c1a) bg_popup_window_pane_cp02

0x1536,	// (0x00017a32) heading_pane_cp01_ParamLimits

0x1536,	// (0x00017a32) heading_pane_cp01

0x1542,	// (0x00017a3e) loc_req_pane_ParamLimits

0x1542,	// (0x00017a3e) loc_req_pane

0x1552,	// (0x00017a4e) loc_type_pane_ParamLimits

0x1552,	// (0x00017a4e) loc_type_pane

0x1564,	// (0x00017a60) loc_type_pane_t1_ParamLimits

0x1564,	// (0x00017a60) loc_type_pane_t1

0x1576,	// (0x00017a72) loc_type_pane_t2_ParamLimits

0x1576,	// (0x00017a72) loc_type_pane_t2

0x1588,	// (0x00017a84) loc_type_pane_t3_ParamLimits

0x1588,	// (0x00017a84) loc_type_pane_t3

0x0002,

0xf301,	// (0x000257fd) loc_type_pane_t_ParamLimits

0xf301,	// (0x000257fd) loc_type_pane_t

0x159a,	// (0x00017a96) list_loc_req_pane

0x15a4,	// (0x00017aa0) scroll_pane_cp012

0x1c19,	// (0x00018115) list_single_loc_request_popup_menu_pane_ParamLimits

0x1c19,	// (0x00018115) list_single_loc_request_popup_menu_pane

0x15ad,	// (0x00017aa9) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x15ad,	// (0x00017aa9) list_single_loc_request_popup_menu_pane_g1

0x15b9,	// (0x00017ab5) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x15b9,	// (0x00017ab5) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x00025804) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x00025804) list_single_loc_request_popup_menu_pane_g

0x15c5,	// (0x00017ac1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x15c5,	// (0x00017ac1) list_single_loc_request_popup_menu_pane_t1

0x9fee,	// (0x000204ea) bg_popup_window_pane_cp03_ParamLimits

0x9fee,	// (0x000204ea) bg_popup_window_pane_cp03

0x9ffc,	// (0x000204f8) heading_loc_req_pane_ParamLimits

0x9ffc,	// (0x000204f8) heading_loc_req_pane

0xa008,	// (0x00020504) popup_dyc_status_message_window_g1_ParamLimits

0xa008,	// (0x00020504) popup_dyc_status_message_window_g1

0xa014,	// (0x00020510) popup_dyc_status_message_window_t1_ParamLimits

0xa014,	// (0x00020510) popup_dyc_status_message_window_t1

0xa026,	// (0x00020522) popup_dyc_status_message_window_t2_ParamLimits

0xa026,	// (0x00020522) popup_dyc_status_message_window_t2

0xa038,	// (0x00020534) popup_dyc_status_message_window_t3_ParamLimits

0xa038,	// (0x00020534) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x00025809) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x00025809) popup_dyc_status_message_window_t

0x0ac5,	// (0x00016fc1) bg_heading_pane_cp01

0x15e7,	// (0x00017ae3) heading_loc_req_pane_g1

0x15ef,	// (0x00017aeb) heading_loc_req_pane_g2

0x15f7,	// (0x00017af3) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x00025810) heading_loc_req_pane_g

0x15ff,	// (0x00017afb) heading_loc_req_pane_t1

0x160e,	// (0x00017b0a) bg_popup_sub_pane_cp01_ParamLimits

0x160e,	// (0x00017b0a) bg_popup_sub_pane_cp01

0x161c,	// (0x00017b18) popup_cale_events_window_g1_ParamLimits

0x161c,	// (0x00017b18) popup_cale_events_window_g1

0x163c,	// (0x00017b38) popup_cale_events_window_g2_ParamLimits

0x163c,	// (0x00017b38) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x00025844) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x00025844) popup_cale_events_window_g

0x165c,	// (0x00017b58) popup_cale_events_window_t1_ParamLimits

0x165c,	// (0x00017b58) popup_cale_events_window_t1

0x166e,	// (0x00017b6a) popup_cale_events_window_t2_ParamLimits

0x166e,	// (0x00017b6a) popup_cale_events_window_t2

0x16ac,	// (0x00017ba8) popup_cale_events_window_t3_ParamLimits

0x16ac,	// (0x00017ba8) popup_cale_events_window_t3

0x16e6,	// (0x00017be2) popup_cale_events_window_t4_ParamLimits

0x16e6,	// (0x00017be2) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x00025849) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x00025849) popup_cale_events_window_t

0xa131,	// (0x0002062d) call_type_pane

0x1be0,	// (0x000180dc) popup_call_status_window_g1

0xa13d,	// (0x00020639) popup_call_status_window_g2

0xa149,	// (0x00020645) popup_call_status_window_g3

0x0002,

0xf356,	// (0x00025852) popup_call_status_window_g

0x171c,	// (0x00017c18) call_type_pane_g1

0x1725,	// (0x00017c21) call_type_pane_g2

0x0001,

0xf35d,	// (0x00025859) call_type_pane_g

0x0ac5,	// (0x00016fc1) bg_popup_sub_pane_cp02

0x172e,	// (0x00017c2a) listscroll_popup_wml_pane

0x1736,	// (0x00017c32) list_wml_pane

0x1740,	// (0x00017c3c) scroll_pane_cp013

0xa155,	// (0x00020651) list_single_graphic_popup_wml_pane_ParamLimits

0xa155,	// (0x00020651) list_single_graphic_popup_wml_pane

0x0e8c,	// (0x00017388) list_single_graphic_popup_wml_pane_g1

0x1749,	// (0x00017c45) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0002585e) list_single_graphic_popup_wml_pane_g

0x1751,	// (0x00017c4d) list_single_graphic_popup_wml_pane_t1

0x175f,	// (0x00017c5b) aid_call_pane

0x0d18,	// (0x00017214) popup_clock_analogue_window_g1

0x0d18,	// (0x00017214) popup_clock_analogue_window_g2

0x76ce,	// (0x0001dbca) popup_clock_analogue_window_g3

0x76ce,	// (0x0001dbca) popup_clock_analogue_window_g4

0x0e8c,	// (0x00017388) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x00025863) popup_clock_analogue_window_g

0x76d6,	// (0x0001dbd2) popup_clock_analogue_window_t1

0x76e4,	// (0x0001dbe0) clock_digital_number_pane_ParamLimits

0x76e4,	// (0x0001dbe0) clock_digital_number_pane

0x76f0,	// (0x0001dbec) clock_digital_number_pane_cp02_ParamLimits

0x76f0,	// (0x0001dbec) clock_digital_number_pane_cp02

0x76fc,	// (0x0001dbf8) clock_digital_number_pane_cp03_ParamLimits

0x76fc,	// (0x0001dbf8) clock_digital_number_pane_cp03

0x7708,	// (0x0001dc04) clock_digital_number_pane_cp04_ParamLimits

0x7708,	// (0x0001dc04) clock_digital_number_pane_cp04

0x7714,	// (0x0001dc10) clock_digital_separator_pane_ParamLimits

0x7714,	// (0x0001dc10) clock_digital_separator_pane

0x7720,	// (0x0001dc1c) popup_clock_digital_window_t1

0x0e8c,	// (0x00017388) clock_digital_number_pane_g1

0x0e8c,	// (0x00017388) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000257d1) clock_digital_number_pane_g

0x0e8c,	// (0x00017388) clock_digital_separator_pane_g1

0x0e8c,	// (0x00017388) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000257d1) clock_digital_separator_pane_g

0x0ac5,	// (0x00016fc1) bg_popup_window_pane_cp04

0x17de,	// (0x00017cda) heading_pane_cp03

0x17e6,	// (0x00017ce2) listscroll_popup_gms_pane

0x17ee,	// (0x00017cea) grid_large_graphic_popup_pane

0x17f8,	// (0x00017cf4) listscroll_popup_gms_pane_g1

0x1800,	// (0x00017cfc) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0002586e) listscroll_popup_gms_pane_g

0x1208,	// (0x00017704) scroll_pane_cp014

0xa169,	// (0x00020665) cell_large_graphic_popup_pane_ParamLimits

0xa169,	// (0x00020665) cell_large_graphic_popup_pane

0xa180,	// (0x0002067c) cell_large_graphic_popup_pane_g1_ParamLimits

0xa180,	// (0x0002067c) cell_large_graphic_popup_pane_g1

0x1808,	// (0x00017d04) cell_large_graphic_popup_pane_g2_ParamLimits

0x1808,	// (0x00017d04) cell_large_graphic_popup_pane_g2

0x1814,	// (0x00017d10) cell_large_graphic_popup_pane_g3_ParamLimits

0x1814,	// (0x00017d10) cell_large_graphic_popup_pane_g3

0x1821,	// (0x00017d1d) cell_large_graphic_popup_pane_g4_ParamLimits

0x1821,	// (0x00017d1d) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x00025873) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x00025873) cell_large_graphic_popup_pane_g

0x1831,	// (0x00017d2d) grid_highlight_pane_cp010

0x0e8c,	// (0x00017388) bg_popup_call_pane_g1

0x183b,	// (0x00017d37) list_single_graphic_popup_conf_pane_ParamLimits

0x183b,	// (0x00017d37) list_single_graphic_popup_conf_pane

0x184e,	// (0x00017d4a) list_highlight_pane_cp01

0x1857,	// (0x00017d53) list_single_graphic_popup_conf_pane_g1

0x185f,	// (0x00017d5b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0002587c) list_single_graphic_popup_conf_pane_g

0x1867,	// (0x00017d63) list_single_graphic_popup_conf_pane_t1

0x1875,	// (0x00017d71) linegrid_cams_pane_g1

0xa18c,	// (0x00020688) linegrid_cams_pane_g2

0x0f96,	// (0x00017492) linegrid_cams_pane_g3

0x187e,	// (0x00017d7a) linegrid_cams_pane_g4

0xa195,	// (0x00020691) linegrid_cams_pane_g5

0xa19e,	// (0x0002069a) linegrid_cams_pane_g6

0x1037,	// (0x00017533) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x00025881) linegrid_cams_pane_g

0x1887,	// (0x00017d83) popup_clock_analogue_window

0x1887,	// (0x00017d83) popup_clock_digital_window

0x0ac5,	// (0x00016fc1) popup_phob_thumbnail_window

0x0e8c,	// (0x00017388) call_video_uplink_pane_g1

0x1890,	// (0x00017d8c) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x00025890) call_video_uplink_pane_g

0x1004,	// (0x00017500) video_uplink_pane

0x1898,	// (0x00017d94) mce_image_pane_g1

0xa1a7,	// (0x000206a3) mce_image_pane_g2

0xa1af,	// (0x000206ab) mce_image_pane_g3

0xa1b7,	// (0x000206b3) mce_image_pane_g4

0xa1bf,	// (0x000206bb) mce_image_pane_g5

0x0004,

0xf399,	// (0x00025895) mce_image_pane_g

0x18a2,	// (0x00017d9e) control_top_pane_stacon_cp01_ParamLimits

0x18a2,	// (0x00017d9e) control_top_pane_stacon_cp01

0x18b2,	// (0x00017dae) uni_indicator_pane_stacon_cp01_ParamLimits

0x18b2,	// (0x00017dae) uni_indicator_pane_stacon_cp01

0x18c3,	// (0x00017dbf) bg_popup_sub_pane_cp03

0xa1c7,	// (0x000206c3) chi_dic_find_pane

0xa1cf,	// (0x000206cb) listscroll_chi_dic_pane

0xa1d8,	// (0x000206d4) main_pane_chidic_g1

0xa1e9,	// (0x000206e5) chi_dic_find_pane_t1

0x18cd,	// (0x00017dc9) find_chidic_pane

0x18d6,	// (0x00017dd2) chi_dic_list_pane_ParamLimits

0x18d6,	// (0x00017dd2) chi_dic_list_pane

0x18e7,	// (0x00017de3) scroll_pane_cp020

0xa1f7,	// (0x000206f3) find_chidic_pane_t1

0x0ac5,	// (0x00016fc1) input_focus_pane_cp06

0xa206,	// (0x00020702) list_chi_dic_pane_ParamLimits

0xa206,	// (0x00020702) list_chi_dic_pane

0xa218,	// (0x00020714) list_chi_dic_pane_t1_ParamLimits

0xa218,	// (0x00020714) list_chi_dic_pane_t1

0x0ac5,	// (0x00016fc1) list_highlight_pane_cp020

0x18ef,	// (0x00017deb) bg_cale_heading_pane_g1

0xa22b,	// (0x00020727) bg_cale_heading_pane_g2

0xa233,	// (0x0002072f) bg_cale_heading_pane_g3

0xa23b,	// (0x00020737) bg_cale_heading_pane_g4

0xa243,	// (0x0002073f) bg_cale_heading_pane_g5

0xa24b,	// (0x00020747) bg_cale_heading_pane_g6

0xa253,	// (0x0002074f) bg_cale_heading_pane_g7

0xa25b,	// (0x00020757) bg_cale_heading_pane_g8

0xa263,	// (0x0002075f) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000258a0) bg_cale_heading_pane_g

0x18ef,	// (0x00017deb) bg_cale_side_pane_g1

0xa26b,	// (0x00020767) bg_cale_side_pane_g2

0xa273,	// (0x0002076f) bg_cale_side_pane_g3

0xa27b,	// (0x00020777) bg_cale_side_pane_g4

0xa283,	// (0x0002077f) bg_cale_side_pane_g5

0xa28b,	// (0x00020787) bg_cale_side_pane_g6

0xa293,	// (0x0002078f) bg_cale_side_pane_g7

0xa29b,	// (0x00020797) bg_cale_side_pane_g8

0xa2a3,	// (0x0002079f) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000258b3) bg_cale_side_pane_g

0xa2ab,	// (0x000207a7) popup_call_status_window_ParamLimits

0xa2ab,	// (0x000207a7) popup_call_status_window

0x18f7,	// (0x00017df3) stacon_top_pane

0x18ff,	// (0x00017dfb) status_pane_ParamLimits

0x18ff,	// (0x00017dfb) status_pane

0x1914,	// (0x00017e10) status_small_pane

0x191c,	// (0x00017e18) control_pane

0x0ac5,	// (0x00016fc1) stacon_bottom_pane

0x1924,	// (0x00017e20) list_single_mce_smart_pane_t1_ParamLimits

0x1924,	// (0x00017e20) list_single_mce_smart_pane_t1

0x1937,	// (0x00017e33) list_single_mce_smart_pane_t2_ParamLimits

0x1937,	// (0x00017e33) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000258c6) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000258c6) list_single_mce_smart_pane_t

0xa2b7,	// (0x000207b3) compass_pane

0xa2c0,	// (0x000207bc) main_location2_pane_t1

0xa2d2,	// (0x000207ce) main_location2_pane_t2

0xa2e4,	// (0x000207e0) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000258cb) main_location2_pane_t

0x1956,	// (0x00017e52) compass_pane_g1_ParamLimits

0x1956,	// (0x00017e52) compass_pane_g1

0xa328,	// (0x00020824) compass_pane_t1

0xa337,	// (0x00020833) compass_pane_t2

0x0005,

0xf3d8,	// (0x000258d4) compass_pane_t

0xa37e,	// (0x0002087a) text_secondary_cp61

0x19d2,	// (0x00017ece) navi_pane_cams_g5

0x1a4c,	// (0x00017f48) navi_pane_im_t1

0x1a5a,	// (0x00017f56) navi_pane_mp_g1_ParamLimits

0x1a5a,	// (0x00017f56) navi_pane_mp_g1

0x1a6e,	// (0x00017f6a) navi_pane_mp_g2_ParamLimits

0x1a6e,	// (0x00017f6a) navi_pane_mp_g2

0x1a7a,	// (0x00017f76) navi_pane_mp_g3_ParamLimits

0x1a7a,	// (0x00017f76) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000258e8) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000258e8) navi_pane_mp_g

0x1a86,	// (0x00017f82) navi_pane_mp_t1

0x1a94,	// (0x00017f90) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000258ef) navi_pane_mp_t

0x1aff,	// (0x00017ffb) navi_pane_vt_g1

0x1a86,	// (0x00017f82) navi_pane_vt_t1

0x1b07,	// (0x00018003) navi_slider_pane

0x1048,	// (0x00017544) zooming_pane

0x1b17,	// (0x00018013) navi_slider_pane_g1

0x773d,	// (0x0001dc39) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000258f6) navi_slider_pane_g

0x1b4d,	// (0x00018049) aid_levels_zoom

0x1b55,	// (0x00018051) zooming_pane_g1

0x1b5d,	// (0x00018059) zooming_pane_g2

0x1b5d,	// (0x00018059) zooming_pane_g3

0x0002,

0xf409,	// (0x00025905) zooming_pane_g

0x1b65,	// (0x00018061) level_10_zoom

0x1b6e,	// (0x0001806a) level_11_zoom

0x1b77,	// (0x00018073) level_1_zoom

0x1b80,	// (0x0001807c) level_2_zoom

0x1b89,	// (0x00018085) level_3_zoom

0x1b92,	// (0x0001808e) level_4_zoom

0x1b9b,	// (0x00018097) level_5_zoom

0x1ba4,	// (0x000180a0) level_6_zoom

0x1bad,	// (0x000180a9) level_7_zoom

0x1bb6,	// (0x000180b2) level_8_zoom

0x1bbf,	// (0x000180bb) level_9_zoom

0x1bd0,	// (0x000180cc) popup_phob_thumbnail_window_g1

0x1bd8,	// (0x000180d4) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0002590c) popup_phob_thumbnail_window_g

0x2f04,	// (0x00019400) level_1_location

0x2f0c,	// (0x00019408) level_2_location

0x2f14,	// (0x00019410) level_3_location

0x2f1c,	// (0x00019418) level_4_location

0x1048,	// (0x00017544) level_5_location

0xa3b9,	// (0x000208b5) mce_icon_pane_g1

0xa3c1,	// (0x000208bd) mce_icon_pane_g2

0x0001,

0xf415,	// (0x00025911) mce_icon_pane_g

0xa3c9,	// (0x000208c5) main_mup_pane_g1_ParamLimits

0xa3c9,	// (0x000208c5) main_mup_pane_g1

0xa3e1,	// (0x000208dd) main_mup_pane_g2_ParamLimits

0xa3e1,	// (0x000208dd) main_mup_pane_g2

0xa3fd,	// (0x000208f9) main_mup_pane_g3_ParamLimits

0xa3fd,	// (0x000208f9) main_mup_pane_g3

0xa419,	// (0x00020915) main_mup_pane_g4_ParamLimits

0xa419,	// (0x00020915) main_mup_pane_g4

0xa435,	// (0x00020931) main_mup_pane_g5_ParamLimits

0xa435,	// (0x00020931) main_mup_pane_g5

0xa452,	// (0x0002094e) main_mup_pane_g6_ParamLimits

0xa452,	// (0x0002094e) main_mup_pane_g6

0xa46e,	// (0x0002096a) main_mup_pane_g7_ParamLimits

0xa46e,	// (0x0002096a) main_mup_pane_g7

0xa48a,	// (0x00020986) main_mup_pane_g8_ParamLimits

0xa48a,	// (0x00020986) main_mup_pane_g8

0xa4a6,	// (0x000209a2) main_mup_pane_g9_ParamLimits

0xa4a6,	// (0x000209a2) main_mup_pane_g9

0xa4bd,	// (0x000209b9) main_mup_pane_g10_ParamLimits

0xa4bd,	// (0x000209b9) main_mup_pane_g10

0xa4d4,	// (0x000209d0) main_mup_pane_g11_ParamLimits

0xa4d4,	// (0x000209d0) main_mup_pane_g11

0xa4e8,	// (0x000209e4) main_mup_pane_g12_ParamLimits

0xa4e8,	// (0x000209e4) main_mup_pane_g12

0xa4f4,	// (0x000209f0) main_mup_pane_g13_ParamLimits

0xa4f4,	// (0x000209f0) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00025916) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00025916) main_mup_pane_g

0xa508,	// (0x00020a04) main_mup_pane_t1_ParamLimits

0xa508,	// (0x00020a04) main_mup_pane_t1

0xa525,	// (0x00020a21) main_mup_pane_t2_ParamLimits

0xa525,	// (0x00020a21) main_mup_pane_t2

0xa53f,	// (0x00020a3b) main_mup_pane_t3_ParamLimits

0xa53f,	// (0x00020a3b) main_mup_pane_t3

0xa559,	// (0x00020a55) main_mup_pane_t4_ParamLimits

0xa559,	// (0x00020a55) main_mup_pane_t4

0xa56b,	// (0x00020a67) main_mup_pane_t5_ParamLimits

0xa56b,	// (0x00020a67) main_mup_pane_t5

0xa57d,	// (0x00020a79) main_mup_pane_t6_ParamLimits

0xa57d,	// (0x00020a79) main_mup_pane_t6

0x0005,

0xf435,	// (0x00025931) main_mup_pane_t_ParamLimits

0xf435,	// (0x00025931) main_mup_pane_t

0xa593,	// (0x00020a8f) mup_progress_pane_ParamLimits

0xa593,	// (0x00020a8f) mup_progress_pane

0xa59f,	// (0x00020a9b) mup_visualizer_pane_ParamLimits

0xa59f,	// (0x00020a9b) mup_visualizer_pane

0xa5cd,	// (0x00020ac9) mup_volume_pane_ParamLimits

0xa5cd,	// (0x00020ac9) mup_volume_pane

0x1be0,	// (0x000180dc) mup_visualizer_pane_g1_ParamLimits

0x1be0,	// (0x000180dc) mup_visualizer_pane_g1

0x1be0,	// (0x000180dc) mup_visualizer_pane_g2_ParamLimits

0x1be0,	// (0x000180dc) mup_visualizer_pane_g2

0x1956,	// (0x00017e52) mup_visualizer_pane_g3_ParamLimits

0x1956,	// (0x00017e52) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0002593e) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0002593e) mup_visualizer_pane_g

0x0e8c,	// (0x00017388) mup_volume_pane_g1

0x1bf6,	// (0x000180f2) mup_volume_pane_g2

0x0001,

0xf449,	// (0x00025945) mup_volume_pane_g

0x0e8c,	// (0x00017388) mup_progress_pane_g1

0x1bff,	// (0x000180fb) mup_progress_pane_g2

0x1c08,	// (0x00018104) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0002594a) mup_progress_pane_g

0x0ac5,	// (0x00016fc1) bg_popup_window_pane_cp05

0xa5f0,	// (0x00020aec) heading_pane_cp02_ParamLimits

0xa5f0,	// (0x00020aec) heading_pane_cp02

0x1c11,	// (0x0001810d) list_popup_blid_pane

0xa60a,	// (0x00020b06) list_blid_sat_info_pane_ParamLimits

0xa60a,	// (0x00020b06) list_blid_sat_info_pane

0x1c2b,	// (0x00018127) list_blid_sat_info_pane_g1

0x1c33,	// (0x0001812f) list_blid_sat_info_pane_t1

0xa6ed,	// (0x00020be9) mup_equalizer_pane_ParamLimits

0xa6ed,	// (0x00020be9) mup_equalizer_pane

0xa706,	// (0x00020c02) mup_equalizer_pane_cp1_ParamLimits

0xa706,	// (0x00020c02) mup_equalizer_pane_cp1

0xa71f,	// (0x00020c1b) mup_equalizer_pane_cp2_ParamLimits

0xa71f,	// (0x00020c1b) mup_equalizer_pane_cp2

0xa738,	// (0x00020c34) mup_equalizer_pane_cp3_ParamLimits

0xa738,	// (0x00020c34) mup_equalizer_pane_cp3

0xa751,	// (0x00020c4d) mup_equalizer_pane_cp4_ParamLimits

0xa751,	// (0x00020c4d) mup_equalizer_pane_cp4

0xa76a,	// (0x00020c66) mup_equalizer_pane_cp5

0xa77c,	// (0x00020c78) mup_equalizer_pane_cp6

0xa78e,	// (0x00020c8a) mup_equalizer_pane_cp7

0x2de2,	// (0x000192de) bg_popup_call_poc_act_pane_g9

0x2dea,	// (0x000192e6) bg_popup_call_poc_act_pane_g10

0x2df2,	// (0x000192ee) bg_popup_call_poc_act_pane_g11

0x000a,

0x0d20,	// (0x0001721c) mup_scale_pane

0x0e8c,	// (0x00017388) mup_scale_pane_g1

0x1c41,	// (0x0001813d) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x00025966) mup_scale_pane_g

0x1c65,	// (0x00018161) msg_data_pane

0x1c6d,	// (0x00018169) scroll_pane_cp017

0xa7b2,	// (0x00020cae) bg_list_pane_cp04_ParamLimits

0xa7b2,	// (0x00020cae) bg_list_pane_cp04

0x1c75,	// (0x00018171) msg_data_pane_g1

0xa7d2,	// (0x00020cce) msg_data_pane_g2

0xa7da,	// (0x00020cd6) msg_data_pane_g3

0xa7e2,	// (0x00020cde) msg_data_pane_g4

0xa7ea,	// (0x00020ce6) msg_data_pane_g5

0xa3b9,	// (0x000208b5) msg_data_pane_g6

0xa7f2,	// (0x00020cee) msg_data_pane_g7

0x0006,

0xf479,	// (0x00025975) msg_data_pane_g

0xa7fa,	// (0x00020cf6) msg_text_pane_ParamLimits

0xa7fa,	// (0x00020cf6) msg_text_pane

0xa81d,	// (0x00020d19) qrid_highlight_pane_cp011_ParamLimits

0xa81d,	// (0x00020d19) qrid_highlight_pane_cp011

0x0ac5,	// (0x00016fc1) msg_body_pane

0x0ac5,	// (0x00016fc1) msg_header_pane

0x1c86,	// (0x00018182) input_focus_pane_cp07

0xa83f,	// (0x00020d3b) msg_header_pane_t1_ParamLimits

0xa83f,	// (0x00020d3b) msg_header_pane_t1

0xa851,	// (0x00020d4d) msg_header_pane_t2_ParamLimits

0xa851,	// (0x00020d4d) msg_header_pane_t2

0x0001,

0xf48d,	// (0x00025989) msg_header_pane_t_ParamLimits

0xf48d,	// (0x00025989) msg_header_pane_t

0x1c9b,	// (0x00018197) msg_body_pane_g1

0xa863,	// (0x00020d5f) msg_body_pane_t1_ParamLimits

0xa863,	// (0x00020d5f) msg_body_pane_t1

0xa894,	// (0x00020d90) msg_body_pane_t2_ParamLimits

0xa894,	// (0x00020d90) msg_body_pane_t2

0xa8a6,	// (0x00020da2) msg_body_pane_t3_ParamLimits

0xa8a6,	// (0x00020da2) msg_body_pane_t3

0x0002,

0xf492,	// (0x0002598e) msg_body_pane_t_ParamLimits

0xf492,	// (0x0002598e) msg_body_pane_t

0x777f,	// (0x0001dc7b) main_viewer_pane_g1_ParamLimits

0x777f,	// (0x0001dc7b) main_viewer_pane_g1

0x778b,	// (0x0001dc87) main_viewer_pane_g2_ParamLimits

0x778b,	// (0x0001dc87) main_viewer_pane_g2

0xa8d6,	// (0x00020dd2) main_viewer_pane_g3_ParamLimits

0xa8d6,	// (0x00020dd2) main_viewer_pane_g3

0xa8e5,	// (0x00020de1) main_viewer_pane_g4_ParamLimits

0xa8e5,	// (0x00020de1) main_viewer_pane_g4

0x7797,	// (0x0001dc93) main_viewer_pane_g5_ParamLimits

0x7797,	// (0x0001dc93) main_viewer_pane_g5

0x7797,	// (0x0001dc93) main_viewer_pane_g7_ParamLimits

0x7797,	// (0x0001dc93) main_viewer_pane_g7

0x77a9,	// (0x0001dca5) main_viewer_pane_g8_ParamLimits

0x77a9,	// (0x0001dca5) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0002599e) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0002599e) main_viewer_pane_g

0x1ce5,	// (0x000181e1) viewer_content_pane_ParamLimits

0x1ce5,	// (0x000181e1) viewer_content_pane

0xa90c,	// (0x00020e08) main_postcard_pane_g1_ParamLimits

0xa90c,	// (0x00020e08) main_postcard_pane_g1

0xa918,	// (0x00020e14) main_postcard_pane_g2_ParamLimits

0xa918,	// (0x00020e14) main_postcard_pane_g2

0xa924,	// (0x00020e20) main_postcard_pane_g3_ParamLimits

0xa924,	// (0x00020e20) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000259af) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000259af) main_postcard_pane_g

0xa930,	// (0x00020e2c) main_postcard_pane_g4

0x3039,	// (0x00019535) smil_status_volume_pane_g2

0xa954,	// (0x00020e50) postcard_pane_ParamLimits

0xa954,	// (0x00020e50) postcard_pane

0x1be0,	// (0x000180dc) postcard_pane_g1_ParamLimits

0x1be0,	// (0x000180dc) postcard_pane_g1

0xa984,	// (0x00020e80) postcard_pane_g2_ParamLimits

0xa984,	// (0x00020e80) postcard_pane_g2

0xa990,	// (0x00020e8c) postcard_pane_g3_ParamLimits

0xa990,	// (0x00020e8c) postcard_pane_g3

0x1d01,	// (0x000181fd) postcard_pane_g4_ParamLimits

0x1d01,	// (0x000181fd) postcard_pane_g4

0xa99c,	// (0x00020e98) postcard_pane_g5_ParamLimits

0xa99c,	// (0x00020e98) postcard_pane_g5

0xa9a8,	// (0x00020ea4) postcard_pane_g6_ParamLimits

0xa9a8,	// (0x00020ea4) postcard_pane_g6

0x1cf3,	// (0x000181ef) postcard_pane_g7_ParamLimits

0x1cf3,	// (0x000181ef) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000259bc) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000259bc) postcard_pane_g

0xa9b4,	// (0x00020eb0) main_mp2_pane_g1_ParamLimits

0xa9b4,	// (0x00020eb0) main_mp2_pane_g1

0xa9c0,	// (0x00020ebc) main_mp2_pane_g2_ParamLimits

0xa9c0,	// (0x00020ebc) main_mp2_pane_g2

0xa9cc,	// (0x00020ec8) main_mp2_pane_g3_ParamLimits

0xa9cc,	// (0x00020ec8) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000259cb) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000259cb) main_mp2_pane_g

0xa9d8,	// (0x00020ed4) main_mp2_pane_t1_ParamLimits

0xa9d8,	// (0x00020ed4) main_mp2_pane_t1

0xa9ed,	// (0x00020ee9) main_mp2_pane_t2_ParamLimits

0xa9ed,	// (0x00020ee9) main_mp2_pane_t2

0xa9ff,	// (0x00020efb) main_mp2_pane_t3_ParamLimits

0xa9ff,	// (0x00020efb) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000259d2) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000259d2) main_mp2_pane_t

0x1d0f,	// (0x0001820b) pec_content_pane_ParamLimits

0x1d0f,	// (0x0001820b) pec_content_pane

0x1208,	// (0x00017704) scroll_pane_cp015

0x1d21,	// (0x0001821d) pec_attribute_pane_ParamLimits

0x1d21,	// (0x0001821d) pec_attribute_pane

0xaa11,	// (0x00020f0d) pec_content_pane_g1_ParamLimits

0xaa11,	// (0x00020f0d) pec_content_pane_g1

0x1d31,	// (0x0001822d) pec_content_pane_t1_ParamLimits

0x1d31,	// (0x0001822d) pec_content_pane_t1

0x1d43,	// (0x0001823f) pec_content_pane_t2_ParamLimits

0x1d43,	// (0x0001823f) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000259d9) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000259d9) pec_content_pane_t

0xaa1d,	// (0x00020f19) list_single_graphic_pane_cp01_ParamLimits

0xaa1d,	// (0x00020f19) list_single_graphic_pane_cp01

0x0d20,	// (0x0001721c) bg_popup_sub_pane_cp04

0x1d55,	// (0x00018251) popup_mup_playback_window_g1

0x1d61,	// (0x0001825d) popup_mup_playback_window_t1

0x1d76,	// (0x00018272) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000259de) popup_mup_playback_window_t

0x1dad,	// (0x000182a9) main_image_pane_g1_ParamLimits

0x1dad,	// (0x000182a9) main_image_pane_g1

0x1df0,	// (0x000182ec) scroll_pane_cp018_ParamLimits

0x1df0,	// (0x000182ec) scroll_pane_cp018

0x1e08,	// (0x00018304) scroll_pane_cp016_ParamLimits

0x1e08,	// (0x00018304) scroll_pane_cp016

0xaaa1,	// (0x00020f9d) smil2_image_pane_ParamLimits

0xaaa1,	// (0x00020f9d) smil2_image_pane

0xaac9,	// (0x00020fc5) smil2_root_pane_ParamLimits

0xaac9,	// (0x00020fc5) smil2_root_pane

0xaaf5,	// (0x00020ff1) smil2_text_pane_ParamLimits

0xaaf5,	// (0x00020ff1) smil2_text_pane

0x0ac5,	// (0x00016fc1) bg_list_pane_cp06

0xab31,	// (0x0002102d) grid_radio_pane

0x0ac5,	// (0x00016fc1) bg_popup_window_pane_cp06

0x1e3c,	// (0x00018338) main_fmradio_pane_t1

0x17de,	// (0x00017cda) heading_pane_cp04

0x1e4a,	// (0x00018346) main_fmradio_pane_t2

0x2e3a,	// (0x00019336) popup_cale_lunar_info_window_g1

0x1e58,	// (0x00018354) main_fmradio_pane_t3

0x2e42,	// (0x0001933e) popup_cale_lunar_info_window_g2

0x1e66,	// (0x00018362) main_fmradio_pane_t4

0x0001,

0x1e74,	// (0x00018370) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x00025acc) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000259f3) main_fmradio_pane_t

0x1e82,	// (0x0001837e) wait_bar_pane_cp03

0xab39,	// (0x00021035) cell_fmradio_pane_ParamLimits

0xab39,	// (0x00021035) cell_fmradio_pane

0x1cf3,	// (0x000181ef) cell_fmradio_pane_g1_ParamLimits

0x1cf3,	// (0x000181ef) cell_fmradio_pane_g1

0x0ac5,	// (0x00016fc1) grid_highlight_pane_cp011

0x1e8a,	// (0x00018386) poc_content_pane_ParamLimits

0x1e8a,	// (0x00018386) poc_content_pane

0x1e9c,	// (0x00018398) scroll_pane_cp019

0xab4c,	// (0x00021048) popup_call_poc_act_window_ParamLimits

0xab4c,	// (0x00021048) popup_call_poc_act_window

0xab59,	// (0x00021055) popup_call_poc_inact_window_ParamLimits

0xab59,	// (0x00021055) popup_call_poc_inact_window

0xf594,	// (0x00025a90) bg_popup_call_poc_act_pane_g

0x2dfa,	// (0x000192f6) bg_popup_call_poc_inact_pane_g1

0x2e02,	// (0x000192fe) bg_popup_call_poc_inact_pane_g2

0x1ea4,	// (0x000183a0) popup_call_poc_act_window_g2

0x2e0a,	// (0x00019306) bg_popup_call_poc_inact_pane_g3

0x2d8a,	// (0x00019286) bg_popup_call_poc_inact_pane_g4

0x2e12,	// (0x0001930e) bg_popup_call_poc_inact_pane_g5

0x1eac,	// (0x000183a8) popup_call_poc_act_window_t1_ParamLimits

0x1eac,	// (0x000183a8) popup_call_poc_act_window_t1

0x1ed4,	// (0x000183d0) popup_call_poc_act_window_t2_ParamLimits

0x1ed4,	// (0x000183d0) popup_call_poc_act_window_t2

0x1efc,	// (0x000183f8) popup_call_poc_act_window_t3_ParamLimits

0x1efc,	// (0x000183f8) popup_call_poc_act_window_t3

0x1f24,	// (0x00018420) popup_call_poc_act_window_t4_ParamLimits

0x1f24,	// (0x00018420) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000259fe) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000259fe) popup_call_poc_act_window_t

0x2e1a,	// (0x00019316) bg_popup_call_poc_inact_pane_g6

0x2e22,	// (0x0001931e) bg_popup_call_poc_inact_pane_g7

0x2e2a,	// (0x00019326) bg_popup_call_poc_inact_pane_g8

0x1f36,	// (0x00018432) popup_call_poc_inact_window_g2

0x2e32,	// (0x0001932e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x00025aa7) bg_popup_call_poc_inact_pane_g

0x1f3e,	// (0x0001843a) popup_call_poc_inact_window_t1_ParamLimits

0x1f3e,	// (0x0001843a) popup_call_poc_inact_window_t1

0x1f53,	// (0x0001844f) popup_call_poc_inact_window_t2_ParamLimits

0x1f53,	// (0x0001844f) popup_call_poc_inact_window_t2

0x1f68,	// (0x00018464) popup_call_poc_inact_window_t3_ParamLimits

0x1f68,	// (0x00018464) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00025a07) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00025a07) popup_call_poc_inact_window_t

0x2fbf,	// (0x000194bb) context_pane_ParamLimits

0xaf59,	// (0x00021455) signal_pane_ParamLimits

0x1048,	// (0x00017544) main_call2_pane

0x78de,	// (0x0001ddda) popup_phob_thumbnail2_window_ParamLimits

0x78de,	// (0x0001ddda) popup_phob_thumbnail2_window

0x774f,	// (0x0001dc4b) aid_hotspot_pointer_arrow_pane

0x7757,	// (0x0001dc53) aid_hotspot_pointer_hand_pane

0xae06,	// (0x00021302) phob_pre_status_pane_g5

0x90e9,	// (0x0001f5e5) cams_zoom_pane_ParamLimits

0x90f5,	// (0x0001f5f1) image_vga_pane_ParamLimits

0x9102,	// (0x0001f5fe) main_camera_pane_g1_ParamLimits

0x910e,	// (0x0001f60a) main_camera_pane_g2_ParamLimits

0x911a,	// (0x0001f616) main_camera_pane_g3_ParamLimits

0x9126,	// (0x0001f622) main_camera_pane_g4_ParamLimits

0x9132,	// (0x0001f62e) main_camera_pane_g5_ParamLimits

0x913e,	// (0x0001f63a) main_camera_pane_g6_ParamLimits

0x914a,	// (0x0001f646) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00025706) main_camera_pane_g_ParamLimits

0x9156,	// (0x0001f652) main_camera_pane_t1_ParamLimits

0x9168,	// (0x0001f664) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00025717) main_camera_pane_t_ParamLimits

0x0d20,	// (0x0001721c) bg_popup_preview_window_pane_cp01_ParamLimits

0x0d20,	// (0x0001721c) bg_popup_preview_window_pane_cp01

0x1f7d,	// (0x00018479) popup_phob_thumbnail2_window_g1_ParamLimits

0x1f7d,	// (0x00018479) popup_phob_thumbnail2_window_g1

0x0ac5,	// (0x00016fc1) call2_cli_visual_pane

0xab75,	// (0x00021071) popup_call2_audio_conf_window_ParamLimits

0xab75,	// (0x00021071) popup_call2_audio_conf_window

0xab88,	// (0x00021084) popup_call2_audio_first_window_ParamLimits

0xab88,	// (0x00021084) popup_call2_audio_first_window

0xac04,	// (0x00021100) popup_call2_audio_in_window_ParamLimits

0xac04,	// (0x00021100) popup_call2_audio_in_window

0xac34,	// (0x00021130) popup_call2_audio_out_window_ParamLimits

0xac34,	// (0x00021130) popup_call2_audio_out_window

0xac80,	// (0x0002117c) popup_call2_audio_second_window_ParamLimits

0xac80,	// (0x0002117c) popup_call2_audio_second_window

0xaccc,	// (0x000211c8) popup_call2_audio_wait_window_ParamLimits

0xaccc,	// (0x000211c8) popup_call2_audio_wait_window

0x0ac5,	// (0x00016fc1) bg_popup_call2_act_pane_cp03

0x0d02,	// (0x000171fe) list_conf_pane_cp

0x1f89,	// (0x00018485) popup_call2_audio_conf_window_t1

0x183b,	// (0x00017d37) list_single_graphic_popup_conf2_pane_ParamLimits

0x183b,	// (0x00017d37) list_single_graphic_popup_conf2_pane

0x184e,	// (0x00017d4a) list_highlight_pane_cp04

0x1f97,	// (0x00018493) list_single_graphic_popup_conf2_pane_g1

0x185f,	// (0x00017d5b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x00025a0e) list_single_graphic_popup_conf2_pane_g

0x1f9f,	// (0x0001849b) list_single_graphic_popup_conf2_pane_t1

0x1fad,	// (0x000184a9) bg_popup_call2_act_pane_cp01_ParamLimits

0x1fad,	// (0x000184a9) bg_popup_call2_act_pane_cp01

0x2037,	// (0x00018533) call_type_pane_cp05_ParamLimits

0x2037,	// (0x00018533) call_type_pane_cp05

0x208b,	// (0x00018587) popup_call2_audio_second_window_g1_ParamLimits

0x208b,	// (0x00018587) popup_call2_audio_second_window_g1

0x20df,	// (0x000185db) popup_call2_audio_second_window_g2_ParamLimits

0x20df,	// (0x000185db) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x00025a13) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x00025a13) popup_call2_audio_second_window_g

0x2144,	// (0x00018640) popup_call2_audio_second_window_t1_ParamLimits

0x2144,	// (0x00018640) popup_call2_audio_second_window_t1

0x21ff,	// (0x000186fb) popup_call2_audio_second_window_t2_ParamLimits

0x21ff,	// (0x000186fb) popup_call2_audio_second_window_t2

0x2252,	// (0x0001874e) popup_call2_audio_second_window_t3_ParamLimits

0x2252,	// (0x0001874e) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x00025a1a) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x00025a1a) popup_call2_audio_second_window_t

0x0ac5,	// (0x00016fc1) bg_popup_call2_in_pane_cp02

0x0acf,	// (0x00016fcb) call_type_pane_cp04

0x0ad7,	// (0x00016fd3) popup_call2_audio_wait_window_g1

0x0adf,	// (0x00016fdb) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000255f5) popup_call2_audio_wait_window_g

0x0ae7,	// (0x00016fe3) popup_call2_audio_wait_window_t3

0x2345,	// (0x00018841) bg_popup_call2_act_pane_ParamLimits

0x2345,	// (0x00018841) bg_popup_call2_act_pane

0x2405,	// (0x00018901) call_type_pane_cp03_ParamLimits

0x2405,	// (0x00018901) call_type_pane_cp03

0x2469,	// (0x00018965) popup_call2_audio_first_window_g1_ParamLimits

0x2469,	// (0x00018965) popup_call2_audio_first_window_g1

0x24d9,	// (0x000189d5) popup_call2_audio_first_window_g2_ParamLimits

0x24d9,	// (0x000189d5) popup_call2_audio_first_window_g2

0x1be0,	// (0x000180dc) popup_call2_audio_first_window_g3_ParamLimits

0x1be0,	// (0x000180dc) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x00025a23) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x00025a23) popup_call2_audio_first_window_g

0x25b7,	// (0x00018ab3) popup_call2_audio_first_window_t1_ParamLimits

0x25b7,	// (0x00018ab3) popup_call2_audio_first_window_t1

0x26ba,	// (0x00018bb6) popup_call2_audio_first_window_t4_ParamLimits

0x26ba,	// (0x00018bb6) popup_call2_audio_first_window_t4

0x279d,	// (0x00018c99) popup_call2_audio_first_window_t5_ParamLimits

0x279d,	// (0x00018c99) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x00025a2e) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x00025a2e) popup_call2_audio_first_window_t

0x0d18,	// (0x00017214) bg_popup_call2_act_pane_g1

0x2e4a,	// (0x00019346) popup_cale_lunar_info_window_t1

0x2e58,	// (0x00019354) popup_cale_lunar_info_window_t2

0x2e66,	// (0x00019362) popup_cale_lunar_info_window_t3

0x0ac5,	// (0x00016fc1) bg_popup_call2_bubble_pane

0x289e,	// (0x00018d9a) bg_popup_call2_in_pane_cp01_ParamLimits

0x289e,	// (0x00018d9a) bg_popup_call2_in_pane_cp01

0x07a1,	// (0x00016c9d) call_type_pane_cp02

0x28e6,	// (0x00018de2) popup_call2_audio_out_window_g1_ParamLimits

0x28e6,	// (0x00018de2) popup_call2_audio_out_window_g1

0x2912,	// (0x00018e0e) popup_call2_audio_out_window_g2_ParamLimits

0x2912,	// (0x00018e0e) popup_call2_audio_out_window_g2

0x293a,	// (0x00018e36) popup_call2_audio_out_window_g3_ParamLimits

0x293a,	// (0x00018e36) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x00025a37) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x00025a37) popup_call2_audio_out_window_g

0x2975,	// (0x00018e71) popup_call2_audio_out_window_t1_ParamLimits

0x2975,	// (0x00018e71) popup_call2_audio_out_window_t1

0x29d4,	// (0x00018ed0) popup_call2_audio_out_window_t2_ParamLimits

0x29d4,	// (0x00018ed0) popup_call2_audio_out_window_t2

0x2a28,	// (0x00018f24) popup_call2_audio_out_window_t3_ParamLimits

0x2a28,	// (0x00018f24) popup_call2_audio_out_window_t3

0x2a3e,	// (0x00018f3a) popup_call2_audio_out_window_t4_ParamLimits

0x2a3e,	// (0x00018f3a) popup_call2_audio_out_window_t4

0x2a54,	// (0x00018f50) popup_call2_audio_out_window_t5_ParamLimits

0x2a54,	// (0x00018f50) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x00025a40) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x00025a40) popup_call2_audio_out_window_t

0x2ab8,	// (0x00018fb4) bg_popup_call2_in_pane_ParamLimits

0x2ab8,	// (0x00018fb4) bg_popup_call2_in_pane

0x2b14,	// (0x00019010) popup_call2_audio_in_window_g1_ParamLimits

0x2b14,	// (0x00019010) popup_call2_audio_in_window_g1

0x2b4c,	// (0x00019048) popup_call2_audio_in_window_g2_ParamLimits

0x2b4c,	// (0x00019048) popup_call2_audio_in_window_g2

0x2b84,	// (0x00019080) popup_call2_audio_in_window_g3_ParamLimits

0x2b84,	// (0x00019080) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x00025a4d) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x00025a4d) popup_call2_audio_in_window_g

0x2bdc,	// (0x000190d8) popup_call2_audio_in_window_t1_ParamLimits

0x2bdc,	// (0x000190d8) popup_call2_audio_in_window_t1

0x2c5c,	// (0x00019158) popup_call2_audio_in_window_t2_ParamLimits

0x2c5c,	// (0x00019158) popup_call2_audio_in_window_t2

0x2cdc,	// (0x000191d8) popup_call2_audio_in_window_t3_ParamLimits

0x2cdc,	// (0x000191d8) popup_call2_audio_in_window_t3

0x2cf6,	// (0x000191f2) popup_call2_audio_in_window_t4_ParamLimits

0x2cf6,	// (0x000191f2) popup_call2_audio_in_window_t4

0x2d08,	// (0x00019204) popup_call2_audio_in_window_t5_ParamLimits

0x2d08,	// (0x00019204) popup_call2_audio_in_window_t5

0x2d1d,	// (0x00019219) popup_call2_audio_in_window_t6_ParamLimits

0x2d1d,	// (0x00019219) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x00025a56) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x00025a56) popup_call2_audio_in_window_t

0x0d18,	// (0x00017214) bg_popup_call2_in_pane_g1

0x2e74,	// (0x00019370) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x00025ad1) popup_cale_lunar_info_window_t

0x0d20,	// (0x0001721c) bg_popup_call2_rect_pane_ParamLimits

0x0d20,	// (0x0001721c) bg_popup_call2_rect_pane

0x0ac5,	// (0x00016fc1) call2_cli_visual_graphic_pane

0x0ac5,	// (0x00016fc1) call2_cli_visual_text_pane

0x792b,	// (0x0001de27) smil_status_volume_pane_g3

0x0002,

0x0e8c,	// (0x00017388) call2_cli_visual_graphic_pane_g1

0x0e8c,	// (0x00017388) call2_cli_visual_graphic_pane_g2

0x0e8c,	// (0x00017388) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x00025a63) call2_cli_visual_graphic_pane_g

0x2d32,	// (0x0001922e) bg_popup_call2_rect_pane_g1

0x0f34,	// (0x00017430) bg_popup_call2_rect_pane_g2

0x2d3a,	// (0x00019236) bg_popup_call2_rect_pane_g3

0x2d42,	// (0x0001923e) bg_popup_call2_rect_pane_g4

0x2d4a,	// (0x00019246) bg_popup_call2_rect_pane_g5

0x2d52,	// (0x0001924e) bg_popup_call2_rect_pane_g6

0x2d5a,	// (0x00019256) bg_popup_call2_rect_pane_g7

0x2d62,	// (0x0001925e) bg_popup_call2_rect_pane_g8

0x2d6a,	// (0x00019266) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x00025a6a) bg_popup_call2_rect_pane_g

0x2d72,	// (0x0001926e) bg_popup_call2_bubble_pane_g1

0x2d7a,	// (0x00019276) bg_popup_call2_bubble_pane_g2

0x2d82,	// (0x0001927e) bg_popup_call2_bubble_pane_g3

0x2d8a,	// (0x00019286) bg_popup_call2_bubble_pane_g4

0x2d92,	// (0x0001928e) bg_popup_call2_bubble_pane_g5

0x2d9a,	// (0x00019296) bg_popup_call2_bubble_pane_g6

0x2da2,	// (0x0001929e) bg_popup_call2_bubble_pane_g7

0x2daa,	// (0x000192a6) bg_popup_call2_bubble_pane_g8

0x2db2,	// (0x000192ae) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x00025a7d) bg_popup_call2_bubble_pane_g

0x8bfb,	// (0x0001f0f7) aid_cale_week_size_cell_pane

0x917a,	// (0x0001f676) aid_cams_cif_uncrop_pane_ParamLimits

0x917a,	// (0x0001f676) aid_cams_cif_uncrop_pane

0x92d2,	// (0x0001f7ce) aid_cams_size_cell_ParamLimits

0x92d2,	// (0x0001f7ce) aid_cams_size_cell

0x92de,	// (0x0001f7da) grid_cams_pane_ParamLimits

0x92ea,	// (0x0001f7e6) linegrid_cams_pane_ParamLimits

0x94bd,	// (0x0001f9b9) call_video_pane_t1

0x94da,	// (0x0001f9d6) call_video_pane_t2

0x0001,

0xf26e,	// (0x0002576a) call_video_pane_t

0x98aa,	// (0x0001fda6) aid_cale_month_size_cell_pane_ParamLimits

0x98aa,	// (0x0001fda6) aid_cale_month_size_cell_pane

0xf61e,	// (0x00025b1a) smil_status_volume_pane_g

0x7938,	// (0x0001de34) volume_smil_pane_ParamLimits

0x6ffc,	// (0x0001d4f8) aid_popup2_width_pane

0x8b63,	// (0x0001f05f) cell_qdial_pane_g4_ParamLimits

0x8b63,	// (0x0001f05f) cell_qdial_pane_g4

0xa308,	// (0x00020804) aid_blid_cardinal_pane_ParamLimits

0xa314,	// (0x00020810) aid_blid_destination_pane_ParamLimits

0xa314,	// (0x00020810) aid_blid_destination_pane

0x0d20,	// (0x0001721c) bg_popup_call_poc_act_pane_ParamLimits

0x0d20,	// (0x0001721c) bg_popup_call_poc_act_pane

0x0d20,	// (0x0001721c) bg_popup_call_poc_inact_pane_ParamLimits

0x0d20,	// (0x0001721c) bg_popup_call_poc_inact_pane

0x2dba,	// (0x000192b6) bg_popup_call_poc_act_pane_g1

0x2dc2,	// (0x000192be) bg_popup_call_poc_act_pane_g2

0x2dca,	// (0x000192c6) bg_popup_call_poc_act_pane_g3

0x2d8a,	// (0x00019286) bg_popup_call_poc_act_pane_g4

0x2d92,	// (0x0001928e) bg_popup_call_poc_act_pane_g5

0x2dd2,	// (0x000192ce) bg_popup_call_poc_act_pane_g6

0x2da2,	// (0x0001929e) bg_popup_call_poc_act_pane_g7

0x2dda,	// (0x000192d6) bg_popup_call_poc_act_pane_g8

0x0ac5,	// (0x00016fc1) main_usb_pane

0x7839,	// (0x0001dd35) popup_cale_lunar_info_window

0x975d,	// (0x0001fc59) im_reading_pane_t1_ParamLimits

0x1151,	// (0x0001764d) list_im_pane_ParamLimits

0x1162,	// (0x0001765e) scroll_pane_cp07_ParamLimits

0x0ac5,	// (0x00016fc1) grid_highlight_pane_cp012

0x0d20,	// (0x0001721c) mup_scale_pane_ParamLimits

0x1be0,	// (0x000180dc) main_usb_pane_g1_ParamLimits

0x1be0,	// (0x000180dc) main_usb_pane_g1

0xad2b,	// (0x00021227) main_usb_pane_g2_ParamLimits

0xad2b,	// (0x00021227) main_usb_pane_g2

0x0001,

0xf5be,	// (0x00025aba) main_usb_pane_g_ParamLimits

0xf5be,	// (0x00025aba) main_usb_pane_g

0xad37,	// (0x00021233) main_usb_pane_t1_ParamLimits

0xad37,	// (0x00021233) main_usb_pane_t1

0xad49,	// (0x00021245) main_usb_pane_t2_ParamLimits

0xad49,	// (0x00021245) main_usb_pane_t2

0xad5b,	// (0x00021257) main_usb_pane_t3_ParamLimits

0xad5b,	// (0x00021257) main_usb_pane_t3

0xad6d,	// (0x00021269) main_usb_pane_t4_ParamLimits

0xad6d,	// (0x00021269) main_usb_pane_t4

0xad7f,	// (0x0002127b) main_usb_pane_t5_ParamLimits

0xad7f,	// (0x0002127b) main_usb_pane_t5

0xad91,	// (0x0002128d) main_usb_pane_t6_ParamLimits

0xad91,	// (0x0002128d) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x00025abf) main_usb_pane_t_ParamLimits

0xa2b7,	// (0x000207b3) aid_text_placing

0xa2c0,	// (0x000207bc) main_location2_pane_t1_ParamLimits

0xa2d2,	// (0x000207ce) main_location2_pane_t2_ParamLimits

0xa2e4,	// (0x000207e0) main_location2_pane_t3_ParamLimits

0xa2f6,	// (0x000207f2) main_location2_pane_t4_ParamLimits

0xa2f6,	// (0x000207f2) main_location2_pane_t4

0xf3cf,	// (0x000258cb) main_location2_pane_t_ParamLimits

0x0d5c,	// (0x00017258) find_pinb_pane_g2_ParamLimits

0x0d5c,	// (0x00017258) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0002561b) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0002561b) find_pinb_pane_g

0x0d68,	// (0x00017264) find_pinb_pane_t1_ParamLimits

0x0d7a,	// (0x00017276) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x00025620) find_pinb_pane_t_ParamLimits

0x0ac5,	// (0x00016fc1) main_call3_pane

0x9c82,	// (0x0002017e) cale_month_day_heading_pane_t1_ParamLimits

0x9cb5,	// (0x000201b1) cale_month_day_heading_pane_t2_ParamLimits

0x9cdf,	// (0x000201db) cale_month_day_heading_pane_t3_ParamLimits

0x9d09,	// (0x00020205) cale_month_day_heading_pane_t4_ParamLimits

0x9d33,	// (0x0002022f) cale_month_day_heading_pane_t5_ParamLimits

0x9d5d,	// (0x00020259) cale_month_day_heading_pane_t6_ParamLimits

0x9d87,	// (0x00020283) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000257a2) cale_month_day_heading_pane_t_ParamLimits

0x13c7,	// (0x000178c3) smil_status_volume_pane

0xa96c,	// (0x00020e68) postcard_address_pane_ParamLimits

0xa96c,	// (0x00020e68) postcard_address_pane

0xa978,	// (0x00020e74) postcard_message_pane_ParamLimits

0xa978,	// (0x00020e74) postcard_message_pane

0xad09,	// (0x00021205) call2_cli_visual_pane_t1_ParamLimits

0xad09,	// (0x00021205) call2_cli_visual_pane_t1

0xb11a,	// (0x00021616) postcard_message_pane_t1_ParamLimits

0xb11a,	// (0x00021616) postcard_message_pane_t1

0xb103,	// (0x000215ff) postcard_address_pane_t1_ParamLimits

0xb103,	// (0x000215ff) postcard_address_pane_t1

0xb0f6,	// (0x000215f2) popup_call3_audio_in_window_ParamLimits

0xb0f6,	// (0x000215f2) popup_call3_audio_in_window

0xafde,	// (0x000214da) bg_popup_call3_in_pane_ParamLimits

0xafde,	// (0x000214da) bg_popup_call3_in_pane

0xb03c,	// (0x00021538) popup_call3_audio_in_window_g1_ParamLimits

0xb03c,	// (0x00021538) popup_call3_audio_in_window_g1

0xb054,	// (0x00021550) popup_call3_audio_in_window_g2_ParamLimits

0xb054,	// (0x00021550) popup_call3_audio_in_window_g2

0xb06c,	// (0x00021568) popup_call3_audio_in_window_g3_ParamLimits

0xb06c,	// (0x00021568) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x00025b21) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x00025b21) popup_call3_audio_in_window_g

0xb094,	// (0x00021590) popup_call3_audio_in_window_t1_ParamLimits

0xb094,	// (0x00021590) popup_call3_audio_in_window_t1

0xb0bc,	// (0x000215b8) popup_call3_audio_in_window_t2_ParamLimits

0xb0bc,	// (0x000215b8) popup_call3_audio_in_window_t2

0xb0e4,	// (0x000215e0) popup_call3_audio_in_window_t3_ParamLimits

0xb0e4,	// (0x000215e0) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x00025b2a) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x00025b2a) popup_call3_audio_in_window_t

0x1048,	// (0x00017544) bg_popup_call3_rect_pane

0x2d32,	// (0x0001922e) bg_popup_call3_rect_pane_g1

0x0f34,	// (0x00017430) bg_popup_call3_rect_pane_g2

0x2d3a,	// (0x00019236) bg_popup_call3_rect_pane_g3

0x2d42,	// (0x0001923e) bg_popup_call3_rect_pane_g4

0x2d4a,	// (0x00019246) bg_popup_call3_rect_pane_g5

0x2d52,	// (0x0001924e) bg_popup_call3_rect_pane_g6

0x2d5a,	// (0x00019256) bg_popup_call3_rect_pane_g7

0xa5e8,	// (0x00020ae4) mup_visualizer_osc_pane

0x1bee,	// (0x000180ea) mup_visualizer_spec_pane

0xaffe,	// (0x000214fa) call3_video_qcif_pane_ParamLimits

0xaffe,	// (0x000214fa) call3_video_qcif_pane

0xb00e,	// (0x0002150a) call3_video_qcif_uncrop_pane_ParamLimits

0xb00e,	// (0x0002150a) call3_video_qcif_uncrop_pane

0xb01a,	// (0x00021516) call3_video_subqcif_pane_ParamLimits

0xb01a,	// (0x00021516) call3_video_subqcif_pane

0xb02c,	// (0x00021528) call3_video_subqcif_uncrop_pane_ParamLimits

0xb02c,	// (0x00021528) call3_video_subqcif_uncrop_pane

0xb084,	// (0x00021580) popup_call3_audio_in_window_g4_ParamLimits

0xb084,	// (0x00021580) popup_call3_audio_in_window_g4

0xafcd,	// (0x000214c9) mup_spec_half_pane

0xafd6,	// (0x000214d2) mup_spec_half_pane_cp

0x301f,	// (0x0001951b) mup_osc_middle_pane

0x3028,	// (0x00019524) mup_visualizer_osc_pane_g1

0xafae,	// (0x000214aa) mup_spec_bar_pane_ParamLimits

0xafae,	// (0x000214aa) mup_spec_bar_pane

0x300c,	// (0x00019508) mup_spec_bar_pane_g1

0x3016,	// (0x00019512) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x00025b15) mup_spec_bar_pane_g

0x8bfb,	// (0x0001f0f7) aid_cale_week_size_cell_pane_ParamLimits

0x8c15,	// (0x0001f111) bg_cale_heading_pane_ParamLimits

0x8c32,	// (0x0001f12e) bg_cale_pane_cp01_ParamLimits

0x8c54,	// (0x0001f150) cale_week_corner_pane_ParamLimits

0x8c73,	// (0x0001f16f) cale_week_day_heading_pane_ParamLimits

0x8c95,	// (0x0001f191) cale_week_scroll_pane_g1_ParamLimits

0x8cad,	// (0x0001f1a9) cale_week_scroll_pane_g2_ParamLimits

0x8cc5,	// (0x0001f1c1) cale_week_scroll_pane_g3_ParamLimits

0x8cdd,	// (0x0001f1d9) cale_week_scroll_pane_g4_ParamLimits

0x8cf5,	// (0x0001f1f1) cale_week_scroll_pane_g5_ParamLimits

0x8d0d,	// (0x0001f209) cale_week_scroll_pane_g6_ParamLimits

0x8d25,	// (0x0001f221) cale_week_scroll_pane_g7_ParamLimits

0x8d3d,	// (0x0001f239) cale_week_scroll_pane_g8_ParamLimits

0x8d55,	// (0x0001f251) cale_week_scroll_pane_g9_ParamLimits

0x8d72,	// (0x0001f26e) cale_week_scroll_pane_g10_ParamLimits

0x8d8f,	// (0x0001f28b) cale_week_scroll_pane_g11_ParamLimits

0x8dac,	// (0x0001f2a8) cale_week_scroll_pane_g12_ParamLimits

0x8dc9,	// (0x0001f2c5) cale_week_scroll_pane_g13_ParamLimits

0x8de6,	// (0x0001f2e2) cale_week_scroll_pane_g14_ParamLimits

0x8e03,	// (0x0001f2ff) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000256ac) cale_week_scroll_pane_g_ParamLimits

0x8e38,	// (0x0001f334) cale_week_time_pane_ParamLimits

0x8e50,	// (0x0001f34c) grid_cale_week_pane_ParamLimits

0x0fc7,	// (0x000174c3) listscroll_cale_week_pane_t1

0x0fd9,	// (0x000174d5) scroll_pane_cp08_ParamLimits

0x990a,	// (0x0001fe06) cale_month_corner_pane_ParamLimits

0x1391,	// (0x0001788d) cale_month_pane_t1

0x9c39,	// (0x00020135) cale_month_week_pane_ParamLimits

0x1be0,	// (0x000180dc) popup_call_status_window_g1_ParamLimits

0xa13d,	// (0x00020639) popup_call_status_window_g2_ParamLimits

0xa149,	// (0x00020645) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x00025852) popup_call_status_window_g_ParamLimits

0x1767,	// (0x00017c63) aid_call2_pane

0xa833,	// (0x00020d2f) msg_header_pane_g1

0xa96c,	// (0x00020e68) postcard_address2_pane_ParamLimits

0xa96c,	// (0x00020e68) postcard_address2_pane

0xa978,	// (0x00020e74) postcard_message2_pane_ParamLimits

0xa978,	// (0x00020e74) postcard_message2_pane

0xaf65,	// (0x00021461) message2_row_pane_ParamLimits

0xaf65,	// (0x00021461) message2_row_pane

0xaf7d,	// (0x00021479) address2_row_pane_ParamLimits

0xaf7d,	// (0x00021479) address2_row_pane

0x2fda,	// (0x000194d6) postcard_message2_row_pane_g1

0x2fe2,	// (0x000194de) postcard_message2_row_pane_t1

0x2fda,	// (0x000194d6) address2_row_pane_g1

0x2fe2,	// (0x000194de) address2_row_pane_t1

0x9074,	// (0x0001f570) aid_size_cell_vorec

0x0ac5,	// (0x00016fc1) main_rss_pane

0xaf90,	// (0x0002148c) rss_list_single_pane_ParamLimits

0xaf90,	// (0x0002148c) rss_list_single_pane

0x2ff0,	// (0x000194ec) rss_list_single_pane_t1

0x2ffe,	// (0x000194fa) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x00025b10) rss_list_single_pane_t

0x0ac5,	// (0x00016fc1) main_camera2_pane

0x0ac5,	// (0x00016fc1) main_video2_pane

0x7982,	// (0x0001de7e) cams_zoom_pane_cp2_ParamLimits

0x7982,	// (0x0001de7e) cams_zoom_pane_cp2

0x798e,	// (0x0001de8a) image2_vga_pane_ParamLimits

0x798e,	// (0x0001de8a) image2_vga_pane

0x799d,	// (0x0001de99) main_camera2_pane_g1_ParamLimits

0x799d,	// (0x0001de99) main_camera2_pane_g1

0x79a9,	// (0x0001dea5) main_camera2_pane_g2_ParamLimits

0x79a9,	// (0x0001dea5) main_camera2_pane_g2

0x79b5,	// (0x0001deb1) main_camera2_pane_g3_ParamLimits

0x79b5,	// (0x0001deb1) main_camera2_pane_g3

0x79c1,	// (0x0001debd) main_camera2_pane_g4_ParamLimits

0x79c1,	// (0x0001debd) main_camera2_pane_g4

0x79cd,	// (0x0001dec9) main_camera2_pane_g5_ParamLimits

0x79cd,	// (0x0001dec9) main_camera2_pane_g5

0x79d9,	// (0x0001ded5) main_camera2_pane_g6_ParamLimits

0x79d9,	// (0x0001ded5) main_camera2_pane_g6

0x79e5,	// (0x0001dee1) main_camera2_pane_g7_ParamLimits

0x79e5,	// (0x0001dee1) main_camera2_pane_g7

0x79f1,	// (0x0001deed) main_camera2_pane_g8_ParamLimits

0x79f1,	// (0x0001deed) main_camera2_pane_g8

0x0008,

0xf635,	// (0x00025b31) main_camera2_pane_g_ParamLimits

0xf635,	// (0x00025b31) main_camera2_pane_g

0x7a09,	// (0x0001df05) main_camera2_pane_t1_ParamLimits

0x7a09,	// (0x0001df05) main_camera2_pane_t1

0x7a1b,	// (0x0001df17) main_camera2_pane_t2_ParamLimits

0x7a1b,	// (0x0001df17) main_camera2_pane_t2

0x7a2d,	// (0x0001df29) main_camera2_pane_t3_ParamLimits

0x7a2d,	// (0x0001df29) main_camera2_pane_t3

0x7a3f,	// (0x0001df3b) main_camera2_pane_t4_ParamLimits

0x7a3f,	// (0x0001df3b) main_camera2_pane_t4

0x0006,

0xf648,	// (0x00025b44) main_camera2_pane_t_ParamLimits

0xf648,	// (0x00025b44) main_camera2_pane_t

0x7a9a,	// (0x0001df96) cams_zoom_pane_cp4_ParamLimits

0x7a9a,	// (0x0001df96) cams_zoom_pane_cp4

0x7aaa,	// (0x0001dfa6) image2_cif_pane_ParamLimits

0x7aaa,	// (0x0001dfa6) image2_cif_pane

0x7abb,	// (0x0001dfb7) image2_subqcif_pane_ParamLimits

0x7abb,	// (0x0001dfb7) image2_subqcif_pane

0x7ac8,	// (0x0001dfc4) main_video2_pane_g1_ParamLimits

0x7ac8,	// (0x0001dfc4) main_video2_pane_g1

0x7ada,	// (0x0001dfd6) main_video2_pane_g2_ParamLimits

0x7ada,	// (0x0001dfd6) main_video2_pane_g2

0x7aea,	// (0x0001dfe6) main_video2_pane_g3_ParamLimits

0x7aea,	// (0x0001dfe6) main_video2_pane_g3

0x7afa,	// (0x0001dff6) main_video2_pane_g4_ParamLimits

0x7afa,	// (0x0001dff6) main_video2_pane_g4

0x7b0a,	// (0x0001e006) main_video2_pane_g5_ParamLimits

0x7b0a,	// (0x0001e006) main_video2_pane_g5

0x7b1a,	// (0x0001e016) main_video2_pane_g6_ParamLimits

0x7b1a,	// (0x0001e016) main_video2_pane_g6

0x0005,

0xf657,	// (0x00025b53) main_video2_pane_g_ParamLimits

0xf657,	// (0x00025b53) main_video2_pane_g

0x7b2c,	// (0x0001e028) main_video2_pane_t1_ParamLimits

0x7b2c,	// (0x0001e028) main_video2_pane_t1

0x7b46,	// (0x0001e042) main_video2_pane_t2_ParamLimits

0x7b46,	// (0x0001e042) main_video2_pane_t2

0x7b6c,	// (0x0001e068) main_video2_pane_t3_ParamLimits

0x7b6c,	// (0x0001e068) main_video2_pane_t3

0x0002,

0xf664,	// (0x00025b60) main_video2_pane_t_ParamLimits

0xf664,	// (0x00025b60) main_video2_pane_t

0xae40,	// (0x0002133c) call_muted_g2

0x0001,

0xf606,	// (0x00025b02) call_muted_g

0x0ac5,	// (0x00016fc1) main_mup2_pane

0x30da,	// (0x000195d6) main_mup2_pane_g1_ParamLimits

0x30da,	// (0x000195d6) main_mup2_pane_g1

0xb135,	// (0x00021631) main_mup2_pane_g2_ParamLimits

0xb135,	// (0x00021631) main_mup2_pane_g2

0x7bbb,	// (0x0001e0b7) main_mup_pane_g13_cp1

0x7bc3,	// (0x0001e0bf) mup_volume_pane_cp1

0xb155,	// (0x00021651) main_mup2_pane_g4_ParamLimits

0xb155,	// (0x00021651) main_mup2_pane_g4

0xb166,	// (0x00021662) main_mup2_pane_g5_ParamLimits

0xb166,	// (0x00021662) main_mup2_pane_g5

0xb177,	// (0x00021673) main_mup2_pane_g6_ParamLimits

0xb177,	// (0x00021673) main_mup2_pane_g6

0xb188,	// (0x00021684) main_mup2_pane_g7_ParamLimits

0xb188,	// (0x00021684) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x00025b67) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x00025b67) main_mup2_pane_g

0xb1a4,	// (0x000216a0) main_mup2_pane_t1_ParamLimits

0xb1a4,	// (0x000216a0) main_mup2_pane_t1

0xb1bb,	// (0x000216b7) main_mup2_pane_t2_ParamLimits

0xb1bb,	// (0x000216b7) main_mup2_pane_t2

0xb1d2,	// (0x000216ce) main_mup2_pane_t3_ParamLimits

0xb1d2,	// (0x000216ce) main_mup2_pane_t3

0xb1e9,	// (0x000216e5) main_mup2_pane_t4_ParamLimits

0xb1e9,	// (0x000216e5) main_mup2_pane_t4

0xb203,	// (0x000216ff) main_mup2_pane_t5_ParamLimits

0xb203,	// (0x000216ff) main_mup2_pane_t5

0xb21d,	// (0x00021719) main_mup2_pane_t6_ParamLimits

0xb21d,	// (0x00021719) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x00025b76) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x00025b76) main_mup2_pane_t

0xb251,	// (0x0002174d) mup2_visualizer_pane_ParamLimits

0xb251,	// (0x0002174d) mup2_visualizer_pane

0xb283,	// (0x0002177f) mup_progress_pane_cp_ParamLimits

0xb283,	// (0x0002177f) mup_progress_pane_cp

0x7ba6,	// (0x0001e0a2) mup_volume_pane_cp_ParamLimits

0x7ba6,	// (0x0001e0a2) mup_volume_pane_cp

0xb29a,	// (0x00021796) mup2_visualizer_pane_g1_ParamLimits

0xb29a,	// (0x00021796) mup2_visualizer_pane_g1

0x30ac,	// (0x000195a8) mup2_visualizer_pane_g2_ParamLimits

0x30ac,	// (0x000195a8) mup2_visualizer_pane_g2

0xb2af,	// (0x000217ab) mup2_visualizer_pane_g3_ParamLimits

0xb2af,	// (0x000217ab) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x00025b83) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x00025b83) mup2_visualizer_pane_g

0xab29,	// (0x00021025) aid_size_cell_fmradio

0x77c1,	// (0x0001dcbd) aid_height_parent_landcape

0x11ef,	// (0x000176eb) wml_content_pane_cp

0x11f7,	// (0x000176f3) wml_tabs_pane

0x1200,	// (0x000176fc) popup_wml_miniature_window

0x1208,	// (0x00017704) scroll_pane_cp021

0x121c,	// (0x00017718) wml_content_pane_comp8

0x0ac5,	// (0x00016fc1) bg_popup_sub_pane_cp05

0x30ca,	// (0x000195c6) popup_wml_miniature_window_g1

0x30d2,	// (0x000195ce) wml_miniature_view_pane

0xb2bb,	// (0x000217b7) aid_size_wml_view

0xb2c3,	// (0x000217bf) wml_miniature_view_pane_g1

0xb2cc,	// (0x000217c8) wml_miniature_view_pane_g2

0xb2d5,	// (0x000217d1) wml_miniature_view_pane_g3

0xb2dd,	// (0x000217d9) wml_miniature_view_pane_g4

0xb2e5,	// (0x000217e1) wml_miniature_view_pane_g5

0xb2ed,	// (0x000217e9) wml_miniature_view_pane_g6

0xb2f5,	// (0x000217f1) wml_miniature_view_pane_g7

0xb2fd,	// (0x000217f9) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x00025b8a) wml_miniature_view_pane_g

0x30da,	// (0x000195d6) background_graphic_ParamLimits

0x30da,	// (0x000195d6) background_graphic

0x30e6,	// (0x000195e2) wml_tabs_2_pane

0x30ef,	// (0x000195eb) wml_tabs_3_pane_ParamLimits

0x30ef,	// (0x000195eb) wml_tabs_3_pane

0x3101,	// (0x000195fd) wml_tabs_4_pane_ParamLimits

0x3101,	// (0x000195fd) wml_tabs_4_pane

0x3117,	// (0x00019613) wml_tabs_5_pane_ParamLimits

0x3117,	// (0x00019613) wml_tabs_5_pane

0x3131,	// (0x0001962d) wml_tabs_pane_g2_ParamLimits

0x3131,	// (0x0001962d) wml_tabs_pane_g2

0x3145,	// (0x00019641) wml_tabs_pane_g3_ParamLimits

0x3145,	// (0x00019641) wml_tabs_pane_g3

0xb305,	// (0x00021801) wml_tabs_2_active_pane_ParamLimits

0xb305,	// (0x00021801) wml_tabs_2_active_pane

0xb315,	// (0x00021811) wml_tabs_2_passive_pane_ParamLimits

0xb315,	// (0x00021811) wml_tabs_2_passive_pane

0xb325,	// (0x00021821) wml_tabs_3_active_pane_cp_ParamLimits

0xb325,	// (0x00021821) wml_tabs_3_active_pane_cp

0xb336,	// (0x00021832) wml_tabs_3_passive_pane_ParamLimits

0xb336,	// (0x00021832) wml_tabs_3_passive_pane

0xb347,	// (0x00021843) wml_tabs_3_passive_pane_cp_ParamLimits

0xb347,	// (0x00021843) wml_tabs_3_passive_pane_cp

0xb358,	// (0x00021854) tabs_4_active_pane

0xb360,	// (0x0002185c) tabs_4_passive_pane

0xb368,	// (0x00021864) tabs_4_passive_pane_cp

0xb370,	// (0x0002186c) tabs_4_passive_pane_cp2

0xad23,	// (0x0002121f) aid_height_text

0xa5b5,	// (0x00020ab1) mup_volume_cont_pane_ParamLimits

0xa5b5,	// (0x00020ab1) mup_volume_cont_pane

0x896c,	// (0x0001ee68) aid_size_cell_pinb

0x8976,	// (0x0001ee72) aid_size_list_pinb

0xb26c,	// (0x00021768) mup2_volume_cont_pane_ParamLimits

0xb26c,	// (0x00021768) mup2_volume_cont_pane

0x7b92,	// (0x0001e08e) mup2_volume_cont_pane_g1_ParamLimits

0x7b92,	// (0x0001e08e) mup2_volume_cont_pane_g1

0x7004,	// (0x0001d500) aid_size_cell_touch_ParamLimits

0x7004,	// (0x0001d500) aid_size_cell_touch

0x726c,	// (0x0001d768) touch_pane_ParamLimits

0x726c,	// (0x0001d768) touch_pane

0x7262,	// (0x0001d75e) main_rss2_pane

0x319b,	// (0x00019697) listscroll_rss2_pane

0x31a4,	// (0x000196a0) rss2_navigation_pane

0x31ac,	// (0x000196a8) list_rss2_pane

0x18e7,	// (0x00017de3) scroll_pane_cp22

0x31b4,	// (0x000196b0) rss2_navigation_pane_g1

0x31bd,	// (0x000196b9) rss2_navigation_pane_g2

0x31c5,	// (0x000196c1) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x00025b9b) rss2_navigation_pane_g

0x31cd,	// (0x000196c9) rss2_navigation_pane_t1

0xb378,	// (0x00021874) rss2_list_single_pane_ParamLimits

0xb378,	// (0x00021874) rss2_list_single_pane

0x31db,	// (0x000196d7) rss2_list_single_pane_t2

0x31e9,	// (0x000196e5) rss2_list_single_pane_t3_ParamLimits

0x31e9,	// (0x000196e5) rss2_list_single_pane_t3

0x3206,	// (0x00019702) rss2_list_single_pane_t4

0x9f68,	// (0x00020464) smil_status_pane_g1

0x77e8,	// (0x0001dce4) main_image2_pane_ParamLimits

0x77e8,	// (0x0001dce4) main_image2_pane

0x79fd,	// (0x0001def9) main_camera2_pane_g9_ParamLimits

0x79fd,	// (0x0001def9) main_camera2_pane_g9

0x7a51,	// (0x0001df4d) main_camera2_pane_t5_ParamLimits

0x7a51,	// (0x0001df4d) main_camera2_pane_t5

0x7a63,	// (0x0001df5f) main_camera2_pane_t6_ParamLimits

0x7a63,	// (0x0001df5f) main_camera2_pane_t6

0xb38e,	// (0x0002188a) main_image2_pane_g1_ParamLimits

0xb38e,	// (0x0002188a) main_image2_pane_g1

0xab17,	// (0x00021013) smil2_video_pane_ParamLimits

0xab17,	// (0x00021013) smil2_video_pane

0x7034,	// (0x0001d530) aid_zoom_text_primary_cp

0x720b,	// (0x0001d707) popup_preview_fixed_window

0x1149,	// (0x00017645) im_reading_pane_g1

0x7959,	// (0x0001de55) cams2_bc_adjust_pane_cp_ParamLimits

0x7959,	// (0x0001de55) cams2_bc_adjust_pane_cp

0x7a8e,	// (0x0001df8a) cams2_bc_adjust_pane_ParamLimits

0x7a8e,	// (0x0001df8a) cams2_bc_adjust_pane

0x48f6,	// (0x0001adf2) cams2_bc_adjust_pane_g1

0x7bcb,	// (0x0001e0c7) cams2_slider_pane

0x7bd4,	// (0x0001e0d0) cams2_slider_pane_g1

0x7bdd,	// (0x0001e0d9) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x00025ba2) cams2_slider_pane_g

0x72d3,	// (0x0001d7cf) calc_display_pane_ParamLimits

0x72ed,	// (0x0001d7e9) calc_paper_pane_ParamLimits

0x7305,	// (0x0001d801) grid_calc_pane_ParamLimits

0x7720,	// (0x0001dc1c) popup_clock_digital_window_t1_ParamLimits

0x1dd9,	// (0x000182d5) main_image_pane_t1

0x72b9,	// (0x0001d7b5) aid_size_cell_calc_ParamLimits

0x72b9,	// (0x0001d7b5) aid_size_cell_calc

0x7819,	// (0x0001dd15) popup_blid_sat_info2_window_ParamLimits

0x7819,	// (0x0001dd15) popup_blid_sat_info2_window

0x3250,	// (0x0001974c) aid_size_cell_blid

0x3258,	// (0x00019754) bg_popup_window_pane_cp07

0x327b,	// (0x00019777) grid_popup_blid_pane

0x3283,	// (0x0001977f) heading_pane_cp05_ParamLimits

0x3283,	// (0x0001977f) heading_pane_cp05

0x334b,	// (0x00019847) cell_popup_blid_pane_ParamLimits

0x334b,	// (0x00019847) cell_popup_blid_pane

0x336b,	// (0x00019867) cell_popup_blid_pane_g1

0x3373,	// (0x0001986f) cell_popup_blid_pane_t1

0xb23a,	// (0x00021736) mup2_indicator_pane_ParamLimits

0xb23a,	// (0x00021736) mup2_indicator_pane

0x1048,	// (0x00017544) mup2_visualizer_osc_pane

0x30b8,	// (0x000195b4) mup2_visualizer_spec_pane_ParamLimits

0x30b8,	// (0x000195b4) mup2_visualizer_spec_pane

0xb39a,	// (0x00021896) mup2_spec_half_pane

0xb3a3,	// (0x0002189f) mup2_spec_half_pane_cp

0xb3ab,	// (0x000218a7) mup2_spec_bar_pane_ParamLimits

0xb3ab,	// (0x000218a7) mup2_spec_bar_pane

0x300c,	// (0x00019508) mup2_spec_bar_pane_g1

0x3016,	// (0x00019512) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x00025b15) mup2_spec_bar_pane_g

0xb3ca,	// (0x000218c6) mup2_osc_middle_pane

0x3028,	// (0x00019524) mup2_visualizer_osc_pane_g1

0x06a0,	// (0x00016b9c) popup_number_entry_window_t1_ParamLimits

0x06b3,	// (0x00016baf) popup_number_entry_window_t2_ParamLimits

0x06c5,	// (0x00016bc1) popup_number_entry_window_t3_ParamLimits

0x06d7,	// (0x00016bd3) popup_number_entry_window_t5_ParamLimits

0x06d7,	// (0x00016bd3) popup_number_entry_window_t5

0xf0ca,	// (0x000255c6) popup_number_entry_window_t_ParamLimits

0x070b,	// (0x00016c07) text_title_cp2_ParamLimits

0x775f,	// (0x0001dc5b) aid_hotspot_pointer_text2_pane

0x77b5,	// (0x0001dcb1) main_viewer_pane_g9_ParamLimits

0x77b5,	// (0x0001dcb1) main_viewer_pane_g9

0x1391,	// (0x0001788d) cale_month_pane_t1_ParamLimits

0x13fc,	// (0x000178f8) bg_cale_pane_ParamLimits

0x1414,	// (0x00017910) list_cale_pane_ParamLimits

0x1425,	// (0x00017921) listscroll_cale_day_pane_t1

0x1437,	// (0x00017933) scroll_pane_cp09_ParamLimits

0xa61d,	// (0x00020b19) main_mup_eq_pane_t1_ParamLimits

0xa61d,	// (0x00020b19) main_mup_eq_pane_t1

0xa633,	// (0x00020b2f) main_mup_eq_pane_t2_ParamLimits

0xa633,	// (0x00020b2f) main_mup_eq_pane_t2

0xa649,	// (0x00020b45) main_mup_eq_pane_t3_ParamLimits

0xa649,	// (0x00020b45) main_mup_eq_pane_t3

0xa65f,	// (0x00020b5b) main_mup_eq_pane_t4_ParamLimits

0xa65f,	// (0x00020b5b) main_mup_eq_pane_t4

0xa675,	// (0x00020b71) main_mup_eq_pane_t5_ParamLimits

0xa675,	// (0x00020b71) main_mup_eq_pane_t5

0xa68b,	// (0x00020b87) main_mup_eq_pane_t6_ParamLimits

0xa68b,	// (0x00020b87) main_mup_eq_pane_t6

0xa69d,	// (0x00020b99) main_mup_eq_pane_t7_ParamLimits

0xa69d,	// (0x00020b99) main_mup_eq_pane_t7

0xa6af,	// (0x00020bab) main_mup_eq_pane_t8_ParamLimits

0xa6af,	// (0x00020bab) main_mup_eq_pane_t8

0xa6c1,	// (0x00020bbd) main_mup_eq_pane_t9_ParamLimits

0xa6c1,	// (0x00020bbd) main_mup_eq_pane_t9

0xa6d7,	// (0x00020bd3) main_mup_eq_pane_t10_ParamLimits

0xa6d7,	// (0x00020bd3) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x00025951) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x00025951) main_mup_eq_pane_t

0xa76a,	// (0x00020c66) mup_equalizer_pane_cp5_ParamLimits

0xa77c,	// (0x00020c78) mup_equalizer_pane_cp6_ParamLimits

0xa78e,	// (0x00020c8a) mup_equalizer_pane_cp7_ParamLimits

0x7262,	// (0x0001d75e) main_gallery_pane

0x3031,	// (0x0001952d) smil2_volume_pane

0x304c,	// (0x00019548) smil_status_volume_pane_g1_ParamLimits

0x3039,	// (0x00019535) smil_status_volume_pane_g2_ParamLimits

0x792b,	// (0x0001de27) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x00025b1a) smil_status_volume_pane_g_ParamLimits

0x3258,	// (0x00019754) bg_popup_window_pane_cp07_ParamLimits

0x3266,	// (0x00019762) blid_firmament_pane

0xb3d3,	// (0x000218cf) aid_size_cell_gallery_ParamLimits

0xb3d3,	// (0x000218cf) aid_size_cell_gallery

0xb3e1,	// (0x000218dd) grid_gallery_pane_ParamLimits

0xb3e1,	// (0x000218dd) grid_gallery_pane

0xb3ed,	// (0x000218e9) cell_gallery_pane_ParamLimits

0xb3ed,	// (0x000218e9) cell_gallery_pane

0x3381,	// (0x0001987d) bg_cell_gallery_focus_pane_ParamLimits

0x3381,	// (0x0001987d) bg_cell_gallery_focus_pane

0x3393,	// (0x0001988f) cell_gallery_pane_g1_ParamLimits

0x3393,	// (0x0001988f) cell_gallery_pane_g1

0xb429,	// (0x00021925) cell_gallery_pane_g2_ParamLimits

0xb429,	// (0x00021925) cell_gallery_pane_g2

0xb436,	// (0x00021932) cell_gallery_pane_g3_ParamLimits

0xb436,	// (0x00021932) cell_gallery_pane_g3

0x339f,	// (0x0001989b) cell_gallery_pane_g4_ParamLimits

0x339f,	// (0x0001989b) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x00025bc8) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x00025bc8) cell_gallery_pane_g

0x33ab,	// (0x000198a7) bg_cell_gallery_focus_pane_g1

0x33b3,	// (0x000198af) bg_cell_gallery_focus_pane_g2

0x33bb,	// (0x000198b7) bg_cell_gallery_focus_pane_g3

0x33c3,	// (0x000198bf) bg_cell_gallery_focus_pane_g4

0x33cb,	// (0x000198c7) bg_cell_gallery_focus_pane_g5

0x33d3,	// (0x000198cf) bg_cell_gallery_focus_pane_g6

0x33db,	// (0x000198d7) bg_cell_gallery_focus_pane_g7

0x33e3,	// (0x000198df) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x00025bd1) bg_cell_gallery_focus_pane_g

0x33eb,	// (0x000198e7) aid_firma_cardinal

0x33ff,	// (0x000198fb) blid_firmament_pane_t1

0x3416,	// (0x00019912) blid_firmament_pane_t2

0x342d,	// (0x00019929) blid_firmament_pane_t3

0x3444,	// (0x00019940) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x00025be2) blid_firmament_pane_t

0x345b,	// (0x00019957) blid_sat_info_pane

0x346b,	// (0x00019967) blid_sat_info_pane_g1

0x346b,	// (0x00019967) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x00025beb) blid_sat_info_pane_g

0x3475,	// (0x00019971) blid_sat_info_pane_t1

0x3483,	// (0x0001997f) smil2_volume_content_pane

0x348c,	// (0x00019988) smil2_volume_pane_g1

0x3494,	// (0x00019990) smil2_volume_content_pane_g1

0x349d,	// (0x00019999) smil2_volume_content_pane_g2

0x34a6,	// (0x000199a2) smil2_volume_content_pane_g3

0x34af,	// (0x000199ab) smil2_volume_content_pane_g4

0x34b8,	// (0x000199b4) smil2_volume_content_pane_g5

0x34c1,	// (0x000199bd) smil2_volume_content_pane_g6

0x34ca,	// (0x000199c6) smil2_volume_content_pane_g7

0x34d3,	// (0x000199cf) smil2_volume_content_pane_g8

0x34dc,	// (0x000199d8) smil2_volume_content_pane_g9

0x34e5,	// (0x000199e1) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x00025bf0) smil2_volume_content_pane_g

0x8ee5,	// (0x0001f3e1) cale_week_day_heading_pane_t1_ParamLimits

0x8f0d,	// (0x0001f409) cale_week_day_heading_pane_t2_ParamLimits

0x8f3a,	// (0x0001f436) cale_week_day_heading_pane_t3_ParamLimits

0x8f67,	// (0x0001f463) cale_week_day_heading_pane_t4_ParamLimits

0x8f94,	// (0x0001f490) cale_week_day_heading_pane_t5_ParamLimits

0x8fc1,	// (0x0001f4bd) cale_week_day_heading_pane_t6_ParamLimits

0x8fee,	// (0x0001f4ea) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000256cd) cale_week_day_heading_pane_t_ParamLimits

0x0ff6,	// (0x000174f2) bg_cale_side_pane_ParamLimits

0x744a,	// (0x0001d946) cale_week_time_pane_t1_ParamLimits

0x748e,	// (0x0001d98a) cale_week_time_pane_t2_ParamLimits

0x74d2,	// (0x0001d9ce) cale_week_time_pane_t3_ParamLimits

0x7516,	// (0x0001da12) cale_week_time_pane_t4_ParamLimits

0x755a,	// (0x0001da56) cale_week_time_pane_t5_ParamLimits

0x759e,	// (0x0001da9a) cale_week_time_pane_t6_ParamLimits

0x75e2,	// (0x0001dade) cale_week_time_pane_t7_ParamLimits

0x7626,	// (0x0001db22) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000256dc) cale_week_time_pane_t_ParamLimits

0x9016,	// (0x0001f512) cell_cale_week_pane_g2_ParamLimits

0x0ff6,	// (0x000174f2) bg_cale_side_pane_cp01_ParamLimits

0x9db1,	// (0x000202ad) cale_month_week_pane_t1_ParamLimits

0x9dca,	// (0x000202c6) cale_month_week_pane_t2_ParamLimits

0x9de3,	// (0x000202df) cale_month_week_pane_t3_ParamLimits

0x9dfc,	// (0x000202f8) cale_month_week_pane_t4_ParamLimits

0x9e15,	// (0x00020311) cale_month_week_pane_t5_ParamLimits

0x9e2e,	// (0x0002032a) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000257b1) cale_month_week_pane_t_ParamLimits

0x7674,	// (0x0001db70) cell_cale_month_pane_g1_ParamLimits

0x7262,	// (0x0001d75e) main_cale_event_viewer_pane

0x0608,	// (0x00016b04) listscroll_cale_event_viewer_pane

0x34ee,	// (0x000199ea) list_cale_ev_pane

0x34f6,	// (0x000199f2) scroll_pane_cp023

0xb443,	// (0x0002193f) field_cale_ev_pane_ParamLimits

0xb443,	// (0x0002193f) field_cale_ev_pane

0x3502,	// (0x000199fe) field_cale_ev_content_pane_ParamLimits

0x3502,	// (0x000199fe) field_cale_ev_content_pane

0x350e,	// (0x00019a0a) field_cale_ev_pane_g1_ParamLimits

0x350e,	// (0x00019a0a) field_cale_ev_pane_g1

0x351a,	// (0x00019a16) field_cale_ev_pane_g2_ParamLimits

0x351a,	// (0x00019a16) field_cale_ev_pane_g2

0x3532,	// (0x00019a2e) field_cale_ev_pane_g3_ParamLimits

0x3532,	// (0x00019a2e) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x00025c05) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x00025c05) field_cale_ev_pane_g

0x354a,	// (0x00019a46) field_cale_ev_pane_t1_ParamLimits

0x354a,	// (0x00019a46) field_cale_ev_pane_t1

0xb45d,	// (0x00021959) field_cale_ev_content_pane_t1_ParamLimits

0xb45d,	// (0x00021959) field_cale_ev_content_pane_t1

0x1c7d,	// (0x00018179) bg_button_pane_cp01

0x8beb,	// (0x0001f0e7) listscroll_cale_week_pane_ParamLimits

0x0fbe,	// (0x000174ba) popup_toolbar_window_cp01

0x0fc7,	// (0x000174c3) listscroll_cale_week_pane_t1_ParamLimits

0x8beb,	// (0x0001f0e7) listscroll_cale_day_pane_ParamLimits

0x0fbe,	// (0x000174ba) popup_toolbar_window_cp02

0x1425,	// (0x00017921) listscroll_cale_day_pane_t1_ParamLimits

0x77d8,	// (0x0001dcd4) main_cale_month_pane_ParamLimits

0x78f0,	// (0x0001ddec) popup_toolbar_window_cp03_ParamLimits

0x78f0,	// (0x0001ddec) popup_toolbar_window_cp03

0xaa3f,	// (0x00020f3b) main_image_pane_g2_ParamLimits

0xaa3f,	// (0x00020f3b) main_image_pane_g2

0xaa4b,	// (0x00020f47) main_image_pane_g3_ParamLimits

0xaa4b,	// (0x00020f47) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000259e3) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000259e3) main_image_pane_g

0x1dd9,	// (0x000182d5) main_image_pane_t1_ParamLimits

0xaa57,	// (0x00020f53) main_image_pane_t2_ParamLimits

0xaa57,	// (0x00020f53) main_image_pane_t2

0xaa69,	// (0x00020f65) main_image_pane_t3_ParamLimits

0xaa69,	// (0x00020f65) main_image_pane_t3

0xaa7b,	// (0x00020f77) main_image_pane_t4_ParamLimits

0xaa7b,	// (0x00020f77) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000259ea) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000259ea) main_image_pane_t

0xaa8d,	// (0x00020f89) popup_image_details_window_cp01

0xaa95,	// (0x00020f91) popup_toobar_trans_pane_cp01_ParamLimits

0xaa95,	// (0x00020f91) popup_toobar_trans_pane_cp01

0x7860,	// (0x0001dd5c) popup_image_details_window_ParamLimits

0x7860,	// (0x0001dd5c) popup_image_details_window

0x786c,	// (0x0001dd68) popup_image_focus_window

0x794d,	// (0x0001de49) camera2_autofocus_pane_ParamLimits

0x794d,	// (0x0001de49) camera2_autofocus_pane

0x0608,	// (0x00016b04) bg_popup_sub_pane_cp06

0x3561,	// (0x00019a5d) popup_image_focus_window_g1

0x3569,	// (0x00019a65) popup_image_focus_window_g2

0x3571,	// (0x00019a6d) popup_image_focus_window_g3

0x3579,	// (0x00019a75) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x00025c0c) popup_image_focus_window_g

0x3581,	// (0x00019a7d) popup_image_focus_window_t1

0x358f,	// (0x00019a8b) popup_image_focus_window_t2

0x359e,	// (0x00019a9a) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x00025c15) popup_image_focus_window_t

0x35ac,	// (0x00019aa8) camera2_autofocus_pane_g1

0x0672,	// (0x00016b6e) bg_tb_trans_pane_cp01

0x35ba,	// (0x00019ab6) popup_image_details_window_g1

0x35cd,	// (0x00019ac9) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x00025c27) popup_image_details_window_g

0x35f6,	// (0x00019af2) popup_image_details_window_t1

0x3608,	// (0x00019b04) popup_image_details_window_t2

0x3621,	// (0x00019b1d) popup_image_details_window_t3

0x3635,	// (0x00019b31) popup_image_details_window_t4

0x3650,	// (0x00019b4c) popup_image_details_window_t5

0x0004,

0xf732,	// (0x00025c2e) popup_image_details_window_t

0x0de5,	// (0x000172e1) bg_calc_paper_pane_ParamLimits

0x7262,	// (0x0001d75e) grid_highlight_pane_cp013

0x7329,	// (0x0001d825) list_calc_pane_ParamLimits

0x733b,	// (0x0001d837) scroll_pane_cp024

0x0e13,	// (0x0001730f) bg_calc_display_pane_ParamLimits

0x7343,	// (0x0001d83f) calc_display_pane_t1_ParamLimits

0x7358,	// (0x0001d854) calc_display_pane_t2_ParamLimits

0x736d,	// (0x0001d869) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0002564d) calc_display_pane_t_ParamLimits

0x73ce,	// (0x0001d8ca) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0002566a) cell_calc_pane_g

0x73d7,	// (0x0001d8d3) cell_calc_pane_t1

0x0e96,	// (0x00017392) grid_highlight_pane_cp02_ParamLimits

0x0eac,	// (0x000173a8) toolbar_button_pane_cp01_ParamLimits

0x0eac,	// (0x000173a8) toolbar_button_pane_cp01

0x1e1e,	// (0x0001831a) temp_image_control_pane_ParamLimits

0x1e1e,	// (0x0001831a) temp_image_control_pane

0x77e8,	// (0x0001dce4) main_mp3_pane

0x366a,	// (0x00019b66) temp_image_control_pane_g1_ParamLimits

0x366a,	// (0x00019b66) temp_image_control_pane_g1

0x3678,	// (0x00019b74) temp_image_control_pane_g2_ParamLimits

0x3678,	// (0x00019b74) temp_image_control_pane_g2

0x368a,	// (0x00019b86) temp_image_control_pane_g3_ParamLimits

0x368a,	// (0x00019b86) temp_image_control_pane_g3

0xb4a6,	// (0x000219a2) temp_image_control_pane_g4_ParamLimits

0xb4a6,	// (0x000219a2) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x00025c39) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x00025c39) temp_image_control_pane_g

0x366a,	// (0x00019b66) main_mp3_pane_g1

0xb4b7,	// (0x000219b3) main_mp3_pane_g2

0x0007,

0xf746,	// (0x00025c42) main_mp3_pane_g

0x36cd,	// (0x00019bc9) main_mp3_pane_t1

0x105a,	// (0x00017556) main_camera_pane_g8_ParamLimits

0x105a,	// (0x00017556) main_camera_pane_g8

0x9288,	// (0x0001f784) main_video_pane_g7_ParamLimits

0x9288,	// (0x0001f784) main_video_pane_g7

0x7a7c,	// (0x0001df78) main_camera2_pane_t7_ParamLimits

0x7a7c,	// (0x0001df78) main_camera2_pane_t7

0x11af,	// (0x000176ab) scroll_pane_cp025_ParamLimits

0x11af,	// (0x000176ab) scroll_pane_cp025

0x11c3,	// (0x000176bf) scroll_pane_cp026_ParamLimits

0x11c3,	// (0x000176bf) scroll_pane_cp026

0x11d2,	// (0x000176ce) wml_content_pane_ParamLimits

0x7262,	// (0x0001d75e) main_touch_calib_pane

0xb54f,	// (0x00021a4b) main_touch_calib_pane_g1

0xb55b,	// (0x00021a57) main_touch_calib_pane_g2

0xb567,	// (0x00021a63) main_touch_calib_pane_g3

0xb573,	// (0x00021a6f) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x00025c60) main_touch_calib_pane_g

0xb57f,	// (0x00021a7b) main_touch_calib_pane_t1

0xb594,	// (0x00021a90) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x00025c69) main_touch_calib_pane_t

0x19b4,	// (0x00017eb0) mup_progress_pane_cp02

0x19e9,	// (0x00017ee5) navi_pane_g1

0x1aa2,	// (0x00017f9e) navi_pane_mp_t3

0x77e8,	// (0x0001dce4) main_mp3_pane_ParamLimits

0xaf22,	// (0x0002141e) navi_pane_ParamLimits

0x366a,	// (0x00019b66) main_mp3_pane_g1_ParamLimits

0xb4b7,	// (0x000219b3) main_mp3_pane_g2_ParamLimits

0xb4c3,	// (0x000219bf) main_mp3_pane_g3_ParamLimits

0xb4c3,	// (0x000219bf) main_mp3_pane_g3

0xb4cf,	// (0x000219cb) main_mp3_pane_g4_ParamLimits

0xb4cf,	// (0x000219cb) main_mp3_pane_g4

0x369a,	// (0x00019b96) main_mp3_pane_g5_ParamLimits

0x369a,	// (0x00019b96) main_mp3_pane_g5

0x36a8,	// (0x00019ba4) main_mp3_pane_g6_ParamLimits

0x36a8,	// (0x00019ba4) main_mp3_pane_g6

0x36b5,	// (0x00019bb1) main_mp3_pane_g7_ParamLimits

0x36b5,	// (0x00019bb1) main_mp3_pane_g7

0x36c1,	// (0x00019bbd) main_mp3_pane_g8_ParamLimits

0x36c1,	// (0x00019bbd) main_mp3_pane_g8

0xf746,	// (0x00025c42) main_mp3_pane_g_ParamLimits

0xb4db,	// (0x000219d7) main_mp3_pane_t2

0xb4e9,	// (0x000219e5) main_mp3_pane_t3

0x36db,	// (0x00019bd7) main_mp3_pane_t4

0x36e9,	// (0x00019be5) main_mp3_pane_t5

0x0005,

0xf757,	// (0x00025c53) main_mp3_pane_t

0x36f7,	// (0x00019bf3) mup_progress_pane_cp01

0x7034,	// (0x0001d530) aid_zoom_text_secondary2

0x34ee,	// (0x000199ea) list_cale_ev2_pane

0x34f6,	// (0x000199f2) scroll_pane_cp023_ParamLimits

0xb5df,	// (0x00021adb) field_cale_ev2_pane_ParamLimits

0xb5df,	// (0x00021adb) field_cale_ev2_pane

0xb5f4,	// (0x00021af0) field_cale_ev2_pane_g1_ParamLimits

0xb5f4,	// (0x00021af0) field_cale_ev2_pane_g1

0xb600,	// (0x00021afc) field_cale_ev2_pane_g2_ParamLimits

0xb600,	// (0x00021afc) field_cale_ev2_pane_g2

0xb618,	// (0x00021b14) field_cale_ev2_pane_g3_ParamLimits

0xb618,	// (0x00021b14) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x00025c74) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x00025c74) field_cale_ev2_pane_g

0xb630,	// (0x00021b2c) field_cale_ev2_pane_t1_ParamLimits

0xb630,	// (0x00021b2c) field_cale_ev2_pane_t1

0xb647,	// (0x00021b43) field_cale_ev2_pane_t2_ParamLimits

0xb647,	// (0x00021b43) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x00025c7d) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x00025c7d) field_cale_ev2_pane_t

0xa93c,	// (0x00020e38) main_postcard_pane_g5_ParamLimits

0xa93c,	// (0x00020e38) main_postcard_pane_g5

0xa948,	// (0x00020e44) main_postcard_pane_g6_ParamLimits

0xa948,	// (0x00020e44) main_postcard_pane_g6

0x90dd,	// (0x0001f5d9) camera2_autofocus_pane_cp_ParamLimits

0x90dd,	// (0x0001f5d9) camera2_autofocus_pane_cp

0x77e8,	// (0x0001dce4) main_mup3_pane

0xb67c,	// (0x00021b78) main_mup3_pane_g1_ParamLimits

0xb67c,	// (0x00021b78) main_mup3_pane_g1

0xb69d,	// (0x00021b99) main_mup3_pane_g2_ParamLimits

0xb69d,	// (0x00021b99) main_mup3_pane_g2

0xb70a,	// (0x00021c06) main_mup3_pane_g3_ParamLimits

0xb70a,	// (0x00021c06) main_mup3_pane_g3

0xb745,	// (0x00021c41) main_mup3_pane_g4_ParamLimits

0xb745,	// (0x00021c41) main_mup3_pane_g4

0xb780,	// (0x00021c7c) main_mup3_pane_g5_ParamLimits

0xb780,	// (0x00021c7c) main_mup3_pane_g5

0xb7bb,	// (0x00021cb7) main_mup3_pane_g6_ParamLimits

0xb7bb,	// (0x00021cb7) main_mup3_pane_g6

0x370b,	// (0x00019c07) main_mup3_pane_g7_ParamLimits

0x370b,	// (0x00019c07) main_mup3_pane_g7

0x0007,

0xf791,	// (0x00025c8d) main_mup3_pane_g_ParamLimits

0xf791,	// (0x00025c8d) main_mup3_pane_g

0xb827,	// (0x00021d23) main_mup3_pane_t1_ParamLimits

0xb827,	// (0x00021d23) main_mup3_pane_t1

0xb888,	// (0x00021d84) main_mup3_pane_t2_ParamLimits

0xb888,	// (0x00021d84) main_mup3_pane_t2

0xb943,	// (0x00021e3f) main_mup3_pane_t4_ParamLimits

0xb943,	// (0x00021e3f) main_mup3_pane_t4

0xb989,	// (0x00021e85) main_mup3_pane_t5_ParamLimits

0xb989,	// (0x00021e85) main_mup3_pane_t5

0xba2d,	// (0x00021f29) main_mup3_pane_t6_ParamLimits

0xba2d,	// (0x00021f29) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x00025c9e) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x00025c9e) main_mup3_pane_t

0xbad5,	// (0x00021fd1) mup3_progress_pane_ParamLimits

0xbad5,	// (0x00021fd1) mup3_progress_pane

0xbb39,	// (0x00022035) popup_mup3_control_window_ParamLimits

0xbb39,	// (0x00022035) popup_mup3_control_window

0x3719,	// (0x00019c15) popup_mup3_text_window

0xbb52,	// (0x0002204e) mup3_progress_pane_t1

0xbb70,	// (0x0002206c) mup3_progress_pane_t2

0x3721,	// (0x00019c1d) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x00025cab) mup3_progress_pane_t

0x373e,	// (0x00019c3a) mup_progress_pane_cp03

0x0608,	// (0x00016b04) bg_tb_trans_pane_cp04

0xbb8e,	// (0x0002208a) mup3_volume_pane

0xbb96,	// (0x00022092) popup_mup3_control_window_g1

0xbb9f,	// (0x0002209b) mup3_volume_pane_g1

0xbba8,	// (0x000220a4) mup3_volume_pane_g2

0xbbb1,	// (0x000220ad) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x00025cb2) mup3_volume_pane_g

0x0608,	// (0x00016b04) bg_tb_trans_pane_cp03

0x374e,	// (0x00019c4a) popup_mup3_text_window_g1

0x3756,	// (0x00019c52) popup_mup3_text_window_t1

0x0e6d,	// (0x00017369) list_calc_item_pane_g1_ParamLimits

0x3182,	// (0x0001967e) mup_volume_pane_cp_g1

0xb5a9,	// (0x00021aa5) main_touch_calib_pane_t3

0xb5bb,	// (0x00021ab7) main_touch_calib_pane_t4

0xb5cd,	// (0x00021ac9) main_touch_calib_pane_t5

0x6ff4,	// (0x0001d4f0) aid_cell_size_toolbar2

0x6ffc,	// (0x0001d4f8) aid_popup3_width_pane

0x7034,	// (0x0001d530) aid_zoom_text_msg_primary

0x90bc,	// (0x0001f5b8) vorec_t7

0x0e31,	// (0x0001732d) bg_calc_paper_pane_g1_ParamLimits

0x0e49,	// (0x00017345) bg_calc_paper_pane_g2_ParamLimits

0x0e3d,	// (0x00017339) bg_calc_paper_pane_g3_ParamLimits

0x0e61,	// (0x0001735d) bg_calc_paper_pane_g4_ParamLimits

0x0e55,	// (0x00017351) bg_calc_paper_pane_g5_ParamLimits

0x8af1,	// (0x0001efed) bg_calc_paper_pane_g6_ParamLimits

0x8b00,	// (0x0001effc) bg_calc_paper_pane_g7_ParamLimits

0x8b0f,	// (0x0001f00b) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x00025654) bg_calc_paper_pane_g_ParamLimits

0x8b1e,	// (0x0001f01a) calc_bg_paper_pane_g9_ParamLimits

0x91bd,	// (0x0001f6b9) image_qvga_pane_ParamLimits

0x91bd,	// (0x0001f6b9) image_qvga_pane

0x0d20,	// (0x0001721c) bg_popup_sub_pane_cp04_ParamLimits

0x1d55,	// (0x00018251) popup_mup_playback_window_g1_ParamLimits

0x1d61,	// (0x0001825d) popup_mup_playback_window_t1_ParamLimits

0x1d76,	// (0x00018272) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000259de) popup_mup_playback_window_t_ParamLimits

0xb146,	// (0x00021642) main_mup2_pane_g3_ParamLimits

0xb146,	// (0x00021642) main_mup2_pane_g3

0x9561,	// (0x0001fa5d) popup_toolbar_window_cp04

0x2133,	// (0x0001862f) popup_call2_audio_second_window_g3_ParamLimits

0x2133,	// (0x0001862f) popup_call2_audio_second_window_g3

0x253d,	// (0x00018a39) popup_call2_audio_first_window_g4_ParamLimits

0x253d,	// (0x00018a39) popup_call2_audio_first_window_g4

0x2bbc,	// (0x000190b8) popup_call2_audio_in_window_g4_ParamLimits

0x2bbc,	// (0x000190b8) popup_call2_audio_in_window_g4

0xaa32,	// (0x00020f2e) aid_area_sk_bg_cut_ParamLimits

0xaa32,	// (0x00020f2e) aid_area_sk_bg_cut

0x1d8b,	// (0x00018287) aid_area_sk_bg_cut_2_ParamLimits

0x1d8b,	// (0x00018287) aid_area_sk_bg_cut_2

0xb419,	// (0x00021915) aid_placing_details_win

0xb421,	// (0x0002191d) aid_placing_details_win_2

0x35ac,	// (0x00019aa8) camera2_autofocus_pane_g1_ParamLimits

0x71fc,	// (0x0001d6f8) popup_fixed_preview_cale_window_ParamLimits

0x71fc,	// (0x0001d6f8) popup_fixed_preview_cale_window

0x1b3b,	// (0x00018037) navi_slider_pane_g3

0x1b32,	// (0x0001802e) navi_slider_pane_g4

0x1b29,	// (0x00018025) navi_slider_pane_g5

0x1b3b,	// (0x00018037) navi_slider_pane_g6

0x7746,	// (0x0001dc42) navi_slider_pane_g7

0x1c4a,	// (0x00018146) mup_scale_pane_g3

0x1c53,	// (0x0001814f) mup_scale_pane_g4

0x1c5c,	// (0x00018158) mup_scale_pane_g5

0xa7a0,	// (0x00020c9c) mup_scale_pane_g6

0xa7a9,	// (0x00020ca5) mup_scale_pane_g7

0x1b3b,	// (0x00018037) cams2_slider_pane_g3

0x3237,	// (0x00019733) cams2_slider_pane_g4

0x7be6,	// (0x0001e0e2) cams2_slider_pane_g5

0x1b3b,	// (0x00018037) cams2_slider_pane_g6

0x7bee,	// (0x0001e0ea) cams2_slider_pane_g7

0x346b,	// (0x00019967) camera2_autofocus_pane_cp_g1

0x2f5d,	// (0x00019459) bg_popup_preview_window_pane_cp02_ParamLimits

0x2f5d,	// (0x00019459) bg_popup_preview_window_pane_cp02

0x3764,	// (0x00019c60) list_fp_cale_pane_ParamLimits

0x3764,	// (0x00019c60) list_fp_cale_pane

0x3770,	// (0x00019c6c) popup_fixed_preview_cale_window_t1_ParamLimits

0x3770,	// (0x00019c6c) popup_fixed_preview_cale_window_t1

0xbbba,	// (0x000220b6) popup_fixed_preview_cale_window_t2_ParamLimits

0xbbba,	// (0x000220b6) popup_fixed_preview_cale_window_t2

0xbbcf,	// (0x000220cb) popup_fixed_preview_cale_window_t3_ParamLimits

0xbbcf,	// (0x000220cb) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x00025cb9) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x00025cb9) popup_fixed_preview_cale_window_t

0xbbe4,	// (0x000220e0) list_single_fp_cale_pane_ParamLimits

0xbbe4,	// (0x000220e0) list_single_fp_cale_pane

0x378e,	// (0x00019c8a) list_single_fp_cale_pane_g1_ParamLimits

0x378e,	// (0x00019c8a) list_single_fp_cale_pane_g1

0x379a,	// (0x00019c96) list_single_fp_cale_pane_g2_ParamLimits

0x379a,	// (0x00019c96) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x00025cc0) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x00025cc0) list_single_fp_cale_pane_g

0x37b3,	// (0x00019caf) list_single_fp_cale_pane_t1_ParamLimits

0x37b3,	// (0x00019caf) list_single_fp_cale_pane_t1

0x37c5,	// (0x00019cc1) list_single_fp_cale_pane_t2_ParamLimits

0x37c5,	// (0x00019cc1) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x00025cc7) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x00025cc7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7262,	// (0x0001d75e) main_dialer_pane

0xbbf1,	// (0x000220ed) aid_cell_size_keypad

0xbbfb,	// (0x000220f7) dialer_ne_pane

0xbc03,	// (0x000220ff) grid_dialer_command_1_pane

0xbc0b,	// (0x00022107) grid_dialer_command_2_pane

0xbc13,	// (0x0002210f) grid_dialer_keypad_pane

0xbc23,	// (0x0002211f) bg_popup_call_pane_cp06_ParamLimits

0xbc23,	// (0x0002211f) bg_popup_call_pane_cp06

0xbc2f,	// (0x0002212b) dialer_ne_clear_pane_ParamLimits

0xbc2f,	// (0x0002212b) dialer_ne_clear_pane

0x37f8,	// (0x00019cf4) dialer_ne_pane_g1

0x3800,	// (0x00019cfc) dialer_ne_pane_t1_ParamLimits

0x3800,	// (0x00019cfc) dialer_ne_pane_t1

0xbc3b,	// (0x00022137) dialer_ne_pane_t2_ParamLimits

0xbc3b,	// (0x00022137) dialer_ne_pane_t2

0xbc58,	// (0x00022154) dialer_ne_pane_t3_ParamLimits

0xbc58,	// (0x00022154) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x00025ccc) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x00025ccc) dialer_ne_pane_t

0xbc7c,	// (0x00022178) dialer_ne_pane_t3_copy1_ParamLimits

0xbc7c,	// (0x00022178) dialer_ne_pane_t3_copy1

0xbca0,	// (0x0002219c) cell_dialer_keypad_pane_ParamLimits

0xbca0,	// (0x0002219c) cell_dialer_keypad_pane

0xbcb5,	// (0x000221b1) cell_dialer_command_1_pane_ParamLimits

0xbcb5,	// (0x000221b1) cell_dialer_command_1_pane

0xbccb,	// (0x000221c7) cell_dialer_command_2_pane_ParamLimits

0xbccb,	// (0x000221c7) cell_dialer_command_2_pane

0x3812,	// (0x00019d0e) bg_button_pane_cp02_ParamLimits

0x3812,	// (0x00019d0e) bg_button_pane_cp02

0xbcda,	// (0x000221d6) cell_dialer_keypad_pane_g1_ParamLimits

0xbcda,	// (0x000221d6) cell_dialer_keypad_pane_g1

0x3812,	// (0x00019d0e) bg_button_pane_cp03_ParamLimits

0x3812,	// (0x00019d0e) bg_button_pane_cp03

0xbcef,	// (0x000221eb) cell_dialer_command_1_pane_g1_ParamLimits

0xbcef,	// (0x000221eb) cell_dialer_command_1_pane_g1

0x381e,	// (0x00019d1a) bg_button_pane_cp04

0xbd02,	// (0x000221fe) cell_dialer_command_2_pane_g1

0x1048,	// (0x00017544) bg_button_pane_cp06

0x3826,	// (0x00019d22) dialer_ne_clear_pane_g1

0x19f5,	// (0x00017ef1) navi_pane_g2

0x1a23,	// (0x00017f1f) navi_pane_g3

0x0002,

0xf3e5,	// (0x000258e1) navi_pane_g

0x1ab0,	// (0x00017fac) navi_pane_mv_g2

0x1ad7,	// (0x00017fd3) navi_pane_mv_g5

0xa38d,	// (0x00020889) navi_pane_mv_t1

0x0e13,	// (0x0001730f) main_clock2_pane

0xbd3e,	// (0x0002223a) main_clock2_list_pane_ParamLimits

0xbd3e,	// (0x0002223a) main_clock2_list_pane

0xbd64,	// (0x00022260) main_clock2_pane_t1_ParamLimits

0xbd64,	// (0x00022260) main_clock2_pane_t1

0xbd84,	// (0x00022280) main_clock2_pane_t2_ParamLimits

0xbd84,	// (0x00022280) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x00025cd8) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x00025cd8) main_clock2_pane_t

0xbddd,	// (0x000222d9) popup_clock_analogue_window_cp03_ParamLimits

0xbddd,	// (0x000222d9) popup_clock_analogue_window_cp03

0xbdfa,	// (0x000222f6) popup_clock_digital_window_cp02_ParamLimits

0xbdfa,	// (0x000222f6) popup_clock_digital_window_cp02

0xbe67,	// (0x00022363) main_clock2_list_single_pane_ParamLimits

0xbe67,	// (0x00022363) main_clock2_list_single_pane

0x1048,	// (0x00017544) list_highlight_pane_cp05

0x385e,	// (0x00019d5a) main_clock2_list_single_pane_t1

0x9561,	// (0x0001fa5d) popup_toolbar_window_cp04_ParamLimits

0xb476,	// (0x00021972) camera2_autofocus_pane_g2_ParamLimits

0xb476,	// (0x00021972) camera2_autofocus_pane_g2

0xb482,	// (0x0002197e) camera2_autofocus_pane_g3_ParamLimits

0xb482,	// (0x0002197e) camera2_autofocus_pane_g3

0xb48e,	// (0x0002198a) camera2_autofocus_pane_g4_ParamLimits

0xb48e,	// (0x0002198a) camera2_autofocus_pane_g4

0xb49a,	// (0x00021996) camera2_autofocus_pane_g5_ParamLimits

0xb49a,	// (0x00021996) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x00025c1c) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x00025c1c) camera2_autofocus_pane_g

0xb65c,	// (0x00021b58) camera2_autofocus_pane_cp_g2

0xb664,	// (0x00021b60) camera2_autofocus_pane_cp_g3

0xb66c,	// (0x00021b68) camera2_autofocus_pane_cp_g4

0xb674,	// (0x00021b70) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x00025c82) camera2_autofocus_pane_cp_g

0xbc1b,	// (0x00022117) popup_dialer_spcha_window

0x0608,	// (0x00016b04) bg_popup_sub_pane_cp07

0x386c,	// (0x00019d68) list_spcha_pane

0x3874,	// (0x00019d70) list_single_spcha_pane_ParamLimits

0x3874,	// (0x00019d70) list_single_spcha_pane

0x0608,	// (0x00016b04) list_highlight_pane_cp06

0x3885,	// (0x00019d81) list_single_spcha_pane_t1

0x2966,	// (0x00018e62) popup_call2_audio_out_window_g4_ParamLimits

0x2966,	// (0x00018e62) popup_call2_audio_out_window_g4

0x7262,	// (0x0001d75e) main_imed2_pane

0x7874,	// (0x0001dd70) popup_imed_adjust2_window

0x7885,	// (0x0001dd81) popup_imed_trans_window_ParamLimits

0x7885,	// (0x0001dd81) popup_imed_trans_window

0x32af,	// (0x000197ab) popup_blid_sat_info2_window_t1

0x32bd,	// (0x000197b9) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x00025bb1) popup_blid_sat_info2_window_t

0xbe79,	// (0x00022375) aid_size_cell_colour_35

0xbe93,	// (0x0002238f) aid_size_cell_colour_112

0xbeaa,	// (0x000223a6) aid_size_cell_effect

0x0672,	// (0x00016b6e) bg_tb_trans_pane_cp02

0x15db,	// (0x00017ad7) heading_imed_pane

0xbec4,	// (0x000223c0) listscroll_imed_pane

0x3893,	// (0x00019d8f) heading_imed_pane_g1

0x389b,	// (0x00019d97) heading_imed_pane_t1

0x38a9,	// (0x00019da5) grid_imed_colour_35_pane_ParamLimits

0x38a9,	// (0x00019da5) grid_imed_colour_35_pane

0xbed0,	// (0x000223cc) grid_imed_effect_pane

0x38bc,	// (0x00019db8) list_imed_aspect_pane

0xbedc,	// (0x000223d8) scroll_pane_cp027_ParamLimits

0xbedc,	// (0x000223d8) scroll_pane_cp027

0xbee8,	// (0x000223e4) cell_imed_effect_pane_ParamLimits

0xbee8,	// (0x000223e4) cell_imed_effect_pane

0x38c4,	// (0x00019dc0) cell_imed_colour_pane_ParamLimits

0x38c4,	// (0x00019dc0) cell_imed_colour_pane

0x38fe,	// (0x00019dfa) cell_imed_colour_pane_g1_ParamLimits

0x38fe,	// (0x00019dfa) cell_imed_colour_pane_g1

0x390f,	// (0x00019e0b) hgihlgiht_grid_pane_cp016_ParamLimits

0x390f,	// (0x00019e0b) hgihlgiht_grid_pane_cp016

0xbefe,	// (0x000223fa) cell_imed_effect_pane_g1

0xbf06,	// (0x00022402) grid_highlight_pane_cp017

0x391f,	// (0x00019e1b) list_imed_single_pane_ParamLimits

0x391f,	// (0x00019e1b) list_imed_single_pane

0x0608,	// (0x00016b04) list_highlight_pane_cp07

0x3932,	// (0x00019e2e) list_imed_aspect_pane_comp1_t1

0x2f69,	// (0x00019465) bg_tb_trans_pane_cp05

0x3952,	// (0x00019e4e) popup_imed_adjust2_window_g1

0x3979,	// (0x00019e75) popup_imed_adjust2_window_t1

0x3991,	// (0x00019e8d) slider_imed_adjust_pane

0x39a5,	// (0x00019ea1) slider_imed_adjust_pane_g1

0x39b5,	// (0x00019eb1) slider_imed_adjust_pane_g2

0x39c5,	// (0x00019ec1) slider_imed_adjust_pane_g3

0x39d6,	// (0x00019ed2) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x00025cf5) slider_imed_adjust_pane_g

0xbf0f,	// (0x0002240b) aid_size_cell_clipart2

0xbf1b,	// (0x00022417) grid_imed_clipart_pane

0x39e7,	// (0x00019ee3) scroll_pane_cp031

0xbf25,	// (0x00022421) cell_imed_clipart_pane_ParamLimits

0xbf25,	// (0x00022421) cell_imed_clipart_pane

0xbf39,	// (0x00022435) cell_imed_clipart_pane_g1

0x0608,	// (0x00016b04) grid_highlight_pane_cp014

0xbd4a,	// (0x00022246) main_clock2_pane_g1_ParamLimits

0xbd4a,	// (0x00022246) main_clock2_pane_g1

0xbe12,	// (0x0002230e) aid_call2_pane_cp10

0xbe24,	// (0x00022320) aid_call_pane_cp10

0x1956,	// (0x00017e52) popup_clock_analogue_window_cp10_g1

0x1956,	// (0x00017e52) popup_clock_analogue_window_cp10_g2

0xbe36,	// (0x00022332) popup_clock_analogue_window_cp10_g3

0xbe36,	// (0x00022332) popup_clock_analogue_window_cp10_g4

0x1956,	// (0x00017e52) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x00025ce3) popup_clock_analogue_window_cp10_g

0xbe48,	// (0x00022344) popup_clock_analogue_window_cp10_t1

0x7bf7,	// (0x0001e0f3) clock_digital_number_pane_cp10_ParamLimits

0x7bf7,	// (0x0001e0f3) clock_digital_number_pane_cp10

0x7c0f,	// (0x0001e10b) clock_digital_number_pane_cp11_ParamLimits

0x7c0f,	// (0x0001e10b) clock_digital_number_pane_cp11

0x7c27,	// (0x0001e123) clock_digital_number_pane_cp12_ParamLimits

0x7c27,	// (0x0001e123) clock_digital_number_pane_cp12

0x7c3f,	// (0x0001e13b) clock_digital_number_pane_cp13_ParamLimits

0x7c3f,	// (0x0001e13b) clock_digital_number_pane_cp13

0x7c57,	// (0x0001e153) clock_digital_separator_pane_cp10_ParamLimits

0x7c57,	// (0x0001e153) clock_digital_separator_pane_cp10

0x7c6f,	// (0x0001e16b) popup_clock_digital_window_cp02_t1_ParamLimits

0x7c6f,	// (0x0001e16b) popup_clock_digital_window_cp02_t1

0x0d18,	// (0x00017214) clock_digital_number_pane_cp10_g1

0x0d18,	// (0x00017214) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x00025cfe) clock_digital_number_pane_cp10_g

0x0d18,	// (0x00017214) clock_digital_separator_pane_cp10_g1

0x0d18,	// (0x00017214) clock_digital_separator_pane_g2_cp10

0x1adf,	// (0x00017fdb) navi_pane_vded_g4

0x1ae8,	// (0x00017fe4) navi_pane_vded_g5

0x1af1,	// (0x00017fed) navi_pane_vded_t1

0x7262,	// (0x0001d75e) main_vded_pane

0xbf42,	// (0x0002243e) main_vded_pane_g1

0xbf4a,	// (0x00022446) main_vded_pane_g2

0xbf52,	// (0x0002244e) main_vded_pane_g3

0x0002,

0xf807,	// (0x00025d03) main_vded_pane_g

0xbf5a,	// (0x00022456) main_vded_pane_t1

0xbf68,	// (0x00022464) main_vded_pane_t2

0x0001,

0xf80e,	// (0x00025d0a) main_vded_pane_t

0xbf76,	// (0x00022472) vded_slider_pane

0xbf7e,	// (0x0002247a) vded_video_pane

0x39ef,	// (0x00019eeb) vded_video_pane_g1

0xbf86,	// (0x00022482) vded_video_pane_g2

0x346b,	// (0x00019967) vded_video_pane_g3

0x0002,

0xf813,	// (0x00025d0f) vded_video_pane_g

0x39f9,	// (0x00019ef5) vded_slider_pane_g1

0x3182,	// (0x0001967e) vded_slider_pane_g2

0x3a02,	// (0x00019efe) vded_slider_pane_g3

0x3a0b,	// (0x00019f07) vded_slider_pane_g4

0x3a14,	// (0x00019f10) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x00025d16) vded_slider_pane_g

0xbb2d,	// (0x00022029) mup3_rocker_pane_ParamLimits

0xbb2d,	// (0x00022029) mup3_rocker_pane

0xbf8f,	// (0x0002248b) mup3_control_keys_pane_g1

0xbf97,	// (0x00022493) mup3_control_keys_pane_g2

0xbf9f,	// (0x0002249b) mup3_control_keys_pane_g3

0xbfa7,	// (0x000224a3) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x00025d21) mup3_control_keys_pane_g

0x7222,	// (0x0001d71e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x7222,	// (0x0001d71e) popup_toolbar2_fixed_window_cp01

0xbb45,	// (0x00022041) popup_toolbar2_fixed_window_cp02_ParamLimits

0xbb45,	// (0x00022041) popup_toolbar2_fixed_window_cp02

0x22a5,	// (0x000187a1) popup_call2_audio_second_window_t4_ParamLimits

0x22a5,	// (0x000187a1) popup_call2_audio_second_window_t4

0x27d3,	// (0x00018ccf) popup_call2_audio_first_window_t6_ParamLimits

0x27d3,	// (0x00018ccf) popup_call2_audio_first_window_t6

0x2a69,	// (0x00018f65) popup_call2_audio_out_window_t6_ParamLimits

0x2a69,	// (0x00018f65) popup_call2_audio_out_window_t6

0x7262,	// (0x0001d75e) main_vitu_pane

0xbfb7,	// (0x000224b3) aid_size_cell_itu_ParamLimits

0xbfb7,	// (0x000224b3) aid_size_cell_itu

0x3d2e,	// (0x0001a22a) bg_popup_window_pane_cp08_ParamLimits

0x3d2e,	// (0x0001a22a) bg_popup_window_pane_cp08

0xbfc5,	// (0x000224c1) field_vitu_entry_pane_ParamLimits

0xbfc5,	// (0x000224c1) field_vitu_entry_pane

0xbfd2,	// (0x000224ce) grid_vitu_function_pane_ParamLimits

0xbfd2,	// (0x000224ce) grid_vitu_function_pane

0xbfde,	// (0x000224da) grid_vitu_itu_pane_ParamLimits

0xbfde,	// (0x000224da) grid_vitu_itu_pane

0xbfea,	// (0x000224e6) cell_vitu_itu_pane_ParamLimits

0xbfea,	// (0x000224e6) cell_vitu_itu_pane

0xbfff,	// (0x000224fb) cell_vitu_function_pane_ParamLimits

0xbfff,	// (0x000224fb) cell_vitu_function_pane

0x0672,	// (0x00016b6e) bg_popup_sub_pane_cp08_ParamLimits

0x0672,	// (0x00016b6e) bg_popup_sub_pane_cp08

0xc011,	// (0x0002250d) field_vitu_entry_pane_t1_ParamLimits

0xc011,	// (0x0002250d) field_vitu_entry_pane_t1

0x3a35,	// (0x00019f31) field_vitu_entry_pane_t2_ParamLimits

0x3a35,	// (0x00019f31) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x00025d2f) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x00025d2f) field_vitu_entry_pane_t

0x3a52,	// (0x00019f4e) bg_button_pane_cp05_ParamLimits

0x3a52,	// (0x00019f4e) bg_button_pane_cp05

0xc02a,	// (0x00022526) cell_vitu_itu_pane_g1

0xc042,	// (0x0002253e) cell_vitu_itu_pane_t1_ParamLimits

0xc042,	// (0x0002253e) cell_vitu_itu_pane_t1

0xc054,	// (0x00022550) cell_vitu_itu_pane_t2_ParamLimits

0xc054,	// (0x00022550) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x00025d34) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x00025d34) cell_vitu_itu_pane_t

0x3a60,	// (0x00019f5c) bg_button_pane_cp07

0xc089,	// (0x00022585) cell_vitu_function_pane_g1

0x7321,	// (0x0001d81d) main_calc_pane_g1

0x702c,	// (0x0001d528) aid_visual_content_pane

0x7262,	// (0x0001d75e) main_vradio_pane

0xc092,	// (0x0002258e) main_vradio_pane_g1_ParamLimits

0xc092,	// (0x0002258e) main_vradio_pane_g1

0x3a6a,	// (0x00019f66) main_vradio_pane_g2_ParamLimits

0x3a6a,	// (0x00019f66) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x00025d3b) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x00025d3b) main_vradio_pane_g

0xc0a0,	// (0x0002259c) main_vradio_pane_t1_ParamLimits

0xc0a0,	// (0x0002259c) main_vradio_pane_t1

0xc0b2,	// (0x000225ae) main_vradio_pane_t2_ParamLimits

0xc0b2,	// (0x000225ae) main_vradio_pane_t2

0x3a77,	// (0x00019f73) main_vradio_pane_t3_ParamLimits

0x3a77,	// (0x00019f73) main_vradio_pane_t3

0x0002,

0xf844,	// (0x00025d40) main_vradio_pane_t_ParamLimits

0xf844,	// (0x00025d40) main_vradio_pane_t

0xc0c4,	// (0x000225c0) vradio_rocker_control_pane_ParamLimits

0xc0c4,	// (0x000225c0) vradio_rocker_control_pane

0xc0d0,	// (0x000225cc) vradio_station_info_pane_ParamLimits

0xc0d0,	// (0x000225cc) vradio_station_info_pane

0x3a89,	// (0x00019f85) vradio_frequency_info_pane_ParamLimits

0x3a89,	// (0x00019f85) vradio_frequency_info_pane

0x346b,	// (0x00019967) vradio_station_info_pane_g1

0x3a98,	// (0x00019f94) vradio_station_info_pane_t1_ParamLimits

0x3a98,	// (0x00019f94) vradio_station_info_pane_t1

0x3aba,	// (0x00019fb6) vradio_station_info_pane_t2_ParamLimits

0x3aba,	// (0x00019fb6) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x00025d47) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x00025d47) vradio_station_info_pane_t

0x3acc,	// (0x00019fc8) vradio_tuning_pane

0x3ad4,	// (0x00019fd0) vradio_rocker_control_pane_g1

0x3adc,	// (0x00019fd8) vradio_rocker_control_pane_g2

0x3ae4,	// (0x00019fe0) vradio_rocker_control_pane_g3

0x3aec,	// (0x00019fe8) vradio_rocker_control_pane_g4

0x3af4,	// (0x00019ff0) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x00025d4c) vradio_rocker_control_pane_g

0xc0dd,	// (0x000225d9) vradio_frequency_info_pane_g1

0x3afc,	// (0x00019ff8) vradio_frequency_info_pane_t1_ParamLimits

0x3afc,	// (0x00019ff8) vradio_frequency_info_pane_t1

0xc0e5,	// (0x000225e1) vradio_tuning_pane_g1

0xc0ee,	// (0x000225ea) vradio_tuning_pane_t1

0x7044,	// (0x0001d540) area_side_right_pane_ParamLimits

0x7044,	// (0x0001d540) area_side_right_pane

0x2f24,	// (0x00019420) status_small_pane_g1

0x2f2c,	// (0x00019428) status_small_pane_g2

0x2f35,	// (0x00019431) status_small_pane_g3

0x2f3e,	// (0x0001943a) status_small_pane_g4

0x0003,

0xf60b,	// (0x00025b07) status_small_pane_g

0x2f47,	// (0x00019443) status_small_pane_t1

0x7262,	// (0x0001d75e) main_video3_pane

0x3b10,	// (0x0001a00c) cams_zoom_vslider_pane

0x3b18,	// (0x0001a014) image3_wide_pane_ParamLimits

0x3b18,	// (0x0001a014) image3_wide_pane

0x3b32,	// (0x0001a02e) image3_wide_small_pane

0x3b3c,	// (0x0001a038) main_video3_pane_g1_ParamLimits

0x3b3c,	// (0x0001a038) main_video3_pane_g1

0x3b58,	// (0x0001a054) main_video3_pane_g2_ParamLimits

0x3b58,	// (0x0001a054) main_video3_pane_g2

0x0001,

0xf85b,	// (0x00025d57) main_video3_pane_g_ParamLimits

0xf85b,	// (0x00025d57) main_video3_pane_g

0x3b74,	// (0x0001a070) main_video3_pane_t1_ParamLimits

0x3b74,	// (0x0001a070) main_video3_pane_t1

0x3b9f,	// (0x0001a09b) main_video3_pane_t2_ParamLimits

0x3b9f,	// (0x0001a09b) main_video3_pane_t2

0x3bca,	// (0x0001a0c6) main_video3_pane_t3_ParamLimits

0x3bca,	// (0x0001a0c6) main_video3_pane_t3

0x0002,

0xf860,	// (0x00025d5c) main_video3_pane_t_ParamLimits

0xf860,	// (0x00025d5c) main_video3_pane_t

0x3bf5,	// (0x0001a0f1) cams_zoom_vslider_pane_g1

0x3bfe,	// (0x0001a0fa) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x00025d63) cams_zoom_vslider_pane_g

0x3c06,	// (0x0001a102) small_slider_vertical_pane

0x346b,	// (0x00019967) small_slider_vertical_pane_g1

0x346b,	// (0x00019967) small_slider_vertical_pane_g2

0x3c0e,	// (0x0001a10a) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x00025d68) small_slider_vertical_pane_g

0x7262,	// (0x0001d75e) main_hwr_training_pane

0x3c17,	// (0x0001a113) hwr_training_instruct_pane_ParamLimits

0x3c17,	// (0x0001a113) hwr_training_instruct_pane

0xc0fd,	// (0x000225f9) hwr_training_navi_pane_ParamLimits

0xc0fd,	// (0x000225f9) hwr_training_navi_pane

0xc111,	// (0x0002260d) hwr_training_write_pane_ParamLimits

0xc111,	// (0x0002260d) hwr_training_write_pane

0x0608,	// (0x00016b04) bg_frame_shadow_pane

0x3c46,	// (0x0001a142) hwr_training_write_pane_g1

0x3c4e,	// (0x0001a14a) hwr_training_write_pane_g2

0x3c56,	// (0x0001a152) hwr_training_write_pane_g3

0x3c5e,	// (0x0001a15a) hwr_training_write_pane_g4

0x3c66,	// (0x0001a162) hwr_training_write_pane_g5

0x3c6e,	// (0x0001a16a) hwr_training_write_pane_g6

0x3c76,	// (0x0001a172) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x00025d6f) hwr_training_write_pane_g

0x7c8f,	// (0x0001e18b) hwr_training_navi_pane_g1_ParamLimits

0x7c8f,	// (0x0001e18b) hwr_training_navi_pane_g1

0x7ca1,	// (0x0001e19d) hwr_training_navi_pane_g2_ParamLimits

0x7ca1,	// (0x0001e19d) hwr_training_navi_pane_g2

0x7cb3,	// (0x0001e1af) hwr_training_navi_pane_g3_ParamLimits

0x7cb3,	// (0x0001e1af) hwr_training_navi_pane_g3

0x7cc3,	// (0x0001e1bf) hwr_training_navi_pane_g4_ParamLimits

0x7cc3,	// (0x0001e1bf) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x00025d7e) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x00025d7e) hwr_training_navi_pane_g

0x7cdd,	// (0x0001e1d9) hwr_training_navi_pane_t1

0xc13f,	// (0x0002263b) list_single_hwr_training_instruct_pane_ParamLimits

0xc13f,	// (0x0002263b) list_single_hwr_training_instruct_pane

0x3ccd,	// (0x0001a1c9) list_single_hwr_training_instruct_pane_t1

0x33ab,	// (0x000198a7) bg_frame_shadow_pane_g1

0x3cdc,	// (0x0001a1d8) bg_frame_shadow_pane_g2

0x3ce4,	// (0x0001a1e0) bg_frame_shadow_pane_g3

0x3cec,	// (0x0001a1e8) bg_frame_shadow_pane_g4

0x3cf4,	// (0x0001a1f0) bg_frame_shadow_pane_g5

0x3cfc,	// (0x0001a1f8) bg_frame_shadow_pane_g6

0x3d04,	// (0x0001a200) bg_frame_shadow_pane_g7

0x0f0c,	// (0x00017408) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x00025d89) bg_frame_shadow_pane_g

0x7262,	// (0x0001d75e) main_video_tele_dialer_pane

0x7ceb,	// (0x0001e1e7) aid_size_cell_video_keypad_ParamLimits

0x7ceb,	// (0x0001e1e7) aid_size_cell_video_keypad

0x7cfb,	// (0x0001e1f7) grid_video_dialer_keypad_pane_ParamLimits

0x7cfb,	// (0x0001e1f7) grid_video_dialer_keypad_pane

0x7d2b,	// (0x0001e227) video_down_pane_cp_ParamLimits

0x7d2b,	// (0x0001e227) video_down_pane_cp

0x7d37,	// (0x0001e233) cell_video_dialer_keypad_pane_ParamLimits

0x7d37,	// (0x0001e233) cell_video_dialer_keypad_pane

0x3d0c,	// (0x0001a208) bg_button_pane_cp08_ParamLimits

0x3d0c,	// (0x0001a208) bg_button_pane_cp08

0xc172,	// (0x0002266e) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc172,	// (0x0002266e) cell_video_dialer_keypad_pane_g1

0xbb21,	// (0x0002201d) mup3_rocker2_pane_ParamLimits

0xbb21,	// (0x0002201d) mup3_rocker2_pane

0x346b,	// (0x00019967) mup3_rocker2_pane_g1

0x77f6,	// (0x0001dcf2) main_dialer2_pane

0x7262,	// (0x0001d75e) main_mp4_pane

0x7d54,	// (0x0001e250) main_mp4_pane_g1_ParamLimits

0x7d54,	// (0x0001e250) main_mp4_pane_g1

0x7d62,	// (0x0001e25e) main_mp4_pane_g2_ParamLimits

0x7d62,	// (0x0001e25e) main_mp4_pane_g2

0x7d70,	// (0x0001e26c) main_mp4_pane_g3_ParamLimits

0x7d70,	// (0x0001e26c) main_mp4_pane_g3

0x7da5,	// (0x0001e2a1) main_mp4_pane_g4_ParamLimits

0x7da5,	// (0x0001e2a1) main_mp4_pane_g4

0x7dcd,	// (0x0001e2c9) main_mp4_pane_g5_ParamLimits

0x7dcd,	// (0x0001e2c9) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x00025da9) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x00025da9) main_mp4_pane_g

0x7e1d,	// (0x0001e319) main_mp4_pane_t1_ParamLimits

0x7e1d,	// (0x0001e319) main_mp4_pane_t1

0x7e75,	// (0x0001e371) main_mp4_pane_t2_ParamLimits

0x7e75,	// (0x0001e371) main_mp4_pane_t2

0x3e5e,	// (0x0001a35a) main_mp4_pane_t3_ParamLimits

0x3e5e,	// (0x0001a35a) main_mp4_pane_t3

0x7ec7,	// (0x0001e3c3) main_mp4_pane_t4_ParamLimits

0x7ec7,	// (0x0001e3c3) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x00025db6) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x00025db6) main_mp4_pane_t

0x7f07,	// (0x0001e403) mp4_progress_pane_ParamLimits

0x7f07,	// (0x0001e403) mp4_progress_pane

0x7f51,	// (0x0001e44d) mp4_rocker_pane_ParamLimits

0x7f51,	// (0x0001e44d) mp4_rocker_pane

0x3f2e,	// (0x0001a42a) mp4_progress_pane_t1

0x3f45,	// (0x0001a441) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x00025dbf) mp4_progress_pane_t

0x3f5c,	// (0x0001a458) mup_progress_pane_cp04

0x4997,	// (0x0001ae93) mp4_rocker_pane_g1

0x7f6f,	// (0x0001e46b) aid_cell_size_keypad2_ParamLimits

0x7f6f,	// (0x0001e46b) aid_cell_size_keypad2

0x7f7f,	// (0x0001e47b) dialer2_ne_pane_ParamLimits

0x7f7f,	// (0x0001e47b) dialer2_ne_pane

0x7f8b,	// (0x0001e487) grid_dialer2_keypad_pane_ParamLimits

0x7f8b,	// (0x0001e487) grid_dialer2_keypad_pane

0x49fe,	// (0x0001aefa) bg_popup_call_pane_cp07_ParamLimits

0x49fe,	// (0x0001aefa) bg_popup_call_pane_cp07

0xc1ad,	// (0x000226a9) dialer2_ne_pane_t1_ParamLimits

0xc1ad,	// (0x000226a9) dialer2_ne_pane_t1

0x7f97,	// (0x0001e493) cell_dialer2_keypad_pane_ParamLimits

0x7f97,	// (0x0001e493) cell_dialer2_keypad_pane

0x3f7a,	// (0x0001a476) bg_button_pane_pane_cp04_ParamLimits

0x3f7a,	// (0x0001a476) bg_button_pane_pane_cp04

0xc1d2,	// (0x000226ce) cell_dialer2_keypad_pane_g1_ParamLimits

0xc1d2,	// (0x000226ce) cell_dialer2_keypad_pane_g1

0x943d,	// (0x0001f939) aid_placing_vt_set_content_ParamLimits

0x943d,	// (0x0001f939) aid_placing_vt_set_content

0x9463,	// (0x0001f95f) aid_placing_vt_set_title_ParamLimits

0x9463,	// (0x0001f95f) aid_placing_vt_set_title

0x7262,	// (0x0001d75e) main_image3_pane

0x7fd4,	// (0x0001e4d0) area_side_right_pane_cp01_ParamLimits

0x7fd4,	// (0x0001e4d0) area_side_right_pane_cp01

0x8001,	// (0x0001e4fd) main_image3_pane_g1_ParamLimits

0x8001,	// (0x0001e4fd) main_image3_pane_g1

0x800f,	// (0x0001e50b) main_image3_pane_g2_ParamLimits

0x800f,	// (0x0001e50b) main_image3_pane_g2

0x8026,	// (0x0001e522) main_image3_pane_g3_ParamLimits

0x8026,	// (0x0001e522) main_image3_pane_g3

0x803d,	// (0x0001e539) main_image3_pane_g4_ParamLimits

0x803d,	// (0x0001e539) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x00025dce) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x00025dce) main_image3_pane_g

0x8054,	// (0x0001e550) main_image3_pane_t1_ParamLimits

0x8054,	// (0x0001e550) main_image3_pane_t1

0x8079,	// (0x0001e575) main_image3_pane_t2_ParamLimits

0x8079,	// (0x0001e575) main_image3_pane_t2

0x8098,	// (0x0001e594) main_image3_pane_t3_ParamLimits

0x8098,	// (0x0001e594) main_image3_pane_t3

0x0003,

0xf8db,	// (0x00025dd7) main_image3_pane_t_ParamLimits

0xf8db,	// (0x00025dd7) main_image3_pane_t

0x3d2e,	// (0x0001a22a) grid_sctrl_middle_pane_cp01_ParamLimits

0x3d2e,	// (0x0001a22a) grid_sctrl_middle_pane_cp01

0xc23a,	// (0x00022736) cell_sctrl_middle_pane_cp01_ParamLimits

0xc23a,	// (0x00022736) cell_sctrl_middle_pane_cp01

0xc24b,	// (0x00022747) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc24b,	// (0x00022747) cell_sctrl_middle_pane_cp01_g1

0x7262,	// (0x0001d75e) main_call4_pane

0xc258,	// (0x00022754) aid_size_button_call4_ParamLimits

0xc258,	// (0x00022754) aid_size_button_call4

0xc286,	// (0x00022782) call4_windows_pane_ParamLimits

0xc286,	// (0x00022782) call4_windows_pane

0xc29e,	// (0x0002279a) grid_call4_button_pane_ParamLimits

0xc29e,	// (0x0002279a) grid_call4_button_pane

0x3fb8,	// (0x0001a4b4) call4_windows_conf_pane

0xc2b8,	// (0x000227b4) popup_call4_audio_first_window_ParamLimits

0xc2b8,	// (0x000227b4) popup_call4_audio_first_window

0xc2d8,	// (0x000227d4) popup_call4_audio_second_window_ParamLimits

0xc2d8,	// (0x000227d4) popup_call4_audio_second_window

0x3feb,	// (0x0001a4e7) popup_call4_audio_wait_window_ParamLimits

0x3feb,	// (0x0001a4e7) popup_call4_audio_wait_window

0xc2ea,	// (0x000227e6) cell_call4_button_pane_ParamLimits

0xc2ea,	// (0x000227e6) cell_call4_button_pane

0xc30d,	// (0x00022809) bg_button_pane_cp09_ParamLimits

0xc30d,	// (0x00022809) bg_button_pane_cp09

0xc319,	// (0x00022815) cell_call4_button_pane_g1_ParamLimits

0xc319,	// (0x00022815) cell_call4_button_pane_g1

0xc326,	// (0x00022822) cell_call4_button_pane_t1_ParamLimits

0xc326,	// (0x00022822) cell_call4_button_pane_t1

0x4031,	// (0x0001a52d) popup_call4_audio_conf_window_ParamLimits

0x4031,	// (0x0001a52d) popup_call4_audio_conf_window

0xbb52,	// (0x0002204e) mup3_progress_pane_t1_ParamLimits

0xbb70,	// (0x0002206c) mup3_progress_pane_t2_ParamLimits

0x3721,	// (0x00019c1d) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x00025cab) mup3_progress_pane_t_ParamLimits

0x373e,	// (0x00019c3a) mup_progress_pane_cp03_ParamLimits

0xbfaf,	// (0x000224ab) mup3_control_keys_pane_g4_copy1

0x7f35,	// (0x0001e431) mp4_rocker2_pane_ParamLimits

0x7f35,	// (0x0001e431) mp4_rocker2_pane

0x404d,	// (0x0001a549) mp4_rocker2_pane_g1

0x4045,	// (0x0001a541) mp4_rocker2_pane_g2

0x80f3,	// (0x0001e5ef) mp4_rocker2_pane_g3

0x80fb,	// (0x0001e5f7) mp4_rocker2_pane_g4

0x8103,	// (0x0001e5ff) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x00025de0) mp4_rocker2_pane_g

0x7262,	// (0x0001d75e) main_camera4_pane

0x7262,	// (0x0001d75e) main_video4_pane

0x7d07,	// (0x0001e203) main_video_tele_dialer_pane_t1_ParamLimits

0x7d07,	// (0x0001e203) main_video_tele_dialer_pane_t1

0x7d19,	// (0x0001e215) main_video_tele_dialer_pane_t2_ParamLimits

0x7d19,	// (0x0001e215) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x00025d9a) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x00025d9a) main_video_tele_dialer_pane_t

0x8121,	// (0x0001e61d) cam4_autofocus_pane_ParamLimits

0x8121,	// (0x0001e61d) cam4_autofocus_pane

0x8137,	// (0x0001e633) cam4_image_uncrop_pane_ParamLimits

0x8137,	// (0x0001e633) cam4_image_uncrop_pane

0x814c,	// (0x0001e648) cam4_indicators_pane_ParamLimits

0x814c,	// (0x0001e648) cam4_indicators_pane

0x8166,	// (0x0001e662) main_camera4_pane_g1_ParamLimits

0x8166,	// (0x0001e662) main_camera4_pane_g1

0x8172,	// (0x0001e66e) main_camera4_pane_g2_ParamLimits

0x8172,	// (0x0001e66e) main_camera4_pane_g2

0x8172,	// (0x0001e66e) main_camera4_pane_g3_ParamLimits

0x8172,	// (0x0001e66e) main_camera4_pane_g3

0x817e,	// (0x0001e67a) main_camera4_pane_g4_ParamLimits

0x817e,	// (0x0001e67a) main_camera4_pane_g4

0x818a,	// (0x0001e686) main_camera4_pane_g5_ParamLimits

0x818a,	// (0x0001e686) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x00025deb) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x00025deb) main_camera4_pane_g

0x81a4,	// (0x0001e6a0) main_camera4_pane_t1_ParamLimits

0x81a4,	// (0x0001e6a0) main_camera4_pane_t1

0x81c8,	// (0x0001e6c4) bg_tb_trans_pane_cp06

0x81de,	// (0x0001e6da) cam4_indicators_pane_g1

0x81ef,	// (0x0001e6eb) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x00025e06) cam4_indicators_pane_g

0x8207,	// (0x0001e703) cam4_indicators_pane_t1

0x822f,	// (0x0001e72b) main_video4_pane_g1_ParamLimits

0x822f,	// (0x0001e72b) main_video4_pane_g1

0x823b,	// (0x0001e737) main_video4_pane_g2_ParamLimits

0x823b,	// (0x0001e737) main_video4_pane_g2

0x8247,	// (0x0001e743) main_video4_pane_g3_ParamLimits

0x8247,	// (0x0001e743) main_video4_pane_g3

0x8253,	// (0x0001e74f) main_video4_pane_g4_ParamLimits

0x8253,	// (0x0001e74f) main_video4_pane_g4

0x0004,

0xf911,	// (0x00025e0d) main_video4_pane_g_ParamLimits

0xf911,	// (0x00025e0d) main_video4_pane_g

0x8273,	// (0x0001e76f) vid4_indicators_pane_ParamLimits

0x8273,	// (0x0001e76f) vid4_indicators_pane

0x8290,	// (0x0001e78c) video4_image_uncrop_cif_pane_ParamLimits

0x8290,	// (0x0001e78c) video4_image_uncrop_cif_pane

0x829d,	// (0x0001e799) video4_image_uncrop_nhd_pane_ParamLimits

0x829d,	// (0x0001e799) video4_image_uncrop_nhd_pane

0x8137,	// (0x0001e633) video4_image_uncrop_vga_pane_ParamLimits

0x8137,	// (0x0001e633) video4_image_uncrop_vga_pane

0x77e8,	// (0x0001dce4) bg_tb_trans_pane_cp07

0x82b2,	// (0x0001e7ae) vid4_indicators_pane_g1

0x82c6,	// (0x0001e7c2) vid4_indicators_pane_g2

0x82da,	// (0x0001e7d6) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x00025e18) vid4_indicators_pane_g

0x8307,	// (0x0001e803) vid4_indicators_pane_t1

0xc35c,	// (0x00022858) cam4_autofocus_pane_g1

0xc364,	// (0x00022860) cam4_autofocus_pane_g2

0xc36c,	// (0x00022868) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x00025e23) cam4_autofocus_pane_g

0xc374,	// (0x00022870) cam4_autofocus_pane_g3_copy1

0xc156,	// (0x00022652) video_down_pane_cp_t1

0xc164,	// (0x00022660) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x00025d9f) video_down_pane_cp_t

0x7254,	// (0x0001d750) popup_vitu2_window_ParamLimits

0x7254,	// (0x0001d750) popup_vitu2_window

0x831e,	// (0x0001e81a) aid_size_cell2_itu2_ParamLimits

0x831e,	// (0x0001e81a) aid_size_cell2_itu2

0x8340,	// (0x0001e83c) aid_size_cell_itu2_ParamLimits

0x8340,	// (0x0001e83c) aid_size_cell_itu2

0x837e,	// (0x0001e87a) bg_popup_window_pane_cp09_ParamLimits

0x837e,	// (0x0001e87a) bg_popup_window_pane_cp09

0x838c,	// (0x0001e888) field_vitu2_entry_pane_ParamLimits

0x838c,	// (0x0001e888) field_vitu2_entry_pane

0x83a0,	// (0x0001e89c) grid_vitu2_function_pane_ParamLimits

0x83a0,	// (0x0001e89c) grid_vitu2_function_pane

0x83ce,	// (0x0001e8ca) grid_vitu2_itu_pane_ParamLimits

0x83ce,	// (0x0001e8ca) grid_vitu2_itu_pane

0x8426,	// (0x0001e922) cell_vitu2_itu_pane_ParamLimits

0x8426,	// (0x0001e922) cell_vitu2_itu_pane

0x843e,	// (0x0001e93a) cell_vitu2_function_pane_ParamLimits

0x843e,	// (0x0001e93a) cell_vitu2_function_pane

0x414e,	// (0x0001a64a) bg_popup_call_pane_cp08_ParamLimits

0x414e,	// (0x0001a64a) bg_popup_call_pane_cp08

0x4165,	// (0x0001a661) field_vitu2_entry_pane_g1

0x4171,	// (0x0001a66d) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x00025e2a) field_vitu2_entry_pane_g

0xc37c,	// (0x00022878) field_vitu2_entry_pane_t1_ParamLimits

0xc37c,	// (0x00022878) field_vitu2_entry_pane_t1

0x418b,	// (0x0001a687) field_vitu2_entry_pane_t2_ParamLimits

0x418b,	// (0x0001a687) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x00025e31) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x00025e31) field_vitu2_entry_pane_t

0x847d,	// (0x0001e979) bg_button_pane_cp010_ParamLimits

0x847d,	// (0x0001e979) bg_button_pane_cp010

0x848b,	// (0x0001e987) cell_vitu2_itu_pane_g1

0x84ab,	// (0x0001e9a7) cell_vitu2_itu_pane_t1_ParamLimits

0x84ab,	// (0x0001e9a7) cell_vitu2_itu_pane_t1

0x84f7,	// (0x0001e9f3) cell_vitu2_itu_pane_t2_ParamLimits

0x84f7,	// (0x0001e9f3) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x00025e3b) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x00025e3b) cell_vitu2_itu_pane_t

0x77e8,	// (0x0001dce4) bg_button_pane_cp011

0x85bf,	// (0x0001eabb) cell_vitu2_function_pane_g1

0x7262,	// (0x0001d75e) main_myfav_hc_pane

0x80d8,	// (0x0001e5d4) popup_image3_note_pane_ParamLimits

0x80d8,	// (0x0001e5d4) popup_image3_note_pane

0x80e4,	// (0x0001e5e0) popup_image3_tool_bar_pane_ParamLimits

0x80e4,	// (0x0001e5e0) popup_image3_tool_bar_pane

0x856d,	// (0x0001ea69) cell_vitu2_itu_pane_t3_ParamLimits

0x856d,	// (0x0001ea69) cell_vitu2_itu_pane_t3

0x0608,	// (0x00016b04) bg_popup_trans_pane

0x41c2,	// (0x0001a6be) grid_image3_tool_bar_pane

0x41cc,	// (0x0001a6c8) bg_popup_trans_pane_g1

0x12b8,	// (0x000177b4) bg_popup_trans_pane_g2

0x41d4,	// (0x0001a6d0) bg_popup_trans_pane_g3

0x41dc,	// (0x0001a6d8) bg_popup_trans_pane_g4

0x41e4,	// (0x0001a6e0) bg_popup_trans_pane_g5

0x41ec,	// (0x0001a6e8) bg_popup_trans_pane_g6

0x41f4,	// (0x0001a6f0) bg_popup_trans_pane_g7

0x41fc,	// (0x0001a6f8) bg_popup_trans_pane_g8

0x1298,	// (0x00017794) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x00025e42) bg_popup_trans_pane_g

0x4204,	// (0x0001a700) cell_image3_tool_bar_pane_ParamLimits

0x4204,	// (0x0001a700) cell_image3_tool_bar_pane

0x346b,	// (0x00019967) cell_image3_tool_bar_pane_g1

0x0608,	// (0x00016b04) bg_popup_trans_pane_cp1

0x4218,	// (0x0001a714) popup_image3_note_pane_t1

0x4226,	// (0x0001a722) popup_image3_note_pane_t2

0x4234,	// (0x0001a730) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x00025e55) popup_image3_note_pane_t

0x4242,	// (0x0001a73e) popup_image3_note_pane_t3_copy1

0xc3aa,	// (0x000228a6) bg_myfav_hc_instruction_pane_ParamLimits

0xc3aa,	// (0x000228a6) bg_myfav_hc_instruction_pane

0xc3bc,	// (0x000228b8) cell_myfav_contact_pane_ParamLimits

0xc3bc,	// (0x000228b8) cell_myfav_contact_pane

0xc3d6,	// (0x000228d2) cell_myfav_contact_pane_cp1_ParamLimits

0xc3d6,	// (0x000228d2) cell_myfav_contact_pane_cp1

0xc3ec,	// (0x000228e8) cell_myfav_contact_pane_cp2_ParamLimits

0xc3ec,	// (0x000228e8) cell_myfav_contact_pane_cp2

0xc402,	// (0x000228fe) cell_myfav_contact_pane_cp3_ParamLimits

0xc402,	// (0x000228fe) cell_myfav_contact_pane_cp3

0xc417,	// (0x00022913) cell_myfav_contact_pane_cp4_ParamLimits

0xc417,	// (0x00022913) cell_myfav_contact_pane_cp4

0xc42b,	// (0x00022927) cell_myfav_contact_pane_cp5_ParamLimits

0xc42b,	// (0x00022927) cell_myfav_contact_pane_cp5

0xc43f,	// (0x0002293b) cell_myfav_contact_pane_cp6_ParamLimits

0xc43f,	// (0x0002293b) cell_myfav_contact_pane_cp6

0xc453,	// (0x0002294f) cell_myfav_contact_pane_cp7_ParamLimits

0xc453,	// (0x0002294f) cell_myfav_contact_pane_cp7

0x4250,	// (0x0001a74c) listscroll_gen_pane_cp05

0xc46b,	// (0x00022967) main_myfav_hc_pane_g1_ParamLimits

0xc46b,	// (0x00022967) main_myfav_hc_pane_g1

0xc481,	// (0x0002297d) main_myfav_hc_pane_g2_ParamLimits

0xc481,	// (0x0002297d) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x00025e5c) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x00025e5c) main_myfav_hc_pane_g

0xc4ab,	// (0x000229a7) main_myfav_hc_pane_t1_ParamLimits

0xc4ab,	// (0x000229a7) main_myfav_hc_pane_t1

0x4259,	// (0x0001a755) main_myfav_hc_pane_t2_ParamLimits

0x4259,	// (0x0001a755) main_myfav_hc_pane_t2

0x426b,	// (0x0001a767) main_myfav_hc_pane_t3_ParamLimits

0x426b,	// (0x0001a767) main_myfav_hc_pane_t3

0xc4c0,	// (0x000229bc) main_myfav_hc_pane_t4_ParamLimits

0xc4c0,	// (0x000229bc) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x00025e63) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x00025e63) main_myfav_hc_pane_t

0x346b,	// (0x00019967) bg_myfav_hc_instruction_pane_g1

0x427d,	// (0x0001a779) cell_myfav_contact_pane_g1_ParamLimits

0x427d,	// (0x0001a779) cell_myfav_contact_pane_g1

0x427d,	// (0x0001a779) cell_myfav_contact_pane_g2_ParamLimits

0x427d,	// (0x0001a779) cell_myfav_contact_pane_g2

0x4289,	// (0x0001a785) cell_myfav_contact_pane_g3_ParamLimits

0x4289,	// (0x0001a785) cell_myfav_contact_pane_g3

0x370b,	// (0x00019c07) cell_myfav_contact_pane_g4_ParamLimits

0x370b,	// (0x00019c07) cell_myfav_contact_pane_g4

0x4296,	// (0x0001a792) cell_myfav_contact_pane_g5_ParamLimits

0x4296,	// (0x0001a792) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x00025e6e) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x00025e6e) cell_myfav_contact_pane_g

0xc497,	// (0x00022993) main_myfav_hc_pane_g3_ParamLimits

0xc497,	// (0x00022993) main_myfav_hc_pane_g3

0x7165,	// (0x0001d661) popup_adpt_find_window

0xc4e4,	// (0x000229e0) afind_page_pane_ParamLimits

0xc4e4,	// (0x000229e0) afind_page_pane

0xc4f1,	// (0x000229ed) aid_size_cell_afind_ParamLimits

0xc4f1,	// (0x000229ed) aid_size_cell_afind

0xc50b,	// (0x00022a07) bg_popup_sub_pane_cp09_ParamLimits

0xc50b,	// (0x00022a07) bg_popup_sub_pane_cp09

0xc518,	// (0x00022a14) find_pane_cp01_ParamLimits

0xc518,	// (0x00022a14) find_pane_cp01

0x42a2,	// (0x0001a79e) grid_afind_control_pane_ParamLimits

0x42a2,	// (0x0001a79e) grid_afind_control_pane

0xc525,	// (0x00022a21) grid_afind_pane_ParamLimits

0xc525,	// (0x00022a21) grid_afind_pane

0xc53d,	// (0x00022a39) cell_afind_pane_ParamLimits

0xc53d,	// (0x00022a39) cell_afind_pane

0x346b,	// (0x00019967) afind_page_pane_g1

0xc573,	// (0x00022a6f) afind_page_pane_g2

0xc57c,	// (0x00022a78) afind_page_pane_g3

0x0002,

0xf97d,	// (0x00025e79) afind_page_pane_g

0xc585,	// (0x00022a81) afind_page_pane_t1

0x42b6,	// (0x0001a7b2) cell_afind_grid_control_pane_ParamLimits

0x42b6,	// (0x0001a7b2) cell_afind_grid_control_pane

0x3f7a,	// (0x0001a476) bg_button_pane_cp69_ParamLimits

0x3f7a,	// (0x0001a476) bg_button_pane_cp69

0xc5a5,	// (0x00022aa1) cell_afind_pane_g1_ParamLimits

0xc5a5,	// (0x00022aa1) cell_afind_pane_g1

0xc5b2,	// (0x00022aae) cell_afind_pane_t1_ParamLimits

0xc5b2,	// (0x00022aae) cell_afind_pane_t1

0x10a4,	// (0x000175a0) bg_button_pane_cp72

0x42c5,	// (0x0001a7c1) cell_afind_grid_control_pane_g1

0xab66,	// (0x00021062) aid_image_placing_area_ParamLimits

0xab66,	// (0x00021062) aid_image_placing_area

0x3a1d,	// (0x00019f19) field_vitu_entry_pane_g1_ParamLimits

0x3a1d,	// (0x00019f19) field_vitu_entry_pane_g1

0x3a29,	// (0x00019f25) field_vitu_entry_pane_g2_ParamLimits

0x3a29,	// (0x00019f25) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x00025d2a) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x00025d2a) field_vitu_entry_pane_g

0xc02a,	// (0x00022526) cell_vitu_itu_pane_g1_ParamLimits

0xc06c,	// (0x00022568) cell_vitu_itu_pane_t3_ParamLimits

0xc06c,	// (0x00022568) cell_vitu_itu_pane_t3

0x3f2e,	// (0x0001a42a) mp4_progress_pane_t1_ParamLimits

0x3f45,	// (0x0001a441) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x00025dbf) mp4_progress_pane_t_ParamLimits

0x3f5c,	// (0x0001a458) mup_progress_pane_cp04_ParamLimits

0xc4d2,	// (0x000229ce) main_myfav_hc_pane_t5_ParamLimits

0xc4d2,	// (0x000229ce) main_myfav_hc_pane_t5

0x703c,	// (0x0001d538) aid_zoom_text_primary

0x7165,	// (0x0001d661) popup_adpt_find_window_ParamLimits

0x77e8,	// (0x0001dce4) main_cam_set_pane

0x815a,	// (0x0001e656) cam4_zoom_pane_ParamLimits

0x815a,	// (0x0001e656) cam4_zoom_pane

0xc5c4,	// (0x00022ac0) main_cam_set_pane_g1_ParamLimits

0xc5c4,	// (0x00022ac0) main_cam_set_pane_g1

0xc5d2,	// (0x00022ace) main_cam_set_pane_g2_ParamLimits

0xc5d2,	// (0x00022ace) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x00025e80) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x00025e80) main_cam_set_pane_g

0xc5de,	// (0x00022ada) main_cam_set_pane_t1_ParamLimits

0xc5de,	// (0x00022ada) main_cam_set_pane_t1

0xc5fa,	// (0x00022af6) main_cset_listscroll_pane_ParamLimits

0xc5fa,	// (0x00022af6) main_cset_listscroll_pane

0xc623,	// (0x00022b1f) main_cset_slider_pane_ParamLimits

0xc623,	// (0x00022b1f) main_cset_slider_pane

0x42d6,	// (0x0001a7d2) main_cset_list_pane_ParamLimits

0x42d6,	// (0x0001a7d2) main_cset_list_pane

0x42e6,	// (0x0001a7e2) scroll_pane_cp028

0xc642,	// (0x00022b3e) aid_area_touch_slider

0x42ef,	// (0x0001a7eb) cset_slider_pane

0xc65e,	// (0x00022b5a) main_cset_slider_pane_g1

0xc673,	// (0x00022b6f) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x00025e85) main_cset_slider_pane_g

0x4361,	// (0x0001a85d) main_cset_slider_pane_t1

0xc717,	// (0x00022c13) main_cset_slider_pane_t2

0xc731,	// (0x00022c2d) main_cset_slider_pane_t3

0xc74b,	// (0x00022c47) main_cset_slider_pane_t4

0xc765,	// (0x00022c61) main_cset_slider_pane_t5

0xc77f,	// (0x00022c7b) main_cset_slider_pane_t6

0xc794,	// (0x00022c90) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x00025eaa) main_cset_slider_pane_t

0xc898,	// (0x00022d94) cset_list_set_pane_ParamLimits

0xc898,	// (0x00022d94) cset_list_set_pane

0xc8a7,	// (0x00022da3) aid_position_infowindow_above

0xc8af,	// (0x00022dab) aid_position_infowindow_below

0xc8b7,	// (0x00022db3) cset_list_set_pane_g1_ParamLimits

0xc8b7,	// (0x00022db3) cset_list_set_pane_g1

0xc8c3,	// (0x00022dbf) cset_list_set_pane_g3_ParamLimits

0xc8c3,	// (0x00022dbf) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x00025ec9) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x00025ec9) cset_list_set_pane_g

0xc8d2,	// (0x00022dce) cset_list_set_pane_t1_ParamLimits

0xc8d2,	// (0x00022dce) cset_list_set_pane_t1

0x0672,	// (0x00016b6e) list_highlight_pane_cp021_ParamLimits

0x0672,	// (0x00016b6e) list_highlight_pane_cp021

0x1c4a,	// (0x00018146) cset_slider_pane_g1

0x1c5c,	// (0x00018158) cset_slider_pane_g2

0x1c53,	// (0x0001814f) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x00025ece) cset_slider_pane_g

0x85d3,	// (0x0001eacf) aid_area_touch_cam4_zoom

0x85db,	// (0x0001ead7) cam4_zoom_cont_pane

0x85e3,	// (0x0001eadf) cam4_zoom_pane_g1

0x85eb,	// (0x0001eae7) cam4_zoom_pane_g2

0x85f3,	// (0x0001eaef) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x00025ed5) cam4_zoom_pane_g

0x85fb,	// (0x0001eaf7) cam4_zoom_cont_pane_g1

0x8604,	// (0x0001eb00) cam4_zoom_cont_pane_g2

0x860d,	// (0x0001eb09) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x00025edc) cam4_zoom_cont_pane_g

0xc272,	// (0x0002276e) call4_image_pane_ParamLimits

0xc272,	// (0x0002276e) call4_image_pane

0x3fb8,	// (0x0001a4b4) call4_windows_conf_pane_ParamLimits

0x3fcb,	// (0x0001a4c7) popup_call4_audio_in_window_ParamLimits

0x3fcb,	// (0x0001a4c7) popup_call4_audio_in_window

0x0608,	// (0x00016b04) bg_popup_call2_act_pane_cp02

0x4029,	// (0x0001a525) call4_list_conf_pane

0x346b,	// (0x00019967) call4_image_pane_g1

0x346b,	// (0x00019967) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x00025beb) call4_image_pane_g

0x443c,	// (0x0001a938) list_single_graphic_popup_conf4_pane_ParamLimits

0x443c,	// (0x0001a938) list_single_graphic_popup_conf4_pane

0x0608,	// (0x00016b04) list_highlight_pane_cp022

0x444f,	// (0x0001a94b) list_single_graphic_popup_conf4_pane_g1

0x185f,	// (0x00017d5b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x00025ee3) list_single_graphic_popup_conf4_pane_g

0x4457,	// (0x0001a953) list_single_graphic_popup_conf4_pane_t1

0x95a7,	// (0x0001faa3) popup_vtel_slider_window_ParamLimits

0x95a7,	// (0x0001faa3) popup_vtel_slider_window

0x3f68,	// (0x0001a464) dialer2_ne_pane_t2_ParamLimits

0x3f68,	// (0x0001a464) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x00025dc4) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x00025dc4) dialer2_ne_pane_t

0x0672,	// (0x00016b6e) bg_popup_sub_pane_cp010_ParamLimits

0x0672,	// (0x00016b6e) bg_popup_sub_pane_cp010

0xc8e7,	// (0x00022de3) popup_vtel_slider_window_g1_ParamLimits

0xc8e7,	// (0x00022de3) popup_vtel_slider_window_g1

0xc8f3,	// (0x00022def) popup_vtel_slider_window_g2_ParamLimits

0xc8f3,	// (0x00022def) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x00025ee8) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x00025ee8) popup_vtel_slider_window_g

0xc939,	// (0x00022e35) vtel_slider_pane_ParamLimits

0xc939,	// (0x00022e35) vtel_slider_pane

0xc948,	// (0x00022e44) vtel_slider_pane_g1_ParamLimits

0xc948,	// (0x00022e44) vtel_slider_pane_g1

0xc955,	// (0x00022e51) vtel_slider_pane_g2_ParamLimits

0xc955,	// (0x00022e51) vtel_slider_pane_g2

0xc962,	// (0x00022e5e) vtel_slider_pane_g3_ParamLimits

0xc962,	// (0x00022e5e) vtel_slider_pane_g3

0xc948,	// (0x00022e44) vtel_slider_pane_g4_ParamLimits

0xc948,	// (0x00022e44) vtel_slider_pane_g4

0xc96f,	// (0x00022e6b) vtel_slider_pane_g5_ParamLimits

0xc96f,	// (0x00022e6b) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x00025ef1) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x00025ef1) vtel_slider_pane_g

0x77e8,	// (0x0001dce4) main_gallery2_pane

0x8366,	// (0x0001e862) aid_size_row_itut2_dropdow_list_ParamLimits

0x8366,	// (0x0001e862) aid_size_row_itut2_dropdow_list

0x83b6,	// (0x0001e8b2) grid_vitu2_function_top_pane_ParamLimits

0x83b6,	// (0x0001e8b2) grid_vitu2_function_top_pane

0x83f2,	// (0x0001e8ee) popup_vitu2_dropdown_list_window_ParamLimits

0x83f2,	// (0x0001e8ee) popup_vitu2_dropdown_list_window

0x840a,	// (0x0001e906) popup_vitu2_match_list_window

0x8616,	// (0x0001eb12) cell_vitu2_function_top_pane_ParamLimits

0x8616,	// (0x0001eb12) cell_vitu2_function_top_pane

0x862e,	// (0x0001eb2a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x862e,	// (0x0001eb2a) cell_vitu2_function_top_pane_cp01

0x864a,	// (0x0001eb46) cell_vitu2_function_top_wide_pane_ParamLimits

0x864a,	// (0x0001eb46) cell_vitu2_function_top_wide_pane

0x77e8,	// (0x0001dce4) bg_button_pane_cp012

0x8666,	// (0x0001eb62) cell_vitu2_function_top_pane_g1

0x867a,	// (0x0001eb76) bg_button_pane_cp013_ParamLimits

0x867a,	// (0x0001eb76) bg_button_pane_cp013

0xc98a,	// (0x00022e86) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc98a,	// (0x00022e86) cell_vitu2_function_top_wide_pane_g1

0x7254,	// (0x0001d750) bg_popup_sub_pane_cp20

0x8696,	// (0x0001eb92) list_vitu2_match_list_pane

0x41cc,	// (0x0001a6c8) bg_popup_sub_pane_cp20_g1

0x41d4,	// (0x0001a6d0) bg_popup_sub_pane_cp20_g2

0x12b8,	// (0x000177b4) bg_popup_sub_pane_cp20_g3

0x41dc,	// (0x0001a6d8) bg_popup_sub_pane_cp20_g4

0x1298,	// (0x00017794) bg_popup_sub_pane_cp20_g5

0x4489,	// (0x0001a985) bg_popup_sub_pane_cp20_g6

0x41ec,	// (0x0001a6e8) bg_popup_sub_pane_cp20_g7

0x41f4,	// (0x0001a6f0) bg_popup_sub_pane_cp20_g8

0x41fc,	// (0x0001a6f8) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x00025efc) bg_popup_sub_pane_cp20_g

0x86ae,	// (0x0001ebaa) list_vitu2_match_list_item_pane_ParamLimits

0x86ae,	// (0x0001ebaa) list_vitu2_match_list_item_pane

0x86c0,	// (0x0001ebbc) list_vitu2_match_list_item_pane_t1

0x7262,	// (0x0001d75e) bg_popup_sub_pane_cp21

0x86ce,	// (0x0001ebca) grid_vitu2_dropdown_list_pane

0x86d6,	// (0x0001ebd2) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x86d6,	// (0x0001ebd2) cell_vitu2_dropdown_list_char_pane

0x86f7,	// (0x0001ebf3) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x86f7,	// (0x0001ebf3) cell_vitu2_dropdown_list_ctrl_pane

0x44c3,	// (0x0001a9bf) cell_vitu2_dropdown_list_char_pane_g1

0x44ba,	// (0x0001a9b6) cell_vitu2_dropdown_list_char_pane_g2

0x44b1,	// (0x0001a9ad) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x00025f19) cell_vitu2_dropdown_list_char_pane_g

0x8723,	// (0x0001ec1f) cell_vitu2_dropdown_list_char_pane_t1

0xc9ea,	// (0x00022ee6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc9ea,	// (0x00022ee6) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc9fa,	// (0x00022ef6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc9fa,	// (0x00022ef6) cell_vitu2_dropdown_list_ctrl_pane_g2

0xca0b,	// (0x00022f07) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xca0b,	// (0x00022f07) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8731,	// (0x0001ec2d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8731,	// (0x0001ec2d) cell_vitu2_dropdown_list_ctrl_pane_g4

0x81c8,	// (0x0001e6c4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x81c8,	// (0x0001e6c4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x00025f20) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x00025f20) cell_vitu2_dropdown_list_ctrl_pane_g

0xca1b,	// (0x00022f17) aid_size_cell_gallery2_ParamLimits

0xca1b,	// (0x00022f17) aid_size_cell_gallery2

0xca35,	// (0x00022f31) grid_gallery2_pane_ParamLimits

0xca35,	// (0x00022f31) grid_gallery2_pane

0xbedc,	// (0x000223d8) scroll_pane_cp029_ParamLimits

0xbedc,	// (0x000223d8) scroll_pane_cp029

0xca46,	// (0x00022f42) cell_gallery2_pane_ParamLimits

0xca46,	// (0x00022f42) cell_gallery2_pane

0x44cc,	// (0x0001a9c8) cell_gallery2_pane_g2

0xca8e,	// (0x00022f8a) cell_gallery2_pane_g3

0x44d4,	// (0x0001a9d0) cell_gallery2_pane_g4

0x44dc,	// (0x0001a9d8) cell_gallery2_pane_g5

0x1048,	// (0x00017544) grid_highlight_pane_cp10

0x840a,	// (0x0001e906) popup_vitu2_match_list_window_ParamLimits

0x841a,	// (0x0001e916) popup_vitu2_query_window_ParamLimits

0x841a,	// (0x0001e916) popup_vitu2_query_window

0x7262,	// (0x0001d75e) bg_vitu2_candi_button_pane

0x44c3,	// (0x0001a9bf) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x44ba,	// (0x0001a9b6) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x44b1,	// (0x0001a9ad) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xca96,	// (0x00022f92) bg_button_pane_cp015

0xcaa6,	// (0x00022fa2) bg_button_pane_cp016

0xcab9,	// (0x00022fb5) bg_button_pane_cp017

0x2f69,	// (0x00019465) bg_popup_sub_pane_cp22

0x44e4,	// (0x0001a9e0) popup_vitu2_query_window_g1

0xcafc,	// (0x00022ff8) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x00025f2b) popup_vitu2_query_window_g

0xcb17,	// (0x00023013) popup_vitu2_query_window_t1_ParamLimits

0xcb17,	// (0x00023013) popup_vitu2_query_window_t1

0xcb4a,	// (0x00023046) popup_vitu2_query_window_t2_ParamLimits

0xcb4a,	// (0x00023046) popup_vitu2_query_window_t2

0xcb5c,	// (0x00023058) popup_vitu2_query_window_t3_ParamLimits

0xcb5c,	// (0x00023058) popup_vitu2_query_window_t3

0xcb84,	// (0x00023080) popup_vitu2_query_window_t4_ParamLimits

0xcb84,	// (0x00023080) popup_vitu2_query_window_t4

0xcba1,	// (0x0002309d) popup_vitu2_query_window_t5_ParamLimits

0xcba1,	// (0x0002309d) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x00025f32) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x00025f32) popup_vitu2_query_window_t

0x42ce,	// (0x0001a7ca) main_cset_text_pane

0xc642,	// (0x00022b3e) aid_area_touch_slider_ParamLimits

0x42ef,	// (0x0001a7eb) cset_slider_pane_ParamLimits

0xc65e,	// (0x00022b5a) main_cset_slider_pane_g1_ParamLimits

0xc673,	// (0x00022b6f) main_cset_slider_pane_g2_ParamLimits

0x4319,	// (0x0001a815) main_cset_slider_pane_g3_ParamLimits

0x4319,	// (0x0001a815) main_cset_slider_pane_g3

0xc688,	// (0x00022b84) main_cset_slider_pane_g4_ParamLimits

0xc688,	// (0x00022b84) main_cset_slider_pane_g4

0xc697,	// (0x00022b93) main_cset_slider_pane_g5_ParamLimits

0xc697,	// (0x00022b93) main_cset_slider_pane_g5

0xc6a3,	// (0x00022b9f) main_cset_slider_pane_g6_ParamLimits

0xc6a3,	// (0x00022b9f) main_cset_slider_pane_g6

0xf989,	// (0x00025e85) main_cset_slider_pane_g_ParamLimits

0x4361,	// (0x0001a85d) main_cset_slider_pane_t1_ParamLimits

0xc717,	// (0x00022c13) main_cset_slider_pane_t2_ParamLimits

0xc731,	// (0x00022c2d) main_cset_slider_pane_t3_ParamLimits

0xc74b,	// (0x00022c47) main_cset_slider_pane_t4_ParamLimits

0xc765,	// (0x00022c61) main_cset_slider_pane_t5_ParamLimits

0xc77f,	// (0x00022c7b) main_cset_slider_pane_t6_ParamLimits

0xc794,	// (0x00022c90) main_cset_slider_pane_t7_ParamLimits

0xc7be,	// (0x00022cba) main_cset_slider_pane_t8_ParamLimits

0xc7be,	// (0x00022cba) main_cset_slider_pane_t8

0xc7e6,	// (0x00022ce2) main_cset_slider_pane_t9_ParamLimits

0xc7e6,	// (0x00022ce2) main_cset_slider_pane_t9

0xc80e,	// (0x00022d0a) main_cset_slider_pane_t10_ParamLimits

0xc80e,	// (0x00022d0a) main_cset_slider_pane_t10

0xc836,	// (0x00022d32) main_cset_slider_pane_t11_ParamLimits

0xc836,	// (0x00022d32) main_cset_slider_pane_t11

0xc85e,	// (0x00022d5a) main_cset_slider_pane_t12_ParamLimits

0xc85e,	// (0x00022d5a) main_cset_slider_pane_t12

0xc87b,	// (0x00022d77) main_cset_slider_pane_t13_ParamLimits

0xc87b,	// (0x00022d77) main_cset_slider_pane_t13

0xf9ae,	// (0x00025eaa) main_cset_slider_pane_t_ParamLimits

0x0608,	// (0x00016b04) bg_popup_sub_pane_cp011

0x44f0,	// (0x0001a9ec) main_cset_text_pane_g1

0x44f8,	// (0x0001a9f4) main_cset_text_pane_t1

0x4506,	// (0x0001aa02) main_cset_text_pane_t2

0x4514,	// (0x0001aa10) main_cset_text_pane_t3

0x4522,	// (0x0001aa1e) main_cset_text_pane_t4

0x4530,	// (0x0001aa2c) main_cset_text_pane_t5

0x453e,	// (0x0001aa3a) main_cset_text_pane_t6

0x454c,	// (0x0001aa48) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x00025f41) main_cset_text_pane_t

0x7262,	// (0x0001d75e) main_cam4_burst_pane

0x7262,	// (0x0001d75e) main_cam5_pane

0xc593,	// (0x00022a8f) bg_button_pane_cp019

0xc59c,	// (0x00022a98) bg_button_pane_cp020

0x4325,	// (0x0001a821) main_cset_slider_pane_g7_ParamLimits

0x4325,	// (0x0001a821) main_cset_slider_pane_g7

0x4331,	// (0x0001a82d) main_cset_slider_pane_g8_ParamLimits

0x4331,	// (0x0001a82d) main_cset_slider_pane_g8

0xc6b7,	// (0x00022bb3) main_cset_slider_pane_g9_ParamLimits

0xc6b7,	// (0x00022bb3) main_cset_slider_pane_g9

0xc6c3,	// (0x00022bbf) main_cset_slider_pane_g10_ParamLimits

0xc6c3,	// (0x00022bbf) main_cset_slider_pane_g10

0xc6cf,	// (0x00022bcb) main_cset_slider_pane_g11_ParamLimits

0xc6cf,	// (0x00022bcb) main_cset_slider_pane_g11

0xc6db,	// (0x00022bd7) main_cset_slider_pane_g12_ParamLimits

0xc6db,	// (0x00022bd7) main_cset_slider_pane_g12

0xc6e7,	// (0x00022be3) main_cset_slider_pane_g13_ParamLimits

0xc6e7,	// (0x00022be3) main_cset_slider_pane_g13

0xc6f3,	// (0x00022bef) main_cset_slider_pane_g14_ParamLimits

0xc6f3,	// (0x00022bef) main_cset_slider_pane_g14

0xc6ff,	// (0x00022bfb) main_cset_slider_pane_g15_ParamLimits

0xc6ff,	// (0x00022bfb) main_cset_slider_pane_g15

0x438f,	// (0x0001a88b) main_cset_slider_pane_t14_ParamLimits

0x438f,	// (0x0001a88b) main_cset_slider_pane_t14

0x43c8,	// (0x0001a8c4) main_cset_slider_pane_t15_ParamLimits

0x43c8,	// (0x0001a8c4) main_cset_slider_pane_t15

0xcc14,	// (0x00023110) aid_cam4_burst_size_cell_ParamLimits

0xcc14,	// (0x00023110) aid_cam4_burst_size_cell

0xcc30,	// (0x0002312c) grid_cam4_burst_pane_ParamLimits

0xcc30,	// (0x0002312c) grid_cam4_burst_pane

0xcc54,	// (0x00023150) linegrid_cam4_burst_pane_ParamLimits

0xcc54,	// (0x00023150) linegrid_cam4_burst_pane

0xcc72,	// (0x0002316e) scroll_pane_cp30_ParamLimits

0xcc72,	// (0x0002316e) scroll_pane_cp30

0xcc7e,	// (0x0002317a) cell_cam4_burst_pane_ParamLimits

0xcc7e,	// (0x0002317a) cell_cam4_burst_pane

0x4566,	// (0x0001aa62) linegrid_cam4_burst_pane_g1_ParamLimits

0x4566,	// (0x0001aa62) linegrid_cam4_burst_pane_g1

0xccb6,	// (0x000231b2) linegrid_cam4_burst_pane_g2_ParamLimits

0xccb6,	// (0x000231b2) linegrid_cam4_burst_pane_g2

0x4573,	// (0x0001aa6f) linegrid_cam4_burst_pane_g3_ParamLimits

0x4573,	// (0x0001aa6f) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x00025f50) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x00025f50) linegrid_cam4_burst_pane_g

0xccc7,	// (0x000231c3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xccc7,	// (0x000231c3) linegrid_cam4_burst_pane_g3_copy1

0x4580,	// (0x0001aa7c) linegrid_cam4_burst_pane_g4_ParamLimits

0x4580,	// (0x0001aa7c) linegrid_cam4_burst_pane_g4

0xcce1,	// (0x000231dd) linegrid_cam4_burst_pane_g5_ParamLimits

0xcce1,	// (0x000231dd) linegrid_cam4_burst_pane_g5

0xccf2,	// (0x000231ee) linegrid_cam4_burst_pane_g6_ParamLimits

0xccf2,	// (0x000231ee) linegrid_cam4_burst_pane_g6

0x458d,	// (0x0001aa89) linegrid_cam4_burst_pane_g7_ParamLimits

0x458d,	// (0x0001aa89) linegrid_cam4_burst_pane_g7

0xcd03,	// (0x000231ff) cell_cam4_burst_pane_g1

0x45a6,	// (0x0001aaa2) main_cam5_pane_t1_ParamLimits

0x45a6,	// (0x0001aaa2) main_cam5_pane_t1

0x45b8,	// (0x0001aab4) main_cam5_pane_t2_ParamLimits

0x45b8,	// (0x0001aab4) main_cam5_pane_t2

0x45ca,	// (0x0001aac6) main_cam5_pane_t3_ParamLimits

0x45ca,	// (0x0001aac6) main_cam5_pane_t3

0x45dc,	// (0x0001aad8) main_cam5_pane_t4_ParamLimits

0x45dc,	// (0x0001aad8) main_cam5_pane_t4

0x45f2,	// (0x0001aaee) main_cam5_pane_t5_ParamLimits

0x45f2,	// (0x0001aaee) main_cam5_pane_t5

0x4604,	// (0x0001ab00) main_cam5_pane_t6_ParamLimits

0x4604,	// (0x0001ab00) main_cam5_pane_t6

0x4616,	// (0x0001ab12) main_cam5_pane_t7_ParamLimits

0x4616,	// (0x0001ab12) main_cam5_pane_t7

0x4628,	// (0x0001ab24) main_cam5_pane_t8_ParamLimits

0x4628,	// (0x0001ab24) main_cam5_pane_t8

0x4644,	// (0x0001ab40) main_cam5_pane_t9_ParamLimits

0x4644,	// (0x0001ab40) main_cam5_pane_t9

0x4656,	// (0x0001ab52) main_cam5_pane_t10_ParamLimits

0x4656,	// (0x0001ab52) main_cam5_pane_t10

0x4668,	// (0x0001ab64) main_cam5_pane_t11_ParamLimits

0x4668,	// (0x0001ab64) main_cam5_pane_t11

0x467a,	// (0x0001ab76) main_cam5_pane_t12_ParamLimits

0x467a,	// (0x0001ab76) main_cam5_pane_t12

0x468f,	// (0x0001ab8b) main_cam5_pane_t13_ParamLimits

0x468f,	// (0x0001ab8b) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x00025f5c) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x00025f5c) main_cam5_pane_t

0x7213,	// (0x0001d70f) popup_scut_keymap_window_ParamLimits

0x7213,	// (0x0001d70f) popup_scut_keymap_window

0xcd16,	// (0x00023212) aid_size_cell_brow_shortcut

0x1048,	// (0x00017544) bg_popup_window_pane_cp010

0xcd22,	// (0x0002321e) grid_scut_pane

0xcd2c,	// (0x00023228) cell_scut_pane_ParamLimits

0xcd2c,	// (0x00023228) cell_scut_pane

0xcd41,	// (0x0002323d) cell_scut_pane_g1

0x46ac,	// (0x0001aba8) cell_scut_pane_t1

0x46bb,	// (0x0001abb7) cell_scut_pane_t2

0xcd4a,	// (0x00023246) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x00025f77) cell_scut_pane_t

0xb7c7,	// (0x00021cc3) main_mup3_pane_g8_ParamLimits

0xb7c7,	// (0x00021cc3) main_mup3_pane_g8

0x8372,	// (0x0001e86e) area_vitu2_query_pane_ParamLimits

0x8372,	// (0x0001e86e) area_vitu2_query_pane

0xcacc,	// (0x00022fc8) input_focus_pane_cp08

0x46ca,	// (0x0001abc6) area_vitu2_query_pane_g1

0xcd58,	// (0x00023254) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x00025f7e) area_vitu2_query_pane_g

0xcd67,	// (0x00023263) area_vitu2_query_pane_t1_ParamLimits

0xcd67,	// (0x00023263) area_vitu2_query_pane_t1

0xcd79,	// (0x00023275) area_vitu2_query_pane_t2_ParamLimits

0xcd79,	// (0x00023275) area_vitu2_query_pane_t2

0xcd8b,	// (0x00023287) area_vitu2_query_pane_t3_ParamLimits

0xcd8b,	// (0x00023287) area_vitu2_query_pane_t3

0x46d6,	// (0x0001abd2) area_vitu2_query_pane_t4_ParamLimits

0x46d6,	// (0x0001abd2) area_vitu2_query_pane_t4

0x46fe,	// (0x0001abfa) area_vitu2_query_pane_t5_ParamLimits

0x46fe,	// (0x0001abfa) area_vitu2_query_pane_t5

0x4726,	// (0x0001ac22) area_vitu2_query_pane_t6_ParamLimits

0x4726,	// (0x0001ac22) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x00025f83) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x00025f83) area_vitu2_query_pane_t

0xcdb3,	// (0x000232af) bg_button_pane_cp018

0xcdc0,	// (0x000232bc) bg_button_pane_cp021

0xcdcc,	// (0x000232c8) bg_button_pane_cp022

0xcddb,	// (0x000232d7) input_focus_pane_cp09

0x1962,	// (0x00017e5e) aid_size_touch_mv_arrow_left

0x198b,	// (0x00017e87) aid_size_touch_mv_arrow_right

0x433d,	// (0x0001a839) main_cset_slider_pane_g16_ParamLimits

0x433d,	// (0x0001a839) main_cset_slider_pane_g16

0x4349,	// (0x0001a845) main_cset_slider_pane_g17_ParamLimits

0x4349,	// (0x0001a845) main_cset_slider_pane_g17

0xcd03,	// (0x000231ff) cell_cam4_burst_pane_g1_ParamLimits

0x0608,	// (0x00016b04) compa_mode_pane

0xc8ff,	// (0x00022dfb) popup_vtel_slider_window_g3_ParamLimits

0xc8ff,	// (0x00022dfb) popup_vtel_slider_window_g3

0xc913,	// (0x00022e0f) popup_vtel_slider_window_g4_ParamLimits

0xc913,	// (0x00022e0f) popup_vtel_slider_window_g4

0xc927,	// (0x00022e23) popup_vtel_slider_window_t1_ParamLimits

0xc927,	// (0x00022e23) popup_vtel_slider_window_t1

0x7262,	// (0x0001d75e) main_cl_pane

0x7874,	// (0x0001dd70) popup_imed_adjust2_window_ParamLimits

0x2f69,	// (0x00019465) bg_tb_trans_pane_cp05_ParamLimits

0x3952,	// (0x00019e4e) popup_imed_adjust2_window_g1_ParamLimits

0x3961,	// (0x00019e5d) popup_imed_adjust2_window_g2_ParamLimits

0x3961,	// (0x00019e5d) popup_imed_adjust2_window_g2

0x396d,	// (0x00019e69) popup_imed_adjust2_window_g3_ParamLimits

0x396d,	// (0x00019e69) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x00025cee) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x00025cee) popup_imed_adjust2_window_g

0x3979,	// (0x00019e75) popup_imed_adjust2_window_t1_ParamLimits

0x3991,	// (0x00019e8d) slider_imed_adjust_pane_ParamLimits

0x39a5,	// (0x00019ea1) slider_imed_adjust_pane_g1_ParamLimits

0x39b5,	// (0x00019eb1) slider_imed_adjust_pane_g2_ParamLimits

0x39c5,	// (0x00019ec1) slider_imed_adjust_pane_g3_ParamLimits

0x39d6,	// (0x00019ed2) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x00025cf5) slider_imed_adjust_pane_g_ParamLimits

0x810b,	// (0x0001e607) aid_touch_area_cam4_ParamLimits

0x810b,	// (0x0001e607) aid_touch_area_cam4

0x8119,	// (0x0001e615) battery_pane_cp01

0x8198,	// (0x0001e694) main_camera4_pane_g6_ParamLimits

0x8198,	// (0x0001e694) main_camera4_pane_g6

0x81b6,	// (0x0001e6b2) main_camera4_pane_t2_ParamLimits

0x81b6,	// (0x0001e6b2) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x00025df8) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x00025df8) main_camera4_pane_t

0x8221,	// (0x0001e71d) aid_touch_area_vid4_ParamLimits

0x8221,	// (0x0001e71d) aid_touch_area_vid4

0x825f,	// (0x0001e75b) main_video4_pane_g5_ParamLimits

0x825f,	// (0x0001e75b) main_video4_pane_g5

0x8281,	// (0x0001e77d) vid4_progress_pane_ParamLimits

0x8281,	// (0x0001e77d) vid4_progress_pane

0x4355,	// (0x0001a851) main_cset_slider_pane_g18_ParamLimits

0x4355,	// (0x0001a851) main_cset_slider_pane_g18

0x459a,	// (0x0001aa96) cell_cam4_burst_pane_g2_ParamLimits

0x459a,	// (0x0001aa96) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x00025f57) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00025f57) cell_cam4_burst_pane_g

0xcdea,	// (0x000232e6) bg_cl_pane_ParamLimits

0xcdea,	// (0x000232e6) bg_cl_pane

0xcdf6,	// (0x000232f2) cl_header_pane_ParamLimits

0xcdf6,	// (0x000232f2) cl_header_pane

0xce02,	// (0x000232fe) cl_listscroll_pane_ParamLimits

0xce02,	// (0x000232fe) cl_listscroll_pane

0x4772,	// (0x0001ac6e) bg_cl_pane_g1

0x477a,	// (0x0001ac76) bg_cl_pane_g2

0x4782,	// (0x0001ac7e) bg_cl_pane_g3

0x478a,	// (0x0001ac86) bg_cl_pane_g4

0x4792,	// (0x0001ac8e) bg_cl_pane_g5

0x479a,	// (0x0001ac96) bg_cl_pane_g6

0x47a2,	// (0x0001ac9e) bg_cl_pane_g7

0x47aa,	// (0x0001aca6) bg_cl_pane_g8

0x47b2,	// (0x0001acae) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x00025f92) bg_cl_pane_g

0xce0e,	// (0x0002330a) aid_height_cl_leading_ParamLimits

0xce0e,	// (0x0002330a) aid_height_cl_leading

0xce1a,	// (0x00023316) aid_height_cl_text_ParamLimits

0xce1a,	// (0x00023316) aid_height_cl_text

0x3d2e,	// (0x0001a22a) bg_cl_header_pane_ParamLimits

0x3d2e,	// (0x0001a22a) bg_cl_header_pane

0xce32,	// (0x0002332e) cl_header_pane_g1_ParamLimits

0xce32,	// (0x0002332e) cl_header_pane_g1

0xce3f,	// (0x0002333b) cl_header_pane_t1_ParamLimits

0xce3f,	// (0x0002333b) cl_header_pane_t1

0x47ba,	// (0x0001acb6) cl_list_pane

0x42e6,	// (0x0001a7e2) hc_scroll_pane_cp01

0x1298,	// (0x00017794) bg_cl_header_pane_g1

0x41cc,	// (0x0001a6c8) bg_cl_header_pane_g2

0x12b8,	// (0x000177b4) bg_cl_header_pane_g3

0x41dc,	// (0x0001a6d8) bg_cl_header_pane_g4

0x41d4,	// (0x0001a6d0) bg_cl_header_pane_g5

0x4489,	// (0x0001a985) bg_cl_header_pane_g6

0x41f4,	// (0x0001a6f0) bg_cl_header_pane_g7

0x41fc,	// (0x0001a6f8) bg_cl_header_pane_g8

0x41ec,	// (0x0001a6e8) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x00025fa5) bg_cl_header_pane_g

0xce51,	// (0x0002334d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xce51,	// (0x0002334d) hc_cl_list_double_graphic_heading_pane

0xce5e,	// (0x0002335a) hc_cl_list_single_graphic_pane_ParamLimits

0xce5e,	// (0x0002335a) hc_cl_list_single_graphic_pane

0xce6f,	// (0x0002336b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xce6f,	// (0x0002336b) hc_cl_list_single_graphic_pane_g1

0xce7b,	// (0x00023377) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xce7b,	// (0x00023377) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x00025fb8) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x00025fb8) hc_cl_list_single_graphic_pane_g

0xce8f,	// (0x0002338b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xce8f,	// (0x0002338b) hc_cl_list_single_graphic_pane_t1

0xce6f,	// (0x0002336b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xce6f,	// (0x0002336b) hc_cl_list_double_graphic_heading_pane_g1

0xcea4,	// (0x000233a0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xcea4,	// (0x000233a0) hc_cl_list_double_graphic_heading_pane_g2

0xceb8,	// (0x000233b4) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xceb8,	// (0x000233b4) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x00025fbd) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x00025fbd) hc_cl_list_double_graphic_heading_pane_g

0xcecc,	// (0x000233c8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xcecc,	// (0x000233c8) hc_cl_list_double_graphic_heading_pane_t1

0xcee1,	// (0x000233dd) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xcee1,	// (0x000233dd) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x00025fc4) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x00025fc4) hc_cl_list_double_graphic_heading_pane_t

0x8752,	// (0x0001ec4e) vid4_progress_pane_g1

0x8762,	// (0x0001ec5e) vid4_progress_pane_g2

0x8772,	// (0x0001ec6e) vid4_progress_pane_g3

0x8782,	// (0x0001ec7e) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x00025fc9) vid4_progress_pane_g

0x87a0,	// (0x0001ec9c) vid4_progress_pane_t1

0x87b6,	// (0x0001ecb2) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x00025fd4) vid4_progress_pane_t

0x87e1,	// (0x0001ecdd) wait_bar_pane_cp07

0x3266,	// (0x00019762) blid_firmament_pane_ParamLimits

0x32a7,	// (0x000197a3) popup_blid_sat_info2_window_g1

0x32cb,	// (0x000197c7) popup_blid_sat_info2_window_t3

0x32d9,	// (0x000197d5) popup_blid_sat_info2_window_t4

0x32e7,	// (0x000197e3) popup_blid_sat_info2_window_t5

0x32f5,	// (0x000197f1) popup_blid_sat_info2_window_t6

0x3305,	// (0x00019801) popup_blid_sat_info2_window_t7

0x3313,	// (0x0001980f) popup_blid_sat_info2_window_t8

0x3321,	// (0x0001981d) popup_blid_sat_info2_window_t9

0x332f,	// (0x0001982b) popup_blid_sat_info2_window_t10

0x33eb,	// (0x000198e7) aid_firma_cardinal_ParamLimits

0x33ff,	// (0x000198fb) blid_firmament_pane_t1_ParamLimits

0x3416,	// (0x00019912) blid_firmament_pane_t2_ParamLimits

0x342d,	// (0x00019929) blid_firmament_pane_t3_ParamLimits

0x3444,	// (0x00019940) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x00025be2) blid_firmament_pane_t_ParamLimits

0x345b,	// (0x00019957) blid_sat_info_pane_ParamLimits

0x77e8,	// (0x0001dce4) main_cam_set_pane_ParamLimits

0xbe79,	// (0x00022375) aid_size_cell_colour_35_ParamLimits

0xbe93,	// (0x0002238f) aid_size_cell_colour_112_ParamLimits

0xbeaa,	// (0x000223a6) aid_size_cell_effect_ParamLimits

0x0672,	// (0x00016b6e) bg_tb_trans_pane_cp02_ParamLimits

0x15db,	// (0x00017ad7) heading_imed_pane_ParamLimits

0xbec4,	// (0x000223c0) listscroll_imed_pane_ParamLimits

0x254f,	// (0x00018a4b) popup_call2_audio_first_window_g5_ParamLimits

0x254f,	// (0x00018a4b) popup_call2_audio_first_window_g5

0x7fac,	// (0x0001e4a8) aid_size_touch_image3_arrow_left_ParamLimits

0x7fac,	// (0x0001e4a8) aid_size_touch_image3_arrow_left

0x7fc0,	// (0x0001e4bc) aid_size_touch_image3_arrow_right_ParamLimits

0x7fc0,	// (0x0001e4bc) aid_size_touch_image3_arrow_right

0x87cb,	// (0x0001ecc7) vid4_progress_pane_t3

0xc125,	// (0x00022621) main_hwr_training_symbol_option_pane_ParamLimits

0xc125,	// (0x00022621) main_hwr_training_symbol_option_pane

0x3c31,	// (0x0001a12d) popup_hwr_training_preview_window_ParamLimits

0x3c31,	// (0x0001a12d) popup_hwr_training_preview_window

0x7cd0,	// (0x0001e1cc) hwr_training_navi_pane_g5_ParamLimits

0x7cd0,	// (0x0001e1cc) hwr_training_navi_pane_g5

0x41a8,	// (0x0001a6a4) popup_char_count_window

0x7254,	// (0x0001d750) bg_popup_sub_pane_cp20_ParamLimits

0x8696,	// (0x0001eb92) list_vitu2_match_list_pane_ParamLimits

0x86a2,	// (0x0001eb9e) vitu2_page_scroll_pane_ParamLimits

0x86a2,	// (0x0001eb9e) vitu2_page_scroll_pane

0x485f,	// (0x0001ad5b) list_single_hwr_training_symbol_option_pane_ParamLimits

0x485f,	// (0x0001ad5b) list_single_hwr_training_symbol_option_pane

0x4872,	// (0x0001ad6e) list_single_hwr_training_symbol_option_pane_g1

0x487a,	// (0x0001ad76) list_single_hwr_training_symbol_option_pane_t1

0x4856,	// (0x0001ad52) bg_button_pane_cp023

0x4888,	// (0x0001ad84) bg_button_pane_cp024

0xcf25,	// (0x00023421) vitu2_page_scroll_pane_g1

0xcf2d,	// (0x00023429) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x00025fdb) vitu2_page_scroll_pane_g

0xcf35,	// (0x00023431) vitu2_page_scroll_pane_t1

0x3494,	// (0x00019990) popup_char_count_window_g1

0x48bb,	// (0x0001adb7) popup_char_count_window_g2

0x48c4,	// (0x0001adc0) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x00025fe0) popup_char_count_window_g

0x48cd,	// (0x0001adc9) popup_char_count_window_t1

0x7262,	// (0x0001d75e) main_vded2_pane

0x3940,	// (0x00019e3c) aid_size_cell_imed_line

0x394a,	// (0x00019e46) grid_imed_line_width_pane

0x82eb,	// (0x0001e7e7) vid4_indicators_pane_g4

0x48db,	// (0x0001add7) cell_imed_line_width_pane_ParamLimits

0x48db,	// (0x0001add7) cell_imed_line_width_pane

0x48ed,	// (0x0001ade9) cell_imed_line_width_pane_g1

0x48f6,	// (0x0001adf2) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x00025fe7) cell_imed_line_width_pane_g

0xcf44,	// (0x00023440) main_vded2_pane_g1_ParamLimits

0xcf44,	// (0x00023440) main_vded2_pane_g1

0xcf51,	// (0x0002344d) main_vded2_pane_g2_ParamLimits

0xcf51,	// (0x0002344d) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x00025fec) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x00025fec) main_vded2_pane_g

0xcf5d,	// (0x00023459) vded2_slider_pane_ParamLimits

0xcf5d,	// (0x00023459) vded2_slider_pane

0xcf6a,	// (0x00023466) aid_size_touch_vded2_end

0xcf72,	// (0x0002346e) aid_size_touch_vded2_playhead

0x48fe,	// (0x0001adfa) aid_size_touch_vded2_start

0x4906,	// (0x0001ae02) vded2_slider_bg_pane

0x490f,	// (0x0001ae0b) vded2_slider_pane_g1

0x4918,	// (0x0001ae14) vded2_slider_pane_g2

0xcf7a,	// (0x00023476) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x00025ff1) vded2_slider_pane_g

0x4920,	// (0x0001ae1c) vded2_slider_bg_pane_g1

0x4929,	// (0x0001ae25) vded2_slider_bg_pane_g2

0x4932,	// (0x0001ae2e) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x00025ff8) vded2_slider_bg_pane_g

0xa8f4,	// (0x00020df0) aid_postcard_touch_down_pane_ParamLimits

0xa8f4,	// (0x00020df0) aid_postcard_touch_down_pane

0xa900,	// (0x00020dfc) aid_postcard_touch_up_pane_ParamLimits

0xa900,	// (0x00020dfc) aid_postcard_touch_up_pane

0x7262,	// (0x0001d75e) main_blid2_pane

0x7811,	// (0x0001dd0d) popup_blid2_search_window

0x0608,	// (0x00016b04) blid2_gps_pane

0x0608,	// (0x00016b04) blid2_navig_pane

0x0608,	// (0x00016b04) blid2_search_pane

0x0608,	// (0x00016b04) blid2_tripm_pane

0xcf83,	// (0x0002347f) blid2_search_pane_g1_ParamLimits

0xcf83,	// (0x0002347f) blid2_search_pane_g1

0xcf8f,	// (0x0002348b) blid2_search_pane_t1_ParamLimits

0xcf8f,	// (0x0002348b) blid2_search_pane_t1

0xcfa1,	// (0x0002349d) aid_size_cell_blid2_gps_ParamLimits

0xcfa1,	// (0x0002349d) aid_size_cell_blid2_gps

0xcfb1,	// (0x000234ad) blid2_gps_pane_g1_ParamLimits

0xcfb1,	// (0x000234ad) blid2_gps_pane_g1

0xcfbd,	// (0x000234b9) grid_blid2_satellite_pane_ParamLimits

0xcfbd,	// (0x000234b9) grid_blid2_satellite_pane

0xcfc9,	// (0x000234c5) blid2_navig_pane_g1_ParamLimits

0xcfc9,	// (0x000234c5) blid2_navig_pane_g1

0xcfd5,	// (0x000234d1) blid2_navig_pane_t1_ParamLimits

0xcfd5,	// (0x000234d1) blid2_navig_pane_t1

0xcfe7,	// (0x000234e3) blid2_navig_pane_t2_ParamLimits

0xcfe7,	// (0x000234e3) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x00025fff) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x00025fff) blid2_navig_pane_t

0xcff9,	// (0x000234f5) blid2_navig_ring_pane_ParamLimits

0xcff9,	// (0x000234f5) blid2_navig_ring_pane

0xd005,	// (0x00023501) blid2_speed_pane_ParamLimits

0xd005,	// (0x00023501) blid2_speed_pane

0xd011,	// (0x0002350d) blid2_tripm_pane_g1_ParamLimits

0xd011,	// (0x0002350d) blid2_tripm_pane_g1

0xd01d,	// (0x00023519) blid2_tripm_pane_g2_ParamLimits

0xd01d,	// (0x00023519) blid2_tripm_pane_g2

0xd029,	// (0x00023525) blid2_tripm_pane_g3_ParamLimits

0xd029,	// (0x00023525) blid2_tripm_pane_g3

0xd035,	// (0x00023531) blid2_tripm_pane_g4_ParamLimits

0xd035,	// (0x00023531) blid2_tripm_pane_g4

0xd041,	// (0x0002353d) blid2_tripm_pane_g5_ParamLimits

0xd041,	// (0x0002353d) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x00026004) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x00026004) blid2_tripm_pane_g

0xd059,	// (0x00023555) blid2_tripm_pane_t1_ParamLimits

0xd059,	// (0x00023555) blid2_tripm_pane_t1

0xd06b,	// (0x00023567) blid2_tripm_pane_t2_ParamLimits

0xd06b,	// (0x00023567) blid2_tripm_pane_t2

0xd07d,	// (0x00023579) blid2_tripm_pane_t3_ParamLimits

0xd07d,	// (0x00023579) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x00026011) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x00026011) blid2_tripm_pane_t

0xd0ad,	// (0x000235a9) cell_blid2_satellite_pane_ParamLimits

0xd0ad,	// (0x000235a9) cell_blid2_satellite_pane

0xd0c5,	// (0x000235c1) cell_blid2_satellite_pane_g1

0x493b,	// (0x0001ae37) cell_blid2_satellite_pane_t1

0x346b,	// (0x00019967) blid2_speed_pane_g1

0x4949,	// (0x0001ae45) blid2_speed_pane_t1

0x4957,	// (0x0001ae53) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0002601a) blid2_speed_pane_t

0x346b,	// (0x00019967) blid2_navig_ring_pane_g1

0xd0ce,	// (0x000235ca) blid2_navig_ring_pane_g2

0xd0d6,	// (0x000235d2) blid2_navig_ring_pane_g3

0xd0de,	// (0x000235da) blid2_navig_ring_pane_g4

0xd0e6,	// (0x000235e2) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0002601f) blid2_navig_ring_pane_g

0x0608,	// (0x00016b04) bg_popup_window_pane_cp011

0x4965,	// (0x0001ae61) popup_blid2_search_window_g1

0x496d,	// (0x0001ae69) popup_blid2_search_window_t1

0x497b,	// (0x0001ae77) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0002602a) popup_blid2_search_window_t

0x11a7,	// (0x000176a3) main_browser_pane_g1

0x0e13,	// (0x0001730f) main_browser_pane_ParamLimits

0x77e8,	// (0x0001dce4) bg_button_pane_cp011_ParamLimits

0x85bf,	// (0x0001eabb) cell_vitu2_function_pane_g1_ParamLimits

0x2f69,	// (0x00019465) bg_popup_sub_pane_cp22_ParamLimits

0xcacc,	// (0x00022fc8) input_focus_pane_cp08_ParamLimits

0xcae3,	// (0x00022fdf) popup_vitu2_query_button_pane_ParamLimits

0xcae3,	// (0x00022fdf) popup_vitu2_query_button_pane

0xcaf4,	// (0x00022ff0) popup_vitu2_query_input_button_pane

0x44e4,	// (0x0001a9e0) popup_vitu2_query_window_g1_ParamLimits

0xcafc,	// (0x00022ff8) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x00025f2b) popup_vitu2_query_window_g_ParamLimits

0x0608,	// (0x00016b04) bg_button_pane_cp026

0xd0ee,	// (0x000235ea) popup_vitu2_query_input_button_pane_g1

0x0608,	// (0x00016b04) bg_button_pane_cp025

0x4989,	// (0x0001ae85) popup_vitu2_query_button_pane_t1

0xb4f7,	// (0x000219f3) main_mp3_pane_t6

0xb505,	// (0x00021a01) popup_slider_window_cp01

0x81d6,	// (0x0001e6d2) cam4_battery_pane

0x82aa,	// (0x0001e7a6) cam4_battery_pane_cp02

0x874a,	// (0x0001ec46) cam4_battery_pane_cp01

0x874a,	// (0x0001ec46) cam4_battery_pane_cp03

0x4997,	// (0x0001ae93) cam4_battery_pane_g1

0x346b,	// (0x00019967) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0002602f) cam4_battery_pane_g

0x333d,	// (0x00019839) popup_blid_sat_info2_window_t11

0x1962,	// (0x00017e5e) aid_size_touch_mv_arrow_left_ParamLimits

0x198b,	// (0x00017e87) aid_size_touch_mv_arrow_right_ParamLimits

0x19e9,	// (0x00017ee5) navi_pane_g1_ParamLimits

0x19f5,	// (0x00017ef1) navi_pane_g2_ParamLimits

0x1a23,	// (0x00017f1f) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000258e1) navi_pane_g_ParamLimits

0xa38d,	// (0x00020889) navi_pane_mv_t1_ParamLimits

0xbed0,	// (0x000223cc) grid_imed_effect_pane_ParamLimits

0x9483,	// (0x0001f97f) aid_placing_vt_slider_lsc

0x10e9,	// (0x000175e5) aid_placing_vt_slider_prt

0x0672,	// (0x00016b6e) bg_tb_trans_pane_cp01_ParamLimits

0x35ba,	// (0x00019ab6) popup_image_details_window_g1_ParamLimits

0x35cd,	// (0x00019ac9) popup_image_details_window_g2_ParamLimits

0x35e2,	// (0x00019ade) popup_image_details_window_g3_ParamLimits

0x35e2,	// (0x00019ade) popup_image_details_window_g3

0xf72b,	// (0x00025c27) popup_image_details_window_g_ParamLimits

0x35f6,	// (0x00019af2) popup_image_details_window_t1_ParamLimits

0x3608,	// (0x00019b04) popup_image_details_window_t2_ParamLimits

0x3621,	// (0x00019b1d) popup_image_details_window_t3_ParamLimits

0x3635,	// (0x00019b31) popup_image_details_window_t4_ParamLimits

0x3650,	// (0x00019b4c) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x00025c2e) popup_image_details_window_t_ParamLimits

0xce26,	// (0x00023322) cl_header_name_pane_ParamLimits

0xce26,	// (0x00023322) cl_header_name_pane

0xd0f6,	// (0x000235f2) cl_header_name_pane_t1_ParamLimits

0xd0f6,	// (0x000235f2) cl_header_name_pane_t1

0xd10d,	// (0x00023609) cl_header_name_pane_t2_ParamLimits

0xd10d,	// (0x00023609) cl_header_name_pane_t2

0xd137,	// (0x00023633) cl_header_name_pane_t3_ParamLimits

0xd137,	// (0x00023633) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x00026034) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x00026034) cl_header_name_pane_t

0x1ab0,	// (0x00017fac) navi_pane_mv_g2_ParamLimits

0x4165,	// (0x0001a661) field_vitu2_entry_pane_g1_ParamLimits

0x4171,	// (0x0001a66d) field_vitu2_entry_pane_g2_ParamLimits

0x417d,	// (0x0001a679) field_vitu2_entry_pane_g3_ParamLimits

0x417d,	// (0x0001a679) field_vitu2_entry_pane_g3

0xf92e,	// (0x00025e2a) field_vitu2_entry_pane_g_ParamLimits

0x848b,	// (0x0001e987) cell_vitu2_itu_pane_g1_ParamLimits

0x849d,	// (0x0001e999) cell_vitu2_itu_pane_g2_ParamLimits

0x849d,	// (0x0001e999) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x00025e36) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x00025e36) cell_vitu2_itu_pane_g

0x77e8,	// (0x0001dce4) bg_vkb2_func_pane_cp05_ParamLimits

0x77e8,	// (0x0001dce4) bg_vkb2_func_pane_cp05

0x77e8,	// (0x0001dce4) bg_vkb2_func_pane_cp03

0x77e8,	// (0x0001dce4) bg_vkb2_func_pane_cp04

0x77e8,	// (0x0001dce4) bg_vkb2_func_pane_cp10_ParamLimits

0x77e8,	// (0x0001dce4) bg_vkb2_func_pane_cp10

0xcdcc,	// (0x000232c8) bg_vkb2_func_pane_cp08

0xcdb3,	// (0x000232af) bg_vkb2_func_pane_cp06

0xcdc0,	// (0x000232bc) bg_vkb2_func_pane_cp07

0x4891,	// (0x0001ad8d) bg_vkb2_func_pane_cp11_ParamLimits

0x4891,	// (0x0001ad8d) bg_vkb2_func_pane_cp11

0x48a6,	// (0x0001ada2) bg_vkb2_func_pane_cp12_ParamLimits

0x48a6,	// (0x0001ada2) bg_vkb2_func_pane_cp12

0x0608,	// (0x00016b04) bg_vkb2_func_pane_cp09

0x41cc,	// (0x0001a6c8) bg_vkb2_func_pane_g1

0x12b8,	// (0x000177b4) bg_vkb2_func_pane_g2

0x41d4,	// (0x0001a6d0) bg_vkb2_func_pane_g3

0x41dc,	// (0x0001a6d8) bg_vkb2_func_pane_g4

0x4489,	// (0x0001a985) bg_vkb2_func_pane_g5

0x41f4,	// (0x0001a6f0) bg_vkb2_func_pane_g6

0x41fc,	// (0x0001a6f8) bg_vkb2_func_pane_g7

0x41ec,	// (0x0001a6e8) bg_vkb2_func_pane_g8

0x1298,	// (0x00017794) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0002603b) bg_vkb2_func_pane_g

0xd04d,	// (0x00023549) blid2_tripm_pane_g6_ParamLimits

0xd04d,	// (0x00023549) blid2_tripm_pane_g6

0x3f26,	// (0x0001a422) mp4_progress_pane_g1

0xd0a1,	// (0x0002359d) blid2_tripm_values_pane_ParamLimits

0xd0a1,	// (0x0002359d) blid2_tripm_values_pane

0xd15c,	// (0x00023658) blid2_tripm_values_pane_t1

0xd16a,	// (0x00023666) blid2_tripm_values_pane_t2

0xd178,	// (0x00023674) blid2_tripm_values_pane_t3

0xd186,	// (0x00023682) blid2_tripm_values_pane_t4

0xd194,	// (0x00023690) blid2_tripm_values_pane_t5

0xd1a2,	// (0x0002369e) blid2_tripm_values_pane_t6

0xd1b0,	// (0x000236ac) blid2_tripm_values_pane_t7

0xd1be,	// (0x000236ba) blid2_tripm_values_pane_t8

0xd1cc,	// (0x000236c8) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0002604e) blid2_tripm_values_pane_t

0x94bd,	// (0x0001f9b9) call_video_pane_t1_ParamLimits

0x94da,	// (0x0001f9d6) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0002576a) call_video_pane_t_ParamLimits

0xa833,	// (0x00020d2f) msg_header_pane_g1_ParamLimits

0x1c8f,	// (0x0001818b) msg_header_pane_g2_ParamLimits

0x1c8f,	// (0x0001818b) msg_header_pane_g2

0x0001,

0xf488,	// (0x00025984) msg_header_pane_g_ParamLimits

0xf488,	// (0x00025984) msg_header_pane_g

0x0e13,	// (0x0001730f) main_clock2_pane_ParamLimits

0xbd0a,	// (0x00022206) grid_clock2_toolbar_pane_ParamLimits

0xbd0a,	// (0x00022206) grid_clock2_toolbar_pane

0xbd0a,	// (0x00022206) listscroll_clock2_pane_ParamLimits

0xbd0a,	// (0x00022206) listscroll_clock2_pane

0xbda6,	// (0x000222a2) main_clock2_pane_t3_ParamLimits

0xbda6,	// (0x000222a2) main_clock2_pane_t3

0xbdb8,	// (0x000222b4) main_clock2_pane_t4_ParamLimits

0xbdb8,	// (0x000222b4) main_clock2_pane_t4

0x49a1,	// (0x0001ae9d) cell_clock2_toolbar_pane

0x49a9,	// (0x0001aea5) cell_clock2_toolbar_pane_cp01

0x49a9,	// (0x0001aea5) cell_clock2_toolbar_pane_cp02

0x49b1,	// (0x0001aead) cell_clock2_toolbar_pane_cp03

0x49b9,	// (0x0001aeb5) list_clock2_pane

0x18e7,	// (0x00017de3) scroll_pane_cp10

0x49c1,	// (0x0001aebd) list_single_clock2_pane_ParamLimits

0x49c1,	// (0x0001aebd) list_single_clock2_pane

0x1048,	// (0x00017544) list_highlight_pane_cp08

0x49ce,	// (0x0001aeca) list_single_clock2_pane_t1

0x49dc,	// (0x0001aed8) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x00026061) list_single_clock2_pane_t

0x0608,	// (0x00016b04) bg_button_pane_cp10

0x49ea,	// (0x0001aee6) cell_clock2_toolbar_pane_g1

0x7767,	// (0x0001dc63) aid_main_viewer_pane_g1_ParamLimits

0x7767,	// (0x0001dc63) aid_main_viewer_pane_g1

0x7773,	// (0x0001dc6f) aid_main_viewer_pane_g2_ParamLimits

0x7773,	// (0x0001dc6f) aid_main_viewer_pane_g2

0xa8b8,	// (0x00020db4) aid_main_viewer_pane_g3_ParamLimits

0xa8b8,	// (0x00020db4) aid_main_viewer_pane_g3

0xa8c7,	// (0x00020dc3) aid_main_viewer_pane_g4_ParamLimits

0xa8c7,	// (0x00020dc3) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x00025995) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x00025995) aid_main_viewer_pane_g

0x77cb,	// (0x0001dcc7) main_calc_pane_ParamLimits

0x77f6,	// (0x0001dcf2) main_dialer2_pane_ParamLimits

0x7262,	// (0x0001d75e) main_cam6_pane

0x7262,	// (0x0001d75e) main_vid6_pane

0xbd16,	// (0x00022212) listscroll_gen_pane_cp06_ParamLimits

0xbd16,	// (0x00022212) listscroll_gen_pane_cp06

0xbdca,	// (0x000222c6) main_clock2_pane_t5_ParamLimits

0xbdca,	// (0x000222c6) main_clock2_pane_t5

0xbe12,	// (0x0002230e) aid_call2_pane_cp10_ParamLimits

0xbe24,	// (0x00022320) aid_call_pane_cp10_ParamLimits

0x1956,	// (0x00017e52) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1956,	// (0x00017e52) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbe36,	// (0x00022332) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbe36,	// (0x00022332) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1956,	// (0x00017e52) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x00025ce3) popup_clock_analogue_window_cp10_g_ParamLimits

0xbe48,	// (0x00022344) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc1e7,	// (0x000226e3) cell_dialer2_keypad_pane_g2_ParamLimits

0xc1e7,	// (0x000226e3) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x00025dc9) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x00025dc9) cell_dialer2_keypad_pane_g

0xc203,	// (0x000226ff) cell_dialer2_keypad_pane_t1

0xc62f,	// (0x00022b2b) main_cset_text2_pane_ParamLimits

0xc62f,	// (0x00022b2b) main_cset_text2_pane

0x46ca,	// (0x0001abc6) area_vitu2_query_pane_g1_ParamLimits

0xcd58,	// (0x00023254) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x00025f7e) area_vitu2_query_pane_g_ParamLimits

0x474e,	// (0x0001ac4a) area_vitu2_query_pane_t7_ParamLimits

0x474e,	// (0x0001ac4a) area_vitu2_query_pane_t7

0xcdb3,	// (0x000232af) bg_button_pane_cp018_ParamLimits

0xcdc0,	// (0x000232bc) bg_button_pane_cp021_ParamLimits

0xcdcc,	// (0x000232c8) bg_button_pane_cp022_ParamLimits

0xcdcc,	// (0x000232c8) bg_vkb2_func_pane_cp08_ParamLimits

0xcdb3,	// (0x000232af) bg_vkb2_func_pane_cp06_ParamLimits

0xcdc0,	// (0x000232bc) bg_vkb2_func_pane_cp07_ParamLimits

0xcddb,	// (0x000232d7) input_focus_pane_cp09_ParamLimits

0x87f2,	// (0x0001ecee) cam6_autofocus_pane_ParamLimits

0x87f2,	// (0x0001ecee) cam6_autofocus_pane

0x880e,	// (0x0001ed0a) cam6_image_uncrop_pane_ParamLimits

0x880e,	// (0x0001ed0a) cam6_image_uncrop_pane

0x8831,	// (0x0001ed2d) cam6_indi_pane_ParamLimits

0x8831,	// (0x0001ed2d) cam6_indi_pane

0x884b,	// (0x0001ed47) cam6_mode_pane_ParamLimits

0x884b,	// (0x0001ed47) cam6_mode_pane

0x885f,	// (0x0001ed5b) cam6_timer_pane_ParamLimits

0x885f,	// (0x0001ed5b) cam6_timer_pane

0x886b,	// (0x0001ed67) cam6_zoom_pane_ParamLimits

0x886b,	// (0x0001ed67) cam6_zoom_pane

0xd1da,	// (0x000236d6) cam6_mode_pane_g1_ParamLimits

0xd1da,	// (0x000236d6) cam6_mode_pane_g1

0xd1e6,	// (0x000236e2) cam6_mode_pane_g2_ParamLimits

0xd1e6,	// (0x000236e2) cam6_mode_pane_g2

0xd1f2,	// (0x000236ee) cam6_mode_pane_g3_ParamLimits

0xd1f2,	// (0x000236ee) cam6_mode_pane_g3

0xd1fe,	// (0x000236fa) cam6_mode_pane_g4_ParamLimits

0xd1fe,	// (0x000236fa) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x00026066) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x00026066) cam6_mode_pane_g

0x49fe,	// (0x0001aefa) bg_tb_trans_pane_cp08_ParamLimits

0x49fe,	// (0x0001aefa) bg_tb_trans_pane_cp08

0x4a0c,	// (0x0001af08) cam6_battery_pane_ParamLimits

0x4a0c,	// (0x0001af08) cam6_battery_pane

0x4a22,	// (0x0001af1e) cam6_indi_pane_g1_ParamLimits

0x4a22,	// (0x0001af1e) cam6_indi_pane_g1

0x4a34,	// (0x0001af30) cam6_indi_pane_g2_ParamLimits

0x4a34,	// (0x0001af30) cam6_indi_pane_g2

0x4a46,	// (0x0001af42) cam6_indi_pane_g3_ParamLimits

0x4a46,	// (0x0001af42) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0002606f) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0002606f) cam6_indi_pane_g

0x4a58,	// (0x0001af54) cam6_indi_pane_t1_ParamLimits

0x4a58,	// (0x0001af54) cam6_indi_pane_t1

0xc364,	// (0x00022860) cam6_autofocus_pane_g1

0xc35c,	// (0x00022858) cam6_autofocus_pane_g2

0xc374,	// (0x00022870) cam6_autofocus_pane_g3

0xc36c,	// (0x00022868) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x00026076) cam6_autofocus_pane_g

0x4a7e,	// (0x0001af7a) cam6_timer_pane_g1

0x4a86,	// (0x0001af82) cam6_timer_pane_t1

0x4a94,	// (0x0001af90) cam6_zoom_cont_pane

0x4a9c,	// (0x0001af98) cam6_zoom_pane_g1

0x4aa4,	// (0x0001afa0) cam6_zoom_pane_g2

0xd20a,	// (0x00023706) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0002607f) cam6_zoom_pane_g

0x346b,	// (0x00019967) cam6_battery_pane_g1

0x346b,	// (0x00019967) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x00025beb) cam6_battery_pane_g

0x4aac,	// (0x0001afa8) cam6_zoom_cont_pane_g1

0x4ab5,	// (0x0001afb1) cam6_zoom_cont_pane_g2

0x4abe,	// (0x0001afba) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x00026086) cam6_zoom_cont_pane_g

0xd227,	// (0x00023723) cam6_mode_pane_cp_ParamLimits

0xd227,	// (0x00023723) cam6_mode_pane_cp

0xd23b,	// (0x00023737) cam6_zoom_pane_cp_ParamLimits

0xd23b,	// (0x00023737) cam6_zoom_pane_cp

0xd251,	// (0x0002374d) vid6_image_uncrop_cif_pane_ParamLimits

0xd251,	// (0x0002374d) vid6_image_uncrop_cif_pane

0xd273,	// (0x0002376f) vid6_image_uncrop_nhd_pane_ParamLimits

0xd273,	// (0x0002376f) vid6_image_uncrop_nhd_pane

0xd28a,	// (0x00023786) vid6_image_uncrop_vga_pane_ParamLimits

0xd28a,	// (0x00023786) vid6_image_uncrop_vga_pane

0xd2a1,	// (0x0002379d) vid6_image_uncrop_wvga_pane_ParamLimits

0xd2a1,	// (0x0002379d) vid6_image_uncrop_wvga_pane

0xd2b8,	// (0x000237b4) vid6_indi_pane_ParamLimits

0xd2b8,	// (0x000237b4) vid6_indi_pane

0x49fe,	// (0x0001aefa) bg_tb_trans_pane_cp09_ParamLimits

0x49fe,	// (0x0001aefa) bg_tb_trans_pane_cp09

0x4ad2,	// (0x0001afce) cam6_battery_pane_cp_ParamLimits

0x4ad2,	// (0x0001afce) cam6_battery_pane_cp

0x4ade,	// (0x0001afda) vid6_indi_pane_g1_ParamLimits

0x4ade,	// (0x0001afda) vid6_indi_pane_g1

0x4af0,	// (0x0001afec) vid6_indi_pane_g2_ParamLimits

0x4af0,	// (0x0001afec) vid6_indi_pane_g2

0x4b02,	// (0x0001affe) vid6_indi_pane_g3_ParamLimits

0x4b02,	// (0x0001affe) vid6_indi_pane_g3

0x4b17,	// (0x0001b013) vid6_indi_pane_g4_ParamLimits

0x4b17,	// (0x0001b013) vid6_indi_pane_g4

0x4b2c,	// (0x0001b028) vid6_indi_pane_g5_ParamLimits

0x4b2c,	// (0x0001b028) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0002608d) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0002608d) vid6_indi_pane_g

0x4b46,	// (0x0001b042) vid6_indi_pane_t1_ParamLimits

0x4b46,	// (0x0001b042) vid6_indi_pane_t1

0x4b5c,	// (0x0001b058) vid6_indi_pane_t2_ParamLimits

0x4b5c,	// (0x0001b058) vid6_indi_pane_t2

0x4b84,	// (0x0001b080) vid6_indi_pane_t3_ParamLimits

0x4b84,	// (0x0001b080) vid6_indi_pane_t3

0x4bac,	// (0x0001b0a8) vid6_indi_pane_t4_ParamLimits

0x4bac,	// (0x0001b0a8) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x00026098) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x00026098) vid6_indi_pane_t

0x4bd0,	// (0x0001b0cc) wait_bar_pane_cp08

0xd2d8,	// (0x000237d4) main_cset_text2_pane_t1_ParamLimits

0xd2d8,	// (0x000237d4) main_cset_text2_pane_t1

0xd212,	// (0x0002370e) listscroll_gen_pane_cp06_t1_ParamLimits

0xd212,	// (0x0002370e) listscroll_gen_pane_cp06_t1

0x7262,	// (0x0001d75e) main_cam6_set_pane

0x81c8,	// (0x0001e6c4) bg_tb_trans_pane_cp06_ParamLimits

0x81de,	// (0x0001e6da) cam4_indicators_pane_g1_ParamLimits

0x81ef,	// (0x0001e6eb) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x00025e06) cam4_indicators_pane_g_ParamLimits

0x8207,	// (0x0001e703) cam4_indicators_pane_t1_ParamLimits

0x77e8,	// (0x0001dce4) bg_tb_trans_pane_cp07_ParamLimits

0x82b2,	// (0x0001e7ae) vid4_indicators_pane_g1_ParamLimits

0x82c6,	// (0x0001e7c2) vid4_indicators_pane_g2_ParamLimits

0x82da,	// (0x0001e7d6) vid4_indicators_pane_g3_ParamLimits

0x82eb,	// (0x0001e7e7) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x00025e18) vid4_indicators_pane_g_ParamLimits

0x8307,	// (0x0001e803) vid4_indicators_pane_t1_ParamLimits

0x8752,	// (0x0001ec4e) vid4_progress_pane_g1_ParamLimits

0x8762,	// (0x0001ec5e) vid4_progress_pane_g2_ParamLimits

0x8772,	// (0x0001ec6e) vid4_progress_pane_g3_ParamLimits

0x8782,	// (0x0001ec7e) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x00025fc9) vid4_progress_pane_g_ParamLimits

0x87a0,	// (0x0001ec9c) vid4_progress_pane_t1_ParamLimits

0x87b6,	// (0x0001ecb2) vid4_progress_pane_t2_ParamLimits

0x87cb,	// (0x0001ecc7) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x00025fd4) vid4_progress_pane_t_ParamLimits

0x87e1,	// (0x0001ecdd) wait_bar_pane_cp07_ParamLimits

0xd2f4,	// (0x000237f0) main_cam6_set_pane_g2_ParamLimits

0xd2f4,	// (0x000237f0) main_cam6_set_pane_g2

0xd300,	// (0x000237fc) main_cset6_listscroll_pane_ParamLimits

0xd300,	// (0x000237fc) main_cset6_listscroll_pane

0xd329,	// (0x00023825) main_cset6_slider_pane_ParamLimits

0xd329,	// (0x00023825) main_cset6_slider_pane

0xd335,	// (0x00023831) main_cset6_text2_pane_ParamLimits

0xd335,	// (0x00023831) main_cset6_text2_pane

0x4bdf,	// (0x0001b0db) main_cset6_text_pane

0x4be7,	// (0x0001b0e3) main_cset_list_pane_copy1_ParamLimits

0x4be7,	// (0x0001b0e3) main_cset_list_pane_copy1

0x4bf7,	// (0x0001b0f3) scroll_pane_cp028_copy1

0xd348,	// (0x00023844) cset_list_set_pane_copy1

0xd354,	// (0x00023850) aid_position_infowindow_above_copy1

0xd35c,	// (0x00023858) aid_position_infowindow_below_copy1

0xd364,	// (0x00023860) cset_list_set_pane_g1_copy1

0xd36c,	// (0x00023868) cset_list_set_pane_g3_copy1_ParamLimits

0xd36c,	// (0x00023868) cset_list_set_pane_g3_copy1

0xd37b,	// (0x00023877) cset_list_set_pane_t1_copy1_ParamLimits

0xd37b,	// (0x00023877) cset_list_set_pane_t1_copy1

0x0672,	// (0x00016b6e) list_highlight_pane_cp021_copy1_ParamLimits

0x0672,	// (0x00016b6e) list_highlight_pane_cp021_copy1

0x4c00,	// (0x0001b0fc) cset6_slider_pane_ParamLimits

0x4c00,	// (0x0001b0fc) cset6_slider_pane

0x4c2c,	// (0x0001b128) main_cset6_slider_pane_g1_ParamLimits

0x4c2c,	// (0x0001b128) main_cset6_slider_pane_g1

0xd390,	// (0x0002388c) main_cset6_slider_pane_g2_ParamLimits

0xd390,	// (0x0002388c) main_cset6_slider_pane_g2

0x4325,	// (0x0001a821) main_cset6_slider_pane_g3_ParamLimits

0x4325,	// (0x0001a821) main_cset6_slider_pane_g3

0xd3b8,	// (0x000238b4) main_cset6_slider_pane_g4_ParamLimits

0xd3b8,	// (0x000238b4) main_cset6_slider_pane_g4

0xd3c4,	// (0x000238c0) main_cset6_slider_pane_g5_ParamLimits

0xd3c4,	// (0x000238c0) main_cset6_slider_pane_g5

0x4325,	// (0x0001a821) main_cset6_slider_pane_g7_ParamLimits

0x4325,	// (0x0001a821) main_cset6_slider_pane_g7

0x4331,	// (0x0001a82d) main_cset6_slider_pane_g8_ParamLimits

0x4331,	// (0x0001a82d) main_cset6_slider_pane_g8

0xd3d0,	// (0x000238cc) main_cset6_slider_pane_g9_ParamLimits

0xd3d0,	// (0x000238cc) main_cset6_slider_pane_g9

0xd3dc,	// (0x000238d8) main_cset6_slider_pane_g10_ParamLimits

0xd3dc,	// (0x000238d8) main_cset6_slider_pane_g10

0xd3e8,	// (0x000238e4) main_cset6_slider_pane_g11_ParamLimits

0xd3e8,	// (0x000238e4) main_cset6_slider_pane_g11

0xd3f4,	// (0x000238f0) main_cset6_slider_pane_g12_ParamLimits

0xd3f4,	// (0x000238f0) main_cset6_slider_pane_g12

0xc6b7,	// (0x00022bb3) main_cset6_slider_pane_g13_ParamLimits

0xc6b7,	// (0x00022bb3) main_cset6_slider_pane_g13

0xc6c3,	// (0x00022bbf) main_cset6_slider_pane_g14_ParamLimits

0xc6c3,	// (0x00022bbf) main_cset6_slider_pane_g14

0xd400,	// (0x000238fc) main_cset6_slider_pane_g15_ParamLimits

0xd400,	// (0x000238fc) main_cset6_slider_pane_g15

0xd3c4,	// (0x000238c0) main_cset6_slider_pane_g16_ParamLimits

0xd3c4,	// (0x000238c0) main_cset6_slider_pane_g16

0xd418,	// (0x00023914) main_cset6_slider_pane_g17_ParamLimits

0xd418,	// (0x00023914) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x000260a1) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x000260a1) main_cset6_slider_pane_g

0x4c54,	// (0x0001b150) main_cset6_slider_pane_t1_ParamLimits

0x4c54,	// (0x0001b150) main_cset6_slider_pane_t1

0xd430,	// (0x0002392c) main_cset6_slider_pane_t2_ParamLimits

0xd430,	// (0x0002392c) main_cset6_slider_pane_t2

0xd45b,	// (0x00023957) main_cset6_slider_pane_t3_ParamLimits

0xd45b,	// (0x00023957) main_cset6_slider_pane_t3

0xd486,	// (0x00023982) main_cset6_slider_pane_t4_ParamLimits

0xd486,	// (0x00023982) main_cset6_slider_pane_t4

0xd4b1,	// (0x000239ad) main_cset6_slider_pane_t5_ParamLimits

0xd4b1,	// (0x000239ad) main_cset6_slider_pane_t5

0x4c95,	// (0x0001b191) main_cset6_slider_pane_t7_ParamLimits

0x4c95,	// (0x0001b191) main_cset6_slider_pane_t7

0xd4dc,	// (0x000239d8) main_cset6_slider_pane_t8_ParamLimits

0xd4dc,	// (0x000239d8) main_cset6_slider_pane_t8

0xd500,	// (0x000239fc) main_cset6_slider_pane_t9_ParamLimits

0xd500,	// (0x000239fc) main_cset6_slider_pane_t9

0xd524,	// (0x00023a20) main_cset6_slider_pane_t10_ParamLimits

0xd524,	// (0x00023a20) main_cset6_slider_pane_t10

0xd548,	// (0x00023a44) main_cset6_slider_pane_t11_ParamLimits

0xd548,	// (0x00023a44) main_cset6_slider_pane_t11

0x4ccb,	// (0x0001b1c7) main_cset6_slider_pane_t14_ParamLimits

0x4ccb,	// (0x0001b1c7) main_cset6_slider_pane_t14

0x4d04,	// (0x0001b200) main_cset6_slider_pane_t15_ParamLimits

0x4d04,	// (0x0001b200) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x000260c6) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x000260c6) main_cset6_slider_pane_t

0x4421,	// (0x0001a91d) cset_slider_pane_g1_copy1

0x442a,	// (0x0001a926) cset_slider_pane_g2_copy1

0x4433,	// (0x0001a92f) cset_slider_pane_g3_copy1

0x0608,	// (0x00016b04) bg_popup_sub_pane_cp011_copy1

0x4d3d,	// (0x0001b239) main_cset_text_pane_g1_copy1

0x44f8,	// (0x0001a9f4) main_cset_text_pane_t1_copy1

0x4506,	// (0x0001aa02) main_cset_text_pane_t2_copy1

0x4514,	// (0x0001aa10) main_cset_text_pane_t3_copy1

0x4522,	// (0x0001aa1e) main_cset_text_pane_t4_copy1

0x4d45,	// (0x0001b241) main_cset_text_pane_t5_copy1

0x4d53,	// (0x0001b24f) main_cset_text_pane_t6_copy1

0x4d61,	// (0x0001b25d) main_cset_text_pane_t7_copy1

0x52b7,	// (0x0001b7b3) main_cset_text2_pane_t1_copy1

0x77e8,	// (0x0001dce4) main_ncimui_pane

0x7841,	// (0x0001dd3d) popup_query_ncimui_window_ParamLimits

0x7841,	// (0x0001dd3d) popup_query_ncimui_window

0x36ff,	// (0x00019bfb) field_cale_ev2_pane_g4_ParamLimits

0x36ff,	// (0x00019bfb) field_cale_ev2_pane_g4

0xc187,	// (0x00022683) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc187,	// (0x00022683) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x00025da4) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x00025da4) cell_video_dialer_keypad_pane_g

0xc19f,	// (0x0002269b) cell_video_dialer_keypad_pane_t1

0x0608,	// (0x00016b04) bg_popup_window_pane_cp012

0x17de,	// (0x00017cda) heading_pane_cp06

0x4d8d,	// (0x0001b289) ncim_query_content_pane

0x0608,	// (0x00016b04) bg_popup_heading_pane_cp01

0x4d95,	// (0x0001b291) ncim_heading_pane_t1

0x4da3,	// (0x0001b29f) ncim_indicator_popup_pane

0x4db5,	// (0x0001b2b1) ncim_query_button_pane

0x4dc9,	// (0x0001b2c5) ncim_query_content_pane_t1

0x4ddb,	// (0x0001b2d7) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0002610a) ncim_query_content_pane_t

0x4e15,	// (0x0001b311) ncim_query_list_pane

0x4e27,	// (0x0001b323) ncim_query_popup_pane

0x4da3,	// (0x0001b29f) ncim_indicator_popup_pane_ParamLimits

0xd763,	// (0x00023c5f) ncim_query_content_pane_g1_ParamLimits

0xd763,	// (0x00023c5f) ncim_query_content_pane_g1

0x4dc9,	// (0x0001b2c5) ncim_query_content_pane_t1_ParamLimits

0x4ddb,	// (0x0001b2d7) ncim_query_content_pane_t2_ParamLimits

0xd76f,	// (0x00023c6b) ncim_query_content_pane_t3_ParamLimits

0xd76f,	// (0x00023c6b) ncim_query_content_pane_t3

0xd78c,	// (0x00023c88) ncim_query_content_pane_t4_ParamLimits

0xd78c,	// (0x00023c88) ncim_query_content_pane_t4

0xd7a9,	// (0x00023ca5) ncim_query_content_pane_t5_ParamLimits

0xd7a9,	// (0x00023ca5) ncim_query_content_pane_t5

0x4ded,	// (0x0001b2e9) ncim_query_content_pane_t6_ParamLimits

0x4ded,	// (0x0001b2e9) ncim_query_content_pane_t6

0xfc0e,	// (0x0002610a) ncim_query_content_pane_t_ParamLimits

0x4e15,	// (0x0001b311) ncim_query_list_pane_ParamLimits

0x4e27,	// (0x0001b323) ncim_query_popup_pane_ParamLimits

0x4e3b,	// (0x0001b337) wait_bar_pane_cp04

0x0608,	// (0x00016b04) input_focus_pane_cp011

0x4e43,	// (0x0001b33f) ncim_query_popup_pane_t1

0x4e51,	// (0x0001b34d) ncim_list_query_list_pane_ParamLimits

0x4e51,	// (0x0001b34d) ncim_list_query_list_pane

0x0608,	// (0x00016b04) bg_button_pane_cp027

0x4e64,	// (0x0001b360) ncim_query_button_pane_g1

0x0608,	// (0x00016b04) list_highlight_pane_cp012

0x4e6e,	// (0x0001b36a) ncim_list_query_list_pane_g1

0x4e76,	// (0x0001b372) ncim_list_query_list_pane_t1

0x81fb,	// (0x0001e6f7) cam4_indicators_pane_g3_ParamLimits

0x81fb,	// (0x0001e6f7) cam4_indicators_pane_g3

0x82f7,	// (0x0001e7f3) vid4_indicators_pane_g5_ParamLimits

0x82f7,	// (0x0001e7f3) vid4_indicators_pane_g5

0x8791,	// (0x0001ec8d) vid4_progress_pane_g5_ParamLimits

0x8791,	// (0x0001ec8d) vid4_progress_pane_g5

0xd652,	// (0x00023b4e) main_ncimui_pane_g1

0xd6b8,	// (0x00023bb4) ncimui_group_query_pane_ParamLimits

0xd6b8,	// (0x00023bb4) ncimui_group_query_pane

0xd700,	// (0x00023bfc) ncimui_list_pane_ParamLimits

0xd700,	// (0x00023bfc) ncimui_list_pane

0xd726,	// (0x00023c22) ncimui_text_pane_ParamLimits

0xd726,	// (0x00023c22) ncimui_text_pane

0xd7c6,	// (0x00023cc2) ncimui_text_pane_t1_ParamLimits

0xd7c6,	// (0x00023cc2) ncimui_text_pane_t1

0x4e84,	// (0x0001b380) ncimui_list_single_graphic_pane_ParamLimits

0x4e84,	// (0x0001b380) ncimui_list_single_graphic_pane

0xd7e5,	// (0x00023ce1) ncimui_query_pane_ParamLimits

0xd7e5,	// (0x00023ce1) ncimui_query_pane

0x0608,	// (0x00016b04) list_highlight_pane_cp013

0x4e94,	// (0x0001b390) ncim_list_query_list_pane_t1_copy1

0x4ea2,	// (0x0001b39e) ncim_list_single_graphic_pane_g1

0xd7f8,	// (0x00023cf4) ncim_query_button_pane_cp01

0xd804,	// (0x00023d00) ncim_query_entry_pane_ParamLimits

0xd804,	// (0x00023d00) ncim_query_entry_pane

0xd817,	// (0x00023d13) ncimui_query_pane_g1

0xd823,	// (0x00023d1f) ncimui_query_pane_t1_ParamLimits

0xd823,	// (0x00023d1f) ncimui_query_pane_t1

0x0672,	// (0x00016b6e) input_focus_pane_cp012

0x4eaa,	// (0x0001b3a6) ncim_query_entry_pane_t1

0x0e13,	// (0x0001730f) main_im_pane_ParamLimits

0x77e8,	// (0x0001dce4) main_mobtv_pane_ParamLimits

0x77e8,	// (0x0001dce4) main_mobtv_pane

0xd3d0,	// (0x000238cc) main_cset6_slider_pane_g18_ParamLimits

0xd3d0,	// (0x000238cc) main_cset6_slider_pane_g18

0xd424,	// (0x00023920) main_cset6_slider_pane_g19_ParamLimits

0xd424,	// (0x00023920) main_cset6_slider_pane_g19

0x417d,	// (0x0001a679) bg_main_mobtv_pane_ParamLimits

0x417d,	// (0x0001a679) bg_main_mobtv_pane

0xd83c,	// (0x00023d38) main_mobtv_info_pane

0xd845,	// (0x00023d41) main_mobtv_loading_pane_ParamLimits

0xd845,	// (0x00023d41) main_mobtv_loading_pane

0x4eca,	// (0x0001b3c6) main_mobtv_pg_channel_list_pane

0x4ed4,	// (0x0001b3d0) main_mobtv_pg_hdr_pane

0xd852,	// (0x00023d4e) main_mobtv_programe_curr_pane_ParamLimits

0xd852,	// (0x00023d4e) main_mobtv_programe_curr_pane

0xd85f,	// (0x00023d5b) main_mobtv_programe_next_pane_ParamLimits

0xd85f,	// (0x00023d5b) main_mobtv_programe_next_pane

0x4edd,	// (0x0001b3d9) popup_mobtv_noti_window

0x346b,	// (0x00019967) main_tv_pg_hdr_pane_g1

0x4ee5,	// (0x0001b3e1) main_tv_pg_hdr_pane_g2

0x4eed,	// (0x0001b3e9) main_tv_pg_hdr_pane_g3

0x4ef5,	// (0x0001b3f1) main_tv_pg_hdr_pane_g4

0x4efd,	// (0x0001b3f9) main_tv_pg_hdr_pane_g5

0x4f05,	// (0x0001b401) main_tv_pg_hdr_pane_g6

0x4f0d,	// (0x0001b409) main_tv_pg_hdr_pane_g7

0x4f15,	// (0x0001b411) main_tv_pg_hdr_pane_g8

0x4f1d,	// (0x0001b419) main_tv_pg_hdr_pane_g9

0x4f25,	// (0x0001b421) main_tv_pg_hdr_pane_g10

0x4f2f,	// (0x0001b42b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x00026117) main_tv_pg_hdr_pane_g

0x4f39,	// (0x0001b435) main_tv_pg_hdr_pane_t1

0x4f47,	// (0x0001b443) main_tv_pg_hdr_pane_t2

0x4f55,	// (0x0001b451) main_tv_pg_hdr_pane_t3

0x4f63,	// (0x0001b45f) main_tv_pg_hdr_pane_t4

0x4f71,	// (0x0001b46d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0002612e) main_tv_pg_hdr_pane_t

0x4f7f,	// (0x0001b47b) single_mobtv_pg_channel_pane_ParamLimits

0x4f7f,	// (0x0001b47b) single_mobtv_pg_channel_pane

0x4f91,	// (0x0001b48d) single_mobtv_pg_channel_table_pane

0x4f9a,	// (0x0001b496) single_mobtv_pg_channel_thumb_pane

0x4fa3,	// (0x0001b49f) single_tv_pg_channel_pane_g1

0x4fac,	// (0x0001b4a8) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x00026139) single_tv_pg_channel_pane_g

0x369a,	// (0x00019b96) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x369a,	// (0x00019b96) bg_single_mobtv_pg_channel_thumb_pane

0x4fb5,	// (0x0001b4b1) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4fb5,	// (0x0001b4b1) single_mobtv_pg_channel_thumb_pane_g1

0x4fc3,	// (0x0001b4bf) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4fc3,	// (0x0001b4bf) single_mobtv_pg_channel_thumb_pane_g2

0x4fcf,	// (0x0001b4cb) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4fcf,	// (0x0001b4cb) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0002613e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0002613e) single_mobtv_pg_channel_thumb_pane_g

0x4fdb,	// (0x0001b4d7) single_mobtv_pg_channel_thumb_pane_t1

0x4fe9,	// (0x0001b4e5) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x00026145) single_mobtv_pg_channel_thumb_pane_t

0x346b,	// (0x00019967) bg_single_mobtv_pg_channel_table_pane_g1

0x346b,	// (0x00019967) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x00025beb) bg_single_mobtv_pg_channel_table_pane_g

0x4ff7,	// (0x0001b4f3) single_mobtv_pg_channel_table_pane_t1

0x5005,	// (0x0001b501) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0002614a) single_mobtv_pg_channel_table_pane_t

0xd874,	// (0x00023d70) main_mobtv_info_pane_g1_ParamLimits

0xd874,	// (0x00023d70) main_mobtv_info_pane_g1

0xd890,	// (0x00023d8c) main_mobtv_info_pane_t1_ParamLimits

0xd890,	// (0x00023d8c) main_mobtv_info_pane_t1

0xd8f6,	// (0x00023df2) main_mobtv_info_pane_t2_ParamLimits

0xd8f6,	// (0x00023df2) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x00026154) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x00026154) main_mobtv_info_pane_t

0xd979,	// (0x00023e75) wait_bar_pane_cp05

0xd989,	// (0x00023e85) main_mobtv_loading_pane_g1_ParamLimits

0xd989,	// (0x00023e85) main_mobtv_loading_pane_g1

0xd995,	// (0x00023e91) main_mobtv_loading_pane_g2_ParamLimits

0xd995,	// (0x00023e91) main_mobtv_loading_pane_g2

0xd9a1,	// (0x00023e9d) main_mobtv_loading_pane_g3_ParamLimits

0xd9a1,	// (0x00023e9d) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0002615b) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0002615b) main_mobtv_loading_pane_g

0x5013,	// (0x0001b50f) main_mobtv_loading_pane_t1_ParamLimits

0x5013,	// (0x0001b50f) main_mobtv_loading_pane_t1

0x502b,	// (0x0001b527) main_mobtv_loading_pane_t2_ParamLimits

0x502b,	// (0x0001b527) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x00026162) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x00026162) main_mobtv_loading_pane_t

0xd9ad,	// (0x00023ea9) wait_bar_pane_cp06_ParamLimits

0xd9ad,	// (0x00023ea9) wait_bar_pane_cp06

0x504f,	// (0x0001b54b) main_mobtv_programe_curr_pane_t1

0x505d,	// (0x0001b559) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x00026167) main_mobtv_programe_curr_pane_t

0x506b,	// (0x0001b567) main_mobtv_programe_next_pane_t1

0x5079,	// (0x0001b575) main_mobtv_programe_next_pane_t2

0x5087,	// (0x0001b583) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0002616c) main_mobtv_programe_next_pane_t

0x0608,	// (0x00016b04) bg_popup_mobtv_noti_window_pane

0x5095,	// (0x0001b591) popup_mobtv_noti_window_g1

0x509d,	// (0x0001b599) popup_mobtv_noti_window_t1

0x50ab,	// (0x0001b5a7) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x00026173) popup_mobtv_noti_window_t

0x346b,	// (0x00019967) bg_popup_mobtv_noti_window_pane_g1

0x7262,	// (0x0001d75e) sc_clock_pane

0x7262,	// (0x0001d75e) main_fs_bigclock_pane

0xd08f,	// (0x0002358b) blid2_tripm_pane_t4_ParamLimits

0xd08f,	// (0x0002358b) blid2_tripm_pane_t4

0xd9b9,	// (0x00023eb5) sc_clock_pane_g1_ParamLimits

0xd9b9,	// (0x00023eb5) sc_clock_pane_g1

0xd9c7,	// (0x00023ec3) sc_clock_pane_t1_ParamLimits

0xd9c7,	// (0x00023ec3) sc_clock_pane_t1

0xd9da,	// (0x00023ed6) sc_clock_pane_t2_ParamLimits

0xd9da,	// (0x00023ed6) sc_clock_pane_t2

0xd9ec,	// (0x00023ee8) sc_clock_pane_t3_ParamLimits

0xd9ec,	// (0x00023ee8) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x00026178) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x00026178) sc_clock_pane_t

0xe76c,	// (0x00024c68) main_fs_bigclock_indicator_pane_ParamLimits

0xe76c,	// (0x00024c68) main_fs_bigclock_indicator_pane

0xda61,	// (0x00023f5d) main_fs_bigclock_pane_g1_ParamLimits

0xda61,	// (0x00023f5d) main_fs_bigclock_pane_g1

0xe778,	// (0x00024c74) main_fs_bigclock_pane_t1_ParamLimits

0xe778,	// (0x00024c74) main_fs_bigclock_pane_t1

0xe78a,	// (0x00024c86) main_fs_bigclock_pane_t2_ParamLimits

0xe78a,	// (0x00024c86) main_fs_bigclock_pane_t2

0xe79c,	// (0x00024c98) main_fs_bigclock_pane_t3_ParamLimits

0xe79c,	// (0x00024c98) main_fs_bigclock_pane_t3

0x0002,

0xfe81,	// (0x0002637d) main_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0002637d) main_fs_bigclock_pane_t

0x5cd8,	// (0x0001c1d4) main_fs_bigclock_indicator_pane_g1

0x4dbd,	// (0x0001b2b9) ncim_query_content_pane_g2_ParamLimits

0x4dbd,	// (0x0001b2b9) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x00026105) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x00026105) ncim_query_content_pane_g

0xd9fe,	// (0x00023efa) sc_clock_pane_t4_ParamLimits

0xd9fe,	// (0x00023efa) sc_clock_pane_t4

0x77e8,	// (0x0001dce4) main_radioblah_pane

0x3ff7,	// (0x0001a4f3) cell_call4_button_pane_t1_copy1_ParamLimits

0x3ff7,	// (0x0001a4f3) cell_call4_button_pane_t1_copy1

0xd66a,	// (0x00023b66) main_ncimui_pane_t1_ParamLimits

0xd66a,	// (0x00023b66) main_ncimui_pane_t1

0xd684,	// (0x00023b80) main_ncimui_pane_t2_ParamLimits

0xd684,	// (0x00023b80) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x000260fe) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x000260fe) main_ncimui_pane_t

0x51ec,	// (0x0001b6e8) main_radioblah_anim_pane_ParamLimits

0x51ec,	// (0x0001b6e8) main_radioblah_anim_pane

0x51fd,	// (0x0001b6f9) main_radioblah_info_pane_ParamLimits

0x51fd,	// (0x0001b6f9) main_radioblah_info_pane

0x5211,	// (0x0001b70d) main_radioblah_pane_t1_ParamLimits

0x5211,	// (0x0001b70d) main_radioblah_pane_t1

0x522d,	// (0x0001b729) main_radioblah_pane_t2_ParamLimits

0x522d,	// (0x0001b729) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x00026199) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x00026199) main_radioblah_pane_t

0xdaab,	// (0x00023fa7) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdaab,	// (0x00023fa7) main_radioblah_rocker_ctrl_pane

0x5275,	// (0x0001b771) main_radioblah_info_pane_t1_ParamLimits

0x5275,	// (0x0001b771) main_radioblah_info_pane_t1

0xdaf0,	// (0x00023fec) main_radioblah_info_pane_t2_ParamLimits

0xdaf0,	// (0x00023fec) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x000261a2) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x000261a2) main_radioblah_info_pane_t

0x346b,	// (0x00019967) main_radioblah_rocker_ctrl_pane_g1

0xdb98,	// (0x00024094) main_radioblah_rocker_ctrl_pane_g2

0xdba0,	// (0x0002409c) main_radioblah_rocker_ctrl_pane_g3

0xdba8,	// (0x000240a4) main_radioblah_rocker_ctrl_pane_g4

0xdbb0,	// (0x000240ac) main_radioblah_rocker_ctrl_pane_g5

0xdbb8,	// (0x000240b4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x000261ab) main_radioblah_rocker_ctrl_pane_g

0x52b7,	// (0x0001b7b3) main_cset_text2_pane_t1_copy1_ParamLimits

0x8144,	// (0x0001e640) cam4_image_uncrop_qvga_pane

0x826b,	// (0x0001e767) vid4_image_uncrop_qcif_pane

0x8825,	// (0x0001ed21) cam6_image_uncrop_qvga_pane_ParamLimits

0x8825,	// (0x0001ed21) cam6_image_uncrop_qvga_pane

0x4ac6,	// (0x0001afc2) vid6_image_uncrop_qcif_pane_ParamLimits

0x4ac6,	// (0x0001afc2) vid6_image_uncrop_qcif_pane

0x0608,	// (0x00016b04) bg_popup_preview_window_pane_cp03

0x4d6f,	// (0x0001b26b) list_cset_text2_pane

0x4d77,	// (0x0001b273) main_cset6_text2_pane_g1

0x4d7f,	// (0x0001b27b) main_cset6_text2_pane_t1

0xdbc0,	// (0x000240bc) list_cset_text2_pane_t1_ParamLimits

0xdbc0,	// (0x000240bc) list_cset_text2_pane_t1

0x77e8,	// (0x0001dce4) main_radioblah_pane_ParamLimits

0xd967,	// (0x00023e63) main_mobtv_info_pane_t3_ParamLimits

0xd967,	// (0x00023e63) main_mobtv_info_pane_t3

0xda99,	// (0x00023f95) main_radioblah_pane_g1

0xdac4,	// (0x00023fc0) main_radioblah_info_pane_g1

0xdb3f,	// (0x0002403b) main_radioblah_info_pane_t3_ParamLimits

0xdb3f,	// (0x0002403b) main_radioblah_info_pane_t3

0x9f0f,	// (0x0002040b) highlight_cell_cale_month_pane_ParamLimits

0x9f0f,	// (0x0002040b) highlight_cell_cale_month_pane

0x7262,	// (0x0001d75e) main_phob_fisheye_pane

0x3782,	// (0x00019c7e) scroll_pane_cp0031_ParamLimits

0x3782,	// (0x00019c7e) scroll_pane_cp0031

0x4bd0,	// (0x0001b0cc) wait_bar_pane_cp08_ParamLimits

0xd348,	// (0x00023844) cset_list_set_pane_copy1_ParamLimits

0x52af,	// (0x0001b7ab) highlight_cell_cale_month_pane_g1

0xdbd5,	// (0x000240d1) highlight_cell_cale_month_pane_t1

0x47ba,	// (0x0001acb6) list_gen_pane_cp01

0x42e6,	// (0x0001a7e2) scroll_pane_01

0xdbe3,	// (0x000240df) list_single_double_fisheye_pane

0xdbec,	// (0x000240e8) list_double_fisheye_pane_g1_ParamLimits

0xdbec,	// (0x000240e8) list_double_fisheye_pane_g1

0xdbf8,	// (0x000240f4) list_double_fisheye_pane_g2_ParamLimits

0xdbf8,	// (0x000240f4) list_double_fisheye_pane_g2

0xdc0c,	// (0x00024108) list_double_fisheye_pane_g3_ParamLimits

0xdc0c,	// (0x00024108) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x000261b8) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x000261b8) list_double_fisheye_pane_g

0xdc35,	// (0x00024131) list_double_fisheye_pane_t1_ParamLimits

0xdc35,	// (0x00024131) list_double_fisheye_pane_t1

0xdc50,	// (0x0002414c) list_double_fisheye_pane_t2_ParamLimits

0xdc50,	// (0x0002414c) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x000261c3) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x000261c3) list_double_fisheye_pane_t

0x7262,	// (0x0001d75e) main_call5_pane

0xda24,	// (0x00023f20) sc_swipe_pane_ParamLimits

0xda24,	// (0x00023f20) sc_swipe_pane

0xdc7e,	// (0x0002417a) call5_image_pane_ParamLimits

0xdc7e,	// (0x0002417a) call5_image_pane

0xdc8a,	// (0x00024186) call5_swipe_1_pane_ParamLimits

0xdc8a,	// (0x00024186) call5_swipe_1_pane

0xdc96,	// (0x00024192) call5_swipe_2_pane_ParamLimits

0xdc96,	// (0x00024192) call5_swipe_2_pane

0xdcae,	// (0x000241aa) popup_call5_audio_first_window_ParamLimits

0xdcae,	// (0x000241aa) popup_call5_audio_first_window

0x369a,	// (0x00019b96) call5_swipe_1_pane_g1_ParamLimits

0x369a,	// (0x00019b96) call5_swipe_1_pane_g1

0x52f6,	// (0x0001b7f2) call5_swipe_1_pane_g2_ParamLimits

0x52f6,	// (0x0001b7f2) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x000261c8) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x000261c8) call5_swipe_1_pane_g

0x5302,	// (0x0001b7fe) call5_swipe_1_pane_t1_ParamLimits

0x5302,	// (0x0001b7fe) call5_swipe_1_pane_t1

0x369a,	// (0x00019b96) call5_swipe_2_pane_g1_ParamLimits

0x369a,	// (0x00019b96) call5_swipe_2_pane_g1

0x5317,	// (0x0001b813) call5_swipe_2_pane_g2_ParamLimits

0x5317,	// (0x0001b813) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x000261cd) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x000261cd) call5_swipe_2_pane_g

0x5323,	// (0x0001b81f) call5_swipe_2_pane_t1_ParamLimits

0x5323,	// (0x0001b81f) call5_swipe_2_pane_t1

0x5338,	// (0x0001b834) sc_swipe_pane_g1_ParamLimits

0x5338,	// (0x0001b834) sc_swipe_pane_g1

0x5345,	// (0x0001b841) sc_swipe_pane_g2_ParamLimits

0x5345,	// (0x0001b841) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x000261d2) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x000261d2) sc_swipe_pane_g

0x5351,	// (0x0001b84d) sc_swipe_pane_t1_ParamLimits

0x5351,	// (0x0001b84d) sc_swipe_pane_t1

0x7262,	// (0x0001d75e) main_cmail_launcher_pane

0xdcba,	// (0x000241b6) aid_size_cell_cmail_l_ParamLimits

0xdcba,	// (0x000241b6) aid_size_cell_cmail_l

0xdcca,	// (0x000241c6) grid_cmail_l_pane_ParamLimits

0xdcca,	// (0x000241c6) grid_cmail_l_pane

0xdcd6,	// (0x000241d2) cell_cmail_l_pane_ParamLimits

0xdcd6,	// (0x000241d2) cell_cmail_l_pane

0xdce8,	// (0x000241e4) cell_cmail_l_pane_g1_ParamLimits

0xdce8,	// (0x000241e4) cell_cmail_l_pane_g1

0xdcf9,	// (0x000241f5) cell_cmail_l_pane_t1_ParamLimits

0xdcf9,	// (0x000241f5) cell_cmail_l_pane_t1

0x5366,	// (0x0001b862) cell_cmail_l_pane_t2_ParamLimits

0x5366,	// (0x0001b862) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x000261d7) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x000261d7) cell_cmail_l_pane_t

0x0672,	// (0x00016b6e) grid_highlight_pane_cp018_ParamLimits

0x0672,	// (0x00016b6e) grid_highlight_pane_cp018

0x70d2,	// (0x0001d5ce) main2_pane_ParamLimits

0x70d2,	// (0x0001d5ce) main2_pane

0x0eec,	// (0x000173e8) popup_sp_fs_action_menu_bg_pane_g1

0x0ef4,	// (0x000173f0) popup_sp_fs_action_menu_bg_pane_g2

0x0efc,	// (0x000173f8) popup_sp_fs_action_menu_bg_pane_g3

0x0f04,	// (0x00017400) popup_sp_fs_action_menu_bg_pane_g4

0x0f0c,	// (0x00017408) popup_sp_fs_action_menu_bg_pane_g5

0x0f14,	// (0x00017410) popup_sp_fs_action_menu_bg_pane_g6

0x0f1c,	// (0x00017418) popup_sp_fs_action_menu_bg_pane_g7

0x0f24,	// (0x00017420) popup_sp_fs_action_menu_bg_pane_g8

0x0f2c,	// (0x00017428) popup_sp_fs_action_menu_bg_pane_g9

0x0f34,	// (0x00017430) popup_sp_fs_action_menu_bg_pane_g10

0x0f34,	// (0x00017430) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x00025686) popup_sp_fs_action_menu_bg_pane_g

0x9309,	// (0x0001f805) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9309,	// (0x0001f805) list_medium_line_x2_t3_g3_g1

0x9315,	// (0x0001f811) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9315,	// (0x0001f811) list_medium_line_x2_t3_g3_g2

0x9321,	// (0x0001f81d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9321,	// (0x0001f81d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x00025734) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x00025734) list_medium_line_x2_t3_g3_g

0x932d,	// (0x0001f829) list_medium_line_x2_t3_g3_t1_ParamLimits

0x932d,	// (0x0001f829) list_medium_line_x2_t3_g3_t1

0x9342,	// (0x0001f83e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x9342,	// (0x0001f83e) list_medium_line_x2_t3_g3_t2

0x9354,	// (0x0001f850) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9354,	// (0x0001f850) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0002573b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0002573b) list_medium_line_x2_t3_g3_t

0x9309,	// (0x0001f805) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9309,	// (0x0001f805) list_medium_line_x2_t3_g2_g1

0x9321,	// (0x0001f81d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9321,	// (0x0001f81d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x00025742) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x00025742) list_medium_line_x2_t3_g2_g

0x9369,	// (0x0001f865) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9369,	// (0x0001f865) list_medium_line_x2_t3_g2_t1

0x937f,	// (0x0001f87b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x937f,	// (0x0001f87b) list_medium_line_x2_t3_g2_t2

0x9391,	// (0x0001f88d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9391,	// (0x0001f88d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x00025747) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x00025747) list_medium_line_x2_t3_g2_t

0x9309,	// (0x0001f805) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9309,	// (0x0001f805) list_medium_line_x2_t4_g4_g1

0x93ae,	// (0x0001f8aa) list_medium_line_x2_t4_g4_g2_ParamLimits

0x93ae,	// (0x0001f8aa) list_medium_line_x2_t4_g4_g2

0x9315,	// (0x0001f811) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9315,	// (0x0001f811) list_medium_line_x2_t4_g4_g3

0x93ba,	// (0x0001f8b6) list_medium_line_x2_t4_g4_g4_ParamLimits

0x93ba,	// (0x0001f8b6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0002574e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0002574e) list_medium_line_x2_t4_g4_g

0x93c6,	// (0x0001f8c2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x93c6,	// (0x0001f8c2) list_medium_line_x2_t4_g4_t1

0x93e0,	// (0x0001f8dc) list_medium_line_x2_t4_g4_t2_ParamLimits

0x93e0,	// (0x0001f8dc) list_medium_line_x2_t4_g4_t2

0x93f6,	// (0x0001f8f2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x93f6,	// (0x0001f8f2) list_medium_line_x2_t4_g4_t3

0x940b,	// (0x0001f907) list_medium_line_x2_t4_g4_t4_ParamLimits

0x940b,	// (0x0001f907) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x00025757) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x00025757) list_medium_line_x2_t4_g4_t

0x9309,	// (0x0001f805) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9309,	// (0x0001f805) list_medium_line_x2_t2_g4_g1

0x93ae,	// (0x0001f8aa) list_medium_line_x2_t2_g4_g2_ParamLimits

0x93ae,	// (0x0001f8aa) list_medium_line_x2_t2_g4_g2

0x9315,	// (0x0001f811) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9315,	// (0x0001f811) list_medium_line_x2_t2_g4_g3

0x9321,	// (0x0001f81d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9321,	// (0x0001f81d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000257be) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000257be) list_medium_line_x2_t2_g4_g

0x9f35,	// (0x00020431) list_medium_line_x2_t2_g4_t1_ParamLimits

0x9f35,	// (0x00020431) list_medium_line_x2_t2_g4_t1

0x9354,	// (0x0001f850) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9354,	// (0x0001f850) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000257c7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000257c7) list_medium_line_x2_t2_g4_t

0x9309,	// (0x0001f805) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9309,	// (0x0001f805) list_medium_line_x2_t2_g3_g1

0x9315,	// (0x0001f811) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9315,	// (0x0001f811) list_medium_line_x2_t2_g3_g2

0x9321,	// (0x0001f81d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9321,	// (0x0001f81d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x00025734) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x00025734) list_medium_line_x2_t2_g3_g

0x9f4a,	// (0x00020446) list_medium_line_x2_t2_g3_t1_ParamLimits

0x9f4a,	// (0x00020446) list_medium_line_x2_t2_g3_t1

0x9354,	// (0x0001f850) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9354,	// (0x0001f850) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000257cc) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000257cc) list_medium_line_x2_t2_g3_t

0xa04a,	// (0x00020546) main_sp_fs_list_pane_ParamLimits

0xa04a,	// (0x00020546) main_sp_fs_list_pane

0xa056,	// (0x00020552) sp_fs_scroll_pane_ParamLimits

0xa056,	// (0x00020552) sp_fs_scroll_pane

0xa062,	// (0x0002055e) list_medium_line_x2_t3_t1

0xa072,	// (0x0002056e) list_medium_line_x2_t3_t2

0xa080,	// (0x0002057c) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00025817) list_medium_line_x2_t3_t

0xa08e,	// (0x0002058a) list_medium_line_x3_t4_t1

0xa09e,	// (0x0002059a) list_medium_line_x3_t4_t2

0xa0ac,	// (0x000205a8) list_medium_line_x3_t4_t3

0xa080,	// (0x0002057c) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0002581e) list_medium_line_x3_t4_t

0xa0ba,	// (0x000205b6) list_medium_line_x4_t5_t1

0xa0ca,	// (0x000205c6) list_medium_line_x4_t5_t2

0xa0ac,	// (0x000205a8) list_medium_line_x4_t5_t3

0xa0d8,	// (0x000205d4) list_medium_line_x4_t5_t4

0xa080,	// (0x0002057c) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00025827) list_medium_line_x4_t5_t

0x9309,	// (0x0001f805) list_medium_line_t4_g4_g1_ParamLimits

0x9309,	// (0x0001f805) list_medium_line_t4_g4_g1

0x93ba,	// (0x0001f8b6) list_medium_line_t4_g4_g2_ParamLimits

0x93ba,	// (0x0001f8b6) list_medium_line_t4_g4_g2

0xa0e6,	// (0x000205e2) list_medium_line_t4_g4_g3_ParamLimits

0xa0e6,	// (0x000205e2) list_medium_line_t4_g4_g3

0x9321,	// (0x0001f81d) list_medium_line_t4_g4_g4_ParamLimits

0x9321,	// (0x0001f81d) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x00025832) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x00025832) list_medium_line_t4_g4_g

0xa0f2,	// (0x000205ee) list_medium_line_t4_g4_t1_ParamLimits

0xa0f2,	// (0x000205ee) list_medium_line_t4_g4_t1

0xa107,	// (0x00020603) list_medium_line_t4_g4_t2_ParamLimits

0xa107,	// (0x00020603) list_medium_line_t4_g4_t2

0xa11c,	// (0x00020618) list_medium_line_t4_g4_t3_ParamLimits

0xa11c,	// (0x00020618) list_medium_line_t4_g4_t3

0x9354,	// (0x0001f850) list_medium_line_t4_g4_t4_ParamLimits

0x9354,	// (0x0001f850) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0002583b) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0002583b) list_medium_line_t4_g4_t

0xa1e0,	// (0x000206dc) chi_dic_find_pane_g1

0x7804,	// (0x0001dd00) main_tport_pane

0xc97c,	// (0x00022e78) list_medium_line_plain_t1

0xc9a2,	// (0x00022e9e) list_medium_line_t2_g2_g1_ParamLimits

0xc9a2,	// (0x00022e9e) list_medium_line_t2_g2_g1

0xc9ae,	// (0x00022eaa) list_medium_line_t2_g2_g2_ParamLimits

0xc9ae,	// (0x00022eaa) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x00025f0f) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x00025f0f) list_medium_line_t2_g2_g

0xc9ba,	// (0x00022eb6) list_medium_line_t2_g2_t1_ParamLimits

0xc9ba,	// (0x00022eb6) list_medium_line_t2_g2_t1

0xc9d4,	// (0x00022ed0) list_medium_line_t2_g2_t2_ParamLimits

0xc9d4,	// (0x00022ed0) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x00025f14) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x00025f14) list_medium_line_t2_g2_t

0x4834,	// (0x0001ad30) aid_sp_fs_list_icon_a_sm

0x483c,	// (0x0001ad38) aid_sp_fs_list_icon_d

0x4844,	// (0x0001ad40) aid_sp_fs_text_primary

0x484d,	// (0x0001ad49) aid_sp_fs_text_secondary

0xcef6,	// (0x000233f2) list_medium_line

0xcef6,	// (0x000233f2) list_medium_line_g2

0xcef6,	// (0x000233f2) list_medium_line_g3

0xcef6,	// (0x000233f2) list_medium_line_plain

0xcef6,	// (0x000233f2) list_medium_line_plain_t2

0xcef6,	// (0x000233f2) list_medium_line_plain_t3

0xcef6,	// (0x000233f2) list_medium_line_right_icon

0xcef6,	// (0x000233f2) list_medium_line_right_iconx2

0xcef6,	// (0x000233f2) list_medium_line_t2

0xcef6,	// (0x000233f2) list_medium_line_t2_g2

0xcef6,	// (0x000233f2) list_medium_line_t2_g3

0xcef6,	// (0x000233f2) list_medium_line_t2_right_icon

0xcef6,	// (0x000233f2) list_medium_line_t2_right_iconx2

0xcef6,	// (0x000233f2) list_medium_line_t3

0xcef6,	// (0x000233f2) list_medium_line_t3_g2

0xcef6,	// (0x000233f2) list_medium_line_t3_g3

0xcef6,	// (0x000233f2) list_medium_line_t3_right_iconx2

0xceff,	// (0x000233fb) list_medium_line_t4_g4

0xcef6,	// (0x000233f2) list_medium_line_x2

0xcef6,	// (0x000233f2) list_medium_line_x2_t2_g2

0xcef6,	// (0x000233f2) list_medium_line_x2_t2_g3

0xcef6,	// (0x000233f2) list_medium_line_x2_t2_g4

0xcef6,	// (0x000233f2) list_medium_line_x2_t3

0xcef6,	// (0x000233f2) list_medium_line_x2_t3_g2

0xcef6,	// (0x000233f2) list_medium_line_x2_t3_g3

0xcef6,	// (0x000233f2) list_medium_line_x2_t3_g4

0xcef6,	// (0x000233f2) list_medium_line_x2_t4_g2

0xcef6,	// (0x000233f2) list_medium_line_x2_t4_g4

0xcf08,	// (0x00023404) list_medium_line_x3

0xcf08,	// (0x00023404) list_medium_line_x3_t4

0xcf08,	// (0x00023404) list_medium_line_x3_t4_g4

0xceff,	// (0x000233fb) list_medium_line_x4_t4

0xceff,	// (0x000233fb) list_medium_line_x4_t4_g7

0xceff,	// (0x000233fb) list_medium_line_x4_t5

0xcf11,	// (0x0002340d) list_single_fs_dyc_pane_ParamLimits

0xcf11,	// (0x0002340d) list_single_fs_dyc_pane

0x9309,	// (0x0001f805) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9309,	// (0x0001f805) list_medium_line_x4_t4_g7_g1

0xd56c,	// (0x00023a68) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd56c,	// (0x00023a68) list_medium_line_x4_t4_g7_g2

0xd578,	// (0x00023a74) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd578,	// (0x00023a74) list_medium_line_x4_t4_g7_g3

0xd587,	// (0x00023a83) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd587,	// (0x00023a83) list_medium_line_x4_t4_g7_g4

0xd593,	// (0x00023a8f) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd593,	// (0x00023a8f) list_medium_line_x4_t4_g7_g5

0xd5a2,	// (0x00023a9e) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd5a2,	// (0x00023a9e) list_medium_line_x4_t4_g7_g6

0xd5b1,	// (0x00023aad) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd5b1,	// (0x00023aad) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x000260df) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x000260df) list_medium_line_x4_t4_g7_g

0xd5bd,	// (0x00023ab9) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd5bd,	// (0x00023ab9) list_medium_line_x4_t4_g7_t1

0xd5d2,	// (0x00023ace) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd5d2,	// (0x00023ace) list_medium_line_x4_t4_g7_t2

0xd5e7,	// (0x00023ae3) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd5e7,	// (0x00023ae3) list_medium_line_x4_t4_g7_t3

0xd5fc,	// (0x00023af8) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd5fc,	// (0x00023af8) list_medium_line_x4_t4_g7_t4

0xd60e,	// (0x00023b0a) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd60e,	// (0x00023b0a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x000260ee) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x000260ee) list_medium_line_x4_t4_g7_t

0xd620,	// (0x00023b1c) list_single_dyc_row_pane_ParamLimits

0xd620,	// (0x00023b1c) list_single_dyc_row_pane

0xdc72,	// (0x0002416e) call5_gesture_pane_ParamLimits

0xdc72,	// (0x0002416e) call5_gesture_pane

0xdca2,	// (0x0002419e) call5_windows_pane_ParamLimits

0xdca2,	// (0x0002419e) call5_windows_pane

0xdd0f,	// (0x0002420b) call5_swipe_1_pane_cp_ParamLimits

0xdd0f,	// (0x0002420b) call5_swipe_1_pane_cp

0xdd1b,	// (0x00024217) call5_swipe_2_pane_cp_ParamLimits

0xdd1b,	// (0x00024217) call5_swipe_2_pane_cp

0x1048,	// (0x00017544) call5_image_pane_cp

0xdd27,	// (0x00024223) popup_call5_audio_first_window_cp_ParamLimits

0xdd27,	// (0x00024223) popup_call5_audio_first_window_cp

0x5338,	// (0x0001b834) call5_swipe_1_pane_g1_cp_ParamLimits

0x5338,	// (0x0001b834) call5_swipe_1_pane_g1_cp

0x5378,	// (0x0001b874) call5_swipe_1_pane_g2_cp

0x5351,	// (0x0001b84d) call5_swipe_1_pane_t1_cp_ParamLimits

0x5351,	// (0x0001b84d) call5_swipe_1_pane_t1_cp

0x5338,	// (0x0001b834) call5_swipe_2_pane_g1_cp_ParamLimits

0x5338,	// (0x0001b834) call5_swipe_2_pane_g1_cp

0x5380,	// (0x0001b87c) call5_swipe_2_pane_g2_cp

0x5388,	// (0x0001b884) call5_swipe_2_pane_t1_cp_ParamLimits

0x5388,	// (0x0001b884) call5_swipe_2_pane_t1_cp

0x0672,	// (0x00016b6e) main_sp_fs_email_pane

0x539d,	// (0x0001b899) main_sp_fs_listscroll_pane_te

0xdd33,	// (0x0002422f) popup_sp_fs_action_menu_pane_ParamLimits

0xdd33,	// (0x0002422f) popup_sp_fs_action_menu_pane

0x346b,	// (0x00019967) bg_sp_fs_ctrlbar_pane_g1

0x52db,	// (0x0001b7d7) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x52ed,	// (0x0001b7e9) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x52e4,	// (0x0001b7e0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x346b,	// (0x00019967) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x000261dc) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x3258,	// (0x00019754) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x3258,	// (0x00019754) bg_sp_fs_ctrlbar_ddmenu_pane

0x53a6,	// (0x0001b8a2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x53a6,	// (0x0001b8a2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x53b2,	// (0x0001b8ae) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x53b2,	// (0x0001b8ae) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x000261e5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x000261e5) main_sp_fs_ctrlbar_ddmenu_pane_g

0x53be,	// (0x0001b8ba) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x53be,	// (0x0001b8ba) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xdd65,	// (0x00024261) list_medium_line_t2_right_icon_g1

0xdd6d,	// (0x00024269) list_medium_line_t2_right_icon_t1

0xdd7c,	// (0x00024278) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x000261ea) list_medium_line_t2_right_icon_t

0x2f69,	// (0x00019465) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2f69,	// (0x00019465) bg_sp_fs_ctrlbar_pane

0xdddf,	// (0x000242db) main_sp_fs_ctrlbar_button_pane_cp01

0xdde7,	// (0x000242e3) main_sp_fs_ctrlbar_ddmenu_pane

0x5410,	// (0x0001b90c) main_sp_fs_ctrlbar_pane_g1

0x541c,	// (0x0001b918) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x000261ef) main_sp_fs_ctrlbar_pane_g

0x5428,	// (0x0001b924) main_sp_fs_ctrlbar_pane_t1

0xddf1,	// (0x000242ed) main_sp_fs_ctrlbar_pane

0xde07,	// (0x00024303) main_sp_fs_listscroll_pane_te_cp01

0xde18,	// (0x00024314) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xde18,	// (0x00024314) popup_sp_fs_action_menu_pane_cp01

0x0672,	// (0x00016b6e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0672,	// (0x00016b6e) bg_sp_fs_highlight_list_pane_cp01

0x5458,	// (0x0001b954) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5458,	// (0x0001b954) sp_fs_action_menu_list_gene_pane_g1

0x5467,	// (0x0001b963) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x5467,	// (0x0001b963) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x000261f9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x000261f9) sp_fs_action_menu_list_gene_pane_g

0x5474,	// (0x0001b970) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5474,	// (0x0001b970) sp_fs_action_menu_list_gene_pane_t1

0x548c,	// (0x0001b988) sp_fs_action_menu_list_gene_pane_ParamLimits

0x548c,	// (0x0001b988) sp_fs_action_menu_list_gene_pane

0x54a9,	// (0x0001b9a5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x54a9,	// (0x0001b9a5) popup_sp_fs_action_menu_bg_pane

0x54b7,	// (0x0001b9b3) sp_fs_action_menu_list_pane_ParamLimits

0x54b7,	// (0x0001b9b3) sp_fs_action_menu_list_pane

0x54d5,	// (0x0001b9d1) sp_fs_scroll_pane_cp01_ParamLimits

0x54d5,	// (0x0001b9d1) sp_fs_scroll_pane_cp01

0xde3e,	// (0x0002433a) list_medium_line_plain_t2_t1

0xde4d,	// (0x00024349) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x000261fe) list_medium_line_plain_t2_t

0xde5b,	// (0x00024357) list_medium_line_plain_t3_t1

0xde6b,	// (0x00024367) list_medium_line_plain_t3_t2

0xde79,	// (0x00024375) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x00026203) list_medium_line_plain_t3_t

0x9309,	// (0x0001f805) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9309,	// (0x0001f805) list_medium_line_x2_t2_g2_g1

0x9321,	// (0x0001f81d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9321,	// (0x0001f81d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x00025742) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x00025742) list_medium_line_x2_t2_g2_g

0xa0f2,	// (0x000205ee) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa0f2,	// (0x000205ee) list_medium_line_x2_t2_g2_t1

0x9354,	// (0x0001f850) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9354,	// (0x0001f850) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0002620a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0002620a) list_medium_line_x2_t2_g2_t

0x9309,	// (0x0001f805) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9309,	// (0x0001f805) list_medium_line_x2_t4_g2_g1

0x9321,	// (0x0001f81d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9321,	// (0x0001f81d) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x00025742) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x00025742) list_medium_line_x2_t4_g2_g

0xde87,	// (0x00024383) list_medium_line_x2_t4_g2_t1_ParamLimits

0xde87,	// (0x00024383) list_medium_line_x2_t4_g2_t1

0xdea1,	// (0x0002439d) list_medium_line_x2_t4_g2_t2_ParamLimits

0xdea1,	// (0x0002439d) list_medium_line_x2_t4_g2_t2

0xdeb7,	// (0x000243b3) list_medium_line_x2_t4_g2_t3_ParamLimits

0xdeb7,	// (0x000243b3) list_medium_line_x2_t4_g2_t3

0x9354,	// (0x0001f850) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9354,	// (0x0001f850) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0002620f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0002620f) list_medium_line_x2_t4_g2_t

0xdecc,	// (0x000243c8) list_medium_line_t3_right_iconx2_g1

0xdd65,	// (0x00024261) list_medium_line_t3_right_iconx2_g2

0xded4,	// (0x000243d0) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x00026218) list_medium_line_t3_right_iconx2_g

0xdedc,	// (0x000243d8) list_medium_line_t3_right_iconx2_t1

0xdeec,	// (0x000243e8) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0002621f) list_medium_line_t3_right_iconx2_t

0x9309,	// (0x0001f805) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9309,	// (0x0001f805) list_medium_line_x3_t4_g4_g1

0x9315,	// (0x0001f811) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9315,	// (0x0001f811) list_medium_line_x3_t4_g4_g2

0x93ba,	// (0x0001f8b6) list_medium_line_x3_t4_g4_g3_ParamLimits

0x93ba,	// (0x0001f8b6) list_medium_line_x3_t4_g4_g3

0xdefa,	// (0x000243f6) list_medium_line_x3_t4_g4_g4_ParamLimits

0xdefa,	// (0x000243f6) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x00026224) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x00026224) list_medium_line_x3_t4_g4_g

0xdf06,	// (0x00024402) list_medium_line_x3_t4_g4_t1_ParamLimits

0xdf06,	// (0x00024402) list_medium_line_x3_t4_g4_t1

0xdf1d,	// (0x00024419) list_medium_line_x3_t4_g4_t2_ParamLimits

0xdf1d,	// (0x00024419) list_medium_line_x3_t4_g4_t2

0xa107,	// (0x00020603) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa107,	// (0x00020603) list_medium_line_x3_t4_g4_t3

0xdf32,	// (0x0002442e) list_medium_line_x3_t4_g4_t4_ParamLimits

0xdf32,	// (0x0002442e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0002622d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0002622d) list_medium_line_x3_t4_g4_t

0xdf4f,	// (0x0002444b) list_single_dyc_row_text_pane_t1_ParamLimits

0xdf4f,	// (0x0002444b) list_single_dyc_row_text_pane_t1

0xdf86,	// (0x00024482) list_single_dyc_row_text_pane_t2_ParamLimits

0xdf86,	// (0x00024482) list_single_dyc_row_text_pane_t2

0x54fb,	// (0x0001b9f7) list_single_dyc_row_text_pane_t3_ParamLimits

0x54fb,	// (0x0001b9f7) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3a,	// (0x00026236) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x00026236) list_single_dyc_row_text_pane_t

0x551f,	// (0x0001ba1b) list_single_dyc_row_pane_g1_ParamLimits

0x551f,	// (0x0001ba1b) list_single_dyc_row_pane_g1

0x552b,	// (0x0001ba27) list_single_dyc_row_pane_g2_ParamLimits

0x552b,	// (0x0001ba27) list_single_dyc_row_pane_g2

0x5537,	// (0x0001ba33) list_single_dyc_row_pane_g3_ParamLimits

0x5537,	// (0x0001ba33) list_single_dyc_row_pane_g3

0x5543,	// (0x0001ba3f) list_single_dyc_row_pane_g4_ParamLimits

0x5543,	// (0x0001ba3f) list_single_dyc_row_pane_g4

0x0003,

0xfd47,	// (0x00026243) list_single_dyc_row_pane_g_ParamLimits

0xfd47,	// (0x00026243) list_single_dyc_row_pane_g

0x554f,	// (0x0001ba4b) list_single_dyc_row_text_pane_ParamLimits

0x554f,	// (0x0001ba4b) list_single_dyc_row_text_pane

0x0608,	// (0x00016b04) bg_sp_fs_scroll_pane

0x556e,	// (0x0001ba6a) thumb_sp_fs_scroll_pane

0xc9a2,	// (0x00022e9e) list_medium_line_g1_ParamLimits

0xc9a2,	// (0x00022e9e) list_medium_line_g1

0xe09d,	// (0x00024599) list_medium_line_t1_ParamLimits

0xe09d,	// (0x00024599) list_medium_line_t1

0x9309,	// (0x0001f805) list_medium_line_x2_g1_ParamLimits

0x9309,	// (0x0001f805) list_medium_line_x2_g1

0x9315,	// (0x0001f811) list_medium_line_x2_g2_ParamLimits

0x9315,	// (0x0001f811) list_medium_line_x2_g2

0x0001,

0xfd50,	// (0x0002624c) list_medium_line_x2_g_ParamLimits

0xfd50,	// (0x0002624c) list_medium_line_x2_g

0x5577,	// (0x0001ba73) list_medium_line_x2_t1_ParamLimits

0x5577,	// (0x0001ba73) list_medium_line_x2_t1

0x9309,	// (0x0001f805) list_medium_line_x3_g1_ParamLimits

0x9309,	// (0x0001f805) list_medium_line_x3_g1

0x9315,	// (0x0001f811) list_medium_line_x3_g2_ParamLimits

0x9315,	// (0x0001f811) list_medium_line_x3_g2

0x0001,

0xfd50,	// (0x0002624c) list_medium_line_x3_g_ParamLimits

0xfd50,	// (0x0002624c) list_medium_line_x3_g

0x5577,	// (0x0001ba73) list_medium_line_x3_t1_ParamLimits

0x5577,	// (0x0001ba73) list_medium_line_x3_t1

0x558d,	// (0x0001ba89) thumb_sp_fs_scroll_pane_g1

0x5596,	// (0x0001ba92) thumb_sp_fs_scroll_pane_g2

0x559f,	// (0x0001ba9b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x00026251) thumb_sp_fs_scroll_pane_g

0x558d,	// (0x0001ba89) bg_sp_fs_scroll_pane_g1

0x5596,	// (0x0001ba92) bg_sp_fs_scroll_pane_g2

0x559f,	// (0x0001ba9b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x00026251) bg_sp_fs_scroll_pane_g

0x9309,	// (0x0001f805) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9309,	// (0x0001f805) list_medium_line_x2_t3_g4_g1

0x93ae,	// (0x0001f8aa) list_medium_line_x2_t3_g4_g2_ParamLimits

0x93ae,	// (0x0001f8aa) list_medium_line_x2_t3_g4_g2

0x9315,	// (0x0001f811) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9315,	// (0x0001f811) list_medium_line_x2_t3_g4_g3

0x9321,	// (0x0001f81d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9321,	// (0x0001f81d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000257be) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000257be) list_medium_line_x2_t3_g4_g

0xe0b2,	// (0x000245ae) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe0b2,	// (0x000245ae) list_medium_line_x2_t3_g4_t1

0xe0c8,	// (0x000245c4) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe0c8,	// (0x000245c4) list_medium_line_x2_t3_g4_t2

0x9354,	// (0x0001f850) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9354,	// (0x0001f850) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5c,	// (0x00026258) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5c,	// (0x00026258) list_medium_line_x2_t3_g4_t

0xc9a2,	// (0x00022e9e) list_medium_line_g2_g1_ParamLimits

0xc9a2,	// (0x00022e9e) list_medium_line_g2_g1

0xc9ae,	// (0x00022eaa) list_medium_line_g2_g2_ParamLimits

0xc9ae,	// (0x00022eaa) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x00025f0f) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x00025f0f) list_medium_line_g2_g

0xe0e2,	// (0x000245de) list_medium_line_g2_t1_ParamLimits

0xe0e2,	// (0x000245de) list_medium_line_g2_t1

0xc9a2,	// (0x00022e9e) list_medium_line_t3_g2_g1_ParamLimits

0xc9a2,	// (0x00022e9e) list_medium_line_t3_g2_g1

0xc9ae,	// (0x00022eaa) list_medium_line_t3_g2_g2_ParamLimits

0xc9ae,	// (0x00022eaa) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x00025f0f) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x00025f0f) list_medium_line_t3_g2_g

0xe0f7,	// (0x000245f3) list_medium_line_t3_g2_t1_ParamLimits

0xe0f7,	// (0x000245f3) list_medium_line_t3_g2_t1

0xe111,	// (0x0002460d) list_medium_line_t3_g2_t2_ParamLimits

0xe111,	// (0x0002460d) list_medium_line_t3_g2_t2

0xe127,	// (0x00024623) list_medium_line_t3_g2_t3_ParamLimits

0xe127,	// (0x00024623) list_medium_line_t3_g2_t3

0x0002,

0xfd63,	// (0x0002625f) list_medium_line_t3_g2_t_ParamLimits

0xfd63,	// (0x0002625f) list_medium_line_t3_g2_t

0xdd65,	// (0x00024261) list_medium_line_right_icon_g1

0xe13d,	// (0x00024639) list_medium_line_right_icon_t1

0xc9a2,	// (0x00022e9e) list_medium_line_t2_g1_ParamLimits

0xc9a2,	// (0x00022e9e) list_medium_line_t2_g1

0xe14b,	// (0x00024647) list_medium_line_t2_t1_ParamLimits

0xe14b,	// (0x00024647) list_medium_line_t2_t1

0xe164,	// (0x00024660) list_medium_line_t2_t2_ParamLimits

0xe164,	// (0x00024660) list_medium_line_t2_t2

0x0001,

0xfd6a,	// (0x00026266) list_medium_line_t2_t_ParamLimits

0xfd6a,	// (0x00026266) list_medium_line_t2_t

0xc9a2,	// (0x00022e9e) list_medium_line_t3_g1_ParamLimits

0xc9a2,	// (0x00022e9e) list_medium_line_t3_g1

0xe179,	// (0x00024675) list_medium_line_t3_t1_ParamLimits

0xe179,	// (0x00024675) list_medium_line_t3_t1

0xe193,	// (0x0002468f) list_medium_line_t3_t2_ParamLimits

0xe193,	// (0x0002468f) list_medium_line_t3_t2

0xe1a9,	// (0x000246a5) list_medium_line_t3_t3_ParamLimits

0xe1a9,	// (0x000246a5) list_medium_line_t3_t3

0x0002,

0xfd6f,	// (0x0002626b) list_medium_line_t3_t_ParamLimits

0xfd6f,	// (0x0002626b) list_medium_line_t3_t

0xc9a2,	// (0x00022e9e) list_medium_line_g3_g1_ParamLimits

0xc9a2,	// (0x00022e9e) list_medium_line_g3_g1

0xe1be,	// (0x000246ba) list_medium_line_g3_g2_ParamLimits

0xe1be,	// (0x000246ba) list_medium_line_g3_g2

0xc9ae,	// (0x00022eaa) list_medium_line_g3_g3_ParamLimits

0xc9ae,	// (0x00022eaa) list_medium_line_g3_g3

0x0002,

0xfd76,	// (0x00026272) list_medium_line_g3_g_ParamLimits

0xfd76,	// (0x00026272) list_medium_line_g3_g

0xe1ca,	// (0x000246c6) list_medium_line_g3_t1_ParamLimits

0xe1ca,	// (0x000246c6) list_medium_line_g3_t1

0xc9a2,	// (0x00022e9e) list_medium_line_t2_g3_g1_ParamLimits

0xc9a2,	// (0x00022e9e) list_medium_line_t2_g3_g1

0xe1be,	// (0x000246ba) list_medium_line_t2_g3_g2_ParamLimits

0xe1be,	// (0x000246ba) list_medium_line_t2_g3_g2

0xc9ae,	// (0x00022eaa) list_medium_line_t2_g3_g3_ParamLimits

0xc9ae,	// (0x00022eaa) list_medium_line_t2_g3_g3

0x0002,

0xfd76,	// (0x00026272) list_medium_line_t2_g3_g_ParamLimits

0xfd76,	// (0x00026272) list_medium_line_t2_g3_g

0xe1df,	// (0x000246db) list_medium_line_t2_g3_t1_ParamLimits

0xe1df,	// (0x000246db) list_medium_line_t2_g3_t1

0xe1f9,	// (0x000246f5) list_medium_line_t2_g3_t2_ParamLimits

0xe1f9,	// (0x000246f5) list_medium_line_t2_g3_t2

0x0001,

0xfd7d,	// (0x00026279) list_medium_line_t2_g3_t_ParamLimits

0xfd7d,	// (0x00026279) list_medium_line_t2_g3_t

0xc9a2,	// (0x00022e9e) list_medium_line_t3_g3_g1_ParamLimits

0xc9a2,	// (0x00022e9e) list_medium_line_t3_g3_g1

0xe1be,	// (0x000246ba) list_medium_line_t3_g3_g2_ParamLimits

0xe1be,	// (0x000246ba) list_medium_line_t3_g3_g2

0xc9ae,	// (0x00022eaa) list_medium_line_t3_g3_g3_ParamLimits

0xc9ae,	// (0x00022eaa) list_medium_line_t3_g3_g3

0x0002,

0xfd76,	// (0x00026272) list_medium_line_t3_g3_g_ParamLimits

0xfd76,	// (0x00026272) list_medium_line_t3_g3_g

0xe20f,	// (0x0002470b) list_medium_line_t3_g3_t1_ParamLimits

0xe20f,	// (0x0002470b) list_medium_line_t3_g3_t1

0xe228,	// (0x00024724) list_medium_line_t3_g3_t2_ParamLimits

0xe228,	// (0x00024724) list_medium_line_t3_g3_t2

0xe23e,	// (0x0002473a) list_medium_line_t3_g3_t3_ParamLimits

0xe23e,	// (0x0002473a) list_medium_line_t3_g3_t3

0x0002,

0xfd82,	// (0x0002627e) list_medium_line_t3_g3_t_ParamLimits

0xfd82,	// (0x0002627e) list_medium_line_t3_g3_t

0xdecc,	// (0x000243c8) list_medium_line_right_iconx2_g1

0xdd65,	// (0x00024261) list_medium_line_right_iconx2_g2

0x0001,

0xfd89,	// (0x00026285) list_medium_line_right_iconx2_g

0xe254,	// (0x00024750) list_medium_line_right_iconx2_t1

0xdecc,	// (0x000243c8) list_medium_line_t2_right_iconx2_g1

0xdd65,	// (0x00024261) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd89,	// (0x00026285) list_medium_line_t2_right_iconx2_g

0xe262,	// (0x0002475e) list_medium_line_t2_right_iconx2_t1

0xe272,	// (0x0002476e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8e,	// (0x0002628a) list_medium_line_t2_right_iconx2_t

0xe280,	// (0x0002477c) list_medium_line_x4_t4_t1

0xe28e,	// (0x0002478a) list_medium_line_x4_t4_t2

0xe29c,	// (0x00024798) list_medium_line_x4_t4_t3

0xe2aa,	// (0x000247a6) list_medium_line_x4_t4_t4

0x0003,

0xfd93,	// (0x0002628f) list_medium_line_x4_t4_t

0xe2dc,	// (0x000247d8) tport_appsw_pane_ParamLimits

0xe2dc,	// (0x000247d8) tport_appsw_pane

0xe2e8,	// (0x000247e4) tport_contact_pane_ParamLimits

0xe2e8,	// (0x000247e4) tport_contact_pane

0xe2f6,	// (0x000247f2) tport_listscroll_pane_ParamLimits

0xe2f6,	// (0x000247f2) tport_listscroll_pane

0xe304,	// (0x00024800) cell_tport_appsw_pane_ParamLimits

0xe304,	// (0x00024800) cell_tport_appsw_pane

0x370b,	// (0x00019c07) tport_appsw_pane_g1_ParamLimits

0x370b,	// (0x00019c07) tport_appsw_pane_g1

0x55a8,	// (0x0001baa4) tport_contact_pane_g1

0x55b1,	// (0x0001baad) tport_contact_pane_t1

0x55bf,	// (0x0001babb) tport_contact_pane_t2

0x0001,

0xfd9c,	// (0x00026298) tport_contact_pane_t

0x55cd,	// (0x0001bac9) list_tport_pane

0x55d6,	// (0x0001bad2) scroll_pane_cp_030

0x55e7,	// (0x0001bae3) cell_tport_appsw_pane_g1

0x55f7,	// (0x0001baf3) cell_tport_appsw_pane_t1

0x5605,	// (0x0001bb01) grid_highlight_pane_cp019

0xe32b,	// (0x00024827) list_tport_double_graphic_pane_ParamLimits

0xe32b,	// (0x00024827) list_tport_double_graphic_pane

0x0672,	// (0x00016b6e) list_highlight_pane_cp023_ParamLimits

0x0672,	// (0x00016b6e) list_highlight_pane_cp023

0xe338,	// (0x00024834) list_tport_double_graphic_pane_g1_ParamLimits

0xe338,	// (0x00024834) list_tport_double_graphic_pane_g1

0xe345,	// (0x00024841) list_tport_double_graphic_pane_t1_ParamLimits

0xe345,	// (0x00024841) list_tport_double_graphic_pane_t1

0xe35a,	// (0x00024856) list_tport_double_graphic_pane_t2_ParamLimits

0xe35a,	// (0x00024856) list_tport_double_graphic_pane_t2

0x0001,

0xfda8,	// (0x000262a4) list_tport_double_graphic_pane_t_ParamLimits

0xfda8,	// (0x000262a4) list_tport_double_graphic_pane_t

0x0608,	// (0x00016b04) main_cale_note_pane

0x8463,	// (0x0001e95f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8463,	// (0x0001e95f) cell_vitu2_function_top_wide_pane_cp01

0xd979,	// (0x00023e75) wait_bar_pane_cp05_ParamLimits

0x0672,	// (0x00016b6e) listscroll_cmail_pane

0x560d,	// (0x0001bb09) list_cmail_pane

0xe36c,	// (0x00024868) list_cmail_body_pane

0xe381,	// (0x0002487d) list_single_cmail_header_caption_pane

0xe397,	// (0x00024893) list_single_cmail_header_detail_pane_ParamLimits

0xe397,	// (0x00024893) list_single_cmail_header_detail_pane

0x561d,	// (0x0001bb19) list_single_cmail_header_caption_pane_t1

0xe3be,	// (0x000248ba) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe3be,	// (0x000248ba) list_single_cmail_header_detail_pane_g1

0x5634,	// (0x0001bb30) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5634,	// (0x0001bb30) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdad,	// (0x000262a9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdad,	// (0x000262a9) list_single_cmail_header_detail_pane_g

0x564d,	// (0x0001bb49) list_single_cmail_header_detail_pane_t1_ParamLimits

0x564d,	// (0x0001bb49) list_single_cmail_header_detail_pane_t1

0x56ad,	// (0x0001bba9) list_single_cmail_header_editor_pane_bg_ParamLimits

0x56ad,	// (0x0001bba9) list_single_cmail_header_editor_pane_bg

0x56c4,	// (0x0001bbc0) list_cmail_body_pane_g1

0x56cd,	// (0x0001bbc9) list_cmail_body_pane_t1

0x41cc,	// (0x0001a6c8) list_single_cmail_header_editor_pane_bg_g1

0x12b8,	// (0x000177b4) list_single_cmail_header_editor_pane_bg_g1_copy1

0x41dc,	// (0x0001a6d8) list_single_cmail_header_editor_pane_bg_g1_copy2

0x41d4,	// (0x0001a6d0) list_single_cmail_header_editor_pane_bg_g1_copy3

0x4489,	// (0x0001a985) list_single_cmail_header_editor_pane_bg_g1_copy4

0x41fc,	// (0x0001a6f8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x41ec,	// (0x0001a6e8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x41f4,	// (0x0001a6f0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1298,	// (0x00017794) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe3d4,	// (0x000248d0) calenote_gesture_pane_ParamLimits

0xe3d4,	// (0x000248d0) calenote_gesture_pane

0xe3ec,	// (0x000248e8) calenote_window_pane_ParamLimits

0xe3ec,	// (0x000248e8) calenote_window_pane

0x56db,	// (0x0001bbd7) popup_note_window_cp01

0xe404,	// (0x00024900) calenote_swipe_1_pane_ParamLimits

0xe404,	// (0x00024900) calenote_swipe_1_pane

0xdd1b,	// (0x00024217) calenote_swipe_2_pane_ParamLimits

0xdd1b,	// (0x00024217) calenote_swipe_2_pane

0x5338,	// (0x0001b834) calenote_swipe_1_pane_g1_ParamLimits

0x5338,	// (0x0001b834) calenote_swipe_1_pane_g1

0x5345,	// (0x0001b841) calenote_swipe_1_pane_g2_ParamLimits

0x5345,	// (0x0001b841) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x000261d2) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x000261d2) calenote_swipe_1_pane_g

0x56ed,	// (0x0001bbe9) calenote_swipe_1_pane_t1_ParamLimits

0x56ed,	// (0x0001bbe9) calenote_swipe_1_pane_t1

0x5338,	// (0x0001b834) calenote_swipe_2_pane_g1_ParamLimits

0x5338,	// (0x0001b834) calenote_swipe_2_pane_g1

0x570c,	// (0x0001bc08) calenote_swipe_2_pane_g2_ParamLimits

0x570c,	// (0x0001bc08) calenote_swipe_2_pane_g2

0x0001,

0xfdb9,	// (0x000262b5) calenote_swipe_2_pane_g_ParamLimits

0xfdb9,	// (0x000262b5) calenote_swipe_2_pane_g

0x5718,	// (0x0001bc14) calenote_swipe_2_pane_t1_ParamLimits

0x5718,	// (0x0001bc14) calenote_swipe_2_pane_t1

0x0608,	// (0x00016b04) main_mup_navstr_pane

0xba3f,	// (0x00021f3b) main_mup3_pane_t7_ParamLimits

0xba3f,	// (0x00021f3b) main_mup3_pane_t7

0x7df5,	// (0x0001e2f1) main_mp4_pane_g6_ParamLimits

0x7df5,	// (0x0001e2f1) main_mp4_pane_g6

0x80c6,	// (0x0001e5c2) main_image3_pane_t4_ParamLimits

0x80c6,	// (0x0001e5c2) main_image3_pane_t4

0xe417,	// (0x00024913) popup_navstr_preview_pane_ParamLimits

0xe417,	// (0x00024913) popup_navstr_preview_pane

0xe423,	// (0x0002491f) scroll_navstr_pane_ParamLimits

0xe423,	// (0x0002491f) scroll_navstr_pane

0x0608,	// (0x00016b04) bg_popup_preview_window_pane_cp04

0x573f,	// (0x0001bc3b) popup_navstr_preview_pane_t1

0xe42f,	// (0x0002492b) scroll_navstr_pane_g1_ParamLimits

0xe42f,	// (0x0002492b) scroll_navstr_pane_g1

0xe43c,	// (0x00024938) scroll_navstr_pane_t1_ParamLimits

0xe43c,	// (0x00024938) scroll_navstr_pane_t1

0x56e4,	// (0x0001bbe0) bg_button_pane_cp014

0x56e4,	// (0x0001bbe0) bg_button_pane_cp030

0xdc18,	// (0x00024114) list_double_fisheye_pane_g4_ParamLimits

0xdc18,	// (0x00024114) list_double_fisheye_pane_g4

0xdc24,	// (0x00024120) list_double_fisheye_pane_g5_ParamLimits

0xdc24,	// (0x00024120) list_double_fisheye_pane_g5

0x52cf,	// (0x0001b7cb) sp_fs_scroll_pane_cp03

0x5410,	// (0x0001b90c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x541c,	// (0x0001b918) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x000261ef) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x5428,	// (0x0001b924) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x5615,	// (0x0001bb11) sp_fs_scroll_pane_cp02

0x0fad,	// (0x000174a9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0fad,	// (0x000174a9) popup_sp_fs_calendar_preview_list_single_pane

0x0608,	// (0x00016b04) main_cam6_pano_pane

0x77e8,	// (0x0001dce4) main_mup3_pane_ParamLimits

0x0608,	// (0x00016b04) main_phacti_pane

0xd86c,	// (0x00023d68) bg_button_pane_cp11

0xd884,	// (0x00023d80) main_mobtv_info_pane_g2_ParamLimits

0xd884,	// (0x00023d80) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0002614f) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0002614f) main_mobtv_info_pane_g

0xda10,	// (0x00023f0c) sc_clock_pane_t5_ParamLimits

0xda10,	// (0x00023f0c) sc_clock_pane_t5

0xda99,	// (0x00023f95) main_radioblah_pane_g1_ParamLimits

0x5245,	// (0x0001b741) main_radioblah_pane_t3_ParamLimits

0x5245,	// (0x0001b741) main_radioblah_pane_t3

0x525d,	// (0x0001b759) main_radioblah_pane_t4_ParamLimits

0x525d,	// (0x0001b759) main_radioblah_pane_t4

0xdab7,	// (0x00023fb3) main_radioblah_text_pane_ParamLimits

0xdab7,	// (0x00023fb3) main_radioblah_text_pane

0xdac4,	// (0x00023fc0) main_radioblah_info_pane_g1_ParamLimits

0xdb51,	// (0x0002404d) main_radioblah_info_pane_t4_ParamLimits

0xdb51,	// (0x0002404d) main_radioblah_info_pane_t4

0x0672,	// (0x00016b6e) main_sp_fs_calendar_pane

0xe44e,	// (0x0002494a) main_phacti_pane_g1

0xe456,	// (0x00024952) phacti_note_pane_ParamLimits

0xe456,	// (0x00024952) phacti_note_pane

0x5756,	// (0x0001bc52) phacti_term_pane_ParamLimits

0x5756,	// (0x0001bc52) phacti_term_pane

0x576b,	// (0x0001bc67) phacti_note_pane_t1_ParamLimits

0x576b,	// (0x0001bc67) phacti_note_pane_t1

0x5782,	// (0x0001bc7e) phacti_term_pane_g1

0x578a,	// (0x0001bc86) phacti_term_pane_t1_ParamLimits

0x578a,	// (0x0001bc86) phacti_term_pane_t1

0x57b4,	// (0x0001bcb0) popup_sp_fs_calendar_preview_list_single_pane_g1

0x57bc,	// (0x0001bcb8) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc3,	// (0x000262bf) popup_sp_fs_calendar_preview_list_single_pane_g

0x57c4,	// (0x0001bcc0) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x57c4,	// (0x0001bcc0) popup_sp_fs_calendar_preview_list_single_pane_t1

0x57da,	// (0x0001bcd6) aid_popup_sp_fs_bg_corner_pane

0x346b,	// (0x00019967) popup_sp_fs_calendar_preview_bg_pane_g1

0x0608,	// (0x00016b04) popup_sp_fs_calendar_preview_bg_pane

0x57e2,	// (0x0001bcde) popup_sp_fs_calendar_preview_list_pane

0x2f69,	// (0x00019465) bg_main_sp_fs_cale_pane_ParamLimits

0x2f69,	// (0x00019465) bg_main_sp_fs_cale_pane

0x57f3,	// (0x0001bcef) listscroll_cale_mrui_pane_ParamLimits

0x57f3,	// (0x0001bcef) listscroll_cale_mrui_pane

0x4250,	// (0x0001a74c) listscroll_sp_fs_schedule_track_pane

0x5808,	// (0x0001bd04) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5808,	// (0x0001bd04) main_sp_fs_ctrlbar_pane_cp01

0x581b,	// (0x0001bd17) main_sp_fs_ribbon_pane

0x5823,	// (0x0001bd1f) popup_sp_fs_cale_preview_window

0x5d43,	// (0x0001c23f) list_single_sp_fs_schedule_track_pane_ParamLimits

0x5d43,	// (0x0001c23f) list_single_sp_fs_schedule_track_pane

0x3d2e,	// (0x0001a22a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3d2e,	// (0x0001a22a) bg_sp_fs_highlight_list_pane_cp03

0xe4ac,	// (0x000249a8) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe4ac,	// (0x000249a8) list_single_sp_fs_schedule_track_pane_g1

0xe4b8,	// (0x000249b4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe4b8,	// (0x000249b4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc8,	// (0x000262c4) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc8,	// (0x000262c4) list_single_sp_fs_schedule_track_pane_g

0xe4c4,	// (0x000249c0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe4c4,	// (0x000249c0) list_single_sp_fs_schedule_track_pane_t1

0xe4dc,	// (0x000249d8) sp_fs_schedule_track_pane_ParamLimits

0xe4dc,	// (0x000249d8) sp_fs_schedule_track_pane

0x5835,	// (0x0001bd31) sp_fs_schedule_track_pane_g1

0x583d,	// (0x0001bd39) sp_fs_schedule_track_pane_g2

0x5845,	// (0x0001bd41) sp_fs_schedule_track_pane_g3

0x584d,	// (0x0001bd49) sp_fs_schedule_track_pane_g4

0x5855,	// (0x0001bd51) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcd,	// (0x000262c9) sp_fs_schedule_track_pane_g

0x41cc,	// (0x0001a6c8) bg_sp_fs_schedule_viewer_highlight_g1

0x12b8,	// (0x000177b4) bg_sp_fs_schedule_viewer_highlight_g2

0x41d4,	// (0x0001a6d0) bg_sp_fs_schedule_viewer_highlight_g3

0x41dc,	// (0x0001a6d8) bg_sp_fs_schedule_viewer_highlight_g4

0x4489,	// (0x0001a985) bg_sp_fs_schedule_viewer_highlight_g5

0x41ec,	// (0x0001a6e8) bg_sp_fs_schedule_viewer_highlight_g6

0x41f4,	// (0x0001a6f0) bg_sp_fs_schedule_viewer_highlight_g7

0x41fc,	// (0x0001a6f8) bg_sp_fs_schedule_viewer_highlight_g8

0x1298,	// (0x00017794) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd8,	// (0x000262d4) bg_sp_fs_schedule_viewer_highlight_g

0x0608,	// (0x00016b04) bg_main_sp_fs_ribbon_pane

0xe4ec,	// (0x000249e8) main_sp_fs_ribbon_pane_g1

0x585d,	// (0x0001bd59) main_sp_fs_ribbon_pane_t1

0xe4f5,	// (0x000249f1) main_sp_fs_ribbon_pane_t2

0x586c,	// (0x0001bd68) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdeb,	// (0x000262e7) main_sp_fs_ribbon_pane_t

0x587b,	// (0x0001bd77) main_sp_fs_ribbon_scheduler_pane

0x5883,	// (0x0001bd7f) bg_main_sp_fs_ribbon_pane_g1

0x588c,	// (0x0001bd88) bg_main_sp_fs_ribbon_pane_g2

0x5895,	// (0x0001bd91) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf2,	// (0x000262ee) bg_main_sp_fs_ribbon_pane_g

0x589d,	// (0x0001bd99) main_sp_fs_ribbon_scheduler_pane_g1

0x58a6,	// (0x0001bda2) main_sp_fs_ribbon_scheduler_pane_g2

0x58af,	// (0x0001bdab) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf9,	// (0x000262f5) main_sp_fs_ribbon_scheduler_pane_g

0x58b8,	// (0x0001bdb4) list_cale_mrui_pane

0xe504,	// (0x00024a00) sp_fs_scroll_pane_cp07_ParamLimits

0xe504,	// (0x00024a00) sp_fs_scroll_pane_cp07

0xe51c,	// (0x00024a18) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe51c,	// (0x00024a18) bg_sp_fs_schedule_viewer_highlight

0x58c5,	// (0x0001bdc1) list_single_sp_fs_schedule_track_pane_cp01

0x58cd,	// (0x0001bdc9) list_sp_fs_schedule_track_pane

0x58d5,	// (0x0001bdd1) sp_fs_scroll_pane_cp06_ParamLimits

0x58d5,	// (0x0001bdd1) sp_fs_scroll_pane_cp06

0x346b,	// (0x00019967) bgmain_sp_fs_calendar_pane_g1

0xe529,	// (0x00024a25) list_single_cale_mrui_pane_ParamLimits

0xe529,	// (0x00024a25) list_single_cale_mrui_pane

0x58e7,	// (0x0001bde3) list_single_cale_mrui_row_pane_ParamLimits

0x58e7,	// (0x0001bde3) list_single_cale_mrui_row_pane

0x58f4,	// (0x0001bdf0) list_single_cale_mrui_row_pane_g1_ParamLimits

0x58f4,	// (0x0001bdf0) list_single_cale_mrui_row_pane_g1

0x592d,	// (0x0001be29) list_single_cale_mrui_row_pane_t1_ParamLimits

0x592d,	// (0x0001be29) list_single_cale_mrui_row_pane_t1

0xe54a,	// (0x00024a46) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe54a,	// (0x00024a46) list_single_cale_mrui_row_pane_t2

0x593f,	// (0x0001be3b) list_single_cale_mrui_row_pane_t3_ParamLimits

0x593f,	// (0x0001be3b) list_single_cale_mrui_row_pane_t3

0x596e,	// (0x0001be6a) list_single_cale_mrui_row_pane_t4_ParamLimits

0x596e,	// (0x0001be6a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe07,	// (0x00026303) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe07,	// (0x00026303) list_single_cale_mrui_row_pane_t

0xe5b0,	// (0x00024aac) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe5b0,	// (0x00024aac) list_single_cmail_header_editor_pane_bg_cp01

0xe5d0,	// (0x00024acc) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe5d0,	// (0x00024acc) list_single_cmail_header_editor_pane_bg_cp02

0xe5ec,	// (0x00024ae8) main_radioblah_text_pane_t1_ParamLimits

0xe5ec,	// (0x00024ae8) main_radioblah_text_pane_t1

0x599d,	// (0x0001be99) cam6_indi_pane_cp01

0x59a5,	// (0x0001bea1) cam6_mode_pane_cp01

0x59ad,	// (0x0001bea9) cam6_pano_pane

0x59b6,	// (0x0001beb2) cam6_zoom_pane_cp01

0x59be,	// (0x0001beba) cam6_pano_image_pane

0x59c7,	// (0x0001bec3) cam6_pano_pane_g1

0x4fac,	// (0x0001b4a8) cam6_pano_pane_g2

0x59d0,	// (0x0001becc) cam6_pano_pane_g3

0x59d9,	// (0x0001bed5) cam6_pano_pane_g4

0x39ef,	// (0x00019eeb) cam6_pano_pane_g5

0x59e2,	// (0x0001bede) cam6_pano_pane_g6

0x59ea,	// (0x0001bee6) cam6_pano_pane_g7

0x59f2,	// (0x0001beee) cam6_pano_pane_g8

0x59fb,	// (0x0001bef7) cam6_pano_pane_g9

0x0008,

0xfe10,	// (0x0002630c) cam6_pano_pane_g

0x0608,	// (0x00016b04) main_browser_tag_pane

0x5737,	// (0x0001bc33) grid_navstr_albumart_pane

0x5a04,	// (0x0001bf00) cell_navstr_albumart_pane_ParamLimits

0x5a04,	// (0x0001bf00) cell_navstr_albumart_pane

0x1c75,	// (0x00018171) cell_navstr_albumart_pane_g1

0x2d3a,	// (0x00019236) cell_navstr_albumart_pane_g2

0x2d4a,	// (0x00019246) cell_navstr_albumart_pane_g3

0x2d42,	// (0x0001923e) cell_navstr_albumart_pane_g4

0x0003,

0xfe23,	// (0x0002631f) cell_navstr_albumart_pane_g

0xe606,	// (0x00024b02) bt_list_pane_ParamLimits

0xe606,	// (0x00024b02) bt_list_pane

0xe619,	// (0x00024b15) bt_list_pane_t1

0xe628,	// (0x00024b24) bt_list_pane_t2

0x0001,

0xfe2c,	// (0x00026328) bt_list_pane_t

0x0608,	// (0x00016b04) main_cale_prevew_pane

0xe637,	// (0x00024b33) popup_cale_preview_window_ParamLimits

0xe637,	// (0x00024b33) popup_cale_preview_window

0x0672,	// (0x00016b6e) bg_popup_preview_window_pane_cp05_ParamLimits

0x0672,	// (0x00016b6e) bg_popup_preview_window_pane_cp05

0x5a1c,	// (0x0001bf18) list_cale_preview_pane_ParamLimits

0x5a1c,	// (0x0001bf18) list_cale_preview_pane

0x5a28,	// (0x0001bf24) list_double_cale_preview_pane_ParamLimits

0x5a28,	// (0x0001bf24) list_double_cale_preview_pane

0x5a3a,	// (0x0001bf36) list_single_cale_preview_pane_ParamLimits

0x5a3a,	// (0x0001bf36) list_single_cale_preview_pane

0x5a4e,	// (0x0001bf4a) list_single_cale_preview_pane_g1

0x5a56,	// (0x0001bf52) list_single_cale_preview_pane_t1_ParamLimits

0x5a56,	// (0x0001bf52) list_single_cale_preview_pane_t1

0x5a6b,	// (0x0001bf67) list_double_cale_preview_pane_g1

0x5a73,	// (0x0001bf6f) list_double_cale_preview_pane_t1_ParamLimits

0x5a73,	// (0x0001bf6f) list_double_cale_preview_pane_t1

0x5a88,	// (0x0001bf84) list_double_cale_preview_pane_t2_ParamLimits

0x5a88,	// (0x0001bf84) list_double_cale_preview_pane_t2

0x0001,

0xfe31,	// (0x0002632d) list_double_cale_preview_pane_t_ParamLimits

0xfe31,	// (0x0002632d) list_double_cale_preview_pane_t

0x0608,	// (0x00016b04) main_ezdial_pane

0x0672,	// (0x00016b6e) main_sp_fs_email_pane_ParamLimits

0xdd8a,	// (0x00024286) cmail_ddmenu_btn01_pane_ParamLimits

0xdd8a,	// (0x00024286) cmail_ddmenu_btn01_pane

0xdda7,	// (0x000242a3) cmail_ddmenu_btn02_pane_ParamLimits

0xdda7,	// (0x000242a3) cmail_ddmenu_btn02_pane

0xddc5,	// (0x000242c1) cmail_ddmenu_btn03_pane_ParamLimits

0xddc5,	// (0x000242c1) cmail_ddmenu_btn03_pane

0xddf1,	// (0x000242ed) main_sp_fs_ctrlbar_pane_ParamLimits

0xde07,	// (0x00024303) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe36c,	// (0x00024868) list_cmail_body_pane_ParamLimits

0x562b,	// (0x0001bb27) bg_button_pane_cp12

0x5640,	// (0x0001bb3c) list_single_cmail_header_detail_pane_g3_ParamLimits

0x5640,	// (0x0001bb3c) list_single_cmail_header_detail_pane_g3

0x5689,	// (0x0001bb85) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5689,	// (0x0001bb85) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb4,	// (0x000262b0) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb4,	// (0x000262b0) list_single_cmail_header_detail_pane_t

0x579f,	// (0x0001bc9b) phacti_term_pane_t2_ParamLimits

0x579f,	// (0x0001bc9b) phacti_term_pane_t2

0x0001,

0xfdbe,	// (0x000262ba) phacti_term_pane_t_ParamLimits

0xfdbe,	// (0x000262ba) phacti_term_pane_t

0x5aa0,	// (0x0001bf9c) aid_size_list_single_double

0xe64c,	// (0x00024b48) popup_ezdial_listscroll_window

0xe665,	// (0x00024b61) popup_number_entry_window_cp01

0x1048,	// (0x00017544) bg_popup_call_pane_cp09

0x5aac,	// (0x0001bfa8) ezdial_list_pane

0x5ab4,	// (0x0001bfb0) scroll_pane_cp23

0x3258,	// (0x00019754) bg_button_pane_cp028_ParamLimits

0x3258,	// (0x00019754) bg_button_pane_cp028

0xe671,	// (0x00024b6d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe671,	// (0x00024b6d) cmail_ddmenu_btn01_pane_g1

0xe681,	// (0x00024b7d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe681,	// (0x00024b7d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe36,	// (0x00026332) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe36,	// (0x00026332) cmail_ddmenu_btn01_pane_g

0x5abc,	// (0x0001bfb8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x5abc,	// (0x0001bfb8) cmail_ddmenu_btn01_pane_t1

0x2f69,	// (0x00019465) bg_button_pane_cp029_ParamLimits

0x2f69,	// (0x00019465) bg_button_pane_cp029

0xe68d,	// (0x00024b89) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe68d,	// (0x00024b89) cmail_ddmenu_btn02_pane_g1

0xe6a6,	// (0x00024ba2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe6a6,	// (0x00024ba2) cmail_ddmenu_btn02_pane_t1

0x3d2e,	// (0x0001a22a) bg_button_pane_cp031_ParamLimits

0x3d2e,	// (0x0001a22a) bg_button_pane_cp031

0xe68d,	// (0x00024b89) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe68d,	// (0x00024b89) cmail_ddmenu_btn03_pane_g1

0xe6a6,	// (0x00024ba2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe6a6,	// (0x00024ba2) cmail_ddmenu_btn03_pane_t1

0xc203,	// (0x000226ff) cell_dialer2_keypad_pane_t1_ParamLimits

0xc21d,	// (0x00022719) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc21d,	// (0x00022719) cell_dialer2_keypad_pane_t1_copy1

0xd6b0,	// (0x00023bac) ncimui_group_button_pane

0x0672,	// (0x00016b6e) main_sp_fs_calendar_pane_ParamLimits

0xe381,	// (0x0002487d) list_single_cmail_header_caption_pane_ParamLimits

0x57ea,	// (0x0001bce6) aid_recal_txt_sm_pane

0x0608,	// (0x00016b04) mian_recal_day_pane

0x5823,	// (0x0001bd1f) popup_sp_fs_cale_preview_window_ParamLimits

0x5ad2,	// (0x0001bfce) list_recal_day_pane

0x5b14,	// (0x0001c010) list_single_recal_day_pane_ParamLimits

0x5b14,	// (0x0001c010) list_single_recal_day_pane

0x5b26,	// (0x0001c022) list_single_recal_day_pane_g1_ParamLimits

0x5b26,	// (0x0001c022) list_single_recal_day_pane_g1

0x5b32,	// (0x0001c02e) list_single_recal_day_pane_g2_ParamLimits

0x5b32,	// (0x0001c02e) list_single_recal_day_pane_g2

0x5b3e,	// (0x0001c03a) list_single_recal_day_pane_g3_ParamLimits

0x5b3e,	// (0x0001c03a) list_single_recal_day_pane_g3

0xe6ca,	// (0x00024bc6) list_single_recal_day_pane_g4_ParamLimits

0xe6ca,	// (0x00024bc6) list_single_recal_day_pane_g4

0x5b4a,	// (0x0001c046) list_single_recal_day_pane_g5_ParamLimits

0x5b4a,	// (0x0001c046) list_single_recal_day_pane_g5

0x5b56,	// (0x0001c052) list_single_recal_day_pane_g6_ParamLimits

0x5b56,	// (0x0001c052) list_single_recal_day_pane_g6

0x0004,

0xfe45,	// (0x00026341) list_single_recal_day_pane_g_ParamLimits

0xfe45,	// (0x00026341) list_single_recal_day_pane_g

0x5b6a,	// (0x0001c066) list_single_recal_day_pane_t1

0x5b7c,	// (0x0001c078) list_single_recal_day_pane_t2

0x0001,

0xfe50,	// (0x0002634c) list_single_recal_day_pane_t

0xe6de,	// (0x00024bda) ncimui_query_button_pane_ParamLimits

0xe6de,	// (0x00024bda) ncimui_query_button_pane

0xe6ee,	// (0x00024bea) ncimui_query_button_pane_t1_ParamLimits

0xe6ee,	// (0x00024bea) ncimui_query_button_pane_t1

0x5b8e,	// (0x0001c08a) ncimui_query_button_pane_t2_ParamLimits

0x5b8e,	// (0x0001c08a) ncimui_query_button_pane_t2

0x0001,

0xfe55,	// (0x00026351) ncimui_query_button_pane_t_ParamLimits

0xfe55,	// (0x00026351) ncimui_query_button_pane_t

0xe701,	// (0x00024bfd) query_button_pane_ParamLimits

0xe701,	// (0x00024bfd) query_button_pane

0x0608,	// (0x00016b04) bg_button_pane_cp0028

0x5ba1,	// (0x0001c09d) query_button_pane_t1

0x7804,	// (0x0001dd00) main_tport_pane_ParamLimits

0xe2b8,	// (0x000247b4) bg_popup_window_pane_cp01_ParamLimits

0xe2b8,	// (0x000247b4) bg_popup_window_pane_cp01

0xe2c4,	// (0x000247c0) heading_pane_cp08_ParamLimits

0xe2c4,	// (0x000247c0) heading_pane_cp08

0xe2d0,	// (0x000247cc) heading_pane_cp07_ParamLimits

0xe2d0,	// (0x000247cc) heading_pane_cp07

0x55e7,	// (0x0001bae3) cell_tport_appsw_pane_g2

0x0002,

0xfda1,	// (0x0002629d) cell_tport_appsw_pane_g

0xa7ca,	// (0x00020cc6) input_candi_list_open_g1

0x14b1,	// (0x000179ad) list_cale_time_pane_g6_ParamLimits

0x14b1,	// (0x000179ad) list_cale_time_pane_g6

0xb50d,	// (0x00021a09) aid_size_touch_calib_1_ParamLimits

0xb50d,	// (0x00021a09) aid_size_touch_calib_1

0xb519,	// (0x00021a15) aid_size_touch_calib_2_ParamLimits

0xb519,	// (0x00021a15) aid_size_touch_calib_2

0xb525,	// (0x00021a21) aid_size_touch_calib_3_ParamLimits

0xb525,	// (0x00021a21) aid_size_touch_calib_3

0xb533,	// (0x00021a2f) aid_size_touch_calib_4_ParamLimits

0xb533,	// (0x00021a2f) aid_size_touch_calib_4

0xb541,	// (0x00021a3d) main_touch_calib_button_group_pane_ParamLimits

0xb541,	// (0x00021a3d) main_touch_calib_button_group_pane

0xb54f,	// (0x00021a4b) main_touch_calib_pane_g1_ParamLimits

0xb55b,	// (0x00021a57) main_touch_calib_pane_g2_ParamLimits

0xb567,	// (0x00021a63) main_touch_calib_pane_g3_ParamLimits

0xb573,	// (0x00021a6f) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x00025c60) main_touch_calib_pane_g_ParamLimits

0xb57f,	// (0x00021a7b) main_touch_calib_pane_t1_ParamLimits

0xb594,	// (0x00021a90) main_touch_calib_pane_t2_ParamLimits

0xb5a9,	// (0x00021aa5) main_touch_calib_pane_t3_ParamLimits

0xb5bb,	// (0x00021ab7) main_touch_calib_pane_t4_ParamLimits

0xb5cd,	// (0x00021ac9) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x00025c69) main_touch_calib_pane_t_ParamLimits

0x37a6,	// (0x00019ca2) list_single_fp_cale_pane_g3_ParamLimits

0x37a6,	// (0x00019ca2) list_single_fp_cale_pane_g3

0x77e8,	// (0x0001dce4) bg_button_pane_cp012_ParamLimits

0x77e8,	// (0x0001dce4) bg_vkb2_func_pane_cp03_ParamLimits

0x8666,	// (0x0001eb62) cell_vitu2_function_top_pane_g1_ParamLimits

0x77e8,	// (0x0001dce4) bg_vkb2_func_pane_cp04_ParamLimits

0xd63c,	// (0x00023b38) main_ncimui_button_group_pane_ParamLimits

0xd63c,	// (0x00023b38) main_ncimui_button_group_pane

0xd69e,	// (0x00023b9a) main_ncimui_pane_t3_ParamLimits

0xd69e,	// (0x00023b9a) main_ncimui_pane_t3

0x574d,	// (0x0001bc49) phacti_button_group_pane

0x5aa0,	// (0x0001bf9c) aid_size_list_single_double_ParamLimits

0xe64c,	// (0x00024b48) popup_ezdial_listscroll_window_ParamLimits

0xe665,	// (0x00024b61) popup_number_entry_window_cp01_ParamLimits

0xe70e,	// (0x00024c0a) phacti_button_pane_ParamLimits

0xe70e,	// (0x00024c0a) phacti_button_pane

0x0608,	// (0x00016b04) bg_button_pane_cp14

0x5baf,	// (0x0001c0ab) phacti_button_pane_t1

0xe71d,	// (0x00024c19) main_touch_calib_button_pane_ParamLimits

0xe71d,	// (0x00024c19) main_touch_calib_button_pane

0x0e13,	// (0x0001730f) bg_button_pane_cp18_ParamLimits

0x0e13,	// (0x0001730f) bg_button_pane_cp18

0x5bbd,	// (0x0001c0b9) main_touch_calib_button_pane_t1_ParamLimits

0x5bbd,	// (0x0001c0b9) main_touch_calib_button_pane_t1

0x5bd3,	// (0x0001c0cf) main_touch_calib_button_pane_t2_ParamLimits

0x5bd3,	// (0x0001c0cf) main_touch_calib_button_pane_t2

0x0001,

0xfe5a,	// (0x00026356) main_touch_calib_button_pane_t_ParamLimits

0xfe5a,	// (0x00026356) main_touch_calib_button_pane_t

0x0608,	// (0x00016b04) cell_ncimui_button_pane

0x0608,	// (0x00016b04) bg_button_pane_cp032

0x5bf1,	// (0x0001c0ed) cell_ncimui_button_pane_t1

0x7fe1,	// (0x0001e4dd) image3_infobar_pane_ParamLimits

0x7fe1,	// (0x0001e4dd) image3_infobar_pane

0xda30,	// (0x00023f2c) fs_bigclock_status_pane_ParamLimits

0xda30,	// (0x00023f2c) fs_bigclock_status_pane

0xda3d,	// (0x00023f39) main_fs_bigclock_clock_pane_ParamLimits

0xda3d,	// (0x00023f39) main_fs_bigclock_clock_pane

0xda4f,	// (0x00023f4b) main_fs_bigclock_indi_pane_ParamLimits

0xda4f,	// (0x00023f4b) main_fs_bigclock_indi_pane

0xda6f,	// (0x00023f6b) main_fs_bigclock_swipe_pane_ParamLimits

0xda6f,	// (0x00023f6b) main_fs_bigclock_swipe_pane

0x0608,	// (0x00016b04) main_fs_clock_dumped_data

0x50b9,	// (0x0001b5b5) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x50b9,	// (0x0001b5b5) list_single_fs_bigclock_indicator_pane_g1

0x50d3,	// (0x0001b5cf) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x50d3,	// (0x0001b5cf) list_single_fs_bigclock_indicator_pane_g2

0x50ed,	// (0x0001b5e9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x50ed,	// (0x0001b5e9) list_single_fs_bigclock_indicator_pane_g3

0x5107,	// (0x0001b603) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x5107,	// (0x0001b603) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x00026183) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x00026183) list_single_fs_bigclock_indicator_pane_g

0x5130,	// (0x0001b62c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x5130,	// (0x0001b62c) list_single_fs_bigclock_indicator_pane_t1

0x5158,	// (0x0001b654) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x5158,	// (0x0001b654) list_single_fs_bigclock_indicator_pane_t2

0x5180,	// (0x0001b67c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x5180,	// (0x0001b67c) list_single_fs_bigclock_indicator_pane_t3

0x51a8,	// (0x0001b6a4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x51a8,	// (0x0001b6a4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0002618e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0002618e) list_single_fs_bigclock_indicator_pane_t

0x5bff,	// (0x0001c0fb) image3_infobar_fav_pane_ParamLimits

0x5bff,	// (0x0001c0fb) image3_infobar_fav_pane

0x5c0f,	// (0x0001c10b) image3_infobar_loc_pane_ParamLimits

0x5c0f,	// (0x0001c10b) image3_infobar_loc_pane

0x5c23,	// (0x0001c11f) image3_infobar_time_pane_ParamLimits

0x5c23,	// (0x0001c11f) image3_infobar_time_pane

0x346b,	// (0x00019967) image3_infobar_time_pane_g1

0x5c33,	// (0x0001c12f) image3_infobar_time_pane_t1

0x346b,	// (0x00019967) image3_infobar_loc_pane_g1

0x5c41,	// (0x0001c13d) image3_infobar_loc_pane_g2

0x0001,

0xfe5f,	// (0x0002635b) image3_infobar_loc_pane_g

0x5c49,	// (0x0001c145) image3_infobar_loc_pane_t1

0x346b,	// (0x00019967) image3_infobar_fav_pane_g1

0x5c57,	// (0x0001c153) image3_infobar_fav_pane_g2

0x0001,

0xfe64,	// (0x00026360) image3_infobar_fav_pane_g

0x5c5f,	// (0x0001c15b) fs_bigclock_status_battery_pane

0x5c68,	// (0x0001c164) fs_bigclock_status_signal_pane

0x5c71,	// (0x0001c16d) fs_bigclock_status_title_pane

0x5c7a,	// (0x0001c176) fs_bigclock_status_signal_pane_g1

0x5c83,	// (0x0001c17f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe69,	// (0x00026365) fs_bigclock_status_signal_pane_g

0x5c8b,	// (0x0001c187) fs_bigclock_status_battery_pane_g1

0x5c94,	// (0x0001c190) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6e,	// (0x0002636a) fs_bigclock_status_battery_pane_g

0x5c9c,	// (0x0001c198) fs_bigclock_status_title_pane_t1

0xe72d,	// (0x00024c29) main_fs_bigclock_clock_pane_g1

0xe72d,	// (0x00024c29) main_fs_bigclock_clock_pane_g2

0xe73a,	// (0x00024c36) main_fs_bigclock_clock_pane_g3

0xe73a,	// (0x00024c36) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe73,	// (0x0002636f) main_fs_bigclock_clock_pane_g

0xe746,	// (0x00024c42) main_fs_bigclock_clock_pane_t1

0xe759,	// (0x00024c55) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7c,	// (0x00026378) main_fs_bigclock_clock_pane_t

0x5caa,	// (0x0001c1a6) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5caa,	// (0x0001c1a6) list_single_fs_bigclock_indicator_pane

0x5cbb,	// (0x0001c1b7) list_single_fs_bigclock_pane_ParamLimits

0x5cbb,	// (0x0001c1b7) list_single_fs_bigclock_pane

0x5ce1,	// (0x0001c1dd) main_fs_bigclock_indicator_pane_t1

0x5cf0,	// (0x0001c1ec) list_single_fs_bigclock_pane_g1

0x5cf8,	// (0x0001c1f4) list_single_fs_bigclock_pane_t1

0x346b,	// (0x00019967) main_fs_bigclock_swipe_pane_g1

0x5d3b,	// (0x0001c237) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8d,	// (0x00026389) main_fs_bigclock_swipe_pane_g

0x5d56,	// (0x0001c252) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5d56,	// (0x0001c252) main_fs_bigclock_swipe_pane_t1

0xa131,	// (0x0002062d) call_type_pane_ParamLimits

0x0608,	// (0x00016b04) main_btmg_pane

0x541c,	// (0x0001b918) list_single_cale_mrui_row_pane_g2_ParamLimits

0x541c,	// (0x0001b918) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe00,	// (0x000262fc) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe00,	// (0x000262fc) list_single_cale_mrui_row_pane_g

0x5afb,	// (0x0001bff7) list_recal_vselct_arw_lo_pane

0x5b03,	// (0x0001bfff) list_recal_vselct_arw_up_pane

0x5b0b,	// (0x0001c007) list_recal_vselct_pane

0xe7ae,	// (0x00024caa) btmg_button_pane

0xe7b6,	// (0x00024cb2) main_btmg_pane_g1

0x0608,	// (0x00016b04) bg_button_pane_cp044

0x5d73,	// (0x0001c26f) btmg_button_pane_t1

0x2f55,	// (0x00019451) aid_listscroll_gen

0x0672,	// (0x00016b6e) main_cntbar_detail_pane

0x560d,	// (0x0001bb09) list_cmail_folder_pane

0x52cf,	// (0x0001b7cb) sp_fs_scroll_pane_cp03_ParamLimits

0xe7be,	// (0x00024cba) list_single_fs_dyc_pane_cp01_ParamLimits

0xe7be,	// (0x00024cba) list_single_fs_dyc_pane_cp01

0x5d81,	// (0x0001c27d) aid_size_cmail_indent

0x5d8a,	// (0x0001c286) list_single_dyc_row_pane_cp01

0xe7ed,	// (0x00024ce9) cntbar_detail_list_pane_ParamLimits

0xe7ed,	// (0x00024ce9) cntbar_detail_list_pane

0xe823,	// (0x00024d1f) main_cntbar_detail_cont_pane_ParamLimits

0xe823,	// (0x00024d1f) main_cntbar_detail_cont_pane

0xa056,	// (0x00020552) scroll_pane_cp032_ParamLimits

0xa056,	// (0x00020552) scroll_pane_cp032

0xe82f,	// (0x00024d2b) cntbar_detail_list_event_pane_ParamLimits

0xe82f,	// (0x00024d2b) cntbar_detail_list_event_pane

0xe7f9,	// (0x00024cf5) cntbar_detail_list_shct_pane

0x1306,	// (0x00017802) aid_list_gen

0x5d93,	// (0x0001c28f) aid_scroll

0x5d9c,	// (0x0001c298) aid_size_touch_scroll_bar

0xcef6,	// (0x000233f2) aid_list_double

0xe83f,	// (0x00024d3b) aid_list_single

0xcef6,	// (0x000233f2) aid_list_single_lg

0xe848,	// (0x00024d44) aid_list_z_g_a_sm

0x5da5,	// (0x0001c2a1) aid_list_z_g_d

0xe850,	// (0x00024d4c) aid_txt_z_prm

0xe85e,	// (0x00024d5a) aid_txt_z_prm_cp01

0xe86c,	// (0x00024d68) aid_txt_z_sec

0xe87a,	// (0x00024d76) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe87a,	// (0x00024d76) main_cntbar_detail_cont_pane_g1

0xe887,	// (0x00024d83) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe887,	// (0x00024d83) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe92,	// (0x0002638e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe92,	// (0x0002638e) main_cntbar_detail_cont_pane_g

0x5dad,	// (0x0001c2a9) main_cntbar_detail_cont_pane_t1

0x5dbb,	// (0x0001c2b7) main_cntbar_detail_cont_pane_t2

0x5dc9,	// (0x0001c2c5) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe97,	// (0x00026393) main_cntbar_detail_cont_pane_t

0xe893,	// (0x00024d8f) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe893,	// (0x00024d8f) cell_cntbar_detail_list_shct_pane

0x5dd7,	// (0x0001c2d3) cntbar_detail_list_shct_pane_g1

0x5de0,	// (0x0001c2dc) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9e,	// (0x0002639a) cntbar_detail_list_shct_pane_g

0xe8a5,	// (0x00024da1) cntbar_detail_list_event_pane_g1_ParamLimits

0xe8a5,	// (0x00024da1) cntbar_detail_list_event_pane_g1

0xe8b1,	// (0x00024dad) cntbar_detail_list_event_pane_g2_ParamLimits

0xe8b1,	// (0x00024dad) cntbar_detail_list_event_pane_g2

0x0005,

0xfea3,	// (0x0002639f) cntbar_detail_list_event_pane_g_ParamLimits

0xfea3,	// (0x0002639f) cntbar_detail_list_event_pane_g

0xe91d,	// (0x00024e19) cntbar_detail_list_event_pane_t1_ParamLimits

0xe91d,	// (0x00024e19) cntbar_detail_list_event_pane_t1

0xe932,	// (0x00024e2e) cntbar_detail_list_event_pane_t2_ParamLimits

0xe932,	// (0x00024e2e) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb0,	// (0x000263ac) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb0,	// (0x000263ac) cntbar_detail_list_event_pane_t

0x346b,	// (0x00019967) cell_cntbar_detail_list_shct_pane_g1

0x1acf,	// (0x00017fcb) navi_pane_mv_g3

0x0672,	// (0x00016b6e) main_cntbar_detail_pane_ParamLimits

0x0608,	// (0x00016b04) main_notif_wgt_pane

0x7d4c,	// (0x0001e248) aid_tch_main_mp4_pane_g4

0x7f67,	// (0x0001e463) popup_slider_window_cp02

0x5af1,	// (0x0001bfed) list_recal_day_event_pane

0xe7d3,	// (0x00024ccf) cntbar_detail_btn_pane_ParamLimits

0xe7d3,	// (0x00024ccf) cntbar_detail_btn_pane

0xe7df,	// (0x00024cdb) cntbar_detail_btn_pane_cp01_ParamLimits

0xe7df,	// (0x00024cdb) cntbar_detail_btn_pane_cp01

0xe7f9,	// (0x00024cf5) cntbar_detail_list_shct_pane_ParamLimits

0xe805,	// (0x00024d01) cntbar_detail_pane_g1_ParamLimits

0xe805,	// (0x00024d01) cntbar_detail_pane_g1

0xe811,	// (0x00024d0d) cntbar_detail_pane_t1_ParamLimits

0xe811,	// (0x00024d0d) cntbar_detail_pane_t1

0xe8bd,	// (0x00024db9) cntbar_detail_list_event_pane_g3_ParamLimits

0xe8bd,	// (0x00024db9) cntbar_detail_list_event_pane_g3

0xe8d5,	// (0x00024dd1) cntbar_detail_list_event_pane_g4_ParamLimits

0xe8d5,	// (0x00024dd1) cntbar_detail_list_event_pane_g4

0xe8ed,	// (0x00024de9) cntbar_detail_list_event_pane_g5_ParamLimits

0xe8ed,	// (0x00024de9) cntbar_detail_list_event_pane_g5

0xe905,	// (0x00024e01) cntbar_detail_list_event_pane_g6_ParamLimits

0xe905,	// (0x00024e01) cntbar_detail_list_event_pane_g6

0xe947,	// (0x00024e43) cntbar_detail_list_event_pane_t3_ParamLimits

0xe947,	// (0x00024e43) cntbar_detail_list_event_pane_t3

0xe959,	// (0x00024e55) popup_notif_wgt_window_ParamLimits

0xe959,	// (0x00024e55) popup_notif_wgt_window

0xe967,	// (0x00024e63) popup_submenu_window_cp01_ParamLimits

0xe967,	// (0x00024e63) popup_submenu_window_cp01

0x1048,	// (0x00017544) bg_popup_window_pane_cp10

0x5de9,	// (0x0001c2e5) listscroll_notif_wgt_pane

0x5dfa,	// (0x0001c2f6) list_notif_wgt_window

0x5e03,	// (0x0001c2ff) scroll_pane_cp033

0xe973,	// (0x00024e6f) list_notif_wgt_row_pane_ParamLimits

0xe973,	// (0x00024e6f) list_notif_wgt_row_pane

0x5e0c,	// (0x0001c308) aid_size_list_notif_wgt_del

0x5e19,	// (0x0001c315) list_notif_wgt_row_pane_g1

0x5e25,	// (0x0001c321) list_notif_wgt_row_pane_g2

0x5e34,	// (0x0001c330) list_notif_wgt_row_pane_g3

0x0002,

0xfeb7,	// (0x000263b3) list_notif_wgt_row_pane_g

0x5e41,	// (0x0001c33d) list_notif_wgt_row_pane_t1

0x5e57,	// (0x0001c353) list_notif_wgt_row_pane_t2

0x5e69,	// (0x0001c365) list_notif_wgt_row_pane_t3

0x0002,

0xfebe,	// (0x000263ba) list_notif_wgt_row_pane_t

0x44b1,	// (0x0001a9ad) list_recal_day_event_pane_g1

0x5e7b,	// (0x0001c377) list_recal_day_event_pane_t1

0x0608,	// (0x00016b04) bg_button_pane_cp045

0xe985,	// (0x00024e81) cntbar_detail_btn_pane_t1

0x2f69,	// (0x00019465) main_callh_pane_ParamLimits

0x2f69,	// (0x00019465) main_callh_pane

0x0608,	// (0x00016b04) main_coverflow0_pane

0x0608,	// (0x00016b04) main_wgtman_pane

0xda81,	// (0x00023f7d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xda81,	// (0x00023f7d) main_fs_bigclock_unlock_btn_pane

0x55df,	// (0x0001badb) bg_button_pane_cp16

0x55ef,	// (0x0001baeb) cell_tport_appsw_pane_g3

0xe993,	// (0x00024e8f) cf0_flow_pane_ParamLimits

0xe993,	// (0x00024e8f) cf0_flow_pane

0x5e8a,	// (0x0001c386) listscroll_cf0_pane

0x5e93,	// (0x0001c38f) main_cf0_pane_g1

0xe9a2,	// (0x00024e9e) main_cf0_pane_t1_ParamLimits

0xe9a2,	// (0x00024e9e) main_cf0_pane_t1

0xe9b4,	// (0x00024eb0) main_cf0_pane_t2_ParamLimits

0xe9b4,	// (0x00024eb0) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x000263c6) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x000263c6) main_cf0_pane_t

0x5ea5,	// (0x0001c3a1) scroll_pane_cp11

0xe9c6,	// (0x00024ec2) cf0_flow_pane_g1

0xe9ce,	// (0x00024eca) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x000263cb) cf0_flow_pane_g

0xe9d6,	// (0x00024ed2) cf0_flow_pane_t1

0x0608,	// (0x00016b04) main_call6_pane

0x0608,	// (0x00016b04) main_calllock_pane

0xe9e4,	// (0x00024ee0) call6_btn_grp_pane_ParamLimits

0xe9e4,	// (0x00024ee0) call6_btn_grp_pane

0xe9f1,	// (0x00024eed) call6_pane_g1_ParamLimits

0xe9f1,	// (0x00024eed) call6_pane_g1

0xe9fe,	// (0x00024efa) popup_call6_1st_window_ParamLimits

0xe9fe,	// (0x00024efa) popup_call6_1st_window

0xea0a,	// (0x00024f06) popup_call6_2nd_window_ParamLimits

0xea0a,	// (0x00024f06) popup_call6_2nd_window

0xea16,	// (0x00024f12) cell_call6_btn_pane_ParamLimits

0xea16,	// (0x00024f12) cell_call6_btn_pane

0x1048,	// (0x00017544) bg_popup_call2_in_pane_cp03

0x5eae,	// (0x0001c3aa) popup_call6_1st_window_g1

0x5eb6,	// (0x0001c3b2) popup_call6_1st_window_g2

0x5ebe,	// (0x0001c3ba) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x000263d0) popup_call6_1st_window_g

0x5ec6,	// (0x0001c3c2) popup_call6_1st_window_t1

0x5ed5,	// (0x0001c3d1) popup_call6_1st_window_t2

0x5ee3,	// (0x0001c3df) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x000263d7) popup_call6_1st_window_t

0x1048,	// (0x00017544) bg_popup_call2_in_pane_cp04

0x5eae,	// (0x0001c3aa) popup_call6_2nd_window_g1

0x5eb6,	// (0x0001c3b2) popup_call6_2nd_window_g2

0x5ebe,	// (0x0001c3ba) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x000263d0) popup_call6_2nd_window_g

0x5ec6,	// (0x0001c3c2) popup_call6_2nd_window_t1

0x0608,	// (0x00016b04) bg_button_pane_cp15

0x5ef1,	// (0x0001c3ed) cell_call6_btn_pane_g1

0x5efa,	// (0x0001c3f6) cell_call6_btn_pane_t1

0xea25,	// (0x00024f21) listscroll_wgtman_pane_ParamLimits

0xea25,	// (0x00024f21) listscroll_wgtman_pane

0xea41,	// (0x00024f3d) wgtman_btn_pane_ParamLimits

0xea41,	// (0x00024f3d) wgtman_btn_pane

0x18e7,	// (0x00017de3) aid_scroll_copy1

0x5f09,	// (0x0001c405) list_wgtman_pane

0xea74,	// (0x00024f70) wgtman_btn_pane_g1_ParamLimits

0xea74,	// (0x00024f70) wgtman_btn_pane_g1

0xea9c,	// (0x00024f98) wgtman_btn_pane_t1_ParamLimits

0xea9c,	// (0x00024f98) wgtman_btn_pane_t1

0x5f13,	// (0x0001c40f) wgtman_btn_pane_t2_ParamLimits

0x5f13,	// (0x0001c40f) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x000263de) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x000263de) wgtman_btn_pane_t

0xe973,	// (0x00024e6f) listrow_wgtman_pane_ParamLimits

0xe973,	// (0x00024e6f) listrow_wgtman_pane

0xead3,	// (0x00024fcf) listrow_wgtman_pane_g1

0xeae0,	// (0x00024fdc) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x000263e3) listrow_wgtman_pane_g

0xeaf8,	// (0x00024ff4) listrow_wgtman_pane_t1

0xeb10,	// (0x0002500c) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x000263e8) listrow_wgtman_pane_t

0xeb36,	// (0x00025032) wait_bar_pane_cp09

0x5f2a,	// (0x0001c426) main_calllock_btn_pane

0x5f32,	// (0x0001c42e) main_calllock_pane_g1

0x0608,	// (0x00016b04) bg_button_pane_cp17

0x5f3b,	// (0x0001c437) main_calllock_btn_pane_g1

0x5f44,	// (0x0001c440) main_calllock_btn_pane_t1

0x0608,	// (0x00016b04) main_dialer3_pane

0x0608,	// (0x00016b04) main_fmrd2_pane

0x346b,	// (0x00019967) main_fs_bigclock_unlock_btn_pane_g1

0x5f5b,	// (0x0001c457) main_fs_bigclock_unlock_btn_pane_t1

0xeb48,	// (0x00025044) area_fmrd2_info_pane_ParamLimits

0xeb48,	// (0x00025044) area_fmrd2_info_pane

0xeb54,	// (0x00025050) area_fmrd2_visual_pane_ParamLimits

0xeb54,	// (0x00025050) area_fmrd2_visual_pane

0xeb62,	// (0x0002505e) fmrd2_indi_pane_ParamLimits

0xeb62,	// (0x0002505e) fmrd2_indi_pane

0xeb6f,	// (0x0002506b) area_fmrd2_visual_pane_g1

0xeb77,	// (0x00025073) area_fmrd2_visual_pane_t1

0xeb85,	// (0x00025081) area_fmrd2_visual_pane_t2

0xeb93,	// (0x0002508f) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x000263f2) area_fmrd2_visual_pane_t

0xeba1,	// (0x0002509d) area_fmrd2_info_pane_g1

0xeba9,	// (0x000250a5) area_fmrd2_info_pane_t1

0xebb7,	// (0x000250b3) area_fmrd2_info_pane_t2

0xebc5,	// (0x000250c1) area_fmrd2_info_pane_t3

0xebd3,	// (0x000250cf) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x000263f9) area_fmrd2_info_pane_t

0xebe1,	// (0x000250dd) fmrd2_indi_pane_t1

0xebef,	// (0x000250eb) fmrd2_indi_pane_t2

0xebfd,	// (0x000250f9) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x00026402) fmrd2_indi_pane_t

0x5116,	// (0x0001b612) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x5116,	// (0x0001b612) list_single_fs_bigclock_indicator_pane_g5

0x51c4,	// (0x0001b6c0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x51c4,	// (0x0001b6c0) list_single_fs_bigclock_indicator_pane_t5

0xe46a,	// (0x00024966) aid_cell_bcale_month_pane_ParamLimits

0xe46a,	// (0x00024966) aid_cell_bcale_month_pane

0xe488,	// (0x00024984) bcale_month_pane_ParamLimits

0xe488,	// (0x00024984) bcale_month_pane

0xe49e,	// (0x0002499a) bcale_preview_pane_ParamLimits

0xe49e,	// (0x0002499a) bcale_preview_pane

0x5cf8,	// (0x0001c1f4) list_single_fs_bigclock_pane_t1_ParamLimits

0x5d17,	// (0x0001c213) list_single_fs_bigclock_pane_t2_ParamLimits

0x5d17,	// (0x0001c213) list_single_fs_bigclock_pane_t2

0x0001,

0xfe88,	// (0x00026384) list_single_fs_bigclock_pane_t_ParamLimits

0xfe88,	// (0x00026384) list_single_fs_bigclock_pane_t

0x5f53,	// (0x0001c44f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x000263ed) main_fs_bigclock_unlock_btn_pane_g

0xec0b,	// (0x00025107) aid_dia3_key_size_ParamLimits

0xec0b,	// (0x00025107) aid_dia3_key_size

0xec17,	// (0x00025113) aid_dia3_listrow_size_ParamLimits

0xec17,	// (0x00025113) aid_dia3_listrow_size

0xec25,	// (0x00025121) dia3_keypad_fun_pane_ParamLimits

0xec25,	// (0x00025121) dia3_keypad_fun_pane

0xec31,	// (0x0002512d) dia3_keypad_num_pane_ParamLimits

0xec31,	// (0x0002512d) dia3_keypad_num_pane

0xec3d,	// (0x00025139) dia3_listscroll_pane_ParamLimits

0xec3d,	// (0x00025139) dia3_listscroll_pane

0xec49,	// (0x00025145) dia3_numentry_pane_ParamLimits

0xec49,	// (0x00025145) dia3_numentry_pane

0x5f69,	// (0x0001c465) dia3_list_pane

0x5f72,	// (0x0001c46e) scroll_pane_cp12

0x0608,	// (0x00016b04) bg_dia3_numentry_pane

0xec55,	// (0x00025151) dia3_numentry_pane_t1

0xec64,	// (0x00025160) cell_dia3_key_num_pane

0xec6c,	// (0x00025168) cell_dia3_key0_fun_pane_ParamLimits

0xec6c,	// (0x00025168) cell_dia3_key0_fun_pane

0xec79,	// (0x00025175) cell_dia3_key1_fun_pane_ParamLimits

0xec79,	// (0x00025175) cell_dia3_key1_fun_pane

0xec86,	// (0x00025182) dia3_listrow_pane

0x4e64,	// (0x0001b360) bg_dia3_numentry_pane_g1

0x0608,	// (0x00016b04) bg_button_pane_cp21

0x5f7b,	// (0x0001c477) cell_dia3_key_num_pane_t1

0x5f89,	// (0x0001c485) cell_dia3_key_num_pane_t2

0x5f98,	// (0x0001c494) cell_dia3_key_num_pane_t3

0x5fa7,	// (0x0001c4a3) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x00026409) cell_dia3_key_num_pane_t

0x0608,	// (0x00016b04) bg_button_pane_cp19

0x5fb6,	// (0x0001c4b2) cell_dia3_key0_fun_pane_g1

0x0608,	// (0x00016b04) bg_button_pane_cp20

0xec93,	// (0x0002518f) cell_dia3_key1_fun_pane_g1

0xec9b,	// (0x00025197) area_left_week_number_pane

0xecac,	// (0x000251a8) area_top_day_name_pane

0xecb8,	// (0x000251b4) frame_month_view_pane

0x5fbe,	// (0x0001c4ba) grid_month_view_pane

0xecc9,	// (0x000251c5) cell_top_day_name_pane_ParamLimits

0xecc9,	// (0x000251c5) cell_top_day_name_pane

0xecdf,	// (0x000251db) cell_area_left_week_number_pane_ParamLimits

0xecdf,	// (0x000251db) cell_area_left_week_number_pane

0xecfe,	// (0x000251fa) cell_month_view_pane_ParamLimits

0xecfe,	// (0x000251fa) cell_month_view_pane

0x5fcc,	// (0x0001c4c8) frm_month_g1

0xed24,	// (0x00025220) frm_month_g2

0xed33,	// (0x0002522f) frm_month_g3

0xed42,	// (0x0002523e) frm_month_g4

0xed51,	// (0x0002524d) frm_month_g5

0xed60,	// (0x0002525c) frm_month_g6

0xed6f,	// (0x0002526b) frm_month_g7

0x5fd9,	// (0x0001c4d5) frm_month_g8

0xed7e,	// (0x0002527a) frm_month_g9

0xed8b,	// (0x00025287) frm_month_g10

0xed98,	// (0x00025294) frm_month_g11

0xeda5,	// (0x000252a1) frm_month_g12

0xedb2,	// (0x000252ae) frm_month_g13

0xedbf,	// (0x000252bb) frm_month_g14

0xedcc,	// (0x000252c8) frm_month_g15

0xedd9,	// (0x000252d5) frm_month_g16

0x000f,

0xff16,	// (0x00026412) frm_month_g

0x5fe6,	// (0x0001c4e2) cell_top_day_name_pane_t1

0xede6,	// (0x000252e2) cell_area_left_week_number_pane_g1

0xedf5,	// (0x000252f1) cell_area_left_week_number_pane_t1

0x369a,	// (0x00019b96) cell_month_view_pane_g1

0xee0b,	// (0x00025307) cell_month_view_pane_t1

0x0608,	// (0x00016b04) main_fps_pane

0x53d8,	// (0x0001b8d4) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x53d8,	// (0x0001b8d4) cmail_ddmenu_btn02_pane_cp1

0x53f4,	// (0x0001b8f0) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x53f4,	// (0x0001b8f0) cmail_ddmenu_btn02_pane_cp2

0xe699,	// (0x00024b95) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe699,	// (0x00024b95) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3b,	// (0x00026337) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3b,	// (0x00026337) cmail_ddmenu_btn02_pane_g

0xe6b8,	// (0x00024bb4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe6b8,	// (0x00024bb4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe40,	// (0x0002633c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe40,	// (0x0002633c) cmail_ddmenu_btn02_pane_t

0xee21,	// (0x0002531d) fps_text_pane_ParamLimits

0xee21,	// (0x0002531d) fps_text_pane

0xee2e,	// (0x0002532a) main_fps_pane_g1_ParamLimits

0xee2e,	// (0x0002532a) main_fps_pane_g1

0xee3a,	// (0x00025336) wait_bar_pane_cp010_ParamLimits

0xee3a,	// (0x00025336) wait_bar_pane_cp010

0xee46,	// (0x00025342) fps_text_pane_t1_ParamLimits

0xee46,	// (0x00025342) fps_text_pane_t1

0xc338,	// (0x00022834) cam4_image_uncrop_pane_g1

0xc341,	// (0x0002283d) cam4_image_uncrop_pane_g2

0xc34a,	// (0x00022846) cam4_image_uncrop_pane_g3

0xc353,	// (0x0002284f) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x00025dfd) cam4_image_uncrop_pane_g

0xec86,	// (0x00025182) dia3_listrow_pane_ParamLimits

0x0608,	// (0x00016b04) main_phob2_pane

0xe311,	// (0x0002480d) cell_tport_appsw_pane_cp02_ParamLimits

0xe311,	// (0x0002480d) cell_tport_appsw_pane_cp02

0xe31e,	// (0x0002481a) cell_tport_appsw_pane_cp03_ParamLimits

0xe31e,	// (0x0002481a) cell_tport_appsw_pane_cp03

0x0608,	// (0x00016b04) phob2_contact_card_pane

0x0608,	// (0x00016b04) phob2_listscroll_pane

0x5ff9,	// (0x0001c4f5) phob2_list_pane

0x6001,	// (0x0001c4fd) scroll_pane_cp034

0xee5f,	// (0x0002535b) phob2_cc_data_pane_ParamLimits

0xee5f,	// (0x0002535b) phob2_cc_data_pane

0xee77,	// (0x00025373) phob2_cc_listscroll_pane_ParamLimits

0xee77,	// (0x00025373) phob2_cc_listscroll_pane

0xee8f,	// (0x0002538b) list_double_large_graphic_phob2_pane_ParamLimits

0xee8f,	// (0x0002538b) list_double_large_graphic_phob2_pane

0xeea2,	// (0x0002539e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xeea2,	// (0x0002539e) list_double_large_graphic_phob2_pane_g1

0xeeb8,	// (0x000253b4) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xeeb8,	// (0x000253b4) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x00026433) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x00026433) list_double_large_graphic_phob2_pane_g

0xeec4,	// (0x000253c0) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xeec4,	// (0x000253c0) list_double_large_graphic_phob2_pane_t1

0xeeda,	// (0x000253d6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xeeda,	// (0x000253d6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x00026438) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x00026438) list_double_large_graphic_phob2_pane_t

0x0608,	// (0x00016b04) list_highlight_pane_cp024

0xeeef,	// (0x000253eb) phob2_cc_button_pane

0xeef7,	// (0x000253f3) phob2_cc_data_pane_g1_ParamLimits

0xeef7,	// (0x000253f3) phob2_cc_data_pane_g1

0xef03,	// (0x000253ff) phob2_cc_data_pane_g2_ParamLimits

0xef03,	// (0x000253ff) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x0002643d) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x0002643d) phob2_cc_data_pane_g

0xef0f,	// (0x0002540b) phob2_cc_data_pane_t1_ParamLimits

0xef0f,	// (0x0002540b) phob2_cc_data_pane_t1

0xef21,	// (0x0002541d) phob2_cc_data_pane_t2_ParamLimits

0xef21,	// (0x0002541d) phob2_cc_data_pane_t2

0xef33,	// (0x0002542f) phob2_cc_data_pane_t3_ParamLimits

0xef33,	// (0x0002542f) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x00026442) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x00026442) phob2_cc_data_pane_t

0x6009,	// (0x0001c505) phob2_cc_list_pane_ParamLimits

0x6009,	// (0x0001c505) phob2_cc_list_pane

0x455a,	// (0x0001aa56) scroll_pane_cp035_ParamLimits

0x455a,	// (0x0001aa56) scroll_pane_cp035

0x0672,	// (0x00016b6e) bg_button_pane_cp033

0x6015,	// (0x0001c511) phob2_cc_button_pane_g1

0x6021,	// (0x0001c51d) phob2_cc_button_pane_t1

0x6036,	// (0x0001c532) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x00026449) phob2_cc_button_pane_t

0xef45,	// (0x00025441) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xef45,	// (0x00025441) list_double_large_graphic_phob2_cc_pane

0xef5e,	// (0x0002545a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xef5e,	// (0x0002545a) list_double_large_graphic_phob2_cc_pane_g1

0xef6f,	// (0x0002546b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xef6f,	// (0x0002546b) list_double_large_graphic_phob2_cc_pane_g2

0xef7e,	// (0x0002547a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xef7e,	// (0x0002547a) list_double_large_graphic_phob2_cc_pane_g3

0xef8d,	// (0x00025489) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xef8d,	// (0x00025489) list_double_large_graphic_phob2_cc_pane_g4

0xef9e,	// (0x0002549a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xef9e,	// (0x0002549a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x0002644e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x0002644e) list_double_large_graphic_phob2_cc_pane_g

0xefad,	// (0x000254a9) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xefad,	// (0x000254a9) list_double_large_graphic_phob2_cc_pane_t1

0xefd6,	// (0x000254d2) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xefd6,	// (0x000254d2) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x00026459) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x00026459) list_double_large_graphic_phob2_cc_pane_t

0x6085,	// (0x0001c581) list_highlight_pane_cp025_ParamLimits

0x6085,	// (0x0001c581) list_highlight_pane_cp025

0x0672,	// (0x00016b6e) bg_button_pane_cp033_ParamLimits

0x6015,	// (0x0001c511) phob2_cc_button_pane_g1_ParamLimits

0x6021,	// (0x0001c51d) phob2_cc_button_pane_t1_ParamLimits

0x6036,	// (0x0001c532) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x00026449) phob2_cc_button_pane_t_ParamLimits

0x88e6,	// (0x0001ede2) popup_wgtman_window

0x42e6,	// (0x0001a7e2) scroll_pane_cp038

0xea5c,	// (0x00024f58) wgtman_btn_pane_cp_01_ParamLimits

0xea5c,	// (0x00024f58) wgtman_btn_pane_cp_01

0x6093,	// (0x0001c58f) wgtman_content_pane

0x609c,	// (0x0001c598) wgtman_heading_pane

0x0608,	// (0x00016b04) bg_heading_pane_cp02

0x60a5,	// (0x0001c5a1) wgtman_heading_pane_g1

0x60ad,	// (0x0001c5a9) wgtman_heading_pane_t1

0x60bb,	// (0x0001c5b7) scroll_pane_cp036

0x60c3,	// (0x0001c5bf) wgtman_list_pane

0x605a,	// (0x0001c556) wgtman_list_pane_t1_ParamLimits

0x605a,	// (0x0001c556) wgtman_list_pane_t1

0x812d,	// (0x0001e629) cam4_grid_pane

0xca96,	// (0x00022f92) bg_button_pane_cp015_ParamLimits

0xcaa6,	// (0x00022fa2) bg_button_pane_cp016_ParamLimits

0xcab9,	// (0x00022fb5) bg_button_pane_cp017_ParamLimits

0xcb0b,	// (0x00023007) popup_vitu2_query_window_g3_ParamLimits

0xcb0b,	// (0x00023007) popup_vitu2_query_window_g3

0xcbbe,	// (0x000230ba) popup_vitu2_query_window_t6_ParamLimits

0xcbbe,	// (0x000230ba) popup_vitu2_query_window_t6

0xcbe9,	// (0x000230e5) popup_vitu2_query_window_t7_ParamLimits

0xcbe9,	// (0x000230e5) popup_vitu2_query_window_t7

0x6048,	// (0x0001c544) cam4_grid_pane_g1

0x6051,	// (0x0001c54d) cam4_grid_pane_g2

0x60cb,	// (0x0001c5c7) cam4_grid_pane_g3

0x60d4,	// (0x0001c5d0) cam4_grid_pane_g4

0x0003,

0xff62,	// (0x0002645e) cam4_grid_pane_g

0x9483,	// (0x0001f97f) aid_placing_vt_slider_lsc_ParamLimits

0x972d,	// (0x0001fc29) vidtel_button_pane_ParamLimits

0x972d,	// (0x0001fc29) vidtel_button_pane

0x0608,	// (0x00016b04) bg_button_pane_cp034

0xefff,	// (0x000254fb) vidtel_button_pane_g1

0xf007,	// (0x00025503) vidtel_button_pane_t1

0x4465,	// (0x0001a961) aid_size_vtel_slider_touch

0x455a,	// (0x0001aa56) scroll_pane_cp039

0xd7f8,	// (0x00023cf4) ncim_query_button_pane_cp01_ParamLimits

0xd817,	// (0x00023d13) ncimui_query_pane_g1_ParamLimits

0x0672,	// (0x00016b6e) input_focus_pane_cp012_ParamLimits

0x4eaa,	// (0x0001b3a6) ncim_query_entry_pane_t1_ParamLimits

0x455a,	// (0x0001aa56) scroll_pane_cp039_ParamLimits

0x19bc,	// (0x00017eb8) navi_pane_bcale_mc_g1

0x19c4,	// (0x00017ec0) navi_pane_bcale_mc_t1

0x543d,	// (0x0001b939) main_sp_fs_email_pane_g1

0x5449,	// (0x0001b945) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x000261f4) main_sp_fs_email_pane_g

0x5920,	// (0x0001be1c) list_single_cale_mrui_row_pane_g3_ParamLimits

0x5920,	// (0x0001be1c) list_single_cale_mrui_row_pane_g3

0xe6d6,	// (0x00024bd2) list_single_recal_day_pane_g5_event_pane

0x5b62,	// (0x0001c05e) list_single_recal_day_pane_g7

0x60dd,	// (0x0001c5d9) list_recal_day_event_pane_cp01

0x60e6,	// (0x0001c5e2) list_recal_vselct_arw_lo_pane_cp01

0x60ee,	// (0x0001c5ea) list_recal_vselct_arw_up_pane_cp01

0x60f6,	// (0x0001c5f2) list_recal_vselct_pane_cp01

0x44b1,	// (0x0001a9ad) list_recal_day_event_pane_cp01_g1

0x6100,	// (0x0001c5fc) list_recal_day_event_pane_cp01_t1

0x5b6a,	// (0x0001c066) list_single_recal_day_pane_t1_ParamLimits

0x5b7c,	// (0x0001c078) list_single_recal_day_pane_t2_ParamLimits

0xfe50,	// (0x0002634c) list_single_recal_day_pane_t_ParamLimits

0x0d20,	// (0x0001721c) bg_notes_pane_ParamLimits

0x0dd7,	// (0x000172d3) list_notes_pane_ParamLimits

0x8ae4,	// (0x0001efe0) scroll_pane_cp06_ParamLimits

0x0e13,	// (0x0001730f) main_notes_pane_ParamLimits

0x0608,	// (0x00016b04) main_welc_pane

0xf01d,	// (0x00025519) main_welc_body_pane_ParamLimits

0xf01d,	// (0x00025519) main_welc_body_pane

0xf036,	// (0x00025532) main_welc_opti_pane_ParamLimits

0xf036,	// (0x00025532) main_welc_opti_pane

0xf063,	// (0x0002555f) main_welc_pane_t1_ParamLimits

0xf063,	// (0x0002555f) main_welc_pane_t1

0x6071,	// (0x0001c56d) main_welc_body_row_pane_ParamLimits

0x6071,	// (0x0001c56d) main_welc_body_row_pane

0x3d2e,	// (0x0001a22a) main_welc_opti_row_pane_ParamLimits

0x3d2e,	// (0x0001a22a) main_welc_opti_row_pane

0x610e,	// (0x0001c60a) main_welc_opti_row_pane_g1

0xf07b,	// (0x00025577) main_welc_opti_row_pane_t1

0x6116,	// (0x0001c612) main_welc_body_row_pane_t1

0x5df2,	// (0x0001c2ee) popup_notif_wgt_heading_pane

0x5e0c,	// (0x0001c308) aid_size_list_notif_wgt_del_ParamLimits

0x5e19,	// (0x0001c315) list_notif_wgt_row_pane_g1_ParamLimits

0x5e25,	// (0x0001c321) list_notif_wgt_row_pane_g2_ParamLimits

0x5e34,	// (0x0001c330) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb7,	// (0x000263b3) list_notif_wgt_row_pane_g_ParamLimits

0x5e41,	// (0x0001c33d) list_notif_wgt_row_pane_t1_ParamLimits

0x5e57,	// (0x0001c353) list_notif_wgt_row_pane_t2_ParamLimits

0x5e69,	// (0x0001c365) list_notif_wgt_row_pane_t3_ParamLimits

0xfebe,	// (0x000263ba) list_notif_wgt_row_pane_t_ParamLimits

0xead3,	// (0x00024fcf) listrow_wgtman_pane_g1_ParamLimits

0xeae0,	// (0x00024fdc) listrow_wgtman_pane_g2_ParamLimits

0xfee7,	// (0x000263e3) listrow_wgtman_pane_g_ParamLimits

0xeaf8,	// (0x00024ff4) listrow_wgtman_pane_t1_ParamLimits

0xeb10,	// (0x0002500c) listrow_wgtman_pane_t2_ParamLimits

0xfeec,	// (0x000263e8) listrow_wgtman_pane_t_ParamLimits

0xeb36,	// (0x00025032) wait_bar_pane_cp09_ParamLimits

0x0608,	// (0x00016b04) bg_popup_heading_pane_cp02

0x6125,	// (0x0001c621) popup_notif_wgt_heading_pane_g1

0x612d,	// (0x0001c629) popup_notif_wgt_heading_pane_t1

0x0608,	// (0x00016b04) main_vids_pane

0x0608,	// (0x00016b04) vids_listscroll_pane

0xf08a,	// (0x00025586) scroll_pane_cp040

0x0608,	// (0x00016b04) vids_list_pane

0xf093,	// (0x0002558f) vids_list_double_pane_ParamLimits

0xf093,	// (0x0002558f) vids_list_double_pane

0xf0a4,	// (0x000255a0) vids_list_double_pane_g1

0xf0ad,	// (0x000255a9) vids_list_double_pane_t1

0xf0bc,	// (0x000255b8) vids_list_double_pane_t2

0x0001,

0xff70,	// (0x0002646c) vids_list_double_pane_t

0x77e8,	// (0x0001dce4) main_ncimui_pane_ParamLimits

0xd652,	// (0x00023b4e) main_ncimui_pane_g1_ParamLimits

0xd65e,	// (0x00023b5a) main_ncimui_pane_g2_ParamLimits

0xd65e,	// (0x00023b5a) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x000260f9) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x000260f9) main_ncimui_pane_g

0xf04b,	// (0x00025547) main_welc_pane_g1_ParamLimits

0xf04b,	// (0x00025547) main_welc_pane_g1

0xf057,	// (0x00025553) main_welc_pane_g2_ParamLimits

0xf057,	// (0x00025553) main_welc_pane_g2

0x0001,

0xff6b,	// (0x00026467) main_welc_pane_g_ParamLimits

0xff6b,	// (0x00026467) main_welc_pane_g

0x0d20,	// (0x0001721c) listscroll_mce_pane_ParamLimits

0x1b0f,	// (0x0001800b) wait_bar_pane_cp10

0x2f5d,	// (0x00019459) main_cale_day_pane_ParamLimits

0x2f5d,	// (0x00019459) main_cale_week_pane_ParamLimits

0x0d20,	// (0x0001721c) main_messa_pane_ParamLimits

0xbd32,	// (0x0002222e) main_clock2_btn_pane_ParamLimits

0xbd32,	// (0x0002222e) main_clock2_btn_pane

0x382e,	// (0x00019d2a) main_clock2_btn_pane_cp01_ParamLimits

0x382e,	// (0x00019d2a) main_clock2_btn_pane_cp01

0x58b8,	// (0x0001bdb4) list_cale_mrui_pane_ParamLimits

0x5e9d,	// (0x0001c399) main_cf0_pane_g2

0x0001,

0xfec5,	// (0x000263c1) main_cf0_pane_g

0xec9b,	// (0x00025197) area_left_week_number_pane_ParamLimits

0xecac,	// (0x000251a8) area_top_day_name_pane_ParamLimits

0xecb8,	// (0x000251b4) frame_month_view_pane_ParamLimits

0x5fbe,	// (0x0001c4ba) grid_month_view_pane_ParamLimits

0x5fcc,	// (0x0001c4c8) frm_month_g1_ParamLimits

0xed24,	// (0x00025220) frm_month_g2_ParamLimits

0xed33,	// (0x0002522f) frm_month_g3_ParamLimits

0xed42,	// (0x0002523e) frm_month_g4_ParamLimits

0xed51,	// (0x0002524d) frm_month_g5_ParamLimits

0xed60,	// (0x0002525c) frm_month_g6_ParamLimits

0xed6f,	// (0x0002526b) frm_month_g7_ParamLimits

0x5fd9,	// (0x0001c4d5) frm_month_g8_ParamLimits

0xed7e,	// (0x0002527a) frm_month_g9_ParamLimits

0xed8b,	// (0x00025287) frm_month_g10_ParamLimits

0xed98,	// (0x00025294) frm_month_g11_ParamLimits

0xeda5,	// (0x000252a1) frm_month_g12_ParamLimits

0xedb2,	// (0x000252ae) frm_month_g13_ParamLimits

0xedbf,	// (0x000252bb) frm_month_g14_ParamLimits

0xedcc,	// (0x000252c8) frm_month_g15_ParamLimits

0xedd9,	// (0x000252d5) frm_month_g16_ParamLimits

0xff16,	// (0x00026412) frm_month_g_ParamLimits

0x5fe6,	// (0x0001c4e2) cell_top_day_name_pane_t1_ParamLimits

0xede6,	// (0x000252e2) cell_area_left_week_number_pane_g1_ParamLimits

0xedf5,	// (0x000252f1) cell_area_left_week_number_pane_t1_ParamLimits

0x369a,	// (0x00019b96) cell_month_view_pane_g1_ParamLimits

0xee0b,	// (0x00025307) cell_month_view_pane_t1_ParamLimits

0x0d18,	// (0x00017214) main_clock2_btn_pane_g1

0x613b,	// (0x0001c637) main_clock2_btn_pane_t1

0x0672,	// (0x00016b6e) listscroll_cmail_pane_ParamLimits

0x543d,	// (0x0001b939) main_sp_fs_email_pane_g1_ParamLimits

0x5449,	// (0x0001b945) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x000261f4) main_sp_fs_email_pane_g_ParamLimits

0x5ad2,	// (0x0001bfce) list_recal_day_pane_ParamLimits

0x5ae3,	// (0x0001bfdf) mian_recal_day_pane_t1

0xdff6,	// (0x000244f2) list_single_dyc_row_text_pane_t4_ParamLimits

0xdff6,	// (0x000244f2) list_single_dyc_row_text_pane_t4

0xe02d,	// (0x00024529) list_single_dyc_row_text_pane_t5_ParamLimits

0xe02d,	// (0x00024529) list_single_dyc_row_text_pane_t5

0x550d,	// (0x0001ba09) list_single_dyc_row_text_pane_t6_ParamLimits

0x550d,	// (0x0001ba09) list_single_dyc_row_text_pane_t6

0x1490,	// (0x0001798c) aid_mgn_list_cale_time_pane

0x77e8,	// (0x0001dce4) main_gallery2_pane_ParamLimits

0x3842,	// (0x00019d3e) main_clock2_pane_cp01_t1

0x3850,	// (0x00019d4c) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x00025cd3) main_clock2_pane_cp01_t

0x8e20,	// (0x0001f31c) cale_week_scroll_pane_g16_ParamLimits

0x8e20,	// (0x0001f31c) cale_week_scroll_pane_g16

0x1048,	// (0x00017544) vorec_slider_pane

0xf007,	// (0x00025503) vidtel_button_pane_t1_ParamLimits

0xe72d,	// (0x00024c29) main_fs_bigclock_clock_pane_g1_ParamLimits

0xe72d,	// (0x00024c29) main_fs_bigclock_clock_pane_g2_ParamLimits

0xe73a,	// (0x00024c36) main_fs_bigclock_clock_pane_g3_ParamLimits

0xe73a,	// (0x00024c36) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe73,	// (0x0002636f) main_fs_bigclock_clock_pane_g_ParamLimits

0xe746,	// (0x00024c42) main_fs_bigclock_clock_pane_t1_ParamLimits

0xe759,	// (0x00024c55) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe7c,	// (0x00026378) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Normal
