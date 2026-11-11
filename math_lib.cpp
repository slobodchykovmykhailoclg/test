#include <iostream>
#include <vector>
#include "median.h"

int main()
{
    std::vector<int> numbers = {7, 2, 5, 1, 9, 4};

    std::cout << "Median: " << median(numbers) << std::endl;

    return 0;
}