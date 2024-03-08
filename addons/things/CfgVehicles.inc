class CfgVehicles
{
  class Wall_F;
  class Land_CampingChair_V2_F;
  class SWS_Chair : Land_CampingChair_V2_F {
    displayName = QNAME(Chair);
    model = QPATHTOF(data\chair.p3d);
  };
  class SWS_Corvette_Door_Frame : Wall_F {
    ITEM_META(2);
    displayName = QNAME(Corvette Hallway Door Frame);
    editorCategory = "SWS_Objects";
    editorSubcategory = "SWS_Helpers_Door";
    editorPreview = QPATHTOF(data\sws_corvette_door_frame.jpg);
    model = QPATHTOF(data\sws_corvette_door_frame.p3d);
    icon = "iconObject_2x1";
    mapSize = 5;
    vehicleClass = "Fortifications";
    destrType = "DestructNo";
  };
};
