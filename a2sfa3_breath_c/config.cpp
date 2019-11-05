#define BREATH_VOLUME 1

class CfgPatches
{
	class a2sfa3_breath
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
                       list[]={"a2sfa3_breath"};
               };
       };
};


class CfgVehicles
{
	class Man;

	class CAManBase : Man
	{

		class SoundBreath
		{
			breath0[] =
			{
				{
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-01",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-02",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-03",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-04",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-05",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-06-zakuck",BREATH_VOLUME,1,7},0.5}
				},
				{
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-01",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-02",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-03",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-04",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-05",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-06-zakuck",BREATH_VOLUME,1,7},0.5}
				},
				{
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-01",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-02",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-03",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-04",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-05",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-06-zakuck",BREATH_VOLUME,1,7},0.5},
				}
			};
			breath1[] =
			{
				{
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-01",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-02",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-03",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-04",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-05",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-06-zakuck",BREATH_VOLUME,1,7},0.5}
				},
				{
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-01",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-02",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-03",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-04",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-05",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-06-zakuck",BREATH_VOLUME,1,7},0.5}
				},
				{
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-01",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-02",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-03",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-04",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-05",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-06-zakuck",BREATH_VOLUME,1,7},0.5},
				}
			};
			breath2[] =
			{
				{
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-01",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-02",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-03",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-04",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-05",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-06-zakuck",BREATH_VOLUME,1,7},0.5}
				},
				{
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-01",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-02",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-03",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-04",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-05",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-06-zakuck",BREATH_VOLUME,1,7},0.5}
				},
				{
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-01",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-02",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-03",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-04",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-05",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-06-zakuck",BREATH_VOLUME,1,7},0.5},
				}
			};
			breath3[] =
			{
				{
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-01",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-02",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-03",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-04",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-05",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run-breath-06-zakuck",BREATH_VOLUME,1,7},0.5}
				},
				{
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-01",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-02",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-03",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-04",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-05",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-run2-breath-06-zakuck",BREATH_VOLUME,1,7},0.5}
				},
				{
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-01",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-02",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-03",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-04",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-05",BREATH_VOLUME,1,7},0.5},
					{{"A2SFA3\a2sfa3_sounds\breath\george-sprint-breath-06-zakuck",BREATH_VOLUME,1,7},0.5},
				}
			};
		};

	};
};
