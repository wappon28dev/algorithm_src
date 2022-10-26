// p94_r2: calculate
#include <stdio.h>
#include <math.h>

int main(void)
{

    float upSum, downSum = 0;
    int i;

    for (i = 10000; i >= 1; i--)
    {
        downSum += (1.0 / i);
    }
    for (i = 1; i <= 10000; i++)
    {
        upSum += (1.0 / i);
    }
    printf("�����̘a: %22.20f\n", upSum);
    printf("�~���̘a: %22.20f\n", downSum);

    return 0;
}

/*
�o��:

    �����̘a: 9.78761291503906250000
    �~���̘a: 9.78760433197021480000

*/