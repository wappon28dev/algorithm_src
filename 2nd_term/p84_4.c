#include <stdio.h>
#define HW 6
int main(void)
{
    char c[6][6] = {
        {' ', ' ', ' ', ' ', ' ', ' '},
        {' ', '*', '*', '*', '*', '*'},
        {' ', '*', '*', '*', '*', ' '},
        {' ', '*', '*', '*', ' ', ' '},
        {' ', '*', '*', ' ', ' ', ' '},
        {' ', '*', ' ', ' ', ' ', ' '},
    };

    char ch[6][6];
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%2c", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%2c", c[j][HW - i]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%2c", c[HW - i][HW - j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%2c", c[HW - j][i]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

/*
o—Í :

    * * * * *
    * * * *
    * * *
    * *
    *

    *
    * *
    * * *
    * * * *
    * * * * *

            *
        * *
        * * *
    * * * *
    * * * * *

    * * * * *
    * * * *
        * * *
        * *
            *

*/
