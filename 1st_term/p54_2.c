// p54_2: calculate square of triangle
#include <stdio.h>

int main(void) {
    
    float x, y;

    printf("c‚Ì’·‚³‚ğ“ü—Í > "); scanf("%f", &x);
   
    printf("‰¡‚Ì’·‚³‚ğ“ü—Í > "); scanf("%f", &y);

    float s = x * y;

    // printf("’·•ûŒ`‚Ì–ÊÏs = %9.4f \n", s);

    if (s < 100){
        printf("¬");
    } else if (s < 200){
        printf("’†");
    } else {
        printf("‘å");
    }

    return 0;

}


/*
“ü—Í :

    c‚Ì’·‚³‚ğ“ü—Í > 25
    ‰¡‚Ì’·‚³‚ğ“ü—Í > 4

o—Í : 

    ’†
    
*/
