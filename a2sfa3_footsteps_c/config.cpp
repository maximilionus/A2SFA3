#define MOVEMENT_VOLUME 2.9
#define FOOTSTEPS_VOLUME 3.5
#define MY_FOOTSTEPS_VOLUME 3.5
#define WALK_AUDIBLE_DISTANCE 20 + 5
#define RUN_AUDIBLE_DISTANCE 25 + 5
#define SPRINT_AUDIBLE_DISTANCE 30 + 5
#define CRAWL_AUDIBLE_DISTANCE 15 + 5

#define STANDUP_AUDIBLE_DISTANCE 14
#define LAYDOWN_AUDIBLE_DISTANCE 15
#define BODYFALL_AUDIBLE_DISTANCE 17
#define SWIM_AUDIBLE_DISTANCE 22
#define DIVE_AUDIBLE_DISTANCE 17
#define SLIDE_AUDIBLE_DISTANCE 15
#define LADDER_AUDIBLE_DISTANCE 18

class CfgPatches
{
	class a2sfa3_footsteps
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
               class A2_CONFIG_SOUNDS_CLASS
               {
                       list[]={"a2sfa3_footsteps"};
               };
       };
};


class CfgSoundShaders
{

	class footsteps_default_walk_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_1",
				1
			}
		};
		volume=0.25118864;
		range=35;
		frequency=1;
	};
	class footsteps_default_tactical_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_1",
				1
			}
		};
		volume=0.31622776;
		range=45;
		frequency=1;
	};
	class footsteps_default_run_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\normal\run_1",
				1
			}
		};
		volume=0.39810717;
		range=45;
		frequency=1;
	};
	class footsteps_default_sprint_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_1",
				1
			}
		};
		volume=0.50118721;
		range=50;
		frequency=1;
	};
	class footsteps_default_crawl_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl1",
				1
			}
		};
		volume=0.12589253;
		range=20;
		frequency=1;
	};
	class footsteps_lino_walk_SoundShader: footsteps_default_walk_SoundShader //WIP (Down)
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_01",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_02",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_03",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_04",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_05",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_06",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_07",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_08",
				1
			}
		};
		frequency=1;
	};
	class footsteps_lino_tactical_SoundShader: footsteps_default_tactical_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_01",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_02",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_03",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_04",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_05",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_06",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_07",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_08",
				1
			}
		};
		frequency=1;
	};
	class footsteps_lino_run_SoundShader: footsteps_default_run_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\run_01",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\run_02",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\run_03",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\run_04",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\run_05",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\run_06",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\run_07",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\run_08",
				1
			}
		};
		frequency=1;
	};
	class footsteps_lino_sprint_SoundShader: footsteps_default_sprint_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\sprint_01",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\sprint_02",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\sprint_03",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\sprint_04",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\sprint_05",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\sprint_06",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\sprint_07",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\sprint_08",
				1
			}
		};
		frequency=1;
	};
	class footsteps_lino_crawl_SoundShader: footsteps_default_crawl_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl1",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl2",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl3",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl4",
				1
			}

		};
		frequency=1;
	};
	class footsteps_lino_int_rev_walk_SoundShader: footsteps_default_walk_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_01",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_02",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_03",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_04",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_05",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_06",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_07",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_08",
				1
			}
		};
		volume=0.17782794;
		frequency=1;
	};
	class footsteps_lino_int_rev_tactical_SoundShader: footsteps_default_tactical_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_01",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_02",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_03",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_04",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_05",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_06",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_07",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\walk_08",
				1
			}
		};
		volume=0.17782794;
		frequency=1;
	};
	class footsteps_lino_int_rev_run_SoundShader: footsteps_default_run_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\run_01",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\run_02",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\run_03",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\run_04",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\run_05",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\run_06",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\run_07",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\run_08",
				1
			}
		};
		volume=0.17782794;
		frequency=1;
	};
	class footsteps_lino_int_rev_sprint_SoundShader: footsteps_default_sprint_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\sprint_01",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\sprint_02",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\sprint_03",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\sprint_04",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\sprint_05",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\sprint_06",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\sprint_07",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\lino\sprint_08",
				1
			}
		};
		volume=0.17782794;
		frequency=1;
	};
	class footsteps_mud_walk_SoundShader: footsteps_default_walk_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_walk_1",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_walk_2",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_walk_3",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_walk_4",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_walk_5",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_walk_6",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_walk_7",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_walk_8",
				1
			}
		};
		frequency=1;
	};
	class footsteps_mud_tactical_SoundShader: footsteps_default_tactical_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_walk_1",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_walk_2",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_walk_3",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_walk_4",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_walk_5",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_walk_6",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_walk_7",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_walk_8",
				1
			}
		};
		frequency=1;
	};
	class footsteps_mud_run_SoundShader: footsteps_default_run_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_run_1",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_run_2",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_run_3",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_run_4",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_run_5",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_run_6",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_run_7",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_run_8",
				1
			}
		};
		frequency=1;
	};
	class footsteps_mud_sprint_SoundShader: footsteps_default_sprint_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_sprint_1",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_sprint_2",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_sprint_3",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_sprint_4",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_sprint_5",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_sprint_6",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_sprint_7",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\mud_sprint_8",
				1
			}
		};
		frequency=1;
	};
	class footsteps_mud_crawl_SoundShader: footsteps_default_crawl_SoundShader
	{
		samples[]=
		{

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\crawl1",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\crawl2",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\crawl3",
				1
			},

			{
				"A2SFA3\a2sfa3_sounds\footsteps\mud\crawl4",
				1
			}
		};
		frequency=1;
	};
};


class CfgVehicles
{
	class Man;

	class CAManBase : Man
	{

		class SoundEnvironExt
		{
			generic[]=
			{
				{
				"roll",

				{
					"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1",
					0.89125091,
					1,
					20
				}
			},

			{
				"roll",

				{
					"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2",
					0.89125091,
					1,
					20
				}
			},

			{
				"roll",

				{
					"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3",
					0.89125091,
					1,
					20
				}
			},

			{
				"roll",

				{
					"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1",
					0.89125091,
					1,
					20
				}
			},

			{
				"roll_unarmed",

				{
					"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1",
					0.89125091,
					1,
					20
				}
			},

			{
				"roll_unarmed",

				{
					"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2",
					0.89125091,
					1,
					20
				}
			},

			{
				"roll_unarmed",

				{
					"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3",
					0.89125091,
					1,
					20
				}
			},

			{
				"ladder",

				{
					"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01",
					0.50118721,
					1,
					20
				}
			},

			{
				"ladder",

				{
					"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02",
					0.50118721,
					1,
					20
				}
			},

			{
				"ladder",

				{
					"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03",
					0.50118721,
					1,
					20
				}
			},

			{
				"ladder",

				{
					"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04",
					0.50118721,
					1,
					20
				}
			},

			{
				"ladder",

				{
					"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05",
					0.50118721,
					1,
					20
				}
			},

			{
				"ladder",

				{
					"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06",
					0.50118721,
					1,
					20
				}
			}
		};

			field[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_1", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_2", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_3", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_4", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_5", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_6", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_7", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_8", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_1", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_2", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_3", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_4", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_5", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_6", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_7", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_8", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_1", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_2", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_3", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_4", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_5", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_6", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_7", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_8", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_1", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_2", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_3", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_4", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_5", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_6", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_7", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_8", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\field\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\field\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\field\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\field\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\field\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\field\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\field\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\field\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\field\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\field\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\field\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\field\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive",  {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			city[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\city\walk_01", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\city\walk_02", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\city\walk_03", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\city\walk_04", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\city\walk_05", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\city\walk_06", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\city\walk_07", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\city\walk_08", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\city\run_01", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\city\run_02", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\city\run_03", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\city\run_04", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\city\run_05", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\city\run_06", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\city\run_07", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\city\run_08", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\city\walk_01", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\city\walk_02", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\city\walk_03", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\city\walk_04", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\city\walk_05", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\city\walk_06", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\city\walk_07", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\city\walk_08", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\city\sprint_01", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\city\sprint_02", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\city\sprint_03", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\city\sprint_04", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\city\sprint_05", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\city\sprint_06", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\city\sprint_07", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\city\sprint_08", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\city\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\city\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\city\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\city\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\city\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\city\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\city\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\city\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\city\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\city\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\city\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\city\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\city\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\city\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\city\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\city\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive",  {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};


			rock[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_walk_1", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_walk_2", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_walk_3", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_walk_4", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_walk_5", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_walk_6", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_walk_7", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_walk_8", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_run_1", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_run_2", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_run_3", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_run_4", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_run_5", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_run_6", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_run_7", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_run_8", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_walk_1", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_walk_2", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_walk_3", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_walk_4", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_walk_5", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_walk_6", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_walk_7", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_walk_8", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_sprint_1", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_sprint_2", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_sprint_3", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_sprint_4", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_sprint_5", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_sprint_6", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_sprint_7", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\rock\rock_sprint_8", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\rock\crawl1", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\rock\crawl2", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\rock\crawl3", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\rock\crawl4", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\rock\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\rock\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\rock\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\rock\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\rock\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\rock\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\rock\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\rock\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive",  {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			normal[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_1", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_2", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_3", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_4", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_5", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_6", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_7", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_8", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\normal\run_1", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\normal\run_2", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\normal\run_3", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\normal\run_4", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\normal\run_5", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\normal\run_6", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\normal\run_7", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\normal\run_8", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_1", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_2", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_3", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_4", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_5", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_6", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_7", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_8", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_1", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_2", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_3", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_4", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_5", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_6", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_7", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_8", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\normal\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\normal\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\normal\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\normal\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\normal\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\normal\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\normal\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\normal\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\normal\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\normal\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\normal\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\normal\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			tarmac[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_1", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_2", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_3", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_4", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_5", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_6", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_7", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_8", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\run_1", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\run_2", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\run_3", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\run_4", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\run_5", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\run_6", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\run_7", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\run_8", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_1", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_2", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_3", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_4", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_5", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_6", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_7", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_8", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\sprint_1", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\sprint_2", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\sprint_3", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\sprint_4", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\sprint_5", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\sprint_6", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\sprint_7", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\sprint_8", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			stony[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_1", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_2", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_3", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_4", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_5", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_6", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_7", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_8", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\normal\run_1", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\normal\run_2", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\normal\run_3", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\normal\run_4", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\normal\run_5", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\normal\run_6", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\normal\run_7", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\normal\run_8", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_1", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_2", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_3", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_4", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_5", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_6", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_7", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\normal\walk_8", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_1", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_2", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_3", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_4", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_5", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_6", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_7", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\normal\sprint_8", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl1", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl2", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl3", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl4", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\normal\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\normal\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\normal\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\normal\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\normal\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\normal\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\normal\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\normal\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\normal\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\normal\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\normal\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\normal\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			water[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_1", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_2", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_3", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_4", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_5", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_6", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_7", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_8", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_run_1", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_run_2", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_run_3", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_run_4", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_run_5", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_run_6", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_run_7", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_run_8", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_1", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 6}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_2", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 6}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_3", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 6}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_4", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 6}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_5", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 6}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_6", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 6}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_7", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 6}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_8", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 6}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_sprint_1", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_sprint_2", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_sprint_3", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_sprint_4", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_sprint_5", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_sprint_6", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_sprint_7", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_sprint_8", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\water\crawl1", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 3}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\water\crawl2", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 3}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\water\crawl3", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 3}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\water\crawl4", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 3}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\water\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE + 5}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\water\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE + 5}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\water\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE + 5}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\water\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE + 5}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\water\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE + 5}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\water\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE + 5}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\water\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE + 5}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\water\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE + 5}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\water\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\water\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\water\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\water\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", 1, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", 1, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", 1, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim4", 1, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"dive", {"A3\Sounds_F\characters\movements\diver-swim-1", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A3\Sounds_F\characters\movements\diver-swim-2", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A3\Sounds_F\characters\movements\diver-swim-3", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A3\Sounds_F\characters\movements\diver-swim-4", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A3\Sounds_F\characters\movements\diver-swim-5", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A3\Sounds_F\characters\movements\diver-swim-6", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive_dry", {"A3\Sounds_F\characters\movements\diver-dry-swim-1", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive_dry", {"A3\Sounds_F\characters\movements\diver-dry-swim-2", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive_dry", {"A3\Sounds_F\characters\movements\diver-dry-swim-3", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive_dry", {"A3\Sounds_F\characters\movements\diver-dry-swim-4", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive_dry", {"A3\Sounds_F\characters\movements\diver-dry-swim-5", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive_dry", {"A3\Sounds_F\characters\movements\diver-dry-swim-6", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			gravel[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_01", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_02", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_03", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_04", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_05", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_06", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_07", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_08", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_01", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_02", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_03", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_04", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_05", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_06", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_07", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_08", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_01", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_02", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_03", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_04", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_05", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_06", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_07", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_08", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_01", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_02", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_03", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_04", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_05", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_06", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_07", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_08", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive",  {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			a2sfa3_cup_fix_gravel[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_01", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_02", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_03", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_04", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_05", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_06", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_07", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_08", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_01", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_02", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_03", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_04", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_05", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_06", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_07", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_08", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_01", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_02", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_03", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_04", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_05", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_06", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_07", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_08", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_01", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_02", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_03", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_04", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_05", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_06", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_07", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_08", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive",  {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			tiling[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\walk_01", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\walk_02", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\walk_03", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\walk_04", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\walk_05", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\walk_06", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\walk_07", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\walk_08", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\run_01", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\run_02", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\run_03", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\run_04", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\run_05", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\run_06", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\run_07", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\run_08", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\walk_01", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\walk_02", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\walk_03", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\walk_04", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\walk_05", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\walk_06", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\walk_07", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\walk_08", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\sprint_01", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\sprint_02", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\sprint_03", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\sprint_04", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\sprint_05", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\sprint_06", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\sprint_07", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tiles\sprint_08", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl1", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl2", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl3", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl4", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\normal\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\normal\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\normal\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\normal\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\normal\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\normal\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\normal\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\normal\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\normal\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\normal\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\normal\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\normal\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			sand[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_01", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 1},
				{"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_02", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 1},
				{"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_03", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 1},
				{"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_04", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 1},
				{"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_05", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 1},
				{"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_06", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 1},
				{"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_07", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 1},
				{"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_08", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 1},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\sand\run_01", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE - 5}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\sand\run_02", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE - 5}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\sand\run_03", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE - 5}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\sand\run_04", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE - 5}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\sand\run_05", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE - 5}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\sand\run_06", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE - 5}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\sand\run_07", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE - 5}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\sand\run_08", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE - 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_01", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE - 4}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_02", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE - 4}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_03", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE - 4}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_04", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE - 4}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_05", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE - 4}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_06", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE - 4}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_07", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE - 4}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_08", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE - 4}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\sand\sprint_01", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE - 6}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\sand\sprint_02", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE - 6}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\sand\sprint_03", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE - 6}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\sand\sprint_04", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE - 6}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\sand\sprint_05", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE - 6}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\sand\sprint_06", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE - 6}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\sand\sprint_07", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE - 6}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\sand\sprint_08", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE - 6}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\sand\crawl1", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\sand\crawl2", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\sand\crawl3", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\sand\crawl4", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\sand\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE - 3}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\sand\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE - 3}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\sand\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE - 3}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\sand\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE - 3}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\sand\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE - 3}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\sand\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE - 3}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\sand\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE - 3}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\sand\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE - 3}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\sand\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE - 3}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\sand\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE - 3}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\sand\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE - 3}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\sand\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE - 3}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			drygrass[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\drygrass\walk_1", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\drygrass\walk_2", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\drygrass\walk_3", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\drygrass\walk_4", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\drygrass\walk_5", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\drygrass\walk_6", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\drygrass\walk_7", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\drygrass\walk_8", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\run_1", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\run_2", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\run_3", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\run_4", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\run_5", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\run_6", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\run_7", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\run_8", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\walk_1", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\walk_2", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\walk_3", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\walk_4", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\walk_5", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\walk_6", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\walk_7", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\walk_8", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\sprint_1", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\sprint_2", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\sprint_3", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\sprint_4", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\sprint_5", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\sprint_6", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\sprint_7", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\sprint_8", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			grass[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_1", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_2", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_3", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_4", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_5", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_6", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_7", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_8", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_1", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_2", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_3", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_4", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_5", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_6", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_7", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_8", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_1", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_2", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_3", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_4", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_5", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_6", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_7", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_8", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_1", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_2", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_3", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_4", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_5", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_6", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_7", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_8", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\field\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\field\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\field\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\field\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\field\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\field\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\field\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\field\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			debris[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_01", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_02", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_03", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_04", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_05", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_06", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_07", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_08", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 3},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_01", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_02", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_03", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_04", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_05", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_06", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_07", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_08", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_01", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_02", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_03", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_04", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_05", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_06", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_07", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_08", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_01", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_02", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_03", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_04", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_05", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_06", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_07", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_08", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\crawl1", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\crawl2", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\crawl3", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\crawl4", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			wood[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\wood\walk_1", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\wood\walk_2", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\wood\walk_3", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\wood\walk_4", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\wood\walk_5", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\wood\walk_6", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\wood\walk_7", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\wood\walk_8", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\wood\run_1", FOOTSTEPS_VOLUME, 0.7, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\wood\run_2", FOOTSTEPS_VOLUME, 0.7, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\wood\run_3", FOOTSTEPS_VOLUME, 0.7, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\wood\run_4", FOOTSTEPS_VOLUME, 0.7, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\wood\run_5", FOOTSTEPS_VOLUME, 0.7, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\wood\run_6", FOOTSTEPS_VOLUME, 0.7, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\wood\run_7", FOOTSTEPS_VOLUME, 0.7, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\wood\run_8", FOOTSTEPS_VOLUME, 0.7, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\wood\walk_1", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\wood\walk_2", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\wood\walk_3", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\wood\walk_4", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\wood\walk_5", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\wood\walk_6", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\wood\walk_7", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\wood\walk_8", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\wood\sprint_1", FOOTSTEPS_VOLUME, 0.7, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\wood\sprint_2", FOOTSTEPS_VOLUME, 0.7, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\wood\sprint_3", FOOTSTEPS_VOLUME, 0.7, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\wood\sprint_4", FOOTSTEPS_VOLUME, 0.7, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\wood\sprint_5", FOOTSTEPS_VOLUME, 0.7, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\wood\sprint_6", FOOTSTEPS_VOLUME, 0.7, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\wood\sprint_7", FOOTSTEPS_VOLUME, 0.7, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\wood\sprint_8", FOOTSTEPS_VOLUME, 0.7, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\wood\crawl1", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\wood\crawl2", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\wood\crawl3", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\wood\crawl4", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\wood\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\wood\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\wood\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\wood\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\wood\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\wood\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\wood\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\wood\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\wood\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\wood\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\wood\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\wood\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			int_wood[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\wood_int\walk_1", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\wood_int\walk_2", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\wood_int\walk_3", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\wood_int\walk_4", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\wood_int\walk_5", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\wood_int\walk_6", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\wood_int\walk_7", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\wood_int\walk_8", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\run_1", FOOTSTEPS_VOLUME, 0.7, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\run_2", FOOTSTEPS_VOLUME, 0.7, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\run_3", FOOTSTEPS_VOLUME, 0.7, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\run_4", FOOTSTEPS_VOLUME, 0.7, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\run_5", FOOTSTEPS_VOLUME, 0.7, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\run_6", FOOTSTEPS_VOLUME, 0.7, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\run_7", FOOTSTEPS_VOLUME, 0.7, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\run_8", FOOTSTEPS_VOLUME, 0.7, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\walk_1", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\walk_2", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\walk_3", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\walk_4", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\walk_5", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\walk_6", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\walk_7", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\walk_8", FOOTSTEPS_VOLUME, 0.7, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\sprint_1", FOOTSTEPS_VOLUME, 0.7, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\sprint_2", FOOTSTEPS_VOLUME, 0.7, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\sprint_3", FOOTSTEPS_VOLUME, 0.7, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\sprint_4", FOOTSTEPS_VOLUME, 0.7, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\sprint_5", FOOTSTEPS_VOLUME, 0.7, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\sprint_6", FOOTSTEPS_VOLUME, 0.7, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\sprint_7", FOOTSTEPS_VOLUME, 0.7, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\sprint_8", FOOTSTEPS_VOLUME, 0.7, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\crawl1", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\crawl2", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\crawl3", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\crawl4", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\wood_int\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			int_concrete[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_01_int", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_02_int", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_03_int", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_04_int", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_05_int", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_06_int", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_07_int", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_08_int", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\run_01_int", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\run_02_int", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\run_03_int", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\run_04_int", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\run_05_int", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\run_06_int", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\run_07_int", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\run_08_int", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_01_int", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_02_int", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_03_int", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_04_int", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_05_int", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_06_int", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_07_int", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_08_int", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\sprint_01_int", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\sprint_02_int", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\sprint_03_int", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\sprint_04_int", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\sprint_05_int", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\sprint_06_int", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\sprint_07_int", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\sprint_08_int", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			concrete[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_01", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_02", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_03", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_04", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_05", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_06", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_07", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_08", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\run_01", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\run_02", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\run_03", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\run_04", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\run_05", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\run_06", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\run_07", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\run_08", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_01", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_02", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_03", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_04", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_05", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_06", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_07", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_08", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\sprint_01", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\sprint_02", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\sprint_03", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\sprint_04", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\sprint_05", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\sprint_06", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\sprint_07", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\sprint_08", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			metal[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_1", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_2", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_3", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_4", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_5", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_6", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_7", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_8", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_1", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_2", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_3", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_4", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_5", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_6", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_7", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_8", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_1", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_2", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_3", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_4", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_5", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_6", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_7", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_8", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_1", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_2", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_3", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_4", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_5", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_6", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_7", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_8", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal\crawl1", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal\crawl2", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal\crawl3", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal\crawl4", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			wavymetal[]=
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_1", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_2", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_3", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_4", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_5", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_6", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_7", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_8", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_1", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_2", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_3", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_4", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_5", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_6", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_7", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_8", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_1", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_2", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_3", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_4", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_5", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_6", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_7", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_8", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_1", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_2", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_3", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_4", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_5", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_6", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_7", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_8", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal\crawl1", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal\crawl2", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal\crawl3", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal\crawl4", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			metal_int[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\metal_int\walk_01", FOOTSTEPS_VOLUME, 0.85, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal_int\walk_02", FOOTSTEPS_VOLUME, 0.85, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal_int\walk_03", FOOTSTEPS_VOLUME, 0.85, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal_int\walk_04", FOOTSTEPS_VOLUME, 0.85, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal_int\walk_05", FOOTSTEPS_VOLUME, 0.85, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal_int\walk_06", FOOTSTEPS_VOLUME, 0.85, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal_int\walk_07", FOOTSTEPS_VOLUME, 0.85, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal_int\walk_08", FOOTSTEPS_VOLUME, 0.85, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\run_01", FOOTSTEPS_VOLUME, 0.85, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\run_02", FOOTSTEPS_VOLUME, 0.85, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\run_03", FOOTSTEPS_VOLUME, 0.85, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\run_04", FOOTSTEPS_VOLUME, 0.85, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\run_05", FOOTSTEPS_VOLUME, 0.85, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\run_06", FOOTSTEPS_VOLUME, 0.85, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\run_07", FOOTSTEPS_VOLUME, 0.85, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\run_08", FOOTSTEPS_VOLUME, 0.85, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\walk_01", FOOTSTEPS_VOLUME, 0.85, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\walk_02", FOOTSTEPS_VOLUME, 0.85, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\walk_03", FOOTSTEPS_VOLUME, 0.85, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\walk_04", FOOTSTEPS_VOLUME, 0.85, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\walk_05", FOOTSTEPS_VOLUME, 0.85, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\walk_06", FOOTSTEPS_VOLUME, 0.85, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\walk_07", FOOTSTEPS_VOLUME, 0.85, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\walk_08", FOOTSTEPS_VOLUME, 0.85, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\sprint_01", FOOTSTEPS_VOLUME, 0.85, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\sprint_02", FOOTSTEPS_VOLUME, 0.85, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\sprint_03", FOOTSTEPS_VOLUME, 0.85, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\sprint_04", FOOTSTEPS_VOLUME, 0.85, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\sprint_05", FOOTSTEPS_VOLUME, 0.85, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\sprint_06", FOOTSTEPS_VOLUME, 0.85, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\sprint_07", FOOTSTEPS_VOLUME, 0.85, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\sprint_08", FOOTSTEPS_VOLUME, 0.85, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\crawl1", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\crawl2", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\crawl3", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\crawl4", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal_int\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			int_tiles[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\city\walk_01", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\city\walk_02", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\city\walk_03", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\city\walk_04", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\city\walk_05", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\city\walk_06", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\city\walk_07", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\city\walk_08", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\city\run_01", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\city\run_02", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\city\run_03", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\city\run_04", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\city\run_05", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\city\run_06", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\city\run_07", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\city\run_08", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\city\walk_01", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\city\walk_02", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\city\walk_03", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\city\walk_04", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\city\walk_05", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\city\walk_06", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\city\walk_07", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\city\walk_08", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\city\sprint_01", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\city\sprint_02", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\city\sprint_03", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\city\sprint_04", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\city\sprint_05", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\city\sprint_06", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\city\sprint_07", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\city\sprint_08", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\city\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\city\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\city\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\city\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\city\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\city\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\city\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\city\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\city\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\city\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\city\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\city\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\city\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\city\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\city\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\city\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive",  {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			dirt[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_01", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_02", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_03", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_04", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_05", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_06", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_07", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_08", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\run_01", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\run_02", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\run_03", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\run_04", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\run_05", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\run_06", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\run_07", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\run_08", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_01", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_02", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_03", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_04", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_05", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_06", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_07", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_08", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\sprint_01", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\sprint_02", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\sprint_03", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\sprint_04", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\sprint_05", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\sprint_06", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\sprint_07", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\sprint_08", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive",  {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};

			roof_tin[] = //no such [] in a3\sounds_f\config (!!!)
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\walk_01", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\walk_02", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\walk_03", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\walk_04", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\walk_05", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\walk_06", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\walk_07", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\walk_08", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\run_01", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\run_02", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\run_03", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\run_04", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\run_05", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\run_06", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\run_07", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\run_08", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\walk_01", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\walk_02", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\walk_03", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\walk_04", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\walk_05", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\walk_06", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\walk_07", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\walk_08", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\sprint_01", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\sprint_02", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\sprint_03", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\sprint_04", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\sprint_05", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\sprint_06", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\sprint_07", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\roof_tin\sprint_08", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl1", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl2", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl3", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\normal\crawl4", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\normal\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\normal\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\normal\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\normal\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\normal\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\normal\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\normal\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\normal\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\normal\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\normal\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\normal\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\normal\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};
			/*********************************************END OF VANILLA A3 CONFIG***************************************************/
			/**********APEX EXPANSION STARTS HERE**********/
			asphalt_exp[]=
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_1", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_2", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_3", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_4", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_5", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_6", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_7", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_8", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\run_1", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\run_2", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\run_3", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\run_4", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\run_5", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\run_6", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\run_7", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\run_8", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_1", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_2", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_3", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_4", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_5", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_6", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_7", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\walk_8", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\sprint_1", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\sprint_2", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\sprint_3", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\sprint_4", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\sprint_5", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\sprint_6", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\sprint_7", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\sprint_8", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\tarmac\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};
			
			concrete_exp[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_01", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_02", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_03", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_04", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_05", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_06", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_07", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_08", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\run_01", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\run_02", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\run_03", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\run_04", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\run_05", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\run_06", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\run_07", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\run_08", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_01", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_02", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_03", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_04", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_05", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_06", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_07", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\walk_08", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\sprint_01", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\sprint_02", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\sprint_03", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\sprint_04", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\sprint_05", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\sprint_06", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\sprint_07", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\sprint_08", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\concrete\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};
			
			dirt_exp[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_01", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_02", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_03", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_04", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_05", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_06", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_07", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_08", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\run_01", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\run_02", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\run_03", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\run_04", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\run_05", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\run_06", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\run_07", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\run_08", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_01", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_02", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_03", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_04", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_05", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_06", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_07", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\walk_08", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\sprint_01", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\sprint_02", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\sprint_03", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\sprint_04", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\sprint_05", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\sprint_06", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\sprint_07", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\sprint_08", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\dirt\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive",  {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};
			
			grass_exp[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_1", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_2", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_3", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_4", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_5", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_6", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_7", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_8", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_1", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_2", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_3", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_4", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_5", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_6", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_7", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_8", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_1", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_2", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_3", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_4", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_5", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_6", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_7", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_8", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_1", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_2", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_3", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_4", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_5", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_6", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_7", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_8", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\field\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\field\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\field\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\field\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\field\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\field\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\field\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\field\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};
			
			grasstall_exp[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_1", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_2", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_3", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_4", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_5", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_6", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_7", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_8", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_1", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_2", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_3", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_4", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_5", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_6", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_7", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_run_8", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_1", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_2", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_3", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_4", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_5", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_6", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_7", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_walk_8", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_1", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_2", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_3", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_4", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_5", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_6", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_7", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\field\Grass_sprint_8", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\field\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\field\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\field\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\field\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\field\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\drygrass\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\field\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\field\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\field\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\field\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};
			
			gravel_exp[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_01", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_02", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_03", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_04", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_05", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_06", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_07", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_08", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 3},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_01", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_02", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_03", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_04", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_05", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_06", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_07", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\run_08", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_01", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_02", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_03", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_04", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_05", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_06", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_07", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\walk_08", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_01", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_02", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_03", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_04", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_05", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_06", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_07", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\sprint_08", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\gravel\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive",  {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, DIVE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};
			
			gridmetal_exp[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_1", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_2", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_3", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_4", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_5", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_6", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_7", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_8", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_1", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_2", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_3", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_4", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_5", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_6", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_7", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_8", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_1", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_2", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_3", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_4", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_5", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_6", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_7", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_8", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_1", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_2", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_3", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_4", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_5", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_6", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_7", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_8", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal\crawl1", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal\crawl2", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal\crawl3", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal\crawl4", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};
			
			int_concrete_exp[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_01_int", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_02_int", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_03_int", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_04_int", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_05_int", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_06_int", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_07_int", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_08_int", MY_FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\run_01_int", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\run_02_int", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\run_03_int", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\run_04_int", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\run_05_int", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\run_06_int", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\run_07_int", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\run_08_int", MY_FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_01_int", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_02_int", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_03_int", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_04_int", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_05_int", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_06_int", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_07_int", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\walk_08_int", MY_FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\sprint_01_int", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\sprint_02_int", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\sprint_03_int", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\sprint_04_int", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\sprint_05_int", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\sprint_06_int", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\sprint_07_int", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\sprint_08_int", MY_FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\crawl1", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\crawl2", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\crawl3", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\crawl4", MY_FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\concrete_int\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};
			
			sand_exp[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_01", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 1},
				{"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_02", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 1},
				{"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_03", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 1},
				{"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_04", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 1},
				{"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_05", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 1},
				{"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_06", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 1},
				{"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_07", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 1},
				{"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_08", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 1},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\sand\run_01", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE - 5}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\sand\run_02", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE - 5}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\sand\run_03", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE - 5}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\sand\run_04", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE - 5}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\sand\run_05", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE - 5}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\sand\run_06", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE - 5}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\sand\run_07", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE - 5}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\sand\run_08", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE - 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_01", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE - 4}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_02", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE - 4}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_03", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE - 4}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_04", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE - 4}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_05", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE - 4}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_06", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE - 4}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_07", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE - 4}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\sand\walk_08", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE - 4}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\sand\sprint_01", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE - 6}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\sand\sprint_02", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE - 6}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\sand\sprint_03", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE - 6}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\sand\sprint_04", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE - 6}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\sand\sprint_05", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE - 6}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\sand\sprint_06", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE - 6}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\sand\sprint_07", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE - 6}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\sand\sprint_08", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE - 6}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\sand\crawl1", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\sand\crawl2", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\sand\crawl3", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\sand\crawl4", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\sand\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE - 3}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\sand\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE - 3}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\sand\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE - 3}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\sand\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE - 3}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\sand\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE - 3}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\sand\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE - 3}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\sand\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE - 3}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\sand\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE - 3}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\sand\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE - 3}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\sand\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE - 3}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\sand\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE - 3}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\sand\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE - 3}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};
			
			water_exp[] =
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_1", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_2", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_3", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_4", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_5", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_6", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_7", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_8", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_run_1", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_run_2", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_run_3", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_run_4", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_run_5", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_run_6", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_run_7", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_run_8", FOOTSTEPS_VOLUME, 1, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_1", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 6}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_2", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 6}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_3", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 6}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_4", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 6}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_5", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 6}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_6", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 6}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_7", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 6}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_walk_8", FOOTSTEPS_VOLUME, 1, WALK_AUDIBLE_DISTANCE + 6}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_sprint_1", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_sprint_2", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_sprint_3", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_sprint_4", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_sprint_5", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_sprint_6", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_sprint_7", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\water\water_sprint_8", FOOTSTEPS_VOLUME, 1, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\water\crawl1", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 3}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\water\crawl2", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 3}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\water\crawl3", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 3}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\water\crawl4", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 3}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\water\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE + 5}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\water\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE + 5}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\water\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE + 5}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\water\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE + 5}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\water\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE + 5}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\water\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE + 5}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\water\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE + 5}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\water\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE + 5}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\water\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\water\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\water\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\water\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", 1, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", 1, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", 1, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim4", 1, 1, SPRINT_AUDIBLE_DISTANCE}},
				{"dive", {"A3\Sounds_F\characters\movements\diver-swim-1", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A3\Sounds_F\characters\movements\diver-swim-2", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A3\Sounds_F\characters\movements\diver-swim-3", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A3\Sounds_F\characters\movements\diver-swim-4", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A3\Sounds_F\characters\movements\diver-swim-5", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive", {"A3\Sounds_F\characters\movements\diver-swim-6", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive_dry", {"A3\Sounds_F\characters\movements\diver-dry-swim-1", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive_dry", {"A3\Sounds_F\characters\movements\diver-dry-swim-2", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive_dry", {"A3\Sounds_F\characters\movements\diver-dry-swim-3", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive_dry", {"A3\Sounds_F\characters\movements\diver-dry-swim-4", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive_dry", {"A3\Sounds_F\characters\movements\diver-dry-swim-5", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"dive_dry", {"A3\Sounds_F\characters\movements\diver-dry-swim-6", 1, 1, DIVE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};
			
			wavymetal_exp[]=
			{
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_1", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_2", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_3", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_4", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_5", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_6", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_7", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_8", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 4},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_1", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_2", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_3", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_4", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_5", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_6", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_7", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"run", {"A2SFA3\a2sfa3_sounds\footsteps\metal\run_8", FOOTSTEPS_VOLUME, 0.9, RUN_AUDIBLE_DISTANCE + 7}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_1", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_2", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_3", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_4", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_5", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_6", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_7", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"walk", {"A2SFA3\a2sfa3_sounds\footsteps\metal\walk_8", FOOTSTEPS_VOLUME, 0.9, WALK_AUDIBLE_DISTANCE + 5}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_1", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_2", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_3", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_4", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_5", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_6", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_7", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\footsteps\metal\sprint_8", FOOTSTEPS_VOLUME, 0.9, SPRINT_AUDIBLE_DISTANCE + 8}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal\crawl1", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal\crawl2", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal\crawl3", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"crawl", {"A2SFA3\a2sfa3_sounds\footsteps\metal\crawl4", FOOTSTEPS_VOLUME, 1, CRAWL_AUDIBLE_DISTANCE + 2}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal\up1", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal\up2", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal\up3", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"standup", {"A2SFA3\a2sfa3_sounds\footsteps\metal\up4", MOVEMENT_VOLUME, 1, STANDUP_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal\down1", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal\down2", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal\down3", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"laydown", {"A2SFA3\a2sfa3_sounds\footsteps\metal\down4", MOVEMENT_VOLUME, 1, LAYDOWN_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal\fall_to_ground1", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal\fall_to_ground2", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal\fall_to_ground3", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"bodyfall", {"A2SFA3\a2sfa3_sounds\footsteps\metal\fall_to_ground4", MOVEMENT_VOLUME, 1, BODYFALL_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim1", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim2", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"swim", {"A2SFA3\a2sfa3_sounds\footsteps\addict\swim3", MOVEMENT_VOLUME, 1, SWIM_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding1", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding2", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"slide", {"A2SFA3\a2sfa3_sounds\footsteps\addict\sliding3", MOVEMENT_VOLUME, 1, SLIDE_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_01", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_02", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_03", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_04", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_05", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}},
				{"ladder", {"A2SFA3\a2sfa3_sounds\footsteps\addict\ladder_06", MOVEMENT_VOLUME, 1, LADDER_AUDIBLE_DISTANCE}}
			};
			
			//rock[] = {};			normal[] = {};			tarmac[] = {};			stony[] = {};			water[] = {};			gravel[] = {};			roof_tiles[] = {};			sand[] = {};			drygrass[] = {};			grass[] = {};			debris[] = {};			wood[] = {};			wood_int[] = {};			concrete_int[] = {};			concrete[] = {};			metal[] = {};			metal_int[] = {};			tiles_int[] = {};			dirt[] = {};			roof_tin[] = {};

		}; // SoundEnvironExt

	}; // CAManBase
}; // CfgVehicles
