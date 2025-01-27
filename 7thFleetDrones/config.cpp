////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sat Sep 09 16:52:22 2023 : 'file' last modified on Tue Oct 18 19:53:08 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 7thFleetDrones
	{
		units[] = {"7FD_UAV_01_F","7FD_UAV_06_F","7FD_UAV_06_medical_F","TKE_AlicePackUCNUAV","TKE_AlicePack7thAR2","TKE_AlicePack7thAR6","TKE_AlicePack7thMAR6"};
		vehicles[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F_Enoch"};
	};
};
class CfgFactionClasses
{
	class 7thFleet
	{
		displayName = "7th Fleet";
		author = "Frenchie";
		icon = "";
		priority = 2;
		side = 1;
	};
};
class CfgVehicles
{
    class I_E_UAV_01_backpack_F;
    class TKE_AlicePackUCNUAV: I_E_UAV_01_backpack_F
	{
		author = "Rogue771";
		scope = 1;
		scopecurator = 1;
		scopearsenal = 1;
		maximumLoad = 0;
        model = "\TKE_Kuiper_Engagements\TKE_MD\TKE_AlicePackUCN.p3d";
        hiddenSelectionsMaterials = "\TKE_Kuiper_Engagements\TKE_MD\data\TKE_AlicePackUCN.rvmat";
		mass = 40;
        class assembleInfo;
	};	
    class TKE_AlicePack7thAR2 : TKE_AlicePackUCNUAV 
    {
		author = "Frenchie";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] AR-2 Alice Pack";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_AlicePack7thAR2_co.paa"};
		picture =  "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		mass = 320;
		
		class assembleInfo : assembleInfo 
        {
			displayName = "AR-2 Darter";
			assembleTo = "7FD_UAV_01_F";
			base = "";
		};
	};
    class TKE_AlicePack7thAR6 : TKE_AlicePackUCNUAV 
    {
		author = "Frenchie";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] AR-6 Alice Pack";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_AlicePack7thAR6_co.paa"};
		picture =  "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		mass = 320;
		
		class assembleInfo : assembleInfo 
        {
			displayName = "AR-6 Pelican";
			assembleTo = "7FD_UAV_06_F";
			base = "";
		};
	};
     class TKE_AlicePack7thMAR6 : TKE_AlicePackUCNUAV 
    {
		author = "Frenchie";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[7th Fleet] AR-6 Alice Pack (Medical)";
		hiddenSelectionsTextures[] = {"\1MR_Uniforms\Textures\TKE_AlicePack7thMAR6_co.paa"};
		picture =  "\1MR_Uniforms\Textures\7thFleetpatch.paa";
		mass = 320;
		
		class assembleInfo : assembleInfo 
        {
			displayName = "AR-6 Pelican";
			assembleTo = "7FD_UAV_06_medical_F";
			base = "";
		};
	};
    class I_E_UAV_01_F;
    class 7FD_UAV_01_F: I_E_UAV_01_F
	{
		author = "Frenchie";
        displayName = "AR-2 Darter";
		scope = 2;
		scopeCurator = 2;
		side = 1;
        DLC = "7thFleetDrones"
		faction = "7thFleet";
		crew = "B_UAV_AI_F";
		typicalCargo[] = {"B_UAV_AI_F"};
		accuracy = 0.5;
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {"TKE_AlicePack7thAR2"};
		};
	};
    class I_E_UAV_06_F;
    class 7FD_UAV_06_F: I_E_UAV_06_F
	{
		author = "Frenchie";
		displayName = "AR-6 Pelican";
		scope = 2;
		side = 1;
        DLC = "7thFleetDrones"
		faction = "7thFleet";
		crew = "B_UAV_AI_F";
		typicalCargo[] = {"B_UAV_AI_F"};
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {"TKE_AlicePack7thAR6"};
		};
	};
    class I_E_UAV_06_medical_F;
	class 7FD_UAV_06_medical_F: I_E_UAV_06_medical_F
	{
		author = "Frenchie";
		displayName = "AR-6 Pelican (Medical)";
		scope = 2;
		side = 1;
		faction = "7thFleet";
		crew = "B_UAV_AI_F";
		typicalCargo[] = {"B_UAV_AI_F"};
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {"TKE_AlicePack7thMAR6"};
		};
	};
};