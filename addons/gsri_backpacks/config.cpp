class CfgPatches {
    class gsri_backpacks {
        units[]={};
        requiredVersion=0.1;
        requiredAddons[]={"COS_back_pack", "ace_logistics_wirecutter"};
        author="[-GSRI-]Cheitan";
    };
};

class CfgVehicles {
    class B_AssaultPack_mcamo;

    //Notifying the use of legacy items
    //for radio variants, see gsri_radio.pbo
    class KIT_BAG_Alpin_OD : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers {
            init="systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class KIT_BAG_od : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers {
            init="systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class KIT_BAG_pince_OD : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers {
            init="systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class SOG_BAG_ALPIN_od : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers {
            init="systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class SOG_BAG_BREACHER_od : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers {
            init="systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class SOG_BAG_med_od : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers {
            init="systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };
    class SOG_BAG_OD : B_AssaultPack_mcamo {
        scope = 1;
        scopeArsenal = 0;
        displayName="$STR_GSRI_backpack_obsolete_displayName";
        class EventHandlers {
            init="systemChat 'Using an old backpack classname, please consider switching to the new one !'";
        };
    };


    //Create new items with fixed values
    //for the radio variant, see gsri_radio.pbo
    class B_Kitbag_Base;
    class GSRI_backpack_A : B_Kitbag_Base {
        scope = 2;
        scopeArsenal = 2;
        author = "$STR_GSRI_backpack_author";
        displayName="$STR_GSRI_backpack_A_displayName";
        picture="COS_back_pack\data\icon\Sac_assausl_od.paa";
        model = "\COS_back_pack\KIT_BAG";
        hiddenSelections[]={};
        hiddenSelectionsTextures[]={};
        hiddenSelectionsMaterials[]={};
    };
    class GSRI_backpack_A_pince : GSRI_backpack_A {
        displayName="$STR_GSRI_backpack_A_pince_displayName";
        model = "\COS_back_pack\KIT_BAG_PINCE";
        mass = 75; //50 + 25 for the wirecutter
        //no change in default maxLoad (280) because the cutter hangs outside the bag
        ace_logistics_wirecutter_hasWireCutter = 1;
    };
    class GSRI_backpack_A_alpin : GSRI_backpack_A {
        displayName="$STR_GSRI_backpack_A_alpin_displayName";
        model = "\COS_back_pack\KIT_BAG_Alpin";
    };

    class B_AssaultPack_Base;
    class GSRI_backpack_B : B_AssaultPack_Base {
        scope = 2;
        scopeArsenal = 2;
        author = "$STR_GSRI_backpack_author";
        displayName="$STR_GSRI_backpack_B_displayName";
        picture="COS_back_pack\data\icon\sac_fs.paa";
        model="\COS_back_pack\SOG_BAG";
        hiddenSelections[]= {"camo", "camo3"};
        hiddenSelectionsTextures[]={
            "\COS_back_pack\data\SOG_BACKPACK\SOG_BAG_OD_co.paa",
            "cos_back_pack\data\assets\assets_strap.co.paa"
        };
    };
    class GSRI_backpack_B_pince : GSRI_backpack_B {
        displayName="$STR_GSRI_backpack_B_pince_displayName";
        model="\COS_back_pack\SOG_BAG_BREACHER";
        ace_logistics_wirecutter_hasWireCutter = 1;
        mass = 45; //20+25 for the wirecutter
        //no change in default maxLoad (160) because the cutter hangs outside the bag
    };
    class GSRI_backpack_B_medic : GSRI_backpack_B {
        displayName="$STR_GSRI_backpack_B_medic_displayName";
        model="\COS_back_pack\SOG_BAG_med";
    };
    class GSRI_backpack_B_alpin : GSRI_backpack_B {
        displayName="$STR_GSRI_backpack_B_alpin_displayName";
        model="\COS_back_pack\SOG_BAG_ALPIN";
    };
    class GSRI_backpack_B_scuba : GSRI_backpack_B {
        displayName="# test scuba";
        model="\COS_back_pack\SOG_BAG_SCUBA";
    };
    class GSRI_backpack_B_para : GSRI_backpack_B {
        displayName="# test para";
        model="\COS_back_pack\SOG_PARACHUTE";
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\COS_back_pack\data\PARACHUTE\parachute_COS.co.paa"};
    };
    class GSRI_backpack_B_0 : GSRI_backpack_B {
        displayName="# test 0";
        model="\COS_back_pack\backpack";
    };
    class GSRI_backpack_B_1 : GSRI_backpack_B {
        displayName="# test 1";
        model="\COS_back_pack\backpack_1";
    };
    class GSRI_backpack_B_2 : GSRI_backpack_B {
        displayName="# test 2";
        model="\COS_back_pack\backpack_2";
    };
    class GSRI_backpack_B_flash : GSRI_backpack_B {
        displayName="# test flash";
        model="\COS_back_pack\backpack_FLASH";
    };
    class GSRI_backpack_B_net : GSRI_backpack_B {
        displayName="# test net";
        model="\COS_back_pack\BAG_opex_net";
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\COS_back_pack\data\OPEX_BAG\opex_bag_od_co.paa"};
    };
    class GSRI_backpack_B_dry : GSRI_backpack_B {
        displayName="# test dry";
        model="\COS_back_pack\drybag";
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"\COS_back_pack\data\drybag\DryBag_blk_co.paa"};
    };
};