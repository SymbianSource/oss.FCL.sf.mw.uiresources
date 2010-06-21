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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000ef25 };

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
0x01c0,	// (0x0000f0e5) Screen

0x01cc,	// (0x0000f0f1) application_window

0x0208,	// (0x0000f12d) area_bottom_pane_ParamLimits

0x0208,	// (0x0000f12d) area_bottom_pane

0x0241,	// (0x0000f166) area_top_pane_ParamLimits

0x0241,	// (0x0000f166) area_top_pane

0x955d,	// (0x00018482) call_video_uplink_pane_ParamLimits

0x955d,	// (0x00018482) call_video_uplink_pane

0x02cf,	// (0x0000f1f4) main_pane_ParamLimits

0x02cf,	// (0x0000f1f4) main_pane

0xbf5e,	// (0x0001ae83) context_pane

0x37b1,	// (0x000126d6) navi_pane

0x37e3,	// (0x00012708) popup_cale_events_window_ParamLimits

0x37e3,	// (0x00012708) popup_cale_events_window

0xbf71,	// (0x0001ae96) popup_mup_playback_window

0x37fb,	// (0x00012720) signal_pane

0x9cde,	// (0x00018c03) main_browser_pane

0x9f18,	// (0x00018e3d) main_burst_pane

0x3511,	// (0x00012436) main_calc_pane

0xbef0,	// (0x0001ae15) main_cale_day_pane

0x0922,	// (0x0000f847) main_cale_month_pane

0xbef0,	// (0x0001ae15) main_cale_week_pane

0x9f18,	// (0x00018e3d) main_call_pane

0x999c,	// (0x000188c1) main_call_poc_pane

0x9f18,	// (0x00018e3d) main_camera_pane

0x9f18,	// (0x00018e3d) main_chi_dic_pane

0xa7a6,	// (0x000196cb) main_clock_pane

0x999c,	// (0x000188c1) main_fmradio_pane

0x9f18,	// (0x00018e3d) main_graph_messa_pane

0x999c,	// (0x000188c1) main_help_pane

0x9cde,	// (0x00018c03) main_im_pane

0x9bf7,	// (0x00018b1c) main_image_pane_ParamLimits

0x9bf7,	// (0x00018b1c) main_image_pane

0x999c,	// (0x000188c1) main_location2_pane

0x9f18,	// (0x00018e3d) main_location_pane

0x9bf7,	// (0x00018b1c) main_messa_pane

0x999c,	// (0x000188c1) main_mp2_pane

0x9f18,	// (0x00018e3d) main_mp_pane

0x999c,	// (0x000188c1) main_msg_pane

0x999c,	// (0x000188c1) main_mup_eq_pane

0x999c,	// (0x000188c1) main_mup_pane

0x9cde,	// (0x00018c03) main_notes_pane

0x999c,	// (0x000188c1) main_pec_pane

0x999c,	// (0x000188c1) main_phob_pane

0x999c,	// (0x000188c1) main_pinb_pane

0x999c,	// (0x000188c1) main_postcard_pane

0x999c,	// (0x000188c1) main_qdial_pane

0x9f18,	// (0x00018e3d) main_skin_pane

0x999c,	// (0x000188c1) main_smil2_pane

0x9f18,	// (0x00018e3d) main_smil_pane

0x9f18,	// (0x00018e3d) main_video_pane

0x9f18,	// (0x00018e3d) main_video_tele_pane

0x9bf7,	// (0x00018b1c) main_viewer_pane_ParamLimits

0x9bf7,	// (0x00018b1c) main_viewer_pane

0x9f18,	// (0x00018e3d) main_vorec_pane

0x3565,	// (0x0001248a) popup_blid_sat_info_window_ParamLimits

0x3565,	// (0x0001248a) popup_blid_sat_info_window

0x35bd,	// (0x000124e2) popup_dyc_status_message_window_ParamLimits

0x35bd,	// (0x000124e2) popup_dyc_status_message_window

0x35d7,	// (0x000124fc) popup_grid_large_graphic_window_ParamLimits

0x35d7,	// (0x000124fc) popup_grid_large_graphic_window

0x3693,	// (0x000125b8) popup_loc_request_window_ParamLimits

0x3693,	// (0x000125b8) popup_loc_request_window

0x3789,	// (0x000126ae) popup_wml_address_window_ParamLimits

0x3789,	// (0x000126ae) popup_wml_address_window

0x334b,	// (0x00012270) call_muted_g1

0x3000,	// (0x00011f25) popup_call_audio_conf_window_ParamLimits

0x3000,	// (0x00011f25) popup_call_audio_conf_window

0x335f,	// (0x00012284) popup_call_audio_first_window_ParamLimits

0x335f,	// (0x00012284) popup_call_audio_first_window

0x33d5,	// (0x000122fa) popup_call_audio_in_window_ParamLimits

0x33d5,	// (0x000122fa) popup_call_audio_in_window

0x3411,	// (0x00012336) popup_call_audio_out_window_ParamLimits

0x3411,	// (0x00012336) popup_call_audio_out_window

0x344b,	// (0x00012370) popup_call_audio_second_window_ParamLimits

0x344b,	// (0x00012370) popup_call_audio_second_window

0x34a1,	// (0x000123c6) popup_call_audio_wait_window_ParamLimits

0x34a1,	// (0x000123c6) popup_call_audio_wait_window

0x34d6,	// (0x000123fb) popup_number_entry_window_ParamLimits

0x34d6,	// (0x000123fb) popup_number_entry_window

0x9589,	// (0x000184ae) bg_popup_call_pane_cp05_ParamLimits

0x9589,	// (0x000184ae) bg_popup_call_pane_cp05

0x95a9,	// (0x000184ce) popup_number_entry_window_t1

0x95bc,	// (0x000184e1) popup_number_entry_window_t2

0x95ce,	// (0x000184f3) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0001dfeb) popup_number_entry_window_t

0x95e0,	// (0x00018505) text_title_cp2

0x95f3,	// (0x00018518) bg_popup_call_pane_cp_ParamLimits

0x95f3,	// (0x00018518) bg_popup_call_pane_cp

0x9601,	// (0x00018526) call_thumbnail_pane

0x9609,	// (0x0001852e) popup_call_audio_in_window_g1_ParamLimits

0x9609,	// (0x0001852e) popup_call_audio_in_window_g1

0x9615,	// (0x0001853a) popup_call_audio_in_window_g2_ParamLimits

0x9615,	// (0x0001853a) popup_call_audio_in_window_g2

0x9621,	// (0x00018546) popup_call_audio_in_window_g3_ParamLimits

0x9621,	// (0x00018546) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0001dff4) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0001dff4) popup_call_audio_in_window_g

0x962d,	// (0x00018552) popup_call_audio_in_window_t1_ParamLimits

0x962d,	// (0x00018552) popup_call_audio_in_window_t1

0x9649,	// (0x0001856e) popup_call_audio_in_window_t2_ParamLimits

0x9649,	// (0x0001856e) popup_call_audio_in_window_t2

0x9665,	// (0x0001858a) popup_call_audio_in_window_t3_ParamLimits

0x9665,	// (0x0001858a) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0001dffb) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0001dffb) popup_call_audio_in_window_t

0x95f3,	// (0x00018518) bg_popup_call_pane_cp01_ParamLimits

0x95f3,	// (0x00018518) bg_popup_call_pane_cp01

0x9601,	// (0x00018526) call_thumbnail_pane_cp02

0x9678,	// (0x0001859d) call_type_pane_cp022

0x9680,	// (0x000185a5) popup_call_audio_out_window_g1_ParamLimits

0x9680,	// (0x000185a5) popup_call_audio_out_window_g1

0x9692,	// (0x000185b7) popup_call_audio_out_window_g2_ParamLimits

0x9692,	// (0x000185b7) popup_call_audio_out_window_g2

0x969e,	// (0x000185c3) popup_call_audio_out_window_g3_ParamLimits

0x969e,	// (0x000185c3) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0001e002) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0001e002) popup_call_audio_out_window_g

0x96b0,	// (0x000185d5) popup_call_audio_out_window_t1_ParamLimits

0x96b0,	// (0x000185d5) popup_call_audio_out_window_t1

0x96c8,	// (0x000185ed) popup_call_audio_out_window_t2_ParamLimits

0x96c8,	// (0x000185ed) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0001e009) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0001e009) popup_call_audio_out_window_t

0x96dd,	// (0x00018602) bg_popup_call_pane_ParamLimits

0x96dd,	// (0x00018602) bg_popup_call_pane

0x048b,	// (0x0000f3b0) call_thumbnail_pane_cp_ParamLimits

0x048b,	// (0x0000f3b0) call_thumbnail_pane_cp

0x9761,	// (0x00018686) call_type_pane_cp01_ParamLimits

0x9761,	// (0x00018686) call_type_pane_cp01

0x97a5,	// (0x000186ca) popup_call_audio_first_window_g1_ParamLimits

0x97a5,	// (0x000186ca) popup_call_audio_first_window_g1

0x97f1,	// (0x00018716) popup_call_audio_first_window_g2_ParamLimits

0x97f1,	// (0x00018716) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0001e00e) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0001e00e) popup_call_audio_first_window_g

0x9835,	// (0x0001875a) popup_call_audio_first_window_t1_ParamLimits

0x9835,	// (0x0001875a) popup_call_audio_first_window_t1

0x98e1,	// (0x00018806) popup_call_audio_first_window_t4_ParamLimits

0x98e1,	// (0x00018806) popup_call_audio_first_window_t4

0x996d,	// (0x00018892) popup_call_audio_first_window_t5_ParamLimits

0x996d,	// (0x00018892) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0001e013) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0001e013) popup_call_audio_first_window_t

0x999c,	// (0x000188c1) bg_popup_call_pane_cp02

0x99a6,	// (0x000188cb) call_type_pane_cp023

0x99ae,	// (0x000188d3) popup_call_audio_wait_window_g1

0x99b6,	// (0x000188db) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0001e01a) popup_call_audio_wait_window_g

0x99be,	// (0x000188e3) popup_call_audio_wait_window_t3

0x99cc,	// (0x000188f1) bg_popup_call_pane_cp03_ParamLimits

0x99cc,	// (0x000188f1) bg_popup_call_pane_cp03

0x9a2c,	// (0x00018951) call_thumbnail_pane_cp011_ParamLimits

0x9a2c,	// (0x00018951) call_thumbnail_pane_cp011

0x9a38,	// (0x0001895d) call_type_pane_cp034_ParamLimits

0x9a38,	// (0x0001895d) call_type_pane_cp034

0x9a74,	// (0x00018999) popup_call_audio_second_window_g1_ParamLimits

0x9a74,	// (0x00018999) popup_call_audio_second_window_g1

0x9ab0,	// (0x000189d5) popup_call_audio_second_window_g2_ParamLimits

0x9ab0,	// (0x000189d5) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0001e01f) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0001e01f) popup_call_audio_second_window_g

0x9aec,	// (0x00018a11) popup_call_audio_second_window_t1_ParamLimits

0x9aec,	// (0x00018a11) popup_call_audio_second_window_t1

0x9b6d,	// (0x00018a92) popup_call_audio_second_window_t2_ParamLimits

0x9b6d,	// (0x00018a92) popup_call_audio_second_window_t2

0x9ba3,	// (0x00018ac8) popup_call_audio_second_window_t3_ParamLimits

0x9ba3,	// (0x00018ac8) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0001e024) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0001e024) popup_call_audio_second_window_t

0x999c,	// (0x000188c1) bg_popup_call_pane_cp04

0x9bd9,	// (0x00018afe) list_conf_pane

0x9be1,	// (0x00018b06) popup_call_audio_conf_window_t1

0x9bef,	// (0x00018b14) call_thumbnail_pane_g1

0x9bf7,	// (0x00018b1c) bg_pinb_pane_ParamLimits

0x9bf7,	// (0x00018b1c) bg_pinb_pane

0x9c05,	// (0x00018b2a) find_pinb_pane

0x9c0e,	// (0x00018b33) listscroll_pinb_pane_ParamLimits

0x9c0e,	// (0x00018b33) listscroll_pinb_pane

0x9c1d,	// (0x00018b42) pinb_bg_pane_g1

0x04af,	// (0x0000f3d4) pinb_bg_pane_g2

0x04bb,	// (0x0000f3e0) pinb_bg_pane_g3

0x04c7,	// (0x0000f3ec) pinb_bg_pane_g4

0x04d3,	// (0x0000f3f8) pinb_bg_pane_g5

0x04df,	// (0x0000f404) pinb_bg_pane_g6

0x04ea,	// (0x0000f40f) pinb_bg_pane_g7

0x04f5,	// (0x0000f41a) pinb_bg_pane_g8

0x0500,	// (0x0000f425) pinb_bg_pane_g9

0x050a,	// (0x0000f42f) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0001e02b) pinb_bg_pane_g

0x0527,	// (0x0000f44c) grid_pinb_pane

0x0530,	// (0x0000f455) list_pinb_pane

0x0539,	// (0x0000f45e) scroll_pane_cp01_ParamLimits

0x0539,	// (0x0000f45e) scroll_pane_cp01

0x9c27,	// (0x00018b4c) find_pinb_pane_g1_ParamLimits

0x9c27,	// (0x00018b4c) find_pinb_pane_g1

0x9c3f,	// (0x00018b64) find_pinb_pane_t1

0x9c51,	// (0x00018b76) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0001e045) find_pinb_pane_t

0x9c66,	// (0x00018b8b) input_focus_pane_cp01_ParamLimits

0x9c66,	// (0x00018b8b) input_focus_pane_cp01

0x054b,	// (0x0000f470) cell_pinb_pane_ParamLimits

0x054b,	// (0x0000f470) cell_pinb_pane

0x0574,	// (0x0000f499) cell_pinb_pane_g1_ParamLimits

0x0574,	// (0x0000f499) cell_pinb_pane_g1

0x0584,	// (0x0000f4a9) cell_pinb_pane_g2_ParamLimits

0x0584,	// (0x0000f4a9) cell_pinb_pane_g2

0x9c72,	// (0x00018b97) cell_pinb_pane_g3_ParamLimits

0x9c72,	// (0x00018b97) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0001e04a) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0001e04a) cell_pinb_pane_g

0x999c,	// (0x000188c1) grid_highlight_pane_cp01

0x0590,	// (0x0000f4b5) list_pinb_item_pane_ParamLimits

0x0590,	// (0x0000f4b5) list_pinb_item_pane

0x999c,	// (0x000188c1) list_highlight_pane_cp02

0x05a2,	// (0x0000f4c7) list_pinb_item_pane_g1_ParamLimits

0x05a2,	// (0x0000f4c7) list_pinb_item_pane_g1

0x05af,	// (0x0000f4d4) list_pinb_item_pane_g2_ParamLimits

0x05af,	// (0x0000f4d4) list_pinb_item_pane_g2

0x05bb,	// (0x0000f4e0) list_pinb_item_pane_g3_ParamLimits

0x05bb,	// (0x0000f4e0) list_pinb_item_pane_g3

0x05cc,	// (0x0000f4f1) list_pinb_item_pane_g4_ParamLimits

0x05cc,	// (0x0000f4f1) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0001e051) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0001e051) list_pinb_item_pane_g

0x05d8,	// (0x0000f4fd) list_pinb_item_pane_t1_ParamLimits

0x05d8,	// (0x0000f4fd) list_pinb_item_pane_t1

0x060d,	// (0x0000f532) calc_display_pane

0x0632,	// (0x0000f557) calc_paper_pane

0x0655,	// (0x0000f57a) grid_calc_pane

0x999c,	// (0x000188c1) bg_list_pane_cp01

0x0683,	// (0x0000f5a8) clock_g1

0x068b,	// (0x0000f5b0) clock_g2

0x0001,

0xf135,	// (0x0001e05a) clock_g

0x0693,	// (0x0000f5b8) clock_t1_ParamLimits

0x0693,	// (0x0000f5b8) clock_t1

0x06a8,	// (0x0000f5cd) clock_t2_ParamLimits

0x06a8,	// (0x0000f5cd) clock_t2

0x06ba,	// (0x0000f5df) clock_t3_ParamLimits

0x06ba,	// (0x0000f5df) clock_t3

0x06cc,	// (0x0000f5f1) clock_t4_ParamLimits

0x06cc,	// (0x0000f5f1) clock_t4

0x06de,	// (0x0000f603) clock_t5_ParamLimits

0x06de,	// (0x0000f603) clock_t5

0x06f3,	// (0x0000f618) clock_t6_ParamLimits

0x06f3,	// (0x0000f618) clock_t6

0x0705,	// (0x0000f62a) clock_t7_ParamLimits

0x0705,	// (0x0000f62a) clock_t7

0x0717,	// (0x0000f63c) clock_t8_ParamLimits

0x0717,	// (0x0000f63c) clock_t8

0x072b,	// (0x0000f650) clock_t9_ParamLimits

0x072b,	// (0x0000f650) clock_t9

0x0008,

0xf13a,	// (0x0001e05f) clock_t_ParamLimits

0xf13a,	// (0x0001e05f) clock_t

0x9c86,	// (0x00018bab) popup_clock_analogue_window_cp02

0x9c86,	// (0x00018bab) popup_clock_digital_window_cp01

0x9c8e,	// (0x00018bb3) listscroll_help_pane

0x999c,	// (0x000188c1) phob_pre_status_pane

0x9c98,	// (0x00018bbd) grid_qdial_pane

0x9bf7,	// (0x00018b1c) listscroll_mce_pane

0x9bf7,	// (0x00018b1c) bg_notes_pane

0x9ca2,	// (0x00018bc7) list_notes_pane

0x073f,	// (0x0000f664) scroll_pane_cp06

0x9cb0,	// (0x00018bd5) bg_calc_paper_pane

0x9cc4,	// (0x00018be9) list_calc_pane

0x9cde,	// (0x00018c03) bg_calc_display_pane

0x0753,	// (0x0000f678) calc_display_pane_t1

0x0768,	// (0x0000f68d) calc_display_pane_t2

0x9cea,	// (0x00018c0f) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0001e072) calc_display_pane_t

0x077d,	// (0x0000f6a2) cell_calc_pane_ParamLimits

0x077d,	// (0x0000f6a2) cell_calc_pane

0x9cfc,	// (0x00018c21) bg_calc_paper_pane_g1

0x9d08,	// (0x00018c2d) bg_calc_paper_pane_g2

0x9d14,	// (0x00018c39) bg_calc_paper_pane_g3

0x9d20,	// (0x00018c45) bg_calc_paper_pane_g4

0x9d2c,	// (0x00018c51) bg_calc_paper_pane_g5

0x07b2,	// (0x0000f6d7) bg_calc_paper_pane_g6

0x07c1,	// (0x0000f6e6) bg_calc_paper_pane_g7

0x07d0,	// (0x0000f6f5) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0001e079) bg_calc_paper_pane_g

0x07e3,	// (0x0000f708) calc_bg_paper_pane_g9

0x07f6,	// (0x0000f71b) list_calc_item_pane_ParamLimits

0x07f6,	// (0x0000f71b) list_calc_item_pane

0x9d38,	// (0x00018c5d) list_calc_item_pane_g1

0x9d45,	// (0x00018c6a) list_calc_item_pane_t1_ParamLimits

0x9d45,	// (0x00018c6a) list_calc_item_pane_t1

0x080e,	// (0x0000f733) list_calc_item_pane_t2_ParamLimits

0x080e,	// (0x0000f733) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0001e08a) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0001e08a) list_calc_item_pane_t

0x9d57,	// (0x00018c7c) cell_calc_pane_g1

0x9d61,	// (0x00018c86) grid_highlight_pane_cp02

0x9d83,	// (0x00018ca8) bg_calc_display_pane_g1

0x0840,	// (0x0000f765) bg_calc_display_pane_g2

0x084a,	// (0x0000f76f) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0001e094) bg_calc_display_pane_g

0x0853,	// (0x0000f778) cell_qdial_pane_ParamLimits

0x0853,	// (0x0000f778) cell_qdial_pane

0x0867,	// (0x0000f78c) cell_qdial_pane_g1_ParamLimits

0x0867,	// (0x0000f78c) cell_qdial_pane_g1

0x087d,	// (0x0000f7a2) cell_qdial_pane_g2_ParamLimits

0x087d,	// (0x0000f7a2) cell_qdial_pane_g2

0x9d8c,	// (0x00018cb1) cell_qdial_pane_g3_ParamLimits

0x9d8c,	// (0x00018cb1) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0001e09b) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0001e09b) cell_qdial_pane_g

0x08a4,	// (0x0000f7c9) cell_qdial_pane_t1_ParamLimits

0x08a4,	// (0x0000f7c9) cell_qdial_pane_t1

0x08bc,	// (0x0000f7e1) cell_qdial_pane_t2_ParamLimits

0x08bc,	// (0x0000f7e1) cell_qdial_pane_t2

0x08cf,	// (0x0000f7f4) cell_qdial_pane_t3_ParamLimits

0x08cf,	// (0x0000f7f4) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0001e0a4) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0001e0a4) cell_qdial_pane_t

0x999c,	// (0x000188c1) grid_highlight_pane_cp04

0x9d98,	// (0x00018cbd) thumbnail_qdial_pane_ParamLimits

0x9d98,	// (0x00018cbd) thumbnail_qdial_pane

0x9df4,	// (0x00018d19) list_help_pane

0x9dfd,	// (0x00018d22) scroll_pane_cp02

0x08e2,	// (0x0000f807) help_list_pane_t1_ParamLimits

0x08e2,	// (0x0000f807) help_list_pane_t1

0x9e06,	// (0x00018d2b) bg_notes_pane_g2

0x9e0e,	// (0x00018d33) bg_notes_pane_g3

0x9e16,	// (0x00018d3b) notes_bg_pane_g1

0x9e1e,	// (0x00018d43) notes_bg_pane_g4

0x9e26,	// (0x00018d4b) notes_bg_pane_g5

0x9e2e,	// (0x00018d53) notes_bg_pane_g6

0x9e36,	// (0x00018d5b) notes_bg_pane_g7

0x9e3e,	// (0x00018d63) notes_bg_pane_g8

0x9e46,	// (0x00018d6b) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0001e0c2) notes_bg_pane_g

0x08ff,	// (0x0000f824) list_notes_text_pane_ParamLimits

0x08ff,	// (0x0000f824) list_notes_text_pane

0x9e4e,	// (0x00018d73) list_notes_text_pane_g1

0x0914,	// (0x0000f839) list_notes_text_pane_t1

0x0922,	// (0x0000f847) listscroll_cale_week_pane

0x094e,	// (0x0000f873) bg_cale_heading_pane

0x9e71,	// (0x00018d96) bg_cale_pane_cp01

0x0966,	// (0x0000f88b) cale_week_corner_pane

0x0985,	// (0x0000f8aa) cale_week_day_heading_pane

0x09a2,	// (0x0000f8c7) cale_week_scroll_pane_g1

0x09b5,	// (0x0000f8da) cale_week_scroll_pane_g2

0x09cd,	// (0x0000f8f2) cale_week_scroll_pane_g3

0x09e5,	// (0x0000f90a) cale_week_scroll_pane_g4

0x09fd,	// (0x0000f922) cale_week_scroll_pane_g5

0x0a1d,	// (0x0000f942) cale_week_scroll_pane_g6

0x0a3d,	// (0x0000f962) cale_week_scroll_pane_g7

0x0a5d,	// (0x0000f982) cale_week_scroll_pane_g8

0x0a81,	// (0x0000f9a6) cale_week_scroll_pane_g9

0x0a99,	// (0x0000f9be) cale_week_scroll_pane_g10

0x0ab1,	// (0x0000f9d6) cale_week_scroll_pane_g11

0x0ac9,	// (0x0000f9ee) cale_week_scroll_pane_g12

0x0ae1,	// (0x0000fa06) cale_week_scroll_pane_g13

0x0ae1,	// (0x0000fa06) cale_week_scroll_pane_g14

0x0ae1,	// (0x0000fa06) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0001e0d1) cale_week_scroll_pane_g

0x0b1d,	// (0x0000fa42) cale_week_time_pane

0x0b41,	// (0x0000fa66) grid_cale_week_pane

0x9ea0,	// (0x00018dc5) scroll_pane_cp08

0x0b67,	// (0x0000fa8c) cell_cale_week_pane_ParamLimits

0x0b67,	// (0x0000fa8c) cell_cale_week_pane

0x0bf5,	// (0x0000fb1a) cale_week_day_heading_pane_t1

0x0c1f,	// (0x0000fb44) cale_week_day_heading_pane_t2

0x0c4e,	// (0x0000fb73) cale_week_day_heading_pane_t3

0x0c7d,	// (0x0000fba2) cale_week_day_heading_pane_t4

0x0cac,	// (0x0000fbd1) cale_week_day_heading_pane_t5

0x0ce3,	// (0x0000fc08) cale_week_day_heading_pane_t6

0x0d1a,	// (0x0000fc3f) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0001e0f2) cale_week_day_heading_pane_t

0x9ebd,	// (0x00018de2) bg_cale_side_pane

0x0d44,	// (0x0000fc69) cale_week_time_pane_t1

0x0d5e,	// (0x0000fc83) cale_week_time_pane_t2

0x0d78,	// (0x0000fc9d) cale_week_time_pane_t3

0x0d92,	// (0x0000fcb7) cale_week_time_pane_t4

0x0dac,	// (0x0000fcd1) cale_week_time_pane_t5

0x0dc6,	// (0x0000fceb) cale_week_time_pane_t6

0x0de0,	// (0x0000fd05) cale_week_time_pane_t7

0x0dfa,	// (0x0000fd1f) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0001e101) cale_week_time_pane_t

0x0e14,	// (0x0000fd39) cell_cale_week_pane_g2

0x0e33,	// (0x0000fd58) cell_cale_week_pane_g3_ParamLimits

0x0e33,	// (0x0000fd58) cell_cale_week_pane_g3

0x9ecb,	// (0x00018df0) grid_highlight_pane_cp07

0x9ed3,	// (0x00018df8) listscroll_gms_pane

0x9edd,	// (0x00018e02) grid_gms_pane

0x9ee6,	// (0x00018e0b) listscroll_gms_pane_g1

0x9eee,	// (0x00018e13) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0001e112) listscroll_gms_pane_g

0x0e4b,	// (0x0000fd70) scroll_pane_cp010

0x0e56,	// (0x0000fd7b) cell_gms_pane_ParamLimits

0x0e56,	// (0x0000fd7b) cell_gms_pane

0x0e69,	// (0x0000fd8e) cell_gms_pane_g1

0x9ef6,	// (0x00018e1b) cell_gms_pane_g2

0x9efe,	// (0x00018e23) cell_gms_pane_g3

0x9f07,	// (0x00018e2c) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0001e117) cell_gms_pane_g

0x9f10,	// (0x00018e35) grid_highlight_pane_cp09

0x32f5,	// (0x0001221a) phob_pre_status_pane_g1

0x32fd,	// (0x00012222) phob_pre_status_pane_g2

0x3305,	// (0x0001222a) phob_pre_status_pane_g3

0x330d,	// (0x00012232) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x0001e502) phob_pre_status_pane_g

0x331d,	// (0x00012242) phob_pre_status_pane_t1

0x332b,	// (0x00012250) phob_pre_status_pane_t2

0x333b,	// (0x00012260) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x0001e50d) phob_pre_status_pane_t

0x9f18,	// (0x00018e3d) bg_list_pane_cp05

0x0e79,	// (0x0000fd9e) grid_vorec_pane

0x0e81,	// (0x0000fda6) vorec_t1

0x0e8f,	// (0x0000fdb4) vorec_t2

0x0e9d,	// (0x0000fdc2) vorec_t3

0x0eab,	// (0x0000fdd0) vorec_t4

0x94c9,	// (0x000183ee) vorec_t5

0x94d7,	// (0x000183fc) vorec_t6

0x0004,

0xf1fb,	// (0x0001e120) vorec_t

0x94e5,	// (0x0001840a) wait_bar_pane_cp01

0x0ec7,	// (0x0000fdec) cell_vorec_pane_ParamLimits

0x0ec7,	// (0x0000fdec) cell_vorec_pane

0x9f20,	// (0x00018e45) cell_vorec_pane_g1

0x999c,	// (0x000188c1) grid_highlight_pane_cp05

0x0eef,	// (0x0000fe14) cams_zoom_pane

0x0efe,	// (0x0000fe23) image_vga_pane

0x0f18,	// (0x0000fe3d) main_camera_pane_g1

0x0f2a,	// (0x0000fe4f) main_camera_pane_g2

0x0f3a,	// (0x0000fe5f) main_camera_pane_g3

0x0f4a,	// (0x0000fe6f) main_camera_pane_g4

0x0f5a,	// (0x0000fe7f) main_camera_pane_g5

0x0f6a,	// (0x0000fe8f) main_camera_pane_g6

0x0f7c,	// (0x0000fea1) main_camera_pane_g7

0x0007,

0xf206,	// (0x0001e12b) main_camera_pane_g

0x0f8c,	// (0x0000feb1) main_camera_pane_t1

0x0fa2,	// (0x0000fec7) main_camera_pane_t2

0x0001,

0xf217,	// (0x0001e13c) main_camera_pane_t

0x0fdc,	// (0x0000ff01) cams_zoom_pane_cp_ParamLimits

0x0fdc,	// (0x0000ff01) cams_zoom_pane_cp

0x1004,	// (0x0000ff29) image_cif_pane_ParamLimits

0x1004,	// (0x0000ff29) image_cif_pane

0x103a,	// (0x0000ff5f) image_subqcif_pane

0x1042,	// (0x0000ff67) main_video_pane_g1_ParamLimits

0x1042,	// (0x0000ff67) main_video_pane_g1

0x1066,	// (0x0000ff8b) main_video_pane_g2_ParamLimits

0x1066,	// (0x0000ff8b) main_video_pane_g2

0x109a,	// (0x0000ffbf) main_video_pane_g3_ParamLimits

0x109a,	// (0x0000ffbf) main_video_pane_g3

0x10c8,	// (0x0000ffed) main_video_pane_g4_ParamLimits

0x10c8,	// (0x0000ffed) main_video_pane_g4

0x10f6,	// (0x0001001b) main_video_pane_g5_ParamLimits

0x10f6,	// (0x0001001b) main_video_pane_g5

0x9f36,	// (0x00018e5b) main_video_pane_g6_ParamLimits

0x9f36,	// (0x00018e5b) main_video_pane_g6

0x0006,

0xf21c,	// (0x0001e141) main_video_pane_g_ParamLimits

0xf21c,	// (0x0001e141) main_video_pane_g

0x111f,	// (0x00010044) main_video_pane_t1_ParamLimits

0x111f,	// (0x00010044) main_video_pane_t1

0x9f50,	// (0x00018e75) cams_zoom_pane_g1

0x9f59,	// (0x00018e7e) cams_zoom_pane_g2

0x9f62,	// (0x00018e87) cams_zoom_pane_g3

0x9f6b,	// (0x00018e90) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0001e150) cams_zoom_pane_g

0x117c,	// (0x000100a1) grid_cams_pane

0x1196,	// (0x000100bb) linegrid_cams_pane

0x11aa,	// (0x000100cf) cell_cams_pane_ParamLimits

0x11aa,	// (0x000100cf) cell_cams_pane

0x9f74,	// (0x00018e99) cams_burst_image_pane

0x9f7c,	// (0x00018ea1) cell_cams_pane_g1

0x999c,	// (0x000188c1) grid_highlight_pane_cp03

0x9d57,	// (0x00018c7c) mp_bg_pane_g1

0x999c,	// (0x000188c1) bg_list_pane_cp03

0xbe15,	// (0x0001ad3a) bg_mp_pane

0xbe1d,	// (0x0001ad42) grid_mp_pane

0xbe25,	// (0x0001ad4a) media_player_g1

0xbe2d,	// (0x0001ad52) media_player_t1

0xbe3b,	// (0x0001ad60) media_player_t2

0xbe49,	// (0x0001ad6e) media_player_t3

0xbe57,	// (0x0001ad7c) media_player_t4

0xbe65,	// (0x0001ad8a) media_player_t5

0xbe73,	// (0x0001ad98) media_player_t6

0xbe81,	// (0x0001ada6) media_player_t7

0x0006,

0xf5c7,	// (0x0001e4ec) media_player_t

0xbe8f,	// (0x0001adb4) wait_bar_pane_cp02

0xf5ac,	// (0x0001e4d1) main_usb_pane_t

0x32ec,	// (0x00012211) cell_mp_pane

0x9d57,	// (0x00018c7c) cell_mp_pane_g1

0x999c,	// (0x000188c1) grid_highlight_pane_cp06

0x9f84,	// (0x00018ea9) grid_skin_colour_pane

0x9f8c,	// (0x00018eb1) list_highlight_pane_cp03

0x12e0,	// (0x00010205) skin_g1

0x9f94,	// (0x00018eb9) skin_t1

0x9fa3,	// (0x00018ec8) skin_t2

0x0001,

0xf260,	// (0x0001e185) skin_t

0x12e8,	// (0x0001020d) cell_skin_colour_pane_ParamLimits

0x12e8,	// (0x0001020d) cell_skin_colour_pane

0x9fb1,	// (0x00018ed6) cell_skin_colour_pane_g1

0x1361,	// (0x00010286) call_video_g1_ParamLimits

0x1361,	// (0x00010286) call_video_g1

0x137d,	// (0x000102a2) call_video_g2_ParamLimits

0x137d,	// (0x000102a2) call_video_g2

0x0001,

0xf265,	// (0x0001e18a) call_video_g_ParamLimits

0xf265,	// (0x0001e18a) call_video_g

0x13cf,	// (0x000102f4) call_video_uplink_pane_cp1_ParamLimits

0x13cf,	// (0x000102f4) call_video_uplink_pane_cp1

0x9fc3,	// (0x00018ee8) call_video_uplink_pane_cp2

0x146e,	// (0x00010393) video_down_crop_pane_ParamLimits

0x146e,	// (0x00010393) video_down_crop_pane

0x1565,	// (0x0001048a) video_down_pane_ParamLimits

0x1565,	// (0x0001048a) video_down_pane

0x9fcb,	// (0x00018ef0) video_down_subqcif_pane_ParamLimits

0x9fcb,	// (0x00018ef0) video_down_subqcif_pane

0x9fe3,	// (0x00018f08) video_down_subqcif_pane_cp_ParamLimits

0x9fe3,	// (0x00018f08) video_down_subqcif_pane_cp

0xa009,	// (0x00018f2e) im_reading_pane_ParamLimits

0xa009,	// (0x00018f2e) im_reading_pane

0x1675,	// (0x0001059a) im_writing_pane_ParamLimits

0x1675,	// (0x0001059a) im_writing_pane

0x168b,	// (0x000105b0) im_reading_pane_t1

0xa023,	// (0x00018f48) list_im_pane

0xa034,	// (0x00018f59) scroll_pane_cp07

0x16c4,	// (0x000105e9) im_writing_pane_t1_ParamLimits

0x16c4,	// (0x000105e9) im_writing_pane_t1

0xa04d,	// (0x00018f72) im_writing_pane_t2_ParamLimits

0xa04d,	// (0x00018f72) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0001e194) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0001e194) im_writing_pane_t

0x999c,	// (0x000188c1) input_focus_pane_cp04

0x999c,	// (0x000188c1) input_focus_pane_cp05

0x16d9,	// (0x000105fe) list_im_single_pane_ParamLimits

0x16d9,	// (0x000105fe) list_im_single_pane

0x16ed,	// (0x00010612) list_single_im_pane_t1

0x32ac,	// (0x000121d1) blid_accuracy_pane

0x32b4,	// (0x000121d9) blid_compass_pane

0x32be,	// (0x000121e3) main_location_t1

0x32ce,	// (0x000121f3) main_location_t2

0x32de,	// (0x00012203) main_location_t3

0x0002,

0xf5d6,	// (0x0001e4fb) main_location_t

0x999c,	// (0x000188c1) aid_levels_location

0x9d57,	// (0x00018c7c) blid_accuracy_pane_g1

0x9d57,	// (0x00018c7c) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0001e1f6) blid_accuracy_pane_g

0xa095,	// (0x00018fba) wml_content_pane

0xa0d3,	// (0x00018ff8) wml_button_pane_ParamLimits

0xa0d3,	// (0x00018ff8) wml_button_pane

0x16fc,	// (0x00010621) wml_list_single_large_pane_ParamLimits

0x16fc,	// (0x00010621) wml_list_single_large_pane

0x1711,	// (0x00010636) wml_list_single_medium_pane_ParamLimits

0x1711,	// (0x00010636) wml_list_single_medium_pane

0x1727,	// (0x0001064c) wml_list_single_small_pane_ParamLimits

0x1727,	// (0x0001064c) wml_list_single_small_pane

0xa0e7,	// (0x0001900c) wml_selection_box_pane_ParamLimits

0xa0e7,	// (0x0001900c) wml_selection_box_pane

0xa0fa,	// (0x0001901f) wml_list_single_pane_t1

0xa109,	// (0x0001902e) wml_list_single_medium_pane_t1

0xa118,	// (0x0001903d) wml_list_single_large_pane_t1

0xa127,	// (0x0001904c) input_focus_pane_cp02_ParamLimits

0xa127,	// (0x0001904c) input_focus_pane_cp02

0xa13a,	// (0x0001905f) wml_selection_box_pane_g1

0xa143,	// (0x00019068) wml_selection_box_pane_t1_ParamLimits

0xa143,	// (0x00019068) wml_selection_box_pane_t1

0x9bf7,	// (0x00018b1c) bg_wml_button_pane_ParamLimits

0x9bf7,	// (0x00018b1c) bg_wml_button_pane

0xa15b,	// (0x00019080) wml_button_pane_g1

0xa163,	// (0x00019088) wml_button_pane_t1

0xa15b,	// (0x00019080) wml_button_bg_pane_g1

0xa173,	// (0x00019098) wml_button_bg_pane_g2

0xa17b,	// (0x000190a0) wml_button_bg_pane_g3

0xa183,	// (0x000190a8) wml_button_bg_pane_g4

0xa18b,	// (0x000190b0) wml_button_bg_pane_g5

0xa193,	// (0x000190b8) wml_button_bg_pane_g6

0xa19b,	// (0x000190c0) wml_button_bg_pane_g7

0xa1a3,	// (0x000190c8) wml_button_bg_pane_g8

0xa1ab,	// (0x000190d0) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0001e199) wml_button_bg_pane_g

0x173f,	// (0x00010664) bg_list_pane_cp02

0xa1b3,	// (0x000190d8) mce_header_pane_ParamLimits

0xa1b3,	// (0x000190d8) mce_header_pane

0xa1c9,	// (0x000190ee) mce_icon_pane

0xa1c9,	// (0x000190ee) mce_image_pane

0xa1d2,	// (0x000190f7) mce_text_pane_ParamLimits

0xa1d2,	// (0x000190f7) mce_text_pane

0x1747,	// (0x0001066c) scroll_pane_cp03

0xa0cb,	// (0x00018ff0) scroll_pane_cp04

0xa1e5,	// (0x0001910a) scroll_pane_cp05_ParamLimits

0xa1e5,	// (0x0001910a) scroll_pane_cp05

0x1751,	// (0x00010676) mce_header_field_pane_ParamLimits

0x1751,	// (0x00010676) mce_header_field_pane

0x1768,	// (0x0001068d) mce_header_field_pane_2_ParamLimits

0x1768,	// (0x0001068d) mce_header_field_pane_2

0x177e,	// (0x000106a3) mce_header_field_pane_3

0x1786,	// (0x000106ab) list_single_mce_message_pane_ParamLimits

0x1786,	// (0x000106ab) list_single_mce_message_pane

0x179b,	// (0x000106c0) list_single_mce_smart_pane_ParamLimits

0x179b,	// (0x000106c0) list_single_mce_smart_pane

0xa1f1,	// (0x00019116) input_focus_pane_cp03

0xa1fa,	// (0x0001911f) list_header_data_pane

0x17bb,	// (0x000106e0) mce_header_field_pane_t1

0x17cb,	// (0x000106f0) list_single_mce_header_pane_ParamLimits

0x17cb,	// (0x000106f0) list_single_mce_header_pane

0xa202,	// (0x00019127) list_single_mce_header_pane_t1

0xa211,	// (0x00019136) list_single_mce_message_pane_g1

0xa219,	// (0x0001913e) list_single_mce_message_pane_t1

0x1805,	// (0x0001072a) bg_cale_heading_pane_cp01_ParamLimits

0x1805,	// (0x0001072a) bg_cale_heading_pane_cp01

0xa227,	// (0x0001914c) bg_cale_pane_cp02_ParamLimits

0xa227,	// (0x0001914c) bg_cale_pane_cp02

0x183f,	// (0x00010764) cale_month_corner_pane

0x185e,	// (0x00010783) cale_month_day_heading_pane_ParamLimits

0x185e,	// (0x00010783) cale_month_day_heading_pane

0x18b0,	// (0x000107d5) cale_month_pane_g1_ParamLimits

0x18b0,	// (0x000107d5) cale_month_pane_g1

0x18df,	// (0x00010804) cale_month_pane_g2_ParamLimits

0x18df,	// (0x00010804) cale_month_pane_g2

0x190f,	// (0x00010834) cale_month_pane_g3_ParamLimits

0x190f,	// (0x00010834) cale_month_pane_g3

0x194b,	// (0x00010870) cale_month_pane_g4_ParamLimits

0x194b,	// (0x00010870) cale_month_pane_g4

0x1987,	// (0x000108ac) cale_month_pane_g5_ParamLimits

0x1987,	// (0x000108ac) cale_month_pane_g5

0x19cf,	// (0x000108f4) cale_month_pane_g6_ParamLimits

0x19cf,	// (0x000108f4) cale_month_pane_g6

0x1a1b,	// (0x00010940) cale_month_pane_g7_ParamLimits

0x1a1b,	// (0x00010940) cale_month_pane_g7

0x1a6f,	// (0x00010994) cale_month_pane_g8_ParamLimits

0x1a6f,	// (0x00010994) cale_month_pane_g8

0x1ac3,	// (0x000109e8) cale_month_pane_g9_ParamLimits

0x1ac3,	// (0x000109e8) cale_month_pane_g9

0x1b15,	// (0x00010a3a) cale_month_pane_g10_ParamLimits

0x1b15,	// (0x00010a3a) cale_month_pane_g10

0x1b67,	// (0x00010a8c) cale_month_pane_g11_ParamLimits

0x1b67,	// (0x00010a8c) cale_month_pane_g11

0x1bb9,	// (0x00010ade) cale_month_pane_g12_ParamLimits

0x1bb9,	// (0x00010ade) cale_month_pane_g12

0x1c0b,	// (0x00010b30) cale_month_pane_g13_ParamLimits

0x1c0b,	// (0x00010b30) cale_month_pane_g13

0x000c,

0xf287,	// (0x0001e1ac) cale_month_pane_g_ParamLimits

0xf287,	// (0x0001e1ac) cale_month_pane_g

0x1c5d,	// (0x00010b82) cale_month_week_pane

0x1c81,	// (0x00010ba6) grid_cale_month_pane_ParamLimits

0x1c81,	// (0x00010ba6) grid_cale_month_pane

0x1cca,	// (0x00010bef) cale_month_day_heading_pane_t1

0x1d50,	// (0x00010c75) cale_month_day_heading_pane_t2

0x1dc9,	// (0x00010cee) cale_month_day_heading_pane_t3

0x1e42,	// (0x00010d67) cale_month_day_heading_pane_t4

0x1ec3,	// (0x00010de8) cale_month_day_heading_pane_t5

0x1f4c,	// (0x00010e71) cale_month_day_heading_pane_t6

0x1fd5,	// (0x00010efa) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0001e1c7) cale_month_day_heading_pane_t

0x9ebd,	// (0x00018de2) bg_cale_side_pane_cp01

0x2066,	// (0x00010f8b) cale_month_week_pane_t1

0x207f,	// (0x00010fa4) cale_month_week_pane_t2

0x2098,	// (0x00010fbd) cale_month_week_pane_t3

0x20b1,	// (0x00010fd6) cale_month_week_pane_t4

0x20ca,	// (0x00010fef) cale_month_week_pane_t5

0x20e3,	// (0x00011008) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0001e1d6) cale_month_week_pane_t

0x20fc,	// (0x00011021) cell_cale_month_pane_ParamLimits

0x20fc,	// (0x00011021) cell_cale_month_pane

0xa266,	// (0x0001918b) cell_cale_month_pane_g1

0x2254,	// (0x00011179) cell_cale_month_pane_t1_ParamLimits

0x2254,	// (0x00011179) cell_cale_month_pane_t1

0x9ecb,	// (0x00018df0) grid_highlight_pane_cp08

0x9d57,	// (0x00018c7c) main_smil_g1

0x2280,	// (0x000111a5) smil_status_pane

0xa272,	// (0x00019197) smil_text_pane

0xbd35,	// (0x0001ac5a) bg_popup_call3_rect_pane_g8

0xbd3d,	// (0x0001ac62) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0001e48f) bg_popup_call3_rect_pane_g

0xbfd8,	// (0x0001aefd) smil_status_volume_pane_g1

0xa27c,	// (0x000191a1) smil_status_pane_t1

0xc00b,	// (0x0001af30) volume_smil_pane

0xa293,	// (0x000191b8) list_smil_text_pane

0x2293,	// (0x000111b8) scroll_pane_cp011

0x229e,	// (0x000111c3) smil_text_list_pane_t1_ParamLimits

0x229e,	// (0x000111c3) smil_text_list_pane_t1

0xa29d,	// (0x000191c2) aid_volume_smil_ParamLimits

0xa29d,	// (0x000191c2) aid_volume_smil

0x9d57,	// (0x00018c7c) smil_volume_pane_g1

0x9d57,	// (0x00018c7c) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0001e1f6) smil_volume_pane_g

0x0922,	// (0x0000f847) listscroll_cale_day_pane

0xa2bf,	// (0x000191e4) bg_cale_pane

0xa2d7,	// (0x000191fc) list_cale_pane

0xa2fa,	// (0x0001921f) scroll_pane_cp09

0xa30b,	// (0x00019230) cale_bg_pane_g1

0xa313,	// (0x00019238) cale_bg_pane_g2

0xa31b,	// (0x00019240) cale_bg_pane_g3

0xa323,	// (0x00019248) cale_bg_pane_g4

0xa32b,	// (0x00019250) cale_bg_pane_g5

0xa333,	// (0x00019258) cale_bg_pane_g6

0xa33b,	// (0x00019260) cale_bg_pane_g7

0xa343,	// (0x00019268) cale_bg_pane_g8

0xa34b,	// (0x00019270) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0001e1fb) cale_bg_pane_g

0x22e2,	// (0x00011207) list_cale_time_pane_ParamLimits

0x22e2,	// (0x00011207) list_cale_time_pane

0xa353,	// (0x00019278) list_cale_time_pane_g1_ParamLimits

0xa353,	// (0x00019278) list_cale_time_pane_g1

0xa35f,	// (0x00019284) list_cale_time_pane_g2_ParamLimits

0xa35f,	// (0x00019284) list_cale_time_pane_g2

0x22f7,	// (0x0001121c) list_cale_time_pane_g3_ParamLimits

0x22f7,	// (0x0001121c) list_cale_time_pane_g3

0x2305,	// (0x0001122a) list_cale_time_pane_g4_ParamLimits

0x2305,	// (0x0001122a) list_cale_time_pane_g4

0x2313,	// (0x00011238) list_cale_time_pane_g5_ParamLimits

0x2313,	// (0x00011238) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0001e20e) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0001e20e) list_cale_time_pane_g

0xa379,	// (0x0001929e) list_cale_time_pane_t1_ParamLimits

0xa379,	// (0x0001929e) list_cale_time_pane_t1

0xa3a1,	// (0x000192c6) list_cale_time_pane_t2_ParamLimits

0xa3a1,	// (0x000192c6) list_cale_time_pane_t2

0x2674,	// (0x00011599) aid_blid_cardinal_pane

0x26b2,	// (0x000115d7) compass_pane_t4

0xa3c9,	// (0x000192ee) list_cale_time_pane_t4_ParamLimits

0xa3c9,	// (0x000192ee) list_cale_time_pane_t4

0x26c0,	// (0x000115e5) compass_pane_t5

0x26ce,	// (0x000115f3) compass_pane_t6

0x26dc,	// (0x00011601) compass_pane_t7

0xa8eb,	// (0x00019810) navi_pane_cc_t1

0xaada,	// (0x000199ff) aid_phob_thumbnail_center_pane

0x2cc4,	// (0x00011be9) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0001e21b) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0001e21b) list_cale_time_pane_t

0x95f3,	// (0x00018518) bg_popup_window_pane_cp02_ParamLimits

0x95f3,	// (0x00018518) bg_popup_window_pane_cp02

0xa3f1,	// (0x00019316) heading_pane_cp01_ParamLimits

0xa3f1,	// (0x00019316) heading_pane_cp01

0xa3fd,	// (0x00019322) loc_req_pane_ParamLimits

0xa3fd,	// (0x00019322) loc_req_pane

0xa40d,	// (0x00019332) loc_type_pane_ParamLimits

0xa40d,	// (0x00019332) loc_type_pane

0xa41f,	// (0x00019344) loc_type_pane_t1_ParamLimits

0xa41f,	// (0x00019344) loc_type_pane_t1

0xa431,	// (0x00019356) loc_type_pane_t2_ParamLimits

0xa431,	// (0x00019356) loc_type_pane_t2

0xa443,	// (0x00019368) loc_type_pane_t3_ParamLimits

0xa443,	// (0x00019368) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0001e222) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0001e222) loc_type_pane_t

0xa455,	// (0x0001937a) list_loc_req_pane

0xa45f,	// (0x00019384) scroll_pane_cp012

0x2321,	// (0x00011246) list_single_loc_request_popup_menu_pane_ParamLimits

0x2321,	// (0x00011246) list_single_loc_request_popup_menu_pane

0xa46a,	// (0x0001938f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa46a,	// (0x0001938f) list_single_loc_request_popup_menu_pane_g1

0xa476,	// (0x0001939b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa476,	// (0x0001939b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0001e229) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0001e229) list_single_loc_request_popup_menu_pane_g

0xa482,	// (0x000193a7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa482,	// (0x000193a7) list_single_loc_request_popup_menu_pane_t1

0x9bf7,	// (0x00018b1c) bg_popup_window_pane_cp03_ParamLimits

0x9bf7,	// (0x00018b1c) bg_popup_window_pane_cp03

0xa498,	// (0x000193bd) heading_loc_req_pane_ParamLimits

0xa498,	// (0x000193bd) heading_loc_req_pane

0x232e,	// (0x00011253) popup_dyc_status_message_window_g1_ParamLimits

0x232e,	// (0x00011253) popup_dyc_status_message_window_g1

0x2342,	// (0x00011267) popup_dyc_status_message_window_t1_ParamLimits

0x2342,	// (0x00011267) popup_dyc_status_message_window_t1

0x2357,	// (0x0001127c) popup_dyc_status_message_window_t2_ParamLimits

0x2357,	// (0x0001127c) popup_dyc_status_message_window_t2

0x236c,	// (0x00011291) popup_dyc_status_message_window_t3_ParamLimits

0x236c,	// (0x00011291) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0001e22e) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0001e22e) popup_dyc_status_message_window_t

0x999c,	// (0x000188c1) bg_heading_pane_cp01

0xa4a4,	// (0x000193c9) heading_loc_req_pane_g1

0xa4ac,	// (0x000193d1) heading_loc_req_pane_g2

0xa4b4,	// (0x000193d9) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0001e235) heading_loc_req_pane_g

0xa4bc,	// (0x000193e1) heading_loc_req_pane_t1

0xa4cb,	// (0x000193f0) bg_popup_sub_pane_cp01_ParamLimits

0xa4cb,	// (0x000193f0) bg_popup_sub_pane_cp01

0xa4d9,	// (0x000193fe) popup_cale_events_window_g1_ParamLimits

0xa4d9,	// (0x000193fe) popup_cale_events_window_g1

0xa4f9,	// (0x0001941e) popup_cale_events_window_g2_ParamLimits

0xa4f9,	// (0x0001941e) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0001e269) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0001e269) popup_cale_events_window_g

0xa519,	// (0x0001943e) popup_cale_events_window_t1_ParamLimits

0xa519,	// (0x0001943e) popup_cale_events_window_t1

0xa52b,	// (0x00019450) popup_cale_events_window_t2_ParamLimits

0xa52b,	// (0x00019450) popup_cale_events_window_t2

0xa569,	// (0x0001948e) popup_cale_events_window_t3_ParamLimits

0xa569,	// (0x0001948e) popup_cale_events_window_t3

0xa5a3,	// (0x000194c8) popup_cale_events_window_t4_ParamLimits

0xa5a3,	// (0x000194c8) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0001e26e) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0001e26e) popup_cale_events_window_t

0x246f,	// (0x00011394) call_type_pane

0x247f,	// (0x000113a4) popup_call_status_window_g1

0x2493,	// (0x000113b8) popup_call_status_window_g2

0x24a7,	// (0x000113cc) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0001e277) popup_call_status_window_g

0xa5d9,	// (0x000194fe) call_type_pane_g1

0xa5e2,	// (0x00019507) call_type_pane_g2

0x0001,

0xf359,	// (0x0001e27e) call_type_pane_g

0x999c,	// (0x000188c1) bg_popup_sub_pane_cp02

0xa5eb,	// (0x00019510) listscroll_popup_wml_pane

0xa5f3,	// (0x00019518) list_wml_pane

0xa5fd,	// (0x00019522) scroll_pane_cp013

0xa608,	// (0x0001952d) list_single_graphic_popup_wml_pane_ParamLimits

0xa608,	// (0x0001952d) list_single_graphic_popup_wml_pane

0x9d57,	// (0x00018c7c) list_single_graphic_popup_wml_pane_g1

0xa61c,	// (0x00019541) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0001e283) list_single_graphic_popup_wml_pane_g

0xa624,	// (0x00019549) list_single_graphic_popup_wml_pane_t1

0xa63a,	// (0x0001955f) aid_call_pane

0x9bef,	// (0x00018b14) popup_clock_analogue_window_g1

0x9bef,	// (0x00018b14) popup_clock_analogue_window_g2

0xa642,	// (0x00019567) popup_clock_analogue_window_g3

0xa642,	// (0x00019567) popup_clock_analogue_window_g4

0x9d57,	// (0x00018c7c) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0001e288) popup_clock_analogue_window_g

0xa64a,	// (0x0001956f) popup_clock_analogue_window_t1

0xa658,	// (0x0001957d) clock_digital_number_pane_ParamLimits

0xa658,	// (0x0001957d) clock_digital_number_pane

0xa664,	// (0x00019589) clock_digital_number_pane_cp02_ParamLimits

0xa664,	// (0x00019589) clock_digital_number_pane_cp02

0xa670,	// (0x00019595) clock_digital_number_pane_cp03_ParamLimits

0xa670,	// (0x00019595) clock_digital_number_pane_cp03

0xa67c,	// (0x000195a1) clock_digital_number_pane_cp04_ParamLimits

0xa67c,	// (0x000195a1) clock_digital_number_pane_cp04

0xa68c,	// (0x000195b1) clock_digital_separator_pane_ParamLimits

0xa68c,	// (0x000195b1) clock_digital_separator_pane

0xa698,	// (0x000195bd) popup_clock_digital_window_t1

0x9d57,	// (0x00018c7c) clock_digital_number_pane_g1

0x9d57,	// (0x00018c7c) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0001e1f6) clock_digital_number_pane_g

0x9d57,	// (0x00018c7c) clock_digital_separator_pane_g1

0x9d57,	// (0x00018c7c) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0001e1f6) clock_digital_separator_pane_g

0x999c,	// (0x000188c1) bg_popup_window_pane_cp04

0xa6b5,	// (0x000195da) heading_pane_cp03

0xa6bd,	// (0x000195e2) listscroll_popup_gms_pane

0xa6c5,	// (0x000195ea) grid_large_graphic_popup_pane

0xa6cf,	// (0x000195f4) listscroll_popup_gms_pane_g1

0xa6d7,	// (0x000195fc) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0001e293) listscroll_popup_gms_pane_g

0xa0cb,	// (0x00018ff0) scroll_pane_cp014

0x24b6,	// (0x000113db) cell_large_graphic_popup_pane_ParamLimits

0x24b6,	// (0x000113db) cell_large_graphic_popup_pane

0x24ce,	// (0x000113f3) cell_large_graphic_popup_pane_g1_ParamLimits

0x24ce,	// (0x000113f3) cell_large_graphic_popup_pane_g1

0xa6df,	// (0x00019604) cell_large_graphic_popup_pane_g2_ParamLimits

0xa6df,	// (0x00019604) cell_large_graphic_popup_pane_g2

0xa6eb,	// (0x00019610) cell_large_graphic_popup_pane_g3_ParamLimits

0xa6eb,	// (0x00019610) cell_large_graphic_popup_pane_g3

0xa6f8,	// (0x0001961d) cell_large_graphic_popup_pane_g4_ParamLimits

0xa6f8,	// (0x0001961d) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0001e298) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0001e298) cell_large_graphic_popup_pane_g

0xa708,	// (0x0001962d) grid_highlight_pane_cp010

0x9d57,	// (0x00018c7c) bg_popup_call_pane_g1

0xa712,	// (0x00019637) list_single_graphic_popup_conf_pane_ParamLimits

0xa712,	// (0x00019637) list_single_graphic_popup_conf_pane

0xa725,	// (0x0001964a) list_highlight_pane_cp01

0xa72e,	// (0x00019653) list_single_graphic_popup_conf_pane_g1

0xa736,	// (0x0001965b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0001e2a1) list_single_graphic_popup_conf_pane_g

0xa73e,	// (0x00019663) list_single_graphic_popup_conf_pane_t1

0xa74c,	// (0x00019671) linegrid_cams_pane_g1

0x24da,	// (0x000113ff) linegrid_cams_pane_g2

0x9efe,	// (0x00018e23) linegrid_cams_pane_g3

0xa755,	// (0x0001967a) linegrid_cams_pane_g4

0x24e3,	// (0x00011408) linegrid_cams_pane_g5

0x24ec,	// (0x00011411) linegrid_cams_pane_g6

0x9f07,	// (0x00018e2c) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0001e2a6) linegrid_cams_pane_g

0xa75e,	// (0x00019683) popup_clock_analogue_window

0xa75e,	// (0x00019683) popup_clock_digital_window

0x999c,	// (0x000188c1) popup_phob_thumbnail_window

0x9d57,	// (0x00018c7c) call_video_uplink_pane_g1

0xa767,	// (0x0001968c) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0001e2b5) call_video_uplink_pane_g

0xa76f,	// (0x00019694) video_uplink_pane

0xa777,	// (0x0001969c) mce_image_pane_g1

0x24f7,	// (0x0001141c) mce_image_pane_g2

0x2501,	// (0x00011426) mce_image_pane_g3

0x2509,	// (0x0001142e) mce_image_pane_g4

0x2511,	// (0x00011436) mce_image_pane_g5

0x0004,

0xf395,	// (0x0001e2ba) mce_image_pane_g

0xa781,	// (0x000196a6) control_top_pane_stacon_cp01_ParamLimits

0xa781,	// (0x000196a6) control_top_pane_stacon_cp01

0xa795,	// (0x000196ba) uni_indicator_pane_stacon_cp01_ParamLimits

0xa795,	// (0x000196ba) uni_indicator_pane_stacon_cp01

0xa7a6,	// (0x000196cb) bg_popup_sub_pane_cp03

0xa7b0,	// (0x000196d5) chi_dic_find_pane

0x2519,	// (0x0001143e) listscroll_chi_dic_pane

0xa7b8,	// (0x000196dd) main_pane_chidic_g1

0xa7c0,	// (0x000196e5) chi_dic_find_pane_t1

0xa7ce,	// (0x000196f3) find_chidic_pane

0xa7d7,	// (0x000196fc) chi_dic_list_pane_ParamLimits

0xa7d7,	// (0x000196fc) chi_dic_list_pane

0xa7e8,	// (0x0001970d) scroll_pane_cp020

0xa7f0,	// (0x00019715) find_chidic_pane_t1

0x999c,	// (0x000188c1) input_focus_pane_cp06

0x252d,	// (0x00011452) list_chi_dic_pane_ParamLimits

0x252d,	// (0x00011452) list_chi_dic_pane

0x253f,	// (0x00011464) list_chi_dic_pane_t1_ParamLimits

0x253f,	// (0x00011464) list_chi_dic_pane_t1

0x999c,	// (0x000188c1) list_highlight_pane_cp020

0xa7ff,	// (0x00019724) bg_cale_heading_pane_g1

0x2552,	// (0x00011477) bg_cale_heading_pane_g2

0x255a,	// (0x0001147f) bg_cale_heading_pane_g3

0x2562,	// (0x00011487) bg_cale_heading_pane_g4

0x256c,	// (0x00011491) bg_cale_heading_pane_g5

0x2576,	// (0x0001149b) bg_cale_heading_pane_g6

0x257e,	// (0x000114a3) bg_cale_heading_pane_g7

0x2586,	// (0x000114ab) bg_cale_heading_pane_g8

0x2590,	// (0x000114b5) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0001e2c5) bg_cale_heading_pane_g

0xa7ff,	// (0x00019724) bg_cale_side_pane_g1

0x259a,	// (0x000114bf) bg_cale_side_pane_g2

0x25a2,	// (0x000114c7) bg_cale_side_pane_g3

0x25aa,	// (0x000114cf) bg_cale_side_pane_g4

0x25b2,	// (0x000114d7) bg_cale_side_pane_g5

0x25ba,	// (0x000114df) bg_cale_side_pane_g6

0x25c2,	// (0x000114e7) bg_cale_side_pane_g7

0x25ca,	// (0x000114ef) bg_cale_side_pane_g8

0x25d2,	// (0x000114f7) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0001e2d8) bg_cale_side_pane_g

0x25da,	// (0x000114ff) popup_call_status_window_ParamLimits

0x25da,	// (0x000114ff) popup_call_status_window

0xa807,	// (0x0001972c) stacon_top_pane

0xa80f,	// (0x00019734) status_pane_ParamLimits

0xa80f,	// (0x00019734) status_pane

0xa824,	// (0x00019749) status_small_pane

0xa82c,	// (0x00019751) control_pane

0x999c,	// (0x000188c1) stacon_bottom_pane

0xa834,	// (0x00019759) list_single_mce_smart_pane_t1_ParamLimits

0xa834,	// (0x00019759) list_single_mce_smart_pane_t1

0xa847,	// (0x0001976c) list_single_mce_smart_pane_t2_ParamLimits

0xa847,	// (0x0001976c) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0001e2eb) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0001e2eb) list_single_mce_smart_pane_t

0x2623,	// (0x00011548) compass_pane

0x262c,	// (0x00011551) main_location2_pane_t1

0x263e,	// (0x00011563) main_location2_pane_t2

0x2650,	// (0x00011575) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0001e2f0) main_location2_pane_t

0xa866,	// (0x0001978b) compass_pane_g1_ParamLimits

0xa866,	// (0x0001978b) compass_pane_g1

0x2694,	// (0x000115b9) compass_pane_t1

0x26a3,	// (0x000115c8) compass_pane_t2

0x0005,

0xf3d4,	// (0x0001e2f9) compass_pane_t

0x26ea,	// (0x0001160f) text_secondary_cp61

0xa8e2,	// (0x00019807) navi_pane_cams_g5

0xa95e,	// (0x00019883) navi_pane_im_t1

0xa96c,	// (0x00019891) navi_pane_mp_g1_ParamLimits

0xa96c,	// (0x00019891) navi_pane_mp_g1

0xa980,	// (0x000198a5) navi_pane_mp_g2_ParamLimits

0xa980,	// (0x000198a5) navi_pane_mp_g2

0xa98c,	// (0x000198b1) navi_pane_mp_g3_ParamLimits

0xa98c,	// (0x000198b1) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0001e30d) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0001e30d) navi_pane_mp_g

0xa998,	// (0x000198bd) navi_pane_mp_t1

0xa9a6,	// (0x000198cb) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0001e314) navi_pane_mp_t

0xaa11,	// (0x00019936) navi_pane_vt_g1

0xa998,	// (0x000198bd) navi_pane_vt_t1

0xaa19,	// (0x0001993e) navi_slider_pane

0x9f18,	// (0x00018e3d) zooming_pane

0xaa29,	// (0x0001994e) navi_slider_pane_g1

0xaa32,	// (0x00019957) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0001e31b) navi_slider_pane_g

0xaa5f,	// (0x00019984) aid_levels_zoom

0xaa67,	// (0x0001998c) zooming_pane_g1

0xaa6f,	// (0x00019994) zooming_pane_g2

0xaa6f,	// (0x00019994) zooming_pane_g3

0x0002,

0xf405,	// (0x0001e32a) zooming_pane_g

0xaa77,	// (0x0001999c) level_10_zoom

0xaa80,	// (0x000199a5) level_11_zoom

0xaa89,	// (0x000199ae) level_1_zoom

0xaa92,	// (0x000199b7) level_2_zoom

0xaa9b,	// (0x000199c0) level_3_zoom

0xaaa4,	// (0x000199c9) level_4_zoom

0xaaad,	// (0x000199d2) level_5_zoom

0xaab6,	// (0x000199db) level_6_zoom

0xaabf,	// (0x000199e4) level_7_zoom

0xaac8,	// (0x000199ed) level_8_zoom

0xaad1,	// (0x000199f6) level_9_zoom

0xaae2,	// (0x00019a07) popup_phob_thumbnail_window_g1

0xaaea,	// (0x00019a0f) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0001e331) popup_phob_thumbnail_window_g

0xbe97,	// (0x0001adbc) level_1_location

0xbe9f,	// (0x0001adc4) level_2_location

0xbea7,	// (0x0001adcc) level_3_location

0xbeaf,	// (0x0001add4) level_4_location

0x9f18,	// (0x00018e3d) level_5_location

0x273b,	// (0x00011660) mce_icon_pane_g1

0x2745,	// (0x0001166a) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0001e336) mce_icon_pane_g

0x274d,	// (0x00011672) main_mup_pane_g1_ParamLimits

0x274d,	// (0x00011672) main_mup_pane_g1

0x2763,	// (0x00011688) main_mup_pane_g2_ParamLimits

0x2763,	// (0x00011688) main_mup_pane_g2

0x277b,	// (0x000116a0) main_mup_pane_g3_ParamLimits

0x277b,	// (0x000116a0) main_mup_pane_g3

0x2793,	// (0x000116b8) main_mup_pane_g4_ParamLimits

0x2793,	// (0x000116b8) main_mup_pane_g4

0x27ab,	// (0x000116d0) main_mup_pane_g5_ParamLimits

0x27ab,	// (0x000116d0) main_mup_pane_g5

0x27c7,	// (0x000116ec) main_mup_pane_g6_ParamLimits

0x27c7,	// (0x000116ec) main_mup_pane_g6

0x27df,	// (0x00011704) main_mup_pane_g7_ParamLimits

0x27df,	// (0x00011704) main_mup_pane_g7

0x27f7,	// (0x0001171c) main_mup_pane_g8_ParamLimits

0x27f7,	// (0x0001171c) main_mup_pane_g8

0x2811,	// (0x00011736) main_mup_pane_g9_ParamLimits

0x2811,	// (0x00011736) main_mup_pane_g9

0x282b,	// (0x00011750) main_mup_pane_g10_ParamLimits

0x282b,	// (0x00011750) main_mup_pane_g10

0x2845,	// (0x0001176a) main_mup_pane_g11_ParamLimits

0x2845,	// (0x0001176a) main_mup_pane_g11

0x2859,	// (0x0001177e) main_mup_pane_g12_ParamLimits

0x2859,	// (0x0001177e) main_mup_pane_g12

0x286f,	// (0x00011794) main_mup_pane_g13_ParamLimits

0x286f,	// (0x00011794) main_mup_pane_g13

0x000c,

0xf416,	// (0x0001e33b) main_mup_pane_g_ParamLimits

0xf416,	// (0x0001e33b) main_mup_pane_g

0x2883,	// (0x000117a8) main_mup_pane_t1_ParamLimits

0x2883,	// (0x000117a8) main_mup_pane_t1

0x289d,	// (0x000117c2) main_mup_pane_t2_ParamLimits

0x289d,	// (0x000117c2) main_mup_pane_t2

0x28b5,	// (0x000117da) main_mup_pane_t3_ParamLimits

0x28b5,	// (0x000117da) main_mup_pane_t3

0x28cd,	// (0x000117f2) main_mup_pane_t4_ParamLimits

0x28cd,	// (0x000117f2) main_mup_pane_t4

0x28eb,	// (0x00011810) main_mup_pane_t5_ParamLimits

0x28eb,	// (0x00011810) main_mup_pane_t5

0x2900,	// (0x00011825) main_mup_pane_t6_ParamLimits

0x2900,	// (0x00011825) main_mup_pane_t6

0x0005,

0xf431,	// (0x0001e356) main_mup_pane_t_ParamLimits

0xf431,	// (0x0001e356) main_mup_pane_t

0x2912,	// (0x00011837) mup_progress_pane_ParamLimits

0x2912,	// (0x00011837) mup_progress_pane

0x291e,	// (0x00011843) mup_visualizer_pane_ParamLimits

0x291e,	// (0x00011843) mup_visualizer_pane

0x294e,	// (0x00011873) mup_volume_pane_ParamLimits

0x294e,	// (0x00011873) mup_volume_pane

0xaaf2,	// (0x00019a17) mup_visualizer_pane_g1_ParamLimits

0xaaf2,	// (0x00019a17) mup_visualizer_pane_g1

0xaaf2,	// (0x00019a17) mup_visualizer_pane_g2_ParamLimits

0xaaf2,	// (0x00019a17) mup_visualizer_pane_g2

0xa866,	// (0x0001978b) mup_visualizer_pane_g3_ParamLimits

0xa866,	// (0x0001978b) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0001e363) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0001e363) mup_visualizer_pane_g

0x9d57,	// (0x00018c7c) mup_volume_pane_g1

0xab08,	// (0x00019a2d) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0001e36a) mup_volume_pane_g

0x9d57,	// (0x00018c7c) mup_progress_pane_g1

0xab11,	// (0x00019a36) mup_progress_pane_g2

0xab1a,	// (0x00019a3f) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0001e36f) mup_progress_pane_g

0x999c,	// (0x000188c1) bg_popup_window_pane_cp05

0xab23,	// (0x00019a48) heading_pane_cp02_ParamLimits

0xab23,	// (0x00019a48) heading_pane_cp02

0xab3d,	// (0x00019a62) list_popup_blid_pane

0xab45,	// (0x00019a6a) list_blid_sat_info_pane_ParamLimits

0xab45,	// (0x00019a6a) list_blid_sat_info_pane

0xab58,	// (0x00019a7d) list_blid_sat_info_pane_g1

0xab60,	// (0x00019a85) list_blid_sat_info_pane_t1

0x2a64,	// (0x00011989) mup_equalizer_pane_ParamLimits

0x2a64,	// (0x00011989) mup_equalizer_pane

0x2a7d,	// (0x000119a2) mup_equalizer_pane_cp1_ParamLimits

0x2a7d,	// (0x000119a2) mup_equalizer_pane_cp1

0x2a9a,	// (0x000119bf) mup_equalizer_pane_cp2_ParamLimits

0x2a9a,	// (0x000119bf) mup_equalizer_pane_cp2

0x2ab7,	// (0x000119dc) mup_equalizer_pane_cp3_ParamLimits

0x2ab7,	// (0x000119dc) mup_equalizer_pane_cp3

0x2ad8,	// (0x000119fd) mup_equalizer_pane_cp4_ParamLimits

0x2ad8,	// (0x000119fd) mup_equalizer_pane_cp4

0x2af9,	// (0x00011a1e) mup_equalizer_pane_cp5

0x2b0d,	// (0x00011a32) mup_equalizer_pane_cp6

0x2b21,	// (0x00011a46) mup_equalizer_pane_cp7

0xbdb5,	// (0x0001acda) bg_popup_call_poc_act_pane_g9

0xbdbd,	// (0x0001ace2) bg_popup_call_poc_act_pane_g10

0xbdc5,	// (0x0001acea) bg_popup_call_poc_act_pane_g11

0x000a,

0x9bf7,	// (0x00018b1c) mup_scale_pane

0x9d57,	// (0x00018c7c) mup_scale_pane_g1

0xab6e,	// (0x00019a93) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0001e38b) mup_scale_pane_g

0xab92,	// (0x00019ab7) msg_data_pane

0xab9a,	// (0x00019abf) scroll_pane_cp017

0x2b47,	// (0x00011a6c) bg_list_pane_cp04_ParamLimits

0x2b47,	// (0x00011a6c) bg_list_pane_cp04

0xabaa,	// (0x00019acf) msg_data_pane_g1

0x2b5f,	// (0x00011a84) msg_data_pane_g2

0x2b69,	// (0x00011a8e) msg_data_pane_g3

0x2b71,	// (0x00011a96) msg_data_pane_g4

0x2b79,	// (0x00011a9e) msg_data_pane_g5

0x2b81,	// (0x00011aa6) msg_data_pane_g6

0x2b89,	// (0x00011aae) msg_data_pane_g7

0x0006,

0xf475,	// (0x0001e39a) msg_data_pane_g

0x2b91,	// (0x00011ab6) msg_text_pane_ParamLimits

0x2b91,	// (0x00011ab6) msg_text_pane

0x2bbc,	// (0x00011ae1) qrid_highlight_pane_cp011_ParamLimits

0x2bbc,	// (0x00011ae1) qrid_highlight_pane_cp011

0x999c,	// (0x000188c1) msg_body_pane

0x999c,	// (0x000188c1) msg_header_pane

0xabbb,	// (0x00019ae0) input_focus_pane_cp07

0xabd0,	// (0x00019af5) msg_header_pane_t1_ParamLimits

0xabd0,	// (0x00019af5) msg_header_pane_t1

0xabe2,	// (0x00019b07) msg_header_pane_t2_ParamLimits

0xabe2,	// (0x00019b07) msg_header_pane_t2

0x0001,

0xf489,	// (0x0001e3ae) msg_header_pane_t_ParamLimits

0xf489,	// (0x0001e3ae) msg_header_pane_t

0xabf4,	// (0x00019b19) msg_body_pane_g1

0xabfc,	// (0x00019b21) msg_body_pane_t1_ParamLimits

0xabfc,	// (0x00019b21) msg_body_pane_t1

0xac2d,	// (0x00019b52) msg_body_pane_t2_ParamLimits

0xac2d,	// (0x00019b52) msg_body_pane_t2

0xac3f,	// (0x00019b64) msg_body_pane_t3_ParamLimits

0xac3f,	// (0x00019b64) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0001e3b3) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0001e3b3) msg_body_pane_t

0x2c1a,	// (0x00011b3f) main_viewer_pane_g1_ParamLimits

0x2c1a,	// (0x00011b3f) main_viewer_pane_g1

0x2c28,	// (0x00011b4d) main_viewer_pane_g2_ParamLimits

0x2c28,	// (0x00011b4d) main_viewer_pane_g2

0x2c36,	// (0x00011b5b) main_viewer_pane_g3_ParamLimits

0x2c36,	// (0x00011b5b) main_viewer_pane_g3

0x2c45,	// (0x00011b6a) main_viewer_pane_g4_ParamLimits

0x2c45,	// (0x00011b6a) main_viewer_pane_g4

0xac69,	// (0x00019b8e) main_viewer_pane_g5_ParamLimits

0xac69,	// (0x00019b8e) main_viewer_pane_g5

0xac69,	// (0x00019b8e) main_viewer_pane_g7_ParamLimits

0xac69,	// (0x00019b8e) main_viewer_pane_g7

0xac7b,	// (0x00019ba0) main_viewer_pane_g8_ParamLimits

0xac7b,	// (0x00019ba0) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0001e3c3) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0001e3c3) main_viewer_pane_g

0xac93,	// (0x00019bb8) viewer_content_pane_ParamLimits

0xac93,	// (0x00019bb8) viewer_content_pane

0x2c81,	// (0x00011ba6) main_postcard_pane_g1_ParamLimits

0x2c81,	// (0x00011ba6) main_postcard_pane_g1

0x2c97,	// (0x00011bbc) main_postcard_pane_g2_ParamLimits

0x2c97,	// (0x00011bbc) main_postcard_pane_g2

0x2cad,	// (0x00011bd2) main_postcard_pane_g3_ParamLimits

0x2cad,	// (0x00011bd2) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0001e3d4) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0001e3d4) main_postcard_pane_g

0x2cc4,	// (0x00011be9) main_postcard_pane_g4

0xbfeb,	// (0x0001af10) smil_status_volume_pane_g2

0x2d07,	// (0x00011c2c) postcard_pane_ParamLimits

0x2d07,	// (0x00011c2c) postcard_pane

0xaca1,	// (0x00019bc6) postcard_pane_g1_ParamLimits

0xaca1,	// (0x00019bc6) postcard_pane_g1

0x2d49,	// (0x00011c6e) postcard_pane_g2_ParamLimits

0x2d49,	// (0x00011c6e) postcard_pane_g2

0x2d55,	// (0x00011c7a) postcard_pane_g3_ParamLimits

0x2d55,	// (0x00011c7a) postcard_pane_g3

0xacaf,	// (0x00019bd4) postcard_pane_g4_ParamLimits

0xacaf,	// (0x00019bd4) postcard_pane_g4

0x2d61,	// (0x00011c86) postcard_pane_g5_ParamLimits

0x2d61,	// (0x00011c86) postcard_pane_g5

0x2d76,	// (0x00011c9b) postcard_pane_g6_ParamLimits

0x2d76,	// (0x00011c9b) postcard_pane_g6

0xaca1,	// (0x00019bc6) postcard_pane_g7_ParamLimits

0xaca1,	// (0x00019bc6) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0001e3e1) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0001e3e1) postcard_pane_g

0x2d8a,	// (0x00011caf) main_mp2_pane_g1_ParamLimits

0x2d8a,	// (0x00011caf) main_mp2_pane_g1

0x2d96,	// (0x00011cbb) main_mp2_pane_g2_ParamLimits

0x2d96,	// (0x00011cbb) main_mp2_pane_g2

0x2da2,	// (0x00011cc7) main_mp2_pane_g3_ParamLimits

0x2da2,	// (0x00011cc7) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0001e3f0) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0001e3f0) main_mp2_pane_g

0x2dae,	// (0x00011cd3) main_mp2_pane_t1_ParamLimits

0x2dae,	// (0x00011cd3) main_mp2_pane_t1

0x2dc3,	// (0x00011ce8) main_mp2_pane_t2_ParamLimits

0x2dc3,	// (0x00011ce8) main_mp2_pane_t2

0x2dd5,	// (0x00011cfa) main_mp2_pane_t3_ParamLimits

0x2dd5,	// (0x00011cfa) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0001e3f7) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0001e3f7) main_mp2_pane_t

0xacbd,	// (0x00019be2) pec_content_pane_ParamLimits

0xacbd,	// (0x00019be2) pec_content_pane

0xa0cb,	// (0x00018ff0) scroll_pane_cp015

0xaccf,	// (0x00019bf4) pec_attribute_pane_ParamLimits

0xaccf,	// (0x00019bf4) pec_attribute_pane

0x2de7,	// (0x00011d0c) pec_content_pane_g1_ParamLimits

0x2de7,	// (0x00011d0c) pec_content_pane_g1

0xacdf,	// (0x00019c04) pec_content_pane_t1_ParamLimits

0xacdf,	// (0x00019c04) pec_content_pane_t1

0xacf1,	// (0x00019c16) pec_content_pane_t2_ParamLimits

0xacf1,	// (0x00019c16) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0001e3fe) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0001e3fe) pec_content_pane_t

0x2df3,	// (0x00011d18) list_single_graphic_pane_cp01_ParamLimits

0x2df3,	// (0x00011d18) list_single_graphic_pane_cp01

0x9bf7,	// (0x00018b1c) bg_popup_sub_pane_cp04

0xad03,	// (0x00019c28) popup_mup_playback_window_g1

0xad0f,	// (0x00019c34) popup_mup_playback_window_t1

0xad24,	// (0x00019c49) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0001e403) popup_mup_playback_window_t

0xad5b,	// (0x00019c80) main_image_pane_g1_ParamLimits

0xad5b,	// (0x00019c80) main_image_pane_g1

0xad9e,	// (0x00019cc3) scroll_pane_cp018_ParamLimits

0xad9e,	// (0x00019cc3) scroll_pane_cp018

0xadb6,	// (0x00019cdb) scroll_pane_cp016_ParamLimits

0xadb6,	// (0x00019cdb) scroll_pane_cp016

0x2ec0,	// (0x00011de5) smil2_image_pane_ParamLimits

0x2ec0,	// (0x00011de5) smil2_image_pane

0x2ef0,	// (0x00011e15) smil2_root_pane_ParamLimits

0x2ef0,	// (0x00011e15) smil2_root_pane

0x2f28,	// (0x00011e4d) smil2_text_pane_ParamLimits

0x2f28,	// (0x00011e4d) smil2_text_pane

0x999c,	// (0x000188c1) bg_list_pane_cp06

0xadf2,	// (0x00019d17) grid_radio_pane

0x999c,	// (0x000188c1) bg_popup_window_pane_cp06

0xadfa,	// (0x00019d1f) main_fmradio_pane_t1

0xa6b5,	// (0x000195da) heading_pane_cp04

0xae08,	// (0x00019d2d) main_fmradio_pane_t2

0xbdcd,	// (0x0001acf2) popup_cale_lunar_info_window_g1

0xae16,	// (0x00019d3b) main_fmradio_pane_t3

0xbdd5,	// (0x0001acfa) popup_cale_lunar_info_window_g2

0xae24,	// (0x00019d49) main_fmradio_pane_t4

0x0001,

0xae32,	// (0x00019d57) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x0001e4de) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0001e418) main_fmradio_pane_t

0xae40,	// (0x00019d65) wait_bar_pane_cp03

0xae48,	// (0x00019d6d) cell_fmradio_pane_ParamLimits

0xae48,	// (0x00019d6d) cell_fmradio_pane

0xaca1,	// (0x00019bc6) cell_fmradio_pane_g1_ParamLimits

0xaca1,	// (0x00019bc6) cell_fmradio_pane_g1

0x999c,	// (0x000188c1) grid_highlight_pane_cp011

0xae5b,	// (0x00019d80) poc_content_pane_ParamLimits

0xae5b,	// (0x00019d80) poc_content_pane

0xae6d,	// (0x00019d92) scroll_pane_cp019

0x2fa8,	// (0x00011ecd) popup_call_poc_act_window_ParamLimits

0x2fa8,	// (0x00011ecd) popup_call_poc_act_window

0x2fcc,	// (0x00011ef1) popup_call_poc_inact_window_ParamLimits

0x2fcc,	// (0x00011ef1) popup_call_poc_inact_window

0xf590,	// (0x0001e4b5) bg_popup_call_poc_act_pane_g

0xbd45,	// (0x0001ac6a) bg_popup_call_poc_inact_pane_g1

0xbd4d,	// (0x0001ac72) bg_popup_call_poc_inact_pane_g2

0xae75,	// (0x00019d9a) popup_call_poc_act_window_g2

0xbd55,	// (0x0001ac7a) bg_popup_call_poc_inact_pane_g3

0xbd5d,	// (0x0001ac82) bg_popup_call_poc_inact_pane_g4

0xbd65,	// (0x0001ac8a) bg_popup_call_poc_inact_pane_g5

0xae7d,	// (0x00019da2) popup_call_poc_act_window_t1_ParamLimits

0xae7d,	// (0x00019da2) popup_call_poc_act_window_t1

0xaea5,	// (0x00019dca) popup_call_poc_act_window_t2_ParamLimits

0xaea5,	// (0x00019dca) popup_call_poc_act_window_t2

0xaecd,	// (0x00019df2) popup_call_poc_act_window_t3_ParamLimits

0xaecd,	// (0x00019df2) popup_call_poc_act_window_t3

0xaef5,	// (0x00019e1a) popup_call_poc_act_window_t4_ParamLimits

0xaef5,	// (0x00019e1a) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0001e423) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0001e423) popup_call_poc_act_window_t

0xbd6d,	// (0x0001ac92) bg_popup_call_poc_inact_pane_g6

0xbd75,	// (0x0001ac9a) bg_popup_call_poc_inact_pane_g7

0xbd7d,	// (0x0001aca2) bg_popup_call_poc_inact_pane_g8

0xaf07,	// (0x00019e2c) popup_call_poc_inact_window_g2

0xbd85,	// (0x0001acaa) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x0001e4a2) bg_popup_call_poc_inact_pane_g

0xaf0f,	// (0x00019e34) popup_call_poc_inact_window_t1_ParamLimits

0xaf0f,	// (0x00019e34) popup_call_poc_inact_window_t1

0xaf24,	// (0x00019e49) popup_call_poc_inact_window_t2_ParamLimits

0xaf24,	// (0x00019e49) popup_call_poc_inact_window_t2

0xaf39,	// (0x00019e5e) popup_call_poc_inact_window_t3_ParamLimits

0xaf39,	// (0x00019e5e) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0001e42c) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0001e42c) popup_call_poc_inact_window_t

0xbf5e,	// (0x0001ae83) context_pane_ParamLimits

0x37fb,	// (0x00012720) signal_pane_ParamLimits

0x9f18,	// (0x00018e3d) main_call2_pane

0xbf37,	// (0x0001ae5c) popup_phob_thumbnail2_window_ParamLimits

0xbf37,	// (0x0001ae5c) popup_phob_thumbnail2_window

0xac51,	// (0x00019b76) aid_hotspot_pointer_arrow_pane

0xac59,	// (0x00019b7e) aid_hotspot_pointer_hand_pane

0x3315,	// (0x0001223a) phob_pre_status_pane_g5

0x0eef,	// (0x0000fe14) cams_zoom_pane_ParamLimits

0x0efe,	// (0x0000fe23) image_vga_pane_ParamLimits

0x0f18,	// (0x0000fe3d) main_camera_pane_g1_ParamLimits

0x0f2a,	// (0x0000fe4f) main_camera_pane_g2_ParamLimits

0x0f3a,	// (0x0000fe5f) main_camera_pane_g3_ParamLimits

0x0f4a,	// (0x0000fe6f) main_camera_pane_g4_ParamLimits

0x0f5a,	// (0x0000fe7f) main_camera_pane_g5_ParamLimits

0x0f6a,	// (0x0000fe8f) main_camera_pane_g6_ParamLimits

0x0f7c,	// (0x0000fea1) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0001e12b) main_camera_pane_g_ParamLimits

0x0f8c,	// (0x0000feb1) main_camera_pane_t1_ParamLimits

0x0fa2,	// (0x0000fec7) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0001e13c) main_camera_pane_t_ParamLimits

0x9bf7,	// (0x00018b1c) bg_popup_preview_window_pane_cp01_ParamLimits

0x9bf7,	// (0x00018b1c) bg_popup_preview_window_pane_cp01

0xaf4e,	// (0x00019e73) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf4e,	// (0x00019e73) popup_phob_thumbnail2_window_g1

0x999c,	// (0x000188c1) call2_cli_visual_pane

0x3000,	// (0x00011f25) popup_call2_audio_conf_window_ParamLimits

0x3000,	// (0x00011f25) popup_call2_audio_conf_window

0x3020,	// (0x00011f45) popup_call2_audio_first_window_ParamLimits

0x3020,	// (0x00011f45) popup_call2_audio_first_window

0x30b6,	// (0x00011fdb) popup_call2_audio_in_window_ParamLimits

0x30b6,	// (0x00011fdb) popup_call2_audio_in_window

0x30fe,	// (0x00012023) popup_call2_audio_out_window_ParamLimits

0x30fe,	// (0x00012023) popup_call2_audio_out_window

0x3168,	// (0x0001208d) popup_call2_audio_second_window_ParamLimits

0x3168,	// (0x0001208d) popup_call2_audio_second_window

0x31ce,	// (0x000120f3) popup_call2_audio_wait_window_ParamLimits

0x31ce,	// (0x000120f3) popup_call2_audio_wait_window

0x999c,	// (0x000188c1) bg_popup_call2_act_pane_cp03

0x9bd9,	// (0x00018afe) list_conf_pane_cp

0xaf5a,	// (0x00019e7f) popup_call2_audio_conf_window_t1

0xa712,	// (0x00019637) list_single_graphic_popup_conf2_pane_ParamLimits

0xa712,	// (0x00019637) list_single_graphic_popup_conf2_pane

0xa725,	// (0x0001964a) list_highlight_pane_cp04

0xaf68,	// (0x00019e8d) list_single_graphic_popup_conf2_pane_g1

0xa736,	// (0x0001965b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0001e433) list_single_graphic_popup_conf2_pane_g

0xaf72,	// (0x00019e97) list_single_graphic_popup_conf2_pane_t1

0xaf80,	// (0x00019ea5) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf80,	// (0x00019ea5) bg_popup_call2_act_pane_cp01

0xb00a,	// (0x00019f2f) call_type_pane_cp05_ParamLimits

0xb00a,	// (0x00019f2f) call_type_pane_cp05

0xb05e,	// (0x00019f83) popup_call2_audio_second_window_g1_ParamLimits

0xb05e,	// (0x00019f83) popup_call2_audio_second_window_g1

0xb0b2,	// (0x00019fd7) popup_call2_audio_second_window_g2_ParamLimits

0xb0b2,	// (0x00019fd7) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0001e438) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0001e438) popup_call2_audio_second_window_g

0xb117,	// (0x0001a03c) popup_call2_audio_second_window_t1_ParamLimits

0xb117,	// (0x0001a03c) popup_call2_audio_second_window_t1

0xb1d2,	// (0x0001a0f7) popup_call2_audio_second_window_t2_ParamLimits

0xb1d2,	// (0x0001a0f7) popup_call2_audio_second_window_t2

0xb225,	// (0x0001a14a) popup_call2_audio_second_window_t3_ParamLimits

0xb225,	// (0x0001a14a) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0001e43f) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0001e43f) popup_call2_audio_second_window_t

0x999c,	// (0x000188c1) bg_popup_call2_in_pane_cp02

0x99a6,	// (0x000188cb) call_type_pane_cp04

0x99ae,	// (0x000188d3) popup_call2_audio_wait_window_g1

0x99b6,	// (0x000188db) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0001e01a) popup_call2_audio_wait_window_g

0x99be,	// (0x000188e3) popup_call2_audio_wait_window_t3

0xb318,	// (0x0001a23d) bg_popup_call2_act_pane_ParamLimits

0xb318,	// (0x0001a23d) bg_popup_call2_act_pane

0xb3d8,	// (0x0001a2fd) call_type_pane_cp03_ParamLimits

0xb3d8,	// (0x0001a2fd) call_type_pane_cp03

0xb43c,	// (0x0001a361) popup_call2_audio_first_window_g1_ParamLimits

0xb43c,	// (0x0001a361) popup_call2_audio_first_window_g1

0xb4ac,	// (0x0001a3d1) popup_call2_audio_first_window_g2_ParamLimits

0xb4ac,	// (0x0001a3d1) popup_call2_audio_first_window_g2

0xaaf2,	// (0x00019a17) popup_call2_audio_first_window_g3_ParamLimits

0xaaf2,	// (0x00019a17) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0001e448) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0001e448) popup_call2_audio_first_window_g

0xb58a,	// (0x0001a4af) popup_call2_audio_first_window_t1_ParamLimits

0xb58a,	// (0x0001a4af) popup_call2_audio_first_window_t1

0xb68d,	// (0x0001a5b2) popup_call2_audio_first_window_t4_ParamLimits

0xb68d,	// (0x0001a5b2) popup_call2_audio_first_window_t4

0xb770,	// (0x0001a695) popup_call2_audio_first_window_t5_ParamLimits

0xb770,	// (0x0001a695) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0001e453) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0001e453) popup_call2_audio_first_window_t

0x9bef,	// (0x00018b14) bg_popup_call2_act_pane_g1

0xbddd,	// (0x0001ad02) popup_cale_lunar_info_window_t1

0xbdeb,	// (0x0001ad10) popup_cale_lunar_info_window_t2

0xbdf9,	// (0x0001ad1e) popup_cale_lunar_info_window_t3

0x999c,	// (0x000188c1) bg_popup_call2_bubble_pane

0xb871,	// (0x0001a796) bg_popup_call2_in_pane_cp01_ParamLimits

0xb871,	// (0x0001a796) bg_popup_call2_in_pane_cp01

0x9678,	// (0x0001859d) call_type_pane_cp02

0xb8b9,	// (0x0001a7de) popup_call2_audio_out_window_g1_ParamLimits

0xb8b9,	// (0x0001a7de) popup_call2_audio_out_window_g1

0xb8e5,	// (0x0001a80a) popup_call2_audio_out_window_g2_ParamLimits

0xb8e5,	// (0x0001a80a) popup_call2_audio_out_window_g2

0xb90d,	// (0x0001a832) popup_call2_audio_out_window_g3_ParamLimits

0xb90d,	// (0x0001a832) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0001e45c) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0001e45c) popup_call2_audio_out_window_g

0xb948,	// (0x0001a86d) popup_call2_audio_out_window_t1_ParamLimits

0xb948,	// (0x0001a86d) popup_call2_audio_out_window_t1

0xb9a7,	// (0x0001a8cc) popup_call2_audio_out_window_t2_ParamLimits

0xb9a7,	// (0x0001a8cc) popup_call2_audio_out_window_t2

0xb9fb,	// (0x0001a920) popup_call2_audio_out_window_t3_ParamLimits

0xb9fb,	// (0x0001a920) popup_call2_audio_out_window_t3

0xba11,	// (0x0001a936) popup_call2_audio_out_window_t4_ParamLimits

0xba11,	// (0x0001a936) popup_call2_audio_out_window_t4

0xba27,	// (0x0001a94c) popup_call2_audio_out_window_t5_ParamLimits

0xba27,	// (0x0001a94c) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0001e465) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0001e465) popup_call2_audio_out_window_t

0xba8b,	// (0x0001a9b0) bg_popup_call2_in_pane_ParamLimits

0xba8b,	// (0x0001a9b0) bg_popup_call2_in_pane

0xbae7,	// (0x0001aa0c) popup_call2_audio_in_window_g1_ParamLimits

0xbae7,	// (0x0001aa0c) popup_call2_audio_in_window_g1

0xbb1f,	// (0x0001aa44) popup_call2_audio_in_window_g2_ParamLimits

0xbb1f,	// (0x0001aa44) popup_call2_audio_in_window_g2

0xbb57,	// (0x0001aa7c) popup_call2_audio_in_window_g3_ParamLimits

0xbb57,	// (0x0001aa7c) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0001e472) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0001e472) popup_call2_audio_in_window_g

0xbbaf,	// (0x0001aad4) popup_call2_audio_in_window_t1_ParamLimits

0xbbaf,	// (0x0001aad4) popup_call2_audio_in_window_t1

0xbc2f,	// (0x0001ab54) popup_call2_audio_in_window_t2_ParamLimits

0xbc2f,	// (0x0001ab54) popup_call2_audio_in_window_t2

0xbcaf,	// (0x0001abd4) popup_call2_audio_in_window_t3_ParamLimits

0xbcaf,	// (0x0001abd4) popup_call2_audio_in_window_t3

0xbcc9,	// (0x0001abee) popup_call2_audio_in_window_t4_ParamLimits

0xbcc9,	// (0x0001abee) popup_call2_audio_in_window_t4

0xbcdb,	// (0x0001ac00) popup_call2_audio_in_window_t5_ParamLimits

0xbcdb,	// (0x0001ac00) popup_call2_audio_in_window_t5

0xbcf0,	// (0x0001ac15) popup_call2_audio_in_window_t6_ParamLimits

0xbcf0,	// (0x0001ac15) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0001e47b) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0001e47b) popup_call2_audio_in_window_t

0x9bef,	// (0x00018b14) bg_popup_call2_in_pane_g1

0xbe07,	// (0x0001ad2c) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x0001e4e3) popup_cale_lunar_info_window_t

0x9bf7,	// (0x00018b1c) bg_popup_call2_rect_pane_ParamLimits

0x9bf7,	// (0x00018b1c) bg_popup_call2_rect_pane

0x999c,	// (0x000188c1) call2_cli_visual_graphic_pane

0x999c,	// (0x000188c1) call2_cli_visual_text_pane

0xbffe,	// (0x0001af23) smil_status_volume_pane_g3

0x0002,

0x9d57,	// (0x00018c7c) call2_cli_visual_graphic_pane_g1

0x9d57,	// (0x00018c7c) call2_cli_visual_graphic_pane_g2

0x9d57,	// (0x00018c7c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0001e488) call2_cli_visual_graphic_pane_g

0xbd05,	// (0x0001ac2a) bg_popup_call2_rect_pane_g1

0x9dec,	// (0x00018d11) bg_popup_call2_rect_pane_g2

0xbd0d,	// (0x0001ac32) bg_popup_call2_rect_pane_g3

0xbd15,	// (0x0001ac3a) bg_popup_call2_rect_pane_g4

0xbd1d,	// (0x0001ac42) bg_popup_call2_rect_pane_g5

0xbd25,	// (0x0001ac4a) bg_popup_call2_rect_pane_g6

0xbd2d,	// (0x0001ac52) bg_popup_call2_rect_pane_g7

0xbd35,	// (0x0001ac5a) bg_popup_call2_rect_pane_g8

0xbd3d,	// (0x0001ac62) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0001e48f) bg_popup_call2_rect_pane_g

0xbd45,	// (0x0001ac6a) bg_popup_call2_bubble_pane_g1

0xbd4d,	// (0x0001ac72) bg_popup_call2_bubble_pane_g2

0xbd55,	// (0x0001ac7a) bg_popup_call2_bubble_pane_g3

0xbd5d,	// (0x0001ac82) bg_popup_call2_bubble_pane_g4

0xbd65,	// (0x0001ac8a) bg_popup_call2_bubble_pane_g5

0xbd6d,	// (0x0001ac92) bg_popup_call2_bubble_pane_g6

0xbd75,	// (0x0001ac9a) bg_popup_call2_bubble_pane_g7

0xbd7d,	// (0x0001aca2) bg_popup_call2_bubble_pane_g8

0xbd85,	// (0x0001acaa) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0001e4a2) bg_popup_call2_bubble_pane_g

0x0934,	// (0x0000f859) aid_cale_week_size_cell_pane

0x0fb8,	// (0x0000fedd) aid_cams_cif_uncrop_pane_ParamLimits

0x0fb8,	// (0x0000fedd) aid_cams_cif_uncrop_pane

0x1168,	// (0x0001008d) aid_cams_size_cell_ParamLimits

0x1168,	// (0x0001008d) aid_cams_size_cell

0x117c,	// (0x000100a1) grid_cams_pane_ParamLimits

0x1196,	// (0x000100bb) linegrid_cams_pane_ParamLimits

0x1393,	// (0x000102b8) call_video_pane_t1

0x13b1,	// (0x000102d6) call_video_pane_t2

0x0001,

0xf26a,	// (0x0001e18f) call_video_pane_t

0x17df,	// (0x00010704) aid_cale_month_size_cell_pane_ParamLimits

0x17df,	// (0x00010704) aid_cale_month_size_cell_pane

0xf607,	// (0x0001e52c) smil_status_volume_pane_g

0xc00b,	// (0x0001af30) volume_smil_pane_ParamLimits

0x951d,	// (0x00018442) aid_popup2_width_pane

0x088e,	// (0x0000f7b3) cell_qdial_pane_g4_ParamLimits

0x088e,	// (0x0000f7b3) cell_qdial_pane_g4

0x2674,	// (0x00011599) aid_blid_cardinal_pane_ParamLimits

0x2680,	// (0x000115a5) aid_blid_destination_pane_ParamLimits

0x2680,	// (0x000115a5) aid_blid_destination_pane

0x9bf7,	// (0x00018b1c) bg_popup_call_poc_act_pane_ParamLimits

0x9bf7,	// (0x00018b1c) bg_popup_call_poc_act_pane

0x9bf7,	// (0x00018b1c) bg_popup_call_poc_inact_pane_ParamLimits

0x9bf7,	// (0x00018b1c) bg_popup_call_poc_inact_pane

0xbd8d,	// (0x0001acb2) bg_popup_call_poc_act_pane_g1

0xbd95,	// (0x0001acba) bg_popup_call_poc_act_pane_g2

0xbd9d,	// (0x0001acc2) bg_popup_call_poc_act_pane_g3

0xbd5d,	// (0x0001ac82) bg_popup_call_poc_act_pane_g4

0xbd65,	// (0x0001ac8a) bg_popup_call_poc_act_pane_g5

0xbda5,	// (0x0001acca) bg_popup_call_poc_act_pane_g6

0xbd75,	// (0x0001ac9a) bg_popup_call_poc_act_pane_g7

0xbdad,	// (0x0001acd2) bg_popup_call_poc_act_pane_g8

0x999c,	// (0x000188c1) main_usb_pane

0xbf12,	// (0x0001ae37) popup_cale_lunar_info_window

0x168b,	// (0x000105b0) im_reading_pane_t1_ParamLimits

0xa023,	// (0x00018f48) list_im_pane_ParamLimits

0xa034,	// (0x00018f59) scroll_pane_cp07_ParamLimits

0x999c,	// (0x000188c1) grid_highlight_pane_cp012

0x9bf7,	// (0x00018b1c) mup_scale_pane_ParamLimits

0xaca1,	// (0x00019bc6) main_usb_pane_g1_ParamLimits

0xaca1,	// (0x00019bc6) main_usb_pane_g1

0x322a,	// (0x0001214f) main_usb_pane_g2_ParamLimits

0x322a,	// (0x0001214f) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x0001e4cc) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x0001e4cc) main_usb_pane_g

0x3240,	// (0x00012165) main_usb_pane_t1_ParamLimits

0x3240,	// (0x00012165) main_usb_pane_t1

0x3252,	// (0x00012177) main_usb_pane_t2_ParamLimits

0x3252,	// (0x00012177) main_usb_pane_t2

0x3264,	// (0x00012189) main_usb_pane_t3_ParamLimits

0x3264,	// (0x00012189) main_usb_pane_t3

0x3276,	// (0x0001219b) main_usb_pane_t4_ParamLimits

0x3276,	// (0x0001219b) main_usb_pane_t4

0x3288,	// (0x000121ad) main_usb_pane_t5_ParamLimits

0x3288,	// (0x000121ad) main_usb_pane_t5

0x329a,	// (0x000121bf) main_usb_pane_t6_ParamLimits

0x329a,	// (0x000121bf) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x0001e4d1) main_usb_pane_t_ParamLimits

0x2623,	// (0x00011548) aid_text_placing

0x262c,	// (0x00011551) main_location2_pane_t1_ParamLimits

0x263e,	// (0x00011563) main_location2_pane_t2_ParamLimits

0x2650,	// (0x00011575) main_location2_pane_t3_ParamLimits

0x2662,	// (0x00011587) main_location2_pane_t4_ParamLimits

0x2662,	// (0x00011587) main_location2_pane_t4

0xf3cb,	// (0x0001e2f0) main_location2_pane_t_ParamLimits

0x9c33,	// (0x00018b58) find_pinb_pane_g2_ParamLimits

0x9c33,	// (0x00018b58) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0001e040) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0001e040) find_pinb_pane_g

0x9c3f,	// (0x00018b64) find_pinb_pane_t1_ParamLimits

0x9c51,	// (0x00018b76) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0001e045) find_pinb_pane_t_ParamLimits

0x999c,	// (0x000188c1) main_call3_pane

0x1cca,	// (0x00010bef) cale_month_day_heading_pane_t1_ParamLimits

0x1d50,	// (0x00010c75) cale_month_day_heading_pane_t2_ParamLimits

0x1dc9,	// (0x00010cee) cale_month_day_heading_pane_t3_ParamLimits

0x1e42,	// (0x00010d67) cale_month_day_heading_pane_t4_ParamLimits

0x1ec3,	// (0x00010de8) cale_month_day_heading_pane_t5_ParamLimits

0x1f4c,	// (0x00010e71) cale_month_day_heading_pane_t6_ParamLimits

0x1fd5,	// (0x00010efa) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0001e1c7) cale_month_day_heading_pane_t_ParamLimits

0xa28a,	// (0x000191af) smil_status_volume_pane

0x2d25,	// (0x00011c4a) postcard_address_pane_ParamLimits

0x2d25,	// (0x00011c4a) postcard_address_pane

0x2d37,	// (0x00011c5c) postcard_message_pane_ParamLimits

0x2d37,	// (0x00011c5c) postcard_message_pane

0x3208,	// (0x0001212d) call2_cli_visual_pane_t1_ParamLimits

0x3208,	// (0x0001212d) call2_cli_visual_pane_t1

0x3a28,	// (0x0001294d) postcard_message_pane_t1_ParamLimits

0x3a28,	// (0x0001294d) postcard_message_pane_t1

0x3a11,	// (0x00012936) postcard_address_pane_t1_ParamLimits

0x3a11,	// (0x00012936) postcard_address_pane_t1

0x39fd,	// (0x00012922) popup_call3_audio_in_window_ParamLimits

0x39fd,	// (0x00012922) popup_call3_audio_in_window

0x3888,	// (0x000127ad) bg_popup_call3_in_pane_ParamLimits

0x3888,	// (0x000127ad) bg_popup_call3_in_pane

0x38fe,	// (0x00012823) popup_call3_audio_in_window_g1_ParamLimits

0x38fe,	// (0x00012823) popup_call3_audio_in_window_g1

0x391e,	// (0x00012843) popup_call3_audio_in_window_g2_ParamLimits

0x391e,	// (0x00012843) popup_call3_audio_in_window_g2

0x393e,	// (0x00012863) popup_call3_audio_in_window_g3_ParamLimits

0x393e,	// (0x00012863) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x0001e533) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x0001e533) popup_call3_audio_in_window_g

0x396f,	// (0x00012894) popup_call3_audio_in_window_t1_ParamLimits

0x396f,	// (0x00012894) popup_call3_audio_in_window_t1

0x39ad,	// (0x000128d2) popup_call3_audio_in_window_t2_ParamLimits

0x39ad,	// (0x000128d2) popup_call3_audio_in_window_t2

0x39eb,	// (0x00012910) popup_call3_audio_in_window_t3_ParamLimits

0x39eb,	// (0x00012910) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x0001e53c) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x0001e53c) popup_call3_audio_in_window_t

0x9f18,	// (0x00018e3d) bg_popup_call3_rect_pane

0xbd05,	// (0x0001ac2a) bg_popup_call3_rect_pane_g1

0x9dec,	// (0x00018d11) bg_popup_call3_rect_pane_g2

0xbd0d,	// (0x0001ac32) bg_popup_call3_rect_pane_g3

0xbd15,	// (0x0001ac3a) bg_popup_call3_rect_pane_g4

0xbd1d,	// (0x0001ac42) bg_popup_call3_rect_pane_g5

0xbd25,	// (0x0001ac4a) bg_popup_call3_rect_pane_g6

0xbd2d,	// (0x0001ac52) bg_popup_call3_rect_pane_g7

0x2964,	// (0x00011889) mup_visualizer_osc_pane

0xab00,	// (0x00019a25) mup_visualizer_spec_pane

0x38b8,	// (0x000127dd) call3_video_qcif_pane_ParamLimits

0x38b8,	// (0x000127dd) call3_video_qcif_pane

0x38cb,	// (0x000127f0) call3_video_qcif_uncrop_pane_ParamLimits

0x38cb,	// (0x000127f0) call3_video_qcif_uncrop_pane

0x38d9,	// (0x000127fe) call3_video_subqcif_pane_ParamLimits

0x38d9,	// (0x000127fe) call3_video_subqcif_pane

0x38ed,	// (0x00012812) call3_video_subqcif_uncrop_pane_ParamLimits

0x38ed,	// (0x00012812) call3_video_subqcif_uncrop_pane

0x395e,	// (0x00012883) popup_call3_audio_in_window_g4_ParamLimits

0x395e,	// (0x00012883) popup_call3_audio_in_window_g4

0x3877,	// (0x0001279c) mup_spec_half_pane

0x3880,	// (0x000127a5) mup_spec_half_pane_cp

0xbfbe,	// (0x0001aee3) mup_osc_middle_pane

0xbfc7,	// (0x0001aeec) mup_visualizer_osc_pane_g1

0x3857,	// (0x0001277c) mup_spec_bar_pane_ParamLimits

0x3857,	// (0x0001277c) mup_spec_bar_pane

0xbfab,	// (0x0001aed0) mup_spec_bar_pane_g1

0xbfb5,	// (0x0001aeda) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0001e527) mup_spec_bar_pane_g

0x0934,	// (0x0000f859) aid_cale_week_size_cell_pane_ParamLimits

0x094e,	// (0x0000f873) bg_cale_heading_pane_ParamLimits

0x9e71,	// (0x00018d96) bg_cale_pane_cp01_ParamLimits

0x0966,	// (0x0000f88b) cale_week_corner_pane_ParamLimits

0x0985,	// (0x0000f8aa) cale_week_day_heading_pane_ParamLimits

0x09a2,	// (0x0000f8c7) cale_week_scroll_pane_g1_ParamLimits

0x09b5,	// (0x0000f8da) cale_week_scroll_pane_g2_ParamLimits

0x09cd,	// (0x0000f8f2) cale_week_scroll_pane_g3_ParamLimits

0x09e5,	// (0x0000f90a) cale_week_scroll_pane_g4_ParamLimits

0x09fd,	// (0x0000f922) cale_week_scroll_pane_g5_ParamLimits

0x0a1d,	// (0x0000f942) cale_week_scroll_pane_g6_ParamLimits

0x0a3d,	// (0x0000f962) cale_week_scroll_pane_g7_ParamLimits

0x0a5d,	// (0x0000f982) cale_week_scroll_pane_g8_ParamLimits

0x0a81,	// (0x0000f9a6) cale_week_scroll_pane_g9_ParamLimits

0x0a99,	// (0x0000f9be) cale_week_scroll_pane_g10_ParamLimits

0x0ab1,	// (0x0000f9d6) cale_week_scroll_pane_g11_ParamLimits

0x0ac9,	// (0x0000f9ee) cale_week_scroll_pane_g12_ParamLimits

0x0ae1,	// (0x0000fa06) cale_week_scroll_pane_g13_ParamLimits

0x0ae1,	// (0x0000fa06) cale_week_scroll_pane_g14_ParamLimits

0x0ae1,	// (0x0000fa06) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0001e0d1) cale_week_scroll_pane_g_ParamLimits

0x0b1d,	// (0x0000fa42) cale_week_time_pane_ParamLimits

0x0b41,	// (0x0000fa66) grid_cale_week_pane_ParamLimits

0x9e8e,	// (0x00018db3) listscroll_cale_week_pane_t1

0x9ea0,	// (0x00018dc5) scroll_pane_cp08_ParamLimits

0x183f,	// (0x00010764) cale_month_corner_pane_ParamLimits

0xa254,	// (0x00019179) cale_month_pane_t1

0x1c5d,	// (0x00010b82) cale_month_week_pane_ParamLimits

0x247f,	// (0x000113a4) popup_call_status_window_g1_ParamLimits

0x2493,	// (0x000113b8) popup_call_status_window_g2_ParamLimits

0x24a7,	// (0x000113cc) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0001e277) popup_call_status_window_g_ParamLimits

0xa632,	// (0x00019557) aid_call2_pane

0x2bd2,	// (0x00011af7) msg_header_pane_g1

0x2d25,	// (0x00011c4a) postcard_address2_pane_ParamLimits

0x2d25,	// (0x00011c4a) postcard_address2_pane

0x2d37,	// (0x00011c5c) postcard_message2_pane_ParamLimits

0x2d37,	// (0x00011c5c) postcard_message2_pane

0x3809,	// (0x0001272e) message2_row_pane_ParamLimits

0x3809,	// (0x0001272e) message2_row_pane

0x3825,	// (0x0001274a) address2_row_pane_ParamLimits

0x3825,	// (0x0001274a) address2_row_pane

0xbf79,	// (0x0001ae9e) postcard_message2_row_pane_g1

0xbf81,	// (0x0001aea6) postcard_message2_row_pane_t1

0xbf79,	// (0x0001ae9e) address2_row_pane_g1

0xbf81,	// (0x0001aea6) address2_row_pane_t1

0x0e71,	// (0x0000fd96) aid_size_cell_vorec

0x999c,	// (0x000188c1) main_rss_pane

0x3838,	// (0x0001275d) rss_list_single_pane_ParamLimits

0x3838,	// (0x0001275d) rss_list_single_pane

0xbf8f,	// (0x0001aeb4) rss_list_single_pane_t1

0xbf9d,	// (0x0001aec2) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x0001e522) rss_list_single_pane_t

0x999c,	// (0x000188c1) main_camera2_pane

0x999c,	// (0x000188c1) main_video2_pane

0x3aa1,	// (0x000129c6) cams_zoom_pane_cp2_ParamLimits

0x3aa1,	// (0x000129c6) cams_zoom_pane_cp2

0x3ac1,	// (0x000129e6) image2_vga_pane_ParamLimits

0x3ac1,	// (0x000129e6) image2_vga_pane

0x3b12,	// (0x00012a37) main_camera2_pane_g1_ParamLimits

0x3b12,	// (0x00012a37) main_camera2_pane_g1

0x3b32,	// (0x00012a57) main_camera2_pane_g2_ParamLimits

0x3b32,	// (0x00012a57) main_camera2_pane_g2

0x3b52,	// (0x00012a77) main_camera2_pane_g3_ParamLimits

0x3b52,	// (0x00012a77) main_camera2_pane_g3

0x3b72,	// (0x00012a97) main_camera2_pane_g4_ParamLimits

0x3b72,	// (0x00012a97) main_camera2_pane_g4

0x3b92,	// (0x00012ab7) main_camera2_pane_g5_ParamLimits

0x3b92,	// (0x00012ab7) main_camera2_pane_g5

0x3bb2,	// (0x00012ad7) main_camera2_pane_g6_ParamLimits

0x3bb2,	// (0x00012ad7) main_camera2_pane_g6

0x3bd2,	// (0x00012af7) main_camera2_pane_g7_ParamLimits

0x3bd2,	// (0x00012af7) main_camera2_pane_g7

0x3bf2,	// (0x00012b17) main_camera2_pane_g8_ParamLimits

0x3bf2,	// (0x00012b17) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x0001e543) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x0001e543) main_camera2_pane_g

0x3c32,	// (0x00012b57) main_camera2_pane_t1_ParamLimits

0x3c32,	// (0x00012b57) main_camera2_pane_t1

0x3c67,	// (0x00012b8c) main_camera2_pane_t2_ParamLimits

0x3c67,	// (0x00012b8c) main_camera2_pane_t2

0x3c8d,	// (0x00012bb2) main_camera2_pane_t3_ParamLimits

0x3c8d,	// (0x00012bb2) main_camera2_pane_t3

0x3ceb,	// (0x00012c10) main_camera2_pane_t4_ParamLimits

0x3ceb,	// (0x00012c10) main_camera2_pane_t4

0x0006,

0xf631,	// (0x0001e556) main_camera2_pane_t_ParamLimits

0xf631,	// (0x0001e556) main_camera2_pane_t

0x3d7d,	// (0x00012ca2) cams_zoom_pane_cp4_ParamLimits

0x3d7d,	// (0x00012ca2) cams_zoom_pane_cp4

0x3d93,	// (0x00012cb8) image2_cif_pane_ParamLimits

0x3d93,	// (0x00012cb8) image2_cif_pane

0x3dbe,	// (0x00012ce3) image2_subqcif_pane_ParamLimits

0x3dbe,	// (0x00012ce3) image2_subqcif_pane

0x3dd8,	// (0x00012cfd) main_video2_pane_g1_ParamLimits

0x3dd8,	// (0x00012cfd) main_video2_pane_g1

0x3df2,	// (0x00012d17) main_video2_pane_g2_ParamLimits

0x3df2,	// (0x00012d17) main_video2_pane_g2

0x3e08,	// (0x00012d2d) main_video2_pane_g3_ParamLimits

0x3e08,	// (0x00012d2d) main_video2_pane_g3

0x3e1e,	// (0x00012d43) main_video2_pane_g4_ParamLimits

0x3e1e,	// (0x00012d43) main_video2_pane_g4

0x3e34,	// (0x00012d59) main_video2_pane_g5_ParamLimits

0x3e34,	// (0x00012d59) main_video2_pane_g5

0x3e4a,	// (0x00012d6f) main_video2_pane_g6_ParamLimits

0x3e4a,	// (0x00012d6f) main_video2_pane_g6

0x0005,

0xf640,	// (0x0001e565) main_video2_pane_g_ParamLimits

0xf640,	// (0x0001e565) main_video2_pane_g

0x3e64,	// (0x00012d89) main_video2_pane_t1_ParamLimits

0x3e64,	// (0x00012d89) main_video2_pane_t1

0x3e88,	// (0x00012dad) main_video2_pane_t2_ParamLimits

0x3e88,	// (0x00012dad) main_video2_pane_t2

0x3ed6,	// (0x00012dfb) main_video2_pane_t3_ParamLimits

0x3ed6,	// (0x00012dfb) main_video2_pane_t3

0x0002,

0xf64d,	// (0x0001e572) main_video2_pane_t_ParamLimits

0xf64d,	// (0x0001e572) main_video2_pane_t

0x3355,	// (0x0001227a) call_muted_g2

0x0001,

0xf5ef,	// (0x0001e514) call_muted_g

0x999c,	// (0x000188c1) main_mup2_pane

0x3f1a,	// (0x00012e3f) main_mup2_pane_g1_ParamLimits

0x3f1a,	// (0x00012e3f) main_mup2_pane_g1

0x3f26,	// (0x00012e4b) main_mup2_pane_g2_ParamLimits

0x3f26,	// (0x00012e4b) main_mup2_pane_g2

0xc12f,	// (0x0001b054) main_mup_pane_g13_cp1

0xc137,	// (0x0001b05c) mup_volume_pane_cp1

0x3f42,	// (0x00012e67) main_mup2_pane_g4_ParamLimits

0x3f42,	// (0x00012e67) main_mup2_pane_g4

0x3f54,	// (0x00012e79) main_mup2_pane_g5_ParamLimits

0x3f54,	// (0x00012e79) main_mup2_pane_g5

0x3f66,	// (0x00012e8b) main_mup2_pane_g6_ParamLimits

0x3f66,	// (0x00012e8b) main_mup2_pane_g6

0x3f78,	// (0x00012e9d) main_mup2_pane_g7_ParamLimits

0x3f78,	// (0x00012e9d) main_mup2_pane_g7

0x0006,

0xf654,	// (0x0001e579) main_mup2_pane_g_ParamLimits

0xf654,	// (0x0001e579) main_mup2_pane_g

0x3f90,	// (0x00012eb5) main_mup2_pane_t1_ParamLimits

0x3f90,	// (0x00012eb5) main_mup2_pane_t1

0x3fa6,	// (0x00012ecb) main_mup2_pane_t2_ParamLimits

0x3fa6,	// (0x00012ecb) main_mup2_pane_t2

0x3fbc,	// (0x00012ee1) main_mup2_pane_t3_ParamLimits

0x3fbc,	// (0x00012ee1) main_mup2_pane_t3

0x3fd2,	// (0x00012ef7) main_mup2_pane_t4_ParamLimits

0x3fd2,	// (0x00012ef7) main_mup2_pane_t4

0x3fea,	// (0x00012f0f) main_mup2_pane_t5_ParamLimits

0x3fea,	// (0x00012f0f) main_mup2_pane_t5

0x4002,	// (0x00012f27) main_mup2_pane_t6_ParamLimits

0x4002,	// (0x00012f27) main_mup2_pane_t6

0x0005,

0xf663,	// (0x0001e588) main_mup2_pane_t_ParamLimits

0xf663,	// (0x0001e588) main_mup2_pane_t

0x4032,	// (0x00012f57) mup2_visualizer_pane_ParamLimits

0x4032,	// (0x00012f57) mup2_visualizer_pane

0x4060,	// (0x00012f85) mup_progress_pane_cp_ParamLimits

0x4060,	// (0x00012f85) mup_progress_pane_cp

0xc111,	// (0x0001b036) mup_volume_pane_cp_ParamLimits

0xc111,	// (0x0001b036) mup_volume_pane_cp

0x4074,	// (0x00012f99) mup2_visualizer_pane_g1_ParamLimits

0x4074,	// (0x00012f99) mup2_visualizer_pane_g1

0xc050,	// (0x0001af75) mup2_visualizer_pane_g2_ParamLimits

0xc050,	// (0x0001af75) mup2_visualizer_pane_g2

0x408b,	// (0x00012fb0) mup2_visualizer_pane_g3_ParamLimits

0x408b,	// (0x00012fb0) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x0001e595) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x0001e595) mup2_visualizer_pane_g

0xadea,	// (0x00019d0f) aid_size_cell_fmradio

0x3507,	// (0x0001242c) aid_height_parent_landcape

0xa0b2,	// (0x00018fd7) wml_content_pane_cp

0xa0ba,	// (0x00018fdf) wml_tabs_pane

0xa0c3,	// (0x00018fe8) popup_wml_miniature_window

0xa0cb,	// (0x00018ff0) scroll_pane_cp021

0xa0df,	// (0x00019004) wml_content_pane_comp8

0x999c,	// (0x000188c1) bg_popup_sub_pane_cp05

0xc06e,	// (0x0001af93) popup_wml_miniature_window_g1

0xc076,	// (0x0001af9b) wml_miniature_view_pane

0x4097,	// (0x00012fbc) aid_size_wml_view

0x409f,	// (0x00012fc4) wml_miniature_view_pane_g1

0x40a8,	// (0x00012fcd) wml_miniature_view_pane_g2

0x40b1,	// (0x00012fd6) wml_miniature_view_pane_g3

0x40b9,	// (0x00012fde) wml_miniature_view_pane_g4

0x40c1,	// (0x00012fe6) wml_miniature_view_pane_g5

0x40c9,	// (0x00012fee) wml_miniature_view_pane_g6

0x40d1,	// (0x00012ff6) wml_miniature_view_pane_g7

0x40d9,	// (0x00012ffe) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x0001e59c) wml_miniature_view_pane_g

0xc07e,	// (0x0001afa3) background_graphic_ParamLimits

0xc07e,	// (0x0001afa3) background_graphic

0xc08a,	// (0x0001afaf) wml_tabs_2_pane

0xc093,	// (0x0001afb8) wml_tabs_3_pane_ParamLimits

0xc093,	// (0x0001afb8) wml_tabs_3_pane

0xc0a5,	// (0x0001afca) wml_tabs_4_pane_ParamLimits

0xc0a5,	// (0x0001afca) wml_tabs_4_pane

0xc0bb,	// (0x0001afe0) wml_tabs_5_pane_ParamLimits

0xc0bb,	// (0x0001afe0) wml_tabs_5_pane

0xc0d5,	// (0x0001affa) wml_tabs_pane_g2_ParamLimits

0xc0d5,	// (0x0001affa) wml_tabs_pane_g2

0xc0e9,	// (0x0001b00e) wml_tabs_pane_g3_ParamLimits

0xc0e9,	// (0x0001b00e) wml_tabs_pane_g3

0x40e1,	// (0x00013006) wml_tabs_2_active_pane_ParamLimits

0x40e1,	// (0x00013006) wml_tabs_2_active_pane

0x40f5,	// (0x0001301a) wml_tabs_2_passive_pane_ParamLimits

0x40f5,	// (0x0001301a) wml_tabs_2_passive_pane

0x4109,	// (0x0001302e) wml_tabs_3_active_pane_cp_ParamLimits

0x4109,	// (0x0001302e) wml_tabs_3_active_pane_cp

0x411e,	// (0x00013043) wml_tabs_3_passive_pane_ParamLimits

0x411e,	// (0x00013043) wml_tabs_3_passive_pane

0x4131,	// (0x00013056) wml_tabs_3_passive_pane_cp_ParamLimits

0x4131,	// (0x00013056) wml_tabs_3_passive_pane_cp

0x4148,	// (0x0001306d) tabs_4_active_pane

0x4150,	// (0x00013075) tabs_4_passive_pane

0x415a,	// (0x0001307f) tabs_4_passive_pane_cp

0x4162,	// (0x00013087) tabs_4_passive_pane_cp2

0x3222,	// (0x00012147) aid_height_text

0x293a,	// (0x0001185f) mup_volume_cont_pane_ParamLimits

0x293a,	// (0x0001185f) mup_volume_cont_pane

0x0515,	// (0x0000f43a) aid_size_cell_pinb

0x051f,	// (0x0000f444) aid_size_list_pinb

0x404c,	// (0x00012f71) mup2_volume_cont_pane_ParamLimits

0x404c,	// (0x00012f71) mup2_volume_cont_pane

0xc0fd,	// (0x0001b022) mup2_volume_cont_pane_g1_ParamLimits

0xc0fd,	// (0x0001b022) mup2_volume_cont_pane_g1

0x01d8,	// (0x0000f0fd) aid_size_cell_touch_ParamLimits

0x01d8,	// (0x0000f0fd) aid_size_cell_touch

0x0405,	// (0x0000f32a) touch_pane_ParamLimits

0x0405,	// (0x0000f32a) touch_pane

0x950b,	// (0x00018430) main_rss2_pane

0xc13f,	// (0x0001b064) listscroll_rss2_pane

0xc148,	// (0x0001b06d) rss2_navigation_pane

0xc150,	// (0x0001b075) list_rss2_pane

0xa7e8,	// (0x0001970d) scroll_pane_cp22

0xc158,	// (0x0001b07d) rss2_navigation_pane_g1

0xc161,	// (0x0001b086) rss2_navigation_pane_g2

0xc169,	// (0x0001b08e) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x0001e5ad) rss2_navigation_pane_g

0xc171,	// (0x0001b096) rss2_navigation_pane_t1

0x416c,	// (0x00013091) rss2_list_single_pane_ParamLimits

0x416c,	// (0x00013091) rss2_list_single_pane

0xc17f,	// (0x0001b0a4) rss2_list_single_pane_t2

0xc18d,	// (0x0001b0b2) rss2_list_single_pane_t3_ParamLimits

0xc18d,	// (0x0001b0b2) rss2_list_single_pane_t3

0xc1aa,	// (0x0001b0cf) rss2_list_single_pane_t4

0x2289,	// (0x000111ae) smil_status_pane_g1

0x957b,	// (0x000184a0) main_image2_pane_ParamLimits

0x957b,	// (0x000184a0) main_image2_pane

0x3c12,	// (0x00012b37) main_camera2_pane_g9_ParamLimits

0x3c12,	// (0x00012b37) main_camera2_pane_g9

0x3d40,	// (0x00012c65) main_camera2_pane_t5_ParamLimits

0x3d40,	// (0x00012c65) main_camera2_pane_t5

0xc020,	// (0x0001af45) main_camera2_pane_t6_ParamLimits

0xc020,	// (0x0001af45) main_camera2_pane_t6

0x4181,	// (0x000130a6) main_image2_pane_g1_ParamLimits

0x4181,	// (0x000130a6) main_image2_pane_g1

0x2f5e,	// (0x00011e83) smil2_video_pane_ParamLimits

0x2f5e,	// (0x00011e83) smil2_video_pane

0x9529,	// (0x0001844e) aid_zoom_text_primary_cp

0x9571,	// (0x00018496) popup_preview_fixed_window

0xa01b,	// (0x00018f40) im_reading_pane_g1

0x3a89,	// (0x000129ae) cams2_bc_adjust_pane_cp_ParamLimits

0x3a89,	// (0x000129ae) cams2_bc_adjust_pane_cp

0x3d6f,	// (0x00012c94) cams2_bc_adjust_pane_ParamLimits

0x3d6f,	// (0x00012c94) cams2_bc_adjust_pane

0xc1b8,	// (0x0001b0dd) cams2_bc_adjust_pane_g1

0xc1c0,	// (0x0001b0e5) cams2_slider_pane

0xc1c9,	// (0x0001b0ee) cams2_slider_pane_g1

0xc1d2,	// (0x0001b0f7) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x0001e5b4) cams2_slider_pane_g

0x060d,	// (0x0000f532) calc_display_pane_ParamLimits

0x0632,	// (0x0000f557) calc_paper_pane_ParamLimits

0x0655,	// (0x0000f57a) grid_calc_pane_ParamLimits

0xa698,	// (0x000195bd) popup_clock_digital_window_t1_ParamLimits

0xad87,	// (0x00019cac) main_image_pane_t1

0x05ef,	// (0x0000f514) aid_size_cell_calc_ParamLimits

0x05ef,	// (0x0000f514) aid_size_cell_calc

0x354d,	// (0x00012472) popup_blid_sat_info2_window_ParamLimits

0x354d,	// (0x00012472) popup_blid_sat_info2_window

0xc1f4,	// (0x0001b119) aid_size_cell_blid

0xc1fc,	// (0x0001b121) bg_popup_window_pane_cp07

0xc21f,	// (0x0001b144) grid_popup_blid_pane

0xc229,	// (0x0001b14e) heading_pane_cp05_ParamLimits

0xc229,	// (0x0001b14e) heading_pane_cp05

0xc2f3,	// (0x0001b218) cell_popup_blid_pane_ParamLimits

0xc2f3,	// (0x0001b218) cell_popup_blid_pane

0xc317,	// (0x0001b23c) cell_popup_blid_pane_g1

0xc31f,	// (0x0001b244) cell_popup_blid_pane_t1

0x401c,	// (0x00012f41) mup2_indicator_pane_ParamLimits

0x401c,	// (0x00012f41) mup2_indicator_pane

0x9f18,	// (0x00018e3d) mup2_visualizer_osc_pane

0xc05c,	// (0x0001af81) mup2_visualizer_spec_pane_ParamLimits

0xc05c,	// (0x0001af81) mup2_visualizer_spec_pane

0x4197,	// (0x000130bc) mup2_spec_half_pane

0x41a0,	// (0x000130c5) mup2_spec_half_pane_cp

0x41a8,	// (0x000130cd) mup2_spec_bar_pane_ParamLimits

0x41a8,	// (0x000130cd) mup2_spec_bar_pane

0xbfab,	// (0x0001aed0) mup2_spec_bar_pane_g1

0xbfb5,	// (0x0001aeda) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0001e527) mup2_spec_bar_pane_g

0x41c8,	// (0x000130ed) mup2_osc_middle_pane

0xbfc7,	// (0x0001aeec) mup2_visualizer_osc_pane_g1

0x95a9,	// (0x000184ce) popup_number_entry_window_t1_ParamLimits

0x95bc,	// (0x000184e1) popup_number_entry_window_t2_ParamLimits

0x95ce,	// (0x000184f3) popup_number_entry_window_t3_ParamLimits

0x0457,	// (0x0000f37c) popup_number_entry_window_t5_ParamLimits

0x0457,	// (0x0000f37c) popup_number_entry_window_t5

0xf0c6,	// (0x0001dfeb) popup_number_entry_window_t_ParamLimits

0x95e0,	// (0x00018505) text_title_cp2_ParamLimits

0xac61,	// (0x00019b86) aid_hotspot_pointer_text2_pane

0xac87,	// (0x00019bac) main_viewer_pane_g9_ParamLimits

0xac87,	// (0x00019bac) main_viewer_pane_g9

0xa254,	// (0x00019179) cale_month_pane_t1_ParamLimits

0xa2bf,	// (0x000191e4) bg_cale_pane_ParamLimits

0xa2d7,	// (0x000191fc) list_cale_pane_ParamLimits

0xa2e8,	// (0x0001920d) listscroll_cale_day_pane_t1

0xa2fa,	// (0x0001921f) scroll_pane_cp09_ParamLimits

0x296c,	// (0x00011891) main_mup_eq_pane_t1_ParamLimits

0x296c,	// (0x00011891) main_mup_eq_pane_t1

0x2986,	// (0x000118ab) main_mup_eq_pane_t2_ParamLimits

0x2986,	// (0x000118ab) main_mup_eq_pane_t2

0x29a0,	// (0x000118c5) main_mup_eq_pane_t3_ParamLimits

0x29a0,	// (0x000118c5) main_mup_eq_pane_t3

0x29bc,	// (0x000118e1) main_mup_eq_pane_t4_ParamLimits

0x29bc,	// (0x000118e1) main_mup_eq_pane_t4

0x29d8,	// (0x000118fd) main_mup_eq_pane_t5_ParamLimits

0x29d8,	// (0x000118fd) main_mup_eq_pane_t5

0x29f4,	// (0x00011919) main_mup_eq_pane_t6_ParamLimits

0x29f4,	// (0x00011919) main_mup_eq_pane_t6

0x2a08,	// (0x0001192d) main_mup_eq_pane_t7_ParamLimits

0x2a08,	// (0x0001192d) main_mup_eq_pane_t7

0x2a1c,	// (0x00011941) main_mup_eq_pane_t8_ParamLimits

0x2a1c,	// (0x00011941) main_mup_eq_pane_t8

0x2a30,	// (0x00011955) main_mup_eq_pane_t9_ParamLimits

0x2a30,	// (0x00011955) main_mup_eq_pane_t9

0x2a4a,	// (0x0001196f) main_mup_eq_pane_t10_ParamLimits

0x2a4a,	// (0x0001196f) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0001e376) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0001e376) main_mup_eq_pane_t

0x2af9,	// (0x00011a1e) mup_equalizer_pane_cp5_ParamLimits

0x2b0d,	// (0x00011a32) mup_equalizer_pane_cp6_ParamLimits

0x2b21,	// (0x00011a46) mup_equalizer_pane_cp7_ParamLimits

0x950b,	// (0x00018430) main_gallery_pane

0xbfd0,	// (0x0001aef5) smil2_volume_pane

0xbfd8,	// (0x0001aefd) smil_status_volume_pane_g1_ParamLimits

0xbfeb,	// (0x0001af10) smil_status_volume_pane_g2_ParamLimits

0xbffe,	// (0x0001af23) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x0001e52c) smil_status_volume_pane_g_ParamLimits

0xc1fc,	// (0x0001b121) bg_popup_window_pane_cp07_ParamLimits

0xc20a,	// (0x0001b12f) blid_firmament_pane

0x41d1,	// (0x000130f6) aid_size_cell_gallery_ParamLimits

0x41d1,	// (0x000130f6) aid_size_cell_gallery

0x41e7,	// (0x0001310c) grid_gallery_pane_ParamLimits

0x41e7,	// (0x0001310c) grid_gallery_pane

0x4200,	// (0x00013125) cell_gallery_pane_ParamLimits

0x4200,	// (0x00013125) cell_gallery_pane

0xc32d,	// (0x0001b252) bg_cell_gallery_focus_pane_ParamLimits

0xc32d,	// (0x0001b252) bg_cell_gallery_focus_pane

0xc33f,	// (0x0001b264) cell_gallery_pane_g1_ParamLimits

0xc33f,	// (0x0001b264) cell_gallery_pane_g1

0x4249,	// (0x0001316e) cell_gallery_pane_g2_ParamLimits

0x4249,	// (0x0001316e) cell_gallery_pane_g2

0x4256,	// (0x0001317b) cell_gallery_pane_g3_ParamLimits

0x4256,	// (0x0001317b) cell_gallery_pane_g3

0xc34b,	// (0x0001b270) cell_gallery_pane_g4_ParamLimits

0xc34b,	// (0x0001b270) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x0001e5da) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x0001e5da) cell_gallery_pane_g

0xc357,	// (0x0001b27c) bg_cell_gallery_focus_pane_g1

0xc35f,	// (0x0001b284) bg_cell_gallery_focus_pane_g2

0xc367,	// (0x0001b28c) bg_cell_gallery_focus_pane_g3

0xc36f,	// (0x0001b294) bg_cell_gallery_focus_pane_g4

0xc377,	// (0x0001b29c) bg_cell_gallery_focus_pane_g5

0xc37f,	// (0x0001b2a4) bg_cell_gallery_focus_pane_g6

0xc387,	// (0x0001b2ac) bg_cell_gallery_focus_pane_g7

0xc38f,	// (0x0001b2b4) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x0001e5e3) bg_cell_gallery_focus_pane_g

0xc397,	// (0x0001b2bc) aid_firma_cardinal

0xc3ab,	// (0x0001b2d0) blid_firmament_pane_t1

0xc3c2,	// (0x0001b2e7) blid_firmament_pane_t2

0xc3d9,	// (0x0001b2fe) blid_firmament_pane_t3

0xc3f0,	// (0x0001b315) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x0001e5f4) blid_firmament_pane_t

0xc407,	// (0x0001b32c) blid_sat_info_pane

0xc417,	// (0x0001b33c) blid_sat_info_pane_g1

0xc417,	// (0x0001b33c) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x0001e5fd) blid_sat_info_pane_g

0xc421,	// (0x0001b346) blid_sat_info_pane_t1

0xc42f,	// (0x0001b354) smil2_volume_content_pane

0xc438,	// (0x0001b35d) smil2_volume_pane_g1

0x9d83,	// (0x00018ca8) smil2_volume_content_pane_g1

0xc440,	// (0x0001b365) smil2_volume_content_pane_g2

0xc449,	// (0x0001b36e) smil2_volume_content_pane_g3

0xc452,	// (0x0001b377) smil2_volume_content_pane_g4

0xc45b,	// (0x0001b380) smil2_volume_content_pane_g5

0xc464,	// (0x0001b389) smil2_volume_content_pane_g6

0xc46d,	// (0x0001b392) smil2_volume_content_pane_g7

0xc476,	// (0x0001b39b) smil2_volume_content_pane_g8

0xc47f,	// (0x0001b3a4) smil2_volume_content_pane_g9

0xc488,	// (0x0001b3ad) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x0001e602) smil2_volume_content_pane_g

0x0bf5,	// (0x0000fb1a) cale_week_day_heading_pane_t1_ParamLimits

0x0c1f,	// (0x0000fb44) cale_week_day_heading_pane_t2_ParamLimits

0x0c4e,	// (0x0000fb73) cale_week_day_heading_pane_t3_ParamLimits

0x0c7d,	// (0x0000fba2) cale_week_day_heading_pane_t4_ParamLimits

0x0cac,	// (0x0000fbd1) cale_week_day_heading_pane_t5_ParamLimits

0x0ce3,	// (0x0000fc08) cale_week_day_heading_pane_t6_ParamLimits

0x0d1a,	// (0x0000fc3f) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0001e0f2) cale_week_day_heading_pane_t_ParamLimits

0x9ebd,	// (0x00018de2) bg_cale_side_pane_ParamLimits

0x0d44,	// (0x0000fc69) cale_week_time_pane_t1_ParamLimits

0x0d5e,	// (0x0000fc83) cale_week_time_pane_t2_ParamLimits

0x0d78,	// (0x0000fc9d) cale_week_time_pane_t3_ParamLimits

0x0d92,	// (0x0000fcb7) cale_week_time_pane_t4_ParamLimits

0x0dac,	// (0x0000fcd1) cale_week_time_pane_t5_ParamLimits

0x0dc6,	// (0x0000fceb) cale_week_time_pane_t6_ParamLimits

0x0de0,	// (0x0000fd05) cale_week_time_pane_t7_ParamLimits

0x0dfa,	// (0x0000fd1f) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0001e101) cale_week_time_pane_t_ParamLimits

0x0e14,	// (0x0000fd39) cell_cale_week_pane_g2_ParamLimits

0x9ebd,	// (0x00018de2) bg_cale_side_pane_cp01_ParamLimits

0x2066,	// (0x00010f8b) cale_month_week_pane_t1_ParamLimits

0x207f,	// (0x00010fa4) cale_month_week_pane_t2_ParamLimits

0x2098,	// (0x00010fbd) cale_month_week_pane_t3_ParamLimits

0x20b1,	// (0x00010fd6) cale_month_week_pane_t4_ParamLimits

0x20ca,	// (0x00010fef) cale_month_week_pane_t5_ParamLimits

0x20e3,	// (0x00011008) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0001e1d6) cale_month_week_pane_t_ParamLimits

0xa266,	// (0x0001918b) cell_cale_month_pane_g1_ParamLimits

0x950b,	// (0x00018430) main_cale_event_viewer_pane

0x950b,	// (0x00018430) listscroll_cale_event_viewer_pane

0xc491,	// (0x0001b3b6) list_cale_ev_pane

0xc499,	// (0x0001b3be) scroll_pane_cp023

0xc4a5,	// (0x0001b3ca) field_cale_ev_pane_ParamLimits

0xc4a5,	// (0x0001b3ca) field_cale_ev_pane

0xc4c3,	// (0x0001b3e8) field_cale_ev_content_pane_ParamLimits

0xc4c3,	// (0x0001b3e8) field_cale_ev_content_pane

0xc4cf,	// (0x0001b3f4) field_cale_ev_pane_g1_ParamLimits

0xc4cf,	// (0x0001b3f4) field_cale_ev_pane_g1

0xc4db,	// (0x0001b400) field_cale_ev_pane_g2_ParamLimits

0xc4db,	// (0x0001b400) field_cale_ev_pane_g2

0xc4f3,	// (0x0001b418) field_cale_ev_pane_g3_ParamLimits

0xc4f3,	// (0x0001b418) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x0001e617) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x0001e617) field_cale_ev_pane_g

0xc50b,	// (0x0001b430) field_cale_ev_pane_t1_ParamLimits

0xc50b,	// (0x0001b430) field_cale_ev_pane_t1

0xc522,	// (0x0001b447) field_cale_ev_content_pane_t1_ParamLimits

0xc522,	// (0x0001b447) field_cale_ev_content_pane_t1

0xabb2,	// (0x00019ad7) bg_button_pane_cp01

0x0922,	// (0x0000f847) listscroll_cale_week_pane_ParamLimits

0x9e68,	// (0x00018d8d) popup_toolbar_window_cp01

0x9e8e,	// (0x00018db3) listscroll_cale_week_pane_t1_ParamLimits

0x0922,	// (0x0000f847) listscroll_cale_day_pane_ParamLimits

0x9e68,	// (0x00018d8d) popup_toolbar_window_cp02

0xa2e8,	// (0x0001920d) listscroll_cale_day_pane_t1_ParamLimits

0x0922,	// (0x0000f847) main_cale_month_pane_ParamLimits

0xbf49,	// (0x0001ae6e) popup_toolbar_window_cp03_ParamLimits

0xbf49,	// (0x0001ae6e) popup_toolbar_window_cp03

0x2e26,	// (0x00011d4b) main_image_pane_g2_ParamLimits

0x2e26,	// (0x00011d4b) main_image_pane_g2

0x2e37,	// (0x00011d5c) main_image_pane_g3_ParamLimits

0x2e37,	// (0x00011d5c) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0001e408) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0001e408) main_image_pane_g

0xad87,	// (0x00019cac) main_image_pane_t1_ParamLimits

0x2e48,	// (0x00011d6d) main_image_pane_t2_ParamLimits

0x2e48,	// (0x00011d6d) main_image_pane_t2

0x2e5a,	// (0x00011d7f) main_image_pane_t3_ParamLimits

0x2e5a,	// (0x00011d7f) main_image_pane_t3

0x2e82,	// (0x00011da7) main_image_pane_t4_ParamLimits

0x2e82,	// (0x00011da7) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0001e40f) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0001e40f) main_image_pane_t

0x2ea2,	// (0x00011dc7) popup_image_details_window_cp01

0x2eac,	// (0x00011dd1) popup_toobar_trans_pane_cp01_ParamLimits

0x2eac,	// (0x00011dd1) popup_toobar_trans_pane_cp01

0x362c,	// (0x00012551) popup_image_details_window_ParamLimits

0x362c,	// (0x00012551) popup_image_details_window

0xbf1c,	// (0x0001ae41) popup_image_focus_window

0x3a43,	// (0x00012968) camera2_autofocus_pane_ParamLimits

0x3a43,	// (0x00012968) camera2_autofocus_pane

0x950b,	// (0x00018430) bg_popup_sub_pane_cp06

0xc540,	// (0x0001b465) popup_image_focus_window_g1

0xc548,	// (0x0001b46d) popup_image_focus_window_g2

0xc550,	// (0x0001b475) popup_image_focus_window_g3

0xc558,	// (0x0001b47d) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x0001e61e) popup_image_focus_window_g

0xc560,	// (0x0001b485) popup_image_focus_window_t1

0xc56e,	// (0x0001b493) popup_image_focus_window_t2

0xc57e,	// (0x0001b4a3) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x0001e627) popup_image_focus_window_t

0xc58c,	// (0x0001b4b1) camera2_autofocus_pane_g1

0x957b,	// (0x000184a0) bg_tb_trans_pane_cp01

0xc59a,	// (0x0001b4bf) popup_image_details_window_g1

0xc5ad,	// (0x0001b4d2) popup_image_details_window_g2

0x0002,

0xf714,	// (0x0001e639) popup_image_details_window_g

0xc5d6,	// (0x0001b4fb) popup_image_details_window_t1

0xc5e8,	// (0x0001b50d) popup_image_details_window_t2

0xc601,	// (0x0001b526) popup_image_details_window_t3

0xc615,	// (0x0001b53a) popup_image_details_window_t4

0xc630,	// (0x0001b555) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x0001e640) popup_image_details_window_t

0x9cb0,	// (0x00018bd5) bg_calc_paper_pane_ParamLimits

0x950b,	// (0x00018430) grid_highlight_pane_cp013

0x9cc4,	// (0x00018be9) list_calc_pane_ParamLimits

0x9cd6,	// (0x00018bfb) scroll_pane_cp024

0x9cde,	// (0x00018c03) bg_calc_display_pane_ParamLimits

0x0753,	// (0x0000f678) calc_display_pane_t1_ParamLimits

0x0768,	// (0x0000f68d) calc_display_pane_t2_ParamLimits

0x9cea,	// (0x00018c0f) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0001e072) calc_display_pane_t_ParamLimits

0x0828,	// (0x0000f74d) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0001e08f) cell_calc_pane_g

0x0831,	// (0x0000f756) cell_calc_pane_t1

0x9d61,	// (0x00018c86) grid_highlight_pane_cp02_ParamLimits

0x9d77,	// (0x00018c9c) toolbar_button_pane_cp01_ParamLimits

0x9d77,	// (0x00018c9c) toolbar_button_pane_cp01

0xadcc,	// (0x00019cf1) temp_image_control_pane_ParamLimits

0xadcc,	// (0x00019cf1) temp_image_control_pane

0x957b,	// (0x000184a0) main_mp3_pane

0xc64a,	// (0x0001b56f) temp_image_control_pane_g1_ParamLimits

0xc64a,	// (0x0001b56f) temp_image_control_pane_g1

0xc658,	// (0x0001b57d) temp_image_control_pane_g2_ParamLimits

0xc658,	// (0x0001b57d) temp_image_control_pane_g2

0xc66a,	// (0x0001b58f) temp_image_control_pane_g3_ParamLimits

0xc66a,	// (0x0001b58f) temp_image_control_pane_g3

0x4293,	// (0x000131b8) temp_image_control_pane_g4_ParamLimits

0x4293,	// (0x000131b8) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x0001e64b) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x0001e64b) temp_image_control_pane_g

0xc64a,	// (0x0001b56f) main_mp3_pane_g1

0x42a6,	// (0x000131cb) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x0001e654) main_mp3_pane_g

0xc6ad,	// (0x0001b5d2) main_mp3_pane_t1

0x9f2a,	// (0x00018e4f) main_camera_pane_g8_ParamLimits

0x9f2a,	// (0x00018e4f) main_camera_pane_g8

0x110e,	// (0x00010033) main_video_pane_g7_ParamLimits

0x110e,	// (0x00010033) main_video_pane_g7

0xc03e,	// (0x0001af63) main_camera2_pane_t7_ParamLimits

0xc03e,	// (0x0001af63) main_camera2_pane_t7

0xa072,	// (0x00018f97) scroll_pane_cp025_ParamLimits

0xa072,	// (0x00018f97) scroll_pane_cp025

0xa086,	// (0x00018fab) scroll_pane_cp026_ParamLimits

0xa086,	// (0x00018fab) scroll_pane_cp026

0xa095,	// (0x00018fba) wml_content_pane_ParamLimits

0x950b,	// (0x00018430) main_touch_calib_pane

0x437a,	// (0x0001329f) main_touch_calib_pane_g1

0x438c,	// (0x000132b1) main_touch_calib_pane_g2

0x439e,	// (0x000132c3) main_touch_calib_pane_g3

0x43b0,	// (0x000132d5) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x0001e672) main_touch_calib_pane_g

0x43c2,	// (0x000132e7) main_touch_calib_pane_t1

0x43dc,	// (0x00013301) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x0001e67b) main_touch_calib_pane_t

0xa8c4,	// (0x000197e9) mup_progress_pane_cp02

0xa8f9,	// (0x0001981e) navi_pane_g1

0xa9b4,	// (0x000198d9) navi_pane_mp_t3

0x957b,	// (0x000184a0) main_mp3_pane_ParamLimits

0x37b1,	// (0x000126d6) navi_pane_ParamLimits

0xc64a,	// (0x0001b56f) main_mp3_pane_g1_ParamLimits

0x42a6,	// (0x000131cb) main_mp3_pane_g2_ParamLimits

0x42b4,	// (0x000131d9) main_mp3_pane_g3_ParamLimits

0x42b4,	// (0x000131d9) main_mp3_pane_g3

0x42c2,	// (0x000131e7) main_mp3_pane_g4_ParamLimits

0x42c2,	// (0x000131e7) main_mp3_pane_g4

0xc67a,	// (0x0001b59f) main_mp3_pane_g5_ParamLimits

0xc67a,	// (0x0001b59f) main_mp3_pane_g5

0xc688,	// (0x0001b5ad) main_mp3_pane_g6_ParamLimits

0xc688,	// (0x0001b5ad) main_mp3_pane_g6

0xc695,	// (0x0001b5ba) main_mp3_pane_g7_ParamLimits

0xc695,	// (0x0001b5ba) main_mp3_pane_g7

0xc6a1,	// (0x0001b5c6) main_mp3_pane_g8_ParamLimits

0xc6a1,	// (0x0001b5c6) main_mp3_pane_g8

0xf72f,	// (0x0001e654) main_mp3_pane_g_ParamLimits

0x42ce,	// (0x000131f3) main_mp3_pane_t2

0x42dc,	// (0x00013201) main_mp3_pane_t3

0xc6bb,	// (0x0001b5e0) main_mp3_pane_t4

0xc6c9,	// (0x0001b5ee) main_mp3_pane_t5

0x0005,

0xf740,	// (0x0001e665) main_mp3_pane_t

0xc6d7,	// (0x0001b5fc) mup_progress_pane_cp01

0x9529,	// (0x0001844e) aid_zoom_text_secondary2

0xc491,	// (0x0001b3b6) list_cale_ev2_pane

0xc499,	// (0x0001b3be) scroll_pane_cp023_ParamLimits

0x4432,	// (0x00013357) field_cale_ev2_pane_ParamLimits

0x4432,	// (0x00013357) field_cale_ev2_pane

0x4452,	// (0x00013377) field_cale_ev2_pane_g1_ParamLimits

0x4452,	// (0x00013377) field_cale_ev2_pane_g1

0x445e,	// (0x00013383) field_cale_ev2_pane_g2_ParamLimits

0x445e,	// (0x00013383) field_cale_ev2_pane_g2

0x4476,	// (0x0001339b) field_cale_ev2_pane_g3_ParamLimits

0x4476,	// (0x0001339b) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x0001e686) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x0001e686) field_cale_ev2_pane_g

0x448e,	// (0x000133b3) field_cale_ev2_pane_t1_ParamLimits

0x448e,	// (0x000133b3) field_cale_ev2_pane_t1

0x44a5,	// (0x000133ca) field_cale_ev2_pane_t2_ParamLimits

0x44a5,	// (0x000133ca) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x0001e68f) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x0001e68f) field_cale_ev2_pane_t

0x2cdb,	// (0x00011c00) main_postcard_pane_g5_ParamLimits

0x2cdb,	// (0x00011c00) main_postcard_pane_g5

0x2cf1,	// (0x00011c16) main_postcard_pane_g6_ParamLimits

0x2cf1,	// (0x00011c16) main_postcard_pane_g6

0x0eda,	// (0x0000fdff) camera2_autofocus_pane_cp_ParamLimits

0x0eda,	// (0x0000fdff) camera2_autofocus_pane_cp

0x957b,	// (0x000184a0) main_mup3_pane

0x44de,	// (0x00013403) main_mup3_pane_g1_ParamLimits

0x44de,	// (0x00013403) main_mup3_pane_g1

0x4500,	// (0x00013425) main_mup3_pane_g2_ParamLimits

0x4500,	// (0x00013425) main_mup3_pane_g2

0x457e,	// (0x000134a3) main_mup3_pane_g3_ParamLimits

0x457e,	// (0x000134a3) main_mup3_pane_g3

0x45c4,	// (0x000134e9) main_mup3_pane_g4_ParamLimits

0x45c4,	// (0x000134e9) main_mup3_pane_g4

0x460a,	// (0x0001352f) main_mup3_pane_g5_ParamLimits

0x460a,	// (0x0001352f) main_mup3_pane_g5

0x4650,	// (0x00013575) main_mup3_pane_g6_ParamLimits

0x4650,	// (0x00013575) main_mup3_pane_g6

0xc70b,	// (0x0001b630) main_mup3_pane_g7_ParamLimits

0xc70b,	// (0x0001b630) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x0001e69f) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x0001e69f) main_mup3_pane_g

0x46ce,	// (0x000135f3) main_mup3_pane_t1_ParamLimits

0x46ce,	// (0x000135f3) main_mup3_pane_t1

0x4742,	// (0x00013667) main_mup3_pane_t2_ParamLimits

0x4742,	// (0x00013667) main_mup3_pane_t2

0x4816,	// (0x0001373b) main_mup3_pane_t4_ParamLimits

0x4816,	// (0x0001373b) main_mup3_pane_t4

0x486c,	// (0x00013791) main_mup3_pane_t5_ParamLimits

0x486c,	// (0x00013791) main_mup3_pane_t5

0x4928,	// (0x0001384d) main_mup3_pane_t6_ParamLimits

0x4928,	// (0x0001384d) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x0001e6b0) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x0001e6b0) main_mup3_pane_t

0x49e0,	// (0x00013905) mup3_progress_pane_ParamLimits

0x49e0,	// (0x00013905) mup3_progress_pane

0x4a76,	// (0x0001399b) popup_mup3_control_window_ParamLimits

0x4a76,	// (0x0001399b) popup_mup3_control_window

0xc719,	// (0x0001b63e) popup_mup3_text_window

0x4aa8,	// (0x000139cd) mup3_progress_pane_t1

0x4ac7,	// (0x000139ec) mup3_progress_pane_t2

0xc721,	// (0x0001b646) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x0001e6bd) mup3_progress_pane_t

0xc73e,	// (0x0001b663) mup_progress_pane_cp03

0x950b,	// (0x00018430) bg_tb_trans_pane_cp04

0x4ae6,	// (0x00013a0b) mup3_volume_pane

0x4aee,	// (0x00013a13) popup_mup3_control_window_g1

0x4af7,	// (0x00013a1c) mup3_volume_pane_g1

0x4b00,	// (0x00013a25) mup3_volume_pane_g2

0x4b09,	// (0x00013a2e) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x0001e6c4) mup3_volume_pane_g

0x950b,	// (0x00018430) bg_tb_trans_pane_cp03

0xc74e,	// (0x0001b673) popup_mup3_text_window_g1

0xc756,	// (0x0001b67b) popup_mup3_text_window_t1

0x9d38,	// (0x00018c5d) list_calc_item_pane_g1_ParamLimits

0xc126,	// (0x0001b04b) mup_volume_pane_cp_g1

0x43f6,	// (0x0001331b) main_touch_calib_pane_t3

0x440a,	// (0x0001332f) main_touch_calib_pane_t4

0x441e,	// (0x00013343) main_touch_calib_pane_t5

0x9515,	// (0x0001843a) aid_cell_size_toolbar2

0x951d,	// (0x00018442) aid_popup3_width_pane

0x9529,	// (0x0001844e) aid_zoom_text_msg_primary

0x0eb9,	// (0x0000fdde) vorec_t7

0x9cfc,	// (0x00018c21) bg_calc_paper_pane_g1_ParamLimits

0x9d08,	// (0x00018c2d) bg_calc_paper_pane_g2_ParamLimits

0x9d14,	// (0x00018c39) bg_calc_paper_pane_g3_ParamLimits

0x9d20,	// (0x00018c45) bg_calc_paper_pane_g4_ParamLimits

0x9d2c,	// (0x00018c51) bg_calc_paper_pane_g5_ParamLimits

0x07b2,	// (0x0000f6d7) bg_calc_paper_pane_g6_ParamLimits

0x07c1,	// (0x0000f6e6) bg_calc_paper_pane_g7_ParamLimits

0x07d0,	// (0x0000f6f5) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0001e079) bg_calc_paper_pane_g_ParamLimits

0x07e3,	// (0x0000f708) calc_bg_paper_pane_g9_ParamLimits

0x1025,	// (0x0000ff4a) image_qvga_pane_ParamLimits

0x1025,	// (0x0000ff4a) image_qvga_pane

0x9bf7,	// (0x00018b1c) bg_popup_sub_pane_cp04_ParamLimits

0xad03,	// (0x00019c28) popup_mup_playback_window_g1_ParamLimits

0xad0f,	// (0x00019c34) popup_mup_playback_window_t1_ParamLimits

0xad24,	// (0x00019c49) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0001e403) popup_mup_playback_window_t_ParamLimits

0x3f36,	// (0x00012e5b) main_mup2_pane_g3_ParamLimits

0x3f36,	// (0x00012e5b) main_mup2_pane_g3

0x1434,	// (0x00010359) popup_toolbar_window_cp04

0xb106,	// (0x0001a02b) popup_call2_audio_second_window_g3_ParamLimits

0xb106,	// (0x0001a02b) popup_call2_audio_second_window_g3

0xb510,	// (0x0001a435) popup_call2_audio_first_window_g4_ParamLimits

0xb510,	// (0x0001a435) popup_call2_audio_first_window_g4

0xbb8f,	// (0x0001aab4) popup_call2_audio_in_window_g4_ParamLimits

0xbb8f,	// (0x0001aab4) popup_call2_audio_in_window_g4

0x2e08,	// (0x00011d2d) aid_area_sk_bg_cut_ParamLimits

0x2e08,	// (0x00011d2d) aid_area_sk_bg_cut

0xad39,	// (0x00019c5e) aid_area_sk_bg_cut_2_ParamLimits

0xad39,	// (0x00019c5e) aid_area_sk_bg_cut_2

0x4239,	// (0x0001315e) aid_placing_details_win

0x4241,	// (0x00013166) aid_placing_details_win_2

0xc58c,	// (0x0001b4b1) camera2_autofocus_pane_g1_ParamLimits

0x039e,	// (0x0000f2c3) popup_fixed_preview_cale_window_ParamLimits

0x039e,	// (0x0000f2c3) popup_fixed_preview_cale_window

0xaa3b,	// (0x00019960) navi_slider_pane_g3

0xaa44,	// (0x00019969) navi_slider_pane_g4

0xaa4d,	// (0x00019972) navi_slider_pane_g5

0xaa3b,	// (0x00019960) navi_slider_pane_g6

0xaa56,	// (0x0001997b) navi_slider_pane_g7

0xab77,	// (0x00019a9c) mup_scale_pane_g3

0xab80,	// (0x00019aa5) mup_scale_pane_g4

0xab89,	// (0x00019aae) mup_scale_pane_g5

0x2b35,	// (0x00011a5a) mup_scale_pane_g6

0x2b3e,	// (0x00011a63) mup_scale_pane_g7

0xaa3b,	// (0x00019960) cams2_slider_pane_g3

0xc1db,	// (0x0001b100) cams2_slider_pane_g4

0xc1e3,	// (0x0001b108) cams2_slider_pane_g5

0xaa3b,	// (0x00019960) cams2_slider_pane_g6

0xc1eb,	// (0x0001b110) cams2_slider_pane_g7

0xc417,	// (0x0001b33c) camera2_autofocus_pane_cp_g1

0xbef0,	// (0x0001ae15) bg_popup_preview_window_pane_cp02_ParamLimits

0xbef0,	// (0x0001ae15) bg_popup_preview_window_pane_cp02

0xc764,	// (0x0001b689) list_fp_cale_pane_ParamLimits

0xc764,	// (0x0001b689) list_fp_cale_pane

0xc770,	// (0x0001b695) popup_fixed_preview_cale_window_t1_ParamLimits

0xc770,	// (0x0001b695) popup_fixed_preview_cale_window_t1

0x4b12,	// (0x00013a37) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b12,	// (0x00013a37) popup_fixed_preview_cale_window_t2

0x4b27,	// (0x00013a4c) popup_fixed_preview_cale_window_t3_ParamLimits

0x4b27,	// (0x00013a4c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x0001e6cb) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x0001e6cb) popup_fixed_preview_cale_window_t

0x4b3c,	// (0x00013a61) list_single_fp_cale_pane_ParamLimits

0x4b3c,	// (0x00013a61) list_single_fp_cale_pane

0xc78e,	// (0x0001b6b3) list_single_fp_cale_pane_g1_ParamLimits

0xc78e,	// (0x0001b6b3) list_single_fp_cale_pane_g1

0xc79a,	// (0x0001b6bf) list_single_fp_cale_pane_g2_ParamLimits

0xc79a,	// (0x0001b6bf) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x0001e6d2) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x0001e6d2) list_single_fp_cale_pane_g

0xc7b3,	// (0x0001b6d8) list_single_fp_cale_pane_t1_ParamLimits

0xc7b3,	// (0x0001b6d8) list_single_fp_cale_pane_t1

0xc7c5,	// (0x0001b6ea) list_single_fp_cale_pane_t2_ParamLimits

0xc7c5,	// (0x0001b6ea) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x0001e6d9) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x0001e6d9) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x950b,	// (0x00018430) main_dialer_pane

0x4b51,	// (0x00013a76) aid_cell_size_keypad

0x4b5b,	// (0x00013a80) dialer_ne_pane

0x4b63,	// (0x00013a88) grid_dialer_command_1_pane

0x4b6b,	// (0x00013a90) grid_dialer_command_2_pane

0x4b73,	// (0x00013a98) grid_dialer_keypad_pane

0x4b85,	// (0x00013aaa) bg_popup_call_pane_cp06_ParamLimits

0x4b85,	// (0x00013aaa) bg_popup_call_pane_cp06

0x4b91,	// (0x00013ab6) dialer_ne_clear_pane_ParamLimits

0x4b91,	// (0x00013ab6) dialer_ne_clear_pane

0xc7f8,	// (0x0001b71d) dialer_ne_pane_g1

0xc800,	// (0x0001b725) dialer_ne_pane_t1_ParamLimits

0xc800,	// (0x0001b725) dialer_ne_pane_t1

0x4b9d,	// (0x00013ac2) dialer_ne_pane_t2_ParamLimits

0x4b9d,	// (0x00013ac2) dialer_ne_pane_t2

0x4bc7,	// (0x00013aec) dialer_ne_pane_t3_ParamLimits

0x4bc7,	// (0x00013aec) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x0001e6de) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x0001e6de) dialer_ne_pane_t

0x4bf7,	// (0x00013b1c) dialer_ne_pane_t3_copy1_ParamLimits

0x4bf7,	// (0x00013b1c) dialer_ne_pane_t3_copy1

0x4c26,	// (0x00013b4b) cell_dialer_keypad_pane_ParamLimits

0x4c26,	// (0x00013b4b) cell_dialer_keypad_pane

0x4c3d,	// (0x00013b62) cell_dialer_command_1_pane_ParamLimits

0x4c3d,	// (0x00013b62) cell_dialer_command_1_pane

0x4c53,	// (0x00013b78) cell_dialer_command_2_pane_ParamLimits

0x4c53,	// (0x00013b78) cell_dialer_command_2_pane

0xc812,	// (0x0001b737) bg_button_pane_cp02_ParamLimits

0xc812,	// (0x0001b737) bg_button_pane_cp02

0x4c62,	// (0x00013b87) cell_dialer_keypad_pane_g1_ParamLimits

0x4c62,	// (0x00013b87) cell_dialer_keypad_pane_g1

0xc812,	// (0x0001b737) bg_button_pane_cp03_ParamLimits

0xc812,	// (0x0001b737) bg_button_pane_cp03

0x4c76,	// (0x00013b9b) cell_dialer_command_1_pane_g1_ParamLimits

0x4c76,	// (0x00013b9b) cell_dialer_command_1_pane_g1

0xc81e,	// (0x0001b743) bg_button_pane_cp04

0x4c8a,	// (0x00013baf) cell_dialer_command_2_pane_g1

0x9f18,	// (0x00018e3d) bg_button_pane_cp06

0xc826,	// (0x0001b74b) dialer_ne_clear_pane_g1

0xa905,	// (0x0001982a) navi_pane_g2

0xa933,	// (0x00019858) navi_pane_g3

0x0002,

0xf3e1,	// (0x0001e306) navi_pane_g

0xa9c2,	// (0x000198e7) navi_pane_mv_g2

0xa9e9,	// (0x0001990e) navi_pane_mv_g5

0x26f9,	// (0x0001161e) navi_pane_mv_t1

0x9cde,	// (0x00018c03) main_clock2_pane

0x957b,	// (0x000184a0) main_clock2_list_pane_ParamLimits

0x957b,	// (0x000184a0) main_clock2_list_pane

0x4cfb,	// (0x00013c20) main_clock2_pane_t1_ParamLimits

0x4cfb,	// (0x00013c20) main_clock2_pane_t1

0x4d36,	// (0x00013c5b) main_clock2_pane_t2_ParamLimits

0x4d36,	// (0x00013c5b) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x0001e6ea) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x0001e6ea) main_clock2_pane_t

0x4dd6,	// (0x00013cfb) popup_clock_analogue_window_cp03_ParamLimits

0x4dd6,	// (0x00013cfb) popup_clock_analogue_window_cp03

0x4dfb,	// (0x00013d20) popup_clock_digital_window_cp02_ParamLimits

0x4dfb,	// (0x00013d20) popup_clock_digital_window_cp02

0x4e74,	// (0x00013d99) main_clock2_list_single_pane_ParamLimits

0x4e74,	// (0x00013d99) main_clock2_list_single_pane

0x9f18,	// (0x00018e3d) list_highlight_pane_cp05

0xc864,	// (0x0001b789) main_clock2_list_single_pane_t1

0x1434,	// (0x00010359) popup_toolbar_window_cp04_ParamLimits

0x4263,	// (0x00013188) camera2_autofocus_pane_g2_ParamLimits

0x4263,	// (0x00013188) camera2_autofocus_pane_g2

0x426f,	// (0x00013194) camera2_autofocus_pane_g3_ParamLimits

0x426f,	// (0x00013194) camera2_autofocus_pane_g3

0x427b,	// (0x000131a0) camera2_autofocus_pane_g4_ParamLimits

0x427b,	// (0x000131a0) camera2_autofocus_pane_g4

0x4287,	// (0x000131ac) camera2_autofocus_pane_g5_ParamLimits

0x4287,	// (0x000131ac) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x0001e62e) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x0001e62e) camera2_autofocus_pane_g

0xc6eb,	// (0x0001b610) camera2_autofocus_pane_cp_g2

0xc6f3,	// (0x0001b618) camera2_autofocus_pane_cp_g3

0xc6fb,	// (0x0001b620) camera2_autofocus_pane_cp_g4

0xc703,	// (0x0001b628) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x0001e694) camera2_autofocus_pane_cp_g

0x4b7d,	// (0x00013aa2) popup_dialer_spcha_window

0x950b,	// (0x00018430) bg_popup_sub_pane_cp07

0xc872,	// (0x0001b797) list_spcha_pane

0xc87a,	// (0x0001b79f) list_single_spcha_pane_ParamLimits

0xc87a,	// (0x0001b79f) list_single_spcha_pane

0x950b,	// (0x00018430) list_highlight_pane_cp06

0xc88b,	// (0x0001b7b0) list_single_spcha_pane_t1

0xb939,	// (0x0001a85e) popup_call2_audio_out_window_g4_ParamLimits

0xb939,	// (0x0001a85e) popup_call2_audio_out_window_g4

0x950b,	// (0x00018430) main_imed2_pane

0xbf24,	// (0x0001ae49) popup_imed_adjust2_window

0x3644,	// (0x00012569) popup_imed_trans_window_ParamLimits

0x3644,	// (0x00012569) popup_imed_trans_window

0xc255,	// (0x0001b17a) popup_blid_sat_info2_window_t1

0xc263,	// (0x0001b188) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x0001e5c3) popup_blid_sat_info2_window_t

0x4f25,	// (0x00013e4a) aid_size_cell_colour_35

0x4f45,	// (0x00013e6a) aid_size_cell_colour_112

0x4f65,	// (0x00013e8a) aid_size_cell_effect

0xbefc,	// (0x0001ae21) bg_tb_trans_pane_cp02

0xa3f1,	// (0x00019316) heading_imed_pane

0x4f85,	// (0x00013eaa) listscroll_imed_pane

0xc899,	// (0x0001b7be) heading_imed_pane_g1

0xc8a1,	// (0x0001b7c6) heading_imed_pane_t1

0xc8af,	// (0x0001b7d4) grid_imed_colour_35_pane_ParamLimits

0xc8af,	// (0x0001b7d4) grid_imed_colour_35_pane

0x4f91,	// (0x00013eb6) grid_imed_effect_pane

0xc8c6,	// (0x0001b7eb) list_imed_aspect_pane

0x4fa7,	// (0x00013ecc) scroll_pane_cp027_ParamLimits

0x4fa7,	// (0x00013ecc) scroll_pane_cp027

0x4fb8,	// (0x00013edd) cell_imed_effect_pane_ParamLimits

0x4fb8,	// (0x00013edd) cell_imed_effect_pane

0xc8ce,	// (0x0001b7f3) cell_imed_colour_pane_ParamLimits

0xc8ce,	// (0x0001b7f3) cell_imed_colour_pane

0xc910,	// (0x0001b835) cell_imed_colour_pane_g1_ParamLimits

0xc910,	// (0x0001b835) cell_imed_colour_pane_g1

0xc921,	// (0x0001b846) hgihlgiht_grid_pane_cp016_ParamLimits

0xc921,	// (0x0001b846) hgihlgiht_grid_pane_cp016

0x4fdf,	// (0x00013f04) cell_imed_effect_pane_g1

0x4fe7,	// (0x00013f0c) grid_highlight_pane_cp017

0xc932,	// (0x0001b857) list_imed_single_pane_ParamLimits

0xc932,	// (0x0001b857) list_imed_single_pane

0x950b,	// (0x00018430) list_highlight_pane_cp07

0xc947,	// (0x0001b86c) list_imed_aspect_pane_comp1_t1

0xbefc,	// (0x0001ae21) bg_tb_trans_pane_cp05

0xc969,	// (0x0001b88e) popup_imed_adjust2_window_g1

0xc990,	// (0x0001b8b5) popup_imed_adjust2_window_t1

0xc9a8,	// (0x0001b8cd) slider_imed_adjust_pane

0xc9bc,	// (0x0001b8e1) slider_imed_adjust_pane_g1

0xc9cc,	// (0x0001b8f1) slider_imed_adjust_pane_g2

0xc9dc,	// (0x0001b901) slider_imed_adjust_pane_g3

0xc9ed,	// (0x0001b912) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x0001e707) slider_imed_adjust_pane_g

0x4ff0,	// (0x00013f15) aid_size_cell_clipart2

0x4ffc,	// (0x00013f21) grid_imed_clipart_pane

0xc9fe,	// (0x0001b923) scroll_pane_cp031

0x5006,	// (0x00013f2b) cell_imed_clipart_pane_ParamLimits

0x5006,	// (0x00013f2b) cell_imed_clipart_pane

0x5028,	// (0x00013f4d) cell_imed_clipart_pane_g1

0x950b,	// (0x00018430) grid_highlight_pane_cp014

0x4cd7,	// (0x00013bfc) main_clock2_pane_g1_ParamLimits

0x4cd7,	// (0x00013bfc) main_clock2_pane_g1

0x4e1b,	// (0x00013d40) aid_call2_pane_cp10

0x4e2d,	// (0x00013d52) aid_call_pane_cp10

0xa866,	// (0x0001978b) popup_clock_analogue_window_cp10_g1

0xa866,	// (0x0001978b) popup_clock_analogue_window_cp10_g2

0x4e3f,	// (0x00013d64) popup_clock_analogue_window_cp10_g3

0x4e3f,	// (0x00013d64) popup_clock_analogue_window_cp10_g4

0xa866,	// (0x0001978b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x0001e6f5) popup_clock_analogue_window_cp10_g

0x4e55,	// (0x00013d7a) popup_clock_analogue_window_cp10_t1

0x4e86,	// (0x00013dab) clock_digital_number_pane_cp10_ParamLimits

0x4e86,	// (0x00013dab) clock_digital_number_pane_cp10

0x4e9e,	// (0x00013dc3) clock_digital_number_pane_cp11_ParamLimits

0x4e9e,	// (0x00013dc3) clock_digital_number_pane_cp11

0x4eb6,	// (0x00013ddb) clock_digital_number_pane_cp12_ParamLimits

0x4eb6,	// (0x00013ddb) clock_digital_number_pane_cp12

0x4ed0,	// (0x00013df5) clock_digital_number_pane_cp13_ParamLimits

0x4ed0,	// (0x00013df5) clock_digital_number_pane_cp13

0x4eea,	// (0x00013e0f) clock_digital_separator_pane_cp10_ParamLimits

0x4eea,	// (0x00013e0f) clock_digital_separator_pane_cp10

0x4f04,	// (0x00013e29) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f04,	// (0x00013e29) popup_clock_digital_window_cp02_t1

0x9bef,	// (0x00018b14) clock_digital_number_pane_cp10_g1

0x9bef,	// (0x00018b14) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x0001e710) clock_digital_number_pane_cp10_g

0x9bef,	// (0x00018b14) clock_digital_separator_pane_cp10_g1

0x9bef,	// (0x00018b14) clock_digital_separator_pane_g2_cp10

0xa9f1,	// (0x00019916) navi_pane_vded_g4

0xa9fa,	// (0x0001991f) navi_pane_vded_g5

0xaa03,	// (0x00019928) navi_pane_vded_t1

0x950b,	// (0x00018430) main_vded_pane

0x5031,	// (0x00013f56) main_vded_pane_g1

0x503b,	// (0x00013f60) main_vded_pane_g2

0x5045,	// (0x00013f6a) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x0001e715) main_vded_pane_g

0x504f,	// (0x00013f74) main_vded_pane_t1

0x505d,	// (0x00013f82) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x0001e71c) main_vded_pane_t

0x506b,	// (0x00013f90) vded_slider_pane

0x5073,	// (0x00013f98) vded_video_pane

0xca06,	// (0x0001b92b) vded_video_pane_g1

0x507b,	// (0x00013fa0) vded_video_pane_g2

0xc417,	// (0x0001b33c) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x0001e721) vded_video_pane_g

0xca10,	// (0x0001b935) vded_slider_pane_g1

0xc126,	// (0x0001b04b) vded_slider_pane_g2

0xca19,	// (0x0001b93e) vded_slider_pane_g3

0xca22,	// (0x0001b947) vded_slider_pane_g4

0xca2b,	// (0x0001b950) vded_slider_pane_g5

0x0004,

0xf803,	// (0x0001e728) vded_slider_pane_g

0x4a5e,	// (0x00013983) mup3_rocker_pane_ParamLimits

0x4a5e,	// (0x00013983) mup3_rocker_pane

0x5084,	// (0x00013fa9) mup3_control_keys_pane_g1

0x508c,	// (0x00013fb1) mup3_control_keys_pane_g2

0x5094,	// (0x00013fb9) mup3_control_keys_pane_g3

0x509c,	// (0x00013fc1) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x0001e733) mup3_control_keys_pane_g

0x03d5,	// (0x0000f2fa) popup_toolbar2_fixed_window_cp01_ParamLimits

0x03d5,	// (0x0000f2fa) popup_toolbar2_fixed_window_cp01

0x4a92,	// (0x000139b7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4a92,	// (0x000139b7) popup_toolbar2_fixed_window_cp02

0xb278,	// (0x0001a19d) popup_call2_audio_second_window_t4_ParamLimits

0xb278,	// (0x0001a19d) popup_call2_audio_second_window_t4

0xb7a6,	// (0x0001a6cb) popup_call2_audio_first_window_t6_ParamLimits

0xb7a6,	// (0x0001a6cb) popup_call2_audio_first_window_t6

0xba3c,	// (0x0001a961) popup_call2_audio_out_window_t6_ParamLimits

0xba3c,	// (0x0001a961) popup_call2_audio_out_window_t6

0x950b,	// (0x00018430) main_vitu_pane

0x50ac,	// (0x00013fd1) aid_size_cell_itu_ParamLimits

0x50ac,	// (0x00013fd1) aid_size_cell_itu

0x957b,	// (0x000184a0) bg_popup_window_pane_cp08_ParamLimits

0x957b,	// (0x000184a0) bg_popup_window_pane_cp08

0x50c2,	// (0x00013fe7) field_vitu_entry_pane_ParamLimits

0x50c2,	// (0x00013fe7) field_vitu_entry_pane

0x50d9,	// (0x00013ffe) grid_vitu_function_pane_ParamLimits

0x50d9,	// (0x00013ffe) grid_vitu_function_pane

0x50f4,	// (0x00014019) grid_vitu_itu_pane_ParamLimits

0x50f4,	// (0x00014019) grid_vitu_itu_pane

0x5112,	// (0x00014037) cell_vitu_itu_pane_ParamLimits

0x5112,	// (0x00014037) cell_vitu_itu_pane

0x5134,	// (0x00014059) cell_vitu_function_pane_ParamLimits

0x5134,	// (0x00014059) cell_vitu_function_pane

0x957b,	// (0x000184a0) bg_popup_sub_pane_cp08_ParamLimits

0x957b,	// (0x000184a0) bg_popup_sub_pane_cp08

0x514d,	// (0x00014072) field_vitu_entry_pane_t1_ParamLimits

0x514d,	// (0x00014072) field_vitu_entry_pane_t1

0xca4c,	// (0x0001b971) field_vitu_entry_pane_t2_ParamLimits

0xca4c,	// (0x0001b971) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x0001e741) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x0001e741) field_vitu_entry_pane_t

0xca69,	// (0x0001b98e) bg_button_pane_cp05_ParamLimits

0xca69,	// (0x0001b98e) bg_button_pane_cp05

0x516b,	// (0x00014090) cell_vitu_itu_pane_g1

0x5183,	// (0x000140a8) cell_vitu_itu_pane_t1_ParamLimits

0x5183,	// (0x000140a8) cell_vitu_itu_pane_t1

0x5195,	// (0x000140ba) cell_vitu_itu_pane_t2_ParamLimits

0x5195,	// (0x000140ba) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x0001e746) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x0001e746) cell_vitu_itu_pane_t

0xca77,	// (0x0001b99c) bg_button_pane_cp07

0x51ca,	// (0x000140ef) cell_vitu_function_pane_g1

0x9c7e,	// (0x00018ba3) main_calc_pane_g1

0x01fc,	// (0x0000f121) aid_visual_content_pane

0x950b,	// (0x00018430) main_vradio_pane

0x51d3,	// (0x000140f8) main_vradio_pane_g1_ParamLimits

0x51d3,	// (0x000140f8) main_vradio_pane_g1

0xca81,	// (0x0001b9a6) main_vradio_pane_g2_ParamLimits

0xca81,	// (0x0001b9a6) main_vradio_pane_g2

0x0001,

0xf828,	// (0x0001e74d) main_vradio_pane_g_ParamLimits

0xf828,	// (0x0001e74d) main_vradio_pane_g

0x51ec,	// (0x00014111) main_vradio_pane_t1_ParamLimits

0x51ec,	// (0x00014111) main_vradio_pane_t1

0x5201,	// (0x00014126) main_vradio_pane_t2_ParamLimits

0x5201,	// (0x00014126) main_vradio_pane_t2

0xca8e,	// (0x0001b9b3) main_vradio_pane_t3_ParamLimits

0xca8e,	// (0x0001b9b3) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x0001e752) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x0001e752) main_vradio_pane_t

0x5216,	// (0x0001413b) vradio_rocker_control_pane_ParamLimits

0x5216,	// (0x0001413b) vradio_rocker_control_pane

0x5228,	// (0x0001414d) vradio_station_info_pane_ParamLimits

0x5228,	// (0x0001414d) vradio_station_info_pane

0xcaa2,	// (0x0001b9c7) vradio_frequency_info_pane_ParamLimits

0xcaa2,	// (0x0001b9c7) vradio_frequency_info_pane

0xc417,	// (0x0001b33c) vradio_station_info_pane_g1

0xcab1,	// (0x0001b9d6) vradio_station_info_pane_t1_ParamLimits

0xcab1,	// (0x0001b9d6) vradio_station_info_pane_t1

0xcad3,	// (0x0001b9f8) vradio_station_info_pane_t2_ParamLimits

0xcad3,	// (0x0001b9f8) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x0001e759) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x0001e759) vradio_station_info_pane_t

0xcae5,	// (0x0001ba0a) vradio_tuning_pane

0xcaed,	// (0x0001ba12) vradio_rocker_control_pane_g1

0xcaf5,	// (0x0001ba1a) vradio_rocker_control_pane_g2

0xcafd,	// (0x0001ba22) vradio_rocker_control_pane_g3

0xcb05,	// (0x0001ba2a) vradio_rocker_control_pane_g4

0xcb0d,	// (0x0001ba32) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x0001e75e) vradio_rocker_control_pane_g

0x523a,	// (0x0001415f) vradio_frequency_info_pane_g1

0xcb15,	// (0x0001ba3a) vradio_frequency_info_pane_t1_ParamLimits

0xcb15,	// (0x0001ba3a) vradio_frequency_info_pane_t1

0x5244,	// (0x00014169) vradio_tuning_pane_g1

0x524f,	// (0x00014174) vradio_tuning_pane_t1

0x9539,	// (0x0001845e) area_side_right_pane_ParamLimits

0x9539,	// (0x0001845e) area_side_right_pane

0xbeb7,	// (0x0001addc) status_small_pane_g1

0xbebf,	// (0x0001ade4) status_small_pane_g2

0xbec8,	// (0x0001aded) status_small_pane_g3

0xbed1,	// (0x0001adf6) status_small_pane_g4

0x0003,

0xf5f4,	// (0x0001e519) status_small_pane_g

0xbeda,	// (0x0001adff) status_small_pane_t1

0x950b,	// (0x00018430) main_video3_pane

0xcb29,	// (0x0001ba4e) cams_zoom_vslider_pane

0xcb31,	// (0x0001ba56) image3_wide_pane_ParamLimits

0xcb31,	// (0x0001ba56) image3_wide_pane

0xcb4b,	// (0x0001ba70) image3_wide_small_pane

0xcb57,	// (0x0001ba7c) main_video3_pane_g1_ParamLimits

0xcb57,	// (0x0001ba7c) main_video3_pane_g1

0xcb73,	// (0x0001ba98) main_video3_pane_g2_ParamLimits

0xcb73,	// (0x0001ba98) main_video3_pane_g2

0x0001,

0xf844,	// (0x0001e769) main_video3_pane_g_ParamLimits

0xf844,	// (0x0001e769) main_video3_pane_g

0xcb8f,	// (0x0001bab4) main_video3_pane_t1_ParamLimits

0xcb8f,	// (0x0001bab4) main_video3_pane_t1

0xcbba,	// (0x0001badf) main_video3_pane_t2_ParamLimits

0xcbba,	// (0x0001badf) main_video3_pane_t2

0xcbe5,	// (0x0001bb0a) main_video3_pane_t3_ParamLimits

0xcbe5,	// (0x0001bb0a) main_video3_pane_t3

0x0002,

0xf849,	// (0x0001e76e) main_video3_pane_t_ParamLimits

0xf849,	// (0x0001e76e) main_video3_pane_t

0xcc12,	// (0x0001bb37) cams_zoom_vslider_pane_g1

0xcc1b,	// (0x0001bb40) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x0001e775) cams_zoom_vslider_pane_g

0xcc23,	// (0x0001bb48) small_slider_vertical_pane

0xc417,	// (0x0001b33c) small_slider_vertical_pane_g1

0xc417,	// (0x0001b33c) small_slider_vertical_pane_g2

0xcc2b,	// (0x0001bb50) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x0001e77a) small_slider_vertical_pane_g

0x950b,	// (0x00018430) main_hwr_training_pane

0xcc34,	// (0x0001bb59) hwr_training_instruct_pane_ParamLimits

0xcc34,	// (0x0001bb59) hwr_training_instruct_pane

0x525e,	// (0x00014183) hwr_training_navi_pane_ParamLimits

0x525e,	// (0x00014183) hwr_training_navi_pane

0x527d,	// (0x000141a2) hwr_training_write_pane_ParamLimits

0x527d,	// (0x000141a2) hwr_training_write_pane

0x950b,	// (0x00018430) bg_frame_shadow_pane

0xcc6b,	// (0x0001bb90) hwr_training_write_pane_g1

0xcc73,	// (0x0001bb98) hwr_training_write_pane_g2

0xcc7b,	// (0x0001bba0) hwr_training_write_pane_g3

0xcc83,	// (0x0001bba8) hwr_training_write_pane_g4

0xcc8b,	// (0x0001bbb0) hwr_training_write_pane_g5

0xcc93,	// (0x0001bbb8) hwr_training_write_pane_g6

0xcc9b,	// (0x0001bbc0) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x0001e781) hwr_training_write_pane_g

0xcca3,	// (0x0001bbc8) hwr_training_navi_pane_g1_ParamLimits

0xcca3,	// (0x0001bbc8) hwr_training_navi_pane_g1

0xccb5,	// (0x0001bbda) hwr_training_navi_pane_g2_ParamLimits

0xccb5,	// (0x0001bbda) hwr_training_navi_pane_g2

0xccc7,	// (0x0001bbec) hwr_training_navi_pane_g3_ParamLimits

0xccc7,	// (0x0001bbec) hwr_training_navi_pane_g3

0xccd7,	// (0x0001bbfc) hwr_training_navi_pane_g4_ParamLimits

0xccd7,	// (0x0001bbfc) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x0001e790) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x0001e790) hwr_training_navi_pane_g

0xcce4,	// (0x0001bc09) hwr_training_navi_pane_t1

0x52c5,	// (0x000141ea) list_single_hwr_training_instruct_pane_ParamLimits

0x52c5,	// (0x000141ea) list_single_hwr_training_instruct_pane

0xccf2,	// (0x0001bc17) list_single_hwr_training_instruct_pane_t1

0xc357,	// (0x0001b27c) bg_frame_shadow_pane_g1

0xcd01,	// (0x0001bc26) bg_frame_shadow_pane_g2

0xcd09,	// (0x0001bc2e) bg_frame_shadow_pane_g3

0xcd11,	// (0x0001bc36) bg_frame_shadow_pane_g4

0xcd19,	// (0x0001bc3e) bg_frame_shadow_pane_g5

0xcd21,	// (0x0001bc46) bg_frame_shadow_pane_g6

0xcd29,	// (0x0001bc4e) bg_frame_shadow_pane_g7

0x9dc4,	// (0x00018ce9) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x0001e79b) bg_frame_shadow_pane_g

0x950b,	// (0x00018430) main_video_tele_dialer_pane

0x52da,	// (0x000141ff) aid_size_cell_video_keypad_ParamLimits

0x52da,	// (0x000141ff) aid_size_cell_video_keypad

0x52f4,	// (0x00014219) grid_video_dialer_keypad_pane_ParamLimits

0x52f4,	// (0x00014219) grid_video_dialer_keypad_pane

0x5340,	// (0x00014265) video_down_pane_cp_ParamLimits

0x5340,	// (0x00014265) video_down_pane_cp

0x5372,	// (0x00014297) cell_video_dialer_keypad_pane_ParamLimits

0x5372,	// (0x00014297) cell_video_dialer_keypad_pane

0xcd31,	// (0x0001bc56) bg_button_pane_cp08_ParamLimits

0xcd31,	// (0x0001bc56) bg_button_pane_cp08

0x5394,	// (0x000142b9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5394,	// (0x000142b9) cell_video_dialer_keypad_pane_g1

0x4a48,	// (0x0001396d) mup3_rocker2_pane_ParamLimits

0x4a48,	// (0x0001396d) mup3_rocker2_pane

0xc417,	// (0x0001b33c) mup3_rocker2_pane_g1

0x3525,	// (0x0001244a) main_dialer2_pane

0x950b,	// (0x00018430) main_mp4_pane

0xcd5b,	// (0x0001bc80) main_mp4_pane_g1_ParamLimits

0xcd5b,	// (0x0001bc80) main_mp4_pane_g1

0xcd5b,	// (0x0001bc80) main_mp4_pane_g2_ParamLimits

0xcd5b,	// (0x0001bc80) main_mp4_pane_g2

0x53cb,	// (0x000142f0) main_mp4_pane_g3_ParamLimits

0x53cb,	// (0x000142f0) main_mp4_pane_g3

0xcd69,	// (0x0001bc8e) main_mp4_pane_g4_ParamLimits

0xcd69,	// (0x0001bc8e) main_mp4_pane_g4

0xcd97,	// (0x0001bcbc) main_mp4_pane_g5_ParamLimits

0xcd97,	// (0x0001bcbc) main_mp4_pane_g5

0x0007,

0xf896,	// (0x0001e7bb) main_mp4_pane_g_ParamLimits

0xf896,	// (0x0001e7bb) main_mp4_pane_g

0xce0b,	// (0x0001bd30) main_mp4_pane_t1_ParamLimits

0xce0b,	// (0x0001bd30) main_mp4_pane_t1

0xce67,	// (0x0001bd8c) main_mp4_pane_t2_ParamLimits

0xce67,	// (0x0001bd8c) main_mp4_pane_t2

0xceb9,	// (0x0001bdde) main_mp4_pane_t3_ParamLimits

0xceb9,	// (0x0001bdde) main_mp4_pane_t3

0xcedf,	// (0x0001be04) main_mp4_pane_t4_ParamLimits

0xcedf,	// (0x0001be04) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0001e7cc) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0001e7cc) main_mp4_pane_t

0xcf23,	// (0x0001be48) mp4_progress_pane_ParamLimits

0xcf23,	// (0x0001be48) mp4_progress_pane

0xcf6d,	// (0x0001be92) mp4_rocker_pane_ParamLimits

0xcf6d,	// (0x0001be92) mp4_rocker_pane

0xcf95,	// (0x0001beba) mp4_progress_pane_t1

0xcfae,	// (0x0001bed3) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0001e7d5) mp4_progress_pane_t

0xcfc7,	// (0x0001beec) mup_progress_pane_cp04

0xc417,	// (0x0001b33c) mp4_rocker_pane_g1

0x5407,	// (0x0001432c) aid_cell_size_keypad2_ParamLimits

0x5407,	// (0x0001432c) aid_cell_size_keypad2

0x541d,	// (0x00014342) dialer2_ne_pane_ParamLimits

0x541d,	// (0x00014342) dialer2_ne_pane

0x5437,	// (0x0001435c) grid_dialer2_keypad_pane_ParamLimits

0x5437,	// (0x0001435c) grid_dialer2_keypad_pane

0xc1fc,	// (0x0001b121) bg_popup_call_pane_cp07_ParamLimits

0xc1fc,	// (0x0001b121) bg_popup_call_pane_cp07

0x5453,	// (0x00014378) dialer2_ne_pane_t1_ParamLimits

0x5453,	// (0x00014378) dialer2_ne_pane_t1

0x548e,	// (0x000143b3) cell_dialer2_keypad_pane_ParamLimits

0x548e,	// (0x000143b3) cell_dialer2_keypad_pane

0xcfec,	// (0x0001bf11) bg_button_pane_pane_cp04_ParamLimits

0xcfec,	// (0x0001bf11) bg_button_pane_pane_cp04

0x54b0,	// (0x000143d5) cell_dialer2_keypad_pane_g1_ParamLimits

0x54b0,	// (0x000143d5) cell_dialer2_keypad_pane_g1

0x1308,	// (0x0001022d) aid_placing_vt_set_content_ParamLimits

0x1308,	// (0x0001022d) aid_placing_vt_set_content

0x1330,	// (0x00010255) aid_placing_vt_set_title_ParamLimits

0x1330,	// (0x00010255) aid_placing_vt_set_title

0x950b,	// (0x00018430) main_image3_pane

0x5576,	// (0x0001449b) area_side_right_pane_cp01_ParamLimits

0x5576,	// (0x0001449b) area_side_right_pane_cp01

0xcd5b,	// (0x0001bc80) main_image3_pane_g1_ParamLimits

0xcd5b,	// (0x0001bc80) main_image3_pane_g1

0x558d,	// (0x000144b2) main_image3_pane_g2_ParamLimits

0x558d,	// (0x000144b2) main_image3_pane_g2

0x55b5,	// (0x000144da) main_image3_pane_g3_ParamLimits

0x55b5,	// (0x000144da) main_image3_pane_g3

0x55df,	// (0x00014504) main_image3_pane_g4_ParamLimits

0x55df,	// (0x00014504) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0001e7e4) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0001e7e4) main_image3_pane_g

0x5609,	// (0x0001452e) main_image3_pane_t1_ParamLimits

0x5609,	// (0x0001452e) main_image3_pane_t1

0x5661,	// (0x00014586) main_image3_pane_t2_ParamLimits

0x5661,	// (0x00014586) main_image3_pane_t2

0x56b3,	// (0x000145d8) main_image3_pane_t3_ParamLimits

0x56b3,	// (0x000145d8) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0001e7ed) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0001e7ed) main_image3_pane_t

0x957b,	// (0x000184a0) grid_sctrl_middle_pane_cp01_ParamLimits

0x957b,	// (0x000184a0) grid_sctrl_middle_pane_cp01

0x573b,	// (0x00014660) cell_sctrl_middle_pane_cp01_ParamLimits

0x573b,	// (0x00014660) cell_sctrl_middle_pane_cp01

0x5758,	// (0x0001467d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5758,	// (0x0001467d) cell_sctrl_middle_pane_cp01_g1

0x950b,	// (0x00018430) main_call4_pane

0x576e,	// (0x00014693) aid_size_button_call4_ParamLimits

0x576e,	// (0x00014693) aid_size_button_call4

0x57a1,	// (0x000146c6) call4_windows_pane_ParamLimits

0x57a1,	// (0x000146c6) call4_windows_pane

0x57c0,	// (0x000146e5) grid_call4_button_pane_ParamLimits

0x57c0,	// (0x000146e5) grid_call4_button_pane

0x57f3,	// (0x00014718) call4_windows_conf_pane

0x580a,	// (0x0001472f) popup_call4_audio_first_window_ParamLimits

0x580a,	// (0x0001472f) popup_call4_audio_first_window

0x585a,	// (0x0001477f) popup_call4_audio_second_window_ParamLimits

0x585a,	// (0x0001477f) popup_call4_audio_second_window

0x5871,	// (0x00014796) popup_call4_audio_wait_window_ParamLimits

0x5871,	// (0x00014796) popup_call4_audio_wait_window

0x587f,	// (0x000147a4) cell_call4_button_pane_ParamLimits

0x587f,	// (0x000147a4) cell_call4_button_pane

0x58a4,	// (0x000147c9) bg_button_pane_cp09_ParamLimits

0x58a4,	// (0x000147c9) bg_button_pane_cp09

0x58b0,	// (0x000147d5) cell_call4_button_pane_g1_ParamLimits

0x58b0,	// (0x000147d5) cell_call4_button_pane_g1

0x58d6,	// (0x000147fb) cell_call4_button_pane_t1_ParamLimits

0x58d6,	// (0x000147fb) cell_call4_button_pane_t1

0xd064,	// (0x0001bf89) popup_call4_audio_conf_window_ParamLimits

0xd064,	// (0x0001bf89) popup_call4_audio_conf_window

0x4aa8,	// (0x000139cd) mup3_progress_pane_t1_ParamLimits

0x4ac7,	// (0x000139ec) mup3_progress_pane_t2_ParamLimits

0xc721,	// (0x0001b646) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x0001e6bd) mup3_progress_pane_t_ParamLimits

0xc73e,	// (0x0001b663) mup_progress_pane_cp03_ParamLimits

0x50a4,	// (0x00013fc9) mup3_control_keys_pane_g4_copy1

0xcf51,	// (0x0001be76) mp4_rocker2_pane_ParamLimits

0xcf51,	// (0x0001be76) mp4_rocker2_pane

0xd078,	// (0x0001bf9d) mp4_rocker2_pane_g1

0xd080,	// (0x0001bfa5) mp4_rocker2_pane_g2

0xd088,	// (0x0001bfad) mp4_rocker2_pane_g3

0xd090,	// (0x0001bfb5) mp4_rocker2_pane_g4

0xd098,	// (0x0001bfbd) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0001e7f6) mp4_rocker2_pane_g

0x950b,	// (0x00018430) main_camera4_pane

0x950b,	// (0x00018430) main_video4_pane

0x530e,	// (0x00014233) main_video_tele_dialer_pane_t1_ParamLimits

0x530e,	// (0x00014233) main_video_tele_dialer_pane_t1

0x5327,	// (0x0001424c) main_video_tele_dialer_pane_t2_ParamLimits

0x5327,	// (0x0001424c) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x0001e7ac) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x0001e7ac) main_video_tele_dialer_pane_t

0x5914,	// (0x00014839) cam4_autofocus_pane_ParamLimits

0x5914,	// (0x00014839) cam4_autofocus_pane

0x592a,	// (0x0001484f) cam4_image_uncrop_pane_ParamLimits

0x592a,	// (0x0001484f) cam4_image_uncrop_pane

0x5944,	// (0x00014869) cam4_indicators_pane_ParamLimits

0x5944,	// (0x00014869) cam4_indicators_pane

0x596f,	// (0x00014894) main_camera4_pane_g1_ParamLimits

0x596f,	// (0x00014894) main_camera4_pane_g1

0x5981,	// (0x000148a6) main_camera4_pane_g2_ParamLimits

0x5981,	// (0x000148a6) main_camera4_pane_g2

0x5994,	// (0x000148b9) main_camera4_pane_g3_ParamLimits

0x5994,	// (0x000148b9) main_camera4_pane_g3

0x59a7,	// (0x000148cc) main_camera4_pane_g4_ParamLimits

0x59a7,	// (0x000148cc) main_camera4_pane_g4

0x59ba,	// (0x000148df) main_camera4_pane_g5_ParamLimits

0x59ba,	// (0x000148df) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0001e801) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0001e801) main_camera4_pane_g

0x59de,	// (0x00014903) main_camera4_pane_t1_ParamLimits

0x59de,	// (0x00014903) main_camera4_pane_t1

0xc67a,	// (0x0001b59f) bg_tb_trans_pane_cp06

0xd0c4,	// (0x0001bfe9) cam4_indicators_pane_g1

0xd0d5,	// (0x0001bffa) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0001e81c) cam4_indicators_pane_g

0xd0f3,	// (0x0001c018) cam4_indicators_pane_t1

0x5a42,	// (0x00014967) main_video4_pane_g1_ParamLimits

0x5a42,	// (0x00014967) main_video4_pane_g1

0x5a51,	// (0x00014976) main_video4_pane_g2_ParamLimits

0x5a51,	// (0x00014976) main_video4_pane_g2

0x5a60,	// (0x00014985) main_video4_pane_g3_ParamLimits

0x5a60,	// (0x00014985) main_video4_pane_g3

0x5a6f,	// (0x00014994) main_video4_pane_g4_ParamLimits

0x5a6f,	// (0x00014994) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0001e823) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0001e823) main_video4_pane_g

0x5a8d,	// (0x000149b2) vid4_indicators_pane_ParamLimits

0x5a8d,	// (0x000149b2) vid4_indicators_pane

0x5abb,	// (0x000149e0) video4_image_uncrop_cif_pane_ParamLimits

0x5abb,	// (0x000149e0) video4_image_uncrop_cif_pane

0x5ad5,	// (0x000149fa) video4_image_uncrop_nhd_pane_ParamLimits

0x5ad5,	// (0x000149fa) video4_image_uncrop_nhd_pane

0x592a,	// (0x0001484f) video4_image_uncrop_vga_pane_ParamLimits

0x592a,	// (0x0001484f) video4_image_uncrop_vga_pane

0x957b,	// (0x000184a0) bg_tb_trans_pane_cp07

0xd11f,	// (0x0001c044) vid4_indicators_pane_g1

0xd133,	// (0x0001c058) vid4_indicators_pane_g2

0xd147,	// (0x0001c06c) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0001e82e) vid4_indicators_pane_g

0xd176,	// (0x0001c09b) vid4_indicators_pane_t1

0x5ae9,	// (0x00014a0e) cam4_autofocus_pane_g1

0x5af1,	// (0x00014a16) cam4_autofocus_pane_g2

0x5af9,	// (0x00014a1e) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0001e839) cam4_autofocus_pane_g

0x5b01,	// (0x00014a26) cam4_autofocus_pane_g3_copy1

0x5356,	// (0x0001427b) video_down_pane_cp_t1

0x5364,	// (0x00014289) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x0001e7b1) video_down_pane_cp_t

0x957b,	// (0x000184a0) popup_vitu2_window_ParamLimits

0x957b,	// (0x000184a0) popup_vitu2_window

0x5b09,	// (0x00014a2e) aid_size_cell2_itu2_ParamLimits

0x5b09,	// (0x00014a2e) aid_size_cell2_itu2

0x5b2f,	// (0x00014a54) aid_size_cell_itu2_ParamLimits

0x5b2f,	// (0x00014a54) aid_size_cell_itu2

0x5b8b,	// (0x00014ab0) bg_popup_window_pane_cp09_ParamLimits

0x5b8b,	// (0x00014ab0) bg_popup_window_pane_cp09

0x5b99,	// (0x00014abe) field_vitu2_entry_pane_ParamLimits

0x5b99,	// (0x00014abe) field_vitu2_entry_pane

0x5bbf,	// (0x00014ae4) grid_vitu2_function_pane_ParamLimits

0x5bbf,	// (0x00014ae4) grid_vitu2_function_pane

0x5c10,	// (0x00014b35) grid_vitu2_itu_pane_ParamLimits

0x5c10,	// (0x00014b35) grid_vitu2_itu_pane

0x5ca8,	// (0x00014bcd) cell_vitu2_itu_pane_ParamLimits

0x5ca8,	// (0x00014bcd) cell_vitu2_itu_pane

0x5cd4,	// (0x00014bf9) cell_vitu2_function_pane_ParamLimits

0x5cd4,	// (0x00014bf9) cell_vitu2_function_pane

0xd18d,	// (0x0001c0b2) bg_popup_call_pane_cp08_ParamLimits

0xd18d,	// (0x0001c0b2) bg_popup_call_pane_cp08

0xd1a4,	// (0x0001c0c9) field_vitu2_entry_pane_g1

0xd1b0,	// (0x0001c0d5) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0001e840) field_vitu2_entry_pane_g

0x5d13,	// (0x00014c38) field_vitu2_entry_pane_t1_ParamLimits

0x5d13,	// (0x00014c38) field_vitu2_entry_pane_t1

0xd1ca,	// (0x0001c0ef) field_vitu2_entry_pane_t2_ParamLimits

0xd1ca,	// (0x0001c0ef) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0001e847) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0001e847) field_vitu2_entry_pane_t

0x5d42,	// (0x00014c67) bg_button_pane_cp010_ParamLimits

0x5d42,	// (0x00014c67) bg_button_pane_cp010

0xd1ef,	// (0x0001c114) cell_vitu2_itu_pane_g1

0x5d5e,	// (0x00014c83) cell_vitu2_itu_pane_t1_ParamLimits

0x5d5e,	// (0x00014c83) cell_vitu2_itu_pane_t1

0x5dbc,	// (0x00014ce1) cell_vitu2_itu_pane_t2_ParamLimits

0x5dbc,	// (0x00014ce1) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0001e851) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0001e851) cell_vitu2_itu_pane_t

0x957b,	// (0x000184a0) bg_button_pane_cp011

0x5ea8,	// (0x00014dcd) cell_vitu2_function_pane_g1

0x950b,	// (0x00018430) main_myfav_hc_pane

0x5703,	// (0x00014628) popup_image3_note_pane_ParamLimits

0x5703,	// (0x00014628) popup_image3_note_pane

0x571f,	// (0x00014644) popup_image3_tool_bar_pane_ParamLimits

0x571f,	// (0x00014644) popup_image3_tool_bar_pane

0x5e4a,	// (0x00014d6f) cell_vitu2_itu_pane_t3_ParamLimits

0x5e4a,	// (0x00014d6f) cell_vitu2_itu_pane_t3

0x950b,	// (0x00018430) bg_popup_trans_pane

0xd201,	// (0x0001c126) grid_image3_tool_bar_pane

0xd20b,	// (0x0001c130) bg_popup_trans_pane_g1

0xa17b,	// (0x000190a0) bg_popup_trans_pane_g2

0xd213,	// (0x0001c138) bg_popup_trans_pane_g3

0xd21b,	// (0x0001c140) bg_popup_trans_pane_g4

0xd223,	// (0x0001c148) bg_popup_trans_pane_g5

0xd22b,	// (0x0001c150) bg_popup_trans_pane_g6

0xd233,	// (0x0001c158) bg_popup_trans_pane_g7

0xd23b,	// (0x0001c160) bg_popup_trans_pane_g8

0xa15b,	// (0x00019080) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0001e858) bg_popup_trans_pane_g

0xd243,	// (0x0001c168) cell_image3_tool_bar_pane_ParamLimits

0xd243,	// (0x0001c168) cell_image3_tool_bar_pane

0xc417,	// (0x0001b33c) cell_image3_tool_bar_pane_g1

0x950b,	// (0x00018430) bg_popup_trans_pane_cp1

0xd257,	// (0x0001c17c) popup_image3_note_pane_t1

0xd265,	// (0x0001c18a) popup_image3_note_pane_t2

0xd273,	// (0x0001c198) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0001e86b) popup_image3_note_pane_t

0xd281,	// (0x0001c1a6) popup_image3_note_pane_t3_copy1

0x5ebc,	// (0x00014de1) bg_myfav_hc_instruction_pane_ParamLimits

0x5ebc,	// (0x00014de1) bg_myfav_hc_instruction_pane

0x5ed0,	// (0x00014df5) cell_myfav_contact_pane_ParamLimits

0x5ed0,	// (0x00014df5) cell_myfav_contact_pane

0x5eee,	// (0x00014e13) cell_myfav_contact_pane_cp1_ParamLimits

0x5eee,	// (0x00014e13) cell_myfav_contact_pane_cp1

0x5f06,	// (0x00014e2b) cell_myfav_contact_pane_cp2_ParamLimits

0x5f06,	// (0x00014e2b) cell_myfav_contact_pane_cp2

0x5f1e,	// (0x00014e43) cell_myfav_contact_pane_cp3_ParamLimits

0x5f1e,	// (0x00014e43) cell_myfav_contact_pane_cp3

0x5f35,	// (0x00014e5a) cell_myfav_contact_pane_cp4_ParamLimits

0x5f35,	// (0x00014e5a) cell_myfav_contact_pane_cp4

0x5f4d,	// (0x00014e72) cell_myfav_contact_pane_cp5_ParamLimits

0x5f4d,	// (0x00014e72) cell_myfav_contact_pane_cp5

0x5f61,	// (0x00014e86) cell_myfav_contact_pane_cp6_ParamLimits

0x5f61,	// (0x00014e86) cell_myfav_contact_pane_cp6

0x5f77,	// (0x00014e9c) cell_myfav_contact_pane_cp7_ParamLimits

0x5f77,	// (0x00014e9c) cell_myfav_contact_pane_cp7

0xd28f,	// (0x0001c1b4) listscroll_gen_pane_cp05

0x5f91,	// (0x00014eb6) main_myfav_hc_pane_g1_ParamLimits

0x5f91,	// (0x00014eb6) main_myfav_hc_pane_g1

0x5fab,	// (0x00014ed0) main_myfav_hc_pane_g2_ParamLimits

0x5fab,	// (0x00014ed0) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0001e872) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0001e872) main_myfav_hc_pane_g

0x5fdd,	// (0x00014f02) main_myfav_hc_pane_t1_ParamLimits

0x5fdd,	// (0x00014f02) main_myfav_hc_pane_t1

0xd298,	// (0x0001c1bd) main_myfav_hc_pane_t2_ParamLimits

0xd298,	// (0x0001c1bd) main_myfav_hc_pane_t2

0xd2aa,	// (0x0001c1cf) main_myfav_hc_pane_t3_ParamLimits

0xd2aa,	// (0x0001c1cf) main_myfav_hc_pane_t3

0x5ff4,	// (0x00014f19) main_myfav_hc_pane_t4_ParamLimits

0x5ff4,	// (0x00014f19) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0001e879) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0001e879) main_myfav_hc_pane_t

0xc417,	// (0x0001b33c) bg_myfav_hc_instruction_pane_g1

0xd2bc,	// (0x0001c1e1) cell_myfav_contact_pane_g1_ParamLimits

0xd2bc,	// (0x0001c1e1) cell_myfav_contact_pane_g1

0xd2bc,	// (0x0001c1e1) cell_myfav_contact_pane_g2_ParamLimits

0xd2bc,	// (0x0001c1e1) cell_myfav_contact_pane_g2

0xd2c8,	// (0x0001c1ed) cell_myfav_contact_pane_g3_ParamLimits

0xd2c8,	// (0x0001c1ed) cell_myfav_contact_pane_g3

0xc70b,	// (0x0001b630) cell_myfav_contact_pane_g4_ParamLimits

0xc70b,	// (0x0001b630) cell_myfav_contact_pane_g4

0xd2d5,	// (0x0001c1fa) cell_myfav_contact_pane_g5_ParamLimits

0xd2d5,	// (0x0001c1fa) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0001e884) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0001e884) cell_myfav_contact_pane_g

0x5fc5,	// (0x00014eea) main_myfav_hc_pane_g3_ParamLimits

0x5fc5,	// (0x00014eea) main_myfav_hc_pane_g3

0x0337,	// (0x0000f25c) popup_adpt_find_window

0x601c,	// (0x00014f41) afind_page_pane_ParamLimits

0x601c,	// (0x00014f41) afind_page_pane

0x6031,	// (0x00014f56) aid_size_cell_afind_ParamLimits

0x6031,	// (0x00014f56) aid_size_cell_afind

0x604f,	// (0x00014f74) bg_popup_sub_pane_cp09_ParamLimits

0x604f,	// (0x00014f74) bg_popup_sub_pane_cp09

0x605c,	// (0x00014f81) find_pane_cp01_ParamLimits

0x605c,	// (0x00014f81) find_pane_cp01

0xd2e1,	// (0x0001c206) grid_afind_control_pane_ParamLimits

0xd2e1,	// (0x0001c206) grid_afind_control_pane

0x6069,	// (0x00014f8e) grid_afind_pane_ParamLimits

0x6069,	// (0x00014f8e) grid_afind_pane

0x608b,	// (0x00014fb0) cell_afind_pane_ParamLimits

0x608b,	// (0x00014fb0) cell_afind_pane

0xc417,	// (0x0001b33c) afind_page_pane_g1

0x60f2,	// (0x00015017) afind_page_pane_g2

0x60fb,	// (0x00015020) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0001e88f) afind_page_pane_g

0x6104,	// (0x00015029) afind_page_pane_t1

0xd32b,	// (0x0001c250) cell_afind_grid_control_pane_ParamLimits

0xd32b,	// (0x0001c250) cell_afind_grid_control_pane

0xcfec,	// (0x0001bf11) bg_button_pane_cp69_ParamLimits

0xcfec,	// (0x0001bf11) bg_button_pane_cp69

0x6124,	// (0x00015049) cell_afind_pane_g1_ParamLimits

0x6124,	// (0x00015049) cell_afind_pane_g1

0x6131,	// (0x00015056) cell_afind_pane_t1_ParamLimits

0x6131,	// (0x00015056) cell_afind_pane_t1

0x9f74,	// (0x00018e99) bg_button_pane_cp72

0xd33a,	// (0x0001c25f) cell_afind_grid_control_pane_g1

0x2fe5,	// (0x00011f0a) aid_image_placing_area_ParamLimits

0x2fe5,	// (0x00011f0a) aid_image_placing_area

0xca34,	// (0x0001b959) field_vitu_entry_pane_g1_ParamLimits

0xca34,	// (0x0001b959) field_vitu_entry_pane_g1

0xca40,	// (0x0001b965) field_vitu_entry_pane_g2_ParamLimits

0xca40,	// (0x0001b965) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x0001e73c) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x0001e73c) field_vitu_entry_pane_g

0x516b,	// (0x00014090) cell_vitu_itu_pane_g1_ParamLimits

0x51ad,	// (0x000140d2) cell_vitu_itu_pane_t3_ParamLimits

0x51ad,	// (0x000140d2) cell_vitu_itu_pane_t3

0xcf95,	// (0x0001beba) mp4_progress_pane_t1_ParamLimits

0xcfae,	// (0x0001bed3) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0001e7d5) mp4_progress_pane_t_ParamLimits

0xcfc7,	// (0x0001beec) mup_progress_pane_cp04_ParamLimits

0x6008,	// (0x00014f2d) main_myfav_hc_pane_t5_ParamLimits

0x6008,	// (0x00014f2d) main_myfav_hc_pane_t5

0x9531,	// (0x00018456) aid_zoom_text_primary

0x0337,	// (0x0000f25c) popup_adpt_find_window_ParamLimits

0x957b,	// (0x000184a0) main_cam_set_pane

0x595b,	// (0x00014880) cam4_zoom_pane_ParamLimits

0x595b,	// (0x00014880) cam4_zoom_pane

0x6143,	// (0x00015068) main_cam_set_pane_g1_ParamLimits

0x6143,	// (0x00015068) main_cam_set_pane_g1

0x6151,	// (0x00015076) main_cam_set_pane_g2_ParamLimits

0x6151,	// (0x00015076) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0001e896) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0001e896) main_cam_set_pane_g

0x6172,	// (0x00015097) main_cam_set_pane_t1_ParamLimits

0x6172,	// (0x00015097) main_cam_set_pane_t1

0x618d,	// (0x000150b2) main_cset_listscroll_pane_ParamLimits

0x618d,	// (0x000150b2) main_cset_listscroll_pane

0x61ad,	// (0x000150d2) main_cset_slider_pane_ParamLimits

0x61ad,	// (0x000150d2) main_cset_slider_pane

0xd34b,	// (0x0001c270) main_cset_list_pane_ParamLimits

0xd34b,	// (0x0001c270) main_cset_list_pane

0xd35b,	// (0x0001c280) scroll_pane_cp028

0x61d3,	// (0x000150f8) aid_area_touch_slider

0x61ef,	// (0x00015114) cset_slider_pane

0x6219,	// (0x0001513e) main_cset_slider_pane_g1

0x622e,	// (0x00015153) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0001e89b) main_cset_slider_pane_g

0xd394,	// (0x0001c2b9) main_cset_slider_pane_t1

0x62ea,	// (0x0001520f) main_cset_slider_pane_t2

0x6304,	// (0x00015229) main_cset_slider_pane_t3

0x631e,	// (0x00015243) main_cset_slider_pane_t4

0x6338,	// (0x0001525d) main_cset_slider_pane_t5

0x6352,	// (0x00015277) main_cset_slider_pane_t6

0x6367,	// (0x0001528c) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0001e8c0) main_cset_slider_pane_t

0x646b,	// (0x00015390) cset_list_set_pane_ParamLimits

0x646b,	// (0x00015390) cset_list_set_pane

0x647d,	// (0x000153a2) aid_position_infowindow_above

0x6485,	// (0x000153aa) aid_position_infowindow_below

0xd434,	// (0x0001c359) cset_list_set_pane_g1_ParamLimits

0xd434,	// (0x0001c359) cset_list_set_pane_g1

0xd440,	// (0x0001c365) cset_list_set_pane_g3_ParamLimits

0xd440,	// (0x0001c365) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0001e8df) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0001e8df) cset_list_set_pane_g

0xd44f,	// (0x0001c374) cset_list_set_pane_t1_ParamLimits

0xd44f,	// (0x0001c374) cset_list_set_pane_t1

0x957b,	// (0x000184a0) list_highlight_pane_cp021_ParamLimits

0x957b,	// (0x000184a0) list_highlight_pane_cp021

0xab77,	// (0x00019a9c) cset_slider_pane_g1

0xab89,	// (0x00019aae) cset_slider_pane_g2

0xab80,	// (0x00019aa5) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0001e8e4) cset_slider_pane_g

0xd464,	// (0x0001c389) aid_area_touch_cam4_zoom

0xd46c,	// (0x0001c391) cam4_zoom_cont_pane

0xd474,	// (0x0001c399) cam4_zoom_pane_g1

0xd47c,	// (0x0001c3a1) cam4_zoom_pane_g2

0x648d,	// (0x000153b2) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0001e8eb) cam4_zoom_pane_g

0xd484,	// (0x0001c3a9) cam4_zoom_cont_pane_g1

0xd48d,	// (0x0001c3b2) cam4_zoom_cont_pane_g2

0xd496,	// (0x0001c3bb) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0001e8f2) cam4_zoom_cont_pane_g

0x578c,	// (0x000146b1) call4_image_pane_ParamLimits

0x578c,	// (0x000146b1) call4_image_pane

0x57f3,	// (0x00014718) call4_windows_conf_pane_ParamLimits

0x5838,	// (0x0001475d) popup_call4_audio_in_window_ParamLimits

0x5838,	// (0x0001475d) popup_call4_audio_in_window

0x950b,	// (0x00018430) bg_popup_call2_act_pane_cp02

0xd05c,	// (0x0001bf81) call4_list_conf_pane

0xc417,	// (0x0001b33c) call4_image_pane_g1

0xc417,	// (0x0001b33c) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x0001e5fd) call4_image_pane_g

0xd49f,	// (0x0001c3c4) list_single_graphic_popup_conf4_pane_ParamLimits

0xd49f,	// (0x0001c3c4) list_single_graphic_popup_conf4_pane

0x950b,	// (0x00018430) list_highlight_pane_cp022

0xd4b2,	// (0x0001c3d7) list_single_graphic_popup_conf4_pane_g1

0xa736,	// (0x0001965b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0001e8f9) list_single_graphic_popup_conf4_pane_g

0xd4ba,	// (0x0001c3df) list_single_graphic_popup_conf4_pane_t1

0x1454,	// (0x00010379) popup_vtel_slider_window_ParamLimits

0x1454,	// (0x00010379) popup_vtel_slider_window

0xcfda,	// (0x0001beff) dialer2_ne_pane_t2_ParamLimits

0xcfda,	// (0x0001beff) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0001e7da) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0001e7da) dialer2_ne_pane_t

0xc1fc,	// (0x0001b121) bg_popup_sub_pane_cp010_ParamLimits

0xc1fc,	// (0x0001b121) bg_popup_sub_pane_cp010

0x6495,	// (0x000153ba) popup_vtel_slider_window_g1_ParamLimits

0x6495,	// (0x000153ba) popup_vtel_slider_window_g1

0x64a8,	// (0x000153cd) popup_vtel_slider_window_g2_ParamLimits

0x64a8,	// (0x000153cd) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0001e8fe) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0001e8fe) popup_vtel_slider_window_g

0x64fe,	// (0x00015423) vtel_slider_pane_ParamLimits

0x64fe,	// (0x00015423) vtel_slider_pane

0x6520,	// (0x00015445) vtel_slider_pane_g1_ParamLimits

0x6520,	// (0x00015445) vtel_slider_pane_g1

0x6534,	// (0x00015459) vtel_slider_pane_g2_ParamLimits

0x6534,	// (0x00015459) vtel_slider_pane_g2

0x654c,	// (0x00015471) vtel_slider_pane_g3_ParamLimits

0x654c,	// (0x00015471) vtel_slider_pane_g3

0x6520,	// (0x00015445) vtel_slider_pane_g4_ParamLimits

0x6520,	// (0x00015445) vtel_slider_pane_g4

0x6562,	// (0x00015487) vtel_slider_pane_g5_ParamLimits

0x6562,	// (0x00015487) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0001e907) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0001e907) vtel_slider_pane_g

0x957b,	// (0x000184a0) main_gallery2_pane

0x5b5b,	// (0x00014a80) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b5b,	// (0x00014a80) aid_size_row_itut2_dropdow_list

0x5be7,	// (0x00014b0c) grid_vitu2_function_top_pane_ParamLimits

0x5be7,	// (0x00014b0c) grid_vitu2_function_top_pane

0x5c51,	// (0x00014b76) popup_vitu2_dropdown_list_window_ParamLimits

0x5c51,	// (0x00014b76) popup_vitu2_dropdown_list_window

0x5c7a,	// (0x00014b9f) popup_vitu2_match_list_window

0x6586,	// (0x000154ab) cell_vitu2_function_top_pane_ParamLimits

0x6586,	// (0x000154ab) cell_vitu2_function_top_pane

0x659e,	// (0x000154c3) cell_vitu2_function_top_pane_cp01_ParamLimits

0x659e,	// (0x000154c3) cell_vitu2_function_top_pane_cp01

0x65ba,	// (0x000154df) cell_vitu2_function_top_wide_pane_ParamLimits

0x65ba,	// (0x000154df) cell_vitu2_function_top_wide_pane

0x957b,	// (0x000184a0) bg_button_pane_cp012

0x65d6,	// (0x000154fb) cell_vitu2_function_top_pane_g1

0xd4d0,	// (0x0001c3f5) bg_button_pane_cp013_ParamLimits

0xd4d0,	// (0x0001c3f5) bg_button_pane_cp013

0x65ea,	// (0x0001550f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x65ea,	// (0x0001550f) cell_vitu2_function_top_wide_pane_g1

0x957b,	// (0x000184a0) bg_popup_sub_pane_cp20

0x6602,	// (0x00015527) list_vitu2_match_list_pane

0xd20b,	// (0x0001c130) bg_popup_sub_pane_cp20_g1

0xd213,	// (0x0001c138) bg_popup_sub_pane_cp20_g2

0xa17b,	// (0x000190a0) bg_popup_sub_pane_cp20_g3

0xd21b,	// (0x0001c140) bg_popup_sub_pane_cp20_g4

0xa15b,	// (0x00019080) bg_popup_sub_pane_cp20_g5

0xd4ec,	// (0x0001c411) bg_popup_sub_pane_cp20_g6

0xd22b,	// (0x0001c150) bg_popup_sub_pane_cp20_g7

0xd233,	// (0x0001c158) bg_popup_sub_pane_cp20_g8

0xd23b,	// (0x0001c160) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0001e912) bg_popup_sub_pane_cp20_g

0xd4f4,	// (0x0001c419) list_vitu2_match_list_item_pane_ParamLimits

0xd4f4,	// (0x0001c419) list_vitu2_match_list_item_pane

0xd506,	// (0x0001c42b) list_vitu2_match_list_item_pane_t1

0x950b,	// (0x00018430) bg_popup_sub_pane_cp21

0xa5eb,	// (0x00019510) grid_vitu2_dropdown_list_pane

0x6670,	// (0x00015595) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6670,	// (0x00015595) cell_vitu2_dropdown_list_char_pane

0x6691,	// (0x000155b6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6691,	// (0x000155b6) cell_vitu2_dropdown_list_ctrl_pane

0xd514,	// (0x0001c439) cell_vitu2_dropdown_list_char_pane_g1

0xd51d,	// (0x0001c442) cell_vitu2_dropdown_list_char_pane_g2

0xd526,	// (0x0001c44b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0001e92f) cell_vitu2_dropdown_list_char_pane_g

0x66bd,	// (0x000155e2) cell_vitu2_dropdown_list_char_pane_t1

0x66cb,	// (0x000155f0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x66cb,	// (0x000155f0) cell_vitu2_dropdown_list_ctrl_pane_g1

0x66d8,	// (0x000155fd) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x66d8,	// (0x000155fd) cell_vitu2_dropdown_list_ctrl_pane_g2

0x66e5,	// (0x0001560a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x66e5,	// (0x0001560a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x66f2,	// (0x00015617) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x66f2,	// (0x00015617) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc67a,	// (0x0001b59f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc67a,	// (0x0001b59f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0001e936) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0001e936) cell_vitu2_dropdown_list_ctrl_pane_g

0x670e,	// (0x00015633) aid_size_cell_gallery2_ParamLimits

0x670e,	// (0x00015633) aid_size_cell_gallery2

0x672c,	// (0x00015651) grid_gallery2_pane_ParamLimits

0x672c,	// (0x00015651) grid_gallery2_pane

0x6746,	// (0x0001566b) scroll_pane_cp029_ParamLimits

0x6746,	// (0x0001566b) scroll_pane_cp029

0x6757,	// (0x0001567c) cell_gallery2_pane_ParamLimits

0x6757,	// (0x0001567c) cell_gallery2_pane

0xd52f,	// (0x0001c454) cell_gallery2_pane_g2

0x67b6,	// (0x000156db) cell_gallery2_pane_g3

0xd537,	// (0x0001c45c) cell_gallery2_pane_g4

0xd53f,	// (0x0001c464) cell_gallery2_pane_g5

0x9f18,	// (0x00018e3d) grid_highlight_pane_cp10

0x5c7a,	// (0x00014b9f) popup_vitu2_match_list_window_ParamLimits

0x5c91,	// (0x00014bb6) popup_vitu2_query_window_ParamLimits

0x5c91,	// (0x00014bb6) popup_vitu2_query_window

0x950b,	// (0x00018430) bg_vitu2_candi_button_pane

0xd514,	// (0x0001c439) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd51d,	// (0x0001c442) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd526,	// (0x0001c44b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x67be,	// (0x000156e3) bg_button_pane_cp015

0x67d0,	// (0x000156f5) bg_button_pane_cp016

0x67e3,	// (0x00015708) bg_button_pane_cp017

0xbefc,	// (0x0001ae21) bg_popup_sub_pane_cp22

0xd547,	// (0x0001c46c) popup_vitu2_query_window_g1

0x6828,	// (0x0001574d) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0001e941) popup_vitu2_query_window_g

0x6847,	// (0x0001576c) popup_vitu2_query_window_t1_ParamLimits

0x6847,	// (0x0001576c) popup_vitu2_query_window_t1

0x687c,	// (0x000157a1) popup_vitu2_query_window_t2_ParamLimits

0x687c,	// (0x000157a1) popup_vitu2_query_window_t2

0x688e,	// (0x000157b3) popup_vitu2_query_window_t3_ParamLimits

0x688e,	// (0x000157b3) popup_vitu2_query_window_t3

0x68b6,	// (0x000157db) popup_vitu2_query_window_t4_ParamLimits

0x68b6,	// (0x000157db) popup_vitu2_query_window_t4

0x68d7,	// (0x000157fc) popup_vitu2_query_window_t5_ParamLimits

0x68d7,	// (0x000157fc) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0001e948) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0001e948) popup_vitu2_query_window_t

0xd343,	// (0x0001c268) main_cset_text_pane

0x61d3,	// (0x000150f8) aid_area_touch_slider_ParamLimits

0x61ef,	// (0x00015114) cset_slider_pane_ParamLimits

0x6219,	// (0x0001513e) main_cset_slider_pane_g1_ParamLimits

0x622e,	// (0x00015153) main_cset_slider_pane_g2_ParamLimits

0xd364,	// (0x0001c289) main_cset_slider_pane_g3_ParamLimits

0xd364,	// (0x0001c289) main_cset_slider_pane_g3

0x6243,	// (0x00015168) main_cset_slider_pane_g4_ParamLimits

0x6243,	// (0x00015168) main_cset_slider_pane_g4

0x6252,	// (0x00015177) main_cset_slider_pane_g5_ParamLimits

0x6252,	// (0x00015177) main_cset_slider_pane_g5

0x625e,	// (0x00015183) main_cset_slider_pane_g6_ParamLimits

0x625e,	// (0x00015183) main_cset_slider_pane_g6

0xf976,	// (0x0001e89b) main_cset_slider_pane_g_ParamLimits

0xd394,	// (0x0001c2b9) main_cset_slider_pane_t1_ParamLimits

0x62ea,	// (0x0001520f) main_cset_slider_pane_t2_ParamLimits

0x6304,	// (0x00015229) main_cset_slider_pane_t3_ParamLimits

0x631e,	// (0x00015243) main_cset_slider_pane_t4_ParamLimits

0x6338,	// (0x0001525d) main_cset_slider_pane_t5_ParamLimits

0x6352,	// (0x00015277) main_cset_slider_pane_t6_ParamLimits

0x6367,	// (0x0001528c) main_cset_slider_pane_t7_ParamLimits

0x6391,	// (0x000152b6) main_cset_slider_pane_t8_ParamLimits

0x6391,	// (0x000152b6) main_cset_slider_pane_t8

0x63b9,	// (0x000152de) main_cset_slider_pane_t9_ParamLimits

0x63b9,	// (0x000152de) main_cset_slider_pane_t9

0x63e1,	// (0x00015306) main_cset_slider_pane_t10_ParamLimits

0x63e1,	// (0x00015306) main_cset_slider_pane_t10

0x6409,	// (0x0001532e) main_cset_slider_pane_t11_ParamLimits

0x6409,	// (0x0001532e) main_cset_slider_pane_t11

0x6431,	// (0x00015356) main_cset_slider_pane_t12_ParamLimits

0x6431,	// (0x00015356) main_cset_slider_pane_t12

0x644e,	// (0x00015373) main_cset_slider_pane_t13_ParamLimits

0x644e,	// (0x00015373) main_cset_slider_pane_t13

0xf99b,	// (0x0001e8c0) main_cset_slider_pane_t_ParamLimits

0x950b,	// (0x00018430) bg_popup_sub_pane_cp011

0xd553,	// (0x0001c478) main_cset_text_pane_g1

0xd55b,	// (0x0001c480) main_cset_text_pane_t1

0xd569,	// (0x0001c48e) main_cset_text_pane_t2

0xd577,	// (0x0001c49c) main_cset_text_pane_t3

0xd585,	// (0x0001c4aa) main_cset_text_pane_t4

0xd593,	// (0x0001c4b8) main_cset_text_pane_t5

0xd5a1,	// (0x0001c4c6) main_cset_text_pane_t6

0xd5af,	// (0x0001c4d4) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0001e957) main_cset_text_pane_t

0x950b,	// (0x00018430) main_cam4_burst_pane

0x950b,	// (0x00018430) main_cam5_pane

0x6112,	// (0x00015037) bg_button_pane_cp019

0x611b,	// (0x00015040) bg_button_pane_cp020

0xd370,	// (0x0001c295) main_cset_slider_pane_g7_ParamLimits

0xd370,	// (0x0001c295) main_cset_slider_pane_g7

0xd37c,	// (0x0001c2a1) main_cset_slider_pane_g8_ParamLimits

0xd37c,	// (0x0001c2a1) main_cset_slider_pane_g8

0x6272,	// (0x00015197) main_cset_slider_pane_g9_ParamLimits

0x6272,	// (0x00015197) main_cset_slider_pane_g9

0x627e,	// (0x000151a3) main_cset_slider_pane_g10_ParamLimits

0x627e,	// (0x000151a3) main_cset_slider_pane_g10

0x628a,	// (0x000151af) main_cset_slider_pane_g11_ParamLimits

0x628a,	// (0x000151af) main_cset_slider_pane_g11

0x6296,	// (0x000151bb) main_cset_slider_pane_g12_ParamLimits

0x6296,	// (0x000151bb) main_cset_slider_pane_g12

0x62a2,	// (0x000151c7) main_cset_slider_pane_g13_ParamLimits

0x62a2,	// (0x000151c7) main_cset_slider_pane_g13

0x62ae,	// (0x000151d3) main_cset_slider_pane_g14_ParamLimits

0x62ae,	// (0x000151d3) main_cset_slider_pane_g14

0x62ba,	// (0x000151df) main_cset_slider_pane_g15_ParamLimits

0x62ba,	// (0x000151df) main_cset_slider_pane_g15

0xd3c2,	// (0x0001c2e7) main_cset_slider_pane_t14_ParamLimits

0xd3c2,	// (0x0001c2e7) main_cset_slider_pane_t14

0xd3fb,	// (0x0001c320) main_cset_slider_pane_t15_ParamLimits

0xd3fb,	// (0x0001c320) main_cset_slider_pane_t15

0x694e,	// (0x00015873) aid_cam4_burst_size_cell_ParamLimits

0x694e,	// (0x00015873) aid_cam4_burst_size_cell

0x696e,	// (0x00015893) grid_cam4_burst_pane_ParamLimits

0x696e,	// (0x00015893) grid_cam4_burst_pane

0x69a6,	// (0x000158cb) linegrid_cam4_burst_pane_ParamLimits

0x69a6,	// (0x000158cb) linegrid_cam4_burst_pane

0xd5bd,	// (0x0001c4e2) scroll_pane_cp30_ParamLimits

0xd5bd,	// (0x0001c4e2) scroll_pane_cp30

0x69ca,	// (0x000158ef) cell_cam4_burst_pane_ParamLimits

0x69ca,	// (0x000158ef) cell_cam4_burst_pane

0xd5c9,	// (0x0001c4ee) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5c9,	// (0x0001c4ee) linegrid_cam4_burst_pane_g1

0x6a17,	// (0x0001593c) linegrid_cam4_burst_pane_g2_ParamLimits

0x6a17,	// (0x0001593c) linegrid_cam4_burst_pane_g2

0xd5d6,	// (0x0001c4fb) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5d6,	// (0x0001c4fb) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0001e966) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0001e966) linegrid_cam4_burst_pane_g

0x6a28,	// (0x0001594d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a28,	// (0x0001594d) linegrid_cam4_burst_pane_g3_copy1

0xd5e3,	// (0x0001c508) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5e3,	// (0x0001c508) linegrid_cam4_burst_pane_g4

0x6a42,	// (0x00015967) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a42,	// (0x00015967) linegrid_cam4_burst_pane_g5

0x6a53,	// (0x00015978) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a53,	// (0x00015978) linegrid_cam4_burst_pane_g6

0xd5f0,	// (0x0001c515) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5f0,	// (0x0001c515) linegrid_cam4_burst_pane_g7

0x6a6a,	// (0x0001598f) cell_cam4_burst_pane_g1

0xd609,	// (0x0001c52e) main_cam5_pane_t1_ParamLimits

0xd609,	// (0x0001c52e) main_cam5_pane_t1

0xd61b,	// (0x0001c540) main_cam5_pane_t2_ParamLimits

0xd61b,	// (0x0001c540) main_cam5_pane_t2

0xd62d,	// (0x0001c552) main_cam5_pane_t3_ParamLimits

0xd62d,	// (0x0001c552) main_cam5_pane_t3

0xd63f,	// (0x0001c564) main_cam5_pane_t4_ParamLimits

0xd63f,	// (0x0001c564) main_cam5_pane_t4

0xd657,	// (0x0001c57c) main_cam5_pane_t5_ParamLimits

0xd657,	// (0x0001c57c) main_cam5_pane_t5

0xd66b,	// (0x0001c590) main_cam5_pane_t6_ParamLimits

0xd66b,	// (0x0001c590) main_cam5_pane_t6

0xd67f,	// (0x0001c5a4) main_cam5_pane_t7_ParamLimits

0xd67f,	// (0x0001c5a4) main_cam5_pane_t7

0xd691,	// (0x0001c5b6) main_cam5_pane_t8_ParamLimits

0xd691,	// (0x0001c5b6) main_cam5_pane_t8

0xd6ad,	// (0x0001c5d2) main_cam5_pane_t9_ParamLimits

0xd6ad,	// (0x0001c5d2) main_cam5_pane_t9

0xd6bf,	// (0x0001c5e4) main_cam5_pane_t10_ParamLimits

0xd6bf,	// (0x0001c5e4) main_cam5_pane_t10

0xd6d1,	// (0x0001c5f6) main_cam5_pane_t11_ParamLimits

0xd6d1,	// (0x0001c5f6) main_cam5_pane_t11

0xd6e3,	// (0x0001c608) main_cam5_pane_t12_ParamLimits

0xd6e3,	// (0x0001c608) main_cam5_pane_t12

0xd6f8,	// (0x0001c61d) main_cam5_pane_t13_ParamLimits

0xd6f8,	// (0x0001c61d) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0001e972) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0001e972) main_cam5_pane_t

0x03b9,	// (0x0000f2de) popup_scut_keymap_window_ParamLimits

0x03b9,	// (0x0000f2de) popup_scut_keymap_window

0x6a7d,	// (0x000159a2) aid_size_cell_brow_shortcut

0x9f18,	// (0x00018e3d) bg_popup_window_pane_cp010

0x6a89,	// (0x000159ae) grid_scut_pane

0x6a95,	// (0x000159ba) cell_scut_pane_ParamLimits

0x6a95,	// (0x000159ba) cell_scut_pane

0x6aac,	// (0x000159d1) cell_scut_pane_g1

0xd715,	// (0x0001c63a) cell_scut_pane_t1

0xd724,	// (0x0001c649) cell_scut_pane_t2

0x6ab5,	// (0x000159da) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0001e98d) cell_scut_pane_t

0x4661,	// (0x00013586) main_mup3_pane_g8_ParamLimits

0x4661,	// (0x00013586) main_mup3_pane_g8

0x5b73,	// (0x00014a98) area_vitu2_query_pane_ParamLimits

0x5b73,	// (0x00014a98) area_vitu2_query_pane

0x67f6,	// (0x0001571b) input_focus_pane_cp08

0xd733,	// (0x0001c658) area_vitu2_query_pane_g1

0x6ac3,	// (0x000159e8) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0001e994) area_vitu2_query_pane_g

0x6ad4,	// (0x000159f9) area_vitu2_query_pane_t1_ParamLimits

0x6ad4,	// (0x000159f9) area_vitu2_query_pane_t1

0x6ae8,	// (0x00015a0d) area_vitu2_query_pane_t2_ParamLimits

0x6ae8,	// (0x00015a0d) area_vitu2_query_pane_t2

0x6afc,	// (0x00015a21) area_vitu2_query_pane_t3_ParamLimits

0x6afc,	// (0x00015a21) area_vitu2_query_pane_t3

0xd73f,	// (0x0001c664) area_vitu2_query_pane_t4_ParamLimits

0xd73f,	// (0x0001c664) area_vitu2_query_pane_t4

0xd767,	// (0x0001c68c) area_vitu2_query_pane_t5_ParamLimits

0xd767,	// (0x0001c68c) area_vitu2_query_pane_t5

0xd78f,	// (0x0001c6b4) area_vitu2_query_pane_t6_ParamLimits

0xd78f,	// (0x0001c6b4) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0001e999) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0001e999) area_vitu2_query_pane_t

0x6b24,	// (0x00015a49) bg_button_pane_cp018

0x6b32,	// (0x00015a57) bg_button_pane_cp021

0x6b3e,	// (0x00015a63) bg_button_pane_cp022

0x6b4d,	// (0x00015a72) input_focus_pane_cp09

0xa872,	// (0x00019797) aid_size_touch_mv_arrow_left

0xa89b,	// (0x000197c0) aid_size_touch_mv_arrow_right

0x62d2,	// (0x000151f7) main_cset_slider_pane_g16_ParamLimits

0x62d2,	// (0x000151f7) main_cset_slider_pane_g16

0x62de,	// (0x00015203) main_cset_slider_pane_g17_ParamLimits

0x62de,	// (0x00015203) main_cset_slider_pane_g17

0x6a6a,	// (0x0001598f) cell_cam4_burst_pane_g1_ParamLimits

0x950b,	// (0x00018430) compa_mode_pane

0x64b8,	// (0x000153dd) popup_vtel_slider_window_g3_ParamLimits

0x64b8,	// (0x000153dd) popup_vtel_slider_window_g3

0x64cf,	// (0x000153f4) popup_vtel_slider_window_g4_ParamLimits

0x64cf,	// (0x000153f4) popup_vtel_slider_window_g4

0x64e6,	// (0x0001540b) popup_vtel_slider_window_t1_ParamLimits

0x64e6,	// (0x0001540b) popup_vtel_slider_window_t1

0x950b,	// (0x00018430) main_cl_pane

0xbf24,	// (0x0001ae49) popup_imed_adjust2_window_ParamLimits

0xbefc,	// (0x0001ae21) bg_tb_trans_pane_cp05_ParamLimits

0xc969,	// (0x0001b88e) popup_imed_adjust2_window_g1_ParamLimits

0xc978,	// (0x0001b89d) popup_imed_adjust2_window_g2_ParamLimits

0xc978,	// (0x0001b89d) popup_imed_adjust2_window_g2

0xc984,	// (0x0001b8a9) popup_imed_adjust2_window_g3_ParamLimits

0xc984,	// (0x0001b8a9) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x0001e700) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x0001e700) popup_imed_adjust2_window_g

0xc990,	// (0x0001b8b5) popup_imed_adjust2_window_t1_ParamLimits

0xc9a8,	// (0x0001b8cd) slider_imed_adjust_pane_ParamLimits

0xc9bc,	// (0x0001b8e1) slider_imed_adjust_pane_g1_ParamLimits

0xc9cc,	// (0x0001b8f1) slider_imed_adjust_pane_g2_ParamLimits

0xc9dc,	// (0x0001b901) slider_imed_adjust_pane_g3_ParamLimits

0xc9ed,	// (0x0001b912) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x0001e707) slider_imed_adjust_pane_g_ParamLimits

0x58fc,	// (0x00014821) aid_touch_area_cam4_ParamLimits

0x58fc,	// (0x00014821) aid_touch_area_cam4

0xd0a0,	// (0x0001bfc5) battery_pane_cp01

0x59cb,	// (0x000148f0) main_camera4_pane_g6_ParamLimits

0x59cb,	// (0x000148f0) main_camera4_pane_g6

0x59f5,	// (0x0001491a) main_camera4_pane_t2_ParamLimits

0x59f5,	// (0x0001491a) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0001e80e) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0001e80e) main_camera4_pane_t

0x5a2a,	// (0x0001494f) aid_touch_area_vid4_ParamLimits

0x5a2a,	// (0x0001494f) aid_touch_area_vid4

0x5a7e,	// (0x000149a3) main_video4_pane_g5_ParamLimits

0x5a7e,	// (0x000149a3) main_video4_pane_g5

0x5aa3,	// (0x000149c8) vid4_progress_pane_ParamLimits

0x5aa3,	// (0x000149c8) vid4_progress_pane

0xd388,	// (0x0001c2ad) main_cset_slider_pane_g18_ParamLimits

0xd388,	// (0x0001c2ad) main_cset_slider_pane_g18

0xd5fd,	// (0x0001c522) cell_cam4_burst_pane_g2_ParamLimits

0xd5fd,	// (0x0001c522) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0001e96d) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0001e96d) cell_cam4_burst_pane_g

0x9cde,	// (0x00018c03) bg_cl_pane_ParamLimits

0x9cde,	// (0x00018c03) bg_cl_pane

0x6b5c,	// (0x00015a81) cl_header_pane_ParamLimits

0x6b5c,	// (0x00015a81) cl_header_pane

0x6b70,	// (0x00015a95) cl_listscroll_pane_ParamLimits

0x6b70,	// (0x00015a95) cl_listscroll_pane

0xd7db,	// (0x0001c700) bg_cl_pane_g1

0xd7e3,	// (0x0001c708) bg_cl_pane_g2

0xd7eb,	// (0x0001c710) bg_cl_pane_g3

0xd7f3,	// (0x0001c718) bg_cl_pane_g4

0xd7fb,	// (0x0001c720) bg_cl_pane_g5

0xd803,	// (0x0001c728) bg_cl_pane_g6

0xd80b,	// (0x0001c730) bg_cl_pane_g7

0xd813,	// (0x0001c738) bg_cl_pane_g8

0xd81b,	// (0x0001c740) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0001e9a8) bg_cl_pane_g

0x6b80,	// (0x00015aa5) aid_height_cl_leading_ParamLimits

0x6b80,	// (0x00015aa5) aid_height_cl_leading

0x6b8c,	// (0x00015ab1) aid_height_cl_text_ParamLimits

0x6b8c,	// (0x00015ab1) aid_height_cl_text

0x957b,	// (0x000184a0) bg_cl_header_pane_ParamLimits

0x957b,	// (0x000184a0) bg_cl_header_pane

0x6bab,	// (0x00015ad0) cl_header_pane_g1_ParamLimits

0x6bab,	// (0x00015ad0) cl_header_pane_g1

0x6bc1,	// (0x00015ae6) cl_header_pane_t1_ParamLimits

0x6bc1,	// (0x00015ae6) cl_header_pane_t1

0xd823,	// (0x0001c748) cl_list_pane

0xd35b,	// (0x0001c280) hc_scroll_pane_cp01

0xa15b,	// (0x00019080) bg_cl_header_pane_g1

0xd20b,	// (0x0001c130) bg_cl_header_pane_g2

0xa17b,	// (0x000190a0) bg_cl_header_pane_g3

0xd21b,	// (0x0001c140) bg_cl_header_pane_g4

0xd213,	// (0x0001c138) bg_cl_header_pane_g5

0xd4ec,	// (0x0001c411) bg_cl_header_pane_g6

0xd233,	// (0x0001c158) bg_cl_header_pane_g7

0xd23b,	// (0x0001c160) bg_cl_header_pane_g8

0xd22b,	// (0x0001c150) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0001e9bb) bg_cl_header_pane_g

0x6bda,	// (0x00015aff) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6bda,	// (0x00015aff) hc_cl_list_double_graphic_heading_pane

0x6beb,	// (0x00015b10) hc_cl_list_single_graphic_pane_ParamLimits

0x6beb,	// (0x00015b10) hc_cl_list_single_graphic_pane

0x6c01,	// (0x00015b26) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6c01,	// (0x00015b26) hc_cl_list_single_graphic_pane_g1

0x6c0d,	// (0x00015b32) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6c0d,	// (0x00015b32) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0001e9ce) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0001e9ce) hc_cl_list_single_graphic_pane_g

0x6c21,	// (0x00015b46) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6c21,	// (0x00015b46) hc_cl_list_single_graphic_pane_t1

0x6c01,	// (0x00015b26) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6c01,	// (0x00015b26) hc_cl_list_double_graphic_heading_pane_g1

0x6c36,	// (0x00015b5b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c36,	// (0x00015b5b) hc_cl_list_double_graphic_heading_pane_g2

0x6c4a,	// (0x00015b6f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c4a,	// (0x00015b6f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0001e9d3) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0001e9d3) hc_cl_list_double_graphic_heading_pane_g

0x6c5e,	// (0x00015b83) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c5e,	// (0x00015b83) hc_cl_list_double_graphic_heading_pane_t1

0x6c73,	// (0x00015b98) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6c73,	// (0x00015b98) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0001e9da) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0001e9da) hc_cl_list_double_graphic_heading_pane_t

0xd834,	// (0x0001c759) vid4_progress_pane_g1

0xd844,	// (0x0001c769) vid4_progress_pane_g2

0x6c88,	// (0x00015bad) vid4_progress_pane_g3

0xd854,	// (0x0001c779) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0001e9df) vid4_progress_pane_g

0x6c9a,	// (0x00015bbf) vid4_progress_pane_t1

0xd86c,	// (0x0001c791) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0001e9ea) vid4_progress_pane_t

0x6cb2,	// (0x00015bd7) wait_bar_pane_cp07

0xc20a,	// (0x0001b12f) blid_firmament_pane_ParamLimits

0xc24d,	// (0x0001b172) popup_blid_sat_info2_window_g1

0xc271,	// (0x0001b196) popup_blid_sat_info2_window_t3

0xc27f,	// (0x0001b1a4) popup_blid_sat_info2_window_t4

0xc28d,	// (0x0001b1b2) popup_blid_sat_info2_window_t5

0xc29b,	// (0x0001b1c0) popup_blid_sat_info2_window_t6

0xc2ab,	// (0x0001b1d0) popup_blid_sat_info2_window_t7

0xc2b9,	// (0x0001b1de) popup_blid_sat_info2_window_t8

0xc2c7,	// (0x0001b1ec) popup_blid_sat_info2_window_t9

0xc2d5,	// (0x0001b1fa) popup_blid_sat_info2_window_t10

0xc397,	// (0x0001b2bc) aid_firma_cardinal_ParamLimits

0xc3ab,	// (0x0001b2d0) blid_firmament_pane_t1_ParamLimits

0xc3c2,	// (0x0001b2e7) blid_firmament_pane_t2_ParamLimits

0xc3d9,	// (0x0001b2fe) blid_firmament_pane_t3_ParamLimits

0xc3f0,	// (0x0001b315) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x0001e5f4) blid_firmament_pane_t_ParamLimits

0xc407,	// (0x0001b32c) blid_sat_info_pane_ParamLimits

0x957b,	// (0x000184a0) main_cam_set_pane_ParamLimits

0x4f25,	// (0x00013e4a) aid_size_cell_colour_35_ParamLimits

0x4f45,	// (0x00013e6a) aid_size_cell_colour_112_ParamLimits

0x4f65,	// (0x00013e8a) aid_size_cell_effect_ParamLimits

0xbefc,	// (0x0001ae21) bg_tb_trans_pane_cp02_ParamLimits

0xa3f1,	// (0x00019316) heading_imed_pane_ParamLimits

0x4f85,	// (0x00013eaa) listscroll_imed_pane_ParamLimits

0xb522,	// (0x0001a447) popup_call2_audio_first_window_g5_ParamLimits

0xb522,	// (0x0001a447) popup_call2_audio_first_window_g5

0x5518,	// (0x0001443d) aid_size_touch_image3_arrow_left_ParamLimits

0x5518,	// (0x0001443d) aid_size_touch_image3_arrow_left

0x5544,	// (0x00014469) aid_size_touch_image3_arrow_right_ParamLimits

0x5544,	// (0x00014469) aid_size_touch_image3_arrow_right

0xd881,	// (0x0001c7a6) vid4_progress_pane_t3

0x5298,	// (0x000141bd) main_hwr_training_symbol_option_pane_ParamLimits

0x5298,	// (0x000141bd) main_hwr_training_symbol_option_pane

0xcc56,	// (0x0001bb7b) popup_hwr_training_preview_window_ParamLimits

0xcc56,	// (0x0001bb7b) popup_hwr_training_preview_window

0x52b8,	// (0x000141dd) hwr_training_navi_pane_g5_ParamLimits

0x52b8,	// (0x000141dd) hwr_training_navi_pane_g5

0xd1e7,	// (0x0001c10c) popup_char_count_window

0x957b,	// (0x000184a0) bg_popup_sub_pane_cp20_ParamLimits

0x6602,	// (0x00015527) list_vitu2_match_list_pane_ParamLimits

0x6611,	// (0x00015536) vitu2_page_scroll_pane_ParamLimits

0x6611,	// (0x00015536) vitu2_page_scroll_pane

0xd8b8,	// (0x0001c7dd) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd8b8,	// (0x0001c7dd) list_single_hwr_training_symbol_option_pane

0xd8cb,	// (0x0001c7f0) list_single_hwr_training_symbol_option_pane_g1

0xd8d3,	// (0x0001c7f8) list_single_hwr_training_symbol_option_pane_t1

0xd8e1,	// (0x0001c806) bg_button_pane_cp023

0xd8ea,	// (0x0001c80f) bg_button_pane_cp024

0x6cfd,	// (0x00015c22) vitu2_page_scroll_pane_g1

0x6d05,	// (0x00015c2a) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0001e9f1) vitu2_page_scroll_pane_g

0x6d0d,	// (0x00015c32) vitu2_page_scroll_pane_t1

0xc126,	// (0x0001b04b) popup_char_count_window_g1

0xd91d,	// (0x0001c842) popup_char_count_window_g2

0xd926,	// (0x0001c84b) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0001e9f6) popup_char_count_window_g

0xd92f,	// (0x0001c854) popup_char_count_window_t1

0x950b,	// (0x00018430) main_vded2_pane

0xc955,	// (0x0001b87a) aid_size_cell_imed_line

0xc95f,	// (0x0001b884) grid_imed_line_width_pane

0xd158,	// (0x0001c07d) vid4_indicators_pane_g4

0xd93d,	// (0x0001c862) cell_imed_line_width_pane_ParamLimits

0xd93d,	// (0x0001c862) cell_imed_line_width_pane

0xd951,	// (0x0001c876) cell_imed_line_width_pane_g1

0xd95a,	// (0x0001c87f) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0001e9fd) cell_imed_line_width_pane_g

0x6d1c,	// (0x00015c41) main_vded2_pane_g1_ParamLimits

0x6d1c,	// (0x00015c41) main_vded2_pane_g1

0x6d32,	// (0x00015c57) main_vded2_pane_g2_ParamLimits

0x6d32,	// (0x00015c57) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0001ea02) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0001ea02) main_vded2_pane_g

0x6d44,	// (0x00015c69) vded2_slider_pane_ParamLimits

0x6d44,	// (0x00015c69) vded2_slider_pane

0x6d54,	// (0x00015c79) aid_size_touch_vded2_end

0x6d5e,	// (0x00015c83) aid_size_touch_vded2_playhead

0xd962,	// (0x0001c887) aid_size_touch_vded2_start

0xd96a,	// (0x0001c88f) vded2_slider_bg_pane

0xd973,	// (0x0001c898) vded2_slider_pane_g1

0xd97c,	// (0x0001c8a1) vded2_slider_pane_g2

0x6d68,	// (0x00015c8d) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0001ea07) vded2_slider_pane_g

0xd984,	// (0x0001c8a9) vded2_slider_bg_pane_g1

0xd98d,	// (0x0001c8b2) vded2_slider_bg_pane_g2

0xd996,	// (0x0001c8bb) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0001ea0e) vded2_slider_bg_pane_g

0x2c54,	// (0x00011b79) aid_postcard_touch_down_pane_ParamLimits

0x2c54,	// (0x00011b79) aid_postcard_touch_down_pane

0x2c6a,	// (0x00011b8f) aid_postcard_touch_up_pane_ParamLimits

0x2c6a,	// (0x00011b8f) aid_postcard_touch_up_pane

0x950b,	// (0x00018430) main_blid2_pane

0xbf0a,	// (0x0001ae2f) popup_blid2_search_window

0x950b,	// (0x00018430) blid2_gps_pane

0x950b,	// (0x00018430) blid2_navig_pane

0x950b,	// (0x00018430) blid2_search_pane

0x950b,	// (0x00018430) blid2_tripm_pane

0x6d73,	// (0x00015c98) blid2_search_pane_g1_ParamLimits

0x6d73,	// (0x00015c98) blid2_search_pane_g1

0x6d8d,	// (0x00015cb2) blid2_search_pane_t1_ParamLimits

0x6d8d,	// (0x00015cb2) blid2_search_pane_t1

0x6d9f,	// (0x00015cc4) aid_size_cell_blid2_gps_ParamLimits

0x6d9f,	// (0x00015cc4) aid_size_cell_blid2_gps

0x6db7,	// (0x00015cdc) blid2_gps_pane_g1_ParamLimits

0x6db7,	// (0x00015cdc) blid2_gps_pane_g1

0x6dcb,	// (0x00015cf0) grid_blid2_satellite_pane_ParamLimits

0x6dcb,	// (0x00015cf0) grid_blid2_satellite_pane

0x6de5,	// (0x00015d0a) blid2_navig_pane_g1_ParamLimits

0x6de5,	// (0x00015d0a) blid2_navig_pane_g1

0x6df1,	// (0x00015d16) blid2_navig_pane_t1_ParamLimits

0x6df1,	// (0x00015d16) blid2_navig_pane_t1

0x6e0c,	// (0x00015d31) blid2_navig_pane_t2_ParamLimits

0x6e0c,	// (0x00015d31) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0001ea15) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0001ea15) blid2_navig_pane_t

0x6e27,	// (0x00015d4c) blid2_navig_ring_pane_ParamLimits

0x6e27,	// (0x00015d4c) blid2_navig_ring_pane

0x6e40,	// (0x00015d65) blid2_speed_pane_ParamLimits

0x6e40,	// (0x00015d65) blid2_speed_pane

0x6e4c,	// (0x00015d71) blid2_tripm_pane_g1_ParamLimits

0x6e4c,	// (0x00015d71) blid2_tripm_pane_g1

0x6e65,	// (0x00015d8a) blid2_tripm_pane_g2_ParamLimits

0x6e65,	// (0x00015d8a) blid2_tripm_pane_g2

0x6e79,	// (0x00015d9e) blid2_tripm_pane_g3_ParamLimits

0x6e79,	// (0x00015d9e) blid2_tripm_pane_g3

0x6e8d,	// (0x00015db2) blid2_tripm_pane_g4_ParamLimits

0x6e8d,	// (0x00015db2) blid2_tripm_pane_g4

0x6ea1,	// (0x00015dc6) blid2_tripm_pane_g5_ParamLimits

0x6ea1,	// (0x00015dc6) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0001ea1a) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0001ea1a) blid2_tripm_pane_g

0x6ec7,	// (0x00015dec) blid2_tripm_pane_t1_ParamLimits

0x6ec7,	// (0x00015dec) blid2_tripm_pane_t1

0x6ee2,	// (0x00015e07) blid2_tripm_pane_t2_ParamLimits

0x6ee2,	// (0x00015e07) blid2_tripm_pane_t2

0x6efb,	// (0x00015e20) blid2_tripm_pane_t3_ParamLimits

0x6efb,	// (0x00015e20) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0001ea27) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0001ea27) blid2_tripm_pane_t

0x6f42,	// (0x00015e67) cell_blid2_satellite_pane_ParamLimits

0x6f42,	// (0x00015e67) cell_blid2_satellite_pane

0x6f60,	// (0x00015e85) cell_blid2_satellite_pane_g1

0xd99f,	// (0x0001c8c4) cell_blid2_satellite_pane_t1

0xc417,	// (0x0001b33c) blid2_speed_pane_g1

0xd9ad,	// (0x0001c8d2) blid2_speed_pane_t1

0xd9bb,	// (0x0001c8e0) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0001ea30) blid2_speed_pane_t

0xc417,	// (0x0001b33c) blid2_navig_ring_pane_g1

0x6f69,	// (0x00015e8e) blid2_navig_ring_pane_g2

0x6f71,	// (0x00015e96) blid2_navig_ring_pane_g3

0x6f79,	// (0x00015e9e) blid2_navig_ring_pane_g4

0x6f81,	// (0x00015ea6) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0001ea35) blid2_navig_ring_pane_g

0x950b,	// (0x00018430) bg_popup_window_pane_cp011

0xd9c9,	// (0x0001c8ee) popup_blid2_search_window_g1

0xd9d1,	// (0x0001c8f6) popup_blid2_search_window_t1

0xd9df,	// (0x0001c904) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0001ea40) popup_blid2_search_window_t

0xa06a,	// (0x00018f8f) main_browser_pane_g1

0x9cde,	// (0x00018c03) main_browser_pane_ParamLimits

0x957b,	// (0x000184a0) bg_button_pane_cp011_ParamLimits

0x5ea8,	// (0x00014dcd) cell_vitu2_function_pane_g1_ParamLimits

0xbefc,	// (0x0001ae21) bg_popup_sub_pane_cp22_ParamLimits

0x67f6,	// (0x0001571b) input_focus_pane_cp08_ParamLimits

0x680d,	// (0x00015732) popup_vitu2_query_button_pane_ParamLimits

0x680d,	// (0x00015732) popup_vitu2_query_button_pane

0x681e,	// (0x00015743) popup_vitu2_query_input_button_pane

0xd547,	// (0x0001c46c) popup_vitu2_query_window_g1_ParamLimits

0x6828,	// (0x0001574d) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0001e941) popup_vitu2_query_window_g_ParamLimits

0x950b,	// (0x00018430) bg_button_pane_cp026

0x6f89,	// (0x00015eae) popup_vitu2_query_input_button_pane_g1

0x950b,	// (0x00018430) bg_button_pane_cp025

0xd9ed,	// (0x0001c912) popup_vitu2_query_button_pane_t1

0x42ea,	// (0x0001320f) main_mp3_pane_t6

0x42f8,	// (0x0001321d) popup_slider_window_cp01

0xd0bc,	// (0x0001bfe1) cam4_battery_pane

0xd115,	// (0x0001c03a) cam4_battery_pane_cp02

0xd82c,	// (0x0001c751) cam4_battery_pane_cp01

0xd82c,	// (0x0001c751) cam4_battery_pane_cp03

0xc417,	// (0x0001b33c) cam4_battery_pane_g1

0xd9fb,	// (0x0001c920) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0001ea45) cam4_battery_pane_g

0xc2e3,	// (0x0001b208) popup_blid_sat_info2_window_t11

0xa872,	// (0x00019797) aid_size_touch_mv_arrow_left_ParamLimits

0xa89b,	// (0x000197c0) aid_size_touch_mv_arrow_right_ParamLimits

0xa8f9,	// (0x0001981e) navi_pane_g1_ParamLimits

0xa905,	// (0x0001982a) navi_pane_g2_ParamLimits

0xa933,	// (0x00019858) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0001e306) navi_pane_g_ParamLimits

0x26f9,	// (0x0001161e) navi_pane_mv_t1_ParamLimits

0x4f91,	// (0x00013eb6) grid_imed_effect_pane_ParamLimits

0x1351,	// (0x00010276) aid_placing_vt_slider_lsc

0x9fb9,	// (0x00018ede) aid_placing_vt_slider_prt

0x957b,	// (0x000184a0) bg_tb_trans_pane_cp01_ParamLimits

0xc59a,	// (0x0001b4bf) popup_image_details_window_g1_ParamLimits

0xc5ad,	// (0x0001b4d2) popup_image_details_window_g2_ParamLimits

0xc5c2,	// (0x0001b4e7) popup_image_details_window_g3_ParamLimits

0xc5c2,	// (0x0001b4e7) popup_image_details_window_g3

0xf714,	// (0x0001e639) popup_image_details_window_g_ParamLimits

0xc5d6,	// (0x0001b4fb) popup_image_details_window_t1_ParamLimits

0xc5e8,	// (0x0001b50d) popup_image_details_window_t2_ParamLimits

0xc601,	// (0x0001b526) popup_image_details_window_t3_ParamLimits

0xc615,	// (0x0001b53a) popup_image_details_window_t4_ParamLimits

0xc630,	// (0x0001b555) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x0001e640) popup_image_details_window_t_ParamLimits

0x6b98,	// (0x00015abd) cl_header_name_pane_ParamLimits

0x6b98,	// (0x00015abd) cl_header_name_pane

0x6f91,	// (0x00015eb6) cl_header_name_pane_t1_ParamLimits

0x6f91,	// (0x00015eb6) cl_header_name_pane_t1

0x6fb2,	// (0x00015ed7) cl_header_name_pane_t2_ParamLimits

0x6fb2,	// (0x00015ed7) cl_header_name_pane_t2

0x6ff4,	// (0x00015f19) cl_header_name_pane_t3_ParamLimits

0x6ff4,	// (0x00015f19) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0001ea4a) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0001ea4a) cl_header_name_pane_t

0xa9c2,	// (0x000198e7) navi_pane_mv_g2_ParamLimits

0xd1a4,	// (0x0001c0c9) field_vitu2_entry_pane_g1_ParamLimits

0xd1b0,	// (0x0001c0d5) field_vitu2_entry_pane_g2_ParamLimits

0xd1bc,	// (0x0001c0e1) field_vitu2_entry_pane_g3_ParamLimits

0xd1bc,	// (0x0001c0e1) field_vitu2_entry_pane_g3

0xf91b,	// (0x0001e840) field_vitu2_entry_pane_g_ParamLimits

0xd1ef,	// (0x0001c114) cell_vitu2_itu_pane_g1_ParamLimits

0x5d50,	// (0x00014c75) cell_vitu2_itu_pane_g2_ParamLimits

0x5d50,	// (0x00014c75) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0001e84c) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0001e84c) cell_vitu2_itu_pane_g

0x957b,	// (0x000184a0) bg_vkb2_func_pane_cp05_ParamLimits

0x957b,	// (0x000184a0) bg_vkb2_func_pane_cp05

0x957b,	// (0x000184a0) bg_vkb2_func_pane_cp03

0x957b,	// (0x000184a0) bg_vkb2_func_pane_cp04

0x957b,	// (0x000184a0) bg_vkb2_func_pane_cp10_ParamLimits

0x957b,	// (0x000184a0) bg_vkb2_func_pane_cp10

0x6b3e,	// (0x00015a63) bg_vkb2_func_pane_cp08

0x6b24,	// (0x00015a49) bg_vkb2_func_pane_cp06

0x6b32,	// (0x00015a57) bg_vkb2_func_pane_cp07

0xd8f3,	// (0x0001c818) bg_vkb2_func_pane_cp11_ParamLimits

0xd8f3,	// (0x0001c818) bg_vkb2_func_pane_cp11

0xd908,	// (0x0001c82d) bg_vkb2_func_pane_cp12_ParamLimits

0xd908,	// (0x0001c82d) bg_vkb2_func_pane_cp12

0x950b,	// (0x00018430) bg_vkb2_func_pane_cp09

0xd20b,	// (0x0001c130) bg_vkb2_func_pane_g1

0xa17b,	// (0x000190a0) bg_vkb2_func_pane_g2

0xd213,	// (0x0001c138) bg_vkb2_func_pane_g3

0xd21b,	// (0x0001c140) bg_vkb2_func_pane_g4

0xd4ec,	// (0x0001c411) bg_vkb2_func_pane_g5

0xd233,	// (0x0001c158) bg_vkb2_func_pane_g6

0xd23b,	// (0x0001c160) bg_vkb2_func_pane_g7

0xd22b,	// (0x0001c150) bg_vkb2_func_pane_g8

0xa15b,	// (0x00019080) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0001ea51) bg_vkb2_func_pane_g

0x6eb5,	// (0x00015dda) blid2_tripm_pane_g6_ParamLimits

0x6eb5,	// (0x00015dda) blid2_tripm_pane_g6

0xcf8d,	// (0x0001beb2) mp4_progress_pane_g1

0x6f2e,	// (0x00015e53) blid2_tripm_values_pane_ParamLimits

0x6f2e,	// (0x00015e53) blid2_tripm_values_pane

0x7025,	// (0x00015f4a) blid2_tripm_values_pane_t1

0x7033,	// (0x00015f58) blid2_tripm_values_pane_t2

0x7041,	// (0x00015f66) blid2_tripm_values_pane_t3

0x704f,	// (0x00015f74) blid2_tripm_values_pane_t4

0x705d,	// (0x00015f82) blid2_tripm_values_pane_t5

0x706b,	// (0x00015f90) blid2_tripm_values_pane_t6

0x7079,	// (0x00015f9e) blid2_tripm_values_pane_t7

0x7087,	// (0x00015fac) blid2_tripm_values_pane_t8

0x7095,	// (0x00015fba) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0001ea64) blid2_tripm_values_pane_t

0x1393,	// (0x000102b8) call_video_pane_t1_ParamLimits

0x13b1,	// (0x000102d6) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0001e18f) call_video_pane_t_ParamLimits

0x2bd2,	// (0x00011af7) msg_header_pane_g1_ParamLimits

0xabc4,	// (0x00019ae9) msg_header_pane_g2_ParamLimits

0xabc4,	// (0x00019ae9) msg_header_pane_g2

0x0001,

0xf484,	// (0x0001e3a9) msg_header_pane_g_ParamLimits

0xf484,	// (0x0001e3a9) msg_header_pane_g

0x9cde,	// (0x00018c03) main_clock2_pane_ParamLimits

0x4c92,	// (0x00013bb7) grid_clock2_toolbar_pane_ParamLimits

0x4c92,	// (0x00013bb7) grid_clock2_toolbar_pane

0x4c92,	// (0x00013bb7) listscroll_clock2_pane_ParamLimits

0x4c92,	// (0x00013bb7) listscroll_clock2_pane

0x4d76,	// (0x00013c9b) main_clock2_pane_t3_ParamLimits

0x4d76,	// (0x00013c9b) main_clock2_pane_t3

0x4d9a,	// (0x00013cbf) main_clock2_pane_t4_ParamLimits

0x4d9a,	// (0x00013cbf) main_clock2_pane_t4

0xda05,	// (0x0001c92a) cell_clock2_toolbar_pane

0xda0d,	// (0x0001c932) cell_clock2_toolbar_pane_cp01

0xda0d,	// (0x0001c932) cell_clock2_toolbar_pane_cp02

0xda15,	// (0x0001c93a) cell_clock2_toolbar_pane_cp03

0xda1d,	// (0x0001c942) list_clock2_pane

0xa7e8,	// (0x0001970d) scroll_pane_cp10

0xda25,	// (0x0001c94a) list_single_clock2_pane_ParamLimits

0xda25,	// (0x0001c94a) list_single_clock2_pane

0x9f18,	// (0x00018e3d) list_highlight_pane_cp08

0xda32,	// (0x0001c957) list_single_clock2_pane_t1

0xda40,	// (0x0001c965) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0001ea77) list_single_clock2_pane_t

0x950b,	// (0x00018430) bg_button_pane_cp10

0xda4e,	// (0x0001c973) cell_clock2_toolbar_pane_g1

0x2be0,	// (0x00011b05) aid_main_viewer_pane_g1_ParamLimits

0x2be0,	// (0x00011b05) aid_main_viewer_pane_g1

0x2bee,	// (0x00011b13) aid_main_viewer_pane_g2_ParamLimits

0x2bee,	// (0x00011b13) aid_main_viewer_pane_g2

0x2bfc,	// (0x00011b21) aid_main_viewer_pane_g3_ParamLimits

0x2bfc,	// (0x00011b21) aid_main_viewer_pane_g3

0x2c0b,	// (0x00011b30) aid_main_viewer_pane_g4_ParamLimits

0x2c0b,	// (0x00011b30) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0001e3ba) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0001e3ba) aid_main_viewer_pane_g

0x3511,	// (0x00012436) main_calc_pane_ParamLimits

0x3525,	// (0x0001244a) main_dialer2_pane_ParamLimits

0x950b,	// (0x00018430) main_cam6_pane

0x950b,	// (0x00018430) main_vid6_pane

0x4c9e,	// (0x00013bc3) listscroll_gen_pane_cp06_ParamLimits

0x4c9e,	// (0x00013bc3) listscroll_gen_pane_cp06

0x4dbd,	// (0x00013ce2) main_clock2_pane_t5_ParamLimits

0x4dbd,	// (0x00013ce2) main_clock2_pane_t5

0x4e1b,	// (0x00013d40) aid_call2_pane_cp10_ParamLimits

0x4e2d,	// (0x00013d52) aid_call_pane_cp10_ParamLimits

0xa866,	// (0x0001978b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa866,	// (0x0001978b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4e3f,	// (0x00013d64) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4e3f,	// (0x00013d64) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa866,	// (0x0001978b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x0001e6f5) popup_clock_analogue_window_cp10_g_ParamLimits

0x4e55,	// (0x00013d7a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x54c5,	// (0x000143ea) cell_dialer2_keypad_pane_g2_ParamLimits

0x54c5,	// (0x000143ea) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0001e7df) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0001e7df) cell_dialer2_keypad_pane_g

0x54e1,	// (0x00014406) cell_dialer2_keypad_pane_t1

0x61c5,	// (0x000150ea) main_cset_text2_pane_ParamLimits

0x61c5,	// (0x000150ea) main_cset_text2_pane

0xd733,	// (0x0001c658) area_vitu2_query_pane_g1_ParamLimits

0x6ac3,	// (0x000159e8) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0001e994) area_vitu2_query_pane_g_ParamLimits

0xd7b7,	// (0x0001c6dc) area_vitu2_query_pane_t7_ParamLimits

0xd7b7,	// (0x0001c6dc) area_vitu2_query_pane_t7

0x6b24,	// (0x00015a49) bg_button_pane_cp018_ParamLimits

0x6b32,	// (0x00015a57) bg_button_pane_cp021_ParamLimits

0x6b3e,	// (0x00015a63) bg_button_pane_cp022_ParamLimits

0x6b3e,	// (0x00015a63) bg_vkb2_func_pane_cp08_ParamLimits

0x6b24,	// (0x00015a49) bg_vkb2_func_pane_cp06_ParamLimits

0x6b32,	// (0x00015a57) bg_vkb2_func_pane_cp07_ParamLimits

0x6b4d,	// (0x00015a72) input_focus_pane_cp09_ParamLimits

0xda56,	// (0x0001c97b) cam6_autofocus_pane_ParamLimits

0xda56,	// (0x0001c97b) cam6_autofocus_pane

0x70a3,	// (0x00015fc8) cam6_image_uncrop_pane_ParamLimits

0x70a3,	// (0x00015fc8) cam6_image_uncrop_pane

0x70b2,	// (0x00015fd7) cam6_indi_pane_ParamLimits

0x70b2,	// (0x00015fd7) cam6_indi_pane

0x70c8,	// (0x00015fed) cam6_mode_pane_ParamLimits

0x70c8,	// (0x00015fed) cam6_mode_pane

0x70da,	// (0x00015fff) cam6_timer_pane_ParamLimits

0x70da,	// (0x00015fff) cam6_timer_pane

0x70e6,	// (0x0001600b) cam6_zoom_pane_ParamLimits

0x70e6,	// (0x0001600b) cam6_zoom_pane

0x70f2,	// (0x00016017) cam6_mode_pane_g1_ParamLimits

0x70f2,	// (0x00016017) cam6_mode_pane_g1

0x7102,	// (0x00016027) cam6_mode_pane_g2_ParamLimits

0x7102,	// (0x00016027) cam6_mode_pane_g2

0x7112,	// (0x00016037) cam6_mode_pane_g3_ParamLimits

0x7112,	// (0x00016037) cam6_mode_pane_g3

0x7122,	// (0x00016047) cam6_mode_pane_g4_ParamLimits

0x7122,	// (0x00016047) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0001ea7c) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0001ea7c) cam6_mode_pane_g

0xd2f5,	// (0x0001c21a) bg_tb_trans_pane_cp08_ParamLimits

0xd2f5,	// (0x0001c21a) bg_tb_trans_pane_cp08

0xda64,	// (0x0001c989) cam6_battery_pane_ParamLimits

0xda64,	// (0x0001c989) cam6_battery_pane

0xda7a,	// (0x0001c99f) cam6_indi_pane_g1_ParamLimits

0xda7a,	// (0x0001c99f) cam6_indi_pane_g1

0xda8c,	// (0x0001c9b1) cam6_indi_pane_g2_ParamLimits

0xda8c,	// (0x0001c9b1) cam6_indi_pane_g2

0xda9e,	// (0x0001c9c3) cam6_indi_pane_g3_ParamLimits

0xda9e,	// (0x0001c9c3) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0001ea85) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0001ea85) cam6_indi_pane_g

0xdab0,	// (0x0001c9d5) cam6_indi_pane_t1_ParamLimits

0xdab0,	// (0x0001c9d5) cam6_indi_pane_t1

0x7132,	// (0x00016057) cam6_autofocus_pane_g1

0x713a,	// (0x0001605f) cam6_autofocus_pane_g2

0x7142,	// (0x00016067) cam6_autofocus_pane_g3

0x714a,	// (0x0001606f) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0001ea8c) cam6_autofocus_pane_g

0xdad6,	// (0x0001c9fb) cam6_timer_pane_g1

0xdade,	// (0x0001ca03) cam6_timer_pane_t1

0xdaec,	// (0x0001ca11) cam6_zoom_cont_pane

0xdaf4,	// (0x0001ca19) cam6_zoom_pane_g1

0xdafc,	// (0x0001ca21) cam6_zoom_pane_g2

0x7152,	// (0x00016077) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0001ea95) cam6_zoom_pane_g

0xc417,	// (0x0001b33c) cam6_battery_pane_g1

0xc417,	// (0x0001b33c) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x0001e5fd) cam6_battery_pane_g

0xdb04,	// (0x0001ca29) cam6_zoom_cont_pane_g1

0xdb0d,	// (0x0001ca32) cam6_zoom_cont_pane_g2

0xdb16,	// (0x0001ca3b) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0001ea9c) cam6_zoom_cont_pane_g

0x716f,	// (0x00016094) cam6_mode_pane_cp_ParamLimits

0x716f,	// (0x00016094) cam6_mode_pane_cp

0x70e6,	// (0x0001600b) cam6_zoom_pane_cp_ParamLimits

0x70e6,	// (0x0001600b) cam6_zoom_pane_cp

0x7181,	// (0x000160a6) vid6_image_uncrop_cif_pane_ParamLimits

0x7181,	// (0x000160a6) vid6_image_uncrop_cif_pane

0x7191,	// (0x000160b6) vid6_image_uncrop_nhd_pane_ParamLimits

0x7191,	// (0x000160b6) vid6_image_uncrop_nhd_pane

0x70a3,	// (0x00015fc8) vid6_image_uncrop_vga_pane_ParamLimits

0x70a3,	// (0x00015fc8) vid6_image_uncrop_vga_pane

0x71a0,	// (0x000160c5) vid6_image_uncrop_wvga_pane_ParamLimits

0x71a0,	// (0x000160c5) vid6_image_uncrop_wvga_pane

0x71af,	// (0x000160d4) vid6_indi_pane_ParamLimits

0x71af,	// (0x000160d4) vid6_indi_pane

0xd2f5,	// (0x0001c21a) bg_tb_trans_pane_cp09_ParamLimits

0xd2f5,	// (0x0001c21a) bg_tb_trans_pane_cp09

0xdb2e,	// (0x0001ca53) cam6_battery_pane_cp_ParamLimits

0xdb2e,	// (0x0001ca53) cam6_battery_pane_cp

0xdb3a,	// (0x0001ca5f) vid6_indi_pane_g1_ParamLimits

0xdb3a,	// (0x0001ca5f) vid6_indi_pane_g1

0xdb4c,	// (0x0001ca71) vid6_indi_pane_g2_ParamLimits

0xdb4c,	// (0x0001ca71) vid6_indi_pane_g2

0xdb5e,	// (0x0001ca83) vid6_indi_pane_g3_ParamLimits

0xdb5e,	// (0x0001ca83) vid6_indi_pane_g3

0xdb73,	// (0x0001ca98) vid6_indi_pane_g4_ParamLimits

0xdb73,	// (0x0001ca98) vid6_indi_pane_g4

0xdb88,	// (0x0001caad) vid6_indi_pane_g5_ParamLimits

0xdb88,	// (0x0001caad) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0001eaa3) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0001eaa3) vid6_indi_pane_g

0xdba2,	// (0x0001cac7) vid6_indi_pane_t1_ParamLimits

0xdba2,	// (0x0001cac7) vid6_indi_pane_t1

0xdbb8,	// (0x0001cadd) vid6_indi_pane_t2_ParamLimits

0xdbb8,	// (0x0001cadd) vid6_indi_pane_t2

0xdbe0,	// (0x0001cb05) vid6_indi_pane_t3_ParamLimits

0xdbe0,	// (0x0001cb05) vid6_indi_pane_t3

0xdc08,	// (0x0001cb2d) vid6_indi_pane_t4_ParamLimits

0xdc08,	// (0x0001cb2d) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0001eaae) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0001eaae) vid6_indi_pane_t

0xdc2c,	// (0x0001cb51) wait_bar_pane_cp08

0x71c7,	// (0x000160ec) main_cset_text2_pane_t1_ParamLimits

0x71c7,	// (0x000160ec) main_cset_text2_pane_t1

0x715a,	// (0x0001607f) listscroll_gen_pane_cp06_t1_ParamLimits

0x715a,	// (0x0001607f) listscroll_gen_pane_cp06_t1

0x950b,	// (0x00018430) main_cam6_set_pane

0xc67a,	// (0x0001b59f) bg_tb_trans_pane_cp06_ParamLimits

0xd0c4,	// (0x0001bfe9) cam4_indicators_pane_g1_ParamLimits

0xd0d5,	// (0x0001bffa) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0001e81c) cam4_indicators_pane_g_ParamLimits

0xd0f3,	// (0x0001c018) cam4_indicators_pane_t1_ParamLimits

0x957b,	// (0x000184a0) bg_tb_trans_pane_cp07_ParamLimits

0xd11f,	// (0x0001c044) vid4_indicators_pane_g1_ParamLimits

0xd133,	// (0x0001c058) vid4_indicators_pane_g2_ParamLimits

0xd147,	// (0x0001c06c) vid4_indicators_pane_g3_ParamLimits

0xd158,	// (0x0001c07d) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0001e82e) vid4_indicators_pane_g_ParamLimits

0xd176,	// (0x0001c09b) vid4_indicators_pane_t1_ParamLimits

0xd834,	// (0x0001c759) vid4_progress_pane_g1_ParamLimits

0xd844,	// (0x0001c769) vid4_progress_pane_g2_ParamLimits

0x6c88,	// (0x00015bad) vid4_progress_pane_g3_ParamLimits

0xd854,	// (0x0001c779) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0001e9df) vid4_progress_pane_g_ParamLimits

0x6c9a,	// (0x00015bbf) vid4_progress_pane_t1_ParamLimits

0xd86c,	// (0x0001c791) vid4_progress_pane_t2_ParamLimits

0xd881,	// (0x0001c7a6) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0001e9ea) vid4_progress_pane_t_ParamLimits

0x6cb2,	// (0x00015bd7) wait_bar_pane_cp07_ParamLimits

0x71e4,	// (0x00016109) main_cam6_set_pane_g2_ParamLimits

0x71e4,	// (0x00016109) main_cam6_set_pane_g2

0x7208,	// (0x0001612d) main_cset6_listscroll_pane_ParamLimits

0x7208,	// (0x0001612d) main_cset6_listscroll_pane

0x7228,	// (0x0001614d) main_cset6_slider_pane_ParamLimits

0x7228,	// (0x0001614d) main_cset6_slider_pane

0x723e,	// (0x00016163) main_cset6_text2_pane_ParamLimits

0x723e,	// (0x00016163) main_cset6_text2_pane

0xdc3b,	// (0x0001cb60) main_cset6_text_pane

0xdc43,	// (0x0001cb68) main_cset_list_pane_copy1_ParamLimits

0xdc43,	// (0x0001cb68) main_cset_list_pane_copy1

0xdc53,	// (0x0001cb78) scroll_pane_cp028_copy1

0x724c,	// (0x00016171) cset_list_set_pane_copy1

0x725d,	// (0x00016182) aid_position_infowindow_above_copy1

0x7265,	// (0x0001618a) aid_position_infowindow_below_copy1

0x726d,	// (0x00016192) cset_list_set_pane_g1_copy1

0x7275,	// (0x0001619a) cset_list_set_pane_g3_copy1_ParamLimits

0x7275,	// (0x0001619a) cset_list_set_pane_g3_copy1

0x7284,	// (0x000161a9) cset_list_set_pane_t1_copy1_ParamLimits

0x7284,	// (0x000161a9) cset_list_set_pane_t1_copy1

0x957b,	// (0x000184a0) list_highlight_pane_cp021_copy1_ParamLimits

0x957b,	// (0x000184a0) list_highlight_pane_cp021_copy1

0xdc5c,	// (0x0001cb81) cset6_slider_pane_ParamLimits

0xdc5c,	// (0x0001cb81) cset6_slider_pane

0xdc88,	// (0x0001cbad) main_cset6_slider_pane_g1_ParamLimits

0xdc88,	// (0x0001cbad) main_cset6_slider_pane_g1

0x7299,	// (0x000161be) main_cset6_slider_pane_g2_ParamLimits

0x7299,	// (0x000161be) main_cset6_slider_pane_g2

0xdcb0,	// (0x0001cbd5) main_cset6_slider_pane_g3_ParamLimits

0xdcb0,	// (0x0001cbd5) main_cset6_slider_pane_g3

0x72c1,	// (0x000161e6) main_cset6_slider_pane_g4_ParamLimits

0x72c1,	// (0x000161e6) main_cset6_slider_pane_g4

0x72cd,	// (0x000161f2) main_cset6_slider_pane_g5_ParamLimits

0x72cd,	// (0x000161f2) main_cset6_slider_pane_g5

0xd370,	// (0x0001c295) main_cset6_slider_pane_g7_ParamLimits

0xd370,	// (0x0001c295) main_cset6_slider_pane_g7

0xd37c,	// (0x0001c2a1) main_cset6_slider_pane_g8_ParamLimits

0xd37c,	// (0x0001c2a1) main_cset6_slider_pane_g8

0x6272,	// (0x00015197) main_cset6_slider_pane_g9_ParamLimits

0x6272,	// (0x00015197) main_cset6_slider_pane_g9

0x627e,	// (0x000151a3) main_cset6_slider_pane_g10_ParamLimits

0x627e,	// (0x000151a3) main_cset6_slider_pane_g10

0x628a,	// (0x000151af) main_cset6_slider_pane_g11_ParamLimits

0x628a,	// (0x000151af) main_cset6_slider_pane_g11

0x6296,	// (0x000151bb) main_cset6_slider_pane_g12_ParamLimits

0x6296,	// (0x000151bb) main_cset6_slider_pane_g12

0x62a2,	// (0x000151c7) main_cset6_slider_pane_g13_ParamLimits

0x62a2,	// (0x000151c7) main_cset6_slider_pane_g13

0x62ae,	// (0x000151d3) main_cset6_slider_pane_g14_ParamLimits

0x62ae,	// (0x000151d3) main_cset6_slider_pane_g14

0x72d9,	// (0x000161fe) main_cset6_slider_pane_g15_ParamLimits

0x72d9,	// (0x000161fe) main_cset6_slider_pane_g15

0x62d2,	// (0x000151f7) main_cset6_slider_pane_g16_ParamLimits

0x62d2,	// (0x000151f7) main_cset6_slider_pane_g16

0x62de,	// (0x00015203) main_cset6_slider_pane_g17_ParamLimits

0x62de,	// (0x00015203) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0001eab7) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0001eab7) main_cset6_slider_pane_g

0xdcbc,	// (0x0001cbe1) main_cset6_slider_pane_t1_ParamLimits

0xdcbc,	// (0x0001cbe1) main_cset6_slider_pane_t1

0x7309,	// (0x0001622e) main_cset6_slider_pane_t2_ParamLimits

0x7309,	// (0x0001622e) main_cset6_slider_pane_t2

0x7334,	// (0x00016259) main_cset6_slider_pane_t3_ParamLimits

0x7334,	// (0x00016259) main_cset6_slider_pane_t3

0x735f,	// (0x00016284) main_cset6_slider_pane_t4_ParamLimits

0x735f,	// (0x00016284) main_cset6_slider_pane_t4

0x738a,	// (0x000162af) main_cset6_slider_pane_t5_ParamLimits

0x738a,	// (0x000162af) main_cset6_slider_pane_t5

0xdcfd,	// (0x0001cc22) main_cset6_slider_pane_t7_ParamLimits

0xdcfd,	// (0x0001cc22) main_cset6_slider_pane_t7

0x73b5,	// (0x000162da) main_cset6_slider_pane_t8_ParamLimits

0x73b5,	// (0x000162da) main_cset6_slider_pane_t8

0x73d9,	// (0x000162fe) main_cset6_slider_pane_t9_ParamLimits

0x73d9,	// (0x000162fe) main_cset6_slider_pane_t9

0x73fd,	// (0x00016322) main_cset6_slider_pane_t10_ParamLimits

0x73fd,	// (0x00016322) main_cset6_slider_pane_t10

0x7421,	// (0x00016346) main_cset6_slider_pane_t11_ParamLimits

0x7421,	// (0x00016346) main_cset6_slider_pane_t11

0xdd33,	// (0x0001cc58) main_cset6_slider_pane_t14_ParamLimits

0xdd33,	// (0x0001cc58) main_cset6_slider_pane_t14

0xdd6c,	// (0x0001cc91) main_cset6_slider_pane_t15_ParamLimits

0xdd6c,	// (0x0001cc91) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0001eadc) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0001eadc) main_cset6_slider_pane_t

0xd484,	// (0x0001c3a9) cset_slider_pane_g1_copy1

0xd48d,	// (0x0001c3b2) cset_slider_pane_g2_copy1

0xd496,	// (0x0001c3bb) cset_slider_pane_g3_copy1

0x950b,	// (0x00018430) bg_popup_sub_pane_cp011_copy1

0xdda5,	// (0x0001ccca) main_cset_text_pane_g1_copy1

0xd55b,	// (0x0001c480) main_cset_text_pane_t1_copy1

0xd569,	// (0x0001c48e) main_cset_text_pane_t2_copy1

0xd577,	// (0x0001c49c) main_cset_text_pane_t3_copy1

0xd585,	// (0x0001c4aa) main_cset_text_pane_t4_copy1

0xd593,	// (0x0001c4b8) main_cset_text_pane_t5_copy1

0xddad,	// (0x0001ccd2) main_cset_text_pane_t6_copy1

0xddbb,	// (0x0001cce0) main_cset_text_pane_t7_copy1

0x71c7,	// (0x000160ec) main_cset_text2_pane_t1_copy1

0x957b,	// (0x000184a0) main_ncimui_pane

0x376f,	// (0x00012694) popup_query_ncimui_window_ParamLimits

0x376f,	// (0x00012694) popup_query_ncimui_window

0xc6df,	// (0x0001b604) field_cale_ev2_pane_g4_ParamLimits

0xc6df,	// (0x0001b604) field_cale_ev2_pane_g4

0x53a5,	// (0x000142ca) cell_video_dialer_keypad_pane_g2_ParamLimits

0x53a5,	// (0x000142ca) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x0001e7b6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x0001e7b6) cell_video_dialer_keypad_pane_g

0x53bd,	// (0x000142e2) cell_video_dialer_keypad_pane_t1

0x950b,	// (0x00018430) bg_popup_window_pane_cp012

0xa6b5,	// (0x000195da) heading_pane_cp06

0xdde7,	// (0x0001cd0c) ncim_query_content_pane

0x950b,	// (0x00018430) bg_popup_heading_pane_cp01

0xddef,	// (0x0001cd14) ncim_heading_pane_t1

0xddfd,	// (0x0001cd22) ncim_indicator_popup_pane

0xde0f,	// (0x0001cd34) ncim_query_button_pane

0xde23,	// (0x0001cd48) ncim_query_content_pane_t1

0xde35,	// (0x0001cd5a) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0001eb20) ncim_query_content_pane_t

0xde6f,	// (0x0001cd94) ncim_query_list_pane

0xde81,	// (0x0001cda6) ncim_query_popup_pane

0xddfd,	// (0x0001cd22) ncim_indicator_popup_pane_ParamLimits

0x7646,	// (0x0001656b) ncim_query_content_pane_g1_ParamLimits

0x7646,	// (0x0001656b) ncim_query_content_pane_g1

0xde23,	// (0x0001cd48) ncim_query_content_pane_t1_ParamLimits

0xde35,	// (0x0001cd5a) ncim_query_content_pane_t2_ParamLimits

0x7652,	// (0x00016577) ncim_query_content_pane_t3_ParamLimits

0x7652,	// (0x00016577) ncim_query_content_pane_t3

0x767a,	// (0x0001659f) ncim_query_content_pane_t4_ParamLimits

0x767a,	// (0x0001659f) ncim_query_content_pane_t4

0x76a2,	// (0x000165c7) ncim_query_content_pane_t5_ParamLimits

0x76a2,	// (0x000165c7) ncim_query_content_pane_t5

0xde47,	// (0x0001cd6c) ncim_query_content_pane_t6_ParamLimits

0xde47,	// (0x0001cd6c) ncim_query_content_pane_t6

0xfbfb,	// (0x0001eb20) ncim_query_content_pane_t_ParamLimits

0xde6f,	// (0x0001cd94) ncim_query_list_pane_ParamLimits

0xde81,	// (0x0001cda6) ncim_query_popup_pane_ParamLimits

0xde95,	// (0x0001cdba) wait_bar_pane_cp04

0x950b,	// (0x00018430) input_focus_pane_cp011

0xde9d,	// (0x0001cdc2) ncim_query_popup_pane_t1

0xdeab,	// (0x0001cdd0) ncim_list_query_list_pane_ParamLimits

0xdeab,	// (0x0001cdd0) ncim_list_query_list_pane

0x950b,	// (0x00018430) bg_button_pane_cp027

0xdeb8,	// (0x0001cddd) ncim_query_button_pane_g1

0x950b,	// (0x00018430) list_highlight_pane_cp012

0xdec2,	// (0x0001cde7) ncim_list_query_list_pane_g1

0xdeca,	// (0x0001cdef) ncim_list_query_list_pane_t1

0xd0e4,	// (0x0001c009) cam4_indicators_pane_g3_ParamLimits

0xd0e4,	// (0x0001c009) cam4_indicators_pane_g3

0xd164,	// (0x0001c089) vid4_indicators_pane_g5_ParamLimits

0xd164,	// (0x0001c089) vid4_indicators_pane_g5

0xd860,	// (0x0001c785) vid4_progress_pane_g5_ParamLimits

0xd860,	// (0x0001c785) vid4_progress_pane_g5

0x7531,	// (0x00016456) main_ncimui_pane_g1

0x759a,	// (0x000164bf) ncimui_group_query_pane_ParamLimits

0x759a,	// (0x000164bf) ncimui_group_query_pane

0x75e2,	// (0x00016507) ncimui_list_pane_ParamLimits

0x75e2,	// (0x00016507) ncimui_list_pane

0x7609,	// (0x0001652e) ncimui_text_pane_ParamLimits

0x7609,	// (0x0001652e) ncimui_text_pane

0x76ca,	// (0x000165ef) ncimui_text_pane_t1_ParamLimits

0x76ca,	// (0x000165ef) ncimui_text_pane_t1

0xded8,	// (0x0001cdfd) ncimui_list_single_graphic_pane_ParamLimits

0xded8,	// (0x0001cdfd) ncimui_list_single_graphic_pane

0x76e8,	// (0x0001660d) ncimui_query_pane_ParamLimits

0x76e8,	// (0x0001660d) ncimui_query_pane

0x950b,	// (0x00018430) list_highlight_pane_cp013

0xdee8,	// (0x0001ce0d) ncim_list_query_list_pane_t1_copy1

0xdec2,	// (0x0001cde7) ncim_list_single_graphic_pane_g1

0x76fb,	// (0x00016620) ncim_query_button_pane_cp01

0x7707,	// (0x0001662c) ncim_query_entry_pane_ParamLimits

0x7707,	// (0x0001662c) ncim_query_entry_pane

0x771a,	// (0x0001663f) ncimui_query_pane_g1

0x7726,	// (0x0001664b) ncimui_query_pane_t1_ParamLimits

0x7726,	// (0x0001664b) ncimui_query_pane_t1

0x957b,	// (0x000184a0) input_focus_pane_cp012

0xdef6,	// (0x0001ce1b) ncim_query_entry_pane_t1

0x9cde,	// (0x00018c03) main_im_pane_ParamLimits

0x957b,	// (0x000184a0) main_mobtv_pane_ParamLimits

0x957b,	// (0x000184a0) main_mobtv_pane

0x72f1,	// (0x00016216) main_cset6_slider_pane_g18_ParamLimits

0x72f1,	// (0x00016216) main_cset6_slider_pane_g18

0x72fd,	// (0x00016222) main_cset6_slider_pane_g19_ParamLimits

0x72fd,	// (0x00016222) main_cset6_slider_pane_g19

0xd303,	// (0x0001c228) bg_main_mobtv_pane_ParamLimits

0xd303,	// (0x0001c228) bg_main_mobtv_pane

0x773f,	// (0x00016664) main_mobtv_info_pane

0x7748,	// (0x0001666d) main_mobtv_loading_pane_ParamLimits

0x7748,	// (0x0001666d) main_mobtv_loading_pane

0xdf08,	// (0x0001ce2d) main_mobtv_pg_channel_list_pane

0xdf12,	// (0x0001ce37) main_mobtv_pg_hdr_pane

0x7755,	// (0x0001667a) main_mobtv_programe_curr_pane_ParamLimits

0x7755,	// (0x0001667a) main_mobtv_programe_curr_pane

0x7762,	// (0x00016687) main_mobtv_programe_next_pane_ParamLimits

0x7762,	// (0x00016687) main_mobtv_programe_next_pane

0xdf1b,	// (0x0001ce40) popup_mobtv_noti_window

0xc417,	// (0x0001b33c) main_tv_pg_hdr_pane_g1

0xdf23,	// (0x0001ce48) main_tv_pg_hdr_pane_g2

0xdf2b,	// (0x0001ce50) main_tv_pg_hdr_pane_g3

0xdf33,	// (0x0001ce58) main_tv_pg_hdr_pane_g4

0xdf3b,	// (0x0001ce60) main_tv_pg_hdr_pane_g5

0xdf45,	// (0x0001ce6a) main_tv_pg_hdr_pane_g6

0xdf4f,	// (0x0001ce74) main_tv_pg_hdr_pane_g7

0xdf59,	// (0x0001ce7e) main_tv_pg_hdr_pane_g8

0xdf63,	// (0x0001ce88) main_tv_pg_hdr_pane_g9

0xdf6d,	// (0x0001ce92) main_tv_pg_hdr_pane_g10

0xdf77,	// (0x0001ce9c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0001eb2d) main_tv_pg_hdr_pane_g

0xdf81,	// (0x0001cea6) main_tv_pg_hdr_pane_t1

0xdf8f,	// (0x0001ceb4) main_tv_pg_hdr_pane_t2

0xdf9d,	// (0x0001cec2) main_tv_pg_hdr_pane_t3

0xdfad,	// (0x0001ced2) main_tv_pg_hdr_pane_t4

0xdfbd,	// (0x0001cee2) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0001eb44) main_tv_pg_hdr_pane_t

0xdfcd,	// (0x0001cef2) single_mobtv_pg_channel_pane_ParamLimits

0xdfcd,	// (0x0001cef2) single_mobtv_pg_channel_pane

0xdfdf,	// (0x0001cf04) single_mobtv_pg_channel_table_pane

0xdfe8,	// (0x0001cf0d) single_mobtv_pg_channel_thumb_pane

0xdff1,	// (0x0001cf16) single_tv_pg_channel_pane_g1

0xdffa,	// (0x0001cf1f) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0001eb4f) single_tv_pg_channel_pane_g

0xc67a,	// (0x0001b59f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc67a,	// (0x0001b59f) bg_single_mobtv_pg_channel_thumb_pane

0xe003,	// (0x0001cf28) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe003,	// (0x0001cf28) single_mobtv_pg_channel_thumb_pane_g1

0xe011,	// (0x0001cf36) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe011,	// (0x0001cf36) single_mobtv_pg_channel_thumb_pane_g2

0xe01d,	// (0x0001cf42) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe01d,	// (0x0001cf42) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0001eb54) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0001eb54) single_mobtv_pg_channel_thumb_pane_g

0xe029,	// (0x0001cf4e) single_mobtv_pg_channel_thumb_pane_t1

0xe037,	// (0x0001cf5c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0001eb5b) single_mobtv_pg_channel_thumb_pane_t

0xc417,	// (0x0001b33c) bg_single_mobtv_pg_channel_table_pane_g1

0xc417,	// (0x0001b33c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x0001e5fd) bg_single_mobtv_pg_channel_table_pane_g

0xe045,	// (0x0001cf6a) single_mobtv_pg_channel_table_pane_t1

0xe053,	// (0x0001cf78) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0001eb60) single_mobtv_pg_channel_table_pane_t

0x7777,	// (0x0001669c) main_mobtv_info_pane_g1_ParamLimits

0x7777,	// (0x0001669c) main_mobtv_info_pane_g1

0x7795,	// (0x000166ba) main_mobtv_info_pane_t1_ParamLimits

0x7795,	// (0x000166ba) main_mobtv_info_pane_t1

0x780d,	// (0x00016732) main_mobtv_info_pane_t2_ParamLimits

0x780d,	// (0x00016732) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0001eb6a) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0001eb6a) main_mobtv_info_pane_t

0x789c,	// (0x000167c1) wait_bar_pane_cp05

0x78ae,	// (0x000167d3) main_mobtv_loading_pane_g1_ParamLimits

0x78ae,	// (0x000167d3) main_mobtv_loading_pane_g1

0x78c1,	// (0x000167e6) main_mobtv_loading_pane_g2_ParamLimits

0x78c1,	// (0x000167e6) main_mobtv_loading_pane_g2

0x78cd,	// (0x000167f2) main_mobtv_loading_pane_g3_ParamLimits

0x78cd,	// (0x000167f2) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0001eb71) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0001eb71) main_mobtv_loading_pane_g

0xe061,	// (0x0001cf86) main_mobtv_loading_pane_t1_ParamLimits

0xe061,	// (0x0001cf86) main_mobtv_loading_pane_t1

0xe079,	// (0x0001cf9e) main_mobtv_loading_pane_t2_ParamLimits

0xe079,	// (0x0001cf9e) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0001eb78) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0001eb78) main_mobtv_loading_pane_t

0x78e0,	// (0x00016805) wait_bar_pane_cp06_ParamLimits

0x78e0,	// (0x00016805) wait_bar_pane_cp06

0xe09d,	// (0x0001cfc2) main_mobtv_programe_curr_pane_t1

0xe0ab,	// (0x0001cfd0) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0001eb7d) main_mobtv_programe_curr_pane_t

0xe0b9,	// (0x0001cfde) main_mobtv_programe_next_pane_t1

0xe0c7,	// (0x0001cfec) main_mobtv_programe_next_pane_t2

0xe0d5,	// (0x0001cffa) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0001eb82) main_mobtv_programe_next_pane_t

0x950b,	// (0x00018430) bg_popup_mobtv_noti_window_pane

0xe0e3,	// (0x0001d008) popup_mobtv_noti_window_g1

0xe0eb,	// (0x0001d010) popup_mobtv_noti_window_t1

0xe0f9,	// (0x0001d01e) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0001eb89) popup_mobtv_noti_window_t

0xc417,	// (0x0001b33c) bg_popup_mobtv_noti_window_pane_g1

0x950b,	// (0x00018430) sc_clock_pane

0x950b,	// (0x00018430) main_fs_bigclock_pane

0x6f18,	// (0x00015e3d) blid2_tripm_pane_t4_ParamLimits

0x6f18,	// (0x00015e3d) blid2_tripm_pane_t4

0x78ef,	// (0x00016814) sc_clock_pane_g1_ParamLimits

0x78ef,	// (0x00016814) sc_clock_pane_g1

0x7901,	// (0x00016826) sc_clock_pane_t1_ParamLimits

0x7901,	// (0x00016826) sc_clock_pane_t1

0x7923,	// (0x00016848) sc_clock_pane_t2_ParamLimits

0x7923,	// (0x00016848) sc_clock_pane_t2

0x793b,	// (0x00016860) sc_clock_pane_t3_ParamLimits

0x793b,	// (0x00016860) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0001eb8e) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0001eb8e) sc_clock_pane_t

0x8995,	// (0x000178ba) main_fs_bigclock_indicator_pane_ParamLimits

0x8995,	// (0x000178ba) main_fs_bigclock_indicator_pane

0x79e1,	// (0x00016906) main_fs_bigclock_pane_g1_ParamLimits

0x79e1,	// (0x00016906) main_fs_bigclock_pane_g1

0x89a1,	// (0x000178c6) main_fs_bigclock_pane_t1_ParamLimits

0x89a1,	// (0x000178c6) main_fs_bigclock_pane_t1

0x89b3,	// (0x000178d8) main_fs_bigclock_pane_t2_ParamLimits

0x89b3,	// (0x000178d8) main_fs_bigclock_pane_t2

0x89c7,	// (0x000178ec) main_fs_bigclock_pane_t3_ParamLimits

0x89c7,	// (0x000178ec) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001ed93) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001ed93) main_fs_bigclock_pane_t

0xec8c,	// (0x0001dbb1) main_fs_bigclock_indicator_pane_g1

0xde17,	// (0x0001cd3c) ncim_query_content_pane_g2_ParamLimits

0xde17,	// (0x0001cd3c) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0001eb1b) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0001eb1b) ncim_query_content_pane_g

0x7954,	// (0x00016879) sc_clock_pane_t4_ParamLimits

0x7954,	// (0x00016879) sc_clock_pane_t4

0x957b,	// (0x000184a0) main_radioblah_pane

0xd02a,	// (0x0001bf4f) cell_call4_button_pane_t1_copy1_ParamLimits

0xd02a,	// (0x0001bf4f) cell_call4_button_pane_t1_copy1

0x7549,	// (0x0001646e) main_ncimui_pane_t1_ParamLimits

0x7549,	// (0x0001646e) main_ncimui_pane_t1

0x7563,	// (0x00016488) main_ncimui_pane_t2_ParamLimits

0x7563,	// (0x00016488) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0001eb14) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0001eb14) main_ncimui_pane_t

0xe23e,	// (0x0001d163) main_radioblah_anim_pane_ParamLimits

0xe23e,	// (0x0001d163) main_radioblah_anim_pane

0xe24f,	// (0x0001d174) main_radioblah_info_pane_ParamLimits

0xe24f,	// (0x0001d174) main_radioblah_info_pane

0xe263,	// (0x0001d188) main_radioblah_pane_t1_ParamLimits

0xe263,	// (0x0001d188) main_radioblah_pane_t1

0xe27f,	// (0x0001d1a4) main_radioblah_pane_t2_ParamLimits

0xe27f,	// (0x0001d1a4) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0001ebaf) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0001ebaf) main_radioblah_pane_t

0x7a40,	// (0x00016965) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a40,	// (0x00016965) main_radioblah_rocker_ctrl_pane

0xe2c7,	// (0x0001d1ec) main_radioblah_info_pane_t1_ParamLimits

0xe2c7,	// (0x0001d1ec) main_radioblah_info_pane_t1

0x7a98,	// (0x000169bd) main_radioblah_info_pane_t2_ParamLimits

0x7a98,	// (0x000169bd) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0001ebb8) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0001ebb8) main_radioblah_info_pane_t

0xc417,	// (0x0001b33c) main_radioblah_rocker_ctrl_pane_g1

0x7b48,	// (0x00016a6d) main_radioblah_rocker_ctrl_pane_g2

0x7b50,	// (0x00016a75) main_radioblah_rocker_ctrl_pane_g3

0x7b58,	// (0x00016a7d) main_radioblah_rocker_ctrl_pane_g4

0x7b60,	// (0x00016a85) main_radioblah_rocker_ctrl_pane_g5

0x7b68,	// (0x00016a8d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0001ebc1) main_radioblah_rocker_ctrl_pane_g

0x71c7,	// (0x000160ec) main_cset_text2_pane_t1_copy1_ParamLimits

0xd0b4,	// (0x0001bfd9) cam4_image_uncrop_qvga_pane

0xd10d,	// (0x0001c032) vid4_image_uncrop_qcif_pane

0xda56,	// (0x0001c97b) cam6_image_uncrop_qvga_pane_ParamLimits

0xda56,	// (0x0001c97b) cam6_image_uncrop_qvga_pane

0xdb1e,	// (0x0001ca43) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb1e,	// (0x0001ca43) vid6_image_uncrop_qcif_pane

0x950b,	// (0x00018430) bg_popup_preview_window_pane_cp03

0xddc9,	// (0x0001ccee) list_cset_text2_pane

0xddd1,	// (0x0001ccf6) main_cset6_text2_pane_g1

0xddd9,	// (0x0001ccfe) main_cset6_text2_pane_t1

0x7b70,	// (0x00016a95) list_cset_text2_pane_t1_ParamLimits

0x7b70,	// (0x00016a95) list_cset_text2_pane_t1

0x957b,	// (0x000184a0) main_radioblah_pane_ParamLimits

0x7888,	// (0x000167ad) main_mobtv_info_pane_t3_ParamLimits

0x7888,	// (0x000167ad) main_mobtv_info_pane_t3

0x7a2e,	// (0x00016953) main_radioblah_pane_g1

0x7a68,	// (0x0001698d) main_radioblah_info_pane_g1

0x7aed,	// (0x00016a12) main_radioblah_info_pane_t3_ParamLimits

0x7aed,	// (0x00016a12) main_radioblah_info_pane_t3

0x2204,	// (0x00011129) highlight_cell_cale_month_pane_ParamLimits

0x2204,	// (0x00011129) highlight_cell_cale_month_pane

0x950b,	// (0x00018430) main_phob_fisheye_pane

0xc782,	// (0x0001b6a7) scroll_pane_cp0031_ParamLimits

0xc782,	// (0x0001b6a7) scroll_pane_cp0031

0xdc2c,	// (0x0001cb51) wait_bar_pane_cp08_ParamLimits

0x724c,	// (0x00016171) cset_list_set_pane_copy1_ParamLimits

0xe301,	// (0x0001d226) highlight_cell_cale_month_pane_g1

0x7b89,	// (0x00016aae) highlight_cell_cale_month_pane_t1

0xd823,	// (0x0001c748) list_gen_pane_cp01

0xd35b,	// (0x0001c280) scroll_pane_01

0xe309,	// (0x0001d22e) list_single_double_fisheye_pane

0x7b97,	// (0x00016abc) list_double_fisheye_pane_g1_ParamLimits

0x7b97,	// (0x00016abc) list_double_fisheye_pane_g1

0x7ba3,	// (0x00016ac8) list_double_fisheye_pane_g2_ParamLimits

0x7ba3,	// (0x00016ac8) list_double_fisheye_pane_g2

0x7bb7,	// (0x00016adc) list_double_fisheye_pane_g3_ParamLimits

0x7bb7,	// (0x00016adc) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0001ebce) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0001ebce) list_double_fisheye_pane_g

0x7be0,	// (0x00016b05) list_double_fisheye_pane_t1_ParamLimits

0x7be0,	// (0x00016b05) list_double_fisheye_pane_t1

0x7bfb,	// (0x00016b20) list_double_fisheye_pane_t2_ParamLimits

0x7bfb,	// (0x00016b20) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0001ebd9) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0001ebd9) list_double_fisheye_pane_t

0x950b,	// (0x00018430) main_call5_pane

0x797f,	// (0x000168a4) sc_swipe_pane_ParamLimits

0x797f,	// (0x000168a4) sc_swipe_pane

0x7c30,	// (0x00016b55) call5_image_pane_ParamLimits

0x7c30,	// (0x00016b55) call5_image_pane

0x7c4d,	// (0x00016b72) call5_swipe_1_pane_ParamLimits

0x7c4d,	// (0x00016b72) call5_swipe_1_pane

0x7c60,	// (0x00016b85) call5_swipe_2_pane_ParamLimits

0x7c60,	// (0x00016b85) call5_swipe_2_pane

0x7c8b,	// (0x00016bb0) popup_call5_audio_first_window_ParamLimits

0x7c8b,	// (0x00016bb0) popup_call5_audio_first_window

0xc67a,	// (0x0001b59f) call5_swipe_1_pane_g1_ParamLimits

0xc67a,	// (0x0001b59f) call5_swipe_1_pane_g1

0xe312,	// (0x0001d237) call5_swipe_1_pane_g2_ParamLimits

0xe312,	// (0x0001d237) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0001ebde) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0001ebde) call5_swipe_1_pane_g

0xe31e,	// (0x0001d243) call5_swipe_1_pane_t1_ParamLimits

0xe31e,	// (0x0001d243) call5_swipe_1_pane_t1

0xc67a,	// (0x0001b59f) call5_swipe_2_pane_g1_ParamLimits

0xc67a,	// (0x0001b59f) call5_swipe_2_pane_g1

0xe333,	// (0x0001d258) call5_swipe_2_pane_g2_ParamLimits

0xe333,	// (0x0001d258) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0001ebe3) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0001ebe3) call5_swipe_2_pane_g

0xe33f,	// (0x0001d264) call5_swipe_2_pane_t1_ParamLimits

0xe33f,	// (0x0001d264) call5_swipe_2_pane_t1

0xe354,	// (0x0001d279) sc_swipe_pane_g1_ParamLimits

0xe354,	// (0x0001d279) sc_swipe_pane_g1

0xe361,	// (0x0001d286) sc_swipe_pane_g2_ParamLimits

0xe361,	// (0x0001d286) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0001ebe8) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0001ebe8) sc_swipe_pane_g

0xe36d,	// (0x0001d292) sc_swipe_pane_t1_ParamLimits

0xe36d,	// (0x0001d292) sc_swipe_pane_t1

0x950b,	// (0x00018430) main_cmail_launcher_pane

0x7c9c,	// (0x00016bc1) aid_size_cell_cmail_l_ParamLimits

0x7c9c,	// (0x00016bc1) aid_size_cell_cmail_l

0x7caa,	// (0x00016bcf) grid_cmail_l_pane_ParamLimits

0x7caa,	// (0x00016bcf) grid_cmail_l_pane

0x7cc4,	// (0x00016be9) cell_cmail_l_pane_ParamLimits

0x7cc4,	// (0x00016be9) cell_cmail_l_pane

0xe382,	// (0x0001d2a7) cell_cmail_l_pane_g1_ParamLimits

0xe382,	// (0x0001d2a7) cell_cmail_l_pane_g1

0xe38e,	// (0x0001d2b3) cell_cmail_l_pane_t1_ParamLimits

0xe38e,	// (0x0001d2b3) cell_cmail_l_pane_t1

0xe3a4,	// (0x0001d2c9) cell_cmail_l_pane_t2_ParamLimits

0xe3a4,	// (0x0001d2c9) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0001ebed) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0001ebed) cell_cmail_l_pane_t

0x957b,	// (0x000184a0) grid_highlight_pane_cp018_ParamLimits

0x957b,	// (0x000184a0) grid_highlight_pane_cp018

0x029e,	// (0x0000f1c3) main2_pane_ParamLimits

0x029e,	// (0x0000f1c3) main2_pane

0x9da4,	// (0x00018cc9) popup_sp_fs_action_menu_bg_pane_g1

0x9dac,	// (0x00018cd1) popup_sp_fs_action_menu_bg_pane_g2

0x9db4,	// (0x00018cd9) popup_sp_fs_action_menu_bg_pane_g3

0x9dbc,	// (0x00018ce1) popup_sp_fs_action_menu_bg_pane_g4

0x9dc4,	// (0x00018ce9) popup_sp_fs_action_menu_bg_pane_g5

0x9dcc,	// (0x00018cf1) popup_sp_fs_action_menu_bg_pane_g6

0x9dd4,	// (0x00018cf9) popup_sp_fs_action_menu_bg_pane_g7

0x9ddc,	// (0x00018d01) popup_sp_fs_action_menu_bg_pane_g8

0x9de4,	// (0x00018d09) popup_sp_fs_action_menu_bg_pane_g9

0x9dec,	// (0x00018d11) popup_sp_fs_action_menu_bg_pane_g10

0x9dec,	// (0x00018d11) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0001e0ab) popup_sp_fs_action_menu_bg_pane_g

0x11ca,	// (0x000100ef) list_medium_line_x2_t3_g3_g1_ParamLimits

0x11ca,	// (0x000100ef) list_medium_line_x2_t3_g3_g1

0x11d6,	// (0x000100fb) list_medium_line_x2_t3_g3_g2_ParamLimits

0x11d6,	// (0x000100fb) list_medium_line_x2_t3_g3_g2

0x11e2,	// (0x00010107) list_medium_line_x2_t3_g3_g3_ParamLimits

0x11e2,	// (0x00010107) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0001e159) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0001e159) list_medium_line_x2_t3_g3_g

0x11ee,	// (0x00010113) list_medium_line_x2_t3_g3_t1_ParamLimits

0x11ee,	// (0x00010113) list_medium_line_x2_t3_g3_t1

0x1203,	// (0x00010128) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1203,	// (0x00010128) list_medium_line_x2_t3_g3_t2

0x1217,	// (0x0001013c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1217,	// (0x0001013c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0001e160) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0001e160) list_medium_line_x2_t3_g3_t

0x11ca,	// (0x000100ef) list_medium_line_x2_t3_g2_g1_ParamLimits

0x11ca,	// (0x000100ef) list_medium_line_x2_t3_g2_g1

0x11e2,	// (0x00010107) list_medium_line_x2_t3_g2_g2_ParamLimits

0x11e2,	// (0x00010107) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0001e167) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0001e167) list_medium_line_x2_t3_g2_g

0x122c,	// (0x00010151) list_medium_line_x2_t3_g2_t1_ParamLimits

0x122c,	// (0x00010151) list_medium_line_x2_t3_g2_t1

0x1242,	// (0x00010167) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1242,	// (0x00010167) list_medium_line_x2_t3_g2_t2

0x1254,	// (0x00010179) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1254,	// (0x00010179) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0001e16c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0001e16c) list_medium_line_x2_t3_g2_t

0x11ca,	// (0x000100ef) list_medium_line_x2_t4_g4_g1_ParamLimits

0x11ca,	// (0x000100ef) list_medium_line_x2_t4_g4_g1

0x1271,	// (0x00010196) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1271,	// (0x00010196) list_medium_line_x2_t4_g4_g2

0x11d6,	// (0x000100fb) list_medium_line_x2_t4_g4_g3_ParamLimits

0x11d6,	// (0x000100fb) list_medium_line_x2_t4_g4_g3

0x127d,	// (0x000101a2) list_medium_line_x2_t4_g4_g4_ParamLimits

0x127d,	// (0x000101a2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0001e173) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0001e173) list_medium_line_x2_t4_g4_g

0x1289,	// (0x000101ae) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1289,	// (0x000101ae) list_medium_line_x2_t4_g4_t1

0x12a3,	// (0x000101c8) list_medium_line_x2_t4_g4_t2_ParamLimits

0x12a3,	// (0x000101c8) list_medium_line_x2_t4_g4_t2

0x12b9,	// (0x000101de) list_medium_line_x2_t4_g4_t3_ParamLimits

0x12b9,	// (0x000101de) list_medium_line_x2_t4_g4_t3

0x12ce,	// (0x000101f3) list_medium_line_x2_t4_g4_t4_ParamLimits

0x12ce,	// (0x000101f3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0001e17c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0001e17c) list_medium_line_x2_t4_g4_t

0x11ca,	// (0x000100ef) list_medium_line_x2_t2_g4_g1_ParamLimits

0x11ca,	// (0x000100ef) list_medium_line_x2_t2_g4_g1

0x1271,	// (0x00010196) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1271,	// (0x00010196) list_medium_line_x2_t2_g4_g2

0x11d6,	// (0x000100fb) list_medium_line_x2_t2_g4_g3_ParamLimits

0x11d6,	// (0x000100fb) list_medium_line_x2_t2_g4_g3

0x11e2,	// (0x00010107) list_medium_line_x2_t2_g4_g4_ParamLimits

0x11e2,	// (0x00010107) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0001e1e3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0001e1e3) list_medium_line_x2_t2_g4_g

0x222a,	// (0x0001114f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x222a,	// (0x0001114f) list_medium_line_x2_t2_g4_t1

0x1217,	// (0x0001013c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1217,	// (0x0001013c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0001e1ec) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0001e1ec) list_medium_line_x2_t2_g4_t

0x11ca,	// (0x000100ef) list_medium_line_x2_t2_g3_g1_ParamLimits

0x11ca,	// (0x000100ef) list_medium_line_x2_t2_g3_g1

0x11d6,	// (0x000100fb) list_medium_line_x2_t2_g3_g2_ParamLimits

0x11d6,	// (0x000100fb) list_medium_line_x2_t2_g3_g2

0x11e2,	// (0x00010107) list_medium_line_x2_t2_g3_g3_ParamLimits

0x11e2,	// (0x00010107) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0001e159) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0001e159) list_medium_line_x2_t2_g3_g

0x223f,	// (0x00011164) list_medium_line_x2_t2_g3_t1_ParamLimits

0x223f,	// (0x00011164) list_medium_line_x2_t2_g3_t1

0x1217,	// (0x0001013c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1217,	// (0x0001013c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0001e1f1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0001e1f1) list_medium_line_x2_t2_g3_t

0x2388,	// (0x000112ad) main_sp_fs_list_pane_ParamLimits

0x2388,	// (0x000112ad) main_sp_fs_list_pane

0xd31f,	// (0x0001c244) sp_fs_scroll_pane_ParamLimits

0xd31f,	// (0x0001c244) sp_fs_scroll_pane

0x2394,	// (0x000112b9) list_medium_line_x2_t3_t1

0x23a4,	// (0x000112c9) list_medium_line_x2_t3_t2

0x23b2,	// (0x000112d7) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0001e23c) list_medium_line_x2_t3_t

0x23c0,	// (0x000112e5) list_medium_line_x3_t4_t1

0x23d0,	// (0x000112f5) list_medium_line_x3_t4_t2

0x23de,	// (0x00011303) list_medium_line_x3_t4_t3

0x23b2,	// (0x000112d7) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0001e243) list_medium_line_x3_t4_t

0x23ec,	// (0x00011311) list_medium_line_x4_t5_t1

0x23fc,	// (0x00011321) list_medium_line_x4_t5_t2

0x23de,	// (0x00011303) list_medium_line_x4_t5_t3

0x240a,	// (0x0001132f) list_medium_line_x4_t5_t4

0x23b2,	// (0x000112d7) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0001e24c) list_medium_line_x4_t5_t

0x11ca,	// (0x000100ef) list_medium_line_t4_g4_g1_ParamLimits

0x11ca,	// (0x000100ef) list_medium_line_t4_g4_g1

0x2418,	// (0x0001133d) list_medium_line_t4_g4_g2_ParamLimits

0x2418,	// (0x0001133d) list_medium_line_t4_g4_g2

0x2424,	// (0x00011349) list_medium_line_t4_g4_g3_ParamLimits

0x2424,	// (0x00011349) list_medium_line_t4_g4_g3

0x11e2,	// (0x00010107) list_medium_line_t4_g4_g4_ParamLimits

0x11e2,	// (0x00010107) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0001e257) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0001e257) list_medium_line_t4_g4_g

0x2430,	// (0x00011355) list_medium_line_t4_g4_t1_ParamLimits

0x2430,	// (0x00011355) list_medium_line_t4_g4_t1

0x2445,	// (0x0001136a) list_medium_line_t4_g4_t2_ParamLimits

0x2445,	// (0x0001136a) list_medium_line_t4_g4_t2

0x245a,	// (0x0001137f) list_medium_line_t4_g4_t3_ParamLimits

0x245a,	// (0x0001137f) list_medium_line_t4_g4_t3

0x1217,	// (0x0001013c) list_medium_line_t4_g4_t4_ParamLimits

0x1217,	// (0x0001013c) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0001e260) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0001e260) list_medium_line_t4_g4_t

0x2522,	// (0x00011447) chi_dic_find_pane_g1

0x3539,	// (0x0001245e) main_tport_pane

0x6578,	// (0x0001549d) list_medium_line_plain_t1

0x6620,	// (0x00015545) list_medium_line_t2_g2_g1_ParamLimits

0x6620,	// (0x00015545) list_medium_line_t2_g2_g1

0x662c,	// (0x00015551) list_medium_line_t2_g2_g2_ParamLimits

0x662c,	// (0x00015551) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0001e925) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0001e925) list_medium_line_t2_g2_g

0x6638,	// (0x0001555d) list_medium_line_t2_g2_t1_ParamLimits

0x6638,	// (0x0001555d) list_medium_line_t2_g2_t1

0x6652,	// (0x00015577) list_medium_line_t2_g2_t2_ParamLimits

0x6652,	// (0x00015577) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0001e92a) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0001e92a) list_medium_line_t2_g2_t

0xd896,	// (0x0001c7bb) aid_sp_fs_list_icon_a_sm

0xd89e,	// (0x0001c7c3) aid_sp_fs_list_icon_d

0xd8a6,	// (0x0001c7cb) aid_sp_fs_text_primary

0xd8af,	// (0x0001c7d4) aid_sp_fs_text_secondary

0x6cc5,	// (0x00015bea) list_medium_line

0x6cc5,	// (0x00015bea) list_medium_line_g2

0x6cc5,	// (0x00015bea) list_medium_line_g3

0x6cc5,	// (0x00015bea) list_medium_line_plain

0x6cc5,	// (0x00015bea) list_medium_line_plain_t2

0x6cc5,	// (0x00015bea) list_medium_line_plain_t3

0x6cc5,	// (0x00015bea) list_medium_line_right_icon

0x6cc5,	// (0x00015bea) list_medium_line_right_iconx2

0x6cc5,	// (0x00015bea) list_medium_line_t2

0x6cc5,	// (0x00015bea) list_medium_line_t2_g2

0x6cc5,	// (0x00015bea) list_medium_line_t2_g3

0x6cc5,	// (0x00015bea) list_medium_line_t2_right_icon

0x6cc5,	// (0x00015bea) list_medium_line_t2_right_iconx2

0x6cc5,	// (0x00015bea) list_medium_line_t3

0x6cc5,	// (0x00015bea) list_medium_line_t3_g2

0x6cc5,	// (0x00015bea) list_medium_line_t3_g3

0x6cc5,	// (0x00015bea) list_medium_line_t3_right_iconx2

0x6cce,	// (0x00015bf3) list_medium_line_t4_g4

0x6cd7,	// (0x00015bfc) list_medium_line_x2

0x6cd7,	// (0x00015bfc) list_medium_line_x2_t2_g2

0x6cd7,	// (0x00015bfc) list_medium_line_x2_t2_g3

0x6cd7,	// (0x00015bfc) list_medium_line_x2_t2_g4

0x6cd7,	// (0x00015bfc) list_medium_line_x2_t3

0x6cd7,	// (0x00015bfc) list_medium_line_x2_t3_g2

0x6cd7,	// (0x00015bfc) list_medium_line_x2_t3_g3

0x6cd7,	// (0x00015bfc) list_medium_line_x2_t3_g4

0x6cd7,	// (0x00015bfc) list_medium_line_x2_t4_g2

0x6cd7,	// (0x00015bfc) list_medium_line_x2_t4_g4

0x6ce0,	// (0x00015c05) list_medium_line_x3

0x6ce0,	// (0x00015c05) list_medium_line_x3_t4

0x6ce0,	// (0x00015c05) list_medium_line_x3_t4_g4

0x6cce,	// (0x00015bf3) list_medium_line_x4_t4

0x6cce,	// (0x00015bf3) list_medium_line_x4_t4_g7

0x6cce,	// (0x00015bf3) list_medium_line_x4_t5

0x6ce9,	// (0x00015c0e) list_single_fs_dyc_pane_ParamLimits

0x6ce9,	// (0x00015c0e) list_single_fs_dyc_pane

0x11ca,	// (0x000100ef) list_medium_line_x4_t4_g7_g1_ParamLimits

0x11ca,	// (0x000100ef) list_medium_line_x4_t4_g7_g1

0x7445,	// (0x0001636a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7445,	// (0x0001636a) list_medium_line_x4_t4_g7_g2

0x7451,	// (0x00016376) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7451,	// (0x00016376) list_medium_line_x4_t4_g7_g3

0x7460,	// (0x00016385) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7460,	// (0x00016385) list_medium_line_x4_t4_g7_g4

0x746c,	// (0x00016391) list_medium_line_x4_t4_g7_g5_ParamLimits

0x746c,	// (0x00016391) list_medium_line_x4_t4_g7_g5

0x747b,	// (0x000163a0) list_medium_line_x4_t4_g7_g6_ParamLimits

0x747b,	// (0x000163a0) list_medium_line_x4_t4_g7_g6

0x748a,	// (0x000163af) list_medium_line_x4_t4_g7_g7_ParamLimits

0x748a,	// (0x000163af) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0001eaf5) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0001eaf5) list_medium_line_x4_t4_g7_g

0x7496,	// (0x000163bb) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7496,	// (0x000163bb) list_medium_line_x4_t4_g7_t1

0x74ab,	// (0x000163d0) list_medium_line_x4_t4_g7_t2_ParamLimits

0x74ab,	// (0x000163d0) list_medium_line_x4_t4_g7_t2

0x74c0,	// (0x000163e5) list_medium_line_x4_t4_g7_t3_ParamLimits

0x74c0,	// (0x000163e5) list_medium_line_x4_t4_g7_t3

0x74d5,	// (0x000163fa) list_medium_line_x4_t4_g7_t4_ParamLimits

0x74d5,	// (0x000163fa) list_medium_line_x4_t4_g7_t4

0x74e7,	// (0x0001640c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x74e7,	// (0x0001640c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0001eb04) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0001eb04) list_medium_line_x4_t4_g7_t

0x74f9,	// (0x0001641e) list_single_dyc_row_pane_ParamLimits

0x74f9,	// (0x0001641e) list_single_dyc_row_pane

0x7c1d,	// (0x00016b42) call5_gesture_pane_ParamLimits

0x7c1d,	// (0x00016b42) call5_gesture_pane

0x7c73,	// (0x00016b98) call5_windows_pane_ParamLimits

0x7c73,	// (0x00016b98) call5_windows_pane

0x7cde,	// (0x00016c03) call5_swipe_1_pane_cp_ParamLimits

0x7cde,	// (0x00016c03) call5_swipe_1_pane_cp

0x7cea,	// (0x00016c0f) call5_swipe_2_pane_cp_ParamLimits

0x7cea,	// (0x00016c0f) call5_swipe_2_pane_cp

0x9f18,	// (0x00018e3d) call5_image_pane_cp

0x7cf6,	// (0x00016c1b) popup_call5_audio_first_window_cp_ParamLimits

0x7cf6,	// (0x00016c1b) popup_call5_audio_first_window_cp

0xe354,	// (0x0001d279) call5_swipe_1_pane_g1_cp_ParamLimits

0xe354,	// (0x0001d279) call5_swipe_1_pane_g1_cp

0xe3c1,	// (0x0001d2e6) call5_swipe_1_pane_g2_cp

0xe36d,	// (0x0001d292) call5_swipe_1_pane_t1_cp_ParamLimits

0xe36d,	// (0x0001d292) call5_swipe_1_pane_t1_cp

0xe354,	// (0x0001d279) call5_swipe_2_pane_g1_cp_ParamLimits

0xe354,	// (0x0001d279) call5_swipe_2_pane_g1_cp

0xe3c9,	// (0x0001d2ee) call5_swipe_2_pane_g2_cp

0xe3d1,	// (0x0001d2f6) call5_swipe_2_pane_t1_cp_ParamLimits

0xe3d1,	// (0x0001d2f6) call5_swipe_2_pane_t1_cp

0x957b,	// (0x000184a0) main_sp_fs_email_pane

0xe3e6,	// (0x0001d30b) main_sp_fs_listscroll_pane_te

0x7d04,	// (0x00016c29) popup_sp_fs_action_menu_pane_ParamLimits

0x7d04,	// (0x00016c29) popup_sp_fs_action_menu_pane

0xc417,	// (0x0001b33c) bg_sp_fs_ctrlbar_pane_g1

0xe3ef,	// (0x0001d314) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3f8,	// (0x0001d31d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe401,	// (0x0001d326) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc417,	// (0x0001b33c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0001ebf2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1fc,	// (0x0001b121) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1fc,	// (0x0001b121) bg_sp_fs_ctrlbar_ddmenu_pane

0xe40a,	// (0x0001d32f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe40a,	// (0x0001d32f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe416,	// (0x0001d33b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe416,	// (0x0001d33b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0001ebfb) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0001ebfb) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe422,	// (0x0001d347) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe422,	// (0x0001d347) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d48,	// (0x00016c6d) list_medium_line_t2_right_icon_g1

0x7d50,	// (0x00016c75) list_medium_line_t2_right_icon_t1

0x7d60,	// (0x00016c85) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0001ec00) list_medium_line_t2_right_icon_t

0xbefc,	// (0x0001ae21) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbefc,	// (0x0001ae21) bg_sp_fs_ctrlbar_pane

0x7dba,	// (0x00016cdf) main_sp_fs_ctrlbar_button_pane_cp01

0x7dc4,	// (0x00016ce9) main_sp_fs_ctrlbar_ddmenu_pane

0xe474,	// (0x0001d399) main_sp_fs_ctrlbar_pane_g1

0xe480,	// (0x0001d3a5) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0001ec05) main_sp_fs_ctrlbar_pane_g

0xe48c,	// (0x0001d3b1) main_sp_fs_ctrlbar_pane_t1

0x7dce,	// (0x00016cf3) main_sp_fs_ctrlbar_pane

0x7df2,	// (0x00016d17) main_sp_fs_listscroll_pane_te_cp01

0x7e12,	// (0x00016d37) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e12,	// (0x00016d37) popup_sp_fs_action_menu_pane_cp01

0x957b,	// (0x000184a0) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x957b,	// (0x000184a0) bg_sp_fs_highlight_list_pane_cp01

0xe4bc,	// (0x0001d3e1) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe4bc,	// (0x0001d3e1) sp_fs_action_menu_list_gene_pane_g1

0xe4cb,	// (0x0001d3f0) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4cb,	// (0x0001d3f0) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0001ec0f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0001ec0f) sp_fs_action_menu_list_gene_pane_g

0xe4d8,	// (0x0001d3fd) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4d8,	// (0x0001d3fd) sp_fs_action_menu_list_gene_pane_t1

0xe4f0,	// (0x0001d415) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4f0,	// (0x0001d415) sp_fs_action_menu_list_gene_pane

0xe511,	// (0x0001d436) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe511,	// (0x0001d436) popup_sp_fs_action_menu_bg_pane

0xe51f,	// (0x0001d444) sp_fs_action_menu_list_pane_ParamLimits

0xe51f,	// (0x0001d444) sp_fs_action_menu_list_pane

0x7e42,	// (0x00016d67) sp_fs_scroll_pane_cp01_ParamLimits

0x7e42,	// (0x00016d67) sp_fs_scroll_pane_cp01

0x7e68,	// (0x00016d8d) list_medium_line_plain_t2_t1

0x7e78,	// (0x00016d9d) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0001ec14) list_medium_line_plain_t2_t

0x7e88,	// (0x00016dad) list_medium_line_plain_t3_t1

0x7e98,	// (0x00016dbd) list_medium_line_plain_t3_t2

0x7ea6,	// (0x00016dcb) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0001ec19) list_medium_line_plain_t3_t

0x11ca,	// (0x000100ef) list_medium_line_x2_t2_g2_g1_ParamLimits

0x11ca,	// (0x000100ef) list_medium_line_x2_t2_g2_g1

0x11e2,	// (0x00010107) list_medium_line_x2_t2_g2_g2_ParamLimits

0x11e2,	// (0x00010107) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0001e167) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0001e167) list_medium_line_x2_t2_g2_g

0x2430,	// (0x00011355) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2430,	// (0x00011355) list_medium_line_x2_t2_g2_t1

0x1217,	// (0x0001013c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1217,	// (0x0001013c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0001ec20) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0001ec20) list_medium_line_x2_t2_g2_t

0x11ca,	// (0x000100ef) list_medium_line_x2_t4_g2_g1_ParamLimits

0x11ca,	// (0x000100ef) list_medium_line_x2_t4_g2_g1

0x11e2,	// (0x00010107) list_medium_line_x2_t4_g2_g2_ParamLimits

0x11e2,	// (0x00010107) list_medium_line_x2_t4_g2_g2

0x0001,

0xf242,	// (0x0001e167) list_medium_line_x2_t4_g2_g_ParamLimits

0xf242,	// (0x0001e167) list_medium_line_x2_t4_g2_g

0x7eb4,	// (0x00016dd9) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7eb4,	// (0x00016dd9) list_medium_line_x2_t4_g2_t1

0x7ece,	// (0x00016df3) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7ece,	// (0x00016df3) list_medium_line_x2_t4_g2_t2

0x7ee4,	// (0x00016e09) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7ee4,	// (0x00016e09) list_medium_line_x2_t4_g2_t3

0x1217,	// (0x0001013c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1217,	// (0x0001013c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0001ec25) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0001ec25) list_medium_line_x2_t4_g2_t

0x7ef9,	// (0x00016e1e) list_medium_line_t3_right_iconx2_g1

0x7d48,	// (0x00016c6d) list_medium_line_t3_right_iconx2_g2

0x7f01,	// (0x00016e26) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0001ec2e) list_medium_line_t3_right_iconx2_g

0x7f0b,	// (0x00016e30) list_medium_line_t3_right_iconx2_t1

0x7f1b,	// (0x00016e40) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0001ec35) list_medium_line_t3_right_iconx2_t

0x11ca,	// (0x000100ef) list_medium_line_x3_t4_g4_g1_ParamLimits

0x11ca,	// (0x000100ef) list_medium_line_x3_t4_g4_g1

0x11d6,	// (0x000100fb) list_medium_line_x3_t4_g4_g2_ParamLimits

0x11d6,	// (0x000100fb) list_medium_line_x3_t4_g4_g2

0x2418,	// (0x0001133d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2418,	// (0x0001133d) list_medium_line_x3_t4_g4_g3

0x7f29,	// (0x00016e4e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f29,	// (0x00016e4e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0001ec3a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0001ec3a) list_medium_line_x3_t4_g4_g

0x7f35,	// (0x00016e5a) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f35,	// (0x00016e5a) list_medium_line_x3_t4_g4_t1

0x7f4c,	// (0x00016e71) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f4c,	// (0x00016e71) list_medium_line_x3_t4_g4_t2

0x2445,	// (0x0001136a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2445,	// (0x0001136a) list_medium_line_x3_t4_g4_t3

0x7f67,	// (0x00016e8c) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f67,	// (0x00016e8c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0001ec43) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0001ec43) list_medium_line_x3_t4_g4_t

0x7f84,	// (0x00016ea9) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f84,	// (0x00016ea9) list_single_dyc_row_text_pane_t1

0x7fcd,	// (0x00016ef2) list_single_dyc_row_text_pane_t2_ParamLimits

0x7fcd,	// (0x00016ef2) list_single_dyc_row_text_pane_t2

0xe541,	// (0x0001d466) list_single_dyc_row_text_pane_t3_ParamLimits

0xe541,	// (0x0001d466) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0001ec4c) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0001ec4c) list_single_dyc_row_text_pane_t

0xe565,	// (0x0001d48a) list_single_dyc_row_pane_g1_ParamLimits

0xe565,	// (0x0001d48a) list_single_dyc_row_pane_g1

0xe571,	// (0x0001d496) list_single_dyc_row_pane_g2_ParamLimits

0xe571,	// (0x0001d496) list_single_dyc_row_pane_g2

0xe57d,	// (0x0001d4a2) list_single_dyc_row_pane_g3_ParamLimits

0xe57d,	// (0x0001d4a2) list_single_dyc_row_pane_g3

0xe589,	// (0x0001d4ae) list_single_dyc_row_pane_g4_ParamLimits

0xe589,	// (0x0001d4ae) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001ec59) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001ec59) list_single_dyc_row_pane_g

0xe595,	// (0x0001d4ba) list_single_dyc_row_text_pane_ParamLimits

0xe595,	// (0x0001d4ba) list_single_dyc_row_text_pane

0x950b,	// (0x00018430) bg_sp_fs_scroll_pane

0xe5b4,	// (0x0001d4d9) thumb_sp_fs_scroll_pane

0x6620,	// (0x00015545) list_medium_line_g1_ParamLimits

0x6620,	// (0x00015545) list_medium_line_g1

0x8102,	// (0x00017027) list_medium_line_t1_ParamLimits

0x8102,	// (0x00017027) list_medium_line_t1

0x11ca,	// (0x000100ef) list_medium_line_x2_g1_ParamLimits

0x11ca,	// (0x000100ef) list_medium_line_x2_g1

0x11d6,	// (0x000100fb) list_medium_line_x2_g2_ParamLimits

0x11d6,	// (0x000100fb) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001ec62) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001ec62) list_medium_line_x2_g

0xe5bd,	// (0x0001d4e2) list_medium_line_x2_t1_ParamLimits

0xe5bd,	// (0x0001d4e2) list_medium_line_x2_t1

0x11ca,	// (0x000100ef) list_medium_line_x3_g1_ParamLimits

0x11ca,	// (0x000100ef) list_medium_line_x3_g1

0x11d6,	// (0x000100fb) list_medium_line_x3_g2_ParamLimits

0x11d6,	// (0x000100fb) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001ec62) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001ec62) list_medium_line_x3_g

0xe5bd,	// (0x0001d4e2) list_medium_line_x3_t1_ParamLimits

0xe5bd,	// (0x0001d4e2) list_medium_line_x3_t1

0xe5d3,	// (0x0001d4f8) thumb_sp_fs_scroll_pane_g1

0xe5dc,	// (0x0001d501) thumb_sp_fs_scroll_pane_g2

0xe5e5,	// (0x0001d50a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ec67) thumb_sp_fs_scroll_pane_g

0xe5d3,	// (0x0001d4f8) bg_sp_fs_scroll_pane_g1

0xe5dc,	// (0x0001d501) bg_sp_fs_scroll_pane_g2

0xe5e5,	// (0x0001d50a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ec67) bg_sp_fs_scroll_pane_g

0x11ca,	// (0x000100ef) list_medium_line_x2_t3_g4_g1_ParamLimits

0x11ca,	// (0x000100ef) list_medium_line_x2_t3_g4_g1

0x1271,	// (0x00010196) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1271,	// (0x00010196) list_medium_line_x2_t3_g4_g2

0x11d6,	// (0x000100fb) list_medium_line_x2_t3_g4_g3_ParamLimits

0x11d6,	// (0x000100fb) list_medium_line_x2_t3_g4_g3

0x11e2,	// (0x00010107) list_medium_line_x2_t3_g4_g4_ParamLimits

0x11e2,	// (0x00010107) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0001e1e3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0001e1e3) list_medium_line_x2_t3_g4_g

0x8117,	// (0x0001703c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8117,	// (0x0001703c) list_medium_line_x2_t3_g4_t1

0x8131,	// (0x00017056) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8131,	// (0x00017056) list_medium_line_x2_t3_g4_t2

0x1217,	// (0x0001013c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1217,	// (0x0001013c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001ec6e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001ec6e) list_medium_line_x2_t3_g4_t

0x6620,	// (0x00015545) list_medium_line_g2_g1_ParamLimits

0x6620,	// (0x00015545) list_medium_line_g2_g1

0x662c,	// (0x00015551) list_medium_line_g2_g2_ParamLimits

0x662c,	// (0x00015551) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0001e925) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0001e925) list_medium_line_g2_g

0x814b,	// (0x00017070) list_medium_line_g2_t1_ParamLimits

0x814b,	// (0x00017070) list_medium_line_g2_t1

0x6620,	// (0x00015545) list_medium_line_t3_g2_g1_ParamLimits

0x6620,	// (0x00015545) list_medium_line_t3_g2_g1

0x662c,	// (0x00015551) list_medium_line_t3_g2_g2_ParamLimits

0x662c,	// (0x00015551) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0001e925) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0001e925) list_medium_line_t3_g2_g

0x8160,	// (0x00017085) list_medium_line_t3_g2_t1_ParamLimits

0x8160,	// (0x00017085) list_medium_line_t3_g2_t1

0x817a,	// (0x0001709f) list_medium_line_t3_g2_t2_ParamLimits

0x817a,	// (0x0001709f) list_medium_line_t3_g2_t2

0x8190,	// (0x000170b5) list_medium_line_t3_g2_t3_ParamLimits

0x8190,	// (0x000170b5) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001ec75) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001ec75) list_medium_line_t3_g2_t

0x7d48,	// (0x00016c6d) list_medium_line_right_icon_g1

0x81aa,	// (0x000170cf) list_medium_line_right_icon_t1

0x6620,	// (0x00015545) list_medium_line_t2_g1_ParamLimits

0x6620,	// (0x00015545) list_medium_line_t2_g1

0x81b8,	// (0x000170dd) list_medium_line_t2_t1_ParamLimits

0x81b8,	// (0x000170dd) list_medium_line_t2_t1

0x81d2,	// (0x000170f7) list_medium_line_t2_t2_ParamLimits

0x81d2,	// (0x000170f7) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001ec7c) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001ec7c) list_medium_line_t2_t

0x6620,	// (0x00015545) list_medium_line_t3_g1_ParamLimits

0x6620,	// (0x00015545) list_medium_line_t3_g1

0x81eb,	// (0x00017110) list_medium_line_t3_t1_ParamLimits

0x81eb,	// (0x00017110) list_medium_line_t3_t1

0x8205,	// (0x0001712a) list_medium_line_t3_t2_ParamLimits

0x8205,	// (0x0001712a) list_medium_line_t3_t2

0x821b,	// (0x00017140) list_medium_line_t3_t3_ParamLimits

0x821b,	// (0x00017140) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001ec81) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001ec81) list_medium_line_t3_t

0x6620,	// (0x00015545) list_medium_line_g3_g1_ParamLimits

0x6620,	// (0x00015545) list_medium_line_g3_g1

0x8230,	// (0x00017155) list_medium_line_g3_g2_ParamLimits

0x8230,	// (0x00017155) list_medium_line_g3_g2

0x662c,	// (0x00015551) list_medium_line_g3_g3_ParamLimits

0x662c,	// (0x00015551) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001ec88) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001ec88) list_medium_line_g3_g

0x823c,	// (0x00017161) list_medium_line_g3_t1_ParamLimits

0x823c,	// (0x00017161) list_medium_line_g3_t1

0x6620,	// (0x00015545) list_medium_line_t2_g3_g1_ParamLimits

0x6620,	// (0x00015545) list_medium_line_t2_g3_g1

0x8230,	// (0x00017155) list_medium_line_t2_g3_g2_ParamLimits

0x8230,	// (0x00017155) list_medium_line_t2_g3_g2

0x662c,	// (0x00015551) list_medium_line_t2_g3_g3_ParamLimits

0x662c,	// (0x00015551) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001ec88) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001ec88) list_medium_line_t2_g3_g

0x8251,	// (0x00017176) list_medium_line_t2_g3_t1_ParamLimits

0x8251,	// (0x00017176) list_medium_line_t2_g3_t1

0x826b,	// (0x00017190) list_medium_line_t2_g3_t2_ParamLimits

0x826b,	// (0x00017190) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001ec8f) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001ec8f) list_medium_line_t2_g3_t

0x6620,	// (0x00015545) list_medium_line_t3_g3_g1_ParamLimits

0x6620,	// (0x00015545) list_medium_line_t3_g3_g1

0x8230,	// (0x00017155) list_medium_line_t3_g3_g2_ParamLimits

0x8230,	// (0x00017155) list_medium_line_t3_g3_g2

0x662c,	// (0x00015551) list_medium_line_t3_g3_g3_ParamLimits

0x662c,	// (0x00015551) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001ec88) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001ec88) list_medium_line_t3_g3_g

0x8289,	// (0x000171ae) list_medium_line_t3_g3_t1_ParamLimits

0x8289,	// (0x000171ae) list_medium_line_t3_g3_t1

0x82a2,	// (0x000171c7) list_medium_line_t3_g3_t2_ParamLimits

0x82a2,	// (0x000171c7) list_medium_line_t3_g3_t2

0x82b8,	// (0x000171dd) list_medium_line_t3_g3_t3_ParamLimits

0x82b8,	// (0x000171dd) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001ec94) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001ec94) list_medium_line_t3_g3_t

0x7ef9,	// (0x00016e1e) list_medium_line_right_iconx2_g1

0x7d48,	// (0x00016c6d) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001ec9b) list_medium_line_right_iconx2_g

0x82d2,	// (0x000171f7) list_medium_line_right_iconx2_t1

0x7ef9,	// (0x00016e1e) list_medium_line_t2_right_iconx2_g1

0x7d48,	// (0x00016c6d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001ec9b) list_medium_line_t2_right_iconx2_g

0x82e0,	// (0x00017205) list_medium_line_t2_right_iconx2_t1

0x82f0,	// (0x00017215) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001eca0) list_medium_line_t2_right_iconx2_t

0x8302,	// (0x00017227) list_medium_line_x4_t4_t1

0x8310,	// (0x00017235) list_medium_line_x4_t4_t2

0x8320,	// (0x00017245) list_medium_line_x4_t4_t3

0x8330,	// (0x00017255) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001eca5) list_medium_line_x4_t4_t

0x8383,	// (0x000172a8) tport_appsw_pane_ParamLimits

0x8383,	// (0x000172a8) tport_appsw_pane

0x839b,	// (0x000172c0) tport_contact_pane_ParamLimits

0x839b,	// (0x000172c0) tport_contact_pane

0x83b3,	// (0x000172d8) tport_listscroll_pane_ParamLimits

0x83b3,	// (0x000172d8) tport_listscroll_pane

0x83cd,	// (0x000172f2) cell_tport_appsw_pane_ParamLimits

0x83cd,	// (0x000172f2) cell_tport_appsw_pane

0xd1bc,	// (0x0001c0e1) tport_appsw_pane_g1_ParamLimits

0xd1bc,	// (0x0001c0e1) tport_appsw_pane_g1

0xe5ee,	// (0x0001d513) tport_contact_pane_g1

0xde9d,	// (0x0001cdc2) tport_contact_pane_t1

0xe5f7,	// (0x0001d51c) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001ecae) tport_contact_pane_t

0xe605,	// (0x0001d52a) list_tport_pane

0xe60e,	// (0x0001d533) scroll_pane_cp_030

0x8415,	// (0x0001733a) cell_tport_appsw_pane_g1

0x8425,	// (0x0001734a) cell_tport_appsw_pane_t1

0x8433,	// (0x00017358) grid_highlight_pane_cp019

0x843b,	// (0x00017360) list_tport_double_graphic_pane_ParamLimits

0x843b,	// (0x00017360) list_tport_double_graphic_pane

0x957b,	// (0x000184a0) list_highlight_pane_cp023_ParamLimits

0x957b,	// (0x000184a0) list_highlight_pane_cp023

0x8448,	// (0x0001736d) list_tport_double_graphic_pane_g1_ParamLimits

0x8448,	// (0x0001736d) list_tport_double_graphic_pane_g1

0x8455,	// (0x0001737a) list_tport_double_graphic_pane_t1_ParamLimits

0x8455,	// (0x0001737a) list_tport_double_graphic_pane_t1

0x846a,	// (0x0001738f) list_tport_double_graphic_pane_t2_ParamLimits

0x846a,	// (0x0001738f) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001ecba) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001ecba) list_tport_double_graphic_pane_t

0x950b,	// (0x00018430) main_cale_note_pane

0x5cf9,	// (0x00014c1e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5cf9,	// (0x00014c1e) cell_vitu2_function_top_wide_pane_cp01

0x789c,	// (0x000167c1) wait_bar_pane_cp05_ParamLimits

0x957b,	// (0x000184a0) listscroll_cmail_pane

0xe617,	// (0x0001d53c) list_cmail_pane

0x847c,	// (0x000173a1) list_cmail_body_pane

0x8491,	// (0x000173b6) list_single_cmail_header_caption_pane

0x84a7,	// (0x000173cc) list_single_cmail_header_detail_pane_ParamLimits

0x84a7,	// (0x000173cc) list_single_cmail_header_detail_pane

0xe627,	// (0x0001d54c) list_single_cmail_header_caption_pane_t1

0x84d0,	// (0x000173f5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84d0,	// (0x000173f5) list_single_cmail_header_detail_pane_g1

0xe63e,	// (0x0001d563) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe63e,	// (0x0001d563) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001ecbf) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001ecbf) list_single_cmail_header_detail_pane_g

0xe657,	// (0x0001d57c) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe657,	// (0x0001d57c) list_single_cmail_header_detail_pane_t1

0xe6b7,	// (0x0001d5dc) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6b7,	// (0x0001d5dc) list_single_cmail_header_editor_pane_bg

0xdffa,	// (0x0001cf1f) list_cmail_body_pane_g1

0xe6ce,	// (0x0001d5f3) list_cmail_body_pane_t1

0xd20b,	// (0x0001c130) list_single_cmail_header_editor_pane_bg_g1

0xa17b,	// (0x000190a0) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd21b,	// (0x0001c140) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd213,	// (0x0001c138) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd4ec,	// (0x0001c411) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd23b,	// (0x0001c160) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd22b,	// (0x0001c150) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd233,	// (0x0001c158) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa15b,	// (0x00019080) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84e8,	// (0x0001740d) calenote_gesture_pane_ParamLimits

0x84e8,	// (0x0001740d) calenote_gesture_pane

0x8508,	// (0x0001742d) calenote_window_pane_ParamLimits

0x8508,	// (0x0001742d) calenote_window_pane

0xe6dc,	// (0x0001d601) popup_note_window_cp01

0x8524,	// (0x00017449) calenote_swipe_1_pane_ParamLimits

0x8524,	// (0x00017449) calenote_swipe_1_pane

0x7cea,	// (0x00016c0f) calenote_swipe_2_pane_ParamLimits

0x7cea,	// (0x00016c0f) calenote_swipe_2_pane

0xe354,	// (0x0001d279) calenote_swipe_1_pane_g1_ParamLimits

0xe354,	// (0x0001d279) calenote_swipe_1_pane_g1

0xe361,	// (0x0001d286) calenote_swipe_1_pane_g2_ParamLimits

0xe361,	// (0x0001d286) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0001ebe8) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0001ebe8) calenote_swipe_1_pane_g

0xe6ee,	// (0x0001d613) calenote_swipe_1_pane_t1_ParamLimits

0xe6ee,	// (0x0001d613) calenote_swipe_1_pane_t1

0xe354,	// (0x0001d279) calenote_swipe_2_pane_g1_ParamLimits

0xe354,	// (0x0001d279) calenote_swipe_2_pane_g1

0xe70d,	// (0x0001d632) calenote_swipe_2_pane_g2_ParamLimits

0xe70d,	// (0x0001d632) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001eccb) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001eccb) calenote_swipe_2_pane_g

0xe719,	// (0x0001d63e) calenote_swipe_2_pane_t1_ParamLimits

0xe719,	// (0x0001d63e) calenote_swipe_2_pane_t1

0x950b,	// (0x00018430) main_mup_navstr_pane

0x493a,	// (0x0001385f) main_mup3_pane_t7_ParamLimits

0x493a,	// (0x0001385f) main_mup3_pane_t7

0xcdc5,	// (0x0001bcea) main_mp4_pane_g6_ParamLimits

0xcdc5,	// (0x0001bcea) main_mp4_pane_g6

0xd018,	// (0x0001bf3d) main_image3_pane_t4_ParamLimits

0xd018,	// (0x0001bf3d) main_image3_pane_t4

0x8539,	// (0x0001745e) popup_navstr_preview_pane_ParamLimits

0x8539,	// (0x0001745e) popup_navstr_preview_pane

0x854d,	// (0x00017472) scroll_navstr_pane_ParamLimits

0x854d,	// (0x00017472) scroll_navstr_pane

0x950b,	// (0x00018430) bg_popup_preview_window_pane_cp04

0xe740,	// (0x0001d665) popup_navstr_preview_pane_t1

0x8561,	// (0x00017486) scroll_navstr_pane_g1_ParamLimits

0x8561,	// (0x00017486) scroll_navstr_pane_g1

0x8575,	// (0x0001749a) scroll_navstr_pane_t1_ParamLimits

0x8575,	// (0x0001749a) scroll_navstr_pane_t1

0xe6e5,	// (0x0001d60a) bg_button_pane_cp014

0xe6e5,	// (0x0001d60a) bg_button_pane_cp030

0x7bc3,	// (0x00016ae8) list_double_fisheye_pane_g4_ParamLimits

0x7bc3,	// (0x00016ae8) list_double_fisheye_pane_g4

0x7bcf,	// (0x00016af4) list_double_fisheye_pane_g5_ParamLimits

0x7bcf,	// (0x00016af4) list_double_fisheye_pane_g5

0xd31f,	// (0x0001c244) sp_fs_scroll_pane_cp03

0xe474,	// (0x0001d399) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe480,	// (0x0001d3a5) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0001ec05) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe48c,	// (0x0001d3b1) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe61f,	// (0x0001d544) sp_fs_scroll_pane_cp02

0x9e57,	// (0x00018d7c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9e57,	// (0x00018d7c) popup_sp_fs_calendar_preview_list_single_pane

0x950b,	// (0x00018430) main_cam6_pano_pane

0x957b,	// (0x000184a0) main_mup3_pane_ParamLimits

0x950b,	// (0x00018430) main_phacti_pane

0x776f,	// (0x00016694) bg_button_pane_cp11

0x7789,	// (0x000166ae) main_mobtv_info_pane_g2_ParamLimits

0x7789,	// (0x000166ae) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0001eb65) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0001eb65) main_mobtv_info_pane_g

0x7966,	// (0x0001688b) sc_clock_pane_t5_ParamLimits

0x7966,	// (0x0001688b) sc_clock_pane_t5

0x7a2e,	// (0x00016953) main_radioblah_pane_g1_ParamLimits

0xe297,	// (0x0001d1bc) main_radioblah_pane_t3_ParamLimits

0xe297,	// (0x0001d1bc) main_radioblah_pane_t3

0xe2af,	// (0x0001d1d4) main_radioblah_pane_t4_ParamLimits

0xe2af,	// (0x0001d1d4) main_radioblah_pane_t4

0x7a56,	// (0x0001697b) main_radioblah_text_pane_ParamLimits

0x7a56,	// (0x0001697b) main_radioblah_text_pane

0x7a68,	// (0x0001698d) main_radioblah_info_pane_g1_ParamLimits

0x7b01,	// (0x00016a26) main_radioblah_info_pane_t4_ParamLimits

0x7b01,	// (0x00016a26) main_radioblah_info_pane_t4

0x957b,	// (0x000184a0) main_sp_fs_calendar_pane

0x858c,	// (0x000174b1) main_phacti_pane_g1

0x8594,	// (0x000174b9) phacti_note_pane_ParamLimits

0x8594,	// (0x000174b9) phacti_note_pane

0xe757,	// (0x0001d67c) phacti_term_pane_ParamLimits

0xe757,	// (0x0001d67c) phacti_term_pane

0xe76c,	// (0x0001d691) phacti_note_pane_t1_ParamLimits

0xe76c,	// (0x0001d691) phacti_note_pane_t1

0xe783,	// (0x0001d6a8) phacti_term_pane_g1

0xe78b,	// (0x0001d6b0) phacti_term_pane_t1_ParamLimits

0xe78b,	// (0x0001d6b0) phacti_term_pane_t1

0xe7b5,	// (0x0001d6da) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9ef6,	// (0x00018e1b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001ecd5) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7bd,	// (0x0001d6e2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7bd,	// (0x0001d6e2) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7d3,	// (0x0001d6f8) aid_popup_sp_fs_bg_corner_pane

0xc417,	// (0x0001b33c) popup_sp_fs_calendar_preview_bg_pane_g1

0x950b,	// (0x00018430) popup_sp_fs_calendar_preview_bg_pane

0xe7db,	// (0x0001d700) popup_sp_fs_calendar_preview_list_pane

0xbefc,	// (0x0001ae21) bg_main_sp_fs_cale_pane_ParamLimits

0xbefc,	// (0x0001ae21) bg_main_sp_fs_cale_pane

0xe7ec,	// (0x0001d711) listscroll_cale_mrui_pane_ParamLimits

0xe7ec,	// (0x0001d711) listscroll_cale_mrui_pane

0xd28f,	// (0x0001c1b4) listscroll_sp_fs_schedule_track_pane

0xe801,	// (0x0001d726) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe801,	// (0x0001d726) main_sp_fs_ctrlbar_pane_cp01

0xe814,	// (0x0001d739) main_sp_fs_ribbon_pane

0xe81c,	// (0x0001d741) popup_sp_fs_cale_preview_window

0x8609,	// (0x0001752e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8609,	// (0x0001752e) list_single_sp_fs_schedule_track_pane

0x957b,	// (0x000184a0) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x957b,	// (0x000184a0) bg_sp_fs_highlight_list_pane_cp03

0x861c,	// (0x00017541) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x861c,	// (0x00017541) list_single_sp_fs_schedule_track_pane_g1

0x8628,	// (0x0001754d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8628,	// (0x0001754d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001ecda) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001ecda) list_single_sp_fs_schedule_track_pane_g

0x8634,	// (0x00017559) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8634,	// (0x00017559) list_single_sp_fs_schedule_track_pane_t1

0x864e,	// (0x00017573) sp_fs_schedule_track_pane_ParamLimits

0x864e,	// (0x00017573) sp_fs_schedule_track_pane

0xe82e,	// (0x0001d753) sp_fs_schedule_track_pane_g1

0xe836,	// (0x0001d75b) sp_fs_schedule_track_pane_g2

0xe83e,	// (0x0001d763) sp_fs_schedule_track_pane_g3

0xe846,	// (0x0001d76b) sp_fs_schedule_track_pane_g4

0xe84e,	// (0x0001d773) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001ecdf) sp_fs_schedule_track_pane_g

0xd20b,	// (0x0001c130) bg_sp_fs_schedule_viewer_highlight_g1

0xa17b,	// (0x000190a0) bg_sp_fs_schedule_viewer_highlight_g2

0xd213,	// (0x0001c138) bg_sp_fs_schedule_viewer_highlight_g3

0xd21b,	// (0x0001c140) bg_sp_fs_schedule_viewer_highlight_g4

0xd4ec,	// (0x0001c411) bg_sp_fs_schedule_viewer_highlight_g5

0xd22b,	// (0x0001c150) bg_sp_fs_schedule_viewer_highlight_g6

0xd233,	// (0x0001c158) bg_sp_fs_schedule_viewer_highlight_g7

0xd23b,	// (0x0001c160) bg_sp_fs_schedule_viewer_highlight_g8

0xa15b,	// (0x00019080) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001ecea) bg_sp_fs_schedule_viewer_highlight_g

0x950b,	// (0x00018430) bg_main_sp_fs_ribbon_pane

0x865f,	// (0x00017584) main_sp_fs_ribbon_pane_g1

0xe856,	// (0x0001d77b) main_sp_fs_ribbon_pane_t1

0x8668,	// (0x0001758d) main_sp_fs_ribbon_pane_t2

0xe865,	// (0x0001d78a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001ecfd) main_sp_fs_ribbon_pane_t

0xe874,	// (0x0001d799) main_sp_fs_ribbon_scheduler_pane

0xe87c,	// (0x0001d7a1) bg_main_sp_fs_ribbon_pane_g1

0xe885,	// (0x0001d7aa) bg_main_sp_fs_ribbon_pane_g2

0xe88e,	// (0x0001d7b3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001ed04) bg_main_sp_fs_ribbon_pane_g

0xe896,	// (0x0001d7bb) main_sp_fs_ribbon_scheduler_pane_g1

0xe89f,	// (0x0001d7c4) main_sp_fs_ribbon_scheduler_pane_g2

0xe8a8,	// (0x0001d7cd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001ed0b) main_sp_fs_ribbon_scheduler_pane_g

0xe8b1,	// (0x0001d7d6) list_cale_mrui_pane

0x8677,	// (0x0001759c) sp_fs_scroll_pane_cp07_ParamLimits

0x8677,	// (0x0001759c) sp_fs_scroll_pane_cp07

0x8693,	// (0x000175b8) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8693,	// (0x000175b8) bg_sp_fs_schedule_viewer_highlight

0xe8be,	// (0x0001d7e3) list_single_sp_fs_schedule_track_pane_cp01

0xe8c6,	// (0x0001d7eb) list_sp_fs_schedule_track_pane

0xe8ce,	// (0x0001d7f3) sp_fs_scroll_pane_cp06_ParamLimits

0xe8ce,	// (0x0001d7f3) sp_fs_scroll_pane_cp06

0xc417,	// (0x0001b33c) bgmain_sp_fs_calendar_pane_g1

0x86a3,	// (0x000175c8) list_single_cale_mrui_pane_ParamLimits

0x86a3,	// (0x000175c8) list_single_cale_mrui_pane

0xe8e0,	// (0x0001d805) list_single_cale_mrui_row_pane_ParamLimits

0xe8e0,	// (0x0001d805) list_single_cale_mrui_row_pane

0xe8ed,	// (0x0001d812) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8ed,	// (0x0001d812) list_single_cale_mrui_row_pane_g1

0xe932,	// (0x0001d857) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe932,	// (0x0001d857) list_single_cale_mrui_row_pane_t1

0x86c4,	// (0x000175e9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86c4,	// (0x000175e9) list_single_cale_mrui_row_pane_t2

0xe944,	// (0x0001d869) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe944,	// (0x0001d869) list_single_cale_mrui_row_pane_t3

0xe973,	// (0x0001d898) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe973,	// (0x0001d898) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001ed19) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001ed19) list_single_cale_mrui_row_pane_t

0x872c,	// (0x00017651) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x872c,	// (0x00017651) list_single_cmail_header_editor_pane_bg_cp01

0x8752,	// (0x00017677) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8752,	// (0x00017677) list_single_cmail_header_editor_pane_bg_cp02

0x8772,	// (0x00017697) main_radioblah_text_pane_t1_ParamLimits

0x8772,	// (0x00017697) main_radioblah_text_pane_t1

0xe9a2,	// (0x0001d8c7) cam6_indi_pane_cp01

0xe9aa,	// (0x0001d8cf) cam6_mode_pane_cp01

0xe9b2,	// (0x0001d8d7) cam6_pano_pane

0xe9bb,	// (0x0001d8e0) cam6_zoom_pane_cp01

0xe9c3,	// (0x0001d8e8) cam6_pano_image_pane

0xe9ce,	// (0x0001d8f3) cam6_pano_pane_g1

0xdffa,	// (0x0001cf1f) cam6_pano_pane_g2

0xe9d7,	// (0x0001d8fc) cam6_pano_pane_g3

0xe9e0,	// (0x0001d905) cam6_pano_pane_g4

0xca06,	// (0x0001b92b) cam6_pano_pane_g5

0xe9e9,	// (0x0001d90e) cam6_pano_pane_g6

0xe9f3,	// (0x0001d918) cam6_pano_pane_g7

0xe9fb,	// (0x0001d920) cam6_pano_pane_g8

0xea04,	// (0x0001d929) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001ed22) cam6_pano_pane_g

0x950b,	// (0x00018430) main_browser_tag_pane

0xe738,	// (0x0001d65d) grid_navstr_albumart_pane

0xea0f,	// (0x0001d934) cell_navstr_albumart_pane_ParamLimits

0xea0f,	// (0x0001d934) cell_navstr_albumart_pane

0xea2f,	// (0x0001d954) cell_navstr_albumart_pane_g1

0xbd0d,	// (0x0001ac32) cell_navstr_albumart_pane_g2

0xbd1d,	// (0x0001ac42) cell_navstr_albumart_pane_g3

0xbd15,	// (0x0001ac3a) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001ed35) cell_navstr_albumart_pane_g

0x878c,	// (0x000176b1) bt_list_pane_ParamLimits

0x878c,	// (0x000176b1) bt_list_pane

0x87a0,	// (0x000176c5) bt_list_pane_t1

0x87af,	// (0x000176d4) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001ed3e) bt_list_pane_t

0x950b,	// (0x00018430) main_cale_prevew_pane

0x87be,	// (0x000176e3) popup_cale_preview_window_ParamLimits

0x87be,	// (0x000176e3) popup_cale_preview_window

0x957b,	// (0x000184a0) bg_popup_preview_window_pane_cp05_ParamLimits

0x957b,	// (0x000184a0) bg_popup_preview_window_pane_cp05

0xea37,	// (0x0001d95c) list_cale_preview_pane_ParamLimits

0xea37,	// (0x0001d95c) list_cale_preview_pane

0x87d9,	// (0x000176fe) list_double_cale_preview_pane_ParamLimits

0x87d9,	// (0x000176fe) list_double_cale_preview_pane

0x87eb,	// (0x00017710) list_single_cale_preview_pane_ParamLimits

0x87eb,	// (0x00017710) list_single_cale_preview_pane

0x8801,	// (0x00017726) list_single_cale_preview_pane_g1

0x8809,	// (0x0001772e) list_single_cale_preview_pane_t1_ParamLimits

0x8809,	// (0x0001772e) list_single_cale_preview_pane_t1

0x881e,	// (0x00017743) list_double_cale_preview_pane_g1

0x8826,	// (0x0001774b) list_double_cale_preview_pane_t1_ParamLimits

0x8826,	// (0x0001774b) list_double_cale_preview_pane_t1

0x883b,	// (0x00017760) list_double_cale_preview_pane_t2_ParamLimits

0x883b,	// (0x00017760) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001ed43) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001ed43) list_double_cale_preview_pane_t

0x950b,	// (0x00018430) main_ezdial_pane

0x957b,	// (0x000184a0) main_sp_fs_email_pane_ParamLimits

0x7d72,	// (0x00016c97) cmail_ddmenu_btn01_pane_ParamLimits

0x7d72,	// (0x00016c97) cmail_ddmenu_btn01_pane

0x7d85,	// (0x00016caa) cmail_ddmenu_btn02_pane_ParamLimits

0x7d85,	// (0x00016caa) cmail_ddmenu_btn02_pane

0x7da8,	// (0x00016ccd) cmail_ddmenu_btn03_pane_ParamLimits

0x7da8,	// (0x00016ccd) cmail_ddmenu_btn03_pane

0x7dce,	// (0x00016cf3) main_sp_fs_ctrlbar_pane_ParamLimits

0x7df2,	// (0x00016d17) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x847c,	// (0x000173a1) list_cmail_body_pane_ParamLimits

0xe635,	// (0x0001d55a) bg_button_pane_cp12

0xe64a,	// (0x0001d56f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe64a,	// (0x0001d56f) list_single_cmail_header_detail_pane_g3

0xe693,	// (0x0001d5b8) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe693,	// (0x0001d5b8) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001ecc6) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001ecc6) list_single_cmail_header_detail_pane_t

0xe7a0,	// (0x0001d6c5) phacti_term_pane_t2_ParamLimits

0xe7a0,	// (0x0001d6c5) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001ecd0) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001ecd0) phacti_term_pane_t

0xea43,	// (0x0001d968) aid_size_list_single_double

0x8853,	// (0x00017778) popup_ezdial_listscroll_window

0x886f,	// (0x00017794) popup_number_entry_window_cp01

0x9f18,	// (0x00018e3d) bg_popup_call_pane_cp09

0xea4f,	// (0x0001d974) ezdial_list_pane

0xea57,	// (0x0001d97c) scroll_pane_cp23

0xbefc,	// (0x0001ae21) bg_button_pane_cp028_ParamLimits

0xbefc,	// (0x0001ae21) bg_button_pane_cp028

0x887d,	// (0x000177a2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x887d,	// (0x000177a2) cmail_ddmenu_btn01_pane_g1

0x8889,	// (0x000177ae) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8889,	// (0x000177ae) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001ed48) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001ed48) cmail_ddmenu_btn01_pane_g

0xea5f,	// (0x0001d984) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea5f,	// (0x0001d984) cmail_ddmenu_btn01_pane_t1

0xbefc,	// (0x0001ae21) bg_button_pane_cp029_ParamLimits

0xbefc,	// (0x0001ae21) bg_button_pane_cp029

0x8895,	// (0x000177ba) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8895,	// (0x000177ba) cmail_ddmenu_btn02_pane_g1

0x88ad,	// (0x000177d2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x88ad,	// (0x000177d2) cmail_ddmenu_btn02_pane_t1

0x957b,	// (0x000184a0) bg_button_pane_cp031_ParamLimits

0x957b,	// (0x000184a0) bg_button_pane_cp031

0x8895,	// (0x000177ba) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8895,	// (0x000177ba) cmail_ddmenu_btn03_pane_g1

0x88ad,	// (0x000177d2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x88ad,	// (0x000177d2) cmail_ddmenu_btn03_pane_t1

0x54e1,	// (0x00014406) cell_dialer2_keypad_pane_t1_ParamLimits

0x54fb,	// (0x00014420) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x54fb,	// (0x00014420) cell_dialer2_keypad_pane_t1_copy1

0x7592,	// (0x000164b7) ncimui_group_button_pane

0x957b,	// (0x000184a0) main_sp_fs_calendar_pane_ParamLimits

0x8491,	// (0x000173b6) list_single_cmail_header_caption_pane_ParamLimits

0xe7e3,	// (0x0001d708) aid_recal_txt_sm_pane

0x950b,	// (0x00018430) mian_recal_day_pane

0xe81c,	// (0x0001d741) popup_sp_fs_cale_preview_window_ParamLimits

0xea74,	// (0x0001d999) list_recal_day_pane

0xeab6,	// (0x0001d9db) list_single_recal_day_pane_ParamLimits

0xeab6,	// (0x0001d9db) list_single_recal_day_pane

0xeac8,	// (0x0001d9ed) list_single_recal_day_pane_g1_ParamLimits

0xeac8,	// (0x0001d9ed) list_single_recal_day_pane_g1

0xead4,	// (0x0001d9f9) list_single_recal_day_pane_g2_ParamLimits

0xead4,	// (0x0001d9f9) list_single_recal_day_pane_g2

0xeae0,	// (0x0001da05) list_single_recal_day_pane_g3_ParamLimits

0xeae0,	// (0x0001da05) list_single_recal_day_pane_g3

0x88d1,	// (0x000177f6) list_single_recal_day_pane_g4_ParamLimits

0x88d1,	// (0x000177f6) list_single_recal_day_pane_g4

0xeaec,	// (0x0001da11) list_single_recal_day_pane_g5_ParamLimits

0xeaec,	// (0x0001da11) list_single_recal_day_pane_g5

0xeaf8,	// (0x0001da1d) list_single_recal_day_pane_g6_ParamLimits

0xeaf8,	// (0x0001da1d) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001ed57) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001ed57) list_single_recal_day_pane_g

0xeb0c,	// (0x0001da31) list_single_recal_day_pane_t1

0xeb1e,	// (0x0001da43) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001ed62) list_single_recal_day_pane_t

0x88e9,	// (0x0001780e) ncimui_query_button_pane_ParamLimits

0x88e9,	// (0x0001780e) ncimui_query_button_pane

0x88f9,	// (0x0001781e) ncimui_query_button_pane_t1_ParamLimits

0x88f9,	// (0x0001781e) ncimui_query_button_pane_t1

0xeb42,	// (0x0001da67) ncimui_query_button_pane_t2_ParamLimits

0xeb42,	// (0x0001da67) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001ed67) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001ed67) ncimui_query_button_pane_t

0x890c,	// (0x00017831) query_button_pane_ParamLimits

0x890c,	// (0x00017831) query_button_pane

0x950b,	// (0x00018430) bg_button_pane_cp0028

0xeb55,	// (0x0001da7a) query_button_pane_t1

0x3539,	// (0x0001245e) main_tport_pane_ParamLimits

0x8340,	// (0x00017265) bg_popup_window_pane_cp01_ParamLimits

0x8340,	// (0x00017265) bg_popup_window_pane_cp01

0x835b,	// (0x00017280) heading_pane_cp08_ParamLimits

0x835b,	// (0x00017280) heading_pane_cp08

0x836e,	// (0x00017293) heading_pane_cp07_ParamLimits

0x836e,	// (0x00017293) heading_pane_cp07

0x8415,	// (0x0001733a) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001ecb3) cell_tport_appsw_pane_g

0xaba2,	// (0x00019ac7) input_candi_list_open_g1

0xa36c,	// (0x00019291) list_cale_time_pane_g6_ParamLimits

0xa36c,	// (0x00019291) list_cale_time_pane_g6

0x4302,	// (0x00013227) aid_size_touch_calib_1_ParamLimits

0x4302,	// (0x00013227) aid_size_touch_calib_1

0x4314,	// (0x00013239) aid_size_touch_calib_2_ParamLimits

0x4314,	// (0x00013239) aid_size_touch_calib_2

0x432c,	// (0x00013251) aid_size_touch_calib_3_ParamLimits

0x432c,	// (0x00013251) aid_size_touch_calib_3

0x434a,	// (0x0001326f) aid_size_touch_calib_4_ParamLimits

0x434a,	// (0x0001326f) aid_size_touch_calib_4

0x4362,	// (0x00013287) main_touch_calib_button_group_pane_ParamLimits

0x4362,	// (0x00013287) main_touch_calib_button_group_pane

0x437a,	// (0x0001329f) main_touch_calib_pane_g1_ParamLimits

0x438c,	// (0x000132b1) main_touch_calib_pane_g2_ParamLimits

0x439e,	// (0x000132c3) main_touch_calib_pane_g3_ParamLimits

0x43b0,	// (0x000132d5) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x0001e672) main_touch_calib_pane_g_ParamLimits

0x43c2,	// (0x000132e7) main_touch_calib_pane_t1_ParamLimits

0x43dc,	// (0x00013301) main_touch_calib_pane_t2_ParamLimits

0x43f6,	// (0x0001331b) main_touch_calib_pane_t3_ParamLimits

0x440a,	// (0x0001332f) main_touch_calib_pane_t4_ParamLimits

0x441e,	// (0x00013343) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x0001e67b) main_touch_calib_pane_t_ParamLimits

0xc7a6,	// (0x0001b6cb) list_single_fp_cale_pane_g3_ParamLimits

0xc7a6,	// (0x0001b6cb) list_single_fp_cale_pane_g3

0x957b,	// (0x000184a0) bg_button_pane_cp012_ParamLimits

0x957b,	// (0x000184a0) bg_vkb2_func_pane_cp03_ParamLimits

0x65d6,	// (0x000154fb) cell_vitu2_function_top_pane_g1_ParamLimits

0x957b,	// (0x000184a0) bg_vkb2_func_pane_cp04_ParamLimits

0x751d,	// (0x00016442) main_ncimui_button_group_pane_ParamLimits

0x751d,	// (0x00016442) main_ncimui_button_group_pane

0x757d,	// (0x000164a2) main_ncimui_pane_t3_ParamLimits

0x757d,	// (0x000164a2) main_ncimui_pane_t3

0xe74e,	// (0x0001d673) phacti_button_group_pane

0xea43,	// (0x0001d968) aid_size_list_single_double_ParamLimits

0x8853,	// (0x00017778) popup_ezdial_listscroll_window_ParamLimits

0x886f,	// (0x00017794) popup_number_entry_window_cp01_ParamLimits

0x891f,	// (0x00017844) phacti_button_pane_ParamLimits

0x891f,	// (0x00017844) phacti_button_pane

0x950b,	// (0x00018430) bg_button_pane_cp14

0xeb63,	// (0x0001da88) phacti_button_pane_t1

0x8930,	// (0x00017855) main_touch_calib_button_pane_ParamLimits

0x8930,	// (0x00017855) main_touch_calib_button_pane

0x9cde,	// (0x00018c03) bg_button_pane_cp18_ParamLimits

0x9cde,	// (0x00018c03) bg_button_pane_cp18

0xeb71,	// (0x0001da96) main_touch_calib_button_pane_t1_ParamLimits

0xeb71,	// (0x0001da96) main_touch_calib_button_pane_t1

0xeb87,	// (0x0001daac) main_touch_calib_button_pane_t2_ParamLimits

0xeb87,	// (0x0001daac) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001ed6c) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001ed6c) main_touch_calib_button_pane_t

0x950b,	// (0x00018430) cell_ncimui_button_pane

0x950b,	// (0x00018430) bg_button_pane_cp032

0xeba5,	// (0x0001daca) cell_ncimui_button_pane_t1

0xcff8,	// (0x0001bf1d) image3_infobar_pane_ParamLimits

0xcff8,	// (0x0001bf1d) image3_infobar_pane

0x7992,	// (0x000168b7) fs_bigclock_status_pane_ParamLimits

0x7992,	// (0x000168b7) fs_bigclock_status_pane

0x799f,	// (0x000168c4) main_fs_bigclock_clock_pane_ParamLimits

0x799f,	// (0x000168c4) main_fs_bigclock_clock_pane

0x79bd,	// (0x000168e2) main_fs_bigclock_indi_pane_ParamLimits

0x79bd,	// (0x000168e2) main_fs_bigclock_indi_pane

0x79ef,	// (0x00016914) main_fs_bigclock_swipe_pane_ParamLimits

0x79ef,	// (0x00016914) main_fs_bigclock_swipe_pane

0x950b,	// (0x00018430) main_fs_clock_dumped_data

0xe107,	// (0x0001d02c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe107,	// (0x0001d02c) list_single_fs_bigclock_indicator_pane_g1

0xe122,	// (0x0001d047) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe122,	// (0x0001d047) list_single_fs_bigclock_indicator_pane_g2

0xe13c,	// (0x0001d061) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe13c,	// (0x0001d061) list_single_fs_bigclock_indicator_pane_g3

0xe156,	// (0x0001d07b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe156,	// (0x0001d07b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0001eb99) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0001eb99) list_single_fs_bigclock_indicator_pane_g

0xe181,	// (0x0001d0a6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe181,	// (0x0001d0a6) list_single_fs_bigclock_indicator_pane_t1

0xe1a9,	// (0x0001d0ce) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe1a9,	// (0x0001d0ce) list_single_fs_bigclock_indicator_pane_t2

0xe1d1,	// (0x0001d0f6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1d1,	// (0x0001d0f6) list_single_fs_bigclock_indicator_pane_t3

0xe1f9,	// (0x0001d11e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1f9,	// (0x0001d11e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0001eba4) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0001eba4) list_single_fs_bigclock_indicator_pane_t

0xebb3,	// (0x0001dad8) image3_infobar_fav_pane_ParamLimits

0xebb3,	// (0x0001dad8) image3_infobar_fav_pane

0xebc3,	// (0x0001dae8) image3_infobar_loc_pane_ParamLimits

0xebc3,	// (0x0001dae8) image3_infobar_loc_pane

0xebd7,	// (0x0001dafc) image3_infobar_time_pane_ParamLimits

0xebd7,	// (0x0001dafc) image3_infobar_time_pane

0xc417,	// (0x0001b33c) image3_infobar_time_pane_g1

0xebe7,	// (0x0001db0c) image3_infobar_time_pane_t1

0xc417,	// (0x0001b33c) image3_infobar_loc_pane_g1

0xebf5,	// (0x0001db1a) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001ed71) image3_infobar_loc_pane_g

0xebfd,	// (0x0001db22) image3_infobar_loc_pane_t1

0xc417,	// (0x0001b33c) image3_infobar_fav_pane_g1

0xec0b,	// (0x0001db30) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001ed76) image3_infobar_fav_pane_g

0xec13,	// (0x0001db38) fs_bigclock_status_battery_pane

0xec1c,	// (0x0001db41) fs_bigclock_status_signal_pane

0xec25,	// (0x0001db4a) fs_bigclock_status_title_pane

0xec2e,	// (0x0001db53) fs_bigclock_status_signal_pane_g1

0xec37,	// (0x0001db5c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001ed7b) fs_bigclock_status_signal_pane_g

0xec3f,	// (0x0001db64) fs_bigclock_status_battery_pane_g1

0xec48,	// (0x0001db6d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001ed80) fs_bigclock_status_battery_pane_g

0xec50,	// (0x0001db75) fs_bigclock_status_title_pane_t1

0x8945,	// (0x0001786a) main_fs_bigclock_clock_pane_g1

0x8945,	// (0x0001786a) main_fs_bigclock_clock_pane_g2

0x8956,	// (0x0001787b) main_fs_bigclock_clock_pane_g3

0x8956,	// (0x0001787b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001ed85) main_fs_bigclock_clock_pane_g

0x8969,	// (0x0001788e) main_fs_bigclock_clock_pane_t1

0x897f,	// (0x000178a4) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001ed8e) main_fs_bigclock_clock_pane_t

0xec5e,	// (0x0001db83) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec5e,	// (0x0001db83) list_single_fs_bigclock_indicator_pane

0xec6f,	// (0x0001db94) list_single_fs_bigclock_pane_ParamLimits

0xec6f,	// (0x0001db94) list_single_fs_bigclock_pane

0xec95,	// (0x0001dbba) main_fs_bigclock_indicator_pane_t1

0xeca4,	// (0x0001dbc9) list_single_fs_bigclock_pane_g1

0xecac,	// (0x0001dbd1) list_single_fs_bigclock_pane_t1

0xc417,	// (0x0001b33c) main_fs_bigclock_swipe_pane_g1

0xecef,	// (0x0001dc14) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001ed9f) main_fs_bigclock_swipe_pane_g

0xecf7,	// (0x0001dc1c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf7,	// (0x0001dc1c) main_fs_bigclock_swipe_pane_t1

0x246f,	// (0x00011394) call_type_pane_ParamLimits

0x950b,	// (0x00018430) main_btmg_pane

0xe919,	// (0x0001d83e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe919,	// (0x0001d83e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001ed12) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001ed12) list_single_cale_mrui_row_pane_g

0xea9d,	// (0x0001d9c2) list_recal_vselct_arw_lo_pane

0xeaa5,	// (0x0001d9ca) list_recal_vselct_arw_up_pane

0xeaad,	// (0x0001d9d2) list_recal_vselct_pane

0x89d9,	// (0x000178fe) btmg_button_pane

0x89e3,	// (0x00017908) main_btmg_pane_g1

0x950b,	// (0x00018430) bg_button_pane_cp044

0xed14,	// (0x0001dc39) btmg_button_pane_t1

0xbee8,	// (0x0001ae0d) aid_listscroll_gen

0x957b,	// (0x000184a0) main_cntbar_detail_pane

0xe617,	// (0x0001d53c) list_cmail_folder_pane

0xd31f,	// (0x0001c244) sp_fs_scroll_pane_cp03_ParamLimits

0x8491,	// (0x000173b6) list_single_fs_dyc_pane_cp01_ParamLimits

0x8491,	// (0x000173b6) list_single_fs_dyc_pane_cp01

0xed22,	// (0x0001dc47) aid_size_cmail_indent

0xed2b,	// (0x0001dc50) list_single_dyc_row_pane_cp01

0x8a1f,	// (0x00017944) cntbar_detail_list_pane_ParamLimits

0x8a1f,	// (0x00017944) cntbar_detail_list_pane

0x8a6b,	// (0x00017990) main_cntbar_detail_cont_pane_ParamLimits

0x8a6b,	// (0x00017990) main_cntbar_detail_cont_pane

0xd31f,	// (0x0001c244) scroll_pane_cp032_ParamLimits

0xd31f,	// (0x0001c244) scroll_pane_cp032

0x8a7f,	// (0x000179a4) cntbar_detail_list_event_pane_ParamLimits

0x8a7f,	// (0x000179a4) cntbar_detail_list_event_pane

0x8a2f,	// (0x00017954) cntbar_detail_list_shct_pane

0xa1c9,	// (0x000190ee) aid_list_gen

0xed34,	// (0x0001dc59) aid_scroll

0xed3d,	// (0x0001dc62) aid_size_touch_scroll_bar

0x6cd7,	// (0x00015bfc) aid_list_double

0x6cc5,	// (0x00015bea) aid_list_single

0x6cc5,	// (0x00015bea) aid_list_single_lg

0x8a8f,	// (0x000179b4) aid_list_z_g_a_sm

0x8a97,	// (0x000179bc) aid_list_z_g_d

0x8a9f,	// (0x000179c4) aid_txt_z_prm

0x8aad,	// (0x000179d2) aid_txt_z_prm_cp01

0x8abb,	// (0x000179e0) aid_txt_z_sec

0x8ac9,	// (0x000179ee) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8ac9,	// (0x000179ee) main_cntbar_detail_cont_pane_g1

0x8add,	// (0x00017a02) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8add,	// (0x00017a02) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001eda4) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001eda4) main_cntbar_detail_cont_pane_g

0xed46,	// (0x0001dc6b) main_cntbar_detail_cont_pane_t1

0xed54,	// (0x0001dc79) main_cntbar_detail_cont_pane_t2

0xed62,	// (0x0001dc87) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001eda9) main_cntbar_detail_cont_pane_t

0x8aed,	// (0x00017a12) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8aed,	// (0x00017a12) cell_cntbar_detail_list_shct_pane

0xed70,	// (0x0001dc95) cntbar_detail_list_shct_pane_g1

0xed79,	// (0x0001dc9e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001edb0) cntbar_detail_list_shct_pane_g

0x8b01,	// (0x00017a26) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b01,	// (0x00017a26) cntbar_detail_list_event_pane_g1

0x8b0d,	// (0x00017a32) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b0d,	// (0x00017a32) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001edb5) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001edb5) cntbar_detail_list_event_pane_g

0x8b79,	// (0x00017a9e) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b79,	// (0x00017a9e) cntbar_detail_list_event_pane_t1

0x8b8e,	// (0x00017ab3) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b8e,	// (0x00017ab3) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001edc2) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001edc2) cntbar_detail_list_event_pane_t

0xc417,	// (0x0001b33c) cell_cntbar_detail_list_shct_pane_g1

0xa9e1,	// (0x00019906) navi_pane_mv_g3

0x957b,	// (0x000184a0) main_cntbar_detail_pane_ParamLimits

0x950b,	// (0x00018430) main_notif_wgt_pane

0xcd53,	// (0x0001bc78) aid_tch_main_mp4_pane_g4

0xcf85,	// (0x0001beaa) popup_slider_window_cp02

0xea93,	// (0x0001d9b8) list_recal_day_event_pane

0x89ed,	// (0x00017912) cntbar_detail_btn_pane_ParamLimits

0x89ed,	// (0x00017912) cntbar_detail_btn_pane

0x8a06,	// (0x0001792b) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a06,	// (0x0001792b) cntbar_detail_btn_pane_cp01

0x8a2f,	// (0x00017954) cntbar_detail_list_shct_pane_ParamLimits

0x8a3f,	// (0x00017964) cntbar_detail_pane_g1_ParamLimits

0x8a3f,	// (0x00017964) cntbar_detail_pane_g1

0x8a4f,	// (0x00017974) cntbar_detail_pane_t1_ParamLimits

0x8a4f,	// (0x00017974) cntbar_detail_pane_t1

0x8b19,	// (0x00017a3e) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b19,	// (0x00017a3e) cntbar_detail_list_event_pane_g3

0x8b31,	// (0x00017a56) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b31,	// (0x00017a56) cntbar_detail_list_event_pane_g4

0x8b49,	// (0x00017a6e) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b49,	// (0x00017a6e) cntbar_detail_list_event_pane_g5

0x8b61,	// (0x00017a86) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b61,	// (0x00017a86) cntbar_detail_list_event_pane_g6

0x8ba3,	// (0x00017ac8) cntbar_detail_list_event_pane_t3_ParamLimits

0x8ba3,	// (0x00017ac8) cntbar_detail_list_event_pane_t3

0x8bb5,	// (0x00017ada) popup_notif_wgt_window_ParamLimits

0x8bb5,	// (0x00017ada) popup_notif_wgt_window

0x8bce,	// (0x00017af3) popup_submenu_window_cp01_ParamLimits

0x8bce,	// (0x00017af3) popup_submenu_window_cp01

0x9f18,	// (0x00018e3d) bg_popup_window_pane_cp10

0xed82,	// (0x0001dca7) listscroll_notif_wgt_pane

0xed94,	// (0x0001dcb9) list_notif_wgt_window

0xed9d,	// (0x0001dcc2) scroll_pane_cp033

0x8be4,	// (0x00017b09) list_notif_wgt_row_pane_ParamLimits

0x8be4,	// (0x00017b09) list_notif_wgt_row_pane

0xeda6,	// (0x0001dccb) aid_size_list_notif_wgt_del

0xedb3,	// (0x0001dcd8) list_notif_wgt_row_pane_g1

0xedbf,	// (0x0001dce4) list_notif_wgt_row_pane_g2

0xedce,	// (0x0001dcf3) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001edc9) list_notif_wgt_row_pane_g

0xeddb,	// (0x0001dd00) list_notif_wgt_row_pane_t1

0xedf1,	// (0x0001dd16) list_notif_wgt_row_pane_t2

0xee03,	// (0x0001dd28) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001edd0) list_notif_wgt_row_pane_t

0xd514,	// (0x0001c439) list_recal_day_event_pane_g1

0xee15,	// (0x0001dd3a) list_recal_day_event_pane_t1

0x950b,	// (0x00018430) bg_button_pane_cp045

0x8bf4,	// (0x00017b19) cntbar_detail_btn_pane_t1

0xbefc,	// (0x0001ae21) main_callh_pane_ParamLimits

0xbefc,	// (0x0001ae21) main_callh_pane

0x950b,	// (0x00018430) main_coverflow0_pane

0x950b,	// (0x00018430) main_wgtman_pane

0x7a07,	// (0x0001692c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a07,	// (0x0001692c) main_fs_bigclock_unlock_btn_pane

0x840d,	// (0x00017332) bg_button_pane_cp16

0x841d,	// (0x00017342) cell_tport_appsw_pane_g3

0x8c02,	// (0x00017b27) cf0_flow_pane_ParamLimits

0x8c02,	// (0x00017b27) cf0_flow_pane

0xee24,	// (0x0001dd49) listscroll_cf0_pane

0xee2f,	// (0x0001dd54) main_cf0_pane_g1

0x8c17,	// (0x00017b3c) main_cf0_pane_t1_ParamLimits

0x8c17,	// (0x00017b3c) main_cf0_pane_t1

0x8c2e,	// (0x00017b53) main_cf0_pane_t2_ParamLimits

0x8c2e,	// (0x00017b53) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001eddc) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001eddc) main_cf0_pane_t

0xee41,	// (0x0001dd66) scroll_pane_cp11

0x8c45,	// (0x00017b6a) cf0_flow_pane_g1

0x8c4d,	// (0x00017b72) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001ede1) cf0_flow_pane_g

0x8c55,	// (0x00017b7a) cf0_flow_pane_t1

0x950b,	// (0x00018430) main_call6_pane

0x950b,	// (0x00018430) main_calllock_pane

0x8c63,	// (0x00017b88) call6_btn_grp_pane_ParamLimits

0x8c63,	// (0x00017b88) call6_btn_grp_pane

0x8c7d,	// (0x00017ba2) call6_pane_g1_ParamLimits

0x8c7d,	// (0x00017ba2) call6_pane_g1

0x8c93,	// (0x00017bb8) popup_call6_1st_window_ParamLimits

0x8c93,	// (0x00017bb8) popup_call6_1st_window

0x8ca4,	// (0x00017bc9) popup_call6_2nd_window_ParamLimits

0x8ca4,	// (0x00017bc9) popup_call6_2nd_window

0x8cb5,	// (0x00017bda) cell_call6_btn_pane_ParamLimits

0x8cb5,	// (0x00017bda) cell_call6_btn_pane

0x9f18,	// (0x00018e3d) bg_popup_call2_in_pane_cp03

0xee4c,	// (0x0001dd71) popup_call6_1st_window_g1

0xee54,	// (0x0001dd79) popup_call6_1st_window_g2

0xee5c,	// (0x0001dd81) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001ede6) popup_call6_1st_window_g

0xee64,	// (0x0001dd89) popup_call6_1st_window_t1

0xee73,	// (0x0001dd98) popup_call6_1st_window_t2

0xee81,	// (0x0001dda6) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001eded) popup_call6_1st_window_t

0x9f18,	// (0x00018e3d) bg_popup_call2_in_pane_cp04

0xee4c,	// (0x0001dd71) popup_call6_2nd_window_g1

0xee54,	// (0x0001dd79) popup_call6_2nd_window_g2

0xee5c,	// (0x0001dd81) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001ede6) popup_call6_2nd_window_g

0xee64,	// (0x0001dd89) popup_call6_2nd_window_t1

0x950b,	// (0x00018430) bg_button_pane_cp15

0xee8f,	// (0x0001ddb4) cell_call6_btn_pane_g1

0xee98,	// (0x0001ddbd) cell_call6_btn_pane_t1

0x8cc8,	// (0x00017bed) listscroll_wgtman_pane_ParamLimits

0x8cc8,	// (0x00017bed) listscroll_wgtman_pane

0x8ce9,	// (0x00017c0e) wgtman_btn_pane_ParamLimits

0x8ce9,	// (0x00017c0e) wgtman_btn_pane

0xa7e8,	// (0x0001970d) aid_scroll_copy1

0xeea7,	// (0x0001ddcc) list_wgtman_pane

0x8d2c,	// (0x00017c51) wgtman_btn_pane_g1_ParamLimits

0x8d2c,	// (0x00017c51) wgtman_btn_pane_g1

0x8d58,	// (0x00017c7d) wgtman_btn_pane_t1_ParamLimits

0x8d58,	// (0x00017c7d) wgtman_btn_pane_t1

0xeeb1,	// (0x0001ddd6) wgtman_btn_pane_t2_ParamLimits

0xeeb1,	// (0x0001ddd6) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001edf4) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001edf4) wgtman_btn_pane_t

0x8d95,	// (0x00017cba) listrow_wgtman_pane_ParamLimits

0x8d95,	// (0x00017cba) listrow_wgtman_pane

0x8da7,	// (0x00017ccc) listrow_wgtman_pane_g1

0x8db4,	// (0x00017cd9) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001edf9) listrow_wgtman_pane_g

0x8dd2,	// (0x00017cf7) listrow_wgtman_pane_t1

0x8dea,	// (0x00017d0f) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001edfe) listrow_wgtman_pane_t

0x8e10,	// (0x00017d35) wait_bar_pane_cp09

0xeec8,	// (0x0001dded) main_calllock_btn_pane

0xeed2,	// (0x0001ddf7) main_calllock_pane_g1

0x950b,	// (0x00018430) bg_button_pane_cp17

0xee8f,	// (0x0001ddb4) main_calllock_btn_pane_g1

0xeede,	// (0x0001de03) main_calllock_btn_pane_t1

0x950b,	// (0x00018430) main_dialer3_pane

0x950b,	// (0x00018430) main_fmrd2_pane

0xc417,	// (0x0001b33c) main_fs_bigclock_unlock_btn_pane_g1

0x8e2a,	// (0x00017d4f) main_fs_bigclock_unlock_btn_pane_t1

0x8e38,	// (0x00017d5d) area_fmrd2_info_pane_ParamLimits

0x8e38,	// (0x00017d5d) area_fmrd2_info_pane

0x8e49,	// (0x00017d6e) area_fmrd2_visual_pane_ParamLimits

0x8e49,	// (0x00017d6e) area_fmrd2_visual_pane

0x8e57,	// (0x00017d7c) fmrd2_indi_pane_ParamLimits

0x8e57,	// (0x00017d7c) fmrd2_indi_pane

0x8e64,	// (0x00017d89) area_fmrd2_visual_pane_g1

0x8e6c,	// (0x00017d91) area_fmrd2_visual_pane_t1

0x8e7c,	// (0x00017da1) area_fmrd2_visual_pane_t2

0x8e8c,	// (0x00017db1) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001ee08) area_fmrd2_visual_pane_t

0x8e9c,	// (0x00017dc1) area_fmrd2_info_pane_g1

0x8ea4,	// (0x00017dc9) area_fmrd2_info_pane_t1

0x8eb4,	// (0x00017dd9) area_fmrd2_info_pane_t2

0x8ec4,	// (0x00017de9) area_fmrd2_info_pane_t3

0x8ed4,	// (0x00017df9) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001ee0f) area_fmrd2_info_pane_t

0x8ee2,	// (0x00017e07) fmrd2_indi_pane_t1

0x8ef2,	// (0x00017e17) fmrd2_indi_pane_t2

0x8f02,	// (0x00017e27) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001ee18) fmrd2_indi_pane_t

0xe165,	// (0x0001d08a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe165,	// (0x0001d08a) list_single_fs_bigclock_indicator_pane_g5

0xe216,	// (0x0001d13b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe216,	// (0x0001d13b) list_single_fs_bigclock_indicator_pane_t5

0x85a8,	// (0x000174cd) aid_cell_bcale_month_pane_ParamLimits

0x85a8,	// (0x000174cd) aid_cell_bcale_month_pane

0x85c6,	// (0x000174eb) bcale_month_pane_ParamLimits

0x85c6,	// (0x000174eb) bcale_month_pane

0x85ea,	// (0x0001750f) bcale_preview_pane_ParamLimits

0x85ea,	// (0x0001750f) bcale_preview_pane

0xecac,	// (0x0001dbd1) list_single_fs_bigclock_pane_t1_ParamLimits

0xeccb,	// (0x0001dbf0) list_single_fs_bigclock_pane_t2_ParamLimits

0xeccb,	// (0x0001dbf0) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001ed9a) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001ed9a) list_single_fs_bigclock_pane_t

0x8e22,	// (0x00017d47) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001ee03) main_fs_bigclock_unlock_btn_pane_g

0x8f12,	// (0x00017e37) aid_dia3_key_size_ParamLimits

0x8f12,	// (0x00017e37) aid_dia3_key_size

0x8f21,	// (0x00017e46) aid_dia3_listrow_size_ParamLimits

0x8f21,	// (0x00017e46) aid_dia3_listrow_size

0x8f36,	// (0x00017e5b) dia3_keypad_fun_pane_ParamLimits

0x8f36,	// (0x00017e5b) dia3_keypad_fun_pane

0x8f52,	// (0x00017e77) dia3_keypad_num_pane_ParamLimits

0x8f52,	// (0x00017e77) dia3_keypad_num_pane

0x8f6d,	// (0x00017e92) dia3_listscroll_pane_ParamLimits

0x8f6d,	// (0x00017e92) dia3_listscroll_pane

0x8f80,	// (0x00017ea5) dia3_numentry_pane_ParamLimits

0x8f80,	// (0x00017ea5) dia3_numentry_pane

0xeeed,	// (0x0001de12) dia3_list_pane

0xeef8,	// (0x0001de1d) scroll_pane_cp12

0x950b,	// (0x00018430) bg_dia3_numentry_pane

0x8f94,	// (0x00017eb9) dia3_numentry_pane_t1

0x8fa3,	// (0x00017ec8) cell_dia3_key_num_pane

0x8fab,	// (0x00017ed0) cell_dia3_key0_fun_pane_ParamLimits

0x8fab,	// (0x00017ed0) cell_dia3_key0_fun_pane

0x8fbf,	// (0x00017ee4) cell_dia3_key1_fun_pane_ParamLimits

0x8fbf,	// (0x00017ee4) cell_dia3_key1_fun_pane

0x8fd7,	// (0x00017efc) dia3_listrow_pane

0xdeb8,	// (0x0001cddd) bg_dia3_numentry_pane_g1

0x950b,	// (0x00018430) bg_button_pane_cp21

0xef03,	// (0x0001de28) cell_dia3_key_num_pane_t1

0xef11,	// (0x0001de36) cell_dia3_key_num_pane_t2

0xef20,	// (0x0001de45) cell_dia3_key_num_pane_t3

0xef2f,	// (0x0001de54) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001ee1f) cell_dia3_key_num_pane_t

0x950b,	// (0x00018430) bg_button_pane_cp19

0x8fe9,	// (0x00017f0e) cell_dia3_key0_fun_pane_g1

0x950b,	// (0x00018430) bg_button_pane_cp20

0x8ff1,	// (0x00017f16) cell_dia3_key1_fun_pane_g1

0x8ff9,	// (0x00017f1e) area_left_week_number_pane

0x9005,	// (0x00017f2a) area_top_day_name_pane

0x9018,	// (0x00017f3d) frame_month_view_pane

0xef3e,	// (0x0001de63) grid_month_view_pane

0x902b,	// (0x00017f50) cell_top_day_name_pane_ParamLimits

0x902b,	// (0x00017f50) cell_top_day_name_pane

0x9058,	// (0x00017f7d) cell_area_left_week_number_pane_ParamLimits

0x9058,	// (0x00017f7d) cell_area_left_week_number_pane

0x906c,	// (0x00017f91) cell_month_view_pane_ParamLimits

0x906c,	// (0x00017f91) cell_month_view_pane

0xef4c,	// (0x0001de71) frm_month_g1

0x9099,	// (0x00017fbe) frm_month_g2

0x90ac,	// (0x00017fd1) frm_month_g3

0x90bf,	// (0x00017fe4) frm_month_g4

0x90d2,	// (0x00017ff7) frm_month_g5

0x90e5,	// (0x0001800a) frm_month_g6

0x90f8,	// (0x0001801d) frm_month_g7

0xef59,	// (0x0001de7e) frm_month_g8

0x910b,	// (0x00018030) frm_month_g9

0x911b,	// (0x00018040) frm_month_g10

0x912b,	// (0x00018050) frm_month_g11

0x913b,	// (0x00018060) frm_month_g12

0x914d,	// (0x00018072) frm_month_g13

0x915f,	// (0x00018084) frm_month_g14

0x9173,	// (0x00018098) frm_month_g15

0x9187,	// (0x000180ac) frm_month_g16

0x000f,

0xff03,	// (0x0001ee28) frm_month_g

0xef66,	// (0x0001de8b) cell_top_day_name_pane_t1

0x919b,	// (0x000180c0) cell_area_left_week_number_pane_g1

0x91a7,	// (0x000180cc) cell_area_left_week_number_pane_t1

0xc67a,	// (0x0001b59f) cell_month_view_pane_g1

0x91ba,	// (0x000180df) cell_month_view_pane_t1

0x950b,	// (0x00018430) main_fps_pane

0xe43c,	// (0x0001d361) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe43c,	// (0x0001d361) cmail_ddmenu_btn02_pane_cp1

0xe458,	// (0x0001d37d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe458,	// (0x0001d37d) cmail_ddmenu_btn02_pane_cp2

0x88a1,	// (0x000177c6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x88a1,	// (0x000177c6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001ed4d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001ed4d) cmail_ddmenu_btn02_pane_g

0x88bf,	// (0x000177e4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88bf,	// (0x000177e4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001ed52) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001ed52) cmail_ddmenu_btn02_pane_t

0x91cd,	// (0x000180f2) fps_text_pane_ParamLimits

0x91cd,	// (0x000180f2) fps_text_pane

0x91e4,	// (0x00018109) main_fps_pane_g1_ParamLimits

0x91e4,	// (0x00018109) main_fps_pane_g1

0x91fe,	// (0x00018123) wait_bar_pane_cp010_ParamLimits

0x91fe,	// (0x00018123) wait_bar_pane_cp010

0x920f,	// (0x00018134) fps_text_pane_t1_ParamLimits

0x920f,	// (0x00018134) fps_text_pane_t1

0xeb30,	// (0x0001da55) cam4_image_uncrop_pane_g1

0xeb39,	// (0x0001da5e) cam4_image_uncrop_pane_g2

0x5a16,	// (0x0001493b) cam4_image_uncrop_pane_g3

0x5a1f,	// (0x00014944) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0001e813) cam4_image_uncrop_pane_g

0x8fd7,	// (0x00017efc) dia3_listrow_pane_ParamLimits

0x950b,	// (0x00018430) main_phob2_pane

0x83de,	// (0x00017303) cell_tport_appsw_pane_cp02_ParamLimits

0x83de,	// (0x00017303) cell_tport_appsw_pane_cp02

0x83f2,	// (0x00017317) cell_tport_appsw_pane_cp03_ParamLimits

0x83f2,	// (0x00017317) cell_tport_appsw_pane_cp03

0x950b,	// (0x00018430) phob2_contact_card_pane

0x950b,	// (0x00018430) phob2_listscroll_pane

0xef79,	// (0x0001de9e) phob2_list_pane

0xef81,	// (0x0001dea6) scroll_pane_cp034

0x9227,	// (0x0001814c) phob2_cc_data_pane_ParamLimits

0x9227,	// (0x0001814c) phob2_cc_data_pane

0x9246,	// (0x0001816b) phob2_cc_listscroll_pane_ParamLimits

0x9246,	// (0x0001816b) phob2_cc_listscroll_pane

0x8d95,	// (0x00017cba) list_double_large_graphic_phob2_pane_ParamLimits

0x8d95,	// (0x00017cba) list_double_large_graphic_phob2_pane

0x9264,	// (0x00018189) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9264,	// (0x00018189) list_double_large_graphic_phob2_pane_g1

0x927a,	// (0x0001819f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x927a,	// (0x0001819f) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001ee49) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001ee49) list_double_large_graphic_phob2_pane_g

0x9286,	// (0x000181ab) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9286,	// (0x000181ab) list_double_large_graphic_phob2_pane_t1

0x929b,	// (0x000181c0) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x929b,	// (0x000181c0) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001ee4e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001ee4e) list_double_large_graphic_phob2_pane_t

0x950b,	// (0x00018430) list_highlight_pane_cp024

0x92ad,	// (0x000181d2) phob2_cc_button_pane

0x92b5,	// (0x000181da) phob2_cc_data_pane_g1_ParamLimits

0x92b5,	// (0x000181da) phob2_cc_data_pane_g1

0x92ca,	// (0x000181ef) phob2_cc_data_pane_g2_ParamLimits

0x92ca,	// (0x000181ef) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001ee53) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001ee53) phob2_cc_data_pane_g

0x92da,	// (0x000181ff) phob2_cc_data_pane_t1_ParamLimits

0x92da,	// (0x000181ff) phob2_cc_data_pane_t1

0x92f2,	// (0x00018217) phob2_cc_data_pane_t2_ParamLimits

0x92f2,	// (0x00018217) phob2_cc_data_pane_t2

0x930a,	// (0x0001822f) phob2_cc_data_pane_t3_ParamLimits

0x930a,	// (0x0001822f) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001ee58) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001ee58) phob2_cc_data_pane_t

0xef89,	// (0x0001deae) phob2_cc_list_pane_ParamLimits

0xef89,	// (0x0001deae) phob2_cc_list_pane

0xd5bd,	// (0x0001c4e2) scroll_pane_cp035_ParamLimits

0xd5bd,	// (0x0001c4e2) scroll_pane_cp035

0x957b,	// (0x000184a0) bg_button_pane_cp033

0xef95,	// (0x0001deba) phob2_cc_button_pane_g1

0xefa1,	// (0x0001dec6) phob2_cc_button_pane_t1

0xefb6,	// (0x0001dedb) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001ee5f) phob2_cc_button_pane_t

0x9322,	// (0x00018247) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9322,	// (0x00018247) list_double_large_graphic_phob2_cc_pane

0x9352,	// (0x00018277) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9352,	// (0x00018277) list_double_large_graphic_phob2_cc_pane_g1

0x935e,	// (0x00018283) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x935e,	// (0x00018283) list_double_large_graphic_phob2_cc_pane_g2

0x936a,	// (0x0001828f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x936a,	// (0x0001828f) list_double_large_graphic_phob2_cc_pane_g3

0x9376,	// (0x0001829b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9376,	// (0x0001829b) list_double_large_graphic_phob2_cc_pane_g4

0x9382,	// (0x000182a7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9382,	// (0x000182a7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001ee64) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001ee64) list_double_large_graphic_phob2_cc_pane_g

0x938e,	// (0x000182b3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x938e,	// (0x000182b3) list_double_large_graphic_phob2_cc_pane_t1

0x93b7,	// (0x000182dc) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x93b7,	// (0x000182dc) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001ee6f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001ee6f) list_double_large_graphic_phob2_cc_pane_t

0xefc8,	// (0x0001deed) list_highlight_pane_cp025_ParamLimits

0xefc8,	// (0x0001deed) list_highlight_pane_cp025

0x957b,	// (0x000184a0) bg_button_pane_cp033_ParamLimits

0xef95,	// (0x0001deba) phob2_cc_button_pane_g1_ParamLimits

0xefa1,	// (0x0001dec6) phob2_cc_button_pane_t1_ParamLimits

0xefb6,	// (0x0001dedb) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001ee5f) phob2_cc_button_pane_t_ParamLimits

0x03f9,	// (0x0000f31e) popup_wgtman_window

0xd35b,	// (0x0001c280) scroll_pane_cp038

0x8d0e,	// (0x00017c33) wgtman_btn_pane_cp_01_ParamLimits

0x8d0e,	// (0x00017c33) wgtman_btn_pane_cp_01

0xefd6,	// (0x0001defb) wgtman_content_pane

0xefdf,	// (0x0001df04) wgtman_heading_pane

0x950b,	// (0x00018430) bg_heading_pane_cp02

0xefe8,	// (0x0001df0d) wgtman_heading_pane_g1

0xeff0,	// (0x0001df15) wgtman_heading_pane_t1

0xeffe,	// (0x0001df23) scroll_pane_cp036

0xf006,	// (0x0001df2b) wgtman_list_pane

0xf00e,	// (0x0001df33) wgtman_list_pane_t1_ParamLimits

0xf00e,	// (0x0001df33) wgtman_list_pane_t1

0xd0a8,	// (0x0001bfcd) cam4_grid_pane

0x67be,	// (0x000156e3) bg_button_pane_cp015_ParamLimits

0x67d0,	// (0x000156f5) bg_button_pane_cp016_ParamLimits

0x67e3,	// (0x00015708) bg_button_pane_cp017_ParamLimits

0x683b,	// (0x00015760) popup_vitu2_query_window_g3_ParamLimits

0x683b,	// (0x00015760) popup_vitu2_query_window_g3

0x68f8,	// (0x0001581d) popup_vitu2_query_window_t6_ParamLimits

0x68f8,	// (0x0001581d) popup_vitu2_query_window_t6

0x6923,	// (0x00015848) popup_vitu2_query_window_t7_ParamLimits

0x6923,	// (0x00015848) popup_vitu2_query_window_t7

0xeb30,	// (0x0001da55) cam4_grid_pane_g1

0xeb39,	// (0x0001da5e) cam4_grid_pane_g2

0xf028,	// (0x0001df4d) cam4_grid_pane_g3

0xf031,	// (0x0001df56) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001ee74) cam4_grid_pane_g

0x1351,	// (0x00010276) aid_placing_vt_slider_lsc_ParamLimits

0x165c,	// (0x00010581) vidtel_button_pane_ParamLimits

0x165c,	// (0x00010581) vidtel_button_pane

0x950b,	// (0x00018430) bg_button_pane_cp034

0xf03c,	// (0x0001df61) vidtel_button_pane_g1

0xf044,	// (0x0001df69) vidtel_button_pane_t1

0xd4c8,	// (0x0001c3ed) aid_size_vtel_slider_touch

0xd5bd,	// (0x0001c4e2) scroll_pane_cp039

0x76fb,	// (0x00016620) ncim_query_button_pane_cp01_ParamLimits

0x771a,	// (0x0001663f) ncimui_query_pane_g1_ParamLimits

0x957b,	// (0x000184a0) input_focus_pane_cp012_ParamLimits

0xdef6,	// (0x0001ce1b) ncim_query_entry_pane_t1_ParamLimits

0xd5bd,	// (0x0001c4e2) scroll_pane_cp039_ParamLimits

0xa8cc,	// (0x000197f1) navi_pane_bcale_mc_g1

0xa8d4,	// (0x000197f9) navi_pane_bcale_mc_t1

0xe4a1,	// (0x0001d3c6) main_sp_fs_email_pane_g1

0xe4ad,	// (0x0001d3d2) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0001ec0a) main_sp_fs_email_pane_g

0xe925,	// (0x0001d84a) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe925,	// (0x0001d84a) list_single_cale_mrui_row_pane_g3

0x88df,	// (0x00017804) list_single_recal_day_pane_g5_event_pane

0xeb04,	// (0x0001da29) list_single_recal_day_pane_g7

0xf05a,	// (0x0001df7f) list_recal_day_event_pane_cp01

0xf063,	// (0x0001df88) list_recal_vselct_arw_lo_pane_cp01

0xf06b,	// (0x0001df90) list_recal_vselct_arw_up_pane_cp01

0xf073,	// (0x0001df98) list_recal_vselct_pane_cp01

0xd514,	// (0x0001c439) list_recal_day_event_pane_cp01_g1

0xf07d,	// (0x0001dfa2) list_recal_day_event_pane_cp01_t1

0xeb0c,	// (0x0001da31) list_single_recal_day_pane_t1_ParamLimits

0xeb1e,	// (0x0001da43) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001ed62) list_single_recal_day_pane_t_ParamLimits

0x9bf7,	// (0x00018b1c) bg_notes_pane_ParamLimits

0x9ca2,	// (0x00018bc7) list_notes_pane_ParamLimits

0x073f,	// (0x0000f664) scroll_pane_cp06_ParamLimits

0x9cde,	// (0x00018c03) main_notes_pane_ParamLimits

0x950b,	// (0x00018430) main_welc_pane

0x93e0,	// (0x00018305) main_welc_body_pane_ParamLimits

0x93e0,	// (0x00018305) main_welc_body_pane

0x93fe,	// (0x00018323) main_welc_opti_pane_ParamLimits

0x93fe,	// (0x00018323) main_welc_opti_pane

0x9443,	// (0x00018368) main_welc_pane_t1_ParamLimits

0x9443,	// (0x00018368) main_welc_pane_t1

0x9461,	// (0x00018386) main_welc_body_row_pane_ParamLimits

0x9461,	// (0x00018386) main_welc_body_row_pane

0xd311,	// (0x0001c236) main_welc_opti_row_pane_ParamLimits

0xd311,	// (0x0001c236) main_welc_opti_row_pane

0xf08b,	// (0x0001dfb0) main_welc_opti_row_pane_g1

0x9475,	// (0x0001839a) main_welc_opti_row_pane_t1

0xf093,	// (0x0001dfb8) main_welc_body_row_pane_t1

0xed8c,	// (0x0001dcb1) popup_notif_wgt_heading_pane

0xeda6,	// (0x0001dccb) aid_size_list_notif_wgt_del_ParamLimits

0xedb3,	// (0x0001dcd8) list_notif_wgt_row_pane_g1_ParamLimits

0xedbf,	// (0x0001dce4) list_notif_wgt_row_pane_g2_ParamLimits

0xedce,	// (0x0001dcf3) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001edc9) list_notif_wgt_row_pane_g_ParamLimits

0xeddb,	// (0x0001dd00) list_notif_wgt_row_pane_t1_ParamLimits

0xedf1,	// (0x0001dd16) list_notif_wgt_row_pane_t2_ParamLimits

0xee03,	// (0x0001dd28) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001edd0) list_notif_wgt_row_pane_t_ParamLimits

0x8da7,	// (0x00017ccc) listrow_wgtman_pane_g1_ParamLimits

0x8db4,	// (0x00017cd9) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001edf9) listrow_wgtman_pane_g_ParamLimits

0x8dd2,	// (0x00017cf7) listrow_wgtman_pane_t1_ParamLimits

0x8dea,	// (0x00017d0f) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001edfe) listrow_wgtman_pane_t_ParamLimits

0x8e10,	// (0x00017d35) wait_bar_pane_cp09_ParamLimits

0x950b,	// (0x00018430) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0001dfc7) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0001dfcf) popup_notif_wgt_heading_pane_t1

0x950b,	// (0x00018430) main_vids_pane

0x950b,	// (0x00018430) vids_listscroll_pane

0x9484,	// (0x000183a9) scroll_pane_cp040

0x950b,	// (0x00018430) vids_list_pane

0x948f,	// (0x000183b4) vids_list_double_pane_ParamLimits

0x948f,	// (0x000183b4) vids_list_double_pane

0x94a0,	// (0x000183c5) vids_list_double_pane_g1

0x94a9,	// (0x000183ce) vids_list_double_pane_t1

0x94b9,	// (0x000183de) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001ee82) vids_list_double_pane_t

0x957b,	// (0x000184a0) main_ncimui_pane_ParamLimits

0x7531,	// (0x00016456) main_ncimui_pane_g1_ParamLimits

0x753d,	// (0x00016462) main_ncimui_pane_g2_ParamLimits

0x753d,	// (0x00016462) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0001eb0f) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0001eb0f) main_ncimui_pane_g

0x9419,	// (0x0001833e) main_welc_pane_g1_ParamLimits

0x9419,	// (0x0001833e) main_welc_pane_g1

0x942e,	// (0x00018353) main_welc_pane_g2_ParamLimits

0x942e,	// (0x00018353) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001ee7d) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001ee7d) main_welc_pane_g

0x9bf7,	// (0x00018b1c) listscroll_mce_pane_ParamLimits

0xaa21,	// (0x00019946) wait_bar_pane_cp10

0xbef0,	// (0x0001ae15) main_cale_day_pane_ParamLimits

0xbef0,	// (0x0001ae15) main_cale_week_pane_ParamLimits

0x9bf7,	// (0x00018b1c) main_messa_pane_ParamLimits

0x4cc3,	// (0x00013be8) main_clock2_btn_pane_ParamLimits

0x4cc3,	// (0x00013be8) main_clock2_btn_pane

0xc82e,	// (0x0001b753) main_clock2_btn_pane_cp01_ParamLimits

0xc82e,	// (0x0001b753) main_clock2_btn_pane_cp01

0xe8b1,	// (0x0001d7d6) list_cale_mrui_pane_ParamLimits

0xee39,	// (0x0001dd5e) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001edd7) main_cf0_pane_g

0x8ff9,	// (0x00017f1e) area_left_week_number_pane_ParamLimits

0x9005,	// (0x00017f2a) area_top_day_name_pane_ParamLimits

0x9018,	// (0x00017f3d) frame_month_view_pane_ParamLimits

0xef3e,	// (0x0001de63) grid_month_view_pane_ParamLimits

0xef4c,	// (0x0001de71) frm_month_g1_ParamLimits

0x9099,	// (0x00017fbe) frm_month_g2_ParamLimits

0x90ac,	// (0x00017fd1) frm_month_g3_ParamLimits

0x90bf,	// (0x00017fe4) frm_month_g4_ParamLimits

0x90d2,	// (0x00017ff7) frm_month_g5_ParamLimits

0x90e5,	// (0x0001800a) frm_month_g6_ParamLimits

0x90f8,	// (0x0001801d) frm_month_g7_ParamLimits

0xef59,	// (0x0001de7e) frm_month_g8_ParamLimits

0x910b,	// (0x00018030) frm_month_g9_ParamLimits

0x911b,	// (0x00018040) frm_month_g10_ParamLimits

0x912b,	// (0x00018050) frm_month_g11_ParamLimits

0x913b,	// (0x00018060) frm_month_g12_ParamLimits

0x914d,	// (0x00018072) frm_month_g13_ParamLimits

0x915f,	// (0x00018084) frm_month_g14_ParamLimits

0x9173,	// (0x00018098) frm_month_g15_ParamLimits

0x9187,	// (0x000180ac) frm_month_g16_ParamLimits

0xff03,	// (0x0001ee28) frm_month_g_ParamLimits

0xef66,	// (0x0001de8b) cell_top_day_name_pane_t1_ParamLimits

0x919b,	// (0x000180c0) cell_area_left_week_number_pane_g1_ParamLimits

0x91a7,	// (0x000180cc) cell_area_left_week_number_pane_t1_ParamLimits

0xc67a,	// (0x0001b59f) cell_month_view_pane_g1_ParamLimits

0x91ba,	// (0x000180df) cell_month_view_pane_t1_ParamLimits

0x9bef,	// (0x00018b14) main_clock2_btn_pane_g1

0xf0b8,	// (0x0001dfdd) main_clock2_btn_pane_t1

0x957b,	// (0x000184a0) listscroll_cmail_pane_ParamLimits

0xe4a1,	// (0x0001d3c6) main_sp_fs_email_pane_g1_ParamLimits

0xe4ad,	// (0x0001d3d2) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0001ec0a) main_sp_fs_email_pane_g_ParamLimits

0xea74,	// (0x0001d999) list_recal_day_pane_ParamLimits

0xea85,	// (0x0001d9aa) mian_recal_day_pane_t1

0x8043,	// (0x00016f68) list_single_dyc_row_text_pane_t4_ParamLimits

0x8043,	// (0x00016f68) list_single_dyc_row_text_pane_t4

0x808c,	// (0x00016fb1) list_single_dyc_row_text_pane_t5_ParamLimits

0x808c,	// (0x00016fb1) list_single_dyc_row_text_pane_t5

0xe553,	// (0x0001d478) list_single_dyc_row_text_pane_t6_ParamLimits

0xe553,	// (0x0001d478) list_single_dyc_row_text_pane_t6

0x22da,	// (0x000111ff) aid_mgn_list_cale_time_pane

0x957b,	// (0x000184a0) main_gallery2_pane_ParamLimits

0xc844,	// (0x0001b769) main_clock2_pane_cp01_t1

0xc854,	// (0x0001b779) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x0001e6e5) main_clock2_pane_cp01_t

0x0af9,	// (0x0000fa1e) cale_week_scroll_pane_g16_ParamLimits

0x0af9,	// (0x0000fa1e) cale_week_scroll_pane_g16

0x9f18,	// (0x00018e3d) vorec_slider_pane

0xf044,	// (0x0001df69) vidtel_button_pane_t1_ParamLimits

0x8945,	// (0x0001786a) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8945,	// (0x0001786a) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8956,	// (0x0001787b) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8956,	// (0x0001787b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe60,	// (0x0001ed85) main_fs_bigclock_clock_pane_g_ParamLimits

0x8969,	// (0x0001788e) main_fs_bigclock_clock_pane_t1_ParamLimits

0x897f,	// (0x000178a4) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe69,	// (0x0001ed8e) main_fs_bigclock_clock_pane_t_ParamLimits

0x44ba,	// (0x000133df) main_mup3_lyrics_pane_ParamLimits

0x44ba,	// (0x000133df) main_mup3_lyrics_pane

0x94ef,	// (0x00018414) main_mup3_lyrics_pane_t1_ParamLimits

0x94ef,	// (0x00018414) main_mup3_lyrics_pane_t1

0xcd3d,	// (0x0001bc62) aid_main_mp4_pane_t1_area

0xcd47,	// (0x0001bc6c) aid_main_mp4_pane_t2_area

0xcdf3,	// (0x0001bd18) main_mp4_pane_g7_ParamLimits

0xcdf3,	// (0x0001bd18) main_mp4_pane_g7

0xcdff,	// (0x0001bd24) main_mp4_pane_g8_ParamLimits

0xcdff,	// (0x0001bd24) main_mp4_pane_g8

0x57e9,	// (0x0001470e) aid_call6_pane_g1_size

0x933c,	// (0x00018261) list_double_large_graphic_phob2_other_pane_ParamLimits

0x933c,	// (0x00018261) list_double_large_graphic_phob2_other_pane

0xa30b,	// (0x00019230) list_double_large_graphic_phob2_other_pane_g1

0x950b,	// (0x00018430) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
