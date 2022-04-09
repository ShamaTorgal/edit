#include"control_switch.h"
#include <gtest/gtest.h>
namespace {

TEST(control_switch,paramcntrolswitch) {
    ASSERT_EQ(1,control_switch c1(ON););
    ASSERT_EQ(0,control_switch c1(OFF););
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
}
