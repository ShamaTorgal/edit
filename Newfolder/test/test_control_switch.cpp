#include"control_switch.h"
#include <gtest/gtest.h>
namespace {

TEST(control_switch,paramcntrolswitch) {
    control_switch c1(ON);
    EXPECT_EQ(1,c1.get_switch_state());
    control_switch c2(OFF);
    EXPECT_EQ(0,c2.get_switch_state());
    // EXPECT_EQ(0,control_switch c1(OFF));
}
TEST(control_switch,controlswitchstate) {
    control_switch c1;
    c1.set_switch_state(ON);
    EXPECT_EQ(1,c1.get_switch_state());
    c1.set_switch_state(OFF);
    EXPECT_EQ(0,c1.get_switch_state());
}
TEST(control_switch,copycontrolswitchstate) {
    control_switch c1;
    c1.set_switch_state(ON);
    control_switch c2(c1);
    EXPECT_EQ(1,c2.get_switch_state());
}
}
