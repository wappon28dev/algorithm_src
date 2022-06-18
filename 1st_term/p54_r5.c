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

    printf("1から%dまでの奇数の和 : %d¥n", length, sumOdd);
    printf("1から%dまでの偶数の和 : %d¥n", length, sumEven);

    return 0;

}

/*
出力 : 

    1から10までの奇数の和 : 25
    1から10までの偶数の和 : 30

*/
