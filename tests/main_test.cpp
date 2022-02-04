#include "gtest/gtest.h"

#define main TargetMain
#include "../main.cpp"

#include "test_macro.h"

TEST(MainTest, Test1)
{
    PREPARE("1 2 3 test")
    TargetMain();
    CHECK("6 test")
}

