#include <stdio.h>
#include <string.h>

int main(void)
{
    char character[5][5] = {
        {'*', ' ', ' ', ' ', '*'},
        {'*', '*', ' ', '*', '*'},
        {'*', ' ', '*', ' ', '*'},
        {'*', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', '*'},
    };

    int length = 5;

    printf("\noriginal: \n");
    int i, j;
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
        {
            printf("%c ", character[i][j]);
        }
        printf("\n");
    }

    printf("\nturned 90 deg: \n");
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
        {
            printf("%c ", character[j][i]);
        }
        printf("\n");
    }

    printf("\nturned 180 deg: \n");
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
        {
            printf("%c ", character[(length - 2) - (i - 1)][j]);
        }
        printf("\n");
    }

    printf("\nturned 270 deg: \n");
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
        {
            printf("%c ", character[(length - 2) - (j - 1)][i]);
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
