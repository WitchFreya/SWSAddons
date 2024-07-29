#define GET_VALUE(config,value,default) ([ARR_3(config,value,default)] call BIS_fnc_returnConfigEntry)
#define DEFAULT_RESTOCK_PER_PERSON GET_VALUE(configOf _this,QQGVAR(maxRestocksPerPerson),0)
#define DEFAULT_RESTOCKS_TOTAL GET_VALUE(configOf _this,QQGVAR(maxRestocksTotal),0)

class Cfg3DEN {
  class Object {
    class AttributeCategories {
      class sws_attributes {
        class Attributes {
          class GVAR(maxRestocksPerPerson) {
            displayName = "Restocks per Person";
            tooltip = "Set the number of restocks per person this item provides, -1 for infinite.";
            property = QGVAR(maxRestocksPerPerson);
            control = "EditShort";
            defaultValue = QUOTE(DEFAULT_RESTOCK_PER_PERSON);
            validate = "number";
            condition = "(1-objectBrain)*(1-objectAgent)";
            typeName = "NUMBER";
            expression = QUOTE([ARR_2(_this,_value)] call FUNC(setLimitPerPerson));
          };

          class GVAR(maxRestocksTotal) {
            displayName = "Restocks Total";
            tooltip = "Set the total number of restocks per person this item provides, -1 for infinite.";
            property = QGVAR(maxRestocksTotal);
            control = "EditShort";
            defaultValue = QUOTE(DEFAULT_RESTOCKS_TOTAL);
            validate = "number";
            condition = "(1-objectBrain)*(1-objectAgent)";
            typeName = "NUMBER";
            expression = QUOTE([ARR_2(_this,_value)] call FUNC(setLimitPerPerson));
          };
        };
      };
    };
  };
};
