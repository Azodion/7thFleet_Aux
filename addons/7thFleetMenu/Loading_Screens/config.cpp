////////////////////////////////////////////////////////////////////
//DeRap: Loading Screens\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Sun Dec 15 14:36:04 2024 : 'file' last modified on Sat Jul 06 16:20:05 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 7thFleet_Loading_Screens
	{
		author = "Frenchie";
		requiredVersion = 1;
		requiredAddons[] = {"1MR_Uniforms"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class SL_Monitor
		{
			list[] = {"7thFleet_Loading_Screens"};
		};
	};
};
class RscText;
class RscPicture;
class RscBackgroundLogo;
class RscPictureKeepAspect;
class RscDisplayLoading
{
	class Variants
	{
		class Loading
		{
			idd = 102;
			style = 48;
			class controls
			{
				class LoadingPic1: RscPictureKeepAspect
				{
					x = "SafeZoneX";
					y = "SafeZoneY";
					h = "SafeZoneH";
					w = "SafeZoneW";
					text = "7thFleetMenu\Loading_Screens\screens\7thFleetLoadingScreen1_co.paa";
				};
			};
		};
		class LoadingPic2: Loading
		{
			class controls: controls
			{
				class LoadingPic1: LoadingPic1
				{
					text = "7thFleetMenu\Loading_Screens\screens\7thFleetLoadingScreen2_co.paa";
				};
			};
		};
		class LoadingPic3: Loading
		{
			class controls: controls
			{
				class LoadingPic1: LoadingPic1
				{
					text = "7thFleetMenu\Loading_Screens\screens\7thFleetLoadingScreen3_co.paa";
				};
			};
		};
		class LoadingPic4: Loading
		{
			class controls: controls
			{
				class LoadingPic3: LoadingPic1
				{
					text = "7thFleetMenu\Loading_Screens\screens\7thFleetLoadingScreen4_co.paa";
				};
			};
		};
		class LoadingPic5: Loading
		{
			class controls: controls
			{
				class LoadingPic4: LoadingPic1
				{
					text = "7thFleetMenu\Loading_Screens\screens\7thFleetLoadingScreen5_co.paa";
				};
			};
		};
		class LoadingPic6: Loading
		{
			class controls: controls
			{
				class LoadingPic5: LoadingPic1
				{
					text = "7thFleetMenu\Loading_Screens\screens\7thFleetLoadingScreen6_co.paa";
				};
			};
		};
		class LoadingPic7: Loading
		{
			class controls: controls
			{
				class LoadingPic5: LoadingPic1
				{
					text = "7thFleetMenu\Loading_Screens\screens\7thFleetLoadingScreen7_co.paa";
				};
			};
		};
		class LoadingPic8: Loading
		{
			class controls: controls
			{
				class LoadingPic5: LoadingPic1
				{
					text = "7thFleetMenu\Loading_Screens\screens\7thFleetLoadingScreen8_co.paa";
				};
			};
		};
		class LoadingPic9: Loading
		{
			class controls: controls
			{
				class LoadingPic5: LoadingPic1
				{
					text = "7thFleetMenu\Loading_Screens\screens\7thFleetLoadingScreen9_co.paa";
				};
			};
		};
	};
};
class RscStandardDisplay;
class RscDisplayLoadMission: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPic: RscPictureKeepAspect
		{
			idd = 122;
			x = "SafeZoneX";
			y = "SafeZoneY";
			h = "SafeZoneH";
			w = "SafeZoneW";
			text = "7thFleetMenu\Loading_Screens\screens\7thFleetLoadingScreen5_co.paa";
		};
	};
};
class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		class LoadingPic: RscPictureKeepAspect
		{
			idd = 102;
			x = "SafeZoneX";
			y = "SafeZoneY";
			h = "SafeZoneH";
			w = "SafeZoneW";
			text = "7thFleetMenu\Loading_Screens\screens\7thFleetLoadingScreen0_co.paa";
		};
	};
};
class RscDisplayMPPlayers;
class RscDisplayClientWait: RscDisplayMPPlayers
{
	class LoadingPic: RscPictureKeepAspect
	{
		idd = 102;
		x = "SafeZoneX";
		y = "SafeZoneY";
		h = "SafeZoneH";
		w = "SafeZoneW";
		text = "7thFleetMenu\Loading_Screens\screens\7thFleetLoadingScreen6_co.paa";
	};
};
class RscDisplayClient: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPic: RscPictureKeepAspect
		{
			idd = 102;
			x = "SafeZoneX";
			y = "SafeZoneY";
			h = "SafeZoneH";
			w = "SafeZoneW";
			text = "7thFleetMenu\Loading_Screens\screens\7thFleetLoadingScreen7_co.paa";
		};
	};
};
class RscActiveText{};
class RscActivePicture: RscActiveText{};
class RscDisplayMain: RscStandardDisplay
{
	class Controls
	{
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		class Logo: RscActivePicture
		{
			text = "7thFleetMenu\Loading_Screens\screens\7thFleet_arma3logo_co.paa";
		};
	};
	enableDisplay = 0;
	delete Spotlight;
	class RscActiveText;
	class RscActivePicture: RscActiveText
	{
		style = 48;
		color[] = {1,1,1,0.5};
		colorActive[] = {1,1,1,1};
	};
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc = 1;
			x = "SafeZoneX";
			y = "SafeZoneY";
			h = "SafeZoneH";
			w = "SafeZoneW";
			text = "7thFleetMenu\Loading_Screens\screens\7thFleetLoadingScreen0_co.paa";
		};
	};
};
class cfgMods
{
	author = "Frenchie";
	timepacked = "1720282805";
};
