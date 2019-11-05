class CfgPatches
{
	class a2sfa3_env
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
                       list[]={"a2sfa3_env"};
               };
       };
};



class CfgSoundShaders
{
	class Birds_Forest_Day_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\ambient\treesbirds",
				1
			}
		};
		volume="(shooting factor [0.6,1]) * (windy factor[3,0.2]) * (rain factor[0.7,0.5]) * (daytime factor [0.25, 0.33]) * (daytime factor [0.88, 0.79]) * (altitudeGround factor [80,20]) * (altitudeGround factor [80,20])";
	};
	class Stratis_RainMeadows_Low_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\ambient\soft_rain01",
				1
			}
		};
		volume="(altitudeGround factor [50,15]) * (altitudeGround factor [50,15]) * (1 - 0.1*forest) * (rain factor [0.4, 0.3]) * rain/0.3";
	};
	class Stratis_RainMeadows_Medium_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\ambient\hard_rain01",
				1
			}
		};
		volume="(altitudeGround factor [70,20]) * (altitudeGround factor [70,20]) * (1 - 0.1*forest) * (rain factor [0, 0.2]) * (rain factor [0.8, 0.6]) * rain / 0.7";
	};
	class Stratis_RainMeadows_High_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\ambient\hard_rain02",
				1
			}
		};
		volume="(altitudeGround factor [90,25]) * (altitudeGround factor [90,25]) * (1 - 0.1*forest) * (rain factor [0.4, 0.6]) * rain";
	};
	class Stratis_RainHouses_SoundShader
	{
		samples[]=
		{

			{
				"A3\Sounds_F\environment\ambient\redesigned\rain_houses_high",
				1
			}
		};
		volume="(altitudeGround factor [90,25]) * (altitudeGround factor [90,25]) * houses * (rain factor [0.2, 1]) * rain / 2";
	};
	class Wind_Low_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\ambient\wind_day",
				1
			}
		};
		volume="0.4 * (0.5*(windy factor[1.2,0.1])) * ((altitudeGround * (1 - sea) + altitudeSea * sea) factor [10, 80]) * (0.5*(altitudeSea factor [200,300])) * (altitudeGround factor [80, 10]) * (1-forest)";
	};
	class Wind_High_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\ambient\wind_day3",
				1
			}
		};
		volume="0.4 * (0.5*(windy factor[0,1.2])) * (((0.5*altitudeGround) * (1 - sea) + (0.5*altitudeSea) * sea) factor [0, 80]) + (0.5*(0.5*altitudeGround factor [80, 0])) * (0.5*(windy factor[0.1, 1.3])) * (1 - forest)";
	};

};

class CfgSoundSets
{
	class Wind_Low_SoundSet
	{
		soundShaders[]=
		{
			"Wind_Low_SoundShader"
		};
		volumeFactor=0.1;
		spatial=0;
		loop=1;
	};
	class Wind_High_SoundSet
	{
		soundShaders[]=
		{
			"Wind_High_SoundShader"
		};
		volumeFactor=0.30000001;
		spatial=0;
		loop=1;
	};
};

// added a general buzz sound instead of wind sound
class CfgEnvSounds
{
	class WindSlow
	{
		name = "Wind (Slow)";
		sound[] = {"A2SFA3\a2sfa3_sounds\ambient\wind_day", 0.07, 1};
		volume = 0.2;
	};

	class WindMedium
	{
		name = "Wind (Middle)";
		sound[] = {"A2SFA3\a2sfa3_sounds\ambient\wind_day", 0.07, 1};
		volume = 0.2;
	};

	class WindFast
	{
		name = "Wind (Fast)";
		sound[] = {"A2SFA3\a2sfa3_sounds\ambient\wind_day3", 0.07, 1};
		volume = 0.2;
	};
};
