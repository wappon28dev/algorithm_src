// p84_1: Array test 
#include <stdio.h>

int main(void) {

    int length = 10;

    int array[length];
    int maxIndex = 0;
    int maxValue = 0;

    int i;
    for (i = 0; i < length; i++){
        printf("array[%d] > ", i);
        scanf("%d", &array[i]);
    
        if (array[i] > maxValue){
            maxIndex = i;
            maxValue = array[i];
        }

    }

    printf("--------------------\n");
    printf("最大値: array[%d] = %d\n", maxIndex, maxValue);

    return 0;

}

/*
出力 : 

    array[0] > 5
    array[1] > 46
    array[2] > 7
    array[3] > 8
    array[4] > 9
    array[5] > 45
    array[6] > 12
    array[7] > 76
    array[8] > 76
    array[9] > 23
    --------------------
    最大値: array[8] = 76

*/
