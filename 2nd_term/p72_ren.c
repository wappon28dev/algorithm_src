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

        printf(" --- %d�l�� --- \n", i + 1);
        printf("�N�� => ");
        scanf("%d", &age);

        int amount = calculateAmount(age);
        printf("����:   %d �~\n", amount);
        amountsSum += amount;
    }

    printf("--------------\n");
    printf("���v:   %d �~\n", amountsSum);

    return 0;
}

/*
�o�� :

    --- 1�l�� ---
    �N�� => 0
    ����:   0 �~
    --- 2�l�� ---
    �N�� => 5
    ����:   0 �~
    --- 3�l�� ---
    �N�� => 10
    ����:   100 �~
    --- 4�l�� ---
    �N�� => 15
    ����:   200 �~
    --------------
    ���v:   300 �~

*/
