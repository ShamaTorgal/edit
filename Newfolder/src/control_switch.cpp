#include "control_switch.h"
#include <iostream>
control_switch::control_switch(void)
{}
control_switch::control_switch(switch_state_t param_state){
    std::cout<<param_state<<"\n";

    m_switch_state=param_state;
}
control_switch::control_switch(const control_switch& ref_switch)
{
    m_switch_state = ref_switch.m_switch_state;
}
switch_state_t control_switch::get_switch_state()
{
        std::cout<<m_switch_state<<"\n";

    return m_switch_state;
}
function_status_t control_switch::set_switch_state(switch_state_t param_state){
    
    m_switch_state = param_state;
    return SUCCESS;
}
control_switch::~control_switch(){}