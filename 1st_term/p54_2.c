// p54_2: calculate square of triangle
#include <stdio.h>

int main(void) {
    
    float x, y;

    printf("縦の長さを入力 > "); scanf("%f", &x);
   
    printf("横の長さを入力 > "); scanf("%f", &y);

    float s = x * y;

    // printf("長方形の面積s = %9.4f ¥n", s);

    if (s < 100){
        printf("小");
    } else if (s < 200){
        printf("中");
    } else {
        printf("大");
    }

    return 0;

}


/*
入力 :

    縦の長さを入力 > 25
    横の長さを入力 > 4

出力 : 

    中
    
*/
