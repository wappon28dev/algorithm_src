// p58_r1: Array test
#include <stdio.h>

int main(void) {

    int n[10];
    int lastDates[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   
    int i, s;

    s = 0;
    for(i = 0; i < 10; i++){
        n[i] = i + 1;
        s = s + n[i];
    }
    printf("整数の和: %d\n", s);

    s = 0;
    for(i = 0; i < 12; i++){
        s += lastDates[i];
    }
    printf("月の合計: %d\n", s);

    return 0;

}

/*
出力 : 

    整数の和: 55
    月の合計: 365

*/
