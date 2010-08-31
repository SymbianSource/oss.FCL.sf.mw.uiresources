Precacher tool
-------------------------------------------------------------------
Step 1:
Ensure the skins folder has series60skin_MIFList.txt. Compile \s60\mw\uiresources\skins\AknSkinContent to generate if its not present

Step 2:
Run IconId.pl
usage: IconId.pl MIFList-file build-path out-file

Example
Y:\>IconId.pl Y:\s60\mw\uiresources\skins\AknSkinContent\generated\scalableseries60skin\data\series60skin_MIFList.txt y: iconlist.csv

This generates the icon enum, major, minor number, icon id in iconlist.csv

Step 3:
Define the MACRO's for precacher, 
Macro PRECACHE2 should be defined to enable the precacher.
Macro PRECACHELOG should be defined to get the traces generated
To define the macro put the below code in AknIcon.mmp(in folder \s60\mw\uiresources\uigraphics\AknIcon\group)

MACRO PRECACHE2
MACRO PRECACHELOG
#define PRECACHELOG

Generate the build, flash the phone
Now start the phone open all the applications whose icons you wish to precache
This creates the trace file logs\AknIconPreCacher\Traces.txt (create the folder AknIconPreCacher if not already present)


Step 4:
Run IconLoads.pl
usage: iconlist iconloads out-file

Example
Y:\>IconLoads.pl iconlist.csv Y:\epoc32\winscw\c\logs\AknIconPreCacher\Traces.txt resources.rss

This generates the resource file in the required format

Step 5:
Copy the contents of the resource file (resources.rss in this case) into AknIconSrv.rss.
it will be in the folder \s60\mw\uiresources\uigraphics\AknIcon\srvsrc.

RESOURCE ARRAY r_precache_list2
    {
    items =
        {
	// copy the icon list here
        };
    }

Step 6:
Compile the AknIcon code, the macro PRECACHE2 should be defined (if not already done)to enable precaching
uncomment (or remove ) the macro definition for PRECACHELOG.