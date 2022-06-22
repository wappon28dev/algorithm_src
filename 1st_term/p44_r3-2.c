// p44_r3-2: practice `for` syntax
#include <stdio.h>

int main(void) {

    int length = 3;
    int i, j;

    for (i = 0; i < length; i++){
        for (j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;

}


/*
o—Í : 

    *
    **
    ***

*/
