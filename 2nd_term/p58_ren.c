// p58_ren: Array test 
#include <stdio.h>

int main(void) {

    int lastDates[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int lastMonth = 0;
    do {

        printf("1月から足し合わせる月を入力 > ");
        scanf("%d", &lastMonth);

    } while (lastMonth > 12);

    int i, sum;
    for (i = 0; i < lastMonth; i++){
        sum += lastDates[i];
    }

    printf("1月から%d月の合計: %d\n", lastMonth, sum);

    return 0;

}

/*
出力 : 

    1月から足し合わせる月を入力 > 18
    1月から足し合わせる月を入力 > 12
    1月から12月の合計: 365

*/
