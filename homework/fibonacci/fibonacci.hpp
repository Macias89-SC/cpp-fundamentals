#pragma once

int fibonacci_iterative(int sequence) {
    int a;
    int b;
    if(sequence ==0 ) return 0;
    a = 0;
    b = 1;
    for(int i=0; i < (sequence-1); i++)
    {
        std::swap(a,b);
        b += a;
    }
    return b;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0 ){
        return 0;
    }
    else if ( sequence == 1 ){
        return 1;
    }
    return fibonacci_recursive(sequence-1)+ fibonacci_recursive(sequence-2);
}
