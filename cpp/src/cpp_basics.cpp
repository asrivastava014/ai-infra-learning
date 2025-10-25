#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

// plain functions
int add(int a, int b) { return a + b; }

bool is_prime(int n) {
    if (n < 2) return false;
    for (int d = 2; d * d <= n; ++d) {
        if (n % d == 0) return false;
    }
    return true;
}

#ifndef UNIT_LIB_BUILD
int main() {
    // variables & types
    int    x = 7;
    double y = 3.5;
    bool   ok = true;
    char   ch = 'A';
    string name = "Ankur";

    cout << "Hello, " << name << "!\n";
    cout << "x=" << x << ", y=" << y << ", ok=" << ok << ", ch=" << ch << "\n";

    // if/else
    if (x % 2 == 0) {
        cout << x << " is even\n";
    } else {
        cout << x << " is odd\n";
    }

    // loops: traditional for
    cout << "First 5 natural numbers: ";
    for (int i = 1; i <= 5; ++i) cout << i << (i==5?'\n':' ');

    // while loop
    int n = 10, sum = 0, i = 1;
    while (i <= n) { sum += i; ++i; }
    cout << "Sum 1.." << n << " = " << sum << "\n";

    // vector + range-based for
    vector<int> v{1,2,3,4,5,6,7,8,9,10};
    cout << "Evens in v: ";
    for (int val : v) if (val % 2 == 0) cout << val << ' ';
    cout << "\n";

    // std::accumulate (algorithm)
    int total = accumulate(v.begin(), v.end(), 0);
    cout << "accumulate(v) = " << total << "\n";

    // calling functions
    cout << "add(3,4) = " << add(3,4) << "\n";
    cout << "is_prime(29) = " << (is_prime(29) ? "true" : "false") << "\n";

    // simple I/O demo (no user input to keep program non-interactive)
    cout << "All basics demonstrated.\n";
    return 0;
}
#endif
