#include <stdio.h>

int main(void)
{
    int lastDates[4][3] = {{31, 28, 31}, {30, 31, 30}, {31, 31, 30}, {31, 30, 31}};

    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%3d", lastDates[i][j]);
        }
        printf("\n");
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
