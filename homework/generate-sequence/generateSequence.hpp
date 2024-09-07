#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    int VectorDimension;
    if ( count > 0 ){
        VectorDimension = count;
    }
    else{
        VectorDimension = 0;
    }
    std::vector<int> MyVector (VectorDimension);

    if (count > 0 ){
        for ( int i = 0; i < MyVector.size() ; i++  ){
            MyVector[i] =  step * (i + 1);
        }
    }
    return MyVector;
}
