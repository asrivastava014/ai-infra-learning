#include <gtest/gtest.h>

// forward decls from cpp_pointers_arrays.cpp
void inc_by_value(int x);
void inc_by_ref(int& x);
int  sum_const_ref(const int (&arr)[5]);

TEST(Pointers, PassByValueVsRef) {
    int y = 5;
    inc_by_value(y);
    EXPECT_EQ(y, 5);   // unchanged
    inc_by_ref(y);
    EXPECT_EQ(y, 6);   // incremented
}

TEST(Pointers, SumConstRef) {
    int a[5] = {10,20,30,40,50};
    EXPECT_EQ(sum_const_ref(a), 150);
}
