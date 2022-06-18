// p54_r6: 
#include <stdio.h>

int main(void) {

    int length = 3;
    int amount = 2;
    int a, b, c;

    int loopingNum = length + amount;

    for (a = 0; a < loopingNum; a += amount){ 
        for (b = 0; b < (length - a); b += amount){ 
            printf(" ");
        }
        for (c = 0; c <= a; c++){ 
            printf("*");
        }
        printf("¥n");
    }

    return 0;

}

/*
出力 : 

      *
     ***
    *****

*/
