class CfgPatches
{
	class 7thFleetWeaponAttachments
	{
		author="Hophri";
		requiredAddons[]={};
		units[]={};
		weapons[]={"7th_Pointer_Attachment"};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
	};
};

class ItemCore;
class InventoryItem_Base_F;
class InventoryFlashLightItem_Base_F;
class SlotInfo;
class asdg_SlotInfo;

class PointerSlot: SlotInfo
{
	compatibleItems[] +=
	{
		"7th_Pointer_Attachment",
		"7th_Pointer_IRL",
        "7th_Pointer_IRF",
        "7th_Pointer_VF"
	};
};

class PointerSlot_Rail: PointerSlot 
{
    class compatibleItems 
	{
        7th_Pointer_Attachment = 1;
		7th_Pointer_IRL = 1;
        7th_Pointer_IRF = 1;
        7th_Pointer_VF = 1;
    };
};

class asdg_FrontSideRail: asdg_SlotInfo {
    class compatibleItems {
        7th_Pointer_Attachment = 1;
		7th_Pointer_IRL = 1;
        7th_Pointer_IRF = 1;
        7th_Pointer_VF = 1;
    };
};

class CfgWeapons
{
    class 7th_Pointer_VF: ItemCore
	{
		_generalMacro="7th_Pointer_Attachment";
		inertia=0.1;
		author = "Hophri";
		descriptionShort = "Emits a Laser and Flashlight seen in both VIS and IR.";
		displayName = "[7th Fleet] UC/PEQ-32 (Visible Flashlight)";
        scope = 2;
        scopeArsenal = 1;
		MRT_switchItemHintText = "Visible Flashlight";
		MRT_SwitchItemNextClass = "7th_Pointer_IRF";
		MRT_SwitchItemPrevClass = "7th_Pointer_IRL";
		picture="\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model = "\7thFleetWeapons\Attachments\LaserDevice\UCPEQ32.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			allowedSlots[] = {801,701,901};
			type = 301;
			mass=6;
			class FlashLight
			{
				ambient[] = {1,1,1};
				color[] = {1,1,1};
				coneFadeCoef = 6;
				direction = "laser dir";
				flareMaxDistance = 200;
				flareSize = 1.4;
				innerAngle = 10;
				intensity = 100;
				irLight = 0;
				outerAngle = 12;
				position = "laser pos";
				scale[] = {0.25,0.25,1};
				size = 1;
				useFlare = 1;
				volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
				class Attenuation
				{
					constant = 1;
					hardLimitEnd = 250;
					hardLimitStart = 220;
					linear = 0;
					quadratic = 0.008;
					start = 1;
				};
			};
		};
	};
	class 7th_Pointer_IRF: ItemCore
	{
		_generalMacro="7th_Pointer_Attachment";
		inertia=0.1;
		author = "Hophri";
		descriptionShort = "Emits a Laser and Flashlight seen in both VIS and IR.";
		displayName = "[7th Fleet] UC/PEQ-32 (IR Flashlight)";
        scope = 2;
        scopeArsenal = 1;
		MRT_switchItemHintText = "IR Flashlight";
		MRT_SwitchItemNextClass = "7th_Pointer_Attachment";
		MRT_SwitchItemPrevClass = "7th_Pointer_VF";
		picture="\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model = "\7thFleetWeapons\Attachments\LaserDevice\UCPEQ32.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			allowedSlots[] = {801,701,901};
			type = 301;
			mass=6;
			class FlashLight
			{
				ambient[] = {1,1,1};
				color[] = {1,1,1};
				coneFadeCoef = 6;
				direction = "laser dir";
				flareMaxDistance = 200;
				flareSize = 1.4;
				innerAngle = 10;
				intensity = 100;
				irLight = 1;
				outerAngle = 12;
				position = "laser pos";
				scale[] = {0.25,0.25,1};
				size = 1;
				useFlare = 1;
				volumeShape = "a3\data_f\VolumeLightFlashlight.p3d";
				class Attenuation
				{
					constant = 1;
					hardLimitEnd = 250;
					hardLimitStart = 220;
					linear = 0;
					quadratic = 0.008;
					start = 1;
				};
			};
		};
	};
	class 7th_Pointer_IRL: ItemCore
	{
		_generalMacro="7th_Pointer_Attachment";
		inertia=0.1;
		author = "Hophri";
		descriptionShort = "Emits a Laser and Flashlight seen in both VIS and IR.";
		displayName = "[7th Fleet] UC/PEQ-32 (IR Laser)";
        scope = 2;
		scopeArsenal = 1;
		MRT_switchItemHintText = "IR Laser";
		MRT_SwitchItemNextClass = "7th_Pointer_VF";
		MRT_SwitchItemPrevClass = "7th_Pointer_Attachment";
		picture="\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model = "\7thFleetWeapons\Attachments\LaserDevice\UCPEQ32.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			allowedSlots[] = {801,701,901};
			type = 301;
			mass=6;
			class Pointer
			{
				irLaserPos="laser pos";
				irLaserEnd="laser dir";
				beamMaxLength = 50;
				beamThickness = 0;
				irDistance=5;
				irDotSize = 0.025;
				isIR = 1;
				dotColor[] = {16384,0,0};
				beamColor[] = {0,0,0};
			};
		};
	};
	class 7th_Pointer_Attachment: ItemCore
	{
		scope = 2;
		scopeArsenal = 2;
		_generalMacro="7th_Pointer_Attachment";
		inertia=0.1;
		author = "Hophri";
		descriptionShort = "Emits a Laser and Flashlight seen in both VIS and IR.";
		displayName = "[7th Fleet] UC/PEQ-32";
		picture="\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model = "\7thFleetWeapons\Attachments\LaserDevice\UCPEQ32.p3d";
		MRT_switchItemHintText = "Visible Laser";
		MRT_SwitchItemNextClass = "7th_Pointer_IRL";
		MRT_SwitchItemPrevClass = "7th_Pointer_IRF";
		class ItemInfo: InventoryFlashLightItem_Base_F
			{
				allowedSlots[] = {801,701,901};
				type = 301;
				mass=6;
				class Pointer
				{
					irLaserPos="laser pos";
					irLaserEnd="laser dir";
					beamMaxLength = 50;
					beamThickness = 0;
					irDistance=5;
					irDotSize = 0.025;
					isIR = 0;
					dotColor[] = {16384,0,0};
					beamColor[] = {0,0,0};
				};
			};
	};
};