// p31_ren: calculate average with int, float via scanf
#include <stdio.h>

int main(void) {
    
    int n, sum;

    printf("個数を入力 > "); scanf("%d", &n);

    printf("合計を入力 > "); scanf("%d", &sum);

    float averageWithInt = sum / n;
    float averageWithFloat = (float)sum / (float)n;
    
    printf("int  型での平均値 : %f", averageWithInt);
    printf("float型での平均値 : %f", averageWithFloat);

    return 0;

}


/*
入力 :

    個数を入力 > 2.5
    合計を入力 > 4

出力 : 

    int  型での平均値 : 2.000000
    float型での平均値 : 2.500000

*/
