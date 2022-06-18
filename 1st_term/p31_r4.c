// p31_r4: calculate square of rectangle via scanf
#include <stdio.h>

int main(void) {
    
    float x, y;

    printf("縦の長さを入力 > "); scanf("%f", &x);
   
    printf("横の長さを入力 > "); scanf("%f", &y);

    float s = x * y;

    printf("長方形の面積s = %9.4f ", s);

    return 0;

}


/*
入力 :

    縦の長さを入力 > 2.5
    横の長さを入力 > 4

出力 : 

   長方形の面積s = 10.0000

*/
