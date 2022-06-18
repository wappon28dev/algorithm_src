// p29_r2: calculate circumference
#include <stdio.h>
#define PI 3.141592

int main(void) {
    
    int r = 10;
    float l = 2.0 * PI * r;
    
    printf("半径r = %6d¥n", r);
    printf("円周l = %6.2f¥n", l);
    
    printf("¥n¥n 練習問題:");
    printf("¥n%%10f  : %10f", l);
    printf("¥n%%-10f : %-10f", l);
    printf("¥n%%10.4f: %10.4f", l);
    printf("¥n%%.4f  : %.4f", l);

    return 0;
    
}


/*
出力 ( ･ は空白)：

    半径r = ････10
    円周l = ･62.83

    練習問題:
    %10f  : ･62.831841
    %-10f : 62.831841 
    %10.4f: ･･･62.8318
    %.4f  : 62.8318

*/
