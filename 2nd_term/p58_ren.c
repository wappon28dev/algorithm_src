// p58_ren: Array test 
#include <stdio.h>

int main(void) {

    int lastDates[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int lastMonth = 0;
    do {

        printf("1�����瑫�����킹�錎����� > ");
        scanf("%d", &lastMonth);

    } while (lastMonth > 12);

    int i, sum;
    for (i = 0; i < lastMonth; i++){
        sum += lastDates[i];
    }

    printf("1������%d���̍��v: %d\n", lastMonth, sum);

    return 0;

}

/*
�o�� : 

    1�����瑫�����킹�錎����� > 18
    1�����瑫�����킹�錎����� > 12
    1������12���̍��v: 365

*/
