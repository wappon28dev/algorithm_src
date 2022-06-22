// p54_1: calculate square of triangle
#include <stdio.h>
#include <math.h>

int main(void) {
    
    double a, b, c;
    
    printf("三角形の1辺aを入力  > "); scanf("%lf", &a);
    printf("その他の1辺bを入力  > "); scanf("%lf", &b);
    printf("残りの1辺cを入力    > "); scanf("%lf", &c);

    double s = (a + b + c)/2.0;
    double square = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("三角形の面積： %f", square);

    return 0;

}


/*
入力 :

    三角形の1辺aを入力  > 3
    その他の1辺bを入力  > 4
    残りの1辺cを入力    > 5

出力 : 

    三角形の面積： 6.000000
    
*/
