// p44_ren-1: practice `for` syntax
#include <stdio.h>

int main(void) {

    int n = 3;
    int i, j;

    for (i = n; i >= 1; i--){ // i = 3, 2, 1
        for(j = 1; j <= 2 * i - 1; j++){ // j = 1, 3, 5
            printf("*");
        }
        printf("\n");
    }

}

/*
o—Í : 

    *****
    ***
    *

*/
