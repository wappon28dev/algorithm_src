#include <stdio.h>
#include <string.h>
#define HW 5

int main(void)
{
    char c[HW][HW] = {
        {'*', ' ', ' ', ' ', '*'},
        {'*', '*', ' ', '*', '*'},
        {'*', ' ', '*', ' ', '*'},
        {'*', ' ', ' ', ' ', '*'},
        {'*', '*', ' ', ' ', '*'},
    };

    printf("\noriginal: \n");
    int i, j;
    for (i = 0; i < HW; i++)
    {
        for (j = 0; j < HW; j++)
        {
            printf("%c ", c[i][j]);
        }
        printf("\n");
    }

    printf("\nturned 90 deg: \n");
    for (i = 0; i < HW; i++)
    {
        for (j = 0; j < HW; j++)
        {
            printf("%c ", c[j][HW - 1 - i]);
        }
        printf("\n");
    }

    printf("\nturned 180 deg: \n");
    for (i = 0; i < HW; i++)
    {
        for (j = 0; j < HW; j++)
        {
            printf("%c ", c[HW - 1 - i][HW - 1 - j]);
        }
        printf("\n");
    }

    printf("\nturned 270 deg: \n");
    for (i = 0; i < HW; i++)
    {
        for (j = 0; j < HW; j++)
        {
            printf("%c ", c[HW - 1 - j][i]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}

/*
o—Í :

    original:
    *       *
    * *   * *
    *   *   *
    *       *
    *       *

    turned 90 deg:
    * * * * *
      *
        *
      *
    * * * * *

    turned 180 deg:
    *       *
    *       *
    *   *   *
    * *   * *
    *       *

    turned 270 deg:
    * * * * *
          *
        *
          *
    * * * * *

*/
