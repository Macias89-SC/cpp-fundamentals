#pragma once
#include <limits>
#include <vector>
#include <map>
#include <algorithm>


int maxOfVector(const std::vector<int>& vec) {
    return  *std::max_element(vec.begin(), vec.end());

}
