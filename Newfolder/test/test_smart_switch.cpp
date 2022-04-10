#include"smart_switch.h"
#include <gtest/gtest.h>
namespace {

TEST(smart_switch,smartswitchtype) {
    smart_switch c1(ON,LIGHT_BULB, POWER_AVAILABLE, medium_intensity);
    EXPECT_EQ(0,c1.get_electronic_accessory_type());
    EXPECT_EQ(0,c1.get_power_status());
}
TEST(smart_switch,copysmartswitchtype) {
    smart_switch c1(ON,LIGHT_BULB, POWER_AVAILABLE, medium_intensity);
    smart_switch c2(c1);
    EXPECT_EQ(0,c2.get_electronic_accessory_type());
    EXPECT_EQ(0,c2.get_power_status());
}
TEST(smart_switch,setsmartswitch) {
    smart_switch c1(ON,LIGHT_BULB, POWER_AVAILABLE, low_intensity);
    EXPECT_EQ(0,c1.set_electronic_accessory_type(FAN));
    EXPECT_EQ(0,c1.set_power_status(POWER_NOT_AVAILABLE));
    // EXPECT_EQ(10,c1.appliancefunctions());
}
}
