#define GEAR_VOLUME 2.50
#define SUIT_VOLUME 5.30

class CfgPatches
{
	class a2sfa3_gear
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
                       list[]={"a2sfa3_gear"};
               };
       };
};

class CfgVehicles
{
	class Man;

	class CAManBase : Man
	{

		class SoundGear
		{
			primary[] =
			{
				{"walk", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-walk-01.wss", GEAR_VOLUME - 0.05, 1, 21}},
				{"walk", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-walk-02.wss", GEAR_VOLUME - 0.05, 1, 21}},
				{"walk", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-walk-03.wss", GEAR_VOLUME - 0.05, 1, 21}},
				{"walk", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-walk-04.wss", GEAR_VOLUME - 0.05, 1, 21}},
				{"walk", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-walk-05.wss", GEAR_VOLUME - 0.05, 1, 21}},
				{"walk", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-walk-06.wss", GEAR_VOLUME - 0.05, 1, 21}},
				{"walk", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-walk-07.wss", GEAR_VOLUME - 0.05, 1, 21}},
				{"run", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-run-01.wss", GEAR_VOLUME, 1, 25}},
				{"run", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-run-02.wss", GEAR_VOLUME, 1, 25}},
				{"run", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-run-03.wss", GEAR_VOLUME, 1, 25}},
				{"run", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-run-04.wss", GEAR_VOLUME, 1, 25}},
				{"run", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-run-05.wss", GEAR_VOLUME, 1, 25}},
				{"run", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-run-06.wss", GEAR_VOLUME, 1, 25}},
				{"run", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-run-07.wss", GEAR_VOLUME, 1, 25}},
				{"run", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-run-08.wss", GEAR_VOLUME, 1, 25}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-sprint-01.wss", GEAR_VOLUME, 1, 28}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-sprint-02.wss", GEAR_VOLUME, 1, 28}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-sprint-03.wss", GEAR_VOLUME, 1, 28}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-sprint-04.wss", GEAR_VOLUME, 1, 28}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-sprint-05.wss", GEAR_VOLUME, 1, 28}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-sprint-06.wss", GEAR_VOLUME, 1, 28}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-sprint-07.wss", GEAR_VOLUME, 1, 28}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\gear\Gear-prim-sprint-08.wss", GEAR_VOLUME, 1, 28}}};

			secondary[] = {{"run", {"", 1.0, 1, 10}},{"run", {"", 1.0, 1, 10}},{"sprint", {"", 1.0, 1, 10}}};
		};

		class SoundEquipment
		{
			soldier[] =
			{
				{"walk", {"A2SFA3\a2sfa3_sounds\suit\Equipment-walk-01.wss", SUIT_VOLUME - 0.05, 1, 21}},
				{"walk", {"A2SFA3\a2sfa3_sounds\suit\Equipment-walk-02.wss", SUIT_VOLUME - 0.05, 1, 21}},
				{"walk", {"A2SFA3\a2sfa3_sounds\suit\Equipment-walk-03.wss", SUIT_VOLUME - 0.05, 1, 21}},
				{"walk", {"A2SFA3\a2sfa3_sounds\suit\Equipment-walk-04.wss", SUIT_VOLUME - 0.05, 1, 21}},
				{"walk", {"A2SFA3\a2sfa3_sounds\suit\Equipment-walk-05.wss", SUIT_VOLUME - 0.05, 1, 21}},
				{"walk", {"A2SFA3\a2sfa3_sounds\suit\Equipment-walk-06.wss", SUIT_VOLUME - 0.05, 1, 21}},
				{"walk", {"A2SFA3\a2sfa3_sounds\suit\Equipment-walk-07.wss", SUIT_VOLUME - 0.05, 1, 21}},
				{"walk", {"A2SFA3\a2sfa3_sounds\suit\Equipment-walk-08.wss", SUIT_VOLUME - 0.05, 1, 21}},
				{"run", {"A2SFA3\a2sfa3_sounds\suit\Equipment-run-01.wss", SUIT_VOLUME, 1, 25}},
				{"run", {"A2SFA3\a2sfa3_sounds\suit\Equipment-run-02.wss", SUIT_VOLUME, 1, 25}},
				{"run", {"A2SFA3\a2sfa3_sounds\suit\Equipment-run-03.wss", SUIT_VOLUME, 1, 25}},
				{"run", {"A2SFA3\a2sfa3_sounds\suit\Equipment-run-04.wss", SUIT_VOLUME, 1, 25}},
				{"run", {"A2SFA3\a2sfa3_sounds\suit\Equipment-run-05.wss", SUIT_VOLUME, 1, 25}},
				{"run", {"A2SFA3\a2sfa3_sounds\suit\Equipment-run-06.wss", SUIT_VOLUME, 1, 25}},
				{"run", {"A2SFA3\a2sfa3_sounds\suit\Equipment-run-07.wss", SUIT_VOLUME, 1, 25}},
				{"run", {"A2SFA3\a2sfa3_sounds\suit\Equipment-run-08.wss", SUIT_VOLUME, 1, 25}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\suit\Equipment-sprint-01.wss", SUIT_VOLUME, 1, 28}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\suit\Equipment-sprint-02.wss", SUIT_VOLUME, 1, 28}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\suit\Equipment-sprint-03.wss", SUIT_VOLUME, 1, 28}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\suit\Equipment-sprint-04.wss", SUIT_VOLUME, 1, 28}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\suit\Equipment-sprint-05.wss", SUIT_VOLUME, 1, 28}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\suit\Equipment-sprint-06.wss", SUIT_VOLUME, 1, 28}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\suit\Equipment-sprint-07.wss", SUIT_VOLUME, 1, 28}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\suit\Equipment-sprint-08.wss", SUIT_VOLUME, 1, 28}}
			};

			civilian[] =
			{
				{"walk", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-walk-01.wss", SUIT_VOLUME, 1, 10}},
				{"walk", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-walk-02.wss", SUIT_VOLUME, 1, 10}},
				{"walk", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-walk-03.wss", SUIT_VOLUME, 1, 10}},
				{"walk", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-walk-04.wss", SUIT_VOLUME, 1, 10}},
				{"walk", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-walk-05.wss", SUIT_VOLUME, 1, 10}},
				{"walk", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-walk-06.wss", SUIT_VOLUME, 1, 10}},
				{"walk", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-walk-07.wss", SUIT_VOLUME, 1, 10}},
				{"walk", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-walk-08.wss", SUIT_VOLUME, 1, 10}},
				{"run", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-run-01.wss", SUIT_VOLUME, 1, 12}},
				{"run", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-run-02.wss", SUIT_VOLUME, 1, 12}},
				{"run", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-run-03.wss", SUIT_VOLUME, 1, 12}},
				{"run", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-run-04.wss", SUIT_VOLUME, 1, 12}},
				{"run", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-run-05.wss", SUIT_VOLUME, 1, 12}},
				{"run", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-run-06.wss", SUIT_VOLUME, 1, 12}},
				{"run", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-run-07.wss", SUIT_VOLUME, 1, 12}},
				{"run", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-run-08.wss", SUIT_VOLUME, 1, 12}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-sprint-01.wss", SUIT_VOLUME, 1, 15}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-sprint-02.wss", SUIT_VOLUME, 1, 15}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-sprint-03.wss", SUIT_VOLUME, 1, 15}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-sprint-04.wss", SUIT_VOLUME, 1, 15}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-sprint-05.wss", SUIT_VOLUME, 1, 15}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-sprint-06.wss", SUIT_VOLUME, 1, 15}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-sprint-07.wss", SUIT_VOLUME, 1, 15}},
				{"sprint", {"A2SFA3\a2sfa3_sounds\suit\civil-equipment-sprint-08.wss", SUIT_VOLUME, 1, 15}}
			};
		};

	};
};
