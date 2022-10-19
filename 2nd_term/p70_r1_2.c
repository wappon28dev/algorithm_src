// p70_r2: learning function
#include <stdio.h>

void showSum(int a, int b)
{
    printf("sum => %d\n", a + b);
}

int main(void)
{
    int a, b;

    printf("a   => ");
    scanf("%d", &a);
    printf("b   => ");
    scanf("%d", &b);

    showSum(a, b);

    return 0;
}

/*
o—Í :

    a => 14
    b => 15
    sum: 29

*/
