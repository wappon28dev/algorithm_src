// p88_1: calculate
#include <stdio.h>
#include <string.h>
#define MONTHS 12

int main(void)
{
    float amount[MONTHS];
    float sum = 0.0F;
    int i;

    printf("~…—Ê (mm) ‚ğ“ü—Í:\n");
    for (i = 0; i < 12; i++)
    {
        printf("  %2dŒ => ", i + 1);
        scanf("%f", &amount[i]);
        sum += amount[i];
    }
    printf("--------------------\n");
    printf("‡Œv: %7.2f mm\n", sum);
    printf("•½‹Ï: %7.2f mm\n", sum / MONTHS);

    return 0;
}

/*
“ü—Í:

    89.5
    128.0
    113.0
    87.5
    107.0
    134.0
    309.0
    106.5
    53.5
    131.0
    156.5
    42.0


o—Í:

    ~…—Ê (mm) ‚ğ“ü—Í:
       1Œ => 89.5
       2Œ => 128.0
       3Œ => 113.0
       4Œ => 87.5
       5Œ => 107.0
       6Œ => 134.0
       7Œ => 309.0
       8Œ => 106.5
       9Œ => 53.5
      10Œ => 131.0
      11Œ => 156.5
      12Œ => 42.0
    --------------------
    ‡Œv: 1457.50 mm
    •½‹Ï:  121.46 mm

*/