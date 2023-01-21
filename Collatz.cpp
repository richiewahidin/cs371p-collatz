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
    assert(n > 0);
    int c = 1;
    while (n > 1) {
        if ((n % 2) == 0)
            n = (n / 2);
        else
            n = (3 * n) + 1;
        ++c;}
    assert(c > 0);
    return c;}

unsigned max_cycle_length (unsigned i, unsigned j) {
    assert(i > 0);
    assert(j > 0);
    unsigned result = 0;
    // <your code>
    for (unsigned k = i; k <= j; k++) {
        result = max<unsigned>(result, cycle_length(k));
    }
    assert(result > 0);
    return result;}


