#include <iostream>
#include <array>
using namespace std;

// pass-by-value: does NOT modify caller's variable
void inc_by_value(int x) { x++; }

// pass-by-reference: DOES modify caller's variable
void inc_by_ref(int& x) { x++; }

// read-only large object via const reference (no copy)
int sum_const_ref(const int (&arr)[5]) {
    int s = 0;
    for (int i = 0; i < 5; ++i) s += arr[i];
    return s;
}

#ifndef UNIT_LIB_BUILD
int main() {
    // C-style array + pointer basics
    int a[5] = {10, 20, 30, 40, 50};
    int* p = a;            // array decays to pointer to first element
    cout << "a[0]=" << a[0] << ", *p=" << *p << "\n";
    cout << "a[2]=" << a[2] << ", *(p+2)=" << *(p+2) << "\n"; // pointer arithmetic

    // references vs pointers
    int x = 42;
    int& r = x;            // r is an alias to x
    int* q = &x;           // q points to x
    cout << "x=" << x << ", r=" << r << ", *q=" << *q << "\n";
    r = 43;                // modifies x via reference
    (*q)++;                // modifies x via pointer
    cout << "After r=43 and (*q)++ => x=" << x << "\n";

    // pass-by-value vs pass-by-reference
    int y = 5;
    inc_by_value(y);       // no effect
    cout << "After inc_by_value(y): y=" << y << "\n";
    inc_by_ref(y);         // y becomes 6
    cout << "After inc_by_ref(y):   y=" << y << "\n";

    // const reference to avoid copying & enforce read-only
    cout << "sum_const_ref(a) = " << sum_const_ref(a) << "\n";

    // std::array (safer than raw arrays, knows its size)
    std::array<int, 4> b{1,2,3,4};
    cout << "std::array b size=" << b.size() << ", b[2]=" << b[2] << "\n";

    // pointer to const vs const pointer (quick illustration)
    //const int ci = 100;
    //const int* ptr_to_const = &ci; // cannot modify *ptr_to_const
    //int* const const_ptr = &x;  // const pointer (uncomment to play): pointer can't change, *const_ptr can
    

    cout << "Pointers, references, arrays demo complete.\n";
    return 0;
}
#endif
