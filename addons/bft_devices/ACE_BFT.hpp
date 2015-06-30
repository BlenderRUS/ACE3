class ACE_BFT {
    class Devices {
        // Personal Devices
        class DK10_b {
            deviceSide = "WEST";
            refreshRate = 5;
            reportingModes[] = {"FBCB2"};
            defaultInformation[] = {"Inf", 0, "", 0};

            GVAR(dialogName) = QGVAR(DK10_dlg);
            GVAR(backgroundDay) = QUOTE(PATHTOF(UI\images\DK10_background_ca.paa));
            GVAR(backgroundNight) = QUOTE(PATHTOF(UI\images\DK10_background_night_ca.paa));

            class InterfaceSettings {
                dlgIfPosition[] = {};
                mode = "DESKTOP";
                showIconText = "true";
                mapWorldPos[] = {};
                mapScaleDsp = 2;
                mapScaleDlg = 2;
                class mapTypes {
                    SAT = IDC_SCREEN;
                    TOPO = IDC_SCREEN_TOPO;
                };
                mapType = "SAT";
                uavCam = "";
                hCam = "";
                mapTools = "true";
                nightMode = 2;
                brightness = 0.9;
            };
        };
        class DK10_o: DK10_b {
            deviceSide = "EAST";
        };
        class DK10_i: DK10_b {
            deviceSide = "IND";
        };

        class GD300_b {
            deviceSide = "WEST";
            refreshRate = 5;
            reportingModes[] = {"FBCB2"};
            defaultInformation[] = {"Inf", 0, "", 0};

            GVAR(displayName) = QGVAR(GD300_dsp);
            GVAR(dialogName) = QGVAR(GD300_dlg);
            GVAR(backgroundDay) = QUOTE(PATHTOF(UI\images\GD300_background_ca.paa));
            GVAR(backgroundNight) = QUOTE(PATHTOF(UI\images\GD300_background_night_ca.paa));

            class InterfaceSettings {
                dlgIfPosition[] = {};
                dspIfPosition = "false";
                mode = "BFT";
                showIconText = "true";
                mapWorldPos[] = {};
                mapScaleDsp = 0.4;
                mapScaleDlg = 0.4;
                class mapTypes {
                    SAT = IDC_SCREEN;
                    TOPO = IDC_SCREEN_TOPO;
                };
                mapType = "SAT";
                showMenu = "false";
                mapTools = "true";
                nightMode = 2;
                brightness = 0.9;
            };
        };
        class GD300_o: GD300_b {
            deviceSide = "EAST";
        };
        class GD300_i: GD300_b {
            deviceSide = "IND";
        };

        class MicroDAGR_b {
            deviceSide = "WEST";
            refreshRate = 5;
            reportingModes[] = {"GroupOnly"};
            defaultInformation[] = {"Inf", 0, "", 0};

            GVAR(displayName) = QGVAR(GD300_dsp);
            GVAR(dialogName) = QGVAR(GD300_dlg);
            GVAR(backgroundDay) = QUOTE(PATHTOF(UI\images\MicroDAGR_background_ca.paa));
            GVAR(backgroundNight) = QUOTE(PATHTOF(UI\images\MicroDAGR_background_night_ca.paa));

            class InterfaceSettings {
                dlgIfPosition[] = {};
                dspIfPosition = "false";
                mapWorldPos[] = {};
                showIconText = "true";
                mapScaleDsp = 0.4;
                mapScaleDlg = 0.4;
                class mapTypes {
                    SAT = IDC_SCREEN;
                    TOPO = IDC_SCREEN_TOPO;
                };
                mapType = "SAT";
                mapTools = "true";
                nightMode = 2;
                brightness = 0.9;
            };
        };
        class MicroDAGR_o: MicroDAGR_b {
            deviceSide = "EAST";
        };
        class MicroDAGR_i: MicroDAGR_b {
            deviceSide = "IND";
        };

        // Motorized
        class JV5_Mot_b {
            deviceSide = "WEST";
            refreshRate = 5;
            reportingModes[] = {"FBCB2"};
            defaultInformation[] = {"Motorized", 0, "", 0};

            GVAR(dialogName) = QGVAR(JV5_dlg);

            class InterfaceSettings {
                dlgIfPosition[] = {};
                mapWorldPos[] = {};
                showIconText = "true";
                mapScaleDsp = 2;
                mapScaleDlg = 2;
                class mapTypes {
                    SAT = IDC_SCREEN;
                    TOPO = IDC_SCREEN_TOPO;
                };
                mapType = "SAT";
                mapTools = "true";
            };
        };
        class JV5_Mot_o: JV5_Mot_b {
            deviceSide = "EAST";
        };
        class JV5_Mot_i: JV5_Mot_b {
            deviceSide = "IND";
        };

        // Mechanized
        class JV5_Mech_b: JV5_Mot_b {
            defaultInformation[] = {"Mechanized", 0, "", 0};
        };
        class JV5_Mech_o: JV5_Mech_b {
            deviceSide = "EAST";
        };
        class JV5_Mech_i: JV5_Mech_b {
            deviceSide = "IND";
        };

        // Armor
        class JV5_Armor_b: JV5_Mot_b {
            defaultInformation[] = {"Armor", 0, "", 0};
        };
        class JV5_Armor_o: JV5_Armor_b {
            deviceSide = "EAST";
        };
        class JV5_Armor_i: JV5_Armor_b {
            deviceSide = "IND";
        };

        // Artillery
        class JV5_Artillery_b: JV5_Mot_b {
            defaultInformation[] = {"Artillery", 0, "", 0};
        };
        class JV5_Artillery_o: JV5_Artillery_b {
            deviceSide = "EAST";
        };
        class JV5_Artillery_i: JV5_Artillery_b {
            deviceSide = "IND";
        };

        // Maintenance
        class JV5_Maintenance_b: JV5_Mot_b {
            defaultInformation[] = {"Maintenance", 0, "", 0};
        };
        class JV5_Maintenance_o: JV5_Maintenance_b {
            deviceSide = "EAST";
        };
        class JV5_Maintenance_i: JV5_Maintenance_b {
            deviceSide = "IND";
        };

        // Medical
        class JV5_Medical_b: JV5_Mot_b {
            defaultInformation[] = {"Medical", 0, "", 0};
        };
        class JV5_Medical_o: JV5_Medical_b {
            deviceSide = "EAST";
        };
        class JV5_Medical_i: JV5_Medical_b {
            deviceSide = "IND";
        };

        // Service
        class JV5_Service_b: JV5_Mot_b {
            defaultInformation[] = {"Service", 0, "", 0};
        };
        class JV5_Service_o: JV5_Service_b {
            deviceSide = "EAST";
        };
        class JV5_Service_i: JV5_Service_b {
            deviceSide = "IND";
        };

        // Naval
        class JV5_Naval_b: JV5_Mot_b {
            defaultInformation[] = {"Naval", 0, "", 0};
        };
        class JV5_Naval_o: JV5_Naval_b {
            deviceSide = "EAST";
        };
        class JV5_Naval_i: JV5_Naval_b {
            deviceSide = "IND";
        };

        // Helicopter
        class TAD_Heli_b {
            deviceSide = "WEST";
            reportingModes[] = {"MFD"};
            refreshRate = 0;
            defaultInformation[] = {"Helicopter", 0, "", 0};

            GVAR(displayName) = QGVAR(TAD_dsp);
            GVAR(dialogName) = QGVAR(TAD_dlg);
            GVAR(backgroundDay) = QUOTE(PATHTOF(UI\images\TAD_background_ca.paa));
            GVAR(backgroundNight) = QUOTE(PATHTOF(UI\images\TAD_background_night_ca.paa));

            class InterfaceSettings {
                dlgIfPosition[] = {};
                dspIfPosition = "false";
                mapWorldPos[] = {};
                showIconText = "true";
                mapScaleDsp = 2;
                mapScaleDlg = 2;
                mapScaleMin = 1;
                class mapTypes {
                    SAT = IDC_SCREEN;
                    TOPO = IDC_SCREEN_TOPO;
                    BLK = IDC_SCREEN_BLACK;
                };
                mapType = "SAT";
                mapTools = "true";
                nightMode = 0;
                brightness = 0.8;
            };
        };
        class TAD_Heli_o: TAD_Heli_b {
            deviceSide = "EAST";
        };
        class TAD_Heli_i: TAD_Heli_b {
            deviceSide = "IND";
        };

        // Plane
        class TAD_Plane_b: TAD_Heli_b {
            defaultInformation[] = {"Plane", 0, "", 0};
        };
        class TAD_Plane_o: TAD_Plane_b {
            deviceSide = "EAST";
        };
        class TAD_Plane_i: TAD_Plane_b {
            deviceSide = "IND";
        };

        // UAV
        class UAV_b {
            deviceSide = "WEST";
            reportingModes[] = {"UAV"};
            refreshRate = 1;
            defaultInformation[] = {"UAV", 0, "", 0};
        };
        class UAV_o: UAV_b {
            deviceSide = "EAST";
        };
        class UAV_i: UAV_b {
            deviceSide = "IND";
        };

        // UGV
        class UGV_b: UAV_b {
            refreshRate = 5;
        };
        class UGV_o: UGV_b {
            deviceSide = "EAST";
        };
        class UGV_i: UGV_b {
            deviceSide = "IND";
        };
    };
};