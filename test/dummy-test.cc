//
// Created by Orion Letizi on 2/5/23.
//
#include <gtest/gtest.h>
#include "Display.h"

TEST(DummyTestSuite, DummyTest) {
    auto *d = new Display();
    EXPECT_NE(d, nullptr);

    d->print("Hello!");
}
