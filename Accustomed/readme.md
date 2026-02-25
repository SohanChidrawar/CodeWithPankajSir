In C++, the functionality of __builtin_popcount is a non-standard compiler intrinsic provided by GCC and Clang to count the number of set bits (1s) in an integer. A standard C++ equivalent, std::popcount, was introduced in C++20. 

GCC/Clang Intrinsics:

These functions are available without including any specific header, as they are built-in to the compiler. 

int __builtin_popcount(unsigned int x): Counts set bits in an unsigned int.

int __builtin_popcountl(unsigned long x): Counts set bits in an unsigned long.

int __builtin_popcountll(unsigned long long x): Counts set bits in an unsigned long long. 
