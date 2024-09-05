#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int a =0;
    for ( auto element : numbers) {
        if ( element % 2 == 0 ){
            a = a + element;
        }
    }
    return a;
}
