#include <concepts>
#include <iostream>
template <std::integral T>
T add(T a, T b) { return a + b; }
int main() { std::cout << add(3,4) << "\n"; }


