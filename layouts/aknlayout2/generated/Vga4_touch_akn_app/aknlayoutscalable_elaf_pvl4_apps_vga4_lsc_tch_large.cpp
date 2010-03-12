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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00078368 };

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
0x11d9,	// (0x00079541) Screen

0x11e5,	// (0x0007954d) application_window

0x1221,	// (0x00079589) area_bottom_pane_ParamLimits

0x1221,	// (0x00079589) area_bottom_pane

0x125a,	// (0x000795c2) area_top_pane_ParamLimits

0x125a,	// (0x000795c2) area_top_pane

0xab39,	// (0x00082ea1) call_video_uplink_pane_ParamLimits

0xab39,	// (0x00082ea1) call_video_uplink_pane

0x12cf,	// (0x00079637) main_pane_ParamLimits

0x12cf,	// (0x00079637) main_pane

0x5a3d,	// (0x0007dda5) context_pane

0x5a50,	// (0x0007ddb8) navi_pane

0x5a80,	// (0x0007dde8) popup_cale_events_window_ParamLimits

0x5a80,	// (0x0007dde8) popup_cale_events_window

0x5a98,	// (0x0007de00) popup_mup_playback_window

0x5aa0,	// (0x0007de08) signal_pane

0xb2fd,	// (0x00083665) main_browser_pane

0x34e7,	// (0x0007b84f) main_burst_pane

0x5731,	// (0x0007da99) main_calc_pane

0x34e7,	// (0x0007b84f) main_cale_day_pane

0xb2fd,	// (0x00083665) main_cale_month_pane

0x34e7,	// (0x0007b84f) main_cale_week_pane

0x34e7,	// (0x0007b84f) main_call_pane

0xafad,	// (0x00083315) main_call_poc_pane

0x34e7,	// (0x0007b84f) main_camera_pane

0x34e7,	// (0x0007b84f) main_chi_dic_pane

0x302a,	// (0x0007b392) main_clock_pane

0xafad,	// (0x00083315) main_fmradio_pane

0x34e7,	// (0x0007b84f) main_graph_messa_pane

0xafad,	// (0x00083315) main_help_pane

0xb2fd,	// (0x00083665) main_im_pane

0xb208,	// (0x00083570) main_image_pane_ParamLimits

0xb208,	// (0x00083570) main_image_pane

0xafad,	// (0x00083315) main_location2_pane

0x34e7,	// (0x0007b84f) main_location_pane

0xafad,	// (0x00083315) main_messa_pane

0xafad,	// (0x00083315) main_mp2_pane

0x34e7,	// (0x0007b84f) main_mp_pane

0xafad,	// (0x00083315) main_msg_pane

0xafad,	// (0x00083315) main_mup_eq_pane

0xafad,	// (0x00083315) main_mup_pane

0xb2fd,	// (0x00083665) main_notes_pane

0xafad,	// (0x00083315) main_pec_pane

0xafad,	// (0x00083315) main_phob_pane

0xafad,	// (0x00083315) main_pinb_pane

0xafad,	// (0x00083315) main_postcard_pane

0xafad,	// (0x00083315) main_qdial_pane

0x34e7,	// (0x0007b84f) main_skin_pane

0xafad,	// (0x00083315) main_smil2_pane

0x34e7,	// (0x0007b84f) main_smil_pane

0x34e7,	// (0x0007b84f) main_video_pane

0x34e7,	// (0x0007b84f) main_video_tele_pane

0xb208,	// (0x00083570) main_viewer_pane_ParamLimits

0xb208,	// (0x00083570) main_viewer_pane

0x34e7,	// (0x0007b84f) main_vorec_pane

0x5795,	// (0x0007dafd) popup_blid_sat_info_window_ParamLimits

0x5795,	// (0x0007dafd) popup_blid_sat_info_window

0x57f9,	// (0x0007db61) popup_dyc_status_message_window_ParamLimits

0x57f9,	// (0x0007db61) popup_dyc_status_message_window

0x5813,	// (0x0007db7b) popup_grid_large_graphic_window_ParamLimits

0x5813,	// (0x0007db7b) popup_grid_large_graphic_window

0x58d5,	// (0x0007dc3d) popup_loc_request_window_ParamLimits

0x58d5,	// (0x0007dc3d) popup_loc_request_window

0x5a11,	// (0x0007dd79) popup_wml_address_window_ParamLimits

0x5a11,	// (0x0007dd79) popup_wml_address_window

0x5536,	// (0x0007d89e) call_muted_g1

0x4253,	// (0x0007c5bb) popup_call_audio_conf_window_ParamLimits

0x4253,	// (0x0007c5bb) popup_call_audio_conf_window

0x5546,	// (0x0007d8ae) popup_call_audio_first_window_ParamLimits

0x5546,	// (0x0007d8ae) popup_call_audio_first_window

0x55bc,	// (0x0007d924) popup_call_audio_in_window_ParamLimits

0x55bc,	// (0x0007d924) popup_call_audio_in_window

0x55f8,	// (0x0007d960) popup_call_audio_out_window_ParamLimits

0x55f8,	// (0x0007d960) popup_call_audio_out_window

0x5632,	// (0x0007d99a) popup_call_audio_second_window_ParamLimits

0x5632,	// (0x0007d99a) popup_call_audio_second_window

0x5688,	// (0x0007d9f0) popup_call_audio_wait_window_ParamLimits

0x5688,	// (0x0007d9f0) popup_call_audio_wait_window

0x56bd,	// (0x0007da25) popup_number_entry_window_ParamLimits

0x56bd,	// (0x0007da25) popup_number_entry_window

0xab65,	// (0x00082ecd) bg_popup_call_pane_cp05_ParamLimits

0xab65,	// (0x00082ecd) bg_popup_call_pane_cp05

0xab85,	// (0x00082eed) popup_number_entry_window_t1

0xab98,	// (0x00082f00) popup_number_entry_window_t2

0xabaa,	// (0x00082f12) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x00087440) popup_number_entry_window_t

0xabf1,	// (0x00082f59) text_title_cp2

0xac04,	// (0x00082f6c) bg_popup_call_pane_cp_ParamLimits

0xac04,	// (0x00082f6c) bg_popup_call_pane_cp

0xac12,	// (0x00082f7a) call_thumbnail_pane

0xac1a,	// (0x00082f82) popup_call_audio_in_window_g1_ParamLimits

0xac1a,	// (0x00082f82) popup_call_audio_in_window_g1

0xac26,	// (0x00082f8e) popup_call_audio_in_window_g2_ParamLimits

0xac26,	// (0x00082f8e) popup_call_audio_in_window_g2

0xac32,	// (0x00082f9a) popup_call_audio_in_window_g3_ParamLimits

0xac32,	// (0x00082f9a) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x00087449) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x00087449) popup_call_audio_in_window_g

0xac3e,	// (0x00082fa6) popup_call_audio_in_window_t1_ParamLimits

0xac3e,	// (0x00082fa6) popup_call_audio_in_window_t1

0xac5a,	// (0x00082fc2) popup_call_audio_in_window_t2_ParamLimits

0xac5a,	// (0x00082fc2) popup_call_audio_in_window_t2

0xac76,	// (0x00082fde) popup_call_audio_in_window_t3_ParamLimits

0xac76,	// (0x00082fde) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x00087450) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x00087450) popup_call_audio_in_window_t

0xac04,	// (0x00082f6c) bg_popup_call_pane_cp01_ParamLimits

0xac04,	// (0x00082f6c) bg_popup_call_pane_cp01

0xac12,	// (0x00082f7a) call_thumbnail_pane_cp02

0xac89,	// (0x00082ff1) call_type_pane_cp022

0xac91,	// (0x00082ff9) popup_call_audio_out_window_g1_ParamLimits

0xac91,	// (0x00082ff9) popup_call_audio_out_window_g1

0xaca3,	// (0x0008300b) popup_call_audio_out_window_g2_ParamLimits

0xaca3,	// (0x0008300b) popup_call_audio_out_window_g2

0xacaf,	// (0x00083017) popup_call_audio_out_window_g3_ParamLimits

0xacaf,	// (0x00083017) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x00087457) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x00087457) popup_call_audio_out_window_g

0xacc1,	// (0x00083029) popup_call_audio_out_window_t1_ParamLimits

0xacc1,	// (0x00083029) popup_call_audio_out_window_t1

0xacd9,	// (0x00083041) popup_call_audio_out_window_t2_ParamLimits

0xacd9,	// (0x00083041) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x0008745e) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x0008745e) popup_call_audio_out_window_t

0xacee,	// (0x00083056) bg_popup_call_pane_ParamLimits

0xacee,	// (0x00083056) bg_popup_call_pane

0x1456,	// (0x000797be) call_thumbnail_pane_cp_ParamLimits

0x1456,	// (0x000797be) call_thumbnail_pane_cp

0xad72,	// (0x000830da) call_type_pane_cp01_ParamLimits

0xad72,	// (0x000830da) call_type_pane_cp01

0xadb6,	// (0x0008311e) popup_call_audio_first_window_g1_ParamLimits

0xadb6,	// (0x0008311e) popup_call_audio_first_window_g1

0xae02,	// (0x0008316a) popup_call_audio_first_window_g2_ParamLimits

0xae02,	// (0x0008316a) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x00087463) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x00087463) popup_call_audio_first_window_g

0xae46,	// (0x000831ae) popup_call_audio_first_window_t1_ParamLimits

0xae46,	// (0x000831ae) popup_call_audio_first_window_t1

0xaef2,	// (0x0008325a) popup_call_audio_first_window_t4_ParamLimits

0xaef2,	// (0x0008325a) popup_call_audio_first_window_t4

0xaf7e,	// (0x000832e6) popup_call_audio_first_window_t5_ParamLimits

0xaf7e,	// (0x000832e6) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x00087468) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x00087468) popup_call_audio_first_window_t

0xafad,	// (0x00083315) bg_popup_call_pane_cp02

0xafb7,	// (0x0008331f) call_type_pane_cp023

0xafbf,	// (0x00083327) popup_call_audio_wait_window_g1

0xafc7,	// (0x0008332f) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x0008746f) popup_call_audio_wait_window_g

0xafcf,	// (0x00083337) popup_call_audio_wait_window_t3

0xafdd,	// (0x00083345) bg_popup_call_pane_cp03_ParamLimits

0xafdd,	// (0x00083345) bg_popup_call_pane_cp03

0xb03d,	// (0x000833a5) call_thumbnail_pane_cp011_ParamLimits

0xb03d,	// (0x000833a5) call_thumbnail_pane_cp011

0xb049,	// (0x000833b1) call_type_pane_cp034_ParamLimits

0xb049,	// (0x000833b1) call_type_pane_cp034

0xb085,	// (0x000833ed) popup_call_audio_second_window_g1_ParamLimits

0xb085,	// (0x000833ed) popup_call_audio_second_window_g1

0xb0c1,	// (0x00083429) popup_call_audio_second_window_g2_ParamLimits

0xb0c1,	// (0x00083429) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x00087474) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x00087474) popup_call_audio_second_window_g

0xb0fd,	// (0x00083465) popup_call_audio_second_window_t1_ParamLimits

0xb0fd,	// (0x00083465) popup_call_audio_second_window_t1

0xb17e,	// (0x000834e6) popup_call_audio_second_window_t2_ParamLimits

0xb17e,	// (0x000834e6) popup_call_audio_second_window_t2

0xb1b4,	// (0x0008351c) popup_call_audio_second_window_t3_ParamLimits

0xb1b4,	// (0x0008351c) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x00087479) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x00087479) popup_call_audio_second_window_t

0xafad,	// (0x00083315) bg_popup_call_pane_cp04

0xb1ea,	// (0x00083552) list_conf_pane

0xb1f2,	// (0x0008355a) popup_call_audio_conf_window_t1

0xb200,	// (0x00083568) call_thumbnail_pane_g1

0xb208,	// (0x00083570) bg_pinb_pane_ParamLimits

0xb208,	// (0x00083570) bg_pinb_pane

0xb216,	// (0x0008357e) find_pinb_pane

0xb21f,	// (0x00083587) listscroll_pinb_pane_ParamLimits

0xb21f,	// (0x00083587) listscroll_pinb_pane

0xb22e,	// (0x00083596) pinb_bg_pane_g1

0x147a,	// (0x000797e2) pinb_bg_pane_g2

0x1486,	// (0x000797ee) pinb_bg_pane_g3

0x1492,	// (0x000797fa) pinb_bg_pane_g4

0x149e,	// (0x00079806) pinb_bg_pane_g5

0x14aa,	// (0x00079812) pinb_bg_pane_g6

0x14b5,	// (0x0007981d) pinb_bg_pane_g7

0x14c0,	// (0x00079828) pinb_bg_pane_g8

0x14cb,	// (0x00079833) pinb_bg_pane_g9

0x14d5,	// (0x0007983d) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x00087480) pinb_bg_pane_g

0x14f2,	// (0x0007985a) grid_pinb_pane

0x14fd,	// (0x00079865) list_pinb_pane

0x1508,	// (0x00079870) scroll_pane_cp01_ParamLimits

0x1508,	// (0x00079870) scroll_pane_cp01

0xb238,	// (0x000835a0) find_pinb_pane_g1_ParamLimits

0xb238,	// (0x000835a0) find_pinb_pane_g1

0xb250,	// (0x000835b8) find_pinb_pane_t1

0xb262,	// (0x000835ca) find_pinb_pane_t2

0x0001,

0xf132,	// (0x0008749a) find_pinb_pane_t

0xb277,	// (0x000835df) input_focus_pane_cp01_ParamLimits

0xb277,	// (0x000835df) input_focus_pane_cp01

0x151a,	// (0x00079882) cell_pinb_pane_ParamLimits

0x151a,	// (0x00079882) cell_pinb_pane

0x153c,	// (0x000798a4) cell_pinb_pane_g1_ParamLimits

0x153c,	// (0x000798a4) cell_pinb_pane_g1

0x1550,	// (0x000798b8) cell_pinb_pane_g2_ParamLimits

0x1550,	// (0x000798b8) cell_pinb_pane_g2

0xb283,	// (0x000835eb) cell_pinb_pane_g3_ParamLimits

0xb283,	// (0x000835eb) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x0008749f) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x0008749f) cell_pinb_pane_g

0xafad,	// (0x00083315) grid_highlight_pane_cp01

0x155c,	// (0x000798c4) list_pinb_item_pane_ParamLimits

0x155c,	// (0x000798c4) list_pinb_item_pane

0xafad,	// (0x00083315) list_highlight_pane_cp02

0x156f,	// (0x000798d7) list_pinb_item_pane_g1_ParamLimits

0x156f,	// (0x000798d7) list_pinb_item_pane_g1

0x157c,	// (0x000798e4) list_pinb_item_pane_g2_ParamLimits

0x157c,	// (0x000798e4) list_pinb_item_pane_g2

0x1588,	// (0x000798f0) list_pinb_item_pane_g3_ParamLimits

0x1588,	// (0x000798f0) list_pinb_item_pane_g3

0x1599,	// (0x00079901) list_pinb_item_pane_g4_ParamLimits

0x1599,	// (0x00079901) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x000874a6) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x000874a6) list_pinb_item_pane_g

0x15a5,	// (0x0007990d) list_pinb_item_pane_t1_ParamLimits

0x15a5,	// (0x0007990d) list_pinb_item_pane_t1

0x15da,	// (0x00079942) calc_display_pane

0x1602,	// (0x0007996a) calc_paper_pane

0x1625,	// (0x0007998d) grid_calc_pane

0xafad,	// (0x00083315) bg_list_pane_cp01

0x1653,	// (0x000799bb) clock_g1

0x165b,	// (0x000799c3) clock_g2

0x0001,

0xf147,	// (0x000874af) clock_g

0x1663,	// (0x000799cb) clock_t1_ParamLimits

0x1663,	// (0x000799cb) clock_t1

0x1678,	// (0x000799e0) clock_t2_ParamLimits

0x1678,	// (0x000799e0) clock_t2

0x168a,	// (0x000799f2) clock_t3_ParamLimits

0x168a,	// (0x000799f2) clock_t3

0x169c,	// (0x00079a04) clock_t4_ParamLimits

0x169c,	// (0x00079a04) clock_t4

0x16ae,	// (0x00079a16) clock_t5_ParamLimits

0x16ae,	// (0x00079a16) clock_t5

0x16c3,	// (0x00079a2b) clock_t6_ParamLimits

0x16c3,	// (0x00079a2b) clock_t6

0x16d5,	// (0x00079a3d) clock_t7_ParamLimits

0x16d5,	// (0x00079a3d) clock_t7

0x16e7,	// (0x00079a4f) clock_t8_ParamLimits

0x16e7,	// (0x00079a4f) clock_t8

0x16fb,	// (0x00079a63) clock_t9_ParamLimits

0x16fb,	// (0x00079a63) clock_t9

0x0008,

0xf14c,	// (0x000874b4) clock_t_ParamLimits

0xf14c,	// (0x000874b4) clock_t

0xb297,	// (0x000835ff) popup_clock_analogue_window_cp02

0xb297,	// (0x000835ff) popup_clock_digital_window_cp01

0xb29f,	// (0x00083607) listscroll_help_pane

0xafad,	// (0x00083315) phob_pre_status_pane

0xb2a9,	// (0x00083611) grid_qdial_pane

0xafad,	// (0x00083315) listscroll_mce_pane

0xb2b3,	// (0x0008361b) bg_notes_pane

0xb2c1,	// (0x00083629) list_notes_pane

0x1711,	// (0x00079a79) scroll_pane_cp06

0xb2cf,	// (0x00083637) bg_calc_paper_pane

0xb2e3,	// (0x0008364b) list_calc_pane

0xb2fd,	// (0x00083665) bg_calc_display_pane

0x1725,	// (0x00079a8d) calc_display_pane_t1

0x1737,	// (0x00079a9f) calc_display_pane_t2

0xb309,	// (0x00083671) calc_display_pane_t3

0x0002,

0xf15f,	// (0x000874c7) calc_display_pane_t

0x1749,	// (0x00079ab1) cell_calc_pane_ParamLimits

0x1749,	// (0x00079ab1) cell_calc_pane

0xb31b,	// (0x00083683) bg_calc_paper_pane_g1

0xb327,	// (0x0008368f) bg_calc_paper_pane_g2

0xb333,	// (0x0008369b) bg_calc_paper_pane_g3

0xb33f,	// (0x000836a7) bg_calc_paper_pane_g4

0xb34b,	// (0x000836b3) bg_calc_paper_pane_g5

0x1788,	// (0x00079af0) bg_calc_paper_pane_g6

0x179b,	// (0x00079b03) bg_calc_paper_pane_g7

0x17ae,	// (0x00079b16) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x000874ce) bg_calc_paper_pane_g

0x17bf,	// (0x00079b27) calc_bg_paper_pane_g9

0x17d0,	// (0x00079b38) list_calc_item_pane_ParamLimits

0x17d0,	// (0x00079b38) list_calc_item_pane

0xb357,	// (0x000836bf) list_calc_item_pane_g1

0xb364,	// (0x000836cc) list_calc_item_pane_t1_ParamLimits

0xb364,	// (0x000836cc) list_calc_item_pane_t1

0x17e5,	// (0x00079b4d) list_calc_item_pane_t2_ParamLimits

0x17e5,	// (0x00079b4d) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x000874df) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x000874df) list_calc_item_pane_t

0xb376,	// (0x000836de) cell_calc_pane_g1

0xb380,	// (0x000836e8) grid_highlight_pane_cp02

0xb3a2,	// (0x0008370a) bg_calc_display_pane_g1

0xb3ab,	// (0x00083713) bg_calc_display_pane_g2

0xb3b5,	// (0x0008371d) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x000874e9) bg_calc_display_pane_g

0x1817,	// (0x00079b7f) cell_qdial_pane_ParamLimits

0x1817,	// (0x00079b7f) cell_qdial_pane

0x182d,	// (0x00079b95) cell_qdial_pane_g1_ParamLimits

0x182d,	// (0x00079b95) cell_qdial_pane_g1

0x1843,	// (0x00079bab) cell_qdial_pane_g2_ParamLimits

0x1843,	// (0x00079bab) cell_qdial_pane_g2

0xb3be,	// (0x00083726) cell_qdial_pane_g3_ParamLimits

0xb3be,	// (0x00083726) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x000874f0) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x000874f0) cell_qdial_pane_g

0x1869,	// (0x00079bd1) cell_qdial_pane_t1_ParamLimits

0x1869,	// (0x00079bd1) cell_qdial_pane_t1

0x1881,	// (0x00079be9) cell_qdial_pane_t2_ParamLimits

0x1881,	// (0x00079be9) cell_qdial_pane_t2

0x1894,	// (0x00079bfc) cell_qdial_pane_t3_ParamLimits

0x1894,	// (0x00079bfc) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x000874f9) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x000874f9) cell_qdial_pane_t

0xafad,	// (0x00083315) grid_highlight_pane_cp04

0xb3ca,	// (0x00083732) thumbnail_qdial_pane_ParamLimits

0xb3ca,	// (0x00083732) thumbnail_qdial_pane

0xb426,	// (0x0008378e) list_help_pane

0xb42f,	// (0x00083797) scroll_pane_cp02

0x18a7,	// (0x00079c0f) help_list_pane_t1_ParamLimits

0x18a7,	// (0x00079c0f) help_list_pane_t1

0xb438,	// (0x000837a0) bg_notes_pane_g2

0xb440,	// (0x000837a8) bg_notes_pane_g3

0xb448,	// (0x000837b0) notes_bg_pane_g1

0xb450,	// (0x000837b8) notes_bg_pane_g4

0xb458,	// (0x000837c0) notes_bg_pane_g5

0xb460,	// (0x000837c8) notes_bg_pane_g6

0xb468,	// (0x000837d0) notes_bg_pane_g7

0xb470,	// (0x000837d8) notes_bg_pane_g8

0xb478,	// (0x000837e0) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x00087517) notes_bg_pane_g

0x18cb,	// (0x00079c33) list_notes_text_pane_ParamLimits

0x18cb,	// (0x00079c33) list_notes_text_pane

0xb480,	// (0x000837e8) list_notes_text_pane_g1

0x06db,	// (0x00078a43) list_notes_text_pane_t1

0xb2fd,	// (0x00083665) listscroll_cale_week_pane

0x18ff,	// (0x00079c67) bg_cale_heading_pane

0xb49a,	// (0x00083802) bg_cale_pane_cp01

0x191b,	// (0x00079c83) cale_week_corner_pane

0x1931,	// (0x00079c99) cale_week_day_heading_pane

0x194d,	// (0x00079cb5) cale_week_scroll_pane_g1

0x1966,	// (0x00079cce) cale_week_scroll_pane_g2

0x1977,	// (0x00079cdf) cale_week_scroll_pane_g3

0x1988,	// (0x00079cf0) cale_week_scroll_pane_g4

0x1999,	// (0x00079d01) cale_week_scroll_pane_g5

0x19aa,	// (0x00079d12) cale_week_scroll_pane_g6

0x19bb,	// (0x00079d23) cale_week_scroll_pane_g7

0x19cc,	// (0x00079d34) cale_week_scroll_pane_g8

0x19dd,	// (0x00079d45) cale_week_scroll_pane_g9

0x19ee,	// (0x00079d56) cale_week_scroll_pane_g10

0x19ff,	// (0x00079d67) cale_week_scroll_pane_g11

0x1a10,	// (0x00079d78) cale_week_scroll_pane_g12

0x1a21,	// (0x00079d89) cale_week_scroll_pane_g13

0x1a3a,	// (0x00079da2) cale_week_scroll_pane_g14

0x1a53,	// (0x00079dbb) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x00087526) cale_week_scroll_pane_g

0x1a6c,	// (0x00079dd4) cale_week_time_pane

0x1a7d,	// (0x00079de5) grid_cale_week_pane

0x1a98,	// (0x00079e00) scroll_pane_cp08

0x1ab0,	// (0x00079e18) cell_cale_week_pane_ParamLimits

0x1ab0,	// (0x00079e18) cell_cale_week_pane

0x1af8,	// (0x00079e60) cale_week_day_heading_pane_t1

0x1b0c,	// (0x00079e74) cale_week_day_heading_pane_t2

0x1b20,	// (0x00079e88) cale_week_day_heading_pane_t3

0x1b34,	// (0x00079e9c) cale_week_day_heading_pane_t4

0x1b48,	// (0x00079eb0) cale_week_day_heading_pane_t5

0x1b5c,	// (0x00079ec4) cale_week_day_heading_pane_t6

0x1b70,	// (0x00079ed8) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x00087545) cale_week_day_heading_pane_t

0xb4c5,	// (0x0008382d) bg_cale_side_pane

0x1b84,	// (0x00079eec) cale_week_time_pane_t1

0x1b9c,	// (0x00079f04) cale_week_time_pane_t2

0x1bb4,	// (0x00079f1c) cale_week_time_pane_t3

0x1bcc,	// (0x00079f34) cale_week_time_pane_t4

0x1be4,	// (0x00079f4c) cale_week_time_pane_t5

0x1bfc,	// (0x00079f64) cale_week_time_pane_t6

0x1c14,	// (0x00079f7c) cale_week_time_pane_t7

0x1c30,	// (0x00079f98) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x00087554) cale_week_time_pane_t

0x1c50,	// (0x00079fb8) cell_cale_week_pane_g2

0x1c61,	// (0x00079fc9) cell_cale_week_pane_g3_ParamLimits

0x1c61,	// (0x00079fc9) cell_cale_week_pane_g3

0xb4d3,	// (0x0008383b) grid_highlight_pane_cp07

0xb4db,	// (0x00083843) listscroll_gms_pane

0xb4e5,	// (0x0008384d) grid_gms_pane

0xb4ee,	// (0x00083856) listscroll_gms_pane_g1

0xb4f6,	// (0x0008385e) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x00087565) listscroll_gms_pane_g

0x1c79,	// (0x00079fe1) scroll_pane_cp010

0x1c84,	// (0x00079fec) cell_gms_pane_ParamLimits

0x1c84,	// (0x00079fec) cell_gms_pane

0x1c9e,	// (0x0007a006) cell_gms_pane_g1

0xb4fe,	// (0x00083866) cell_gms_pane_g2

0xb506,	// (0x0008386e) cell_gms_pane_g3

0xb50f,	// (0x00083877) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0008756a) cell_gms_pane_g

0xb518,	// (0x00083880) grid_highlight_pane_cp09

0x54be,	// (0x0007d826) phob_pre_status_pane_g1

0x54c6,	// (0x0007d82e) phob_pre_status_pane_g2

0x54ce,	// (0x0007d836) phob_pre_status_pane_g3

0x54d6,	// (0x0007d83e) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x00087959) phob_pre_status_pane_g

0x54e6,	// (0x0007d84e) phob_pre_status_pane_t1

0x54f6,	// (0x0007d85e) phob_pre_status_pane_t2

0x5506,	// (0x0007d86e) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x00087964) phob_pre_status_pane_t

0xafad,	// (0x00083315) bg_list_pane_cp05

0x1cae,	// (0x0007a016) grid_vorec_pane

0x1cba,	// (0x0007a022) vorec_t1

0x1cc8,	// (0x0007a030) vorec_t2

0x1cd6,	// (0x0007a03e) vorec_t3

0x1ce4,	// (0x0007a04c) vorec_t4

0x1cf2,	// (0x0007a05a) vorec_t5

0xb520,	// (0x00083888) vorec_t6

0x0006,

0xf20b,	// (0x00087573) vorec_t

0x1d0e,	// (0x0007a076) wait_bar_pane_cp01

0x1d16,	// (0x0007a07e) cell_vorec_pane_ParamLimits

0x1d16,	// (0x0007a07e) cell_vorec_pane

0xb52e,	// (0x00083896) cell_vorec_pane_g1

0xafad,	// (0x00083315) grid_highlight_pane_cp05

0x1d41,	// (0x0007a0a9) cams_zoom_pane

0x1d50,	// (0x0007a0b8) image_vga_pane

0x1d6a,	// (0x0007a0d2) main_camera_pane_g1

0x1d7c,	// (0x0007a0e4) main_camera_pane_g2

0x1d8c,	// (0x0007a0f4) main_camera_pane_g3

0x1da0,	// (0x0007a108) main_camera_pane_g4

0x1db4,	// (0x0007a11c) main_camera_pane_g5

0x1dc8,	// (0x0007a130) main_camera_pane_g6

0x1ddc,	// (0x0007a144) main_camera_pane_g7

0x0007,

0xf21a,	// (0x00087582) main_camera_pane_g

0x1df0,	// (0x0007a158) main_camera_pane_t1

0x1e06,	// (0x0007a16e) main_camera_pane_t2

0x0001,

0xf22b,	// (0x00087593) main_camera_pane_t

0x1e44,	// (0x0007a1ac) cams_zoom_pane_cp_ParamLimits

0x1e44,	// (0x0007a1ac) cams_zoom_pane_cp

0x1e6c,	// (0x0007a1d4) image_cif_pane_ParamLimits

0x1e6c,	// (0x0007a1d4) image_cif_pane

0x1ea7,	// (0x0007a20f) image_subqcif_pane

0x1eb1,	// (0x0007a219) main_video_pane_g1_ParamLimits

0x1eb1,	// (0x0007a219) main_video_pane_g1

0x1ed5,	// (0x0007a23d) main_video_pane_g2_ParamLimits

0x1ed5,	// (0x0007a23d) main_video_pane_g2

0x1f0b,	// (0x0007a273) main_video_pane_g3_ParamLimits

0x1f0b,	// (0x0007a273) main_video_pane_g3

0x1f39,	// (0x0007a2a1) main_video_pane_g4_ParamLimits

0x1f39,	// (0x0007a2a1) main_video_pane_g4

0x1f67,	// (0x0007a2cf) main_video_pane_g5_ParamLimits

0x1f67,	// (0x0007a2cf) main_video_pane_g5

0xb544,	// (0x000838ac) main_video_pane_g6_ParamLimits

0xb544,	// (0x000838ac) main_video_pane_g6

0x0006,

0xf230,	// (0x00087598) main_video_pane_g_ParamLimits

0xf230,	// (0x00087598) main_video_pane_g

0x1f90,	// (0x0007a2f8) main_video_pane_t1_ParamLimits

0x1f90,	// (0x0007a2f8) main_video_pane_t1

0xb55e,	// (0x000838c6) cams_zoom_pane_g1

0xb567,	// (0x000838cf) cams_zoom_pane_g2

0xb570,	// (0x000838d8) cams_zoom_pane_g3

0xb579,	// (0x000838e1) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x000875a7) cams_zoom_pane_g

0x1fed,	// (0x0007a355) grid_cams_pane

0x2007,	// (0x0007a36f) linegrid_cams_pane

0x2019,	// (0x0007a381) cell_cams_pane_ParamLimits

0x2019,	// (0x0007a381) cell_cams_pane

0xb582,	// (0x000838ea) cams_burst_image_pane

0xb58a,	// (0x000838f2) cell_cams_pane_g1

0xafad,	// (0x00083315) grid_highlight_pane_cp03

0xb376,	// (0x000836de) mp_bg_pane_g1

0xafad,	// (0x00083315) bg_list_pane_cp03

0x53f1,	// (0x0007d759) bg_mp_pane

0x53f9,	// (0x0007d761) grid_mp_pane

0x5401,	// (0x0007d769) media_player_g1

0x540b,	// (0x0007d773) media_player_t1

0x5419,	// (0x0007d781) media_player_t2

0x5427,	// (0x0007d78f) media_player_t3

0x5435,	// (0x0007d79d) media_player_t4

0x5443,	// (0x0007d7ab) media_player_t5

0x5451,	// (0x0007d7b9) media_player_t6

0x545f,	// (0x0007d7c7) media_player_t7

0x0006,

0xf5db,	// (0x00087943) media_player_t

0x546d,	// (0x0007d7d5) wait_bar_pane_cp02

0xf5c0,	// (0x00087928) main_usb_pane_t

0x54b5,	// (0x0007d81d) cell_mp_pane

0xb376,	// (0x000836de) cell_mp_pane_g1

0xafad,	// (0x00083315) grid_highlight_pane_cp06

0xb650,	// (0x000839b8) grid_skin_colour_pane

0xb658,	// (0x000839c0) list_highlight_pane_cp03

0x203b,	// (0x0007a3a3) skin_g1

0xb660,	// (0x000839c8) skin_t1

0xb66f,	// (0x000839d7) skin_t2

0x0001,

0xf274,	// (0x000875dc) skin_t

0x2045,	// (0x0007a3ad) cell_skin_colour_pane_ParamLimits

0x2045,	// (0x0007a3ad) cell_skin_colour_pane

0xb67d,	// (0x000839e5) cell_skin_colour_pane_g1

0x20b8,	// (0x0007a420) call_video_g1_ParamLimits

0x20b8,	// (0x0007a420) call_video_g1

0x20d4,	// (0x0007a43c) call_video_g2_ParamLimits

0x20d4,	// (0x0007a43c) call_video_g2

0x0001,

0xf279,	// (0x000875e1) call_video_g_ParamLimits

0xf279,	// (0x000875e1) call_video_g

0x2119,	// (0x0007a481) call_video_uplink_pane_cp1_ParamLimits

0x2119,	// (0x0007a481) call_video_uplink_pane_cp1

0xb68f,	// (0x000839f7) call_video_uplink_pane_cp2

0x21ba,	// (0x0007a522) video_down_crop_pane_ParamLimits

0x21ba,	// (0x0007a522) video_down_crop_pane

0x22a3,	// (0x0007a60b) video_down_pane_ParamLimits

0x22a3,	// (0x0007a60b) video_down_pane

0xb697,	// (0x000839ff) video_down_subqcif_pane_ParamLimits

0xb697,	// (0x000839ff) video_down_subqcif_pane

0xb6b1,	// (0x00083a19) video_down_subqcif_pane_cp_ParamLimits

0xb6b1,	// (0x00083a19) video_down_subqcif_pane_cp

0xb6d9,	// (0x00083a41) im_reading_pane_ParamLimits

0xb6d9,	// (0x00083a41) im_reading_pane

0x23ac,	// (0x0007a714) im_writing_pane_ParamLimits

0x23ac,	// (0x0007a714) im_writing_pane

0x23ca,	// (0x0007a732) im_reading_pane_t1

0xb6f3,	// (0x00083a5b) list_im_pane

0xb704,	// (0x00083a6c) scroll_pane_cp07

0x2409,	// (0x0007a771) im_writing_pane_t1_ParamLimits

0x2409,	// (0x0007a771) im_writing_pane_t1

0xb71d,	// (0x00083a85) im_writing_pane_t2_ParamLimits

0xb71d,	// (0x00083a85) im_writing_pane_t2

0x0001,

0xf283,	// (0x000875eb) im_writing_pane_t_ParamLimits

0xf283,	// (0x000875eb) im_writing_pane_t

0xafad,	// (0x00083315) input_focus_pane_cp04

0xafad,	// (0x00083315) input_focus_pane_cp05

0x241e,	// (0x0007a786) list_im_single_pane_ParamLimits

0x241e,	// (0x0007a786) list_im_single_pane

0x2437,	// (0x0007a79f) list_single_im_pane_t1

0x5475,	// (0x0007d7dd) blid_accuracy_pane

0x547d,	// (0x0007d7e5) blid_compass_pane

0x5487,	// (0x0007d7ef) main_location_t1

0x5497,	// (0x0007d7ff) main_location_t2

0x54a7,	// (0x0007d80f) main_location_t3

0x0002,

0xf5ea,	// (0x00087952) main_location_t

0xafad,	// (0x00083315) aid_levels_location

0xb376,	// (0x000836de) blid_accuracy_pane_g1

0xb376,	// (0x000836de) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x0008764d) blid_accuracy_pane_g

0xb765,	// (0x00083acd) wml_content_pane

0xb7a3,	// (0x00083b0b) wml_button_pane_ParamLimits

0xb7a3,	// (0x00083b0b) wml_button_pane

0x2446,	// (0x0007a7ae) wml_list_single_large_pane_ParamLimits

0x2446,	// (0x0007a7ae) wml_list_single_large_pane

0x245f,	// (0x0007a7c7) wml_list_single_medium_pane_ParamLimits

0x245f,	// (0x0007a7c7) wml_list_single_medium_pane

0x2479,	// (0x0007a7e1) wml_list_single_small_pane_ParamLimits

0x2479,	// (0x0007a7e1) wml_list_single_small_pane

0xb7b7,	// (0x00083b1f) wml_selection_box_pane_ParamLimits

0xb7b7,	// (0x00083b1f) wml_selection_box_pane

0xb7ca,	// (0x00083b32) wml_list_single_pane_t1

0xb7d9,	// (0x00083b41) wml_list_single_medium_pane_t1

0xb7e8,	// (0x00083b50) wml_list_single_large_pane_t1

0xb7f7,	// (0x00083b5f) input_focus_pane_cp02_ParamLimits

0xb7f7,	// (0x00083b5f) input_focus_pane_cp02

0xb80a,	// (0x00083b72) wml_selection_box_pane_g1

0xb813,	// (0x00083b7b) wml_selection_box_pane_t1_ParamLimits

0xb813,	// (0x00083b7b) wml_selection_box_pane_t1

0xb208,	// (0x00083570) bg_wml_button_pane_ParamLimits

0xb208,	// (0x00083570) bg_wml_button_pane

0xb82b,	// (0x00083b93) wml_button_pane_g1

0xb833,	// (0x00083b9b) wml_button_pane_t1

0xb82b,	// (0x00083b93) wml_button_bg_pane_g1

0xb843,	// (0x00083bab) wml_button_bg_pane_g2

0xb84b,	// (0x00083bb3) wml_button_bg_pane_g3

0xb853,	// (0x00083bbb) wml_button_bg_pane_g4

0xb85b,	// (0x00083bc3) wml_button_bg_pane_g5

0xb863,	// (0x00083bcb) wml_button_bg_pane_g6

0xb86b,	// (0x00083bd3) wml_button_bg_pane_g7

0xb873,	// (0x00083bdb) wml_button_bg_pane_g8

0xb87b,	// (0x00083be3) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x000875f0) wml_button_bg_pane_g

0x2498,	// (0x0007a800) bg_list_pane_cp02

0xb883,	// (0x00083beb) mce_header_pane_ParamLimits

0xb883,	// (0x00083beb) mce_header_pane

0xb899,	// (0x00083c01) mce_icon_pane

0xb899,	// (0x00083c01) mce_image_pane

0xb8a2,	// (0x00083c0a) mce_text_pane_ParamLimits

0xb8a2,	// (0x00083c0a) mce_text_pane

0x24a2,	// (0x0007a80a) scroll_pane_cp03

0xb79b,	// (0x00083b03) scroll_pane_cp04

0xb8b5,	// (0x00083c1d) scroll_pane_cp05_ParamLimits

0xb8b5,	// (0x00083c1d) scroll_pane_cp05

0x24ac,	// (0x0007a814) mce_header_field_pane_ParamLimits

0x24ac,	// (0x0007a814) mce_header_field_pane

0x24c5,	// (0x0007a82d) mce_header_field_pane_2_ParamLimits

0x24c5,	// (0x0007a82d) mce_header_field_pane_2

0x24db,	// (0x0007a843) mce_header_field_pane_3

0x24e3,	// (0x0007a84b) list_single_mce_message_pane_ParamLimits

0x24e3,	// (0x0007a84b) list_single_mce_message_pane

0x24ff,	// (0x0007a867) list_single_mce_smart_pane_ParamLimits

0x24ff,	// (0x0007a867) list_single_mce_smart_pane

0xb8c1,	// (0x00083c29) input_focus_pane_cp03

0xb8ca,	// (0x00083c32) list_header_data_pane

0x2526,	// (0x0007a88e) mce_header_field_pane_t1

0x2536,	// (0x0007a89e) list_single_mce_header_pane_ParamLimits

0x2536,	// (0x0007a89e) list_single_mce_header_pane

0xb8d2,	// (0x00083c3a) list_single_mce_header_pane_t1

0xb8e1,	// (0x00083c49) list_single_mce_message_pane_g1

0xb8e9,	// (0x00083c51) list_single_mce_message_pane_t1

0x2568,	// (0x0007a8d0) bg_cale_heading_pane_cp01_ParamLimits

0x2568,	// (0x0007a8d0) bg_cale_heading_pane_cp01

0xb8f7,	// (0x00083c5f) bg_cale_pane_cp02_ParamLimits

0xb8f7,	// (0x00083c5f) bg_cale_pane_cp02

0x259b,	// (0x0007a903) cale_month_corner_pane

0x25b1,	// (0x0007a919) cale_month_day_heading_pane_ParamLimits

0x25b1,	// (0x0007a919) cale_month_day_heading_pane

0x25e4,	// (0x0007a94c) cale_month_pane_g1_ParamLimits

0x25e4,	// (0x0007a94c) cale_month_pane_g1

0x2610,	// (0x0007a978) cale_month_pane_g2_ParamLimits

0x2610,	// (0x0007a978) cale_month_pane_g2

0x2631,	// (0x0007a999) cale_month_pane_g3_ParamLimits

0x2631,	// (0x0007a999) cale_month_pane_g3

0x266d,	// (0x0007a9d5) cale_month_pane_g4_ParamLimits

0x266d,	// (0x0007a9d5) cale_month_pane_g4

0x26a9,	// (0x0007aa11) cale_month_pane_g5_ParamLimits

0x26a9,	// (0x0007aa11) cale_month_pane_g5

0x26e5,	// (0x0007aa4d) cale_month_pane_g6_ParamLimits

0x26e5,	// (0x0007aa4d) cale_month_pane_g6

0x2721,	// (0x0007aa89) cale_month_pane_g7_ParamLimits

0x2721,	// (0x0007aa89) cale_month_pane_g7

0x275d,	// (0x0007aac5) cale_month_pane_g8_ParamLimits

0x275d,	// (0x0007aac5) cale_month_pane_g8

0x2799,	// (0x0007ab01) cale_month_pane_g9_ParamLimits

0x2799,	// (0x0007ab01) cale_month_pane_g9

0x27cf,	// (0x0007ab37) cale_month_pane_g10_ParamLimits

0x27cf,	// (0x0007ab37) cale_month_pane_g10

0x27f9,	// (0x0007ab61) cale_month_pane_g11_ParamLimits

0x27f9,	// (0x0007ab61) cale_month_pane_g11

0x2823,	// (0x0007ab8b) cale_month_pane_g12_ParamLimits

0x2823,	// (0x0007ab8b) cale_month_pane_g12

0x2851,	// (0x0007abb9) cale_month_pane_g13_ParamLimits

0x2851,	// (0x0007abb9) cale_month_pane_g13

0x000c,

0xf29b,	// (0x00087603) cale_month_pane_g_ParamLimits

0xf29b,	// (0x00087603) cale_month_pane_g

0x287f,	// (0x0007abe7) cale_month_week_pane

0x2890,	// (0x0007abf8) grid_cale_month_pane_ParamLimits

0x2890,	// (0x0007abf8) grid_cale_month_pane

0x28be,	// (0x0007ac26) cale_month_day_heading_pane_t1

0x291c,	// (0x0007ac84) cale_month_day_heading_pane_t2

0x2981,	// (0x0007ace9) cale_month_day_heading_pane_t3

0x29e6,	// (0x0007ad4e) cale_month_day_heading_pane_t4

0x2a4b,	// (0x0007adb3) cale_month_day_heading_pane_t5

0x2ab0,	// (0x0007ae18) cale_month_day_heading_pane_t6

0x2b15,	// (0x0007ae7d) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x0008761e) cale_month_day_heading_pane_t

0xb4c5,	// (0x0008382d) bg_cale_side_pane_cp01

0x2b7a,	// (0x0007aee2) cale_month_week_pane_t1

0x2b91,	// (0x0007aef9) cale_month_week_pane_t2

0x2ba8,	// (0x0007af10) cale_month_week_pane_t3

0x2bbf,	// (0x0007af27) cale_month_week_pane_t4

0x2bd6,	// (0x0007af3e) cale_month_week_pane_t5

0x2bed,	// (0x0007af55) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x0008762d) cale_month_week_pane_t

0x2c0c,	// (0x0007af74) cell_cale_month_pane_ParamLimits

0x2c0c,	// (0x0007af74) cell_cale_month_pane

0xb956,	// (0x00083cbe) cell_cale_month_pane_g1

0x2cba,	// (0x0007b022) cell_cale_month_pane_t1_ParamLimits

0x2cba,	// (0x0007b022) cell_cale_month_pane_t1

0xb4d3,	// (0x0008383b) grid_highlight_pane_cp08

0xb376,	// (0x000836de) main_smil_g1

0x2cd6,	// (0x0007b03e) smil_status_pane

0xb962,	// (0x00083cca) smil_text_pane

0x527c,	// (0x0007d5e4) bg_popup_call3_rect_pane_g8

0x5284,	// (0x0007d5ec) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x000878e6) bg_popup_call3_rect_pane_g

0x5b94,	// (0x0007defc) smil_status_volume_pane_g1

0xb96c,	// (0x00083cd4) smil_status_pane_t1

0xbba8,	// (0x00083f10) volume_smil_pane

0xb983,	// (0x00083ceb) list_smil_text_pane

0x2ceb,	// (0x0007b053) scroll_pane_cp011

0x2cf6,	// (0x0007b05e) smil_text_list_pane_t1_ParamLimits

0x2cf6,	// (0x0007b05e) smil_text_list_pane_t1

0xb98d,	// (0x00083cf5) aid_volume_smil_ParamLimits

0xb98d,	// (0x00083cf5) aid_volume_smil

0xb376,	// (0x000836de) smil_volume_pane_g1

0xb376,	// (0x000836de) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x0008764d) smil_volume_pane_g

0xb2fd,	// (0x00083665) listscroll_cale_day_pane

0xe958,	// (0x00086cc0) bg_cale_pane

0xe970,	// (0x00086cd8) list_cale_pane

0xe981,	// (0x00086ce9) scroll_pane_cp09

0xe992,	// (0x00086cfa) cale_bg_pane_g1

0xe99a,	// (0x00086d02) cale_bg_pane_g2

0xe9a2,	// (0x00086d0a) cale_bg_pane_g3

0xe9aa,	// (0x00086d12) cale_bg_pane_g4

0xe9b2,	// (0x00086d1a) cale_bg_pane_g5

0xe9ba,	// (0x00086d22) cale_bg_pane_g6

0xe9c2,	// (0x00086d2a) cale_bg_pane_g7

0xe9ca,	// (0x00086d32) cale_bg_pane_g8

0xe9d2,	// (0x00086d3a) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x00087652) cale_bg_pane_g

0x2d4b,	// (0x0007b0b3) list_cale_time_pane_ParamLimits

0x2d4b,	// (0x0007b0b3) list_cale_time_pane

0x2d60,	// (0x0007b0c8) list_cale_time_pane_g1_ParamLimits

0x2d60,	// (0x0007b0c8) list_cale_time_pane_g1

0xe9da,	// (0x00086d42) list_cale_time_pane_g2_ParamLimits

0xe9da,	// (0x00086d42) list_cale_time_pane_g2

0x2d6c,	// (0x0007b0d4) list_cale_time_pane_g3_ParamLimits

0x2d6c,	// (0x0007b0d4) list_cale_time_pane_g3

0x2d7a,	// (0x0007b0e2) list_cale_time_pane_g4_ParamLimits

0x2d7a,	// (0x0007b0e2) list_cale_time_pane_g4

0x2d88,	// (0x0007b0f0) list_cale_time_pane_g5_ParamLimits

0x2d88,	// (0x0007b0f0) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x00087665) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x00087665) list_cale_time_pane_g

0x2d96,	// (0x0007b0fe) list_cale_time_pane_t1_ParamLimits

0x2d96,	// (0x0007b0fe) list_cale_time_pane_t1

0x2dbe,	// (0x0007b126) list_cale_time_pane_t2_ParamLimits

0x2dbe,	// (0x0007b126) list_cale_time_pane_t2

0x325d,	// (0x0007b5c5) aid_blid_cardinal_pane

0x32ab,	// (0x0007b613) compass_pane_t4

0x2de6,	// (0x0007b14e) list_cale_time_pane_t4_ParamLimits

0x2de6,	// (0x0007b14e) list_cale_time_pane_t4

0x32b9,	// (0x0007b621) compass_pane_t5

0x32c9,	// (0x0007b631) compass_pane_t6

0x32d7,	// (0x0007b63f) compass_pane_t7

0x336f,	// (0x0007b6d7) navi_pane_cc_t1

0x358e,	// (0x0007b8f6) aid_phob_thumbnail_center_pane

0x3c28,	// (0x0007bf90) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x00087672) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x00087672) list_cale_time_pane_t

0xac04,	// (0x00082f6c) bg_popup_window_pane_cp02_ParamLimits

0xac04,	// (0x00082f6c) bg_popup_window_pane_cp02

0xe9f4,	// (0x00086d5c) heading_pane_cp01_ParamLimits

0xe9f4,	// (0x00086d5c) heading_pane_cp01

0xea00,	// (0x00086d68) loc_req_pane_ParamLimits

0xea00,	// (0x00086d68) loc_req_pane

0xea10,	// (0x00086d78) loc_type_pane_ParamLimits

0xea10,	// (0x00086d78) loc_type_pane

0xea22,	// (0x00086d8a) loc_type_pane_t1_ParamLimits

0xea22,	// (0x00086d8a) loc_type_pane_t1

0xea34,	// (0x00086d9c) loc_type_pane_t2_ParamLimits

0xea34,	// (0x00086d9c) loc_type_pane_t2

0xea46,	// (0x00086dae) loc_type_pane_t3_ParamLimits

0xea46,	// (0x00086dae) loc_type_pane_t3

0x0002,

0xf311,	// (0x00087679) loc_type_pane_t_ParamLimits

0xf311,	// (0x00087679) loc_type_pane_t

0xea58,	// (0x00086dc0) list_loc_req_pane

0xea62,	// (0x00086dca) scroll_pane_cp012

0x2e0e,	// (0x0007b176) list_single_loc_request_popup_menu_pane_ParamLimits

0x2e0e,	// (0x0007b176) list_single_loc_request_popup_menu_pane

0xea6d,	// (0x00086dd5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xea6d,	// (0x00086dd5) list_single_loc_request_popup_menu_pane_g1

0xea79,	// (0x00086de1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xea79,	// (0x00086de1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00087680) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00087680) list_single_loc_request_popup_menu_pane_g

0xea85,	// (0x00086ded) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xea85,	// (0x00086ded) list_single_loc_request_popup_menu_pane_t1

0xb208,	// (0x00083570) bg_popup_window_pane_cp03_ParamLimits

0xb208,	// (0x00083570) bg_popup_window_pane_cp03

0xea9b,	// (0x00086e03) heading_loc_req_pane_ParamLimits

0xea9b,	// (0x00086e03) heading_loc_req_pane

0x2e1b,	// (0x0007b183) popup_dyc_status_message_window_g1_ParamLimits

0x2e1b,	// (0x0007b183) popup_dyc_status_message_window_g1

0x2e2f,	// (0x0007b197) popup_dyc_status_message_window_t1_ParamLimits

0x2e2f,	// (0x0007b197) popup_dyc_status_message_window_t1

0x2e44,	// (0x0007b1ac) popup_dyc_status_message_window_t2_ParamLimits

0x2e44,	// (0x0007b1ac) popup_dyc_status_message_window_t2

0x2e59,	// (0x0007b1c1) popup_dyc_status_message_window_t3_ParamLimits

0x2e59,	// (0x0007b1c1) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x00087685) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x00087685) popup_dyc_status_message_window_t

0xafad,	// (0x00083315) bg_heading_pane_cp01

0xeaa7,	// (0x00086e0f) heading_loc_req_pane_g1

0xeaaf,	// (0x00086e17) heading_loc_req_pane_g2

0xeab7,	// (0x00086e1f) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x0008768c) heading_loc_req_pane_g

0xeabf,	// (0x00086e27) heading_loc_req_pane_t1

0xeacf,	// (0x00086e37) bg_popup_sub_pane_cp01_ParamLimits

0xeacf,	// (0x00086e37) bg_popup_sub_pane_cp01

0xeadd,	// (0x00086e45) popup_cale_events_window_g1_ParamLimits

0xeadd,	// (0x00086e45) popup_cale_events_window_g1

0xeafd,	// (0x00086e65) popup_cale_events_window_g2_ParamLimits

0xeafd,	// (0x00086e65) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x000876c0) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x000876c0) popup_cale_events_window_g

0xeb1d,	// (0x00086e85) popup_cale_events_window_t1_ParamLimits

0xeb1d,	// (0x00086e85) popup_cale_events_window_t1

0xeb2f,	// (0x00086e97) popup_cale_events_window_t2_ParamLimits

0xeb2f,	// (0x00086e97) popup_cale_events_window_t2

0xeb6d,	// (0x00086ed5) popup_cale_events_window_t3_ParamLimits

0xeb6d,	// (0x00086ed5) popup_cale_events_window_t3

0xeba7,	// (0x00086f0f) popup_cale_events_window_t4_ParamLimits

0xeba7,	// (0x00086f0f) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x000876c5) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x000876c5) popup_cale_events_window_t

0x2e8d,	// (0x0007b1f5) call_type_pane

0x2e9d,	// (0x0007b205) popup_call_status_window_g1

0x2eb1,	// (0x0007b219) popup_call_status_window_g2

0x2ec5,	// (0x0007b22d) popup_call_status_window_g3

0x0002,

0xf366,	// (0x000876ce) popup_call_status_window_g

0xebdd,	// (0x00086f45) call_type_pane_g1

0xebe6,	// (0x00086f4e) call_type_pane_g2

0x0001,

0xf36d,	// (0x000876d5) call_type_pane_g

0xafad,	// (0x00083315) bg_popup_sub_pane_cp02

0xebef,	// (0x00086f57) listscroll_popup_wml_pane

0xebf7,	// (0x00086f5f) list_wml_pane

0xec01,	// (0x00086f69) scroll_pane_cp013

0xec0c,	// (0x00086f74) list_single_graphic_popup_wml_pane_ParamLimits

0xec0c,	// (0x00086f74) list_single_graphic_popup_wml_pane

0xb376,	// (0x000836de) list_single_graphic_popup_wml_pane_g1

0xec20,	// (0x00086f88) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x000876da) list_single_graphic_popup_wml_pane_g

0xec28,	// (0x00086f90) list_single_graphic_popup_wml_pane_t1

0xec3e,	// (0x00086fa6) aid_call_pane

0xb200,	// (0x00083568) popup_clock_analogue_window_g1

0xb200,	// (0x00083568) popup_clock_analogue_window_g2

0xba26,	// (0x00083d8e) popup_clock_analogue_window_g3

0xba26,	// (0x00083d8e) popup_clock_analogue_window_g4

0xb376,	// (0x000836de) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x000876df) popup_clock_analogue_window_g

0xba2e,	// (0x00083d96) popup_clock_analogue_window_t1

0xba3c,	// (0x00083da4) clock_digital_number_pane_ParamLimits

0xba3c,	// (0x00083da4) clock_digital_number_pane

0xba48,	// (0x00083db0) clock_digital_number_pane_cp02_ParamLimits

0xba48,	// (0x00083db0) clock_digital_number_pane_cp02

0xba54,	// (0x00083dbc) clock_digital_number_pane_cp03_ParamLimits

0xba54,	// (0x00083dbc) clock_digital_number_pane_cp03

0xba60,	// (0x00083dc8) clock_digital_number_pane_cp04_ParamLimits

0xba60,	// (0x00083dc8) clock_digital_number_pane_cp04

0xba6c,	// (0x00083dd4) clock_digital_separator_pane_ParamLimits

0xba6c,	// (0x00083dd4) clock_digital_separator_pane

0xba78,	// (0x00083de0) popup_clock_digital_window_t1

0xb376,	// (0x000836de) clock_digital_number_pane_g1

0xb376,	// (0x000836de) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x0008764d) clock_digital_number_pane_g

0xb376,	// (0x000836de) clock_digital_separator_pane_g1

0xb376,	// (0x000836de) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x0008764d) clock_digital_separator_pane_g

0xafad,	// (0x00083315) bg_popup_window_pane_cp04

0x2ed5,	// (0x0007b23d) heading_pane_cp03

0x2edd,	// (0x0007b245) listscroll_popup_gms_pane

0x2ee5,	// (0x0007b24d) grid_large_graphic_popup_pane

0x2eef,	// (0x0007b257) listscroll_popup_gms_pane_g1

0x2ef7,	// (0x0007b25f) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x000876ea) listscroll_popup_gms_pane_g

0xb79b,	// (0x00083b03) scroll_pane_cp014

0x2eff,	// (0x0007b267) cell_large_graphic_popup_pane_ParamLimits

0x2eff,	// (0x0007b267) cell_large_graphic_popup_pane

0x2f17,	// (0x0007b27f) cell_large_graphic_popup_pane_g1_ParamLimits

0x2f17,	// (0x0007b27f) cell_large_graphic_popup_pane_g1

0x2f23,	// (0x0007b28b) cell_large_graphic_popup_pane_g2_ParamLimits

0x2f23,	// (0x0007b28b) cell_large_graphic_popup_pane_g2

0x2f2f,	// (0x0007b297) cell_large_graphic_popup_pane_g3_ParamLimits

0x2f2f,	// (0x0007b297) cell_large_graphic_popup_pane_g3

0x2f3c,	// (0x0007b2a4) cell_large_graphic_popup_pane_g4_ParamLimits

0x2f3c,	// (0x0007b2a4) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x000876ef) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x000876ef) cell_large_graphic_popup_pane_g

0x2f4c,	// (0x0007b2b4) grid_highlight_pane_cp010

0xb376,	// (0x000836de) bg_popup_call_pane_g1

0x2f56,	// (0x0007b2be) list_single_graphic_popup_conf_pane_ParamLimits

0x2f56,	// (0x0007b2be) list_single_graphic_popup_conf_pane

0x2f68,	// (0x0007b2d0) list_highlight_pane_cp01

0x2f71,	// (0x0007b2d9) list_single_graphic_popup_conf_pane_g1

0x2f79,	// (0x0007b2e1) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x000876f8) list_single_graphic_popup_conf_pane_g

0x2f81,	// (0x0007b2e9) list_single_graphic_popup_conf_pane_t1

0x2f8f,	// (0x0007b2f7) linegrid_cams_pane_g1

0x2f98,	// (0x0007b300) linegrid_cams_pane_g2

0xb506,	// (0x0008386e) linegrid_cams_pane_g3

0x2fa1,	// (0x0007b309) linegrid_cams_pane_g4

0x2faa,	// (0x0007b312) linegrid_cams_pane_g5

0x2fb3,	// (0x0007b31b) linegrid_cams_pane_g6

0xb50f,	// (0x00083877) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x000876fd) linegrid_cams_pane_g

0x2fbe,	// (0x0007b326) popup_clock_analogue_window

0x2fbe,	// (0x0007b326) popup_clock_digital_window

0xafad,	// (0x00083315) popup_phob_thumbnail_window

0xb376,	// (0x000836de) call_video_uplink_pane_g1

0x2fc7,	// (0x0007b32f) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x0008770c) call_video_uplink_pane_g

0x2fcf,	// (0x0007b337) video_uplink_pane

0x2fd7,	// (0x0007b33f) mce_image_pane_g1

0x2fe1,	// (0x0007b349) mce_image_pane_g2

0x2feb,	// (0x0007b353) mce_image_pane_g3

0x2ff5,	// (0x0007b35d) mce_image_pane_g4

0x2ffd,	// (0x0007b365) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x00087711) mce_image_pane_g

0x3005,	// (0x0007b36d) control_top_pane_stacon_cp01_ParamLimits

0x3005,	// (0x0007b36d) control_top_pane_stacon_cp01

0x3019,	// (0x0007b381) uni_indicator_pane_stacon_cp01_ParamLimits

0x3019,	// (0x0007b381) uni_indicator_pane_stacon_cp01

0x302a,	// (0x0007b392) bg_popup_sub_pane_cp03

0x3034,	// (0x0007b39c) chi_dic_find_pane

0x303c,	// (0x0007b3a4) listscroll_chi_dic_pane

0x3045,	// (0x0007b3ad) main_pane_chidic_g1

0x3058,	// (0x0007b3c0) chi_dic_find_pane_t1

0x3066,	// (0x0007b3ce) find_chidic_pane

0x306f,	// (0x0007b3d7) chi_dic_list_pane_ParamLimits

0x306f,	// (0x0007b3d7) chi_dic_list_pane

0x3080,	// (0x0007b3e8) scroll_pane_cp020

0x3088,	// (0x0007b3f0) find_chidic_pane_t1

0xafad,	// (0x00083315) input_focus_pane_cp06

0x3097,	// (0x0007b3ff) list_chi_dic_pane_ParamLimits

0x3097,	// (0x0007b3ff) list_chi_dic_pane

0x30a9,	// (0x0007b411) list_chi_dic_pane_t1_ParamLimits

0x30a9,	// (0x0007b411) list_chi_dic_pane_t1

0xafad,	// (0x00083315) list_highlight_pane_cp020

0x30bc,	// (0x0007b424) bg_cale_heading_pane_g1

0x30c4,	// (0x0007b42c) bg_cale_heading_pane_g2

0x30cc,	// (0x0007b434) bg_cale_heading_pane_g3

0x30d4,	// (0x0007b43c) bg_cale_heading_pane_g4

0x30dc,	// (0x0007b444) bg_cale_heading_pane_g5

0x30e4,	// (0x0007b44c) bg_cale_heading_pane_g6

0x30ec,	// (0x0007b454) bg_cale_heading_pane_g7

0x30f4,	// (0x0007b45c) bg_cale_heading_pane_g8

0x30fc,	// (0x0007b464) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x0008771c) bg_cale_heading_pane_g

0x30bc,	// (0x0007b424) bg_cale_side_pane_g1

0x3104,	// (0x0007b46c) bg_cale_side_pane_g2

0x310e,	// (0x0007b476) bg_cale_side_pane_g3

0x3118,	// (0x0007b480) bg_cale_side_pane_g4

0x3122,	// (0x0007b48a) bg_cale_side_pane_g5

0x312c,	// (0x0007b494) bg_cale_side_pane_g6

0x3136,	// (0x0007b49e) bg_cale_side_pane_g7

0x3140,	// (0x0007b4a8) bg_cale_side_pane_g8

0x3148,	// (0x0007b4b0) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x0008772f) bg_cale_side_pane_g

0x3150,	// (0x0007b4b8) popup_call_status_window_ParamLimits

0x3150,	// (0x0007b4b8) popup_call_status_window

0x319d,	// (0x0007b505) stacon_top_pane

0x31a5,	// (0x0007b50d) status_pane_ParamLimits

0x31a5,	// (0x0007b50d) status_pane

0x31ba,	// (0x0007b522) status_small_pane

0x31c2,	// (0x0007b52a) control_pane

0xafad,	// (0x00083315) stacon_bottom_pane

0x31ca,	// (0x0007b532) list_single_mce_smart_pane_t1_ParamLimits

0x31ca,	// (0x0007b532) list_single_mce_smart_pane_t1

0x31dd,	// (0x0007b545) list_single_mce_smart_pane_t2_ParamLimits

0x31dd,	// (0x0007b545) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x00087742) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x00087742) list_single_mce_smart_pane_t

0x31fc,	// (0x0007b564) compass_pane

0x3207,	// (0x0007b56f) main_location2_pane_t1

0x321d,	// (0x0007b585) main_location2_pane_t2

0x3233,	// (0x0007b59b) main_location2_pane_t3

0x0003,

0xf3df,	// (0x00087747) main_location2_pane_t

0x3281,	// (0x0007b5e9) compass_pane_g1_ParamLimits

0x3281,	// (0x0007b5e9) compass_pane_g1

0x328d,	// (0x0007b5f5) compass_pane_t1

0x329c,	// (0x0007b604) compass_pane_t2

0x0005,

0xf3e8,	// (0x00087750) compass_pane_t

0x32e7,	// (0x0007b64f) text_secondary_cp61

0x3366,	// (0x0007b6ce) navi_pane_cams_g5

0x33e2,	// (0x0007b74a) navi_pane_im_t1

0x33f0,	// (0x0007b758) navi_pane_mp_g1_ParamLimits

0x33f0,	// (0x0007b758) navi_pane_mp_g1

0x3404,	// (0x0007b76c) navi_pane_mp_g2_ParamLimits

0x3404,	// (0x0007b76c) navi_pane_mp_g2

0x3410,	// (0x0007b778) navi_pane_mp_g3_ParamLimits

0x3410,	// (0x0007b778) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x00087764) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x00087764) navi_pane_mp_g

0x341c,	// (0x0007b784) navi_pane_mp_t1

0x342a,	// (0x0007b792) navi_pane_mp_t2

0x0002,

0xf403,	// (0x0008776b) navi_pane_mp_t

0x34d7,	// (0x0007b83f) navi_pane_vt_g1

0x341c,	// (0x0007b784) navi_pane_vt_t1

0x34df,	// (0x0007b847) navi_slider_pane

0x34e7,	// (0x0007b84f) zooming_pane

0x34ef,	// (0x0007b857) navi_slider_pane_g1

0xba95,	// (0x00083dfd) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x00087772) navi_slider_pane_g

0x3513,	// (0x0007b87b) aid_levels_zoom

0x351b,	// (0x0007b883) zooming_pane_g1

0x3523,	// (0x0007b88b) zooming_pane_g2

0x3523,	// (0x0007b88b) zooming_pane_g3

0x0002,

0xf419,	// (0x00087781) zooming_pane_g

0x352b,	// (0x0007b893) level_10_zoom

0x3534,	// (0x0007b89c) level_11_zoom

0x353d,	// (0x0007b8a5) level_1_zoom

0x3546,	// (0x0007b8ae) level_2_zoom

0x354f,	// (0x0007b8b7) level_3_zoom

0x3558,	// (0x0007b8c0) level_4_zoom

0x3561,	// (0x0007b8c9) level_5_zoom

0x356a,	// (0x0007b8d2) level_6_zoom

0x3573,	// (0x0007b8db) level_7_zoom

0x357c,	// (0x0007b8e4) level_8_zoom

0x3585,	// (0x0007b8ed) level_9_zoom

0x3596,	// (0x0007b8fe) popup_phob_thumbnail_window_g1

0x359e,	// (0x0007b906) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x00087788) popup_phob_thumbnail_window_g

0x5516,	// (0x0007d87e) level_1_location

0x551e,	// (0x0007d886) level_2_location

0x5526,	// (0x0007d88e) level_3_location

0x552e,	// (0x0007d896) level_4_location

0x34e7,	// (0x0007b84f) level_5_location

0x35a6,	// (0x0007b90e) mce_icon_pane_g1

0x35ae,	// (0x0007b916) mce_icon_pane_g2

0x0001,

0xf425,	// (0x0008778d) mce_icon_pane_g

0x35b6,	// (0x0007b91e) main_mup_pane_g1_ParamLimits

0x35b6,	// (0x0007b91e) main_mup_pane_g1

0x35cc,	// (0x0007b934) main_mup_pane_g2_ParamLimits

0x35cc,	// (0x0007b934) main_mup_pane_g2

0x35e4,	// (0x0007b94c) main_mup_pane_g3_ParamLimits

0x35e4,	// (0x0007b94c) main_mup_pane_g3

0x35fc,	// (0x0007b964) main_mup_pane_g4_ParamLimits

0x35fc,	// (0x0007b964) main_mup_pane_g4

0x360e,	// (0x0007b976) main_mup_pane_g5_ParamLimits

0x360e,	// (0x0007b976) main_mup_pane_g5

0x362a,	// (0x0007b992) main_mup_pane_g6_ParamLimits

0x362a,	// (0x0007b992) main_mup_pane_g6

0x3644,	// (0x0007b9ac) main_mup_pane_g7_ParamLimits

0x3644,	// (0x0007b9ac) main_mup_pane_g7

0x3662,	// (0x0007b9ca) main_mup_pane_g8_ParamLimits

0x3662,	// (0x0007b9ca) main_mup_pane_g8

0x3680,	// (0x0007b9e8) main_mup_pane_g9_ParamLimits

0x3680,	// (0x0007b9e8) main_mup_pane_g9

0x369c,	// (0x0007ba04) main_mup_pane_g10_ParamLimits

0x369c,	// (0x0007ba04) main_mup_pane_g10

0x36ba,	// (0x0007ba22) main_mup_pane_g11_ParamLimits

0x36ba,	// (0x0007ba22) main_mup_pane_g11

0x36d4,	// (0x0007ba3c) main_mup_pane_g12_ParamLimits

0x36d4,	// (0x0007ba3c) main_mup_pane_g12

0x36ea,	// (0x0007ba52) main_mup_pane_g13_ParamLimits

0x36ea,	// (0x0007ba52) main_mup_pane_g13

0x000c,

0xf42a,	// (0x00087792) main_mup_pane_g_ParamLimits

0xf42a,	// (0x00087792) main_mup_pane_g

0x36fe,	// (0x0007ba66) main_mup_pane_t1_ParamLimits

0x36fe,	// (0x0007ba66) main_mup_pane_t1

0x371a,	// (0x0007ba82) main_mup_pane_t2_ParamLimits

0x371a,	// (0x0007ba82) main_mup_pane_t2

0x3732,	// (0x0007ba9a) main_mup_pane_t3_ParamLimits

0x3732,	// (0x0007ba9a) main_mup_pane_t3

0x374a,	// (0x0007bab2) main_mup_pane_t4_ParamLimits

0x374a,	// (0x0007bab2) main_mup_pane_t4

0x3768,	// (0x0007bad0) main_mup_pane_t5_ParamLimits

0x3768,	// (0x0007bad0) main_mup_pane_t5

0x377d,	// (0x0007bae5) main_mup_pane_t6_ParamLimits

0x377d,	// (0x0007bae5) main_mup_pane_t6

0x0005,

0xf445,	// (0x000877ad) main_mup_pane_t_ParamLimits

0xf445,	// (0x000877ad) main_mup_pane_t

0x378f,	// (0x0007baf7) mup_progress_pane_ParamLimits

0x378f,	// (0x0007baf7) mup_progress_pane

0x379b,	// (0x0007bb03) mup_visualizer_pane_ParamLimits

0x379b,	// (0x0007bb03) mup_visualizer_pane

0x37cd,	// (0x0007bb35) mup_volume_pane_ParamLimits

0x37cd,	// (0x0007bb35) mup_volume_pane

0x37eb,	// (0x0007bb53) mup_visualizer_pane_g1_ParamLimits

0x37eb,	// (0x0007bb53) mup_visualizer_pane_g1

0x37eb,	// (0x0007bb53) mup_visualizer_pane_g2_ParamLimits

0x37eb,	// (0x0007bb53) mup_visualizer_pane_g2

0x3281,	// (0x0007b5e9) mup_visualizer_pane_g3_ParamLimits

0x3281,	// (0x0007b5e9) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x000877ba) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x000877ba) mup_visualizer_pane_g

0xb376,	// (0x000836de) mup_volume_pane_g1

0x3801,	// (0x0007bb69) mup_volume_pane_g2

0x0001,

0xf459,	// (0x000877c1) mup_volume_pane_g

0xb376,	// (0x000836de) mup_progress_pane_g1

0x380a,	// (0x0007bb72) mup_progress_pane_g2

0x3813,	// (0x0007bb7b) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x000877c6) mup_progress_pane_g

0xafad,	// (0x00083315) bg_popup_window_pane_cp05

0x381c,	// (0x0007bb84) heading_pane_cp02_ParamLimits

0x381c,	// (0x0007bb84) heading_pane_cp02

0x3838,	// (0x0007bba0) list_popup_blid_pane

0x3840,	// (0x0007bba8) list_blid_sat_info_pane_ParamLimits

0x3840,	// (0x0007bba8) list_blid_sat_info_pane

0x3853,	// (0x0007bbbb) list_blid_sat_info_pane_g1

0x385b,	// (0x0007bbc3) list_blid_sat_info_pane_t1

0x3975,	// (0x0007bcdd) mup_equalizer_pane_ParamLimits

0x3975,	// (0x0007bcdd) mup_equalizer_pane

0x3996,	// (0x0007bcfe) mup_equalizer_pane_cp1_ParamLimits

0x3996,	// (0x0007bcfe) mup_equalizer_pane_cp1

0x39b7,	// (0x0007bd1f) mup_equalizer_pane_cp2_ParamLimits

0x39b7,	// (0x0007bd1f) mup_equalizer_pane_cp2

0x39dc,	// (0x0007bd44) mup_equalizer_pane_cp3_ParamLimits

0x39dc,	// (0x0007bd44) mup_equalizer_pane_cp3

0x3a05,	// (0x0007bd6d) mup_equalizer_pane_cp4_ParamLimits

0x3a05,	// (0x0007bd6d) mup_equalizer_pane_cp4

0x3a2e,	// (0x0007bd96) mup_equalizer_pane_cp5

0x3a46,	// (0x0007bdae) mup_equalizer_pane_cp6

0x3a5e,	// (0x0007bdc6) mup_equalizer_pane_cp7

0x5304,	// (0x0007d66c) bg_popup_call_poc_act_pane_g9

0x530c,	// (0x0007d674) bg_popup_call_poc_act_pane_g10

0x5314,	// (0x0007d67c) bg_popup_call_poc_act_pane_g11

0x000a,

0xb208,	// (0x00083570) mup_scale_pane

0xb376,	// (0x000836de) mup_scale_pane_g1

0x3a76,	// (0x0007bdde) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x000877e2) mup_scale_pane_g

0x3aac,	// (0x0007be14) msg_data_pane

0x3ab4,	// (0x0007be1c) scroll_pane_cp017

0x079c,	// (0x00078b04) bg_list_pane_cp04_ParamLimits

0x079c,	// (0x00078b04) bg_list_pane_cp04

0x3abc,	// (0x0007be24) msg_data_pane_g1

0x3ac4,	// (0x0007be2c) msg_data_pane_g2

0x3ace,	// (0x0007be36) msg_data_pane_g3

0x3ad8,	// (0x0007be40) msg_data_pane_g4

0x3ae0,	// (0x0007be48) msg_data_pane_g5

0x3ae8,	// (0x0007be50) msg_data_pane_g6

0x3af0,	// (0x0007be58) msg_data_pane_g7

0x0006,

0xf489,	// (0x000877f1) msg_data_pane_g

0x07bc,	// (0x00078b24) msg_text_pane_ParamLimits

0x07bc,	// (0x00078b24) msg_text_pane

0x3af8,	// (0x0007be60) qrid_highlight_pane_cp011_ParamLimits

0x3af8,	// (0x0007be60) qrid_highlight_pane_cp011

0xafad,	// (0x00083315) msg_body_pane

0xafad,	// (0x00083315) msg_header_pane

0x3b17,	// (0x0007be7f) input_focus_pane_cp07

0x07f6,	// (0x00078b5e) msg_header_pane_t1_ParamLimits

0x07f6,	// (0x00078b5e) msg_header_pane_t1

0xbaaf,	// (0x00083e17) msg_header_pane_t2_ParamLimits

0xbaaf,	// (0x00083e17) msg_header_pane_t2

0x0001,

0xf49d,	// (0x00087805) msg_header_pane_t_ParamLimits

0xf49d,	// (0x00087805) msg_header_pane_t

0x3b2c,	// (0x0007be94) msg_body_pane_g1

0xbac1,	// (0x00083e29) msg_body_pane_t1_ParamLimits

0xbac1,	// (0x00083e29) msg_body_pane_t1

0xbaf2,	// (0x00083e5a) msg_body_pane_t2_ParamLimits

0xbaf2,	// (0x00083e5a) msg_body_pane_t2

0xbb04,	// (0x00083e6c) msg_body_pane_t3_ParamLimits

0xbb04,	// (0x00083e6c) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x0008780a) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x0008780a) msg_body_pane_t

0x3b6e,	// (0x0007bed6) main_viewer_pane_g1_ParamLimits

0x3b6e,	// (0x0007bed6) main_viewer_pane_g1

0x3b7c,	// (0x0007bee4) main_viewer_pane_g2_ParamLimits

0x3b7c,	// (0x0007bee4) main_viewer_pane_g2

0x3b8a,	// (0x0007bef2) main_viewer_pane_g3_ParamLimits

0x3b8a,	// (0x0007bef2) main_viewer_pane_g3

0x3b99,	// (0x0007bf01) main_viewer_pane_g4_ParamLimits

0x3b99,	// (0x0007bf01) main_viewer_pane_g4

0xbb2e,	// (0x00083e96) main_viewer_pane_g5_ParamLimits

0xbb2e,	// (0x00083e96) main_viewer_pane_g5

0xbb2e,	// (0x00083e96) main_viewer_pane_g7_ParamLimits

0xbb2e,	// (0x00083e96) main_viewer_pane_g7

0xbb40,	// (0x00083ea8) main_viewer_pane_g8_ParamLimits

0xbb40,	// (0x00083ea8) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x0008781a) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x0008781a) main_viewer_pane_g

0x3ba8,	// (0x0007bf10) viewer_content_pane_ParamLimits

0x3ba8,	// (0x0007bf10) viewer_content_pane

0x3be5,	// (0x0007bf4d) main_postcard_pane_g1_ParamLimits

0x3be5,	// (0x0007bf4d) main_postcard_pane_g1

0x3bfb,	// (0x0007bf63) main_postcard_pane_g2_ParamLimits

0x3bfb,	// (0x0007bf63) main_postcard_pane_g2

0x3c11,	// (0x0007bf79) main_postcard_pane_g3_ParamLimits

0x3c11,	// (0x0007bf79) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x0008782b) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x0008782b) main_postcard_pane_g

0x3c28,	// (0x0007bf90) main_postcard_pane_g4

0x5ba7,	// (0x0007df0f) smil_status_volume_pane_g2

0x3c6b,	// (0x0007bfd3) postcard_pane_ParamLimits

0x3c6b,	// (0x0007bfd3) postcard_pane

0x3cbb,	// (0x0007c023) postcard_pane_g1_ParamLimits

0x3cbb,	// (0x0007c023) postcard_pane_g1

0x3cc9,	// (0x0007c031) postcard_pane_g2_ParamLimits

0x3cc9,	// (0x0007c031) postcard_pane_g2

0x3cd5,	// (0x0007c03d) postcard_pane_g3_ParamLimits

0x3cd5,	// (0x0007c03d) postcard_pane_g3

0x3ce1,	// (0x0007c049) postcard_pane_g4_ParamLimits

0x3ce1,	// (0x0007c049) postcard_pane_g4

0x3cef,	// (0x0007c057) postcard_pane_g5_ParamLimits

0x3cef,	// (0x0007c057) postcard_pane_g5

0x3d01,	// (0x0007c069) postcard_pane_g6_ParamLimits

0x3d01,	// (0x0007c069) postcard_pane_g6

0x3cbb,	// (0x0007c023) postcard_pane_g7_ParamLimits

0x3cbb,	// (0x0007c023) postcard_pane_g7

0x0006,

0xf4d0,	// (0x00087838) postcard_pane_g_ParamLimits

0xf4d0,	// (0x00087838) postcard_pane_g

0x3d19,	// (0x0007c081) main_mp2_pane_g1_ParamLimits

0x3d19,	// (0x0007c081) main_mp2_pane_g1

0x3d27,	// (0x0007c08f) main_mp2_pane_g2_ParamLimits

0x3d27,	// (0x0007c08f) main_mp2_pane_g2

0x3d33,	// (0x0007c09b) main_mp2_pane_g3_ParamLimits

0x3d33,	// (0x0007c09b) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x00087847) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x00087847) main_mp2_pane_g

0x3d3f,	// (0x0007c0a7) main_mp2_pane_t1_ParamLimits

0x3d3f,	// (0x0007c0a7) main_mp2_pane_t1

0x3d56,	// (0x0007c0be) main_mp2_pane_t2_ParamLimits

0x3d56,	// (0x0007c0be) main_mp2_pane_t2

0x3d6a,	// (0x0007c0d2) main_mp2_pane_t3_ParamLimits

0x3d6a,	// (0x0007c0d2) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x0008784e) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x0008784e) main_mp2_pane_t

0x3d7c,	// (0x0007c0e4) pec_content_pane_ParamLimits

0x3d7c,	// (0x0007c0e4) pec_content_pane

0xb79b,	// (0x00083b03) scroll_pane_cp015

0x3d8e,	// (0x0007c0f6) pec_attribute_pane_ParamLimits

0x3d8e,	// (0x0007c0f6) pec_attribute_pane

0x3d9e,	// (0x0007c106) pec_content_pane_g1_ParamLimits

0x3d9e,	// (0x0007c106) pec_content_pane_g1

0x3daa,	// (0x0007c112) pec_content_pane_t1_ParamLimits

0x3daa,	// (0x0007c112) pec_content_pane_t1

0x3dbc,	// (0x0007c124) pec_content_pane_t2_ParamLimits

0x3dbc,	// (0x0007c124) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x00087855) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x00087855) pec_content_pane_t

0x3dce,	// (0x0007c136) list_single_graphic_pane_cp01_ParamLimits

0x3dce,	// (0x0007c136) list_single_graphic_pane_cp01

0xb208,	// (0x00083570) bg_popup_sub_pane_cp04

0x3de8,	// (0x0007c150) popup_mup_playback_window_g1

0x3df4,	// (0x0007c15c) popup_mup_playback_window_t1

0x3e09,	// (0x0007c171) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0008785a) popup_mup_playback_window_t

0x3e5e,	// (0x0007c1c6) main_image_pane_g1_ParamLimits

0x3e5e,	// (0x0007c1c6) main_image_pane_g1

0x3f3b,	// (0x0007c2a3) scroll_pane_cp018_ParamLimits

0x3f3b,	// (0x0007c2a3) scroll_pane_cp018

0x3f53,	// (0x0007c2bb) scroll_pane_cp016_ParamLimits

0x3f53,	// (0x0007c2bb) scroll_pane_cp016

0x3f87,	// (0x0007c2ef) smil2_image_pane_ParamLimits

0x3f87,	// (0x0007c2ef) smil2_image_pane

0x3fbd,	// (0x0007c325) smil2_root_pane_ParamLimits

0x3fbd,	// (0x0007c325) smil2_root_pane

0x3ff5,	// (0x0007c35d) smil2_text_pane_ParamLimits

0x3ff5,	// (0x0007c35d) smil2_text_pane

0xafad,	// (0x00083315) bg_list_pane_cp06

0x408d,	// (0x0007c3f5) grid_radio_pane

0xafad,	// (0x00083315) bg_popup_window_pane_cp06

0x4097,	// (0x0007c3ff) main_fmradio_pane_t1

0x2ed5,	// (0x0007b23d) heading_pane_cp04

0x40a5,	// (0x0007c40d) main_fmradio_pane_t2

0x53a7,	// (0x0007d70f) popup_cale_lunar_info_window_g1

0x40b3,	// (0x0007c41b) main_fmradio_pane_t3

0x53af,	// (0x0007d717) popup_cale_lunar_info_window_g2

0x40c3,	// (0x0007c42b) main_fmradio_pane_t4

0x0001,

0x40d1,	// (0x0007c439) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x00087935) popup_cale_lunar_info_window_g

0xf507,	// (0x0008786f) main_fmradio_pane_t

0x40df,	// (0x0007c447) wait_bar_pane_cp03

0x40e7,	// (0x0007c44f) cell_fmradio_pane_ParamLimits

0x40e7,	// (0x0007c44f) cell_fmradio_pane

0x3cbb,	// (0x0007c023) cell_fmradio_pane_g1_ParamLimits

0x3cbb,	// (0x0007c023) cell_fmradio_pane_g1

0xafad,	// (0x00083315) grid_highlight_pane_cp011

0x40fc,	// (0x0007c464) poc_content_pane_ParamLimits

0x40fc,	// (0x0007c464) poc_content_pane

0x410e,	// (0x0007c476) scroll_pane_cp019

0x4116,	// (0x0007c47e) popup_call_poc_act_window_ParamLimits

0x4116,	// (0x0007c47e) popup_call_poc_act_window

0x413a,	// (0x0007c4a2) popup_call_poc_inact_window_ParamLimits

0x413a,	// (0x0007c4a2) popup_call_poc_inact_window

0xf5a4,	// (0x0008790c) bg_popup_call_poc_act_pane_g

0x528c,	// (0x0007d5f4) bg_popup_call_poc_inact_pane_g1

0x5294,	// (0x0007d5fc) bg_popup_call_poc_inact_pane_g2

0x4153,	// (0x0007c4bb) popup_call_poc_act_window_g2

0x529c,	// (0x0007d604) bg_popup_call_poc_inact_pane_g3

0x52a4,	// (0x0007d60c) bg_popup_call_poc_inact_pane_g4

0x52ac,	// (0x0007d614) bg_popup_call_poc_inact_pane_g5

0x415b,	// (0x0007c4c3) popup_call_poc_act_window_t1_ParamLimits

0x415b,	// (0x0007c4c3) popup_call_poc_act_window_t1

0x4183,	// (0x0007c4eb) popup_call_poc_act_window_t2_ParamLimits

0x4183,	// (0x0007c4eb) popup_call_poc_act_window_t2

0x41ab,	// (0x0007c513) popup_call_poc_act_window_t3_ParamLimits

0x41ab,	// (0x0007c513) popup_call_poc_act_window_t3

0x41d3,	// (0x0007c53b) popup_call_poc_act_window_t4_ParamLimits

0x41d3,	// (0x0007c53b) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0008787a) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0008787a) popup_call_poc_act_window_t

0x52b4,	// (0x0007d61c) bg_popup_call_poc_inact_pane_g6

0x52bc,	// (0x0007d624) bg_popup_call_poc_inact_pane_g7

0x52c4,	// (0x0007d62c) bg_popup_call_poc_inact_pane_g8

0x41e5,	// (0x0007c54d) popup_call_poc_inact_window_g2

0x52cc,	// (0x0007d634) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x000878f9) bg_popup_call_poc_inact_pane_g

0x41ed,	// (0x0007c555) popup_call_poc_inact_window_t1_ParamLimits

0x41ed,	// (0x0007c555) popup_call_poc_inact_window_t1

0x4202,	// (0x0007c56a) popup_call_poc_inact_window_t2_ParamLimits

0x4202,	// (0x0007c56a) popup_call_poc_inact_window_t2

0x4217,	// (0x0007c57f) popup_call_poc_inact_window_t3_ParamLimits

0x4217,	// (0x0007c57f) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00087883) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00087883) popup_call_poc_inact_window_t

0x5a3d,	// (0x0007dda5) context_pane_ParamLimits

0x5aa0,	// (0x0007de08) signal_pane_ParamLimits

0x34e7,	// (0x0007b84f) main_call2_pane

0xbb89,	// (0x00083ef1) popup_phob_thumbnail2_window_ParamLimits

0xbb89,	// (0x00083ef1) popup_phob_thumbnail2_window

0xbb16,	// (0x00083e7e) aid_hotspot_pointer_arrow_pane

0xbb1e,	// (0x00083e86) aid_hotspot_pointer_hand_pane

0x54de,	// (0x0007d846) phob_pre_status_pane_g5

0x1d41,	// (0x0007a0a9) cams_zoom_pane_ParamLimits

0x1d50,	// (0x0007a0b8) image_vga_pane_ParamLimits

0x1d6a,	// (0x0007a0d2) main_camera_pane_g1_ParamLimits

0x1d7c,	// (0x0007a0e4) main_camera_pane_g2_ParamLimits

0x1d8c,	// (0x0007a0f4) main_camera_pane_g3_ParamLimits

0x1da0,	// (0x0007a108) main_camera_pane_g4_ParamLimits

0x1db4,	// (0x0007a11c) main_camera_pane_g5_ParamLimits

0x1dc8,	// (0x0007a130) main_camera_pane_g6_ParamLimits

0x1ddc,	// (0x0007a144) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x00087582) main_camera_pane_g_ParamLimits

0x1df0,	// (0x0007a158) main_camera_pane_t1_ParamLimits

0x1e06,	// (0x0007a16e) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x00087593) main_camera_pane_t_ParamLimits

0xb208,	// (0x00083570) bg_popup_preview_window_pane_cp01_ParamLimits

0xb208,	// (0x00083570) bg_popup_preview_window_pane_cp01

0x422c,	// (0x0007c594) popup_phob_thumbnail2_window_g1_ParamLimits

0x422c,	// (0x0007c594) popup_phob_thumbnail2_window_g1

0xafad,	// (0x00083315) call2_cli_visual_pane

0x4253,	// (0x0007c5bb) popup_call2_audio_conf_window_ParamLimits

0x4253,	// (0x0007c5bb) popup_call2_audio_conf_window

0x427b,	// (0x0007c5e3) popup_call2_audio_first_window_ParamLimits

0x427b,	// (0x0007c5e3) popup_call2_audio_first_window

0x4311,	// (0x0007c679) popup_call2_audio_in_window_ParamLimits

0x4311,	// (0x0007c679) popup_call2_audio_in_window

0x435d,	// (0x0007c6c5) popup_call2_audio_out_window_ParamLimits

0x435d,	// (0x0007c6c5) popup_call2_audio_out_window

0x43cf,	// (0x0007c737) popup_call2_audio_second_window_ParamLimits

0x43cf,	// (0x0007c737) popup_call2_audio_second_window

0x4435,	// (0x0007c79d) popup_call2_audio_wait_window_ParamLimits

0x4435,	// (0x0007c79d) popup_call2_audio_wait_window

0xafad,	// (0x00083315) bg_popup_call2_act_pane_cp03

0xb1ea,	// (0x00083552) list_conf_pane_cp

0x446f,	// (0x0007c7d7) popup_call2_audio_conf_window_t1

0x447d,	// (0x0007c7e5) list_single_graphic_popup_conf2_pane_ParamLimits

0x447d,	// (0x0007c7e5) list_single_graphic_popup_conf2_pane

0x2f68,	// (0x0007b2d0) list_highlight_pane_cp04

0x4490,	// (0x0007c7f8) list_single_graphic_popup_conf2_pane_g1

0x2f79,	// (0x0007b2e1) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0008788a) list_single_graphic_popup_conf2_pane_g

0x449a,	// (0x0007c802) list_single_graphic_popup_conf2_pane_t1

0x44a8,	// (0x0007c810) bg_popup_call2_act_pane_cp01_ParamLimits

0x44a8,	// (0x0007c810) bg_popup_call2_act_pane_cp01

0x4532,	// (0x0007c89a) call_type_pane_cp05_ParamLimits

0x4532,	// (0x0007c89a) call_type_pane_cp05

0x4586,	// (0x0007c8ee) popup_call2_audio_second_window_g1_ParamLimits

0x4586,	// (0x0007c8ee) popup_call2_audio_second_window_g1

0x45da,	// (0x0007c942) popup_call2_audio_second_window_g2_ParamLimits

0x45da,	// (0x0007c942) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x0008788f) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x0008788f) popup_call2_audio_second_window_g

0x463f,	// (0x0007c9a7) popup_call2_audio_second_window_t1_ParamLimits

0x463f,	// (0x0007c9a7) popup_call2_audio_second_window_t1

0x46fa,	// (0x0007ca62) popup_call2_audio_second_window_t2_ParamLimits

0x46fa,	// (0x0007ca62) popup_call2_audio_second_window_t2

0x474d,	// (0x0007cab5) popup_call2_audio_second_window_t3_ParamLimits

0x474d,	// (0x0007cab5) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x00087896) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x00087896) popup_call2_audio_second_window_t

0xafad,	// (0x00083315) bg_popup_call2_in_pane_cp02

0xafb7,	// (0x0008331f) call_type_pane_cp04

0xafbf,	// (0x00083327) popup_call2_audio_wait_window_g1

0xafc7,	// (0x0008332f) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x0008746f) popup_call2_audio_wait_window_g

0xafcf,	// (0x00083337) popup_call2_audio_wait_window_t3

0x4840,	// (0x0007cba8) bg_popup_call2_act_pane_ParamLimits

0x4840,	// (0x0007cba8) bg_popup_call2_act_pane

0x4900,	// (0x0007cc68) call_type_pane_cp03_ParamLimits

0x4900,	// (0x0007cc68) call_type_pane_cp03

0x4964,	// (0x0007cccc) popup_call2_audio_first_window_g1_ParamLimits

0x4964,	// (0x0007cccc) popup_call2_audio_first_window_g1

0x49d4,	// (0x0007cd3c) popup_call2_audio_first_window_g2_ParamLimits

0x49d4,	// (0x0007cd3c) popup_call2_audio_first_window_g2

0x37eb,	// (0x0007bb53) popup_call2_audio_first_window_g3_ParamLimits

0x37eb,	// (0x0007bb53) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x0008789f) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x0008789f) popup_call2_audio_first_window_g

0x4ab2,	// (0x0007ce1a) popup_call2_audio_first_window_t1_ParamLimits

0x4ab2,	// (0x0007ce1a) popup_call2_audio_first_window_t1

0x4bb5,	// (0x0007cf1d) popup_call2_audio_first_window_t4_ParamLimits

0x4bb5,	// (0x0007cf1d) popup_call2_audio_first_window_t4

0x4c98,	// (0x0007d000) popup_call2_audio_first_window_t5_ParamLimits

0x4c98,	// (0x0007d000) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x000878aa) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x000878aa) popup_call2_audio_first_window_t

0xb200,	// (0x00083568) bg_popup_call2_act_pane_g1

0x53b9,	// (0x0007d721) popup_cale_lunar_info_window_t1

0x53c7,	// (0x0007d72f) popup_cale_lunar_info_window_t2

0x53d5,	// (0x0007d73d) popup_cale_lunar_info_window_t3

0xafad,	// (0x00083315) bg_popup_call2_bubble_pane

0x4d99,	// (0x0007d101) bg_popup_call2_in_pane_cp01_ParamLimits

0x4d99,	// (0x0007d101) bg_popup_call2_in_pane_cp01

0xac89,	// (0x00082ff1) call_type_pane_cp02

0x4de1,	// (0x0007d149) popup_call2_audio_out_window_g1_ParamLimits

0x4de1,	// (0x0007d149) popup_call2_audio_out_window_g1

0x4e0d,	// (0x0007d175) popup_call2_audio_out_window_g2_ParamLimits

0x4e0d,	// (0x0007d175) popup_call2_audio_out_window_g2

0x4e35,	// (0x0007d19d) popup_call2_audio_out_window_g3_ParamLimits

0x4e35,	// (0x0007d19d) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x000878b3) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x000878b3) popup_call2_audio_out_window_g

0x4e70,	// (0x0007d1d8) popup_call2_audio_out_window_t1_ParamLimits

0x4e70,	// (0x0007d1d8) popup_call2_audio_out_window_t1

0x4ecf,	// (0x0007d237) popup_call2_audio_out_window_t2_ParamLimits

0x4ecf,	// (0x0007d237) popup_call2_audio_out_window_t2

0x4f23,	// (0x0007d28b) popup_call2_audio_out_window_t3_ParamLimits

0x4f23,	// (0x0007d28b) popup_call2_audio_out_window_t3

0x4f39,	// (0x0007d2a1) popup_call2_audio_out_window_t4_ParamLimits

0x4f39,	// (0x0007d2a1) popup_call2_audio_out_window_t4

0x4f4f,	// (0x0007d2b7) popup_call2_audio_out_window_t5_ParamLimits

0x4f4f,	// (0x0007d2b7) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x000878bc) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x000878bc) popup_call2_audio_out_window_t

0x4fb3,	// (0x0007d31b) bg_popup_call2_in_pane_ParamLimits

0x4fb3,	// (0x0007d31b) bg_popup_call2_in_pane

0x500f,	// (0x0007d377) popup_call2_audio_in_window_g1_ParamLimits

0x500f,	// (0x0007d377) popup_call2_audio_in_window_g1

0x5047,	// (0x0007d3af) popup_call2_audio_in_window_g2_ParamLimits

0x5047,	// (0x0007d3af) popup_call2_audio_in_window_g2

0x507f,	// (0x0007d3e7) popup_call2_audio_in_window_g3_ParamLimits

0x507f,	// (0x0007d3e7) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x000878c9) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x000878c9) popup_call2_audio_in_window_g

0x50d7,	// (0x0007d43f) popup_call2_audio_in_window_t1_ParamLimits

0x50d7,	// (0x0007d43f) popup_call2_audio_in_window_t1

0x5157,	// (0x0007d4bf) popup_call2_audio_in_window_t2_ParamLimits

0x5157,	// (0x0007d4bf) popup_call2_audio_in_window_t2

0x51d7,	// (0x0007d53f) popup_call2_audio_in_window_t3_ParamLimits

0x51d7,	// (0x0007d53f) popup_call2_audio_in_window_t3

0x51f1,	// (0x0007d559) popup_call2_audio_in_window_t4_ParamLimits

0x51f1,	// (0x0007d559) popup_call2_audio_in_window_t4

0x5203,	// (0x0007d56b) popup_call2_audio_in_window_t5_ParamLimits

0x5203,	// (0x0007d56b) popup_call2_audio_in_window_t5

0x5218,	// (0x0007d580) popup_call2_audio_in_window_t6_ParamLimits

0x5218,	// (0x0007d580) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x000878d2) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x000878d2) popup_call2_audio_in_window_t

0xb200,	// (0x00083568) bg_popup_call2_in_pane_g1

0x53e3,	// (0x0007d74b) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x0008793a) popup_cale_lunar_info_window_t

0xb208,	// (0x00083570) bg_popup_call2_rect_pane_ParamLimits

0xb208,	// (0x00083570) bg_popup_call2_rect_pane

0xafad,	// (0x00083315) call2_cli_visual_graphic_pane

0xafad,	// (0x00083315) call2_cli_visual_text_pane

0xbb9b,	// (0x00083f03) smil_status_volume_pane_g3

0x0002,

0xb376,	// (0x000836de) call2_cli_visual_graphic_pane_g1

0xb376,	// (0x000836de) call2_cli_visual_graphic_pane_g2

0xb376,	// (0x000836de) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x000878df) call2_cli_visual_graphic_pane_g

0x524c,	// (0x0007d5b4) bg_popup_call2_rect_pane_g1

0xb41e,	// (0x00083786) bg_popup_call2_rect_pane_g2

0x5254,	// (0x0007d5bc) bg_popup_call2_rect_pane_g3

0x525c,	// (0x0007d5c4) bg_popup_call2_rect_pane_g4

0x5264,	// (0x0007d5cc) bg_popup_call2_rect_pane_g5

0x526c,	// (0x0007d5d4) bg_popup_call2_rect_pane_g6

0x5274,	// (0x0007d5dc) bg_popup_call2_rect_pane_g7

0x527c,	// (0x0007d5e4) bg_popup_call2_rect_pane_g8

0x5284,	// (0x0007d5ec) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x000878e6) bg_popup_call2_rect_pane_g

0x528c,	// (0x0007d5f4) bg_popup_call2_bubble_pane_g1

0x5294,	// (0x0007d5fc) bg_popup_call2_bubble_pane_g2

0x529c,	// (0x0007d604) bg_popup_call2_bubble_pane_g3

0x52a4,	// (0x0007d60c) bg_popup_call2_bubble_pane_g4

0x52ac,	// (0x0007d614) bg_popup_call2_bubble_pane_g5

0x52b4,	// (0x0007d61c) bg_popup_call2_bubble_pane_g6

0x52bc,	// (0x0007d624) bg_popup_call2_bubble_pane_g7

0x52c4,	// (0x0007d62c) bg_popup_call2_bubble_pane_g8

0x52cc,	// (0x0007d634) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x000878f9) bg_popup_call2_bubble_pane_g

0x18ec,	// (0x00079c54) aid_cale_week_size_cell_pane

0x1e20,	// (0x0007a188) aid_cams_cif_uncrop_pane_ParamLimits

0x1e20,	// (0x0007a188) aid_cams_cif_uncrop_pane

0x1fd9,	// (0x0007a341) aid_cams_size_cell_ParamLimits

0x1fd9,	// (0x0007a341) aid_cams_size_cell

0x1fed,	// (0x0007a355) grid_cams_pane_ParamLimits

0x2007,	// (0x0007a36f) linegrid_cams_pane_ParamLimits

0x20e5,	// (0x0007a44d) call_video_pane_t1

0x20ff,	// (0x0007a467) call_video_pane_t2

0x0001,

0xf27e,	// (0x000875e6) call_video_pane_t

0x254a,	// (0x0007a8b2) aid_cale_month_size_cell_pane_ParamLimits

0x254a,	// (0x0007a8b2) aid_cale_month_size_cell_pane

0xf61b,	// (0x00087983) smil_status_volume_pane_g

0xbba8,	// (0x00083f10) volume_smil_pane_ParamLimits

0xaaf0,	// (0x00082e58) aid_popup2_width_pane

0x1854,	// (0x00079bbc) cell_qdial_pane_g4_ParamLimits

0x1854,	// (0x00079bbc) cell_qdial_pane_g4

0x325d,	// (0x0007b5c5) aid_blid_cardinal_pane_ParamLimits

0x326d,	// (0x0007b5d5) aid_blid_destination_pane_ParamLimits

0x326d,	// (0x0007b5d5) aid_blid_destination_pane

0xb208,	// (0x00083570) bg_popup_call_poc_act_pane_ParamLimits

0xb208,	// (0x00083570) bg_popup_call_poc_act_pane

0xb208,	// (0x00083570) bg_popup_call_poc_inact_pane_ParamLimits

0xb208,	// (0x00083570) bg_popup_call_poc_inact_pane

0x52dc,	// (0x0007d644) bg_popup_call_poc_act_pane_g1

0x52e4,	// (0x0007d64c) bg_popup_call_poc_act_pane_g2

0x52ec,	// (0x0007d654) bg_popup_call_poc_act_pane_g3

0x52a4,	// (0x0007d60c) bg_popup_call_poc_act_pane_g4

0x52ac,	// (0x0007d614) bg_popup_call_poc_act_pane_g5

0x52f4,	// (0x0007d65c) bg_popup_call_poc_act_pane_g6

0x52bc,	// (0x0007d624) bg_popup_call_poc_act_pane_g7

0x52fc,	// (0x0007d664) bg_popup_call_poc_act_pane_g8

0xafad,	// (0x00083315) main_usb_pane

0xbb60,	// (0x00083ec8) popup_cale_lunar_info_window

0x23ca,	// (0x0007a732) im_reading_pane_t1_ParamLimits

0xb6f3,	// (0x00083a5b) list_im_pane_ParamLimits

0xb704,	// (0x00083a6c) scroll_pane_cp07_ParamLimits

0xafad,	// (0x00083315) grid_highlight_pane_cp012

0xb208,	// (0x00083570) mup_scale_pane_ParamLimits

0x3cbb,	// (0x0007c023) main_usb_pane_g1_ParamLimits

0x3cbb,	// (0x0007c023) main_usb_pane_g1

0x531c,	// (0x0007d684) main_usb_pane_g2_ParamLimits

0x531c,	// (0x0007d684) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x00087923) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x00087923) main_usb_pane_g

0x5332,	// (0x0007d69a) main_usb_pane_t1_ParamLimits

0x5332,	// (0x0007d69a) main_usb_pane_t1

0x5344,	// (0x0007d6ac) main_usb_pane_t2_ParamLimits

0x5344,	// (0x0007d6ac) main_usb_pane_t2

0x5356,	// (0x0007d6be) main_usb_pane_t3_ParamLimits

0x5356,	// (0x0007d6be) main_usb_pane_t3

0x5368,	// (0x0007d6d0) main_usb_pane_t4_ParamLimits

0x5368,	// (0x0007d6d0) main_usb_pane_t4

0x537d,	// (0x0007d6e5) main_usb_pane_t5_ParamLimits

0x537d,	// (0x0007d6e5) main_usb_pane_t5

0x5392,	// (0x0007d6fa) main_usb_pane_t6_ParamLimits

0x5392,	// (0x0007d6fa) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x00087928) main_usb_pane_t_ParamLimits

0x31fc,	// (0x0007b564) aid_text_placing

0x3207,	// (0x0007b56f) main_location2_pane_t1_ParamLimits

0x321d,	// (0x0007b585) main_location2_pane_t2_ParamLimits

0x3233,	// (0x0007b59b) main_location2_pane_t3_ParamLimits

0x3249,	// (0x0007b5b1) main_location2_pane_t4_ParamLimits

0x3249,	// (0x0007b5b1) main_location2_pane_t4

0xf3df,	// (0x00087747) main_location2_pane_t_ParamLimits

0xb244,	// (0x000835ac) find_pinb_pane_g2_ParamLimits

0xb244,	// (0x000835ac) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x00087495) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x00087495) find_pinb_pane_g

0xb250,	// (0x000835b8) find_pinb_pane_t1_ParamLimits

0xb262,	// (0x000835ca) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x0008749a) find_pinb_pane_t_ParamLimits

0xafad,	// (0x00083315) main_call3_pane

0x28be,	// (0x0007ac26) cale_month_day_heading_pane_t1_ParamLimits

0x291c,	// (0x0007ac84) cale_month_day_heading_pane_t2_ParamLimits

0x2981,	// (0x0007ace9) cale_month_day_heading_pane_t3_ParamLimits

0x29e6,	// (0x0007ad4e) cale_month_day_heading_pane_t4_ParamLimits

0x2a4b,	// (0x0007adb3) cale_month_day_heading_pane_t5_ParamLimits

0x2ab0,	// (0x0007ae18) cale_month_day_heading_pane_t6_ParamLimits

0x2b15,	// (0x0007ae7d) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x0008761e) cale_month_day_heading_pane_t_ParamLimits

0xb97a,	// (0x00083ce2) smil_status_volume_pane

0x3c8f,	// (0x0007bff7) postcard_address_pane_ParamLimits

0x3c8f,	// (0x0007bff7) postcard_address_pane

0x3ca5,	// (0x0007c00d) postcard_message_pane_ParamLimits

0x3ca5,	// (0x0007c00d) postcard_message_pane

0x522d,	// (0x0007d595) call2_cli_visual_pane_t1_ParamLimits

0x522d,	// (0x0007d595) call2_cli_visual_pane_t1

0x5d60,	// (0x0007e0c8) postcard_message_pane_t1_ParamLimits

0x5d60,	// (0x0007e0c8) postcard_message_pane_t1

0x5d49,	// (0x0007e0b1) postcard_address_pane_t1_ParamLimits

0x5d49,	// (0x0007e0b1) postcard_address_pane_t1

0x5d35,	// (0x0007e09d) popup_call3_audio_in_window_ParamLimits

0x5d35,	// (0x0007e09d) popup_call3_audio_in_window

0x5bba,	// (0x0007df22) bg_popup_call3_in_pane_ParamLimits

0x5bba,	// (0x0007df22) bg_popup_call3_in_pane

0x5c36,	// (0x0007df9e) popup_call3_audio_in_window_g1_ParamLimits

0x5c36,	// (0x0007df9e) popup_call3_audio_in_window_g1

0x5c56,	// (0x0007dfbe) popup_call3_audio_in_window_g2_ParamLimits

0x5c56,	// (0x0007dfbe) popup_call3_audio_in_window_g2

0x5c76,	// (0x0007dfde) popup_call3_audio_in_window_g3_ParamLimits

0x5c76,	// (0x0007dfde) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x0008798a) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x0008798a) popup_call3_audio_in_window_g

0x5ca7,	// (0x0007e00f) popup_call3_audio_in_window_t1_ParamLimits

0x5ca7,	// (0x0007e00f) popup_call3_audio_in_window_t1

0x5ce5,	// (0x0007e04d) popup_call3_audio_in_window_t2_ParamLimits

0x5ce5,	// (0x0007e04d) popup_call3_audio_in_window_t2

0x5d23,	// (0x0007e08b) popup_call3_audio_in_window_t3_ParamLimits

0x5d23,	// (0x0007e08b) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x00087993) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x00087993) popup_call3_audio_in_window_t

0x34e7,	// (0x0007b84f) bg_popup_call3_rect_pane

0x524c,	// (0x0007d5b4) bg_popup_call3_rect_pane_g1

0xb41e,	// (0x00083786) bg_popup_call3_rect_pane_g2

0x5254,	// (0x0007d5bc) bg_popup_call3_rect_pane_g3

0x525c,	// (0x0007d5c4) bg_popup_call3_rect_pane_g4

0x5264,	// (0x0007d5cc) bg_popup_call3_rect_pane_g5

0x526c,	// (0x0007d5d4) bg_popup_call3_rect_pane_g6

0x5274,	// (0x0007d5dc) bg_popup_call3_rect_pane_g7

0x37e3,	// (0x0007bb4b) mup_visualizer_osc_pane

0x37f9,	// (0x0007bb61) mup_visualizer_spec_pane

0x5bea,	// (0x0007df52) call3_video_qcif_pane_ParamLimits

0x5bea,	// (0x0007df52) call3_video_qcif_pane

0x5bfd,	// (0x0007df65) call3_video_qcif_uncrop_pane_ParamLimits

0x5bfd,	// (0x0007df65) call3_video_qcif_uncrop_pane

0x5c0d,	// (0x0007df75) call3_video_subqcif_pane_ParamLimits

0x5c0d,	// (0x0007df75) call3_video_subqcif_pane

0x5c23,	// (0x0007df8b) call3_video_subqcif_uncrop_pane_ParamLimits

0x5c23,	// (0x0007df8b) call3_video_subqcif_uncrop_pane

0x5c96,	// (0x0007dffe) popup_call3_audio_in_window_g4_ParamLimits

0x5c96,	// (0x0007dffe) popup_call3_audio_in_window_g4

0x5b7b,	// (0x0007dee3) mup_spec_half_pane

0x5b84,	// (0x0007deec) mup_spec_half_pane_cp

0x5b69,	// (0x0007ded1) mup_osc_middle_pane

0x5b72,	// (0x0007deda) mup_visualizer_osc_pane_g1

0x5b49,	// (0x0007deb1) mup_spec_bar_pane_ParamLimits

0x5b49,	// (0x0007deb1) mup_spec_bar_pane

0x5b36,	// (0x0007de9e) mup_spec_bar_pane_g1

0x5b40,	// (0x0007dea8) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0008797e) mup_spec_bar_pane_g

0x18ec,	// (0x00079c54) aid_cale_week_size_cell_pane_ParamLimits

0x18ff,	// (0x00079c67) bg_cale_heading_pane_ParamLimits

0xb49a,	// (0x00083802) bg_cale_pane_cp01_ParamLimits

0x191b,	// (0x00079c83) cale_week_corner_pane_ParamLimits

0x1931,	// (0x00079c99) cale_week_day_heading_pane_ParamLimits

0x194d,	// (0x00079cb5) cale_week_scroll_pane_g1_ParamLimits

0x1966,	// (0x00079cce) cale_week_scroll_pane_g2_ParamLimits

0x1977,	// (0x00079cdf) cale_week_scroll_pane_g3_ParamLimits

0x1988,	// (0x00079cf0) cale_week_scroll_pane_g4_ParamLimits

0x1999,	// (0x00079d01) cale_week_scroll_pane_g5_ParamLimits

0x19aa,	// (0x00079d12) cale_week_scroll_pane_g6_ParamLimits

0x19bb,	// (0x00079d23) cale_week_scroll_pane_g7_ParamLimits

0x19cc,	// (0x00079d34) cale_week_scroll_pane_g8_ParamLimits

0x19dd,	// (0x00079d45) cale_week_scroll_pane_g9_ParamLimits

0x19ee,	// (0x00079d56) cale_week_scroll_pane_g10_ParamLimits

0x19ff,	// (0x00079d67) cale_week_scroll_pane_g11_ParamLimits

0x1a10,	// (0x00079d78) cale_week_scroll_pane_g12_ParamLimits

0x1a21,	// (0x00079d89) cale_week_scroll_pane_g13_ParamLimits

0x1a3a,	// (0x00079da2) cale_week_scroll_pane_g14_ParamLimits

0x1a53,	// (0x00079dbb) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x00087526) cale_week_scroll_pane_g_ParamLimits

0x1a6c,	// (0x00079dd4) cale_week_time_pane_ParamLimits

0x1a7d,	// (0x00079de5) grid_cale_week_pane_ParamLimits

0xb4b3,	// (0x0008381b) listscroll_cale_week_pane_t1

0x1a98,	// (0x00079e00) scroll_pane_cp08_ParamLimits

0x259b,	// (0x0007a903) cale_month_corner_pane_ParamLimits

0xb91a,	// (0x00083c82) cale_month_pane_t1

0x287f,	// (0x0007abe7) cale_month_week_pane_ParamLimits

0x2e9d,	// (0x0007b205) popup_call_status_window_g1_ParamLimits

0x2eb1,	// (0x0007b219) popup_call_status_window_g2_ParamLimits

0x2ec5,	// (0x0007b22d) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x000876ce) popup_call_status_window_g_ParamLimits

0xec36,	// (0x00086f9e) aid_call2_pane

0x07e8,	// (0x00078b50) msg_header_pane_g1

0x3c8f,	// (0x0007bff7) postcard_address2_pane_ParamLimits

0x3c8f,	// (0x0007bff7) postcard_address2_pane

0x3ca5,	// (0x0007c00d) postcard_message2_pane_ParamLimits

0x3ca5,	// (0x0007c00d) postcard_message2_pane

0x5aae,	// (0x0007de16) message2_row_pane_ParamLimits

0x5aae,	// (0x0007de16) message2_row_pane

0x5ad1,	// (0x0007de39) address2_row_pane_ParamLimits

0x5ad1,	// (0x0007de39) address2_row_pane

0x5ae4,	// (0x0007de4c) postcard_message2_row_pane_g1

0x5aec,	// (0x0007de54) postcard_message2_row_pane_t1

0x5ae4,	// (0x0007de4c) address2_row_pane_g1

0x5aec,	// (0x0007de54) address2_row_pane_t1

0x1ca6,	// (0x0007a00e) aid_size_cell_vorec

0xafad,	// (0x00083315) main_rss_pane

0x5afa,	// (0x0007de62) rss_list_single_pane_ParamLimits

0x5afa,	// (0x0007de62) rss_list_single_pane

0x5b1a,	// (0x0007de82) rss_list_single_pane_t1

0x5b28,	// (0x0007de90) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x00087979) rss_list_single_pane_t

0xafad,	// (0x00083315) main_camera2_pane

0xafad,	// (0x00083315) main_video2_pane

0x5dcf,	// (0x0007e137) cams_zoom_pane_cp2_ParamLimits

0x5dcf,	// (0x0007e137) cams_zoom_pane_cp2

0x5de6,	// (0x0007e14e) image2_vga_pane_ParamLimits

0x5de6,	// (0x0007e14e) image2_vga_pane

0x5e2e,	// (0x0007e196) main_camera2_pane_g1_ParamLimits

0x5e2e,	// (0x0007e196) main_camera2_pane_g1

0x5e4e,	// (0x0007e1b6) main_camera2_pane_g2_ParamLimits

0x5e4e,	// (0x0007e1b6) main_camera2_pane_g2

0x5e65,	// (0x0007e1cd) main_camera2_pane_g3_ParamLimits

0x5e65,	// (0x0007e1cd) main_camera2_pane_g3

0x5e7c,	// (0x0007e1e4) main_camera2_pane_g4_ParamLimits

0x5e7c,	// (0x0007e1e4) main_camera2_pane_g4

0x5e93,	// (0x0007e1fb) main_camera2_pane_g5_ParamLimits

0x5e93,	// (0x0007e1fb) main_camera2_pane_g5

0x5eaa,	// (0x0007e212) main_camera2_pane_g6_ParamLimits

0x5eaa,	// (0x0007e212) main_camera2_pane_g6

0x5ec1,	// (0x0007e229) main_camera2_pane_g7_ParamLimits

0x5ec1,	// (0x0007e229) main_camera2_pane_g7

0x5ed8,	// (0x0007e240) main_camera2_pane_g8_ParamLimits

0x5ed8,	// (0x0007e240) main_camera2_pane_g8

0x0008,

0xf632,	// (0x0008799a) main_camera2_pane_g_ParamLimits

0xf632,	// (0x0008799a) main_camera2_pane_g

0x5f06,	// (0x0007e26e) main_camera2_pane_t1_ParamLimits

0x5f06,	// (0x0007e26e) main_camera2_pane_t1

0x5f3b,	// (0x0007e2a3) main_camera2_pane_t2_ParamLimits

0x5f3b,	// (0x0007e2a3) main_camera2_pane_t2

0x5f58,	// (0x0007e2c0) main_camera2_pane_t3_ParamLimits

0x5f58,	// (0x0007e2c0) main_camera2_pane_t3

0x5fb6,	// (0x0007e31e) main_camera2_pane_t4_ParamLimits

0x5fb6,	// (0x0007e31e) main_camera2_pane_t4

0x0006,

0xf645,	// (0x000879ad) main_camera2_pane_t_ParamLimits

0xf645,	// (0x000879ad) main_camera2_pane_t

0x603f,	// (0x0007e3a7) cams_zoom_pane_cp4_ParamLimits

0x603f,	// (0x0007e3a7) cams_zoom_pane_cp4

0x6055,	// (0x0007e3bd) image2_cif_pane_ParamLimits

0x6055,	// (0x0007e3bd) image2_cif_pane

0x6080,	// (0x0007e3e8) image2_subqcif_pane_ParamLimits

0x6080,	// (0x0007e3e8) image2_subqcif_pane

0x609b,	// (0x0007e403) main_video2_pane_g1_ParamLimits

0x609b,	// (0x0007e403) main_video2_pane_g1

0x60b5,	// (0x0007e41d) main_video2_pane_g2_ParamLimits

0x60b5,	// (0x0007e41d) main_video2_pane_g2

0x60cb,	// (0x0007e433) main_video2_pane_g3_ParamLimits

0x60cb,	// (0x0007e433) main_video2_pane_g3

0x60e1,	// (0x0007e449) main_video2_pane_g4_ParamLimits

0x60e1,	// (0x0007e449) main_video2_pane_g4

0x60f7,	// (0x0007e45f) main_video2_pane_g5_ParamLimits

0x60f7,	// (0x0007e45f) main_video2_pane_g5

0x610d,	// (0x0007e475) main_video2_pane_g6_ParamLimits

0x610d,	// (0x0007e475) main_video2_pane_g6

0x0005,

0xf654,	// (0x000879bc) main_video2_pane_g_ParamLimits

0xf654,	// (0x000879bc) main_video2_pane_g

0x6127,	// (0x0007e48f) main_video2_pane_t1_ParamLimits

0x6127,	// (0x0007e48f) main_video2_pane_t1

0x614b,	// (0x0007e4b3) main_video2_pane_t2_ParamLimits

0x614b,	// (0x0007e4b3) main_video2_pane_t2

0x619b,	// (0x0007e503) main_video2_pane_t3_ParamLimits

0x619b,	// (0x0007e503) main_video2_pane_t3

0x0002,

0xf661,	// (0x000879c9) main_video2_pane_t_ParamLimits

0xf661,	// (0x000879c9) main_video2_pane_t

0x553e,	// (0x0007d8a6) call_muted_g2

0x0001,

0xf603,	// (0x0008796b) call_muted_g

0xafad,	// (0x00083315) main_mup2_pane

0x61e3,	// (0x0007e54b) main_mup2_pane_g1_ParamLimits

0x61e3,	// (0x0007e54b) main_mup2_pane_g1

0x61ef,	// (0x0007e557) main_mup2_pane_g2_ParamLimits

0x61ef,	// (0x0007e557) main_mup2_pane_g2

0xbc11,	// (0x00083f79) main_mup_pane_g13_cp1

0xbc19,	// (0x00083f81) mup_volume_pane_cp1

0x620d,	// (0x0007e575) main_mup2_pane_g4_ParamLimits

0x620d,	// (0x0007e575) main_mup2_pane_g4

0x621d,	// (0x0007e585) main_mup2_pane_g5_ParamLimits

0x621d,	// (0x0007e585) main_mup2_pane_g5

0x622d,	// (0x0007e595) main_mup2_pane_g6_ParamLimits

0x622d,	// (0x0007e595) main_mup2_pane_g6

0x623d,	// (0x0007e5a5) main_mup2_pane_g7_ParamLimits

0x623d,	// (0x0007e5a5) main_mup2_pane_g7

0x0006,

0xf668,	// (0x000879d0) main_mup2_pane_g_ParamLimits

0xf668,	// (0x000879d0) main_mup2_pane_g

0x6255,	// (0x0007e5bd) main_mup2_pane_t1_ParamLimits

0x6255,	// (0x0007e5bd) main_mup2_pane_t1

0x626b,	// (0x0007e5d3) main_mup2_pane_t2_ParamLimits

0x626b,	// (0x0007e5d3) main_mup2_pane_t2

0x6281,	// (0x0007e5e9) main_mup2_pane_t3_ParamLimits

0x6281,	// (0x0007e5e9) main_mup2_pane_t3

0x6297,	// (0x0007e5ff) main_mup2_pane_t4_ParamLimits

0x6297,	// (0x0007e5ff) main_mup2_pane_t4

0x62af,	// (0x0007e617) main_mup2_pane_t5_ParamLimits

0x62af,	// (0x0007e617) main_mup2_pane_t5

0x62c7,	// (0x0007e62f) main_mup2_pane_t6_ParamLimits

0x62c7,	// (0x0007e62f) main_mup2_pane_t6

0x0005,

0xf677,	// (0x000879df) main_mup2_pane_t_ParamLimits

0xf677,	// (0x000879df) main_mup2_pane_t

0x62f7,	// (0x0007e65f) mup2_visualizer_pane_ParamLimits

0x62f7,	// (0x0007e65f) mup2_visualizer_pane

0x6325,	// (0x0007e68d) mup_progress_pane_cp_ParamLimits

0x6325,	// (0x0007e68d) mup_progress_pane_cp

0xbbfc,	// (0x00083f64) mup_volume_pane_cp_ParamLimits

0xbbfc,	// (0x00083f64) mup_volume_pane_cp

0x633b,	// (0x0007e6a3) mup2_visualizer_pane_g1_ParamLimits

0x633b,	// (0x0007e6a3) mup2_visualizer_pane_g1

0x6350,	// (0x0007e6b8) mup2_visualizer_pane_g2_ParamLimits

0x6350,	// (0x0007e6b8) mup2_visualizer_pane_g2

0x635c,	// (0x0007e6c4) mup2_visualizer_pane_g3_ParamLimits

0x635c,	// (0x0007e6c4) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x000879ec) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x000879ec) mup2_visualizer_pane_g

0x4085,	// (0x0007c3ed) aid_size_cell_fmradio

0x571f,	// (0x0007da87) aid_height_parent_landcape

0xb782,	// (0x00083aea) wml_content_pane_cp

0xb78a,	// (0x00083af2) wml_tabs_pane

0xb793,	// (0x00083afb) popup_wml_miniature_window

0xb79b,	// (0x00083b03) scroll_pane_cp021

0xb7af,	// (0x00083b17) wml_content_pane_comp8

0xafad,	// (0x00083315) bg_popup_sub_pane_cp05

0x637a,	// (0x0007e6e2) popup_wml_miniature_window_g1

0x6382,	// (0x0007e6ea) wml_miniature_view_pane

0x638a,	// (0x0007e6f2) aid_size_wml_view

0x6392,	// (0x0007e6fa) wml_miniature_view_pane_g1

0x639b,	// (0x0007e703) wml_miniature_view_pane_g2

0x63a4,	// (0x0007e70c) wml_miniature_view_pane_g3

0x63ac,	// (0x0007e714) wml_miniature_view_pane_g4

0x63b4,	// (0x0007e71c) wml_miniature_view_pane_g5

0x63bc,	// (0x0007e724) wml_miniature_view_pane_g6

0x63c4,	// (0x0007e72c) wml_miniature_view_pane_g7

0x63cc,	// (0x0007e734) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x000879f3) wml_miniature_view_pane_g

0x63d4,	// (0x0007e73c) background_graphic_ParamLimits

0x63d4,	// (0x0007e73c) background_graphic

0x63e0,	// (0x0007e748) wml_tabs_2_pane

0x63e9,	// (0x0007e751) wml_tabs_3_pane_ParamLimits

0x63e9,	// (0x0007e751) wml_tabs_3_pane

0x63fb,	// (0x0007e763) wml_tabs_4_pane_ParamLimits

0x63fb,	// (0x0007e763) wml_tabs_4_pane

0x6411,	// (0x0007e779) wml_tabs_5_pane_ParamLimits

0x6411,	// (0x0007e779) wml_tabs_5_pane

0x642b,	// (0x0007e793) wml_tabs_pane_g2_ParamLimits

0x642b,	// (0x0007e793) wml_tabs_pane_g2

0x643f,	// (0x0007e7a7) wml_tabs_pane_g3_ParamLimits

0x643f,	// (0x0007e7a7) wml_tabs_pane_g3

0x6453,	// (0x0007e7bb) wml_tabs_2_active_pane_ParamLimits

0x6453,	// (0x0007e7bb) wml_tabs_2_active_pane

0x6467,	// (0x0007e7cf) wml_tabs_2_passive_pane_ParamLimits

0x6467,	// (0x0007e7cf) wml_tabs_2_passive_pane

0x647b,	// (0x0007e7e3) wml_tabs_3_active_pane_cp_ParamLimits

0x647b,	// (0x0007e7e3) wml_tabs_3_active_pane_cp

0x6490,	// (0x0007e7f8) wml_tabs_3_passive_pane_ParamLimits

0x6490,	// (0x0007e7f8) wml_tabs_3_passive_pane

0x64a3,	// (0x0007e80b) wml_tabs_3_passive_pane_cp_ParamLimits

0x64a3,	// (0x0007e80b) wml_tabs_3_passive_pane_cp

0x64ba,	// (0x0007e822) tabs_4_active_pane

0x64c2,	// (0x0007e82a) tabs_4_passive_pane

0x64cc,	// (0x0007e834) tabs_4_passive_pane_cp

0x64d4,	// (0x0007e83c) tabs_4_passive_pane_cp2

0x52d4,	// (0x0007d63c) aid_height_text

0x37b5,	// (0x0007bb1d) mup_volume_cont_pane_ParamLimits

0x37b5,	// (0x0007bb1d) mup_volume_cont_pane

0x14e0,	// (0x00079848) aid_size_cell_pinb

0x14ea,	// (0x00079852) aid_size_list_pinb

0x6311,	// (0x0007e679) mup2_volume_cont_pane_ParamLimits

0x6311,	// (0x0007e679) mup2_volume_cont_pane

0xbbe8,	// (0x00083f50) mup2_volume_cont_pane_g1_ParamLimits

0xbbe8,	// (0x00083f50) mup2_volume_cont_pane_g1

0x11f1,	// (0x00079559) aid_size_cell_touch_ParamLimits

0x11f1,	// (0x00079559) aid_size_cell_touch

0x1404,	// (0x0007976c) touch_pane_ParamLimits

0x1404,	// (0x0007976c) touch_pane

0xaade,	// (0x00082e46) main_rss2_pane

0x64e7,	// (0x0007e84f) listscroll_rss2_pane

0x64f0,	// (0x0007e858) rss2_navigation_pane

0x64f8,	// (0x0007e860) list_rss2_pane

0x3080,	// (0x0007b3e8) scroll_pane_cp22

0x6500,	// (0x0007e868) rss2_navigation_pane_g1

0x6509,	// (0x0007e871) rss2_navigation_pane_g2

0x6511,	// (0x0007e879) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x00087a04) rss2_navigation_pane_g

0x6519,	// (0x0007e881) rss2_navigation_pane_t1

0x6527,	// (0x0007e88f) rss2_list_single_pane_ParamLimits

0x6527,	// (0x0007e88f) rss2_list_single_pane

0xbc21,	// (0x00083f89) rss2_list_single_pane_t2

0xbc2f,	// (0x00083f97) rss2_list_single_pane_t3_ParamLimits

0xbc2f,	// (0x00083f97) rss2_list_single_pane_t3

0xbc4c,	// (0x00083fb4) rss2_list_single_pane_t4

0x2ce1,	// (0x0007b049) smil_status_pane_g1

0xab57,	// (0x00082ebf) main_image2_pane_ParamLimits

0xab57,	// (0x00082ebf) main_image2_pane

0x5eef,	// (0x0007e257) main_camera2_pane_g9_ParamLimits

0x5eef,	// (0x0007e257) main_camera2_pane_g9

0x600b,	// (0x0007e373) main_camera2_pane_t5_ParamLimits

0x600b,	// (0x0007e373) main_camera2_pane_t5

0xbbbd,	// (0x00083f25) main_camera2_pane_t6_ParamLimits

0xbbbd,	// (0x00083f25) main_camera2_pane_t6

0x6541,	// (0x0007e8a9) main_image2_pane_g1_ParamLimits

0x6541,	// (0x0007e8a9) main_image2_pane_g1

0x402f,	// (0x0007c397) smil2_video_pane_ParamLimits

0x402f,	// (0x0007c397) smil2_video_pane

0xab0c,	// (0x00082e74) aid_zoom_text_primary_cp

0xab4d,	// (0x00082eb5) popup_preview_fixed_window

0xb6eb,	// (0x00083a53) im_reading_pane_g1

0x5dc1,	// (0x0007e129) cams2_bc_adjust_pane_cp_ParamLimits

0x5dc1,	// (0x0007e129) cams2_bc_adjust_pane_cp

0x6031,	// (0x0007e399) cams2_bc_adjust_pane_ParamLimits

0x6031,	// (0x0007e399) cams2_bc_adjust_pane

0xbc5a,	// (0x00083fc2) cams2_bc_adjust_pane_g1

0xbc62,	// (0x00083fca) cams2_slider_pane

0xbc6b,	// (0x00083fd3) cams2_slider_pane_g1

0xbc74,	// (0x00083fdc) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x00087a0b) cams2_slider_pane_g

0x15da,	// (0x00079942) calc_display_pane_ParamLimits

0x1602,	// (0x0007996a) calc_paper_pane_ParamLimits

0x1625,	// (0x0007998d) grid_calc_pane_ParamLimits

0xba78,	// (0x00083de0) popup_clock_digital_window_t1_ParamLimits

0x3eac,	// (0x0007c214) main_image_pane_t1

0x15bc,	// (0x00079924) aid_size_cell_calc_ParamLimits

0x15bc,	// (0x00079924) aid_size_cell_calc

0x577b,	// (0x0007dae3) popup_blid_sat_info2_window_ParamLimits

0x577b,	// (0x0007dae3) popup_blid_sat_info2_window

0xbc96,	// (0x00083ffe) aid_size_cell_blid

0xbc9e,	// (0x00084006) bg_popup_window_pane_cp07

0xbcc1,	// (0x00084029) grid_popup_blid_pane

0xbccb,	// (0x00084033) heading_pane_cp05_ParamLimits

0xbccb,	// (0x00084033) heading_pane_cp05

0xbd95,	// (0x000840fd) cell_popup_blid_pane_ParamLimits

0xbd95,	// (0x000840fd) cell_popup_blid_pane

0xbdbf,	// (0x00084127) cell_popup_blid_pane_g1

0xbdc7,	// (0x0008412f) cell_popup_blid_pane_t1

0x62e1,	// (0x0007e649) mup2_indicator_pane_ParamLimits

0x62e1,	// (0x0007e649) mup2_indicator_pane

0x34e7,	// (0x0007b84f) mup2_visualizer_osc_pane

0x6368,	// (0x0007e6d0) mup2_visualizer_spec_pane_ParamLimits

0x6368,	// (0x0007e6d0) mup2_visualizer_spec_pane

0x6557,	// (0x0007e8bf) mup2_spec_half_pane

0x6560,	// (0x0007e8c8) mup2_spec_half_pane_cp

0x6568,	// (0x0007e8d0) mup2_spec_bar_pane_ParamLimits

0x6568,	// (0x0007e8d0) mup2_spec_bar_pane

0x5b36,	// (0x0007de9e) mup2_spec_bar_pane_g1

0x5b40,	// (0x0007dea8) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0008797e) mup2_spec_bar_pane_g

0x6588,	// (0x0007e8f0) mup2_osc_middle_pane

0x5b72,	// (0x0007deda) mup2_visualizer_osc_pane_g1

0xab85,	// (0x00082eed) popup_number_entry_window_t1_ParamLimits

0xab98,	// (0x00082f00) popup_number_entry_window_t2_ParamLimits

0xabaa,	// (0x00082f12) popup_number_entry_window_t3_ParamLimits

0xabbc,	// (0x00082f24) popup_number_entry_window_t5_ParamLimits

0xabbc,	// (0x00082f24) popup_number_entry_window_t5

0xf0d8,	// (0x00087440) popup_number_entry_window_t_ParamLimits

0xabf1,	// (0x00082f59) text_title_cp2_ParamLimits

0xbb26,	// (0x00083e8e) aid_hotspot_pointer_text2_pane

0xbb4c,	// (0x00083eb4) main_viewer_pane_g9_ParamLimits

0xbb4c,	// (0x00083eb4) main_viewer_pane_g9

0xb91a,	// (0x00083c82) cale_month_pane_t1_ParamLimits

0xe958,	// (0x00086cc0) bg_cale_pane_ParamLimits

0xe970,	// (0x00086cd8) list_cale_pane_ParamLimits

0xb4b3,	// (0x0008381b) listscroll_cale_day_pane_t1

0xe981,	// (0x00086ce9) scroll_pane_cp09_ParamLimits

0x3869,	// (0x0007bbd1) main_mup_eq_pane_t1_ParamLimits

0x3869,	// (0x0007bbd1) main_mup_eq_pane_t1

0x3885,	// (0x0007bbed) main_mup_eq_pane_t2_ParamLimits

0x3885,	// (0x0007bbed) main_mup_eq_pane_t2

0x38a1,	// (0x0007bc09) main_mup_eq_pane_t3_ParamLimits

0x38a1,	// (0x0007bc09) main_mup_eq_pane_t3

0x38bf,	// (0x0007bc27) main_mup_eq_pane_t4_ParamLimits

0x38bf,	// (0x0007bc27) main_mup_eq_pane_t4

0x38dd,	// (0x0007bc45) main_mup_eq_pane_t5_ParamLimits

0x38dd,	// (0x0007bc45) main_mup_eq_pane_t5

0x38fb,	// (0x0007bc63) main_mup_eq_pane_t6_ParamLimits

0x38fb,	// (0x0007bc63) main_mup_eq_pane_t6

0x3911,	// (0x0007bc79) main_mup_eq_pane_t7_ParamLimits

0x3911,	// (0x0007bc79) main_mup_eq_pane_t7

0x3927,	// (0x0007bc8f) main_mup_eq_pane_t8_ParamLimits

0x3927,	// (0x0007bc8f) main_mup_eq_pane_t8

0x393d,	// (0x0007bca5) main_mup_eq_pane_t9_ParamLimits

0x393d,	// (0x0007bca5) main_mup_eq_pane_t9

0x3959,	// (0x0007bcc1) main_mup_eq_pane_t10_ParamLimits

0x3959,	// (0x0007bcc1) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x000877cd) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x000877cd) main_mup_eq_pane_t

0x3a2e,	// (0x0007bd96) mup_equalizer_pane_cp5_ParamLimits

0x3a46,	// (0x0007bdae) mup_equalizer_pane_cp6_ParamLimits

0x3a5e,	// (0x0007bdc6) mup_equalizer_pane_cp7_ParamLimits

0xaade,	// (0x00082e46) main_gallery_pane

0x5b8c,	// (0x0007def4) smil2_volume_pane

0x5b94,	// (0x0007defc) smil_status_volume_pane_g1_ParamLimits

0x5ba7,	// (0x0007df0f) smil_status_volume_pane_g2_ParamLimits

0xbb9b,	// (0x00083f03) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x00087983) smil_status_volume_pane_g_ParamLimits

0xbc9e,	// (0x00084006) bg_popup_window_pane_cp07_ParamLimits

0xbcac,	// (0x00084014) blid_firmament_pane

0x6591,	// (0x0007e8f9) aid_size_cell_gallery_ParamLimits

0x6591,	// (0x0007e8f9) aid_size_cell_gallery

0x65a7,	// (0x0007e90f) grid_gallery_pane_ParamLimits

0x65a7,	// (0x0007e90f) grid_gallery_pane

0x65c2,	// (0x0007e92a) cell_gallery_pane_ParamLimits

0x65c2,	// (0x0007e92a) cell_gallery_pane

0xbdd5,	// (0x0008413d) bg_cell_gallery_focus_pane_ParamLimits

0xbdd5,	// (0x0008413d) bg_cell_gallery_focus_pane

0xbde7,	// (0x0008414f) cell_gallery_pane_g1_ParamLimits

0xbde7,	// (0x0008414f) cell_gallery_pane_g1

0x6613,	// (0x0007e97b) cell_gallery_pane_g2_ParamLimits

0x6613,	// (0x0007e97b) cell_gallery_pane_g2

0x6620,	// (0x0007e988) cell_gallery_pane_g3_ParamLimits

0x6620,	// (0x0007e988) cell_gallery_pane_g3

0xbdf3,	// (0x0008415b) cell_gallery_pane_g4_ParamLimits

0xbdf3,	// (0x0008415b) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x00087a31) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x00087a31) cell_gallery_pane_g

0xbdff,	// (0x00084167) bg_cell_gallery_focus_pane_g1

0xbe07,	// (0x0008416f) bg_cell_gallery_focus_pane_g2

0xbe0f,	// (0x00084177) bg_cell_gallery_focus_pane_g3

0xbe17,	// (0x0008417f) bg_cell_gallery_focus_pane_g4

0xbe1f,	// (0x00084187) bg_cell_gallery_focus_pane_g5

0xbe27,	// (0x0008418f) bg_cell_gallery_focus_pane_g6

0xbe2f,	// (0x00084197) bg_cell_gallery_focus_pane_g7

0xbe37,	// (0x0008419f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x00087a3a) bg_cell_gallery_focus_pane_g

0xbe3f,	// (0x000841a7) aid_firma_cardinal

0xbe53,	// (0x000841bb) blid_firmament_pane_t1

0xbe6a,	// (0x000841d2) blid_firmament_pane_t2

0xbe81,	// (0x000841e9) blid_firmament_pane_t3

0xbe98,	// (0x00084200) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x00087a4b) blid_firmament_pane_t

0xbeaf,	// (0x00084217) blid_sat_info_pane

0xbebf,	// (0x00084227) blid_sat_info_pane_g1

0xbebf,	// (0x00084227) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x00087a54) blid_sat_info_pane_g

0xbec9,	// (0x00084231) blid_sat_info_pane_t1

0xbed7,	// (0x0008423f) smil2_volume_content_pane

0xbee0,	// (0x00084248) smil2_volume_pane_g1

0xbee8,	// (0x00084250) smil2_volume_content_pane_g1

0xbef1,	// (0x00084259) smil2_volume_content_pane_g2

0xbefa,	// (0x00084262) smil2_volume_content_pane_g3

0xbf03,	// (0x0008426b) smil2_volume_content_pane_g4

0xbf0c,	// (0x00084274) smil2_volume_content_pane_g5

0xbf15,	// (0x0008427d) smil2_volume_content_pane_g6

0xbf1e,	// (0x00084286) smil2_volume_content_pane_g7

0xbf27,	// (0x0008428f) smil2_volume_content_pane_g8

0xbf30,	// (0x00084298) smil2_volume_content_pane_g9

0xbf39,	// (0x000842a1) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x00087a59) smil2_volume_content_pane_g

0x1af8,	// (0x00079e60) cale_week_day_heading_pane_t1_ParamLimits

0x1b0c,	// (0x00079e74) cale_week_day_heading_pane_t2_ParamLimits

0x1b20,	// (0x00079e88) cale_week_day_heading_pane_t3_ParamLimits

0x1b34,	// (0x00079e9c) cale_week_day_heading_pane_t4_ParamLimits

0x1b48,	// (0x00079eb0) cale_week_day_heading_pane_t5_ParamLimits

0x1b5c,	// (0x00079ec4) cale_week_day_heading_pane_t6_ParamLimits

0x1b70,	// (0x00079ed8) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x00087545) cale_week_day_heading_pane_t_ParamLimits

0xb4c5,	// (0x0008382d) bg_cale_side_pane_ParamLimits

0x1b84,	// (0x00079eec) cale_week_time_pane_t1_ParamLimits

0x1b9c,	// (0x00079f04) cale_week_time_pane_t2_ParamLimits

0x1bb4,	// (0x00079f1c) cale_week_time_pane_t3_ParamLimits

0x1bcc,	// (0x00079f34) cale_week_time_pane_t4_ParamLimits

0x1be4,	// (0x00079f4c) cale_week_time_pane_t5_ParamLimits

0x1bfc,	// (0x00079f64) cale_week_time_pane_t6_ParamLimits

0x1c14,	// (0x00079f7c) cale_week_time_pane_t7_ParamLimits

0x1c30,	// (0x00079f98) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x00087554) cale_week_time_pane_t_ParamLimits

0x1c50,	// (0x00079fb8) cell_cale_week_pane_g2_ParamLimits

0xb4c5,	// (0x0008382d) bg_cale_side_pane_cp01_ParamLimits

0x2b7a,	// (0x0007aee2) cale_month_week_pane_t1_ParamLimits

0x2b91,	// (0x0007aef9) cale_month_week_pane_t2_ParamLimits

0x2ba8,	// (0x0007af10) cale_month_week_pane_t3_ParamLimits

0x2bbf,	// (0x0007af27) cale_month_week_pane_t4_ParamLimits

0x2bd6,	// (0x0007af3e) cale_month_week_pane_t5_ParamLimits

0x2bed,	// (0x0007af55) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x0008762d) cale_month_week_pane_t_ParamLimits

0xb956,	// (0x00083cbe) cell_cale_month_pane_g1_ParamLimits

0xaade,	// (0x00082e46) main_cale_event_viewer_pane

0xaade,	// (0x00082e46) listscroll_cale_event_viewer_pane

0xbf42,	// (0x000842aa) list_cale_ev_pane

0xbf4a,	// (0x000842b2) scroll_pane_cp023

0x662d,	// (0x0007e995) field_cale_ev_pane_ParamLimits

0x662d,	// (0x0007e995) field_cale_ev_pane

0xbf56,	// (0x000842be) field_cale_ev_content_pane_ParamLimits

0xbf56,	// (0x000842be) field_cale_ev_content_pane

0xbf62,	// (0x000842ca) field_cale_ev_pane_g1_ParamLimits

0xbf62,	// (0x000842ca) field_cale_ev_pane_g1

0xbf6e,	// (0x000842d6) field_cale_ev_pane_g2_ParamLimits

0xbf6e,	// (0x000842d6) field_cale_ev_pane_g2

0xbf86,	// (0x000842ee) field_cale_ev_pane_g3_ParamLimits

0xbf86,	// (0x000842ee) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x00087a6e) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x00087a6e) field_cale_ev_pane_g

0xbf9e,	// (0x00084306) field_cale_ev_pane_t1_ParamLimits

0xbf9e,	// (0x00084306) field_cale_ev_pane_t1

0x6651,	// (0x0007e9b9) field_cale_ev_content_pane_t1_ParamLimits

0x6651,	// (0x0007e9b9) field_cale_ev_content_pane_t1

0x3b0e,	// (0x0007be76) bg_button_pane_cp01

0xb2fd,	// (0x00083665) listscroll_cale_week_pane_ParamLimits

0x18e2,	// (0x00079c4a) popup_toolbar_window_cp01

0xb4b3,	// (0x0008381b) listscroll_cale_week_pane_t1_ParamLimits

0xb2fd,	// (0x00083665) listscroll_cale_day_pane_ParamLimits

0x2d41,	// (0x0007b0a9) popup_toolbar_window_cp02

0xb4b3,	// (0x0008381b) listscroll_cale_day_pane_t1_ParamLimits

0xb2fd,	// (0x00083665) main_cale_month_pane_ParamLimits

0x59fb,	// (0x0007dd63) popup_toolbar_window_cp03_ParamLimits

0x59fb,	// (0x0007dd63) popup_toolbar_window_cp03

0x3e8a,	// (0x0007c1f2) main_image_pane_g2_ParamLimits

0x3e8a,	// (0x0007c1f2) main_image_pane_g2

0x3e9b,	// (0x0007c203) main_image_pane_g3_ParamLimits

0x3e9b,	// (0x0007c203) main_image_pane_g3

0x0002,

0xf4f7,	// (0x0008785f) main_image_pane_g_ParamLimits

0xf4f7,	// (0x0008785f) main_image_pane_g

0x3eac,	// (0x0007c214) main_image_pane_t1_ParamLimits

0x3ec3,	// (0x0007c22b) main_image_pane_t2_ParamLimits

0x3ec3,	// (0x0007c22b) main_image_pane_t2

0x3ed5,	// (0x0007c23d) main_image_pane_t3_ParamLimits

0x3ed5,	// (0x0007c23d) main_image_pane_t3

0x3efd,	// (0x0007c265) main_image_pane_t4_ParamLimits

0x3efd,	// (0x0007c265) main_image_pane_t4

0x0003,

0xf4fe,	// (0x00087866) main_image_pane_t_ParamLimits

0xf4fe,	// (0x00087866) main_image_pane_t

0x3f1d,	// (0x0007c285) popup_image_details_window_cp01

0x3f27,	// (0x0007c28f) popup_toobar_trans_pane_cp01_ParamLimits

0x3f27,	// (0x0007c28f) popup_toobar_trans_pane_cp01

0x586e,	// (0x0007dbd6) popup_image_details_window_ParamLimits

0x586e,	// (0x0007dbd6) popup_image_details_window

0xbb6c,	// (0x00083ed4) popup_image_focus_window

0x5d7b,	// (0x0007e0e3) camera2_autofocus_pane_ParamLimits

0x5d7b,	// (0x0007e0e3) camera2_autofocus_pane

0xaade,	// (0x00082e46) bg_popup_sub_pane_cp06

0xbfb5,	// (0x0008431d) popup_image_focus_window_g1

0xbfbd,	// (0x00084325) popup_image_focus_window_g2

0xbfc5,	// (0x0008432d) popup_image_focus_window_g3

0xbfcd,	// (0x00084335) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x00087a75) popup_image_focus_window_g

0xbfd5,	// (0x0008433d) popup_image_focus_window_t1

0xbfe3,	// (0x0008434b) popup_image_focus_window_t2

0xbff3,	// (0x0008435b) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x00087a7e) popup_image_focus_window_t

0xc001,	// (0x00084369) camera2_autofocus_pane_g1

0xab57,	// (0x00082ebf) bg_tb_trans_pane_cp01

0xc00f,	// (0x00084377) popup_image_details_window_g1

0xc022,	// (0x0008438a) popup_image_details_window_g2

0x0002,

0xf728,	// (0x00087a90) popup_image_details_window_g

0xc04b,	// (0x000843b3) popup_image_details_window_t1

0xc05d,	// (0x000843c5) popup_image_details_window_t2

0xc076,	// (0x000843de) popup_image_details_window_t3

0xc08a,	// (0x000843f2) popup_image_details_window_t4

0xc0a5,	// (0x0008440d) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x00087a97) popup_image_details_window_t

0xb2cf,	// (0x00083637) bg_calc_paper_pane_ParamLimits

0xaade,	// (0x00082e46) grid_highlight_pane_cp013

0xb2e3,	// (0x0008364b) list_calc_pane_ParamLimits

0xb2f5,	// (0x0008365d) scroll_pane_cp024

0xb2fd,	// (0x00083665) bg_calc_display_pane_ParamLimits

0x1725,	// (0x00079a8d) calc_display_pane_t1_ParamLimits

0x1737,	// (0x00079a9f) calc_display_pane_t2_ParamLimits

0xb309,	// (0x00083671) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x000874c7) calc_display_pane_t_ParamLimits

0x17ff,	// (0x00079b67) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x000874e4) cell_calc_pane_g

0x1808,	// (0x00079b70) cell_calc_pane_t1

0xb380,	// (0x000836e8) grid_highlight_pane_cp02_ParamLimits

0xb396,	// (0x000836fe) toolbar_button_pane_cp01_ParamLimits

0xb396,	// (0x000836fe) toolbar_button_pane_cp01

0x3f69,	// (0x0007c2d1) temp_image_control_pane_ParamLimits

0x3f69,	// (0x0007c2d1) temp_image_control_pane

0xab57,	// (0x00082ebf) main_mp3_pane

0xc0bf,	// (0x00084427) temp_image_control_pane_g1_ParamLimits

0xc0bf,	// (0x00084427) temp_image_control_pane_g1

0xc0cd,	// (0x00084435) temp_image_control_pane_g2_ParamLimits

0xc0cd,	// (0x00084435) temp_image_control_pane_g2

0xc0df,	// (0x00084447) temp_image_control_pane_g3_ParamLimits

0xc0df,	// (0x00084447) temp_image_control_pane_g3

0x66a2,	// (0x0007ea0a) temp_image_control_pane_g4_ParamLimits

0x66a2,	// (0x0007ea0a) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x00087aa2) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x00087aa2) temp_image_control_pane_g

0xc0bf,	// (0x00084427) main_mp3_pane_g1

0x66b5,	// (0x0007ea1d) main_mp3_pane_g2

0x0007,

0xf743,	// (0x00087aab) main_mp3_pane_g

0xc122,	// (0x0008448a) main_mp3_pane_t1

0xb538,	// (0x000838a0) main_camera_pane_g8_ParamLimits

0xb538,	// (0x000838a0) main_camera_pane_g8

0x1f7f,	// (0x0007a2e7) main_video_pane_g7_ParamLimits

0x1f7f,	// (0x0007a2e7) main_video_pane_g7

0xbbd6,	// (0x00083f3e) main_camera2_pane_t7_ParamLimits

0xbbd6,	// (0x00083f3e) main_camera2_pane_t7

0xb742,	// (0x00083aaa) scroll_pane_cp025_ParamLimits

0xb742,	// (0x00083aaa) scroll_pane_cp025

0xb756,	// (0x00083abe) scroll_pane_cp026_ParamLimits

0xb756,	// (0x00083abe) scroll_pane_cp026

0xb765,	// (0x00083acd) wml_content_pane_ParamLimits

0xaade,	// (0x00082e46) main_touch_calib_pane

0x6787,	// (0x0007eaef) main_touch_calib_pane_g1

0x6799,	// (0x0007eb01) main_touch_calib_pane_g2

0x67ab,	// (0x0007eb13) main_touch_calib_pane_g3

0x67bd,	// (0x0007eb25) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x00087ac9) main_touch_calib_pane_g

0x67cf,	// (0x0007eb37) main_touch_calib_pane_t1

0x67e9,	// (0x0007eb51) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x00087ad2) main_touch_calib_pane_t

0x3348,	// (0x0007b6b0) mup_progress_pane_cp02

0x337d,	// (0x0007b6e5) navi_pane_g1

0x3438,	// (0x0007b7a0) navi_pane_mp_t3

0xab57,	// (0x00082ebf) main_mp3_pane_ParamLimits

0x5a50,	// (0x0007ddb8) navi_pane_ParamLimits

0xc0bf,	// (0x00084427) main_mp3_pane_g1_ParamLimits

0x66b5,	// (0x0007ea1d) main_mp3_pane_g2_ParamLimits

0x66c1,	// (0x0007ea29) main_mp3_pane_g3_ParamLimits

0x66c1,	// (0x0007ea29) main_mp3_pane_g3

0x66cf,	// (0x0007ea37) main_mp3_pane_g4_ParamLimits

0x66cf,	// (0x0007ea37) main_mp3_pane_g4

0xc0ef,	// (0x00084457) main_mp3_pane_g5_ParamLimits

0xc0ef,	// (0x00084457) main_mp3_pane_g5

0xc0fd,	// (0x00084465) main_mp3_pane_g6_ParamLimits

0xc0fd,	// (0x00084465) main_mp3_pane_g6

0xc10a,	// (0x00084472) main_mp3_pane_g7_ParamLimits

0xc10a,	// (0x00084472) main_mp3_pane_g7

0xc116,	// (0x0008447e) main_mp3_pane_g8_ParamLimits

0xc116,	// (0x0008447e) main_mp3_pane_g8

0xf743,	// (0x00087aab) main_mp3_pane_g_ParamLimits

0x66db,	// (0x0007ea43) main_mp3_pane_t2

0x66e9,	// (0x0007ea51) main_mp3_pane_t3

0xc130,	// (0x00084498) main_mp3_pane_t4

0xc13e,	// (0x000844a6) main_mp3_pane_t5

0x0005,

0xf754,	// (0x00087abc) main_mp3_pane_t

0xc14c,	// (0x000844b4) mup_progress_pane_cp01

0xab0c,	// (0x00082e74) aid_zoom_text_secondary2

0xbf42,	// (0x000842aa) list_cale_ev2_pane

0xbf4a,	// (0x000842b2) scroll_pane_cp023_ParamLimits

0x6843,	// (0x0007ebab) field_cale_ev2_pane_ParamLimits

0x6843,	// (0x0007ebab) field_cale_ev2_pane

0x6867,	// (0x0007ebcf) field_cale_ev2_pane_g1_ParamLimits

0x6867,	// (0x0007ebcf) field_cale_ev2_pane_g1

0x6873,	// (0x0007ebdb) field_cale_ev2_pane_g2_ParamLimits

0x6873,	// (0x0007ebdb) field_cale_ev2_pane_g2

0x688b,	// (0x0007ebf3) field_cale_ev2_pane_g3_ParamLimits

0x688b,	// (0x0007ebf3) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x00087add) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x00087add) field_cale_ev2_pane_g

0x080a,	// (0x00078b72) field_cale_ev2_pane_t1_ParamLimits

0x080a,	// (0x00078b72) field_cale_ev2_pane_t1

0x0821,	// (0x00078b89) field_cale_ev2_pane_t2_ParamLimits

0x0821,	// (0x00078b89) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x00087ae6) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x00087ae6) field_cale_ev2_pane_t

0x3c3f,	// (0x0007bfa7) main_postcard_pane_g5_ParamLimits

0x3c3f,	// (0x0007bfa7) main_postcard_pane_g5

0x3c55,	// (0x0007bfbd) main_postcard_pane_g6_ParamLimits

0x3c55,	// (0x0007bfbd) main_postcard_pane_g6

0x1d2b,	// (0x0007a093) camera2_autofocus_pane_cp_ParamLimits

0x1d2b,	// (0x0007a093) camera2_autofocus_pane_cp

0xab57,	// (0x00082ebf) main_mup3_pane

0x68c3,	// (0x0007ec2b) main_mup3_pane_g1_ParamLimits

0x68c3,	// (0x0007ec2b) main_mup3_pane_g1

0x68e5,	// (0x0007ec4d) main_mup3_pane_g2_ParamLimits

0x68e5,	// (0x0007ec4d) main_mup3_pane_g2

0x6968,	// (0x0007ecd0) main_mup3_pane_g3_ParamLimits

0x6968,	// (0x0007ecd0) main_mup3_pane_g3

0x69b4,	// (0x0007ed1c) main_mup3_pane_g4_ParamLimits

0x69b4,	// (0x0007ed1c) main_mup3_pane_g4

0x6a00,	// (0x0007ed68) main_mup3_pane_g5_ParamLimits

0x6a00,	// (0x0007ed68) main_mup3_pane_g5

0x6a4c,	// (0x0007edb4) main_mup3_pane_g6_ParamLimits

0x6a4c,	// (0x0007edb4) main_mup3_pane_g6

0xc160,	// (0x000844c8) main_mup3_pane_g7_ParamLimits

0xc160,	// (0x000844c8) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x00087af6) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x00087af6) main_mup3_pane_g

0x6ad0,	// (0x0007ee38) main_mup3_pane_t1_ParamLimits

0x6ad0,	// (0x0007ee38) main_mup3_pane_t1

0x6b48,	// (0x0007eeb0) main_mup3_pane_t2_ParamLimits

0x6b48,	// (0x0007eeb0) main_mup3_pane_t2

0x6c1e,	// (0x0007ef86) main_mup3_pane_t4_ParamLimits

0x6c1e,	// (0x0007ef86) main_mup3_pane_t4

0x6c7c,	// (0x0007efe4) main_mup3_pane_t5_ParamLimits

0x6c7c,	// (0x0007efe4) main_mup3_pane_t5

0x6d40,	// (0x0007f0a8) main_mup3_pane_t6_ParamLimits

0x6d40,	// (0x0007f0a8) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x00087b07) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x00087b07) main_mup3_pane_t

0x6dfa,	// (0x0007f162) mup3_progress_pane_ParamLimits

0x6dfa,	// (0x0007f162) mup3_progress_pane

0x6e96,	// (0x0007f1fe) popup_mup3_control_window_ParamLimits

0x6e96,	// (0x0007f1fe) popup_mup3_control_window

0xc16e,	// (0x000844d6) popup_mup3_text_window

0x6ecc,	// (0x0007f234) mup3_progress_pane_t1

0x6eea,	// (0x0007f252) mup3_progress_pane_t2

0xc176,	// (0x000844de) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x00087b14) mup3_progress_pane_t

0xc193,	// (0x000844fb) mup_progress_pane_cp03

0xaade,	// (0x00082e46) bg_tb_trans_pane_cp04

0x6f08,	// (0x0007f270) mup3_volume_pane

0x6f10,	// (0x0007f278) popup_mup3_control_window_g1

0x6f19,	// (0x0007f281) mup3_volume_pane_g1

0x6f22,	// (0x0007f28a) mup3_volume_pane_g2

0x6f2b,	// (0x0007f293) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x00087b1b) mup3_volume_pane_g

0xaade,	// (0x00082e46) bg_tb_trans_pane_cp03

0xc1a3,	// (0x0008450b) popup_mup3_text_window_g1

0xc1ab,	// (0x00084513) popup_mup3_text_window_t1

0xb357,	// (0x000836bf) list_calc_item_pane_g1_ParamLimits

0x64de,	// (0x0007e846) mup_volume_pane_cp_g1

0x6803,	// (0x0007eb6b) main_touch_calib_pane_t3

0x6817,	// (0x0007eb7f) main_touch_calib_pane_t4

0x682d,	// (0x0007eb95) main_touch_calib_pane_t5

0xaae8,	// (0x00082e50) aid_cell_size_toolbar2

0xaaf0,	// (0x00082e58) aid_popup3_width_pane

0xaafc,	// (0x00082e64) aid_zoom_text_msg_primary

0x1d00,	// (0x0007a068) vorec_t7

0xb31b,	// (0x00083683) bg_calc_paper_pane_g1_ParamLimits

0xb327,	// (0x0008368f) bg_calc_paper_pane_g2_ParamLimits

0xb333,	// (0x0008369b) bg_calc_paper_pane_g3_ParamLimits

0xb33f,	// (0x000836a7) bg_calc_paper_pane_g4_ParamLimits

0xb34b,	// (0x000836b3) bg_calc_paper_pane_g5_ParamLimits

0x1788,	// (0x00079af0) bg_calc_paper_pane_g6_ParamLimits

0x179b,	// (0x00079b03) bg_calc_paper_pane_g7_ParamLimits

0x17ae,	// (0x00079b16) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x000874ce) bg_calc_paper_pane_g_ParamLimits

0x17bf,	// (0x00079b27) calc_bg_paper_pane_g9_ParamLimits

0x1e8d,	// (0x0007a1f5) image_qvga_pane_ParamLimits

0x1e8d,	// (0x0007a1f5) image_qvga_pane

0xb208,	// (0x00083570) bg_popup_sub_pane_cp04_ParamLimits

0x3de8,	// (0x0007c150) popup_mup_playback_window_g1_ParamLimits

0x3df4,	// (0x0007c15c) popup_mup_playback_window_t1_ParamLimits

0x3e09,	// (0x0007c171) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0008785a) popup_mup_playback_window_t_ParamLimits

0x61ff,	// (0x0007e567) main_mup2_pane_g3_ParamLimits

0x61ff,	// (0x0007e567) main_mup2_pane_g3

0x217e,	// (0x0007a4e6) popup_toolbar_window_cp04

0x462e,	// (0x0007c996) popup_call2_audio_second_window_g3_ParamLimits

0x462e,	// (0x0007c996) popup_call2_audio_second_window_g3

0x4a38,	// (0x0007cda0) popup_call2_audio_first_window_g4_ParamLimits

0x4a38,	// (0x0007cda0) popup_call2_audio_first_window_g4

0x50b7,	// (0x0007d41f) popup_call2_audio_in_window_g4_ParamLimits

0x50b7,	// (0x0007d41f) popup_call2_audio_in_window_g4

0x3e1e,	// (0x0007c186) aid_area_sk_bg_cut_ParamLimits

0x3e1e,	// (0x0007c186) aid_area_sk_bg_cut

0x3e3c,	// (0x0007c1a4) aid_area_sk_bg_cut_2_ParamLimits

0x3e3c,	// (0x0007c1a4) aid_area_sk_bg_cut_2

0x6603,	// (0x0007e96b) aid_placing_details_win

0x660b,	// (0x0007e973) aid_placing_details_win_2

0xc001,	// (0x00084369) camera2_autofocus_pane_g1_ParamLimits

0x13a3,	// (0x0007970b) popup_fixed_preview_cale_window_ParamLimits

0x13a3,	// (0x0007970b) popup_fixed_preview_cale_window

0x34f8,	// (0x0007b860) navi_slider_pane_g3

0x3501,	// (0x0007b869) navi_slider_pane_g4

0x350a,	// (0x0007b872) navi_slider_pane_g5

0x34f8,	// (0x0007b860) navi_slider_pane_g6

0xba9e,	// (0x00083e06) navi_slider_pane_g7

0x3a7f,	// (0x0007bde7) mup_scale_pane_g3

0x3a88,	// (0x0007bdf0) mup_scale_pane_g4

0x3a91,	// (0x0007bdf9) mup_scale_pane_g5

0x3a9a,	// (0x0007be02) mup_scale_pane_g6

0x3aa3,	// (0x0007be0b) mup_scale_pane_g7

0x34f8,	// (0x0007b860) cams2_slider_pane_g3

0xbc7d,	// (0x00083fe5) cams2_slider_pane_g4

0xbc85,	// (0x00083fed) cams2_slider_pane_g5

0x34f8,	// (0x0007b860) cams2_slider_pane_g6

0xbc8d,	// (0x00083ff5) cams2_slider_pane_g7

0xbebf,	// (0x00084227) camera2_autofocus_pane_cp_g1

0xc1b9,	// (0x00084521) bg_popup_preview_window_pane_cp02_ParamLimits

0xc1b9,	// (0x00084521) bg_popup_preview_window_pane_cp02

0xc1c5,	// (0x0008452d) list_fp_cale_pane_ParamLimits

0xc1c5,	// (0x0008452d) list_fp_cale_pane

0xc1d1,	// (0x00084539) popup_fixed_preview_cale_window_t1_ParamLimits

0xc1d1,	// (0x00084539) popup_fixed_preview_cale_window_t1

0x6f34,	// (0x0007f29c) popup_fixed_preview_cale_window_t2_ParamLimits

0x6f34,	// (0x0007f29c) popup_fixed_preview_cale_window_t2

0x6f49,	// (0x0007f2b1) popup_fixed_preview_cale_window_t3_ParamLimits

0x6f49,	// (0x0007f2b1) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x00087b22) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x00087b22) popup_fixed_preview_cale_window_t

0xc1ef,	// (0x00084557) list_single_fp_cale_pane_ParamLimits

0xc1ef,	// (0x00084557) list_single_fp_cale_pane

0xc207,	// (0x0008456f) list_single_fp_cale_pane_g1_ParamLimits

0xc207,	// (0x0008456f) list_single_fp_cale_pane_g1

0xc213,	// (0x0008457b) list_single_fp_cale_pane_g2_ParamLimits

0xc213,	// (0x0008457b) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x00087b29) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x00087b29) list_single_fp_cale_pane_g

0xc22c,	// (0x00084594) list_single_fp_cale_pane_t1_ParamLimits

0xc22c,	// (0x00084594) list_single_fp_cale_pane_t1

0xc23e,	// (0x000845a6) list_single_fp_cale_pane_t2_ParamLimits

0xc23e,	// (0x000845a6) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x00087b30) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x00087b30) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xaade,	// (0x00082e46) main_dialer_pane

0x6f60,	// (0x0007f2c8) aid_cell_size_keypad

0x6f6a,	// (0x0007f2d2) dialer_ne_pane

0x6f74,	// (0x0007f2dc) grid_dialer_command_1_pane

0x6f7c,	// (0x0007f2e4) grid_dialer_command_2_pane

0x6f84,	// (0x0007f2ec) grid_dialer_keypad_pane

0x6f98,	// (0x0007f300) bg_popup_call_pane_cp06_ParamLimits

0x6f98,	// (0x0007f300) bg_popup_call_pane_cp06

0x6fa4,	// (0x0007f30c) dialer_ne_clear_pane_ParamLimits

0x6fa4,	// (0x0007f30c) dialer_ne_clear_pane

0xc271,	// (0x000845d9) dialer_ne_pane_g1

0xc279,	// (0x000845e1) dialer_ne_pane_t1_ParamLimits

0xc279,	// (0x000845e1) dialer_ne_pane_t1

0x6fb0,	// (0x0007f318) dialer_ne_pane_t2_ParamLimits

0x6fb0,	// (0x0007f318) dialer_ne_pane_t2

0x6fda,	// (0x0007f342) dialer_ne_pane_t3_ParamLimits

0x6fda,	// (0x0007f342) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x00087b35) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x00087b35) dialer_ne_pane_t

0x700a,	// (0x0007f372) dialer_ne_pane_t3_copy1_ParamLimits

0x700a,	// (0x0007f372) dialer_ne_pane_t3_copy1

0x7039,	// (0x0007f3a1) cell_dialer_keypad_pane_ParamLimits

0x7039,	// (0x0007f3a1) cell_dialer_keypad_pane

0x7050,	// (0x0007f3b8) cell_dialer_command_1_pane_ParamLimits

0x7050,	// (0x0007f3b8) cell_dialer_command_1_pane

0x7066,	// (0x0007f3ce) cell_dialer_command_2_pane_ParamLimits

0x7066,	// (0x0007f3ce) cell_dialer_command_2_pane

0xc28b,	// (0x000845f3) bg_button_pane_cp02_ParamLimits

0xc28b,	// (0x000845f3) bg_button_pane_cp02

0x7075,	// (0x0007f3dd) cell_dialer_keypad_pane_g1_ParamLimits

0x7075,	// (0x0007f3dd) cell_dialer_keypad_pane_g1

0xc28b,	// (0x000845f3) bg_button_pane_cp03_ParamLimits

0xc28b,	// (0x000845f3) bg_button_pane_cp03

0x708a,	// (0x0007f3f2) cell_dialer_command_1_pane_g1_ParamLimits

0x708a,	// (0x0007f3f2) cell_dialer_command_1_pane_g1

0xc297,	// (0x000845ff) bg_button_pane_cp04

0x709e,	// (0x0007f406) cell_dialer_command_2_pane_g1

0x34e7,	// (0x0007b84f) bg_button_pane_cp06

0xc29f,	// (0x00084607) dialer_ne_clear_pane_g1

0x3389,	// (0x0007b6f1) navi_pane_g2

0x33b7,	// (0x0007b71f) navi_pane_g3

0x0002,

0xf3f5,	// (0x0008775d) navi_pane_g

0x3446,	// (0x0007b7ae) navi_pane_mv_g2

0x346d,	// (0x0007b7d5) navi_pane_mv_g5

0x3475,	// (0x0007b7dd) navi_pane_mv_t1

0xb2fd,	// (0x00083665) main_clock2_pane

0x70d7,	// (0x0007f43f) main_clock2_list_pane_ParamLimits

0x70d7,	// (0x0007f43f) main_clock2_list_pane

0x7111,	// (0x0007f479) main_clock2_pane_t1_ParamLimits

0x7111,	// (0x0007f479) main_clock2_pane_t1

0x714d,	// (0x0007f4b5) main_clock2_pane_t2_ParamLimits

0x714d,	// (0x0007f4b5) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x00087b3c) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x00087b3c) main_clock2_pane_t

0x71ec,	// (0x0007f554) popup_clock_analogue_window_cp03_ParamLimits

0x71ec,	// (0x0007f554) popup_clock_analogue_window_cp03

0x7213,	// (0x0007f57b) popup_clock_digital_window_cp02_ParamLimits

0x7213,	// (0x0007f57b) popup_clock_digital_window_cp02

0x728e,	// (0x0007f5f6) main_clock2_list_single_pane_ParamLimits

0x728e,	// (0x0007f5f6) main_clock2_list_single_pane

0x34e7,	// (0x0007b84f) list_highlight_pane_cp05

0xc2a7,	// (0x0008460f) main_clock2_list_single_pane_t1

0x217e,	// (0x0007a4e6) popup_toolbar_window_cp04_ParamLimits

0x6672,	// (0x0007e9da) camera2_autofocus_pane_g2_ParamLimits

0x6672,	// (0x0007e9da) camera2_autofocus_pane_g2

0x667e,	// (0x0007e9e6) camera2_autofocus_pane_g3_ParamLimits

0x667e,	// (0x0007e9e6) camera2_autofocus_pane_g3

0x668a,	// (0x0007e9f2) camera2_autofocus_pane_g4_ParamLimits

0x668a,	// (0x0007e9f2) camera2_autofocus_pane_g4

0x6696,	// (0x0007e9fe) camera2_autofocus_pane_g5_ParamLimits

0x6696,	// (0x0007e9fe) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x00087a85) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x00087a85) camera2_autofocus_pane_g

0x68a3,	// (0x0007ec0b) camera2_autofocus_pane_cp_g2

0x68ab,	// (0x0007ec13) camera2_autofocus_pane_cp_g3

0x68b3,	// (0x0007ec1b) camera2_autofocus_pane_cp_g4

0x68bb,	// (0x0007ec23) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x00087aeb) camera2_autofocus_pane_cp_g

0x6f90,	// (0x0007f2f8) popup_dialer_spcha_window

0xaade,	// (0x00082e46) bg_popup_sub_pane_cp07

0xc2b5,	// (0x0008461d) list_spcha_pane

0xc2bd,	// (0x00084625) list_single_spcha_pane_ParamLimits

0xc2bd,	// (0x00084625) list_single_spcha_pane

0xaade,	// (0x00082e46) list_highlight_pane_cp06

0xc2ce,	// (0x00084636) list_single_spcha_pane_t1

0x4e61,	// (0x0007d1c9) popup_call2_audio_out_window_g4_ParamLimits

0x4e61,	// (0x0007d1c9) popup_call2_audio_out_window_g4

0xaade,	// (0x00082e46) main_imed2_pane

0xbb76,	// (0x00083ede) popup_imed_adjust2_window

0x5886,	// (0x0007dbee) popup_imed_trans_window_ParamLimits

0x5886,	// (0x0007dbee) popup_imed_trans_window

0xbcf7,	// (0x0008405f) popup_blid_sat_info2_window_t1

0xbd05,	// (0x0008406d) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x00087a1a) popup_blid_sat_info2_window_t

0x7344,	// (0x0007f6ac) aid_size_cell_colour_35

0x7364,	// (0x0007f6cc) aid_size_cell_colour_112

0x7384,	// (0x0007f6ec) aid_size_cell_effect

0x5745,	// (0x0007daad) bg_tb_trans_pane_cp02

0xe9f4,	// (0x00086d5c) heading_imed_pane

0x73a4,	// (0x0007f70c) listscroll_imed_pane

0xc2dc,	// (0x00084644) heading_imed_pane_g1

0xc2e4,	// (0x0008464c) heading_imed_pane_t1

0xc2f2,	// (0x0008465a) grid_imed_colour_35_pane_ParamLimits

0xc2f2,	// (0x0008465a) grid_imed_colour_35_pane

0x73b0,	// (0x0007f718) grid_imed_effect_pane

0xc30e,	// (0x00084676) list_imed_aspect_pane

0x73c7,	// (0x0007f72f) scroll_pane_cp027_ParamLimits

0x73c7,	// (0x0007f72f) scroll_pane_cp027

0x73d8,	// (0x0007f740) cell_imed_effect_pane_ParamLimits

0x73d8,	// (0x0007f740) cell_imed_effect_pane

0xc316,	// (0x0008467e) cell_imed_colour_pane_ParamLimits

0xc316,	// (0x0008467e) cell_imed_colour_pane

0xc360,	// (0x000846c8) cell_imed_colour_pane_g1_ParamLimits

0xc360,	// (0x000846c8) cell_imed_colour_pane_g1

0xc371,	// (0x000846d9) hgihlgiht_grid_pane_cp016_ParamLimits

0xc371,	// (0x000846d9) hgihlgiht_grid_pane_cp016

0x73fd,	// (0x0007f765) cell_imed_effect_pane_g1

0x7405,	// (0x0007f76d) grid_highlight_pane_cp017

0xc382,	// (0x000846ea) list_imed_single_pane_ParamLimits

0xc382,	// (0x000846ea) list_imed_single_pane

0xaade,	// (0x00082e46) list_highlight_pane_cp07

0xc396,	// (0x000846fe) list_imed_aspect_pane_comp1_t1

0x5745,	// (0x0007daad) bg_tb_trans_pane_cp05

0xc3b8,	// (0x00084720) popup_imed_adjust2_window_g1

0xc3df,	// (0x00084747) popup_imed_adjust2_window_t1

0xc3f7,	// (0x0008475f) slider_imed_adjust_pane

0xc40b,	// (0x00084773) slider_imed_adjust_pane_g1

0xc41b,	// (0x00084783) slider_imed_adjust_pane_g2

0xc42b,	// (0x00084793) slider_imed_adjust_pane_g3

0xc43c,	// (0x000847a4) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x00087b59) slider_imed_adjust_pane_g

0x740e,	// (0x0007f776) aid_size_cell_clipart2

0x741a,	// (0x0007f782) grid_imed_clipart_pane

0xc44d,	// (0x000847b5) scroll_pane_cp031

0x7424,	// (0x0007f78c) cell_imed_clipart_pane_ParamLimits

0x7424,	// (0x0007f78c) cell_imed_clipart_pane

0x7441,	// (0x0007f7a9) cell_imed_clipart_pane_g1

0xaade,	// (0x00082e46) grid_highlight_pane_cp014

0x70ec,	// (0x0007f454) main_clock2_pane_g1_ParamLimits

0x70ec,	// (0x0007f454) main_clock2_pane_g1

0x7235,	// (0x0007f59d) aid_call2_pane_cp10

0x7247,	// (0x0007f5af) aid_call_pane_cp10

0x3281,	// (0x0007b5e9) popup_clock_analogue_window_cp10_g1

0x3281,	// (0x0007b5e9) popup_clock_analogue_window_cp10_g2

0x7259,	// (0x0007f5c1) popup_clock_analogue_window_cp10_g3

0x7259,	// (0x0007f5c1) popup_clock_analogue_window_cp10_g4

0x3281,	// (0x0007b5e9) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x00087b47) popup_clock_analogue_window_cp10_g

0x726f,	// (0x0007f5d7) popup_clock_analogue_window_cp10_t1

0x72a0,	// (0x0007f608) clock_digital_number_pane_cp10_ParamLimits

0x72a0,	// (0x0007f608) clock_digital_number_pane_cp10

0x72ba,	// (0x0007f622) clock_digital_number_pane_cp11_ParamLimits

0x72ba,	// (0x0007f622) clock_digital_number_pane_cp11

0x72d4,	// (0x0007f63c) clock_digital_number_pane_cp12_ParamLimits

0x72d4,	// (0x0007f63c) clock_digital_number_pane_cp12

0x72ee,	// (0x0007f656) clock_digital_number_pane_cp13_ParamLimits

0x72ee,	// (0x0007f656) clock_digital_number_pane_cp13

0x7308,	// (0x0007f670) clock_digital_separator_pane_cp10_ParamLimits

0x7308,	// (0x0007f670) clock_digital_separator_pane_cp10

0x7322,	// (0x0007f68a) popup_clock_digital_window_cp02_t1_ParamLimits

0x7322,	// (0x0007f68a) popup_clock_digital_window_cp02_t1

0xb200,	// (0x00083568) clock_digital_number_pane_cp10_g1

0xb200,	// (0x00083568) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x00087b62) clock_digital_number_pane_cp10_g

0xb200,	// (0x00083568) clock_digital_separator_pane_cp10_g1

0xb200,	// (0x00083568) clock_digital_separator_pane_g2_cp10

0x34b7,	// (0x0007b81f) navi_pane_vded_g4

0x34c0,	// (0x0007b828) navi_pane_vded_g5

0x34c9,	// (0x0007b831) navi_pane_vded_t1

0xaade,	// (0x00082e46) main_vded_pane

0x744a,	// (0x0007f7b2) main_vded_pane_g1

0x7456,	// (0x0007f7be) main_vded_pane_g2

0x7462,	// (0x0007f7ca) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x00087b67) main_vded_pane_g

0x746e,	// (0x0007f7d6) main_vded_pane_t1

0x747c,	// (0x0007f7e4) main_vded_pane_t2

0x0001,

0xf806,	// (0x00087b6e) main_vded_pane_t

0x748a,	// (0x0007f7f2) vded_slider_pane

0x7494,	// (0x0007f7fc) vded_video_pane

0xc455,	// (0x000847bd) vded_video_pane_g1

0x74a0,	// (0x0007f808) vded_video_pane_g2

0xbebf,	// (0x00084227) vded_video_pane_g3

0x0002,

0xf80b,	// (0x00087b73) vded_video_pane_g

0xc45f,	// (0x000847c7) vded_slider_pane_g1

0x64de,	// (0x0007e846) vded_slider_pane_g2

0xc468,	// (0x000847d0) vded_slider_pane_g3

0xc471,	// (0x000847d9) vded_slider_pane_g4

0xc47a,	// (0x000847e2) vded_slider_pane_g5

0x0004,

0xf812,	// (0x00087b7a) vded_slider_pane_g

0x6e80,	// (0x0007f1e8) mup3_rocker_pane_ParamLimits

0x6e80,	// (0x0007f1e8) mup3_rocker_pane

0x74a9,	// (0x0007f811) mup3_control_keys_pane_g1

0x74b1,	// (0x0007f819) mup3_control_keys_pane_g2

0x74b9,	// (0x0007f821) mup3_control_keys_pane_g3

0x74c1,	// (0x0007f829) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x00087b85) mup3_control_keys_pane_g

0x13da,	// (0x00079742) popup_toolbar2_fixed_window_cp01_ParamLimits

0x13da,	// (0x00079742) popup_toolbar2_fixed_window_cp01

0x6eb6,	// (0x0007f21e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6eb6,	// (0x0007f21e) popup_toolbar2_fixed_window_cp02

0x47a0,	// (0x0007cb08) popup_call2_audio_second_window_t4_ParamLimits

0x47a0,	// (0x0007cb08) popup_call2_audio_second_window_t4

0x4cce,	// (0x0007d036) popup_call2_audio_first_window_t6_ParamLimits

0x4cce,	// (0x0007d036) popup_call2_audio_first_window_t6

0x4f64,	// (0x0007d2cc) popup_call2_audio_out_window_t6_ParamLimits

0x4f64,	// (0x0007d2cc) popup_call2_audio_out_window_t6

0xaade,	// (0x00082e46) main_vitu_pane

0x74d1,	// (0x0007f839) aid_size_cell_itu_ParamLimits

0x74d1,	// (0x0007f839) aid_size_cell_itu

0xab57,	// (0x00082ebf) bg_popup_window_pane_cp08_ParamLimits

0xab57,	// (0x00082ebf) bg_popup_window_pane_cp08

0x74e7,	// (0x0007f84f) field_vitu_entry_pane_ParamLimits

0x74e7,	// (0x0007f84f) field_vitu_entry_pane

0x74fe,	// (0x0007f866) grid_vitu_function_pane_ParamLimits

0x74fe,	// (0x0007f866) grid_vitu_function_pane

0x7519,	// (0x0007f881) grid_vitu_itu_pane_ParamLimits

0x7519,	// (0x0007f881) grid_vitu_itu_pane

0x7535,	// (0x0007f89d) cell_vitu_itu_pane_ParamLimits

0x7535,	// (0x0007f89d) cell_vitu_itu_pane

0x755b,	// (0x0007f8c3) cell_vitu_function_pane_ParamLimits

0x755b,	// (0x0007f8c3) cell_vitu_function_pane

0xab57,	// (0x00082ebf) bg_popup_sub_pane_cp08_ParamLimits

0xab57,	// (0x00082ebf) bg_popup_sub_pane_cp08

0x7576,	// (0x0007f8de) field_vitu_entry_pane_t1_ParamLimits

0x7576,	// (0x0007f8de) field_vitu_entry_pane_t1

0xc49b,	// (0x00084803) field_vitu_entry_pane_t2_ParamLimits

0xc49b,	// (0x00084803) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x00087b93) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x00087b93) field_vitu_entry_pane_t

0xc4b8,	// (0x00084820) bg_button_pane_cp05_ParamLimits

0xc4b8,	// (0x00084820) bg_button_pane_cp05

0x7596,	// (0x0007f8fe) cell_vitu_itu_pane_g1

0x75ae,	// (0x0007f916) cell_vitu_itu_pane_t1_ParamLimits

0x75ae,	// (0x0007f916) cell_vitu_itu_pane_t1

0x75c0,	// (0x0007f928) cell_vitu_itu_pane_t2_ParamLimits

0x75c0,	// (0x0007f928) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x00087b98) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x00087b98) cell_vitu_itu_pane_t

0xc4c6,	// (0x0008482e) bg_button_pane_cp07

0x75f5,	// (0x0007f95d) cell_vitu_function_pane_g1

0xb28f,	// (0x000835f7) main_calc_pane_g1

0x1215,	// (0x0007957d) aid_visual_content_pane

0xaade,	// (0x00082e46) main_vradio_pane

0x75fe,	// (0x0007f966) main_vradio_pane_g1_ParamLimits

0x75fe,	// (0x0007f966) main_vradio_pane_g1

0xc4d0,	// (0x00084838) main_vradio_pane_g2_ParamLimits

0xc4d0,	// (0x00084838) main_vradio_pane_g2

0x0001,

0xf837,	// (0x00087b9f) main_vradio_pane_g_ParamLimits

0xf837,	// (0x00087b9f) main_vradio_pane_g

0x7615,	// (0x0007f97d) main_vradio_pane_t1_ParamLimits

0x7615,	// (0x0007f97d) main_vradio_pane_t1

0x762a,	// (0x0007f992) main_vradio_pane_t2_ParamLimits

0x762a,	// (0x0007f992) main_vradio_pane_t2

0xc4dd,	// (0x00084845) main_vradio_pane_t3_ParamLimits

0xc4dd,	// (0x00084845) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x00087ba4) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x00087ba4) main_vradio_pane_t

0x763f,	// (0x0007f9a7) vradio_rocker_control_pane_ParamLimits

0x763f,	// (0x0007f9a7) vradio_rocker_control_pane

0x7651,	// (0x0007f9b9) vradio_station_info_pane_ParamLimits

0x7651,	// (0x0007f9b9) vradio_station_info_pane

0xc4f1,	// (0x00084859) vradio_frequency_info_pane_ParamLimits

0xc4f1,	// (0x00084859) vradio_frequency_info_pane

0xbebf,	// (0x00084227) vradio_station_info_pane_g1

0xc500,	// (0x00084868) vradio_station_info_pane_t1_ParamLimits

0xc500,	// (0x00084868) vradio_station_info_pane_t1

0xc522,	// (0x0008488a) vradio_station_info_pane_t2_ParamLimits

0xc522,	// (0x0008488a) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x00087bab) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x00087bab) vradio_station_info_pane_t

0xc534,	// (0x0008489c) vradio_tuning_pane

0xc53c,	// (0x000848a4) vradio_rocker_control_pane_g1

0xc544,	// (0x000848ac) vradio_rocker_control_pane_g2

0xc54c,	// (0x000848b4) vradio_rocker_control_pane_g3

0xc554,	// (0x000848bc) vradio_rocker_control_pane_g4

0xc55c,	// (0x000848c4) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x00087bb0) vradio_rocker_control_pane_g

0x7661,	// (0x0007f9c9) vradio_frequency_info_pane_g1

0xc564,	// (0x000848cc) vradio_frequency_info_pane_t1_ParamLimits

0xc564,	// (0x000848cc) vradio_frequency_info_pane_t1

0x766b,	// (0x0007f9d3) vradio_tuning_pane_g1

0x7676,	// (0x0007f9de) vradio_tuning_pane_t1

0xab14,	// (0x00082e7c) area_side_right_pane_ParamLimits

0xab14,	// (0x00082e7c) area_side_right_pane

0x56ee,	// (0x0007da56) status_small_pane_g1

0x56f6,	// (0x0007da5e) status_small_pane_g2

0x56ff,	// (0x0007da67) status_small_pane_g3

0x5708,	// (0x0007da70) status_small_pane_g4

0x0003,

0xf608,	// (0x00087970) status_small_pane_g

0x5711,	// (0x0007da79) status_small_pane_t1

0xaade,	// (0x00082e46) main_video3_pane

0xc578,	// (0x000848e0) cams_zoom_vslider_pane

0xc580,	// (0x000848e8) image3_wide_pane_ParamLimits

0xc580,	// (0x000848e8) image3_wide_pane

0xc59a,	// (0x00084902) image3_wide_small_pane

0xc5a6,	// (0x0008490e) main_video3_pane_g1_ParamLimits

0xc5a6,	// (0x0008490e) main_video3_pane_g1

0xc5c2,	// (0x0008492a) main_video3_pane_g2_ParamLimits

0xc5c2,	// (0x0008492a) main_video3_pane_g2

0x0001,

0xf853,	// (0x00087bbb) main_video3_pane_g_ParamLimits

0xf853,	// (0x00087bbb) main_video3_pane_g

0xc5de,	// (0x00084946) main_video3_pane_t1_ParamLimits

0xc5de,	// (0x00084946) main_video3_pane_t1

0xc609,	// (0x00084971) main_video3_pane_t2_ParamLimits

0xc609,	// (0x00084971) main_video3_pane_t2

0xc636,	// (0x0008499e) main_video3_pane_t3_ParamLimits

0xc636,	// (0x0008499e) main_video3_pane_t3

0x0002,

0xf858,	// (0x00087bc0) main_video3_pane_t_ParamLimits

0xf858,	// (0x00087bc0) main_video3_pane_t

0xc663,	// (0x000849cb) cams_zoom_vslider_pane_g1

0xc66c,	// (0x000849d4) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x00087bc7) cams_zoom_vslider_pane_g

0xc674,	// (0x000849dc) small_slider_vertical_pane

0xbebf,	// (0x00084227) small_slider_vertical_pane_g1

0xbebf,	// (0x00084227) small_slider_vertical_pane_g2

0xc67c,	// (0x000849e4) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x00087bcc) small_slider_vertical_pane_g

0xaade,	// (0x00082e46) main_hwr_training_pane

0xc685,	// (0x000849ed) hwr_training_instruct_pane_ParamLimits

0xc685,	// (0x000849ed) hwr_training_instruct_pane

0x7685,	// (0x0007f9ed) hwr_training_navi_pane_ParamLimits

0x7685,	// (0x0007f9ed) hwr_training_navi_pane

0x76a4,	// (0x0007fa0c) hwr_training_write_pane_ParamLimits

0x76a4,	// (0x0007fa0c) hwr_training_write_pane

0xaade,	// (0x00082e46) bg_frame_shadow_pane

0xc6bc,	// (0x00084a24) hwr_training_write_pane_g1

0xc6c4,	// (0x00084a2c) hwr_training_write_pane_g2

0xc6cc,	// (0x00084a34) hwr_training_write_pane_g3

0xc6d4,	// (0x00084a3c) hwr_training_write_pane_g4

0xc6dc,	// (0x00084a44) hwr_training_write_pane_g5

0xc6e4,	// (0x00084a4c) hwr_training_write_pane_g6

0xc6ec,	// (0x00084a54) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x00087bd3) hwr_training_write_pane_g

0xec46,	// (0x00086fae) hwr_training_navi_pane_g1_ParamLimits

0xec46,	// (0x00086fae) hwr_training_navi_pane_g1

0xec58,	// (0x00086fc0) hwr_training_navi_pane_g2_ParamLimits

0xec58,	// (0x00086fc0) hwr_training_navi_pane_g2

0xec6a,	// (0x00086fd2) hwr_training_navi_pane_g3_ParamLimits

0xec6a,	// (0x00086fd2) hwr_training_navi_pane_g3

0xec7a,	// (0x00086fe2) hwr_training_navi_pane_g4_ParamLimits

0xec7a,	// (0x00086fe2) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x00087be2) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x00087be2) hwr_training_navi_pane_g

0xec87,	// (0x00086fef) hwr_training_navi_pane_t1

0x76ec,	// (0x0007fa54) list_single_hwr_training_instruct_pane_ParamLimits

0x76ec,	// (0x0007fa54) list_single_hwr_training_instruct_pane

0xc6f4,	// (0x00084a5c) list_single_hwr_training_instruct_pane_t1

0xbdff,	// (0x00084167) bg_frame_shadow_pane_g1

0xc703,	// (0x00084a6b) bg_frame_shadow_pane_g2

0xc70b,	// (0x00084a73) bg_frame_shadow_pane_g3

0xc713,	// (0x00084a7b) bg_frame_shadow_pane_g4

0xc71b,	// (0x00084a83) bg_frame_shadow_pane_g5

0xc723,	// (0x00084a8b) bg_frame_shadow_pane_g6

0xc72b,	// (0x00084a93) bg_frame_shadow_pane_g7

0xb3f6,	// (0x0008375e) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x00087bed) bg_frame_shadow_pane_g

0xaade,	// (0x00082e46) main_video_tele_dialer_pane

0x7708,	// (0x0007fa70) aid_size_cell_video_keypad_ParamLimits

0x7708,	// (0x0007fa70) aid_size_cell_video_keypad

0x7722,	// (0x0007fa8a) grid_video_dialer_keypad_pane_ParamLimits

0x7722,	// (0x0007fa8a) grid_video_dialer_keypad_pane

0x776e,	// (0x0007fad6) video_down_pane_cp_ParamLimits

0x776e,	// (0x0007fad6) video_down_pane_cp

0x779e,	// (0x0007fb06) cell_video_dialer_keypad_pane_ParamLimits

0x779e,	// (0x0007fb06) cell_video_dialer_keypad_pane

0xc733,	// (0x00084a9b) bg_button_pane_cp08_ParamLimits

0xc733,	// (0x00084a9b) bg_button_pane_cp08

0x77c4,	// (0x0007fb2c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x77c4,	// (0x0007fb2c) cell_video_dialer_keypad_pane_g1

0x6e6a,	// (0x0007f1d2) mup3_rocker2_pane_ParamLimits

0x6e6a,	// (0x0007f1d2) mup3_rocker2_pane

0xbebf,	// (0x00084227) mup3_rocker2_pane_g1

0x5753,	// (0x0007dabb) main_dialer2_pane

0xaade,	// (0x00082e46) main_mp4_pane

0xec9d,	// (0x00087005) main_mp4_pane_g1_ParamLimits

0xec9d,	// (0x00087005) main_mp4_pane_g1

0xec9d,	// (0x00087005) main_mp4_pane_g2_ParamLimits

0xec9d,	// (0x00087005) main_mp4_pane_g2

0x77ff,	// (0x0007fb67) main_mp4_pane_g3_ParamLimits

0x77ff,	// (0x0007fb67) main_mp4_pane_g3

0xecab,	// (0x00087013) main_mp4_pane_g4_ParamLimits

0xecab,	// (0x00087013) main_mp4_pane_g4

0xecd3,	// (0x0008703b) main_mp4_pane_g5_ParamLimits

0xecd3,	// (0x0008703b) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x00087c0d) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x00087c0d) main_mp4_pane_g

0xed23,	// (0x0008708b) main_mp4_pane_t1_ParamLimits

0xed23,	// (0x0008708b) main_mp4_pane_t1

0xed7f,	// (0x000870e7) main_mp4_pane_t2_ParamLimits

0xed7f,	// (0x000870e7) main_mp4_pane_t2

0xc73f,	// (0x00084aa7) main_mp4_pane_t3_ParamLimits

0xc73f,	// (0x00084aa7) main_mp4_pane_t3

0xedd1,	// (0x00087139) main_mp4_pane_t4_ParamLimits

0xedd1,	// (0x00087139) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x00087c1a) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x00087c1a) main_mp4_pane_t

0xee11,	// (0x00087179) mp4_progress_pane_ParamLimits

0xee11,	// (0x00087179) mp4_progress_pane

0xee5b,	// (0x000871c3) mp4_rocker_pane_ParamLimits

0xee5b,	// (0x000871c3) mp4_rocker_pane

0xc767,	// (0x00084acf) mp4_progress_pane_t1

0xc780,	// (0x00084ae8) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x00087c23) mp4_progress_pane_t

0xc799,	// (0x00084b01) mup_progress_pane_cp04

0xbebf,	// (0x00084227) mp4_rocker_pane_g1

0x7849,	// (0x0007fbb1) aid_cell_size_keypad2_ParamLimits

0x7849,	// (0x0007fbb1) aid_cell_size_keypad2

0x785f,	// (0x0007fbc7) dialer2_ne_pane_ParamLimits

0x785f,	// (0x0007fbc7) dialer2_ne_pane

0x7877,	// (0x0007fbdf) grid_dialer2_keypad_pane_ParamLimits

0x7877,	// (0x0007fbdf) grid_dialer2_keypad_pane

0xbc9e,	// (0x00084006) bg_popup_call_pane_cp07_ParamLimits

0xbc9e,	// (0x00084006) bg_popup_call_pane_cp07

0x7893,	// (0x0007fbfb) dialer2_ne_pane_t1_ParamLimits

0x7893,	// (0x0007fbfb) dialer2_ne_pane_t1

0x78d3,	// (0x0007fc3b) cell_dialer2_keypad_pane_ParamLimits

0x78d3,	// (0x0007fc3b) cell_dialer2_keypad_pane

0xc7b7,	// (0x00084b1f) bg_button_pane_pane_cp04_ParamLimits

0xc7b7,	// (0x00084b1f) bg_button_pane_pane_cp04

0x78f9,	// (0x0007fc61) cell_dialer2_keypad_pane_g1_ParamLimits

0x78f9,	// (0x0007fc61) cell_dialer2_keypad_pane_g1

0x2065,	// (0x0007a3cd) aid_placing_vt_set_content_ParamLimits

0x2065,	// (0x0007a3cd) aid_placing_vt_set_content

0x2089,	// (0x0007a3f1) aid_placing_vt_set_title_ParamLimits

0x2089,	// (0x0007a3f1) aid_placing_vt_set_title

0xaade,	// (0x00082e46) main_image3_pane

0x79bf,	// (0x0007fd27) area_side_right_pane_cp01_ParamLimits

0x79bf,	// (0x0007fd27) area_side_right_pane_cp01

0xec9d,	// (0x00087005) main_image3_pane_g1_ParamLimits

0xec9d,	// (0x00087005) main_image3_pane_g1

0x79d8,	// (0x0007fd40) main_image3_pane_g2_ParamLimits

0x79d8,	// (0x0007fd40) main_image3_pane_g2

0x7a00,	// (0x0007fd68) main_image3_pane_g3_ParamLimits

0x7a00,	// (0x0007fd68) main_image3_pane_g3

0x7a2a,	// (0x0007fd92) main_image3_pane_g4_ParamLimits

0x7a2a,	// (0x0007fd92) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x00087c32) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x00087c32) main_image3_pane_g

0x7a54,	// (0x0007fdbc) main_image3_pane_t1_ParamLimits

0x7a54,	// (0x0007fdbc) main_image3_pane_t1

0x7aac,	// (0x0007fe14) main_image3_pane_t2_ParamLimits

0x7aac,	// (0x0007fe14) main_image3_pane_t2

0x7afe,	// (0x0007fe66) main_image3_pane_t3_ParamLimits

0x7afe,	// (0x0007fe66) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x00087c3b) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x00087c3b) main_image3_pane_t

0xab57,	// (0x00082ebf) grid_sctrl_middle_pane_cp01_ParamLimits

0xab57,	// (0x00082ebf) grid_sctrl_middle_pane_cp01

0x7b86,	// (0x0007feee) cell_sctrl_middle_pane_cp01_ParamLimits

0x7b86,	// (0x0007feee) cell_sctrl_middle_pane_cp01

0x7ba3,	// (0x0007ff0b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7ba3,	// (0x0007ff0b) cell_sctrl_middle_pane_cp01_g1

0xaade,	// (0x00082e46) main_call4_pane

0x7bb8,	// (0x0007ff20) aid_size_button_call4_ParamLimits

0x7bb8,	// (0x0007ff20) aid_size_button_call4

0x7beb,	// (0x0007ff53) call4_windows_pane_ParamLimits

0x7beb,	// (0x0007ff53) call4_windows_pane

0x7c0d,	// (0x0007ff75) grid_call4_button_pane_ParamLimits

0x7c0d,	// (0x0007ff75) grid_call4_button_pane

0xc7c3,	// (0x00084b2b) call4_windows_conf_pane

0x7c38,	// (0x0007ffa0) popup_call4_audio_first_window_ParamLimits

0x7c38,	// (0x0007ffa0) popup_call4_audio_first_window

0x7c64,	// (0x0007ffcc) popup_call4_audio_second_window_ParamLimits

0x7c64,	// (0x0007ffcc) popup_call4_audio_second_window

0xc800,	// (0x00084b68) popup_call4_audio_wait_window_ParamLimits

0xc800,	// (0x00084b68) popup_call4_audio_wait_window

0x7c7a,	// (0x0007ffe2) cell_call4_button_pane_ParamLimits

0x7c7a,	// (0x0007ffe2) cell_call4_button_pane

0x7ca1,	// (0x00080009) bg_button_pane_cp09_ParamLimits

0x7ca1,	// (0x00080009) bg_button_pane_cp09

0x7cad,	// (0x00080015) cell_call4_button_pane_g1_ParamLimits

0x7cad,	// (0x00080015) cell_call4_button_pane_g1

0x7cd3,	// (0x0008003b) cell_call4_button_pane_t1_ParamLimits

0x7cd3,	// (0x0008003b) cell_call4_button_pane_t1

0xc848,	// (0x00084bb0) popup_call4_audio_conf_window_ParamLimits

0xc848,	// (0x00084bb0) popup_call4_audio_conf_window

0x6ecc,	// (0x0007f234) mup3_progress_pane_t1_ParamLimits

0x6eea,	// (0x0007f252) mup3_progress_pane_t2_ParamLimits

0xc176,	// (0x000844de) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x00087b14) mup3_progress_pane_t_ParamLimits

0xc193,	// (0x000844fb) mup_progress_pane_cp03_ParamLimits

0x74c9,	// (0x0007f831) mup3_control_keys_pane_g4_copy1

0xee3f,	// (0x000871a7) mp4_rocker2_pane_ParamLimits

0xee3f,	// (0x000871a7) mp4_rocker2_pane

0xc862,	// (0x00084bca) mp4_rocker2_pane_g1

0xc86a,	// (0x00084bd2) mp4_rocker2_pane_g2

0xeeb1,	// (0x00087219) mp4_rocker2_pane_g3

0xeeb9,	// (0x00087221) mp4_rocker2_pane_g4

0xeec1,	// (0x00087229) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x00087c44) mp4_rocker2_pane_g

0xaade,	// (0x00082e46) main_camera4_pane

0xaade,	// (0x00082e46) main_video4_pane

0x773c,	// (0x0007faa4) main_video_tele_dialer_pane_t1_ParamLimits

0x773c,	// (0x0007faa4) main_video_tele_dialer_pane_t1

0x7755,	// (0x0007fabd) main_video_tele_dialer_pane_t2_ParamLimits

0x7755,	// (0x0007fabd) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x00087bfe) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x00087bfe) main_video_tele_dialer_pane_t

0x7d11,	// (0x00080079) cam4_autofocus_pane_ParamLimits

0x7d11,	// (0x00080079) cam4_autofocus_pane

0x7d27,	// (0x0008008f) cam4_image_uncrop_pane_ParamLimits

0x7d27,	// (0x0008008f) cam4_image_uncrop_pane

0x7d40,	// (0x000800a8) cam4_indicators_pane_ParamLimits

0x7d40,	// (0x000800a8) cam4_indicators_pane

0x7d6f,	// (0x000800d7) main_camera4_pane_g1_ParamLimits

0x7d6f,	// (0x000800d7) main_camera4_pane_g1

0x7d81,	// (0x000800e9) main_camera4_pane_g2_ParamLimits

0x7d81,	// (0x000800e9) main_camera4_pane_g2

0x7d94,	// (0x000800fc) main_camera4_pane_g3_ParamLimits

0x7d94,	// (0x000800fc) main_camera4_pane_g3

0x7da7,	// (0x0008010f) main_camera4_pane_g4_ParamLimits

0x7da7,	// (0x0008010f) main_camera4_pane_g4

0x7dba,	// (0x00080122) main_camera4_pane_g5_ParamLimits

0x7dba,	// (0x00080122) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x00087c4f) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x00087c4f) main_camera4_pane_g

0x7dde,	// (0x00080146) main_camera4_pane_t1_ParamLimits

0x7dde,	// (0x00080146) main_camera4_pane_t1

0xc0ef,	// (0x00084457) bg_tb_trans_pane_cp06

0xeeef,	// (0x00087257) cam4_indicators_pane_g1

0xef00,	// (0x00087268) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x00087c6a) cam4_indicators_pane_g

0xef18,	// (0x00087280) cam4_indicators_pane_t1

0x7e42,	// (0x000801aa) main_video4_pane_g1_ParamLimits

0x7e42,	// (0x000801aa) main_video4_pane_g1

0x7e51,	// (0x000801b9) main_video4_pane_g2_ParamLimits

0x7e51,	// (0x000801b9) main_video4_pane_g2

0x7e60,	// (0x000801c8) main_video4_pane_g3_ParamLimits

0x7e60,	// (0x000801c8) main_video4_pane_g3

0x7e6f,	// (0x000801d7) main_video4_pane_g4_ParamLimits

0x7e6f,	// (0x000801d7) main_video4_pane_g4

0x0004,

0xf909,	// (0x00087c71) main_video4_pane_g_ParamLimits

0xf909,	// (0x00087c71) main_video4_pane_g

0x7e8d,	// (0x000801f5) vid4_indicators_pane_ParamLimits

0x7e8d,	// (0x000801f5) vid4_indicators_pane

0x7ebb,	// (0x00080223) video4_image_uncrop_cif_pane_ParamLimits

0x7ebb,	// (0x00080223) video4_image_uncrop_cif_pane

0x7ed5,	// (0x0008023d) video4_image_uncrop_nhd_pane_ParamLimits

0x7ed5,	// (0x0008023d) video4_image_uncrop_nhd_pane

0x7d27,	// (0x0008008f) video4_image_uncrop_vga_pane_ParamLimits

0x7d27,	// (0x0008008f) video4_image_uncrop_vga_pane

0xab57,	// (0x00082ebf) bg_tb_trans_pane_cp07

0xef46,	// (0x000872ae) vid4_indicators_pane_g1

0xef5c,	// (0x000872c4) vid4_indicators_pane_g2

0xef70,	// (0x000872d8) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x00087c7c) vid4_indicators_pane_g

0xefa1,	// (0x00087309) vid4_indicators_pane_t1

0x7eeb,	// (0x00080253) cam4_autofocus_pane_g1

0x7ef3,	// (0x0008025b) cam4_autofocus_pane_g2

0x7efb,	// (0x00080263) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x00087c87) cam4_autofocus_pane_g

0x7f03,	// (0x0008026b) cam4_autofocus_pane_g3_copy1

0x7782,	// (0x0007faea) video_down_pane_cp_t1

0x7790,	// (0x0007faf8) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x00087c03) video_down_pane_cp_t

0xab57,	// (0x00082ebf) popup_vitu2_window_ParamLimits

0xab57,	// (0x00082ebf) popup_vitu2_window

0x7f0b,	// (0x00080273) aid_size_cell2_itu2_ParamLimits

0x7f0b,	// (0x00080273) aid_size_cell2_itu2

0x7f31,	// (0x00080299) aid_size_cell_itu2_ParamLimits

0x7f31,	// (0x00080299) aid_size_cell_itu2

0x7f8f,	// (0x000802f7) bg_popup_window_pane_cp09_ParamLimits

0x7f8f,	// (0x000802f7) bg_popup_window_pane_cp09

0x7f9d,	// (0x00080305) field_vitu2_entry_pane_ParamLimits

0x7f9d,	// (0x00080305) field_vitu2_entry_pane

0x7fc5,	// (0x0008032d) grid_vitu2_function_pane_ParamLimits

0x7fc5,	// (0x0008032d) grid_vitu2_function_pane

0x8016,	// (0x0008037e) grid_vitu2_itu_pane_ParamLimits

0x8016,	// (0x0008037e) grid_vitu2_itu_pane

0x80a1,	// (0x00080409) cell_vitu2_itu_pane_ParamLimits

0x80a1,	// (0x00080409) cell_vitu2_itu_pane

0x80c7,	// (0x0008042f) cell_vitu2_function_pane_ParamLimits

0x80c7,	// (0x0008042f) cell_vitu2_function_pane

0xc886,	// (0x00084bee) bg_popup_call_pane_cp08_ParamLimits

0xc886,	// (0x00084bee) bg_popup_call_pane_cp08

0xc89f,	// (0x00084c07) field_vitu2_entry_pane_g1

0xc8ab,	// (0x00084c13) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x00087c8e) field_vitu2_entry_pane_g

0x0836,	// (0x00078b9e) field_vitu2_entry_pane_t1_ParamLimits

0x0836,	// (0x00078b9e) field_vitu2_entry_pane_t1

0xc8c5,	// (0x00084c2d) field_vitu2_entry_pane_t2_ParamLimits

0xc8c5,	// (0x00084c2d) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x00087c95) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x00087c95) field_vitu2_entry_pane_t

0x810b,	// (0x00080473) bg_button_pane_cp010_ParamLimits

0x810b,	// (0x00080473) bg_button_pane_cp010

0x8119,	// (0x00080481) cell_vitu2_itu_pane_g1

0x8137,	// (0x0008049f) cell_vitu2_itu_pane_t1_ParamLimits

0x8137,	// (0x0008049f) cell_vitu2_itu_pane_t1

0x0864,	// (0x00078bcc) cell_vitu2_itu_pane_t2_ParamLimits

0x0864,	// (0x00078bcc) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x00087c9f) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x00087c9f) cell_vitu2_itu_pane_t

0xab57,	// (0x00082ebf) bg_button_pane_cp011

0x819d,	// (0x00080505) cell_vitu2_function_pane_g1

0xaade,	// (0x00082e46) main_myfav_hc_pane

0x7b4e,	// (0x0007feb6) popup_image3_note_pane_ParamLimits

0x7b4e,	// (0x0007feb6) popup_image3_note_pane

0x7b6a,	// (0x0007fed2) popup_image3_tool_bar_pane_ParamLimits

0x7b6a,	// (0x0007fed2) popup_image3_tool_bar_pane

0x08e8,	// (0x00078c50) cell_vitu2_itu_pane_t3_ParamLimits

0x08e8,	// (0x00078c50) cell_vitu2_itu_pane_t3

0xaade,	// (0x00082e46) bg_popup_trans_pane

0xc8ea,	// (0x00084c52) grid_image3_tool_bar_pane

0xc8f4,	// (0x00084c5c) bg_popup_trans_pane_g1

0xb84b,	// (0x00083bb3) bg_popup_trans_pane_g2

0xc8fc,	// (0x00084c64) bg_popup_trans_pane_g3

0xc904,	// (0x00084c6c) bg_popup_trans_pane_g4

0xc90c,	// (0x00084c74) bg_popup_trans_pane_g5

0xc914,	// (0x00084c7c) bg_popup_trans_pane_g6

0xc91c,	// (0x00084c84) bg_popup_trans_pane_g7

0xc924,	// (0x00084c8c) bg_popup_trans_pane_g8

0xb82b,	// (0x00083b93) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x00087ca6) bg_popup_trans_pane_g

0xc92c,	// (0x00084c94) cell_image3_tool_bar_pane_ParamLimits

0xc92c,	// (0x00084c94) cell_image3_tool_bar_pane

0xbebf,	// (0x00084227) cell_image3_tool_bar_pane_g1

0xaade,	// (0x00082e46) bg_popup_trans_pane_cp1

0xc942,	// (0x00084caa) popup_image3_note_pane_t1

0xc950,	// (0x00084cb8) popup_image3_note_pane_t2

0xc95e,	// (0x00084cc6) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x00087cb9) popup_image3_note_pane_t

0xc96e,	// (0x00084cd6) popup_image3_note_pane_t3_copy1

0x81b1,	// (0x00080519) bg_myfav_hc_instruction_pane_ParamLimits

0x81b1,	// (0x00080519) bg_myfav_hc_instruction_pane

0x81c9,	// (0x00080531) cell_myfav_contact_pane_ParamLimits

0x81c9,	// (0x00080531) cell_myfav_contact_pane

0x81e5,	// (0x0008054d) cell_myfav_contact_pane_cp1_ParamLimits

0x81e5,	// (0x0008054d) cell_myfav_contact_pane_cp1

0x81fd,	// (0x00080565) cell_myfav_contact_pane_cp2_ParamLimits

0x81fd,	// (0x00080565) cell_myfav_contact_pane_cp2

0x8215,	// (0x0008057d) cell_myfav_contact_pane_cp3_ParamLimits

0x8215,	// (0x0008057d) cell_myfav_contact_pane_cp3

0x822c,	// (0x00080594) cell_myfav_contact_pane_cp4_ParamLimits

0x822c,	// (0x00080594) cell_myfav_contact_pane_cp4

0x8244,	// (0x000805ac) cell_myfav_contact_pane_cp5_ParamLimits

0x8244,	// (0x000805ac) cell_myfav_contact_pane_cp5

0x8258,	// (0x000805c0) cell_myfav_contact_pane_cp6_ParamLimits

0x8258,	// (0x000805c0) cell_myfav_contact_pane_cp6

0x826e,	// (0x000805d6) cell_myfav_contact_pane_cp7_ParamLimits

0x826e,	// (0x000805d6) cell_myfav_contact_pane_cp7

0xc97c,	// (0x00084ce4) listscroll_gen_pane_cp05

0x8286,	// (0x000805ee) main_myfav_hc_pane_g1_ParamLimits

0x8286,	// (0x000805ee) main_myfav_hc_pane_g1

0x82a0,	// (0x00080608) main_myfav_hc_pane_g2_ParamLimits

0x82a0,	// (0x00080608) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x00087cc0) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x00087cc0) main_myfav_hc_pane_g

0x82d4,	// (0x0008063c) main_myfav_hc_pane_t1_ParamLimits

0x82d4,	// (0x0008063c) main_myfav_hc_pane_t1

0xc985,	// (0x00084ced) main_myfav_hc_pane_t2_ParamLimits

0xc985,	// (0x00084ced) main_myfav_hc_pane_t2

0xc997,	// (0x00084cff) main_myfav_hc_pane_t3_ParamLimits

0xc997,	// (0x00084cff) main_myfav_hc_pane_t3

0x82eb,	// (0x00080653) main_myfav_hc_pane_t4_ParamLimits

0x82eb,	// (0x00080653) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x00087cc7) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x00087cc7) main_myfav_hc_pane_t

0xbebf,	// (0x00084227) bg_myfav_hc_instruction_pane_g1

0xc9a9,	// (0x00084d11) cell_myfav_contact_pane_g1_ParamLimits

0xc9a9,	// (0x00084d11) cell_myfav_contact_pane_g1

0xc9a9,	// (0x00084d11) cell_myfav_contact_pane_g2_ParamLimits

0xc9a9,	// (0x00084d11) cell_myfav_contact_pane_g2

0xc9b5,	// (0x00084d1d) cell_myfav_contact_pane_g3_ParamLimits

0xc9b5,	// (0x00084d1d) cell_myfav_contact_pane_g3

0xc160,	// (0x000844c8) cell_myfav_contact_pane_g4_ParamLimits

0xc160,	// (0x000844c8) cell_myfav_contact_pane_g4

0xc9c2,	// (0x00084d2a) cell_myfav_contact_pane_g5_ParamLimits

0xc9c2,	// (0x00084d2a) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x00087cd2) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x00087cd2) cell_myfav_contact_pane_g

0x82ba,	// (0x00080622) main_myfav_hc_pane_g3_ParamLimits

0x82ba,	// (0x00080622) main_myfav_hc_pane_g3

0x133b,	// (0x000796a3) popup_adpt_find_window

0x8315,	// (0x0008067d) afind_page_pane_ParamLimits

0x8315,	// (0x0008067d) afind_page_pane

0x832a,	// (0x00080692) aid_size_cell_afind_ParamLimits

0x832a,	// (0x00080692) aid_size_cell_afind

0x8348,	// (0x000806b0) bg_popup_sub_pane_cp09_ParamLimits

0x8348,	// (0x000806b0) bg_popup_sub_pane_cp09

0x8355,	// (0x000806bd) find_pane_cp01_ParamLimits

0x8355,	// (0x000806bd) find_pane_cp01

0xc9ce,	// (0x00084d36) grid_afind_control_pane_ParamLimits

0xc9ce,	// (0x00084d36) grid_afind_control_pane

0x8362,	// (0x000806ca) grid_afind_pane_ParamLimits

0x8362,	// (0x000806ca) grid_afind_pane

0x8384,	// (0x000806ec) cell_afind_pane_ParamLimits

0x8384,	// (0x000806ec) cell_afind_pane

0xbebf,	// (0x00084227) afind_page_pane_g1

0x83e7,	// (0x0008074f) afind_page_pane_g2

0x83f0,	// (0x00080758) afind_page_pane_g3

0x0002,

0xf975,	// (0x00087cdd) afind_page_pane_g

0x83f9,	// (0x00080761) afind_page_pane_t1

0xc9e2,	// (0x00084d4a) cell_afind_grid_control_pane_ParamLimits

0xc9e2,	// (0x00084d4a) cell_afind_grid_control_pane

0xc7b7,	// (0x00084b1f) bg_button_pane_cp69_ParamLimits

0xc7b7,	// (0x00084b1f) bg_button_pane_cp69

0x8419,	// (0x00080781) cell_afind_pane_g1_ParamLimits

0x8419,	// (0x00080781) cell_afind_pane_g1

0x8426,	// (0x0008078e) cell_afind_pane_t1_ParamLimits

0x8426,	// (0x0008078e) cell_afind_pane_t1

0xb582,	// (0x000838ea) bg_button_pane_cp72

0xc9f1,	// (0x00084d59) cell_afind_grid_control_pane_g1

0x4238,	// (0x0007c5a0) aid_image_placing_area_ParamLimits

0x4238,	// (0x0007c5a0) aid_image_placing_area

0xc483,	// (0x000847eb) field_vitu_entry_pane_g1_ParamLimits

0xc483,	// (0x000847eb) field_vitu_entry_pane_g1

0xc48f,	// (0x000847f7) field_vitu_entry_pane_g2_ParamLimits

0xc48f,	// (0x000847f7) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x00087b8e) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x00087b8e) field_vitu_entry_pane_g

0x7596,	// (0x0007f8fe) cell_vitu_itu_pane_g1_ParamLimits

0x75d8,	// (0x0007f940) cell_vitu_itu_pane_t3_ParamLimits

0x75d8,	// (0x0007f940) cell_vitu_itu_pane_t3

0xc767,	// (0x00084acf) mp4_progress_pane_t1_ParamLimits

0xc780,	// (0x00084ae8) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x00087c23) mp4_progress_pane_t_ParamLimits

0xc799,	// (0x00084b01) mup_progress_pane_cp04_ParamLimits

0x82ff,	// (0x00080667) main_myfav_hc_pane_t5_ParamLimits

0x82ff,	// (0x00080667) main_myfav_hc_pane_t5

0xab04,	// (0x00082e6c) aid_zoom_text_primary

0x133b,	// (0x000796a3) popup_adpt_find_window_ParamLimits

0xab57,	// (0x00082ebf) main_cam_set_pane

0x7d59,	// (0x000800c1) cam4_zoom_pane_ParamLimits

0x7d59,	// (0x000800c1) cam4_zoom_pane

0x8438,	// (0x000807a0) main_cam_set_pane_g1_ParamLimits

0x8438,	// (0x000807a0) main_cam_set_pane_g1

0x8446,	// (0x000807ae) main_cam_set_pane_g2_ParamLimits

0x8446,	// (0x000807ae) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x00087ce4) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x00087ce4) main_cam_set_pane_g

0x8467,	// (0x000807cf) main_cam_set_pane_t1_ParamLimits

0x8467,	// (0x000807cf) main_cam_set_pane_t1

0x8482,	// (0x000807ea) main_cset_listscroll_pane_ParamLimits

0x8482,	// (0x000807ea) main_cset_listscroll_pane

0x84a6,	// (0x0008080e) main_cset_slider_pane_ParamLimits

0x84a6,	// (0x0008080e) main_cset_slider_pane

0xca02,	// (0x00084d6a) main_cset_list_pane_ParamLimits

0xca02,	// (0x00084d6a) main_cset_list_pane

0xca12,	// (0x00084d7a) scroll_pane_cp028

0x84d0,	// (0x00080838) aid_area_touch_slider

0x84ec,	// (0x00080854) cset_slider_pane

0x8516,	// (0x0008087e) main_cset_slider_pane_g1

0x852b,	// (0x00080893) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x00087ce9) main_cset_slider_pane_g

0xca4b,	// (0x00084db3) main_cset_slider_pane_t1

0x85ed,	// (0x00080955) main_cset_slider_pane_t2

0x8607,	// (0x0008096f) main_cset_slider_pane_t3

0x8621,	// (0x00080989) main_cset_slider_pane_t4

0x863b,	// (0x000809a3) main_cset_slider_pane_t5

0x8659,	// (0x000809c1) main_cset_slider_pane_t6

0x8670,	// (0x000809d8) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x00087d0e) main_cset_slider_pane_t

0x877c,	// (0x00080ae4) cset_list_set_pane_ParamLimits

0x877c,	// (0x00080ae4) cset_list_set_pane

0x8790,	// (0x00080af8) aid_position_infowindow_above

0x8798,	// (0x00080b00) aid_position_infowindow_below

0x87a0,	// (0x00080b08) cset_list_set_pane_g1_ParamLimits

0x87a0,	// (0x00080b08) cset_list_set_pane_g1

0x0940,	// (0x00078ca8) cset_list_set_pane_g3_ParamLimits

0x0940,	// (0x00078ca8) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x00087d2d) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x00087d2d) cset_list_set_pane_g

0x094f,	// (0x00078cb7) cset_list_set_pane_t1_ParamLimits

0x094f,	// (0x00078cb7) cset_list_set_pane_t1

0xab57,	// (0x00082ebf) list_highlight_pane_cp021_ParamLimits

0xab57,	// (0x00082ebf) list_highlight_pane_cp021

0x3a7f,	// (0x0007bde7) cset_slider_pane_g1

0x3a91,	// (0x0007bdf9) cset_slider_pane_g2

0x3a88,	// (0x0007bdf0) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x00087d32) cset_slider_pane_g

0xefb8,	// (0x00087320) aid_area_touch_cam4_zoom

0xefc0,	// (0x00087328) cam4_zoom_cont_pane

0xefc8,	// (0x00087330) cam4_zoom_pane_g1

0xefd0,	// (0x00087338) cam4_zoom_pane_g2

0x87ac,	// (0x00080b14) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x00087d39) cam4_zoom_pane_g

0xcaeb,	// (0x00084e53) cam4_zoom_cont_pane_g1

0xcaf4,	// (0x00084e5c) cam4_zoom_cont_pane_g2

0xcafd,	// (0x00084e65) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x00087d40) cam4_zoom_cont_pane_g

0x7bd6,	// (0x0007ff3e) call4_image_pane_ParamLimits

0x7bd6,	// (0x0007ff3e) call4_image_pane

0xc7c3,	// (0x00084b2b) call4_windows_conf_pane_ParamLimits

0xc7de,	// (0x00084b46) popup_call4_audio_in_window_ParamLimits

0xc7de,	// (0x00084b46) popup_call4_audio_in_window

0xaade,	// (0x00082e46) bg_popup_call2_act_pane_cp02

0xc840,	// (0x00084ba8) call4_list_conf_pane

0xbebf,	// (0x00084227) call4_image_pane_g1

0xbebf,	// (0x00084227) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x00087a54) call4_image_pane_g

0xcb06,	// (0x00084e6e) list_single_graphic_popup_conf4_pane_ParamLimits

0xcb06,	// (0x00084e6e) list_single_graphic_popup_conf4_pane

0xaade,	// (0x00082e46) list_highlight_pane_cp022

0xcb1b,	// (0x00084e83) list_single_graphic_popup_conf4_pane_g1

0x2f79,	// (0x0007b2e1) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x00087d47) list_single_graphic_popup_conf4_pane_g

0xcb23,	// (0x00084e8b) list_single_graphic_popup_conf4_pane_t1

0x21a0,	// (0x0007a508) popup_vtel_slider_window_ParamLimits

0x21a0,	// (0x0007a508) popup_vtel_slider_window

0xc7a5,	// (0x00084b0d) dialer2_ne_pane_t2_ParamLimits

0xc7a5,	// (0x00084b0d) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x00087c28) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x00087c28) dialer2_ne_pane_t

0xbc9e,	// (0x00084006) bg_popup_sub_pane_cp010_ParamLimits

0xbc9e,	// (0x00084006) bg_popup_sub_pane_cp010

0x87b4,	// (0x00080b1c) popup_vtel_slider_window_g1_ParamLimits

0x87b4,	// (0x00080b1c) popup_vtel_slider_window_g1

0x87c7,	// (0x00080b2f) popup_vtel_slider_window_g2_ParamLimits

0x87c7,	// (0x00080b2f) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x00087d4c) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x00087d4c) popup_vtel_slider_window_g

0x881d,	// (0x00080b85) vtel_slider_pane_ParamLimits

0x881d,	// (0x00080b85) vtel_slider_pane

0x883f,	// (0x00080ba7) vtel_slider_pane_g1_ParamLimits

0x883f,	// (0x00080ba7) vtel_slider_pane_g1

0x8853,	// (0x00080bbb) vtel_slider_pane_g2_ParamLimits

0x8853,	// (0x00080bbb) vtel_slider_pane_g2

0x886b,	// (0x00080bd3) vtel_slider_pane_g3_ParamLimits

0x886b,	// (0x00080bd3) vtel_slider_pane_g3

0x883f,	// (0x00080ba7) vtel_slider_pane_g4_ParamLimits

0x883f,	// (0x00080ba7) vtel_slider_pane_g4

0x8881,	// (0x00080be9) vtel_slider_pane_g5_ParamLimits

0x8881,	// (0x00080be9) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x00087d55) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x00087d55) vtel_slider_pane_g

0xaade,	// (0x00082e46) main_gallery2_pane

0x7f5d,	// (0x000802c5) aid_size_row_itut2_dropdow_list_ParamLimits

0x7f5d,	// (0x000802c5) aid_size_row_itut2_dropdow_list

0x7fed,	// (0x00080355) grid_vitu2_function_top_pane_ParamLimits

0x7fed,	// (0x00080355) grid_vitu2_function_top_pane

0x804c,	// (0x000803b4) popup_vitu2_dropdown_list_window_ParamLimits

0x804c,	// (0x000803b4) popup_vitu2_dropdown_list_window

0x8075,	// (0x000803dd) popup_vitu2_match_list_window

0x8897,	// (0x00080bff) cell_vitu2_function_top_pane_ParamLimits

0x8897,	// (0x00080bff) cell_vitu2_function_top_pane

0x88b7,	// (0x00080c1f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x88b7,	// (0x00080c1f) cell_vitu2_function_top_pane_cp01

0x88d5,	// (0x00080c3d) cell_vitu2_function_top_wide_pane_ParamLimits

0x88d5,	// (0x00080c3d) cell_vitu2_function_top_wide_pane

0xab57,	// (0x00082ebf) bg_button_pane_cp012

0x88f3,	// (0x00080c5b) cell_vitu2_function_top_pane_g1

0xefd8,	// (0x00087340) bg_button_pane_cp013_ParamLimits

0xefd8,	// (0x00087340) bg_button_pane_cp013

0x8907,	// (0x00080c6f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8907,	// (0x00080c6f) cell_vitu2_function_top_wide_pane_g1

0xab57,	// (0x00082ebf) bg_popup_sub_pane_cp20

0x891f,	// (0x00080c87) list_vitu2_match_list_pane

0xc8f4,	// (0x00084c5c) bg_popup_sub_pane_cp20_g1

0xc8fc,	// (0x00084c64) bg_popup_sub_pane_cp20_g2

0xb84b,	// (0x00083bb3) bg_popup_sub_pane_cp20_g3

0xc904,	// (0x00084c6c) bg_popup_sub_pane_cp20_g4

0xb82b,	// (0x00083b93) bg_popup_sub_pane_cp20_g5

0xcb47,	// (0x00084eaf) bg_popup_sub_pane_cp20_g6

0xc914,	// (0x00084c7c) bg_popup_sub_pane_cp20_g7

0xc91c,	// (0x00084c84) bg_popup_sub_pane_cp20_g8

0xc924,	// (0x00084c8c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x00087d60) bg_popup_sub_pane_cp20_g

0xeff4,	// (0x0008735c) list_vitu2_match_list_item_pane_ParamLimits

0xeff4,	// (0x0008735c) list_vitu2_match_list_item_pane

0xf006,	// (0x0008736e) list_vitu2_match_list_item_pane_t1

0xaade,	// (0x00082e46) bg_popup_sub_pane_cp21

0xebef,	// (0x00086f57) grid_vitu2_dropdown_list_pane

0x893d,	// (0x00080ca5) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x893d,	// (0x00080ca5) cell_vitu2_dropdown_list_char_pane

0x8960,	// (0x00080cc8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8960,	// (0x00080cc8) cell_vitu2_dropdown_list_ctrl_pane

0xcb67,	// (0x00084ecf) cell_vitu2_dropdown_list_char_pane_g1

0xcb70,	// (0x00084ed8) cell_vitu2_dropdown_list_char_pane_g2

0xcb79,	// (0x00084ee1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x00087d7d) cell_vitu2_dropdown_list_char_pane_g

0x898e,	// (0x00080cf6) cell_vitu2_dropdown_list_char_pane_t1

0x899c,	// (0x00080d04) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x899c,	// (0x00080d04) cell_vitu2_dropdown_list_ctrl_pane_g1

0x89ac,	// (0x00080d14) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x89ac,	// (0x00080d14) cell_vitu2_dropdown_list_ctrl_pane_g2

0x89bd,	// (0x00080d25) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x89bd,	// (0x00080d25) cell_vitu2_dropdown_list_ctrl_pane_g3

0x89cd,	// (0x00080d35) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x89cd,	// (0x00080d35) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc0ef,	// (0x00084457) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc0ef,	// (0x00084457) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x00087d84) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x00087d84) cell_vitu2_dropdown_list_ctrl_pane_g

0x89e9,	// (0x00080d51) aid_size_cell_gallery2_ParamLimits

0x89e9,	// (0x00080d51) aid_size_cell_gallery2

0x89ff,	// (0x00080d67) grid_gallery2_pane_ParamLimits

0x89ff,	// (0x00080d67) grid_gallery2_pane

0x8a13,	// (0x00080d7b) scroll_pane_cp029_ParamLimits

0x8a13,	// (0x00080d7b) scroll_pane_cp029

0x8a1f,	// (0x00080d87) cell_gallery2_pane_ParamLimits

0x8a1f,	// (0x00080d87) cell_gallery2_pane

0xcb82,	// (0x00084eea) cell_gallery2_pane_g2

0x8a59,	// (0x00080dc1) cell_gallery2_pane_g3

0xcb8c,	// (0x00084ef4) cell_gallery2_pane_g4

0xcb94,	// (0x00084efc) cell_gallery2_pane_g5

0x34e7,	// (0x0007b84f) grid_highlight_pane_cp10

0x8075,	// (0x000803dd) popup_vitu2_match_list_window_ParamLimits

0x808c,	// (0x000803f4) popup_vitu2_query_window_ParamLimits

0x808c,	// (0x000803f4) popup_vitu2_query_window

0xaade,	// (0x00082e46) bg_vitu2_candi_button_pane

0xcb67,	// (0x00084ecf) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcb70,	// (0x00084ed8) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcb79,	// (0x00084ee1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0996,	// (0x00078cfe) bg_button_pane_cp015

0x8a61,	// (0x00080dc9) bg_button_pane_cp016

0x8a74,	// (0x00080ddc) bg_button_pane_cp017

0x5745,	// (0x0007daad) bg_popup_sub_pane_cp22

0xcb9c,	// (0x00084f04) popup_vitu2_query_window_g1

0x09cb,	// (0x00078d33) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x00087d8f) popup_vitu2_query_window_g

0x09ea,	// (0x00078d52) popup_vitu2_query_window_t1_ParamLimits

0x09ea,	// (0x00078d52) popup_vitu2_query_window_t1

0x0a1f,	// (0x00078d87) popup_vitu2_query_window_t2_ParamLimits

0x0a1f,	// (0x00078d87) popup_vitu2_query_window_t2

0x0a31,	// (0x00078d99) popup_vitu2_query_window_t3_ParamLimits

0x0a31,	// (0x00078d99) popup_vitu2_query_window_t3

0x8a98,	// (0x00080e00) popup_vitu2_query_window_t4_ParamLimits

0x8a98,	// (0x00080e00) popup_vitu2_query_window_t4

0x8ab9,	// (0x00080e21) popup_vitu2_query_window_t5_ParamLimits

0x8ab9,	// (0x00080e21) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x00087d96) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x00087d96) popup_vitu2_query_window_t

0xc9fa,	// (0x00084d62) main_cset_text_pane

0x84d0,	// (0x00080838) aid_area_touch_slider_ParamLimits

0x84ec,	// (0x00080854) cset_slider_pane_ParamLimits

0x8516,	// (0x0008087e) main_cset_slider_pane_g1_ParamLimits

0x852b,	// (0x00080893) main_cset_slider_pane_g2_ParamLimits

0xca1b,	// (0x00084d83) main_cset_slider_pane_g3_ParamLimits

0xca1b,	// (0x00084d83) main_cset_slider_pane_g3

0x8540,	// (0x000808a8) main_cset_slider_pane_g4_ParamLimits

0x8540,	// (0x000808a8) main_cset_slider_pane_g4

0x854f,	// (0x000808b7) main_cset_slider_pane_g5_ParamLimits

0x854f,	// (0x000808b7) main_cset_slider_pane_g5

0x855d,	// (0x000808c5) main_cset_slider_pane_g6_ParamLimits

0x855d,	// (0x000808c5) main_cset_slider_pane_g6

0xf981,	// (0x00087ce9) main_cset_slider_pane_g_ParamLimits

0xca4b,	// (0x00084db3) main_cset_slider_pane_t1_ParamLimits

0x85ed,	// (0x00080955) main_cset_slider_pane_t2_ParamLimits

0x8607,	// (0x0008096f) main_cset_slider_pane_t3_ParamLimits

0x8621,	// (0x00080989) main_cset_slider_pane_t4_ParamLimits

0x863b,	// (0x000809a3) main_cset_slider_pane_t5_ParamLimits

0x8659,	// (0x000809c1) main_cset_slider_pane_t6_ParamLimits

0x8670,	// (0x000809d8) main_cset_slider_pane_t7_ParamLimits

0x869e,	// (0x00080a06) main_cset_slider_pane_t8_ParamLimits

0x869e,	// (0x00080a06) main_cset_slider_pane_t8

0x86c6,	// (0x00080a2e) main_cset_slider_pane_t9_ParamLimits

0x86c6,	// (0x00080a2e) main_cset_slider_pane_t9

0x86ee,	// (0x00080a56) main_cset_slider_pane_t10_ParamLimits

0x86ee,	// (0x00080a56) main_cset_slider_pane_t10

0x8716,	// (0x00080a7e) main_cset_slider_pane_t11_ParamLimits

0x8716,	// (0x00080a7e) main_cset_slider_pane_t11

0x8740,	// (0x00080aa8) main_cset_slider_pane_t12_ParamLimits

0x8740,	// (0x00080aa8) main_cset_slider_pane_t12

0x875d,	// (0x00080ac5) main_cset_slider_pane_t13_ParamLimits

0x875d,	// (0x00080ac5) main_cset_slider_pane_t13

0xf9a6,	// (0x00087d0e) main_cset_slider_pane_t_ParamLimits

0xaade,	// (0x00082e46) bg_popup_sub_pane_cp011

0xcba8,	// (0x00084f10) main_cset_text_pane_g1

0xcbb0,	// (0x00084f18) main_cset_text_pane_t1

0xcbbe,	// (0x00084f26) main_cset_text_pane_t2

0xcbcc,	// (0x00084f34) main_cset_text_pane_t3

0xcbda,	// (0x00084f42) main_cset_text_pane_t4

0xcbe8,	// (0x00084f50) main_cset_text_pane_t5

0xcbf6,	// (0x00084f5e) main_cset_text_pane_t6

0xcc04,	// (0x00084f6c) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x00087da5) main_cset_text_pane_t

0xaade,	// (0x00082e46) main_cam4_burst_pane

0xaade,	// (0x00082e46) main_cam5_pane

0x8407,	// (0x0008076f) bg_button_pane_cp019

0x8410,	// (0x00080778) bg_button_pane_cp020

0xca27,	// (0x00084d8f) main_cset_slider_pane_g7_ParamLimits

0xca27,	// (0x00084d8f) main_cset_slider_pane_g7

0xca33,	// (0x00084d9b) main_cset_slider_pane_g8_ParamLimits

0xca33,	// (0x00084d9b) main_cset_slider_pane_g8

0x8571,	// (0x000808d9) main_cset_slider_pane_g9_ParamLimits

0x8571,	// (0x000808d9) main_cset_slider_pane_g9

0x857d,	// (0x000808e5) main_cset_slider_pane_g10_ParamLimits

0x857d,	// (0x000808e5) main_cset_slider_pane_g10

0x8589,	// (0x000808f1) main_cset_slider_pane_g11_ParamLimits

0x8589,	// (0x000808f1) main_cset_slider_pane_g11

0x8595,	// (0x000808fd) main_cset_slider_pane_g12_ParamLimits

0x8595,	// (0x000808fd) main_cset_slider_pane_g12

0x85a1,	// (0x00080909) main_cset_slider_pane_g13_ParamLimits

0x85a1,	// (0x00080909) main_cset_slider_pane_g13

0x85ad,	// (0x00080915) main_cset_slider_pane_g14_ParamLimits

0x85ad,	// (0x00080915) main_cset_slider_pane_g14

0x85b9,	// (0x00080921) main_cset_slider_pane_g15_ParamLimits

0x85b9,	// (0x00080921) main_cset_slider_pane_g15

0xca79,	// (0x00084de1) main_cset_slider_pane_t14_ParamLimits

0xca79,	// (0x00084de1) main_cset_slider_pane_t14

0xcab2,	// (0x00084e1a) main_cset_slider_pane_t15_ParamLimits

0xcab2,	// (0x00084e1a) main_cset_slider_pane_t15

0x8ada,	// (0x00080e42) aid_cam4_burst_size_cell_ParamLimits

0x8ada,	// (0x00080e42) aid_cam4_burst_size_cell

0x8afa,	// (0x00080e62) grid_cam4_burst_pane_ParamLimits

0x8afa,	// (0x00080e62) grid_cam4_burst_pane

0x8b34,	// (0x00080e9c) linegrid_cam4_burst_pane_ParamLimits

0x8b34,	// (0x00080e9c) linegrid_cam4_burst_pane

0xcc12,	// (0x00084f7a) scroll_pane_cp30_ParamLimits

0xcc12,	// (0x00084f7a) scroll_pane_cp30

0x8b56,	// (0x00080ebe) cell_cam4_burst_pane_ParamLimits

0x8b56,	// (0x00080ebe) cell_cam4_burst_pane

0xcc1e,	// (0x00084f86) linegrid_cam4_burst_pane_g1_ParamLimits

0xcc1e,	// (0x00084f86) linegrid_cam4_burst_pane_g1

0x8bab,	// (0x00080f13) linegrid_cam4_burst_pane_g2_ParamLimits

0x8bab,	// (0x00080f13) linegrid_cam4_burst_pane_g2

0xcc2b,	// (0x00084f93) linegrid_cam4_burst_pane_g3_ParamLimits

0xcc2b,	// (0x00084f93) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x00087db4) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x00087db4) linegrid_cam4_burst_pane_g

0x8bbc,	// (0x00080f24) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8bbc,	// (0x00080f24) linegrid_cam4_burst_pane_g3_copy1

0xcc38,	// (0x00084fa0) linegrid_cam4_burst_pane_g4_ParamLimits

0xcc38,	// (0x00084fa0) linegrid_cam4_burst_pane_g4

0x8bda,	// (0x00080f42) linegrid_cam4_burst_pane_g5_ParamLimits

0x8bda,	// (0x00080f42) linegrid_cam4_burst_pane_g5

0x8beb,	// (0x00080f53) linegrid_cam4_burst_pane_g6_ParamLimits

0x8beb,	// (0x00080f53) linegrid_cam4_burst_pane_g6

0xcc45,	// (0x00084fad) linegrid_cam4_burst_pane_g7_ParamLimits

0xcc45,	// (0x00084fad) linegrid_cam4_burst_pane_g7

0x8c02,	// (0x00080f6a) cell_cam4_burst_pane_g1

0xcc5e,	// (0x00084fc6) main_cam5_pane_t1_ParamLimits

0xcc5e,	// (0x00084fc6) main_cam5_pane_t1

0xcc70,	// (0x00084fd8) main_cam5_pane_t2_ParamLimits

0xcc70,	// (0x00084fd8) main_cam5_pane_t2

0xcc82,	// (0x00084fea) main_cam5_pane_t3_ParamLimits

0xcc82,	// (0x00084fea) main_cam5_pane_t3

0xcc94,	// (0x00084ffc) main_cam5_pane_t4_ParamLimits

0xcc94,	// (0x00084ffc) main_cam5_pane_t4

0xccac,	// (0x00085014) main_cam5_pane_t5_ParamLimits

0xccac,	// (0x00085014) main_cam5_pane_t5

0xccc0,	// (0x00085028) main_cam5_pane_t6_ParamLimits

0xccc0,	// (0x00085028) main_cam5_pane_t6

0xccd4,	// (0x0008503c) main_cam5_pane_t7_ParamLimits

0xccd4,	// (0x0008503c) main_cam5_pane_t7

0xcce6,	// (0x0008504e) main_cam5_pane_t8_ParamLimits

0xcce6,	// (0x0008504e) main_cam5_pane_t8

0xcd04,	// (0x0008506c) main_cam5_pane_t9_ParamLimits

0xcd04,	// (0x0008506c) main_cam5_pane_t9

0xcd16,	// (0x0008507e) main_cam5_pane_t10_ParamLimits

0xcd16,	// (0x0008507e) main_cam5_pane_t10

0xcd28,	// (0x00085090) main_cam5_pane_t11_ParamLimits

0xcd28,	// (0x00085090) main_cam5_pane_t11

0xcd3c,	// (0x000850a4) main_cam5_pane_t12_ParamLimits

0xcd3c,	// (0x000850a4) main_cam5_pane_t12

0xcd53,	// (0x000850bb) main_cam5_pane_t13_ParamLimits

0xcd53,	// (0x000850bb) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x00087dc0) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x00087dc0) main_cam5_pane_t

0x13be,	// (0x00079726) popup_scut_keymap_window_ParamLimits

0x13be,	// (0x00079726) popup_scut_keymap_window

0x8c15,	// (0x00080f7d) aid_size_cell_brow_shortcut

0x34e7,	// (0x0007b84f) bg_popup_window_pane_cp010

0x8c21,	// (0x00080f89) grid_scut_pane

0x8c2d,	// (0x00080f95) cell_scut_pane_ParamLimits

0x8c2d,	// (0x00080f95) cell_scut_pane

0x8c46,	// (0x00080fae) cell_scut_pane_g1

0xcd76,	// (0x000850de) cell_scut_pane_t1

0xcd85,	// (0x000850ed) cell_scut_pane_t2

0x8c4f,	// (0x00080fb7) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x00087ddb) cell_scut_pane_t

0x6a5f,	// (0x0007edc7) main_mup3_pane_g8_ParamLimits

0x6a5f,	// (0x0007edc7) main_mup3_pane_g8

0x7f77,	// (0x000802df) area_vitu2_query_pane_ParamLimits

0x7f77,	// (0x000802df) area_vitu2_query_pane

0x09aa,	// (0x00078d12) input_focus_pane_cp08

0xcd94,	// (0x000850fc) area_vitu2_query_pane_g1

0x0aaf,	// (0x00078e17) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x00087de2) area_vitu2_query_pane_g

0x8c5d,	// (0x00080fc5) area_vitu2_query_pane_t1_ParamLimits

0x8c5d,	// (0x00080fc5) area_vitu2_query_pane_t1

0x8c71,	// (0x00080fd9) area_vitu2_query_pane_t2_ParamLimits

0x8c71,	// (0x00080fd9) area_vitu2_query_pane_t2

0x0ac2,	// (0x00078e2a) area_vitu2_query_pane_t3_ParamLimits

0x0ac2,	// (0x00078e2a) area_vitu2_query_pane_t3

0xcda0,	// (0x00085108) area_vitu2_query_pane_t4_ParamLimits

0xcda0,	// (0x00085108) area_vitu2_query_pane_t4

0xcdc8,	// (0x00085130) area_vitu2_query_pane_t5_ParamLimits

0xcdc8,	// (0x00085130) area_vitu2_query_pane_t5

0xcdf0,	// (0x00085158) area_vitu2_query_pane_t6_ParamLimits

0xcdf0,	// (0x00085158) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x00087de7) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x00087de7) area_vitu2_query_pane_t

0x8c85,	// (0x00080fed) bg_button_pane_cp018

0x8c93,	// (0x00080ffb) bg_button_pane_cp021

0x0aea,	// (0x00078e52) bg_button_pane_cp022

0x0afb,	// (0x00078e63) input_focus_pane_cp09

0x32f6,	// (0x0007b65e) aid_size_touch_mv_arrow_left

0x331f,	// (0x0007b687) aid_size_touch_mv_arrow_right

0x85d1,	// (0x00080939) main_cset_slider_pane_g16_ParamLimits

0x85d1,	// (0x00080939) main_cset_slider_pane_g16

0x85df,	// (0x00080947) main_cset_slider_pane_g17_ParamLimits

0x85df,	// (0x00080947) main_cset_slider_pane_g17

0x8c02,	// (0x00080f6a) cell_cam4_burst_pane_g1_ParamLimits

0xaade,	// (0x00082e46) compa_mode_pane

0x87d7,	// (0x00080b3f) popup_vtel_slider_window_g3_ParamLimits

0x87d7,	// (0x00080b3f) popup_vtel_slider_window_g3

0x87ee,	// (0x00080b56) popup_vtel_slider_window_g4_ParamLimits

0x87ee,	// (0x00080b56) popup_vtel_slider_window_g4

0x8805,	// (0x00080b6d) popup_vtel_slider_window_t1_ParamLimits

0x8805,	// (0x00080b6d) popup_vtel_slider_window_t1

0xaade,	// (0x00082e46) main_cl_pane

0xbb76,	// (0x00083ede) popup_imed_adjust2_window_ParamLimits

0x5745,	// (0x0007daad) bg_tb_trans_pane_cp05_ParamLimits

0xc3b8,	// (0x00084720) popup_imed_adjust2_window_g1_ParamLimits

0xc3c7,	// (0x0008472f) popup_imed_adjust2_window_g2_ParamLimits

0xc3c7,	// (0x0008472f) popup_imed_adjust2_window_g2

0xc3d3,	// (0x0008473b) popup_imed_adjust2_window_g3_ParamLimits

0xc3d3,	// (0x0008473b) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x00087b52) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x00087b52) popup_imed_adjust2_window_g

0xc3df,	// (0x00084747) popup_imed_adjust2_window_t1_ParamLimits

0xc3f7,	// (0x0008475f) slider_imed_adjust_pane_ParamLimits

0xc40b,	// (0x00084773) slider_imed_adjust_pane_g1_ParamLimits

0xc41b,	// (0x00084783) slider_imed_adjust_pane_g2_ParamLimits

0xc42b,	// (0x00084793) slider_imed_adjust_pane_g3_ParamLimits

0xc43c,	// (0x000847a4) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x00087b59) slider_imed_adjust_pane_g_ParamLimits

0x7cf9,	// (0x00080061) aid_touch_area_cam4_ParamLimits

0x7cf9,	// (0x00080061) aid_touch_area_cam4

0xeec9,	// (0x00087231) battery_pane_cp01

0x7dcb,	// (0x00080133) main_camera4_pane_g6_ParamLimits

0x7dcb,	// (0x00080133) main_camera4_pane_g6

0x7df5,	// (0x0008015d) main_camera4_pane_t2_ParamLimits

0x7df5,	// (0x0008015d) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x00087c5c) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x00087c5c) main_camera4_pane_t

0x7e2a,	// (0x00080192) aid_touch_area_vid4_ParamLimits

0x7e2a,	// (0x00080192) aid_touch_area_vid4

0x7e7e,	// (0x000801e6) main_video4_pane_g5_ParamLimits

0x7e7e,	// (0x000801e6) main_video4_pane_g5

0x7ea3,	// (0x0008020b) vid4_progress_pane_ParamLimits

0x7ea3,	// (0x0008020b) vid4_progress_pane

0xca3f,	// (0x00084da7) main_cset_slider_pane_g18_ParamLimits

0xca3f,	// (0x00084da7) main_cset_slider_pane_g18

0xcc52,	// (0x00084fba) cell_cam4_burst_pane_g2_ParamLimits

0xcc52,	// (0x00084fba) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x00087dbb) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x00087dbb) cell_cam4_burst_pane_g

0xb2fd,	// (0x00083665) bg_cl_pane_ParamLimits

0xb2fd,	// (0x00083665) bg_cl_pane

0x8c9f,	// (0x00081007) cl_header_pane_ParamLimits

0x8c9f,	// (0x00081007) cl_header_pane

0x8cb3,	// (0x0008101b) cl_listscroll_pane_ParamLimits

0x8cb3,	// (0x0008101b) cl_listscroll_pane

0xce3c,	// (0x000851a4) bg_cl_pane_g1

0xce44,	// (0x000851ac) bg_cl_pane_g2

0xce4c,	// (0x000851b4) bg_cl_pane_g3

0xce54,	// (0x000851bc) bg_cl_pane_g4

0xce5c,	// (0x000851c4) bg_cl_pane_g5

0xce64,	// (0x000851cc) bg_cl_pane_g6

0xce6c,	// (0x000851d4) bg_cl_pane_g7

0xce74,	// (0x000851dc) bg_cl_pane_g8

0xce7c,	// (0x000851e4) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x00087df6) bg_cl_pane_g

0x8cc3,	// (0x0008102b) aid_height_cl_leading_ParamLimits

0x8cc3,	// (0x0008102b) aid_height_cl_leading

0x8ccf,	// (0x00081037) aid_height_cl_text_ParamLimits

0x8ccf,	// (0x00081037) aid_height_cl_text

0xab57,	// (0x00082ebf) bg_cl_header_pane_ParamLimits

0xab57,	// (0x00082ebf) bg_cl_header_pane

0x8cee,	// (0x00081056) cl_header_pane_g1_ParamLimits

0x8cee,	// (0x00081056) cl_header_pane_g1

0x8d04,	// (0x0008106c) cl_header_pane_t1_ParamLimits

0x8d04,	// (0x0008106c) cl_header_pane_t1

0xce84,	// (0x000851ec) cl_list_pane

0xca12,	// (0x00084d7a) hc_scroll_pane_cp01

0xb82b,	// (0x00083b93) bg_cl_header_pane_g1

0xc8f4,	// (0x00084c5c) bg_cl_header_pane_g2

0xb84b,	// (0x00083bb3) bg_cl_header_pane_g3

0xc904,	// (0x00084c6c) bg_cl_header_pane_g4

0xc8fc,	// (0x00084c64) bg_cl_header_pane_g5

0xcb47,	// (0x00084eaf) bg_cl_header_pane_g6

0xc91c,	// (0x00084c84) bg_cl_header_pane_g7

0xc924,	// (0x00084c8c) bg_cl_header_pane_g8

0xc914,	// (0x00084c7c) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x00087e09) bg_cl_header_pane_g

0x8d1d,	// (0x00081085) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8d1d,	// (0x00081085) hc_cl_list_double_graphic_heading_pane

0x8d30,	// (0x00081098) hc_cl_list_single_graphic_pane_ParamLimits

0x8d30,	// (0x00081098) hc_cl_list_single_graphic_pane

0x8d48,	// (0x000810b0) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8d48,	// (0x000810b0) hc_cl_list_single_graphic_pane_g1

0x8d54,	// (0x000810bc) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8d54,	// (0x000810bc) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x00087e1c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x00087e1c) hc_cl_list_single_graphic_pane_g

0x8d68,	// (0x000810d0) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8d68,	// (0x000810d0) hc_cl_list_single_graphic_pane_t1

0x8d48,	// (0x000810b0) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8d48,	// (0x000810b0) hc_cl_list_double_graphic_heading_pane_g1

0x8d7d,	// (0x000810e5) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8d7d,	// (0x000810e5) hc_cl_list_double_graphic_heading_pane_g2

0x8d91,	// (0x000810f9) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8d91,	// (0x000810f9) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x00087e21) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x00087e21) hc_cl_list_double_graphic_heading_pane_g

0x8da5,	// (0x0008110d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8da5,	// (0x0008110d) hc_cl_list_double_graphic_heading_pane_t1

0x8dba,	// (0x00081122) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8dba,	// (0x00081122) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x00087e28) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x00087e28) hc_cl_list_double_graphic_heading_pane_t

0x8dcf,	// (0x00081137) vid4_progress_pane_g1

0x8de1,	// (0x00081149) vid4_progress_pane_g2

0xbb40,	// (0x00083ea8) vid4_progress_pane_g3

0xf01c,	// (0x00087384) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x00087e2d) vid4_progress_pane_g

0xf03a,	// (0x000873a2) vid4_progress_pane_t1

0xf04f,	// (0x000873b7) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x00087e38) vid4_progress_pane_t

0xf07a,	// (0x000873e2) wait_bar_pane_cp07

0xbcac,	// (0x00084014) blid_firmament_pane_ParamLimits

0xbcef,	// (0x00084057) popup_blid_sat_info2_window_g1

0xbd13,	// (0x0008407b) popup_blid_sat_info2_window_t3

0xbd21,	// (0x00084089) popup_blid_sat_info2_window_t4

0xbd2f,	// (0x00084097) popup_blid_sat_info2_window_t5

0xbd3d,	// (0x000840a5) popup_blid_sat_info2_window_t6

0xbd4d,	// (0x000840b5) popup_blid_sat_info2_window_t7

0xbd5b,	// (0x000840c3) popup_blid_sat_info2_window_t8

0xbd69,	// (0x000840d1) popup_blid_sat_info2_window_t9

0xbd77,	// (0x000840df) popup_blid_sat_info2_window_t10

0xbe3f,	// (0x000841a7) aid_firma_cardinal_ParamLimits

0xbe53,	// (0x000841bb) blid_firmament_pane_t1_ParamLimits

0xbe6a,	// (0x000841d2) blid_firmament_pane_t2_ParamLimits

0xbe81,	// (0x000841e9) blid_firmament_pane_t3_ParamLimits

0xbe98,	// (0x00084200) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x00087a4b) blid_firmament_pane_t_ParamLimits

0xbeaf,	// (0x00084217) blid_sat_info_pane_ParamLimits

0xab57,	// (0x00082ebf) main_cam_set_pane_ParamLimits

0x7344,	// (0x0007f6ac) aid_size_cell_colour_35_ParamLimits

0x7364,	// (0x0007f6cc) aid_size_cell_colour_112_ParamLimits

0x7384,	// (0x0007f6ec) aid_size_cell_effect_ParamLimits

0x5745,	// (0x0007daad) bg_tb_trans_pane_cp02_ParamLimits

0xe9f4,	// (0x00086d5c) heading_imed_pane_ParamLimits

0x73a4,	// (0x0007f70c) listscroll_imed_pane_ParamLimits

0x4a4a,	// (0x0007cdb2) popup_call2_audio_first_window_g5_ParamLimits

0x4a4a,	// (0x0007cdb2) popup_call2_audio_first_window_g5

0x7961,	// (0x0007fcc9) aid_size_touch_image3_arrow_left_ParamLimits

0x7961,	// (0x0007fcc9) aid_size_touch_image3_arrow_left

0x798d,	// (0x0007fcf5) aid_size_touch_image3_arrow_right_ParamLimits

0x798d,	// (0x0007fcf5) aid_size_touch_image3_arrow_right

0xf065,	// (0x000873cd) vid4_progress_pane_t3

0x76bf,	// (0x0007fa27) main_hwr_training_symbol_option_pane_ParamLimits

0x76bf,	// (0x0007fa27) main_hwr_training_symbol_option_pane

0xc6a7,	// (0x00084a0f) popup_hwr_training_preview_window_ParamLimits

0xc6a7,	// (0x00084a0f) popup_hwr_training_preview_window

0x76df,	// (0x0007fa47) hwr_training_navi_pane_g5_ParamLimits

0x76df,	// (0x0007fa47) hwr_training_navi_pane_g5

0xc8e2,	// (0x00084c4a) popup_char_count_window

0xab57,	// (0x00082ebf) bg_popup_sub_pane_cp20_ParamLimits

0x891f,	// (0x00080c87) list_vitu2_match_list_pane_ParamLimits

0x892e,	// (0x00080c96) vitu2_page_scroll_pane_ParamLimits

0x892e,	// (0x00080c96) vitu2_page_scroll_pane

0xced6,	// (0x0008523e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xced6,	// (0x0008523e) list_single_hwr_training_symbol_option_pane

0xcee9,	// (0x00085251) list_single_hwr_training_symbol_option_pane_g1

0xcef1,	// (0x00085259) list_single_hwr_training_symbol_option_pane_t1

0xceff,	// (0x00085267) bg_button_pane_cp023

0xcf08,	// (0x00085270) bg_button_pane_cp024

0x8df3,	// (0x0008115b) vitu2_page_scroll_pane_g1

0x8dfb,	// (0x00081163) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x00087e3f) vitu2_page_scroll_pane_g

0x8e05,	// (0x0008116d) vitu2_page_scroll_pane_t1

0x64de,	// (0x0007e846) popup_char_count_window_g1

0xcf3b,	// (0x000852a3) popup_char_count_window_g2

0xcf44,	// (0x000852ac) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x00087e44) popup_char_count_window_g

0xcf4d,	// (0x000852b5) popup_char_count_window_t1

0xaade,	// (0x00082e46) main_vded2_pane

0xc3a4,	// (0x0008470c) aid_size_cell_imed_line

0xc3ae,	// (0x00084716) grid_imed_line_width_pane

0xef83,	// (0x000872eb) vid4_indicators_pane_g4

0xcf5b,	// (0x000852c3) cell_imed_line_width_pane_ParamLimits

0xcf5b,	// (0x000852c3) cell_imed_line_width_pane

0xcf71,	// (0x000852d9) cell_imed_line_width_pane_g1

0xcf7a,	// (0x000852e2) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x00087e4b) cell_imed_line_width_pane_g

0x8e14,	// (0x0008117c) main_vded2_pane_g1_ParamLimits

0x8e14,	// (0x0008117c) main_vded2_pane_g1

0x8e2f,	// (0x00081197) main_vded2_pane_g2_ParamLimits

0x8e2f,	// (0x00081197) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x00087e50) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x00087e50) main_vded2_pane_g

0x8e41,	// (0x000811a9) vded2_slider_pane_ParamLimits

0x8e41,	// (0x000811a9) vded2_slider_pane

0x8e51,	// (0x000811b9) aid_size_touch_vded2_end

0x8e5b,	// (0x000811c3) aid_size_touch_vded2_playhead

0xcf82,	// (0x000852ea) aid_size_touch_vded2_start

0xcf8a,	// (0x000852f2) vded2_slider_bg_pane

0xcf93,	// (0x000852fb) vded2_slider_pane_g1

0xcf9c,	// (0x00085304) vded2_slider_pane_g2

0x8e65,	// (0x000811cd) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x00087e55) vded2_slider_pane_g

0xcfa4,	// (0x0008530c) vded2_slider_bg_pane_g1

0xcfad,	// (0x00085315) vded2_slider_bg_pane_g2

0xcfb6,	// (0x0008531e) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x00087e5c) vded2_slider_bg_pane_g

0x3bb6,	// (0x0007bf1e) aid_postcard_touch_down_pane_ParamLimits

0x3bb6,	// (0x0007bf1e) aid_postcard_touch_down_pane

0x3bce,	// (0x0007bf36) aid_postcard_touch_up_pane_ParamLimits

0x3bce,	// (0x0007bf36) aid_postcard_touch_up_pane

0xaade,	// (0x00082e46) main_blid2_pane

0xbb58,	// (0x00083ec0) popup_blid2_search_window

0xaade,	// (0x00082e46) blid2_gps_pane

0xaade,	// (0x00082e46) blid2_navig_pane

0xaade,	// (0x00082e46) blid2_search_pane

0xaade,	// (0x00082e46) blid2_tripm_pane

0x8e70,	// (0x000811d8) blid2_search_pane_g1_ParamLimits

0x8e70,	// (0x000811d8) blid2_search_pane_g1

0x8e83,	// (0x000811eb) blid2_search_pane_t1_ParamLimits

0x8e83,	// (0x000811eb) blid2_search_pane_t1

0x8e95,	// (0x000811fd) aid_size_cell_blid2_gps_ParamLimits

0x8e95,	// (0x000811fd) aid_size_cell_blid2_gps

0x8ead,	// (0x00081215) blid2_gps_pane_g1_ParamLimits

0x8ead,	// (0x00081215) blid2_gps_pane_g1

0x8ec1,	// (0x00081229) grid_blid2_satellite_pane_ParamLimits

0x8ec1,	// (0x00081229) grid_blid2_satellite_pane

0x8ed9,	// (0x00081241) blid2_navig_pane_g1_ParamLimits

0x8ed9,	// (0x00081241) blid2_navig_pane_g1

0x8ee5,	// (0x0008124d) blid2_navig_pane_t1_ParamLimits

0x8ee5,	// (0x0008124d) blid2_navig_pane_t1

0x8f00,	// (0x00081268) blid2_navig_pane_t2_ParamLimits

0x8f00,	// (0x00081268) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x00087e63) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x00087e63) blid2_navig_pane_t

0x8f1b,	// (0x00081283) blid2_navig_ring_pane_ParamLimits

0x8f1b,	// (0x00081283) blid2_navig_ring_pane

0x8f36,	// (0x0008129e) blid2_speed_pane_ParamLimits

0x8f36,	// (0x0008129e) blid2_speed_pane

0x8f42,	// (0x000812aa) blid2_tripm_pane_g1_ParamLimits

0x8f42,	// (0x000812aa) blid2_tripm_pane_g1

0x8f5d,	// (0x000812c5) blid2_tripm_pane_g2_ParamLimits

0x8f5d,	// (0x000812c5) blid2_tripm_pane_g2

0x8f71,	// (0x000812d9) blid2_tripm_pane_g3_ParamLimits

0x8f71,	// (0x000812d9) blid2_tripm_pane_g3

0x8f85,	// (0x000812ed) blid2_tripm_pane_g4_ParamLimits

0x8f85,	// (0x000812ed) blid2_tripm_pane_g4

0x8f99,	// (0x00081301) blid2_tripm_pane_g5_ParamLimits

0x8f99,	// (0x00081301) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x00087e68) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x00087e68) blid2_tripm_pane_g

0x8fbf,	// (0x00081327) blid2_tripm_pane_t1_ParamLimits

0x8fbf,	// (0x00081327) blid2_tripm_pane_t1

0x8fd8,	// (0x00081340) blid2_tripm_pane_t2_ParamLimits

0x8fd8,	// (0x00081340) blid2_tripm_pane_t2

0x8ff1,	// (0x00081359) blid2_tripm_pane_t3_ParamLimits

0x8ff1,	// (0x00081359) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x00087e75) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x00087e75) blid2_tripm_pane_t

0x9038,	// (0x000813a0) cell_blid2_satellite_pane_ParamLimits

0x9038,	// (0x000813a0) cell_blid2_satellite_pane

0x9054,	// (0x000813bc) cell_blid2_satellite_pane_g1

0xcfbf,	// (0x00085327) cell_blid2_satellite_pane_t1

0xbebf,	// (0x00084227) blid2_speed_pane_g1

0xcfcd,	// (0x00085335) blid2_speed_pane_t1

0xcfdb,	// (0x00085343) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x00087e7e) blid2_speed_pane_t

0xbebf,	// (0x00084227) blid2_navig_ring_pane_g1

0x905d,	// (0x000813c5) blid2_navig_ring_pane_g2

0x9065,	// (0x000813cd) blid2_navig_ring_pane_g3

0x906d,	// (0x000813d5) blid2_navig_ring_pane_g4

0x9075,	// (0x000813dd) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x00087e83) blid2_navig_ring_pane_g

0xaade,	// (0x00082e46) bg_popup_window_pane_cp011

0xcfe9,	// (0x00085351) popup_blid2_search_window_g1

0xcff1,	// (0x00085359) popup_blid2_search_window_t1

0xcfff,	// (0x00085367) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x00087e8e) popup_blid2_search_window_t

0xb73a,	// (0x00083aa2) main_browser_pane_g1

0xb2fd,	// (0x00083665) main_browser_pane_ParamLimits

0xab57,	// (0x00082ebf) bg_button_pane_cp011_ParamLimits

0x819d,	// (0x00080505) cell_vitu2_function_pane_g1_ParamLimits

0x5745,	// (0x0007daad) bg_popup_sub_pane_cp22_ParamLimits

0x09aa,	// (0x00078d12) input_focus_pane_cp08_ParamLimits

0x8a87,	// (0x00080def) popup_vitu2_query_button_pane_ParamLimits

0x8a87,	// (0x00080def) popup_vitu2_query_button_pane

0x09c1,	// (0x00078d29) popup_vitu2_query_input_button_pane

0xcb9c,	// (0x00084f04) popup_vitu2_query_window_g1_ParamLimits

0x09cb,	// (0x00078d33) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x00087d8f) popup_vitu2_query_window_g_ParamLimits

0xaade,	// (0x00082e46) bg_button_pane_cp026

0x907d,	// (0x000813e5) popup_vitu2_query_input_button_pane_g1

0xaade,	// (0x00082e46) bg_button_pane_cp025

0xd00d,	// (0x00085375) popup_vitu2_query_button_pane_t1

0x66f7,	// (0x0007ea5f) main_mp3_pane_t6

0x6705,	// (0x0007ea6d) popup_slider_window_cp01

0xeee7,	// (0x0008724f) cam4_battery_pane

0xef3c,	// (0x000872a4) cam4_battery_pane_cp02

0xf014,	// (0x0008737c) cam4_battery_pane_cp01

0xf014,	// (0x0008737c) cam4_battery_pane_cp03

0xbebf,	// (0x00084227) cam4_battery_pane_g1

0xd01b,	// (0x00085383) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x00087e93) cam4_battery_pane_g

0xbd85,	// (0x000840ed) popup_blid_sat_info2_window_t11

0x32f6,	// (0x0007b65e) aid_size_touch_mv_arrow_left_ParamLimits

0x331f,	// (0x0007b687) aid_size_touch_mv_arrow_right_ParamLimits

0x337d,	// (0x0007b6e5) navi_pane_g1_ParamLimits

0x3389,	// (0x0007b6f1) navi_pane_g2_ParamLimits

0x33b7,	// (0x0007b71f) navi_pane_g3_ParamLimits

0xf3f5,	// (0x0008775d) navi_pane_g_ParamLimits

0x3475,	// (0x0007b7dd) navi_pane_mv_t1_ParamLimits

0x73b0,	// (0x0007f718) grid_imed_effect_pane_ParamLimits

0x20a8,	// (0x0007a410) aid_placing_vt_slider_lsc

0xb685,	// (0x000839ed) aid_placing_vt_slider_prt

0xab57,	// (0x00082ebf) bg_tb_trans_pane_cp01_ParamLimits

0xc00f,	// (0x00084377) popup_image_details_window_g1_ParamLimits

0xc022,	// (0x0008438a) popup_image_details_window_g2_ParamLimits

0xc037,	// (0x0008439f) popup_image_details_window_g3_ParamLimits

0xc037,	// (0x0008439f) popup_image_details_window_g3

0xf728,	// (0x00087a90) popup_image_details_window_g_ParamLimits

0xc04b,	// (0x000843b3) popup_image_details_window_t1_ParamLimits

0xc05d,	// (0x000843c5) popup_image_details_window_t2_ParamLimits

0xc076,	// (0x000843de) popup_image_details_window_t3_ParamLimits

0xc08a,	// (0x000843f2) popup_image_details_window_t4_ParamLimits

0xc0a5,	// (0x0008440d) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x00087a97) popup_image_details_window_t_ParamLimits

0x8cdb,	// (0x00081043) cl_header_name_pane_ParamLimits

0x8cdb,	// (0x00081043) cl_header_name_pane

0x9085,	// (0x000813ed) cl_header_name_pane_t1_ParamLimits

0x9085,	// (0x000813ed) cl_header_name_pane_t1

0x90a6,	// (0x0008140e) cl_header_name_pane_t2_ParamLimits

0x90a6,	// (0x0008140e) cl_header_name_pane_t2

0x90e8,	// (0x00081450) cl_header_name_pane_t3_ParamLimits

0x90e8,	// (0x00081450) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x00087e98) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x00087e98) cl_header_name_pane_t

0x3446,	// (0x0007b7ae) navi_pane_mv_g2_ParamLimits

0xc89f,	// (0x00084c07) field_vitu2_entry_pane_g1_ParamLimits

0xc8ab,	// (0x00084c13) field_vitu2_entry_pane_g2_ParamLimits

0xc8b7,	// (0x00084c1f) field_vitu2_entry_pane_g3_ParamLimits

0xc8b7,	// (0x00084c1f) field_vitu2_entry_pane_g3

0xf926,	// (0x00087c8e) field_vitu2_entry_pane_g_ParamLimits

0x8119,	// (0x00080481) cell_vitu2_itu_pane_g1_ParamLimits

0x8129,	// (0x00080491) cell_vitu2_itu_pane_g2_ParamLimits

0x8129,	// (0x00080491) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x00087c9a) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x00087c9a) cell_vitu2_itu_pane_g

0xab57,	// (0x00082ebf) bg_vkb2_func_pane_cp05_ParamLimits

0xab57,	// (0x00082ebf) bg_vkb2_func_pane_cp05

0xab57,	// (0x00082ebf) bg_vkb2_func_pane_cp03

0xab57,	// (0x00082ebf) bg_vkb2_func_pane_cp04

0xab57,	// (0x00082ebf) bg_vkb2_func_pane_cp10_ParamLimits

0xab57,	// (0x00082ebf) bg_vkb2_func_pane_cp10

0x0aea,	// (0x00078e52) bg_vkb2_func_pane_cp08

0x8c85,	// (0x00080fed) bg_vkb2_func_pane_cp06

0x8c93,	// (0x00080ffb) bg_vkb2_func_pane_cp07

0xcf11,	// (0x00085279) bg_vkb2_func_pane_cp11_ParamLimits

0xcf11,	// (0x00085279) bg_vkb2_func_pane_cp11

0xcf26,	// (0x0008528e) bg_vkb2_func_pane_cp12_ParamLimits

0xcf26,	// (0x0008528e) bg_vkb2_func_pane_cp12

0xaade,	// (0x00082e46) bg_vkb2_func_pane_cp09

0xc8f4,	// (0x00084c5c) bg_vkb2_func_pane_g1

0xb84b,	// (0x00083bb3) bg_vkb2_func_pane_g2

0xc8fc,	// (0x00084c64) bg_vkb2_func_pane_g3

0xc904,	// (0x00084c6c) bg_vkb2_func_pane_g4

0xcb47,	// (0x00084eaf) bg_vkb2_func_pane_g5

0xc91c,	// (0x00084c84) bg_vkb2_func_pane_g6

0xc924,	// (0x00084c8c) bg_vkb2_func_pane_g7

0xc914,	// (0x00084c7c) bg_vkb2_func_pane_g8

0xb82b,	// (0x00083b93) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x00087e9f) bg_vkb2_func_pane_g

0x8fad,	// (0x00081315) blid2_tripm_pane_g6_ParamLimits

0x8fad,	// (0x00081315) blid2_tripm_pane_g6

0xc75f,	// (0x00084ac7) mp4_progress_pane_g1

0x9024,	// (0x0008138c) blid2_tripm_values_pane_ParamLimits

0x9024,	// (0x0008138c) blid2_tripm_values_pane

0x9119,	// (0x00081481) blid2_tripm_values_pane_t1

0x9127,	// (0x0008148f) blid2_tripm_values_pane_t2

0x9135,	// (0x0008149d) blid2_tripm_values_pane_t3

0x9143,	// (0x000814ab) blid2_tripm_values_pane_t4

0x9151,	// (0x000814b9) blid2_tripm_values_pane_t5

0x915f,	// (0x000814c7) blid2_tripm_values_pane_t6

0x916d,	// (0x000814d5) blid2_tripm_values_pane_t7

0x917b,	// (0x000814e3) blid2_tripm_values_pane_t8

0x9189,	// (0x000814f1) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x00087eb2) blid2_tripm_values_pane_t

0x20e5,	// (0x0007a44d) call_video_pane_t1_ParamLimits

0x20ff,	// (0x0007a467) call_video_pane_t2_ParamLimits

0xf27e,	// (0x000875e6) call_video_pane_t_ParamLimits

0x07e8,	// (0x00078b50) msg_header_pane_g1_ParamLimits

0x3b20,	// (0x0007be88) msg_header_pane_g2_ParamLimits

0x3b20,	// (0x0007be88) msg_header_pane_g2

0x0001,

0xf498,	// (0x00087800) msg_header_pane_g_ParamLimits

0xf498,	// (0x00087800) msg_header_pane_g

0xb2fd,	// (0x00083665) main_clock2_pane_ParamLimits

0x70a6,	// (0x0007f40e) grid_clock2_toolbar_pane_ParamLimits

0x70a6,	// (0x0007f40e) grid_clock2_toolbar_pane

0x70a6,	// (0x0007f40e) listscroll_clock2_pane_ParamLimits

0x70a6,	// (0x0007f40e) listscroll_clock2_pane

0x718d,	// (0x0007f4f5) main_clock2_pane_t3_ParamLimits

0x718d,	// (0x0007f4f5) main_clock2_pane_t3

0x71b0,	// (0x0007f518) main_clock2_pane_t4_ParamLimits

0x71b0,	// (0x0007f518) main_clock2_pane_t4

0xd025,	// (0x0008538d) cell_clock2_toolbar_pane

0xd02d,	// (0x00085395) cell_clock2_toolbar_pane_cp01

0xd02d,	// (0x00085395) cell_clock2_toolbar_pane_cp02

0xd035,	// (0x0008539d) cell_clock2_toolbar_pane_cp03

0xd03d,	// (0x000853a5) list_clock2_pane

0x3080,	// (0x0007b3e8) scroll_pane_cp10

0xd045,	// (0x000853ad) list_single_clock2_pane_ParamLimits

0xd045,	// (0x000853ad) list_single_clock2_pane

0x34e7,	// (0x0007b84f) list_highlight_pane_cp08

0xd052,	// (0x000853ba) list_single_clock2_pane_t1

0xd060,	// (0x000853c8) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x00087ec5) list_single_clock2_pane_t

0xaade,	// (0x00082e46) bg_button_pane_cp10

0xd06e,	// (0x000853d6) cell_clock2_toolbar_pane_g1

0x3b34,	// (0x0007be9c) aid_main_viewer_pane_g1_ParamLimits

0x3b34,	// (0x0007be9c) aid_main_viewer_pane_g1

0x3b42,	// (0x0007beaa) aid_main_viewer_pane_g2_ParamLimits

0x3b42,	// (0x0007beaa) aid_main_viewer_pane_g2

0x3b50,	// (0x0007beb8) aid_main_viewer_pane_g3_ParamLimits

0x3b50,	// (0x0007beb8) aid_main_viewer_pane_g3

0x3b5f,	// (0x0007bec7) aid_main_viewer_pane_g4_ParamLimits

0x3b5f,	// (0x0007bec7) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x00087811) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x00087811) aid_main_viewer_pane_g

0x5731,	// (0x0007da99) main_calc_pane_ParamLimits

0x5753,	// (0x0007dabb) main_dialer2_pane_ParamLimits

0xaade,	// (0x00082e46) main_cam6_pane

0xaade,	// (0x00082e46) main_vid6_pane

0x70b2,	// (0x0007f41a) listscroll_gen_pane_cp06_ParamLimits

0x70b2,	// (0x0007f41a) listscroll_gen_pane_cp06

0x71d3,	// (0x0007f53b) main_clock2_pane_t5_ParamLimits

0x71d3,	// (0x0007f53b) main_clock2_pane_t5

0x7235,	// (0x0007f59d) aid_call2_pane_cp10_ParamLimits

0x7247,	// (0x0007f5af) aid_call_pane_cp10_ParamLimits

0x3281,	// (0x0007b5e9) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3281,	// (0x0007b5e9) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7259,	// (0x0007f5c1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7259,	// (0x0007f5c1) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3281,	// (0x0007b5e9) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x00087b47) popup_clock_analogue_window_cp10_g_ParamLimits

0x726f,	// (0x0007f5d7) popup_clock_analogue_window_cp10_t1_ParamLimits

0x790e,	// (0x0007fc76) cell_dialer2_keypad_pane_g2_ParamLimits

0x790e,	// (0x0007fc76) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x00087c2d) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x00087c2d) cell_dialer2_keypad_pane_g

0x792a,	// (0x0007fc92) cell_dialer2_keypad_pane_t1

0x84c2,	// (0x0008082a) main_cset_text2_pane_ParamLimits

0x84c2,	// (0x0008082a) main_cset_text2_pane

0xcd94,	// (0x000850fc) area_vitu2_query_pane_g1_ParamLimits

0x0aaf,	// (0x00078e17) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x00087de2) area_vitu2_query_pane_g_ParamLimits

0xce18,	// (0x00085180) area_vitu2_query_pane_t7_ParamLimits

0xce18,	// (0x00085180) area_vitu2_query_pane_t7

0x8c85,	// (0x00080fed) bg_button_pane_cp018_ParamLimits

0x8c93,	// (0x00080ffb) bg_button_pane_cp021_ParamLimits

0x0aea,	// (0x00078e52) bg_button_pane_cp022_ParamLimits

0x0aea,	// (0x00078e52) bg_vkb2_func_pane_cp08_ParamLimits

0x8c85,	// (0x00080fed) bg_vkb2_func_pane_cp06_ParamLimits

0x8c93,	// (0x00080ffb) bg_vkb2_func_pane_cp07_ParamLimits

0x0afb,	// (0x00078e63) input_focus_pane_cp09_ParamLimits

0xf09f,	// (0x00087407) cam6_autofocus_pane_ParamLimits

0xf09f,	// (0x00087407) cam6_autofocus_pane

0x9197,	// (0x000814ff) cam6_image_uncrop_pane_ParamLimits

0x9197,	// (0x000814ff) cam6_image_uncrop_pane

0x91a6,	// (0x0008150e) cam6_indi_pane_ParamLimits

0x91a6,	// (0x0008150e) cam6_indi_pane

0x91bc,	// (0x00081524) cam6_mode_pane_ParamLimits

0x91bc,	// (0x00081524) cam6_mode_pane

0x91ce,	// (0x00081536) cam6_timer_pane_ParamLimits

0x91ce,	// (0x00081536) cam6_timer_pane

0x91da,	// (0x00081542) cam6_zoom_pane_ParamLimits

0x91da,	// (0x00081542) cam6_zoom_pane

0x91e8,	// (0x00081550) cam6_mode_pane_g1_ParamLimits

0x91e8,	// (0x00081550) cam6_mode_pane_g1

0x91f8,	// (0x00081560) cam6_mode_pane_g2_ParamLimits

0x91f8,	// (0x00081560) cam6_mode_pane_g2

0x9208,	// (0x00081570) cam6_mode_pane_g3_ParamLimits

0x9208,	// (0x00081570) cam6_mode_pane_g3

0x9218,	// (0x00081580) cam6_mode_pane_g4_ParamLimits

0x9218,	// (0x00081580) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x00087eca) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x00087eca) cam6_mode_pane_g

0xd076,	// (0x000853de) bg_tb_trans_pane_cp08_ParamLimits

0xd076,	// (0x000853de) bg_tb_trans_pane_cp08

0xd084,	// (0x000853ec) cam6_battery_pane_ParamLimits

0xd084,	// (0x000853ec) cam6_battery_pane

0xd09a,	// (0x00085402) cam6_indi_pane_g1_ParamLimits

0xd09a,	// (0x00085402) cam6_indi_pane_g1

0xd0ac,	// (0x00085414) cam6_indi_pane_g2_ParamLimits

0xd0ac,	// (0x00085414) cam6_indi_pane_g2

0xd0be,	// (0x00085426) cam6_indi_pane_g3_ParamLimits

0xd0be,	// (0x00085426) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x00087ed3) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x00087ed3) cam6_indi_pane_g

0xd0d0,	// (0x00085438) cam6_indi_pane_t1_ParamLimits

0xd0d0,	// (0x00085438) cam6_indi_pane_t1

0x7eeb,	// (0x00080253) cam6_autofocus_pane_g1

0x7ef3,	// (0x0008025b) cam6_autofocus_pane_g2

0x7efb,	// (0x00080263) cam6_autofocus_pane_g3

0x7f03,	// (0x0008026b) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x00087eda) cam6_autofocus_pane_g

0xd0f6,	// (0x0008545e) cam6_timer_pane_g1

0xd0fe,	// (0x00085466) cam6_timer_pane_t1

0xd10c,	// (0x00085474) cam6_zoom_cont_pane

0xd114,	// (0x0008547c) cam6_zoom_pane_g1

0xd11c,	// (0x00085484) cam6_zoom_pane_g2

0x9228,	// (0x00081590) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x00087ee3) cam6_zoom_pane_g

0xbebf,	// (0x00084227) cam6_battery_pane_g1

0xbebf,	// (0x00084227) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x00087a54) cam6_battery_pane_g

0xd124,	// (0x0008548c) cam6_zoom_cont_pane_g1

0xd12d,	// (0x00085495) cam6_zoom_cont_pane_g2

0xd136,	// (0x0008549e) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x00087eea) cam6_zoom_cont_pane_g

0x9245,	// (0x000815ad) cam6_mode_pane_cp_ParamLimits

0x9245,	// (0x000815ad) cam6_mode_pane_cp

0x91da,	// (0x00081542) cam6_zoom_pane_cp_ParamLimits

0x91da,	// (0x00081542) cam6_zoom_pane_cp

0x9257,	// (0x000815bf) vid6_image_uncrop_cif_pane_ParamLimits

0x9257,	// (0x000815bf) vid6_image_uncrop_cif_pane

0x9267,	// (0x000815cf) vid6_image_uncrop_nhd_pane_ParamLimits

0x9267,	// (0x000815cf) vid6_image_uncrop_nhd_pane

0x9197,	// (0x000814ff) vid6_image_uncrop_vga_pane_ParamLimits

0x9197,	// (0x000814ff) vid6_image_uncrop_vga_pane

0x9276,	// (0x000815de) vid6_image_uncrop_wvga_pane_ParamLimits

0x9276,	// (0x000815de) vid6_image_uncrop_wvga_pane

0x9285,	// (0x000815ed) vid6_indi_pane_ParamLimits

0x9285,	// (0x000815ed) vid6_indi_pane

0xd076,	// (0x000853de) bg_tb_trans_pane_cp09_ParamLimits

0xd076,	// (0x000853de) bg_tb_trans_pane_cp09

0xd14e,	// (0x000854b6) cam6_battery_pane_cp_ParamLimits

0xd14e,	// (0x000854b6) cam6_battery_pane_cp

0xd15a,	// (0x000854c2) vid6_indi_pane_g1_ParamLimits

0xd15a,	// (0x000854c2) vid6_indi_pane_g1

0xd16c,	// (0x000854d4) vid6_indi_pane_g2_ParamLimits

0xd16c,	// (0x000854d4) vid6_indi_pane_g2

0xd17e,	// (0x000854e6) vid6_indi_pane_g3_ParamLimits

0xd17e,	// (0x000854e6) vid6_indi_pane_g3

0xd195,	// (0x000854fd) vid6_indi_pane_g4_ParamLimits

0xd195,	// (0x000854fd) vid6_indi_pane_g4

0xd1ac,	// (0x00085514) vid6_indi_pane_g5_ParamLimits

0xd1ac,	// (0x00085514) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x00087ef1) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x00087ef1) vid6_indi_pane_g

0xd1c6,	// (0x0008552e) vid6_indi_pane_t1_ParamLimits

0xd1c6,	// (0x0008552e) vid6_indi_pane_t1

0xd1dc,	// (0x00085544) vid6_indi_pane_t2_ParamLimits

0xd1dc,	// (0x00085544) vid6_indi_pane_t2

0xd204,	// (0x0008556c) vid6_indi_pane_t3_ParamLimits

0xd204,	// (0x0008556c) vid6_indi_pane_t3

0xd22c,	// (0x00085594) vid6_indi_pane_t4_ParamLimits

0xd22c,	// (0x00085594) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x00087efc) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x00087efc) vid6_indi_pane_t

0xd250,	// (0x000855b8) wait_bar_pane_cp08

0x929d,	// (0x00081605) main_cset_text2_pane_t1_ParamLimits

0x929d,	// (0x00081605) main_cset_text2_pane_t1

0x9230,	// (0x00081598) listscroll_gen_pane_cp06_t1_ParamLimits

0x9230,	// (0x00081598) listscroll_gen_pane_cp06_t1

0xaade,	// (0x00082e46) main_cam6_set_pane

0xc0ef,	// (0x00084457) bg_tb_trans_pane_cp06_ParamLimits

0xeeef,	// (0x00087257) cam4_indicators_pane_g1_ParamLimits

0xef00,	// (0x00087268) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x00087c6a) cam4_indicators_pane_g_ParamLimits

0xef18,	// (0x00087280) cam4_indicators_pane_t1_ParamLimits

0xab57,	// (0x00082ebf) bg_tb_trans_pane_cp07_ParamLimits

0xef46,	// (0x000872ae) vid4_indicators_pane_g1_ParamLimits

0xef5c,	// (0x000872c4) vid4_indicators_pane_g2_ParamLimits

0xef70,	// (0x000872d8) vid4_indicators_pane_g3_ParamLimits

0xef83,	// (0x000872eb) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x00087c7c) vid4_indicators_pane_g_ParamLimits

0xefa1,	// (0x00087309) vid4_indicators_pane_t1_ParamLimits

0x8dcf,	// (0x00081137) vid4_progress_pane_g1_ParamLimits

0x8de1,	// (0x00081149) vid4_progress_pane_g2_ParamLimits

0xbb40,	// (0x00083ea8) vid4_progress_pane_g3_ParamLimits

0xf01c,	// (0x00087384) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x00087e2d) vid4_progress_pane_g_ParamLimits

0xf03a,	// (0x000873a2) vid4_progress_pane_t1_ParamLimits

0xf04f,	// (0x000873b7) vid4_progress_pane_t2_ParamLimits

0xf065,	// (0x000873cd) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x00087e38) vid4_progress_pane_t_ParamLimits

0xf07a,	// (0x000873e2) wait_bar_pane_cp07_ParamLimits

0x92be,	// (0x00081626) main_cam6_set_pane_g2_ParamLimits

0x92be,	// (0x00081626) main_cam6_set_pane_g2

0x92e4,	// (0x0008164c) main_cset6_listscroll_pane_ParamLimits

0x92e4,	// (0x0008164c) main_cset6_listscroll_pane

0x9302,	// (0x0008166a) main_cset6_slider_pane_ParamLimits

0x9302,	// (0x0008166a) main_cset6_slider_pane

0x9318,	// (0x00081680) main_cset6_text2_pane_ParamLimits

0x9318,	// (0x00081680) main_cset6_text2_pane

0xd25f,	// (0x000855c7) main_cset6_text_pane

0xd267,	// (0x000855cf) main_cset_list_pane_copy1_ParamLimits

0xd267,	// (0x000855cf) main_cset_list_pane_copy1

0xd277,	// (0x000855df) scroll_pane_cp028_copy1

0x9326,	// (0x0008168e) cset_list_set_pane_copy1

0x933a,	// (0x000816a2) aid_position_infowindow_above_copy1

0x9342,	// (0x000816aa) aid_position_infowindow_below_copy1

0x934a,	// (0x000816b2) cset_list_set_pane_g1_copy1

0x0b0c,	// (0x00078e74) cset_list_set_pane_g3_copy1_ParamLimits

0x0b0c,	// (0x00078e74) cset_list_set_pane_g3_copy1

0x0b1b,	// (0x00078e83) cset_list_set_pane_t1_copy1_ParamLimits

0x0b1b,	// (0x00078e83) cset_list_set_pane_t1_copy1

0xab57,	// (0x00082ebf) list_highlight_pane_cp021_copy1_ParamLimits

0xab57,	// (0x00082ebf) list_highlight_pane_cp021_copy1

0xd280,	// (0x000855e8) cset6_slider_pane_ParamLimits

0xd280,	// (0x000855e8) cset6_slider_pane

0xd2ac,	// (0x00085614) main_cset6_slider_pane_g1_ParamLimits

0xd2ac,	// (0x00085614) main_cset6_slider_pane_g1

0x9352,	// (0x000816ba) main_cset6_slider_pane_g2_ParamLimits

0x9352,	// (0x000816ba) main_cset6_slider_pane_g2

0xd2d4,	// (0x0008563c) main_cset6_slider_pane_g3_ParamLimits

0xd2d4,	// (0x0008563c) main_cset6_slider_pane_g3

0x937a,	// (0x000816e2) main_cset6_slider_pane_g4_ParamLimits

0x937a,	// (0x000816e2) main_cset6_slider_pane_g4

0x9386,	// (0x000816ee) main_cset6_slider_pane_g5_ParamLimits

0x9386,	// (0x000816ee) main_cset6_slider_pane_g5

0xca27,	// (0x00084d8f) main_cset6_slider_pane_g7_ParamLimits

0xca27,	// (0x00084d8f) main_cset6_slider_pane_g7

0xca33,	// (0x00084d9b) main_cset6_slider_pane_g8_ParamLimits

0xca33,	// (0x00084d9b) main_cset6_slider_pane_g8

0x8571,	// (0x000808d9) main_cset6_slider_pane_g9_ParamLimits

0x8571,	// (0x000808d9) main_cset6_slider_pane_g9

0x857d,	// (0x000808e5) main_cset6_slider_pane_g10_ParamLimits

0x857d,	// (0x000808e5) main_cset6_slider_pane_g10

0x8589,	// (0x000808f1) main_cset6_slider_pane_g11_ParamLimits

0x8589,	// (0x000808f1) main_cset6_slider_pane_g11

0x8595,	// (0x000808fd) main_cset6_slider_pane_g12_ParamLimits

0x8595,	// (0x000808fd) main_cset6_slider_pane_g12

0x85a1,	// (0x00080909) main_cset6_slider_pane_g13_ParamLimits

0x85a1,	// (0x00080909) main_cset6_slider_pane_g13

0x85ad,	// (0x00080915) main_cset6_slider_pane_g14_ParamLimits

0x85ad,	// (0x00080915) main_cset6_slider_pane_g14

0x9394,	// (0x000816fc) main_cset6_slider_pane_g15_ParamLimits

0x9394,	// (0x000816fc) main_cset6_slider_pane_g15

0x85d1,	// (0x00080939) main_cset6_slider_pane_g16_ParamLimits

0x85d1,	// (0x00080939) main_cset6_slider_pane_g16

0x85df,	// (0x00080947) main_cset6_slider_pane_g17_ParamLimits

0x85df,	// (0x00080947) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x00087f05) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x00087f05) main_cset6_slider_pane_g

0xd2e0,	// (0x00085648) main_cset6_slider_pane_t1_ParamLimits

0xd2e0,	// (0x00085648) main_cset6_slider_pane_t1

0x93c4,	// (0x0008172c) main_cset6_slider_pane_t2_ParamLimits

0x93c4,	// (0x0008172c) main_cset6_slider_pane_t2

0x93ef,	// (0x00081757) main_cset6_slider_pane_t3_ParamLimits

0x93ef,	// (0x00081757) main_cset6_slider_pane_t3

0x941a,	// (0x00081782) main_cset6_slider_pane_t4_ParamLimits

0x941a,	// (0x00081782) main_cset6_slider_pane_t4

0x9447,	// (0x000817af) main_cset6_slider_pane_t5_ParamLimits

0x9447,	// (0x000817af) main_cset6_slider_pane_t5

0xd321,	// (0x00085689) main_cset6_slider_pane_t7_ParamLimits

0xd321,	// (0x00085689) main_cset6_slider_pane_t7

0x9474,	// (0x000817dc) main_cset6_slider_pane_t8_ParamLimits

0x9474,	// (0x000817dc) main_cset6_slider_pane_t8

0x9498,	// (0x00081800) main_cset6_slider_pane_t9_ParamLimits

0x9498,	// (0x00081800) main_cset6_slider_pane_t9

0x94bc,	// (0x00081824) main_cset6_slider_pane_t10_ParamLimits

0x94bc,	// (0x00081824) main_cset6_slider_pane_t10

0x94e0,	// (0x00081848) main_cset6_slider_pane_t11_ParamLimits

0x94e0,	// (0x00081848) main_cset6_slider_pane_t11

0xd357,	// (0x000856bf) main_cset6_slider_pane_t14_ParamLimits

0xd357,	// (0x000856bf) main_cset6_slider_pane_t14

0xd390,	// (0x000856f8) main_cset6_slider_pane_t15_ParamLimits

0xd390,	// (0x000856f8) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x00087f2a) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x00087f2a) main_cset6_slider_pane_t

0xcaeb,	// (0x00084e53) cset_slider_pane_g1_copy1

0xcaf4,	// (0x00084e5c) cset_slider_pane_g2_copy1

0xcafd,	// (0x00084e65) cset_slider_pane_g3_copy1

0xaade,	// (0x00082e46) bg_popup_sub_pane_cp011_copy1

0xd49a,	// (0x00085802) main_cset_text_pane_g1_copy1

0xcbb0,	// (0x00084f18) main_cset_text_pane_t1_copy1

0xcbbe,	// (0x00084f26) main_cset_text_pane_t2_copy1

0xcbcc,	// (0x00084f34) main_cset_text_pane_t3_copy1

0xcbda,	// (0x00084f42) main_cset_text_pane_t4_copy1

0xcbe8,	// (0x00084f50) main_cset_text_pane_t5_copy1

0xd4a2,	// (0x0008580a) main_cset_text_pane_t6_copy1

0xd4b0,	// (0x00085818) main_cset_text_pane_t7_copy1

0x929d,	// (0x00081605) main_cset_text2_pane_t1_copy1

0xab57,	// (0x00082ebf) main_ncimui_pane

0x59e1,	// (0x0007dd49) popup_query_ncimui_window_ParamLimits

0x59e1,	// (0x0007dd49) popup_query_ncimui_window

0xc154,	// (0x000844bc) field_cale_ev2_pane_g4_ParamLimits

0xc154,	// (0x000844bc) field_cale_ev2_pane_g4

0x77d9,	// (0x0007fb41) cell_video_dialer_keypad_pane_g2_ParamLimits

0x77d9,	// (0x0007fb41) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x00087c08) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x00087c08) cell_video_dialer_keypad_pane_g

0x77f1,	// (0x0007fb59) cell_video_dialer_keypad_pane_t1

0xaade,	// (0x00082e46) bg_popup_window_pane_cp012

0x2ed5,	// (0x0007b23d) heading_pane_cp06

0xd4dc,	// (0x00085844) ncim_query_content_pane

0xaade,	// (0x00082e46) bg_popup_heading_pane_cp01

0xd4e4,	// (0x0008584c) ncim_heading_pane_t1

0xd4f2,	// (0x0008585a) ncim_indicator_popup_pane

0xd504,	// (0x0008586c) ncim_query_button_pane

0xd51a,	// (0x00085882) ncim_query_content_pane_t1

0xd52c,	// (0x00085894) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x00087f6e) ncim_query_content_pane_t

0xd566,	// (0x000858ce) ncim_query_list_pane

0xd578,	// (0x000858e0) ncim_query_popup_pane

0xd4f2,	// (0x0008585a) ncim_indicator_popup_pane_ParamLimits

0x962c,	// (0x00081994) ncim_query_content_pane_g1_ParamLimits

0x962c,	// (0x00081994) ncim_query_content_pane_g1

0xd51a,	// (0x00085882) ncim_query_content_pane_t1_ParamLimits

0xd52c,	// (0x00085894) ncim_query_content_pane_t2_ParamLimits

0x9638,	// (0x000819a0) ncim_query_content_pane_t3_ParamLimits

0x9638,	// (0x000819a0) ncim_query_content_pane_t3

0x9660,	// (0x000819c8) ncim_query_content_pane_t4_ParamLimits

0x9660,	// (0x000819c8) ncim_query_content_pane_t4

0x9688,	// (0x000819f0) ncim_query_content_pane_t5_ParamLimits

0x9688,	// (0x000819f0) ncim_query_content_pane_t5

0xd53e,	// (0x000858a6) ncim_query_content_pane_t6_ParamLimits

0xd53e,	// (0x000858a6) ncim_query_content_pane_t6

0xfc06,	// (0x00087f6e) ncim_query_content_pane_t_ParamLimits

0xd566,	// (0x000858ce) ncim_query_list_pane_ParamLimits

0xd578,	// (0x000858e0) ncim_query_popup_pane_ParamLimits

0xd58c,	// (0x000858f4) wait_bar_pane_cp04

0xaade,	// (0x00082e46) input_focus_pane_cp011

0xd594,	// (0x000858fc) ncim_query_popup_pane_t1

0xd5a2,	// (0x0008590a) ncim_list_query_list_pane_ParamLimits

0xd5a2,	// (0x0008590a) ncim_list_query_list_pane

0xaade,	// (0x00082e46) bg_button_pane_cp027

0xd5b5,	// (0x0008591d) ncim_query_button_pane_g1

0xaade,	// (0x00082e46) list_highlight_pane_cp012

0xd5bf,	// (0x00085927) ncim_list_query_list_pane_g1

0xd5c7,	// (0x0008592f) ncim_list_query_list_pane_t1

0xef0c,	// (0x00087274) cam4_indicators_pane_g3_ParamLimits

0xef0c,	// (0x00087274) cam4_indicators_pane_g3

0xef8f,	// (0x000872f7) vid4_indicators_pane_g5_ParamLimits

0xef8f,	// (0x000872f7) vid4_indicators_pane_g5

0xf02b,	// (0x00087393) vid4_progress_pane_g5_ParamLimits

0xf02b,	// (0x00087393) vid4_progress_pane_g5

0x951a,	// (0x00081882) main_ncimui_pane_g1

0x9580,	// (0x000818e8) ncimui_group_query_pane_ParamLimits

0x9580,	// (0x000818e8) ncimui_group_query_pane

0x95c8,	// (0x00081930) ncimui_list_pane_ParamLimits

0x95c8,	// (0x00081930) ncimui_list_pane

0x95ef,	// (0x00081957) ncimui_text_pane_ParamLimits

0x95ef,	// (0x00081957) ncimui_text_pane

0x96b0,	// (0x00081a18) ncimui_text_pane_t1_ParamLimits

0x96b0,	// (0x00081a18) ncimui_text_pane_t1

0xd5d5,	// (0x0008593d) ncimui_list_single_graphic_pane_ParamLimits

0xd5d5,	// (0x0008593d) ncimui_list_single_graphic_pane

0x96ce,	// (0x00081a36) ncimui_query_pane_ParamLimits

0x96ce,	// (0x00081a36) ncimui_query_pane

0xaade,	// (0x00082e46) list_highlight_pane_cp013

0xd5e5,	// (0x0008594d) ncim_list_query_list_pane_t1_copy1

0xd5bf,	// (0x00085927) ncim_list_single_graphic_pane_g1

0xd5f3,	// (0x0008595b) ncim_query_button_pane_cp01

0xd5ff,	// (0x00085967) ncim_query_entry_pane_ParamLimits

0xd5ff,	// (0x00085967) ncim_query_entry_pane

0xd612,	// (0x0008597a) ncimui_query_pane_g1

0xd61e,	// (0x00085986) ncimui_query_pane_t1_ParamLimits

0xd61e,	// (0x00085986) ncimui_query_pane_t1

0xab57,	// (0x00082ebf) input_focus_pane_cp012

0xd637,	// (0x0008599f) ncim_query_entry_pane_t1

0xb2fd,	// (0x00083665) main_im_pane_ParamLimits

0xab57,	// (0x00082ebf) main_mobtv_pane_ParamLimits

0xab57,	// (0x00082ebf) main_mobtv_pane

0x93ac,	// (0x00081714) main_cset6_slider_pane_g18_ParamLimits

0x93ac,	// (0x00081714) main_cset6_slider_pane_g18

0x93b8,	// (0x00081720) main_cset6_slider_pane_g19_ParamLimits

0x93b8,	// (0x00081720) main_cset6_slider_pane_g19

0xf0ad,	// (0x00087415) bg_main_mobtv_pane_ParamLimits

0xf0ad,	// (0x00087415) bg_main_mobtv_pane

0x96e1,	// (0x00081a49) main_mobtv_info_pane

0x96ec,	// (0x00081a54) main_mobtv_loading_pane_ParamLimits

0x96ec,	// (0x00081a54) main_mobtv_loading_pane

0xd649,	// (0x000859b1) main_mobtv_pg_channel_list_pane

0xd653,	// (0x000859bb) main_mobtv_pg_hdr_pane

0x96f9,	// (0x00081a61) main_mobtv_programe_curr_pane_ParamLimits

0x96f9,	// (0x00081a61) main_mobtv_programe_curr_pane

0x9706,	// (0x00081a6e) main_mobtv_programe_next_pane_ParamLimits

0x9706,	// (0x00081a6e) main_mobtv_programe_next_pane

0xd65c,	// (0x000859c4) popup_mobtv_noti_window

0xbebf,	// (0x00084227) main_tv_pg_hdr_pane_g1

0xd666,	// (0x000859ce) main_tv_pg_hdr_pane_g2

0xd66e,	// (0x000859d6) main_tv_pg_hdr_pane_g3

0xd676,	// (0x000859de) main_tv_pg_hdr_pane_g4

0xd67e,	// (0x000859e6) main_tv_pg_hdr_pane_g5

0xd688,	// (0x000859f0) main_tv_pg_hdr_pane_g6

0xd692,	// (0x000859fa) main_tv_pg_hdr_pane_g7

0xd69c,	// (0x00085a04) main_tv_pg_hdr_pane_g8

0xd6a6,	// (0x00085a0e) main_tv_pg_hdr_pane_g9

0xd6b0,	// (0x00085a18) main_tv_pg_hdr_pane_g10

0xd6ba,	// (0x00085a22) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x00087f7b) main_tv_pg_hdr_pane_g

0xd6c4,	// (0x00085a2c) main_tv_pg_hdr_pane_t1

0xd6d2,	// (0x00085a3a) main_tv_pg_hdr_pane_t2

0xd6e0,	// (0x00085a48) main_tv_pg_hdr_pane_t3

0xd6f0,	// (0x00085a58) main_tv_pg_hdr_pane_t4

0xd700,	// (0x00085a68) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x00087f92) main_tv_pg_hdr_pane_t

0xd710,	// (0x00085a78) single_mobtv_pg_channel_pane_ParamLimits

0xd710,	// (0x00085a78) single_mobtv_pg_channel_pane

0xd722,	// (0x00085a8a) single_mobtv_pg_channel_table_pane

0xd72b,	// (0x00085a93) single_mobtv_pg_channel_thumb_pane

0xd734,	// (0x00085a9c) single_tv_pg_channel_pane_g1

0xd73d,	// (0x00085aa5) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x00087f9d) single_tv_pg_channel_pane_g

0xc0ef,	// (0x00084457) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc0ef,	// (0x00084457) bg_single_mobtv_pg_channel_thumb_pane

0xd746,	// (0x00085aae) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd746,	// (0x00085aae) single_mobtv_pg_channel_thumb_pane_g1

0xd754,	// (0x00085abc) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd754,	// (0x00085abc) single_mobtv_pg_channel_thumb_pane_g2

0xd760,	// (0x00085ac8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd760,	// (0x00085ac8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x00087fa2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x00087fa2) single_mobtv_pg_channel_thumb_pane_g

0xd76c,	// (0x00085ad4) single_mobtv_pg_channel_thumb_pane_t1

0xd77a,	// (0x00085ae2) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x00087fa9) single_mobtv_pg_channel_thumb_pane_t

0xbebf,	// (0x00084227) bg_single_mobtv_pg_channel_table_pane_g1

0xbebf,	// (0x00084227) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x00087a54) bg_single_mobtv_pg_channel_table_pane_g

0xd788,	// (0x00085af0) single_mobtv_pg_channel_table_pane_t1

0xd796,	// (0x00085afe) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x00087fae) single_mobtv_pg_channel_table_pane_t

0x971b,	// (0x00081a83) main_mobtv_info_pane_g1_ParamLimits

0x971b,	// (0x00081a83) main_mobtv_info_pane_g1

0x9739,	// (0x00081aa1) main_mobtv_info_pane_t1_ParamLimits

0x9739,	// (0x00081aa1) main_mobtv_info_pane_t1

0x97b1,	// (0x00081b19) main_mobtv_info_pane_t2_ParamLimits

0x97b1,	// (0x00081b19) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x00087fb8) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x00087fb8) main_mobtv_info_pane_t

0x9842,	// (0x00081baa) wait_bar_pane_cp05

0x9854,	// (0x00081bbc) main_mobtv_loading_pane_g1_ParamLimits

0x9854,	// (0x00081bbc) main_mobtv_loading_pane_g1

0x9865,	// (0x00081bcd) main_mobtv_loading_pane_g2_ParamLimits

0x9865,	// (0x00081bcd) main_mobtv_loading_pane_g2

0x9871,	// (0x00081bd9) main_mobtv_loading_pane_g3_ParamLimits

0x9871,	// (0x00081bd9) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x00087fbf) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x00087fbf) main_mobtv_loading_pane_g

0xd7a4,	// (0x00085b0c) main_mobtv_loading_pane_t1_ParamLimits

0xd7a4,	// (0x00085b0c) main_mobtv_loading_pane_t1

0xd7bc,	// (0x00085b24) main_mobtv_loading_pane_t2_ParamLimits

0xd7bc,	// (0x00085b24) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x00087fc6) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x00087fc6) main_mobtv_loading_pane_t

0x9884,	// (0x00081bec) wait_bar_pane_cp06_ParamLimits

0x9884,	// (0x00081bec) wait_bar_pane_cp06

0xd7e0,	// (0x00085b48) main_mobtv_programe_curr_pane_t1

0xd7ee,	// (0x00085b56) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x00087fcb) main_mobtv_programe_curr_pane_t

0xd7fc,	// (0x00085b64) main_mobtv_programe_next_pane_t1

0xd80a,	// (0x00085b72) main_mobtv_programe_next_pane_t2

0xd818,	// (0x00085b80) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x00087fd0) main_mobtv_programe_next_pane_t

0xaade,	// (0x00082e46) bg_popup_mobtv_noti_window_pane

0xd826,	// (0x00085b8e) popup_mobtv_noti_window_g1

0xd82e,	// (0x00085b96) popup_mobtv_noti_window_t1

0xd83c,	// (0x00085ba4) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x00087fd7) popup_mobtv_noti_window_t

0xbebf,	// (0x00084227) bg_popup_mobtv_noti_window_pane_g1

0xaade,	// (0x00082e46) sc_clock_pane

0xaade,	// (0x00082e46) main_fs_bigclock_pane

0x900e,	// (0x00081376) blid2_tripm_pane_t4_ParamLimits

0x900e,	// (0x00081376) blid2_tripm_pane_t4

0x9893,	// (0x00081bfb) sc_clock_pane_g1_ParamLimits

0x9893,	// (0x00081bfb) sc_clock_pane_g1

0x98a5,	// (0x00081c0d) sc_clock_pane_t1_ParamLimits

0x98a5,	// (0x00081c0d) sc_clock_pane_t1

0x98c9,	// (0x00081c31) sc_clock_pane_t2_ParamLimits

0x98c9,	// (0x00081c31) sc_clock_pane_t2

0x98e1,	// (0x00081c49) sc_clock_pane_t3_ParamLimits

0x98e1,	// (0x00081c49) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x00087fdc) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x00087fdc) sc_clock_pane_t

0xa1e0,	// (0x00082548) main_fs_bigclock_indicator_pane_ParamLimits

0xa1e0,	// (0x00082548) main_fs_bigclock_indicator_pane

0xc0bf,	// (0x00084427) main_fs_bigclock_pane_g1_ParamLimits

0xc0bf,	// (0x00084427) main_fs_bigclock_pane_g1

0xa1ec,	// (0x00082554) main_fs_bigclock_pane_t1_ParamLimits

0xa1ec,	// (0x00082554) main_fs_bigclock_pane_t1

0xa1fe,	// (0x00082566) main_fs_bigclock_pane_t2_ParamLimits

0xa1fe,	// (0x00082566) main_fs_bigclock_pane_t2

0xa212,	// (0x0008257a) main_fs_bigclock_pane_t3_ParamLimits

0xa212,	// (0x0008257a) main_fs_bigclock_pane_t3

0x0002,

0xfe78,	// (0x000881e0) main_fs_bigclock_pane_t_ParamLimits

0xfe78,	// (0x000881e0) main_fs_bigclock_pane_t

0xe4b7,	// (0x0008681f) main_fs_bigclock_indicator_pane_g1

0xd50c,	// (0x00085874) ncim_query_content_pane_g2_ParamLimits

0xd50c,	// (0x00085874) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x00087f69) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x00087f69) ncim_query_content_pane_g

0x98f8,	// (0x00081c60) sc_clock_pane_t4_ParamLimits

0x98f8,	// (0x00081c60) sc_clock_pane_t4

0xab57,	// (0x00082ebf) main_radioblah_pane

0xc80e,	// (0x00084b76) cell_call4_button_pane_t1_copy1_ParamLimits

0xc80e,	// (0x00084b76) cell_call4_button_pane_t1_copy1

0x9532,	// (0x0008189a) main_ncimui_pane_t1_ParamLimits

0x9532,	// (0x0008189a) main_ncimui_pane_t1

0x954c,	// (0x000818b4) main_ncimui_pane_t2_ParamLimits

0x954c,	// (0x000818b4) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x00087f62) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x00087f62) main_ncimui_pane_t

0xd988,	// (0x00085cf0) main_radioblah_anim_pane_ParamLimits

0xd988,	// (0x00085cf0) main_radioblah_anim_pane

0xd999,	// (0x00085d01) main_radioblah_info_pane_ParamLimits

0xd999,	// (0x00085d01) main_radioblah_info_pane

0xd9ad,	// (0x00085d15) main_radioblah_pane_t1_ParamLimits

0xd9ad,	// (0x00085d15) main_radioblah_pane_t1

0xd9c9,	// (0x00085d31) main_radioblah_pane_t2_ParamLimits

0xd9c9,	// (0x00085d31) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x00087ffd) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x00087ffd) main_radioblah_pane_t

0x99a8,	// (0x00081d10) main_radioblah_rocker_ctrl_pane_ParamLimits

0x99a8,	// (0x00081d10) main_radioblah_rocker_ctrl_pane

0xda11,	// (0x00085d79) main_radioblah_info_pane_t1_ParamLimits

0xda11,	// (0x00085d79) main_radioblah_info_pane_t1

0x9a00,	// (0x00081d68) main_radioblah_info_pane_t2_ParamLimits

0x9a00,	// (0x00081d68) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x00088006) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x00088006) main_radioblah_info_pane_t

0xbebf,	// (0x00084227) main_radioblah_rocker_ctrl_pane_g1

0x9ab0,	// (0x00081e18) main_radioblah_rocker_ctrl_pane_g2

0x9ab8,	// (0x00081e20) main_radioblah_rocker_ctrl_pane_g3

0x9ac0,	// (0x00081e28) main_radioblah_rocker_ctrl_pane_g4

0x9ac8,	// (0x00081e30) main_radioblah_rocker_ctrl_pane_g5

0x9ad0,	// (0x00081e38) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x0008800f) main_radioblah_rocker_ctrl_pane_g

0x929d,	// (0x00081605) main_cset_text2_pane_t1_copy1_ParamLimits

0xeedd,	// (0x00087245) cam4_image_uncrop_qvga_pane

0xef32,	// (0x0008729a) vid4_image_uncrop_qcif_pane

0xf09f,	// (0x00087407) cam6_image_uncrop_qvga_pane_ParamLimits

0xf09f,	// (0x00087407) cam6_image_uncrop_qvga_pane

0xd13e,	// (0x000854a6) vid6_image_uncrop_qcif_pane_ParamLimits

0xd13e,	// (0x000854a6) vid6_image_uncrop_qcif_pane

0xaade,	// (0x00082e46) bg_popup_preview_window_pane_cp03

0xd4be,	// (0x00085826) list_cset_text2_pane

0xd4c6,	// (0x0008582e) main_cset6_text2_pane_g1

0xd4ce,	// (0x00085836) main_cset6_text2_pane_t1

0xda4b,	// (0x00085db3) list_cset_text2_pane_t1_ParamLimits

0xda4b,	// (0x00085db3) list_cset_text2_pane_t1

0xab57,	// (0x00082ebf) main_radioblah_pane_ParamLimits

0x982e,	// (0x00081b96) main_mobtv_info_pane_t3_ParamLimits

0x982e,	// (0x00081b96) main_mobtv_info_pane_t3

0x9996,	// (0x00081cfe) main_radioblah_pane_g1

0x99d0,	// (0x00081d38) main_radioblah_info_pane_g1

0x9a55,	// (0x00081dbd) main_radioblah_info_pane_t3_ParamLimits

0x9a55,	// (0x00081dbd) main_radioblah_info_pane_t3

0x2c9c,	// (0x0007b004) highlight_cell_cale_month_pane_ParamLimits

0x2c9c,	// (0x0007b004) highlight_cell_cale_month_pane

0xaade,	// (0x00082e46) main_phob_fisheye_pane

0xc1e3,	// (0x0008454b) scroll_pane_cp0031_ParamLimits

0xc1e3,	// (0x0008454b) scroll_pane_cp0031

0xd250,	// (0x000855b8) wait_bar_pane_cp08_ParamLimits

0x9326,	// (0x0008168e) cset_list_set_pane_copy1_ParamLimits

0xda65,	// (0x00085dcd) highlight_cell_cale_month_pane_g1

0x9ad8,	// (0x00081e40) highlight_cell_cale_month_pane_t1

0xce84,	// (0x000851ec) list_gen_pane_cp01

0xca12,	// (0x00084d7a) scroll_pane_01

0x9ae6,	// (0x00081e4e) list_single_double_fisheye_pane

0x0b30,	// (0x00078e98) list_double_fisheye_pane_g1_ParamLimits

0x0b30,	// (0x00078e98) list_double_fisheye_pane_g1

0x0b3c,	// (0x00078ea4) list_double_fisheye_pane_g2_ParamLimits

0x0b3c,	// (0x00078ea4) list_double_fisheye_pane_g2

0x9aef,	// (0x00081e57) list_double_fisheye_pane_g3_ParamLimits

0x9aef,	// (0x00081e57) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x0008801c) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x0008801c) list_double_fisheye_pane_g

0x0b6d,	// (0x00078ed5) list_double_fisheye_pane_t1_ParamLimits

0x0b6d,	// (0x00078ed5) list_double_fisheye_pane_t1

0x0b88,	// (0x00078ef0) list_double_fisheye_pane_t2_ParamLimits

0x0b88,	// (0x00078ef0) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x00088027) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x00088027) list_double_fisheye_pane_t

0xaade,	// (0x00082e46) main_call5_pane

0x9923,	// (0x00081c8b) sc_swipe_pane_ParamLimits

0x9923,	// (0x00081c8b) sc_swipe_pane

0x9b0e,	// (0x00081e76) call5_image_pane_ParamLimits

0x9b0e,	// (0x00081e76) call5_image_pane

0x9b2b,	// (0x00081e93) call5_swipe_1_pane_ParamLimits

0x9b2b,	// (0x00081e93) call5_swipe_1_pane

0x9b3e,	// (0x00081ea6) call5_swipe_2_pane_ParamLimits

0x9b3e,	// (0x00081ea6) call5_swipe_2_pane

0x9b6b,	// (0x00081ed3) popup_call5_audio_first_window_ParamLimits

0x9b6b,	// (0x00081ed3) popup_call5_audio_first_window

0xc0ef,	// (0x00084457) call5_swipe_1_pane_g1_ParamLimits

0xc0ef,	// (0x00084457) call5_swipe_1_pane_g1

0xda6d,	// (0x00085dd5) call5_swipe_1_pane_g2_ParamLimits

0xda6d,	// (0x00085dd5) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x0008802c) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x0008802c) call5_swipe_1_pane_g

0xda79,	// (0x00085de1) call5_swipe_1_pane_t1_ParamLimits

0xda79,	// (0x00085de1) call5_swipe_1_pane_t1

0xc0ef,	// (0x00084457) call5_swipe_2_pane_g1_ParamLimits

0xc0ef,	// (0x00084457) call5_swipe_2_pane_g1

0xda8e,	// (0x00085df6) call5_swipe_2_pane_g2_ParamLimits

0xda8e,	// (0x00085df6) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x00088031) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x00088031) call5_swipe_2_pane_g

0xda9a,	// (0x00085e02) call5_swipe_2_pane_t1_ParamLimits

0xda9a,	// (0x00085e02) call5_swipe_2_pane_t1

0xdaaf,	// (0x00085e17) sc_swipe_pane_g1_ParamLimits

0xdaaf,	// (0x00085e17) sc_swipe_pane_g1

0xdabc,	// (0x00085e24) sc_swipe_pane_g2_ParamLimits

0xdabc,	// (0x00085e24) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x00088036) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x00088036) sc_swipe_pane_g

0xdac8,	// (0x00085e30) sc_swipe_pane_t1_ParamLimits

0xdac8,	// (0x00085e30) sc_swipe_pane_t1

0xaade,	// (0x00082e46) main_cmail_launcher_pane

0x9b80,	// (0x00081ee8) aid_size_cell_cmail_l_ParamLimits

0x9b80,	// (0x00081ee8) aid_size_cell_cmail_l

0x9b9a,	// (0x00081f02) grid_cmail_l_pane_ParamLimits

0x9b9a,	// (0x00081f02) grid_cmail_l_pane

0x9bb5,	// (0x00081f1d) cell_cmail_l_pane_ParamLimits

0x9bb5,	// (0x00081f1d) cell_cmail_l_pane

0x9bdd,	// (0x00081f45) cell_cmail_l_pane_g1_ParamLimits

0x9bdd,	// (0x00081f45) cell_cmail_l_pane_g1

0x9be9,	// (0x00081f51) cell_cmail_l_pane_t1_ParamLimits

0x9be9,	// (0x00081f51) cell_cmail_l_pane_t1

0xdadd,	// (0x00085e45) cell_cmail_l_pane_t2_ParamLimits

0xdadd,	// (0x00085e45) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x0008803b) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x0008803b) cell_cmail_l_pane_t

0xab57,	// (0x00082ebf) grid_highlight_pane_cp018_ParamLimits

0xab57,	// (0x00082ebf) grid_highlight_pane_cp018

0x12b7,	// (0x0007961f) main2_pane_ParamLimits

0x12b7,	// (0x0007961f) main2_pane

0xb3d6,	// (0x0008373e) popup_sp_fs_action_menu_bg_pane_g1

0xb3de,	// (0x00083746) popup_sp_fs_action_menu_bg_pane_g2

0xb3e6,	// (0x0008374e) popup_sp_fs_action_menu_bg_pane_g3

0xb3ee,	// (0x00083756) popup_sp_fs_action_menu_bg_pane_g4

0xb3f6,	// (0x0008375e) popup_sp_fs_action_menu_bg_pane_g5

0xb3fe,	// (0x00083766) popup_sp_fs_action_menu_bg_pane_g6

0xb406,	// (0x0008376e) popup_sp_fs_action_menu_bg_pane_g7

0xb40e,	// (0x00083776) popup_sp_fs_action_menu_bg_pane_g8

0xb416,	// (0x0008377e) popup_sp_fs_action_menu_bg_pane_g9

0xb41e,	// (0x00083786) popup_sp_fs_action_menu_bg_pane_g10

0xb41e,	// (0x00083786) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x00087500) popup_sp_fs_action_menu_bg_pane_g

0xb592,	// (0x000838fa) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb592,	// (0x000838fa) list_medium_line_x2_t3_g3_g1

0xb59e,	// (0x00083906) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb59e,	// (0x00083906) list_medium_line_x2_t3_g3_g2

0xb5aa,	// (0x00083912) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb5aa,	// (0x00083912) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x000875b0) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x000875b0) list_medium_line_x2_t3_g3_g

0xb5b6,	// (0x0008391e) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb5b6,	// (0x0008391e) list_medium_line_x2_t3_g3_t1

0x06e9,	// (0x00078a51) list_medium_line_x2_t3_g3_t2_ParamLimits

0x06e9,	// (0x00078a51) list_medium_line_x2_t3_g3_t2

0xb5cb,	// (0x00083933) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb5cb,	// (0x00083933) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x000875b7) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x000875b7) list_medium_line_x2_t3_g3_t

0xb592,	// (0x000838fa) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb592,	// (0x000838fa) list_medium_line_x2_t3_g2_g1

0xb5aa,	// (0x00083912) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb5aa,	// (0x00083912) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x000875be) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x000875be) list_medium_line_x2_t3_g2_g

0xb5e0,	// (0x00083948) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb5e0,	// (0x00083948) list_medium_line_x2_t3_g2_t1

0xb5f6,	// (0x0008395e) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb5f6,	// (0x0008395e) list_medium_line_x2_t3_g2_t2

0xb608,	// (0x00083970) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb608,	// (0x00083970) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x000875c3) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x000875c3) list_medium_line_x2_t3_g2_t

0xb592,	// (0x000838fa) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb592,	// (0x000838fa) list_medium_line_x2_t4_g4_g1

0xb626,	// (0x0008398e) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb626,	// (0x0008398e) list_medium_line_x2_t4_g4_g2

0xb59e,	// (0x00083906) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb59e,	// (0x00083906) list_medium_line_x2_t4_g4_g3

0xb632,	// (0x0008399a) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb632,	// (0x0008399a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x000875ca) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x000875ca) list_medium_line_x2_t4_g4_g

0x06fd,	// (0x00078a65) list_medium_line_x2_t4_g4_t1_ParamLimits

0x06fd,	// (0x00078a65) list_medium_line_x2_t4_g4_t1

0x0717,	// (0x00078a7f) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0717,	// (0x00078a7f) list_medium_line_x2_t4_g4_t2

0x072d,	// (0x00078a95) list_medium_line_x2_t4_g4_t3_ParamLimits

0x072d,	// (0x00078a95) list_medium_line_x2_t4_g4_t3

0xb63e,	// (0x000839a6) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb63e,	// (0x000839a6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x000875d3) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x000875d3) list_medium_line_x2_t4_g4_t

0xb592,	// (0x000838fa) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb592,	// (0x000838fa) list_medium_line_x2_t2_g4_g1

0xb626,	// (0x0008398e) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb626,	// (0x0008398e) list_medium_line_x2_t2_g4_g2

0xb59e,	// (0x00083906) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb59e,	// (0x00083906) list_medium_line_x2_t2_g4_g3

0xb5aa,	// (0x00083912) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb5aa,	// (0x00083912) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0008763a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0008763a) list_medium_line_x2_t2_g4_g

0xb92c,	// (0x00083c94) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb92c,	// (0x00083c94) list_medium_line_x2_t2_g4_t1

0xb5cb,	// (0x00083933) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb5cb,	// (0x00083933) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x00087643) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x00087643) list_medium_line_x2_t2_g4_t

0xb592,	// (0x000838fa) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb592,	// (0x000838fa) list_medium_line_x2_t2_g3_g1

0xb59e,	// (0x00083906) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb59e,	// (0x00083906) list_medium_line_x2_t2_g3_g2

0xb5aa,	// (0x00083912) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb5aa,	// (0x00083912) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x000875b0) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x000875b0) list_medium_line_x2_t2_g3_g

0xb941,	// (0x00083ca9) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb941,	// (0x00083ca9) list_medium_line_x2_t2_g3_t1

0xb5cb,	// (0x00083933) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb5cb,	// (0x00083933) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x00087648) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x00087648) list_medium_line_x2_t2_g3_t

0x2e75,	// (0x0007b1dd) main_sp_fs_list_pane_ParamLimits

0x2e75,	// (0x0007b1dd) main_sp_fs_list_pane

0x2e81,	// (0x0007b1e9) sp_fs_scroll_pane_ParamLimits

0x2e81,	// (0x0007b1e9) sp_fs_scroll_pane

0x0742,	// (0x00078aaa) list_medium_line_x2_t3_t1

0x0752,	// (0x00078aba) list_medium_line_x2_t3_t2

0xb9af,	// (0x00083d17) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x00087693) list_medium_line_x2_t3_t

0x0760,	// (0x00078ac8) list_medium_line_x3_t4_t1

0x0770,	// (0x00078ad8) list_medium_line_x3_t4_t2

0xb9bd,	// (0x00083d25) list_medium_line_x3_t4_t3

0xb9af,	// (0x00083d17) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0008769a) list_medium_line_x3_t4_t

0x077e,	// (0x00078ae6) list_medium_line_x4_t5_t1

0x078e,	// (0x00078af6) list_medium_line_x4_t5_t2

0xb9bd,	// (0x00083d25) list_medium_line_x4_t5_t3

0xb9cb,	// (0x00083d33) list_medium_line_x4_t5_t4

0xb9af,	// (0x00083d17) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x000876a3) list_medium_line_x4_t5_t

0xb592,	// (0x000838fa) list_medium_line_t4_g4_g1_ParamLimits

0xb592,	// (0x000838fa) list_medium_line_t4_g4_g1

0xb632,	// (0x0008399a) list_medium_line_t4_g4_g2_ParamLimits

0xb632,	// (0x0008399a) list_medium_line_t4_g4_g2

0xb9d9,	// (0x00083d41) list_medium_line_t4_g4_g3_ParamLimits

0xb9d9,	// (0x00083d41) list_medium_line_t4_g4_g3

0xb5aa,	// (0x00083912) list_medium_line_t4_g4_g4_ParamLimits

0xb5aa,	// (0x00083912) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x000876ae) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x000876ae) list_medium_line_t4_g4_g

0xb9e5,	// (0x00083d4d) list_medium_line_t4_g4_t1_ParamLimits

0xb9e5,	// (0x00083d4d) list_medium_line_t4_g4_t1

0xb9fa,	// (0x00083d62) list_medium_line_t4_g4_t2_ParamLimits

0xb9fa,	// (0x00083d62) list_medium_line_t4_g4_t2

0xba10,	// (0x00083d78) list_medium_line_t4_g4_t3_ParamLimits

0xba10,	// (0x00083d78) list_medium_line_t4_g4_t3

0xb5cb,	// (0x00083933) list_medium_line_t4_g4_t4_ParamLimits

0xb5cb,	// (0x00083933) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x000876b7) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x000876b7) list_medium_line_t4_g4_t

0x304d,	// (0x0007b3b5) chi_dic_find_pane_g1

0x5767,	// (0x0007dacf) main_tport_pane

0xcb39,	// (0x00084ea1) list_medium_line_plain_t1

0xcb4f,	// (0x00084eb7) list_medium_line_t2_g2_g1_ParamLimits

0xcb4f,	// (0x00084eb7) list_medium_line_t2_g2_g1

0xcb5b,	// (0x00084ec3) list_medium_line_t2_g2_g2_ParamLimits

0xcb5b,	// (0x00084ec3) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x00087d73) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x00087d73) list_medium_line_t2_g2_g

0x0964,	// (0x00078ccc) list_medium_line_t2_g2_t1_ParamLimits

0x0964,	// (0x00078ccc) list_medium_line_t2_g2_t1

0x097b,	// (0x00078ce3) list_medium_line_t2_g2_t2_ParamLimits

0x097b,	// (0x00078ce3) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x00087d78) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x00087d78) list_medium_line_t2_g2_t

0xce8d,	// (0x000851f5) aid_sp_fs_list_icon_a_sm

0xf08e,	// (0x000873f6) aid_sp_fs_list_icon_d

0xf096,	// (0x000873fe) aid_sp_fs_text_primary

0xce95,	// (0x000851fd) aid_sp_fs_text_secondary

0xce9e,	// (0x00085206) list_medium_line

0xce9e,	// (0x00085206) list_medium_line_g2

0xce9e,	// (0x00085206) list_medium_line_g3

0xce9e,	// (0x00085206) list_medium_line_plain

0xce9e,	// (0x00085206) list_medium_line_plain_t2

0xce9e,	// (0x00085206) list_medium_line_plain_t3

0xce9e,	// (0x00085206) list_medium_line_right_icon

0xce9e,	// (0x00085206) list_medium_line_right_iconx2

0xce9e,	// (0x00085206) list_medium_line_t2

0xce9e,	// (0x00085206) list_medium_line_t2_g2

0xce9e,	// (0x00085206) list_medium_line_t2_g3

0xce9e,	// (0x00085206) list_medium_line_t2_right_icon

0xce9e,	// (0x00085206) list_medium_line_t2_right_iconx2

0xce9e,	// (0x00085206) list_medium_line_t3

0xce9e,	// (0x00085206) list_medium_line_t3_g2

0xce9e,	// (0x00085206) list_medium_line_t3_g3

0xce9e,	// (0x00085206) list_medium_line_t3_right_iconx2

0xcea7,	// (0x0008520f) list_medium_line_t4_g4

0xceb0,	// (0x00085218) list_medium_line_x2

0xceb0,	// (0x00085218) list_medium_line_x2_t2_g2

0xceb0,	// (0x00085218) list_medium_line_x2_t2_g3

0xceb0,	// (0x00085218) list_medium_line_x2_t2_g4

0xceb0,	// (0x00085218) list_medium_line_x2_t3

0xceb0,	// (0x00085218) list_medium_line_x2_t3_g2

0xceb0,	// (0x00085218) list_medium_line_x2_t3_g3

0xceb0,	// (0x00085218) list_medium_line_x2_t3_g4

0xceb0,	// (0x00085218) list_medium_line_x2_t4_g2

0xceb0,	// (0x00085218) list_medium_line_x2_t4_g4

0xceb9,	// (0x00085221) list_medium_line_x3

0xceb9,	// (0x00085221) list_medium_line_x3_t4

0xceb9,	// (0x00085221) list_medium_line_x3_t4_g4

0xcea7,	// (0x0008520f) list_medium_line_x4_t4

0xcea7,	// (0x0008520f) list_medium_line_x4_t4_g7

0xcea7,	// (0x0008520f) list_medium_line_x4_t5

0xcec2,	// (0x0008522a) list_single_fs_dyc_pane_ParamLimits

0xcec2,	// (0x0008522a) list_single_fs_dyc_pane

0xb592,	// (0x000838fa) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb592,	// (0x000838fa) list_medium_line_x4_t4_g7_g1

0xd3c9,	// (0x00085731) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd3c9,	// (0x00085731) list_medium_line_x4_t4_g7_g2

0xd3d5,	// (0x0008573d) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd3d5,	// (0x0008573d) list_medium_line_x4_t4_g7_g3

0xd3e4,	// (0x0008574c) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd3e4,	// (0x0008574c) list_medium_line_x4_t4_g7_g4

0xd3f0,	// (0x00085758) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd3f0,	// (0x00085758) list_medium_line_x4_t4_g7_g5

0xd3ff,	// (0x00085767) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd3ff,	// (0x00085767) list_medium_line_x4_t4_g7_g6

0xd40e,	// (0x00085776) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd40e,	// (0x00085776) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x00087f43) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x00087f43) list_medium_line_x4_t4_g7_g

0xd41a,	// (0x00085782) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd41a,	// (0x00085782) list_medium_line_x4_t4_g7_t1

0xd42f,	// (0x00085797) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd42f,	// (0x00085797) list_medium_line_x4_t4_g7_t2

0xd444,	// (0x000857ac) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd444,	// (0x000857ac) list_medium_line_x4_t4_g7_t3

0xd459,	// (0x000857c1) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd459,	// (0x000857c1) list_medium_line_x4_t4_g7_t4

0xd46b,	// (0x000857d3) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd46b,	// (0x000857d3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x00087f52) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x00087f52) list_medium_line_x4_t4_g7_t

0xd47d,	// (0x000857e5) list_single_dyc_row_pane_ParamLimits

0xd47d,	// (0x000857e5) list_single_dyc_row_pane

0x9afb,	// (0x00081e63) call5_gesture_pane_ParamLimits

0x9afb,	// (0x00081e63) call5_gesture_pane

0x9b51,	// (0x00081eb9) call5_windows_pane_ParamLimits

0x9b51,	// (0x00081eb9) call5_windows_pane

0x9bff,	// (0x00081f67) call5_swipe_1_pane_cp_ParamLimits

0x9bff,	// (0x00081f67) call5_swipe_1_pane_cp

0x9c0b,	// (0x00081f73) call5_swipe_2_pane_cp_ParamLimits

0x9c0b,	// (0x00081f73) call5_swipe_2_pane_cp

0x34e7,	// (0x0007b84f) call5_image_pane_cp

0x9c17,	// (0x00081f7f) popup_call5_audio_first_window_cp_ParamLimits

0x9c17,	// (0x00081f7f) popup_call5_audio_first_window_cp

0xdaaf,	// (0x00085e17) call5_swipe_1_pane_g1_cp_ParamLimits

0xdaaf,	// (0x00085e17) call5_swipe_1_pane_g1_cp

0xdaef,	// (0x00085e57) call5_swipe_1_pane_g2_cp

0xdac8,	// (0x00085e30) call5_swipe_1_pane_t1_cp_ParamLimits

0xdac8,	// (0x00085e30) call5_swipe_1_pane_t1_cp

0xdaaf,	// (0x00085e17) call5_swipe_2_pane_g1_cp_ParamLimits

0xdaaf,	// (0x00085e17) call5_swipe_2_pane_g1_cp

0xdaf7,	// (0x00085e5f) call5_swipe_2_pane_g2_cp

0xdaff,	// (0x00085e67) call5_swipe_2_pane_t1_cp_ParamLimits

0xdaff,	// (0x00085e67) call5_swipe_2_pane_t1_cp

0xab57,	// (0x00082ebf) main_sp_fs_email_pane

0xdb14,	// (0x00085e7c) main_sp_fs_listscroll_pane_te

0xdb1d,	// (0x00085e85) popup_sp_fs_action_menu_pane_ParamLimits

0xdb1d,	// (0x00085e85) popup_sp_fs_action_menu_pane

0xbebf,	// (0x00084227) bg_sp_fs_ctrlbar_pane_g1

0xdb63,	// (0x00085ecb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdb6c,	// (0x00085ed4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdb75,	// (0x00085edd) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbebf,	// (0x00084227) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x00088040) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbc9e,	// (0x00084006) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbc9e,	// (0x00084006) bg_sp_fs_ctrlbar_ddmenu_pane

0xdb7e,	// (0x00085ee6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdb7e,	// (0x00085ee6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdb8a,	// (0x00085ef2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdb8a,	// (0x00085ef2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x00088049) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x00088049) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdb96,	// (0x00085efe) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdb96,	// (0x00085efe) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xdbb0,	// (0x00085f18) list_medium_line_t2_right_icon_g1

0x0baa,	// (0x00078f12) list_medium_line_t2_right_icon_t1

0x0bba,	// (0x00078f22) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x0008804e) list_medium_line_t2_right_icon_t

0x5745,	// (0x0007daad) bg_sp_fs_ctrlbar_pane_ParamLimits

0x5745,	// (0x0007daad) bg_sp_fs_ctrlbar_pane

0x9c72,	// (0x00081fda) main_sp_fs_ctrlbar_button_pane_cp01

0x9c7c,	// (0x00081fe4) main_sp_fs_ctrlbar_ddmenu_pane

0xdbf2,	// (0x00085f5a) main_sp_fs_ctrlbar_pane_g1

0xdbfe,	// (0x00085f66) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x00088053) main_sp_fs_ctrlbar_pane_g

0xdc0a,	// (0x00085f72) main_sp_fs_ctrlbar_pane_t1

0x0bcc,	// (0x00078f34) main_sp_fs_ctrlbar_pane

0x0bf0,	// (0x00078f58) main_sp_fs_listscroll_pane_te_cp01

0x0c10,	// (0x00078f78) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0c10,	// (0x00078f78) popup_sp_fs_action_menu_pane_cp01

0xab57,	// (0x00082ebf) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xab57,	// (0x00082ebf) bg_sp_fs_highlight_list_pane_cp01

0xdc2f,	// (0x00085f97) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdc2f,	// (0x00085f97) sp_fs_action_menu_list_gene_pane_g1

0xdc3e,	// (0x00085fa6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdc3e,	// (0x00085fa6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x0008805d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x0008805d) sp_fs_action_menu_list_gene_pane_g

0xdc4b,	// (0x00085fb3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdc4b,	// (0x00085fb3) sp_fs_action_menu_list_gene_pane_t1

0xdc63,	// (0x00085fcb) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdc63,	// (0x00085fcb) sp_fs_action_menu_list_gene_pane

0xdc86,	// (0x00085fee) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdc86,	// (0x00085fee) popup_sp_fs_action_menu_bg_pane

0xdc94,	// (0x00085ffc) sp_fs_action_menu_list_pane_ParamLimits

0xdc94,	// (0x00085ffc) sp_fs_action_menu_list_pane

0xdcb8,	// (0x00086020) sp_fs_scroll_pane_cp01_ParamLimits

0xdcb8,	// (0x00086020) sp_fs_scroll_pane_cp01

0x0c46,	// (0x00078fae) list_medium_line_plain_t2_t1

0x0c56,	// (0x00078fbe) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x00088062) list_medium_line_plain_t2_t

0x0c66,	// (0x00078fce) list_medium_line_plain_t3_t1

0x0c76,	// (0x00078fde) list_medium_line_plain_t3_t2

0x0c84,	// (0x00078fec) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x00088067) list_medium_line_plain_t3_t

0xb592,	// (0x000838fa) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb592,	// (0x000838fa) list_medium_line_x2_t2_g2_g1

0xb5aa,	// (0x00083912) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb5aa,	// (0x00083912) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x000875be) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x000875be) list_medium_line_x2_t2_g2_g

0xb9e5,	// (0x00083d4d) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb9e5,	// (0x00083d4d) list_medium_line_x2_t2_g2_t1

0xb5cb,	// (0x00083933) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb5cb,	// (0x00083933) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x0008806e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x0008806e) list_medium_line_x2_t2_g2_t

0xb592,	// (0x000838fa) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb592,	// (0x000838fa) list_medium_line_x2_t4_g2_g1

0xdcde,	// (0x00086046) list_medium_line_x2_t4_g2_g2_ParamLimits

0xdcde,	// (0x00086046) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0b,	// (0x00088073) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0b,	// (0x00088073) list_medium_line_x2_t4_g2_g

0x0c92,	// (0x00078ffa) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0c92,	// (0x00078ffa) list_medium_line_x2_t4_g2_t1

0x0cac,	// (0x00079014) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0cac,	// (0x00079014) list_medium_line_x2_t4_g2_t2

0x0cc2,	// (0x0007902a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0cc2,	// (0x0007902a) list_medium_line_x2_t4_g2_t3

0xb5cb,	// (0x00083933) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb5cb,	// (0x00083933) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd10,	// (0x00088078) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd10,	// (0x00088078) list_medium_line_x2_t4_g2_t

0xdcf0,	// (0x00086058) list_medium_line_t3_right_iconx2_g1

0xdbb0,	// (0x00085f18) list_medium_line_t3_right_iconx2_g2

0x0cd7,	// (0x0007903f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd19,	// (0x00088081) list_medium_line_t3_right_iconx2_g

0x0ce1,	// (0x00079049) list_medium_line_t3_right_iconx2_t1

0x0cf1,	// (0x00079059) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd20,	// (0x00088088) list_medium_line_t3_right_iconx2_t

0xb592,	// (0x000838fa) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb592,	// (0x000838fa) list_medium_line_x3_t4_g4_g1

0xb59e,	// (0x00083906) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb59e,	// (0x00083906) list_medium_line_x3_t4_g4_g2

0xb632,	// (0x0008399a) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb632,	// (0x0008399a) list_medium_line_x3_t4_g4_g3

0xdcf8,	// (0x00086060) list_medium_line_x3_t4_g4_g4_ParamLimits

0xdcf8,	// (0x00086060) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd25,	// (0x0008808d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd25,	// (0x0008808d) list_medium_line_x3_t4_g4_g

0x0cff,	// (0x00079067) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0cff,	// (0x00079067) list_medium_line_x3_t4_g4_t1

0x0d16,	// (0x0007907e) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0d16,	// (0x0007907e) list_medium_line_x3_t4_g4_t2

0xdd04,	// (0x0008606c) list_medium_line_x3_t4_g4_t3_ParamLimits

0xdd04,	// (0x0008606c) list_medium_line_x3_t4_g4_t3

0xdd19,	// (0x00086081) list_medium_line_x3_t4_g4_t4_ParamLimits

0xdd19,	// (0x00086081) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2e,	// (0x00088096) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2e,	// (0x00088096) list_medium_line_x3_t4_g4_t

0x0d31,	// (0x00079099) list_single_dyc_row_text_pane_t1_ParamLimits

0x0d31,	// (0x00079099) list_single_dyc_row_text_pane_t1

0x0d7a,	// (0x000790e2) list_single_dyc_row_text_pane_t2_ParamLimits

0x0d7a,	// (0x000790e2) list_single_dyc_row_text_pane_t2

0xdd36,	// (0x0008609e) list_single_dyc_row_text_pane_t3_ParamLimits

0xdd36,	// (0x0008609e) list_single_dyc_row_text_pane_t3

0x0002,

0xfd37,	// (0x0008809f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd37,	// (0x0008809f) list_single_dyc_row_text_pane_t

0xdd48,	// (0x000860b0) list_single_dyc_row_pane_g1_ParamLimits

0xdd48,	// (0x000860b0) list_single_dyc_row_pane_g1

0xdd54,	// (0x000860bc) list_single_dyc_row_pane_g2_ParamLimits

0xdd54,	// (0x000860bc) list_single_dyc_row_pane_g2

0xdd60,	// (0x000860c8) list_single_dyc_row_pane_g3_ParamLimits

0xdd60,	// (0x000860c8) list_single_dyc_row_pane_g3

0xdd6c,	// (0x000860d4) list_single_dyc_row_pane_g4_ParamLimits

0xdd6c,	// (0x000860d4) list_single_dyc_row_pane_g4

0x0003,

0xfd3e,	// (0x000880a6) list_single_dyc_row_pane_g_ParamLimits

0xfd3e,	// (0x000880a6) list_single_dyc_row_pane_g

0xdd78,	// (0x000860e0) list_single_dyc_row_text_pane_ParamLimits

0xdd78,	// (0x000860e0) list_single_dyc_row_text_pane

0xaade,	// (0x00082e46) bg_sp_fs_scroll_pane

0xdd97,	// (0x000860ff) thumb_sp_fs_scroll_pane

0xcb4f,	// (0x00084eb7) list_medium_line_g1_ParamLimits

0xcb4f,	// (0x00084eb7) list_medium_line_g1

0xdda0,	// (0x00086108) list_medium_line_t1_ParamLimits

0xdda0,	// (0x00086108) list_medium_line_t1

0xb592,	// (0x000838fa) list_medium_line_x2_g1_ParamLimits

0xb592,	// (0x000838fa) list_medium_line_x2_g1

0xb59e,	// (0x00083906) list_medium_line_x2_g2_ParamLimits

0xb59e,	// (0x00083906) list_medium_line_x2_g2

0x0001,

0xfd47,	// (0x000880af) list_medium_line_x2_g_ParamLimits

0xfd47,	// (0x000880af) list_medium_line_x2_g

0xddb5,	// (0x0008611d) list_medium_line_x2_t1_ParamLimits

0xddb5,	// (0x0008611d) list_medium_line_x2_t1

0xb592,	// (0x000838fa) list_medium_line_x3_g1_ParamLimits

0xb592,	// (0x000838fa) list_medium_line_x3_g1

0xb59e,	// (0x00083906) list_medium_line_x3_g2_ParamLimits

0xb59e,	// (0x00083906) list_medium_line_x3_g2

0x0001,

0xfd47,	// (0x000880af) list_medium_line_x3_g_ParamLimits

0xfd47,	// (0x000880af) list_medium_line_x3_g

0xddb5,	// (0x0008611d) list_medium_line_x3_t1_ParamLimits

0xddb5,	// (0x0008611d) list_medium_line_x3_t1

0xddcb,	// (0x00086133) thumb_sp_fs_scroll_pane_g1

0xddd4,	// (0x0008613c) thumb_sp_fs_scroll_pane_g2

0xdddd,	// (0x00086145) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x000880b4) thumb_sp_fs_scroll_pane_g

0xddcb,	// (0x00086133) bg_sp_fs_scroll_pane_g1

0xddd4,	// (0x0008613c) bg_sp_fs_scroll_pane_g2

0xdddd,	// (0x00086145) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x000880b4) bg_sp_fs_scroll_pane_g

0xb592,	// (0x000838fa) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb592,	// (0x000838fa) list_medium_line_x2_t3_g4_g1

0xb626,	// (0x0008398e) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb626,	// (0x0008398e) list_medium_line_x2_t3_g4_g2

0xb59e,	// (0x00083906) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb59e,	// (0x00083906) list_medium_line_x2_t3_g4_g3

0xb5aa,	// (0x00083912) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb5aa,	// (0x00083912) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0008763a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0008763a) list_medium_line_x2_t3_g4_g

0x0dd4,	// (0x0007913c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0dd4,	// (0x0007913c) list_medium_line_x2_t3_g4_t1

0x0dea,	// (0x00079152) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0dea,	// (0x00079152) list_medium_line_x2_t3_g4_t2

0xb5cb,	// (0x00083933) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb5cb,	// (0x00083933) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd53,	// (0x000880bb) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd53,	// (0x000880bb) list_medium_line_x2_t3_g4_t

0xcb4f,	// (0x00084eb7) list_medium_line_g2_g1_ParamLimits

0xcb4f,	// (0x00084eb7) list_medium_line_g2_g1

0xcb5b,	// (0x00084ec3) list_medium_line_g2_g2_ParamLimits

0xcb5b,	// (0x00084ec3) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x00087d73) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x00087d73) list_medium_line_g2_g

0xdde6,	// (0x0008614e) list_medium_line_g2_t1_ParamLimits

0xdde6,	// (0x0008614e) list_medium_line_g2_t1

0xcb4f,	// (0x00084eb7) list_medium_line_t3_g2_g1_ParamLimits

0xcb4f,	// (0x00084eb7) list_medium_line_t3_g2_g1

0xcb5b,	// (0x00084ec3) list_medium_line_t3_g2_g2_ParamLimits

0xcb5b,	// (0x00084ec3) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x00087d73) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x00087d73) list_medium_line_t3_g2_g

0x0e03,	// (0x0007916b) list_medium_line_t3_g2_t1_ParamLimits

0x0e03,	// (0x0007916b) list_medium_line_t3_g2_t1

0x0e1a,	// (0x00079182) list_medium_line_t3_g2_t2_ParamLimits

0x0e1a,	// (0x00079182) list_medium_line_t3_g2_t2

0x0e2f,	// (0x00079197) list_medium_line_t3_g2_t3_ParamLimits

0x0e2f,	// (0x00079197) list_medium_line_t3_g2_t3

0x0002,

0xfd5a,	// (0x000880c2) list_medium_line_t3_g2_t_ParamLimits

0xfd5a,	// (0x000880c2) list_medium_line_t3_g2_t

0xdbb0,	// (0x00085f18) list_medium_line_right_icon_g1

0xddfb,	// (0x00086163) list_medium_line_right_icon_t1

0xcb4f,	// (0x00084eb7) list_medium_line_t2_g1_ParamLimits

0xcb4f,	// (0x00084eb7) list_medium_line_t2_g1

0x0e48,	// (0x000791b0) list_medium_line_t2_t1_ParamLimits

0x0e48,	// (0x000791b0) list_medium_line_t2_t1

0x0e62,	// (0x000791ca) list_medium_line_t2_t2_ParamLimits

0x0e62,	// (0x000791ca) list_medium_line_t2_t2

0x0001,

0xfd61,	// (0x000880c9) list_medium_line_t2_t_ParamLimits

0xfd61,	// (0x000880c9) list_medium_line_t2_t

0xcb4f,	// (0x00084eb7) list_medium_line_t3_g1_ParamLimits

0xcb4f,	// (0x00084eb7) list_medium_line_t3_g1

0x0e7b,	// (0x000791e3) list_medium_line_t3_t1_ParamLimits

0x0e7b,	// (0x000791e3) list_medium_line_t3_t1

0x0e92,	// (0x000791fa) list_medium_line_t3_t2_ParamLimits

0x0e92,	// (0x000791fa) list_medium_line_t3_t2

0x0ea7,	// (0x0007920f) list_medium_line_t3_t3_ParamLimits

0x0ea7,	// (0x0007920f) list_medium_line_t3_t3

0x0002,

0xfd66,	// (0x000880ce) list_medium_line_t3_t_ParamLimits

0xfd66,	// (0x000880ce) list_medium_line_t3_t

0xcb4f,	// (0x00084eb7) list_medium_line_g3_g1_ParamLimits

0xcb4f,	// (0x00084eb7) list_medium_line_g3_g1

0xde09,	// (0x00086171) list_medium_line_g3_g2_ParamLimits

0xde09,	// (0x00086171) list_medium_line_g3_g2

0xcb5b,	// (0x00084ec3) list_medium_line_g3_g3_ParamLimits

0xcb5b,	// (0x00084ec3) list_medium_line_g3_g3

0x0002,

0xfd6d,	// (0x000880d5) list_medium_line_g3_g_ParamLimits

0xfd6d,	// (0x000880d5) list_medium_line_g3_g

0xde15,	// (0x0008617d) list_medium_line_g3_t1_ParamLimits

0xde15,	// (0x0008617d) list_medium_line_g3_t1

0xcb4f,	// (0x00084eb7) list_medium_line_t2_g3_g1_ParamLimits

0xcb4f,	// (0x00084eb7) list_medium_line_t2_g3_g1

0xde09,	// (0x00086171) list_medium_line_t2_g3_g2_ParamLimits

0xde09,	// (0x00086171) list_medium_line_t2_g3_g2

0xcb5b,	// (0x00084ec3) list_medium_line_t2_g3_g3_ParamLimits

0xcb5b,	// (0x00084ec3) list_medium_line_t2_g3_g3

0x0002,

0xfd6d,	// (0x000880d5) list_medium_line_t2_g3_g_ParamLimits

0xfd6d,	// (0x000880d5) list_medium_line_t2_g3_g

0x0eb9,	// (0x00079221) list_medium_line_t2_g3_t1_ParamLimits

0x0eb9,	// (0x00079221) list_medium_line_t2_g3_t1

0x0ed0,	// (0x00079238) list_medium_line_t2_g3_t2_ParamLimits

0x0ed0,	// (0x00079238) list_medium_line_t2_g3_t2

0x0001,

0xfd74,	// (0x000880dc) list_medium_line_t2_g3_t_ParamLimits

0xfd74,	// (0x000880dc) list_medium_line_t2_g3_t

0xcb4f,	// (0x00084eb7) list_medium_line_t3_g3_g1_ParamLimits

0xcb4f,	// (0x00084eb7) list_medium_line_t3_g3_g1

0xde09,	// (0x00086171) list_medium_line_t3_g3_g2_ParamLimits

0xde09,	// (0x00086171) list_medium_line_t3_g3_g2

0xcb5b,	// (0x00084ec3) list_medium_line_t3_g3_g3_ParamLimits

0xcb5b,	// (0x00084ec3) list_medium_line_t3_g3_g3

0x0002,

0xfd6d,	// (0x000880d5) list_medium_line_t3_g3_g_ParamLimits

0xfd6d,	// (0x000880d5) list_medium_line_t3_g3_g

0x0ee9,	// (0x00079251) list_medium_line_t3_g3_t1_ParamLimits

0x0ee9,	// (0x00079251) list_medium_line_t3_g3_t1

0x0f02,	// (0x0007926a) list_medium_line_t3_g3_t2_ParamLimits

0x0f02,	// (0x0007926a) list_medium_line_t3_g3_t2

0x0f18,	// (0x00079280) list_medium_line_t3_g3_t3_ParamLimits

0x0f18,	// (0x00079280) list_medium_line_t3_g3_t3

0x0002,

0xfd79,	// (0x000880e1) list_medium_line_t3_g3_t_ParamLimits

0xfd79,	// (0x000880e1) list_medium_line_t3_g3_t

0xdcf0,	// (0x00086058) list_medium_line_right_iconx2_g1

0xdbb0,	// (0x00085f18) list_medium_line_right_iconx2_g2

0x0001,

0xfd80,	// (0x000880e8) list_medium_line_right_iconx2_g

0xde2a,	// (0x00086192) list_medium_line_right_iconx2_t1

0xdcf0,	// (0x00086058) list_medium_line_t2_right_iconx2_g1

0xdbb0,	// (0x00085f18) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd80,	// (0x000880e8) list_medium_line_t2_right_iconx2_g

0x0f32,	// (0x0007929a) list_medium_line_t2_right_iconx2_t1

0x0f42,	// (0x000792aa) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd85,	// (0x000880ed) list_medium_line_t2_right_iconx2_t

0xde38,	// (0x000861a0) list_medium_line_x4_t4_t1

0x0f54,	// (0x000792bc) list_medium_line_x4_t4_t2

0x0f64,	// (0x000792cc) list_medium_line_x4_t4_t3

0x0f74,	// (0x000792dc) list_medium_line_x4_t4_t4

0x0003,

0xfd8a,	// (0x000880f2) list_medium_line_x4_t4_t

0x9cc9,	// (0x00082031) tport_appsw_pane_ParamLimits

0x9cc9,	// (0x00082031) tport_appsw_pane

0x9cdc,	// (0x00082044) tport_contact_pane_ParamLimits

0x9cdc,	// (0x00082044) tport_contact_pane

0x9cf5,	// (0x0008205d) tport_listscroll_pane_ParamLimits

0x9cf5,	// (0x0008205d) tport_listscroll_pane

0x9d10,	// (0x00082078) cell_tport_appsw_pane_ParamLimits

0x9d10,	// (0x00082078) cell_tport_appsw_pane

0xc8b7,	// (0x00084c1f) tport_appsw_pane_g1_ParamLimits

0xc8b7,	// (0x00084c1f) tport_appsw_pane_g1

0xde46,	// (0x000861ae) tport_contact_pane_g1

0xde4f,	// (0x000861b7) tport_contact_pane_t1

0xde5d,	// (0x000861c5) tport_contact_pane_t2

0x0001,

0xfd93,	// (0x000880fb) tport_contact_pane_t

0xde6b,	// (0x000861d3) list_tport_pane

0xde74,	// (0x000861dc) scroll_pane_cp_030

0xde85,	// (0x000861ed) cell_tport_appsw_pane_g1

0xde95,	// (0x000861fd) cell_tport_appsw_pane_t1

0xaade,	// (0x00082e46) grid_highlight_pane_cp019

0x9d54,	// (0x000820bc) list_tport_double_graphic_pane_ParamLimits

0x9d54,	// (0x000820bc) list_tport_double_graphic_pane

0xab57,	// (0x00082ebf) list_highlight_pane_cp023_ParamLimits

0xab57,	// (0x00082ebf) list_highlight_pane_cp023

0x9d61,	// (0x000820c9) list_tport_double_graphic_pane_g1_ParamLimits

0x9d61,	// (0x000820c9) list_tport_double_graphic_pane_g1

0x9d6e,	// (0x000820d6) list_tport_double_graphic_pane_t1_ParamLimits

0x9d6e,	// (0x000820d6) list_tport_double_graphic_pane_t1

0x9d83,	// (0x000820eb) list_tport_double_graphic_pane_t2_ParamLimits

0x9d83,	// (0x000820eb) list_tport_double_graphic_pane_t2

0x0001,

0xfd9f,	// (0x00088107) list_tport_double_graphic_pane_t_ParamLimits

0xfd9f,	// (0x00088107) list_tport_double_graphic_pane_t

0xaade,	// (0x00082e46) main_cale_note_pane

0x80f0,	// (0x00080458) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x80f0,	// (0x00080458) cell_vitu2_function_top_wide_pane_cp01

0x9842,	// (0x00081baa) wait_bar_pane_cp05_ParamLimits

0xaade,	// (0x00082e46) listscroll_cmail_pane

0xdeab,	// (0x00086213) list_cmail_pane

0x9d9f,	// (0x00082107) list_cmail_body_pane

0x9db7,	// (0x0008211f) list_single_cmail_header_caption_pane

0x9dd4,	// (0x0008213c) list_single_cmail_header_detail_pane_ParamLimits

0x9dd4,	// (0x0008213c) list_single_cmail_header_detail_pane

0x9e06,	// (0x0008216e) list_single_cmail_header_caption_pane_t1

0x0f84,	// (0x000792ec) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0f84,	// (0x000792ec) list_single_cmail_header_detail_pane_g1

0xf0bb,	// (0x00087423) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0bb,	// (0x00087423) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda4,	// (0x0008810c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda4,	// (0x0008810c) list_single_cmail_header_detail_pane_g

0xded8,	// (0x00086240) list_single_cmail_header_detail_pane_t1_ParamLimits

0xded8,	// (0x00086240) list_single_cmail_header_detail_pane_t1

0xdf16,	// (0x0008627e) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdf16,	// (0x0008627e) list_single_cmail_header_editor_pane_bg

0xd73d,	// (0x00085aa5) list_cmail_body_pane_g1

0xdf28,	// (0x00086290) list_cmail_body_pane_t1

0xc8f4,	// (0x00084c5c) list_single_cmail_header_editor_pane_bg_g1

0xb84b,	// (0x00083bb3) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc904,	// (0x00084c6c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc8fc,	// (0x00084c64) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcb47,	// (0x00084eaf) list_single_cmail_header_editor_pane_bg_g1_copy4

0xc924,	// (0x00084c8c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xc914,	// (0x00084c7c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xc91c,	// (0x00084c84) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb82b,	// (0x00083b93) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9e16,	// (0x0008217e) calenote_gesture_pane_ParamLimits

0x9e16,	// (0x0008217e) calenote_gesture_pane

0x9e36,	// (0x0008219e) calenote_window_pane_ParamLimits

0x9e36,	// (0x0008219e) calenote_window_pane

0xdf36,	// (0x0008629e) popup_note_window_cp01

0x9e52,	// (0x000821ba) calenote_swipe_1_pane_ParamLimits

0x9e52,	// (0x000821ba) calenote_swipe_1_pane

0x9c0b,	// (0x00081f73) calenote_swipe_2_pane_ParamLimits

0x9c0b,	// (0x00081f73) calenote_swipe_2_pane

0xdaaf,	// (0x00085e17) calenote_swipe_1_pane_g1_ParamLimits

0xdaaf,	// (0x00085e17) calenote_swipe_1_pane_g1

0xdabc,	// (0x00085e24) calenote_swipe_1_pane_g2_ParamLimits

0xdabc,	// (0x00085e24) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x00088036) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x00088036) calenote_swipe_1_pane_g

0xdf48,	// (0x000862b0) calenote_swipe_1_pane_t1_ParamLimits

0xdf48,	// (0x000862b0) calenote_swipe_1_pane_t1

0xdaaf,	// (0x00085e17) calenote_swipe_2_pane_g1_ParamLimits

0xdaaf,	// (0x00085e17) calenote_swipe_2_pane_g1

0xdf67,	// (0x000862cf) calenote_swipe_2_pane_g2_ParamLimits

0xdf67,	// (0x000862cf) calenote_swipe_2_pane_g2

0x0001,

0xfdb0,	// (0x00088118) calenote_swipe_2_pane_g_ParamLimits

0xfdb0,	// (0x00088118) calenote_swipe_2_pane_g

0xdf73,	// (0x000862db) calenote_swipe_2_pane_t1_ParamLimits

0xdf73,	// (0x000862db) calenote_swipe_2_pane_t1

0xaade,	// (0x00082e46) main_mup_navstr_pane

0x6d52,	// (0x0007f0ba) main_mup3_pane_t7_ParamLimits

0x6d52,	// (0x0007f0ba) main_mup3_pane_t7

0xecfb,	// (0x00087063) main_mp4_pane_g6_ParamLimits

0xecfb,	// (0x00087063) main_mp4_pane_g6

0xee9f,	// (0x00087207) main_image3_pane_t4_ParamLimits

0xee9f,	// (0x00087207) main_image3_pane_t4

0x9e67,	// (0x000821cf) popup_navstr_preview_pane_ParamLimits

0x9e67,	// (0x000821cf) popup_navstr_preview_pane

0x9e77,	// (0x000821df) scroll_navstr_pane_ParamLimits

0x9e77,	// (0x000821df) scroll_navstr_pane

0xaade,	// (0x00082e46) bg_popup_preview_window_pane_cp04

0xdf9a,	// (0x00086302) popup_navstr_preview_pane_t1

0x9e8b,	// (0x000821f3) scroll_navstr_pane_g1_ParamLimits

0x9e8b,	// (0x000821f3) scroll_navstr_pane_g1

0x9e9f,	// (0x00082207) scroll_navstr_pane_t1_ParamLimits

0x9e9f,	// (0x00082207) scroll_navstr_pane_t1

0xdf3f,	// (0x000862a7) bg_button_pane_cp014

0xdf3f,	// (0x000862a7) bg_button_pane_cp030

0x0b50,	// (0x00078eb8) list_double_fisheye_pane_g4_ParamLimits

0x0b50,	// (0x00078eb8) list_double_fisheye_pane_g4

0x0b5c,	// (0x00078ec4) list_double_fisheye_pane_g5_ParamLimits

0x0b5c,	// (0x00078ec4) list_double_fisheye_pane_g5

0xdeb3,	// (0x0008621b) sp_fs_scroll_pane_cp03

0xdbf2,	// (0x00085f5a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdbfe,	// (0x00085f66) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x00088053) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdc0a,	// (0x00085f72) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9d95,	// (0x000820fd) sp_fs_scroll_pane_cp02

0xb489,	// (0x000837f1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb489,	// (0x000837f1) popup_sp_fs_calendar_preview_list_single_pane

0xaade,	// (0x00082e46) main_cam6_pano_pane

0xab57,	// (0x00082ebf) main_mup3_pane_ParamLimits

0xaade,	// (0x00082e46) main_phacti_pane

0x9713,	// (0x00081a7b) bg_button_pane_cp11

0x972d,	// (0x00081a95) main_mobtv_info_pane_g2_ParamLimits

0x972d,	// (0x00081a95) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x00087fb3) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x00087fb3) main_mobtv_info_pane_g

0x990a,	// (0x00081c72) sc_clock_pane_t5_ParamLimits

0x990a,	// (0x00081c72) sc_clock_pane_t5

0x9996,	// (0x00081cfe) main_radioblah_pane_g1_ParamLimits

0xd9e1,	// (0x00085d49) main_radioblah_pane_t3_ParamLimits

0xd9e1,	// (0x00085d49) main_radioblah_pane_t3

0xd9f9,	// (0x00085d61) main_radioblah_pane_t4_ParamLimits

0xd9f9,	// (0x00085d61) main_radioblah_pane_t4

0x99be,	// (0x00081d26) main_radioblah_text_pane_ParamLimits

0x99be,	// (0x00081d26) main_radioblah_text_pane

0x99d0,	// (0x00081d38) main_radioblah_info_pane_g1_ParamLimits

0x9a69,	// (0x00081dd1) main_radioblah_info_pane_t4_ParamLimits

0x9a69,	// (0x00081dd1) main_radioblah_info_pane_t4

0xab57,	// (0x00082ebf) main_sp_fs_calendar_pane

0x9eb6,	// (0x0008221e) main_phacti_pane_g1

0x9ebe,	// (0x00082226) phacti_note_pane_ParamLimits

0x9ebe,	// (0x00082226) phacti_note_pane

0xdfb1,	// (0x00086319) phacti_term_pane_ParamLimits

0xdfb1,	// (0x00086319) phacti_term_pane

0xdfc6,	// (0x0008632e) phacti_note_pane_t1_ParamLimits

0xdfc6,	// (0x0008632e) phacti_note_pane_t1

0xdfdd,	// (0x00086345) phacti_term_pane_g1

0xdfe5,	// (0x0008634d) phacti_term_pane_t1_ParamLimits

0xdfe5,	// (0x0008634d) phacti_term_pane_t1

0xe00f,	// (0x00086377) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe017,	// (0x0008637f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdba,	// (0x00088122) popup_sp_fs_calendar_preview_list_single_pane_g

0xe01f,	// (0x00086387) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe01f,	// (0x00086387) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe035,	// (0x0008639d) aid_popup_sp_fs_bg_corner_pane

0xbebf,	// (0x00084227) popup_sp_fs_calendar_preview_bg_pane_g1

0xaade,	// (0x00082e46) popup_sp_fs_calendar_preview_bg_pane

0xe03d,	// (0x000863a5) popup_sp_fs_calendar_preview_list_pane

0xab57,	// (0x00082ebf) bg_main_sp_fs_cale_pane_ParamLimits

0xab57,	// (0x00082ebf) bg_main_sp_fs_cale_pane

0xe04e,	// (0x000863b6) listscroll_cale_mrui_pane_ParamLimits

0xe04e,	// (0x000863b6) listscroll_cale_mrui_pane

0xe062,	// (0x000863ca) listscroll_sp_fs_schedule_track_pane

0xe06b,	// (0x000863d3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe06b,	// (0x000863d3) main_sp_fs_ctrlbar_pane_cp01

0xe07c,	// (0x000863e4) main_sp_fs_ribbon_pane

0xe084,	// (0x000863ec) popup_sp_fs_cale_preview_window

0x9f1f,	// (0x00082287) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9f1f,	// (0x00082287) list_single_sp_fs_schedule_track_pane

0xab57,	// (0x00082ebf) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xab57,	// (0x00082ebf) bg_sp_fs_highlight_list_pane_cp03

0x9f32,	// (0x0008229a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9f32,	// (0x0008229a) list_single_sp_fs_schedule_track_pane_g1

0x9f3e,	// (0x000822a6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9f3e,	// (0x000822a6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbf,	// (0x00088127) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbf,	// (0x00088127) list_single_sp_fs_schedule_track_pane_g

0x9f4a,	// (0x000822b2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9f4a,	// (0x000822b2) list_single_sp_fs_schedule_track_pane_t1

0x9f6c,	// (0x000822d4) sp_fs_schedule_track_pane_ParamLimits

0x9f6c,	// (0x000822d4) sp_fs_schedule_track_pane

0xe096,	// (0x000863fe) sp_fs_schedule_track_pane_g1

0xe09e,	// (0x00086406) sp_fs_schedule_track_pane_g2

0xe0a6,	// (0x0008640e) sp_fs_schedule_track_pane_g3

0xe0ae,	// (0x00086416) sp_fs_schedule_track_pane_g4

0xe0b6,	// (0x0008641e) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc4,	// (0x0008812c) sp_fs_schedule_track_pane_g

0xc8f4,	// (0x00084c5c) bg_sp_fs_schedule_viewer_highlight_g1

0xb84b,	// (0x00083bb3) bg_sp_fs_schedule_viewer_highlight_g2

0xc8fc,	// (0x00084c64) bg_sp_fs_schedule_viewer_highlight_g3

0xc904,	// (0x00084c6c) bg_sp_fs_schedule_viewer_highlight_g4

0xcb47,	// (0x00084eaf) bg_sp_fs_schedule_viewer_highlight_g5

0xc914,	// (0x00084c7c) bg_sp_fs_schedule_viewer_highlight_g6

0xc91c,	// (0x00084c84) bg_sp_fs_schedule_viewer_highlight_g7

0xc924,	// (0x00084c8c) bg_sp_fs_schedule_viewer_highlight_g8

0xb82b,	// (0x00083b93) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdcf,	// (0x00088137) bg_sp_fs_schedule_viewer_highlight_g

0xaade,	// (0x00082e46) bg_main_sp_fs_ribbon_pane

0x9f81,	// (0x000822e9) main_sp_fs_ribbon_pane_g1

0xe0be,	// (0x00086426) main_sp_fs_ribbon_pane_t1

0x9f8a,	// (0x000822f2) main_sp_fs_ribbon_pane_t2

0xe0cd,	// (0x00086435) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde2,	// (0x0008814a) main_sp_fs_ribbon_pane_t

0xe0dc,	// (0x00086444) main_sp_fs_ribbon_scheduler_pane

0xe0e4,	// (0x0008644c) bg_main_sp_fs_ribbon_pane_g1

0xe0ed,	// (0x00086455) bg_main_sp_fs_ribbon_pane_g2

0xe0f6,	// (0x0008645e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde9,	// (0x00088151) bg_main_sp_fs_ribbon_pane_g

0xe0fe,	// (0x00086466) main_sp_fs_ribbon_scheduler_pane_g1

0xe107,	// (0x0008646f) main_sp_fs_ribbon_scheduler_pane_g2

0xe110,	// (0x00086478) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf0,	// (0x00088158) main_sp_fs_ribbon_scheduler_pane_g

0xe119,	// (0x00086481) list_cale_mrui_pane

0x9f99,	// (0x00082301) sp_fs_scroll_pane_cp07_ParamLimits

0x9f99,	// (0x00082301) sp_fs_scroll_pane_cp07

0x9faf,	// (0x00082317) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9faf,	// (0x00082317) bg_sp_fs_schedule_viewer_highlight

0xe122,	// (0x0008648a) list_single_sp_fs_schedule_track_pane_cp01

0xe12a,	// (0x00086492) list_sp_fs_schedule_track_pane

0xe132,	// (0x0008649a) sp_fs_scroll_pane_cp06_ParamLimits

0xe132,	// (0x0008649a) sp_fs_scroll_pane_cp06

0xbebf,	// (0x00084227) bgmain_sp_fs_calendar_pane_g1

0x0fc2,	// (0x0007932a) list_single_cale_mrui_pane_ParamLimits

0x0fc2,	// (0x0007932a) list_single_cale_mrui_pane

0xe144,	// (0x000864ac) list_single_cale_mrui_row_pane_ParamLimits

0xe144,	// (0x000864ac) list_single_cale_mrui_row_pane

0xe151,	// (0x000864b9) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe151,	// (0x000864b9) list_single_cale_mrui_row_pane_g1

0xe196,	// (0x000864fe) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe196,	// (0x000864fe) list_single_cale_mrui_row_pane_t1

0x0fe6,	// (0x0007934e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0fe6,	// (0x0007934e) list_single_cale_mrui_row_pane_t2

0xe1a8,	// (0x00086510) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe1a8,	// (0x00086510) list_single_cale_mrui_row_pane_t3

0xe1d7,	// (0x0008653f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe1d7,	// (0x0008653f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdfe,	// (0x00088166) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdfe,	// (0x00088166) list_single_cale_mrui_row_pane_t

0x104c,	// (0x000793b4) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x104c,	// (0x000793b4) list_single_cmail_header_editor_pane_bg_cp01

0x1070,	// (0x000793d8) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1070,	// (0x000793d8) list_single_cmail_header_editor_pane_bg_cp02

0x9fc1,	// (0x00082329) main_radioblah_text_pane_t1_ParamLimits

0x9fc1,	// (0x00082329) main_radioblah_text_pane_t1

0xe206,	// (0x0008656e) cam6_indi_pane_cp01

0xe20e,	// (0x00086576) cam6_mode_pane_cp01

0xe216,	// (0x0008657e) cam6_pano_pane

0xe21f,	// (0x00086587) cam6_zoom_pane_cp01

0xe229,	// (0x00086591) cam6_pano_image_pane

0xe232,	// (0x0008659a) cam6_pano_pane_g1

0xd73d,	// (0x00085aa5) cam6_pano_pane_g2

0xe23b,	// (0x000865a3) cam6_pano_pane_g3

0xe244,	// (0x000865ac) cam6_pano_pane_g4

0xc455,	// (0x000847bd) cam6_pano_pane_g5

0xe24d,	// (0x000865b5) cam6_pano_pane_g6

0xe255,	// (0x000865bd) cam6_pano_pane_g7

0xe25d,	// (0x000865c5) cam6_pano_pane_g8

0xe266,	// (0x000865ce) cam6_pano_pane_g9

0x0008,

0xfe07,	// (0x0008816f) cam6_pano_pane_g

0xaade,	// (0x00082e46) main_browser_tag_pane

0xdf92,	// (0x000862fa) grid_navstr_albumart_pane

0xe271,	// (0x000865d9) cell_navstr_albumart_pane_ParamLimits

0xe271,	// (0x000865d9) cell_navstr_albumart_pane

0xe28d,	// (0x000865f5) cell_navstr_albumart_pane_g1

0x5254,	// (0x0007d5bc) cell_navstr_albumart_pane_g2

0x5264,	// (0x0007d5cc) cell_navstr_albumart_pane_g3

0x525c,	// (0x0007d5c4) cell_navstr_albumart_pane_g4

0x0003,

0xfe1a,	// (0x00088182) cell_navstr_albumart_pane_g

0x9fdc,	// (0x00082344) bt_list_pane_ParamLimits

0x9fdc,	// (0x00082344) bt_list_pane

0x9ff2,	// (0x0008235a) bt_list_pane_t1

0xa001,	// (0x00082369) bt_list_pane_t2

0x0001,

0xfe23,	// (0x0008818b) bt_list_pane_t

0xaade,	// (0x00082e46) main_cale_prevew_pane

0xa010,	// (0x00082378) popup_cale_preview_window_ParamLimits

0xa010,	// (0x00082378) popup_cale_preview_window

0xab57,	// (0x00082ebf) bg_popup_preview_window_pane_cp05_ParamLimits

0xab57,	// (0x00082ebf) bg_popup_preview_window_pane_cp05

0xe295,	// (0x000865fd) list_cale_preview_pane_ParamLimits

0xe295,	// (0x000865fd) list_cale_preview_pane

0xa02b,	// (0x00082393) list_double_cale_preview_pane_ParamLimits

0xa02b,	// (0x00082393) list_double_cale_preview_pane

0xa03f,	// (0x000823a7) list_single_cale_preview_pane_ParamLimits

0xa03f,	// (0x000823a7) list_single_cale_preview_pane

0xa057,	// (0x000823bf) list_single_cale_preview_pane_g1

0xa05f,	// (0x000823c7) list_single_cale_preview_pane_t1_ParamLimits

0xa05f,	// (0x000823c7) list_single_cale_preview_pane_t1

0xa074,	// (0x000823dc) list_double_cale_preview_pane_g1

0xa07c,	// (0x000823e4) list_double_cale_preview_pane_t1_ParamLimits

0xa07c,	// (0x000823e4) list_double_cale_preview_pane_t1

0xa091,	// (0x000823f9) list_double_cale_preview_pane_t2_ParamLimits

0xa091,	// (0x000823f9) list_double_cale_preview_pane_t2

0x0001,

0xfe28,	// (0x00088190) list_double_cale_preview_pane_t_ParamLimits

0xfe28,	// (0x00088190) list_double_cale_preview_pane_t

0xaade,	// (0x00082e46) main_ezdial_pane

0xab57,	// (0x00082ebf) main_sp_fs_email_pane_ParamLimits

0x9c25,	// (0x00081f8d) cmail_ddmenu_btn01_pane_ParamLimits

0x9c25,	// (0x00081f8d) cmail_ddmenu_btn01_pane

0x9c38,	// (0x00081fa0) cmail_ddmenu_btn02_pane_ParamLimits

0x9c38,	// (0x00081fa0) cmail_ddmenu_btn02_pane

0x9c5b,	// (0x00081fc3) cmail_ddmenu_btn03_pane_ParamLimits

0x9c5b,	// (0x00081fc3) cmail_ddmenu_btn03_pane

0x0bcc,	// (0x00078f34) main_sp_fs_ctrlbar_pane_ParamLimits

0x0bf0,	// (0x00078f58) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9d9f,	// (0x00082107) list_cmail_body_pane_ParamLimits

0xdec2,	// (0x0008622a) bg_button_pane_cp12

0xdecb,	// (0x00086233) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdecb,	// (0x00086233) list_single_cmail_header_detail_pane_g3

0x0f9c,	// (0x00079304) list_single_cmail_header_detail_pane_t2_ParamLimits

0x0f9c,	// (0x00079304) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdab,	// (0x00088113) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdab,	// (0x00088113) list_single_cmail_header_detail_pane_t

0xdffa,	// (0x00086362) phacti_term_pane_t2_ParamLimits

0xdffa,	// (0x00086362) phacti_term_pane_t2

0x0001,

0xfdb5,	// (0x0008811d) phacti_term_pane_t_ParamLimits

0xfdb5,	// (0x0008811d) phacti_term_pane_t

0xe2a1,	// (0x00086609) aid_size_list_single_double

0xa0a9,	// (0x00082411) popup_ezdial_listscroll_window

0xa0c5,	// (0x0008242d) popup_number_entry_window_cp01

0x34e7,	// (0x0007b84f) bg_popup_call_pane_cp09

0xe2ad,	// (0x00086615) ezdial_list_pane

0xe2b5,	// (0x0008661d) scroll_pane_cp23

0x5745,	// (0x0007daad) bg_button_pane_cp028_ParamLimits

0x5745,	// (0x0007daad) bg_button_pane_cp028

0xa0d3,	// (0x0008243b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa0d3,	// (0x0008243b) cmail_ddmenu_btn01_pane_g1

0xa0e2,	// (0x0008244a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa0e2,	// (0x0008244a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2d,	// (0x00088195) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2d,	// (0x00088195) cmail_ddmenu_btn01_pane_g

0xe2bd,	// (0x00086625) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe2bd,	// (0x00086625) cmail_ddmenu_btn01_pane_t1

0x5745,	// (0x0007daad) bg_button_pane_cp029_ParamLimits

0x5745,	// (0x0007daad) bg_button_pane_cp029

0xa0f2,	// (0x0008245a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa0f2,	// (0x0008245a) cmail_ddmenu_btn02_pane_g1

0xa10d,	// (0x00082475) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa10d,	// (0x00082475) cmail_ddmenu_btn02_pane_t1

0xab57,	// (0x00082ebf) bg_button_pane_cp031_ParamLimits

0xab57,	// (0x00082ebf) bg_button_pane_cp031

0xa0f2,	// (0x0008245a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa0f2,	// (0x0008245a) cmail_ddmenu_btn03_pane_g1

0xa10d,	// (0x00082475) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa10d,	// (0x00082475) cmail_ddmenu_btn03_pane_t1

0x792a,	// (0x0007fc92) cell_dialer2_keypad_pane_t1_ParamLimits

0x7944,	// (0x0007fcac) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7944,	// (0x0007fcac) cell_dialer2_keypad_pane_t1_copy1

0x9578,	// (0x000818e0) ncimui_group_button_pane

0xab57,	// (0x00082ebf) main_sp_fs_calendar_pane_ParamLimits

0x9db7,	// (0x0008211f) list_single_cmail_header_caption_pane_ParamLimits

0xe045,	// (0x000863ad) aid_recal_txt_sm_pane

0xaade,	// (0x00082e46) mian_recal_day_pane

0xe084,	// (0x000863ec) popup_sp_fs_cale_preview_window_ParamLimits

0xaade,	// (0x00082e46) list_recal_day_pane

0xe2ec,	// (0x00086654) list_single_recal_day_pane_ParamLimits

0xe2ec,	// (0x00086654) list_single_recal_day_pane

0xe2fe,	// (0x00086666) list_single_recal_day_pane_g1_ParamLimits

0xe2fe,	// (0x00086666) list_single_recal_day_pane_g1

0xe30a,	// (0x00086672) list_single_recal_day_pane_g2_ParamLimits

0xe30a,	// (0x00086672) list_single_recal_day_pane_g2

0xe31a,	// (0x00086682) list_single_recal_day_pane_g3_ParamLimits

0xe31a,	// (0x00086682) list_single_recal_day_pane_g3

0xa134,	// (0x0008249c) list_single_recal_day_pane_g4_ParamLimits

0xa134,	// (0x0008249c) list_single_recal_day_pane_g4

0xe326,	// (0x0008668e) list_single_recal_day_pane_g5_ParamLimits

0xe326,	// (0x0008668e) list_single_recal_day_pane_g5

0xe336,	// (0x0008669e) list_single_recal_day_pane_g6_ParamLimits

0xe336,	// (0x0008669e) list_single_recal_day_pane_g6

0x0004,

0xfe3c,	// (0x000881a4) list_single_recal_day_pane_g_ParamLimits

0xfe3c,	// (0x000881a4) list_single_recal_day_pane_g

0xe34d,	// (0x000866b5) list_single_recal_day_pane_t1

0xe35f,	// (0x000866c7) list_single_recal_day_pane_t2

0x0001,

0xfe47,	// (0x000881af) list_single_recal_day_pane_t

0xa154,	// (0x000824bc) ncimui_query_button_pane_ParamLimits

0xa154,	// (0x000824bc) ncimui_query_button_pane

0xa164,	// (0x000824cc) ncimui_query_button_pane_t1_ParamLimits

0xa164,	// (0x000824cc) ncimui_query_button_pane_t1

0xe374,	// (0x000866dc) ncimui_query_button_pane_t2_ParamLimits

0xe374,	// (0x000866dc) ncimui_query_button_pane_t2

0x0001,

0xfe4c,	// (0x000881b4) ncimui_query_button_pane_t_ParamLimits

0xfe4c,	// (0x000881b4) ncimui_query_button_pane_t

0xa177,	// (0x000824df) query_button_pane_ParamLimits

0xa177,	// (0x000824df) query_button_pane

0xaade,	// (0x00082e46) bg_button_pane_cp0028

0xe387,	// (0x000866ef) query_button_pane_t1

0x5767,	// (0x0007dacf) main_tport_pane_ParamLimits

0x9c86,	// (0x00081fee) bg_popup_window_pane_cp01_ParamLimits

0x9c86,	// (0x00081fee) bg_popup_window_pane_cp01

0x9ca0,	// (0x00082008) heading_pane_cp08_ParamLimits

0x9ca0,	// (0x00082008) heading_pane_cp08

0x9cb4,	// (0x0008201c) heading_pane_cp07_ParamLimits

0x9cb4,	// (0x0008201c) heading_pane_cp07

0xde85,	// (0x000861ed) cell_tport_appsw_pane_g2

0x0002,

0xfd98,	// (0x00088100) cell_tport_appsw_pane_g

0xbaa7,	// (0x00083e0f) input_candi_list_open_g1

0xe9e7,	// (0x00086d4f) list_cale_time_pane_g6_ParamLimits

0xe9e7,	// (0x00086d4f) list_cale_time_pane_g6

0x670f,	// (0x0007ea77) aid_size_touch_calib_1_ParamLimits

0x670f,	// (0x0007ea77) aid_size_touch_calib_1

0x6721,	// (0x0007ea89) aid_size_touch_calib_2_ParamLimits

0x6721,	// (0x0007ea89) aid_size_touch_calib_2

0x6739,	// (0x0007eaa1) aid_size_touch_calib_3_ParamLimits

0x6739,	// (0x0007eaa1) aid_size_touch_calib_3

0x6757,	// (0x0007eabf) aid_size_touch_calib_4_ParamLimits

0x6757,	// (0x0007eabf) aid_size_touch_calib_4

0x676f,	// (0x0007ead7) main_touch_calib_button_group_pane_ParamLimits

0x676f,	// (0x0007ead7) main_touch_calib_button_group_pane

0x6787,	// (0x0007eaef) main_touch_calib_pane_g1_ParamLimits

0x6799,	// (0x0007eb01) main_touch_calib_pane_g2_ParamLimits

0x67ab,	// (0x0007eb13) main_touch_calib_pane_g3_ParamLimits

0x67bd,	// (0x0007eb25) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x00087ac9) main_touch_calib_pane_g_ParamLimits

0x67cf,	// (0x0007eb37) main_touch_calib_pane_t1_ParamLimits

0x67e9,	// (0x0007eb51) main_touch_calib_pane_t2_ParamLimits

0x6803,	// (0x0007eb6b) main_touch_calib_pane_t3_ParamLimits

0x6817,	// (0x0007eb7f) main_touch_calib_pane_t4_ParamLimits

0x682d,	// (0x0007eb95) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x00087ad2) main_touch_calib_pane_t_ParamLimits

0xc21f,	// (0x00084587) list_single_fp_cale_pane_g3_ParamLimits

0xc21f,	// (0x00084587) list_single_fp_cale_pane_g3

0xab57,	// (0x00082ebf) bg_button_pane_cp012_ParamLimits

0xab57,	// (0x00082ebf) bg_vkb2_func_pane_cp03_ParamLimits

0x88f3,	// (0x00080c5b) cell_vitu2_function_top_pane_g1_ParamLimits

0xab57,	// (0x00082ebf) bg_vkb2_func_pane_cp04_ParamLimits

0x9506,	// (0x0008186e) main_ncimui_button_group_pane_ParamLimits

0x9506,	// (0x0008186e) main_ncimui_button_group_pane

0x9566,	// (0x000818ce) main_ncimui_pane_t3_ParamLimits

0x9566,	// (0x000818ce) main_ncimui_pane_t3

0xdfa8,	// (0x00086310) phacti_button_group_pane

0xe2a1,	// (0x00086609) aid_size_list_single_double_ParamLimits

0xa0a9,	// (0x00082411) popup_ezdial_listscroll_window_ParamLimits

0xa0c5,	// (0x0008242d) popup_number_entry_window_cp01_ParamLimits

0xa18a,	// (0x000824f2) phacti_button_pane_ParamLimits

0xa18a,	// (0x000824f2) phacti_button_pane

0xaade,	// (0x00082e46) bg_button_pane_cp14

0xe395,	// (0x000866fd) phacti_button_pane_t1

0xa19b,	// (0x00082503) main_touch_calib_button_pane_ParamLimits

0xa19b,	// (0x00082503) main_touch_calib_button_pane

0xb2fd,	// (0x00083665) bg_button_pane_cp18_ParamLimits

0xb2fd,	// (0x00083665) bg_button_pane_cp18

0xe3a3,	// (0x0008670b) main_touch_calib_button_pane_t1_ParamLimits

0xe3a3,	// (0x0008670b) main_touch_calib_button_pane_t1

0xe3b9,	// (0x00086721) main_touch_calib_button_pane_t2_ParamLimits

0xe3b9,	// (0x00086721) main_touch_calib_button_pane_t2

0x0001,

0xfe51,	// (0x000881b9) main_touch_calib_button_pane_t_ParamLimits

0xfe51,	// (0x000881b9) main_touch_calib_button_pane_t

0xaade,	// (0x00082e46) cell_ncimui_button_pane

0xaade,	// (0x00082e46) bg_button_pane_cp032

0xe3d7,	// (0x0008673f) cell_ncimui_button_pane_t1

0xee7d,	// (0x000871e5) image3_infobar_pane_ParamLimits

0xee7d,	// (0x000871e5) image3_infobar_pane

0x9936,	// (0x00081c9e) fs_bigclock_status_pane_ParamLimits

0x9936,	// (0x00081c9e) fs_bigclock_status_pane

0x9943,	// (0x00081cab) main_fs_bigclock_clock_pane_ParamLimits

0x9943,	// (0x00081cab) main_fs_bigclock_clock_pane

0x9957,	// (0x00081cbf) main_fs_bigclock_indi_pane_ParamLimits

0x9957,	// (0x00081cbf) main_fs_bigclock_indi_pane

0x9972,	// (0x00081cda) main_fs_bigclock_swipe_pane_ParamLimits

0x9972,	// (0x00081cda) main_fs_bigclock_swipe_pane

0xaade,	// (0x00082e46) main_fs_clock_dumped_data

0xd84a,	// (0x00085bb2) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd84a,	// (0x00085bb2) list_single_fs_bigclock_indicator_pane_g1

0xd874,	// (0x00085bdc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd874,	// (0x00085bdc) list_single_fs_bigclock_indicator_pane_g2

0xd88e,	// (0x00085bf6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd88e,	// (0x00085bf6) list_single_fs_bigclock_indicator_pane_g3

0xd8a8,	// (0x00085c10) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd8a8,	// (0x00085c10) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x00087fe7) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x00087fe7) list_single_fs_bigclock_indicator_pane_g

0xd8d3,	// (0x00085c3b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd8d3,	// (0x00085c3b) list_single_fs_bigclock_indicator_pane_t1

0xd8fb,	// (0x00085c63) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd8fb,	// (0x00085c63) list_single_fs_bigclock_indicator_pane_t2

0xd923,	// (0x00085c8b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd923,	// (0x00085c8b) list_single_fs_bigclock_indicator_pane_t3

0xd94b,	// (0x00085cb3) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd94b,	// (0x00085cb3) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x00087ff2) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x00087ff2) list_single_fs_bigclock_indicator_pane_t

0xe3e5,	// (0x0008674d) image3_infobar_fav_pane_ParamLimits

0xe3e5,	// (0x0008674d) image3_infobar_fav_pane

0xe3f5,	// (0x0008675d) image3_infobar_loc_pane_ParamLimits

0xe3f5,	// (0x0008675d) image3_infobar_loc_pane

0xe40b,	// (0x00086773) image3_infobar_time_pane_ParamLimits

0xe40b,	// (0x00086773) image3_infobar_time_pane

0xbebf,	// (0x00084227) image3_infobar_time_pane_g1

0xe41b,	// (0x00086783) image3_infobar_time_pane_t1

0xbebf,	// (0x00084227) image3_infobar_loc_pane_g1

0xe429,	// (0x00086791) image3_infobar_loc_pane_g2

0x0001,

0xfe56,	// (0x000881be) image3_infobar_loc_pane_g

0xe431,	// (0x00086799) image3_infobar_loc_pane_t1

0xbebf,	// (0x00084227) image3_infobar_fav_pane_g1

0xe43f,	// (0x000867a7) image3_infobar_fav_pane_g2

0x0001,

0xfe5b,	// (0x000881c3) image3_infobar_fav_pane_g

0xe447,	// (0x000867af) fs_bigclock_status_battery_pane

0xe450,	// (0x000867b8) fs_bigclock_status_signal_pane

0xe459,	// (0x000867c1) fs_bigclock_status_title_pane

0xe462,	// (0x000867ca) fs_bigclock_status_signal_pane_g1

0xe46b,	// (0x000867d3) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe60,	// (0x000881c8) fs_bigclock_status_signal_pane_g

0xe473,	// (0x000867db) fs_bigclock_status_battery_pane_g1

0xe47c,	// (0x000867e4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe65,	// (0x000881cd) fs_bigclock_status_battery_pane_g

0xe484,	// (0x000867ec) fs_bigclock_status_title_pane_t1

0xbebf,	// (0x00084227) main_fs_bigclock_clock_pane_g1

0xe492,	// (0x000867fa) main_fs_bigclock_clock_pane_g2

0xe492,	// (0x000867fa) main_fs_bigclock_clock_pane_g3

0xe492,	// (0x000867fa) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6a,	// (0x000881d2) main_fs_bigclock_clock_pane_g

0xe49a,	// (0x00086802) main_fs_bigclock_clock_pane_t1

0xe4a8,	// (0x00086810) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe73,	// (0x000881db) main_fs_bigclock_clock_pane_t

0xa1b0,	// (0x00082518) list_single_fs_bigclock_indicator_pane_ParamLimits

0xa1b0,	// (0x00082518) list_single_fs_bigclock_indicator_pane

0xa1c1,	// (0x00082529) list_single_fs_bigclock_pane_ParamLimits

0xa1c1,	// (0x00082529) list_single_fs_bigclock_pane

0xe4c0,	// (0x00086828) main_fs_bigclock_indicator_pane_t1

0xe4cf,	// (0x00086837) list_single_fs_bigclock_pane_g1

0xe4d7,	// (0x0008683f) list_single_fs_bigclock_pane_t1

0xbebf,	// (0x00084227) main_fs_bigclock_swipe_pane_g1

0xe51a,	// (0x00086882) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe84,	// (0x000881ec) main_fs_bigclock_swipe_pane_g

0xe522,	// (0x0008688a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe522,	// (0x0008688a) main_fs_bigclock_swipe_pane_t1

0x2e8d,	// (0x0007b1f5) call_type_pane_ParamLimits

0xaade,	// (0x00082e46) main_btmg_pane

0xe17d,	// (0x000864e5) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe17d,	// (0x000864e5) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf7,	// (0x0008815f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf7,	// (0x0008815f) list_single_cale_mrui_row_pane_g

0xe2dc,	// (0x00086644) list_recal_vselct_arw_lo_pane

0xe2e4,	// (0x0008664c) list_recal_vselct_arw_up_pane

0xce95,	// (0x000851fd) list_recal_vselct_pane

0xa224,	// (0x0008258c) btmg_button_pane

0xa22e,	// (0x00082596) main_btmg_pane_g1

0xaade,	// (0x00082e46) bg_button_pane_cp044

0xe53f,	// (0x000868a7) btmg_button_pane_t1

0x5729,	// (0x0007da91) aid_listscroll_gen

0xab57,	// (0x00082ebf) main_cntbar_detail_pane

0xdea3,	// (0x0008620b) list_cmail_folder_pane

0xdeb3,	// (0x0008621b) sp_fs_scroll_pane_cp03_ParamLimits

0x108e,	// (0x000793f6) list_single_fs_dyc_pane_cp01_ParamLimits

0x108e,	// (0x000793f6) list_single_fs_dyc_pane_cp01

0xe54d,	// (0x000868b5) aid_size_cmail_indent

0xe556,	// (0x000868be) list_single_dyc_row_pane_cp01

0xa268,	// (0x000825d0) cntbar_detail_list_pane_ParamLimits

0xa268,	// (0x000825d0) cntbar_detail_list_pane

0xa2ba,	// (0x00082622) main_cntbar_detail_cont_pane_ParamLimits

0xa2ba,	// (0x00082622) main_cntbar_detail_cont_pane

0x2e81,	// (0x0007b1e9) scroll_pane_cp032_ParamLimits

0x2e81,	// (0x0007b1e9) scroll_pane_cp032

0xa2ce,	// (0x00082636) cntbar_detail_list_event_pane_ParamLimits

0xa2ce,	// (0x00082636) cntbar_detail_list_event_pane

0xa27a,	// (0x000825e2) cntbar_detail_list_shct_pane

0xb899,	// (0x00083c01) aid_list_gen

0xe55f,	// (0x000868c7) aid_scroll

0xe568,	// (0x000868d0) aid_size_touch_scroll_bar

0xa2de,	// (0x00082646) aid_list_double

0xa2e7,	// (0x0008264f) aid_list_single

0xa2f1,	// (0x00082659) aid_list_single_lg

0xe571,	// (0x000868d9) aid_list_z_g_a_sm

0xf0c7,	// (0x0008742f) aid_list_z_g_d

0x10a8,	// (0x00079410) aid_txt_z_prm

0x10b8,	// (0x00079420) aid_txt_z_prm_cp01

0x10c6,	// (0x0007942e) aid_txt_z_sec

0xa2fa,	// (0x00082662) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa2fa,	// (0x00082662) main_cntbar_detail_cont_pane_g1

0xa30e,	// (0x00082676) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa30e,	// (0x00082676) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe89,	// (0x000881f1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe89,	// (0x000881f1) main_cntbar_detail_cont_pane_g

0xe579,	// (0x000868e1) main_cntbar_detail_cont_pane_t1

0xe587,	// (0x000868ef) main_cntbar_detail_cont_pane_t2

0xe595,	// (0x000868fd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe8e,	// (0x000881f6) main_cntbar_detail_cont_pane_t

0xa31e,	// (0x00082686) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa31e,	// (0x00082686) cell_cntbar_detail_list_shct_pane

0xe5a3,	// (0x0008690b) cntbar_detail_list_shct_pane_g1

0xe5ac,	// (0x00086914) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe95,	// (0x000881fd) cntbar_detail_list_shct_pane_g

0xa330,	// (0x00082698) cntbar_detail_list_event_pane_g1_ParamLimits

0xa330,	// (0x00082698) cntbar_detail_list_event_pane_g1

0xa33c,	// (0x000826a4) cntbar_detail_list_event_pane_g2_ParamLimits

0xa33c,	// (0x000826a4) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9a,	// (0x00088202) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9a,	// (0x00088202) cntbar_detail_list_event_pane_g

0xa3aa,	// (0x00082712) cntbar_detail_list_event_pane_t1_ParamLimits

0xa3aa,	// (0x00082712) cntbar_detail_list_event_pane_t1

0xa3bf,	// (0x00082727) cntbar_detail_list_event_pane_t2_ParamLimits

0xa3bf,	// (0x00082727) cntbar_detail_list_event_pane_t2

0x0002,

0xfea7,	// (0x0008820f) cntbar_detail_list_event_pane_t_ParamLimits

0xfea7,	// (0x0008820f) cntbar_detail_list_event_pane_t

0xbebf,	// (0x00084227) cell_cntbar_detail_list_shct_pane_g1

0x3465,	// (0x0007b7cd) navi_pane_mv_g3

0xab57,	// (0x00082ebf) main_cntbar_detail_pane_ParamLimits

0xaade,	// (0x00082e46) main_notif_wgt_pane

0xec95,	// (0x00086ffd) aid_tch_main_mp4_pane_g4

0xee73,	// (0x000871db) popup_slider_window_cp02

0xe2d2,	// (0x0008663a) list_recal_day_event_pane

0xa238,	// (0x000825a0) cntbar_detail_btn_pane_ParamLimits

0xa238,	// (0x000825a0) cntbar_detail_btn_pane

0xa250,	// (0x000825b8) cntbar_detail_btn_pane_cp01_ParamLimits

0xa250,	// (0x000825b8) cntbar_detail_btn_pane_cp01

0xa27a,	// (0x000825e2) cntbar_detail_list_shct_pane_ParamLimits

0xa28a,	// (0x000825f2) cntbar_detail_pane_g1_ParamLimits

0xa28a,	// (0x000825f2) cntbar_detail_pane_g1

0xa29e,	// (0x00082606) cntbar_detail_pane_t1_ParamLimits

0xa29e,	// (0x00082606) cntbar_detail_pane_t1

0xa348,	// (0x000826b0) cntbar_detail_list_event_pane_g3_ParamLimits

0xa348,	// (0x000826b0) cntbar_detail_list_event_pane_g3

0xa360,	// (0x000826c8) cntbar_detail_list_event_pane_g4_ParamLimits

0xa360,	// (0x000826c8) cntbar_detail_list_event_pane_g4

0xa378,	// (0x000826e0) cntbar_detail_list_event_pane_g5_ParamLimits

0xa378,	// (0x000826e0) cntbar_detail_list_event_pane_g5

0xa390,	// (0x000826f8) cntbar_detail_list_event_pane_g6_ParamLimits

0xa390,	// (0x000826f8) cntbar_detail_list_event_pane_g6

0xa3d4,	// (0x0008273c) cntbar_detail_list_event_pane_t3_ParamLimits

0xa3d4,	// (0x0008273c) cntbar_detail_list_event_pane_t3

0xa3e6,	// (0x0008274e) popup_notif_wgt_window_ParamLimits

0xa3e6,	// (0x0008274e) popup_notif_wgt_window

0xa3ff,	// (0x00082767) popup_submenu_window_cp01_ParamLimits

0xa3ff,	// (0x00082767) popup_submenu_window_cp01

0x34e7,	// (0x0007b84f) bg_popup_window_pane_cp10

0xe5b5,	// (0x0008691d) listscroll_notif_wgt_pane

0xe5c7,	// (0x0008692f) list_notif_wgt_window

0xe5d0,	// (0x00086938) scroll_pane_cp033

0xa413,	// (0x0008277b) list_notif_wgt_row_pane_ParamLimits

0xa413,	// (0x0008277b) list_notif_wgt_row_pane

0xe5d9,	// (0x00086941) aid_size_list_notif_wgt_del

0xe5e6,	// (0x0008694e) list_notif_wgt_row_pane_g1

0xe5f2,	// (0x0008695a) list_notif_wgt_row_pane_g2

0xe5fe,	// (0x00086966) list_notif_wgt_row_pane_g3

0x0002,

0xfeae,	// (0x00088216) list_notif_wgt_row_pane_g

0xe60b,	// (0x00086973) list_notif_wgt_row_pane_t1

0xe620,	// (0x00086988) list_notif_wgt_row_pane_t2

0xe632,	// (0x0008699a) list_notif_wgt_row_pane_t3

0x0002,

0xfeb5,	// (0x0008821d) list_notif_wgt_row_pane_t

0xcb67,	// (0x00084ecf) list_recal_day_event_pane_g1

0xe644,	// (0x000869ac) list_recal_day_event_pane_t1

0xaade,	// (0x00082e46) bg_button_pane_cp045

0xe653,	// (0x000869bb) cntbar_detail_btn_pane_t1

0x5745,	// (0x0007daad) main_callh_pane_ParamLimits

0x5745,	// (0x0007daad) main_callh_pane

0xaade,	// (0x00082e46) main_coverflow0_pane

0xaade,	// (0x00082e46) main_wgtman_pane

0x9980,	// (0x00081ce8) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9980,	// (0x00081ce8) main_fs_bigclock_unlock_btn_pane

0xde7d,	// (0x000861e5) bg_button_pane_cp16

0xde8d,	// (0x000861f5) cell_tport_appsw_pane_g3

0xa423,	// (0x0008278b) cf0_flow_pane_ParamLimits

0xa423,	// (0x0008278b) cf0_flow_pane

0xe661,	// (0x000869c9) listscroll_cf0_pane

0xe66c,	// (0x000869d4) main_cf0_pane_g1

0xa438,	// (0x000827a0) main_cf0_pane_t1_ParamLimits

0xa438,	// (0x000827a0) main_cf0_pane_t1

0xa44f,	// (0x000827b7) main_cf0_pane_t2_ParamLimits

0xa44f,	// (0x000827b7) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00088224) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00088224) main_cf0_pane_t

0xe676,	// (0x000869de) scroll_pane_cp11

0xa466,	// (0x000827ce) cf0_flow_pane_g1

0xa472,	// (0x000827da) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00088229) cf0_flow_pane_g

0xa47e,	// (0x000827e6) cf0_flow_pane_t1

0xaade,	// (0x00082e46) main_call6_pane

0xaade,	// (0x00082e46) main_calllock_pane

0xa490,	// (0x000827f8) call6_btn_grp_pane_ParamLimits

0xa490,	// (0x000827f8) call6_btn_grp_pane

0xa4aa,	// (0x00082812) call6_pane_g1_ParamLimits

0xa4aa,	// (0x00082812) call6_pane_g1

0xa4c0,	// (0x00082828) popup_call6_1st_window_ParamLimits

0xa4c0,	// (0x00082828) popup_call6_1st_window

0xa4d1,	// (0x00082839) popup_call6_2nd_window_ParamLimits

0xa4d1,	// (0x00082839) popup_call6_2nd_window

0xa4e2,	// (0x0008284a) cell_call6_btn_pane_ParamLimits

0xa4e2,	// (0x0008284a) cell_call6_btn_pane

0x34e7,	// (0x0007b84f) bg_popup_call2_in_pane_cp03

0xe681,	// (0x000869e9) popup_call6_1st_window_g1

0xe689,	// (0x000869f1) popup_call6_1st_window_g2

0xe691,	// (0x000869f9) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0008822e) popup_call6_1st_window_g

0xe699,	// (0x00086a01) popup_call6_1st_window_t1

0xe6a8,	// (0x00086a10) popup_call6_1st_window_t2

0xe6b8,	// (0x00086a20) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00088235) popup_call6_1st_window_t

0x34e7,	// (0x0007b84f) bg_popup_call2_in_pane_cp04

0xe681,	// (0x000869e9) popup_call6_2nd_window_g1

0xe689,	// (0x000869f1) popup_call6_2nd_window_g2

0xe691,	// (0x000869f9) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0008822e) popup_call6_2nd_window_g

0xe699,	// (0x00086a01) popup_call6_2nd_window_t1

0xaade,	// (0x00082e46) bg_button_pane_cp15

0xe6c8,	// (0x00086a30) cell_call6_btn_pane_g1

0xe6d1,	// (0x00086a39) cell_call6_btn_pane_t1

0xa4f6,	// (0x0008285e) listscroll_wgtman_pane_ParamLimits

0xa4f6,	// (0x0008285e) listscroll_wgtman_pane

0xa519,	// (0x00082881) wgtman_btn_pane_ParamLimits

0xa519,	// (0x00082881) wgtman_btn_pane

0x3080,	// (0x0007b3e8) aid_scroll_copy1

0xe6e0,	// (0x00086a48) list_wgtman_pane

0xa55c,	// (0x000828c4) wgtman_btn_pane_g1_ParamLimits

0xa55c,	// (0x000828c4) wgtman_btn_pane_g1

0xa588,	// (0x000828f0) wgtman_btn_pane_t1_ParamLimits

0xa588,	// (0x000828f0) wgtman_btn_pane_t1

0xe6ea,	// (0x00086a52) wgtman_btn_pane_t2_ParamLimits

0xe6ea,	// (0x00086a52) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0008823c) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0008823c) wgtman_btn_pane_t

0xa5c5,	// (0x0008292d) listrow_wgtman_pane_ParamLimits

0xa5c5,	// (0x0008292d) listrow_wgtman_pane

0xa5d9,	// (0x00082941) listrow_wgtman_pane_g1

0xa5e6,	// (0x0008294e) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00088241) listrow_wgtman_pane_g

0x10d4,	// (0x0007943c) listrow_wgtman_pane_t1

0x10ec,	// (0x00079454) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00088246) listrow_wgtman_pane_t

0x1112,	// (0x0007947a) wait_bar_pane_cp09

0xe701,	// (0x00086a69) main_calllock_btn_pane

0xe70b,	// (0x00086a73) main_calllock_pane_g1

0xaade,	// (0x00082e46) bg_button_pane_cp17

0xe717,	// (0x00086a7f) main_calllock_btn_pane_g1

0xe720,	// (0x00086a88) main_calllock_btn_pane_t1

0xaade,	// (0x00082e46) main_dialer3_pane

0xaade,	// (0x00082e46) main_fmrd2_pane

0xbebf,	// (0x00084227) main_fs_bigclock_unlock_btn_pane_g1

0xe737,	// (0x00086a9f) main_fs_bigclock_unlock_btn_pane_t1

0xa604,	// (0x0008296c) area_fmrd2_info_pane_ParamLimits

0xa604,	// (0x0008296c) area_fmrd2_info_pane

0xa615,	// (0x0008297d) area_fmrd2_visual_pane_ParamLimits

0xa615,	// (0x0008297d) area_fmrd2_visual_pane

0xa623,	// (0x0008298b) fmrd2_indi_pane_ParamLimits

0xa623,	// (0x0008298b) fmrd2_indi_pane

0xa630,	// (0x00082998) area_fmrd2_visual_pane_g1

0xa638,	// (0x000829a0) area_fmrd2_visual_pane_t1

0xa648,	// (0x000829b0) area_fmrd2_visual_pane_t2

0xa658,	// (0x000829c0) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00088250) area_fmrd2_visual_pane_t

0xa668,	// (0x000829d0) area_fmrd2_info_pane_g1

0xa670,	// (0x000829d8) area_fmrd2_info_pane_t1

0xa680,	// (0x000829e8) area_fmrd2_info_pane_t2

0xa690,	// (0x000829f8) area_fmrd2_info_pane_t3

0xa6a0,	// (0x00082a08) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00088257) area_fmrd2_info_pane_t

0xa6b0,	// (0x00082a18) fmrd2_indi_pane_t1

0xa6c0,	// (0x00082a28) fmrd2_indi_pane_t2

0xa6d0,	// (0x00082a38) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00088260) fmrd2_indi_pane_t

0xd8b7,	// (0x00085c1f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd8b7,	// (0x00085c1f) list_single_fs_bigclock_indicator_pane_g5

0xd960,	// (0x00085cc8) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd960,	// (0x00085cc8) list_single_fs_bigclock_indicator_pane_t5

0x9ed2,	// (0x0008223a) aid_cell_bcale_month_pane_ParamLimits

0x9ed2,	// (0x0008223a) aid_cell_bcale_month_pane

0x9eea,	// (0x00082252) bcale_month_pane_ParamLimits

0x9eea,	// (0x00082252) bcale_month_pane

0x9f01,	// (0x00082269) bcale_preview_pane_ParamLimits

0x9f01,	// (0x00082269) bcale_preview_pane

0xe4d7,	// (0x0008683f) list_single_fs_bigclock_pane_t1_ParamLimits

0xe4f6,	// (0x0008685e) list_single_fs_bigclock_pane_t2_ParamLimits

0xe4f6,	// (0x0008685e) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7f,	// (0x000881e7) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7f,	// (0x000881e7) list_single_fs_bigclock_pane_t

0xe72f,	// (0x00086a97) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0008824b) main_fs_bigclock_unlock_btn_pane_g

0xa6e0,	// (0x00082a48) aid_dia3_key_size_ParamLimits

0xa6e0,	// (0x00082a48) aid_dia3_key_size

0xa6ef,	// (0x00082a57) aid_dia3_listrow_size_ParamLimits

0xa6ef,	// (0x00082a57) aid_dia3_listrow_size

0xa704,	// (0x00082a6c) dia3_keypad_fun_pane_ParamLimits

0xa704,	// (0x00082a6c) dia3_keypad_fun_pane

0xa720,	// (0x00082a88) dia3_keypad_num_pane_ParamLimits

0xa720,	// (0x00082a88) dia3_keypad_num_pane

0xa739,	// (0x00082aa1) dia3_listscroll_pane_ParamLimits

0xa739,	// (0x00082aa1) dia3_listscroll_pane

0xa74c,	// (0x00082ab4) dia3_numentry_pane_ParamLimits

0xa74c,	// (0x00082ab4) dia3_numentry_pane

0xe745,	// (0x00086aad) dia3_list_pane

0xe750,	// (0x00086ab8) scroll_pane_cp12

0xaade,	// (0x00082e46) bg_dia3_numentry_pane

0xa760,	// (0x00082ac8) dia3_numentry_pane_t1

0xa76f,	// (0x00082ad7) cell_dia3_key_num_pane

0xa777,	// (0x00082adf) cell_dia3_key0_fun_pane_ParamLimits

0xa777,	// (0x00082adf) cell_dia3_key0_fun_pane

0xa78b,	// (0x00082af3) cell_dia3_key1_fun_pane_ParamLimits

0xa78b,	// (0x00082af3) cell_dia3_key1_fun_pane

0xa7a3,	// (0x00082b0b) dia3_listrow_pane

0xd5b5,	// (0x0008591d) bg_dia3_numentry_pane_g1

0xaade,	// (0x00082e46) bg_button_pane_cp21

0xe75b,	// (0x00086ac3) cell_dia3_key_num_pane_t1

0xe769,	// (0x00086ad1) cell_dia3_key_num_pane_t2

0xe778,	// (0x00086ae0) cell_dia3_key_num_pane_t3

0xe787,	// (0x00086aef) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00088267) cell_dia3_key_num_pane_t

0xaade,	// (0x00082e46) bg_button_pane_cp19

0xa7b5,	// (0x00082b1d) cell_dia3_key0_fun_pane_g1

0xaade,	// (0x00082e46) bg_button_pane_cp20

0xa7bd,	// (0x00082b25) cell_dia3_key1_fun_pane_g1

0xa7c5,	// (0x00082b2d) area_left_week_number_pane

0xa7d1,	// (0x00082b39) area_top_day_name_pane

0xa7dd,	// (0x00082b45) frame_month_view_pane

0xa7e9,	// (0x00082b51) grid_month_view_pane

0xe796,	// (0x00086afe) cell_top_day_name_pane_ParamLimits

0xe796,	// (0x00086afe) cell_top_day_name_pane

0xa7f5,	// (0x00082b5d) cell_area_left_week_number_pane_ParamLimits

0xa7f5,	// (0x00082b5d) cell_area_left_week_number_pane

0xa80b,	// (0x00082b73) cell_month_view_pane_ParamLimits

0xa80b,	// (0x00082b73) cell_month_view_pane

0xe7b2,	// (0x00086b1a) frm_month_g1

0xa82c,	// (0x00082b94) frm_month_g2

0xa836,	// (0x00082b9e) frm_month_g3

0xa840,	// (0x00082ba8) frm_month_g4

0xa84a,	// (0x00082bb2) frm_month_g5

0xa854,	// (0x00082bbc) frm_month_g6

0xa860,	// (0x00082bc8) frm_month_g7

0xe7bb,	// (0x00086b23) frm_month_g8

0xf0cf,	// (0x00087437) frm_month_g9

0xe7c4,	// (0x00086b2c) frm_month_g10

0xe7cd,	// (0x00086b35) frm_month_g11

0xe7d6,	// (0x00086b3e) frm_month_g12

0xe7df,	// (0x00086b47) frm_month_g13

0xe7ea,	// (0x00086b52) frm_month_g14

0xe7f5,	// (0x00086b5d) frm_month_g15

0xe800,	// (0x00086b68) frm_month_g16

0x000f,

0xff08,	// (0x00088270) frm_month_g

0xa86c,	// (0x00082bd4) cell_top_day_name_pane_t1

0xa87b,	// (0x00082be3) cell_area_left_week_number_pane_g1

0xa883,	// (0x00082beb) cell_area_left_week_number_pane_t1

0xbebf,	// (0x00084227) cell_month_view_pane_g1

0xa892,	// (0x00082bfa) cell_month_view_pane_t1

0xaade,	// (0x00082e46) main_fps_pane

0xdbb8,	// (0x00085f20) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdbb8,	// (0x00085f20) cmail_ddmenu_btn02_pane_cp1

0xdbd4,	// (0x00085f3c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdbd4,	// (0x00085f3c) cmail_ddmenu_btn02_pane_cp2

0xa101,	// (0x00082469) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa101,	// (0x00082469) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe32,	// (0x0008819a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe32,	// (0x0008819a) cmail_ddmenu_btn02_pane_g

0xa122,	// (0x0008248a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa122,	// (0x0008248a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe37,	// (0x0008819f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe37,	// (0x0008819f) cmail_ddmenu_btn02_pane_t

0xa8a1,	// (0x00082c09) fps_text_pane_ParamLimits

0xa8a1,	// (0x00082c09) fps_text_pane

0xa8b8,	// (0x00082c20) main_fps_pane_g1_ParamLimits

0xa8b8,	// (0x00082c20) main_fps_pane_g1

0xa8d0,	// (0x00082c38) wait_bar_pane_cp010_ParamLimits

0xa8d0,	// (0x00082c38) wait_bar_pane_cp010

0xa8e3,	// (0x00082c4b) fps_text_pane_t1_ParamLimits

0xa8e3,	// (0x00082c4b) fps_text_pane_t1

0xc872,	// (0x00084bda) cam4_image_uncrop_pane_g1

0xc87b,	// (0x00084be3) cam4_image_uncrop_pane_g2

0x7e16,	// (0x0008017e) cam4_image_uncrop_pane_g3

0x7e1f,	// (0x00080187) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x00087c61) cam4_image_uncrop_pane_g

0xa7a3,	// (0x00082b0b) dia3_listrow_pane_ParamLimits

0xaade,	// (0x00082e46) main_phob2_pane

0x9d23,	// (0x0008208b) cell_tport_appsw_pane_cp02_ParamLimits

0x9d23,	// (0x0008208b) cell_tport_appsw_pane_cp02

0x9d37,	// (0x0008209f) cell_tport_appsw_pane_cp03_ParamLimits

0x9d37,	// (0x0008209f) cell_tport_appsw_pane_cp03

0xaade,	// (0x00082e46) phob2_contact_card_pane

0xaade,	// (0x00082e46) phob2_listscroll_pane

0xe80b,	// (0x00086b73) phob2_list_pane

0xe813,	// (0x00086b7b) scroll_pane_cp034

0xa8fb,	// (0x00082c63) phob2_cc_data_pane_ParamLimits

0xa8fb,	// (0x00082c63) phob2_cc_data_pane

0xa91c,	// (0x00082c84) phob2_cc_listscroll_pane_ParamLimits

0xa91c,	// (0x00082c84) phob2_cc_listscroll_pane

0xa93e,	// (0x00082ca6) list_double_large_graphic_phob2_pane_ParamLimits

0xa93e,	// (0x00082ca6) list_double_large_graphic_phob2_pane

0xa953,	// (0x00082cbb) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa953,	// (0x00082cbb) list_double_large_graphic_phob2_pane_g1

0x1124,	// (0x0007948c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1124,	// (0x0007948c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00088291) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00088291) list_double_large_graphic_phob2_pane_g

0x1130,	// (0x00079498) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1130,	// (0x00079498) list_double_large_graphic_phob2_pane_t1

0x1145,	// (0x000794ad) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1145,	// (0x000794ad) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00088296) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00088296) list_double_large_graphic_phob2_pane_t

0xaade,	// (0x00082e46) list_highlight_pane_cp024

0xe81b,	// (0x00086b83) phob2_cc_button_pane

0xa960,	// (0x00082cc8) phob2_cc_data_pane_g1_ParamLimits

0xa960,	// (0x00082cc8) phob2_cc_data_pane_g1

0xa976,	// (0x00082cde) phob2_cc_data_pane_g2_ParamLimits

0xa976,	// (0x00082cde) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0008829b) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0008829b) phob2_cc_data_pane_g

0xa98a,	// (0x00082cf2) phob2_cc_data_pane_t1_ParamLimits

0xa98a,	// (0x00082cf2) phob2_cc_data_pane_t1

0xa9a4,	// (0x00082d0c) phob2_cc_data_pane_t2_ParamLimits

0xa9a4,	// (0x00082d0c) phob2_cc_data_pane_t2

0xa9be,	// (0x00082d26) phob2_cc_data_pane_t3_ParamLimits

0xa9be,	// (0x00082d26) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000882a0) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000882a0) phob2_cc_data_pane_t

0xe823,	// (0x00086b8b) phob2_cc_list_pane_ParamLimits

0xe823,	// (0x00086b8b) phob2_cc_list_pane

0xcc12,	// (0x00084f7a) scroll_pane_cp035_ParamLimits

0xcc12,	// (0x00084f7a) scroll_pane_cp035

0xab57,	// (0x00082ebf) bg_button_pane_cp033

0xe82f,	// (0x00086b97) phob2_cc_button_pane_g1

0xe83b,	// (0x00086ba3) phob2_cc_button_pane_t1

0xe850,	// (0x00086bb8) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000882a7) phob2_cc_button_pane_t

0xa9d8,	// (0x00082d40) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa9d8,	// (0x00082d40) list_double_large_graphic_phob2_cc_pane

0xa9ed,	// (0x00082d55) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa9ed,	// (0x00082d55) list_double_large_graphic_phob2_cc_pane_g1

0x1157,	// (0x000794bf) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1157,	// (0x000794bf) list_double_large_graphic_phob2_cc_pane_g2

0x1163,	// (0x000794cb) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1163,	// (0x000794cb) list_double_large_graphic_phob2_cc_pane_g3

0x116f,	// (0x000794d7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x116f,	// (0x000794d7) list_double_large_graphic_phob2_cc_pane_g4

0x117b,	// (0x000794e3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x117b,	// (0x000794e3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000882ac) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000882ac) list_double_large_graphic_phob2_cc_pane_g

0x1187,	// (0x000794ef) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1187,	// (0x000794ef) list_double_large_graphic_phob2_cc_pane_t1

0x11b0,	// (0x00079518) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x11b0,	// (0x00079518) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000882b7) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000882b7) list_double_large_graphic_phob2_cc_pane_t

0xe862,	// (0x00086bca) list_highlight_pane_cp025_ParamLimits

0xe862,	// (0x00086bca) list_highlight_pane_cp025

0xab57,	// (0x00082ebf) bg_button_pane_cp033_ParamLimits

0xe82f,	// (0x00086b97) phob2_cc_button_pane_g1_ParamLimits

0xe83b,	// (0x00086ba3) phob2_cc_button_pane_t1_ParamLimits

0xe850,	// (0x00086bb8) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000882a7) phob2_cc_button_pane_t_ParamLimits

0x13f8,	// (0x00079760) popup_wgtman_window

0xca12,	// (0x00084d7a) scroll_pane_cp038

0xa53e,	// (0x000828a6) wgtman_btn_pane_cp_01_ParamLimits

0xa53e,	// (0x000828a6) wgtman_btn_pane_cp_01

0xe870,	// (0x00086bd8) wgtman_content_pane

0xe879,	// (0x00086be1) wgtman_heading_pane

0xaade,	// (0x00082e46) bg_heading_pane_cp02

0xe882,	// (0x00086bea) wgtman_heading_pane_g1

0xe88a,	// (0x00086bf2) wgtman_heading_pane_t1

0xe898,	// (0x00086c00) scroll_pane_cp036

0xe8a0,	// (0x00086c08) wgtman_list_pane

0xda4b,	// (0x00085db3) wgtman_list_pane_t1_ParamLimits

0xda4b,	// (0x00085db3) wgtman_list_pane_t1

0xeed1,	// (0x00087239) cam4_grid_pane

0x0996,	// (0x00078cfe) bg_button_pane_cp015_ParamLimits

0x8a61,	// (0x00080dc9) bg_button_pane_cp016_ParamLimits

0x8a74,	// (0x00080ddc) bg_button_pane_cp017_ParamLimits

0x09de,	// (0x00078d46) popup_vitu2_query_window_g3_ParamLimits

0x09de,	// (0x00078d46) popup_vitu2_query_window_g3

0x0a59,	// (0x00078dc1) popup_vitu2_query_window_t6_ParamLimits

0x0a59,	// (0x00078dc1) popup_vitu2_query_window_t6

0x0a84,	// (0x00078dec) popup_vitu2_query_window_t7_ParamLimits

0x0a84,	// (0x00078dec) popup_vitu2_query_window_t7

0xc872,	// (0x00084bda) cam4_grid_pane_g1

0xc87b,	// (0x00084be3) cam4_grid_pane_g2

0xe8a8,	// (0x00086c10) cam4_grid_pane_g3

0xe8b1,	// (0x00086c19) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000882bc) cam4_grid_pane_g

0x20a8,	// (0x0007a410) aid_placing_vt_slider_lsc_ParamLimits

0x2395,	// (0x0007a6fd) vidtel_button_pane_ParamLimits

0x2395,	// (0x0007a6fd) vidtel_button_pane

0xe8bc,	// (0x00086c24) bg_button_pane_cp034

0xa9f9,	// (0x00082d61) vidtel_button_pane_g1

0xe8c6,	// (0x00086c2e) vidtel_button_pane_t1

0xcb31,	// (0x00084e99) aid_size_vtel_slider_touch

0xcc12,	// (0x00084f7a) scroll_pane_cp039

0xd5f3,	// (0x0008595b) ncim_query_button_pane_cp01_ParamLimits

0xd612,	// (0x0008597a) ncimui_query_pane_g1_ParamLimits

0xab57,	// (0x00082ebf) input_focus_pane_cp012_ParamLimits

0xd637,	// (0x0008599f) ncim_query_entry_pane_t1_ParamLimits

0xcc12,	// (0x00084f7a) scroll_pane_cp039_ParamLimits

0x3350,	// (0x0007b6b8) navi_pane_bcale_mc_g1

0x3358,	// (0x0007b6c0) navi_pane_bcale_mc_t1

0xdc1f,	// (0x00085f87) main_sp_fs_email_pane_g1

0xdc27,	// (0x00085f8f) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x00088058) main_sp_fs_email_pane_g

0xe189,	// (0x000864f1) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe189,	// (0x000864f1) list_single_cale_mrui_row_pane_g3

0xa14a,	// (0x000824b2) list_single_recal_day_pane_g5_event_pane

0xe345,	// (0x000866ad) list_single_recal_day_pane_g7

0xe8d4,	// (0x00086c3c) list_recal_day_event_pane_cp01

0xe8dd,	// (0x00086c45) list_recal_vselct_arw_lo_pane_cp01

0xe8e5,	// (0x00086c4d) list_recal_vselct_arw_up_pane_cp01

0xe8ed,	// (0x00086c55) list_recal_vselct_pane_cp01

0xcb67,	// (0x00084ecf) list_recal_day_event_pane_cp01_g1

0xe8f7,	// (0x00086c5f) list_recal_day_event_pane_cp01_t1

0xe34d,	// (0x000866b5) list_single_recal_day_pane_t1_ParamLimits

0xe35f,	// (0x000866c7) list_single_recal_day_pane_t2_ParamLimits

0xfe47,	// (0x000881af) list_single_recal_day_pane_t_ParamLimits

0xb2b3,	// (0x0008361b) bg_notes_pane_ParamLimits

0xb2c1,	// (0x00083629) list_notes_pane_ParamLimits

0x1711,	// (0x00079a79) scroll_pane_cp06_ParamLimits

0xb2fd,	// (0x00083665) main_notes_pane_ParamLimits

0xaade,	// (0x00082e46) main_welc_pane

0xaa01,	// (0x00082d69) main_welc_body_pane_ParamLimits

0xaa01,	// (0x00082d69) main_welc_body_pane

0xaa20,	// (0x00082d88) main_welc_opti_pane_ParamLimits

0xaa20,	// (0x00082d88) main_welc_opti_pane

0xaa67,	// (0x00082dcf) main_welc_pane_t1_ParamLimits

0xaa67,	// (0x00082dcf) main_welc_pane_t1

0xe905,	// (0x00086c6d) main_welc_body_row_pane_ParamLimits

0xe905,	// (0x00086c6d) main_welc_body_row_pane

0xaa89,	// (0x00082df1) main_welc_opti_row_pane_ParamLimits

0xaa89,	// (0x00082df1) main_welc_opti_row_pane

0xe91c,	// (0x00086c84) main_welc_opti_row_pane_g1

0xe924,	// (0x00086c8c) main_welc_opti_row_pane_t1

0xe933,	// (0x00086c9b) main_welc_body_row_pane_t1

0xe5bf,	// (0x00086927) popup_notif_wgt_heading_pane

0xe5d9,	// (0x00086941) aid_size_list_notif_wgt_del_ParamLimits

0xe5e6,	// (0x0008694e) list_notif_wgt_row_pane_g1_ParamLimits

0xe5f2,	// (0x0008695a) list_notif_wgt_row_pane_g2_ParamLimits

0xe5fe,	// (0x00086966) list_notif_wgt_row_pane_g3_ParamLimits

0xfeae,	// (0x00088216) list_notif_wgt_row_pane_g_ParamLimits

0xe60b,	// (0x00086973) list_notif_wgt_row_pane_t1_ParamLimits

0xe620,	// (0x00086988) list_notif_wgt_row_pane_t2_ParamLimits

0xe632,	// (0x0008699a) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb5,	// (0x0008821d) list_notif_wgt_row_pane_t_ParamLimits

0xa5d9,	// (0x00082941) listrow_wgtman_pane_g1_ParamLimits

0xa5e6,	// (0x0008294e) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00088241) listrow_wgtman_pane_g_ParamLimits

0x10d4,	// (0x0007943c) listrow_wgtman_pane_t1_ParamLimits

0x10ec,	// (0x00079454) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00088246) listrow_wgtman_pane_t_ParamLimits

0x1112,	// (0x0007947a) wait_bar_pane_cp09_ParamLimits

0xaade,	// (0x00082e46) bg_popup_heading_pane_cp02

0xe942,	// (0x00086caa) popup_notif_wgt_heading_pane_g1

0xe94a,	// (0x00086cb2) popup_notif_wgt_heading_pane_t1

0xaade,	// (0x00082e46) main_vids_pane

0xaade,	// (0x00082e46) vids_listscroll_pane

0xaa99,	// (0x00082e01) scroll_pane_cp040

0xaade,	// (0x00082e46) vids_list_pane

0xaaa4,	// (0x00082e0c) vids_list_double_pane_ParamLimits

0xaaa4,	// (0x00082e0c) vids_list_double_pane

0xaab5,	// (0x00082e1d) vids_list_double_pane_g1

0xaabe,	// (0x00082e26) vids_list_double_pane_t1

0xaace,	// (0x00082e36) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000882ca) vids_list_double_pane_t

0xab57,	// (0x00082ebf) main_ncimui_pane_ParamLimits

0x951a,	// (0x00081882) main_ncimui_pane_g1_ParamLimits

0x9526,	// (0x0008188e) main_ncimui_pane_g2_ParamLimits

0x9526,	// (0x0008188e) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x00087f5d) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x00087f5d) main_ncimui_pane_g

0xaa3f,	// (0x00082da7) main_welc_pane_g1_ParamLimits

0xaa3f,	// (0x00082da7) main_welc_pane_g1

0xaa54,	// (0x00082dbc) main_welc_pane_g2_ParamLimits

0xaa54,	// (0x00082dbc) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000882c5) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000882c5) main_welc_pane_g
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
