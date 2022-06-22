// p54_r5: calculate sum
#include <stdio.h>

int main(void) {

    int length = 10;
    int sumOdd, sumEven;
    int i;

    for (i = 0; i <= length; i++){
        if (i % 2 != 0){
            sumOdd += i;
        } else {
            sumEven += i;
        }
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
