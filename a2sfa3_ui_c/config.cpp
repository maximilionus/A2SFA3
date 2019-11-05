class CfgPatches
{
	class a2sfa3_ui
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0;
		requiredAddons[] = {"A3_Characters_F", "A3_Sounds_F", "A3_Data_F", "a2sfa3_data", "a2sfa3_sounds"};
		author = "MAXIMILI";
	};
};

class CfgAddons
{
       class PreloadAddons
       {
               class CONFIG_SOUNDS_CLASS
               {
                       list[]={"a2sfa3_ui"};
               };
       };
};

class CfgSounds
{
	class hint
	{
		sound[]=
		{
			"A2SFA3\a2sfa3_sounds\ambient\hint",
			0.89125091,
			1
		};
		titles[]={};
	};
};