// p30_r3: calculate average with int, float
#include <stdio.h>

int main(void) {
    
    int n = 4;
    int sum = 10;

    float averageWithInt = sum / n;
    float averageWithFloat = (float)sum / (float)n;
    
    printf("int  型での平均値 : %f¥n", averageWithInt);
    printf("float型での平均値 : %f¥n", averageWithFloat);

    return 0;

}


/*
出力 : 

    int  型での平均値 : 2.000000
    float型での平均値 : 2.500000

*/
