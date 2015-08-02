#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define VSoft		0
#define VArmor		1
#define VAir		2

#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

class CfgPatches
{
	class bk_weapons_pack
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAWeapons","CAWeapons_E","CAWeapons_BAF"};
		version = 0.1;
	};
};

class cfgAmmo{
	
	class MissileBase;
	class M_NLAW_AT;

	class BK_NLAW_AT : M_NLAW_AT
	{
		ace_hit = 550;
		hit = 500;
	};

};

class CfgMagazines {
	class Default;
	class CA_Magazine : Default {};
	class VehicleMagazine : CA_Magazine {};
	class CA_LauncherMagazine;
	class NLAW;
	class 5Rnd_86x70_L115A1;

	class BK_NLAW : NLAW
	{
		ammo = "BK_NLAW_AT";
	};
	class BK_10Rnd_338_T5000 : 5Rnd_86x70_L115A1
	{
		scope = 2;
		displayname = "10Rnd .338 Lapua Magazine";
		count = 10;
	};
};

class cfgWeapons {
	class Default;
	class PistolCore;
	class RifleCore;
	class MGunCore;
	class Rifle;
	class Launcher;
	class BAF_NLAW_Launcher;
	class BAF_LRR_scoped;
	class DMR;

	class BK_NLAW_Launcher : BAF_NLAW_Launcher
	{
 		displayname = "MBT LAW";
 		magazines[] = {"BK_NLAW"};
	};
	class BK_T5000_338 : BAF_LRR_scoped
	{
		scope = 2;
		model = "\bk_weapons_pack\BK_T5000.p3d";
		picture = "";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_ca.paa";
		displayName = "ORCIS T-5000 .338 lapua model";
		magazines[] = {"BK_10Rnd_338_T5000"};
		class Library
		{
			libTextDesc = "";
		};
		descriptionShort = "";
	};
	class BK_M14EBR_RI : DMR
	{
		scope = 2;
		model = "\bk_weapons_pack\BK_M14EBR.p3d";
		picture = "";
		displayName = "M14 EBR-RI";
		class Library
		{
			libTextDesc = "";
		};
		descriptionShort = "";
	};
	class BK_M39EMR : DMR
	{
		scope = 2;
		model = "\bk_weapons_pack\BK_M39EMR.p3d";
		picture = "";
		displayName = "M39 EMR";
		class Library
		{
			libTextDesc = "";
		};
		descriptionShort = "";
	};
};


class CfgVehicles {

	class ReammoBox; //Extended

	class BK_US_weaponsbox  : ReammoBox {
		scope = 2;
		accuracy = 1000;
		displayName = "BK US weapons";
		model = "\ca\weapons\AmmoBoxes\RUBasicAmmo.p3d";
		
		class TransportMagazines  {
			class _xx_Stanag  {
				magazine = "30Rnd_556x45_Stanag";
				count = 100;
			};
			class _xx_DMR_Mag  {
				magazine = "20Rnd_762x51_DMR";
				count = 50;
			};
			class _xx_HandGrenade_West  {
				magazine = "HandGrenade_West";
				count = 50;
			};
			class _xx_SmokeShellRed  {
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_SmokeShellGreen  {
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShellYellow  {
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_SmokeShell  {
				magazine = "SmokeShell";
				count = 5;
			};
		};
		
		class TransportWeapons  {
			class _xx_M16A4  {
				weapon = "M16A4";
				count = 5;
			};
			class _xx_M14EBR
			{
				weapon = "BK_M14EBR_RI";
				count = 5;
			};
			class _xx_M39EMR
			{
				weapon = "BK_M39EMR";
				count = 5;
			};
		};
	};
}: