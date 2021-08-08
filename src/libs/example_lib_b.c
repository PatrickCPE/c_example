//
// Created by patrick on 8/2/21.
//

#include "example_lib_b.h"
#include "example_lib_a.h"

int add_four(int a, int b, int c, int d){
    int e = add_two(a, b);
    int f = add_two(c, d);
    return add_two(e, f);
}