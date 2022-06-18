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

    printf("1から%dまでの奇数の和 : %d¥n", length, sumOdd);
    printf("1から%dまでの偶数の和 : %d¥n", length, sumEven);

    return 0;

}

/*
出力 : 

    1から10までの奇数の和 : 25
    1から10までの偶数の和 : 30

*/
