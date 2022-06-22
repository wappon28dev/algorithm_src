// p31_r4: calculate square of rectangle via scanf
#include <stdio.h>

int main(void) {
    
    float x, y;

    printf("c‚Ì’·‚³‚ğ“ü—Í > "); scanf("%f", &x);
   
    printf("‰¡‚Ì’·‚³‚ğ“ü—Í > "); scanf("%f", &y);

    float s = x * y;

    printf("’·•ûŒ`‚Ì–ÊÏs = %9.4f ", s);

    return 0;

}


/*
“ü—Í :

    c‚Ì’·‚³‚ğ“ü—Í > 2.5
    ‰¡‚Ì’·‚³‚ğ“ü—Í > 4

o—Í : 

   ’·•ûŒ`‚Ì–ÊÏs = 10.0000

*/
