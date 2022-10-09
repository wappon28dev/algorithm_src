#include <stdio.h>
#include <string.h>

int main(void)
{
    int cites = 4;
    int months = 6;

    char *cityNames[4] = {
        "�s�s1",
        "�s�s2",
        "�s�s3",
        "�s�s4",
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
        printf("%s�̕���: %.2f �� \n", cityNames[i], average[i]);
    }

    return 0;
}

/*
�o�� :

    �s�s1�̕���: 8.47 ��
    �s�s2�̕���: 15.88 ��
    �s�s3�̕���: 16.50 ��
    �s�s4�̕���: 22.73 ��

*/
