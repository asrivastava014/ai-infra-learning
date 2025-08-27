#include <catch2/catch_test_macros.hpp>

// forward decls from cpp_pointers_arrays.cpp
void inc_by_value(int x);
void inc_by_ref(int& x);
int  sum_const_ref(const int (&arr)[5]);

TEST_CASE("pass-by-value vs ref") {
    int y = 5;
    inc_by_value(y);
    REQUIRE(y == 5);       // unchanged
    inc_by_ref(y);
    REQUIRE(y == 6);       // incremented
}

TEST_CASE("sum_const_ref works") {
    int a[5] = {10,20,30,40,50};
    REQUIRE(sum_const_ref(a) == 150);
}
