#include <stdio.h>

int main(void)
{
    int lastDates[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int i;
    for (i = 0; i < 12; i++)
    {
        printf("%3d", lastDates[i]);

        if ((i + 1) % 3 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}

/*
o—Í :

    31 28 31
    30 31 30
    31 31 30
    31 30 31

*/
