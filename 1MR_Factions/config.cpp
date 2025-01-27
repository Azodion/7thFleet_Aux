////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sat Sep 09 16:52:22 2023 : 'file' last modified on Tue Oct 18 19:53:08 2022
////////////////////////////////////////////////////////////////////

class cfgPatches
{
  class 7thFleet
  {
    units[]={"7thFleet_Squad_Leader","7thFleet_Team_Leader","7thFleet_Trooper","7thFleet_Trooper_BPR","7thFleet_Trooper_Bullfrog","7thFleet_Trooper_AT","7thFleet_Heavy_Trooper_XLR","7thFleet_Trooper_Light","7thFleet_Soldier_Unarmed","7thFleet_Officer","7thFleet_Officer_Unarmed","7thFleet_OfficerMP","7thFleet_Marksman","7thFleet_AT_Specialist","7thFleet_AA_Specialist","7thFleet_Explosive_Specialist","7thFleet_UAV_Specialist","7thFleet_Combat_Medic","7thFleet_Engineer","7thFleet_Ammo_Bearer","7thFleet_Autorifleman","7thFleet_Recon_Team_Leader","7thFleet_Recon_Scout","7thFleet_Recon_Scout_AT","7thFleet_Recon_Marksman","7thFleet_Recon_Demo_Specialist","7thFleet_Recon_UAV_Specialist","7thFleet_Recon_Paramedic","7thFleet_Recon_Spotter","7thFleet_Recon_Sniper","7thFleet_UCIA_Agent","7thFleet_UCIA_Advisor","7thFleet_UCIA_Team_Leader","7thFleet_UCIA_Scout","7thFleet_UCIA_Scout_AT","7thFleet_UCIA_Marksman","7thFleet_UCIA_Demo_Specialist","7thFleet_UCIA_UAV_Specialist","7thFleet_UCIA_Paramedic","7thFleet_UCIA_Spotter","7thFleet_UCIA_Sniper","7thFleet_OfficerNavy","7thFleet_TrooperNavy","7thFleet_MedicNavy","7thFleet_Crewman","7thFleet_Pilot","7thFleet_Breacher","7thFleet_Trooper_ARG_88","7thFleet_Trooper_Light_AT","7thFleet_Marksman_ARG_88_M","7thFleet_Sniper","7thFleet_AWC_AA","7thFleet_AWC_IFV","7thFleet_AWC_AT","7thFleet_AWC_Recon","7thFleet_MBT_52","7thFleet_MSE_3","7thFleet_MSE_3_Unarmed","7thFleet_MRAP","7thFleet_MRAP_GMG","7thFleet_MRAP_HMG","7thFleet_X_32","7thFleet_X_32_Vehicle","7thFleet_UH_80","7thFleet_CH_67","7thFleet_AFV_MGS","7thFleet_MBT_100X","7thFleet_MBT_100","7thFleet_IFV_4","7thFleet_AAV_5","7thFleet_LSV","7thFleet_LSV_HMG","7thFleet_LSV_AT","7thFleet_HMG","7thFleet_HMG_high","7thFleet_GMG","7thFleet_GMG_high","7thFleet_HMG_A","7thFleet_GMG_A","7thFleet_static_AT","7thFleet_static_AA","B_KEF_UCP_Cop_Leader","B_KEF_UCP_Cop","B_KEF_UCP_Cop_Heavy","B_KEF_UCP_Cop_Light","B_KEF_UCP_Cop_Officer","B_KEF_UCP_Cop_Unarmed","B_KEF_UCP_MSE_3_Unarmed","B_KEF_UCP_LSV","7thFleet_truck_HULV","7thFleet_truck_HULV_C","7thFleet_truck_HULV_Ammo","7thFleet_truck_HULV_Fuel","7thFleet_truck_HULV_Repair","7thFleet_truck_HULV_Device","B_KEF_UCP_truck_HULV","B_KEF_UCP_truck_HULV_C"};
    weapons[]={"7thFleet_TKE_UCNRifle2_optic_Arco_blk_F","7thFleet_TKE_UCNRifle_optic_Arco_blk_F","7thFleet_TKE_UCNRifle2_optic_ACO_grn","7thFleet_TKE_UCNRifle2_optic_ACO_grn_smg","7thFleet_TKE_UCNRifle3_optic_ACO_grn_smg","7thFleet_TKE_UCNRifle_acc_pointer_IRoptic_SOS","7thFleet_TKE_UCNRifle2_optic_Aco","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Holosight_blk_F","7thFleet_TKE_MDDMR_acc_pointer_IRoptic_SOSbipod_01_F_blk","7thFleet_TKE_UCNRifle3_acc_pointer_IRoptic_Holosight_blk_F","7thFleet_TKE_MDLMG_optic_ACO_grnbipod_01_F_blk","7thFleet_TKE_UCNLMG_optic_Arco_blk_Fbipod_01_F_blk","7thFleet_TKE_UCNDMR_optic_SOSbipod_01_F_blk","7thFleet_TKE_UCNDMR_optic_DMSbipod_01_F_blk","7thFleet_TKE_UCNBPRifle_optic_Arco_blk_F","7thFleet_TKE_UCNBPRifle_optic_ACO_grn"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","A3_Weapons_F","TKE_UCN","TKE_Weapons","A3_Weapons_F_Exp","TKE_Uniforms","A3_Characters_F","A3_Drones_F_Weapons_F_Gamma_Items","A3_Weapons_F_Acc","A3_Armor_F_Decade","A3_Armor_F_Decade_MBT_02","tke_dependency_fixes"};
  };
};

class cfgFactionClasses
{
  class 7thFleet
  {
    flag = "\kef_meta\data\flag\flag_n_ucn.paa";
    icon = "\kef_meta\data\flag\icon_ucn.paa";
    displayName="[TKE] 7th Expeditionary Fleet";
    side=1;
    priority=1;
  };
  class ER_JSF
  {
    displayName="[TKE] Jovian Secession Front";
    side=2;
    priority=1;
  };

};

// class CBA_Extended_EventHandlers_base;

class cfgWeapons
{
  class TKE_UCNRifle2;
  class hgun_P07_blk_F;
  class TKE_UCNRifle;
  class TKE_UCNRifle3;
  class kef_launch_Titan_short_blk_F;
  class kef_launch_Titan_blk_F;
  class TKE_MDDMR;
  class TKE_MDLMG;
  class TKE_UCNLMG;
  class TKE_UCNDMR;
  class TKE_UCNBPRifle;

  class 7thFleet_TKE_UCNRifle2_optic_Arco_blk_F: TKE_UCNRifle2
  {
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        // item="optic_Arco_blk_F";
        item="TKE_MRCOSight";
      };
    };
  };

  class 7thFleet_TKE_UCNRifle_optic_Arco_blk_F: TKE_UCNRifle
  {
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        // item="optic_Arco_blk_F";
        item="TKE_MRCOSight";
      };
    };
  };

  class 7thFleet_TKE_UCNRifle2_optic_ACO_grn: TKE_UCNRifle2
  {
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        // item="optic_ACO_grn";
        item="TKE_ReflexSight";
      };
    };
  };

  class 7thFleet_TKE_UCNRifle2_optic_ACO_grn_smg: TKE_UCNRifle2
  {
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        // item="optic_ACO_grn_smg";
        item="TKE_ReflexSight";
      };
    };
  };

  class 7thFleet_TKE_UCNRifle3_optic_ACO_grn_smg: TKE_UCNRifle3
  {
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        // item="optic_ACO_grn_smg";
        item="TKE_ReflexSight";
      };
    };
  };

  class 7thFleet_TKE_UCNRifle_acc_pointer_IRoptic_SOS: TKE_UCNRifle
  {
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        // item="optic_SOS";
        item="TKE_ThermScope";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class 7thFleet_TKE_UCNRifle2_optic_Aco: TKE_UCNRifle2
  {
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        // item="optic_Aco";
        item="TKE_ReflexSight";
      };
    };
  };

  class 7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F: TKE_UCNRifle2
  {
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        // item="optic_Arco_blk_F";
        item="TKE_MRCOSight";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class 7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Holosight_blk_F: TKE_UCNRifle2
  {
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        // item="optic_Holosight_blk_F";
        item="TKE_ReflexSight";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class 7thFleet_TKE_MDDMR_acc_pointer_IRoptic_SOSbipod_01_F_blk: TKE_MDDMR
  {
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        // item="optic_SOS";
        item="TKE_ThermScope";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
	  class LinkedItemsUnder
	  {
		slot="UnderBarrelSlot";
        item="bipod_01_F_blk";
	  };
    };
  };

  class 7thFleet_TKE_UCNRifle3_acc_pointer_IRoptic_Holosight_blk_F: TKE_UCNRifle3
  {
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        // item="optic_Holosight_blk_F";
        item="TKE_ReflexSight";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };
  
  class 7thFleet_TKE_MDLMG_optic_ACO_grnbipod_01_F_blk: TKE_MDLMG
  {
    displayName="[MD] MAW/2-D/1-3 (SAW) ";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        // item="optic_ACO_grn";
        item="TKE_ReflexSight";
      };
	  class LinkedItemsUnder
	  {
		slot="UnderBarrelSlot";
        item="bipod_01_F_blk";
	  };
    };
  };
  
  class 7thFleet_TKE_UCNLMG_optic_Arco_blk_Fbipod_01_F_blk: TKE_UCNLMG
  {
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        // item="optic_Arco_blk_F";
        item="TKE_MRCOSight";
      };
	  class LinkedItemsUnder
	  {
		slot="UnderBarrelSlot";
        item="bipod_01_F_blk";
	  };
    };
  };
  
  class 7thFleet_TKE_UCNDMR_optic_SOSbipod_01_F_blk: TKE_UCNDMR
  {
	scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        // item="optic_SOS";
        item="TKE_ThermScope";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
	  class LinkedItemsUnder
	  {
		slot="UnderBarrelSlot";
        item="bipod_01_F_blk";
	  };
    };
  };
  
  class 7thFleet_TKE_UCNDMR_optic_DMSbipod_01_F_blk: TKE_UCNDMR
  {
	scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_DMS";
        // item="TKE_ThermScope";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
	  class LinkedItemsUnder
	  {
		slot="UnderBarrelSlot";
        item="bipod_01_F_blk";
	  };
    };
  };
  
  class 7thFleet_TKE_UCNBPRifle_optic_Arco_blk_F: TKE_UCNBPRifle
  {
	scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        // item="optic_Arco_blk_F";
        item="TKE_MRCOSight";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };
  
  class 7thFleet_TKE_UCNBPRifle_optic_ACO_grn: TKE_UCNBPRifle
  {
	scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        // item="optic_ACO_grn";
        item="TKE_ReflexSight";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

};

class cfgVehicles
{
  class TKE_Rogue_Uniform1MRNC_inf_B;
  class TKE_Rogue_Uniform1MR_inf_B;
  class TKE_Rogue_UniformUCIANC_inf_B;
  class TKE_Rogue_UniformUCIA_inf_B;
  class TKE_Rogue_UniformNavyNC_inf_B;
  class TKE_Rogue_UniformNavy_inf_B;
  class B_Soldier_03_f;
  class B_Soldier_SL_F: B_Soldier_03_f
  {
	class EventHandlers;
  };
  class B_Soldier_TL_F: B_Soldier_03_f
  {
	class EventHandlers;
  };
  class TKE_LightPack7th;
  class B_Soldier_base_F;
  class B_Soldier_F: B_Soldier_base_F
  {
	class EventHandlers;
  };
  class B_soldier_LAT_F: B_Soldier_base_F
  {
	class EventHandlers;
  };
  class B_Soldier_GL_F: B_Soldier_base_F
  {
	class EventHandlers;
  };
  class TKE_BackPack17th;
  class TKE_AlicePack7th;
  class B_Soldier_lite_F: B_Soldier_03_f
  {
	class EventHandlers;
  };
  class B_Soldier_unarmed_F: B_Soldier_F
  {
	class EventHandlers;
  };
  class B_officer_F: B_Soldier_base_F
  {
	class EventHandlers;
  };
  class B_soldier_M_F: B_Soldier_base_F
  {
	class EventHandlers;
  };
  class B_soldier_AT_F: B_Soldier_base_F
  {
	class EventHandlers;
  };
  class B_soldier_AA_F: B_Soldier_base_F
  {
	class EventHandlers;
  };
  class B_soldier_exp_F: B_Soldier_base_F
  {
	class EventHandlers;
  };
  class B_soldier_UAV_F: B_Soldier_base_F
  {
	class EventHandlers;
  };
  class TKE_RadioPack1MR;
  class TKE_JammerPack1MR;
  class B_Soldier_02_f;
  class B_medic_F: B_Soldier_02_f
  {
	class EventHandlers;
  };
  class B_engineer_F: B_Soldier_03_f
  {
	class EventHandlers;
  };
  class TKE_CamelBakV27th;
  class B_Soldier_A_F: B_Soldier_base_F
  {
	class EventHandlers;
  };
  class B_soldier_AR_F: B_Soldier_02_f
  {
	class EventHandlers;
  };
  class B_Soldier_recon_base;
  class B_recon_TL_F: B_Soldier_recon_base
  {
	class EventHandlers;
  };
  class B_recon_F: B_Soldier_recon_base
  {
	class EventHandlers;
  };
  class B_recon_LAT_F: B_Soldier_recon_base
  {
	class EventHandlers;
  };
  class B_recon_M_F: B_Soldier_recon_base
  {
	class EventHandlers;
  };
  class B_recon_exp_F: B_Soldier_recon_base
  {
	class EventHandlers;
  };
  class TKE_BackPack17thUCN;
  class TKE_AlicePack7thM;
  class TKE_BackPack2UCN;
  class B_recon_JTAC_F: B_Soldier_recon_base
  {
	class EventHandlers;
  };
  class B_recon_medic_F: B_Soldier_recon_base
  {
	class EventHandlers;
  };
  class B_crew_F: B_Soldier_03_f
  {
	class EventHandlers;
  };
  class B_Soldier_05_f;
  class B_Pilot_F: B_Soldier_05_f
  {
	class EventHandlers;
  };
  class B_Sharpshooter_F: B_Soldier_base_F
  {
	class EventHandlers;
  };
  class I_LT_01_AA_F;
  class I_LT_01_cannon_F;
  class I_LT_01_AT_F;
  class I_LT_01_scout_F;
  class I_MBT_03_cannon_F;
  class O_APC_Wheeled_02_rcws_v2_F;
  class KEF_APC_Wheeled_02_unarmed_F;
  class O_MRAP_02_F;
  class O_MRAP_02_gmg_F;
  class O_MRAP_02_hmg_F;
  class O_T_VTOL_02_infantry_dynamicLoadout_F;
  class O_T_VTOL_02_vehicle_dynamicLoadout_F;
  class B_Heli_Transport_01_F;
  class B_Heli_Transport_01_F_b: B_Heli_Transport_01_F {scope=0; class Turrets;};
  class B_Heli_Transport_01_F_c: B_Heli_Transport_01_F_b {
	  class Turrets: Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
      };
  };
  class B_Heli_Transport_03_F;
  class B_Heli_Transport_03_F_b: B_Heli_Transport_03_F {scope=0; class Turrets;};
  class B_Heli_Transport_03_F_c: B_Heli_Transport_03_F_b {
	  class Turrets: Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
      };
  };
  class B_AFV_Wheeled_01_cannon_F;
  class O_APC_Tracked_02_cannon_F;
  class O_APC_Tracked_02_AA_F;
  class MEOP_veh_kadaraSh_merc;
  class ER_JSF_Grig_Dropship: MEOP_veh_kadaraSh_merc
  {
    faction="ER_JSF";
    side=2;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2
		crew = "ER_JSF_Pilot";
  };
  class 7thFleet_Squad_Leader: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Squad Leader";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Sleeved_UCN";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_SMOKE_mag_green","TKE_SMOKE_mag_orange","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","Laserbatteries"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","B_IR_Grenade","B_IR_Grenade","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_SMOKE_mag_green","TKE_SMOKE_mag_orange","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCHUD","TKE_BinoUCN","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour4_17th","TKE_UCMCHUD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCHUD","TKE_BinoUCN","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour4_17th","TKE_UCMCHUD"};
    backpack="";
	
  };

  class 7thFleet_Team_Leader: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Team Leader";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="TKE_Rogue_Uniform1MRNC_U_B";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNBPRifle_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNBPRifle_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"Chemlight_blue","B_IR_Grenade","B_IR_Grenade","TKE_30rnd_575x45_mag","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_SMOKE_mag_green","TKE_SMOKE_mag_orange","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_magTG","TKE_30rnd_575x45_magTG","TKE_30rnd_575x45_magTG","TKE_30rnd_575x45_magTG","Laserbatteries"};
    respawnMagazines[]={"Chemlight_blue","B_IR_Grenade","B_IR_Grenade","TKE_30rnd_575x45_mag","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_SMOKE_mag_green","TKE_SMOKE_mag_orange","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_magTG","TKE_30rnd_575x45_magTG","TKE_30rnd_575x45_magTG","TKE_30rnd_575x45_magTG","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCGlasses","TKE_BinoUCN","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour3_27th","G_Balaclava_TI_blk_F","TKE_UCMCGlasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCGlasses","TKE_BinoUCN","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour3_27th","G_Balaclava_TI_blk_F","TKE_UCMCGlasses"};
    backpack="";
	
  };

  class 7thFleet_Trooper: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Trooper";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Sleeved_UCN";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"7thFleet_TKE_UCNRifle2_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"7thFleet_TKE_UCNRifle2_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGlasses","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour2_27th","TKE_UCMCGlasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGlasses","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour2_27th","TKE_UCMCGlasses"};
    backpack="";
	
  };
  
  class 7thFleet_Trooper_BPR: 7thFleet_Trooper
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Trooper (BPR)";
    weapons[]={"7thFleet_TKE_UCNBPRifle_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"7thFleet_TKE_UCNBPRifle_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    magazines[]={"TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    respawnMagazines[]={"TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
  };

  class 7thFleet_Trooper_Bullfrog: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Trooper (Bullfrog)";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Sleeved_UCN";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"7thFleet_TKE_UCNRifle_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"7thFleet_TKE_UCNRifle_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"Chemlight_blue","TKE_25rnd_762x51_mag","TKE_25rnd_762x51_mag","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_25rnd_762x51_mag","TKE_25rnd_762x51_mag","TKE_25rnd_762x51_mag","TKE_25rnd_762x51_mag"};
    respawnMagazines[]={"Chemlight_blue","TKE_25rnd_762x51_mag","TKE_25rnd_762x51_mag","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_25rnd_762x51_mag","TKE_25rnd_762x51_mag","TKE_25rnd_762x51_mag","TKE_25rnd_762x51_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGlasses","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour3_17th","TKE_UCMCGlasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGlasses","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour3_17th","TKE_UCMCGlasses"};
    backpack="7thFleet_Trooper_Bullfrog_pack";
	
  };

  class 7thFleet_Trooper_AT: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Trooper (AT)";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Sleeved_UCN";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"7thFleet_TKE_UCNRifle2_optic_ACO_grn","kef_launch_MRAWS_black_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"7thFleet_TKE_UCNRifle2_optic_ACO_grn","kef_launch_MRAWS_black_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","MRAWS_HEAT_F"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","MRAWS_HEAT_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGlasses","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour3_17th","TKE_UCNChestPouches1","TKE_UCMCGlasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGlasses","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour3_17th","TKE_UCNChestPouches1","TKE_UCMCGlasses"};
    backpack="7thFleet_Trooper_AT_pack";
	
  };
  
  class 7thFleet_Heavy_Trooper_XLR: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Heavy Trooper (XLR)";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Sleeved_UCN";
    uniformClass="TKE_Rogue_UniformNC_U_B";
    weapons[]={"TKE_UCNLasRifle","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_UCNLasRifle","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"Chemlight_blue","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_SMOKE_mag_blue","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_Powerpack","TKE_Powerpack","TKE_Powerpack"};
    respawnMagazines[]={"Chemlight_blue","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_SMOKE_mag_blue","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_Powerpack","TKE_Powerpack","TKE_Powerpack"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGlasses","TKE_UCMCHelmClosedCamo7th","TKE_UCMCArmour5_17th","TKE_UCMCGlasses","TKE_UCNFaceWear1"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGlasses","TKE_UCMCHelmClosedCamo7th","TKE_UCMCArmour5_17th","TKE_UCMCGlasses","TKE_UCNFaceWear1"};
    backpack="7thFleet_Heavy_Trooper_XLR_pack";
	
  };

  class 7thFleet_Trooper_Light: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Trooper (Light)";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Sleeved_UCN";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"7thFleet_TKE_UCNRifle2_optic_ACO_grn_smg","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"7thFleet_TKE_UCNRifle2_optic_ACO_grn_smg","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour17th"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour17th"};
    backpack="";
	
  };

  class 7thFleet_Soldier_Unarmed: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Soldier (Unarmed)";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Sleeved_UCN";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour17th"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour17th"};
    backpack="";
	
  };

  class 7thFleet_Officer: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Officer";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Sleeved_UCN";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle3_optic_ACO_grn_smg","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle3_optic_ACO_grn_smg","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Laserbatteries"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_BinoUCN","TKE_beretUCN_7MEF","TKE_UCMCArmour17th"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_BinoUCN","TKE_beretUCN_7MEF","TKE_UCMCArmour17th"};
    backpack="";
	
  };

  class 7thFleet_Officer_Unarmed: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Officer (Unarmed)";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Sleeved_UCN";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_beretUCN_7MEF","TKE_UCMCArmour17th"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_beretUCN_7MEF","TKE_UCMCArmour17th"};
    backpack="";
	
  };

  class 7thFleet_Marksman: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Marksman";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Sleeved_UCN";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNDMR_optic_SOSbipod_01_F_blk","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNDMR_optic_SOSbipod_01_F_blk","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"Chemlight_blue","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","Laserbatteries"};
    respawnMagazines[]={"Chemlight_blue","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHUD","TKE_BinoUCN","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour2_27th","TKE_UCMCHUD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHUD","TKE_BinoUCN","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour2_27th","TKE_UCMCHUD"};
    backpack="7thFleet_Marksman_pack";
	
  };

  class 7thFleet_AT_Specialist: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="AT Specialist";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Sleeved_UCN";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"7thFleet_TKE_UCNRifle2_optic_ACO_grn","kef_launch_Titan_short_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"7thFleet_TKE_UCNRifle2_optic_ACO_grn","kef_launch_Titan_short_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","Titan_AT"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","Titan_AT"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGogglesDownNVG","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour2_27th","TKE_UCMCGogglesDownNVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGogglesDownNVG","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour2_27th","TKE_UCMCGogglesDownNVG"};
    backpack="7thFleet_AT_Specialist_pack";
	
  };

  class 7thFleet_AA_Specialist: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="AA Specialist";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Sleeved_UCN";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"7thFleet_TKE_UCNRifle2_optic_ACO_grn","kef_launch_Titan_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"7thFleet_TKE_UCNRifle2_optic_ACO_grn","kef_launch_Titan_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","Titan_AA"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue","Titan_AA"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHUD","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour2_27th","TKE_UCMCGogglesUp","TKE_UCMCHUD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHUD","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour2_27th","TKE_UCMCGogglesUp","TKE_UCMCHUD"};
    backpack="7thFleet_AA_Specialist_pack";
	
  };

  class 7thFleet_Explosive_Specialist: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Explosive Specialist";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Sleeved_UCN";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"7thFleet_TKE_UCNRifle2_optic_ACO_grn","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"7thFleet_TKE_UCNRifle2_optic_ACO_grn","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGogglesDownNVG","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour2_17th","TKE_UCNFaceWear1","TKE_UCMCGogglesDownNVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGogglesDownNVG","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour2_17th","TKE_UCNFaceWear1","TKE_UCMCGogglesDownNVG"};
    backpack="7thFleet_Explosive_Specialist_pack";
	
  };

  class 7thFleet_UAV_Specialist: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="UAV Specialist";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Rolled_UCN";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_optic_ACO_grn","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_optic_ACO_grn","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Laserbatteries"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag_blue","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","kef_B_UCN_UavTerminal","TKE_UCMCHUD","TKE_BinoUCN","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour3_27th","TKE_UCMCGogglesUp","TKE_UCMCHUD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","kef_B_UCN_UavTerminal","TKE_UCMCHUD","TKE_BinoUCN","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour3_27th","TKE_UCMCGogglesUp","TKE_UCMCHUD"};
    backpack="7thFleet_UAV_Specialist_pack";
	  uavHacker = 1;
	
  };

  class 7thFleet_Combat_Medic: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Combat Medic";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Rolled_UCN";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"7thFleet_TKE_UCNRifle2_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"7thFleet_TKE_UCNRifle2_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHUD","TKE_UCMCHelm_Camo7thM","TKE_UCMCArmour2_17th","TKE_UCMCLegPouch","TKE_UCMCHUD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHUD","TKE_UCMCHelm_Camo7thM","TKE_UCMCArmour2_17th","TKE_UCMCLegPouch","TKE_UCMCHUD"};
    backpack="7thFleet_Combat_Medic_pack";
	
  };

  class 7thFleet_Engineer: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
    displayName="Engineer";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Rolled_UCN";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"7thFleet_TKE_UCNRifle2_optic_Aco","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"7thFleet_TKE_UCNRifle2_optic_Aco","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHUD","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour2_27th","TKE_UCMCLegPouch","TKE_UCMCHUD"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCHUD","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour2_27th","TKE_UCMCLegPouch","TKE_UCMCHUD"};
    backpack="7thFleet_Engineer_pack";
	
  };

  class 7thFleet_Ammo_Bearer: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Ammo Bearer";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="U_TKE_Uniform_Rolled_UCN";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"7thFleet_TKE_UCNRifle2_optic_Aco","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"7thFleet_TKE_UCNRifle2_optic_Aco","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGogglesUpNVG","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour4_27th","TKE_UCNFaceWear1","TKE_UCMCGogglesUpNVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGogglesUpNVG","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour4_27th","TKE_UCNFaceWear1","TKE_UCMCGogglesUpNVG"};
    backpack="7thFleet_Ammo_Bearer_pack";
	
  };
  
  class 7thFleet_Autorifleman: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Autorifleman";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    // uniformClass="TKE_Rogue_Uniform1MRNC_U_B";
    uniformClass="TKE_Rogue_Uniform1MR_U_B";
    weapons[]={"7thFleet_TKE_UCNLMG_optic_Arco_blk_Fbipod_01_F_blk","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"7thFleet_TKE_UCNLMG_optic_Arco_blk_Fbipod_01_F_blk","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"Chemlight_blue","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","Chemlight_blue","TKE_FRAG_mag","TKE_FRAG_mag","TKE_SMOKE_mag_blue","TKE_150rnd_62x35_magGTUCN","TKE_150rnd_62x35_magGTUCN","TKE_150rnd_62x35_magGTUCN","TKE_150rnd_62x35_magGTUCN","TKE_150rnd_62x35_magGTUCN"};
    respawnMagazines[]={"Chemlight_blue","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_150rnd_62x35_magUCN","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_SMOKE_mag","TKE_SMOKE_mag","Chemlight_blue","TKE_FRAG_mag","TKE_FRAG_mag","TKE_SMOKE_mag_blue","TKE_150rnd_62x35_magGTUCN","TKE_150rnd_62x35_magGTUCN","TKE_150rnd_62x35_magGTUCN","TKE_150rnd_62x35_magGTUCN","TKE_150rnd_62x35_magGTUCN"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGlasses","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour3_27th","TKE_UCMCLegPouch","TKE_UCMCGlasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","TKE_UCMCGlasses","TKE_UCMCHelm_Camo7th","TKE_UCMCArmour3_27th","TKE_UCMCLegPouch","TKE_UCMCGlasses"};
    backpack="";
	
  };
  class 7thFleet_Recon_Team_Leader: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Raider Team Leader";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","LanguageENG_F","LanguageENGB_F","LanguageGRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="TKE_Rogue_Uniform1MRNC_U_B";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","TKE_SMOKE_mag_orange","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","Laserbatteries"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","TKE_SMOKE_mag_orange","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","kef_B_UCN_UavTerminal","TKE_IntegratedNVGs","TKE_BinoUCN","TKE_UCMRHelm1stT","TKE_UCMCArmour4_11MR","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","kef_B_UCN_UavTerminal","TKE_IntegratedNVGs","TKE_BinoUCN","TKE_UCMRHelm1stT","TKE_UCMCArmour4_11MR","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    backpack="7thFleet_Recon_Team_Leader_pack";
	
  };

  class 7thFleet_Recon_Scout: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Raider";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="TKE_Rogue_Uniform1MRNC_U_B";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","TKE_ThermScope"};
    respawnItems[]={"FirstAidKit","FirstAidKit","TKE_ThermScope"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","Laserbatteries"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCHUD","TKE_BinoUCN","TKE_UCMRHelm1stB","TKE_UCMCArmour2_11MR","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCHUD","TKE_BinoUCN","TKE_UCMRHelm1stB","TKE_UCMCArmour2_11MR","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    backpack="";
	
  };

  class 7thFleet_Recon_Scout_AT: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Raider (AT)";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="TKE_Rogue_Uniform1MRNC_U_B";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Holosight_blk_F","kef_launch_MRAWS_black_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Holosight_blk_F","kef_launch_MRAWS_black_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","MRAWS_HEAT_F","Laserbatteries"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","MRAWS_HEAT_F","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCGlasses","TKE_BinoUCN","TKE_UCMRHelm1stB","TKE_UCMCArmour2_11MR","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCGlasses","TKE_BinoUCN","TKE_UCMRHelm1stB","TKE_UCMCArmour2_11MR","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    backpack="7thFleet_Recon_Scout_AT_pack";
	
  };

  class 7thFleet_Recon_Marksman: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Raider Marksman";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="TKE_Rogue_Uniform1MRNC_U_B";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNDMR_optic_DMSbipod_01_F_blk","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNDMR_optic_DMSbipod_01_F_blk","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"Chemlight_blue","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_SMOKE_mag_blue","Chemlight_blue","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","Laserbatteries"};
    respawnMagazines[]={"Chemlight_blue","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_SMOKE_mag_blue","Chemlight_blue","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_IntegratedNVGsCamo","TKE_BinoUCN","TKE_UCMRHelm1stB","TKE_UCMCArmour3_11MR","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_IntegratedNVGsCamo","TKE_BinoUCN","TKE_UCMRHelm1stB","TKE_UCMCArmour3_11MR","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    backpack="7thFleet_Recon_Marksman_pack";
	
  };

  class 7thFleet_Recon_Demo_Specialist: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Raider Demo Specialist";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="TKE_Rogue_Uniform1MRNC_U_B";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle3_acc_pointer_IRoptic_Holosight_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle3_acc_pointer_IRoptic_Holosight_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"Chemlight_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_SMOKE_mag_blue","Chemlight_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Laserbatteries"};
    respawnMagazines[]={"Chemlight_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_SMOKE_mag_blue","Chemlight_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCGogglesDownNVG","TKE_BinoUCN","TKE_UCMRHelm1stB","TKE_UCMCArmour3_21MR","TKE_UCNFaceWear1Camo1","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCGogglesDownNVG","TKE_BinoUCN","TKE_UCMRHelm1stB","TKE_UCMCArmour3_21MR","TKE_UCNFaceWear1Camo1","TKE_IntegratedNVGs"};
    backpack="7thFleet_Recon_Demo_Specialist_pack";
	
  };

  class 7thFleet_Recon_UAV_Specialist: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Raider UAV Specialist";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="TKE_Rogue_Uniform1MRNC_U_B";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle3_acc_pointer_IRoptic_Holosight_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle3_acc_pointer_IRoptic_Holosight_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"Chemlight_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_SMOKE_mag_blue","Chemlight_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Laserbatteries"};
    respawnMagazines[]={"Chemlight_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_SMOKE_mag_blue","Chemlight_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","kef_B_UCN_UavTerminal","TKE_UCMCGogglesDownNVG","TKE_BinoUCN","TKE_UCMRHelm1stB","TKE_UCMCArmour2_11MR","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","kef_B_UCN_UavTerminal","TKE_UCMCGogglesDownNVG","TKE_BinoUCN","TKE_UCMRHelm1stB","TKE_UCMCArmour2_11MR","TKE_IntegratedNVGs"};
    backpack="7thFleet_Recon_UAV_Specialist_pack";
	uavHacker = 1;
	
  };
  class 7thFleet_Recon_Paramedic: TKE_Rogue_Uniform1MR_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="Raider Paramedic";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="TKE_Rogue_Uniform1MRNC_U_B";
    weapons[]={"7thFleet_TKE_UCNRifle3_acc_pointer_IRoptic_Holosight_blk_F","TKE_MDPistolBlack","TKE_BinoUCN","Put","Throw"};
    respawnWeapons[]={"7thFleet_TKE_UCNRifle3_acc_pointer_IRoptic_Holosight_blk_F","TKE_MDPistolBlack","TKE_BinoUCN","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"Chemlight_blue","Chemlight_blue","TKE_IMPACT_mag","TKE_35rnd_62x35_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_SMOKE_mag_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Laserbatteries"};
    respawnMagazines[]={"Chemlight_blue","Chemlight_blue","TKE_IMPACT_mag","TKE_35rnd_62x35_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_SMOKE_mag_blue","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCHUD","TKE_BinoUCN","TKE_UCMRHelm1stM","TKE_UCMCArmour2_21MR","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCHUD","TKE_BinoUCN","TKE_UCMRHelm1stM","TKE_UCMCArmour2_21MR","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    backpack="7thFleet_Recon_Paramedic_pack";
	
  };
  class TKE_Uniform_Sleeved_UCNCamo2;
  class 7thFleet_Recon_Spotter: TKE_Uniform_Sleeved_UCNCamo2
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
    displayName="Raider Spotter";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="U_TKE_Uniform_Sleeved_UCNCamo2";
     weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","TKE_ThermScope"};
    respawnItems[]={"FirstAidKit","FirstAidKit","TKE_ThermScope"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","Laserbatteries"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_CombatGlassesNVG","TKE_BinoUCN","TKE_beretUCN_1MRC","TKE_UCMCArmour4_21MR","G_Bandanna_blk","TKE_CombatGlassesNVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_CombatGlassesNVG","TKE_BinoUCN","TKE_beretUCN_1MRC","TKE_UCMCArmour4_21MR","G_Bandanna_blk","TKE_CombatGlassesNVG"};
    backpack="";
  };
  class 7thFleet_Recon_Sniper: TKE_Uniform_Sleeved_UCNCamo2
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
    displayName="Raider Sniper";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="U_TKE_Uniform_Sleeved_UCNCamo2";
    weapons[]={"TKE_BinoUCN","srifle_GM6_LRPS_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","srifle_GM6_LRPS_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"Chemlight_blue","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_SMOKE_mag_blue","Chemlight_blue","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","Laserbatteries"};
    respawnMagazines[]={"Chemlight_blue","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_SMOKE_mag_blue","Chemlight_blue","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_CombatGlassesNVG","TKE_BinoUCN","TKE_beretUCN_1MRC","TKE_UCMCArmour4_21MR","G_Bandanna_blk","TKE_CombatGlassesNVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_CombatGlassesNVG","TKE_BinoUCN","TKE_beretUCN_1MRC","TKE_UCMCArmour4_21MR","G_Bandanna_blk","TKE_CombatGlassesNVG"};
    backpack="7thFleet_Recon_Sniper_pack";
  };
  class TKE_UniformUCIA_WhiteButtonUp;
  class 7thFleet_UCIA_Agent: TKE_UniformUCIA_WhiteButtonUp
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="UCIA Agent";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","LanguageENG_F","LanguageENGB_F","LanguageGRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="U_TKE_UniformUCIA_WhiteButtonUp";
    weapons[]={"TKE_BinoUCN","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"Chemlight_blue","TKE_SMOKE_mag_blue","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Laserbatteries"};
    respawnMagazines[]={"Chemlight_blue","TKE_SMOKE_mag_blue","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_BinoUCN","TKE_beretUCN_UCIAD14","TKE_UCIAWebbing3"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_BinoUCN","TKE_beretUCN_UCIAD14","TKE_UCIAWebbing3"};
    backpack="";
	
  };
  class TKE_UniformUCIA_Sleeved;
  class 7thFleet_UCIA_Advisor: TKE_UniformUCIA_Sleeved
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="UCIA Advisor";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="U_TKE_UniformUCIA_Sleeved";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","TKE_ThermScope"};
    respawnItems[]={"FirstAidKit","FirstAidKit","TKE_ThermScope"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","Laserbatteries"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCHUD","TKE_BinoUCN","TKE_beretUCN_UCIAD9","TKE_UCIAWebbing1","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCHUD","TKE_BinoUCN","TKE_beretUCN_UCIAD9","TKE_UCIAWebbing1","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    backpack="";
	
  };
  class 7thFleet_UCIA_Team_Leader: TKE_Rogue_UniformUCIANC_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="UCIA Team Leader";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="TKE_Rogue_UniformUCIANC_U_B";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","TKE_SMOKE_mag_orange","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","Laserbatteries"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","TKE_SMOKE_mag_orange","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","TKE_35rnd_62x35_magTG","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","kef_B_UCN_UavTerminal","TKE_IntegratedNVGs","TKE_BinoUCN","TKE_UCIAHelmClosed","TKE_UCMCArmour5_2UCIA","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","kef_B_UCN_UavTerminal","TKE_IntegratedNVGs","TKE_BinoUCN","TKE_UCIAHelmClosed","TKE_UCMCArmour5_2UCIA","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    backpack="7thFleet_Recon_Team_Leader_pack";
	
  };

  class 7thFleet_UCIA_Scout: TKE_Rogue_UniformUCIANC_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="UCIA Operator";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="TKE_Rogue_UniformUCIANC_U_B";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","TKE_ThermScope"};
    respawnItems[]={"FirstAidKit","FirstAidKit","TKE_ThermScope"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","Laserbatteries"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCHUD","TKE_BinoUCN","TKE_UCMCHelmMask_CamoUCIA","TKE_UCMCArmour4_2UCIA","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCHUD","TKE_BinoUCN","TKE_UCMCHelmMask_CamoUCIA","TKE_UCMCArmour4_2UCIA","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    backpack="";
	
  };

  class 7thFleet_UCIA_Scout_AT: TKE_Rogue_UniformUCIANC_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="UCIA Operator (AT)";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="TKE_Rogue_UniformUCIANC_U_B";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Holosight_blk_F","kef_launch_MRAWS_black_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Holosight_blk_F","kef_launch_MRAWS_black_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","MRAWS_HEAT_F","Laserbatteries"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","MRAWS_HEAT_F","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCGlasses","TKE_BinoUCN","TKE_UCMCHelmMask_CamoUCIA","TKE_UCMCArmour3_2UCIA","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCGlasses","TKE_BinoUCN","TKE_UCMCHelmMask_CamoUCIA","TKE_UCMCArmour3_2UCIA","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    backpack="7thFleet_Recon_Scout_AT_pack";
	
  };

  class 7thFleet_UCIA_Marksman: TKE_Rogue_UniformUCIANC_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="UCIA Marksman";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="TKE_Rogue_UniformUCIANC_U_B";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNDMR_optic_DMSbipod_01_F_blk","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNDMR_optic_DMSbipod_01_F_blk","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"Chemlight_blue","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_SMOKE_mag_blue","Chemlight_blue","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","Laserbatteries"};
    respawnMagazines[]={"Chemlight_blue","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_SMOKE_mag_blue","Chemlight_blue","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","TKE_20rnd_969x51_magUCN","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_IntegratedNVGsCamo","TKE_BinoUCN","TKE_UCMRHelmUCIA","TKE_UCMCArmour3_1UCIA","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_IntegratedNVGsCamo","TKE_BinoUCN","TKE_UCMRHelmUCIA","TKE_UCMCArmour3_1UCIA","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    backpack="7thFleet_Recon_Marksman_pack";
	
  };

  class 7thFleet_UCIA_Demo_Specialist: TKE_Rogue_UniformUCIANC_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="UCIA Demo Specialist";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="TKE_Rogue_UniformUCIANC_U_B";
    weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","TKE_ThermScope"};
    respawnItems[]={"FirstAidKit","FirstAidKit","TKE_ThermScope"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","Laserbatteries"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCGogglesDownNVG","TKE_BinoUCN","TKE_UCIAHelmClosed","TKE_UCMCArmour2_1UCIA","TKE_UCNFaceWear1Camo1","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCGogglesDownNVG","TKE_BinoUCN","TKE_UCIAHelmClosed","TKE_UCMCArmour2_1UCIA","TKE_UCNFaceWear1Camo1","TKE_IntegratedNVGs"};
    backpack="7thFleet_Recon_Demo_Specialist_pack";
	
  };

  class 7thFleet_UCIA_UAV_Specialist: TKE_Rogue_UniformUCIANC_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="UCIA UAV Specialist";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="TKE_Rogue_UniformUCIANC_U_B";
   weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","TKE_ThermScope"};
    respawnItems[]={"FirstAidKit","FirstAidKit","TKE_ThermScope"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","Laserbatteries"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","kef_B_UCN_UavTerminal","TKE_UCMCGogglesDownNVG","TKE_BinoUCN","TKE_UCIAHelmClosed","TKE_UCMCArmour4_1UCIA","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","kef_B_UCN_UavTerminal","TKE_UCMCGogglesDownNVG","TKE_BinoUCN","TKE_UCIAHelmClosed","TKE_UCMCArmour4_1UCIA","TKE_IntegratedNVGs"};
    backpack="7thFleet_Recon_UAV_Specialist_pack";
	uavHacker = 1;
	
  };
  class 7thFleet_UCIA_Paramedic: TKE_Rogue_UniformUCIANC_inf_B
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
        displayName="UCIA Paramedic";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="TKE_Rogue_UniformUCIANC_U_B";
   weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","TKE_ThermScope"};
    respawnItems[]={"FirstAidKit","FirstAidKit","TKE_ThermScope"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","Laserbatteries"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCHUD","TKE_BinoUCN","TKE_UCMCHelmMask_CamoUCIA","TKE_UCMCArmour2_2UCIA","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_UCMCHUD","TKE_BinoUCN","TKE_UCMCHelmMask_CamoUCIA","TKE_UCMCArmour2_2UCIA","G_Balaclava_TI_blk_F","TKE_IntegratedNVGs"};
    backpack="7thFleet_Recon_Paramedic_pack";
	
  };
   class 7thFleet_UCIA_Spotter: TKE_UniformUCIA_Sleeved
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
    displayName="UCIA Spotter";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="U_TKE_UniformUCIA_Sleeved";
   weapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","7thFleet_TKE_UCNRifle2_acc_pointer_IRoptic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","TKE_ThermScope"};
    respawnItems[]={"FirstAidKit","FirstAidKit","TKE_ThermScope"};
    magazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","Laserbatteries"};
    respawnMagazines[]={"TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","Chemlight_blue","TKE_IMPACT_mag","TKE_IMPACT_mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_35rnd_62x35_mag","TKE_SMOKE_mag_blue","Chemlight_blue","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_CombatGlassesNVG","TKE_BinoUCN","TKE_beretUCN_DarkRaider","TKE_UCMCArmour4_2UCIA","G_Bandanna_blk","TKE_CombatGlassesNVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_CombatGlassesNVG","TKE_BinoUCN","TKE_beretUCN_DarkRaider","TKE_UCMCArmour4_2UCIA","G_Bandanna_blk","TKE_CombatGlassesNVG"};
    backpack="";
  };
  class 7thFleet_UCIA_Sniper: TKE_UniformUCIA_Sleeved
  {
    faction="7thFleet";
    side=1;
    scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
    displayName="UCIA Sniper";
    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
	  identityTypes[] = {"Head_NATO","Head_Euro","Head_Russian","Head_Enoch","Head_Asian","Head_African","Head_TK","LanguageENG_F","LanguageENGB_F","LanguageGRE_F","LanguageENGFRE_F"};
    editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
    uniformClass="U_TKE_UniformUCIA_Sleeved";
    weapons[]={"TKE_BinoUCN","srifle_GM6_LRPS_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"TKE_BinoUCN","srifle_GM6_LRPS_F","TKE_MDPistolBlack","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"Chemlight_blue","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_SMOKE_mag_blue","Chemlight_blue","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","Laserbatteries"};
    respawnMagazines[]={"Chemlight_blue","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","TKE_SMOKE_mag","TKE_SMOKE_mag_green","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_SMOKE_mag_blue","Chemlight_blue","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","Laserbatteries"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_CombatGlassesNVG","TKE_BinoUCN","TKE_beretUCN_DarkRaider","TKE_UCMCArmour4_2UCIA","G_Bandanna_blk","TKE_CombatGlassesNVG"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_CombatGlassesNVG","TKE_BinoUCN","TKE_beretUCN_DarkRaider","TKE_UCMCArmour4_2UCIA","G_Bandanna_blk","TKE_CombatGlassesNVG"};
    backpack="7thFleet_Recon_Sniper_pack";
  };
  class kef_static_HMG_01_F;
  class kef_static_HMG_01_high_F;
  class kef_static_GMG_01_F;
  class kef_static_GMG_01_high_F;
  class kef_static_HMG_01_A_F;
  class kef_static_GMG_01_A_F;
  class kef_static_AT_F;
  class kef_static_AA_F;
  
  class 7thFleet_HMG: kef_static_HMG_01_F
  {
	faction="7thFleet";
	side=1;
	scope=2;
	scopeCurator=2;
	crew = "7thFleet_Trooper";
  };

  class 7thFleet_HMG_high: kef_static_HMG_01_high_F
  {
	faction="7thFleet";
	side=1;
	scope=2;
	scopeCurator=2;
	crew = "7thFleet_Trooper";
  };

  class 7thFleet_GMG: kef_static_GMG_01_F
  {
	faction="7thFleet";
	side=1;
	scope=2;
	scopeCurator=2;
	crew = "7thFleet_Trooper";
  };

  class 7thFleet_GMG_high: kef_static_GMG_01_high_F
  {
	faction="7thFleet";
	side=1;
	scope=2;
	scopeCurator=2;
	crew = "7thFleet_Trooper";
  };
  
  class 7thFleet_HMG_A: kef_static_HMG_01_A_F
  {
	faction="7thFleet";
	side=1;
	scope=2;
	scopeCurator=2;
  };
  
  class 7thFleet_GMG_A: kef_static_GMG_01_A_F
  {
	faction="7thFleet";
	side=1;
	scope=2;
	scopeCurator=2;
  };

  class 7thFleet_static_AT: kef_static_AT_F
  {
	faction="7thFleet";
	side=1;
	scope=2;
	scopeCurator=2;
	crew = "7thFleet_Trooper";
  };

  class 7thFleet_static_AA: kef_static_AA_F
  {
	faction="7thFleet";
	side=1;
	scope=2;
	scopeCurator=2;
	crew = "7thFleet_Trooper";
  };

  class 7thFleet_Trooper_Bullfrog_pack: TKE_LightPack7th
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines
    {
     class _xx_TKE_25rnd_762x51_mag {count=4;magazine="TKE_25rnd_762x51_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 7thFleet_Trooper_AT_pack: TKE_BackPack17th
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines
    {
     class _xx_MRAWS_HEAT_F {count=4;magazine="MRAWS_HEAT_F";};
     class _xx_MRAWS_HE_F {count=1;magazine="MRAWS_HE_F";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 7thFleet_Heavy_Trooper_XLR_pack: TKE_BackPack17th
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines
    {
     class _xx_TKE_Powerpack {count=8;magazine="TKE_Powerpack";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 7thFleet_Marksman_pack: TKE_LightPack7th
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines
    {
     class _xx_TKE_25rnd_762x51_mag {count=2;magazine="TKE_20rnd_969x51_magUCN";};
     class _xx_KEF_25rnd_762x51_magGT {count=2;magazine="TKE_20rnd_969x51_magGTUCN";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 7thFleet_AT_Specialist_pack: TKE_BackPack17th
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines
    {
     class _xx_Titan_AT {count=2;magazine="Titan_AT";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 7thFleet_AA_Specialist_pack: TKE_BackPack17th
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines
    {
     class _xx_Titan_AA {count=2;magazine="Titan_AA";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class 7thFleet_Explosive_Specialist_pack: TKE_BackPack17th
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines
    {
     class _xx_APERSBoundingMine_Range_Mag {count=3;magazine="APERSBoundingMine_Range_Mag";};
     class _xx_ClaymoreDirectionalMine_Remote_Mag {count=2;magazine="ClaymoreDirectionalMine_Remote_Mag";};
     class _xx_DemoCharge_Remote_Mag {count=1;magazine="DemoCharge_Remote_Mag";};
     class _xx_SLAMDirectionalMine_Wire_Mag {count=2;magazine="SLAMDirectionalMine_Wire_Mag";};
    };
    class TransportItems
    {
     class _xx_MineDetector {count=1;name="MineDetector";};
     class _xx_ToolKit {count=1;name="ToolKit";};
    };
    class TransportWeapons{};
  };


  class 7thFleet_UAV_Specialist_pack: TKE_RadioPack1MR
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class 7thFleet_Combat_Medic_pack: TKE_AlicePack7thM
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_FirstAidKit {count=10;name="FirstAidKit";};
     class _xx_Medikit {count=1;name="Medikit";};
    };
    class TransportWeapons{};
  };


  class 7thFleet_Engineer_pack: TKE_JammerPack1MR
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines
	{
	 class _xx_DemoCharge_Remote_Mag {count=2;magazine="DemoCharge_Remote_Mag";};
	};
    class TransportItems
    {
     class _xx_MineDetector {count=1;name="MineDetector";};
     class _xx_ToolKit {count=1;name="ToolKit";};
    };
    class TransportWeapons{};
  };


  class 7thFleet_Ammo_Bearer_pack: TKE_AlicePack7th
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines
    {
     class _xx_TKE_35rnd_62x35_mag {count=8;magazine="TKE_35rnd_62x35_mag";};
     class _xx_TKE_30rnd_575x45_mag {count=4;magazine="TKE_30rnd_575x45_mag";};
     class _xx_TKE_25rnd_762x51_mag {count=3;magazine="TKE_25rnd_762x51_mag";};
     class _xx_Titan_AT {count=1;magazine="Titan_AT";};
     class _xx_TKE_FRAG_mag {count=4;magazine="TKE_FRAG_mag";};
     class _xx_Chemlight_blue {count=2;magazine="Chemlight_blue";};
     class _xx_TKE_35rnd_62x35_magTG {count=4;magazine="TKE_35rnd_62x35_magTG";};
     class _xx_TKE_Powerpack {count=1;magazine="TKE_Powerpack";};
     class _xx_TKE_150rnd_62x35_magUCN {count=2;magazine="TKE_150rnd_62x35_magUCN";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class 7thFleet_Recon_Team_Leader_pack: TKE_CamelBakV27th
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_TKE_ThermScope {count=1;name="TKE_ThermScope";};
    };
    class TransportWeapons{};
  };


  class 7thFleet_Recon_Scout_AT_pack: TKE_CamelBakV27th
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines
    {
     class _xx_MRAWS_HEAT_F {count=4;magazine="MRAWS_HEAT_F";};
     class _xx_MRAWS_HE_F {count=1;magazine="MRAWS_HE_F";};
    };
    class TransportItems
    {
     class _xx_TKE_ThermScope {count=1;name="TKE_ThermScope";};
    };
    class TransportWeapons{};
  };


  class 7thFleet_Recon_Marksman_pack: TKE_CamelBakV27th
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines
    {
     class _xx_KEF_20rnd_969x51_magGTMD {count=4;magazine="TKE_20rnd_969x51_magGTUCN";};
    };
    class TransportItems
    {
     class _xx_TKE_ThermScope {count=1;name="TKE_ThermScope";};
    };
    class TransportWeapons{};
  };
  class 7thFleet_Recon_Sniper_pack: TKE_CamelBakV27th
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines
    {
     class _xx_5Rnd_127x108_Mag {count=4;magazine="5Rnd_127x108_Mag";};
    };
    class TransportItems
    {
     class _xx_TKE_ThermScope {count=1;name="TKE_ThermScope";};
    };
    class TransportWeapons{};
  };


  class 7thFleet_Recon_Demo_Specialist_pack: TKE_BackPack2UCN
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines
    {
     class _xx_APERSMine_Range_Mag {count=1;magazine="APERSMine_Range_Mag";};
     class _xx_APERSBoundingMine_Range_Mag {count=3;magazine="APERSBoundingMine_Range_Mag";};
     class _xx_ClaymoreDirectionalMine_Remote_Mag {count=2;magazine="ClaymoreDirectionalMine_Remote_Mag";};
     class _xx_DemoCharge_Remote_Mag {count=3;magazine="DemoCharge_Remote_Mag";};
     class _xx_SLAMDirectionalMine_Wire_Mag {count=2;magazine="SLAMDirectionalMine_Wire_Mag";};
    };
    class TransportItems
    {
     class _xx_MineDetector {count=1;name="MineDetector";};
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_TKE_ThermScope {count=1;name="TKE_ThermScope";};
    };
    class TransportWeapons{};
  };


  class 7thFleet_Recon_UAV_Specialist_pack: TKE_RadioPack1MR
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_TKE_ThermScope {count=1;name="TKE_ThermScope";};
    };
    class TransportWeapons{};
  };
  
  class 7thFleet_Recon_Paramedic_pack: TKE_AlicePack7thM
  {
    scope=1;
	scopearsenal = 0;
	scopecurator = 0;
    class TransportMagazines
    {
     class _xx_SmokeShellRed {count=1;magazine="TKE_SMOKE_mag_green";};
     class _xx_SmokeShellBlue {count=1;magazine="TKE_SMOKE_mag_blue";};
     class _xx_SmokeShellOrange {count=1;magazine="TKE_SMOKE_mag_orange";};
    };
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_FirstAidKit {count=10;name="FirstAidKit";};
     class _xx_TKE_ThermScope {count=1;name="TKE_ThermScope";};
    };
    class TransportWeapons{};
  };
  
  class O_Truck_03_transport_F;
  class 7thFleet_truck_HULV: O_Truck_03_transport_F
  {
	  faction = "7thFleet";
	  scope = 2;
	  displayName="HULV Transport";
	  editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
	  side = 1;
	  hiddenSelectionsTextures[] = {"\kef_vehicle_retextures\data\truck_03\kamaz_ext01_black.paa","\kef_vehicle_retextures\data\truck_03\kamaz_ext02_black.paa","\kef_vehicle_retextures\data\truck_03\kamaz_cargo_black.paa"};
      crew = "7thFleet_Trooper";
	  typicalCargo[]={"7thFleet_Trooper"};
	  textureList[] = {"KEF_Black",1};
  };
  class O_Truck_03_covered_F;
  class 7thFleet_truck_HULV_C: O_Truck_03_covered_F
  {
	  faction = "7thFleet";
	  scope = 2;
	  displayName="HULV Transport (Covered)";
	  editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
	  side = 1;
	  hiddenSelectionsTextures[] = {"\kef_vehicle_retextures\data\truck_03\kamaz_ext01_black.paa","\kef_vehicle_retextures\data\truck_03\kamaz_ext02_black.paa","\kef_vehicle_retextures\data\truck_03\kamaz_cargo_black.paa","\kef_vehicle_retextures\data\truck_03\kamaz_cover_black.paa"};
      crew = "7thFleet_Trooper";
	  typicalCargo[]={"7thFleet_Trooper"};
	  textureList[] = {"KEF_Black",1};
  };
  class O_Truck_03_ammo_F;
  class 7thFleet_truck_HULV_Ammo: O_Truck_03_ammo_F
  {
	  faction = "7thFleet";
	  scope = 2;
	  displayName="HULV Ammo";
	  editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
	  side = 1;
	  hiddenSelectionsTextures[] = {"\kef_vehicle_retextures\data\truck_03\kamaz_ext01_black.paa","\kef_vehicle_retextures\data\truck_03\kamaz_ext02_black.paa","\kef_vehicle_retextures\data\truck_03\kamaz_cargo_black.paa","\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"};
      crew = "7thFleet_Trooper";
	  typicalCargo[]={"7thFleet_Trooper"};
	  textureList[] = {"KEF_Black",1};
  };
  class O_Truck_03_fuel_F;
  class 7thFleet_truck_HULV_Fuel: O_Truck_03_fuel_F
  {
	  faction = "7thFleet";
	  scope = 2;
	  displayName="HULV Fuel";
	  editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
	  side = 1;
	  hiddenSelectionsTextures[] = {"\kef_vehicle_retextures\data\truck_03\kamaz_ext01_black.paa","\kef_vehicle_retextures\data\truck_03\kamaz_ext02_black.paa","\kef_vehicle_retextures\data\truck_03\kamaz_fuel_black.paa"};
      crew = "7thFleet_Trooper";
	  typicalCargo[]={"7thFleet_Trooper"};
	  textureList[] = {"KEF_Black",1};
  };
  class O_Truck_03_repair_F;
  class 7thFleet_truck_HULV_Repair: O_Truck_03_repair_F
  {
	  faction = "7thFleet";
	  scope = 2;
	  displayName="HULV Repair";
	  editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
	  side = 1;
	  hiddenSelectionsTextures[] = {"\kef_vehicle_retextures\data\truck_03\kamaz_ext01_black.paa","\kef_vehicle_retextures\data\truck_03\kamaz_ext02_black.paa","\kef_vehicle_retextures\data\truck_03\kamaz_ammo_black.paa"};
      crew = "7thFleet_Trooper";
	  typicalCargo[]={"7thFleet_Trooper"};
	  textureList[] = {"KEF_Black",1};
  };
  class O_Truck_03_device_F;
  class 7thFleet_truck_HULV_Device: O_Truck_03_device_F
  {
	  faction = "7thFleet";
	  scope = 2;
	  displayName="HULV (Device)";
	  editorPreview = "\kef_meta\data\flag\icon_ucn.paa";
	  side = 1;
	  hiddenSelectionsTextures[] = {"\kef_vehicle_retextures\data\truck_03\kamaz_ext01_black.paa","\kef_vehicle_retextures\data\truck_03\kamaz_ext02_black.paa","\kef_vehicle_retextures\data\truck_03\kamaz_cargo_black.paa","\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa","\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"};
      crew = "7thFleet_Trooper";
	  typicalCargo[]={"7thFleet_Trooper"};
	  textureList[] = {"KEF_Black",1};
  };
  class 7thFleet_OfficerNavy: 7thFleet_Officer
  {
	  displayName="Navy Officer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal =2;
    uniformClass="TKE_Rogue_UniformNavy_U_B";
    weapons[]={"7thFleet_TKE_UCNBPRifle_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"7thFleet_TKE_UCNBPRifle_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    magazines[]={"TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    respawnMagazines[]={"TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_BinoUCN","TKE_beretUCN_7FLT","TKE_UCMCArmour5_27FLT","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_BinoUCN","TKE_beretUCN_7FLT","TKE_UCMCArmour5_27FLT","TKE_IntegratedNVGs"};
  };
  class 7thFleet_TrooperNavy: TKE_Rogue_UniformNavyNC_inf_B
  {
	  displayName="Navy Trooper";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal =2;
    uniformClass="TKE_Rogue_UniformNavyNC_U_B";
    weapons[]={"7thFleet_TKE_UCNBPRifle_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"7thFleet_TKE_UCNBPRifle_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    magazines[]={"TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    respawnMagazines[]={"TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_BinoUCN","TKE_UCMCHelmClosedCamo7FLT","TKE_UCMCArmour3_17FLT","TKE_UCMCGlasses"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_BinoUCN","TKE_UCMCHelmClosedCamo7FLT","TKE_UCMCArmour3_17FLT","TKE_UCMCGlasses"};
  };
  class 7thFleet_MedicNavy: B_medic_F
  {
	  displayName="Navy Medic";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal =2;
    uniformClass="TKE_Rogue_UniformNavyNC_U_B";
    weapons[]={"7thFleet_TKE_UCNBPRifle_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    respawnWeapons[]={"7thFleet_TKE_UCNBPRifle_optic_Arco_blk_F","TKE_MDPistolBlack","Put","Throw"};
    magazines[]={"TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    respawnMagazines[]={"TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","Chemlight_blue","TKE_SMOKE_mag","TKE_FRAG_mag","TKE_FRAG_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_30rnd_575x45_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","TKE_MDPistol_mag","Chemlight_blue","TKE_SMOKE_mag_blue"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_BinoUCN","TKE_UCMCHelmMask_Camo7FLTM","TKE_UCMCArmour2_27FLT","TKE_IntegratedNVGs"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TKE_BinoUCN","TKE_UCMCHelmMask_Camo7FLTM","TKE_UCMCArmour2_27FLT","TKE_IntegratedNVGs"};
    backpack="7thFleet_Combat_Medic_pack";
  };
  
  

};

class CfgGroups {
    class WEST {

        class 7thFleet {
            name = "[TKE] 7th Expeditionary Fleet";

            class Infantry {
                name = "Infantry";

                class b_7thFleet_infantry_assault_squad {
                    name = "Assault Squad";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Squad_Leader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Autorifleman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper_Bullfrog";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Marksman";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Team_Leader";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Trooper_AT";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper_BPR";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Combat_Medic";
                    };
                };

                class b_7thFleet_infantry_rifle_squad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Squad_Leader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_UAV_Specialist";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper_AT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Marksman";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Team_Leader";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Ammo_Bearer";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Combat_Medic";
                    };
                };

                class b_7thFleet_infantry_weapons_squad {
                    name = "Weapons Squad";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Squad_Leader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Autorifleman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Trooper_AT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Marksman";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_AT_Specialist";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Heavy_Trooper_XLR";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Ammo_Bearer";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Combat_Medic";
                    };
                };

                class b_7thFleet_infantry_fireteam {
                    name = "Fireteam";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Team_Leader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Autorifleman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Marksman";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper_AT";
                    };
                };

                class b_7thFleet_infantry_anti_armor_team {
                    name = "Anti-armor Team";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Team_Leader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_AT_Specialist";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_AT_Specialist";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper_AT";
                    };
                };

                class b_7thFleet_infantry_anti_air_team {
                    name = "Anti-air Team";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_AA_Specialist";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_AA_Specialist";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_AA_Specialist";
                    };
                };

                class b_7thFleet_infantry_demolitions_team {
                    name = "Demolitions Team";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Team_Leader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Explosive_Specialist";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Explosive_Specialist";
                    };
                };

                class b_7thFleet_infantry_hq_section {
                    name = "Company HQ";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "7thFleet_Officer";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "7thFleet_Officer";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Squad_Leader";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Team_Leader";
                    };
                };

                class b_7thFleet_infantry_sentry {
                    name = "Sentry";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Trooper_Bullfrog";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper";
                    };
                };
                class b_7thFleet_infantry_securityteam 
                {
                    name = "Navy Security Team";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_OfficerNavy";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_TrooperNavy";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_TrooperNavy";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_MedicNavy";
                    };
                };
            };

            class SpecOps {
                name = "Special Forces";

                class b_7thFleet_specops_recon_squad {
                    name = "Raider Squad";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Recon_Team_Leader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Recon_Marksman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Recon_Scout";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Recon_Scout_AT";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Recon_UAV_Specialist";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Recon_Demo_Specialist";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Recon_Paramedic";
                    };
                };
                class b_7thFleet_specops_recon_patrol {
                    name = "Raider Patrol";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Recon_Team_Leader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Recon_Marksman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Recon_Scout_AT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Recon_Paramedic";
                    };
                };
                 class b_7thFleet_specops_recon_sniper {
                    name = "Raider Sniper Team";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Recon_Sniper";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Recon_Shooter";
                    };
                };
               class b_7thFleet_specops_UCIA_squad {
                    name = "UCIA Assault Squad";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_UCIA_Team_Leader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_UCIA_Marksman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_UCIA_Scout";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_UCIA_Scout_AT";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_UCIA_UAV_Specialist";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_UCIA_Demo_Specialist";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_UCIA_Paramedic";
                    };
                };

                class b_7thFleet_specops_UCIA_patrol {
                    name = "UCIA Assault Team";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_UCIA_Team_Leader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_UCIA_Marksman";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_UCIA_Scout_AT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_UCIA_Paramedic";
                    };
                };
                class b_7thFleet_specops_UCIA_sniper {
                    name = "UCIA Sniper Team";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_UCIA_Sniper";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_UCIA_Shooter";
                    };
                };
            };

            class Motorized {
                name = "Motorized Infantry";

                class b_7thFleet_motorized_mrap_patrol {
                    name = "MRAP Patrol";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_MRAP_GMG";
                    };
                    class Unit1 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_MRAP_HMG";
                    };
                };

                class b_7thFleet_motorized_motorized_fireteam {
                    name = "Motorized Fireteam";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Team_Leader";
                    };
                    class Unit1 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_MRAP";
                    };
                    class Unit2 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Autorifleman";
                    };
                    class Unit3 {
                        position[] = {10,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Marksman";
                    };
                    class Unit4 {
                        position[] = {-10,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper_AT";
                    };
                };

                class b_7thFleet_motorized_motorized_anti_armor_team {
                    name = "Motorized Anti-Armor Team";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Team_Leader";
                    };
                    class Unit1 {
                        position[] = {5,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_MRAP";
                    };
                    class Unit2 {
                        position[] = {-5,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_AT_Specialist";
                    };
                    class Unit3 {
                        position[] = {10,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_AT_Specialist";
                    };
                    class Unit4 {
                        position[] = {-10,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper_AT";
                    };
                };

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

                class b_7thFleet_mechanized_mechanized_assault_squad {
                    name = "Mechanized Assault Squad";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Squad_Leader";
                    };
                    class Unit1 {
                        position[] = {6,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_MSE_3";
                    };
                    class Unit2 {
                        position[] = {-6,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Autorifleman";
                    };
                    class Unit3 {
                        position[] = {11,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper_Bullfrog";
                    };
                    class Unit4 {
                        position[] = {-11,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Marksman";
                    };
                    class Unit5 {
                        position[] = {16,-25,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Team_Leader";
                    };
                    class Unit6 {
                        position[] = {-16,-25,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Trooper_AT";
                    };
                    class Unit7 {
                        position[] = {21,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper_BPR";
                    };
                    class Unit8 {
                        position[] = {-21,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Combat_Medic";
                    };
                };

                class b_7thFleet_mechanized_mechanized_rifle_squad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Squad_Leader";
                    };
                    class Unit1 {
                        position[] = {6,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_MSE_3";
                    };
                    class Unit2 {
                        position[] = {-6,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_UAV_Specialist";
                    };
                    class Unit3 {
                        position[] = {11,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper_AT";
                    };
                    class Unit4 {
                        position[] = {-11,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Marksman";
                    };
                    class Unit5 {
                        position[] = {16,-25,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Team_Leader";
                    };
                    class Unit6 {
                        position[] = {-16,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper";
                    };
                    class Unit7 {
                        position[] = {21,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Ammo_Bearer";
                    };
                    class Unit8 {
                        position[] = {-21,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Combat_Medic";
                    };
                };

                class b_7thFleet_mechanized_mechanized_weapons_squad {
                    name = "Mechanized Weapons Squad";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Squad_Leader";
                    };
                    class Unit1 {
                        position[] = {6,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_MSE_3";
                    };
                    class Unit2 {
                        position[] = {-6,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Autorifleman";
                    };
                    class Unit3 {
                        position[] = {11,-20,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Trooper_AT";
                    };
                    class Unit4 {
                        position[] = {-11,-20,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Marksman";
                    };
                    class Unit5 {
                        position[] = {16,-25,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_AT_Specialist";
                    };
                    class Unit6 {
                        position[] = {-16,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Heavy_Trooper_XLR";
                    };
                    class Unit7 {
                        position[] = {21,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Ammo_Bearer";
                    };
                    class Unit8 {
                        position[] = {-21,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Combat_Medic";
                    };
                };

                class b_7thFleet_mechanized_mechanized_response_team {
                    name = "Mechanized Response Team";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Team_Leader";
                    };
                    class Unit1 {
                        position[] = {6,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_MSE_3_Unarmed";
                    };
                    class Unit2 {
                        position[] = {-6,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_Trooper";
                    };
                    class Unit3 {
                        position[] = {11,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper";
                    };
                    class Unit4 {
                        position[] = {-11,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Engineer";
                    };
                    class Unit5 {
                        position[] = {16,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper_AT";
                    };
                    class Unit6 {
                        position[] = {-16,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Combat_Medic";
                    };
                };

                class b_7thFleet_mechanized_mechanized_anti_armor_team {
                    name = "Mechanized Anti-armor Team";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_Team_Leader";
                    };
                    class Unit1 {
                        position[] = {6,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_MSE_3";
                    };
                    class Unit2 {
                        position[] = {-6,-15,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "7thFleet_AT_Specialist";
                    };
                    class Unit3 {
                        position[] = {11,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_AT_Specialist";
                    };
                    class Unit4 {
                        position[] = {-11,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper_AT";
                    };
                    class Unit5 {
                        position[] = {16,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_Trooper_AT";
                    };
                };

            };

            class Armored {
                name = "Armor";

                class b_7thFleet_armored_mbt_platoon {
                    name = "MBT Platoon";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_MBT_52";
                    };
                    class Unit1 {
                        position[] = {10,-17,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_MBT_52";
                    };
                    class Unit2 {
                        position[] = {-10,-17,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_MBT_52";
                    };
                    class Unit3 {
                        position[] = {20,-27,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_MBT_52";
                    };
                };

                class b_7thFleet_armored_mbt_section {
                    name = "MBT Section";
                    side = 1;
                    faction = "7thFleet";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "7thFleet_MBT_52";
                    };
                    class Unit1 {
                        position[] = {10,-17,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "7thFleet_MBT_52";
                    };
                };

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };

        };

    };
};