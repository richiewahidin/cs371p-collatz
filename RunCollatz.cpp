// --------------
// RunCollatz.cpp
// --------------

// --------
// includes
// --------

#include <iostream> // cin, cout, endl

#include "Collatz.hpp"

using namespace std;

// ----
// main
// ----

int main () {
    unsigned i, j; 
    while (cin >> i >> j) {
        unsigned v = max_cycle_length(i, j);
        cout << i << " " << j << " " << v << endl;}

    return 0;}
