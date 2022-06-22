// p29_r2: calculate circumference
#include <stdio.h>
#define PI 3.141592

int main(void) {
    
    int r = 10;
    float l = 2.0 * PI * r;
    
    printf("”¼Œar = %6d\n", r);
    printf("‰~ül = %6.2f\n", l);
    
    printf("\n\n —ûK–â‘è:");
    printf("\n%%10f  : %10f", l);
    printf("\n%%-10f : %-10f", l);
    printf("\n%%10.4f: %10.4f", l);
    printf("\n%%.4f  : %.4f", l);

    return 0;
    
}


/*
o—Í ( ¥ ‚Í‹ó”’)F

    ”¼Œar = ¥¥¥¥10
    ‰~ül = ¥62.83

    —ûK–â‘è:
    %10f  : ¥62.831841
    %-10f : 62.831841 
    %10.4f: ¥¥¥62.8318
    %.4f  : 62.8318

*/
