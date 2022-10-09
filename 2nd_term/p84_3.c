#include <stdio.h>
#include <string.h>

int main(void)
{
    int cites = 4;
    int months = 6;

    char *cityNames[4] = {
        "ìsés1",
        "ìsés2",
        "ìsés3",
        "ìsés4",
    };

    float temperature[4][6] = {
        {-4.1, 0.1, 12.1, 20.5, 17.6, 4.6},
        {5.8, 8.9, 18.7, 25.4, 23.5, 13.0},
        {5.8, 9.0, 19.4, 27.2, 24.4, 13.2},
        {16.6, 18.6, 23.8, 28.5, 27.2, 21.7},
    };
    float average[4];

    int i;
    for (i = 0; i < cites; i++)
    {
        float sum = 0;

        int j;
        for (j = 0; j < months; j++)
        {
            sum += temperature[i][j];
        }

        average[i] = sum / (float)months;
        printf("%sÇÃïΩãœ: %.2f Åé \n", cityNames[i], average[i]);
    }

    return 0;
}

/*
èoóÕ :

    ìsés1ÇÃïΩãœ: 8.47 Åé
    ìsés2ÇÃïΩãœ: 15.88 Åé
    ìsés3ÇÃïΩãœ: 16.50 Åé
    ìsés4ÇÃïΩãœ: 22.73 Åé

*/
