// -----------
// Collatz.cpp
// -----------

// --------
// includes
// --------

#include <cassert> // assert
#include <algorithm>

#include "Collatz.hpp"


using namespace std;

// ----------------
// max_cycle_length
// ----------------

unsigned max_cycle_length (unsigned i, unsigned j) {
    assert(i > 0);
    assert(j > 0);

    // <your code>
    unsigned v = i + j; // replace!

    assert(v > 0);
    return v;}



