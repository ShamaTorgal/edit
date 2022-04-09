#include "control_switch.h"
#include "smart_switch.h"
#include "appliance.h"
#include <iostream>
int main()
{
     control_switch c;
     c.set_switch_state(ON);
     c.get_switch_state();
     c.set_switch_state(OFF);
     c.get_switch_state();
    // smart_switch c1(ON,LIGHT_BULB);
    smart_switch c1(ON,LIGHT_BULB, POWER_AVAILABLE, medium_intensity);
     c1.get_electronic_accessory_type();
     c1.get_power_status();
     c1.appliancefunctions();
}
    
