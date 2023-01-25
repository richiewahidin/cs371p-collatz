// -----------
// Collatz.cpp
// -----------

// --------
// includes
// --------

#include <cassert> // assert
#include <algorithm>

#include "Collatz.hpp"

// use unsigned long long to prevent wrong output from overflow
#define ull unsigned long long

using namespace std;

// ----------------
// max_cycle_length
// ----------------

ull cache [1000000];
bool firstRun = true;

ull cycle_length (ull n) {
    assert (n > 0);
    ull c = 1;
    while (n > 1) {
        // use cached value instead of calculating it again
        if (n < 1000000 && cache[n] != 0) {

            // subtract 1 as the function counts steps + 1, and by using the
            // cache we are adding 1 twice, so need to subtract by 1
            return c + cache[n] - 1; 
                                    
        }
        if (n % 2 == 0) {
            n = n / 2;
            ++c;
        } else {
            n = (3 * n + 1) / 2;
            c = c + 2;
        }
    }
    assert (c > 0);
    return c;
}

unsigned max_cycle_length (unsigned i, unsigned j) {
    assert(i > 0);
    assert(j > 0);

    // eager caching of the cycle lengths of values from 1 to 100000, improve
    // performance
    if (firstRun) {
        for (int k = 1; k < 100000; k++) {
            cache[k] = cycle_length(k);
        }
        firstRun = false;
    }

    ull maximum = 0;
    ull start = min (i,  j);
    ull end = max (i, j);
    ull m = (end / 2) + 1;
    if (m > start) {
        start = m;
    }
    ull temp;

    while (start <= end) {
        temp = cycle_length (start);
        cache[start] = temp;
        maximum = max(maximum, temp);
        start++;
    }
    assert (maximum > 0);
    return maximum;
}