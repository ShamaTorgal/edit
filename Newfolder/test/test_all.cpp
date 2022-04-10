#include"control_switch.h"
#include"smart_switch.h"

#include <gtest/gtest.h>

TEST(control_switch,paramcntrolswitch) {
    // ASSERT_EQ(1,control_switch c1(ON));
    // ASSERT_EQ(0,control_switch c1(OFF));
}
TEST(control_switch,controlswitchstate) {
    control_switch c1;
    c1.set_switch_state(ON);
    ASSERT_EQ(1,c1.get_switch_state());
    c1.set_switch_state(OFF);
    ASSERT_EQ(0,c1.get_switch_state());
}
TEST(control_switch,copycontrolswitchstate) {
    control_switch c1;
    c1.set_switch_state(ON);
    control_switch c2(c1);
    ASSERT_EQ(1,c2.get_switch_state());
}


TEST(smart_switch,smartswitchtype) {
    smart_switch c1(ON,LIGHT_BULB, POWER_AVAILABLE, medium_intensity);
    ASSERT_EQ(0,c1.get_electronic_accessory_type());
    ASSERT_EQ(0,c1.get_power_status());
}
TEST(smart_switch,copysmartswitchtype) {
    smart_switch c1(ON,LIGHT_BULB, POWER_AVAILABLE, medium_intensity);
    smart_switch c2(c1);
    ASSERT_EQ(0,c2.get_electronic_accessory_type());
    ASSERT_EQ(0,c2.get_power_status());
}
TEST(smart_switch,setsmartswitch) {
    smart_switch c1(ON,LIGHT_BULB, POWER_AVAILABLE, low_intensity);
    ASSERT_EQ(0,c1.set_electronic_accessory_type(FAN));
    ASSERT_EQ(0,c1.set_power_status(POWER_NOT_AVAILABLE));
    // ASSERT_EQ(10,c1.appliancefunctions());
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
