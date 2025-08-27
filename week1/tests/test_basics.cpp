#include <gtest/gtest.h>

// forward decls from cpp_basics.cpp
int add(int,int);
bool is_prime(int);

TEST(Basics, AddWorks) 
{
    EXPECT_EQ(add(3,4), 7);
    EXPECT_EQ(add(-2,5), 3);
}

TEST(Basics, IsPrime) 
{
    EXPECT_FALSE(is_prime(1));
    EXPECT_TRUE(is_prime(2));
    EXPECT_TRUE(is_prime(29));
    EXPECT_FALSE(is_prime(100));
}
