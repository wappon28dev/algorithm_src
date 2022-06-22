// p54_r5: calculate sum
#include <stdio.h>

int main(void) {

    int length = 10;
    int sumOdd, sumEven;
    int i, j;

    for (i = 1; i <= length; i += 2){
        sumOdd += i;
    }
    
    for (j = 0; j <= length; j += 2){ 
        sumEven += j;
    }

    printf("1‚©‚ç%d‚Ü‚Å‚ÌŠï”‚Ì˜a : %d\n", length, sumOdd);
    printf("1‚©‚ç%d‚Ü‚Å‚Ì‹ô”‚Ì˜a : %d\n", length, sumEven);

    return 0;

}

/*
o—Í : 

    1‚©‚ç10‚Ü‚Å‚ÌŠï”‚Ì˜a : 25
    1‚©‚ç10‚Ü‚Å‚Ì‹ô”‚Ì˜a : 30

*/
