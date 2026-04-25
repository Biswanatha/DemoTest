#include <gtest/gtest.h>
#include "MyClass.hpp"

TEST(MyClassTest, DoSomething) {
    MyClass obj;
    // Test that it doesn't crash
    obj.doSomething();
}

TEST(MyClassTest, GetValue) {
    MyClass obj;
    EXPECT_EQ(obj.getValue(), 42);
}