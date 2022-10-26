// p88_1: calculate
#include <stdio.h>
#include <string.h>
#define MONTHS 12

int main(void)
{
    float amount[MONTHS];
    float sum = 0.0F;
    int i;

    printf("�~���� (mm) �����:\n");
    for (i = 0; i < 12; i++)
    {
        printf("  %2d�� => ", i + 1);
        scanf("%f", &amount[i]);
        sum += amount[i];
    }
    printf("--------------------\n");
    printf("���v: %7.2f mm\n", sum);
    printf("����: %7.2f mm\n", sum / MONTHS);

    return 0;
}

/*
����:

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


�o��:

    �~���� (mm) �����:
       1�� => 89.5
       2�� => 128.0
       3�� => 113.0
       4�� => 87.5
       5�� => 107.0
       6�� => 134.0
       7�� => 309.0
       8�� => 106.5
       9�� => 53.5
      10�� => 131.0
      11�� => 156.5
      12�� => 42.0
    --------------------
    ���v: 1457.50 mm
    ����:  121.46 mm

*/