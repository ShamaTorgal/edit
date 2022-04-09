#ifndef APPLIANCE_H_
#define APPLIANCE_H_

#include <iostream>
// #include "control_switch.h"
// #include "smart_switch.h"

typedef enum appliancefunction{
    zero,
    one,
    two,
    three,
    four,
    five,
    ZERO,
    ONE,
    TWO,
    THREE,
    low_intensity,
    medium_intensity,
    high_intensity
}appliancefunction;

appliancefunction get_fan_function(appliancefunction);
appliancefunction get_fridge_function(appliancefunction);
appliancefunction get_bulb_function(appliancefunction);

#endif /* APPLIANCE_H_ */


