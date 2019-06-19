class CfgPatches {
    class gsri_radio {
        units[]={};
        requiredVersion=0.1;
        requiredAddons[]={"COS_gilet"};
        author="[-GSRI-]Cheitan";
    };
};

class CfgWeapons {
    class ItemCore;
    class Vest_NoCamo_Base : ItemCore {
        class ItemInfo;
    };
    class JPC_1_OD : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
        class ItemInfo: ItemInfo {
            uniformModel="\COS_gilet\JPC_1.p3d";
            containerClass="Supply200";
            mass=15;
            passThrough=1;
            armor=25;
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName="HitChest";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Diaphragm {
                    HitpointName="HitDiaphragm";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Abdomen {
                    hitpointName="HitAbdomen";
                    armor=25;
                    passThrough=0.30000001;
                };
                class Body {
                    hitpointName="HitBody";
                    passThrough=0.30000001;
                };
            };
        };
    };
    class JPC_3_OD : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
        class ItemInfo: ItemInfo {
            uniformModel="\COS_gilet\JPC_3.p3d";
            containerClass="Supply200";
            mass=15;
            passThrough=1;
            armor=25;
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName="HitChest";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Diaphragm {
                    HitpointName="HitDiaphragm";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Abdomen {
                    hitpointName="HitAbdomen";
                    armor=25;
                    passThrough=0.30000001;
                };
                class Body {
                    hitpointName="HitBody";
                    passThrough=0.30000001;
                };
            };
        };
    };
    class mbss_TL_od : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class mbss_com_od : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class mbss_SCOUT_od : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class mbss_RECON_od : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class 6094_com_OD : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class 6094_SCOUT_od : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class 6094_RECON_od : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class 6094_MEDIC_od : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class 6094_HEAVY_od : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
    class 6094_JTAC : Vest_NoCamo_Base {
        descriptionShort="$STR_A3_SP_AL_IV";
    };
};