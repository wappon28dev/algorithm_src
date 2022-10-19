// p72_ren: learning function scope
#include <stdio.h>
#define HEADCOUNT 4

int calculateAmount(int age)
{
    int adult = 200;

    if (age < 6)
    {
        return 0;
    }
    else if (age < 12)
    {
        return adult / 2;
    }
    else
    {
        return adult;
    }
}

int main()
{
    int amountsSum;
    int i;

    for (i = 0; i < HEADCOUNT; i++)
    {
        int age;

        printf(" --- %d人目 --- \n", i + 1);
        printf("年齢 => ");
        scanf("%d", &age);

        int amount = calculateAmount(age);
        printf("料金:   %d 円\n", amount);
        amountsSum += amount;
    }

    printf("--------------\n");
    printf("合計:   %d 円\n", amountsSum);

    return 0;
}

/*
出力 :

    --- 1人目 ---
    年齢 => 0
    料金:   0 円
    --- 2人目 ---
    年齢 => 5
    料金:   0 円
    --- 3人目 ---
    年齢 => 10
    料金:   100 円
    --- 4人目 ---
    年齢 => 15
    料金:   200 円
    --------------
    合計:   300 円

*/
