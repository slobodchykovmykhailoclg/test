#ifndef MEDIAN_H
#define MEDIAN_H

#include <vector>
#include <algorithm>

double median(std::vector<int> arr)
{
    std::sort(arr.begin(), arr.end());

    int n = arr.size();

    if (n % 2 == 1)
    {
        return arr[n / 2];
    }

    return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
}

#endif