#include <catch2/catch_test_macros.hpp>

// forward decls from cpp_basics.cpp
int add(int,int);
bool is_prime(int);

TEST_CASE("add works") {
    REQUIRE(add(3,4) == 7);
    REQUIRE(add(-2,5) == 3);
}

TEST_CASE("is_prime basics") {
    REQUIRE_FALSE(is_prime(1));
    REQUIRE(is_prime(2));
    REQUIRE(is_prime(29));
    REQUIRE_FALSE(is_prime(100));
}
