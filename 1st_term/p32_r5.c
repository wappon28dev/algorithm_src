// p32_r5: calculate value of sin30°, cos30°
#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(void) {
    
    double angle = 30.0;
    double sinAngle = sin(angle * PI / 180);
    double cosAngle = cos(angle * PI / 180);

    printf("sin(%.0f°) = %.4f ¥n", angle, sinAngle);
    printf("cos(%.0f°) = %.4f ¥n", angle, cosAngle);

    return 0;

}


/*
出力 : 

    sin(30°) = 0.5000
    cos(30°) = 0.8660

*/
