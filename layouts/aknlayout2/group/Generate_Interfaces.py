#!/usr/bin/python

import subprocess

subprocess.call(['AknLayoutCompiler', 'MLCompData2CDL', '-nodeletes', '-allparams', '../xml/av/_all/php_av_qhd_prt_tch/display_eur_compdata.xml', '../xml/av/_all/phl_av_qhd_lsc_tch/display_eur_compdata.xml', '../cdl/AknLayoutScalable_Avkon.cdl', '0x1020384E'])

subprocess.call(['AknLayoutCompiler', 'MLCompData2CDL', '-nodeletes', '-allparams', '../xml/apps/_all/php_apps_qhd_prt_tch/display_eur_compdata.xml', '../xml/apps/_all/phl_apps_qhd_lsc_tch/display_eur_compdata.xml', '../cdl/AknLayoutScalable_Apps.cdl', '0x1020384F'])

subprocess.call(['AknLayoutCompiler', 'MLCompData2CDL', '-nodeletes', '-allparams', '../xml/c/_all/hhp_c_qhd_prt_tch/display_eur_compdata.xml', '../xml/c/_all/hhl_c_qhd_lsc_tch/display_eur_compdata.xml', '../cdl/AknLayoutScalable_UiAccel.cdl', '0x10203850'])

