#include <stdio.h>
#include "libs/example_lib_b.h"

int main() {
    printf("Hello, World!\n");
    printf("Result of 5+3+2+1 =%i\n", add_four(5, 3, 2, 1));
    //float test = add_four(1,2,3,4);
    return 0;
}
