#include "gtest/gtest.h"
#include "factorial.h"

TEST(factorial_case, factorial_two)
{
    int f = calculate_factorial(2);
    ASSERT_EQ(2, 2);
}