class CfgPatches
{
	class 7EF_Modules
	{
		name="7EF_Modules";
		author="7EF_Aux";
		requiredVersion=0.1;
		requiredAddons[]={"zen_custom_modules"};
	};
};
class EventHandlers;
class Extended_PostInit_EventHandlers
{
	class 7EF_sqf_postInit
	{
		init="call compile preprocessFileLineNumbers '\7thFleetModules\7thEF_Modules.sqf'";
	};
};