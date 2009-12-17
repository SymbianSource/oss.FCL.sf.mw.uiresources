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

// This customisation implements the interface defined in AknLayoutScalable_UiAccel.cdl

#include "aknlayoutscalable_elaf_hql_c_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_UiAccel { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_hqp_c_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_hql_c_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_UiAccel::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_UiAccel::KByteCodedData_AknLayoutScalable_Elaf_hqp_c_qvga_prt + 0x00000000 };

TAknWindowComponentLayout WindowLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknLayoutScalableParameterLimits ParameterLimitsV(TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsV(&KImplData, aVariety); }
TAknTextComponentLayout TextLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknWindowComponentLayout WindowTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableTableLimits Limits() { return AknLayoutScalableDecode::TableLimits(KDataLookup); }
TAknLayoutScalableParameterLimits ParameterLimitsTableLV(TInt aLineIndex, TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsTableLV(&KImplData, aLineIndex, aVariety); }
TAknTextComponentLayout TextTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId) { return AknLayoutScalableDecode::GetComponentTypeById(&KImplData, aComponentId); }
TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety) { return AknLayoutScalableDecode::GetParamLimitsById(&KImplData, aComponentId, aVariety); }
TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetWindowComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }
TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetTextComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }

const TUint16 KDataLookup[AknLayoutScalable_UiAccel::E_TApiId_TableSize] =
	{
0x0000,

0x0000,

0x0000,

0x0000,

0x12cd,	// (0x000012cd) Screen

0x000a,	// (0x0000000a) application_window

0x12d7,	// (0x000012d7) area_bottom_pane_ParamLimits

0x12d7,	// (0x000012d7) area_bottom_pane

0x12ee,	// (0x000012ee) area_top_pane_ParamLimits

0x12ee,	// (0x000012ee) area_top_pane

0x1303,	// (0x00001303) main_pane_ParamLimits

0x1303,	// (0x00001303) main_pane

0x000a,	// (0x0000000a) main_hc_listscroll_pane

0x00e2,	// (0x000000e2) hc_list_pane

0x00f3,	// (0x000000f3) hc_scroll_pane

0x0157,	// (0x00000157) hc_list_double2_graphic_pane

0x0157,	// (0x00000157) hc_list_double2_large_graphic_pane

0x0157,	// (0x00000157) hc_list_double2_pane

0x0160,	// (0x00000160) hc_list_double_graphic_pane

0x0160,	// (0x00000160) hc_list_double_heading_pane

0x0160,	// (0x00000160) hc_list_double_large_graphic_pane

0x0160,	// (0x00000160) hc_list_double_pane

0x0169,	// (0x00000169) hc_list_single_graphic_pane

0x0171,	// (0x00000171) hc_list_single_heading_pane

0x0157,	// (0x00000157) hc_list_single_large_graphic_pane

0x0171,	// (0x00000171) hc_list_single_pane

0x01cc,	// (0x000001cc) hc_list_single_pane_g1_ParamLimits

0x01cc,	// (0x000001cc) hc_list_single_pane_g1

0x01d8,	// (0x000001d8) hc_list_single_pane_g2_ParamLimits

0x01d8,	// (0x000001d8) hc_list_single_pane_g2

0x0001,

0x116c,	// (0x0000116c) hc_list_single_pane_g_ParamLimits

0x116c,	// (0x0000116c) hc_list_single_pane_g

0x01ec,	// (0x000001ec) hc_list_single_pane_t1_ParamLimits

0x01ec,	// (0x000001ec) hc_list_single_pane_t1

0x0203,	// (0x00000203) hc_list_single_graphic_pane_g1_ParamLimits

0x0203,	// (0x00000203) hc_list_single_graphic_pane_g1

0x020f,	// (0x0000020f) hc_list_single_graphic_pane_g2_ParamLimits

0x020f,	// (0x0000020f) hc_list_single_graphic_pane_g2

0x01d8,	// (0x000001d8) hc_list_single_graphic_pane_g3_ParamLimits

0x01d8,	// (0x000001d8) hc_list_single_graphic_pane_g3

0x0002,

0x1171,	// (0x00001171) hc_list_single_graphic_pane_g_ParamLimits

0x1171,	// (0x00001171) hc_list_single_graphic_pane_g

0x021e,	// (0x0000021e) hc_list_single_graphic_pane_t1_ParamLimits

0x021e,	// (0x0000021e) hc_list_single_graphic_pane_t1

0x01cc,	// (0x000001cc) hc_list_single_heading_pane_g1_ParamLimits

0x01cc,	// (0x000001cc) hc_list_single_heading_pane_g1

0x01d8,	// (0x000001d8) hc_list_single_heading_pane_g2_ParamLimits

0x01d8,	// (0x000001d8) hc_list_single_heading_pane_g2

0x0001,

0x116c,	// (0x0000116c) hc_list_single_heading_pane_g_ParamLimits

0x116c,	// (0x0000116c) hc_list_single_heading_pane_g

0x0234,	// (0x00000234) hc_list_single_heading_pane_t1_ParamLimits

0x0234,	// (0x00000234) hc_list_single_heading_pane_t1

0x0246,	// (0x00000246) hc_list_single_heading_pane_t2_ParamLimits

0x0246,	// (0x00000246) hc_list_single_heading_pane_t2

0x0001,

0x1178,	// (0x00001178) hc_list_single_heading_pane_t_ParamLimits

0x1178,	// (0x00001178) hc_list_single_heading_pane_t

0x025c,	// (0x0000025c) hc_list_single_large_graphic_pane_g1_ParamLimits

0x025c,	// (0x0000025c) hc_list_single_large_graphic_pane_g1

0x0268,	// (0x00000268) hc_list_single_large_graphic_pane_g2_ParamLimits

0x0268,	// (0x00000268) hc_list_single_large_graphic_pane_g2

0x0274,	// (0x00000274) hc_list_single_large_graphic_pane_g3_ParamLimits

0x0274,	// (0x00000274) hc_list_single_large_graphic_pane_g3

0x0002,

0x117d,	// (0x0000117d) hc_list_single_large_graphic_pane_g_ParamLimits

0x117d,	// (0x0000117d) hc_list_single_large_graphic_pane_g

0x0288,	// (0x00000288) hc_list_single_large_graphic_pane_t1_ParamLimits

0x0288,	// (0x00000288) hc_list_single_large_graphic_pane_t1

0x01cc,	// (0x000001cc) hc_list_double_pane_g1_ParamLimits

0x01cc,	// (0x000001cc) hc_list_double_pane_g1

0x01d8,	// (0x000001d8) hc_list_double_pane_g2_ParamLimits

0x01d8,	// (0x000001d8) hc_list_double_pane_g2

0x0001,

0x116c,	// (0x0000116c) hc_list_double_pane_g_ParamLimits

0x116c,	// (0x0000116c) hc_list_double_pane_g

0x029e,	// (0x0000029e) hc_list_double_pane_t1_ParamLimits

0x029e,	// (0x0000029e) hc_list_double_pane_t1

0x02b4,	// (0x000002b4) hc_list_double_pane_t2_ParamLimits

0x02b4,	// (0x000002b4) hc_list_double_pane_t2

0x0001,

0x1184,	// (0x00001184) hc_list_double_pane_t_ParamLimits

0x1184,	// (0x00001184) hc_list_double_pane_t

0x02c6,	// (0x000002c6) hc_list_double_graphic_pane_g1_ParamLimits

0x02c6,	// (0x000002c6) hc_list_double_graphic_pane_g1

0x01cc,	// (0x000001cc) hc_list_double_graphic_pane_g2_ParamLimits

0x01cc,	// (0x000001cc) hc_list_double_graphic_pane_g2

0x01d8,	// (0x000001d8) hc_list_double_graphic_pane_g3_ParamLimits

0x01d8,	// (0x000001d8) hc_list_double_graphic_pane_g3

0x0002,

0x1189,	// (0x00001189) hc_list_double_graphic_pane_g_ParamLimits

0x1189,	// (0x00001189) hc_list_double_graphic_pane_g

0x02d2,	// (0x000002d2) hc_list_double_graphic_pane_t1_ParamLimits

0x02d2,	// (0x000002d2) hc_list_double_graphic_pane_t1

0x02e8,	// (0x000002e8) hc_list_double_graphic_pane_t2_ParamLimits

0x02e8,	// (0x000002e8) hc_list_double_graphic_pane_t2

0x0001,

0x1190,	// (0x00001190) hc_list_double_graphic_pane_t_ParamLimits

0x1190,	// (0x00001190) hc_list_double_graphic_pane_t

0x02fa,	// (0x000002fa) hc_list_double_heading_pane_g1_ParamLimits

0x02fa,	// (0x000002fa) hc_list_double_heading_pane_g1

0x0306,	// (0x00000306) hc_list_double_heading_pane_g2_ParamLimits

0x0306,	// (0x00000306) hc_list_double_heading_pane_g2

0x0001,

0x1195,	// (0x00001195) hc_list_double_heading_pane_g_ParamLimits

0x1195,	// (0x00001195) hc_list_double_heading_pane_g

0x031a,	// (0x0000031a) hc_list_double_heading_pane_t1_ParamLimits

0x031a,	// (0x0000031a) hc_list_double_heading_pane_t1

0x032c,	// (0x0000032c) hc_list_double_heading_pane_t2_ParamLimits

0x032c,	// (0x0000032c) hc_list_double_heading_pane_t2

0x0001,

0x119a,	// (0x0000119a) hc_list_double_heading_pane_t_ParamLimits

0x119a,	// (0x0000119a) hc_list_double_heading_pane_t

0x0342,	// (0x00000342) hc_list_double_large_graphic_pane_g1_ParamLimits

0x0342,	// (0x00000342) hc_list_double_large_graphic_pane_g1

0x01cc,	// (0x000001cc) hc_list_double_large_graphic_pane_g2_ParamLimits

0x01cc,	// (0x000001cc) hc_list_double_large_graphic_pane_g2

0x01d8,	// (0x000001d8) hc_list_double_large_graphic_pane_g3_ParamLimits

0x01d8,	// (0x000001d8) hc_list_double_large_graphic_pane_g3

0x0002,

0x119f,	// (0x0000119f) hc_list_double_large_graphic_pane_g_ParamLimits

0x119f,	// (0x0000119f) hc_list_double_large_graphic_pane_g

0x034e,	// (0x0000034e) hc_list_double_large_graphic_pane_t1_ParamLimits

0x034e,	// (0x0000034e) hc_list_double_large_graphic_pane_t1

0x0364,	// (0x00000364) hc_list_double_large_graphic_pane_t2_ParamLimits

0x0364,	// (0x00000364) hc_list_double_large_graphic_pane_t2

0x0001,

0x11a6,	// (0x000011a6) hc_list_double_large_graphic_pane_t_ParamLimits

0x11a6,	// (0x000011a6) hc_list_double_large_graphic_pane_t

0x01cc,	// (0x000001cc) hc_list_double2_pane_g1_ParamLimits

0x01cc,	// (0x000001cc) hc_list_double2_pane_g1

0x01d8,	// (0x000001d8) hc_list_double2_pane_g2_ParamLimits

0x01d8,	// (0x000001d8) hc_list_double2_pane_g2

0x0001,

0x116c,	// (0x0000116c) hc_list_double2_pane_g_ParamLimits

0x116c,	// (0x0000116c) hc_list_double2_pane_g

0x029e,	// (0x0000029e) hc_list_double2_pane_t1_ParamLimits

0x029e,	// (0x0000029e) hc_list_double2_pane_t1

0x0376,	// (0x00000376) hc_list_double2_pane_t2_ParamLimits

0x0376,	// (0x00000376) hc_list_double2_pane_t2

0x0001,

0x11ab,	// (0x000011ab) hc_list_double2_pane_t_ParamLimits

0x11ab,	// (0x000011ab) hc_list_double2_pane_t

0x02c6,	// (0x000002c6) hc_list_double2_graphic_pane_g1_ParamLimits

0x02c6,	// (0x000002c6) hc_list_double2_graphic_pane_g1

0x01cc,	// (0x000001cc) hc_list_double2_graphic_pane_g2_ParamLimits

0x01cc,	// (0x000001cc) hc_list_double2_graphic_pane_g2

0x01d8,	// (0x000001d8) hc_list_double2_graphic_pane_g3_ParamLimits

0x01d8,	// (0x000001d8) hc_list_double2_graphic_pane_g3

0x0002,

0x1189,	// (0x00001189) hc_list_double2_graphic_pane_g_ParamLimits

0x1189,	// (0x00001189) hc_list_double2_graphic_pane_g

0x02d2,	// (0x000002d2) hc_list_double2_graphic_pane_t1_ParamLimits

0x02d2,	// (0x000002d2) hc_list_double2_graphic_pane_t1

0x0388,	// (0x00000388) hc_list_double2_graphic_pane_t2_ParamLimits

0x0388,	// (0x00000388) hc_list_double2_graphic_pane_t2

0x0001,

0x11b0,	// (0x000011b0) hc_list_double2_graphic_pane_t_ParamLimits

0x11b0,	// (0x000011b0) hc_list_double2_graphic_pane_t

0x025c,	// (0x0000025c) hc_list_double2_large_graphic_pane_g1_ParamLimits

0x025c,	// (0x0000025c) hc_list_double2_large_graphic_pane_g1

0x01cc,	// (0x000001cc) hc_list_double2_large_graphic_pane_g2_ParamLimits

0x01cc,	// (0x000001cc) hc_list_double2_large_graphic_pane_g2

0x01d8,	// (0x000001d8) hc_list_double2_large_graphic_pane_g3_ParamLimits

0x01d8,	// (0x000001d8) hc_list_double2_large_graphic_pane_g3

0x0002,

0x11b5,	// (0x000011b5) hc_list_double2_large_graphic_pane_g_ParamLimits

0x11b5,	// (0x000011b5) hc_list_double2_large_graphic_pane_g

0x034e,	// (0x0000034e) hc_list_double2_large_graphic_pane_t1_ParamLimits

0x034e,	// (0x0000034e) hc_list_double2_large_graphic_pane_t1

0x039a,	// (0x0000039a) hc_list_double2_large_graphic_pane_t2_ParamLimits

0x039a,	// (0x0000039a) hc_list_double2_large_graphic_pane_t2

0x0001,

0x11bc,	// (0x000011bc) hc_list_double2_large_graphic_pane_t_ParamLimits

0x11bc,	// (0x000011bc) hc_list_double2_large_graphic_pane_t

0x000a,	// (0x0000000a) main_hc_button_pane

0x1327,	// (0x00001327) aid_hc_size_touch_scroll_bar_ParamLimits

0x1327,	// (0x00001327) aid_hc_size_touch_scroll_bar

0x1346,	// (0x00001346) aid_hc_size_touch_scroll_bar_cp01_ParamLimits

0x1346,	// (0x00001346) aid_hc_size_touch_scroll_bar_cp01

0x135a,	// (0x0000135a) hc_popup_scroll_hotspot_window

0x00f3,	// (0x000000f3) hc_scroll_pane_ParamLimits

0x0123,	// (0x00000123) hc_scroll_pane_cp01_ParamLimits

0x0123,	// (0x00000123) hc_scroll_pane_cp01

0x0139,	// (0x00000139) main_hc_listscroll_pane_g1_ParamLimits

0x0139,	// (0x00000139) main_hc_listscroll_pane_g1

0x014b,	// (0x0000014b) main_hc_listscroll_pane_g2_ParamLimits

0x014b,	// (0x0000014b) main_hc_listscroll_pane_g2

0x0001,

0x1167,	// (0x00001167) main_hc_listscroll_pane_g_ParamLimits

0x1167,	// (0x00001167) main_hc_listscroll_pane_g

0x0160,	// (0x00000160) hc_list_double_graphic_heading_pane

0x017a,	// (0x0000017a) aid_hc_size_max_handle_ParamLimits

0x017a,	// (0x0000017a) aid_hc_size_max_handle

0x0190,	// (0x00000190) aid_hc_size_min_handle_ParamLimits

0x0190,	// (0x00000190) aid_hc_size_min_handle

0x00a3,	// (0x000000a3) hc_scroll_bg_pane_ParamLimits

0x00a3,	// (0x000000a3) hc_scroll_bg_pane

0x01a4,	// (0x000001a4) hc_scroll_handle_pane_ParamLimits

0x01a4,	// (0x000001a4) hc_scroll_handle_pane

0x01b8,	// (0x000001b8) hc_scroll_pane_g1_ParamLimits

0x01b8,	// (0x000001b8) hc_scroll_pane_g1

0x01b8,	// (0x000001b8) hc_scroll_bg_pane_g1_ParamLimits

0x01b8,	// (0x000001b8) hc_scroll_bg_pane_g1

0x03ac,	// (0x000003ac) hc_scroll_bg_pane_g2_ParamLimits

0x03ac,	// (0x000003ac) hc_scroll_bg_pane_g2

0x03c4,	// (0x000003c4) hc_scroll_bg_pane_g3_ParamLimits

0x03c4,	// (0x000003c4) hc_scroll_bg_pane_g3

0x0002,

0x11c1,	// (0x000011c1) hc_scroll_bg_pane_g_ParamLimits

0x11c1,	// (0x000011c1) hc_scroll_bg_pane_g

0x01b8,	// (0x000001b8) hc_scroll_handle_pane_g1_ParamLimits

0x01b8,	// (0x000001b8) hc_scroll_handle_pane_g1

0x03ac,	// (0x000003ac) hc_scroll_handle_pane_g2_ParamLimits

0x03ac,	// (0x000003ac) hc_scroll_handle_pane_g2

0x03c4,	// (0x000003c4) hc_scroll_handle_pane_g3_ParamLimits

0x03c4,	// (0x000003c4) hc_scroll_handle_pane_g3

0x0002,

0x11c1,	// (0x000011c1) hc_scroll_handle_pane_g_ParamLimits

0x11c1,	// (0x000011c1) hc_scroll_handle_pane_g

0x000a,	// (0x0000000a) bg_hc_secondary_window

0x03dc,	// (0x000003dc) qfn_secondary_cp6

0x03ea,	// (0x000003ea) hc_button_pane

0x0095,	// (0x00000095) bg_hc_button_pane_ParamLimits

0x0095,	// (0x00000095) bg_hc_button_pane

0x03f2,	// (0x000003f2) hc_button_pane_g1_ParamLimits

0x03f2,	// (0x000003f2) hc_button_pane_g1

0x040d,	// (0x0000040d) hc_button_pane_t1_ParamLimits

0x040d,	// (0x0000040d) hc_button_pane_t1

0x042b,	// (0x0000042b) bg_hc_button_pane_g1

0x0433,	// (0x00000433) bg_hc_button_pane_g2

0x043b,	// (0x0000043b) bg_hc_button_pane_g3

0x0443,	// (0x00000443) bg_hc_button_pane_g4

0x044b,	// (0x0000044b) bg_hc_button_pane_g5

0x0453,	// (0x00000453) bg_hc_button_pane_g6

0x045b,	// (0x0000045b) bg_hc_button_pane_g7

0x0463,	// (0x00000463) bg_hc_button_pane_g8

0x046b,	// (0x0000046b) bg_hc_button_pane_g9

0x0008,

0x11c8,	// (0x000011c8) bg_hc_button_pane_g

0x02c6,	// (0x000002c6) hc_list_double_graphic_heading_pane_g1_ParamLimits

0x02c6,	// (0x000002c6) hc_list_double_graphic_heading_pane_g1

0x02fa,	// (0x000002fa) hc_list_double_graphic_heading_pane_g2_ParamLimits

0x02fa,	// (0x000002fa) hc_list_double_graphic_heading_pane_g2

0x0306,	// (0x00000306) hc_list_double_graphic_heading_pane_g3_ParamLimits

0x0306,	// (0x00000306) hc_list_double_graphic_heading_pane_g3

0x0002,

0x11db,	// (0x000011db) hc_list_double_graphic_heading_pane_g_ParamLimits

0x11db,	// (0x000011db) hc_list_double_graphic_heading_pane_g

0x0473,	// (0x00000473) hc_list_double_graphic_heading_pane_t1_ParamLimits

0x0473,	// (0x00000473) hc_list_double_graphic_heading_pane_t1

0x0485,	// (0x00000485) hc_list_double_graphic_heading_pane_t2_ParamLimits

0x0485,	// (0x00000485) hc_list_double_graphic_heading_pane_t2

0x0001,

0x11e2,	// (0x000011e2) hc_list_double_graphic_heading_pane_t_ParamLimits

0x11e2,	// (0x000011e2) hc_list_double_graphic_heading_pane_t

0x000a,	// (0x0000000a) main_hc_gridscroll_pane

0x000a,	// (0x0000000a) bg_hc_highlight_list_pane

0x1362,	// (0x00001362) aid_hc_grid_cell_size_ParamLimits

0x1362,	// (0x00001362) aid_hc_grid_cell_size

0x137c,	// (0x0000137c) hc_scroll_pane_cp02_ParamLimits

0x137c,	// (0x0000137c) hc_scroll_pane_cp02

0x1389,	// (0x00001389) main_hc_grid_pane_ParamLimits

0x1389,	// (0x00001389) main_hc_grid_pane

0x13a9,	// (0x000013a9) cell_hc_grid_pane_ParamLimits

0x13a9,	// (0x000013a9) cell_hc_grid_pane

0x0506,	// (0x00000506) bg_hc_highlight_grid_pane_ParamLimits

0x0506,	// (0x00000506) bg_hc_highlight_grid_pane

0x13e0,	// (0x000013e0) cell_hc_grid_pane_g1_ParamLimits

0x13e0,	// (0x000013e0) cell_hc_grid_pane_g1

0x13fc,	// (0x000013fc) cell_hc_grid_pane_t1_ParamLimits

0x13fc,	// (0x000013fc) cell_hc_grid_pane_t1

0x054a,	// (0x0000054a) bg_hc_highlight_grid_pane_g1_ParamLimits

0x054a,	// (0x0000054a) bg_hc_highlight_grid_pane_g1

0x0556,	// (0x00000556) bg_hc_highlight_grid_pane_g2_ParamLimits

0x0556,	// (0x00000556) bg_hc_highlight_grid_pane_g2

0x0562,	// (0x00000562) bg_hc_highlight_grid_pane_g3_ParamLimits

0x0562,	// (0x00000562) bg_hc_highlight_grid_pane_g3

0x056e,	// (0x0000056e) bg_hc_highlight_grid_pane_g4_ParamLimits

0x056e,	// (0x0000056e) bg_hc_highlight_grid_pane_g4

0x057a,	// (0x0000057a) bg_hc_highlight_grid_pane_g5_ParamLimits

0x057a,	// (0x0000057a) bg_hc_highlight_grid_pane_g5

0x0586,	// (0x00000586) bg_hc_highlight_grid_pane_g6_ParamLimits

0x0586,	// (0x00000586) bg_hc_highlight_grid_pane_g6

0x0592,	// (0x00000592) bg_hc_highlight_grid_pane_g7_ParamLimits

0x0592,	// (0x00000592) bg_hc_highlight_grid_pane_g7

0x059e,	// (0x0000059e) bg_hc_highlight_grid_pane_g8_ParamLimits

0x059e,	// (0x0000059e) bg_hc_highlight_grid_pane_g8

0x05aa,	// (0x000005aa) bg_hc_highlight_grid_pane_g9_ParamLimits

0x05aa,	// (0x000005aa) bg_hc_highlight_grid_pane_g9

0x05b6,	// (0x000005b6) bg_hc_highlight_grid_pane_g10_ParamLimits

0x05b6,	// (0x000005b6) bg_hc_highlight_grid_pane_g10

0x0009,

0x11e7,	// (0x000011e7) bg_hc_highlight_grid_pane_g_ParamLimits

0x11e7,	// (0x000011e7) bg_hc_highlight_grid_pane_g

0x0556,	// (0x00000556) bg_hc_highlight_list_pane_g1_ParamLimits

0x0556,	// (0x00000556) bg_hc_highlight_list_pane_g1

0x0556,	// (0x00000556) bg_hc_highlight_list_pane_g2_ParamLimits

0x0556,	// (0x00000556) bg_hc_highlight_list_pane_g2

0x0562,	// (0x00000562) bg_hc_highlight_list_pane_g3_ParamLimits

0x0562,	// (0x00000562) bg_hc_highlight_list_pane_g3

0x056e,	// (0x0000056e) bg_hc_highlight_list_pane_g4_ParamLimits

0x056e,	// (0x0000056e) bg_hc_highlight_list_pane_g4

0x057a,	// (0x0000057a) bg_hc_highlight_list_pane_g5_ParamLimits

0x057a,	// (0x0000057a) bg_hc_highlight_list_pane_g5

0x0586,	// (0x00000586) bg_hc_highlight_list_pane_g6_ParamLimits

0x0586,	// (0x00000586) bg_hc_highlight_list_pane_g6

0x0592,	// (0x00000592) bg_hc_highlight_list_pane_g7_ParamLimits

0x0592,	// (0x00000592) bg_hc_highlight_list_pane_g7

0x059e,	// (0x0000059e) bg_hc_highlight_list_pane_g8_ParamLimits

0x059e,	// (0x0000059e) bg_hc_highlight_list_pane_g8

0x05aa,	// (0x000005aa) bg_hc_highlight_list_pane_g9_ParamLimits

0x05aa,	// (0x000005aa) bg_hc_highlight_list_pane_g9

0x05b6,	// (0x000005b6) bg_hc_highlight_list_pane_g10_ParamLimits

0x05b6,	// (0x000005b6) bg_hc_highlight_list_pane_g10

0x0009,

0x11fc,	// (0x000011fc) bg_hc_highlight_list_pane_g_ParamLimits

0x11fc,	// (0x000011fc) bg_hc_highlight_list_pane_g

0x002d,	// (0x0000002d) area_side_right_pane_ParamLimits

0x002d,	// (0x0000002d) area_side_right_pane

0x007a,	// (0x0000007a) popup_toolbar2_fixed_window_cp001

0x0095,	// (0x00000095) main_aa_coverflow_pane

0x000a,	// (0x0000000a) main_aa_empty_pane

0x000a,	// (0x0000000a) main_aa_fastscroll_pane

0x0095,	// (0x00000095) main_aa_gridscroll_pane_ParamLimits

0x0095,	// (0x00000095) main_aa_gridscroll_pane

0x000a,	// (0x0000000a) main_aa_listscroll_pane

0x00a3,	// (0x000000a3) main_aa_metadata_pane

0x00a3,	// (0x000000a3) main_aa_slider_pane

0x1416,	// (0x00001416) aacf_image_pane_ParamLimits

0x1416,	// (0x00001416) aacf_image_pane

0x0601,	// (0x00000601) aacf_image_pane_cp001_ParamLimits

0x0601,	// (0x00000601) aacf_image_pane_cp001

0x062f,	// (0x0000062f) aacf_image_pane_cp002_ParamLimits

0x062f,	// (0x0000062f) aacf_image_pane_cp002

0x067f,	// (0x0000067f) aacf_slider_pane

0x1487,	// (0x00001487) main_aa_coverflow_pane_t1_ParamLimits

0x1487,	// (0x00001487) main_aa_coverflow_pane_t1

0x14ab,	// (0x000014ab) aacf_image_pane_g1_ParamLimits

0x14ab,	// (0x000014ab) aacf_image_pane_g1

0x145b,	// (0x0000145b) aacf_image_title_pane_ParamLimits

0x145b,	// (0x0000145b) aacf_image_title_pane

0x06b3,	// (0x000006b3) aacf_slider_pane_g1

0x06bb,	// (0x000006bb) aacf_slider_pane_g1_cp001

0x06c3,	// (0x000006c3) aaslider_bg_pane

0x14be,	// (0x000014be) aacf_image_title_pane_g1_ParamLimits

0x14be,	// (0x000014be) aacf_image_title_pane_g1

0x14cc,	// (0x000014cc) aacf_image_title_pane_t1_ParamLimits

0x14cc,	// (0x000014cc) aacf_image_title_pane_t1

0x14ee,	// (0x000014ee) aacf_image_title_pane_t2_ParamLimits

0x14ee,	// (0x000014ee) aacf_image_title_pane_t2

0x0001,

0x1c09,	// (0x00001c09) aacf_image_title_pane_t_ParamLimits

0x1c09,	// (0x00001c09) aacf_image_title_pane_t

0x06fd,	// (0x000006fd) aafs_strip_pane_ParamLimits

0x06fd,	// (0x000006fd) aafs_strip_pane

0x0710,	// (0x00000710) main_aa_fastscroll_pane_g1_ParamLimits

0x0710,	// (0x00000710) main_aa_fastscroll_pane_g1

0x071f,	// (0x0000071f) main_aa_fastscroll_pane_g2_ParamLimits

0x071f,	// (0x0000071f) main_aa_fastscroll_pane_g2

0x0001,

0x1216,	// (0x00001216) main_aa_fastscroll_pane_g_ParamLimits

0x1216,	// (0x00001216) main_aa_fastscroll_pane_g

0x072c,	// (0x0000072c) aafs_strip_grid_pane_ParamLimits

0x072c,	// (0x0000072c) aafs_strip_grid_pane

0x00a3,	// (0x000000a3) aafs_strip_shadow_pane_ParamLimits

0x00a3,	// (0x000000a3) aafs_strip_shadow_pane

0x073a,	// (0x0000073a) aafs_strip_grid_pane_g1_ParamLimits

0x073a,	// (0x0000073a) aafs_strip_grid_pane_g1

0x0765,	// (0x00000765) aa_scroll_pane

0x076e,	// (0x0000076e) aalist_gene_pane_ParamLimits

0x076e,	// (0x0000076e) aalist_gene_pane

0x151a,	// (0x0000151a) aalist_double_entry_pane_ParamLimits

0x151a,	// (0x0000151a) aalist_double_entry_pane

0x151a,	// (0x0000151a) aalist_double_graphic_pane_ParamLimits

0x151a,	// (0x0000151a) aalist_double_graphic_pane

0x151a,	// (0x0000151a) aalist_double_pane_ParamLimits

0x151a,	// (0x0000151a) aalist_double_pane

0x151a,	// (0x0000151a) aalist_double_progress_pane_ParamLimits

0x151a,	// (0x0000151a) aalist_double_progress_pane

0x151a,	// (0x0000151a) aalist_gene_ad_pane_ParamLimits

0x151a,	// (0x0000151a) aalist_gene_ad_pane

0x152b,	// (0x0000152b) aalist_single_pane_ParamLimits

0x152b,	// (0x0000152b) aalist_single_pane

0x2048,	// (0x00002048) aalist_single_pane_g1_ParamLimits

0x2048,	// (0x00002048) aalist_single_pane_g1

0x2054,	// (0x00002054) aalist_single_pane_g2_ParamLimits

0x2054,	// (0x00002054) aalist_single_pane_g2

0x0004,

0x235d,	// (0x0000235d) aalist_single_pane_g_ParamLimits

0x235d,	// (0x0000235d) aalist_single_pane_g

0x206c,	// (0x0000206c) aalist_single_pane_t1_ParamLimits

0x206c,	// (0x0000206c) aalist_single_pane_t1

0x208a,	// (0x0000208a) aalist_double_pane_g1_ParamLimits

0x208a,	// (0x0000208a) aalist_double_pane_g1

0x2096,	// (0x00002096) aalist_double_pane_g2_ParamLimits

0x2096,	// (0x00002096) aalist_double_pane_g2

0x0001,

0x2368,	// (0x00002368) aalist_double_pane_g_ParamLimits

0x2368,	// (0x00002368) aalist_double_pane_g

0x20aa,	// (0x000020aa) aalist_double_pane_t1_ParamLimits

0x20aa,	// (0x000020aa) aalist_double_pane_t1

0x20c0,	// (0x000020c0) aalist_double_pane_t2_ParamLimits

0x20c0,	// (0x000020c0) aalist_double_pane_t2

0x0001,

0x236d,	// (0x0000236d) aalist_double_pane_t_ParamLimits

0x236d,	// (0x0000236d) aalist_double_pane_t

0x15d5,	// (0x000015d5) aalist_double_graphic_pane_g1_ParamLimits

0x15d5,	// (0x000015d5) aalist_double_graphic_pane_g1

0x20d2,	// (0x000020d2) aalist_double_graphic_pane_g2_ParamLimits

0x20d2,	// (0x000020d2) aalist_double_graphic_pane_g2

0x20f2,	// (0x000020f2) aalist_double_graphic_pane_g3_ParamLimits

0x20f2,	// (0x000020f2) aalist_double_graphic_pane_g3

0x1627,	// (0x00001627) aalist_double_graphic_pane_g4_ParamLimits

0x1627,	// (0x00001627) aalist_double_graphic_pane_g4

0x164b,	// (0x0000164b) aalist_double_graphic_pane_g5_ParamLimits

0x164b,	// (0x0000164b) aalist_double_graphic_pane_g5

0x08f3,	// (0x000008f3) aalist_double_graphic_pane_g6_ParamLimits

0x08f3,	// (0x000008f3) aalist_double_graphic_pane_g6

0x0920,	// (0x00000920) aalist_double_graphic_pane_g7_ParamLimits

0x0920,	// (0x00000920) aalist_double_graphic_pane_g7

0x094d,	// (0x0000094d) aalist_double_graphic_pane_g8_ParamLimits

0x094d,	// (0x0000094d) aalist_double_graphic_pane_g8

0x0971,	// (0x00000971) aalist_double_graphic_pane_g9_ParamLimits

0x0971,	// (0x00000971) aalist_double_graphic_pane_g9

0x0995,	// (0x00000995) aalist_double_graphic_pane_g10_ParamLimits

0x0995,	// (0x00000995) aalist_double_graphic_pane_g10

0x09b9,	// (0x000009b9) aalist_double_graphic_pane_g11_ParamLimits

0x09b9,	// (0x000009b9) aalist_double_graphic_pane_g11

0x000a,

0x2372,	// (0x00002372) aalist_double_graphic_pane_g_ParamLimits

0x2372,	// (0x00002372) aalist_double_graphic_pane_g

0x210e,	// (0x0000210e) aalist_double_graphic_pane_t1_ParamLimits

0x210e,	// (0x0000210e) aalist_double_graphic_pane_t1

0x2130,	// (0x00002130) aalist_double_graphic_pane_t2_ParamLimits

0x2130,	// (0x00002130) aalist_double_graphic_pane_t2

0x0001,

0x2389,	// (0x00002389) aalist_double_graphic_pane_t_ParamLimits

0x2389,	// (0x00002389) aalist_double_graphic_pane_t

0x217e,	// (0x0000217e) aalist_double_entry_pane_t1

0x218c,	// (0x0000218c) aalist_entry_pane

0x1e1a,	// (0x00001e1a) aalist_entry_pane_t1

0x000a,	// (0x0000000a) input_focus_pane_cp001

0x16c9,	// (0x000016c9) aalist_double_progress_pane_g1_ParamLimits

0x16c9,	// (0x000016c9) aalist_double_progress_pane_g1

0x2194,	// (0x00002194) aalist_double_progress_pane_g2_ParamLimits

0x2194,	// (0x00002194) aalist_double_progress_pane_g2

0x21c4,	// (0x000021c4) aalist_double_progress_pane_g3_ParamLimits

0x21c4,	// (0x000021c4) aalist_double_progress_pane_g3

0x0002,

0x238e,	// (0x0000238e) aalist_double_progress_pane_g_ParamLimits

0x238e,	// (0x0000238e) aalist_double_progress_pane_g

0x21f4,	// (0x000021f4) aalist_double_progress_pane_t1_ParamLimits

0x21f4,	// (0x000021f4) aalist_double_progress_pane_t1

0x2218,	// (0x00002218) aalist_double_progress_pane_t2_ParamLimits

0x2218,	// (0x00002218) aalist_double_progress_pane_t2

0x1ebe,	// (0x00001ebe) aalist_double_progress_pane_t3_ParamLimits

0x1ebe,	// (0x00001ebe) aalist_double_progress_pane_t3

0x0002,

0x2395,	// (0x00002395) aalist_double_progress_pane_t_ParamLimits

0x2395,	// (0x00002395) aalist_double_progress_pane_t

0x2236,	// (0x00002236) aalist_progress_pane_ParamLimits

0x2236,	// (0x00002236) aalist_progress_pane

0x0b30,	// (0x00000b30) aalist_progress_pane_g1

0x0b39,	// (0x00000b39) aalist_progress_pane_g2

0x0b42,	// (0x00000b42) aalist_progress_pane_g3

0x0003,

0x125a,	// (0x0000125a) aalist_progress_pane_g

0x17b9,	// (0x000017b9) aalist_gene_ad_pane_g1

0x17c2,	// (0x000017c2) main_aa_empty_pane_t1

0x17d0,	// (0x000017d0) main_aa_empty_pane_t2

0x17de,	// (0x000017de) main_aa_empty_pane_t3

0x17ec,	// (0x000017ec) main_aa_empty_pane_t4

0x0003,

0x1c4d,	// (0x00001c4d) main_aa_empty_pane_t

0x17fa,	// (0x000017fa) aa_scroll_pane_cp001_ParamLimits

0x17fa,	// (0x000017fa) aa_scroll_pane_cp001

0x1812,	// (0x00001812) aa_taskswapper_pane_ParamLimits

0x1812,	// (0x00001812) aa_taskswapper_pane

0x0bb3,	// (0x00000bb3) aagrid_gene_pane_ParamLimits

0x0bb3,	// (0x00000bb3) aagrid_gene_pane

0x1826,	// (0x00001826) aagrid_cell_image_pane_ParamLimits

0x1826,	// (0x00001826) aagrid_cell_image_pane

0x1884,	// (0x00001884) aagrid_cell_image_pane_g1_ParamLimits

0x1884,	// (0x00001884) aagrid_cell_image_pane_g1

0x18ae,	// (0x000018ae) aagrid_cell_image_pane_g2_ParamLimits

0x18ae,	// (0x000018ae) aagrid_cell_image_pane_g2

0x18d2,	// (0x000018d2) aagrid_cell_image_pane_g3_ParamLimits

0x18d2,	// (0x000018d2) aagrid_cell_image_pane_g3

0x18e8,	// (0x000018e8) aagrid_cell_image_pane_g4_ParamLimits

0x18e8,	// (0x000018e8) aagrid_cell_image_pane_g4

0x0003,

0x1c56,	// (0x00001c56) aagrid_cell_image_pane_g_ParamLimits

0x1c56,	// (0x00001c56) aagrid_cell_image_pane_g

0x0ccf,	// (0x00000ccf) aagrid_cell_image_pane_t1_ParamLimits

0x0ccf,	// (0x00000ccf) aagrid_cell_image_pane_t1

0x0506,	// (0x00000506) grid_highlight_pane_cp001_ParamLimits

0x0506,	// (0x00000506) grid_highlight_pane_cp001

0x1901,	// (0x00001901) aa_taskswapper_pane_g1_ParamLimits

0x1901,	// (0x00001901) aa_taskswapper_pane_g1

0x190e,	// (0x0000190e) aa_taskswapper_pane_t1_ParamLimits

0x190e,	// (0x0000190e) aa_taskswapper_pane_t1

0x1924,	// (0x00001924) aatasksw_grid_pane_ParamLimits

0x1924,	// (0x00001924) aatasksw_grid_pane

0x193b,	// (0x0000193b) aatasksw_cell_pane_ParamLimits

0x193b,	// (0x0000193b) aatasksw_cell_pane

0x194e,	// (0x0000194e) aatasksw_cell_pane_g1

0x000a,	// (0x0000000a) grid_highlight_pane_cp002

0x1957,	// (0x00001957) aamd_info_pane

0x1960,	// (0x00001960) aamd_list_pane

0x1968,	// (0x00001968) aamd_list_double_pane_ParamLimits

0x1968,	// (0x00001968) aamd_list_double_pane

0x1979,	// (0x00001979) aamd_list_single_pane_ParamLimits

0x1979,	// (0x00001979) aamd_list_single_pane

0x0d63,	// (0x00000d63) aamd_list_single_pane_g1_ParamLimits

0x0d63,	// (0x00000d63) aamd_list_single_pane_g1

0x198e,	// (0x0000198e) aamd_list_single_pane_g2_ParamLimits

0x198e,	// (0x0000198e) aamd_list_single_pane_g2

0x199a,	// (0x0000199a) aamd_list_single_pane_g3_ParamLimits

0x199a,	// (0x0000199a) aamd_list_single_pane_g3

0x0002,

0x1c5f,	// (0x00001c5f) aamd_list_single_pane_g_ParamLimits

0x1c5f,	// (0x00001c5f) aamd_list_single_pane_g

0x19b2,	// (0x000019b2) aamd_list_single_pane_t1_ParamLimits

0x19b2,	// (0x000019b2) aamd_list_single_pane_t1

0x0d63,	// (0x00000d63) aamd_list_double_pane_g1_ParamLimits

0x0d63,	// (0x00000d63) aamd_list_double_pane_g1

0x0d70,	// (0x00000d70) aamd_list_double_pane_g2_ParamLimits

0x0d70,	// (0x00000d70) aamd_list_double_pane_g2

0x19cc,	// (0x000019cc) aamd_list_double_pane_g3_ParamLimits

0x19cc,	// (0x000019cc) aamd_list_double_pane_g3

0x0002,

0x1c66,	// (0x00001c66) aamd_list_double_pane_g_ParamLimits

0x1c66,	// (0x00001c66) aamd_list_double_pane_g

0x19e4,	// (0x000019e4) aamd_list_double_pane_t1_ParamLimits

0x19e4,	// (0x000019e4) aamd_list_double_pane_t1

0x19fb,	// (0x000019fb) aamd_list_double_pane_t2_ParamLimits

0x19fb,	// (0x000019fb) aamd_list_double_pane_t2

0x0001,

0x1c6d,	// (0x00001c6d) aamd_list_double_pane_t_ParamLimits

0x1c6d,	// (0x00001c6d) aamd_list_double_pane_t

0x14be,	// (0x000014be) aamd_info_pane_g1_ParamLimits

0x14be,	// (0x000014be) aamd_info_pane_g1

0x1a12,	// (0x00001a12) aamd_info_pane_g2_ParamLimits

0x1a12,	// (0x00001a12) aamd_info_pane_g2

0x1a22,	// (0x00001a22) aamd_info_pane_g3_ParamLimits

0x1a22,	// (0x00001a22) aamd_info_pane_g3

0x0002,

0x1c72,	// (0x00001c72) aamd_info_pane_g_ParamLimits

0x1c72,	// (0x00001c72) aamd_info_pane_g

0x1a32,	// (0x00001a32) aamd_info_pane_t1_ParamLimits

0x1a32,	// (0x00001a32) aamd_info_pane_t1

0x1a4a,	// (0x00001a4a) aamd_info_pane_t2_ParamLimits

0x1a4a,	// (0x00001a4a) aamd_info_pane_t2

0x0e5a,	// (0x00000e5a) aamd_info_pane_t3_ParamLimits

0x0e5a,	// (0x00000e5a) aamd_info_pane_t3

0x0002,

0x1c79,	// (0x00001c79) aamd_info_pane_t_ParamLimits

0x1c79,	// (0x00001c79) aamd_info_pane_t

0x0b30,	// (0x00000b30) aaslider_bg_pane_g1

0x0b42,	// (0x00000b42) aaslider_bg_pane_g2

0x0001,

0x1296,	// (0x00001296) aaslider_bg_pane_g

0x0b39,	// (0x00000b39) aaslider_bg_pane_g2_copy1

0x1a76,	// (0x00001a76) aaslider_pane_ParamLimits

0x1a76,	// (0x00001a76) aaslider_pane

0x0e9e,	// (0x00000e9e) aaslider_bg_pane_cp001_ParamLimits

0x0e9e,	// (0x00000e9e) aaslider_bg_pane_cp001

0x0ed2,	// (0x00000ed2) aaslider_pane_g1_ParamLimits

0x0ed2,	// (0x00000ed2) aaslider_pane_g1

0x0eec,	// (0x00000eec) aaslider_pane_g2_ParamLimits

0x0eec,	// (0x00000eec) aaslider_pane_g2

0x0f10,	// (0x00000f10) aaslider_pane_g3_ParamLimits

0x0f10,	// (0x00000f10) aaslider_pane_g3

0x0004,

0x129b,	// (0x0000129b) aaslider_pane_g_ParamLimits

0x129b,	// (0x0000129b) aaslider_pane_g

0x0f42,	// (0x00000f42) aaslider_pane_t1_ParamLimits

0x0f42,	// (0x00000f42) aaslider_pane_t1

0x0f58,	// (0x00000f58) aaslider_pane_t2_ParamLimits

0x0f58,	// (0x00000f58) aaslider_pane_t2

0x0f6e,	// (0x00000f6e) aaslider_pane_t3_ParamLimits

0x0f6e,	// (0x00000f6e) aaslider_pane_t3

0x0002,

0x12a6,	// (0x000012a6) aaslider_pane_t_ParamLimits

0x12a6,	// (0x000012a6) aaslider_pane_t

0x0f8c,	// (0x00000f8c) aid_touch_size_slider_marker_ParamLimits

0x0f8c,	// (0x00000f8c) aid_touch_size_slider_marker

0x152b,	// (0x0000152b) aalist_list_sub_pane_ParamLimits

0x152b,	// (0x0000152b) aalist_list_sub_pane

0x07d8,	// (0x000007d8) aalist_single_pane_g3_ParamLimits

0x07d8,	// (0x000007d8) aalist_single_pane_g3

0x07e4,	// (0x000007e4) aalist_single_pane_g4_ParamLimits

0x07e4,	// (0x000007e4) aalist_single_pane_g4

0x0087,	// (0x00000087) list_highlight_pane_cp001

0x0feb,	// (0x00000feb) aalist_list_sub_pane_g1_ParamLimits

0x0feb,	// (0x00000feb) aalist_list_sub_pane_g1

0x0ff7,	// (0x00000ff7) aalist_list_sub_pane_g2_ParamLimits

0x0ff7,	// (0x00000ff7) aalist_list_sub_pane_g2

0x1aa5,	// (0x00001aa5) aalist_list_sub_pane_g3_ParamLimits

0x1aa5,	// (0x00001aa5) aalist_list_sub_pane_g3

0x2258,	// (0x00002258) aalist_list_sub_pane_g4_ParamLimits

0x2258,	// (0x00002258) aalist_list_sub_pane_g4

0x2264,	// (0x00002264) aalist_list_sub_pane_g5_ParamLimits

0x2264,	// (0x00002264) aalist_list_sub_pane_g5

0x2294,	// (0x00002294) aalist_list_sub_pane_g7_ParamLimits

0x2294,	// (0x00002294) aalist_list_sub_pane_g7

0x0005,

0x239c,	// (0x0000239c) aalist_list_sub_pane_g_ParamLimits

0x239c,	// (0x0000239c) aalist_list_sub_pane_g

0x22cc,	// (0x000022cc) aalist_list_sub_pane_t1_ParamLimits

0x22cc,	// (0x000022cc) aalist_list_sub_pane_t1

0x22e1,	// (0x000022e1) aalist_list_sub_pane_t2_ParamLimits

0x22e1,	// (0x000022e1) aalist_list_sub_pane_t2

0x0001,

0x23a9,	// (0x000023a9) aalist_list_sub_pane_t_ParamLimits

0x23a9,	// (0x000023a9) aalist_list_sub_pane_t

0x0095,	// (0x00000095) main_aa_coverflow_pane_ParamLimits

0x00a3,	// (0x000000a3) main_aa_metadata_pane_ParamLimits

0x1563,	// (0x00001563) aalist_single_pane_g5_ParamLimits

0x1563,	// (0x00001563) aalist_single_pane_g5

0x0087,	// (0x00000087) list_highlight_pane_cp001_ParamLimits

0x067f,	// (0x0000067f) aacf_slider_pane_ParamLimits

0x000a,	// (0x0000000a) main_aa_video_pane

0x1512,	// (0x00001512) aid_size_touch_aascroll_bar

0x151a,	// (0x0000151a) aalist_single_large_graphic_pane_ParamLimits

0x151a,	// (0x0000151a) aalist_single_large_graphic_pane

0x0f22,	// (0x00000f22) aaslider_pane_g4_ParamLimits

0x0f22,	// (0x00000f22) aaslider_pane_g4

0x0f32,	// (0x00000f32) aaslider_pane_g5_ParamLimits

0x0f32,	// (0x00000f32) aaslider_pane_g5

0x0fb0,	// (0x00000fb0) aid_touch_size_slider_max_ParamLimits

0x0fb0,	// (0x00000fb0) aid_touch_size_slider_max

0x1a95,	// (0x00001a95) aid_touch_size_slider_min_ParamLimits

0x1a95,	// (0x00001a95) aid_touch_size_slider_min

0x1bb6,	// (0x00001bb6) aalist_single_large_graphic_pane_g1_ParamLimits

0x1bb6,	// (0x00001bb6) aalist_single_large_graphic_pane_g1

0x1bc3,	// (0x00001bc3) aalist_single_large_graphic_pane_g2_ParamLimits

0x1bc3,	// (0x00001bc3) aalist_single_large_graphic_pane_g2

0x1bcf,	// (0x00001bcf) aalist_single_large_graphic_pane_g3_ParamLimits

0x1bcf,	// (0x00001bcf) aalist_single_large_graphic_pane_g3

0x0002,

0x1c92,	// (0x00001c92) aalist_single_large_graphic_pane_g_ParamLimits

0x1c92,	// (0x00001c92) aalist_single_large_graphic_pane_g

0x1be3,	// (0x00001be3) aalist_single_large_graphic_pane_t1_ParamLimits

0x1be3,	// (0x00001be3) aalist_single_large_graphic_pane_t1

0x1bf9,	// (0x00001bf9) main_aa_video_pane_g1_ParamLimits

0x1bf9,	// (0x00001bf9) main_aa_video_pane_g1

0x068c,	// (0x0000068c) main_aa_coverflow_pane_g1

0x07ab,	// (0x000007ab) aid_size_min_handle_cp002

0x007a,	// (0x0000007a) popup_toolbar2_fixed_window_cp001_ParamLimits

0x00a3,	// (0x000000a3) main_aa_slider_pane_ParamLimits

0x07ab,	// (0x000007ab) aid_size_min_handle_cp001

0x0fd0,	// (0x00000fd0) aaslider_bg_pane_cp001_g1

0x0fd9,	// (0x00000fd9) aaslider_bg_pane_cp001_g2

0x0fe2,	// (0x00000fe2) aaslider_bg_pane_cp001_g3

0x0002,

0x12ad,	// (0x000012ad) aaslider_bg_pane_cp001_g

0x0b30,	// (0x00000b30) aalist_progress_pane_g4

0x0f84,	// (0x00000f84) aid_aaslider_pane_rect_inner
};


const AknLayoutScalable_UiAccel::SCdlImpl KCdlImpl = 
	{
	&GetComponentTypeById,
	&GetParamLimitsById,
	&GetWindowComponentById,
	&GetTextComponentById,
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
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_hql_c_qvga_lsc_Small
