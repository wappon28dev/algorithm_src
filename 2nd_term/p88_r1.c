// p88_1: calculate
#include <stdio.h>
#include <string.h>
#define MONTHS 12

int main(void)
{
    float amount[MONTHS];
    float sum = 0.0F;
    int i;

    printf("降水量 (mm) を入力:\n");
    for (i = 0; i < 12; i++)
    {
        printf("  %2d月 => ", i + 1);
        scanf("%f", &amount[i]);
        sum += amount[i];
    }
    printf("--------------------\n");
    printf("合計: %7.2f mm\n", sum);
    printf("平均: %7.2f mm\n", sum / MONTHS);

    return 0;
}

/*
入力:

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


出力:

    降水量 (mm) を入力:
       1月 => 89.5
       2月 => 128.0
       3月 => 113.0
       4月 => 87.5
       5月 => 107.0
       6月 => 134.0
       7月 => 309.0
       8月 => 106.5
       9月 => 53.5
      10月 => 131.0
      11月 => 156.5
      12月 => 42.0
    --------------------
    合計: 1457.50 mm
    平均:  121.46 mm

*/