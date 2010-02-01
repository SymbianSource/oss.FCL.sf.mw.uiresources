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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00016f06 };

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
0x81a8,	// (0x0001f0ae) Screen

0x81b4,	// (0x0001f0ba) application_window

0x81f4,	// (0x0001f0fa) area_bottom_pane_ParamLimits

0x81f4,	// (0x0001f0fa) area_bottom_pane

0x8229,	// (0x0001f12f) area_top_pane_ParamLimits

0x8229,	// (0x0001f12f) area_top_pane

0x026b,	// (0x00017171) call_video_uplink_pane_ParamLimits

0x026b,	// (0x00017171) call_video_uplink_pane

0x82b6,	// (0x0001f1bc) main_pane_ParamLimits

0x82b6,	// (0x0001f1bc) main_pane

0x2bec,	// (0x00019af2) context_pane

0xafbb,	// (0x00021ec1) navi_pane

0xafdf,	// (0x00021ee5) popup_cale_events_window_ParamLimits

0xafdf,	// (0x00021ee5) popup_cale_events_window

0x2bff,	// (0x00019b05) popup_mup_playback_window

0xaff7,	// (0x00021efd) signal_pane

0x09f2,	// (0x000178f8) main_browser_pane

0x172e,	// (0x00018634) main_burst_pane

0xae6d,	// (0x00021d73) main_calc_pane

0x172e,	// (0x00018634) main_cale_day_pane

0x09f2,	// (0x000178f8) main_cale_month_pane

0x172e,	// (0x00018634) main_cale_week_pane

0x172e,	// (0x00018634) main_call_pane

0x06aa,	// (0x000175b0) main_call_poc_pane

0x172e,	// (0x00018634) main_camera_pane

0x172e,	// (0x00018634) main_chi_dic_pane

0x15d0,	// (0x000184d6) main_clock_pane

0x06aa,	// (0x000175b0) main_fmradio_pane

0x172e,	// (0x00018634) main_graph_messa_pane

0x06aa,	// (0x000175b0) main_help_pane

0x09f2,	// (0x000178f8) main_im_pane

0x0905,	// (0x0001780b) main_image_pane_ParamLimits

0x0905,	// (0x0001780b) main_image_pane

0x06aa,	// (0x000175b0) main_location2_pane

0x172e,	// (0x00018634) main_location_pane

0x06aa,	// (0x000175b0) main_messa_pane

0x06aa,	// (0x000175b0) main_mp2_pane

0x172e,	// (0x00018634) main_mp_pane

0x06aa,	// (0x000175b0) main_msg_pane

0x06aa,	// (0x000175b0) main_mup_eq_pane

0x06aa,	// (0x000175b0) main_mup_pane

0x172e,	// (0x00018634) main_notes_pane

0x06aa,	// (0x000175b0) main_pec_pane

0x06aa,	// (0x000175b0) main_phob_pane

0x06aa,	// (0x000175b0) main_pinb_pane

0x06aa,	// (0x000175b0) main_postcard_pane

0x06aa,	// (0x000175b0) main_qdial_pane

0x172e,	// (0x00018634) main_skin_pane

0x06aa,	// (0x000175b0) main_smil2_pane

0x172e,	// (0x00018634) main_smil_pane

0x172e,	// (0x00018634) main_video_pane

0x172e,	// (0x00018634) main_video_tele_pane

0x0905,	// (0x0001780b) main_viewer_pane_ParamLimits

0x0905,	// (0x0001780b) main_viewer_pane

0x172e,	// (0x00018634) main_vorec_pane

0xaea5,	// (0x00021dab) popup_blid_sat_info_window_ParamLimits

0xaea5,	// (0x00021dab) popup_blid_sat_info_window

0xaebf,	// (0x00021dc5) popup_dyc_status_message_window_ParamLimits

0xaebf,	// (0x00021dc5) popup_dyc_status_message_window

0xaecf,	// (0x00021dd5) popup_grid_large_graphic_window_ParamLimits

0xaecf,	// (0x00021dd5) popup_grid_large_graphic_window

0xaf47,	// (0x00021e4d) popup_loc_request_window_ParamLimits

0xaf47,	// (0x00021e4d) popup_loc_request_window

0xaf8f,	// (0x00021e95) popup_wml_address_window_ParamLimits

0xaf8f,	// (0x00021e95) popup_wml_address_window

0xad45,	// (0x00021c4b) call_muted_g1

0xaa01,	// (0x00021907) popup_call_audio_conf_window_ParamLimits

0xaa01,	// (0x00021907) popup_call_audio_conf_window

0xad55,	// (0x00021c5b) popup_call_audio_first_window_ParamLimits

0xad55,	// (0x00021c5b) popup_call_audio_first_window

0xad95,	// (0x00021c9b) popup_call_audio_in_window_ParamLimits

0xad95,	// (0x00021c9b) popup_call_audio_in_window

0xadb9,	// (0x00021cbf) popup_call_audio_out_window_ParamLimits

0xadb9,	// (0x00021cbf) popup_call_audio_out_window

0xaddb,	// (0x00021ce1) popup_call_audio_second_window_ParamLimits

0xaddb,	// (0x00021ce1) popup_call_audio_second_window

0xae0b,	// (0x00021d11) popup_call_audio_wait_window_ParamLimits

0xae0b,	// (0x00021d11) popup_call_audio_wait_window

0xae2c,	// (0x00021d32) popup_number_entry_window_ParamLimits

0xae2c,	// (0x00021d32) popup_number_entry_window

0x0297,	// (0x0001719d) bg_popup_call_pane_cp05_ParamLimits

0x0297,	// (0x0001719d) bg_popup_call_pane_cp05

0x02b7,	// (0x000171bd) popup_number_entry_window_t1

0x02ca,	// (0x000171d0) popup_number_entry_window_t2

0x02dc,	// (0x000171e2) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00025ff2) popup_number_entry_window_t

0x02ee,	// (0x000171f4) text_title_cp2

0x0301,	// (0x00017207) bg_popup_call_pane_cp_ParamLimits

0x0301,	// (0x00017207) bg_popup_call_pane_cp

0x030f,	// (0x00017215) call_thumbnail_pane

0x0317,	// (0x0001721d) popup_call_audio_in_window_g1_ParamLimits

0x0317,	// (0x0001721d) popup_call_audio_in_window_g1

0x0323,	// (0x00017229) popup_call_audio_in_window_g2_ParamLimits

0x0323,	// (0x00017229) popup_call_audio_in_window_g2

0x032f,	// (0x00017235) popup_call_audio_in_window_g3_ParamLimits

0x032f,	// (0x00017235) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00025ffb) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00025ffb) popup_call_audio_in_window_g

0x033b,	// (0x00017241) popup_call_audio_in_window_t1_ParamLimits

0x033b,	// (0x00017241) popup_call_audio_in_window_t1

0x0357,	// (0x0001725d) popup_call_audio_in_window_t2_ParamLimits

0x0357,	// (0x0001725d) popup_call_audio_in_window_t2

0x0373,	// (0x00017279) popup_call_audio_in_window_t3_ParamLimits

0x0373,	// (0x00017279) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00026002) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00026002) popup_call_audio_in_window_t

0x0301,	// (0x00017207) bg_popup_call_pane_cp01_ParamLimits

0x0301,	// (0x00017207) bg_popup_call_pane_cp01

0x030f,	// (0x00017215) call_thumbnail_pane_cp02

0x0386,	// (0x0001728c) call_type_pane_cp022

0x038e,	// (0x00017294) popup_call_audio_out_window_g1_ParamLimits

0x038e,	// (0x00017294) popup_call_audio_out_window_g1

0x03a0,	// (0x000172a6) popup_call_audio_out_window_g2_ParamLimits

0x03a0,	// (0x000172a6) popup_call_audio_out_window_g2

0x03ac,	// (0x000172b2) popup_call_audio_out_window_g3_ParamLimits

0x03ac,	// (0x000172b2) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00026009) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00026009) popup_call_audio_out_window_g

0x03be,	// (0x000172c4) popup_call_audio_out_window_t1_ParamLimits

0x03be,	// (0x000172c4) popup_call_audio_out_window_t1

0x03d6,	// (0x000172dc) popup_call_audio_out_window_t2_ParamLimits

0x03d6,	// (0x000172dc) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00026010) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00026010) popup_call_audio_out_window_t

0x03eb,	// (0x000172f1) bg_popup_call_pane_ParamLimits

0x03eb,	// (0x000172f1) bg_popup_call_pane

0x849e,	// (0x0001f3a4) call_thumbnail_pane_cp_ParamLimits

0x849e,	// (0x0001f3a4) call_thumbnail_pane_cp

0x046f,	// (0x00017375) call_type_pane_cp01_ParamLimits

0x046f,	// (0x00017375) call_type_pane_cp01

0x04b3,	// (0x000173b9) popup_call_audio_first_window_g1_ParamLimits

0x04b3,	// (0x000173b9) popup_call_audio_first_window_g1

0x04ff,	// (0x00017405) popup_call_audio_first_window_g2_ParamLimits

0x04ff,	// (0x00017405) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00026015) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00026015) popup_call_audio_first_window_g

0x0543,	// (0x00017449) popup_call_audio_first_window_t1_ParamLimits

0x0543,	// (0x00017449) popup_call_audio_first_window_t1

0x05ef,	// (0x000174f5) popup_call_audio_first_window_t4_ParamLimits

0x05ef,	// (0x000174f5) popup_call_audio_first_window_t4

0x067b,	// (0x00017581) popup_call_audio_first_window_t5_ParamLimits

0x067b,	// (0x00017581) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0002601a) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0002601a) popup_call_audio_first_window_t

0x06aa,	// (0x000175b0) bg_popup_call_pane_cp02

0x06b4,	// (0x000175ba) call_type_pane_cp023

0x06bc,	// (0x000175c2) popup_call_audio_wait_window_g1

0x06c4,	// (0x000175ca) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00026021) popup_call_audio_wait_window_g

0x06cc,	// (0x000175d2) popup_call_audio_wait_window_t3

0x06da,	// (0x000175e0) bg_popup_call_pane_cp03_ParamLimits

0x06da,	// (0x000175e0) bg_popup_call_pane_cp03

0x073a,	// (0x00017640) call_thumbnail_pane_cp011_ParamLimits

0x073a,	// (0x00017640) call_thumbnail_pane_cp011

0x0746,	// (0x0001764c) call_type_pane_cp034_ParamLimits

0x0746,	// (0x0001764c) call_type_pane_cp034

0x0782,	// (0x00017688) popup_call_audio_second_window_g1_ParamLimits

0x0782,	// (0x00017688) popup_call_audio_second_window_g1

0x07be,	// (0x000176c4) popup_call_audio_second_window_g2_ParamLimits

0x07be,	// (0x000176c4) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00026026) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00026026) popup_call_audio_second_window_g

0x07fa,	// (0x00017700) popup_call_audio_second_window_t1_ParamLimits

0x07fa,	// (0x00017700) popup_call_audio_second_window_t1

0x087b,	// (0x00017781) popup_call_audio_second_window_t2_ParamLimits

0x087b,	// (0x00017781) popup_call_audio_second_window_t2

0x08b1,	// (0x000177b7) popup_call_audio_second_window_t3_ParamLimits

0x08b1,	// (0x000177b7) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0002602b) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0002602b) popup_call_audio_second_window_t

0x06aa,	// (0x000175b0) bg_popup_call_pane_cp04

0x08e7,	// (0x000177ed) list_conf_pane

0x08ef,	// (0x000177f5) popup_call_audio_conf_window_t1

0x08fd,	// (0x00017803) call_thumbnail_pane_g1

0x0905,	// (0x0001780b) bg_pinb_pane_ParamLimits

0x0905,	// (0x0001780b) bg_pinb_pane

0x0913,	// (0x00017819) find_pinb_pane

0x091c,	// (0x00017822) listscroll_pinb_pane_ParamLimits

0x091c,	// (0x00017822) listscroll_pinb_pane

0x092b,	// (0x00017831) pinb_bg_pane_g1

0x84c2,	// (0x0001f3c8) pinb_bg_pane_g2

0x84ce,	// (0x0001f3d4) pinb_bg_pane_g3

0x84da,	// (0x0001f3e0) pinb_bg_pane_g4

0x84e6,	// (0x0001f3ec) pinb_bg_pane_g5

0x84f2,	// (0x0001f3f8) pinb_bg_pane_g6

0x84fd,	// (0x0001f403) pinb_bg_pane_g7

0x8508,	// (0x0001f40e) pinb_bg_pane_g8

0x8513,	// (0x0001f419) pinb_bg_pane_g9

0x851d,	// (0x0001f423) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00026032) pinb_bg_pane_g

0x853a,	// (0x0001f440) grid_pinb_pane

0x8545,	// (0x0001f44b) list_pinb_pane

0x8550,	// (0x0001f456) scroll_pane_cp01_ParamLimits

0x8550,	// (0x0001f456) scroll_pane_cp01

0x0935,	// (0x0001783b) find_pinb_pane_g1_ParamLimits

0x0935,	// (0x0001783b) find_pinb_pane_g1

0x094d,	// (0x00017853) find_pinb_pane_t1

0x095f,	// (0x00017865) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0002604c) find_pinb_pane_t

0x0974,	// (0x0001787a) input_focus_pane_cp01_ParamLimits

0x0974,	// (0x0001787a) input_focus_pane_cp01

0x8562,	// (0x0001f468) cell_pinb_pane_ParamLimits

0x8562,	// (0x0001f468) cell_pinb_pane

0x8582,	// (0x0001f488) cell_pinb_pane_g1_ParamLimits

0x8582,	// (0x0001f488) cell_pinb_pane_g1

0x8597,	// (0x0001f49d) cell_pinb_pane_g2_ParamLimits

0x8597,	// (0x0001f49d) cell_pinb_pane_g2

0x0980,	// (0x00017886) cell_pinb_pane_g3_ParamLimits

0x0980,	// (0x00017886) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00026051) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00026051) cell_pinb_pane_g

0x06aa,	// (0x000175b0) grid_highlight_pane_cp01

0x85a3,	// (0x0001f4a9) list_pinb_item_pane_ParamLimits

0x85a3,	// (0x0001f4a9) list_pinb_item_pane

0x06aa,	// (0x000175b0) list_highlight_pane_cp02

0x85be,	// (0x0001f4c4) list_pinb_item_pane_g1_ParamLimits

0x85be,	// (0x0001f4c4) list_pinb_item_pane_g1

0x85cb,	// (0x0001f4d1) list_pinb_item_pane_g2_ParamLimits

0x85cb,	// (0x0001f4d1) list_pinb_item_pane_g2

0x85d7,	// (0x0001f4dd) list_pinb_item_pane_g3_ParamLimits

0x85d7,	// (0x0001f4dd) list_pinb_item_pane_g3

0x85e8,	// (0x0001f4ee) list_pinb_item_pane_g4_ParamLimits

0x85e8,	// (0x0001f4ee) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00026058) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00026058) list_pinb_item_pane_g

0x85f4,	// (0x0001f4fa) list_pinb_item_pane_t1_ParamLimits

0x85f4,	// (0x0001f4fa) list_pinb_item_pane_t1

0x6cfb,	// (0x0001dc01) calc_display_pane

0x6d19,	// (0x0001dc1f) calc_paper_pane

0x6d35,	// (0x0001dc3b) grid_calc_pane

0x06aa,	// (0x000175b0) bg_list_pane_cp01

0x860b,	// (0x0001f511) clock_g1

0x8613,	// (0x0001f519) clock_g2

0x0001,

0xf15b,	// (0x00026061) clock_g

0x861d,	// (0x0001f523) clock_t1_ParamLimits

0x861d,	// (0x0001f523) clock_t1

0x8632,	// (0x0001f538) clock_t2_ParamLimits

0x8632,	// (0x0001f538) clock_t2

0x8644,	// (0x0001f54a) clock_t3_ParamLimits

0x8644,	// (0x0001f54a) clock_t3

0x8656,	// (0x0001f55c) clock_t4_ParamLimits

0x8656,	// (0x0001f55c) clock_t4

0x8668,	// (0x0001f56e) clock_t5_ParamLimits

0x8668,	// (0x0001f56e) clock_t5

0x867d,	// (0x0001f583) clock_t6_ParamLimits

0x867d,	// (0x0001f583) clock_t6

0x868f,	// (0x0001f595) clock_t7_ParamLimits

0x868f,	// (0x0001f595) clock_t7

0x86a1,	// (0x0001f5a7) clock_t8_ParamLimits

0x86a1,	// (0x0001f5a7) clock_t8

0x86b7,	// (0x0001f5bd) clock_t9_ParamLimits

0x86b7,	// (0x0001f5bd) clock_t9

0x0008,

0xf160,	// (0x00026066) clock_t_ParamLimits

0xf160,	// (0x00026066) clock_t

0x0994,	// (0x0001789a) popup_clock_analogue_window_cp02

0x0994,	// (0x0001789a) popup_clock_digital_window_cp01

0x099c,	// (0x000178a2) listscroll_help_pane

0x06aa,	// (0x000175b0) phob_pre_status_pane

0x09a6,	// (0x000178ac) grid_qdial_pane

0x06aa,	// (0x000175b0) listscroll_mce_pane

0x09b0,	// (0x000178b6) bg_notes_pane

0x09ba,	// (0x000178c0) list_notes_pane

0x86cd,	// (0x0001f5d3) scroll_pane_cp06

0x09c4,	// (0x000178ca) bg_calc_paper_pane

0x6d6b,	// (0x0001dc71) list_calc_pane

0x09f2,	// (0x000178f8) bg_calc_display_pane

0x6d85,	// (0x0001dc8b) calc_display_pane_t1

0x6d9a,	// (0x0001dca0) calc_display_pane_t2

0x6daf,	// (0x0001dcb5) calc_display_pane_t3

0x0002,

0xf173,	// (0x00026079) calc_display_pane_t

0x6dc1,	// (0x0001dcc7) cell_calc_pane_ParamLimits

0x6dc1,	// (0x0001dcc7) cell_calc_pane

0x0a10,	// (0x00017916) bg_calc_paper_pane_g1

0x0a28,	// (0x0001792e) bg_calc_paper_pane_g2

0x0a1c,	// (0x00017922) bg_calc_paper_pane_g3

0x0a40,	// (0x00017946) bg_calc_paper_pane_g4

0x0a34,	// (0x0001793a) bg_calc_paper_pane_g5

0x86d8,	// (0x0001f5de) bg_calc_paper_pane_g6

0x86e9,	// (0x0001f5ef) bg_calc_paper_pane_g7

0x86fa,	// (0x0001f600) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00026080) bg_calc_paper_pane_g

0x870b,	// (0x0001f611) calc_bg_paper_pane_g9

0x871c,	// (0x0001f622) list_calc_item_pane_ParamLimits

0x871c,	// (0x0001f622) list_calc_item_pane

0x0a4c,	// (0x00017952) list_calc_item_pane_g1

0x6df0,	// (0x0001dcf6) list_calc_item_pane_t1_ParamLimits

0x6df0,	// (0x0001dcf6) list_calc_item_pane_t1

0x6e02,	// (0x0001dd08) list_calc_item_pane_t2_ParamLimits

0x6e02,	// (0x0001dd08) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00026091) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00026091) list_calc_item_pane_t

0x0a6b,	// (0x00017971) cell_calc_pane_g1

0x0a75,	// (0x0001797b) grid_highlight_pane_cp02

0x0aaa,	// (0x000179b0) bg_calc_display_pane_g1

0x6e32,	// (0x0001dd38) bg_calc_display_pane_g2

0x0a97,	// (0x0001799d) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0002609b) bg_calc_display_pane_g

0x6e3c,	// (0x0001dd42) cell_qdial_pane_ParamLimits

0x6e3c,	// (0x0001dd42) cell_qdial_pane

0x8740,	// (0x0001f646) cell_qdial_pane_g1_ParamLimits

0x8740,	// (0x0001f646) cell_qdial_pane_g1

0x874d,	// (0x0001f653) cell_qdial_pane_g2_ParamLimits

0x874d,	// (0x0001f653) cell_qdial_pane_g2

0x0ab3,	// (0x000179b9) cell_qdial_pane_g3_ParamLimits

0x0ab3,	// (0x000179b9) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x000260a2) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x000260a2) cell_qdial_pane_g

0x876b,	// (0x0001f671) cell_qdial_pane_t1_ParamLimits

0x876b,	// (0x0001f671) cell_qdial_pane_t1

0x8783,	// (0x0001f689) cell_qdial_pane_t2_ParamLimits

0x8783,	// (0x0001f689) cell_qdial_pane_t2

0x8796,	// (0x0001f69c) cell_qdial_pane_t3_ParamLimits

0x8796,	// (0x0001f69c) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x000260ab) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x000260ab) cell_qdial_pane_t

0x06aa,	// (0x000175b0) grid_highlight_pane_cp04

0x0abf,	// (0x000179c5) thumbnail_qdial_pane_ParamLimits

0x0abf,	// (0x000179c5) thumbnail_qdial_pane

0x0b1b,	// (0x00017a21) list_help_pane

0x0b24,	// (0x00017a2a) scroll_pane_cp02

0x87a9,	// (0x0001f6af) help_list_pane_t1_ParamLimits

0x87a9,	// (0x0001f6af) help_list_pane_t1

0x6e52,	// (0x0001dd58) bg_notes_pane_g2

0x6e5a,	// (0x0001dd60) bg_notes_pane_g3

0x6e62,	// (0x0001dd68) notes_bg_pane_g1

0x6e6a,	// (0x0001dd70) notes_bg_pane_g4

0x6e72,	// (0x0001dd78) notes_bg_pane_g5

0x6e7a,	// (0x0001dd80) notes_bg_pane_g6

0x6e82,	// (0x0001dd88) notes_bg_pane_g7

0x6e8a,	// (0x0001dd90) notes_bg_pane_g8

0x6e92,	// (0x0001dd98) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x000260c9) notes_bg_pane_g

0x87d3,	// (0x0001f6d9) list_notes_text_pane_ParamLimits

0x87d3,	// (0x0001f6d9) list_notes_text_pane

0x0b75,	// (0x00017a7b) list_notes_text_pane_g1

0x0b7e,	// (0x00017a84) list_notes_text_pane_t1

0x09f2,	// (0x000178f8) listscroll_cale_week_pane

0x880d,	// (0x0001f713) bg_cale_heading_pane

0x0b9d,	// (0x00017aa3) bg_cale_pane_cp01

0x8821,	// (0x0001f727) cale_week_corner_pane

0x8837,	// (0x0001f73d) cale_week_day_heading_pane

0x884b,	// (0x0001f751) cale_week_scroll_pane_g1

0x885c,	// (0x0001f762) cale_week_scroll_pane_g2

0x886d,	// (0x0001f773) cale_week_scroll_pane_g3

0x887e,	// (0x0001f784) cale_week_scroll_pane_g4

0x888f,	// (0x0001f795) cale_week_scroll_pane_g5

0x88a0,	// (0x0001f7a6) cale_week_scroll_pane_g6

0x88b3,	// (0x0001f7b9) cale_week_scroll_pane_g7

0x88c6,	// (0x0001f7cc) cale_week_scroll_pane_g8

0x88d9,	// (0x0001f7df) cale_week_scroll_pane_g9

0x88ea,	// (0x0001f7f0) cale_week_scroll_pane_g10

0x88fb,	// (0x0001f801) cale_week_scroll_pane_g11

0x890c,	// (0x0001f812) cale_week_scroll_pane_g12

0x891d,	// (0x0001f823) cale_week_scroll_pane_g13

0x892e,	// (0x0001f834) cale_week_scroll_pane_g14

0x893f,	// (0x0001f845) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x000260d8) cale_week_scroll_pane_g

0x8950,	// (0x0001f856) cale_week_time_pane

0x8963,	// (0x0001f869) grid_cale_week_pane

0x8978,	// (0x0001f87e) scroll_pane_cp08

0x8992,	// (0x0001f898) cell_cale_week_pane_ParamLimits

0x8992,	// (0x0001f898) cell_cale_week_pane

0x89d0,	// (0x0001f8d6) cale_week_day_heading_pane_t1

0x89fd,	// (0x0001f903) cale_week_day_heading_pane_t2

0x8a2a,	// (0x0001f930) cale_week_day_heading_pane_t3

0x8a57,	// (0x0001f95d) cale_week_day_heading_pane_t4

0x8a84,	// (0x0001f98a) cale_week_day_heading_pane_t5

0x8ab1,	// (0x0001f9b7) cale_week_day_heading_pane_t6

0x8ade,	// (0x0001f9e4) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x000260f7) cale_week_day_heading_pane_t

0x0bc8,	// (0x00017ace) bg_cale_side_pane

0x6e9a,	// (0x0001dda0) cale_week_time_pane_t1

0x6ec6,	// (0x0001ddcc) cale_week_time_pane_t2

0x6ef2,	// (0x0001ddf8) cale_week_time_pane_t3

0x6f1e,	// (0x0001de24) cale_week_time_pane_t4

0x6f4a,	// (0x0001de50) cale_week_time_pane_t5

0x6f76,	// (0x0001de7c) cale_week_time_pane_t6

0x6fa2,	// (0x0001dea8) cale_week_time_pane_t7

0x6fce,	// (0x0001ded4) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00026106) cale_week_time_pane_t

0x8b0b,	// (0x0001fa11) cell_cale_week_pane_g2

0x8b24,	// (0x0001fa2a) cell_cale_week_pane_g3_ParamLimits

0x8b24,	// (0x0001fa2a) cell_cale_week_pane_g3

0x0bd6,	// (0x00017adc) grid_highlight_pane_cp07

0x0bde,	// (0x00017ae4) listscroll_gms_pane

0x0be8,	// (0x00017aee) grid_gms_pane

0x0bf1,	// (0x00017af7) listscroll_gms_pane_g1

0x0bf9,	// (0x00017aff) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00026117) listscroll_gms_pane_g

0x8b3c,	// (0x0001fa42) scroll_pane_cp010

0x8b47,	// (0x0001fa4d) cell_gms_pane_ParamLimits

0x8b47,	// (0x0001fa4d) cell_gms_pane

0x8b5a,	// (0x0001fa60) cell_gms_pane_g1

0x0c01,	// (0x00017b07) cell_gms_pane_g2

0x0c09,	// (0x00017b0f) cell_gms_pane_g3

0x0c12,	// (0x00017b18) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0002611c) cell_gms_pane_g

0x0c1b,	// (0x00017b21) grid_highlight_pane_cp09

0xaced,	// (0x00021bf3) phob_pre_status_pane_g1

0xacf5,	// (0x00021bfb) phob_pre_status_pane_g2

0xacfd,	// (0x00021c03) phob_pre_status_pane_g3

0xad05,	// (0x00021c0b) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0002650b) phob_pre_status_pane_g

0xad15,	// (0x00021c1b) phob_pre_status_pane_t1

0xad25,	// (0x00021c2b) phob_pre_status_pane_t2

0xad35,	// (0x00021c3b) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00026516) phob_pre_status_pane_t

0x06aa,	// (0x000175b0) bg_list_pane_cp05

0x7002,	// (0x0001df08) grid_vorec_pane

0x700c,	// (0x0001df12) vorec_t1

0x701a,	// (0x0001df20) vorec_t2

0x7028,	// (0x0001df2e) vorec_t3

0x7036,	// (0x0001df3c) vorec_t4

0x7044,	// (0x0001df4a) vorec_t5

0x7052,	// (0x0001df58) vorec_t6

0x0006,

0xf21f,	// (0x00026125) vorec_t

0x706e,	// (0x0001df74) wait_bar_pane_cp01

0x8b62,	// (0x0001fa68) cell_vorec_pane_ParamLimits

0x8b62,	// (0x0001fa68) cell_vorec_pane

0x0c8d,	// (0x00017b93) cell_vorec_pane_g1

0x06aa,	// (0x000175b0) grid_highlight_pane_cp05

0x8b87,	// (0x0001fa8d) cams_zoom_pane

0x8b93,	// (0x0001fa99) image_vga_pane

0x8ba2,	// (0x0001faa8) main_camera_pane_g1

0x8bb0,	// (0x0001fab6) main_camera_pane_g2

0x8bbc,	// (0x0001fac2) main_camera_pane_g3

0x8bca,	// (0x0001fad0) main_camera_pane_g4

0x8bd8,	// (0x0001fade) main_camera_pane_g5

0x8be6,	// (0x0001faec) main_camera_pane_g6

0x8bf4,	// (0x0001fafa) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00026134) main_camera_pane_g

0x8c02,	// (0x0001fb08) main_camera_pane_t1

0x8c14,	// (0x0001fb1a) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00026145) main_camera_pane_t

0x8c37,	// (0x0001fb3d) cams_zoom_pane_cp_ParamLimits

0x8c37,	// (0x0001fb3d) cams_zoom_pane_cp

0x8c5b,	// (0x0001fb61) image_cif_pane_ParamLimits

0x8c5b,	// (0x0001fb61) image_cif_pane

0x8c79,	// (0x0001fb7f) image_subqcif_pane

0x8c83,	// (0x0001fb89) main_video_pane_g1_ParamLimits

0x8c83,	// (0x0001fb89) main_video_pane_g1

0x8ca3,	// (0x0001fba9) main_video_pane_g2_ParamLimits

0x8ca3,	// (0x0001fba9) main_video_pane_g2

0x8cd3,	// (0x0001fbd9) main_video_pane_g3_ParamLimits

0x8cd3,	// (0x0001fbd9) main_video_pane_g3

0x8cfc,	// (0x0001fc02) main_video_pane_g4_ParamLimits

0x8cfc,	// (0x0001fc02) main_video_pane_g4

0x8d25,	// (0x0001fc2b) main_video_pane_g5_ParamLimits

0x8d25,	// (0x0001fc2b) main_video_pane_g5

0x0ca3,	// (0x00017ba9) main_video_pane_g6_ParamLimits

0x0ca3,	// (0x00017ba9) main_video_pane_g6

0x0006,

0xf244,	// (0x0002614a) main_video_pane_g_ParamLimits

0xf244,	// (0x0002614a) main_video_pane_g

0x8d47,	// (0x0001fc4d) main_video_pane_t1_ParamLimits

0x8d47,	// (0x0001fc4d) main_video_pane_t1

0x0cbd,	// (0x00017bc3) cams_zoom_pane_g1

0x0cc6,	// (0x00017bcc) cams_zoom_pane_g2

0x0ccf,	// (0x00017bd5) cams_zoom_pane_g3

0x0cd8,	// (0x00017bde) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00026159) cams_zoom_pane_g

0x8d91,	// (0x0001fc97) grid_cams_pane

0x8d9f,	// (0x0001fca5) linegrid_cams_pane

0x8dad,	// (0x0001fcb3) cell_cams_pane_ParamLimits

0x8dad,	// (0x0001fcb3) cell_cams_pane

0x0ce1,	// (0x00017be7) cams_burst_image_pane

0x0ce9,	// (0x00017bef) cell_cams_pane_g1

0x06aa,	// (0x000175b0) grid_highlight_pane_cp03

0x0a6b,	// (0x00017971) mp_bg_pane_g1

0x06aa,	// (0x000175b0) bg_list_pane_cp03

0x2abe,	// (0x000199c4) bg_mp_pane

0x2ac6,	// (0x000199cc) grid_mp_pane

0x2ace,	// (0x000199d4) media_player_g1

0x2ad8,	// (0x000199de) media_player_t1

0x2ae6,	// (0x000199ec) media_player_t2

0x2af4,	// (0x000199fa) media_player_t3

0x2b02,	// (0x00019a08) media_player_t4

0x2b10,	// (0x00019a16) media_player_t5

0x2b1e,	// (0x00019a24) media_player_t6

0x2b2c,	// (0x00019a32) media_player_t7

0x0006,

0xf5ef,	// (0x000264f5) media_player_t

0x2b3a,	// (0x00019a40) wait_bar_pane_cp02

0xf5d4,	// (0x000264da) main_usb_pane_t

0xace4,	// (0x00021bea) cell_mp_pane

0x0a6b,	// (0x00017971) cell_mp_pane_g1

0x06aa,	// (0x000175b0) grid_highlight_pane_cp06

0x0daf,	// (0x00017cb5) grid_skin_colour_pane

0x0db7,	// (0x00017cbd) list_highlight_pane_cp03

0x8e1b,	// (0x0001fd21) skin_g1

0x0dbf,	// (0x00017cc5) skin_t1

0x0dce,	// (0x00017cd4) skin_t2

0x0001,

0xf288,	// (0x0002618e) skin_t

0x8e25,	// (0x0001fd2b) cell_skin_colour_pane_ParamLimits

0x8e25,	// (0x0001fd2b) cell_skin_colour_pane

0x0ddc,	// (0x00017ce2) cell_skin_colour_pane_g1

0x8ea5,	// (0x0001fdab) call_video_g1_ParamLimits

0x8ea5,	// (0x0001fdab) call_video_g1

0x8eb5,	// (0x0001fdbb) call_video_g2_ParamLimits

0x8eb5,	// (0x0001fdbb) call_video_g2

0x0001,

0xf28d,	// (0x00026193) call_video_g_ParamLimits

0xf28d,	// (0x00026193) call_video_g

0x8f05,	// (0x0001fe0b) call_video_uplink_pane_cp1_ParamLimits

0x8f05,	// (0x0001fe0b) call_video_uplink_pane_cp1

0x0dee,	// (0x00017cf4) call_video_uplink_pane_cp2

0x8fd3,	// (0x0001fed9) video_down_crop_pane_ParamLimits

0x8fd3,	// (0x0001fed9) video_down_crop_pane

0x90c5,	// (0x0001ffcb) video_down_pane_ParamLimits

0x90c5,	// (0x0001ffcb) video_down_pane

0x0df6,	// (0x00017cfc) video_down_subqcif_pane_ParamLimits

0x0df6,	// (0x00017cfc) video_down_subqcif_pane

0x0e10,	// (0x00017d16) video_down_subqcif_pane_cp_ParamLimits

0x0e10,	// (0x00017d16) video_down_subqcif_pane_cp

0x0e36,	// (0x00017d3c) im_reading_pane_ParamLimits

0x0e36,	// (0x00017d3c) im_reading_pane

0x91e2,	// (0x000200e8) im_writing_pane_ParamLimits

0x91e2,	// (0x000200e8) im_writing_pane

0x9200,	// (0x00020106) im_reading_pane_t1

0x0e50,	// (0x00017d56) list_im_pane

0x0e61,	// (0x00017d67) scroll_pane_cp07

0x9248,	// (0x0002014e) im_writing_pane_t1_ParamLimits

0x9248,	// (0x0002014e) im_writing_pane_t1

0x0e7a,	// (0x00017d80) im_writing_pane_t2_ParamLimits

0x0e7a,	// (0x00017d80) im_writing_pane_t2

0x0001,

0xf297,	// (0x0002619d) im_writing_pane_t_ParamLimits

0xf297,	// (0x0002619d) im_writing_pane_t

0x06aa,	// (0x000175b0) input_focus_pane_cp04

0x06aa,	// (0x000175b0) input_focus_pane_cp05

0x925a,	// (0x00020160) list_im_single_pane_ParamLimits

0x925a,	// (0x00020160) list_im_single_pane

0x9276,	// (0x0002017c) list_single_im_pane_t1

0xaca8,	// (0x00021bae) blid_accuracy_pane

0xacb0,	// (0x00021bb6) blid_compass_pane

0xacba,	// (0x00021bc0) main_location_t1

0xacc8,	// (0x00021bce) main_location_t2

0xacd6,	// (0x00021bdc) main_location_t3

0x0002,

0xf5fe,	// (0x00026504) main_location_t

0x06aa,	// (0x000175b0) aid_levels_location

0x0a6b,	// (0x00017971) blid_accuracy_pane_g1

0x0a6b,	// (0x00017971) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x000261ff) blid_accuracy_pane_g

0x0ec2,	// (0x00017dc8) wml_content_pane

0x0f00,	// (0x00017e06) wml_button_pane_ParamLimits

0x0f00,	// (0x00017e06) wml_button_pane

0x9285,	// (0x0002018b) wml_list_single_large_pane_ParamLimits

0x9285,	// (0x0002018b) wml_list_single_large_pane

0x92a7,	// (0x000201ad) wml_list_single_medium_pane_ParamLimits

0x92a7,	// (0x000201ad) wml_list_single_medium_pane

0x92cd,	// (0x000201d3) wml_list_single_small_pane_ParamLimits

0x92cd,	// (0x000201d3) wml_list_single_small_pane

0x0f14,	// (0x00017e1a) wml_selection_box_pane_ParamLimits

0x0f14,	// (0x00017e1a) wml_selection_box_pane

0x0f27,	// (0x00017e2d) wml_list_single_pane_t1

0x0f36,	// (0x00017e3c) wml_list_single_medium_pane_t1

0x0f45,	// (0x00017e4b) wml_list_single_large_pane_t1

0x0f54,	// (0x00017e5a) input_focus_pane_cp02_ParamLimits

0x0f54,	// (0x00017e5a) input_focus_pane_cp02

0x0f67,	// (0x00017e6d) wml_selection_box_pane_g1

0x0f70,	// (0x00017e76) wml_selection_box_pane_t1_ParamLimits

0x0f70,	// (0x00017e76) wml_selection_box_pane_t1

0x0905,	// (0x0001780b) bg_wml_button_pane_ParamLimits

0x0905,	// (0x0001780b) bg_wml_button_pane

0x0f88,	// (0x00017e8e) wml_button_pane_g1

0x0f90,	// (0x00017e96) wml_button_pane_t1

0x0f88,	// (0x00017e8e) wml_button_bg_pane_g1

0x0fa0,	// (0x00017ea6) wml_button_bg_pane_g2

0x0fa8,	// (0x00017eae) wml_button_bg_pane_g3

0x0fb0,	// (0x00017eb6) wml_button_bg_pane_g4

0x0fb8,	// (0x00017ebe) wml_button_bg_pane_g5

0x0fc0,	// (0x00017ec6) wml_button_bg_pane_g6

0x0fc8,	// (0x00017ece) wml_button_bg_pane_g7

0x0fd0,	// (0x00017ed6) wml_button_bg_pane_g8

0x0fd8,	// (0x00017ede) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x000261a2) wml_button_bg_pane_g

0x92f8,	// (0x000201fe) bg_list_pane_cp02

0x0fe0,	// (0x00017ee6) mce_header_pane_ParamLimits

0x0fe0,	// (0x00017ee6) mce_header_pane

0x0ff6,	// (0x00017efc) mce_icon_pane

0x0ff6,	// (0x00017efc) mce_image_pane

0x0fff,	// (0x00017f05) mce_text_pane_ParamLimits

0x0fff,	// (0x00017f05) mce_text_pane

0x9302,	// (0x00020208) scroll_pane_cp03

0x0ef8,	// (0x00017dfe) scroll_pane_cp04

0x1012,	// (0x00017f18) scroll_pane_cp05_ParamLimits

0x1012,	// (0x00017f18) scroll_pane_cp05

0x930c,	// (0x00020212) mce_header_field_pane_ParamLimits

0x930c,	// (0x00020212) mce_header_field_pane

0x932e,	// (0x00020234) mce_header_field_pane_2_ParamLimits

0x932e,	// (0x00020234) mce_header_field_pane_2

0x9344,	// (0x0002024a) mce_header_field_pane_3

0x934c,	// (0x00020252) list_single_mce_message_pane_ParamLimits

0x934c,	// (0x00020252) list_single_mce_message_pane

0x936b,	// (0x00020271) list_single_mce_smart_pane_ParamLimits

0x936b,	// (0x00020271) list_single_mce_smart_pane

0x101e,	// (0x00017f24) input_focus_pane_cp03

0x1027,	// (0x00017f2d) list_header_data_pane

0x9395,	// (0x0002029b) mce_header_field_pane_t1

0x93a5,	// (0x000202ab) list_single_mce_header_pane_ParamLimits

0x93a5,	// (0x000202ab) list_single_mce_header_pane

0x102f,	// (0x00017f35) list_single_mce_header_pane_t1

0x103e,	// (0x00017f44) list_single_mce_message_pane_g1

0x1046,	// (0x00017f4c) list_single_mce_message_pane_t1

0x93e1,	// (0x000202e7) bg_cale_heading_pane_cp01_ParamLimits

0x93e1,	// (0x000202e7) bg_cale_heading_pane_cp01

0x1054,	// (0x00017f5a) bg_cale_pane_cp02_ParamLimits

0x1054,	// (0x00017f5a) bg_cale_pane_cp02

0x9404,	// (0x0002030a) cale_month_corner_pane

0x941a,	// (0x00020320) cale_month_day_heading_pane_ParamLimits

0x941a,	// (0x00020320) cale_month_day_heading_pane

0x944d,	// (0x00020353) cale_month_pane_g1_ParamLimits

0x944d,	// (0x00020353) cale_month_pane_g1

0x9469,	// (0x0002036f) cale_month_pane_g2_ParamLimits

0x9469,	// (0x0002036f) cale_month_pane_g2

0x9484,	// (0x0002038a) cale_month_pane_g3_ParamLimits

0x9484,	// (0x0002038a) cale_month_pane_g3

0x94b0,	// (0x000203b6) cale_month_pane_g4_ParamLimits

0x94b0,	// (0x000203b6) cale_month_pane_g4

0x94dc,	// (0x000203e2) cale_month_pane_g5_ParamLimits

0x94dc,	// (0x000203e2) cale_month_pane_g5

0x9508,	// (0x0002040e) cale_month_pane_g6_ParamLimits

0x9508,	// (0x0002040e) cale_month_pane_g6

0x9544,	// (0x0002044a) cale_month_pane_g7_ParamLimits

0x9544,	// (0x0002044a) cale_month_pane_g7

0x9580,	// (0x00020486) cale_month_pane_g8_ParamLimits

0x9580,	// (0x00020486) cale_month_pane_g8

0x95bc,	// (0x000204c2) cale_month_pane_g9_ParamLimits

0x95bc,	// (0x000204c2) cale_month_pane_g9

0x95f6,	// (0x000204fc) cale_month_pane_g10_ParamLimits

0x95f6,	// (0x000204fc) cale_month_pane_g10

0x9630,	// (0x00020536) cale_month_pane_g11_ParamLimits

0x9630,	// (0x00020536) cale_month_pane_g11

0x966a,	// (0x00020570) cale_month_pane_g12_ParamLimits

0x966a,	// (0x00020570) cale_month_pane_g12

0x96a4,	// (0x000205aa) cale_month_pane_g13_ParamLimits

0x96a4,	// (0x000205aa) cale_month_pane_g13

0x000c,

0xf2af,	// (0x000261b5) cale_month_pane_g_ParamLimits

0xf2af,	// (0x000261b5) cale_month_pane_g

0x96de,	// (0x000205e4) cale_month_week_pane

0x96f1,	// (0x000205f7) grid_cale_month_pane_ParamLimits

0x96f1,	// (0x000205f7) grid_cale_month_pane

0x971f,	// (0x00020625) cale_month_day_heading_pane_t1

0x977d,	// (0x00020683) cale_month_day_heading_pane_t2

0x97e2,	// (0x000206e8) cale_month_day_heading_pane_t3

0x9847,	// (0x0002074d) cale_month_day_heading_pane_t4

0x98ac,	// (0x000207b2) cale_month_day_heading_pane_t5

0x9919,	// (0x0002081f) cale_month_day_heading_pane_t6

0x998e,	// (0x00020894) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x000261d0) cale_month_day_heading_pane_t

0x0bc8,	// (0x00017ace) bg_cale_side_pane_cp01

0x9a03,	// (0x00020909) cale_month_week_pane_t1

0x9a2e,	// (0x00020934) cale_month_week_pane_t2

0x9a59,	// (0x0002095f) cale_month_week_pane_t3

0x9a84,	// (0x0002098a) cale_month_week_pane_t4

0x9aaf,	// (0x000209b5) cale_month_week_pane_t5

0x9ada,	// (0x000209e0) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x000261df) cale_month_week_pane_t

0x9b05,	// (0x00020a0b) cell_cale_month_pane_ParamLimits

0x9b05,	// (0x00020a0b) cell_cale_month_pane

0x7076,	// (0x0001df7c) cell_cale_month_pane_g1

0x7082,	// (0x0001df88) cell_cale_month_pane_t1_ParamLimits

0x7082,	// (0x0001df88) cell_cale_month_pane_t1

0x0bd6,	// (0x00017adc) grid_highlight_pane_cp08

0x0a6b,	// (0x00017971) main_smil_g1

0x9bd3,	// (0x00020ad9) smil_status_pane

0x10bf,	// (0x00017fc5) smil_text_pane

0x29dc,	// (0x000198e2) bg_popup_call3_rect_pane_g8

0x29e4,	// (0x000198ea) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00026498) bg_popup_call3_rect_pane_g

0x2c8c,	// (0x00019b92) smil_status_volume_pane_g1

0x10c9,	// (0x00017fcf) smil_status_pane_t1

0x71c0,	// (0x0001e0c6) volume_smil_pane

0x10e0,	// (0x00017fe6) list_smil_text_pane

0x9be6,	// (0x00020aec) scroll_pane_cp011

0x9bf1,	// (0x00020af7) smil_text_list_pane_t1_ParamLimits

0x9bf1,	// (0x00020af7) smil_text_list_pane_t1

0x709e,	// (0x0001dfa4) aid_volume_smil_ParamLimits

0x709e,	// (0x0001dfa4) aid_volume_smil

0x0a6b,	// (0x00017971) smil_volume_pane_g1

0x0a6b,	// (0x00017971) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x000261ff) smil_volume_pane_g

0x09f2,	// (0x000178f8) listscroll_cale_day_pane

0x110c,	// (0x00018012) bg_cale_pane

0x1124,	// (0x0001802a) list_cale_pane

0x1135,	// (0x0001803b) scroll_pane_cp09

0x1146,	// (0x0001804c) cale_bg_pane_g1

0x114e,	// (0x00018054) cale_bg_pane_g2

0x1156,	// (0x0001805c) cale_bg_pane_g3

0x115e,	// (0x00018064) cale_bg_pane_g4

0x1166,	// (0x0001806c) cale_bg_pane_g5

0x116e,	// (0x00018074) cale_bg_pane_g6

0x1176,	// (0x0001807c) cale_bg_pane_g7

0x117e,	// (0x00018084) cale_bg_pane_g8

0x1186,	// (0x0001808c) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00026204) cale_bg_pane_g

0x9c55,	// (0x00020b5b) list_cale_time_pane_ParamLimits

0x9c55,	// (0x00020b5b) list_cale_time_pane

0x9c6d,	// (0x00020b73) list_cale_time_pane_g1_ParamLimits

0x9c6d,	// (0x00020b73) list_cale_time_pane_g1

0x118e,	// (0x00018094) list_cale_time_pane_g2_ParamLimits

0x118e,	// (0x00018094) list_cale_time_pane_g2

0x9c79,	// (0x00020b7f) list_cale_time_pane_g3_ParamLimits

0x9c79,	// (0x00020b7f) list_cale_time_pane_g3

0x9c87,	// (0x00020b8d) list_cale_time_pane_g4_ParamLimits

0x9c87,	// (0x00020b8d) list_cale_time_pane_g4

0x9c95,	// (0x00020b9b) list_cale_time_pane_g5_ParamLimits

0x9c95,	// (0x00020b9b) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00026217) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00026217) list_cale_time_pane_g

0x9ca3,	// (0x00020ba9) list_cale_time_pane_t1_ParamLimits

0x9ca3,	// (0x00020ba9) list_cale_time_pane_t1

0x9ccb,	// (0x00020bd1) list_cale_time_pane_t2_ParamLimits

0x9ccb,	// (0x00020bd1) list_cale_time_pane_t2

0x9fcb,	// (0x00020ed1) aid_blid_cardinal_pane

0xa00d,	// (0x00020f13) compass_pane_t4

0x9cf3,	// (0x00020bf9) list_cale_time_pane_t4_ParamLimits

0x9cf3,	// (0x00020bf9) list_cale_time_pane_t4

0xa01b,	// (0x00020f21) compass_pane_t5

0xa02b,	// (0x00020f31) compass_pane_t6

0xa039,	// (0x00020f3f) compass_pane_t7

0x1680,	// (0x00018586) navi_pane_cc_t1

0x17e7,	// (0x000186ed) aid_phob_thumbnail_center_pane

0xa79e,	// (0x000216a4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00026224) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00026224) list_cale_time_pane_t

0x0301,	// (0x00017207) bg_popup_window_pane_cp02_ParamLimits

0x0301,	// (0x00017207) bg_popup_window_pane_cp02

0x11a8,	// (0x000180ae) heading_pane_cp01_ParamLimits

0x11a8,	// (0x000180ae) heading_pane_cp01

0x11b4,	// (0x000180ba) loc_req_pane_ParamLimits

0x11b4,	// (0x000180ba) loc_req_pane

0x11c4,	// (0x000180ca) loc_type_pane_ParamLimits

0x11c4,	// (0x000180ca) loc_type_pane

0x11d6,	// (0x000180dc) loc_type_pane_t1_ParamLimits

0x11d6,	// (0x000180dc) loc_type_pane_t1

0x11e8,	// (0x000180ee) loc_type_pane_t2_ParamLimits

0x11e8,	// (0x000180ee) loc_type_pane_t2

0x11fa,	// (0x00018100) loc_type_pane_t3_ParamLimits

0x11fa,	// (0x00018100) loc_type_pane_t3

0x0002,

0xf325,	// (0x0002622b) loc_type_pane_t_ParamLimits

0xf325,	// (0x0002622b) loc_type_pane_t

0x120c,	// (0x00018112) list_loc_req_pane

0x1216,	// (0x0001811c) scroll_pane_cp012

0x9d1b,	// (0x00020c21) list_single_loc_request_popup_menu_pane_ParamLimits

0x9d1b,	// (0x00020c21) list_single_loc_request_popup_menu_pane

0x1221,	// (0x00018127) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1221,	// (0x00018127) list_single_loc_request_popup_menu_pane_g1

0x122d,	// (0x00018133) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x122d,	// (0x00018133) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00026232) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00026232) list_single_loc_request_popup_menu_pane_g

0x1239,	// (0x0001813f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1239,	// (0x0001813f) list_single_loc_request_popup_menu_pane_t1

0x9d2d,	// (0x00020c33) bg_popup_window_pane_cp03_ParamLimits

0x9d2d,	// (0x00020c33) bg_popup_window_pane_cp03

0x9d3b,	// (0x00020c41) heading_loc_req_pane_ParamLimits

0x9d3b,	// (0x00020c41) heading_loc_req_pane

0x9d47,	// (0x00020c4d) popup_dyc_status_message_window_g1_ParamLimits

0x9d47,	// (0x00020c4d) popup_dyc_status_message_window_g1

0x9d53,	// (0x00020c59) popup_dyc_status_message_window_t1_ParamLimits

0x9d53,	// (0x00020c59) popup_dyc_status_message_window_t1

0x9d65,	// (0x00020c6b) popup_dyc_status_message_window_t2_ParamLimits

0x9d65,	// (0x00020c6b) popup_dyc_status_message_window_t2

0x9d77,	// (0x00020c7d) popup_dyc_status_message_window_t3_ParamLimits

0x9d77,	// (0x00020c7d) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00026237) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00026237) popup_dyc_status_message_window_t

0x06aa,	// (0x000175b0) bg_heading_pane_cp01

0x125b,	// (0x00018161) heading_loc_req_pane_g1

0x1263,	// (0x00018169) heading_loc_req_pane_g2

0x126b,	// (0x00018171) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0002623e) heading_loc_req_pane_g

0x1273,	// (0x00018179) heading_loc_req_pane_t1

0x12fa,	// (0x00018200) bg_popup_sub_pane_cp01_ParamLimits

0x12fa,	// (0x00018200) bg_popup_sub_pane_cp01

0x1308,	// (0x0001820e) popup_cale_events_window_g1_ParamLimits

0x1308,	// (0x0001820e) popup_cale_events_window_g1

0x1328,	// (0x0001822e) popup_cale_events_window_g2_ParamLimits

0x1328,	// (0x0001822e) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00026272) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00026272) popup_cale_events_window_g

0x1348,	// (0x0001824e) popup_cale_events_window_t1_ParamLimits

0x1348,	// (0x0001824e) popup_cale_events_window_t1

0x135a,	// (0x00018260) popup_cale_events_window_t2_ParamLimits

0x135a,	// (0x00018260) popup_cale_events_window_t2

0x1398,	// (0x0001829e) popup_cale_events_window_t3_ParamLimits

0x1398,	// (0x0001829e) popup_cale_events_window_t3

0x13d2,	// (0x000182d8) popup_cale_events_window_t4_ParamLimits

0x13d2,	// (0x000182d8) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00026277) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00026277) popup_cale_events_window_t

0x9dfb,	// (0x00020d01) call_type_pane

0x17ff,	// (0x00018705) popup_call_status_window_g1

0x9e07,	// (0x00020d0d) popup_call_status_window_g2

0x9e13,	// (0x00020d19) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00026280) popup_call_status_window_g

0x1408,	// (0x0001830e) call_type_pane_g1

0x1411,	// (0x00018317) call_type_pane_g2

0x0001,

0xf381,	// (0x00026287) call_type_pane_g

0x06aa,	// (0x000175b0) bg_popup_sub_pane_cp02

0x141a,	// (0x00018320) listscroll_popup_wml_pane

0x1422,	// (0x00018328) list_wml_pane

0x142c,	// (0x00018332) scroll_pane_cp013

0x1437,	// (0x0001833d) list_single_graphic_popup_wml_pane_ParamLimits

0x1437,	// (0x0001833d) list_single_graphic_popup_wml_pane

0x0a6b,	// (0x00017971) list_single_graphic_popup_wml_pane_g1

0x144b,	// (0x00018351) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0002628c) list_single_graphic_popup_wml_pane_g

0x1453,	// (0x00018359) list_single_graphic_popup_wml_pane_t1

0x1461,	// (0x00018367) aid_call_pane

0x08fd,	// (0x00017803) popup_clock_analogue_window_g1

0x08fd,	// (0x00017803) popup_clock_analogue_window_g2

0x70c0,	// (0x0001dfc6) popup_clock_analogue_window_g3

0x70c0,	// (0x0001dfc6) popup_clock_analogue_window_g4

0x0a6b,	// (0x00017971) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00026291) popup_clock_analogue_window_g

0x70c8,	// (0x0001dfce) popup_clock_analogue_window_t1

0x70d6,	// (0x0001dfdc) clock_digital_number_pane_ParamLimits

0x70d6,	// (0x0001dfdc) clock_digital_number_pane

0x70e2,	// (0x0001dfe8) clock_digital_number_pane_cp02_ParamLimits

0x70e2,	// (0x0001dfe8) clock_digital_number_pane_cp02

0x70ee,	// (0x0001dff4) clock_digital_number_pane_cp03_ParamLimits

0x70ee,	// (0x0001dff4) clock_digital_number_pane_cp03

0x70fa,	// (0x0001e000) clock_digital_number_pane_cp04_ParamLimits

0x70fa,	// (0x0001e000) clock_digital_number_pane_cp04

0x7106,	// (0x0001e00c) clock_digital_separator_pane_ParamLimits

0x7106,	// (0x0001e00c) clock_digital_separator_pane

0x7112,	// (0x0001e018) popup_clock_digital_window_t1

0x0a6b,	// (0x00017971) clock_digital_number_pane_g1

0x0a6b,	// (0x00017971) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x000261ff) clock_digital_number_pane_g

0x0a6b,	// (0x00017971) clock_digital_separator_pane_g1

0x0a6b,	// (0x00017971) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x000261ff) clock_digital_separator_pane_g

0x06aa,	// (0x000175b0) bg_popup_window_pane_cp04

0x14e0,	// (0x000183e6) heading_pane_cp03

0x14e8,	// (0x000183ee) listscroll_popup_gms_pane

0x14f0,	// (0x000183f6) grid_large_graphic_popup_pane

0x14fa,	// (0x00018400) listscroll_popup_gms_pane_g1

0x1502,	// (0x00018408) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0002629c) listscroll_popup_gms_pane_g

0x0ef8,	// (0x00017dfe) scroll_pane_cp014

0x9e1f,	// (0x00020d25) cell_large_graphic_popup_pane_ParamLimits

0x9e1f,	// (0x00020d25) cell_large_graphic_popup_pane

0x9e39,	// (0x00020d3f) cell_large_graphic_popup_pane_g1_ParamLimits

0x9e39,	// (0x00020d3f) cell_large_graphic_popup_pane_g1

0x150a,	// (0x00018410) cell_large_graphic_popup_pane_g2_ParamLimits

0x150a,	// (0x00018410) cell_large_graphic_popup_pane_g2

0x1516,	// (0x0001841c) cell_large_graphic_popup_pane_g3_ParamLimits

0x1516,	// (0x0001841c) cell_large_graphic_popup_pane_g3

0x1523,	// (0x00018429) cell_large_graphic_popup_pane_g4_ParamLimits

0x1523,	// (0x00018429) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x000262a1) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x000262a1) cell_large_graphic_popup_pane_g

0x1533,	// (0x00018439) grid_highlight_pane_cp010

0x0a6b,	// (0x00017971) bg_popup_call_pane_g1

0x153d,	// (0x00018443) list_single_graphic_popup_conf_pane_ParamLimits

0x153d,	// (0x00018443) list_single_graphic_popup_conf_pane

0x154f,	// (0x00018455) list_highlight_pane_cp01

0x1558,	// (0x0001845e) list_single_graphic_popup_conf_pane_g1

0x1560,	// (0x00018466) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x000262aa) list_single_graphic_popup_conf_pane_g

0x1568,	// (0x0001846e) list_single_graphic_popup_conf_pane_t1

0x1576,	// (0x0001847c) linegrid_cams_pane_g1

0x9e45,	// (0x00020d4b) linegrid_cams_pane_g2

0x0c09,	// (0x00017b0f) linegrid_cams_pane_g3

0x157f,	// (0x00018485) linegrid_cams_pane_g4

0x9e4e,	// (0x00020d54) linegrid_cams_pane_g5

0x9e57,	// (0x00020d5d) linegrid_cams_pane_g6

0x0c12,	// (0x00017b18) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x000262af) linegrid_cams_pane_g

0x1588,	// (0x0001848e) popup_clock_analogue_window

0x1588,	// (0x0001848e) popup_clock_digital_window

0x06aa,	// (0x000175b0) popup_phob_thumbnail_window

0x0a6b,	// (0x00017971) call_video_uplink_pane_g1

0x1591,	// (0x00018497) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x000262be) call_video_uplink_pane_g

0x1599,	// (0x0001849f) video_uplink_pane

0x15a1,	// (0x000184a7) mce_image_pane_g1

0x9e62,	// (0x00020d68) mce_image_pane_g2

0x9e6c,	// (0x00020d72) mce_image_pane_g3

0x9e76,	// (0x00020d7c) mce_image_pane_g4

0x9e7e,	// (0x00020d84) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x000262c3) mce_image_pane_g

0x15ab,	// (0x000184b1) control_top_pane_stacon_cp01_ParamLimits

0x15ab,	// (0x000184b1) control_top_pane_stacon_cp01

0x15bf,	// (0x000184c5) uni_indicator_pane_stacon_cp01_ParamLimits

0x15bf,	// (0x000184c5) uni_indicator_pane_stacon_cp01

0x15d0,	// (0x000184d6) bg_popup_sub_pane_cp03

0x9e86,	// (0x00020d8c) chi_dic_find_pane

0x9e8e,	// (0x00020d94) listscroll_chi_dic_pane

0x9e97,	// (0x00020d9d) main_pane_chidic_g1

0x9eaa,	// (0x00020db0) chi_dic_find_pane_t1

0x15da,	// (0x000184e0) find_chidic_pane

0x15e3,	// (0x000184e9) chi_dic_list_pane_ParamLimits

0x15e3,	// (0x000184e9) chi_dic_list_pane

0x15f4,	// (0x000184fa) scroll_pane_cp020

0x9eb8,	// (0x00020dbe) find_chidic_pane_t1

0x06aa,	// (0x000175b0) input_focus_pane_cp06

0x9ec7,	// (0x00020dcd) list_chi_dic_pane_ParamLimits

0x9ec7,	// (0x00020dcd) list_chi_dic_pane

0x9edf,	// (0x00020de5) list_chi_dic_pane_t1_ParamLimits

0x9edf,	// (0x00020de5) list_chi_dic_pane_t1

0x06aa,	// (0x000175b0) list_highlight_pane_cp020

0x15fc,	// (0x00018502) bg_cale_heading_pane_g1

0x9ef2,	// (0x00020df8) bg_cale_heading_pane_g2

0x9efa,	// (0x00020e00) bg_cale_heading_pane_g3

0x9f02,	// (0x00020e08) bg_cale_heading_pane_g4

0x9f0c,	// (0x00020e12) bg_cale_heading_pane_g5

0x9f16,	// (0x00020e1c) bg_cale_heading_pane_g6

0x9f1e,	// (0x00020e24) bg_cale_heading_pane_g7

0x9f26,	// (0x00020e2c) bg_cale_heading_pane_g8

0x9f30,	// (0x00020e36) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x000262ce) bg_cale_heading_pane_g

0x15fc,	// (0x00018502) bg_cale_side_pane_g1

0x9f3a,	// (0x00020e40) bg_cale_side_pane_g2

0x9f42,	// (0x00020e48) bg_cale_side_pane_g3

0x9f4a,	// (0x00020e50) bg_cale_side_pane_g4

0x9f52,	// (0x00020e58) bg_cale_side_pane_g5

0x9f5a,	// (0x00020e60) bg_cale_side_pane_g6

0x9f62,	// (0x00020e68) bg_cale_side_pane_g7

0x9f6a,	// (0x00020e70) bg_cale_side_pane_g8

0x9f72,	// (0x00020e78) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x000262e1) bg_cale_side_pane_g

0x9f7a,	// (0x00020e80) popup_call_status_window_ParamLimits

0x9f7a,	// (0x00020e80) popup_call_status_window

0x1604,	// (0x0001850a) stacon_top_pane

0x160c,	// (0x00018512) status_pane_ParamLimits

0x160c,	// (0x00018512) status_pane

0x1621,	// (0x00018527) status_small_pane

0x1629,	// (0x0001852f) control_pane

0x06aa,	// (0x000175b0) stacon_bottom_pane

0x1631,	// (0x00018537) list_single_mce_smart_pane_t1_ParamLimits

0x1631,	// (0x00018537) list_single_mce_smart_pane_t1

0x1644,	// (0x0001854a) list_single_mce_smart_pane_t2_ParamLimits

0x1644,	// (0x0001854a) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x000262f4) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x000262f4) list_single_mce_smart_pane_t

0x9f86,	// (0x00020e8c) compass_pane

0x9f91,	// (0x00020e97) main_location2_pane_t1

0x9fa5,	// (0x00020eab) main_location2_pane_t2

0x9fa5,	// (0x00020eab) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x000262f9) main_location2_pane_t

0x1663,	// (0x00018569) compass_pane_g1_ParamLimits

0x1663,	// (0x00018569) compass_pane_g1

0x9fef,	// (0x00020ef5) compass_pane_t1

0x9ffe,	// (0x00020f04) compass_pane_t2

0x0005,

0xf3fc,	// (0x00026302) compass_pane_t

0xa049,	// (0x00020f4f) text_secondary_cp61

0x1677,	// (0x0001857d) navi_pane_cams_g5

0x169a,	// (0x000185a0) navi_pane_im_t1

0x16a8,	// (0x000185ae) navi_pane_mp_g1_ParamLimits

0x16a8,	// (0x000185ae) navi_pane_mp_g1

0x16bc,	// (0x000185c2) navi_pane_mp_g2_ParamLimits

0x16bc,	// (0x000185c2) navi_pane_mp_g2

0x16c8,	// (0x000185ce) navi_pane_mp_g3_ParamLimits

0x16c8,	// (0x000185ce) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00026316) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00026316) navi_pane_mp_g

0x16d4,	// (0x000185da) navi_pane_mp_t1

0x16e2,	// (0x000185e8) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0002631d) navi_pane_mp_t

0x171e,	// (0x00018624) navi_pane_vt_g1

0x16d4,	// (0x000185da) navi_pane_vt_t1

0x1726,	// (0x0001862c) navi_slider_pane

0x172e,	// (0x00018634) zooming_pane

0x1736,	// (0x0001863c) navi_slider_pane_g1

0x712f,	// (0x0001e035) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00026324) navi_slider_pane_g

0x176c,	// (0x00018672) aid_levels_zoom

0x1774,	// (0x0001867a) zooming_pane_g1

0x177c,	// (0x00018682) zooming_pane_g2

0x177c,	// (0x00018682) zooming_pane_g3

0x0002,

0xf42d,	// (0x00026333) zooming_pane_g

0x1784,	// (0x0001868a) level_10_zoom

0x178d,	// (0x00018693) level_11_zoom

0x1796,	// (0x0001869c) level_1_zoom

0x179f,	// (0x000186a5) level_2_zoom

0x17a8,	// (0x000186ae) level_3_zoom

0x17b1,	// (0x000186b7) level_4_zoom

0x17ba,	// (0x000186c0) level_5_zoom

0x17c3,	// (0x000186c9) level_6_zoom

0x17cc,	// (0x000186d2) level_7_zoom

0x17d5,	// (0x000186db) level_8_zoom

0x17de,	// (0x000186e4) level_9_zoom

0x17ef,	// (0x000186f5) popup_phob_thumbnail_window_g1

0x17f7,	// (0x000186fd) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0002633a) popup_phob_thumbnail_window_g

0x2b42,	// (0x00019a48) level_1_location

0x2b4a,	// (0x00019a50) level_2_location

0x2b52,	// (0x00019a58) level_3_location

0x2b5a,	// (0x00019a60) level_4_location

0x172e,	// (0x00018634) level_5_location

0xa160,	// (0x00021066) mce_icon_pane_g1

0xa168,	// (0x0002106e) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0002633f) mce_icon_pane_g

0xa170,	// (0x00021076) main_mup_pane_g1_ParamLimits

0xa170,	// (0x00021076) main_mup_pane_g1

0xa188,	// (0x0002108e) main_mup_pane_g2_ParamLimits

0xa188,	// (0x0002108e) main_mup_pane_g2

0xa1a4,	// (0x000210aa) main_mup_pane_g3_ParamLimits

0xa1a4,	// (0x000210aa) main_mup_pane_g3

0xa1c0,	// (0x000210c6) main_mup_pane_g4_ParamLimits

0xa1c0,	// (0x000210c6) main_mup_pane_g4

0xa1d4,	// (0x000210da) main_mup_pane_g5_ParamLimits

0xa1d4,	// (0x000210da) main_mup_pane_g5

0xa1f5,	// (0x000210fb) main_mup_pane_g6_ParamLimits

0xa1f5,	// (0x000210fb) main_mup_pane_g6

0xa215,	// (0x0002111b) main_mup_pane_g7_ParamLimits

0xa215,	// (0x0002111b) main_mup_pane_g7

0xa239,	// (0x0002113f) main_mup_pane_g8_ParamLimits

0xa239,	// (0x0002113f) main_mup_pane_g8

0xa25d,	// (0x00021163) main_mup_pane_g9_ParamLimits

0xa25d,	// (0x00021163) main_mup_pane_g9

0xa280,	// (0x00021186) main_mup_pane_g10_ParamLimits

0xa280,	// (0x00021186) main_mup_pane_g10

0xa2a3,	// (0x000211a9) main_mup_pane_g11_ParamLimits

0xa2a3,	// (0x000211a9) main_mup_pane_g11

0xa2c3,	// (0x000211c9) main_mup_pane_g12_ParamLimits

0xa2c3,	// (0x000211c9) main_mup_pane_g12

0xa2d1,	// (0x000211d7) main_mup_pane_g13_ParamLimits

0xa2d1,	// (0x000211d7) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00026344) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00026344) main_mup_pane_g

0xa2e7,	// (0x000211ed) main_mup_pane_t1_ParamLimits

0xa2e7,	// (0x000211ed) main_mup_pane_t1

0xa306,	// (0x0002120c) main_mup_pane_t2_ParamLimits

0xa306,	// (0x0002120c) main_mup_pane_t2

0xa320,	// (0x00021226) main_mup_pane_t3_ParamLimits

0xa320,	// (0x00021226) main_mup_pane_t3

0xa33a,	// (0x00021240) main_mup_pane_t4_ParamLimits

0xa33a,	// (0x00021240) main_mup_pane_t4

0xa34c,	// (0x00021252) main_mup_pane_t5_ParamLimits

0xa34c,	// (0x00021252) main_mup_pane_t5

0xa35e,	// (0x00021264) main_mup_pane_t6_ParamLimits

0xa35e,	// (0x00021264) main_mup_pane_t6

0x0005,

0xf459,	// (0x0002635f) main_mup_pane_t_ParamLimits

0xf459,	// (0x0002635f) main_mup_pane_t

0xa374,	// (0x0002127a) mup_progress_pane_ParamLimits

0xa374,	// (0x0002127a) mup_progress_pane

0xa380,	// (0x00021286) mup_visualizer_pane_ParamLimits

0xa380,	// (0x00021286) mup_visualizer_pane

0xa3be,	// (0x000212c4) mup_volume_pane_ParamLimits

0xa3be,	// (0x000212c4) mup_volume_pane

0x17ff,	// (0x00018705) mup_visualizer_pane_g1_ParamLimits

0x17ff,	// (0x00018705) mup_visualizer_pane_g1

0x17ff,	// (0x00018705) mup_visualizer_pane_g2_ParamLimits

0x17ff,	// (0x00018705) mup_visualizer_pane_g2

0x1663,	// (0x00018569) mup_visualizer_pane_g3_ParamLimits

0x1663,	// (0x00018569) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0002636c) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0002636c) mup_visualizer_pane_g

0x0a6b,	// (0x00017971) mup_volume_pane_g1

0x1815,	// (0x0001871b) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00026373) mup_volume_pane_g

0x0a6b,	// (0x00017971) mup_progress_pane_g1

0x181e,	// (0x00018724) mup_progress_pane_g2

0x1827,	// (0x0001872d) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00026378) mup_progress_pane_g

0x06aa,	// (0x000175b0) bg_popup_window_pane_cp05

0x1830,	// (0x00018736) heading_pane_cp02_ParamLimits

0x1830,	// (0x00018736) heading_pane_cp02

0x184c,	// (0x00018752) list_popup_blid_pane

0x1854,	// (0x0001875a) list_blid_sat_info_pane_ParamLimits

0x1854,	// (0x0001875a) list_blid_sat_info_pane

0x1867,	// (0x0001876d) list_blid_sat_info_pane_g1

0x186f,	// (0x00018775) list_blid_sat_info_pane_t1

0xa4dd,	// (0x000213e3) mup_equalizer_pane_ParamLimits

0xa4dd,	// (0x000213e3) mup_equalizer_pane

0xa4fe,	// (0x00021404) mup_equalizer_pane_cp1_ParamLimits

0xa4fe,	// (0x00021404) mup_equalizer_pane_cp1

0xa51f,	// (0x00021425) mup_equalizer_pane_cp2_ParamLimits

0xa51f,	// (0x00021425) mup_equalizer_pane_cp2

0xa540,	// (0x00021446) mup_equalizer_pane_cp3_ParamLimits

0xa540,	// (0x00021446) mup_equalizer_pane_cp3

0xa565,	// (0x0002146b) mup_equalizer_pane_cp4_ParamLimits

0xa565,	// (0x0002146b) mup_equalizer_pane_cp4

0xa58a,	// (0x00021490) mup_equalizer_pane_cp5

0xa5a2,	// (0x000214a8) mup_equalizer_pane_cp6

0xa5ba,	// (0x000214c0) mup_equalizer_pane_cp7

0x2a5c,	// (0x00019962) bg_popup_call_poc_act_pane_g9

0x2a64,	// (0x0001996a) bg_popup_call_poc_act_pane_g10

0x2a6c,	// (0x00019972) bg_popup_call_poc_act_pane_g11

0x000a,

0x0905,	// (0x0001780b) mup_scale_pane

0x0a6b,	// (0x00017971) mup_scale_pane_g1

0x187d,	// (0x00018783) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00026394) mup_scale_pane_g

0x18a1,	// (0x000187a7) msg_data_pane

0x18a9,	// (0x000187af) scroll_pane_cp017

0xa5e4,	// (0x000214ea) bg_list_pane_cp04_ParamLimits

0xa5e4,	// (0x000214ea) bg_list_pane_cp04

0x18b1,	// (0x000187b7) msg_data_pane_g1

0xa60c,	// (0x00021512) msg_data_pane_g2

0xa616,	// (0x0002151c) msg_data_pane_g3

0xa620,	// (0x00021526) msg_data_pane_g4

0xa628,	// (0x0002152e) msg_data_pane_g5

0xa630,	// (0x00021536) msg_data_pane_g6

0xa638,	// (0x0002153e) msg_data_pane_g7

0x0006,

0xf49d,	// (0x000263a3) msg_data_pane_g

0xa640,	// (0x00021546) msg_text_pane_ParamLimits

0xa640,	// (0x00021546) msg_text_pane

0xa66f,	// (0x00021575) qrid_highlight_pane_cp011_ParamLimits

0xa66f,	// (0x00021575) qrid_highlight_pane_cp011

0x06aa,	// (0x000175b0) msg_body_pane

0x06aa,	// (0x000175b0) msg_header_pane

0x18c2,	// (0x000187c8) input_focus_pane_cp07

0xa693,	// (0x00021599) msg_header_pane_t1_ParamLimits

0xa693,	// (0x00021599) msg_header_pane_t1

0xa6a7,	// (0x000215ad) msg_header_pane_t2_ParamLimits

0xa6a7,	// (0x000215ad) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x000263b7) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x000263b7) msg_header_pane_t

0x18d7,	// (0x000187dd) msg_body_pane_g1

0xa6b9,	// (0x000215bf) msg_body_pane_t1_ParamLimits

0xa6b9,	// (0x000215bf) msg_body_pane_t1

0xa6ea,	// (0x000215f0) msg_body_pane_t2_ParamLimits

0xa6ea,	// (0x000215f0) msg_body_pane_t2

0xa6fc,	// (0x00021602) msg_body_pane_t3_ParamLimits

0xa6fc,	// (0x00021602) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x000263bc) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x000263bc) msg_body_pane_t

0x7171,	// (0x0001e077) main_viewer_pane_g1_ParamLimits

0x7171,	// (0x0001e077) main_viewer_pane_g1

0x717d,	// (0x0001e083) main_viewer_pane_g2_ParamLimits

0x717d,	// (0x0001e083) main_viewer_pane_g2

0xa730,	// (0x00021636) main_viewer_pane_g3_ParamLimits

0xa730,	// (0x00021636) main_viewer_pane_g3

0xa741,	// (0x00021647) main_viewer_pane_g4_ParamLimits

0xa741,	// (0x00021647) main_viewer_pane_g4

0x7189,	// (0x0001e08f) main_viewer_pane_g5_ParamLimits

0x7189,	// (0x0001e08f) main_viewer_pane_g5

0x7189,	// (0x0001e08f) main_viewer_pane_g7_ParamLimits

0x7189,	// (0x0001e08f) main_viewer_pane_g7

0x719b,	// (0x0001e0a1) main_viewer_pane_g8_ParamLimits

0x719b,	// (0x0001e0a1) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x000263cc) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x000263cc) main_viewer_pane_g

0x1921,	// (0x00018827) viewer_content_pane_ParamLimits

0x1921,	// (0x00018827) viewer_content_pane

0xa772,	// (0x00021678) main_postcard_pane_g1_ParamLimits

0xa772,	// (0x00021678) main_postcard_pane_g1

0xa780,	// (0x00021686) main_postcard_pane_g2_ParamLimits

0xa780,	// (0x00021686) main_postcard_pane_g2

0xa78e,	// (0x00021694) main_postcard_pane_g3_ParamLimits

0xa78e,	// (0x00021694) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x000263dd) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x000263dd) main_postcard_pane_g

0xa79e,	// (0x000216a4) main_postcard_pane_g4

0x2c79,	// (0x00019b7f) smil_status_volume_pane_g2

0xa7ca,	// (0x000216d0) postcard_pane_ParamLimits

0xa7ca,	// (0x000216d0) postcard_pane

0x17ff,	// (0x00018705) postcard_pane_g1_ParamLimits

0x17ff,	// (0x00018705) postcard_pane_g1

0xa804,	// (0x0002170a) postcard_pane_g2_ParamLimits

0xa804,	// (0x0002170a) postcard_pane_g2

0xa810,	// (0x00021716) postcard_pane_g3_ParamLimits

0xa810,	// (0x00021716) postcard_pane_g3

0x193d,	// (0x00018843) postcard_pane_g4_ParamLimits

0x193d,	// (0x00018843) postcard_pane_g4

0xa81c,	// (0x00021722) postcard_pane_g5_ParamLimits

0xa81c,	// (0x00021722) postcard_pane_g5

0xa828,	// (0x0002172e) postcard_pane_g6_ParamLimits

0xa828,	// (0x0002172e) postcard_pane_g6

0x192f,	// (0x00018835) postcard_pane_g7_ParamLimits

0x192f,	// (0x00018835) postcard_pane_g7

0x0006,

0xf4e4,	// (0x000263ea) postcard_pane_g_ParamLimits

0xf4e4,	// (0x000263ea) postcard_pane_g

0xa836,	// (0x0002173c) main_mp2_pane_g1_ParamLimits

0xa836,	// (0x0002173c) main_mp2_pane_g1

0xa844,	// (0x0002174a) main_mp2_pane_g2_ParamLimits

0xa844,	// (0x0002174a) main_mp2_pane_g2

0xa850,	// (0x00021756) main_mp2_pane_g3_ParamLimits

0xa850,	// (0x00021756) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x000263f9) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x000263f9) main_mp2_pane_g

0xa85c,	// (0x00021762) main_mp2_pane_t1_ParamLimits

0xa85c,	// (0x00021762) main_mp2_pane_t1

0xa873,	// (0x00021779) main_mp2_pane_t2_ParamLimits

0xa873,	// (0x00021779) main_mp2_pane_t2

0xa887,	// (0x0002178d) main_mp2_pane_t3_ParamLimits

0xa887,	// (0x0002178d) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00026400) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00026400) main_mp2_pane_t

0x194b,	// (0x00018851) pec_content_pane_ParamLimits

0x194b,	// (0x00018851) pec_content_pane

0x0ef8,	// (0x00017dfe) scroll_pane_cp015

0x195d,	// (0x00018863) pec_attribute_pane_ParamLimits

0x195d,	// (0x00018863) pec_attribute_pane

0xa899,	// (0x0002179f) pec_content_pane_g1_ParamLimits

0xa899,	// (0x0002179f) pec_content_pane_g1

0x196d,	// (0x00018873) pec_content_pane_t1_ParamLimits

0x196d,	// (0x00018873) pec_content_pane_t1

0x197f,	// (0x00018885) pec_content_pane_t2_ParamLimits

0x197f,	// (0x00018885) pec_content_pane_t2

0x0001,

0xf501,	// (0x00026407) pec_content_pane_t_ParamLimits

0xf501,	// (0x00026407) pec_content_pane_t

0xa8a5,	// (0x000217ab) list_single_graphic_pane_cp01_ParamLimits

0xa8a5,	// (0x000217ab) list_single_graphic_pane_cp01

0x0905,	// (0x0001780b) bg_popup_sub_pane_cp04

0x1991,	// (0x00018897) popup_mup_playback_window_g1

0x199d,	// (0x000188a3) popup_mup_playback_window_t1

0x19b2,	// (0x000188b8) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0002640c) popup_mup_playback_window_t

0x19e9,	// (0x000188ef) main_image_pane_g1_ParamLimits

0x19e9,	// (0x000188ef) main_image_pane_g1

0x1a2c,	// (0x00018932) scroll_pane_cp018_ParamLimits

0x1a2c,	// (0x00018932) scroll_pane_cp018

0x1a44,	// (0x0001894a) scroll_pane_cp016_ParamLimits

0x1a44,	// (0x0001894a) scroll_pane_cp016

0xa936,	// (0x0002183c) smil2_image_pane_ParamLimits

0xa936,	// (0x0002183c) smil2_image_pane

0xa96c,	// (0x00021872) smil2_root_pane_ParamLimits

0xa96c,	// (0x00021872) smil2_root_pane

0xa998,	// (0x0002189e) smil2_text_pane_ParamLimits

0xa998,	// (0x0002189e) smil2_text_pane

0x06aa,	// (0x000175b0) bg_list_pane_cp06

0x1a80,	// (0x00018986) grid_radio_pane

0x06aa,	// (0x000175b0) bg_popup_window_pane_cp06

0x1a8a,	// (0x00018990) main_fmradio_pane_t1

0x14e0,	// (0x000183e6) heading_pane_cp04

0x1a98,	// (0x0001899e) main_fmradio_pane_t2

0x2a74,	// (0x0001997a) popup_cale_lunar_info_window_g1

0x1aa6,	// (0x000189ac) main_fmradio_pane_t3

0x2a7c,	// (0x00019982) popup_cale_lunar_info_window_g2

0x1ab6,	// (0x000189bc) main_fmradio_pane_t4

0x0001,

0x1ac4,	// (0x000189ca) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x000264e7) popup_cale_lunar_info_window_g

0xf51b,	// (0x00026421) main_fmradio_pane_t

0x1ad2,	// (0x000189d8) wait_bar_pane_cp03

0x1ada,	// (0x000189e0) cell_fmradio_pane_ParamLimits

0x1ada,	// (0x000189e0) cell_fmradio_pane

0x192f,	// (0x00018835) cell_fmradio_pane_g1_ParamLimits

0x192f,	// (0x00018835) cell_fmradio_pane_g1

0x06aa,	// (0x000175b0) grid_highlight_pane_cp011

0x1aef,	// (0x000189f5) poc_content_pane_ParamLimits

0x1aef,	// (0x000189f5) poc_content_pane

0x1b01,	// (0x00018a07) scroll_pane_cp019

0xa9d8,	// (0x000218de) popup_call_poc_act_window_ParamLimits

0xa9d8,	// (0x000218de) popup_call_poc_act_window

0xa9e5,	// (0x000218eb) popup_call_poc_inact_window_ParamLimits

0xa9e5,	// (0x000218eb) popup_call_poc_inact_window

0xf5b8,	// (0x000264be) bg_popup_call_poc_act_pane_g

0x29ec,	// (0x000198f2) bg_popup_call_poc_inact_pane_g1

0x29f4,	// (0x000198fa) bg_popup_call_poc_inact_pane_g2

0x1b09,	// (0x00018a0f) popup_call_poc_act_window_g2

0x29fc,	// (0x00019902) bg_popup_call_poc_inact_pane_g3

0x2a04,	// (0x0001990a) bg_popup_call_poc_inact_pane_g4

0x2a0c,	// (0x00019912) bg_popup_call_poc_inact_pane_g5

0x1b11,	// (0x00018a17) popup_call_poc_act_window_t1_ParamLimits

0x1b11,	// (0x00018a17) popup_call_poc_act_window_t1

0x1b39,	// (0x00018a3f) popup_call_poc_act_window_t2_ParamLimits

0x1b39,	// (0x00018a3f) popup_call_poc_act_window_t2

0x1b61,	// (0x00018a67) popup_call_poc_act_window_t3_ParamLimits

0x1b61,	// (0x00018a67) popup_call_poc_act_window_t3

0x1b89,	// (0x00018a8f) popup_call_poc_act_window_t4_ParamLimits

0x1b89,	// (0x00018a8f) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0002642c) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0002642c) popup_call_poc_act_window_t

0x2a14,	// (0x0001991a) bg_popup_call_poc_inact_pane_g6

0x2a1c,	// (0x00019922) bg_popup_call_poc_inact_pane_g7

0x2a24,	// (0x0001992a) bg_popup_call_poc_inact_pane_g8

0x1b9b,	// (0x00018aa1) popup_call_poc_inact_window_g2

0x2a2c,	// (0x00019932) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x000264ab) bg_popup_call_poc_inact_pane_g

0x1ba3,	// (0x00018aa9) popup_call_poc_inact_window_t1_ParamLimits

0x1ba3,	// (0x00018aa9) popup_call_poc_inact_window_t1

0x1bb8,	// (0x00018abe) popup_call_poc_inact_window_t2_ParamLimits

0x1bb8,	// (0x00018abe) popup_call_poc_inact_window_t2

0x1bcd,	// (0x00018ad3) popup_call_poc_inact_window_t3_ParamLimits

0x1bcd,	// (0x00018ad3) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00026435) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00026435) popup_call_poc_inact_window_t

0x2bec,	// (0x00019af2) context_pane_ParamLimits

0xaff7,	// (0x00021efd) signal_pane_ParamLimits

0x172e,	// (0x00018634) main_call2_pane

0x2bda,	// (0x00019ae0) popup_phob_thumbnail2_window_ParamLimits

0x2bda,	// (0x00019ae0) popup_phob_thumbnail2_window

0x7141,	// (0x0001e047) aid_hotspot_pointer_arrow_pane

0x7149,	// (0x0001e04f) aid_hotspot_pointer_hand_pane

0xad0d,	// (0x00021c13) phob_pre_status_pane_g5

0x8b87,	// (0x0001fa8d) cams_zoom_pane_ParamLimits

0x8b93,	// (0x0001fa99) image_vga_pane_ParamLimits

0x8ba2,	// (0x0001faa8) main_camera_pane_g1_ParamLimits

0x8bb0,	// (0x0001fab6) main_camera_pane_g2_ParamLimits

0x8bbc,	// (0x0001fac2) main_camera_pane_g3_ParamLimits

0x8bca,	// (0x0001fad0) main_camera_pane_g4_ParamLimits

0x8bd8,	// (0x0001fade) main_camera_pane_g5_ParamLimits

0x8be6,	// (0x0001faec) main_camera_pane_g6_ParamLimits

0x8bf4,	// (0x0001fafa) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00026134) main_camera_pane_g_ParamLimits

0x8c02,	// (0x0001fb08) main_camera_pane_t1_ParamLimits

0x8c14,	// (0x0001fb1a) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00026145) main_camera_pane_t_ParamLimits

0x0905,	// (0x0001780b) bg_popup_preview_window_pane_cp01_ParamLimits

0x0905,	// (0x0001780b) bg_popup_preview_window_pane_cp01

0x1be2,	// (0x00018ae8) popup_phob_thumbnail2_window_g1_ParamLimits

0x1be2,	// (0x00018ae8) popup_phob_thumbnail2_window_g1

0x06aa,	// (0x000175b0) call2_cli_visual_pane

0xaa01,	// (0x00021907) popup_call2_audio_conf_window_ParamLimits

0xaa01,	// (0x00021907) popup_call2_audio_conf_window

0xaa1a,	// (0x00021920) popup_call2_audio_first_window_ParamLimits

0xaa1a,	// (0x00021920) popup_call2_audio_first_window

0xaab8,	// (0x000219be) popup_call2_audio_in_window_ParamLimits

0xaab8,	// (0x000219be) popup_call2_audio_in_window

0xaafc,	// (0x00021a02) popup_call2_audio_out_window_ParamLimits

0xaafc,	// (0x00021a02) popup_call2_audio_out_window

0xab66,	// (0x00021a6c) popup_call2_audio_second_window_ParamLimits

0xab66,	// (0x00021a6c) popup_call2_audio_second_window

0xabc4,	// (0x00021aca) popup_call2_audio_wait_window_ParamLimits

0xabc4,	// (0x00021aca) popup_call2_audio_wait_window

0x06aa,	// (0x000175b0) bg_popup_call2_act_pane_cp03

0x08e7,	// (0x000177ed) list_conf_pane_cp

0x1bee,	// (0x00018af4) popup_call2_audio_conf_window_t1

0x1bfc,	// (0x00018b02) list_single_graphic_popup_conf2_pane_ParamLimits

0x1bfc,	// (0x00018b02) list_single_graphic_popup_conf2_pane

0x154f,	// (0x00018455) list_highlight_pane_cp04

0x1c0f,	// (0x00018b15) list_single_graphic_popup_conf2_pane_g1

0x1560,	// (0x00018466) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0002643c) list_single_graphic_popup_conf2_pane_g

0x1c19,	// (0x00018b1f) list_single_graphic_popup_conf2_pane_t1

0x1c27,	// (0x00018b2d) bg_popup_call2_act_pane_cp01_ParamLimits

0x1c27,	// (0x00018b2d) bg_popup_call2_act_pane_cp01

0x1cb1,	// (0x00018bb7) call_type_pane_cp05_ParamLimits

0x1cb1,	// (0x00018bb7) call_type_pane_cp05

0x1d05,	// (0x00018c0b) popup_call2_audio_second_window_g1_ParamLimits

0x1d05,	// (0x00018c0b) popup_call2_audio_second_window_g1

0x1d59,	// (0x00018c5f) popup_call2_audio_second_window_g2_ParamLimits

0x1d59,	// (0x00018c5f) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00026441) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00026441) popup_call2_audio_second_window_g

0x1dbe,	// (0x00018cc4) popup_call2_audio_second_window_t1_ParamLimits

0x1dbe,	// (0x00018cc4) popup_call2_audio_second_window_t1

0x1e79,	// (0x00018d7f) popup_call2_audio_second_window_t2_ParamLimits

0x1e79,	// (0x00018d7f) popup_call2_audio_second_window_t2

0x1ecc,	// (0x00018dd2) popup_call2_audio_second_window_t3_ParamLimits

0x1ecc,	// (0x00018dd2) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00026448) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00026448) popup_call2_audio_second_window_t

0x06aa,	// (0x000175b0) bg_popup_call2_in_pane_cp02

0x06b4,	// (0x000175ba) call_type_pane_cp04

0x06bc,	// (0x000175c2) popup_call2_audio_wait_window_g1

0x06c4,	// (0x000175ca) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00026021) popup_call2_audio_wait_window_g

0x06cc,	// (0x000175d2) popup_call2_audio_wait_window_t3

0x1fbf,	// (0x00018ec5) bg_popup_call2_act_pane_ParamLimits

0x1fbf,	// (0x00018ec5) bg_popup_call2_act_pane

0x207f,	// (0x00018f85) call_type_pane_cp03_ParamLimits

0x207f,	// (0x00018f85) call_type_pane_cp03

0x20e3,	// (0x00018fe9) popup_call2_audio_first_window_g1_ParamLimits

0x20e3,	// (0x00018fe9) popup_call2_audio_first_window_g1

0x2153,	// (0x00019059) popup_call2_audio_first_window_g2_ParamLimits

0x2153,	// (0x00019059) popup_call2_audio_first_window_g2

0x17ff,	// (0x00018705) popup_call2_audio_first_window_g3_ParamLimits

0x17ff,	// (0x00018705) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00026451) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00026451) popup_call2_audio_first_window_g

0x2231,	// (0x00019137) popup_call2_audio_first_window_t1_ParamLimits

0x2231,	// (0x00019137) popup_call2_audio_first_window_t1

0x2334,	// (0x0001923a) popup_call2_audio_first_window_t4_ParamLimits

0x2334,	// (0x0001923a) popup_call2_audio_first_window_t4

0x2417,	// (0x0001931d) popup_call2_audio_first_window_t5_ParamLimits

0x2417,	// (0x0001931d) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0002645c) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0002645c) popup_call2_audio_first_window_t

0x08fd,	// (0x00017803) bg_popup_call2_act_pane_g1

0x2a86,	// (0x0001998c) popup_cale_lunar_info_window_t1

0x2a94,	// (0x0001999a) popup_cale_lunar_info_window_t2

0x2aa2,	// (0x000199a8) popup_cale_lunar_info_window_t3

0x06aa,	// (0x000175b0) bg_popup_call2_bubble_pane

0x2518,	// (0x0001941e) bg_popup_call2_in_pane_cp01_ParamLimits

0x2518,	// (0x0001941e) bg_popup_call2_in_pane_cp01

0x0386,	// (0x0001728c) call_type_pane_cp02

0x2560,	// (0x00019466) popup_call2_audio_out_window_g1_ParamLimits

0x2560,	// (0x00019466) popup_call2_audio_out_window_g1

0x258c,	// (0x00019492) popup_call2_audio_out_window_g2_ParamLimits

0x258c,	// (0x00019492) popup_call2_audio_out_window_g2

0x25b4,	// (0x000194ba) popup_call2_audio_out_window_g3_ParamLimits

0x25b4,	// (0x000194ba) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00026465) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00026465) popup_call2_audio_out_window_g

0x25ef,	// (0x000194f5) popup_call2_audio_out_window_t1_ParamLimits

0x25ef,	// (0x000194f5) popup_call2_audio_out_window_t1

0x264e,	// (0x00019554) popup_call2_audio_out_window_t2_ParamLimits

0x264e,	// (0x00019554) popup_call2_audio_out_window_t2

0x26a2,	// (0x000195a8) popup_call2_audio_out_window_t3_ParamLimits

0x26a2,	// (0x000195a8) popup_call2_audio_out_window_t3

0x26b8,	// (0x000195be) popup_call2_audio_out_window_t4_ParamLimits

0x26b8,	// (0x000195be) popup_call2_audio_out_window_t4

0x26ce,	// (0x000195d4) popup_call2_audio_out_window_t5_ParamLimits

0x26ce,	// (0x000195d4) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0002646e) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0002646e) popup_call2_audio_out_window_t

0x2732,	// (0x00019638) bg_popup_call2_in_pane_ParamLimits

0x2732,	// (0x00019638) bg_popup_call2_in_pane

0x278e,	// (0x00019694) popup_call2_audio_in_window_g1_ParamLimits

0x278e,	// (0x00019694) popup_call2_audio_in_window_g1

0x27c6,	// (0x000196cc) popup_call2_audio_in_window_g2_ParamLimits

0x27c6,	// (0x000196cc) popup_call2_audio_in_window_g2

0x27fe,	// (0x00019704) popup_call2_audio_in_window_g3_ParamLimits

0x27fe,	// (0x00019704) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0002647b) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0002647b) popup_call2_audio_in_window_g

0x2856,	// (0x0001975c) popup_call2_audio_in_window_t1_ParamLimits

0x2856,	// (0x0001975c) popup_call2_audio_in_window_t1

0x28d6,	// (0x000197dc) popup_call2_audio_in_window_t2_ParamLimits

0x28d6,	// (0x000197dc) popup_call2_audio_in_window_t2

0x2956,	// (0x0001985c) popup_call2_audio_in_window_t3_ParamLimits

0x2956,	// (0x0001985c) popup_call2_audio_in_window_t3

0x2970,	// (0x00019876) popup_call2_audio_in_window_t4_ParamLimits

0x2970,	// (0x00019876) popup_call2_audio_in_window_t4

0x2982,	// (0x00019888) popup_call2_audio_in_window_t5_ParamLimits

0x2982,	// (0x00019888) popup_call2_audio_in_window_t5

0x2997,	// (0x0001989d) popup_call2_audio_in_window_t6_ParamLimits

0x2997,	// (0x0001989d) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00026484) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00026484) popup_call2_audio_in_window_t

0x08fd,	// (0x00017803) bg_popup_call2_in_pane_g1

0x2ab0,	// (0x000199b6) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x000264ec) popup_cale_lunar_info_window_t

0x0905,	// (0x0001780b) bg_popup_call2_rect_pane_ParamLimits

0x0905,	// (0x0001780b) bg_popup_call2_rect_pane

0x06aa,	// (0x000175b0) call2_cli_visual_graphic_pane

0x06aa,	// (0x000175b0) call2_cli_visual_text_pane

0x71b3,	// (0x0001e0b9) smil_status_volume_pane_g3

0x0002,

0x0a6b,	// (0x00017971) call2_cli_visual_graphic_pane_g1

0x0a6b,	// (0x00017971) call2_cli_visual_graphic_pane_g2

0x0a6b,	// (0x00017971) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00026491) call2_cli_visual_graphic_pane_g

0x29ac,	// (0x000198b2) bg_popup_call2_rect_pane_g1

0x0b13,	// (0x00017a19) bg_popup_call2_rect_pane_g2

0x29b4,	// (0x000198ba) bg_popup_call2_rect_pane_g3

0x29bc,	// (0x000198c2) bg_popup_call2_rect_pane_g4

0x29c4,	// (0x000198ca) bg_popup_call2_rect_pane_g5

0x29cc,	// (0x000198d2) bg_popup_call2_rect_pane_g6

0x29d4,	// (0x000198da) bg_popup_call2_rect_pane_g7

0x29dc,	// (0x000198e2) bg_popup_call2_rect_pane_g8

0x29e4,	// (0x000198ea) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00026498) bg_popup_call2_rect_pane_g

0x29ec,	// (0x000198f2) bg_popup_call2_bubble_pane_g1

0x29f4,	// (0x000198fa) bg_popup_call2_bubble_pane_g2

0x29fc,	// (0x00019902) bg_popup_call2_bubble_pane_g3

0x2a04,	// (0x0001990a) bg_popup_call2_bubble_pane_g4

0x2a0c,	// (0x00019912) bg_popup_call2_bubble_pane_g5

0x2a14,	// (0x0001991a) bg_popup_call2_bubble_pane_g6

0x2a1c,	// (0x00019922) bg_popup_call2_bubble_pane_g7

0x2a24,	// (0x0001992a) bg_popup_call2_bubble_pane_g8

0x2a2c,	// (0x00019932) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x000264ab) bg_popup_call2_bubble_pane_g

0x87fa,	// (0x0001f700) aid_cale_week_size_cell_pane

0x8c28,	// (0x0001fb2e) aid_cams_cif_uncrop_pane_ParamLimits

0x8c28,	// (0x0001fb2e) aid_cams_cif_uncrop_pane

0x8d85,	// (0x0001fc8b) aid_cams_size_cell_ParamLimits

0x8d85,	// (0x0001fc8b) aid_cams_size_cell

0x8d91,	// (0x0001fc97) grid_cams_pane_ParamLimits

0x8d9f,	// (0x0001fca5) linegrid_cams_pane_ParamLimits

0x8ecb,	// (0x0001fdd1) call_video_pane_t1

0x8ee8,	// (0x0001fdee) call_video_pane_t2

0x0001,

0xf292,	// (0x00026198) call_video_pane_t

0x93c3,	// (0x000202c9) aid_cale_month_size_cell_pane_ParamLimits

0x93c3,	// (0x000202c9) aid_cale_month_size_cell_pane

0xf62f,	// (0x00026535) smil_status_volume_pane_g

0x71c0,	// (0x0001e0c6) volume_smil_pane_ParamLimits

0x022a,	// (0x00017130) aid_popup2_width_pane

0x875e,	// (0x0001f664) cell_qdial_pane_g4_ParamLimits

0x875e,	// (0x0001f664) cell_qdial_pane_g4

0x9fcb,	// (0x00020ed1) aid_blid_cardinal_pane_ParamLimits

0x9fdb,	// (0x00020ee1) aid_blid_destination_pane_ParamLimits

0x9fdb,	// (0x00020ee1) aid_blid_destination_pane

0x0905,	// (0x0001780b) bg_popup_call_poc_act_pane_ParamLimits

0x0905,	// (0x0001780b) bg_popup_call_poc_act_pane

0x0905,	// (0x0001780b) bg_popup_call_poc_inact_pane_ParamLimits

0x0905,	// (0x0001780b) bg_popup_call_poc_inact_pane

0x2a34,	// (0x0001993a) bg_popup_call_poc_act_pane_g1

0x2a3c,	// (0x00019942) bg_popup_call_poc_act_pane_g2

0x2a44,	// (0x0001994a) bg_popup_call_poc_act_pane_g3

0x2a04,	// (0x0001990a) bg_popup_call_poc_act_pane_g4

0x2a0c,	// (0x00019912) bg_popup_call_poc_act_pane_g5

0x2a4c,	// (0x00019952) bg_popup_call_poc_act_pane_g6

0x2a1c,	// (0x00019922) bg_popup_call_poc_act_pane_g7

0x2a54,	// (0x0001995a) bg_popup_call_poc_act_pane_g8

0x06aa,	// (0x000175b0) main_usb_pane

0x2bb1,	// (0x00019ab7) popup_cale_lunar_info_window

0x9200,	// (0x00020106) im_reading_pane_t1_ParamLimits

0x0e50,	// (0x00017d56) list_im_pane_ParamLimits

0x0e61,	// (0x00017d67) scroll_pane_cp07_ParamLimits

0x06aa,	// (0x000175b0) grid_highlight_pane_cp012

0x0905,	// (0x0001780b) mup_scale_pane_ParamLimits

0x17ff,	// (0x00018705) main_usb_pane_g1_ParamLimits

0x17ff,	// (0x00018705) main_usb_pane_g1

0xac30,	// (0x00021b36) main_usb_pane_g2_ParamLimits

0xac30,	// (0x00021b36) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x000264d5) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x000264d5) main_usb_pane_g

0xac3c,	// (0x00021b42) main_usb_pane_t1_ParamLimits

0xac3c,	// (0x00021b42) main_usb_pane_t1

0xac4e,	// (0x00021b54) main_usb_pane_t2_ParamLimits

0xac4e,	// (0x00021b54) main_usb_pane_t2

0xac60,	// (0x00021b66) main_usb_pane_t3_ParamLimits

0xac60,	// (0x00021b66) main_usb_pane_t3

0xac72,	// (0x00021b78) main_usb_pane_t4_ParamLimits

0xac72,	// (0x00021b78) main_usb_pane_t4

0xac84,	// (0x00021b8a) main_usb_pane_t5_ParamLimits

0xac84,	// (0x00021b8a) main_usb_pane_t5

0xac96,	// (0x00021b9c) main_usb_pane_t6_ParamLimits

0xac96,	// (0x00021b9c) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x000264da) main_usb_pane_t_ParamLimits

0x9f86,	// (0x00020e8c) aid_text_placing

0x9f91,	// (0x00020e97) main_location2_pane_t1_ParamLimits

0x9fa5,	// (0x00020eab) main_location2_pane_t2_ParamLimits

0x9fa5,	// (0x00020eab) main_location2_pane_t3_ParamLimits

0x9fb9,	// (0x00020ebf) main_location2_pane_t4_ParamLimits

0x9fb9,	// (0x00020ebf) main_location2_pane_t4

0xf3f3,	// (0x000262f9) main_location2_pane_t_ParamLimits

0x0941,	// (0x00017847) find_pinb_pane_g2_ParamLimits

0x0941,	// (0x00017847) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00026047) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00026047) find_pinb_pane_g

0x094d,	// (0x00017853) find_pinb_pane_t1_ParamLimits

0x095f,	// (0x00017865) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0002604c) find_pinb_pane_t_ParamLimits

0x06aa,	// (0x000175b0) main_call3_pane

0x971f,	// (0x00020625) cale_month_day_heading_pane_t1_ParamLimits

0x977d,	// (0x00020683) cale_month_day_heading_pane_t2_ParamLimits

0x97e2,	// (0x000206e8) cale_month_day_heading_pane_t3_ParamLimits

0x9847,	// (0x0002074d) cale_month_day_heading_pane_t4_ParamLimits

0x98ac,	// (0x000207b2) cale_month_day_heading_pane_t5_ParamLimits

0x9919,	// (0x0002081f) cale_month_day_heading_pane_t6_ParamLimits

0x998e,	// (0x00020894) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x000261d0) cale_month_day_heading_pane_t_ParamLimits

0x10d7,	// (0x00017fdd) smil_status_volume_pane

0xa7e8,	// (0x000216ee) postcard_address_pane_ParamLimits

0xa7e8,	// (0x000216ee) postcard_address_pane

0xa7f6,	// (0x000216fc) postcard_message_pane_ParamLimits

0xa7f6,	// (0x000216fc) postcard_message_pane

0xac03,	// (0x00021b09) call2_cli_visual_pane_t1_ParamLimits

0xac03,	// (0x00021b09) call2_cli_visual_pane_t1

0xb1ad,	// (0x000220b3) postcard_message_pane_t1_ParamLimits

0xb1ad,	// (0x000220b3) postcard_message_pane_t1

0x2cc1,	// (0x00019bc7) postcard_address_pane_t1_ParamLimits

0x2cc1,	// (0x00019bc7) postcard_address_pane_t1

0xb19e,	// (0x000220a4) popup_call3_audio_in_window_ParamLimits

0xb19e,	// (0x000220a4) popup_call3_audio_in_window

0xb07c,	// (0x00021f82) bg_popup_call3_in_pane_ParamLimits

0xb07c,	// (0x00021f82) bg_popup_call3_in_pane

0xb0e4,	// (0x00021fea) popup_call3_audio_in_window_g1_ParamLimits

0xb0e4,	// (0x00021fea) popup_call3_audio_in_window_g1

0xb0fc,	// (0x00022002) popup_call3_audio_in_window_g2_ParamLimits

0xb0fc,	// (0x00022002) popup_call3_audio_in_window_g2

0xb114,	// (0x0002201a) popup_call3_audio_in_window_g3_ParamLimits

0xb114,	// (0x0002201a) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0002653c) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0002653c) popup_call3_audio_in_window_g

0xb13c,	// (0x00022042) popup_call3_audio_in_window_t1_ParamLimits

0xb13c,	// (0x00022042) popup_call3_audio_in_window_t1

0xb164,	// (0x0002206a) popup_call3_audio_in_window_t2_ParamLimits

0xb164,	// (0x0002206a) popup_call3_audio_in_window_t2

0xb18c,	// (0x00022092) popup_call3_audio_in_window_t3_ParamLimits

0xb18c,	// (0x00022092) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00026545) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00026545) popup_call3_audio_in_window_t

0x172e,	// (0x00018634) bg_popup_call3_rect_pane

0x29ac,	// (0x000198b2) bg_popup_call3_rect_pane_g1

0x0b13,	// (0x00017a19) bg_popup_call3_rect_pane_g2

0x29b4,	// (0x000198ba) bg_popup_call3_rect_pane_g3

0x29bc,	// (0x000198c2) bg_popup_call3_rect_pane_g4

0x29c4,	// (0x000198ca) bg_popup_call3_rect_pane_g5

0x29cc,	// (0x000198d2) bg_popup_call3_rect_pane_g6

0x29d4,	// (0x000198da) bg_popup_call3_rect_pane_g7

0xa3d9,	// (0x000212df) mup_visualizer_osc_pane

0x180d,	// (0x00018713) mup_visualizer_spec_pane

0xb09c,	// (0x00021fa2) call3_video_qcif_pane_ParamLimits

0xb09c,	// (0x00021fa2) call3_video_qcif_pane

0xb0ae,	// (0x00021fb4) call3_video_qcif_uncrop_pane_ParamLimits

0xb0ae,	// (0x00021fb4) call3_video_qcif_uncrop_pane

0xb0be,	// (0x00021fc4) call3_video_subqcif_pane_ParamLimits

0xb0be,	// (0x00021fc4) call3_video_subqcif_pane

0xb0d2,	// (0x00021fd8) call3_video_subqcif_uncrop_pane_ParamLimits

0xb0d2,	// (0x00021fd8) call3_video_subqcif_uncrop_pane

0xb12c,	// (0x00022032) popup_call3_audio_in_window_g4_ParamLimits

0xb12c,	// (0x00022032) popup_call3_audio_in_window_g4

0xb06b,	// (0x00021f71) mup_spec_half_pane

0xb074,	// (0x00021f7a) mup_spec_half_pane_cp

0x2c5f,	// (0x00019b65) mup_osc_middle_pane

0x2c68,	// (0x00019b6e) mup_visualizer_osc_pane_g1

0xb04b,	// (0x00021f51) mup_spec_bar_pane_ParamLimits

0xb04b,	// (0x00021f51) mup_spec_bar_pane

0x2c4c,	// (0x00019b52) mup_spec_bar_pane_g1

0x2c56,	// (0x00019b5c) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00026530) mup_spec_bar_pane_g

0x87fa,	// (0x0001f700) aid_cale_week_size_cell_pane_ParamLimits

0x880d,	// (0x0001f713) bg_cale_heading_pane_ParamLimits

0x0b9d,	// (0x00017aa3) bg_cale_pane_cp01_ParamLimits

0x8821,	// (0x0001f727) cale_week_corner_pane_ParamLimits

0x8837,	// (0x0001f73d) cale_week_day_heading_pane_ParamLimits

0x884b,	// (0x0001f751) cale_week_scroll_pane_g1_ParamLimits

0x885c,	// (0x0001f762) cale_week_scroll_pane_g2_ParamLimits

0x886d,	// (0x0001f773) cale_week_scroll_pane_g3_ParamLimits

0x887e,	// (0x0001f784) cale_week_scroll_pane_g4_ParamLimits

0x888f,	// (0x0001f795) cale_week_scroll_pane_g5_ParamLimits

0x88a0,	// (0x0001f7a6) cale_week_scroll_pane_g6_ParamLimits

0x88b3,	// (0x0001f7b9) cale_week_scroll_pane_g7_ParamLimits

0x88c6,	// (0x0001f7cc) cale_week_scroll_pane_g8_ParamLimits

0x88d9,	// (0x0001f7df) cale_week_scroll_pane_g9_ParamLimits

0x88ea,	// (0x0001f7f0) cale_week_scroll_pane_g10_ParamLimits

0x88fb,	// (0x0001f801) cale_week_scroll_pane_g11_ParamLimits

0x890c,	// (0x0001f812) cale_week_scroll_pane_g12_ParamLimits

0x891d,	// (0x0001f823) cale_week_scroll_pane_g13_ParamLimits

0x892e,	// (0x0001f834) cale_week_scroll_pane_g14_ParamLimits

0x893f,	// (0x0001f845) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x000260d8) cale_week_scroll_pane_g_ParamLimits

0x8950,	// (0x0001f856) cale_week_time_pane_ParamLimits

0x8963,	// (0x0001f869) grid_cale_week_pane_ParamLimits

0x0bb6,	// (0x00017abc) listscroll_cale_week_pane_t1

0x8978,	// (0x0001f87e) scroll_pane_cp08_ParamLimits

0x9404,	// (0x0002030a) cale_month_corner_pane_ParamLimits

0x1077,	// (0x00017f7d) cale_month_pane_t1

0x96de,	// (0x000205e4) cale_month_week_pane_ParamLimits

0x17ff,	// (0x00018705) popup_call_status_window_g1_ParamLimits

0x9e07,	// (0x00020d0d) popup_call_status_window_g2_ParamLimits

0x9e13,	// (0x00020d19) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00026280) popup_call_status_window_g_ParamLimits

0x1469,	// (0x0001836f) aid_call2_pane

0xa685,	// (0x0002158b) msg_header_pane_g1

0xa7e8,	// (0x000216ee) postcard_address2_pane_ParamLimits

0xa7e8,	// (0x000216ee) postcard_address2_pane

0xa7f6,	// (0x000216fc) postcard_message2_pane_ParamLimits

0xa7f6,	// (0x000216fc) postcard_message2_pane

0xb005,	// (0x00021f0b) message2_row_pane_ParamLimits

0xb005,	// (0x00021f0b) message2_row_pane

0x2c07,	// (0x00019b0d) address2_row_pane_ParamLimits

0x2c07,	// (0x00019b0d) address2_row_pane

0x2c1a,	// (0x00019b20) postcard_message2_row_pane_g1

0x2c22,	// (0x00019b28) postcard_message2_row_pane_t1

0x2c1a,	// (0x00019b20) address2_row_pane_g1

0x2c22,	// (0x00019b28) address2_row_pane_t1

0x6ffa,	// (0x0001df00) aid_size_cell_vorec

0x06aa,	// (0x000175b0) main_rss_pane

0xb01f,	// (0x00021f25) rss_list_single_pane_ParamLimits

0xb01f,	// (0x00021f25) rss_list_single_pane

0x2c30,	// (0x00019b36) rss_list_single_pane_t1

0x2c3e,	// (0x00019b44) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0002652b) rss_list_single_pane_t

0x06aa,	// (0x000175b0) main_camera2_pane

0x06aa,	// (0x000175b0) main_video2_pane

0x721e,	// (0x0001e124) cams_zoom_pane_cp2_ParamLimits

0x721e,	// (0x0001e124) cams_zoom_pane_cp2

0x722a,	// (0x0001e130) image2_vga_pane_ParamLimits

0x722a,	// (0x0001e130) image2_vga_pane

0x7239,	// (0x0001e13f) main_camera2_pane_g1_ParamLimits

0x7239,	// (0x0001e13f) main_camera2_pane_g1

0x7245,	// (0x0001e14b) main_camera2_pane_g2_ParamLimits

0x7245,	// (0x0001e14b) main_camera2_pane_g2

0x7251,	// (0x0001e157) main_camera2_pane_g3_ParamLimits

0x7251,	// (0x0001e157) main_camera2_pane_g3

0x725d,	// (0x0001e163) main_camera2_pane_g4_ParamLimits

0x725d,	// (0x0001e163) main_camera2_pane_g4

0x7269,	// (0x0001e16f) main_camera2_pane_g5_ParamLimits

0x7269,	// (0x0001e16f) main_camera2_pane_g5

0x7275,	// (0x0001e17b) main_camera2_pane_g6_ParamLimits

0x7275,	// (0x0001e17b) main_camera2_pane_g6

0x7281,	// (0x0001e187) main_camera2_pane_g7_ParamLimits

0x7281,	// (0x0001e187) main_camera2_pane_g7

0x728d,	// (0x0001e193) main_camera2_pane_g8_ParamLimits

0x728d,	// (0x0001e193) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0002654c) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0002654c) main_camera2_pane_g

0x72a5,	// (0x0001e1ab) main_camera2_pane_t1_ParamLimits

0x72a5,	// (0x0001e1ab) main_camera2_pane_t1

0x72b7,	// (0x0001e1bd) main_camera2_pane_t2_ParamLimits

0x72b7,	// (0x0001e1bd) main_camera2_pane_t2

0x72c9,	// (0x0001e1cf) main_camera2_pane_t3_ParamLimits

0x72c9,	// (0x0001e1cf) main_camera2_pane_t3

0x72db,	// (0x0001e1e1) main_camera2_pane_t4_ParamLimits

0x72db,	// (0x0001e1e1) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0002655f) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0002655f) main_camera2_pane_t

0x7338,	// (0x0001e23e) cams_zoom_pane_cp4_ParamLimits

0x7338,	// (0x0001e23e) cams_zoom_pane_cp4

0x7348,	// (0x0001e24e) image2_cif_pane_ParamLimits

0x7348,	// (0x0001e24e) image2_cif_pane

0x735d,	// (0x0001e263) image2_subqcif_pane_ParamLimits

0x735d,	// (0x0001e263) image2_subqcif_pane

0x736c,	// (0x0001e272) main_video2_pane_g1_ParamLimits

0x736c,	// (0x0001e272) main_video2_pane_g1

0x737e,	// (0x0001e284) main_video2_pane_g2_ParamLimits

0x737e,	// (0x0001e284) main_video2_pane_g2

0x738e,	// (0x0001e294) main_video2_pane_g3_ParamLimits

0x738e,	// (0x0001e294) main_video2_pane_g3

0x739e,	// (0x0001e2a4) main_video2_pane_g4_ParamLimits

0x739e,	// (0x0001e2a4) main_video2_pane_g4

0x73ae,	// (0x0001e2b4) main_video2_pane_g5_ParamLimits

0x73ae,	// (0x0001e2b4) main_video2_pane_g5

0x73be,	// (0x0001e2c4) main_video2_pane_g6_ParamLimits

0x73be,	// (0x0001e2c4) main_video2_pane_g6

0x0005,

0xf668,	// (0x0002656e) main_video2_pane_g_ParamLimits

0xf668,	// (0x0002656e) main_video2_pane_g

0x73d0,	// (0x0001e2d6) main_video2_pane_t1_ParamLimits

0x73d0,	// (0x0001e2d6) main_video2_pane_t1

0x73ea,	// (0x0001e2f0) main_video2_pane_t2_ParamLimits

0x73ea,	// (0x0001e2f0) main_video2_pane_t2

0x7410,	// (0x0001e316) main_video2_pane_t3_ParamLimits

0x7410,	// (0x0001e316) main_video2_pane_t3

0x0002,

0xf675,	// (0x0002657b) main_video2_pane_t_ParamLimits

0xf675,	// (0x0002657b) main_video2_pane_t

0xad4d,	// (0x00021c53) call_muted_g2

0x0001,

0xf617,	// (0x0002651d) call_muted_g

0x06aa,	// (0x000175b0) main_mup2_pane

0x2d31,	// (0x00019c37) main_mup2_pane_g1_ParamLimits

0x2d31,	// (0x00019c37) main_mup2_pane_g1

0xb1c8,	// (0x000220ce) main_mup2_pane_g2_ParamLimits

0xb1c8,	// (0x000220ce) main_mup2_pane_g2

0x745f,	// (0x0001e365) main_mup_pane_g13_cp1

0x7467,	// (0x0001e36d) mup_volume_pane_cp1

0xb1ea,	// (0x000220f0) main_mup2_pane_g4_ParamLimits

0xb1ea,	// (0x000220f0) main_mup2_pane_g4

0xb1ff,	// (0x00022105) main_mup2_pane_g5_ParamLimits

0xb1ff,	// (0x00022105) main_mup2_pane_g5

0xb214,	// (0x0002211a) main_mup2_pane_g6_ParamLimits

0xb214,	// (0x0002211a) main_mup2_pane_g6

0xb229,	// (0x0002212f) main_mup2_pane_g7_ParamLimits

0xb229,	// (0x0002212f) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00026582) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00026582) main_mup2_pane_g

0xb245,	// (0x0002214b) main_mup2_pane_t1_ParamLimits

0xb245,	// (0x0002214b) main_mup2_pane_t1

0xb25c,	// (0x00022162) main_mup2_pane_t2_ParamLimits

0xb25c,	// (0x00022162) main_mup2_pane_t2

0xb273,	// (0x00022179) main_mup2_pane_t3_ParamLimits

0xb273,	// (0x00022179) main_mup2_pane_t3

0xb28a,	// (0x00022190) main_mup2_pane_t4_ParamLimits

0xb28a,	// (0x00022190) main_mup2_pane_t4

0xb2a4,	// (0x000221aa) main_mup2_pane_t5_ParamLimits

0xb2a4,	// (0x000221aa) main_mup2_pane_t5

0xb2be,	// (0x000221c4) main_mup2_pane_t6_ParamLimits

0xb2be,	// (0x000221c4) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00026591) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00026591) main_mup2_pane_t

0xb2f6,	// (0x000221fc) mup2_visualizer_pane_ParamLimits

0xb2f6,	// (0x000221fc) mup2_visualizer_pane

0xb32c,	// (0x00022232) mup_progress_pane_cp_ParamLimits

0xb32c,	// (0x00022232) mup_progress_pane_cp

0x744a,	// (0x0001e350) mup_volume_pane_cp_ParamLimits

0x744a,	// (0x0001e350) mup_volume_pane_cp

0xb345,	// (0x0002224b) mup2_visualizer_pane_g1_ParamLimits

0xb345,	// (0x0002224b) mup2_visualizer_pane_g1

0x2d03,	// (0x00019c09) mup2_visualizer_pane_g2_ParamLimits

0x2d03,	// (0x00019c09) mup2_visualizer_pane_g2

0xb35a,	// (0x00022260) mup2_visualizer_pane_g3_ParamLimits

0xb35a,	// (0x00022260) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0002659e) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0002659e) mup2_visualizer_pane_g

0x1a78,	// (0x0001897e) aid_size_cell_fmradio

0xae63,	// (0x00021d69) aid_height_parent_landcape

0x0edf,	// (0x00017de5) wml_content_pane_cp

0x0ee7,	// (0x00017ded) wml_tabs_pane

0x0ef0,	// (0x00017df6) popup_wml_miniature_window

0x0ef8,	// (0x00017dfe) scroll_pane_cp021

0x0f0c,	// (0x00017e12) wml_content_pane_comp8

0x06aa,	// (0x000175b0) bg_popup_sub_pane_cp05

0x2d21,	// (0x00019c27) popup_wml_miniature_window_g1

0x2d29,	// (0x00019c2f) wml_miniature_view_pane

0xb368,	// (0x0002226e) aid_size_wml_view

0xb370,	// (0x00022276) wml_miniature_view_pane_g1

0xb379,	// (0x0002227f) wml_miniature_view_pane_g2

0xb382,	// (0x00022288) wml_miniature_view_pane_g3

0xb38a,	// (0x00022290) wml_miniature_view_pane_g4

0xb392,	// (0x00022298) wml_miniature_view_pane_g5

0xb39a,	// (0x000222a0) wml_miniature_view_pane_g6

0xb3a2,	// (0x000222a8) wml_miniature_view_pane_g7

0xb3aa,	// (0x000222b0) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x000265a5) wml_miniature_view_pane_g

0x2d31,	// (0x00019c37) background_graphic_ParamLimits

0x2d31,	// (0x00019c37) background_graphic

0x2d3d,	// (0x00019c43) wml_tabs_2_pane

0x2d46,	// (0x00019c4c) wml_tabs_3_pane_ParamLimits

0x2d46,	// (0x00019c4c) wml_tabs_3_pane

0x2d58,	// (0x00019c5e) wml_tabs_4_pane_ParamLimits

0x2d58,	// (0x00019c5e) wml_tabs_4_pane

0x2d6e,	// (0x00019c74) wml_tabs_5_pane_ParamLimits

0x2d6e,	// (0x00019c74) wml_tabs_5_pane

0x2d88,	// (0x00019c8e) wml_tabs_pane_g2_ParamLimits

0x2d88,	// (0x00019c8e) wml_tabs_pane_g2

0x2d9c,	// (0x00019ca2) wml_tabs_pane_g3_ParamLimits

0x2d9c,	// (0x00019ca2) wml_tabs_pane_g3

0xb3b2,	// (0x000222b8) wml_tabs_2_active_pane_ParamLimits

0xb3b2,	// (0x000222b8) wml_tabs_2_active_pane

0xb3c4,	// (0x000222ca) wml_tabs_2_passive_pane_ParamLimits

0xb3c4,	// (0x000222ca) wml_tabs_2_passive_pane

0xb3d6,	// (0x000222dc) wml_tabs_3_active_pane_cp_ParamLimits

0xb3d6,	// (0x000222dc) wml_tabs_3_active_pane_cp

0xb3e9,	// (0x000222ef) wml_tabs_3_passive_pane_ParamLimits

0xb3e9,	// (0x000222ef) wml_tabs_3_passive_pane

0xb3fa,	// (0x00022300) wml_tabs_3_passive_pane_cp_ParamLimits

0xb3fa,	// (0x00022300) wml_tabs_3_passive_pane_cp

0xb40f,	// (0x00022315) tabs_4_active_pane

0xb417,	// (0x0002231d) tabs_4_passive_pane

0xb41f,	// (0x00022325) tabs_4_passive_pane_cp

0xb427,	// (0x0002232d) tabs_4_passive_pane_cp2

0xac28,	// (0x00021b2e) aid_height_text

0xa3a2,	// (0x000212a8) mup_volume_cont_pane_ParamLimits

0xa3a2,	// (0x000212a8) mup_volume_cont_pane

0x8528,	// (0x0001f42e) aid_size_cell_pinb

0x8532,	// (0x0001f438) aid_size_list_pinb

0xb315,	// (0x0002221b) mup2_volume_cont_pane_ParamLimits

0xb315,	// (0x0002221b) mup2_volume_cont_pane

0x7436,	// (0x0001e33c) mup2_volume_cont_pane_g1_ParamLimits

0x7436,	// (0x0001e33c) mup2_volume_cont_pane_g1

0x81c0,	// (0x0001f0c6) aid_size_cell_touch_ParamLimits

0x81c0,	// (0x0001f0c6) aid_size_cell_touch

0x840f,	// (0x0001f315) touch_pane_ParamLimits

0x840f,	// (0x0001f315) touch_pane

0x0218,	// (0x0001711e) main_rss2_pane

0x2df2,	// (0x00019cf8) listscroll_rss2_pane

0x2dfb,	// (0x00019d01) rss2_navigation_pane

0x2e03,	// (0x00019d09) list_rss2_pane

0x15f4,	// (0x000184fa) scroll_pane_cp22

0x2e0b,	// (0x00019d11) rss2_navigation_pane_g1

0x2e14,	// (0x00019d1a) rss2_navigation_pane_g2

0x2e1c,	// (0x00019d22) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x000265b6) rss2_navigation_pane_g

0x2e24,	// (0x00019d2a) rss2_navigation_pane_t1

0xb431,	// (0x00022337) rss2_list_single_pane_ParamLimits

0xb431,	// (0x00022337) rss2_list_single_pane

0x2e32,	// (0x00019d38) rss2_list_single_pane_t2

0x2e40,	// (0x00019d46) rss2_list_single_pane_t3_ParamLimits

0x2e40,	// (0x00019d46) rss2_list_single_pane_t3

0x2e5d,	// (0x00019d63) rss2_list_single_pane_t4

0x9bde,	// (0x00020ae4) smil_status_pane_g1

0x0289,	// (0x0001718f) main_image2_pane_ParamLimits

0x0289,	// (0x0001718f) main_image2_pane

0x7299,	// (0x0001e19f) main_camera2_pane_g9_ParamLimits

0x7299,	// (0x0001e19f) main_camera2_pane_g9

0x72ed,	// (0x0001e1f3) main_camera2_pane_t5_ParamLimits

0x72ed,	// (0x0001e1f3) main_camera2_pane_t5

0x72ff,	// (0x0001e205) main_camera2_pane_t6_ParamLimits

0x72ff,	// (0x0001e205) main_camera2_pane_t6

0xb457,	// (0x0002235d) main_image2_pane_g1_ParamLimits

0xb457,	// (0x0002235d) main_image2_pane_g1

0xa9c2,	// (0x000218c8) smil2_video_pane_ParamLimits

0xa9c2,	// (0x000218c8) smil2_video_pane

0x0236,	// (0x0001713c) aid_zoom_text_primary_cp

0x027f,	// (0x00017185) popup_preview_fixed_window

0x0e48,	// (0x00017d4e) im_reading_pane_g1

0x71e3,	// (0x0001e0e9) cams2_bc_adjust_pane_cp_ParamLimits

0x71e3,	// (0x0001e0e9) cams2_bc_adjust_pane_cp

0x732a,	// (0x0001e230) cams2_bc_adjust_pane_ParamLimits

0x732a,	// (0x0001e230) cams2_bc_adjust_pane

0x461f,	// (0x0001b525) cams2_bc_adjust_pane_g1

0x746f,	// (0x0001e375) cams2_slider_pane

0x7478,	// (0x0001e37e) cams2_slider_pane_g1

0x7481,	// (0x0001e387) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x000265bd) cams2_slider_pane_g

0x6cfb,	// (0x0001dc01) calc_display_pane_ParamLimits

0x6d19,	// (0x0001dc1f) calc_paper_pane_ParamLimits

0x6d35,	// (0x0001dc3b) grid_calc_pane_ParamLimits

0x7112,	// (0x0001e018) popup_clock_digital_window_t1_ParamLimits

0x1a15,	// (0x0001891b) main_image_pane_t1

0x6ce1,	// (0x0001dbe7) aid_size_cell_calc_ParamLimits

0x6ce1,	// (0x0001dbe7) aid_size_cell_calc

0xae95,	// (0x00021d9b) popup_blid_sat_info2_window_ParamLimits

0xae95,	// (0x00021d9b) popup_blid_sat_info2_window

0x2ea7,	// (0x00019dad) aid_size_cell_blid

0x2eaf,	// (0x00019db5) bg_popup_window_pane_cp07

0x2ed2,	// (0x00019dd8) grid_popup_blid_pane

0x2edc,	// (0x00019de2) heading_pane_cp05_ParamLimits

0x2edc,	// (0x00019de2) heading_pane_cp05

0x2fa6,	// (0x00019eac) cell_popup_blid_pane_ParamLimits

0x2fa6,	// (0x00019eac) cell_popup_blid_pane

0x2fd0,	// (0x00019ed6) cell_popup_blid_pane_g1

0x2fd8,	// (0x00019ede) cell_popup_blid_pane_t1

0xb2db,	// (0x000221e1) mup2_indicator_pane_ParamLimits

0xb2db,	// (0x000221e1) mup2_indicator_pane

0x172e,	// (0x00018634) mup2_visualizer_osc_pane

0x2d0f,	// (0x00019c15) mup2_visualizer_spec_pane_ParamLimits

0x2d0f,	// (0x00019c15) mup2_visualizer_spec_pane

0xb463,	// (0x00022369) mup2_spec_half_pane

0xb46c,	// (0x00022372) mup2_spec_half_pane_cp

0xb476,	// (0x0002237c) mup2_spec_bar_pane_ParamLimits

0xb476,	// (0x0002237c) mup2_spec_bar_pane

0x2c4c,	// (0x00019b52) mup2_spec_bar_pane_g1

0x2c56,	// (0x00019b5c) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00026530) mup2_spec_bar_pane_g

0xb495,	// (0x0002239b) mup2_osc_middle_pane

0x2c68,	// (0x00019b6e) mup2_visualizer_osc_pane_g1

0x02b7,	// (0x000171bd) popup_number_entry_window_t1_ParamLimits

0x02ca,	// (0x000171d0) popup_number_entry_window_t2_ParamLimits

0x02dc,	// (0x000171e2) popup_number_entry_window_t3_ParamLimits

0x8466,	// (0x0001f36c) popup_number_entry_window_t5_ParamLimits

0x8466,	// (0x0001f36c) popup_number_entry_window_t5

0xf0ec,	// (0x00025ff2) popup_number_entry_window_t_ParamLimits

0x02ee,	// (0x000171f4) text_title_cp2_ParamLimits

0x7151,	// (0x0001e057) aid_hotspot_pointer_text2_pane

0x71a7,	// (0x0001e0ad) main_viewer_pane_g9_ParamLimits

0x71a7,	// (0x0001e0ad) main_viewer_pane_g9

0x1077,	// (0x00017f7d) cale_month_pane_t1_ParamLimits

0x110c,	// (0x00018012) bg_cale_pane_ParamLimits

0x1124,	// (0x0001802a) list_cale_pane_ParamLimits

0x0bb6,	// (0x00017abc) listscroll_cale_day_pane_t1

0x1135,	// (0x0001803b) scroll_pane_cp09_ParamLimits

0xa3e1,	// (0x000212e7) main_mup_eq_pane_t1_ParamLimits

0xa3e1,	// (0x000212e7) main_mup_eq_pane_t1

0xa3fd,	// (0x00021303) main_mup_eq_pane_t2_ParamLimits

0xa3fd,	// (0x00021303) main_mup_eq_pane_t2

0xa419,	// (0x0002131f) main_mup_eq_pane_t3_ParamLimits

0xa419,	// (0x0002131f) main_mup_eq_pane_t3

0xa433,	// (0x00021339) main_mup_eq_pane_t4_ParamLimits

0xa433,	// (0x00021339) main_mup_eq_pane_t4

0xa44d,	// (0x00021353) main_mup_eq_pane_t5_ParamLimits

0xa44d,	// (0x00021353) main_mup_eq_pane_t5

0xa467,	// (0x0002136d) main_mup_eq_pane_t6_ParamLimits

0xa467,	// (0x0002136d) main_mup_eq_pane_t6

0xa47d,	// (0x00021383) main_mup_eq_pane_t7_ParamLimits

0xa47d,	// (0x00021383) main_mup_eq_pane_t7

0xa493,	// (0x00021399) main_mup_eq_pane_t8_ParamLimits

0xa493,	// (0x00021399) main_mup_eq_pane_t8

0xa4a9,	// (0x000213af) main_mup_eq_pane_t9_ParamLimits

0xa4a9,	// (0x000213af) main_mup_eq_pane_t9

0xa4c5,	// (0x000213cb) main_mup_eq_pane_t10_ParamLimits

0xa4c5,	// (0x000213cb) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0002637f) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0002637f) main_mup_eq_pane_t

0xa58a,	// (0x00021490) mup_equalizer_pane_cp5_ParamLimits

0xa5a2,	// (0x000214a8) mup_equalizer_pane_cp6_ParamLimits

0xa5ba,	// (0x000214c0) mup_equalizer_pane_cp7_ParamLimits

0x0218,	// (0x0001711e) main_gallery_pane

0x2c71,	// (0x00019b77) smil2_volume_pane

0x2c8c,	// (0x00019b92) smil_status_volume_pane_g1_ParamLimits

0x2c79,	// (0x00019b7f) smil_status_volume_pane_g2_ParamLimits

0x71b3,	// (0x0001e0b9) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00026535) smil_status_volume_pane_g_ParamLimits

0x2eaf,	// (0x00019db5) bg_popup_window_pane_cp07_ParamLimits

0x2ebd,	// (0x00019dc3) blid_firmament_pane

0xb49e,	// (0x000223a4) aid_size_cell_gallery_ParamLimits

0xb49e,	// (0x000223a4) aid_size_cell_gallery

0xb4ac,	// (0x000223b2) grid_gallery_pane_ParamLimits

0xb4ac,	// (0x000223b2) grid_gallery_pane

0xb4bc,	// (0x000223c2) cell_gallery_pane_ParamLimits

0xb4bc,	// (0x000223c2) cell_gallery_pane

0x2fe6,	// (0x00019eec) bg_cell_gallery_focus_pane_ParamLimits

0x2fe6,	// (0x00019eec) bg_cell_gallery_focus_pane

0x2ff8,	// (0x00019efe) cell_gallery_pane_g1_ParamLimits

0x2ff8,	// (0x00019efe) cell_gallery_pane_g1

0xb50a,	// (0x00022410) cell_gallery_pane_g2_ParamLimits

0xb50a,	// (0x00022410) cell_gallery_pane_g2

0xb517,	// (0x0002241d) cell_gallery_pane_g3_ParamLimits

0xb517,	// (0x0002241d) cell_gallery_pane_g3

0x3004,	// (0x00019f0a) cell_gallery_pane_g4_ParamLimits

0x3004,	// (0x00019f0a) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x000265e3) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x000265e3) cell_gallery_pane_g

0x3010,	// (0x00019f16) bg_cell_gallery_focus_pane_g1

0x3018,	// (0x00019f1e) bg_cell_gallery_focus_pane_g2

0x3020,	// (0x00019f26) bg_cell_gallery_focus_pane_g3

0x3028,	// (0x00019f2e) bg_cell_gallery_focus_pane_g4

0x3030,	// (0x00019f36) bg_cell_gallery_focus_pane_g5

0x3038,	// (0x00019f3e) bg_cell_gallery_focus_pane_g6

0x3040,	// (0x00019f46) bg_cell_gallery_focus_pane_g7

0x3048,	// (0x00019f4e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x000265ec) bg_cell_gallery_focus_pane_g

0x3050,	// (0x00019f56) aid_firma_cardinal

0x3064,	// (0x00019f6a) blid_firmament_pane_t1

0x307b,	// (0x00019f81) blid_firmament_pane_t2

0x3092,	// (0x00019f98) blid_firmament_pane_t3

0x30a9,	// (0x00019faf) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x000265fd) blid_firmament_pane_t

0x30c0,	// (0x00019fc6) blid_sat_info_pane

0x30d0,	// (0x00019fd6) blid_sat_info_pane_g1

0x30d0,	// (0x00019fd6) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00026606) blid_sat_info_pane_g

0x30da,	// (0x00019fe0) blid_sat_info_pane_t1

0x30e8,	// (0x00019fee) smil2_volume_content_pane

0x30f1,	// (0x00019ff7) smil2_volume_pane_g1

0x30f9,	// (0x00019fff) smil2_volume_content_pane_g1

0x3102,	// (0x0001a008) smil2_volume_content_pane_g2

0x310b,	// (0x0001a011) smil2_volume_content_pane_g3

0x3114,	// (0x0001a01a) smil2_volume_content_pane_g4

0x311d,	// (0x0001a023) smil2_volume_content_pane_g5

0x3126,	// (0x0001a02c) smil2_volume_content_pane_g6

0x312f,	// (0x0001a035) smil2_volume_content_pane_g7

0x3138,	// (0x0001a03e) smil2_volume_content_pane_g8

0x3141,	// (0x0001a047) smil2_volume_content_pane_g9

0x314a,	// (0x0001a050) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0002660b) smil2_volume_content_pane_g

0x89d0,	// (0x0001f8d6) cale_week_day_heading_pane_t1_ParamLimits

0x89fd,	// (0x0001f903) cale_week_day_heading_pane_t2_ParamLimits

0x8a2a,	// (0x0001f930) cale_week_day_heading_pane_t3_ParamLimits

0x8a57,	// (0x0001f95d) cale_week_day_heading_pane_t4_ParamLimits

0x8a84,	// (0x0001f98a) cale_week_day_heading_pane_t5_ParamLimits

0x8ab1,	// (0x0001f9b7) cale_week_day_heading_pane_t6_ParamLimits

0x8ade,	// (0x0001f9e4) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x000260f7) cale_week_day_heading_pane_t_ParamLimits

0x0bc8,	// (0x00017ace) bg_cale_side_pane_ParamLimits

0x6e9a,	// (0x0001dda0) cale_week_time_pane_t1_ParamLimits

0x6ec6,	// (0x0001ddcc) cale_week_time_pane_t2_ParamLimits

0x6ef2,	// (0x0001ddf8) cale_week_time_pane_t3_ParamLimits

0x6f1e,	// (0x0001de24) cale_week_time_pane_t4_ParamLimits

0x6f4a,	// (0x0001de50) cale_week_time_pane_t5_ParamLimits

0x6f76,	// (0x0001de7c) cale_week_time_pane_t6_ParamLimits

0x6fa2,	// (0x0001dea8) cale_week_time_pane_t7_ParamLimits

0x6fce,	// (0x0001ded4) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00026106) cale_week_time_pane_t_ParamLimits

0x8b0b,	// (0x0001fa11) cell_cale_week_pane_g2_ParamLimits

0x0bc8,	// (0x00017ace) bg_cale_side_pane_cp01_ParamLimits

0x9a03,	// (0x00020909) cale_month_week_pane_t1_ParamLimits

0x9a2e,	// (0x00020934) cale_month_week_pane_t2_ParamLimits

0x9a59,	// (0x0002095f) cale_month_week_pane_t3_ParamLimits

0x9a84,	// (0x0002098a) cale_month_week_pane_t4_ParamLimits

0x9aaf,	// (0x000209b5) cale_month_week_pane_t5_ParamLimits

0x9ada,	// (0x000209e0) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x000261df) cale_month_week_pane_t_ParamLimits

0x7076,	// (0x0001df7c) cell_cale_month_pane_g1_ParamLimits

0x0218,	// (0x0001711e) main_cale_event_viewer_pane

0x0218,	// (0x0001711e) listscroll_cale_event_viewer_pane

0x3153,	// (0x0001a059) list_cale_ev_pane

0x315b,	// (0x0001a061) scroll_pane_cp023

0xb524,	// (0x0002242a) field_cale_ev_pane_ParamLimits

0xb524,	// (0x0002242a) field_cale_ev_pane

0x3167,	// (0x0001a06d) field_cale_ev_content_pane_ParamLimits

0x3167,	// (0x0001a06d) field_cale_ev_content_pane

0x3173,	// (0x0001a079) field_cale_ev_pane_g1_ParamLimits

0x3173,	// (0x0001a079) field_cale_ev_pane_g1

0x317f,	// (0x0001a085) field_cale_ev_pane_g2_ParamLimits

0x317f,	// (0x0001a085) field_cale_ev_pane_g2

0x3197,	// (0x0001a09d) field_cale_ev_pane_g3_ParamLimits

0x3197,	// (0x0001a09d) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x00026620) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x00026620) field_cale_ev_pane_g

0x31af,	// (0x0001a0b5) field_cale_ev_pane_t1_ParamLimits

0x31af,	// (0x0001a0b5) field_cale_ev_pane_t1

0xb548,	// (0x0002244e) field_cale_ev_content_pane_t1_ParamLimits

0xb548,	// (0x0002244e) field_cale_ev_content_pane_t1

0x18b9,	// (0x000187bf) bg_button_pane_cp01

0x09f2,	// (0x000178f8) listscroll_cale_week_pane_ParamLimits

0x87f0,	// (0x0001f6f6) popup_toolbar_window_cp01

0x0bb6,	// (0x00017abc) listscroll_cale_week_pane_t1_ParamLimits

0x09f2,	// (0x000178f8) listscroll_cale_day_pane_ParamLimits

0x87f0,	// (0x0001f6f6) popup_toolbar_window_cp02

0x0bb6,	// (0x00017abc) listscroll_cale_day_pane_t1_ParamLimits

0x09f2,	// (0x000178f8) main_cale_month_pane_ParamLimits

0xaf79,	// (0x00021e7f) popup_toolbar_window_cp03_ParamLimits

0xaf79,	// (0x00021e7f) popup_toolbar_window_cp03

0xa8d2,	// (0x000217d8) main_image_pane_g2_ParamLimits

0xa8d2,	// (0x000217d8) main_image_pane_g2

0xa8de,	// (0x000217e4) main_image_pane_g3_ParamLimits

0xa8de,	// (0x000217e4) main_image_pane_g3

0x0002,

0xf50b,	// (0x00026411) main_image_pane_g_ParamLimits

0xf50b,	// (0x00026411) main_image_pane_g

0x1a15,	// (0x0001891b) main_image_pane_t1_ParamLimits

0xa8ea,	// (0x000217f0) main_image_pane_t2_ParamLimits

0xa8ea,	// (0x000217f0) main_image_pane_t2

0xa8fc,	// (0x00021802) main_image_pane_t3_ParamLimits

0xa8fc,	// (0x00021802) main_image_pane_t3

0xa90e,	// (0x00021814) main_image_pane_t4_ParamLimits

0xa90e,	// (0x00021814) main_image_pane_t4

0x0003,

0xf512,	// (0x00026418) main_image_pane_t_ParamLimits

0xf512,	// (0x00026418) main_image_pane_t

0xa920,	// (0x00021826) popup_image_details_window_cp01

0xa92a,	// (0x00021830) popup_toobar_trans_pane_cp01_ParamLimits

0xa92a,	// (0x00021830) popup_toobar_trans_pane_cp01

0xaeea,	// (0x00021df0) popup_image_details_window_ParamLimits

0xaeea,	// (0x00021df0) popup_image_details_window

0x2bbd,	// (0x00019ac3) popup_image_focus_window

0x71d5,	// (0x0001e0db) camera2_autofocus_pane_ParamLimits

0x71d5,	// (0x0001e0db) camera2_autofocus_pane

0x0218,	// (0x0001711e) bg_popup_sub_pane_cp06

0x31c6,	// (0x0001a0cc) popup_image_focus_window_g1

0x31ce,	// (0x0001a0d4) popup_image_focus_window_g2

0x31d6,	// (0x0001a0dc) popup_image_focus_window_g3

0x31de,	// (0x0001a0e4) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00026627) popup_image_focus_window_g

0x31e6,	// (0x0001a0ec) popup_image_focus_window_t1

0x31f4,	// (0x0001a0fa) popup_image_focus_window_t2

0x3204,	// (0x0001a10a) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x00026630) popup_image_focus_window_t

0x3212,	// (0x0001a118) camera2_autofocus_pane_g1

0x0289,	// (0x0001718f) bg_tb_trans_pane_cp01

0x3220,	// (0x0001a126) popup_image_details_window_g1

0x3233,	// (0x0001a139) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x00026642) popup_image_details_window_g

0x325c,	// (0x0001a162) popup_image_details_window_t1

0x326e,	// (0x0001a174) popup_image_details_window_t2

0x3287,	// (0x0001a18d) popup_image_details_window_t3

0x329b,	// (0x0001a1a1) popup_image_details_window_t4

0x32b6,	// (0x0001a1bc) popup_image_details_window_t5

0x0004,

0xf743,	// (0x00026649) popup_image_details_window_t

0x09c4,	// (0x000178ca) bg_calc_paper_pane_ParamLimits

0x6d61,	// (0x0001dc67) grid_highlight_pane_cp013

0x6d6b,	// (0x0001dc71) list_calc_pane_ParamLimits

0x6d7d,	// (0x0001dc83) scroll_pane_cp024

0x09f2,	// (0x000178f8) bg_calc_display_pane_ParamLimits

0x6d85,	// (0x0001dc8b) calc_display_pane_t1_ParamLimits

0x6d9a,	// (0x0001dca0) calc_display_pane_t2_ParamLimits

0x6daf,	// (0x0001dcb5) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00026079) calc_display_pane_t_ParamLimits

0x6e1a,	// (0x0001dd20) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00026096) cell_calc_pane_g

0x6e23,	// (0x0001dd29) cell_calc_pane_t1

0x0a75,	// (0x0001797b) grid_highlight_pane_cp02_ParamLimits

0x0a8b,	// (0x00017991) toolbar_button_pane_cp01_ParamLimits

0x0a8b,	// (0x00017991) toolbar_button_pane_cp01

0x1a5a,	// (0x00018960) temp_image_control_pane_ParamLimits

0x1a5a,	// (0x00018960) temp_image_control_pane

0x0289,	// (0x0001718f) main_mp3_pane

0x32d0,	// (0x0001a1d6) temp_image_control_pane_g1_ParamLimits

0x32d0,	// (0x0001a1d6) temp_image_control_pane_g1

0x32de,	// (0x0001a1e4) temp_image_control_pane_g2_ParamLimits

0x32de,	// (0x0001a1e4) temp_image_control_pane_g2

0x32f0,	// (0x0001a1f6) temp_image_control_pane_g3_ParamLimits

0x32f0,	// (0x0001a1f6) temp_image_control_pane_g3

0xb596,	// (0x0002249c) temp_image_control_pane_g4_ParamLimits

0xb596,	// (0x0002249c) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x00026654) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x00026654) temp_image_control_pane_g

0x32d0,	// (0x0001a1d6) main_mp3_pane_g1

0xb5a7,	// (0x000224ad) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0002665d) main_mp3_pane_g

0x3333,	// (0x0001a239) main_mp3_pane_t1

0x0c97,	// (0x00017b9d) main_camera_pane_g8_ParamLimits

0x0c97,	// (0x00017b9d) main_camera_pane_g8

0x8d3b,	// (0x0001fc41) main_video_pane_g7_ParamLimits

0x8d3b,	// (0x0001fc41) main_video_pane_g7

0x7318,	// (0x0001e21e) main_camera2_pane_t7_ParamLimits

0x7318,	// (0x0001e21e) main_camera2_pane_t7

0x0e9f,	// (0x00017da5) scroll_pane_cp025_ParamLimits

0x0e9f,	// (0x00017da5) scroll_pane_cp025

0x0eb3,	// (0x00017db9) scroll_pane_cp026_ParamLimits

0x0eb3,	// (0x00017db9) scroll_pane_cp026

0x0ec2,	// (0x00017dc8) wml_content_pane_ParamLimits

0x0218,	// (0x0001711e) main_touch_calib_pane

0xb64b,	// (0x00022551) main_touch_calib_pane_g1

0xb657,	// (0x0002255d) main_touch_calib_pane_g2

0xb663,	// (0x00022569) main_touch_calib_pane_g3

0xb66f,	// (0x00022575) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0002667b) main_touch_calib_pane_g

0xb67b,	// (0x00022581) main_touch_calib_pane_t1

0xb692,	// (0x00022598) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00026684) main_touch_calib_pane_t

0x166f,	// (0x00018575) mup_progress_pane_cp02

0x168e,	// (0x00018594) navi_pane_g1

0x16f0,	// (0x000185f6) navi_pane_mp_t3

0x0289,	// (0x0001718f) main_mp3_pane_ParamLimits

0xafbb,	// (0x00021ec1) navi_pane_ParamLimits

0x32d0,	// (0x0001a1d6) main_mp3_pane_g1_ParamLimits

0xb5a7,	// (0x000224ad) main_mp3_pane_g2_ParamLimits

0xb5b3,	// (0x000224b9) main_mp3_pane_g3_ParamLimits

0xb5b3,	// (0x000224b9) main_mp3_pane_g3

0xb5bf,	// (0x000224c5) main_mp3_pane_g4_ParamLimits

0xb5bf,	// (0x000224c5) main_mp3_pane_g4

0x3300,	// (0x0001a206) main_mp3_pane_g5_ParamLimits

0x3300,	// (0x0001a206) main_mp3_pane_g5

0x330e,	// (0x0001a214) main_mp3_pane_g6_ParamLimits

0x330e,	// (0x0001a214) main_mp3_pane_g6

0x331b,	// (0x0001a221) main_mp3_pane_g7_ParamLimits

0x331b,	// (0x0001a221) main_mp3_pane_g7

0x3327,	// (0x0001a22d) main_mp3_pane_g8_ParamLimits

0x3327,	// (0x0001a22d) main_mp3_pane_g8

0xf757,	// (0x0002665d) main_mp3_pane_g_ParamLimits

0xb5cb,	// (0x000224d1) main_mp3_pane_t2

0xb5db,	// (0x000224e1) main_mp3_pane_t3

0x3341,	// (0x0001a247) main_mp3_pane_t4

0x334f,	// (0x0001a255) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0002666e) main_mp3_pane_t

0x335d,	// (0x0001a263) mup_progress_pane_cp01

0x0236,	// (0x0001713c) aid_zoom_text_secondary2

0x3153,	// (0x0001a059) list_cale_ev2_pane

0x315b,	// (0x0001a061) scroll_pane_cp023_ParamLimits

0xb6e9,	// (0x000225ef) field_cale_ev2_pane_ParamLimits

0xb6e9,	// (0x000225ef) field_cale_ev2_pane

0x3365,	// (0x0001a26b) field_cale_ev2_pane_g1_ParamLimits

0x3365,	// (0x0001a26b) field_cale_ev2_pane_g1

0x3371,	// (0x0001a277) field_cale_ev2_pane_g2_ParamLimits

0x3371,	// (0x0001a277) field_cale_ev2_pane_g2

0x3389,	// (0x0001a28f) field_cale_ev2_pane_g3_ParamLimits

0x3389,	// (0x0001a28f) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0002668f) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0002668f) field_cale_ev2_pane_g

0x33ad,	// (0x0001a2b3) field_cale_ev2_pane_t1_ParamLimits

0x33ad,	// (0x0001a2b3) field_cale_ev2_pane_t1

0x33c4,	// (0x0001a2ca) field_cale_ev2_pane_t2_ParamLimits

0x33c4,	// (0x0001a2ca) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x00026698) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x00026698) field_cale_ev2_pane_t

0xa7ae,	// (0x000216b4) main_postcard_pane_g5_ParamLimits

0xa7ae,	// (0x000216b4) main_postcard_pane_g5

0xa7bc,	// (0x000216c2) main_postcard_pane_g6_ParamLimits

0xa7bc,	// (0x000216c2) main_postcard_pane_g6

0x8b79,	// (0x0001fa7f) camera2_autofocus_pane_cp_ParamLimits

0x8b79,	// (0x0001fa7f) camera2_autofocus_pane_cp

0x0289,	// (0x0001718f) main_mup3_pane

0xb727,	// (0x0002262d) main_mup3_pane_g1_ParamLimits

0xb727,	// (0x0002262d) main_mup3_pane_g1

0xb748,	// (0x0002264e) main_mup3_pane_g2_ParamLimits

0xb748,	// (0x0002264e) main_mup3_pane_g2

0xb7c4,	// (0x000226ca) main_mup3_pane_g3_ParamLimits

0xb7c4,	// (0x000226ca) main_mup3_pane_g3

0xb805,	// (0x0002270b) main_mup3_pane_g4_ParamLimits

0xb805,	// (0x0002270b) main_mup3_pane_g4

0xb846,	// (0x0002274c) main_mup3_pane_g5_ParamLimits

0xb846,	// (0x0002274c) main_mup3_pane_g5

0xb887,	// (0x0002278d) main_mup3_pane_g6_ParamLimits

0xb887,	// (0x0002278d) main_mup3_pane_g6

0x33d9,	// (0x0001a2df) main_mup3_pane_g7_ParamLimits

0x33d9,	// (0x0001a2df) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x000266a8) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x000266a8) main_mup3_pane_g

0xb8f9,	// (0x000227ff) main_mup3_pane_t1_ParamLimits

0xb8f9,	// (0x000227ff) main_mup3_pane_t1

0xb96c,	// (0x00022872) main_mup3_pane_t2_ParamLimits

0xb96c,	// (0x00022872) main_mup3_pane_t2

0xba39,	// (0x0002293f) main_mup3_pane_t4_ParamLimits

0xba39,	// (0x0002293f) main_mup3_pane_t4

0xba8d,	// (0x00022993) main_mup3_pane_t5_ParamLimits

0xba8d,	// (0x00022993) main_mup3_pane_t5

0xbb39,	// (0x00022a3f) main_mup3_pane_t6_ParamLimits

0xbb39,	// (0x00022a3f) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x000266b9) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x000266b9) main_mup3_pane_t

0xbbe1,	// (0x00022ae7) mup3_progress_pane_ParamLimits

0xbbe1,	// (0x00022ae7) mup3_progress_pane

0xbc4c,	// (0x00022b52) popup_mup3_control_window_ParamLimits

0xbc4c,	// (0x00022b52) popup_mup3_control_window

0x33e7,	// (0x0001a2ed) popup_mup3_text_window

0xbc69,	// (0x00022b6f) mup3_progress_pane_t1

0xbc80,	// (0x00022b86) mup3_progress_pane_t2

0x33ef,	// (0x0001a2f5) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x000266c6) mup3_progress_pane_t

0x3406,	// (0x0001a30c) mup_progress_pane_cp03

0x0218,	// (0x0001711e) bg_tb_trans_pane_cp04

0xbc97,	// (0x00022b9d) mup3_volume_pane

0xbc9f,	// (0x00022ba5) popup_mup3_control_window_g1

0x3a5b,	// (0x0001a961) mup3_volume_pane_g1

0x3a64,	// (0x0001a96a) mup3_volume_pane_g2

0x3a6d,	// (0x0001a973) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x000266cd) mup3_volume_pane_g

0x0218,	// (0x0001711e) bg_tb_trans_pane_cp03

0x3416,	// (0x0001a31c) popup_mup3_text_window_g1

0x341e,	// (0x0001a324) popup_mup3_text_window_t1

0x0a4c,	// (0x00017952) list_calc_item_pane_g1_ParamLimits

0x2dd9,	// (0x00019cdf) mup_volume_pane_cp_g1

0xb6a9,	// (0x000225af) main_touch_calib_pane_t3

0xb6bd,	// (0x000225c3) main_touch_calib_pane_t4

0xb6d3,	// (0x000225d9) main_touch_calib_pane_t5

0x0222,	// (0x00017128) aid_cell_size_toolbar2

0x022a,	// (0x00017130) aid_popup3_width_pane

0x0236,	// (0x0001713c) aid_zoom_text_msg_primary

0x7060,	// (0x0001df66) vorec_t7

0x0a10,	// (0x00017916) bg_calc_paper_pane_g1_ParamLimits

0x0a28,	// (0x0001792e) bg_calc_paper_pane_g2_ParamLimits

0x0a1c,	// (0x00017922) bg_calc_paper_pane_g3_ParamLimits

0x0a40,	// (0x00017946) bg_calc_paper_pane_g4_ParamLimits

0x0a34,	// (0x0001793a) bg_calc_paper_pane_g5_ParamLimits

0x86d8,	// (0x0001f5de) bg_calc_paper_pane_g6_ParamLimits

0x86e9,	// (0x0001f5ef) bg_calc_paper_pane_g7_ParamLimits

0x86fa,	// (0x0001f600) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00026080) bg_calc_paper_pane_g_ParamLimits

0x870b,	// (0x0001f611) calc_bg_paper_pane_g9_ParamLimits

0x8c6a,	// (0x0001fb70) image_qvga_pane_ParamLimits

0x8c6a,	// (0x0001fb70) image_qvga_pane

0x0905,	// (0x0001780b) bg_popup_sub_pane_cp04_ParamLimits

0x1991,	// (0x00018897) popup_mup_playback_window_g1_ParamLimits

0x199d,	// (0x000188a3) popup_mup_playback_window_t1_ParamLimits

0x19b2,	// (0x000188b8) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0002640c) popup_mup_playback_window_t_ParamLimits

0xb1d9,	// (0x000220df) main_mup2_pane_g3_ParamLimits

0xb1d9,	// (0x000220df) main_mup2_pane_g3

0x8f71,	// (0x0001fe77) popup_toolbar_window_cp04

0x1dad,	// (0x00018cb3) popup_call2_audio_second_window_g3_ParamLimits

0x1dad,	// (0x00018cb3) popup_call2_audio_second_window_g3

0x21b7,	// (0x000190bd) popup_call2_audio_first_window_g4_ParamLimits

0x21b7,	// (0x000190bd) popup_call2_audio_first_window_g4

0x2836,	// (0x0001973c) popup_call2_audio_in_window_g4_ParamLimits

0x2836,	// (0x0001973c) popup_call2_audio_in_window_g4

0xa8c5,	// (0x000217cb) aid_area_sk_bg_cut_ParamLimits

0xa8c5,	// (0x000217cb) aid_area_sk_bg_cut

0x19c7,	// (0x000188cd) aid_area_sk_bg_cut_2_ParamLimits

0x19c7,	// (0x000188cd) aid_area_sk_bg_cut_2

0xb4fa,	// (0x00022400) aid_placing_details_win

0xb502,	// (0x00022408) aid_placing_details_win_2

0x3212,	// (0x0001a118) camera2_autofocus_pane_g1_ParamLimits

0x83c9,	// (0x0001f2cf) popup_fixed_preview_cale_window_ParamLimits

0x83c9,	// (0x0001f2cf) popup_fixed_preview_cale_window

0x175a,	// (0x00018660) navi_slider_pane_g3

0x1751,	// (0x00018657) navi_slider_pane_g4

0x1748,	// (0x0001864e) navi_slider_pane_g5

0x175a,	// (0x00018660) navi_slider_pane_g6

0x7138,	// (0x0001e03e) navi_slider_pane_g7

0x1886,	// (0x0001878c) mup_scale_pane_g3

0x188f,	// (0x00018795) mup_scale_pane_g4

0x1898,	// (0x0001879e) mup_scale_pane_g5

0xa5d2,	// (0x000214d8) mup_scale_pane_g6

0xa5db,	// (0x000214e1) mup_scale_pane_g7

0x175a,	// (0x00018660) cams2_slider_pane_g3

0x2e8e,	// (0x00019d94) cams2_slider_pane_g4

0x748a,	// (0x0001e390) cams2_slider_pane_g5

0x175a,	// (0x00018660) cams2_slider_pane_g6

0x7492,	// (0x0001e398) cams2_slider_pane_g7

0x30d0,	// (0x00019fd6) camera2_autofocus_pane_cp_g1

0x342c,	// (0x0001a332) bg_popup_preview_window_pane_cp02_ParamLimits

0x342c,	// (0x0001a332) bg_popup_preview_window_pane_cp02

0x3438,	// (0x0001a33e) list_fp_cale_pane_ParamLimits

0x3438,	// (0x0001a33e) list_fp_cale_pane

0x3444,	// (0x0001a34a) popup_fixed_preview_cale_window_t1_ParamLimits

0x3444,	// (0x0001a34a) popup_fixed_preview_cale_window_t1

0xbca8,	// (0x00022bae) popup_fixed_preview_cale_window_t2_ParamLimits

0xbca8,	// (0x00022bae) popup_fixed_preview_cale_window_t2

0xbcbd,	// (0x00022bc3) popup_fixed_preview_cale_window_t3_ParamLimits

0xbcbd,	// (0x00022bc3) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x000266d4) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x000266d4) popup_fixed_preview_cale_window_t

0xbcd2,	// (0x00022bd8) list_single_fp_cale_pane_ParamLimits

0xbcd2,	// (0x00022bd8) list_single_fp_cale_pane

0x3462,	// (0x0001a368) list_single_fp_cale_pane_g1_ParamLimits

0x3462,	// (0x0001a368) list_single_fp_cale_pane_g1

0x346e,	// (0x0001a374) list_single_fp_cale_pane_g2_ParamLimits

0x346e,	// (0x0001a374) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x000266db) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x000266db) list_single_fp_cale_pane_g

0x3487,	// (0x0001a38d) list_single_fp_cale_pane_t1_ParamLimits

0x3487,	// (0x0001a38d) list_single_fp_cale_pane_t1

0x3499,	// (0x0001a39f) list_single_fp_cale_pane_t2_ParamLimits

0x3499,	// (0x0001a39f) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x000266e2) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x000266e2) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0218,	// (0x0001711e) main_dialer_pane

0xbce2,	// (0x00022be8) aid_cell_size_keypad

0xbcec,	// (0x00022bf2) dialer_ne_pane

0xbcf6,	// (0x00022bfc) grid_dialer_command_1_pane

0xbcfe,	// (0x00022c04) grid_dialer_command_2_pane

0xbd06,	// (0x00022c0c) grid_dialer_keypad_pane

0xbd1a,	// (0x00022c20) bg_popup_call_pane_cp06_ParamLimits

0xbd1a,	// (0x00022c20) bg_popup_call_pane_cp06

0xbd26,	// (0x00022c2c) dialer_ne_clear_pane_ParamLimits

0xbd26,	// (0x00022c2c) dialer_ne_clear_pane

0x34cc,	// (0x0001a3d2) dialer_ne_pane_g1

0x34d4,	// (0x0001a3da) dialer_ne_pane_t1_ParamLimits

0x34d4,	// (0x0001a3da) dialer_ne_pane_t1

0xbd32,	// (0x00022c38) dialer_ne_pane_t2_ParamLimits

0xbd32,	// (0x00022c38) dialer_ne_pane_t2

0xbd4f,	// (0x00022c55) dialer_ne_pane_t3_ParamLimits

0xbd4f,	// (0x00022c55) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x000266e7) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x000266e7) dialer_ne_pane_t

0xbd73,	// (0x00022c79) dialer_ne_pane_t3_copy1_ParamLimits

0xbd73,	// (0x00022c79) dialer_ne_pane_t3_copy1

0xbd97,	// (0x00022c9d) cell_dialer_keypad_pane_ParamLimits

0xbd97,	// (0x00022c9d) cell_dialer_keypad_pane

0xbdae,	// (0x00022cb4) cell_dialer_command_1_pane_ParamLimits

0xbdae,	// (0x00022cb4) cell_dialer_command_1_pane

0xbdc4,	// (0x00022cca) cell_dialer_command_2_pane_ParamLimits

0xbdc4,	// (0x00022cca) cell_dialer_command_2_pane

0x34e6,	// (0x0001a3ec) bg_button_pane_cp02_ParamLimits

0x34e6,	// (0x0001a3ec) bg_button_pane_cp02

0xbdd3,	// (0x00022cd9) cell_dialer_keypad_pane_g1_ParamLimits

0xbdd3,	// (0x00022cd9) cell_dialer_keypad_pane_g1

0x34e6,	// (0x0001a3ec) bg_button_pane_cp03_ParamLimits

0x34e6,	// (0x0001a3ec) bg_button_pane_cp03

0xbde7,	// (0x00022ced) cell_dialer_command_1_pane_g1_ParamLimits

0xbde7,	// (0x00022ced) cell_dialer_command_1_pane_g1

0x34f2,	// (0x0001a3f8) bg_button_pane_cp04

0xbdfb,	// (0x00022d01) cell_dialer_command_2_pane_g1

0x172e,	// (0x00018634) bg_button_pane_cp06

0x34fa,	// (0x0001a400) dialer_ne_clear_pane_g1

0xa0ac,	// (0x00020fb2) navi_pane_g2

0xa0da,	// (0x00020fe0) navi_pane_g3

0x0002,

0xf409,	// (0x0002630f) navi_pane_g

0xa105,	// (0x0002100b) navi_pane_mv_g2

0xa12c,	// (0x00021032) navi_pane_mv_g5

0xa134,	// (0x0002103a) navi_pane_mv_t1

0x09f2,	// (0x000178f8) main_clock2_pane

0xbe31,	// (0x00022d37) main_clock2_list_pane_ParamLimits

0xbe31,	// (0x00022d37) main_clock2_list_pane

0xbe5b,	// (0x00022d61) main_clock2_pane_t1_ParamLimits

0xbe5b,	// (0x00022d61) main_clock2_pane_t1

0xbe89,	// (0x00022d8f) main_clock2_pane_t2_ParamLimits

0xbe89,	// (0x00022d8f) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x000266ee) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x000266ee) main_clock2_pane_t

0xbef2,	// (0x00022df8) popup_clock_analogue_window_cp03_ParamLimits

0xbef2,	// (0x00022df8) popup_clock_analogue_window_cp03

0xbf12,	// (0x00022e18) popup_clock_digital_window_cp02_ParamLimits

0xbf12,	// (0x00022e18) popup_clock_digital_window_cp02

0xbf83,	// (0x00022e89) main_clock2_list_single_pane_ParamLimits

0xbf83,	// (0x00022e89) main_clock2_list_single_pane

0x172e,	// (0x00018634) list_highlight_pane_cp05

0x3502,	// (0x0001a408) main_clock2_list_single_pane_t1

0x8f71,	// (0x0001fe77) popup_toolbar_window_cp04_ParamLimits

0xb566,	// (0x0002246c) camera2_autofocus_pane_g2_ParamLimits

0xb566,	// (0x0002246c) camera2_autofocus_pane_g2

0xb572,	// (0x00022478) camera2_autofocus_pane_g3_ParamLimits

0xb572,	// (0x00022478) camera2_autofocus_pane_g3

0xb57e,	// (0x00022484) camera2_autofocus_pane_g4_ParamLimits

0xb57e,	// (0x00022484) camera2_autofocus_pane_g4

0xb58a,	// (0x00022490) camera2_autofocus_pane_g5_ParamLimits

0xb58a,	// (0x00022490) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00026637) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00026637) camera2_autofocus_pane_g

0xb707,	// (0x0002260d) camera2_autofocus_pane_cp_g2

0xb70f,	// (0x00022615) camera2_autofocus_pane_cp_g3

0xb717,	// (0x0002261d) camera2_autofocus_pane_cp_g4

0xb71f,	// (0x00022625) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0002669d) camera2_autofocus_pane_cp_g

0xbd12,	// (0x00022c18) popup_dialer_spcha_window

0x0218,	// (0x0001711e) bg_popup_sub_pane_cp07

0x3510,	// (0x0001a416) list_spcha_pane

0x3518,	// (0x0001a41e) list_single_spcha_pane_ParamLimits

0x3518,	// (0x0001a41e) list_single_spcha_pane

0x0218,	// (0x0001711e) list_highlight_pane_cp06

0x3529,	// (0x0001a42f) list_single_spcha_pane_t1

0x25e0,	// (0x000194e6) popup_call2_audio_out_window_g4_ParamLimits

0x25e0,	// (0x000194e6) popup_call2_audio_out_window_g4

0x0218,	// (0x0001711e) main_imed2_pane

0x2bc7,	// (0x00019acd) popup_imed_adjust2_window

0xaef8,	// (0x00021dfe) popup_imed_trans_window_ParamLimits

0xaef8,	// (0x00021dfe) popup_imed_trans_window

0x2f08,	// (0x00019e0e) popup_blid_sat_info2_window_t1

0x2f16,	// (0x00019e1c) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x000265cc) popup_blid_sat_info2_window_t

0xbfb5,	// (0x00022ebb) aid_size_cell_colour_35

0xbfcf,	// (0x00022ed5) aid_size_cell_colour_112

0xbfe6,	// (0x00022eec) aid_size_cell_effect

0x0289,	// (0x0001718f) bg_tb_trans_pane_cp02

0x124f,	// (0x00018155) heading_imed_pane

0xc000,	// (0x00022f06) listscroll_imed_pane

0x3537,	// (0x0001a43d) heading_imed_pane_g1

0x353f,	// (0x0001a445) heading_imed_pane_t1

0x354d,	// (0x0001a453) grid_imed_colour_35_pane_ParamLimits

0x354d,	// (0x0001a453) grid_imed_colour_35_pane

0xc00c,	// (0x00022f12) grid_imed_effect_pane

0x3569,	// (0x0001a46f) list_imed_aspect_pane

0xc01c,	// (0x00022f22) scroll_pane_cp027_ParamLimits

0xc01c,	// (0x00022f22) scroll_pane_cp027

0xc028,	// (0x00022f2e) cell_imed_effect_pane_ParamLimits

0xc028,	// (0x00022f2e) cell_imed_effect_pane

0x3571,	// (0x0001a477) cell_imed_colour_pane_ParamLimits

0x3571,	// (0x0001a477) cell_imed_colour_pane

0x35bb,	// (0x0001a4c1) cell_imed_colour_pane_g1_ParamLimits

0x35bb,	// (0x0001a4c1) cell_imed_colour_pane_g1

0x35cc,	// (0x0001a4d2) hgihlgiht_grid_pane_cp016_ParamLimits

0x35cc,	// (0x0001a4d2) hgihlgiht_grid_pane_cp016

0xc044,	// (0x00022f4a) cell_imed_effect_pane_g1

0xc04c,	// (0x00022f52) grid_highlight_pane_cp017

0x35dd,	// (0x0001a4e3) list_imed_single_pane_ParamLimits

0x35dd,	// (0x0001a4e3) list_imed_single_pane

0x0218,	// (0x0001711e) list_highlight_pane_cp07

0x35f1,	// (0x0001a4f7) list_imed_aspect_pane_comp1_t1

0x2b9b,	// (0x00019aa1) bg_tb_trans_pane_cp05

0x3613,	// (0x0001a519) popup_imed_adjust2_window_g1

0x363a,	// (0x0001a540) popup_imed_adjust2_window_t1

0x3652,	// (0x0001a558) slider_imed_adjust_pane

0x3666,	// (0x0001a56c) slider_imed_adjust_pane_g1

0x3676,	// (0x0001a57c) slider_imed_adjust_pane_g2

0x3686,	// (0x0001a58c) slider_imed_adjust_pane_g3

0x3697,	// (0x0001a59d) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0002670b) slider_imed_adjust_pane_g

0xc055,	// (0x00022f5b) aid_size_cell_clipart2

0xc061,	// (0x00022f67) grid_imed_clipart_pane

0x36a8,	// (0x0001a5ae) scroll_pane_cp031

0xc06b,	// (0x00022f71) cell_imed_clipart_pane_ParamLimits

0xc06b,	// (0x00022f71) cell_imed_clipart_pane

0xc089,	// (0x00022f8f) cell_imed_clipart_pane_g1

0x0218,	// (0x0001711e) grid_highlight_pane_cp014

0xbe3d,	// (0x00022d43) main_clock2_pane_g1_ParamLimits

0xbe3d,	// (0x00022d43) main_clock2_pane_g1

0xbf2e,	// (0x00022e34) aid_call2_pane_cp10

0xbf40,	// (0x00022e46) aid_call_pane_cp10

0x1663,	// (0x00018569) popup_clock_analogue_window_cp10_g1

0x1663,	// (0x00018569) popup_clock_analogue_window_cp10_g2

0xbf52,	// (0x00022e58) popup_clock_analogue_window_cp10_g3

0xbf52,	// (0x00022e58) popup_clock_analogue_window_cp10_g4

0x1663,	// (0x00018569) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x000266f9) popup_clock_analogue_window_cp10_g

0xbf64,	// (0x00022e6a) popup_clock_analogue_window_cp10_t1

0x749b,	// (0x0001e3a1) clock_digital_number_pane_cp10_ParamLimits

0x749b,	// (0x0001e3a1) clock_digital_number_pane_cp10

0x74b3,	// (0x0001e3b9) clock_digital_number_pane_cp11_ParamLimits

0x74b3,	// (0x0001e3b9) clock_digital_number_pane_cp11

0x74cb,	// (0x0001e3d1) clock_digital_number_pane_cp12_ParamLimits

0x74cb,	// (0x0001e3d1) clock_digital_number_pane_cp12

0x74e3,	// (0x0001e3e9) clock_digital_number_pane_cp13_ParamLimits

0x74e3,	// (0x0001e3e9) clock_digital_number_pane_cp13

0x74fb,	// (0x0001e401) clock_digital_separator_pane_cp10_ParamLimits

0x74fb,	// (0x0001e401) clock_digital_separator_pane_cp10

0xbf95,	// (0x00022e9b) popup_clock_digital_window_cp02_t1_ParamLimits

0xbf95,	// (0x00022e9b) popup_clock_digital_window_cp02_t1

0x08fd,	// (0x00017803) clock_digital_number_pane_cp10_g1

0x08fd,	// (0x00017803) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x00026714) clock_digital_number_pane_cp10_g

0x08fd,	// (0x00017803) clock_digital_separator_pane_cp10_g1

0x08fd,	// (0x00017803) clock_digital_separator_pane_g2_cp10

0x16fe,	// (0x00018604) navi_pane_vded_g4

0x1707,	// (0x0001860d) navi_pane_vded_g5

0x1710,	// (0x00018616) navi_pane_vded_t1

0x0218,	// (0x0001711e) main_vded_pane

0xc092,	// (0x00022f98) main_vded_pane_g1

0xc09e,	// (0x00022fa4) main_vded_pane_g2

0xc0a8,	// (0x00022fae) main_vded_pane_g3

0x0002,

0xf813,	// (0x00026719) main_vded_pane_g

0xc0b2,	// (0x00022fb8) main_vded_pane_t1

0xc0c0,	// (0x00022fc6) main_vded_pane_t2

0x0001,

0xf81a,	// (0x00026720) main_vded_pane_t

0xc0ce,	// (0x00022fd4) vded_slider_pane

0xc0d8,	// (0x00022fde) vded_video_pane

0x36b0,	// (0x0001a5b6) vded_video_pane_g1

0xc0e4,	// (0x00022fea) vded_video_pane_g2

0x30d0,	// (0x00019fd6) vded_video_pane_g3

0x0002,

0xf81f,	// (0x00026725) vded_video_pane_g

0x36ba,	// (0x0001a5c0) vded_slider_pane_g1

0x2dd9,	// (0x00019cdf) vded_slider_pane_g2

0x36c3,	// (0x0001a5c9) vded_slider_pane_g3

0x36cc,	// (0x0001a5d2) vded_slider_pane_g4

0x36d5,	// (0x0001a5db) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0002672c) vded_slider_pane_g

0xbc40,	// (0x00022b46) mup3_rocker_pane_ParamLimits

0xbc40,	// (0x00022b46) mup3_rocker_pane

0xc0ed,	// (0x00022ff3) mup3_control_keys_pane_g1

0xc0f5,	// (0x00022ffb) mup3_control_keys_pane_g2

0xc0fd,	// (0x00023003) mup3_control_keys_pane_g3

0xc105,	// (0x0002300b) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x00026737) mup3_control_keys_pane_g

0x83e7,	// (0x0001f2ed) popup_toolbar2_fixed_window_cp01_ParamLimits

0x83e7,	// (0x0001f2ed) popup_toolbar2_fixed_window_cp01

0xbc5c,	// (0x00022b62) popup_toolbar2_fixed_window_cp02_ParamLimits

0xbc5c,	// (0x00022b62) popup_toolbar2_fixed_window_cp02

0x1f1f,	// (0x00018e25) popup_call2_audio_second_window_t4_ParamLimits

0x1f1f,	// (0x00018e25) popup_call2_audio_second_window_t4

0x244d,	// (0x00019353) popup_call2_audio_first_window_t6_ParamLimits

0x244d,	// (0x00019353) popup_call2_audio_first_window_t6

0x26e3,	// (0x000195e9) popup_call2_audio_out_window_t6_ParamLimits

0x26e3,	// (0x000195e9) popup_call2_audio_out_window_t6

0x0218,	// (0x0001711e) main_vitu_pane

0xc115,	// (0x0002301b) aid_size_cell_itu_ParamLimits

0xc115,	// (0x0002301b) aid_size_cell_itu

0x3a4d,	// (0x0001a953) bg_popup_window_pane_cp08_ParamLimits

0x3a4d,	// (0x0001a953) bg_popup_window_pane_cp08

0xc123,	// (0x00023029) field_vitu_entry_pane_ParamLimits

0xc123,	// (0x00023029) field_vitu_entry_pane

0xc132,	// (0x00023038) grid_vitu_function_pane_ParamLimits

0xc132,	// (0x00023038) grid_vitu_function_pane

0xc142,	// (0x00023048) grid_vitu_itu_pane_ParamLimits

0xc142,	// (0x00023048) grid_vitu_itu_pane

0xc152,	// (0x00023058) cell_vitu_itu_pane_ParamLimits

0xc152,	// (0x00023058) cell_vitu_itu_pane

0xc169,	// (0x0002306f) cell_vitu_function_pane_ParamLimits

0xc169,	// (0x0002306f) cell_vitu_function_pane

0x0289,	// (0x0001718f) bg_popup_sub_pane_cp08_ParamLimits

0x0289,	// (0x0001718f) bg_popup_sub_pane_cp08

0xc17d,	// (0x00023083) field_vitu_entry_pane_t1_ParamLimits

0xc17d,	// (0x00023083) field_vitu_entry_pane_t1

0x36f6,	// (0x0001a5fc) field_vitu_entry_pane_t2_ParamLimits

0x36f6,	// (0x0001a5fc) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00026745) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00026745) field_vitu_entry_pane_t

0x3713,	// (0x0001a619) bg_button_pane_cp05_ParamLimits

0x3713,	// (0x0001a619) bg_button_pane_cp05

0xc197,	// (0x0002309d) cell_vitu_itu_pane_g1

0xc1af,	// (0x000230b5) cell_vitu_itu_pane_t1_ParamLimits

0xc1af,	// (0x000230b5) cell_vitu_itu_pane_t1

0xc1c1,	// (0x000230c7) cell_vitu_itu_pane_t2_ParamLimits

0xc1c1,	// (0x000230c7) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0002674a) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0002674a) cell_vitu_itu_pane_t

0x3721,	// (0x0001a627) bg_button_pane_cp07

0xc1f6,	// (0x000230fc) cell_vitu_function_pane_g1

0x6d59,	// (0x0001dc5f) main_calc_pane_g1

0x81e8,	// (0x0001f0ee) aid_visual_content_pane

0x0218,	// (0x0001711e) main_vradio_pane

0xc1ff,	// (0x00023105) main_vradio_pane_g1_ParamLimits

0xc1ff,	// (0x00023105) main_vradio_pane_g1

0x372b,	// (0x0001a631) main_vradio_pane_g2_ParamLimits

0x372b,	// (0x0001a631) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x00026751) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x00026751) main_vradio_pane_g

0xc20d,	// (0x00023113) main_vradio_pane_t1_ParamLimits

0xc20d,	// (0x00023113) main_vradio_pane_t1

0xc21f,	// (0x00023125) main_vradio_pane_t2_ParamLimits

0xc21f,	// (0x00023125) main_vradio_pane_t2

0x3738,	// (0x0001a63e) main_vradio_pane_t3_ParamLimits

0x3738,	// (0x0001a63e) main_vradio_pane_t3

0x0002,

0xf850,	// (0x00026756) main_vradio_pane_t_ParamLimits

0xf850,	// (0x00026756) main_vradio_pane_t

0xc231,	// (0x00023137) vradio_rocker_control_pane_ParamLimits

0xc231,	// (0x00023137) vradio_rocker_control_pane

0xc23d,	// (0x00023143) vradio_station_info_pane_ParamLimits

0xc23d,	// (0x00023143) vradio_station_info_pane

0x374c,	// (0x0001a652) vradio_frequency_info_pane_ParamLimits

0x374c,	// (0x0001a652) vradio_frequency_info_pane

0x30d0,	// (0x00019fd6) vradio_station_info_pane_g1

0x375b,	// (0x0001a661) vradio_station_info_pane_t1_ParamLimits

0x375b,	// (0x0001a661) vradio_station_info_pane_t1

0x377d,	// (0x0001a683) vradio_station_info_pane_t2_ParamLimits

0x377d,	// (0x0001a683) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0002675d) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0002675d) vradio_station_info_pane_t

0x378f,	// (0x0001a695) vradio_tuning_pane

0x3797,	// (0x0001a69d) vradio_rocker_control_pane_g1

0x379f,	// (0x0001a6a5) vradio_rocker_control_pane_g2

0x37a7,	// (0x0001a6ad) vradio_rocker_control_pane_g3

0x37af,	// (0x0001a6b5) vradio_rocker_control_pane_g4

0x37b7,	// (0x0001a6bd) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x00026762) vradio_rocker_control_pane_g

0xc24a,	// (0x00023150) vradio_frequency_info_pane_g1

0x37bf,	// (0x0001a6c5) vradio_frequency_info_pane_t1_ParamLimits

0x37bf,	// (0x0001a6c5) vradio_frequency_info_pane_t1

0xc254,	// (0x0002315a) vradio_tuning_pane_g1

0xc25f,	// (0x00023165) vradio_tuning_pane_t1

0x0246,	// (0x0001714c) area_side_right_pane_ParamLimits

0x0246,	// (0x0001714c) area_side_right_pane

0x2b62,	// (0x00019a68) status_small_pane_g1

0x2b6a,	// (0x00019a70) status_small_pane_g2

0x2b73,	// (0x00019a79) status_small_pane_g3

0x2b7c,	// (0x00019a82) status_small_pane_g4

0x0003,

0xf61c,	// (0x00026522) status_small_pane_g

0x2b85,	// (0x00019a8b) status_small_pane_t1

0x0218,	// (0x0001711e) main_video3_pane

0x37d3,	// (0x0001a6d9) cams_zoom_vslider_pane

0x37db,	// (0x0001a6e1) image3_wide_pane_ParamLimits

0x37db,	// (0x0001a6e1) image3_wide_pane

0x37f5,	// (0x0001a6fb) image3_wide_small_pane

0x3801,	// (0x0001a707) main_video3_pane_g1_ParamLimits

0x3801,	// (0x0001a707) main_video3_pane_g1

0x381d,	// (0x0001a723) main_video3_pane_g2_ParamLimits

0x381d,	// (0x0001a723) main_video3_pane_g2

0x0001,

0xf867,	// (0x0002676d) main_video3_pane_g_ParamLimits

0xf867,	// (0x0002676d) main_video3_pane_g

0x3839,	// (0x0001a73f) main_video3_pane_t1_ParamLimits

0x3839,	// (0x0001a73f) main_video3_pane_t1

0x3864,	// (0x0001a76a) main_video3_pane_t2_ParamLimits

0x3864,	// (0x0001a76a) main_video3_pane_t2

0x3891,	// (0x0001a797) main_video3_pane_t3_ParamLimits

0x3891,	// (0x0001a797) main_video3_pane_t3

0x0002,

0xf86c,	// (0x00026772) main_video3_pane_t_ParamLimits

0xf86c,	// (0x00026772) main_video3_pane_t

0x38be,	// (0x0001a7c4) cams_zoom_vslider_pane_g1

0x38c7,	// (0x0001a7cd) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x00026779) cams_zoom_vslider_pane_g

0x38cf,	// (0x0001a7d5) small_slider_vertical_pane

0x30d0,	// (0x00019fd6) small_slider_vertical_pane_g1

0x30d0,	// (0x00019fd6) small_slider_vertical_pane_g2

0x38d7,	// (0x0001a7dd) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0002677e) small_slider_vertical_pane_g

0x0218,	// (0x0001711e) main_hwr_training_pane

0x38e0,	// (0x0001a7e6) hwr_training_instruct_pane_ParamLimits

0x38e0,	// (0x0001a7e6) hwr_training_instruct_pane

0xc26e,	// (0x00023174) hwr_training_navi_pane_ParamLimits

0xc26e,	// (0x00023174) hwr_training_navi_pane

0xc288,	// (0x0002318e) hwr_training_write_pane_ParamLimits

0xc288,	// (0x0002318e) hwr_training_write_pane

0x0218,	// (0x0001711e) bg_frame_shadow_pane

0x3917,	// (0x0001a81d) hwr_training_write_pane_g1

0x391f,	// (0x0001a825) hwr_training_write_pane_g2

0x3927,	// (0x0001a82d) hwr_training_write_pane_g3

0x392f,	// (0x0001a835) hwr_training_write_pane_g4

0x3937,	// (0x0001a83d) hwr_training_write_pane_g5

0x393f,	// (0x0001a845) hwr_training_write_pane_g6

0x3947,	// (0x0001a84d) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x00026785) hwr_training_write_pane_g

0x7513,	// (0x0001e419) hwr_training_navi_pane_g1_ParamLimits

0x7513,	// (0x0001e419) hwr_training_navi_pane_g1

0x7525,	// (0x0001e42b) hwr_training_navi_pane_g2_ParamLimits

0x7525,	// (0x0001e42b) hwr_training_navi_pane_g2

0x7537,	// (0x0001e43d) hwr_training_navi_pane_g3_ParamLimits

0x7537,	// (0x0001e43d) hwr_training_navi_pane_g3

0x7547,	// (0x0001e44d) hwr_training_navi_pane_g4_ParamLimits

0x7547,	// (0x0001e44d) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x00026794) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x00026794) hwr_training_navi_pane_g

0x7561,	// (0x0001e467) hwr_training_navi_pane_t1

0xc2c0,	// (0x000231c6) list_single_hwr_training_instruct_pane_ParamLimits

0xc2c0,	// (0x000231c6) list_single_hwr_training_instruct_pane

0x399e,	// (0x0001a8a4) list_single_hwr_training_instruct_pane_t1

0x3010,	// (0x00019f16) bg_frame_shadow_pane_g1

0x39ad,	// (0x0001a8b3) bg_frame_shadow_pane_g2

0x39b5,	// (0x0001a8bb) bg_frame_shadow_pane_g3

0x39bd,	// (0x0001a8c3) bg_frame_shadow_pane_g4

0x39c5,	// (0x0001a8cb) bg_frame_shadow_pane_g5

0x39cd,	// (0x0001a8d3) bg_frame_shadow_pane_g6

0x39d5,	// (0x0001a8db) bg_frame_shadow_pane_g7

0x0aeb,	// (0x000179f1) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0002679f) bg_frame_shadow_pane_g

0x0218,	// (0x0001711e) main_video_tele_dialer_pane

0x756f,	// (0x0001e475) aid_size_cell_video_keypad_ParamLimits

0x756f,	// (0x0001e475) aid_size_cell_video_keypad

0x757f,	// (0x0001e485) grid_video_dialer_keypad_pane_ParamLimits

0x757f,	// (0x0001e485) grid_video_dialer_keypad_pane

0x75b3,	// (0x0001e4b9) video_down_pane_cp_ParamLimits

0x75b3,	// (0x0001e4b9) video_down_pane_cp

0x75c1,	// (0x0001e4c7) cell_video_dialer_keypad_pane_ParamLimits

0x75c1,	// (0x0001e4c7) cell_video_dialer_keypad_pane

0x39dd,	// (0x0001a8e3) bg_button_pane_cp08_ParamLimits

0x39dd,	// (0x0001a8e3) bg_button_pane_cp08

0xc2fb,	// (0x00023201) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc2fb,	// (0x00023201) cell_video_dialer_keypad_pane_g1

0xbc34,	// (0x00022b3a) mup3_rocker2_pane_ParamLimits

0xbc34,	// (0x00022b3a) mup3_rocker2_pane

0x30d0,	// (0x00019fd6) mup3_rocker2_pane_g1

0xae7a,	// (0x00021d80) main_dialer2_pane

0x0218,	// (0x0001711e) main_mp4_pane

0x75e0,	// (0x0001e4e6) main_mp4_pane_g1_ParamLimits

0x75e0,	// (0x0001e4e6) main_mp4_pane_g1

0x75ee,	// (0x0001e4f4) main_mp4_pane_g2_ParamLimits

0x75ee,	// (0x0001e4f4) main_mp4_pane_g2

0x75fc,	// (0x0001e502) main_mp4_pane_g3_ParamLimits

0x75fc,	// (0x0001e502) main_mp4_pane_g3

0x764f,	// (0x0001e555) main_mp4_pane_g4_ParamLimits

0x764f,	// (0x0001e555) main_mp4_pane_g4

0x7669,	// (0x0001e56f) main_mp4_pane_g5_ParamLimits

0x7669,	// (0x0001e56f) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x000267bf) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x000267bf) main_mp4_pane_g

0x769d,	// (0x0001e5a3) main_mp4_pane_t1_ParamLimits

0x769d,	// (0x0001e5a3) main_mp4_pane_t1

0x76f9,	// (0x0001e5ff) main_mp4_pane_t2_ParamLimits

0x76f9,	// (0x0001e5ff) main_mp4_pane_t2

0x3b24,	// (0x0001aa2a) main_mp4_pane_t3_ParamLimits

0x3b24,	// (0x0001aa2a) main_mp4_pane_t3

0x774b,	// (0x0001e651) main_mp4_pane_t4_ParamLimits

0x774b,	// (0x0001e651) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x000267cc) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x000267cc) main_mp4_pane_t

0x778b,	// (0x0001e691) mp4_progress_pane_ParamLimits

0x778b,	// (0x0001e691) mp4_progress_pane

0x77d5,	// (0x0001e6db) mp4_rocker_pane_ParamLimits

0x77d5,	// (0x0001e6db) mp4_rocker_pane

0x3bf8,	// (0x0001aafe) mp4_progress_pane_t1

0x3c11,	// (0x0001ab17) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x000267d5) mp4_progress_pane_t

0x3c2a,	// (0x0001ab30) mup_progress_pane_cp04

0x46a5,	// (0x0001b5ab) mp4_rocker_pane_g1

0x77f7,	// (0x0001e6fd) aid_cell_size_keypad2_ParamLimits

0x77f7,	// (0x0001e6fd) aid_cell_size_keypad2

0x7807,	// (0x0001e70d) dialer2_ne_pane_ParamLimits

0x7807,	// (0x0001e70d) dialer2_ne_pane

0x7813,	// (0x0001e719) grid_dialer2_keypad_pane_ParamLimits

0x7813,	// (0x0001e719) grid_dialer2_keypad_pane

0x470e,	// (0x0001b614) bg_popup_call_pane_cp07_ParamLimits

0x470e,	// (0x0001b614) bg_popup_call_pane_cp07

0xc336,	// (0x0002323c) dialer2_ne_pane_t1_ParamLimits

0xc336,	// (0x0002323c) dialer2_ne_pane_t1

0x7821,	// (0x0001e727) cell_dialer2_keypad_pane_ParamLimits

0x7821,	// (0x0001e727) cell_dialer2_keypad_pane

0x3c48,	// (0x0001ab4e) bg_button_pane_pane_cp04_ParamLimits

0x3c48,	// (0x0001ab4e) bg_button_pane_pane_cp04

0xc35b,	// (0x00023261) cell_dialer2_keypad_pane_g1_ParamLimits

0xc35b,	// (0x00023261) cell_dialer2_keypad_pane_g1

0x8e43,	// (0x0001fd49) aid_placing_vt_set_content_ParamLimits

0x8e43,	// (0x0001fd49) aid_placing_vt_set_content

0x8e6b,	// (0x0001fd71) aid_placing_vt_set_title_ParamLimits

0x8e6b,	// (0x0001fd71) aid_placing_vt_set_title

0x0218,	// (0x0001711e) main_image3_pane

0x786a,	// (0x0001e770) area_side_right_pane_cp01_ParamLimits

0x786a,	// (0x0001e770) area_side_right_pane_cp01

0x7899,	// (0x0001e79f) main_image3_pane_g1_ParamLimits

0x7899,	// (0x0001e79f) main_image3_pane_g1

0x78a7,	// (0x0001e7ad) main_image3_pane_g2_ParamLimits

0x78a7,	// (0x0001e7ad) main_image3_pane_g2

0x78c0,	// (0x0001e7c6) main_image3_pane_g3_ParamLimits

0x78c0,	// (0x0001e7c6) main_image3_pane_g3

0x78d9,	// (0x0001e7df) main_image3_pane_g4_ParamLimits

0x78d9,	// (0x0001e7df) main_image3_pane_g4

0x0003,

0xf8de,	// (0x000267e4) main_image3_pane_g_ParamLimits

0xf8de,	// (0x000267e4) main_image3_pane_g

0x78f2,	// (0x0001e7f8) main_image3_pane_t1_ParamLimits

0x78f2,	// (0x0001e7f8) main_image3_pane_t1

0x7917,	// (0x0001e81d) main_image3_pane_t2_ParamLimits

0x7917,	// (0x0001e81d) main_image3_pane_t2

0x7936,	// (0x0001e83c) main_image3_pane_t3_ParamLimits

0x7936,	// (0x0001e83c) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x000267ed) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x000267ed) main_image3_pane_t

0x3a4d,	// (0x0001a953) grid_sctrl_middle_pane_cp01_ParamLimits

0x3a4d,	// (0x0001a953) grid_sctrl_middle_pane_cp01

0xc3c3,	// (0x000232c9) cell_sctrl_middle_pane_cp01_ParamLimits

0xc3c3,	// (0x000232c9) cell_sctrl_middle_pane_cp01

0xc3d4,	// (0x000232da) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc3d4,	// (0x000232da) cell_sctrl_middle_pane_cp01_g1

0x0218,	// (0x0001711e) main_call4_pane

0xc3e1,	// (0x000232e7) aid_size_button_call4_ParamLimits

0xc3e1,	// (0x000232e7) aid_size_button_call4

0xc413,	// (0x00023319) call4_windows_pane_ParamLimits

0xc413,	// (0x00023319) call4_windows_pane

0xc42f,	// (0x00023335) grid_call4_button_pane_ParamLimits

0xc42f,	// (0x00023335) grid_call4_button_pane

0x3c88,	// (0x0001ab8e) call4_windows_conf_pane

0x3ca3,	// (0x0001aba9) popup_call4_audio_first_window_ParamLimits

0x3ca3,	// (0x0001aba9) popup_call4_audio_first_window

0x3cf1,	// (0x0001abf7) popup_call4_audio_second_window_ParamLimits

0x3cf1,	// (0x0001abf7) popup_call4_audio_second_window

0x3d07,	// (0x0001ac0d) popup_call4_audio_wait_window_ParamLimits

0x3d07,	// (0x0001ac0d) popup_call4_audio_wait_window

0xc453,	// (0x00023359) cell_call4_button_pane_ParamLimits

0xc453,	// (0x00023359) cell_call4_button_pane

0xc476,	// (0x0002337c) bg_button_pane_cp09_ParamLimits

0xc476,	// (0x0002337c) bg_button_pane_cp09

0xc482,	// (0x00023388) cell_call4_button_pane_g1_ParamLimits

0xc482,	// (0x00023388) cell_call4_button_pane_g1

0xc48f,	// (0x00023395) cell_call4_button_pane_t1_ParamLimits

0xc48f,	// (0x00023395) cell_call4_button_pane_t1

0x3d4f,	// (0x0001ac55) popup_call4_audio_conf_window_ParamLimits

0x3d4f,	// (0x0001ac55) popup_call4_audio_conf_window

0xbc69,	// (0x00022b6f) mup3_progress_pane_t1_ParamLimits

0xbc80,	// (0x00022b86) mup3_progress_pane_t2_ParamLimits

0x33ef,	// (0x0001a2f5) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x000266c6) mup3_progress_pane_t_ParamLimits

0x3406,	// (0x0001a30c) mup_progress_pane_cp03_ParamLimits

0xc10d,	// (0x00023013) mup3_control_keys_pane_g4_copy1

0x77b9,	// (0x0001e6bf) mp4_rocker2_pane_ParamLimits

0x77b9,	// (0x0001e6bf) mp4_rocker2_pane

0x3d71,	// (0x0001ac77) mp4_rocker2_pane_g1

0x3d69,	// (0x0001ac6f) mp4_rocker2_pane_g2

0x7997,	// (0x0001e89d) mp4_rocker2_pane_g3

0x799f,	// (0x0001e8a5) mp4_rocker2_pane_g4

0x79a7,	// (0x0001e8ad) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x000267f6) mp4_rocker2_pane_g

0x0218,	// (0x0001711e) main_camera4_pane

0x0218,	// (0x0001711e) main_video4_pane

0x758f,	// (0x0001e495) main_video_tele_dialer_pane_t1_ParamLimits

0x758f,	// (0x0001e495) main_video_tele_dialer_pane_t1

0x75a1,	// (0x0001e4a7) main_video_tele_dialer_pane_t2_ParamLimits

0x75a1,	// (0x0001e4a7) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x000267b0) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x000267b0) main_video_tele_dialer_pane_t

0x79c7,	// (0x0001e8cd) cam4_autofocus_pane_ParamLimits

0x79c7,	// (0x0001e8cd) cam4_autofocus_pane

0x79df,	// (0x0001e8e5) cam4_image_uncrop_pane_ParamLimits

0x79df,	// (0x0001e8e5) cam4_image_uncrop_pane

0x79f8,	// (0x0001e8fe) cam4_indicators_pane_ParamLimits

0x79f8,	// (0x0001e8fe) cam4_indicators_pane

0x7a14,	// (0x0001e91a) main_camera4_pane_g1_ParamLimits

0x7a14,	// (0x0001e91a) main_camera4_pane_g1

0x7a20,	// (0x0001e926) main_camera4_pane_g2_ParamLimits

0x7a20,	// (0x0001e926) main_camera4_pane_g2

0x7a20,	// (0x0001e926) main_camera4_pane_g3_ParamLimits

0x7a20,	// (0x0001e926) main_camera4_pane_g3

0x7a2c,	// (0x0001e932) main_camera4_pane_g4_ParamLimits

0x7a2c,	// (0x0001e932) main_camera4_pane_g4

0x7a38,	// (0x0001e93e) main_camera4_pane_g5_ParamLimits

0x7a38,	// (0x0001e93e) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x00026801) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x00026801) main_camera4_pane_g

0x7a52,	// (0x0001e958) main_camera4_pane_t1_ParamLimits

0x7a52,	// (0x0001e958) main_camera4_pane_t1

0x7a76,	// (0x0001e97c) bg_tb_trans_pane_cp06

0x7a8c,	// (0x0001e992) cam4_indicators_pane_g1

0x7a99,	// (0x0001e99f) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0002681c) cam4_indicators_pane_g

0x7ab9,	// (0x0001e9bf) cam4_indicators_pane_t1

0x7ae3,	// (0x0001e9e9) main_video4_pane_g1_ParamLimits

0x7ae3,	// (0x0001e9e9) main_video4_pane_g1

0x7aef,	// (0x0001e9f5) main_video4_pane_g2_ParamLimits

0x7aef,	// (0x0001e9f5) main_video4_pane_g2

0x7afb,	// (0x0001ea01) main_video4_pane_g3_ParamLimits

0x7afb,	// (0x0001ea01) main_video4_pane_g3

0x7b07,	// (0x0001ea0d) main_video4_pane_g4_ParamLimits

0x7b07,	// (0x0001ea0d) main_video4_pane_g4

0x0004,

0xf91d,	// (0x00026823) main_video4_pane_g_ParamLimits

0xf91d,	// (0x00026823) main_video4_pane_g

0x7b29,	// (0x0001ea2f) vid4_indicators_pane_ParamLimits

0x7b29,	// (0x0001ea2f) vid4_indicators_pane

0x7b47,	// (0x0001ea4d) video4_image_uncrop_cif_pane_ParamLimits

0x7b47,	// (0x0001ea4d) video4_image_uncrop_cif_pane

0x7b56,	// (0x0001ea5c) video4_image_uncrop_nhd_pane_ParamLimits

0x7b56,	// (0x0001ea5c) video4_image_uncrop_nhd_pane

0x79df,	// (0x0001e8e5) video4_image_uncrop_vga_pane_ParamLimits

0x79df,	// (0x0001e8e5) video4_image_uncrop_vga_pane

0x7b65,	// (0x0001ea6b) bg_tb_trans_pane_cp07

0x7a8c,	// (0x0001e992) vid4_indicators_pane_g1

0x7b7d,	// (0x0001ea83) vid4_indicators_pane_g2

0x7b8a,	// (0x0001ea90) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0002682e) vid4_indicators_pane_g

0x7bb7,	// (0x0001eabd) vid4_indicators_pane_t1

0xc4c7,	// (0x000233cd) cam4_autofocus_pane_g1

0xc4cf,	// (0x000233d5) cam4_autofocus_pane_g2

0xc4d7,	// (0x000233dd) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x00026839) cam4_autofocus_pane_g

0xc4df,	// (0x000233e5) cam4_autofocus_pane_g3_copy1

0xc2df,	// (0x000231e5) video_down_pane_cp_t1

0xc2ed,	// (0x000231f3) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x000267b5) video_down_pane_cp_t

0x3a4d,	// (0x0001a953) popup_vitu2_window_ParamLimits

0x3a4d,	// (0x0001a953) popup_vitu2_window

0x7bd1,	// (0x0001ead7) aid_size_cell2_itu2_ParamLimits

0x7bd1,	// (0x0001ead7) aid_size_cell2_itu2

0x7bf3,	// (0x0001eaf9) aid_size_cell_itu2_ParamLimits

0x7bf3,	// (0x0001eaf9) aid_size_cell_itu2

0x7c37,	// (0x0001eb3d) bg_popup_window_pane_cp09_ParamLimits

0x7c37,	// (0x0001eb3d) bg_popup_window_pane_cp09

0x7c45,	// (0x0001eb4b) field_vitu2_entry_pane_ParamLimits

0x7c45,	// (0x0001eb4b) field_vitu2_entry_pane

0x7c65,	// (0x0001eb6b) grid_vitu2_function_pane_ParamLimits

0x7c65,	// (0x0001eb6b) grid_vitu2_function_pane

0x7ca9,	// (0x0001ebaf) grid_vitu2_itu_pane_ParamLimits

0x7ca9,	// (0x0001ebaf) grid_vitu2_itu_pane

0x7d1d,	// (0x0001ec23) cell_vitu2_itu_pane_ParamLimits

0x7d1d,	// (0x0001ec23) cell_vitu2_itu_pane

0x7d34,	// (0x0001ec3a) cell_vitu2_function_pane_ParamLimits

0x7d34,	// (0x0001ec3a) cell_vitu2_function_pane

0x3e12,	// (0x0001ad18) bg_popup_call_pane_cp08_ParamLimits

0x3e12,	// (0x0001ad18) bg_popup_call_pane_cp08

0x3e2b,	// (0x0001ad31) field_vitu2_entry_pane_g1

0x3e37,	// (0x0001ad3d) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x00026840) field_vitu2_entry_pane_g

0xc4e7,	// (0x000233ed) field_vitu2_entry_pane_t1_ParamLimits

0xc4e7,	// (0x000233ed) field_vitu2_entry_pane_t1

0x3e51,	// (0x0001ad57) field_vitu2_entry_pane_t2_ParamLimits

0x3e51,	// (0x0001ad57) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x00026847) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x00026847) field_vitu2_entry_pane_t

0x7d78,	// (0x0001ec7e) bg_button_pane_cp010_ParamLimits

0x7d78,	// (0x0001ec7e) bg_button_pane_cp010

0x7d86,	// (0x0001ec8c) cell_vitu2_itu_pane_g1

0x7da4,	// (0x0001ecaa) cell_vitu2_itu_pane_t1_ParamLimits

0x7da4,	// (0x0001ecaa) cell_vitu2_itu_pane_t1

0x7df6,	// (0x0001ecfc) cell_vitu2_itu_pane_t2_ParamLimits

0x7df6,	// (0x0001ecfc) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x00026851) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x00026851) cell_vitu2_itu_pane_t

0x7b65,	// (0x0001ea6b) bg_button_pane_cp011

0x7eb1,	// (0x0001edb7) cell_vitu2_function_pane_g1

0x0218,	// (0x0001711e) main_myfav_hc_pane

0x7978,	// (0x0001e87e) popup_image3_note_pane_ParamLimits

0x7978,	// (0x0001e87e) popup_image3_note_pane

0x7986,	// (0x0001e88c) popup_image3_tool_bar_pane_ParamLimits

0x7986,	// (0x0001e88c) popup_image3_tool_bar_pane

0x7e64,	// (0x0001ed6a) cell_vitu2_itu_pane_t3_ParamLimits

0x7e64,	// (0x0001ed6a) cell_vitu2_itu_pane_t3

0x0218,	// (0x0001711e) bg_popup_trans_pane

0x3e76,	// (0x0001ad7c) grid_image3_tool_bar_pane

0x3e80,	// (0x0001ad86) bg_popup_trans_pane_g1

0x0fa8,	// (0x00017eae) bg_popup_trans_pane_g2

0x3e88,	// (0x0001ad8e) bg_popup_trans_pane_g3

0x3e90,	// (0x0001ad96) bg_popup_trans_pane_g4

0x3e98,	// (0x0001ad9e) bg_popup_trans_pane_g5

0x3ea0,	// (0x0001ada6) bg_popup_trans_pane_g6

0x3ea8,	// (0x0001adae) bg_popup_trans_pane_g7

0x3eb0,	// (0x0001adb6) bg_popup_trans_pane_g8

0x0f88,	// (0x00017e8e) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00026858) bg_popup_trans_pane_g

0x3eb8,	// (0x0001adbe) cell_image3_tool_bar_pane_ParamLimits

0x3eb8,	// (0x0001adbe) cell_image3_tool_bar_pane

0x30d0,	// (0x00019fd6) cell_image3_tool_bar_pane_g1

0x0218,	// (0x0001711e) bg_popup_trans_pane_cp1

0x3ece,	// (0x0001add4) popup_image3_note_pane_t1

0x3edc,	// (0x0001ade2) popup_image3_note_pane_t2

0x3eea,	// (0x0001adf0) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0002686b) popup_image3_note_pane_t

0x3efa,	// (0x0001ae00) popup_image3_note_pane_t3_copy1

0xc502,	// (0x00023408) bg_myfav_hc_instruction_pane_ParamLimits

0xc502,	// (0x00023408) bg_myfav_hc_instruction_pane

0xc51a,	// (0x00023420) cell_myfav_contact_pane_ParamLimits

0xc51a,	// (0x00023420) cell_myfav_contact_pane

0xc534,	// (0x0002343a) cell_myfav_contact_pane_cp1_ParamLimits

0xc534,	// (0x0002343a) cell_myfav_contact_pane_cp1

0xc54c,	// (0x00023452) cell_myfav_contact_pane_cp2_ParamLimits

0xc54c,	// (0x00023452) cell_myfav_contact_pane_cp2

0xc564,	// (0x0002346a) cell_myfav_contact_pane_cp3_ParamLimits

0xc564,	// (0x0002346a) cell_myfav_contact_pane_cp3

0xc57b,	// (0x00023481) cell_myfav_contact_pane_cp4_ParamLimits

0xc57b,	// (0x00023481) cell_myfav_contact_pane_cp4

0xc591,	// (0x00023497) cell_myfav_contact_pane_cp5_ParamLimits

0xc591,	// (0x00023497) cell_myfav_contact_pane_cp5

0xc5a5,	// (0x000234ab) cell_myfav_contact_pane_cp6_ParamLimits

0xc5a5,	// (0x000234ab) cell_myfav_contact_pane_cp6

0xc5b9,	// (0x000234bf) cell_myfav_contact_pane_cp7_ParamLimits

0xc5b9,	// (0x000234bf) cell_myfav_contact_pane_cp7

0x3f08,	// (0x0001ae0e) listscroll_gen_pane_cp05

0xc5d1,	// (0x000234d7) main_myfav_hc_pane_g1_ParamLimits

0xc5d1,	// (0x000234d7) main_myfav_hc_pane_g1

0xc5eb,	// (0x000234f1) main_myfav_hc_pane_g2_ParamLimits

0xc5eb,	// (0x000234f1) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x00026872) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x00026872) main_myfav_hc_pane_g

0xc61d,	// (0x00023523) main_myfav_hc_pane_t1_ParamLimits

0xc61d,	// (0x00023523) main_myfav_hc_pane_t1

0x3f11,	// (0x0001ae17) main_myfav_hc_pane_t2_ParamLimits

0x3f11,	// (0x0001ae17) main_myfav_hc_pane_t2

0x3f23,	// (0x0001ae29) main_myfav_hc_pane_t3_ParamLimits

0x3f23,	// (0x0001ae29) main_myfav_hc_pane_t3

0xc634,	// (0x0002353a) main_myfav_hc_pane_t4_ParamLimits

0xc634,	// (0x0002353a) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x00026879) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x00026879) main_myfav_hc_pane_t

0x30d0,	// (0x00019fd6) bg_myfav_hc_instruction_pane_g1

0x3f35,	// (0x0001ae3b) cell_myfav_contact_pane_g1_ParamLimits

0x3f35,	// (0x0001ae3b) cell_myfav_contact_pane_g1

0x3f35,	// (0x0001ae3b) cell_myfav_contact_pane_g2_ParamLimits

0x3f35,	// (0x0001ae3b) cell_myfav_contact_pane_g2

0x3f41,	// (0x0001ae47) cell_myfav_contact_pane_g3_ParamLimits

0x3f41,	// (0x0001ae47) cell_myfav_contact_pane_g3

0x33d9,	// (0x0001a2df) cell_myfav_contact_pane_g4_ParamLimits

0x33d9,	// (0x0001a2df) cell_myfav_contact_pane_g4

0x3f4e,	// (0x0001ae54) cell_myfav_contact_pane_g5_ParamLimits

0x3f4e,	// (0x0001ae54) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x00026884) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x00026884) cell_myfav_contact_pane_g

0xc605,	// (0x0002350b) main_myfav_hc_pane_g3_ParamLimits

0xc605,	// (0x0002350b) main_myfav_hc_pane_g3

0x832a,	// (0x0001f230) popup_adpt_find_window

0xc65e,	// (0x00023564) afind_page_pane_ParamLimits

0xc65e,	// (0x00023564) afind_page_pane

0xc66b,	// (0x00023571) aid_size_cell_afind_ParamLimits

0xc66b,	// (0x00023571) aid_size_cell_afind

0xc685,	// (0x0002358b) bg_popup_sub_pane_cp09_ParamLimits

0xc685,	// (0x0002358b) bg_popup_sub_pane_cp09

0xc692,	// (0x00023598) find_pane_cp01_ParamLimits

0xc692,	// (0x00023598) find_pane_cp01

0x3f5a,	// (0x0001ae60) grid_afind_control_pane_ParamLimits

0x3f5a,	// (0x0001ae60) grid_afind_control_pane

0xc69f,	// (0x000235a5) grid_afind_pane_ParamLimits

0xc69f,	// (0x000235a5) grid_afind_pane

0xc6bb,	// (0x000235c1) cell_afind_pane_ParamLimits

0xc6bb,	// (0x000235c1) cell_afind_pane

0x30d0,	// (0x00019fd6) afind_page_pane_g1

0xc707,	// (0x0002360d) afind_page_pane_g2

0xc710,	// (0x00023616) afind_page_pane_g3

0x0002,

0xf989,	// (0x0002688f) afind_page_pane_g

0xc719,	// (0x0002361f) afind_page_pane_t1

0x3f6e,	// (0x0001ae74) cell_afind_grid_control_pane_ParamLimits

0x3f6e,	// (0x0001ae74) cell_afind_grid_control_pane

0x3c48,	// (0x0001ab4e) bg_button_pane_cp69_ParamLimits

0x3c48,	// (0x0001ab4e) bg_button_pane_cp69

0xc739,	// (0x0002363f) cell_afind_pane_g1_ParamLimits

0xc739,	// (0x0002363f) cell_afind_pane_g1

0xc746,	// (0x0002364c) cell_afind_pane_t1_ParamLimits

0xc746,	// (0x0002364c) cell_afind_pane_t1

0x0ce1,	// (0x00017be7) bg_button_pane_cp72

0x3f7d,	// (0x0001ae83) cell_afind_grid_control_pane_g1

0xa9f2,	// (0x000218f8) aid_image_placing_area_ParamLimits

0xa9f2,	// (0x000218f8) aid_image_placing_area

0x36de,	// (0x0001a5e4) field_vitu_entry_pane_g1_ParamLimits

0x36de,	// (0x0001a5e4) field_vitu_entry_pane_g1

0x36ea,	// (0x0001a5f0) field_vitu_entry_pane_g2_ParamLimits

0x36ea,	// (0x0001a5f0) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x00026740) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x00026740) field_vitu_entry_pane_g

0xc197,	// (0x0002309d) cell_vitu_itu_pane_g1_ParamLimits

0xc1d9,	// (0x000230df) cell_vitu_itu_pane_t3_ParamLimits

0xc1d9,	// (0x000230df) cell_vitu_itu_pane_t3

0x3bf8,	// (0x0001aafe) mp4_progress_pane_t1_ParamLimits

0x3c11,	// (0x0001ab17) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x000267d5) mp4_progress_pane_t_ParamLimits

0x3c2a,	// (0x0001ab30) mup_progress_pane_cp04_ParamLimits

0xc648,	// (0x0002354e) main_myfav_hc_pane_t5_ParamLimits

0xc648,	// (0x0002354e) main_myfav_hc_pane_t5

0x023e,	// (0x00017144) aid_zoom_text_primary

0x832a,	// (0x0001f230) popup_adpt_find_window_ParamLimits

0x0289,	// (0x0001718f) main_cam_set_pane

0x7a06,	// (0x0001e90c) cam4_zoom_pane_ParamLimits

0x7a06,	// (0x0001e90c) cam4_zoom_pane

0xc758,	// (0x0002365e) main_cam_set_pane_g1_ParamLimits

0xc758,	// (0x0002365e) main_cam_set_pane_g1

0xc766,	// (0x0002366c) main_cam_set_pane_g2_ParamLimits

0xc766,	// (0x0002366c) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x00026896) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x00026896) main_cam_set_pane_g

0xc772,	// (0x00023678) main_cam_set_pane_t1_ParamLimits

0xc772,	// (0x00023678) main_cam_set_pane_t1

0xc78e,	// (0x00023694) main_cset_listscroll_pane_ParamLimits

0xc78e,	// (0x00023694) main_cset_listscroll_pane

0xc7bd,	// (0x000236c3) main_cset_slider_pane_ParamLimits

0xc7bd,	// (0x000236c3) main_cset_slider_pane

0x3f8e,	// (0x0001ae94) main_cset_list_pane_ParamLimits

0x3f8e,	// (0x0001ae94) main_cset_list_pane

0x3f9e,	// (0x0001aea4) scroll_pane_cp028

0xc7de,	// (0x000236e4) aid_area_touch_slider

0xc7fa,	// (0x00023700) cset_slider_pane

0xc824,	// (0x0002372a) main_cset_slider_pane_g1

0xc839,	// (0x0002373f) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0002689b) main_cset_slider_pane_g

0x3fd7,	// (0x0001aedd) main_cset_slider_pane_t1

0xc8f5,	// (0x000237fb) main_cset_slider_pane_t2

0xc90f,	// (0x00023815) main_cset_slider_pane_t3

0xc929,	// (0x0002382f) main_cset_slider_pane_t4

0xc943,	// (0x00023849) main_cset_slider_pane_t5

0xc95f,	// (0x00023865) main_cset_slider_pane_t6

0xc974,	// (0x0002387a) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x000268c0) main_cset_slider_pane_t

0xca78,	// (0x0002397e) cset_list_set_pane_ParamLimits

0xca78,	// (0x0002397e) cset_list_set_pane

0xca89,	// (0x0002398f) aid_position_infowindow_above

0xca91,	// (0x00023997) aid_position_infowindow_below

0x4077,	// (0x0001af7d) cset_list_set_pane_g1_ParamLimits

0x4077,	// (0x0001af7d) cset_list_set_pane_g1

0x4918,	// (0x0001b81e) cset_list_set_pane_g3_ParamLimits

0x4918,	// (0x0001b81e) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x000268df) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x000268df) cset_list_set_pane_g

0x4927,	// (0x0001b82d) cset_list_set_pane_t1_ParamLimits

0x4927,	// (0x0001b82d) cset_list_set_pane_t1

0x0289,	// (0x0001718f) list_highlight_pane_cp021_ParamLimits

0x0289,	// (0x0001718f) list_highlight_pane_cp021

0x1886,	// (0x0001878c) cset_slider_pane_g1

0x1898,	// (0x0001879e) cset_slider_pane_g2

0x188f,	// (0x00018795) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x000268e4) cset_slider_pane_g

0x7ec5,	// (0x0001edcb) aid_area_touch_cam4_zoom

0x7ecd,	// (0x0001edd3) cam4_zoom_cont_pane

0x7ed5,	// (0x0001eddb) cam4_zoom_pane_g1

0x7edd,	// (0x0001ede3) cam4_zoom_pane_g2

0x7ee5,	// (0x0001edeb) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x000268eb) cam4_zoom_pane_g

0x7eed,	// (0x0001edf3) cam4_zoom_cont_pane_g1

0x7ef6,	// (0x0001edfc) cam4_zoom_cont_pane_g2

0x7eff,	// (0x0001ee05) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x000268f2) cam4_zoom_cont_pane_g

0xc3fb,	// (0x00023301) call4_image_pane_ParamLimits

0xc3fb,	// (0x00023301) call4_image_pane

0x3c88,	// (0x0001ab8e) call4_windows_conf_pane_ParamLimits

0x3ccf,	// (0x0001abd5) popup_call4_audio_in_window_ParamLimits

0x3ccf,	// (0x0001abd5) popup_call4_audio_in_window

0x0218,	// (0x0001711e) bg_popup_call2_act_pane_cp02

0x3d47,	// (0x0001ac4d) call4_list_conf_pane

0x30d0,	// (0x00019fd6) call4_image_pane_g1

0x30d0,	// (0x00019fd6) call4_image_pane_g2

0x0001,

0xf700,	// (0x00026606) call4_image_pane_g

0x40be,	// (0x0001afc4) list_single_graphic_popup_conf4_pane_ParamLimits

0x40be,	// (0x0001afc4) list_single_graphic_popup_conf4_pane

0x0218,	// (0x0001711e) list_highlight_pane_cp022

0x40d3,	// (0x0001afd9) list_single_graphic_popup_conf4_pane_g1

0x1560,	// (0x00018466) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x000268f9) list_single_graphic_popup_conf4_pane_g

0x40db,	// (0x0001afe1) list_single_graphic_popup_conf4_pane_t1

0x8fc5,	// (0x0001fecb) popup_vtel_slider_window_ParamLimits

0x8fc5,	// (0x0001fecb) popup_vtel_slider_window

0x3c36,	// (0x0001ab3c) dialer2_ne_pane_t2_ParamLimits

0x3c36,	// (0x0001ab3c) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x000267da) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x000267da) dialer2_ne_pane_t

0x0289,	// (0x0001718f) bg_popup_sub_pane_cp010_ParamLimits

0x0289,	// (0x0001718f) bg_popup_sub_pane_cp010

0xca99,	// (0x0002399f) popup_vtel_slider_window_g1_ParamLimits

0xca99,	// (0x0002399f) popup_vtel_slider_window_g1

0xcaa5,	// (0x000239ab) popup_vtel_slider_window_g2_ParamLimits

0xcaa5,	// (0x000239ab) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x000268fe) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x000268fe) popup_vtel_slider_window_g

0xcaed,	// (0x000239f3) vtel_slider_pane_ParamLimits

0xcaed,	// (0x000239f3) vtel_slider_pane

0xcafc,	// (0x00023a02) vtel_slider_pane_g1_ParamLimits

0xcafc,	// (0x00023a02) vtel_slider_pane_g1

0xcb09,	// (0x00023a0f) vtel_slider_pane_g2_ParamLimits

0xcb09,	// (0x00023a0f) vtel_slider_pane_g2

0xcb16,	// (0x00023a1c) vtel_slider_pane_g3_ParamLimits

0xcb16,	// (0x00023a1c) vtel_slider_pane_g3

0xcafc,	// (0x00023a02) vtel_slider_pane_g4_ParamLimits

0xcafc,	// (0x00023a02) vtel_slider_pane_g4

0xcb23,	// (0x00023a29) vtel_slider_pane_g5_ParamLimits

0xcb23,	// (0x00023a29) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00026907) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00026907) vtel_slider_pane_g

0x0218,	// (0x0001711e) main_gallery2_pane

0x7c19,	// (0x0001eb1f) aid_size_row_itut2_dropdow_list_ParamLimits

0x7c19,	// (0x0001eb1f) aid_size_row_itut2_dropdow_list

0x7c87,	// (0x0001eb8d) grid_vitu2_function_top_pane_ParamLimits

0x7c87,	// (0x0001eb8d) grid_vitu2_function_top_pane

0x7cd9,	// (0x0001ebdf) popup_vitu2_dropdown_list_window_ParamLimits

0x7cd9,	// (0x0001ebdf) popup_vitu2_dropdown_list_window

0x7cf9,	// (0x0001ebff) popup_vitu2_match_list_window

0x7f08,	// (0x0001ee0e) cell_vitu2_function_top_pane_ParamLimits

0x7f08,	// (0x0001ee0e) cell_vitu2_function_top_pane

0x7f28,	// (0x0001ee2e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7f28,	// (0x0001ee2e) cell_vitu2_function_top_pane_cp01

0x7f46,	// (0x0001ee4c) cell_vitu2_function_top_wide_pane_ParamLimits

0x7f46,	// (0x0001ee4c) cell_vitu2_function_top_wide_pane

0x7b65,	// (0x0001ea6b) bg_button_pane_cp012

0x7f64,	// (0x0001ee6a) cell_vitu2_function_top_pane_g1

0x7f73,	// (0x0001ee79) bg_button_pane_cp013_ParamLimits

0x7f73,	// (0x0001ee79) bg_button_pane_cp013

0xcb30,	// (0x00023a36) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcb30,	// (0x00023a36) cell_vitu2_function_top_wide_pane_g1

0x7f8f,	// (0x0001ee95) bg_popup_sub_pane_cp20

0x7f9d,	// (0x0001eea3) list_vitu2_match_list_pane

0x3e80,	// (0x0001ad86) bg_popup_sub_pane_cp20_g1

0x3e88,	// (0x0001ad8e) bg_popup_sub_pane_cp20_g2

0x0fa8,	// (0x00017eae) bg_popup_sub_pane_cp20_g3

0x3e90,	// (0x0001ad96) bg_popup_sub_pane_cp20_g4

0x0f88,	// (0x00017e8e) bg_popup_sub_pane_cp20_g5

0x411b,	// (0x0001b021) bg_popup_sub_pane_cp20_g6

0x3ea0,	// (0x0001ada6) bg_popup_sub_pane_cp20_g7

0x3ea8,	// (0x0001adae) bg_popup_sub_pane_cp20_g8

0x3eb0,	// (0x0001adb6) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x00026912) bg_popup_sub_pane_cp20_g

0x7fb5,	// (0x0001eebb) list_vitu2_match_list_item_pane_ParamLimits

0x7fb5,	// (0x0001eebb) list_vitu2_match_list_item_pane

0x7fc7,	// (0x0001eecd) list_vitu2_match_list_item_pane_t1

0x6d61,	// (0x0001dc67) bg_popup_sub_pane_cp21

0x7fd5,	// (0x0001eedb) grid_vitu2_dropdown_list_pane

0x7fdd,	// (0x0001eee3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7fdd,	// (0x0001eee3) cell_vitu2_dropdown_list_char_pane

0x8002,	// (0x0001ef08) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8002,	// (0x0001ef08) cell_vitu2_dropdown_list_ctrl_pane

0x416d,	// (0x0001b073) cell_vitu2_dropdown_list_char_pane_g1

0x4164,	// (0x0001b06a) cell_vitu2_dropdown_list_char_pane_g2

0x415b,	// (0x0001b061) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0002692f) cell_vitu2_dropdown_list_char_pane_g

0x8030,	// (0x0001ef36) cell_vitu2_dropdown_list_char_pane_t1

0xcb74,	// (0x00023a7a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcb74,	// (0x00023a7a) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcb84,	// (0x00023a8a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcb84,	// (0x00023a8a) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcb95,	// (0x00023a9b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcb95,	// (0x00023a9b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x803e,	// (0x0001ef44) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x803e,	// (0x0001ef44) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7a76,	// (0x0001e97c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7a76,	// (0x0001e97c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x00026936) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x00026936) cell_vitu2_dropdown_list_ctrl_pane_g

0xcba5,	// (0x00023aab) aid_size_cell_gallery2_ParamLimits

0xcba5,	// (0x00023aab) aid_size_cell_gallery2

0xcbb3,	// (0x00023ab9) grid_gallery2_pane_ParamLimits

0xcbb3,	// (0x00023ab9) grid_gallery2_pane

0xcbc2,	// (0x00023ac8) scroll_pane_cp029_ParamLimits

0xcbc2,	// (0x00023ac8) scroll_pane_cp029

0xcbce,	// (0x00023ad4) cell_gallery2_pane_ParamLimits

0xcbce,	// (0x00023ad4) cell_gallery2_pane

0x4176,	// (0x0001b07c) cell_gallery2_pane_g2

0xcbf8,	// (0x00023afe) cell_gallery2_pane_g3

0x4180,	// (0x0001b086) cell_gallery2_pane_g4

0x4188,	// (0x0001b08e) cell_gallery2_pane_g5

0x172e,	// (0x00018634) grid_highlight_pane_cp10

0x7cf9,	// (0x0001ebff) popup_vitu2_match_list_window_ParamLimits

0x7d0d,	// (0x0001ec13) popup_vitu2_query_window_ParamLimits

0x7d0d,	// (0x0001ec13) popup_vitu2_query_window

0x6d61,	// (0x0001dc67) bg_vitu2_candi_button_pane

0x416d,	// (0x0001b073) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x4164,	// (0x0001b06a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x415b,	// (0x0001b061) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xcc00,	// (0x00023b06) bg_button_pane_cp015

0xcc12,	// (0x00023b18) bg_button_pane_cp016

0xcc25,	// (0x00023b2b) bg_button_pane_cp017

0x2b9b,	// (0x00019aa1) bg_popup_sub_pane_cp22

0x4190,	// (0x0001b096) popup_vitu2_query_window_g1

0xcc6a,	// (0x00023b70) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x00026941) popup_vitu2_query_window_g

0xcc87,	// (0x00023b8d) popup_vitu2_query_window_t1_ParamLimits

0xcc87,	// (0x00023b8d) popup_vitu2_query_window_t1

0xccba,	// (0x00023bc0) popup_vitu2_query_window_t2_ParamLimits

0xccba,	// (0x00023bc0) popup_vitu2_query_window_t2

0xcccc,	// (0x00023bd2) popup_vitu2_query_window_t3_ParamLimits

0xcccc,	// (0x00023bd2) popup_vitu2_query_window_t3

0xccf4,	// (0x00023bfa) popup_vitu2_query_window_t4_ParamLimits

0xccf4,	// (0x00023bfa) popup_vitu2_query_window_t4

0xcd17,	// (0x00023c1d) popup_vitu2_query_window_t5_ParamLimits

0xcd17,	// (0x00023c1d) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x00026948) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x00026948) popup_vitu2_query_window_t

0x3f86,	// (0x0001ae8c) main_cset_text_pane

0xc7de,	// (0x000236e4) aid_area_touch_slider_ParamLimits

0xc7fa,	// (0x00023700) cset_slider_pane_ParamLimits

0xc824,	// (0x0002372a) main_cset_slider_pane_g1_ParamLimits

0xc839,	// (0x0002373f) main_cset_slider_pane_g2_ParamLimits

0x3fa7,	// (0x0001aead) main_cset_slider_pane_g3_ParamLimits

0x3fa7,	// (0x0001aead) main_cset_slider_pane_g3

0xc84e,	// (0x00023754) main_cset_slider_pane_g4_ParamLimits

0xc84e,	// (0x00023754) main_cset_slider_pane_g4

0xc85d,	// (0x00023763) main_cset_slider_pane_g5_ParamLimits

0xc85d,	// (0x00023763) main_cset_slider_pane_g5

0xc869,	// (0x0002376f) main_cset_slider_pane_g6_ParamLimits

0xc869,	// (0x0002376f) main_cset_slider_pane_g6

0xf995,	// (0x0002689b) main_cset_slider_pane_g_ParamLimits

0x3fd7,	// (0x0001aedd) main_cset_slider_pane_t1_ParamLimits

0xc8f5,	// (0x000237fb) main_cset_slider_pane_t2_ParamLimits

0xc90f,	// (0x00023815) main_cset_slider_pane_t3_ParamLimits

0xc929,	// (0x0002382f) main_cset_slider_pane_t4_ParamLimits

0xc943,	// (0x00023849) main_cset_slider_pane_t5_ParamLimits

0xc95f,	// (0x00023865) main_cset_slider_pane_t6_ParamLimits

0xc974,	// (0x0002387a) main_cset_slider_pane_t7_ParamLimits

0xc99e,	// (0x000238a4) main_cset_slider_pane_t8_ParamLimits

0xc99e,	// (0x000238a4) main_cset_slider_pane_t8

0xc9c6,	// (0x000238cc) main_cset_slider_pane_t9_ParamLimits

0xc9c6,	// (0x000238cc) main_cset_slider_pane_t9

0xc9ee,	// (0x000238f4) main_cset_slider_pane_t10_ParamLimits

0xc9ee,	// (0x000238f4) main_cset_slider_pane_t10

0xca16,	// (0x0002391c) main_cset_slider_pane_t11_ParamLimits

0xca16,	// (0x0002391c) main_cset_slider_pane_t11

0xca3e,	// (0x00023944) main_cset_slider_pane_t12_ParamLimits

0xca3e,	// (0x00023944) main_cset_slider_pane_t12

0xca5b,	// (0x00023961) main_cset_slider_pane_t13_ParamLimits

0xca5b,	// (0x00023961) main_cset_slider_pane_t13

0xf9ba,	// (0x000268c0) main_cset_slider_pane_t_ParamLimits

0x0218,	// (0x0001711e) bg_popup_sub_pane_cp011

0x419c,	// (0x0001b0a2) main_cset_text_pane_g1

0x41a4,	// (0x0001b0aa) main_cset_text_pane_t1

0x41b2,	// (0x0001b0b8) main_cset_text_pane_t2

0x41c0,	// (0x0001b0c6) main_cset_text_pane_t3

0x41ce,	// (0x0001b0d4) main_cset_text_pane_t4

0x41dc,	// (0x0001b0e2) main_cset_text_pane_t5

0x41ea,	// (0x0001b0f0) main_cset_text_pane_t6

0x41f8,	// (0x0001b0fe) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x00026957) main_cset_text_pane_t

0x0218,	// (0x0001711e) main_cam4_burst_pane

0x0218,	// (0x0001711e) main_cam5_pane

0xc727,	// (0x0002362d) bg_button_pane_cp019

0xc730,	// (0x00023636) bg_button_pane_cp020

0x3fb3,	// (0x0001aeb9) main_cset_slider_pane_g7_ParamLimits

0x3fb3,	// (0x0001aeb9) main_cset_slider_pane_g7

0x3fbf,	// (0x0001aec5) main_cset_slider_pane_g8_ParamLimits

0x3fbf,	// (0x0001aec5) main_cset_slider_pane_g8

0xc87d,	// (0x00023783) main_cset_slider_pane_g9_ParamLimits

0xc87d,	// (0x00023783) main_cset_slider_pane_g9

0xc889,	// (0x0002378f) main_cset_slider_pane_g10_ParamLimits

0xc889,	// (0x0002378f) main_cset_slider_pane_g10

0xc895,	// (0x0002379b) main_cset_slider_pane_g11_ParamLimits

0xc895,	// (0x0002379b) main_cset_slider_pane_g11

0xc8a1,	// (0x000237a7) main_cset_slider_pane_g12_ParamLimits

0xc8a1,	// (0x000237a7) main_cset_slider_pane_g12

0xc8ad,	// (0x000237b3) main_cset_slider_pane_g13_ParamLimits

0xc8ad,	// (0x000237b3) main_cset_slider_pane_g13

0xc8b9,	// (0x000237bf) main_cset_slider_pane_g14_ParamLimits

0xc8b9,	// (0x000237bf) main_cset_slider_pane_g14

0xc8c5,	// (0x000237cb) main_cset_slider_pane_g15_ParamLimits

0xc8c5,	// (0x000237cb) main_cset_slider_pane_g15

0x4005,	// (0x0001af0b) main_cset_slider_pane_t14_ParamLimits

0x4005,	// (0x0001af0b) main_cset_slider_pane_t14

0x403e,	// (0x0001af44) main_cset_slider_pane_t15_ParamLimits

0x403e,	// (0x0001af44) main_cset_slider_pane_t15

0xcd90,	// (0x00023c96) aid_cam4_burst_size_cell_ParamLimits

0xcd90,	// (0x00023c96) aid_cam4_burst_size_cell

0xcdac,	// (0x00023cb2) grid_cam4_burst_pane_ParamLimits

0xcdac,	// (0x00023cb2) grid_cam4_burst_pane

0xcdde,	// (0x00023ce4) linegrid_cam4_burst_pane_ParamLimits

0xcdde,	// (0x00023ce4) linegrid_cam4_burst_pane

0xcdfe,	// (0x00023d04) scroll_pane_cp30_ParamLimits

0xcdfe,	// (0x00023d04) scroll_pane_cp30

0xce0a,	// (0x00023d10) cell_cam4_burst_pane_ParamLimits

0xce0a,	// (0x00023d10) cell_cam4_burst_pane

0x4212,	// (0x0001b118) linegrid_cam4_burst_pane_g1_ParamLimits

0x4212,	// (0x0001b118) linegrid_cam4_burst_pane_g1

0xce4a,	// (0x00023d50) linegrid_cam4_burst_pane_g2_ParamLimits

0xce4a,	// (0x00023d50) linegrid_cam4_burst_pane_g2

0x421f,	// (0x0001b125) linegrid_cam4_burst_pane_g3_ParamLimits

0x421f,	// (0x0001b125) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x00026966) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x00026966) linegrid_cam4_burst_pane_g

0xce5b,	// (0x00023d61) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xce5b,	// (0x00023d61) linegrid_cam4_burst_pane_g3_copy1

0x422c,	// (0x0001b132) linegrid_cam4_burst_pane_g4_ParamLimits

0x422c,	// (0x0001b132) linegrid_cam4_burst_pane_g4

0xce75,	// (0x00023d7b) linegrid_cam4_burst_pane_g5_ParamLimits

0xce75,	// (0x00023d7b) linegrid_cam4_burst_pane_g5

0xce86,	// (0x00023d8c) linegrid_cam4_burst_pane_g6_ParamLimits

0xce86,	// (0x00023d8c) linegrid_cam4_burst_pane_g6

0x4239,	// (0x0001b13f) linegrid_cam4_burst_pane_g7_ParamLimits

0x4239,	// (0x0001b13f) linegrid_cam4_burst_pane_g7

0xce9d,	// (0x00023da3) cell_cam4_burst_pane_g1

0x4252,	// (0x0001b158) main_cam5_pane_t1_ParamLimits

0x4252,	// (0x0001b158) main_cam5_pane_t1

0x4264,	// (0x0001b16a) main_cam5_pane_t2_ParamLimits

0x4264,	// (0x0001b16a) main_cam5_pane_t2

0x4276,	// (0x0001b17c) main_cam5_pane_t3_ParamLimits

0x4276,	// (0x0001b17c) main_cam5_pane_t3

0x4288,	// (0x0001b18e) main_cam5_pane_t4_ParamLimits

0x4288,	// (0x0001b18e) main_cam5_pane_t4

0x42a0,	// (0x0001b1a6) main_cam5_pane_t5_ParamLimits

0x42a0,	// (0x0001b1a6) main_cam5_pane_t5

0x42b4,	// (0x0001b1ba) main_cam5_pane_t6_ParamLimits

0x42b4,	// (0x0001b1ba) main_cam5_pane_t6

0x42c8,	// (0x0001b1ce) main_cam5_pane_t7_ParamLimits

0x42c8,	// (0x0001b1ce) main_cam5_pane_t7

0x42da,	// (0x0001b1e0) main_cam5_pane_t8_ParamLimits

0x42da,	// (0x0001b1e0) main_cam5_pane_t8

0x42f8,	// (0x0001b1fe) main_cam5_pane_t9_ParamLimits

0x42f8,	// (0x0001b1fe) main_cam5_pane_t9

0x430a,	// (0x0001b210) main_cam5_pane_t10_ParamLimits

0x430a,	// (0x0001b210) main_cam5_pane_t10

0x431c,	// (0x0001b222) main_cam5_pane_t11_ParamLimits

0x431c,	// (0x0001b222) main_cam5_pane_t11

0x4330,	// (0x0001b236) main_cam5_pane_t12_ParamLimits

0x4330,	// (0x0001b236) main_cam5_pane_t12

0x4347,	// (0x0001b24d) main_cam5_pane_t13_ParamLimits

0x4347,	// (0x0001b24d) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x00026972) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x00026972) main_cam5_pane_t

0x83d8,	// (0x0001f2de) popup_scut_keymap_window_ParamLimits

0x83d8,	// (0x0001f2de) popup_scut_keymap_window

0xceb0,	// (0x00023db6) aid_size_cell_brow_shortcut

0x172e,	// (0x00018634) bg_popup_window_pane_cp010

0xcebc,	// (0x00023dc2) grid_scut_pane

0xcec8,	// (0x00023dce) cell_scut_pane_ParamLimits

0xcec8,	// (0x00023dce) cell_scut_pane

0xcee3,	// (0x00023de9) cell_scut_pane_g1

0x436a,	// (0x0001b270) cell_scut_pane_t1

0x4379,	// (0x0001b27f) cell_scut_pane_t2

0xceec,	// (0x00023df2) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0002698d) cell_scut_pane_t

0xb895,	// (0x0002279b) main_mup3_pane_g8_ParamLimits

0xb895,	// (0x0002279b) main_mup3_pane_g8

0x7c27,	// (0x0001eb2d) area_vitu2_query_pane_ParamLimits

0x7c27,	// (0x0001eb2d) area_vitu2_query_pane

0xcc38,	// (0x00023b3e) input_focus_pane_cp08

0x4388,	// (0x0001b28e) area_vitu2_query_pane_g1

0xcefa,	// (0x00023e00) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x00026994) area_vitu2_query_pane_g

0xcf0b,	// (0x00023e11) area_vitu2_query_pane_t1_ParamLimits

0xcf0b,	// (0x00023e11) area_vitu2_query_pane_t1

0xcf1f,	// (0x00023e25) area_vitu2_query_pane_t2_ParamLimits

0xcf1f,	// (0x00023e25) area_vitu2_query_pane_t2

0xcf33,	// (0x00023e39) area_vitu2_query_pane_t3_ParamLimits

0xcf33,	// (0x00023e39) area_vitu2_query_pane_t3

0x4394,	// (0x0001b29a) area_vitu2_query_pane_t4_ParamLimits

0x4394,	// (0x0001b29a) area_vitu2_query_pane_t4

0x43bc,	// (0x0001b2c2) area_vitu2_query_pane_t5_ParamLimits

0x43bc,	// (0x0001b2c2) area_vitu2_query_pane_t5

0x43e4,	// (0x0001b2ea) area_vitu2_query_pane_t6_ParamLimits

0x43e4,	// (0x0001b2ea) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x00026999) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x00026999) area_vitu2_query_pane_t

0xcf5b,	// (0x00023e61) bg_button_pane_cp018

0xcf69,	// (0x00023e6f) bg_button_pane_cp021

0xcf75,	// (0x00023e7b) bg_button_pane_cp022

0xcf86,	// (0x00023e8c) input_focus_pane_cp09

0xa058,	// (0x00020f5e) aid_size_touch_mv_arrow_left

0xa083,	// (0x00020f89) aid_size_touch_mv_arrow_right

0xc8dd,	// (0x000237e3) main_cset_slider_pane_g16_ParamLimits

0xc8dd,	// (0x000237e3) main_cset_slider_pane_g16

0xc8e9,	// (0x000237ef) main_cset_slider_pane_g17_ParamLimits

0xc8e9,	// (0x000237ef) main_cset_slider_pane_g17

0xce9d,	// (0x00023da3) cell_cam4_burst_pane_g1_ParamLimits

0x0218,	// (0x0001711e) compa_mode_pane

0xcab1,	// (0x000239b7) popup_vtel_slider_window_g3_ParamLimits

0xcab1,	// (0x000239b7) popup_vtel_slider_window_g3

0xcac5,	// (0x000239cb) popup_vtel_slider_window_g4_ParamLimits

0xcac5,	// (0x000239cb) popup_vtel_slider_window_g4

0xcad9,	// (0x000239df) popup_vtel_slider_window_t1_ParamLimits

0xcad9,	// (0x000239df) popup_vtel_slider_window_t1

0x0218,	// (0x0001711e) main_cl_pane

0x2bc7,	// (0x00019acd) popup_imed_adjust2_window_ParamLimits

0x2b9b,	// (0x00019aa1) bg_tb_trans_pane_cp05_ParamLimits

0x3613,	// (0x0001a519) popup_imed_adjust2_window_g1_ParamLimits

0x3622,	// (0x0001a528) popup_imed_adjust2_window_g2_ParamLimits

0x3622,	// (0x0001a528) popup_imed_adjust2_window_g2

0x362e,	// (0x0001a534) popup_imed_adjust2_window_g3_ParamLimits

0x362e,	// (0x0001a534) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x00026704) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x00026704) popup_imed_adjust2_window_g

0x363a,	// (0x0001a540) popup_imed_adjust2_window_t1_ParamLimits

0x3652,	// (0x0001a558) slider_imed_adjust_pane_ParamLimits

0x3666,	// (0x0001a56c) slider_imed_adjust_pane_g1_ParamLimits

0x3676,	// (0x0001a57c) slider_imed_adjust_pane_g2_ParamLimits

0x3686,	// (0x0001a58c) slider_imed_adjust_pane_g3_ParamLimits

0x3697,	// (0x0001a59d) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0002670b) slider_imed_adjust_pane_g_ParamLimits

0x79af,	// (0x0001e8b5) aid_touch_area_cam4_ParamLimits

0x79af,	// (0x0001e8b5) aid_touch_area_cam4

0x79bf,	// (0x0001e8c5) battery_pane_cp01

0x7a46,	// (0x0001e94c) main_camera4_pane_g6_ParamLimits

0x7a46,	// (0x0001e94c) main_camera4_pane_g6

0x7a64,	// (0x0001e96a) main_camera4_pane_t2_ParamLimits

0x7a64,	// (0x0001e96a) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0002680e) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0002680e) main_camera4_pane_t

0x7ad3,	// (0x0001e9d9) aid_touch_area_vid4_ParamLimits

0x7ad3,	// (0x0001e9d9) aid_touch_area_vid4

0x7b13,	// (0x0001ea19) main_video4_pane_g5_ParamLimits

0x7b13,	// (0x0001ea19) main_video4_pane_g5

0x7b37,	// (0x0001ea3d) vid4_progress_pane_ParamLimits

0x7b37,	// (0x0001ea3d) vid4_progress_pane

0x3fcb,	// (0x0001aed1) main_cset_slider_pane_g18_ParamLimits

0x3fcb,	// (0x0001aed1) main_cset_slider_pane_g18

0x4246,	// (0x0001b14c) cell_cam4_burst_pane_g2_ParamLimits

0x4246,	// (0x0001b14c) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0002696d) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0002696d) cell_cam4_burst_pane_g

0xcf97,	// (0x00023e9d) bg_cl_pane_ParamLimits

0xcf97,	// (0x00023e9d) bg_cl_pane

0xcfa3,	// (0x00023ea9) cl_header_pane_ParamLimits

0xcfa3,	// (0x00023ea9) cl_header_pane

0xcfaf,	// (0x00023eb5) cl_listscroll_pane_ParamLimits

0xcfaf,	// (0x00023eb5) cl_listscroll_pane

0x4430,	// (0x0001b336) bg_cl_pane_g1

0x4438,	// (0x0001b33e) bg_cl_pane_g2

0x4440,	// (0x0001b346) bg_cl_pane_g3

0x4448,	// (0x0001b34e) bg_cl_pane_g4

0x4450,	// (0x0001b356) bg_cl_pane_g5

0x4458,	// (0x0001b35e) bg_cl_pane_g6

0x4460,	// (0x0001b366) bg_cl_pane_g7

0x4468,	// (0x0001b36e) bg_cl_pane_g8

0x4470,	// (0x0001b376) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x000269a8) bg_cl_pane_g

0xcfbb,	// (0x00023ec1) aid_height_cl_leading_ParamLimits

0xcfbb,	// (0x00023ec1) aid_height_cl_leading

0xcfc7,	// (0x00023ecd) aid_height_cl_text_ParamLimits

0xcfc7,	// (0x00023ecd) aid_height_cl_text

0x3a4d,	// (0x0001a953) bg_cl_header_pane_ParamLimits

0x3a4d,	// (0x0001a953) bg_cl_header_pane

0xcfdf,	// (0x00023ee5) cl_header_pane_g1_ParamLimits

0xcfdf,	// (0x00023ee5) cl_header_pane_g1

0xcfec,	// (0x00023ef2) cl_header_pane_t1_ParamLimits

0xcfec,	// (0x00023ef2) cl_header_pane_t1

0x4478,	// (0x0001b37e) cl_list_pane

0x3f9e,	// (0x0001aea4) hc_scroll_pane_cp01

0x0f88,	// (0x00017e8e) bg_cl_header_pane_g1

0x3e80,	// (0x0001ad86) bg_cl_header_pane_g2

0x0fa8,	// (0x00017eae) bg_cl_header_pane_g3

0x3e90,	// (0x0001ad96) bg_cl_header_pane_g4

0x3e88,	// (0x0001ad8e) bg_cl_header_pane_g5

0x411b,	// (0x0001b021) bg_cl_header_pane_g6

0x3ea8,	// (0x0001adae) bg_cl_header_pane_g7

0x3eb0,	// (0x0001adb6) bg_cl_header_pane_g8

0x3ea0,	// (0x0001ada6) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x000269bb) bg_cl_header_pane_g

0xcffe,	// (0x00023f04) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcffe,	// (0x00023f04) hc_cl_list_double_graphic_heading_pane

0x4123,	// (0x0001b029) hc_cl_list_single_graphic_pane_ParamLimits

0x4123,	// (0x0001b029) hc_cl_list_single_graphic_pane

0xd00e,	// (0x00023f14) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd00e,	// (0x00023f14) hc_cl_list_single_graphic_pane_g1

0xd01a,	// (0x00023f20) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd01a,	// (0x00023f20) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x000269ce) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x000269ce) hc_cl_list_single_graphic_pane_g

0xd02e,	// (0x00023f34) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd02e,	// (0x00023f34) hc_cl_list_single_graphic_pane_t1

0xd00e,	// (0x00023f14) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd00e,	// (0x00023f14) hc_cl_list_double_graphic_heading_pane_g1

0xd043,	// (0x00023f49) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd043,	// (0x00023f49) hc_cl_list_double_graphic_heading_pane_g2

0xd057,	// (0x00023f5d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd057,	// (0x00023f5d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x000269d3) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x000269d3) hc_cl_list_double_graphic_heading_pane_g

0xd06b,	// (0x00023f71) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd06b,	// (0x00023f71) hc_cl_list_double_graphic_heading_pane_t1

0xd080,	// (0x00023f86) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd080,	// (0x00023f86) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x000269da) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x000269da) hc_cl_list_double_graphic_heading_pane_t

0x8069,	// (0x0001ef6f) vid4_progress_pane_g1

0x8075,	// (0x0001ef7b) vid4_progress_pane_g2

0x8081,	// (0x0001ef87) vid4_progress_pane_g3

0x8090,	// (0x0001ef96) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x000269df) vid4_progress_pane_g

0x80ae,	// (0x0001efb4) vid4_progress_pane_t1

0x80c4,	// (0x0001efca) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x000269ea) vid4_progress_pane_t

0x80ef,	// (0x0001eff5) wait_bar_pane_cp07

0x2ebd,	// (0x00019dc3) blid_firmament_pane_ParamLimits

0x2f00,	// (0x00019e06) popup_blid_sat_info2_window_g1

0x2f24,	// (0x00019e2a) popup_blid_sat_info2_window_t3

0x2f32,	// (0x00019e38) popup_blid_sat_info2_window_t4

0x2f40,	// (0x00019e46) popup_blid_sat_info2_window_t5

0x2f4e,	// (0x00019e54) popup_blid_sat_info2_window_t6

0x2f5e,	// (0x00019e64) popup_blid_sat_info2_window_t7

0x2f6c,	// (0x00019e72) popup_blid_sat_info2_window_t8

0x2f7a,	// (0x00019e80) popup_blid_sat_info2_window_t9

0x2f88,	// (0x00019e8e) popup_blid_sat_info2_window_t10

0x3050,	// (0x00019f56) aid_firma_cardinal_ParamLimits

0x3064,	// (0x00019f6a) blid_firmament_pane_t1_ParamLimits

0x307b,	// (0x00019f81) blid_firmament_pane_t2_ParamLimits

0x3092,	// (0x00019f98) blid_firmament_pane_t3_ParamLimits

0x30a9,	// (0x00019faf) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x000265fd) blid_firmament_pane_t_ParamLimits

0x30c0,	// (0x00019fc6) blid_sat_info_pane_ParamLimits

0x0289,	// (0x0001718f) main_cam_set_pane_ParamLimits

0xbfb5,	// (0x00022ebb) aid_size_cell_colour_35_ParamLimits

0xbfcf,	// (0x00022ed5) aid_size_cell_colour_112_ParamLimits

0xbfe6,	// (0x00022eec) aid_size_cell_effect_ParamLimits

0x0289,	// (0x0001718f) bg_tb_trans_pane_cp02_ParamLimits

0x124f,	// (0x00018155) heading_imed_pane_ParamLimits

0xc000,	// (0x00022f06) listscroll_imed_pane_ParamLimits

0x21c9,	// (0x000190cf) popup_call2_audio_first_window_g5_ParamLimits

0x21c9,	// (0x000190cf) popup_call2_audio_first_window_g5

0x7838,	// (0x0001e73e) aid_size_touch_image3_arrow_left_ParamLimits

0x7838,	// (0x0001e73e) aid_size_touch_image3_arrow_left

0x784e,	// (0x0001e754) aid_size_touch_image3_arrow_right_ParamLimits

0x784e,	// (0x0001e754) aid_size_touch_image3_arrow_right

0x80da,	// (0x0001efe0) vid4_progress_pane_t3

0xc2a0,	// (0x000231a6) main_hwr_training_symbol_option_pane_ParamLimits

0xc2a0,	// (0x000231a6) main_hwr_training_symbol_option_pane

0x3902,	// (0x0001a808) popup_hwr_training_preview_window_ParamLimits

0x3902,	// (0x0001a808) popup_hwr_training_preview_window

0x7554,	// (0x0001e45a) hwr_training_navi_pane_g5_ParamLimits

0x7554,	// (0x0001e45a) hwr_training_navi_pane_g5

0x3e6e,	// (0x0001ad74) popup_char_count_window

0x7f8f,	// (0x0001ee95) bg_popup_sub_pane_cp20_ParamLimits

0x7f9d,	// (0x0001eea3) list_vitu2_match_list_pane_ParamLimits

0x7fa9,	// (0x0001eeaf) vitu2_page_scroll_pane_ParamLimits

0x7fa9,	// (0x0001eeaf) vitu2_page_scroll_pane

0x457b,	// (0x0001b481) list_single_hwr_training_symbol_option_pane_ParamLimits

0x457b,	// (0x0001b481) list_single_hwr_training_symbol_option_pane

0x458e,	// (0x0001b494) list_single_hwr_training_symbol_option_pane_g1

0x4596,	// (0x0001b49c) list_single_hwr_training_symbol_option_pane_t1

0x45a4,	// (0x0001b4aa) bg_button_pane_cp023

0x45ad,	// (0x0001b4b3) bg_button_pane_cp024

0xd095,	// (0x00023f9b) vitu2_page_scroll_pane_g1

0xd09d,	// (0x00023fa3) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x000269f1) vitu2_page_scroll_pane_g

0xd0a7,	// (0x00023fad) vitu2_page_scroll_pane_t1

0x2dd9,	// (0x00019cdf) popup_char_count_window_g1

0x45e0,	// (0x0001b4e6) popup_char_count_window_g2

0x45e9,	// (0x0001b4ef) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x000269f6) popup_char_count_window_g

0x45f2,	// (0x0001b4f8) popup_char_count_window_t1

0x0218,	// (0x0001711e) main_vded2_pane

0x35ff,	// (0x0001a505) aid_size_cell_imed_line

0x3609,	// (0x0001a50f) grid_imed_line_width_pane

0x7b9b,	// (0x0001eaa1) vid4_indicators_pane_g4

0x4600,	// (0x0001b506) cell_imed_line_width_pane_ParamLimits

0x4600,	// (0x0001b506) cell_imed_line_width_pane

0x4616,	// (0x0001b51c) cell_imed_line_width_pane_g1

0x461f,	// (0x0001b525) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x000269fd) cell_imed_line_width_pane_g

0xd0b6,	// (0x00023fbc) main_vded2_pane_g1_ParamLimits

0xd0b6,	// (0x00023fbc) main_vded2_pane_g1

0xd0c5,	// (0x00023fcb) main_vded2_pane_g2_ParamLimits

0xd0c5,	// (0x00023fcb) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x00026a02) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x00026a02) main_vded2_pane_g

0xd0d3,	// (0x00023fd9) vded2_slider_pane_ParamLimits

0xd0d3,	// (0x00023fd9) vded2_slider_pane

0xd0e0,	// (0x00023fe6) aid_size_touch_vded2_end

0xd0ea,	// (0x00023ff0) aid_size_touch_vded2_playhead

0x4627,	// (0x0001b52d) aid_size_touch_vded2_start

0x462f,	// (0x0001b535) vded2_slider_bg_pane

0x4638,	// (0x0001b53e) vded2_slider_pane_g1

0x4641,	// (0x0001b547) vded2_slider_pane_g2

0xd0f2,	// (0x00023ff8) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00026a07) vded2_slider_pane_g

0x3a5b,	// (0x0001a961) vded2_slider_bg_pane_g1

0x3a64,	// (0x0001a96a) vded2_slider_bg_pane_g2

0x3a6d,	// (0x0001a973) vded2_slider_bg_pane_g3

0x0002,

0xf7c7,	// (0x000266cd) vded2_slider_bg_pane_g

0xa752,	// (0x00021658) aid_postcard_touch_down_pane_ParamLimits

0xa752,	// (0x00021658) aid_postcard_touch_down_pane

0xa762,	// (0x00021668) aid_postcard_touch_up_pane_ParamLimits

0xa762,	// (0x00021668) aid_postcard_touch_up_pane

0x0218,	// (0x0001711e) main_blid2_pane

0x2ba9,	// (0x00019aaf) popup_blid2_search_window

0x0218,	// (0x0001711e) blid2_gps_pane

0x0218,	// (0x0001711e) blid2_navig_pane

0x0218,	// (0x0001711e) blid2_search_pane

0x0218,	// (0x0001711e) blid2_tripm_pane

0xd0fb,	// (0x00024001) blid2_search_pane_g1_ParamLimits

0xd0fb,	// (0x00024001) blid2_search_pane_g1

0xd10b,	// (0x00024011) blid2_search_pane_t1_ParamLimits

0xd10b,	// (0x00024011) blid2_search_pane_t1

0xd11d,	// (0x00024023) aid_size_cell_blid2_gps_ParamLimits

0xd11d,	// (0x00024023) aid_size_cell_blid2_gps

0xd12d,	// (0x00024033) blid2_gps_pane_g1_ParamLimits

0xd12d,	// (0x00024033) blid2_gps_pane_g1

0xd139,	// (0x0002403f) grid_blid2_satellite_pane_ParamLimits

0xd139,	// (0x0002403f) grid_blid2_satellite_pane

0xd147,	// (0x0002404d) blid2_navig_pane_g1_ParamLimits

0xd147,	// (0x0002404d) blid2_navig_pane_g1

0xd153,	// (0x00024059) blid2_navig_pane_t1_ParamLimits

0xd153,	// (0x00024059) blid2_navig_pane_t1

0xd165,	// (0x0002406b) blid2_navig_pane_t2_ParamLimits

0xd165,	// (0x0002406b) blid2_navig_pane_t2

0x0001,

0xfb08,	// (0x00026a0e) blid2_navig_pane_t_ParamLimits

0xfb08,	// (0x00026a0e) blid2_navig_pane_t

0xd177,	// (0x0002407d) blid2_navig_ring_pane_ParamLimits

0xd177,	// (0x0002407d) blid2_navig_ring_pane

0xd187,	// (0x0002408d) blid2_speed_pane_ParamLimits

0xd187,	// (0x0002408d) blid2_speed_pane

0xd193,	// (0x00024099) blid2_tripm_pane_g1_ParamLimits

0xd193,	// (0x00024099) blid2_tripm_pane_g1

0xd1a3,	// (0x000240a9) blid2_tripm_pane_g2_ParamLimits

0xd1a3,	// (0x000240a9) blid2_tripm_pane_g2

0xd1af,	// (0x000240b5) blid2_tripm_pane_g3_ParamLimits

0xd1af,	// (0x000240b5) blid2_tripm_pane_g3

0xd1bb,	// (0x000240c1) blid2_tripm_pane_g4_ParamLimits

0xd1bb,	// (0x000240c1) blid2_tripm_pane_g4

0xd1c7,	// (0x000240cd) blid2_tripm_pane_g5_ParamLimits

0xd1c7,	// (0x000240cd) blid2_tripm_pane_g5

0x0005,

0xfb0d,	// (0x00026a13) blid2_tripm_pane_g_ParamLimits

0xfb0d,	// (0x00026a13) blid2_tripm_pane_g

0xd1e3,	// (0x000240e9) blid2_tripm_pane_t1_ParamLimits

0xd1e3,	// (0x000240e9) blid2_tripm_pane_t1

0xd1f7,	// (0x000240fd) blid2_tripm_pane_t2_ParamLimits

0xd1f7,	// (0x000240fd) blid2_tripm_pane_t2

0xd209,	// (0x0002410f) blid2_tripm_pane_t3_ParamLimits

0xd209,	// (0x0002410f) blid2_tripm_pane_t3

0x0003,

0xfb1a,	// (0x00026a20) blid2_tripm_pane_t_ParamLimits

0xfb1a,	// (0x00026a20) blid2_tripm_pane_t

0xd23b,	// (0x00024141) cell_blid2_satellite_pane_ParamLimits

0xd23b,	// (0x00024141) cell_blid2_satellite_pane

0xd259,	// (0x0002415f) cell_blid2_satellite_pane_g1

0x4649,	// (0x0001b54f) cell_blid2_satellite_pane_t1

0x30d0,	// (0x00019fd6) blid2_speed_pane_g1

0x4657,	// (0x0001b55d) blid2_speed_pane_t1

0x4665,	// (0x0001b56b) blid2_speed_pane_t2

0x0001,

0xfb23,	// (0x00026a29) blid2_speed_pane_t

0x30d0,	// (0x00019fd6) blid2_navig_ring_pane_g1

0xd262,	// (0x00024168) blid2_navig_ring_pane_g2

0xd26a,	// (0x00024170) blid2_navig_ring_pane_g3

0xd272,	// (0x00024178) blid2_navig_ring_pane_g4

0xd27a,	// (0x00024180) blid2_navig_ring_pane_g5

0x0004,

0xfb28,	// (0x00026a2e) blid2_navig_ring_pane_g

0x0218,	// (0x0001711e) bg_popup_window_pane_cp011

0x4673,	// (0x0001b579) popup_blid2_search_window_g1

0x467b,	// (0x0001b581) popup_blid2_search_window_t1

0x4689,	// (0x0001b58f) popup_blid2_search_window_t2

0x0001,

0xfb33,	// (0x00026a39) popup_blid2_search_window_t

0x0e97,	// (0x00017d9d) main_browser_pane_g1

0x09f2,	// (0x000178f8) main_browser_pane_ParamLimits

0x7b65,	// (0x0001ea6b) bg_button_pane_cp011_ParamLimits

0x7eb1,	// (0x0001edb7) cell_vitu2_function_pane_g1_ParamLimits

0x2b9b,	// (0x00019aa1) bg_popup_sub_pane_cp22_ParamLimits

0xcc38,	// (0x00023b3e) input_focus_pane_cp08_ParamLimits

0xcc4f,	// (0x00023b55) popup_vitu2_query_button_pane_ParamLimits

0xcc4f,	// (0x00023b55) popup_vitu2_query_button_pane

0xcc60,	// (0x00023b66) popup_vitu2_query_input_button_pane

0x4190,	// (0x0001b096) popup_vitu2_query_window_g1_ParamLimits

0xcc6a,	// (0x00023b70) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x00026941) popup_vitu2_query_window_g_ParamLimits

0x0218,	// (0x0001711e) bg_button_pane_cp026

0xd282,	// (0x00024188) popup_vitu2_query_input_button_pane_g1

0x0218,	// (0x0001711e) bg_button_pane_cp025

0x4697,	// (0x0001b59d) popup_vitu2_query_button_pane_t1

0xb5eb,	// (0x000224f1) main_mp3_pane_t6

0xb5fb,	// (0x00022501) popup_slider_window_cp01

0x7a84,	// (0x0001e98a) cam4_battery_pane

0x7b73,	// (0x0001ea79) cam4_battery_pane_cp02

0x8057,	// (0x0001ef5d) cam4_battery_pane_cp01

0x8061,	// (0x0001ef67) cam4_battery_pane_cp03

0x46a5,	// (0x0001b5ab) cam4_battery_pane_g1

0x30d0,	// (0x00019fd6) cam4_battery_pane_g2

0x0001,

0xfb38,	// (0x00026a3e) cam4_battery_pane_g

0x2f96,	// (0x00019e9c) popup_blid_sat_info2_window_t11

0xa058,	// (0x00020f5e) aid_size_touch_mv_arrow_left_ParamLimits

0xa083,	// (0x00020f89) aid_size_touch_mv_arrow_right_ParamLimits

0x168e,	// (0x00018594) navi_pane_g1_ParamLimits

0xa0ac,	// (0x00020fb2) navi_pane_g2_ParamLimits

0xa0da,	// (0x00020fe0) navi_pane_g3_ParamLimits

0xf409,	// (0x0002630f) navi_pane_g_ParamLimits

0xa134,	// (0x0002103a) navi_pane_mv_t1_ParamLimits

0xc00c,	// (0x00022f12) grid_imed_effect_pane_ParamLimits

0x8e8d,	// (0x0001fd93) aid_placing_vt_slider_lsc

0x0de4,	// (0x00017cea) aid_placing_vt_slider_prt

0x0289,	// (0x0001718f) bg_tb_trans_pane_cp01_ParamLimits

0x3220,	// (0x0001a126) popup_image_details_window_g1_ParamLimits

0x3233,	// (0x0001a139) popup_image_details_window_g2_ParamLimits

0x3248,	// (0x0001a14e) popup_image_details_window_g3_ParamLimits

0x3248,	// (0x0001a14e) popup_image_details_window_g3

0xf73c,	// (0x00026642) popup_image_details_window_g_ParamLimits

0x325c,	// (0x0001a162) popup_image_details_window_t1_ParamLimits

0x326e,	// (0x0001a174) popup_image_details_window_t2_ParamLimits

0x3287,	// (0x0001a18d) popup_image_details_window_t3_ParamLimits

0x329b,	// (0x0001a1a1) popup_image_details_window_t4_ParamLimits

0x32b6,	// (0x0001a1bc) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x00026649) popup_image_details_window_t_ParamLimits

0xcfd3,	// (0x00023ed9) cl_header_name_pane_ParamLimits

0xcfd3,	// (0x00023ed9) cl_header_name_pane

0xd28a,	// (0x00024190) cl_header_name_pane_t1_ParamLimits

0xd28a,	// (0x00024190) cl_header_name_pane_t1

0xd2a1,	// (0x000241a7) cl_header_name_pane_t2_ParamLimits

0xd2a1,	// (0x000241a7) cl_header_name_pane_t2

0xd2cb,	// (0x000241d1) cl_header_name_pane_t3_ParamLimits

0xd2cb,	// (0x000241d1) cl_header_name_pane_t3

0x0002,

0xfb3d,	// (0x00026a43) cl_header_name_pane_t_ParamLimits

0xfb3d,	// (0x00026a43) cl_header_name_pane_t

0xa105,	// (0x0002100b) navi_pane_mv_g2_ParamLimits

0x3e2b,	// (0x0001ad31) field_vitu2_entry_pane_g1_ParamLimits

0x3e37,	// (0x0001ad3d) field_vitu2_entry_pane_g2_ParamLimits

0x3e43,	// (0x0001ad49) field_vitu2_entry_pane_g3_ParamLimits

0x3e43,	// (0x0001ad49) field_vitu2_entry_pane_g3

0xf93a,	// (0x00026840) field_vitu2_entry_pane_g_ParamLimits

0x7d86,	// (0x0001ec8c) cell_vitu2_itu_pane_g1_ParamLimits

0x7d96,	// (0x0001ec9c) cell_vitu2_itu_pane_g2_ParamLimits

0x7d96,	// (0x0001ec9c) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0002684c) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0002684c) cell_vitu2_itu_pane_g

0x7b65,	// (0x0001ea6b) bg_vkb2_func_pane_cp05_ParamLimits

0x7b65,	// (0x0001ea6b) bg_vkb2_func_pane_cp05

0x7b65,	// (0x0001ea6b) bg_vkb2_func_pane_cp03

0x7b65,	// (0x0001ea6b) bg_vkb2_func_pane_cp04

0x7b65,	// (0x0001ea6b) bg_vkb2_func_pane_cp10_ParamLimits

0x7b65,	// (0x0001ea6b) bg_vkb2_func_pane_cp10

0xcf75,	// (0x00023e7b) bg_vkb2_func_pane_cp08

0xcf5b,	// (0x00023e61) bg_vkb2_func_pane_cp06

0xcf69,	// (0x00023e6f) bg_vkb2_func_pane_cp07

0x45b6,	// (0x0001b4bc) bg_vkb2_func_pane_cp11_ParamLimits

0x45b6,	// (0x0001b4bc) bg_vkb2_func_pane_cp11

0x45cb,	// (0x0001b4d1) bg_vkb2_func_pane_cp12_ParamLimits

0x45cb,	// (0x0001b4d1) bg_vkb2_func_pane_cp12

0x0218,	// (0x0001711e) bg_vkb2_func_pane_cp09

0x3e80,	// (0x0001ad86) bg_vkb2_func_pane_g1

0x0fa8,	// (0x00017eae) bg_vkb2_func_pane_g2

0x3e88,	// (0x0001ad8e) bg_vkb2_func_pane_g3

0x3e90,	// (0x0001ad96) bg_vkb2_func_pane_g4

0x411b,	// (0x0001b021) bg_vkb2_func_pane_g5

0x3ea8,	// (0x0001adae) bg_vkb2_func_pane_g6

0x3eb0,	// (0x0001adb6) bg_vkb2_func_pane_g7

0x3ea0,	// (0x0001ada6) bg_vkb2_func_pane_g8

0x0f88,	// (0x00017e8e) bg_vkb2_func_pane_g9

0x0008,

0xfb44,	// (0x00026a4a) bg_vkb2_func_pane_g

0xd1d5,	// (0x000240db) blid2_tripm_pane_g6_ParamLimits

0xd1d5,	// (0x000240db) blid2_tripm_pane_g6

0x3bf0,	// (0x0001aaf6) mp4_progress_pane_g1

0xd22f,	// (0x00024135) blid2_tripm_values_pane_ParamLimits

0xd22f,	// (0x00024135) blid2_tripm_values_pane

0xd2f0,	// (0x000241f6) blid2_tripm_values_pane_t1

0xd2fe,	// (0x00024204) blid2_tripm_values_pane_t2

0xd30c,	// (0x00024212) blid2_tripm_values_pane_t3

0xd31a,	// (0x00024220) blid2_tripm_values_pane_t4

0xd328,	// (0x0002422e) blid2_tripm_values_pane_t5

0xd336,	// (0x0002423c) blid2_tripm_values_pane_t6

0xd344,	// (0x0002424a) blid2_tripm_values_pane_t7

0xd352,	// (0x00024258) blid2_tripm_values_pane_t8

0xd360,	// (0x00024266) blid2_tripm_values_pane_t9

0x0008,

0xfb57,	// (0x00026a5d) blid2_tripm_values_pane_t

0x8ecb,	// (0x0001fdd1) call_video_pane_t1_ParamLimits

0x8ee8,	// (0x0001fdee) call_video_pane_t2_ParamLimits

0xf292,	// (0x00026198) call_video_pane_t_ParamLimits

0xa685,	// (0x0002158b) msg_header_pane_g1_ParamLimits

0x18cb,	// (0x000187d1) msg_header_pane_g2_ParamLimits

0x18cb,	// (0x000187d1) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x000263b2) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x000263b2) msg_header_pane_g

0x09f2,	// (0x000178f8) main_clock2_pane_ParamLimits

0xbe03,	// (0x00022d09) grid_clock2_toolbar_pane_ParamLimits

0xbe03,	// (0x00022d09) grid_clock2_toolbar_pane

0xbe03,	// (0x00022d09) listscroll_clock2_pane_ParamLimits

0xbe03,	// (0x00022d09) listscroll_clock2_pane

0xbebb,	// (0x00022dc1) main_clock2_pane_t3_ParamLimits

0xbebb,	// (0x00022dc1) main_clock2_pane_t3

0xbecd,	// (0x00022dd3) main_clock2_pane_t4_ParamLimits

0xbecd,	// (0x00022dd3) main_clock2_pane_t4

0x46af,	// (0x0001b5b5) cell_clock2_toolbar_pane

0x46b7,	// (0x0001b5bd) cell_clock2_toolbar_pane_cp01

0x46b7,	// (0x0001b5bd) cell_clock2_toolbar_pane_cp02

0x46bf,	// (0x0001b5c5) cell_clock2_toolbar_pane_cp03

0x46c7,	// (0x0001b5cd) list_clock2_pane

0x15f4,	// (0x000184fa) scroll_pane_cp10

0x46cf,	// (0x0001b5d5) list_single_clock2_pane_ParamLimits

0x46cf,	// (0x0001b5d5) list_single_clock2_pane

0x172e,	// (0x00018634) list_highlight_pane_cp08

0x46dc,	// (0x0001b5e2) list_single_clock2_pane_t1

0x46ea,	// (0x0001b5f0) list_single_clock2_pane_t2

0x0001,

0xfb6a,	// (0x00026a70) list_single_clock2_pane_t

0x0218,	// (0x0001711e) bg_button_pane_cp10

0x46f8,	// (0x0001b5fe) cell_clock2_toolbar_pane_g1

0x7159,	// (0x0001e05f) aid_main_viewer_pane_g1_ParamLimits

0x7159,	// (0x0001e05f) aid_main_viewer_pane_g1

0x7165,	// (0x0001e06b) aid_main_viewer_pane_g2_ParamLimits

0x7165,	// (0x0001e06b) aid_main_viewer_pane_g2

0xa70e,	// (0x00021614) aid_main_viewer_pane_g3_ParamLimits

0xa70e,	// (0x00021614) aid_main_viewer_pane_g3

0xa71f,	// (0x00021625) aid_main_viewer_pane_g4_ParamLimits

0xa71f,	// (0x00021625) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x000263c3) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x000263c3) aid_main_viewer_pane_g

0xae6d,	// (0x00021d73) main_calc_pane_ParamLimits

0xae7a,	// (0x00021d80) main_dialer2_pane_ParamLimits

0x0218,	// (0x0001711e) main_cam6_pane

0x0218,	// (0x0001711e) main_vid6_pane

0xbe0f,	// (0x00022d15) listscroll_gen_pane_cp06_ParamLimits

0xbe0f,	// (0x00022d15) listscroll_gen_pane_cp06

0xbedf,	// (0x00022de5) main_clock2_pane_t5_ParamLimits

0xbedf,	// (0x00022de5) main_clock2_pane_t5

0xbf2e,	// (0x00022e34) aid_call2_pane_cp10_ParamLimits

0xbf40,	// (0x00022e46) aid_call_pane_cp10_ParamLimits

0x1663,	// (0x00018569) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1663,	// (0x00018569) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbf52,	// (0x00022e58) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbf52,	// (0x00022e58) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1663,	// (0x00018569) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x000266f9) popup_clock_analogue_window_cp10_g_ParamLimits

0xbf64,	// (0x00022e6a) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc370,	// (0x00023276) cell_dialer2_keypad_pane_g2_ParamLimits

0xc370,	// (0x00023276) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x000267df) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x000267df) cell_dialer2_keypad_pane_g

0xc38c,	// (0x00023292) cell_dialer2_keypad_pane_t1

0xc7cb,	// (0x000236d1) main_cset_text2_pane_ParamLimits

0xc7cb,	// (0x000236d1) main_cset_text2_pane

0x4388,	// (0x0001b28e) area_vitu2_query_pane_g1_ParamLimits

0xcefa,	// (0x00023e00) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x00026994) area_vitu2_query_pane_g_ParamLimits

0x440c,	// (0x0001b312) area_vitu2_query_pane_t7_ParamLimits

0x440c,	// (0x0001b312) area_vitu2_query_pane_t7

0xcf5b,	// (0x00023e61) bg_button_pane_cp018_ParamLimits

0xcf69,	// (0x00023e6f) bg_button_pane_cp021_ParamLimits

0xcf75,	// (0x00023e7b) bg_button_pane_cp022_ParamLimits

0xcf75,	// (0x00023e7b) bg_vkb2_func_pane_cp08_ParamLimits

0xcf5b,	// (0x00023e61) bg_vkb2_func_pane_cp06_ParamLimits

0xcf69,	// (0x00023e6f) bg_vkb2_func_pane_cp07_ParamLimits

0xcf86,	// (0x00023e8c) input_focus_pane_cp09_ParamLimits

0x8101,	// (0x0001f007) cam6_autofocus_pane_ParamLimits

0x8101,	// (0x0001f007) cam6_autofocus_pane

0x8123,	// (0x0001f029) cam6_image_uncrop_pane_ParamLimits

0x8123,	// (0x0001f029) cam6_image_uncrop_pane

0x8150,	// (0x0001f056) cam6_indi_pane_ParamLimits

0x8150,	// (0x0001f056) cam6_indi_pane

0x816a,	// (0x0001f070) cam6_mode_pane_ParamLimits

0x816a,	// (0x0001f070) cam6_mode_pane

0x817e,	// (0x0001f084) cam6_timer_pane_ParamLimits

0x817e,	// (0x0001f084) cam6_timer_pane

0x818a,	// (0x0001f090) cam6_zoom_pane_ParamLimits

0x818a,	// (0x0001f090) cam6_zoom_pane

0xd36e,	// (0x00024274) cam6_mode_pane_g1_ParamLimits

0xd36e,	// (0x00024274) cam6_mode_pane_g1

0xd37a,	// (0x00024280) cam6_mode_pane_g2_ParamLimits

0xd37a,	// (0x00024280) cam6_mode_pane_g2

0xd386,	// (0x0002428c) cam6_mode_pane_g3_ParamLimits

0xd386,	// (0x0002428c) cam6_mode_pane_g3

0xd392,	// (0x00024298) cam6_mode_pane_g4_ParamLimits

0xd392,	// (0x00024298) cam6_mode_pane_g4

0x0003,

0xfb6f,	// (0x00026a75) cam6_mode_pane_g_ParamLimits

0xfb6f,	// (0x00026a75) cam6_mode_pane_g

0x470e,	// (0x0001b614) bg_tb_trans_pane_cp08_ParamLimits

0x470e,	// (0x0001b614) bg_tb_trans_pane_cp08

0x471c,	// (0x0001b622) cam6_battery_pane_ParamLimits

0x471c,	// (0x0001b622) cam6_battery_pane

0x4732,	// (0x0001b638) cam6_indi_pane_g1_ParamLimits

0x4732,	// (0x0001b638) cam6_indi_pane_g1

0x4744,	// (0x0001b64a) cam6_indi_pane_g2_ParamLimits

0x4744,	// (0x0001b64a) cam6_indi_pane_g2

0x4756,	// (0x0001b65c) cam6_indi_pane_g3_ParamLimits

0x4756,	// (0x0001b65c) cam6_indi_pane_g3

0x0002,

0xfb78,	// (0x00026a7e) cam6_indi_pane_g_ParamLimits

0xfb78,	// (0x00026a7e) cam6_indi_pane_g

0x4768,	// (0x0001b66e) cam6_indi_pane_t1_ParamLimits

0x4768,	// (0x0001b66e) cam6_indi_pane_t1

0xc4cf,	// (0x000233d5) cam6_autofocus_pane_g1

0xc4c7,	// (0x000233cd) cam6_autofocus_pane_g2

0xc4df,	// (0x000233e5) cam6_autofocus_pane_g3

0xc4d7,	// (0x000233dd) cam6_autofocus_pane_g4

0x0003,

0xfb7f,	// (0x00026a85) cam6_autofocus_pane_g

0x478e,	// (0x0001b694) cam6_timer_pane_g1

0x4796,	// (0x0001b69c) cam6_timer_pane_t1

0x47a4,	// (0x0001b6aa) cam6_zoom_cont_pane

0x47ac,	// (0x0001b6b2) cam6_zoom_pane_g1

0x47b4,	// (0x0001b6ba) cam6_zoom_pane_g2

0xd39e,	// (0x000242a4) cam6_zoom_pane_g3

0x0002,

0xfb88,	// (0x00026a8e) cam6_zoom_pane_g

0x30d0,	// (0x00019fd6) cam6_battery_pane_g1

0x30d0,	// (0x00019fd6) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00026606) cam6_battery_pane_g

0x47bc,	// (0x0001b6c2) cam6_zoom_cont_pane_g1

0x47c5,	// (0x0001b6cb) cam6_zoom_cont_pane_g2

0x47ce,	// (0x0001b6d4) cam6_zoom_cont_pane_g3

0x0002,

0xfb8f,	// (0x00026a95) cam6_zoom_cont_pane_g

0xd3bb,	// (0x000242c1) cam6_mode_pane_cp_ParamLimits

0xd3bb,	// (0x000242c1) cam6_mode_pane_cp

0xd3cf,	// (0x000242d5) cam6_zoom_pane_cp_ParamLimits

0xd3cf,	// (0x000242d5) cam6_zoom_pane_cp

0xd3ed,	// (0x000242f3) vid6_image_uncrop_cif_pane_ParamLimits

0xd3ed,	// (0x000242f3) vid6_image_uncrop_cif_pane

0xd419,	// (0x0002431f) vid6_image_uncrop_nhd_pane_ParamLimits

0xd419,	// (0x0002431f) vid6_image_uncrop_nhd_pane

0xd438,	// (0x0002433e) vid6_image_uncrop_vga_pane_ParamLimits

0xd438,	// (0x0002433e) vid6_image_uncrop_vga_pane

0xd457,	// (0x0002435d) vid6_image_uncrop_wvga_pane_ParamLimits

0xd457,	// (0x0002435d) vid6_image_uncrop_wvga_pane

0xd476,	// (0x0002437c) vid6_indi_pane_ParamLimits

0xd476,	// (0x0002437c) vid6_indi_pane

0x470e,	// (0x0001b614) bg_tb_trans_pane_cp09_ParamLimits

0x470e,	// (0x0001b614) bg_tb_trans_pane_cp09

0x47e6,	// (0x0001b6ec) cam6_battery_pane_cp_ParamLimits

0x47e6,	// (0x0001b6ec) cam6_battery_pane_cp

0x47f2,	// (0x0001b6f8) vid6_indi_pane_g1_ParamLimits

0x47f2,	// (0x0001b6f8) vid6_indi_pane_g1

0x4804,	// (0x0001b70a) vid6_indi_pane_g2_ParamLimits

0x4804,	// (0x0001b70a) vid6_indi_pane_g2

0x4816,	// (0x0001b71c) vid6_indi_pane_g3_ParamLimits

0x4816,	// (0x0001b71c) vid6_indi_pane_g3

0x482d,	// (0x0001b733) vid6_indi_pane_g4_ParamLimits

0x482d,	// (0x0001b733) vid6_indi_pane_g4

0x4844,	// (0x0001b74a) vid6_indi_pane_g5_ParamLimits

0x4844,	// (0x0001b74a) vid6_indi_pane_g5

0x0004,

0xfb96,	// (0x00026a9c) vid6_indi_pane_g_ParamLimits

0xfb96,	// (0x00026a9c) vid6_indi_pane_g

0x485e,	// (0x0001b764) vid6_indi_pane_t1_ParamLimits

0x485e,	// (0x0001b764) vid6_indi_pane_t1

0x4874,	// (0x0001b77a) vid6_indi_pane_t2_ParamLimits

0x4874,	// (0x0001b77a) vid6_indi_pane_t2

0x489c,	// (0x0001b7a2) vid6_indi_pane_t3_ParamLimits

0x489c,	// (0x0001b7a2) vid6_indi_pane_t3

0x48c4,	// (0x0001b7ca) vid6_indi_pane_t4_ParamLimits

0x48c4,	// (0x0001b7ca) vid6_indi_pane_t4

0x0003,

0xfba1,	// (0x00026aa7) vid6_indi_pane_t_ParamLimits

0xfba1,	// (0x00026aa7) vid6_indi_pane_t

0x48e8,	// (0x0001b7ee) wait_bar_pane_cp08

0xd49b,	// (0x000243a1) main_cset_text2_pane_t1_ParamLimits

0xd49b,	// (0x000243a1) main_cset_text2_pane_t1

0xd3a6,	// (0x000242ac) listscroll_gen_pane_cp06_t1_ParamLimits

0xd3a6,	// (0x000242ac) listscroll_gen_pane_cp06_t1

0x0218,	// (0x0001711e) main_cam6_set_pane

0x7a76,	// (0x0001e97c) bg_tb_trans_pane_cp06_ParamLimits

0x7a8c,	// (0x0001e992) cam4_indicators_pane_g1_ParamLimits

0x7a99,	// (0x0001e99f) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0002681c) cam4_indicators_pane_g_ParamLimits

0x7ab9,	// (0x0001e9bf) cam4_indicators_pane_t1_ParamLimits

0x7b65,	// (0x0001ea6b) bg_tb_trans_pane_cp07_ParamLimits

0x7a8c,	// (0x0001e992) vid4_indicators_pane_g1_ParamLimits

0x7b7d,	// (0x0001ea83) vid4_indicators_pane_g2_ParamLimits

0x7b8a,	// (0x0001ea90) vid4_indicators_pane_g3_ParamLimits

0x7b9b,	// (0x0001eaa1) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0002682e) vid4_indicators_pane_g_ParamLimits

0x7bb7,	// (0x0001eabd) vid4_indicators_pane_t1_ParamLimits

0x8069,	// (0x0001ef6f) vid4_progress_pane_g1_ParamLimits

0x8075,	// (0x0001ef7b) vid4_progress_pane_g2_ParamLimits

0x8081,	// (0x0001ef87) vid4_progress_pane_g3_ParamLimits

0x8090,	// (0x0001ef96) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x000269df) vid4_progress_pane_g_ParamLimits

0x80ae,	// (0x0001efb4) vid4_progress_pane_t1_ParamLimits

0x80c4,	// (0x0001efca) vid4_progress_pane_t2_ParamLimits

0x80da,	// (0x0001efe0) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x000269ea) vid4_progress_pane_t_ParamLimits

0x80ef,	// (0x0001eff5) wait_bar_pane_cp07_ParamLimits

0xd4c2,	// (0x000243c8) main_cam6_set_pane_g2_ParamLimits

0xd4c2,	// (0x000243c8) main_cam6_set_pane_g2

0xd4ce,	// (0x000243d4) main_cset6_listscroll_pane_ParamLimits

0xd4ce,	// (0x000243d4) main_cset6_listscroll_pane

0xd4fb,	// (0x00024401) main_cset6_slider_pane_ParamLimits

0xd4fb,	// (0x00024401) main_cset6_slider_pane

0xd507,	// (0x0002440d) main_cset6_text2_pane_ParamLimits

0xd507,	// (0x0002440d) main_cset6_text2_pane

0x48f7,	// (0x0001b7fd) main_cset6_text_pane

0x48ff,	// (0x0001b805) main_cset_list_pane_copy1_ParamLimits

0x48ff,	// (0x0001b805) main_cset_list_pane_copy1

0x490f,	// (0x0001b815) scroll_pane_cp028_copy1

0xd51a,	// (0x00024420) cset_list_set_pane_copy1

0xd52a,	// (0x00024430) aid_position_infowindow_above_copy1

0xd532,	// (0x00024438) aid_position_infowindow_below_copy1

0xd53a,	// (0x00024440) cset_list_set_pane_g1_copy1

0xd542,	// (0x00024448) cset_list_set_pane_g3_copy1_ParamLimits

0xd542,	// (0x00024448) cset_list_set_pane_g3_copy1

0xd551,	// (0x00024457) cset_list_set_pane_t1_copy1_ParamLimits

0xd551,	// (0x00024457) cset_list_set_pane_t1_copy1

0x0289,	// (0x0001718f) list_highlight_pane_cp021_copy1_ParamLimits

0x0289,	// (0x0001718f) list_highlight_pane_cp021_copy1

0x493c,	// (0x0001b842) cset6_slider_pane_ParamLimits

0x493c,	// (0x0001b842) cset6_slider_pane

0x4968,	// (0x0001b86e) main_cset6_slider_pane_g1_ParamLimits

0x4968,	// (0x0001b86e) main_cset6_slider_pane_g1

0xd566,	// (0x0002446c) main_cset6_slider_pane_g2_ParamLimits

0xd566,	// (0x0002446c) main_cset6_slider_pane_g2

0x4990,	// (0x0001b896) main_cset6_slider_pane_g3_ParamLimits

0x4990,	// (0x0001b896) main_cset6_slider_pane_g3

0xd58e,	// (0x00024494) main_cset6_slider_pane_g4_ParamLimits

0xd58e,	// (0x00024494) main_cset6_slider_pane_g4

0xd59a,	// (0x000244a0) main_cset6_slider_pane_g5_ParamLimits

0xd59a,	// (0x000244a0) main_cset6_slider_pane_g5

0x3fb3,	// (0x0001aeb9) main_cset6_slider_pane_g7_ParamLimits

0x3fb3,	// (0x0001aeb9) main_cset6_slider_pane_g7

0x3fbf,	// (0x0001aec5) main_cset6_slider_pane_g8_ParamLimits

0x3fbf,	// (0x0001aec5) main_cset6_slider_pane_g8

0xd5a6,	// (0x000244ac) main_cset6_slider_pane_g9_ParamLimits

0xd5a6,	// (0x000244ac) main_cset6_slider_pane_g9

0xd5b2,	// (0x000244b8) main_cset6_slider_pane_g10_ParamLimits

0xd5b2,	// (0x000244b8) main_cset6_slider_pane_g10

0xd5be,	// (0x000244c4) main_cset6_slider_pane_g11_ParamLimits

0xd5be,	// (0x000244c4) main_cset6_slider_pane_g11

0xd5ca,	// (0x000244d0) main_cset6_slider_pane_g12_ParamLimits

0xd5ca,	// (0x000244d0) main_cset6_slider_pane_g12

0xd5d6,	// (0x000244dc) main_cset6_slider_pane_g13_ParamLimits

0xd5d6,	// (0x000244dc) main_cset6_slider_pane_g13

0xd5e2,	// (0x000244e8) main_cset6_slider_pane_g14_ParamLimits

0xd5e2,	// (0x000244e8) main_cset6_slider_pane_g14

0xd5ee,	// (0x000244f4) main_cset6_slider_pane_g15_ParamLimits

0xd5ee,	// (0x000244f4) main_cset6_slider_pane_g15

0xd606,	// (0x0002450c) main_cset6_slider_pane_g16_ParamLimits

0xd606,	// (0x0002450c) main_cset6_slider_pane_g16

0xd612,	// (0x00024518) main_cset6_slider_pane_g17_ParamLimits

0xd612,	// (0x00024518) main_cset6_slider_pane_g17

0x0011,

0xfbaa,	// (0x00026ab0) main_cset6_slider_pane_g_ParamLimits

0xfbaa,	// (0x00026ab0) main_cset6_slider_pane_g

0x499c,	// (0x0001b8a2) main_cset6_slider_pane_t1_ParamLimits

0x499c,	// (0x0001b8a2) main_cset6_slider_pane_t1

0xd636,	// (0x0002453c) main_cset6_slider_pane_t2_ParamLimits

0xd636,	// (0x0002453c) main_cset6_slider_pane_t2

0xd661,	// (0x00024567) main_cset6_slider_pane_t3_ParamLimits

0xd661,	// (0x00024567) main_cset6_slider_pane_t3

0xd68c,	// (0x00024592) main_cset6_slider_pane_t4_ParamLimits

0xd68c,	// (0x00024592) main_cset6_slider_pane_t4

0xd6b7,	// (0x000245bd) main_cset6_slider_pane_t5_ParamLimits

0xd6b7,	// (0x000245bd) main_cset6_slider_pane_t5

0x49dd,	// (0x0001b8e3) main_cset6_slider_pane_t7_ParamLimits

0x49dd,	// (0x0001b8e3) main_cset6_slider_pane_t7

0xd6e2,	// (0x000245e8) main_cset6_slider_pane_t8_ParamLimits

0xd6e2,	// (0x000245e8) main_cset6_slider_pane_t8

0xd706,	// (0x0002460c) main_cset6_slider_pane_t9_ParamLimits

0xd706,	// (0x0002460c) main_cset6_slider_pane_t9

0xd72a,	// (0x00024630) main_cset6_slider_pane_t10_ParamLimits

0xd72a,	// (0x00024630) main_cset6_slider_pane_t10

0xd74e,	// (0x00024654) main_cset6_slider_pane_t11_ParamLimits

0xd74e,	// (0x00024654) main_cset6_slider_pane_t11

0x4a13,	// (0x0001b919) main_cset6_slider_pane_t14_ParamLimits

0x4a13,	// (0x0001b919) main_cset6_slider_pane_t14

0x4a4c,	// (0x0001b952) main_cset6_slider_pane_t15_ParamLimits

0x4a4c,	// (0x0001b952) main_cset6_slider_pane_t15

0x000b,

0xfbcf,	// (0x00026ad5) main_cset6_slider_pane_t_ParamLimits

0xfbcf,	// (0x00026ad5) main_cset6_slider_pane_t

0x40a3,	// (0x0001afa9) cset_slider_pane_g1_copy1

0x40ac,	// (0x0001afb2) cset_slider_pane_g2_copy1

0x40b5,	// (0x0001afbb) cset_slider_pane_g3_copy1

0x0218,	// (0x0001711e) bg_popup_sub_pane_cp011_copy1

0x419c,	// (0x0001b0a2) main_cset_text_pane_g1_copy1

0x41a4,	// (0x0001b0aa) main_cset_text_pane_t1_copy1

0x41b2,	// (0x0001b0b8) main_cset_text_pane_t2_copy1

0x41c0,	// (0x0001b0c6) main_cset_text_pane_t3_copy1

0x41ce,	// (0x0001b0d4) main_cset_text_pane_t4_copy1

0x41dc,	// (0x0001b0e2) main_cset_text_pane_t5_copy1

0x41ea,	// (0x0001b0f0) main_cset_text_pane_t6_copy1

0x41f8,	// (0x0001b0fe) main_cset_text_pane_t7_copy1

0xd772,	// (0x00024678) main_cset_text2_pane_t1_copy1

0x0218,	// (0x0001711e) main_ncimui_pane

0xaebf,	// (0x00021dc5) popup_query_ncimui_window_ParamLimits

0xaebf,	// (0x00021dc5) popup_query_ncimui_window

0x33a1,	// (0x0001a2a7) field_cale_ev2_pane_g4_ParamLimits

0x33a1,	// (0x0001a2a7) field_cale_ev2_pane_g4

0xc310,	// (0x00023216) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc310,	// (0x00023216) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x000267ba) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x000267ba) cell_video_dialer_keypad_pane_g

0xc328,	// (0x0002322e) cell_video_dialer_keypad_pane_t1

0x0218,	// (0x0001711e) bg_popup_window_pane_cp012

0x14e0,	// (0x000183e6) heading_pane_cp06

0x4b74,	// (0x0001ba7a) ncim_query_content_pane

0x0218,	// (0x0001711e) bg_popup_heading_pane_cp01

0x4b7c,	// (0x0001ba82) ncim_heading_pane_t1

0x4b8a,	// (0x0001ba90) ncim_indicator_popup_pane

0x4b9c,	// (0x0001baa2) ncim_query_button_pane

0x4bb2,	// (0x0001bab8) ncim_query_content_pane_t1

0x4bc4,	// (0x0001baca) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x00026b14) ncim_query_content_pane_t

0x4bfe,	// (0x0001bb04) ncim_query_list_pane

0x4c10,	// (0x0001bb16) ncim_query_popup_pane

0x4b8a,	// (0x0001ba90) ncim_indicator_popup_pane_ParamLimits

0xd89d,	// (0x000247a3) ncim_query_content_pane_g1_ParamLimits

0xd89d,	// (0x000247a3) ncim_query_content_pane_g1

0x4bb2,	// (0x0001bab8) ncim_query_content_pane_t1_ParamLimits

0x4bc4,	// (0x0001baca) ncim_query_content_pane_t2_ParamLimits

0xd8a9,	// (0x000247af) ncim_query_content_pane_t3_ParamLimits

0xd8a9,	// (0x000247af) ncim_query_content_pane_t3

0xd8c6,	// (0x000247cc) ncim_query_content_pane_t4_ParamLimits

0xd8c6,	// (0x000247cc) ncim_query_content_pane_t4

0xd8e3,	// (0x000247e9) ncim_query_content_pane_t5_ParamLimits

0xd8e3,	// (0x000247e9) ncim_query_content_pane_t5

0x4bd6,	// (0x0001badc) ncim_query_content_pane_t6_ParamLimits

0x4bd6,	// (0x0001badc) ncim_query_content_pane_t6

0xfc0e,	// (0x00026b14) ncim_query_content_pane_t_ParamLimits

0x4bfe,	// (0x0001bb04) ncim_query_list_pane_ParamLimits

0x4c10,	// (0x0001bb16) ncim_query_popup_pane_ParamLimits

0x4c24,	// (0x0001bb2a) wait_bar_pane_cp04

0x0218,	// (0x0001711e) input_focus_pane_cp011

0x4c2c,	// (0x0001bb32) ncim_query_popup_pane_t1

0x4c3a,	// (0x0001bb40) ncim_list_query_list_pane_ParamLimits

0x4c3a,	// (0x0001bb40) ncim_list_query_list_pane

0x0218,	// (0x0001711e) bg_button_pane_cp027

0x4c4d,	// (0x0001bb53) ncim_query_button_pane_g1

0x0218,	// (0x0001711e) list_highlight_pane_cp012

0x4c57,	// (0x0001bb5d) ncim_list_query_list_pane_g1

0x4c5f,	// (0x0001bb65) ncim_list_query_list_pane_t1

0x7aa9,	// (0x0001e9af) cam4_indicators_pane_g3_ParamLimits

0x7aa9,	// (0x0001e9af) cam4_indicators_pane_g3

0x7ba7,	// (0x0001eaad) vid4_indicators_pane_g5_ParamLimits

0x7ba7,	// (0x0001eaad) vid4_indicators_pane_g5

0x809f,	// (0x0001efa5) vid4_progress_pane_g5_ParamLimits

0x809f,	// (0x0001efa5) vid4_progress_pane_g5

0xd7a4,	// (0x000246aa) main_ncimui_pane_g1

0xd7fe,	// (0x00024704) ncimui_group_query_pane_ParamLimits

0xd7fe,	// (0x00024704) ncimui_group_query_pane

0xd848,	// (0x0002474e) ncimui_list_pane_ParamLimits

0xd848,	// (0x0002474e) ncimui_list_pane

0xd869,	// (0x0002476f) ncimui_text_pane_ParamLimits

0xd869,	// (0x0002476f) ncimui_text_pane

0xd900,	// (0x00024806) ncimui_text_pane_t1_ParamLimits

0xd900,	// (0x00024806) ncimui_text_pane_t1

0x4c6d,	// (0x0001bb73) ncimui_list_single_graphic_pane_ParamLimits

0x4c6d,	// (0x0001bb73) ncimui_list_single_graphic_pane

0xd91f,	// (0x00024825) ncimui_query_pane_ParamLimits

0xd91f,	// (0x00024825) ncimui_query_pane

0x0218,	// (0x0001711e) list_highlight_pane_cp013

0x4c7d,	// (0x0001bb83) ncim_list_query_list_pane_t1_copy1

0x4c57,	// (0x0001bb5d) ncim_list_single_graphic_pane_g1

0x4c8b,	// (0x0001bb91) ncim_query_button_pane_cp01

0x4c97,	// (0x0001bb9d) ncim_query_entry_pane_ParamLimits

0x4c97,	// (0x0001bb9d) ncim_query_entry_pane

0x4caa,	// (0x0001bbb0) ncimui_query_pane_g1

0x4cb6,	// (0x0001bbbc) ncimui_query_pane_t1_ParamLimits

0x4cb6,	// (0x0001bbbc) ncimui_query_pane_t1

0x0289,	// (0x0001718f) input_focus_pane_cp012

0x4ccf,	// (0x0001bbd5) ncim_query_entry_pane_t1

0x09f2,	// (0x000178f8) main_im_pane_ParamLimits

0x0289,	// (0x0001718f) main_mobtv_pane_ParamLimits

0x0289,	// (0x0001718f) main_mobtv_pane

0xd61e,	// (0x00024524) main_cset6_slider_pane_g18_ParamLimits

0xd61e,	// (0x00024524) main_cset6_slider_pane_g18

0xd62a,	// (0x00024530) main_cset6_slider_pane_g19_ParamLimits

0xd62a,	// (0x00024530) main_cset6_slider_pane_g19

0x3e43,	// (0x0001ad49) bg_main_mobtv_pane_ParamLimits

0x3e43,	// (0x0001ad49) bg_main_mobtv_pane

0xd932,	// (0x00024838) main_mobtv_info_pane

0xd93d,	// (0x00024843) main_mobtv_loading_pane_ParamLimits

0xd93d,	// (0x00024843) main_mobtv_loading_pane

0x4cef,	// (0x0001bbf5) main_mobtv_pg_channel_list_pane

0x4cf9,	// (0x0001bbff) main_mobtv_pg_hdr_pane

0xd94a,	// (0x00024850) main_mobtv_programe_curr_pane_ParamLimits

0xd94a,	// (0x00024850) main_mobtv_programe_curr_pane

0xd957,	// (0x0002485d) main_mobtv_programe_next_pane_ParamLimits

0xd957,	// (0x0002485d) main_mobtv_programe_next_pane

0x4d02,	// (0x0001bc08) popup_mobtv_noti_window

0x30d0,	// (0x00019fd6) main_tv_pg_hdr_pane_g1

0x4d0c,	// (0x0001bc12) main_tv_pg_hdr_pane_g2

0x4d14,	// (0x0001bc1a) main_tv_pg_hdr_pane_g3

0x4d1c,	// (0x0001bc22) main_tv_pg_hdr_pane_g4

0x4d24,	// (0x0001bc2a) main_tv_pg_hdr_pane_g5

0x4d2e,	// (0x0001bc34) main_tv_pg_hdr_pane_g6

0x4d38,	// (0x0001bc3e) main_tv_pg_hdr_pane_g7

0x4d42,	// (0x0001bc48) main_tv_pg_hdr_pane_g8

0x4d4c,	// (0x0001bc52) main_tv_pg_hdr_pane_g9

0x4d56,	// (0x0001bc5c) main_tv_pg_hdr_pane_g10

0x4d60,	// (0x0001bc66) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x00026b21) main_tv_pg_hdr_pane_g

0x4d6a,	// (0x0001bc70) main_tv_pg_hdr_pane_t1

0x4d78,	// (0x0001bc7e) main_tv_pg_hdr_pane_t2

0x4d86,	// (0x0001bc8c) main_tv_pg_hdr_pane_t3

0x4d96,	// (0x0001bc9c) main_tv_pg_hdr_pane_t4

0x4da6,	// (0x0001bcac) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x00026b38) main_tv_pg_hdr_pane_t

0x4db6,	// (0x0001bcbc) single_mobtv_pg_channel_pane_ParamLimits

0x4db6,	// (0x0001bcbc) single_mobtv_pg_channel_pane

0x4dc8,	// (0x0001bcce) single_mobtv_pg_channel_table_pane

0x4dd1,	// (0x0001bcd7) single_mobtv_pg_channel_thumb_pane

0x4dda,	// (0x0001bce0) single_tv_pg_channel_pane_g1

0x4de3,	// (0x0001bce9) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x00026b43) single_tv_pg_channel_pane_g

0x3300,	// (0x0001a206) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x3300,	// (0x0001a206) bg_single_mobtv_pg_channel_thumb_pane

0x4dec,	// (0x0001bcf2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4dec,	// (0x0001bcf2) single_mobtv_pg_channel_thumb_pane_g1

0x4dfa,	// (0x0001bd00) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4dfa,	// (0x0001bd00) single_mobtv_pg_channel_thumb_pane_g2

0x4e06,	// (0x0001bd0c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4e06,	// (0x0001bd0c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x00026b48) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x00026b48) single_mobtv_pg_channel_thumb_pane_g

0x4e12,	// (0x0001bd18) single_mobtv_pg_channel_thumb_pane_t1

0x4e20,	// (0x0001bd26) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x00026b4f) single_mobtv_pg_channel_thumb_pane_t

0x30d0,	// (0x00019fd6) bg_single_mobtv_pg_channel_table_pane_g1

0x30d0,	// (0x00019fd6) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00026606) bg_single_mobtv_pg_channel_table_pane_g

0x4e2e,	// (0x0001bd34) single_mobtv_pg_channel_table_pane_t1

0x4e3c,	// (0x0001bd42) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x00026b54) single_mobtv_pg_channel_table_pane_t

0xd96c,	// (0x00024872) main_mobtv_info_pane_g1_ParamLimits

0xd96c,	// (0x00024872) main_mobtv_info_pane_g1

0xd988,	// (0x0002488e) main_mobtv_info_pane_t1_ParamLimits

0xd988,	// (0x0002488e) main_mobtv_info_pane_t1

0xda00,	// (0x00024906) main_mobtv_info_pane_t2_ParamLimits

0xda00,	// (0x00024906) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x00026b5e) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x00026b5e) main_mobtv_info_pane_t

0xda93,	// (0x00024999) wait_bar_pane_cp05

0xdaa5,	// (0x000249ab) main_mobtv_loading_pane_g1_ParamLimits

0xdaa5,	// (0x000249ab) main_mobtv_loading_pane_g1

0xdab1,	// (0x000249b7) main_mobtv_loading_pane_g2_ParamLimits

0xdab1,	// (0x000249b7) main_mobtv_loading_pane_g2

0xdabd,	// (0x000249c3) main_mobtv_loading_pane_g3_ParamLimits

0xdabd,	// (0x000249c3) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x00026b65) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x00026b65) main_mobtv_loading_pane_g

0x4e4a,	// (0x0001bd50) main_mobtv_loading_pane_t1_ParamLimits

0x4e4a,	// (0x0001bd50) main_mobtv_loading_pane_t1

0x4e62,	// (0x0001bd68) main_mobtv_loading_pane_t2_ParamLimits

0x4e62,	// (0x0001bd68) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x00026b6c) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x00026b6c) main_mobtv_loading_pane_t

0xdacb,	// (0x000249d1) wait_bar_pane_cp06_ParamLimits

0xdacb,	// (0x000249d1) wait_bar_pane_cp06

0x4e86,	// (0x0001bd8c) main_mobtv_programe_curr_pane_t1

0x4e94,	// (0x0001bd9a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x00026b71) main_mobtv_programe_curr_pane_t

0x4ea2,	// (0x0001bda8) main_mobtv_programe_next_pane_t1

0x4eb0,	// (0x0001bdb6) main_mobtv_programe_next_pane_t2

0x4ebe,	// (0x0001bdc4) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x00026b76) main_mobtv_programe_next_pane_t

0x0218,	// (0x0001711e) bg_popup_mobtv_noti_window_pane

0x4ecc,	// (0x0001bdd2) popup_mobtv_noti_window_g1

0x4ed4,	// (0x0001bdda) popup_mobtv_noti_window_t1

0x4ee2,	// (0x0001bde8) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x00026b7d) popup_mobtv_noti_window_t

0x30d0,	// (0x00019fd6) bg_popup_mobtv_noti_window_pane_g1

0x0218,	// (0x0001711e) sc_clock_pane

0x0218,	// (0x0001711e) main_fs_bigclock_pane

0xd21d,	// (0x00024123) blid2_tripm_pane_t4_ParamLimits

0xd21d,	// (0x00024123) blid2_tripm_pane_t4

0xdad7,	// (0x000249dd) sc_clock_pane_g1_ParamLimits

0xdad7,	// (0x000249dd) sc_clock_pane_g1

0xdae5,	// (0x000249eb) sc_clock_pane_t1_ParamLimits

0xdae5,	// (0x000249eb) sc_clock_pane_t1

0xdafa,	// (0x00024a00) sc_clock_pane_t2_ParamLimits

0xdafa,	// (0x00024a00) sc_clock_pane_t2

0xdb0c,	// (0x00024a12) sc_clock_pane_t3_ParamLimits

0xdb0c,	// (0x00024a12) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x00026b82) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x00026b82) sc_clock_pane_t

0xe929,	// (0x0002582f) main_fs_bigclock_indicator_pane_ParamLimits

0xe929,	// (0x0002582f) main_fs_bigclock_indicator_pane

0xdbad,	// (0x00024ab3) main_fs_bigclock_pane_g1_ParamLimits

0xdbad,	// (0x00024ab3) main_fs_bigclock_pane_g1

0xe935,	// (0x0002583b) main_fs_bigclock_pane_t1_ParamLimits

0xe935,	// (0x0002583b) main_fs_bigclock_pane_t1

0xe947,	// (0x0002584d) main_fs_bigclock_pane_t2_ParamLimits

0xe947,	// (0x0002584d) main_fs_bigclock_pane_t2

0xe95b,	// (0x00025861) main_fs_bigclock_pane_t3_ParamLimits

0xe95b,	// (0x00025861) main_fs_bigclock_pane_t3

0x0002,

0xfe76,	// (0x00026d7c) main_fs_bigclock_pane_t_ParamLimits

0xfe76,	// (0x00026d7c) main_fs_bigclock_pane_t

0x5a07,	// (0x0001c90d) main_fs_bigclock_indicator_pane_g1

0x4ba4,	// (0x0001baaa) ncim_query_content_pane_g2_ParamLimits

0x4ba4,	// (0x0001baaa) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x00026b0f) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x00026b0f) ncim_query_content_pane_g

0xdb1e,	// (0x00024a24) sc_clock_pane_t4_ParamLimits

0xdb1e,	// (0x00024a24) sc_clock_pane_t4

0x0289,	// (0x0001718f) main_radioblah_pane

0x3d15,	// (0x0001ac1b) cell_call4_button_pane_t1_copy1_ParamLimits

0x3d15,	// (0x0001ac1b) cell_call4_button_pane_t1_copy1

0xd7ae,	// (0x000246b4) main_ncimui_pane_t1_ParamLimits

0xd7ae,	// (0x000246b4) main_ncimui_pane_t1

0xd7c8,	// (0x000246ce) main_ncimui_pane_t2_ParamLimits

0xd7c8,	// (0x000246ce) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x00026b08) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x00026b08) main_ncimui_pane_t

0x4ef0,	// (0x0001bdf6) main_radioblah_anim_pane_ParamLimits

0x4ef0,	// (0x0001bdf6) main_radioblah_anim_pane

0x4f01,	// (0x0001be07) main_radioblah_info_pane_ParamLimits

0x4f01,	// (0x0001be07) main_radioblah_info_pane

0x4f15,	// (0x0001be1b) main_radioblah_pane_t1_ParamLimits

0x4f15,	// (0x0001be1b) main_radioblah_pane_t1

0x4f31,	// (0x0001be37) main_radioblah_pane_t2_ParamLimits

0x4f31,	// (0x0001be37) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x00026ba3) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x00026ba3) main_radioblah_pane_t

0xdd30,	// (0x00024c36) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdd30,	// (0x00024c36) main_radioblah_rocker_ctrl_pane

0x4f79,	// (0x0001be7f) main_radioblah_info_pane_t1_ParamLimits

0x4f79,	// (0x0001be7f) main_radioblah_info_pane_t1

0xdd79,	// (0x00024c7f) main_radioblah_info_pane_t2_ParamLimits

0xdd79,	// (0x00024c7f) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x00026bac) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x00026bac) main_radioblah_info_pane_t

0x30d0,	// (0x00019fd6) main_radioblah_rocker_ctrl_pane_g1

0xde29,	// (0x00024d2f) main_radioblah_rocker_ctrl_pane_g2

0xde31,	// (0x00024d37) main_radioblah_rocker_ctrl_pane_g3

0xde39,	// (0x00024d3f) main_radioblah_rocker_ctrl_pane_g4

0xde41,	// (0x00024d47) main_radioblah_rocker_ctrl_pane_g5

0xde49,	// (0x00024d4f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x00026bb5) main_radioblah_rocker_ctrl_pane_g

0xd772,	// (0x00024678) main_cset_text2_pane_t1_copy1_ParamLimits

0x79ee,	// (0x0001e8f4) cam4_image_uncrop_qvga_pane

0x7b1f,	// (0x0001ea25) vid4_image_uncrop_qcif_pane

0x8142,	// (0x0001f048) cam6_image_uncrop_qvga_pane_ParamLimits

0x8142,	// (0x0001f048) cam6_image_uncrop_qvga_pane

0x47d6,	// (0x0001b6dc) vid6_image_uncrop_qcif_pane_ParamLimits

0x47d6,	// (0x0001b6dc) vid6_image_uncrop_qcif_pane

0x0218,	// (0x0001711e) bg_popup_preview_window_pane_cp03

0x4b56,	// (0x0001ba5c) list_cset_text2_pane

0x4b5e,	// (0x0001ba64) main_cset6_text2_pane_g1

0x4b66,	// (0x0001ba6c) main_cset6_text2_pane_t1

0xde51,	// (0x00024d57) list_cset_text2_pane_t1_ParamLimits

0xde51,	// (0x00024d57) list_cset_text2_pane_t1

0x0289,	// (0x0001718f) main_radioblah_pane_ParamLimits

0xda7f,	// (0x00024985) main_mobtv_info_pane_t3_ParamLimits

0xda7f,	// (0x00024985) main_mobtv_info_pane_t3

0xdd1e,	// (0x00024c24) main_radioblah_pane_g1

0xdd49,	// (0x00024c4f) main_radioblah_info_pane_g1

0xddce,	// (0x00024cd4) main_radioblah_info_pane_t3_ParamLimits

0xddce,	// (0x00024cd4) main_radioblah_info_pane_t3

0x9bb5,	// (0x00020abb) highlight_cell_cale_month_pane_ParamLimits

0x9bb5,	// (0x00020abb) highlight_cell_cale_month_pane

0x0218,	// (0x0001711e) main_phob_fisheye_pane

0x3456,	// (0x0001a35c) scroll_pane_cp0031_ParamLimits

0x3456,	// (0x0001a35c) scroll_pane_cp0031

0x48e8,	// (0x0001b7ee) wait_bar_pane_cp08_ParamLimits

0xd51a,	// (0x00024420) cset_list_set_pane_copy1_ParamLimits

0x4fb3,	// (0x0001beb9) highlight_cell_cale_month_pane_g1

0xde6a,	// (0x00024d70) highlight_cell_cale_month_pane_t1

0x4478,	// (0x0001b37e) list_gen_pane_cp01

0x3f9e,	// (0x0001aea4) scroll_pane_01

0xde78,	// (0x00024d7e) list_single_double_fisheye_pane

0x4fbb,	// (0x0001bec1) list_double_fisheye_pane_g1_ParamLimits

0x4fbb,	// (0x0001bec1) list_double_fisheye_pane_g1

0x4fc7,	// (0x0001becd) list_double_fisheye_pane_g2_ParamLimits

0x4fc7,	// (0x0001becd) list_double_fisheye_pane_g2

0xde81,	// (0x00024d87) list_double_fisheye_pane_g3_ParamLimits

0xde81,	// (0x00024d87) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x00026bc2) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x00026bc2) list_double_fisheye_pane_g

0xde8d,	// (0x00024d93) list_double_fisheye_pane_t1_ParamLimits

0xde8d,	// (0x00024d93) list_double_fisheye_pane_t1

0xdea8,	// (0x00024dae) list_double_fisheye_pane_t2_ParamLimits

0xdea8,	// (0x00024dae) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x00026bcd) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x00026bcd) list_double_fisheye_pane_t

0x0218,	// (0x0001711e) main_call5_pane

0xdb44,	// (0x00024a4a) sc_swipe_pane_ParamLimits

0xdb44,	// (0x00024a4a) sc_swipe_pane

0xded6,	// (0x00024ddc) call5_image_pane_ParamLimits

0xded6,	// (0x00024ddc) call5_image_pane

0xdee8,	// (0x00024dee) call5_swipe_1_pane_ParamLimits

0xdee8,	// (0x00024dee) call5_swipe_1_pane

0xdef4,	// (0x00024dfa) call5_swipe_2_pane_ParamLimits

0xdef4,	// (0x00024dfa) call5_swipe_2_pane

0xdf10,	// (0x00024e16) popup_call5_audio_first_window_ParamLimits

0xdf10,	// (0x00024e16) popup_call5_audio_first_window

0x3300,	// (0x0001a206) call5_swipe_1_pane_g1_ParamLimits

0x3300,	// (0x0001a206) call5_swipe_1_pane_g1

0x4ff8,	// (0x0001befe) call5_swipe_1_pane_g2_ParamLimits

0x4ff8,	// (0x0001befe) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x00026bd2) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x00026bd2) call5_swipe_1_pane_g

0x5004,	// (0x0001bf0a) call5_swipe_1_pane_t1_ParamLimits

0x5004,	// (0x0001bf0a) call5_swipe_1_pane_t1

0x3300,	// (0x0001a206) call5_swipe_2_pane_g1_ParamLimits

0x3300,	// (0x0001a206) call5_swipe_2_pane_g1

0x5019,	// (0x0001bf1f) call5_swipe_2_pane_g2_ParamLimits

0x5019,	// (0x0001bf1f) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x00026bd7) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x00026bd7) call5_swipe_2_pane_g

0x5025,	// (0x0001bf2b) call5_swipe_2_pane_t1_ParamLimits

0x5025,	// (0x0001bf2b) call5_swipe_2_pane_t1

0x503a,	// (0x0001bf40) sc_swipe_pane_g1_ParamLimits

0x503a,	// (0x0001bf40) sc_swipe_pane_g1

0x5047,	// (0x0001bf4d) sc_swipe_pane_g2_ParamLimits

0x5047,	// (0x0001bf4d) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x00026bdc) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x00026bdc) sc_swipe_pane_g

0x5053,	// (0x0001bf59) sc_swipe_pane_t1_ParamLimits

0x5053,	// (0x0001bf59) sc_swipe_pane_t1

0x0218,	// (0x0001711e) main_cmail_launcher_pane

0xdf20,	// (0x00024e26) aid_size_cell_cmail_l_ParamLimits

0xdf20,	// (0x00024e26) aid_size_cell_cmail_l

0xdf30,	// (0x00024e36) grid_cmail_l_pane_ParamLimits

0xdf30,	// (0x00024e36) grid_cmail_l_pane

0xdf40,	// (0x00024e46) cell_cmail_l_pane_ParamLimits

0xdf40,	// (0x00024e46) cell_cmail_l_pane

0xdf56,	// (0x00024e5c) cell_cmail_l_pane_g1_ParamLimits

0xdf56,	// (0x00024e5c) cell_cmail_l_pane_g1

0xdf62,	// (0x00024e68) cell_cmail_l_pane_t1_ParamLimits

0xdf62,	// (0x00024e68) cell_cmail_l_pane_t1

0x5068,	// (0x0001bf6e) cell_cmail_l_pane_t2_ParamLimits

0x5068,	// (0x0001bf6e) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x00026be1) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x00026be1) cell_cmail_l_pane_t

0x0289,	// (0x0001718f) grid_highlight_pane_cp018_ParamLimits

0x0289,	// (0x0001718f) grid_highlight_pane_cp018

0x828d,	// (0x0001f193) main2_pane_ParamLimits

0x828d,	// (0x0001f193) main2_pane

0x0acb,	// (0x000179d1) popup_sp_fs_action_menu_bg_pane_g1

0x0ad3,	// (0x000179d9) popup_sp_fs_action_menu_bg_pane_g2

0x0adb,	// (0x000179e1) popup_sp_fs_action_menu_bg_pane_g3

0x0ae3,	// (0x000179e9) popup_sp_fs_action_menu_bg_pane_g4

0x0aeb,	// (0x000179f1) popup_sp_fs_action_menu_bg_pane_g5

0x0af3,	// (0x000179f9) popup_sp_fs_action_menu_bg_pane_g6

0x0afb,	// (0x00017a01) popup_sp_fs_action_menu_bg_pane_g7

0x0b03,	// (0x00017a09) popup_sp_fs_action_menu_bg_pane_g8

0x0b0b,	// (0x00017a11) popup_sp_fs_action_menu_bg_pane_g9

0x0b13,	// (0x00017a19) popup_sp_fs_action_menu_bg_pane_g10

0x0b13,	// (0x00017a19) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x000260b2) popup_sp_fs_action_menu_bg_pane_g

0x0cf1,	// (0x00017bf7) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0cf1,	// (0x00017bf7) list_medium_line_x2_t3_g3_g1

0x0cfd,	// (0x00017c03) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0cfd,	// (0x00017c03) list_medium_line_x2_t3_g3_g2

0x0d09,	// (0x00017c0f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0d09,	// (0x00017c0f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00026162) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00026162) list_medium_line_x2_t3_g3_g

0x0d15,	// (0x00017c1b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0d15,	// (0x00017c1b) list_medium_line_x2_t3_g3_t1

0x8dc2,	// (0x0001fcc8) list_medium_line_x2_t3_g3_t2_ParamLimits

0x8dc2,	// (0x0001fcc8) list_medium_line_x2_t3_g3_t2

0x0d2a,	// (0x00017c30) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0d2a,	// (0x00017c30) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00026169) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00026169) list_medium_line_x2_t3_g3_t

0x0cf1,	// (0x00017bf7) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0cf1,	// (0x00017bf7) list_medium_line_x2_t3_g2_g1

0x0d09,	// (0x00017c0f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0d09,	// (0x00017c0f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00026170) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00026170) list_medium_line_x2_t3_g2_g

0x0d3f,	// (0x00017c45) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0d3f,	// (0x00017c45) list_medium_line_x2_t3_g2_t1

0x0d55,	// (0x00017c5b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0d55,	// (0x00017c5b) list_medium_line_x2_t3_g2_t2

0x0d67,	// (0x00017c6d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0d67,	// (0x00017c6d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00026175) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00026175) list_medium_line_x2_t3_g2_t

0x0cf1,	// (0x00017bf7) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0cf1,	// (0x00017bf7) list_medium_line_x2_t4_g4_g1

0x0d85,	// (0x00017c8b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0d85,	// (0x00017c8b) list_medium_line_x2_t4_g4_g2

0x0cfd,	// (0x00017c03) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0cfd,	// (0x00017c03) list_medium_line_x2_t4_g4_g3

0x0d91,	// (0x00017c97) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0d91,	// (0x00017c97) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0002617c) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0002617c) list_medium_line_x2_t4_g4_g

0x8dd6,	// (0x0001fcdc) list_medium_line_x2_t4_g4_t1_ParamLimits

0x8dd6,	// (0x0001fcdc) list_medium_line_x2_t4_g4_t1

0x8df0,	// (0x0001fcf6) list_medium_line_x2_t4_g4_t2_ParamLimits

0x8df0,	// (0x0001fcf6) list_medium_line_x2_t4_g4_t2

0x8e06,	// (0x0001fd0c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x8e06,	// (0x0001fd0c) list_medium_line_x2_t4_g4_t3

0x0d9d,	// (0x00017ca3) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0d9d,	// (0x00017ca3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00026185) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00026185) list_medium_line_x2_t4_g4_t

0x0cf1,	// (0x00017bf7) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0cf1,	// (0x00017bf7) list_medium_line_x2_t2_g4_g1

0x0d85,	// (0x00017c8b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0d85,	// (0x00017c8b) list_medium_line_x2_t2_g4_g2

0x0cfd,	// (0x00017c03) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0cfd,	// (0x00017c03) list_medium_line_x2_t2_g4_g3

0x0d09,	// (0x00017c0f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0d09,	// (0x00017c0f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x000261ec) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x000261ec) list_medium_line_x2_t2_g4_g

0x1089,	// (0x00017f8f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1089,	// (0x00017f8f) list_medium_line_x2_t2_g4_t1

0x0d2a,	// (0x00017c30) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0d2a,	// (0x00017c30) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x000261f5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x000261f5) list_medium_line_x2_t2_g4_t

0x0cf1,	// (0x00017bf7) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0cf1,	// (0x00017bf7) list_medium_line_x2_t2_g3_g1

0x0cfd,	// (0x00017c03) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0cfd,	// (0x00017c03) list_medium_line_x2_t2_g3_g2

0x0d09,	// (0x00017c0f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0d09,	// (0x00017c0f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00026162) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00026162) list_medium_line_x2_t2_g3_g

0x109e,	// (0x00017fa4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x109e,	// (0x00017fa4) list_medium_line_x2_t2_g3_t1

0x0d2a,	// (0x00017c30) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0d2a,	// (0x00017c30) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x000261fa) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x000261fa) list_medium_line_x2_t2_g3_t

0x9d89,	// (0x00020c8f) main_sp_fs_list_pane_ParamLimits

0x9d89,	// (0x00020c8f) main_sp_fs_list_pane

0x9d95,	// (0x00020c9b) sp_fs_scroll_pane_ParamLimits

0x9d95,	// (0x00020c9b) sp_fs_scroll_pane

0x9da1,	// (0x00020ca7) list_medium_line_x2_t3_t1

0x9db1,	// (0x00020cb7) list_medium_line_x2_t3_t2

0x1283,	// (0x00018189) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00026245) list_medium_line_x2_t3_t

0x9dbf,	// (0x00020cc5) list_medium_line_x3_t4_t1

0x9dcf,	// (0x00020cd5) list_medium_line_x3_t4_t2

0x1291,	// (0x00018197) list_medium_line_x3_t4_t3

0x1283,	// (0x00018189) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0002624c) list_medium_line_x3_t4_t

0x9ddd,	// (0x00020ce3) list_medium_line_x4_t5_t1

0x9ded,	// (0x00020cf3) list_medium_line_x4_t5_t2

0x1291,	// (0x00018197) list_medium_line_x4_t5_t3

0x129f,	// (0x000181a5) list_medium_line_x4_t5_t4

0x1283,	// (0x00018189) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00026255) list_medium_line_x4_t5_t

0x0cf1,	// (0x00017bf7) list_medium_line_t4_g4_g1_ParamLimits

0x0cf1,	// (0x00017bf7) list_medium_line_t4_g4_g1

0x0d91,	// (0x00017c97) list_medium_line_t4_g4_g2_ParamLimits

0x0d91,	// (0x00017c97) list_medium_line_t4_g4_g2

0x12ad,	// (0x000181b3) list_medium_line_t4_g4_g3_ParamLimits

0x12ad,	// (0x000181b3) list_medium_line_t4_g4_g3

0x0d09,	// (0x00017c0f) list_medium_line_t4_g4_g4_ParamLimits

0x0d09,	// (0x00017c0f) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00026260) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00026260) list_medium_line_t4_g4_g

0x12b9,	// (0x000181bf) list_medium_line_t4_g4_t1_ParamLimits

0x12b9,	// (0x000181bf) list_medium_line_t4_g4_t1

0x12ce,	// (0x000181d4) list_medium_line_t4_g4_t2_ParamLimits

0x12ce,	// (0x000181d4) list_medium_line_t4_g4_t2

0x12e4,	// (0x000181ea) list_medium_line_t4_g4_t3_ParamLimits

0x12e4,	// (0x000181ea) list_medium_line_t4_g4_t3

0x0d2a,	// (0x00017c30) list_medium_line_t4_g4_t4_ParamLimits

0x0d2a,	// (0x00017c30) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00026269) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00026269) list_medium_line_t4_g4_t

0x9e9f,	// (0x00020da5) chi_dic_find_pane_g1

0xae88,	// (0x00021d8e) main_tport_pane

0x40f1,	// (0x0001aff7) list_medium_line_plain_t1

0x4143,	// (0x0001b049) list_medium_line_t2_g2_g1_ParamLimits

0x4143,	// (0x0001b049) list_medium_line_t2_g2_g1

0x414f,	// (0x0001b055) list_medium_line_t2_g2_g2_ParamLimits

0x414f,	// (0x0001b055) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x00026925) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x00026925) list_medium_line_t2_g2_g

0xcb48,	// (0x00023a4e) list_medium_line_t2_g2_t1_ParamLimits

0xcb48,	// (0x00023a4e) list_medium_line_t2_g2_t1

0xcb5f,	// (0x00023a65) list_medium_line_t2_g2_t2_ParamLimits

0xcb5f,	// (0x00023a65) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0002692a) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0002692a) list_medium_line_t2_g2_t

0x4521,	// (0x0001b427) aid_sp_fs_list_icon_a_sm

0x4529,	// (0x0001b42f) aid_sp_fs_list_icon_d

0x4531,	// (0x0001b437) aid_sp_fs_text_primary

0x453a,	// (0x0001b440) aid_sp_fs_text_secondary

0x4543,	// (0x0001b449) list_medium_line

0x4543,	// (0x0001b449) list_medium_line_g2

0x4543,	// (0x0001b449) list_medium_line_g3

0x4543,	// (0x0001b449) list_medium_line_plain

0x4543,	// (0x0001b449) list_medium_line_plain_t2

0x4543,	// (0x0001b449) list_medium_line_plain_t3

0x4543,	// (0x0001b449) list_medium_line_right_icon

0x4543,	// (0x0001b449) list_medium_line_right_iconx2

0x4543,	// (0x0001b449) list_medium_line_t2

0x4543,	// (0x0001b449) list_medium_line_t2_g2

0x4543,	// (0x0001b449) list_medium_line_t2_g3

0x4543,	// (0x0001b449) list_medium_line_t2_right_icon

0x4543,	// (0x0001b449) list_medium_line_t2_right_iconx2

0x4543,	// (0x0001b449) list_medium_line_t3

0x4543,	// (0x0001b449) list_medium_line_t3_g2

0x4543,	// (0x0001b449) list_medium_line_t3_g3

0x4543,	// (0x0001b449) list_medium_line_t3_right_iconx2

0x454c,	// (0x0001b452) list_medium_line_t4_g4

0x4555,	// (0x0001b45b) list_medium_line_x2

0x4555,	// (0x0001b45b) list_medium_line_x2_t2_g2

0x4555,	// (0x0001b45b) list_medium_line_x2_t2_g3

0x4555,	// (0x0001b45b) list_medium_line_x2_t2_g4

0x4555,	// (0x0001b45b) list_medium_line_x2_t3

0x4555,	// (0x0001b45b) list_medium_line_x2_t3_g2

0x4555,	// (0x0001b45b) list_medium_line_x2_t3_g3

0x4555,	// (0x0001b45b) list_medium_line_x2_t3_g4

0x4555,	// (0x0001b45b) list_medium_line_x2_t4_g2

0x4555,	// (0x0001b45b) list_medium_line_x2_t4_g4

0x455e,	// (0x0001b464) list_medium_line_x3

0x455e,	// (0x0001b464) list_medium_line_x3_t4

0x455e,	// (0x0001b464) list_medium_line_x3_t4_g4

0x454c,	// (0x0001b452) list_medium_line_x4_t4

0x454c,	// (0x0001b452) list_medium_line_x4_t4_g7

0x454c,	// (0x0001b452) list_medium_line_x4_t5

0x4567,	// (0x0001b46d) list_single_fs_dyc_pane_ParamLimits

0x4567,	// (0x0001b46d) list_single_fs_dyc_pane

0x0cf1,	// (0x00017bf7) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0cf1,	// (0x00017bf7) list_medium_line_x4_t4_g7_g1

0x4a85,	// (0x0001b98b) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4a85,	// (0x0001b98b) list_medium_line_x4_t4_g7_g2

0x4a91,	// (0x0001b997) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4a91,	// (0x0001b997) list_medium_line_x4_t4_g7_g3

0x4aa0,	// (0x0001b9a6) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4aa0,	// (0x0001b9a6) list_medium_line_x4_t4_g7_g4

0x4aac,	// (0x0001b9b2) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4aac,	// (0x0001b9b2) list_medium_line_x4_t4_g7_g5

0x4abb,	// (0x0001b9c1) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4abb,	// (0x0001b9c1) list_medium_line_x4_t4_g7_g6

0x4aca,	// (0x0001b9d0) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4aca,	// (0x0001b9d0) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe8,	// (0x00026aee) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe8,	// (0x00026aee) list_medium_line_x4_t4_g7_g

0x4ad6,	// (0x0001b9dc) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4ad6,	// (0x0001b9dc) list_medium_line_x4_t4_g7_t1

0x4aeb,	// (0x0001b9f1) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4aeb,	// (0x0001b9f1) list_medium_line_x4_t4_g7_t2

0x4b00,	// (0x0001ba06) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4b00,	// (0x0001ba06) list_medium_line_x4_t4_g7_t3

0x4b15,	// (0x0001ba1b) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4b15,	// (0x0001ba1b) list_medium_line_x4_t4_g7_t4

0x4b27,	// (0x0001ba2d) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4b27,	// (0x0001ba2d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf7,	// (0x00026afd) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf7,	// (0x00026afd) list_medium_line_x4_t4_g7_t

0x4b39,	// (0x0001ba3f) list_single_dyc_row_pane_ParamLimits

0x4b39,	// (0x0001ba3f) list_single_dyc_row_pane

0xdeca,	// (0x00024dd0) call5_gesture_pane_ParamLimits

0xdeca,	// (0x00024dd0) call5_gesture_pane

0xdf00,	// (0x00024e06) call5_windows_pane_ParamLimits

0xdf00,	// (0x00024e06) call5_windows_pane

0xdf78,	// (0x00024e7e) call5_swipe_1_pane_cp_ParamLimits

0xdf78,	// (0x00024e7e) call5_swipe_1_pane_cp

0xdf84,	// (0x00024e8a) call5_swipe_2_pane_cp_ParamLimits

0xdf84,	// (0x00024e8a) call5_swipe_2_pane_cp

0x172e,	// (0x00018634) call5_image_pane_cp

0xdf90,	// (0x00024e96) popup_call5_audio_first_window_cp_ParamLimits

0xdf90,	// (0x00024e96) popup_call5_audio_first_window_cp

0x503a,	// (0x0001bf40) call5_swipe_1_pane_g1_cp_ParamLimits

0x503a,	// (0x0001bf40) call5_swipe_1_pane_g1_cp

0x507a,	// (0x0001bf80) call5_swipe_1_pane_g2_cp

0x5053,	// (0x0001bf59) call5_swipe_1_pane_t1_cp_ParamLimits

0x5053,	// (0x0001bf59) call5_swipe_1_pane_t1_cp

0x503a,	// (0x0001bf40) call5_swipe_2_pane_g1_cp_ParamLimits

0x503a,	// (0x0001bf40) call5_swipe_2_pane_g1_cp

0x5082,	// (0x0001bf88) call5_swipe_2_pane_g2_cp

0x508a,	// (0x0001bf90) call5_swipe_2_pane_t1_cp_ParamLimits

0x508a,	// (0x0001bf90) call5_swipe_2_pane_t1_cp

0x0289,	// (0x0001718f) main_sp_fs_email_pane

0x509f,	// (0x0001bfa5) main_sp_fs_listscroll_pane_te

0x50a8,	// (0x0001bfae) popup_sp_fs_action_menu_pane_ParamLimits

0x50a8,	// (0x0001bfae) popup_sp_fs_action_menu_pane

0x30d0,	// (0x00019fd6) bg_sp_fs_ctrlbar_pane_g1

0x50ee,	// (0x0001bff4) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x50f7,	// (0x0001bffd) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x5100,	// (0x0001c006) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x30d0,	// (0x00019fd6) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x00026be6) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2eaf,	// (0x00019db5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2eaf,	// (0x00019db5) bg_sp_fs_ctrlbar_ddmenu_pane

0x5109,	// (0x0001c00f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x5109,	// (0x0001c00f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x5115,	// (0x0001c01b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x5115,	// (0x0001c01b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x00026bef) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x00026bef) main_sp_fs_ctrlbar_ddmenu_pane_g

0x5121,	// (0x0001c027) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x5121,	// (0x0001c027) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x513b,	// (0x0001c041) list_medium_line_t2_right_icon_g1

0xdf9e,	// (0x00024ea4) list_medium_line_t2_right_icon_t1

0xdfae,	// (0x00024eb4) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x00026bf4) list_medium_line_t2_right_icon_t

0x2b9b,	// (0x00019aa1) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2b9b,	// (0x00019aa1) bg_sp_fs_ctrlbar_pane

0xe013,	// (0x00024f19) main_sp_fs_ctrlbar_button_pane_cp01

0xe01b,	// (0x00024f21) main_sp_fs_ctrlbar_ddmenu_pane

0x517d,	// (0x0001c083) main_sp_fs_ctrlbar_pane_g1

0x5189,	// (0x0001c08f) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x00026bf9) main_sp_fs_ctrlbar_pane_g

0x5195,	// (0x0001c09b) main_sp_fs_ctrlbar_pane_t1

0xe025,	// (0x00024f2b) main_sp_fs_ctrlbar_pane

0xe041,	// (0x00024f47) main_sp_fs_listscroll_pane_te_cp01

0xe052,	// (0x00024f58) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xe052,	// (0x00024f58) popup_sp_fs_action_menu_pane_cp01

0x0289,	// (0x0001718f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0289,	// (0x0001718f) bg_sp_fs_highlight_list_pane_cp01

0x51aa,	// (0x0001c0b0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x51aa,	// (0x0001c0b0) sp_fs_action_menu_list_gene_pane_g1

0x51b9,	// (0x0001c0bf) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x51b9,	// (0x0001c0bf) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x00026bfe) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x00026bfe) sp_fs_action_menu_list_gene_pane_g

0x51c6,	// (0x0001c0cc) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x51c6,	// (0x0001c0cc) sp_fs_action_menu_list_gene_pane_t1

0x51de,	// (0x0001c0e4) sp_fs_action_menu_list_gene_pane_ParamLimits

0x51de,	// (0x0001c0e4) sp_fs_action_menu_list_gene_pane

0x5201,	// (0x0001c107) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x5201,	// (0x0001c107) popup_sp_fs_action_menu_bg_pane

0x520f,	// (0x0001c115) sp_fs_action_menu_list_pane_ParamLimits

0x520f,	// (0x0001c115) sp_fs_action_menu_list_pane

0x5233,	// (0x0001c139) sp_fs_scroll_pane_cp01_ParamLimits

0x5233,	// (0x0001c139) sp_fs_scroll_pane_cp01

0xe06c,	// (0x00024f72) list_medium_line_plain_t2_t1

0xe07c,	// (0x00024f82) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x00026c03) list_medium_line_plain_t2_t

0xe08a,	// (0x00024f90) list_medium_line_plain_t3_t1

0xe09a,	// (0x00024fa0) list_medium_line_plain_t3_t2

0xe0a8,	// (0x00024fae) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x00026c08) list_medium_line_plain_t3_t

0x0cf1,	// (0x00017bf7) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0cf1,	// (0x00017bf7) list_medium_line_x2_t2_g2_g1

0x0d09,	// (0x00017c0f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0d09,	// (0x00017c0f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00026170) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00026170) list_medium_line_x2_t2_g2_g

0x12b9,	// (0x000181bf) list_medium_line_x2_t2_g2_t1_ParamLimits

0x12b9,	// (0x000181bf) list_medium_line_x2_t2_g2_t1

0x0d2a,	// (0x00017c30) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0d2a,	// (0x00017c30) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x00026c0f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x00026c0f) list_medium_line_x2_t2_g2_t

0x0cf1,	// (0x00017bf7) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0cf1,	// (0x00017bf7) list_medium_line_x2_t4_g2_g1

0x0d09,	// (0x00017c0f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0d09,	// (0x00017c0f) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x00026170) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x00026170) list_medium_line_x2_t4_g2_g

0xe0b6,	// (0x00024fbc) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe0b6,	// (0x00024fbc) list_medium_line_x2_t4_g2_t1

0xe0d0,	// (0x00024fd6) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe0d0,	// (0x00024fd6) list_medium_line_x2_t4_g2_t2

0xe0e6,	// (0x00024fec) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe0e6,	// (0x00024fec) list_medium_line_x2_t4_g2_t3

0x0d2a,	// (0x00017c30) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0d2a,	// (0x00017c30) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0e,	// (0x00026c14) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0e,	// (0x00026c14) list_medium_line_x2_t4_g2_t

0x5259,	// (0x0001c15f) list_medium_line_t3_right_iconx2_g1

0x513b,	// (0x0001c041) list_medium_line_t3_right_iconx2_g2

0xe0fb,	// (0x00025001) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd17,	// (0x00026c1d) list_medium_line_t3_right_iconx2_g

0xe103,	// (0x00025009) list_medium_line_t3_right_iconx2_t1

0xe113,	// (0x00025019) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1e,	// (0x00026c24) list_medium_line_t3_right_iconx2_t

0x0cf1,	// (0x00017bf7) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0cf1,	// (0x00017bf7) list_medium_line_x3_t4_g4_g1

0x0cfd,	// (0x00017c03) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0cfd,	// (0x00017c03) list_medium_line_x3_t4_g4_g2

0x0d91,	// (0x00017c97) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0d91,	// (0x00017c97) list_medium_line_x3_t4_g4_g3

0x5261,	// (0x0001c167) list_medium_line_x3_t4_g4_g4_ParamLimits

0x5261,	// (0x0001c167) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd23,	// (0x00026c29) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd23,	// (0x00026c29) list_medium_line_x3_t4_g4_g

0xe121,	// (0x00025027) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe121,	// (0x00025027) list_medium_line_x3_t4_g4_t1

0xe138,	// (0x0002503e) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe138,	// (0x0002503e) list_medium_line_x3_t4_g4_t2

0x526d,	// (0x0001c173) list_medium_line_x3_t4_g4_t3_ParamLimits

0x526d,	// (0x0001c173) list_medium_line_x3_t4_g4_t3

0x5282,	// (0x0001c188) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5282,	// (0x0001c188) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2c,	// (0x00026c32) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2c,	// (0x00026c32) list_medium_line_x3_t4_g4_t

0xe14d,	// (0x00025053) list_single_dyc_row_text_pane_t1_ParamLimits

0xe14d,	// (0x00025053) list_single_dyc_row_text_pane_t1

0xe18c,	// (0x00025092) list_single_dyc_row_text_pane_t2_ParamLimits

0xe18c,	// (0x00025092) list_single_dyc_row_text_pane_t2

0x529f,	// (0x0001c1a5) list_single_dyc_row_text_pane_t3_ParamLimits

0x529f,	// (0x0001c1a5) list_single_dyc_row_text_pane_t3

0x0002,

0xfd35,	// (0x00026c3b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd35,	// (0x00026c3b) list_single_dyc_row_text_pane_t

0x52b1,	// (0x0001c1b7) list_single_dyc_row_pane_g1_ParamLimits

0x52b1,	// (0x0001c1b7) list_single_dyc_row_pane_g1

0x52bd,	// (0x0001c1c3) list_single_dyc_row_pane_g2_ParamLimits

0x52bd,	// (0x0001c1c3) list_single_dyc_row_pane_g2

0x52c9,	// (0x0001c1cf) list_single_dyc_row_pane_g3_ParamLimits

0x52c9,	// (0x0001c1cf) list_single_dyc_row_pane_g3

0x52d5,	// (0x0001c1db) list_single_dyc_row_pane_g4_ParamLimits

0x52d5,	// (0x0001c1db) list_single_dyc_row_pane_g4

0x0003,

0xfd3c,	// (0x00026c42) list_single_dyc_row_pane_g_ParamLimits

0xfd3c,	// (0x00026c42) list_single_dyc_row_pane_g

0x52e1,	// (0x0001c1e7) list_single_dyc_row_text_pane_ParamLimits

0x52e1,	// (0x0001c1e7) list_single_dyc_row_text_pane

0x0218,	// (0x0001711e) bg_sp_fs_scroll_pane

0x5300,	// (0x0001c206) thumb_sp_fs_scroll_pane

0x4143,	// (0x0001b049) list_medium_line_g1_ParamLimits

0x4143,	// (0x0001b049) list_medium_line_g1

0x5309,	// (0x0001c20f) list_medium_line_t1_ParamLimits

0x5309,	// (0x0001c20f) list_medium_line_t1

0x0cf1,	// (0x00017bf7) list_medium_line_x2_g1_ParamLimits

0x0cf1,	// (0x00017bf7) list_medium_line_x2_g1

0x0cfd,	// (0x00017c03) list_medium_line_x2_g2_ParamLimits

0x0cfd,	// (0x00017c03) list_medium_line_x2_g2

0x0001,

0xfd45,	// (0x00026c4b) list_medium_line_x2_g_ParamLimits

0xfd45,	// (0x00026c4b) list_medium_line_x2_g

0x531e,	// (0x0001c224) list_medium_line_x2_t1_ParamLimits

0x531e,	// (0x0001c224) list_medium_line_x2_t1

0x0cf1,	// (0x00017bf7) list_medium_line_x3_g1_ParamLimits

0x0cf1,	// (0x00017bf7) list_medium_line_x3_g1

0x0cfd,	// (0x00017c03) list_medium_line_x3_g2_ParamLimits

0x0cfd,	// (0x00017c03) list_medium_line_x3_g2

0x0001,

0xfd45,	// (0x00026c4b) list_medium_line_x3_g_ParamLimits

0xfd45,	// (0x00026c4b) list_medium_line_x3_g

0x531e,	// (0x0001c224) list_medium_line_x3_t1_ParamLimits

0x531e,	// (0x0001c224) list_medium_line_x3_t1

0x5334,	// (0x0001c23a) thumb_sp_fs_scroll_pane_g1

0x533d,	// (0x0001c243) thumb_sp_fs_scroll_pane_g2

0x5346,	// (0x0001c24c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4a,	// (0x00026c50) thumb_sp_fs_scroll_pane_g

0x5334,	// (0x0001c23a) bg_sp_fs_scroll_pane_g1

0x533d,	// (0x0001c243) bg_sp_fs_scroll_pane_g2

0x5346,	// (0x0001c24c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4a,	// (0x00026c50) bg_sp_fs_scroll_pane_g

0x0cf1,	// (0x00017bf7) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0cf1,	// (0x00017bf7) list_medium_line_x2_t3_g4_g1

0x0d85,	// (0x00017c8b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0d85,	// (0x00017c8b) list_medium_line_x2_t3_g4_g2

0x0cfd,	// (0x00017c03) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0cfd,	// (0x00017c03) list_medium_line_x2_t3_g4_g3

0x0d09,	// (0x00017c0f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0d09,	// (0x00017c0f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x000261ec) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x000261ec) list_medium_line_x2_t3_g4_g

0xe1e6,	// (0x000250ec) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe1e6,	// (0x000250ec) list_medium_line_x2_t3_g4_t1

0xe1fc,	// (0x00025102) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe1fc,	// (0x00025102) list_medium_line_x2_t3_g4_t2

0x0d2a,	// (0x00017c30) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0d2a,	// (0x00017c30) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd51,	// (0x00026c57) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd51,	// (0x00026c57) list_medium_line_x2_t3_g4_t

0x4143,	// (0x0001b049) list_medium_line_g2_g1_ParamLimits

0x4143,	// (0x0001b049) list_medium_line_g2_g1

0x414f,	// (0x0001b055) list_medium_line_g2_g2_ParamLimits

0x414f,	// (0x0001b055) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x00026925) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x00026925) list_medium_line_g2_g

0x534f,	// (0x0001c255) list_medium_line_g2_t1_ParamLimits

0x534f,	// (0x0001c255) list_medium_line_g2_t1

0x4143,	// (0x0001b049) list_medium_line_t3_g2_g1_ParamLimits

0x4143,	// (0x0001b049) list_medium_line_t3_g2_g1

0x414f,	// (0x0001b055) list_medium_line_t3_g2_g2_ParamLimits

0x414f,	// (0x0001b055) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x00026925) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x00026925) list_medium_line_t3_g2_g

0xe215,	// (0x0002511b) list_medium_line_t3_g2_t1_ParamLimits

0xe215,	// (0x0002511b) list_medium_line_t3_g2_t1

0xe22c,	// (0x00025132) list_medium_line_t3_g2_t2_ParamLimits

0xe22c,	// (0x00025132) list_medium_line_t3_g2_t2

0xe241,	// (0x00025147) list_medium_line_t3_g2_t3_ParamLimits

0xe241,	// (0x00025147) list_medium_line_t3_g2_t3

0x0002,

0xfd58,	// (0x00026c5e) list_medium_line_t3_g2_t_ParamLimits

0xfd58,	// (0x00026c5e) list_medium_line_t3_g2_t

0x513b,	// (0x0001c041) list_medium_line_right_icon_g1

0x5364,	// (0x0001c26a) list_medium_line_right_icon_t1

0x4143,	// (0x0001b049) list_medium_line_t2_g1_ParamLimits

0x4143,	// (0x0001b049) list_medium_line_t2_g1

0xe25a,	// (0x00025160) list_medium_line_t2_t1_ParamLimits

0xe25a,	// (0x00025160) list_medium_line_t2_t1

0xe274,	// (0x0002517a) list_medium_line_t2_t2_ParamLimits

0xe274,	// (0x0002517a) list_medium_line_t2_t2

0x0001,

0xfd5f,	// (0x00026c65) list_medium_line_t2_t_ParamLimits

0xfd5f,	// (0x00026c65) list_medium_line_t2_t

0x4143,	// (0x0001b049) list_medium_line_t3_g1_ParamLimits

0x4143,	// (0x0001b049) list_medium_line_t3_g1

0xe289,	// (0x0002518f) list_medium_line_t3_t1_ParamLimits

0xe289,	// (0x0002518f) list_medium_line_t3_t1

0xe2a0,	// (0x000251a6) list_medium_line_t3_t2_ParamLimits

0xe2a0,	// (0x000251a6) list_medium_line_t3_t2

0xe2b5,	// (0x000251bb) list_medium_line_t3_t3_ParamLimits

0xe2b5,	// (0x000251bb) list_medium_line_t3_t3

0x0002,

0xfd64,	// (0x00026c6a) list_medium_line_t3_t_ParamLimits

0xfd64,	// (0x00026c6a) list_medium_line_t3_t

0x4143,	// (0x0001b049) list_medium_line_g3_g1_ParamLimits

0x4143,	// (0x0001b049) list_medium_line_g3_g1

0x5372,	// (0x0001c278) list_medium_line_g3_g2_ParamLimits

0x5372,	// (0x0001c278) list_medium_line_g3_g2

0x414f,	// (0x0001b055) list_medium_line_g3_g3_ParamLimits

0x414f,	// (0x0001b055) list_medium_line_g3_g3

0x0002,

0xfd6b,	// (0x00026c71) list_medium_line_g3_g_ParamLimits

0xfd6b,	// (0x00026c71) list_medium_line_g3_g

0x537e,	// (0x0001c284) list_medium_line_g3_t1_ParamLimits

0x537e,	// (0x0001c284) list_medium_line_g3_t1

0x4143,	// (0x0001b049) list_medium_line_t2_g3_g1_ParamLimits

0x4143,	// (0x0001b049) list_medium_line_t2_g3_g1

0x5372,	// (0x0001c278) list_medium_line_t2_g3_g2_ParamLimits

0x5372,	// (0x0001c278) list_medium_line_t2_g3_g2

0x414f,	// (0x0001b055) list_medium_line_t2_g3_g3_ParamLimits

0x414f,	// (0x0001b055) list_medium_line_t2_g3_g3

0x0002,

0xfd6b,	// (0x00026c71) list_medium_line_t2_g3_g_ParamLimits

0xfd6b,	// (0x00026c71) list_medium_line_t2_g3_g

0xe2c7,	// (0x000251cd) list_medium_line_t2_g3_t1_ParamLimits

0xe2c7,	// (0x000251cd) list_medium_line_t2_g3_t1

0xe2de,	// (0x000251e4) list_medium_line_t2_g3_t2_ParamLimits

0xe2de,	// (0x000251e4) list_medium_line_t2_g3_t2

0x0001,

0xfd72,	// (0x00026c78) list_medium_line_t2_g3_t_ParamLimits

0xfd72,	// (0x00026c78) list_medium_line_t2_g3_t

0x4143,	// (0x0001b049) list_medium_line_t3_g3_g1_ParamLimits

0x4143,	// (0x0001b049) list_medium_line_t3_g3_g1

0x5372,	// (0x0001c278) list_medium_line_t3_g3_g2_ParamLimits

0x5372,	// (0x0001c278) list_medium_line_t3_g3_g2

0x414f,	// (0x0001b055) list_medium_line_t3_g3_g3_ParamLimits

0x414f,	// (0x0001b055) list_medium_line_t3_g3_g3

0x0002,

0xfd6b,	// (0x00026c71) list_medium_line_t3_g3_g_ParamLimits

0xfd6b,	// (0x00026c71) list_medium_line_t3_g3_g

0xe2f3,	// (0x000251f9) list_medium_line_t3_g3_t1_ParamLimits

0xe2f3,	// (0x000251f9) list_medium_line_t3_g3_t1

0xe30c,	// (0x00025212) list_medium_line_t3_g3_t2_ParamLimits

0xe30c,	// (0x00025212) list_medium_line_t3_g3_t2

0xe322,	// (0x00025228) list_medium_line_t3_g3_t3_ParamLimits

0xe322,	// (0x00025228) list_medium_line_t3_g3_t3

0x0002,

0xfd77,	// (0x00026c7d) list_medium_line_t3_g3_t_ParamLimits

0xfd77,	// (0x00026c7d) list_medium_line_t3_g3_t

0x5259,	// (0x0001c15f) list_medium_line_right_iconx2_g1

0x513b,	// (0x0001c041) list_medium_line_right_iconx2_g2

0x0001,

0xfd7e,	// (0x00026c84) list_medium_line_right_iconx2_g

0x5393,	// (0x0001c299) list_medium_line_right_iconx2_t1

0x5259,	// (0x0001c15f) list_medium_line_t2_right_iconx2_g1

0x513b,	// (0x0001c041) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7e,	// (0x00026c84) list_medium_line_t2_right_iconx2_g

0xe33c,	// (0x00025242) list_medium_line_t2_right_iconx2_t1

0xe34c,	// (0x00025252) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd83,	// (0x00026c89) list_medium_line_t2_right_iconx2_t

0x53a1,	// (0x0001c2a7) list_medium_line_x4_t4_t1

0xe35a,	// (0x00025260) list_medium_line_x4_t4_t2

0xe36a,	// (0x00025270) list_medium_line_x4_t4_t3

0xe37a,	// (0x00025280) list_medium_line_x4_t4_t4

0x0003,

0xfd88,	// (0x00026c8e) list_medium_line_x4_t4_t

0xe3b3,	// (0x000252b9) tport_appsw_pane_ParamLimits

0xe3b3,	// (0x000252b9) tport_appsw_pane

0xe3c1,	// (0x000252c7) tport_contact_pane_ParamLimits

0xe3c1,	// (0x000252c7) tport_contact_pane

0xe3cf,	// (0x000252d5) tport_listscroll_pane_ParamLimits

0xe3cf,	// (0x000252d5) tport_listscroll_pane

0xe3dd,	// (0x000252e3) cell_tport_appsw_pane_ParamLimits

0xe3dd,	// (0x000252e3) cell_tport_appsw_pane

0x33d9,	// (0x0001a2df) tport_appsw_pane_g1_ParamLimits

0x33d9,	// (0x0001a2df) tport_appsw_pane_g1

0x53af,	// (0x0001c2b5) tport_contact_pane_g1

0x53b8,	// (0x0001c2be) tport_contact_pane_t1

0x53c6,	// (0x0001c2cc) tport_contact_pane_t2

0x0001,

0xfd91,	// (0x00026c97) tport_contact_pane_t

0x53d4,	// (0x0001c2da) list_tport_pane

0x53dd,	// (0x0001c2e3) scroll_pane_cp_030

0xe408,	// (0x0002530e) cell_tport_appsw_pane_g1

0x53f6,	// (0x0001c2fc) cell_tport_appsw_pane_t1

0x0218,	// (0x0001711e) grid_highlight_pane_cp019

0xe418,	// (0x0002531e) list_tport_double_graphic_pane_ParamLimits

0xe418,	// (0x0002531e) list_tport_double_graphic_pane

0x0289,	// (0x0001718f) list_highlight_pane_cp023_ParamLimits

0x0289,	// (0x0001718f) list_highlight_pane_cp023

0xe429,	// (0x0002532f) list_tport_double_graphic_pane_g1_ParamLimits

0xe429,	// (0x0002532f) list_tport_double_graphic_pane_g1

0xe436,	// (0x0002533c) list_tport_double_graphic_pane_t1_ParamLimits

0xe436,	// (0x0002533c) list_tport_double_graphic_pane_t1

0xe44b,	// (0x00025351) list_tport_double_graphic_pane_t2_ParamLimits

0xe44b,	// (0x00025351) list_tport_double_graphic_pane_t2

0x0001,

0xfd9d,	// (0x00026ca3) list_tport_double_graphic_pane_t_ParamLimits

0xfd9d,	// (0x00026ca3) list_tport_double_graphic_pane_t

0x0218,	// (0x0001711e) main_cale_note_pane

0x7d5d,	// (0x0001ec63) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7d5d,	// (0x0001ec63) cell_vitu2_function_top_wide_pane_cp01

0xda93,	// (0x00024999) wait_bar_pane_cp05_ParamLimits

0x0218,	// (0x0001711e) listscroll_cmail_pane

0x540c,	// (0x0001c312) list_cmail_pane

0xe467,	// (0x0002536d) list_cmail_body_pane

0xe47c,	// (0x00025382) list_single_cmail_header_caption_pane

0xe496,	// (0x0002539c) list_single_cmail_header_detail_pane_ParamLimits

0xe496,	// (0x0002539c) list_single_cmail_header_detail_pane

0xe4c5,	// (0x000253cb) list_single_cmail_header_caption_pane_t1

0xe4d5,	// (0x000253db) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe4d5,	// (0x000253db) list_single_cmail_header_detail_pane_g1

0x542c,	// (0x0001c332) list_single_cmail_header_detail_pane_g2_ParamLimits

0x542c,	// (0x0001c332) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda2,	// (0x00026ca8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda2,	// (0x00026ca8) list_single_cmail_header_detail_pane_g

0x5445,	// (0x0001c34b) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5445,	// (0x0001c34b) list_single_cmail_header_detail_pane_t1

0x5483,	// (0x0001c389) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5483,	// (0x0001c389) list_single_cmail_header_editor_pane_bg

0x4de3,	// (0x0001bce9) list_cmail_body_pane_g1

0x5495,	// (0x0001c39b) list_cmail_body_pane_t1

0x3e80,	// (0x0001ad86) list_single_cmail_header_editor_pane_bg_g1

0x0fa8,	// (0x00017eae) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3e90,	// (0x0001ad96) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3e88,	// (0x0001ad8e) list_single_cmail_header_editor_pane_bg_g1_copy3

0x411b,	// (0x0001b021) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3eb0,	// (0x0001adb6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3ea0,	// (0x0001ada6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3ea8,	// (0x0001adae) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0f88,	// (0x00017e8e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe513,	// (0x00025419) calenote_gesture_pane_ParamLimits

0xe513,	// (0x00025419) calenote_gesture_pane

0xe52d,	// (0x00025433) calenote_window_pane_ParamLimits

0xe52d,	// (0x00025433) calenote_window_pane

0x54a3,	// (0x0001c3a9) popup_note_window_cp01

0xe545,	// (0x0002544b) calenote_swipe_1_pane_ParamLimits

0xe545,	// (0x0002544b) calenote_swipe_1_pane

0xdf84,	// (0x00024e8a) calenote_swipe_2_pane_ParamLimits

0xdf84,	// (0x00024e8a) calenote_swipe_2_pane

0x503a,	// (0x0001bf40) calenote_swipe_1_pane_g1_ParamLimits

0x503a,	// (0x0001bf40) calenote_swipe_1_pane_g1

0x5047,	// (0x0001bf4d) calenote_swipe_1_pane_g2_ParamLimits

0x5047,	// (0x0001bf4d) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x00026bdc) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x00026bdc) calenote_swipe_1_pane_g

0x54b5,	// (0x0001c3bb) calenote_swipe_1_pane_t1_ParamLimits

0x54b5,	// (0x0001c3bb) calenote_swipe_1_pane_t1

0x503a,	// (0x0001bf40) calenote_swipe_2_pane_g1_ParamLimits

0x503a,	// (0x0001bf40) calenote_swipe_2_pane_g1

0x54d4,	// (0x0001c3da) calenote_swipe_2_pane_g2_ParamLimits

0x54d4,	// (0x0001c3da) calenote_swipe_2_pane_g2

0x0001,

0xfdae,	// (0x00026cb4) calenote_swipe_2_pane_g_ParamLimits

0xfdae,	// (0x00026cb4) calenote_swipe_2_pane_g

0x54e0,	// (0x0001c3e6) calenote_swipe_2_pane_t1_ParamLimits

0x54e0,	// (0x0001c3e6) calenote_swipe_2_pane_t1

0x0218,	// (0x0001711e) main_mup_navstr_pane

0xbb4b,	// (0x00022a51) main_mup3_pane_t7_ParamLimits

0xbb4b,	// (0x00022a51) main_mup3_pane_t7

0x7683,	// (0x0001e589) main_mp4_pane_g6_ParamLimits

0x7683,	// (0x0001e589) main_mp4_pane_g6

0x7966,	// (0x0001e86c) main_image3_pane_t4_ParamLimits

0x7966,	// (0x0001e86c) main_image3_pane_t4

0xe558,	// (0x0002545e) popup_navstr_preview_pane_ParamLimits

0xe558,	// (0x0002545e) popup_navstr_preview_pane

0xe564,	// (0x0002546a) scroll_navstr_pane_ParamLimits

0xe564,	// (0x0002546a) scroll_navstr_pane

0x0218,	// (0x0001711e) bg_popup_preview_window_pane_cp04

0x5507,	// (0x0001c40d) popup_navstr_preview_pane_t1

0xe570,	// (0x00025476) scroll_navstr_pane_g1_ParamLimits

0xe570,	// (0x00025476) scroll_navstr_pane_g1

0xe57d,	// (0x00025483) scroll_navstr_pane_t1_ParamLimits

0xe57d,	// (0x00025483) scroll_navstr_pane_t1

0x54ac,	// (0x0001c3b2) bg_button_pane_cp014

0x54ac,	// (0x0001c3b2) bg_button_pane_cp030

0x4fdb,	// (0x0001bee1) list_double_fisheye_pane_g4_ParamLimits

0x4fdb,	// (0x0001bee1) list_double_fisheye_pane_g4

0x4fe7,	// (0x0001beed) list_double_fisheye_pane_g5_ParamLimits

0x4fe7,	// (0x0001beed) list_double_fisheye_pane_g5

0x5414,	// (0x0001c31a) sp_fs_scroll_pane_cp03

0x517d,	// (0x0001c083) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x5189,	// (0x0001c08f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x00026bf9) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x5195,	// (0x0001c09b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe45d,	// (0x00025363) sp_fs_scroll_pane_cp02

0x0b8c,	// (0x00017a92) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0b8c,	// (0x00017a92) popup_sp_fs_calendar_preview_list_single_pane

0x0218,	// (0x0001711e) main_cam6_pano_pane

0x0289,	// (0x0001718f) main_mup3_pane_ParamLimits

0x0218,	// (0x0001711e) main_phacti_pane

0xd964,	// (0x0002486a) bg_button_pane_cp11

0xd97c,	// (0x00024882) main_mobtv_info_pane_g2_ParamLimits

0xd97c,	// (0x00024882) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x00026b59) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x00026b59) main_mobtv_info_pane_g

0xdb30,	// (0x00024a36) sc_clock_pane_t5_ParamLimits

0xdb30,	// (0x00024a36) sc_clock_pane_t5

0xdd1e,	// (0x00024c24) main_radioblah_pane_g1_ParamLimits

0x4f49,	// (0x0001be4f) main_radioblah_pane_t3_ParamLimits

0x4f49,	// (0x0001be4f) main_radioblah_pane_t3

0x4f61,	// (0x0001be67) main_radioblah_pane_t4_ParamLimits

0x4f61,	// (0x0001be67) main_radioblah_pane_t4

0xdd3c,	// (0x00024c42) main_radioblah_text_pane_ParamLimits

0xdd3c,	// (0x00024c42) main_radioblah_text_pane

0xdd49,	// (0x00024c4f) main_radioblah_info_pane_g1_ParamLimits

0xdde2,	// (0x00024ce8) main_radioblah_info_pane_t4_ParamLimits

0xdde2,	// (0x00024ce8) main_radioblah_info_pane_t4

0x0289,	// (0x0001718f) main_sp_fs_calendar_pane

0xe58f,	// (0x00025495) main_phacti_pane_g1

0xe597,	// (0x0002549d) phacti_note_pane_ParamLimits

0xe597,	// (0x0002549d) phacti_note_pane

0x551e,	// (0x0001c424) phacti_term_pane_ParamLimits

0x551e,	// (0x0001c424) phacti_term_pane

0x5533,	// (0x0001c439) phacti_note_pane_t1_ParamLimits

0x5533,	// (0x0001c439) phacti_note_pane_t1

0x554a,	// (0x0001c450) phacti_term_pane_g1

0x5552,	// (0x0001c458) phacti_term_pane_t1_ParamLimits

0x5552,	// (0x0001c458) phacti_term_pane_t1

0x557c,	// (0x0001c482) popup_sp_fs_calendar_preview_list_single_pane_g1

0x5584,	// (0x0001c48a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb8,	// (0x00026cbe) popup_sp_fs_calendar_preview_list_single_pane_g

0x558c,	// (0x0001c492) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x558c,	// (0x0001c492) popup_sp_fs_calendar_preview_list_single_pane_t1

0x55a2,	// (0x0001c4a8) aid_popup_sp_fs_bg_corner_pane

0x30d0,	// (0x00019fd6) popup_sp_fs_calendar_preview_bg_pane_g1

0x0218,	// (0x0001711e) popup_sp_fs_calendar_preview_bg_pane

0x55aa,	// (0x0001c4b0) popup_sp_fs_calendar_preview_list_pane

0x0289,	// (0x0001718f) bg_main_sp_fs_cale_pane_ParamLimits

0x0289,	// (0x0001718f) bg_main_sp_fs_cale_pane

0x55bb,	// (0x0001c4c1) listscroll_cale_mrui_pane_ParamLimits

0x55bb,	// (0x0001c4c1) listscroll_cale_mrui_pane

0x55cf,	// (0x0001c4d5) listscroll_sp_fs_schedule_track_pane

0x55d8,	// (0x0001c4de) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x55d8,	// (0x0001c4de) main_sp_fs_ctrlbar_pane_cp01

0x55e9,	// (0x0001c4ef) main_sp_fs_ribbon_pane

0x55f1,	// (0x0001c4f7) popup_sp_fs_cale_preview_window

0xe5d6,	// (0x000254dc) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe5d6,	// (0x000254dc) list_single_sp_fs_schedule_track_pane

0x3a4d,	// (0x0001a953) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3a4d,	// (0x0001a953) bg_sp_fs_highlight_list_pane_cp03

0xe5e8,	// (0x000254ee) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe5e8,	// (0x000254ee) list_single_sp_fs_schedule_track_pane_g1

0xe5f4,	// (0x000254fa) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe5f4,	// (0x000254fa) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbd,	// (0x00026cc3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbd,	// (0x00026cc3) list_single_sp_fs_schedule_track_pane_g

0xe600,	// (0x00025506) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe600,	// (0x00025506) list_single_sp_fs_schedule_track_pane_t1

0xe61e,	// (0x00025524) sp_fs_schedule_track_pane_ParamLimits

0xe61e,	// (0x00025524) sp_fs_schedule_track_pane

0x5603,	// (0x0001c509) sp_fs_schedule_track_pane_g1

0x560b,	// (0x0001c511) sp_fs_schedule_track_pane_g2

0x5613,	// (0x0001c519) sp_fs_schedule_track_pane_g3

0x561b,	// (0x0001c521) sp_fs_schedule_track_pane_g4

0x5623,	// (0x0001c529) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc2,	// (0x00026cc8) sp_fs_schedule_track_pane_g

0x3e80,	// (0x0001ad86) bg_sp_fs_schedule_viewer_highlight_g1

0x0fa8,	// (0x00017eae) bg_sp_fs_schedule_viewer_highlight_g2

0x3e88,	// (0x0001ad8e) bg_sp_fs_schedule_viewer_highlight_g3

0x3e90,	// (0x0001ad96) bg_sp_fs_schedule_viewer_highlight_g4

0x411b,	// (0x0001b021) bg_sp_fs_schedule_viewer_highlight_g5

0x3ea0,	// (0x0001ada6) bg_sp_fs_schedule_viewer_highlight_g6

0x3ea8,	// (0x0001adae) bg_sp_fs_schedule_viewer_highlight_g7

0x3eb0,	// (0x0001adb6) bg_sp_fs_schedule_viewer_highlight_g8

0x0f88,	// (0x00017e8e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdcd,	// (0x00026cd3) bg_sp_fs_schedule_viewer_highlight_g

0x0218,	// (0x0001711e) bg_main_sp_fs_ribbon_pane

0xe630,	// (0x00025536) main_sp_fs_ribbon_pane_g1

0x562b,	// (0x0001c531) main_sp_fs_ribbon_pane_t1

0xe639,	// (0x0002553f) main_sp_fs_ribbon_pane_t2

0x563a,	// (0x0001c540) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde0,	// (0x00026ce6) main_sp_fs_ribbon_pane_t

0x5649,	// (0x0001c54f) main_sp_fs_ribbon_scheduler_pane

0x5651,	// (0x0001c557) bg_main_sp_fs_ribbon_pane_g1

0x565a,	// (0x0001c560) bg_main_sp_fs_ribbon_pane_g2

0x5663,	// (0x0001c569) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde7,	// (0x00026ced) bg_main_sp_fs_ribbon_pane_g

0x566b,	// (0x0001c571) main_sp_fs_ribbon_scheduler_pane_g1

0x5674,	// (0x0001c57a) main_sp_fs_ribbon_scheduler_pane_g2

0x567d,	// (0x0001c583) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdee,	// (0x00026cf4) main_sp_fs_ribbon_scheduler_pane_g

0x5686,	// (0x0001c58c) list_cale_mrui_pane

0xe648,	// (0x0002554e) sp_fs_scroll_pane_cp07_ParamLimits

0xe648,	// (0x0002554e) sp_fs_scroll_pane_cp07

0xe65e,	// (0x00025564) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe65e,	// (0x00025564) bg_sp_fs_schedule_viewer_highlight

0x568f,	// (0x0001c595) list_single_sp_fs_schedule_track_pane_cp01

0x5697,	// (0x0001c59d) list_sp_fs_schedule_track_pane

0x569f,	// (0x0001c5a5) sp_fs_scroll_pane_cp06_ParamLimits

0x569f,	// (0x0001c5a5) sp_fs_scroll_pane_cp06

0x30d0,	// (0x00019fd6) bgmain_sp_fs_calendar_pane_g1

0xe66b,	// (0x00025571) list_single_cale_mrui_pane_ParamLimits

0xe66b,	// (0x00025571) list_single_cale_mrui_pane

0x56b1,	// (0x0001c5b7) list_single_cale_mrui_row_pane_ParamLimits

0x56b1,	// (0x0001c5b7) list_single_cale_mrui_row_pane

0x56be,	// (0x0001c5c4) list_single_cale_mrui_row_pane_g1_ParamLimits

0x56be,	// (0x0001c5c4) list_single_cale_mrui_row_pane_g1

0x56f6,	// (0x0001c5fc) list_single_cale_mrui_row_pane_t1_ParamLimits

0x56f6,	// (0x0001c5fc) list_single_cale_mrui_row_pane_t1

0xe68f,	// (0x00025595) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe68f,	// (0x00025595) list_single_cale_mrui_row_pane_t2

0x5708,	// (0x0001c60e) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5708,	// (0x0001c60e) list_single_cale_mrui_row_pane_t3

0x5737,	// (0x0001c63d) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5737,	// (0x0001c63d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdfa,	// (0x00026d00) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdfa,	// (0x00026d00) list_single_cale_mrui_row_pane_t

0xe6f5,	// (0x000255fb) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe6f5,	// (0x000255fb) list_single_cmail_header_editor_pane_bg_cp01

0xe719,	// (0x0002561f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe719,	// (0x0002561f) list_single_cmail_header_editor_pane_bg_cp02

0xe735,	// (0x0002563b) main_radioblah_text_pane_t1_ParamLimits

0xe735,	// (0x0002563b) main_radioblah_text_pane_t1

0x5766,	// (0x0001c66c) cam6_indi_pane_cp01

0x576e,	// (0x0001c674) cam6_mode_pane_cp01

0x5776,	// (0x0001c67c) cam6_pano_pane

0x577f,	// (0x0001c685) cam6_zoom_pane_cp01

0x5789,	// (0x0001c68f) cam6_pano_image_pane

0x5792,	// (0x0001c698) cam6_pano_pane_g1

0x4de3,	// (0x0001bce9) cam6_pano_pane_g2

0x579b,	// (0x0001c6a1) cam6_pano_pane_g3

0x57a4,	// (0x0001c6aa) cam6_pano_pane_g4

0x36b0,	// (0x0001a5b6) cam6_pano_pane_g5

0x57ad,	// (0x0001c6b3) cam6_pano_pane_g6

0x57b5,	// (0x0001c6bb) cam6_pano_pane_g7

0x57bd,	// (0x0001c6c3) cam6_pano_pane_g8

0x57c6,	// (0x0001c6cc) cam6_pano_pane_g9

0x0008,

0xfe03,	// (0x00026d09) cam6_pano_pane_g

0x0218,	// (0x0001711e) main_browser_tag_pane

0x54ff,	// (0x0001c405) grid_navstr_albumart_pane

0x57d1,	// (0x0001c6d7) cell_navstr_albumart_pane_ParamLimits

0x57d1,	// (0x0001c6d7) cell_navstr_albumart_pane

0x57ed,	// (0x0001c6f3) cell_navstr_albumart_pane_g1

0x29b4,	// (0x000198ba) cell_navstr_albumart_pane_g2

0x29c4,	// (0x000198ca) cell_navstr_albumart_pane_g3

0x29bc,	// (0x000198c2) cell_navstr_albumart_pane_g4

0x0003,

0xfe16,	// (0x00026d1c) cell_navstr_albumart_pane_g

0xe750,	// (0x00025656) bt_list_pane_ParamLimits

0xe750,	// (0x00025656) bt_list_pane

0xe769,	// (0x0002566f) bt_list_pane_t1

0xe778,	// (0x0002567e) bt_list_pane_t2

0x0001,

0xfe1f,	// (0x00026d25) bt_list_pane_t

0x0218,	// (0x0001711e) main_cale_prevew_pane

0xe787,	// (0x0002568d) popup_cale_preview_window_ParamLimits

0xe787,	// (0x0002568d) popup_cale_preview_window

0x0289,	// (0x0001718f) bg_popup_preview_window_pane_cp05_ParamLimits

0x0289,	// (0x0001718f) bg_popup_preview_window_pane_cp05

0x57f5,	// (0x0001c6fb) list_cale_preview_pane_ParamLimits

0x57f5,	// (0x0001c6fb) list_cale_preview_pane

0xe7a2,	// (0x000256a8) list_double_cale_preview_pane_ParamLimits

0xe7a2,	// (0x000256a8) list_double_cale_preview_pane

0xe7b6,	// (0x000256bc) list_single_cale_preview_pane_ParamLimits

0xe7b6,	// (0x000256bc) list_single_cale_preview_pane

0xe7ce,	// (0x000256d4) list_single_cale_preview_pane_g1

0xe7d6,	// (0x000256dc) list_single_cale_preview_pane_t1_ParamLimits

0xe7d6,	// (0x000256dc) list_single_cale_preview_pane_t1

0xe7eb,	// (0x000256f1) list_double_cale_preview_pane_g1

0xe7f3,	// (0x000256f9) list_double_cale_preview_pane_t1_ParamLimits

0xe7f3,	// (0x000256f9) list_double_cale_preview_pane_t1

0xe808,	// (0x0002570e) list_double_cale_preview_pane_t2_ParamLimits

0xe808,	// (0x0002570e) list_double_cale_preview_pane_t2

0x0001,

0xfe24,	// (0x00026d2a) list_double_cale_preview_pane_t_ParamLimits

0xfe24,	// (0x00026d2a) list_double_cale_preview_pane_t

0x0218,	// (0x0001711e) main_ezdial_pane

0x0289,	// (0x0001718f) main_sp_fs_email_pane_ParamLimits

0xdfbc,	// (0x00024ec2) cmail_ddmenu_btn01_pane_ParamLimits

0xdfbc,	// (0x00024ec2) cmail_ddmenu_btn01_pane

0xdfd9,	// (0x00024edf) cmail_ddmenu_btn02_pane_ParamLimits

0xdfd9,	// (0x00024edf) cmail_ddmenu_btn02_pane

0xdff7,	// (0x00024efd) cmail_ddmenu_btn03_pane_ParamLimits

0xdff7,	// (0x00024efd) cmail_ddmenu_btn03_pane

0xe025,	// (0x00024f2b) main_sp_fs_ctrlbar_pane_ParamLimits

0xe041,	// (0x00024f47) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe467,	// (0x0002536d) list_cmail_body_pane_ParamLimits

0x5423,	// (0x0001c329) bg_button_pane_cp12

0x5438,	// (0x0001c33e) list_single_cmail_header_detail_pane_g3_ParamLimits

0x5438,	// (0x0001c33e) list_single_cmail_header_detail_pane_g3

0xe4ed,	// (0x000253f3) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe4ed,	// (0x000253f3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda9,	// (0x00026caf) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda9,	// (0x00026caf) list_single_cmail_header_detail_pane_t

0x5567,	// (0x0001c46d) phacti_term_pane_t2_ParamLimits

0x5567,	// (0x0001c46d) phacti_term_pane_t2

0x0001,

0xfdb3,	// (0x00026cb9) phacti_term_pane_t_ParamLimits

0xfdb3,	// (0x00026cb9) phacti_term_pane_t

0x5801,	// (0x0001c707) aid_size_list_single_double

0xe820,	// (0x00025726) popup_ezdial_listscroll_window

0xe840,	// (0x00025746) popup_number_entry_window_cp01

0x172e,	// (0x00018634) bg_popup_call_pane_cp09

0x580d,	// (0x0001c713) ezdial_list_pane

0x5815,	// (0x0001c71b) scroll_pane_cp23

0x2eaf,	// (0x00019db5) bg_button_pane_cp028_ParamLimits

0x2eaf,	// (0x00019db5) bg_button_pane_cp028

0xe84e,	// (0x00025754) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe84e,	// (0x00025754) cmail_ddmenu_btn01_pane_g1

0xe85e,	// (0x00025764) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe85e,	// (0x00025764) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe29,	// (0x00026d2f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe29,	// (0x00026d2f) cmail_ddmenu_btn01_pane_g

0x581d,	// (0x0001c723) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x581d,	// (0x0001c723) cmail_ddmenu_btn01_pane_t1

0x2b9b,	// (0x00019aa1) bg_button_pane_cp029_ParamLimits

0x2b9b,	// (0x00019aa1) bg_button_pane_cp029

0xe85e,	// (0x00025764) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe85e,	// (0x00025764) cmail_ddmenu_btn02_pane_g1

0xe876,	// (0x0002577c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe876,	// (0x0002577c) cmail_ddmenu_btn02_pane_t1

0x3a4d,	// (0x0001a953) bg_button_pane_cp031_ParamLimits

0x3a4d,	// (0x0001a953) bg_button_pane_cp031

0xe85e,	// (0x00025764) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe85e,	// (0x00025764) cmail_ddmenu_btn03_pane_g1

0xe876,	// (0x0002577c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe876,	// (0x0002577c) cmail_ddmenu_btn03_pane_t1

0xc38c,	// (0x00023292) cell_dialer2_keypad_pane_t1_ParamLimits

0xc3a6,	// (0x000232ac) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc3a6,	// (0x000232ac) cell_dialer2_keypad_pane_t1_copy1

0xd7f4,	// (0x000246fa) ncimui_group_button_pane

0x0289,	// (0x0001718f) main_sp_fs_calendar_pane_ParamLimits

0xe47c,	// (0x00025382) list_single_cmail_header_caption_pane_ParamLimits

0x55b2,	// (0x0001c4b8) aid_recal_txt_sm_pane

0x0218,	// (0x0001711e) mian_recal_day_pane

0x55f1,	// (0x0001c4f7) popup_sp_fs_cale_preview_window_ParamLimits

0x0218,	// (0x0001711e) list_recal_day_pane

0x5854,	// (0x0001c75a) list_single_recal_day_pane_ParamLimits

0x5854,	// (0x0001c75a) list_single_recal_day_pane

0x5866,	// (0x0001c76c) list_single_recal_day_pane_g1_ParamLimits

0x5866,	// (0x0001c76c) list_single_recal_day_pane_g1

0x5872,	// (0x0001c778) list_single_recal_day_pane_g2_ParamLimits

0x5872,	// (0x0001c778) list_single_recal_day_pane_g2

0x587e,	// (0x0001c784) list_single_recal_day_pane_g3_ParamLimits

0x587e,	// (0x0001c784) list_single_recal_day_pane_g3

0xe89a,	// (0x000257a0) list_single_recal_day_pane_g4_ParamLimits

0xe89a,	// (0x000257a0) list_single_recal_day_pane_g4

0x588a,	// (0x0001c790) list_single_recal_day_pane_g5_ParamLimits

0x588a,	// (0x0001c790) list_single_recal_day_pane_g5

0x5896,	// (0x0001c79c) list_single_recal_day_pane_g6_ParamLimits

0x5896,	// (0x0001c79c) list_single_recal_day_pane_g6

0x0005,

0xfe38,	// (0x00026d3e) list_single_recal_day_pane_g_ParamLimits

0xfe38,	// (0x00026d3e) list_single_recal_day_pane_g

0x58a2,	// (0x0001c7a8) list_single_recal_day_pane_t1

0x58b0,	// (0x0001c7b6) list_single_recal_day_pane_t2

0x0001,

0xfe45,	// (0x00026d4b) list_single_recal_day_pane_t

0xe8a8,	// (0x000257ae) ncimui_query_button_pane_ParamLimits

0xe8a8,	// (0x000257ae) ncimui_query_button_pane

0xe8b8,	// (0x000257be) ncimui_query_button_pane_t1_ParamLimits

0xe8b8,	// (0x000257be) ncimui_query_button_pane_t1

0x58be,	// (0x0001c7c4) ncimui_query_button_pane_t2_ParamLimits

0x58be,	// (0x0001c7c4) ncimui_query_button_pane_t2

0x0001,

0xfe4a,	// (0x00026d50) ncimui_query_button_pane_t_ParamLimits

0xfe4a,	// (0x00026d50) ncimui_query_button_pane_t

0xe8cb,	// (0x000257d1) query_button_pane_ParamLimits

0xe8cb,	// (0x000257d1) query_button_pane

0x0218,	// (0x0001711e) bg_button_pane_cp0028

0x58d1,	// (0x0001c7d7) query_button_pane_t1

0xae88,	// (0x00021d8e) main_tport_pane_ParamLimits

0xe38a,	// (0x00025290) bg_popup_window_pane_cp01_ParamLimits

0xe38a,	// (0x00025290) bg_popup_window_pane_cp01

0xe397,	// (0x0002529d) heading_pane_cp08_ParamLimits

0xe397,	// (0x0002529d) heading_pane_cp08

0xe3a5,	// (0x000252ab) heading_pane_cp07_ParamLimits

0xe3a5,	// (0x000252ab) heading_pane_cp07

0x53ee,	// (0x0001c2f4) cell_tport_appsw_pane_g2

0x0002,

0xfd96,	// (0x00026c9c) cell_tport_appsw_pane_g

0xa604,	// (0x0002150a) input_candi_list_open_g1

0x119b,	// (0x000180a1) list_cale_time_pane_g6_ParamLimits

0x119b,	// (0x000180a1) list_cale_time_pane_g6

0xb605,	// (0x0002250b) aid_size_touch_calib_1_ParamLimits

0xb605,	// (0x0002250b) aid_size_touch_calib_1

0xb611,	// (0x00022517) aid_size_touch_calib_2_ParamLimits

0xb611,	// (0x00022517) aid_size_touch_calib_2

0xb61f,	// (0x00022525) aid_size_touch_calib_3_ParamLimits

0xb61f,	// (0x00022525) aid_size_touch_calib_3

0xb62f,	// (0x00022535) aid_size_touch_calib_4_ParamLimits

0xb62f,	// (0x00022535) aid_size_touch_calib_4

0xb63d,	// (0x00022543) main_touch_calib_button_group_pane_ParamLimits

0xb63d,	// (0x00022543) main_touch_calib_button_group_pane

0xb64b,	// (0x00022551) main_touch_calib_pane_g1_ParamLimits

0xb657,	// (0x0002255d) main_touch_calib_pane_g2_ParamLimits

0xb663,	// (0x00022569) main_touch_calib_pane_g3_ParamLimits

0xb66f,	// (0x00022575) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0002667b) main_touch_calib_pane_g_ParamLimits

0xb67b,	// (0x00022581) main_touch_calib_pane_t1_ParamLimits

0xb692,	// (0x00022598) main_touch_calib_pane_t2_ParamLimits

0xb6a9,	// (0x000225af) main_touch_calib_pane_t3_ParamLimits

0xb6bd,	// (0x000225c3) main_touch_calib_pane_t4_ParamLimits

0xb6d3,	// (0x000225d9) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00026684) main_touch_calib_pane_t_ParamLimits

0x347a,	// (0x0001a380) list_single_fp_cale_pane_g3_ParamLimits

0x347a,	// (0x0001a380) list_single_fp_cale_pane_g3

0x7b65,	// (0x0001ea6b) bg_button_pane_cp012_ParamLimits

0x7b65,	// (0x0001ea6b) bg_vkb2_func_pane_cp03_ParamLimits

0x7f64,	// (0x0001ee6a) cell_vitu2_function_top_pane_g1_ParamLimits

0x7b65,	// (0x0001ea6b) bg_vkb2_func_pane_cp04_ParamLimits

0xd790,	// (0x00024696) main_ncimui_button_group_pane_ParamLimits

0xd790,	// (0x00024696) main_ncimui_button_group_pane

0xd7e2,	// (0x000246e8) main_ncimui_pane_t3_ParamLimits

0xd7e2,	// (0x000246e8) main_ncimui_pane_t3

0x5515,	// (0x0001c41b) phacti_button_group_pane

0x5801,	// (0x0001c707) aid_size_list_single_double_ParamLimits

0xe820,	// (0x00025726) popup_ezdial_listscroll_window_ParamLimits

0xe840,	// (0x00025746) popup_number_entry_window_cp01_ParamLimits

0xe8d8,	// (0x000257de) phacti_button_pane_ParamLimits

0xe8d8,	// (0x000257de) phacti_button_pane

0x0218,	// (0x0001711e) bg_button_pane_cp14

0x58df,	// (0x0001c7e5) phacti_button_pane_t1

0xe8e9,	// (0x000257ef) main_touch_calib_button_pane_ParamLimits

0xe8e9,	// (0x000257ef) main_touch_calib_button_pane

0x09f2,	// (0x000178f8) bg_button_pane_cp18_ParamLimits

0x09f2,	// (0x000178f8) bg_button_pane_cp18

0x58ed,	// (0x0001c7f3) main_touch_calib_button_pane_t1_ParamLimits

0x58ed,	// (0x0001c7f3) main_touch_calib_button_pane_t1

0x5903,	// (0x0001c809) main_touch_calib_button_pane_t2_ParamLimits

0x5903,	// (0x0001c809) main_touch_calib_button_pane_t2

0x0001,

0xfe4f,	// (0x00026d55) main_touch_calib_button_pane_t_ParamLimits

0xfe4f,	// (0x00026d55) main_touch_calib_button_pane_t

0x0218,	// (0x0001711e) cell_ncimui_button_pane

0x0218,	// (0x0001711e) bg_button_pane_cp032

0x5921,	// (0x0001c827) cell_ncimui_button_pane_t1

0x7877,	// (0x0001e77d) image3_infobar_pane_ParamLimits

0x7877,	// (0x0001e77d) image3_infobar_pane

0xdb52,	// (0x00024a58) fs_bigclock_status_pane_ParamLimits

0xdb52,	// (0x00024a58) fs_bigclock_status_pane

0xdb5f,	// (0x00024a65) main_fs_bigclock_clock_pane_ParamLimits

0xdb5f,	// (0x00024a65) main_fs_bigclock_clock_pane

0xdb83,	// (0x00024a89) main_fs_bigclock_indi_pane_ParamLimits

0xdb83,	// (0x00024a89) main_fs_bigclock_indi_pane

0xdbbb,	// (0x00024ac1) main_fs_bigclock_swipe_pane_ParamLimits

0xdbbb,	// (0x00024ac1) main_fs_bigclock_swipe_pane

0x0218,	// (0x0001711e) main_fs_clock_dumped_data

0xdbed,	// (0x00024af3) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdbed,	// (0x00024af3) list_single_fs_bigclock_indicator_pane_g1

0xdc12,	// (0x00024b18) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdc12,	// (0x00024b18) list_single_fs_bigclock_indicator_pane_g2

0xdc2c,	// (0x00024b32) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdc2c,	// (0x00024b32) list_single_fs_bigclock_indicator_pane_g3

0xdc4a,	// (0x00024b50) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdc4a,	// (0x00024b50) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x00026b8d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x00026b8d) list_single_fs_bigclock_indicator_pane_g

0xdc70,	// (0x00024b76) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdc70,	// (0x00024b76) list_single_fs_bigclock_indicator_pane_t1

0xdc98,	// (0x00024b9e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdc98,	// (0x00024b9e) list_single_fs_bigclock_indicator_pane_t2

0xdcc0,	// (0x00024bc6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdcc0,	// (0x00024bc6) list_single_fs_bigclock_indicator_pane_t3

0xdcea,	// (0x00024bf0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdcea,	// (0x00024bf0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x00026b98) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x00026b98) list_single_fs_bigclock_indicator_pane_t

0x592f,	// (0x0001c835) image3_infobar_fav_pane_ParamLimits

0x592f,	// (0x0001c835) image3_infobar_fav_pane

0x593f,	// (0x0001c845) image3_infobar_loc_pane_ParamLimits

0x593f,	// (0x0001c845) image3_infobar_loc_pane

0x5955,	// (0x0001c85b) image3_infobar_time_pane_ParamLimits

0x5955,	// (0x0001c85b) image3_infobar_time_pane

0x30d0,	// (0x00019fd6) image3_infobar_time_pane_g1

0x5965,	// (0x0001c86b) image3_infobar_time_pane_t1

0x30d0,	// (0x00019fd6) image3_infobar_loc_pane_g1

0x5973,	// (0x0001c879) image3_infobar_loc_pane_g2

0x0001,

0xfe54,	// (0x00026d5a) image3_infobar_loc_pane_g

0x597b,	// (0x0001c881) image3_infobar_loc_pane_t1

0x30d0,	// (0x00019fd6) image3_infobar_fav_pane_g1

0x5989,	// (0x0001c88f) image3_infobar_fav_pane_g2

0x0001,

0xfe59,	// (0x00026d5f) image3_infobar_fav_pane_g

0x5991,	// (0x0001c897) fs_bigclock_status_battery_pane

0x599a,	// (0x0001c8a0) fs_bigclock_status_signal_pane

0x59a3,	// (0x0001c8a9) fs_bigclock_status_title_pane

0x59ac,	// (0x0001c8b2) fs_bigclock_status_signal_pane_g1

0x59b5,	// (0x0001c8bb) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5e,	// (0x00026d64) fs_bigclock_status_signal_pane_g

0x59bd,	// (0x0001c8c3) fs_bigclock_status_battery_pane_g1

0x59c6,	// (0x0001c8cc) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe63,	// (0x00026d69) fs_bigclock_status_battery_pane_g

0x59ce,	// (0x0001c8d4) fs_bigclock_status_title_pane_t1

0x30d0,	// (0x00019fd6) main_fs_bigclock_clock_pane_g1

0x59dc,	// (0x0001c8e2) main_fs_bigclock_clock_pane_g2

0x59dc,	// (0x0001c8e2) main_fs_bigclock_clock_pane_g3

0x59dc,	// (0x0001c8e2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe68,	// (0x00026d6e) main_fs_bigclock_clock_pane_g

0x59e8,	// (0x0001c8ee) main_fs_bigclock_clock_pane_t1

0xe8fb,	// (0x00025801) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe71,	// (0x00026d77) main_fs_bigclock_clock_pane_t

0x59f6,	// (0x0001c8fc) list_single_fs_bigclock_indicator_pane_ParamLimits

0x59f6,	// (0x0001c8fc) list_single_fs_bigclock_indicator_pane

0xe90a,	// (0x00025810) list_single_fs_bigclock_pane_ParamLimits

0xe90a,	// (0x00025810) list_single_fs_bigclock_pane

0x5a10,	// (0x0001c916) main_fs_bigclock_indicator_pane_t1

0x5a1f,	// (0x0001c925) list_single_fs_bigclock_pane_g1

0x5a27,	// (0x0001c92d) list_single_fs_bigclock_pane_t1

0x30d0,	// (0x00019fd6) main_fs_bigclock_swipe_pane_g1

0x5a67,	// (0x0001c96d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe82,	// (0x00026d88) main_fs_bigclock_swipe_pane_g

0x5a6f,	// (0x0001c975) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5a6f,	// (0x0001c975) main_fs_bigclock_swipe_pane_t1

0x9dfb,	// (0x00020d01) call_type_pane_ParamLimits

0x0218,	// (0x0001711e) main_btmg_pane

0x56ea,	// (0x0001c5f0) list_single_cale_mrui_row_pane_g2_ParamLimits

0x56ea,	// (0x0001c5f0) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdf5,	// (0x00026cfb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf5,	// (0x00026cfb) list_single_cale_mrui_row_pane_g

0x583b,	// (0x0001c741) list_recal_vselct_arw_lo_pane

0x5843,	// (0x0001c749) list_recal_vselct_arw_up_pane

0x584b,	// (0x0001c751) list_recal_vselct_pane

0x5a8c,	// (0x0001c992) btmg_button_pane

0xe96d,	// (0x00025873) main_btmg_pane_g1

0x0218,	// (0x0001711e) bg_button_pane_cp044

0x5a96,	// (0x0001c99c) btmg_button_pane_t1

0x2b93,	// (0x00019a99) aid_listscroll_gen

0x0289,	// (0x0001718f) main_cntbar_detail_pane

0x5404,	// (0x0001c30a) list_cmail_folder_pane

0x5414,	// (0x0001c31a) sp_fs_scroll_pane_cp03_ParamLimits

0xe975,	// (0x0002587b) list_single_fs_dyc_pane_cp01_ParamLimits

0xe975,	// (0x0002587b) list_single_fs_dyc_pane_cp01

0x5aa4,	// (0x0001c9aa) aid_size_cmail_indent

0x5aad,	// (0x0001c9b3) list_single_dyc_row_pane_cp01

0xe9ac,	// (0x000258b2) cntbar_detail_list_pane_ParamLimits

0xe9ac,	// (0x000258b2) cntbar_detail_list_pane

0xe9ec,	// (0x000258f2) main_cntbar_detail_cont_pane_ParamLimits

0xe9ec,	// (0x000258f2) main_cntbar_detail_cont_pane

0x9d95,	// (0x00020c9b) scroll_pane_cp032_ParamLimits

0x9d95,	// (0x00020c9b) scroll_pane_cp032

0xe9f8,	// (0x000258fe) cntbar_detail_list_event_pane_ParamLimits

0xe9f8,	// (0x000258fe) cntbar_detail_list_event_pane

0xe9ba,	// (0x000258c0) cntbar_detail_list_shct_pane

0x0ff6,	// (0x00017efc) aid_list_gen

0x5ae4,	// (0x0001c9ea) aid_scroll

0x5aed,	// (0x0001c9f3) aid_size_touch_scroll_bar

0x5af6,	// (0x0001c9fc) aid_list_double

0x5aff,	// (0x0001ca05) aid_list_single

0xea08,	// (0x0002590e) aid_list_single_lg

0x5b08,	// (0x0001ca0e) aid_list_z_g_a_sm

0x5b10,	// (0x0001ca16) aid_list_z_g_d

0x5b18,	// (0x0001ca1e) aid_txt_z_prm

0x5b26,	// (0x0001ca2c) aid_txt_z_prm_cp01

0x5b34,	// (0x0001ca3a) aid_txt_z_sec

0xea11,	// (0x00025917) main_cntbar_detail_cont_pane_g1_ParamLimits

0xea11,	// (0x00025917) main_cntbar_detail_cont_pane_g1

0xea1e,	// (0x00025924) main_cntbar_detail_cont_pane_g2_ParamLimits

0xea1e,	// (0x00025924) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe87,	// (0x00026d8d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe87,	// (0x00026d8d) main_cntbar_detail_cont_pane_g

0x5b42,	// (0x0001ca48) main_cntbar_detail_cont_pane_t1

0x5b50,	// (0x0001ca56) main_cntbar_detail_cont_pane_t2

0x5b5e,	// (0x0001ca64) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe8c,	// (0x00026d92) main_cntbar_detail_cont_pane_t

0xea2a,	// (0x00025930) cell_cntbar_detail_list_shct_pane_ParamLimits

0xea2a,	// (0x00025930) cell_cntbar_detail_list_shct_pane

0x5b6c,	// (0x0001ca72) cntbar_detail_list_shct_pane_g1

0x5b75,	// (0x0001ca7b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe93,	// (0x00026d99) cntbar_detail_list_shct_pane_g

0xea3e,	// (0x00025944) cntbar_detail_list_event_pane_g1_ParamLimits

0xea3e,	// (0x00025944) cntbar_detail_list_event_pane_g1

0xea4a,	// (0x00025950) cntbar_detail_list_event_pane_g2_ParamLimits

0xea4a,	// (0x00025950) cntbar_detail_list_event_pane_g2

0x0005,

0xfe98,	// (0x00026d9e) cntbar_detail_list_event_pane_g_ParamLimits

0xfe98,	// (0x00026d9e) cntbar_detail_list_event_pane_g

0xeab8,	// (0x000259be) cntbar_detail_list_event_pane_t1_ParamLimits

0xeab8,	// (0x000259be) cntbar_detail_list_event_pane_t1

0xeacd,	// (0x000259d3) cntbar_detail_list_event_pane_t2_ParamLimits

0xeacd,	// (0x000259d3) cntbar_detail_list_event_pane_t2

0x0002,

0xfea5,	// (0x00026dab) cntbar_detail_list_event_pane_t_ParamLimits

0xfea5,	// (0x00026dab) cntbar_detail_list_event_pane_t

0x30d0,	// (0x00019fd6) cell_cntbar_detail_list_shct_pane_g1

0xa124,	// (0x0002102a) navi_pane_mv_g3

0x0289,	// (0x0001718f) main_cntbar_detail_pane_ParamLimits

0x0218,	// (0x0001711e) main_notif_wgt_pane

0x75d8,	// (0x0001e4de) aid_tch_main_mp4_pane_g4

0x77ed,	// (0x0001e6f3) popup_slider_window_cp02

0x5832,	// (0x0001c738) list_recal_day_event_pane

0xe98c,	// (0x00025892) cntbar_detail_btn_pane_ParamLimits

0xe98c,	// (0x00025892) cntbar_detail_btn_pane

0xe99c,	// (0x000258a2) cntbar_detail_btn_pane_cp01_ParamLimits

0xe99c,	// (0x000258a2) cntbar_detail_btn_pane_cp01

0xe9ba,	// (0x000258c0) cntbar_detail_list_shct_pane_ParamLimits

0xe9c6,	// (0x000258cc) cntbar_detail_pane_g1_ParamLimits

0xe9c6,	// (0x000258cc) cntbar_detail_pane_g1

0xe9d6,	// (0x000258dc) cntbar_detail_pane_t1_ParamLimits

0xe9d6,	// (0x000258dc) cntbar_detail_pane_t1

0xea56,	// (0x0002595c) cntbar_detail_list_event_pane_g3_ParamLimits

0xea56,	// (0x0002595c) cntbar_detail_list_event_pane_g3

0xea6e,	// (0x00025974) cntbar_detail_list_event_pane_g4_ParamLimits

0xea6e,	// (0x00025974) cntbar_detail_list_event_pane_g4

0xea86,	// (0x0002598c) cntbar_detail_list_event_pane_g5_ParamLimits

0xea86,	// (0x0002598c) cntbar_detail_list_event_pane_g5

0xea9e,	// (0x000259a4) cntbar_detail_list_event_pane_g6_ParamLimits

0xea9e,	// (0x000259a4) cntbar_detail_list_event_pane_g6

0xeae2,	// (0x000259e8) cntbar_detail_list_event_pane_t3_ParamLimits

0xeae2,	// (0x000259e8) cntbar_detail_list_event_pane_t3

0xeaf4,	// (0x000259fa) popup_notif_wgt_window_ParamLimits

0xeaf4,	// (0x000259fa) popup_notif_wgt_window

0xeb04,	// (0x00025a0a) popup_submenu_window_cp01_ParamLimits

0xeb04,	// (0x00025a0a) popup_submenu_window_cp01

0x172e,	// (0x00018634) bg_popup_window_pane_cp10

0x5b7e,	// (0x0001ca84) listscroll_notif_wgt_pane

0x5b88,	// (0x0001ca8e) list_notif_wgt_window

0x5b91,	// (0x0001ca97) scroll_pane_cp033

0x5b9a,	// (0x0001caa0) list_notif_wgt_row_pane_ParamLimits

0x5b9a,	// (0x0001caa0) list_notif_wgt_row_pane

0x5bae,	// (0x0001cab4) aid_size_list_notif_wgt_del

0x5bb7,	// (0x0001cabd) list_notif_wgt_row_pane_g1

0x5bbf,	// (0x0001cac5) list_notif_wgt_row_pane_g2

0x5bc7,	// (0x0001cacd) list_notif_wgt_row_pane_g3

0x0002,

0xfeac,	// (0x00026db2) list_notif_wgt_row_pane_g

0x5bd0,	// (0x0001cad6) list_notif_wgt_row_pane_t1

0x5bde,	// (0x0001cae4) list_notif_wgt_row_pane_t2

0x5bec,	// (0x0001caf2) list_notif_wgt_row_pane_t3

0x0002,

0xfeb3,	// (0x00026db9) list_notif_wgt_row_pane_t

0x415b,	// (0x0001b061) list_recal_day_event_pane_g1

0x5bfa,	// (0x0001cb00) list_recal_day_event_pane_t1

0x0218,	// (0x0001711e) bg_button_pane_cp045

0x5c09,	// (0x0001cb0f) cntbar_detail_btn_pane_t1

0x2b9b,	// (0x00019aa1) main_callh_pane_ParamLimits

0x2b9b,	// (0x00019aa1) main_callh_pane

0x0218,	// (0x0001711e) main_coverflow0_pane

0x0218,	// (0x0001711e) main_wgtman_pane

0xdbd3,	// (0x00024ad9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdbd3,	// (0x00024ad9) main_fs_bigclock_unlock_btn_pane

0x53e6,	// (0x0001c2ec) bg_button_pane_cp16

0xe410,	// (0x00025316) cell_tport_appsw_pane_g3

0xeb12,	// (0x00025a18) cf0_flow_pane_ParamLimits

0xeb12,	// (0x00025a18) cf0_flow_pane

0x5c17,	// (0x0001cb1d) listscroll_cf0_pane

0x5c20,	// (0x0001cb26) main_cf0_pane_g1

0xeb21,	// (0x00025a27) main_cf0_pane_t1_ParamLimits

0xeb21,	// (0x00025a27) main_cf0_pane_t1

0xeb35,	// (0x00025a3b) main_cf0_pane_t2_ParamLimits

0xeb35,	// (0x00025a3b) main_cf0_pane_t2

0x0001,

0xfeba,	// (0x00026dc0) main_cf0_pane_t_ParamLimits

0xfeba,	// (0x00026dc0) main_cf0_pane_t

0x5c2a,	// (0x0001cb30) scroll_pane_cp11

0xeb49,	// (0x00025a4f) cf0_flow_pane_g1

0xeb51,	// (0x00025a57) cf0_flow_pane_g2

0x0001,

0xfebf,	// (0x00026dc5) cf0_flow_pane_g

0xeb59,	// (0x00025a5f) cf0_flow_pane_t1

0x0218,	// (0x0001711e) main_call6_pane

0x0218,	// (0x0001711e) main_calllock_pane

0xeb67,	// (0x00025a6d) call6_btn_grp_pane_ParamLimits

0xeb67,	// (0x00025a6d) call6_btn_grp_pane

0xeb76,	// (0x00025a7c) call6_pane_g1_ParamLimits

0xeb76,	// (0x00025a7c) call6_pane_g1

0xeb86,	// (0x00025a8c) popup_call6_1st_window_ParamLimits

0xeb86,	// (0x00025a8c) popup_call6_1st_window

0xeb94,	// (0x00025a9a) popup_call6_2nd_window_ParamLimits

0xeb94,	// (0x00025a9a) popup_call6_2nd_window

0xeba2,	// (0x00025aa8) cell_call6_btn_pane_ParamLimits

0xeba2,	// (0x00025aa8) cell_call6_btn_pane

0x172e,	// (0x00018634) bg_popup_call2_in_pane_cp03

0x5c35,	// (0x0001cb3b) popup_call6_1st_window_g1

0x5c3d,	// (0x0001cb43) popup_call6_1st_window_g2

0x5c45,	// (0x0001cb4b) popup_call6_1st_window_g3

0x0002,

0xfec4,	// (0x00026dca) popup_call6_1st_window_g

0x5c4d,	// (0x0001cb53) popup_call6_1st_window_t1

0x5c5c,	// (0x0001cb62) popup_call6_1st_window_t2

0x5c6c,	// (0x0001cb72) popup_call6_1st_window_t3

0x0002,

0xfecb,	// (0x00026dd1) popup_call6_1st_window_t

0x172e,	// (0x00018634) bg_popup_call2_in_pane_cp04

0x5c35,	// (0x0001cb3b) popup_call6_2nd_window_g1

0x5c3d,	// (0x0001cb43) popup_call6_2nd_window_g2

0x5c45,	// (0x0001cb4b) popup_call6_2nd_window_g3

0x0002,

0xfec4,	// (0x00026dca) popup_call6_2nd_window_g

0x5c4d,	// (0x0001cb53) popup_call6_2nd_window_t1

0x0218,	// (0x0001711e) bg_button_pane_cp15

0x5c7c,	// (0x0001cb82) cell_call6_btn_pane_g1

0x5c85,	// (0x0001cb8b) cell_call6_btn_pane_t1

0xebb1,	// (0x00025ab7) listscroll_wgtman_pane_ParamLimits

0xebb1,	// (0x00025ab7) listscroll_wgtman_pane

0xebcf,	// (0x00025ad5) wgtman_btn_pane_ParamLimits

0xebcf,	// (0x00025ad5) wgtman_btn_pane

0x15f4,	// (0x000184fa) aid_scroll_copy1

0x5c94,	// (0x0001cb9a) list_wgtman_pane

0xec04,	// (0x00025b0a) wgtman_btn_pane_g1_ParamLimits

0xec04,	// (0x00025b0a) wgtman_btn_pane_g1

0xec2c,	// (0x00025b32) wgtman_btn_pane_t1_ParamLimits

0xec2c,	// (0x00025b32) wgtman_btn_pane_t1

0x5c9e,	// (0x0001cba4) wgtman_btn_pane_t2_ParamLimits

0x5c9e,	// (0x0001cba4) wgtman_btn_pane_t2

0x0001,

0xfed2,	// (0x00026dd8) wgtman_btn_pane_t_ParamLimits

0xfed2,	// (0x00026dd8) wgtman_btn_pane_t

0x5cb5,	// (0x0001cbbb) listrow_wgtman_pane_ParamLimits

0x5cb5,	// (0x0001cbbb) listrow_wgtman_pane

0x5cc9,	// (0x0001cbcf) listrow_wgtman_pane_g1

0xec63,	// (0x00025b69) listrow_wgtman_pane_g2

0x0001,

0xfed7,	// (0x00026ddd) listrow_wgtman_pane_g

0x5cd2,	// (0x0001cbd8) listrow_wgtman_pane_t1

0x5ce0,	// (0x0001cbe6) listrow_wgtman_pane_t2

0x0001,

0xfedc,	// (0x00026de2) listrow_wgtman_pane_t

0x5cee,	// (0x0001cbf4) wait_bar_pane_cp09

0x5cf6,	// (0x0001cbfc) main_calllock_btn_pane

0x5d00,	// (0x0001cc06) main_calllock_pane_g1

0x0218,	// (0x0001711e) bg_button_pane_cp17

0x5d0c,	// (0x0001cc12) main_calllock_btn_pane_g1

0x5d15,	// (0x0001cc1b) main_calllock_btn_pane_t1

0x0218,	// (0x0001711e) main_dialer3_pane

0x0218,	// (0x0001711e) main_fmrd2_pane

0x30d0,	// (0x00019fd6) main_fs_bigclock_unlock_btn_pane_g1

0x5d2c,	// (0x0001cc32) main_fs_bigclock_unlock_btn_pane_t1

0xec6d,	// (0x00025b73) area_fmrd2_info_pane_ParamLimits

0xec6d,	// (0x00025b73) area_fmrd2_info_pane

0xec7b,	// (0x00025b81) area_fmrd2_visual_pane_ParamLimits

0xec7b,	// (0x00025b81) area_fmrd2_visual_pane

0xec89,	// (0x00025b8f) fmrd2_indi_pane_ParamLimits

0xec89,	// (0x00025b8f) fmrd2_indi_pane

0xec96,	// (0x00025b9c) area_fmrd2_visual_pane_g1

0xec9e,	// (0x00025ba4) area_fmrd2_visual_pane_t1

0xecae,	// (0x00025bb4) area_fmrd2_visual_pane_t2

0xecbe,	// (0x00025bc4) area_fmrd2_visual_pane_t3

0x0002,

0xfee6,	// (0x00026dec) area_fmrd2_visual_pane_t

0xecce,	// (0x00025bd4) area_fmrd2_info_pane_g1

0xecd6,	// (0x00025bdc) area_fmrd2_info_pane_t1

0xece6,	// (0x00025bec) area_fmrd2_info_pane_t2

0xecf6,	// (0x00025bfc) area_fmrd2_info_pane_t3

0xed06,	// (0x00025c0c) area_fmrd2_info_pane_t4

0x0003,

0xfeed,	// (0x00026df3) area_fmrd2_info_pane_t

0xed16,	// (0x00025c1c) fmrd2_indi_pane_t1

0xed26,	// (0x00025c2c) fmrd2_indi_pane_t2

0xed36,	// (0x00025c3c) fmrd2_indi_pane_t3

0x0002,

0xfef6,	// (0x00026dfc) fmrd2_indi_pane_t

0xdc59,	// (0x00024b5f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdc59,	// (0x00024b5f) list_single_fs_bigclock_indicator_pane_g5

0xdcff,	// (0x00024c05) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdcff,	// (0x00024c05) list_single_fs_bigclock_indicator_pane_t5

0xe5ad,	// (0x000254b3) aid_cell_bcale_month_pane_ParamLimits

0xe5ad,	// (0x000254b3) aid_cell_bcale_month_pane

0xe5b9,	// (0x000254bf) bcale_month_pane_ParamLimits

0xe5b9,	// (0x000254bf) bcale_month_pane

0xe5c7,	// (0x000254cd) bcale_preview_pane_ParamLimits

0xe5c7,	// (0x000254cd) bcale_preview_pane

0x5a27,	// (0x0001c92d) list_single_fs_bigclock_pane_t1_ParamLimits

0x5a43,	// (0x0001c949) list_single_fs_bigclock_pane_t2_ParamLimits

0x5a43,	// (0x0001c949) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7d,	// (0x00026d83) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x00026d83) list_single_fs_bigclock_pane_t

0x5d24,	// (0x0001cc2a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee1,	// (0x00026de7) main_fs_bigclock_unlock_btn_pane_g

0xed46,	// (0x00025c4c) aid_dia3_key_size_ParamLimits

0xed46,	// (0x00025c4c) aid_dia3_key_size

0xed52,	// (0x00025c58) aid_dia3_listrow_size_ParamLimits

0xed52,	// (0x00025c58) aid_dia3_listrow_size

0xed60,	// (0x00025c66) dia3_keypad_fun_pane_ParamLimits

0xed60,	// (0x00025c66) dia3_keypad_fun_pane

0xed70,	// (0x00025c76) dia3_keypad_num_pane_ParamLimits

0xed70,	// (0x00025c76) dia3_keypad_num_pane

0xed80,	// (0x00025c86) dia3_listscroll_pane_ParamLimits

0xed80,	// (0x00025c86) dia3_listscroll_pane

0xed90,	// (0x00025c96) dia3_numentry_pane_ParamLimits

0xed90,	// (0x00025c96) dia3_numentry_pane

0x5d3a,	// (0x0001cc40) dia3_list_pane

0x5d45,	// (0x0001cc4b) scroll_pane_cp12

0x0218,	// (0x0001711e) bg_dia3_numentry_pane

0x5d50,	// (0x0001cc56) dia3_numentry_pane_t1

0xeda0,	// (0x00025ca6) cell_dia3_key_num_pane

0xeda8,	// (0x00025cae) cell_dia3_key0_fun_pane_ParamLimits

0xeda8,	// (0x00025cae) cell_dia3_key0_fun_pane

0xedb5,	// (0x00025cbb) cell_dia3_key1_fun_pane_ParamLimits

0xedb5,	// (0x00025cbb) cell_dia3_key1_fun_pane

0xedc2,	// (0x00025cc8) dia3_listrow_pane

0x4c4d,	// (0x0001bb53) bg_dia3_numentry_pane_g1

0x0218,	// (0x0001711e) bg_button_pane_cp21

0x5d5f,	// (0x0001cc65) cell_dia3_key_num_pane_t1

0x5d6d,	// (0x0001cc73) cell_dia3_key_num_pane_t2

0x5d7c,	// (0x0001cc82) cell_dia3_key_num_pane_t3

0x5d8b,	// (0x0001cc91) cell_dia3_key_num_pane_t4

0x0003,

0xfefd,	// (0x00026e03) cell_dia3_key_num_pane_t

0x0218,	// (0x0001711e) bg_button_pane_cp19

0xedcf,	// (0x00025cd5) cell_dia3_key0_fun_pane_g1

0x0218,	// (0x0001711e) bg_button_pane_cp20

0xedd7,	// (0x00025cdd) cell_dia3_key1_fun_pane_g1

0xeddf,	// (0x00025ce5) area_left_week_number_pane

0xede8,	// (0x00025cee) area_top_day_name_pane

0xedf1,	// (0x00025cf7) frame_month_view_pane

0xedfb,	// (0x00025d01) grid_month_view_pane

0xee05,	// (0x00025d0b) cell_top_day_name_pane_ParamLimits

0xee05,	// (0x00025d0b) cell_top_day_name_pane

0xee21,	// (0x00025d27) cell_area_left_week_number_pane_ParamLimits

0xee21,	// (0x00025d27) cell_area_left_week_number_pane

0xee35,	// (0x00025d3b) cell_month_view_pane_ParamLimits

0xee35,	// (0x00025d3b) cell_month_view_pane

0x5d9a,	// (0x0001cca0) frm_month_g1

0xee54,	// (0x00025d5a) frm_month_g2

0xee5e,	// (0x00025d64) frm_month_g3

0xee68,	// (0x00025d6e) frm_month_g4

0xee72,	// (0x00025d78) frm_month_g5

0xee7c,	// (0x00025d82) frm_month_g6

0xee86,	// (0x00025d8c) frm_month_g7

0x5da3,	// (0x0001cca9) frm_month_g8

0xee90,	// (0x00025d96) frm_month_g9

0xee99,	// (0x00025d9f) frm_month_g10

0xeea2,	// (0x00025da8) frm_month_g11

0xeeab,	// (0x00025db1) frm_month_g12

0xeeb4,	// (0x00025dba) frm_month_g13

0xeebf,	// (0x00025dc5) frm_month_g14

0xeeca,	// (0x00025dd0) frm_month_g15

0xeed5,	// (0x00025ddb) frm_month_g16

0x000f,

0xff06,	// (0x00026e0c) frm_month_g

0xeee0,	// (0x00025de6) cell_top_day_name_pane_t1

0xeeef,	// (0x00025df5) cell_area_left_week_number_pane_g1

0xeee0,	// (0x00025de6) cell_area_left_week_number_pane_t1

0x30d0,	// (0x00019fd6) cell_month_view_pane_g1

0xeef7,	// (0x00025dfd) cell_month_view_pane_t1

0x0218,	// (0x0001711e) main_fps_pane

0x5143,	// (0x0001c049) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x5143,	// (0x0001c049) cmail_ddmenu_btn02_pane_cp1

0x515f,	// (0x0001c065) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x515f,	// (0x0001c065) cmail_ddmenu_btn02_pane_cp2

0xe86a,	// (0x00025770) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe86a,	// (0x00025770) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2e,	// (0x00026d34) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2e,	// (0x00026d34) cmail_ddmenu_btn02_pane_g

0xe888,	// (0x0002578e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe888,	// (0x0002578e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe33,	// (0x00026d39) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe33,	// (0x00026d39) cmail_ddmenu_btn02_pane_t

0xef06,	// (0x00025e0c) fps_text_pane_ParamLimits

0xef06,	// (0x00025e0c) fps_text_pane

0xef13,	// (0x00025e19) main_fps_pane_g1_ParamLimits

0xef13,	// (0x00025e19) main_fps_pane_g1

0xef1f,	// (0x00025e25) wait_bar_pane_cp010_ParamLimits

0xef1f,	// (0x00025e25) wait_bar_pane_cp010

0xef2b,	// (0x00025e31) fps_text_pane_t1_ParamLimits

0xef2b,	// (0x00025e31) fps_text_pane_t1

0xc4a1,	// (0x000233a7) cam4_image_uncrop_pane_g1

0xc4aa,	// (0x000233b0) cam4_image_uncrop_pane_g2

0xc4b3,	// (0x000233b9) cam4_image_uncrop_pane_g3

0xc4bc,	// (0x000233c2) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x00026813) cam4_image_uncrop_pane_g

0xedc2,	// (0x00025cc8) dia3_listrow_pane_ParamLimits

0x0218,	// (0x0001711e) main_phob2_pane

0xe3ea,	// (0x000252f0) cell_tport_appsw_pane_cp02_ParamLimits

0xe3ea,	// (0x000252f0) cell_tport_appsw_pane_cp02

0xe3f9,	// (0x000252ff) cell_tport_appsw_pane_cp03_ParamLimits

0xe3f9,	// (0x000252ff) cell_tport_appsw_pane_cp03

0x0218,	// (0x0001711e) phob2_contact_card_pane

0x0218,	// (0x0001711e) phob2_listscroll_pane

0x5dac,	// (0x0001ccb2) phob2_list_pane

0x5db4,	// (0x0001ccba) scroll_pane_cp034

0xef44,	// (0x00025e4a) phob2_cc_data_pane_ParamLimits

0xef44,	// (0x00025e4a) phob2_cc_data_pane

0xef60,	// (0x00025e66) phob2_cc_listscroll_pane_ParamLimits

0xef60,	// (0x00025e66) phob2_cc_listscroll_pane

0xef7c,	// (0x00025e82) list_double_large_graphic_phob2_pane_ParamLimits

0xef7c,	// (0x00025e82) list_double_large_graphic_phob2_pane

0xef96,	// (0x00025e9c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xef96,	// (0x00025e9c) list_double_large_graphic_phob2_pane_g1

0xefa3,	// (0x00025ea9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xefa3,	// (0x00025ea9) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff27,	// (0x00026e2d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff27,	// (0x00026e2d) list_double_large_graphic_phob2_pane_g

0xefaf,	// (0x00025eb5) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xefaf,	// (0x00025eb5) list_double_large_graphic_phob2_pane_t1

0xefc4,	// (0x00025eca) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xefc4,	// (0x00025eca) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2c,	// (0x00026e32) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2c,	// (0x00026e32) list_double_large_graphic_phob2_pane_t

0x0218,	// (0x0001711e) list_highlight_pane_cp024

0x5dbc,	// (0x0001ccc2) phob2_cc_button_pane

0xefd6,	// (0x00025edc) phob2_cc_data_pane_g1_ParamLimits

0xefd6,	// (0x00025edc) phob2_cc_data_pane_g1

0xefe2,	// (0x00025ee8) phob2_cc_data_pane_g2_ParamLimits

0xefe2,	// (0x00025ee8) phob2_cc_data_pane_g2

0x0001,

0xff31,	// (0x00026e37) phob2_cc_data_pane_g_ParamLimits

0xff31,	// (0x00026e37) phob2_cc_data_pane_g

0xefee,	// (0x00025ef4) phob2_cc_data_pane_t1_ParamLimits

0xefee,	// (0x00025ef4) phob2_cc_data_pane_t1

0xf000,	// (0x00025f06) phob2_cc_data_pane_t2_ParamLimits

0xf000,	// (0x00025f06) phob2_cc_data_pane_t2

0xf012,	// (0x00025f18) phob2_cc_data_pane_t3_ParamLimits

0xf012,	// (0x00025f18) phob2_cc_data_pane_t3

0x0002,

0xff36,	// (0x00026e3c) phob2_cc_data_pane_t_ParamLimits

0xff36,	// (0x00026e3c) phob2_cc_data_pane_t

0x5dc4,	// (0x0001ccca) phob2_cc_list_pane_ParamLimits

0x5dc4,	// (0x0001ccca) phob2_cc_list_pane

0x4206,	// (0x0001b10c) scroll_pane_cp035_ParamLimits

0x4206,	// (0x0001b10c) scroll_pane_cp035

0x0289,	// (0x0001718f) bg_button_pane_cp033

0x5dd0,	// (0x0001ccd6) phob2_cc_button_pane_g1

0x5ddc,	// (0x0001cce2) phob2_cc_button_pane_t1

0x5df1,	// (0x0001ccf7) phob2_cc_button_pane_t2

0x0001,

0xff3d,	// (0x00026e43) phob2_cc_button_pane_t

0xf024,	// (0x00025f2a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xf024,	// (0x00025f2a) list_double_large_graphic_phob2_cc_pane

0xf043,	// (0x00025f49) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xf043,	// (0x00025f49) list_double_large_graphic_phob2_cc_pane_g1

0xf054,	// (0x00025f5a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xf054,	// (0x00025f5a) list_double_large_graphic_phob2_cc_pane_g2

0xf063,	// (0x00025f69) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xf063,	// (0x00025f69) list_double_large_graphic_phob2_cc_pane_g3

0xf072,	// (0x00025f78) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xf072,	// (0x00025f78) list_double_large_graphic_phob2_cc_pane_g4

0xf083,	// (0x00025f89) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xf083,	// (0x00025f89) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff42,	// (0x00026e48) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff42,	// (0x00026e48) list_double_large_graphic_phob2_cc_pane_g

0xf092,	// (0x00025f98) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xf092,	// (0x00025f98) list_double_large_graphic_phob2_cc_pane_t1

0xf0bb,	// (0x00025fc1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xf0bb,	// (0x00025fc1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4d,	// (0x00026e53) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4d,	// (0x00026e53) list_double_large_graphic_phob2_cc_pane_t

0x5e03,	// (0x0001cd09) list_highlight_pane_cp025_ParamLimits

0x5e03,	// (0x0001cd09) list_highlight_pane_cp025

0x0289,	// (0x0001718f) bg_button_pane_cp033_ParamLimits

0x5dd0,	// (0x0001ccd6) phob2_cc_button_pane_g1_ParamLimits

0x5ddc,	// (0x0001cce2) phob2_cc_button_pane_t1_ParamLimits

0x5df1,	// (0x0001ccf7) phob2_cc_button_pane_t2_ParamLimits

0xff3d,	// (0x00026e43) phob2_cc_button_pane_t_ParamLimits

0x81e8,	// (0x0001f0ee) popup_wgtman_window

0x3f9e,	// (0x0001aea4) scroll_pane_cp038

0xebec,	// (0x00025af2) wgtman_btn_pane_cp_01_ParamLimits

0xebec,	// (0x00025af2) wgtman_btn_pane_cp_01

0x5e11,	// (0x0001cd17) wgtman_content_pane

0x5e1a,	// (0x0001cd20) wgtman_heading_pane

0x0218,	// (0x0001711e) bg_heading_pane_cp02

0x5e23,	// (0x0001cd29) wgtman_heading_pane_g1

0x5e2b,	// (0x0001cd31) wgtman_heading_pane_t1

0x5e39,	// (0x0001cd3f) scroll_pane_cp036

0x5e41,	// (0x0001cd47) wgtman_list_pane

0x5aca,	// (0x0001c9d0) wgtman_list_pane_t1_ParamLimits

0x5aca,	// (0x0001c9d0) wgtman_list_pane_t1

0x79d3,	// (0x0001e8d9) cam4_grid_pane

0xcc00,	// (0x00023b06) bg_button_pane_cp015_ParamLimits

0xcc12,	// (0x00023b18) bg_button_pane_cp016_ParamLimits

0xcc25,	// (0x00023b2b) bg_button_pane_cp017_ParamLimits

0xcc7b,	// (0x00023b81) popup_vitu2_query_window_g3_ParamLimits

0xcc7b,	// (0x00023b81) popup_vitu2_query_window_g3

0xcd3a,	// (0x00023c40) popup_vitu2_query_window_t6_ParamLimits

0xcd3a,	// (0x00023c40) popup_vitu2_query_window_t6

0xcd65,	// (0x00023c6b) popup_vitu2_query_window_t7_ParamLimits

0xcd65,	// (0x00023c6b) popup_vitu2_query_window_t7

0x5ab6,	// (0x0001c9bc) cam4_grid_pane_g1

0x5abf,	// (0x0001c9c5) cam4_grid_pane_g2

0x5e49,	// (0x0001cd4f) cam4_grid_pane_g3

0x5e52,	// (0x0001cd58) cam4_grid_pane_g4

0x0003,

0xff52,	// (0x00026e58) cam4_grid_pane_g

0x8e8d,	// (0x0001fd93) aid_placing_vt_slider_lsc_ParamLimits

0x91c0,	// (0x000200c6) vidtel_button_pane_ParamLimits

0x91c0,	// (0x000200c6) vidtel_button_pane

0x0218,	// (0x0001711e) bg_button_pane_cp034

0xf0e4,	// (0x00025fea) vidtel_button_pane_g1

0x5e5d,	// (0x0001cd63) vidtel_button_pane_t1

0x40e9,	// (0x0001afef) aid_size_vtel_slider_touch

0x4206,	// (0x0001b10c) scroll_pane_cp039

0x4c8b,	// (0x0001bb91) ncim_query_button_pane_cp01_ParamLimits

0x4caa,	// (0x0001bbb0) ncimui_query_pane_g1_ParamLimits

0x0289,	// (0x0001718f) input_focus_pane_cp012_ParamLimits

0x4ccf,	// (0x0001bbd5) ncim_query_entry_pane_t1_ParamLimits

0x4206,	// (0x0001b10c) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
