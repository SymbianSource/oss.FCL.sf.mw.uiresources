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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008c523 };

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
0x0658,	// (0x0008cb7b) Screen

0x0664,	// (0x0008cb87) application_window

0x06b8,	// (0x0008cbdb) area_bottom_pane_ParamLimits

0x06b8,	// (0x0008cbdb) area_bottom_pane

0x06f1,	// (0x0008cc14) area_top_pane_ParamLimits

0x06f1,	// (0x0008cc14) area_top_pane

0x989c,	// (0x00095dbf) call_video_uplink_pane_ParamLimits

0x989c,	// (0x00095dbf) call_video_uplink_pane

0x077f,	// (0x0008cca2) main_pane_ParamLimits

0x077f,	// (0x0008cca2) main_pane

0xc63f,	// (0x00098b62) context_pane

0x3960,	// (0x0008fe83) navi_pane

0x3997,	// (0x0008feba) popup_cale_events_window_ParamLimits

0x3997,	// (0x0008feba) popup_cale_events_window

0xc652,	// (0x00098b75) popup_mup_playback_window

0x39af,	// (0x0008fed2) signal_pane

0xa07a,	// (0x0009659d) main_browser_pane

0xa966,	// (0x00096e89) main_burst_pane

0x3678,	// (0x0008fb9b) main_calc_pane

0xc633,	// (0x00098b56) main_cale_day_pane

0x0c76,	// (0x0008d199) main_cale_month_pane

0xc633,	// (0x00098b56) main_cale_week_pane

0xa966,	// (0x00096e89) main_call_pane

0x9d10,	// (0x00096233) main_call_poc_pane

0xa966,	// (0x00096e89) main_camera_pane

0xa966,	// (0x00096e89) main_chi_dic_pane

0xb165,	// (0x00097688) main_clock_pane

0x9d10,	// (0x00096233) main_fmradio_pane

0xa966,	// (0x00096e89) main_graph_messa_pane

0x9d10,	// (0x00096233) main_help_pane

0xa07a,	// (0x0009659d) main_im_pane

0x9f6b,	// (0x0009648e) main_image_pane_ParamLimits

0x9f6b,	// (0x0009648e) main_image_pane

0x9d10,	// (0x00096233) main_location2_pane

0xa966,	// (0x00096e89) main_location_pane

0x9f6b,	// (0x0009648e) main_messa_pane

0x9d10,	// (0x00096233) main_mp2_pane

0xa966,	// (0x00096e89) main_mp_pane

0x9d10,	// (0x00096233) main_msg_pane

0x9d10,	// (0x00096233) main_mup_eq_pane

0x9d10,	// (0x00096233) main_mup_pane

0xa07a,	// (0x0009659d) main_notes_pane

0x9d10,	// (0x00096233) main_pec_pane

0x9d10,	// (0x00096233) main_phob_pane

0x9d10,	// (0x00096233) main_pinb_pane

0x9d10,	// (0x00096233) main_postcard_pane

0x9d10,	// (0x00096233) main_qdial_pane

0xa966,	// (0x00096e89) main_skin_pane

0x9d10,	// (0x00096233) main_smil2_pane

0xa966,	// (0x00096e89) main_smil_pane

0xa966,	// (0x00096e89) main_video_pane

0xa966,	// (0x00096e89) main_video_tele_pane

0x9f6b,	// (0x0009648e) main_viewer_pane_ParamLimits

0x9f6b,	// (0x0009648e) main_viewer_pane

0xa966,	// (0x00096e89) main_vorec_pane

0x36ce,	// (0x0008fbf1) popup_blid_sat_info_window_ParamLimits

0x36ce,	// (0x0008fbf1) popup_blid_sat_info_window

0x3732,	// (0x0008fc55) popup_dyc_status_message_window_ParamLimits

0x3732,	// (0x0008fc55) popup_dyc_status_message_window

0x374c,	// (0x0008fc6f) popup_grid_large_graphic_window_ParamLimits

0x374c,	// (0x0008fc6f) popup_grid_large_graphic_window

0x380e,	// (0x0008fd31) popup_loc_request_window_ParamLimits

0x380e,	// (0x0008fd31) popup_loc_request_window

0x3934,	// (0x0008fe57) popup_wml_address_window_ParamLimits

0x3934,	// (0x0008fe57) popup_wml_address_window

0x34b6,	// (0x0008f9d9) call_muted_g1

0x3104,	// (0x0008f627) popup_call_audio_conf_window_ParamLimits

0x3104,	// (0x0008f627) popup_call_audio_conf_window

0x34c6,	// (0x0008f9e9) popup_call_audio_first_window_ParamLimits

0x34c6,	// (0x0008f9e9) popup_call_audio_first_window

0x353c,	// (0x0008fa5f) popup_call_audio_in_window_ParamLimits

0x353c,	// (0x0008fa5f) popup_call_audio_in_window

0x3578,	// (0x0008fa9b) popup_call_audio_out_window_ParamLimits

0x3578,	// (0x0008fa9b) popup_call_audio_out_window

0x35b2,	// (0x0008fad5) popup_call_audio_second_window_ParamLimits

0x35b2,	// (0x0008fad5) popup_call_audio_second_window

0x3608,	// (0x0008fb2b) popup_call_audio_wait_window_ParamLimits

0x3608,	// (0x0008fb2b) popup_call_audio_wait_window

0x363d,	// (0x0008fb60) popup_number_entry_window_ParamLimits

0x363d,	// (0x0008fb60) popup_number_entry_window

0x98c8,	// (0x00095deb) bg_popup_call_pane_cp05_ParamLimits

0x98c8,	// (0x00095deb) bg_popup_call_pane_cp05

0x98e8,	// (0x00095e0b) popup_number_entry_window_t1

0x98fb,	// (0x00095e1e) popup_number_entry_window_t2

0x990d,	// (0x00095e30) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0009b568) popup_number_entry_window_t

0x9954,	// (0x00095e77) text_title_cp2

0x9967,	// (0x00095e8a) bg_popup_call_pane_cp_ParamLimits

0x9967,	// (0x00095e8a) bg_popup_call_pane_cp

0x9975,	// (0x00095e98) call_thumbnail_pane

0x997d,	// (0x00095ea0) popup_call_audio_in_window_g1_ParamLimits

0x997d,	// (0x00095ea0) popup_call_audio_in_window_g1

0x9989,	// (0x00095eac) popup_call_audio_in_window_g2_ParamLimits

0x9989,	// (0x00095eac) popup_call_audio_in_window_g2

0x9995,	// (0x00095eb8) popup_call_audio_in_window_g3_ParamLimits

0x9995,	// (0x00095eb8) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0009b571) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0009b571) popup_call_audio_in_window_g

0x99a1,	// (0x00095ec4) popup_call_audio_in_window_t1_ParamLimits

0x99a1,	// (0x00095ec4) popup_call_audio_in_window_t1

0x99bd,	// (0x00095ee0) popup_call_audio_in_window_t2_ParamLimits

0x99bd,	// (0x00095ee0) popup_call_audio_in_window_t2

0x99d9,	// (0x00095efc) popup_call_audio_in_window_t3_ParamLimits

0x99d9,	// (0x00095efc) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0009b578) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0009b578) popup_call_audio_in_window_t

0x9967,	// (0x00095e8a) bg_popup_call_pane_cp01_ParamLimits

0x9967,	// (0x00095e8a) bg_popup_call_pane_cp01

0x9975,	// (0x00095e98) call_thumbnail_pane_cp02

0x99ec,	// (0x00095f0f) call_type_pane_cp022

0x99f4,	// (0x00095f17) popup_call_audio_out_window_g1_ParamLimits

0x99f4,	// (0x00095f17) popup_call_audio_out_window_g1

0x9a06,	// (0x00095f29) popup_call_audio_out_window_g2_ParamLimits

0x9a06,	// (0x00095f29) popup_call_audio_out_window_g2

0x9a12,	// (0x00095f35) popup_call_audio_out_window_g3_ParamLimits

0x9a12,	// (0x00095f35) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0009b57f) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0009b57f) popup_call_audio_out_window_g

0x9a24,	// (0x00095f47) popup_call_audio_out_window_t1_ParamLimits

0x9a24,	// (0x00095f47) popup_call_audio_out_window_t1

0x9a3c,	// (0x00095f5f) popup_call_audio_out_window_t2_ParamLimits

0x9a3c,	// (0x00095f5f) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0009b586) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0009b586) popup_call_audio_out_window_t

0x9a51,	// (0x00095f74) bg_popup_call_pane_ParamLimits

0x9a51,	// (0x00095f74) bg_popup_call_pane

0x0904,	// (0x0008ce27) call_thumbnail_pane_cp_ParamLimits

0x0904,	// (0x0008ce27) call_thumbnail_pane_cp

0x9ad5,	// (0x00095ff8) call_type_pane_cp01_ParamLimits

0x9ad5,	// (0x00095ff8) call_type_pane_cp01

0x9b19,	// (0x0009603c) popup_call_audio_first_window_g1_ParamLimits

0x9b19,	// (0x0009603c) popup_call_audio_first_window_g1

0x9b65,	// (0x00096088) popup_call_audio_first_window_g2_ParamLimits

0x9b65,	// (0x00096088) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0009b58b) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0009b58b) popup_call_audio_first_window_g

0x9ba9,	// (0x000960cc) popup_call_audio_first_window_t1_ParamLimits

0x9ba9,	// (0x000960cc) popup_call_audio_first_window_t1

0x9c55,	// (0x00096178) popup_call_audio_first_window_t4_ParamLimits

0x9c55,	// (0x00096178) popup_call_audio_first_window_t4

0x9ce1,	// (0x00096204) popup_call_audio_first_window_t5_ParamLimits

0x9ce1,	// (0x00096204) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0009b590) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0009b590) popup_call_audio_first_window_t

0x9d10,	// (0x00096233) bg_popup_call_pane_cp02

0x9d1a,	// (0x0009623d) call_type_pane_cp023

0x9d22,	// (0x00096245) popup_call_audio_wait_window_g1

0x9d2a,	// (0x0009624d) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0009b597) popup_call_audio_wait_window_g

0x9d32,	// (0x00096255) popup_call_audio_wait_window_t3

0x9d40,	// (0x00096263) bg_popup_call_pane_cp03_ParamLimits

0x9d40,	// (0x00096263) bg_popup_call_pane_cp03

0x9da0,	// (0x000962c3) call_thumbnail_pane_cp011_ParamLimits

0x9da0,	// (0x000962c3) call_thumbnail_pane_cp011

0x9dac,	// (0x000962cf) call_type_pane_cp034_ParamLimits

0x9dac,	// (0x000962cf) call_type_pane_cp034

0x9de8,	// (0x0009630b) popup_call_audio_second_window_g1_ParamLimits

0x9de8,	// (0x0009630b) popup_call_audio_second_window_g1

0x9e24,	// (0x00096347) popup_call_audio_second_window_g2_ParamLimits

0x9e24,	// (0x00096347) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0009b59c) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0009b59c) popup_call_audio_second_window_g

0x9e60,	// (0x00096383) popup_call_audio_second_window_t1_ParamLimits

0x9e60,	// (0x00096383) popup_call_audio_second_window_t1

0x9ee1,	// (0x00096404) popup_call_audio_second_window_t2_ParamLimits

0x9ee1,	// (0x00096404) popup_call_audio_second_window_t2

0x9f17,	// (0x0009643a) popup_call_audio_second_window_t3_ParamLimits

0x9f17,	// (0x0009643a) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0009b5a1) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0009b5a1) popup_call_audio_second_window_t

0x9d10,	// (0x00096233) bg_popup_call_pane_cp04

0x9f4d,	// (0x00096470) list_conf_pane

0x9f55,	// (0x00096478) popup_call_audio_conf_window_t1

0x9f63,	// (0x00096486) call_thumbnail_pane_g1

0x9f6b,	// (0x0009648e) bg_pinb_pane_ParamLimits

0x9f6b,	// (0x0009648e) bg_pinb_pane

0x9f79,	// (0x0009649c) find_pinb_pane

0x9f6b,	// (0x0009648e) listscroll_pinb_pane_ParamLimits

0x9f6b,	// (0x0009648e) listscroll_pinb_pane

0x9f83,	// (0x000964a6) pinb_bg_pane_g1

0x9f83,	// (0x000964a6) pinb_bg_pane_g2

0x9f83,	// (0x000964a6) pinb_bg_pane_g3

0x9f83,	// (0x000964a6) pinb_bg_pane_g4

0x9f83,	// (0x000964a6) pinb_bg_pane_g5

0x9f83,	// (0x000964a6) pinb_bg_pane_g6

0x9f83,	// (0x000964a6) pinb_bg_pane_g7

0x9f83,	// (0x000964a6) pinb_bg_pane_g8

0x9f83,	// (0x000964a6) pinb_bg_pane_g9

0x9f83,	// (0x000964a6) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0009b5a8) pinb_bg_pane_g

0x9855,	// (0x00095d78) grid_pinb_pane

0x9855,	// (0x00095d78) list_pinb_pane

0x98ba,	// (0x00095ddd) scroll_pane_cp01_ParamLimits

0x98ba,	// (0x00095ddd) scroll_pane_cp01

0x9f8d,	// (0x000964b0) find_pinb_pane_g1_ParamLimits

0x9f8d,	// (0x000964b0) find_pinb_pane_g1

0x9fa5,	// (0x000964c8) find_pinb_pane_t1

0x9fb7,	// (0x000964da) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0009b5c2) find_pinb_pane_t

0x9fcc,	// (0x000964ef) input_focus_pane_cp01_ParamLimits

0x9fcc,	// (0x000964ef) input_focus_pane_cp01

0x9fd8,	// (0x000964fb) cell_pinb_pane_ParamLimits

0x9fd8,	// (0x000964fb) cell_pinb_pane

0x9fe6,	// (0x00096509) cell_pinb_pane_g1_ParamLimits

0x9fe6,	// (0x00096509) cell_pinb_pane_g1

0x9ff4,	// (0x00096517) cell_pinb_pane_g2_ParamLimits

0x9ff4,	// (0x00096517) cell_pinb_pane_g2

0x9ff4,	// (0x00096517) cell_pinb_pane_g3_ParamLimits

0x9ff4,	// (0x00096517) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0009b5c7) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0009b5c7) cell_pinb_pane_g

0x9d10,	// (0x00096233) grid_highlight_pane_cp01

0x9fd8,	// (0x000964fb) list_pinb_item_pane_ParamLimits

0x9fd8,	// (0x000964fb) list_pinb_item_pane

0x9855,	// (0x00095d78) list_highlight_pane_cp02

0xa002,	// (0x00096525) list_pinb_item_pane_g1_ParamLimits

0xa002,	// (0x00096525) list_pinb_item_pane_g1

0x9ff4,	// (0x00096517) list_pinb_item_pane_g2_ParamLimits

0x9ff4,	// (0x00096517) list_pinb_item_pane_g2

0x9fe6,	// (0x00096509) list_pinb_item_pane_g3_ParamLimits

0x9fe6,	// (0x00096509) list_pinb_item_pane_g3

0x9ff4,	// (0x00096517) list_pinb_item_pane_g4_ParamLimits

0x9ff4,	// (0x00096517) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0009b5ce) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0009b5ce) list_pinb_item_pane_g

0xa010,	// (0x00096533) list_pinb_item_pane_t1_ParamLimits

0xa010,	// (0x00096533) list_pinb_item_pane_t1

0x0948,	// (0x0008ce6b) calc_display_pane

0x096d,	// (0x0008ce90) calc_paper_pane

0x0990,	// (0x0008ceb3) grid_calc_pane

0x9d10,	// (0x00096233) bg_list_pane_cp01

0x09be,	// (0x0008cee1) clock_g1

0x09c6,	// (0x0008cee9) clock_g2

0x0001,

0xf0b4,	// (0x0009b5d7) clock_g

0x09ce,	// (0x0008cef1) clock_t1_ParamLimits

0x09ce,	// (0x0008cef1) clock_t1

0x09e3,	// (0x0008cf06) clock_t2_ParamLimits

0x09e3,	// (0x0008cf06) clock_t2

0x09f5,	// (0x0008cf18) clock_t3_ParamLimits

0x09f5,	// (0x0008cf18) clock_t3

0x0a07,	// (0x0008cf2a) clock_t4_ParamLimits

0x0a07,	// (0x0008cf2a) clock_t4

0x0a19,	// (0x0008cf3c) clock_t5_ParamLimits

0x0a19,	// (0x0008cf3c) clock_t5

0x0a2e,	// (0x0008cf51) clock_t6_ParamLimits

0x0a2e,	// (0x0008cf51) clock_t6

0x0a40,	// (0x0008cf63) clock_t7_ParamLimits

0x0a40,	// (0x0008cf63) clock_t7

0x0a52,	// (0x0008cf75) clock_t8_ParamLimits

0x0a52,	// (0x0008cf75) clock_t8

0x0a66,	// (0x0008cf89) clock_t9_ParamLimits

0x0a66,	// (0x0008cf89) clock_t9

0x0008,

0xf0b9,	// (0x0009b5dc) clock_t_ParamLimits

0xf0b9,	// (0x0009b5dc) clock_t

0xa02c,	// (0x0009654f) popup_clock_analogue_window_cp02

0xa02c,	// (0x0009654f) popup_clock_digital_window_cp01

0x9d10,	// (0x00096233) listscroll_help_pane

0x9d10,	// (0x00096233) phob_pre_status_pane

0xa034,	// (0x00096557) grid_qdial_pane

0x9f6b,	// (0x0009648e) listscroll_mce_pane

0x9f6b,	// (0x0009648e) bg_notes_pane

0xa03e,	// (0x00096561) list_notes_pane

0x0a7c,	// (0x0008cf9f) scroll_pane_cp06

0xa04c,	// (0x0009656f) bg_calc_paper_pane

0xa060,	// (0x00096583) list_calc_pane

0xa07a,	// (0x0009659d) bg_calc_display_pane

0x0a90,	// (0x0008cfb3) calc_display_pane_t1

0x0aa5,	// (0x0008cfc8) calc_display_pane_t2

0xa086,	// (0x000965a9) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0009b5ef) calc_display_pane_t

0x0aba,	// (0x0008cfdd) cell_calc_pane_ParamLimits

0x0aba,	// (0x0008cfdd) cell_calc_pane

0xa098,	// (0x000965bb) bg_calc_paper_pane_g1

0xa0a4,	// (0x000965c7) bg_calc_paper_pane_g2

0xa0b0,	// (0x000965d3) bg_calc_paper_pane_g3

0xa0bc,	// (0x000965df) bg_calc_paper_pane_g4

0xa0c8,	// (0x000965eb) bg_calc_paper_pane_g5

0x0af5,	// (0x0008d018) bg_calc_paper_pane_g6

0x0b08,	// (0x0008d02b) bg_calc_paper_pane_g7

0x0b1b,	// (0x0008d03e) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0009b5f6) bg_calc_paper_pane_g

0x0b2e,	// (0x0008d051) calc_bg_paper_pane_g9

0x0b41,	// (0x0008d064) list_calc_item_pane_ParamLimits

0x0b41,	// (0x0008d064) list_calc_item_pane

0xa0d4,	// (0x000965f7) list_calc_item_pane_g1

0xa0e1,	// (0x00096604) list_calc_item_pane_t1_ParamLimits

0xa0e1,	// (0x00096604) list_calc_item_pane_t1

0x0b59,	// (0x0008d07c) list_calc_item_pane_t2_ParamLimits

0x0b59,	// (0x0008d07c) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0009b607) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0009b607) list_calc_item_pane_t

0x9f83,	// (0x000964a6) cell_calc_pane_g1

0xa0f3,	// (0x00096616) grid_highlight_pane_cp02

0xa94c,	// (0x00096e6f) bg_calc_display_pane_g1

0x0b8b,	// (0x0008d0ae) bg_calc_display_pane_g2

0x0b95,	// (0x0008d0b8) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0009b611) bg_calc_display_pane_g

0x0b9e,	// (0x0008d0c1) cell_qdial_pane_ParamLimits

0x0b9e,	// (0x0008d0c1) cell_qdial_pane

0x0bb2,	// (0x0008d0d5) cell_qdial_pane_g1_ParamLimits

0x0bb2,	// (0x0008d0d5) cell_qdial_pane_g1

0x0bc8,	// (0x0008d0eb) cell_qdial_pane_g2_ParamLimits

0x0bc8,	// (0x0008d0eb) cell_qdial_pane_g2

0xa115,	// (0x00096638) cell_qdial_pane_g3_ParamLimits

0xa115,	// (0x00096638) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0009b618) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0009b618) cell_qdial_pane_g

0x0bef,	// (0x0008d112) cell_qdial_pane_t1_ParamLimits

0x0bef,	// (0x0008d112) cell_qdial_pane_t1

0x0c07,	// (0x0008d12a) cell_qdial_pane_t2_ParamLimits

0x0c07,	// (0x0008d12a) cell_qdial_pane_t2

0x0c1a,	// (0x0008d13d) cell_qdial_pane_t3_ParamLimits

0x0c1a,	// (0x0008d13d) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0009b621) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0009b621) cell_qdial_pane_t

0x9d10,	// (0x00096233) grid_highlight_pane_cp04

0xa121,	// (0x00096644) thumbnail_qdial_pane_ParamLimits

0xa121,	// (0x00096644) thumbnail_qdial_pane

0xa17d,	// (0x000966a0) list_help_pane

0xa186,	// (0x000966a9) scroll_pane_cp02

0x0c2d,	// (0x0008d150) help_list_pane_t1_ParamLimits

0x0c2d,	// (0x0008d150) help_list_pane_t1

0xa18f,	// (0x000966b2) bg_notes_pane_g2

0xa197,	// (0x000966ba) bg_notes_pane_g3

0xa19f,	// (0x000966c2) notes_bg_pane_g1

0xa1a7,	// (0x000966ca) notes_bg_pane_g4

0xa1af,	// (0x000966d2) notes_bg_pane_g5

0xa1b7,	// (0x000966da) notes_bg_pane_g6

0xa1bf,	// (0x000966e2) notes_bg_pane_g7

0xa1c7,	// (0x000966ea) notes_bg_pane_g8

0xa1cf,	// (0x000966f2) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0009b63f) notes_bg_pane_g

0x0c51,	// (0x0008d174) list_notes_text_pane_ParamLimits

0x0c51,	// (0x0008d174) list_notes_text_pane

0xa1d7,	// (0x000966fa) list_notes_text_pane_g1

0x0c68,	// (0x0008d18b) list_notes_text_pane_t1

0x0c76,	// (0x0008d199) listscroll_cale_week_pane

0x0ca0,	// (0x0008d1c3) bg_cale_heading_pane

0x0cc4,	// (0x0008d1e7) bg_cale_pane_cp01

0x0ce1,	// (0x0008d204) cale_week_corner_pane

0x0d00,	// (0x0008d223) cale_week_day_heading_pane

0x0d29,	// (0x0008d24c) cale_week_scroll_pane_g1

0x0d48,	// (0x0008d26b) cale_week_scroll_pane_g2

0x0d60,	// (0x0008d283) cale_week_scroll_pane_g3

0x0d78,	// (0x0008d29b) cale_week_scroll_pane_g4

0x0d90,	// (0x0008d2b3) cale_week_scroll_pane_g5

0x0db0,	// (0x0008d2d3) cale_week_scroll_pane_g6

0x0dd0,	// (0x0008d2f3) cale_week_scroll_pane_g7

0x0df4,	// (0x0008d317) cale_week_scroll_pane_g8

0x0e18,	// (0x0008d33b) cale_week_scroll_pane_g9

0x0e30,	// (0x0008d353) cale_week_scroll_pane_g10

0x0e48,	// (0x0008d36b) cale_week_scroll_pane_g11

0x0e60,	// (0x0008d383) cale_week_scroll_pane_g12

0x0e84,	// (0x0008d3a7) cale_week_scroll_pane_g13

0x0e84,	// (0x0008d3a7) cale_week_scroll_pane_g14

0x0e84,	// (0x0008d3a7) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0009b64e) cale_week_scroll_pane_g

0x0ecc,	// (0x0008d3ef) cale_week_time_pane

0x0ef0,	// (0x0008d413) grid_cale_week_pane

0xa20c,	// (0x0009672f) scroll_pane_cp08

0x0f22,	// (0x0008d445) cell_cale_week_pane_ParamLimits

0x0f22,	// (0x0008d445) cell_cale_week_pane

0x0fbe,	// (0x0008d4e1) cale_week_day_heading_pane_t1

0x0fe8,	// (0x0008d50b) cale_week_day_heading_pane_t2

0x1017,	// (0x0008d53a) cale_week_day_heading_pane_t3

0x1046,	// (0x0008d569) cale_week_day_heading_pane_t4

0x1075,	// (0x0008d598) cale_week_day_heading_pane_t5

0x10a8,	// (0x0008d5cb) cale_week_day_heading_pane_t6

0x10df,	// (0x0008d602) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0009b66f) cale_week_day_heading_pane_t

0xa229,	// (0x0009674c) bg_cale_side_pane

0x1109,	// (0x0008d62c) cale_week_time_pane_t1

0x1123,	// (0x0008d646) cale_week_time_pane_t2

0x113d,	// (0x0008d660) cale_week_time_pane_t3

0x1157,	// (0x0008d67a) cale_week_time_pane_t4

0x1171,	// (0x0008d694) cale_week_time_pane_t5

0x118b,	// (0x0008d6ae) cale_week_time_pane_t6

0x11ab,	// (0x0008d6ce) cale_week_time_pane_t7

0x11d1,	// (0x0008d6f4) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0009b67e) cale_week_time_pane_t

0x11f7,	// (0x0008d71a) cell_cale_week_pane_g2

0x121b,	// (0x0008d73e) cell_cale_week_pane_g3_ParamLimits

0x121b,	// (0x0008d73e) cell_cale_week_pane_g3

0xa237,	// (0x0009675a) grid_highlight_pane_cp07

0xa23f,	// (0x00096762) listscroll_gms_pane

0xa249,	// (0x0009676c) grid_gms_pane

0xa252,	// (0x00096775) listscroll_gms_pane_g1

0xa25a,	// (0x0009677d) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0009b68f) listscroll_gms_pane_g

0x1233,	// (0x0008d756) scroll_pane_cp010

0x123e,	// (0x0008d761) cell_gms_pane_ParamLimits

0x123e,	// (0x0008d761) cell_gms_pane

0x1255,	// (0x0008d778) cell_gms_pane_g1

0xa262,	// (0x00096785) cell_gms_pane_g2

0xa26a,	// (0x0009678d) cell_gms_pane_g3

0xa955,	// (0x00096e78) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0009b694) cell_gms_pane_g

0xa95e,	// (0x00096e81) grid_highlight_pane_cp09

0x343a,	// (0x0008f95d) phob_pre_status_pane_g1

0x3442,	// (0x0008f965) phob_pre_status_pane_g2

0x344a,	// (0x0008f96d) phob_pre_status_pane_g3

0x3452,	// (0x0008f975) phob_pre_status_pane_g4

0x0004,

0xf535,	// (0x0009ba58) phob_pre_status_pane_g

0x3462,	// (0x0008f985) phob_pre_status_pane_t1

0x3472,	// (0x0008f995) phob_pre_status_pane_t2

0x3482,	// (0x0008f9a5) phob_pre_status_pane_t3

0x0002,

0xf540,	// (0x0009ba63) phob_pre_status_pane_t

0xa966,	// (0x00096e89) bg_list_pane_cp05

0x1265,	// (0x0008d788) grid_vorec_pane

0x126f,	// (0x0008d792) vorec_t1

0x127d,	// (0x0008d7a0) vorec_t2

0x128b,	// (0x0008d7ae) vorec_t3

0x1299,	// (0x0008d7bc) vorec_t4

0xa922,	// (0x00096e45) vorec_t5

0x8b52,	// (0x00095075) vorec_t6

0x0004,

0xf17a,	// (0x0009b69d) vorec_t

0x8b60,	// (0x00095083) wait_bar_pane_cp01

0x12b5,	// (0x0008d7d8) cell_vorec_pane_ParamLimits

0x12b5,	// (0x0008d7d8) cell_vorec_pane

0xa273,	// (0x00096796) cell_vorec_pane_g1

0x9d10,	// (0x00096233) grid_highlight_pane_cp05

0x98ba,	// (0x00095ddd) cams_zoom_pane

0x98ba,	// (0x00095ddd) image_vga_pane

0x9fe6,	// (0x00096509) main_camera_pane_g1

0x9fe6,	// (0x00096509) main_camera_pane_g2

0x9fe6,	// (0x00096509) main_camera_pane_g3

0x9fe6,	// (0x00096509) main_camera_pane_g4

0x9fe6,	// (0x00096509) main_camera_pane_g5

0x9fe6,	// (0x00096509) main_camera_pane_g6

0x9fe6,	// (0x00096509) main_camera_pane_g7

0x0007,

0xf185,	// (0x0009b6a8) main_camera_pane_g

0xa96e,	// (0x00096e91) main_camera_pane_t1

0xa96e,	// (0x00096e91) main_camera_pane_t2

0x0001,

0xf196,	// (0x0009b6b9) main_camera_pane_t

0x12de,	// (0x0008d801) cams_zoom_pane_cp_ParamLimits

0x12de,	// (0x0008d801) cams_zoom_pane_cp

0x1312,	// (0x0008d835) image_cif_pane_ParamLimits

0x1312,	// (0x0008d835) image_cif_pane

0x9855,	// (0x00095d78) image_subqcif_pane

0x1324,	// (0x0008d847) main_video_pane_g1_ParamLimits

0x1324,	// (0x0008d847) main_video_pane_g1

0x1352,	// (0x0008d875) main_video_pane_g2_ParamLimits

0x1352,	// (0x0008d875) main_video_pane_g2

0x138c,	// (0x0008d8af) main_video_pane_g3_ParamLimits

0x138c,	// (0x0008d8af) main_video_pane_g3

0x138c,	// (0x0008d8af) main_video_pane_g4_ParamLimits

0x138c,	// (0x0008d8af) main_video_pane_g4

0x13c0,	// (0x0008d8e3) main_video_pane_g5_ParamLimits

0x13c0,	// (0x0008d8e3) main_video_pane_g5

0xa982,	// (0x00096ea5) main_video_pane_g6_ParamLimits

0xa982,	// (0x00096ea5) main_video_pane_g6

0x0006,

0xf19b,	// (0x0009b6be) main_video_pane_g_ParamLimits

0xf19b,	// (0x0009b6be) main_video_pane_g

0x13dc,	// (0x0008d8ff) main_video_pane_t1_ParamLimits

0x13dc,	// (0x0008d8ff) main_video_pane_t1

0xa99c,	// (0x00096ebf) cams_zoom_pane_g1

0xa99c,	// (0x00096ebf) cams_zoom_pane_g2

0xa99c,	// (0x00096ebf) cams_zoom_pane_g3

0xa99c,	// (0x00096ebf) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0009b6cd) cams_zoom_pane_g

0x1434,	// (0x0008d957) grid_cams_pane

0x144e,	// (0x0008d971) linegrid_cams_pane

0x1460,	// (0x0008d983) cell_cams_pane_ParamLimits

0x1460,	// (0x0008d983) cell_cams_pane

0xa9a6,	// (0x00096ec9) cams_burst_image_pane

0xa9ae,	// (0x00096ed1) cell_cams_pane_g1

0x9d10,	// (0x00096233) grid_highlight_pane_cp03

0x9f83,	// (0x000964a6) mp_bg_pane_g1

0x9855,	// (0x00095d78) bg_list_pane_cp03

0x9855,	// (0x00095d78) bg_mp_pane

0x9855,	// (0x00095d78) grid_mp_pane

0xa99c,	// (0x00096ebf) media_player_g1

0xaefa,	// (0x0009741d) media_player_t1

0xaefa,	// (0x0009741d) media_player_t2

0xaefa,	// (0x0009741d) media_player_t3

0xaefa,	// (0x0009741d) media_player_t4

0xaefa,	// (0x0009741d) media_player_t5

0xaefa,	// (0x0009741d) media_player_t6

0xaefa,	// (0x0009741d) media_player_t7

0x0006,

0xf51f,	// (0x0009ba42) media_player_t

0x9855,	// (0x00095d78) wait_bar_pane_cp02

0xf504,	// (0x0009ba27) main_usb_pane_t

0xb165,	// (0x00097688) cell_mp_pane

0x9f83,	// (0x000964a6) cell_mp_pane_g1

0x9d10,	// (0x00096233) grid_highlight_pane_cp06

0xa9b6,	// (0x00096ed9) grid_skin_colour_pane

0xa9be,	// (0x00096ee1) list_highlight_pane_cp03

0x1482,	// (0x0008d9a5) skin_g1

0xa9c6,	// (0x00096ee9) skin_t1

0xa9d5,	// (0x00096ef8) skin_t2

0x0001,

0xf1d8,	// (0x0009b6fb) skin_t

0x148a,	// (0x0008d9ad) cell_skin_colour_pane_ParamLimits

0x148a,	// (0x0008d9ad) cell_skin_colour_pane

0xa9e3,	// (0x00096f06) cell_skin_colour_pane_g1

0x14fd,	// (0x0008da20) call_video_g1_ParamLimits

0x14fd,	// (0x0008da20) call_video_g1

0x1519,	// (0x0008da3c) call_video_g2_ParamLimits

0x1519,	// (0x0008da3c) call_video_g2

0x0001,

0xf1dd,	// (0x0009b700) call_video_g_ParamLimits

0xf1dd,	// (0x0009b700) call_video_g

0x155e,	// (0x0008da81) call_video_uplink_pane_cp1_ParamLimits

0x155e,	// (0x0008da81) call_video_uplink_pane_cp1

0xa9f5,	// (0x00096f18) call_video_uplink_pane_cp2

0x15ff,	// (0x0008db22) video_down_crop_pane_ParamLimits

0x15ff,	// (0x0008db22) video_down_crop_pane

0x16e8,	// (0x0008dc0b) video_down_pane_ParamLimits

0x16e8,	// (0x0008dc0b) video_down_pane

0xa9fd,	// (0x00096f20) video_down_subqcif_pane_ParamLimits

0xa9fd,	// (0x00096f20) video_down_subqcif_pane

0xaa17,	// (0x00096f3a) video_down_subqcif_pane_cp_ParamLimits

0xaa17,	// (0x00096f3a) video_down_subqcif_pane_cp

0xaa3f,	// (0x00096f62) im_reading_pane_ParamLimits

0xaa3f,	// (0x00096f62) im_reading_pane

0x17f3,	// (0x0008dd16) im_writing_pane_ParamLimits

0x17f3,	// (0x0008dd16) im_writing_pane

0x1811,	// (0x0008dd34) im_reading_pane_t1

0xaa59,	// (0x00096f7c) list_im_pane

0xaa6a,	// (0x00096f8d) scroll_pane_cp07

0x1850,	// (0x0008dd73) im_writing_pane_t1_ParamLimits

0x1850,	// (0x0008dd73) im_writing_pane_t1

0xaa83,	// (0x00096fa6) im_writing_pane_t2_ParamLimits

0xaa83,	// (0x00096fa6) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0009b70a) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0009b70a) im_writing_pane_t

0x9d10,	// (0x00096233) input_focus_pane_cp04

0x9d10,	// (0x00096233) input_focus_pane_cp05

0x1865,	// (0x0008dd88) list_im_single_pane_ParamLimits

0x1865,	// (0x0008dd88) list_im_single_pane

0xaaa0,	// (0x00096fc3) list_single_im_pane_t1

0xa966,	// (0x00096e89) blid_accuracy_pane

0xa966,	// (0x00096e89) blid_compass_pane

0xc5eb,	// (0x00098b0e) main_location_t1

0xc5eb,	// (0x00098b0e) main_location_t2

0xc5eb,	// (0x00098b0e) main_location_t3

0x0002,

0xf52e,	// (0x0009ba51) main_location_t

0x9d10,	// (0x00096233) aid_levels_location

0x9f83,	// (0x000964a6) blid_accuracy_pane_g1

0x9f83,	// (0x000964a6) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x0009b759) blid_accuracy_pane_g

0xaada,	// (0x00096ffd) wml_content_pane

0xab18,	// (0x0009703b) wml_button_pane_ParamLimits

0xab18,	// (0x0009703b) wml_button_pane

0x187b,	// (0x0008dd9e) wml_list_single_large_pane_ParamLimits

0x187b,	// (0x0008dd9e) wml_list_single_large_pane

0x1894,	// (0x0008ddb7) wml_list_single_medium_pane_ParamLimits

0x1894,	// (0x0008ddb7) wml_list_single_medium_pane

0x18ae,	// (0x0008ddd1) wml_list_single_small_pane_ParamLimits

0x18ae,	// (0x0008ddd1) wml_list_single_small_pane

0xab2c,	// (0x0009704f) wml_selection_box_pane_ParamLimits

0xab2c,	// (0x0009704f) wml_selection_box_pane

0xab3f,	// (0x00097062) wml_list_single_pane_t1

0xab4e,	// (0x00097071) wml_list_single_medium_pane_t1

0xab5d,	// (0x00097080) wml_list_single_large_pane_t1

0xab6c,	// (0x0009708f) input_focus_pane_cp02_ParamLimits

0xab6c,	// (0x0009708f) input_focus_pane_cp02

0xab7f,	// (0x000970a2) wml_selection_box_pane_g1

0xab88,	// (0x000970ab) wml_selection_box_pane_t1_ParamLimits

0xab88,	// (0x000970ab) wml_selection_box_pane_t1

0x9f6b,	// (0x0009648e) bg_wml_button_pane_ParamLimits

0x9f6b,	// (0x0009648e) bg_wml_button_pane

0xaba0,	// (0x000970c3) wml_button_pane_g1

0xaba8,	// (0x000970cb) wml_button_pane_t1

0xaba0,	// (0x000970c3) wml_button_bg_pane_g1

0xabb8,	// (0x000970db) wml_button_bg_pane_g2

0xabc0,	// (0x000970e3) wml_button_bg_pane_g3

0xabc8,	// (0x000970eb) wml_button_bg_pane_g4

0xabd0,	// (0x000970f3) wml_button_bg_pane_g5

0xabd8,	// (0x000970fb) wml_button_bg_pane_g6

0xabe0,	// (0x00097103) wml_button_bg_pane_g7

0xabe8,	// (0x0009710b) wml_button_bg_pane_g8

0xabf0,	// (0x00097113) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0009b70f) wml_button_bg_pane_g

0x18ca,	// (0x0008dded) bg_list_pane_cp02

0xabf8,	// (0x0009711b) mce_header_pane_ParamLimits

0xabf8,	// (0x0009711b) mce_header_pane

0xac0e,	// (0x00097131) mce_icon_pane

0xac0e,	// (0x00097131) mce_image_pane

0xac17,	// (0x0009713a) mce_text_pane_ParamLimits

0xac17,	// (0x0009713a) mce_text_pane

0x18d4,	// (0x0008ddf7) scroll_pane_cp03

0xab10,	// (0x00097033) scroll_pane_cp04

0xac2a,	// (0x0009714d) scroll_pane_cp05_ParamLimits

0xac2a,	// (0x0009714d) scroll_pane_cp05

0x18de,	// (0x0008de01) mce_header_field_pane_ParamLimits

0x18de,	// (0x0008de01) mce_header_field_pane

0x18f7,	// (0x0008de1a) mce_header_field_pane_2_ParamLimits

0x18f7,	// (0x0008de1a) mce_header_field_pane_2

0x190d,	// (0x0008de30) mce_header_field_pane_3

0x1915,	// (0x0008de38) list_single_mce_message_pane_ParamLimits

0x1915,	// (0x0008de38) list_single_mce_message_pane

0x1931,	// (0x0008de54) list_single_mce_smart_pane_ParamLimits

0x1931,	// (0x0008de54) list_single_mce_smart_pane

0xac36,	// (0x00097159) input_focus_pane_cp03

0xac3f,	// (0x00097162) list_header_data_pane

0x1958,	// (0x0008de7b) mce_header_field_pane_t1

0x1968,	// (0x0008de8b) list_single_mce_header_pane_ParamLimits

0x1968,	// (0x0008de8b) list_single_mce_header_pane

0xac47,	// (0x0009716a) list_single_mce_header_pane_t1

0xac56,	// (0x00097179) list_single_mce_message_pane_g1

0xac5e,	// (0x00097181) list_single_mce_message_pane_t1

0x19a2,	// (0x0008dec5) bg_cale_heading_pane_cp01_ParamLimits

0x19a2,	// (0x0008dec5) bg_cale_heading_pane_cp01

0xac6c,	// (0x0009718f) bg_cale_pane_cp02_ParamLimits

0xac6c,	// (0x0009718f) bg_cale_pane_cp02

0x19f4,	// (0x0008df17) cale_month_corner_pane

0x1a13,	// (0x0008df36) cale_month_day_heading_pane_ParamLimits

0x1a13,	// (0x0008df36) cale_month_day_heading_pane

0x1a7d,	// (0x0008dfa0) cale_month_pane_g1_ParamLimits

0x1a7d,	// (0x0008dfa0) cale_month_pane_g1

0x1ac4,	// (0x0008dfe7) cale_month_pane_g2_ParamLimits

0x1ac4,	// (0x0008dfe7) cale_month_pane_g2

0x1b00,	// (0x0008e023) cale_month_pane_g3_ParamLimits

0x1b00,	// (0x0008e023) cale_month_pane_g3

0x1b54,	// (0x0008e077) cale_month_pane_g4_ParamLimits

0x1b54,	// (0x0008e077) cale_month_pane_g4

0x1ba8,	// (0x0008e0cb) cale_month_pane_g5_ParamLimits

0x1ba8,	// (0x0008e0cb) cale_month_pane_g5

0x1c04,	// (0x0008e127) cale_month_pane_g6_ParamLimits

0x1c04,	// (0x0008e127) cale_month_pane_g6

0x1c6c,	// (0x0008e18f) cale_month_pane_g7_ParamLimits

0x1c6c,	// (0x0008e18f) cale_month_pane_g7

0x1cd8,	// (0x0008e1fb) cale_month_pane_g8_ParamLimits

0x1cd8,	// (0x0008e1fb) cale_month_pane_g8

0x1d44,	// (0x0008e267) cale_month_pane_g9_ParamLimits

0x1d44,	// (0x0008e267) cale_month_pane_g9

0x1da8,	// (0x0008e2cb) cale_month_pane_g10_ParamLimits

0x1da8,	// (0x0008e2cb) cale_month_pane_g10

0x1dfa,	// (0x0008e31d) cale_month_pane_g11_ParamLimits

0x1dfa,	// (0x0008e31d) cale_month_pane_g11

0x1e4c,	// (0x0008e36f) cale_month_pane_g12_ParamLimits

0x1e4c,	// (0x0008e36f) cale_month_pane_g12

0x1ea4,	// (0x0008e3c7) cale_month_pane_g13_ParamLimits

0x1ea4,	// (0x0008e3c7) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0009b722) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0009b722) cale_month_pane_g

0x1efc,	// (0x0008e41f) cale_month_week_pane

0x1f20,	// (0x0008e443) grid_cale_month_pane_ParamLimits

0x1f20,	// (0x0008e443) grid_cale_month_pane

0x1f81,	// (0x0008e4a4) cale_month_day_heading_pane_t1

0x2007,	// (0x0008e52a) cale_month_day_heading_pane_t2

0x2080,	// (0x0008e5a3) cale_month_day_heading_pane_t3

0x20f9,	// (0x0008e61c) cale_month_day_heading_pane_t4

0x217a,	// (0x0008e69d) cale_month_day_heading_pane_t5

0x2203,	// (0x0008e726) cale_month_day_heading_pane_t6

0x2294,	// (0x0008e7b7) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0009b73d) cale_month_day_heading_pane_t

0xa229,	// (0x0009674c) bg_cale_side_pane_cp01

0x2325,	// (0x0008e848) cale_month_week_pane_t1

0x233e,	// (0x0008e861) cale_month_week_pane_t2

0x2357,	// (0x0008e87a) cale_month_week_pane_t3

0x2370,	// (0x0008e893) cale_month_week_pane_t4

0x2389,	// (0x0008e8ac) cale_month_week_pane_t5

0x23a2,	// (0x0008e8c5) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0009b74c) cale_month_week_pane_t

0x23c7,	// (0x0008e8ea) cell_cale_month_pane_ParamLimits

0x23c7,	// (0x0008e8ea) cell_cale_month_pane

0xa27d,	// (0x000967a0) cell_cale_month_pane_g1

0x2505,	// (0x0008ea28) cell_cale_month_pane_t1_ParamLimits

0x2505,	// (0x0008ea28) cell_cale_month_pane_t1

0xa237,	// (0x0009675a) grid_highlight_pane_cp08

0x9f83,	// (0x000964a6) main_smil_g1

0x2531,	// (0x0008ea54) smil_status_pane

0xacab,	// (0x000971ce) smil_text_pane

0xc501,	// (0x00098a24) bg_popup_call3_rect_pane_g8

0xc509,	// (0x00098a2c) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x0009b9e5) bg_popup_call3_rect_pane_g

0xc6b4,	// (0x00098bd7) smil_status_volume_pane_g1

0xacb5,	// (0x000971d8) smil_status_pane_t1

0xa3d3,	// (0x000968f6) volume_smil_pane

0xaccc,	// (0x000971ef) list_smil_text_pane

0x2546,	// (0x0008ea69) scroll_pane_cp011

0x2551,	// (0x0008ea74) smil_text_list_pane_t1_ParamLimits

0x2551,	// (0x0008ea74) smil_text_list_pane_t1

0xa289,	// (0x000967ac) aid_volume_smil_ParamLimits

0xa289,	// (0x000967ac) aid_volume_smil

0x9f83,	// (0x000964a6) smil_volume_pane_g1

0x9f83,	// (0x000964a6) smil_volume_pane_g2

0x0001,

0xf236,	// (0x0009b759) smil_volume_pane_g

0x0c76,	// (0x0008d199) listscroll_cale_day_pane

0xacd6,	// (0x000971f9) bg_cale_pane

0xacee,	// (0x00097211) list_cale_pane

0xad11,	// (0x00097234) scroll_pane_cp09

0xad22,	// (0x00097245) cale_bg_pane_g1

0xad2a,	// (0x0009724d) cale_bg_pane_g2

0xad32,	// (0x00097255) cale_bg_pane_g3

0xad3a,	// (0x0009725d) cale_bg_pane_g4

0xad42,	// (0x00097265) cale_bg_pane_g5

0xad4a,	// (0x0009726d) cale_bg_pane_g6

0xad52,	// (0x00097275) cale_bg_pane_g7

0xad5a,	// (0x0009727d) cale_bg_pane_g8

0xad62,	// (0x00097285) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x0009b75e) cale_bg_pane_g

0xad6a,	// (0x0009728d) list_cale_time_pane_ParamLimits

0xad6a,	// (0x0009728d) list_cale_time_pane

0xad81,	// (0x000972a4) list_cale_time_pane_g1_ParamLimits

0xad81,	// (0x000972a4) list_cale_time_pane_g1

0xad8d,	// (0x000972b0) list_cale_time_pane_g2_ParamLimits

0xad8d,	// (0x000972b0) list_cale_time_pane_g2

0x25a5,	// (0x0008eac8) list_cale_time_pane_g3_ParamLimits

0x25a5,	// (0x0008eac8) list_cale_time_pane_g3

0x25b3,	// (0x0008ead6) list_cale_time_pane_g4_ParamLimits

0x25b3,	// (0x0008ead6) list_cale_time_pane_g4

0x25c1,	// (0x0008eae4) list_cale_time_pane_g5_ParamLimits

0x25c1,	// (0x0008eae4) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x0009b771) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x0009b771) list_cale_time_pane_g

0xada7,	// (0x000972ca) list_cale_time_pane_t1_ParamLimits

0xada7,	// (0x000972ca) list_cale_time_pane_t1

0xadcf,	// (0x000972f2) list_cale_time_pane_t2_ParamLimits

0xadcf,	// (0x000972f2) list_cale_time_pane_t2

0x2873,	// (0x0008ed96) aid_blid_cardinal_pane

0x28b1,	// (0x0008edd4) compass_pane_t4

0xadf7,	// (0x0009731a) list_cale_time_pane_t4_ParamLimits

0xadf7,	// (0x0009731a) list_cale_time_pane_t4

0x28bf,	// (0x0008ede2) compass_pane_t5

0x28cf,	// (0x0008edf2) compass_pane_t6

0x28dd,	// (0x0008ee00) compass_pane_t7

0xb215,	// (0x00097738) navi_pane_cc_t1

0xb362,	// (0x00097885) aid_phob_thumbnail_center_pane

0x2d97,	// (0x0008f2ba) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x0009b77e) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x0009b77e) list_cale_time_pane_t

0x9967,	// (0x00095e8a) bg_popup_window_pane_cp02_ParamLimits

0x9967,	// (0x00095e8a) bg_popup_window_pane_cp02

0xae1f,	// (0x00097342) heading_pane_cp01_ParamLimits

0xae1f,	// (0x00097342) heading_pane_cp01

0xae2b,	// (0x0009734e) loc_req_pane_ParamLimits

0xae2b,	// (0x0009734e) loc_req_pane

0xae3b,	// (0x0009735e) loc_type_pane_ParamLimits

0xae3b,	// (0x0009735e) loc_type_pane

0xae4d,	// (0x00097370) loc_type_pane_t1_ParamLimits

0xae4d,	// (0x00097370) loc_type_pane_t1

0xae5f,	// (0x00097382) loc_type_pane_t2_ParamLimits

0xae5f,	// (0x00097382) loc_type_pane_t2

0xae71,	// (0x00097394) loc_type_pane_t3_ParamLimits

0xae71,	// (0x00097394) loc_type_pane_t3

0x0002,

0xf262,	// (0x0009b785) loc_type_pane_t_ParamLimits

0xf262,	// (0x0009b785) loc_type_pane_t

0xae83,	// (0x000973a6) list_loc_req_pane

0xae8d,	// (0x000973b0) scroll_pane_cp012

0x25cf,	// (0x0008eaf2) list_single_loc_request_popup_menu_pane_ParamLimits

0x25cf,	// (0x0008eaf2) list_single_loc_request_popup_menu_pane

0xae98,	// (0x000973bb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae98,	// (0x000973bb) list_single_loc_request_popup_menu_pane_g1

0xaea4,	// (0x000973c7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaea4,	// (0x000973c7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x0009b78c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x0009b78c) list_single_loc_request_popup_menu_pane_g

0xaeb0,	// (0x000973d3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaeb0,	// (0x000973d3) list_single_loc_request_popup_menu_pane_t1

0x9f6b,	// (0x0009648e) bg_popup_window_pane_cp03_ParamLimits

0x9f6b,	// (0x0009648e) bg_popup_window_pane_cp03

0xaec6,	// (0x000973e9) heading_loc_req_pane_ParamLimits

0xaec6,	// (0x000973e9) heading_loc_req_pane

0x25dc,	// (0x0008eaff) popup_dyc_status_message_window_g1_ParamLimits

0x25dc,	// (0x0008eaff) popup_dyc_status_message_window_g1

0x25f0,	// (0x0008eb13) popup_dyc_status_message_window_t1_ParamLimits

0x25f0,	// (0x0008eb13) popup_dyc_status_message_window_t1

0x2605,	// (0x0008eb28) popup_dyc_status_message_window_t2_ParamLimits

0x2605,	// (0x0008eb28) popup_dyc_status_message_window_t2

0x261a,	// (0x0008eb3d) popup_dyc_status_message_window_t3_ParamLimits

0x261a,	// (0x0008eb3d) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x0009b791) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x0009b791) popup_dyc_status_message_window_t

0x9d10,	// (0x00096233) bg_heading_pane_cp01

0xaed2,	// (0x000973f5) heading_loc_req_pane_g1

0xaeda,	// (0x000973fd) heading_loc_req_pane_g2

0xaee2,	// (0x00097405) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x0009b798) heading_loc_req_pane_g

0xaeea,	// (0x0009740d) heading_loc_req_pane_t1

0xaf0a,	// (0x0009742d) bg_popup_sub_pane_cp01_ParamLimits

0xaf0a,	// (0x0009742d) bg_popup_sub_pane_cp01

0xaf18,	// (0x0009743b) popup_cale_events_window_g1_ParamLimits

0xaf18,	// (0x0009743b) popup_cale_events_window_g1

0xaf38,	// (0x0009745b) popup_cale_events_window_g2_ParamLimits

0xaf38,	// (0x0009745b) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x0009b7ba) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x0009b7ba) popup_cale_events_window_g

0xaf58,	// (0x0009747b) popup_cale_events_window_t1_ParamLimits

0xaf58,	// (0x0009747b) popup_cale_events_window_t1

0xaf6a,	// (0x0009748d) popup_cale_events_window_t2_ParamLimits

0xaf6a,	// (0x0009748d) popup_cale_events_window_t2

0xafa8,	// (0x000974cb) popup_cale_events_window_t3_ParamLimits

0xafa8,	// (0x000974cb) popup_cale_events_window_t3

0xafe2,	// (0x00097505) popup_cale_events_window_t4_ParamLimits

0xafe2,	// (0x00097505) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x0009b7bf) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x0009b7bf) popup_cale_events_window_t

0x2642,	// (0x0008eb65) call_type_pane

0x2652,	// (0x0008eb75) popup_call_status_window_g1

0x2666,	// (0x0008eb89) popup_call_status_window_g2

0x267a,	// (0x0008eb9d) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x0009b7c8) popup_call_status_window_g

0xb018,	// (0x0009753b) call_type_pane_g1

0xb021,	// (0x00097544) call_type_pane_g2

0x0001,

0xf2ac,	// (0x0009b7cf) call_type_pane_g

0x9d10,	// (0x00096233) bg_popup_sub_pane_cp02

0xb02a,	// (0x0009754d) listscroll_popup_wml_pane

0xb032,	// (0x00097555) list_wml_pane

0xb03c,	// (0x0009755f) scroll_pane_cp013

0xb047,	// (0x0009756a) list_single_graphic_popup_wml_pane_ParamLimits

0xb047,	// (0x0009756a) list_single_graphic_popup_wml_pane

0x9f83,	// (0x000964a6) list_single_graphic_popup_wml_pane_g1

0xb05b,	// (0x0009757e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x0009b7d4) list_single_graphic_popup_wml_pane_g

0xb063,	// (0x00097586) list_single_graphic_popup_wml_pane_t1

0xb079,	// (0x0009759c) aid_call_pane

0x9f63,	// (0x00096486) popup_clock_analogue_window_g1

0x9f63,	// (0x00096486) popup_clock_analogue_window_g2

0xa2ab,	// (0x000967ce) popup_clock_analogue_window_g3

0xa2ab,	// (0x000967ce) popup_clock_analogue_window_g4

0x9f83,	// (0x000964a6) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x0009b7d9) popup_clock_analogue_window_g

0xa2b3,	// (0x000967d6) popup_clock_analogue_window_t1

0xa2c1,	// (0x000967e4) clock_digital_number_pane_ParamLimits

0xa2c1,	// (0x000967e4) clock_digital_number_pane

0xa2cd,	// (0x000967f0) clock_digital_number_pane_cp02_ParamLimits

0xa2cd,	// (0x000967f0) clock_digital_number_pane_cp02

0xa2d9,	// (0x000967fc) clock_digital_number_pane_cp03_ParamLimits

0xa2d9,	// (0x000967fc) clock_digital_number_pane_cp03

0xa2e5,	// (0x00096808) clock_digital_number_pane_cp04_ParamLimits

0xa2e5,	// (0x00096808) clock_digital_number_pane_cp04

0xa2f1,	// (0x00096814) clock_digital_separator_pane_ParamLimits

0xa2f1,	// (0x00096814) clock_digital_separator_pane

0xa2fd,	// (0x00096820) popup_clock_digital_window_t1

0x9f83,	// (0x000964a6) clock_digital_number_pane_g1

0x9f83,	// (0x000964a6) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x0009b759) clock_digital_number_pane_g

0x9f83,	// (0x000964a6) clock_digital_separator_pane_g1

0x9f83,	// (0x000964a6) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x0009b759) clock_digital_separator_pane_g

0x9d10,	// (0x00096233) bg_popup_window_pane_cp04

0xb081,	// (0x000975a4) heading_pane_cp03

0xa966,	// (0x00096e89) listscroll_popup_gms_pane

0x9d10,	// (0x00096233) grid_large_graphic_popup_pane

0xb08a,	// (0x000975ad) listscroll_popup_gms_pane_g1

0xb093,	// (0x000975b6) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x0009b7e4) listscroll_popup_gms_pane_g

0xb09c,	// (0x000975bf) scroll_pane_cp014

0x9fd8,	// (0x000964fb) cell_large_graphic_popup_pane_ParamLimits

0x9fd8,	// (0x000964fb) cell_large_graphic_popup_pane

0x9fe6,	// (0x00096509) cell_large_graphic_popup_pane_g1_ParamLimits

0x9fe6,	// (0x00096509) cell_large_graphic_popup_pane_g1

0xb0a5,	// (0x000975c8) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0a5,	// (0x000975c8) cell_large_graphic_popup_pane_g2

0xb0b3,	// (0x000975d6) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0b3,	// (0x000975d6) cell_large_graphic_popup_pane_g3

0xb0c1,	// (0x000975e4) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0c1,	// (0x000975e4) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x0009b7e9) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x0009b7e9) cell_large_graphic_popup_pane_g

0x9d10,	// (0x00096233) grid_highlight_pane_cp010

0x9f83,	// (0x000964a6) bg_popup_call_pane_g1

0xb0d2,	// (0x000975f5) list_single_graphic_popup_conf_pane_ParamLimits

0xb0d2,	// (0x000975f5) list_single_graphic_popup_conf_pane

0xb0e4,	// (0x00097607) list_highlight_pane_cp01

0xb0ed,	// (0x00097610) list_single_graphic_popup_conf_pane_g1

0xb0f5,	// (0x00097618) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x0009b7f2) list_single_graphic_popup_conf_pane_g

0xb0fd,	// (0x00097620) list_single_graphic_popup_conf_pane_t1

0xb10b,	// (0x0009762e) linegrid_cams_pane_g1

0x268a,	// (0x0008ebad) linegrid_cams_pane_g2

0xa26a,	// (0x0009678d) linegrid_cams_pane_g3

0xb114,	// (0x00097637) linegrid_cams_pane_g4

0x2693,	// (0x0008ebb6) linegrid_cams_pane_g5

0x269c,	// (0x0008ebbf) linegrid_cams_pane_g6

0xa955,	// (0x00096e78) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x0009b7f7) linegrid_cams_pane_g

0xb11d,	// (0x00097640) popup_clock_analogue_window

0xb11d,	// (0x00097640) popup_clock_digital_window

0x9d10,	// (0x00096233) popup_phob_thumbnail_window

0x9f83,	// (0x000964a6) call_video_uplink_pane_g1

0xb126,	// (0x00097649) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x0009b806) call_video_uplink_pane_g

0xb12e,	// (0x00097651) video_uplink_pane

0xb136,	// (0x00097659) mce_image_pane_g1

0x26a7,	// (0x0008ebca) mce_image_pane_g2

0x26b1,	// (0x0008ebd4) mce_image_pane_g3

0x26bb,	// (0x0008ebde) mce_image_pane_g4

0x26c3,	// (0x0008ebe6) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x0009b80b) mce_image_pane_g

0xb140,	// (0x00097663) control_top_pane_stacon_cp01_ParamLimits

0xb140,	// (0x00097663) control_top_pane_stacon_cp01

0xb154,	// (0x00097677) uni_indicator_pane_stacon_cp01_ParamLimits

0xb154,	// (0x00097677) uni_indicator_pane_stacon_cp01

0xb165,	// (0x00097688) bg_popup_sub_pane_cp03

0x26cb,	// (0x0008ebee) chi_dic_find_pane

0x26d3,	// (0x0008ebf6) listscroll_chi_dic_pane

0x26dc,	// (0x0008ebff) main_pane_chidic_g1

0x26ef,	// (0x0008ec12) chi_dic_find_pane_t1

0xb16f,	// (0x00097692) find_chidic_pane

0xb178,	// (0x0009769b) chi_dic_list_pane_ParamLimits

0xb178,	// (0x0009769b) chi_dic_list_pane

0xb189,	// (0x000976ac) scroll_pane_cp020

0x26fd,	// (0x0008ec20) find_chidic_pane_t1

0x9d10,	// (0x00096233) input_focus_pane_cp06

0x270c,	// (0x0008ec2f) list_chi_dic_pane_ParamLimits

0x270c,	// (0x0008ec2f) list_chi_dic_pane

0x271e,	// (0x0008ec41) list_chi_dic_pane_t1_ParamLimits

0x271e,	// (0x0008ec41) list_chi_dic_pane_t1

0x9d10,	// (0x00096233) list_highlight_pane_cp020

0xb191,	// (0x000976b4) bg_cale_heading_pane_g1

0x2731,	// (0x0008ec54) bg_cale_heading_pane_g2

0x2739,	// (0x0008ec5c) bg_cale_heading_pane_g3

0x2741,	// (0x0008ec64) bg_cale_heading_pane_g4

0x274b,	// (0x0008ec6e) bg_cale_heading_pane_g5

0x2755,	// (0x0008ec78) bg_cale_heading_pane_g6

0x275d,	// (0x0008ec80) bg_cale_heading_pane_g7

0x2765,	// (0x0008ec88) bg_cale_heading_pane_g8

0x276f,	// (0x0008ec92) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x0009b816) bg_cale_heading_pane_g

0xb191,	// (0x000976b4) bg_cale_side_pane_g1

0x2779,	// (0x0008ec9c) bg_cale_side_pane_g2

0x2783,	// (0x0008eca6) bg_cale_side_pane_g3

0x278d,	// (0x0008ecb0) bg_cale_side_pane_g4

0x2797,	// (0x0008ecba) bg_cale_side_pane_g5

0x27a1,	// (0x0008ecc4) bg_cale_side_pane_g6

0x27ab,	// (0x0008ecce) bg_cale_side_pane_g7

0x27b5,	// (0x0008ecd8) bg_cale_side_pane_g8

0x27bd,	// (0x0008ece0) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x0009b829) bg_cale_side_pane_g

0x27c5,	// (0x0008ece8) popup_call_status_window_ParamLimits

0x27c5,	// (0x0008ece8) popup_call_status_window

0xb199,	// (0x000976bc) stacon_top_pane

0xb1a1,	// (0x000976c4) status_pane_ParamLimits

0xb1a1,	// (0x000976c4) status_pane

0xb1b6,	// (0x000976d9) status_small_pane

0xb1be,	// (0x000976e1) control_pane

0x9d10,	// (0x00096233) stacon_bottom_pane

0xb1c6,	// (0x000976e9) list_single_mce_smart_pane_t1_ParamLimits

0xb1c6,	// (0x000976e9) list_single_mce_smart_pane_t1

0xb1d9,	// (0x000976fc) list_single_mce_smart_pane_t2_ParamLimits

0xb1d9,	// (0x000976fc) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x0009b83c) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x0009b83c) list_single_mce_smart_pane_t

0x2812,	// (0x0008ed35) compass_pane

0x281d,	// (0x0008ed40) main_location2_pane_t1

0x2833,	// (0x0008ed56) main_location2_pane_t2

0x2849,	// (0x0008ed6c) main_location2_pane_t3

0x0003,

0xf31e,	// (0x0009b841) main_location2_pane_t

0xb1f8,	// (0x0009771b) compass_pane_g1_ParamLimits

0xb1f8,	// (0x0009771b) compass_pane_g1

0x2893,	// (0x0008edb6) compass_pane_t1

0x28a2,	// (0x0008edc5) compass_pane_t2

0x0005,

0xf327,	// (0x0009b84a) compass_pane_t

0x28ed,	// (0x0008ee10) text_secondary_cp61

0xb20c,	// (0x0009772f) navi_pane_cams_g5

0xb22f,	// (0x00097752) navi_pane_im_t1

0xb23d,	// (0x00097760) navi_pane_mp_g1_ParamLimits

0xb23d,	// (0x00097760) navi_pane_mp_g1

0xb251,	// (0x00097774) navi_pane_mp_g2_ParamLimits

0xb251,	// (0x00097774) navi_pane_mp_g2

0xb25d,	// (0x00097780) navi_pane_mp_g3_ParamLimits

0xb25d,	// (0x00097780) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x0009b85e) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x0009b85e) navi_pane_mp_g

0xb269,	// (0x0009778c) navi_pane_mp_t1

0xb277,	// (0x0009779a) navi_pane_mp_t2

0x0002,

0xf342,	// (0x0009b865) navi_pane_mp_t

0xb2b3,	// (0x000977d6) navi_pane_vt_g1

0xb269,	// (0x0009778c) navi_pane_vt_t1

0xb2bb,	// (0x000977de) navi_slider_pane

0xa966,	// (0x00096e89) zooming_pane

0xb2c3,	// (0x000977e6) navi_slider_pane_g1

0xa31a,	// (0x0009683d) navi_slider_pane_g2

0x0006,

0xf349,	// (0x0009b86c) navi_slider_pane_g

0xb2e7,	// (0x0009780a) aid_levels_zoom

0xb2ef,	// (0x00097812) zooming_pane_g1

0xb2f7,	// (0x0009781a) zooming_pane_g2

0xb2f7,	// (0x0009781a) zooming_pane_g3

0x0002,

0xf358,	// (0x0009b87b) zooming_pane_g

0xb2ff,	// (0x00097822) level_10_zoom

0xb308,	// (0x0009782b) level_11_zoom

0xb311,	// (0x00097834) level_1_zoom

0xb31a,	// (0x0009783d) level_2_zoom

0xb323,	// (0x00097846) level_3_zoom

0xb32c,	// (0x0009784f) level_4_zoom

0xb335,	// (0x00097858) level_5_zoom

0xb33e,	// (0x00097861) level_6_zoom

0xb347,	// (0x0009786a) level_7_zoom

0xb350,	// (0x00097873) level_8_zoom

0xb359,	// (0x0009787c) level_9_zoom

0xb36a,	// (0x0009788d) popup_phob_thumbnail_window_g1

0xb372,	// (0x00097895) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x0009b882) popup_phob_thumbnail_window_g

0x3492,	// (0x0008f9b5) level_1_location

0x349a,	// (0x0008f9bd) level_2_location

0x34a2,	// (0x0008f9c5) level_3_location

0x34ac,	// (0x0008f9cf) level_4_location

0xa966,	// (0x00096e89) level_5_location

0x2a36,	// (0x0008ef59) mce_icon_pane_g1

0x2a40,	// (0x0008ef63) mce_icon_pane_g2

0x0001,

0xf364,	// (0x0009b887) mce_icon_pane_g

0xb37a,	// (0x0009789d) main_mup_pane_g1_ParamLimits

0xb37a,	// (0x0009789d) main_mup_pane_g1

0xb37a,	// (0x0009789d) main_mup_pane_g2_ParamLimits

0xb37a,	// (0x0009789d) main_mup_pane_g2

0xb37a,	// (0x0009789d) main_mup_pane_g3_ParamLimits

0xb37a,	// (0x0009789d) main_mup_pane_g3

0xb37a,	// (0x0009789d) main_mup_pane_g4_ParamLimits

0xb37a,	// (0x0009789d) main_mup_pane_g4

0xb37a,	// (0x0009789d) main_mup_pane_g5_ParamLimits

0xb37a,	// (0x0009789d) main_mup_pane_g5

0xb37a,	// (0x0009789d) main_mup_pane_g6_ParamLimits

0xb37a,	// (0x0009789d) main_mup_pane_g6

0xb37a,	// (0x0009789d) main_mup_pane_g7_ParamLimits

0xb37a,	// (0x0009789d) main_mup_pane_g7

0xb37a,	// (0x0009789d) main_mup_pane_g8_ParamLimits

0xb37a,	// (0x0009789d) main_mup_pane_g8

0xb37a,	// (0x0009789d) main_mup_pane_g9_ParamLimits

0xb37a,	// (0x0009789d) main_mup_pane_g9

0xb37a,	// (0x0009789d) main_mup_pane_g10_ParamLimits

0xb37a,	// (0x0009789d) main_mup_pane_g10

0xb37a,	// (0x0009789d) main_mup_pane_g11_ParamLimits

0xb37a,	// (0x0009789d) main_mup_pane_g11

0x9fe6,	// (0x00096509) main_mup_pane_g12_ParamLimits

0x9fe6,	// (0x00096509) main_mup_pane_g12

0xb37a,	// (0x0009789d) main_mup_pane_g13_ParamLimits

0xb37a,	// (0x0009789d) main_mup_pane_g13

0x000c,

0xf369,	// (0x0009b88c) main_mup_pane_g_ParamLimits

0xf369,	// (0x0009b88c) main_mup_pane_g

0xb388,	// (0x000978ab) main_mup_pane_t1_ParamLimits

0xb388,	// (0x000978ab) main_mup_pane_t1

0xb388,	// (0x000978ab) main_mup_pane_t2_ParamLimits

0xb388,	// (0x000978ab) main_mup_pane_t2

0xb388,	// (0x000978ab) main_mup_pane_t3_ParamLimits

0xb388,	// (0x000978ab) main_mup_pane_t3

0xa96e,	// (0x00096e91) main_mup_pane_t4_ParamLimits

0xa96e,	// (0x00096e91) main_mup_pane_t4

0xa96e,	// (0x00096e91) main_mup_pane_t5_ParamLimits

0xa96e,	// (0x00096e91) main_mup_pane_t5

0xb39c,	// (0x000978bf) main_mup_pane_t6_ParamLimits

0xb39c,	// (0x000978bf) main_mup_pane_t6

0x0005,

0xf384,	// (0x0009b8a7) main_mup_pane_t_ParamLimits

0xf384,	// (0x0009b8a7) main_mup_pane_t

0x9fd8,	// (0x000964fb) mup_progress_pane_ParamLimits

0x9fd8,	// (0x000964fb) mup_progress_pane

0xb3b0,	// (0x000978d3) mup_visualizer_pane_ParamLimits

0xb3b0,	// (0x000978d3) mup_visualizer_pane

0xb3b0,	// (0x000978d3) mup_volume_pane_ParamLimits

0xb3b0,	// (0x000978d3) mup_volume_pane

0x9ff4,	// (0x00096517) mup_visualizer_pane_g1_ParamLimits

0x9ff4,	// (0x00096517) mup_visualizer_pane_g1

0xb3be,	// (0x000978e1) mup_visualizer_pane_g2_ParamLimits

0xb3be,	// (0x000978e1) mup_visualizer_pane_g2

0x9fe6,	// (0x00096509) mup_visualizer_pane_g3_ParamLimits

0x9fe6,	// (0x00096509) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x0009b8b4) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x0009b8b4) mup_visualizer_pane_g

0xa99c,	// (0x00096ebf) mup_volume_pane_g1

0xa99c,	// (0x00096ebf) mup_volume_pane_g2

0x0001,

0xf398,	// (0x0009b8bb) mup_volume_pane_g

0xa99c,	// (0x00096ebf) mup_progress_pane_g1

0xa99c,	// (0x00096ebf) mup_progress_pane_g2

0xa99c,	// (0x00096ebf) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x0009b8c0) mup_progress_pane_g

0x9d10,	// (0x00096233) bg_popup_window_pane_cp05

0xb3cc,	// (0x000978ef) heading_pane_cp02_ParamLimits

0xb3cc,	// (0x000978ef) heading_pane_cp02

0xb3e8,	// (0x0009790b) list_popup_blid_pane

0xb3f0,	// (0x00097913) list_blid_sat_info_pane_ParamLimits

0xb3f0,	// (0x00097913) list_blid_sat_info_pane

0xb403,	// (0x00097926) list_blid_sat_info_pane_g1

0xb40b,	// (0x0009792e) list_blid_sat_info_pane_t1

0x2b54,	// (0x0008f077) mup_equalizer_pane_ParamLimits

0x2b54,	// (0x0008f077) mup_equalizer_pane

0x2b75,	// (0x0008f098) mup_equalizer_pane_cp1_ParamLimits

0x2b75,	// (0x0008f098) mup_equalizer_pane_cp1

0x2b96,	// (0x0008f0b9) mup_equalizer_pane_cp2_ParamLimits

0x2b96,	// (0x0008f0b9) mup_equalizer_pane_cp2

0x2bbb,	// (0x0008f0de) mup_equalizer_pane_cp3_ParamLimits

0x2bbb,	// (0x0008f0de) mup_equalizer_pane_cp3

0x2be4,	// (0x0008f107) mup_equalizer_pane_cp4_ParamLimits

0x2be4,	// (0x0008f107) mup_equalizer_pane_cp4

0x2c0d,	// (0x0008f130) mup_equalizer_pane_cp5

0x2c25,	// (0x0008f148) mup_equalizer_pane_cp6

0x2c3d,	// (0x0008f160) mup_equalizer_pane_cp7

0xc581,	// (0x00098aa4) bg_popup_call_poc_act_pane_g9

0xc589,	// (0x00098aac) bg_popup_call_poc_act_pane_g10

0xc591,	// (0x00098ab4) bg_popup_call_poc_act_pane_g11

0x000a,

0x9f6b,	// (0x0009648e) mup_scale_pane

0x9f83,	// (0x000964a6) mup_scale_pane_g1

0xb419,	// (0x0009793c) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x0009b8dc) mup_scale_pane_g

0xb43d,	// (0x00097960) msg_data_pane

0xb445,	// (0x00097968) scroll_pane_cp017

0xfd73,	// (0x0008c296) bg_list_pane_cp04_ParamLimits

0xfd73,	// (0x0008c296) bg_list_pane_cp04

0xb44d,	// (0x00097970) msg_data_pane_g1

0x2c67,	// (0x0008f18a) msg_data_pane_g2

0x2c71,	// (0x0008f194) msg_data_pane_g3

0x2c7b,	// (0x0008f19e) msg_data_pane_g4

0x2c83,	// (0x0008f1a6) msg_data_pane_g5

0x2c8b,	// (0x0008f1ae) msg_data_pane_g6

0x2c93,	// (0x0008f1b6) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x0009b8eb) msg_data_pane_g

0xfd9b,	// (0x0008c2be) msg_text_pane_ParamLimits

0xfd9b,	// (0x0008c2be) msg_text_pane

0x2c9b,	// (0x0008f1be) qrid_highlight_pane_cp011_ParamLimits

0x2c9b,	// (0x0008f1be) qrid_highlight_pane_cp011

0x9d10,	// (0x00096233) msg_body_pane

0x9d10,	// (0x00096233) msg_header_pane

0xb45e,	// (0x00097981) input_focus_pane_cp07

0xfdda,	// (0x0008c2fd) msg_header_pane_t1_ParamLimits

0xfdda,	// (0x0008c2fd) msg_header_pane_t1

0xfdf0,	// (0x0008c313) msg_header_pane_t2_ParamLimits

0xfdf0,	// (0x0008c313) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x0009b8ff) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x0009b8ff) msg_header_pane_t

0xb473,	// (0x00097996) msg_body_pane_g1

0xfe07,	// (0x0008c32a) msg_body_pane_t1_ParamLimits

0xfe07,	// (0x0008c32a) msg_body_pane_t1

0xfe38,	// (0x0008c35b) msg_body_pane_t2_ParamLimits

0xfe38,	// (0x0008c35b) msg_body_pane_t2

0xfe4a,	// (0x0008c36d) msg_body_pane_t3_ParamLimits

0xfe4a,	// (0x0008c36d) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x0009b904) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x0009b904) msg_body_pane_t

0x2ceb,	// (0x0008f20e) main_viewer_pane_g1_ParamLimits

0x2ceb,	// (0x0008f20e) main_viewer_pane_g1

0x2cf9,	// (0x0008f21c) main_viewer_pane_g2_ParamLimits

0x2cf9,	// (0x0008f21c) main_viewer_pane_g2

0x2d07,	// (0x0008f22a) main_viewer_pane_g3_ParamLimits

0x2d07,	// (0x0008f22a) main_viewer_pane_g3

0x2d16,	// (0x0008f239) main_viewer_pane_g4_ParamLimits

0x2d16,	// (0x0008f239) main_viewer_pane_g4

0xa344,	// (0x00096867) main_viewer_pane_g5_ParamLimits

0xa344,	// (0x00096867) main_viewer_pane_g5

0xa344,	// (0x00096867) main_viewer_pane_g7_ParamLimits

0xa344,	// (0x00096867) main_viewer_pane_g7

0xa356,	// (0x00096879) main_viewer_pane_g8_ParamLimits

0xa356,	// (0x00096879) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x0009b914) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x0009b914) main_viewer_pane_g

0xb47b,	// (0x0009799e) viewer_content_pane_ParamLimits

0xb47b,	// (0x0009799e) viewer_content_pane

0x2d54,	// (0x0008f277) main_postcard_pane_g1_ParamLimits

0x2d54,	// (0x0008f277) main_postcard_pane_g1

0x2d6a,	// (0x0008f28d) main_postcard_pane_g2_ParamLimits

0x2d6a,	// (0x0008f28d) main_postcard_pane_g2

0x2d80,	// (0x0008f2a3) main_postcard_pane_g3_ParamLimits

0x2d80,	// (0x0008f2a3) main_postcard_pane_g3

0x0005,

0xf402,	// (0x0009b925) main_postcard_pane_g_ParamLimits

0xf402,	// (0x0009b925) main_postcard_pane_g

0x2d97,	// (0x0008f2ba) main_postcard_pane_g4

0xc6c7,	// (0x00098bea) smil_status_volume_pane_g2

0x2dda,	// (0x0008f2fd) postcard_pane_ParamLimits

0x2dda,	// (0x0008f2fd) postcard_pane

0xb489,	// (0x000979ac) postcard_pane_g1_ParamLimits

0xb489,	// (0x000979ac) postcard_pane_g1

0x2e2a,	// (0x0008f34d) postcard_pane_g2_ParamLimits

0x2e2a,	// (0x0008f34d) postcard_pane_g2

0x2e36,	// (0x0008f359) postcard_pane_g3_ParamLimits

0x2e36,	// (0x0008f359) postcard_pane_g3

0xb497,	// (0x000979ba) postcard_pane_g4_ParamLimits

0xb497,	// (0x000979ba) postcard_pane_g4

0x2e42,	// (0x0008f365) postcard_pane_g5_ParamLimits

0x2e42,	// (0x0008f365) postcard_pane_g5

0x2e57,	// (0x0008f37a) postcard_pane_g6_ParamLimits

0x2e57,	// (0x0008f37a) postcard_pane_g6

0xb489,	// (0x000979ac) postcard_pane_g7_ParamLimits

0xb489,	// (0x000979ac) postcard_pane_g7

0x0006,

0xf40f,	// (0x0009b932) postcard_pane_g_ParamLimits

0xf40f,	// (0x0009b932) postcard_pane_g

0x2e6f,	// (0x0008f392) main_mp2_pane_g1_ParamLimits

0x2e6f,	// (0x0008f392) main_mp2_pane_g1

0x2e7d,	// (0x0008f3a0) main_mp2_pane_g2_ParamLimits

0x2e7d,	// (0x0008f3a0) main_mp2_pane_g2

0x2e89,	// (0x0008f3ac) main_mp2_pane_g3_ParamLimits

0x2e89,	// (0x0008f3ac) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x0009b941) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x0009b941) main_mp2_pane_g

0x2e95,	// (0x0008f3b8) main_mp2_pane_t1_ParamLimits

0x2e95,	// (0x0008f3b8) main_mp2_pane_t1

0x2eac,	// (0x0008f3cf) main_mp2_pane_t2_ParamLimits

0x2eac,	// (0x0008f3cf) main_mp2_pane_t2

0x2ebe,	// (0x0008f3e1) main_mp2_pane_t3_ParamLimits

0x2ebe,	// (0x0008f3e1) main_mp2_pane_t3

0x0002,

0xf425,	// (0x0009b948) main_mp2_pane_t_ParamLimits

0xf425,	// (0x0009b948) main_mp2_pane_t

0xb4a5,	// (0x000979c8) pec_content_pane_ParamLimits

0xb4a5,	// (0x000979c8) pec_content_pane

0xab10,	// (0x00097033) scroll_pane_cp015

0xb4b7,	// (0x000979da) pec_attribute_pane_ParamLimits

0xb4b7,	// (0x000979da) pec_attribute_pane

0x2ed0,	// (0x0008f3f3) pec_content_pane_g1_ParamLimits

0x2ed0,	// (0x0008f3f3) pec_content_pane_g1

0xb4c7,	// (0x000979ea) pec_content_pane_t1_ParamLimits

0xb4c7,	// (0x000979ea) pec_content_pane_t1

0xb4d9,	// (0x000979fc) pec_content_pane_t2_ParamLimits

0xb4d9,	// (0x000979fc) pec_content_pane_t2

0x0001,

0xf42c,	// (0x0009b94f) pec_content_pane_t_ParamLimits

0xf42c,	// (0x0009b94f) pec_content_pane_t

0x2edc,	// (0x0008f3ff) list_single_graphic_pane_cp01_ParamLimits

0x2edc,	// (0x0008f3ff) list_single_graphic_pane_cp01

0x9f6b,	// (0x0009648e) bg_popup_sub_pane_cp04

0xb4eb,	// (0x00097a0e) popup_mup_playback_window_g1

0xb4f7,	// (0x00097a1a) popup_mup_playback_window_t1

0xb50c,	// (0x00097a2f) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x0009b954) popup_mup_playback_window_t

0xb543,	// (0x00097a66) main_image_pane_g1_ParamLimits

0xb543,	// (0x00097a66) main_image_pane_g1

0xb586,	// (0x00097aa9) scroll_pane_cp018_ParamLimits

0xb586,	// (0x00097aa9) scroll_pane_cp018

0xb59e,	// (0x00097ac1) scroll_pane_cp016_ParamLimits

0xb59e,	// (0x00097ac1) scroll_pane_cp016

0x2fae,	// (0x0008f4d1) smil2_image_pane_ParamLimits

0x2fae,	// (0x0008f4d1) smil2_image_pane

0x2fe4,	// (0x0008f507) smil2_root_pane_ParamLimits

0x2fe4,	// (0x0008f507) smil2_root_pane

0x301c,	// (0x0008f53f) smil2_text_pane_ParamLimits

0x301c,	// (0x0008f53f) smil2_text_pane

0x9d10,	// (0x00096233) bg_list_pane_cp06

0xb5da,	// (0x00097afd) grid_radio_pane

0x9d10,	// (0x00096233) bg_popup_window_pane_cp06

0xb5e4,	// (0x00097b07) main_fmradio_pane_t1

0xc599,	// (0x00098abc) heading_pane_cp04

0xb5f2,	// (0x00097b15) main_fmradio_pane_t2

0xc5a1,	// (0x00098ac4) popup_cale_lunar_info_window_g1

0xb600,	// (0x00097b23) main_fmradio_pane_t3

0xc5a9,	// (0x00098acc) popup_cale_lunar_info_window_g2

0xb610,	// (0x00097b33) main_fmradio_pane_t4

0x0001,

0xb61e,	// (0x00097b41) main_fmradio_pane_t5

0x0004,

0xf511,	// (0x0009ba34) popup_cale_lunar_info_window_g

0xf446,	// (0x0009b969) main_fmradio_pane_t

0xb62c,	// (0x00097b4f) wait_bar_pane_cp03

0xb634,	// (0x00097b57) cell_fmradio_pane_ParamLimits

0xb634,	// (0x00097b57) cell_fmradio_pane

0xb489,	// (0x000979ac) cell_fmradio_pane_g1_ParamLimits

0xb489,	// (0x000979ac) cell_fmradio_pane_g1

0x9d10,	// (0x00096233) grid_highlight_pane_cp011

0xb649,	// (0x00097b6c) poc_content_pane_ParamLimits

0xb649,	// (0x00097b6c) poc_content_pane

0xb65b,	// (0x00097b7e) scroll_pane_cp019

0x30ac,	// (0x0008f5cf) popup_call_poc_act_window_ParamLimits

0x30ac,	// (0x0008f5cf) popup_call_poc_act_window

0x30d0,	// (0x0008f5f3) popup_call_poc_inact_window_ParamLimits

0x30d0,	// (0x0008f5f3) popup_call_poc_inact_window

0xf4e8,	// (0x0009ba0b) bg_popup_call_poc_act_pane_g

0xc511,	// (0x00098a34) bg_popup_call_poc_inact_pane_g1

0xc519,	// (0x00098a3c) bg_popup_call_poc_inact_pane_g2

0xb663,	// (0x00097b86) popup_call_poc_act_window_g2

0xc521,	// (0x00098a44) bg_popup_call_poc_inact_pane_g3

0xc529,	// (0x00098a4c) bg_popup_call_poc_inact_pane_g4

0xc531,	// (0x00098a54) bg_popup_call_poc_inact_pane_g5

0xb66b,	// (0x00097b8e) popup_call_poc_act_window_t1_ParamLimits

0xb66b,	// (0x00097b8e) popup_call_poc_act_window_t1

0xb693,	// (0x00097bb6) popup_call_poc_act_window_t2_ParamLimits

0xb693,	// (0x00097bb6) popup_call_poc_act_window_t2

0xb6bb,	// (0x00097bde) popup_call_poc_act_window_t3_ParamLimits

0xb6bb,	// (0x00097bde) popup_call_poc_act_window_t3

0xb6e3,	// (0x00097c06) popup_call_poc_act_window_t4_ParamLimits

0xb6e3,	// (0x00097c06) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x0009b974) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x0009b974) popup_call_poc_act_window_t

0xc539,	// (0x00098a5c) bg_popup_call_poc_inact_pane_g6

0xc541,	// (0x00098a64) bg_popup_call_poc_inact_pane_g7

0xc549,	// (0x00098a6c) bg_popup_call_poc_inact_pane_g8

0xb6f5,	// (0x00097c18) popup_call_poc_inact_window_g2

0xc551,	// (0x00098a74) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4d5,	// (0x0009b9f8) bg_popup_call_poc_inact_pane_g

0xb6fd,	// (0x00097c20) popup_call_poc_inact_window_t1_ParamLimits

0xb6fd,	// (0x00097c20) popup_call_poc_inact_window_t1

0xb712,	// (0x00097c35) popup_call_poc_inact_window_t2_ParamLimits

0xb712,	// (0x00097c35) popup_call_poc_inact_window_t2

0xb727,	// (0x00097c4a) popup_call_poc_inact_window_t3_ParamLimits

0xb727,	// (0x00097c4a) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x0009b97d) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x0009b97d) popup_call_poc_inact_window_t

0xc63f,	// (0x00098b62) context_pane_ParamLimits

0x39af,	// (0x0008fed2) signal_pane_ParamLimits

0xa966,	// (0x00096e89) main_call2_pane

0xa39f,	// (0x000968c2) popup_phob_thumbnail2_window_ParamLimits

0xa39f,	// (0x000968c2) popup_phob_thumbnail2_window

0xa32c,	// (0x0009684f) aid_hotspot_pointer_arrow_pane

0xa334,	// (0x00096857) aid_hotspot_pointer_hand_pane

0x345a,	// (0x0008f97d) phob_pre_status_pane_g5

0x98ba,	// (0x00095ddd) cams_zoom_pane_ParamLimits

0x98ba,	// (0x00095ddd) image_vga_pane_ParamLimits

0x9fe6,	// (0x00096509) main_camera_pane_g1_ParamLimits

0x9fe6,	// (0x00096509) main_camera_pane_g2_ParamLimits

0x9fe6,	// (0x00096509) main_camera_pane_g3_ParamLimits

0x9fe6,	// (0x00096509) main_camera_pane_g4_ParamLimits

0x9fe6,	// (0x00096509) main_camera_pane_g5_ParamLimits

0x9fe6,	// (0x00096509) main_camera_pane_g6_ParamLimits

0x9fe6,	// (0x00096509) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0009b6a8) main_camera_pane_g_ParamLimits

0xa96e,	// (0x00096e91) main_camera_pane_t1_ParamLimits

0xa96e,	// (0x00096e91) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0009b6b9) main_camera_pane_t_ParamLimits

0x9f6b,	// (0x0009648e) bg_popup_preview_window_pane_cp01_ParamLimits

0x9f6b,	// (0x0009648e) bg_popup_preview_window_pane_cp01

0xb73c,	// (0x00097c5f) popup_phob_thumbnail2_window_g1_ParamLimits

0xb73c,	// (0x00097c5f) popup_phob_thumbnail2_window_g1

0x9d10,	// (0x00096233) call2_cli_visual_pane

0x3104,	// (0x0008f627) popup_call2_audio_conf_window_ParamLimits

0x3104,	// (0x0008f627) popup_call2_audio_conf_window

0x312c,	// (0x0008f64f) popup_call2_audio_first_window_ParamLimits

0x312c,	// (0x0008f64f) popup_call2_audio_first_window

0x31c2,	// (0x0008f6e5) popup_call2_audio_in_window_ParamLimits

0x31c2,	// (0x0008f6e5) popup_call2_audio_in_window

0x320e,	// (0x0008f731) popup_call2_audio_out_window_ParamLimits

0x320e,	// (0x0008f731) popup_call2_audio_out_window

0x3280,	// (0x0008f7a3) popup_call2_audio_second_window_ParamLimits

0x3280,	// (0x0008f7a3) popup_call2_audio_second_window

0x32e6,	// (0x0008f809) popup_call2_audio_wait_window_ParamLimits

0x32e6,	// (0x0008f809) popup_call2_audio_wait_window

0x9d10,	// (0x00096233) bg_popup_call2_act_pane_cp03

0x9f4d,	// (0x00096470) list_conf_pane_cp

0xb748,	// (0x00097c6b) popup_call2_audio_conf_window_t1

0xb756,	// (0x00097c79) list_single_graphic_popup_conf2_pane_ParamLimits

0xb756,	// (0x00097c79) list_single_graphic_popup_conf2_pane

0xb0e4,	// (0x00097607) list_highlight_pane_cp04

0xb769,	// (0x00097c8c) list_single_graphic_popup_conf2_pane_g1

0xb0f5,	// (0x00097618) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x0009b984) list_single_graphic_popup_conf2_pane_g

0xb773,	// (0x00097c96) list_single_graphic_popup_conf2_pane_t1

0xb781,	// (0x00097ca4) bg_popup_call2_act_pane_cp01_ParamLimits

0xb781,	// (0x00097ca4) bg_popup_call2_act_pane_cp01

0xb80b,	// (0x00097d2e) call_type_pane_cp05_ParamLimits

0xb80b,	// (0x00097d2e) call_type_pane_cp05

0xb85f,	// (0x00097d82) popup_call2_audio_second_window_g1_ParamLimits

0xb85f,	// (0x00097d82) popup_call2_audio_second_window_g1

0xb8b3,	// (0x00097dd6) popup_call2_audio_second_window_g2_ParamLimits

0xb8b3,	// (0x00097dd6) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x0009b989) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x0009b989) popup_call2_audio_second_window_g

0xb918,	// (0x00097e3b) popup_call2_audio_second_window_t1_ParamLimits

0xb918,	// (0x00097e3b) popup_call2_audio_second_window_t1

0xb9d3,	// (0x00097ef6) popup_call2_audio_second_window_t2_ParamLimits

0xb9d3,	// (0x00097ef6) popup_call2_audio_second_window_t2

0xba26,	// (0x00097f49) popup_call2_audio_second_window_t3_ParamLimits

0xba26,	// (0x00097f49) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x0009b990) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x0009b990) popup_call2_audio_second_window_t

0x9d10,	// (0x00096233) bg_popup_call2_in_pane_cp02

0x9d1a,	// (0x0009623d) call_type_pane_cp04

0x3320,	// (0x0008f843) popup_call2_audio_wait_window_g1

0x3328,	// (0x0008f84b) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x0009b999) popup_call2_audio_wait_window_g

0x9d32,	// (0x00096255) popup_call2_audio_wait_window_t3

0xbb2e,	// (0x00098051) bg_popup_call2_act_pane_ParamLimits

0xbb2e,	// (0x00098051) bg_popup_call2_act_pane

0xbbee,	// (0x00098111) call_type_pane_cp03_ParamLimits

0xbbee,	// (0x00098111) call_type_pane_cp03

0xbc52,	// (0x00098175) popup_call2_audio_first_window_g1_ParamLimits

0xbc52,	// (0x00098175) popup_call2_audio_first_window_g1

0xbcc2,	// (0x000981e5) popup_call2_audio_first_window_g2_ParamLimits

0xbcc2,	// (0x000981e5) popup_call2_audio_first_window_g2

0xbd26,	// (0x00098249) popup_call2_audio_first_window_g3_ParamLimits

0xbd26,	// (0x00098249) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x0009b99e) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x0009b99e) popup_call2_audio_first_window_g

0xbdae,	// (0x000982d1) popup_call2_audio_first_window_t1_ParamLimits

0xbdae,	// (0x000982d1) popup_call2_audio_first_window_t1

0xbeb1,	// (0x000983d4) popup_call2_audio_first_window_t4_ParamLimits

0xbeb1,	// (0x000983d4) popup_call2_audio_first_window_t4

0xbf94,	// (0x000984b7) popup_call2_audio_first_window_t5_ParamLimits

0xbf94,	// (0x000984b7) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x0009b9a9) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x0009b9a9) popup_call2_audio_first_window_t

0x9f63,	// (0x00096486) bg_popup_call2_act_pane_g1

0xc5b3,	// (0x00098ad6) popup_cale_lunar_info_window_t1

0xc5c1,	// (0x00098ae4) popup_cale_lunar_info_window_t2

0xc5cf,	// (0x00098af2) popup_cale_lunar_info_window_t3

0x9d10,	// (0x00096233) bg_popup_call2_bubble_pane

0xc095,	// (0x000985b8) bg_popup_call2_in_pane_cp01_ParamLimits

0xc095,	// (0x000985b8) bg_popup_call2_in_pane_cp01

0x99ec,	// (0x00095f0f) call_type_pane_cp02

0x3330,	// (0x0008f853) popup_call2_audio_out_window_g1_ParamLimits

0x3330,	// (0x0008f853) popup_call2_audio_out_window_g1

0xc0dd,	// (0x00098600) popup_call2_audio_out_window_g2_ParamLimits

0xc0dd,	// (0x00098600) popup_call2_audio_out_window_g2

0x335c,	// (0x0008f87f) popup_call2_audio_out_window_g3_ParamLimits

0x335c,	// (0x0008f87f) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x0009b9b2) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x0009b9b2) popup_call2_audio_out_window_g

0xc114,	// (0x00098637) popup_call2_audio_out_window_t1_ParamLimits

0xc114,	// (0x00098637) popup_call2_audio_out_window_t1

0xc173,	// (0x00098696) popup_call2_audio_out_window_t2_ParamLimits

0xc173,	// (0x00098696) popup_call2_audio_out_window_t2

0xc1c7,	// (0x000986ea) popup_call2_audio_out_window_t3_ParamLimits

0xc1c7,	// (0x000986ea) popup_call2_audio_out_window_t3

0xc1dd,	// (0x00098700) popup_call2_audio_out_window_t4_ParamLimits

0xc1dd,	// (0x00098700) popup_call2_audio_out_window_t4

0xc1f3,	// (0x00098716) popup_call2_audio_out_window_t5_ParamLimits

0xc1f3,	// (0x00098716) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x0009b9bb) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x0009b9bb) popup_call2_audio_out_window_t

0xc257,	// (0x0009877a) bg_popup_call2_in_pane_ParamLimits

0xc257,	// (0x0009877a) bg_popup_call2_in_pane

0xc2b3,	// (0x000987d6) popup_call2_audio_in_window_g1_ParamLimits

0xc2b3,	// (0x000987d6) popup_call2_audio_in_window_g1

0xc2eb,	// (0x0009880e) popup_call2_audio_in_window_g2_ParamLimits

0xc2eb,	// (0x0009880e) popup_call2_audio_in_window_g2

0xc323,	// (0x00098846) popup_call2_audio_in_window_g3_ParamLimits

0xc323,	// (0x00098846) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x0009b9c8) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x0009b9c8) popup_call2_audio_in_window_g

0xc37b,	// (0x0009889e) popup_call2_audio_in_window_t1_ParamLimits

0xc37b,	// (0x0009889e) popup_call2_audio_in_window_t1

0xc3fb,	// (0x0009891e) popup_call2_audio_in_window_t2_ParamLimits

0xc3fb,	// (0x0009891e) popup_call2_audio_in_window_t2

0xc47b,	// (0x0009899e) popup_call2_audio_in_window_t3_ParamLimits

0xc47b,	// (0x0009899e) popup_call2_audio_in_window_t3

0xc495,	// (0x000989b8) popup_call2_audio_in_window_t4_ParamLimits

0xc495,	// (0x000989b8) popup_call2_audio_in_window_t4

0xc4a7,	// (0x000989ca) popup_call2_audio_in_window_t5_ParamLimits

0xc4a7,	// (0x000989ca) popup_call2_audio_in_window_t5

0xc4bc,	// (0x000989df) popup_call2_audio_in_window_t6_ParamLimits

0xc4bc,	// (0x000989df) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x0009b9d1) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x0009b9d1) popup_call2_audio_in_window_t

0x9f63,	// (0x00096486) bg_popup_call2_in_pane_g1

0xc5dd,	// (0x00098b00) popup_cale_lunar_info_window_t4

0x0003,

0xf516,	// (0x0009ba39) popup_cale_lunar_info_window_t

0x9f6b,	// (0x0009648e) bg_popup_call2_rect_pane_ParamLimits

0x9f6b,	// (0x0009648e) bg_popup_call2_rect_pane

0x9d10,	// (0x00096233) call2_cli_visual_graphic_pane

0x9d10,	// (0x00096233) call2_cli_visual_text_pane

0xa3c6,	// (0x000968e9) smil_status_volume_pane_g3

0x0002,

0x9f83,	// (0x000964a6) call2_cli_visual_graphic_pane_g1

0x9f83,	// (0x000964a6) call2_cli_visual_graphic_pane_g2

0x9f83,	// (0x000964a6) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x0009b9de) call2_cli_visual_graphic_pane_g

0xc4d1,	// (0x000989f4) bg_popup_call2_rect_pane_g1

0xa175,	// (0x00096698) bg_popup_call2_rect_pane_g2

0xc4d9,	// (0x000989fc) bg_popup_call2_rect_pane_g3

0xc4e1,	// (0x00098a04) bg_popup_call2_rect_pane_g4

0xc4e9,	// (0x00098a0c) bg_popup_call2_rect_pane_g5

0xc4f1,	// (0x00098a14) bg_popup_call2_rect_pane_g6

0xc4f9,	// (0x00098a1c) bg_popup_call2_rect_pane_g7

0xc501,	// (0x00098a24) bg_popup_call2_rect_pane_g8

0xc509,	// (0x00098a2c) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x0009b9e5) bg_popup_call2_rect_pane_g

0xc511,	// (0x00098a34) bg_popup_call2_bubble_pane_g1

0xc519,	// (0x00098a3c) bg_popup_call2_bubble_pane_g2

0xc521,	// (0x00098a44) bg_popup_call2_bubble_pane_g3

0xc529,	// (0x00098a4c) bg_popup_call2_bubble_pane_g4

0xc531,	// (0x00098a54) bg_popup_call2_bubble_pane_g5

0xc539,	// (0x00098a5c) bg_popup_call2_bubble_pane_g6

0xc541,	// (0x00098a64) bg_popup_call2_bubble_pane_g7

0xc549,	// (0x00098a6c) bg_popup_call2_bubble_pane_g8

0xc551,	// (0x00098a74) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x0009b9f8) bg_popup_call2_bubble_pane_g

0x0c86,	// (0x0008d1a9) aid_cale_week_size_cell_pane

0x12ca,	// (0x0008d7ed) aid_cams_cif_uncrop_pane_ParamLimits

0x12ca,	// (0x0008d7ed) aid_cams_cif_uncrop_pane

0x1420,	// (0x0008d943) aid_cams_size_cell_ParamLimits

0x1420,	// (0x0008d943) aid_cams_size_cell

0x1434,	// (0x0008d957) grid_cams_pane_ParamLimits

0x144e,	// (0x0008d971) linegrid_cams_pane_ParamLimits

0x152a,	// (0x0008da4d) call_video_pane_t1

0x1544,	// (0x0008da67) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0009b705) call_video_pane_t

0x197c,	// (0x0008de9f) aid_cale_month_size_cell_pane_ParamLimits

0x197c,	// (0x0008de9f) aid_cale_month_size_cell_pane

0xf55a,	// (0x0009ba7d) smil_status_volume_pane_g

0xa3d3,	// (0x000968f6) volume_smil_pane_ParamLimits

0x9867,	// (0x00095d8a) aid_popup2_width_pane

0x0bd9,	// (0x0008d0fc) cell_qdial_pane_g4_ParamLimits

0x0bd9,	// (0x0008d0fc) cell_qdial_pane_g4

0x2873,	// (0x0008ed96) aid_blid_cardinal_pane_ParamLimits

0x287f,	// (0x0008eda2) aid_blid_destination_pane_ParamLimits

0x287f,	// (0x0008eda2) aid_blid_destination_pane

0x9f6b,	// (0x0009648e) bg_popup_call_poc_act_pane_ParamLimits

0x9f6b,	// (0x0009648e) bg_popup_call_poc_act_pane

0x9f6b,	// (0x0009648e) bg_popup_call_poc_inact_pane_ParamLimits

0x9f6b,	// (0x0009648e) bg_popup_call_poc_inact_pane

0xc559,	// (0x00098a7c) bg_popup_call_poc_act_pane_g1

0xc561,	// (0x00098a84) bg_popup_call_poc_act_pane_g2

0xc569,	// (0x00098a8c) bg_popup_call_poc_act_pane_g3

0xc529,	// (0x00098a4c) bg_popup_call_poc_act_pane_g4

0xc531,	// (0x00098a54) bg_popup_call_poc_act_pane_g5

0xc571,	// (0x00098a94) bg_popup_call_poc_act_pane_g6

0xc541,	// (0x00098a64) bg_popup_call_poc_act_pane_g7

0xc579,	// (0x00098a9c) bg_popup_call_poc_act_pane_g8

0x9d10,	// (0x00096233) main_usb_pane

0xa376,	// (0x00096899) popup_cale_lunar_info_window

0x1811,	// (0x0008dd34) im_reading_pane_t1_ParamLimits

0xaa59,	// (0x00096f7c) list_im_pane_ParamLimits

0xaa6a,	// (0x00096f8d) scroll_pane_cp07_ParamLimits

0x9d10,	// (0x00096233) grid_highlight_pane_cp012

0x9f6b,	// (0x0009648e) mup_scale_pane_ParamLimits

0xb489,	// (0x000979ac) main_usb_pane_g1_ParamLimits

0xb489,	// (0x000979ac) main_usb_pane_g1

0x33af,	// (0x0008f8d2) main_usb_pane_g2_ParamLimits

0x33af,	// (0x0008f8d2) main_usb_pane_g2

0x0001,

0xf4ff,	// (0x0009ba22) main_usb_pane_g_ParamLimits

0xf4ff,	// (0x0009ba22) main_usb_pane_g

0x33c5,	// (0x0008f8e8) main_usb_pane_t1_ParamLimits

0x33c5,	// (0x0008f8e8) main_usb_pane_t1

0x33d7,	// (0x0008f8fa) main_usb_pane_t2_ParamLimits

0x33d7,	// (0x0008f8fa) main_usb_pane_t2

0x33e9,	// (0x0008f90c) main_usb_pane_t3_ParamLimits

0x33e9,	// (0x0008f90c) main_usb_pane_t3

0x33fb,	// (0x0008f91e) main_usb_pane_t4_ParamLimits

0x33fb,	// (0x0008f91e) main_usb_pane_t4

0x3410,	// (0x0008f933) main_usb_pane_t5_ParamLimits

0x3410,	// (0x0008f933) main_usb_pane_t5

0x3425,	// (0x0008f948) main_usb_pane_t6_ParamLimits

0x3425,	// (0x0008f948) main_usb_pane_t6

0x0005,

0xf504,	// (0x0009ba27) main_usb_pane_t_ParamLimits

0x2812,	// (0x0008ed35) aid_text_placing

0x281d,	// (0x0008ed40) main_location2_pane_t1_ParamLimits

0x2833,	// (0x0008ed56) main_location2_pane_t2_ParamLimits

0x2849,	// (0x0008ed6c) main_location2_pane_t3_ParamLimits

0x285f,	// (0x0008ed82) main_location2_pane_t4_ParamLimits

0x285f,	// (0x0008ed82) main_location2_pane_t4

0xf31e,	// (0x0009b841) main_location2_pane_t_ParamLimits

0x9f99,	// (0x000964bc) find_pinb_pane_g2_ParamLimits

0x9f99,	// (0x000964bc) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0009b5bd) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0009b5bd) find_pinb_pane_g

0x9fa5,	// (0x000964c8) find_pinb_pane_t1_ParamLimits

0x9fb7,	// (0x000964da) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0009b5c2) find_pinb_pane_t_ParamLimits

0x9d10,	// (0x00096233) main_call3_pane

0x1f81,	// (0x0008e4a4) cale_month_day_heading_pane_t1_ParamLimits

0x2007,	// (0x0008e52a) cale_month_day_heading_pane_t2_ParamLimits

0x2080,	// (0x0008e5a3) cale_month_day_heading_pane_t3_ParamLimits

0x20f9,	// (0x0008e61c) cale_month_day_heading_pane_t4_ParamLimits

0x217a,	// (0x0008e69d) cale_month_day_heading_pane_t5_ParamLimits

0x2203,	// (0x0008e726) cale_month_day_heading_pane_t6_ParamLimits

0x2294,	// (0x0008e7b7) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0009b73d) cale_month_day_heading_pane_t_ParamLimits

0xacc3,	// (0x000971e6) smil_status_volume_pane

0x2dfe,	// (0x0008f321) postcard_address_pane_ParamLimits

0x2dfe,	// (0x0008f321) postcard_address_pane

0x2e14,	// (0x0008f337) postcard_message_pane_ParamLimits

0x2e14,	// (0x0008f337) postcard_message_pane

0x3388,	// (0x0008f8ab) call2_cli_visual_pane_t1_ParamLimits

0x3388,	// (0x0008f8ab) call2_cli_visual_pane_t1

0xc6f2,	// (0x00098c15) postcard_message_pane_t1_ParamLimits

0xc6f2,	// (0x00098c15) postcard_message_pane_t1

0xc6da,	// (0x00098bfd) postcard_address_pane_t1_ParamLimits

0xc6da,	// (0x00098bfd) postcard_address_pane_t1

0x3b6b,	// (0x0009008e) popup_call3_audio_in_window_ParamLimits

0x3b6b,	// (0x0009008e) popup_call3_audio_in_window

0x39f0,	// (0x0008ff13) bg_popup_call3_in_pane_ParamLimits

0x39f0,	// (0x0008ff13) bg_popup_call3_in_pane

0x3a6c,	// (0x0008ff8f) popup_call3_audio_in_window_g1_ParamLimits

0x3a6c,	// (0x0008ff8f) popup_call3_audio_in_window_g1

0x3a8c,	// (0x0008ffaf) popup_call3_audio_in_window_g2_ParamLimits

0x3a8c,	// (0x0008ffaf) popup_call3_audio_in_window_g2

0x3aac,	// (0x0008ffcf) popup_call3_audio_in_window_g3_ParamLimits

0x3aac,	// (0x0008ffcf) popup_call3_audio_in_window_g3

0x0003,

0xf561,	// (0x0009ba84) popup_call3_audio_in_window_g_ParamLimits

0xf561,	// (0x0009ba84) popup_call3_audio_in_window_g

0x3add,	// (0x00090000) popup_call3_audio_in_window_t1_ParamLimits

0x3add,	// (0x00090000) popup_call3_audio_in_window_t1

0x3b1b,	// (0x0009003e) popup_call3_audio_in_window_t2_ParamLimits

0x3b1b,	// (0x0009003e) popup_call3_audio_in_window_t2

0x3b59,	// (0x0009007c) popup_call3_audio_in_window_t3_ParamLimits

0x3b59,	// (0x0009007c) popup_call3_audio_in_window_t3

0x0002,

0xf56a,	// (0x0009ba8d) popup_call3_audio_in_window_t_ParamLimits

0xf56a,	// (0x0009ba8d) popup_call3_audio_in_window_t

0xa966,	// (0x00096e89) bg_popup_call3_rect_pane

0xc4d1,	// (0x000989f4) bg_popup_call3_rect_pane_g1

0xa175,	// (0x00096698) bg_popup_call3_rect_pane_g2

0xc4d9,	// (0x000989fc) bg_popup_call3_rect_pane_g3

0xc4e1,	// (0x00098a04) bg_popup_call3_rect_pane_g4

0xc4e9,	// (0x00098a0c) bg_popup_call3_rect_pane_g5

0xc4f1,	// (0x00098a14) bg_popup_call3_rect_pane_g6

0xc4f9,	// (0x00098a1c) bg_popup_call3_rect_pane_g7

0x9855,	// (0x00095d78) mup_visualizer_osc_pane

0x9855,	// (0x00095d78) mup_visualizer_spec_pane

0x3a20,	// (0x0008ff43) call3_video_qcif_pane_ParamLimits

0x3a20,	// (0x0008ff43) call3_video_qcif_pane

0x3a33,	// (0x0008ff56) call3_video_qcif_uncrop_pane_ParamLimits

0x3a33,	// (0x0008ff56) call3_video_qcif_uncrop_pane

0x3a43,	// (0x0008ff66) call3_video_subqcif_pane_ParamLimits

0x3a43,	// (0x0008ff66) call3_video_subqcif_pane

0x3a59,	// (0x0008ff7c) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a59,	// (0x0008ff7c) call3_video_subqcif_uncrop_pane

0x3acc,	// (0x0008ffef) popup_call3_audio_in_window_g4_ParamLimits

0x3acc,	// (0x0008ffef) popup_call3_audio_in_window_g4

0x9855,	// (0x00095d78) mup_spec_half_pane

0x9855,	// (0x00095d78) mup_spec_half_pane_cp

0x9855,	// (0x00095d78) mup_osc_middle_pane

0xa99c,	// (0x00096ebf) mup_visualizer_osc_pane_g1

0xc68d,	// (0x00098bb0) mup_spec_bar_pane_ParamLimits

0xc68d,	// (0x00098bb0) mup_spec_bar_pane

0xa99c,	// (0x00096ebf) mup_spec_bar_pane_g1

0xa99c,	// (0x00096ebf) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x0009b8bb) mup_spec_bar_pane_g

0x0c86,	// (0x0008d1a9) aid_cale_week_size_cell_pane_ParamLimits

0x0ca0,	// (0x0008d1c3) bg_cale_heading_pane_ParamLimits

0x0cc4,	// (0x0008d1e7) bg_cale_pane_cp01_ParamLimits

0x0ce1,	// (0x0008d204) cale_week_corner_pane_ParamLimits

0x0d00,	// (0x0008d223) cale_week_day_heading_pane_ParamLimits

0x0d29,	// (0x0008d24c) cale_week_scroll_pane_g1_ParamLimits

0x0d48,	// (0x0008d26b) cale_week_scroll_pane_g2_ParamLimits

0x0d60,	// (0x0008d283) cale_week_scroll_pane_g3_ParamLimits

0x0d78,	// (0x0008d29b) cale_week_scroll_pane_g4_ParamLimits

0x0d90,	// (0x0008d2b3) cale_week_scroll_pane_g5_ParamLimits

0x0db0,	// (0x0008d2d3) cale_week_scroll_pane_g6_ParamLimits

0x0dd0,	// (0x0008d2f3) cale_week_scroll_pane_g7_ParamLimits

0x0df4,	// (0x0008d317) cale_week_scroll_pane_g8_ParamLimits

0x0e18,	// (0x0008d33b) cale_week_scroll_pane_g9_ParamLimits

0x0e30,	// (0x0008d353) cale_week_scroll_pane_g10_ParamLimits

0x0e48,	// (0x0008d36b) cale_week_scroll_pane_g11_ParamLimits

0x0e60,	// (0x0008d383) cale_week_scroll_pane_g12_ParamLimits

0x0e84,	// (0x0008d3a7) cale_week_scroll_pane_g13_ParamLimits

0x0e84,	// (0x0008d3a7) cale_week_scroll_pane_g14_ParamLimits

0x0e84,	// (0x0008d3a7) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0009b64e) cale_week_scroll_pane_g_ParamLimits

0x0ecc,	// (0x0008d3ef) cale_week_time_pane_ParamLimits

0x0ef0,	// (0x0008d413) grid_cale_week_pane_ParamLimits

0xa1fa,	// (0x0009671d) listscroll_cale_week_pane_t1

0xa20c,	// (0x0009672f) scroll_pane_cp08_ParamLimits

0x19f4,	// (0x0008df17) cale_month_corner_pane_ParamLimits

0xac99,	// (0x000971bc) cale_month_pane_t1

0x1efc,	// (0x0008e41f) cale_month_week_pane_ParamLimits

0x2652,	// (0x0008eb75) popup_call_status_window_g1_ParamLimits

0x2666,	// (0x0008eb89) popup_call_status_window_g2_ParamLimits

0x267a,	// (0x0008eb9d) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x0009b7c8) popup_call_status_window_g_ParamLimits

0xb071,	// (0x00097594) aid_call2_pane

0xfdcc,	// (0x0008c2ef) msg_header_pane_g1

0x2dfe,	// (0x0008f321) postcard_address2_pane_ParamLimits

0x2dfe,	// (0x0008f321) postcard_address2_pane

0x2e14,	// (0x0008f337) postcard_message2_pane_ParamLimits

0x2e14,	// (0x0008f337) postcard_message2_pane

0x39bd,	// (0x0008fee0) message2_row_pane_ParamLimits

0x39bd,	// (0x0008fee0) message2_row_pane

0x39dd,	// (0x0008ff00) address2_row_pane_ParamLimits

0x39dd,	// (0x0008ff00) address2_row_pane

0xc65a,	// (0x00098b7d) postcard_message2_row_pane_g1

0xc662,	// (0x00098b85) postcard_message2_row_pane_t1

0xc65a,	// (0x00098b7d) address2_row_pane_g1

0xc662,	// (0x00098b85) address2_row_pane_t1

0x125d,	// (0x0008d780) aid_size_cell_vorec

0x9d10,	// (0x00096233) main_rss_pane

0xc670,	// (0x00098b93) rss_list_single_pane_ParamLimits

0xc670,	// (0x00098b93) rss_list_single_pane

0xc67e,	// (0x00098ba1) rss_list_single_pane_t1

0xc67e,	// (0x00098ba1) rss_list_single_pane_t2

0x0001,

0xf555,	// (0x0009ba78) rss_list_single_pane_t

0x9d10,	// (0x00096233) main_camera2_pane

0x9d10,	// (0x00096233) main_video2_pane

0xa3e8,	// (0x0009690b) cams_zoom_pane_cp2_ParamLimits

0xa3e8,	// (0x0009690b) cams_zoom_pane_cp2

0xa3e8,	// (0x0009690b) image2_vga_pane_ParamLimits

0xa3e8,	// (0x0009690b) image2_vga_pane

0xa3f6,	// (0x00096919) main_camera2_pane_g1_ParamLimits

0xa3f6,	// (0x00096919) main_camera2_pane_g1

0xa3f6,	// (0x00096919) main_camera2_pane_g2_ParamLimits

0xa3f6,	// (0x00096919) main_camera2_pane_g2

0xa3f6,	// (0x00096919) main_camera2_pane_g3_ParamLimits

0xa3f6,	// (0x00096919) main_camera2_pane_g3

0xa3f6,	// (0x00096919) main_camera2_pane_g4_ParamLimits

0xa3f6,	// (0x00096919) main_camera2_pane_g4

0xa3f6,	// (0x00096919) main_camera2_pane_g5_ParamLimits

0xa3f6,	// (0x00096919) main_camera2_pane_g5

0xa3f6,	// (0x00096919) main_camera2_pane_g6_ParamLimits

0xa3f6,	// (0x00096919) main_camera2_pane_g6

0xa3f6,	// (0x00096919) main_camera2_pane_g7_ParamLimits

0xa3f6,	// (0x00096919) main_camera2_pane_g7

0xa3f6,	// (0x00096919) main_camera2_pane_g8_ParamLimits

0xa3f6,	// (0x00096919) main_camera2_pane_g8

0x0008,

0xf571,	// (0x0009ba94) main_camera2_pane_g_ParamLimits

0xf571,	// (0x0009ba94) main_camera2_pane_g

0x3b8d,	// (0x000900b0) main_camera2_pane_t1_ParamLimits

0x3b8d,	// (0x000900b0) main_camera2_pane_t1

0x3b8d,	// (0x000900b0) main_camera2_pane_t2_ParamLimits

0x3b8d,	// (0x000900b0) main_camera2_pane_t2

0x3b8d,	// (0x000900b0) main_camera2_pane_t3_ParamLimits

0x3b8d,	// (0x000900b0) main_camera2_pane_t3

0x3b8d,	// (0x000900b0) main_camera2_pane_t4_ParamLimits

0x3b8d,	// (0x000900b0) main_camera2_pane_t4

0x0006,

0xf584,	// (0x0009baa7) main_camera2_pane_t_ParamLimits

0xf584,	// (0x0009baa7) main_camera2_pane_t

0xcb7e,	// (0x000990a1) cams_zoom_pane_cp4_ParamLimits

0xcb7e,	// (0x000990a1) cams_zoom_pane_cp4

0xc70e,	// (0x00098c31) image2_cif_pane_ParamLimits

0xc70e,	// (0x00098c31) image2_cif_pane

0x98ba,	// (0x00095ddd) image2_subqcif_pane_ParamLimits

0x98ba,	// (0x00095ddd) image2_subqcif_pane

0x3ba1,	// (0x000900c4) main_video2_pane_g1_ParamLimits

0x3ba1,	// (0x000900c4) main_video2_pane_g1

0x3ba1,	// (0x000900c4) main_video2_pane_g2_ParamLimits

0x3ba1,	// (0x000900c4) main_video2_pane_g2

0x3ba1,	// (0x000900c4) main_video2_pane_g3_ParamLimits

0x3ba1,	// (0x000900c4) main_video2_pane_g3

0x3ba1,	// (0x000900c4) main_video2_pane_g4_ParamLimits

0x3ba1,	// (0x000900c4) main_video2_pane_g4

0x3ba1,	// (0x000900c4) main_video2_pane_g5_ParamLimits

0x3ba1,	// (0x000900c4) main_video2_pane_g5

0x3ba1,	// (0x000900c4) main_video2_pane_g6_ParamLimits

0x3ba1,	// (0x000900c4) main_video2_pane_g6

0x0005,

0xf593,	// (0x0009bab6) main_video2_pane_g_ParamLimits

0xf593,	// (0x0009bab6) main_video2_pane_g

0x3baf,	// (0x000900d2) main_video2_pane_t1_ParamLimits

0x3baf,	// (0x000900d2) main_video2_pane_t1

0x3baf,	// (0x000900d2) main_video2_pane_t2_ParamLimits

0x3baf,	// (0x000900d2) main_video2_pane_t2

0x3baf,	// (0x000900d2) main_video2_pane_t3_ParamLimits

0x3baf,	// (0x000900d2) main_video2_pane_t3

0x0002,

0xf5a0,	// (0x0009bac3) main_video2_pane_t_ParamLimits

0xf5a0,	// (0x0009bac3) main_video2_pane_t

0x34be,	// (0x0008f9e1) call_muted_g2

0x0001,

0xf547,	// (0x0009ba6a) call_muted_g

0x9d10,	// (0x00096233) main_mup2_pane

0xb37a,	// (0x0009789d) main_mup2_pane_g1_ParamLimits

0xb37a,	// (0x0009789d) main_mup2_pane_g1

0xb37a,	// (0x0009789d) main_mup2_pane_g2_ParamLimits

0xb37a,	// (0x0009789d) main_mup2_pane_g2

0xa99c,	// (0x00096ebf) main_mup_pane_g13_cp1

0x9855,	// (0x00095d78) mup_volume_pane_cp1

0xb37a,	// (0x0009789d) main_mup2_pane_g4_ParamLimits

0xb37a,	// (0x0009789d) main_mup2_pane_g4

0xb37a,	// (0x0009789d) main_mup2_pane_g5_ParamLimits

0xb37a,	// (0x0009789d) main_mup2_pane_g5

0xb37a,	// (0x0009789d) main_mup2_pane_g6_ParamLimits

0xb37a,	// (0x0009789d) main_mup2_pane_g6

0xb37a,	// (0x0009789d) main_mup2_pane_g7_ParamLimits

0xb37a,	// (0x0009789d) main_mup2_pane_g7

0x0006,

0xf5a7,	// (0x0009baca) main_mup2_pane_g_ParamLimits

0xf5a7,	// (0x0009baca) main_mup2_pane_g

0xb388,	// (0x000978ab) main_mup2_pane_t1_ParamLimits

0xb388,	// (0x000978ab) main_mup2_pane_t1

0xb388,	// (0x000978ab) main_mup2_pane_t2_ParamLimits

0xb388,	// (0x000978ab) main_mup2_pane_t2

0xb388,	// (0x000978ab) main_mup2_pane_t3_ParamLimits

0xb388,	// (0x000978ab) main_mup2_pane_t3

0xb388,	// (0x000978ab) main_mup2_pane_t4_ParamLimits

0xb388,	// (0x000978ab) main_mup2_pane_t4

0xb388,	// (0x000978ab) main_mup2_pane_t5_ParamLimits

0xb388,	// (0x000978ab) main_mup2_pane_t5

0xb388,	// (0x000978ab) main_mup2_pane_t6_ParamLimits

0xb388,	// (0x000978ab) main_mup2_pane_t6

0x0005,

0xf5b6,	// (0x0009bad9) main_mup2_pane_t_ParamLimits

0xf5b6,	// (0x0009bad9) main_mup2_pane_t

0xb3b0,	// (0x000978d3) mup2_visualizer_pane_ParamLimits

0xb3b0,	// (0x000978d3) mup2_visualizer_pane

0xb3b0,	// (0x000978d3) mup_progress_pane_cp_ParamLimits

0xb3b0,	// (0x000978d3) mup_progress_pane_cp

0xc71c,	// (0x00098c3f) mup_volume_pane_cp_ParamLimits

0xc71c,	// (0x00098c3f) mup_volume_pane_cp

0x9fe6,	// (0x00096509) mup2_visualizer_pane_g1_ParamLimits

0x9fe6,	// (0x00096509) mup2_visualizer_pane_g1

0x9ff4,	// (0x00096517) mup2_visualizer_pane_g2_ParamLimits

0x9ff4,	// (0x00096517) mup2_visualizer_pane_g2

0x9ff4,	// (0x00096517) mup2_visualizer_pane_g3_ParamLimits

0x9ff4,	// (0x00096517) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0009b5c7) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0009b5c7) mup2_visualizer_pane_g

0xb5d2,	// (0x00097af5) aid_size_cell_fmradio

0x366e,	// (0x0008fb91) aid_height_parent_landcape

0xaaf7,	// (0x0009701a) wml_content_pane_cp

0xaaff,	// (0x00097022) wml_tabs_pane

0xab08,	// (0x0009702b) popup_wml_miniature_window

0xab10,	// (0x00097033) scroll_pane_cp021

0xab24,	// (0x00097047) wml_content_pane_comp8

0x9d10,	// (0x00096233) bg_popup_sub_pane_cp05

0xc732,	// (0x00098c55) popup_wml_miniature_window_g1

0xc73a,	// (0x00098c5d) wml_miniature_view_pane

0x3bc3,	// (0x000900e6) aid_size_wml_view

0x3bcb,	// (0x000900ee) wml_miniature_view_pane_g1

0x3bd4,	// (0x000900f7) wml_miniature_view_pane_g2

0x3bdd,	// (0x00090100) wml_miniature_view_pane_g3

0x3be5,	// (0x00090108) wml_miniature_view_pane_g4

0x3bed,	// (0x00090110) wml_miniature_view_pane_g5

0x3bf5,	// (0x00090118) wml_miniature_view_pane_g6

0x3bfd,	// (0x00090120) wml_miniature_view_pane_g7

0x3c05,	// (0x00090128) wml_miniature_view_pane_g8

0x0007,

0xf5c3,	// (0x0009bae6) wml_miniature_view_pane_g

0xc742,	// (0x00098c65) background_graphic_ParamLimits

0xc742,	// (0x00098c65) background_graphic

0xc74e,	// (0x00098c71) wml_tabs_2_pane

0xc757,	// (0x00098c7a) wml_tabs_3_pane_ParamLimits

0xc757,	// (0x00098c7a) wml_tabs_3_pane

0xc769,	// (0x00098c8c) wml_tabs_4_pane_ParamLimits

0xc769,	// (0x00098c8c) wml_tabs_4_pane

0xc77f,	// (0x00098ca2) wml_tabs_5_pane_ParamLimits

0xc77f,	// (0x00098ca2) wml_tabs_5_pane

0xc799,	// (0x00098cbc) wml_tabs_pane_g2_ParamLimits

0xc799,	// (0x00098cbc) wml_tabs_pane_g2

0xc7ae,	// (0x00098cd1) wml_tabs_pane_g3_ParamLimits

0xc7ae,	// (0x00098cd1) wml_tabs_pane_g3

0xc7c3,	// (0x00098ce6) wml_tabs_2_active_pane_ParamLimits

0xc7c3,	// (0x00098ce6) wml_tabs_2_active_pane

0xc7c3,	// (0x00098ce6) wml_tabs_2_passive_pane_ParamLimits

0xc7c3,	// (0x00098ce6) wml_tabs_2_passive_pane

0x3c0d,	// (0x00090130) wml_tabs_3_active_pane_cp_ParamLimits

0x3c0d,	// (0x00090130) wml_tabs_3_active_pane_cp

0x3c22,	// (0x00090145) wml_tabs_3_passive_pane_ParamLimits

0x3c22,	// (0x00090145) wml_tabs_3_passive_pane

0x3c35,	// (0x00090158) wml_tabs_3_passive_pane_cp_ParamLimits

0x3c35,	// (0x00090158) wml_tabs_3_passive_pane_cp

0x3c4c,	// (0x0009016f) tabs_4_active_pane

0x3c54,	// (0x00090177) tabs_4_passive_pane

0x3c5e,	// (0x00090181) tabs_4_passive_pane_cp

0x3c66,	// (0x00090189) tabs_4_passive_pane_cp2

0x33a7,	// (0x0008f8ca) aid_height_text

0xb3b0,	// (0x000978d3) mup_volume_cont_pane_ParamLimits

0xb3b0,	// (0x000978d3) mup_volume_cont_pane

0x9855,	// (0x00095d78) aid_size_cell_pinb

0x9855,	// (0x00095d78) aid_size_list_pinb

0xb3b0,	// (0x000978d3) mup2_volume_cont_pane_ParamLimits

0xb3b0,	// (0x000978d3) mup2_volume_cont_pane

0xa418,	// (0x0009693b) mup2_volume_cont_pane_g1_ParamLimits

0xa418,	// (0x0009693b) mup2_volume_cont_pane_g1

0x0670,	// (0x0008cb93) aid_size_cell_touch_ParamLimits

0x0670,	// (0x0008cb93) aid_size_cell_touch

0x08b2,	// (0x0008cdd5) touch_pane_ParamLimits

0x08b2,	// (0x0008cdd5) touch_pane

0x9855,	// (0x00095d78) main_rss2_pane

0xc7da,	// (0x00098cfd) listscroll_rss2_pane

0xc7e3,	// (0x00098d06) rss2_navigation_pane

0xc7eb,	// (0x00098d0e) list_rss2_pane

0xb189,	// (0x000976ac) scroll_pane_cp22

0xc7f3,	// (0x00098d16) rss2_navigation_pane_g1

0xc7fc,	// (0x00098d1f) rss2_navigation_pane_g2

0xc804,	// (0x00098d27) rss2_navigation_pane_g3

0x0002,

0xf5d4,	// (0x0009baf7) rss2_navigation_pane_g

0xc80c,	// (0x00098d2f) rss2_navigation_pane_t1

0x3c70,	// (0x00090193) rss2_list_single_pane_ParamLimits

0x3c70,	// (0x00090193) rss2_list_single_pane

0xc81a,	// (0x00098d3d) rss2_list_single_pane_t2

0xc828,	// (0x00098d4b) rss2_list_single_pane_t3_ParamLimits

0xc828,	// (0x00098d4b) rss2_list_single_pane_t3

0xc845,	// (0x00098d68) rss2_list_single_pane_t4

0x253c,	// (0x0008ea5f) smil_status_pane_g1

0x98ba,	// (0x00095ddd) main_image2_pane_ParamLimits

0x98ba,	// (0x00095ddd) main_image2_pane

0xa3f6,	// (0x00096919) main_camera2_pane_g9_ParamLimits

0xa3f6,	// (0x00096919) main_camera2_pane_g9

0x3b8d,	// (0x000900b0) main_camera2_pane_t5_ParamLimits

0x3b8d,	// (0x000900b0) main_camera2_pane_t5

0xa404,	// (0x00096927) main_camera2_pane_t6_ParamLimits

0xa404,	// (0x00096927) main_camera2_pane_t6

0x3c87,	// (0x000901aa) main_image2_pane_g1_ParamLimits

0x3c87,	// (0x000901aa) main_image2_pane_g1

0x3056,	// (0x0008f579) smil2_video_pane_ParamLimits

0x3056,	// (0x0008f579) smil2_video_pane

0x06b0,	// (0x0008cbd3) aid_zoom_text_primary_cp

0x98b0,	// (0x00095dd3) popup_preview_fixed_window

0xaa51,	// (0x00096f74) im_reading_pane_g1

0x3b7f,	// (0x000900a2) cams2_bc_adjust_pane_cp_ParamLimits

0x3b7f,	// (0x000900a2) cams2_bc_adjust_pane_cp

0xb3b0,	// (0x000978d3) cams2_bc_adjust_pane_ParamLimits

0xb3b0,	// (0x000978d3) cams2_bc_adjust_pane

0xa99c,	// (0x00096ebf) cams2_bc_adjust_pane_g1

0x9855,	// (0x00095d78) cams2_slider_pane

0xa99c,	// (0x00096ebf) cams2_slider_pane_g1

0xa99c,	// (0x00096ebf) cams2_slider_pane_g2

0x0006,

0xf5db,	// (0x0009bafe) cams2_slider_pane_g

0x0948,	// (0x0008ce6b) calc_display_pane_ParamLimits

0x096d,	// (0x0008ce90) calc_paper_pane_ParamLimits

0x0990,	// (0x0008ceb3) grid_calc_pane_ParamLimits

0xa2fd,	// (0x00096820) popup_clock_digital_window_t1_ParamLimits

0xb56f,	// (0x00097a92) main_image_pane_t1

0x0928,	// (0x0008ce4b) aid_size_cell_calc_ParamLimits

0x0928,	// (0x0008ce4b) aid_size_cell_calc

0x36b4,	// (0x0008fbd7) popup_blid_sat_info2_window_ParamLimits

0x36b4,	// (0x0008fbd7) popup_blid_sat_info2_window

0xc853,	// (0x00098d76) aid_size_cell_blid

0xc70e,	// (0x00098c31) bg_popup_window_pane_cp07

0xc870,	// (0x00098d93) grid_popup_blid_pane

0xc87a,	// (0x00098d9d) heading_pane_cp05_ParamLimits

0xc87a,	// (0x00098d9d) heading_pane_cp05

0xc944,	// (0x00098e67) cell_popup_blid_pane_ParamLimits

0xc944,	// (0x00098e67) cell_popup_blid_pane

0xc96e,	// (0x00098e91) cell_popup_blid_pane_g1

0xc976,	// (0x00098e99) cell_popup_blid_pane_t1

0xb3b0,	// (0x000978d3) mup2_indicator_pane_ParamLimits

0xb3b0,	// (0x000978d3) mup2_indicator_pane

0x9855,	// (0x00095d78) mup2_visualizer_osc_pane

0xc71c,	// (0x00098c3f) mup2_visualizer_spec_pane_ParamLimits

0xc71c,	// (0x00098c3f) mup2_visualizer_spec_pane

0x9855,	// (0x00095d78) mup2_spec_half_pane

0x9855,	// (0x00095d78) mup2_spec_half_pane_cp

0xc984,	// (0x00098ea7) mup2_spec_bar_pane_ParamLimits

0xc984,	// (0x00098ea7) mup2_spec_bar_pane

0xa99c,	// (0x00096ebf) mup2_spec_bar_pane_g1

0xc9a3,	// (0x00098ec6) mup2_spec_bar_pane_g2

0x0001,

0xf601,	// (0x0009bb24) mup2_spec_bar_pane_g

0x9855,	// (0x00095d78) mup2_osc_middle_pane

0xa99c,	// (0x00096ebf) mup2_visualizer_osc_pane_g1

0x98e8,	// (0x00095e0b) popup_number_entry_window_t1_ParamLimits

0x98fb,	// (0x00095e1e) popup_number_entry_window_t2_ParamLimits

0x990d,	// (0x00095e30) popup_number_entry_window_t3_ParamLimits

0x991f,	// (0x00095e42) popup_number_entry_window_t5_ParamLimits

0x991f,	// (0x00095e42) popup_number_entry_window_t5

0xf045,	// (0x0009b568) popup_number_entry_window_t_ParamLimits

0x9954,	// (0x00095e77) text_title_cp2_ParamLimits

0xa33c,	// (0x0009685f) aid_hotspot_pointer_text2_pane

0xa362,	// (0x00096885) main_viewer_pane_g9_ParamLimits

0xa362,	// (0x00096885) main_viewer_pane_g9

0xac99,	// (0x000971bc) cale_month_pane_t1_ParamLimits

0xacd6,	// (0x000971f9) bg_cale_pane_ParamLimits

0xacee,	// (0x00097211) list_cale_pane_ParamLimits

0xacff,	// (0x00097222) listscroll_cale_day_pane_t1

0xad11,	// (0x00097234) scroll_pane_cp09_ParamLimits

0x2a48,	// (0x0008ef6b) main_mup_eq_pane_t1_ParamLimits

0x2a48,	// (0x0008ef6b) main_mup_eq_pane_t1

0x2a64,	// (0x0008ef87) main_mup_eq_pane_t2_ParamLimits

0x2a64,	// (0x0008ef87) main_mup_eq_pane_t2

0x2a80,	// (0x0008efa3) main_mup_eq_pane_t3_ParamLimits

0x2a80,	// (0x0008efa3) main_mup_eq_pane_t3

0x2a9e,	// (0x0008efc1) main_mup_eq_pane_t4_ParamLimits

0x2a9e,	// (0x0008efc1) main_mup_eq_pane_t4

0x2abc,	// (0x0008efdf) main_mup_eq_pane_t5_ParamLimits

0x2abc,	// (0x0008efdf) main_mup_eq_pane_t5

0x2ada,	// (0x0008effd) main_mup_eq_pane_t6_ParamLimits

0x2ada,	// (0x0008effd) main_mup_eq_pane_t6

0x2af0,	// (0x0008f013) main_mup_eq_pane_t7_ParamLimits

0x2af0,	// (0x0008f013) main_mup_eq_pane_t7

0x2b06,	// (0x0008f029) main_mup_eq_pane_t8_ParamLimits

0x2b06,	// (0x0008f029) main_mup_eq_pane_t8

0x2b1c,	// (0x0008f03f) main_mup_eq_pane_t9_ParamLimits

0x2b1c,	// (0x0008f03f) main_mup_eq_pane_t9

0x2b38,	// (0x0008f05b) main_mup_eq_pane_t10_ParamLimits

0x2b38,	// (0x0008f05b) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x0009b8c7) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x0009b8c7) main_mup_eq_pane_t

0x2c0d,	// (0x0008f130) mup_equalizer_pane_cp5_ParamLimits

0x2c25,	// (0x0008f148) mup_equalizer_pane_cp6_ParamLimits

0x2c3d,	// (0x0008f160) mup_equalizer_pane_cp7_ParamLimits

0x9855,	// (0x00095d78) main_gallery_pane

0xc6ac,	// (0x00098bcf) smil2_volume_pane

0xc6b4,	// (0x00098bd7) smil_status_volume_pane_g1_ParamLimits

0xc6c7,	// (0x00098bea) smil_status_volume_pane_g2_ParamLimits

0xa3c6,	// (0x000968e9) smil_status_volume_pane_g3_ParamLimits

0xf55a,	// (0x0009ba7d) smil_status_volume_pane_g_ParamLimits

0xc70e,	// (0x00098c31) bg_popup_window_pane_cp07_ParamLimits

0xc85b,	// (0x00098d7e) blid_firmament_pane

0x98ba,	// (0x00095ddd) aid_size_cell_gallery_ParamLimits

0x98ba,	// (0x00095ddd) aid_size_cell_gallery

0x98ba,	// (0x00095ddd) grid_gallery_pane_ParamLimits

0x98ba,	// (0x00095ddd) grid_gallery_pane

0xc70e,	// (0x00098c31) cell_gallery_pane_ParamLimits

0xc70e,	// (0x00098c31) cell_gallery_pane

0x98ba,	// (0x00095ddd) bg_cell_gallery_focus_pane_ParamLimits

0x98ba,	// (0x00095ddd) bg_cell_gallery_focus_pane

0x9fe6,	// (0x00096509) cell_gallery_pane_g1_ParamLimits

0x9fe6,	// (0x00096509) cell_gallery_pane_g1

0x9fe6,	// (0x00096509) cell_gallery_pane_g2_ParamLimits

0x9fe6,	// (0x00096509) cell_gallery_pane_g2

0x9fe6,	// (0x00096509) cell_gallery_pane_g3_ParamLimits

0x9fe6,	// (0x00096509) cell_gallery_pane_g3

0x9ff4,	// (0x00096517) cell_gallery_pane_g4_ParamLimits

0x9ff4,	// (0x00096517) cell_gallery_pane_g4

0x0003,

0xf606,	// (0x0009bb29) cell_gallery_pane_g_ParamLimits

0xf606,	// (0x0009bb29) cell_gallery_pane_g

0xc9ad,	// (0x00098ed0) bg_cell_gallery_focus_pane_g1

0xc9b5,	// (0x00098ed8) bg_cell_gallery_focus_pane_g2

0xc9bd,	// (0x00098ee0) bg_cell_gallery_focus_pane_g3

0xc9c5,	// (0x00098ee8) bg_cell_gallery_focus_pane_g4

0xc9cd,	// (0x00098ef0) bg_cell_gallery_focus_pane_g5

0xc9d5,	// (0x00098ef8) bg_cell_gallery_focus_pane_g6

0xc9dd,	// (0x00098f00) bg_cell_gallery_focus_pane_g7

0xc9e5,	// (0x00098f08) bg_cell_gallery_focus_pane_g8

0x0007,

0xf60f,	// (0x0009bb32) bg_cell_gallery_focus_pane_g

0xc9ed,	// (0x00098f10) aid_firma_cardinal

0xca01,	// (0x00098f24) blid_firmament_pane_t1

0xca18,	// (0x00098f3b) blid_firmament_pane_t2

0xca2f,	// (0x00098f52) blid_firmament_pane_t3

0xca46,	// (0x00098f69) blid_firmament_pane_t4

0x0003,

0xf620,	// (0x0009bb43) blid_firmament_pane_t

0xca5d,	// (0x00098f80) blid_sat_info_pane

0xa99c,	// (0x00096ebf) blid_sat_info_pane_g1

0xa99c,	// (0x00096ebf) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x0009b8bb) blid_sat_info_pane_g

0xca6d,	// (0x00098f90) blid_sat_info_pane_t1

0xca7b,	// (0x00098f9e) smil2_volume_content_pane

0xca84,	// (0x00098fa7) smil2_volume_pane_g1

0xa94c,	// (0x00096e6f) smil2_volume_content_pane_g1

0xca8c,	// (0x00098faf) smil2_volume_content_pane_g2

0xca95,	// (0x00098fb8) smil2_volume_content_pane_g3

0xca9e,	// (0x00098fc1) smil2_volume_content_pane_g4

0xcaa7,	// (0x00098fca) smil2_volume_content_pane_g5

0xcab0,	// (0x00098fd3) smil2_volume_content_pane_g6

0xcab9,	// (0x00098fdc) smil2_volume_content_pane_g7

0xcac2,	// (0x00098fe5) smil2_volume_content_pane_g8

0xcacb,	// (0x00098fee) smil2_volume_content_pane_g9

0xcad4,	// (0x00098ff7) smil2_volume_content_pane_g10

0x0009,

0xf629,	// (0x0009bb4c) smil2_volume_content_pane_g

0x0fbe,	// (0x0008d4e1) cale_week_day_heading_pane_t1_ParamLimits

0x0fe8,	// (0x0008d50b) cale_week_day_heading_pane_t2_ParamLimits

0x1017,	// (0x0008d53a) cale_week_day_heading_pane_t3_ParamLimits

0x1046,	// (0x0008d569) cale_week_day_heading_pane_t4_ParamLimits

0x1075,	// (0x0008d598) cale_week_day_heading_pane_t5_ParamLimits

0x10a8,	// (0x0008d5cb) cale_week_day_heading_pane_t6_ParamLimits

0x10df,	// (0x0008d602) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0009b66f) cale_week_day_heading_pane_t_ParamLimits

0xa229,	// (0x0009674c) bg_cale_side_pane_ParamLimits

0x1109,	// (0x0008d62c) cale_week_time_pane_t1_ParamLimits

0x1123,	// (0x0008d646) cale_week_time_pane_t2_ParamLimits

0x113d,	// (0x0008d660) cale_week_time_pane_t3_ParamLimits

0x1157,	// (0x0008d67a) cale_week_time_pane_t4_ParamLimits

0x1171,	// (0x0008d694) cale_week_time_pane_t5_ParamLimits

0x118b,	// (0x0008d6ae) cale_week_time_pane_t6_ParamLimits

0x11ab,	// (0x0008d6ce) cale_week_time_pane_t7_ParamLimits

0x11d1,	// (0x0008d6f4) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0009b67e) cale_week_time_pane_t_ParamLimits

0x11f7,	// (0x0008d71a) cell_cale_week_pane_g2_ParamLimits

0xa229,	// (0x0009674c) bg_cale_side_pane_cp01_ParamLimits

0x2325,	// (0x0008e848) cale_month_week_pane_t1_ParamLimits

0x233e,	// (0x0008e861) cale_month_week_pane_t2_ParamLimits

0x2357,	// (0x0008e87a) cale_month_week_pane_t3_ParamLimits

0x2370,	// (0x0008e893) cale_month_week_pane_t4_ParamLimits

0x2389,	// (0x0008e8ac) cale_month_week_pane_t5_ParamLimits

0x23a2,	// (0x0008e8c5) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0009b74c) cale_month_week_pane_t_ParamLimits

0xa27d,	// (0x000967a0) cell_cale_month_pane_g1_ParamLimits

0x9855,	// (0x00095d78) main_cale_event_viewer_pane

0x9855,	// (0x00095d78) listscroll_cale_event_viewer_pane

0xcadd,	// (0x00099000) list_cale_ev_pane

0xcae5,	// (0x00099008) scroll_pane_cp023

0x3c9d,	// (0x000901c0) field_cale_ev_pane_ParamLimits

0x3c9d,	// (0x000901c0) field_cale_ev_pane

0xcaf1,	// (0x00099014) field_cale_ev_content_pane_ParamLimits

0xcaf1,	// (0x00099014) field_cale_ev_content_pane

0xcafd,	// (0x00099020) field_cale_ev_pane_g1_ParamLimits

0xcafd,	// (0x00099020) field_cale_ev_pane_g1

0xcb09,	// (0x0009902c) field_cale_ev_pane_g2_ParamLimits

0xcb09,	// (0x0009902c) field_cale_ev_pane_g2

0xcb21,	// (0x00099044) field_cale_ev_pane_g3_ParamLimits

0xcb21,	// (0x00099044) field_cale_ev_pane_g3

0x0002,

0xf63e,	// (0x0009bb61) field_cale_ev_pane_g_ParamLimits

0xf63e,	// (0x0009bb61) field_cale_ev_pane_g

0xcb39,	// (0x0009905c) field_cale_ev_pane_t1_ParamLimits

0xcb39,	// (0x0009905c) field_cale_ev_pane_t1

0x3cc1,	// (0x000901e4) field_cale_ev_content_pane_t1_ParamLimits

0x3cc1,	// (0x000901e4) field_cale_ev_content_pane_t1

0xb455,	// (0x00097978) bg_button_pane_cp01

0x0c76,	// (0x0008d199) listscroll_cale_week_pane_ParamLimits

0xa1f1,	// (0x00096714) popup_toolbar_window_cp01

0xa1fa,	// (0x0009671d) listscroll_cale_week_pane_t1_ParamLimits

0x0c76,	// (0x0008d199) listscroll_cale_day_pane_ParamLimits

0xa1f1,	// (0x00096714) popup_toolbar_window_cp02

0xacff,	// (0x00097222) listscroll_cale_day_pane_t1_ParamLimits

0x0c76,	// (0x0008d199) main_cale_month_pane_ParamLimits

0xa3b1,	// (0x000968d4) popup_toolbar_window_cp03_ParamLimits

0xa3b1,	// (0x000968d4) popup_toolbar_window_cp03

0x2f14,	// (0x0008f437) main_image_pane_g2_ParamLimits

0x2f14,	// (0x0008f437) main_image_pane_g2

0x2f25,	// (0x0008f448) main_image_pane_g3_ParamLimits

0x2f25,	// (0x0008f448) main_image_pane_g3

0x0002,

0xf436,	// (0x0009b959) main_image_pane_g_ParamLimits

0xf436,	// (0x0009b959) main_image_pane_g

0xb56f,	// (0x00097a92) main_image_pane_t1_ParamLimits

0x2f36,	// (0x0008f459) main_image_pane_t2_ParamLimits

0x2f36,	// (0x0008f459) main_image_pane_t2

0x2f48,	// (0x0008f46b) main_image_pane_t3_ParamLimits

0x2f48,	// (0x0008f46b) main_image_pane_t3

0x2f70,	// (0x0008f493) main_image_pane_t4_ParamLimits

0x2f70,	// (0x0008f493) main_image_pane_t4

0x0003,

0xf43d,	// (0x0009b960) main_image_pane_t_ParamLimits

0xf43d,	// (0x0009b960) main_image_pane_t

0x2f90,	// (0x0008f4b3) popup_image_details_window_cp01

0x2f9a,	// (0x0008f4bd) popup_toobar_trans_pane_cp01_ParamLimits

0x2f9a,	// (0x0008f4bd) popup_toobar_trans_pane_cp01

0x37a7,	// (0x0008fcca) popup_image_details_window_ParamLimits

0x37a7,	// (0x0008fcca) popup_image_details_window

0xa382,	// (0x000968a5) popup_image_focus_window

0xa3e8,	// (0x0009690b) camera2_autofocus_pane_ParamLimits

0xa3e8,	// (0x0009690b) camera2_autofocus_pane

0x9855,	// (0x00095d78) bg_popup_sub_pane_cp06

0xcb50,	// (0x00099073) popup_image_focus_window_g1

0xcb58,	// (0x0009907b) popup_image_focus_window_g2

0xcb60,	// (0x00099083) popup_image_focus_window_g3

0xcb68,	// (0x0009908b) popup_image_focus_window_g4

0x0003,

0xf645,	// (0x0009bb68) popup_image_focus_window_g

0xcb70,	// (0x00099093) popup_image_focus_window_t1

0xcb8c,	// (0x000990af) popup_image_focus_window_t2

0xcb9c,	// (0x000990bf) popup_image_focus_window_t3

0x0002,

0xf64e,	// (0x0009bb71) popup_image_focus_window_t

0x9fe6,	// (0x00096509) camera2_autofocus_pane_g1

0x98ba,	// (0x00095ddd) bg_tb_trans_pane_cp01

0xcbaa,	// (0x000990cd) popup_image_details_window_g1

0xcbbd,	// (0x000990e0) popup_image_details_window_g2

0x0002,

0xf660,	// (0x0009bb83) popup_image_details_window_g

0xcbe6,	// (0x00099109) popup_image_details_window_t1

0xcbf8,	// (0x0009911b) popup_image_details_window_t2

0xcc11,	// (0x00099134) popup_image_details_window_t3

0xcc25,	// (0x00099148) popup_image_details_window_t4

0xcc40,	// (0x00099163) popup_image_details_window_t5

0x0004,

0xf667,	// (0x0009bb8a) popup_image_details_window_t

0xa04c,	// (0x0009656f) bg_calc_paper_pane_ParamLimits

0x9855,	// (0x00095d78) grid_highlight_pane_cp013

0xa060,	// (0x00096583) list_calc_pane_ParamLimits

0xa072,	// (0x00096595) scroll_pane_cp024

0xa07a,	// (0x0009659d) bg_calc_display_pane_ParamLimits

0x0a90,	// (0x0008cfb3) calc_display_pane_t1_ParamLimits

0x0aa5,	// (0x0008cfc8) calc_display_pane_t2_ParamLimits

0xa086,	// (0x000965a9) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0009b5ef) calc_display_pane_t_ParamLimits

0x0b73,	// (0x0008d096) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0009b60c) cell_calc_pane_g

0x0b7c,	// (0x0008d09f) cell_calc_pane_t1

0xa0f3,	// (0x00096616) grid_highlight_pane_cp02_ParamLimits

0xa109,	// (0x0009662c) toolbar_button_pane_cp01_ParamLimits

0xa109,	// (0x0009662c) toolbar_button_pane_cp01

0xb5b4,	// (0x00097ad7) temp_image_control_pane_ParamLimits

0xb5b4,	// (0x00097ad7) temp_image_control_pane

0x98ba,	// (0x00095ddd) main_mp3_pane

0xcc5a,	// (0x0009917d) temp_image_control_pane_g1_ParamLimits

0xcc5a,	// (0x0009917d) temp_image_control_pane_g1

0xcc68,	// (0x0009918b) temp_image_control_pane_g2_ParamLimits

0xcc68,	// (0x0009918b) temp_image_control_pane_g2

0xcc7a,	// (0x0009919d) temp_image_control_pane_g3_ParamLimits

0xcc7a,	// (0x0009919d) temp_image_control_pane_g3

0x3ce2,	// (0x00090205) temp_image_control_pane_g4_ParamLimits

0x3ce2,	// (0x00090205) temp_image_control_pane_g4

0x0003,

0xf672,	// (0x0009bb95) temp_image_control_pane_g_ParamLimits

0xf672,	// (0x0009bb95) temp_image_control_pane_g

0xcc5a,	// (0x0009917d) main_mp3_pane_g1

0x3cf5,	// (0x00090218) main_mp3_pane_g2

0x0007,

0xf67b,	// (0x0009bb9e) main_mp3_pane_g

0xccaf,	// (0x000991d2) main_mp3_pane_t1

0x9ff4,	// (0x00096517) main_camera_pane_g8_ParamLimits

0x9ff4,	// (0x00096517) main_camera_pane_g8

0x13ce,	// (0x0008d8f1) main_video_pane_g7_ParamLimits

0x13ce,	// (0x0008d8f1) main_video_pane_g7

0xb39c,	// (0x000978bf) main_camera2_pane_t7_ParamLimits

0xb39c,	// (0x000978bf) main_camera2_pane_t7

0xaab7,	// (0x00096fda) scroll_pane_cp025_ParamLimits

0xaab7,	// (0x00096fda) scroll_pane_cp025

0xaacb,	// (0x00096fee) scroll_pane_cp026_ParamLimits

0xaacb,	// (0x00096fee) scroll_pane_cp026

0xaada,	// (0x00096ffd) wml_content_pane_ParamLimits

0x9855,	// (0x00095d78) main_touch_calib_pane

0x3dc7,	// (0x000902ea) main_touch_calib_pane_g1

0x3dd9,	// (0x000902fc) main_touch_calib_pane_g2

0x3deb,	// (0x0009030e) main_touch_calib_pane_g3

0x3dfd,	// (0x00090320) main_touch_calib_pane_g4

0x0003,

0xf699,	// (0x0009bbbc) main_touch_calib_pane_g

0x3e0f,	// (0x00090332) main_touch_calib_pane_t1

0x3e29,	// (0x0009034c) main_touch_calib_pane_t2

0x0004,

0xf6a2,	// (0x0009bbc5) main_touch_calib_pane_t

0xb204,	// (0x00097727) mup_progress_pane_cp02

0xb223,	// (0x00097746) navi_pane_g1

0xb285,	// (0x000977a8) navi_pane_mp_t3

0x98ba,	// (0x00095ddd) main_mp3_pane_ParamLimits

0x3960,	// (0x0008fe83) navi_pane_ParamLimits

0xcc5a,	// (0x0009917d) main_mp3_pane_g1_ParamLimits

0x3cf5,	// (0x00090218) main_mp3_pane_g2_ParamLimits

0x3d01,	// (0x00090224) main_mp3_pane_g3_ParamLimits

0x3d01,	// (0x00090224) main_mp3_pane_g3

0x3d0f,	// (0x00090232) main_mp3_pane_g4_ParamLimits

0x3d0f,	// (0x00090232) main_mp3_pane_g4

0x9fe6,	// (0x00096509) main_mp3_pane_g5_ParamLimits

0x9fe6,	// (0x00096509) main_mp3_pane_g5

0xcc8a,	// (0x000991ad) main_mp3_pane_g6_ParamLimits

0xcc8a,	// (0x000991ad) main_mp3_pane_g6

0xcc97,	// (0x000991ba) main_mp3_pane_g7_ParamLimits

0xcc97,	// (0x000991ba) main_mp3_pane_g7

0xcca3,	// (0x000991c6) main_mp3_pane_g8_ParamLimits

0xcca3,	// (0x000991c6) main_mp3_pane_g8

0xf67b,	// (0x0009bb9e) main_mp3_pane_g_ParamLimits

0x3d1b,	// (0x0009023e) main_mp3_pane_t2

0x3d29,	// (0x0009024c) main_mp3_pane_t3

0xccbd,	// (0x000991e0) main_mp3_pane_t4

0xcccb,	// (0x000991ee) main_mp3_pane_t5

0x0005,

0xf68c,	// (0x0009bbaf) main_mp3_pane_t

0xccd9,	// (0x000991fc) mup_progress_pane_cp01

0x06b0,	// (0x0008cbd3) aid_zoom_text_secondary2

0xcadd,	// (0x00099000) list_cale_ev2_pane

0xcae5,	// (0x00099008) scroll_pane_cp023_ParamLimits

0x3e83,	// (0x000903a6) field_cale_ev2_pane_ParamLimits

0x3e83,	// (0x000903a6) field_cale_ev2_pane

0x3ea7,	// (0x000903ca) field_cale_ev2_pane_g1_ParamLimits

0x3ea7,	// (0x000903ca) field_cale_ev2_pane_g1

0x3eb3,	// (0x000903d6) field_cale_ev2_pane_g2_ParamLimits

0x3eb3,	// (0x000903d6) field_cale_ev2_pane_g2

0x3ecb,	// (0x000903ee) field_cale_ev2_pane_g3_ParamLimits

0x3ecb,	// (0x000903ee) field_cale_ev2_pane_g3

0x0003,

0xf6ad,	// (0x0009bbd0) field_cale_ev2_pane_g_ParamLimits

0xf6ad,	// (0x0009bbd0) field_cale_ev2_pane_g

0xfe5c,	// (0x0008c37f) field_cale_ev2_pane_t1_ParamLimits

0xfe5c,	// (0x0008c37f) field_cale_ev2_pane_t1

0xfe73,	// (0x0008c396) field_cale_ev2_pane_t2_ParamLimits

0xfe73,	// (0x0008c396) field_cale_ev2_pane_t2

0x0001,

0xf6b6,	// (0x0009bbd9) field_cale_ev2_pane_t_ParamLimits

0xf6b6,	// (0x0009bbd9) field_cale_ev2_pane_t

0x2dae,	// (0x0008f2d1) main_postcard_pane_g5_ParamLimits

0x2dae,	// (0x0008f2d1) main_postcard_pane_g5

0x2dc4,	// (0x0008f2e7) main_postcard_pane_g6_ParamLimits

0x2dc4,	// (0x0008f2e7) main_postcard_pane_g6

0x98ba,	// (0x00095ddd) camera2_autofocus_pane_cp_ParamLimits

0x98ba,	// (0x00095ddd) camera2_autofocus_pane_cp

0x98ba,	// (0x00095ddd) main_mup3_pane

0x3f2d,	// (0x00090450) main_mup3_pane_g1_ParamLimits

0x3f2d,	// (0x00090450) main_mup3_pane_g1

0x3f4f,	// (0x00090472) main_mup3_pane_g2_ParamLimits

0x3f4f,	// (0x00090472) main_mup3_pane_g2

0x3fca,	// (0x000904ed) main_mup3_pane_g3_ParamLimits

0x3fca,	// (0x000904ed) main_mup3_pane_g3

0x4034,	// (0x00090557) main_mup3_pane_g4_ParamLimits

0x4034,	// (0x00090557) main_mup3_pane_g4

0x409e,	// (0x000905c1) main_mup3_pane_g5_ParamLimits

0x409e,	// (0x000905c1) main_mup3_pane_g5

0x4108,	// (0x0009062b) main_mup3_pane_g6_ParamLimits

0x4108,	// (0x0009062b) main_mup3_pane_g6

0x9ff4,	// (0x00096517) main_mup3_pane_g7_ParamLimits

0x9ff4,	// (0x00096517) main_mup3_pane_g7

0x0007,

0xf6c6,	// (0x0009bbe9) main_mup3_pane_g_ParamLimits

0xf6c6,	// (0x0009bbe9) main_mup3_pane_g

0x418c,	// (0x000906af) main_mup3_pane_t1_ParamLimits

0x418c,	// (0x000906af) main_mup3_pane_t1

0x41f6,	// (0x00090719) main_mup3_pane_t2_ParamLimits

0x41f6,	// (0x00090719) main_mup3_pane_t2

0x42cc,	// (0x000907ef) main_mup3_pane_t4_ParamLimits

0x42cc,	// (0x000907ef) main_mup3_pane_t4

0x432a,	// (0x0009084d) main_mup3_pane_t5_ParamLimits

0x432a,	// (0x0009084d) main_mup3_pane_t5

0x43f2,	// (0x00090915) main_mup3_pane_t6_ParamLimits

0x43f2,	// (0x00090915) main_mup3_pane_t6

0x0005,

0xf6d7,	// (0x0009bbfa) main_mup3_pane_t_ParamLimits

0xf6d7,	// (0x0009bbfa) main_mup3_pane_t

0x44aa,	// (0x000909cd) mup3_progress_pane_ParamLimits

0x44aa,	// (0x000909cd) mup3_progress_pane

0x4542,	// (0x00090a65) popup_mup3_control_window_ParamLimits

0x4542,	// (0x00090a65) popup_mup3_control_window

0xcce1,	// (0x00099204) popup_mup3_text_window

0x4578,	// (0x00090a9b) mup3_progress_pane_t1

0x4597,	// (0x00090aba) mup3_progress_pane_t2

0xcce9,	// (0x0009920c) mup3_progress_pane_t3

0x0002,

0xf6e4,	// (0x0009bc07) mup3_progress_pane_t

0xcd06,	// (0x00099229) mup_progress_pane_cp03

0x9855,	// (0x00095d78) bg_tb_trans_pane_cp04

0x45b6,	// (0x00090ad9) mup3_volume_pane

0x45be,	// (0x00090ae1) popup_mup3_control_window_g1

0x45c7,	// (0x00090aea) mup3_volume_pane_g1

0x45d0,	// (0x00090af3) mup3_volume_pane_g2

0x45d9,	// (0x00090afc) mup3_volume_pane_g3

0x0002,

0xf6eb,	// (0x0009bc0e) mup3_volume_pane_g

0x9855,	// (0x00095d78) bg_tb_trans_pane_cp03

0xcd16,	// (0x00099239) popup_mup3_text_window_g1

0xcd1e,	// (0x00099241) popup_mup3_text_window_t1

0xa0d4,	// (0x000965f7) list_calc_item_pane_g1_ParamLimits

0xc7d1,	// (0x00098cf4) mup_volume_pane_cp_g1

0x3e43,	// (0x00090366) main_touch_calib_pane_t3

0x3e57,	// (0x0009037a) main_touch_calib_pane_t4

0x3e6d,	// (0x00090390) main_touch_calib_pane_t5

0x985f,	// (0x00095d82) aid_cell_size_toolbar2

0x9867,	// (0x00095d8a) aid_popup3_width_pane

0x06a0,	// (0x0008cbc3) aid_zoom_text_msg_primary

0x12a7,	// (0x0008d7ca) vorec_t7

0xa098,	// (0x000965bb) bg_calc_paper_pane_g1_ParamLimits

0xa0a4,	// (0x000965c7) bg_calc_paper_pane_g2_ParamLimits

0xa0b0,	// (0x000965d3) bg_calc_paper_pane_g3_ParamLimits

0xa0bc,	// (0x000965df) bg_calc_paper_pane_g4_ParamLimits

0xa0c8,	// (0x000965eb) bg_calc_paper_pane_g5_ParamLimits

0x0af5,	// (0x0008d018) bg_calc_paper_pane_g6_ParamLimits

0x0b08,	// (0x0008d02b) bg_calc_paper_pane_g7_ParamLimits

0x0b1b,	// (0x0008d03e) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0009b5f6) bg_calc_paper_pane_g_ParamLimits

0x0b2e,	// (0x0008d051) calc_bg_paper_pane_g9_ParamLimits

0x98ba,	// (0x00095ddd) image_qvga_pane_ParamLimits

0x98ba,	// (0x00095ddd) image_qvga_pane

0x9f6b,	// (0x0009648e) bg_popup_sub_pane_cp04_ParamLimits

0xb4eb,	// (0x00097a0e) popup_mup_playback_window_g1_ParamLimits

0xb4f7,	// (0x00097a1a) popup_mup_playback_window_t1_ParamLimits

0xb50c,	// (0x00097a2f) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x0009b954) popup_mup_playback_window_t_ParamLimits

0x9ff4,	// (0x00096517) main_mup2_pane_g3_ParamLimits

0x9ff4,	// (0x00096517) main_mup2_pane_g3

0x15c3,	// (0x0008dae6) popup_toolbar_window_cp04

0xb907,	// (0x00097e2a) popup_call2_audio_second_window_g3_ParamLimits

0xb907,	// (0x00097e2a) popup_call2_audio_second_window_g3

0xbd34,	// (0x00098257) popup_call2_audio_first_window_g4_ParamLimits

0xbd34,	// (0x00098257) popup_call2_audio_first_window_g4

0xc35b,	// (0x0009887e) popup_call2_audio_in_window_g4_ParamLimits

0xc35b,	// (0x0009887e) popup_call2_audio_in_window_g4

0x2ef6,	// (0x0008f419) aid_area_sk_bg_cut_ParamLimits

0x2ef6,	// (0x0008f419) aid_area_sk_bg_cut

0xb521,	// (0x00097a44) aid_area_sk_bg_cut_2_ParamLimits

0xb521,	// (0x00097a44) aid_area_sk_bg_cut_2

0x9855,	// (0x00095d78) aid_placing_details_win

0x9855,	// (0x00095d78) aid_placing_details_win_2

0x9fe6,	// (0x00096509) camera2_autofocus_pane_g1_ParamLimits

0x084d,	// (0x0008cd70) popup_fixed_preview_cale_window_ParamLimits

0x084d,	// (0x0008cd70) popup_fixed_preview_cale_window

0xb2cc,	// (0x000977ef) navi_slider_pane_g3

0xb2d5,	// (0x000977f8) navi_slider_pane_g4

0xb2de,	// (0x00097801) navi_slider_pane_g5

0xb2cc,	// (0x000977ef) navi_slider_pane_g6

0xa323,	// (0x00096846) navi_slider_pane_g7

0xb422,	// (0x00097945) mup_scale_pane_g3

0xb42b,	// (0x0009794e) mup_scale_pane_g4

0xb434,	// (0x00097957) mup_scale_pane_g5

0x2c55,	// (0x0008f178) mup_scale_pane_g6

0x2c5e,	// (0x0008f181) mup_scale_pane_g7

0xa99c,	// (0x00096ebf) cams2_slider_pane_g3

0xa99c,	// (0x00096ebf) cams2_slider_pane_g4

0xa99c,	// (0x00096ebf) cams2_slider_pane_g5

0xa99c,	// (0x00096ebf) cams2_slider_pane_g6

0xa99c,	// (0x00096ebf) cams2_slider_pane_g7

0xa99c,	// (0x00096ebf) camera2_autofocus_pane_cp_g1

0xc633,	// (0x00098b56) bg_popup_preview_window_pane_cp02_ParamLimits

0xc633,	// (0x00098b56) bg_popup_preview_window_pane_cp02

0xcd2c,	// (0x0009924f) list_fp_cale_pane_ParamLimits

0xcd2c,	// (0x0009924f) list_fp_cale_pane

0xcd38,	// (0x0009925b) popup_fixed_preview_cale_window_t1_ParamLimits

0xcd38,	// (0x0009925b) popup_fixed_preview_cale_window_t1

0x45e2,	// (0x00090b05) popup_fixed_preview_cale_window_t2_ParamLimits

0x45e2,	// (0x00090b05) popup_fixed_preview_cale_window_t2

0x45f7,	// (0x00090b1a) popup_fixed_preview_cale_window_t3_ParamLimits

0x45f7,	// (0x00090b1a) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f2,	// (0x0009bc15) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f2,	// (0x0009bc15) popup_fixed_preview_cale_window_t

0x460e,	// (0x00090b31) list_single_fp_cale_pane_ParamLimits

0x460e,	// (0x00090b31) list_single_fp_cale_pane

0xcd56,	// (0x00099279) list_single_fp_cale_pane_g1_ParamLimits

0xcd56,	// (0x00099279) list_single_fp_cale_pane_g1

0xcd62,	// (0x00099285) list_single_fp_cale_pane_g2_ParamLimits

0xcd62,	// (0x00099285) list_single_fp_cale_pane_g2

0x0002,

0xf6f9,	// (0x0009bc1c) list_single_fp_cale_pane_g_ParamLimits

0xf6f9,	// (0x0009bc1c) list_single_fp_cale_pane_g

0xcd7b,	// (0x0009929e) list_single_fp_cale_pane_t1_ParamLimits

0xcd7b,	// (0x0009929e) list_single_fp_cale_pane_t1

0xcd8d,	// (0x000992b0) list_single_fp_cale_pane_t2_ParamLimits

0xcd8d,	// (0x000992b0) list_single_fp_cale_pane_t2

0x0001,

0xf700,	// (0x0009bc23) list_single_fp_cale_pane_t_ParamLimits

0xf700,	// (0x0009bc23) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9855,	// (0x00095d78) main_dialer_pane

0x9855,	// (0x00095d78) aid_cell_size_keypad

0x9855,	// (0x00095d78) dialer_ne_pane

0x9855,	// (0x00095d78) grid_dialer_command_1_pane

0x9855,	// (0x00095d78) grid_dialer_command_2_pane

0x9855,	// (0x00095d78) grid_dialer_keypad_pane

0x4623,	// (0x00090b46) bg_popup_call_pane_cp06_ParamLimits

0x4623,	// (0x00090b46) bg_popup_call_pane_cp06

0x4623,	// (0x00090b46) dialer_ne_clear_pane_ParamLimits

0x4623,	// (0x00090b46) dialer_ne_clear_pane

0xa99c,	// (0x00096ebf) dialer_ne_pane_g1

0xb39c,	// (0x000978bf) dialer_ne_pane_t1_ParamLimits

0xb39c,	// (0x000978bf) dialer_ne_pane_t1

0x4631,	// (0x00090b54) dialer_ne_pane_t2_ParamLimits

0x4631,	// (0x00090b54) dialer_ne_pane_t2

0x4659,	// (0x00090b7c) dialer_ne_pane_t3_ParamLimits

0x4659,	// (0x00090b7c) dialer_ne_pane_t3

0x0002,

0xf705,	// (0x0009bc28) dialer_ne_pane_t_ParamLimits

0xf705,	// (0x0009bc28) dialer_ne_pane_t

0x4659,	// (0x00090b7c) dialer_ne_pane_t3_copy1_ParamLimits

0x4659,	// (0x00090b7c) dialer_ne_pane_t3_copy1

0xcdc0,	// (0x000992e3) cell_dialer_keypad_pane_ParamLimits

0xcdc0,	// (0x000992e3) cell_dialer_keypad_pane

0x98ba,	// (0x00095ddd) cell_dialer_command_1_pane_ParamLimits

0x98ba,	// (0x00095ddd) cell_dialer_command_1_pane

0xcdd7,	// (0x000992fa) cell_dialer_command_2_pane_ParamLimits

0xcdd7,	// (0x000992fa) cell_dialer_command_2_pane

0x98ba,	// (0x00095ddd) bg_button_pane_cp02_ParamLimits

0x98ba,	// (0x00095ddd) bg_button_pane_cp02

0x9fe6,	// (0x00096509) cell_dialer_keypad_pane_g1_ParamLimits

0x9fe6,	// (0x00096509) cell_dialer_keypad_pane_g1

0x98ba,	// (0x00095ddd) bg_button_pane_cp03_ParamLimits

0x98ba,	// (0x00095ddd) bg_button_pane_cp03

0x9fe6,	// (0x00096509) cell_dialer_command_1_pane_g1_ParamLimits

0x9fe6,	// (0x00096509) cell_dialer_command_1_pane_g1

0x9855,	// (0x00095d78) bg_button_pane_cp04

0xa99c,	// (0x00096ebf) cell_dialer_command_2_pane_g1

0x9855,	// (0x00095d78) bg_button_pane_cp06

0xa99c,	// (0x00096ebf) dialer_ne_clear_pane_g1

0x2964,	// (0x0008ee87) navi_pane_g2

0x2992,	// (0x0008eeb5) navi_pane_g3

0x0002,

0xf334,	// (0x0009b857) navi_pane_g

0x29bd,	// (0x0008eee0) navi_pane_mv_g2

0x29e4,	// (0x0008ef07) navi_pane_mv_g5

0x29ec,	// (0x0008ef0f) navi_pane_mv_t1

0xa07a,	// (0x0009659d) main_clock2_pane

0x98ba,	// (0x00095ddd) main_clock2_list_pane_ParamLimits

0x98ba,	// (0x00095ddd) main_clock2_list_pane

0x46ea,	// (0x00090c0d) main_clock2_pane_t1_ParamLimits

0x46ea,	// (0x00090c0d) main_clock2_pane_t1

0x4725,	// (0x00090c48) main_clock2_pane_t2_ParamLimits

0x4725,	// (0x00090c48) main_clock2_pane_t2

0x0004,

0xf711,	// (0x0009bc34) main_clock2_pane_t_ParamLimits

0xf711,	// (0x0009bc34) main_clock2_pane_t

0x47c4,	// (0x00090ce7) popup_clock_analogue_window_cp03_ParamLimits

0x47c4,	// (0x00090ce7) popup_clock_analogue_window_cp03

0x47e9,	// (0x00090d0c) popup_clock_digital_window_cp02_ParamLimits

0x47e9,	// (0x00090d0c) popup_clock_digital_window_cp02

0x4862,	// (0x00090d85) main_clock2_list_single_pane_ParamLimits

0x4862,	// (0x00090d85) main_clock2_list_single_pane

0xa966,	// (0x00096e89) list_highlight_pane_cp05

0xce18,	// (0x0009933b) main_clock2_list_single_pane_t1

0x15c3,	// (0x0008dae6) popup_toolbar_window_cp04_ParamLimits

0x9ff4,	// (0x00096517) camera2_autofocus_pane_g2_ParamLimits

0x9ff4,	// (0x00096517) camera2_autofocus_pane_g2

0x9ff4,	// (0x00096517) camera2_autofocus_pane_g3_ParamLimits

0x9ff4,	// (0x00096517) camera2_autofocus_pane_g3

0x9ff4,	// (0x00096517) camera2_autofocus_pane_g4_ParamLimits

0x9ff4,	// (0x00096517) camera2_autofocus_pane_g4

0x9ff4,	// (0x00096517) camera2_autofocus_pane_g5_ParamLimits

0x9ff4,	// (0x00096517) camera2_autofocus_pane_g5

0x0004,

0xf655,	// (0x0009bb78) camera2_autofocus_pane_g_ParamLimits

0xf655,	// (0x0009bb78) camera2_autofocus_pane_g

0x3ee3,	// (0x00090406) camera2_autofocus_pane_cp_g2

0x3eeb,	// (0x0009040e) camera2_autofocus_pane_cp_g3

0x3ef3,	// (0x00090416) camera2_autofocus_pane_cp_g4

0x3efb,	// (0x0009041e) camera2_autofocus_pane_cp_g5

0x0004,

0xf6bb,	// (0x0009bbde) camera2_autofocus_pane_cp_g

0x9855,	// (0x00095d78) popup_dialer_spcha_window

0x9855,	// (0x00095d78) bg_popup_sub_pane_cp07

0x9855,	// (0x00095d78) list_spcha_pane

0xce26,	// (0x00099349) list_single_spcha_pane_ParamLimits

0xce26,	// (0x00099349) list_single_spcha_pane

0x9855,	// (0x00095d78) list_highlight_pane_cp06

0xaefa,	// (0x0009741d) list_single_spcha_pane_t1

0xc105,	// (0x00098628) popup_call2_audio_out_window_g4_ParamLimits

0xc105,	// (0x00098628) popup_call2_audio_out_window_g4

0x9855,	// (0x00095d78) main_imed2_pane

0xa38c,	// (0x000968af) popup_imed_adjust2_window

0x37bf,	// (0x0008fce2) popup_imed_trans_window_ParamLimits

0x37bf,	// (0x0008fce2) popup_imed_trans_window

0xc8a6,	// (0x00098dc9) popup_blid_sat_info2_window_t1

0xc8b4,	// (0x00098dd7) popup_blid_sat_info2_window_t2

0x000a,

0xf5ea,	// (0x0009bb0d) popup_blid_sat_info2_window_t

0x491d,	// (0x00090e40) aid_size_cell_colour_35

0x493d,	// (0x00090e60) aid_size_cell_colour_112

0x495d,	// (0x00090e80) aid_size_cell_effect

0xb3b0,	// (0x000978d3) bg_tb_trans_pane_cp02

0xae1f,	// (0x00097342) heading_imed_pane

0x497d,	// (0x00090ea0) listscroll_imed_pane

0xce38,	// (0x0009935b) heading_imed_pane_g1

0xce40,	// (0x00099363) heading_imed_pane_t1

0xce4e,	// (0x00099371) grid_imed_colour_35_pane_ParamLimits

0xce4e,	// (0x00099371) grid_imed_colour_35_pane

0x4989,	// (0x00090eac) grid_imed_effect_pane

0xce6a,	// (0x0009938d) list_imed_aspect_pane

0x49a0,	// (0x00090ec3) scroll_pane_cp027_ParamLimits

0x49a0,	// (0x00090ec3) scroll_pane_cp027

0x49b1,	// (0x00090ed4) cell_imed_effect_pane_ParamLimits

0x49b1,	// (0x00090ed4) cell_imed_effect_pane

0xce72,	// (0x00099395) cell_imed_colour_pane_ParamLimits

0xce72,	// (0x00099395) cell_imed_colour_pane

0xcebc,	// (0x000993df) cell_imed_colour_pane_g1_ParamLimits

0xcebc,	// (0x000993df) cell_imed_colour_pane_g1

0xcecd,	// (0x000993f0) hgihlgiht_grid_pane_cp016_ParamLimits

0xcecd,	// (0x000993f0) hgihlgiht_grid_pane_cp016

0x49dc,	// (0x00090eff) cell_imed_effect_pane_g1

0x49e4,	// (0x00090f07) grid_highlight_pane_cp017

0xcede,	// (0x00099401) list_imed_single_pane_ParamLimits

0xcede,	// (0x00099401) list_imed_single_pane

0x9855,	// (0x00095d78) list_highlight_pane_cp07

0xcef2,	// (0x00099415) list_imed_aspect_pane_comp1_t1

0xb3b0,	// (0x000978d3) bg_tb_trans_pane_cp05

0xcf14,	// (0x00099437) popup_imed_adjust2_window_g1

0xcf3b,	// (0x0009945e) popup_imed_adjust2_window_t1

0xcf53,	// (0x00099476) slider_imed_adjust_pane

0xcf67,	// (0x0009948a) slider_imed_adjust_pane_g1

0xcf77,	// (0x0009949a) slider_imed_adjust_pane_g2

0xcf87,	// (0x000994aa) slider_imed_adjust_pane_g3

0xcf98,	// (0x000994bb) slider_imed_adjust_pane_g4

0x0003,

0xf72e,	// (0x0009bc51) slider_imed_adjust_pane_g

0x49ed,	// (0x00090f10) aid_size_cell_clipart2

0xcfa9,	// (0x000994cc) grid_imed_clipart_pane

0xcfb3,	// (0x000994d6) scroll_pane_cp031

0x49f9,	// (0x00090f1c) cell_imed_clipart_pane_ParamLimits

0x49f9,	// (0x00090f1c) cell_imed_clipart_pane

0x4a16,	// (0x00090f39) cell_imed_clipart_pane_g1

0x9855,	// (0x00095d78) grid_highlight_pane_cp014

0x46c8,	// (0x00090beb) main_clock2_pane_g1_ParamLimits

0x46c8,	// (0x00090beb) main_clock2_pane_g1

0x4809,	// (0x00090d2c) aid_call2_pane_cp10

0x481b,	// (0x00090d3e) aid_call_pane_cp10

0xb1f8,	// (0x0009771b) popup_clock_analogue_window_cp10_g1

0xb1f8,	// (0x0009771b) popup_clock_analogue_window_cp10_g2

0x482d,	// (0x00090d50) popup_clock_analogue_window_cp10_g3

0x482d,	// (0x00090d50) popup_clock_analogue_window_cp10_g4

0xb1f8,	// (0x0009771b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71c,	// (0x0009bc3f) popup_clock_analogue_window_cp10_g

0x4843,	// (0x00090d66) popup_clock_analogue_window_cp10_t1

0x4874,	// (0x00090d97) clock_digital_number_pane_cp10_ParamLimits

0x4874,	// (0x00090d97) clock_digital_number_pane_cp10

0x488e,	// (0x00090db1) clock_digital_number_pane_cp11_ParamLimits

0x488e,	// (0x00090db1) clock_digital_number_pane_cp11

0x48a8,	// (0x00090dcb) clock_digital_number_pane_cp12_ParamLimits

0x48a8,	// (0x00090dcb) clock_digital_number_pane_cp12

0x48c4,	// (0x00090de7) clock_digital_number_pane_cp13_ParamLimits

0x48c4,	// (0x00090de7) clock_digital_number_pane_cp13

0x48e0,	// (0x00090e03) clock_digital_separator_pane_cp10_ParamLimits

0x48e0,	// (0x00090e03) clock_digital_separator_pane_cp10

0x48fc,	// (0x00090e1f) popup_clock_digital_window_cp02_t1_ParamLimits

0x48fc,	// (0x00090e1f) popup_clock_digital_window_cp02_t1

0x9f63,	// (0x00096486) clock_digital_number_pane_cp10_g1

0x9f63,	// (0x00096486) clock_digital_number_pane_cp10_g2

0x0001,

0xf737,	// (0x0009bc5a) clock_digital_number_pane_cp10_g

0x9f63,	// (0x00096486) clock_digital_separator_pane_cp10_g1

0x9f63,	// (0x00096486) clock_digital_separator_pane_g2_cp10

0xb293,	// (0x000977b6) navi_pane_vded_g4

0xb29c,	// (0x000977bf) navi_pane_vded_g5

0xb2a5,	// (0x000977c8) navi_pane_vded_t1

0x9855,	// (0x00095d78) main_vded_pane

0x4a1f,	// (0x00090f42) main_vded_pane_g1

0x4a2b,	// (0x00090f4e) main_vded_pane_g2

0x4a37,	// (0x00090f5a) main_vded_pane_g3

0x0002,

0xf73c,	// (0x0009bc5f) main_vded_pane_g

0x4a43,	// (0x00090f66) main_vded_pane_t1

0x4a51,	// (0x00090f74) main_vded_pane_t2

0x0001,

0xf743,	// (0x0009bc66) main_vded_pane_t

0x4a5f,	// (0x00090f82) vded_slider_pane

0x4a69,	// (0x00090f8c) vded_video_pane

0xcfbb,	// (0x000994de) vded_video_pane_g1

0x4a75,	// (0x00090f98) vded_video_pane_g2

0xa99c,	// (0x00096ebf) vded_video_pane_g3

0x0002,

0xf748,	// (0x0009bc6b) vded_video_pane_g

0xcfc5,	// (0x000994e8) vded_slider_pane_g1

0xc7d1,	// (0x00098cf4) vded_slider_pane_g2

0xcfce,	// (0x000994f1) vded_slider_pane_g3

0xcfd7,	// (0x000994fa) vded_slider_pane_g4

0xcfe0,	// (0x00099503) vded_slider_pane_g5

0x0004,

0xf74f,	// (0x0009bc72) vded_slider_pane_g

0x452c,	// (0x00090a4f) mup3_rocker_pane_ParamLimits

0x452c,	// (0x00090a4f) mup3_rocker_pane

0x4a7e,	// (0x00090fa1) mup3_control_keys_pane_g1

0x4a86,	// (0x00090fa9) mup3_control_keys_pane_g2

0x4a8e,	// (0x00090fb1) mup3_control_keys_pane_g3

0x4a96,	// (0x00090fb9) mup3_control_keys_pane_g4

0x0003,

0xf75a,	// (0x0009bc7d) mup3_control_keys_pane_g

0x0882,	// (0x0008cda5) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0882,	// (0x0008cda5) popup_toolbar2_fixed_window_cp01

0x4562,	// (0x00090a85) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4562,	// (0x00090a85) popup_toolbar2_fixed_window_cp02

0xba8e,	// (0x00097fb1) popup_call2_audio_second_window_t4_ParamLimits

0xba8e,	// (0x00097fb1) popup_call2_audio_second_window_t4

0xbfca,	// (0x000984ed) popup_call2_audio_first_window_t6_ParamLimits

0xbfca,	// (0x000984ed) popup_call2_audio_first_window_t6

0xc208,	// (0x0009872b) popup_call2_audio_out_window_t6_ParamLimits

0xc208,	// (0x0009872b) popup_call2_audio_out_window_t6

0x9855,	// (0x00095d78) main_vitu_pane

0x98ba,	// (0x00095ddd) aid_size_cell_itu_ParamLimits

0x98ba,	// (0x00095ddd) aid_size_cell_itu

0x98ba,	// (0x00095ddd) bg_popup_window_pane_cp08_ParamLimits

0x98ba,	// (0x00095ddd) bg_popup_window_pane_cp08

0x98ba,	// (0x00095ddd) field_vitu_entry_pane_ParamLimits

0x98ba,	// (0x00095ddd) field_vitu_entry_pane

0x98ba,	// (0x00095ddd) grid_vitu_function_pane_ParamLimits

0x98ba,	// (0x00095ddd) grid_vitu_function_pane

0x98ba,	// (0x00095ddd) grid_vitu_itu_pane_ParamLimits

0x98ba,	// (0x00095ddd) grid_vitu_itu_pane

0x98ba,	// (0x00095ddd) cell_vitu_itu_pane_ParamLimits

0x98ba,	// (0x00095ddd) cell_vitu_itu_pane

0x98ba,	// (0x00095ddd) cell_vitu_function_pane_ParamLimits

0x98ba,	// (0x00095ddd) cell_vitu_function_pane

0x98ba,	// (0x00095ddd) bg_popup_sub_pane_cp08_ParamLimits

0x98ba,	// (0x00095ddd) bg_popup_sub_pane_cp08

0xa96e,	// (0x00096e91) field_vitu_entry_pane_t1_ParamLimits

0xa96e,	// (0x00096e91) field_vitu_entry_pane_t1

0xcfe9,	// (0x0009950c) field_vitu_entry_pane_t2_ParamLimits

0xcfe9,	// (0x0009950c) field_vitu_entry_pane_t2

0x0001,

0xf763,	// (0x0009bc86) field_vitu_entry_pane_t_ParamLimits

0xf763,	// (0x0009bc86) field_vitu_entry_pane_t

0xc70e,	// (0x00098c31) bg_button_pane_cp05_ParamLimits

0xc70e,	// (0x00098c31) bg_button_pane_cp05

0xd006,	// (0x00099529) cell_vitu_itu_pane_g1

0xb388,	// (0x000978ab) cell_vitu_itu_pane_t1_ParamLimits

0xb388,	// (0x000978ab) cell_vitu_itu_pane_t1

0xb388,	// (0x000978ab) cell_vitu_itu_pane_t2_ParamLimits

0xb388,	// (0x000978ab) cell_vitu_itu_pane_t2

0x0002,

0xf768,	// (0x0009bc8b) cell_vitu_itu_pane_t_ParamLimits

0xf768,	// (0x0009bc8b) cell_vitu_itu_pane_t

0x9855,	// (0x00095d78) bg_button_pane_cp07

0xa99c,	// (0x00096ebf) cell_vitu_function_pane_g1

0xa024,	// (0x00096547) main_calc_pane_g1

0x0694,	// (0x0008cbb7) aid_visual_content_pane

0x9855,	// (0x00095d78) main_vradio_pane

0x9fe6,	// (0x00096509) main_vradio_pane_g1_ParamLimits

0x9fe6,	// (0x00096509) main_vradio_pane_g1

0x9ff4,	// (0x00096517) main_vradio_pane_g2_ParamLimits

0x9ff4,	// (0x00096517) main_vradio_pane_g2

0x0001,

0xf76f,	// (0x0009bc92) main_vradio_pane_g_ParamLimits

0xf76f,	// (0x0009bc92) main_vradio_pane_g

0xa96e,	// (0x00096e91) main_vradio_pane_t1_ParamLimits

0xa96e,	// (0x00096e91) main_vradio_pane_t1

0xa96e,	// (0x00096e91) main_vradio_pane_t2_ParamLimits

0xa96e,	// (0x00096e91) main_vradio_pane_t2

0xb39c,	// (0x000978bf) main_vradio_pane_t3_ParamLimits

0xb39c,	// (0x000978bf) main_vradio_pane_t3

0x0002,

0xf774,	// (0x0009bc97) main_vradio_pane_t_ParamLimits

0xf774,	// (0x0009bc97) main_vradio_pane_t

0x98ba,	// (0x00095ddd) vradio_rocker_control_pane_ParamLimits

0x98ba,	// (0x00095ddd) vradio_rocker_control_pane

0x98ba,	// (0x00095ddd) vradio_station_info_pane_ParamLimits

0x98ba,	// (0x00095ddd) vradio_station_info_pane

0x98ba,	// (0x00095ddd) vradio_frequency_info_pane_ParamLimits

0x98ba,	// (0x00095ddd) vradio_frequency_info_pane

0xa99c,	// (0x00096ebf) vradio_station_info_pane_g1

0xb388,	// (0x000978ab) vradio_station_info_pane_t1_ParamLimits

0xb388,	// (0x000978ab) vradio_station_info_pane_t1

0xb39c,	// (0x000978bf) vradio_station_info_pane_t2_ParamLimits

0xb39c,	// (0x000978bf) vradio_station_info_pane_t2

0x0001,

0xf77b,	// (0x0009bc9e) vradio_station_info_pane_t_ParamLimits

0xf77b,	// (0x0009bc9e) vradio_station_info_pane_t

0x9855,	// (0x00095d78) vradio_tuning_pane

0x4aa6,	// (0x00090fc9) vradio_rocker_control_pane_g1

0xd022,	// (0x00099545) vradio_rocker_control_pane_g2

0x4ab0,	// (0x00090fd3) vradio_rocker_control_pane_g3

0x4aba,	// (0x00090fdd) vradio_rocker_control_pane_g4

0x4ac4,	// (0x00090fe7) vradio_rocker_control_pane_g5

0x0004,

0xf780,	// (0x0009bca3) vradio_rocker_control_pane_g

0xa99c,	// (0x00096ebf) vradio_frequency_info_pane_g1

0xa96e,	// (0x00096e91) vradio_frequency_info_pane_t1_ParamLimits

0xa96e,	// (0x00096e91) vradio_frequency_info_pane_t1

0x4ace,	// (0x00090ff1) vradio_tuning_pane_g1

0x4ad9,	// (0x00090ffc) vradio_tuning_pane_t1

0x9873,	// (0x00095d96) area_side_right_pane_ParamLimits

0x9873,	// (0x00095d96) area_side_right_pane

0xc5fa,	// (0x00098b1d) status_small_pane_g1

0xc602,	// (0x00098b25) status_small_pane_g2

0xc60b,	// (0x00098b2e) status_small_pane_g3

0xc614,	// (0x00098b37) status_small_pane_g4

0x0003,

0xf54c,	// (0x0009ba6f) status_small_pane_g

0xc61d,	// (0x00098b40) status_small_pane_t1

0x9855,	// (0x00095d78) main_video3_pane

0xd02a,	// (0x0009954d) cams_zoom_vslider_pane

0xd032,	// (0x00099555) image3_wide_pane_ParamLimits

0xd032,	// (0x00099555) image3_wide_pane

0xd04c,	// (0x0009956f) image3_wide_small_pane

0xd058,	// (0x0009957b) main_video3_pane_g1_ParamLimits

0xd058,	// (0x0009957b) main_video3_pane_g1

0xd074,	// (0x00099597) main_video3_pane_g2_ParamLimits

0xd074,	// (0x00099597) main_video3_pane_g2

0x0001,

0xf78b,	// (0x0009bcae) main_video3_pane_g_ParamLimits

0xf78b,	// (0x0009bcae) main_video3_pane_g

0xd090,	// (0x000995b3) main_video3_pane_t1_ParamLimits

0xd090,	// (0x000995b3) main_video3_pane_t1

0xd0bb,	// (0x000995de) main_video3_pane_t2_ParamLimits

0xd0bb,	// (0x000995de) main_video3_pane_t2

0xd0e8,	// (0x0009960b) main_video3_pane_t3_ParamLimits

0xd0e8,	// (0x0009960b) main_video3_pane_t3

0x0002,

0xf790,	// (0x0009bcb3) main_video3_pane_t_ParamLimits

0xf790,	// (0x0009bcb3) main_video3_pane_t

0xd115,	// (0x00099638) cams_zoom_vslider_pane_g1

0xd11e,	// (0x00099641) cams_zoom_vslider_pane_g2

0x0001,

0xf797,	// (0x0009bcba) cams_zoom_vslider_pane_g

0xd126,	// (0x00099649) small_slider_vertical_pane

0xa99c,	// (0x00096ebf) small_slider_vertical_pane_g1

0xa99c,	// (0x00096ebf) small_slider_vertical_pane_g2

0xd12e,	// (0x00099651) small_slider_vertical_pane_g3

0x0002,

0xf79c,	// (0x0009bcbf) small_slider_vertical_pane_g

0x9855,	// (0x00095d78) main_hwr_training_pane

0xd137,	// (0x0009965a) hwr_training_instruct_pane_ParamLimits

0xd137,	// (0x0009965a) hwr_training_instruct_pane

0x4ae8,	// (0x0009100b) hwr_training_navi_pane_ParamLimits

0x4ae8,	// (0x0009100b) hwr_training_navi_pane

0x4b07,	// (0x0009102a) hwr_training_write_pane_ParamLimits

0x4b07,	// (0x0009102a) hwr_training_write_pane

0x9855,	// (0x00095d78) bg_frame_shadow_pane

0xd16e,	// (0x00099691) hwr_training_write_pane_g1

0xd176,	// (0x00099699) hwr_training_write_pane_g2

0xd17e,	// (0x000996a1) hwr_training_write_pane_g3

0xd186,	// (0x000996a9) hwr_training_write_pane_g4

0xd18e,	// (0x000996b1) hwr_training_write_pane_g5

0xd196,	// (0x000996b9) hwr_training_write_pane_g6

0xd19e,	// (0x000996c1) hwr_training_write_pane_g7

0x0006,

0xf7a3,	// (0x0009bcc6) hwr_training_write_pane_g

0xa43a,	// (0x0009695d) hwr_training_navi_pane_g1_ParamLimits

0xa43a,	// (0x0009695d) hwr_training_navi_pane_g1

0xa44c,	// (0x0009696f) hwr_training_navi_pane_g2_ParamLimits

0xa44c,	// (0x0009696f) hwr_training_navi_pane_g2

0xa45e,	// (0x00096981) hwr_training_navi_pane_g3_ParamLimits

0xa45e,	// (0x00096981) hwr_training_navi_pane_g3

0xa46e,	// (0x00096991) hwr_training_navi_pane_g4_ParamLimits

0xa46e,	// (0x00096991) hwr_training_navi_pane_g4

0x0004,

0xf7b2,	// (0x0009bcd5) hwr_training_navi_pane_g_ParamLimits

0xf7b2,	// (0x0009bcd5) hwr_training_navi_pane_g

0xa47b,	// (0x0009699e) hwr_training_navi_pane_t1

0x4b4f,	// (0x00091072) list_single_hwr_training_instruct_pane_ParamLimits

0x4b4f,	// (0x00091072) list_single_hwr_training_instruct_pane

0xd1a6,	// (0x000996c9) list_single_hwr_training_instruct_pane_t1

0xc9ad,	// (0x00098ed0) bg_frame_shadow_pane_g1

0xd1b5,	// (0x000996d8) bg_frame_shadow_pane_g2

0xd1bd,	// (0x000996e0) bg_frame_shadow_pane_g3

0xd1c5,	// (0x000996e8) bg_frame_shadow_pane_g4

0xd1cd,	// (0x000996f0) bg_frame_shadow_pane_g5

0xd1d5,	// (0x000996f8) bg_frame_shadow_pane_g6

0xd1dd,	// (0x00099700) bg_frame_shadow_pane_g7

0xa14d,	// (0x00096670) bg_frame_shadow_pane_g8

0x0007,

0xf7bd,	// (0x0009bce0) bg_frame_shadow_pane_g

0x9855,	// (0x00095d78) main_video_tele_dialer_pane

0x4b6b,	// (0x0009108e) aid_size_cell_video_keypad_ParamLimits

0x4b6b,	// (0x0009108e) aid_size_cell_video_keypad

0x4b85,	// (0x000910a8) grid_video_dialer_keypad_pane_ParamLimits

0x4b85,	// (0x000910a8) grid_video_dialer_keypad_pane

0x4bd1,	// (0x000910f4) video_down_pane_cp_ParamLimits

0x4bd1,	// (0x000910f4) video_down_pane_cp

0x4c03,	// (0x00091126) cell_video_dialer_keypad_pane_ParamLimits

0x4c03,	// (0x00091126) cell_video_dialer_keypad_pane

0xd1e5,	// (0x00099708) bg_button_pane_cp08_ParamLimits

0xd1e5,	// (0x00099708) bg_button_pane_cp08

0x4c29,	// (0x0009114c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4c29,	// (0x0009114c) cell_video_dialer_keypad_pane_g1

0x4516,	// (0x00090a39) mup3_rocker2_pane_ParamLimits

0x4516,	// (0x00090a39) mup3_rocker2_pane

0xa99c,	// (0x00096ebf) mup3_rocker2_pane_g1

0x368c,	// (0x0008fbaf) main_dialer2_pane

0x9855,	// (0x00095d78) main_mp4_pane

0xa4a7,	// (0x000969ca) main_mp4_pane_g1_ParamLimits

0xa4a7,	// (0x000969ca) main_mp4_pane_g1

0xa4a7,	// (0x000969ca) main_mp4_pane_g2_ParamLimits

0xa4a7,	// (0x000969ca) main_mp4_pane_g2

0x4c64,	// (0x00091187) main_mp4_pane_g3_ParamLimits

0x4c64,	// (0x00091187) main_mp4_pane_g3

0xa4b5,	// (0x000969d8) main_mp4_pane_g4_ParamLimits

0xa4b5,	// (0x000969d8) main_mp4_pane_g4

0xa4e3,	// (0x00096a06) main_mp4_pane_g5_ParamLimits

0xa4e3,	// (0x00096a06) main_mp4_pane_g5

0x0007,

0xf7dd,	// (0x0009bd00) main_mp4_pane_g_ParamLimits

0xf7dd,	// (0x0009bd00) main_mp4_pane_g

0xa557,	// (0x00096a7a) main_mp4_pane_t1_ParamLimits

0xa557,	// (0x00096a7a) main_mp4_pane_t1

0xa5b3,	// (0x00096ad6) main_mp4_pane_t2_ParamLimits

0xa5b3,	// (0x00096ad6) main_mp4_pane_t2

0xd1f1,	// (0x00099714) main_mp4_pane_t3_ParamLimits

0xd1f1,	// (0x00099714) main_mp4_pane_t3

0xa605,	// (0x00096b28) main_mp4_pane_t4_ParamLimits

0xa605,	// (0x00096b28) main_mp4_pane_t4

0x0003,

0xf7ee,	// (0x0009bd11) main_mp4_pane_t_ParamLimits

0xf7ee,	// (0x0009bd11) main_mp4_pane_t

0xa645,	// (0x00096b68) mp4_progress_pane_ParamLimits

0xa645,	// (0x00096b68) mp4_progress_pane

0xa68f,	// (0x00096bb2) mp4_rocker_pane_ParamLimits

0xa68f,	// (0x00096bb2) mp4_rocker_pane

0xd21f,	// (0x00099742) mp4_progress_pane_t1

0xd238,	// (0x0009975b) mp4_progress_pane_t2

0x0001,

0xf7f7,	// (0x0009bd1a) mp4_progress_pane_t

0xd251,	// (0x00099774) mup_progress_pane_cp04

0xa99c,	// (0x00096ebf) mp4_rocker_pane_g1

0x4cae,	// (0x000911d1) aid_cell_size_keypad2_ParamLimits

0x4cae,	// (0x000911d1) aid_cell_size_keypad2

0x4cc4,	// (0x000911e7) dialer2_ne_pane_ParamLimits

0x4cc4,	// (0x000911e7) dialer2_ne_pane

0x4cdc,	// (0x000911ff) grid_dialer2_keypad_pane_ParamLimits

0x4cdc,	// (0x000911ff) grid_dialer2_keypad_pane

0xc70e,	// (0x00098c31) bg_popup_call_pane_cp07_ParamLimits

0xc70e,	// (0x00098c31) bg_popup_call_pane_cp07

0x4cf8,	// (0x0009121b) dialer2_ne_pane_t1_ParamLimits

0x4cf8,	// (0x0009121b) dialer2_ne_pane_t1

0x4d38,	// (0x0009125b) cell_dialer2_keypad_pane_ParamLimits

0x4d38,	// (0x0009125b) cell_dialer2_keypad_pane

0xd276,	// (0x00099799) bg_button_pane_pane_cp04_ParamLimits

0xd276,	// (0x00099799) bg_button_pane_pane_cp04

0x4d5e,	// (0x00091281) cell_dialer2_keypad_pane_g1_ParamLimits

0x4d5e,	// (0x00091281) cell_dialer2_keypad_pane_g1

0x14aa,	// (0x0008d9cd) aid_placing_vt_set_content_ParamLimits

0x14aa,	// (0x0008d9cd) aid_placing_vt_set_content

0x14ce,	// (0x0008d9f1) aid_placing_vt_set_title_ParamLimits

0x14ce,	// (0x0008d9f1) aid_placing_vt_set_title

0x9855,	// (0x00095d78) main_image3_pane

0x4e24,	// (0x00091347) area_side_right_pane_cp01_ParamLimits

0x4e24,	// (0x00091347) area_side_right_pane_cp01

0xa4a7,	// (0x000969ca) main_image3_pane_g1_ParamLimits

0xa4a7,	// (0x000969ca) main_image3_pane_g1

0x4e3d,	// (0x00091360) main_image3_pane_g2_ParamLimits

0x4e3d,	// (0x00091360) main_image3_pane_g2

0x4e65,	// (0x00091388) main_image3_pane_g3_ParamLimits

0x4e65,	// (0x00091388) main_image3_pane_g3

0x4e8f,	// (0x000913b2) main_image3_pane_g4_ParamLimits

0x4e8f,	// (0x000913b2) main_image3_pane_g4

0x0003,

0xf806,	// (0x0009bd29) main_image3_pane_g_ParamLimits

0xf806,	// (0x0009bd29) main_image3_pane_g

0x4eb9,	// (0x000913dc) main_image3_pane_t1_ParamLimits

0x4eb9,	// (0x000913dc) main_image3_pane_t1

0x4f11,	// (0x00091434) main_image3_pane_t2_ParamLimits

0x4f11,	// (0x00091434) main_image3_pane_t2

0x4f63,	// (0x00091486) main_image3_pane_t3_ParamLimits

0x4f63,	// (0x00091486) main_image3_pane_t3

0x0003,

0xf80f,	// (0x0009bd32) main_image3_pane_t_ParamLimits

0xf80f,	// (0x0009bd32) main_image3_pane_t

0x98ba,	// (0x00095ddd) grid_sctrl_middle_pane_cp01_ParamLimits

0x98ba,	// (0x00095ddd) grid_sctrl_middle_pane_cp01

0x4feb,	// (0x0009150e) cell_sctrl_middle_pane_cp01_ParamLimits

0x4feb,	// (0x0009150e) cell_sctrl_middle_pane_cp01

0x5008,	// (0x0009152b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5008,	// (0x0009152b) cell_sctrl_middle_pane_cp01_g1

0x9855,	// (0x00095d78) main_call4_pane

0x501d,	// (0x00091540) aid_size_button_call4_ParamLimits

0x501d,	// (0x00091540) aid_size_button_call4

0x5050,	// (0x00091573) call4_windows_pane_ParamLimits

0x5050,	// (0x00091573) call4_windows_pane

0x506f,	// (0x00091592) grid_call4_button_pane_ParamLimits

0x506f,	// (0x00091592) grid_call4_button_pane

0x50a6,	// (0x000915c9) call4_windows_conf_pane

0x50bf,	// (0x000915e2) popup_call4_audio_first_window_ParamLimits

0x50bf,	// (0x000915e2) popup_call4_audio_first_window

0x510f,	// (0x00091632) popup_call4_audio_second_window_ParamLimits

0x510f,	// (0x00091632) popup_call4_audio_second_window

0x5128,	// (0x0009164b) popup_call4_audio_wait_window_ParamLimits

0x5128,	// (0x0009164b) popup_call4_audio_wait_window

0x5136,	// (0x00091659) cell_call4_button_pane_ParamLimits

0x5136,	// (0x00091659) cell_call4_button_pane

0x515d,	// (0x00091680) bg_button_pane_cp09_ParamLimits

0x515d,	// (0x00091680) bg_button_pane_cp09

0x5169,	// (0x0009168c) cell_call4_button_pane_g1_ParamLimits

0x5169,	// (0x0009168c) cell_call4_button_pane_g1

0x518f,	// (0x000916b2) cell_call4_button_pane_t1_ParamLimits

0x518f,	// (0x000916b2) cell_call4_button_pane_t1

0xd28a,	// (0x000997ad) popup_call4_audio_conf_window_ParamLimits

0xd28a,	// (0x000997ad) popup_call4_audio_conf_window

0x4578,	// (0x00090a9b) mup3_progress_pane_t1_ParamLimits

0x4597,	// (0x00090aba) mup3_progress_pane_t2_ParamLimits

0xcce9,	// (0x0009920c) mup3_progress_pane_t3_ParamLimits

0xf6e4,	// (0x0009bc07) mup3_progress_pane_t_ParamLimits

0xcd06,	// (0x00099229) mup_progress_pane_cp03_ParamLimits

0x4a9e,	// (0x00090fc1) mup3_control_keys_pane_g4_copy1

0xa673,	// (0x00096b96) mp4_rocker2_pane_ParamLimits

0xa673,	// (0x00096b96) mp4_rocker2_pane

0xd2a4,	// (0x000997c7) mp4_rocker2_pane_g1

0xd2ac,	// (0x000997cf) mp4_rocker2_pane_g2

0xa717,	// (0x00096c3a) mp4_rocker2_pane_g3

0xa71f,	// (0x00096c42) mp4_rocker2_pane_g4

0xa727,	// (0x00096c4a) mp4_rocker2_pane_g5

0x0004,

0xf818,	// (0x0009bd3b) mp4_rocker2_pane_g

0x9855,	// (0x00095d78) main_camera4_pane

0x9855,	// (0x00095d78) main_video4_pane

0x4b9f,	// (0x000910c2) main_video_tele_dialer_pane_t1_ParamLimits

0x4b9f,	// (0x000910c2) main_video_tele_dialer_pane_t1

0x4bb8,	// (0x000910db) main_video_tele_dialer_pane_t2_ParamLimits

0x4bb8,	// (0x000910db) main_video_tele_dialer_pane_t2

0x0001,

0xf7ce,	// (0x0009bcf1) main_video_tele_dialer_pane_t_ParamLimits

0xf7ce,	// (0x0009bcf1) main_video_tele_dialer_pane_t

0x51cd,	// (0x000916f0) cam4_autofocus_pane_ParamLimits

0x51cd,	// (0x000916f0) cam4_autofocus_pane

0x51e3,	// (0x00091706) cam4_image_uncrop_pane_ParamLimits

0x51e3,	// (0x00091706) cam4_image_uncrop_pane

0x51fc,	// (0x0009171f) cam4_indicators_pane_ParamLimits

0x51fc,	// (0x0009171f) cam4_indicators_pane

0x522c,	// (0x0009174f) main_camera4_pane_g1_ParamLimits

0x522c,	// (0x0009174f) main_camera4_pane_g1

0x523e,	// (0x00091761) main_camera4_pane_g2_ParamLimits

0x523e,	// (0x00091761) main_camera4_pane_g2

0x5251,	// (0x00091774) main_camera4_pane_g3_ParamLimits

0x5251,	// (0x00091774) main_camera4_pane_g3

0x5264,	// (0x00091787) main_camera4_pane_g4_ParamLimits

0x5264,	// (0x00091787) main_camera4_pane_g4

0x5277,	// (0x0009179a) main_camera4_pane_g5_ParamLimits

0x5277,	// (0x0009179a) main_camera4_pane_g5

0x0005,

0xf823,	// (0x0009bd46) main_camera4_pane_g_ParamLimits

0xf823,	// (0x0009bd46) main_camera4_pane_g

0x529b,	// (0x000917be) main_camera4_pane_t1_ParamLimits

0x529b,	// (0x000917be) main_camera4_pane_t1

0x9fe6,	// (0x00096509) bg_tb_trans_pane_cp06

0xa755,	// (0x00096c78) cam4_indicators_pane_g1

0xa766,	// (0x00096c89) cam4_indicators_pane_g2

0x0002,

0xf83e,	// (0x0009bd61) cam4_indicators_pane_g

0xa77e,	// (0x00096ca1) cam4_indicators_pane_t1

0x52ff,	// (0x00091822) main_video4_pane_g1_ParamLimits

0x52ff,	// (0x00091822) main_video4_pane_g1

0x530e,	// (0x00091831) main_video4_pane_g2_ParamLimits

0x530e,	// (0x00091831) main_video4_pane_g2

0x531e,	// (0x00091841) main_video4_pane_g3_ParamLimits

0x531e,	// (0x00091841) main_video4_pane_g3

0x532e,	// (0x00091851) main_video4_pane_g4_ParamLimits

0x532e,	// (0x00091851) main_video4_pane_g4

0x0004,

0xf845,	// (0x0009bd68) main_video4_pane_g_ParamLimits

0xf845,	// (0x0009bd68) main_video4_pane_g

0x534e,	// (0x00091871) vid4_indicators_pane_ParamLimits

0x534e,	// (0x00091871) vid4_indicators_pane

0x5378,	// (0x0009189b) video4_image_uncrop_cif_pane_ParamLimits

0x5378,	// (0x0009189b) video4_image_uncrop_cif_pane

0x5392,	// (0x000918b5) video4_image_uncrop_nhd_pane_ParamLimits

0x5392,	// (0x000918b5) video4_image_uncrop_nhd_pane

0x51e3,	// (0x00091706) video4_image_uncrop_vga_pane_ParamLimits

0x51e3,	// (0x00091706) video4_image_uncrop_vga_pane

0x98ba,	// (0x00095ddd) bg_tb_trans_pane_cp07

0xa7ac,	// (0x00096ccf) vid4_indicators_pane_g1

0xa7c2,	// (0x00096ce5) vid4_indicators_pane_g2

0xa7d6,	// (0x00096cf9) vid4_indicators_pane_g3

0x0004,

0xf850,	// (0x0009bd73) vid4_indicators_pane_g

0xa807,	// (0x00096d2a) vid4_indicators_pane_t1

0x53a9,	// (0x000918cc) cam4_autofocus_pane_g1

0x53b1,	// (0x000918d4) cam4_autofocus_pane_g2

0x53b9,	// (0x000918dc) cam4_autofocus_pane_g3

0x0002,

0xf85b,	// (0x0009bd7e) cam4_autofocus_pane_g

0x53c1,	// (0x000918e4) cam4_autofocus_pane_g3_copy1

0x4be7,	// (0x0009110a) video_down_pane_cp_t1

0x4bf5,	// (0x00091118) video_down_pane_cp_t2

0x0001,

0xf7d3,	// (0x0009bcf6) video_down_pane_cp_t

0x98ba,	// (0x00095ddd) popup_vitu2_window_ParamLimits

0x98ba,	// (0x00095ddd) popup_vitu2_window

0x53c9,	// (0x000918ec) aid_size_cell2_itu2_ParamLimits

0x53c9,	// (0x000918ec) aid_size_cell2_itu2

0x53ef,	// (0x00091912) aid_size_cell_itu2_ParamLimits

0x53ef,	// (0x00091912) aid_size_cell_itu2

0x4623,	// (0x00090b46) bg_popup_window_pane_cp09_ParamLimits

0x4623,	// (0x00090b46) bg_popup_window_pane_cp09

0x544d,	// (0x00091970) field_vitu2_entry_pane_ParamLimits

0x544d,	// (0x00091970) field_vitu2_entry_pane

0x5475,	// (0x00091998) grid_vitu2_function_pane_ParamLimits

0x5475,	// (0x00091998) grid_vitu2_function_pane

0x54c6,	// (0x000919e9) grid_vitu2_itu_pane_ParamLimits

0x54c6,	// (0x000919e9) grid_vitu2_itu_pane

0x5556,	// (0x00091a79) cell_vitu2_itu_pane_ParamLimits

0x5556,	// (0x00091a79) cell_vitu2_itu_pane

0x5584,	// (0x00091aa7) cell_vitu2_function_pane_ParamLimits

0x5584,	// (0x00091aa7) cell_vitu2_function_pane

0xd2c8,	// (0x000997eb) bg_popup_call_pane_cp08_ParamLimits

0xd2c8,	// (0x000997eb) bg_popup_call_pane_cp08

0xd2df,	// (0x00099802) field_vitu2_entry_pane_g1

0xd2eb,	// (0x0009980e) field_vitu2_entry_pane_g2

0x0002,

0xf862,	// (0x0009bd85) field_vitu2_entry_pane_g

0x55c8,	// (0x00091aeb) field_vitu2_entry_pane_t1_ParamLimits

0x55c8,	// (0x00091aeb) field_vitu2_entry_pane_t1

0x55f7,	// (0x00091b1a) field_vitu2_entry_pane_t2_ParamLimits

0x55f7,	// (0x00091b1a) field_vitu2_entry_pane_t2

0x0001,

0xf869,	// (0x0009bd8c) field_vitu2_entry_pane_t_ParamLimits

0xf869,	// (0x0009bd8c) field_vitu2_entry_pane_t

0x5614,	// (0x00091b37) bg_button_pane_cp010_ParamLimits

0x5614,	// (0x00091b37) bg_button_pane_cp010

0x5622,	// (0x00091b45) cell_vitu2_itu_pane_g1

0x5648,	// (0x00091b6b) cell_vitu2_itu_pane_t1_ParamLimits

0x5648,	// (0x00091b6b) cell_vitu2_itu_pane_t1

0xfe88,	// (0x0008c3ab) cell_vitu2_itu_pane_t2_ParamLimits

0xfe88,	// (0x0008c3ab) cell_vitu2_itu_pane_t2

0x0002,

0xf873,	// (0x0009bd96) cell_vitu2_itu_pane_t_ParamLimits

0xf873,	// (0x0009bd96) cell_vitu2_itu_pane_t

0x98ba,	// (0x00095ddd) bg_button_pane_cp011

0x56a6,	// (0x00091bc9) cell_vitu2_function_pane_g1

0x9855,	// (0x00095d78) main_myfav_hc_pane

0x4fb3,	// (0x000914d6) popup_image3_note_pane_ParamLimits

0x4fb3,	// (0x000914d6) popup_image3_note_pane

0x4fcf,	// (0x000914f2) popup_image3_tool_bar_pane_ParamLimits

0x4fcf,	// (0x000914f2) popup_image3_tool_bar_pane

0xff16,	// (0x0008c439) cell_vitu2_itu_pane_t3_ParamLimits

0xff16,	// (0x0008c439) cell_vitu2_itu_pane_t3

0x9855,	// (0x00095d78) bg_popup_trans_pane

0xd2ff,	// (0x00099822) grid_image3_tool_bar_pane

0xd309,	// (0x0009982c) bg_popup_trans_pane_g1

0xabc0,	// (0x000970e3) bg_popup_trans_pane_g2

0xd311,	// (0x00099834) bg_popup_trans_pane_g3

0xd319,	// (0x0009983c) bg_popup_trans_pane_g4

0xd321,	// (0x00099844) bg_popup_trans_pane_g5

0xd329,	// (0x0009984c) bg_popup_trans_pane_g6

0xd331,	// (0x00099854) bg_popup_trans_pane_g7

0xd339,	// (0x0009985c) bg_popup_trans_pane_g8

0xaba0,	// (0x000970c3) bg_popup_trans_pane_g9

0x0008,

0xf87a,	// (0x0009bd9d) bg_popup_trans_pane_g

0xd341,	// (0x00099864) cell_image3_tool_bar_pane_ParamLimits

0xd341,	// (0x00099864) cell_image3_tool_bar_pane

0xa99c,	// (0x00096ebf) cell_image3_tool_bar_pane_g1

0x9855,	// (0x00095d78) bg_popup_trans_pane_cp1

0xd357,	// (0x0009987a) popup_image3_note_pane_t1

0xd365,	// (0x00099888) popup_image3_note_pane_t2

0xd373,	// (0x00099896) popup_image3_note_pane_t3

0x0002,

0xf88d,	// (0x0009bdb0) popup_image3_note_pane_t

0xd383,	// (0x000998a6) popup_image3_note_pane_t3_copy1

0x56ba,	// (0x00091bdd) bg_myfav_hc_instruction_pane_ParamLimits

0x56ba,	// (0x00091bdd) bg_myfav_hc_instruction_pane

0x56d2,	// (0x00091bf5) cell_myfav_contact_pane_ParamLimits

0x56d2,	// (0x00091bf5) cell_myfav_contact_pane

0x56ee,	// (0x00091c11) cell_myfav_contact_pane_cp1_ParamLimits

0x56ee,	// (0x00091c11) cell_myfav_contact_pane_cp1

0x5706,	// (0x00091c29) cell_myfav_contact_pane_cp2_ParamLimits

0x5706,	// (0x00091c29) cell_myfav_contact_pane_cp2

0x571e,	// (0x00091c41) cell_myfav_contact_pane_cp3_ParamLimits

0x571e,	// (0x00091c41) cell_myfav_contact_pane_cp3

0x5735,	// (0x00091c58) cell_myfav_contact_pane_cp4_ParamLimits

0x5735,	// (0x00091c58) cell_myfav_contact_pane_cp4

0x574d,	// (0x00091c70) cell_myfav_contact_pane_cp5_ParamLimits

0x574d,	// (0x00091c70) cell_myfav_contact_pane_cp5

0x5761,	// (0x00091c84) cell_myfav_contact_pane_cp6_ParamLimits

0x5761,	// (0x00091c84) cell_myfav_contact_pane_cp6

0x5777,	// (0x00091c9a) cell_myfav_contact_pane_cp7_ParamLimits

0x5777,	// (0x00091c9a) cell_myfav_contact_pane_cp7

0xd391,	// (0x000998b4) listscroll_gen_pane_cp05

0x578f,	// (0x00091cb2) main_myfav_hc_pane_g1_ParamLimits

0x578f,	// (0x00091cb2) main_myfav_hc_pane_g1

0x57a9,	// (0x00091ccc) main_myfav_hc_pane_g2_ParamLimits

0x57a9,	// (0x00091ccc) main_myfav_hc_pane_g2

0x0002,

0xf894,	// (0x0009bdb7) main_myfav_hc_pane_g_ParamLimits

0xf894,	// (0x0009bdb7) main_myfav_hc_pane_g

0x57dd,	// (0x00091d00) main_myfav_hc_pane_t1_ParamLimits

0x57dd,	// (0x00091d00) main_myfav_hc_pane_t1

0xd39a,	// (0x000998bd) main_myfav_hc_pane_t2_ParamLimits

0xd39a,	// (0x000998bd) main_myfav_hc_pane_t2

0xd3ac,	// (0x000998cf) main_myfav_hc_pane_t3_ParamLimits

0xd3ac,	// (0x000998cf) main_myfav_hc_pane_t3

0x57f4,	// (0x00091d17) main_myfav_hc_pane_t4_ParamLimits

0x57f4,	// (0x00091d17) main_myfav_hc_pane_t4

0x0004,

0xf89b,	// (0x0009bdbe) main_myfav_hc_pane_t_ParamLimits

0xf89b,	// (0x0009bdbe) main_myfav_hc_pane_t

0xa99c,	// (0x00096ebf) bg_myfav_hc_instruction_pane_g1

0xd3be,	// (0x000998e1) cell_myfav_contact_pane_g1_ParamLimits

0xd3be,	// (0x000998e1) cell_myfav_contact_pane_g1

0xd3be,	// (0x000998e1) cell_myfav_contact_pane_g2_ParamLimits

0xd3be,	// (0x000998e1) cell_myfav_contact_pane_g2

0xd3ca,	// (0x000998ed) cell_myfav_contact_pane_g3_ParamLimits

0xd3ca,	// (0x000998ed) cell_myfav_contact_pane_g3

0x9ff4,	// (0x00096517) cell_myfav_contact_pane_g4_ParamLimits

0x9ff4,	// (0x00096517) cell_myfav_contact_pane_g4

0xd3d7,	// (0x000998fa) cell_myfav_contact_pane_g5_ParamLimits

0xd3d7,	// (0x000998fa) cell_myfav_contact_pane_g5

0x0004,

0xf8a6,	// (0x0009bdc9) cell_myfav_contact_pane_g_ParamLimits

0xf8a6,	// (0x0009bdc9) cell_myfav_contact_pane_g

0x57c3,	// (0x00091ce6) main_myfav_hc_pane_g3_ParamLimits

0x57c3,	// (0x00091ce6) main_myfav_hc_pane_g3

0x07e7,	// (0x0008cd0a) popup_adpt_find_window

0x581e,	// (0x00091d41) afind_page_pane_ParamLimits

0x581e,	// (0x00091d41) afind_page_pane

0x5834,	// (0x00091d57) aid_size_cell_afind_ParamLimits

0x5834,	// (0x00091d57) aid_size_cell_afind

0x5852,	// (0x00091d75) bg_popup_sub_pane_cp09_ParamLimits

0x5852,	// (0x00091d75) bg_popup_sub_pane_cp09

0x5864,	// (0x00091d87) find_pane_cp01_ParamLimits

0x5864,	// (0x00091d87) find_pane_cp01

0xd3e3,	// (0x00099906) grid_afind_control_pane_ParamLimits

0xd3e3,	// (0x00099906) grid_afind_control_pane

0x5878,	// (0x00091d9b) grid_afind_pane_ParamLimits

0x5878,	// (0x00091d9b) grid_afind_pane

0x589a,	// (0x00091dbd) cell_afind_pane_ParamLimits

0x589a,	// (0x00091dbd) cell_afind_pane

0xa99c,	// (0x00096ebf) afind_page_pane_g1

0x5903,	// (0x00091e26) afind_page_pane_g2

0x590b,	// (0x00091e2e) afind_page_pane_g3

0x0002,

0xf8b1,	// (0x0009bdd4) afind_page_pane_g

0x5913,	// (0x00091e36) afind_page_pane_t1

0xd409,	// (0x0009992c) cell_afind_grid_control_pane_ParamLimits

0xd409,	// (0x0009992c) cell_afind_grid_control_pane

0xd276,	// (0x00099799) bg_button_pane_cp69_ParamLimits

0xd276,	// (0x00099799) bg_button_pane_cp69

0x5921,	// (0x00091e44) cell_afind_pane_g1_ParamLimits

0x5921,	// (0x00091e44) cell_afind_pane_g1

0x592e,	// (0x00091e51) cell_afind_pane_t1_ParamLimits

0x592e,	// (0x00091e51) cell_afind_pane_t1

0xa9a6,	// (0x00096ec9) bg_button_pane_cp72

0xd418,	// (0x0009993b) cell_afind_grid_control_pane_g1

0x30e9,	// (0x0008f60c) aid_image_placing_area_ParamLimits

0x30e9,	// (0x0008f60c) aid_image_placing_area

0x9fe6,	// (0x00096509) field_vitu_entry_pane_g1_ParamLimits

0x9fe6,	// (0x00096509) field_vitu_entry_pane_g1

0x9fe6,	// (0x00096509) field_vitu_entry_pane_g2_ParamLimits

0x9fe6,	// (0x00096509) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0009b6e4) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0009b6e4) field_vitu_entry_pane_g

0xd006,	// (0x00099529) cell_vitu_itu_pane_g1_ParamLimits

0xcfe9,	// (0x0009950c) cell_vitu_itu_pane_t3_ParamLimits

0xcfe9,	// (0x0009950c) cell_vitu_itu_pane_t3

0xd21f,	// (0x00099742) mp4_progress_pane_t1_ParamLimits

0xd238,	// (0x0009975b) mp4_progress_pane_t2_ParamLimits

0xf7f7,	// (0x0009bd1a) mp4_progress_pane_t_ParamLimits

0xd251,	// (0x00099774) mup_progress_pane_cp04_ParamLimits

0x5808,	// (0x00091d2b) main_myfav_hc_pane_t5_ParamLimits

0x5808,	// (0x00091d2b) main_myfav_hc_pane_t5

0x06a8,	// (0x0008cbcb) aid_zoom_text_primary

0x07e7,	// (0x0008cd0a) popup_adpt_find_window_ParamLimits

0x98ba,	// (0x00095ddd) main_cam_set_pane

0x5215,	// (0x00091738) cam4_zoom_pane_ParamLimits

0x5215,	// (0x00091738) cam4_zoom_pane

0x5940,	// (0x00091e63) main_cam_set_pane_g1_ParamLimits

0x5940,	// (0x00091e63) main_cam_set_pane_g1

0x594e,	// (0x00091e71) main_cam_set_pane_g2_ParamLimits

0x594e,	// (0x00091e71) main_cam_set_pane_g2

0x0001,

0xf8b8,	// (0x0009bddb) main_cam_set_pane_g_ParamLimits

0xf8b8,	// (0x0009bddb) main_cam_set_pane_g

0x596f,	// (0x00091e92) main_cam_set_pane_t1_ParamLimits

0x596f,	// (0x00091e92) main_cam_set_pane_t1

0x598a,	// (0x00091ead) main_cset_listscroll_pane_ParamLimits

0x598a,	// (0x00091ead) main_cset_listscroll_pane

0x59b2,	// (0x00091ed5) main_cset_slider_pane_ParamLimits

0x59b2,	// (0x00091ed5) main_cset_slider_pane

0xd429,	// (0x0009994c) main_cset_list_pane_ParamLimits

0xd429,	// (0x0009994c) main_cset_list_pane

0xd439,	// (0x0009995c) scroll_pane_cp028

0x59dc,	// (0x00091eff) aid_area_touch_slider

0x59f8,	// (0x00091f1b) cset_slider_pane

0x5a1b,	// (0x00091f3e) main_cset_slider_pane_g1

0x5a30,	// (0x00091f53) main_cset_slider_pane_g2

0x0011,

0xf8bd,	// (0x0009bde0) main_cset_slider_pane_g

0xd472,	// (0x00099995) main_cset_slider_pane_t1

0x5af2,	// (0x00092015) main_cset_slider_pane_t2

0x5b0c,	// (0x0009202f) main_cset_slider_pane_t3

0x5b26,	// (0x00092049) main_cset_slider_pane_t4

0x5b40,	// (0x00092063) main_cset_slider_pane_t5

0x5b5e,	// (0x00092081) main_cset_slider_pane_t6

0x5b73,	// (0x00092096) main_cset_slider_pane_t7

0x000e,

0xf8e2,	// (0x0009be05) main_cset_slider_pane_t

0x5c7f,	// (0x000921a2) cset_list_set_pane_ParamLimits

0x5c7f,	// (0x000921a2) cset_list_set_pane

0xd50c,	// (0x00099a2f) aid_position_infowindow_above

0xd514,	// (0x00099a37) aid_position_infowindow_below

0x5c93,	// (0x000921b6) cset_list_set_pane_g1_ParamLimits

0x5c93,	// (0x000921b6) cset_list_set_pane_g1

0xff74,	// (0x0008c497) cset_list_set_pane_g3_ParamLimits

0xff74,	// (0x0008c497) cset_list_set_pane_g3

0x0001,

0xf901,	// (0x0009be24) cset_list_set_pane_g_ParamLimits

0xf901,	// (0x0009be24) cset_list_set_pane_g

0xff83,	// (0x0008c4a6) cset_list_set_pane_t1_ParamLimits

0xff83,	// (0x0008c4a6) cset_list_set_pane_t1

0x98ba,	// (0x00095ddd) list_highlight_pane_cp021_ParamLimits

0x98ba,	// (0x00095ddd) list_highlight_pane_cp021

0xb422,	// (0x00097945) cset_slider_pane_g1

0xb434,	// (0x00097957) cset_slider_pane_g2

0xb42b,	// (0x0009794e) cset_slider_pane_g3

0x0002,

0xf906,	// (0x0009be29) cset_slider_pane_g

0xdc94,	// (0x0009a1b7) aid_area_touch_cam4_zoom

0x5c9f,	// (0x000921c2) cam4_zoom_cont_pane

0x5ca7,	// (0x000921ca) cam4_zoom_pane_g1

0x5caf,	// (0x000921d2) cam4_zoom_pane_g2

0x5cb7,	// (0x000921da) cam4_zoom_pane_g3

0x0002,

0xf90d,	// (0x0009be30) cam4_zoom_pane_g

0xa81e,	// (0x00096d41) cam4_zoom_cont_pane_g1

0xa827,	// (0x00096d4a) cam4_zoom_cont_pane_g2

0xa830,	// (0x00096d53) cam4_zoom_cont_pane_g3

0x0002,

0xf914,	// (0x0009be37) cam4_zoom_cont_pane_g

0x503b,	// (0x0009155e) call4_image_pane_ParamLimits

0x503b,	// (0x0009155e) call4_image_pane

0x50a6,	// (0x000915c9) call4_windows_conf_pane_ParamLimits

0x50ed,	// (0x00091610) popup_call4_audio_in_window_ParamLimits

0x50ed,	// (0x00091610) popup_call4_audio_in_window

0x9855,	// (0x00095d78) bg_popup_call2_act_pane_cp02

0xd282,	// (0x000997a5) call4_list_conf_pane

0xa99c,	// (0x00096ebf) call4_image_pane_g1

0xa99c,	// (0x00096ebf) call4_image_pane_g2

0x0001,

0xf398,	// (0x0009b8bb) call4_image_pane_g

0xd51c,	// (0x00099a3f) list_single_graphic_popup_conf4_pane_ParamLimits

0xd51c,	// (0x00099a3f) list_single_graphic_popup_conf4_pane

0x9855,	// (0x00095d78) list_highlight_pane_cp022

0xd531,	// (0x00099a54) list_single_graphic_popup_conf4_pane_g1

0xb0f5,	// (0x00097618) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf91b,	// (0x0009be3e) list_single_graphic_popup_conf4_pane_g

0xd539,	// (0x00099a5c) list_single_graphic_popup_conf4_pane_t1

0x15e5,	// (0x0008db08) popup_vtel_slider_window_ParamLimits

0x15e5,	// (0x0008db08) popup_vtel_slider_window

0xd264,	// (0x00099787) dialer2_ne_pane_t2_ParamLimits

0xd264,	// (0x00099787) dialer2_ne_pane_t2

0x0001,

0xf7fc,	// (0x0009bd1f) dialer2_ne_pane_t_ParamLimits

0xf7fc,	// (0x0009bd1f) dialer2_ne_pane_t

0xc70e,	// (0x00098c31) bg_popup_sub_pane_cp010_ParamLimits

0xc70e,	// (0x00098c31) bg_popup_sub_pane_cp010

0x5cbf,	// (0x000921e2) popup_vtel_slider_window_g1_ParamLimits

0x5cbf,	// (0x000921e2) popup_vtel_slider_window_g1

0x5cd2,	// (0x000921f5) popup_vtel_slider_window_g2_ParamLimits

0x5cd2,	// (0x000921f5) popup_vtel_slider_window_g2

0x0003,

0xf920,	// (0x0009be43) popup_vtel_slider_window_g_ParamLimits

0xf920,	// (0x0009be43) popup_vtel_slider_window_g

0x5d28,	// (0x0009224b) vtel_slider_pane_ParamLimits

0x5d28,	// (0x0009224b) vtel_slider_pane

0x5d4a,	// (0x0009226d) vtel_slider_pane_g1_ParamLimits

0x5d4a,	// (0x0009226d) vtel_slider_pane_g1

0x5d5e,	// (0x00092281) vtel_slider_pane_g2_ParamLimits

0x5d5e,	// (0x00092281) vtel_slider_pane_g2

0x5d76,	// (0x00092299) vtel_slider_pane_g3_ParamLimits

0x5d76,	// (0x00092299) vtel_slider_pane_g3

0x5d4a,	// (0x0009226d) vtel_slider_pane_g4_ParamLimits

0x5d4a,	// (0x0009226d) vtel_slider_pane_g4

0x5d8c,	// (0x000922af) vtel_slider_pane_g5_ParamLimits

0x5d8c,	// (0x000922af) vtel_slider_pane_g5

0x0004,

0xf929,	// (0x0009be4c) vtel_slider_pane_g_ParamLimits

0xf929,	// (0x0009be4c) vtel_slider_pane_g

0x98ba,	// (0x00095ddd) main_gallery2_pane

0x541b,	// (0x0009193e) aid_size_row_itut2_dropdow_list_ParamLimits

0x541b,	// (0x0009193e) aid_size_row_itut2_dropdow_list

0x549d,	// (0x000919c0) grid_vitu2_function_top_pane_ParamLimits

0x549d,	// (0x000919c0) grid_vitu2_function_top_pane

0x5501,	// (0x00091a24) popup_vitu2_dropdown_list_window_ParamLimits

0x5501,	// (0x00091a24) popup_vitu2_dropdown_list_window

0x5528,	// (0x00091a4b) popup_vitu2_match_list_window

0x5da2,	// (0x000922c5) cell_vitu2_function_top_pane_ParamLimits

0x5da2,	// (0x000922c5) cell_vitu2_function_top_pane

0x5dbc,	// (0x000922df) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5dbc,	// (0x000922df) cell_vitu2_function_top_pane_cp01

0x5dd8,	// (0x000922fb) cell_vitu2_function_top_wide_pane_ParamLimits

0x5dd8,	// (0x000922fb) cell_vitu2_function_top_wide_pane

0x98ba,	// (0x00095ddd) bg_button_pane_cp012

0x5df6,	// (0x00092319) cell_vitu2_function_top_pane_g1

0xa839,	// (0x00096d5c) bg_button_pane_cp013_ParamLimits

0xa839,	// (0x00096d5c) bg_button_pane_cp013

0x5e0a,	// (0x0009232d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5e0a,	// (0x0009232d) cell_vitu2_function_top_wide_pane_g1

0x98ba,	// (0x00095ddd) bg_popup_sub_pane_cp20

0x5e22,	// (0x00092345) list_vitu2_match_list_pane

0xd309,	// (0x0009982c) bg_popup_sub_pane_cp20_g1

0xd311,	// (0x00099834) bg_popup_sub_pane_cp20_g2

0xabc0,	// (0x000970e3) bg_popup_sub_pane_cp20_g3

0xd319,	// (0x0009983c) bg_popup_sub_pane_cp20_g4

0xaba0,	// (0x000970c3) bg_popup_sub_pane_cp20_g5

0xd54f,	// (0x00099a72) bg_popup_sub_pane_cp20_g6

0xd329,	// (0x0009984c) bg_popup_sub_pane_cp20_g7

0xd331,	// (0x00099854) bg_popup_sub_pane_cp20_g8

0xd339,	// (0x0009985c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf934,	// (0x0009be57) bg_popup_sub_pane_cp20_g

0xa855,	// (0x00096d78) list_vitu2_match_list_item_pane_ParamLimits

0xa855,	// (0x00096d78) list_vitu2_match_list_item_pane

0xa867,	// (0x00096d8a) list_vitu2_match_list_item_pane_t1

0x9855,	// (0x00095d78) bg_popup_sub_pane_cp21

0xa966,	// (0x00096e89) grid_vitu2_dropdown_list_pane

0x5e3a,	// (0x0009235d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5e3a,	// (0x0009235d) cell_vitu2_dropdown_list_char_pane

0x5e5c,	// (0x0009237f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5e5c,	// (0x0009237f) cell_vitu2_dropdown_list_ctrl_pane

0xd557,	// (0x00099a7a) cell_vitu2_dropdown_list_char_pane_g1

0xd560,	// (0x00099a83) cell_vitu2_dropdown_list_char_pane_g2

0xd569,	// (0x00099a8c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf947,	// (0x0009be6a) cell_vitu2_dropdown_list_char_pane_g

0x5e86,	// (0x000923a9) cell_vitu2_dropdown_list_char_pane_t1

0x5e94,	// (0x000923b7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5e94,	// (0x000923b7) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5ea4,	// (0x000923c7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5ea4,	// (0x000923c7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5eb5,	// (0x000923d8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5eb5,	// (0x000923d8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5ec5,	// (0x000923e8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5ec5,	// (0x000923e8) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9fe6,	// (0x00096509) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9fe6,	// (0x00096509) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf94e,	// (0x0009be71) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf94e,	// (0x0009be71) cell_vitu2_dropdown_list_ctrl_pane_g

0x5ee1,	// (0x00092404) aid_size_cell_gallery2_ParamLimits

0x5ee1,	// (0x00092404) aid_size_cell_gallery2

0x5eff,	// (0x00092422) grid_gallery2_pane_ParamLimits

0x5eff,	// (0x00092422) grid_gallery2_pane

0x5f19,	// (0x0009243c) scroll_pane_cp029_ParamLimits

0x5f19,	// (0x0009243c) scroll_pane_cp029

0x5f2a,	// (0x0009244d) cell_gallery2_pane_ParamLimits

0x5f2a,	// (0x0009244d) cell_gallery2_pane

0xd572,	// (0x00099a95) cell_gallery2_pane_g2

0x5f8e,	// (0x000924b1) cell_gallery2_pane_g3

0xd57a,	// (0x00099a9d) cell_gallery2_pane_g4

0xd582,	// (0x00099aa5) cell_gallery2_pane_g5

0xa966,	// (0x00096e89) grid_highlight_pane_cp10

0x5528,	// (0x00091a4b) popup_vitu2_match_list_window_ParamLimits

0x553f,	// (0x00091a62) popup_vitu2_query_window_ParamLimits

0x553f,	// (0x00091a62) popup_vitu2_query_window

0x9855,	// (0x00095d78) bg_vitu2_candi_button_pane

0xd557,	// (0x00099a7a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd560,	// (0x00099a83) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd569,	// (0x00099a8c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xff98,	// (0x0008c4bb) bg_button_pane_cp015

0x5f96,	// (0x000924b9) bg_button_pane_cp016

0x5fa2,	// (0x000924c5) bg_button_pane_cp017

0xb3b0,	// (0x000978d3) bg_popup_sub_pane_cp22

0xd58a,	// (0x00099aad) popup_vitu2_query_window_g1

0xffd5,	// (0x0008c4f8) popup_vitu2_query_window_g2

0x0002,

0xf959,	// (0x0009be7c) popup_vitu2_query_window_g

0xffef,	// (0x0008c512) popup_vitu2_query_window_t1_ParamLimits

0xffef,	// (0x0008c512) popup_vitu2_query_window_t1

0x0024,	// (0x0008c547) popup_vitu2_query_window_t2_ParamLimits

0x0024,	// (0x0008c547) popup_vitu2_query_window_t2

0x0036,	// (0x0008c559) popup_vitu2_query_window_t3_ParamLimits

0x0036,	// (0x0008c559) popup_vitu2_query_window_t3

0x5fc9,	// (0x000924ec) popup_vitu2_query_window_t4_ParamLimits

0x5fc9,	// (0x000924ec) popup_vitu2_query_window_t4

0x5fdd,	// (0x00092500) popup_vitu2_query_window_t5_ParamLimits

0x5fdd,	// (0x00092500) popup_vitu2_query_window_t5

0x0006,

0xf960,	// (0x0009be83) popup_vitu2_query_window_t_ParamLimits

0xf960,	// (0x0009be83) popup_vitu2_query_window_t

0xd421,	// (0x00099944) main_cset_text_pane

0x59dc,	// (0x00091eff) aid_area_touch_slider_ParamLimits

0x59f8,	// (0x00091f1b) cset_slider_pane_ParamLimits

0x5a1b,	// (0x00091f3e) main_cset_slider_pane_g1_ParamLimits

0x5a30,	// (0x00091f53) main_cset_slider_pane_g2_ParamLimits

0xd442,	// (0x00099965) main_cset_slider_pane_g3_ParamLimits

0xd442,	// (0x00099965) main_cset_slider_pane_g3

0x5a45,	// (0x00091f68) main_cset_slider_pane_g4_ParamLimits

0x5a45,	// (0x00091f68) main_cset_slider_pane_g4

0x5a54,	// (0x00091f77) main_cset_slider_pane_g5_ParamLimits

0x5a54,	// (0x00091f77) main_cset_slider_pane_g5

0x5a62,	// (0x00091f85) main_cset_slider_pane_g6_ParamLimits

0x5a62,	// (0x00091f85) main_cset_slider_pane_g6

0xf8bd,	// (0x0009bde0) main_cset_slider_pane_g_ParamLimits

0xd472,	// (0x00099995) main_cset_slider_pane_t1_ParamLimits

0x5af2,	// (0x00092015) main_cset_slider_pane_t2_ParamLimits

0x5b0c,	// (0x0009202f) main_cset_slider_pane_t3_ParamLimits

0x5b26,	// (0x00092049) main_cset_slider_pane_t4_ParamLimits

0x5b40,	// (0x00092063) main_cset_slider_pane_t5_ParamLimits

0x5b5e,	// (0x00092081) main_cset_slider_pane_t6_ParamLimits

0x5b73,	// (0x00092096) main_cset_slider_pane_t7_ParamLimits

0x5ba1,	// (0x000920c4) main_cset_slider_pane_t8_ParamLimits

0x5ba1,	// (0x000920c4) main_cset_slider_pane_t8

0x5bc9,	// (0x000920ec) main_cset_slider_pane_t9_ParamLimits

0x5bc9,	// (0x000920ec) main_cset_slider_pane_t9

0x5bf1,	// (0x00092114) main_cset_slider_pane_t10_ParamLimits

0x5bf1,	// (0x00092114) main_cset_slider_pane_t10

0x5c19,	// (0x0009213c) main_cset_slider_pane_t11_ParamLimits

0x5c19,	// (0x0009213c) main_cset_slider_pane_t11

0x5c43,	// (0x00092166) main_cset_slider_pane_t12_ParamLimits

0x5c43,	// (0x00092166) main_cset_slider_pane_t12

0x5c60,	// (0x00092183) main_cset_slider_pane_t13_ParamLimits

0x5c60,	// (0x00092183) main_cset_slider_pane_t13

0xf8e2,	// (0x0009be05) main_cset_slider_pane_t_ParamLimits

0x9855,	// (0x00095d78) bg_popup_sub_pane_cp011

0xd596,	// (0x00099ab9) main_cset_text_pane_g1

0xd59e,	// (0x00099ac1) main_cset_text_pane_t1

0xd5ac,	// (0x00099acf) main_cset_text_pane_t2

0xd5ba,	// (0x00099add) main_cset_text_pane_t3

0xd5c8,	// (0x00099aeb) main_cset_text_pane_t4

0xd5d6,	// (0x00099af9) main_cset_text_pane_t5

0xd5e4,	// (0x00099b07) main_cset_text_pane_t6

0xd5f2,	// (0x00099b15) main_cset_text_pane_t7

0x0006,

0xf96f,	// (0x0009be92) main_cset_text_pane_t

0x9855,	// (0x00095d78) main_cam4_burst_pane

0x9855,	// (0x00095d78) main_cam5_pane

0xd3f7,	// (0x0009991a) bg_button_pane_cp019

0xd400,	// (0x00099923) bg_button_pane_cp020

0xd44e,	// (0x00099971) main_cset_slider_pane_g7_ParamLimits

0xd44e,	// (0x00099971) main_cset_slider_pane_g7

0xd45a,	// (0x0009997d) main_cset_slider_pane_g8_ParamLimits

0xd45a,	// (0x0009997d) main_cset_slider_pane_g8

0x5a76,	// (0x00091f99) main_cset_slider_pane_g9_ParamLimits

0x5a76,	// (0x00091f99) main_cset_slider_pane_g9

0x5a82,	// (0x00091fa5) main_cset_slider_pane_g10_ParamLimits

0x5a82,	// (0x00091fa5) main_cset_slider_pane_g10

0x5a8e,	// (0x00091fb1) main_cset_slider_pane_g11_ParamLimits

0x5a8e,	// (0x00091fb1) main_cset_slider_pane_g11

0x5a9a,	// (0x00091fbd) main_cset_slider_pane_g12_ParamLimits

0x5a9a,	// (0x00091fbd) main_cset_slider_pane_g12

0x5aa6,	// (0x00091fc9) main_cset_slider_pane_g13_ParamLimits

0x5aa6,	// (0x00091fc9) main_cset_slider_pane_g13

0x5ab2,	// (0x00091fd5) main_cset_slider_pane_g14_ParamLimits

0x5ab2,	// (0x00091fd5) main_cset_slider_pane_g14

0x5abe,	// (0x00091fe1) main_cset_slider_pane_g15_ParamLimits

0x5abe,	// (0x00091fe1) main_cset_slider_pane_g15

0xd49a,	// (0x000999bd) main_cset_slider_pane_t14_ParamLimits

0xd49a,	// (0x000999bd) main_cset_slider_pane_t14

0xd4d3,	// (0x000999f6) main_cset_slider_pane_t15_ParamLimits

0xd4d3,	// (0x000999f6) main_cset_slider_pane_t15

0x5ff1,	// (0x00092514) aid_cam4_burst_size_cell_ParamLimits

0x5ff1,	// (0x00092514) aid_cam4_burst_size_cell

0x6011,	// (0x00092534) grid_cam4_burst_pane_ParamLimits

0x6011,	// (0x00092534) grid_cam4_burst_pane

0x604b,	// (0x0009256e) linegrid_cam4_burst_pane_ParamLimits

0x604b,	// (0x0009256e) linegrid_cam4_burst_pane

0xd600,	// (0x00099b23) scroll_pane_cp30_ParamLimits

0xd600,	// (0x00099b23) scroll_pane_cp30

0x606d,	// (0x00092590) cell_cam4_burst_pane_ParamLimits

0x606d,	// (0x00092590) cell_cam4_burst_pane

0xd60c,	// (0x00099b2f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd60c,	// (0x00099b2f) linegrid_cam4_burst_pane_g1

0x60c2,	// (0x000925e5) linegrid_cam4_burst_pane_g2_ParamLimits

0x60c2,	// (0x000925e5) linegrid_cam4_burst_pane_g2

0xd619,	// (0x00099b3c) linegrid_cam4_burst_pane_g3_ParamLimits

0xd619,	// (0x00099b3c) linegrid_cam4_burst_pane_g3

0x0002,

0xf97e,	// (0x0009bea1) linegrid_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x0009bea1) linegrid_cam4_burst_pane_g

0x60d3,	// (0x000925f6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x60d3,	// (0x000925f6) linegrid_cam4_burst_pane_g3_copy1

0xd626,	// (0x00099b49) linegrid_cam4_burst_pane_g4_ParamLimits

0xd626,	// (0x00099b49) linegrid_cam4_burst_pane_g4

0x60f1,	// (0x00092614) linegrid_cam4_burst_pane_g5_ParamLimits

0x60f1,	// (0x00092614) linegrid_cam4_burst_pane_g5

0x6102,	// (0x00092625) linegrid_cam4_burst_pane_g6_ParamLimits

0x6102,	// (0x00092625) linegrid_cam4_burst_pane_g6

0xd633,	// (0x00099b56) linegrid_cam4_burst_pane_g7_ParamLimits

0xd633,	// (0x00099b56) linegrid_cam4_burst_pane_g7

0x6119,	// (0x0009263c) cell_cam4_burst_pane_g1

0xd64c,	// (0x00099b6f) main_cam5_pane_t1_ParamLimits

0xd64c,	// (0x00099b6f) main_cam5_pane_t1

0xd65e,	// (0x00099b81) main_cam5_pane_t2_ParamLimits

0xd65e,	// (0x00099b81) main_cam5_pane_t2

0xd670,	// (0x00099b93) main_cam5_pane_t3_ParamLimits

0xd670,	// (0x00099b93) main_cam5_pane_t3

0xd682,	// (0x00099ba5) main_cam5_pane_t4_ParamLimits

0xd682,	// (0x00099ba5) main_cam5_pane_t4

0xd69a,	// (0x00099bbd) main_cam5_pane_t5_ParamLimits

0xd69a,	// (0x00099bbd) main_cam5_pane_t5

0xd6ae,	// (0x00099bd1) main_cam5_pane_t6_ParamLimits

0xd6ae,	// (0x00099bd1) main_cam5_pane_t6

0xd6c2,	// (0x00099be5) main_cam5_pane_t7_ParamLimits

0xd6c2,	// (0x00099be5) main_cam5_pane_t7

0xd6d4,	// (0x00099bf7) main_cam5_pane_t8_ParamLimits

0xd6d4,	// (0x00099bf7) main_cam5_pane_t8

0xd6f2,	// (0x00099c15) main_cam5_pane_t9_ParamLimits

0xd6f2,	// (0x00099c15) main_cam5_pane_t9

0xd704,	// (0x00099c27) main_cam5_pane_t10_ParamLimits

0xd704,	// (0x00099c27) main_cam5_pane_t10

0xd716,	// (0x00099c39) main_cam5_pane_t11_ParamLimits

0xd716,	// (0x00099c39) main_cam5_pane_t11

0xd72a,	// (0x00099c4d) main_cam5_pane_t12_ParamLimits

0xd72a,	// (0x00099c4d) main_cam5_pane_t12

0xd741,	// (0x00099c64) main_cam5_pane_t13_ParamLimits

0xd741,	// (0x00099c64) main_cam5_pane_t13

0x000c,

0xf98a,	// (0x0009bead) main_cam5_pane_t_ParamLimits

0xf98a,	// (0x0009bead) main_cam5_pane_t

0x0866,	// (0x0008cd89) popup_scut_keymap_window_ParamLimits

0x0866,	// (0x0008cd89) popup_scut_keymap_window

0x612c,	// (0x0009264f) aid_size_cell_brow_shortcut

0xa966,	// (0x00096e89) bg_popup_window_pane_cp010

0x6138,	// (0x0009265b) grid_scut_pane

0x6144,	// (0x00092667) cell_scut_pane_ParamLimits

0x6144,	// (0x00092667) cell_scut_pane

0x615d,	// (0x00092680) cell_scut_pane_g1

0xd764,	// (0x00099c87) cell_scut_pane_t1

0xd773,	// (0x00099c96) cell_scut_pane_t2

0x6166,	// (0x00092689) cell_scut_pane_t3

0x0002,

0xf9a5,	// (0x0009bec8) cell_scut_pane_t

0x411b,	// (0x0009063e) main_mup3_pane_g8_ParamLimits

0x411b,	// (0x0009063e) main_mup3_pane_g8

0x5435,	// (0x00091958) area_vitu2_query_pane_ParamLimits

0x5435,	// (0x00091958) area_vitu2_query_pane

0xffaf,	// (0x0008c4d2) input_focus_pane_cp08

0xd782,	// (0x00099ca5) area_vitu2_query_pane_g1

0x00b4,	// (0x0008c5d7) area_vitu2_query_pane_g2

0x0001,

0xf9ac,	// (0x0009becf) area_vitu2_query_pane_g

0x6174,	// (0x00092697) area_vitu2_query_pane_t1_ParamLimits

0x6174,	// (0x00092697) area_vitu2_query_pane_t1

0x6188,	// (0x000926ab) area_vitu2_query_pane_t2_ParamLimits

0x6188,	// (0x000926ab) area_vitu2_query_pane_t2

0x00c9,	// (0x0008c5ec) area_vitu2_query_pane_t3_ParamLimits

0x00c9,	// (0x0008c5ec) area_vitu2_query_pane_t3

0x619c,	// (0x000926bf) area_vitu2_query_pane_t4_ParamLimits

0x619c,	// (0x000926bf) area_vitu2_query_pane_t4

0x61c4,	// (0x000926e7) area_vitu2_query_pane_t5_ParamLimits

0x61c4,	// (0x000926e7) area_vitu2_query_pane_t5

0x61ec,	// (0x0009270f) area_vitu2_query_pane_t6_ParamLimits

0x61ec,	// (0x0009270f) area_vitu2_query_pane_t6

0x0006,

0xf9b1,	// (0x0009bed4) area_vitu2_query_pane_t_ParamLimits

0xf9b1,	// (0x0009bed4) area_vitu2_query_pane_t

0x6238,	// (0x0009275b) bg_button_pane_cp018

0x6244,	// (0x00092767) bg_button_pane_cp021

0x00f5,	// (0x0008c618) bg_button_pane_cp022

0x0120,	// (0x0008c643) input_focus_pane_cp09

0x28fc,	// (0x0008ee1f) aid_size_touch_mv_arrow_left

0x2925,	// (0x0008ee48) aid_size_touch_mv_arrow_right

0x5ad6,	// (0x00091ff9) main_cset_slider_pane_g16_ParamLimits

0x5ad6,	// (0x00091ff9) main_cset_slider_pane_g16

0x5ae4,	// (0x00092007) main_cset_slider_pane_g17_ParamLimits

0x5ae4,	// (0x00092007) main_cset_slider_pane_g17

0x6119,	// (0x0009263c) cell_cam4_burst_pane_g1_ParamLimits

0x9855,	// (0x00095d78) compa_mode_pane

0x5ce2,	// (0x00092205) popup_vtel_slider_window_g3_ParamLimits

0x5ce2,	// (0x00092205) popup_vtel_slider_window_g3

0x5cf9,	// (0x0009221c) popup_vtel_slider_window_g4_ParamLimits

0x5cf9,	// (0x0009221c) popup_vtel_slider_window_g4

0x5d10,	// (0x00092233) popup_vtel_slider_window_t1_ParamLimits

0x5d10,	// (0x00092233) popup_vtel_slider_window_t1

0x9855,	// (0x00095d78) main_cl_pane

0xa38c,	// (0x000968af) popup_imed_adjust2_window_ParamLimits

0xb3b0,	// (0x000978d3) bg_tb_trans_pane_cp05_ParamLimits

0xcf14,	// (0x00099437) popup_imed_adjust2_window_g1_ParamLimits

0xcf23,	// (0x00099446) popup_imed_adjust2_window_g2_ParamLimits

0xcf23,	// (0x00099446) popup_imed_adjust2_window_g2

0xcf2f,	// (0x00099452) popup_imed_adjust2_window_g3_ParamLimits

0xcf2f,	// (0x00099452) popup_imed_adjust2_window_g3

0x0002,

0xf727,	// (0x0009bc4a) popup_imed_adjust2_window_g_ParamLimits

0xf727,	// (0x0009bc4a) popup_imed_adjust2_window_g

0xcf3b,	// (0x0009945e) popup_imed_adjust2_window_t1_ParamLimits

0xcf53,	// (0x00099476) slider_imed_adjust_pane_ParamLimits

0xcf67,	// (0x0009948a) slider_imed_adjust_pane_g1_ParamLimits

0xcf77,	// (0x0009949a) slider_imed_adjust_pane_g2_ParamLimits

0xcf87,	// (0x000994aa) slider_imed_adjust_pane_g3_ParamLimits

0xcf98,	// (0x000994bb) slider_imed_adjust_pane_g4_ParamLimits

0xf72e,	// (0x0009bc51) slider_imed_adjust_pane_g_ParamLimits

0x51b5,	// (0x000916d8) aid_touch_area_cam4_ParamLimits

0x51b5,	// (0x000916d8) aid_touch_area_cam4

0xa72f,	// (0x00096c52) battery_pane_cp01

0x5288,	// (0x000917ab) main_camera4_pane_g6_ParamLimits

0x5288,	// (0x000917ab) main_camera4_pane_g6

0x52b2,	// (0x000917d5) main_camera4_pane_t2_ParamLimits

0x52b2,	// (0x000917d5) main_camera4_pane_t2

0x0001,

0xf830,	// (0x0009bd53) main_camera4_pane_t_ParamLimits

0xf830,	// (0x0009bd53) main_camera4_pane_t

0x52e7,	// (0x0009180a) aid_touch_area_vid4_ParamLimits

0x52e7,	// (0x0009180a) aid_touch_area_vid4

0x533e,	// (0x00091861) main_video4_pane_g5_ParamLimits

0x533e,	// (0x00091861) main_video4_pane_g5

0x5364,	// (0x00091887) vid4_progress_pane_ParamLimits

0x5364,	// (0x00091887) vid4_progress_pane

0xd466,	// (0x00099989) main_cset_slider_pane_g18_ParamLimits

0xd466,	// (0x00099989) main_cset_slider_pane_g18

0xd640,	// (0x00099b63) cell_cam4_burst_pane_g2_ParamLimits

0xd640,	// (0x00099b63) cell_cam4_burst_pane_g2

0x0001,

0xf985,	// (0x0009bea8) cell_cam4_burst_pane_g_ParamLimits

0xf985,	// (0x0009bea8) cell_cam4_burst_pane_g

0xa07a,	// (0x0009659d) bg_cl_pane_ParamLimits

0xa07a,	// (0x0009659d) bg_cl_pane

0x6250,	// (0x00092773) cl_header_pane_ParamLimits

0x6250,	// (0x00092773) cl_header_pane

0x6264,	// (0x00092787) cl_listscroll_pane_ParamLimits

0x6264,	// (0x00092787) cl_listscroll_pane

0xd78e,	// (0x00099cb1) bg_cl_pane_g1

0xd796,	// (0x00099cb9) bg_cl_pane_g2

0xd79e,	// (0x00099cc1) bg_cl_pane_g3

0xd7a6,	// (0x00099cc9) bg_cl_pane_g4

0xd7ae,	// (0x00099cd1) bg_cl_pane_g5

0xd7b6,	// (0x00099cd9) bg_cl_pane_g6

0xd7be,	// (0x00099ce1) bg_cl_pane_g7

0xd7c6,	// (0x00099ce9) bg_cl_pane_g8

0xd7ce,	// (0x00099cf1) bg_cl_pane_g9

0x0008,

0xf9c0,	// (0x0009bee3) bg_cl_pane_g

0x6274,	// (0x00092797) aid_height_cl_leading_ParamLimits

0x6274,	// (0x00092797) aid_height_cl_leading

0x6280,	// (0x000927a3) aid_height_cl_text_ParamLimits

0x6280,	// (0x000927a3) aid_height_cl_text

0x98ba,	// (0x00095ddd) bg_cl_header_pane_ParamLimits

0x98ba,	// (0x00095ddd) bg_cl_header_pane

0x629f,	// (0x000927c2) cl_header_pane_g1_ParamLimits

0x629f,	// (0x000927c2) cl_header_pane_g1

0x62b5,	// (0x000927d8) cl_header_pane_t1_ParamLimits

0x62b5,	// (0x000927d8) cl_header_pane_t1

0xd7d6,	// (0x00099cf9) cl_list_pane

0xd439,	// (0x0009995c) hc_scroll_pane_cp01

0xaba0,	// (0x000970c3) bg_cl_header_pane_g1

0xd309,	// (0x0009982c) bg_cl_header_pane_g2

0xabc0,	// (0x000970e3) bg_cl_header_pane_g3

0xd319,	// (0x0009983c) bg_cl_header_pane_g4

0xd311,	// (0x00099834) bg_cl_header_pane_g5

0xd54f,	// (0x00099a72) bg_cl_header_pane_g6

0xd331,	// (0x00099854) bg_cl_header_pane_g7

0xd339,	// (0x0009985c) bg_cl_header_pane_g8

0xd329,	// (0x0009984c) bg_cl_header_pane_g9

0x0008,

0xf9d3,	// (0x0009bef6) bg_cl_header_pane_g

0x62ce,	// (0x000927f1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x62ce,	// (0x000927f1) hc_cl_list_double_graphic_heading_pane

0x62e1,	// (0x00092804) hc_cl_list_single_graphic_pane_ParamLimits

0x62e1,	// (0x00092804) hc_cl_list_single_graphic_pane

0x62f9,	// (0x0009281c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x62f9,	// (0x0009281c) hc_cl_list_single_graphic_pane_g1

0x6305,	// (0x00092828) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6305,	// (0x00092828) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9e6,	// (0x0009bf09) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9e6,	// (0x0009bf09) hc_cl_list_single_graphic_pane_g

0x6319,	// (0x0009283c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6319,	// (0x0009283c) hc_cl_list_single_graphic_pane_t1

0x62f9,	// (0x0009281c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x62f9,	// (0x0009281c) hc_cl_list_double_graphic_heading_pane_g1

0x632e,	// (0x00092851) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x632e,	// (0x00092851) hc_cl_list_double_graphic_heading_pane_g2

0x6342,	// (0x00092865) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6342,	// (0x00092865) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9eb,	// (0x0009bf0e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9eb,	// (0x0009bf0e) hc_cl_list_double_graphic_heading_pane_g

0x6356,	// (0x00092879) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6356,	// (0x00092879) hc_cl_list_double_graphic_heading_pane_t1

0x636b,	// (0x0009288e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x636b,	// (0x0009288e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f2,	// (0x0009bf15) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f2,	// (0x0009bf15) hc_cl_list_double_graphic_heading_pane_t

0xa87d,	// (0x00096da0) vid4_progress_pane_g1

0xa88d,	// (0x00096db0) vid4_progress_pane_g2

0x6380,	// (0x000928a3) vid4_progress_pane_g3

0xa89d,	// (0x00096dc0) vid4_progress_pane_g4

0x0004,

0xf9f7,	// (0x0009bf1a) vid4_progress_pane_g

0x6392,	// (0x000928b5) vid4_progress_pane_t1

0xa8bb,	// (0x00096dde) vid4_progress_pane_t2

0x0002,

0xfa02,	// (0x0009bf25) vid4_progress_pane_t

0x63ac,	// (0x000928cf) wait_bar_pane_cp07

0xc85b,	// (0x00098d7e) blid_firmament_pane_ParamLimits

0xc89e,	// (0x00098dc1) popup_blid_sat_info2_window_g1

0xc8c2,	// (0x00098de5) popup_blid_sat_info2_window_t3

0xc8d0,	// (0x00098df3) popup_blid_sat_info2_window_t4

0xc8de,	// (0x00098e01) popup_blid_sat_info2_window_t5

0xc8ec,	// (0x00098e0f) popup_blid_sat_info2_window_t6

0xc8fc,	// (0x00098e1f) popup_blid_sat_info2_window_t7

0xc90a,	// (0x00098e2d) popup_blid_sat_info2_window_t8

0xc918,	// (0x00098e3b) popup_blid_sat_info2_window_t9

0xc926,	// (0x00098e49) popup_blid_sat_info2_window_t10

0xc9ed,	// (0x00098f10) aid_firma_cardinal_ParamLimits

0xca01,	// (0x00098f24) blid_firmament_pane_t1_ParamLimits

0xca18,	// (0x00098f3b) blid_firmament_pane_t2_ParamLimits

0xca2f,	// (0x00098f52) blid_firmament_pane_t3_ParamLimits

0xca46,	// (0x00098f69) blid_firmament_pane_t4_ParamLimits

0xf620,	// (0x0009bb43) blid_firmament_pane_t_ParamLimits

0xca5d,	// (0x00098f80) blid_sat_info_pane_ParamLimits

0x98ba,	// (0x00095ddd) main_cam_set_pane_ParamLimits

0x491d,	// (0x00090e40) aid_size_cell_colour_35_ParamLimits

0x493d,	// (0x00090e60) aid_size_cell_colour_112_ParamLimits

0x495d,	// (0x00090e80) aid_size_cell_effect_ParamLimits

0xb3b0,	// (0x000978d3) bg_tb_trans_pane_cp02_ParamLimits

0xae1f,	// (0x00097342) heading_imed_pane_ParamLimits

0x497d,	// (0x00090ea0) listscroll_imed_pane_ParamLimits

0xbd46,	// (0x00098269) popup_call2_audio_first_window_g5_ParamLimits

0xbd46,	// (0x00098269) popup_call2_audio_first_window_g5

0x4dc6,	// (0x000912e9) aid_size_touch_image3_arrow_left_ParamLimits

0x4dc6,	// (0x000912e9) aid_size_touch_image3_arrow_left

0x4df2,	// (0x00091315) aid_size_touch_image3_arrow_right_ParamLimits

0x4df2,	// (0x00091315) aid_size_touch_image3_arrow_right

0xa8d4,	// (0x00096df7) vid4_progress_pane_t3

0x4b22,	// (0x00091045) main_hwr_training_symbol_option_pane_ParamLimits

0x4b22,	// (0x00091045) main_hwr_training_symbol_option_pane

0xd159,	// (0x0009967c) popup_hwr_training_preview_window_ParamLimits

0xd159,	// (0x0009967c) popup_hwr_training_preview_window

0x4b42,	// (0x00091065) hwr_training_navi_pane_g5_ParamLimits

0x4b42,	// (0x00091065) hwr_training_navi_pane_g5

0xd2f7,	// (0x0009981a) popup_char_count_window

0x98ba,	// (0x00095ddd) bg_popup_sub_pane_cp20_ParamLimits

0x5e22,	// (0x00092345) list_vitu2_match_list_pane_ParamLimits

0x5e2e,	// (0x00092351) vitu2_page_scroll_pane_ParamLimits

0x5e2e,	// (0x00092351) vitu2_page_scroll_pane

0xd7df,	// (0x00099d02) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7df,	// (0x00099d02) list_single_hwr_training_symbol_option_pane

0xd7f2,	// (0x00099d15) list_single_hwr_training_symbol_option_pane_g1

0xd7fa,	// (0x00099d1d) list_single_hwr_training_symbol_option_pane_t1

0xd808,	// (0x00099d2b) bg_button_pane_cp023

0xd811,	// (0x00099d34) bg_button_pane_cp024

0xd844,	// (0x00099d67) vitu2_page_scroll_pane_g1

0xd84c,	// (0x00099d6f) vitu2_page_scroll_pane_g2

0x0001,

0xfa09,	// (0x0009bf2c) vitu2_page_scroll_pane_g

0xd854,	// (0x00099d77) vitu2_page_scroll_pane_t1

0xd863,	// (0x00099d86) popup_char_count_window_g1

0xd86c,	// (0x00099d8f) popup_char_count_window_g2

0xd875,	// (0x00099d98) popup_char_count_window_g3

0x0002,

0xfa0e,	// (0x0009bf31) popup_char_count_window_g

0xd87e,	// (0x00099da1) popup_char_count_window_t1

0x9855,	// (0x00095d78) main_vded2_pane

0xcf00,	// (0x00099423) aid_size_cell_imed_line

0xcf0a,	// (0x0009942d) grid_imed_line_width_pane

0xa7e9,	// (0x00096d0c) vid4_indicators_pane_g4

0xd88c,	// (0x00099daf) cell_imed_line_width_pane_ParamLimits

0xd88c,	// (0x00099daf) cell_imed_line_width_pane

0xd8a2,	// (0x00099dc5) cell_imed_line_width_pane_g1

0xd8ab,	// (0x00099dce) cell_imed_line_width_pane_g2

0x0001,

0xfa15,	// (0x0009bf38) cell_imed_line_width_pane_g

0x63d0,	// (0x000928f3) main_vded2_pane_g1_ParamLimits

0x63d0,	// (0x000928f3) main_vded2_pane_g1

0x63eb,	// (0x0009290e) main_vded2_pane_g2_ParamLimits

0x63eb,	// (0x0009290e) main_vded2_pane_g2

0x0001,

0xfa1a,	// (0x0009bf3d) main_vded2_pane_g_ParamLimits

0xfa1a,	// (0x0009bf3d) main_vded2_pane_g

0x63fd,	// (0x00092920) vded2_slider_pane_ParamLimits

0x63fd,	// (0x00092920) vded2_slider_pane

0x640d,	// (0x00092930) aid_size_touch_vded2_end

0x6417,	// (0x0009293a) aid_size_touch_vded2_playhead

0xd8b3,	// (0x00099dd6) aid_size_touch_vded2_start

0xd8bb,	// (0x00099dde) vded2_slider_bg_pane

0xd8c4,	// (0x00099de7) vded2_slider_pane_g1

0xd8cd,	// (0x00099df0) vded2_slider_pane_g2

0x6421,	// (0x00092944) vded2_slider_pane_g3

0x0002,

0xfa1f,	// (0x0009bf42) vded2_slider_pane_g

0xd8d5,	// (0x00099df8) vded2_slider_bg_pane_g1

0xd8de,	// (0x00099e01) vded2_slider_bg_pane_g2

0xd8e7,	// (0x00099e0a) vded2_slider_bg_pane_g3

0x0002,

0xfa26,	// (0x0009bf49) vded2_slider_bg_pane_g

0x2d25,	// (0x0008f248) aid_postcard_touch_down_pane_ParamLimits

0x2d25,	// (0x0008f248) aid_postcard_touch_down_pane

0x2d3d,	// (0x0008f260) aid_postcard_touch_up_pane_ParamLimits

0x2d3d,	// (0x0008f260) aid_postcard_touch_up_pane

0x9855,	// (0x00095d78) main_blid2_pane

0xa36e,	// (0x00096891) popup_blid2_search_window

0x9855,	// (0x00095d78) blid2_gps_pane

0x9855,	// (0x00095d78) blid2_navig_pane

0x9855,	// (0x00095d78) blid2_search_pane

0x9855,	// (0x00095d78) blid2_tripm_pane

0x642c,	// (0x0009294f) blid2_search_pane_g1_ParamLimits

0x642c,	// (0x0009294f) blid2_search_pane_g1

0x643f,	// (0x00092962) blid2_search_pane_t1_ParamLimits

0x643f,	// (0x00092962) blid2_search_pane_t1

0x6451,	// (0x00092974) aid_size_cell_blid2_gps_ParamLimits

0x6451,	// (0x00092974) aid_size_cell_blid2_gps

0x6469,	// (0x0009298c) blid2_gps_pane_g1_ParamLimits

0x6469,	// (0x0009298c) blid2_gps_pane_g1

0x647d,	// (0x000929a0) grid_blid2_satellite_pane_ParamLimits

0x647d,	// (0x000929a0) grid_blid2_satellite_pane

0x6495,	// (0x000929b8) blid2_navig_pane_g1_ParamLimits

0x6495,	// (0x000929b8) blid2_navig_pane_g1

0x64a1,	// (0x000929c4) blid2_navig_pane_t1_ParamLimits

0x64a1,	// (0x000929c4) blid2_navig_pane_t1

0x64bc,	// (0x000929df) blid2_navig_pane_t2_ParamLimits

0x64bc,	// (0x000929df) blid2_navig_pane_t2

0x0001,

0xfa2d,	// (0x0009bf50) blid2_navig_pane_t_ParamLimits

0xfa2d,	// (0x0009bf50) blid2_navig_pane_t

0x64d7,	// (0x000929fa) blid2_navig_ring_pane_ParamLimits

0x64d7,	// (0x000929fa) blid2_navig_ring_pane

0x64f2,	// (0x00092a15) blid2_speed_pane_ParamLimits

0x64f2,	// (0x00092a15) blid2_speed_pane

0x64fe,	// (0x00092a21) blid2_tripm_pane_g1_ParamLimits

0x64fe,	// (0x00092a21) blid2_tripm_pane_g1

0x6519,	// (0x00092a3c) blid2_tripm_pane_g2_ParamLimits

0x6519,	// (0x00092a3c) blid2_tripm_pane_g2

0x652c,	// (0x00092a4f) blid2_tripm_pane_g3_ParamLimits

0x652c,	// (0x00092a4f) blid2_tripm_pane_g3

0x653d,	// (0x00092a60) blid2_tripm_pane_g4_ParamLimits

0x653d,	// (0x00092a60) blid2_tripm_pane_g4

0x654e,	// (0x00092a71) blid2_tripm_pane_g5_ParamLimits

0x654e,	// (0x00092a71) blid2_tripm_pane_g5

0x0005,

0xfa32,	// (0x0009bf55) blid2_tripm_pane_g_ParamLimits

0xfa32,	// (0x0009bf55) blid2_tripm_pane_g

0x6574,	// (0x00092a97) blid2_tripm_pane_t1_ParamLimits

0x6574,	// (0x00092a97) blid2_tripm_pane_t1

0x658d,	// (0x00092ab0) blid2_tripm_pane_t2_ParamLimits

0x658d,	// (0x00092ab0) blid2_tripm_pane_t2

0x65a6,	// (0x00092ac9) blid2_tripm_pane_t3_ParamLimits

0x65a6,	// (0x00092ac9) blid2_tripm_pane_t3

0x0003,

0xfa3f,	// (0x0009bf62) blid2_tripm_pane_t_ParamLimits

0xfa3f,	// (0x0009bf62) blid2_tripm_pane_t

0x65ed,	// (0x00092b10) cell_blid2_satellite_pane_ParamLimits

0x65ed,	// (0x00092b10) cell_blid2_satellite_pane

0x6609,	// (0x00092b2c) cell_blid2_satellite_pane_g1

0xd8f0,	// (0x00099e13) cell_blid2_satellite_pane_t1

0xa99c,	// (0x00096ebf) blid2_speed_pane_g1

0xd8fe,	// (0x00099e21) blid2_speed_pane_t1

0xd90c,	// (0x00099e2f) blid2_speed_pane_t2

0x0001,

0xfa48,	// (0x0009bf6b) blid2_speed_pane_t

0xa99c,	// (0x00096ebf) blid2_navig_ring_pane_g1

0x6612,	// (0x00092b35) blid2_navig_ring_pane_g2

0x661a,	// (0x00092b3d) blid2_navig_ring_pane_g3

0x6622,	// (0x00092b45) blid2_navig_ring_pane_g4

0x662a,	// (0x00092b4d) blid2_navig_ring_pane_g5

0x0004,

0xfa4d,	// (0x0009bf70) blid2_navig_ring_pane_g

0x9855,	// (0x00095d78) bg_popup_window_pane_cp011

0xd91a,	// (0x00099e3d) popup_blid2_search_window_g1

0xd922,	// (0x00099e45) popup_blid2_search_window_t1

0xd930,	// (0x00099e53) popup_blid2_search_window_t2

0x0001,

0xfa58,	// (0x0009bf7b) popup_blid2_search_window_t

0xaaaf,	// (0x00096fd2) main_browser_pane_g1

0xa07a,	// (0x0009659d) main_browser_pane_ParamLimits

0x98ba,	// (0x00095ddd) bg_button_pane_cp011_ParamLimits

0x56a6,	// (0x00091bc9) cell_vitu2_function_pane_g1_ParamLimits

0xb3b0,	// (0x000978d3) bg_popup_sub_pane_cp22_ParamLimits

0xffaf,	// (0x0008c4d2) input_focus_pane_cp08_ParamLimits

0x5fae,	// (0x000924d1) popup_vitu2_query_button_pane_ParamLimits

0x5fae,	// (0x000924d1) popup_vitu2_query_button_pane

0xffcb,	// (0x0008c4ee) popup_vitu2_query_input_button_pane

0xd58a,	// (0x00099aad) popup_vitu2_query_window_g1_ParamLimits

0xffd5,	// (0x0008c4f8) popup_vitu2_query_window_g2_ParamLimits

0xf959,	// (0x0009be7c) popup_vitu2_query_window_g_ParamLimits

0x9855,	// (0x00095d78) bg_button_pane_cp026

0x6632,	// (0x00092b55) popup_vitu2_query_input_button_pane_g1

0x9855,	// (0x00095d78) bg_button_pane_cp025

0xd93e,	// (0x00099e61) popup_vitu2_query_button_pane_t1

0x3d37,	// (0x0009025a) main_mp3_pane_t6

0x3d45,	// (0x00090268) popup_slider_window_cp01

0xa74d,	// (0x00096c70) cam4_battery_pane

0xa7a2,	// (0x00096cc5) cam4_battery_pane_cp02

0xa875,	// (0x00096d98) cam4_battery_pane_cp01

0xa875,	// (0x00096d98) cam4_battery_pane_cp03

0xa99c,	// (0x00096ebf) cam4_battery_pane_g1

0xd94c,	// (0x00099e6f) cam4_battery_pane_g2

0x0001,

0xfa5d,	// (0x0009bf80) cam4_battery_pane_g

0xc934,	// (0x00098e57) popup_blid_sat_info2_window_t11

0x28fc,	// (0x0008ee1f) aid_size_touch_mv_arrow_left_ParamLimits

0x2925,	// (0x0008ee48) aid_size_touch_mv_arrow_right_ParamLimits

0xb223,	// (0x00097746) navi_pane_g1_ParamLimits

0x2964,	// (0x0008ee87) navi_pane_g2_ParamLimits

0x2992,	// (0x0008eeb5) navi_pane_g3_ParamLimits

0xf334,	// (0x0009b857) navi_pane_g_ParamLimits

0x29ec,	// (0x0008ef0f) navi_pane_mv_t1_ParamLimits

0x4989,	// (0x00090eac) grid_imed_effect_pane_ParamLimits

0x14ed,	// (0x0008da10) aid_placing_vt_slider_lsc

0xa9eb,	// (0x00096f0e) aid_placing_vt_slider_prt

0x98ba,	// (0x00095ddd) bg_tb_trans_pane_cp01_ParamLimits

0xcbaa,	// (0x000990cd) popup_image_details_window_g1_ParamLimits

0xcbbd,	// (0x000990e0) popup_image_details_window_g2_ParamLimits

0xcbd2,	// (0x000990f5) popup_image_details_window_g3_ParamLimits

0xcbd2,	// (0x000990f5) popup_image_details_window_g3

0xf660,	// (0x0009bb83) popup_image_details_window_g_ParamLimits

0xcbe6,	// (0x00099109) popup_image_details_window_t1_ParamLimits

0xcbf8,	// (0x0009911b) popup_image_details_window_t2_ParamLimits

0xcc11,	// (0x00099134) popup_image_details_window_t3_ParamLimits

0xcc25,	// (0x00099148) popup_image_details_window_t4_ParamLimits

0xcc40,	// (0x00099163) popup_image_details_window_t5_ParamLimits

0xf667,	// (0x0009bb8a) popup_image_details_window_t_ParamLimits

0x628c,	// (0x000927af) cl_header_name_pane_ParamLimits

0x628c,	// (0x000927af) cl_header_name_pane

0x663a,	// (0x00092b5d) cl_header_name_pane_t1_ParamLimits

0x663a,	// (0x00092b5d) cl_header_name_pane_t1

0x665b,	// (0x00092b7e) cl_header_name_pane_t2_ParamLimits

0x665b,	// (0x00092b7e) cl_header_name_pane_t2

0x669d,	// (0x00092bc0) cl_header_name_pane_t3_ParamLimits

0x669d,	// (0x00092bc0) cl_header_name_pane_t3

0x0002,

0xfa62,	// (0x0009bf85) cl_header_name_pane_t_ParamLimits

0xfa62,	// (0x0009bf85) cl_header_name_pane_t

0x29bd,	// (0x0008eee0) navi_pane_mv_g2_ParamLimits

0xd2df,	// (0x00099802) field_vitu2_entry_pane_g1_ParamLimits

0xd2eb,	// (0x0009980e) field_vitu2_entry_pane_g2_ParamLimits

0xb37a,	// (0x0009789d) field_vitu2_entry_pane_g3_ParamLimits

0xb37a,	// (0x0009789d) field_vitu2_entry_pane_g3

0xf862,	// (0x0009bd85) field_vitu2_entry_pane_g_ParamLimits

0x5622,	// (0x00091b45) cell_vitu2_itu_pane_g1_ParamLimits

0x563a,	// (0x00091b5d) cell_vitu2_itu_pane_g2_ParamLimits

0x563a,	// (0x00091b5d) cell_vitu2_itu_pane_g2

0x0001,

0xf86e,	// (0x0009bd91) cell_vitu2_itu_pane_g_ParamLimits

0xf86e,	// (0x0009bd91) cell_vitu2_itu_pane_g

0x98ba,	// (0x00095ddd) bg_vkb2_func_pane_cp05_ParamLimits

0x98ba,	// (0x00095ddd) bg_vkb2_func_pane_cp05

0x98ba,	// (0x00095ddd) bg_vkb2_func_pane_cp03

0x98ba,	// (0x00095ddd) bg_vkb2_func_pane_cp04

0x98ba,	// (0x00095ddd) bg_vkb2_func_pane_cp10_ParamLimits

0x98ba,	// (0x00095ddd) bg_vkb2_func_pane_cp10

0x010a,	// (0x0008c62d) bg_vkb2_func_pane_cp08

0x6238,	// (0x0009275b) bg_vkb2_func_pane_cp06

0x6244,	// (0x00092767) bg_vkb2_func_pane_cp07

0xd81a,	// (0x00099d3d) bg_vkb2_func_pane_cp11_ParamLimits

0xd81a,	// (0x00099d3d) bg_vkb2_func_pane_cp11

0xd82f,	// (0x00099d52) bg_vkb2_func_pane_cp12_ParamLimits

0xd82f,	// (0x00099d52) bg_vkb2_func_pane_cp12

0x9855,	// (0x00095d78) bg_vkb2_func_pane_cp09

0xd309,	// (0x0009982c) bg_vkb2_func_pane_g1

0xabc0,	// (0x000970e3) bg_vkb2_func_pane_g2

0xd311,	// (0x00099834) bg_vkb2_func_pane_g3

0xd319,	// (0x0009983c) bg_vkb2_func_pane_g4

0xd54f,	// (0x00099a72) bg_vkb2_func_pane_g5

0xd331,	// (0x00099854) bg_vkb2_func_pane_g6

0xd339,	// (0x0009985c) bg_vkb2_func_pane_g7

0xd329,	// (0x0009984c) bg_vkb2_func_pane_g8

0xaba0,	// (0x000970c3) bg_vkb2_func_pane_g9

0x0008,

0xfa69,	// (0x0009bf8c) bg_vkb2_func_pane_g

0x6562,	// (0x00092a85) blid2_tripm_pane_g6_ParamLimits

0x6562,	// (0x00092a85) blid2_tripm_pane_g6

0xd217,	// (0x0009973a) mp4_progress_pane_g1

0x65d9,	// (0x00092afc) blid2_tripm_values_pane_ParamLimits

0x65d9,	// (0x00092afc) blid2_tripm_values_pane

0x66ce,	// (0x00092bf1) blid2_tripm_values_pane_t1

0x66dc,	// (0x00092bff) blid2_tripm_values_pane_t2

0xd956,	// (0x00099e79) blid2_tripm_values_pane_t3

0x66ea,	// (0x00092c0d) blid2_tripm_values_pane_t4

0x66f8,	// (0x00092c1b) blid2_tripm_values_pane_t5

0x6706,	// (0x00092c29) blid2_tripm_values_pane_t6

0xd964,	// (0x00099e87) blid2_tripm_values_pane_t7

0x6714,	// (0x00092c37) blid2_tripm_values_pane_t8

0x6722,	// (0x00092c45) blid2_tripm_values_pane_t9

0x0008,

0xfa7c,	// (0x0009bf9f) blid2_tripm_values_pane_t

0x152a,	// (0x0008da4d) call_video_pane_t1_ParamLimits

0x1544,	// (0x0008da67) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0009b705) call_video_pane_t_ParamLimits

0xfdcc,	// (0x0008c2ef) msg_header_pane_g1_ParamLimits

0xb467,	// (0x0009798a) msg_header_pane_g2_ParamLimits

0xb467,	// (0x0009798a) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x0009b8fa) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x0009b8fa) msg_header_pane_g

0xa07a,	// (0x0009659d) main_clock2_pane_ParamLimits

0x4686,	// (0x00090ba9) grid_clock2_toolbar_pane_ParamLimits

0x4686,	// (0x00090ba9) grid_clock2_toolbar_pane

0x4686,	// (0x00090ba9) listscroll_clock2_pane_ParamLimits

0x4686,	// (0x00090ba9) listscroll_clock2_pane

0x4765,	// (0x00090c88) main_clock2_pane_t3_ParamLimits

0x4765,	// (0x00090c88) main_clock2_pane_t3

0x4788,	// (0x00090cab) main_clock2_pane_t4_ParamLimits

0x4788,	// (0x00090cab) main_clock2_pane_t4

0xd972,	// (0x00099e95) cell_clock2_toolbar_pane

0xd97a,	// (0x00099e9d) cell_clock2_toolbar_pane_cp01

0xd97a,	// (0x00099e9d) cell_clock2_toolbar_pane_cp02

0xd982,	// (0x00099ea5) cell_clock2_toolbar_pane_cp03

0xd98a,	// (0x00099ead) list_clock2_pane

0xb189,	// (0x000976ac) scroll_pane_cp10

0xd992,	// (0x00099eb5) list_single_clock2_pane_ParamLimits

0xd992,	// (0x00099eb5) list_single_clock2_pane

0xa966,	// (0x00096e89) list_highlight_pane_cp08

0xd99f,	// (0x00099ec2) list_single_clock2_pane_t1

0xd9ad,	// (0x00099ed0) list_single_clock2_pane_t2

0x0001,

0xfa8f,	// (0x0009bfb2) list_single_clock2_pane_t

0x9855,	// (0x00095d78) bg_button_pane_cp10

0xd9bb,	// (0x00099ede) cell_clock2_toolbar_pane_g1

0x2cb1,	// (0x0008f1d4) aid_main_viewer_pane_g1_ParamLimits

0x2cb1,	// (0x0008f1d4) aid_main_viewer_pane_g1

0x2cbf,	// (0x0008f1e2) aid_main_viewer_pane_g2_ParamLimits

0x2cbf,	// (0x0008f1e2) aid_main_viewer_pane_g2

0x2ccd,	// (0x0008f1f0) aid_main_viewer_pane_g3_ParamLimits

0x2ccd,	// (0x0008f1f0) aid_main_viewer_pane_g3

0x2cdc,	// (0x0008f1ff) aid_main_viewer_pane_g4_ParamLimits

0x2cdc,	// (0x0008f1ff) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x0009b90b) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x0009b90b) aid_main_viewer_pane_g

0x3678,	// (0x0008fb9b) main_calc_pane_ParamLimits

0x368c,	// (0x0008fbaf) main_dialer2_pane_ParamLimits

0x9855,	// (0x00095d78) main_cam6_pane

0x9855,	// (0x00095d78) main_vid6_pane

0x4692,	// (0x00090bb5) listscroll_gen_pane_cp06_ParamLimits

0x4692,	// (0x00090bb5) listscroll_gen_pane_cp06

0x47ab,	// (0x00090cce) main_clock2_pane_t5_ParamLimits

0x47ab,	// (0x00090cce) main_clock2_pane_t5

0x4809,	// (0x00090d2c) aid_call2_pane_cp10_ParamLimits

0x481b,	// (0x00090d3e) aid_call_pane_cp10_ParamLimits

0xb1f8,	// (0x0009771b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1f8,	// (0x0009771b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x482d,	// (0x00090d50) popup_clock_analogue_window_cp10_g3_ParamLimits

0x482d,	// (0x00090d50) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1f8,	// (0x0009771b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71c,	// (0x0009bc3f) popup_clock_analogue_window_cp10_g_ParamLimits

0x4843,	// (0x00090d66) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4d73,	// (0x00091296) cell_dialer2_keypad_pane_g2_ParamLimits

0x4d73,	// (0x00091296) cell_dialer2_keypad_pane_g2

0x0001,

0xf801,	// (0x0009bd24) cell_dialer2_keypad_pane_g_ParamLimits

0xf801,	// (0x0009bd24) cell_dialer2_keypad_pane_g

0x4d8f,	// (0x000912b2) cell_dialer2_keypad_pane_t1

0x59ce,	// (0x00091ef1) main_cset_text2_pane_ParamLimits

0x59ce,	// (0x00091ef1) main_cset_text2_pane

0xd782,	// (0x00099ca5) area_vitu2_query_pane_g1_ParamLimits

0x00b4,	// (0x0008c5d7) area_vitu2_query_pane_g2_ParamLimits

0xf9ac,	// (0x0009becf) area_vitu2_query_pane_g_ParamLimits

0x6214,	// (0x00092737) area_vitu2_query_pane_t7_ParamLimits

0x6214,	// (0x00092737) area_vitu2_query_pane_t7

0x6238,	// (0x0009275b) bg_button_pane_cp018_ParamLimits

0x6244,	// (0x00092767) bg_button_pane_cp021_ParamLimits

0x00f5,	// (0x0008c618) bg_button_pane_cp022_ParamLimits

0x010a,	// (0x0008c62d) bg_vkb2_func_pane_cp08_ParamLimits

0x6238,	// (0x0009275b) bg_vkb2_func_pane_cp06_ParamLimits

0x6244,	// (0x00092767) bg_vkb2_func_pane_cp07_ParamLimits

0x0120,	// (0x0008c643) input_focus_pane_cp09_ParamLimits

0xa8f1,	// (0x00096e14) cam6_autofocus_pane_ParamLimits

0xa8f1,	// (0x00096e14) cam6_autofocus_pane

0x6730,	// (0x00092c53) cam6_image_uncrop_pane_ParamLimits

0x6730,	// (0x00092c53) cam6_image_uncrop_pane

0x6740,	// (0x00092c63) cam6_indi_pane_ParamLimits

0x6740,	// (0x00092c63) cam6_indi_pane

0x6756,	// (0x00092c79) cam6_mode_pane_ParamLimits

0x6756,	// (0x00092c79) cam6_mode_pane

0x6768,	// (0x00092c8b) cam6_timer_pane_ParamLimits

0x6768,	// (0x00092c8b) cam6_timer_pane

0x6774,	// (0x00092c97) cam6_zoom_pane_ParamLimits

0x6774,	// (0x00092c97) cam6_zoom_pane

0x6782,	// (0x00092ca5) cam6_mode_pane_g1_ParamLimits

0x6782,	// (0x00092ca5) cam6_mode_pane_g1

0x6792,	// (0x00092cb5) cam6_mode_pane_g2_ParamLimits

0x6792,	// (0x00092cb5) cam6_mode_pane_g2

0x67a2,	// (0x00092cc5) cam6_mode_pane_g3_ParamLimits

0x67a2,	// (0x00092cc5) cam6_mode_pane_g3

0x67b2,	// (0x00092cd5) cam6_mode_pane_g4_ParamLimits

0x67b2,	// (0x00092cd5) cam6_mode_pane_g4

0x0003,

0xfa94,	// (0x0009bfb7) cam6_mode_pane_g_ParamLimits

0xfa94,	// (0x0009bfb7) cam6_mode_pane_g

0xcb7e,	// (0x000990a1) bg_tb_trans_pane_cp08_ParamLimits

0xcb7e,	// (0x000990a1) bg_tb_trans_pane_cp08

0xd9c3,	// (0x00099ee6) cam6_battery_pane_ParamLimits

0xd9c3,	// (0x00099ee6) cam6_battery_pane

0xd9d9,	// (0x00099efc) cam6_indi_pane_g1_ParamLimits

0xd9d9,	// (0x00099efc) cam6_indi_pane_g1

0xd9eb,	// (0x00099f0e) cam6_indi_pane_g2_ParamLimits

0xd9eb,	// (0x00099f0e) cam6_indi_pane_g2

0xd9fd,	// (0x00099f20) cam6_indi_pane_g3_ParamLimits

0xd9fd,	// (0x00099f20) cam6_indi_pane_g3

0x0002,

0xfa9d,	// (0x0009bfc0) cam6_indi_pane_g_ParamLimits

0xfa9d,	// (0x0009bfc0) cam6_indi_pane_g

0xda0f,	// (0x00099f32) cam6_indi_pane_t1_ParamLimits

0xda0f,	// (0x00099f32) cam6_indi_pane_t1

0x53a9,	// (0x000918cc) cam6_autofocus_pane_g1

0x53b1,	// (0x000918d4) cam6_autofocus_pane_g2

0x53b9,	// (0x000918dc) cam6_autofocus_pane_g3

0x53c1,	// (0x000918e4) cam6_autofocus_pane_g4

0x0003,

0xfaa4,	// (0x0009bfc7) cam6_autofocus_pane_g

0xda35,	// (0x00099f58) cam6_timer_pane_g1

0xda3d,	// (0x00099f60) cam6_timer_pane_t1

0xda4b,	// (0x00099f6e) cam6_zoom_cont_pane

0xda53,	// (0x00099f76) cam6_zoom_pane_g1

0xda5c,	// (0x00099f7f) cam6_zoom_pane_g2

0x67c2,	// (0x00092ce5) cam6_zoom_pane_g3

0x0002,

0xfaad,	// (0x0009bfd0) cam6_zoom_pane_g

0xa99c,	// (0x00096ebf) cam6_battery_pane_g1

0xa99c,	// (0x00096ebf) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x0009b8bb) cam6_battery_pane_g

0xda53,	// (0x00099f76) cam6_zoom_cont_pane_g1

0xda5c,	// (0x00099f7f) cam6_zoom_cont_pane_g2

0xda65,	// (0x00099f88) cam6_zoom_cont_pane_g3

0x0002,

0xfab4,	// (0x0009bfd7) cam6_zoom_cont_pane_g

0x67e0,	// (0x00092d03) cam6_mode_pane_cp_ParamLimits

0x67e0,	// (0x00092d03) cam6_mode_pane_cp

0x67f2,	// (0x00092d15) cam6_zoom_pane_cp_ParamLimits

0x67f2,	// (0x00092d15) cam6_zoom_pane_cp

0x6800,	// (0x00092d23) vid6_image_uncrop_cif_pane_ParamLimits

0x6800,	// (0x00092d23) vid6_image_uncrop_cif_pane

0x6810,	// (0x00092d33) vid6_image_uncrop_nhd_pane_ParamLimits

0x6810,	// (0x00092d33) vid6_image_uncrop_nhd_pane

0x681f,	// (0x00092d42) vid6_image_uncrop_vga_pane_ParamLimits

0x681f,	// (0x00092d42) vid6_image_uncrop_vga_pane

0x682e,	// (0x00092d51) vid6_image_uncrop_wvga_pane_ParamLimits

0x682e,	// (0x00092d51) vid6_image_uncrop_wvga_pane

0x683d,	// (0x00092d60) vid6_indi_pane_ParamLimits

0x683d,	// (0x00092d60) vid6_indi_pane

0xcb7e,	// (0x000990a1) bg_tb_trans_pane_cp09_ParamLimits

0xcb7e,	// (0x000990a1) bg_tb_trans_pane_cp09

0xda7d,	// (0x00099fa0) cam6_battery_pane_cp_ParamLimits

0xda7d,	// (0x00099fa0) cam6_battery_pane_cp

0xda89,	// (0x00099fac) vid6_indi_pane_g1_ParamLimits

0xda89,	// (0x00099fac) vid6_indi_pane_g1

0xda9b,	// (0x00099fbe) vid6_indi_pane_g2_ParamLimits

0xda9b,	// (0x00099fbe) vid6_indi_pane_g2

0xdaad,	// (0x00099fd0) vid6_indi_pane_g3_ParamLimits

0xdaad,	// (0x00099fd0) vid6_indi_pane_g3

0xdac4,	// (0x00099fe7) vid6_indi_pane_g4_ParamLimits

0xdac4,	// (0x00099fe7) vid6_indi_pane_g4

0xdadb,	// (0x00099ffe) vid6_indi_pane_g5_ParamLimits

0xdadb,	// (0x00099ffe) vid6_indi_pane_g5

0x0004,

0xfabb,	// (0x0009bfde) vid6_indi_pane_g_ParamLimits

0xfabb,	// (0x0009bfde) vid6_indi_pane_g

0xdaf5,	// (0x0009a018) vid6_indi_pane_t1_ParamLimits

0xdaf5,	// (0x0009a018) vid6_indi_pane_t1

0xdb0b,	// (0x0009a02e) vid6_indi_pane_t2_ParamLimits

0xdb0b,	// (0x0009a02e) vid6_indi_pane_t2

0xdb33,	// (0x0009a056) vid6_indi_pane_t3_ParamLimits

0xdb33,	// (0x0009a056) vid6_indi_pane_t3

0xdb5b,	// (0x0009a07e) vid6_indi_pane_t4_ParamLimits

0xdb5b,	// (0x0009a07e) vid6_indi_pane_t4

0x0003,

0xfac6,	// (0x0009bfe9) vid6_indi_pane_t_ParamLimits

0xfac6,	// (0x0009bfe9) vid6_indi_pane_t

0xdb7f,	// (0x0009a0a2) wait_bar_pane_cp08

0x6855,	// (0x00092d78) main_cset_text2_pane_t1_ParamLimits

0x6855,	// (0x00092d78) main_cset_text2_pane_t1

0x67cb,	// (0x00092cee) listscroll_gen_pane_cp06_t1_ParamLimits

0x67cb,	// (0x00092cee) listscroll_gen_pane_cp06_t1

0x9855,	// (0x00095d78) main_cam6_set_pane

0x9fe6,	// (0x00096509) bg_tb_trans_pane_cp06_ParamLimits

0xa755,	// (0x00096c78) cam4_indicators_pane_g1_ParamLimits

0xa766,	// (0x00096c89) cam4_indicators_pane_g2_ParamLimits

0xf83e,	// (0x0009bd61) cam4_indicators_pane_g_ParamLimits

0xa77e,	// (0x00096ca1) cam4_indicators_pane_t1_ParamLimits

0x98ba,	// (0x00095ddd) bg_tb_trans_pane_cp07_ParamLimits

0xa7ac,	// (0x00096ccf) vid4_indicators_pane_g1_ParamLimits

0xa7c2,	// (0x00096ce5) vid4_indicators_pane_g2_ParamLimits

0xa7d6,	// (0x00096cf9) vid4_indicators_pane_g3_ParamLimits

0xa7e9,	// (0x00096d0c) vid4_indicators_pane_g4_ParamLimits

0xf850,	// (0x0009bd73) vid4_indicators_pane_g_ParamLimits

0xa807,	// (0x00096d2a) vid4_indicators_pane_t1_ParamLimits

0xa87d,	// (0x00096da0) vid4_progress_pane_g1_ParamLimits

0xa88d,	// (0x00096db0) vid4_progress_pane_g2_ParamLimits

0x6380,	// (0x000928a3) vid4_progress_pane_g3_ParamLimits

0xa89d,	// (0x00096dc0) vid4_progress_pane_g4_ParamLimits

0xf9f7,	// (0x0009bf1a) vid4_progress_pane_g_ParamLimits

0x6392,	// (0x000928b5) vid4_progress_pane_t1_ParamLimits

0xa8bb,	// (0x00096dde) vid4_progress_pane_t2_ParamLimits

0xa8d4,	// (0x00096df7) vid4_progress_pane_t3_ParamLimits

0xfa02,	// (0x0009bf25) vid4_progress_pane_t_ParamLimits

0x63ac,	// (0x000928cf) wait_bar_pane_cp07_ParamLimits

0x6876,	// (0x00092d99) main_cam6_set_pane_g2_ParamLimits

0x6876,	// (0x00092d99) main_cam6_set_pane_g2

0x689c,	// (0x00092dbf) main_cset6_listscroll_pane_ParamLimits

0x689c,	// (0x00092dbf) main_cset6_listscroll_pane

0x68ba,	// (0x00092ddd) main_cset6_slider_pane_ParamLimits

0x68ba,	// (0x00092ddd) main_cset6_slider_pane

0x68d0,	// (0x00092df3) main_cset6_text2_pane_ParamLimits

0x68d0,	// (0x00092df3) main_cset6_text2_pane

0xdb8e,	// (0x0009a0b1) main_cset6_text_pane

0xdb96,	// (0x0009a0b9) main_cset_list_pane_copy1_ParamLimits

0xdb96,	// (0x0009a0b9) main_cset_list_pane_copy1

0xdba6,	// (0x0009a0c9) scroll_pane_cp028_copy1

0x68de,	// (0x00092e01) cset_list_set_pane_copy1

0x68f2,	// (0x00092e15) aid_position_infowindow_above_copy1

0x68fa,	// (0x00092e1d) aid_position_infowindow_below_copy1

0x6902,	// (0x00092e25) cset_list_set_pane_g1_copy1

0x0145,	// (0x0008c668) cset_list_set_pane_g3_copy1_ParamLimits

0x0145,	// (0x0008c668) cset_list_set_pane_g3_copy1

0x0154,	// (0x0008c677) cset_list_set_pane_t1_copy1_ParamLimits

0x0154,	// (0x0008c677) cset_list_set_pane_t1_copy1

0x98ba,	// (0x00095ddd) list_highlight_pane_cp021_copy1_ParamLimits

0x98ba,	// (0x00095ddd) list_highlight_pane_cp021_copy1

0xdbaf,	// (0x0009a0d2) cset6_slider_pane_ParamLimits

0xdbaf,	// (0x0009a0d2) cset6_slider_pane

0xdbdb,	// (0x0009a0fe) main_cset6_slider_pane_g1_ParamLimits

0xdbdb,	// (0x0009a0fe) main_cset6_slider_pane_g1

0x690a,	// (0x00092e2d) main_cset6_slider_pane_g2_ParamLimits

0x690a,	// (0x00092e2d) main_cset6_slider_pane_g2

0xdc03,	// (0x0009a126) main_cset6_slider_pane_g3_ParamLimits

0xdc03,	// (0x0009a126) main_cset6_slider_pane_g3

0x6932,	// (0x00092e55) main_cset6_slider_pane_g4_ParamLimits

0x6932,	// (0x00092e55) main_cset6_slider_pane_g4

0x693e,	// (0x00092e61) main_cset6_slider_pane_g5_ParamLimits

0x693e,	// (0x00092e61) main_cset6_slider_pane_g5

0xd44e,	// (0x00099971) main_cset6_slider_pane_g7_ParamLimits

0xd44e,	// (0x00099971) main_cset6_slider_pane_g7

0xd45a,	// (0x0009997d) main_cset6_slider_pane_g8_ParamLimits

0xd45a,	// (0x0009997d) main_cset6_slider_pane_g8

0x5a76,	// (0x00091f99) main_cset6_slider_pane_g9_ParamLimits

0x5a76,	// (0x00091f99) main_cset6_slider_pane_g9

0x5a82,	// (0x00091fa5) main_cset6_slider_pane_g10_ParamLimits

0x5a82,	// (0x00091fa5) main_cset6_slider_pane_g10

0x5a8e,	// (0x00091fb1) main_cset6_slider_pane_g11_ParamLimits

0x5a8e,	// (0x00091fb1) main_cset6_slider_pane_g11

0x5a9a,	// (0x00091fbd) main_cset6_slider_pane_g12_ParamLimits

0x5a9a,	// (0x00091fbd) main_cset6_slider_pane_g12

0x5aa6,	// (0x00091fc9) main_cset6_slider_pane_g13_ParamLimits

0x5aa6,	// (0x00091fc9) main_cset6_slider_pane_g13

0x5ab2,	// (0x00091fd5) main_cset6_slider_pane_g14_ParamLimits

0x5ab2,	// (0x00091fd5) main_cset6_slider_pane_g14

0x694c,	// (0x00092e6f) main_cset6_slider_pane_g15_ParamLimits

0x694c,	// (0x00092e6f) main_cset6_slider_pane_g15

0x5ad6,	// (0x00091ff9) main_cset6_slider_pane_g16_ParamLimits

0x5ad6,	// (0x00091ff9) main_cset6_slider_pane_g16

0x5ae4,	// (0x00092007) main_cset6_slider_pane_g17_ParamLimits

0x5ae4,	// (0x00092007) main_cset6_slider_pane_g17

0x0011,

0xfacf,	// (0x0009bff2) main_cset6_slider_pane_g_ParamLimits

0xfacf,	// (0x0009bff2) main_cset6_slider_pane_g

0xdc0f,	// (0x0009a132) main_cset6_slider_pane_t1_ParamLimits

0xdc0f,	// (0x0009a132) main_cset6_slider_pane_t1

0x697c,	// (0x00092e9f) main_cset6_slider_pane_t2_ParamLimits

0x697c,	// (0x00092e9f) main_cset6_slider_pane_t2

0x69a7,	// (0x00092eca) main_cset6_slider_pane_t3_ParamLimits

0x69a7,	// (0x00092eca) main_cset6_slider_pane_t3

0x69d2,	// (0x00092ef5) main_cset6_slider_pane_t4_ParamLimits

0x69d2,	// (0x00092ef5) main_cset6_slider_pane_t4

0x69fd,	// (0x00092f20) main_cset6_slider_pane_t5_ParamLimits

0x69fd,	// (0x00092f20) main_cset6_slider_pane_t5

0xdc50,	// (0x0009a173) main_cset6_slider_pane_t7_ParamLimits

0xdc50,	// (0x0009a173) main_cset6_slider_pane_t7

0x6a2a,	// (0x00092f4d) main_cset6_slider_pane_t8_ParamLimits

0x6a2a,	// (0x00092f4d) main_cset6_slider_pane_t8

0x6a4e,	// (0x00092f71) main_cset6_slider_pane_t9_ParamLimits

0x6a4e,	// (0x00092f71) main_cset6_slider_pane_t9

0x6a72,	// (0x00092f95) main_cset6_slider_pane_t10_ParamLimits

0x6a72,	// (0x00092f95) main_cset6_slider_pane_t10

0x6a96,	// (0x00092fb9) main_cset6_slider_pane_t11_ParamLimits

0x6a96,	// (0x00092fb9) main_cset6_slider_pane_t11

0xdc9d,	// (0x0009a1c0) main_cset6_slider_pane_t14_ParamLimits

0xdc9d,	// (0x0009a1c0) main_cset6_slider_pane_t14

0xdcd6,	// (0x0009a1f9) main_cset6_slider_pane_t15_ParamLimits

0xdcd6,	// (0x0009a1f9) main_cset6_slider_pane_t15

0x000b,

0xfaf4,	// (0x0009c017) main_cset6_slider_pane_t_ParamLimits

0xfaf4,	// (0x0009c017) main_cset6_slider_pane_t

0xdd0f,	// (0x0009a232) cset_slider_pane_g1_copy1

0xdd18,	// (0x0009a23b) cset_slider_pane_g2_copy1

0xdd21,	// (0x0009a244) cset_slider_pane_g3_copy1

0x9855,	// (0x00095d78) bg_popup_sub_pane_cp011_copy1

0xdd33,	// (0x0009a256) main_cset_text_pane_g1_copy1

0xd59e,	// (0x00099ac1) main_cset_text_pane_t1_copy1

0xd5ac,	// (0x00099acf) main_cset_text_pane_t2_copy1

0xd5ba,	// (0x00099add) main_cset_text_pane_t3_copy1

0xd5c8,	// (0x00099aeb) main_cset_text_pane_t4_copy1

0xd5d6,	// (0x00099af9) main_cset_text_pane_t5_copy1

0xdd3b,	// (0x0009a25e) main_cset_text_pane_t6_copy1

0xdd49,	// (0x0009a26c) main_cset_text_pane_t7_copy1

0x6855,	// (0x00092d78) main_cset_text2_pane_t1_copy1

0x98ba,	// (0x00095ddd) main_ncimui_pane

0x391a,	// (0x0008fe3d) popup_query_ncimui_window_ParamLimits

0x391a,	// (0x0008fe3d) popup_query_ncimui_window

0xa42e,	// (0x00096951) field_cale_ev2_pane_g4_ParamLimits

0xa42e,	// (0x00096951) field_cale_ev2_pane_g4

0x4c3e,	// (0x00091161) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4c3e,	// (0x00091161) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d8,	// (0x0009bcfb) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d8,	// (0x0009bcfb) cell_video_dialer_keypad_pane_g

0x4c56,	// (0x00091179) cell_video_dialer_keypad_pane_t1

0x9855,	// (0x00095d78) bg_popup_window_pane_cp012

0xc599,	// (0x00098abc) heading_pane_cp06

0xdd75,	// (0x0009a298) ncim_query_content_pane

0x9855,	// (0x00095d78) bg_popup_heading_pane_cp01

0xdd7d,	// (0x0009a2a0) ncim_heading_pane_t1

0xdd8b,	// (0x0009a2ae) ncim_indicator_popup_pane

0xdd9d,	// (0x0009a2c0) ncim_query_button_pane

0xddb3,	// (0x0009a2d6) ncim_query_content_pane_t1

0xddc5,	// (0x0009a2e8) ncim_query_content_pane_t2

0x0005,

0xfb38,	// (0x0009c05b) ncim_query_content_pane_t

0xddff,	// (0x0009a322) ncim_query_list_pane

0xde11,	// (0x0009a334) ncim_query_popup_pane

0xdd8b,	// (0x0009a2ae) ncim_indicator_popup_pane_ParamLimits

0x6be5,	// (0x00093108) ncim_query_content_pane_g1_ParamLimits

0x6be5,	// (0x00093108) ncim_query_content_pane_g1

0xddb3,	// (0x0009a2d6) ncim_query_content_pane_t1_ParamLimits

0xddc5,	// (0x0009a2e8) ncim_query_content_pane_t2_ParamLimits

0x6bf1,	// (0x00093114) ncim_query_content_pane_t3_ParamLimits

0x6bf1,	// (0x00093114) ncim_query_content_pane_t3

0x6c19,	// (0x0009313c) ncim_query_content_pane_t4_ParamLimits

0x6c19,	// (0x0009313c) ncim_query_content_pane_t4

0x6c41,	// (0x00093164) ncim_query_content_pane_t5_ParamLimits

0x6c41,	// (0x00093164) ncim_query_content_pane_t5

0xddd7,	// (0x0009a2fa) ncim_query_content_pane_t6_ParamLimits

0xddd7,	// (0x0009a2fa) ncim_query_content_pane_t6

0xfb38,	// (0x0009c05b) ncim_query_content_pane_t_ParamLimits

0xddff,	// (0x0009a322) ncim_query_list_pane_ParamLimits

0xde11,	// (0x0009a334) ncim_query_popup_pane_ParamLimits

0xde25,	// (0x0009a348) wait_bar_pane_cp04

0x9855,	// (0x00095d78) input_focus_pane_cp011

0xde2d,	// (0x0009a350) ncim_query_popup_pane_t1

0xde3b,	// (0x0009a35e) ncim_list_query_list_pane_ParamLimits

0xde3b,	// (0x0009a35e) ncim_list_query_list_pane

0x9855,	// (0x00095d78) bg_button_pane_cp027

0xde4e,	// (0x0009a371) ncim_query_button_pane_g1

0x9855,	// (0x00095d78) list_highlight_pane_cp012

0xde58,	// (0x0009a37b) ncim_list_query_list_pane_g1

0xde60,	// (0x0009a383) ncim_list_query_list_pane_t1

0xa772,	// (0x00096c95) cam4_indicators_pane_g3_ParamLimits

0xa772,	// (0x00096c95) cam4_indicators_pane_g3

0xa7f5,	// (0x00096d18) vid4_indicators_pane_g5_ParamLimits

0xa7f5,	// (0x00096d18) vid4_indicators_pane_g5

0xa8ac,	// (0x00096dcf) vid4_progress_pane_g5_ParamLimits

0xa8ac,	// (0x00096dcf) vid4_progress_pane_g5

0x6ad0,	// (0x00092ff3) main_ncimui_pane_g1

0x6b39,	// (0x0009305c) ncimui_group_query_pane_ParamLimits

0x6b39,	// (0x0009305c) ncimui_group_query_pane

0x6b81,	// (0x000930a4) ncimui_list_pane_ParamLimits

0x6b81,	// (0x000930a4) ncimui_list_pane

0x6ba8,	// (0x000930cb) ncimui_text_pane_ParamLimits

0x6ba8,	// (0x000930cb) ncimui_text_pane

0x6c69,	// (0x0009318c) ncimui_text_pane_t1_ParamLimits

0x6c69,	// (0x0009318c) ncimui_text_pane_t1

0xde6e,	// (0x0009a391) ncimui_list_single_graphic_pane_ParamLimits

0xde6e,	// (0x0009a391) ncimui_list_single_graphic_pane

0x6c87,	// (0x000931aa) ncimui_query_pane_ParamLimits

0x6c87,	// (0x000931aa) ncimui_query_pane

0x9855,	// (0x00095d78) list_highlight_pane_cp013

0xde7e,	// (0x0009a3a1) ncim_list_query_list_pane_t1_copy1

0xde58,	// (0x0009a37b) ncim_list_single_graphic_pane_g1

0x6c9a,	// (0x000931bd) ncim_query_button_pane_cp01

0x6ca6,	// (0x000931c9) ncim_query_entry_pane_ParamLimits

0x6ca6,	// (0x000931c9) ncim_query_entry_pane

0x6cb9,	// (0x000931dc) ncimui_query_pane_g1

0x6cc5,	// (0x000931e8) ncimui_query_pane_t1_ParamLimits

0x6cc5,	// (0x000931e8) ncimui_query_pane_t1

0x98ba,	// (0x00095ddd) input_focus_pane_cp012

0xde8c,	// (0x0009a3af) ncim_query_entry_pane_t1

0xa07a,	// (0x0009659d) main_im_pane_ParamLimits

0x98ba,	// (0x00095ddd) main_mobtv_pane_ParamLimits

0x98ba,	// (0x00095ddd) main_mobtv_pane

0x6964,	// (0x00092e87) main_cset6_slider_pane_g18_ParamLimits

0x6964,	// (0x00092e87) main_cset6_slider_pane_g18

0x6970,	// (0x00092e93) main_cset6_slider_pane_g19_ParamLimits

0x6970,	// (0x00092e93) main_cset6_slider_pane_g19

0xa002,	// (0x00096525) bg_main_mobtv_pane_ParamLimits

0xa002,	// (0x00096525) bg_main_mobtv_pane

0x6cde,	// (0x00093201) main_mobtv_info_pane

0x6ce9,	// (0x0009320c) main_mobtv_loading_pane_ParamLimits

0x6ce9,	// (0x0009320c) main_mobtv_loading_pane

0xde9e,	// (0x0009a3c1) main_mobtv_pg_channel_list_pane

0xdea8,	// (0x0009a3cb) main_mobtv_pg_hdr_pane

0x6cf6,	// (0x00093219) main_mobtv_programe_curr_pane_ParamLimits

0x6cf6,	// (0x00093219) main_mobtv_programe_curr_pane

0x6d03,	// (0x00093226) main_mobtv_programe_next_pane_ParamLimits

0x6d03,	// (0x00093226) main_mobtv_programe_next_pane

0xdeb1,	// (0x0009a3d4) popup_mobtv_noti_window

0xa99c,	// (0x00096ebf) main_tv_pg_hdr_pane_g1

0xdebb,	// (0x0009a3de) main_tv_pg_hdr_pane_g2

0xdec3,	// (0x0009a3e6) main_tv_pg_hdr_pane_g3

0xdecb,	// (0x0009a3ee) main_tv_pg_hdr_pane_g4

0xded3,	// (0x0009a3f6) main_tv_pg_hdr_pane_g5

0xdedd,	// (0x0009a400) main_tv_pg_hdr_pane_g6

0xdee7,	// (0x0009a40a) main_tv_pg_hdr_pane_g7

0xdef1,	// (0x0009a414) main_tv_pg_hdr_pane_g8

0xdefb,	// (0x0009a41e) main_tv_pg_hdr_pane_g9

0xdf05,	// (0x0009a428) main_tv_pg_hdr_pane_g10

0xdf0f,	// (0x0009a432) main_tv_pg_hdr_pane_g11

0x000a,

0xfb45,	// (0x0009c068) main_tv_pg_hdr_pane_g

0xdf19,	// (0x0009a43c) main_tv_pg_hdr_pane_t1

0xdf27,	// (0x0009a44a) main_tv_pg_hdr_pane_t2

0xdf35,	// (0x0009a458) main_tv_pg_hdr_pane_t3

0xdf45,	// (0x0009a468) main_tv_pg_hdr_pane_t4

0xdf55,	// (0x0009a478) main_tv_pg_hdr_pane_t5

0x0004,

0xfb5c,	// (0x0009c07f) main_tv_pg_hdr_pane_t

0xdf65,	// (0x0009a488) single_mobtv_pg_channel_pane_ParamLimits

0xdf65,	// (0x0009a488) single_mobtv_pg_channel_pane

0xdf77,	// (0x0009a49a) single_mobtv_pg_channel_table_pane

0xdf80,	// (0x0009a4a3) single_mobtv_pg_channel_thumb_pane

0xdf89,	// (0x0009a4ac) single_tv_pg_channel_pane_g1

0xdf92,	// (0x0009a4b5) single_tv_pg_channel_pane_g2

0x0001,

0xfb67,	// (0x0009c08a) single_tv_pg_channel_pane_g

0x9fe6,	// (0x00096509) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9fe6,	// (0x00096509) bg_single_mobtv_pg_channel_thumb_pane

0xdf9b,	// (0x0009a4be) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf9b,	// (0x0009a4be) single_mobtv_pg_channel_thumb_pane_g1

0xdfa9,	// (0x0009a4cc) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfa9,	// (0x0009a4cc) single_mobtv_pg_channel_thumb_pane_g2

0xdfb5,	// (0x0009a4d8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfb5,	// (0x0009a4d8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb6c,	// (0x0009c08f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb6c,	// (0x0009c08f) single_mobtv_pg_channel_thumb_pane_g

0xdfc1,	// (0x0009a4e4) single_mobtv_pg_channel_thumb_pane_t1

0xdfcf,	// (0x0009a4f2) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb73,	// (0x0009c096) single_mobtv_pg_channel_thumb_pane_t

0xa99c,	// (0x00096ebf) bg_single_mobtv_pg_channel_table_pane_g1

0xa99c,	// (0x00096ebf) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x0009b8bb) bg_single_mobtv_pg_channel_table_pane_g

0xdfdd,	// (0x0009a500) single_mobtv_pg_channel_table_pane_t1

0xdfeb,	// (0x0009a50e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb78,	// (0x0009c09b) single_mobtv_pg_channel_table_pane_t

0x6d18,	// (0x0009323b) main_mobtv_info_pane_g1_ParamLimits

0x6d18,	// (0x0009323b) main_mobtv_info_pane_g1

0x6d36,	// (0x00093259) main_mobtv_info_pane_t1_ParamLimits

0x6d36,	// (0x00093259) main_mobtv_info_pane_t1

0x6dae,	// (0x000932d1) main_mobtv_info_pane_t2_ParamLimits

0x6dae,	// (0x000932d1) main_mobtv_info_pane_t2

0x0002,

0xfb82,	// (0x0009c0a5) main_mobtv_info_pane_t_ParamLimits

0xfb82,	// (0x0009c0a5) main_mobtv_info_pane_t

0x6e3f,	// (0x00093362) wait_bar_pane_cp05

0x6e51,	// (0x00093374) main_mobtv_loading_pane_g1_ParamLimits

0x6e51,	// (0x00093374) main_mobtv_loading_pane_g1

0x6e62,	// (0x00093385) main_mobtv_loading_pane_g2_ParamLimits

0x6e62,	// (0x00093385) main_mobtv_loading_pane_g2

0x6e6e,	// (0x00093391) main_mobtv_loading_pane_g3_ParamLimits

0x6e6e,	// (0x00093391) main_mobtv_loading_pane_g3

0x0002,

0xfb89,	// (0x0009c0ac) main_mobtv_loading_pane_g_ParamLimits

0xfb89,	// (0x0009c0ac) main_mobtv_loading_pane_g

0xdff9,	// (0x0009a51c) main_mobtv_loading_pane_t1_ParamLimits

0xdff9,	// (0x0009a51c) main_mobtv_loading_pane_t1

0xe011,	// (0x0009a534) main_mobtv_loading_pane_t2_ParamLimits

0xe011,	// (0x0009a534) main_mobtv_loading_pane_t2

0x0001,

0xfb90,	// (0x0009c0b3) main_mobtv_loading_pane_t_ParamLimits

0xfb90,	// (0x0009c0b3) main_mobtv_loading_pane_t

0x6e81,	// (0x000933a4) wait_bar_pane_cp06_ParamLimits

0x6e81,	// (0x000933a4) wait_bar_pane_cp06

0xe035,	// (0x0009a558) main_mobtv_programe_curr_pane_t1

0xe043,	// (0x0009a566) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb95,	// (0x0009c0b8) main_mobtv_programe_curr_pane_t

0xe051,	// (0x0009a574) main_mobtv_programe_next_pane_t1

0xe05f,	// (0x0009a582) main_mobtv_programe_next_pane_t2

0xe06d,	// (0x0009a590) main_mobtv_programe_next_pane_t3

0x0002,

0xfb9a,	// (0x0009c0bd) main_mobtv_programe_next_pane_t

0x9855,	// (0x00095d78) bg_popup_mobtv_noti_window_pane

0xe07b,	// (0x0009a59e) popup_mobtv_noti_window_g1

0xe083,	// (0x0009a5a6) popup_mobtv_noti_window_t1

0xe091,	// (0x0009a5b4) popup_mobtv_noti_window_t2

0x0001,

0xfba1,	// (0x0009c0c4) popup_mobtv_noti_window_t

0xa99c,	// (0x00096ebf) bg_popup_mobtv_noti_window_pane_g1

0x9855,	// (0x00095d78) sc_clock_pane

0x9855,	// (0x00095d78) main_fs_bigclock_pane

0x65c3,	// (0x00092ae6) blid2_tripm_pane_t4_ParamLimits

0x65c3,	// (0x00092ae6) blid2_tripm_pane_t4

0x6e90,	// (0x000933b3) sc_clock_pane_g1_ParamLimits

0x6e90,	// (0x000933b3) sc_clock_pane_g1

0x6ea2,	// (0x000933c5) sc_clock_pane_t1_ParamLimits

0x6ea2,	// (0x000933c5) sc_clock_pane_t1

0x6ec6,	// (0x000933e9) sc_clock_pane_t2_ParamLimits

0x6ec6,	// (0x000933e9) sc_clock_pane_t2

0x6ede,	// (0x00093401) sc_clock_pane_t3_ParamLimits

0x6ede,	// (0x00093401) sc_clock_pane_t3

0x0004,

0xfba6,	// (0x0009c0c9) sc_clock_pane_t_ParamLimits

0xfba6,	// (0x0009c0c9) sc_clock_pane_t

0x7deb,	// (0x0009430e) main_fs_bigclock_indicator_pane_ParamLimits

0x7deb,	// (0x0009430e) main_fs_bigclock_indicator_pane

0x6fa4,	// (0x000934c7) main_fs_bigclock_pane_g1_ParamLimits

0x6fa4,	// (0x000934c7) main_fs_bigclock_pane_g1

0x7df7,	// (0x0009431a) main_fs_bigclock_pane_t1_ParamLimits

0x7df7,	// (0x0009431a) main_fs_bigclock_pane_t1

0x7e09,	// (0x0009432c) main_fs_bigclock_pane_t2_ParamLimits

0x7e09,	// (0x0009432c) main_fs_bigclock_pane_t2

0x7e1d,	// (0x00094340) main_fs_bigclock_pane_t3_ParamLimits

0x7e1d,	// (0x00094340) main_fs_bigclock_pane_t3

0x0002,

0xfd37,	// (0x0009c25a) main_fs_bigclock_pane_t_ParamLimits

0xfd37,	// (0x0009c25a) main_fs_bigclock_pane_t

0xe779,	// (0x0009ac9c) main_fs_bigclock_indicator_pane_g1

0xdda5,	// (0x0009a2c8) ncim_query_content_pane_g2_ParamLimits

0xdda5,	// (0x0009a2c8) ncim_query_content_pane_g2

0x0001,

0xfb33,	// (0x0009c056) ncim_query_content_pane_g_ParamLimits

0xfb33,	// (0x0009c056) ncim_query_content_pane_g

0x6ef5,	// (0x00093418) sc_clock_pane_t4_ParamLimits

0x6ef5,	// (0x00093418) sc_clock_pane_t4

0x98ba,	// (0x00095ddd) main_radioblah_pane

0xa6e5,	// (0x00096c08) cell_call4_button_pane_t1_copy1_ParamLimits

0xa6e5,	// (0x00096c08) cell_call4_button_pane_t1_copy1

0x6ae8,	// (0x0009300b) main_ncimui_pane_t1_ParamLimits

0x6ae8,	// (0x0009300b) main_ncimui_pane_t1

0x6b02,	// (0x00093025) main_ncimui_pane_t2_ParamLimits

0x6b02,	// (0x00093025) main_ncimui_pane_t2

0x0002,

0xfb2c,	// (0x0009c04f) main_ncimui_pane_t_ParamLimits

0xfb2c,	// (0x0009c04f) main_ncimui_pane_t

0xe09f,	// (0x0009a5c2) main_radioblah_anim_pane_ParamLimits

0xe09f,	// (0x0009a5c2) main_radioblah_anim_pane

0xe0b0,	// (0x0009a5d3) main_radioblah_info_pane_ParamLimits

0xe0b0,	// (0x0009a5d3) main_radioblah_info_pane

0xe0c4,	// (0x0009a5e7) main_radioblah_pane_t1_ParamLimits

0xe0c4,	// (0x0009a5e7) main_radioblah_pane_t1

0xe0e0,	// (0x0009a603) main_radioblah_pane_t2_ParamLimits

0xe0e0,	// (0x0009a603) main_radioblah_pane_t2

0x0003,

0xfbc7,	// (0x0009c0ea) main_radioblah_pane_t_ParamLimits

0xfbc7,	// (0x0009c0ea) main_radioblah_pane_t

0x714d,	// (0x00093670) main_radioblah_rocker_ctrl_pane_ParamLimits

0x714d,	// (0x00093670) main_radioblah_rocker_ctrl_pane

0xe128,	// (0x0009a64b) main_radioblah_info_pane_t1_ParamLimits

0xe128,	// (0x0009a64b) main_radioblah_info_pane_t1

0x71a5,	// (0x000936c8) main_radioblah_info_pane_t2_ParamLimits

0x71a5,	// (0x000936c8) main_radioblah_info_pane_t2

0x0003,

0xfbd0,	// (0x0009c0f3) main_radioblah_info_pane_t_ParamLimits

0xfbd0,	// (0x0009c0f3) main_radioblah_info_pane_t

0xa99c,	// (0x00096ebf) main_radioblah_rocker_ctrl_pane_g1

0x7255,	// (0x00093778) main_radioblah_rocker_ctrl_pane_g2

0x725d,	// (0x00093780) main_radioblah_rocker_ctrl_pane_g3

0x7265,	// (0x00093788) main_radioblah_rocker_ctrl_pane_g4

0x726d,	// (0x00093790) main_radioblah_rocker_ctrl_pane_g5

0x7275,	// (0x00093798) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd9,	// (0x0009c0fc) main_radioblah_rocker_ctrl_pane_g

0x6855,	// (0x00092d78) main_cset_text2_pane_t1_copy1_ParamLimits

0xa743,	// (0x00096c66) cam4_image_uncrop_qvga_pane

0xa798,	// (0x00096cbb) vid4_image_uncrop_qcif_pane

0xa8f1,	// (0x00096e14) cam6_image_uncrop_qvga_pane_ParamLimits

0xa8f1,	// (0x00096e14) cam6_image_uncrop_qvga_pane

0xda6d,	// (0x00099f90) vid6_image_uncrop_qcif_pane_ParamLimits

0xda6d,	// (0x00099f90) vid6_image_uncrop_qcif_pane

0x9855,	// (0x00095d78) bg_popup_preview_window_pane_cp03

0xdd57,	// (0x0009a27a) list_cset_text2_pane

0xdd5f,	// (0x0009a282) main_cset6_text2_pane_g1

0xdd67,	// (0x0009a28a) main_cset6_text2_pane_t1

0xe162,	// (0x0009a685) list_cset_text2_pane_t1_ParamLimits

0xe162,	// (0x0009a685) list_cset_text2_pane_t1

0x98ba,	// (0x00095ddd) main_radioblah_pane_ParamLimits

0x6e2b,	// (0x0009334e) main_mobtv_info_pane_t3_ParamLimits

0x6e2b,	// (0x0009334e) main_mobtv_info_pane_t3

0x713b,	// (0x0009365e) main_radioblah_pane_g1

0x7175,	// (0x00093698) main_radioblah_info_pane_g1

0x71fa,	// (0x0009371d) main_radioblah_info_pane_t3_ParamLimits

0x71fa,	// (0x0009371d) main_radioblah_info_pane_t3

0x24df,	// (0x0008ea02) highlight_cell_cale_month_pane_ParamLimits

0x24df,	// (0x0008ea02) highlight_cell_cale_month_pane

0x9855,	// (0x00095d78) main_phob_fisheye_pane

0xcd4a,	// (0x0009926d) scroll_pane_cp0031_ParamLimits

0xcd4a,	// (0x0009926d) scroll_pane_cp0031

0xdb7f,	// (0x0009a0a2) wait_bar_pane_cp08_ParamLimits

0x68de,	// (0x00092e01) cset_list_set_pane_copy1_ParamLimits

0xe17c,	// (0x0009a69f) highlight_cell_cale_month_pane_g1

0x727d,	// (0x000937a0) highlight_cell_cale_month_pane_t1

0xd7d6,	// (0x00099cf9) list_gen_pane_cp01

0xd439,	// (0x0009995c) scroll_pane_01

0x728b,	// (0x000937ae) list_single_double_fisheye_pane

0x0186,	// (0x0008c6a9) list_double_fisheye_pane_g1_ParamLimits

0x0186,	// (0x0008c6a9) list_double_fisheye_pane_g1

0x0192,	// (0x0008c6b5) list_double_fisheye_pane_g2_ParamLimits

0x0192,	// (0x0008c6b5) list_double_fisheye_pane_g2

0x7294,	// (0x000937b7) list_double_fisheye_pane_g3_ParamLimits

0x7294,	// (0x000937b7) list_double_fisheye_pane_g3

0x0004,

0xfbe6,	// (0x0009c109) list_double_fisheye_pane_g_ParamLimits

0xfbe6,	// (0x0009c109) list_double_fisheye_pane_g

0x01c3,	// (0x0008c6e6) list_double_fisheye_pane_t1_ParamLimits

0x01c3,	// (0x0008c6e6) list_double_fisheye_pane_t1

0x01de,	// (0x0008c701) list_double_fisheye_pane_t2_ParamLimits

0x01de,	// (0x0008c701) list_double_fisheye_pane_t2

0x0001,

0xfbf1,	// (0x0009c114) list_double_fisheye_pane_t_ParamLimits

0xfbf1,	// (0x0009c114) list_double_fisheye_pane_t

0x9855,	// (0x00095d78) main_call5_pane

0x6f20,	// (0x00093443) sc_swipe_pane_ParamLimits

0x6f20,	// (0x00093443) sc_swipe_pane

0x72b3,	// (0x000937d6) call5_image_pane_ParamLimits

0x72b3,	// (0x000937d6) call5_image_pane

0x72d0,	// (0x000937f3) call5_swipe_1_pane_ParamLimits

0x72d0,	// (0x000937f3) call5_swipe_1_pane

0x72e3,	// (0x00093806) call5_swipe_2_pane_ParamLimits

0x72e3,	// (0x00093806) call5_swipe_2_pane

0x730e,	// (0x00093831) popup_call5_audio_first_window_ParamLimits

0x730e,	// (0x00093831) popup_call5_audio_first_window

0x9fe6,	// (0x00096509) call5_swipe_1_pane_g1_ParamLimits

0x9fe6,	// (0x00096509) call5_swipe_1_pane_g1

0xe184,	// (0x0009a6a7) call5_swipe_1_pane_g2_ParamLimits

0xe184,	// (0x0009a6a7) call5_swipe_1_pane_g2

0x0001,

0xfbf6,	// (0x0009c119) call5_swipe_1_pane_g_ParamLimits

0xfbf6,	// (0x0009c119) call5_swipe_1_pane_g

0xe190,	// (0x0009a6b3) call5_swipe_1_pane_t1_ParamLimits

0xe190,	// (0x0009a6b3) call5_swipe_1_pane_t1

0x9fe6,	// (0x00096509) call5_swipe_2_pane_g1_ParamLimits

0x9fe6,	// (0x00096509) call5_swipe_2_pane_g1

0xe1a5,	// (0x0009a6c8) call5_swipe_2_pane_g2_ParamLimits

0xe1a5,	// (0x0009a6c8) call5_swipe_2_pane_g2

0x0001,

0xfbfb,	// (0x0009c11e) call5_swipe_2_pane_g_ParamLimits

0xfbfb,	// (0x0009c11e) call5_swipe_2_pane_g

0xe1b1,	// (0x0009a6d4) call5_swipe_2_pane_t1_ParamLimits

0xe1b1,	// (0x0009a6d4) call5_swipe_2_pane_t1

0xe1c6,	// (0x0009a6e9) sc_swipe_pane_g1_ParamLimits

0xe1c6,	// (0x0009a6e9) sc_swipe_pane_g1

0xe1d3,	// (0x0009a6f6) sc_swipe_pane_g2_ParamLimits

0xe1d3,	// (0x0009a6f6) sc_swipe_pane_g2

0x0001,

0xfc00,	// (0x0009c123) sc_swipe_pane_g_ParamLimits

0xfc00,	// (0x0009c123) sc_swipe_pane_g

0xe1df,	// (0x0009a702) sc_swipe_pane_t1_ParamLimits

0xe1df,	// (0x0009a702) sc_swipe_pane_t1

0x9855,	// (0x00095d78) main_cmail_launcher_pane

0x7323,	// (0x00093846) aid_size_cell_cmail_l_ParamLimits

0x7323,	// (0x00093846) aid_size_cell_cmail_l

0x7338,	// (0x0009385b) grid_cmail_l_pane_ParamLimits

0x7338,	// (0x0009385b) grid_cmail_l_pane

0x7352,	// (0x00093875) cell_cmail_l_pane_ParamLimits

0x7352,	// (0x00093875) cell_cmail_l_pane

0x7373,	// (0x00093896) cell_cmail_l_pane_g1_ParamLimits

0x7373,	// (0x00093896) cell_cmail_l_pane_g1

0x737f,	// (0x000938a2) cell_cmail_l_pane_t1_ParamLimits

0x737f,	// (0x000938a2) cell_cmail_l_pane_t1

0x7395,	// (0x000938b8) cell_cmail_l_pane_t2_ParamLimits

0x7395,	// (0x000938b8) cell_cmail_l_pane_t2

0x0001,

0xfc05,	// (0x0009c128) cell_cmail_l_pane_t_ParamLimits

0xfc05,	// (0x0009c128) cell_cmail_l_pane_t

0x98ba,	// (0x00095ddd) grid_highlight_pane_cp018_ParamLimits

0x98ba,	// (0x00095ddd) grid_highlight_pane_cp018

0x074e,	// (0x0008cc71) main2_pane_ParamLimits

0x074e,	// (0x0008cc71) main2_pane

0xa12d,	// (0x00096650) popup_sp_fs_action_menu_bg_pane_g1

0xa135,	// (0x00096658) popup_sp_fs_action_menu_bg_pane_g2

0xa13d,	// (0x00096660) popup_sp_fs_action_menu_bg_pane_g3

0xa145,	// (0x00096668) popup_sp_fs_action_menu_bg_pane_g4

0xa14d,	// (0x00096670) popup_sp_fs_action_menu_bg_pane_g5

0xa155,	// (0x00096678) popup_sp_fs_action_menu_bg_pane_g6

0xa15d,	// (0x00096680) popup_sp_fs_action_menu_bg_pane_g7

0xa165,	// (0x00096688) popup_sp_fs_action_menu_bg_pane_g8

0xa16d,	// (0x00096690) popup_sp_fs_action_menu_bg_pane_g9

0xa175,	// (0x00096698) popup_sp_fs_action_menu_bg_pane_g10

0xa175,	// (0x00096698) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0009b628) popup_sp_fs_action_menu_bg_pane_g

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g3_g1

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g3_g2

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0009b6d6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0009b6d6) list_medium_line_x2_t3_g3_g

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g3_t1

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g3_t2

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0009b6dd) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0009b6dd) list_medium_line_x2_t3_g3_t

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g2_g1

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0009b6e4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0009b6e4) list_medium_line_x2_t3_g2_g

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g2_t1

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g2_t2

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0009b6dd) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0009b6dd) list_medium_line_x2_t3_g2_t

0x9fe6,	// (0x00096509) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t4_g4_g1

0x9fe6,	// (0x00096509) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t4_g4_g2

0x9fe6,	// (0x00096509) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t4_g4_g3

0x9fe6,	// (0x00096509) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0009b6e9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0009b6e9) list_medium_line_x2_t4_g4_g

0xa96e,	// (0x00096e91) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t4_g4_t1

0xa96e,	// (0x00096e91) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t4_g4_t2

0xa96e,	// (0x00096e91) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t4_g4_t3

0xa96e,	// (0x00096e91) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0009b6f2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0009b6f2) list_medium_line_x2_t4_g4_t

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g4_g1

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g4_g2

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g4_g3

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0009b6e9) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0009b6e9) list_medium_line_x2_t2_g4_g

0xa96e,	// (0x00096e91) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t2_g4_t1

0xa96e,	// (0x00096e91) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x0009b6b9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x0009b6b9) list_medium_line_x2_t2_g4_t

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g3_g1

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g3_g2

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0009b6d6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0009b6d6) list_medium_line_x2_t2_g3_g

0xa96e,	// (0x00096e91) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t2_g3_t1

0xa96e,	// (0x00096e91) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x0009b6b9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x0009b6b9) list_medium_line_x2_t2_g3_t

0x2636,	// (0x0008eb59) main_sp_fs_list_pane_ParamLimits

0x2636,	// (0x0008eb59) main_sp_fs_list_pane

0xba82,	// (0x00097fa5) sp_fs_scroll_pane_ParamLimits

0xba82,	// (0x00097fa5) sp_fs_scroll_pane

0xaefa,	// (0x0009741d) list_medium_line_x2_t3_t1

0xaefa,	// (0x0009741d) list_medium_line_x2_t3_t2

0xaefa,	// (0x0009741d) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x0009b79f) list_medium_line_x2_t3_t

0xaefa,	// (0x0009741d) list_medium_line_x3_t4_t1

0xaefa,	// (0x0009741d) list_medium_line_x3_t4_t2

0xaefa,	// (0x0009741d) list_medium_line_x3_t4_t3

0xaefa,	// (0x0009741d) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x0009b7a6) list_medium_line_x3_t4_t

0xaefa,	// (0x0009741d) list_medium_line_x4_t5_t1

0xaefa,	// (0x0009741d) list_medium_line_x4_t5_t2

0xaefa,	// (0x0009741d) list_medium_line_x4_t5_t3

0xaefa,	// (0x0009741d) list_medium_line_x4_t5_t4

0xaefa,	// (0x0009741d) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x0009b7af) list_medium_line_x4_t5_t

0x9fe6,	// (0x00096509) list_medium_line_t4_g4_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_t4_g4_g1

0x9fe6,	// (0x00096509) list_medium_line_t4_g4_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_t4_g4_g2

0x9fe6,	// (0x00096509) list_medium_line_t4_g4_g3_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_t4_g4_g3

0x9fe6,	// (0x00096509) list_medium_line_t4_g4_g4_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0009b6e9) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0009b6e9) list_medium_line_t4_g4_g

0xa96e,	// (0x00096e91) list_medium_line_t4_g4_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t4_g4_t1

0xa96e,	// (0x00096e91) list_medium_line_t4_g4_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t4_g4_t2

0xa96e,	// (0x00096e91) list_medium_line_t4_g4_t3_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t4_g4_t3

0xa96e,	// (0x00096e91) list_medium_line_t4_g4_t4_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0009b6f2) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0009b6f2) list_medium_line_t4_g4_t

0x26e4,	// (0x0008ec07) chi_dic_find_pane_g1

0x36a0,	// (0x0008fbc3) main_tport_pane

0xaefa,	// (0x0009741d) list_medium_line_plain_t1

0x9fe6,	// (0x00096509) list_medium_line_t2_g2_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_t2_g2_g1

0x9fe6,	// (0x00096509) list_medium_line_t2_g2_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0009b6e4) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0009b6e4) list_medium_line_t2_g2_g

0xa96e,	// (0x00096e91) list_medium_line_t2_g2_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t2_g2_t1

0xa96e,	// (0x00096e91) list_medium_line_t2_g2_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x0009b6b9) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x0009b6b9) list_medium_line_t2_g2_t

0x63bf,	// (0x000928e2) aid_sp_fs_list_icon_a_sm

0xa8e9,	// (0x00096e0c) aid_sp_fs_list_icon_d

0xba79,	// (0x00097f9c) aid_sp_fs_text_primary

0x63c7,	// (0x000928ea) aid_sp_fs_text_secondary

0x9855,	// (0x00095d78) list_medium_line

0x9855,	// (0x00095d78) list_medium_line_g2

0x9855,	// (0x00095d78) list_medium_line_g3

0x9855,	// (0x00095d78) list_medium_line_plain

0x9855,	// (0x00095d78) list_medium_line_plain_t2

0x9855,	// (0x00095d78) list_medium_line_plain_t3

0x9855,	// (0x00095d78) list_medium_line_right_icon

0x9855,	// (0x00095d78) list_medium_line_right_iconx2

0x9855,	// (0x00095d78) list_medium_line_t2

0x9855,	// (0x00095d78) list_medium_line_t2_g2

0x9855,	// (0x00095d78) list_medium_line_t2_g3

0x9855,	// (0x00095d78) list_medium_line_t2_right_icon

0x9855,	// (0x00095d78) list_medium_line_t2_right_iconx2

0x9855,	// (0x00095d78) list_medium_line_t3

0x9855,	// (0x00095d78) list_medium_line_t3_g2

0x9855,	// (0x00095d78) list_medium_line_t3_g3

0x9855,	// (0x00095d78) list_medium_line_t3_right_iconx2

0x9855,	// (0x00095d78) list_medium_line_t4_g4

0x9855,	// (0x00095d78) list_medium_line_x2

0x9855,	// (0x00095d78) list_medium_line_x2_t2_g2

0x9855,	// (0x00095d78) list_medium_line_x2_t2_g3

0x9855,	// (0x00095d78) list_medium_line_x2_t2_g4

0x9855,	// (0x00095d78) list_medium_line_x2_t3

0x9855,	// (0x00095d78) list_medium_line_x2_t3_g2

0x9855,	// (0x00095d78) list_medium_line_x2_t3_g3

0x9855,	// (0x00095d78) list_medium_line_x2_t3_g4

0x9855,	// (0x00095d78) list_medium_line_x2_t4_g2

0x9855,	// (0x00095d78) list_medium_line_x2_t4_g4

0x9855,	// (0x00095d78) list_medium_line_x3

0x9855,	// (0x00095d78) list_medium_line_x3_t4

0x9855,	// (0x00095d78) list_medium_line_x3_t4_g4

0x9855,	// (0x00095d78) list_medium_line_x4_t4

0x9855,	// (0x00095d78) list_medium_line_x4_t4_g7

0x9855,	// (0x00095d78) list_medium_line_x4_t5

0x0131,	// (0x0008c654) list_single_fs_dyc_pane_ParamLimits

0x0131,	// (0x0008c654) list_single_fs_dyc_pane

0x9fe6,	// (0x00096509) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x4_t4_g7_g1

0x9fe6,	// (0x00096509) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x4_t4_g7_g2

0x9fe6,	// (0x00096509) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x4_t4_g7_g3

0x9fe6,	// (0x00096509) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x4_t4_g7_g4

0x9fe6,	// (0x00096509) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x4_t4_g7_g5

0x9fe6,	// (0x00096509) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x4_t4_g7_g6

0x9ff4,	// (0x00096517) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9ff4,	// (0x00096517) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb0d,	// (0x0009c030) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb0d,	// (0x0009c030) list_medium_line_x4_t4_g7_g

0xa96e,	// (0x00096e91) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x4_t4_g7_t1

0xa96e,	// (0x00096e91) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x4_t4_g7_t2

0xa96e,	// (0x00096e91) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x4_t4_g7_t3

0xb39c,	// (0x000978bf) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb39c,	// (0x000978bf) list_medium_line_x4_t4_g7_t4

0xb39c,	// (0x000978bf) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb39c,	// (0x000978bf) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb1c,	// (0x0009c03f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb1c,	// (0x0009c03f) list_medium_line_x4_t4_g7_t

0x0169,	// (0x0008c68c) list_single_dyc_row_pane_ParamLimits

0x0169,	// (0x0008c68c) list_single_dyc_row_pane

0x72a0,	// (0x000937c3) call5_gesture_pane_ParamLimits

0x72a0,	// (0x000937c3) call5_gesture_pane

0x72f6,	// (0x00093819) call5_windows_pane_ParamLimits

0x72f6,	// (0x00093819) call5_windows_pane

0x73b2,	// (0x000938d5) call5_swipe_1_pane_cp_ParamLimits

0x73b2,	// (0x000938d5) call5_swipe_1_pane_cp

0x73be,	// (0x000938e1) call5_swipe_2_pane_cp_ParamLimits

0x73be,	// (0x000938e1) call5_swipe_2_pane_cp

0xa966,	// (0x00096e89) call5_image_pane_cp

0x73ca,	// (0x000938ed) popup_call5_audio_first_window_cp_ParamLimits

0x73ca,	// (0x000938ed) popup_call5_audio_first_window_cp

0xe1c6,	// (0x0009a6e9) call5_swipe_1_pane_g1_cp_ParamLimits

0xe1c6,	// (0x0009a6e9) call5_swipe_1_pane_g1_cp

0xe1f4,	// (0x0009a717) call5_swipe_1_pane_g2_cp

0xe1df,	// (0x0009a702) call5_swipe_1_pane_t1_cp_ParamLimits

0xe1df,	// (0x0009a702) call5_swipe_1_pane_t1_cp

0xe1c6,	// (0x0009a6e9) call5_swipe_2_pane_g1_cp_ParamLimits

0xe1c6,	// (0x0009a6e9) call5_swipe_2_pane_g1_cp

0xe1fc,	// (0x0009a71f) call5_swipe_2_pane_g2_cp

0xe204,	// (0x0009a727) call5_swipe_2_pane_t1_cp_ParamLimits

0xe204,	// (0x0009a727) call5_swipe_2_pane_t1_cp

0x98ba,	// (0x00095ddd) main_sp_fs_email_pane

0xdc94,	// (0x0009a1b7) main_sp_fs_listscroll_pane_te

0x73d8,	// (0x000938fb) popup_sp_fs_action_menu_pane_ParamLimits

0x73d8,	// (0x000938fb) popup_sp_fs_action_menu_pane

0xa99c,	// (0x00096ebf) bg_sp_fs_ctrlbar_pane_g1

0xe219,	// (0x0009a73c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe222,	// (0x0009a745) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe22b,	// (0x0009a74e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa99c,	// (0x00096ebf) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc0a,	// (0x0009c12d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc70e,	// (0x00098c31) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc70e,	// (0x00098c31) bg_sp_fs_ctrlbar_ddmenu_pane

0xe234,	// (0x0009a757) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe234,	// (0x0009a757) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe240,	// (0x0009a763) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe240,	// (0x0009a763) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc13,	// (0x0009c136) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc13,	// (0x0009c136) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe24c,	// (0x0009a76f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe24c,	// (0x0009a76f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa99c,	// (0x00096ebf) list_medium_line_t2_right_icon_g1

0xaefa,	// (0x0009741d) list_medium_line_t2_right_icon_t1

0xaefa,	// (0x0009741d) list_medium_line_t2_right_icon_t2

0x0001,

0xfc18,	// (0x0009c13b) list_medium_line_t2_right_icon_t

0xb3b0,	// (0x000978d3) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb3b0,	// (0x000978d3) bg_sp_fs_ctrlbar_pane

0x746b,	// (0x0009398e) main_sp_fs_ctrlbar_button_pane_cp01

0x7475,	// (0x00093998) main_sp_fs_ctrlbar_ddmenu_pane

0xe2a0,	// (0x0009a7c3) main_sp_fs_ctrlbar_pane_g1

0xe2ac,	// (0x0009a7cf) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc1d,	// (0x0009c140) main_sp_fs_ctrlbar_pane_g

0x74b3,	// (0x000939d6) main_sp_fs_ctrlbar_pane_t1

0x74f2,	// (0x00093a15) main_sp_fs_ctrlbar_pane

0x7516,	// (0x00093a39) main_sp_fs_listscroll_pane_te_cp01

0x0200,	// (0x0008c723) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0200,	// (0x0008c723) popup_sp_fs_action_menu_pane_cp01

0x98ba,	// (0x00095ddd) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x98ba,	// (0x00095ddd) bg_sp_fs_highlight_list_pane_cp01

0x7536,	// (0x00093a59) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x7536,	// (0x00093a59) sp_fs_action_menu_list_gene_pane_g1

0xe2d3,	// (0x0009a7f6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe2d3,	// (0x0009a7f6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc2b,	// (0x0009c14e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc2b,	// (0x0009c14e) sp_fs_action_menu_list_gene_pane_g

0x7545,	// (0x00093a68) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x7545,	// (0x00093a68) sp_fs_action_menu_list_gene_pane_t1

0x755d,	// (0x00093a80) sp_fs_action_menu_list_gene_pane_ParamLimits

0x755d,	// (0x00093a80) sp_fs_action_menu_list_gene_pane

0xe2e0,	// (0x0009a803) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe2e0,	// (0x0009a803) popup_sp_fs_action_menu_bg_pane

0x7580,	// (0x00093aa3) sp_fs_action_menu_list_pane_ParamLimits

0x7580,	// (0x00093aa3) sp_fs_action_menu_list_pane

0x75a4,	// (0x00093ac7) sp_fs_scroll_pane_cp01_ParamLimits

0x75a4,	// (0x00093ac7) sp_fs_scroll_pane_cp01

0xaefa,	// (0x0009741d) list_medium_line_plain_t2_t1

0xaefa,	// (0x0009741d) list_medium_line_plain_t2_t2

0x0001,

0xfc18,	// (0x0009c13b) list_medium_line_plain_t2_t

0xaefa,	// (0x0009741d) list_medium_line_plain_t3_t1

0xaefa,	// (0x0009741d) list_medium_line_plain_t3_t2

0xaefa,	// (0x0009741d) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x0009b79f) list_medium_line_plain_t3_t

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g2_g1

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0009b6e4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0009b6e4) list_medium_line_x2_t2_g2_g

0xa96e,	// (0x00096e91) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t2_g2_t1

0xa96e,	// (0x00096e91) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x0009b6b9) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x0009b6b9) list_medium_line_x2_t2_g2_t

0x9fe6,	// (0x00096509) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t4_g2_g1

0x9fe6,	// (0x00096509) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0009b6e4) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0009b6e4) list_medium_line_x2_t4_g2_g

0xa96e,	// (0x00096e91) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t4_g2_t1

0xa96e,	// (0x00096e91) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t4_g2_t2

0xa96e,	// (0x00096e91) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t4_g2_t3

0xa96e,	// (0x00096e91) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0009b6f2) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0009b6f2) list_medium_line_x2_t4_g2_t

0xa99c,	// (0x00096ebf) list_medium_line_t3_right_iconx2_g1

0xa99c,	// (0x00096ebf) list_medium_line_t3_right_iconx2_g2

0xa99c,	// (0x00096ebf) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x0009b8c0) list_medium_line_t3_right_iconx2_g

0xaefa,	// (0x0009741d) list_medium_line_t3_right_iconx2_t1

0xaefa,	// (0x0009741d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc18,	// (0x0009c13b) list_medium_line_t3_right_iconx2_t

0x9fe6,	// (0x00096509) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x3_t4_g4_g1

0x9fe6,	// (0x00096509) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x3_t4_g4_g2

0x9fe6,	// (0x00096509) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x3_t4_g4_g3

0x9fe6,	// (0x00096509) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0009b6e9) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0009b6e9) list_medium_line_x3_t4_g4_g

0xa96e,	// (0x00096e91) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x3_t4_g4_t1

0xa96e,	// (0x00096e91) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x3_t4_g4_t2

0xa96e,	// (0x00096e91) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x3_t4_g4_t3

0xa96e,	// (0x00096e91) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0009b6f2) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0009b6f2) list_medium_line_x3_t4_g4_t

0x0225,	// (0x0008c748) list_single_dyc_row_text_pane_t1_ParamLimits

0x0225,	// (0x0008c748) list_single_dyc_row_text_pane_t1

0x026e,	// (0x0008c791) list_single_dyc_row_text_pane_t2_ParamLimits

0x026e,	// (0x0008c791) list_single_dyc_row_text_pane_t2

0x75ca,	// (0x00093aed) list_single_dyc_row_text_pane_t3_ParamLimits

0x75ca,	// (0x00093aed) list_single_dyc_row_text_pane_t3

0x0005,

0xfc30,	// (0x0009c153) list_single_dyc_row_text_pane_t_ParamLimits

0xfc30,	// (0x0009c153) list_single_dyc_row_text_pane_t

0x75ee,	// (0x00093b11) list_single_dyc_row_pane_g1_ParamLimits

0x75ee,	// (0x00093b11) list_single_dyc_row_pane_g1

0x75fa,	// (0x00093b1d) list_single_dyc_row_pane_g2_ParamLimits

0x75fa,	// (0x00093b1d) list_single_dyc_row_pane_g2

0x7606,	// (0x00093b29) list_single_dyc_row_pane_g3_ParamLimits

0x7606,	// (0x00093b29) list_single_dyc_row_pane_g3

0x7612,	// (0x00093b35) list_single_dyc_row_pane_g4_ParamLimits

0x7612,	// (0x00093b35) list_single_dyc_row_pane_g4

0x0003,

0xfc3d,	// (0x0009c160) list_single_dyc_row_pane_g_ParamLimits

0xfc3d,	// (0x0009c160) list_single_dyc_row_pane_g

0x761e,	// (0x00093b41) list_single_dyc_row_text_pane_ParamLimits

0x761e,	// (0x00093b41) list_single_dyc_row_text_pane

0x9855,	// (0x00095d78) bg_sp_fs_scroll_pane

0xe2ee,	// (0x0009a811) thumb_sp_fs_scroll_pane

0x9fe6,	// (0x00096509) list_medium_line_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_g1

0xa96e,	// (0x00096e91) list_medium_line_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t1

0x9fe6,	// (0x00096509) list_medium_line_x2_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_g1

0x9fe6,	// (0x00096509) list_medium_line_x2_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0009b6e4) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0009b6e4) list_medium_line_x2_g

0xa96e,	// (0x00096e91) list_medium_line_x2_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t1

0x9fe6,	// (0x00096509) list_medium_line_x3_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x3_g1

0xdc86,	// (0x0009a1a9) list_medium_line_x3_g2_ParamLimits

0xdc86,	// (0x0009a1a9) list_medium_line_x3_g2

0x0001,

0xfc46,	// (0x0009c169) list_medium_line_x3_g_ParamLimits

0xfc46,	// (0x0009c169) list_medium_line_x3_g

0xe2f7,	// (0x0009a81a) list_medium_line_x3_t1_ParamLimits

0xe2f7,	// (0x0009a81a) list_medium_line_x3_t1

0xe30b,	// (0x0009a82e) thumb_sp_fs_scroll_pane_g1

0xe314,	// (0x0009a837) thumb_sp_fs_scroll_pane_g2

0xe31d,	// (0x0009a840) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x0009c16e) thumb_sp_fs_scroll_pane_g

0xe30b,	// (0x0009a82e) bg_sp_fs_scroll_pane_g1

0xe314,	// (0x0009a837) bg_sp_fs_scroll_pane_g2

0xe31d,	// (0x0009a840) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x0009c16e) bg_sp_fs_scroll_pane_g

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g4_g1

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g4_g2

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g4_g3

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0009b6e9) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0009b6e9) list_medium_line_x2_t3_g4_g

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g4_t1

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g4_t2

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0009b6dd) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0009b6dd) list_medium_line_x2_t3_g4_t

0x9fe6,	// (0x00096509) list_medium_line_g2_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_g2_g1

0x9fe6,	// (0x00096509) list_medium_line_g2_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0009b6e4) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0009b6e4) list_medium_line_g2_g

0xa96e,	// (0x00096e91) list_medium_line_g2_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_g2_t1

0x9fe6,	// (0x00096509) list_medium_line_t3_g2_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_t3_g2_g1

0x9fe6,	// (0x00096509) list_medium_line_t3_g2_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0009b6e4) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0009b6e4) list_medium_line_t3_g2_g

0xa96e,	// (0x00096e91) list_medium_line_t3_g2_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t3_g2_t1

0xa96e,	// (0x00096e91) list_medium_line_t3_g2_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t3_g2_t2

0xa96e,	// (0x00096e91) list_medium_line_t3_g2_t3_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0009b6dd) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0009b6dd) list_medium_line_t3_g2_t

0xa99c,	// (0x00096ebf) list_medium_line_right_icon_g1

0xaefa,	// (0x0009741d) list_medium_line_right_icon_t1

0x9fe6,	// (0x00096509) list_medium_line_t2_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_t2_g1

0xa96e,	// (0x00096e91) list_medium_line_t2_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t2_t1

0xa96e,	// (0x00096e91) list_medium_line_t2_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x0009b6b9) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x0009b6b9) list_medium_line_t2_t

0x9fe6,	// (0x00096509) list_medium_line_t3_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_t3_g1

0xa96e,	// (0x00096e91) list_medium_line_t3_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t3_t1

0xa96e,	// (0x00096e91) list_medium_line_t3_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t3_t2

0xa96e,	// (0x00096e91) list_medium_line_t3_t3_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0009b6dd) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0009b6dd) list_medium_line_t3_t

0x9fe6,	// (0x00096509) list_medium_line_g3_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_g3_g1

0x9fe6,	// (0x00096509) list_medium_line_g3_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_g3_g2

0x9fe6,	// (0x00096509) list_medium_line_g3_g3_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0009b6d6) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0009b6d6) list_medium_line_g3_g

0xa96e,	// (0x00096e91) list_medium_line_g3_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_g3_t1

0x9fe6,	// (0x00096509) list_medium_line_t2_g3_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_t2_g3_g1

0x9fe6,	// (0x00096509) list_medium_line_t2_g3_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_t2_g3_g2

0x9fe6,	// (0x00096509) list_medium_line_t2_g3_g3_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0009b6d6) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0009b6d6) list_medium_line_t2_g3_g

0xa96e,	// (0x00096e91) list_medium_line_t2_g3_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t2_g3_t1

0xa96e,	// (0x00096e91) list_medium_line_t2_g3_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x0009b6b9) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x0009b6b9) list_medium_line_t2_g3_t

0x9fe6,	// (0x00096509) list_medium_line_t3_g3_g1_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_t3_g3_g1

0x9fe6,	// (0x00096509) list_medium_line_t3_g3_g2_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_t3_g3_g2

0x9fe6,	// (0x00096509) list_medium_line_t3_g3_g3_ParamLimits

0x9fe6,	// (0x00096509) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0009b6d6) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0009b6d6) list_medium_line_t3_g3_g

0xa96e,	// (0x00096e91) list_medium_line_t3_g3_t1_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t3_g3_t1

0xa96e,	// (0x00096e91) list_medium_line_t3_g3_t2_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t3_g3_t2

0xa96e,	// (0x00096e91) list_medium_line_t3_g3_t3_ParamLimits

0xa96e,	// (0x00096e91) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0009b6dd) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0009b6dd) list_medium_line_t3_g3_t

0xa99c,	// (0x00096ebf) list_medium_line_right_iconx2_g1

0xa99c,	// (0x00096ebf) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x0009b8bb) list_medium_line_right_iconx2_g

0xaefa,	// (0x0009741d) list_medium_line_right_iconx2_t1

0xa99c,	// (0x00096ebf) list_medium_line_t2_right_iconx2_g1

0xa99c,	// (0x00096ebf) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x0009b8bb) list_medium_line_t2_right_iconx2_g

0xaefa,	// (0x0009741d) list_medium_line_t2_right_iconx2_t1

0xaefa,	// (0x0009741d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc18,	// (0x0009c13b) list_medium_line_t2_right_iconx2_t

0xaefa,	// (0x0009741d) list_medium_line_x4_t4_t1

0xaefa,	// (0x0009741d) list_medium_line_x4_t4_t2

0xaefa,	// (0x0009741d) list_medium_line_x4_t4_t3

0xaefa,	// (0x0009741d) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x0009b7a6) list_medium_line_x4_t4_t

0x7681,	// (0x00093ba4) tport_appsw_pane_ParamLimits

0x7681,	// (0x00093ba4) tport_appsw_pane

0x7699,	// (0x00093bbc) tport_contact_pane_ParamLimits

0x7699,	// (0x00093bbc) tport_contact_pane

0x76b4,	// (0x00093bd7) tport_listscroll_pane_ParamLimits

0x76b4,	// (0x00093bd7) tport_listscroll_pane

0x76cc,	// (0x00093bef) cell_tport_appsw_pane_ParamLimits

0x76cc,	// (0x00093bef) cell_tport_appsw_pane

0xb37a,	// (0x0009789d) tport_appsw_pane_g1_ParamLimits

0xb37a,	// (0x0009789d) tport_appsw_pane_g1

0x7716,	// (0x00093c39) tport_contact_pane_g1

0x771f,	// (0x00093c42) tport_contact_pane_t1

0x772d,	// (0x00093c50) tport_contact_pane_t2

0x0001,

0xfc52,	// (0x0009c175) tport_contact_pane_t

0xe326,	// (0x0009a849) list_tport_pane

0xe32f,	// (0x0009a852) scroll_pane_cp_030

0x7743,	// (0x00093c66) cell_tport_appsw_pane_g1

0x7753,	// (0x00093c76) cell_tport_appsw_pane_t1

0x7761,	// (0x00093c84) grid_highlight_pane_cp019

0x7769,	// (0x00093c8c) list_tport_double_graphic_pane_ParamLimits

0x7769,	// (0x00093c8c) list_tport_double_graphic_pane

0x98ba,	// (0x00095ddd) list_highlight_pane_cp023_ParamLimits

0x98ba,	// (0x00095ddd) list_highlight_pane_cp023

0x7776,	// (0x00093c99) list_tport_double_graphic_pane_g1_ParamLimits

0x7776,	// (0x00093c99) list_tport_double_graphic_pane_g1

0x7783,	// (0x00093ca6) list_tport_double_graphic_pane_t1_ParamLimits

0x7783,	// (0x00093ca6) list_tport_double_graphic_pane_t1

0x7798,	// (0x00093cbb) list_tport_double_graphic_pane_t2_ParamLimits

0x7798,	// (0x00093cbb) list_tport_double_graphic_pane_t2

0x0001,

0xfc5e,	// (0x0009c181) list_tport_double_graphic_pane_t_ParamLimits

0xfc5e,	// (0x0009c181) list_tport_double_graphic_pane_t

0x9855,	// (0x00095d78) main_cale_note_pane

0x55ad,	// (0x00091ad0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x55ad,	// (0x00091ad0) cell_vitu2_function_top_wide_pane_cp01

0x6e3f,	// (0x00093362) wait_bar_pane_cp05_ParamLimits

0x98ba,	// (0x00095ddd) listscroll_cmail_pane

0xe340,	// (0x0009a863) list_cmail_pane

0x77aa,	// (0x00093ccd) list_cmail_body_pane

0x77c1,	// (0x00093ce4) list_single_cmail_header_caption_pane

0x77db,	// (0x00093cfe) list_single_cmail_header_detail_pane_ParamLimits

0x77db,	// (0x00093cfe) list_single_cmail_header_detail_pane

0xe357,	// (0x0009a87a) list_single_cmail_header_caption_pane_t1

0x03a3,	// (0x0008c8c6) list_single_cmail_header_detail_pane_g1_ParamLimits

0x03a3,	// (0x0008c8c6) list_single_cmail_header_detail_pane_g1

0xa8ff,	// (0x00096e22) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa8ff,	// (0x00096e22) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc63,	// (0x0009c186) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc63,	// (0x0009c186) list_single_cmail_header_detail_pane_g

0x03bb,	// (0x0008c8de) list_single_cmail_header_detail_pane_t1_ParamLimits

0x03bb,	// (0x0008c8de) list_single_cmail_header_detail_pane_t1

0x03f7,	// (0x0008c91a) list_single_cmail_header_editor_pane_bg_ParamLimits

0x03f7,	// (0x0008c91a) list_single_cmail_header_editor_pane_bg

0xdf92,	// (0x0009a4b5) list_cmail_body_pane_g1

0xe37b,	// (0x0009a89e) list_cmail_body_pane_t1

0xd309,	// (0x0009982c) list_single_cmail_header_editor_pane_bg_g1

0xabc0,	// (0x000970e3) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd319,	// (0x0009983c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd311,	// (0x00099834) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd54f,	// (0x00099a72) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd339,	// (0x0009985c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd329,	// (0x0009984c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd331,	// (0x00099854) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xaba0,	// (0x000970c3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7832,	// (0x00093d55) calenote_gesture_pane_ParamLimits

0x7832,	// (0x00093d55) calenote_gesture_pane

0x7852,	// (0x00093d75) calenote_window_pane_ParamLimits

0x7852,	// (0x00093d75) calenote_window_pane

0xe389,	// (0x0009a8ac) popup_note_window_cp01

0x786e,	// (0x00093d91) calenote_swipe_1_pane_ParamLimits

0x786e,	// (0x00093d91) calenote_swipe_1_pane

0x73be,	// (0x000938e1) calenote_swipe_2_pane_ParamLimits

0x73be,	// (0x000938e1) calenote_swipe_2_pane

0xe1c6,	// (0x0009a6e9) calenote_swipe_1_pane_g1_ParamLimits

0xe1c6,	// (0x0009a6e9) calenote_swipe_1_pane_g1

0xe1d3,	// (0x0009a6f6) calenote_swipe_1_pane_g2_ParamLimits

0xe1d3,	// (0x0009a6f6) calenote_swipe_1_pane_g2

0x0001,

0xfc00,	// (0x0009c123) calenote_swipe_1_pane_g_ParamLimits

0xfc00,	// (0x0009c123) calenote_swipe_1_pane_g

0xe39b,	// (0x0009a8be) calenote_swipe_1_pane_t1_ParamLimits

0xe39b,	// (0x0009a8be) calenote_swipe_1_pane_t1

0xe1c6,	// (0x0009a6e9) calenote_swipe_2_pane_g1_ParamLimits

0xe1c6,	// (0x0009a6e9) calenote_swipe_2_pane_g1

0xe3ba,	// (0x0009a8dd) calenote_swipe_2_pane_g2_ParamLimits

0xe3ba,	// (0x0009a8dd) calenote_swipe_2_pane_g2

0x0001,

0xfc6f,	// (0x0009c192) calenote_swipe_2_pane_g_ParamLimits

0xfc6f,	// (0x0009c192) calenote_swipe_2_pane_g

0xe3c6,	// (0x0009a8e9) calenote_swipe_2_pane_t1_ParamLimits

0xe3c6,	// (0x0009a8e9) calenote_swipe_2_pane_t1

0x9855,	// (0x00095d78) main_mup_navstr_pane

0x4404,	// (0x00090927) main_mup3_pane_t7_ParamLimits

0x4404,	// (0x00090927) main_mup3_pane_t7

0xa511,	// (0x00096a34) main_mp4_pane_g6_ParamLimits

0xa511,	// (0x00096a34) main_mp4_pane_g6

0xa6d3,	// (0x00096bf6) main_image3_pane_t4_ParamLimits

0xa6d3,	// (0x00096bf6) main_image3_pane_t4

0x7883,	// (0x00093da6) popup_navstr_preview_pane_ParamLimits

0x7883,	// (0x00093da6) popup_navstr_preview_pane

0x7893,	// (0x00093db6) scroll_navstr_pane_ParamLimits

0x7893,	// (0x00093db6) scroll_navstr_pane

0x9855,	// (0x00095d78) bg_popup_preview_window_pane_cp04

0xe3ed,	// (0x0009a910) popup_navstr_preview_pane_t1

0x78a7,	// (0x00093dca) scroll_navstr_pane_g1_ParamLimits

0x78a7,	// (0x00093dca) scroll_navstr_pane_g1

0x78bb,	// (0x00093dde) scroll_navstr_pane_t1_ParamLimits

0x78bb,	// (0x00093dde) scroll_navstr_pane_t1

0xe392,	// (0x0009a8b5) bg_button_pane_cp014

0xe392,	// (0x0009a8b5) bg_button_pane_cp030

0x01a6,	// (0x0008c6c9) list_double_fisheye_pane_g4_ParamLimits

0x01a6,	// (0x0008c6c9) list_double_fisheye_pane_g4

0x01b2,	// (0x0008c6d5) list_double_fisheye_pane_g5_ParamLimits

0x01b2,	// (0x0008c6d5) list_double_fisheye_pane_g5

0xba82,	// (0x00097fa5) sp_fs_scroll_pane_cp03

0xe2a0,	// (0x0009a7c3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe2ac,	// (0x0009a7cf) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc1d,	// (0x0009c140) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x74b3,	// (0x000939d6) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe34f,	// (0x0009a872) sp_fs_scroll_pane_cp02

0xa1e0,	// (0x00096703) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa1e0,	// (0x00096703) popup_sp_fs_calendar_preview_list_single_pane

0x9855,	// (0x00095d78) main_cam6_pano_pane

0x98ba,	// (0x00095ddd) main_mup3_pane_ParamLimits

0x9855,	// (0x00095d78) main_phacti_pane

0x6d10,	// (0x00093233) bg_button_pane_cp11

0x6d2a,	// (0x0009324d) main_mobtv_info_pane_g2_ParamLimits

0x6d2a,	// (0x0009324d) main_mobtv_info_pane_g2

0x0001,

0xfb7d,	// (0x0009c0a0) main_mobtv_info_pane_g_ParamLimits

0xfb7d,	// (0x0009c0a0) main_mobtv_info_pane_g

0x6f07,	// (0x0009342a) sc_clock_pane_t5_ParamLimits

0x6f07,	// (0x0009342a) sc_clock_pane_t5

0x713b,	// (0x0009365e) main_radioblah_pane_g1_ParamLimits

0xe0f8,	// (0x0009a61b) main_radioblah_pane_t3_ParamLimits

0xe0f8,	// (0x0009a61b) main_radioblah_pane_t3

0xe110,	// (0x0009a633) main_radioblah_pane_t4_ParamLimits

0xe110,	// (0x0009a633) main_radioblah_pane_t4

0x7163,	// (0x00093686) main_radioblah_text_pane_ParamLimits

0x7163,	// (0x00093686) main_radioblah_text_pane

0x7175,	// (0x00093698) main_radioblah_info_pane_g1_ParamLimits

0x720e,	// (0x00093731) main_radioblah_info_pane_t4_ParamLimits

0x720e,	// (0x00093731) main_radioblah_info_pane_t4

0x98ba,	// (0x00095ddd) main_sp_fs_calendar_pane

0x78d2,	// (0x00093df5) main_phacti_pane_g1

0x78da,	// (0x00093dfd) phacti_note_pane_ParamLimits

0x78da,	// (0x00093dfd) phacti_note_pane

0xe404,	// (0x0009a927) phacti_term_pane_ParamLimits

0xe404,	// (0x0009a927) phacti_term_pane

0xe419,	// (0x0009a93c) phacti_note_pane_t1_ParamLimits

0xe419,	// (0x0009a93c) phacti_note_pane_t1

0x78ee,	// (0x00093e11) phacti_term_pane_g1

0x78f6,	// (0x00093e19) phacti_term_pane_t1_ParamLimits

0x78f6,	// (0x00093e19) phacti_term_pane_t1

0xe430,	// (0x0009a953) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe438,	// (0x0009a95b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc79,	// (0x0009c19c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe440,	// (0x0009a963) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe440,	// (0x0009a963) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe456,	// (0x0009a979) aid_popup_sp_fs_bg_corner_pane

0xa99c,	// (0x00096ebf) popup_sp_fs_calendar_preview_bg_pane_g1

0x9855,	// (0x00095d78) popup_sp_fs_calendar_preview_bg_pane

0xe45e,	// (0x0009a981) popup_sp_fs_calendar_preview_list_pane

0xb3b0,	// (0x000978d3) bg_main_sp_fs_cale_pane_ParamLimits

0xb3b0,	// (0x000978d3) bg_main_sp_fs_cale_pane

0x798a,	// (0x00093ead) listscroll_cale_mrui_pane_ParamLimits

0x798a,	// (0x00093ead) listscroll_cale_mrui_pane

0x799f,	// (0x00093ec2) listscroll_sp_fs_schedule_track_pane

0x79a8,	// (0x00093ecb) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x79a8,	// (0x00093ecb) main_sp_fs_ctrlbar_pane_cp01

0xe466,	// (0x0009a989) main_sp_fs_ribbon_pane

0x79bb,	// (0x00093ede) popup_sp_fs_cale_preview_window

0x79cd,	// (0x00093ef0) list_single_sp_fs_schedule_track_pane_ParamLimits

0x79cd,	// (0x00093ef0) list_single_sp_fs_schedule_track_pane

0x98ba,	// (0x00095ddd) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x98ba,	// (0x00095ddd) bg_sp_fs_highlight_list_pane_cp03

0x79e0,	// (0x00093f03) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x79e0,	// (0x00093f03) list_single_sp_fs_schedule_track_pane_g1

0x79ec,	// (0x00093f0f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x79ec,	// (0x00093f0f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7e,	// (0x0009c1a1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7e,	// (0x0009c1a1) list_single_sp_fs_schedule_track_pane_g

0x79f8,	// (0x00093f1b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x79f8,	// (0x00093f1b) list_single_sp_fs_schedule_track_pane_t1

0x7a1a,	// (0x00093f3d) sp_fs_schedule_track_pane_ParamLimits

0x7a1a,	// (0x00093f3d) sp_fs_schedule_track_pane

0xe46e,	// (0x0009a991) sp_fs_schedule_track_pane_g1

0xe476,	// (0x0009a999) sp_fs_schedule_track_pane_g2

0xe47e,	// (0x0009a9a1) sp_fs_schedule_track_pane_g3

0xe486,	// (0x0009a9a9) sp_fs_schedule_track_pane_g4

0xe48e,	// (0x0009a9b1) sp_fs_schedule_track_pane_g5

0x0004,

0xfc83,	// (0x0009c1a6) sp_fs_schedule_track_pane_g

0xd309,	// (0x0009982c) bg_sp_fs_schedule_viewer_highlight_g1

0xabc0,	// (0x000970e3) bg_sp_fs_schedule_viewer_highlight_g2

0xd311,	// (0x00099834) bg_sp_fs_schedule_viewer_highlight_g3

0xd319,	// (0x0009983c) bg_sp_fs_schedule_viewer_highlight_g4

0xd54f,	// (0x00099a72) bg_sp_fs_schedule_viewer_highlight_g5

0xd329,	// (0x0009984c) bg_sp_fs_schedule_viewer_highlight_g6

0xd331,	// (0x00099854) bg_sp_fs_schedule_viewer_highlight_g7

0xd339,	// (0x0009985c) bg_sp_fs_schedule_viewer_highlight_g8

0xaba0,	// (0x000970c3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8e,	// (0x0009c1b1) bg_sp_fs_schedule_viewer_highlight_g

0x9855,	// (0x00095d78) bg_main_sp_fs_ribbon_pane

0x7a2f,	// (0x00093f52) main_sp_fs_ribbon_pane_g1

0xe496,	// (0x0009a9b9) main_sp_fs_ribbon_pane_t1

0x7a38,	// (0x00093f5b) main_sp_fs_ribbon_pane_t2

0xe4a5,	// (0x0009a9c8) main_sp_fs_ribbon_pane_t3

0x0002,

0xfca1,	// (0x0009c1c4) main_sp_fs_ribbon_pane_t

0xe4b4,	// (0x0009a9d7) main_sp_fs_ribbon_scheduler_pane

0xe4bc,	// (0x0009a9df) bg_main_sp_fs_ribbon_pane_g1

0xe4c5,	// (0x0009a9e8) bg_main_sp_fs_ribbon_pane_g2

0xe4ce,	// (0x0009a9f1) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca8,	// (0x0009c1cb) bg_main_sp_fs_ribbon_pane_g

0xe4d6,	// (0x0009a9f9) main_sp_fs_ribbon_scheduler_pane_g1

0xe4df,	// (0x0009aa02) main_sp_fs_ribbon_scheduler_pane_g2

0xe4e8,	// (0x0009aa0b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcaf,	// (0x0009c1d2) main_sp_fs_ribbon_scheduler_pane_g

0xe4f1,	// (0x0009aa14) list_cale_mrui_pane

0x7a47,	// (0x00093f6a) sp_fs_scroll_pane_cp07_ParamLimits

0x7a47,	// (0x00093f6a) sp_fs_scroll_pane_cp07

0x7a63,	// (0x00093f86) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7a63,	// (0x00093f86) bg_sp_fs_schedule_viewer_highlight

0xe4fe,	// (0x0009aa21) list_single_sp_fs_schedule_track_pane_cp01

0xe506,	// (0x0009aa29) list_sp_fs_schedule_track_pane

0xe50e,	// (0x0009aa31) sp_fs_scroll_pane_cp06_ParamLimits

0xe50e,	// (0x0009aa31) sp_fs_scroll_pane_cp06

0xa99c,	// (0x00096ebf) bgmain_sp_fs_calendar_pane_g1

0x040e,	// (0x0008c931) list_single_cale_mrui_pane_ParamLimits

0x040e,	// (0x0008c931) list_single_cale_mrui_pane

0x7a75,	// (0x00093f98) list_single_cale_mrui_row_pane_ParamLimits

0x7a75,	// (0x00093f98) list_single_cale_mrui_row_pane

0x7a82,	// (0x00093fa5) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7a82,	// (0x00093fa5) list_single_cale_mrui_row_pane_g1

0x7aba,	// (0x00093fdd) list_single_cale_mrui_row_pane_t1_ParamLimits

0x7aba,	// (0x00093fdd) list_single_cale_mrui_row_pane_t1

0x042e,	// (0x0008c951) list_single_cale_mrui_row_pane_t2_ParamLimits

0x042e,	// (0x0008c951) list_single_cale_mrui_row_pane_t2

0x7acc,	// (0x00093fef) list_single_cale_mrui_row_pane_t3_ParamLimits

0x7acc,	// (0x00093fef) list_single_cale_mrui_row_pane_t3

0x7afb,	// (0x0009401e) list_single_cale_mrui_row_pane_t4_ParamLimits

0x7afb,	// (0x0009401e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbd,	// (0x0009c1e0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbd,	// (0x0009c1e0) list_single_cale_mrui_row_pane_t

0x0494,	// (0x0008c9b7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0494,	// (0x0008c9b7) list_single_cmail_header_editor_pane_bg_cp01

0x04c0,	// (0x0008c9e3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x04c0,	// (0x0008c9e3) list_single_cmail_header_editor_pane_bg_cp02

0x7b2c,	// (0x0009404f) main_radioblah_text_pane_t1_ParamLimits

0x7b2c,	// (0x0009404f) main_radioblah_text_pane_t1

0xe52d,	// (0x0009aa50) cam6_indi_pane_cp01

0xe535,	// (0x0009aa58) cam6_mode_pane_cp01

0xe53d,	// (0x0009aa60) cam6_pano_pane

0xe546,	// (0x0009aa69) cam6_zoom_pane_cp01

0xe550,	// (0x0009aa73) cam6_pano_image_pane

0xe559,	// (0x0009aa7c) cam6_pano_pane_g1

0xdf92,	// (0x0009a4b5) cam6_pano_pane_g2

0xe562,	// (0x0009aa85) cam6_pano_pane_g3

0xe56b,	// (0x0009aa8e) cam6_pano_pane_g4

0xcfbb,	// (0x000994de) cam6_pano_pane_g5

0xe574,	// (0x0009aa97) cam6_pano_pane_g6

0xe57c,	// (0x0009aa9f) cam6_pano_pane_g7

0xe584,	// (0x0009aaa7) cam6_pano_pane_g8

0xe58d,	// (0x0009aab0) cam6_pano_pane_g9

0x0008,

0xfcc6,	// (0x0009c1e9) cam6_pano_pane_g

0x9855,	// (0x00095d78) main_browser_tag_pane

0xe3e5,	// (0x0009a908) grid_navstr_albumart_pane

0xe598,	// (0x0009aabb) cell_navstr_albumart_pane_ParamLimits

0xe598,	// (0x0009aabb) cell_navstr_albumart_pane

0xe5b4,	// (0x0009aad7) cell_navstr_albumart_pane_g1

0xc4d9,	// (0x000989fc) cell_navstr_albumart_pane_g2

0xc4e9,	// (0x00098a0c) cell_navstr_albumart_pane_g3

0xc4e1,	// (0x00098a04) cell_navstr_albumart_pane_g4

0x0003,

0xfcd9,	// (0x0009c1fc) cell_navstr_albumart_pane_g

0x7b47,	// (0x0009406a) bt_list_pane_ParamLimits

0x7b47,	// (0x0009406a) bt_list_pane

0x7b5d,	// (0x00094080) bt_list_pane_t1

0x7b6c,	// (0x0009408f) bt_list_pane_t2

0x0001,

0xfce2,	// (0x0009c205) bt_list_pane_t

0x9855,	// (0x00095d78) main_cale_prevew_pane

0x7b7b,	// (0x0009409e) popup_cale_preview_window_ParamLimits

0x7b7b,	// (0x0009409e) popup_cale_preview_window

0x98ba,	// (0x00095ddd) bg_popup_preview_window_pane_cp05_ParamLimits

0x98ba,	// (0x00095ddd) bg_popup_preview_window_pane_cp05

0xe5bc,	// (0x0009aadf) list_cale_preview_pane_ParamLimits

0xe5bc,	// (0x0009aadf) list_cale_preview_pane

0x7b98,	// (0x000940bb) list_double_cale_preview_pane_ParamLimits

0x7b98,	// (0x000940bb) list_double_cale_preview_pane

0x7bac,	// (0x000940cf) list_single_cale_preview_pane_ParamLimits

0x7bac,	// (0x000940cf) list_single_cale_preview_pane

0x7bc4,	// (0x000940e7) list_single_cale_preview_pane_g1

0x7bcc,	// (0x000940ef) list_single_cale_preview_pane_t1_ParamLimits

0x7bcc,	// (0x000940ef) list_single_cale_preview_pane_t1

0x7be1,	// (0x00094104) list_double_cale_preview_pane_g1

0x7be9,	// (0x0009410c) list_double_cale_preview_pane_t1_ParamLimits

0x7be9,	// (0x0009410c) list_double_cale_preview_pane_t1

0x7bfe,	// (0x00094121) list_double_cale_preview_pane_t2_ParamLimits

0x7bfe,	// (0x00094121) list_double_cale_preview_pane_t2

0x0001,

0xfce7,	// (0x0009c20a) list_double_cale_preview_pane_t_ParamLimits

0xfce7,	// (0x0009c20a) list_double_cale_preview_pane_t

0x9855,	// (0x00095d78) main_ezdial_pane

0x98ba,	// (0x00095ddd) main_sp_fs_email_pane_ParamLimits

0x741e,	// (0x00093941) cmail_ddmenu_btn01_pane_ParamLimits

0x741e,	// (0x00093941) cmail_ddmenu_btn01_pane

0x7431,	// (0x00093954) cmail_ddmenu_btn02_pane_ParamLimits

0x7431,	// (0x00093954) cmail_ddmenu_btn02_pane

0x7454,	// (0x00093977) cmail_ddmenu_btn03_pane_ParamLimits

0x7454,	// (0x00093977) cmail_ddmenu_btn03_pane

0x74f2,	// (0x00093a15) main_sp_fs_ctrlbar_pane_ParamLimits

0x7516,	// (0x00093a39) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x77aa,	// (0x00093ccd) list_cmail_body_pane_ParamLimits

0xe365,	// (0x0009a888) bg_button_pane_cp12

0xe36e,	// (0x0009a891) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe36e,	// (0x0009a891) list_single_cmail_header_detail_pane_g3

0x780e,	// (0x00093d31) list_single_cmail_header_detail_pane_t2_ParamLimits

0x780e,	// (0x00093d31) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc6a,	// (0x0009c18d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc6a,	// (0x0009c18d) list_single_cmail_header_detail_pane_t

0x790b,	// (0x00093e2e) phacti_term_pane_t2_ParamLimits

0x790b,	// (0x00093e2e) phacti_term_pane_t2

0x0001,

0xfc74,	// (0x0009c197) phacti_term_pane_t_ParamLimits

0xfc74,	// (0x0009c197) phacti_term_pane_t

0xe5c8,	// (0x0009aaeb) aid_size_list_single_double

0x7c16,	// (0x00094139) popup_ezdial_listscroll_window

0x7c32,	// (0x00094155) popup_number_entry_window_cp01

0xa966,	// (0x00096e89) bg_popup_call_pane_cp09

0xe5d4,	// (0x0009aaf7) ezdial_list_pane

0xe5dc,	// (0x0009aaff) scroll_pane_cp23

0xb3b0,	// (0x000978d3) bg_button_pane_cp028_ParamLimits

0xb3b0,	// (0x000978d3) bg_button_pane_cp028

0x7c40,	// (0x00094163) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7c40,	// (0x00094163) cmail_ddmenu_btn01_pane_g1

0x7c4f,	// (0x00094172) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7c4f,	// (0x00094172) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcec,	// (0x0009c20f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcec,	// (0x0009c20f) cmail_ddmenu_btn01_pane_g

0xe5e4,	// (0x0009ab07) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe5e4,	// (0x0009ab07) cmail_ddmenu_btn01_pane_t1

0xb3b0,	// (0x000978d3) bg_button_pane_cp029_ParamLimits

0xb3b0,	// (0x000978d3) bg_button_pane_cp029

0x7c65,	// (0x00094188) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7c65,	// (0x00094188) cmail_ddmenu_btn02_pane_g1

0x7c80,	// (0x000941a3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7c80,	// (0x000941a3) cmail_ddmenu_btn02_pane_t1

0x98ba,	// (0x00095ddd) bg_button_pane_cp031_ParamLimits

0x98ba,	// (0x00095ddd) bg_button_pane_cp031

0x7c65,	// (0x00094188) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7c65,	// (0x00094188) cmail_ddmenu_btn03_pane_g1

0x7c80,	// (0x000941a3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7c80,	// (0x000941a3) cmail_ddmenu_btn03_pane_t1

0x4d8f,	// (0x000912b2) cell_dialer2_keypad_pane_t1_ParamLimits

0x4da9,	// (0x000912cc) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x4da9,	// (0x000912cc) cell_dialer2_keypad_pane_t1_copy1

0x6b31,	// (0x00093054) ncimui_group_button_pane

0x98ba,	// (0x00095ddd) main_sp_fs_calendar_pane_ParamLimits

0x77c1,	// (0x00093ce4) list_single_cmail_header_caption_pane_ParamLimits

0x793e,	// (0x00093e61) aid_recal_txt_sm_pane

0x9855,	// (0x00095d78) mian_recal_day_pane

0x79bb,	// (0x00093ede) popup_sp_fs_cale_preview_window_ParamLimits

0xe5fa,	// (0x0009ab1d) list_recal_day_pane

0x7cc3,	// (0x000941e6) list_single_recal_day_pane_ParamLimits

0x7cc3,	// (0x000941e6) list_single_recal_day_pane

0xe621,	// (0x0009ab44) list_single_recal_day_pane_g1_ParamLimits

0xe621,	// (0x0009ab44) list_single_recal_day_pane_g1

0x7cd5,	// (0x000941f8) list_single_recal_day_pane_g2_ParamLimits

0x7cd5,	// (0x000941f8) list_single_recal_day_pane_g2

0x7ce1,	// (0x00094204) list_single_recal_day_pane_g3_ParamLimits

0x7ce1,	// (0x00094204) list_single_recal_day_pane_g3

0x04e0,	// (0x0008ca03) list_single_recal_day_pane_g4_ParamLimits

0x04e0,	// (0x0008ca03) list_single_recal_day_pane_g4

0x7ced,	// (0x00094210) list_single_recal_day_pane_g5_ParamLimits

0x7ced,	// (0x00094210) list_single_recal_day_pane_g5

0x7cf9,	// (0x0009421c) list_single_recal_day_pane_g6_ParamLimits

0x7cf9,	// (0x0009421c) list_single_recal_day_pane_g6

0x0004,

0xfcfb,	// (0x0009c21e) list_single_recal_day_pane_g_ParamLimits

0xfcfb,	// (0x0009c21e) list_single_recal_day_pane_g

0x7d0d,	// (0x00094230) list_single_recal_day_pane_t1

0x7d1f,	// (0x00094242) list_single_recal_day_pane_t2

0x0001,

0xfd06,	// (0x0009c229) list_single_recal_day_pane_t

0x7d31,	// (0x00094254) ncimui_query_button_pane_ParamLimits

0x7d31,	// (0x00094254) ncimui_query_button_pane

0x7d41,	// (0x00094264) ncimui_query_button_pane_t1_ParamLimits

0x7d41,	// (0x00094264) ncimui_query_button_pane_t1

0xe62d,	// (0x0009ab50) ncimui_query_button_pane_t2_ParamLimits

0xe62d,	// (0x0009ab50) ncimui_query_button_pane_t2

0x0001,

0xfd0b,	// (0x0009c22e) ncimui_query_button_pane_t_ParamLimits

0xfd0b,	// (0x0009c22e) ncimui_query_button_pane_t

0x7d54,	// (0x00094277) query_button_pane_ParamLimits

0x7d54,	// (0x00094277) query_button_pane

0x9855,	// (0x00095d78) bg_button_pane_cp0028

0xe640,	// (0x0009ab63) query_button_pane_t1

0x36a0,	// (0x0008fbc3) main_tport_pane_ParamLimits

0x763d,	// (0x00093b60) bg_popup_window_pane_cp01_ParamLimits

0x763d,	// (0x00093b60) bg_popup_window_pane_cp01

0x7656,	// (0x00093b79) heading_pane_cp08_ParamLimits

0x7656,	// (0x00093b79) heading_pane_cp08

0x766c,	// (0x00093b8f) heading_pane_cp07_ParamLimits

0x766c,	// (0x00093b8f) heading_pane_cp07

0x7743,	// (0x00093c66) cell_tport_appsw_pane_g2

0x0002,

0xfc57,	// (0x0009c17a) cell_tport_appsw_pane_g

0xfd93,	// (0x0008c2b6) input_candi_list_open_g1

0xad9a,	// (0x000972bd) list_cale_time_pane_g6_ParamLimits

0xad9a,	// (0x000972bd) list_cale_time_pane_g6

0x3d4f,	// (0x00090272) aid_size_touch_calib_1_ParamLimits

0x3d4f,	// (0x00090272) aid_size_touch_calib_1

0x3d61,	// (0x00090284) aid_size_touch_calib_2_ParamLimits

0x3d61,	// (0x00090284) aid_size_touch_calib_2

0x3d79,	// (0x0009029c) aid_size_touch_calib_3_ParamLimits

0x3d79,	// (0x0009029c) aid_size_touch_calib_3

0x3d97,	// (0x000902ba) aid_size_touch_calib_4_ParamLimits

0x3d97,	// (0x000902ba) aid_size_touch_calib_4

0x3daf,	// (0x000902d2) main_touch_calib_button_group_pane_ParamLimits

0x3daf,	// (0x000902d2) main_touch_calib_button_group_pane

0x3dc7,	// (0x000902ea) main_touch_calib_pane_g1_ParamLimits

0x3dd9,	// (0x000902fc) main_touch_calib_pane_g2_ParamLimits

0x3deb,	// (0x0009030e) main_touch_calib_pane_g3_ParamLimits

0x3dfd,	// (0x00090320) main_touch_calib_pane_g4_ParamLimits

0xf699,	// (0x0009bbbc) main_touch_calib_pane_g_ParamLimits

0x3e0f,	// (0x00090332) main_touch_calib_pane_t1_ParamLimits

0x3e29,	// (0x0009034c) main_touch_calib_pane_t2_ParamLimits

0x3e43,	// (0x00090366) main_touch_calib_pane_t3_ParamLimits

0x3e57,	// (0x0009037a) main_touch_calib_pane_t4_ParamLimits

0x3e6d,	// (0x00090390) main_touch_calib_pane_t5_ParamLimits

0xf6a2,	// (0x0009bbc5) main_touch_calib_pane_t_ParamLimits

0xcd6e,	// (0x00099291) list_single_fp_cale_pane_g3_ParamLimits

0xcd6e,	// (0x00099291) list_single_fp_cale_pane_g3

0x98ba,	// (0x00095ddd) bg_button_pane_cp012_ParamLimits

0x98ba,	// (0x00095ddd) bg_vkb2_func_pane_cp03_ParamLimits

0x5df6,	// (0x00092319) cell_vitu2_function_top_pane_g1_ParamLimits

0x98ba,	// (0x00095ddd) bg_vkb2_func_pane_cp04_ParamLimits

0x6abc,	// (0x00092fdf) main_ncimui_button_group_pane_ParamLimits

0x6abc,	// (0x00092fdf) main_ncimui_button_group_pane

0x6b1c,	// (0x0009303f) main_ncimui_pane_t3_ParamLimits

0x6b1c,	// (0x0009303f) main_ncimui_pane_t3

0xe3fb,	// (0x0009a91e) phacti_button_group_pane

0xe5c8,	// (0x0009aaeb) aid_size_list_single_double_ParamLimits

0x7c16,	// (0x00094139) popup_ezdial_listscroll_window_ParamLimits

0x7c32,	// (0x00094155) popup_number_entry_window_cp01_ParamLimits

0x7d67,	// (0x0009428a) phacti_button_pane_ParamLimits

0x7d67,	// (0x0009428a) phacti_button_pane

0x9855,	// (0x00095d78) bg_button_pane_cp14

0xe64e,	// (0x0009ab71) phacti_button_pane_t1

0x7d78,	// (0x0009429b) main_touch_calib_button_pane_ParamLimits

0x7d78,	// (0x0009429b) main_touch_calib_button_pane

0xa07a,	// (0x0009659d) bg_button_pane_cp18_ParamLimits

0xa07a,	// (0x0009659d) bg_button_pane_cp18

0xe65c,	// (0x0009ab7f) main_touch_calib_button_pane_t1_ParamLimits

0xe65c,	// (0x0009ab7f) main_touch_calib_button_pane_t1

0xe672,	// (0x0009ab95) main_touch_calib_button_pane_t2_ParamLimits

0xe672,	// (0x0009ab95) main_touch_calib_button_pane_t2

0x0001,

0xfd10,	// (0x0009c233) main_touch_calib_button_pane_t_ParamLimits

0xfd10,	// (0x0009c233) main_touch_calib_button_pane_t

0x9855,	// (0x00095d78) cell_ncimui_button_pane

0x9855,	// (0x00095d78) bg_button_pane_cp032

0xe690,	// (0x0009abb3) cell_ncimui_button_pane_t1

0xa6b1,	// (0x00096bd4) image3_infobar_pane_ParamLimits

0xa6b1,	// (0x00096bd4) image3_infobar_pane

0x6f33,	// (0x00093456) fs_bigclock_status_pane_ParamLimits

0x6f33,	// (0x00093456) fs_bigclock_status_pane

0x6f40,	// (0x00093463) main_fs_bigclock_clock_pane_ParamLimits

0x6f40,	// (0x00093463) main_fs_bigclock_clock_pane

0x6f72,	// (0x00093495) main_fs_bigclock_indi_pane_ParamLimits

0x6f72,	// (0x00093495) main_fs_bigclock_indi_pane

0x6fb2,	// (0x000934d5) main_fs_bigclock_swipe_pane_ParamLimits

0x6fb2,	// (0x000934d5) main_fs_bigclock_swipe_pane

0x9855,	// (0x00095d78) main_fs_clock_dumped_data

0x6ffe,	// (0x00093521) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x6ffe,	// (0x00093521) list_single_fs_bigclock_indicator_pane_g1

0x7017,	// (0x0009353a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7017,	// (0x0009353a) list_single_fs_bigclock_indicator_pane_g2

0x7031,	// (0x00093554) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7031,	// (0x00093554) list_single_fs_bigclock_indicator_pane_g3

0x704b,	// (0x0009356e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x704b,	// (0x0009356e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbb1,	// (0x0009c0d4) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbb1,	// (0x0009c0d4) list_single_fs_bigclock_indicator_pane_g

0x707a,	// (0x0009359d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x707a,	// (0x0009359d) list_single_fs_bigclock_indicator_pane_t1

0x70a2,	// (0x000935c5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x70a2,	// (0x000935c5) list_single_fs_bigclock_indicator_pane_t2

0x70ca,	// (0x000935ed) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x70ca,	// (0x000935ed) list_single_fs_bigclock_indicator_pane_t3

0x70f2,	// (0x00093615) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x70f2,	// (0x00093615) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbbc,	// (0x0009c0df) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbbc,	// (0x0009c0df) list_single_fs_bigclock_indicator_pane_t

0xe69e,	// (0x0009abc1) image3_infobar_fav_pane_ParamLimits

0xe69e,	// (0x0009abc1) image3_infobar_fav_pane

0xe6ae,	// (0x0009abd1) image3_infobar_loc_pane_ParamLimits

0xe6ae,	// (0x0009abd1) image3_infobar_loc_pane

0xe6c4,	// (0x0009abe7) image3_infobar_time_pane_ParamLimits

0xe6c4,	// (0x0009abe7) image3_infobar_time_pane

0xa99c,	// (0x00096ebf) image3_infobar_time_pane_g1

0xe6d4,	// (0x0009abf7) image3_infobar_time_pane_t1

0xa99c,	// (0x00096ebf) image3_infobar_loc_pane_g1

0xe6e2,	// (0x0009ac05) image3_infobar_loc_pane_g2

0x0001,

0xfd15,	// (0x0009c238) image3_infobar_loc_pane_g

0xe6ea,	// (0x0009ac0d) image3_infobar_loc_pane_t1

0xa99c,	// (0x00096ebf) image3_infobar_fav_pane_g1

0xe6f8,	// (0x0009ac1b) image3_infobar_fav_pane_g2

0x0001,

0xfd1a,	// (0x0009c23d) image3_infobar_fav_pane_g

0xe700,	// (0x0009ac23) fs_bigclock_status_battery_pane

0xe709,	// (0x0009ac2c) fs_bigclock_status_signal_pane

0xe712,	// (0x0009ac35) fs_bigclock_status_title_pane

0xe71b,	// (0x0009ac3e) fs_bigclock_status_signal_pane_g1

0xe724,	// (0x0009ac47) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1f,	// (0x0009c242) fs_bigclock_status_signal_pane_g

0xe72c,	// (0x0009ac4f) fs_bigclock_status_battery_pane_g1

0xe735,	// (0x0009ac58) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd24,	// (0x0009c247) fs_bigclock_status_battery_pane_g

0xe73d,	// (0x0009ac60) fs_bigclock_status_title_pane_t1

0x7d8d,	// (0x000942b0) main_fs_bigclock_clock_pane_g1

0x7d8d,	// (0x000942b0) main_fs_bigclock_clock_pane_g2

0x7da0,	// (0x000942c3) main_fs_bigclock_clock_pane_g3

0x7da0,	// (0x000942c3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd29,	// (0x0009c24c) main_fs_bigclock_clock_pane_g

0x7db7,	// (0x000942da) main_fs_bigclock_clock_pane_t1

0x7dcd,	// (0x000942f0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd32,	// (0x0009c255) main_fs_bigclock_clock_pane_t

0xe74b,	// (0x0009ac6e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe74b,	// (0x0009ac6e) list_single_fs_bigclock_indicator_pane

0xe75c,	// (0x0009ac7f) list_single_fs_bigclock_pane_ParamLimits

0xe75c,	// (0x0009ac7f) list_single_fs_bigclock_pane

0xe782,	// (0x0009aca5) main_fs_bigclock_indicator_pane_t1

0xe791,	// (0x0009acb4) list_single_fs_bigclock_pane_g1

0xe799,	// (0x0009acbc) list_single_fs_bigclock_pane_t1

0xa99c,	// (0x00096ebf) main_fs_bigclock_swipe_pane_g1

0xe7dc,	// (0x0009acff) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd43,	// (0x0009c266) main_fs_bigclock_swipe_pane_g

0xe7e4,	// (0x0009ad07) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe7e4,	// (0x0009ad07) main_fs_bigclock_swipe_pane_t1

0x2642,	// (0x0008eb65) call_type_pane_ParamLimits

0x9855,	// (0x00095d78) main_btmg_pane

0x7aae,	// (0x00093fd1) list_single_cale_mrui_row_pane_g2_ParamLimits

0x7aae,	// (0x00093fd1) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb6,	// (0x0009c1d9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb6,	// (0x0009c1d9) list_single_cale_mrui_row_pane_g

0x7cb1,	// (0x000941d4) list_recal_vselct_arw_lo_pane

0xe619,	// (0x0009ab3c) list_recal_vselct_arw_up_pane

0x7cb9,	// (0x000941dc) list_recal_vselct_pane

0x7e2f,	// (0x00094352) btmg_button_pane

0x7e39,	// (0x0009435c) main_btmg_pane_g1

0x9855,	// (0x00095d78) bg_button_pane_cp044

0xe801,	// (0x0009ad24) btmg_button_pane_t1

0xc62b,	// (0x00098b4e) aid_listscroll_gen

0x98ba,	// (0x00095ddd) main_cntbar_detail_pane

0xe338,	// (0x0009a85b) list_cmail_folder_pane

0xba82,	// (0x00097fa5) sp_fs_scroll_pane_cp03_ParamLimits

0x04f8,	// (0x0008ca1b) list_single_fs_dyc_pane_cp01_ParamLimits

0x04f8,	// (0x0008ca1b) list_single_fs_dyc_pane_cp01

0xe80f,	// (0x0009ad32) aid_size_cmail_indent

0xa90b,	// (0x00096e2e) list_single_dyc_row_pane_cp01

0x7e77,	// (0x0009439a) cntbar_detail_list_pane_ParamLimits

0x7e77,	// (0x0009439a) cntbar_detail_list_pane

0x7ec9,	// (0x000943ec) main_cntbar_detail_cont_pane_ParamLimits

0x7ec9,	// (0x000943ec) main_cntbar_detail_cont_pane

0xba82,	// (0x00097fa5) scroll_pane_cp032_ParamLimits

0xba82,	// (0x00097fa5) scroll_pane_cp032

0x7edd,	// (0x00094400) cntbar_detail_list_event_pane_ParamLimits

0x7edd,	// (0x00094400) cntbar_detail_list_event_pane

0x7e89,	// (0x000943ac) cntbar_detail_list_shct_pane

0xac0e,	// (0x00097131) aid_list_gen

0xe818,	// (0x0009ad3b) aid_scroll

0xe821,	// (0x0009ad44) aid_size_touch_scroll_bar

0x728b,	// (0x000937ae) aid_list_double

0x7eed,	// (0x00094410) aid_list_single

0x7eed,	// (0x00094410) aid_list_single_lg

0x0512,	// (0x0008ca35) aid_list_z_g_a_sm

0x7ef6,	// (0x00094419) aid_list_z_g_d

0x051a,	// (0x0008ca3d) aid_txt_z_prm

0x0528,	// (0x0008ca4b) aid_txt_z_prm_cp01

0x0536,	// (0x0008ca59) aid_txt_z_sec

0x7efe,	// (0x00094421) main_cntbar_detail_cont_pane_g1_ParamLimits

0x7efe,	// (0x00094421) main_cntbar_detail_cont_pane_g1

0x7f12,	// (0x00094435) main_cntbar_detail_cont_pane_g2_ParamLimits

0x7f12,	// (0x00094435) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd48,	// (0x0009c26b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd48,	// (0x0009c26b) main_cntbar_detail_cont_pane_g

0xe82a,	// (0x0009ad4d) main_cntbar_detail_cont_pane_t1

0xe838,	// (0x0009ad5b) main_cntbar_detail_cont_pane_t2

0xe846,	// (0x0009ad69) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4d,	// (0x0009c270) main_cntbar_detail_cont_pane_t

0x7f22,	// (0x00094445) cell_cntbar_detail_list_shct_pane_ParamLimits

0x7f22,	// (0x00094445) cell_cntbar_detail_list_shct_pane

0xe854,	// (0x0009ad77) cntbar_detail_list_shct_pane_g1

0xe85d,	// (0x0009ad80) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd54,	// (0x0009c277) cntbar_detail_list_shct_pane_g

0x7f34,	// (0x00094457) cntbar_detail_list_event_pane_g1_ParamLimits

0x7f34,	// (0x00094457) cntbar_detail_list_event_pane_g1

0x7f40,	// (0x00094463) cntbar_detail_list_event_pane_g2_ParamLimits

0x7f40,	// (0x00094463) cntbar_detail_list_event_pane_g2

0x0005,

0xfd59,	// (0x0009c27c) cntbar_detail_list_event_pane_g_ParamLimits

0xfd59,	// (0x0009c27c) cntbar_detail_list_event_pane_g

0x7fae,	// (0x000944d1) cntbar_detail_list_event_pane_t1_ParamLimits

0x7fae,	// (0x000944d1) cntbar_detail_list_event_pane_t1

0x7fc3,	// (0x000944e6) cntbar_detail_list_event_pane_t2_ParamLimits

0x7fc3,	// (0x000944e6) cntbar_detail_list_event_pane_t2

0x0002,

0xfd66,	// (0x0009c289) cntbar_detail_list_event_pane_t_ParamLimits

0xfd66,	// (0x0009c289) cntbar_detail_list_event_pane_t

0xa99c,	// (0x00096ebf) cell_cntbar_detail_list_shct_pane_g1

0x29dc,	// (0x0008eeff) navi_pane_mv_g3

0x98ba,	// (0x00095ddd) main_cntbar_detail_pane_ParamLimits

0x9855,	// (0x00095d78) main_notif_wgt_pane

0xa49f,	// (0x000969c2) aid_tch_main_mp4_pane_g4

0xa6a7,	// (0x00096bca) popup_slider_window_cp02

0x7ca7,	// (0x000941ca) list_recal_day_event_pane

0x7e43,	// (0x00094366) cntbar_detail_btn_pane_ParamLimits

0x7e43,	// (0x00094366) cntbar_detail_btn_pane

0x7e5c,	// (0x0009437f) cntbar_detail_btn_pane_cp01_ParamLimits

0x7e5c,	// (0x0009437f) cntbar_detail_btn_pane_cp01

0x7e89,	// (0x000943ac) cntbar_detail_list_shct_pane_ParamLimits

0x7e99,	// (0x000943bc) cntbar_detail_pane_g1_ParamLimits

0x7e99,	// (0x000943bc) cntbar_detail_pane_g1

0x7ead,	// (0x000943d0) cntbar_detail_pane_t1_ParamLimits

0x7ead,	// (0x000943d0) cntbar_detail_pane_t1

0x7f4c,	// (0x0009446f) cntbar_detail_list_event_pane_g3_ParamLimits

0x7f4c,	// (0x0009446f) cntbar_detail_list_event_pane_g3

0x7f64,	// (0x00094487) cntbar_detail_list_event_pane_g4_ParamLimits

0x7f64,	// (0x00094487) cntbar_detail_list_event_pane_g4

0x7f7c,	// (0x0009449f) cntbar_detail_list_event_pane_g5_ParamLimits

0x7f7c,	// (0x0009449f) cntbar_detail_list_event_pane_g5

0x7f94,	// (0x000944b7) cntbar_detail_list_event_pane_g6_ParamLimits

0x7f94,	// (0x000944b7) cntbar_detail_list_event_pane_g6

0x7fd8,	// (0x000944fb) cntbar_detail_list_event_pane_t3_ParamLimits

0x7fd8,	// (0x000944fb) cntbar_detail_list_event_pane_t3

0x7fea,	// (0x0009450d) popup_notif_wgt_window_ParamLimits

0x7fea,	// (0x0009450d) popup_notif_wgt_window

0x8003,	// (0x00094526) popup_submenu_window_cp01_ParamLimits

0x8003,	// (0x00094526) popup_submenu_window_cp01

0xa966,	// (0x00096e89) bg_popup_window_pane_cp10

0xe866,	// (0x0009ad89) listscroll_notif_wgt_pane

0xe878,	// (0x0009ad9b) list_notif_wgt_window

0xe881,	// (0x0009ada4) scroll_pane_cp033

0x8017,	// (0x0009453a) list_notif_wgt_row_pane_ParamLimits

0x8017,	// (0x0009453a) list_notif_wgt_row_pane

0xe88a,	// (0x0009adad) aid_size_list_notif_wgt_del

0xe897,	// (0x0009adba) list_notif_wgt_row_pane_g1

0xe8a3,	// (0x0009adc6) list_notif_wgt_row_pane_g2

0xe8b2,	// (0x0009add5) list_notif_wgt_row_pane_g3

0x0002,

0xfd6d,	// (0x0009c290) list_notif_wgt_row_pane_g

0xe8bf,	// (0x0009ade2) list_notif_wgt_row_pane_t1

0xe8d5,	// (0x0009adf8) list_notif_wgt_row_pane_t2

0xe8e7,	// (0x0009ae0a) list_notif_wgt_row_pane_t3

0x0002,

0xfd74,	// (0x0009c297) list_notif_wgt_row_pane_t

0xd557,	// (0x00099a7a) list_recal_day_event_pane_g1

0xe8f9,	// (0x0009ae1c) list_recal_day_event_pane_t1

0x9855,	// (0x00095d78) bg_button_pane_cp045

0x8027,	// (0x0009454a) cntbar_detail_btn_pane_t1

0xb3b0,	// (0x000978d3) main_callh_pane_ParamLimits

0xb3b0,	// (0x000978d3) main_callh_pane

0x9855,	// (0x00095d78) main_coverflow0_pane

0x9855,	// (0x00095d78) main_wgtman_pane

0x6fd3,	// (0x000934f6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6fd3,	// (0x000934f6) main_fs_bigclock_unlock_btn_pane

0x773b,	// (0x00093c5e) bg_button_pane_cp16

0x774b,	// (0x00093c6e) cell_tport_appsw_pane_g3

0x8035,	// (0x00094558) cf0_flow_pane_ParamLimits

0x8035,	// (0x00094558) cf0_flow_pane

0xe908,	// (0x0009ae2b) listscroll_cf0_pane

0xe913,	// (0x0009ae36) main_cf0_pane_g1

0x804a,	// (0x0009456d) main_cf0_pane_t1_ParamLimits

0x804a,	// (0x0009456d) main_cf0_pane_t1

0x8061,	// (0x00094584) main_cf0_pane_t2_ParamLimits

0x8061,	// (0x00094584) main_cf0_pane_t2

0x0001,

0xfd80,	// (0x0009c2a3) main_cf0_pane_t_ParamLimits

0xfd80,	// (0x0009c2a3) main_cf0_pane_t

0xe925,	// (0x0009ae48) scroll_pane_cp11

0x8078,	// (0x0009459b) cf0_flow_pane_g1

0x8084,	// (0x000945a7) cf0_flow_pane_g2

0x0001,

0xfd85,	// (0x0009c2a8) cf0_flow_pane_g

0x8090,	// (0x000945b3) cf0_flow_pane_t1

0x9855,	// (0x00095d78) main_call6_pane

0x9855,	// (0x00095d78) main_calllock_pane

0x80a2,	// (0x000945c5) call6_btn_grp_pane_ParamLimits

0x80a2,	// (0x000945c5) call6_btn_grp_pane

0x80bc,	// (0x000945df) call6_pane_g1_ParamLimits

0x80bc,	// (0x000945df) call6_pane_g1

0x80d5,	// (0x000945f8) popup_call6_1st_window_ParamLimits

0x80d5,	// (0x000945f8) popup_call6_1st_window

0x80e9,	// (0x0009460c) popup_call6_2nd_window_ParamLimits

0x80e9,	// (0x0009460c) popup_call6_2nd_window

0x80fd,	// (0x00094620) cell_call6_btn_pane_ParamLimits

0x80fd,	// (0x00094620) cell_call6_btn_pane

0xa966,	// (0x00096e89) bg_popup_call2_in_pane_cp03

0xe930,	// (0x0009ae53) popup_call6_1st_window_g1

0xe938,	// (0x0009ae5b) popup_call6_1st_window_g2

0xe940,	// (0x0009ae63) popup_call6_1st_window_g3

0x0002,

0xfd8a,	// (0x0009c2ad) popup_call6_1st_window_g

0xe948,	// (0x0009ae6b) popup_call6_1st_window_t1

0xe957,	// (0x0009ae7a) popup_call6_1st_window_t2

0xe967,	// (0x0009ae8a) popup_call6_1st_window_t3

0x0002,

0xfd91,	// (0x0009c2b4) popup_call6_1st_window_t

0xa966,	// (0x00096e89) bg_popup_call2_in_pane_cp04

0xe977,	// (0x0009ae9a) popup_call6_2nd_window_g1

0xe97f,	// (0x0009aea2) popup_call6_2nd_window_g2

0xe987,	// (0x0009aeaa) popup_call6_2nd_window_g3

0x0002,

0xfd98,	// (0x0009c2bb) popup_call6_2nd_window_g

0xe98f,	// (0x0009aeb2) popup_call6_2nd_window_t1

0x9855,	// (0x00095d78) bg_button_pane_cp15

0xe99e,	// (0x0009aec1) cell_call6_btn_pane_g1

0xedaa,	// (0x0009b2cd) cell_call6_btn_pane_t1

0x8111,	// (0x00094634) listscroll_wgtman_pane_ParamLimits

0x8111,	// (0x00094634) listscroll_wgtman_pane

0x8132,	// (0x00094655) wgtman_btn_pane_ParamLimits

0x8132,	// (0x00094655) wgtman_btn_pane

0xb189,	// (0x000976ac) aid_scroll_copy1

0xe9a7,	// (0x0009aeca) list_wgtman_pane

0x8175,	// (0x00094698) wgtman_btn_pane_g1_ParamLimits

0x8175,	// (0x00094698) wgtman_btn_pane_g1

0x81a1,	// (0x000946c4) wgtman_btn_pane_t1_ParamLimits

0x81a1,	// (0x000946c4) wgtman_btn_pane_t1

0xe9b1,	// (0x0009aed4) wgtman_btn_pane_t2_ParamLimits

0xe9b1,	// (0x0009aed4) wgtman_btn_pane_t2

0x0001,

0xfd9f,	// (0x0009c2c2) wgtman_btn_pane_t_ParamLimits

0xfd9f,	// (0x0009c2c2) wgtman_btn_pane_t

0x81de,	// (0x00094701) listrow_wgtman_pane_ParamLimits

0x81de,	// (0x00094701) listrow_wgtman_pane

0x81f2,	// (0x00094715) listrow_wgtman_pane_g1

0x81ff,	// (0x00094722) listrow_wgtman_pane_g2

0x0001,

0xfda4,	// (0x0009c2c7) listrow_wgtman_pane_g

0x0544,	// (0x0008ca67) listrow_wgtman_pane_t1

0x055c,	// (0x0008ca7f) listrow_wgtman_pane_t2

0x0001,

0xfda9,	// (0x0009c2cc) listrow_wgtman_pane_t

0x0582,	// (0x0008caa5) wait_bar_pane_cp09

0xe9c8,	// (0x0009aeeb) main_calllock_btn_pane

0xe9d2,	// (0x0009aef5) main_calllock_pane_g1

0x9855,	// (0x00095d78) bg_button_pane_cp17

0xe99e,	// (0x0009aec1) main_calllock_btn_pane_g1

0xe9de,	// (0x0009af01) main_calllock_btn_pane_t1

0x9855,	// (0x00095d78) main_dialer3_pane

0x9855,	// (0x00095d78) main_fmrd2_pane

0xa99c,	// (0x00096ebf) main_fs_bigclock_unlock_btn_pane_g1

0x8225,	// (0x00094748) main_fs_bigclock_unlock_btn_pane_t1

0x8233,	// (0x00094756) area_fmrd2_info_pane_ParamLimits

0x8233,	// (0x00094756) area_fmrd2_info_pane

0x8244,	// (0x00094767) area_fmrd2_visual_pane_ParamLimits

0x8244,	// (0x00094767) area_fmrd2_visual_pane

0x8252,	// (0x00094775) fmrd2_indi_pane_ParamLimits

0x8252,	// (0x00094775) fmrd2_indi_pane

0x825f,	// (0x00094782) area_fmrd2_visual_pane_g1

0x8267,	// (0x0009478a) area_fmrd2_visual_pane_t1

0x8277,	// (0x0009479a) area_fmrd2_visual_pane_t2

0x8287,	// (0x000947aa) area_fmrd2_visual_pane_t3

0x0002,

0xfdb3,	// (0x0009c2d6) area_fmrd2_visual_pane_t

0x8297,	// (0x000947ba) area_fmrd2_info_pane_g1

0x829f,	// (0x000947c2) area_fmrd2_info_pane_t1

0x82af,	// (0x000947d2) area_fmrd2_info_pane_t2

0x82bf,	// (0x000947e2) area_fmrd2_info_pane_t3

0x82cf,	// (0x000947f2) area_fmrd2_info_pane_t4

0x0003,

0xfdba,	// (0x0009c2dd) area_fmrd2_info_pane_t

0x82df,	// (0x00094802) fmrd2_indi_pane_t1

0x82ef,	// (0x00094812) fmrd2_indi_pane_t2

0x82ff,	// (0x00094822) fmrd2_indi_pane_t3

0x0002,

0xfdc3,	// (0x0009c2e6) fmrd2_indi_pane_t

0x705c,	// (0x0009357f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x705c,	// (0x0009357f) list_single_fs_bigclock_indicator_pane_g5

0x7111,	// (0x00093634) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7111,	// (0x00093634) list_single_fs_bigclock_indicator_pane_t5

0x7920,	// (0x00093e43) aid_cell_bcale_month_pane_ParamLimits

0x7920,	// (0x00093e43) aid_cell_bcale_month_pane

0x7947,	// (0x00093e6a) bcale_month_pane_ParamLimits

0x7947,	// (0x00093e6a) bcale_month_pane

0x796b,	// (0x00093e8e) bcale_preview_pane_ParamLimits

0x796b,	// (0x00093e8e) bcale_preview_pane

0xe799,	// (0x0009acbc) list_single_fs_bigclock_pane_t1_ParamLimits

0xe7b8,	// (0x0009acdb) list_single_fs_bigclock_pane_t2_ParamLimits

0xe7b8,	// (0x0009acdb) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3e,	// (0x0009c261) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3e,	// (0x0009c261) list_single_fs_bigclock_pane_t

0x821d,	// (0x00094740) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdae,	// (0x0009c2d1) main_fs_bigclock_unlock_btn_pane_g

0x830f,	// (0x00094832) aid_dia3_key_size_ParamLimits

0x830f,	// (0x00094832) aid_dia3_key_size

0x8323,	// (0x00094846) aid_dia3_listrow_size_ParamLimits

0x8323,	// (0x00094846) aid_dia3_listrow_size

0x833d,	// (0x00094860) dia3_keypad_fun_pane_ParamLimits

0x833d,	// (0x00094860) dia3_keypad_fun_pane

0x8357,	// (0x0009487a) dia3_keypad_num_pane_ParamLimits

0x8357,	// (0x0009487a) dia3_keypad_num_pane

0x8371,	// (0x00094894) dia3_listscroll_pane_ParamLimits

0x8371,	// (0x00094894) dia3_listscroll_pane

0x8387,	// (0x000948aa) dia3_numentry_pane_ParamLimits

0x8387,	// (0x000948aa) dia3_numentry_pane

0xe9ed,	// (0x0009af10) dia3_list_pane

0x83a1,	// (0x000948c4) scroll_pane_cp12

0x9855,	// (0x00095d78) bg_dia3_numentry_pane

0x83ac,	// (0x000948cf) dia3_numentry_pane_t1

0x83bb,	// (0x000948de) cell_dia3_key_num_pane

0x83c3,	// (0x000948e6) cell_dia3_key0_fun_pane_ParamLimits

0x83c3,	// (0x000948e6) cell_dia3_key0_fun_pane

0x83d7,	// (0x000948fa) cell_dia3_key1_fun_pane_ParamLimits

0x83d7,	// (0x000948fa) cell_dia3_key1_fun_pane

0x83ec,	// (0x0009490f) dia3_listrow_pane

0xde4e,	// (0x0009a371) bg_dia3_numentry_pane_g1

0x9855,	// (0x00095d78) bg_button_pane_cp21

0x83fe,	// (0x00094921) cell_dia3_key_num_pane_t1

0x840c,	// (0x0009492f) cell_dia3_key_num_pane_t2

0x840c,	// (0x0009492f) cell_dia3_key_num_pane_t3

0x840c,	// (0x0009492f) cell_dia3_key_num_pane_t4

0x0003,

0xfdca,	// (0x0009c2ed) cell_dia3_key_num_pane_t

0x9855,	// (0x00095d78) bg_button_pane_cp19

0x841b,	// (0x0009493e) cell_dia3_key0_fun_pane_g1

0x9855,	// (0x00095d78) bg_button_pane_cp20

0x8423,	// (0x00094946) cell_dia3_key1_fun_pane_g1

0x842b,	// (0x0009494e) area_left_week_number_pane

0x8439,	// (0x0009495c) area_top_day_name_pane

0x844c,	// (0x0009496f) frame_month_view_pane

0xe9f8,	// (0x0009af1b) grid_month_view_pane

0x8461,	// (0x00094984) cell_top_day_name_pane_ParamLimits

0x8461,	// (0x00094984) cell_top_day_name_pane

0x8490,	// (0x000949b3) cell_area_left_week_number_pane_ParamLimits

0x8490,	// (0x000949b3) cell_area_left_week_number_pane

0x84a6,	// (0x000949c9) cell_month_view_pane_ParamLimits

0x84a6,	// (0x000949c9) cell_month_view_pane

0xea06,	// (0x0009af29) frm_month_g1

0x84d7,	// (0x000949fa) frm_month_g2

0x84ea,	// (0x00094a0d) frm_month_g3

0x84fd,	// (0x00094a20) frm_month_g4

0x8510,	// (0x00094a33) frm_month_g5

0x8523,	// (0x00094a46) frm_month_g6

0x8538,	// (0x00094a5b) frm_month_g7

0xea13,	// (0x0009af36) frm_month_g8

0x854d,	// (0x00094a70) frm_month_g9

0x855d,	// (0x00094a80) frm_month_g10

0x856d,	// (0x00094a90) frm_month_g11

0x857d,	// (0x00094aa0) frm_month_g12

0x858f,	// (0x00094ab2) frm_month_g13

0x85a3,	// (0x00094ac6) frm_month_g14

0x85b7,	// (0x00094ada) frm_month_g15

0x85cb,	// (0x00094aee) frm_month_g16

0x000f,

0xfdd3,	// (0x0009c2f6) frm_month_g

0xea20,	// (0x0009af43) cell_top_day_name_pane_t1

0x85df,	// (0x00094b02) cell_area_left_week_number_pane_g1

0x85eb,	// (0x00094b0e) cell_area_left_week_number_pane_t1

0x9fe6,	// (0x00096509) cell_month_view_pane_g1

0x85fe,	// (0x00094b21) cell_month_view_pane_t1

0x9855,	// (0x00095d78) main_fps_pane

0xe266,	// (0x0009a789) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe266,	// (0x0009a789) cmail_ddmenu_btn02_pane_cp1

0xe282,	// (0x0009a7a5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe282,	// (0x0009a7a5) cmail_ddmenu_btn02_pane_cp2

0x7c74,	// (0x00094197) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7c74,	// (0x00094197) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcf1,	// (0x0009c214) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcf1,	// (0x0009c214) cmail_ddmenu_btn02_pane_g

0x7c95,	// (0x000941b8) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7c95,	// (0x000941b8) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf6,	// (0x0009c219) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf6,	// (0x0009c219) cmail_ddmenu_btn02_pane_t

0x8611,	// (0x00094b34) fps_text_pane_ParamLimits

0x8611,	// (0x00094b34) fps_text_pane

0x8628,	// (0x00094b4b) main_fps_pane_g1_ParamLimits

0x8628,	// (0x00094b4b) main_fps_pane_g1

0x8640,	// (0x00094b63) wait_bar_pane_cp010_ParamLimits

0x8640,	// (0x00094b63) wait_bar_pane_cp010

0x8653,	// (0x00094b76) fps_text_pane_t1_ParamLimits

0x8653,	// (0x00094b76) fps_text_pane_t1

0xd2b4,	// (0x000997d7) cam4_image_uncrop_pane_g1

0xd2bd,	// (0x000997e0) cam4_image_uncrop_pane_g2

0x52d3,	// (0x000917f6) cam4_image_uncrop_pane_g3

0x52dc,	// (0x000917ff) cam4_image_uncrop_pane_g4

0x0003,

0xf835,	// (0x0009bd58) cam4_image_uncrop_pane_g

0x83ec,	// (0x0009490f) dia3_listrow_pane_ParamLimits

0x9855,	// (0x00095d78) main_phob2_pane

0x76e5,	// (0x00093c08) cell_tport_appsw_pane_cp02_ParamLimits

0x76e5,	// (0x00093c08) cell_tport_appsw_pane_cp02

0x76f9,	// (0x00093c1c) cell_tport_appsw_pane_cp03_ParamLimits

0x76f9,	// (0x00093c1c) cell_tport_appsw_pane_cp03

0x9855,	// (0x00095d78) phob2_contact_card_pane

0x9855,	// (0x00095d78) phob2_listscroll_pane

0xea33,	// (0x0009af56) phob2_list_pane

0xea3b,	// (0x0009af5e) scroll_pane_cp034

0x866b,	// (0x00094b8e) phob2_cc_data_pane_ParamLimits

0x866b,	// (0x00094b8e) phob2_cc_data_pane

0x8684,	// (0x00094ba7) phob2_cc_listscroll_pane_ParamLimits

0x8684,	// (0x00094ba7) phob2_cc_listscroll_pane

0x86a5,	// (0x00094bc8) list_double_large_graphic_phob2_pane_ParamLimits

0x86a5,	// (0x00094bc8) list_double_large_graphic_phob2_pane

0x86b9,	// (0x00094bdc) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x86b9,	// (0x00094bdc) list_double_large_graphic_phob2_pane_g1

0x0594,	// (0x0008cab7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0594,	// (0x0008cab7) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf4,	// (0x0009c317) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf4,	// (0x0009c317) list_double_large_graphic_phob2_pane_g

0x05ac,	// (0x0008cacf) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x05ac,	// (0x0008cacf) list_double_large_graphic_phob2_pane_t1

0x05c1,	// (0x0008cae4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x05c1,	// (0x0008cae4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfd,	// (0x0009c320) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfd,	// (0x0009c320) list_double_large_graphic_phob2_pane_t

0x9855,	// (0x00095d78) list_highlight_pane_cp024

0x86d4,	// (0x00094bf7) phob2_cc_button_pane

0x86e0,	// (0x00094c03) phob2_cc_data_pane_g1_ParamLimits

0x86e0,	// (0x00094c03) phob2_cc_data_pane_g1

0x86f6,	// (0x00094c19) phob2_cc_data_pane_g2_ParamLimits

0x86f6,	// (0x00094c19) phob2_cc_data_pane_g2

0x0001,

0xfe02,	// (0x0009c325) phob2_cc_data_pane_g_ParamLimits

0xfe02,	// (0x0009c325) phob2_cc_data_pane_g

0x870e,	// (0x00094c31) phob2_cc_data_pane_t1_ParamLimits

0x870e,	// (0x00094c31) phob2_cc_data_pane_t1

0x873e,	// (0x00094c61) phob2_cc_data_pane_t2_ParamLimits

0x873e,	// (0x00094c61) phob2_cc_data_pane_t2

0x876e,	// (0x00094c91) phob2_cc_data_pane_t3_ParamLimits

0x876e,	// (0x00094c91) phob2_cc_data_pane_t3

0x0002,

0xfe07,	// (0x0009c32a) phob2_cc_data_pane_t_ParamLimits

0xfe07,	// (0x0009c32a) phob2_cc_data_pane_t

0xea43,	// (0x0009af66) phob2_cc_list_pane_ParamLimits

0xea43,	// (0x0009af66) phob2_cc_list_pane

0xd600,	// (0x00099b23) scroll_pane_cp035_ParamLimits

0xd600,	// (0x00099b23) scroll_pane_cp035

0x98ba,	// (0x00095ddd) bg_button_pane_cp033

0x879e,	// (0x00094cc1) phob2_cc_button_pane_g1

0x87aa,	// (0x00094ccd) phob2_cc_button_pane_t1

0x87bf,	// (0x00094ce2) phob2_cc_button_pane_t2

0x0001,

0xfe0e,	// (0x0009c331) phob2_cc_button_pane_t

0x87d1,	// (0x00094cf4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x87d1,	// (0x00094cf4) list_double_large_graphic_phob2_cc_pane

0x8808,	// (0x00094d2b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8808,	// (0x00094d2b) list_double_large_graphic_phob2_cc_pane_g1

0x05d6,	// (0x0008caf9) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x05d6,	// (0x0008caf9) list_double_large_graphic_phob2_cc_pane_g2

0x05e2,	// (0x0008cb05) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x05e2,	// (0x0008cb05) list_double_large_graphic_phob2_cc_pane_g3

0x05ee,	// (0x0008cb11) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x05ee,	// (0x0008cb11) list_double_large_graphic_phob2_cc_pane_g4

0x05fa,	// (0x0008cb1d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x05fa,	// (0x0008cb1d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe13,	// (0x0009c336) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe13,	// (0x0009c336) list_double_large_graphic_phob2_cc_pane_g

0x0606,	// (0x0008cb29) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0606,	// (0x0008cb29) list_double_large_graphic_phob2_cc_pane_t1

0x062f,	// (0x0008cb52) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x062f,	// (0x0008cb52) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1e,	// (0x0009c341) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1e,	// (0x0009c341) list_double_large_graphic_phob2_cc_pane_t

0xea4f,	// (0x0009af72) list_highlight_pane_cp025_ParamLimits

0xea4f,	// (0x0009af72) list_highlight_pane_cp025

0x98ba,	// (0x00095ddd) bg_button_pane_cp033_ParamLimits

0x879e,	// (0x00094cc1) phob2_cc_button_pane_g1_ParamLimits

0x87aa,	// (0x00094ccd) phob2_cc_button_pane_t1_ParamLimits

0x87bf,	// (0x00094ce2) phob2_cc_button_pane_t2_ParamLimits

0xfe0e,	// (0x0009c331) phob2_cc_button_pane_t_ParamLimits

0x08a6,	// (0x0008cdc9) popup_wgtman_window

0xd439,	// (0x0009995c) scroll_pane_cp038

0x8157,	// (0x0009467a) wgtman_btn_pane_cp_01_ParamLimits

0x8157,	// (0x0009467a) wgtman_btn_pane_cp_01

0xea5d,	// (0x0009af80) wgtman_content_pane

0xea66,	// (0x0009af89) wgtman_heading_pane

0x9855,	// (0x00095d78) bg_heading_pane_cp02

0xea6f,	// (0x0009af92) wgtman_heading_pane_g1

0xea77,	// (0x0009af9a) wgtman_heading_pane_t1

0xea85,	// (0x0009afa8) scroll_pane_cp036

0xea8d,	// (0x0009afb0) wgtman_list_pane

0xe162,	// (0x0009a685) wgtman_list_pane_t1_ParamLimits

0xe162,	// (0x0009a685) wgtman_list_pane_t1

0xa737,	// (0x00096c5a) cam4_grid_pane

0xff98,	// (0x0008c4bb) bg_button_pane_cp015_ParamLimits

0x5f96,	// (0x000924b9) bg_button_pane_cp016_ParamLimits

0x5fa2,	// (0x000924c5) bg_button_pane_cp017_ParamLimits

0x5fbd,	// (0x000924e0) popup_vitu2_query_window_g3_ParamLimits

0x5fbd,	// (0x000924e0) popup_vitu2_query_window_g3

0x005e,	// (0x0008c581) popup_vitu2_query_window_t6_ParamLimits

0x005e,	// (0x0008c581) popup_vitu2_query_window_t6

0x0089,	// (0x0008c5ac) popup_vitu2_query_window_t7_ParamLimits

0x0089,	// (0x0008c5ac) popup_vitu2_query_window_t7

0xd2b4,	// (0x000997d7) cam4_grid_pane_g1

0xd2bd,	// (0x000997e0) cam4_grid_pane_g2

0xea95,	// (0x0009afb8) cam4_grid_pane_g3

0xea9e,	// (0x0009afc1) cam4_grid_pane_g4

0x0003,

0xfe23,	// (0x0009c346) cam4_grid_pane_g

0x14ed,	// (0x0008da10) aid_placing_vt_slider_lsc_ParamLimits

0x17da,	// (0x0008dcfd) vidtel_button_pane_ParamLimits

0x17da,	// (0x0008dcfd) vidtel_button_pane

0x9855,	// (0x00095d78) bg_button_pane_cp034

0xeaa9,	// (0x0009afcc) vidtel_button_pane_g1

0xeab1,	// (0x0009afd4) vidtel_button_pane_t1

0xd547,	// (0x00099a6a) aid_size_vtel_slider_touch

0xd600,	// (0x00099b23) scroll_pane_cp039

0x6c9a,	// (0x000931bd) ncim_query_button_pane_cp01_ParamLimits

0x6cb9,	// (0x000931dc) ncimui_query_pane_g1_ParamLimits

0x98ba,	// (0x00095ddd) input_focus_pane_cp012_ParamLimits

0xde8c,	// (0x0009a3af) ncim_query_entry_pane_t1_ParamLimits

0xd600,	// (0x00099b23) scroll_pane_cp039_ParamLimits

0x294e,	// (0x0008ee71) navi_pane_bcale_mc_g1

0x2956,	// (0x0008ee79) navi_pane_bcale_mc_t1

0xe2b8,	// (0x0009a7db) main_sp_fs_email_pane_g1

0xe2c4,	// (0x0009a7e7) main_sp_fs_email_pane_g2

0x0001,

0xfc26,	// (0x0009c149) main_sp_fs_email_pane_g

0xe520,	// (0x0009aa43) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe520,	// (0x0009aa43) list_single_cale_mrui_row_pane_g3

0x04ee,	// (0x0008ca11) list_single_recal_day_pane_g5_event_pane

0x7d05,	// (0x00094228) list_single_recal_day_pane_g7

0xeac7,	// (0x0009afea) list_recal_day_event_pane_cp01

0xead0,	// (0x0009aff3) list_recal_vselct_arw_lo_pane_cp01

0xead8,	// (0x0009affb) list_recal_vselct_arw_up_pane_cp01

0xeae0,	// (0x0009b003) list_recal_vselct_pane_cp01

0xd557,	// (0x00099a7a) list_recal_day_event_pane_cp01_g1

0xa914,	// (0x00096e37) list_recal_day_event_pane_cp01_t1

0x7d0d,	// (0x00094230) list_single_recal_day_pane_t1_ParamLimits

0x7d1f,	// (0x00094242) list_single_recal_day_pane_t2_ParamLimits

0xfd06,	// (0x0009c229) list_single_recal_day_pane_t_ParamLimits

0x9f6b,	// (0x0009648e) bg_notes_pane_ParamLimits

0xa03e,	// (0x00096561) list_notes_pane_ParamLimits

0x0a7c,	// (0x0008cf9f) scroll_pane_cp06_ParamLimits

0xa07a,	// (0x0009659d) main_notes_pane_ParamLimits

0x98ba,	// (0x00095ddd) main_welc_pane

0x8841,	// (0x00094d64) main_welc_body_pane_ParamLimits

0x8841,	// (0x00094d64) main_welc_body_pane

0x8860,	// (0x00094d83) main_welc_opti_pane_ParamLimits

0x8860,	// (0x00094d83) main_welc_opti_pane

0x88e0,	// (0x00094e03) main_welc_pane_t1_ParamLimits

0x88e0,	// (0x00094e03) main_welc_pane_t1

0x8ae8,	// (0x0009500b) main_welc_body_row_pane_ParamLimits

0x8ae8,	// (0x0009500b) main_welc_body_row_pane

0x9fd8,	// (0x000964fb) main_welc_opti_row_pane_ParamLimits

0x9fd8,	// (0x000964fb) main_welc_opti_row_pane

0xeafa,	// (0x0009b01d) main_welc_opti_row_pane_g1

0x8afc,	// (0x0009501f) main_welc_opti_row_pane_t1

0xeb02,	// (0x0009b025) main_welc_body_row_pane_t1

0xe870,	// (0x0009ad93) popup_notif_wgt_heading_pane

0xe88a,	// (0x0009adad) aid_size_list_notif_wgt_del_ParamLimits

0xe897,	// (0x0009adba) list_notif_wgt_row_pane_g1_ParamLimits

0xe8a3,	// (0x0009adc6) list_notif_wgt_row_pane_g2_ParamLimits

0xe8b2,	// (0x0009add5) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6d,	// (0x0009c290) list_notif_wgt_row_pane_g_ParamLimits

0xe8bf,	// (0x0009ade2) list_notif_wgt_row_pane_t1_ParamLimits

0xe8d5,	// (0x0009adf8) list_notif_wgt_row_pane_t2_ParamLimits

0xe8e7,	// (0x0009ae0a) list_notif_wgt_row_pane_t3_ParamLimits

0xfd74,	// (0x0009c297) list_notif_wgt_row_pane_t_ParamLimits

0x81f2,	// (0x00094715) listrow_wgtman_pane_g1_ParamLimits

0x81ff,	// (0x00094722) listrow_wgtman_pane_g2_ParamLimits

0xfda4,	// (0x0009c2c7) listrow_wgtman_pane_g_ParamLimits

0x0544,	// (0x0008ca67) listrow_wgtman_pane_t1_ParamLimits

0x055c,	// (0x0008ca7f) listrow_wgtman_pane_t2_ParamLimits

0xfda9,	// (0x0009c2cc) listrow_wgtman_pane_t_ParamLimits

0x0582,	// (0x0008caa5) wait_bar_pane_cp09_ParamLimits

0x9855,	// (0x00095d78) bg_popup_heading_pane_cp02

0xeb11,	// (0x0009b034) popup_notif_wgt_heading_pane_g1

0xeb19,	// (0x0009b03c) popup_notif_wgt_heading_pane_t1

0x9855,	// (0x00095d78) main_vids_pane

0x9855,	// (0x00095d78) vids_listscroll_pane

0x8b0b,	// (0x0009502e) scroll_pane_cp040

0x9855,	// (0x00095d78) vids_list_pane

0x8b16,	// (0x00095039) vids_list_double_pane_ParamLimits

0x8b16,	// (0x00095039) vids_list_double_pane

0x8b29,	// (0x0009504c) vids_list_double_pane_g1

0x8b32,	// (0x00095055) vids_list_double_pane_t1

0x8b42,	// (0x00095065) vids_list_double_pane_t2

0x0001,

0xfe42,	// (0x0009c365) vids_list_double_pane_t

0x98ba,	// (0x00095ddd) main_ncimui_pane_ParamLimits

0x6ad0,	// (0x00092ff3) main_ncimui_pane_g1_ParamLimits

0x6adc,	// (0x00092fff) main_ncimui_pane_g2_ParamLimits

0x6adc,	// (0x00092fff) main_ncimui_pane_g2

0x0001,

0xfb27,	// (0x0009c04a) main_ncimui_pane_g_ParamLimits

0xfb27,	// (0x0009c04a) main_ncimui_pane_g

0x887f,	// (0x00094da2) main_welc_pane_g1_ParamLimits

0x887f,	// (0x00094da2) main_welc_pane_g1

0x8894,	// (0x00094db7) main_welc_pane_g2_ParamLimits

0x8894,	// (0x00094db7) main_welc_pane_g2

0x0003,

0xfe2c,	// (0x0009c34f) main_welc_pane_g_ParamLimits

0xfe2c,	// (0x0009c34f) main_welc_pane_g

0x9f6b,	// (0x0009648e) listscroll_mce_pane_ParamLimits

0x2a2e,	// (0x0008ef51) wait_bar_pane_cp10

0xc633,	// (0x00098b56) main_cale_day_pane_ParamLimits

0xc633,	// (0x00098b56) main_cale_week_pane_ParamLimits

0x9f6b,	// (0x0009648e) main_messa_pane_ParamLimits

0x46b6,	// (0x00090bd9) main_clock2_btn_pane_ParamLimits

0x46b6,	// (0x00090bd9) main_clock2_btn_pane

0xcde8,	// (0x0009930b) main_clock2_btn_pane_cp01_ParamLimits

0xcde8,	// (0x0009930b) main_clock2_btn_pane_cp01

0xe4f1,	// (0x0009aa14) list_cale_mrui_pane_ParamLimits

0xe91d,	// (0x0009ae40) main_cf0_pane_g2

0x0001,

0xfd7b,	// (0x0009c29e) main_cf0_pane_g

0x842b,	// (0x0009494e) area_left_week_number_pane_ParamLimits

0x8439,	// (0x0009495c) area_top_day_name_pane_ParamLimits

0x844c,	// (0x0009496f) frame_month_view_pane_ParamLimits

0xe9f8,	// (0x0009af1b) grid_month_view_pane_ParamLimits

0xea06,	// (0x0009af29) frm_month_g1_ParamLimits

0x84d7,	// (0x000949fa) frm_month_g2_ParamLimits

0x84ea,	// (0x00094a0d) frm_month_g3_ParamLimits

0x84fd,	// (0x00094a20) frm_month_g4_ParamLimits

0x8510,	// (0x00094a33) frm_month_g5_ParamLimits

0x8523,	// (0x00094a46) frm_month_g6_ParamLimits

0x8538,	// (0x00094a5b) frm_month_g7_ParamLimits

0xea13,	// (0x0009af36) frm_month_g8_ParamLimits

0x854d,	// (0x00094a70) frm_month_g9_ParamLimits

0x855d,	// (0x00094a80) frm_month_g10_ParamLimits

0x856d,	// (0x00094a90) frm_month_g11_ParamLimits

0x857d,	// (0x00094aa0) frm_month_g12_ParamLimits

0x858f,	// (0x00094ab2) frm_month_g13_ParamLimits

0x85a3,	// (0x00094ac6) frm_month_g14_ParamLimits

0x85b7,	// (0x00094ada) frm_month_g15_ParamLimits

0x85cb,	// (0x00094aee) frm_month_g16_ParamLimits

0xfdd3,	// (0x0009c2f6) frm_month_g_ParamLimits

0xea20,	// (0x0009af43) cell_top_day_name_pane_t1_ParamLimits

0x85df,	// (0x00094b02) cell_area_left_week_number_pane_g1_ParamLimits

0x85eb,	// (0x00094b0e) cell_area_left_week_number_pane_t1_ParamLimits

0x9fe6,	// (0x00096509) cell_month_view_pane_g1_ParamLimits

0x85fe,	// (0x00094b21) cell_month_view_pane_t1_ParamLimits

0x9f63,	// (0x00096486) main_clock2_btn_pane_g1

0xeb27,	// (0x0009b04a) main_clock2_btn_pane_t1

0x98ba,	// (0x00095ddd) listscroll_cmail_pane_ParamLimits

0xe2b8,	// (0x0009a7db) main_sp_fs_email_pane_g1_ParamLimits

0xe2c4,	// (0x0009a7e7) main_sp_fs_email_pane_g2_ParamLimits

0xfc26,	// (0x0009c149) main_sp_fs_email_pane_g_ParamLimits

0xe5fa,	// (0x0009ab1d) list_recal_day_pane_ParamLimits

0xe60b,	// (0x0009ab2e) mian_recal_day_pane_t1

0x02e4,	// (0x0008c807) list_single_dyc_row_text_pane_t4_ParamLimits

0x02e4,	// (0x0008c807) list_single_dyc_row_text_pane_t4

0x032d,	// (0x0008c850) list_single_dyc_row_text_pane_t5_ParamLimits

0x032d,	// (0x0008c850) list_single_dyc_row_text_pane_t5

0x75dc,	// (0x00093aff) list_single_dyc_row_text_pane_t6_ParamLimits

0x75dc,	// (0x00093aff) list_single_dyc_row_text_pane_t6

0x259d,	// (0x0008eac0) aid_mgn_list_cale_time_pane

0x98ba,	// (0x00095ddd) main_gallery2_pane_ParamLimits

0xcdfc,	// (0x0009931f) main_clock2_pane_cp01_t1

0xce0a,	// (0x0009932d) main_clock2_pane_cp01_t3

0x0001,

0xf70c,	// (0x0009bc2f) main_clock2_pane_cp01_t

0x0ea8,	// (0x0008d3cb) cale_week_scroll_pane_g16_ParamLimits

0x0ea8,	// (0x0008d3cb) cale_week_scroll_pane_g16

0xa966,	// (0x00096e89) vorec_slider_pane

0xeab1,	// (0x0009afd4) vidtel_button_pane_t1_ParamLimits

0x7d8d,	// (0x000942b0) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7d8d,	// (0x000942b0) main_fs_bigclock_clock_pane_g2_ParamLimits

0x7da0,	// (0x000942c3) main_fs_bigclock_clock_pane_g3_ParamLimits

0x7da0,	// (0x000942c3) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd29,	// (0x0009c24c) main_fs_bigclock_clock_pane_g_ParamLimits

0x7db7,	// (0x000942da) main_fs_bigclock_clock_pane_t1_ParamLimits

0x7dcd,	// (0x000942f0) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd32,	// (0x0009c255) main_fs_bigclock_clock_pane_t_ParamLimits

0x3f03,	// (0x00090426) main_mup3_lyrics_pane_ParamLimits

0x3f03,	// (0x00090426) main_mup3_lyrics_pane

0x8b6a,	// (0x0009508d) main_mup3_lyrics_pane_t1_ParamLimits

0x8b6a,	// (0x0009508d) main_mup3_lyrics_pane_t1

0xa489,	// (0x000969ac) aid_main_mp4_pane_t1_area

0xa493,	// (0x000969b6) aid_main_mp4_pane_t2_area

0xa53f,	// (0x00096a62) main_mp4_pane_g7_ParamLimits

0xa53f,	// (0x00096a62) main_mp4_pane_g7

0xa54b,	// (0x00096a6e) main_mp4_pane_g8_ParamLimits

0xa54b,	// (0x00096a6e) main_mp4_pane_g8

0x509a,	// (0x000915bd) aid_call6_pane_g1_size

0x87f0,	// (0x00094d13) list_double_large_graphic_phob2_other_pane_ParamLimits

0x87f0,	// (0x00094d13) list_double_large_graphic_phob2_other_pane

0xad22,	// (0x00097245) list_double_large_graphic_phob2_other_pane_g1

0x9855,	// (0x00095d78) list_highlight_pane_cp026

0x98ba,	// (0x00095ddd) main_welc_pane_ParamLimits

0x747f,	// (0x000939a2) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x747f,	// (0x000939a2) main_sp_fs_ctrlbar_pane_g3

0x7499,	// (0x000939bc) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7499,	// (0x000939bc) main_sp_fs_ctrlbar_pane_g4

0x74cd,	// (0x000939f0) toolbar2_fixed_button_pane_cp01

0x74d8,	// (0x000939fb) toolbar2_fixed_button_pane_cp02

0x74e5,	// (0x00093a08) toolbar2_fixed_button_pane_cp03

0x8827,	// (0x00094d4a) list_welc_entry_pane_ParamLimits

0x8827,	// (0x00094d4a) list_welc_entry_pane

0x88a9,	// (0x00094dcc) main_welc_pane_g3_ParamLimits

0x88a9,	// (0x00094dcc) main_welc_pane_g3

0x8902,	// (0x00094e25) main_welc_pane_t2_ParamLimits

0x8902,	// (0x00094e25) main_welc_pane_t2

0x891d,	// (0x00094e40) main_welc_pane_t3_ParamLimits

0x891d,	// (0x00094e40) main_welc_pane_t3

0x0005,

0xfe35,	// (0x0009c358) main_welc_pane_t_ParamLimits

0xfe35,	// (0x0009c358) main_welc_pane_t

0x8a57,	// (0x00094f7a) welc_button_pane_ParamLimits

0x8a57,	// (0x00094f7a) welc_button_pane

0x8ad5,	// (0x00094ff8) welc_service_logo_pane_ParamLimits

0x8ad5,	// (0x00094ff8) welc_service_logo_pane

0x8b85,	// (0x000950a8) list_single_welc_entry_pane_ParamLimits

0x8b85,	// (0x000950a8) list_single_welc_entry_pane

0x8b98,	// (0x000950bb) list_single_welc_entry_pane_g1

0x8ba2,	// (0x000950c5) list_single_welc_entry_pane_t1

0x8bb0,	// (0x000950d3) list_single_welc_entry_pane_t2

0x0001,

0xfe47,	// (0x0009c36a) list_single_welc_entry_pane_t

0x9855,	// (0x00095d78) bg_button_pane_cp035

0x8bbe,	// (0x000950e1) welc_button_pane_t1

0xeb35,	// (0x0009b058) welc_service_logo_pane_g1

0xeb3e,	// (0x0009b061) welc_service_logo_pane_g2

0x0001,

0xfe4c,	// (0x0009c36f) welc_service_logo_pane_g

0x9855,	// (0x00095d78) main_int_radio_pane

0xdd2a,	// (0x0009a24d) list_single_fs_dyc_pane_g1

0x05a0,	// (0x0008cac3) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x05a0,	// (0x0008cac3) list_double_large_graphic_phob2_pane_g3

0x86c6,	// (0x00094be9) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x86c6,	// (0x00094be9) list_double_large_graphic_phob2_pane_g4

0x8bcc,	// (0x000950ef) main_int_radio1_pane_ParamLimits

0x8bcc,	// (0x000950ef) main_int_radio1_pane

0xeb47,	// (0x0009b06a) find_pane_cp02

0x8be9,	// (0x0009510c) input_focus_pane_cp12_ParamLimits

0x8be9,	// (0x0009510c) input_focus_pane_cp12

0x8bf9,	// (0x0009511c) input_focus_pane_cp13_ParamLimits

0x8bf9,	// (0x0009511c) input_focus_pane_cp13

0x8c0d,	// (0x00095130) input_focus_pane_cp14_ParamLimits

0x8c0d,	// (0x00095130) input_focus_pane_cp14

0xeb50,	// (0x0009b073) int_radio1_listscroll_pane

0x8c21,	// (0x00095144) main_int_radio1_pane_g1_ParamLimits

0x8c21,	// (0x00095144) main_int_radio1_pane_g1

0x8c37,	// (0x0009515a) main_int_radio1_pane_t1_ParamLimits

0x8c37,	// (0x0009515a) main_int_radio1_pane_t1

0x8c50,	// (0x00095173) main_int_radio1_pane_t2_ParamLimits

0x8c50,	// (0x00095173) main_int_radio1_pane_t2

0x8c6b,	// (0x0009518e) main_int_radio1_pane_t3_ParamLimits

0x8c6b,	// (0x0009518e) main_int_radio1_pane_t3

0x8c86,	// (0x000951a9) main_int_radio1_pane_t4_ParamLimits

0x8c86,	// (0x000951a9) main_int_radio1_pane_t4

0xeb5a,	// (0x0009b07d) main_int_radio1_pane_t5_ParamLimits

0xeb5a,	// (0x0009b07d) main_int_radio1_pane_t5

0x8c98,	// (0x000951bb) main_int_radio1_pane_t6_ParamLimits

0x8c98,	// (0x000951bb) main_int_radio1_pane_t6

0x8cad,	// (0x000951d0) main_int_radio1_pane_t7_ParamLimits

0x8cad,	// (0x000951d0) main_int_radio1_pane_t7

0x8cc2,	// (0x000951e5) main_int_radio1_pane_t8_ParamLimits

0x8cc2,	// (0x000951e5) main_int_radio1_pane_t8

0x8cdf,	// (0x00095202) main_int_radio1_pane_t9_ParamLimits

0x8cdf,	// (0x00095202) main_int_radio1_pane_t9

0x8cf1,	// (0x00095214) main_int_radio1_pane_t10_ParamLimits

0x8cf1,	// (0x00095214) main_int_radio1_pane_t10

0x8d17,	// (0x0009523a) main_int_radio1_pane_t11_ParamLimits

0x8d17,	// (0x0009523a) main_int_radio1_pane_t11

0x8d3d,	// (0x00095260) main_int_radio1_pane_t12_ParamLimits

0x8d3d,	// (0x00095260) main_int_radio1_pane_t12

0x000b,

0xfe51,	// (0x0009c374) main_int_radio1_pane_t_ParamLimits

0xfe51,	// (0x0009c374) main_int_radio1_pane_t

0xea33,	// (0x0009af56) int_radio_list_pane

0xea3b,	// (0x0009af5e) scroll_pane_cp037

0xeb6c,	// (0x0009b08f) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb6c,	// (0x0009b08f) list_double_large_graphic_int_radio_pane

0xeb80,	// (0x0009b0a3) list_double_large_graphic_int_radio_pane_g1

0xa930,	// (0x00096e53) list_double_large_graphic_int_radio_pane_t1

0xa93e,	// (0x00096e61) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe6a,	// (0x0009c38d) list_double_large_graphic_int_radio_pane_t

0x9855,	// (0x00095d78) list_highlight_pane_cp027

0xeaea,	// (0x0009b00d) main_button_pane_4

0x88bc,	// (0x00094ddf) main_welc_pane_g4_ParamLimits

0x88bc,	// (0x00094ddf) main_welc_pane_g4

0x8938,	// (0x00094e5b) main_welc_pane_t4_ParamLimits

0x8938,	// (0x00094e5b) main_welc_pane_t4

0x894f,	// (0x00094e72) main_welc_pane_t5_ParamLimits

0x894f,	// (0x00094e72) main_welc_pane_t5

0x8990,	// (0x00094eb3) main_welc_pane_t6_ParamLimits

0x8990,	// (0x00094eb3) main_welc_pane_t6

0x8a6c,	// (0x00094f8f) welc_button_pane_2_ParamLimits

0x8a6c,	// (0x00094f8f) welc_button_pane_2

0x8a8a,	// (0x00094fad) welc_button_pane_3_ParamLimits

0x8a8a,	// (0x00094fad) welc_button_pane_3

0xeaf2,	// (0x0009b015) welc_button_pane_4

0x8aab,	// (0x00094fce) welc_button_pane_5_ParamLimits

0x8aab,	// (0x00094fce) welc_button_pane_5

0x0694,	// (0x0008cbb7) main_popup_welc_pane

0xeb98,	// (0x0009b0bb) main_welc_sk_g3

0xeba2,	// (0x0009b0c5) main_welc_sk_g4

0xebac,	// (0x0009b0cf) main_welc_sk_t3

0xebbc,	// (0x0009b0df) main_welc_sk_t4

0xebcc,	// (0x0009b0ef) popup_welc_pane_t4

0xebda,	// (0x0009b0fd) popup_welc_pane_t5

0xebe8,	// (0x0009b10b) popup_welc_pane_t6

0x9855,	// (0x00095d78) main_acti_pane

0x9855,	// (0x00095d78) main_sso_pane

0x8d4f,	// (0x00095272) sso_body_pane_ParamLimits

0x8d4f,	// (0x00095272) sso_body_pane

0x8d64,	// (0x00095287) sso_logo_pane_ParamLimits

0x8d64,	// (0x00095287) sso_logo_pane

0x8d94,	// (0x000952b7) sso_sk_pane_ParamLimits

0x8d94,	// (0x000952b7) sso_sk_pane

0xa99c,	// (0x00096ebf) main_sso_logo_pane_g1

0x8da6,	// (0x000952c9) sso_sk_pane_t1_ParamLimits

0x8da6,	// (0x000952c9) sso_sk_pane_t1

0x8dc0,	// (0x000952e3) sso_sk_pane_t2_ParamLimits

0x8dc0,	// (0x000952e3) sso_sk_pane_t2

0x0001,

0xfe6f,	// (0x0009c392) sso_sk_pane_t_ParamLimits

0xfe6f,	// (0x0009c392) sso_sk_pane_t

0xec2a,	// (0x0009b14d) aid_sso_gap

0xec33,	// (0x0009b156) aid_sso_txt1

0xec3d,	// (0x0009b160) aid_sso_txt2

0xec47,	// (0x0009b16a) aid_sso_txt3

0x0002,

0xfe74,	// (0x0009c397) aid_sso_txt

0xec51,	// (0x0009b174) aid_sso_widget

0x8e2a,	// (0x0009534d) sso_btn_pane_ParamLimits

0x8e2a,	// (0x0009534d) sso_btn_pane

0x8eb2,	// (0x000953d5) sso_option_pane_ParamLimits

0x8eb2,	// (0x000953d5) sso_option_pane

0x8f34,	// (0x00095457) sso_query_pane_ParamLimits

0x8f34,	// (0x00095457) sso_query_pane

0x8f8a,	// (0x000954ad) sso_query_pane_cp01_ParamLimits

0x8f8a,	// (0x000954ad) sso_query_pane_cp01

0x8fea,	// (0x0009550d) sso_t_hdr_pane_ParamLimits

0x8fea,	// (0x0009550d) sso_t_hdr_pane

0x9014,	// (0x00095537) sso_t_nml_pane_ParamLimits

0x9014,	// (0x00095537) sso_t_nml_pane

0xec5b,	// (0x0009b17e) sso_t_sub_pane

0x8d71,	// (0x00095294) sso_popup_window_ParamLimits

0x8d71,	// (0x00095294) sso_popup_window

0x8dd6,	// (0x000952f9) sso_apps_pane_ParamLimits

0x8dd6,	// (0x000952f9) sso_apps_pane

0x8e00,	// (0x00095323) sso_body_pane_g1

0x8e0a,	// (0x0009532d) sso_body_pane_t1

0x8e1a,	// (0x0009533d) sso_body_pane_t2

0x0001,

0xfe7b,	// (0x0009c39e) sso_body_pane_t

0x8e7c,	// (0x0009539f) sso_btn_pane_cp01_ParamLimits

0x8e7c,	// (0x0009539f) sso_btn_pane_cp01

0x8f08,	// (0x0009542b) sso_prog_pane_ParamLimits

0x8f08,	// (0x0009542b) sso_prog_pane

0x906a,	// (0x0009558d) sso_t_hdr_pane_t1_ParamLimits

0x906a,	// (0x0009558d) sso_t_hdr_pane_t1

0xec70,	// (0x0009b193) input_focus_pane_cp10_ParamLimits

0xec70,	// (0x0009b193) input_focus_pane_cp10

0xec8a,	// (0x0009b1ad) sso_query_pane_t1_ParamLimits

0xec8a,	// (0x0009b1ad) sso_query_pane_t1

0xec9d,	// (0x0009b1c0) sso_query_pane_t2_ParamLimits

0xec9d,	// (0x0009b1c0) sso_query_pane_t2

0xecb7,	// (0x0009b1da) sso_query_pane_t3_ParamLimits

0xecb7,	// (0x0009b1da) sso_query_pane_t3

0xece1,	// (0x0009b204) sso_query_pane_t4_ParamLimits

0xece1,	// (0x0009b204) sso_query_pane_t4

0x0003,

0xfe80,	// (0x0009c3a3) sso_query_pane_t_ParamLimits

0xfe80,	// (0x0009c3a3) sso_query_pane_t

0x9855,	// (0x00095d78) bg_button_pane_cp22

0xeb89,	// (0x0009b0ac) sso_btn_pane_t1

0x907d,	// (0x000955a0) sso_t_nml_pane_t1_ParamLimits

0x907d,	// (0x000955a0) sso_t_nml_pane_t1

0x9098,	// (0x000955bb) sso_option_row_pane_ParamLimits

0x9098,	// (0x000955bb) sso_option_row_pane

0xed05,	// (0x0009b228) sso_t_sub_pane_t1_ParamLimits

0xed05,	// (0x0009b228) sso_t_sub_pane_t1

0x98ba,	// (0x00095ddd) bg_popup_window_pane_cp11_ParamLimits

0x98ba,	// (0x00095ddd) bg_popup_window_pane_cp11

0xed22,	// (0x0009b245) popup_sk_window_cp01_ParamLimits

0xed22,	// (0x0009b245) popup_sk_window_cp01

0xed2f,	// (0x0009b252) sso_popup_body_pane_ParamLimits

0xed2f,	// (0x0009b252) sso_popup_body_pane

0xed3c,	// (0x0009b25f) scroll_pane_cp21_ParamLimits

0xed3c,	// (0x0009b25f) scroll_pane_cp21

0xed49,	// (0x0009b26c) sso_popup_body_t_pane_ParamLimits

0xed49,	// (0x0009b26c) sso_popup_body_t_pane

0xed56,	// (0x0009b279) sso_popup_body_t_hdr_pane_ParamLimits

0xed56,	// (0x0009b279) sso_popup_body_t_hdr_pane

0xed69,	// (0x0009b28c) sso_popup_body_t_nml_pane_ParamLimits

0xed69,	// (0x0009b28c) sso_popup_body_t_nml_pane

0xed87,	// (0x0009b2aa) sso_popup_body_t_sub_pane_ParamLimits

0xed87,	// (0x0009b2aa) sso_popup_body_t_sub_pane

0xedb9,	// (0x0009b2dc) sso_popup_body_t_hdr_pane_t1

0x90ab,	// (0x000955ce) sso_popup_body_t_nml_pane_t1_ParamLimits

0x90ab,	// (0x000955ce) sso_popup_body_t_nml_pane_t1

0xedc9,	// (0x0009b2ec) sso_popup_body_t_sub_pane_t1_ParamLimits

0xedc9,	// (0x0009b2ec) sso_popup_body_t_sub_pane_t1

0xa99c,	// (0x00096ebf) sso_prog_pane_g1

0x90e6,	// (0x00095609) sso_apps_pane_comp1_ParamLimits

0x90e6,	// (0x00095609) sso_apps_pane_comp1

0xedee,	// (0x0009b311) sso_apps_pane_comp1_g1

0xedf6,	// (0x0009b319) sso_apps_pane_comp1_t1

0xee12,	// (0x0009b335) sso_option_row_pane_g1

0xee1a,	// (0x0009b33d) sso_option_row_pane_t1

0x8814,	// (0x00094d37) bg_welc_area_ParamLimits

0x8814,	// (0x00094d37) bg_welc_area

0x89ce,	// (0x00094ef1) sso_t_hdr_pane_a_t1_ParamLimits

0x89ce,	// (0x00094ef1) sso_t_hdr_pane_a_t1

0x89e9,	// (0x00094f0c) sso_t_nml_pane_a_t1_ParamLimits

0x89e9,	// (0x00094f0c) sso_t_nml_pane_a_t1

0x8a1c,	// (0x00094f3f) sso_t_sub_pane_a_t1_ParamLimits

0x8a1c,	// (0x00094f3f) sso_t_sub_pane_a_t1

0xeb89,	// (0x0009b0ac) sso_btn_pane_t1_copy1

0x9855,	// (0x00095d78) welc_button_pane_2_comp1

0xebf8,	// (0x0009b11b) sso_t_hdr_pane_p_t1

0xec08,	// (0x0009b12b) sso_t_nml_pane_p_t1

0xec18,	// (0x0009b13b) sso_t_sub_pane_p_t1

0xe340,	// (0x0009a863) list_cmail_pane_ParamLimits

0x8ac3,	// (0x00094fe6) welc_button_pane_cp01_ParamLimits

0x8ac3,	// (0x00094fe6) welc_button_pane_cp01

0x9855,	// (0x00095d78) main_att_pane

0xee04,	// (0x0009b327) input_focus_pane_cp10_t1

0xee1a,	// (0x0009b33d) sso_option_row_pane_t1_ParamLimits

0x9100,	// (0x00095623) main_att_body_pane_ParamLimits

0x9100,	// (0x00095623) main_att_body_pane

0x9135,	// (0x00095658) att_btn_pane_ParamLimits

0x9135,	// (0x00095658) att_btn_pane

0x915c,	// (0x0009567f) att_btn_pane_cp01_ParamLimits

0x915c,	// (0x0009567f) att_btn_pane_cp01

0x917c,	// (0x0009569f) att_li_srv_pane_ParamLimits

0x917c,	// (0x0009569f) att_li_srv_pane

0x9199,	// (0x000956bc) att_opt_pane_ParamLimits

0x9199,	// (0x000956bc) att_opt_pane

0x91e7,	// (0x0009570a) att_query_pane_ParamLimits

0x91e7,	// (0x0009570a) att_query_pane

0x9233,	// (0x00095756) att_query_pane_cp01_ParamLimits

0x9233,	// (0x00095756) att_query_pane_cp01

0x927f,	// (0x000957a2) att_t_hdr_pane_ParamLimits

0x927f,	// (0x000957a2) att_t_hdr_pane

0x92e3,	// (0x00095806) att_t_nml_pane_ParamLimits

0x92e3,	// (0x00095806) att_t_nml_pane

0x9330,	// (0x00095853) att_t_nml_pane_cp01_ParamLimits

0x9330,	// (0x00095853) att_t_nml_pane_cp01

0x935e,	// (0x00095881) att_t_nmlb_pane_ParamLimits

0x935e,	// (0x00095881) att_t_nmlb_pane

0x937b,	// (0x0009589e) att_term_pane_ParamLimits

0x937b,	// (0x0009589e) att_term_pane

0x93cb,	// (0x000958ee) main_att_body_pane_g1_ParamLimits

0x93cb,	// (0x000958ee) main_att_body_pane_g1

0xee30,	// (0x0009b353) att_t_hdr_pane_t1_ParamLimits

0xee30,	// (0x0009b353) att_t_hdr_pane_t1

0xee49,	// (0x0009b36c) att_t_nml_pane_t1_ParamLimits

0xee49,	// (0x0009b36c) att_t_nml_pane_t1

0xee6e,	// (0x0009b391) att_btn_pane_t1

0x9855,	// (0x00095d78) bg_button_pane_cp23

0x9402,	// (0x00095925) att_li_srv_row_pane_ParamLimits

0x9402,	// (0x00095925) att_li_srv_row_pane

0xee7e,	// (0x0009b3a1) att_t_nmlb_pane_t1_ParamLimits

0xee7e,	// (0x0009b3a1) att_t_nmlb_pane_t1

0xee97,	// (0x0009b3ba) att_query_pane_t1

0xeea6,	// (0x0009b3c9) att_query_pane_t2

0xeeb5,	// (0x0009b3d8) att_query_pane_t3

0x0002,

0xfe89,	// (0x0009c3ac) att_query_pane_t

0xeec4,	// (0x0009b3e7) input_focus_pane_cp11

0xeecd,	// (0x0009b3f0) att_term_pane_t1_ParamLimits

0xeecd,	// (0x0009b3f0) att_term_pane_t1

0x9855,	// (0x00095d78) att_opt_row_pane

0xeeea,	// (0x0009b40d) att_opt_row_pane_g1

0xeef2,	// (0x0009b415) att_opt_row_pane_t1_ParamLimits

0xeef2,	// (0x0009b415) att_opt_row_pane_t1

0x9412,	// (0x00095935) att_li_srv_row_pane_g1

0x941a,	// (0x0009593d) att_li_srv_row_pane_t1

0x942f,	// (0x00095952) att_li_srv_row_pane_t2

0x0001,

0xfe90,	// (0x0009c3b3) att_li_srv_row_pane_t

0x9855,	// (0x00095d78) main_call7_pane

0x9855,	// (0x00095d78) main_vod_pane

0xec5b,	// (0x0009b17e) sso_t_sub_pane_ParamLimits

0x9116,	// (0x00095639) att_btn_emg_pane_ParamLimits

0x9116,	// (0x00095639) att_btn_emg_pane

0x941a,	// (0x0009593d) att_li_srv_row_pane_t1_ParamLimits

0x942f,	// (0x00095952) att_li_srv_row_pane_t2_ParamLimits

0xfe90,	// (0x0009c3b3) att_li_srv_row_pane_t_ParamLimits

0xef0b,	// (0x0009b42e) att_btn_close_pane_g1

0x9855,	// (0x00095d78) bg_button_pane_cp24

0x9444,	// (0x00095967) main_vod_body_pane_ParamLimits

0x9444,	// (0x00095967) main_vod_body_pane

0x9458,	// (0x0009597b) main_vod_body_pane_g1_ParamLimits

0x9458,	// (0x0009597b) main_vod_body_pane_g1

0x948c,	// (0x000959af) scroll_pane_cp24_ParamLimits

0x948c,	// (0x000959af) scroll_pane_cp24

0x94da,	// (0x000959fd) vod_btn_pane_ParamLimits

0x94da,	// (0x000959fd) vod_btn_pane

0x951e,	// (0x00095a41) vod_det_pane_ParamLimits

0x951e,	// (0x00095a41) vod_det_pane

0x9550,	// (0x00095a73) vod_logo_g1_ParamLimits

0x9550,	// (0x00095a73) vod_logo_g1

0x958e,	// (0x00095ab1) vod_opt_pane_ParamLimits

0x958e,	// (0x00095ab1) vod_opt_pane

0x95c1,	// (0x00095ae4) vod_opt_pane_cp01_ParamLimits

0x95c1,	// (0x00095ae4) vod_opt_pane_cp01

0x95ed,	// (0x00095b10) vod_query_pane_ParamLimits

0x95ed,	// (0x00095b10) vod_query_pane

0x961a,	// (0x00095b3d) vod_query_pane_cp01_ParamLimits

0x961a,	// (0x00095b3d) vod_query_pane_cp01

0x9626,	// (0x00095b49) vod_t_nml_pane_ParamLimits

0x9626,	// (0x00095b49) vod_t_nml_pane

0x96db,	// (0x00095bfe) vod_t_nml_pane_cp01_ParamLimits

0x96db,	// (0x00095bfe) vod_t_nml_pane_cp01

0x9717,	// (0x00095c3a) vod_t_sub_pane_ParamLimits

0x9717,	// (0x00095c3a) vod_t_sub_pane

0x974c,	// (0x00095c6f) vod_t_sub_pane_cp01_ParamLimits

0x974c,	// (0x00095c6f) vod_t_sub_pane_cp01

0xeec4,	// (0x0009b3e7) vod_query_field_pane

0xee97,	// (0x0009b3ba) vod_query_pane_t1

0x9855,	// (0x00095d78) bg_button_pane_cp25

0xef13,	// (0x0009b436) sso_btn_pane_t1_copy2

0x9778,	// (0x00095c9b) vod_t_nml_pane_t1_ParamLimits

0x9778,	// (0x00095c9b) vod_t_nml_pane_t1

0xef23,	// (0x0009b446) vod_opt_row_pane_ParamLimits

0xef23,	// (0x0009b446) vod_opt_row_pane

0xef35,	// (0x0009b458) vod_t_sub_pane_t1_ParamLimits

0xef35,	// (0x0009b458) vod_t_sub_pane_t1

0x97af,	// (0x00095cd2) vod_det_cell_pane_ParamLimits

0x97af,	// (0x00095cd2) vod_det_cell_pane

0x9855,	// (0x00095d78) input_focus_pane_cp15

0xef4e,	// (0x0009b471) vod_query_field_pane_t1

0xef5c,	// (0x0009b47f) vod_opt_row_pane_g1_ParamLimits

0xef5c,	// (0x0009b47f) vod_opt_row_pane_g1

0xef68,	// (0x0009b48b) vod_opt_row_pane_t1_ParamLimits

0xef68,	// (0x0009b48b) vod_opt_row_pane_t1

0xef8d,	// (0x0009b4b0) vod_det_cell_field_pane

0xef96,	// (0x0009b4b9) vod_det_cell_pane_g1

0xee97,	// (0x0009b3ba) vod_det_cell_pane_t1

0x9855,	// (0x00095d78) input_focus_pane_cp16

0xef4e,	// (0x0009b471) vod_det_cell_field_pane_t1

0x80a2,	// (0x000945c5) call7_btn_grp_pane_ParamLimits

0x80a2,	// (0x000945c5) call7_btn_grp_pane

0x97c3,	// (0x00095ce6) call7_bubble_pane_ParamLimits

0x97c3,	// (0x00095ce6) call7_bubble_pane

0x97db,	// (0x00095cfe) cell_call7_btn_pane_ParamLimits

0x97db,	// (0x00095cfe) cell_call7_btn_pane

0x97ef,	// (0x00095d12) call7_pane_g1_ParamLimits

0x97ef,	// (0x00095d12) call7_pane_g1

0x9801,	// (0x00095d24) call7_windows_conf_pane_ParamLimits

0x9801,	// (0x00095d24) call7_windows_conf_pane

0x981f,	// (0x00095d42) popup_call7_1st_window_ParamLimits

0x981f,	// (0x00095d42) popup_call7_1st_window

0x9831,	// (0x00095d54) popup_call7_2nd_window_ParamLimits

0x9831,	// (0x00095d54) popup_call7_2nd_window

0x9843,	// (0x00095d66) popup_call7_3rd_window_ParamLimits

0x9843,	// (0x00095d66) popup_call7_3rd_window

0x9855,	// (0x00095d78) bg_button_pane_cp26

0xe99e,	// (0x0009aec1) cell_call7_btn_pane_g1

0xedaa,	// (0x0009b2cd) cell_call7_btn_pane_t1

0x9855,	// (0x00095d78) bg_popup_window_pane_cp12

0xef9e,	// (0x0009b4c1) popup_call7_1st_window_g1

0xefa6,	// (0x0009b4c9) popup_call7_1st_window_g2

0xefae,	// (0x0009b4d1) popup_call7_1st_window_g3

0x0002,

0xfe95,	// (0x0009c3b8) popup_call7_1st_window_g

0xefb6,	// (0x0009b4d9) popup_call7_1st_window_t1

0xefc5,	// (0x0009b4e8) popup_call7_1st_window_t2

0xefd5,	// (0x0009b4f8) popup_call7_1st_window_t3

0x0002,

0xfe9c,	// (0x0009c3bf) popup_call7_1st_window_t

0x9855,	// (0x00095d78) bg_popup_window_pane_cp13

0xefe5,	// (0x0009b508) popup_call7_2nd_window_g1

0xefed,	// (0x0009b510) popup_call7_2nd_window_g2

0xeff5,	// (0x0009b518) popup_call7_2nd_window_g3

0x0002,

0xfea3,	// (0x0009c3c6) popup_call7_2nd_window_g

0xeffd,	// (0x0009b520) popup_call7_2nd_window_t1

0x9855,	// (0x00095d78) bg_popup_window_pane_cp14

0xf00c,	// (0x0009b52f) call7_list_conf_pane

0xf014,	// (0x0009b537) call7_list_conf_row_pane_ParamLimits

0xf014,	// (0x0009b537) call7_list_conf_row_pane

0xf027,	// (0x0009b54a) call7_list_conf_row_pane_g1

0xf02f,	// (0x0009b552) call7_list_conf_row_pane_g2

0x0001,

0xfeaa,	// (0x0009c3cd) call7_list_conf_row_pane_g

0xf037,	// (0x0009b55a) call7_list_conf_row_pane_t1

0x9855,	// (0x00095d78) list_highlight_pane_cp22
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
