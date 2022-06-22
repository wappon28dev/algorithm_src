// p44_ren-1: practice `for` syntax
#include <stdio.h>

int main(void) {

    int length = 3;
    int amount = 2;
    int i, j;

    int loopingNum = length + amount;

    for (i = 0; i <= loopingNum; i += amount){ // i = 0, 2, 4 < 5
        for (j = 0; j < (loopingNum - i); j++){ // j = 0, 1, 2, 3
            printf("*");
        }
        printf("\n");
    }

    return 0;

}

/*
o—Í : 

    *****
    ***
    *

*/
