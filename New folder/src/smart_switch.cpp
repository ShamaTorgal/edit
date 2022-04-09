#include "control_switch.h"
#include "smart_switch.h"
#include "appliance.h"
#include <iostream>

smart_switch::smart_switch():m_type(),m_power_status(POWER_NOT_AVAILABLE){}

smart_switch::smart_switch(switch_state_t param_state){
    //control_switch::set_switch_state(param_state);
    m_smart_switch_state = param_state;
}

smart_switch::smart_switch(switch_state_t param_state, electronic_accessory_type_t param_type){
    //control_switch::set_switch_state(param_state);
    m_smart_switch_state = param_state;
    m_type = param_type;

}

smart_switch::smart_switch(switch_state_t param_state, electronic_accessory_type_t param_type, power_status_t param_power, appliancefunction ftype){
    m_smart_switch_state = param_state;
    m_type = param_type;
    m_power_status = param_power;
    functiontype = ftype;
}

smart_switch::smart_switch(const smart_switch& ref_switch){
    m_type = ref_switch.m_type;
    m_power_status = ref_switch.m_power_status;
    m_smart_switch_state = ref_switch.m_smart_switch_state;
}

electronic_accessory_type_t smart_switch::get_electronic_accessory_type(){
   
       return m_type;

}
  

function_status_t smart_switch::set_electronic_accessory_type(electronic_accessory_type_t input_type){
    if (input_type == LIGHT_BULB){
        m_type = input_type;
        return SUCCESS;
    }
    else if (input_type == FAN){
        m_type = input_type;
        return SUCCESS;
    }
    else if (input_type == FRIDGE){
        m_type = input_type;
        return SUCCESS;
    }
    else{
      
        return FAILURE;
    }
}

power_status_t smart_switch::get_power_status(){
    // std::cout<<m_power_status<<"\n";
    return m_power_status;
}

function_status_t smart_switch::set_power_status(power_status_t input_power){
    if (input_power == POWER_AVAILABLE){
        m_power_status = input_power;
        return SUCCESS;
    }
    else if (input_power == POWER_NOT_AVAILABLE){
        m_power_status = input_power;
        return SUCCESS;
    }
    else{
        m_power_status = POWER_NOT_AVAILABLE;
        return FAILURE;
    }
}
void smart_switch::appliancefunctions()
{
if (m_type==FAN)
appliancefunction get_fan_function(appliancefunction functiontype);
else if(m_type==FRIDGE)
appliancefunction get_fridge_function(appliancefunction functiontype);
else 
appliancefunction get_bulb_function(appliancefunction functiontype);
std::cout<<functiontype<<"\n";
}

smart_switch::~smart_switch(){}