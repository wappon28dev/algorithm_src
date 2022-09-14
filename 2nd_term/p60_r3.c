#include <stdio.h>
#include <string.h>

int main(void)
{
    int table[10][10];
    int i, j;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            table[i][j] = i * j;
        }
    }
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%3d", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/* o—ÍF

  1  2  3  4  5
  2  4  6  8 10
  3  6  9 12 15

*/
