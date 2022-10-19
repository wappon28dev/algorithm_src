// p70_r1: learning function
#include <stdio.h>

void askNums(void)
{
    int a, b;

    printf("a   => ");
    scanf("%d", &a);
    printf("b   => ");
    scanf("%d", &b);

    printf("sum => %d\n", a + b);
}

int main(void)
{
    askNums();
    return 0;
}

/*
o—Í :

    a => 14
    b => 15
    sum: 29

*/
