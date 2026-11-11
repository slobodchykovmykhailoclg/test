#include <gtest/gtest.h>
#include <vector>
#include "median.h"

TEST(MedianTest, EvenNumberOfElements)
{
    std::vector<int> arr = {1, 2, 5, 7};

    EXPECT_DOUBLE_EQ(median(arr), 3.5);
}