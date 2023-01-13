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
    ASSERT_EQ(max_cycle_length(1, 10), 11u);}

TEST(CollatzFixture, max_cycle_length_1) {
    ASSERT_EQ(max_cycle_length(100, 200), 300u);}

TEST(CollatzFixture, max_cycle_length_2) {
    ASSERT_EQ(max_cycle_length(201, 210), 411u);}

TEST(CollatzFixture, max_cycle_length_3) {
    ASSERT_EQ(max_cycle_length(900, 1000), 1900u);}
