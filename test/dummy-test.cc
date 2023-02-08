//
// Created by Orion Letizi on 2/5/23.
//
#include <gtest/gtest.h>
#include "display.h"

TEST(DummyTestSuite, DummyTest) {
    Display *d;
    d = new SerialDisplay();
    EXPECT_NE(d, nullptr);

    d->print("Hello, world!");
}
