// p30_r3: calculate average with int, float
#include <stdio.h>

int main(void) {
    
    int n = 4;
    int sum = 10;

    float averageWithInt = sum / n;
    float averageWithFloat = (float)sum / (float)n;
    
    printf("int  Œ^‚Å‚Ì•½‹Ï’l : %f\n", averageWithInt);
    printf("floatŒ^‚Å‚Ì•½‹Ï’l : %f\n", averageWithFloat);

    return 0;

}


/*
o—Í : 

    int  Œ^‚Å‚Ì•½‹Ï’l : 2.000000
    floatŒ^‚Å‚Ì•½‹Ï’l : 2.500000

*/
