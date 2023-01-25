// -----------
// Collatz.hpp
// -----------

#ifndef Collatz_hpp
#define Collatz_hpp

// use unsigned long long to prevent wrong output from overflow
#define ull unsigned long long

// ----------------
// max_cycle_length
// ----------------

/**
 * @param i beginning of the range
 * @param j end       of the range
 * @return max cycle length of the range, inclusive
 */
unsigned max_cycle_length (unsigned i, unsigned j);
ull cycle_length (ull n);

#endif // Collatz_hpp
