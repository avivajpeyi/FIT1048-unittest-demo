#include "gtest/gtest.h"
#include "example.h"

TEST(example, multiply)
{
    double res;
    res = multiply_numbers(1.0, 2.0);
    ASSERT_NEAR(res, 2.0, 1.0e-11);
}