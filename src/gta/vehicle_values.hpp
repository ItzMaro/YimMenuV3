#pragma once

#include "vehicles.hpp"

enum SeatPositions
{
	SEAT_DRIVER        = -1,
	SEAT_PASSENGER     = 0,
	SEAT_BACKDRIVER    = 1,
	SEAT_BACKPASSENGER = 2
};

enum WheelTypes
{
	WHEEL_TYPE_STOCK = -1,
	WHEEL_TYPE_SPORT,
	WHEEL_TYPE_MUSCLE,
	WHEEL_TYPE_LOWRIDER,
	WHEEL_TYPE_SUV,
	WHEEL_TYPE_OFFROAD,
	WHEEL_TYPE_TUNER,
	WHEEL_TYPE_BIKEWHEELS,
	WHEEL_TYPE_HIGHEND,
	WHEEL_TYPE_BENNYS_ORIGINAL,
	WHEEL_TYPE_BENNYS_BESPOKE,
	WHEEL_TYPE_OPEN_WHEEL,
	WHEEL_TYPE_STREET,
	WHEEL_TYPE_TRACK
};

enum VehicleWeapons
{
	VEHICLE_WEAPON_AKULA_BARRAGE         = 0x880D14F2,
	VEHICLE_WEAPON_AKULA_MINIGUN         = 0x19B95679,
	VEHICLE_WEAPON_AKULA_MISSILE         = 0x7CBE304C,
	VEHICLE_WEAPON_AKULA_TURRET_DUAL     = 0x1C6D0842,
	VEHICLE_WEAPON_AKULA_TURRET_SINGLE   = 0xB5B3B9AD,
	VEHICLE_WEAPON_APC_CANNON            = 0x138F71D8,
	VEHICLE_WEAPON_APC_MG                = 0xB56E4E4,
	VEHICLE_WEAPON_APC_MISSILE           = 0x44A56189,
	VEHICLE_WEAPON_ARDENT_MG             = 0xC44E4341,
	VEHICLE_WEAPON_AVENGER_CANNON        = 0x9867203B,
	VEHICLE_WEAPON_BARRAGE_REAR_GL       = 0xA44C228D,
	VEHICLE_WEAPON_BARRAGE_REAR_MG       = 0x47894765,
	VEHICLE_WEAPON_BARRAGE_REAR_MINIGUN  = 0x1F545F65,
	VEHICLE_WEAPON_BARRAGE_TOP_MG        = 0xF7498994,
	VEHICLE_WEAPON_BARRAGE_TOP_MINIGUN   = 0x3B9EBD01,
	VEHICLE_WEAPON_BOMBUSHKA_CANNON      = 0xD8443A59,
	VEHICLE_WEAPON_BOMBUSHKA_DUALMG      = 0x2C2B2D58,
	VEHICLE_WEAPON_CANNON_BLAZER         = 0xEBF9FF3E,
	VEHICLE_WEAPON_CARACARA_MG           = 0x6C516BA8,
	VEHICLE_WEAPON_CARACARA_MINIGUN      = 0x4FCBDC7B,
	VEHICLE_WEAPON_CHERNO_MISSILE        = 0xA247D03E,
	VEHICLE_WEAPON_COMET_MG              = 0xEAA835F3,
	VEHICLE_WEAPON_DELUXO_MG             = 0x9AFF6376,
	VEHICLE_WEAPON_DELUXO_MISSILE        = 0xB4F96934,
	VEHICLE_WEAPON_DOGFIGHTER_MG         = 0x5F1834E2,
	VEHICLE_WEAPON_DOGFIGHTER_MISSILE    = 0xCA46F87D,
	VEHICLE_WEAPON_DUNE_GRENADELAUNCHER  = 0xA0FC710D,
	VEHICLE_WEAPON_DUNE_MG               = 0xD11507CF,
	VEHICLE_WEAPON_DUNE_MINIGUN          = 0x54672A71,
	VEHICLE_WEAPON_ENEMY_LASER           = 0x5D6660AB,
	VEHICLE_WEAPON_HACKER_MISSILE        = 0x766FF7B1,
	VEHICLE_WEAPON_HACKER_MISSILE_HOMING = 0x77EACF96,
	VEHICLE_WEAPON_HALFTRACK_DUALMG      = 0x4F6384FB,
	VEHICLE_WEAPON_HALFTRACK_QUADMG      = 0x491B2E74,
	VEHICLE_WEAPON_HAVOK_MINIGUN         = 0x32FE9EEF,
	VEHICLE_WEAPON_HUNTER_BARRAGE        = 0x2ED14835,
	VEHICLE_WEAPON_HUNTER_CANNON         = 0x2A00AB1A,
	VEHICLE_WEAPON_HUNTER_MG             = 0x42BA80A7,
	VEHICLE_WEAPON_HUNTER_MISSILE        = 0x924A5F5,
	VEHICLE_WEAPON_INSURGENT_MINIGUN     = 0xAA886DF8,
	VEHICLE_WEAPON_KHANJALI_CANNON       = 0x1E3ACFA0,
	VEHICLE_WEAPON_KHANJALI_CANNON_HEAVY = 0x838B716D,
	VEHICLE_WEAPON_KHANJALI_GL           = 0x178605E2,
	VEHICLE_WEAPON_KHANJALI_MG           = 0x2A6F8E1D,
	VEHICLE_WEAPON_MENACER_MG            = 0xDFCAF8A4,
	VEHICLE_WEAPON_MICROLIGHT_MG         = 0xC4E0216C,
	VEHICLE_WEAPON_MOBILEOPS_CANNON      = 0xE53E69A4,
	VEHICLE_WEAPON_MOGUL_DUALNOSE        = 0xE5F3AE2F,
	VEHICLE_WEAPON_MOGUL_DUALTURRET      = 0xBA277C01,
	VEHICLE_WEAPON_MOGUL_NOSE            = 0xF6189F4A,
	VEHICLE_WEAPON_MOGUL_TURRET          = 0xE2FD135E,
	VEHICLE_WEAPON_MULE4_MG              = 0x84558727,
	VEHICLE_WEAPON_MULE4_MISSILE         = 0x4772F84B,
	VEHICLE_WEAPON_MULE4_TURRET_GL       = 0xDD124A65,
	VEHICLE_WEAPON_NIGHTSHARK_MG         = 0xA61AC574,
	VEHICLE_WEAPON_NOSE_TURRET_VALKYRIE  = 0x4170E491,
	VEHICLE_WEAPON_OPPRESSOR_MG          = 0xD9322EDD,
	VEHICLE_WEAPON_OPPRESSOR_MISSILE     = 0x8BB7C63E,
	VEHICLE_WEAPON_OPPRESSOR2_CANNON     = 0xD64D3469,
	VEHICLE_WEAPON_OPPRESSOR2_MG         = 0xE2451DD6,
	VEHICLE_WEAPON_OPPRESSOR2_MISSILE    = 0x753A78F1,
	VEHICLE_WEAPON_PLANE_ROCKET          = 0xCF0896E0,
	VEHICLE_WEAPON_PLAYER_BUZZARD        = 0x46B89C8E,
	VEHICLE_WEAPON_PLAYER_LAZER          = 0xE2822A29,
	VEHICLE_WEAPON_PLAYER_SAVAGE         = 0x61A31349,
	VEHICLE_WEAPON_POUNDER2_BARRAGE      = 0x926B8CE4,
	VEHICLE_WEAPON_POUNDER2_GL           = 0x9318FF16,
	VEHICLE_WEAPON_POUNDER2_MINI         = 0x86E6F84E,
	VEHICLE_WEAPON_POUNDER2_MISSILE      = 0x9A8EA9A,
	VEHICLE_WEAPON_RADAR                 = 0xD276317E,
	VEHICLE_WEAPON_REVOLTER_MG           = 0xBD5E626A,
	VEHICLE_WEAPON_ROGUE_CANNON          = 0xE72ABBC2,
	VEHICLE_WEAPON_ROGUE_MG              = 0x97273CD,
	VEHICLE_WEAPON_ROGUE_MISSILE         = 0x6C88E47D,
	VEHICLE_WEAPON_RUINER_BULLET         = 0x2FCC0F9,
	VEHICLE_WEAPON_RUINER_ROCKET         = 0x50DC6AB,
	VEHICLE_WEAPON_SAVESTRA_MG           = 0xEB41E84E,
	VEHICLE_WEAPON_SCRAMJET_MG           = 0xDCE6112,
	VEHICLE_WEAPON_SCRAMJET_MISSILE      = 0xBCE908DB,
	VEHICLE_WEAPON_SEABREEZE_MG          = 0x51B8D4E8,
	VEHICLE_WEAPON_SEARCHLIGHT           = 0xCDAC517D,
	VEHICLE_WEAPON_SPACE_ROCKET          = 0xF8A3939F,
	VEHICLE_WEAPON_SPEEDO4_MG            = 0xC7FCF93C,
	VEHICLE_WEAPON_SPEEDO4_TURRET_MG     = 0xD6561141,
	VEHICLE_WEAPON_SPEEDO4_TURRET_MINI   = 0x9EFE3EBA,
	VEHICLE_WEAPON_STRIKEFORCE_BARRAGE   = 0x39BC6683,
	VEHICLE_WEAPON_STRIKEFORCE_CANNON    = 0x38F41EAB,
	VEHICLE_WEAPON_STRIKEFORCE_MISSILE   = 0x1EF01D8A,
	VEHICLE_WEAPON_SUBCAR_MG             = 0x461DDDB0,
	VEHICLE_WEAPON_SUBCAR_MISSILE        = 0xD4897C0E,
	VEHICLE_WEAPON_SUBCAR_TORPEDO        = 0xE783C3BA,
	VEHICLE_WEAPON_TAMPA_DUALMINIGUN     = 0x67FDCFE4,
	VEHICLE_WEAPON_TAMPA_FIXEDMINIGUN    = 0xDAC57AAD,
	VEHICLE_WEAPON_TAMPA_MISSILE         = 0x9E5840A2,
	VEHICLE_WEAPON_TAMPA_MORTAR          = 0x3C83C410,
	VEHICLE_WEAPON_TANK                  = 0x73F7C04B,
	VEHICLE_WEAPON_TECHNICAL_MINIGUN     = 0xDB894608,
	VEHICLE_WEAPON_THRUSTER_MG           = 0x652E1D9D,
	VEHICLE_WEAPON_THRUSTER_MISSILE      = 0x4635DD15,
	VEHICLE_WEAPON_TRAILER_DUALAA        = 0x808C4D4C,
	VEHICLE_WEAPON_TRAILER_MISSILE       = 0x145599F7,
	VEHICLE_WEAPON_TRAILER_QUADMG        = 0x4711B02C,
	VEHICLE_WEAPON_TULA_DUALMG           = 0xB0D15C0B,
	VEHICLE_WEAPON_TULA_MG               = 0x488BD081,
	VEHICLE_WEAPON_TULA_MINIGUN          = 0x1670C4A8,
	VEHICLE_WEAPON_TULA_NOSEMG           = 0x419D8E15,
	VEHICLE_WEAPON_TURRET_BOXVILLE       = 0xB54F4918,
	VEHICLE_WEAPON_TURRET_INSURGENT      = 0x44DB5498,
	VEHICLE_WEAPON_TURRET_LIMO           = 0x2B796481,
	VEHICLE_WEAPON_TURRET_TECHNICAL      = 0x7FD2EA0B,
	VEHICLE_WEAPON_TURRET_VALKYRIE       = 0xA4513E35,
	VEHICLE_WEAPON_VIGILANTE_MG          = 0xF4077EE7,
	VEHICLE_WEAPON_VIGILANTE_MISSILE     = 0x504DA665,
	VEHICLE_WEAPON_VISERIS_MG            = 0x87A02E06,
	VEHICLE_WEAPON_VOLATOL_DUALMG        = 0x4497AC40,
	VEHICLE_WEAPON_WATER_CANNON          = 0x67D18297
};

enum TunerTypes
{
	WHEEL_TUNER_STOCK = -1,
	WHEEL_TUNER_COSMO,
	WHEEL_TUNER_SUPERMESH,
	WHEEL_TUNER_OUTSIDER,
	WHEEL_TUNER_ROLLAS,
	WHEEL_TUNER_DRIFFMEISTER,
	WHEEL_TUNER_SLICER,
	WHEEL_TUNER_ELQUATRO,
	WHEEL_TUNER_DUBBED,
	WHEEL_TUNER_FIVESTAR,
	WHEEL_TUNER_SLIDEWAYS,
	WHEEL_TUNER_APEX,
	WHEEL_TUNER_STANCEDEG,
	WHEEL_TUNER_COUNTERSTEER,
	WHEEL_TUNER_ENDOV1,
	WHEEL_TUNER_ENDOV2DISH,
	WHEEL_TUNER_GUPPEZ,
	WHEEL_TUNER_CHOKADORI,
	WHEEL_TUNER_CHICANE,
	WHEEL_TUNER_SAISOKU,
	WHEEL_TUNER_DISHEDEIGHT,
	WHEEL_TUNER_FUJIWARA,
	WHEEL_TUNER_ZOKUSHA,
	WHEEL_TUNER_BATTLEVLLL,
	WHEEL_TUNER_RALLYMASTER
};

enum HighEndWheels
{
	WHEEL_HIGHEND_STOCK = -1,
	WHEEL_HIGHEND_SHADOW,
	WHEEL_HIGHEND_HYPHER,
	WHEEL_HIGHEND_BLADE,
	WHEEL_HIGHEND_DIAMOND,
	WHEEL_HIGHEND_SUPAGEE,
	WHEEL_HIGHEND_CHROMATICZ,
	WHEEL_HIGHEND_MERCIECHLIP,
	WHEEL_HIGHEND_OBEYRS,
	WHEEL_HIGHEND_GTCHROME,
	WHEEL_HIGHEND_CHEETAHR,
	WHEEL_HIGHEND_SOLAR,
	WHEEL_HIGHEND_SPLITTEN,
	WHEEL_HIGHEND_DASHVIP,
	WHEEL_HIGHEND_LOZSPEEDTEN,
	WHEEL_HIGHEND_CARBONINFERNO,
	WHEEL_HIGHEND_CARBONSHADOW,
	WHEEL_HIGHEND_CARBONZ,
	WHEEL_HIGHEND_CARBONSOLAR,
	WHEEL_HIGHEND_CARBONCHEETAHR,
	WHEEL_HIGHEND_CARBONSRACER
};

enum LowriderWheels
{
	WHEEL_LOWRIDER_STOCK = -1,
	WHEEL_LOWRIDER_FLARE,
	WHEEL_LOWRIDER_WIRED,
	WHEEL_LOWRIDER_TRIPLEGOLDS,
	WHEEL_LOWRIDER_BIGWORM,
	WHEEL_LOWRIDER_SEVENFIVES,
	WHEEL_LOWRIDER_SPLITSIX,
	WHEEL_LOWRIDER_FRESHMESH,
	WHEEL_LOWRIDER_LEADSLED,
	WHEEL_LOWRIDER_TURBINE,
	WHEEL_LOWRIDER_SUPERFIN,
	WHEEL_LOWRIDER_CLASSICROD,
	WHEEL_LOWRIDER_DOLLAR,
	WHEEL_LOWRIDER_DUKES,
	WHEEL_LOWRIDER_LOWFIVE,
	WHEEL_LOWRIDER_GOOCH,
};

enum MuscleWheels
{
	WHEEL_MUSCLE_STOCK = -1,
	WHEEL_MUSCLE_CLASSICFIVE,
	WHEEL_MUSCLE_DUKES,
	WHEEL_MUSCLE_MUSCLEFREAK,
	WHEEL_MUSCLE_KRACKA,
	WHEEL_MUSCLE_AZREA,
	WHEEL_MUSCLE_MECHA,
	WHEEL_MUSCLE_BLACKTOP,
	WHEEL_MUSCLE_DRAGSPL,
	WHEEL_MUSCLE_REVOLVER,
	WHEEL_MUSCLE_CLASSICROD,
	WHEEL_MUSCLE_FAIRLRE,
	WHEEL_MUSCLE_SPOONER,
	WHEEL_MUSCLE_FIVESTAR,
	WHEEL_MUSCLE_OLDSCHOOL,
	WHEEL_MUSCLE_ELJEFE,
	WHEEL_MUSCLE_DODMAN,
	WHEEL_MUSCLE_SIXGUN,
	WHEEL_MUSCLE_MERCENARY
};

enum OffroadWheels
{
	WHEEL_OFFROAD_STOCK = -1,
	WHEEL_OFFROAD_RAIDER,
	WHEEL_OFFROAD_MUDSLINGER,
	WHEEL_OFFROAD_NEVIS,
	WHEEL_OFFROAD_CAIRNGORM,
	WHEEL_OFFROAD_AMAZON,
	WHEEL_OFFROAD_CHALLENGER,
	WHEEL_OFFROAD_DUNEBASHER,
	WHEEL_OFFROAD_FIVESTAR,
	WHEEL_OFFROAD_ROCKCRAWLER,
	WHEEL_OFFROAD_MILSPECSTEELIE
};

enum SportWheels
{
	WHEEL_SPORT_STOCK = -1,
	WHEEL_SPORT_INFERNO,
	WHEEL_SPORT_DEEPFIVE,
	WHEEL_SPORT_LOZSPEED,
	WHEEL_SPORT_DIAMONDCUT,
	WHEEL_SPORT_CHRONO,
	WHEEL_SPORT_FEROCCIRR,
	WHEEL_SPORT_FIFTYNINE,
	WHEEL_SPORT_MERCIE,
	WHEEL_SPORT_SYNTHETICZ,
	WHEEL_SPORT_ORGANICTYPED,
	WHEEL_SPORT_ENDOV1,
	WHEEL_SPORT_DUPER7,
	WHEEL_SPORT_UZER,
	WHEEL_SPORT_GROUNDRIDE,
	WHEEL_SPORT_SRACER,
	WHEEL_SPORT_VENUM,
	WHEEL_SPORT_COSMO,
	WHEEL_SPORT_DASHVIP,
	WHEEL_SPORT_ICEKID,
	WHEEL_SPORT_RUFFWELD,
	WHEEL_SPORT_WANGENMASTER,
	WHEEL_SPORT_SUPERFIVE,
	WHEEL_SPORT_ENDOV2,
	WHEEL_SPORT_SLITSIX
};

enum SUVWheels
{
	WHEEL_SUV_STOCK = -1,
	WHEEL_SUV_VIP,
	WHEEL_SUV_BENEFACTOR,
	WHEEL_SUV_COSMO,
	WHEEL_SUV_BIPPU,
	WHEEL_SUV_ROYALSIX,
	WHEEL_SUV_FAGORME,
	WHEEL_SUV_DELUXE,
	WHEEL_SUV_ICEDOUT,
	WHEEL_SUV_COGNSCENTI,
	WHEEL_SUV_LOZSPEEDTEN,
	WHEEL_SUV_SUPERNOVA,
	WHEEL_SUV_OBEYRS,
	WHEEL_SUV_LOZSPEEDBALLER,
	WHEEL_SUV_EXTRAVAGANZO,
	WHEEL_SUV_SPLITSIX,
	WHEEL_SUV_EMPOWERED,
	WHEEL_SUV_SUNRISE,
	WHEEL_SUV_DASHVIP,
	WHEEL_SUV_CUTTER
};

enum BikeWheels
{
	WHEEL_BIKE_STOCK = -1,
	WHEEL_BIKE_SPEEDWAY,
	WHEEL_BIKE_STREETSPECIAL,
	WHEEL_BIKE_RACER,
	WHEEL_BIKE_TRACKSTAR,
	WHEEL_BIKE_OVERLORD,
	WHEEL_BIKE_TRIDENT,
	WHEEL_BIKE_TRIPLETHREAT,
	WHEEL_BIKE_STILLETO,
	WHEEL_BIKE_WIRES,
	WHEEL_BIKE_BOBBER,
	WHEEL_BIKE_SOLIDUS,
	WHEEL_BIKE_ICESHIELD,
	WHEEL_BIKE_LOOPS
};

enum VehicleModType
{
	MOD_SPOILERS,
	MOD_FRONTBUMPER,
	MOD_REARBUMPER,
	MOD_SIDESKIRT,
	MOD_EXHAUST,
	MOD_FRAME,
	MOD_GRILLE,
	MOD_HOOD,
	MOD_FENDER,
	MOD_RIGHTFENDER,
	MOD_ROOF,
	MOD_ENGINE,
	MOD_BRAKES,
	MOD_TRANSMISSION,
	MOD_HORNS,
	MOD_SUSPENSION,
	MOD_ARMOR,
	MOD_NITROUS      = 17,
	MOD_TURBO        = 18,
	MOD_SUBWOOFER    = 19,
	MOD_TYRE_SMOKE   = 20,
	MOD_HYDRAULICS   = 21,
	MOD_XENON_LIGHTS = 22,
	MOD_FRONTWHEEL   = 23,
	MOD_REARWHEEL,
	MOD_PLATEHOLDER,
	MOD_VANITYPLATES,
	MOD_TRIMDESIGN,
	MOD_ORNAMENTS,
	MOD_DASHBOARD,
	MOD_DIALDESIGN,
	MOD_DOORSPEAKERS,
	MOD_SEATS,
	MOD_STEERINGWHEELS,
	MOD_COLUMNSHIFTERLEVERS,
	MOD_PLAQUES,
	MOD_SPEAKERS,
	MOD_TRUNK,
	MOD_HYDRO,
	MOD_ENGINEBLOCK,
	MOD_AIRFILTER,
	MOD_STRUTS,
	MOD_ARCHCOVER,
	MOD_AERIALS,
	MOD_TRIM,
	MOD_TANK,
	MOD_WINDOWS,
	MOD_DOORS,
	MOD_LIVERY,
	MOD_LIGHTBAR,
};

enum CustomVehicleModType
{
	MOD_MODEL_HASH = -100,

	MOD_WHEEL_TYPE  = -101,
	MOD_PLATE_STYLE = -102,
	MOD_WINDOW_TINT = -103,

	MOD_FRONTWHEEL_VAR = -104,
	MOD_REARWHEEL_VAR  = -105,

	MOD_NEON_FRONT_ON  = -106,
	MOD_NEON_BACK_ON   = -107,
	MOD_NEON_LEFT_ON   = -108,
	MOD_NEON_RIGHT_ON  = -109,
	MOD_TIRE_CAN_BURST = -110,
	MOD_DRIFT_TIRE     = -111,

	MOD_PRIMARY_COL     = -112,
	MOD_SECONDARY_COL   = -113,
	MOD_PEARLESCENT_COL = -114,
	MOD_WHEEL_COL       = -115,
	MOD_INTERIOR_COL    = -116,
	MOD_DASHBOARD_COL   = -117,
	MOD_XENON_COL       = -118,

	MOD_PRIMARY_COL_R = -119,
	MOD_PRIMARY_COL_G = -120,
	MOD_PRIMARY_COL_B = -121,

	MOD_SECONDARY_COL_R = -122,
	MOD_SECONDARY_COL_G = -123,
	MOD_SECONDARY_COL_B = -124,

	MOD_TIRESMOKE_COL_R = -125,
	MOD_TIRESMOKE_COL_G = -126,
	MOD_TIRESMOKE_COL_B = -127,

	MOD_NEON_COL_R = -128,
	MOD_NEON_COL_G = -129,
	MOD_NEON_COL_B = -130,

	MOD_PRIMARY_CUSTOM   = -131,
	MOD_SECONDARY_CUSTOM = -132,

	MOD_EXTRA_1  = -201,
	MOD_EXTRA_2  = -202,
	MOD_EXTRA_3  = -203,
	MOD_EXTRA_4  = -204,
	MOD_EXTRA_5  = -205,
	MOD_EXTRA_6  = -206,
	MOD_EXTRA_7  = -207,
	MOD_EXTRA_8  = -208,
	MOD_EXTRA_9  = -209,
	MOD_EXTRA_10 = -210,
	MOD_EXTRA_11 = -211,
	MOD_EXTRA_12 = -212,
	MOD_EXTRA_13 = -213,
	MOD_EXTRA_14 = -214,

	MOD_HAS_CLAN_LOGO = -215
};


static const char* mod_names[] = {"MOD_SPOILERS", "MOD_FRONTBUMPER", "MOD_REARBUMPER", "MOD_SIDESKIRT", "MOD_EXHAUST", "MOD_FRAME", "MOD_GRILLE", "MOD_HOOD", "MOD_FENDER", "MOD_RIGHTFENDER", "MOD_ROOF", "MOD_ENGINE", "MOD_BRAKES", "MOD_TRANSMISSION", "MOD_HORNS", "MOD_SUSPENSION", "MOD_ARMOR", "", "MOD_TURBO", "", "MOD_TIRESMOKE", "", "MOD_XENONHEADLIGHTS", "MOD_FRONTWHEEL", "MOD_REARWHEEL", "MOD_PLATEHOLDER", "MOD_VANITYPLATES", "MOD_TRIMDESIGN", "MOD_ORNAMENTS", "MOD_DASHBOARD", "MOD_DIALDESIGN", "MOD_DOORSPEAKERS", "MOD_SEATS", "MOD_STEERINGWHEELS", "MOD_COLUMNSHIFTERLEVERS", "MOD_PLAQUES", "MOD_SPEAKERS", "MOD_TRUNK", "MOD_HYDRAULICS", "MOD_ENGINEBLOCK", "MOD_AIRFILTER", "MOD_STRUTS", "MOD_ARCHCOVER", "MOD_AERIALS", "MOD_TRIM", "MOD_TANK", "MOD_WINDOWS", "", "MOD_LIVERY"};

enum VehicleModHorns
{
	HORN_STOCK = -1,
	HORN_TRUCK,
	HORN_POLICE,
	HORN_CLOWN,
	HORN_MUSICAL1,
	HORN_MUSICAL2,
	HORN_MUSICAL3,
	HORN_MUSICAL4,
	HORN_MUSICAL5,
	HORN_SADTROMBONE,
	HORN_CLASSICAL1,
	HORN_CLASSICAL2,
	HORN_CLASSICAL3,
	HORN_CLASSICAL4,
	HORN_CLASSICAL5,
	HORN_CLASSICAL6,
	HORN_CLASSICAL7,
	HORN_SCALEDO,
	HORN_SCALERE,
	HORN_SCALEMI,
	HORN_SCALEFA,
	HORN_SCALESOL,
	HORN_SCALELA,
	HORN_SCALETI,
	HORN_SCALEDO_HIGH,
	HORN_JAZZ1,
	HORN_JAZZ2,
	HORN_JAZZ3,
	HORN_JAZZLOOP,
	HORN_STARSPANGBAN1,
	HORN_STARSPANGBAN2,
	HORN_STARSPANGBAN3,
	HORN_STARSPANGBAN4,
	HORN_CLASSICAL_LOOP,
	HORN_CLASSICAL,
	HORN_CLASSICAL_LOOP2,
	HORN_CLASSICAL_HORN_LOOP,
	HORN_CLASSICAL_HORN_LOOP2,
	HORN_CLASSICAL_HORN_LOOP3,
	HORN_HALLOWEEN_LOOP,
	HORN_HALLOWEEN,
	HORN_HALLOWEEN2_LOOP,
	HORN_HALLOWEEN2,
	HORN_SANANDREAS_LOOP,
	HORN_SANANDREAS,
	HORN_LIBERTYCITY_LOOP,
	HORN_LIBERTYCITY,
	HORN_XMAS,
	HORN_XMAS_BACKGROUND,
	HORN_XMAS2,
	HORN_XMAS2_BACKGROUND,
	HORN_XMAS3,
	HORN_XMAS3_BACKGROUND,
	HORN_LOW_LONG,
	HORN_LOW_SHORT,
	HORN_MID_LONG,
	HORN_MID_SHORT,
	HORN_HIGH_LONG,
	HORN_HIGH_SHORT
};

enum VehicleAddonLevel
{
	MOD_INDEX_OFF = -1,
	MOD_INDEX_ONE,//To determine mod index, look at the mod menu in LSC, the first item is MOD_INDEX_ONE. Count down to the item you want. Stock counts as OFF.
	MOD_INDEX_TWO,
	MOD_INDEX_THREE,
	MOD_INDEX_FOUR,
	MOD_INDEX_FIVE,
	MOD_INDEX_SIX,
	MOD_INDEX_SEVEN,
	MOD_INDEX_EIGHT,
	MOD_INDEX_NINE
};

enum NeonLightLocations
{
	NEON_LEFT,
	NEON_RIGHT,
	NEON_FRONT,
	NEON_BACK
};

enum VehicleColorsChrome
{
	COLOR_CHROME = 120
};

enum VehicleColorsClassic
{
	COLOR_CLASSIC_BLACK            = 0,
	COLOR_CLASSIC_CARBON_BLACK     = 147,
	COLOR_CLASSIC_GRAPHITE         = 1,
	COLOR_CLASSIC_ANTHRACITE_BLACK = 11,
	COLOR_CLASSIC_BLACK_STEEL      = 2,
	COLOR_CLASSIC_DARK_STEEL       = 3,
	COLOR_CLASSIC_SILVER           = 4,
	COLOR_CLASSIC_BLUISH_SILVER    = 5,
	COLOR_CLASSIC_ROLLED_STEEL     = 6,
	COLOR_CLASSIC_SHADOW_SILVER    = 7,
	COLOR_CLASSIC_STONE_SILVER     = 8,
	COLOR_CLASSIC_MIDNIGHT_SILVER  = 9,
	COLOR_CLASSIC_CAST_IRON_SILVER = 10,
	COLOR_CLASSIC_RED              = 27,
	COLOR_CLASSIC_TORINO_RED       = 28,
	COLOR_CLASSIC_FORMULA_RED      = 29,
	COLOR_CLASSIC_LAVA_RED         = 150,
	COLOR_CLASSIC_BLAZE_RED        = 30,
	COLOR_CLASSIC_GRACE_RED        = 31,
	COLOR_CLASSIC_GARNET_RED       = 32,
	COLOR_CLASSIC_SUNSET_RED       = 33,
	COLOR_CLASSIC_CABERNET_RED     = 34,
	COLOR_CLASSIC_WINE_RED         = 143,
	COLOR_CLASSIC_CANDY_RED        = 35,
	COLOR_CLASSIC_HOT_PINK         = 135,
	COLOR_CLASSIC_PFSITER_PINK     = 137,
	COLOR_CLASSIC_SALMON_PINK      = 136,
	COLOR_CLASSIC_SUNRISE_ORANGE   = 36,
	COLOR_CLASSIC_ORANGE           = 38,
	COLOR_CLASSIC_BRIGHT_ORANGE    = 138,
	COLOR_CLASSIC_GOLD             = 99,
	COLOR_CLASSIC_BRONZE           = 90,
	COLOR_CLASSIC_YELLOW           = 88,
	COLOR_CLASSIC_RACE_YELLOW      = 89,
	COLOR_CLASSIC_DEW_YELLOW       = 91,
	COLOR_CLASSIC_DARK_GREEN       = 49,
	COLOR_CLASSIC_RACING_GREEN     = 50,
	COLOR_CLASSIC_SEA_GREEN        = 51,
	COLOR_CLASSIC_OLIVE_GREEN      = 52,
	COLOR_CLASSIC_BRIGHT_GREEN     = 53,
	COLOR_CLASSIC_GASOLINE_GREEN   = 54,
	COLOR_CLASSIC_LIME_GREEN       = 92,
	COLOR_CLASSIC_MIDNIGHT_BLUE    = 141,
	COLOR_CLASSIC_GALAXY_BLUE      = 61,
	COLOR_CLASSIC_DARK_BLUE        = 62,
	COLOR_CLASSIC_SAXON_BLUE       = 63,
	COLOR_CLASSIC_BLUE             = 64,
	COLOR_CLASSIC_MARINER_BLUE     = 65,
	COLOR_CLASSIC_HARBOR_BLUE      = 66,
	COLOR_CLASSIC_DIAMOND_BLUE     = 67,
	COLOR_CLASSIC_SURF_BLUE        = 68,
	COLOR_CLASSIC_NAUTICAL_BLUE    = 69,
	COLOR_CLASSIC_RACING_BLUE      = 73,
	COLOR_CLASSIC_ULTRA_BLUE       = 70,
	COLOR_CLASSIC_LIGHT_BLUE       = 74,
	COLOR_CLASSIC_CHOCOLATE_BROWN  = 96,
	COLOR_CLASSIC_BISON_BROWN      = 101,
	COLOR_CLASSIC_CREEK_BROWN      = 95,
	COLOR_CLASSIC_FELTZER_BROWN    = 94,
	COLOR_CLASSIC_MAPLE_BROWN      = 97,
	COLOR_CLASSIC_BEECHWOOD_BROWN  = 103,
	COLOR_CLASSIC_SIENNA_BROWN     = 104,
	COLOR_CLASSIC_SADDLE_BROWN     = 98,
	COLOR_CLASSIC_MOSS_BROWN       = 100,
	COLOR_CLASSIC_WOODBEECH_BROWN  = 102,
	COLOR_CLASSIC_STRAW_BROWN      = 99,
	COLOR_CLASSIC_SANDY_BROWN      = 105,
	COLOR_CLASSIC_BLEACHED_BROWN   = 106,
	COLOR_CLASSIC_SCHAFTER_PURPLE  = 71,
	COLOR_CLASSIC_SPINNAKER_PURPLE = 72,
	COLOR_CLASSIC_MIDNIGHT_PURPLE  = 142,
	COLOR_CLASSIC_BRIGHT_PURPLE    = 145,
	COLOR_CLASSIC_CREAM            = 107,
	COLOR_CLASSIC_ICE_WHITE        = 111,
	COLOR_CLASSIC_FROST_WHITE      = 112,
	COLOR_CLASSIC_CLASSIC_GOLD     = 37,
	COLOR_CLASSIC_GREEN            = 139,
	COLOR_CLASSIC_HUNTER_GREEN     = 144,
	COLOR_CLASSIC_SECURICOR_GREEN  = 125,
	COLOR_CLASSIC_EPSILON_BLUE     = 157,
	COLOR_CLASSIC_FLOURESCENT_BLUE = 140,
	COLOR_CLASSIC_V_DARK_BLUE      = 146,
	COLOR_CLASSIC_POLICE_BLUE      = 127,
	COLOR_CLASSIC_CHAMPAGNE        = 93,
	COLOR_CLASSIC_PURE_WHITE       = 134,
	COLOR_CLASSIC_DEFAULT_ALLOY    = 156,
	COLOR_CLASSIC_SECRET_GOLD      = 160
};

enum VehicleColorsMatte
{
	COLOR_MATTE_BLACK           = 12,
	COLOR_MATTE_GRAY            = 13,
	COLOR_MATTE_LIGHT_GRAY      = 14,
	COLOR_MATTE_ICE_WHITE       = 131,
	COLOR_MATTE_BLUE            = 83,
	COLOR_MATTE_DARK_BLUE       = 82,
	COLOR_MATTE_MIDNIGHT_BLUE   = 84,
	COLOR_MATTE_MIDNIGHT_PURPLE = 149,
	COLOR_MATTE_SCHAFTER_PURPLE = 148,
	COLOR_MATTE_RED             = 39,
	COLOR_MATTE_DARK_RED        = 40,
	COLOR_MATTE_ORANGE          = 41,
	COLOR_MATTE_YELLOW          = 42,
	COLOR_MATTE_LIME_GREEN      = 55,
	COLOR_MATTE_GREEN           = 128,
	COLOR_MATTE_FOREST_GREEN    = 151,
	COLOR_MATTE_FOLIAGE_GREEN   = 155,
	COLOR_MATTE_OLIVE_DRAB      = 152,
	COLOR_MATTE_DARK_EARTH      = 153,
	COLOR_MATTE_DESERT_TAN      = 154,
	COLOR_MATTE_BROWN           = 129
};

enum VehicleColorsMetals
{
	COLOR_METALS_BRUSHED_STEEL       = 117,
	COLOR_METALS_BRUSHED_BLACK_STEEL = 118,
	COLOR_METALS_BRUSHED_ALUMINUM    = 119,
	COLOR_METALS_PURE_GOLD           = 158,
	COLOR_METALS_BRUSHED_GOLD        = 159
};

enum VehicleColorsUtil
{
	COLOR_UTIL_BLACK            = 15,
	COLOR_UTIL_BLACK_POLY       = 16,
	COLOR_UTIL_DARK_SILVER      = 17,
	COLOR_UTIL_SILVER           = 18,
	COLOR_UTIL_GUN_METAL        = 19,
	COLOR_UTIL_SHADOW_SILVER    = 20,
	COLOR_UTIL_RED              = 43,
	COLOR_UTIL_BRIGHT_RED       = 44,
	COLOR_UTIL_GARNET_RED       = 45,
	COLOR_UTIL_DARK_GREEN       = 56,
	COLOR_UTIL_GREEN            = 57,
	COLOR_UTIL_DARK_BLUE        = 75,
	COLOR_UTIL_MIDNIGHT_BLUE    = 76,
	COLOR_UTIL_BLUE             = 77,
	COLOR_UTIL_SEA_FOAM_BLUE    = 78,
	COLOR_UTIL_LIGHTNING_BLUE   = 79,
	COLOR_UTIL_MAUI_BLUE_POLY   = 80,
	COLOR_UTIL_BRIGHT_BLUE      = 81,
	COLOR_UTIL_BROWN            = 108,
	COLOR_UTIL_MEDIUM_BROWN     = 109,
	COLOR_UTIL_LIGHT_BROWN      = 110,
	COLOR_UTIL_OFF_WHITE        = 122
};

enum VehicleColorsWorn
{
	COLOR_WORN_BLACK                 = 21,
	COLOR_WORN_GRAPHITE              = 22,
	COLOR_WORN_SILVER_GREY           = 23,
	COLOR_WORN_SILVER                = 24,
	COLOR_WORN_BLUE_SILVER           = 25,
	COLOR_WORN_SHADOW_SILVER         = 26,
	COLOR_WORN_RED                   = 46,
	COLOR_WORN_GOLDEN_RED            = 47,
	COLOR_WORN_DARK_RED              = 48,
	COLOR_WORN_DARK_GREEN            = 58,
	COLOR_WORN_GREEN                 = 59,
	COLOR_WORN_SEA_WASH              = 60,
	COLOR_WORN_DARK_BLUE             = 85,
	COLOR_WORN_BLUE                  = 86,
	COLOR_WORN_BABY_BLUE             = 87,
	COLOR_WORN_HONEY_BEIGE           = 113,
	COLOR_WORN_BROWN                 = 114,
	COLOR_WORN_DARK_BROWN            = 115,
	COLOR_WORN_STRAW_BEIGE           = 116,
	COLOR_WORN_OFF_WHITE             = 121,
	COLOR_WORN_ORANGE                = 123,
	COLOR_WORN_LIGHT_ORANGE          = 124,
	COLOR_WORN_TAXI_YELLOW           = 126,
	COLOR_WORN_PALE_ORANGE           = 130,
	COLOR_WORN_WHITE                 = 132,
	COLOR_WORN_OLIVE_ARMY_GREEN      = 133
};

enum PlateTextIndexs
{
	PLATE_BLUEONWHITE1,
	PLATE_YELLOWONBLACK,
	PLATE_YELLOWONBLUE,
	PLATE_BLUEONWHITE2,
	PLATE_BLUEONWHITE3,
	PLATE_YANKTON,
	PLATE_ECOLA,
	PLATE_LASVENTURAS,
	PLATE_LIBERTYCITY,
	PLATE_LOSSANTOSCARMEET,
	PLATE_LOSSANTOSPANIC,
	PLATE_LOSSANTOSPOUNDERS,
	PLATE_SPRUNK,
};

enum WindowTints//m8 do you even int tint?
{
	WINDOWTINT_NONE,
	WINDOWTINT_BLACK,
	WINDOWTINT_DARKSMOKE,
	WINDOWTINT_LIGHTSMOKE,
	WINDOWTINT_STOCK,
	WINDOWTINT_LIMO,
	WINDOWTINT_GREEN
};

enum HeadlightColors
{
	XENON_DEFAULT = -1,
	XENON_WHITE,
	XENON_BLUE,
	XENON_ELECTRIC_BLUE,
	XENON_MINT_GREEN,
	XENON_LIME_GREEN,
	XENON_YELLOW,
	XENON_GOLDEN_SHOWER,
	XENON_ORANGE,
	XENON_RED,
	XENON_PONY_PINK,
	XENON_HOT_PINK,
	XENON_PURPLE,
	XENON_BLACKLIGHT
};

#define NEON_COLOR_WHITE 222, 222, 255
#define NEON_COLOR_BLUE 2, 21, 255
#define NEON_COLOR_ELECTRICBLUE 3, 83, 255
#define NEON_COLOR_MINTGREEN 0, 255, 140
#define NEON_COLOR_LIMEGREEN 94, 255, 1
#define NEON_COLOR_YELLOW 255, 255, 0
#define NEON_COLOR_GOLDENSHOWER 255, 150, 5
#define NEON_COLOR_ORANGE 255, 62, 0
#define NEON_COLOR_RED 255, 1, 1
#define NEON_COLOR_PONYPINK 255, 50, 100
#define NEON_COLOR_HOTPINK 255, 5, 190
#define NEON_COLOR_PURPLE 35, 1, 255
#define NEON_COLOR_BLACKLIGHT 15, 3, 255

#define TIRESMOKE_COLOR_WHITE 255, 255, 255
#define TIRESMOKE_COLOR_BLACK 20, 20, 20
#define TIRESMOKE_COLOR_BLUE 0, 174, 239
#define TIRESMOKE_COLOR_YELLOW 252, 238, 0
#define TIRESMOKE_COLOR_PURPLE 100, 79, 142
#define TIRESMOKE_COLOR_ORANGE 255, 127, 0
#define TIRESMOKE_COLOR_GREEN 114, 204, 114
#define TIRESMOKE_COLOR_RED 226, 6, 6
#define TIRESMOKE_COLOR_PINK 203, 54, 148
#define TIRESMOKE_COLOR_BROWN 180, 130, 97
#define TIRESMOKE_COLOR_PATRIOT 0, 0, 0