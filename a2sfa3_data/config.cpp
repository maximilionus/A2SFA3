//Created by MAXIMILI (Materials: Bohemia Interactive Studio (C))

class CfgAddons
{
       class PreloadAddons
       {
               class a2sfa3_preload
               {
                       list[]={"a2sfa3_data"};
               };
       };
};


class CfgPatches
{
	class a2sfa3_data
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0;
		requiredAddons[] = {"A3_Characters_F", "A3_Sounds_F", "A3_Data_F", "a2sfa3_sounds"};
		author = "MAXIMILI";
	};
};
