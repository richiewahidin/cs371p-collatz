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

int cycle_length (int n) {
    assert (n > 0);
    int c = 1;
    while (n > 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        ++c;
    }
    assert (c > 0);
    return c;
}

unsigned max_cycle_length (unsigned i, unsigned j) {
    assert(i > 0);
    assert(j > 0);

    // <your code>
    int maximum = 0;
    int start = min (i, j);
    int end = max (i, j);
    int temp;
    while (start <= end) {
        temp = cycle_length (start);
        maximum = max(maximum, temp);
        start++;
    }
    assert (maximum > 0);
    return maximum;}




