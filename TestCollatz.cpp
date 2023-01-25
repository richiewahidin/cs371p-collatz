// ---------------
// TestCollatz.cpp
// ---------------

// https://github.com/google/googletest
// https://github.com/google/googletest/blob/master/docs/reference/assertions.md

// --------
// includes
// --------

#include "gtest/gtest.h"

#include "Collatz.hpp"

using namespace std;

// ----------------
// max_cycle_length
// ----------------

TEST(CollatzFixture, max_cycle_length_0) {
    ASSERT_EQ(max_cycle_length(1, 3), 8u);
}

TEST(CollatzFixture, max_cycle_length_1) {
    ASSERT_EQ(max_cycle_length(551565, 734536), 509u);
}

TEST(CollatzFixture, max_cycle_length_2) {
    ASSERT_EQ(max_cycle_length(201, 210), 89u);
}

TEST(CollatzFixture, max_cycle_length_3) {
    ASSERT_EQ(max_cycle_length(900, 1000), 174u);
}

TEST(CollatzFixture, max_cycle_length_4) {
    ASSERT_EQ(max_cycle_length(769753, 298727), 509u);
}

TEST(CollatzFixture, max_cycle_length_5) {
    ASSERT_EQ(max_cycle_length(23475, 1), 279u);
}

TEST(CollatzFixture, max_cycle_length_6) {
    ASSERT_EQ(max_cycle_length(982, 999727), 525u);
}

TEST(CollatzFixture, max_cycle_length_7) {
    ASSERT_EQ(max_cycle_length(71234, 238), 340u);
}

TEST(CollatzFixture, max_cycle_length_8) {
    ASSERT_EQ(max_cycle_length(3, 298727), 443u);
}

TEST(CollatzFixture, max_cycle_length_9) {
    ASSERT_EQ(max_cycle_length(1234, 2), 182u);
}

TEST(CollatzFixture, cycle_length_0) {
    ASSERT_EQ(cycle_length(1), 1u);
}

TEST(CollatzFixture, cycle_length_1) {
    ASSERT_EQ(cycle_length(77777), 170u);
}

TEST(CollatzFixture, cycle_length_2) {
    ASSERT_EQ(cycle_length(821044), 83u);
}

TEST(CollatzFixture, cycle_length_3) {
    ASSERT_EQ(cycle_length(342321), 61u);
}

TEST(CollatzFixture, cycle_length_4) {
    ASSERT_EQ(cycle_length(131072), 18u);
}

TEST(CollatzFixture, cycle_length_5) {
    ASSERT_EQ(cycle_length(986785), 171u);
}

TEST(CollatzFixture, cycle_length_6) {
    ASSERT_EQ(cycle_length(512512), 152u);
}

TEST(CollatzFixture, cycle_length_7) {
    ASSERT_EQ(cycle_length(4652), 153u);
}

TEST(CollatzFixture, cycle_length_8) {
    ASSERT_EQ(cycle_length(912343), 202u);
}

TEST(CollatzFixture, cycle_length_9) {
    ASSERT_EQ(cycle_length(999999), 259u);
}
